// ===== 004972c8  FUN_004972c8 =====

void FUN_004972c8(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined8 *param_4)

{
  ulong uVar1;
  byte *pbVar2;
  size_t sVar3;
  char *pcVar4;
  
  pcVar4 = (char *)*param_2;
  sVar3 = strlen(pcVar4);
                    /* try { // try from 004972f4 to 004972ff has its CatchHandler @ 00497354 */
  FUN_00303e0c(param_1,pcVar4,sVar3);
  uVar1 = *(ulong *)(param_3 + 8);
  pbVar2 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar2 = param_3 + 1;
    uVar1 = (ulong)(*param_3 >> 1);
  }
                    /* try { // try from 00497318 to 0049731f has its CatchHandler @ 00497350 */
  FUN_00303e0c(param_1,pbVar2,uVar1);
  pcVar4 = (char *)*param_4;
  sVar3 = strlen(pcVar4);
                    /* try { // try from 00497330 to 0049733b has its CatchHandler @ 0049734c */
  FUN_00303e0c(param_1,pcVar4,sVar3);
  return;
}


// ===== 00497358  FUN_00497358 =====

void FUN_00497358(long *param_1,byte *param_2,byte *param_3)

{
  size_t sVar1;
  size_t sVar2;
  byte *pbVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x25;
  undefined2 uVar15;
  undefined8 uVar16;
  long lVar17;
  float fVar18;
  long *local_80;
  long *plStack_78;
  undefined1 local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  uVar14 = *(ulong *)(param_2 + 8);
  pbVar3 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar3 = param_2 + 1;
    uVar14 = (ulong)(*param_2 >> 1);
  }
                    /* try { // try from 004973a8 to 004973af has its CatchHandler @ 00497814 */
  uVar7 = FUN_0034bfb4(&local_80,pbVar3,uVar14);
  uVar14 = param_1[1];
  if (uVar14 != 0) {
    uVar16 = NEON_cnt(uVar14,1);
    uVar15 = NEON_uaddlv(uVar16,1);
    uVar13 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
    if (uVar13 < 2) {
      unaff_x25 = uVar14 - 1 & uVar7;
    }
    else {
      unaff_x25 = uVar7;
      if (uVar14 <= uVar7) {
        uVar10 = 0;
        if (uVar14 != 0) {
          uVar10 = uVar7 / uVar14;
        }
        unaff_x25 = uVar7 - uVar10 * uVar14;
      }
    }
    puVar12 = *(undefined8 **)(*param_1 + unaff_x25 * 8);
    if ((puVar12 != (undefined8 *)0x0) && (plVar8 = (long *)*puVar12, plVar8 != (long *)0x0)) {
      sVar1 = (ulong)(*param_2 >> 1);
      pbVar3 = param_2 + 1;
      if ((*param_2 & 1) != 0) {
        sVar1 = *(size_t *)(param_2 + 8);
        pbVar3 = *(byte **)(param_2 + 0x10);
      }
      if (uVar13 < 2) {
        do {
          if (plVar8[1] == uVar7) {
            bVar4 = *(byte *)(plVar8 + 2);
            sVar2 = (ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar8[3];
            }
            if (sVar2 == sVar1) {
              if ((bVar4 & 1) == 0) {
                if (bVar4 < 2) goto LAB_0049756c;
                uVar13 = 0;
                while (*(byte *)((long)plVar8 + uVar13 + 0x11) == pbVar3[uVar13]) {
                  uVar13 = uVar13 + 1;
                  if (bVar4 >> 1 == uVar13) goto LAB_0049756c;
                }
              }
              else {
                iVar6 = memcmp((void *)plVar8[4],pbVar3,plVar8[3]);
                if (iVar6 == 0) goto LAB_0049756c;
              }
            }
          }
          else if ((plVar8[1] & uVar14 - 1) != unaff_x25) break;
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar8[1];
          if (uVar13 == uVar7) {
            bVar4 = *(byte *)(plVar8 + 2);
            sVar2 = (ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar8[3];
            }
            if (sVar2 == sVar1) {
              if ((bVar4 & 1) == 0) {
                if (bVar4 < 2) goto LAB_0049756c;
                uVar13 = 0;
                while (*(byte *)((long)plVar8 + uVar13 + 0x11) == pbVar3[uVar13]) {
                  uVar13 = uVar13 + 1;
                  if (bVar4 >> 1 == uVar13) goto LAB_0049756c;
                }
              }
              else {
                iVar6 = memcmp((void *)plVar8[4],pbVar3,plVar8[3]);
                if (iVar6 == 0) goto LAB_0049756c;
              }
            }
          }
          else {
            if (uVar14 <= uVar13) {
              uVar10 = 0;
              if (uVar14 != 0) {
                uVar10 = uVar13 / uVar14;
              }
              uVar13 = uVar13 - uVar10 * uVar14;
            }
            if (uVar13 != unaff_x25) break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
  plVar8 = param_1 + 2;
  plVar9 = (long *)FUN_00759c3c(0x30);
  bVar4 = *param_3;
  local_70 = 0;
  *plVar9 = 0;
  plVar9[1] = uVar7;
  local_80 = plVar9;
  plStack_78 = plVar8;
  if ((bVar4 & 1) == 0) {
    lVar17 = *(long *)param_3;
    lVar11 = *(long *)(param_3 + 0x10);
    plVar9[3] = *(long *)(param_3 + 8);
    plVar9[2] = lVar17;
    plVar9[4] = lVar11;
  }
  else {
                    /* try { // try from 004975b0 to 004975b7 has its CatchHandler @ 004977ec */
    FUN_002fb36c(plVar9 + 2,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 8));
  }
  lVar11 = param_1[3];
  fVar18 = *(float *)(param_1 + 4);
  plVar9[5] = *(long *)(param_3 + 0x18);
  local_70 = 1;
  if ((uVar14 == 0) || (fVar18 * (float)uVar14 < (float)(lVar11 + 1))) {
    if (uVar14 < 3) {
      uVar13 = 1;
    }
    else {
      uVar13 = (ulong)((uVar14 & uVar14 - 1) != 0);
    }
    uVar13 = uVar13 | uVar14 << 1;
    uVar14 = (ulong)((float)(lVar11 + 1) / fVar18);
    if (uVar13 <= uVar14) {
      uVar13 = uVar14;
    }
    if (uVar13 - 1 == 0) {
      uVar13 = 2;
    }
    else if ((uVar13 & uVar13 - 1) != 0) {
                    /* try { // try from 0049765c to 004976df has its CatchHandler @ 004977e8 */
      uVar13 = FUN_00711ce0(uVar13);
    }
    uVar14 = param_1[1];
    if (uVar14 < uVar13) {
LAB_00497674:
      FUN_00476dd8(param_1,uVar13);
    }
    else if (uVar13 < uVar14) {
      uVar10 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar14 < 3) {
LAB_004976dc:
        uVar10 = FUN_00711ce0();
      }
      else {
        uVar16 = NEON_cnt(uVar14,1);
        uVar15 = NEON_uaddlv(uVar16,1);
        if (1 < (CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff)) goto LAB_004976dc;
        if (1 < uVar10) {
          uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
        }
      }
      if (uVar13 <= uVar10) {
        uVar13 = uVar10;
      }
      if (uVar13 < uVar14) goto LAB_00497674;
    }
    uVar14 = param_1[1];
    if ((uVar14 & uVar14 - 1) == 0) {
      unaff_x25 = uVar14 - 1 & uVar7;
      plVar9 = *(long **)(*param_1 + unaff_x25 * 8);
      goto joined_r0x00497768;
    }
    if (uVar7 < uVar14) {
      plVar9 = *(long **)(*param_1 + uVar7 * 8);
      unaff_x25 = uVar7;
      goto joined_r0x00497768;
    }
    uVar13 = 0;
    if (uVar14 != 0) {
      uVar13 = uVar7 / uVar14;
    }
    unaff_x25 = uVar7 - uVar13 * uVar14;
    plVar9 = *(long **)(*param_1 + unaff_x25 * 8);
    if (plVar9 == (long *)0x0) goto LAB_00497714;
LAB_004975fc:
    *local_80 = *plVar9;
    *plVar9 = (long)local_80;
  }
  else {
    plVar9 = *(long **)(*param_1 + unaff_x25 * 8);
joined_r0x00497768:
    if (plVar9 != (long *)0x0) goto LAB_004975fc;
LAB_00497714:
    *local_80 = param_1[2];
    param_1[2] = (long)local_80;
    *(long **)(*param_1 + unaff_x25 * 8) = plVar8;
    if (*local_80 != 0) {
      uVar7 = *(ulong *)(*local_80 + 8);
      if ((uVar14 & uVar14 - 1) == 0) {
        uVar7 = uVar7 & uVar14 - 1;
      }
      else if (uVar14 <= uVar7) {
        uVar13 = 0;
        if (uVar14 != 0) {
          uVar13 = uVar7 / uVar14;
        }
        uVar7 = uVar7 - uVar13 * uVar14;
      }
      *(long **)(*param_1 + uVar7 * 8) = local_80;
    }
  }
  uVar16 = 1;
  param_1[3] = param_1[3] + 1;
  plVar8 = local_80;
LAB_004977b8:
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar8,uVar16);
LAB_0049756c:
  uVar16 = 0;
  goto LAB_004977b8;
}


// ===== 00497818  FUN_00497818 =====

void FUN_00497818(long *param_1,byte *param_2,undefined8 param_3,undefined8 *param_4)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  byte *pbVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x25;
  undefined2 uVar15;
  undefined8 uVar16;
  long lVar17;
  float fVar18;
  long *local_80;
  long *plStack_78;
  undefined1 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar14 = *(ulong *)(param_2 + 8);
  pbVar10 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar10 = param_2 + 1;
    uVar14 = (ulong)(*param_2 >> 1);
  }
                    /* try { // try from 00497868 to 0049786f has its CatchHandler @ 00497ce4 */
  uVar6 = FUN_0034bfb4(&local_80,pbVar10,uVar14);
  uVar14 = param_1[1];
  if (uVar14 != 0) {
    uVar16 = NEON_cnt(uVar14,1);
    uVar15 = NEON_uaddlv(uVar16,1);
    uVar13 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
    if (uVar13 < 2) {
      unaff_x25 = uVar14 - 1 & uVar6;
    }
    else {
      unaff_x25 = uVar6;
      if (uVar14 <= uVar6) {
        uVar9 = 0;
        if (uVar14 != 0) {
          uVar9 = uVar6 / uVar14;
        }
        unaff_x25 = uVar6 - uVar9 * uVar14;
      }
    }
    puVar12 = *(undefined8 **)(*param_1 + unaff_x25 * 8);
    if ((puVar12 != (undefined8 *)0x0) && (plVar7 = (long *)*puVar12, plVar7 != (long *)0x0)) {
      sVar1 = (ulong)(*param_2 >> 1);
      pbVar10 = param_2 + 1;
      if ((*param_2 & 1) != 0) {
        sVar1 = *(size_t *)(param_2 + 8);
        pbVar10 = *(byte **)(param_2 + 0x10);
      }
      if (uVar13 < 2) {
        do {
          if (plVar7[1] == uVar6) {
            bVar3 = *(byte *)(plVar7 + 2);
            sVar2 = (ulong)(bVar3 >> 1);
            if ((bVar3 & 1) != 0) {
              sVar2 = plVar7[3];
            }
            if (sVar2 == sVar1) {
              if ((bVar3 & 1) == 0) {
                if (bVar3 < 2) goto LAB_00497a2c;
                uVar13 = 0;
                while (*(byte *)((long)plVar7 + uVar13 + 0x11) == pbVar10[uVar13]) {
                  uVar13 = uVar13 + 1;
                  if (bVar3 >> 1 == uVar13) goto LAB_00497a2c;
                }
              }
              else {
                iVar5 = memcmp((void *)plVar7[4],pbVar10,plVar7[3]);
                if (iVar5 == 0) goto LAB_00497a2c;
              }
            }
          }
          else if ((plVar7[1] & uVar14 - 1) != unaff_x25) break;
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar7[1];
          if (uVar13 == uVar6) {
            bVar3 = *(byte *)(plVar7 + 2);
            sVar2 = (ulong)(bVar3 >> 1);
            if ((bVar3 & 1) != 0) {
              sVar2 = plVar7[3];
            }
            if (sVar2 == sVar1) {
              if ((bVar3 & 1) == 0) {
                if (bVar3 < 2) goto LAB_00497a2c;
                uVar13 = 0;
                while (*(byte *)((long)plVar7 + uVar13 + 0x11) == pbVar10[uVar13]) {
                  uVar13 = uVar13 + 1;
                  if (bVar3 >> 1 == uVar13) goto LAB_00497a2c;
                }
              }
              else {
                iVar5 = memcmp((void *)plVar7[4],pbVar10,plVar7[3]);
                if (iVar5 == 0) goto LAB_00497a2c;
              }
            }
          }
          else {
            if (uVar14 <= uVar13) {
              uVar9 = 0;
              if (uVar14 != 0) {
                uVar9 = uVar13 / uVar14;
              }
              uVar13 = uVar13 - uVar9 * uVar14;
            }
            if (uVar13 != unaff_x25) break;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
  plVar7 = param_1 + 2;
  plVar8 = (long *)FUN_00759c3c(0x50);
  pbVar10 = (byte *)*param_4;
  local_70 = 0;
  *plVar8 = 0;
  plVar8[1] = uVar6;
  local_80 = plVar8;
  plStack_78 = plVar7;
  if ((*pbVar10 & 1) == 0) {
    lVar17 = *(long *)(pbVar10 + 8);
    lVar11 = *(long *)pbVar10;
    plVar8[4] = *(long *)(pbVar10 + 0x10);
    plVar8[3] = lVar17;
    plVar8[2] = lVar11;
  }
  else {
                    /* try { // try from 00497a74 to 00497a7b has its CatchHandler @ 00497cbc */
    FUN_002fb36c(plVar8 + 2,*(undefined8 *)(pbVar10 + 0x10),*(undefined8 *)(pbVar10 + 8));
  }
  lVar11 = param_1[3];
  plVar8[8] = 0;
  plVar8[7] = 0;
  plVar8[6] = 0;
  plVar8[5] = 0;
  fVar18 = *(float *)(param_1 + 4);
  *(undefined4 *)(plVar8 + 9) = 0x3f800000;
  local_70 = 1;
  if ((uVar14 == 0) || (fVar18 * (float)uVar14 < (float)(lVar11 + 1))) {
    if (uVar14 < 3) {
      uVar13 = 1;
    }
    else {
      uVar13 = (ulong)((uVar14 & uVar14 - 1) != 0);
    }
    uVar13 = uVar13 | uVar14 << 1;
    uVar14 = (ulong)((float)(lVar11 + 1) / fVar18);
    if (uVar13 <= uVar14) {
      uVar13 = uVar14;
    }
    if (uVar13 - 1 == 0) {
      uVar13 = 2;
    }
    else if ((uVar13 & uVar13 - 1) != 0) {
                    /* try { // try from 00497b2c to 00497baf has its CatchHandler @ 00497cb8 */
      uVar13 = FUN_00711ce0(uVar13);
    }
    uVar14 = param_1[1];
    if (uVar14 < uVar13) {
LAB_00497b44:
      FUN_00497d2c(param_1,uVar13);
    }
    else if (uVar13 < uVar14) {
      uVar9 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar14 < 3) {
LAB_00497bac:
        uVar9 = FUN_00711ce0();
      }
      else {
        uVar16 = NEON_cnt(uVar14,1);
        uVar15 = NEON_uaddlv(uVar16,1);
        if (1 < (CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff)) goto LAB_00497bac;
        if (1 < uVar9) {
          uVar9 = 1L << (-LZCOUNT(uVar9 - 1) & 0x3fU);
        }
      }
      if (uVar13 <= uVar9) {
        uVar13 = uVar9;
      }
      if (uVar13 < uVar14) goto LAB_00497b44;
    }
    uVar14 = param_1[1];
    if ((uVar14 & uVar14 - 1) == 0) {
      unaff_x25 = uVar14 - 1 & uVar6;
      plVar8 = *(long **)(*param_1 + unaff_x25 * 8);
      goto joined_r0x00497c38;
    }
    if (uVar6 < uVar14) {
      plVar8 = *(long **)(*param_1 + uVar6 * 8);
      unaff_x25 = uVar6;
      goto joined_r0x00497c38;
    }
    uVar13 = 0;
    if (uVar14 != 0) {
      uVar13 = uVar6 / uVar14;
    }
    unaff_x25 = uVar6 - uVar13 * uVar14;
    plVar8 = *(long **)(*param_1 + unaff_x25 * 8);
    if (plVar8 == (long *)0x0) goto LAB_00497be4;
LAB_00497acc:
    *local_80 = *plVar8;
    *plVar8 = (long)local_80;
  }
  else {
    plVar8 = *(long **)(*param_1 + unaff_x25 * 8);
joined_r0x00497c38:
    if (plVar8 != (long *)0x0) goto LAB_00497acc;
LAB_00497be4:
    *local_80 = param_1[2];
    param_1[2] = (long)local_80;
    *(long **)(*param_1 + unaff_x25 * 8) = plVar7;
    if (*local_80 != 0) {
      uVar6 = *(ulong *)(*local_80 + 8);
      if ((uVar14 & uVar14 - 1) == 0) {
        uVar6 = uVar6 & uVar14 - 1;
      }
      else if (uVar14 <= uVar6) {
        uVar13 = 0;
        if (uVar14 != 0) {
          uVar13 = uVar6 / uVar14;
        }
        uVar6 = uVar6 - uVar13 * uVar14;
      }
      *(long **)(*param_1 + uVar6 * 8) = local_80;
    }
  }
  uVar16 = 1;
  param_1[3] = param_1[3] + 1;
  plVar7 = local_80;
LAB_00497c88:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar7,uVar16);
LAB_00497a2c:
  uVar16 = 0;
  goto LAB_00497c88;
}


// ===== 00497ce8  FUN_00497ce8 =====

void FUN_00497ce8(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr != (void *)0x0) {
    if (*(char *)(param_1 + 2) != '\0') {
      FUN_00496e2c((long)__ptr + 0x10);
    }
    free(__ptr);
    return;
  }
  return;
}


// ===== 00497d2c  FUN_00497d2c =====

void FUN_00497d2c(long *param_1,ulong param_2)

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
LAB_00497eb0:
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
          goto LAB_00497eb0;
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


// ===== 00497f04  FUN_00497f04 =====

undefined8 * FUN_00497f04(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *__ptr;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  
  __ptr = (undefined8 *)*param_1;
  puVar10 = (undefined8 *)param_1[1];
  lVar11 = (long)puVar10 - (long)__ptr >> 4;
  uVar1 = lVar11 + 1;
  if (uVar1 >> 0x3c == 0) {
    uVar8 = param_1[2] - (long)__ptr >> 3;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - (long)__ptr)) {
      uVar8 = 0xfffffffffffffff;
    }
    if (uVar8 == 0) {
      lVar3 = 0;
      lVar4 = param_2[1];
      uVar12 = *param_2;
      puVar2 = (undefined8 *)(lVar11 * 0x10);
      puVar2[1] = lVar4;
      *puVar2 = uVar12;
    }
    else {
      if (uVar8 >> 0x3c != 0) goto LAB_00498070;
      lVar3 = FUN_00759c3c(uVar8 << 4);
      lVar4 = param_2[1];
      uVar12 = *param_2;
      puVar2 = (undefined8 *)(lVar3 + lVar11 * 0x10);
      puVar2[1] = lVar4;
      *puVar2 = uVar12;
    }
    if (lVar4 != 0) {
      FUN_00755c20(1,lVar4 + 8);
      __ptr = (undefined8 *)*param_1;
      puVar10 = (undefined8 *)param_1[1];
      lVar11 = (long)puVar10 - (long)__ptr >> 4;
    }
    puVar5 = puVar2 + lVar11 * -2;
    puVar6 = __ptr;
    if (__ptr != puVar10) {
      do {
        uVar12 = *puVar6;
        puVar5[1] = puVar6[1];
        *puVar5 = uVar12;
        puVar7 = puVar6 + 2;
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar5 = puVar5 + 2;
        puVar6 = puVar7;
      } while (puVar7 != puVar10);
      do {
        plVar9 = (long *)__ptr[1];
        if ((plVar9 != (long *)0x0) &&
           (lVar4 = FUN_00755c50(0xffffffffffffffff,plVar9 + 1), lVar4 == 0)) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          FUN_0071245c(plVar9);
        }
        __ptr = __ptr + 2;
      } while (__ptr != puVar10);
      __ptr = (undefined8 *)*param_1;
    }
    *param_1 = (long)(puVar2 + lVar11 * -2);
    param_1[1] = (long)(puVar2 + 2);
    param_1[2] = lVar3 + uVar8 * 0x10;
    if (__ptr != (undefined8 *)0x0) {
      free(__ptr);
    }
    return puVar2 + 2;
  }
  FUN_00498074(param_1);
LAB_00498070:
                    /* WARNING: Subroutine does not return */
  FUN_002f9ee0();
}


// ===== 00498074  FUN_00498074 =====

void FUN_00498074(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("vector");
}


// ===== 00498088  FUN_00498088 =====

undefined4 FUN_00498088(int *param_1,long *param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ushort *puVar14;
  undefined8 uVar15;
  
  lVar8 = *param_2;
  cVar3 = (char)param_2[3];
  uVar10 = (long)param_1 - lVar8;
  if ((((uVar10 & 3) != 0 && cVar3 != '\0') || (uVar9 = param_2[1], uVar9 < 5)) ||
     (uVar11 = uVar9 - 4, uVar11 < uVar10)) {
    return 0;
  }
  iVar5 = *param_1;
  lVar13 = CONCAT44((int)((ulong)param_2[7] >> 0x20) + 1,(int)param_2[7] + 1);
  uVar15 = NEON_cmhs(param_2[2],lVar13,4);
  param_2[7] = lVar13;
  if (((uint)uVar15 & (uint)((ulong)uVar15 >> 0x20) & 1) == 0) {
    return 0;
  }
  uVar12 = uVar10 - (long)iVar5;
  if (cVar3 != '\0' && (uVar12 & 1) != 0) {
    return 0;
  }
  if (uVar9 - 2 < uVar12) {
    return 0;
  }
  uVar4 = *(ushort *)(lVar8 + uVar12);
  uVar6 = 0;
  if (((uVar4 & 1) == 0) && ((uVar4 & 1) == 0 || cVar3 == '\0')) {
    if (uVar9 <= uVar4) {
      return 0;
    }
    if (uVar9 - uVar4 < uVar12) {
      return 0;
    }
    puVar14 = (ushort *)((long)param_1 - (long)*param_1);
    lVar13 = -(long)*param_1;
    if (4 < *puVar14) {
      uVar12 = (ulong)puVar14[2];
      if (uVar12 != 0) {
        uVar7 = uVar10 + uVar12;
        if (uVar11 < uVar7) {
          return 0;
        }
        if ((uVar7 & 3) != 0 && cVar3 != '\0') {
          return 0;
        }
        if ((int)*(uint *)(lVar8 + uVar7) < 1) {
          return 0;
        }
        if (uVar9 - 1 < uVar7 + *(uint *)(lVar8 + uVar7)) {
          return 0;
        }
        puVar1 = (uint *)((long)((long)param_1 + uVar12) + (ulong)*(uint *)((long)param_1 + uVar12))
        ;
        uVar12 = (long)puVar1 - lVar8;
        if (uVar11 < uVar12) {
          return 0;
        }
        if ((uVar12 & 3) != 0 && cVar3 != '\0') {
          return 0;
        }
        uVar7 = (ulong)*puVar1;
        if ((ulong)param_2[4] <= uVar7) {
          return 0;
        }
        uVar7 = uVar7 + 4;
        if (uVar9 - 1 < uVar7 + uVar12) {
          return 0;
        }
        if (uVar9 <= uVar7) {
          return 0;
        }
        if (uVar9 - uVar7 < uVar12) {
          return 0;
        }
        if (*(char *)(lVar8 + uVar7 + uVar12) != '\0') {
          return 0;
        }
      }
      if ((6 < *puVar14) && (uVar12 = (ulong)puVar14[3], uVar12 != 0)) {
        uVar10 = uVar10 + uVar12;
        if (uVar11 < uVar10) {
          return 0;
        }
        if ((uVar10 & 3) != 0 && cVar3 != '\0') {
          return 0;
        }
        if ((int)*(uint *)(lVar8 + uVar10) < 1) {
          return 0;
        }
        if (uVar9 - 1 < uVar10 + *(uint *)(lVar8 + uVar10)) {
          return 0;
        }
        uVar10 = FUN_00498468((long)((long)param_1 + uVar12) +
                              (ulong)*(uint *)((long)param_1 + uVar12));
        if ((uVar10 & 1) == 0) {
          return 0;
        }
        lVar13 = -(long)*param_1;
      }
    }
    if ((10 < *(ushort *)((long)param_1 + lVar13)) &&
       (uVar10 = (ulong)((ushort *)((long)param_1 + lVar13))[5], uVar10 != 0)) {
      uVar9 = (long)param_1 + (uVar10 - *param_2);
      if (((uVar9 & 3) != 0) && ((char)param_2[3] != '\0')) {
        return 0;
      }
      uVar11 = param_2[1];
      if (uVar11 < 5) {
        return 0;
      }
      if (uVar11 - 4 < uVar9) {
        return 0;
      }
      uVar2 = *(uint *)(*param_2 + uVar9);
      if ((int)uVar2 < 1) {
        return 0;
      }
      if (uVar11 - 1 < uVar9 + uVar2) {
        return 0;
      }
      uVar10 = FUN_0049d5b0((long)((long)param_1 + uVar10) +
                            (ulong)*(uint *)((long)param_1 + uVar10));
      if ((uVar10 & 1) == 0) {
        return 0;
      }
    }
    *(int *)(param_2 + 7) = (int)param_2[7] + -1;
    uVar6 = 1;
  }
  return uVar6;
}


// ===== 0049834c  FUN_0049834c =====

bool FUN_0049834c(int *param_1,long *param_2,ushort param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if ((*(ushort *)((long)param_1 - (long)*param_1) <= param_3) ||
     (uVar2 = (ulong)*(ushort *)(((long)param_1 - (long)*param_1) + (ulong)param_3), uVar2 == 0)) {
    return true;
  }
  uVar2 = (long)param_1 + (uVar2 - *param_2);
  if (((uVar2 & 3) == 0) || ((char)param_2[3] == '\0')) {
    uVar3 = param_2[1];
    if (uVar3 < 5) {
      return false;
    }
    if (uVar3 - 4 < uVar2) {
      return false;
    }
    uVar1 = *(uint *)(*param_2 + uVar2);
    if (0 < (int)uVar1) {
      return uVar2 + uVar1 <= uVar3 - 1;
    }
  }
  return false;
}


// ===== 004983d4  FUN_004983d4 =====

bool FUN_004983d4(long *param_1,uint *param_2)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_2 == (uint *)0x0) {
    bVar2 = true;
  }
  else {
    uVar3 = (long)param_2 - *param_1;
    if (((uVar3 & 3) != 0) && ((char)param_1[3] != '\0')) {
      return false;
    }
    uVar4 = param_1[1];
    bVar2 = false;
    if ((4 < uVar4) && (uVar3 <= uVar4 - 4)) {
      if ((ulong)param_1[4] <= (ulong)*param_2) {
        return false;
      }
      uVar1 = (ulong)*param_2 + 4;
      bVar2 = false;
      if (((uVar1 < uVar4) && (uVar3 <= uVar4 - uVar1)) && (uVar1 + uVar3 <= uVar4 - 1)) {
        return *(char *)(*param_1 + uVar1 + uVar3) == '\0';
      }
    }
  }
  return bVar2;
}


// ===== 00498468  FUN_00498468 =====

undefined4 FUN_00498468(int *param_1,long *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  char cVar4;
  ushort uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ushort *puVar13;
  undefined8 uVar14;
  
  lVar8 = *param_2;
  cVar4 = (char)param_2[3];
  uVar12 = (long)param_1 - lVar8;
  if ((((uVar12 & 3) != 0 && cVar4 != '\0') || (uVar7 = param_2[1], uVar7 < 5)) ||
     (uVar9 = uVar7 - 4, uVar9 < uVar12)) {
    return 0;
  }
  iVar6 = *param_1;
  lVar11 = CONCAT44((int)((ulong)param_2[7] >> 0x20) + 1,(int)param_2[7] + 1);
  uVar14 = NEON_cmhs(param_2[2],lVar11,4);
  param_2[7] = lVar11;
  if (((uint)uVar14 & (uint)((ulong)uVar14 >> 0x20) & 1) == 0) {
    return 0;
  }
  uVar10 = uVar12 - (long)iVar6;
  if (cVar4 != '\0' && (uVar10 & 1) != 0) {
    return 0;
  }
  if (uVar7 - 2 < uVar10) {
    return 0;
  }
  uVar5 = *(ushort *)(lVar8 + uVar10);
  if ((uVar5 & 1) != 0) {
    return 0;
  }
  if ((uVar5 & 1) != 0 && cVar4 != '\0') {
    return 0;
  }
  if (uVar7 <= uVar5) {
    return 0;
  }
  if (uVar7 - uVar5 < uVar10) {
    return 0;
  }
  puVar13 = (ushort *)((long)param_1 - (long)*param_1);
  lVar11 = -(long)*param_1;
  if (4 < *puVar13) {
    if ((ulong)puVar13[2] != 0) {
      uVar10 = uVar12 + puVar13[2];
      if (((uVar10 & 7) != 0) && (cVar4 != '\0')) {
        return 0;
      }
      if (uVar7 < 9) {
        return 0;
      }
      if (uVar7 - 8 < uVar10) {
        return 0;
      }
    }
    if ((6 < *puVar13) && (uVar10 = (ulong)puVar13[3], uVar10 != 0)) {
      uVar12 = uVar12 + uVar10;
      if (uVar9 < uVar12) {
        return 0;
      }
      if ((uVar12 & 3) != 0 && cVar4 != '\0') {
        return 0;
      }
      if ((int)*(uint *)(lVar8 + uVar12) < 1) {
        return 0;
      }
      if (uVar7 - 1 < uVar12 + *(uint *)(lVar8 + uVar12)) {
        return 0;
      }
      puVar1 = (uint *)((long)((long)param_1 + uVar10) + (ulong)*(uint *)((long)param_1 + uVar10));
      uVar12 = (long)puVar1 - lVar8;
      if (uVar9 < uVar12) {
        return 0;
      }
      if ((uVar12 & 3) != 0 && cVar4 != '\0') {
        return 0;
      }
      uVar9 = (ulong)*puVar1;
      if ((ulong)param_2[4] >> 2 <= uVar9) {
        return 0;
      }
      uVar9 = uVar9 * 4 + 4;
      if (uVar7 <= uVar9) {
        return 0;
      }
      if (uVar7 - uVar9 < uVar12) {
        return 0;
      }
      puVar1 = (uint *)((long)((long)param_1 + uVar10) + (ulong)*(uint *)((long)param_1 + uVar10));
      if (*puVar1 != 0) {
        uVar7 = 0;
        uVar12 = 0;
        do {
          puVar2 = (uint *)((long)puVar1 + (uVar7 & 0xfffffffc) + 4);
          uVar9 = FUN_00498b80((long)puVar2 + (ulong)*puVar2);
          if ((uVar9 & 1) == 0) {
            return 0;
          }
          uVar12 = uVar12 + 1;
          uVar7 = uVar7 + 4;
        } while (uVar12 < *puVar1);
        lVar11 = -(long)*param_1;
      }
    }
  }
  if ((*(ushort *)((long)param_1 + lVar11) < 9) ||
     (uVar12 = (ulong)((ushort *)((long)param_1 + lVar11))[4], uVar12 == 0)) {
    uVar12 = FUN_004983d4(param_2,0);
  }
  else {
    uVar7 = (long)param_1 + (uVar12 - *param_2);
    if (((uVar7 & 3) != 0) && ((char)param_2[3] != '\0')) {
      return 0;
    }
    uVar9 = param_2[1];
    if (uVar9 < 5) {
      return 0;
    }
    if (uVar9 - 4 < uVar7) {
      return 0;
    }
    uVar3 = *(uint *)(*param_2 + uVar7);
    if ((int)uVar3 < 1) {
      return 0;
    }
    if (uVar9 - 1 < uVar7 + uVar3) {
      return 0;
    }
    uVar12 = FUN_004983d4(param_2,(long)((long)param_1 + uVar12) +
                                  (ulong)*(uint *)((long)param_1 + uVar12));
  }
  if (((uVar12 & 1) != 0) && (uVar12 = FUN_0049834c(param_1,param_2,10), (uVar12 & 1) != 0)) {
    if (*(ushort *)((long)param_1 - (long)*param_1) < 0xb) {
      lVar8 = 0;
    }
    else {
      uVar12 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[5];
      if (uVar12 == 0) {
        lVar8 = 0;
      }
      else {
        puVar1 = (uint *)((long)param_1 + uVar12);
        lVar8 = (long)puVar1 + (ulong)*puVar1;
      }
    }
    uVar12 = FUN_004983d4(param_2,lVar8);
    if (((uVar12 & 1) != 0) && (uVar12 = FUN_0049834c(param_1,param_2,0xc), (uVar12 & 1) != 0)) {
      if (*(ushort *)((long)param_1 - (long)*param_1) < 0xd) {
        lVar8 = 0;
      }
      else {
        uVar12 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[6];
        if (uVar12 == 0) {
          lVar8 = 0;
        }
        else {
          puVar1 = (uint *)((long)param_1 + uVar12);
          lVar8 = (long)puVar1 + (ulong)*puVar1;
        }
      }
      uVar12 = FUN_004983d4(param_2,lVar8);
      if ((((uVar12 & 1) != 0) && (uVar12 = FUN_00498a04(param_1,param_2,0xe,8), (uVar12 & 1) != 0))
         && (uVar12 = FUN_0049834c(param_1,param_2,0x10), (uVar12 & 1) != 0)) {
        if ((*(ushort *)((long)param_1 - (long)*param_1) < 0x11) ||
           (uVar12 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[8], uVar12 == 0)) {
          lVar8 = 0;
        }
        else {
          puVar1 = (uint *)((long)param_1 + uVar12);
          lVar8 = (long)puVar1 + (ulong)*puVar1;
        }
        uVar12 = FUN_004983d4(param_2,lVar8);
        if (((((uVar12 & 1) != 0) &&
             (uVar12 = FUN_0049834c(param_1,param_2,0x12), (uVar12 & 1) != 0)) &&
            ((*(ushort *)((long)param_1 - (long)*param_1) < 0x13 ||
             ((uVar12 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[9], uVar12 == 0 ||
              (puVar1 = (uint *)((long)param_1 + uVar12),
              uVar12 = FUN_00498d4c((long)puVar1 + (ulong)*puVar1,param_2), (uVar12 & 1) != 0))))))
           && (uVar12 = FUN_0049834c(param_1,param_2,0x14), (uVar12 & 1) != 0)) {
          if ((*(ushort *)((long)param_1 - (long)*param_1) < 0x15) ||
             (uVar12 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[10], uVar12 == 0)) {
            lVar8 = 0;
          }
          else {
            puVar1 = (uint *)((long)param_1 + uVar12);
            lVar8 = (long)puVar1 + (ulong)*puVar1;
          }
          uVar12 = FUN_004983d4(param_2,lVar8);
          if (((uVar12 & 1) != 0) &&
             (uVar12 = FUN_0049834c(param_1,param_2,0x16), (uVar12 & 1) != 0)) {
            if ((*(ushort *)((long)param_1 - (long)*param_1) < 0x17) ||
               (uVar12 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[0xb], uVar12 == 0)) {
              lVar8 = 0;
            }
            else {
              puVar1 = (uint *)((long)param_1 + uVar12);
              lVar8 = (long)puVar1 + (ulong)*puVar1;
            }
            uVar12 = FUN_00498a68(param_2,lVar8);
            if ((uVar12 & 1) != 0) {
              if ((*(ushort *)((long)param_1 - (long)*param_1) < 0x17) ||
                 (uVar12 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[0xb], uVar12 == 0)) {
                lVar8 = 0;
              }
              else {
                puVar1 = (uint *)((long)param_1 + uVar12);
                lVar8 = (long)puVar1 + (ulong)*puVar1;
              }
              uVar12 = FUN_00498adc(param_2,lVar8);
              if ((uVar12 & 1) != 0) {
                *(int *)(param_2 + 7) = (int)param_2[7] + -1;
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}


// ===== 00498a04  FUN_00498a04 =====

bool FUN_00498a04(int *param_1,long *param_2,ushort param_3,long param_4)

{
  ulong uVar1;
  
  if ((*(ushort *)((long)param_1 - (long)*param_1) <= param_3) ||
     (uVar1 = (ulong)*(ushort *)(((long)param_1 - (long)*param_1) + (ulong)param_3), uVar1 == 0)) {
    return true;
  }
  uVar1 = (long)param_1 + (uVar1 - *param_2);
  if (((uVar1 & param_4 - 1U) != 0) && ((char)param_2[3] != '\0')) {
    return false;
  }
  return 8 < (ulong)param_2[1] && uVar1 <= param_2[1] - 8U;
}


// ===== 00498a68  FUN_00498a68 =====

bool FUN_00498a68(long *param_1,uint *param_2)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_2 == (uint *)0x0) {
    return true;
  }
  uVar3 = (long)param_2 - *param_1;
  if (((uVar3 & 3) != 0) && ((char)param_1[3] != '\0')) {
    return false;
  }
  uVar4 = param_1[1];
  bVar2 = false;
  if ((4 < uVar4) && (uVar3 <= uVar4 - 4)) {
    if ((ulong)param_1[4] >> 2 <= (ulong)*param_2) {
      return false;
    }
    uVar1 = (ulong)*param_2 * 4 + 4;
    bVar2 = uVar1 < uVar4 && uVar3 <= uVar4 - uVar1;
  }
  return bVar2;
}


// ===== 00498adc  FUN_00498adc =====

uint FUN_00498adc(undefined8 param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_2 == (uint *)0x0) {
    return 1;
  }
  if (*param_2 == 0) {
    return 1;
  }
  uVar3 = 0;
  uVar4 = 0;
  do {
    puVar1 = (uint *)((long)param_2 + (uVar3 & 0xfffffffc) + 4);
    uVar2 = FUN_0049d364((long)puVar1 + (ulong)*puVar1,param_1);
    if ((uVar2 & 1) == 0) break;
    uVar4 = uVar4 + 1;
    uVar3 = uVar3 + 4;
  } while (uVar4 < *param_2);
  return uVar2 & 1;
}


// ===== 00498b80  FUN_00498b80 =====

undefined8 FUN_00498b80(int *param_1,long *param_2)

{
  ulong uVar1;
  uint *puVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ushort *puVar11;
  int iVar12;
  long lVar13;
  undefined8 uVar14;
  
  lVar8 = *param_2;
  cVar3 = (char)param_2[3];
  uVar7 = (long)param_1 - lVar8;
  if ((((uVar7 & 3) == 0 || cVar3 == '\0') && (uVar6 = param_2[1], 4 < uVar6)) &&
     (uVar9 = uVar6 - 4, uVar7 <= uVar9)) {
    iVar5 = *param_1;
    iVar12 = (int)param_2[7];
    lVar13 = CONCAT44((int)((ulong)param_2[7] >> 0x20) + 1,iVar12 + 1);
    uVar14 = NEON_cmhs(param_2[2],lVar13,4);
    param_2[7] = lVar13;
    if (((((uint)uVar14 & (uint)((ulong)uVar14 >> 0x20) & 1) != 0) &&
        (uVar10 = uVar7 - (long)iVar5, cVar3 == '\0' || (uVar10 & 1) == 0)) && (uVar10 <= uVar6 - 2)
       ) {
      uVar4 = *(ushort *)(lVar8 + uVar10);
      if ((((uVar4 & 1) == 0) && ((uVar4 & 1) == 0 || cVar3 == '\0')) &&
         ((uVar4 < uVar6 && (uVar10 <= uVar6 - uVar4)))) {
        puVar11 = (ushort *)((long)param_1 - (long)*param_1);
        if (4 < *puVar11) {
          uVar10 = (ulong)puVar11[2];
          if (uVar10 != 0) {
            uVar1 = uVar7 + uVar10;
            if (uVar9 < uVar1) {
              return 0;
            }
            if ((uVar1 & 3) != 0 && cVar3 != '\0') {
              return 0;
            }
            if ((int)*(uint *)(lVar8 + uVar1) < 1) {
              return 0;
            }
            if (uVar6 - 1 < uVar1 + *(uint *)(lVar8 + uVar1)) {
              return 0;
            }
            puVar2 = (uint *)((long)((long)param_1 + uVar10) +
                             (ulong)*(uint *)((long)param_1 + uVar10));
            uVar10 = (long)puVar2 - lVar8;
            if (uVar9 < uVar10) {
              return 0;
            }
            if ((uVar10 & 3) != 0 && cVar3 != '\0') {
              return 0;
            }
            uVar9 = (ulong)*puVar2;
            if ((ulong)param_2[4] <= uVar9) {
              return 0;
            }
            uVar9 = uVar9 + 4;
            if (uVar6 - 1 < uVar9 + uVar10) {
              return 0;
            }
            if (uVar6 <= uVar9) {
              return 0;
            }
            if (uVar6 - uVar9 < uVar10) {
              return 0;
            }
            if (*(char *)(lVar8 + uVar9 + uVar10) != '\0') {
              return 0;
            }
          }
          if ((6 < *puVar11) && ((ulong)puVar11[3] != 0)) {
            uVar7 = uVar7 + puVar11[3];
            if (((uVar7 & 7) != 0) && (cVar3 != '\0')) {
              return 0;
            }
            if (uVar6 < 9) {
              return 0;
            }
            if (uVar6 - 8 < uVar7) {
              return 0;
            }
          }
        }
        *(int *)(param_2 + 7) = iVar12;
        return 1;
      }
    }
  }
  return 0;
}


// ===== 00498d4c  FUN_00498d4c =====

undefined4 FUN_00498d4c(int *param_1,long *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  char cVar4;
  ushort uVar5;
  int iVar6;
  ushort *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  
  lVar9 = *param_2;
  cVar4 = (char)param_2[3];
  uVar11 = (long)param_1 - lVar9;
  if ((((uVar11 & 3) != 0 && cVar4 != '\0') || (uVar8 = param_2[1], uVar8 < 5)) ||
     (uVar10 = uVar8 - 4, uVar10 < uVar11)) {
    return 0;
  }
  iVar6 = *param_1;
  lVar13 = CONCAT44((int)((ulong)param_2[7] >> 0x20) + 1,(int)param_2[7] + 1);
  uVar14 = NEON_cmhs(param_2[2],lVar13,4);
  param_2[7] = lVar13;
  if (((uint)uVar14 & (uint)((ulong)uVar14 >> 0x20) & 1) == 0) {
    return 0;
  }
  uVar12 = uVar11 - (long)iVar6;
  if (cVar4 != '\0' && (uVar12 & 1) != 0) {
    return 0;
  }
  if (uVar8 - 2 < uVar12) {
    return 0;
  }
  uVar5 = *(ushort *)(lVar9 + uVar12);
  if ((uVar5 & 1) != 0) {
    return 0;
  }
  if ((uVar5 & 1) != 0 && cVar4 != '\0') {
    return 0;
  }
  if (uVar8 <= uVar5) {
    return 0;
  }
  if (uVar8 - uVar5 < uVar12) {
    return 0;
  }
  puVar7 = (ushort *)((long)param_1 - (long)*param_1);
  lVar13 = -(long)*param_1;
  if ((4 < *puVar7) && (uVar12 = (ulong)puVar7[2], uVar12 != 0)) {
    uVar11 = uVar11 + uVar12;
    if (uVar10 < uVar11) {
      return 0;
    }
    if ((uVar11 & 3) != 0 && cVar4 != '\0') {
      return 0;
    }
    if ((int)*(uint *)(lVar9 + uVar11) < 1) {
      return 0;
    }
    if (uVar8 - 1 < uVar11 + *(uint *)(lVar9 + uVar11)) {
      return 0;
    }
    puVar1 = (uint *)((long)((long)param_1 + uVar12) + (ulong)*(uint *)((long)param_1 + uVar12));
    uVar11 = (long)puVar1 - lVar9;
    if (uVar10 < uVar11) {
      return 0;
    }
    if ((uVar11 & 3) != 0 && cVar4 != '\0') {
      return 0;
    }
    uVar10 = (ulong)*puVar1;
    if ((ulong)param_2[4] >> 2 <= uVar10) {
      return 0;
    }
    uVar10 = uVar10 * 4 + 4;
    if (uVar8 <= uVar10) {
      return 0;
    }
    if (uVar8 - uVar10 < uVar11) {
      return 0;
    }
    puVar1 = (uint *)((long)((long)param_1 + uVar12) + (ulong)*(uint *)((long)param_1 + uVar12));
    if (*puVar1 != 0) {
      uVar8 = 0;
      uVar11 = 0;
      do {
        puVar2 = (uint *)((long)puVar1 + (uVar8 & 0xfffffffc) + 4);
        uVar10 = FUN_00499b20((long)puVar2 + (ulong)*puVar2);
        if ((uVar10 & 1) == 0) {
          return 0;
        }
        uVar11 = uVar11 + 1;
        uVar8 = uVar8 + 4;
      } while (uVar11 < *puVar1);
      lVar13 = -(long)*param_1;
    }
  }
  if ((*(ushort *)((long)param_1 + lVar13) < 7) ||
     (uVar11 = (ulong)((ushort *)((long)param_1 + lVar13))[3], uVar11 == 0)) {
    uVar11 = FUN_00499544(param_2,0);
  }
  else {
    uVar8 = (long)param_1 + (uVar11 - *param_2);
    if (((uVar8 & 3) != 0) && ((char)param_2[3] != '\0')) {
      return 0;
    }
    uVar10 = param_2[1];
    if (uVar10 < 5) {
      return 0;
    }
    if (uVar10 - 4 < uVar8) {
      return 0;
    }
    uVar3 = *(uint *)(*param_2 + uVar8);
    if ((int)uVar3 < 1) {
      return 0;
    }
    if (uVar10 - 1 < uVar8 + uVar3) {
      return 0;
    }
    puVar1 = (uint *)((long)((long)param_1 + uVar11) + (ulong)*(uint *)((long)param_1 + uVar11));
    uVar8 = (long)puVar1 - *param_2;
    if (((uVar8 & 3) != 0) && ((char)param_2[3] != '\0')) {
      return 0;
    }
    uVar10 = param_2[1];
    if (uVar10 < 5) {
      return 0;
    }
    if (uVar10 - 4 < uVar8) {
      return 0;
    }
    uVar12 = (ulong)*puVar1;
    if ((ulong)param_2[4] >> 2 <= uVar12) {
      return 0;
    }
    uVar12 = uVar12 * 4 + 4;
    if (uVar10 <= uVar12) {
      return 0;
    }
    if (uVar10 - uVar12 < uVar8) {
      return 0;
    }
    uVar11 = FUN_00499544(param_2,(long)((long)param_1 + uVar11) +
                                  (ulong)*(uint *)((long)param_1 + uVar11));
  }
  if (((uVar11 & 1) != 0) && (uVar11 = FUN_0049834c(param_1,param_2,8), (uVar11 & 1) != 0)) {
    if (*(ushort *)((long)param_1 - (long)*param_1) < 9) {
      lVar9 = 0;
    }
    else {
      uVar11 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[4];
      if (uVar11 == 0) {
        lVar9 = 0;
      }
      else {
        puVar1 = (uint *)((long)param_1 + uVar11);
        lVar9 = (long)puVar1 + (ulong)*puVar1;
      }
    }
    uVar11 = FUN_004995e8(param_2,lVar9);
    if ((uVar11 & 1) != 0) {
      if (*(ushort *)((long)param_1 - (long)*param_1) < 9) {
        lVar9 = 0;
      }
      else {
        uVar11 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[4];
        if (uVar11 == 0) {
          lVar9 = 0;
        }
        else {
          puVar1 = (uint *)((long)param_1 + uVar11);
          lVar9 = (long)puVar1 + (ulong)*puVar1;
        }
      }
      uVar11 = FUN_0049965c(param_2,lVar9);
      if ((((uVar11 & 1) != 0) && (uVar11 = FUN_00499700(param_1,param_2,10,4), (uVar11 & 1) != 0))
         && (uVar11 = FUN_0049834c(param_1,param_2,0xc), (uVar11 & 1) != 0)) {
        if ((*(ushort *)((long)param_1 - (long)*param_1) < 0xd) ||
           (uVar11 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[6], uVar11 == 0)) {
          lVar9 = 0;
        }
        else {
          puVar1 = (uint *)((long)param_1 + uVar11);
          lVar9 = (long)puVar1 + (ulong)*puVar1;
        }
        uVar11 = FUN_00499764(param_2,lVar9);
        if ((uVar11 & 1) != 0) {
          if ((*(ushort *)((long)param_1 - (long)*param_1) < 0xd) ||
             (uVar11 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[6], uVar11 == 0)) {
            lVar9 = 0;
          }
          else {
            puVar1 = (uint *)((long)param_1 + uVar11);
            lVar9 = (long)puVar1 + (ulong)*puVar1;
          }
          uVar11 = FUN_004997d8(param_2,lVar9);
          if (((uVar11 & 1) != 0) && (uVar11 = FUN_0049834c(param_1,param_2,0xe), (uVar11 & 1) != 0)
             ) {
            if ((*(ushort *)((long)param_1 - (long)*param_1) < 0xf) ||
               (uVar11 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[7], uVar11 == 0)) {
              lVar9 = 0;
            }
            else {
              puVar1 = (uint *)((long)param_1 + uVar11);
              lVar9 = (long)puVar1 + (ulong)*puVar1;
            }
            uVar11 = FUN_0049987c(param_2,lVar9);
            if ((uVar11 & 1) != 0) {
              if ((*(ushort *)((long)param_1 - (long)*param_1) < 0xf) ||
                 (uVar11 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[7], uVar11 == 0)) {
                lVar9 = 0;
              }
              else {
                puVar1 = (uint *)((long)param_1 + uVar11);
                lVar9 = (long)puVar1 + (ulong)*puVar1;
              }
              uVar11 = FUN_004998f0(param_2,lVar9);
              if (((uVar11 & 1) != 0) &&
                 (uVar11 = FUN_0049834c(param_1,param_2,0x10), (uVar11 & 1) != 0)) {
                if ((*(ushort *)((long)param_1 - (long)*param_1) < 0x11) ||
                   (uVar11 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[8], uVar11 == 0)) {
                  lVar9 = 0;
                }
                else {
                  puVar1 = (uint *)((long)param_1 + uVar11);
                  lVar9 = (long)puVar1 + (ulong)*puVar1;
                }
                uVar11 = FUN_0049987c(param_2,lVar9);
                if ((uVar11 & 1) != 0) {
                  if ((*(ushort *)((long)param_1 - (long)*param_1) < 0x11) ||
                     (uVar11 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[8], uVar11 == 0))
                  {
                    lVar9 = 0;
                  }
                  else {
                    puVar1 = (uint *)((long)param_1 + uVar11);
                    lVar9 = (long)puVar1 + (ulong)*puVar1;
                  }
                  uVar11 = FUN_004998f0(param_2,lVar9);
                  if (((uVar11 & 1) != 0) &&
                     (uVar11 = FUN_0049834c(param_1,param_2,0x12), (uVar11 & 1) != 0)) {
                    if ((*(ushort *)((long)param_1 - (long)*param_1) < 0x13) ||
                       (uVar11 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[9], uVar11 == 0
                       )) {
                      lVar9 = 0;
                    }
                    else {
                      puVar1 = (uint *)((long)param_1 + uVar11);
                      lVar9 = (long)puVar1 + (ulong)*puVar1;
                    }
                    uVar11 = FUN_00499a08(param_2,lVar9);
                    if ((uVar11 & 1) != 0) {
                      if ((*(ushort *)((long)param_1 - (long)*param_1) < 0x13) ||
                         (uVar11 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[9],
                         uVar11 == 0)) {
                        lVar9 = 0;
                      }
                      else {
                        puVar1 = (uint *)((long)param_1 + uVar11);
                        lVar9 = (long)puVar1 + (ulong)*puVar1;
                      }
                      uVar11 = FUN_00499a7c(param_2,lVar9);
                      if ((((uVar11 & 1) != 0) &&
                          (uVar11 = FUN_0049834c(param_1,param_2,0x14), (uVar11 & 1) != 0)) &&
                         ((*(ushort *)((long)param_1 - (long)*param_1) < 0x15 ||
                          ((uVar11 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[10],
                           uVar11 == 0 ||
                           (puVar1 = (uint *)((long)param_1 + uVar11),
                           uVar11 = FUN_0049c858((long)puVar1 + (ulong)*puVar1,param_2),
                           (uVar11 & 1) != 0)))))) {
                        *(int *)(param_2 + 7) = (int)param_2[7] + -1;
                        return 1;
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


// ===== 0049942c  FUN_0049942c =====

bool FUN_0049942c(long *param_1,uint *param_2)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_2 == (uint *)0x0) {
    return true;
  }
  uVar3 = (long)param_2 - *param_1;
  if (((uVar3 & 3) != 0) && ((char)param_1[3] != '\0')) {
    return false;
  }
  uVar4 = param_1[1];
  bVar2 = false;
  if ((4 < uVar4) && (uVar3 <= uVar4 - 4)) {
    if ((ulong)param_1[4] >> 2 <= (ulong)*param_2) {
      return false;
    }
    uVar1 = (ulong)*param_2 * 4 + 4;
    bVar2 = uVar1 < uVar4 && uVar3 <= uVar4 - uVar1;
  }
  return bVar2;
}


// ===== 004994a0  FUN_004994a0 =====

uint FUN_004994a0(undefined8 param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_2 == (uint *)0x0) {
    return 1;
  }
  if (*param_2 == 0) {
    return 1;
  }
  uVar3 = 0;
  uVar4 = 0;
  do {
    puVar1 = (uint *)((long)param_2 + (uVar3 & 0xfffffffc) + 4);
    uVar2 = FUN_00499b20((long)puVar1 + (ulong)*puVar1,param_1);
    if ((uVar2 & 1) == 0) break;
    uVar4 = uVar4 + 1;
    uVar3 = uVar3 + 4;
  } while (uVar4 < *param_2);
  return uVar2 & 1;
}


// ===== 00499544  FUN_00499544 =====

uint FUN_00499544(undefined8 param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_2 == (uint *)0x0) {
    return 1;
  }
  if (*param_2 == 0) {
    return 1;
  }
  uVar3 = 0;
  uVar4 = 0;
  do {
    puVar1 = (uint *)((long)param_2 + (uVar3 & 0xfffffffc) + 4);
    uVar2 = FUN_0049a0e0((long)puVar1 + (ulong)*puVar1,param_1);
    if ((uVar2 & 1) == 0) break;
    uVar4 = uVar4 + 1;
    uVar3 = uVar3 + 4;
  } while (uVar4 < *param_2);
  return uVar2 & 1;
}


// ===== 004995e8  FUN_004995e8 =====

bool FUN_004995e8(long *param_1,uint *param_2)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_2 == (uint *)0x0) {
    return true;
  }
  uVar3 = (long)param_2 - *param_1;
  if (((uVar3 & 3) != 0) && ((char)param_1[3] != '\0')) {
    return false;
  }
  uVar4 = param_1[1];
  bVar2 = false;
  if ((4 < uVar4) && (uVar3 <= uVar4 - 4)) {
    if ((ulong)param_1[4] >> 2 <= (ulong)*param_2) {
      return false;
    }
    uVar1 = (ulong)*param_2 * 4 + 4;
    bVar2 = uVar1 < uVar4 && uVar3 <= uVar4 - uVar1;
  }
  return bVar2;
}


// ===== 0049965c  FUN_0049965c =====

uint FUN_0049965c(undefined8 param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_2 == (uint *)0x0) {
    return 1;
  }
  if (*param_2 == 0) {
    return 1;
  }
  uVar3 = 0;
  uVar4 = 0;
  do {
    puVar1 = (uint *)((long)param_2 + (uVar3 & 0xfffffffc) + 4);
    uVar2 = FUN_0049b220((long)puVar1 + (ulong)*puVar1,param_1);
    if ((uVar2 & 1) == 0) break;
    uVar4 = uVar4 + 1;
    uVar3 = uVar3 + 4;
  } while (uVar4 < *param_2);
  return uVar2 & 1;
}


// ===== 00499700  FUN_00499700 =====

bool FUN_00499700(int *param_1,long *param_2,ushort param_3,long param_4)

{
  ulong uVar1;
  
  if ((*(ushort *)((long)param_1 - (long)*param_1) <= param_3) ||
     (uVar1 = (ulong)*(ushort *)(((long)param_1 - (long)*param_1) + (ulong)param_3), uVar1 == 0)) {
    return true;
  }
  uVar1 = (long)param_1 + (uVar1 - *param_2);
  if (((uVar1 & param_4 - 1U) != 0) && ((char)param_2[3] != '\0')) {
    return false;
  }
  return 4 < (ulong)param_2[1] && uVar1 <= param_2[1] - 4U;
}


// ===== 00499764  FUN_00499764 =====

bool FUN_00499764(long *param_1,uint *param_2)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_2 == (uint *)0x0) {
    return true;
  }
  uVar3 = (long)param_2 - *param_1;
  if (((uVar3 & 3) != 0) && ((char)param_1[3] != '\0')) {
    return false;
  }
  uVar4 = param_1[1];
  bVar2 = false;
  if ((4 < uVar4) && (uVar3 <= uVar4 - 4)) {
    if ((ulong)param_1[4] >> 2 <= (ulong)*param_2) {
      return false;
    }
    uVar1 = (ulong)*param_2 * 4 + 4;
    bVar2 = uVar1 < uVar4 && uVar3 <= uVar4 - uVar1;
  }
  return bVar2;
}


// ===== 004997d8  FUN_004997d8 =====

uint FUN_004997d8(undefined8 param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_2 == (uint *)0x0) {
    return 1;
  }
  if (*param_2 == 0) {
    return 1;
  }
  uVar3 = 0;
  uVar4 = 0;
  do {
    puVar1 = (uint *)((long)param_2 + (uVar3 & 0xfffffffc) + 4);
    uVar2 = FUN_0049c308((long)puVar1 + (ulong)*puVar1,param_1);
    if ((uVar2 & 1) == 0) break;
    uVar4 = uVar4 + 1;
    uVar3 = uVar3 + 4;
  } while (uVar4 < *param_2);
  return uVar2 & 1;
}


// ===== 0049987c  FUN_0049987c =====

bool FUN_0049987c(long *param_1,uint *param_2)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_2 == (uint *)0x0) {
    return true;
  }
  uVar3 = (long)param_2 - *param_1;
  if (((uVar3 & 3) != 0) && ((char)param_1[3] != '\0')) {
    return false;
  }
  uVar4 = param_1[1];
  bVar2 = false;
  if ((4 < uVar4) && (uVar3 <= uVar4 - 4)) {
    if ((ulong)param_1[4] >> 2 <= (ulong)*param_2) {
      return false;
    }
    uVar1 = (ulong)*param_2 * 4 + 4;
    bVar2 = uVar1 < uVar4 && uVar3 <= uVar4 - uVar1;
  }
  return bVar2;
}


// ===== 004998f0  FUN_004998f0 =====

undefined8 FUN_004998f0(long *param_1,uint *param_2)

{
  uint *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if ((param_2 == (uint *)0x0) || (*param_2 == 0)) {
    return 1;
  }
  uVar2 = param_1[1];
  if (uVar2 < 5) {
    return 0;
  }
  lVar3 = *param_1;
  lVar4 = (ulong)*param_2 * 4;
  if ((char)param_1[3] == '\0') {
    uVar5 = 0;
    do {
      puVar1 = (uint *)((long)param_2 + (uVar5 & 0xfffffffc) + 4);
      puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1);
      uVar6 = (long)puVar1 - lVar3;
      if (uVar2 - 4 < uVar6) {
        return 0;
      }
      uVar7 = (ulong)*puVar1;
      if ((ulong)param_1[4] <= uVar7) {
        return 0;
      }
      uVar7 = uVar7 + 4;
      if ((uVar2 - 1 < uVar7 + uVar6 || uVar2 <= uVar7) || uVar2 - uVar7 < uVar6) {
        return 0;
      }
      if (*(char *)(lVar3 + uVar7 + uVar6) != '\0') {
        return 0;
      }
      uVar5 = uVar5 + 4;
    } while (lVar4 - uVar5 != 0);
  }
  else {
    uVar5 = 0;
    do {
      puVar1 = (uint *)((long)param_2 + (uVar5 & 0xfffffffc) + 4);
      puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1);
      uVar6 = (long)puVar1 - lVar3;
      if ((uVar6 & 3) != 0 || uVar2 - 4 < uVar6) {
        return 0;
      }
      uVar7 = (ulong)*puVar1;
      if ((ulong)param_1[4] <= uVar7) {
        return 0;
      }
      uVar7 = uVar7 + 4;
      if ((uVar2 - 1 < uVar7 + uVar6 || uVar2 <= uVar7) || uVar2 - uVar7 < uVar6) {
        return 0;
      }
      if (*(char *)(lVar3 + uVar7 + uVar6) != '\0') {
        return 0;
      }
      uVar5 = uVar5 + 4;
    } while (lVar4 - uVar5 != 0);
  }
  return 1;
}


// ===== 00499a08  FUN_00499a08 =====

bool FUN_00499a08(long *param_1,uint *param_2)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_2 == (uint *)0x0) {
    return true;
  }
  uVar3 = (long)param_2 - *param_1;
  if (((uVar3 & 3) != 0) && ((char)param_1[3] != '\0')) {
    return false;
  }
  uVar4 = param_1[1];
  bVar2 = false;
  if ((4 < uVar4) && (uVar3 <= uVar4 - 4)) {
    if ((ulong)param_1[4] >> 2 <= (ulong)*param_2) {
      return false;
    }
    uVar1 = (ulong)*param_2 * 4 + 4;
    bVar2 = uVar1 < uVar4 && uVar3 <= uVar4 - uVar1;
  }
  return bVar2;
}


// ===== 00499a7c  FUN_00499a7c =====

uint FUN_00499a7c(undefined8 param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_2 == (uint *)0x0) {
    return 1;
  }
  if (*param_2 == 0) {
    return 1;
  }
  uVar3 = 0;
  uVar4 = 0;
  do {
    puVar1 = (uint *)((long)param_2 + (uVar3 & 0xfffffffc) + 4);
    uVar2 = FUN_0049c57c((long)puVar1 + (ulong)*puVar1,param_1);
    if ((uVar2 & 1) == 0) break;
    uVar4 = uVar4 + 1;
    uVar3 = uVar3 + 4;
  } while (uVar4 < *param_2);
  return uVar2 & 1;
}


// ===== 00499b20  FUN_00499b20 =====

undefined8 FUN_00499b20(int *param_1,long *param_2)

{
  uint *puVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ushort *puVar11;
  long lVar12;
  undefined8 uVar13;
  
  lVar6 = *param_2;
  cVar2 = (char)param_2[3];
  uVar8 = (long)param_1 - lVar6;
  if ((((uVar8 & 3) != 0 && cVar2 != '\0') || (uVar7 = param_2[1], uVar7 < 5)) ||
     (uVar9 = uVar7 - 4, uVar9 < uVar8)) {
    return 0;
  }
  iVar4 = *param_1;
  lVar12 = CONCAT44((int)((ulong)param_2[7] >> 0x20) + 1,(int)param_2[7] + 1);
  uVar13 = NEON_cmhs(param_2[2],lVar12,4);
  param_2[7] = lVar12;
  if (((uint)uVar13 & (uint)((ulong)uVar13 >> 0x20) & 1) == 0) {
    return 0;
  }
  uVar10 = uVar8 - (long)iVar4;
  if (cVar2 != '\0' && (uVar10 & 1) != 0) {
    return 0;
  }
  if (uVar7 - 2 < uVar10) {
    return 0;
  }
  uVar3 = *(ushort *)(lVar6 + uVar10);
  if ((uVar3 & 1) != 0) {
    return 0;
  }
  if ((uVar3 & 1) != 0 && cVar2 != '\0') {
    return 0;
  }
  if (uVar7 <= uVar3) {
    return 0;
  }
  if (uVar7 - uVar3 < uVar10) {
    return 0;
  }
  puVar11 = (ushort *)((long)param_1 - (long)*param_1);
  uVar3 = *puVar11;
  if (4 < uVar3) {
    uVar10 = (ulong)puVar11[2];
    if (uVar10 != 0) {
      uVar5 = uVar8 + uVar10;
      if (uVar9 < uVar5) {
        return 0;
      }
      if ((uVar5 & 3) != 0 && cVar2 != '\0') {
        return 0;
      }
      if ((int)*(uint *)(lVar6 + uVar5) < 1) {
        return 0;
      }
      if (uVar7 - 1 < uVar5 + *(uint *)(lVar6 + uVar5)) {
        return 0;
      }
      puVar1 = (uint *)((long)((long)param_1 + uVar10) + (ulong)*(uint *)((long)param_1 + uVar10));
      uVar10 = (long)puVar1 - lVar6;
      if (uVar9 < uVar10) {
        return 0;
      }
      if ((uVar10 & 3) != 0 && cVar2 != '\0') {
        return 0;
      }
      uVar5 = (ulong)*puVar1;
      if ((ulong)param_2[4] <= uVar5) {
        return 0;
      }
      uVar5 = uVar5 + 4;
      if (uVar7 - 1 < uVar5 + uVar10) {
        return 0;
      }
      if (uVar7 <= uVar5) {
        return 0;
      }
      if (uVar7 - uVar5 < uVar10) {
        return 0;
      }
      if (*(char *)(lVar6 + uVar5 + uVar10) != '\0') {
        return 0;
      }
    }
    if (6 < uVar3) {
      uVar10 = (ulong)puVar11[3];
      if (uVar10 != 0) {
        uVar5 = uVar8 + uVar10;
        if (uVar9 < uVar5) {
          return 0;
        }
        if ((uVar5 & 3) != 0 && cVar2 != '\0') {
          return 0;
        }
        if ((int)*(uint *)(lVar6 + uVar5) < 1) {
          return 0;
        }
        if (uVar7 - 1 < uVar5 + *(uint *)(lVar6 + uVar5)) {
          return 0;
        }
        puVar1 = (uint *)((long)((long)param_1 + uVar10) + (ulong)*(uint *)((long)param_1 + uVar10))
        ;
        uVar10 = (long)puVar1 - lVar6;
        if (uVar9 < uVar10) {
          return 0;
        }
        if ((uVar10 & 3) != 0 && cVar2 != '\0') {
          return 0;
        }
        uVar5 = (ulong)*puVar1;
        if ((ulong)param_2[4] <= uVar5) {
          return 0;
        }
        uVar5 = uVar5 + 4;
        if (uVar7 - 1 < uVar5 + uVar10) {
          return 0;
        }
        if (uVar7 <= uVar5) {
          return 0;
        }
        if (uVar7 - uVar5 < uVar10) {
          return 0;
        }
        if (*(char *)(lVar6 + uVar5 + uVar10) != '\0') {
          return 0;
        }
      }
      if ((8 < uVar3) && (uVar10 = (ulong)puVar11[4], uVar10 != 0)) {
        uVar8 = uVar8 + uVar10;
        if (uVar9 < uVar8) {
          return 0;
        }
        if ((uVar8 & 3) != 0 && cVar2 != '\0') {
          return 0;
        }
        if ((int)*(uint *)(lVar6 + uVar8) < 1) {
          return 0;
        }
        if (uVar7 - 1 < uVar8 + *(uint *)(lVar6 + uVar8)) {
          return 0;
        }
        uVar8 = FUN_00499f98(param_2,(long)((long)param_1 + uVar10) +
                                     (ulong)*(uint *)((long)param_1 + uVar10));
        goto joined_r0x00499e10;
      }
    }
  }
  uVar8 = FUN_00499f98(param_2,0);
joined_r0x00499e10:
  if ((uVar8 & 1) == 0) {
    return 0;
  }
  uVar8 = FUN_0049a00c(param_1,param_2,10,4);
  if (((uVar8 & 1) != 0) && (uVar8 = FUN_0049834c(param_1,param_2,0xc), (uVar8 & 1) != 0)) {
    if (*(ushort *)((long)param_1 - (long)*param_1) < 0xd) {
      lVar6 = 0;
    }
    else {
      uVar8 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[6];
      if (uVar8 == 0) {
        lVar6 = 0;
      }
      else {
        puVar1 = (uint *)((long)param_1 + uVar8);
        lVar6 = (long)puVar1 + (ulong)*puVar1;
      }
    }
    uVar8 = FUN_0049a070(param_2,lVar6);
    if (((uVar8 & 1) != 0) && (uVar8 = FUN_0049834c(param_1,param_2,0xe), (uVar8 & 1) != 0)) {
      if (*(ushort *)((long)param_1 - (long)*param_1) < 0xf) {
        lVar6 = 0;
      }
      else {
        uVar8 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[7];
        if (uVar8 == 0) {
          lVar6 = 0;
        }
        else {
          puVar1 = (uint *)((long)param_1 + uVar8);
          lVar6 = (long)puVar1 + (ulong)*puVar1;
        }
      }
      uVar8 = FUN_0049987c(param_2,lVar6);
      if ((uVar8 & 1) != 0) {
        if ((*(ushort *)((long)param_1 - (long)*param_1) < 0xf) ||
           (uVar8 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[7], uVar8 == 0)) {
          lVar6 = 0;
        }
        else {
          puVar1 = (uint *)((long)param_1 + uVar8);
          lVar6 = (long)puVar1 + (ulong)*puVar1;
        }
        uVar8 = FUN_004998f0(param_2,lVar6);
        if (((uVar8 & 1) != 0) && (uVar8 = FUN_00498a04(param_1,param_2,0x10,8), (uVar8 & 1) != 0))
        {
          *(int *)(param_2 + 7) = (int)param_2[7] + -1;
          return 1;
        }
      }
    }
  }
  return 0;
}


// ===== 00499f98  FUN_00499f98 =====

bool FUN_00499f98(long *param_1,uint *param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_2 == (uint *)0x0) {
    return true;
  }
  uVar3 = (long)param_2 - *param_1;
  if (((uVar3 & 3) != 0) && ((char)param_1[3] != '\0')) {
    return false;
  }
  uVar4 = param_1[1];
  bVar1 = false;
  if ((4 < uVar4) && (uVar3 <= uVar4 - 4)) {
    if ((ulong)param_1[4] >> 3 <= (ulong)*param_2) {
      return false;
    }
    uVar2 = (ulong)*param_2 << 3 | 4;
    bVar1 = uVar2 < uVar4 && uVar3 <= uVar4 - uVar2;
  }
  return bVar1;
}


// ===== 0049a00c  FUN_0049a00c =====

bool FUN_0049a00c(int *param_1,long *param_2,ushort param_3,long param_4)

{
  ulong uVar1;
  
  if ((*(ushort *)((long)param_1 - (long)*param_1) <= param_3) ||
     (uVar1 = (ulong)*(ushort *)(((long)param_1 - (long)*param_1) + (ulong)param_3), uVar1 == 0)) {
    return true;
  }
  uVar1 = (long)param_1 + (uVar1 - *param_2);
  if (((uVar1 & param_4 - 1U) != 0) && ((char)param_2[3] != '\0')) {
    return false;
  }
  return 4 < (ulong)param_2[1] && uVar1 <= param_2[1] - 4U;
}


// ===== 0049a070  FUN_0049a070 =====

bool FUN_0049a070(long *param_1,uint *param_2)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_2 == (uint *)0x0) {
    return true;
  }
  uVar3 = (long)param_2 - *param_1;
  if (((uVar3 & 3) != 0) && ((char)param_1[3] != '\0')) {
    return false;
  }
  uVar4 = param_1[1];
  bVar2 = false;
  if ((4 < uVar4) && (uVar3 <= uVar4 - 4)) {
    if ((ulong)param_1[4] <= (ulong)*param_2) {
      return false;
    }
    uVar1 = (ulong)*param_2 + 4;
    bVar2 = uVar1 < uVar4 && uVar3 <= uVar4 - uVar1;
  }
  return bVar2;
}


// ===== 0049a0e0  FUN_0049a0e0 =====

undefined4 FUN_0049a0e0(int *param_1,long *param_2)

{
  uint *puVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ushort *puVar11;
  int iVar12;
  long lVar13;
  undefined8 uVar14;
  
  lVar6 = *param_2;
  cVar2 = (char)param_2[3];
  uVar8 = (long)param_1 - lVar6;
  if ((((uVar8 & 3) != 0 && cVar2 != '\0') || (uVar7 = param_2[1], uVar7 < 5)) ||
     (uVar9 = uVar7 - 4, uVar9 < uVar8)) {
    return 0;
  }
  iVar4 = *param_1;
  iVar12 = (int)param_2[7];
  lVar13 = CONCAT44((int)((ulong)param_2[7] >> 0x20) + 1,iVar12 + 1);
  uVar14 = NEON_cmhs(param_2[2],lVar13,4);
  param_2[7] = lVar13;
  if (((uint)uVar14 & (uint)((ulong)uVar14 >> 0x20) & 1) == 0) {
    return 0;
  }
  uVar10 = uVar8 - (long)iVar4;
  if (cVar2 != '\0' && (uVar10 & 1) != 0) {
    return 0;
  }
  if (uVar7 - 2 < uVar10) {
    return 0;
  }
  uVar3 = *(ushort *)(lVar6 + uVar10);
  if ((uVar3 & 1) != 0) {
    return 0;
  }
  if ((uVar3 & 1) != 0 && cVar2 != '\0') {
    return 0;
  }
  if (uVar7 <= uVar3) {
    return 0;
  }
  if (uVar7 - uVar3 < uVar10) {
    return 0;
  }
  puVar11 = (ushort *)((long)param_1 - (long)*param_1);
  uVar3 = *puVar11;
  if (4 < uVar3) {
    uVar10 = (ulong)puVar11[2];
    if (uVar10 != 0) {
      uVar5 = uVar8 + uVar10;
      if (uVar9 < uVar5) {
        return 0;
      }
      if ((uVar5 & 3) != 0 && cVar2 != '\0') {
        return 0;
      }
      if ((int)*(uint *)(lVar6 + uVar5) < 1) {
        return 0;
      }
      if (uVar7 - 1 < uVar5 + *(uint *)(lVar6 + uVar5)) {
        return 0;
      }
      puVar1 = (uint *)((long)((long)param_1 + uVar10) + (ulong)*(uint *)((long)param_1 + uVar10));
      uVar10 = (long)puVar1 - lVar6;
      if (uVar9 < uVar10) {
        return 0;
      }
      if ((uVar10 & 3) != 0 && cVar2 != '\0') {
        return 0;
      }
      uVar5 = (ulong)*puVar1;
      if ((ulong)param_2[4] <= uVar5) {
        return 0;
      }
      uVar5 = uVar5 + 4;
      if (uVar7 - 1 < uVar5 + uVar10) {
        return 0;
      }
      if (uVar7 <= uVar5) {
        return 0;
      }
      if (uVar7 - uVar5 < uVar10) {
        return 0;
      }
      if (*(char *)(lVar6 + uVar5 + uVar10) != '\0') {
        return 0;
      }
    }
    if (6 < uVar3) {
      uVar10 = (ulong)puVar11[3];
      if (uVar10 != 0) {
        uVar5 = uVar8 + uVar10;
        if (uVar9 < uVar5) {
          return 0;
        }
        if ((uVar5 & 3) != 0 && cVar2 != '\0') {
          return 0;
        }
        if ((int)*(uint *)(lVar6 + uVar5) < 1) {
          return 0;
        }
        if (uVar7 - 1 < uVar5 + *(uint *)(lVar6 + uVar5)) {
          return 0;
        }
        puVar1 = (uint *)((long)((long)param_1 + uVar10) + (ulong)*(uint *)((long)param_1 + uVar10))
        ;
        uVar10 = (long)puVar1 - lVar6;
        if (uVar9 < uVar10) {
          return 0;
        }
        if ((uVar10 & 3) != 0 && cVar2 != '\0') {
          return 0;
        }
        uVar5 = (ulong)*puVar1;
        if ((ulong)param_2[4] <= uVar5) {
          return 0;
        }
        uVar5 = uVar5 + 4;
        if (uVar7 - 1 < uVar5 + uVar10) {
          return 0;
        }
        if (uVar7 <= uVar5) {
          return 0;
        }
        if (uVar7 - uVar5 < uVar10) {
          return 0;
        }
        if (*(char *)(lVar6 + uVar5 + uVar10) != '\0') {
          return 0;
        }
      }
      if ((8 < uVar3) && (uVar10 = (ulong)puVar11[4], uVar10 != 0)) {
        uVar8 = uVar8 + uVar10;
        if (uVar9 < uVar8) {
          return 0;
        }
        if ((uVar8 & 3) != 0 && cVar2 != '\0') {
          return 0;
        }
        if ((((int)*(uint *)(lVar6 + uVar8) < 1) || (uVar7 - 1 < uVar8 + *(uint *)(lVar6 + uVar8)))
           || (uVar8 = FUN_0049a3d8((long)((long)param_1 + uVar10) +
                                    (ulong)*(uint *)((long)param_1 + uVar10),param_2),
              (uVar8 & 1) == 0)) {
          return 0;
        }
        iVar12 = (int)param_2[7] + -1;
      }
    }
  }
  *(int *)(param_2 + 7) = iVar12;
  return 1;
}


// ===== 0049a3d8  FUN_0049a3d8 =====

undefined4 FUN_0049a3d8(int *param_1,long *param_2)

{
  uint *puVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ushort *puVar11;
  long lVar12;
  undefined8 uVar13;
  
  lVar6 = *param_2;
  cVar2 = (char)param_2[3];
  uVar8 = (long)param_1 - lVar6;
  if ((((uVar8 & 3) != 0 && cVar2 != '\0') || (uVar7 = param_2[1], uVar7 < 5)) ||
     (uVar9 = uVar7 - 4, uVar9 < uVar8)) {
    return 0;
  }
  iVar4 = *param_1;
  lVar12 = CONCAT44((int)((ulong)param_2[7] >> 0x20) + 1,(int)param_2[7] + 1);
  uVar13 = NEON_cmhs(param_2[2],lVar12,4);
  param_2[7] = lVar12;
  if (((uint)uVar13 & (uint)((ulong)uVar13 >> 0x20) & 1) == 0) {
    return 0;
  }
  uVar10 = uVar8 - (long)iVar4;
  if (cVar2 != '\0' && (uVar10 & 1) != 0) {
    return 0;
  }
  if (uVar7 - 2 < uVar10) {
    return 0;
  }
  uVar3 = *(ushort *)(lVar6 + uVar10);
  if ((uVar3 & 1) != 0) {
    return 0;
  }
  if ((uVar3 & 1) != 0 && cVar2 != '\0') {
    return 0;
  }
  if (uVar7 <= uVar3) {
    return 0;
  }
  if (uVar7 - uVar3 < uVar10) {
    return 0;
  }
  puVar11 = (ushort *)((long)param_1 - (long)*param_1);
  uVar3 = *puVar11;
  if (uVar3 < 5) goto LAB_0049a684;
  uVar10 = (ulong)puVar11[2];
  if (uVar10 != 0) {
    uVar5 = uVar8 + uVar10;
    if (uVar9 < uVar5) {
      return 0;
    }
    if ((uVar5 & 3) != 0 && cVar2 != '\0') {
      return 0;
    }
    if ((int)*(uint *)(lVar6 + uVar5) < 1) {
      return 0;
    }
    if (uVar7 - 1 < uVar5 + *(uint *)(lVar6 + uVar5)) {
      return 0;
    }
    puVar1 = (uint *)((long)((long)param_1 + uVar10) + (ulong)*(uint *)((long)param_1 + uVar10));
    uVar10 = (long)puVar1 - lVar6;
    if (uVar9 < uVar10) {
      return 0;
    }
    if ((uVar10 & 3) != 0 && cVar2 != '\0') {
      return 0;
    }
    uVar5 = (ulong)*puVar1;
    if ((ulong)param_2[4] <= uVar5) {
      return 0;
    }
    uVar5 = uVar5 + 4;
    if (uVar7 - 1 < uVar5 + uVar10) {
      return 0;
    }
    if (uVar7 <= uVar5) {
      return 0;
    }
    if (uVar7 - uVar5 < uVar10) {
      return 0;
    }
    if (*(char *)(lVar6 + uVar5 + uVar10) != '\0') {
      return 0;
    }
  }
  if (uVar3 < 7) goto LAB_0049a684;
  uVar10 = (ulong)puVar11[3];
  if (uVar10 == 0) {
    if (uVar3 < 9) goto LAB_0049a684;
LAB_0049a5b4:
    uVar5 = (ulong)puVar11[4];
    if (uVar5 == 0) {
      lVar6 = 0;
    }
    else {
      uVar8 = uVar8 + uVar5;
      if (uVar9 < uVar8) {
        return 0;
      }
      if ((uVar8 & 3) != 0 && cVar2 != '\0') {
        return 0;
      }
      if ((int)*(uint *)(lVar6 + uVar8) < 1) {
        return 0;
      }
      if (uVar7 - 1 < uVar8 + *(uint *)(lVar6 + uVar8)) {
        return 0;
      }
      lVar6 = (long)((long)param_1 + uVar5) + (ulong)*(uint *)((long)param_1 + uVar5);
    }
    if (puVar11[3] == 0) goto LAB_0049a684;
  }
  else {
    if (uVar7 - 1 < uVar8 + uVar10) {
      return 0;
    }
    if (8 < uVar3) goto LAB_0049a5b4;
    lVar6 = 0;
  }
  cVar2 = *(char *)((long)param_1 + uVar10);
  if (cVar2 == '\x03') {
    uVar8 = FUN_0049a82c(param_2,lVar6);
  }
  else if (cVar2 == '\x02') {
    uVar8 = FUN_0049a6a4(param_2,lVar6);
  }
  else {
    if ((cVar2 != '\x01') || (lVar6 == 0)) goto LAB_0049a684;
    uVar8 = FUN_0049a9e4(lVar6);
  }
  if ((uVar8 & 1) == 0) {
    return 0;
  }
LAB_0049a684:
  *(int *)(param_2 + 7) = (int)param_2[7] + -1;
  return 1;
}


// ===== 0049a6a4  FUN_0049a6a4 =====

undefined4 FUN_0049a6a4(long *param_1,int *param_2)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  
  if (param_2 == (int *)0x0) {
    uVar4 = 1;
  }
  else {
    lVar5 = *param_1;
    cVar1 = (char)param_1[3];
    uVar7 = (long)param_2 - lVar5;
    if (((uVar7 & 3) != 0) && (cVar1 != '\0')) {
      return 0;
    }
    uVar6 = param_1[1];
    uVar4 = 0;
    if ((4 < uVar6) && (uVar7 <= uVar6 - 4)) {
      iVar3 = *param_2;
      iVar9 = (int)param_1[7];
      lVar10 = CONCAT44((int)((ulong)param_1[7] >> 0x20) + 1,iVar9 + 1);
      uVar11 = NEON_cmhs(param_1[2],lVar10,4);
      param_1[7] = lVar10;
      if (((uint)uVar11 & (uint)((ulong)uVar11 >> 0x20) & 1) == 0) {
        return 0;
      }
      uVar8 = uVar7 - (long)iVar3;
      uVar4 = 0;
      if ((cVar1 == '\0' || (uVar8 & 1) == 0) && (uVar8 <= uVar6 - 2)) {
        uVar2 = *(ushort *)(lVar5 + uVar8);
        uVar4 = 0;
        if (((uVar2 & 1) == 0) && ((uVar2 & 1) == 0 || cVar1 == '\0')) {
          uVar4 = 0;
          if ((uVar2 < uVar6) && (uVar8 <= uVar6 - uVar2)) {
            if ((4 < *(ushort *)((long)param_2 - (long)*param_2)) &&
               (uVar8 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2], uVar8 != 0)) {
              uVar7 = uVar7 + uVar8;
              if (uVar6 - 4 < uVar7) {
                return 0;
              }
              if ((uVar7 & 3) != 0 && cVar1 != '\0') {
                return 0;
              }
              if ((((int)*(uint *)(lVar5 + uVar7) < 1) ||
                  (uVar6 - 1 < uVar7 + *(uint *)(lVar5 + uVar7))) ||
                 (uVar7 = FUN_0049a3d8((long)((long)param_2 + uVar8) +
                                       (ulong)*(uint *)((long)param_2 + uVar8)), (uVar7 & 1) == 0))
              {
                return 0;
              }
              iVar9 = (int)param_1[7] + -1;
            }
            *(int *)(param_1 + 7) = iVar9;
            uVar4 = 1;
          }
        }
        return uVar4;
      }
    }
  }
  return uVar4;
}


// ===== 0049a82c  FUN_0049a82c =====

undefined4 FUN_0049a82c(long *param_1,int *param_2)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ushort *puVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  
  if (param_2 == (int *)0x0) {
    uVar4 = 1;
  }
  else {
    lVar5 = *param_1;
    cVar1 = (char)param_1[3];
    uVar7 = (long)param_2 - lVar5;
    if (((uVar7 & 3) != 0) && (cVar1 != '\0')) {
      return 0;
    }
    uVar6 = param_1[1];
    uVar4 = 0;
    if ((4 < uVar6) && (uVar8 = uVar6 - 4, uVar7 <= uVar8)) {
      iVar3 = *param_2;
      iVar11 = (int)param_1[7];
      lVar12 = CONCAT44((int)((ulong)param_1[7] >> 0x20) + 1,iVar11 + 1);
      uVar13 = NEON_cmhs(param_1[2],lVar12,4);
      param_1[7] = lVar12;
      if (((uint)uVar13 & (uint)((ulong)uVar13 >> 0x20) & 1) == 0) {
        return 0;
      }
      uVar9 = uVar7 - (long)iVar3;
      uVar4 = 0;
      if ((cVar1 == '\0' || (uVar9 & 1) == 0) && (uVar9 <= uVar6 - 2)) {
        uVar2 = *(ushort *)(lVar5 + uVar9);
        uVar4 = 0;
        if (((uVar2 & 1) == 0) && ((uVar2 & 1) == 0 || cVar1 == '\0')) {
          uVar4 = 0;
          if ((uVar2 < uVar6) && (uVar9 <= uVar6 - uVar2)) {
            puVar10 = (ushort *)((long)param_2 - (long)*param_2);
            if (4 < *puVar10) {
              if ((ulong)puVar10[2] != 0) {
                uVar9 = uVar7 + puVar10[2];
                if (uVar8 < uVar9) {
                  return 0;
                }
                if ((uVar9 & 3) != 0 && cVar1 != '\0') {
                  return 0;
                }
              }
              if ((6 < *puVar10) && (uVar9 = (ulong)puVar10[3], uVar9 != 0)) {
                uVar7 = uVar7 + uVar9;
                if (uVar8 < uVar7) {
                  return 0;
                }
                if ((uVar7 & 3) != 0 && cVar1 != '\0') {
                  return 0;
                }
                if ((((int)*(uint *)(lVar5 + uVar7) < 1) ||
                    (uVar6 - 1 < uVar7 + *(uint *)(lVar5 + uVar7))) ||
                   (uVar7 = FUN_0049a3d8((long)((long)param_2 + uVar9) +
                                         (ulong)*(uint *)((long)param_2 + uVar9),param_1),
                   (uVar7 & 1) == 0)) {
                  return 0;
                }
                iVar11 = (int)param_1[7] + -1;
              }
            }
            uVar4 = 1;
            *(int *)(param_1 + 7) = iVar11;
          }
        }
        return uVar4;
      }
    }
  }
  return uVar4;
}


// ===== 0049a9e4  FUN_0049a9e4 =====

undefined4 FUN_0049a9e4(int *param_1,long *param_2)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ushort *puVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  
  lVar5 = *param_2;
  cVar1 = (char)param_2[3];
  uVar7 = (long)param_1 - lVar5;
  if ((((uVar7 & 3) == 0 || cVar1 == '\0') && (uVar6 = param_2[1], 4 < uVar6)) &&
     (uVar8 = uVar6 - 4, uVar7 <= uVar8)) {
    iVar3 = *param_1;
    iVar11 = (int)param_2[7];
    lVar12 = CONCAT44((int)((ulong)param_2[7] >> 0x20) + 1,iVar11 + 1);
    uVar13 = NEON_cmhs(param_2[2],lVar12,4);
    param_2[7] = lVar12;
    if (((((uint)uVar13 & (uint)((ulong)uVar13 >> 0x20) & 1) != 0) &&
        (uVar9 = uVar7 - (long)iVar3, cVar1 == '\0' || (uVar9 & 1) == 0)) && (uVar9 <= uVar6 - 2)) {
      uVar2 = *(ushort *)(lVar5 + uVar9);
      uVar4 = 0;
      if (((uVar2 & 1) == 0) && ((uVar2 & 1) == 0 || cVar1 == '\0')) {
        uVar4 = 0;
        if ((uVar2 < uVar6) && (uVar9 <= uVar6 - uVar2)) {
          puVar10 = (ushort *)((long)param_1 - (long)*param_1);
          if (4 < *puVar10) {
            if ((ulong)puVar10[2] != 0) {
              uVar9 = uVar7 + puVar10[2];
              if (uVar8 < uVar9) {
                return 0;
              }
              if ((uVar9 & 3) != 0 && cVar1 != '\0') {
                return 0;
              }
            }
            if ((6 < *puVar10) && (uVar9 = (ulong)puVar10[3], uVar9 != 0)) {
              uVar7 = uVar7 + uVar9;
              if (uVar8 < uVar7) {
                return 0;
              }
              if ((uVar7 & 3) != 0 && cVar1 != '\0') {
                return 0;
              }
              if ((((int)*(uint *)(lVar5 + uVar7) < 1) ||
                  (uVar6 - 1 < uVar7 + *(uint *)(lVar5 + uVar7))) ||
                 (uVar7 = FUN_0049ab90((long)((long)param_1 + uVar9) +
                                       (ulong)*(uint *)((long)param_1 + uVar9)), (uVar7 & 1) == 0))
              {
                return 0;
              }
              iVar11 = (int)param_2[7] + -1;
            }
          }
          uVar4 = 1;
          *(int *)(param_2 + 7) = iVar11;
        }
      }
      return uVar4;
    }
  }
  return 0;
}


// ===== 0049ab90  FUN_0049ab90 =====

undefined4 FUN_0049ab90(int *param_1,long *param_2)

{
  uint *puVar1;
  uint *puVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  undefined8 uVar14;
  
  lVar8 = *param_2;
  cVar3 = (char)param_2[3];
  uVar10 = (long)param_1 - lVar8;
  if ((((uVar10 & 3) == 0 || cVar3 == '\0') && (uVar7 = param_2[1], 4 < uVar7)) &&
     (uVar9 = uVar7 - 4, uVar10 <= uVar9)) {
    iVar5 = *param_1;
    iVar12 = (int)param_2[7];
    lVar13 = CONCAT44((int)((ulong)param_2[7] >> 0x20) + 1,iVar12 + 1);
    uVar14 = NEON_cmhs(param_2[2],lVar13,4);
    param_2[7] = lVar13;
    if (((((uint)uVar14 & (uint)((ulong)uVar14 >> 0x20) & 1) != 0) &&
        (uVar11 = uVar10 - (long)iVar5, cVar3 == '\0' || (uVar11 & 1) == 0)) &&
       (uVar11 <= uVar7 - 2)) {
      uVar4 = *(ushort *)(lVar8 + uVar11);
      uVar6 = 0;
      if (((uVar4 & 1) == 0) && ((uVar4 & 1) == 0 || cVar3 == '\0')) {
        uVar6 = 0;
        if ((uVar4 < uVar7) && (uVar11 <= uVar7 - uVar4)) {
          if ((4 < *(ushort *)((long)param_1 - (long)*param_1)) &&
             (uVar11 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[2], uVar11 != 0)) {
            uVar10 = uVar10 + uVar11;
            if (uVar9 < uVar10) {
              return 0;
            }
            if ((uVar10 & 3) != 0 && cVar3 != '\0') {
              return 0;
            }
            if (((int)*(uint *)(lVar8 + uVar10) < 1) ||
               (uVar7 - 1 < uVar10 + *(uint *)(lVar8 + uVar10))) {
              return 0;
            }
            puVar1 = (uint *)((long)((long)param_1 + uVar11) +
                             (ulong)*(uint *)((long)param_1 + uVar11));
            uVar10 = (long)puVar1 - lVar8;
            if (uVar9 < uVar10) {
              return 0;
            }
            if ((uVar10 & 3) != 0 && cVar3 != '\0') {
              return 0;
            }
            uVar9 = (ulong)*puVar1;
            if ((ulong)param_2[4] >> 2 <= uVar9) {
              return 0;
            }
            uVar9 = uVar9 * 4 + 4;
            if (uVar7 <= uVar9) {
              return 0;
            }
            if (uVar7 - uVar9 < uVar10) {
              return 0;
            }
            puVar1 = (uint *)((long)((long)param_1 + uVar11) +
                             (ulong)*(uint *)((long)param_1 + uVar11));
            if (*puVar1 != 0) {
              uVar7 = 0;
              uVar10 = 0;
              do {
                puVar2 = (uint *)((long)puVar1 + (uVar7 & 0xfffffffc) + 4);
                uVar9 = FUN_0049adb4((long)puVar2 + (ulong)*puVar2);
                if ((uVar9 & 1) == 0) {
                  return 0;
                }
                uVar10 = uVar10 + 1;
                uVar7 = uVar7 + 4;
              } while (uVar10 < *puVar1);
              iVar12 = (int)param_2[7] + -1;
            }
          }
          uVar6 = 1;
          *(int *)(param_2 + 7) = iVar12;
        }
      }
      return uVar6;
    }
  }
  return 0;
}


// ===== 0049adb4  FUN_0049adb4 =====

undefined4 FUN_0049adb4(int *param_1,long *param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ushort *puVar11;
  undefined8 uVar12;
  
  lVar7 = *param_2;
  cVar3 = (char)param_2[3];
  uVar9 = (long)param_1 - lVar7;
  if ((((uVar9 & 3) != 0 && cVar3 != '\0') || (uVar8 = param_2[1], uVar8 < 5)) ||
     (uVar8 - 4 < uVar9)) {
    return 0;
  }
  iVar5 = *param_1;
  lVar6 = CONCAT44((int)((ulong)param_2[7] >> 0x20) + 1,(int)param_2[7] + 1);
  uVar12 = NEON_cmhs(param_2[2],lVar6,4);
  param_2[7] = lVar6;
  if (((uint)uVar12 & (uint)((ulong)uVar12 >> 0x20) & 1) == 0) {
    return 0;
  }
  uVar10 = uVar9 - (long)iVar5;
  if (cVar3 != '\0' && (uVar10 & 1) != 0) {
    return 0;
  }
  if (uVar8 - 2 < uVar10) {
    return 0;
  }
  uVar4 = *(ushort *)(lVar7 + uVar10);
  if ((uVar4 & 1) != 0) {
    return 0;
  }
  if ((uVar4 & 1) != 0 && cVar3 != '\0') {
    return 0;
  }
  if (uVar8 <= uVar4) {
    return 0;
  }
  if (uVar8 - uVar4 < uVar10) {
    return 0;
  }
  puVar11 = (ushort *)((long)param_1 - (long)*param_1);
  lVar6 = -(long)*param_1;
  if ((4 < *puVar11) && (uVar10 = (ulong)puVar11[2], uVar10 != 0)) {
    uVar9 = uVar9 + uVar10;
    if (uVar8 - 4 < uVar9) {
      return 0;
    }
    if ((uVar9 & 3) != 0 && cVar3 != '\0') {
      return 0;
    }
    if ((int)*(uint *)(lVar7 + uVar9) < 1) {
      return 0;
    }
    if (uVar8 - 1 < uVar9 + *(uint *)(lVar7 + uVar9)) {
      return 0;
    }
    uVar9 = FUN_0049b034((long)((long)param_1 + uVar10) + (ulong)*(uint *)((long)param_1 + uVar10));
    if ((uVar9 & 1) == 0) {
      return 0;
    }
    lVar6 = -(long)*param_1;
  }
  if ((6 < *(ushort *)((long)param_1 + lVar6)) &&
     (uVar9 = (ulong)((ushort *)((long)param_1 + lVar6))[3], uVar9 != 0)) {
    uVar8 = (long)param_1 + (uVar9 - *param_2);
    if (((uVar8 & 3) != 0) && ((char)param_2[3] != '\0')) {
      return 0;
    }
    uVar10 = param_2[1];
    if (uVar10 < 5) {
      return 0;
    }
    if (uVar10 - 4 < uVar8) {
      return 0;
    }
    uVar2 = *(uint *)(*param_2 + uVar8);
    if (((int)uVar2 < 1) || (uVar10 - 1 < uVar8 + uVar2)) {
      return 0;
    }
    puVar1 = (uint *)((long)((long)param_1 + uVar9) + (ulong)*(uint *)((long)param_1 + uVar9));
    uVar9 = (long)puVar1 - *param_2;
    if (((uVar9 & 3) != 0) && ((char)param_2[3] != '\0')) {
      return 0;
    }
    uVar8 = param_2[1];
    if (uVar8 < 5) {
      return 0;
    }
    if (uVar8 - 4 < uVar9) {
      return 0;
    }
    uVar10 = (ulong)*puVar1;
    if ((ulong)param_2[4] <= uVar10) {
      return 0;
    }
    uVar10 = uVar10 + 4;
    if (uVar8 - 1 < uVar10 + uVar9) {
      return 0;
    }
    if (uVar8 <= uVar10) {
      return 0;
    }
    if (uVar8 - uVar10 < uVar9) {
      return 0;
    }
    if (*(char *)(*param_2 + uVar10 + uVar9) != '\0') {
      return 0;
    }
  }
  *(int *)(param_2 + 7) = (int)param_2[7] + -1;
  return 1;
}


// ===== 0049b034  FUN_0049b034 =====

undefined8 FUN_0049b034(int *param_1,long *param_2)

{
  uint *puVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ushort *puVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  
  lVar5 = *param_2;
  cVar2 = (char)param_2[3];
  uVar8 = (long)param_1 - lVar5;
  if ((((uVar8 & 3) == 0 || cVar2 == '\0') && (uVar6 = param_2[1], 4 < uVar6)) &&
     (uVar7 = uVar6 - 4, uVar8 <= uVar7)) {
    iVar4 = *param_1;
    iVar11 = (int)param_2[7];
    lVar12 = CONCAT44((int)((ulong)param_2[7] >> 0x20) + 1,iVar11 + 1);
    uVar13 = NEON_cmhs(param_2[2],lVar12,4);
    param_2[7] = lVar12;
    if (((((uint)uVar13 & (uint)((ulong)uVar13 >> 0x20) & 1) != 0) &&
        (uVar9 = uVar8 - (long)iVar4, cVar2 == '\0' || (uVar9 & 1) == 0)) && (uVar9 <= uVar6 - 2)) {
      uVar3 = *(ushort *)(lVar5 + uVar9);
      if ((((uVar3 & 1) == 0) && ((uVar3 & 1) == 0 || cVar2 == '\0')) &&
         ((uVar3 < uVar6 && (uVar9 <= uVar6 - uVar3)))) {
        puVar10 = (ushort *)((long)param_1 - (long)*param_1);
        uVar3 = *puVar10;
        if (uVar3 < 5) {
LAB_0049b214:
          *(int *)(param_2 + 7) = iVar11;
          return 1;
        }
        if (((ulong)puVar10[2] == 0) || (uVar8 + puVar10[2] <= uVar6 - 1)) {
          if (uVar3 < 7) goto LAB_0049b214;
          if (((ulong)puVar10[3] == 0) ||
             ((((uVar9 = uVar8 + puVar10[3], (uVar9 & 7) == 0 || (cVar2 == '\0')) && (8 < uVar6)) &&
              (uVar9 <= uVar6 - 8)))) {
            if ((uVar3 < 9) || (uVar9 = (ulong)puVar10[4], uVar9 == 0)) goto LAB_0049b214;
            uVar8 = uVar8 + uVar9;
            if ((uVar8 <= uVar7) &&
               ((((uVar8 & 3) == 0 || cVar2 == '\0' && (0 < (int)*(uint *)(lVar5 + uVar8))) &&
                (uVar8 + *(uint *)(lVar5 + uVar8) <= uVar6 - 1)))) {
              puVar1 = (uint *)((long)((long)param_1 + uVar9) +
                               (ulong)*(uint *)((long)param_1 + uVar9));
              uVar8 = (long)puVar1 - lVar5;
              if (((uVar8 <= uVar7) && ((uVar8 & 3) == 0 || cVar2 == '\0')) &&
                 (uVar7 = (ulong)*puVar1, uVar7 < (ulong)param_2[4])) {
                uVar7 = uVar7 + 4;
                if (((uVar7 + uVar8 <= uVar6 - 1) && (uVar7 < uVar6)) &&
                   ((uVar8 <= uVar6 - uVar7 && (*(char *)(lVar5 + uVar7 + uVar8) == '\0'))))
                goto LAB_0049b214;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}


// ===== 0049b220  FUN_0049b220 =====

undefined8 FUN_0049b220(int *param_1,long *param_2)

{
  uint *puVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ushort *puVar11;
  long lVar12;
  undefined8 uVar13;
  
  lVar6 = *param_2;
  cVar2 = (char)param_2[3];
  uVar8 = (long)param_1 - lVar6;
  if ((((uVar8 & 3) != 0 && cVar2 != '\0') || (uVar7 = param_2[1], uVar7 < 5)) ||
     (uVar9 = uVar7 - 4, uVar9 < uVar8)) {
    return 0;
  }
  iVar4 = *param_1;
  lVar12 = CONCAT44((int)((ulong)param_2[7] >> 0x20) + 1,(int)param_2[7] + 1);
  uVar13 = NEON_cmhs(param_2[2],lVar12,4);
  param_2[7] = lVar12;
  if (((uint)uVar13 & (uint)((ulong)uVar13 >> 0x20) & 1) == 0) {
    return 0;
  }
  uVar10 = uVar8 - (long)iVar4;
  if (cVar2 != '\0' && (uVar10 & 1) != 0) {
    return 0;
  }
  if (uVar7 - 2 < uVar10) {
    return 0;
  }
  uVar3 = *(ushort *)(lVar6 + uVar10);
  if ((uVar3 & 1) != 0) {
    return 0;
  }
  if ((uVar3 & 1) != 0 && cVar2 != '\0') {
    return 0;
  }
  if (uVar7 <= uVar3) {
    return 0;
  }
  if (uVar7 - uVar3 < uVar10) {
    return 0;
  }
  puVar11 = (ushort *)((long)param_1 - (long)*param_1);
  uVar3 = *puVar11;
  if (4 < uVar3) {
    uVar10 = (ulong)puVar11[2];
    if (uVar10 != 0) {
      uVar5 = uVar8 + uVar10;
      if (uVar9 < uVar5) {
        return 0;
      }
      if ((uVar5 & 3) != 0 && cVar2 != '\0') {
        return 0;
      }
      if ((int)*(uint *)(lVar6 + uVar5) < 1) {
        return 0;
      }
      if (uVar7 - 1 < uVar5 + *(uint *)(lVar6 + uVar5)) {
        return 0;
      }
      puVar1 = (uint *)((long)((long)param_1 + uVar10) + (ulong)*(uint *)((long)param_1 + uVar10));
      uVar10 = (long)puVar1 - lVar6;
      if (uVar9 < uVar10) {
        return 0;
      }
      if ((uVar10 & 3) != 0 && cVar2 != '\0') {
        return 0;
      }
      uVar5 = (ulong)*puVar1;
      if ((ulong)param_2[4] <= uVar5) {
        return 0;
      }
      uVar5 = uVar5 + 4;
      if (uVar7 - 1 < uVar5 + uVar10) {
        return 0;
      }
      if (uVar7 <= uVar5) {
        return 0;
      }
      if (uVar7 - uVar5 < uVar10) {
        return 0;
      }
      if (*(char *)(lVar6 + uVar5 + uVar10) != '\0') {
        return 0;
      }
    }
    if (6 < uVar3) {
      uVar10 = (ulong)puVar11[3];
      if (uVar10 != 0) {
        uVar5 = uVar8 + uVar10;
        if (uVar9 < uVar5) {
          return 0;
        }
        if ((uVar5 & 3) != 0 && cVar2 != '\0') {
          return 0;
        }
        if ((int)*(uint *)(lVar6 + uVar5) < 1) {
          return 0;
        }
        if (uVar7 - 1 < uVar5 + *(uint *)(lVar6 + uVar5)) {
          return 0;
        }
        puVar1 = (uint *)((long)((long)param_1 + uVar10) + (ulong)*(uint *)((long)param_1 + uVar10))
        ;
        uVar10 = (long)puVar1 - lVar6;
        if (uVar9 < uVar10) {
          return 0;
        }
        if ((uVar10 & 3) != 0 && cVar2 != '\0') {
          return 0;
        }
        uVar5 = (ulong)*puVar1;
        if ((ulong)param_2[4] <= uVar5) {
          return 0;
        }
        uVar5 = uVar5 + 4;
        if (uVar7 - 1 < uVar5 + uVar10) {
          return 0;
        }
        if (uVar7 <= uVar5) {
          return 0;
        }
        if (uVar7 - uVar5 < uVar10) {
          return 0;
        }
        if (*(char *)(lVar6 + uVar5 + uVar10) != '\0') {
          return 0;
        }
      }
      if ((8 < uVar3) && (uVar10 = (ulong)puVar11[4], uVar10 != 0)) {
        uVar8 = uVar8 + uVar10;
        if (uVar9 < uVar8) {
          return 0;
        }
        if ((uVar8 & 3) != 0 && cVar2 != '\0') {
          return 0;
        }
        if ((int)*(uint *)(lVar6 + uVar8) < 1) {
          return 0;
        }
        if (uVar7 - 1 < uVar8 + *(uint *)(lVar6 + uVar8)) {
          return 0;
        }
        uVar8 = FUN_004983d4(param_2,(long)((long)param_1 + uVar10) +
                                     (ulong)*(uint *)((long)param_1 + uVar10));
        goto joined_r0x0049b518;
      }
    }
  }
  uVar8 = FUN_004983d4(param_2,0);
joined_r0x0049b518:
  if ((uVar8 & 1) == 0) {
    return 0;
  }
  uVar8 = FUN_0049a00c(param_1,param_2,10,4);
  if ((((uVar8 & 1) != 0) && (uVar8 = FUN_00499700(param_1,param_2,0xc,4), (uVar8 & 1) != 0)) &&
     (uVar8 = FUN_0049834c(param_1,param_2,0xe), (uVar8 & 1) != 0)) {
    if (*(ushort *)((long)param_1 - (long)*param_1) < 0xf) {
      lVar6 = 0;
    }
    else {
      uVar8 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[7];
      if (uVar8 == 0) {
        lVar6 = 0;
      }
      else {
        puVar1 = (uint *)((long)param_1 + uVar8);
        lVar6 = (long)puVar1 + (ulong)*puVar1;
      }
    }
    uVar8 = FUN_004983d4(param_2,lVar6);
    if ((((uVar8 & 1) != 0) && (uVar8 = FUN_0049a00c(param_1,param_2,0x10,4), (uVar8 & 1) != 0)) &&
       (uVar8 = FUN_0049834c(param_1,param_2,0x12), (uVar8 & 1) != 0)) {
      if ((*(ushort *)((long)param_1 - (long)*param_1) < 0x13) ||
         (uVar8 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[9], uVar8 == 0)) {
        lVar6 = 0;
      }
      else {
        puVar1 = (uint *)((long)param_1 + uVar8);
        lVar6 = (long)puVar1 + (ulong)*puVar1;
      }
      uVar8 = FUN_004983d4(param_2,lVar6);
      if (((uVar8 & 1) != 0) && (uVar8 = FUN_0049834c(param_1,param_2,0x14), (uVar8 & 1) != 0)) {
        if ((*(ushort *)((long)param_1 - (long)*param_1) < 0x15) ||
           (uVar8 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[10], uVar8 == 0)) {
          lVar6 = 0;
        }
        else {
          puVar1 = (uint *)((long)param_1 + uVar8);
          lVar6 = (long)puVar1 + (ulong)*puVar1;
        }
        uVar8 = FUN_0049987c(param_2,lVar6);
        if ((uVar8 & 1) != 0) {
          if ((*(ushort *)((long)param_1 - (long)*param_1) < 0x15) ||
             (uVar8 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[10], uVar8 == 0)) {
            lVar6 = 0;
          }
          else {
            puVar1 = (uint *)((long)param_1 + uVar8);
            lVar6 = (long)puVar1 + (ulong)*puVar1;
          }
          uVar8 = FUN_004998f0(param_2,lVar6);
          if (((uVar8 & 1) != 0) && (uVar8 = FUN_0049834c(param_1,param_2,0x16), (uVar8 & 1) != 0))
          {
            if ((*(ushort *)((long)param_1 - (long)*param_1) < 0x17) ||
               (uVar8 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[0xb], uVar8 == 0)) {
              lVar6 = 0;
            }
            else {
              puVar1 = (uint *)((long)param_1 + uVar8);
              lVar6 = (long)puVar1 + (ulong)*puVar1;
            }
            uVar8 = FUN_0049987c(param_2,lVar6);
            if ((uVar8 & 1) != 0) {
              if ((*(ushort *)((long)param_1 - (long)*param_1) < 0x17) ||
                 (uVar8 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[0xb], uVar8 == 0)) {
                lVar6 = 0;
              }
              else {
                puVar1 = (uint *)((long)param_1 + uVar8);
                lVar6 = (long)puVar1 + (ulong)*puVar1;
              }
              uVar8 = FUN_004998f0(param_2,lVar6);
              if (((uVar8 & 1) != 0) &&
                 (uVar8 = FUN_0049834c(param_1,param_2,0x18), (uVar8 & 1) != 0)) {
                if ((*(ushort *)((long)param_1 - (long)*param_1) < 0x19) ||
                   (uVar8 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[0xc], uVar8 == 0)) {
                  lVar6 = 0;
                }
                else {
                  puVar1 = (uint *)((long)param_1 + uVar8);
                  lVar6 = (long)puVar1 + (ulong)*puVar1;
                }
                uVar8 = FUN_0049b92c(param_2,lVar6);
                if ((uVar8 & 1) != 0) {
                  if ((*(ushort *)((long)param_1 - (long)*param_1) < 0x19) ||
                     (uVar8 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[0xc], uVar8 == 0))
                  {
                    lVar6 = 0;
                  }
                  else {
                    puVar1 = (uint *)((long)param_1 + uVar8);
                    lVar6 = (long)puVar1 + (ulong)*puVar1;
                  }
                  uVar8 = FUN_0049b9a0(param_2,lVar6);
                  if (((uVar8 & 1) != 0) &&
                     (uVar8 = FUN_0049834c(param_1,param_2,0x1a), (uVar8 & 1) != 0)) {
                    if ((*(ushort *)((long)param_1 - (long)*param_1) < 0x1b) ||
                       (uVar8 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[0xd], uVar8 == 0
                       )) {
                      lVar6 = 0;
                    }
                    else {
                      puVar1 = (uint *)((long)param_1 + uVar8);
                      lVar6 = (long)puVar1 + (ulong)*puVar1;
                    }
                    uVar8 = FUN_0049ba44(param_2,lVar6);
                    if (((uVar8 & 1) != 0) &&
                       (uVar8 = FUN_0049834c(param_1,param_2,0x1c), (uVar8 & 1) != 0)) {
                      if ((*(ushort *)((long)param_1 - (long)*param_1) < 0x1d) ||
                         (uVar8 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[0xe],
                         uVar8 == 0)) {
                        lVar6 = 0;
                      }
                      else {
                        puVar1 = (uint *)((long)param_1 + uVar8);
                        lVar6 = (long)puVar1 + (ulong)*puVar1;
                      }
                      uVar8 = FUN_0049987c(param_2,lVar6);
                      if ((uVar8 & 1) != 0) {
                        if ((*(ushort *)((long)param_1 - (long)*param_1) < 0x1d) ||
                           (uVar8 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[0xe],
                           uVar8 == 0)) {
                          lVar6 = 0;
                        }
                        else {
                          puVar1 = (uint *)((long)param_1 + uVar8);
                          lVar6 = (long)puVar1 + (ulong)*puVar1;
                        }
                        uVar8 = FUN_004998f0(param_2,lVar6);
                        if ((uVar8 & 1) != 0) {
                          *(int *)(param_2 + 7) = (int)param_2[7] + -1;
                          return 1;
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


// ===== 0049b92c  FUN_0049b92c =====

bool FUN_0049b92c(long *param_1,uint *param_2)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_2 == (uint *)0x0) {
    return true;
  }
  uVar3 = (long)param_2 - *param_1;
  if (((uVar3 & 3) != 0) && ((char)param_1[3] != '\0')) {
    return false;
  }
  uVar4 = param_1[1];
  bVar2 = false;
  if ((4 < uVar4) && (uVar3 <= uVar4 - 4)) {
    if ((ulong)param_1[4] >> 2 <= (ulong)*param_2) {
      return false;
    }
    uVar1 = (ulong)*param_2 * 4 + 4;
    bVar2 = uVar1 < uVar4 && uVar3 <= uVar4 - uVar1;
  }
  return bVar2;
}


// ===== 0049b9a0  FUN_0049b9a0 =====

uint FUN_0049b9a0(undefined8 param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_2 == (uint *)0x0) {
    return 1;
  }
  if (*param_2 == 0) {
    return 1;
  }
  uVar3 = 0;
  uVar4 = 0;
  do {
    puVar1 = (uint *)((long)param_2 + (uVar3 & 0xfffffffc) + 4);
    uVar2 = FUN_0049bab8((long)puVar1 + (ulong)*puVar1,param_1);
    if ((uVar2 & 1) == 0) break;
    uVar4 = uVar4 + 1;
    uVar3 = uVar3 + 4;
  } while (uVar4 < *param_2);
  return uVar2 & 1;
}


// ===== 0049ba44  FUN_0049ba44 =====

bool FUN_0049ba44(long *param_1,uint *param_2)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_2 == (uint *)0x0) {
    return true;
  }
  uVar3 = (long)param_2 - *param_1;
  if (((uVar3 & 3) != 0) && ((char)param_1[3] != '\0')) {
    return false;
  }
  uVar4 = param_1[1];
  bVar2 = false;
  if ((4 < uVar4) && (uVar3 <= uVar4 - 4)) {
    if ((ulong)param_1[4] >> 2 <= (ulong)*param_2) {
      return false;
    }
    uVar1 = (ulong)*param_2 * 4 + 4;
    bVar2 = uVar1 < uVar4 && uVar3 <= uVar4 - uVar1;
  }
  return bVar2;
}


// ===== 0049bab8  FUN_0049bab8 =====

undefined8 FUN_0049bab8(int *param_1,long *param_2)

{
  uint *puVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ushort *puVar11;
  long lVar12;
  undefined8 uVar13;
  
  lVar8 = *param_2;
  cVar2 = (char)param_2[3];
  uVar6 = (long)param_1 - lVar8;
  if ((((uVar6 & 3) != 0 && cVar2 != '\0') || (uVar9 = param_2[1], uVar9 < 5)) ||
     (uVar7 = uVar9 - 4, uVar7 < uVar6)) {
    return 0;
  }
  iVar4 = *param_1;
  lVar12 = CONCAT44((int)((ulong)param_2[7] >> 0x20) + 1,(int)param_2[7] + 1);
  uVar13 = NEON_cmhs(param_2[2],lVar12,4);
  param_2[7] = lVar12;
  if (((uint)uVar13 & (uint)((ulong)uVar13 >> 0x20) & 1) == 0) {
    return 0;
  }
  uVar10 = uVar6 - (long)iVar4;
  if (cVar2 != '\0' && (uVar10 & 1) != 0) {
    return 0;
  }
  if (uVar9 - 2 < uVar10) {
    return 0;
  }
  uVar3 = *(ushort *)(lVar8 + uVar10);
  if ((uVar3 & 1) != 0) {
    return 0;
  }
  if ((uVar3 & 1) != 0 && cVar2 != '\0') {
    return 0;
  }
  if (uVar9 <= uVar3) {
    return 0;
  }
  if (uVar9 - uVar3 < uVar10) {
    return 0;
  }
  puVar11 = (ushort *)((long)param_1 - (long)*param_1);
  uVar3 = *puVar11;
  if (4 < uVar3) {
    uVar10 = (ulong)puVar11[2];
    if (uVar10 != 0) {
      uVar5 = uVar6 + uVar10;
      if (uVar7 < uVar5) {
        return 0;
      }
      if ((uVar5 & 3) != 0 && cVar2 != '\0') {
        return 0;
      }
      if ((int)*(uint *)(lVar8 + uVar5) < 1) {
        return 0;
      }
      if (uVar9 - 1 < uVar5 + *(uint *)(lVar8 + uVar5)) {
        return 0;
      }
      puVar1 = (uint *)((long)((long)param_1 + uVar10) + (ulong)*(uint *)((long)param_1 + uVar10));
      uVar10 = (long)puVar1 - lVar8;
      if (uVar7 < uVar10) {
        return 0;
      }
      if ((uVar10 & 3) != 0 && cVar2 != '\0') {
        return 0;
      }
      uVar5 = (ulong)*puVar1;
      if ((ulong)param_2[4] <= uVar5) {
        return 0;
      }
      uVar5 = uVar5 + 4;
      if (uVar9 - 1 < uVar5 + uVar10) {
        return 0;
      }
      if (uVar9 <= uVar5) {
        return 0;
      }
      if (uVar9 - uVar5 < uVar10) {
        return 0;
      }
      if (*(char *)(lVar8 + uVar5 + uVar10) != '\0') {
        return 0;
      }
    }
    if (6 < uVar3) {
      uVar10 = (ulong)puVar11[3];
      if (uVar10 != 0) {
        uVar5 = uVar6 + uVar10;
        if (uVar7 < uVar5) {
          return 0;
        }
        if ((uVar5 & 3) != 0 && cVar2 != '\0') {
          return 0;
        }
        if ((int)*(uint *)(lVar8 + uVar5) < 1) {
          return 0;
        }
        if (uVar9 - 1 < uVar5 + *(uint *)(lVar8 + uVar5)) {
          return 0;
        }
        puVar1 = (uint *)((long)((long)param_1 + uVar10) + (ulong)*(uint *)((long)param_1 + uVar10))
        ;
        uVar10 = (long)puVar1 - lVar8;
        if (uVar7 < uVar10) {
          return 0;
        }
        if ((uVar10 & 3) != 0 && cVar2 != '\0') {
          return 0;
        }
        uVar5 = (ulong)*puVar1;
        if ((ulong)param_2[4] <= uVar5) {
          return 0;
        }
        uVar5 = uVar5 + 4;
        if (uVar9 - 1 < uVar5 + uVar10) {
          return 0;
        }
        if (uVar9 <= uVar5) {
          return 0;
        }
        if (uVar9 - uVar5 < uVar10) {
          return 0;
        }
        if (*(char *)(lVar8 + uVar5 + uVar10) != '\0') {
          return 0;
        }
      }
      if ((8 < uVar3) && ((ulong)puVar11[4] != 0)) {
        uVar6 = uVar6 + puVar11[4];
        if (uVar7 < uVar6) {
          return 0;
        }
        if ((uVar6 & 3) != 0 && cVar2 != '\0') {
          return 0;
        }
      }
    }
  }
  uVar6 = FUN_0049c118(param_1,param_2,10,4);
  if ((((uVar6 & 1) != 0) && (uVar6 = FUN_00498a04(param_1,param_2,0xc,8), (uVar6 & 1) != 0)) &&
     (uVar6 = FUN_0049834c(param_1,param_2,0xe), (uVar6 & 1) != 0)) {
    if (*(ushort *)((long)param_1 - (long)*param_1) < 0xf) {
      lVar8 = 0;
    }
    else {
      uVar6 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[7];
      if (uVar6 == 0) {
        lVar8 = 0;
      }
      else {
        puVar1 = (uint *)((long)param_1 + uVar6);
        lVar8 = (long)puVar1 + (ulong)*puVar1;
      }
    }
    uVar6 = FUN_004983d4(param_2,lVar8);
    if ((((uVar6 & 1) != 0) && (uVar6 = FUN_0049834c(param_1,param_2,0x10), (uVar6 & 1) != 0)) &&
       ((((*(ushort *)((long)param_1 - (long)*param_1) < 0x11 ||
          ((uVar6 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[8], uVar6 == 0 ||
           (puVar1 = (uint *)((long)param_1 + uVar6),
           uVar6 = FUN_00499b20((long)puVar1 + (ulong)*puVar1,param_2), (uVar6 & 1) != 0)))) &&
         (uVar6 = FUN_0049834c(param_1,param_2,0x12), (uVar6 & 1) != 0)) &&
        ((((*(ushort *)((long)param_1 - (long)*param_1) < 0x13 ||
           (uVar6 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[9], uVar6 == 0)) ||
          (puVar1 = (uint *)((long)param_1 + uVar6),
          uVar6 = FUN_00498d4c((long)puVar1 + (ulong)*puVar1,param_2), (uVar6 & 1) != 0)) &&
         (uVar6 = FUN_0049834c(param_1,param_2,0x14), (uVar6 & 1) != 0)))))) {
      if ((*(ushort *)((long)param_1 - (long)*param_1) < 0x15) ||
         (uVar6 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[10], uVar6 == 0)) {
        lVar8 = 0;
      }
      else {
        puVar1 = (uint *)((long)param_1 + uVar6);
        lVar8 = (long)puVar1 + (ulong)*puVar1;
      }
      uVar6 = FUN_0049c17c(param_2,lVar8);
      if (((uVar6 & 1) != 0) && (uVar6 = FUN_0049834c(param_1,param_2,0x16), (uVar6 & 1) != 0)) {
        if ((*(ushort *)((long)param_1 - (long)*param_1) < 0x17) ||
           (uVar6 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[0xb], uVar6 == 0)) {
          lVar8 = 0;
        }
        else {
          puVar1 = (uint *)((long)param_1 + uVar6);
          lVar8 = (long)puVar1 + (ulong)*puVar1;
        }
        uVar6 = FUN_00499f98(param_2,lVar8);
        if (((uVar6 & 1) != 0) && (uVar6 = FUN_0049834c(param_1,param_2,0x18), (uVar6 & 1) != 0)) {
          if ((*(ushort *)((long)param_1 - (long)*param_1) < 0x19) ||
             (uVar6 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[0xc], uVar6 == 0)) {
            lVar8 = 0;
          }
          else {
            puVar1 = (uint *)((long)param_1 + uVar6);
            lVar8 = (long)puVar1 + (ulong)*puVar1;
          }
          uVar6 = FUN_0049987c(param_2,lVar8);
          if ((uVar6 & 1) != 0) {
            if ((*(ushort *)((long)param_1 - (long)*param_1) < 0x19) ||
               (uVar6 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[0xc], uVar6 == 0)) {
              lVar8 = 0;
            }
            else {
              puVar1 = (uint *)((long)param_1 + uVar6);
              lVar8 = (long)puVar1 + (ulong)*puVar1;
            }
            uVar6 = FUN_004998f0(param_2,lVar8);
            if (((uVar6 & 1) != 0) && (uVar6 = FUN_0049834c(param_1,param_2,0x1a), (uVar6 & 1) != 0)
               ) {
              if ((*(ushort *)((long)param_1 - (long)*param_1) < 0x1b) ||
                 (uVar6 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[0xd], uVar6 == 0)) {
                lVar8 = 0;
              }
              else {
                puVar1 = (uint *)((long)param_1 + uVar6);
                lVar8 = (long)puVar1 + (ulong)*puVar1;
              }
              uVar6 = FUN_0049942c(param_2,lVar8);
              if ((uVar6 & 1) != 0) {
                if ((*(ushort *)((long)param_1 - (long)*param_1) < 0x1b) ||
                   (uVar6 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[0xd], uVar6 == 0)) {
                  lVar8 = 0;
                }
                else {
                  puVar1 = (uint *)((long)param_1 + uVar6);
                  lVar8 = (long)puVar1 + (ulong)*puVar1;
                }
                uVar6 = FUN_004994a0(param_2,lVar8);
                if (((uVar6 & 1) != 0) &&
                   (uVar6 = FUN_0049834c(param_1,param_2,0x1c), (uVar6 & 1) != 0)) {
                  if ((*(ushort *)((long)param_1 - (long)*param_1) < 0x1d) ||
                     (uVar6 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[0xe], uVar6 == 0))
                  {
                    lVar8 = 0;
                  }
                  else {
                    puVar1 = (uint *)((long)param_1 + uVar6);
                    lVar8 = (long)puVar1 + (ulong)*puVar1;
                  }
                  uVar6 = FUN_0049c1f0(param_2,lVar8);
                  if ((uVar6 & 1) != 0) {
                    if ((*(ushort *)((long)param_1 - (long)*param_1) < 0x1d) ||
                       (uVar6 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[0xe], uVar6 == 0
                       )) {
                      lVar8 = 0;
                    }
                    else {
                      puVar1 = (uint *)((long)param_1 + uVar6);
                      lVar8 = (long)puVar1 + (ulong)*puVar1;
                    }
                    uVar6 = FUN_0049c264(param_2,lVar8);
                    if ((uVar6 & 1) == 0) {
                      return 0;
                    }
                    *(int *)(param_2 + 7) = (int)param_2[7] + -1;
                    return 1;
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


// ===== 0049c118  FUN_0049c118 =====

bool FUN_0049c118(int *param_1,long *param_2,ushort param_3,long param_4)

{
  ulong uVar1;
  
  if ((*(ushort *)((long)param_1 - (long)*param_1) <= param_3) ||
     (uVar1 = (ulong)*(ushort *)(((long)param_1 - (long)*param_1) + (ulong)param_3), uVar1 == 0)) {
    return true;
  }
  uVar1 = (long)param_1 + (uVar1 - *param_2);
  if (((uVar1 & param_4 - 1U) != 0) && ((char)param_2[3] != '\0')) {
    return false;
  }
  return 4 < (ulong)param_2[1] && uVar1 <= param_2[1] - 4U;
}


// ===== 0049c17c  FUN_0049c17c =====

bool FUN_0049c17c(long *param_1,uint *param_2)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_2 == (uint *)0x0) {
    return true;
  }
  uVar3 = (long)param_2 - *param_1;
  if (((uVar3 & 3) != 0) && ((char)param_1[3] != '\0')) {
    return false;
  }
  uVar4 = param_1[1];
  bVar2 = false;
  if ((4 < uVar4) && (uVar3 <= uVar4 - 4)) {
    if ((ulong)param_1[4] >> 2 <= (ulong)*param_2) {
      return false;
    }
    uVar1 = (ulong)*param_2 * 4 + 4;
    bVar2 = uVar1 < uVar4 && uVar3 <= uVar4 - uVar1;
  }
  return bVar2;
}


// ===== 0049c1f0  FUN_0049c1f0 =====

bool FUN_0049c1f0(long *param_1,uint *param_2)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_2 == (uint *)0x0) {
    return true;
  }
  uVar3 = (long)param_2 - *param_1;
  if (((uVar3 & 3) != 0) && ((char)param_1[3] != '\0')) {
    return false;
  }
  uVar4 = param_1[1];
  bVar2 = false;
  if ((4 < uVar4) && (uVar3 <= uVar4 - 4)) {
    if ((ulong)param_1[4] >> 2 <= (ulong)*param_2) {
      return false;
    }
    uVar1 = (ulong)*param_2 * 4 + 4;
    bVar2 = uVar1 < uVar4 && uVar3 <= uVar4 - uVar1;
  }
  return bVar2;
}


// ===== 0049c264  FUN_0049c264 =====

uint FUN_0049c264(undefined8 param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_2 == (uint *)0x0) {
    return 1;
  }
  if (*param_2 == 0) {
    return 1;
  }
  uVar3 = 0;
  uVar4 = 0;
  do {
    puVar1 = (uint *)((long)param_2 + (uVar3 & 0xfffffffc) + 4);
    uVar2 = FUN_00498d4c((long)puVar1 + (ulong)*puVar1,param_1);
    if ((uVar2 & 1) == 0) break;
    uVar4 = uVar4 + 1;
    uVar3 = uVar3 + 4;
  } while (uVar4 < *param_2);
  return uVar2 & 1;
}


// ===== 0049c308  FUN_0049c308 =====

undefined8 FUN_0049c308(int *param_1,long *param_2)

{
  uint *puVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ushort *puVar11;
  int iVar12;
  long lVar13;
  undefined8 uVar14;
  
  lVar7 = *param_2;
  cVar2 = (char)param_2[3];
  uVar9 = (long)param_1 - lVar7;
  if ((((uVar9 & 3) == 0 || cVar2 == '\0') && (uVar6 = param_2[1], 4 < uVar6)) &&
     (uVar8 = uVar6 - 4, uVar9 <= uVar8)) {
    iVar4 = *param_1;
    iVar12 = (int)param_2[7];
    lVar13 = CONCAT44((int)((ulong)param_2[7] >> 0x20) + 1,iVar12 + 1);
    uVar14 = NEON_cmhs(param_2[2],lVar13,4);
    param_2[7] = lVar13;
    if (((((uint)uVar14 & (uint)((ulong)uVar14 >> 0x20) & 1) != 0) &&
        (uVar10 = uVar9 - (long)iVar4, cVar2 == '\0' || (uVar10 & 1) == 0)) && (uVar10 <= uVar6 - 2)
       ) {
      uVar3 = *(ushort *)(lVar7 + uVar10);
      if ((((uVar3 & 1) == 0) && ((uVar3 & 1) == 0 || cVar2 == '\0')) &&
         ((uVar3 < uVar6 && (uVar10 <= uVar6 - uVar3)))) {
        puVar11 = (ushort *)((long)param_1 - (long)*param_1);
        uVar3 = *puVar11;
        if (4 < uVar3) {
          if ((ulong)puVar11[2] != 0) {
            uVar10 = uVar9 + puVar11[2];
            if (uVar8 < uVar10) {
              return 0;
            }
            if ((uVar10 & 3) != 0 && cVar2 != '\0') {
              return 0;
            }
          }
          if (6 < uVar3) {
            uVar10 = (ulong)puVar11[3];
            if (uVar10 != 0) {
              uVar5 = uVar9 + uVar10;
              if (uVar8 < uVar5) {
                return 0;
              }
              if ((uVar5 & 3) != 0 && cVar2 != '\0') {
                return 0;
              }
              if ((int)*(uint *)(lVar7 + uVar5) < 1) {
                return 0;
              }
              if (uVar6 - 1 < uVar5 + *(uint *)(lVar7 + uVar5)) {
                return 0;
              }
              puVar1 = (uint *)((long)((long)param_1 + uVar10) +
                               (ulong)*(uint *)((long)param_1 + uVar10));
              uVar10 = (long)puVar1 - lVar7;
              if (uVar8 < uVar10) {
                return 0;
              }
              if ((uVar10 & 3) != 0 && cVar2 != '\0') {
                return 0;
              }
              uVar5 = (ulong)*puVar1;
              if ((ulong)param_2[4] / 0xc <= uVar5) {
                return 0;
              }
              uVar5 = uVar5 * 0xc + 4;
              if (uVar6 <= uVar5) {
                return 0;
              }
              if (uVar6 - uVar5 < uVar10) {
                return 0;
              }
            }
            if ((8 < uVar3) && (uVar10 = (ulong)puVar11[4], uVar10 != 0)) {
              uVar9 = uVar9 + uVar10;
              if (uVar8 < uVar9) {
                return 0;
              }
              if ((uVar9 & 3) != 0 && cVar2 != '\0') {
                return 0;
              }
              if ((int)*(uint *)(lVar7 + uVar9) < 1) {
                return 0;
              }
              if (uVar6 - 1 < uVar9 + *(uint *)(lVar7 + uVar9)) {
                return 0;
              }
              puVar1 = (uint *)((long)((long)param_1 + uVar10) +
                               (ulong)*(uint *)((long)param_1 + uVar10));
              uVar9 = (long)puVar1 - lVar7;
              if (uVar8 < uVar9) {
                return 0;
              }
              if ((uVar9 & 3) != 0 && cVar2 != '\0') {
                return 0;
              }
              uVar8 = (ulong)*puVar1;
              if ((ulong)param_2[4] / 0xc <= uVar8) {
                return 0;
              }
              uVar8 = uVar8 * 0xc + 4;
              if (uVar6 <= uVar8) {
                return 0;
              }
              if (uVar6 - uVar8 < uVar9) {
                return 0;
              }
            }
          }
        }
        *(int *)(param_2 + 7) = iVar12;
        return 1;
      }
    }
  }
  return 0;
}


// ===== 0049c57c  FUN_0049c57c =====

undefined8 FUN_0049c57c(int *param_1,long *param_2)

{
  uint uVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ushort *puVar10;
  undefined8 uVar11;
  
  lVar6 = *param_2;
  cVar2 = (char)param_2[3];
  uVar8 = (long)param_1 - lVar6;
  if ((((uVar8 & 3) != 0 && cVar2 != '\0') || (uVar7 = param_2[1], uVar7 < 5)) ||
     (uVar7 - 4 < uVar8)) {
    return 0;
  }
  iVar4 = *param_1;
  lVar5 = CONCAT44((int)((ulong)param_2[7] >> 0x20) + 1,(int)param_2[7] + 1);
  uVar11 = NEON_cmhs(param_2[2],lVar5,4);
  param_2[7] = lVar5;
  if (((uint)uVar11 & (uint)((ulong)uVar11 >> 0x20) & 1) == 0) {
    return 0;
  }
  uVar9 = uVar8 - (long)iVar4;
  if (cVar2 != '\0' && (uVar9 & 1) != 0) {
    return 0;
  }
  if (uVar7 - 2 < uVar9) {
    return 0;
  }
  uVar3 = *(ushort *)(lVar6 + uVar9);
  if ((((uVar3 & 1) == 0) && ((uVar3 & 1) == 0 || cVar2 == '\0')) &&
     ((uVar3 < uVar7 && (uVar9 <= uVar7 - uVar3)))) {
    puVar10 = (ushort *)((long)param_1 - (long)*param_1);
    lVar5 = -(long)*param_1;
    if ((4 < *puVar10) && (uVar9 = (ulong)puVar10[2], uVar9 != 0)) {
      uVar8 = uVar8 + uVar9;
      if (uVar7 - 4 < uVar8) {
        return 0;
      }
      if ((uVar8 & 3) != 0 && cVar2 != '\0') {
        return 0;
      }
      if ((int)*(uint *)(lVar6 + uVar8) < 1) {
        return 0;
      }
      if (uVar7 - 1 < uVar8 + *(uint *)(lVar6 + uVar8)) {
        return 0;
      }
      uVar8 = FUN_00499b20((long)((long)param_1 + uVar9) + (ulong)*(uint *)((long)param_1 + uVar9));
      if ((uVar8 & 1) == 0) {
        return 0;
      }
      lVar5 = -(long)*param_1;
    }
    if ((6 < *(ushort *)((long)param_1 + lVar5)) &&
       (uVar8 = (ulong)((ushort *)((long)param_1 + lVar5))[3], uVar8 != 0)) {
      uVar7 = (long)param_1 + (uVar8 - *param_2);
      if (((uVar7 & 3) != 0) && ((char)param_2[3] != '\0')) {
        return 0;
      }
      uVar9 = param_2[1];
      if (uVar9 < 5) {
        return 0;
      }
      if (uVar9 - 4 < uVar7) {
        return 0;
      }
      uVar1 = *(uint *)(*param_2 + uVar7);
      if ((int)uVar1 < 1) {
        return 0;
      }
      if (uVar9 - 1 < uVar7 + uVar1) {
        return 0;
      }
      uVar8 = FUN_00499b20((long)((long)param_1 + uVar8) + (ulong)*(uint *)((long)param_1 + uVar8));
      if ((uVar8 & 1) == 0) {
        return 0;
      }
      lVar5 = -(long)*param_1;
    }
    if ((*(ushort *)((long)param_1 + lVar5) < 9) ||
       (uVar8 = (ulong)((ushort *)((long)param_1 + lVar5))[4], uVar8 == 0)) {
      uVar8 = FUN_00499f98(param_2,0);
    }
    else {
      uVar7 = (long)param_1 + (uVar8 - *param_2);
      if (((uVar7 & 3) != 0) && ((char)param_2[3] != '\0')) {
        return 0;
      }
      uVar9 = param_2[1];
      if (uVar9 < 5) {
        return 0;
      }
      if (uVar9 - 4 < uVar7) {
        return 0;
      }
      uVar1 = *(uint *)(*param_2 + uVar7);
      if ((int)uVar1 < 1) {
        return 0;
      }
      if (uVar9 - 1 < uVar7 + uVar1) {
        return 0;
      }
      uVar8 = FUN_00499f98(param_2,(long)((long)param_1 + uVar8) +
                                   (ulong)*(uint *)((long)param_1 + uVar8));
    }
    if ((uVar8 & 1) != 0) {
      *(int *)(param_2 + 7) = (int)param_2[7] + -1;
      return 1;
    }
  }
  return 0;
}


// ===== 0049c858  FUN_0049c858 =====

undefined4 FUN_0049c858(int *param_1,long *param_2)

{
  uint *puVar1;
  uint *puVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  undefined8 uVar14;
  
  lVar8 = *param_2;
  cVar3 = (char)param_2[3];
  uVar10 = (long)param_1 - lVar8;
  if ((((uVar10 & 3) == 0 || cVar3 == '\0') && (uVar7 = param_2[1], 4 < uVar7)) &&
     (uVar9 = uVar7 - 4, uVar10 <= uVar9)) {
    iVar5 = *param_1;
    iVar12 = (int)param_2[7];
    lVar13 = CONCAT44((int)((ulong)param_2[7] >> 0x20) + 1,iVar12 + 1);
    uVar14 = NEON_cmhs(param_2[2],lVar13,4);
    param_2[7] = lVar13;
    if (((((uint)uVar14 & (uint)((ulong)uVar14 >> 0x20) & 1) != 0) &&
        (uVar11 = uVar10 - (long)iVar5, cVar3 == '\0' || (uVar11 & 1) == 0)) &&
       (uVar11 <= uVar7 - 2)) {
      uVar4 = *(ushort *)(lVar8 + uVar11);
      uVar6 = 0;
      if (((uVar4 & 1) == 0) && ((uVar4 & 1) == 0 || cVar3 == '\0')) {
        uVar6 = 0;
        if ((uVar4 < uVar7) && (uVar11 <= uVar7 - uVar4)) {
          if ((4 < *(ushort *)((long)param_1 - (long)*param_1)) &&
             (uVar11 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[2], uVar11 != 0)) {
            uVar10 = uVar10 + uVar11;
            if (uVar9 < uVar10) {
              return 0;
            }
            if ((uVar10 & 3) != 0 && cVar3 != '\0') {
              return 0;
            }
            if (((int)*(uint *)(lVar8 + uVar10) < 1) ||
               (uVar7 - 1 < uVar10 + *(uint *)(lVar8 + uVar10))) {
              return 0;
            }
            puVar1 = (uint *)((long)((long)param_1 + uVar11) +
                             (ulong)*(uint *)((long)param_1 + uVar11));
            uVar10 = (long)puVar1 - lVar8;
            if (uVar9 < uVar10) {
              return 0;
            }
            if ((uVar10 & 3) != 0 && cVar3 != '\0') {
              return 0;
            }
            uVar9 = (ulong)*puVar1;
            if ((ulong)param_2[4] >> 2 <= uVar9) {
              return 0;
            }
            uVar9 = uVar9 * 4 + 4;
            if (uVar7 <= uVar9) {
              return 0;
            }
            if (uVar7 - uVar9 < uVar10) {
              return 0;
            }
            puVar1 = (uint *)((long)((long)param_1 + uVar11) +
                             (ulong)*(uint *)((long)param_1 + uVar11));
            if (*puVar1 != 0) {
              uVar7 = 0;
              uVar10 = 0;
              do {
                puVar2 = (uint *)((long)puVar1 + (uVar7 & 0xfffffffc) + 4);
                uVar9 = FUN_0049ca7c((long)puVar2 + (ulong)*puVar2);
                if ((uVar9 & 1) == 0) {
                  return 0;
                }
                uVar10 = uVar10 + 1;
                uVar7 = uVar7 + 4;
              } while (uVar10 < *puVar1);
              iVar12 = (int)param_2[7] + -1;
            }
          }
          uVar6 = 1;
          *(int *)(param_2 + 7) = iVar12;
        }
      }
      return uVar6;
    }
  }
  return 0;
}


// ===== 0049ca7c  FUN_0049ca7c =====

undefined8 FUN_0049ca7c(int *param_1,long *param_2)

{
  uint *puVar1;
  uint *puVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ushort *puVar12;
  ulong uVar13;
  int iVar14;
  long lVar15;
  undefined8 uVar16;
  
  lVar8 = *param_2;
  cVar3 = (char)param_2[3];
  uVar10 = (long)param_1 - lVar8;
  if ((((uVar10 & 3) == 0 || cVar3 == '\0') && (uVar7 = param_2[1], 4 < uVar7)) &&
     (uVar9 = uVar7 - 4, uVar10 <= uVar9)) {
    iVar5 = *param_1;
    iVar14 = (int)param_2[7];
    lVar15 = CONCAT44((int)((ulong)param_2[7] >> 0x20) + 1,iVar14 + 1);
    uVar16 = NEON_cmhs(param_2[2],lVar15,4);
    param_2[7] = lVar15;
    if (((((uint)uVar16 & (uint)((ulong)uVar16 >> 0x20) & 1) != 0) &&
        (uVar11 = uVar10 - (long)iVar5, cVar3 == '\0' || (uVar11 & 1) == 0)) &&
       (uVar11 <= uVar7 - 2)) {
      uVar4 = *(ushort *)(lVar8 + uVar11);
      if ((((uVar4 & 1) == 0) && ((uVar4 & 1) == 0 || cVar3 == '\0')) &&
         ((uVar4 < uVar7 && (uVar11 <= uVar7 - uVar4)))) {
        puVar12 = (ushort *)((long)param_1 - (long)*param_1);
        if ((*puVar12 < 5) || (uVar11 = (ulong)puVar12[2], uVar11 == 0)) {
          return 0;
        }
        uVar6 = uVar10 + uVar11;
        if (((uVar6 <= uVar9) && ((uVar6 & 3) == 0 || cVar3 == '\0')) &&
           (0 < (int)*(uint *)(lVar8 + uVar6))) {
          uVar13 = uVar7 - 1;
          if (uVar13 < uVar6 + *(uint *)(lVar8 + uVar6)) {
            return 0;
          }
          puVar1 = (uint *)((long)((long)param_1 + uVar11) +
                           (ulong)*(uint *)((long)param_1 + uVar11));
          uVar11 = (long)puVar1 - lVar8;
          if ((uVar11 <= uVar9) && ((uVar11 & 3) == 0 || cVar3 == '\0')) {
            uVar6 = (ulong)*puVar1;
            if ((ulong)param_2[4] <= uVar6) {
              return 0;
            }
            uVar6 = uVar6 + 4;
            if (((uVar6 + uVar11 <= uVar13) && (uVar6 < uVar7)) && (uVar11 <= uVar7 - uVar6)) {
              if (*(char *)(lVar8 + uVar6 + uVar11) != '\0') {
                return 0;
              }
              if ((*puVar12 < 7) || (uVar11 = (ulong)puVar12[3], uVar11 == 0)) {
LAB_0049cd5c:
                *(int *)(param_2 + 7) = iVar14;
                return 1;
              }
              uVar10 = uVar10 + uVar11;
              if ((uVar10 <= uVar9) &&
                 ((((uVar10 & 3) == 0 || cVar3 == '\0' && (0 < (int)*(uint *)(lVar8 + uVar10))) &&
                  (uVar10 + *(uint *)(lVar8 + uVar10) <= uVar13)))) {
                puVar1 = (uint *)((long)((long)param_1 + uVar11) +
                                 (ulong)*(uint *)((long)param_1 + uVar11));
                uVar10 = (long)puVar1 - lVar8;
                if ((uVar10 <= uVar9) && ((uVar10 & 3) == 0 || cVar3 == '\0')) {
                  uVar9 = (ulong)*puVar1;
                  if ((ulong)param_2[4] >> 2 <= uVar9) {
                    return 0;
                  }
                  uVar9 = uVar9 * 4 + 4;
                  if ((uVar9 < uVar7) && (uVar10 <= uVar7 - uVar9)) {
                    puVar1 = (uint *)((long)((long)param_1 + uVar11) +
                                     (ulong)*(uint *)((long)param_1 + uVar11));
                    if (*puVar1 != 0) {
                      uVar7 = 0;
                      uVar10 = 0;
                      do {
                        puVar2 = (uint *)((long)puVar1 + (uVar7 & 0xfffffffc) + 4);
                        uVar9 = FUN_0049cd80((long)puVar2 + (ulong)*puVar2,param_2);
                        if ((uVar9 & 1) == 0) {
                          return 0;
                        }
                        uVar10 = uVar10 + 1;
                        uVar7 = uVar7 + 4;
                      } while (uVar10 < *puVar1);
                      iVar14 = (int)param_2[7] + -1;
                    }
                    goto LAB_0049cd5c;
                  }
                }
              }
            }
          }
        }
      }
      return 0;
    }
  }
  return 0;
}


// ===== 0049cd80  FUN_0049cd80 =====

undefined8 FUN_0049cd80(int *param_1,long *param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ushort *puVar13;
  undefined8 uVar14;
  
  lVar7 = *param_2;
  cVar3 = (char)param_2[3];
  uVar9 = (long)param_1 - lVar7;
  if ((((uVar9 & 3) != 0 && cVar3 != '\0') || (uVar8 = param_2[1], uVar8 < 5)) ||
     (uVar10 = uVar8 - 4, uVar10 < uVar9)) {
    return 0;
  }
  iVar5 = *param_1;
  lVar12 = CONCAT44((int)((ulong)param_2[7] >> 0x20) + 1,(int)param_2[7] + 1);
  uVar14 = NEON_cmhs(param_2[2],lVar12,4);
  param_2[7] = lVar12;
  if (((uint)uVar14 & (uint)((ulong)uVar14 >> 0x20) & 1) == 0) {
    return 0;
  }
  uVar11 = uVar9 - (long)iVar5;
  if (cVar3 != '\0' && (uVar11 & 1) != 0) {
    return 0;
  }
  if (uVar8 - 2 < uVar11) {
    return 0;
  }
  uVar4 = *(ushort *)(lVar7 + uVar11);
  if ((uVar4 & 1) != 0) {
    return 0;
  }
  if ((uVar4 & 1) != 0 && cVar3 != '\0') {
    return 0;
  }
  if (uVar8 <= uVar4) {
    return 0;
  }
  if (uVar8 - uVar4 < uVar11) {
    return 0;
  }
  puVar13 = (ushort *)((long)param_1 - (long)*param_1);
  lVar12 = -(long)*param_1;
  if (4 < *puVar13) {
    uVar11 = (ulong)puVar13[2];
    if (uVar11 != 0) {
      uVar6 = uVar9 + uVar11;
      if (uVar10 < uVar6) {
        return 0;
      }
      if ((uVar6 & 3) != 0 && cVar3 != '\0') {
        return 0;
      }
      if ((int)*(uint *)(lVar7 + uVar6) < 1) {
        return 0;
      }
      if (uVar8 - 1 < uVar6 + *(uint *)(lVar7 + uVar6)) {
        return 0;
      }
      puVar1 = (uint *)((long)((long)param_1 + uVar11) + (ulong)*(uint *)((long)param_1 + uVar11));
      uVar11 = (long)puVar1 - lVar7;
      if (uVar10 < uVar11) {
        return 0;
      }
      if ((uVar11 & 3) != 0 && cVar3 != '\0') {
        return 0;
      }
      uVar6 = (ulong)*puVar1;
      if ((ulong)param_2[4] <= uVar6) {
        return 0;
      }
      uVar6 = uVar6 + 4;
      if (uVar8 - 1 < uVar6 + uVar11) {
        return 0;
      }
      if (uVar8 <= uVar6) {
        return 0;
      }
      if (uVar8 - uVar6 < uVar11) {
        return 0;
      }
      if (*(char *)(lVar7 + uVar6 + uVar11) != '\0') {
        return 0;
      }
    }
    if ((6 < *puVar13) && (uVar11 = (ulong)puVar13[3], uVar11 != 0)) {
      uVar9 = uVar9 + uVar11;
      if (uVar10 < uVar9) {
        return 0;
      }
      if ((uVar9 & 3) != 0 && cVar3 != '\0') {
        return 0;
      }
      if ((int)*(uint *)(lVar7 + uVar9) < 1) {
        return 0;
      }
      if (uVar8 - 1 < uVar9 + *(uint *)(lVar7 + uVar9)) {
        return 0;
      }
      uVar9 = FUN_0049d0cc((long)((long)param_1 + uVar11) + (ulong)*(uint *)((long)param_1 + uVar11)
                          );
      if ((uVar9 & 1) == 0) {
        return 0;
      }
      lVar12 = -(long)*param_1;
    }
  }
  if ((*(ushort *)((long)param_1 + lVar12) < 0xb) ||
     (uVar9 = (ulong)((ushort *)((long)param_1 + lVar12))[5], uVar9 == 0)) {
    uVar9 = FUN_0049987c(param_2,0);
  }
  else {
    uVar8 = (long)param_1 + (uVar9 - *param_2);
    if (((uVar8 & 3) != 0) && ((char)param_2[3] != '\0')) {
      return 0;
    }
    uVar10 = param_2[1];
    if (uVar10 < 5) {
      return 0;
    }
    if (uVar10 - 4 < uVar8) {
      return 0;
    }
    uVar2 = *(uint *)(*param_2 + uVar8);
    if ((int)uVar2 < 1) {
      return 0;
    }
    if (uVar10 - 1 < uVar8 + uVar2) {
      return 0;
    }
    uVar9 = FUN_0049987c(param_2,(long)((long)param_1 + uVar9) +
                                 (ulong)*(uint *)((long)param_1 + uVar9));
  }
  if ((uVar9 & 1) == 0) {
    return 0;
  }
  if (*(ushort *)((long)param_1 - (long)*param_1) < 0xb) {
    lVar7 = 0;
  }
  else {
    uVar9 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[5];
    if (uVar9 == 0) {
      lVar7 = 0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar9);
      lVar7 = (long)puVar1 + (ulong)*puVar1;
    }
  }
  uVar9 = FUN_004998f0(param_2,lVar7);
  if ((uVar9 & 1) == 0) {
    return 0;
  }
  *(int *)(param_2 + 7) = (int)param_2[7] + -1;
  return 1;
}


// ===== 0049d0cc  FUN_0049d0cc =====

undefined8 FUN_0049d0cc(int *param_1,long *param_2)

{
  uint *puVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ushort *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  
  lVar11 = *param_2;
  cVar2 = (char)param_2[3];
  uVar6 = (long)param_1 - lVar11;
  if ((((uVar6 & 3) != 0 && cVar2 != '\0') || (uVar7 = param_2[1], uVar7 < 5)) ||
     (uVar8 = uVar7 - 4, uVar8 < uVar6)) {
    return 0;
  }
  iVar4 = *param_1;
  lVar12 = CONCAT44((int)((ulong)param_2[7] >> 0x20) + 1,(int)param_2[7] + 1);
  uVar13 = NEON_cmhs(param_2[2],lVar12,4);
  param_2[7] = lVar12;
  if (((uint)uVar13 & (uint)((ulong)uVar13 >> 0x20) & 1) == 0) {
    return 0;
  }
  uVar9 = uVar6 - (long)iVar4;
  if (cVar2 != '\0' && (uVar9 & 1) != 0) {
    return 0;
  }
  if (uVar7 - 2 < uVar9) {
    return 0;
  }
  uVar3 = *(ushort *)(lVar11 + uVar9);
  if ((uVar3 & 1) != 0) {
    return 0;
  }
  if ((uVar3 & 1) != 0 && cVar2 != '\0') {
    return 0;
  }
  if (uVar7 <= uVar3) {
    return 0;
  }
  if (uVar7 - uVar3 < uVar9) {
    return 0;
  }
  puVar10 = (ushort *)((long)param_1 - (long)*param_1);
  uVar3 = *puVar10;
  if (4 < uVar3) {
    uVar9 = (ulong)puVar10[2];
    if (uVar9 != 0) {
      uVar5 = uVar6 + uVar9;
      if (uVar8 < uVar5) {
        return 0;
      }
      if ((uVar5 & 3) != 0 && cVar2 != '\0') {
        return 0;
      }
      if ((int)*(uint *)(lVar11 + uVar5) < 1) {
        return 0;
      }
      if (uVar7 - 1 < uVar5 + *(uint *)(lVar11 + uVar5)) {
        return 0;
      }
      puVar1 = (uint *)((long)((long)param_1 + uVar9) + (ulong)*(uint *)((long)param_1 + uVar9));
      uVar9 = (long)puVar1 - lVar11;
      if (uVar8 < uVar9) {
        return 0;
      }
      if ((uVar9 & 3) != 0 && cVar2 != '\0') {
        return 0;
      }
      uVar5 = (ulong)*puVar1;
      if ((ulong)param_2[4] >> 2 <= uVar5) {
        return 0;
      }
      uVar5 = uVar5 * 4 + 4;
      if (uVar7 <= uVar5) {
        return 0;
      }
      if (uVar7 - uVar5 < uVar9) {
        return 0;
      }
    }
    if (6 < uVar3) {
      if ((ulong)puVar10[3] != 0) {
        uVar9 = uVar6 + puVar10[3];
        if (uVar8 < uVar9) {
          return 0;
        }
        if ((uVar9 & 3) != 0 && cVar2 != '\0') {
          return 0;
        }
      }
      if (8 < uVar3) {
        if ((ulong)puVar10[4] != 0) {
          uVar9 = uVar6 + puVar10[4];
          if (uVar8 < uVar9) {
            return 0;
          }
          if ((uVar9 & 3) != 0 && cVar2 != '\0') {
            return 0;
          }
        }
        if (10 < uVar3) {
          if (((ulong)puVar10[5] != 0) && (uVar7 - 1 < uVar6 + puVar10[5])) {
            return 0;
          }
          if (((0xc < uVar3) && ((ulong)puVar10[6] != 0)) && (uVar7 - 1 < uVar6 + puVar10[6])) {
            return 0;
          }
        }
      }
    }
  }
  uVar6 = FUN_00499700(param_1,param_2,0xe,4);
  if ((uVar6 & 1) == 0) {
    return 0;
  }
  uVar6 = FUN_00499700(param_1,param_2,0x10,4);
  if ((uVar6 & 1) == 0) {
    return 0;
  }
  *(int *)(param_2 + 7) = (int)param_2[7] + -1;
  return 1;
}


// ===== 0049d364  FUN_0049d364 =====

undefined8 FUN_0049d364(int *param_1,long *param_2)

{
  uint *puVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ushort *puVar11;
  int iVar12;
  long lVar13;
  undefined8 uVar14;
  
  lVar6 = *param_2;
  cVar2 = (char)param_2[3];
  uVar9 = (long)param_1 - lVar6;
  if ((((uVar9 & 3) == 0 || cVar2 == '\0') && (uVar7 = param_2[1], 4 < uVar7)) &&
     (uVar8 = uVar7 - 4, uVar9 <= uVar8)) {
    iVar4 = *param_1;
    iVar12 = (int)param_2[7];
    lVar13 = CONCAT44((int)((ulong)param_2[7] >> 0x20) + 1,iVar12 + 1);
    uVar14 = NEON_cmhs(param_2[2],lVar13,4);
    param_2[7] = lVar13;
    if (((((uint)uVar14 & (uint)((ulong)uVar14 >> 0x20) & 1) != 0) &&
        (uVar10 = uVar9 - (long)iVar4, cVar2 == '\0' || (uVar10 & 1) == 0)) && (uVar10 <= uVar7 - 2)
       ) {
      uVar3 = *(ushort *)(lVar6 + uVar10);
      if ((((uVar3 & 1) == 0) && ((uVar3 & 1) == 0 || cVar2 == '\0')) &&
         ((uVar3 < uVar7 && (uVar10 <= uVar7 - uVar3)))) {
        puVar11 = (ushort *)((long)param_1 - (long)*param_1);
        if (4 < *puVar11) {
          uVar10 = (ulong)puVar11[2];
          if (uVar10 != 0) {
            uVar5 = uVar9 + uVar10;
            if (uVar8 < uVar5) {
              return 0;
            }
            if ((uVar5 & 3) != 0 && cVar2 != '\0') {
              return 0;
            }
            if ((int)*(uint *)(lVar6 + uVar5) < 1) {
              return 0;
            }
            if (uVar7 - 1 < uVar5 + *(uint *)(lVar6 + uVar5)) {
              return 0;
            }
            puVar1 = (uint *)((long)((long)param_1 + uVar10) +
                             (ulong)*(uint *)((long)param_1 + uVar10));
            uVar10 = (long)puVar1 - lVar6;
            if (uVar8 < uVar10) {
              return 0;
            }
            if ((uVar10 & 3) != 0 && cVar2 != '\0') {
              return 0;
            }
            uVar5 = (ulong)*puVar1;
            if ((ulong)param_2[4] <= uVar5) {
              return 0;
            }
            uVar5 = uVar5 + 4;
            if (uVar7 - 1 < uVar5 + uVar10) {
              return 0;
            }
            if (uVar7 <= uVar5) {
              return 0;
            }
            if (uVar7 - uVar5 < uVar10) {
              return 0;
            }
            if (*(char *)(lVar6 + uVar5 + uVar10) != '\0') {
              return 0;
            }
          }
          if ((6 < *puVar11) && (uVar10 = (ulong)puVar11[3], uVar10 != 0)) {
            uVar9 = uVar9 + uVar10;
            if (uVar8 < uVar9) {
              return 0;
            }
            if ((uVar9 & 3) != 0 && cVar2 != '\0') {
              return 0;
            }
            if ((int)*(uint *)(lVar6 + uVar9) < 1) {
              return 0;
            }
            if (uVar7 - 1 < uVar9 + *(uint *)(lVar6 + uVar9)) {
              return 0;
            }
            puVar1 = (uint *)((long)((long)param_1 + uVar10) +
                             (ulong)*(uint *)((long)param_1 + uVar10));
            uVar9 = (long)puVar1 - lVar6;
            if (uVar8 < uVar9) {
              return 0;
            }
            if ((uVar9 & 3) != 0 && cVar2 != '\0') {
              return 0;
            }
            uVar8 = (ulong)*puVar1;
            if ((ulong)param_2[4] <= uVar8) {
              return 0;
            }
            uVar8 = uVar8 + 4;
            if (uVar7 - 1 < uVar8 + uVar9) {
              return 0;
            }
            if (uVar7 <= uVar8) {
              return 0;
            }
            if (uVar7 - uVar8 < uVar9) {
              return 0;
            }
            if (*(char *)(lVar6 + uVar8 + uVar9) != '\0') {
              return 0;
            }
          }
        }
        *(int *)(param_2 + 7) = iVar12;
        return 1;
      }
    }
  }
  return 0;
}


// ===== 0049d5b0  FUN_0049d5b0 =====

undefined4 FUN_0049d5b0(int *param_1,long *param_2)

{
  uint *puVar1;
  uint *puVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  undefined8 uVar14;
  
  lVar8 = *param_2;
  cVar3 = (char)param_2[3];
  uVar10 = (long)param_1 - lVar8;
  if ((((uVar10 & 3) == 0 || cVar3 == '\0') && (uVar7 = param_2[1], 4 < uVar7)) &&
     (uVar9 = uVar7 - 4, uVar10 <= uVar9)) {
    iVar5 = *param_1;
    iVar12 = (int)param_2[7];
    lVar13 = CONCAT44((int)((ulong)param_2[7] >> 0x20) + 1,iVar12 + 1);
    uVar14 = NEON_cmhs(param_2[2],lVar13,4);
    param_2[7] = lVar13;
    if (((((uint)uVar14 & (uint)((ulong)uVar14 >> 0x20) & 1) != 0) &&
        (uVar11 = uVar10 - (long)iVar5, cVar3 == '\0' || (uVar11 & 1) == 0)) &&
       (uVar11 <= uVar7 - 2)) {
      uVar4 = *(ushort *)(lVar8 + uVar11);
      uVar6 = 0;
      if (((uVar4 & 1) == 0) && ((uVar4 & 1) == 0 || cVar3 == '\0')) {
        uVar6 = 0;
        if ((uVar4 < uVar7) && (uVar11 <= uVar7 - uVar4)) {
          if ((4 < *(ushort *)((long)param_1 - (long)*param_1)) &&
             (uVar11 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[2], uVar11 != 0)) {
            uVar10 = uVar10 + uVar11;
            if (uVar9 < uVar10) {
              return 0;
            }
            if ((uVar10 & 3) != 0 && cVar3 != '\0') {
              return 0;
            }
            if (((int)*(uint *)(lVar8 + uVar10) < 1) ||
               (uVar7 - 1 < uVar10 + *(uint *)(lVar8 + uVar10))) {
              return 0;
            }
            puVar1 = (uint *)((long)((long)param_1 + uVar11) +
                             (ulong)*(uint *)((long)param_1 + uVar11));
            uVar10 = (long)puVar1 - lVar8;
            if (uVar9 < uVar10) {
              return 0;
            }
            if ((uVar10 & 3) != 0 && cVar3 != '\0') {
              return 0;
            }
            uVar9 = (ulong)*puVar1;
            if ((ulong)param_2[4] >> 2 <= uVar9) {
              return 0;
            }
            uVar9 = uVar9 * 4 + 4;
            if (uVar7 <= uVar9) {
              return 0;
            }
            if (uVar7 - uVar9 < uVar10) {
              return 0;
            }
            puVar1 = (uint *)((long)((long)param_1 + uVar11) +
                             (ulong)*(uint *)((long)param_1 + uVar11));
            if (*puVar1 != 0) {
              uVar7 = 0;
              uVar10 = 0;
              do {
                puVar2 = (uint *)((long)puVar1 + (uVar7 & 0xfffffffc) + 4);
                uVar9 = FUN_0049d7d4((long)puVar2 + (ulong)*puVar2);
                if ((uVar9 & 1) == 0) {
                  return 0;
                }
                uVar10 = uVar10 + 1;
                uVar7 = uVar7 + 4;
              } while (uVar10 < *puVar1);
              iVar12 = (int)param_2[7] + -1;
            }
          }
          uVar6 = 1;
          *(int *)(param_2 + 7) = iVar12;
        }
      }
      return uVar6;
    }
  }
  return 0;
}


// ===== 0049d7d4  FUN_0049d7d4 =====

undefined8 FUN_0049d7d4(int *param_1,long *param_2)

{
  uint *puVar1;
  uint *puVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ushort *puVar12;
  ulong uVar13;
  int iVar14;
  long lVar15;
  undefined8 uVar16;
  
  lVar8 = *param_2;
  cVar3 = (char)param_2[3];
  uVar10 = (long)param_1 - lVar8;
  if ((((uVar10 & 3) == 0 || cVar3 == '\0') && (uVar7 = param_2[1], 4 < uVar7)) &&
     (uVar9 = uVar7 - 4, uVar10 <= uVar9)) {
    iVar5 = *param_1;
    iVar14 = (int)param_2[7];
    lVar15 = CONCAT44((int)((ulong)param_2[7] >> 0x20) + 1,iVar14 + 1);
    uVar16 = NEON_cmhs(param_2[2],lVar15,4);
    param_2[7] = lVar15;
    if (((((uint)uVar16 & (uint)((ulong)uVar16 >> 0x20) & 1) != 0) &&
        (uVar11 = uVar10 - (long)iVar5, cVar3 == '\0' || (uVar11 & 1) == 0)) &&
       (uVar11 <= uVar7 - 2)) {
      uVar4 = *(ushort *)(lVar8 + uVar11);
      if ((((uVar4 & 1) == 0) && ((uVar4 & 1) == 0 || cVar3 == '\0')) &&
         ((uVar4 < uVar7 && (uVar11 <= uVar7 - uVar4)))) {
        puVar12 = (ushort *)((long)param_1 - (long)*param_1);
        if ((*puVar12 < 5) || (uVar11 = (ulong)puVar12[2], uVar11 == 0)) {
          return 0;
        }
        uVar6 = uVar10 + uVar11;
        if (((uVar6 <= uVar9) && ((uVar6 & 3) == 0 || cVar3 == '\0')) &&
           (0 < (int)*(uint *)(lVar8 + uVar6))) {
          uVar13 = uVar7 - 1;
          if (uVar13 < uVar6 + *(uint *)(lVar8 + uVar6)) {
            return 0;
          }
          puVar1 = (uint *)((long)((long)param_1 + uVar11) +
                           (ulong)*(uint *)((long)param_1 + uVar11));
          uVar11 = (long)puVar1 - lVar8;
          if ((uVar11 <= uVar9) && ((uVar11 & 3) == 0 || cVar3 == '\0')) {
            uVar6 = (ulong)*puVar1;
            if ((ulong)param_2[4] <= uVar6) {
              return 0;
            }
            uVar6 = uVar6 + 4;
            if (((uVar6 + uVar11 <= uVar13) && (uVar6 < uVar7)) && (uVar11 <= uVar7 - uVar6)) {
              if (*(char *)(lVar8 + uVar6 + uVar11) != '\0') {
                return 0;
              }
              if ((*puVar12 < 7) || (uVar11 = (ulong)puVar12[3], uVar11 == 0)) {
LAB_0049dab4:
                *(int *)(param_2 + 7) = iVar14;
                return 1;
              }
              uVar10 = uVar10 + uVar11;
              if ((uVar10 <= uVar9) &&
                 ((((uVar10 & 3) == 0 || cVar3 == '\0' && (0 < (int)*(uint *)(lVar8 + uVar10))) &&
                  (uVar10 + *(uint *)(lVar8 + uVar10) <= uVar13)))) {
                puVar1 = (uint *)((long)((long)param_1 + uVar11) +
                                 (ulong)*(uint *)((long)param_1 + uVar11));
                uVar10 = (long)puVar1 - lVar8;
                if ((uVar10 <= uVar9) && ((uVar10 & 3) == 0 || cVar3 == '\0')) {
                  uVar9 = (ulong)*puVar1;
                  if ((ulong)param_2[4] >> 2 <= uVar9) {
                    return 0;
                  }
                  uVar9 = uVar9 * 4 + 4;
                  if ((uVar9 < uVar7) && (uVar10 <= uVar7 - uVar9)) {
                    puVar1 = (uint *)((long)((long)param_1 + uVar11) +
                                     (ulong)*(uint *)((long)param_1 + uVar11));
                    if (*puVar1 != 0) {
                      uVar7 = 0;
                      uVar10 = 0;
                      do {
                        puVar2 = (uint *)((long)puVar1 + (uVar7 & 0xfffffffc) + 4);
                        uVar9 = FUN_0049dad8((long)puVar2 + (ulong)*puVar2,param_2);
                        if ((uVar9 & 1) == 0) {
                          return 0;
                        }
                        uVar10 = uVar10 + 1;
                        uVar7 = uVar7 + 4;
                      } while (uVar10 < *puVar1);
                      iVar14 = (int)param_2[7] + -1;
                    }
                    goto LAB_0049dab4;
                  }
                }
              }
            }
          }
        }
      }
      return 0;
    }
  }
  return 0;
}


// ===== 0049dad8  FUN_0049dad8 =====

undefined8 FUN_0049dad8(int *param_1,long *param_2)

{
  uint *puVar1;
  uint *puVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ushort *puVar12;
  ulong uVar13;
  int iVar14;
  long lVar15;
  undefined8 uVar16;
  
  lVar8 = *param_2;
  cVar3 = (char)param_2[3];
  uVar10 = (long)param_1 - lVar8;
  if ((((uVar10 & 3) == 0 || cVar3 == '\0') && (uVar7 = param_2[1], 4 < uVar7)) &&
     (uVar9 = uVar7 - 4, uVar10 <= uVar9)) {
    iVar5 = *param_1;
    iVar14 = (int)param_2[7];
    lVar15 = CONCAT44((int)((ulong)param_2[7] >> 0x20) + 1,iVar14 + 1);
    uVar16 = NEON_cmhs(param_2[2],lVar15,4);
    param_2[7] = lVar15;
    if (((((uint)uVar16 & (uint)((ulong)uVar16 >> 0x20) & 1) != 0) &&
        (uVar11 = uVar10 - (long)iVar5, cVar3 == '\0' || (uVar11 & 1) == 0)) &&
       (uVar11 <= uVar7 - 2)) {
      uVar4 = *(ushort *)(lVar8 + uVar11);
      if ((((uVar4 & 1) == 0) && ((uVar4 & 1) == 0 || cVar3 == '\0')) &&
         ((uVar4 < uVar7 && (uVar11 <= uVar7 - uVar4)))) {
        puVar12 = (ushort *)((long)param_1 - (long)*param_1);
        if ((*puVar12 < 5) || (uVar11 = (ulong)puVar12[2], uVar11 == 0)) {
          return 0;
        }
        uVar6 = uVar10 + uVar11;
        if (((uVar6 <= uVar9) && ((uVar6 & 3) == 0 || cVar3 == '\0')) &&
           (0 < (int)*(uint *)(lVar8 + uVar6))) {
          uVar13 = uVar7 - 1;
          if (uVar13 < uVar6 + *(uint *)(lVar8 + uVar6)) {
            return 0;
          }
          puVar1 = (uint *)((long)((long)param_1 + uVar11) +
                           (ulong)*(uint *)((long)param_1 + uVar11));
          uVar11 = (long)puVar1 - lVar8;
          if ((uVar11 <= uVar9) && ((uVar11 & 3) == 0 || cVar3 == '\0')) {
            uVar6 = (ulong)*puVar1;
            if ((ulong)param_2[4] <= uVar6) {
              return 0;
            }
            uVar6 = uVar6 + 4;
            if (((uVar6 + uVar11 <= uVar13) && (uVar6 < uVar7)) && (uVar11 <= uVar7 - uVar6)) {
              if (*(char *)(lVar8 + uVar6 + uVar11) != '\0') {
                return 0;
              }
              if ((*puVar12 < 7) || (uVar11 = (ulong)puVar12[3], uVar11 == 0)) {
LAB_0049ddb8:
                *(int *)(param_2 + 7) = iVar14;
                return 1;
              }
              uVar10 = uVar10 + uVar11;
              if ((uVar10 <= uVar9) &&
                 ((((uVar10 & 3) == 0 || cVar3 == '\0' && (0 < (int)*(uint *)(lVar8 + uVar10))) &&
                  (uVar10 + *(uint *)(lVar8 + uVar10) <= uVar13)))) {
                puVar1 = (uint *)((long)((long)param_1 + uVar11) +
                                 (ulong)*(uint *)((long)param_1 + uVar11));
                uVar10 = (long)puVar1 - lVar8;
                if ((uVar10 <= uVar9) && ((uVar10 & 3) == 0 || cVar3 == '\0')) {
                  uVar9 = (ulong)*puVar1;
                  if ((ulong)param_2[4] >> 2 <= uVar9) {
                    return 0;
                  }
                  uVar9 = uVar9 * 4 + 4;
                  if ((uVar9 < uVar7) && (uVar10 <= uVar7 - uVar9)) {
                    puVar1 = (uint *)((long)((long)param_1 + uVar11) +
                                     (ulong)*(uint *)((long)param_1 + uVar11));
                    if (*puVar1 != 0) {
                      uVar7 = 0;
                      uVar10 = 0;
                      do {
                        puVar2 = (uint *)((long)puVar1 + (uVar7 & 0xfffffffc) + 4);
                        uVar9 = FUN_0049dddc((long)puVar2 + (ulong)*puVar2,param_2);
                        if ((uVar9 & 1) == 0) {
                          return 0;
                        }
                        uVar10 = uVar10 + 1;
                        uVar7 = uVar7 + 4;
                      } while (uVar10 < *puVar1);
                      iVar14 = (int)param_2[7] + -1;
                    }
                    goto LAB_0049ddb8;
                  }
                }
              }
            }
          }
        }
      }
      return 0;
    }
  }
  return 0;
}


// ===== 0049dddc  FUN_0049dddc =====

undefined8 FUN_0049dddc(int *param_1,long *param_2)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  
  cVar1 = (char)param_2[3];
  uVar5 = (long)param_1 - *param_2;
  if ((((uVar5 & 3) == 0 || cVar1 == '\0') && (uVar6 = param_2[1], 4 < uVar6)) &&
     (uVar5 <= uVar6 - 4)) {
    iVar3 = *param_1;
    iVar8 = (int)param_2[7];
    lVar9 = CONCAT44((int)((ulong)param_2[7] >> 0x20) + 1,iVar8 + 1);
    uVar10 = NEON_cmhs(param_2[2],lVar9,4);
    param_2[7] = lVar9;
    if (((((uint)uVar10 & (uint)((ulong)uVar10 >> 0x20) & 1) != 0) &&
        (uVar7 = uVar5 - (long)iVar3, cVar1 == '\0' || (uVar7 & 1) == 0)) && (uVar7 <= uVar6 - 2)) {
      uVar2 = *(ushort *)(*param_2 + uVar7);
      if ((((uVar2 & 1) == 0) && ((uVar2 & 1) == 0 || cVar1 == '\0')) &&
         ((uVar2 < uVar6 && (uVar7 <= uVar6 - uVar2)))) {
        puVar4 = (ushort *)((long)param_1 - (long)*param_1);
        if (4 < *puVar4) {
          if (((ulong)puVar4[2] != 0) && (uVar6 - 1 < uVar5 + puVar4[2])) {
            return 0;
          }
          if ((6 < *puVar4) && ((ulong)puVar4[3] != 0)) {
            uVar5 = uVar5 + puVar4[3];
            if (uVar6 - 4 < uVar5) {
              return 0;
            }
            if ((uVar5 & 3) != 0 && cVar1 != '\0') {
              return 0;
            }
          }
        }
        *(int *)(param_2 + 7) = iVar8;
        return 1;
      }
    }
  }
  return 0;
}


// ===== 0049df08  FUN_0049df08 =====

void FUN_0049df08(long *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if ((int)param_1[5] != -1) {
    if ((int)param_1[5] == 0) {
      lVar3 = *(long *)(param_2 + 0x18);
      if (lVar3 != 0) {
        lVar2 = *(long *)(param_2 + 0x10);
        pcVar4 = *(char **)(param_2 + 8);
        do {
          if (-1 < *pcVar4) {
            FUN_0049e03c(lVar2);
          }
          lVar3 = lVar3 + -1;
          lVar2 = lVar2 + 0x58;
          pcVar4 = pcVar4 + 1;
        } while (lVar3 != 0);
        free((void *)((*(long *)(param_2 + 8) - (*(ulong *)(param_2 + 0x20) & 1)) + -8));
      }
      puVar1 = PTR_DAT_007a1f30;
      uVar5 = *(undefined8 *)(param_3 + 0x18);
      uVar7 = *(undefined8 *)(param_3 + 0x10);
      uVar6 = *(undefined8 *)(param_3 + 8);
      *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_3 + 0x20);
      *(undefined8 *)(param_2 + 0x18) = uVar5;
      *(undefined8 *)(param_2 + 0x10) = uVar7;
      *(undefined8 *)(param_2 + 8) = uVar6;
      *(undefined **)(param_3 + 8) = puVar1 + 0x10;
      *(undefined8 *)(param_3 + 0x10) = 0;
      *(undefined8 *)(param_3 + 0x18) = 0;
      *(undefined8 *)(param_3 + 0x20) = 0;
      return;
    }
    lVar3 = param_1[3];
    if (lVar3 != 0) {
      lVar2 = param_1[2];
      pcVar4 = (char *)param_1[1];
      do {
        if (-1 < *pcVar4) {
          FUN_0049e03c(lVar2);
        }
        lVar3 = lVar3 + -1;
        lVar2 = lVar2 + 0x58;
        pcVar4 = pcVar4 + 1;
      } while (lVar3 != 0);
      free((void *)((param_1[1] - (param_1[4] & 1U)) + -8));
    }
  }
  puVar1 = PTR_DAT_007a1f38;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_0049e1f4(param_1 + 1,param_3 + 8);
  *(undefined4 *)(param_1 + 5) = 0;
  return;
}


// ===== 0049e03c  FUN_0049e03c =====

void FUN_0049e03c(byte *param_1)

{
  long lVar1;
  char *pcVar2;
  undefined8 *puVar3;
  
  lVar1 = *(long *)(param_1 + 0x48);
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)(*(long *)(param_1 + 0x40) + 0x20);
    pcVar2 = *(char **)(param_1 + 0x38);
    do {
      if (-1 < *pcVar2) {
        if ((*(byte *)(puVar3 + -1) & 1) != 0) {
          free((void *)*puVar3);
        }
        if ((*(byte *)(puVar3 + -4) & 1) != 0) {
          free((void *)puVar3[-2]);
        }
      }
      lVar1 = lVar1 + -1;
      puVar3 = puVar3 + 10;
      pcVar2 = pcVar2 + 1;
    } while (lVar1 != 0);
    free((void *)((*(long *)(param_1 + 0x38) - (*(ulong *)(param_1 + 0x50) & 1)) + -8));
  }
  if ((param_1[0x18] & 1) != 0) {
    free(*(void **)(param_1 + 0x28));
  }
  if ((*param_1 & 1) == 0) {
    return;
  }
  free(*(void **)(param_1 + 0x10));
  return;
}


// ===== 0049e0f0  FUN_0049e0f0 =====

ulong FUN_0049e0f0(ulong param_1,ulong *param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_3 < 0x11) {
    if (8 < param_3) {
      uVar5 = *(ulong *)((long)param_2 + (param_3 - 8)) ^ param_1 + 0x9ddfea08eb382d69;
      uVar4 = (*param_2 >> 0x35 | *param_2 << 0xb) + param_1 + 0x9ddfea08eb382d69;
      uVar6 = uVar5 * uVar4;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar5;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar4;
      uVar4 = SUB168(auVar1 * auVar3,8);
      goto LAB_0049e1e8;
    }
    if (param_3 < 4) {
      if (param_3 == 0) {
        return param_1;
      }
      uVar4 = (ulong)((uint)*(byte *)((long)param_2 + (param_3 >> 1)) <<
                      (ulong)(((uint)param_3 & 6) << 2) |
                     (uint)(byte)*param_2 |
                     (uint)*(byte *)((long)param_2 + (param_3 - 1)) <<
                     (ulong)(((uint)(param_3 - 1) & 3) << 3));
    }
    else {
      uVar4 = (ulong)*(uint *)((long)param_2 + (param_3 - 4)) << (param_3 * 8 - 0x20 & 0x3f) |
              (ulong)(uint)*param_2;
    }
  }
  else {
    if (0x400 < param_3) {
      uVar4 = FUN_006487ec();
      return uVar4;
    }
    uVar4 = FUN_006489a0(param_2,param_3);
  }
  uVar6 = (uVar4 + param_1) * -0x622015f714c7d297;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar4 + param_1;
  uVar4 = SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8);
LAB_0049e1e8:
  return uVar4 ^ uVar6;
}


// ===== 0049e1f4  FUN_0049e1f4 =====

void FUN_0049e1f4(long *param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *param_2;
  lVar3 = param_2[3];
  lVar2 = param_2[2];
  puVar1 = PTR_DAT_007a1f30 + 0x10;
  param_1[1] = param_2[1];
  *param_1 = lVar4;
  param_1[3] = lVar3;
  param_1[2] = lVar2;
  *param_2 = (long)puVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  return;
}


// ===== 0049e214  FUN_0049e214 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0049e214(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  size_t sVar5;
  long lVar6;
  char *pcVar7;
  undefined *local_178 [9];
  ulong local_130;
  undefined8 uStack_128;
  void *local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined *local_108 [3];
  undefined8 uStack_f0;
  undefined4 auStack_e8 [4];
  undefined8 local_d8;
  long local_70;
  
  puVar4 = PTR_PTR_007a1e48;
  puVar3 = PTR_DAT_007a1e40;
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  local_178[0] = *(undefined **)(PTR_PTR_007a1e48 + 8);
  puVar1 = PTR_DAT_007a1e40 + 0x40;
  local_d8 = 0;
  local_108[0] = puVar1;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_007a1e48 + 0x10);
  lVar6 = *(long *)(local_178[0] + -0x18);
                    /* try { // try from 0049e298 to 0049e2a3 has its CatchHandler @ 0049e3f8 */
  FUN_00715fc0((long)local_178 + lVar6,local_178 + 1);
  local_178[0] = puVar3 + 0x18;
  *(undefined8 *)((long)&uStack_f0 + lVar6) = 0;
  *(undefined4 *)((long)auStack_e8 + lVar6) = 0xffffffff;
                    /* try { // try from 0049e2bc to 0049e2c3 has its CatchHandler @ 0049e3d8 */
  local_108[0] = puVar1;
  FUN_007160dc(local_178 + 1);
  puVar1 = PTR_DAT_007a10f8;
  pcVar7 = (char *)*param_2;
  local_178[1] = PTR_DAT_007a10f8 + 0x10;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_110 = 0x10;
  sVar5 = strlen(pcVar7);
                    /* try { // try from 0049e2f4 to 0049e2ff has its CatchHandler @ 0049e3d4 */
  FUN_00303e0c(local_178,pcVar7,sVar5);
  pcVar7 = (char *)*param_3;
  sVar5 = strlen(pcVar7);
                    /* try { // try from 0049e310 to 0049e31b has its CatchHandler @ 0049e3d0 */
  FUN_00303e0c(local_178,pcVar7,sVar5);
  FUN_0049e40c(local_178,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,param_12)
  ;
                    /* try { // try from 0049e344 to 0049e34f has its CatchHandler @ 0049e3cc */
  FUN_00718470(param_1,local_178 + 1);
  local_178[0] = *(undefined **)puVar4;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(puVar4 + 0x18);
  local_178[1] = puVar1 + 0x10;
  if ((local_130 & 1) != 0) {
    free(local_120);
  }
  FUN_00716098(local_178 + 1);
  FUN_00716ee4(local_178,puVar4 + 8);
  thunk_FUN_00715e00(local_108);
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0049e40c  FUN_0049e40c =====

void FUN_0049e40c(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined8 *param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10)

{
  ulong uVar1;
  byte *pbVar2;
  size_t sVar3;
  char *pcVar4;
  
  pcVar4 = (char *)*param_2;
  sVar3 = strlen(pcVar4);
                    /* try { // try from 0049e458 to 0049e463 has its CatchHandler @ 0049e4e0 */
  FUN_00303e0c(param_1,pcVar4,sVar3);
  uVar1 = *(ulong *)(param_3 + 8);
  pbVar2 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar2 = param_3 + 1;
    uVar1 = (ulong)(*param_3 >> 1);
  }
                    /* try { // try from 0049e47c to 0049e483 has its CatchHandler @ 0049e4dc */
  FUN_00303e0c(param_1,pbVar2,uVar1);
  pcVar4 = (char *)*param_4;
  sVar3 = strlen(pcVar4);
                    /* try { // try from 0049e494 to 0049e49f has its CatchHandler @ 0049e4d8 */
  FUN_00303e0c(param_1,pcVar4,sVar3);
  FUN_0049e4e4(param_1,param_5,param_6,param_7,param_8,param_9,param_10);
  return;
}


// ===== 0049e4e4  FUN_0049e4e4 =====

void FUN_0049e4e4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,byte *param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  byte *pbVar2;
  size_t sVar3;
  char *pcVar4;
  
  pcVar4 = (char *)*param_2;
  sVar3 = strlen(pcVar4);
                    /* try { // try from 0049e524 to 0049e52f has its CatchHandler @ 0049e59c */
  FUN_00303e0c(param_1,pcVar4,sVar3);
  pcVar4 = (char *)*param_3;
  sVar3 = strlen(pcVar4);
                    /* try { // try from 0049e540 to 0049e54b has its CatchHandler @ 0049e598 */
  FUN_00303e0c(param_1,pcVar4,sVar3);
  uVar1 = *(ulong *)(param_4 + 8);
  pbVar2 = *(byte **)(param_4 + 0x10);
  if ((*param_4 & 1) == 0) {
    pbVar2 = param_4 + 1;
    uVar1 = (ulong)(*param_4 >> 1);
  }
                    /* try { // try from 0049e564 to 0049e56b has its CatchHandler @ 0049e594 */
  FUN_00303e0c(param_1,pbVar2,uVar1);
  FUN_0049e5a0(param_1,param_5,param_6,param_7);
  return;
}


// ===== 0049e5a0  FUN_0049e5a0 =====

void FUN_0049e5a0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  size_t sVar1;
  char *pcVar2;
  
  pcVar2 = (char *)*param_2;
  sVar1 = strlen(pcVar2);
                    /* try { // try from 0049e5cc to 0049e5d7 has its CatchHandler @ 0049e628 */
  FUN_00303e0c(param_1,pcVar2,sVar1);
  pcVar2 = (char *)*param_3;
  sVar1 = strlen(pcVar2);
                    /* try { // try from 0049e5e8 to 0049e5f3 has its CatchHandler @ 0049e624 */
  FUN_00303e0c(param_1,pcVar2,sVar1);
  pcVar2 = (char *)*param_4;
  sVar1 = strlen(pcVar2);
                    /* try { // try from 0049e604 to 0049e60f has its CatchHandler @ 0049e620 */
  FUN_00303e0c(param_1,pcVar2,sVar1);
  return;
}


// ===== 0049e62c  FUN_0049e62c =====

void FUN_0049e62c(undefined8 *param_1,long param_2,void *param_3,size_t param_4,undefined4 *param_5)

{
  byte *pbVar1;
  size_t sVar2;
  ulong uVar3;
  long lVar4;
  byte bVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  long lVar8;
  undefined1 uVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  byte *__s1;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  byte local_c0 [16];
  void *local_b0;
  void *local_a8;
  size_t sStack_a0;
  undefined *local_98;
  char *local_90;
  long local_88;
  
  lVar8 = tpidr_el0;
  local_88 = *(long *)(lVar8 + 0x28);
  uVar12 = *(undefined8 *)(param_2 + 8);
  *param_5 = 0xffffffff;
  Hint_Prefetch(uVar12,0,2,0);
  local_a8 = param_3;
  sStack_a0 = param_4;
  lVar11 = FUN_0049e0f0(uVar12,PTR_LOOP_007a1f58);
  uVar14 = *(ulong *)(param_2 + 0x18);
  uVar3 = *(ulong *)(param_2 + 8);
  lVar4 = *(long *)(param_2 + 0x10);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = lVar11 + param_4;
  uVar13 = SUB168(auVar7 * ZEXT816(0x9ddfea08eb382d69),8) ^ (lVar11 + param_4) * -0x622015f714c7d297
  ;
  uVar9 = (undefined1)uVar13;
  uVar17 = CONCAT17(uVar9,CONCAT16(uVar9,CONCAT15(uVar9,CONCAT14(uVar9,CONCAT13(uVar9,CONCAT12(uVar9
                                                  ,CONCAT11(uVar9,uVar9))))))) & 0x7f7f7f7f7f7f7f7f;
  lVar11 = 0;
  uVar15 = (uVar13 >> 7 ^ uVar3 >> 0xc) & uVar14;
  uVar12 = *(undefined8 *)(uVar3 + uVar15);
  uVar13 = NEON_cmeq(uVar12,uVar17,1);
  do {
    while (uVar13 == 0) {
      lVar16 = NEON_cmeq(uVar12,0x8080808080808080,1);
      if (lVar16 != 0) goto LAB_0049e790;
      lVar11 = lVar11 + 8;
      uVar15 = lVar11 + uVar15 & uVar14;
      uVar12 = *(undefined8 *)(uVar3 + uVar15);
      uVar13 = NEON_cmeq(uVar12,uVar17,1);
    }
    uVar6 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
    uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
    uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
    uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
    pbVar1 = (byte *)(lVar4 + (uVar15 + ((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3) &
                              uVar14) * 0x20);
    bVar5 = *pbVar1;
    sVar2 = (ulong)(bVar5 >> 1);
    if ((bVar5 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar1 + 8);
    }
    if (sVar2 == param_4) {
      __s1 = *(byte **)(pbVar1 + 0x10);
      if ((bVar5 & 1) == 0) {
        __s1 = pbVar1 + 1;
      }
      iVar10 = memcmp(__s1,param_3,param_4);
      if (iVar10 == 0) {
        if (uVar3 != 0) {
          *param_5 = *(undefined4 *)(pbVar1 + 0x18);
          *param_1 = 0;
          goto LAB_0049e7e0;
        }
LAB_0049e790:
        local_90 = "Could not find OrtValue with name \'";
        local_98 = &DAT_001c80c8;
        FUN_0049e848(local_c0,&local_90,&local_a8,&local_98);
                    /* try { // try from 0049e7bc to 0049e7cf has its CatchHandler @ 0049e818 */
        FUN_0063aa48(param_1,2,1,local_c0);
        if ((local_c0[0] & 1) != 0) {
          free(local_b0);
        }
LAB_0049e7e0:
        if (*(long *)(lVar8 + 0x28) == local_88) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    }
    uVar13 = (uVar13 & 0x8080808080808080) - 1 & uVar13 & 0x8080808080808080;
  } while( true );
}


// ===== 0049e848  FUN_0049e848 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0049e848(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  size_t sVar5;
  long lVar6;
  char *pcVar7;
  undefined *local_178 [9];
  ulong local_130;
  undefined8 uStack_128;
  void *local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined *local_108 [3];
  undefined8 uStack_f0;
  undefined4 auStack_e8 [4];
  undefined8 local_d8;
  long local_70;
  
  puVar4 = PTR_PTR_007a1e48;
  puVar3 = PTR_DAT_007a1e40;
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  puVar1 = PTR_DAT_007a1e40 + 0x40;
  local_178[0] = *(undefined **)(PTR_PTR_007a1e48 + 8);
  local_d8 = 0;
  local_108[0] = puVar1;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_007a1e48 + 0x10);
  lVar6 = *(long *)(local_178[0] + -0x18);
                    /* try { // try from 0049e8c0 to 0049e8cb has its CatchHandler @ 0049ea0c */
  FUN_00715fc0((long)local_178 + lVar6,local_178 + 1);
  local_178[0] = puVar3 + 0x18;
  *(undefined8 *)((long)&uStack_f0 + lVar6) = 0;
  *(undefined4 *)((long)auStack_e8 + lVar6) = 0xffffffff;
                    /* try { // try from 0049e8e4 to 0049e8eb has its CatchHandler @ 0049e9ec */
  local_108[0] = puVar1;
  FUN_007160dc(local_178 + 1);
  puVar1 = PTR_DAT_007a10f8;
  pcVar7 = (char *)*param_2;
  local_178[1] = PTR_DAT_007a10f8 + 0x10;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_110 = 0x10;
  sVar5 = strlen(pcVar7);
                    /* try { // try from 0049e91c to 0049e927 has its CatchHandler @ 0049e9e8 */
  FUN_00303e0c(local_178,pcVar7,sVar5);
                    /* try { // try from 0049e92c to 0049e933 has its CatchHandler @ 0049e9e4 */
  FUN_00303e0c(local_178,*param_3,param_3[1]);
  pcVar7 = (char *)*param_4;
  sVar5 = strlen(pcVar7);
                    /* try { // try from 0049e944 to 0049e94f has its CatchHandler @ 0049e9e0 */
  FUN_00303e0c(local_178,pcVar7,sVar5);
                    /* try { // try from 0049e950 to 0049e95b has its CatchHandler @ 0049e9dc */
  FUN_00718470(param_1,local_178 + 1);
  local_178[0] = *(undefined **)puVar4;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(puVar4 + 0x18);
  local_178[1] = puVar1 + 0x10;
  if ((local_130 & 1) != 0) {
    free(local_120);
  }
  FUN_00716098(local_178 + 1);
  FUN_00716ee4(local_178,puVar4 + 8);
  thunk_FUN_00715e00(local_108);
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0049ea20  FUN_0049ea20 =====

void FUN_0049ea20(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong *puVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong *local_68;
  
  uVar10 = *param_1 >> 1;
  puVar1 = param_1 + 1;
  uVar5 = 2;
  if ((*param_1 & 1) != 0) {
    puVar1 = (ulong *)param_1[1];
    uVar5 = param_1[2];
  }
  if (uVar5 < param_3) {
    uVar5 = uVar5 * 2;
    if (uVar5 < param_3 || uVar5 - param_3 == 0) {
      uVar5 = param_3;
    }
    if (0xaaaaaaaaaaaaaaa < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_002f9ee0();
    }
    local_68 = (ulong *)FUN_00759c3c(uVar5 * 0x18);
    uVar4 = 0;
    uVar6 = param_3;
    puVar8 = local_68;
    puVar9 = (ulong *)0x0;
    puVar7 = puVar1;
  }
  else {
    puVar7 = puVar1 + param_3 * 3;
    bVar3 = uVar10 < param_3;
    uVar4 = param_3;
    if (bVar3) {
      uVar4 = uVar10;
    }
    uVar6 = 0;
    if (bVar3) {
      uVar6 = param_3 - uVar10;
    }
    uVar5 = 0;
    lVar2 = uVar10 * 3;
    uVar10 = uVar10 - param_3;
    if (bVar3) {
      uVar10 = 0;
      puVar7 = (ulong *)0x0;
    }
    local_68 = (ulong *)0x0;
    puVar8 = (ulong *)0x0;
    puVar9 = puVar1;
    if (bVar3) {
      puVar8 = puVar1 + lVar2;
    }
  }
                    /* try { // try from 0049eafc to 0049eb07 has its CatchHandler @ 0049ebbc */
  FUN_0049ec00(puVar9,param_2,uVar4);
  if (uVar6 != 0) {
    uVar4 = 0;
    do {
                    /* try { // try from 0049eb14 to 0049eb23 has its CatchHandler @ 0049ebc4 */
      FUN_0049ece0(param_2,param_1,puVar8);
      uVar4 = uVar4 + 1;
      puVar8 = puVar8 + 3;
    } while (uVar6 != uVar4);
  }
  if (uVar10 != 0) {
    puVar7 = puVar7 + uVar10 * 3 + -1;
    do {
      if ((puVar7[-2] & 1) != 0) {
        free((void *)*puVar7);
      }
      uVar10 = uVar10 - 1;
      puVar7 = puVar7 + -3;
    } while (uVar10 != 0);
  }
  uVar10 = *param_1;
  if (local_68 != (ulong *)0x0) {
    if ((uVar10 & 1) != 0) {
      free((void *)param_1[1]);
      uVar10 = *param_1;
    }
    uVar10 = uVar10 | 1;
    param_1[1] = (ulong)local_68;
    param_1[2] = uVar5;
    *param_1 = uVar10;
  }
  *param_1 = uVar10 & 1 | param_3 << 1;
  return;
}


// ===== 0049ec00  FUN_0049ec00 =====

void FUN_0049ec00(long param_1,ulong *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_3 != 0) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    do {
      if ((((uVar1 == 0) || (uVar2 == 0)) || (param_2[2] < uVar1)) || (uVar2 <= param_2[2])) {
LAB_0049ec8c:
                    /* WARNING: Subroutine does not return */
        FUN_004839bc();
      }
      FUN_007139b0(param_1);
      uVar1 = *param_2;
      if (((uVar1 == 0) || (uVar3 = param_2[2], uVar3 == 0)) ||
         ((uVar2 = param_2[1], uVar2 == 0 || (uVar2 <= uVar3)))) goto LAB_0049ec8c;
      param_3 = param_3 + -1;
      param_1 = param_1 + 0x18;
      param_2[2] = uVar3 + 0x18;
    } while (param_3 != 0);
  }
  return;
}


// ===== 0049ec90  FUN_0049ec90 =====

void FUN_0049ec90(undefined8 param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  
  if (param_3 != 0) {
    puVar1 = (undefined8 *)(param_2 + param_3 * 0x18 + -8);
    do {
      if ((*(byte *)(puVar1 + -2) & 1) != 0) {
        free((void *)*puVar1);
      }
      param_3 = param_3 + -1;
      puVar1 = puVar1 + -3;
    } while (param_3 != 0);
  }
  return;
}


// ===== 0049ece0  FUN_0049ece0 =====

void FUN_0049ece0(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  byte *pbVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (((((byte *)*param_1 != (byte *)0x0) && ((byte *)param_1[1] != (byte *)0x0)) &&
      (pbVar1 = (byte *)param_1[2], (byte *)*param_1 <= pbVar1)) && (pbVar1 < (byte *)param_1[1])) {
    if ((*pbVar1 & 1) == 0) {
      uVar4 = *(undefined8 *)(pbVar1 + 8);
      uVar3 = *(undefined8 *)pbVar1;
      param_3[2] = *(undefined8 *)(pbVar1 + 0x10);
      param_3[1] = uVar4;
      *param_3 = uVar3;
    }
    else {
      FUN_002fb36c(param_3,*(undefined8 *)(pbVar1 + 0x10),*(undefined8 *)(pbVar1 + 8));
    }
    if (((*param_1 != 0) && (uVar2 = param_1[2], uVar2 != 0)) &&
       ((param_1[1] != 0 && (uVar2 < (ulong)param_1[1])))) {
      param_1[2] = uVar2 + 0x18;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_004839bc();
}


// ===== 0049ed78  FUN_0049ed78 =====

undefined8 * FUN_0049ed78(ulong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong *__ptr;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  
  uVar11 = *param_1;
  uVar2 = 0xc;
  if ((uVar11 & 1) != 0) {
    uVar2 = param_1[2] << 1;
  }
  if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_002f9ee0();
  }
  __ptr = (ulong *)param_1[1];
  uVar12 = uVar11 >> 1;
  uVar4 = FUN_00759c3c(uVar2 << 3);
  puVar1 = (undefined8 *)(uVar4 + uVar12 * 8);
  *puVar1 = *param_2;
  if (1 < uVar11) {
    uVar5 = 0;
    puVar7 = param_1 + 1;
    if ((uVar11 & 1) != 0) {
      puVar7 = __ptr;
    }
    puVar8 = puVar7;
    if ((7 < uVar11) && (0x1f < uVar4 - (long)puVar7)) {
      uVar5 = uVar12 & 0x7ffffffffffffffc;
      puVar9 = (ulong *)(uVar4 + 0x10);
      puVar8 = puVar7 + uVar5;
      puVar7 = puVar7 + 2;
      uVar10 = uVar5;
      do {
        puVar3 = puVar7 + -1;
        uVar13 = puVar7[-2];
        uVar15 = puVar7[1];
        uVar14 = *puVar7;
        uVar10 = uVar10 - 4;
        puVar7 = puVar7 + 4;
        puVar9[-1] = *puVar3;
        puVar9[-2] = uVar13;
        puVar9[1] = uVar15;
        *puVar9 = uVar14;
        puVar9 = puVar9 + 4;
      } while (uVar10 != 0);
      if (uVar12 == uVar5) goto LAB_0049ee54;
    }
    lVar6 = uVar12 - uVar5;
    puVar7 = (ulong *)(uVar4 + uVar5 * 8);
    do {
      lVar6 = lVar6 + -1;
      *puVar7 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar7 = puVar7 + 1;
    } while (lVar6 != 0);
  }
LAB_0049ee54:
  if ((uVar11 & 1) != 0) {
    free(__ptr);
    uVar11 = *param_1;
  }
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  *param_1 = (uVar11 | 1) + 2;
  return puVar1;
}


// ===== 0049ee94  FUN_0049ee94 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0049ee94(undefined8 param_1,int *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *local_170 [9];
  ulong local_128;
  undefined8 uStack_120;
  void *local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined *local_100 [3];
  undefined8 uStack_e8;
  undefined4 auStack_e0 [4];
  undefined8 local_d0;
  long local_68;
  
  puVar4 = PTR_PTR_007a1e48;
  puVar3 = PTR_DAT_007a1e40;
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  puVar1 = PTR_DAT_007a1e40 + 0x40;
  local_170[0] = *(undefined **)(PTR_PTR_007a1e48 + 8);
  local_d0 = 0;
  local_100[0] = puVar1;
  *(undefined8 *)((long)local_170 + *(long *)(local_170[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_007a1e48 + 0x10);
  lVar6 = *(long *)(local_170[0] + -0x18);
                    /* try { // try from 0049ef04 to 0049ef0f has its CatchHandler @ 0049f060 */
  FUN_00715fc0((long)local_170 + lVar6,local_170 + 1);
  local_170[0] = puVar3 + 0x18;
  *(undefined8 *)((long)&uStack_e8 + lVar6) = 0;
  *(undefined4 *)((long)auStack_e0 + lVar6) = 0xffffffff;
                    /* try { // try from 0049ef28 to 0049ef2f has its CatchHandler @ 0049f04c */
  local_100[0] = puVar1;
  FUN_007160dc(local_170 + 1);
  puVar1 = PTR_DAT_007a10f8;
  local_170[1] = PTR_DAT_007a10f8 + 0x10;
  uStack_120 = 0;
  local_128 = 0;
  uStack_110 = 0;
  local_118 = (void *)0x0;
  local_108 = 0x10;
                    /* try { // try from 0049ef54 to 0049efcf has its CatchHandler @ 0049f070 */
  uVar5 = FUN_00303e0c(local_170,"Device:[",8);
  uVar5 = FUN_00303e0c(uVar5,"DeviceType:",0xb);
  uVar5 = FUN_00717214(uVar5,(long)(char)*param_2);
  uVar5 = FUN_00303e0c(uVar5," MemoryType:",0xc);
  uVar5 = FUN_00717214(uVar5,(*param_2 << 0x10) >> 0x18);
  uVar5 = FUN_00303e0c(uVar5," DeviceId:",10);
  uVar5 = FUN_00717214(uVar5,(long)*(short *)((long)param_2 + 2));
  FUN_00303e0c(uVar5,&DAT_001e1051,1);
  FUN_00718470(param_1,local_170 + 1);
  local_170[0] = *(undefined **)puVar4;
  *(undefined8 *)((long)local_170 + *(long *)(local_170[0] + -0x18)) =
       *(undefined8 *)(puVar4 + 0x18);
  local_170[1] = puVar1 + 0x10;
  if ((local_128 & 1) != 0) {
    free(local_118);
  }
  FUN_00716098(local_170 + 1);
  FUN_00716ee4(local_170,puVar4 + 8);
  thunk_FUN_00715e00(local_100);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0049f098  FUN_0049f098 =====

void FUN_0049f098(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  void *pvVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  char *pcVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  ulong local_80;
  ulong local_78;
  byte local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  local_80 = *param_1;
  uVar1 = param_1[1];
  local_78 = param_1[2];
  param_1[2] = param_2;
  local_70 = (byte)param_1[3] & 1;
  uVar6 = FUN_0049f330(&local_80,param_1,uVar1);
  puVar5 = PTR_LOOP_007a1f58;
  if (local_78 != 0) {
    uVar18 = param_1[1];
    if ((uVar6 & 1) == 0) {
      uVar6 = 0;
      do {
        if (-1 < *(char *)(local_80 + uVar6)) {
          puVar17 = (undefined8 *)(uVar1 + uVar6 * 0x68);
          lVar14 = puVar17[1];
          lVar8 = FUN_0049e0f0(puVar5,*puVar17,lVar14);
          uVar9 = lVar8 + lVar14;
          uVar10 = *param_1;
          auVar3._8_8_ = 0;
          auVar3._0_8_ = uVar9;
          uVar12 = SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar9 * -0x622015f714c7d297;
          uVar11 = param_1[2];
          uVar9 = (uVar12 >> 7 ^ uVar10 >> 0xc) & uVar11;
          uVar13 = *(ulong *)(uVar10 + uVar9) &
                   (*(ulong *)(uVar10 + uVar9) << 7 ^ 0xffffffffffffffff) & 0x8080808080808080;
          if (uVar13 == 0) {
            lVar14 = 8;
            do {
              uVar9 = uVar9 + lVar14;
              lVar14 = lVar14 + 8;
              uVar9 = uVar9 & uVar11;
              uVar13 = *(ulong *)(uVar10 + uVar9) &
                       (*(ulong *)(uVar10 + uVar9) << 7 ^ 0xffffffffffffffff) & 0x8080808080808080;
            } while (uVar13 == 0);
          }
          uVar13 = (uVar13 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar13 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
          bVar2 = (byte)uVar12 & 0x7f;
          uVar9 = uVar9 + ((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3) & uVar11;
          puVar16 = (undefined8 *)(uVar18 + uVar9 * 0x68);
          *(byte *)(uVar10 + uVar9) = bVar2;
          *(byte *)(uVar10 + (uVar9 - 7 & uVar11) + (uVar11 & 7)) = bVar2;
          uVar20 = *puVar17;
          puVar16[1] = puVar17[1];
          *puVar16 = uVar20;
          uVar21 = puVar17[3];
          uVar20 = puVar17[2];
          puVar19 = puVar16 + 4;
          *(undefined1 *)puVar19 = 0;
          *(undefined1 *)(puVar16 + 0xc) = 0;
          puVar16[3] = uVar21;
          puVar16[2] = uVar20;
          if (*(char *)(puVar17 + 0xc) != '\0') {
            puVar16[5] = 0;
            *puVar19 = 0;
            puVar16[7] = 0;
            puVar16[6] = 0;
            puVar16[9] = 0;
            puVar16[8] = 0;
            puVar16[0xb] = 0;
            puVar16[10] = 0;
            FUN_005cab64(puVar19,puVar17 + 4);
            *(undefined1 *)(puVar16 + 0xc) = 1;
            if (*(char *)(puVar17 + 0xc) != '\0') {
              pvVar7 = (void *)puVar17[0xb];
              puVar17[0xb] = 0;
              if (pvVar7 != (void *)0x0) {
                free(pvVar7);
              }
            }
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 != local_78);
    }
    else {
      uVar9 = local_78 >> 1;
      uVar6 = 0;
      pcVar15 = (char *)(uVar1 + 0x60);
      do {
        if (-1 < *(char *)(local_80 + uVar6)) {
          uVar20 = *(undefined8 *)(pcVar15 + -0x60);
          puVar19 = (undefined8 *)(uVar18 + (uVar6 ^ uVar9 + 1) * 0x68);
          puVar19[1] = *(undefined8 *)(pcVar15 + -0x58);
          *puVar19 = uVar20;
          uVar21 = *(undefined8 *)(pcVar15 + -0x48);
          uVar20 = *(undefined8 *)(pcVar15 + -0x50);
          puVar17 = puVar19 + 4;
          *(undefined1 *)puVar17 = 0;
          *(undefined1 *)(puVar19 + 0xc) = 0;
          puVar19[3] = uVar21;
          puVar19[2] = uVar20;
          if (*pcVar15 != '\0') {
            puVar19[5] = 0;
            *puVar17 = 0;
            puVar19[7] = 0;
            puVar19[6] = 0;
            puVar19[9] = 0;
            puVar19[8] = 0;
            puVar19[0xb] = 0;
            puVar19[10] = 0;
            FUN_005cab64(puVar17,pcVar15 + -0x40);
            *(undefined1 *)(puVar19 + 0xc) = 1;
            if (*pcVar15 != '\0') {
              pvVar7 = *(void **)(pcVar15 + -8);
              pcVar15[-8] = '\0';
              pcVar15[-7] = '\0';
              pcVar15[-6] = '\0';
              pcVar15[-5] = '\0';
              pcVar15[-4] = '\0';
              pcVar15[-3] = '\0';
              pcVar15[-2] = '\0';
              pcVar15[-1] = '\0';
              if (pvVar7 != (void *)0x0) {
                free(pvVar7);
              }
            }
          }
        }
        uVar6 = uVar6 + 1;
        pcVar15 = pcVar15 + 0x68;
      } while (uVar6 < local_78);
    }
    lVar14 = -9;
    if (local_70 == 0) {
      lVar14 = -8;
    }
    free((void *)(local_80 + lVar14));
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0049f330  FUN_0049f330 =====

bool FUN_0049f330(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *__s;
  ulong uVar5;
  
  uVar4 = param_2[2];
  plVar2 = (long *)FUN_00759c3c(uVar4 + 0x17 + uVar4 * 0x68 & 0xfffffffffffffff8);
  uVar5 = param_2[3];
  lVar1 = 6;
  if (uVar4 != 7) {
    lVar1 = uVar4 - (uVar4 >> 3);
  }
  uVar3 = *(ulong *)(param_1 + 8);
  __s = plVar2 + 1;
  *plVar2 = lVar1 - (uVar5 >> 1);
  *param_2 = __s;
  param_2[1] = (long)plVar2 + (uVar4 + 0x17 & 0xfffffffffffffff8);
  if ((uVar3 == 0) || (uVar4 >= 9 || uVar3 >= uVar4)) {
    memset(__s,0x80,uVar4 + 8);
    *(undefined1 *)((long)__s + uVar4) = 0xff;
  }
  else {
    FUN_00648700(param_1,__s,uVar4);
    uVar5 = param_2[3];
  }
  param_2[3] = uVar5 & 0xfffffffffffffffe;
  return uVar4 < 9 && uVar3 < uVar4;
}


// ===== 0049f3f8  FUN_0049f3f8 =====

void FUN_0049f3f8(long *param_1,long *param_2,byte *param_3,undefined8 param_4,undefined8 *param_5,
                 undefined8 *param_6)

{
  ulong uVar1;
  size_t __n;
  byte *pbVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  byte *pbVar11;
  long lVar12;
  undefined1 uVar13;
  ulong uVar14;
  long *plVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 uVar22;
  
  puVar16 = (ulong *)*param_2;
  Hint_Prefetch(*puVar16,0,2,0);
  uVar20 = *(ulong *)(param_3 + 8);
  pbVar2 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar2 = param_3 + 1;
    uVar20 = (ulong)(*param_3 >> 1);
  }
  lVar7 = FUN_0049e0f0(PTR_LOOP_007a1f58,pbVar2,uVar20);
  uVar1 = *puVar16;
  uVar3 = puVar16[1];
  __n = *(size_t *)(param_3 + 8);
  pbVar2 = *(byte **)(param_3 + 0x10);
  uVar19 = puVar16[2];
  lVar12 = 0;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = lVar7 + uVar20;
  if ((*param_3 & 1) == 0) {
    pbVar2 = param_3 + 1;
    __n = (ulong)(*param_3 >> 1);
  }
  uVar17 = SUB168(auVar4 * ZEXT816(0x9ddfea08eb382d69),8) ^ (lVar7 + uVar20) * -0x622015f714c7d297;
  uVar13 = (undefined1)uVar17;
  uVar21 = CONCAT17(uVar13,CONCAT16(uVar13,CONCAT15(uVar13,CONCAT14(uVar13,CONCAT13(uVar13,CONCAT12(
                                                  uVar13,CONCAT11(uVar13,uVar13))))))) &
           0x7f7f7f7f7f7f7f7f;
  uVar14 = (uVar17 >> 7 ^ uVar1 >> 0xc) & uVar19;
  uVar22 = *(undefined8 *)(uVar1 + uVar14);
  uVar20 = NEON_cmeq(uVar22,uVar21,1);
  do {
    while (uVar20 == 0) {
      lVar7 = NEON_cmeq(uVar22,0x8080808080808080,1);
      if (lVar7 != 0) {
        uVar18 = FUN_0049f638(puVar16,uVar17);
        uVar13 = 1;
        pbVar11 = (byte *)*param_5;
        plVar15 = (long *)(*(long *)(*param_2 + 8) + uVar18 * 0x68);
        pbVar2 = *(byte **)(pbVar11 + 0x10);
        bVar5 = (*pbVar11 & 1) == 0;
        if (bVar5) {
          pbVar2 = pbVar11 + 1;
        }
        plVar10 = (long *)*param_6;
        uVar20 = (ulong)(*pbVar11 >> 1);
        if (!bVar5) {
          uVar20 = *(ulong *)(pbVar11 + 8);
        }
        *plVar15 = (long)pbVar2;
        plVar15[1] = uVar20;
        lVar7 = plVar10[1];
        lVar12 = *plVar10;
        plVar8 = plVar15 + 4;
        *(undefined1 *)plVar8 = 0;
        *(undefined1 *)(plVar15 + 0xc) = 0;
        plVar15[3] = lVar7;
        plVar15[2] = lVar12;
        if ((char)plVar10[10] != '\0') {
          plVar15[5] = 0;
          *plVar8 = 0;
          plVar15[7] = 0;
          plVar15[6] = 0;
          plVar15[9] = 0;
          plVar15[8] = 0;
          plVar15[0xb] = 0;
          plVar15[10] = 0;
          FUN_005cab64(plVar8,plVar10 + 2);
          *(undefined1 *)(plVar15 + 0xc) = 1;
        }
LAB_0049f5f0:
        lVar12 = ((long *)*param_2)[1];
        *param_1 = *(long *)*param_2 + uVar18;
        param_1[1] = lVar12 + uVar18 * 0x68;
        *(undefined1 *)(param_1 + 2) = uVar13;
        return;
      }
      lVar12 = lVar12 + 8;
      uVar14 = lVar12 + uVar14 & uVar19;
      uVar22 = *(undefined8 *)(uVar1 + uVar14);
      uVar20 = NEON_cmeq(uVar22,uVar21,1);
    }
    uVar18 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
    uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
    uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
    uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
    uVar18 = uVar14 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3) & uVar19;
    puVar9 = (undefined8 *)(uVar3 + uVar18 * 0x68);
    if ((puVar9[1] == __n) && (iVar6 = memcmp((void *)*puVar9,pbVar2,__n), iVar6 == 0)) {
      uVar13 = 0;
      goto LAB_0049f5f0;
    }
    uVar20 = (uVar20 & 0x8080808080808080) - 1 & uVar20 & 0x8080808080808080;
  } while( true );
}


// ===== 0049f638  FUN_0049f638 =====

ulong FUN_0049f638(ulong *param_1,ulong param_2)

{
  char cVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  uVar4 = *param_1;
  uVar7 = param_1[2];
  uVar3 = (uVar4 >> 0xc ^ param_2 >> 7) & uVar7;
  uVar5 = *(ulong *)(uVar4 + uVar3) & (*(ulong *)(uVar4 + uVar3) << 7 ^ 0xffffffffffffffff) &
          0x8080808080808080;
  if (uVar5 == 0) {
    lVar6 = 8;
    do {
      uVar3 = uVar3 + lVar6;
      lVar6 = lVar6 + 8;
      uVar3 = uVar3 & uVar7;
      uVar5 = *(ulong *)(uVar4 + uVar3) & (*(ulong *)(uVar4 + uVar3) << 7 ^ 0xffffffffffffffff) &
              0x8080808080808080;
    } while (uVar5 == 0);
  }
  uVar5 = (uVar5 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar5 >> 7 & 0xff00ff00ff00ff) << 8;
  uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
  uVar3 = uVar3 + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3) & uVar7;
  if ((*(long *)(uVar4 - 8) == 0) && (*(char *)(uVar4 + uVar3) != -2)) {
    FUN_0049f73c();
    uVar3 = FUN_0049f7dc(param_1,uVar7,param_2);
    uVar4 = *param_1;
  }
  uVar5 = param_1[3];
  cVar1 = *(char *)(uVar4 + uVar3);
  bVar2 = (byte)param_2 & 0x7f;
  *(byte *)(uVar4 + uVar3) = bVar2;
  param_1[3] = uVar5 + 2;
  *(ulong *)(uVar4 - 8) = *(long *)(uVar4 - 8) - (ulong)(cVar1 == -0x80);
  *(byte *)(uVar4 + (param_1[2] & uVar3 - 7) + (param_1[2] & 7)) = bVar2;
  return uVar3;
}


// ===== 0049f73c  FUN_0049f73c =====

void FUN_0049f73c(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_90 [104];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = *(ulong *)(param_1 + 0x10);
  if ((uVar2 < 9) ||
     (uVar3 = (*(ulong *)(param_1 + 0x18) & 0xffffffffffffffe) * 0x10,
     uVar2 * 0x19 <= uVar3 && uVar3 + uVar2 * -0x19 != 0)) {
    if (*(long *)(lVar1 + 0x28) == local_28) {
      FUN_0049f098(param_1,uVar2 << 1 | 1);
      return;
    }
  }
  else {
    FUN_00648380(param_1,PTR_DAT_007a1ee0,auStack_90);
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0049f7dc  FUN_0049f7dc =====

undefined1  [16] FUN_0049f7dc(ulong *param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  uVar5 = *param_1;
  uVar4 = param_1[2];
  uVar3 = (uVar5 >> 0xc ^ param_3 >> 7) & uVar4;
  if ((uVar4 < 9) && (param_2 < uVar4)) {
    if (param_2 <= uVar3 + ~param_2) {
      uVar3 = param_2 >> 1;
    }
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar3;
    return auVar6;
  }
  lVar1 = 0;
  uVar2 = *(ulong *)(uVar5 + uVar3) & (*(ulong *)(uVar5 + uVar3) << 7 ^ 0xffffffffffffffff);
  while ((uVar2 & 0x8080808080808080) == 0) {
    lVar1 = lVar1 + 8;
    uVar3 = lVar1 + uVar3 & uVar4;
    uVar2 = *(ulong *)(uVar5 + uVar3) & (*(ulong *)(uVar5 + uVar3) << 7 ^ 0xffffffffffffffff);
  }
  uVar5 = (uVar2 & 0x8080808080808080) >> 7;
  uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
  uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
  auVar7._0_8_ = uVar3 + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3) & uVar4;
  auVar7._8_8_ = lVar1;
  return auVar7;
}


// ===== 0049f864  FUN_0049f864 =====

ulong FUN_0049f864(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  long lVar4;
  
  lVar2 = param_2[1];
  lVar4 = FUN_0049e0f0(&PTR_LOOP_00797d18,*param_2,lVar2);
  uVar1 = lVar4 + lVar2;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar1;
  return SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar1 * -0x622015f714c7d297;
}


// ===== 0049f8b4  FUN_0049f8b4 =====

void FUN_0049f8b4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  void *__ptr;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_3;
  param_2[1] = param_3[1];
  *param_2 = uVar2;
  uVar3 = param_3[3];
  uVar2 = param_3[2];
  puVar1 = param_2 + 4;
  *(undefined1 *)puVar1 = 0;
  *(undefined1 *)(param_2 + 0xc) = 0;
  param_2[3] = uVar3;
  param_2[2] = uVar2;
  if (*(char *)(param_3 + 0xc) != '\0') {
    param_2[5] = 0;
    *puVar1 = 0;
    param_2[7] = 0;
    param_2[6] = 0;
    param_2[9] = 0;
    param_2[8] = 0;
    param_2[0xb] = 0;
    param_2[10] = 0;
    FUN_005cab64(puVar1,param_3 + 4);
    *(undefined1 *)(param_2 + 0xc) = 1;
    if (*(char *)(param_3 + 0xc) != '\0') {
      __ptr = (void *)param_3[0xb];
      param_3[0xb] = 0;
      if (__ptr != (void *)0x0) {
        free(__ptr);
        return;
      }
    }
  }
  return;
}


// ===== 0049f934  FUN_0049f934 =====

void FUN_0049f934(long *param_1)

{
  free((void *)((*param_1 - (param_1[3] & 1U)) + -8));
  return;
}


// ===== 0049f94c  FUN_0049f94c =====

void FUN_0049f94c(void *param_1)

{
  FUN_0073a234();
  free(param_1);
  return;
}


// ===== 0049f970  FUN_0049f970 =====

void FUN_0049f970(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) != '\0') {
                    /* try { // try from 0049f984 to 0049f987 has its CatchHandler @ 0049f990 */
    FUN_00707c00(*param_1);
  }
  return;
}


// ===== 0049f994  FUN_0049f994 =====

void FUN_0049f994(long *param_1,long *param_2,undefined8 *param_3)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *__ptr;
  undefined8 local_60 [3];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar3 = param_1[1];
  if (lVar3 != 0) {
    lVar4 = 0;
    do {
      *(undefined8 *)(*param_1 + lVar4 * 8) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar3 != lVar4);
    __ptr = (long *)param_1[2];
    param_1[2] = 0;
    param_1[3] = 0;
    while (__ptr != (long *)0x0) {
      if (param_2 == param_3) goto LAB_0049fa6c;
                    /* try { // try from 0049f9f8 to 0049fa0f has its CatchHandler @ 0049facc */
      FUN_007139b0(__ptr + 2,param_2 + 2);
      FUN_007139b0(__ptr + 5,param_2 + 5);
      lVar3 = *__ptr;
                    /* try { // try from 0049fa14 to 0049fa1f has its CatchHandler @ 0049fac8 */
      FUN_0049fb28(param_1,__ptr);
      param_2 = (long *)*param_2;
      __ptr = (long *)lVar3;
    }
  }
  for (; param_2 != param_3; param_2 = (long *)*param_2) {
    FUN_004a0314(local_60,param_1,param_2 + 2);
                    /* try { // try from 0049fa50 to 0049fa57 has its CatchHandler @ 0049faf0 */
    FUN_0049fb28(param_1,local_60[0]);
  }
LAB_0049faa0:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0049fa6c:
  do {
    plVar5 = (long *)*__ptr;
    if ((*(byte *)(__ptr + 5) & 1) == 0) {
      bVar1 = *(byte *)(__ptr + 2);
    }
    else {
      free((void *)__ptr[7]);
      bVar1 = *(byte *)(__ptr + 2);
    }
    if ((bVar1 & 1) != 0) {
      free((void *)__ptr[4]);
    }
    free(__ptr);
    __ptr = plVar5;
  } while (plVar5 != (long *)0x0);
  goto LAB_0049faa0;
}


// ===== 0049fb28  FUN_0049fb28 =====

long FUN_0049fb28(long *param_1,long *param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  undefined1 uStack_39;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  bVar1 = *(byte *)(param_2 + 2);
  uVar5 = param_2[3];
  lVar3 = param_2[4];
  if ((bVar1 & 1) == 0) {
    lVar3 = (long)param_2 + 0x11;
    uVar5 = (ulong)(bVar1 >> 1);
  }
                    /* try { // try from 0049fb6c to 0049fb77 has its CatchHandler @ 0049fc98 */
  lVar3 = FUN_0034bfb4(&uStack_39,lVar3,uVar5);
  param_2[1] = lVar3;
  plVar4 = (long *)FUN_0049fc9c(param_1,lVar3,param_2 + 2);
  uVar5 = param_1[1];
  uVar6 = param_2[1];
  uVar10 = NEON_cnt(uVar5,1);
  uVar9 = NEON_uaddlv(uVar10,1);
  uVar7 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
  if (uVar7 < 2) {
    uVar6 = uVar5 - 1 & uVar6;
  }
  else if (uVar5 <= uVar6) {
    uVar8 = 0;
    if (uVar5 != 0) {
      uVar8 = uVar6 / uVar5;
    }
    uVar6 = uVar6 - uVar8 * uVar5;
  }
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    *param_2 = *plVar4;
    *plVar4 = (long)param_2;
    *(long **)(*param_1 + uVar6 * 8) = plVar4;
    if (*param_2 == 0) goto LAB_0049fc60;
    uVar8 = *(ulong *)(*param_2 + 8);
    if (uVar7 < 2) {
      uVar8 = uVar8 & uVar5 - 1;
    }
    else if (uVar5 <= uVar8) {
      uVar6 = 0;
      if (uVar5 != 0) {
        uVar6 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar6 * uVar5;
    }
  }
  else {
    *param_2 = *plVar4;
    *plVar4 = (long)param_2;
    if (*param_2 == 0) goto LAB_0049fc60;
    uVar8 = *(ulong *)(*param_2 + 8);
    if (uVar7 < 2) {
      uVar8 = uVar8 & uVar5 - 1;
    }
    else if (uVar5 <= uVar8) {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar7 * uVar5;
    }
    if (uVar8 == uVar6) goto LAB_0049fc60;
  }
  *(long **)(*param_1 + uVar8 * 8) = param_2;
LAB_0049fc60:
  param_1[3] = param_1[3] + 1;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return (long)param_2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0049fc9c  FUN_0049fc9c =====

long * FUN_0049fc9c(long *param_1,ulong param_2,byte *param_3)

{
  bool bVar1;
  size_t sVar2;
  size_t sVar3;
  byte *__s2;
  byte bVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  byte bVar15;
  undefined2 uVar16;
  undefined8 uVar17;
  
  uVar12 = param_1[1];
  if ((uVar12 != 0) && ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)uVar12)) {
    uVar17 = NEON_cnt(uVar12,1);
    uVar16 = NEON_uaddlv(uVar17,1);
    uVar7 = CONCAT62((int6)((ulong)uVar17 >> 0x10),uVar16);
    goto joined_r0x0049fe18;
  }
  if (uVar12 < 3) {
    uVar7 = 1;
  }
  else {
    uVar7 = (ulong)((uVar12 & uVar12 - 1) != 0);
  }
  uVar7 = uVar7 | uVar12 << 1;
  uVar13 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (uVar7 <= uVar13) {
    uVar7 = uVar13;
  }
  if (uVar7 - 1 == 0) {
    uVar7 = 2;
  }
  else if ((uVar7 & uVar7 - 1) != 0) {
    uVar7 = FUN_00711ce0(uVar7);
    uVar12 = param_1[1];
  }
  if (uVar12 < uVar7) {
LAB_0049fd70:
    FUN_004a0004(param_1);
  }
  else if (uVar7 < uVar12) {
    uVar13 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if (uVar12 < 3) {
LAB_0049fde4:
      uVar13 = FUN_00711ce0();
      if (uVar7 <= uVar13) {
        uVar7 = uVar13;
      }
    }
    else {
      uVar17 = NEON_cnt(uVar12,1);
      uVar16 = NEON_uaddlv(uVar17,1);
      if (1 < (CONCAT62((int6)((ulong)uVar17 >> 0x10),uVar16) & 0xffffffff)) goto LAB_0049fde4;
      if (1 < uVar13) {
        uVar13 = 1L << (-LZCOUNT(uVar13 - 1) & 0x3fU);
      }
      if (uVar7 <= uVar13) {
        uVar7 = uVar13;
      }
    }
    if (uVar7 < uVar12) goto LAB_0049fd70;
  }
  uVar12 = param_1[1];
  uVar17 = NEON_cnt(uVar12,1);
  uVar16 = NEON_uaddlv(uVar17,1);
  uVar7 = CONCAT62((int6)((ulong)uVar17 >> 0x10),uVar16);
joined_r0x0049fe18:
  if ((uVar7 & 0xffffffff) < 2) {
    uVar13 = uVar12 - 1 & param_2;
  }
  else {
    uVar13 = param_2;
    if (uVar12 <= param_2) {
      uVar13 = 0;
      if (uVar12 != 0) {
        uVar13 = param_2 / uVar12;
      }
      uVar13 = param_2 - uVar13 * uVar12;
    }
  }
  plVar14 = *(long **)(*param_1 + uVar13 * 8);
  if (plVar14 == (long *)0x0) {
    plVar11 = (long *)0x0;
  }
  else {
    sVar3 = *(size_t *)(param_3 + 8);
    __s2 = *(byte **)(param_3 + 0x10);
    if ((*param_3 & 1) == 0) {
      __s2 = param_3 + 1;
      sVar3 = (ulong)(*param_3 >> 1);
    }
    if ((uVar7 & 0xffffffff) < 2) {
      bVar15 = 0;
      do {
        plVar11 = plVar14;
        plVar14 = (long *)*plVar11;
        if (plVar14 == (long *)0x0) {
          return plVar11;
        }
        if ((plVar14[1] & uVar12 - 1) != uVar13) {
          return plVar11;
        }
        if (plVar14[1] == param_2) {
          bVar4 = *(byte *)(plVar14 + 2);
          uVar7 = (ulong)(bVar4 >> 1);
          sVar2 = uVar7;
          if ((bVar4 & 1) != 0) {
            sVar2 = plVar14[3];
          }
          if (sVar2 != sVar3) goto LAB_0049fe68;
          if ((bVar4 & 1) == 0) {
            if (bVar4 < 2) {
              bVar5 = true;
            }
            else {
              pbVar9 = (byte *)((long)plVar14 + 0x11);
              pbVar10 = __s2;
              do {
                uVar7 = uVar7 - 1;
                bVar5 = *pbVar9 == *pbVar10;
                if (!bVar5) break;
                pbVar9 = pbVar9 + 1;
                pbVar10 = pbVar10 + 1;
              } while (uVar7 != 0);
            }
          }
          else {
            iVar6 = memcmp((void *)plVar14[4],__s2,plVar14[3]);
            bVar5 = iVar6 == 0;
          }
        }
        else {
LAB_0049fe68:
          bVar5 = false;
        }
        bVar1 = (bool)(bVar15 & (bVar5 ^ 1U));
        bVar15 = bVar15 | bVar5;
      } while (!bVar1);
    }
    else {
      bVar15 = 0;
      do {
        plVar11 = plVar14;
        plVar14 = (long *)*plVar11;
        if (plVar14 == (long *)0x0) {
          return plVar11;
        }
        uVar8 = plVar14[1];
        uVar7 = uVar8;
        if (uVar12 <= uVar8) {
          uVar7 = 0;
          if (uVar12 != 0) {
            uVar7 = uVar8 / uVar12;
          }
          uVar7 = uVar8 - uVar7 * uVar12;
        }
        if (uVar7 != uVar13) {
          return plVar11;
        }
        if (uVar8 == param_2) {
          bVar4 = *(byte *)(plVar14 + 2);
          uVar7 = (ulong)(bVar4 >> 1);
          sVar2 = uVar7;
          if ((bVar4 & 1) != 0) {
            sVar2 = plVar14[3];
          }
          if (sVar2 != sVar3) goto LAB_0049ff40;
          if ((bVar4 & 1) == 0) {
            if (bVar4 < 2) {
              bVar5 = true;
            }
            else {
              pbVar9 = (byte *)((long)plVar14 + 0x11);
              pbVar10 = __s2;
              do {
                uVar7 = uVar7 - 1;
                bVar5 = *pbVar9 == *pbVar10;
                if (!bVar5) break;
                pbVar9 = pbVar9 + 1;
                pbVar10 = pbVar10 + 1;
              } while (uVar7 != 0);
            }
          }
          else {
            iVar6 = memcmp((void *)plVar14[4],__s2,plVar14[3]);
            bVar5 = iVar6 == 0;
          }
        }
        else {
LAB_0049ff40:
          bVar5 = false;
        }
        bVar1 = (bool)(bVar15 & (bVar5 ^ 1U));
        bVar15 = bVar15 | bVar5;
      } while (!bVar1);
    }
  }
  return plVar11;
}


// ===== 004a0004  FUN_004a0004 =====

void FUN_004a0004(long *param_1,ulong param_2)

{
  void *__s2;
  byte bVar1;
  ulong uVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  void *pvVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  char *pcVar13;
  char *pcVar14;
  ulong uVar15;
  size_t __n;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  undefined2 uVar20;
  undefined8 uVar21;
  
  if (param_2 == 0) {
    pvVar6 = (void *)*param_1;
    *param_1 = 0;
    if (pvVar6 != (void *)0x0) {
      free(pvVar6);
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_002f9ee0();
    }
    lVar5 = FUN_00759c3c(param_2 << 3);
    pvVar6 = (void *)*param_1;
    *param_1 = lVar5;
    if (pvVar6 != (void *)0x0) {
      free(pvVar6);
    }
    uVar7 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar7 * 8) = 0;
      uVar7 = uVar7 + 1;
    } while (param_2 != uVar7);
    plVar18 = (long *)param_1[2];
    if (plVar18 != (long *)0x0) {
      uVar7 = plVar18[1];
      uVar21 = NEON_cnt(param_2,1);
      uVar20 = NEON_uaddlv(uVar21,1);
      uVar11 = CONCAT62((int6)((ulong)uVar21 >> 0x10),uVar20) & 0xffffffff;
      if (uVar11 < 2) {
        uVar7 = uVar7 & param_2 - 1;
      }
      else if (param_2 <= uVar7) {
        uVar19 = 0;
        if (param_2 != 0) {
          uVar19 = uVar7 / param_2;
        }
        uVar7 = uVar7 - uVar19 * param_2;
      }
      *(long **)(*param_1 + uVar7 * 8) = param_1 + 2;
      plVar17 = (long *)*plVar18;
      if (plVar17 != (long *)0x0) {
        do {
          uVar19 = plVar17[1];
          if (uVar11 < 2) {
            uVar19 = uVar19 & param_2 - 1;
          }
          else if (param_2 <= uVar19) {
            uVar2 = 0;
            if (param_2 != 0) {
              uVar2 = uVar19 / param_2;
            }
            uVar19 = uVar19 - uVar2 * param_2;
          }
          plVar8 = plVar17;
          if (uVar19 != uVar7) {
            if (*(long *)(*param_1 + uVar19 * 8) == 0) {
              *(long **)(*param_1 + uVar19 * 8) = plVar18;
              uVar7 = uVar19;
            }
            else {
              plVar8 = (long *)*plVar17;
              plVar16 = plVar17;
              if (plVar8 != (long *)0x0) {
                bVar1 = *(byte *)(plVar17 + 2);
                __n = plVar17[3];
                uVar10 = (ulong)(bVar1 >> 1);
                uVar2 = uVar10;
                if ((bVar1 & 1) != 0) {
                  uVar2 = __n;
                }
                if ((bVar1 & 1) == 0) {
                  if (bVar1 < 2) {
                    uVar15 = (ulong)(*(byte *)(plVar8 + 2) >> 1);
                    if ((*(byte *)(plVar8 + 2) & 1) != 0) {
                      uVar15 = plVar8[3];
                    }
                    if (uVar15 == uVar10) {
                      do {
                        plVar16 = plVar8;
                        plVar8 = (long *)*plVar16;
                        if (plVar8 == (long *)0x0) break;
                        uVar10 = (ulong)(*(byte *)(plVar8 + 2) >> 1);
                        if ((*(byte *)(plVar8 + 2) & 1) != 0) {
                          uVar10 = plVar8[3];
                        }
                      } while (uVar2 == uVar10);
                    }
                  }
                  else {
                    plVar9 = plVar8;
                    while( true ) {
                      plVar12 = plVar9;
                      bVar1 = *(byte *)(plVar12 + 2);
                      uVar15 = (ulong)(bVar1 >> 1);
                      if ((bVar1 & 1) != 0) {
                        uVar15 = plVar12[3];
                      }
                      plVar8 = plVar12;
                      if (uVar2 != uVar15) break;
                      pcVar13 = (char *)((long)plVar12 + 0x11);
                      pcVar14 = (char *)((long)plVar17 + 0x11);
                      uVar15 = uVar10;
                      if ((bVar1 & 1) != 0) {
                        pcVar13 = (char *)plVar12[4];
                      }
                      do {
                        if (*pcVar14 != *pcVar13) goto LAB_004a023c;
                        uVar15 = uVar15 - 1;
                        pcVar13 = pcVar13 + 1;
                        pcVar14 = pcVar14 + 1;
                      } while (uVar15 != 0);
                      plVar8 = (long *)0x0;
                      plVar9 = (long *)*plVar12;
                      plVar16 = plVar12;
                      if ((long *)*plVar12 == (long *)0x0) break;
                    }
                  }
                }
                else {
                  bVar3 = (*(byte *)(plVar8 + 2) & 1) == 0;
                  uVar10 = (ulong)(*(byte *)(plVar8 + 2) >> 1);
                  if (!bVar3) {
                    uVar10 = plVar8[3];
                  }
                  if (uVar2 == uVar10) {
                    pvVar6 = (void *)plVar17[4];
                    do {
                      plVar9 = plVar8;
                      __s2 = (void *)((long)plVar9 + 0x11);
                      if (!bVar3) {
                        __s2 = (void *)plVar9[4];
                      }
                      iVar4 = memcmp(pvVar6,__s2,__n);
                      plVar8 = plVar9;
                      if ((iVar4 != 0) ||
                         (plVar8 = (long *)*plVar9, plVar16 = plVar9, plVar8 == (long *)0x0)) break;
                      bVar3 = (*(byte *)(plVar8 + 2) & 1) == 0;
                      uVar10 = (ulong)(*(byte *)(plVar8 + 2) >> 1);
                      if (!bVar3) {
                        uVar10 = plVar8[3];
                      }
                    } while (uVar2 == uVar10);
                  }
                }
              }
LAB_004a023c:
              *plVar18 = (long)plVar8;
              *plVar16 = **(long **)(*param_1 + uVar19 * 8);
              **(undefined8 **)(*param_1 + uVar19 * 8) = plVar17;
              plVar8 = plVar18;
            }
          }
          plVar17 = (long *)*plVar8;
          plVar18 = plVar8;
        } while (plVar17 != (long *)0x0);
      }
    }
  }
  return;
}


// ===== 004a0314  FUN_004a0314 =====

void FUN_004a0314(undefined8 *param_1,long param_2,byte *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 uStack_49;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  puVar7 = (undefined8 *)FUN_00759c3c(0x40);
  bVar4 = *param_3;
  *param_1 = puVar7;
  param_1[1] = param_2 + 0x10;
  *(undefined1 *)(param_1 + 2) = 0;
  *puVar7 = 0;
  puVar7[1] = 0;
  if ((bVar4 & 1) == 0) {
    uVar9 = *(undefined8 *)param_3;
    uVar8 = *(undefined8 *)(param_3 + 0x10);
    puVar7[3] = *(undefined8 *)(param_3 + 8);
    puVar7[2] = uVar9;
    puVar7[4] = uVar8;
  }
  else {
                    /* try { // try from 004a037c to 004a0383 has its CatchHandler @ 004a0420 */
    FUN_002fb36c(puVar7 + 2,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 8));
  }
  if ((param_3[0x18] & 1) == 0) {
    uVar9 = *(undefined8 *)(param_3 + 0x18);
    uVar8 = *(undefined8 *)(param_3 + 0x28);
    puVar7[6] = *(undefined8 *)(param_3 + 0x20);
    puVar7[5] = uVar9;
    puVar7[7] = uVar8;
  }
  else {
                    /* try { // try from 004a03a8 to 004a03af has its CatchHandler @ 004a0408 */
    FUN_002fb36c(puVar7 + 5,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x20));
  }
  bVar4 = *(byte *)(puVar7 + 2);
  uVar2 = puVar7[3];
  lVar3 = puVar7[4];
  *(undefined1 *)(param_1 + 2) = 1;
  uVar1 = (ulong)(bVar4 >> 1);
  lVar6 = (long)puVar7 + 0x11;
  if ((bVar4 & 1) != 0) {
    uVar1 = uVar2;
    lVar6 = lVar3;
  }
                    /* try { // try from 004a03d4 to 004a03db has its CatchHandler @ 004a0448 */
  uVar8 = FUN_0034bfb4(&uStack_49,lVar6,uVar1);
  puVar7[1] = uVar8;
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004a044c  FUN_004a044c =====

void FUN_004a044c(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  
  uVar2 = *param_1;
  puVar3 = param_1 + 1;
  uVar1 = uVar2 & 1;
  puVar4 = puVar3;
  if (uVar1 != 0) {
    puVar4 = (ulong *)*puVar3;
  }
  if (1 < uVar2) {
    uVar2 = uVar2 >> 1;
    puVar4 = puVar4 + uVar2 * 3 + -1;
    do {
      if ((puVar4[-2] & 1) != 0) {
        free((void *)*puVar4);
      }
      uVar2 = uVar2 - 1;
      puVar4 = puVar4 + -3;
    } while (uVar2 != 0);
    uVar1 = *param_1 & 1;
  }
  if (uVar1 != 0) {
    free((void *)*puVar3);
    return;
  }
  return;
}


// ===== 004a04e0  FUN_004a04e0 =====

void FUN_004a04e0(ulong *param_1,ulong param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar5 = *param_1;
  uVar7 = uVar5 & 1;
  puVar6 = param_1 + 1;
  uVar2 = 2;
  if (uVar7 != 0) {
    puVar6 = (ulong *)param_1[1];
    uVar2 = param_1[2];
  }
  if (uVar2 < param_2) {
    uVar2 = uVar2 * 2;
    if (uVar2 < param_2 || uVar2 - param_2 == 0) {
      uVar2 = param_2;
    }
    if (0xaaaaaaaaaaaaaaa < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_002f9ee0();
    }
    puVar1 = (ulong *)FUN_00759c3c(uVar2 * 0x18);
    if (1 < uVar5) {
      uVar5 = uVar5 >> 1;
      puVar3 = puVar1;
      uVar7 = uVar5;
      puVar4 = puVar6;
      do {
        uVar9 = puVar4[1];
        uVar8 = *puVar4;
        uVar7 = uVar7 - 1;
        puVar3[2] = puVar4[2];
        puVar3[1] = uVar9;
        *puVar3 = uVar8;
        puVar4[1] = 0;
        puVar4[2] = 0;
        *puVar4 = 0;
        puVar3 = puVar3 + 3;
        puVar4 = puVar4 + 3;
      } while (uVar7 != 0);
      puVar6 = puVar6 + uVar5 * 3 + -1;
      do {
        if ((puVar6[-2] & 1) != 0) {
          free((void *)*puVar6);
        }
        uVar5 = uVar5 - 1;
        puVar6 = puVar6 + -3;
      } while (uVar5 != 0);
      uVar5 = *param_1;
      uVar7 = uVar5 & 1;
    }
    if (uVar7 != 0) {
      free((void *)param_1[1]);
      uVar5 = *param_1;
    }
    param_1[1] = (ulong)puVar1;
    param_1[2] = uVar2;
    *param_1 = uVar5 | 1;
  }
  return;
}


// ===== 004a05f4  FUN_004a05f4 =====

void FUN_004a05f4(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_004a05f4(param_1,*param_2);
    FUN_004a05f4(param_1,param_2[1]);
    free(param_2);
    return;
  }
  return;
}


// ===== 004a0638  FUN_004a0638 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_004a0638(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  size_t sVar5;
  long lVar6;
  char *__s;
  undefined *local_170 [9];
  ulong local_128;
  undefined8 uStack_120;
  void *local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined *local_100 [3];
  undefined8 uStack_e8;
  undefined4 auStack_e0 [4];
  undefined8 local_d0;
  long local_68;
  
  puVar4 = PTR_PTR_007a1e48;
  puVar3 = PTR_DAT_007a1e40;
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  puVar1 = PTR_DAT_007a1e40 + 0x40;
  local_170[0] = *(undefined **)(PTR_PTR_007a1e48 + 8);
  local_d0 = 0;
  local_100[0] = puVar1;
  *(undefined8 *)((long)local_170 + *(long *)(local_170[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_007a1e48 + 0x10);
  lVar6 = *(long *)(local_170[0] + -0x18);
                    /* try { // try from 004a06ac to 004a06b7 has its CatchHandler @ 004a07dc */
  FUN_00715fc0((long)local_170 + lVar6,local_170 + 1);
  local_170[0] = puVar3 + 0x18;
  *(undefined8 *)((long)&uStack_e8 + lVar6) = 0;
  *(undefined4 *)((long)auStack_e0 + lVar6) = 0xffffffff;
                    /* try { // try from 004a06d0 to 004a06d7 has its CatchHandler @ 004a07bc */
  local_100[0] = puVar1;
  FUN_007160dc(local_170 + 1);
  puVar1 = PTR_DAT_007a10f8;
  __s = (char *)*param_2;
  local_170[1] = PTR_DAT_007a10f8 + 0x10;
  uStack_120 = 0;
  local_128 = 0;
  uStack_110 = 0;
  local_118 = (void *)0x0;
  local_108 = 0x10;
  sVar5 = strlen(__s);
                    /* try { // try from 004a070c to 004a0717 has its CatchHandler @ 004a07b8 */
  FUN_00303e0c(local_170,__s,sVar5);
                    /* try { // try from 004a071c to 004a0723 has its CatchHandler @ 004a07b4 */
  FUN_00717214(local_170,*param_3);
                    /* try { // try from 004a0724 to 004a072f has its CatchHandler @ 004a07b0 */
  FUN_00718470(param_1,local_170 + 1);
  local_170[0] = *(undefined **)puVar4;
  *(undefined8 *)((long)local_170 + *(long *)(local_170[0] + -0x18)) =
       *(undefined8 *)(puVar4 + 0x18);
  local_170[1] = puVar1 + 0x10;
  if ((local_128 & 1) != 0) {
    free(local_118);
  }
  FUN_00716098(local_170 + 1);
  FUN_00716ee4(local_170,puVar4 + 8);
  thunk_FUN_00715e00(local_100);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a07f0  FUN_004a07f0 =====

void FUN_004a07f0(void)

{
  return;
}


// ===== 004a07f4  FUN_004a07f4 =====

void FUN_004a07f4(void)

{
  return;
}


// ===== 004a07f8  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004a07fc  FUN_004a07fc =====

void FUN_004a07fc(long param_1,undefined8 param_2,byte *param_3,long param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  byte bVar6;
  long lVar7;
  byte bVar8;
  undefined8 uVar9;
  byte *pbVar10;
  byte local_98;
  undefined1 auStack_97 [15];
  undefined1 *local_88;
  byte local_80;
  undefined1 auStack_7f [15];
  undefined1 *local_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  FUN_00475ff4(&local_80,param_4 + 0x20,0);
  puVar1 = local_70;
  bVar8 = local_80;
  pcVar3 = *(code **)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = *(undefined4 *)(param_4 + 8);
  uVar9 = *(undefined8 *)(param_4 + 0x10);
  bVar6 = *param_3;
  pbVar10 = *(byte **)(param_3 + 0x10);
                    /* try { // try from 004a0864 to 004a0873 has its CatchHandler @ 004a097c */
  FUN_00718470(&local_98,param_4 + 0x78);
  if ((bVar8 & 1) == 0) {
    puVar1 = auStack_7f;
  }
  if ((bVar6 & 1) == 0) {
    pbVar10 = param_3 + 1;
  }
  puVar2 = local_88;
  if ((local_98 & 1) == 0) {
    puVar2 = auStack_97;
  }
                    /* try { // try from 004a0898 to 004a08a7 has its CatchHandler @ 004a091c */
  (*pcVar3)(uVar4,uVar5,uVar9,pbVar10,puVar1,puVar2);
  if ((local_98 & 1) != 0) {
    free(local_88);
  }
  if ((local_80 & 1) == 0) {
    if (*(long *)(lVar7 + 0x28) == local_68) {
      return;
    }
  }
  else {
    free(local_70);
    if (*(long *)(lVar7 + 0x28) == local_68) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a0980  FUN_004a0980 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_004a0980(undefined8 param_1,undefined8 *param_2,byte *param_3)

{
  undefined *puVar1;
  ulong uVar2;
  byte *pbVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  size_t sVar7;
  long lVar8;
  char *__s;
  undefined *local_170 [9];
  ulong local_128;
  undefined8 uStack_120;
  void *local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined *local_100 [3];
  undefined8 uStack_e8;
  undefined4 auStack_e0 [4];
  undefined8 local_d0;
  long local_68;
  
  puVar6 = PTR_PTR_007a1e48;
  puVar5 = PTR_DAT_007a1e40;
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  puVar1 = PTR_DAT_007a1e40 + 0x40;
  local_170[0] = *(undefined **)(PTR_PTR_007a1e48 + 8);
  local_d0 = 0;
  local_100[0] = puVar1;
  *(undefined8 *)((long)local_170 + *(long *)(local_170[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_007a1e48 + 0x10);
  lVar8 = *(long *)(local_170[0] + -0x18);
                    /* try { // try from 004a09f4 to 004a09ff has its CatchHandler @ 004a0b38 */
  FUN_00715fc0((long)local_170 + lVar8,local_170 + 1);
  local_170[0] = puVar5 + 0x18;
  *(undefined8 *)((long)&uStack_e8 + lVar8) = 0;
  *(undefined4 *)((long)auStack_e0 + lVar8) = 0xffffffff;
                    /* try { // try from 004a0a18 to 004a0a1f has its CatchHandler @ 004a0b18 */
  local_100[0] = puVar1;
  FUN_007160dc(local_170 + 1);
  puVar1 = PTR_DAT_007a10f8;
  __s = (char *)*param_2;
  local_170[1] = PTR_DAT_007a10f8 + 0x10;
  uStack_120 = 0;
  local_128 = 0;
  uStack_110 = 0;
  local_118 = (void *)0x0;
  local_108 = 0x10;
  sVar7 = strlen(__s);
                    /* try { // try from 004a0a54 to 004a0a5f has its CatchHandler @ 004a0b14 */
  FUN_00303e0c(local_170,__s,sVar7);
  uVar2 = *(ulong *)(param_3 + 8);
  pbVar3 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar3 = param_3 + 1;
    uVar2 = (ulong)(*param_3 >> 1);
  }
                    /* try { // try from 004a0a78 to 004a0a7f has its CatchHandler @ 004a0b10 */
  FUN_00303e0c(local_170,pbVar3,uVar2);
                    /* try { // try from 004a0a80 to 004a0a8b has its CatchHandler @ 004a0b0c */
  FUN_00718470(param_1,local_170 + 1);
  local_170[0] = *(undefined **)puVar6;
  *(undefined8 *)((long)local_170 + *(long *)(local_170[0] + -0x18)) =
       *(undefined8 *)(puVar6 + 0x18);
  local_170[1] = puVar1 + 0x10;
  if ((local_128 & 1) != 0) {
    free(local_118);
  }
  FUN_00716098(local_170 + 1);
  FUN_00716ee4(local_170,puVar6 + 8);
  thunk_FUN_00715e00(local_100);
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a0b4c  FUN_004a0b4c =====

void FUN_004a0b4c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  byte local_210 [16];
  void *local_200;
  byte local_1f0;
  void *local_1e0;
  byte *local_1d8;
  byte *local_1d0;
  undefined1 auStack_1c0 [112];
  undefined1 auStack_150 [264];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  puVar8 = *(undefined8 **)*param_1;
  lVar6 = puVar8[1];
  FUN_00637fa4(*(undefined1 *)*puVar8);
  lVar6 = *(long *)(lVar6 + 8);
  if (*(int *)(lVar6 + 0x20) < 2) {
    uVar7 = *(undefined8 *)PTR_PTR_s_onnxruntime_007a1f28;
    FUN_0048a3f4(local_210,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                 ,0x1b1,"operator()");
                    /* try { // try from 004a0bbc to 004a0bdb has its CatchHandler @ 004a0cb8 */
    FUN_0048a554(auStack_1c0,lVar6,1,uVar7,0,local_210);
                    /* try { // try from 004a0bdc to 004a0c1b has its CatchHandler @ 004a0cc0 */
    uVar7 = FUN_00303e0c(auStack_150,"Flush-to-zero and denormal-as-zero are ",0x27);
    puVar2 = &DAT_001d3a54;
    if (*(char *)*puVar8 != '\0') {
      puVar2 = &DAT_001e8da3;
    }
    uVar1 = 2;
    if (*(char *)*puVar8 == '\0') {
      uVar1 = 3;
    }
    FUN_00303e0c(uVar7,puVar2,uVar1);
    FUN_00637fac(auStack_1c0);
    pbVar5 = local_1d8;
    if (local_1d8 != (byte *)0x0) {
      while (pbVar4 = local_1d0, pbVar4 != pbVar5) {
        local_1d0 = pbVar4 + -0x18;
        if ((*local_1d0 & 1) != 0) {
          free(*(void **)(pbVar4 + -8));
        }
      }
      local_1d0 = pbVar5;
      free(local_1d8);
    }
    if ((local_1f0 & 1) != 0) {
      free(local_1e0);
    }
    if ((local_210[0] & 1) != 0) {
      free(local_200);
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004a0cf0  FUN_004a0cf0 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_004a0cf0(undefined8 *param_1)

{
  byte bVar1;
  char cVar2;
  undefined8 *__ptr;
  void *pvVar3;
  void *pvVar4;
  long *plVar5;
  undefined8 *puVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  ulong *puVar10;
  long *plVar11;
  long lVar12;
  char *pcVar13;
  long *plVar14;
  void *pvVar15;
  
  puVar10 = (ulong *)param_1[0x58];
  lVar12 = param_1[0x59];
  cVar2 = (char)*puVar10;
  iVar7 = (int)cVar2;
  if (iVar7 == -2 || iVar7 + 2 < 0 != SCARRY4(iVar7,2)) {
    do {
      uVar9 = ((*puVar10 | *puVar10 >> 7 ^ 0xffffffffffffffff) & 0x101010101010101) << 7;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = (ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3;
      puVar10 = (ulong *)((long)puVar10 + uVar9);
      lVar12 = lVar12 + uVar9 * 0x18;
      cVar2 = (char)*puVar10;
    } while (cVar2 + 1 < 0 != SCARRY4((int)cVar2,1));
  }
  if (cVar2 != -1) {
    do {
      (**(code **)(lVar12 + 8))(*(undefined8 *)(lVar12 + 0x10));
      puVar10 = (ulong *)((long)puVar10 + 1);
      lVar12 = lVar12 + 0x18;
      uVar8 = (uint)*(char *)puVar10;
      if (uVar8 == 0xfffffffe || (int)(uVar8 + 2) < 0 != SCARRY4(uVar8,2)) {
        do {
          uVar9 = ((*puVar10 | *puVar10 >> 7 ^ 0xffffffffffffffff) & 0x101010101010101) << 7;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar9 = (ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3;
          puVar10 = (ulong *)((long)puVar10 + uVar9);
          lVar12 = lVar12 + uVar9 * 0x18;
          uVar8 = (uint)(char)*puVar10;
        } while ((int)(uVar8 + 1) < 0 != SCARRY4(uVar8,1));
      }
    } while ((uVar8 & 0xff) != 0xff);
  }
  if (*(char *)(param_1 + 0xbe) != '\0') {
    if ((*(byte *)(param_1 + 0xb4) & 1) != 0) {
      free((void *)param_1[0xb5]);
    }
    if ((*(byte *)(param_1 + 0xac) & 1) != 0) {
      free((void *)param_1[0xad]);
    }
  }
  puVar6 = (undefined8 *)param_1[0xa5];
  while (puVar6 != (undefined8 *)0x0) {
    pvVar3 = (void *)*puVar6;
    __ptr = (undefined8 *)puVar6[5];
    while (__ptr != (undefined8 *)0x0) {
      pvVar4 = (void *)__ptr[5];
      pvVar15 = (void *)*__ptr;
      __ptr[5] = 0;
      if (pvVar4 != (void *)0x0) {
        FUN_004a0cf0(pvVar4);
        free(pvVar4);
      }
      if ((*(byte *)(__ptr + 2) & 1) != 0) {
        free((void *)__ptr[4]);
      }
      free(__ptr);
      __ptr = (undefined8 *)pvVar15;
    }
    pvVar4 = (void *)puVar6[3];
    puVar6[3] = 0;
    if (pvVar4 != (void *)0x0) {
      free(pvVar4);
    }
    free(puVar6);
    puVar6 = (undefined8 *)pvVar3;
  }
  pvVar3 = (void *)param_1[0xa3];
  param_1[0xa3] = 0;
  if (pvVar3 != (void *)0x0) {
    free(pvVar3);
  }
  lVar12 = param_1[0xa1];
  if (lVar12 != 0) {
    puVar6 = (undefined8 *)(param_1[0xa0] + 0x20);
    pcVar13 = (char *)param_1[0x9f];
    do {
      if (-1 < *pcVar13) {
        if ((*(byte *)(puVar6 + -1) & 1) != 0) {
          free((void *)*puVar6);
        }
        if ((*(byte *)(puVar6 + -4) & 1) != 0) {
          free((void *)puVar6[-2]);
        }
      }
      lVar12 = lVar12 + -1;
      puVar6 = puVar6 + 9;
      pcVar13 = pcVar13 + 1;
    } while (lVar12 != 0);
    free((void *)((param_1[0x9f] - (param_1[0xa2] & 1)) + -8));
  }
  lVar12 = param_1[0x9d];
  if (lVar12 != 0) {
    puVar6 = (undefined8 *)(param_1[0x9c] + 0x20);
    pcVar13 = (char *)param_1[0x9b];
    do {
      if (-1 < *pcVar13) {
        if ((*(byte *)(puVar6 + -1) & 1) != 0) {
          free((void *)*puVar6);
        }
        if ((*(byte *)(puVar6 + -4) & 1) != 0) {
          free((void *)puVar6[-2]);
        }
      }
      lVar12 = lVar12 + -1;
      puVar6 = puVar6 + 9;
      pcVar13 = pcVar13 + 1;
    } while (lVar12 != 0);
    free((void *)((param_1[0x9b] - (param_1[0x9e] & 1)) + -8));
  }
  FUN_004a127c(param_1 + 0x97);
                    /* try { // try from 004a0f48 to 004a0f4f has its CatchHandler @ 004a1278 */
  FUN_004a1370(param_1 + 0x93);
  if (*(char *)(param_1 + 0x8d) != '\0') {
    FUN_004a1470(param_1 + 99);
  }
  if (param_1[0x5c] != 0) {
                    /* try { // try from 004a0f68 to 004a0f6f has its CatchHandler @ 004a1274 */
    FUN_004a1e48(param_1 + 0x5c);
  }
  if (param_1[0x5a] != 0) {
    free((void *)((param_1[0x58] - (param_1[0x5b] & 1)) + -8));
  }
  if (param_1[0x56] != 0) {
    free((void *)((param_1[0x54] - (param_1[0x57] & 1)) + -8));
  }
  puVar6 = (undefined8 *)param_1[0x51];
  while (puVar6 != (undefined8 *)0x0) {
    plVar11 = (long *)puVar6[4];
    pvVar3 = (void *)*puVar6;
    if ((plVar11 != (long *)0x0) &&
       (lVar12 = FUN_00755c50(0xffffffffffffffff,plVar11 + 1), lVar12 == 0)) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      FUN_0071245c(plVar11);
    }
    free(puVar6);
    puVar6 = (undefined8 *)pvVar3;
  }
  pvVar3 = (void *)param_1[0x4f];
  param_1[0x4f] = 0;
  if (pvVar3 != (void *)0x0) {
    free(pvVar3);
  }
  puVar6 = (undefined8 *)param_1[0x4c];
  while (puVar6 != (undefined8 *)0x0) {
    plVar11 = (long *)puVar6[4];
    pvVar3 = (void *)*puVar6;
    if ((plVar11 != (long *)0x0) &&
       (lVar12 = FUN_00755c50(0xffffffffffffffff,plVar11 + 1), lVar12 == 0)) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      FUN_0071245c(plVar11);
    }
    free(puVar6);
    puVar6 = (undefined8 *)pvVar3;
  }
  pvVar3 = (void *)param_1[0x4a];
  param_1[0x4a] = 0;
  if (pvVar3 != (void *)0x0) {
    free(pvVar3);
  }
  lVar12 = param_1[0x48];
  if (lVar12 != 0) {
    puVar6 = (undefined8 *)(param_1[0x47] + 0x18);
    pcVar13 = (char *)param_1[0x46];
    do {
      if ((-1 < *pcVar13) && ((*(byte *)(puVar6 + -2) & 1) != 0)) {
        free((void *)*puVar6);
      }
      lVar12 = lVar12 + -1;
      puVar6 = puVar6 + 4;
      pcVar13 = pcVar13 + 1;
    } while (lVar12 != 0);
    free((void *)((param_1[0x46] - (param_1[0x49] & 1)) + -8));
  }
  lVar12 = param_1[0x44];
  if (lVar12 != 0) {
    puVar6 = (undefined8 *)(param_1[0x43] + 0x10);
    pcVar13 = (char *)param_1[0x42];
    do {
      if ((-1 < *pcVar13) && ((*(byte *)(puVar6 + -2) & 1) != 0)) {
        free((void *)*puVar6);
      }
      lVar12 = lVar12 + -1;
      puVar6 = puVar6 + 4;
      pcVar13 = pcVar13 + 1;
    } while (lVar12 != 0);
    free((void *)((param_1[0x42] - (param_1[0x45] & 1)) + -8));
  }
  pvVar3 = (void *)param_1[0x3f];
  param_1[0x3f] = 0;
  if (pvVar3 != (void *)0x0) {
    FUN_004a1f2c(pvVar3,*(undefined8 *)((long)pvVar3 + 8));
    free(pvVar3);
  }
  if (*(char *)(param_1 + 0x3c) != '\0') {
    FUN_004a1fac(param_1 + 0x18);
  }
  plVar11 = (long *)param_1[0x14];
  if (plVar11 != (long *)0x0) {
    plVar14 = (long *)param_1[0x15];
    plVar5 = plVar11;
    if (plVar14 != plVar11) {
      do {
        plVar14 = plVar14 + -1;
        plVar5 = (long *)*plVar14;
        *plVar14 = 0;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 8))();
        }
      } while (plVar14 != plVar11);
      plVar5 = (long *)param_1[0x14];
    }
    param_1[0x15] = plVar11;
    free(plVar5);
  }
  FUN_00580520(param_1 + 0x10);
  plVar11 = (long *)param_1[0xf];
  if ((plVar11 == (long *)0x0) ||
     (lVar12 = FUN_00755c50(0xffffffffffffffff,plVar11 + 1), lVar12 != 0)) {
    bVar1 = *(byte *)(param_1 + 0xb);
  }
  else {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    FUN_0071245c(plVar11);
    bVar1 = *(byte *)(param_1 + 0xb);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 8);
  }
  else {
    free((void *)param_1[0xd]);
    bVar1 = *(byte *)(param_1 + 8);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 5);
  }
  else {
    free((void *)param_1[10]);
    bVar1 = *(byte *)(param_1 + 5);
  }
  if ((bVar1 & 1) == 0) {
    puVar6 = (undefined8 *)param_1[2];
  }
  else {
    free((void *)param_1[7]);
    puVar6 = (undefined8 *)param_1[2];
  }
  while (puVar6 != (undefined8 *)0x0) {
    pvVar3 = (void *)*puVar6;
    free(puVar6);
    puVar6 = (undefined8 *)pvVar3;
  }
  pvVar3 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar3 == (void *)0x0) {
    return;
  }
  free(pvVar3);
  return;
}


// ===== 004a127c  FUN_004a127c =====

void FUN_004a127c(long *param_1)

{
  long lVar1;
  long lVar2;
  void *__ptr;
  void *__ptr_00;
  long lVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  undefined8 *puVar7;
  
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    lVar1 = *param_1;
    lVar2 = param_1[1];
    lVar4 = 0;
    do {
      if (-1 < *(char *)(lVar1 + lVar4)) {
        __ptr_00 = *(void **)(lVar2 + lVar4 * 8);
        lVar5 = *(long *)((long)__ptr_00 + 0x18);
        if (lVar5 != 0) {
          puVar7 = (undefined8 *)(*(long *)((long)__ptr_00 + 0x10) + 0x40);
          pcVar6 = *(char **)((long)__ptr_00 + 8);
          do {
            if (-1 < *pcVar6) {
              __ptr = (void *)*puVar7;
              *puVar7 = 0;
              if (__ptr != (void *)0x0) {
                free(__ptr);
              }
            }
            lVar5 = lVar5 + -1;
            puVar7 = puVar7 + 9;
            pcVar6 = pcVar6 + 1;
          } while (lVar5 != 0);
          free((void *)((*(long *)((long)__ptr_00 + 8) - (*(ulong *)((long)__ptr_00 + 0x20) & 1)) +
                       -8));
        }
        free(__ptr_00);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != lVar3);
    free((void *)((*param_1 - (param_1[3] & 1U)) + -8));
    return;
  }
  return;
}


// ===== 004a1370  FUN_004a1370 =====

void FUN_004a1370(long *param_1)

{
  long lVar1;
  long lVar2;
  void *__ptr;
  void *__ptr_00;
  long lVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  
  lVar3 = param_1[2];
  if (lVar3 == 0) {
    return;
  }
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar4 = 0;
  do {
    if (-1 < *(char *)(lVar1 + lVar4)) {
      __ptr_00 = *(void **)(lVar2 + lVar4 * 8);
      pvVar5 = *(void **)((long)__ptr_00 + 0x20);
      if (pvVar5 != (void *)0x0) {
        pvVar6 = *(void **)((long)__ptr_00 + 0x28);
        __ptr = pvVar5;
        if (pvVar6 != pvVar5) {
          do {
            if (*(long *)((long)pvVar6 + -0x18) != 0) {
              free((void *)((*(long *)((long)pvVar6 + -0x28) -
                            (*(ulong *)((long)pvVar6 + -0x10) & 1)) + -8));
            }
            pvVar6 = (void *)((long)pvVar6 + -0x28);
          } while (pvVar6 != pvVar5);
          __ptr = *(void **)((long)__ptr_00 + 0x20);
        }
        *(void **)((long)__ptr_00 + 0x28) = pvVar5;
        free(__ptr);
      }
      pvVar5 = *(void **)((long)__ptr_00 + 8);
      if (pvVar5 != (void *)0x0) {
        *(void **)((long)__ptr_00 + 0x10) = pvVar5;
        free(pvVar5);
      }
      free(__ptr_00);
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 != lVar3);
  free((void *)((*param_1 - (param_1[3] & 1U)) + -8));
  return;
}


// ===== 004a1470  FUN_004a1470 =====

void FUN_004a1470(long *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  char *pcVar7;
  void *pvVar8;
  
  *param_1 = (long)(PTR_DAT_007a1ee8 + 0x10);
  if ((*(byte *)(param_1 + 0x23) & 1) != 0) {
    free((void *)param_1[0x24]);
  }
  lVar5 = param_1[0x20];
  if (lVar5 != 0) {
    puVar6 = (undefined8 *)(param_1[0x1f] + 0x10);
    pcVar7 = (char *)param_1[0x1e];
    do {
      if ((-1 < *pcVar7) && (pvVar1 = (void *)puVar6[-1], pvVar1 != (void *)0x0)) {
        *puVar6 = pvVar1;
        free(pvVar1);
      }
      lVar5 = lVar5 + -1;
      puVar6 = puVar6 + 4;
      pcVar7 = pcVar7 + 1;
    } while (lVar5 != 0);
    free((void *)((param_1[0x1e] - (param_1[0x21] & 1U)) + -8));
  }
  pvVar1 = (void *)param_1[0x1b];
  if (pvVar1 != (void *)0x0) {
    param_1[0x1c] = (long)pvVar1;
    free(pvVar1);
  }
  puVar6 = (undefined8 *)param_1[0x18];
  if (puVar6 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)param_1[0x19];
    puVar2 = puVar6;
    if (puVar4 != puVar6) {
      do {
        puVar2 = puVar4 + -3;
        pvVar1 = (void *)*puVar2;
        if (pvVar1 != (void *)0x0) {
          puVar4[-2] = pvVar1;
          free(pvVar1);
        }
        puVar4 = puVar2;
      } while (puVar2 != puVar6);
      puVar2 = (undefined8 *)param_1[0x18];
    }
    param_1[0x19] = (long)puVar6;
    free(puVar2);
  }
  pvVar1 = (void *)param_1[0x15];
  if (pvVar1 != (void *)0x0) {
    param_1[0x16] = (long)pvVar1;
    free(pvVar1);
  }
  if (param_1[0x13] != 0) {
    free((void *)((param_1[0x11] - (param_1[0x14] & 1U)) + -8));
  }
  if (param_1[10] != 0) {
                    /* try { // try from 004a1590 to 004a1593 has its CatchHandler @ 004a1638 */
    FUN_004a189c();
  }
  pvVar1 = (void *)param_1[7];
  if (pvVar1 != (void *)0x0) {
    param_1[8] = (long)pvVar1;
    free(pvVar1);
  }
  pvVar1 = (void *)param_1[4];
  if (pvVar1 != (void *)0x0) {
    param_1[5] = (long)pvVar1;
    free(pvVar1);
  }
  pvVar1 = (void *)param_1[1];
  if (pvVar1 == (void *)0x0) {
    return;
  }
  pvVar8 = (void *)param_1[2];
  if (pvVar8 != pvVar1) {
    do {
      pvVar3 = *(void **)((long)pvVar8 + -0x18);
      if (pvVar3 != (void *)0x0) {
        *(void **)((long)pvVar8 + -0x10) = pvVar3;
        free(pvVar3);
      }
      pvVar3 = *(void **)((long)pvVar8 + -0x30);
      if (pvVar3 != (void *)0x0) {
        *(void **)((long)pvVar8 + -0x28) = pvVar3;
        free(pvVar3);
      }
      pvVar8 = (void *)((long)pvVar8 + -0x48);
    } while (pvVar8 != pvVar1);
    param_1[2] = (long)pvVar1;
    free((void *)param_1[1]);
    return;
  }
  param_1[2] = (long)pvVar1;
  free(pvVar1);
  return;
}


// ===== 004a163c  FUN_004a163c =====

long FUN_004a163c(long param_1,long param_2)

{
  return *(long *)(param_1 + 8) + param_2 * 0x48 + 0x10;
}


// ===== 004a1654  FUN_004a1654 =====

void FUN_004a1654(long param_1,long param_2,undefined4 *param_3)

{
  *(undefined4 *)(*(long *)(param_1 + 8) + param_2 * 0x48 + 0x10) = *param_3;
  return;
}


// ===== 004a1670  FUN_004a1670 =====

void FUN_004a1670(ulong *param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  
  puVar5 = PTR_DAT_007a1f30;
  lVar9 = *(long *)(param_2 + 8);
  lVar10 = *(long *)(param_2 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  uVar6 = (lVar10 - lVar9 >> 3) * -0x71c71c71c71c71c7;
  uVar7 = *(ulong *)(puVar5 + 8);
  *param_1 = (ulong)(puVar5 + 0x10);
  param_1[1] = 0;
  if (uVar7 < uVar6) {
    if (lVar10 - lVar9 == 0x1f8) {
      uVar6 = 0xf;
    }
    else {
      lVar9 = (long)(uVar6 - 1) / 7 + uVar6;
      uVar6 = 0xffffffffffffffff >> (LZCOUNT(lVar9) & 0x3fU);
      if (lVar9 == 0) {
        uVar6 = 1;
      }
    }
                    /* try { // try from 004a1714 to 004a171b has its CatchHandler @ 004a1848 */
    FUN_004a1988(param_1,uVar6);
    lVar9 = *(long *)(param_2 + 8);
    lVar10 = *(long *)(param_2 + 0x10);
  }
  puVar5 = PTR_LOOP_007a1f58;
  if (lVar9 != lVar10) {
    uVar6 = *param_1;
    do {
      Hint_Prefetch(uVar6,0,2,0);
      iVar1 = *(int *)(lVar9 + 0x10);
      uVar7 = (ulong)(char)iVar1;
      uVar7 = (long)((iVar1 << 0x10) >> 0x18) + 0x9e3779b9 + uVar7 * 0x40 + (uVar7 >> 2) ^ uVar7;
      lVar8 = 0;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = puVar5 + ((long)(iVar1 >> 0x10) + 0x9e3779b9 + uVar7 * 0x40 + (uVar7 >> 2) ^
                              uVar7);
      uVar7 = SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^
              (long)(puVar5 + ((long)(iVar1 >> 0x10) + 0x9e3779b9 + uVar7 * 0x40 + (uVar7 >> 2) ^
                              uVar7)) * -0x622015f714c7d297;
      uVar4 = (undefined1)uVar7;
      uVar7 = uVar7 >> 7 ^ uVar6 >> 0xc;
      while( true ) {
        uVar7 = uVar7 & param_1[2];
        for (uVar12 = NEON_cmeq(*(undefined8 *)(uVar6 + uVar7),
                                CONCAT17(uVar4,CONCAT16(uVar4,CONCAT15(uVar4,CONCAT14(uVar4,CONCAT13
                                                  (uVar4,CONCAT12(uVar4,CONCAT11(uVar4,uVar4)))))))
                                & 0x7f7f7f7f7f7f7f7f,1); uVar12 != 0;
            uVar12 = (uVar12 & 0x8080808080808080) - 1 & uVar12 & 0x8080808080808080) {
          uVar2 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
          uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
          uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
          uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
          if (*(int *)(param_1[1] +
                      (uVar7 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & param_1[2]) *
                      4) == iVar1) goto LAB_004a17c4;
        }
        lVar11 = NEON_cmeq(*(undefined8 *)(uVar6 + uVar7),0x8080808080808080,1);
        if (lVar11 != 0) break;
        lVar8 = lVar8 + 8;
        uVar7 = lVar8 + uVar7;
      }
                    /* try { // try from 004a17ac to 004a17b3 has its CatchHandler @ 004a184c */
      lVar8 = FUN_004a1c14(param_1);
      *(undefined4 *)(param_1[1] + lVar8 * 4) = *(undefined4 *)(lVar9 + 0x10);
      uVar6 = *param_1;
LAB_004a17c4:
      lVar9 = lVar9 + 0x48;
    } while (lVar9 != lVar10);
  }
  return;
}


// ===== 004a1878  FUN_004a1878 =====

void FUN_004a1878(void *param_1)

{
  FUN_004a1470();
  free(param_1);
  return;
}


// ===== 004a189c  FUN_004a189c =====

void FUN_004a189c(ulong *param_1)

{
  ulong *puVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *__ptr;
  ulong *puVar5;
  long *plVar6;
  long *plVar7;
  
  uVar4 = *param_1;
  puVar5 = param_1 + 1;
  uVar3 = uVar4 & 1;
  puVar1 = puVar5;
  if (uVar3 != 0) {
    puVar1 = (ulong *)*puVar5;
  }
  if (1 < uVar4) {
    uVar4 = uVar4 >> 1;
    do {
      uVar4 = uVar4 - 1;
      __ptr = (undefined8 *)puVar1[uVar4];
      puVar1[uVar4] = 0;
      if (__ptr != (undefined8 *)0x0) {
        plVar6 = (long *)*__ptr;
        if (plVar6 != (long *)0x0) {
          plVar7 = (long *)__ptr[1];
          plVar2 = plVar6;
          if (plVar7 != plVar6) {
            do {
              plVar7 = plVar7 + -1;
              plVar2 = (long *)*plVar7;
              *plVar7 = 0;
              if (plVar2 != (long *)0x0) {
                (**(code **)(*plVar2 + 8))();
              }
            } while (plVar7 != plVar6);
            plVar2 = (long *)*__ptr;
          }
          __ptr[1] = plVar6;
          free(plVar2);
        }
        free(__ptr);
      }
    } while (uVar4 != 0);
    uVar3 = *param_1 & 1;
  }
  if (uVar3 == 0) {
    return;
  }
  free((void *)*puVar5);
  return;
}


// ===== 004a1988  FUN_004a1988 =====

void FUN_004a1988(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  int iVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong local_50;
  ulong local_48;
  byte local_40;
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  local_50 = *param_1;
  uVar1 = param_1[1];
  local_48 = param_1[2];
  param_1[2] = param_2;
  local_40 = (byte)param_1[3] & 1;
  uVar7 = FUN_004a1b2c(&local_50,param_1,uVar1);
  puVar6 = PTR_LOOP_007a1f58;
  if (((uVar7 & 1) == 0) && (local_48 != 0)) {
    uVar9 = param_1[1];
    uVar7 = 0;
    do {
      if (-1 < *(char *)(local_50 + uVar7)) {
        iVar2 = *(int *)(uVar1 + uVar7 * 4);
        uVar12 = (ulong)(char)iVar2;
        uVar12 = (long)((iVar2 << 0x10) >> 0x18) + 0x9e3779b9 + uVar12 * 0x40 + (uVar12 >> 2) ^
                 uVar12;
        uVar13 = param_1[2];
        auVar4._8_8_ = 0;
        auVar4._0_8_ = puVar6 + ((long)(iVar2 >> 0x10) + 0x9e3779b9 + uVar12 * 0x40 + (uVar12 >> 2)
                                ^ uVar12);
        uVar11 = SUB168(auVar4 * ZEXT816(0x9ddfea08eb382d69),8) ^
                 (long)(puVar6 + ((long)(iVar2 >> 0x10) + 0x9e3779b9 + uVar12 * 0x40 + (uVar12 >> 2)
                                 ^ uVar12)) * -0x622015f714c7d297;
        uVar10 = *param_1;
        uVar12 = (uVar11 >> 7 ^ uVar10 >> 0xc) & uVar13;
        uVar14 = *(ulong *)(uVar10 + uVar12) &
                 (*(ulong *)(uVar10 + uVar12) << 7 ^ 0xffffffffffffffff) & 0x8080808080808080;
        if (uVar14 == 0) {
          lVar8 = 8;
          do {
            uVar12 = uVar12 + lVar8;
            lVar8 = lVar8 + 8;
            uVar12 = uVar12 & uVar13;
            uVar14 = *(ulong *)(uVar10 + uVar12) &
                     (*(ulong *)(uVar10 + uVar12) << 7 ^ 0xffffffffffffffff) & 0x8080808080808080;
          } while (uVar14 == 0);
        }
        uVar14 = (uVar14 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar14 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
        bVar3 = (byte)uVar11 & 0x7f;
        uVar12 = uVar12 + ((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3) & uVar13;
        *(byte *)(uVar10 + uVar12) = bVar3;
        *(byte *)(uVar10 + (uVar12 - 7 & uVar13) + (uVar13 & 7)) = bVar3;
        *(undefined4 *)(uVar9 + uVar12 * 4) = *(undefined4 *)(uVar1 + uVar7 * 4);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != local_48);
    lVar8 = -9;
    if (local_40 == 0) {
      lVar8 = -8;
    }
    free((void *)(local_50 + lVar8));
  }
  if (*(long *)(lVar5 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004a1b2c  FUN_004a1b2c =====

bool FUN_004a1b2c(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  long *__s;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2[2];
  uVar4 = uVar5 + 0x13 & 0xfffffffffffffffc;
  plVar2 = (long *)FUN_00759c3c(uVar4 + uVar5 * 4 + 7 & 0xfffffffffffffff8);
  uVar6 = param_2[3];
  lVar1 = 6;
  if (uVar5 != 7) {
    lVar1 = uVar5 - (uVar5 >> 3);
  }
  uVar3 = param_1[1];
  __s = plVar2 + 1;
  *plVar2 = lVar1 - (uVar6 >> 1);
  *param_2 = __s;
  param_2[1] = (long)plVar2 + uVar4;
  if ((uVar3 == 0) || (uVar5 >= 9 || uVar3 >= uVar5)) {
    memset(__s,0x80,uVar5 + 8);
    *(undefined1 *)((long)__s + uVar5) = 0xff;
  }
  else {
    FUN_0064874c(param_1,param_2,param_3,4);
    lVar1 = -9;
    if ((char)param_1[2] == '\0') {
      lVar1 = -8;
    }
    free((void *)(*param_1 + lVar1));
    uVar6 = param_2[3];
  }
  param_2[3] = uVar6 & 0xfffffffffffffffe;
  return uVar5 < 9 && uVar3 < uVar5;
}


// ===== 004a1c14  FUN_004a1c14 =====

ulong FUN_004a1c14(ulong *param_1,ulong param_2)

{
  char cVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  uVar4 = *param_1;
  uVar7 = param_1[2];
  uVar3 = (uVar4 >> 0xc ^ param_2 >> 7) & uVar7;
  uVar5 = *(ulong *)(uVar4 + uVar3) & (*(ulong *)(uVar4 + uVar3) << 7 ^ 0xffffffffffffffff) &
          0x8080808080808080;
  if (uVar5 == 0) {
    lVar6 = 8;
    do {
      uVar3 = uVar3 + lVar6;
      lVar6 = lVar6 + 8;
      uVar3 = uVar3 & uVar7;
      uVar5 = *(ulong *)(uVar4 + uVar3) & (*(ulong *)(uVar4 + uVar3) << 7 ^ 0xffffffffffffffff) &
              0x8080808080808080;
    } while (uVar5 == 0);
  }
  uVar5 = (uVar5 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar5 >> 7 & 0xff00ff00ff00ff) << 8;
  uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
  uVar3 = uVar3 + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3) & uVar7;
  if ((*(long *)(uVar4 - 8) == 0) && (*(char *)(uVar4 + uVar3) != -2)) {
    FUN_004a1d18();
    uVar3 = FUN_0049f7dc(param_1,uVar7,param_2);
    uVar4 = *param_1;
  }
  uVar5 = param_1[3];
  cVar1 = *(char *)(uVar4 + uVar3);
  bVar2 = (byte)param_2 & 0x7f;
  *(byte *)(uVar4 + uVar3) = bVar2;
  param_1[3] = uVar5 + 2;
  *(ulong *)(uVar4 - 8) = *(long *)(uVar4 - 8) - (ulong)(cVar1 == -0x80);
  *(byte *)(uVar4 + (param_1[2] & uVar3 - 7) + (param_1[2] & 7)) = bVar2;
  return uVar3;
}


// ===== 004a1d18  FUN_004a1d18 =====

void FUN_004a1d18(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_2c [4];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = *(ulong *)(param_1 + 0x10);
  if ((uVar2 < 9) ||
     (uVar3 = (*(ulong *)(param_1 + 0x18) & 0xffffffffffffffe) * 0x10,
     uVar2 * 0x19 <= uVar3 && uVar3 + uVar2 * -0x19 != 0)) {
    if (*(long *)(lVar1 + 0x28) == local_28) {
      FUN_004a1988(param_1,uVar2 << 1 | 1);
      return;
    }
  }
  else {
    FUN_00648380(param_1,PTR_DAT_007a1ef0,auStack_2c);
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a1db8  FUN_004a1db8 =====

ulong FUN_004a1db8(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  
  uVar1 = *param_2;
  uVar3 = (-((ulong)(uVar1 >> 7) & 1) & 0xffffffffffffc000 | ((ulong)uVar1 & 0xff) << 6) +
          (long)((int)(uVar1 << 0x10) >> 0x18) + ((ulong)(long)(char)uVar1 >> 2) + 0x9e3779b9 ^
          (long)(char)uVar1;
  uVar3 = (long)&PTR_LOOP_00797d18 +
          (uVar3 * 0x40 + (long)((int)uVar1 >> 0x10) + (uVar3 >> 2) + 0x9e3779b9 ^ uVar3);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar3;
  return SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar3 * -0x622015f714c7d297;
}


// ===== 004a1e24  FUN_004a1e24 =====

void FUN_004a1e24(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = *param_3;
  return;
}


// ===== 004a1e30  FUN_004a1e30 =====

void FUN_004a1e30(long *param_1)

{
  free((void *)((*param_1 - (param_1[3] & 1U)) + -8));
  return;
}


// ===== 004a1e48  FUN_004a1e48 =====

void FUN_004a1e48(ulong *param_1)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong *puVar6;
  ulong *puVar7;
  
  uVar4 = *param_1;
  puVar6 = param_1 + 1;
  uVar3 = uVar4 & 1;
  puVar1 = puVar6;
  if (uVar3 != 0) {
    puVar1 = (ulong *)*puVar6;
  }
  if (1 < uVar4) {
    uVar4 = uVar4 >> 1;
    puVar1 = puVar1 + uVar4 * 3;
    do {
      puVar7 = puVar1 + -3;
      uVar3 = *puVar7;
      *puVar7 = 0;
      if ((uVar3 != 0) && ((long *)puVar1[-2] != (long *)0x0)) {
                    /* try { // try from 004a1eb8 to 004a1ebb has its CatchHandler @ 004a1f28 */
        (**(code **)(*(long *)puVar1[-2] + 0x18))();
      }
      plVar5 = (long *)puVar1[-1];
      if ((plVar5 != (long *)0x0) &&
         (lVar2 = FUN_00755c50(0xffffffffffffffff,plVar5 + 1), lVar2 == 0)) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        FUN_0071245c(plVar5);
      }
      uVar4 = uVar4 - 1;
      puVar1 = puVar7;
    } while (uVar4 != 0);
    uVar3 = *param_1 & 1;
  }
  if (uVar3 != 0) {
    free((void *)*puVar6);
    return;
  }
  return;
}


// ===== 004a1f2c  FUN_004a1f2c =====

void FUN_004a1f2c(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_004a1f2c(param_1,*param_2);
  FUN_004a1f2c(param_1,param_2[1]);
  plVar2 = (long *)param_2[6];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    free(param_2);
    return;
  }
  free(param_2);
  return;
}


// ===== 004a1fac  FUN_004a1fac =====

void FUN_004a1fac(long param_1)

{
  long *plVar1;
  undefined8 *__ptr;
  void *pvVar2;
  long *plVar3;
  
  __ptr = (undefined8 *)*(void **)(param_1 + 0x100);
  while (__ptr != (undefined8 *)0x0) {
    pvVar2 = (void *)*__ptr;
    if ((*(byte *)(__ptr + 2) & 1) != 0) {
      free((void *)__ptr[4]);
    }
    free(__ptr);
    __ptr = (undefined8 *)pvVar2;
  }
  pvVar2 = *(void **)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xf0) = 0;
  if (pvVar2 != (void *)0x0) {
    free(pvVar2);
  }
  pvVar2 = *(void **)(param_1 + 0xd8);
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 0xe0) = pvVar2;
    free(pvVar2);
  }
  pvVar2 = *(void **)(param_1 + 0xc0);
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 200) = pvVar2;
    free(pvVar2);
  }
  pvVar2 = *(void **)(param_1 + 0xa8);
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 0xb0) = pvVar2;
    free(pvVar2);
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    free((void *)((*(long *)(param_1 + 0x88) - (*(ulong *)(param_1 + 0xa0) & 1)) + -8));
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
  plVar3 = *(long **)(param_1 + 0x40);
  plVar1 = (long *)(param_1 + 0x20);
  if (plVar3 == plVar1) {
                    /* WARNING: Could not recover jumptable at 0x004a20bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x20))(plVar1);
    return;
  }
  if (plVar3 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004a2074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x28))();
  return;
}


// ===== 004a20d0  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004a20d4  FUN_004a20d4 =====

void FUN_004a20d4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_0078ffc0;
  puVar1[2] = uVar3;
  puVar1[1] = uVar2;
  return;
}


// ===== 004a210c  FUN_004a210c =====

void FUN_004a210c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_0078ffc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}


// ===== 004a2124  FUN_004a2124 =====

void FUN_004a2124(void)

{
  return;
}


// ===== 004a2128  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004a212c  FUN_004a212c =====

void FUN_004a212c(long *param_1,long param_2)

{
  long lVar1;
  ulong __n;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  void *__src;
  ulong __n_00;
  undefined8 local_228;
  ulong local_220;
  undefined8 uStack_218;
  void *local_210;
  byte local_200 [16];
  void *local_1f0;
  ulong local_1e8;
  char *local_1e0;
  undefined *puStack_1d8;
  char *local_1d0;
  char *pcStack_1c8;
  long local_1c0 [2];
  undefined1 auStack_1b0 [16];
  byte abStack_1a0 [152];
  undefined1 auStack_108 [152];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  lVar1 = *(long *)(param_2 + 8);
  FUN_007139b0(lVar1 + 0x20,*(undefined8 *)(param_2 + 0x10));
  local_1e8 = 0;
  plVar5 = (long *)FUN_00641af0();
  lVar7 = lVar1 + 0x21;
  if ((*(byte *)(lVar1 + 0x20) & 1) != 0) {
    lVar7 = *(long *)(lVar1 + 0x30);
  }
  (**(code **)(*plVar5 + 0x40))(param_1,plVar5,lVar7,&local_1e8);
  uVar4 = local_1e8;
  if (*param_1 == 0) {
    pvVar6 = *(void **)(lVar1 + 0x780);
    __src = *(void **)(lVar1 + 0x778);
    plVar5 = (long *)(lVar1 + 0x778);
    __n_00 = (long)pvVar6 - (long)__src;
    __n = local_1e8 - __n_00;
    if (local_1e8 < __n_00 || __n == 0) {
      if (local_1e8 < __n_00) {
        *(ulong *)(lVar1 + 0x780) = (long)__src + local_1e8;
      }
    }
    else if ((ulong)(*(long *)(lVar1 + 0x788) - (long)pvVar6) < __n) {
      if ((long)local_1e8 < 0) {
        if (*(long *)(lVar2 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
          FUN_00323508(plVar5);
        }
        goto LAB_004a24bc;
      }
      uVar8 = *(long *)(lVar1 + 0x788) - (long)__src;
      uVar9 = uVar8 * 2;
      if (uVar9 < local_1e8 || uVar9 - local_1e8 == 0) {
        uVar9 = local_1e8;
      }
      if (0x3ffffffffffffffe < uVar8) {
        uVar9 = 0x7fffffffffffffff;
      }
      pvVar6 = (void *)FUN_00759c3c(uVar9);
      memset((void *)((long)pvVar6 + __n_00),0,__n);
      memcpy(pvVar6,__src,__n_00);
      *(void **)(lVar1 + 0x778) = pvVar6;
      *(ulong *)(lVar1 + 0x780) = (long)pvVar6 + uVar4;
      *(ulong *)(lVar1 + 0x788) = (long)pvVar6 + uVar9;
      if (__src != (void *)0x0) {
        free(__src);
      }
    }
    else {
      memset(pvVar6,0,__n);
      *(ulong *)(lVar1 + 0x780) = (long)pvVar6 + __n;
    }
    FUN_004a24c0(local_1c0,lVar1 + 0x20,0xc);
                    /* try { // try from 004a22ac to 004a22b3 has its CatchHandler @ 004a2484 */
    FUN_00716ad0(local_1c0,*plVar5,local_1e8);
    if ((abStack_1a0[*(long *)(local_1c0[0] + -0x18)] & 5) == 0) {
      if ((local_1e8 == 0xffffffffffffffff) || ((*plVar5 == 0 && (local_1e8 != 0)))) {
                    /* WARNING: Subroutine does not return */
        FUN_004839bc();
      }
      *(ulong *)(lVar1 + 0x768) = local_1e8;
      *(long *)(lVar1 + 0x770) = *plVar5;
      *param_1 = 0;
    }
    else {
      if ((*(byte *)(lVar1 + 0x20) & 1) == 0) {
        uStack_218 = *(undefined8 *)(lVar1 + 0x28);
        local_220 = *(ulong *)(lVar1 + 0x20);
        local_210 = *(void **)(lVar1 + 0x30);
      }
      else {
                    /* try { // try from 004a2318 to 004a231f has its CatchHandler @ 004a2458 */
        FUN_002fb36c(&local_220,*(undefined8 *)(lVar1 + 0x30),*(undefined8 *)(lVar1 + 0x28));
      }
      local_228 = local_1c0[1];
      local_1d0 = " failed. Only ";
      pcStack_1c8 = "Load model from ";
      local_1e0 = " bytes were able to be read.";
      puStack_1d8 = &DAT_001c55aa;
      FUN_004a25e4(local_200,&pcStack_1c8,&local_220,&local_1d0,&local_228,&puStack_1d8,&local_1e8,
                   &local_1e0);
                    /* try { // try from 004a2374 to 004a2387 has its CatchHandler @ 004a245c */
      FUN_0063aa48(param_1,2,1,local_200);
      if ((local_200[0] & 1) != 0) {
        free(local_1f0);
      }
      if ((local_220 & 1) != 0) {
        free(local_210);
      }
    }
    puVar3 = PTR_PTR_007a1420;
    local_1c0[0] = *(long *)PTR_PTR_007a1420;
    *(undefined8 *)((long)local_1c0 + *(long *)(local_1c0[0] + -0x18)) =
         *(undefined8 *)(PTR_PTR_007a1420 + 0x18);
    FUN_00718ca0(auStack_1b0);
    FUN_00716374(local_1c0,puVar3 + 8);
    thunk_FUN_00715e00(auStack_108);
    lVar7 = *param_1;
  }
  else {
                    /* try { // try from 004a21a0 to 004a21bf has its CatchHandler @ 004a2498 */
    FUN_00645c3c(0,param_1,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                 ,"LoadOrtModelBytes",0x507);
    lVar7 = *param_1;
  }
  if (lVar7 != 0) {
                    /* try { // try from 004a23ec to 004a240b has its CatchHandler @ 004a2494 */
    FUN_00645c3c(0,param_1,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                 ,"operator()",0x51e);
  }
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
LAB_004a24bc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a24c0  FUN_004a24c0 =====

void FUN_004a24c0(long *param_1,byte *param_2,uint param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  byte *pbVar5;
  
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
                    /* try { // try from 004a2524 to 004a252f has its CatchHandler @ 004a25a8 */
  FUN_00715fc0(lVar4,param_1 + 2);
  *(undefined8 *)(lVar4 + 0x88) = 0;
  *(undefined4 *)(lVar4 + 0x90) = 0xffffffff;
  *param_1 = (long)(puVar3 + 0x18);
  param_1[0x17] = (long)puVar1;
                    /* try { // try from 004a2548 to 004a254f has its CatchHandler @ 004a25a0 */
  FUN_00718b7c(param_1 + 2);
  pbVar5 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar5 = param_2 + 1;
  }
                    /* try { // try from 004a2560 to 004a2587 has its CatchHandler @ 004a25bc */
  lVar4 = FUN_00718a1c(param_1 + 2,pbVar5,param_3 | 8);
  if (lVar4 == 0) {
    lVar4 = (long)param_1 + *(long *)(*param_1 + -0x18);
    FUN_00715ee0(lVar4,*(uint *)(lVar4 + 0x20) | 4);
  }
  return;
}


// ===== 004a25e4  FUN_004a25e4 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_004a25e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *local_178 [9];
  ulong local_130;
  undefined8 uStack_128;
  void *local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined *local_108 [3];
  undefined8 uStack_f0;
  undefined4 auStack_e8 [4];
  undefined8 local_d8;
  long local_70;
  
  puVar4 = PTR_PTR_007a1e48;
  puVar3 = PTR_DAT_007a1e40;
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  local_178[0] = *(undefined **)(PTR_PTR_007a1e48 + 8);
  puVar1 = PTR_DAT_007a1e40 + 0x40;
  local_d8 = 0;
  local_108[0] = puVar1;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_007a1e48 + 0x10);
  lVar5 = *(long *)(local_178[0] + -0x18);
                    /* try { // try from 004a2668 to 004a2673 has its CatchHandler @ 004a2780 */
  FUN_00715fc0((long)local_178 + lVar5,local_178 + 1);
  local_178[0] = puVar3 + 0x18;
  *(undefined8 *)((long)&uStack_f0 + lVar5) = 0;
  *(undefined4 *)((long)auStack_e8 + lVar5) = 0xffffffff;
                    /* try { // try from 004a268c to 004a2693 has its CatchHandler @ 004a2760 */
  local_108[0] = puVar1;
  FUN_007160dc(local_178 + 1);
  puVar1 = PTR_DAT_007a10f8 + 0x10;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_110 = 0x10;
  local_178[1] = puVar1;
  FUN_004a2794(local_178,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
                    /* try { // try from 004a26d8 to 004a26e3 has its CatchHandler @ 004a275c */
  FUN_00718470(param_1,local_178 + 1);
  local_178[0] = *(undefined **)puVar4;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(puVar4 + 0x18);
  local_178[1] = puVar1;
  if ((local_130 & 1) != 0) {
    free(local_120);
  }
  FUN_00716098(local_178 + 1);
  FUN_00716ee4(local_178,puVar4 + 8);
  thunk_FUN_00715e00(local_108);
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a2794  FUN_004a2794 =====

void FUN_004a2794(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined8 *param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  byte *pbVar2;
  size_t sVar3;
  char *pcVar4;
  
  pcVar4 = (char *)*param_2;
  sVar3 = strlen(pcVar4);
                    /* try { // try from 004a27d8 to 004a27e3 has its CatchHandler @ 004a2854 */
  FUN_00303e0c(param_1,pcVar4,sVar3);
  uVar1 = *(ulong *)(param_3 + 8);
  pbVar2 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar2 = param_3 + 1;
    uVar1 = (ulong)(*param_3 >> 1);
  }
                    /* try { // try from 004a27fc to 004a2803 has its CatchHandler @ 004a2850 */
  FUN_00303e0c(param_1,pbVar2,uVar1);
  pcVar4 = (char *)*param_4;
  sVar3 = strlen(pcVar4);
                    /* try { // try from 004a2814 to 004a281f has its CatchHandler @ 004a284c */
  FUN_00303e0c(param_1,pcVar4,sVar3);
  FUN_004a2858(param_1,param_5,param_6,param_7,param_8);
  return;
}


// ===== 004a2858  FUN_004a2858 =====

void FUN_004a2858(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  size_t sVar1;
  char *pcVar2;
  
                    /* try { // try from 004a287c to 004a287f has its CatchHandler @ 004a28e0 */
  FUN_0071755c(param_1,*param_2);
  pcVar2 = (char *)*param_3;
  sVar1 = strlen(pcVar2);
                    /* try { // try from 004a2890 to 004a289b has its CatchHandler @ 004a28dc */
  FUN_00303e0c(param_1,pcVar2,sVar1);
                    /* try { // try from 004a28a0 to 004a28a7 has its CatchHandler @ 004a28d8 */
  FUN_007176ec(param_1,*param_4);
  pcVar2 = (char *)*param_5;
  sVar1 = strlen(pcVar2);
                    /* try { // try from 004a28b8 to 004a28c3 has its CatchHandler @ 004a28d4 */
  FUN_00303e0c(param_1,pcVar2,sVar1);
  return;
}


// ===== 004a28e4  FUN_004a28e4 =====

void FUN_004a28e4(void)

{
  return;
}


// ===== 004a28e8  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004a28ec  FUN_004a28ec =====

void FUN_004a28ec(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_00790008;
  puVar1[2] = uVar4;
  puVar1[1] = uVar3;
  puVar1[3] = uVar2;
  return;
}


// ===== 004a292c  FUN_004a292c =====

void FUN_004a292c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00790008;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}


// ===== 004a294c  FUN_004a294c =====

void FUN_004a294c(void)

{
  return;
}


// ===== 004a2950  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004a2954  FUN_004a2954 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a2954(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char *pcVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  void *pvVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  void *__src;
  ulong __n;
  long lVar16;
  ushort local_b8;
  undefined1 local_b6;
  void *local_a8;
  ulong local_a0;
  undefined8 uStack_98;
  char *local_90;
  byte local_80;
  char acStack_7f [7];
  ulong local_78;
  char *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  lVar16 = *(long *)(param_2 + 8);
  local_90 = (char *)FUN_00759c3c(0x28);
  uStack_98 = _UNK_00200808;
  local_a0 = _DAT_00200800;
  local_90[0x24] = '\0';
  uVar9 = s_session_use_ort_model_bytes_dire_001c6379._24_8_;
  uVar8 = s_session_use_ort_model_bytes_dire_001c6379._16_8_;
  uVar7 = s_session_use_ort_model_bytes_dire_001c6379._8_8_;
  uVar6 = s_session_use_ort_model_bytes_dire_001c6379._0_8_;
  local_90[0x20] = 'c';
  local_90[0x21] = 't';
  local_90[0x22] = 'l';
  local_90[0x23] = 'y';
  local_b8 = 0x3002;
  *(undefined8 *)(local_90 + 8) = uVar7;
  *(undefined8 *)local_90 = uVar6;
  *(undefined8 *)(local_90 + 0x18) = uVar9;
  *(undefined8 *)(local_90 + 0x10) = uVar8;
  local_b6 = 0;
  FUN_00569aa4(&local_80,lVar16 + 0x210,&local_a0,&local_b8);
  bVar10 = false;
  uVar4 = (ulong)(local_80 >> 1);
  if ((local_80 & 1) != 0) {
    uVar4 = local_78;
  }
  if (uVar4 == 1) {
    pcVar2 = local_70;
    if ((local_80 & 1) == 0) {
      pcVar2 = acStack_7f;
    }
    bVar10 = *pcVar2 == '1';
    if ((local_80 & 1) != 0) goto LAB_004a2a24;
LAB_004a2b10:
    if ((local_b8 & 1) == 0) goto LAB_004a2b18;
LAB_004a2a34:
    free(local_a8);
    if ((local_a0 & 1) != 0) goto LAB_004a2a44;
LAB_004a2b20:
    if (bVar10) goto LAB_004a2b24;
LAB_004a2a50:
    pvVar11 = *(void **)(lVar16 + 0x780);
    plVar1 = (long *)(lVar16 + 0x778);
    __src = *(void **)(lVar16 + 0x778);
    uVar15 = (ulong)**(int **)(param_2 + 0x10);
    __n = (long)pvVar11 - (long)__src;
    uVar4 = uVar15 - __n;
    if (uVar15 < __n || uVar4 == 0) {
      if (uVar15 < __n) {
        *(ulong *)(lVar16 + 0x780) = (long)__src + uVar15;
      }
LAB_004a2b50:
      pvVar11 = (void *)*plVar1;
      iVar3 = **(int **)(param_2 + 0x10);
    }
    else if ((ulong)(*(long *)(lVar16 + 0x788) - (long)pvVar11) < uVar4) {
      if (**(int **)(param_2 + 0x10) < 0) {
        if (*(long *)(lVar5 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_00323508(plVar1);
        }
        goto LAB_004a2c08;
      }
      uVar12 = *(long *)(lVar16 + 0x788) - (long)__src;
      uVar14 = uVar12 * 2;
      if (uVar14 < uVar15 || uVar14 - uVar15 == 0) {
        uVar14 = uVar15;
      }
      if (0x3ffffffffffffffe < uVar12) {
        uVar14 = 0x7fffffffffffffff;
      }
      pvVar11 = (void *)FUN_00759c3c(uVar14);
      memset((void *)((long)pvVar11 + __n),0,uVar4);
      memcpy(pvVar11,__src,__n);
      *(ulong *)(lVar16 + 0x788) = (long)pvVar11 + uVar14;
      *(void **)(lVar16 + 0x778) = pvVar11;
      *(ulong *)(lVar16 + 0x780) = (long)pvVar11 + uVar15;
      if (__src == (void *)0x0) goto LAB_004a2b50;
      free(__src);
      pvVar11 = (void *)*plVar1;
      iVar3 = **(int **)(param_2 + 0x10);
    }
    else {
      memset(pvVar11,0,uVar4);
      *(ulong *)(lVar16 + 0x780) = (long)pvVar11 + uVar4;
      pvVar11 = (void *)*plVar1;
      iVar3 = **(int **)(param_2 + 0x10);
    }
    if (iVar3 != 0) {
      memmove(pvVar11,(void *)**(undefined8 **)(param_2 + 0x18),(long)iVar3);
      iVar3 = **(int **)(param_2 + 0x10);
      if (iVar3 == -1) goto LAB_004a2b88;
      pvVar11 = (void *)*plVar1;
      goto joined_r0x004a2b3c;
    }
    lVar13 = 0;
  }
  else {
    if ((local_80 & 1) == 0) goto LAB_004a2b10;
LAB_004a2a24:
    free(local_70);
    if ((local_b8 & 1) != 0) goto LAB_004a2a34;
LAB_004a2b18:
    if ((local_a0 & 1) == 0) goto LAB_004a2b20;
LAB_004a2a44:
    free(local_90);
    if (!bVar10) goto LAB_004a2a50;
LAB_004a2b24:
    iVar3 = **(int **)(param_2 + 0x10);
    if (iVar3 == -1) goto LAB_004a2b88;
    pvVar11 = (void *)**(long **)(param_2 + 0x18);
joined_r0x004a2b3c:
    lVar13 = (long)iVar3;
    if ((iVar3 != 0) && (pvVar11 == (void *)0x0)) {
LAB_004a2b88:
                    /* WARNING: Subroutine does not return */
      FUN_004839bc();
    }
  }
  *(long *)(lVar16 + 0x768) = lVar13;
  *(void **)(lVar16 + 0x770) = pvVar11;
  *param_1 = 0;
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
LAB_004a2c08:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a2c0c  FUN_004a2c0c =====

/* WARNING: Type propagation algorithm not settling */

void FUN_004a2c0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *local_178 [9];
  ulong local_130;
  undefined8 uStack_128;
  void *local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined *local_108 [3];
  undefined8 uStack_f0;
  undefined4 auStack_e8 [4];
  undefined8 local_d8;
  long local_70;
  
  puVar4 = PTR_PTR_007a1e48;
  puVar3 = PTR_DAT_007a1e40;
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  puVar1 = PTR_DAT_007a1e40 + 0x40;
  local_178[0] = *(undefined **)(PTR_PTR_007a1e48 + 8);
  local_d8 = 0;
  local_108[0] = puVar1;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_007a1e48 + 0x10);
  lVar5 = *(long *)(local_178[0] + -0x18);
                    /* try { // try from 004a2c84 to 004a2c8f has its CatchHandler @ 004a2d90 */
  FUN_00715fc0((long)local_178 + lVar5,local_178 + 1);
  local_178[0] = puVar3 + 0x18;
  *(undefined8 *)((long)&uStack_f0 + lVar5) = 0;
  *(undefined4 *)((long)auStack_e8 + lVar5) = 0xffffffff;
                    /* try { // try from 004a2ca8 to 004a2caf has its CatchHandler @ 004a2d70 */
  local_108[0] = puVar1;
  FUN_007160dc(local_178 + 1);
  puVar1 = PTR_DAT_007a10f8 + 0x10;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_110 = 0x10;
  local_178[1] = puVar1;
  FUN_004a2da4(local_178,param_2,param_3,param_4);
                    /* try { // try from 004a2ce8 to 004a2cf3 has its CatchHandler @ 004a2d6c */
  FUN_00718470(param_1,local_178 + 1);
  local_178[0] = *(undefined **)puVar4;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(puVar4 + 0x18);
  local_178[1] = puVar1;
  if ((local_130 & 1) != 0) {
    free(local_120);
  }
  FUN_00716098(local_178 + 1);
  FUN_00716ee4(local_178,puVar4 + 8);
  thunk_FUN_00715e00(local_108);
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a2da4  FUN_004a2da4 =====

void FUN_004a2da4(undefined8 param_1,byte *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  byte *pbVar2;
  size_t sVar3;
  char *pcVar4;
  
  uVar1 = *(ulong *)(param_2 + 8);
  pbVar2 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
    uVar1 = (ulong)(*param_2 >> 1);
  }
                    /* try { // try from 004a2dd8 to 004a2ddb has its CatchHandler @ 004a2e2c */
  FUN_00303e0c(param_1,pbVar2,uVar1);
  pcVar4 = (char *)*param_3;
  sVar3 = strlen(pcVar4);
                    /* try { // try from 004a2dec to 004a2df7 has its CatchHandler @ 004a2e28 */
  FUN_00303e0c(param_1,pcVar4,sVar3);
  pcVar4 = (char *)*param_4;
  sVar3 = strlen(pcVar4);
                    /* try { // try from 004a2e08 to 004a2e13 has its CatchHandler @ 004a2e24 */
  FUN_00303e0c(param_1,pcVar4,sVar3);
  return;
}


// ===== 004a2e30  FUN_004a2e30 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_004a2e30(undefined8 param_1,byte *param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  undefined *puVar1;
  ulong uVar2;
  byte *pbVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  size_t sVar8;
  long lVar9;
  char *__s;
  undefined *local_178 [9];
  ulong local_130;
  undefined8 uStack_128;
  void *local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined *local_108 [3];
  undefined8 uStack_f0;
  undefined4 auStack_e8 [4];
  undefined8 local_d8;
  long local_70;
  
  puVar6 = PTR_PTR_007a1e48;
  puVar5 = PTR_DAT_007a1e40;
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  local_178[0] = *(undefined **)(PTR_PTR_007a1e48 + 8);
  puVar1 = PTR_DAT_007a1e40 + 0x40;
  local_d8 = 0;
  local_108[0] = puVar1;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_007a1e48 + 0x10);
  lVar9 = *(long *)(local_178[0] + -0x18);
                    /* try { // try from 004a2eb4 to 004a2ebf has its CatchHandler @ 004a300c */
  FUN_00715fc0((long)local_178 + lVar9,local_178 + 1);
  local_178[0] = puVar5 + 0x18;
  *(undefined8 *)((long)&uStack_f0 + lVar9) = 0;
  *(undefined4 *)((long)auStack_e8 + lVar9) = 0xffffffff;
                    /* try { // try from 004a2ed8 to 004a2edf has its CatchHandler @ 004a2fec */
  local_108[0] = puVar1;
  FUN_007160dc(local_178 + 1);
  puVar1 = PTR_DAT_007a10f8;
  local_110 = 0x10;
  pbVar3 = *(byte **)(param_2 + 0x10);
  local_178[1] = PTR_DAT_007a10f8 + 0x10;
  bVar7 = (*param_2 & 1) == 0;
  if (bVar7) {
    pbVar3 = param_2 + 1;
  }
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  uVar2 = (ulong)(*param_2 >> 1);
  if (!bVar7) {
    uVar2 = *(ulong *)(param_2 + 8);
  }
                    /* try { // try from 004a2f18 to 004a2f1f has its CatchHandler @ 004a2fe8 */
  FUN_00303e0c(local_178,pbVar3,uVar2);
  __s = (char *)*param_3;
  sVar8 = strlen(__s);
                    /* try { // try from 004a2f30 to 004a2f3b has its CatchHandler @ 004a2fe4 */
  FUN_00303e0c(local_178,__s,sVar8);
  FUN_004a3020(local_178,param_4,param_5,param_6,param_7,param_8,param_9);
                    /* try { // try from 004a2f58 to 004a2f63 has its CatchHandler @ 004a2fe0 */
  FUN_00718470(param_1,local_178 + 1);
  local_178[0] = *(undefined **)puVar6;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(puVar6 + 0x18);
  local_178[1] = puVar1 + 0x10;
  if ((local_130 & 1) != 0) {
    free(local_120);
  }
  FUN_00716098(local_178 + 1);
  FUN_00716ee4(local_178,puVar6 + 8);
  thunk_FUN_00715e00(local_108);
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a3020  FUN_004a3020 =====

void FUN_004a3020(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  size_t sVar1;
  char *pcVar2;
  
  pcVar2 = (char *)*param_2;
  sVar1 = strlen(pcVar2);
                    /* try { // try from 004a3060 to 004a306b has its CatchHandler @ 004a30c4 */
  FUN_00303e0c(param_1,pcVar2,sVar1);
                    /* try { // try from 004a3070 to 004a3077 has its CatchHandler @ 004a30c0 */
  FUN_00303e0c(param_1,*param_3,param_3[1]);
  pcVar2 = (char *)*param_4;
  sVar1 = strlen(pcVar2);
                    /* try { // try from 004a3088 to 004a3093 has its CatchHandler @ 004a30bc */
  FUN_00303e0c(param_1,pcVar2,sVar1);
  FUN_0049e5a0(param_1,param_5,param_6,param_7);
  return;
}


// ===== 004a30c8  FUN_004a30c8 =====

void FUN_004a30c8(byte *param_1)

{
  byte bVar1;
  undefined8 *__ptr;
  long *plVar2;
  void *pvVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  plVar2 = *(long **)(param_1 + 0xe8);
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  pbVar5 = *(byte **)(param_1 + 0xd0);
  if (pbVar5 != (byte *)0x0) {
    pbVar4 = *(byte **)(param_1 + 0xd8);
    pbVar6 = pbVar5;
    if (pbVar4 != pbVar5) {
      do {
        pbVar6 = pbVar4 + -0x18;
        if ((*pbVar6 & 1) != 0) {
          free(*(void **)(pbVar4 + -8));
        }
        pbVar4 = pbVar6;
      } while (pbVar6 != pbVar5);
      pbVar6 = *(byte **)(param_1 + 0xd0);
    }
    *(byte **)(param_1 + 0xd8) = pbVar5;
    free(pbVar6);
  }
  if ((param_1[0xb0] & 1) != 0) {
    free(*(void **)(param_1 + 0xc0));
  }
  __ptr = (undefined8 *)*(void **)(param_1 + 0x98);
  while (__ptr != (undefined8 *)0x0) {
    pvVar3 = (void *)*__ptr;
    if ((*(byte *)(__ptr + 5) & 1) == 0) {
      bVar1 = *(byte *)(__ptr + 2);
    }
    else {
      free((void *)__ptr[7]);
      bVar1 = *(byte *)(__ptr + 2);
    }
    if ((bVar1 & 1) != 0) {
      free((void *)__ptr[4]);
    }
    free(__ptr);
    __ptr = (undefined8 *)pvVar3;
  }
  pvVar3 = *(void **)(param_1 + 0x88);
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  if (pvVar3 != (void *)0x0) {
    free(pvVar3);
  }
  if ((param_1[0x70] & 1) == 0) {
    bVar1 = param_1[0x58];
  }
  else {
    free(*(void **)(param_1 + 0x80));
    bVar1 = param_1[0x58];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = param_1[0x40];
  }
  else {
    free(*(void **)(param_1 + 0x68));
    bVar1 = param_1[0x40];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = param_1[0x18];
  }
  else {
    free(*(void **)(param_1 + 0x50));
    bVar1 = param_1[0x18];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *param_1;
  }
  else {
    free(*(void **)(param_1 + 0x28));
    bVar1 = *param_1;
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  free(*(void **)(param_1 + 0x10));
  return;
}


// ===== 004a3238  FUN_004a3238 =====

void FUN_004a3238(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 004a325c  FUN_004a325c =====

void FUN_004a325c(long param_1)

{
  void *__ptr;
  
  __ptr = *(void **)(param_1 + 0x18);
  if (__ptr != (void *)0x0) {
    FUN_004a30c8(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 004a3294  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004a3298  FUN_004a3298 =====

void FUN_004a3298(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 004a32bc  FUN_004a32bc =====

void FUN_004a32bc(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004a32cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}


// ===== 004a32d4  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004a32d8  FUN_004a32d8 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_004a32d8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  size_t sVar5;
  long lVar6;
  char *pcVar7;
  undefined *local_178 [9];
  ulong local_130;
  undefined8 uStack_128;
  void *local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined *local_108 [3];
  undefined8 uStack_f0;
  undefined4 auStack_e8 [4];
  undefined8 local_d8;
  long local_70;
  
  puVar4 = PTR_PTR_007a1e48;
  puVar3 = PTR_DAT_007a1e40;
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  local_178[0] = *(undefined **)(PTR_PTR_007a1e48 + 8);
  puVar1 = PTR_DAT_007a1e40 + 0x40;
  local_d8 = 0;
  local_108[0] = puVar1;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_007a1e48 + 0x10);
  lVar6 = *(long *)(local_178[0] + -0x18);
                    /* try { // try from 004a335c to 004a3367 has its CatchHandler @ 004a34b4 */
  FUN_00715fc0((long)local_178 + lVar6,local_178 + 1);
  local_178[0] = puVar3 + 0x18;
  *(undefined8 *)((long)&uStack_f0 + lVar6) = 0;
  *(undefined4 *)((long)auStack_e8 + lVar6) = 0xffffffff;
                    /* try { // try from 004a3380 to 004a3387 has its CatchHandler @ 004a3494 */
  local_108[0] = puVar1;
  FUN_007160dc(local_178 + 1);
  puVar1 = PTR_DAT_007a10f8;
  pcVar7 = (char *)*param_2;
  local_178[1] = PTR_DAT_007a10f8 + 0x10;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_110 = 0x10;
  sVar5 = strlen(pcVar7);
                    /* try { // try from 004a33b8 to 004a33c3 has its CatchHandler @ 004a3490 */
  FUN_00303e0c(local_178,pcVar7,sVar5);
  pcVar7 = (char *)*param_3;
  sVar5 = strlen(pcVar7);
                    /* try { // try from 004a33d4 to 004a33df has its CatchHandler @ 004a348c */
  FUN_00303e0c(local_178,pcVar7,sVar5);
  FUN_004a34c8(local_178,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
                    /* try { // try from 004a3400 to 004a340b has its CatchHandler @ 004a3488 */
  FUN_00718470(param_1,local_178 + 1);
  local_178[0] = *(undefined **)puVar4;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(puVar4 + 0x18);
  local_178[1] = puVar1 + 0x10;
  if ((local_130 & 1) != 0) {
    free(local_120);
  }
  FUN_00716098(local_178 + 1);
  FUN_00716ee4(local_178,puVar4 + 8);
  thunk_FUN_00715e00(local_108);
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a34c8  FUN_004a34c8 =====

void FUN_004a34c8(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined8 *param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  byte *pbVar2;
  size_t sVar3;
  char *pcVar4;
  
  pcVar4 = (char *)*param_2;
  sVar3 = strlen(pcVar4);
                    /* try { // try from 004a350c to 004a3517 has its CatchHandler @ 004a3588 */
  FUN_00303e0c(param_1,pcVar4,sVar3);
  uVar1 = *(ulong *)(param_3 + 8);
  pbVar2 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar2 = param_3 + 1;
    uVar1 = (ulong)(*param_3 >> 1);
  }
                    /* try { // try from 004a3530 to 004a3537 has its CatchHandler @ 004a3584 */
  FUN_00303e0c(param_1,pbVar2,uVar1);
  pcVar4 = (char *)*param_4;
  sVar3 = strlen(pcVar4);
                    /* try { // try from 004a3548 to 004a3553 has its CatchHandler @ 004a3580 */
  FUN_00303e0c(param_1,pcVar4,sVar3);
  FUN_004a358c(param_1,param_5,param_6,param_7,param_8);
  return;
}


// ===== 004a358c  FUN_004a358c =====

void FUN_004a358c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  size_t sVar1;
  char *pcVar2;
  
                    /* try { // try from 004a35b0 to 004a35b3 has its CatchHandler @ 004a3614 */
  FUN_007176ec(param_1,*param_2);
  pcVar2 = (char *)*param_3;
  sVar1 = strlen(pcVar2);
                    /* try { // try from 004a35c4 to 004a35cf has its CatchHandler @ 004a3610 */
  FUN_00303e0c(param_1,pcVar2,sVar1);
                    /* try { // try from 004a35d4 to 004a35db has its CatchHandler @ 004a360c */
  FUN_007176ec(param_1,*param_4);
  pcVar2 = (char *)*param_5;
  sVar1 = strlen(pcVar2);
                    /* try { // try from 004a35ec to 004a35f7 has its CatchHandler @ 004a3608 */
  FUN_00303e0c(param_1,pcVar2,sVar1);
  return;
}


// ===== 004a3618  FUN_004a3618 =====

undefined8 * FUN_004a3618(ulong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong *__ptr;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  
  uVar11 = *param_1;
  uVar2 = 0xc;
  if ((uVar11 & 1) != 0) {
    uVar2 = param_1[2] << 1;
  }
  if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_002f9ee0();
  }
  __ptr = (ulong *)param_1[1];
  uVar12 = uVar11 >> 1;
  uVar4 = FUN_00759c3c(uVar2 << 3);
  puVar1 = (undefined8 *)(uVar4 + uVar12 * 8);
  *puVar1 = *param_2;
  if (1 < uVar11) {
    uVar5 = 0;
    puVar7 = param_1 + 1;
    if ((uVar11 & 1) != 0) {
      puVar7 = __ptr;
    }
    puVar8 = puVar7;
    if ((7 < uVar11) && (0x1f < uVar4 - (long)puVar7)) {
      uVar5 = uVar12 & 0x7ffffffffffffffc;
      puVar9 = (ulong *)(uVar4 + 0x10);
      puVar8 = puVar7 + uVar5;
      puVar7 = puVar7 + 2;
      uVar10 = uVar5;
      do {
        puVar3 = puVar7 + -1;
        uVar13 = puVar7[-2];
        uVar15 = puVar7[1];
        uVar14 = *puVar7;
        uVar10 = uVar10 - 4;
        puVar7 = puVar7 + 4;
        puVar9[-1] = *puVar3;
        puVar9[-2] = uVar13;
        puVar9[1] = uVar15;
        *puVar9 = uVar14;
        puVar9 = puVar9 + 4;
      } while (uVar10 != 0);
      if (uVar12 == uVar5) goto LAB_004a36f4;
    }
    lVar6 = uVar12 - uVar5;
    puVar7 = (ulong *)(uVar4 + uVar5 * 8);
    do {
      lVar6 = lVar6 + -1;
      *puVar7 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar7 = puVar7 + 1;
    } while (lVar6 != 0);
  }
LAB_004a36f4:
  if ((uVar11 & 1) != 0) {
    free(__ptr);
    uVar11 = *param_1;
  }
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  *param_1 = (uVar11 | 1) + 2;
  return puVar1;
}


// ===== 004a3734  FUN_004a3734 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_004a3734(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *local_178 [9];
  ulong local_130;
  undefined8 uStack_128;
  void *local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined *local_108 [3];
  undefined8 uStack_f0;
  undefined4 auStack_e8 [4];
  undefined8 local_d8;
  long local_70;
  
  puVar4 = PTR_PTR_007a1e48;
  puVar3 = PTR_DAT_007a1e40;
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  local_178[0] = *(undefined **)(PTR_PTR_007a1e48 + 8);
  puVar1 = PTR_DAT_007a1e40 + 0x40;
  local_d8 = 0;
  local_108[0] = puVar1;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_007a1e48 + 0x10);
  lVar5 = *(long *)(local_178[0] + -0x18);
                    /* try { // try from 004a37b8 to 004a37c3 has its CatchHandler @ 004a38d4 */
  FUN_00715fc0((long)local_178 + lVar5,local_178 + 1);
  local_178[0] = puVar3 + 0x18;
  *(undefined8 *)((long)&uStack_f0 + lVar5) = 0;
  *(undefined4 *)((long)auStack_e8 + lVar5) = 0xffffffff;
                    /* try { // try from 004a37dc to 004a37e3 has its CatchHandler @ 004a38b4 */
  local_108[0] = puVar1;
  FUN_007160dc(local_178 + 1);
  puVar1 = PTR_DAT_007a10f8 + 0x10;
  local_110 = 0x10;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_178[1] = puVar1;
  FUN_004a38e8(local_178,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
                    /* try { // try from 004a382c to 004a3837 has its CatchHandler @ 004a38b0 */
  FUN_00718470(param_1,local_178 + 1);
  local_178[0] = *(undefined **)puVar4;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(puVar4 + 0x18);
  local_178[1] = puVar1;
  if ((local_130 & 1) != 0) {
    free(local_120);
  }
  FUN_00716098(local_178 + 1);
  FUN_00716ee4(local_178,puVar4 + 8);
  thunk_FUN_00715e00(local_108);
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a38e8  FUN_004a38e8 =====

void FUN_004a38e8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  size_t sVar1;
  char *pcVar2;
  
  pcVar2 = (char *)*param_2;
  sVar1 = strlen(pcVar2);
                    /* try { // try from 004a3934 to 004a393f has its CatchHandler @ 004a39c0 */
  FUN_00303e0c(param_1,pcVar2,sVar1);
  pcVar2 = (char *)*param_3;
  sVar1 = strlen(pcVar2);
                    /* try { // try from 004a3950 to 004a395b has its CatchHandler @ 004a39bc */
  FUN_00303e0c(param_1,pcVar2,sVar1);
                    /* try { // try from 004a3960 to 004a3967 has its CatchHandler @ 004a39b8 */
  FUN_007176ec(param_1,*param_4);
  pcVar2 = (char *)*param_5;
  sVar1 = strlen(pcVar2);
                    /* try { // try from 004a3978 to 004a3983 has its CatchHandler @ 004a39b4 */
  FUN_00303e0c(param_1,pcVar2,sVar1);
  FUN_004a39c4(param_1,param_6,param_7,param_8,param_9);
  return;
}


// ===== 004a39c4  FUN_004a39c4 =====

void FUN_004a39c4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  size_t sVar1;
  char *pcVar2;
  
  pcVar2 = (char *)*param_2;
  sVar1 = strlen(pcVar2);
                    /* try { // try from 004a39f8 to 004a3a03 has its CatchHandler @ 004a3a68 */
  FUN_00303e0c(param_1,pcVar2,sVar1);
  pcVar2 = (char *)*param_3;
  sVar1 = strlen(pcVar2);
                    /* try { // try from 004a3a14 to 004a3a1f has its CatchHandler @ 004a3a64 */
  FUN_00303e0c(param_1,pcVar2,sVar1);
                    /* try { // try from 004a3a24 to 004a3a2b has its CatchHandler @ 004a3a60 */
  FUN_007176ec(param_1,*param_4);
  pcVar2 = (char *)*param_5;
  sVar1 = strlen(pcVar2);
                    /* try { // try from 004a3a3c to 004a3a47 has its CatchHandler @ 004a3a5c */
  FUN_00303e0c(param_1,pcVar2,sVar1);
  return;
}


// ===== 004a3a6c  FUN_004a3a6c =====

/* WARNING: Type propagation algorithm not settling */

void FUN_004a3a6c(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  size_t sVar5;
  long lVar6;
  char *__s;
  undefined *local_178 [9];
  ulong local_130;
  undefined8 uStack_128;
  void *local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined *local_108 [3];
  undefined8 uStack_f0;
  undefined4 auStack_e8 [4];
  undefined8 local_d8;
  long local_70;
  
  puVar4 = PTR_PTR_007a1e48;
  puVar3 = PTR_DAT_007a1e40;
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  puVar1 = PTR_DAT_007a1e40 + 0x40;
  local_178[0] = *(undefined **)(PTR_PTR_007a1e48 + 8);
  local_d8 = 0;
  local_108[0] = puVar1;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_007a1e48 + 0x10);
  lVar6 = *(long *)(local_178[0] + -0x18);
                    /* try { // try from 004a3ae8 to 004a3af3 has its CatchHandler @ 004a3c18 */
  FUN_00715fc0((long)local_178 + lVar6,local_178 + 1);
  local_178[0] = puVar3 + 0x18;
  *(undefined8 *)((long)&uStack_f0 + lVar6) = 0;
  *(undefined4 *)((long)auStack_e8 + lVar6) = 0xffffffff;
                    /* try { // try from 004a3b0c to 004a3b13 has its CatchHandler @ 004a3bf8 */
  local_108[0] = puVar1;
  FUN_007160dc(local_178 + 1);
  puVar1 = PTR_DAT_007a10f8;
  __s = (char *)*param_2;
  local_178[1] = PTR_DAT_007a10f8 + 0x10;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_110 = 0x10;
  sVar5 = strlen(__s);
                    /* try { // try from 004a3b44 to 004a3b4f has its CatchHandler @ 004a3bf4 */
  FUN_00303e0c(local_178,__s,sVar5);
  FUN_004a3c2c(local_178,param_3,param_4,param_5);
                    /* try { // try from 004a3b68 to 004a3b73 has its CatchHandler @ 004a3bf0 */
  FUN_00718470(param_1,local_178 + 1);
  local_178[0] = *(undefined **)puVar4;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(puVar4 + 0x18);
  local_178[1] = puVar1 + 0x10;
  if ((local_130 & 1) != 0) {
    free(local_120);
  }
  FUN_00716098(local_178 + 1);
  FUN_00716ee4(local_178,puVar4 + 8);
  thunk_FUN_00715e00(local_108);
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a3c2c  FUN_004a3c2c =====

void FUN_004a3c2c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,byte *param_4)

{
  ulong uVar1;
  byte *pbVar2;
  size_t sVar3;
  char *pcVar4;
  
  pcVar4 = (char *)*param_2;
  sVar3 = strlen(pcVar4);
                    /* try { // try from 004a3c58 to 004a3c63 has its CatchHandler @ 004a3cb8 */
  FUN_00303e0c(param_1,pcVar4,sVar3);
  pcVar4 = (char *)*param_3;
  sVar3 = strlen(pcVar4);
                    /* try { // try from 004a3c74 to 004a3c7f has its CatchHandler @ 004a3cb4 */
  FUN_00303e0c(param_1,pcVar4,sVar3);
  uVar1 = *(ulong *)(param_4 + 8);
  pbVar2 = *(byte **)(param_4 + 0x10);
  if ((*param_4 & 1) == 0) {
    pbVar2 = param_4 + 1;
    uVar1 = (ulong)(*param_4 >> 1);
  }
                    /* try { // try from 004a3c98 to 004a3c9f has its CatchHandler @ 004a3cb0 */
  FUN_00303e0c(param_1,pbVar2,uVar1);
  return;
}


// ===== 004a3cbc  FUN_004a3cbc =====

/* WARNING: Type propagation algorithm not settling */

void FUN_004a3cbc(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  size_t sVar5;
  long lVar6;
  char *pcVar7;
  undefined *local_178 [9];
  ulong local_130;
  undefined8 uStack_128;
  void *local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined *local_108 [3];
  undefined8 uStack_f0;
  undefined4 auStack_e8 [4];
  undefined8 local_d8;
  long local_70;
  
  puVar4 = PTR_PTR_007a1e48;
  puVar3 = PTR_DAT_007a1e40;
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  local_178[0] = *(undefined **)(PTR_PTR_007a1e48 + 8);
  puVar1 = PTR_DAT_007a1e40 + 0x40;
  local_d8 = 0;
  local_108[0] = puVar1;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_007a1e48 + 0x10);
  lVar6 = *(long *)(local_178[0] + -0x18);
                    /* try { // try from 004a3d3c to 004a3d47 has its CatchHandler @ 004a3e8c */
  FUN_00715fc0((long)local_178 + lVar6,local_178 + 1);
  local_178[0] = puVar3 + 0x18;
  *(undefined8 *)((long)&uStack_f0 + lVar6) = 0;
  *(undefined4 *)((long)auStack_e8 + lVar6) = 0xffffffff;
                    /* try { // try from 004a3d60 to 004a3d67 has its CatchHandler @ 004a3e6c */
  local_108[0] = puVar1;
  FUN_007160dc(local_178 + 1);
  puVar1 = PTR_DAT_007a10f8;
  pcVar7 = (char *)*param_2;
  local_178[1] = PTR_DAT_007a10f8 + 0x10;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_110 = 0x10;
  sVar5 = strlen(pcVar7);
                    /* try { // try from 004a3d98 to 004a3da3 has its CatchHandler @ 004a3e68 */
  FUN_00303e0c(local_178,pcVar7,sVar5);
  pcVar7 = (char *)*param_3;
  sVar5 = strlen(pcVar7);
                    /* try { // try from 004a3db4 to 004a3dbf has its CatchHandler @ 004a3e64 */
  FUN_00303e0c(local_178,pcVar7,sVar5);
  FUN_004a3ea0(local_178,param_4,param_5,param_6,param_7);
                    /* try { // try from 004a3dd8 to 004a3de3 has its CatchHandler @ 004a3e60 */
  FUN_00718470(param_1,local_178 + 1);
  local_178[0] = *(undefined **)puVar4;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(puVar4 + 0x18);
  local_178[1] = puVar1 + 0x10;
  if ((local_130 & 1) != 0) {
    free(local_120);
  }
  FUN_00716098(local_178 + 1);
  FUN_00716ee4(local_178,puVar4 + 8);
  thunk_FUN_00715e00(local_108);
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a3ea0  FUN_004a3ea0 =====

void FUN_004a3ea0(undefined8 param_1,byte *param_2,undefined8 *param_3,undefined4 *param_4,
                 undefined8 *param_5)

{
  ulong uVar1;
  byte *pbVar2;
  size_t sVar3;
  char *pcVar4;
  
  uVar1 = *(ulong *)(param_2 + 8);
  pbVar2 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
    uVar1 = (ulong)(*param_2 >> 1);
  }
                    /* try { // try from 004a3ed8 to 004a3edb has its CatchHandler @ 004a3f3c */
  FUN_00303e0c(param_1,pbVar2,uVar1);
  pcVar4 = (char *)*param_3;
  sVar3 = strlen(pcVar4);
                    /* try { // try from 004a3eec to 004a3ef7 has its CatchHandler @ 004a3f38 */
  FUN_00303e0c(param_1,pcVar4,sVar3);
                    /* try { // try from 004a3efc to 004a3f03 has its CatchHandler @ 004a3f34 */
  FUN_00717214(param_1,*param_4);
  pcVar4 = (char *)*param_5;
  sVar3 = strlen(pcVar4);
                    /* try { // try from 004a3f14 to 004a3f1f has its CatchHandler @ 004a3f30 */
  FUN_00303e0c(param_1,pcVar4,sVar3);
  return;
}


// ===== 004a3f40  FUN_004a3f40 =====

void FUN_004a3f40(ulong *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  ulong *puVar5;
  ulong *puVar6;
  
  uVar3 = *param_1;
  puVar5 = param_1 + 1;
  uVar2 = uVar3 & 1;
  puVar6 = puVar5;
  if (uVar2 != 0) {
    puVar6 = (ulong *)*puVar5;
  }
  if (1 < uVar3) {
    uVar3 = uVar3 >> 1;
    puVar6 = puVar6 + uVar3 * 2 + -1;
    do {
      plVar4 = (long *)*puVar6;
      if ((plVar4 != (long *)0x0) &&
         (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar4 + 1), lVar1 == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        FUN_0071245c(plVar4);
      }
      uVar3 = uVar3 - 1;
      puVar6 = puVar6 + -2;
    } while (uVar3 != 0);
    uVar2 = *param_1 & 1;
  }
  if (uVar2 != 0) {
    free((void *)*puVar5);
    return;
  }
  return;
}


// ===== 004a3ffc  FUN_004a3ffc =====

void FUN_004a3ffc(ulong *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  ulong *puVar5;
  ulong *puVar6;
  
  uVar3 = *param_1;
  puVar5 = param_1 + 1;
  uVar2 = uVar3 & 1;
  puVar6 = puVar5;
  if (uVar2 != 0) {
    puVar6 = (ulong *)*puVar5;
  }
  if (1 < uVar3) {
    uVar3 = uVar3 >> 1;
    puVar6 = puVar6 + uVar3 * 3 + -2;
    do {
      plVar4 = (long *)*puVar6;
      if ((plVar4 != (long *)0x0) &&
         (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar4 + 1), lVar1 == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        FUN_0071245c(plVar4);
      }
      uVar3 = uVar3 - 1;
      puVar6 = puVar6 + -3;
    } while (uVar3 != 0);
    uVar2 = *param_1 & 1;
  }
  if (uVar2 != 0) {
    free((void *)*puVar5);
    return;
  }
  return;
}


// ===== 004a40bc  FUN_004a40bc =====

void FUN_004a40bc(ulong *param_1,ulong param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong *puVar11;
  
  uVar7 = *param_1;
  uVar10 = uVar7 & 1;
  puVar9 = param_1 + 1;
  uVar5 = 2;
  if (uVar10 != 0) {
    puVar9 = (ulong *)param_1[1];
    uVar5 = param_1[2];
  }
  if (uVar5 < param_2) {
    uVar5 = uVar5 * 2;
    if (uVar5 < param_2 || uVar5 - param_2 == 0) {
      uVar5 = param_2;
    }
    if (0xaaaaaaaaaaaaaaa < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_002f9ee0();
    }
    uVar3 = FUN_00759c3c(uVar5 * 0x18);
    if (1 < uVar7) {
      uVar7 = uVar7 >> 1;
      puVar8 = (ulong *)(uVar3 + 0x10);
      uVar10 = uVar7;
      puVar11 = puVar9;
      do {
        uVar2 = puVar11[1];
        puVar8[-2] = *puVar11;
        puVar8[-1] = uVar2;
        if (uVar2 != 0) {
          FUN_00755c20(1,uVar2 + 8);
        }
        puVar1 = puVar11 + 2;
        uVar10 = uVar10 - 1;
        puVar11 = puVar11 + 3;
        *puVar8 = *puVar1;
        puVar8 = puVar8 + 3;
      } while (uVar10 != 0);
      puVar9 = puVar9 + uVar7 * 3 + -2;
      do {
        plVar6 = (long *)*puVar9;
        if ((plVar6 != (long *)0x0) &&
           (lVar4 = FUN_00755c50(0xffffffffffffffff,plVar6 + 1), lVar4 == 0)) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          FUN_0071245c(plVar6);
        }
        uVar7 = uVar7 - 1;
        puVar9 = puVar9 + -3;
      } while (uVar7 != 0);
      uVar7 = *param_1;
      uVar10 = uVar7 & 1;
    }
    if (uVar10 != 0) {
      free((void *)param_1[1]);
      uVar7 = *param_1;
    }
    param_1[1] = uVar3;
    param_1[2] = uVar5;
    *param_1 = uVar7 | 1;
  }
  return;
}


// ===== 004a420c  FUN_004a420c =====

ulong * FUN_004a420c(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  size_t __n;
  ulong *puVar2;
  ulong uVar3;
  char *__s;
  void *__dest;
  
  uVar3 = *param_1;
  uVar1 = 2;
  if ((uVar3 & 1) != 0) {
    uVar1 = param_1[2];
  }
  if (uVar3 >> 1 == uVar1) {
    puVar2 = (ulong *)FUN_004a4318(param_1);
    return puVar2;
  }
  __s = (char *)*param_2;
  puVar2 = param_1 + 1;
  if ((uVar3 & 1) != 0) {
    puVar2 = (ulong *)param_1[1];
  }
  puVar2 = puVar2 + (uVar3 >> 1) * 3;
  __n = strlen(__s);
  if (0xfffffffffffffff7 < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_002fb400(puVar2);
  }
  if (__n < 0x17) {
    __dest = (void *)((long)puVar2 + 1);
    *(char *)puVar2 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_004a42d0;
  }
  else {
    uVar1 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar1 = __n | 7;
    }
    __dest = (void *)FUN_00759c3c(uVar1 + 1);
    puVar2[1] = __n;
    puVar2[2] = (ulong)__dest;
    *puVar2 = uVar1 + 1 | 1;
  }
  memmove(__dest,__s,__n);
LAB_004a42d0:
  *(undefined1 *)((long)__dest + __n) = 0;
  *param_1 = *param_1 + 2;
  return puVar2;
}


// ===== 004a4318  FUN_004a4318 =====

ulong * FUN_004a4318(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong *puVar2;
  size_t __n;
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  char *__s;
  undefined1 *__dest;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar9 = *param_1;
  puVar7 = param_1 + 1;
  uVar1 = 4;
  if ((uVar9 & 1) != 0) {
    puVar7 = (ulong *)param_1[1];
    uVar1 = param_1[2] << 1;
  }
  if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_002f9ee0();
  }
  uVar8 = uVar9 >> 1;
  puVar2 = (ulong *)FUN_00759c3c(uVar1 * 0x18);
  __s = (char *)*param_2;
  puVar6 = puVar2 + uVar8 * 3;
  __n = strlen(__s);
  if (0xfffffffffffffff7 < __n) {
                    /* try { // try from 004a44d8 to 004a44e3 has its CatchHandler @ 004a44e4 */
                    /* WARNING: Subroutine does not return */
    FUN_002fb400(puVar6);
  }
  if (__n < 0x17) {
    __dest = (undefined1 *)((long)puVar6 + 1);
    *(char *)puVar6 = (char)((int)__n << 1);
    if (__n == 0) {
      *__dest = 0;
      goto joined_r0x004a442c;
    }
  }
  else {
    uVar4 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar4 = __n | 7;
    }
                    /* try { // try from 004a43f4 to 004a43fb has its CatchHandler @ 004a44e4 */
    __dest = (undefined1 *)FUN_00759c3c(uVar4 + 1);
    puVar6[1] = __n;
    puVar6[2] = (ulong)__dest;
    *puVar6 = uVar4 + 1 | 1;
  }
  memmove(__dest,__s,__n);
  __dest[__n] = 0;
joined_r0x004a442c:
  puVar3 = puVar2;
  uVar4 = uVar8;
  puVar5 = puVar7;
  if (1 < uVar9) {
    do {
      uVar10 = puVar5[1];
      uVar9 = *puVar5;
      uVar4 = uVar4 - 1;
      puVar3[2] = puVar5[2];
      puVar3[1] = uVar10;
      *puVar3 = uVar9;
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
      puVar3 = puVar3 + 3;
      puVar5 = puVar5 + 3;
    } while (uVar4 != 0);
    puVar7 = puVar7 + uVar8 * 3 + -1;
    do {
      if ((puVar7[-2] & 1) != 0) {
        free((void *)*puVar7);
      }
      uVar8 = uVar8 - 1;
      puVar7 = puVar7 + -3;
    } while (uVar8 != 0);
  }
  uVar9 = *param_1;
  if ((uVar9 & 1) != 0) {
    free((void *)param_1[1]);
    uVar9 = *param_1;
  }
  param_1[1] = (ulong)puVar2;
  param_1[2] = uVar1;
  *param_1 = (uVar9 | 1) + 2;
  return puVar6;
}


// ===== 004a44f8  FUN_004a44f8 =====

undefined8 * FUN_004a44f8(ulong *param_1,undefined8 *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  long *plVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong *puVar12;
  
  uVar11 = *param_1;
  puVar10 = param_1 + 1;
  uVar3 = 4;
  if ((uVar11 & 1) != 0) {
    puVar10 = (ulong *)param_1[1];
    uVar3 = param_1[2] << 1;
  }
  if (0xaaaaaaaaaaaaaaa < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_002f9ee0();
  }
  uVar9 = uVar11 >> 1;
  uVar4 = FUN_00759c3c(uVar3 * 0x18);
  puVar6 = (undefined8 *)(uVar4 + uVar9 * 0x18);
  lVar5 = param_2[1];
  *puVar6 = *param_2;
  puVar6[1] = lVar5;
  if (lVar5 != 0) {
    FUN_00755c20(1,lVar5 + 8);
  }
  puVar6[2] = param_2[2];
  if (1 < uVar11) {
    puVar7 = (ulong *)(uVar4 + 0x10);
    uVar11 = uVar9;
    puVar12 = puVar10;
    do {
      uVar2 = puVar12[1];
      puVar7[-2] = *puVar12;
      puVar7[-1] = uVar2;
      if (uVar2 != 0) {
        FUN_00755c20(1,uVar2 + 8);
      }
      puVar1 = puVar12 + 2;
      uVar11 = uVar11 - 1;
      puVar12 = puVar12 + 3;
      *puVar7 = *puVar1;
      puVar7 = puVar7 + 3;
    } while (uVar11 != 0);
    puVar10 = puVar10 + uVar9 * 3 + -2;
    do {
      plVar8 = (long *)*puVar10;
      if ((plVar8 != (long *)0x0) &&
         (lVar5 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar5 == 0)) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        FUN_0071245c(plVar8);
      }
      uVar9 = uVar9 - 1;
      puVar10 = puVar10 + -3;
    } while (uVar9 != 0);
  }
  uVar11 = *param_1;
  if ((uVar11 & 1) != 0) {
    free((void *)param_1[1]);
    uVar11 = *param_1;
  }
  param_1[1] = uVar4;
  param_1[2] = uVar3;
  *param_1 = (uVar11 | 1) + 2;
  return puVar6;
}


// ===== 004a4670  FUN_004a4670 =====

undefined8 * FUN_004a4670(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *__ptr;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  __ptr = (undefined8 *)*param_1;
  puVar9 = (undefined8 *)param_1[1];
  lVar10 = (long)puVar9 - (long)__ptr;
  lVar4 = lVar10 >> 3;
  uVar1 = lVar4 * -0x5555555555555555 + 1;
  if (uVar1 < 0xaaaaaaaaaaaaaab) {
    lVar5 = param_1[2] - (long)__ptr >> 3;
    uVar6 = lVar5 * 0x5555555555555556;
    if (uVar6 < uVar1 || uVar6 - uVar1 == 0) {
      uVar6 = uVar1;
    }
    if (0x555555555555554 < (ulong)(lVar5 * -0x5555555555555555)) {
      uVar6 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar6 == 0) {
      lVar3 = 0;
      lVar5 = param_2[1];
      puVar11 = (undefined8 *)(lVar4 * 8);
      *puVar11 = *param_2;
      puVar11[1] = lVar5;
    }
    else {
      if (0xaaaaaaaaaaaaaaa < uVar6) goto LAB_004a482c;
      lVar3 = FUN_00759c3c(uVar6 * 0x18);
      lVar5 = param_2[1];
      puVar11 = (undefined8 *)(lVar3 + lVar4 * 8);
      *puVar11 = *param_2;
      puVar11[1] = lVar5;
    }
    if (lVar5 != 0) {
      FUN_00755c20(1,lVar5 + 8);
      __ptr = (undefined8 *)*param_1;
      puVar9 = (undefined8 *)param_1[1];
      lVar10 = (long)puVar9 - (long)__ptr;
    }
    puVar11[2] = param_2[2];
    puVar7 = (undefined8 *)((long)puVar11 - lVar10);
    puVar12 = __ptr;
    if (__ptr != puVar9) {
      do {
        lVar4 = puVar12[1];
        *puVar7 = *puVar12;
        puVar7[1] = lVar4;
        if (lVar4 != 0) {
          FUN_00755c20(1,lVar4 + 8);
        }
        puVar2 = puVar12 + 3;
        puVar7[2] = puVar12[2];
        puVar7 = puVar7 + 3;
        puVar12 = puVar2;
      } while (puVar2 != puVar9);
      do {
        plVar8 = (long *)__ptr[1];
        if ((plVar8 != (long *)0x0) &&
           (lVar4 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar4 == 0)) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          FUN_0071245c(plVar8);
        }
        __ptr = __ptr + 3;
      } while (__ptr != puVar9);
      __ptr = (undefined8 *)*param_1;
    }
    *param_1 = (long)puVar11 - lVar10;
    param_1[1] = (long)(puVar11 + 3);
    param_1[2] = lVar3 + uVar6 * 0x18;
    if (__ptr != (undefined8 *)0x0) {
      free(__ptr);
    }
    return puVar11 + 3;
  }
  FUN_00477170(param_1);
LAB_004a482c:
                    /* WARNING: Subroutine does not return */
  FUN_002f9ee0();
}


// ===== 004a4830  FUN_004a4830 =====

undefined8 * FUN_004a4830(long *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *__ptr;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  puVar9 = (undefined8 *)*param_1;
  __ptr = (undefined8 *)param_1[1];
  lVar3 = (long)__ptr - (long)puVar9 >> 3;
  uVar1 = lVar3 * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar1) {
    FUN_00477170(param_1);
LAB_004a49a4:
                    /* WARNING: Subroutine does not return */
    FUN_002f9ee0();
  }
  lVar5 = param_1[2] - (long)puVar9 >> 3;
  uVar6 = lVar5 * 0x5555555555555556;
  if (uVar6 < uVar1 || uVar6 - uVar1 == 0) {
    uVar6 = uVar1;
  }
  if (0x555555555555554 < (ulong)(lVar5 * -0x5555555555555555)) {
    uVar6 = 0xaaaaaaaaaaaaaaa;
  }
  if (uVar6 == 0) {
    lVar5 = 0;
  }
  else {
    if (0xaaaaaaaaaaaaaaa < uVar6) goto LAB_004a49a4;
    lVar5 = FUN_00759c3c(uVar6 * 0x18);
  }
  puVar4 = (undefined8 *)(lVar5 + lVar3 * 8);
  puVar10 = (undefined8 *)((long)puVar4 - ((long)__ptr - (long)puVar9));
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar7 = puVar10;
  puVar11 = puVar9;
  if (puVar9 != __ptr) {
    do {
      lVar3 = puVar11[1];
      *puVar7 = *puVar11;
      puVar7[1] = lVar3;
      if (lVar3 != 0) {
        FUN_00755c20(1,lVar3 + 8);
      }
      puVar2 = puVar11 + 3;
      puVar7[2] = puVar11[2];
      puVar7 = puVar7 + 3;
      puVar11 = puVar2;
    } while (puVar2 != __ptr);
    do {
      plVar8 = (long *)puVar9[1];
      if ((plVar8 != (long *)0x0) &&
         (lVar3 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar3 == 0)) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        FUN_0071245c(plVar8);
      }
      puVar9 = puVar9 + 3;
    } while (puVar9 != __ptr);
    __ptr = (undefined8 *)*param_1;
  }
  *param_1 = (long)puVar10;
  param_1[1] = (long)(puVar4 + 3);
  param_1[2] = lVar5 + uVar6 * 0x18;
  if (__ptr != (undefined8 *)0x0) {
    free(__ptr);
  }
  return puVar4 + 3;
}


// ===== 004a49a8  FUN_004a49a8 =====

ulong * FUN_004a49a8(ulong *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  long lVar7;
  ulong *puVar8;
  ulong *puVar9;
  void *__ptr;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  
  uVar10 = *param_1;
  uVar6 = uVar10 & 1;
  uVar2 = 0xc;
  if (uVar6 != 0) {
    uVar2 = param_1[2] << 1;
  }
  puVar3 = param_1 + 1;
  if (uVar6 != 0) {
    puVar3 = (ulong *)param_1[1];
  }
  if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_002f9ee0();
  }
  uVar12 = uVar10 >> 1;
  puVar4 = (ulong *)FUN_00759c3c(uVar2 << 3);
  puVar1 = puVar4 + uVar12;
  *puVar1 = 0;
  if (uVar10 < 2) goto LAB_004a4abc;
  if ((uVar10 < 0xc) || ((puVar3 < puVar4 + uVar12 && (puVar4 < puVar3 + uVar12)))) {
    uVar6 = 0;
    puVar5 = puVar3;
LAB_004a4a3c:
    lVar7 = uVar12 - uVar6;
    puVar8 = puVar4 + uVar6;
    do {
      uVar6 = *puVar5;
      lVar7 = lVar7 + -1;
      *puVar5 = 0;
      *puVar8 = uVar6;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    } while (lVar7 != 0);
  }
  else {
    uVar6 = uVar12 & 0x7ffffffffffffffc;
    puVar8 = puVar4 + 2;
    puVar5 = puVar3 + uVar6;
    puVar9 = puVar3 + 2;
    uVar10 = uVar6;
    do {
      uVar14 = puVar9[-1];
      uVar13 = puVar9[-2];
      uVar16 = puVar9[1];
      uVar15 = *puVar9;
      uVar10 = uVar10 - 4;
      puVar9[-1] = 0;
      puVar9[-2] = 0;
      puVar9[1] = 0;
      *puVar9 = 0;
      puVar9 = puVar9 + 4;
      puVar8[-1] = uVar14;
      puVar8[-2] = uVar13;
      puVar8[1] = uVar16;
      *puVar8 = uVar15;
      puVar8 = puVar8 + 4;
    } while (uVar10 != 0);
    if (uVar12 != uVar6) goto LAB_004a4a3c;
  }
  do {
    __ptr = (void *)puVar3[uVar12 - 1];
    puVar3[uVar12 - 1] = 0;
    if (__ptr != (void *)0x0) {
      plVar11 = *(long **)((long)__ptr + 8);
      if ((plVar11 != (long *)0x0) &&
         (lVar7 = FUN_00755c50(0xffffffffffffffff,plVar11 + 1), lVar7 == 0)) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        FUN_0071245c(plVar11);
      }
      free(__ptr);
    }
    uVar12 = uVar12 - 1;
  } while (uVar12 != 0);
  uVar10 = *param_1;
  uVar6 = uVar10 & 1;
LAB_004a4abc:
  if (uVar6 != 0) {
    free((void *)param_1[1]);
    uVar10 = *param_1;
  }
  param_1[1] = (ulong)puVar4;
  param_1[2] = uVar2;
  *param_1 = (uVar10 | 1) + 2;
  return puVar1;
}


// ===== 004a4b3c  FUN_004a4b3c =====

void FUN_004a4b3c(void)

{
  return;
}


// ===== 004a4b40  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004a4b44  FUN_004a4b44 =====

void FUN_004a4b44(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x70);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  puVar1[8] = *(undefined8 *)(param_1 + 0x40);
  puVar1[7] = uVar2;
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  puVar1[10] = uVar5;
  puVar1[9] = uVar4;
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 8);
  puVar1[0xc] = uVar3;
  puVar1[0xb] = uVar2;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_007900c0;
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  puVar1[4] = uVar4;
  puVar1[3] = uVar3;
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  puVar1[2] = uVar6;
  puVar1[1] = uVar5;
  puVar1[0xd] = uVar2;
  puVar1[6] = uVar4;
  puVar1[5] = uVar3;
  return;
}


// ===== 004a4bac  FUN_004a4bac =====

void FUN_004a4bac(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_2 = &PTR_FUN_007900c0;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 8);
  param_2[6] = *(undefined8 *)(param_1 + 0x30);
  param_2[5] = uVar1;
  param_2[4] = uVar3;
  param_2[3] = uVar2;
  param_2[2] = uVar5;
  param_2[1] = uVar4;
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  param_2[0xd] = *(undefined8 *)(param_1 + 0x68);
  param_2[0xc] = uVar2;
  param_2[0xb] = uVar1;
  param_2[10] = uVar6;
  param_2[9] = uVar5;
  param_2[8] = uVar4;
  param_2[7] = uVar3;
  return;
}


// ===== 004a4bf4  FUN_004a4bf4 =====

void FUN_004a4bf4(void)

{
  return;
}


// ===== 004a4bf8  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004a4bfc  FUN_004a4bfc =====

void FUN_004a4bfc(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  byte bVar6;
  long lVar7;
  void *pvVar8;
  undefined8 uVar9;
  void *pvVar10;
  void *local_a8;
  void *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  uint local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined2 uStack_80;
  undefined2 uStack_7e;
  undefined4 uStack_7c;
  undefined2 uStack_78;
  void *local_70;
  undefined8 uStack_68;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar7 = tpidr_el0;
  local_48 = *(long *)(lVar7 + 0x28);
  local_a0 = (void *)0x0;
  if (*(long *)(param_1 + 8) == 0) {
    uStack_94 = 0;
    local_90 = 0;
    local_98 = 0xffffffff;
    local_84 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    local_70 = (void *)0x0;
    uStack_58 = 0;
    local_60 = (undefined8 *)0x0;
    local_8c = 0;
    local_50 = 0x3f800000;
    uStack_7e = 0;
    uStack_7c = 0;
    uStack_78 = 0;
                    /* try { // try from 004a4ccc to 004a4cdb has its CatchHandler @ 004a4e08 */
    FUN_00493764(&local_a8,*(undefined8 *)(param_1 + 0x10),&local_98,*(undefined8 *)(param_1 + 0x18)
                 ,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                 *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                 *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                 *(undefined8 *)(param_1 + 0x50));
    pvVar10 = local_a0;
    local_a0 = local_a8;
    local_a8 = (void *)0x0;
    pvVar8 = local_70;
    puVar1 = local_60;
    if (pvVar10 != (void *)0x0) {
      if ((*(byte *)((long)pvVar10 + 8) & 1) != 0) {
        free(*(void **)((long)pvVar10 + 0x18));
      }
      free(pvVar10);
      pvVar10 = local_a8;
      local_a8 = (void *)0x0;
      pvVar8 = local_70;
      puVar1 = local_60;
      if (pvVar10 != (void *)0x0) {
        if ((*(byte *)((long)pvVar10 + 8) & 1) != 0) {
          free(*(void **)((long)pvVar10 + 0x18));
        }
        free(pvVar10);
        pvVar8 = local_70;
        puVar1 = local_60;
      }
    }
    while (puVar1 != (undefined8 *)0x0) {
      pvVar10 = (void *)*puVar1;
      local_70 = pvVar8;
      if ((*(byte *)(puVar1 + 5) & 1) == 0) {
        bVar6 = *(byte *)(puVar1 + 2);
      }
      else {
        free((void *)puVar1[7]);
        bVar6 = *(byte *)(puVar1 + 2);
      }
      if ((bVar6 & 1) != 0) {
        free((void *)puVar1[4]);
      }
      free(puVar1);
      pvVar8 = local_70;
      puVar1 = (undefined8 *)pvVar10;
    }
    local_70 = (void *)0x0;
    if (pvVar8 != (void *)0x0) {
      free(pvVar8);
    }
    pvVar8 = local_a0;
    if ((local_90 & 1) == 0) goto LAB_004a4d4c;
    pvVar10 = (void *)CONCAT44(uStack_7c,CONCAT22(uStack_7e,uStack_80));
  }
  else {
                    /* try { // try from 004a4c40 to 004a4c4b has its CatchHandler @ 004a4e1c */
    FUN_00493764(&local_98,*(undefined8 *)(param_1 + 0x10),*(long *)(param_1 + 8),
                 *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                 *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                 *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                 *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
    pvVar10 = local_a0;
    pvVar8 = (void *)CONCAT44(uStack_94,local_98);
    local_98 = 0;
    uStack_94 = 0;
    if (local_a0 == (void *)0x0) goto LAB_004a4d4c;
    if ((*(byte *)((long)local_a0 + 8) & 1) != 0) {
      puVar1 = (undefined8 *)((long)local_a0 + 0x18);
      local_a0 = pvVar8;
      free((void *)*puVar1);
      pvVar8 = local_a0;
    }
    local_a0 = pvVar8;
    free(pvVar10);
    pvVar10 = (void *)CONCAT44(uStack_94,local_98);
    local_98 = 0;
    uStack_94 = 0;
    pvVar8 = local_a0;
    if (pvVar10 == (void *)0x0) goto LAB_004a4d4c;
    if ((*(byte *)((long)pvVar10 + 8) & 1) != 0) {
      free(*(void **)((long)pvVar10 + 0x18));
    }
  }
  free(pvVar10);
  pvVar8 = local_a0;
LAB_004a4d4c:
  local_a0 = pvVar8;
  pvVar8 = local_a0;
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  pcVar4 = *(code **)(param_1 + 0x58);
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  uVar5 = *(undefined8 *)(param_1 + 0x68);
                    /* try { // try from 004a4d58 to 004a4d77 has its CatchHandler @ 004a4ed4 */
  uVar9 = FUN_0058044c(&local_a0);
  if (pvVar8 != (void *)0x0) {
    uVar5 = 0;
  }
  (*pcVar4)(uVar3,uVar2,uVar5,uVar9);
  pvVar8 = local_a0;
  local_a0 = (void *)0x0;
  if (pvVar8 != (void *)0x0) {
    if ((*(byte *)((long)pvVar8 + 8) & 1) != 0) {
      free(*(void **)((long)pvVar8 + 0x18));
    }
    free(pvVar8);
  }
  if (*(long *)(lVar7 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004a4efc  FUN_004a4efc =====

void FUN_004a4efc(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  char *__s;
  size_t __n;
  void *__ptr;
  void *pvVar3;
  ulong local_68;
  size_t local_60;
  void *local_58;
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  __s = (char *)(**(code **)(*(long *)param_1[1] + 0x10))();
  __n = strlen(__s);
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_68);
    }
    goto LAB_004a5090;
  }
  if (__n < 0x17) {
    pvVar3 = (void *)((ulong)&local_68 | 1);
    local_68 = CONCAT71(local_68._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_004a4f98;
  }
  else {
    uVar1 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar1 = __n | 7;
    }
    pvVar3 = (void *)FUN_00759c3c(uVar1 + 1);
    local_68 = uVar1 + 1 | 1;
    local_60 = __n;
    local_58 = pvVar3;
LAB_004a4f98:
    memcpy(pvVar3,__s,__n);
  }
  *(undefined1 *)((long)pvVar3 + __n) = 0;
                    /* try { // try from 004a4fac to 004a4fbf has its CatchHandler @ 004a5064 */
  FUN_0063aa48(&local_50,2,6,&local_68);
  pvVar3 = local_50;
  local_50 = (void *)0x0;
  __ptr = *(void **)*param_1;
  *(void **)*param_1 = pvVar3;
  if (__ptr != (void *)0x0) {
    if ((*(byte *)((long)__ptr + 8) & 1) != 0) {
      free(*(void **)((long)__ptr + 0x18));
    }
    free(__ptr);
  }
  pvVar3 = local_50;
  local_50 = (void *)0x0;
  if (pvVar3 != (void *)0x0) {
    if ((*(byte *)((long)pvVar3 + 8) & 1) != 0) {
      free(*(void **)((long)pvVar3 + 0x18));
    }
    free(pvVar3);
  }
  if ((local_68 & 1) != 0) {
    free(local_58);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_004a5090:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a5094  FUN_004a5094 =====

void FUN_004a5094(ulong *param_1,ulong param_2)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  
  uVar6 = *param_1;
  uVar8 = uVar6 & 1;
  puVar9 = param_1 + 1;
  uVar3 = 3;
  if (uVar8 != 0) {
    puVar9 = (ulong *)param_1[1];
    uVar3 = param_1[2];
  }
  if (uVar3 < param_2) {
    uVar3 = uVar3 * 2;
    if (uVar3 < param_2 || uVar3 - param_2 == 0) {
      uVar3 = param_2;
    }
    if (uVar3 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_002f9ee0();
    }
    puVar1 = (ulong *)FUN_00759c3c(uVar3 << 4);
    if (1 < uVar6) {
      uVar6 = uVar6 >> 1;
      puVar4 = puVar1;
      uVar8 = uVar6;
      puVar5 = puVar9;
      do {
        uVar10 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar4[1] = puVar5[1];
        *puVar4 = uVar10;
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar4 = puVar4 + 2;
        puVar5 = puVar5 + 2;
      } while (uVar8 != 0);
      puVar9 = puVar9 + uVar6 * 2 + -1;
      do {
        plVar7 = (long *)*puVar9;
        if ((plVar7 != (long *)0x0) &&
           (lVar2 = FUN_00755c50(0xffffffffffffffff,plVar7 + 1), lVar2 == 0)) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          FUN_0071245c(plVar7);
        }
        uVar6 = uVar6 - 1;
        puVar9 = puVar9 + -2;
      } while (uVar6 != 0);
      uVar6 = *param_1;
      uVar8 = uVar6 & 1;
    }
    if (uVar8 != 0) {
      free((void *)param_1[1]);
      uVar6 = *param_1;
    }
    param_1[1] = (ulong)puVar1;
    param_1[2] = uVar3;
    *param_1 = uVar6 | 1;
  }
  return;
}


// ===== 004a51a8  FUN_004a51a8 =====

void FUN_004a51a8(long param_1)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  bVar2 = *(byte *)(param_1 + 0x40);
  uVar5 = *(ulong *)(param_1 + 0x48);
  lVar4 = *(long *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = 0;
  if ((bVar2 & 1) == 0) {
    lVar4 = param_1 + 0x41;
    uVar5 = (ulong)(bVar2 >> 1);
  }
  if ((*(uint *)(param_1 + 0x60) >> 3 & 1) != 0) {
    *(long *)(param_1 + 0x10) = lVar4;
    *(long *)(param_1 + 0x18) = lVar4;
    *(ulong *)(param_1 + 0x58) = lVar4 + uVar5;
    *(ulong *)(param_1 + 0x20) = lVar4 + uVar5;
  }
  if ((*(uint *)(param_1 + 0x60) >> 4 & 1) != 0) {
    *(ulong *)(param_1 + 0x58) = lVar4 + uVar5;
    lVar1 = 0x16;
    if ((bVar2 & 1) != 0) {
      lVar1 = (*(ulong *)(param_1 + 0x40) & 0xfffffffffffffffe) - 1;
    }
    FUN_00713cc0((byte *)(param_1 + 0x40),lVar1,0);
    *(long *)(param_1 + 0x28) = lVar4;
    *(long *)(param_1 + 0x30) = lVar4;
    uVar3 = (ulong)(*(byte *)(param_1 + 0x40) >> 1);
    if ((*(byte *)(param_1 + 0x40) & 1) != 0) {
      uVar3 = *(ulong *)(param_1 + 0x48);
    }
    *(ulong *)(param_1 + 0x38) = lVar4 + uVar3;
    if ((*(byte *)(param_1 + 0x60) & 3) != 0) {
      if (uVar5 >> 0x1f != 0) {
        uVar3 = (uVar5 - 0x80000000) / 0x7fffffff;
        lVar4 = lVar4 + 0x7fffffff + uVar3 * 0x7fffffff;
        uVar5 = (uVar5 + uVar3 * -0x7fffffff) - 0x7fffffff;
        *(long *)(param_1 + 0x30) = lVar4;
      }
      if (uVar5 != 0) {
        *(ulong *)(param_1 + 0x30) = lVar4 + uVar5;
      }
    }
  }
  return;
}


// ===== 004a52b0  FUN_004a52b0 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_004a52b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *local_178 [9];
  ulong local_130;
  undefined8 uStack_128;
  void *local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined *local_108 [3];
  undefined8 uStack_f0;
  undefined4 auStack_e8 [4];
  undefined8 local_d8;
  long local_70;
  
  puVar4 = PTR_PTR_007a1e48;
  puVar3 = PTR_DAT_007a1e40;
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  puVar1 = PTR_DAT_007a1e40 + 0x40;
  local_178[0] = *(undefined **)(PTR_PTR_007a1e48 + 8);
  local_d8 = 0;
  local_108[0] = puVar1;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_007a1e48 + 0x10);
  lVar5 = *(long *)(local_178[0] + -0x18);
                    /* try { // try from 004a5328 to 004a5333 has its CatchHandler @ 004a5434 */
  FUN_00715fc0((long)local_178 + lVar5,local_178 + 1);
  local_178[0] = puVar3 + 0x18;
  *(undefined8 *)((long)&uStack_f0 + lVar5) = 0;
  *(undefined4 *)((long)auStack_e8 + lVar5) = 0xffffffff;
                    /* try { // try from 004a534c to 004a5353 has its CatchHandler @ 004a5414 */
  local_108[0] = puVar1;
  FUN_007160dc(local_178 + 1);
  puVar1 = PTR_DAT_007a10f8 + 0x10;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_110 = 0x10;
  local_178[1] = puVar1;
  FUN_004a3c2c(local_178,param_2,param_3,param_4);
                    /* try { // try from 004a538c to 004a5397 has its CatchHandler @ 004a5410 */
  FUN_00718470(param_1,local_178 + 1);
  local_178[0] = *(undefined **)puVar4;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(puVar4 + 0x18);
  local_178[1] = puVar1;
  if ((local_130 & 1) != 0) {
    free(local_120);
  }
  FUN_00716098(local_178 + 1);
  FUN_00716ee4(local_178,puVar4 + 8);
  thunk_FUN_00715e00(local_108);
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a5448  FUN_004a5448 =====

ulong * FUN_004a5448(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  bool bVar3;
  ulong *puVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  long *plVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  uVar11 = *param_1;
  bVar3 = (uVar11 & 1) != 0;
  uVar2 = 6;
  if (bVar3) {
    uVar2 = param_1[2] << 1;
  }
  puVar10 = param_1 + 1;
  if (bVar3) {
    puVar10 = (ulong *)param_1[1];
  }
  if (uVar2 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_002f9ee0();
  }
  uVar9 = uVar11 >> 1;
  puVar4 = (ulong *)FUN_00759c3c(uVar2 << 4);
  uVar13 = param_2[1];
  uVar12 = *param_2;
  puVar1 = puVar4 + uVar9 * 2;
  *param_2 = 0;
  param_2[1] = 0;
  puVar1[1] = uVar13;
  *puVar1 = uVar12;
  puVar6 = puVar4;
  uVar12 = uVar9;
  puVar7 = puVar10;
  if (1 < uVar11) {
    do {
      uVar11 = *puVar7;
      uVar12 = uVar12 - 1;
      puVar6[1] = puVar7[1];
      *puVar6 = uVar11;
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar6 = puVar6 + 2;
      puVar7 = puVar7 + 2;
    } while (uVar12 != 0);
    puVar10 = puVar10 + uVar9 * 2 + -1;
    do {
      plVar8 = (long *)*puVar10;
      if ((plVar8 != (long *)0x0) &&
         (lVar5 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar5 == 0)) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        FUN_0071245c(plVar8);
      }
      uVar9 = uVar9 - 1;
      puVar10 = puVar10 + -2;
    } while (uVar9 != 0);
  }
  uVar11 = *param_1;
  if ((uVar11 & 1) != 0) {
    free((void *)param_1[1]);
    uVar11 = *param_1;
  }
  param_1[1] = (ulong)puVar4;
  param_1[2] = uVar2;
  *param_1 = (uVar11 | 1) + 2;
  return puVar1;
}


// ===== 004a556c  _INIT_25 =====

void _INIT_25(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_007a1ec0;
  *(undefined8 *)(PTR_DAT_007a1ec0 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined **)puVar1 = puVar1 + 8;
  __cxa_atexit(FUN_004887e4,puVar1,&PTR_LOOP_0075ec90);
  return;
}


// ===== 004a5598  FUN_004a5598 =====

undefined8 FUN_004a5598(undefined8 *param_1)

{
  int iVar1;
  
  if (((DAT_007ad130 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad130), iVar1 != 0)) {
                    /* try { // try from 004a55e8 to 004a55f3 has its CatchHandler @ 004a5618 */
    FUN_004a56bc(&DAT_007ad138);
    __cxa_atexit(PTR_FUN_007a1e80,&DAT_007ad138,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad130);
  }
  *param_1 = &DAT_007ad140;
  return 0;
}


// ===== 004a56bc  FUN_004a56bc =====

void FUN_004a56bc(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_FUN_007a1e90;
  puVar1 = PTR_DAT_007a1e88;
  *(undefined4 *)(param_1 + 1) = 0x12;
  puVar3 = PTR_FUN_007a1e98;
  *param_1 = (long)(puVar1 + 0x10);
  puVar1 = PTR_FUN_007a1ea0;
  param_1[2] = (long)puVar2;
  param_1[3] = (long)puVar3;
  param_1[4] = (long)puVar1;
  FUN_004bdedc(0,0,param_1 + 6);
  FUN_003504c8();
  return;
}


// ===== 004a5714  FUN_004a5714 =====

void FUN_004a5714(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a1e88 + 0x10);
  FUN_00560c3c(param_1[6]);
  return;
}


// ===== 004a5730  FUN_004a5730 =====

void FUN_004a5730(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a1e88 + 0x10);
  FUN_00560c3c(param_1[6]);
  free(param_1);
  return;
}


// ===== 004a5768  FUN_004a5768 =====

void FUN_004a5768(undefined8 param_1,undefined8 param_2)

{
  thunk_FUN_00560940(param_2);
  return;
}


// ===== 004a5770  FUN_004a5770 =====

void FUN_004a5770(undefined8 param_1,void *param_2)

{
  free(param_2);
  return;
}


// ===== 004a5778  FUN_004a5778 =====

undefined8 FUN_004a5778(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}


// ===== 004a5780  FUN_004a5780 =====

void FUN_004a5780(long param_1)

{
  long lVar1;
  void *__ptr;
  long *plVar2;
  void *pvVar3;
  void *pvVar4;
  
  pvVar3 = *(void **)(param_1 + 0x1c0);
  if (pvVar3 != (void *)0x0) {
    pvVar4 = *(void **)(param_1 + 0x1c8);
    __ptr = pvVar3;
    if (pvVar4 != pvVar3) {
      do {
        plVar2 = *(long **)((long)pvVar4 + -8);
        if ((plVar2 != (long *)0x0) &&
           (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0)) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          FUN_0071245c(plVar2);
        }
        pvVar4 = (void *)((long)pvVar4 + -0x10);
      } while (pvVar4 != pvVar3);
      __ptr = *(void **)(param_1 + 0x1c0);
    }
    *(void **)(param_1 + 0x1c8) = pvVar3;
    free(__ptr);
  }
  pvVar3 = *(void **)(param_1 + 0x1a8);
  if (pvVar3 != (void *)0x0) {
    *(void **)(param_1 + 0x1b0) = pvVar3;
    free(pvVar3);
  }
  FUN_00483e64(param_1);
  return;
}


// ===== 004a5820  FUN_004a5820 =====

void FUN_004a5820(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  void *__ptr;
  undefined8 *puVar6;
  long local_68;
  undefined1 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_00483bc0();
  local_68 = param_1 + 0x1c0;
  local_60 = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  puVar6 = *(undefined8 **)(param_2 + 0x1c0);
  puVar1 = *(undefined8 **)(param_2 + 0x1c8);
  lVar2 = (long)puVar1 - (long)puVar6;
  if (lVar2 != 0) {
    if (lVar2 < 0) {
      if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 004a5908 to 004a590b has its CatchHandler @ 004a590c */
        uVar5 = FUN_004a6960();
                    /* catch() { ... } // from try @ 004a5880 with catch @ 004a590c
                       catch() { ... } // from try @ 004a5908 with catch @ 004a590c */
        FUN_004a6898(&local_68);
        __ptr = *(void **)(param_1 + 0x1a8);
        if (__ptr != (void *)0x0) {
          *(void **)(param_1 + 0x1b0) = __ptr;
          free(__ptr);
        }
        FUN_00483e64(param_1);
        if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
          FUN_00755eac(uVar5);
        }
      }
      goto LAB_004a5948;
    }
                    /* try { // try from 004a5880 to 004a5887 has its CatchHandler @ 004a590c */
    puVar4 = (undefined8 *)FUN_00759c3c(lVar2);
    *(undefined8 **)(param_1 + 0x1c0) = puVar4;
    *(undefined8 **)(param_1 + 0x1c8) = puVar4;
    *(long *)(param_1 + 0x1d0) = (long)puVar4 + lVar2;
    do {
      lVar2 = puVar6[1];
      *puVar4 = *puVar6;
      puVar4[1] = lVar2;
      if (lVar2 != 0) {
        FUN_00755c20(1,lVar2 + 8);
      }
      puVar6 = puVar6 + 2;
      puVar4 = puVar4 + 2;
    } while (puVar6 != puVar1);
    *(undefined8 **)(param_1 + 0x1c8) = puVar4;
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
LAB_004a5948:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a594c  FUN_004a594c =====

undefined8 FUN_004a594c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
                    /* try { // try from 004a595c to 004a5963 has its CatchHandler @ 004a5a6c */
  puVar3 = (undefined8 *)FUN_00759c3c(0x1d8);
  puVar3[0x3a] = 0;
  *param_1 = puVar3;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  puVar3[9] = 0;
  puVar3[8] = 0;
  *(undefined1 *)(puVar3 + 6) = 0x28;
  uVar2 = s_onnxruntime_profile__001d2566._8_8_;
  uVar1 = s_onnxruntime_profile__001d2566._0_8_;
  puVar3[0xb] = 0;
  puVar3[10] = 0;
  puVar3[0xd] = 0;
  puVar3[0xc] = 0;
  puVar3[0xf] = 0;
  puVar3[0xe] = 0;
  puVar3[0x11] = 0;
  puVar3[0x10] = 0;
  *(undefined4 *)((long)puVar3 + 0x41) = 0x5f656c69;
  *(undefined4 *)(puVar3 + 0xc) = 0xffffffff;
  *(undefined1 *)((long)puVar3 + 0x2a) = 1;
  puVar3[0x27] = 0;
  puVar3[0x26] = 0;
  puVar3[0x29] = 0;
  puVar3[0x28] = 0;
  puVar3[0x2d] = 0;
  puVar3[0x2c] = 0;
  puVar3[0x2f] = 0;
  puVar3[0x2e] = 0;
  puVar3[0x2b] = 0;
  puVar3[0x2a] = 0;
  *(undefined8 *)((long)puVar3 + 0x39) = uVar2;
  *(undefined8 *)((long)puVar3 + 0x31) = uVar1;
  *(undefined2 *)(puVar3 + 5) = 0x101;
  puVar3[0x13] = 0;
  puVar3[0x12] = 0;
  puVar3[0x15] = 0;
  puVar3[0x14] = 0;
  puVar3[0x17] = 0;
  puVar3[0x16] = 0;
  puVar3[0x19] = 0;
  puVar3[0x18] = 0;
  *(undefined2 *)((long)puVar3 + 0x74) = 0x100;
  *(undefined1 *)((long)puVar3 + 0xc5) = 1;
  uVar1 = DAT_001b7090;
  puVar3[0x1b] = 0;
  puVar3[0x1a] = 0;
  puVar3[0x1d] = 0;
  puVar3[0x1c] = 0;
  puVar3[0x1f] = 0;
  puVar3[0x1e] = 0;
  puVar3[0x21] = 0;
  puVar3[0x20] = 0;
  puVar3[0x23] = 0;
  puVar3[0x22] = 0;
  puVar3[0x25] = 0;
  puVar3[0x24] = 0;
  puVar3[0x20] = 0;
  puVar3[0x1f] = 0;
  puVar3[0x22] = 0;
  puVar3[0x21] = 0;
  puVar3[0x24] = 0;
  puVar3[0x23] = 0;
  *(undefined2 *)(puVar3 + 0x25) = 0x101;
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[9] = 0;
  puVar3[0xd] = uVar1;
  puVar3[0x10] = 0;
  puVar3[0xf] = 0;
  puVar3[0x12] = 0;
  puVar3[0x11] = 0;
  *(undefined8 *)((long)puVar3 + 0x99) = 0;
  *(undefined8 *)((long)puVar3 + 0x91) = 0;
  puVar3[0x16] = 0;
  puVar3[0x17] = 0;
  *(undefined8 *)((long)puVar3 + 0xbd) = 0;
  puVar3[0x15] = 0;
  puVar3[0x1a] = 0;
  puVar3[0x19] = 0;
  puVar3[0x1c] = 0;
  puVar3[0x1b] = 0;
  *(undefined8 *)((long)puVar3 + 0xe9) = 0;
  *(undefined8 *)((long)puVar3 + 0xe1) = 0;
  puVar3[0x27] = 0;
  puVar3[0x26] = 0;
  puVar3[0x29] = 0;
  puVar3[0x28] = 0;
  *(undefined4 *)(puVar3 + 0x2a) = 0x3f800000;
  puVar3[0x2c] = 0;
  puVar3[0x2b] = 0;
  puVar3[0x2e] = 0;
  puVar3[0x2d] = 0;
  *(undefined4 *)(puVar3 + 0x2f) = 0x3f800000;
  puVar3[0x31] = 0;
  puVar3[0x30] = 0;
  puVar3[0x33] = 0;
  puVar3[0x32] = 0;
  puVar3[0x35] = 0;
  puVar3[0x34] = 0;
  puVar3[0x37] = 0;
  puVar3[0x36] = 0;
  puVar3[0x39] = 0;
  puVar3[0x38] = 0;
  return 0;
}


// ===== 004a5afc  FUN_004a5afc =====

void FUN_004a5afc(void *param_1)

{
  if (param_1 != (void *)0x0) {
    FUN_004a5780();
    free(param_1);
    return;
  }
  return;
}


// ===== 004a5b28  FUN_004a5b28 =====

undefined8 FUN_004a5b28(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
                    /* try { // try from 004a5b40 to 004a5b47 has its CatchHandler @ 004a5b84 */
  uVar1 = FUN_00759c3c(0x1d8);
                    /* try { // try from 004a5b48 to 004a5b53 has its CatchHandler @ 004a5b6c */
  FUN_004a5820(uVar1,param_1);
  *param_2 = uVar1;
  return 0;
}


// ===== 004a5c20  FUN_004a5c20 =====

undefined8 FUN_004a5c20(uint *param_1,uint param_2)

{
  undefined8 uVar1;
  
  if (param_2 < 2) {
    *param_1 = param_2;
    return 0;
  }
  uVar1 = FUN_00580398(2,"execution_mode is not valid");
  return uVar1;
}


// ===== 004a5c48  FUN_004a5c48 =====

undefined8 FUN_004a5c48(long param_1)

{
                    /* try { // try from 004a5c50 to 004a5c57 has its CatchHandler @ 004a5c64 */
  FUN_0071396c(param_1 + 0x10);
  return 0;
}


// ===== 004a5c68  FUN_004a5c68 =====

undefined8 FUN_004a5c68(long param_1)

{
  *(undefined1 *)(param_1 + 8) = 1;
                    /* try { // try from 004a5c78 to 004a5c7f has its CatchHandler @ 004a5c8c */
  FUN_0071396c(param_1 + 0x30);
  return 0;
}


// ===== 004a5c90  FUN_004a5c90 =====

undefined8 FUN_004a5c90(long param_1)

{
  *(undefined1 *)(param_1 + 8) = 0;
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    *(undefined2 *)(param_1 + 0x30) = 0;
    return 0;
  }
  **(undefined1 **)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 0;
}


// ===== 004a5cbc  FUN_004a5cbc =====

undefined8 FUN_004a5cbc(long param_1)

{
  *(undefined1 *)(param_1 + 0x28) = 1;
  return 0;
}


// ===== 004a5cd0  FUN_004a5cd0 =====

undefined8 FUN_004a5cd0(long param_1)

{
  *(undefined1 *)(param_1 + 0x28) = 0;
  return 0;
}


// ===== 004a5ce0  FUN_004a5ce0 =====

undefined8 FUN_004a5ce0(long param_1)

{
  *(undefined1 *)(param_1 + 0x2a) = 1;
  return 0;
}


// ===== 004a5cf4  FUN_004a5cf4 =====

undefined8 FUN_004a5cf4(long param_1)

{
  *(undefined1 *)(param_1 + 0x2a) = 0;
  return 0;
}


// ===== 004a5d04  FUN_004a5d04 =====

undefined8 FUN_004a5d04(long param_1)

{
                    /* try { // try from 004a5d0c to 004a5d13 has its CatchHandler @ 004a5d20 */
  FUN_0071396c(param_1 + 0x48);
  return 0;
}


// ===== 004a5d24  FUN_004a5d24 =====

undefined8 FUN_004a5d24(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x198) = param_2;
  *(undefined8 *)(param_1 + 0x1a0) = param_3;
  return 0;
}


// ===== 004a5d34  FUN_004a5d34 =====

undefined8 FUN_004a5d34(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 100) = param_2;
  return 0;
}


// ===== 004a5d44  FUN_004a5d44 =====

undefined8 FUN_004a5d44(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x60) = param_2;
  return 0;
}


// ===== 004a5d54  FUN_004a5d54 =====

undefined8 FUN_004a5d54(long param_1,int param_2)

{
  undefined8 uVar1;
  
  if (-1 < param_2) {
    if (param_2 < 2) {
      if (param_2 == 0) {
        *(undefined4 *)(param_1 + 0x6c) = 0;
        return 0;
      }
      if (param_2 == 1) {
        *(undefined4 *)(param_1 + 0x6c) = 1;
        return 0;
      }
    }
    else {
      if (param_2 == 2) {
        *(undefined4 *)(param_1 + 0x6c) = 2;
        return 0;
      }
      if (param_2 == 99) {
        *(undefined4 *)(param_1 + 0x6c) = 3;
        return 0;
      }
    }
  }
  uVar1 = FUN_00580398(2,"graph_optimization_level is not valid");
  return uVar1;
}


// ===== 004a5dc8  FUN_004a5dc8 =====

undefined8 FUN_004a5dc8(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x70) = param_2;
  return 0;
}


// ===== 004a5dd8  FUN_004a5dd8 =====

undefined8 FUN_004a5dd8(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc0) = param_2;
  return 0;
}


// ===== 004a5de8  FUN_004a5de8 =====

undefined8 FUN_004a5de8(long param_1,char *param_2,ulong param_3)

{
  ulong uVar1;
  ulong *puVar2;
  long lVar3;
  size_t __n;
  undefined8 uVar4;
  void *__dest;
  ulong local_80;
  size_t sStack_78;
  void *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  ulong uStack_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  __n = strlen(param_2);
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_80);
    }
    goto LAB_004a5f3c;
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_80 | 1);
    local_80 = CONCAT71(local_80._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_004a5e80;
  }
  else {
    uVar1 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar1 = __n | 7;
    }
                    /* try { // try from 004a5e68 to 004a5e6f has its CatchHandler @ 004a5f40 */
    __dest = (void *)FUN_00759c3c(uVar1 + 1);
    local_80 = uVar1 + 1 | 1;
    sStack_78 = __n;
    local_70 = __dest;
LAB_004a5e80:
    memcpy(__dest,param_2,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
  puVar2 = *(ulong **)(param_1 + 0x118);
  local_68 = 1;
  uStack_60 = param_3;
  if (puVar2 < *(ulong **)(param_1 + 0x120)) {
    puVar2[2] = (ulong)local_70;
    puVar2[1] = sStack_78;
    *puVar2 = local_80;
    puVar2[4] = param_3;
    puVar2[3] = CONCAT44(uStack_64,1);
    *(ulong **)(param_1 + 0x118) = puVar2 + 5;
  }
  else {
                    /* try { // try from 004a5ed4 to 004a5f3b has its CatchHandler @ 004a5f40 */
    uVar4 = FUN_004a6974(param_1 + 0x110,&local_80);
    *(undefined8 *)(param_1 + 0x118) = uVar4;
    if ((local_80 & 1) != 0) {
      free(local_70);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return 0;
  }
LAB_004a5f3c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a5f44  FUN_004a5f44 =====

undefined8 FUN_004a5f44(long param_1,char *param_2,ulong param_3)

{
  ulong uVar1;
  ulong *puVar2;
  long lVar3;
  size_t __n;
  undefined8 uVar4;
  void *__dest;
  ulong local_80;
  size_t sStack_78;
  void *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  ulong uStack_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  __n = strlen(param_2);
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_80);
    }
    goto LAB_004a6098;
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_80 | 1);
    local_80 = CONCAT71(local_80._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_004a5fdc;
  }
  else {
    uVar1 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar1 = __n | 7;
    }
                    /* try { // try from 004a5fc4 to 004a5fcb has its CatchHandler @ 004a609c */
    __dest = (void *)FUN_00759c3c(uVar1 + 1);
    local_80 = uVar1 + 1 | 1;
    sStack_78 = __n;
    local_70 = __dest;
LAB_004a5fdc:
    memcpy(__dest,param_2,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
  puVar2 = *(ulong **)(param_1 + 0x118);
  local_68 = 2;
  uStack_60 = param_3;
  if (puVar2 < *(ulong **)(param_1 + 0x120)) {
    puVar2[2] = (ulong)local_70;
    puVar2[1] = sStack_78;
    *puVar2 = local_80;
    puVar2[4] = param_3;
    puVar2[3] = CONCAT44(uStack_64,2);
    *(ulong **)(param_1 + 0x118) = puVar2 + 5;
  }
  else {
                    /* try { // try from 004a6030 to 004a6097 has its CatchHandler @ 004a609c */
    uVar4 = FUN_004a6974(param_1 + 0x110,&local_80);
    *(undefined8 *)(param_1 + 0x118) = uVar4;
    if ((local_80 & 1) != 0) {
      free(local_70);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return 0;
  }
LAB_004a6098:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a60a0  FUN_004a60a0 =====

undefined8 FUN_004a60a0(long param_1)

{
  *(undefined1 *)(param_1 + 0x128) = 0;
  return 0;
}


// ===== 004a60b0  FUN_004a60b0 =====

void FUN_004a60b0(long param_1)

{
  long lVar1;
  void *__ptr;
  undefined8 uVar2;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00569b8c(&local_40,param_1 + 0x130);
                    /* try { // try from 004a60dc to 004a60e3 has its CatchHandler @ 004a6138 */
  uVar2 = FUN_0058044c(&local_40);
  __ptr = local_40;
  local_40 = (void *)0x0;
  if (__ptr != (void *)0x0) {
    if ((*(byte *)((long)__ptr + 8) & 1) != 0) {
      free(*(void **)((long)__ptr + 0x18));
    }
    free(__ptr);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 004a613c  FUN_004a613c =====

void FUN_004a613c(long param_1,char *param_2,uint *param_3)

{
  ulong uVar1;
  long lVar2;
  size_t __n;
  void *__dest;
  ulong local_90;
  size_t local_88;
  void *local_80;
  byte local_78 [16];
  void *local_68;
  byte local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  __n = strlen(param_2);
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 004a6264 to 004a626b has its CatchHandler @ 004a626c */
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_90);
    }
    goto LAB_004a62fc;
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_90 | 1);
    local_90 = CONCAT71(local_90._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_004a61d4;
  }
  else {
    uVar1 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar1 = __n | 7;
    }
                    /* try { // try from 004a61bc to 004a61c3 has its CatchHandler @ 004a626c */
    __dest = (void *)FUN_00759c3c(uVar1 + 1);
    local_90 = uVar1 + 1 | 1;
    local_88 = __n;
    local_80 = __dest;
LAB_004a61d4:
    memcpy(__dest,param_2,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
  FUN_00569950(local_78,param_1 + 0x130,&local_90);
  if ((local_90 & 1) != 0) {
    free(local_80);
  }
  *param_3 = (uint)local_60;
  if ((local_60 != 0) && ((local_78[0] & 1) != 0)) {
    free(local_68);
  }
  __n = 0;
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
LAB_004a62fc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__n);
}


// ===== 004a6304  FUN_004a6304 =====

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_004a6304(long param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  size_t sVar8;
  long lVar9;
  void *pvVar10;
  byte local_1a8;
  undefined1 auStack_1a7 [15];
  undefined1 *local_198;
  void *local_190 [9];
  ulong local_148;
  undefined8 uStack_140;
  void *local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined *local_120 [3];
  undefined8 uStack_108;
  undefined4 auStack_100 [4];
  undefined8 local_f0;
  byte local_88;
  undefined1 auStack_87 [7];
  ulong local_80;
  undefined1 *local_78;
  byte local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  puVar6 = (undefined *)strlen(param_2);
  if ((undefined *)0xfffffffffffffff7 < puVar6) {
    if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* try { // try from 004a6600 to 004a6607 has its CatchHandler @ 004a6688 */
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(local_190);
    }
    goto LAB_004a6608;
  }
  if (puVar6 < (undefined *)0x17) {
    pvVar10 = (void *)((ulong)local_190 | 1);
    local_190[0] = (void *)CONCAT71(local_190[0]._1_7_,(char)((int)puVar6 << 1));
    if (puVar6 != (undefined *)0x0) goto LAB_004a63a4;
  }
  else {
    uVar2 = ((ulong)puVar6 & 0xfffffffffffffff8) + 8;
    if (((ulong)puVar6 | 7) != 0x17) {
      uVar2 = (ulong)puVar6 | 7;
    }
                    /* try { // try from 004a638c to 004a6393 has its CatchHandler @ 004a6688 */
    pvVar10 = (void *)FUN_00759c3c(uVar2 + 1);
    local_190[0] = (void *)(uVar2 + 1 | 1);
    local_190[1] = puVar6;
    local_190[2] = pvVar10;
LAB_004a63a4:
    memcpy(pvVar10,param_2,(size_t)puVar6);
  }
  *(undefined1 *)((long)pvVar10 + (long)puVar6) = 0;
  FUN_00569950(&local_88,param_1 + 0x130,local_190);
  if (((ulong)local_190[0] & 1) != 0) {
    free(local_190[2]);
  }
  puVar5 = PTR_PTR_007a1e48;
  puVar6 = PTR_DAT_007a1e40;
  if ((local_70 & 1) == 0) {
    local_f0 = 0;
    local_190[0] = *(void **)(PTR_PTR_007a1e48 + 8);
    puVar1 = PTR_DAT_007a1e40 + 0x40;
    local_120[0] = puVar1;
    *(undefined8 *)((long)local_190 + *(long *)((long)local_190[0] + -0x18)) =
         *(undefined8 *)(PTR_PTR_007a1e48 + 0x10);
    lVar9 = *(long *)((long)local_190[0] + -0x18);
                    /* try { // try from 004a648c to 004a6497 has its CatchHandler @ 004a6628 */
    FUN_00715fc0((long)local_190 + lVar9,local_190 + 1);
    local_190[0] = puVar6 + 0x18;
    *(undefined8 *)((long)&uStack_108 + lVar9) = 0;
    *(undefined4 *)((long)auStack_100 + lVar9) = 0xffffffff;
                    /* try { // try from 004a64b0 to 004a64b7 has its CatchHandler @ 004a6610 */
    local_120[0] = puVar1;
    FUN_007160dc(local_190 + 1);
    puVar6 = PTR_DAT_007a10f8;
    local_190[1] = PTR_DAT_007a10f8 + 0x10;
    uStack_140 = 0;
    local_148 = 0;
    uStack_130 = 0;
    local_138 = (void *)0x0;
    local_128 = 0x10;
                    /* try { // try from 004a64dc to 004a651b has its CatchHandler @ 004a665c */
    uVar7 = FUN_00303e0c(local_190,"Session config entry \'",0x16);
    sVar8 = strlen(param_2);
    uVar7 = FUN_00303e0c(uVar7,param_2,sVar8);
    FUN_00303e0c(uVar7,"\' was not found.",0x10);
                    /* try { // try from 004a651c to 004a652b has its CatchHandler @ 004a660c */
    FUN_00718470(&local_1a8,local_190 + 1);
    puVar3 = local_198;
    if ((local_1a8 & 1) == 0) {
      puVar3 = auStack_1a7;
    }
    uVar7 = FUN_00580398(2,puVar3);
    if ((local_1a8 & 1) != 0) {
      free(local_198);
    }
    local_190[0] = *(void **)puVar5;
    *(undefined8 *)((long)local_190 + *(long *)((long)local_190[0] + -0x18)) =
         *(undefined8 *)(puVar5 + 0x18);
    local_190[1] = puVar6 + 0x10;
    if ((local_148 & 1) != 0) {
      free(local_138);
    }
    FUN_00716098(local_190 + 1);
    FUN_00716ee4(local_190,puVar5 + 8);
    thunk_FUN_00715e00(local_120);
  }
  else {
    puVar3 = local_78;
    if ((local_88 & 1) == 0) {
      local_80 = (ulong)(local_88 >> 1);
      puVar3 = auStack_87;
    }
                    /* try { // try from 004a63fc to 004a6413 has its CatchHandler @ 004a6650 */
    FUN_004a6ae4(local_190,puVar3,local_80,
                 "Output buffer is not large enough for session config entry",param_3,param_4);
                    /* try { // try from 004a6414 to 004a641b has its CatchHandler @ 004a663c */
    uVar7 = FUN_0058044c(local_190);
    pvVar10 = local_190[0];
    local_190[0] = (undefined *)0x0;
    if ((undefined *)pvVar10 != (undefined *)0x0) {
      if ((*(byte *)((long)pvVar10 + 8) & 1) != 0) {
        free(*(void **)((long)pvVar10 + 0x18));
      }
      free(pvVar10);
    }
  }
  if ((local_70 != 0) && ((local_88 & 1) != 0)) {
    free(local_78);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return uVar7;
  }
LAB_004a6608:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a6714  FUN_004a6714 =====

void FUN_004a6714(void)

{
  long lVar1;
  void *__ptr;
  undefined8 uVar2;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 004a6734 to 004a673b has its CatchHandler @ 004a67c8 */
  FUN_005979ac(&local_40);
  if (local_40 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
                    /* try { // try from 004a6744 to 004a674b has its CatchHandler @ 004a67b4 */
    uVar2 = FUN_0058044c(&local_40);
    __ptr = local_40;
    local_40 = (void *)0x0;
    if (__ptr != (void *)0x0) {
      if ((*(byte *)((long)__ptr + 8) & 1) != 0) {
        free(*(void **)((long)__ptr + 0x18));
      }
      free(__ptr);
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
      goto LAB_004a6860;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_004a6860:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 004a6868  FUN_004a6868 =====

void FUN_004a6868(void)

{
  FUN_00580398(9,"External initializers are not supported in this build");
  return;
}


// ===== 004a6878  FUN_004a6878 =====

void FUN_004a6878(void)

{
  FUN_00580398(9,"AddExternalInitializersFromFilesInMemory is not supported in this build");
  return;
}


// ===== 004a6888  FUN_004a6888 =====

undefined8 FUN_004a6888(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x12a) = param_2;
  return 0;
}


// ===== 004a6898  FUN_004a6898 =====

void FUN_004a6898(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  void *__ptr;
  void *pvVar4;
  
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    puVar3 = (undefined8 *)*param_1;
    __ptr = (void *)*puVar3;
    if (__ptr != (void *)0x0) {
      pvVar4 = (void *)puVar3[1];
      if (pvVar4 == __ptr) {
        puVar3[1] = __ptr;
        free(__ptr);
        return;
      }
      do {
        plVar2 = *(long **)((long)pvVar4 + -8);
        if ((plVar2 != (long *)0x0) &&
           (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0)) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          FUN_0071245c(plVar2);
        }
        pvVar4 = (void *)((long)pvVar4 + -0x10);
      } while (pvVar4 != __ptr);
      pvVar4 = *(void **)*param_1;
      puVar3[1] = __ptr;
      free(pvVar4);
      return;
    }
  }
  return;
}


// ===== 004a6960  FUN_004a6960 =====

void FUN_004a6960(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("vector");
}


// ===== 004a6974  FUN_004a6974 =====

undefined8 * FUN_004a6974(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  byte *__ptr;
  byte *pbVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar3 = param_1[1] - *param_1 >> 3;
  uVar1 = lVar3 * -0x3333333333333333 + 1;
  if (0x666666666666666 < uVar1) {
    FUN_0048442c(param_1);
LAB_004a6ae0:
                    /* WARNING: Subroutine does not return */
    FUN_002f9ee0();
  }
  lVar8 = param_1[2] - *param_1 >> 3;
  uVar10 = lVar8 * -0x6666666666666666;
  if (uVar10 < uVar1 || uVar10 - uVar1 == 0) {
    uVar10 = uVar1;
  }
  if (0x333333333333332 < (ulong)(lVar8 * -0x3333333333333333)) {
    uVar10 = 0x666666666666666;
  }
  if (uVar10 == 0) {
    lVar8 = 0;
  }
  else {
    if (0x666666666666666 < uVar10) goto LAB_004a6ae0;
    lVar8 = FUN_00759c3c(uVar10 * 0x28);
  }
  uVar9 = param_2[2];
  uVar13 = param_2[1];
  uVar12 = *param_2;
  puVar6 = (undefined8 *)(lVar8 + lVar3 * 8);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  pbVar11 = (byte *)*param_1;
  __ptr = (byte *)param_1[1];
  puVar6[1] = uVar13;
  *puVar6 = uVar12;
  uVar13 = param_2[4];
  uVar12 = param_2[3];
  puVar2 = (undefined8 *)((long)puVar6 + ((long)pbVar11 - (long)__ptr));
  puVar6[2] = uVar9;
  puVar6[4] = uVar13;
  puVar6[3] = uVar12;
  pbVar4 = pbVar11;
  puVar7 = puVar2;
  if ((long)pbVar11 - (long)__ptr != 0) {
    do {
      uVar12 = *(undefined8 *)(pbVar4 + 8);
      uVar9 = *(undefined8 *)pbVar4;
      puVar7[2] = *(undefined8 *)(pbVar4 + 0x10);
      puVar7[1] = uVar12;
      *puVar7 = uVar9;
      uVar9 = *(undefined8 *)(pbVar4 + 0x18);
      pbVar4[8] = 0;
      pbVar4[9] = 0;
      pbVar4[10] = 0;
      pbVar4[0xb] = 0;
      pbVar4[0xc] = 0;
      pbVar4[0xd] = 0;
      pbVar4[0xe] = 0;
      pbVar4[0xf] = 0;
      pbVar4[0x10] = 0;
      pbVar4[0x11] = 0;
      pbVar4[0x12] = 0;
      pbVar4[0x13] = 0;
      pbVar4[0x14] = 0;
      pbVar4[0x15] = 0;
      pbVar4[0x16] = 0;
      pbVar4[0x17] = 0;
      pbVar5 = pbVar4 + 0x28;
      pbVar4[0] = 0;
      pbVar4[1] = 0;
      pbVar4[2] = 0;
      pbVar4[3] = 0;
      pbVar4[4] = 0;
      pbVar4[5] = 0;
      pbVar4[6] = 0;
      pbVar4[7] = 0;
      puVar7[4] = *(undefined8 *)(pbVar4 + 0x20);
      puVar7[3] = uVar9;
      pbVar4 = pbVar5;
      puVar7 = puVar7 + 5;
    } while (pbVar5 != __ptr);
    do {
      if ((*pbVar11 & 1) != 0) {
        free(*(void **)(pbVar11 + 0x10));
      }
      pbVar11 = pbVar11 + 0x28;
    } while (pbVar11 != __ptr);
    __ptr = (byte *)*param_1;
  }
  *param_1 = (long)puVar2;
  param_1[1] = (long)(puVar6 + 5);
  param_1[2] = lVar8 + uVar10 * 0x28;
  if (__ptr != (byte *)0x0) {
    free(__ptr);
  }
  return puVar6 + 5;
}


// ===== 004a6ae4  FUN_004a6ae4 =====

void FUN_004a6ae4(undefined8 *param_1,void *param_2,size_t param_3,char *param_4,void *param_5,
                 ulong *param_6)

{
  ulong uVar1;
  long lVar2;
  size_t __n;
  void *__dest;
  ulong local_60;
  size_t local_58;
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  uVar1 = param_3 + 1;
  local_48 = *(long *)(lVar2 + 0x28);
  if (param_5 == (void *)0x0) {
    *param_6 = uVar1;
LAB_004a6b90:
    *param_1 = 0;
  }
  else {
    if (uVar1 <= *param_6) {
      memcpy(param_5,param_2,param_3);
      *(undefined1 *)((long)param_5 + param_3) = 0;
      *param_6 = uVar1;
      goto LAB_004a6b90;
    }
    *param_6 = uVar1;
    __n = strlen(param_4);
    if (0xfffffffffffffff7 < __n) {
      if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_002fb400(&local_60);
      }
      goto LAB_004a6c6c;
    }
    if (__n < 0x17) {
      __dest = (void *)((ulong)&local_60 | 1);
      local_60 = CONCAT71(local_60._1_7_,(char)((int)__n << 1));
      if (__n != 0) goto LAB_004a6bf0;
    }
    else {
      uVar1 = (__n & 0xfffffffffffffff8) + 8;
      if ((__n | 7) != 0x17) {
        uVar1 = __n | 7;
      }
      __dest = (void *)FUN_00759c3c(uVar1 + 1);
      local_60 = uVar1 + 1 | 1;
      local_58 = __n;
      local_50 = __dest;
LAB_004a6bf0:
      memcpy(__dest,param_4,__n);
    }
    *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 004a6c00 to 004a6c13 has its CatchHandler @ 004a6c40 */
    FUN_0063aa48(param_1,2,2,&local_60);
    if ((local_60 & 1) != 0) {
      free(local_50);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_004a6c6c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a6c70  FUN_004a6c70 =====

void FUN_004a6c70(void)

{
  FUN_00580398(9,"OrtKernelContext API is not enabled in this build");
  return;
}


// ===== 004a6c80  FUN_004a6c80 =====

void FUN_004a6c80(void)

{
  FUN_00580398(9,"OrtKernelContext API is not enabled in this build");
  return;
}


// ===== 004a6c90  FUN_004a6c90 =====

void FUN_004a6c90(void)

{
  FUN_00580398(9,"OrtKernelContext API is not enabled in this build");
  return;
}


// ===== 004a6ca0  FUN_004a6ca0 =====

void FUN_004a6ca0(void)

{
  FUN_00580398(9,"OrtKernelContext API is not enabled in this build");
  return;
}


// ===== 004a6cb0  FUN_004a6cb0 =====

void FUN_004a6cb0(void)

{
  FUN_00580398(9,"OrtKernelContext API is not enabled in this build");
  return;
}


// ===== 004a6cc0  FUN_004a6cc0 =====

void FUN_004a6cc0(void)

{
  FUN_00580398(9,"OrtKernelContext API is not enabled in this build");
  return;
}


// ===== 004a6cd0  FUN_004a6cd0 =====

void FUN_004a6cd0(void)

{
  FUN_00580398(9,"OrtKernelContext API is not enabled in this build");
  return;
}


// ===== 004a6ce0  FUN_004a6ce0 =====

void FUN_004a6ce0(void)

{
  FUN_00580398(9,"OrtKernelContext API is not enabled in this build");
  return;
}


// ===== 004a6cf0  FUN_004a6cf0 =====

void FUN_004a6cf0(void)

{
  FUN_00580398(9,"OrtKernelContext API is not enabled in this build");
  return;
}


// ===== 004a6d00  FUN_004a6d00 =====

void FUN_004a6d00(void)

{
  FUN_00580398(9,"OrtKernelContext API is not enabled in this build");
  return;
}


// ===== 004a6d10  FUN_004a6d10 =====

void FUN_004a6d10(void)

{
  FUN_00580398(9,"OrtKernelContext API is not enabled in this build");
  return;
}


// ===== 004a6d20  FUN_004a6d20 =====

void FUN_004a6d20(void)

{
  FUN_00580398(9,"Custom operator API is not enabled in this build");
  return;
}


// ===== 004a6d30  FUN_004a6d30 =====

void FUN_004a6d30(void)

{
  FUN_00580398(9,"Custom operator API is not enabled in this build");
  return;
}


// ===== 004a6d40  FUN_004a6d40 =====

void FUN_004a6d40(void)

{
  FUN_00580398(9,"Custom operator API is not enabled in this build");
  return;
}


// ===== 004a6d50  FUN_004a6d50 =====

void FUN_004a6d50(void)

{
  FUN_00580398(9,"Custom operator API is not enabled in this build");
  return;
}


// ===== 004a6d60  FUN_004a6d60 =====

void FUN_004a6d60(void)

{
  FUN_00580398(9,"Custom operator API is not enabled in this build");
  return;
}


// ===== 004a6d70  FUN_004a6d70 =====

void FUN_004a6d70(void)

{
  FUN_00580398(9,"Custom operator API is not enabled in this build");
  return;
}


// ===== 004a6d80  FUN_004a6d80 =====

void FUN_004a6d80(void)

{
  FUN_00580398(9,"Custom operator API is not enabled in this build");
  return;
}


// ===== 004a6d90  FUN_004a6d90 =====

void FUN_004a6d90(void)

{
  FUN_00580398(9,"Custom operator API is not enabled in this build");
  return;
}


// ===== 004a6da0  FUN_004a6da0 =====

void FUN_004a6da0(void)

{
  FUN_00580398(9,"Custom operator API is not enabled in this build");
  return;
}


// ===== 004a6db0  FUN_004a6db0 =====

void FUN_004a6db0(void)

{
  FUN_00580398(9,"Custom operator API is not enabled in this build");
  return;
}


// ===== 004a6dc0  FUN_004a6dc0 =====

void FUN_004a6dc0(void)

{
  FUN_00580398(9,"Custom operator API is not enabled in this build");
  return;
}


// ===== 004a6dd0  FUN_004a6dd0 =====

void FUN_004a6dd0(void)

{
  FUN_00580398(9,"Custom operator API is not enabled in this build");
  return;
}


// ===== 004a6de0  FUN_004a6de0 =====

void FUN_004a6de0(void)

{
  FUN_00580398(9,"Custom operator API is not enabled in this build");
  return;
}


// ===== 004a6df0  FUN_004a6df0 =====

void FUN_004a6df0(void)

{
  FUN_00580398(9,"Custom operator API is not enabled in this build");
  return;
}


// ===== 004a6e00  FUN_004a6e00 =====

void FUN_004a6e00(void)

{
  FUN_00580398(9,"Custom operator API is not enabled in this build");
  return;
}


// ===== 004a6e10  FUN_004a6e10 =====

void FUN_004a6e10(void)

{
  FUN_00580398(9,"Custom operator API is not enabled in this build");
  return;
}


// ===== 004a6e20  FUN_004a6e20 =====

void FUN_004a6e20(void)

{
  FUN_00580398(9,"Custom operator API is not enabled in this build");
  return;
}


// ===== 004a6e30  FUN_004a6e30 =====

void FUN_004a6e30(void)

{
  FUN_00580398(9,"Custom operator API is not enabled in this build");
  return;
}


// ===== 004a6e40  FUN_004a6e40 =====

void FUN_004a6e40(void)

{
  FUN_00580398(9,"Custom operator API is not enabled in this build");
  return;
}


// ===== 004a6e50  FUN_004a6e50 =====

void FUN_004a6e50(void)

{
  FUN_00580398(9,"Custom operator API is not enabled in this build");
  return;
}


// ===== 004a6e60  FUN_004a6e60 =====

void FUN_004a6e60(void)

{
  FUN_00580398(9,"Custom operator API is not enabled in this build");
  return;
}


// ===== 004a6e70  FUN_004a6e70 =====

undefined8 FUN_004a6e70(long *param_1,long param_2,long param_3,undefined8 *param_4)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long local_90;
  long *local_88;
  long local_80 [4];
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_3 == 0) {
    *param_4 = 0;
    uVar3 = 0;
    goto LAB_004a6f8c;
  }
                    /* try { // try from 004a6ea0 to 004a6efb has its CatchHandler @ 004a6fbc */
  FUN_0058dccc(&local_90,param_1,param_2 + 0x14);
  if (local_90 == 0) {
    uVar3 = FUN_00580398(2,"No requested allocator available");
    plVar2 = local_88;
  }
  else {
    plVar2 = (long *)(**(code **)(*param_1 + 0x60))(param_1);
    (**(code **)(*plVar2 + 0x30))(local_80);
    uVar3 = FUN_00560ab4(local_90,param_3,0,plVar2,local_80);
    *param_4 = uVar3;
    if (local_60 == local_80) {
      lVar4 = 0x20;
      local_60 = local_80;
LAB_004a6f4c:
      (**(code **)(*local_60 + lVar4))();
    }
    else if (local_60 != (long *)0x0) {
      lVar4 = 0x28;
      goto LAB_004a6f4c;
    }
    uVar3 = 0;
    plVar2 = local_88;
  }
  if ((plVar2 != (long *)0x0) && (lVar4 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar4 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
  }
LAB_004a6f8c:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a6fc0  FUN_004a6fc0 =====

void FUN_004a6fc0(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr != (void *)0x0) {
    FUN_004a700c(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 004a6ffc  FUN_004a6ffc =====

void FUN_004a6ffc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *param_2 = 0;
  *param_1 = uVar1;
  return;
}


// ===== 004a700c  FUN_004a700c =====

void FUN_004a700c(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr != (void *)0x0) {
    FUN_004a7828(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 004a7048  FUN_004a7048 =====

void FUN_004a7048(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr != (void *)0x0) {
    FUN_004a7828(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 004a7084  FUN_004a7084 =====

void * FUN_004a7084(long *param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  void *pvVar5;
  long *plVar6;
  int iVar7;
  size_t __n;
  long *plVar8;
  void *pvVar9;
  char *__s;
  long lVar10;
  undefined1 *__dest;
  void *local_b0;
  void *local_a8;
  long *local_a0;
  long *local_98;
  ulong local_90;
  size_t local_88;
  undefined1 *local_80;
  void *local_78;
  long *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  FUN_007073d8(PTR_DAT_007a1f78);
  if (DAT_007ad170 == (void *)0x0) {
    __s = (char *)param_1[3];
    local_78 = (void *)0x0;
    __n = strlen(__s);
    if (0xfffffffffffffff7 < __n) {
      if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* try { // try from 004a7484 to 004a748b has its CatchHandler @ 004a7550 */
                    /* WARNING: Subroutine does not return */
        FUN_002fb400(&local_90);
      }
      goto LAB_004a7580;
    }
    if (__n < 0x17) {
      __dest = (undefined1 *)((ulong)&local_90 | 1);
      local_90 = CONCAT71(local_90._1_7_,(char)((int)__n << 1));
      if (__n != 0) goto LAB_004a718c;
      *__dest = 0;
      lVar10 = *param_1;
      if (lVar10 == 0) goto LAB_004a71a8;
LAB_004a7134:
                    /* try { // try from 004a7134 to 004a713b has its CatchHandler @ 004a74d8 */
      plVar8 = (long *)FUN_00759c3c(0x18);
      puVar1 = PTR_DAT_007a1ea8 + 0x10;
      plVar8[2] = param_1[1];
      *plVar8 = (long)puVar1;
      plVar8[1] = lVar10;
    }
    else {
      uVar3 = (__n & 0xfffffffffffffff8) + 8;
      if ((__n | 7) != 0x17) {
        uVar3 = __n | 7;
      }
                    /* try { // try from 004a7174 to 004a717b has its CatchHandler @ 004a7550 */
      __dest = (undefined1 *)FUN_00759c3c(uVar3 + 1);
      local_90 = uVar3 + 1 | 1;
      local_88 = __n;
      local_80 = __dest;
LAB_004a718c:
      memmove(__dest,__s,__n);
      __dest[__n] = 0;
      lVar10 = *param_1;
      if (lVar10 != 0) goto LAB_004a7134;
LAB_004a71a8:
                    /* try { // try from 004a71a8 to 004a71af has its CatchHandler @ 004a74b8 */
      FUN_00641618(&local_70);
      plVar8 = local_70;
    }
                    /* try { // try from 004a71b8 to 004a71bb has its CatchHandler @ 004a7524 */
    iVar7 = FUN_00638aa0((int)param_1[2]);
                    /* try { // try from 004a71c8 to 004a71d7 has its CatchHandler @ 004a750c */
    local_98 = plVar8;
    FUN_00638a90(&local_70,&local_98,(int)param_1[2],iVar7);
    plVar6 = local_70;
    plVar8 = local_98;
    local_70 = (long *)0x0;
    local_98 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    lVar10 = param_1[2];
                    /* try { // try from 004a71fc to 004a7203 has its CatchHandler @ 004a7508 */
    pvVar9 = (void *)FUN_00759c3c(0x18);
    if ((int)lVar10 <= iVar7) {
      iVar7 = (int)lVar10;
    }
                    /* try { // try from 004a7214 to 004a722b has its CatchHandler @ 004a74e0 */
    local_70 = plVar6;
    FUN_00638204(pvVar9,&local_70,iVar7,0,0,&local_90,0xffffffff);
    plVar8 = local_70;
    local_70 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    pvVar5 = local_78;
    if (local_78 != (void *)0x0) {
      FUN_006386f8(local_78);
      free(pvVar5);
    }
    local_a0 = (long *)0x0;
    if (param_3 == 0) {
      local_78 = (void *)0x0;
                    /* try { // try from 004a7370 to 004a7387 has its CatchHandler @ 004a74ac */
      local_a8 = pvVar9;
      FUN_004a7930(&local_70,&local_a8,&local_a0,0,0);
      plVar8 = local_70;
      pvVar9 = (void *)*param_2;
      local_70 = (long *)0x0;
      *param_2 = (long)plVar8;
      if (pvVar9 != (void *)0x0) {
        if ((*(byte *)((long)pvVar9 + 8) & 1) != 0) {
          free(*(void **)((long)pvVar9 + 0x18));
        }
        free(pvVar9);
        plVar8 = local_70;
        local_70 = (long *)0x0;
        if (plVar8 != (long *)0x0) {
          if ((*(byte *)(plVar8 + 1) & 1) != 0) {
            free((void *)plVar8[3]);
          }
          free(plVar8);
        }
      }
      pvVar9 = local_a8;
      local_a8 = (void *)0x0;
    }
    else {
      local_78 = (void *)0x0;
                    /* try { // try from 004a726c to 004a7283 has its CatchHandler @ 004a74c0 */
      local_b0 = pvVar9;
      FUN_004a7930(&local_70,&local_b0,&local_a0,param_3,1);
      plVar8 = local_70;
      pvVar9 = (void *)*param_2;
      local_70 = (long *)0x0;
      *param_2 = (long)plVar8;
      if (pvVar9 != (void *)0x0) {
        if ((*(byte *)((long)pvVar9 + 8) & 1) != 0) {
          free(*(void **)((long)pvVar9 + 0x18));
        }
        free(pvVar9);
        plVar8 = local_70;
        local_70 = (long *)0x0;
        if (plVar8 != (long *)0x0) {
          if ((*(byte *)(plVar8 + 1) & 1) != 0) {
            free((void *)plVar8[3]);
          }
          free(plVar8);
        }
      }
      pvVar9 = local_b0;
      local_b0 = (void *)0x0;
    }
    if (pvVar9 != (void *)0x0) {
      FUN_006386f8(pvVar9);
      free(pvVar9);
    }
    plVar8 = local_a0;
    if (*param_2 == 0) {
                    /* try { // try from 004a73e8 to 004a73ef has its CatchHandler @ 004a74a4 */
      pvVar9 = (void *)FUN_00759c3c(8);
      local_70 = local_a0;
      local_a0 = (long *)0x0;
                    /* try { // try from 004a7400 to 004a7407 has its CatchHandler @ 004a748c */
      FUN_004a6ffc(pvVar9,&local_70);
      plVar8 = local_70;
      local_70 = (long *)0x0;
      if (plVar8 != (long *)0x0) {
        FUN_004a7828(plVar8);
        free(plVar8);
      }
      pvVar5 = DAT_007ad170;
      bVar2 = DAT_007ad170 != (void *)0x0;
      DAT_007ad170 = pvVar9;
      if (bVar2) {
        FUN_004a700c(pvVar5);
        free(pvVar5);
      }
      plVar8 = local_a0;
      local_a0 = (long *)0x0;
      if (plVar8 != (long *)0x0) {
        FUN_004a7828(plVar8);
        free(plVar8);
      }
      if ((local_90 & 1) != 0) {
        free(local_80);
      }
      goto LAB_004a70d8;
    }
    local_a0 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      FUN_004a7828(plVar8);
      free(plVar8);
    }
    if ((local_90 & 1) != 0) {
      free(local_80);
    }
    pvVar9 = (void *)0x0;
  }
  else {
LAB_004a70d8:
    DAT_007ad178 = DAT_007ad178 + 1;
    pvVar9 = DAT_007ad170;
  }
                    /* try { // try from 004a7328 to 004a7333 has its CatchHandler @ 004a7584 */
  FUN_00707c00(&DAT_007ad180);
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return pvVar9;
  }
LAB_004a7580:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a758c  FUN_004a758c =====

void FUN_004a758c(void *param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [80];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_1 != (void *)0x0) {
    FUN_007073d8(PTR_DAT_007a1f78);
    puVar3 = PTR_DAT_007a1f80;
    if (*(void **)PTR_DAT_007a1f80 != param_1) {
      uVar4 = FUN_00753a74(0x88);
                    /* try { // try from 004a7640 to 004a7647 has its CatchHandler @ 004a76f8 */
      FUN_00645c30(auStack_a0);
                    /* try { // try from 004a7648 to 004a7667 has its CatchHandler @ 004a76e8 */
      FUN_0047488c(auStack_88,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/ort_env.cc"
                   ,0x50,"static void OrtEnv::Release(OrtEnv *)",auStack_a0);
      FUN_00476720(auStack_b8);
                    /* try { // try from 004a7674 to 004a76bb has its CatchHandler @ 004a76bc */
      FUN_00474a40(uVar4,auStack_88,"env_ptr == p_instance_.get()",auStack_b8);
      if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar4,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
      }
      goto LAB_004a772c;
    }
    iVar1 = *(int *)PTR_DAT_007a1f88;
    *(int *)PTR_DAT_007a1f88 = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      *(undefined8 *)puVar3 = 0;
      FUN_004a700c(param_1);
      free(param_1);
    }
                    /* try { // try from 004a7600 to 004a760b has its CatchHandler @ 004a7734 */
    FUN_00707c00(PTR_DAT_007a1f78);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_004a772c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a7738  FUN_004a7738 =====

undefined8 FUN_004a7738(undefined8 *param_1)

{
  return *(undefined8 *)*param_1;
}


// ===== 004a7744  FUN_004a7744 =====

void FUN_004a7744(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_48;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = *param_3;
  local_40 = (long *)param_3[1];
  uVar4 = *param_2;
  if (local_40 != (long *)0x0) {
    FUN_00755c20(1,local_40 + 1);
  }
                    /* try { // try from 004a7788 to 004a7793 has its CatchHandler @ 004a77e8 */
  FUN_004a7e20(param_1,uVar4,&local_48);
  plVar2 = local_40;
  if ((local_40 != (long *)0x0) &&
     (lVar3 = FUN_00755c50(0xffffffffffffffff,local_40 + 1), lVar3 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a7810  FUN_004a7810 =====

void FUN_004a7810(undefined8 *param_1)

{
  FUN_004a81ec(*param_1);
  return;
}


// ===== 004a7818  FUN_004a7818 =====

void FUN_004a7818(undefined8 *param_1)

{
  FUN_004a84cc(*param_1);
  return;
}


// ===== 004a7820  FUN_004a7820 =====

void FUN_004a7820(undefined8 *param_1)

{
  FUN_004a87f8(*param_1);
  return;
}


// ===== 004a7828  FUN_004a7828 =====

void FUN_004a7828(undefined8 *param_1)

{
  long lVar1;
  void *__ptr;
  long *plVar2;
  void *pvVar3;
  void *pvVar4;
  
  pvVar3 = (void *)param_1[4];
  if (pvVar3 != (void *)0x0) {
    pvVar4 = (void *)param_1[5];
    __ptr = pvVar3;
    if (pvVar4 != pvVar3) {
      do {
        plVar2 = *(long **)((long)pvVar4 + -8);
        if ((plVar2 != (long *)0x0) &&
           (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0)) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          FUN_0071245c(plVar2);
        }
        pvVar4 = (void *)((long)pvVar4 + -0x10);
      } while (pvVar4 != pvVar3);
      __ptr = (void *)param_1[4];
    }
    param_1[5] = pvVar3;
    free(__ptr);
  }
  pvVar3 = (void *)param_1[2];
  param_1[2] = 0;
  if (pvVar3 != (void *)0x0) {
    FUN_0063b594(pvVar3);
    free(pvVar3);
  }
  pvVar3 = (void *)param_1[1];
  param_1[1] = 0;
  if (pvVar3 != (void *)0x0) {
    FUN_0063b594(pvVar3);
    free(pvVar3);
  }
  pvVar3 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar3 == (void *)0x0) {
    return;
  }
  FUN_006386f8(pvVar3);
  free(pvVar3);
  return;
}


// ===== 004a7914  _INIT_26 =====

void _INIT_26(void)

{
  __cxa_atexit(FUN_004a6fc0,PTR_DAT_007a1f80,&PTR_LOOP_0075ec90);
  return;
}


// ===== 004a7930  FUN_004a7930 =====

void FUN_004a7930(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                 uint param_5)

{
  long lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)FUN_00759c3c(0x38);
  pvVar3 = (void *)*param_3;
  puVar2[6] = 0;
  *param_3 = puVar2;
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  if (pvVar3 != (void *)0x0) {
    FUN_004a7828(pvVar3);
    free(pvVar3);
    puVar2 = (undefined8 *)*param_3;
  }
  local_60 = (void *)*param_2;
  *param_2 = 0;
                    /* try { // try from 004a79b0 to 004a79c3 has its CatchHandler @ 004a7a30 */
  FUN_004a7a58(param_1,puVar2,&local_60,param_4,param_5 & 1);
  pvVar3 = local_60;
  if (local_60 == (void *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return;
    }
  }
  else {
    FUN_006386f8(local_60);
    if (*(long *)(lVar1 + 0x28) == local_58) {
      free(pvVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a7a58  FUN_004a7a58 =====

void FUN_004a7a58(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 uint param_5)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  void *pvVar4;
  void *pvVar5;
  undefined8 local_160;
  undefined8 uStack_158;
  ulong local_150;
  undefined8 uStack_148;
  void *local_140;
  char *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  ulong local_100;
  undefined8 uStack_f8;
  void *local_f0;
  char *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  void *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  ulong local_a0;
  undefined8 uStack_98;
  void *local_90;
  char *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar3 = *param_3;
  *param_3 = 0;
  pvVar5 = (void *)*param_2;
  *param_1 = 0;
  *param_2 = uVar3;
  if (pvVar5 != (void *)0x0) {
    FUN_006386f8(pvVar5);
    free(pvVar5);
  }
  if ((param_5 & 1) != 0) {
    *(undefined1 *)(param_2 + 3) = 1;
    uStack_a8 = param_4[1];
    local_b0 = *param_4;
    if ((param_4[2] & 1) == 0) {
      uStack_98 = param_4[3];
      local_a0 = param_4[2];
      local_90 = (void *)param_4[4];
    }
    else {
                    /* try { // try from 004a7af4 to 004a7afb has its CatchHandler @ 004a7d38 */
      FUN_002fb36c(&local_a0,param_4[4],param_4[3]);
    }
    uStack_80 = param_4[6];
    local_88 = (char *)param_4[5];
    local_68 = param_4[9];
    uStack_70 = param_4[8];
    local_78 = param_4[7];
    if (local_88 == (char *)0x0) {
      local_88 = "intra-op";
    }
                    /* try { // try from 004a7b2c to 004a7b6b has its CatchHandler @ 004a7d74 */
    uVar3 = FUN_00641af0();
    uStack_108 = uStack_a8;
    local_110 = local_b0;
    if ((local_a0 & 1) == 0) {
      uStack_f8 = uStack_98;
      local_100 = local_a0;
      local_f0 = local_90;
    }
    else {
      FUN_002fb36c(&local_100,local_90,uStack_98);
    }
    uStack_e0 = uStack_80;
    local_e8 = local_88;
    uStack_d0 = uStack_70;
    local_d8 = local_78;
    local_c8 = local_68;
                    /* try { // try from 004a7b88 to 004a7b97 has its CatchHandler @ 004a7d58 */
    FUN_00603f64(&local_b8,uVar3,&local_110,0);
    pvVar5 = local_b8;
    pvVar4 = (void *)param_2[1];
    local_b8 = (void *)0x0;
    param_2[1] = pvVar5;
    if (pvVar4 != (void *)0x0) {
      FUN_0063b594(pvVar4);
      free(pvVar4);
      pvVar5 = local_b8;
      local_b8 = (void *)0x0;
      if (pvVar5 != (void *)0x0) {
        FUN_0063b594(pvVar5);
        free(pvVar5);
      }
    }
    if ((local_100 & 1) != 0) {
      free(local_f0);
    }
    uStack_a8 = param_4[0xb];
    local_b0 = param_4[10];
                    /* try { // try from 004a7bf0 to 004a7bfb has its CatchHandler @ 004a7d54 */
    FUN_007139b0(&local_a0,param_4 + 0xc);
    uStack_80 = param_4[0x10];
    local_88 = (char *)param_4[0xf];
    uStack_70 = param_4[0x12];
    local_78 = param_4[0x11];
    local_68 = param_4[0x13];
    if (local_88 == (char *)0x0) {
      local_88 = "inter-op";
    }
                    /* try { // try from 004a7c28 to 004a7c67 has its CatchHandler @ 004a7d70 */
    uVar3 = FUN_00641af0();
    uStack_158 = uStack_a8;
    local_160 = local_b0;
    if ((local_a0 & 1) == 0) {
      uStack_148 = uStack_98;
      local_150 = local_a0;
      local_140 = local_90;
    }
    else {
      FUN_002fb36c(&local_150,local_90,uStack_98);
    }
    uStack_130 = uStack_80;
    local_138 = local_88;
    uStack_120 = uStack_70;
    local_128 = local_78;
    local_118 = local_68;
                    /* try { // try from 004a7c80 to 004a7c8f has its CatchHandler @ 004a7d40 */
    FUN_00603f64(&local_b8,uVar3,&local_160,1);
    pvVar5 = local_b8;
    pvVar4 = (void *)param_2[2];
    local_b8 = (void *)0x0;
    param_2[2] = pvVar5;
    if (pvVar4 != (void *)0x0) {
      FUN_0063b594(pvVar4);
      free(pvVar4);
      pvVar5 = local_b8;
      local_b8 = (void *)0x0;
      if (pvVar5 != (void *)0x0) {
        FUN_0063b594(pvVar5);
        free(pvVar5);
      }
    }
    if ((local_150 & 1) != 0) {
      free(local_140);
    }
    if ((local_a0 & 1) != 0) {
      free(local_90);
    }
  }
                    /* try { // try from 004a7cf0 to 004a7d0b has its CatchHandler @ 004a7dac */
  plVar2 = (long *)FUN_00641af0();
  plVar2 = (long *)(**(code **)(*plVar2 + 200))();
  (**(code **)(*plVar2 + 0x40))();
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a7e20  FUN_004a7e20 =====

void FUN_004a7e20(undefined8 *param_1,long param_2,long *param_3)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = *(long **)(param_2 + 0x20);
  plVar1 = *(long **)(param_2 + 0x28);
  if (plVar5 == plVar1) {
LAB_004a7ea8:
    if (plVar5 != plVar1) {
      FUN_0063acd8(param_1,2,2,
                   "An allocator for this device has already been registered for sharing.");
      return;
    }
  }
  else {
    lVar6 = *param_3;
    iVar2 = *(int *)(lVar6 + 0x14);
    do {
      lVar4 = *plVar5;
      if ((((*(int *)(lVar4 + 0x14) == iVar2) && (*(int *)(lVar4 + 0x10) == *(int *)(lVar6 + 0x10)))
          && (*(int *)(lVar6 + 0x1c) == *(int *)(lVar4 + 0x1c))) &&
         (iVar3 = strcmp(*(char **)(lVar4 + 8),*(char **)(lVar6 + 8)), iVar3 == 0))
      goto LAB_004a7ea8;
      plVar5 = plVar5 + 2;
    } while (plVar5 != plVar1);
  }
  FUN_004a7f08((long *)(param_2 + 0x20),plVar1,param_3);
  *param_1 = 0;
  return;
}


// ===== 004a7f08  FUN_004a7f08 =====

undefined8 * FUN_004a7f08(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  void *local_80;
  void *local_78;
  void *local_70;
  void *pvStack_68;
  long *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  puVar6 = (undefined8 *)param_1[1];
  plVar10 = param_1 + 2;
  if (puVar6 < (undefined8 *)*plVar10) {
    if ((long)param_2 - (long)puVar6 == 0) {
      lVar5 = param_3[1];
      *param_2 = *param_3;
      param_2[1] = lVar5;
      if (lVar5 != 0) {
        FUN_00755c20(1,lVar5 + 8);
      }
      param_1[1] = (long)(param_2 + 2);
    }
    else {
      puVar11 = puVar6 + -2;
      if (puVar11 < puVar6) {
        puVar8 = puVar6 + 2;
        puVar6[1] = puVar6[-1];
        *puVar6 = *puVar11;
        *puVar11 = 0;
        puVar6[-1] = 0;
        param_1[1] = (long)puVar8;
      }
      else {
        param_1[1] = (long)puVar6;
        puVar8 = puVar6;
      }
      if (puVar6 != param_2 + 2) {
        puVar11 = puVar6 + -1;
        puVar8 = puVar6 + -4;
        lVar5 = ((long)param_2 - (long)puVar6) + 0x10;
        do {
          uVar13 = puVar8[1];
          uVar12 = *puVar8;
          *puVar8 = 0;
          puVar8[1] = 0;
          plVar10 = (long *)*puVar11;
          *puVar11 = uVar13;
          puVar11[-1] = uVar12;
          if ((plVar10 != (long *)0x0) &&
             (lVar4 = FUN_00755c50(0xffffffffffffffff,plVar10 + 1), lVar4 == 0)) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
            FUN_0071245c(plVar10);
          }
          lVar5 = lVar5 + 0x10;
          puVar11 = puVar11 + -2;
          puVar8 = puVar8 + -2;
        } while (lVar5 != 0);
        puVar8 = (undefined8 *)param_1[1];
      }
      lVar5 = 0x10;
      if (puVar8 <= param_3 || param_3 < param_2) {
        lVar5 = 0;
      }
      uVar12 = *(undefined8 *)((long)param_3 + lVar5);
      lVar5 = ((undefined8 *)((long)param_3 + lVar5))[1];
      if (lVar5 != 0) {
        FUN_00755c20(1,lVar5 + 8);
      }
      plVar10 = (long *)param_2[1];
      *param_2 = uVar12;
      param_2[1] = lVar5;
      if ((plVar10 != (long *)0x0) &&
         (lVar5 = FUN_00755c50(0xffffffffffffffff,plVar10 + 1), lVar5 == 0)) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        FUN_0071245c(plVar10);
      }
    }
  }
  else {
    lVar5 = *param_1;
    uVar1 = ((long)puVar6 - lVar5 >> 4) + 1;
    if (uVar1 >> 0x3c != 0) {
      if (*(long *)(lVar2 + 0x28) != local_58) goto LAB_004a81e8;
      FUN_004a8e04(param_1);
LAB_004a81b0:
      if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_002f9ee0();
      }
      goto LAB_004a81e8;
    }
    uVar7 = *plVar10 - lVar5;
    uVar9 = (long)uVar7 >> 3;
    if (uVar9 <= uVar1) {
      uVar9 = uVar1;
    }
    if (0x7fffffffffffffef < uVar7) {
      uVar9 = 0xfffffffffffffff;
    }
    local_60 = plVar10;
    if (uVar9 == 0) {
      local_80 = (void *)0x0;
    }
    else {
      if (uVar9 >> 0x3c != 0) goto LAB_004a81b0;
      local_80 = (void *)FUN_00759c3c(uVar9 << 4);
    }
    pvStack_68 = (void *)((long)local_80 + uVar9 * 0x10);
    local_78 = (void *)((long)local_80 + ((long)param_2 - lVar5 >> 4) * 0x10);
    local_70 = local_78;
                    /* try { // try from 004a801c to 004a8037 has its CatchHandler @ 004a81c4 */
    FUN_004a8a24(&local_80,param_3);
    param_2 = (undefined8 *)FUN_004a8c08(param_1,&local_80,param_2);
    pvVar3 = local_78;
    while (local_70 != pvVar3) {
      plVar10 = *(long **)((long)local_70 + -8);
      local_70 = (void *)((long)local_70 + -0x10);
      if ((plVar10 != (long *)0x0) &&
         (lVar5 = FUN_00755c50(0xffffffffffffffff,plVar10 + 1), lVar5 == 0)) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        FUN_0071245c(plVar10);
      }
    }
    if (local_80 != (void *)0x0) {
      free(local_80);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return param_2;
  }
LAB_004a81e8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a81ec  FUN_004a81ec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a81ec(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined ***pppuVar9;
  long lVar10;
  long *plVar11;
  long local_120;
  long *local_118;
  long local_110;
  long *plStack_108;
  long local_100;
  long *local_f8;
  undefined **local_f0 [4];
  undefined ***local_d0;
  undefined **local_c0;
  undefined8 uStack_b8;
  char *local_b0;
  undefined ***local_a0;
  undefined2 local_90;
  undefined1 local_8e;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined2 local_68;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (*(char *)(param_3 + 0x14) != '\0') {
    local_b0 = (char *)FUN_00759c3c(0x60);
    uVar6 = s_Only_CPU_devices_are_supported__P_001ebaf2._56_8_;
    uVar5 = s_Only_CPU_devices_are_supported__P_001ebaf2._48_8_;
    uVar4 = s_Only_CPU_devices_are_supported__P_001ebaf2._32_8_;
    uStack_b8 = _UNK_002003e8;
    local_c0 = _DAT_002003e0;
    *(undefined8 *)(local_b0 + 0x28) = s_Only_CPU_devices_are_supported__P_001ebaf2._40_8_;
    *(undefined8 *)(local_b0 + 0x20) = uVar4;
    *(undefined8 *)(local_b0 + 0x38) = uVar6;
    *(undefined8 *)(local_b0 + 0x30) = uVar5;
    uVar7 = s_Only_CPU_devices_are_supported__P_001ebaf2._84_8_;
    uVar6 = s_Only_CPU_devices_are_supported__P_001ebaf2._64_8_;
    uVar4 = CONCAT44(s_Only_CPU_devices_are_supported__P_001ebaf2._76_4_,
                     s_Only_CPU_devices_are_supported__P_001ebaf2._72_4_);
    uVar5 = CONCAT44(s_Only_CPU_devices_are_supported__P_001ebaf2._80_4_,
                     s_Only_CPU_devices_are_supported__P_001ebaf2._76_4_);
    local_b0[0x5c] = '\0';
    *(undefined8 *)(local_b0 + 0x48) = uVar4;
    *(undefined8 *)(local_b0 + 0x40) = uVar6;
    *(undefined8 *)(local_b0 + 0x54) = uVar7;
    *(undefined8 *)(local_b0 + 0x4c) = uVar5;
    uVar6 = s_Only_CPU_devices_are_supported__P_001ebaf2._24_8_;
    uVar5 = s_Only_CPU_devices_are_supported__P_001ebaf2._16_8_;
    uVar4 = s_Only_CPU_devices_are_supported__P_001ebaf2._0_8_;
    *(undefined8 *)(local_b0 + 8) = s_Only_CPU_devices_are_supported__P_001ebaf2._8_8_;
    *(undefined8 *)local_b0 = uVar4;
    *(undefined8 *)(local_b0 + 0x18) = uVar6;
    *(undefined8 *)(local_b0 + 0x10) = uVar5;
                    /* try { // try from 004a8264 to 004a8277 has its CatchHandler @ 004a849c */
    FUN_0063aa48(param_1,2,2,&local_c0);
    if (((ulong)local_c0 & 1) != 0) {
      free(local_b0);
    }
    goto LAB_004a8420;
  }
  local_d0 = local_f0;
  local_f0[0] = &PTR_FUN_00790128;
  local_c0 = &PTR_FUN_00790128;
  local_100 = 0;
  local_f8 = (long *)0x0;
  local_90 = 0;
  local_8e = 0;
  local_88 = 0;
  uStack_80 = 0xffffffffffffffff;
  local_78 = 0xffffffffffffffff;
  uStack_70 = 0xffffffffffffffff;
  local_68 = 0;
                    /* try { // try from 004a82cc to 004a82d7 has its CatchHandler @ 004a845c */
  local_a0 = &local_c0;
  FUN_00560d14(&local_110,&local_c0);
  local_100 = local_110;
  local_f8 = plStack_108;
  if (local_a0 == &local_c0) {
    lVar10 = 0x20;
    pppuVar9 = &local_c0;
LAB_004a8300:
    (**(code **)((long)*pppuVar9 + lVar10))();
  }
  else if (local_a0 != (undefined ***)0x0) {
    lVar10 = 0x28;
    pppuVar9 = local_a0;
    goto LAB_004a8300;
  }
  local_120 = local_110;
  local_118 = plStack_108;
  if (plStack_108 != (long *)0x0) {
    FUN_00755c20(1,plStack_108 + 1);
  }
  plVar11 = *(long **)(param_2 + 0x20);
  plVar1 = *(long **)(param_2 + 0x28);
  if (plVar11 == plVar1) {
LAB_004a8380:
    if (plVar11 == plVar1) goto LAB_004a83ac;
                    /* try { // try from 004a8388 to 004a83bb has its CatchHandler @ 004a844c */
    FUN_0063acd8(param_1,2,2,"An allocator for this device has already been registered for sharing."
                );
    plVar11 = local_118;
  }
  else {
    iVar2 = *(int *)(local_110 + 0x14);
    do {
      lVar10 = *plVar11;
      if ((((*(int *)(lVar10 + 0x14) == iVar2) &&
           (*(int *)(lVar10 + 0x10) == *(int *)(local_110 + 0x10))) &&
          (*(int *)(local_110 + 0x1c) == *(int *)(lVar10 + 0x1c))) &&
         (iVar8 = strcmp(*(char **)(lVar10 + 8),*(char **)(local_110 + 8)), iVar8 == 0))
      goto LAB_004a8380;
      plVar11 = plVar11 + 2;
    } while (plVar11 != plVar1);
LAB_004a83ac:
    FUN_004a7f08((long *)(param_2 + 0x20),plVar1,&local_120);
    *param_1 = 0;
    plVar11 = local_118;
  }
  local_118 = plVar11;
  if ((plVar11 != (long *)0x0) &&
     (lVar10 = FUN_00755c50(0xffffffffffffffff,plVar11 + 1), lVar10 == 0)) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    FUN_0071245c(plVar11);
  }
  plVar11 = local_f8;
  if ((local_f8 != (long *)0x0) &&
     (lVar10 = FUN_00755c50(0xffffffffffffffff,local_f8 + 1), lVar10 == 0)) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    FUN_0071245c(plVar11);
  }
LAB_004a8420:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a84cc  FUN_004a84cc =====

void FUN_004a84cc(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  char *__s2;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  
  plVar8 = *(long **)(param_2 + 0x20);
  plVar7 = *(long **)(param_2 + 0x28);
  if (plVar8 != plVar7) {
    iVar1 = *(int *)(param_3 + 1);
    iVar2 = *(int *)((long)param_3 + 0xc);
    iVar3 = *(int *)((long)param_3 + 0x14);
    __s2 = (char *)*param_3;
    plVar6 = plVar8;
    do {
      plVar8 = plVar6;
      lVar5 = *plVar8;
      if ((((*(int *)(lVar5 + 0x14) == iVar2) && (*(int *)(lVar5 + 0x10) == iVar1)) &&
          (iVar3 == *(int *)(lVar5 + 0x1c))) &&
         (iVar4 = strcmp(*(char **)(lVar5 + 8),__s2), iVar4 == 0)) break;
      plVar6 = plVar8 + 2;
      plVar8 = plVar7;
    } while (plVar6 != plVar7);
  }
  if (plVar7 == plVar8) {
    FUN_0063acd8(param_1,2,2,"No allocator for this device has been registered for sharing.");
    return;
  }
  if (plVar8 + 2 != plVar7) {
    do {
      lVar9 = plVar8[3];
      lVar5 = plVar8[2];
      plVar6 = (long *)plVar8[1];
      plVar8[2] = 0;
      plVar8[3] = 0;
      plVar8[1] = lVar9;
      *plVar8 = lVar5;
      if ((plVar6 != (long *)0x0) &&
         (lVar5 = FUN_00755c50(0xffffffffffffffff,plVar6 + 1), lVar5 == 0)) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_0071245c(plVar6);
      }
      plVar6 = plVar8 + 4;
      plVar8 = plVar8 + 2;
    } while (plVar6 != plVar7);
    plVar7 = *(long **)(param_2 + 0x28);
    if (plVar8 == plVar7) goto LAB_004a85c8;
  }
  do {
    plVar6 = (long *)plVar7[-1];
    if ((plVar6 != (long *)0x0) && (lVar5 = FUN_00755c50(0xffffffffffffffff,plVar6 + 1), lVar5 == 0)
       ) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_0071245c(plVar6);
    }
    plVar7 = plVar7 + -2;
  } while (plVar7 != plVar8);
LAB_004a85c8:
  *(long **)(param_2 + 0x28) = plVar8;
  *param_1 = 0;
  return;
}


// ===== 004a8654  FUN_004a8654 =====

void FUN_004a8654(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  undefined8 uVar3;
  ulong *puVar4;
  void *__ptr;
  byte local_68;
  char local_67 [8];
  undefined7 uStack_5f;
  char cStack_58;
  undefined2 uStack_57;
  undefined1 uStack_55;
  undefined4 uStack_54;
  ulong local_50;
  ulong uStack_48;
  void *local_40;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_68 = 0x24;
  uStack_5f = (undefined7)s_Exception_caught__001e7a12._8_8_;
  cStack_58 = SUB81(s_Exception_caught__001e7a12._8_8_,7);
  local_67 = (char  [8])s_Exception_caught__001e7a12._0_8_;
  uStack_57 = 0x203a;
  uStack_55 = 0;
  uVar3 = (**(code **)(*(long *)param_1[1] + 0x10))();
                    /* try { // try from 004a86ac to 004a86b3 has its CatchHandler @ 004a87d0 */
  puVar4 = (ulong *)FUN_00713bdc(&local_68,uVar3);
  local_40 = (void *)puVar4[2];
  uStack_48 = puVar4[1];
  local_50 = *puVar4;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
                    /* try { // try from 004a86cc to 004a86df has its CatchHandler @ 004a8790 */
  FUN_0063aa48(&local_30,2,6,&local_50);
  pvVar2 = local_30;
  local_30 = (void *)0x0;
  __ptr = *(void **)*param_1;
  *(void **)*param_1 = pvVar2;
  if (__ptr != (void *)0x0) {
    if ((*(byte *)((long)__ptr + 8) & 1) != 0) {
      free(*(void **)((long)__ptr + 0x18));
    }
    free(__ptr);
  }
  pvVar2 = local_30;
  local_30 = (void *)0x0;
  if (pvVar2 != (void *)0x0) {
    if ((*(byte *)((long)pvVar2 + 8) & 1) != 0) {
      free(*(void **)((long)pvVar2 + 0x18));
    }
    free(pvVar2);
  }
  if ((local_50 & 1) != 0) {
    free(local_40);
  }
  if ((local_68 & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == local_28) {
      s_Exception_caught__001e7a12[8] = (char)s_Exception_caught__001e7a12._8_8_;
      s_Exception_caught__001e7a12[9] = SUB81(s_Exception_caught__001e7a12._8_8_,1);
      s_Exception_caught__001e7a12[10] = SUB81(s_Exception_caught__001e7a12._8_8_,2);
      s_Exception_caught__001e7a12[0xb] = SUB81(s_Exception_caught__001e7a12._8_8_,3);
      s_Exception_caught__001e7a12[0xc] = SUB81(s_Exception_caught__001e7a12._8_8_,4);
      s_Exception_caught__001e7a12[0xd] = SUB81(s_Exception_caught__001e7a12._8_8_,5);
      s_Exception_caught__001e7a12[0xe] = SUB81(s_Exception_caught__001e7a12._8_8_,6);
      s_Exception_caught__001e7a12[0xf] = SUB81(s_Exception_caught__001e7a12._8_8_,7);
      s_Exception_caught__001e7a12[0] = (char)s_Exception_caught__001e7a12._0_8_;
      s_Exception_caught__001e7a12[1] = SUB81(s_Exception_caught__001e7a12._0_8_,1);
      s_Exception_caught__001e7a12[2] = SUB81(s_Exception_caught__001e7a12._0_8_,2);
      s_Exception_caught__001e7a12[3] = SUB81(s_Exception_caught__001e7a12._0_8_,3);
      s_Exception_caught__001e7a12[4] = SUB81(s_Exception_caught__001e7a12._0_8_,4);
      s_Exception_caught__001e7a12[5] = SUB81(s_Exception_caught__001e7a12._0_8_,5);
      s_Exception_caught__001e7a12[6] = SUB81(s_Exception_caught__001e7a12._0_8_,6);
      s_Exception_caught__001e7a12[7] = SUB81(s_Exception_caught__001e7a12._0_8_,7);
      return;
    }
  }
  else {
    free((void *)CONCAT44(uStack_54,CONCAT13(uStack_55,CONCAT21(uStack_57,cStack_58))));
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a87f8  FUN_004a87f8 =====

/* WARNING: Removing unreachable block (ram,0x004a8910) */

void FUN_004a87f8(undefined8 param_1,undefined8 param_2,byte *param_3,undefined8 param_4)

{
  char *pcVar1;
  size_t __n;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  void *__dest;
  byte *pbVar5;
  ulong uVar6;
  undefined8 local_70;
  ulong local_68;
  void *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  bVar3 = *param_3;
  __n = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    __n = *(size_t *)(param_3 + 8);
  }
  if (__n == 0x14) {
    pbVar5 = *(byte **)(param_3 + 0x10);
    if ((bVar3 & 1) == 0) {
      pbVar5 = param_3 + 1;
    }
    if ((*(long *)pbVar5 == 0x7563657845555043 && *(long *)(pbVar5 + 8) == 0x766f72506e6f6974) &&
        *(int *)(pbVar5 + 0x10) == 0x72656469) {
      if (*(long *)(lVar4 + 0x28) == local_58) {
        FUN_004a81ec(param_1,param_2,param_4);
        return;
      }
      goto LAB_004a8a20;
    }
    uVar6 = 0x49;
LAB_004a88d8:
    uVar2 = (uVar6 & 0xfffffffffffffff8) + 8;
    if ((uVar6 | 7) != 0x17) {
      uVar2 = uVar6 | 7;
    }
    __dest = (void *)FUN_00759c3c(uVar2 + 1);
    local_70 = uVar2 + 1 | 1;
    local_68 = uVar6;
    local_60 = __dest;
  }
  else {
    uVar6 = __n + 0x35;
    if (0xfffffffffffffff7 < uVar6) {
      if (*(long *)(lVar4 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_002fb400(&local_70);
      }
      goto LAB_004a8a20;
    }
    if (0x16 < uVar6) goto LAB_004a88d8;
    local_68 = 0;
    local_60 = (void *)0x0;
    local_70 = (ulong)(byte)(((uint)uVar6 & 0xff) << 1);
    __dest = (void *)((long)&local_70 + 1);
  }
  if (__n != 0) {
    pbVar5 = *(byte **)(param_3 + 0x10);
    if ((bVar3 & 1) == 0) {
      pbVar5 = param_3 + 1;
    }
    memmove(__dest,pbVar5,__n);
  }
  pcVar1 = (char *)((long)__dest + __n);
  pcVar1[0x35] = '\0';
  *(ulong *)(pcVar1 + 0x28) =
       CONCAT35(s_is_not_implemented_in_CreateAndR_001d2783._45_3_,
                s_is_not_implemented_in_CreateAndR_001d2783._40_5_);
  *(undefined8 *)(pcVar1 + 0x20) = s_is_not_implemented_in_CreateAndR_001d2783._32_8_;
  *(undefined8 *)(pcVar1 + 8) = s_is_not_implemented_in_CreateAndR_001d2783._8_8_;
  *(undefined8 *)pcVar1 = s_is_not_implemented_in_CreateAndR_001d2783._0_8_;
  *(undefined8 *)(pcVar1 + 0x18) = s_is_not_implemented_in_CreateAndR_001d2783._24_8_;
  *(undefined8 *)(pcVar1 + 0x10) = s_is_not_implemented_in_CreateAndR_001d2783._16_8_;
  *(ulong *)(pcVar1 + 0x2d) =
       CONCAT53(s_is_not_implemented_in_CreateAndR_001d2783._48_5_,
                s_is_not_implemented_in_CreateAndR_001d2783._45_3_);
                    /* try { // try from 004a8958 to 004a896b has its CatchHandler @ 004a89f4 */
  FUN_0063aa48(param_1,2,2,&local_70);
  if ((local_70 & 1) != 0) {
    free(local_60);
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
LAB_004a8a20:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a8a24  FUN_004a8a24 =====

void FUN_004a8a24(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar10 = (undefined8 *)param_1[2];
  puVar11 = puVar10;
  if (puVar10 == (undefined8 *)param_1[3]) {
    puVar9 = (undefined8 *)*param_1;
    puVar11 = (undefined8 *)param_1[1];
    if (puVar11 < puVar9 || (long)puVar11 - (long)puVar9 == 0) {
      uVar5 = (long)puVar10 - (long)puVar9 >> 3;
      if ((long)puVar10 - (long)puVar9 == 0) {
        uVar5 = 1;
      }
      if (uVar5 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_002f9ee0();
      }
      lVar2 = FUN_00759c3c(uVar5 * 0x10);
      lVar4 = lVar2 + (uVar5 >> 2) * 0x10;
      lVar6 = (long)puVar10 - (long)puVar11;
      lVar3 = lVar2 + uVar5 * 0x10;
      if (lVar6 == 0) {
        *param_1 = lVar2;
        param_1[1] = lVar4;
        param_1[2] = lVar4;
        param_1[3] = lVar3;
      }
      else {
        lVar7 = (uVar5 >> 2) << 4;
        lVar1 = lVar4 + lVar6;
        do {
          uVar12 = *puVar11;
          lVar6 = lVar6 + -0x10;
          ((undefined8 *)(lVar2 + lVar7))[1] = puVar11[1];
          *(undefined8 *)(lVar2 + lVar7) = uVar12;
          lVar7 = lVar7 + 0x10;
          *puVar11 = 0;
          puVar11[1] = 0;
          puVar11 = puVar11 + 2;
        } while (lVar6 != 0);
        puVar9 = (undefined8 *)*param_1;
        lVar6 = param_1[1];
        lVar7 = param_1[2];
        *param_1 = lVar2;
        param_1[1] = lVar4;
        param_1[2] = lVar1;
        param_1[3] = lVar3;
        for (; lVar7 != lVar6; lVar7 = lVar7 + -0x10) {
          plVar8 = *(long **)(lVar7 + -8);
          if ((plVar8 != (long *)0x0) &&
             (lVar4 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar4 == 0)) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
            FUN_0071245c(plVar8);
          }
        }
      }
      if (puVar9 != (undefined8 *)0x0) {
        free(puVar9);
      }
      puVar11 = (undefined8 *)param_1[2];
      lVar4 = param_2[1];
      *puVar11 = *param_2;
      puVar11[1] = lVar4;
      goto joined_r0x004a8ba8;
    }
    lVar3 = (long)puVar11 - (long)puVar9 >> 4;
    lVar4 = lVar3 + 2;
    if (lVar3 + 1 < 0 == SCARRY8(lVar3,1)) {
      lVar4 = lVar3 + 1;
    }
    lVar4 = lVar4 >> 1;
    if (puVar11 == puVar10) {
      puVar11 = puVar11 + lVar4 * -2;
    }
    else {
      do {
        puVar9 = puVar11 + lVar4 * -2;
        uVar13 = puVar11[1];
        uVar12 = *puVar11;
        *puVar11 = 0;
        puVar11[1] = 0;
        plVar8 = (long *)puVar9[1];
        puVar9[1] = uVar13;
        *puVar9 = uVar12;
        if ((plVar8 != (long *)0x0) &&
           (lVar3 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar3 == 0)) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          FUN_0071245c(plVar8);
        }
        puVar11 = puVar11 + 2;
      } while (puVar11 != puVar10);
      puVar10 = (undefined8 *)param_1[1];
      puVar11 = puVar11 + lVar4 * -2;
    }
    param_1[1] = (long)(puVar10 + lVar4 * -2);
    param_1[2] = (long)puVar11;
  }
  lVar4 = param_2[1];
  *puVar11 = *param_2;
  puVar11[1] = lVar4;
joined_r0x004a8ba8:
  if (lVar4 != 0) {
    FUN_00755c20(1,lVar4 + 8);
    puVar11 = (undefined8 *)param_1[2];
  }
  param_1[2] = (long)(puVar11 + 2);
  return;
}


// ===== 004a8c08  FUN_004a8c08 =====

undefined8 FUN_004a8c08(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  puVar8 = (undefined8 *)param_1[1];
  uVar6 = param_2[1];
  if (puVar8 != param_3) {
    puVar2 = (undefined8 *)param_2[2];
    puVar3 = param_3;
    do {
      uVar9 = *puVar3;
      puVar2[1] = puVar3[1];
      *puVar2 = uVar9;
      puVar4 = puVar3 + 2;
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar2 = puVar2 + 2;
      puVar3 = puVar4;
      puVar5 = param_3;
    } while (puVar4 != puVar8);
    do {
      plVar7 = (long *)puVar5[1];
      if ((plVar7 != (long *)0x0) &&
         (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar7 + 1), lVar1 == 0)) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        FUN_0071245c(plVar7);
      }
      puVar5 = puVar5 + 2;
    } while (puVar5 != puVar8);
  }
  puVar8 = (undefined8 *)*param_1;
  lVar1 = param_1[1];
  param_1[1] = (long)param_3;
  puVar2 = (undefined8 *)(param_2[1] + ((long)puVar8 - (long)param_3));
  param_2[2] = param_2[2] + (lVar1 - (long)param_3);
  puVar3 = puVar2;
  puVar5 = puVar8;
  if ((long)puVar8 - (long)param_3 != 0) {
    do {
      uVar9 = *puVar5;
      puVar3[1] = puVar5[1];
      *puVar3 = uVar9;
      puVar4 = puVar5 + 2;
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar3 = puVar3 + 2;
      puVar5 = puVar4;
    } while (puVar4 != param_3);
    do {
      plVar7 = (long *)puVar8[1];
      if ((plVar7 != (long *)0x0) &&
         (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar7 + 1), lVar1 == 0)) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        FUN_0071245c(plVar7);
      }
      puVar8 = puVar8 + 2;
    } while (puVar8 != param_3);
  }
  param_2[1] = puVar2;
  lVar1 = *param_1;
  *param_1 = (long)puVar2;
  param_1[1] = lVar1;
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return uVar6;
}


// ===== 004a8d78  FUN_004a8d78 =====

void FUN_004a8d78(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    plVar3 = *(long **)(lVar2 + -8);
    param_1[2] = lVar2 + -0x10;
    if ((plVar3 != (long *)0x0) && (lVar2 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar2 == 0)
       ) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_0071245c(plVar3);
    }
    lVar2 = param_1[2];
  }
  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
    return;
  }
  return;
}


// ===== 004a8e04  FUN_004a8e04 =====

void FUN_004a8e04(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("vector");
}


// ===== 004a8e18  FUN_004a8e18 =====

void FUN_004a8e18(void)

{
  return;
}


// ===== 004a8e1c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004a8e20  FUN_004a8e20 =====

void FUN_004a8e20(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x10);
  *puVar1 = &PTR_FUN_00790128;
  return;
}


// ===== 004a8e44  FUN_004a8e44 =====

void FUN_004a8e44(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00790128;
  return;
}


// ===== 004a8e54  FUN_004a8e54 =====

void FUN_004a8e54(void)

{
  return;
}


// ===== 004a8e58  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004a8e5c  FUN_004a8e5c =====

void FUN_004a8e5c(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00759c3c(0x20);
  puVar1 = PTR_DAT_007a1f90;
  plVar2[2] = 0;
  plVar2[3] = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[1] = (long)&DAT_001fa69d;
  *param_1 = plVar2;
  return;
}


// ===== 004a8ea0  FUN_004a8ea0 =====

/* WARNING: Type propagation algorithm not settling */

long FUN_004a8ea0(long param_1,char *param_2,undefined8 *param_3,undefined8 *param_4,long param_5)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  char *pcVar5;
  size_t sVar6;
  long lVar7;
  void *pvVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  undefined8 uVar11;
  void *pvVar12;
  undefined8 *puVar13;
  char *__s;
  ulong local_130;
  size_t sStack_128;
  void *local_120;
  ulong local_d8;
  size_t local_d0;
  void *local_c8;
  ulong *local_c0;
  undefined8 uStack_b8;
  void *local_b0;
  long local_a8;
  void *local_a0;
  undefined8 uStack_98;
  undefined8 *local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  uStack_98 = 0;
  local_a0 = (void *)0x0;
  uStack_88 = 0;
  local_90 = (undefined8 *)0x0;
  local_80 = 0x3f800000;
  if (param_5 != 0) {
    do {
      pcVar5 = (char *)*param_3;
      if ((((pcVar5 == (char *)0x0) || (*pcVar5 == '\0')) ||
          (__s = (char *)*param_4, __s == (char *)0x0)) || (*__s == '\0')) {
        lVar7 = FUN_00580398(2,"Provider options key/value cannot be empty");
joined_r0x004a9024:
        pvVar8 = local_a0;
        puVar13 = local_90;
        if (lVar7 != 0) goto joined_r0x004a902c;
        break;
      }
      sVar6 = strlen(pcVar5);
      if ((0x400 < sVar6) || (sVar6 = strlen(__s), 0x400 < sVar6)) {
        lVar7 = FUN_00580398(2,"Maximum string length for a provider options key/value is 1024.");
        goto joined_r0x004a9024;
      }
      pcVar5 = (char *)*param_3;
      sVar6 = strlen(pcVar5);
      if (0xfffffffffffffff7 < sVar6) {
        if (*(long *)(lVar3 + 0x28) == local_70) {
                    /* try { // try from 004a93ec to 004a93f3 has its CatchHandler @ 004a9440 */
                    /* WARNING: Subroutine does not return */
          FUN_002fb400(&local_130);
        }
        goto LAB_004a93f4;
      }
      if (sVar6 < 0x17) {
        local_130 = CONCAT71(local_130._1_7_,(char)((int)sVar6 << 1));
        pvVar8 = (void *)((ulong)&local_130 | 1);
        if (sVar6 != 0) goto LAB_004a8fbc;
      }
      else {
        uVar1 = (sVar6 & 0xfffffffffffffff8) + 8;
        if ((sVar6 | 7) != 0x17) {
          uVar1 = sVar6 | 7;
        }
                    /* try { // try from 004a8fa0 to 004a8fa7 has its CatchHandler @ 004a93fc */
        pvVar8 = (void *)FUN_00759c3c(uVar1 + 1);
        local_130 = uVar1 + 1 | 1;
        sStack_128 = sVar6;
        local_120 = pvVar8;
LAB_004a8fbc:
        memmove(pvVar8,pcVar5,sVar6);
      }
      local_c0 = &local_130;
      *(undefined1 *)((long)pvVar8 + sVar6) = 0;
                    /* try { // try from 004a8fd4 to 004a8ffb has its CatchHandler @ 004a9458 */
      lVar7 = FUN_00488378(&local_a0,&local_130,PTR_DAT_007a10e8,&local_c0,&local_d8);
      FUN_0071396c(lVar7 + 0x28,__s);
      if ((local_130 & 1) != 0) {
        free(local_120);
      }
      param_5 = param_5 + -1;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
    } while (param_5 != 0);
  }
  if (local_90 != (undefined8 *)0x0) {
    puVar13 = local_90;
    do {
      sVar6 = strlen(param_2);
      if (0xfffffffffffffff7 < sVar6) {
        if (*(long *)(lVar3 + 0x28) == local_70) {
                    /* try { // try from 004a9334 to 004a933b has its CatchHandler @ 004a9488 */
                    /* WARNING: Subroutine does not return */
          FUN_002fb400(&local_d8);
        }
        goto LAB_004a93f4;
      }
      if (sVar6 < 0x17) {
        local_d8 = CONCAT71(local_d8._1_7_,(char)((int)sVar6 << 1));
        pvVar8 = (void *)((ulong)&local_d8 | 1);
        if (sVar6 != 0) goto LAB_004a90cc;
      }
      else {
        uVar1 = (sVar6 & 0xfffffffffffffff8) + 8;
        if ((sVar6 | 7) != 0x17) {
          uVar1 = sVar6 | 7;
        }
                    /* try { // try from 004a90b4 to 004a90bb has its CatchHandler @ 004a9484 */
        pvVar8 = (void *)FUN_00759c3c(uVar1 + 1);
        local_d8 = uVar1 + 1 | 1;
        local_d0 = sVar6;
        local_c8 = pvVar8;
LAB_004a90cc:
        memcpy(pvVar8,param_2,sVar6);
      }
      *(undefined1 *)((long)pvVar8 + sVar6) = 0;
                    /* try { // try from 004a90e0 to 004a90eb has its CatchHandler @ 004a9494 */
      puVar9 = (undefined8 *)FUN_00713bdc(&local_d8,&DAT_001d9efd);
      local_b0 = (void *)puVar9[2];
      uStack_b8 = puVar9[1];
      local_c0 = (ulong *)*puVar9;
      puVar9[1] = 0;
      puVar9[2] = 0;
      *puVar9 = 0;
      uVar1 = (ulong)(*(byte *)(puVar13 + 2) >> 1);
      lVar7 = (long)puVar13 + 0x11;
      if ((*(byte *)(puVar13 + 2) & 1) != 0) {
        uVar1 = puVar13[3];
        lVar7 = puVar13[4];
      }
                    /* try { // try from 004a9120 to 004a9127 has its CatchHandler @ 004a94a0 */
      puVar10 = (ulong *)FUN_0071302c(&local_c0,lVar7,uVar1);
      local_120 = (void *)puVar10[2];
      sStack_128 = puVar10[1];
      local_130 = *puVar10;
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = 0;
      pvVar8 = (void *)((ulong)&local_130 | 1);
      if ((local_130 & 1) != 0) {
        pvVar8 = local_120;
      }
      lVar7 = (long)puVar13 + 0x29;
      if ((*(byte *)(puVar13 + 5) & 1) != 0) {
        lVar7 = puVar13[7];
      }
      FUN_00569b8c(&local_a8,param_1 + 0x130,pvVar8,lVar7);
      if ((local_130 & 1) != 0) {
        free(local_120);
      }
      if (((ulong)local_c0 & 1) != 0) {
        free(local_b0);
      }
      if ((local_d8 & 1) != 0) {
        free(local_c8);
      }
      if (local_a8 != 0) {
                    /* try { // try from 004a933c to 004a935b has its CatchHandler @ 004a9470 */
        FUN_00645c3c(0,&local_a8,
                     "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/provider_registration.cc"
                     ,"SessionOptionsAppendExecutionProvider",0x5e);
        uVar11 = FUN_00753a74(0x88);
                    /* try { // try from 004a9368 to 004a936f has its CatchHandler @ 004a9444 */
        FUN_00645c30(&local_c0);
                    /* try { // try from 004a9370 to 004a938f has its CatchHandler @ 004a942c */
        FUN_0047488c(&local_130,
                     "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/provider_registration.cc"
                     ,0x5e,
                     "OrtStatusPtr OrtApis::SessionOptionsAppendExecutionProvider(OrtSessionOptions *, const char *, const char *const *, const char *const *, size_t)"
                     ,&local_c0);
        FUN_00486664(&local_d8,&local_a8);
        FUN_004792b8(uVar11,&local_130,&local_d8);
        if (*(long *)(lVar3 + 0x28) == local_70) {
                    /* try { // try from 004a93c0 to 004a93d7 has its CatchHandler @ 004a9400 */
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(uVar11,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
        }
        goto LAB_004a93f4;
      }
      puVar13 = (undefined8 *)*puVar13;
    } while (puVar13 != (undefined8 *)0x0);
  }
  iVar4 = strcmp(param_2,"DML");
  if (((iVar4 == 0) || (iVar4 = strcmp(param_2,"QNN"), iVar4 == 0)) ||
     ((iVar4 = strcmp(param_2,"OpenVINO"), iVar4 == 0 ||
      ((((iVar4 = strcmp(param_2,"SNPE"), iVar4 == 0 ||
         (iVar4 = strcmp(param_2,"XNNPACK"), iVar4 == 0)) ||
        (iVar4 = strcmp(param_2,"WEBNN"), iVar4 == 0)) ||
       ((iVar4 = strcmp(param_2,"AZURE"), iVar4 == 0 || (iVar4 = strcmp(param_2,"JS"), iVar4 == 0)))
       ))))) {
                    /* try { // try from 004a9280 to 004a9287 has its CatchHandler @ 004a93f8 */
    lVar7 = FUN_004a9554(param_2);
    pvVar8 = local_a0;
    puVar13 = local_90;
  }
  else {
    lVar7 = FUN_00580398(2,
                         "Unknown provider name. Currently supported values are \'OPENVINO\', \'SNPE\', \'XNNPACK\', \'QNN\', \'WEBNN\' and \'AZURE\'"
                        );
    pvVar8 = local_a0;
    puVar13 = local_90;
  }
joined_r0x004a902c:
  while (puVar13 != (undefined8 *)0x0) {
    pvVar12 = (void *)*puVar13;
    local_a0 = pvVar8;
    if ((*(byte *)(puVar13 + 5) & 1) == 0) {
      bVar2 = *(byte *)(puVar13 + 2);
    }
    else {
      free((void *)puVar13[7]);
      bVar2 = *(byte *)(puVar13 + 2);
    }
    if ((bVar2 & 1) != 0) {
      free((void *)puVar13[4]);
    }
    free(puVar13);
    pvVar8 = local_a0;
    puVar13 = (undefined8 *)pvVar12;
  }
  local_a0 = (void *)0x0;
  if (pvVar8 != (void *)0x0) {
    free(pvVar8);
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return lVar7;
  }
LAB_004a93f4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a9554  FUN_004a9554 =====

undefined8 FUN_004a9554(char *param_1)

{
  ulong uVar1;
  long lVar2;
  size_t __n;
  ulong *puVar3;
  undefined8 uVar4;
  void *pvVar5;
  ulong local_78;
  size_t local_70;
  void *local_68;
  undefined8 local_60;
  ulong uStack_58;
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  __n = strlen(param_1);
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_78);
    }
    goto LAB_004a96e4;
  }
  if (__n < 0x17) {
    pvVar5 = (void *)((ulong)&local_78 | 1);
    local_78 = CONCAT71(local_78._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_004a95dc;
  }
  else {
    uVar1 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar1 = __n | 7;
    }
    pvVar5 = (void *)FUN_00759c3c(uVar1 + 1);
    local_78 = uVar1 + 1 | 1;
    local_70 = __n;
    local_68 = pvVar5;
LAB_004a95dc:
    memcpy(pvVar5,param_1,__n);
  }
  *(undefined1 *)((long)pvVar5 + __n) = 0;
                    /* try { // try from 004a95f0 to 004a95ff has its CatchHandler @ 004a96b8 */
  puVar3 = (ulong *)FUN_00713bdc(&local_78," execution provider is not supported in this build. ");
  local_50 = (void *)puVar3[2];
  uStack_58 = puVar3[1];
  local_60 = *puVar3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  pvVar5 = local_50;
  if ((local_60 & 1) == 0) {
    pvVar5 = (void *)((long)&local_60 + 1);
  }
  uVar4 = FUN_00580398(2,pvVar5);
  if ((local_60 & 1) != 0) {
    free(local_50);
  }
  if ((local_78 & 1) == 0) {
    if (*(long *)(lVar2 + 0x28) == local_48) {
      return uVar4;
    }
  }
  else {
    free(local_68);
    if (*(long *)(lVar2 + 0x28) == local_48) {
      return uVar4;
    }
  }
LAB_004a96e4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004a96e8  FUN_004a96e8 =====

void FUN_004a96e8(void)

{
  ulong uVar1;
  long lVar2;
  size_t __n;
  void *__dest;
  ulong local_50;
  size_t local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  __n = strlen("CUDA");
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_50);
    }
    goto LAB_004a97e8;
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_50 | 1);
    local_50 = CONCAT71(local_50._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_004a9770;
  }
  else {
    uVar1 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar1 = __n | 7;
    }
                    /* try { // try from 004a9758 to 004a975f has its CatchHandler @ 004a97ec */
    __dest = (void *)FUN_00759c3c(uVar1 + 1);
    local_50 = uVar1 + 1 | 1;
    local_48 = __n;
    local_40 = __dest;
LAB_004a9770:
    memcpy(__dest,&DAT_001efe0e,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 004a9788 to 004a97e7 has its CatchHandler @ 004a97ec */
  __n = FUN_004a97f0(&local_50);
  if ((local_50 & 1) != 0) {
    free(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_004a97e8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__n);
}


// ===== 004a97f0  FUN_004a97f0 =====

/* WARNING: Removing unreachable block (ram,0x004a98b8) */

void FUN_004a97f0(byte *param_1)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  size_t __n_00;
  void *pvVar5;
  byte *__src;
  undefined8 local_70;
  ulong local_68;
  void *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  bVar3 = *param_1;
  __n = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    __n = *(size_t *)(param_1 + 8);
  }
  __n_00 = strlen(" execution provider is not enabled in this build. ");
  uVar1 = __n + __n_00;
  if (uVar1 < 0xfffffffffffffff8) {
    if (uVar1 < 0x17) {
      local_68 = 0;
      local_60 = (void *)0x0;
      local_70 = (ulong)(byte)(((uint)uVar1 & 0xff) << 1);
      pvVar5 = (void *)((long)&local_70 + 1);
    }
    else {
      uVar2 = (uVar1 & 0xfffffffffffffff8) + 8;
      if ((uVar1 | 7) != 0x17) {
        uVar2 = uVar1 | 7;
      }
      pvVar5 = (void *)FUN_00759c3c(uVar2 + 1);
      local_70 = uVar2 + 1 | 1;
      local_68 = uVar1;
      local_60 = pvVar5;
    }
    if (__n != 0) {
      __src = *(byte **)(param_1 + 0x10);
      if ((bVar3 & 1) == 0) {
        __src = param_1 + 1;
      }
      memmove(pvVar5,__src,__n);
    }
    if (__n_00 != 0) {
      memcpy((void *)((long)pvVar5 + __n)," execution provider is not enabled in this build. ",
             __n_00);
    }
    *(undefined1 *)((long)((long)pvVar5 + __n) + __n_00) = 0;
    pvVar5 = (void *)((ulong)&local_70 | 1);
    if ((local_70 & 1) != 0) {
      pvVar5 = local_60;
    }
    __n_00 = FUN_00580398(1,pvVar5);
    if ((local_70 & 1) != 0) {
      free(local_60);
    }
    if (*(long *)(lVar4 + 0x28) == local_58) {
      return;
    }
  }
  else if (*(long *)(lVar4 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_002fb400(&local_70);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__n_00);
}


// ===== 004a9978  FUN_004a9978 =====

void FUN_004a9978(void)

{
  ulong uVar1;
  long lVar2;
  size_t __n;
  void *__dest;
  ulong local_50;
  size_t local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  __n = strlen("CUDA");
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_50);
    }
    goto LAB_004a9a78;
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_50 | 1);
    local_50 = CONCAT71(local_50._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_004a9a00;
  }
  else {
    uVar1 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar1 = __n | 7;
    }
                    /* try { // try from 004a99e8 to 004a99ef has its CatchHandler @ 004a9a7c */
    __dest = (void *)FUN_00759c3c(uVar1 + 1);
    local_50 = uVar1 + 1 | 1;
    local_48 = __n;
    local_40 = __dest;
LAB_004a9a00:
    memcpy(__dest,&DAT_001efe0e,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 004a9a18 to 004a9a77 has its CatchHandler @ 004a9a7c */
  __n = FUN_004a97f0(&local_50);
  if ((local_50 & 1) != 0) {
    free(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_004a9a78:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__n);
}


// ===== 004a9a80  FUN_004a9a80 =====

void FUN_004a9a80(void)

{
  ulong uVar1;
  long lVar2;
  size_t __n;
  void *__dest;
  ulong local_50;
  size_t local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  __n = strlen("CUDA");
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_50);
    }
    goto LAB_004a9b80;
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_50 | 1);
    local_50 = CONCAT71(local_50._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_004a9b08;
  }
  else {
    uVar1 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar1 = __n | 7;
    }
                    /* try { // try from 004a9af0 to 004a9af7 has its CatchHandler @ 004a9b84 */
    __dest = (void *)FUN_00759c3c(uVar1 + 1);
    local_50 = uVar1 + 1 | 1;
    local_48 = __n;
    local_40 = __dest;
LAB_004a9b08:
    memcpy(__dest,&DAT_001efe0e,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 004a9b20 to 004a9b7f has its CatchHandler @ 004a9b84 */
  __n = FUN_004a97f0(&local_50);
  if ((local_50 & 1) != 0) {
    free(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_004a9b80:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__n);
}


// ===== 004a9b88  FUN_004a9b88 =====

void FUN_004a9b88(void)

{
  ulong uVar1;
  long lVar2;
  size_t __n;
  void *__dest;
  ulong local_50;
  size_t local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  __n = strlen("CUDA");
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_50);
    }
    goto LAB_004a9c88;
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_50 | 1);
    local_50 = CONCAT71(local_50._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_004a9c10;
  }
  else {
    uVar1 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar1 = __n | 7;
    }
                    /* try { // try from 004a9bf8 to 004a9bff has its CatchHandler @ 004a9c8c */
    __dest = (void *)FUN_00759c3c(uVar1 + 1);
    local_50 = uVar1 + 1 | 1;
    local_48 = __n;
    local_40 = __dest;
LAB_004a9c10:
    memcpy(__dest,&DAT_001efe0e,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 004a9c28 to 004a9c87 has its CatchHandler @ 004a9c8c */
  __n = FUN_004a97f0(&local_50);
  if ((local_50 & 1) != 0) {
    free(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_004a9c88:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__n);
}


// ===== 004a9c90  FUN_004a9c90 =====

void FUN_004a9c90(void)

{
  FUN_00580398(1,"CUDA execution provider is not enabled in this build.");
  return;
}


// ===== 004a9ca0  FUN_004a9ca0 =====

void FUN_004a9ca0(void)

{
  ulong uVar1;
  long lVar2;
  size_t __n;
  void *__dest;
  ulong local_50;
  size_t local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  __n = strlen("CUDA");
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_50);
    }
    goto LAB_004a9da0;
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_50 | 1);
    local_50 = CONCAT71(local_50._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_004a9d28;
  }
  else {
    uVar1 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar1 = __n | 7;
    }
                    /* try { // try from 004a9d10 to 004a9d17 has its CatchHandler @ 004a9da4 */
    __dest = (void *)FUN_00759c3c(uVar1 + 1);
    local_50 = uVar1 + 1 | 1;
    local_48 = __n;
    local_40 = __dest;
LAB_004a9d28:
    memcpy(__dest,&DAT_001efe0e,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 004a9d40 to 004a9d9f has its CatchHandler @ 004a9da4 */
  __n = FUN_004a97f0(&local_50);
  if ((local_50 & 1) != 0) {
    free(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_004a9da0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__n);
}


// ===== 004a9da8  FUN_004a9da8 =====

void FUN_004a9da8(void)

{
  ulong uVar1;
  long lVar2;
  size_t __n;
  void *__dest;
  ulong local_50;
  size_t local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  __n = strlen("CUDA");
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_50);
    }
    goto LAB_004a9ea8;
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_50 | 1);
    local_50 = CONCAT71(local_50._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_004a9e30;
  }
  else {
    uVar1 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar1 = __n | 7;
    }
                    /* try { // try from 004a9e18 to 004a9e1f has its CatchHandler @ 004a9eac */
    __dest = (void *)FUN_00759c3c(uVar1 + 1);
    local_50 = uVar1 + 1 | 1;
    local_48 = __n;
    local_40 = __dest;
LAB_004a9e30:
    memcpy(__dest,&DAT_001efe0e,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 004a9e48 to 004a9ea7 has its CatchHandler @ 004a9eac */
  __n = FUN_004a97f0(&local_50);
  if ((local_50 & 1) != 0) {
    free(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_004a9ea8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__n);
}


// ===== 004a9eb0  FUN_004a9eb0 =====

void FUN_004a9eb0(void)

{
  return;
}


// ===== 004a9eb4  FUN_004a9eb4 =====

void FUN_004a9eb4(void)

{
  ulong uVar1;
  long lVar2;
  size_t __n;
  void *__dest;
  ulong local_50;
  size_t local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  __n = strlen("CUDA");
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_50);
    }
    goto LAB_004a9fb4;
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_50 | 1);
    local_50 = CONCAT71(local_50._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_004a9f3c;
  }
  else {
    uVar1 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar1 = __n | 7;
    }
                    /* try { // try from 004a9f24 to 004a9f2b has its CatchHandler @ 004a9fb8 */
    __dest = (void *)FUN_00759c3c(uVar1 + 1);
    local_50 = uVar1 + 1 | 1;
    local_48 = __n;
    local_40 = __dest;
LAB_004a9f3c:
    memcpy(__dest,&DAT_001efe0e,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 004a9f54 to 004a9fb3 has its CatchHandler @ 004a9fb8 */
  __n = FUN_004a97f0(&local_50);
  if ((local_50 & 1) != 0) {
    free(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_004a9fb4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__n);
}


// ===== 004a9fbc  FUN_004a9fbc =====

void FUN_004a9fbc(void)

{
  ulong uVar1;
  long lVar2;
  size_t __n;
  void *__dest;
  ulong local_50;
  size_t local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  __n = strlen("CUDA");
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_50);
    }
    goto LAB_004aa0bc;
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_50 | 1);
    local_50 = CONCAT71(local_50._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_004aa044;
  }
  else {
    uVar1 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar1 = __n | 7;
    }
                    /* try { // try from 004aa02c to 004aa033 has its CatchHandler @ 004aa0c0 */
    __dest = (void *)FUN_00759c3c(uVar1 + 1);
    local_50 = uVar1 + 1 | 1;
    local_48 = __n;
    local_40 = __dest;
LAB_004aa044:
    memcpy(__dest,&DAT_001efe0e,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 004aa05c to 004aa0bb has its CatchHandler @ 004aa0c0 */
  __n = FUN_004a97f0(&local_50);
  if ((local_50 & 1) != 0) {
    free(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_004aa0bc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__n);
}


// ===== 004aa0c4  FUN_004aa0c4 =====

void FUN_004aa0c4(void)

{
  ulong uVar1;
  long lVar2;
  size_t __n;
  void *__dest;
  ulong local_50;
  size_t local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  __n = strlen("ROCM");
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_50);
    }
    goto LAB_004aa1c4;
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_50 | 1);
    local_50 = CONCAT71(local_50._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_004aa14c;
  }
  else {
    uVar1 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar1 = __n | 7;
    }
                    /* try { // try from 004aa134 to 004aa13b has its CatchHandler @ 004aa1c8 */
    __dest = (void *)FUN_00759c3c(uVar1 + 1);
    local_50 = uVar1 + 1 | 1;
    local_48 = __n;
    local_40 = __dest;
LAB_004aa14c:
    memcpy(__dest,&DAT_001b872f,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 004aa164 to 004aa1c3 has its CatchHandler @ 004aa1c8 */
  __n = FUN_004a97f0(&local_50);
  if ((local_50 & 1) != 0) {
    free(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_004aa1c4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__n);
}


// ===== 004aa1cc  FUN_004aa1cc =====

void FUN_004aa1cc(void)

{
  ulong uVar1;
  long lVar2;
  size_t __n;
  void *__dest;
  ulong local_50;
  size_t local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  __n = strlen("OpenVINO");
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_50);
    }
    goto LAB_004aa2cc;
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_50 | 1);
    local_50 = CONCAT71(local_50._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_004aa254;
  }
  else {
    uVar1 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar1 = __n | 7;
    }
                    /* try { // try from 004aa23c to 004aa243 has its CatchHandler @ 004aa2d0 */
    __dest = (void *)FUN_00759c3c(uVar1 + 1);
    local_50 = uVar1 + 1 | 1;
    local_48 = __n;
    local_40 = __dest;
LAB_004aa254:
    memcpy(__dest,"OpenVINO",__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 004aa26c to 004aa2cb has its CatchHandler @ 004aa2d0 */
  __n = FUN_004a97f0(&local_50);
  if ((local_50 & 1) != 0) {
    free(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_004aa2cc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__n);
}


// ===== 004aa2d4  FUN_004aa2d4 =====

void FUN_004aa2d4(void)

{
  ulong uVar1;
  long lVar2;
  size_t __n;
  void *__dest;
  ulong local_50;
  size_t local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  __n = strlen("OpenVINO");
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_50);
    }
    goto LAB_004aa3d4;
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_50 | 1);
    local_50 = CONCAT71(local_50._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_004aa35c;
  }
  else {
    uVar1 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar1 = __n | 7;
    }
                    /* try { // try from 004aa344 to 004aa34b has its CatchHandler @ 004aa3d8 */
    __dest = (void *)FUN_00759c3c(uVar1 + 1);
    local_50 = uVar1 + 1 | 1;
    local_48 = __n;
    local_40 = __dest;
LAB_004aa35c:
    memcpy(__dest,"OpenVINO",__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 004aa374 to 004aa3d3 has its CatchHandler @ 004aa3d8 */
  __n = FUN_004a97f0(&local_50);
  if ((local_50 & 1) != 0) {
    free(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_004aa3d4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__n);
}


// ===== 004aa3dc  FUN_004aa3dc =====

void FUN_004aa3dc(void)

{
  ulong uVar1;
  long lVar2;
  size_t __n;
  void *__dest;
  ulong local_50;
  size_t local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  __n = strlen("TensorRT");
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_50);
    }
    goto LAB_004aa4dc;
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_50 | 1);
    local_50 = CONCAT71(local_50._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_004aa464;
  }
  else {
    uVar1 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar1 = __n | 7;
    }
                    /* try { // try from 004aa44c to 004aa453 has its CatchHandler @ 004aa4e0 */
    __dest = (void *)FUN_00759c3c(uVar1 + 1);
    local_50 = uVar1 + 1 | 1;
    local_48 = __n;
    local_40 = __dest;
LAB_004aa464:
    memcpy(__dest,"TensorRT",__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 004aa47c to 004aa4db has its CatchHandler @ 004aa4e0 */
  __n = FUN_004a97f0(&local_50);
  if ((local_50 & 1) != 0) {
    free(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_004aa4dc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__n);
}


// ===== 004aa4e4  FUN_004aa4e4 =====

void FUN_004aa4e4(void)

{
  ulong uVar1;
  long lVar2;
  size_t __n;
  void *__dest;
  ulong local_50;
  size_t local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  __n = strlen("TensorRT");
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_50);
    }
    goto LAB_004aa5e4;
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_50 | 1);
    local_50 = CONCAT71(local_50._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_004aa56c;
  }
  else {
    uVar1 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar1 = __n | 7;
    }
                    /* try { // try from 004aa554 to 004aa55b has its CatchHandler @ 004aa5e8 */
    __dest = (void *)FUN_00759c3c(uVar1 + 1);
    local_50 = uVar1 + 1 | 1;
    local_48 = __n;
    local_40 = __dest;
LAB_004aa56c:
    memcpy(__dest,"TensorRT",__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 004aa584 to 004aa5e3 has its CatchHandler @ 004aa5e8 */
  __n = FUN_004a97f0(&local_50);
  if ((local_50 & 1) != 0) {
    free(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_004aa5e4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__n);
}


// ===== 004aa5ec  FUN_004aa5ec =====

void FUN_004aa5ec(void)

{
  ulong uVar1;
  long lVar2;
  size_t __n;
  void *__dest;
  ulong local_50;
  size_t local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  __n = strlen("TensorRT");
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_50);
    }
    goto LAB_004aa6ec;
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_50 | 1);
    local_50 = CONCAT71(local_50._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_004aa674;
  }
  else {
    uVar1 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar1 = __n | 7;
    }
                    /* try { // try from 004aa65c to 004aa663 has its CatchHandler @ 004aa6f0 */
    __dest = (void *)FUN_00759c3c(uVar1 + 1);
    local_50 = uVar1 + 1 | 1;
    local_48 = __n;
    local_40 = __dest;
LAB_004aa674:
    memcpy(__dest,"TensorRT",__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 004aa68c to 004aa6eb has its CatchHandler @ 004aa6f0 */
  __n = FUN_004a97f0(&local_50);
  if ((local_50 & 1) != 0) {
    free(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_004aa6ec:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__n);
}


// ===== 004aa6f4  FUN_004aa6f4 =====

void FUN_004aa6f4(void)

{
  ulong uVar1;
  long lVar2;
  size_t __n;
  void *__dest;
  ulong local_50;
  size_t local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  __n = strlen("TensorRT");
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_50);
    }
    goto LAB_004aa7f4;
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_50 | 1);
    local_50 = CONCAT71(local_50._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_004aa77c;
  }
  else {
    uVar1 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar1 = __n | 7;
    }
                    /* try { // try from 004aa764 to 004aa76b has its CatchHandler @ 004aa7f8 */
    __dest = (void *)FUN_00759c3c(uVar1 + 1);
    local_50 = uVar1 + 1 | 1;
    local_48 = __n;
    local_40 = __dest;
LAB_004aa77c:
    memcpy(__dest,"TensorRT",__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 004aa794 to 004aa7f3 has its CatchHandler @ 004aa7f8 */
  __n = FUN_004a97f0(&local_50);
  if ((local_50 & 1) != 0) {
    free(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_004aa7f4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__n);
}


// ===== 004aa7fc  FUN_004aa7fc =====

void FUN_004aa7fc(void)

{
  ulong uVar1;
  long lVar2;
  size_t __n;
  void *__dest;
  ulong local_50;
  size_t local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  __n = strlen("TensorRT");
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_50);
    }
    goto LAB_004aa8fc;
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_50 | 1);
    local_50 = CONCAT71(local_50._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_004aa884;
  }
  else {
    uVar1 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar1 = __n | 7;
    }
                    /* try { // try from 004aa86c to 004aa873 has its CatchHandler @ 004aa900 */
    __dest = (void *)FUN_00759c3c(uVar1 + 1);
    local_50 = uVar1 + 1 | 1;
    local_48 = __n;
    local_40 = __dest;
LAB_004aa884:
    memcpy(__dest,"TensorRT",__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 004aa89c to 004aa8fb has its CatchHandler @ 004aa900 */
  __n = FUN_004a97f0(&local_50);
  if ((local_50 & 1) != 0) {
    free(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_004aa8fc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__n);
}


// ===== 004aa904  FUN_004aa904 =====

void FUN_004aa904(void)

{
  ulong uVar1;
  long lVar2;
  size_t __n;
  void *__dest;
  ulong local_50;
  size_t local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  __n = strlen("TensorRT");
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_50);
    }
    goto LAB_004aaa04;
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_50 | 1);
    local_50 = CONCAT71(local_50._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_004aa98c;
  }
  else {
    uVar1 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar1 = __n | 7;
    }
                    /* try { // try from 004aa974 to 004aa97b has its CatchHandler @ 004aaa08 */
    __dest = (void *)FUN_00759c3c(uVar1 + 1);
    local_50 = uVar1 + 1 | 1;
    local_48 = __n;
    local_40 = __dest;
LAB_004aa98c:
    memcpy(__dest,"TensorRT",__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 004aa9a4 to 004aaa03 has its CatchHandler @ 004aaa08 */
  __n = FUN_004a97f0(&local_50);
  if ((local_50 & 1) != 0) {
    free(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_004aaa04:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__n);
}


// ===== 004aaa0c  FUN_004aaa0c =====

void FUN_004aaa0c(void)

{
  ulong uVar1;
  long lVar2;
  size_t __n;
  void *__dest;
  ulong local_50;
  size_t local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  __n = strlen("TensorRT");
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_50);
    }
    goto LAB_004aab0c;
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_50 | 1);
    local_50 = CONCAT71(local_50._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_004aaa94;
  }
  else {
    uVar1 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar1 = __n | 7;
    }
                    /* try { // try from 004aaa7c to 004aaa83 has its CatchHandler @ 004aab10 */
    __dest = (void *)FUN_00759c3c(uVar1 + 1);
    local_50 = uVar1 + 1 | 1;
    local_48 = __n;
    local_40 = __dest;
LAB_004aaa94:
    memcpy(__dest,"TensorRT",__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 004aaaac to 004aab0b has its CatchHandler @ 004aab10 */
  __n = FUN_004a97f0(&local_50);
  if ((local_50 & 1) != 0) {
    free(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_004aab0c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__n);
}


// ===== 004aab14  FUN_004aab14 =====

void FUN_004aab14(void)

{
  return;
}


// ===== 004aab18  FUN_004aab18 =====

void FUN_004aab18(void)

{
  ulong uVar1;
  long lVar2;
  size_t __n;
  void *__dest;
  ulong local_50;
  size_t local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  __n = strlen("MIGraphX");
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_50);
    }
    goto LAB_004aac18;
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_50 | 1);
    local_50 = CONCAT71(local_50._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_004aaba0;
  }
  else {
    uVar1 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar1 = __n | 7;
    }
                    /* try { // try from 004aab88 to 004aab8f has its CatchHandler @ 004aac1c */
    __dest = (void *)FUN_00759c3c(uVar1 + 1);
    local_50 = uVar1 + 1 | 1;
    local_48 = __n;
    local_40 = __dest;
LAB_004aaba0:
    memcpy(__dest,"MIGraphX",__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 004aabb8 to 004aac17 has its CatchHandler @ 004aac1c */
  __n = FUN_004a97f0(&local_50);
  if ((local_50 & 1) != 0) {
    free(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_004aac18:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__n);
}


// ===== 004aac20  FUN_004aac20 =====

void FUN_004aac20(void)

{
  ulong uVar1;
  long lVar2;
  size_t __n;
  void *__dest;
  ulong local_50;
  size_t local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  __n = strlen("CANN");
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_50);
    }
    goto LAB_004aad20;
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_50 | 1);
    local_50 = CONCAT71(local_50._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_004aaca8;
  }
  else {
    uVar1 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar1 = __n | 7;
    }
                    /* try { // try from 004aac90 to 004aac97 has its CatchHandler @ 004aad24 */
    __dest = (void *)FUN_00759c3c(uVar1 + 1);
    local_50 = uVar1 + 1 | 1;
    local_48 = __n;
    local_40 = __dest;
LAB_004aaca8:
    memcpy(__dest,&DAT_001e7a25,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 004aacc0 to 004aad1f has its CatchHandler @ 004aad24 */
  __n = FUN_004a97f0(&local_50);
  if ((local_50 & 1) != 0) {
    free(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_004aad20:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__n);
}


// ===== 004aad28  FUN_004aad28 =====

void FUN_004aad28(void)

{
  ulong uVar1;
  long lVar2;
  size_t __n;
  void *__dest;
  ulong local_50;
  size_t local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  __n = strlen("CANN");
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_50);
    }
    goto LAB_004aae28;
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_50 | 1);
    local_50 = CONCAT71(local_50._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_004aadb0;
  }
  else {
    uVar1 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar1 = __n | 7;
    }
                    /* try { // try from 004aad98 to 004aad9f has its CatchHandler @ 004aae2c */
    __dest = (void *)FUN_00759c3c(uVar1 + 1);
    local_50 = uVar1 + 1 | 1;
    local_48 = __n;
    local_40 = __dest;
LAB_004aadb0:
    memcpy(__dest,&DAT_001e7a25,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 004aadc8 to 004aae27 has its CatchHandler @ 004aae2c */
  __n = FUN_004a97f0(&local_50);
  if ((local_50 & 1) != 0) {
    free(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_004aae28:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__n);
}


// ===== 004aae30  FUN_004aae30 =====

void FUN_004aae30(void)

{
  ulong uVar1;
  long lVar2;
  size_t __n;
  void *__dest;
  ulong local_50;
  size_t local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  __n = strlen("CANN");
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_50);
    }
    goto LAB_004aaf30;
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_50 | 1);
    local_50 = CONCAT71(local_50._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_004aaeb8;
  }
  else {
    uVar1 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar1 = __n | 7;
    }
                    /* try { // try from 004aaea0 to 004aaea7 has its CatchHandler @ 004aaf34 */
    __dest = (void *)FUN_00759c3c(uVar1 + 1);
    local_50 = uVar1 + 1 | 1;
    local_48 = __n;
    local_40 = __dest;
LAB_004aaeb8:
    memcpy(__dest,&DAT_001e7a25,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 004aaed0 to 004aaf2f has its CatchHandler @ 004aaf34 */
  __n = FUN_004a97f0(&local_50);
  if ((local_50 & 1) != 0) {
    free(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_004aaf30:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__n);
}


// ===== 004aaf38  FUN_004aaf38 =====

void FUN_004aaf38(void)

{
  FUN_00580398(1,"CANN execution provider is not enabled in this build.");
  return;
}


// ===== 004aaf48  FUN_004aaf48 =====

void FUN_004aaf48(void)

{
  return;
}


// ===== 004aaf4c  FUN_004aaf4c =====

void FUN_004aaf4c(void)

{
  ulong uVar1;
  long lVar2;
  size_t __n;
  void *__dest;
  ulong local_50;
  size_t local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  __n = strlen("Dnnl");
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_50);
    }
    goto LAB_004ab04c;
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_50 | 1);
    local_50 = CONCAT71(local_50._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_004aafd4;
  }
  else {
    uVar1 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar1 = __n | 7;
    }
                    /* try { // try from 004aafbc to 004aafc3 has its CatchHandler @ 004ab050 */
    __dest = (void *)FUN_00759c3c(uVar1 + 1);
    local_50 = uVar1 + 1 | 1;
    local_48 = __n;
    local_40 = __dest;
LAB_004aafd4:
    memcpy(__dest,&DAT_001ceb28,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 004aafec to 004ab04b has its CatchHandler @ 004ab050 */
  __n = FUN_004a97f0(&local_50);
  if ((local_50 & 1) != 0) {
    free(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_004ab04c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__n);
}


// ===== 004ab054  FUN_004ab054 =====

void FUN_004ab054(void)

{
  ulong uVar1;
  long lVar2;
  size_t __n;
  void *__dest;
  ulong local_50;
  size_t local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  __n = strlen("Dnnl");
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_50);
    }
    goto LAB_004ab154;
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_50 | 1);
    local_50 = CONCAT71(local_50._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_004ab0dc;
  }
  else {
    uVar1 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar1 = __n | 7;
    }
                    /* try { // try from 004ab0c4 to 004ab0cb has its CatchHandler @ 004ab158 */
    __dest = (void *)FUN_00759c3c(uVar1 + 1);
    local_50 = uVar1 + 1 | 1;
    local_48 = __n;
    local_40 = __dest;
LAB_004ab0dc:
    memcpy(__dest,&DAT_001ceb28,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 004ab0f4 to 004ab153 has its CatchHandler @ 004ab158 */
  __n = FUN_004a97f0(&local_50);
  if ((local_50 & 1) != 0) {
    free(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_004ab154:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__n);
}


// ===== 004ab15c  FUN_004ab15c =====

void FUN_004ab15c(void)

{
  ulong uVar1;
  long lVar2;
  size_t __n;
  void *__dest;
  ulong local_50;
  size_t local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  __n = strlen("Dnnl");
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_50);
    }
    goto LAB_004ab25c;
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_50 | 1);
    local_50 = CONCAT71(local_50._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_004ab1e4;
  }
  else {
    uVar1 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar1 = __n | 7;
    }
                    /* try { // try from 004ab1cc to 004ab1d3 has its CatchHandler @ 004ab260 */
    __dest = (void *)FUN_00759c3c(uVar1 + 1);
    local_50 = uVar1 + 1 | 1;
    local_48 = __n;
    local_40 = __dest;
LAB_004ab1e4:
    memcpy(__dest,&DAT_001ceb28,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 004ab1fc to 004ab25b has its CatchHandler @ 004ab260 */
  __n = FUN_004a97f0(&local_50);
  if ((local_50 & 1) != 0) {
    free(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_004ab25c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__n);
}


// ===== 004ab264  FUN_004ab264 =====

void FUN_004ab264(void)

{
  FUN_00580398(1,"Dnnl execution provider is not enabled in this build.");
  return;
}


// ===== 004ab274  FUN_004ab274 =====

void FUN_004ab274(void)

{
  return;
}


// ===== 004ab278  FUN_004ab278 =====

void FUN_004ab278(void)

{
  ulong uVar1;
  long lVar2;
  size_t __n;
  void *__dest;
  ulong local_50;
  size_t local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  __n = strlen("ROCM");
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_50);
    }
    goto LAB_004ab378;
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_50 | 1);
    local_50 = CONCAT71(local_50._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_004ab300;
  }
  else {
    uVar1 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar1 = __n | 7;
    }
                    /* try { // try from 004ab2e8 to 004ab2ef has its CatchHandler @ 004ab37c */
    __dest = (void *)FUN_00759c3c(uVar1 + 1);
    local_50 = uVar1 + 1 | 1;
    local_48 = __n;
    local_40 = __dest;
LAB_004ab300:
    memcpy(__dest,&DAT_001b872f,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 004ab318 to 004ab377 has its CatchHandler @ 004ab37c */
  __n = FUN_004a97f0(&local_50);
  if ((local_50 & 1) != 0) {
    free(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_004ab378:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__n);
}


// ===== 004ab380  FUN_004ab380 =====

void FUN_004ab380(void)

{
  ulong uVar1;
  long lVar2;
  size_t __n;
  void *__dest;
  ulong local_50;
  size_t local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  __n = strlen("ROCM");
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_50);
    }
    goto LAB_004ab480;
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_50 | 1);
    local_50 = CONCAT71(local_50._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_004ab408;
  }
  else {
    uVar1 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar1 = __n | 7;
    }
                    /* try { // try from 004ab3f0 to 004ab3f7 has its CatchHandler @ 004ab484 */
    __dest = (void *)FUN_00759c3c(uVar1 + 1);
    local_50 = uVar1 + 1 | 1;
    local_48 = __n;
    local_40 = __dest;
LAB_004ab408:
    memcpy(__dest,&DAT_001b872f,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 004ab420 to 004ab47f has its CatchHandler @ 004ab484 */
  __n = FUN_004a97f0(&local_50);
  if ((local_50 & 1) != 0) {
    free(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_004ab480:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__n);
}


// ===== 004ab488  FUN_004ab488 =====

void FUN_004ab488(void)

{
  ulong uVar1;
  long lVar2;
  size_t __n;
  void *__dest;
  ulong local_50;
  size_t local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  __n = strlen("ROCM");
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_50);
    }
    goto LAB_004ab588;
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_50 | 1);
    local_50 = CONCAT71(local_50._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_004ab510;
  }
  else {
    uVar1 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar1 = __n | 7;
    }
                    /* try { // try from 004ab4f8 to 004ab4ff has its CatchHandler @ 004ab58c */
    __dest = (void *)FUN_00759c3c(uVar1 + 1);
    local_50 = uVar1 + 1 | 1;
    local_48 = __n;
    local_40 = __dest;
LAB_004ab510:
    memcpy(__dest,&DAT_001b872f,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 004ab528 to 004ab587 has its CatchHandler @ 004ab58c */
  __n = FUN_004a97f0(&local_50);
  if ((local_50 & 1) != 0) {
    free(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_004ab588:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__n);
}


// ===== 004ab590  FUN_004ab590 =====

void FUN_004ab590(void)

{
  return;
}


// ===== 004ab594  FUN_004ab594 =====

void FUN_004ab594(void)

{
  ulong uVar1;
  long lVar2;
  size_t __n;
  void *__dest;
  ulong local_50;
  size_t local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  __n = strlen("VitisAI");
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_50);
    }
    goto LAB_004ab694;
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_50 | 1);
    local_50 = CONCAT71(local_50._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_004ab61c;
  }
  else {
    uVar1 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar1 = __n | 7;
    }
                    /* try { // try from 004ab604 to 004ab60b has its CatchHandler @ 004ab698 */
    __dest = (void *)FUN_00759c3c(uVar1 + 1);
    local_50 = uVar1 + 1 | 1;
    local_48 = __n;
    local_40 = __dest;
LAB_004ab61c:
    memcpy(__dest,"VitisAI",__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 004ab634 to 004ab693 has its CatchHandler @ 004ab698 */
  __n = FUN_004a97f0(&local_50);
  if ((local_50 & 1) != 0) {
    free(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_004ab694:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__n);
}


// ===== 004ab69c  FUN_004ab69c =====

void FUN_004ab69c(void)

{
  FUN_00580398(9,"CreateOpAttr is not implemented for minimal build.");
  return;
}


// ===== 004ab6ac  FUN_004ab6ac =====

void FUN_004ab6ac(void)

{
  return;
}


// ===== 004ab6b0  FUN_004ab6b0 =====

void FUN_004ab6b0(void)

{
  FUN_00580398(9,"CreateOp is not implemented for minimal build.");
  return;
}


// ===== 004ab6c0  FUN_004ab6c0 =====

void FUN_004ab6c0(void)

{
  FUN_00580398(9,"InvokeOp is not implemented for minimal build.");
  return;
}


// ===== 004ab6d0  FUN_004ab6d0 =====

void FUN_004ab6d0(void)

{
  return;
}


// ===== 004ab6d4  FUN_004ab6d4 =====

void FUN_004ab6d4(void)

{
  FUN_00580398(9,"CopyKernelInfo is not implemented for minimal build.");
  return;
}


// ===== 004ab6e4  FUN_004ab6e4 =====

void FUN_004ab6e4(void)

{
  return;
}


// ===== 004ab6e8  FUN_004ab6e8 =====

undefined8 * FUN_004ab6e8(void)

{
  int iVar1;
  
  if (((DAT_007ad198 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad198), iVar1 != 0)) {
                    /* try { // try from 004ab72c to 004ab72f has its CatchHandler @ 004ab764 */
    FUN_004ab77c();
    __cxa_atexit(FUN_00303bdc,&DAT_007ad1b8,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad198);
    return &DAT_007ad1b8;
  }
  return &DAT_007ad1b8;
}


// ===== 004ab77c  FUN_004ab77c =====

void FUN_004ab77c(void)

{
  long lVar1;
  undefined1 *__dest;
  undefined8 uVar2;
  long lVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  void *pvVar8;
  size_t __n;
  void *__dest_00;
  ulong *puVar9;
  long lVar10;
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  ulong local_d0;
  ulong uStack_c8;
  undefined1 *local_c0;
  char *local_80;
  char *pcStack_78;
  long local_70;
  
  lVar1 = tpidr_el0;
  lVar10 = 0;
  local_70 = *(long *)(lVar1 + 0x28);
  DAT_007ad1c0 = (ulong *)0x0;
  DAT_007ad1c8 = (ulong *)0x0;
  DAT_007ad1b8 = (void *)0x0;
  do {
    puVar4 = DAT_007ad1c8;
    puVar5 = DAT_007ad1c0;
    uVar7 = *(ulong *)((long)&DAT_00790168 + lVar10);
    if (0x1e < uVar7) {
      uVar2 = FUN_00753a74(0x88);
                    /* try { // try from 004ab9a8 to 004ab9af has its CatchHandler @ 004abac4 */
      FUN_00645c30(auStack_e8);
                    /* try { // try from 004ab9b0 to 004ab9cf has its CatchHandler @ 004abaac */
      FUN_0047488c(&local_d0,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/get_execution_providers.cc"
                   ,0xd0,
                   "auto onnxruntime::GetAvailableExecutionProviderNames()::(anonymous class)::operator()() const"
                   ,auStack_e8);
      local_80 = " name shorter";
      pcStack_78 = "Make the EP:";
      FUN_0049e848(auStack_100,&pcStack_78,
                   (undefined8 *)((long)&PTR_s_TensorrtExecutionProvider_00790160 + lVar10),
                   &local_80);
                    /* try { // try from 004ab9fc to 004aba43 has its CatchHandler @ 004aba80 */
      FUN_00474a40(uVar2,&local_d0,"provider.name.size() <= kMaxExecutionProviderNameLen",
                   auStack_100);
      if (*(long *)(lVar1 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar2,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
      }
      goto LAB_004abb10;
    }
    if ((&DAT_00790170)[lVar10] != '\0') {
      pvVar8 = *(void **)((long)&PTR_s_TensorrtExecutionProvider_00790160 + lVar10);
      if (uVar7 < 0x17) {
        local_d0 = CONCAT71(local_d0._1_7_,(char)((int)uVar7 << 1));
        __dest = (undefined1 *)((ulong)&local_d0 | 1);
        if (uVar7 != 0) goto LAB_004ab888;
        *(undefined1 *)((ulong)&local_d0 | 1) = 0;
        if (puVar5 < puVar4) goto LAB_004ab7ec;
      }
      else {
        uVar6 = (uVar7 & 0x18) + 8;
        if ((uVar7 | 7) != 0x17) {
          uVar6 = uVar7 | 7;
        }
                    /* try { // try from 004ab870 to 004ab877 has its CatchHandler @ 004ababc */
        __dest = (undefined1 *)FUN_00759c3c(uVar6 + 1);
        local_d0 = uVar6 + 1 | 1;
        uStack_c8 = uVar7;
        local_c0 = __dest;
LAB_004ab888:
        memmove(__dest,pvVar8,uVar7);
        puVar4 = DAT_007ad1c8;
        puVar5 = DAT_007ad1c0;
        __dest[uVar7] = 0;
        if (puVar5 < puVar4) {
LAB_004ab7ec:
          puVar5[1] = uStack_c8;
          *puVar5 = local_d0;
          puVar5[2] = (ulong)local_c0;
          DAT_007ad1c0 = puVar5 + 3;
          goto LAB_004ab804;
        }
      }
      pvVar8 = DAT_007ad1b8;
      __n = (long)puVar5 - (long)DAT_007ad1b8;
      uVar7 = ((long)__n >> 3) * -0x5555555555555555 + 1;
      if (0xaaaaaaaaaaaaaaa < uVar7) {
        if (*(long *)(lVar1 + 0x28) == local_70) {
                    /* try { // try from 004aba58 to 004aba7b has its CatchHandler @ 004abad4 */
          FUN_00304228(&DAT_007ad1b8);
LAB_004aba64:
          if (*(long *)(lVar1 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
            FUN_002f9ee0();
          }
        }
        goto LAB_004abb10;
      }
      lVar3 = (long)puVar4 - (long)DAT_007ad1b8 >> 3;
      uVar6 = lVar3 * 0x5555555555555556;
      if (uVar6 < uVar7 || uVar6 - uVar7 == 0) {
        uVar6 = uVar7;
      }
      if (0x555555555555554 < (ulong)(lVar3 * -0x5555555555555555)) {
        uVar6 = 0xaaaaaaaaaaaaaaa;
      }
      if (uVar6 == 0) {
        lVar3 = 0;
      }
      else {
        if (0xaaaaaaaaaaaaaaa < uVar6) goto LAB_004aba64;
                    /* try { // try from 004ab90c to 004ab90f has its CatchHandler @ 004aba7c */
        lVar3 = FUN_00759c3c(uVar6 * 0x18);
      }
      puVar4 = (ulong *)(lVar3 + ((long)__n >> 3) * 8);
      puVar9 = (ulong *)(lVar3 + uVar6 * 0x18);
      __dest_00 = (void *)((long)puVar4 - __n);
      puVar4[1] = uStack_c8;
      *puVar4 = local_d0;
      puVar5 = puVar4 + 3;
      puVar4[2] = (ulong)local_c0;
      memcpy(__dest_00,pvVar8,__n);
      DAT_007ad1b8 = __dest_00;
      DAT_007ad1c0 = puVar5;
      DAT_007ad1c8 = puVar9;
      if (pvVar8 != (void *)0x0) {
        free(pvVar8);
        DAT_007ad1c0 = puVar5;
      }
    }
LAB_004ab804:
    lVar10 = lVar10 + 0x18;
    if (lVar10 == 0x1f8) {
      if (*(long *)(lVar1 + 0x28) == local_70) {
        return;
      }
LAB_004abb10:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}


// ===== 004abb14  FUN_004abb14 =====

void FUN_004abb14(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  *(undefined1 *)(param_1 + 2) = 0x28;
  *(undefined4 *)((long)param_1 + 0x11) = 0x45555043;
  *(undefined4 *)((long)param_1 + 0x14) = 0x63657845;
  param_1[3] = 0x6f72506e6f697475;
  param_1[4] = 0x7265646976;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar1 = *param_2;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *param_1 = &PTR_FUN_00790368;
  *(undefined1 *)(param_1 + 6) = uVar1;
  param_1[7] = 0;
  return;
}


// ===== 004abb80  FUN_004abb80 =====

void FUN_004abb80(long *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined ***pppuVar5;
  undefined8 local_e0;
  long *local_d8;
  undefined **local_d0 [4];
  undefined ***local_b0;
  undefined **local_a0 [4];
  undefined ***local_80;
  undefined2 local_70;
  undefined1 local_6e;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined2 local_48;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_b0 = local_d0;
  local_80 = local_a0;
  local_6e = *(undefined1 *)(param_2 + 0x30);
  local_d0[0] = &PTR_FUN_00790768;
  local_a0[0] = &PTR_FUN_00790768;
  local_70 = 0;
  local_68 = 0;
  uStack_60 = 0xffffffffffffffff;
  local_58 = 0xffffffffffffffff;
  uStack_50 = 0xffffffffffffffff;
  local_48 = 0;
                    /* try { // try from 004abbe0 to 004abbeb has its CatchHandler @ 004abcdc */
  FUN_00560d14(&local_e0,local_a0);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
                    /* try { // try from 004abbfc to 004abc03 has its CatchHandler @ 004abcc4 */
  puVar3 = (undefined8 *)FUN_00759c3c(0x10);
  puVar1 = puVar3 + 2;
  *param_1 = (long)puVar3;
  param_1[1] = (long)puVar3;
  param_1[2] = (long)puVar1;
  *puVar3 = local_e0;
  puVar3[1] = local_d8;
  if (local_d8 == (long *)0x0) {
    param_1[1] = (long)puVar1;
    if (local_80 == local_a0) goto LAB_004abc8c;
LAB_004abc6c:
    if (local_80 == (undefined ***)0x0) goto LAB_004abca0;
    lVar4 = 0x28;
    pppuVar5 = local_80;
  }
  else {
    FUN_00755c20(1,local_d8 + 1);
    param_1[1] = (long)puVar1;
    if ((local_d8 != (long *)0x0) &&
       (lVar4 = FUN_00755c50(0xffffffffffffffff,local_d8 + 1), lVar4 == 0)) {
      (**(code **)(*local_d8 + 0x10))(local_d8);
      FUN_0071245c(local_d8);
    }
    if (local_80 != local_a0) goto LAB_004abc6c;
LAB_004abc8c:
    lVar4 = 0x20;
    pppuVar5 = local_a0;
  }
  (**(code **)((long)*pppuVar5 + lVar4))();
LAB_004abca0:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004abd2c  FUN_004abd2c =====

void FUN_004abd2c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  return;
}


// ===== 004abd3c  FUN_004abd3c =====

void FUN_004abd3c(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  void *pvVar4;
  
  pvVar4 = (void *)param_1[8];
  param_1[8] = 0;
  if (pvVar4 != (void *)0x0) {
    if ((*(byte *)((long)pvVar4 + 8) & 1) != 0) {
      free(*(void **)((long)pvVar4 + 0x18));
    }
    free(pvVar4);
  }
  plVar1 = (long *)param_1[6];
  plVar2 = param_1 + 2;
  if (plVar1 == plVar2) {
    lVar3 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_004abda0;
    lVar3 = 0x28;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3))();
LAB_004abda0:
  pvVar4 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar4 != (void *)0x0) {
    FUN_004ac87c(pvVar4);
    free(pvVar4);
    return;
  }
  return;
}


// ===== 004abdd0  FUN_004abdd0 =====

void FUN_004abdd0(long *param_1,undefined8 param_2)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  void *local_b0 [2];
  long local_a0 [4];
  long *local_80;
  void *local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar6 = 0;
  plVar5 = local_a0;
  do {
    (**(code **)((long)&PTR_FUN_00790430 + lVar6))(local_b0);
    if (local_b0[0] != (void *)0x0) {
                    /* try { // try from 004abe38 to 004abe47 has its CatchHandler @ 004abf94 */
      FUN_00585d74(param_1,param_2,local_b0);
      if (*param_1 != 0) {
                    /* try { // try from 004abec8 to 004abee7 has its CatchHandler @ 004abf84 */
        FUN_00645c3c(0,param_1,
                     "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/build/Release/op_reduction.generated/onnxruntime/core/providers/cpu/cpu_execution_provider.cc"
                     ,"RegisterOnnxOperatorKernels",0xa83);
        pvVar2 = local_70;
        local_70 = (void *)0x0;
        if (pvVar2 != (void *)0x0) {
          if ((*(byte *)((long)pvVar2 + 8) & 1) != 0) {
            free(*(void **)((long)pvVar2 + 0x18));
          }
          free(pvVar2);
        }
        if (local_80 == plVar5) {
          lVar6 = 0x20;
LAB_004abf2c:
          (**(code **)(*plVar5 + lVar6))(plVar5);
        }
        else if (local_80 != (long *)0x0) {
          lVar6 = 0x28;
          plVar5 = local_80;
          goto LAB_004abf2c;
        }
        pvVar2 = local_b0[0];
        local_b0[0] = (void *)0x0;
        if (pvVar2 != (void *)0x0) {
          FUN_004ac87c(pvVar2);
          free(pvVar2);
        }
        goto LAB_004abf58;
      }
    }
    pvVar2 = local_70;
    local_70 = (void *)0x0;
    if (pvVar2 != (void *)0x0) {
      if ((*(byte *)((long)pvVar2 + 8) & 1) != 0) {
        free(*(void **)((long)pvVar2 + 0x18));
      }
      free(pvVar2);
    }
    if (local_80 == plVar5) {
      lVar4 = 0x20;
      plVar3 = plVar5;
LAB_004abe94:
      (**(code **)(*plVar3 + lVar4))();
    }
    else if (local_80 != (long *)0x0) {
      lVar4 = 0x28;
      plVar3 = local_80;
      goto LAB_004abe94;
    }
    pvVar2 = local_b0[0];
    local_b0[0] = (void *)0x0;
    if (pvVar2 != (void *)0x0) {
      FUN_004ac87c(pvVar2);
      free(pvVar2);
    }
    lVar6 = lVar6 + 8;
  } while (lVar6 != 0x2f0);
  *param_1 = 0;
LAB_004abf58:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004abfbc  FUN_004abfbc =====

void FUN_004abfbc(long *param_1,undefined8 param_2)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  long *plVar4;
  void *local_90 [2];
  long local_80 [4];
  long *local_60;
  void *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar4 = local_80;
  FUN_004add8c(local_90);
  if (local_90[0] != (void *)0x0) {
                    /* try { // try from 004abffc to 004ac00b has its CatchHandler @ 004ac150 */
    FUN_00585d74(param_1,param_2,local_90);
    if (*param_1 != 0) {
                    /* try { // try from 004ac014 to 004ac033 has its CatchHandler @ 004ac140 */
      FUN_00645c3c(0,param_1,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/build/Release/op_reduction.generated/onnxruntime/core/providers/cpu/cpu_execution_provider.cc"
                   ,"RegisterFp16Kernels",0xaa8);
      pvVar2 = local_50;
      local_50 = (void *)0x0;
      if (pvVar2 != (void *)0x0) {
        if ((*(byte *)((long)pvVar2 + 8) & 1) != 0) {
          free(*(void **)((long)pvVar2 + 0x18));
        }
        free(pvVar2);
      }
      if (local_60 == plVar4) {
        lVar3 = 0x20;
LAB_004ac0f0:
        (**(code **)(*plVar4 + lVar3))(plVar4);
      }
      else if (local_60 != (long *)0x0) {
        lVar3 = 0x28;
        plVar4 = local_60;
        goto LAB_004ac0f0;
      }
      pvVar2 = local_90[0];
      local_90[0] = (void *)0x0;
      if (pvVar2 != (void *)0x0) {
        FUN_004ac87c(pvVar2);
        free(pvVar2);
      }
      goto LAB_004ac11c;
    }
  }
  pvVar2 = local_50;
  local_50 = (void *)0x0;
  if (pvVar2 != (void *)0x0) {
    if ((*(byte *)((long)pvVar2 + 8) & 1) != 0) {
      free(*(void **)((long)pvVar2 + 0x18));
    }
    free(pvVar2);
  }
  if (local_60 == plVar4) {
    lVar3 = 0x20;
LAB_004ac0b8:
    (**(code **)(*plVar4 + lVar3))(plVar4);
  }
  else if (local_60 != (long *)0x0) {
    lVar3 = 0x28;
    plVar4 = local_60;
    goto LAB_004ac0b8;
  }
  pvVar2 = local_90[0];
  local_90[0] = (void *)0x0;
  if (pvVar2 != (void *)0x0) {
    FUN_004ac87c(pvVar2);
    free(pvVar2);
  }
  *param_1 = 0;
LAB_004ac11c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ac178  FUN_004ac178 =====

void FUN_004ac178(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_004abdd0();
  if (*param_1 == 0) {
    uVar1 = FUN_00606bd8();
    if (((uVar1 & 1) != 0) && (FUN_004abfbc(param_1,param_2), *param_1 != 0)) {
                    /* try { // try from 004ac1d8 to 004ac1f7 has its CatchHandler @ 004ac23c */
      FUN_00645c3c(0,param_1,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/build/Release/op_reduction.generated/onnxruntime/core/providers/cpu/cpu_execution_provider.cc"
                   ,"RegisterCPUKernels",0xb9e);
      return;
    }
    FUN_005550a8(param_1,param_2);
    if (*param_1 != 0) {
                    /* try { // try from 004ac210 to 004ac22f has its CatchHandler @ 004ac250 */
      FUN_00645c3c(0,param_1,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/build/Release/op_reduction.generated/onnxruntime/core/providers/cpu/cpu_execution_provider.cc"
                   ,"RegisterCPUKernels",0xba5);
    }
  }
  else {
                    /* try { // try from 004ac198 to 004ac1b7 has its CatchHandler @ 004ac264 */
    FUN_00645c3c(0,param_1,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/build/Release/op_reduction.generated/onnxruntime/core/providers/cpu/cpu_execution_provider.cc"
                 ,"RegisterCPUKernels",0xb9b);
  }
  return;
}


// ===== 004ac278  FUN_004ac278 =====

void FUN_004ac278(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [80];
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_007ad1d0 & 1) == 0) && (iVar4 = FUN_00739c1c(&DAT_007ad1d0), iVar4 != 0)) {
                    /* try { // try from 004ac310 to 004ac313 has its CatchHandler @ 004ac414 */
    FUN_004ac4a8();
    __cxa_atexit(FUN_004ac5b0,&DAT_007ad1d8,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad1d0);
  }
  puVar3 = DAT_007ad1e8;
  lVar2 = DAT_007ad1e0;
  if (DAT_007ad1e8 == (undefined8 *)0x0) {
    *param_1 = DAT_007ad1d8;
    param_1[1] = lVar2;
    if (lVar2 != 0) {
      FUN_00755c20(1,lVar2 + 8);
    }
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
  else {
    local_40 = (undefined8 *)FUN_00759c3c(0x20);
    *local_40 = *puVar3;
    if ((*(byte *)(puVar3 + 1) & 1) == 0) {
      uVar6 = puVar3[2];
      uVar5 = puVar3[1];
      local_40[3] = puVar3[3];
      local_40[2] = uVar6;
      local_40[1] = uVar5;
    }
    else {
                    /* try { // try from 004ac374 to 004ac377 has its CatchHandler @ 004ac470 */
      FUN_002fb36c(local_40 + 1,puVar3[3],puVar3[2]);
    }
                    /* try { // try from 004ac37c to 004ac39b has its CatchHandler @ 004ac480 */
    FUN_00645c3c(0,&local_40,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/build/Release/op_reduction.generated/onnxruntime/core/providers/cpu/cpu_execution_provider.cc"
                 ,"GetKernelRegistry",0xbb6);
    uVar5 = FUN_00753a74(0x88);
                    /* try { // try from 004ac3a8 to 004ac3af has its CatchHandler @ 004ac460 */
    FUN_00645c30(auStack_a8);
                    /* try { // try from 004ac3b0 to 004ac3cf has its CatchHandler @ 004ac450 */
    FUN_0047488c(auStack_90,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/build/Release/op_reduction.generated/onnxruntime/core/providers/cpu/cpu_execution_provider.cc"
                 ,0xbb6,
                 "virtual std::shared_ptr<KernelRegistry> onnxruntime::CPUExecutionProvider::GetKernelRegistry() const"
                 ,auStack_a8);
    FUN_00486664(auStack_c0,&local_40);
    FUN_004792b8(uVar5,auStack_90,auStack_c0);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 004ac3fc to 004ac413 has its CatchHandler @ 004ac428 */
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar5,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ac4a8  FUN_004ac4a8 =====

void FUN_004ac4a8(void)

{
  long lVar1;
  undefined *puVar2;
  void *pvVar3;
  void *pvVar4;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  DAT_007ad1e0 = (long *)FUN_00759c3c(0x30);
  puVar2 = PTR_DAT_007a2098;
  DAT_007ad1e0[1] = 0;
  DAT_007ad1e0[2] = 0;
  DAT_007ad1e0[5] = 0;
  *DAT_007ad1e0 = (long)(puVar2 + 0x10);
  DAT_007ad1e0[4] = 0;
  DAT_007ad1d8 = DAT_007ad1e0 + 3;
  *DAT_007ad1d8 = (long)(DAT_007ad1e0 + 4);
  DAT_007ad1e8 = (void *)0x0;
                    /* try { // try from 004ac504 to 004ac50f has its CatchHandler @ 004ac584 */
  FUN_004ac178(&local_30,DAT_007ad1d8);
  pvVar4 = local_30;
  pvVar3 = DAT_007ad1e8;
  local_30 = (void *)0x0;
  DAT_007ad1e8 = pvVar4;
  if (pvVar3 != (void *)0x0) {
    if ((*(byte *)((long)pvVar3 + 8) & 1) != 0) {
      free(*(void **)((long)pvVar3 + 0x18));
    }
    free(pvVar3);
    pvVar3 = local_30;
    local_30 = (void *)0x0;
    if (pvVar3 != (void *)0x0) {
      if ((*(byte *)((long)pvVar3 + 8) & 1) != 0) {
        free(*(void **)((long)pvVar3 + 0x18));
      }
      free(pvVar3);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ac5b0  FUN_004ac5b0 =====

void FUN_004ac5b0(long param_1)

{
  long lVar1;
  long *plVar2;
  void *__ptr;
  
  __ptr = *(void **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (__ptr != (void *)0x0) {
    if ((*(byte *)((long)__ptr + 8) & 1) != 0) {
      free(*(void **)((long)__ptr + 0x18));
    }
    free(__ptr);
  }
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 004ac628  FUN_004ac628 =====

void FUN_004ac628(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00759c3c(8);
  *param_1 = puVar1;
  *puVar1 = &PTR_FUN_00794710;
  return;
}


// ===== 004ac660  FUN_004ac660 =====

void FUN_004ac660(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)param_1[7];
  *param_1 = (long)(PTR_DAT_007a2090 + 0x10);
  if (plVar3 != (long *)0x0) {
    plVar4 = (long *)param_1[8];
    plVar1 = plVar3;
    if (plVar4 != plVar3) {
      do {
        plVar1 = (long *)plVar4[-2];
        plVar4 = plVar4 + -6;
        if (plVar4 == plVar1) {
          lVar2 = 0x20;
          plVar1 = plVar4;
LAB_004ac6a8:
          (**(code **)(*plVar1 + lVar2))();
        }
        else if (plVar1 != (long *)0x0) {
          lVar2 = 0x28;
          goto LAB_004ac6a8;
        }
      } while (plVar4 != plVar3);
      plVar1 = (long *)param_1[7];
    }
    param_1[8] = (long)plVar3;
    free(plVar1);
  }
  *param_1 = (long)&PTR_FUN_007963d8;
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    free((void *)param_1[4]);
    return;
  }
  return;
}


// ===== 004ac720  FUN_004ac720 =====

void FUN_004ac720(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)param_1[7];
  *param_1 = (long)(PTR_DAT_007a2090 + 0x10);
  if (plVar3 != (long *)0x0) {
    plVar4 = (long *)param_1[8];
    plVar1 = plVar3;
    if (plVar4 != plVar3) {
      do {
        plVar1 = (long *)plVar4[-2];
        plVar4 = plVar4 + -6;
        if (plVar4 == plVar1) {
          lVar2 = 0x20;
          plVar1 = plVar4;
LAB_004ac768:
          (**(code **)(*plVar1 + lVar2))();
        }
        else if (plVar1 != (long *)0x0) {
          lVar2 = 0x28;
          goto LAB_004ac768;
        }
      } while (plVar4 != plVar3);
      plVar1 = (long *)param_1[7];
    }
    param_1[8] = (long)plVar3;
    free(plVar1);
  }
  *param_1 = (long)&PTR_FUN_007963d8;
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    free((void *)param_1[4]);
  }
  free(param_1);
  return;
}


// ===== 004ac7d8  FUN_004ac7d8 =====

undefined8 FUN_004ac7d8(void)

{
  return 0;
}


// ===== 004ac7e0  FUN_004ac7e0 =====

void FUN_004ac7e0(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}


// ===== 004ac7f4  FUN_004ac7f4 =====

void FUN_004ac7f4(void)

{
  return;
}


// ===== 004ac7f8  FUN_004ac7f8 =====

undefined8 FUN_004ac7f8(void)

{
  return 0;
}


// ===== 004ac800  FUN_004ac800 =====

void FUN_004ac800(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}


// ===== 004ac808  FUN_004ac808 =====

void FUN_004ac808(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}


// ===== 004ac810  FUN_004ac810 =====

void FUN_004ac810(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}


// ===== 004ac818  FUN_004ac818 =====

undefined8 FUN_004ac818(void)

{
  return 0;
}


// ===== 004ac820  FUN_004ac820 =====

undefined8 FUN_004ac820(void)

{
  return 0;
}


// ===== 004ac828  FUN_004ac828 =====

void FUN_004ac828(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}


// ===== 004ac830  FUN_004ac830 =====

void FUN_004ac830(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}


// ===== 004ac838  FUN_004ac838 =====

undefined8 FUN_004ac838(void)

{
  return 1;
}


// ===== 004ac840  FUN_004ac840 =====

void FUN_004ac840(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}


// ===== 004ac848  FUN_004ac848 =====

undefined8 FUN_004ac848(void)

{
  return 0;
}


// ===== 004ac850  FUN_004ac850 =====

void FUN_004ac850(void)

{
  return;
}


// ===== 004ac854  FUN_004ac854 =====

undefined8 FUN_004ac854(void)

{
  return 1;
}


// ===== 004ac85c  FUN_004ac85c =====

undefined8 FUN_004ac85c(void)

{
  return 0;
}


// ===== 004ac864  FUN_004ac864 =====

undefined4 FUN_004ac864(long param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2 < 0xfffffffe) {
    uVar1 = *(undefined4 *)(param_1 + 8);
  }
  return uVar1;
}


// ===== 004ac874  FUN_004ac874 =====

void FUN_004ac874(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}


// ===== 004ac87c  FUN_004ac87c =====

void FUN_004ac87c(byte *param_1)

{
  byte bVar1;
  undefined8 *__ptr;
  void *pvVar2;
  void *pvVar3;
  
  FUN_004ac974(param_1 + 0xd0,*(undefined8 *)(param_1 + 0xd8));
  FUN_004ac974(param_1 + 0xb8,*(undefined8 *)(param_1 + 0xc0));
  pvVar2 = *(void **)(param_1 + 0x90);
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 0x98) = pvVar2;
    free(pvVar2);
  }
  pvVar2 = *(void **)(param_1 + 0x78);
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 0x80) = pvVar2;
    free(pvVar2);
  }
  __ptr = (undefined8 *)*(void **)(param_1 + 0x60);
  while (__ptr != (undefined8 *)0x0) {
    pvVar2 = (void *)__ptr[5];
    pvVar3 = (void *)*__ptr;
    if (pvVar2 != (void *)0x0) {
      __ptr[6] = pvVar2;
      free(pvVar2);
    }
    if ((*(byte *)(__ptr + 2) & 1) != 0) {
      free((void *)__ptr[4]);
    }
    free(__ptr);
    __ptr = (undefined8 *)pvVar3;
  }
  pvVar2 = *(void **)(param_1 + 0x50);
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  if (pvVar2 != (void *)0x0) {
    free(pvVar2);
  }
  if ((param_1[0x38] & 1) == 0) {
    bVar1 = param_1[0x20];
  }
  else {
    free(*(void **)(param_1 + 0x48));
    bVar1 = param_1[0x20];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *param_1;
  }
  else {
    free(*(void **)(param_1 + 0x30));
    bVar1 = *param_1;
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  free(*(void **)(param_1 + 0x10));
  return;
}


// ===== 004ac974  FUN_004ac974 =====

void FUN_004ac974(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_004ac974(param_1,*param_2);
    FUN_004ac974(param_1,param_2[1]);
    free(param_2);
    return;
  }
  return;
}


// ===== 004ac9b8  FUN_004ac9b8 =====

void FUN_004ac9b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00790730;
  FUN_00712454();
  return;
}


// ===== 004ac9cc  FUN_004ac9cc =====

void FUN_004ac9cc(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a2098 + 0x10);
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 004aca00  FUN_004aca00 =====

void FUN_004aca00(long param_1)

{
  FUN_004aca10(param_1 + 0x18,*(undefined8 *)(param_1 + 0x20));
  return;
}


// ===== 004aca0c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004aca10  FUN_004aca10 =====

void FUN_004aca10(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_004aca10(param_1,*param_2);
    FUN_004aca10(param_1,param_2[1]);
    FUN_004aca5c(param_2 + 4);
    free(param_2);
    return;
  }
  return;
}


// ===== 004aca5c  FUN_004aca5c =====

void FUN_004aca5c(byte *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  void *pvVar4;
  
  pvVar4 = *(void **)(param_1 + 0x60);
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  if (pvVar4 != (void *)0x0) {
    if ((*(byte *)((long)pvVar4 + 8) & 1) != 0) {
      free(*(void **)((long)pvVar4 + 0x18));
    }
    free(pvVar4);
  }
  pbVar1 = *(byte **)(param_1 + 0x50);
  pbVar2 = param_1 + 0x30;
  if (pbVar1 == pbVar2) {
    lVar3 = 0x20;
  }
  else {
    if (pbVar1 == (byte *)0x0) goto LAB_004acac0;
    lVar3 = 0x28;
    pbVar2 = pbVar1;
  }
  (**(code **)(*(long *)pbVar2 + lVar3))();
LAB_004acac0:
  pvVar4 = *(void **)(param_1 + 0x20);
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  if (pvVar4 != (void *)0x0) {
    FUN_004ac87c(pvVar4);
    free(pvVar4);
  }
  if ((*param_1 & 1) == 0) {
    return;
  }
  free(*(void **)(param_1 + 0x10));
  return;
}


// ===== 004acb00  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004acb04  FUN_004acb04 =====

void FUN_004acb04(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x10);
  *puVar1 = &PTR_FUN_00790768;
  return;
}


// ===== 004acb28  FUN_004acb28 =====

void FUN_004acb28(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00790768;
  return;
}


// ===== 004acb38  FUN_004acb38 =====

void FUN_004acb38(void)

{
  return;
}


// ===== 004acb3c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004acb40  FUN_004acb40 =====

void FUN_004acb40(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00759c3c(0x20);
  puVar1 = PTR_DAT_007a1f90;
  plVar2[2] = 0;
  plVar2[3] = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[1] = (long)&DAT_001fa69d;
  *param_1 = plVar2;
  return;
}


// ===== 004acb84  FUN_004acb84 =====

void FUN_004acb84(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  void *__ptr;
  void *pvVar4;
  
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    puVar3 = (undefined8 *)*param_1;
    __ptr = (void *)*puVar3;
    if (__ptr != (void *)0x0) {
      pvVar4 = (void *)puVar3[1];
      if (pvVar4 == __ptr) {
        puVar3[1] = __ptr;
        free(__ptr);
        return;
      }
      do {
        plVar2 = *(long **)((long)pvVar4 + -8);
        if ((plVar2 != (long *)0x0) &&
           (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0)) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          FUN_0071245c(plVar2);
        }
        pvVar4 = (void *)((long)pvVar4 + -0x10);
      } while (pvVar4 != __ptr);
      pvVar4 = *(void **)*param_1;
      puVar3[1] = __ptr;
      free(pvVar4);
      return;
    }
  }
  return;
}


// ===== 004acc4c  FUN_004acc4c =====

void FUN_004acc4c(long *param_1,byte *param_2,undefined8 param_3,long *param_4)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  byte *pbVar6;
  undefined *puVar7;
  byte local_60;
  undefined4 local_5f;
  undefined2 local_5b;
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  bVar1 = *param_2;
  uVar4 = (ulong)(bVar1 >> 1);
  if ((bVar1 & 1) != 0) {
    uVar4 = *(ulong *)(param_2 + 8);
  }
  if ((long)uVar4 < 8) {
    if (uVar4 != 3) {
      if (uVar4 != 4) goto LAB_004acef0;
      pbVar6 = *(byte **)(param_2 + 0x10);
      if ((bVar1 & 1) == 0) {
        pbVar6 = param_2 + 1;
      }
      if (*(int *)pbVar6 == 0x756c6543) {
        plVar3 = (long *)FUN_00759c3c(0x20);
        local_60 = 10;
        local_5f = 0x68706c61;
        puVar7 = PTR_DAT_007a1fe0 + 0x10;
        plVar3[1] = 0;
        *plVar3 = 0;
        plVar3[3] = 0;
        plVar3[2] = 0;
        *plVar3 = (long)puVar7;
        local_5b = 0x61;
                    /* try { // try from 004ad10c to 004ad11f has its CatchHandler @ 004ad38c */
        FUN_004b0f40(param_1,&local_60,param_3,plVar3 + 3);
        if ((local_60 & 1) != 0) {
          free(local_50);
        }
        if (*param_1 != 0) {
                    /* try { // try from 004ad138 to 004ad157 has its CatchHandler @ 004ad36c */
          FUN_00645c3c(0,param_1,
                       "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/activation/activations.cc"
                       ,"Create",0x54);
          goto LAB_004ad158;
        }
        goto LAB_004ad304;
      }
      if (*(int *)pbVar6 != 0x756c6552) goto LAB_004acef0;
      plVar3 = (long *)FUN_00759c3c(0x18);
      puVar7 = PTR_DAT_007a1fa0;
      goto LAB_004acf70;
    }
    pbVar6 = *(byte **)(param_2 + 0x10);
    if ((bVar1 & 1) == 0) {
      pbVar6 = param_2 + 1;
    }
    if (*(short *)pbVar6 != 0x6c45 || pbVar6[2] != 0x75) goto LAB_004acef0;
    plVar3 = (long *)FUN_00759c3c(0x20);
    local_60 = 10;
    local_5f = 0x68706c61;
    puVar7 = PTR_DAT_007a1fd8 + 0x10;
    plVar3[1] = 0;
    *plVar3 = 0;
    plVar3[3] = 0;
    plVar3[2] = 0;
    *plVar3 = (long)puVar7;
    local_5b = 0x61;
                    /* try { // try from 004ad07c to 004ad08f has its CatchHandler @ 004ad390 */
    FUN_004b0f40(param_1,&local_60,param_3,plVar3 + 3);
    if ((local_60 & 1) != 0) {
      free(local_50);
    }
    if (*param_1 != 0) {
                    /* try { // try from 004ad0a8 to 004ad0c7 has its CatchHandler @ 004ad370 */
      FUN_00645c3c(0,param_1,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/activation/activations.cc"
                   ,"Create",0x55);
LAB_004ad158:
      (**(code **)(*plVar3 + 0x20))(plVar3);
      if (*(long *)(lVar2 + 0x28) == local_48) {
        return;
      }
      goto LAB_004ad3d8;
    }
LAB_004ad304:
    plVar5 = (long *)*param_4;
    *param_4 = (long)plVar3;
  }
  else if (uVar4 == 8) {
    pbVar6 = *(byte **)(param_2 + 0x10);
    if ((bVar1 & 1) == 0) {
      pbVar6 = param_2 + 1;
    }
    if (*(long *)pbVar6 != 0x73756c7074666f53) goto LAB_004acef0;
    plVar3 = (long *)FUN_00759c3c(0x18);
    puVar7 = PTR_DAT_007a1fa8;
    plVar3[2] = 0;
    plVar5 = (long *)*param_4;
    *param_1 = 0;
    *param_4 = (long)plVar3;
    *plVar3 = (long)(puVar7 + 0x10);
    plVar3[1] = 0;
  }
  else {
    if (uVar4 != 9) {
      if (uVar4 != 0xb) goto LAB_004acef0;
      pbVar6 = *(byte **)(param_2 + 0x10);
      if ((bVar1 & 1) == 0) {
        pbVar6 = param_2 + 1;
      }
      if (*(long *)pbVar6 != 0x6d67695364726148 || *(long *)(pbVar6 + 3) != 0x64696f6d67695364)
      goto LAB_004acef0;
      plVar3 = (long *)FUN_00759c3c(0x20);
      puVar7 = PTR_DAT_007a1f98 + 0x10;
      plVar3[1] = 0;
      *plVar3 = 0;
      plVar3[3] = 0;
      plVar3[2] = 0;
      *plVar3 = (long)puVar7;
                    /* try { // try from 004acd18 to 004acd23 has its CatchHandler @ 004ad3ac */
      FUN_004ad3dc(param_1,plVar3,param_3);
      if (*param_1 == 0) goto LAB_004ad304;
                    /* try { // try from 004acd2c to 004acd4b has its CatchHandler @ 004ad378 */
      FUN_00645c3c(0,param_1,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/activation/activations.cc"
                   ,"Create",0x56);
      goto LAB_004ad2c8;
    }
    pbVar6 = *(byte **)(param_2 + 0x10);
    if ((bVar1 & 1) == 0) {
      pbVar6 = param_2 + 1;
    }
    if (*(long *)pbVar6 == 0x6c6552796b61654c && pbVar6[8] == 0x75) {
      plVar3 = (long *)FUN_00759c3c(0x20);
      local_60 = 10;
      local_5f = 0x68706c61;
      puVar7 = PTR_DAT_007a1fb0 + 0x10;
      plVar3[1] = 0;
      *plVar3 = 0;
      plVar3[3] = 0;
      plVar3[2] = 0;
      *plVar3 = (long)puVar7;
      local_5b = 0x61;
                    /* try { // try from 004ace78 to 004ace8b has its CatchHandler @ 004ad394 */
      FUN_004b0f40(param_1,&local_60,param_3,plVar3 + 3);
      if ((local_60 & 1) != 0) {
        free(local_50);
      }
      if (*param_1 != 0) {
                    /* try { // try from 004acea4 to 004acec3 has its CatchHandler @ 004ad374 */
        FUN_00645c3c(0,param_1,
                     "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/activation/activations.cc"
                     ,"Create",0x57);
        goto LAB_004ad158;
      }
      goto LAB_004ad304;
    }
LAB_004acef0:
    uVar4 = FUN_0048a36c(param_2,"Sigmoid");
    if ((uVar4 & 1) == 0) {
      uVar4 = FUN_0048a36c(param_2,"Softsign");
      if ((uVar4 & 1) == 0) {
        uVar4 = FUN_0048a36c(param_2,&DAT_001e3845);
        if ((uVar4 & 1) == 0) {
          uVar4 = FUN_0048a36c(param_2,"ThresholdedRelu");
          if ((uVar4 & 1) == 0) {
            uVar4 = FUN_0048a36c(param_2,&DAT_001d0954);
            if ((uVar4 & 1) == 0) {
              uVar4 = FUN_0048a36c(param_2,"ParametricSoftplus");
              if ((uVar4 & 1) == 0) {
                uVar4 = FUN_0048a36c(param_2,"ScaledTanh");
                if ((uVar4 & 1) == 0) {
                  if (*(long *)(lVar2 + 0x28) == local_48) {
                    FUN_0063acd8(param_1,2,1,"unknown kernel type");
                    return;
                  }
                  goto LAB_004ad3d8;
                }
                plVar3 = (long *)FUN_00759c3c(0x20);
                puVar7 = PTR_DAT_007a1ff8 + 0x10;
                plVar3[1] = 0;
                *plVar3 = 0;
                plVar3[3] = 0;
                plVar3[2] = 0;
                *plVar3 = (long)puVar7;
                    /* try { // try from 004ad294 to 004ad29f has its CatchHandler @ 004ad354 */
                FUN_004ad8b4(param_1,plVar3,param_3);
                if (*param_1 == 0) goto LAB_004ad2fc;
                    /* try { // try from 004ad2a8 to 004ad2c7 has its CatchHandler @ 004ad350 */
                FUN_00645c3c(0,param_1,
                             "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/activation/activations.cc"
                             ,"Create",0x61);
              }
              else {
                plVar3 = (long *)FUN_00759c3c(0x20);
                puVar7 = PTR_DAT_007a1ff0 + 0x10;
                plVar3[1] = 0;
                *plVar3 = 0;
                plVar3[3] = 0;
                plVar3[2] = 0;
                *plVar3 = (long)puVar7;
                    /* try { // try from 004ad224 to 004ad22f has its CatchHandler @ 004ad35c */
                FUN_004ad750(param_1,plVar3,param_3);
                if (*param_1 == 0) goto LAB_004ad2fc;
                    /* try { // try from 004ad238 to 004ad257 has its CatchHandler @ 004ad358 */
                FUN_00645c3c(0,param_1,
                             "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/activation/activations.cc"
                             ,"Create",0x60);
              }
            }
            else {
              plVar3 = (long *)FUN_00759c3c(0x20);
              puVar7 = PTR_DAT_007a1fe8 + 0x10;
              plVar3[1] = 0;
              *plVar3 = 0;
              plVar3[3] = 0;
              plVar3[2] = 0;
              *plVar3 = (long)puVar7;
                    /* try { // try from 004ad1b4 to 004ad1bf has its CatchHandler @ 004ad364 */
              FUN_004ad5e8(param_1,plVar3,param_3);
              if (*param_1 == 0) goto LAB_004ad2fc;
                    /* try { // try from 004ad1c8 to 004ad1e7 has its CatchHandler @ 004ad360 */
              FUN_00645c3c(0,param_1,
                           "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/activation/activations.cc"
                           ,"Create",0x5e);
            }
          }
          else {
            plVar3 = (long *)FUN_00759c3c(0x20);
            puVar7 = PTR_DAT_007a1fd0 + 0x10;
            plVar3[1] = 0;
            *plVar3 = 0;
            plVar3[3] = 0;
            plVar3[2] = 0;
            *plVar3 = (long)puVar7;
                    /* try { // try from 004ad004 to 004ad00f has its CatchHandler @ 004ad388 */
            FUN_004ad540(param_1,plVar3,param_3);
            if (*param_1 == 0) {
LAB_004ad2fc:
              FUN_00474684(param_1);
              goto LAB_004ad304;
            }
                    /* try { // try from 004ad018 to 004ad037 has its CatchHandler @ 004ad368 */
            FUN_00645c3c(0,param_1,
                         "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/activation/activations.cc"
                         ,"Create",0x5d);
          }
LAB_004ad2c8:
          if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Could not recover jumptable at 0x004ad2f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x20))(plVar3);
            return;
          }
          goto LAB_004ad3d8;
        }
        plVar3 = (long *)FUN_00759c3c(0x18);
        puVar7 = PTR_DAT_007a1fc8;
      }
      else {
        plVar3 = (long *)FUN_00759c3c(0x18);
        puVar7 = PTR_DAT_007a1fc0;
      }
    }
    else {
      plVar3 = (long *)FUN_00759c3c(0x18);
      puVar7 = PTR_DAT_007a1fb8;
    }
LAB_004acf70:
    plVar3[1] = 0;
    plVar3[2] = 0;
    *plVar3 = (long)(puVar7 + 0x10);
    *param_1 = 0;
    FUN_00474684(param_1);
    plVar5 = (long *)*param_4;
    *param_4 = (long)plVar3;
  }
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  *param_1 = 0;
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_004ad3d8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ad3dc  FUN_004ad3dc =====

void FUN_004ad3dc(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  byte local_50 [5];
  ushort local_4b;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50[0] = 10;
  local_50[1] = 0x61;
  local_50[2] = 0x6c;
  local_50[3] = 0x70;
  local_50[4] = 0x68;
  local_4b = 0x61;
                    /* try { // try from 004ad424 to 004ad433 has its CatchHandler @ 004ad510 */
  FUN_004b0f40(param_1,local_50,param_3,param_2 + 0x18);
  if ((local_50[0] & 1) != 0) {
    free(local_40);
  }
  if (*param_1 == 0) {
    local_4b = local_4b & 0xff00;
    local_50[0] = 8;
    local_50[1] = 0x62;
    local_50[2] = 0x65;
    local_50[3] = 0x74;
    local_50[4] = 0x61;
                    /* try { // try from 004ad488 to 004ad49b has its CatchHandler @ 004ad4fc */
    FUN_004b0f40(param_1,local_50,param_3,param_2 + 0x1c);
    if ((local_50[0] & 1) != 0) {
      free(local_40);
    }
    if (*param_1 != 0) {
                    /* try { // try from 004ad4b4 to 004ad4d3 has its CatchHandler @ 004ad4f8 */
      FUN_00645c3c(0,param_1,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/activation/activations.h"
                   ,&DAT_001cebfb,0x33);
    }
  }
  else {
                    /* try { // try from 004ad44c to 004ad46b has its CatchHandler @ 004ad500 */
    FUN_00645c3c(0,param_1,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/activation/activations.h"
                 ,&DAT_001cebfb,0x33);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ad540  FUN_004ad540 =====

void FUN_004ad540(long param_1,undefined8 param_2)

{
  long lVar1;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40[0] = 10;
  local_40[1] = 0x61;
  local_40[2] = 0x6c;
  local_40[3] = 0x70;
  local_40[4] = 0x68;
  local_40[5] = 0x61;
  local_40[6] = 0;
                    /* try { // try from 004ad57c to 004ad587 has its CatchHandler @ 004ad5b8 */
  FUN_004b0f40(local_40,param_2,param_1 + 0x18);
  if ((local_40[0] & 1) != 0) {
    free(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ad5e8  FUN_004ad5e8 =====

void FUN_004ad5e8(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50[0] = 10;
  local_50[1] = 0x61;
  local_50[2] = 0x6c;
  local_50[3] = 0x70;
  local_50[4] = 0x68;
  local_50[5] = 0x61;
  local_50[6] = 0;
                    /* try { // try from 004ad630 to 004ad63f has its CatchHandler @ 004ad720 */
  FUN_004b0f40(param_1,local_50,param_3,param_2 + 0x18);
  if ((local_50[0] & 1) != 0) {
    free(local_40);
  }
  if (*param_1 == 0) {
    local_50[0] = 10;
    local_50[1] = 0x67;
    local_50[2] = 0x61;
    local_50[3] = 0x6d;
    local_50[4] = 0x6d;
    local_50[5] = 0x61;
    local_50[6] = 0;
                    /* try { // try from 004ad698 to 004ad6ab has its CatchHandler @ 004ad70c */
    FUN_004b0f40(param_1,local_50,param_3,param_2 + 0x1c);
    if ((local_50[0] & 1) != 0) {
      free(local_40);
    }
    if (*param_1 != 0) {
                    /* try { // try from 004ad6c4 to 004ad6e3 has its CatchHandler @ 004ad708 */
      FUN_00645c3c(0,param_1,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/activation/activations.h"
                   ,&DAT_001cebfb,0xde);
    }
  }
  else {
                    /* try { // try from 004ad658 to 004ad677 has its CatchHandler @ 004ad710 */
    FUN_00645c3c(0,param_1,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/activation/activations.h"
                 ,&DAT_001cebfb,0xde);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ad750  FUN_004ad750 =====

void FUN_004ad750(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  byte local_50 [5];
  ushort local_4b;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50[0] = 10;
  local_50[1] = 0x61;
  local_50[2] = 0x6c;
  local_50[3] = 0x70;
  local_50[4] = 0x68;
  local_4b = 0x61;
                    /* try { // try from 004ad798 to 004ad7a7 has its CatchHandler @ 004ad884 */
  FUN_004b0f40(param_1,local_50,param_3,param_2 + 0x18);
  if ((local_50[0] & 1) != 0) {
    free(local_40);
  }
  if (*param_1 == 0) {
    local_4b = local_4b & 0xff00;
    local_50[0] = 8;
    local_50[1] = 0x62;
    local_50[2] = 0x65;
    local_50[3] = 0x74;
    local_50[4] = 0x61;
                    /* try { // try from 004ad7fc to 004ad80f has its CatchHandler @ 004ad870 */
    FUN_004b0f40(param_1,local_50,param_3,param_2 + 0x1c);
    if ((local_50[0] & 1) != 0) {
      free(local_40);
    }
    if (*param_1 != 0) {
                    /* try { // try from 004ad828 to 004ad847 has its CatchHandler @ 004ad86c */
      FUN_00645c3c(0,param_1,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/contrib_ops/cpu/activations.h"
                   ,&DAT_001cebfb,0x24);
    }
  }
  else {
                    /* try { // try from 004ad7c0 to 004ad7df has its CatchHandler @ 004ad874 */
    FUN_00645c3c(0,param_1,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/contrib_ops/cpu/activations.h"
                 ,&DAT_001cebfb,0x24);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ad8b4  FUN_004ad8b4 =====

void FUN_004ad8b4(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  byte local_50 [5];
  ushort local_4b;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50[0] = 10;
  local_50[1] = 0x61;
  local_50[2] = 0x6c;
  local_50[3] = 0x70;
  local_50[4] = 0x68;
  local_4b = 0x61;
                    /* try { // try from 004ad8fc to 004ad90b has its CatchHandler @ 004ad9e8 */
  FUN_004b0f40(param_1,local_50,param_3,param_2 + 0x18);
  if ((local_50[0] & 1) != 0) {
    free(local_40);
  }
  if (*param_1 == 0) {
    local_4b = local_4b & 0xff00;
    local_50[0] = 8;
    local_50[1] = 0x62;
    local_50[2] = 0x65;
    local_50[3] = 0x74;
    local_50[4] = 0x61;
                    /* try { // try from 004ad960 to 004ad973 has its CatchHandler @ 004ad9d4 */
    FUN_004b0f40(param_1,local_50,param_3,param_2 + 0x1c);
    if ((local_50[0] & 1) != 0) {
      free(local_40);
    }
    if (*param_1 != 0) {
                    /* try { // try from 004ad98c to 004ad9ab has its CatchHandler @ 004ad9d0 */
      FUN_00645c3c(0,param_1,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/contrib_ops/cpu/activations.h"
                   ,&DAT_001cebfb,0x15);
    }
  }
  else {
                    /* try { // try from 004ad924 to 004ad943 has its CatchHandler @ 004ad9d8 */
    FUN_00645c3c(0,param_1,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/contrib_ops/cpu/activations.h"
                 ,&DAT_001cebfb,0x15);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ada18  FUN_004ada18 =====

void FUN_004ada18(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr != (void *)0x0) {
    FUN_004ac87c(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 004ada54  FUN_004ada54 =====

void FUN_004ada54(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *local_78;
  undefined *local_70;
  code *pcStack_68;
  undefined **local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_78 = (undefined8 *)FUN_00759c3c(0xf8);
  uVar2 = DAT_001b7148;
  local_78[0x1e] = 0;
  local_78[0xd] = 0;
  local_78[0xc] = 0;
  local_78[0xf] = 0;
  local_78[0xe] = 0;
  puVar6 = local_78 + 0x18;
  local_78[0x19] = 0;
  *puVar6 = 0;
  *(undefined4 *)(local_78 + 0xe) = 0x3f800000;
  local_78[1] = 0;
  *local_78 = 0;
  local_78[3] = 0;
  local_78[2] = 0;
  local_78[5] = 0;
  local_78[4] = 0;
  local_78[7] = 0;
  local_78[6] = 0;
  local_78[9] = 0;
  local_78[8] = 0;
  local_78[0xb] = 0;
  local_78[10] = 0;
  local_78[0x11] = 0;
  local_78[0x10] = 0;
  local_78[0x13] = 0;
  local_78[0x12] = 0;
  local_78[0x15] = 0;
  local_78[0x14] = 0;
  local_78[0x17] = 0;
  local_78[0x16] = 0;
  local_78[0x1b] = 0;
  local_78[0x1a] = 0;
  local_78[0x1d] = 0;
  local_78[0x1c] = 0;
  local_78[3] = uVar2;
  *puVar6 = 0;
  *(undefined1 *)(local_78 + 0x15) = 0;
  local_78[0x14] = 0;
  local_78[0x13] = 0;
  local_78[0x12] = 0;
  local_78[0x11] = 0;
  local_78[0x10] = 0;
  local_78[0xf] = 0;
  local_78[0x17] = puVar6;
  local_78[0x1c] = 0;
  local_78[0x1b] = 0;
  local_78[0x19] = 0;
  local_78[0x1a] = local_78 + 0x1b;
                    /* try { // try from 004adaec to 004adb47 has its CatchHandler @ 004adbc8 */
  uVar2 = FUN_00583d4c(&local_78,0,0);
  uVar3 = FUN_0056cff0();
  uVar2 = FUN_00583c90(uVar2,&DAT_001baece,uVar3);
  uVar2 = FUN_00583770(uVar2,&DAT_001baec9);
  plVar4 = (long *)FUN_00583890(uVar2,&DAT_001c717f);
  *(undefined8 *)(*plVar4 + 0x18) = 0xd0000000d;
  puVar5 = (undefined8 *)FUN_005839b8(plVar4,"CPUExecutionProvider");
  puVar6 = local_78;
  local_70 = PTR_DAT_007a2000;
  local_50 = &local_70;
  uVar2 = *puVar5;
  *puVar5 = 0;
  local_70 = local_70 + 0x10;
  *param_1 = uVar2;
  pcStack_68 = FUN_004b00dc;
  param_1[2] = local_70;
  param_1[6] = param_1 + 2;
  param_1[3] = FUN_004b00dc;
  param_1[8] = 0;
  local_78 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_004ac87c(puVar6);
    free(puVar6);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004adbf0  FUN_004adbf0 =====

void FUN_004adbf0(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *local_78;
  undefined *local_70;
  code *pcStack_68;
  undefined **local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_78 = (undefined8 *)FUN_00759c3c(0xf8);
  uVar2 = DAT_001b7148;
  local_78[0x1e] = 0;
  local_78[0xd] = 0;
  local_78[0xc] = 0;
  local_78[0xf] = 0;
  local_78[0xe] = 0;
  puVar6 = local_78 + 0x18;
  local_78[0x19] = 0;
  *puVar6 = 0;
  *(undefined4 *)(local_78 + 0xe) = 0x3f800000;
  local_78[1] = 0;
  *local_78 = 0;
  local_78[3] = 0;
  local_78[2] = 0;
  local_78[5] = 0;
  local_78[4] = 0;
  local_78[7] = 0;
  local_78[6] = 0;
  local_78[9] = 0;
  local_78[8] = 0;
  local_78[0xb] = 0;
  local_78[10] = 0;
  local_78[0x11] = 0;
  local_78[0x10] = 0;
  local_78[0x13] = 0;
  local_78[0x12] = 0;
  local_78[0x15] = 0;
  local_78[0x14] = 0;
  local_78[0x17] = 0;
  local_78[0x16] = 0;
  local_78[0x1b] = 0;
  local_78[0x1a] = 0;
  local_78[0x1d] = 0;
  local_78[0x1c] = 0;
  local_78[3] = uVar2;
  *puVar6 = 0;
  *(undefined1 *)(local_78 + 0x15) = 0;
  local_78[0x14] = 0;
  local_78[0x13] = 0;
  local_78[0x12] = 0;
  local_78[0x11] = 0;
  local_78[0x10] = 0;
  local_78[0xf] = 0;
  local_78[0x17] = puVar6;
  local_78[0x1c] = 0;
  local_78[0x1b] = 0;
  local_78[0x19] = 0;
  local_78[0x1a] = local_78 + 0x1b;
                    /* try { // try from 004adc88 to 004adce3 has its CatchHandler @ 004add64 */
  uVar2 = FUN_00583d4c(&local_78,0,0);
  uVar3 = FUN_0056cff0();
  uVar2 = FUN_00583c90(uVar2,&DAT_001baece,uVar3);
  uVar2 = FUN_00583770(uVar2,&DAT_001baec9);
  plVar4 = (long *)FUN_00583890(uVar2,&DAT_001c717f);
  *(undefined4 *)(*plVar4 + 0x18) = 0xe;
  puVar5 = (undefined8 *)FUN_005839b8(plVar4,"CPUExecutionProvider");
  puVar6 = local_78;
  local_70 = PTR_DAT_007a2000;
  local_50 = &local_70;
  uVar2 = *puVar5;
  *puVar5 = 0;
  local_70 = local_70 + 0x10;
  *param_1 = uVar2;
  pcStack_68 = FUN_004b018c;
  param_1[2] = local_70;
  param_1[6] = param_1 + 2;
  param_1[3] = FUN_004b018c;
  param_1[8] = 0;
  local_78 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_004ac87c(puVar6);
    free(puVar6);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004add8c  FUN_004add8c =====

void FUN_004add8c(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *local_78;
  undefined *local_70;
  code *pcStack_68;
  undefined **local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_78 = (undefined8 *)FUN_00759c3c(0xf8);
  uVar2 = DAT_001b7148;
  local_78[0x1e] = 0;
  local_78[0xd] = 0;
  local_78[0xc] = 0;
  local_78[0xf] = 0;
  local_78[0xe] = 0;
  puVar6 = local_78 + 0x18;
  local_78[0x19] = 0;
  *puVar6 = 0;
  *(undefined4 *)(local_78 + 0xe) = 0x3f800000;
  local_78[1] = 0;
  *local_78 = 0;
  local_78[3] = 0;
  local_78[2] = 0;
  local_78[5] = 0;
  local_78[4] = 0;
  local_78[7] = 0;
  local_78[6] = 0;
  local_78[9] = 0;
  local_78[8] = 0;
  local_78[0xb] = 0;
  local_78[10] = 0;
  local_78[0x11] = 0;
  local_78[0x10] = 0;
  local_78[0x13] = 0;
  local_78[0x12] = 0;
  local_78[0x15] = 0;
  local_78[0x14] = 0;
  local_78[0x17] = 0;
  local_78[0x16] = 0;
  local_78[0x1b] = 0;
  local_78[0x1a] = 0;
  local_78[0x1d] = 0;
  local_78[0x1c] = 0;
  local_78[3] = uVar2;
  *puVar6 = 0;
  *(undefined1 *)(local_78 + 0x15) = 0;
  local_78[0x14] = 0;
  local_78[0x13] = 0;
  local_78[0x12] = 0;
  local_78[0x11] = 0;
  local_78[0x10] = 0;
  local_78[0xf] = 0;
  local_78[0x17] = puVar6;
  local_78[0x1c] = 0;
  local_78[0x1b] = 0;
  local_78[0x19] = 0;
  local_78[0x1a] = local_78 + 0x1b;
                    /* try { // try from 004ade24 to 004ade7f has its CatchHandler @ 004adf00 */
  uVar2 = FUN_00583d4c(&local_78,0,0);
  uVar3 = FUN_0056e14c();
  uVar2 = FUN_00583c90(uVar2,&DAT_001baece,uVar3);
  uVar2 = FUN_00583770(uVar2,"LeakyRelu");
  plVar4 = (long *)FUN_00583890(uVar2,&DAT_001c717f);
  *(undefined4 *)(*plVar4 + 0x18) = 0x10;
  puVar5 = (undefined8 *)FUN_005839b8(plVar4,"CPUExecutionProvider");
  puVar6 = local_78;
  local_70 = PTR_DAT_007a2000;
  local_50 = &local_70;
  uVar2 = *puVar5;
  *puVar5 = 0;
  local_70 = local_70 + 0x10;
  *param_1 = uVar2;
  pcStack_68 = FUN_004b1438;
  param_1[2] = local_70;
  param_1[6] = param_1 + 2;
  param_1[3] = FUN_004b1438;
  param_1[8] = 0;
  local_78 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_004ac87c(puVar6);
    free(puVar6);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004adf28  FUN_004adf28 =====

void FUN_004adf28(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *local_78;
  undefined *local_70;
  code *pcStack_68;
  undefined **local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_78 = (undefined8 *)FUN_00759c3c(0xf8);
  uVar2 = DAT_001b7148;
  local_78[0x1e] = 0;
  local_78[0xd] = 0;
  local_78[0xc] = 0;
  local_78[0xf] = 0;
  local_78[0xe] = 0;
  puVar6 = local_78 + 0x18;
  local_78[0x19] = 0;
  *puVar6 = 0;
  *(undefined4 *)(local_78 + 0xe) = 0x3f800000;
  local_78[1] = 0;
  *local_78 = 0;
  local_78[3] = 0;
  local_78[2] = 0;
  local_78[5] = 0;
  local_78[4] = 0;
  local_78[7] = 0;
  local_78[6] = 0;
  local_78[9] = 0;
  local_78[8] = 0;
  local_78[0xb] = 0;
  local_78[10] = 0;
  local_78[0x11] = 0;
  local_78[0x10] = 0;
  local_78[0x13] = 0;
  local_78[0x12] = 0;
  local_78[0x15] = 0;
  local_78[0x14] = 0;
  local_78[0x17] = 0;
  local_78[0x16] = 0;
  local_78[0x1b] = 0;
  local_78[0x1a] = 0;
  local_78[0x1d] = 0;
  local_78[0x1c] = 0;
  local_78[3] = uVar2;
  *puVar6 = 0;
  *(undefined1 *)(local_78 + 0x15) = 0;
  local_78[0x14] = 0;
  local_78[0x13] = 0;
  local_78[0x12] = 0;
  local_78[0x11] = 0;
  local_78[0x10] = 0;
  local_78[0xf] = 0;
  local_78[0x17] = puVar6;
  local_78[0x1c] = 0;
  local_78[0x1b] = 0;
  local_78[0x19] = 0;
  local_78[0x1a] = local_78 + 0x1b;
                    /* try { // try from 004adfc0 to 004ae01b has its CatchHandler @ 004ae09c */
  uVar2 = FUN_00583d4c(&local_78,0,0);
  uVar3 = FUN_0056cff0();
  uVar2 = FUN_00583c90(uVar2,&DAT_001baece,uVar3);
  uVar2 = FUN_00583770(uVar2,"Sigmoid");
  plVar4 = (long *)FUN_00583890(uVar2,&DAT_001c717f);
  *(undefined4 *)(*plVar4 + 0x18) = 0xd;
  puVar5 = (undefined8 *)FUN_005839b8(plVar4,"CPUExecutionProvider");
  puVar6 = local_78;
  local_70 = PTR_DAT_007a2000;
  local_50 = &local_70;
  uVar2 = *puVar5;
  *puVar5 = 0;
  local_70 = local_70 + 0x10;
  *param_1 = uVar2;
  pcStack_68 = FUN_004b1934;
  param_1[2] = local_70;
  param_1[6] = param_1 + 2;
  param_1[3] = FUN_004b1934;
  param_1[8] = 0;
  local_78 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_004ac87c(puVar6);
    free(puVar6);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ae0c4  FUN_004ae0c4 =====

void FUN_004ae0c4(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *local_78;
  undefined *local_70;
  code *pcStack_68;
  undefined **local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_78 = (undefined8 *)FUN_00759c3c(0xf8);
  uVar2 = DAT_001b7148;
  local_78[0x1e] = 0;
  local_78[0xd] = 0;
  local_78[0xc] = 0;
  local_78[0xf] = 0;
  local_78[0xe] = 0;
  puVar6 = local_78 + 0x18;
  local_78[0x19] = 0;
  *puVar6 = 0;
  *(undefined4 *)(local_78 + 0xe) = 0x3f800000;
  local_78[1] = 0;
  *local_78 = 0;
  local_78[3] = 0;
  local_78[2] = 0;
  local_78[5] = 0;
  local_78[4] = 0;
  local_78[7] = 0;
  local_78[6] = 0;
  local_78[9] = 0;
  local_78[8] = 0;
  local_78[0xb] = 0;
  local_78[10] = 0;
  local_78[0x11] = 0;
  local_78[0x10] = 0;
  local_78[0x13] = 0;
  local_78[0x12] = 0;
  local_78[0x15] = 0;
  local_78[0x14] = 0;
  local_78[0x17] = 0;
  local_78[0x16] = 0;
  local_78[0x1b] = 0;
  local_78[0x1a] = 0;
  local_78[0x1d] = 0;
  local_78[0x1c] = 0;
  local_78[3] = uVar2;
  *puVar6 = 0;
  *(undefined1 *)(local_78 + 0x15) = 0;
  local_78[0x14] = 0;
  local_78[0x13] = 0;
  local_78[0x12] = 0;
  local_78[0x11] = 0;
  local_78[0x10] = 0;
  local_78[0xf] = 0;
  local_78[0x17] = puVar6;
  local_78[0x1c] = 0;
  local_78[0x1b] = 0;
  local_78[0x19] = 0;
  local_78[0x1a] = local_78 + 0x1b;
                    /* try { // try from 004ae15c to 004ae1b7 has its CatchHandler @ 004ae238 */
  uVar2 = FUN_00583d4c(&local_78,0,0);
  uVar3 = FUN_0056cff0();
  uVar2 = FUN_00583c90(uVar2,&DAT_001baece,uVar3);
  uVar2 = FUN_00583770(uVar2,&DAT_001e3845);
  plVar4 = (long *)FUN_00583890(uVar2,&DAT_001c717f);
  *(undefined4 *)(*plVar4 + 0x18) = 0xd;
  puVar5 = (undefined8 *)FUN_005839b8(plVar4,"CPUExecutionProvider");
  puVar6 = local_78;
  local_70 = PTR_DAT_007a2000;
  local_50 = &local_70;
  uVar2 = *puVar5;
  *puVar5 = 0;
  local_70 = local_70 + 0x10;
  *param_1 = uVar2;
  pcStack_68 = FUN_004b2780;
  param_1[2] = local_70;
  param_1[6] = param_1 + 2;
  param_1[3] = FUN_004b2780;
  param_1[8] = 0;
  local_78 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_004ac87c(puVar6);
    free(puVar6);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ae260  FUN_004ae260 =====

void FUN_004ae260(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *local_78;
  undefined *local_70;
  code *pcStack_68;
  undefined **local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_78 = (undefined8 *)FUN_00759c3c(0xf8);
  uVar2 = DAT_001b7148;
  local_78[0x1e] = 0;
  local_78[0xd] = 0;
  local_78[0xc] = 0;
  local_78[0xf] = 0;
  local_78[0xe] = 0;
  puVar6 = local_78 + 0x18;
  local_78[0x19] = 0;
  *puVar6 = 0;
  *(undefined4 *)(local_78 + 0xe) = 0x3f800000;
  local_78[1] = 0;
  *local_78 = 0;
  local_78[3] = 0;
  local_78[2] = 0;
  local_78[5] = 0;
  local_78[4] = 0;
  local_78[7] = 0;
  local_78[6] = 0;
  local_78[9] = 0;
  local_78[8] = 0;
  local_78[0xb] = 0;
  local_78[10] = 0;
  local_78[0x11] = 0;
  local_78[0x10] = 0;
  local_78[0x13] = 0;
  local_78[0x12] = 0;
  local_78[0x15] = 0;
  local_78[0x14] = 0;
  local_78[0x17] = 0;
  local_78[0x16] = 0;
  local_78[0x1b] = 0;
  local_78[0x1a] = 0;
  local_78[0x1d] = 0;
  local_78[0x1c] = 0;
  local_78[3] = uVar2;
  *puVar6 = 0;
  *(undefined1 *)(local_78 + 0x15) = 0;
  local_78[0x14] = 0;
  local_78[0x13] = 0;
  local_78[0x12] = 0;
  local_78[0x11] = 0;
  local_78[0x10] = 0;
  local_78[0xf] = 0;
  local_78[0x17] = puVar6;
  local_78[0x1c] = 0;
  local_78[0x1b] = 0;
  local_78[0x19] = 0;
  local_78[0x1a] = local_78 + 0x1b;
                    /* try { // try from 004ae2f8 to 004ae353 has its CatchHandler @ 004ae3d4 */
  uVar2 = FUN_00583d4c(&local_78,0,0);
  uVar3 = FUN_0056cff0();
  uVar2 = FUN_00583c90(uVar2,&DAT_001baece,uVar3);
  uVar2 = FUN_00583770(uVar2,"LeakyRelu");
  plVar4 = (long *)FUN_00583890(uVar2,&DAT_001c717f);
  *(undefined4 *)(*plVar4 + 0x18) = 0x10;
  puVar5 = (undefined8 *)FUN_005839b8(plVar4,"CPUExecutionProvider");
  puVar6 = local_78;
  local_70 = PTR_DAT_007a2000;
  local_50 = &local_70;
  uVar2 = *puVar5;
  *puVar5 = 0;
  local_70 = local_70 + 0x10;
  *param_1 = uVar2;
  pcStack_68 = FUN_004b2930;
  param_1[2] = local_70;
  param_1[6] = param_1 + 2;
  param_1[3] = FUN_004b2930;
  param_1[8] = 0;
  local_78 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_004ac87c(puVar6);
    free(puVar6);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ae3fc  FUN_004ae3fc =====

void FUN_004ae3fc(long param_1,long param_2,long param_3)

{
  FUN_0060b6b8(*(long *)(param_1 + 8) + param_2 * 4,*(long *)(param_1 + 0x10) + param_2 * 4,
               param_3 - param_2);
  return;
}


// ===== 004ae414  FUN_004ae414 =====

void FUN_004ae414(long param_1,long param_2,long param_3)

{
  FUN_0060b8b0(*(long *)(param_1 + 8) + param_2 * 4,*(long *)(param_1 + 0x10) + param_2 * 4,
               param_3 - param_2);
  return;
}


// ===== 004ae42c  FUN_004ae42c =====

undefined8 FUN_004ae42c(void)

{
  return 0;
}


