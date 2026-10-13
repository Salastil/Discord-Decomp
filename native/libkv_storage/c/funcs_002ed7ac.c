// ===== 002ed7ac  FUN_002ed7ac =====

void FUN_002ed7ac(long param_1,long param_2,ulong param_3,int *param_4)

{
  uint uVar1;
  long lVar2;
  undefined1 auStack_60 [16];
  uint local_50;
  ushort local_4c;
  ushort local_4a;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (*param_4 == 0) {
    (**(code **)(param_1 + 0x80))(param_1,param_3,auStack_60);
    if (local_4c < local_50) {
      if ((*(ulong *)(param_2 + 0x58) < param_3) ||
         (param_3 + local_4c <= *(ulong *)(param_2 + 0x58))) {
        uVar1 = *(uint *)(param_3 + local_4a + -4);
        uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
        FUN_0025de40(*(undefined8 *)(param_1 + 0x48),uVar1 >> 0x10 | uVar1 << 0x10,3,
                     *(undefined4 *)(param_1 + 4),param_4);
      }
      else {
        sqlite3_log(0xb,"%s at line %d of [%.10s]","database corruption",0x10fac,
                    "89c459e766ea7e9165d0beeb124708b955a4950d0f4792f457465d71b158d318");
        *param_4 = 0xb;
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002ed8a4  FUN_002ed8a4 =====

int FUN_002ed8a4(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  uint *puVar9;
  char cVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  long *plVar18;
  uint uVar19;
  int iVar20;
  char *pcVar21;
  long local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  lVar17 = *(long *)(param_1 + 0x88);
  uVar7 = *(ulong *)(param_1 + 0x38);
  if ((*(ulong *)(lVar17 + 0x58) < uVar7 + *(ushort *)(param_1 + 0x44)) ||
     (uVar7 < *(long *)(lVar17 + 0x50) + (ulong)*(ushort *)(lVar17 + 0x12))) {
    iVar5 = 0xb;
    sqlite3_log(0xb,"%s at line %d of [%.10s]","database corruption",0x12cc4,
                "89c459e766ea7e9165d0beeb124708b955a4950d0f4792f457465d71b158d318");
  }
  else {
    iVar20 = *(int *)(param_2 + 0x24);
    iVar2 = *(int *)(param_2 + 0x28);
    iVar5 = FUN_002edb24(lVar17,uVar7,param_2,0);
    if (iVar5 == 0) {
      uVar3 = *(ushort *)(param_1 + 0x44);
      uVar16 = (uint)uVar3;
      uVar1 = iVar2 + iVar20;
      if (uVar1 == uVar3) {
        iVar5 = 0;
      }
      else {
        plVar18 = *(long **)(lVar17 + 0x48);
        uVar19 = *(uint *)(*(long *)(param_1 + 0x38) + (ulong)(uint)uVar3);
        uVar19 = (uVar19 & 0xff00ff00) >> 8 | (uVar19 & 0xff00ff) << 8;
        uVar19 = uVar19 >> 0x10 | uVar19 << 0x10;
        iVar20 = (int)plVar18[7] + -4;
        while (iVar5 = (**(code **)(*plVar18 + 0x110))(*plVar18,uVar19,&local_70,0), iVar5 == 0) {
          pcVar21 = *(char **)(local_70 + 0x10);
          if (*(uint *)(pcVar21 + 4) == uVar19) {
            lVar17 = *(long *)(pcVar21 + 0x70);
          }
          else {
            uVar6 = *(undefined8 *)(local_70 + 8);
            *(long *)(pcVar21 + 0x70) = local_70;
            *(uint *)(pcVar21 + 4) = uVar19;
            *(long **)(pcVar21 + 0x48) = plVar18;
            *(undefined8 *)(pcVar21 + 0x50) = uVar6;
            cVar10 = 'd';
            if (uVar19 != 1) {
              cVar10 = '\0';
            }
            pcVar21[9] = cVar10;
            lVar17 = local_70;
          }
          if ((*(short *)(lVar17 + 0x36) == 1) && (*pcVar21 == '\0')) {
            if (iVar20 + uVar16 < uVar1) {
              puVar9 = *(uint **)(pcVar21 + 0x50);
              uVar19 = (*puVar9 & 0xff00ff00) >> 8 | (*puVar9 & 0xff00ff) << 8;
              uVar19 = uVar19 >> 0x10 | uVar19 << 0x10;
            }
            else {
              puVar9 = *(uint **)(pcVar21 + 0x50);
              iVar20 = uVar1 - uVar16;
            }
            iVar5 = FUN_002edb24(pcVar21,puVar9 + 1,param_2,uVar16,iVar20);
            lVar17 = *(long *)(pcVar21 + 0x70);
          }
          else {
            iVar5 = 0xb;
            sqlite3_log(0xb,"%s at line %d of [%.10s]","database corruption",0x12cd7,
                        "89c459e766ea7e9165d0beeb124708b955a4950d0f4792f457465d71b158d318");
            lVar17 = *(long *)(pcVar21 + 0x70);
          }
          if (lVar17 != 0) {
            if ((*(ushort *)(lVar17 + 0x34) >> 5 & 1) == 0) {
              FUN_0024ac68();
            }
            else {
              lVar11 = *(long *)(lVar17 + 0x28);
              iVar2 = *(int *)(lVar17 + 0x30);
              uVar6 = *(undefined8 *)(lVar17 + 8);
              lVar13 = *(long *)(lVar11 + 200);
              plVar8 = *(long **)(lVar11 + 0x48);
              lVar15 = *plVar8;
              uVar14 = *(undefined8 *)(lVar11 + 0xa8);
              *(int *)(lVar11 + 0x98) = *(int *)(lVar11 + 0x98) + -1;
              pcVar12 = *(code **)(lVar15 + 0x90);
              *(long *)(lVar11 + 0xa8) = lVar17;
              *(undefined8 *)(lVar17 + 0x20) = uVar14;
              (*pcVar12)(plVar8,lVar13 * (ulong)(iVar2 - 1),uVar6);
            }
          }
          if ((iVar5 != 0) || (uVar16 = iVar20 + uVar16, (int)uVar1 <= (int)uVar16)) break;
        }
      }
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar5;
}


// ===== 002edb24  FUN_002edb24 =====

ulong FUN_002edb24(long param_1,void *param_2,long param_3,int param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  iVar2 = *(int *)(param_3 + 0x24);
  uVar1 = iVar2 - param_4;
  if (uVar1 == 0 || iVar2 < param_4) {
    if ((int)param_5 < 1) {
      return 0;
    }
    uVar3 = 0;
    while (*(char *)((long)param_2 + uVar3) == '\0') {
      uVar3 = uVar3 + 1;
      if (param_5 == uVar3) {
        return 0;
      }
    }
    lVar7 = *(long *)(param_1 + 0x70);
    lVar5 = *(long *)(lVar7 + 0x28);
    if (((*(ushort *)(lVar7 + 0x34) >> 2 & 1) == 0) ||
       (*(uint *)(lVar5 + 0x20) < *(uint *)(lVar7 + 0x30))) {
      if (*(uint *)(lVar5 + 0x30) != 0) {
        return (ulong)*(uint *)(lVar5 + 0x30);
      }
      if (*(uint *)(lVar5 + 200) < *(uint *)(lVar5 + 0xb8)) {
        uVar4 = FUN_0024f748();
      }
      else {
        uVar4 = FUN_0024fb20(lVar7);
      }
    }
    else {
      if (*(int *)(lVar5 + 0x80) == 0) goto LAB_002edca0;
      uVar4 = FUN_0024f40c(lVar7);
    }
    if ((int)uVar4 != 0) {
      return uVar4;
    }
LAB_002edca0:
    memset((void *)((long)param_2 + uVar3),0,(long)(int)(param_5 - (int)uVar3));
    return 0;
  }
  if ((param_5 - uVar1 != 0 && (int)uVar1 <= (int)param_5) &&
     (uVar3 = FUN_002edb24(param_1,(long)param_2 + (ulong)uVar1,param_3,iVar2,param_5 - uVar1),
     param_5 = uVar1, (int)uVar3 != 0)) {
    return uVar3;
  }
  lVar7 = *(long *)(param_3 + 0x10);
  uVar1 = memcmp(param_2,(void *)(lVar7 + param_4),(long)(int)param_5);
  if (uVar1 == 0) {
    return (ulong)uVar1;
  }
  lVar5 = *(long *)(param_1 + 0x70);
  lVar6 = *(long *)(lVar5 + 0x28);
  if (((*(ushort *)(lVar5 + 0x34) >> 2 & 1) == 0) ||
     (*(uint *)(lVar6 + 0x20) < *(uint *)(lVar5 + 0x30))) {
    if (*(uint *)(lVar6 + 0x30) != 0) {
      return (ulong)*(uint *)(lVar6 + 0x30);
    }
    if (*(uint *)(lVar6 + 200) < *(uint *)(lVar6 + 0xb8)) {
      uVar3 = FUN_0024f748();
      iVar2 = (int)uVar3;
    }
    else {
      uVar3 = FUN_0024fb20(lVar5);
      iVar2 = (int)uVar3;
    }
  }
  else {
    if (*(int *)(lVar6 + 0x80) == 0) goto LAB_002edc70;
    uVar3 = FUN_0024f40c(lVar5);
    iVar2 = (int)uVar3;
  }
  if (iVar2 != 0) {
    return uVar3;
  }
  lVar7 = *(long *)(param_3 + 0x10);
LAB_002edc70:
  memmove(param_2,(void *)(lVar7 + param_4),(long)(int)param_5);
  return 0;
}


// ===== 002edccc  FUN_002edccc =====

void FUN_002edccc(long param_1,undefined8 param_2,int param_3,long *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  short sVar9;
  code *pcVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined1 auStack_88 [16];
  uint local_78;
  ushort local_74;
  long local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (*(uint *)(param_1 + 0x40) < (uint)param_2) {
    sqlite3_log(0xb,"%s at line %d of [%.10s]","database corruption",0x13031,
                "89c459e766ea7e9165d0beeb124708b955a4950d0f4792f457465d71b158d318");
    uVar6 = 0xb;
    goto LAB_002edfa8;
  }
  uVar6 = FUN_002d212c(param_1,param_2,&local_70,0,0);
  if ((int)uVar6 != 0) goto LAB_002edfa8;
  if ((*(byte *)(param_1 + 0x20) >> 2 & 1) == 0) {
    sVar9 = 1;
    if ((uint)param_2 == 1) {
      sVar9 = 2;
    }
    if (sVar9 == *(short *)(*(long *)(local_70 + 0x70) + 0x36)) goto LAB_002edd80;
    sqlite3_log(0xb,"%s at line %d of [%.10s]","database corruption",0x13038,
                "89c459e766ea7e9165d0beeb124708b955a4950d0f4792f457465d71b158d318");
    uVar5 = 0xb;
  }
  else {
LAB_002edd80:
    uVar6 = (ulong)*(ushort *)(local_70 + 0x18);
    bVar3 = *(byte *)(local_70 + 9);
    if (*(ushort *)(local_70 + 0x18) != 0) {
      lVar14 = 0;
      uVar15 = 0;
      do {
        lVar16 = *(long *)(local_70 + 0x50);
        puVar1 = (undefined1 *)(*(long *)(local_70 + 0x60) + lVar14);
        uVar6 = (ulong)(CONCAT11(*puVar1,puVar1[1]) & *(ushort *)(local_70 + 0x1a));
        if (((*(char *)(local_70 + 8) == '\0') &&
            (uVar5 = (*(uint *)(lVar16 + uVar6) & 0xff00ff00) >> 8 |
                     (*(uint *)(lVar16 + uVar6) & 0xff00ff) << 8,
            uVar5 = FUN_002edccc(param_1,uVar5 >> 0x10 | uVar5 << 0x10,1,param_4), uVar5 != 0)) ||
           (((**(code **)(local_70 + 0x80))(local_70,lVar16 + uVar6,auStack_88),
            local_78 != local_74 &&
            (uVar5 = FUN_002e9740(local_70,lVar16 + uVar6,auStack_88), uVar5 != 0))))
        goto LAB_002edf48;
        uVar6 = (ulong)*(ushort *)(local_70 + 0x18);
        uVar15 = uVar15 + 1;
        lVar14 = lVar14 + 2;
      } while (uVar15 < uVar6);
    }
    if (*(char *)(local_70 + 8) == '\0') {
      uVar5 = *(uint *)(*(long *)(local_70 + 0x50) + (ulong)bVar3 + 8);
      uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
      uVar5 = FUN_002edccc(param_1,uVar5 >> 0x10 | uVar5 << 0x10,1,param_4);
      if (uVar5 != 0) goto LAB_002edf48;
      if ((param_4 != (long *)0x0) && (*(char *)(local_70 + 1) == '\0')) {
        uVar6 = (ulong)*(ushort *)(local_70 + 0x18);
        goto LAB_002ede3c;
      }
    }
    else if (param_4 != (long *)0x0) {
LAB_002ede3c:
      *param_4 = *param_4 + uVar6;
    }
    if (param_3 == 0) {
      lVar14 = *(long *)(local_70 + 0x70);
      lVar16 = *(long *)(lVar14 + 0x28);
      if (((*(ushort *)(lVar14 + 0x34) >> 2 & 1) == 0) ||
         (*(uint *)(lVar16 + 0x20) < *(uint *)(lVar14 + 0x30))) {
        uVar5 = *(uint *)(lVar16 + 0x30);
        if (uVar5 == 0) {
          if (*(uint *)(lVar16 + 200) < *(uint *)(lVar16 + 0xb8)) {
            uVar5 = FUN_0024f748();
          }
          else {
            uVar5 = FUN_0024fb20(lVar14);
          }
          goto LAB_002edf2c;
        }
      }
      else {
        if (*(int *)(lVar16 + 0x80) != 0) {
          uVar5 = FUN_0024f40c(lVar14);
LAB_002edf2c:
          if (uVar5 != 0) goto LAB_002edf48;
        }
        FUN_0024fe8c(local_70,*(byte *)(*(long *)(local_70 + 0x50) + (ulong)bVar3) | 8);
        uVar5 = 0;
      }
    }
    else {
      uVar5 = FUN_002e4928(*(undefined8 *)(local_70 + 0x48),local_70,*(undefined4 *)(local_70 + 4));
    }
  }
LAB_002edf48:
  uVar6 = (ulong)uVar5;
  lVar14 = *(long *)(local_70 + 0x70);
  if ((*(ushort *)(lVar14 + 0x34) >> 5 & 1) == 0) {
    FUN_0024ac68();
  }
  else {
    lVar16 = *(long *)(lVar14 + 0x28);
    iVar2 = *(int *)(lVar14 + 0x30);
    uVar7 = *(undefined8 *)(lVar14 + 8);
    lVar11 = *(long *)(lVar16 + 200);
    plVar8 = *(long **)(lVar16 + 0x48);
    lVar13 = *plVar8;
    uVar12 = *(undefined8 *)(lVar16 + 0xa8);
    *(int *)(lVar16 + 0x98) = *(int *)(lVar16 + 0x98) + -1;
    pcVar10 = *(code **)(lVar13 + 0x90);
    *(long *)(lVar16 + 0xa8) = lVar14;
    *(undefined8 *)(lVar14 + 0x20) = uVar12;
    (*pcVar10)(plVar8,lVar11 * (ulong)(iVar2 - 1),uVar7);
  }
LAB_002edfa8:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}


// ===== 002edfdc  FUN_002edfdc =====

undefined8 FUN_002edfdc(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00237a40(*(undefined4 *)(param_1 + 0x34));
  *(undefined8 **)(param_1 + 0x88) = puVar1;
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar2 = 7;
    *(undefined8 *)(param_1 + 0x10) = puVar1[5];
    puVar1[0x24] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar1[0xd] = 0;
    puVar1[0xc] = 0;
    puVar1[0xf] = 0;
    puVar1[0xe] = 0;
    puVar1[0x11] = 0;
    puVar1[0x10] = 0;
    puVar1[0x13] = 0;
    puVar1[0x12] = 0;
    puVar1[0x15] = 0;
    puVar1[0x14] = 0;
    puVar1[0x17] = 0;
    puVar1[0x16] = 0;
    puVar1[0x19] = 0;
    puVar1[0x18] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1d] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1f] = 0;
    puVar1[0x1e] = 0;
    puVar1[0x21] = 0;
    puVar1[0x20] = 0;
    puVar1[0x23] = 0;
    puVar1[0x22] = 0;
  }
  else {
    uVar2 = 0;
    *puVar1 = 0;
    *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + 4;
  }
  return uVar2;
}


// ===== 002ee060  FUN_002ee060 =====

undefined4 FUN_002ee060(long param_1,undefined8 *param_2,uint param_3,int param_4)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  uint uVar15;
  
  plVar5 = *(long **)(param_1 + 0x1b8);
  if (plVar5 != (long *)0x0) {
    uVar7 = 0xffffffff;
    do {
      plVar5 = (long *)*plVar5;
      uVar7 = uVar7 + 1;
    } while (plVar5 != (long *)0x0);
    plVar5 = (long *)(ulong)~uVar7;
  }
  plVar8 = *(long **)(param_1 + 0x1c0);
  if (plVar8 != (long *)0x0) {
    uVar7 = 0xffffffff;
    do {
      plVar8 = (long *)*plVar8;
      uVar7 = uVar7 + 1;
    } while (plVar8 != (long *)0x0);
    plVar8 = (long *)(ulong)~uVar7;
  }
  plVar10 = *(long **)(param_1 + 0x1c8);
  if (plVar10 != (long *)0x0) {
    uVar7 = 0xffffffff;
    do {
      plVar10 = (long *)*plVar10;
      uVar7 = uVar7 + 1;
    } while (plVar10 != (long *)0x0);
    plVar10 = (long *)(ulong)~uVar7;
  }
  plVar11 = *(long **)(param_1 + 0x1d0);
  if (plVar11 != (long *)0x0) {
    uVar7 = 0xffffffff;
    do {
      plVar11 = (long *)*plVar11;
      uVar7 = uVar7 + 1;
    } while (plVar11 != (long *)0x0);
    plVar11 = (long *)(ulong)~uVar7;
  }
  if (0 < (int)plVar8 + (int)plVar5 + *(int *)(param_1 + 0x1a4) + (int)plVar10 + (int)plVar11) {
    return 5;
  }
  if ((*(char *)(param_1 + 0x1a0) != '\0') && (lVar13 = *(long *)(param_1 + 0x1e0), lVar13 != 0)) {
    puVar6 = &DAT_00313858;
    if (DAT_00313830 != 0) {
      if (DAT_00316f08 != 0) {
        (*DAT_003138b0)();
      }
      iVar3 = (*DAT_00313868)(lVar13);
      DAT_00316e60 = DAT_00316e60 - iVar3;
      DAT_00316ea8 = DAT_00316ea8 + -1;
      (*DAT_00313858)(lVar13);
      if (DAT_00316f08 == 0) goto LAB_002ee1cc;
      puVar6 = &DAT_003138c0;
      lVar13 = DAT_00316f08;
    }
    (*(code *)*puVar6)(lVar13);
  }
LAB_002ee1cc:
  uVar7 = param_3 & 0xfffffff8;
  uVar15 = 0;
  if (8 < (int)uVar7) {
    uVar15 = uVar7;
  }
  if (((int)uVar7 < 9) || (param_4 < 1)) {
    *(undefined2 *)(param_1 + 0x19e) = 0;
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    *(undefined8 *)(param_1 + 0x1c0) = 0;
  }
  else {
    lVar13 = (long)param_4 * (long)(int)param_3;
    if (param_2 == (undefined8 *)0x0) {
      if (DAT_00317330 != (code *)0x0) {
        (*DAT_00317330)();
      }
      puVar6 = (undefined8 *)FUN_0022a6ac(lVar13);
      if (DAT_00317338 != (code *)0x0) {
        (*DAT_00317338)();
      }
      if (puVar6 != (undefined8 *)0x0) {
        iVar3 = (*DAT_00313868)(puVar6);
        lVar13 = (long)iVar3;
      }
      if (uVar15 < 0x180) goto LAB_002ee284;
LAB_002ee1f8:
      iVar4 = 0;
      if ((ulong)(uVar15 + 0x180) != 0) {
        iVar4 = (int)(lVar13 / (long)(ulong)(uVar15 + 0x180));
      }
      uVar9 = lVar13 - (int)(uVar15 * iVar4);
      uVar1 = uVar9 + 0x7f;
      if (-1 < (long)uVar9) {
        uVar1 = uVar9;
      }
      iVar3 = (int)(uVar1 >> 7);
      uVar15 = uVar7;
    }
    else {
      puVar6 = param_2;
      if (0x17f < uVar15) goto LAB_002ee1f8;
LAB_002ee284:
      if (uVar15 < 0x100) {
        iVar3 = 0;
        iVar4 = 0;
        if ((ulong)uVar15 != 0) {
          iVar4 = (int)(lVar13 / (long)(ulong)uVar15);
        }
      }
      else {
        iVar4 = 0;
        if ((ulong)(uVar15 + 0x80) != 0) {
          iVar4 = (int)(lVar13 / (long)(ulong)(uVar15 + 0x80));
        }
        uVar9 = lVar13 - (int)(uVar15 * iVar4);
        uVar1 = uVar9 + 0x7f;
        if (-1 < (long)uVar9) {
          uVar1 = uVar9;
        }
        iVar3 = (int)(uVar1 >> 7);
        uVar15 = uVar7;
      }
    }
    *(undefined8 **)(param_1 + 0x1e0) = puVar6;
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    *(undefined8 *)(param_1 + 0x1c0) = 0;
    *(short *)(param_1 + 0x19c) = (short)uVar15;
    *(short *)(param_1 + 0x19e) = (short)uVar15;
    if (puVar6 != (undefined8 *)0x0) {
      if (0 < iVar4) {
        puVar12 = (undefined8 *)0x0;
        puVar14 = puVar6;
        iVar2 = iVar4;
        do {
          iVar2 = iVar2 + -1;
          *puVar14 = puVar12;
          puVar6 = (undefined8 *)((long)puVar14 + (ulong)uVar15);
          puVar12 = puVar14;
          puVar14 = puVar6;
        } while (iVar2 != 0);
        *(ulong *)(param_1 + 0x1b8) = (long)puVar6 - (ulong)uVar15;
      }
      *(undefined8 *)(param_1 + 0x1c8) = 0;
      *(undefined8 *)(param_1 + 0x1d0) = 0;
      *(undefined8 **)(param_1 + 0x1d8) = puVar6;
      if (0 < iVar3) {
        puVar12 = (undefined8 *)0x0;
        iVar2 = iVar3;
        do {
          puVar14 = puVar6;
          iVar2 = iVar2 + -1;
          puVar6 = puVar14 + 0x10;
          *puVar14 = puVar12;
          puVar12 = puVar14;
        } while (iVar2 != 0);
        *(undefined8 **)(param_1 + 0x1c8) = puVar14;
      }
      iVar3 = iVar3 + iVar4;
      *(undefined8 **)(param_1 + 0x1e8) = puVar6;
      *(undefined4 *)(param_1 + 0x198) = 0;
      *(bool *)(param_1 + 0x1a0) = param_2 == (undefined8 *)0x0;
      goto LAB_002ee374;
    }
  }
  puVar6 = (undefined8 *)0x0;
  iVar3 = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x198) = 1;
  *(undefined2 *)(param_1 + 0x19c) = 0;
  *(undefined1 *)(param_1 + 0x1a0) = 0;
LAB_002ee374:
  *(int *)(param_1 + 0x1a4) = iVar3;
  *(undefined8 **)(param_1 + 0x1f0) = puVar6;
  return 0;
}


// ===== 002ee39c  FUN_002ee39c =====

void FUN_002ee39c(undefined8 param_1,long param_2,byte *param_3)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  long local_1d8;
  long local_1d0;
  undefined8 uStack_1c8;
  ulong local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
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
  undefined8 local_d8;
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
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((param_3 != (byte *)0x0) &&
     (uVar6 = (ulong)(*(int *)(param_2 + 0x28) - 1), 0 < *(int *)(param_2 + 0x28))) {
    lVar5 = *(long *)(param_2 + 0x20);
    puVar7 = (undefined8 *)(lVar5 + uVar6 * 0x20);
    do {
      pbVar8 = (byte *)*puVar7;
      iVar3 = (int)uVar6;
      pbVar9 = param_3;
      if (pbVar8 != (byte *)0x0) {
        do {
          bVar1 = *pbVar8;
          if (bVar1 == *pbVar9) {
            if (bVar1 == 0) {
              if (iVar3 != 1) {
                if (-1 < iVar3) goto LAB_002ee580;
                goto LAB_002ee548;
              }
              local_40 = 0;
              local_100 = 0;
              uStack_b8 = 0;
              local_c0 = 0;
              uStack_a8 = 0;
              uStack_b0 = 0;
              uStack_98 = 0;
              local_a0 = 0;
              uStack_88 = 0;
              uStack_90 = 0;
              uStack_78 = 0;
              local_80 = 0;
              uStack_68 = 0;
              uStack_70 = 0;
              uStack_58 = 0;
              local_60 = 0;
              uStack_48 = 0;
              uStack_50 = 0;
              local_d8 = *(undefined8 *)(param_2 + 0x158);
              uStack_108 = 0;
              local_110 = 0;
              uStack_118 = 0;
              local_120 = 0;
              uStack_128 = 0;
              local_130 = 0;
              uStack_138 = 0;
              local_140 = 0;
              uStack_148 = 0;
              local_150 = 0;
              uStack_1c8 = 0;
              local_1d0 = 0;
              uStack_1b8 = 0;
              local_1c0 = 0;
              uStack_1a8 = 0;
              local_1b0 = 0;
              uStack_198 = 0;
              uStack_1a0 = 0;
              uStack_188 = 0;
              local_190 = 0;
              uStack_178 = 0;
              uStack_180 = 0;
              uStack_168 = 0;
              local_170 = 0;
              uStack_158 = 0;
              uStack_160 = 0;
              *(long **)(param_2 + 0x158) = &local_1d8;
              local_1d8 = param_2;
              if (*(char *)(param_2 + 0x67) != '\0') {
                FUN_0022aac0(&local_1d8,"out of memory");
              }
              iVar3 = FUN_00296d4c(&local_1d8);
              if (iVar3 == 0) {
                if (local_1d0 != 0) {
                  FUN_0022a888(param_1);
                }
                FUN_0024cf4c(&local_1d8);
                lVar5 = *(long *)(param_2 + 0x20);
                uVar6 = 1;
                goto LAB_002ee580;
              }
              FUN_0024b53c(param_1,local_1c0 & 0xffffffff,&DAT_001716ae,local_1d0);
              if (local_1d0 != 0) {
                FUN_0022a888(param_1);
              }
              FUN_0024cf4c(&local_1d8);
              goto LAB_002ee558;
            }
          }
          else if ((&DAT_0017d228)[bVar1] != (&DAT_0017d228)[*pbVar9]) break;
          pbVar8 = pbVar8 + 1;
          pbVar9 = pbVar9 + 1;
        } while( true );
      }
      pbVar8 = param_3;
      pbVar9 = &DAT_00171f77;
      if (iVar3 == 0) {
        do {
          bVar1 = *pbVar9;
          if (bVar1 == *pbVar8) {
            if (bVar1 == 0) {
              uVar6 = 0;
LAB_002ee580:
              uVar4 = *(undefined8 *)(lVar5 + uVar6 * 0x20 + 8);
              goto LAB_002ee58c;
            }
          }
          else if ((&DAT_0017d228)[bVar1] != (&DAT_0017d228)[*pbVar8]) break;
          pbVar8 = pbVar8 + 1;
          pbVar9 = pbVar9 + 1;
        } while( true );
      }
      uVar6 = (ulong)(iVar3 - 1);
      puVar7 = puVar7 + -4;
    } while (0 < iVar3);
  }
LAB_002ee548:
  FUN_0024b53c(param_1,1,"unknown database %s");
LAB_002ee558:
  uVar4 = 0;
LAB_002ee58c:
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


// ===== 002ee5b4  FUN_002ee5b4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002ee5b4(undefined8 param_1,undefined8 *param_2,uint param_3,undefined8 param_4)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  ulong uVar8;
  char *pcVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  code *pcVar13;
  long lVar14;
  undefined4 uVar15;
  char *pcVar16;
  int iVar17;
  char cVar18;
  long *local_88;
  char *local_80;
  char *local_78;
  uint local_6c;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  local_80 = (char *)0x0;
  local_78 = (char *)0x0;
  *param_2 = 0;
  uVar8 = sqlite3_initialize();
  if ((int)uVar8 != 0) goto LAB_002ee9b0;
  cVar18 = '\0';
  if ((((param_3 >> 0xf & 1) == 0) && (DAT_00313834 != '\0')) &&
     (cVar18 = DAT_00313835, (param_3 >> 0x10 & 1) != 0)) {
    cVar18 = '\x01';
    if ((param_3 >> 0x12 & 1) != 0) goto LAB_002ee644;
LAB_002ee624:
    if (DAT_0031397c != 0) {
      param_3 = param_3 | 0x20000;
    }
  }
  else {
    if ((param_3 >> 0x12 & 1) == 0) goto LAB_002ee624;
LAB_002ee644:
    param_3 = param_3 & 0xfffdffff;
  }
  local_6c = param_3 & 0xfff600e7;
  pcVar9 = (char *)FUN_0022a6ac(0x308);
  if (pcVar9 == (char *)0x0) {
LAB_002ee8dc:
    uVar8 = 7;
LAB_002ee8e0:
    FUN_002d4bc8(pcVar9,0);
    pcVar9 = (char *)0x0;
  }
  else {
    memset(pcVar9,0,0x308);
    if (cVar18 != '\0') {
      if (DAT_00313834 != '\0') {
        lVar10 = (*DAT_003138a0)(1);
        *(long *)(pcVar9 + 0x18) = lVar10;
        if (lVar10 != 0) {
          (*DAT_003138b0)();
          uVar8 = *(ulong *)(pcVar9 + 0x30);
          goto LAB_002ee74c;
        }
      }
      puVar12 = &DAT_00313858;
      if (DAT_00313830 != 0) {
        if (DAT_00316f08 != (char *)0x0) {
          (*DAT_003138b0)();
        }
        iVar7 = (*DAT_00313868)(pcVar9);
        DAT_00316e60 = DAT_00316e60 - iVar7;
        DAT_00316ea8 = DAT_00316ea8 + -1;
        (*DAT_00313858)(pcVar9);
        pcVar9 = DAT_00316f08;
        if (DAT_00316f08 == (char *)0x0) goto LAB_002ee8dc;
        puVar12 = &DAT_003138c0;
      }
      (*(code *)*puVar12)(pcVar9);
      pcVar9 = (char *)0x0;
      goto LAB_002ee8dc;
    }
    uVar8 = 0;
LAB_002ee74c:
    uVar6 = _DAT_0017da0c;
    uVar5 = _UNK_0017da04;
    uVar4 = _DAT_0017d9fc;
    local_88 = (long *)(pcVar9 + 0x18);
    uVar11 = CONCAT44(_DAT_0017da18,_UNK_0017da14);
    uVar15 = 0xff;
    if ((param_3 & 0x2000000) != 0) {
      uVar15 = 0xffffffff;
    }
    pcVar9[0x6a] = -1;
    *(undefined4 *)(pcVar9 + 0x58) = uVar15;
    *(undefined8 *)(pcVar9 + 0x90) = uVar5;
    *(undefined8 *)(pcVar9 + 0x88) = uVar4;
    uVar5 = _UNK_0017da20;
    uVar4 = CONCAT44(_UNK_0017da1c,_DAT_0017da18);
    *(undefined8 *)(pcVar9 + 0xa0) = uVar11;
    *(undefined8 *)(pcVar9 + 0x98) = uVar6;
    *(undefined8 *)(pcVar9 + 0xac) = uVar5;
    *(undefined8 *)(pcVar9 + 0xa4) = uVar4;
    uVar11 = DAT_00313958;
    pcVar9[0x28] = '\x02';
    pcVar9[0x29] = '\0';
    pcVar9[0x2a] = '\0';
    pcVar9[0x2b] = '\0';
    pcVar9[0x71] = 'm';
    *(undefined8 *)(pcVar9 + 0x40) = uVar11;
    *(ulong *)(pcVar9 + 0x30) = uVar8 | 0xe00480e0;
    *(char **)(pcVar9 + 0x20) = pcVar9 + 0x298;
    pcVar9[0x198] = '\x01';
    pcVar9[0x199] = '\0';
    pcVar9[0x19a] = '\0';
    pcVar9[0x19b] = '\0';
    pcVar9[0x19c] = '\0';
    pcVar9[0x19d] = '\0';
    pcVar9[0xb4] = '\0';
    pcVar9[0xb5] = '\0';
    pcVar9[0xb6] = '\0';
    pcVar9[0xb7] = '\0';
    pcVar9[0x65] = '\x01';
    pcVar9[0x74] = '\0';
    pcVar9[0x75] = '\0';
    pcVar9[0x76] = '\0';
    pcVar9[0x77] = '\0';
    *(undefined ***)(pcVar9 + 200) = &PTR_DAT_00313f98;
    pcVar9[0x278] = '\0';
    pcVar9[0x279] = '\0';
    pcVar9[0x27a] = '\0';
    pcVar9[0x27b] = '\0';
    pcVar9[0x27c] = '\0';
    pcVar9[0x27d] = '\0';
    pcVar9[0x27e] = '\0';
    pcVar9[0x27f] = '\0';
    pcVar9[0x270] = '\0';
    pcVar9[0x271] = '\0';
    pcVar9[0x272] = '\0';
    pcVar9[0x273] = '\0';
    pcVar9[0x274] = '\0';
    pcVar9[0x275] = '\0';
    pcVar9[0x276] = '\0';
    pcVar9[0x277] = '\0';
    pcVar9[0x268] = '\0';
    pcVar9[0x269] = '\0';
    pcVar9[0x26a] = '\0';
    pcVar9[0x26b] = '\0';
    pcVar9[0x26c] = '\0';
    pcVar9[0x26d] = '\0';
    pcVar9[0x26e] = '\0';
    pcVar9[0x26f] = '\0';
    pcVar9[0x230] = '\0';
    pcVar9[0x231] = '\0';
    pcVar9[0x232] = '\0';
    pcVar9[0x233] = '\0';
    pcVar9[0x234] = '\0';
    pcVar9[0x235] = '\0';
    pcVar9[0x236] = '\0';
    pcVar9[0x237] = '\0';
    pcVar9[0x228] = '\0';
    pcVar9[0x229] = '\0';
    pcVar9[0x22a] = '\0';
    pcVar9[0x22b] = '\0';
    pcVar9[0x22c] = '\0';
    pcVar9[0x22d] = '\0';
    pcVar9[0x22e] = '\0';
    pcVar9[0x22f] = '\0';
    pcVar9[0x220] = '\0';
    pcVar9[0x221] = '\0';
    pcVar9[0x222] = '\0';
    pcVar9[0x223] = '\0';
    pcVar9[0x224] = '\0';
    pcVar9[0x225] = '\0';
    pcVar9[0x226] = '\0';
    pcVar9[0x227] = '\0';
    FUN_002eede0(pcVar9,"BINARY",1,0,FUN_002bd0ac,0);
    FUN_002eede0(pcVar9,"BINARY",3,0,FUN_002bd0ac,0);
    FUN_002eede0(pcVar9,"BINARY",2,0,FUN_002bd0ac,0);
    FUN_002eede0(pcVar9,"NOCASE",1,0,FUN_002ef194,0);
    FUN_002eede0(pcVar9,"RTRIM",1,0,FUN_002ef21c,0);
    if (pcVar9[0x67] != '\0') goto LAB_002ee8a0;
    *(uint *)(pcVar9 + 0x4c) = param_3 & 0xfff600e7;
    if ((1 << (ulong)(param_3 & 7) & 0x46U) == 0) {
      iVar7 = 0x15;
      sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2aeb9,
                  "89c459e766ea7e9165d0beeb124708b955a4950d0f4792f457465d71b158d318");
LAB_002eeae4:
      pcVar16 = local_80;
      puVar2 = (undefined *)0x0;
      if (local_80 != (char *)0x0) {
        puVar2 = &DAT_001716ae;
      }
      FUN_0024b53c(pcVar9,iVar7,puVar2,local_80);
      if (pcVar16 != (char *)0x0) {
        puVar12 = &DAT_00313858;
        if (DAT_00313830 != 0) {
          if (DAT_00316f08 != (char *)0x0) {
            (*DAT_003138b0)();
          }
          iVar7 = (*DAT_00313868)(pcVar16);
          DAT_00316e60 = DAT_00316e60 - iVar7;
          DAT_00316ea8 = DAT_00316ea8 + -1;
          (*DAT_00313858)(pcVar16);
          if (DAT_00316f08 == (char *)0x0) goto LAB_002ee8a0;
          puVar12 = &DAT_003138c0;
          pcVar16 = DAT_00316f08;
        }
        pcVar13 = (code *)*puVar12;
        goto LAB_002eeb88;
      }
    }
    else {
      iVar7 = FUN_0029e200(param_4,param_1,&local_6c,pcVar9,&local_78,&local_80);
      if (iVar7 != 0) {
        if (iVar7 == 7) {
          if ((pcVar9[0x67] == '\0') && (pcVar9[0x68] == '\0')) {
            pcVar9[0x67] = '\x01';
            if (0 < *(int *)(pcVar9 + 0xdc)) {
              pcVar9[400] = '\x01';
              pcVar9[0x191] = '\0';
              pcVar9[0x192] = '\0';
              pcVar9[0x193] = '\0';
            }
            iVar7 = 7;
            pcVar9[0x19c] = '\0';
            pcVar9[0x19d] = '\0';
            *(int *)(pcVar9 + 0x198) = *(int *)(pcVar9 + 0x198) + 1;
            if (*(long *)(pcVar9 + 0x158) != 0) {
              FUN_0022aac0(*(long *)(pcVar9 + 0x158),"out of memory");
              lVar10 = *(long *)(*(long *)(pcVar9 + 0x158) + 0x100);
              *(undefined4 *)(*(long *)(pcVar9 + 0x158) + 0x18) = 7;
              for (; lVar10 != 0; lVar10 = *(long *)(lVar10 + 0x100)) {
                *(undefined4 *)(lVar10 + 0x18) = 7;
                *(int *)(lVar10 + 0x30) = *(int *)(lVar10 + 0x30) + 1;
              }
            }
          }
          else {
            iVar7 = 7;
          }
        }
        goto LAB_002eeae4;
      }
      iVar7 = FUN_002981e8(*(undefined8 *)pcVar9,local_78,pcVar9,*(long *)(pcVar9 + 0x20) + 8,0,
                           local_6c | 0x100);
      if (iVar7 != 0) {
        iVar17 = 7;
        if (iVar7 != 0xc0a) {
          iVar17 = iVar7;
        }
        *(int *)(pcVar9 + 0x50) = iVar17;
        FUN_0023e358(pcVar9);
        goto LAB_002ee8a0;
      }
      FUN_002ef2a4(*(undefined8 *)(*(long *)(pcVar9 + 0x20) + 8));
      lVar10 = FUN_0029ea98(pcVar9,*(undefined8 *)(*(long *)(pcVar9 + 0x20) + 8));
      lVar14 = *(long *)(pcVar9 + 0x20);
      cVar18 = pcVar9[0x67];
      *(long *)(lVar14 + 0x18) = lVar10;
      if (cVar18 == '\0') {
        FUN_002a14f8(pcVar9,*(undefined1 *)(lVar10 + 0x71));
        lVar14 = *(long *)(pcVar9 + 0x20);
      }
      lVar10 = *(long *)(lVar14 + 8);
      if ((*(char *)(lVar10 + 0x11) != '\0') &&
         (iVar7 = *(int *)(lVar10 + 0x14) + -1, *(int *)(lVar10 + 0x14) = iVar7, iVar7 == 0)) {
        FUN_0022eb04();
      }
      uVar11 = FUN_0029ea98(pcVar9,0);
      puVar12 = *(undefined8 **)(pcVar9 + 0x20);
      *puVar12 = &DAT_00171f77;
      *(undefined1 *)(puVar12 + 2) = 3;
      cVar18 = pcVar9[0x67];
      puVar12[4] = &DAT_00171f2d;
      puVar12[7] = uVar11;
      *(undefined1 *)(puVar12 + 6) = 1;
      pcVar9[0x71] = 'v';
      if (cVar18 != '\0') goto LAB_002ee8a0;
      pcVar9[0x50] = '\0';
      pcVar9[0x51] = '\0';
      pcVar9[0x52] = '\0';
      pcVar9[0x53] = '\0';
      if (*(long *)(pcVar9 + 0x188) == 0) {
        pcVar9[0x54] = -1;
        pcVar9[0x55] = -1;
        pcVar9[0x56] = -1;
        pcVar9[0x57] = -1;
      }
      else {
        FUN_0023e358(pcVar9,0);
      }
      FUN_002ef2c8(pcVar9);
      iVar7 = sqlite3_errcode(pcVar9);
      if (iVar7 == 0) {
        lVar10 = 0;
        do {
          iVar7 = (*(code *)(&PTR_FUN_0030d0c0)[lVar10])(pcVar9);
          iVar17 = (int)lVar10;
          lVar10 = lVar10 + 1;
        } while (iVar7 == 0 && iVar17 == 0);
        if (iVar7 != 0) goto LAB_002eed54;
        FUN_002ef410(pcVar9);
        iVar7 = sqlite3_errcode(pcVar9);
        if (iVar7 != 0) goto LAB_002ee8a0;
      }
      else {
LAB_002eed54:
        *(int *)(pcVar9 + 0x50) = iVar7;
        FUN_0023e358(pcVar9);
      }
      FUN_002ee060(pcVar9,0,DAT_00313844,DAT_00313848);
      if (*(long *)(pcVar9 + 0x18) == 0) {
        *(code **)(pcVar9 + 0x160) = FUN_002a15d0;
        pcVar9[0x168] = -0x18;
        pcVar9[0x169] = '\x03';
        pcVar9[0x16a] = '\0';
        pcVar9[0x16b] = '\0';
        pcVar9[0x16c] = '\0';
        pcVar9[0x16d] = '\0';
        pcVar9[0x16e] = '\0';
        pcVar9[0x16f] = '\0';
        goto LAB_002ee8a0;
      }
      (*DAT_003138b0)();
      pcVar16 = *(char **)(pcVar9 + 0x18);
      *(code **)(pcVar9 + 0x160) = FUN_002a15d0;
      pcVar9[0x168] = -0x18;
      pcVar9[0x169] = '\x03';
      pcVar9[0x16a] = '\0';
      pcVar9[0x16b] = '\0';
      pcVar9[0x16c] = '\0';
      pcVar9[0x16d] = '\0';
      pcVar9[0x16e] = '\0';
      pcVar9[0x16f] = '\0';
      pcVar13 = DAT_003138c0;
      if (pcVar16 == (char *)0x0) goto LAB_002ee8a0;
LAB_002eeb88:
      (*pcVar13)(pcVar16);
    }
LAB_002ee8a0:
    if (*local_88 != 0) {
      (*DAT_003138c0)();
    }
    cVar18 = pcVar9[0x71];
    if (((cVar18 == 'm') || (cVar18 == 'v')) || (cVar18 == -0x46)) {
      if (pcVar9[0x67] != '\0') goto LAB_002ee8dc;
      uVar1 = *(uint *)(pcVar9 + 0x58) & *(uint *)(pcVar9 + 0x50);
      uVar8 = (ulong)uVar1;
      if ((uVar1 & 0xff) != 7) {
        if (uVar1 != 0) goto LAB_002eeaa8;
        goto LAB_002ee8f4;
      }
      goto LAB_002ee8e0;
    }
    sqlite3_log(0x15,"API call with %s database connection pointer","invalid");
    sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2abe3,
                "89c459e766ea7e9165d0beeb124708b955a4950d0f4792f457465d71b158d318");
    uVar8 = 0x15;
LAB_002eeaa8:
    pcVar9[0x71] = -0x46;
  }
LAB_002ee8f4:
  *param_2 = pcVar9;
  pcVar9 = local_78;
  if (local_78 != (char *)0x0) {
    do {
      do {
        pcVar16 = pcVar9;
        pcVar9 = pcVar16 + -1;
      } while (*pcVar9 != '\0');
    } while (((pcVar16[-2] != '\0') || (pcVar16[-3] != '\0')) || (pcVar16[-4] != '\0'));
    pcVar16 = pcVar16 + -4;
    puVar12 = &DAT_00313858;
    if (DAT_00313830 != 0) {
      if (DAT_00316f08 != (char *)0x0) {
        (*DAT_003138b0)();
      }
      iVar7 = (*DAT_00313868)(pcVar16);
      DAT_00316e60 = DAT_00316e60 - iVar7;
      DAT_00316ea8 = DAT_00316ea8 + -1;
      (*DAT_00313858)(pcVar16);
      if (DAT_00316f08 == (char *)0x0) goto LAB_002ee9b0;
      puVar12 = &DAT_003138c0;
      pcVar16 = DAT_00316f08;
    }
    (*(code *)*puVar12)(pcVar16);
  }
LAB_002ee9b0:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}


// ===== 002eede0  FUN_002eede0 =====

undefined4
FUN_002eede0(long param_1,byte *param_2,byte param_3,undefined8 param_4,undefined8 param_5,
            undefined8 param_6)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  long lVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined4 uVar14;
  long lVar15;
  
  uVar9 = (uint)param_3;
  uVar1 = 2;
  if (uVar9 != 8 && uVar9 != 4) {
    uVar1 = uVar9;
  }
  if (uVar1 - 4 < 0xfffffffd) {
    sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2ac1c,
                "89c459e766ea7e9165d0beeb124708b955a4950d0f4792f457465d71b158d318");
    return 0x15;
  }
  if (param_2 == (byte *)0x0) {
    lVar15 = *(long *)(param_1 + 0x10);
  }
  else {
    if (*(long *)(param_1 + 0x278) == 0) {
      piVar7 = (int *)(param_1 + 0x270);
      iVar10 = *(int *)(param_1 + 0x26c);
    }
    else {
      bVar5 = *param_2;
      if (bVar5 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = 0;
        pbVar12 = param_2 + 1;
        do {
          uVar11 = (ulong)bVar5;
          bVar5 = *pbVar12;
          uVar9 = (uVar9 + (byte)(&DAT_0017d228)[uVar11]) * -0x61c8864f;
          pbVar12 = pbVar12 + 1;
        } while (bVar5 != 0);
      }
      uVar2 = *(uint *)(param_1 + 0x268);
      uVar4 = 0;
      if (uVar2 != 0) {
        uVar4 = uVar9 / uVar2;
      }
      piVar8 = (int *)(*(long *)(param_1 + 0x278) + (ulong)(uVar9 - uVar4 * uVar2) * 0x10);
      piVar7 = piVar8 + 2;
      iVar10 = *piVar8;
    }
    if (iVar10 != 0) {
LAB_002eef2c:
      piVar7 = *(int **)piVar7;
      iVar10 = iVar10 + -1;
      pbVar12 = *(byte **)(piVar7 + 6);
      pbVar13 = param_2;
      do {
        bVar5 = *pbVar12;
        if (bVar5 == *pbVar13) {
          piVar8 = piVar7;
          if (bVar5 == 0) goto LAB_002eeec4;
        }
        else if ((&DAT_0017d228)[bVar5] != (&DAT_0017d228)[*pbVar13]) goto LAB_002eef70;
        pbVar12 = pbVar12 + 1;
        pbVar13 = pbVar13 + 1;
      } while( true );
    }
    piVar8 = (int *)0x317348;
LAB_002eeec4:
    if (*(long *)(piVar8 + 4) == 0) goto LAB_002ef110;
    lVar15 = *(long *)(piVar8 + 4) + (ulong)uVar1 * 0x28 + -0x28;
  }
  if ((lVar15 == 0) || (*(long *)(lVar15 + 0x18) == 0)) goto LAB_002ef110;
  if (*(int *)(param_1 + 0xd0) != 0) {
    FUN_0024b53c(param_1,5,"unable to delete/modify collation sequence due to active statements");
    return 5;
  }
  for (lVar6 = *(long *)(param_1 + 8); lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x10)) {
    *(byte *)(lVar6 + 0xc6) = *(byte *)(lVar6 + 0xc6) & 0xfc | 1;
  }
  bVar5 = *(byte *)(lVar15 + 8);
  if (uVar1 != (bVar5 & 0xfffffff7)) goto LAB_002ef110;
  if (*(long *)(param_1 + 0x278) == 0) {
    piVar8 = (int *)(param_1 + 0x270);
    piVar7 = (int *)(param_1 + 0x26c);
  }
  else {
    bVar3 = *param_2;
    if (bVar3 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = 0;
      pbVar12 = param_2 + 1;
      do {
        uVar11 = (ulong)bVar3;
        bVar3 = *pbVar12;
        uVar9 = (uVar9 + (byte)(&DAT_0017d228)[uVar11]) * -0x61c8864f;
        pbVar12 = pbVar12 + 1;
      } while (bVar3 != 0);
    }
    uVar2 = *(uint *)(param_1 + 0x268);
    uVar4 = 0;
    if (uVar2 != 0) {
      uVar4 = uVar9 / uVar2;
    }
    piVar7 = (int *)(*(long *)(param_1 + 0x278) + (ulong)(uVar9 - uVar4 * uVar2) * 0x10);
    piVar8 = piVar7 + 2;
  }
  iVar10 = *piVar7;
  if (iVar10 != 0) {
LAB_002ef028:
    piVar8 = *(int **)piVar8;
    iVar10 = iVar10 + -1;
    pbVar12 = *(byte **)(piVar8 + 6);
    pbVar13 = param_2;
    do {
      bVar3 = *pbVar12;
      if (bVar3 == *pbVar13) {
        if (bVar3 == 0) goto LAB_002ef080;
      }
      else if ((&DAT_0017d228)[bVar3] != (&DAT_0017d228)[*pbVar13]) goto LAB_002ef06c;
      pbVar12 = pbVar12 + 1;
      pbVar13 = pbVar13 + 1;
    } while( true );
  }
  piVar8 = (int *)0x317348;
LAB_002ef080:
  lVar6 = *(long *)(piVar8 + 4);
  if ((uint)*(byte *)(lVar6 + 8) == (uint)bVar5) {
    if (*(code **)(lVar6 + 0x20) != (code *)0x0) {
      (**(code **)(lVar6 + 0x20))(*(undefined8 *)(lVar6 + 0x10));
      bVar5 = *(byte *)(lVar15 + 8);
    }
    *(undefined8 *)(lVar6 + 0x18) = 0;
  }
  if (*(byte *)(lVar6 + 0x30) == bVar5) {
    if (*(code **)(lVar6 + 0x48) != (code *)0x0) {
      (**(code **)(lVar6 + 0x48))(*(undefined8 *)(lVar6 + 0x38));
      bVar5 = *(byte *)(lVar15 + 8);
    }
    *(undefined8 *)(lVar6 + 0x40) = 0;
  }
  if (*(byte *)(lVar6 + 0x58) == bVar5) {
    if (*(code **)(lVar6 + 0x70) != (code *)0x0) {
      (**(code **)(lVar6 + 0x70))(*(undefined8 *)(lVar6 + 0x60));
    }
    *(undefined8 *)(lVar6 + 0x68) = 0;
  }
LAB_002ef110:
  lVar15 = FUN_00297f80(param_1,uVar1,param_2,1);
  if (lVar15 == 0) {
    uVar14 = 7;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x188);
    *(undefined8 *)(lVar15 + 0x10) = param_4;
    *(undefined8 *)(lVar15 + 0x18) = param_5;
    *(undefined8 *)(lVar15 + 0x20) = param_6;
    *(byte *)(lVar15 + 8) = (byte)uVar1 | param_3 & 8;
    *(undefined4 *)(param_1 + 0x50) = 0;
    if (lVar6 == 0) {
      uVar14 = 0;
      *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
    }
    else {
      FUN_0023e358(param_1,0);
      uVar14 = 0;
    }
  }
  return uVar14;
LAB_002eef70:
  piVar8 = (int *)0x317348;
  if (iVar10 == 0) goto LAB_002eeec4;
  goto LAB_002eef2c;
LAB_002ef06c:
  if (iVar10 == 0) goto code_r0x002ef070;
  goto LAB_002ef028;
code_r0x002ef070:
  piVar8 = (int *)0x317348;
  goto LAB_002ef080;
}


// ===== 002ef194  FUN_002ef194 =====

int FUN_002ef194(undefined8 param_1,int param_2,byte *param_3,int param_4,byte *param_5)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar3 = param_2;
  if (param_4 <= param_2) {
    iVar3 = param_4;
  }
  if (param_3 != (byte *)0x0) {
    if (param_5 == (byte *)0x0) {
      return 1;
    }
    if (0 < iVar3) {
      uVar4 = iVar3 + 1;
      do {
        if ((ulong)*param_3 == 0) {
          uVar5 = 0;
          bVar2 = (&DAT_0017d228)[*param_5];
LAB_002ef20c:
          iVar3 = uVar5 - bVar2;
          goto LAB_002ef210;
        }
        uVar5 = (uint)(byte)(&DAT_0017d228)[*param_3];
        bVar2 = (&DAT_0017d228)[*param_5];
        if ((&DAT_0017d228)[*param_3] != bVar2) goto LAB_002ef20c;
        uVar4 = uVar4 - 1;
        param_3 = param_3 + 1;
        param_5 = param_5 + 1;
      } while (1 < uVar4);
    }
    return param_2 - param_4;
  }
  iVar3 = -(uint)(param_5 != (byte *)0x0);
LAB_002ef210:
  iVar1 = param_2 - param_4;
  if (iVar3 != 0) {
    iVar1 = iVar3;
  }
  return iVar1;
}


// ===== 002ef21c  FUN_002ef21c =====

int FUN_002ef21c(undefined8 param_1,int param_2,void *param_3,int param_4,void *param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    lVar3 = (long)param_2;
    do {
      if (*(char *)((long)param_3 + lVar3 + -1) != ' ') break;
      lVar3 = lVar3 + -1;
    } while ((int)lVar3 != 0);
    iVar2 = (int)lVar3;
  }
  if (param_4 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = (long)param_4;
    do {
      if (*(char *)((long)param_5 + lVar3 + -1) != ' ') break;
      lVar3 = lVar3 + -1;
    } while ((int)lVar3 != 0);
  }
  iVar4 = (int)lVar3;
  iVar1 = iVar2;
  if (iVar4 <= iVar2) {
    iVar1 = iVar4;
  }
  iVar1 = memcmp(param_3,param_5,(long)iVar1);
  iVar2 = iVar2 - iVar4;
  if (iVar1 != 0) {
    iVar2 = iVar1;
  }
  return iVar2;
}


// ===== 002ef2a4  FUN_002ef2a4 =====

void FUN_002ef2a4(long param_1)

{
  if (*(char *)(param_1 + 0x11) != '\0') {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    if (*(char *)(param_1 + 0x12) == '\0') {
      FUN_0022eb3c();
      return;
    }
  }
  return;
}


// ===== 002ef2c8  FUN_002ef2c8 =====

void FUN_002ef2c8(long param_1)

{
  int iVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    (*DAT_003138b0)();
  }
  lVar2 = FUN_00288e64(param_1,"MATCH",2,1,0);
  if (*(long *)(param_1 + 0x18) != 0) {
    (*DAT_003138c0)(*(long *)(param_1 + 0x18));
  }
  if (((lVar2 == 0) &&
      (((lVar2 = sqlite3_mprintf("MATCH"), lVar2 == 0 ||
        (iVar1 = FUN_002d3bec(param_1,"MATCH",2,1,lVar2,FUN_002f2e64,0,0,0,0,
                              PTR_sqlite3_free_0030d498), iVar1 == 7)) &&
       (*(char *)(param_1 + 0x67) == '\0')))) && (*(char *)(param_1 + 0x68) == '\0')) {
    *(undefined1 *)(param_1 + 0x67) = 1;
    if (0 < *(int *)(param_1 + 0xdc)) {
      *(undefined4 *)(param_1 + 400) = 1;
    }
    *(undefined2 *)(param_1 + 0x19c) = 0;
    *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x198) + 1;
    if (*(long *)(param_1 + 0x158) != 0) {
      FUN_0022aac0(*(long *)(param_1 + 0x158),"out of memory");
      lVar2 = *(long *)(*(long *)(param_1 + 0x158) + 0x100);
      *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x18) = 7;
      for (; lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x100)) {
        *(undefined4 *)(lVar2 + 0x18) = 7;
        *(int *)(lVar2 + 0x30) = *(int *)(lVar2 + 0x30) + 1;
      }
    }
  }
  return;
}


// ===== 002ef410  FUN_002ef410 =====

void FUN_002ef410(undefined8 param_1)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  code *pcVar7;
  uint uVar8;
  long local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (DAT_00316fb8 != 0) {
    uVar8 = 0;
    do {
      if (DAT_00313834 == '\0') {
        lVar5 = 0;
LAB_002ef4c8:
        bVar3 = true;
      }
      else {
        lVar5 = (*DAT_003138a0)(2);
        if (lVar5 == 0) goto LAB_002ef4c8;
        (*DAT_003138b0)();
        bVar3 = false;
      }
      if (DAT_00316fb8 <= uVar8) {
        pcVar7 = (code *)0x0;
      }
      else {
        pcVar7 = *(code **)(DAT_00316fc0 + (ulong)uVar8 * 8);
      }
      bVar2 = DAT_00316fb8 > uVar8;
      if (!bVar3) {
        (*DAT_003138c0)(lVar5);
      }
      local_70 = 0;
      if (pcVar7 != (code *)0x0) {
        iVar4 = (*pcVar7)(param_1,&local_70,&PTR_sqlite3_aggregate_context_0030c220);
        if (iVar4 != 0) {
          FUN_0024b53c(param_1,iVar4,"automatic extension loading failed: %s",local_70);
        }
        lVar5 = local_70;
        bVar2 = iVar4 == 0 && bVar2;
        if (local_70 != 0) {
          puVar6 = &DAT_00313858;
          if (DAT_00313830 != 0) {
            if (DAT_00316f08 != 0) {
              (*DAT_003138b0)();
            }
            iVar4 = (*DAT_00313868)(lVar5);
            DAT_00316e60 = DAT_00316e60 - iVar4;
            DAT_00316ea8 = DAT_00316ea8 + -1;
            (*DAT_00313858)(lVar5);
            if (DAT_00316f08 == 0) goto LAB_002ef488;
            puVar6 = &DAT_003138c0;
            lVar5 = DAT_00316f08;
          }
          (*(code *)*puVar6)(lVar5);
        }
      }
LAB_002ef488:
      uVar8 = uVar8 + 1;
    } while (bVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002ef5e8  FUN_002ef5e8 =====

undefined8 FUN_002ef5e8(void)

{
  undefined8 uVar1;
  
  if (DAT_003139c0 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x002ef5f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*DAT_003139c0)(500);
    return uVar1;
  }
  return 0;
}


// ===== 002ef604  FUN_002ef604 =====

int FUN_002ef604(long param_1)

{
  int iVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    (*DAT_003138b0)();
  }
  FUN_0028cc08(param_1,"json_each",&DAT_00316158,0,0);
  if (*(char *)(param_1 + 0x67) == '\0') {
    iVar1 = 0;
    lVar2 = *(long *)(param_1 + 0x18);
  }
  else {
    iVar1 = FUN_0023e2e4(param_1,0);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  if (lVar2 != 0) {
    (*DAT_003138c0)();
  }
  if (iVar1 == 0) {
    if (*(long *)(param_1 + 0x18) != 0) {
      (*DAT_003138b0)();
    }
    FUN_0028cc08(param_1,"json_tree",&DAT_00316218,0,0);
    if (*(char *)(param_1 + 0x67) == '\0') {
      iVar1 = 0;
      lVar2 = *(long *)(param_1 + 0x18);
    }
    else {
      iVar1 = FUN_0023e2e4(param_1,0);
      lVar2 = *(long *)(param_1 + 0x18);
    }
    if (lVar2 != 0) {
      (*DAT_003138c0)();
    }
  }
  return iVar1;
}


// ===== 002ef708  FUN_002ef708 =====

undefined8 FUN_002ef708(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *in_x4;
  
  uVar2 = sqlite3_declare_vtab
                    (param_1,
                     "CREATE TABLE x(key,value,type,atom,id,parent,fullkey,path,json HIDDEN,root HIDDEN)"
                    );
  if ((int)uVar2 == 0) {
    iVar1 = sqlite3_initialize();
    if (iVar1 == 0) {
      puVar3 = (undefined8 *)FUN_0022a6ac(0x18);
      *in_x4 = puVar3;
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        sqlite3_vtab_config(param_1,2);
        return 0;
      }
    }
    else {
      *in_x4 = 0;
    }
    uVar2 = 7;
  }
  return uVar2;
}


// ===== 002ef774  FUN_002ef774 =====

void FUN_002ef774(undefined8 param_1,int *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  ulong local_20;
  long local_18;
  
  lVar4 = tpidr_el0;
  local_18 = *(long *)(lVar4 + 0x28);
  iVar6 = *param_2;
  local_20 = 0xffffffffffffffff;
  if (iVar6 < 1) {
LAB_002ef858:
    iVar6 = 0;
  }
  else {
    iVar9 = 0;
    uVar7 = 0;
    uVar10 = 0;
    pcVar11 = (char *)(*(long *)(param_2 + 2) + 4);
    do {
      uVar3 = *(int *)(pcVar11 + -4) - 8;
      if (7 < *(int *)(pcVar11 + -4)) {
        uVar2 = 1 << (ulong)(uVar3 & 0x1f);
        if (pcVar11[1] == '\0') {
          uVar10 = uVar2 | uVar10;
        }
        else if (*pcVar11 == '\x02') {
          uVar7 = uVar2 | uVar7;
          *(int *)((long)&local_20 + (ulong)uVar3 * 4) = iVar9;
        }
      }
      iVar9 = iVar9 + 1;
      pcVar11 = pcVar11 + 0xc;
    } while (iVar6 != iVar9);
    if ((uVar10 & (uVar7 ^ 0xffffffff)) != 0) {
      uVar5 = 0x13;
      goto LAB_002ef864;
    }
    if ((int)local_20 < 0) goto LAB_002ef858;
    lVar8 = *(long *)(param_2 + 8);
    param_2[0x10] = 0;
    param_2[0x11] = 0x3ff00000;
    puVar1 = (undefined4 *)(lVar8 + (local_20 & 0xffffffff) * 8);
    iVar6 = 1;
    *puVar1 = 1;
    *(undefined1 *)(puVar1 + 1) = 1;
    if (-1 < (long)local_20) {
      puVar1 = (undefined4 *)(lVar8 + (local_20 >> 0x20) * 8);
      *(undefined1 *)(puVar1 + 1) = 1;
      iVar6 = 3;
      *puVar1 = 2;
    }
  }
  uVar5 = 0;
  param_2[10] = iVar6;
LAB_002ef864:
  if (*(long *)(lVar4 + 0x28) == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


// ===== 002ef884  FUN_002ef884 =====

undefined8 FUN_002ef884(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (param_1 != 0) {
    puVar2 = &DAT_00313858;
    if (DAT_00313830 != 0) {
      if (DAT_00316f08 != 0) {
        (*DAT_003138b0)(DAT_00316f08);
      }
      iVar1 = (*DAT_00313868)();
      DAT_00316e60 = DAT_00316e60 - iVar1;
      DAT_00316ea8 = DAT_00316ea8 + -1;
      (*DAT_00313858)(param_1);
      if (DAT_00316f08 == 0) {
        return 0;
      }
      puVar2 = &DAT_003138c0;
    }
    (*(code *)*puVar2)();
  }
  return 0;
}


// ===== 002ef934  FUN_002ef934 =====

undefined8 FUN_002ef934(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  iVar1 = sqlite3_initialize();
  if ((iVar1 == 0) && (puVar3 = (undefined8 *)FUN_0022a6ac(0x60), puVar3 != (undefined8 *)0x0)) {
    uVar2 = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[9] = 0;
    puVar3[8] = 0;
    puVar3[0xb] = 0;
    puVar3[10] = 0;
    *param_2 = puVar3;
    *(undefined1 *)((long)puVar3 + 0x19) = 1;
  }
  else {
    uVar2 = 7;
  }
  return uVar2;
}


// ===== 002ef990  FUN_002ef990 =====

undefined8 FUN_002ef990(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  FUN_002f1b18();
  if (param_1 != 0) {
    puVar2 = &DAT_00313858;
    if (DAT_00313830 != 0) {
      if (DAT_00316f08 != 0) {
        (*DAT_003138b0)();
      }
      iVar1 = (*DAT_00313868)(param_1);
      DAT_00316e60 = DAT_00316e60 - iVar1;
      DAT_00316ea8 = DAT_00316ea8 + -1;
      (*DAT_00313858)(param_1);
      if (DAT_00316f08 == 0) {
        return 0;
      }
      puVar2 = &DAT_003138c0;
      param_1 = DAT_00316f08;
    }
    (*(code *)*puVar2)(param_1);
  }
  return 0;
}


// ===== 002efa40  FUN_002efa40 =====

void FUN_002efa40(long *param_1,int param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  byte bVar1;
  ushort uVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  int *piVar9;
  void *__dest;
  undefined8 uVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  ulong uVar13;
  char *__src;
  void *pvVar14;
  uint *puVar15;
  long lVar16;
  char *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  FUN_002f1b18();
  if (param_2 != 0) {
    pbVar8 = (byte *)*param_5;
    if (pbVar8 == (byte *)0x0) goto LAB_002efdd8;
    if ((((*(ushort *)(pbVar8 + 0x14) ^ 0xffff) & 0x202) == 0) && (pbVar8[0x16] == 1)) {
      pvVar14 = *(void **)(pbVar8 + 8);
    }
    else {
      if ((*(ushort *)(pbVar8 + 0x14) & 1) != 0) goto LAB_002efdd4;
      pvVar14 = (void *)FUN_0022ae18(pbVar8,1);
    }
    if (pvVar14 != (void *)0x0) {
      piVar9 = (int *)*param_5;
      uVar2 = *(ushort *)(piVar9 + 5);
      if (((uVar2 >> 1 & 1) == 0) || (*(char *)((long)piVar9 + 0x16) != '\x01')) {
        if ((uVar2 >> 4 & 1) == 0) {
          if ((uVar2 & 1) == 0) {
            iVar7 = FUN_0023c158(piVar9,1);
            iVar5 = sqlite3_initialize();
          }
          else {
            iVar7 = 0;
            iVar5 = sqlite3_initialize();
          }
        }
        else {
          iVar7 = piVar9[4];
          if ((uVar2 >> 10 & 1) != 0) {
            iVar7 = *piVar9 + iVar7;
          }
          iVar5 = sqlite3_initialize();
        }
      }
      else {
        iVar7 = piVar9[4];
        iVar5 = sqlite3_initialize();
      }
      if (iVar5 != 0) {
        param_1[4] = 0;
        pbVar8 = (byte *)0x7;
        goto LAB_002efdd8;
      }
      __dest = (void *)FUN_0022a6ac((long)iVar7 + 1);
      param_1[4] = (long)__dest;
      if (__dest == (void *)0x0) {
LAB_002efb8c:
        pbVar8 = (byte *)0x7;
        goto LAB_002efdd8;
      }
      memcpy(__dest,pvVar14,(long)iVar7 + 1);
      puVar15 = (uint *)(param_1 + 6);
      param_1[7] = 0;
      puVar15[0] = 0;
      puVar15[1] = 0;
      lVar16 = param_1[4];
      param_1[9] = 0;
      param_1[8] = 0;
      param_1[0xb] = 0;
      param_1[10] = 0;
      if (lVar16 == 0) {
LAB_002efc00:
        lVar16 = *(long *)(*param_1 + 0x10);
        if (lVar16 != 0) {
          puVar11 = &DAT_00313858;
          if (DAT_00313830 != 0) {
            if (DAT_00316f08 != 0) {
              (*DAT_003138b0)();
            }
            iVar7 = (*DAT_00313868)(lVar16);
            DAT_00316e60 = DAT_00316e60 - iVar7;
            DAT_00316ea8 = DAT_00316ea8 + -1;
            (*DAT_00313858)(lVar16);
            if (DAT_00316f08 == 0) goto LAB_002efc8c;
            puVar11 = &DAT_003138c0;
            lVar16 = DAT_00316f08;
          }
          (*(code *)*puVar11)(lVar16);
        }
LAB_002efc8c:
        lVar16 = sqlite3_mprintf("malformed JSON");
        uVar6 = 7;
        if (lVar16 != 0) {
          uVar6 = 1;
        }
        *(long *)(*param_1 + 0x10) = lVar16;
      }
      else {
        param_1[8] = lVar16;
        uVar6 = FUN_002f1c6c(puVar15,0);
        if (((char)param_1[10] == '\0') && (0 < (int)uVar6)) {
          uVar4 = (ulong)uVar6;
          do {
            uVar13 = uVar4;
            uVar4 = uVar13 + 1;
          } while ((&DAT_00181588)[*(byte *)(lVar16 + uVar13)] != '\0');
          if ((0 < (int)uVar13) && (*(byte *)(lVar16 + uVar13) == 0)) {
            if (*(char *)((long)param_1 + 0x19) == '\0') {
LAB_002efcdc:
              if (param_2 == 3) {
                pbVar8 = (byte *)param_5[1];
                local_50 = (char *)0x0;
                if (pbVar8 == (byte *)0x0) goto LAB_002efdd8;
                if ((((*(ushort *)(pbVar8 + 0x14) ^ 0xffff) & 0x202) == 0) && (pbVar8[0x16] == 1)) {
                  __src = *(char **)(pbVar8 + 8);
                }
                else {
                  if ((*(ushort *)(pbVar8 + 0x14) & 1) != 0) goto LAB_002efdd4;
                  __src = (char *)FUN_0022ae18(pbVar8,1);
                }
                if (__src == (char *)0x0) goto LAB_002efdd4;
                iVar7 = sqlite3_value_bytes(param_5[1]);
                iVar5 = sqlite3_initialize();
                if (iVar5 != 0) {
                  param_1[5] = 0;
                  pbVar8 = (byte *)0x7;
                  goto LAB_002efdd8;
                }
                pvVar14 = (void *)FUN_0022a6ac((long)iVar7 + 1);
                param_1[5] = (long)pvVar14;
                if (pvVar14 == (void *)0x0) goto LAB_002efb8c;
                memcpy(pvVar14,__src,(long)iVar7 + 1);
                if ((*__src != '$') ||
                   (pbVar8 = (byte *)FUN_002f261c(puVar15,0,param_1[5] + 1,0,&local_50),
                   __src = local_50, local_50 != (char *)0x0)) {
                  sqlite3_free(*(undefined8 *)(*param_1 + 0x10));
                  uVar10 = sqlite3_mprintf("JSON path error near \'%q\'",__src);
                  *(undefined8 *)(*param_1 + 0x10) = uVar10;
                  FUN_002f1b18(param_1);
                  uVar6 = 7;
                  if (*(long *)(*param_1 + 0x10) != 0) {
                    uVar6 = 1;
                  }
                  pbVar8 = (byte *)(ulong)uVar6;
                  goto LAB_002efdd8;
                }
                if (pbVar8 == (byte *)0x0) goto LAB_002efdd8;
                pbVar12 = (byte *)param_1[7];
              }
              else {
                pbVar8 = (byte *)param_1[7];
                pbVar12 = pbVar8;
              }
              bVar1 = *pbVar8;
              *(byte *)(param_1 + 3) = bVar1;
              iVar7 = (int)((ulong)((long)pbVar8 - (long)pbVar12) >> 4);
              *(int *)((long)param_1 + 0xc) = iVar7;
              *(int *)(param_1 + 2) = iVar7;
              if (bVar1 < 6) {
                pbVar8 = (byte *)0x0;
                *(int *)((long)param_1 + 0x14) = iVar7 + 1;
                goto LAB_002efdd8;
              }
              pbVar8[8] = 0;
              pbVar8[9] = 0;
              pbVar8[10] = 0;
              pbVar8[0xb] = 0;
              uVar6 = *(uint *)(param_1 + 2);
              *(uint *)((long)param_1 + 0x14) = uVar6 + 1 + *(int *)(pbVar8 + 4);
              if (*(char *)((long)param_1 + 0x19) == '\0') {
                pbVar8 = (byte *)0x0;
                *(uint *)(param_1 + 2) = uVar6 + 1;
                goto LAB_002efdd8;
              }
              *(undefined1 *)(param_1 + 3) =
                   *(undefined1 *)
                    (param_1[7] + (ulong)*(uint *)(param_1[9] + (ulong)uVar6 * 4) * 0x10);
              if ((uVar6 != 0) &&
                 ((*(byte *)(param_1[7] + (ulong)(uVar6 - 1) * 0x10 + 1) >> 6 & 1) != 0)) {
                pbVar8 = (byte *)0x0;
                *(uint *)(param_1 + 2) = uVar6 - 1;
                goto LAB_002efdd8;
              }
              goto LAB_002efdd4;
            }
            uVar6 = *puVar15;
            iVar7 = sqlite3_initialize();
            if (iVar7 == 0) {
              lVar16 = FUN_0022a6ac((ulong)uVar6 << 2);
              param_1[9] = lVar16;
              if (lVar16 != 0) {
                FUN_002f2504(puVar15,0,0);
                goto LAB_002efcdc;
              }
            }
            else {
              param_1[9] = 0;
            }
            *(undefined1 *)(param_1 + 10) = 1;
            FUN_002f1b18(param_1);
            goto LAB_002efb8c;
          }
        }
        FUN_002f23c4(puVar15);
        if ((char)param_1[10] == '\0') goto LAB_002efc00;
        uVar6 = 7;
      }
      FUN_002f1b18(param_1);
      pbVar8 = (byte *)(ulong)uVar6;
      goto LAB_002efdd8;
    }
  }
LAB_002efdd4:
  pbVar8 = (byte *)0x0;
LAB_002efdd8:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pbVar8);
}


// ===== 002efeb0  FUN_002efeb0 =====

undefined8 FUN_002efeb0(long param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  
  if (*(char *)(param_1 + 0x19) != '\0') {
    lVar4 = *(long *)(param_1 + 0x38);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    uVar2 = *(uint *)(param_1 + 0x10) +
            (*(byte *)(lVar4 + (ulong)*(uint *)(param_1 + 0x10) * 0x10 + 1) >> 6 & 1);
    uVar1 = uVar2 + 1;
    *(uint *)(param_1 + 0x10) = uVar1;
    if (uVar1 < *(uint *)(param_1 + 0x14)) {
      uVar1 = *(uint *)(*(long *)(param_1 + 0x48) + (ulong)uVar1 * 4);
      cVar3 = *(char *)(lVar4 + (ulong)uVar1 * 0x10);
      *(char *)(param_1 + 0x18) = cVar3;
      if (cVar3 == '\x06') {
        lVar4 = lVar4 + (ulong)uVar1 * 0x10;
        if (uVar1 != uVar2) {
          *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
          return 0;
        }
        *(undefined4 *)(lVar4 + 8) = 0;
        return 0;
      }
    }
    return 0;
  }
  if (*(char *)(param_1 + 0x18) == '\a') {
    uVar6 = (ulong)(*(int *)(param_1 + 0x10) + 1);
    if (*(byte *)(*(long *)(param_1 + 0x38) + uVar6 * 0x10) < 6) {
      iVar5 = 2;
    }
    else {
      iVar5 = *(int *)(*(long *)(param_1 + 0x38) + uVar6 * 0x10 + 4) + 2;
    }
    iVar7 = *(int *)(param_1 + 8);
    iVar5 = iVar5 + *(int *)(param_1 + 0x10);
  }
  else {
    if (*(char *)(param_1 + 0x18) != '\x06') {
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x14);
      return 0;
    }
    uVar1 = *(uint *)(param_1 + 0x10);
    if (*(byte *)(*(long *)(param_1 + 0x38) + (ulong)uVar1 * 0x10) < 6) {
      iVar5 = 1;
    }
    else {
      iVar5 = *(int *)(*(long *)(param_1 + 0x38) + (ulong)uVar1 * 0x10 + 4) + 1;
    }
    iVar7 = *(int *)(param_1 + 8);
    iVar5 = iVar5 + uVar1;
  }
  *(int *)(param_1 + 0x10) = iVar5;
  *(int *)(param_1 + 8) = iVar7 + 1;
  return 0;
}


// ===== 002effdc  FUN_002effdc =====

bool FUN_002effdc(long param_1)

{
  return *(uint *)(param_1 + 0x14) <= *(uint *)(param_1 + 0x10);
}


// ===== 002effec  FUN_002effec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_002effec(long param_1,undefined8 *param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  undefined8 *puVar5;
  int iVar6;
  size_t sVar7;
  undefined *puVar8;
  ulong uVar9;
  code *pcVar10;
  ulong *puVar11;
  uint *puVar12;
  ulong uVar13;
  char *__s;
  undefined8 *local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  ulong uStack_b8;
  undefined2 local_b0;
  undefined auStack_ae [102];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  uVar2 = *(uint *)(param_1 + 0x10);
  uVar9 = (ulong)uVar2;
  lVar1 = *(long *)(param_1 + 0x38) + uVar9 * 0x10;
  if (param_3 < 4) {
    if (param_3 < 2) {
      if (param_3 == 0) {
        if (uVar2 == 0) goto LAB_002f0268;
        if (*(char *)(param_1 + 0x18) != '\x06') {
          if (*(char *)(param_1 + 0x18) == '\a') {
            FUN_002f03c0(lVar1);
          }
          goto LAB_002f0268;
        }
        puVar12 = (uint *)(param_1 + 8);
        if (*(char *)(param_1 + 0x19) != '\0') {
          if (*puVar12 == 0) goto LAB_002f0268;
          puVar12 = (uint *)(*(long *)(param_1 + 0x38) +
                             (ulong)*(uint *)(*(long *)(param_1 + 0x48) + uVar9 * 4) * 0x10 + 8);
        }
        puVar11 = (ulong *)*param_2;
        uVar9 = (ulong)*puVar12;
        uVar3 = *(ushort *)((long)puVar11 + 0x14);
        goto joined_r0x002f0304;
      }
      if (param_3 == 1) {
        FUN_002f03c0(lVar1 + ((ulong)(*(byte *)(lVar1 + 1) >> 6) & 1) * 0x10);
        goto LAB_002f0268;
      }
      goto LAB_002f023c;
    }
    if (param_3 != 2) {
      if (param_3 == 3) {
        if (*(byte *)(lVar1 + ((ulong)(*(byte *)(lVar1 + 1) >> 6) & 1) * 0x10) < 6) {
          FUN_002f03c0();
        }
        goto LAB_002f0268;
      }
      goto LAB_002f023c;
    }
    puVar8 = (&PTR_DAT_0030cef0)[*(byte *)(lVar1 + ((ulong)(*(byte *)(lVar1 + 1) >> 6) & 1) * 0x10)]
    ;
LAB_002f0250:
    pcVar10 = (code *)0x0;
    uVar9 = 0xffffffff;
  }
  else {
    if (param_3 < 6) {
      if (param_3 == 4) {
        puVar11 = (ulong *)*param_2;
        uVar3 = *(ushort *)((long)puVar11 + 0x14);
        uVar9 = ((ulong)(*(byte *)(lVar1 + 1) >> 6) & 1) + uVar9;
joined_r0x002f0304:
        if ((uVar3 & 0x9000) == 0) {
          *puVar11 = uVar9;
          *(undefined2 *)((long)puVar11 + 0x14) = 4;
        }
        else {
          FUN_0023c114();
        }
        goto LAB_002f0268;
      }
      if (param_3 == 5) {
        if ((*(uint *)(param_1 + 0xc) < uVar2) && (*(char *)(param_1 + 0x19) != '\0')) {
          puVar11 = (ulong *)*param_2;
          if ((*(ushort *)((long)puVar11 + 0x14) & 0x9000) == 0) {
            *puVar11 = (ulong)*(uint *)(*(long *)(param_1 + 0x48) + uVar9 * 4);
            *(undefined2 *)((long)puVar11 + 0x14) = 4;
          }
          else {
            FUN_0023c114(puVar11);
          }
        }
        goto LAB_002f0268;
      }
LAB_002f023c:
      puVar8 = &UNK_0017195d;
      if (*(undefined **)(param_1 + 0x28) != (undefined *)0x0) {
        puVar8 = *(undefined **)(param_1 + 0x28);
      }
      goto LAB_002f0250;
    }
    if (param_3 != 6) {
      if (param_3 == 7) {
        if (*(char *)(param_1 + 0x19) != '\0') {
          uVar9 = (ulong)*(uint *)(*(long *)(param_1 + 0x48) + uVar9 * 4);
          goto LAB_002f01c4;
        }
      }
      else if (param_3 == 8) {
        puVar8 = *(undefined **)(param_1 + 0x40);
        goto LAB_002f0250;
      }
      goto LAB_002f023c;
    }
    uStack_b8 = _UNK_00177618;
    local_c0 = _DAT_00177610;
    local_b0 = 1;
    if (*(char *)(param_1 + 0x19) == '\0') {
      __s = *(char **)(param_1 + 0x28);
      local_c8 = auStack_ae;
      if (__s == (char *)0x0) {
        local_d0 = param_2;
        FUN_002f0d8c(&local_d0,0x24);
      }
      else {
        local_d0 = param_2;
        sVar7 = strlen(__s);
        if ((int)sVar7 != 0) {
          uVar9 = sVar7 & 0xffffffff;
          if (uVar9 < 100) {
            uVar13 = 0;
            puVar8 = auStack_ae;
          }
          else {
            iVar6 = FUN_002f0c14(&local_d0);
            uVar13 = uStack_b8;
            puVar8 = local_c8;
            if (iVar6 != 0) goto LAB_002f0368;
          }
          memcpy(puVar8 + uVar13,__s,uVar9);
          uStack_b8 = uStack_b8 + uVar9;
        }
      }
LAB_002f0368:
      if (*(char *)(param_1 + 0x18) == '\a') {
        FUN_002f0ef8(&local_d0,*(undefined4 *)(lVar1 + 4),*(undefined8 *)(lVar1 + 8));
      }
      else if (*(char *)(param_1 + 0x18) == '\x06') {
        FUN_002f0de0(0x1e,&local_d0,&DAT_00176357,*(undefined4 *)(param_1 + 8));
      }
    }
    else {
LAB_002f01c4:
      local_c8 = auStack_ae;
      local_b0 = 1;
      uStack_b8 = _UNK_00177618;
      local_c0 = _DAT_00177610;
      local_d0 = param_2;
      FUN_002f0ac4(param_1,&local_d0,uVar9);
    }
    puVar5 = local_d0;
    if (local_b0._1_1_ != '\0') goto LAB_002f0268;
    pcVar10 = (code *)PTR_sqlite3_free_0030d498;
    if ((char)local_b0 != '\0') {
      pcVar10 = (code *)0xffffffffffffffff;
    }
    param_2 = local_d0;
    puVar8 = local_c8;
    uVar9 = uStack_b8;
    if (uStack_b8 >> 0x1f != 0) {
      if ((code *)0x1 < pcVar10 + 1) {
        (*pcVar10)(local_c8);
      }
      *(undefined4 *)((long)puVar5 + 0x24) = 0x12;
      FUN_0023c180(*puVar5,"string or blob too big",0xffffffffffffffff,1,0);
      goto LAB_002f0268;
    }
  }
  FUN_0023d018(param_2,puVar8,uVar9,1,pcVar10);
LAB_002f0268:
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002f03b0  FUN_002f03b0 =====

undefined8 FUN_002f03b0(long param_1,ulong *param_2)

{
  *param_2 = (ulong)*(uint *)(param_1 + 8);
  return 0;
}


// ===== 002f03c0  FUN_002f03c0 =====

void FUN_002f03c0(byte *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  byte bVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  size_t sVar9;
  long lVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined2 uVar13;
  int iVar14;
  byte bVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  byte *pbVar19;
  byte *pbVar20;
  ulong *puVar21;
  int iVar22;
  ulong uVar23;
  uint3 uVar24;
  undefined8 uVar26;
  ulong uVar27;
  ulong local_90;
  long local_88;
  byte bVar25;
  
  lVar4 = tpidr_el0;
  local_88 = *(long *)(lVar4 + 0x28);
  bVar15 = *param_1;
  uVar16 = (uint)bVar15;
  if (bVar15 < 4) {
    if (bVar15 == 1) {
      param_2 = (long *)*param_2;
      if ((*(ushort *)((long)param_2 + 0x14) & 0x9000) != 0) {
        if (*(long *)(lVar4 + 0x28) == local_88) {
          lVar10 = 1;
LAB_002f061c:
          FUN_0023c114(param_2,lVar10);
          return;
        }
        goto LAB_002f0ac0;
      }
      lVar10 = 1;
LAB_002f0648:
      *param_2 = lVar10;
      *(undefined2 *)((long)param_2 + 0x14) = 4;
    }
    else {
      if (uVar16 == 2) {
        param_2 = (long *)*param_2;
        if ((*(ushort *)((long)param_2 + 0x14) & 0x9000) != 0) {
          if (*(long *)(lVar4 + 0x28) == local_88) {
            lVar10 = 0;
            goto LAB_002f061c;
          }
          goto LAB_002f0ac0;
        }
        *param_2 = 0;
LAB_002f097c:
        uVar13 = 4;
      }
      else {
        if (uVar16 == 3) {
          pbVar20 = *(byte **)(param_1 + 8);
          bVar15 = *pbVar20;
          pbVar19 = pbVar20;
          if (bVar15 == 0x2d) {
            pbVar19 = pbVar20 + 1;
          }
          bVar3 = *pbVar19;
          if (bVar3 - 0x30 < 10) {
            pbVar19 = pbVar20 + (bVar15 == 0x2d);
            lVar17 = 0;
            do {
              uVar16 = (uint)bVar3;
              pbVar19 = pbVar19 + 1;
              if (0xccccccccccccccb < lVar17) {
                if ((lVar17 != 0xccccccccccccccc) || (*pbVar19 - 0x30 < 10)) goto LAB_002f04a4;
                if (uVar16 == 0x38) {
                  if (bVar15 != 0x2d) goto LAB_002f04a4;
                  param_2 = (long *)*param_2;
                  if ((*(ushort *)((long)param_2 + 0x14) & 0x9000) == 0) {
                    lVar10 = -0x8000000000000000;
                    goto LAB_002f0648;
                  }
                  if (*(long *)(lVar4 + 0x28) != local_88) goto LAB_002f0ac0;
                  lVar10 = -0x8000000000000000;
                  goto LAB_002f061c;
                }
                if (uVar16 == 0x39) goto LAB_002f04a4;
                lVar17 = (ulong)(uVar16 - 0x30) + 0x7ffffffffffffff8;
                break;
              }
              bVar3 = *pbVar19;
              lVar17 = lVar17 * 10 + (ulong)(uVar16 - 0x30);
            } while (bVar3 - 0x30 < 10);
          }
          else {
            lVar17 = 0;
          }
          param_2 = (long *)*param_2;
          lVar10 = -lVar17;
          if (bVar15 != 0x2d) {
            lVar10 = lVar17;
          }
          if ((*(ushort *)((long)param_2 + 0x14) & 0x9000) != 0) {
            if (*(long *)(lVar4 + 0x28) == local_88) goto LAB_002f061c;
            goto LAB_002f0ac0;
          }
          *param_2 = lVar10;
          goto LAB_002f097c;
        }
LAB_002f0568:
        param_2 = (long *)*param_2;
        if ((*(ushort *)((long)param_2 + 0x14) & 0x9000) != 0) {
          if (*(long *)(lVar4 + 0x28) == local_88) {
            FUN_0022c2ec();
            return;
          }
          goto LAB_002f0ac0;
        }
        uVar13 = 1;
      }
      *(undefined2 *)((long)param_2 + 0x14) = uVar13;
    }
  }
  else {
    if (uVar16 - 6 < 2) {
      if (*(long *)(lVar4 + 0x28) == local_88) {
        FUN_002f1000(param_1,param_2,0);
        return;
      }
      goto LAB_002f0ac0;
    }
    if (uVar16 == 5) {
      if ((param_1[1] >> 1 & 1) == 0) {
        if (*(long *)(lVar4 + 0x28) == local_88) {
          uVar11 = (ulong)(*(int *)(param_1 + 4) - 2);
          lVar17 = *(long *)(param_1 + 8) + 1;
          puVar12 = (undefined *)0xffffffffffffffff;
LAB_002f0a5c:
          FUN_0023d018(param_2,lVar17,uVar11,1,puVar12);
          return;
        }
      }
      else {
        uVar16 = *(uint *)(param_1 + 4);
        lVar10 = *(long *)(param_1 + 8);
        iVar7 = sqlite3_initialize();
        if (((uVar16 < 0x7fffffff) && (iVar7 == 0)) &&
           (lVar17 = FUN_0022a6ac((ulong)uVar16 + 1), uVar6 = DAT_00177fa8, lVar17 != 0)) {
          if (uVar16 - 1 < 2) {
            uVar11 = 0;
          }
          else {
            uVar11 = 0;
            uVar23 = 1;
            do {
              bVar15 = *(byte *)(lVar10 + uVar23);
              iVar7 = (int)uVar11;
              uVar18 = uVar11;
              if (bVar15 == 0x5c) {
                pbVar20 = (byte *)(lVar10 + uVar23 + 1);
                bVar3 = *pbVar20;
                if (bVar3 < 0x6e) {
                  if (bVar3 == 0x62) {
                    bVar15 = 8;
                  }
                  else if (bVar3 == 0x66) {
                    bVar15 = 0xc;
                  }
                  else {
LAB_002f0838:
                    bVar15 = 9;
                    if (bVar3 != 0x74) {
                      bVar15 = bVar3;
                    }
                  }
                }
                else if (bVar3 == 0x6e) {
                  bVar15 = 10;
                }
                else {
                  if (bVar3 != 0x72) {
                    if (bVar3 != 0x75) goto LAB_002f0838;
                    uVar1 = ((uint)(int)(char)(pbVar20[4] << 1) >> 7 & 0xfffffff9) +
                            (uint)pbVar20[4] & 0xf;
                    uVar2 = (((uint)(int)(char)(pbVar20[3] << 1) >> 7 & 9) + (uint)pbVar20[3]) *
                            0x10;
                    bVar3 = (byte)uVar1;
                    bVar5 = (byte)uVar2;
                    bVar15 = bVar3 | bVar5;
                    uVar1 = uVar1 | uVar2 & 0xff;
                    uVar26 = NEON_cmeq((ulong)(CONCAT14(pbVar20[2],(uint)pbVar20[1]) & 0xffffffff40)
                                       & 0xffffff40ffffffff,0,4);
                    uVar27 = CONCAT44((uint)(~(byte)((ulong)uVar26 >> 0x20) & 9) + (uint)pbVar20[2],
                                      (uint)(~(byte)uVar26 & 9) + (uint)pbVar20[1]) & 0xf0000000f;
                    uVar26 = NEON_ushl(uVar27,uVar6,4);
                    bVar25 = (byte)((ulong)uVar26 >> 0x28) | (byte)((ulong)uVar26 >> 8);
                    uVar24 = CONCAT12((byte)((ulong)uVar26 >> 0x30) | (byte)((ulong)uVar26 >> 0x10),
                                      CONCAT11(bVar25,(byte)((ulong)uVar26 >> 0x20) | (byte)uVar26))
                    ;
                    uVar2 = CONCAT13((byte)((ulong)uVar26 >> 0x38) | (byte)((ulong)uVar26 >> 0x18),
                                     uVar24) | uVar1;
                    if (uVar2 != 0) {
                      iVar22 = (int)uVar23;
                      uVar8 = iVar22 + 5;
                      uVar23 = (ulong)uVar8;
                      if (uVar2 < 0x80) {
                        iVar14 = 1;
                      }
                      else if (uVar2 < 0x800) {
                        bVar15 = bVar3 | bVar5 & 0x3f | 0x80;
                        *(byte *)(lVar17 + uVar11) = (byte)(uVar2 >> 6) | 0xc0;
                        iVar14 = 2;
                        uVar18 = (ulong)(iVar7 + 1);
                      }
                      else if (((uVar8 < uVar16 - 6) && ((bVar25 & 0xfc) == 0xd8)) &&
                              ((*(char *)(lVar10 + (ulong)(iVar22 + 6)) == '\\' &&
                               ((*(char *)(lVar10 + (ulong)(iVar22 + 7)) == 'u' &&
                                (uVar8 = FUN_002f0f74(lVar10 + 3 + (ulong)uVar8),
                                (uVar8 & 0xfc00) == 0xdc00)))))) {
                        uVar2 = uVar8 & 0x3ff | (uVar24 & 0x3ff | uVar1) << 10;
                        uVar1 = uVar2 + 0x10000;
                        *(byte *)(lVar17 + (ulong)(iVar7 + 1)) = (byte)(uVar1 >> 0xc) & 0x3f | 0x80;
                        bVar15 = (byte)uVar8 & 0x3f | 0x80;
                        *(byte *)(lVar17 + uVar11) = (byte)(uVar1 >> 0x12) | 0xf0;
                        *(byte *)(lVar17 + (ulong)(iVar7 + 2)) = (byte)(uVar2 >> 6) & 0x3f | 0x80;
                        iVar14 = 4;
                        uVar18 = (ulong)(iVar7 + 3);
                        uVar23 = (ulong)(iVar22 + 0xb);
                      }
                      else {
                        bVar15 = bVar3 | bVar5 & 0x3f | 0x80;
                        *(byte *)(lVar17 + (ulong)(iVar7 + 1)) = (byte)(uVar2 >> 6) & 0x3f | 0x80;
                        *(byte *)(lVar17 + uVar11) = (byte)uVar27 | 0xe0;
                        iVar14 = 3;
                        uVar18 = (ulong)(iVar7 + 2);
                      }
                      goto LAB_002f0728;
                    }
                    break;
                  }
                  bVar15 = 0xd;
                }
                iVar14 = 1;
                uVar23 = uVar23 + 1;
              }
              else {
                iVar14 = 1;
              }
LAB_002f0728:
              uVar1 = (int)uVar23 + 1;
              uVar23 = (ulong)uVar1;
              uVar11 = (ulong)(uint)(iVar7 + iVar14);
              *(byte *)(lVar17 + uVar18) = bVar15;
            } while (uVar1 < uVar16 - 1);
          }
          *(undefined1 *)(lVar17 + uVar11) = 0;
          puVar12 = PTR_sqlite3_free_0030d498;
          if (*(long *)(lVar4 + 0x28) == local_88) goto LAB_002f0a5c;
        }
        else if (*(long *)(lVar4 + 0x28) == local_88) {
          sqlite3_result_error_nomem(param_2);
          return;
        }
      }
      goto LAB_002f0ac0;
    }
    if (bVar15 != 4) goto LAB_002f0568;
    pbVar20 = *(byte **)(param_1 + 8);
LAB_002f04a4:
    if (pbVar20 == (byte *)0x0) {
      local_90 = 0;
    }
    else {
      sVar9 = strlen((char *)pbVar20);
      FUN_0022c3dc(pbVar20,&local_90,(uint)sVar9 & 0x3fffffff,1);
    }
    puVar21 = (ulong *)*param_2;
    if ((*(ushort *)((long)puVar21 + 0x14) & 0x9000) == 0) {
      *(undefined2 *)((long)puVar21 + 0x14) = 1;
    }
    else {
      FUN_0022c2ec(puVar21);
    }
    if ((((local_90 ^ 0xffffffffffffffff) & 0x7ff0000000000000) != 0) ||
       ((local_90 & 0xfffffffffffff) == 0)) {
      *puVar21 = local_90;
      *(undefined2 *)((long)puVar21 + 0x14) = 8;
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_88) {
    return;
  }
LAB_002f0ac0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002f0ac4  FUN_002f0ac4 =====

void FUN_002f0ac4(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  if (param_3 == 0) {
    uVar8 = *(ulong *)(param_2 + 0x18);
    if (*(ulong *)(param_2 + 0x10) <= uVar8) {
      iVar2 = FUN_002f0c14(param_2,1);
      if (iVar2 != 0) {
        return;
      }
      uVar8 = *(ulong *)(param_2 + 0x18);
    }
    *(ulong *)(param_2 + 0x18) = uVar8 + 1;
    *(undefined1 *)(*(long *)(param_2 + 8) + uVar8) = 0x24;
    return;
  }
  uVar8 = (ulong)*(uint *)(*(long *)(param_1 + 0x48) + (ulong)param_3 * 4);
  FUN_002f0ac4(param_1,param_2,uVar8);
  lVar6 = *(long *)(param_1 + 0x38);
  if (*(char *)(lVar6 + uVar8 * 0x10) == '\x06') {
    FUN_002f0de0(0x1e,param_2,&DAT_00176357,*(undefined4 *)(lVar6 + uVar8 * 0x10 + 8));
    return;
  }
  lVar6 = lVar6 + (ulong)param_3 * 0x10;
  lVar6 = lVar6 + ((ulong)(*(byte *)(lVar6 + 1) >> 6) & 1) * 0x10;
  iVar2 = *(int *)(lVar6 + -0xc);
  pbVar4 = *(byte **)(lVar6 + -8);
  pbVar5 = pbVar4;
  iVar3 = iVar2;
  if ((2 < iVar2) && (((byte)(&DAT_0017d382)[pbVar4[1]] >> 1 & 1) != 0)) {
    uVar1 = iVar2 - 1;
    uVar8 = 2;
    uVar7 = uVar8;
    if (iVar2 != 3) {
      do {
        uVar7 = uVar8;
        if (((&DAT_0017d382)[pbVar4[uVar8]] & 6) == 0) break;
        uVar8 = uVar8 + 1;
        uVar7 = (ulong)uVar1;
      } while (uVar1 != uVar8);
    }
    pbVar5 = pbVar4 + 1;
    iVar3 = iVar2 + -2;
    if ((uint)uVar7 != uVar1) {
      pbVar5 = pbVar4;
      iVar3 = iVar2;
    }
  }
  FUN_002f0de0(iVar3 + 2,param_2,".%.*s",iVar3,pbVar5);
  return;
}


// ===== 002f0c14  FUN_002f0c14 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_002f0c14(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  void *__dest;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar4 = param_1[2];
  lVar6 = uVar4 << 1;
  if (uVar4 <= (param_2 & 0xffffffff)) {
    lVar6 = (param_2 & 0xffffffff) + uVar4 + 10;
  }
  if (*(char *)(param_1 + 4) == '\0') {
    uVar7 = param_1[1];
    iVar2 = sqlite3_initialize();
    if ((iVar2 == 0) && (lVar3 = FUN_0022b604(uVar7,lVar6), lVar3 != 0)) {
      param_1[1] = lVar3;
      goto LAB_002f0d70;
    }
  }
  else {
    if (*(char *)((long)param_1 + 0x21) != '\0') {
      return 1;
    }
    iVar2 = sqlite3_initialize();
    if ((iVar2 == 0) && (__dest = (void *)FUN_0022a6ac(lVar6), __dest != (void *)0x0)) {
      memcpy(__dest,(void *)param_1[1],param_1[3]);
      param_1[1] = __dest;
      *(undefined1 *)(param_1 + 4) = 0;
LAB_002f0d70:
      param_1[2] = lVar6;
      return 0;
    }
  }
  *(undefined1 *)((long)param_1 + 0x21) = 1;
  sqlite3_result_error_nomem(*param_1);
  if ((*(char *)(param_1 + 4) == '\0') && (lVar6 = param_1[1], lVar6 != 0)) {
    puVar5 = &DAT_00313858;
    if (DAT_00313830 != 0) {
      if (DAT_00316f08 != 0) {
        (*DAT_003138b0)();
      }
      iVar2 = (*DAT_00313868)(lVar6);
      DAT_00316e60 = DAT_00316e60 - iVar2;
      DAT_00316ea8 = DAT_00316ea8 + -1;
      (*DAT_00313858)(lVar6);
      if (DAT_00316f08 == 0) goto LAB_002f0d2c;
      puVar5 = &DAT_003138c0;
      lVar6 = DAT_00316f08;
    }
    (*(code *)*puVar5)(lVar6);
  }
LAB_002f0d2c:
  *(undefined1 *)(param_1 + 4) = 1;
  uVar1 = _UNK_00177618;
  uVar7 = _DAT_00177610;
  param_1[1] = (long)param_1 + 0x22;
  param_1[3] = uVar1;
  param_1[2] = uVar7;
  return 7;
}


// ===== 002f0d8c  FUN_002f0d8c =====

void FUN_002f0d8c(long param_1,undefined1 param_2)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x18);
  if (*(ulong *)(param_1 + 0x10) <= uVar2) {
    iVar1 = FUN_002f0c14(param_1,1);
    if (iVar1 != 0) {
      return;
    }
    uVar2 = *(ulong *)(param_1 + 0x18);
  }
  *(ulong *)(param_1 + 0x18) = uVar2 + 1;
  *(undefined1 *)(*(long *)(param_1 + 8) + uVar2) = param_2;
  return;
}


// ===== 002f0de0  FUN_002f0de0 =====

void FUN_002f0de0(int param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  int iVar2;
  size_t sVar3;
  long lVar4;
  undefined1 auStack_e0 [8];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  undefined8 local_68;
  long lStack_60;
  int local_58;
  ulong local_54;
  undefined2 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_d8 = param_4;
  uStack_d0 = param_5;
  local_c8 = param_6;
  uStack_c0 = param_7;
  local_b8 = param_8;
  if (((ulong)(*(long *)(param_2 + 0x18) + (long)param_1) < *(ulong *)(param_2 + 0x10)) ||
     (iVar2 = FUN_002f0c14(param_2,param_1), iVar2 == 0)) {
    if (0 < param_1) {
      lVar4 = *(long *)(param_2 + 8) + *(long *)(param_2 + 0x18);
      local_54 = 0;
      local_68 = 0;
      local_4c = 0;
      uStack_78 = 0xffffff80ffffffd8;
      local_90 = (undefined1 *)register0x00000008;
      puStack_88 = &stack0xffffffffffffff50;
      puStack_80 = auStack_e0;
      lStack_60 = lVar4;
      local_58 = param_1;
      sqlite3_str_vappendf(&local_68,param_3,&local_90);
      *(undefined1 *)(lVar4 + (local_54 >> 0x20)) = 0;
    }
    lVar4 = *(long *)(param_2 + 0x18);
    sVar3 = strlen((char *)(*(long *)(param_2 + 8) + lVar4));
    *(long *)(param_2 + 0x18) = lVar4 + (int)sVar3;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002f0ef8  FUN_002f0ef8 =====

void FUN_002f0ef8(undefined8 param_1,int param_2,byte *param_3)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  
  pbVar3 = param_3;
  iVar2 = param_2;
  if ((2 < param_2) && (((byte)(&DAT_0017d382)[param_3[1]] >> 1 & 1) != 0)) {
    uVar1 = param_2 - 1;
    uVar4 = 2;
    uVar5 = uVar4;
    if (param_2 != 3) {
      do {
        uVar5 = uVar4;
        if (((&DAT_0017d382)[param_3[uVar4]] & 6) == 0) break;
        uVar4 = uVar4 + 1;
        uVar5 = (ulong)uVar1;
      } while (uVar1 != uVar4);
    }
    pbVar3 = param_3 + 1;
    iVar2 = param_2 + -2;
    if ((uint)uVar5 != uVar1) {
      pbVar3 = param_3;
      iVar2 = param_2;
    }
  }
  FUN_002f0de0(iVar2 + 2,param_1,".%.*s",iVar2,pbVar3);
  return;
}


// ===== 002f0f74  FUN_002f0f74 =====

uint FUN_002f0f74(byte *param_1)

{
  undefined8 uVar1;
  
  uVar1 = NEON_cmeq((ulong)(CONCAT14(param_1[1],(uint)*param_1) & 0xffffffff40) & 0xffffff40ffffffff
                    ,0,4);
  uVar1 = NEON_ushl(CONCAT44((uint)(~(byte)((ulong)uVar1 >> 0x20) & 9) + (uint)param_1[1],
                             (uint)(~(byte)uVar1 & 9) + (uint)*param_1) & 0xf0000000f,DAT_00177fa8,4
                   );
  return CONCAT13((byte)((ulong)uVar1 >> 0x38) | (byte)((ulong)uVar1 >> 0x18),
                  CONCAT12((byte)((ulong)uVar1 >> 0x30) | (byte)((ulong)uVar1 >> 0x10),
                           CONCAT11((byte)((ulong)uVar1 >> 0x28) | (byte)((ulong)uVar1 >> 8),
                                    (byte)((ulong)uVar1 >> 0x20) | (byte)uVar1))) |
         (((uint)(int)(char)(param_1[2] << 1) >> 7 & 0xfffffff9) + (uint)param_1[2] & 0xf) << 4 |
         ((uint)(int)(char)(param_1[3] << 1) >> 7 & 0xfffffff9) + (uint)param_1[3] & 0xf;
}


// ===== 002f1000  FUN_002f1000 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002f1000(undefined8 param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *local_c0;
  undefined1 *puStack_b8;
  undefined8 local_b0;
  ulong uStack_a8;
  undefined2 local_a0;
  undefined1 auStack_9e [102];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  puStack_b8 = auStack_9e;
  uStack_a8 = _UNK_00177618;
  local_b0 = _DAT_00177610;
  local_a0 = 1;
  local_c0 = param_2;
  FUN_002f1108(param_1,&local_c0);
  plVar3 = local_c0;
  if (local_a0._1_1_ == '\0') {
    pcVar1 = (code *)PTR_sqlite3_free_0030d498;
    if ((char)local_a0 != '\0') {
      pcVar1 = (code *)0xffffffffffffffff;
    }
    if (uStack_a8 >> 0x1f == 0) {
      FUN_0023d018();
    }
    else {
      if ((code *)0x1 < pcVar1 + 1) {
        (*pcVar1)(puStack_b8);
      }
      *(undefined4 *)((long)plVar3 + 0x24) = 0x12;
      FUN_0023c180(*plVar3,"string or blob too big",0xffffffffffffffff,1,0);
    }
  }
  lVar4 = *param_2;
  *(undefined1 *)(lVar4 + 0x17) = 0x4a;
  *(ushort *)(lVar4 + 0x14) = *(ushort *)(lVar4 + 0x14) | 0x800;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002f1108  FUN_002f1108 =====

void FUN_002f1108(byte *param_1,long param_2,long param_3)

{
  byte *pbVar1;
  uint uVar2;
  undefined4 *puVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  void *__src;
  ulong uVar10;
  uint uVar11;
  
  if ((param_1[1] & 0x18) != 0) {
    if ((param_3 != 0) && ((param_1[1] >> 3 & 1) != 0)) {
      FUN_002f15bc(param_2,*(undefined8 *)(param_3 + (ulong)*(uint *)(param_1 + 8) * 8));
      return;
    }
    param_1 = *(byte **)(param_1 + 8);
  }
  bVar4 = *param_1;
  if (bVar4 < 5) {
    if (bVar4 - 3 < 2) {
LAB_002f1348:
      uVar11 = *(uint *)(param_1 + 4);
      uVar10 = (ulong)uVar11;
      if (uVar11 == 0) {
        return;
      }
      lVar6 = *(long *)(param_2 + 0x18);
      __src = *(void **)(param_1 + 8);
      if (*(ulong *)(param_2 + 0x10) <= lVar6 + uVar10) {
        iVar5 = FUN_002f0c14(param_2,uVar11);
        if (iVar5 != 0) {
          return;
        }
        lVar6 = *(long *)(param_2 + 0x18);
      }
      memcpy((void *)(*(long *)(param_2 + 8) + lVar6),__src,uVar10);
      *(ulong *)(param_2 + 0x18) = *(long *)(param_2 + 0x18) + uVar10;
      return;
    }
    if (bVar4 == 1) {
      lVar6 = *(long *)(param_2 + 0x18);
      if (*(ulong *)(param_2 + 0x10) <= lVar6 + 4U) {
        iVar5 = FUN_002f0c14(param_2,4);
        if (iVar5 != 0) {
          return;
        }
        lVar6 = *(long *)(param_2 + 0x18);
      }
      lVar7 = *(long *)(param_2 + 8);
      uVar9 = 0x65757274;
      goto LAB_002f1400;
    }
    if (bVar4 == 2) {
      lVar6 = *(long *)(param_2 + 0x18);
      if (*(ulong *)(param_2 + 0x10) <= lVar6 + 5U) {
        iVar5 = FUN_002f0c14(param_2,5);
        if (iVar5 != 0) {
          return;
        }
        lVar6 = *(long *)(param_2 + 0x18);
      }
      puVar3 = (undefined4 *)(*(long *)(param_2 + 8) + lVar6);
      *(undefined1 *)(puVar3 + 1) = 0x65;
      *puVar3 = 0x736c6166;
      *(long *)(param_2 + 0x18) = *(long *)(param_2 + 0x18) + 5;
      return;
    }
  }
  else {
    if (bVar4 == 5) {
      if ((param_1[1] & 1) != 0) {
        FUN_002f1930(param_2,*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 4));
        return;
      }
      goto LAB_002f1348;
    }
    if (bVar4 == 6) {
      uVar10 = *(ulong *)(param_2 + 0x18);
      if (*(ulong *)(param_2 + 0x10) <= uVar10) {
        iVar5 = FUN_002f0c14(param_2,1);
        if (iVar5 != 0) goto LAB_002f147c;
        uVar10 = *(ulong *)(param_2 + 0x18);
      }
      *(ulong *)(param_2 + 0x18) = uVar10 + 1;
      *(undefined1 *)(*(long *)(param_2 + 8) + uVar10) = 0x5b;
LAB_002f147c:
      iVar5 = *(int *)(param_1 + 4);
      do {
        if (iVar5 != 0) {
          uVar11 = 1;
          do {
            pbVar1 = param_1 + (ulong)uVar11 * 0x10;
            if ((pbVar1[1] >> 2 & 1) == 0) {
              uVar10 = *(ulong *)(param_2 + 0x18);
              if ((uVar10 != 0) &&
                 (lVar6 = *(long *)(param_2 + 8), (*(byte *)(lVar6 + uVar10 + -1) & 0xdf) != 0x5b))
              {
                if (*(ulong *)(param_2 + 0x10) <= uVar10) {
                  iVar5 = FUN_002f0c14(param_2,1);
                  if (iVar5 != 0) goto LAB_002f1508;
                  uVar10 = *(ulong *)(param_2 + 0x18);
                  lVar6 = *(long *)(param_2 + 8);
                }
                *(ulong *)(param_2 + 0x18) = uVar10 + 1;
                *(undefined1 *)(lVar6 + uVar10) = 0x2c;
              }
LAB_002f1508:
              FUN_002f1108(pbVar1,param_2,param_3);
            }
            if (*pbVar1 < 6) {
              iVar5 = 1;
            }
            else {
              iVar5 = *(int *)(param_1 + (ulong)uVar11 * 0x10 + 4) + 1;
            }
            uVar11 = iVar5 + uVar11;
          } while (uVar11 <= *(uint *)(param_1 + 4));
        }
        if ((param_1[1] >> 5 & 1) == 0) goto LAB_002f154c;
        param_1 = param_1 + (ulong)*(uint *)(param_1 + 8) * 0x10;
        iVar5 = *(int *)(param_1 + 4);
      } while( true );
    }
    if (bVar4 == 7) {
      uVar10 = *(ulong *)(param_2 + 0x18);
      if (*(ulong *)(param_2 + 0x10) <= uVar10) {
        iVar5 = FUN_002f0c14(param_2,1);
        if (iVar5 != 0) goto LAB_002f122c;
        uVar10 = *(ulong *)(param_2 + 0x18);
      }
      *(ulong *)(param_2 + 0x18) = uVar10 + 1;
      *(undefined1 *)(*(long *)(param_2 + 8) + uVar10) = 0x7b;
LAB_002f122c:
      iVar5 = *(int *)(param_1 + 4);
      do {
        if (iVar5 != 0) {
          uVar11 = 1;
          do {
            uVar2 = uVar11 + 1;
            pbVar1 = param_1 + (ulong)uVar2 * 0x10;
            if ((pbVar1[1] >> 2 & 1) == 0) {
              uVar10 = *(ulong *)(param_2 + 0x18);
              if ((uVar10 != 0) &&
                 (lVar6 = *(long *)(param_2 + 8), (*(byte *)(lVar6 + uVar10 + -1) & 0xdf) != 0x5b))
              {
                if (*(ulong *)(param_2 + 0x10) <= uVar10) {
                  iVar5 = FUN_002f0c14(param_2,1);
                  if (iVar5 != 0) goto LAB_002f12c0;
                  uVar10 = *(ulong *)(param_2 + 0x18);
                  lVar6 = *(long *)(param_2 + 8);
                }
                *(ulong *)(param_2 + 0x18) = uVar10 + 1;
                *(undefined1 *)(lVar6 + uVar10) = 0x2c;
              }
LAB_002f12c0:
              FUN_002f1108(param_1 + (ulong)uVar11 * 0x10,param_2,param_3);
              uVar10 = *(ulong *)(param_2 + 0x18);
              if (uVar10 < *(ulong *)(param_2 + 0x10)) {
LAB_002f12f0:
                *(ulong *)(param_2 + 0x18) = uVar10 + 1;
                *(undefined1 *)(*(long *)(param_2 + 8) + uVar10) = 0x3a;
              }
              else {
                iVar5 = FUN_002f0c14(param_2,1);
                if (iVar5 == 0) {
                  uVar10 = *(ulong *)(param_2 + 0x18);
                  goto LAB_002f12f0;
                }
              }
              FUN_002f1108(pbVar1,param_2,param_3);
            }
            if (*pbVar1 < 6) {
              iVar5 = 1;
            }
            else {
              iVar5 = *(int *)(param_1 + (ulong)uVar2 * 0x10 + 4) + 1;
            }
            uVar11 = uVar2 + iVar5;
          } while (uVar11 <= *(uint *)(param_1 + 4));
        }
        if ((param_1[1] >> 5 & 1) == 0) goto LAB_002f1414;
        param_1 = param_1 + (ulong)*(uint *)(param_1 + 8) * 0x10;
        iVar5 = *(int *)(param_1 + 4);
      } while( true );
    }
  }
  lVar6 = *(long *)(param_2 + 0x18);
  if (*(ulong *)(param_2 + 0x10) <= lVar6 + 4U) {
    iVar5 = FUN_002f0c14(param_2,4);
    if (iVar5 != 0) {
      return;
    }
    lVar6 = *(long *)(param_2 + 0x18);
  }
  lVar7 = *(long *)(param_2 + 8);
  uVar9 = 0x6c6c756e;
LAB_002f1400:
  *(undefined4 *)(lVar7 + lVar6) = uVar9;
  *(long *)(param_2 + 0x18) = *(long *)(param_2 + 0x18) + 4;
  return;
LAB_002f154c:
  uVar10 = *(ulong *)(param_2 + 0x18);
  if (*(ulong *)(param_2 + 0x10) <= uVar10) {
    iVar5 = FUN_002f0c14(param_2,1);
    if (iVar5 != 0) {
      return;
    }
    uVar10 = *(ulong *)(param_2 + 0x18);
  }
  lVar6 = *(long *)(param_2 + 8);
  *(ulong *)(param_2 + 0x18) = uVar10 + 1;
  uVar8 = 0x5d;
  goto LAB_002f157c;
LAB_002f1414:
  uVar10 = *(ulong *)(param_2 + 0x18);
  if (*(ulong *)(param_2 + 0x10) <= uVar10) {
    iVar5 = FUN_002f0c14(param_2,1);
    if (iVar5 != 0) {
      return;
    }
    uVar10 = *(ulong *)(param_2 + 0x18);
  }
  lVar6 = *(long *)(param_2 + 8);
  *(ulong *)(param_2 + 0x18) = uVar10 + 1;
  uVar8 = 0x7d;
LAB_002f157c:
  *(undefined1 *)(lVar6 + uVar10) = uVar8;
  return;
}


// ===== 002f15bc  FUN_002f15bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002f15bc(undefined8 *param_1,int *param_2)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  void *__dest;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  uint uVar10;
  void *__src;
  
  uVar3 = *(ushort *)(param_2 + 5);
  bVar2 = (&DAT_0017d33a)[(ulong)uVar3 & 0x3f];
  uVar10 = (uint)uVar3;
  if (bVar2 - 1 < 2) {
    if ((((uVar3 ^ 0xffff) & 0x202) == 0) && (*(char *)((long)param_2 + 0x16) == '\x01')) {
      __src = *(void **)(param_2 + 2);
joined_r0x002f17c4:
      uVar1 = (uint)uVar3;
      if ((uVar3 >> 1 & 1) == 0) goto LAB_002f17dc;
LAB_002f17c8:
      uVar10 = uVar1;
      if (*(char *)((long)param_2 + 0x16) != '\x01') goto LAB_002f17dc;
      uVar7 = (ulong)(uint)param_2[4];
    }
    else {
      if ((uVar3 & 1) != 0) {
        __src = (void *)0x0;
        goto joined_r0x002f17c4;
      }
      __src = (void *)FUN_0022ae18(param_2,1);
      uVar3 = *(ushort *)(param_2 + 5);
      uVar10 = (uint)uVar3;
      uVar1 = (uint)uVar3;
      if ((uVar3 >> 1 & 1) != 0) goto LAB_002f17c8;
LAB_002f17dc:
      if ((uVar10 >> 4 & 1) == 0) {
        if ((uVar10 & 1) != 0) {
          return;
        }
        uVar7 = FUN_0023c158(param_2,1);
        uVar7 = uVar7 & 0xffffffff;
      }
      else {
        uVar7 = (ulong)(uint)param_2[4];
        if ((uVar10 >> 10 & 1) != 0) {
          uVar7 = (ulong)(uint)(*param_2 + param_2[4]);
        }
      }
    }
    if ((int)uVar7 == 0) {
      return;
    }
    lVar8 = param_1[3];
    if ((ulong)param_1[2] <= lVar8 + uVar7) {
      iVar6 = FUN_002f0c14(param_1,uVar7);
      if (iVar6 != 0) {
        return;
      }
      lVar8 = param_1[3];
    }
    __dest = (void *)(param_1[1] + lVar8);
  }
  else {
    if (bVar2 != 3) {
      if (bVar2 != 5) {
        if (*(char *)((long)param_1 + 0x21) != '\0') {
          return;
        }
        puVar9 = (undefined8 *)*param_1;
        *(undefined4 *)((long)puVar9 + 0x24) = 1;
        FUN_0023c180(*puVar9,"JSON cannot hold BLOB values",0xffffffffffffffff,1,0xffffffffffffffff)
        ;
        *(undefined1 *)((long)param_1 + 0x21) = 2;
        if ((*(char *)(param_1 + 4) == '\0') && (lVar8 = param_1[1], lVar8 != 0)) {
          puVar9 = &DAT_00313858;
          if (DAT_00313830 != 0) {
            if (DAT_00316f08 != 0) {
              (*DAT_003138b0)();
            }
            iVar6 = (*DAT_00313868)(lVar8);
            DAT_00316e60 = DAT_00316e60 - iVar6;
            DAT_00316ea8 = DAT_00316ea8 + -1;
            (*DAT_00313858)(lVar8);
            if (DAT_00316f08 == 0) goto LAB_002f177c;
            puVar9 = &DAT_003138c0;
            lVar8 = DAT_00316f08;
          }
          (*(code *)*puVar9)(lVar8);
        }
LAB_002f177c:
        *(undefined1 *)(param_1 + 4) = 1;
        uVar5 = _UNK_00177618;
        uVar4 = _DAT_00177610;
        param_1[1] = (long)param_1 + 0x22;
        param_1[3] = uVar5;
        param_1[2] = uVar4;
        return;
      }
      lVar8 = param_1[3];
      if ((ulong)param_1[2] <= lVar8 + 4U) {
        iVar6 = FUN_002f0c14(param_1,4);
        if (iVar6 != 0) {
          return;
        }
        lVar8 = param_1[3];
      }
      *(undefined4 *)(param_1[1] + lVar8) = 0x6c6c756e;
      lVar8 = param_1[3] + 4;
      goto LAB_002f1850;
    }
    if ((((uVar10 ^ 0xffffffff) & 0x202) == 0) && (*(char *)((long)param_2 + 0x16) == '\x01')) {
      __src = *(void **)(param_2 + 2);
joined_r0x002f186c:
      uVar1 = (uint)uVar3;
      if ((uVar3 >> 1 & 1) == 0) goto LAB_002f1888;
LAB_002f1870:
      uVar10 = uVar1;
      if (*(char *)((long)param_2 + 0x16) != '\x01') goto LAB_002f1888;
      uVar7 = (ulong)(uint)param_2[4];
joined_r0x002f1880:
      if ((uVar10 >> 0xb & 1) == 0) goto LAB_002f1914;
    }
    else {
      if ((uVar3 & 1) != 0) {
        __src = (void *)0x0;
        goto joined_r0x002f186c;
      }
      __src = (void *)FUN_0022ae18(param_2,1);
      uVar3 = *(ushort *)(param_2 + 5);
      uVar10 = (uint)uVar3;
      uVar1 = (uint)uVar3;
      if ((uVar3 >> 1 & 1) != 0) goto LAB_002f1870;
LAB_002f1888:
      if ((uVar10 >> 4 & 1) != 0) {
        uVar1 = param_2[4];
        if ((uVar10 >> 10 & 1) != 0) {
          uVar1 = *param_2 + uVar1;
        }
        uVar7 = (ulong)uVar1;
        goto joined_r0x002f1880;
      }
      if ((uVar10 & 1) != 0) {
        uVar7 = 0;
        goto joined_r0x002f1880;
      }
      uVar7 = FUN_0023c158(param_2,1);
      uVar7 = uVar7 & 0xffffffff;
      if ((*(ushort *)(param_2 + 5) >> 0xb & 1) == 0) goto LAB_002f1914;
    }
    if (*(char *)((long)param_2 + 0x17) != 'J') {
LAB_002f1914:
      FUN_002f1930(param_1,__src);
      return;
    }
    if ((int)uVar7 == 0) {
      return;
    }
    lVar8 = param_1[3];
    if ((ulong)param_1[2] <= lVar8 + uVar7) {
      iVar6 = FUN_002f0c14(param_1,uVar7);
      if (iVar6 != 0) {
        return;
      }
      lVar8 = param_1[3];
    }
    __dest = (void *)(param_1[1] + lVar8);
  }
  memcpy(__dest,__src,uVar7);
  lVar8 = param_1[3] + uVar7;
LAB_002f1850:
  param_1[3] = lVar8;
  return;
}


// ===== 002f1930  FUN_002f1930 =====

void FUN_002f1930(long param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  byte bVar6;
  
  if (param_2 != (byte *)0x0) {
    lVar3 = *(long *)(param_1 + 0x18);
    uVar5 = (ulong)param_3;
    if (*(ulong *)(param_1 + 0x10) <= uVar5 + lVar3 + 2) {
      iVar2 = FUN_002f0c14(param_1,param_3 + 2);
      if (iVar2 != 0) {
        return;
      }
      lVar3 = *(long *)(param_1 + 0x18);
    }
    *(long *)(param_1 + 0x18) = lVar3 + 1;
    *(undefined1 *)(*(long *)(param_1 + 8) + lVar3) = 0x22;
    if (param_3 != 0) {
      lVar3 = uVar5 + 7;
      do {
        bVar6 = *param_2;
        bVar1 = bVar6;
        if ((bVar6 == 0x5c) || (bVar6 == 0x22)) {
LAB_002f1a04:
          bVar6 = bVar1;
          lVar4 = *(long *)(param_1 + 0x18);
          if (*(ulong *)(param_1 + 0x10) < uVar5 + lVar4 + 3) {
            iVar2 = FUN_002f0c14(param_1,(int)uVar5 + 3);
            if (iVar2 != 0) {
              return;
            }
            lVar4 = *(long *)(param_1 + 0x18);
          }
          *(long *)(param_1 + 0x18) = lVar4 + 1;
          *(undefined1 *)(*(long *)(param_1 + 8) + lVar4) = 0x5c;
        }
        else if (bVar6 < 0x20) {
          bVar1 = (&DAT_00177d70)[bVar6];
          if ((&DAT_00177d70)[bVar6] != 0) goto LAB_002f1a04;
          lVar4 = *(long *)(param_1 + 0x18);
          if (*(ulong *)(param_1 + 0x10) < (ulong)(lVar3 + lVar4)) {
            iVar2 = FUN_002f0c14(param_1,(int)uVar5 + 7);
            if (iVar2 != 0) {
              return;
            }
            lVar4 = *(long *)(param_1 + 0x18);
          }
          *(long *)(param_1 + 0x18) = lVar4 + 1;
          *(undefined1 *)(*(long *)(param_1 + 8) + lVar4) = 0x5c;
          lVar4 = *(long *)(param_1 + 0x18);
          *(long *)(param_1 + 0x18) = lVar4 + 1;
          *(undefined1 *)(*(long *)(param_1 + 8) + lVar4) = 0x75;
          lVar4 = *(long *)(param_1 + 0x18);
          *(long *)(param_1 + 0x18) = lVar4 + 1;
          *(undefined1 *)(*(long *)(param_1 + 8) + lVar4) = 0x30;
          lVar4 = *(long *)(param_1 + 0x18);
          *(long *)(param_1 + 0x18) = lVar4 + 1;
          *(undefined1 *)(*(long *)(param_1 + 8) + lVar4) = 0x30;
          lVar4 = *(long *)(param_1 + 0x18);
          *(long *)(param_1 + 0x18) = lVar4 + 1;
          *(byte *)(*(long *)(param_1 + 8) + lVar4) = bVar6 >> 4 | 0x30;
          bVar6 = "0123456789abcdef"[(ulong)bVar6 & 0xf];
        }
        lVar4 = *(long *)(param_1 + 0x18);
        uVar5 = uVar5 - 1;
        lVar3 = lVar3 + 1;
        *(long *)(param_1 + 0x18) = lVar4 + 1;
        *(byte *)(*(long *)(param_1 + 8) + lVar4) = bVar6;
        param_2 = param_2 + 1;
      } while (uVar5 != 0);
    }
    lVar3 = *(long *)(param_1 + 0x18);
    *(long *)(param_1 + 0x18) = lVar3 + 1;
    *(undefined1 *)(*(long *)(param_1 + 8) + lVar3) = 0x22;
  }
  return;
}


// ===== 002f1b18  FUN_002f1b18 =====

void FUN_002f1b18(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 != 0) {
    puVar2 = &DAT_00313858;
    if (DAT_00313830 != 0) {
      if (DAT_00316f08 != 0) {
        (*DAT_003138b0)();
      }
      iVar1 = (*DAT_00313868)(lVar3);
      DAT_00316e60 = DAT_00316e60 - iVar1;
      DAT_00316ea8 = DAT_00316ea8 + -1;
      (*DAT_00313858)(lVar3);
      if (DAT_00316f08 == 0) goto LAB_002f1bc0;
      puVar2 = &DAT_003138c0;
      lVar3 = DAT_00316f08;
    }
    (*(code *)*puVar2)(lVar3);
  }
LAB_002f1bc0:
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    puVar2 = &DAT_00313858;
    if (DAT_00313830 != 0) {
      if (DAT_00316f08 != 0) {
        (*DAT_003138b0)();
      }
      iVar1 = (*DAT_00313868)(lVar3);
      DAT_00316e60 = DAT_00316e60 - iVar1;
      DAT_00316ea8 = DAT_00316ea8 + -1;
      (*DAT_00313858)(lVar3);
      if (DAT_00316f08 == 0) goto LAB_002f1c40;
      puVar2 = &DAT_003138c0;
      lVar3 = DAT_00316f08;
    }
    (*(code *)*puVar2)(lVar3);
  }
LAB_002f1c40:
  FUN_002f23c4(param_1 + 0x30);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(long *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}


// ===== 002f1c6c  FUN_002f1c6c =====

ulong FUN_002f1c6c(uint *param_1,ulong param_2)

{
  byte *pbVar1;
  undefined1 *puVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  short sVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  char *__s1;
  undefined2 *puVar12;
  undefined2 uVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  undefined1 uVar17;
  
  lVar16 = *(long *)(param_1 + 4);
  uVar15 = param_2 & 0xffffffff;
  do {
    uVar11 = uVar15;
    uVar10 = (uint)uVar11;
    uVar15 = (ulong)(uVar10 + 1);
    bVar4 = *(byte *)(lVar16 + uVar11);
  } while ((&DAT_00181588)[bVar4] != '\0');
  __s1 = (char *)(lVar16 + uVar11);
  uVar9 = (uint)bVar4;
  if (bVar4 < 0x6e) {
    if (bVar4 == 0x22) {
      bVar4 = *(byte *)(lVar16 + uVar15);
      if (bVar4 < 0x20) {
        return 0xffffffff;
      }
      uVar17 = 0;
      do {
        iVar8 = (int)uVar11;
        if (bVar4 == 0x5c) {
          uVar11 = (ulong)(iVar8 + 2);
          uVar17 = 2;
          pbVar1 = (byte *)(lVar16 + uVar11);
          uVar9 = *pbVar1 - 0x62;
          if (uVar9 < 0x14) {
            if ((1 << (ulong)(uVar9 & 0x1f) & 0x51011U) == 0) {
              if (uVar9 != 0x13) goto LAB_002f1e3c;
              if (((byte)(&DAT_0017d382)[pbVar1[1]] >> 3 & 1) == 0) {
                return 0xffffffff;
              }
              if (((byte)(&DAT_0017d382)[pbVar1[2]] >> 3 & 1) == 0) {
                return 0xffffffff;
              }
              if (((byte)(&DAT_0017d382)[pbVar1[3]] >> 3 & 1) == 0) {
                return 0xffffffff;
              }
              if (((byte)(&DAT_0017d382)[pbVar1[4]] >> 3 & 1) == 0) {
                return 0xffffffff;
              }
            }
          }
          else {
LAB_002f1e3c:
            uVar9 = *pbVar1 - 0x22;
            if (0x3a < uVar9) {
              return 0xffffffff;
            }
            if ((1L << ((ulong)uVar9 & 0x3f) & 0x400000000002001U) == 0) {
              return 0xffffffff;
            }
          }
        }
        else {
          uVar11 = uVar15;
          if (bVar4 == 0x22) {
            uVar9 = iVar8 + 2;
            if ((*(long *)(param_1 + 2) == 0) || (param_1[1] <= *param_1)) {
              FUN_002f2d5c(param_1,5,uVar9 - uVar10,__s1);
            }
            else {
              puVar12 = (undefined2 *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0x10);
              *puVar12 = 5;
              *(char **)(puVar12 + 4) = __s1;
              uVar14 = *param_1;
              *(uint *)(puVar12 + 2) = uVar9 - uVar10;
              *param_1 = uVar14 + 1;
            }
            if ((char)param_1[8] != '\0') {
              return (ulong)uVar9;
            }
            *(undefined1 *)(*(long *)(param_1 + 2) + (ulong)(*param_1 - 1) * 0x10 + 1) = uVar17;
            return (ulong)uVar9;
          }
        }
        uVar15 = (ulong)((int)uVar11 + 1);
        bVar4 = *(byte *)(lVar16 + uVar15);
        if (bVar4 < 0x20) {
          return 0xffffffff;
        }
      } while( true );
    }
    if (uVar9 == 0x5b) {
      if ((*(long *)(param_1 + 2) == 0) || (param_1[1] <= *param_1)) {
        uVar10 = FUN_002f2d5c(param_1,6,0,0);
      }
      else {
        puVar12 = (undefined2 *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0x10);
        *puVar12 = 6;
        *(undefined8 *)(puVar12 + 4) = 0;
        uVar10 = *param_1;
        *(undefined4 *)(puVar12 + 2) = 0;
        *param_1 = uVar10 + 1;
      }
      if ((int)uVar10 < 0) {
        return 0xffffffff;
      }
      *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar10 * 0x10 + 8) = 0;
      do {
        do {
          iVar8 = (int)uVar11;
          uVar11 = (ulong)(iVar8 + 1);
        } while ((&DAT_00181588)[*(byte *)(lVar16 + uVar11)] != '\0');
        sVar6 = *(short *)((long)param_1 + 0x22);
        *(short *)((long)param_1 + 0x22) = sVar6 + 1;
        if (2000 < (ushort)(sVar6 + 1U)) {
          return 0xffffffff;
        }
        uVar15 = FUN_002f1c6c(param_1,uVar11);
        *(short *)((long)param_1 + 0x22) = *(short *)((long)param_1 + 0x22) + -1;
        if ((int)uVar15 < 0) {
          if ((int)uVar15 != -3) {
            return 0xffffffff;
          }
          uVar9 = *param_1;
          goto LAB_002f2380;
        }
        do {
          bVar4 = *(byte *)(lVar16 + (uVar15 & 0xffffffff));
          uVar11 = uVar15 & 0xffffffff;
          uVar15 = (ulong)((int)uVar15 + 1);
        } while ((&DAT_00181588)[bVar4] != '\0');
      } while (bVar4 == 0x2c);
      if (bVar4 != 0x5d) {
        return 0xffffffff;
      }
      uVar9 = *param_1;
      lVar16 = *(long *)(param_1 + 2) + (ulong)uVar10 * 0x10;
LAB_002f2240:
      *(uint *)(lVar16 + 4) = uVar9 + ~uVar10;
      return uVar15;
    }
    if (((uVar9 == 0x66) && (iVar8 = strncmp(__s1,"false",5), iVar8 == 0)) &&
       (uVar11 = (ulong)(uVar10 + 5), ((&DAT_0017d382)[*(byte *)(lVar16 + uVar11)] & 6) == 0)) {
      if ((*(long *)(param_1 + 2) != 0) && (*param_1 < param_1[1])) {
        puVar12 = (undefined2 *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0x10);
        uVar13 = 2;
LAB_002f22e4:
        *puVar12 = uVar13;
        goto LAB_002f22e8;
      }
      uVar17 = 2;
      goto LAB_002f234c;
    }
  }
  else if (uVar9 == 0x6e) {
    iVar8 = strncmp(__s1,"null",4);
    if ((iVar8 == 0) &&
       (uVar11 = (ulong)(uVar10 + 4), ((&DAT_0017d382)[*(byte *)(lVar16 + uVar11)] & 6) == 0)) {
      if ((*(long *)(param_1 + 2) != 0) && (*param_1 < param_1[1])) {
        puVar12 = (undefined2 *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0x10);
        *puVar12 = 0;
LAB_002f22e8:
        *(undefined8 *)(puVar12 + 4) = 0;
        uVar10 = *param_1;
        *(undefined4 *)(puVar12 + 2) = 0;
        goto LAB_002f22f4;
      }
      uVar17 = 0;
LAB_002f234c:
      iVar8 = 0;
      __s1 = (char *)0x0;
      goto LAB_002f2354;
    }
  }
  else if (uVar9 == 0x74) {
    iVar8 = strncmp(__s1,"true",4);
    if ((iVar8 == 0) &&
       (uVar11 = (ulong)(uVar10 + 4), ((&DAT_0017d382)[*(byte *)(lVar16 + uVar11)] & 6) == 0)) {
      if ((*(long *)(param_1 + 2) != 0) && (*param_1 < param_1[1])) {
        puVar12 = (undefined2 *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0x10);
        uVar13 = 1;
        goto LAB_002f22e4;
      }
      uVar17 = 1;
      goto LAB_002f234c;
    }
  }
  else if (bVar4 == 0x7b) {
    if ((*(long *)(param_1 + 2) == 0) || (param_1[1] <= *param_1)) {
      uVar10 = FUN_002f2d5c(param_1,7,0,0);
    }
    else {
      puVar12 = (undefined2 *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0x10);
      *puVar12 = 7;
      *(undefined8 *)(puVar12 + 4) = 0;
      uVar10 = *param_1;
      *(undefined4 *)(puVar12 + 2) = 0;
      *param_1 = uVar10 + 1;
    }
    if ((int)uVar10 < 0) {
      return 0xffffffff;
    }
    do {
      do {
        iVar8 = (int)uVar11;
        uVar11 = (ulong)(iVar8 + 1);
      } while ((&DAT_00181588)[*(byte *)(lVar16 + uVar11)] != '\0');
      sVar6 = *(short *)((long)param_1 + 0x22);
      *(short *)((long)param_1 + 0x22) = sVar6 + 1;
      if (2000 < (ushort)(sVar6 + 1U)) {
        return 0xffffffff;
      }
      uVar9 = FUN_002f1c6c(param_1,uVar11);
      if ((int)uVar9 < 0) {
        *(short *)((long)param_1 + 0x22) = *(short *)((long)param_1 + 0x22) + -1;
        if (uVar9 != 0xfffffffe) {
          return 0xffffffff;
        }
        uVar9 = *param_1;
LAB_002f2380:
        uVar14 = iVar8 + 2;
        if (uVar9 != uVar10 + 1) {
          uVar14 = 0xffffffff;
        }
        return (ulong)uVar14;
      }
      if ((char)param_1[8] != '\0') {
        return 0xffffffff;
      }
      if (*(char *)(*(long *)(param_1 + 2) + (ulong)(*param_1 - 1) * 0x10) != '\x05') {
        return 0xffffffff;
      }
      lVar3 = *(long *)(param_1 + 2) + (ulong)(*param_1 - 1) * 0x10;
      *(byte *)(lVar3 + 1) = *(byte *)(lVar3 + 1) | 0x40;
      do {
        uVar15 = (ulong)uVar9;
        uVar9 = uVar9 + 1;
      } while ((&DAT_00181588)[*(byte *)(lVar16 + uVar15)] != '\0');
      if (*(byte *)(lVar16 + uVar15) != 0x3a) {
        return 0xffffffff;
      }
      uVar15 = FUN_002f1c6c(param_1);
      *(short *)((long)param_1 + 0x22) = *(short *)((long)param_1 + 0x22) + -1;
      if ((int)uVar15 < 0) {
        return 0xffffffff;
      }
      do {
        bVar4 = *(byte *)(lVar16 + (uVar15 & 0xffffffff));
        uVar11 = uVar15 & 0xffffffff;
        uVar15 = (ulong)((int)uVar15 + 1);
      } while ((&DAT_00181588)[bVar4] != '\0');
    } while (bVar4 == 0x2c);
    if (bVar4 != 0x7d) {
      return 0xffffffff;
    }
    uVar9 = *param_1;
    lVar16 = *(long *)(param_1 + 2) + (ulong)uVar10 * 0x10;
    goto LAB_002f2240;
  }
  if ((uVar9 != 0x2d) && (9 < uVar9 - 0x30)) {
    if (uVar9 == 0) {
      return 0;
    }
    if (uVar9 != 0x7d) {
      if (bVar4 != 0x5d) {
        return 0xffffffff;
      }
      return 0xfffffffd;
    }
    return 0xfffffffe;
  }
  if (bVar4 < 0x31) {
    uVar9 = uVar10;
    if (bVar4 == 0x2d) {
      uVar9 = uVar10 + 1;
    }
    if ((*(char *)(lVar16 + (ulong)uVar9) == '0') &&
       (*(byte *)(lVar16 + (ulong)(uVar9 + 1)) - 0x30 < 10)) {
      return 0xffffffff;
    }
  }
  do {
    uVar11 = uVar15;
    bVar4 = *(byte *)(lVar16 + uVar11);
    uVar15 = (ulong)((int)uVar11 + 1);
  } while (bVar4 - 0x30 < 10);
  uVar9 = (int)uVar11 - 1;
  if (bVar4 == 0x2e) {
    if (*(char *)(lVar16 + (ulong)uVar9) == '-') {
      return 0xffffffff;
    }
    do {
      uVar11 = uVar15;
      bVar4 = *(byte *)(lVar16 + uVar11);
      uVar15 = (ulong)((int)uVar11 + 1);
    } while (bVar4 - 0x30 < 10);
    if (bVar4 == 0x2e) {
      return 0xffffffff;
    }
    uVar9 = (int)uVar11 - 1;
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  bVar5 = *(byte *)(lVar16 + (ulong)uVar9);
  if ((bVar4 & 0xdf) == 0x45) {
    if (bVar5 < 0x30) {
      return 0xffffffff;
    }
    bVar4 = *(byte *)(lVar16 + (ulong)(uVar9 + 2));
    if ((bVar4 == 0x2d) || (bVar4 == 0x2b)) {
      uVar11 = (ulong)(uVar9 + 2);
      bVar4 = *(byte *)(lVar16 + (ulong)(uVar9 + 3));
    }
    if (bVar4 - 0x3a < 0xfffffff6) {
      return 0xffffffff;
    }
    do {
      uVar15 = uVar11;
      uVar11 = (ulong)((int)uVar15 + 1);
      bVar4 = *(byte *)(lVar16 + uVar11);
    } while (bVar4 - 0x30 < 10);
    if (bVar4 == 0x2e) {
      return 0xffffffff;
    }
    if ((bVar4 & 0xdf) == 0x45) {
      return 0xffffffff;
    }
    bVar5 = *(byte *)(lVar16 + uVar15);
    bVar7 = true;
  }
  if (bVar5 < 0x30) {
    return 0xffffffff;
  }
  uVar17 = 3;
  if (bVar7) {
    uVar17 = 4;
  }
  iVar8 = (int)uVar11 - uVar10;
  if ((*(long *)(param_1 + 2) != 0) && (*param_1 < param_1[1])) {
    puVar2 = (undefined1 *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0x10);
    *(char **)(puVar2 + 8) = __s1;
    uVar10 = *param_1;
    *puVar2 = uVar17;
    puVar2[1] = 0;
    *(int *)(puVar2 + 4) = iVar8;
LAB_002f22f4:
    *param_1 = uVar10 + 1;
    return uVar11;
  }
LAB_002f2354:
  FUN_002f2d5c(param_1,uVar17,iVar8,__s1);
  return uVar11;
}


// ===== 002f23c4  FUN_002f23c4 =====

void FUN_002f23c4(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  lVar3 = param_1[1];
  if (lVar3 != 0) {
    puVar2 = &DAT_00313858;
    if (DAT_00313830 != 0) {
      if (DAT_00316f08 != 0) {
        (*DAT_003138b0)();
      }
      iVar1 = (*DAT_00313868)(lVar3);
      DAT_00316e60 = DAT_00316e60 - iVar1;
      DAT_00316ea8 = DAT_00316ea8 + -1;
      (*DAT_00313858)(lVar3);
      if (DAT_00316f08 == 0) goto LAB_002f2468;
      puVar2 = &DAT_003138c0;
      lVar3 = DAT_00316f08;
    }
    (*(code *)*puVar2)(lVar3);
  }
LAB_002f2468:
  lVar3 = param_1[3];
  *param_1 = 0;
  param_1[1] = 0;
  if (lVar3 != 0) {
    puVar2 = &DAT_00313858;
    if (DAT_00313830 != 0) {
      if (DAT_00316f08 != 0) {
        (*DAT_003138b0)();
      }
      iVar1 = (*DAT_00313868)(lVar3);
      DAT_00316e60 = DAT_00316e60 - iVar1;
      DAT_00316ea8 = DAT_00316ea8 + -1;
      (*DAT_00313858)(lVar3);
      if (DAT_00316f08 == 0) goto LAB_002f24ec;
      puVar2 = &DAT_003138c0;
      lVar3 = DAT_00316f08;
    }
    (*(code *)*puVar2)(lVar3);
  }
LAB_002f24ec:
  param_1[3] = 0;
  return;
}


// ===== 002f2504  FUN_002f2504 =====

void FUN_002f2504(long param_1,uint param_2,undefined4 param_3)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  uint *puVar4;
  uint uVar5;
  ulong uVar6;
  
  lVar3 = *(long *)(param_1 + 8);
  pcVar1 = (char *)(lVar3 + (ulong)param_2 * 0x10);
  *(undefined4 *)(*(long *)(param_1 + 0x18) + (ulong)param_2 * 4) = param_3;
  if (*pcVar1 == '\x06') {
    puVar4 = (uint *)(lVar3 + (ulong)param_2 * 0x10 + 4);
    if (*puVar4 != 0) {
      uVar6 = 1;
      do {
        FUN_002f2504(param_1,(int)uVar6 + param_2,param_2);
        if ((byte)pcVar1[uVar6 * 0x10] < 6) {
          iVar2 = 1;
        }
        else {
          iVar2 = *(int *)(pcVar1 + uVar6 * 0x10 + 4) + 1;
        }
        uVar5 = iVar2 + (int)uVar6;
        uVar6 = (ulong)uVar5;
      } while (uVar5 <= *puVar4);
    }
  }
  else if ((*pcVar1 == '\a') && (puVar4 = (uint *)(lVar3 + (ulong)param_2 * 0x10 + 4), *puVar4 != 0)
          ) {
    uVar5 = 1;
    do {
      *(uint *)(*(long *)(param_1 + 0x18) + (ulong)(uVar5 + param_2) * 4) = param_2;
      FUN_002f2504(param_1,uVar5 + param_2 + 1,param_2);
      if ((byte)pcVar1[(ulong)uVar5 * 0x10 + 0x10] < 6) {
        iVar2 = 1;
      }
      else {
        iVar2 = *(int *)(pcVar1 + (ulong)uVar5 * 0x10 + 0x14) + 1;
      }
      uVar5 = uVar5 + iVar2 + 1;
    } while (uVar5 <= *puVar4);
  }
  return;
}


// ===== 002f261c  FUN_002f261c =====

char * FUN_002f261c(uint *param_1,uint param_2,char *param_3,long param_4,undefined8 *param_5)

{
  int *piVar1;
  long lVar2;
  undefined2 *puVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char *__s1;
  char *pcVar9;
  char cVar10;
  ulong uVar11;
  char *pcVar12;
  char *__s2;
  long lVar13;
  uint local_7c;
  
  lVar13 = *(long *)(param_1 + 2);
  cVar10 = *param_3;
  pcVar9 = (char *)(lVar13 + (ulong)param_2 * 0x10);
  if (cVar10 == '\0') {
    return pcVar9;
  }
  uVar11 = (ulong)param_2;
LAB_002f265c:
  if ((*(byte *)(lVar13 + uVar11 * 0x10 + 1) >> 3 & 1) != 0) {
    return (char *)0x0;
  }
  if (cVar10 == '.') {
    if (*pcVar9 != '\a') {
      return (char *)0x0;
    }
    pcVar12 = param_3 + 1;
    cVar10 = *pcVar12;
    if (cVar10 == '\"') {
      uVar7 = 1;
      cVar10 = param_3[2];
      if (cVar10 != '\0') {
        while (cVar10 != '\"') {
          uVar7 = uVar7 + 1;
          cVar10 = pcVar12[uVar7];
          if (cVar10 == '\0') goto LAB_002f2a18;
        }
        uVar6 = uVar7 - 1;
        __s2 = param_3 + 2;
        local_7c = uVar7 + 1;
LAB_002f28ec:
        uVar7 = *(uint *)(pcVar9 + 4);
        do {
          if (uVar7 != 0) {
            uVar8 = 1;
            do {
              if ((pcVar9[(ulong)uVar8 * 0x10 + 1] & 1U) == 0) {
                if (*(uint *)(pcVar9 + (ulong)uVar8 * 0x10 + 4) == uVar6 + 2) {
                  __s1 = (char *)(*(long *)(pcVar9 + (ulong)uVar8 * 0x10 + 8) + 1);
LAB_002f2958:
                  iVar5 = strncmp(__s1,__s2,(ulong)uVar6);
                  if (iVar5 == 0) {
                    param_3 = pcVar12 + local_7c;
                    param_2 = param_2 + uVar8 + 1;
                    goto LAB_002f29c0;
                  }
                }
              }
              else if (*(uint *)(pcVar9 + (ulong)uVar8 * 0x10 + 4) == uVar6) {
                __s1 = *(char **)(pcVar9 + (ulong)uVar8 * 0x10 + 8);
                goto LAB_002f2958;
              }
              uVar8 = uVar8 + 1;
              if ((byte)pcVar9[(ulong)uVar8 * 0x10] < 6) {
                iVar5 = 1;
              }
              else {
                iVar5 = *(int *)(pcVar9 + (ulong)uVar8 * 0x10 + 4) + 1;
              }
              uVar8 = iVar5 + uVar8;
            } while (uVar8 <= uVar7);
          }
          if (((byte)pcVar9[1] >> 5 & 1) == 0) {
            if (param_4 == 0) {
              return (char *)0x0;
            }
            if ((lVar13 == 0) || (param_1[1] <= *param_1)) {
              uVar7 = FUN_002f2d5c(param_1,7,2,0);
            }
            else {
              puVar3 = (undefined2 *)(lVar13 + (ulong)*param_1 * 0x10);
              *puVar3 = 7;
              *(undefined8 *)(puVar3 + 4) = 0;
              uVar7 = *param_1;
              *(undefined4 *)(puVar3 + 2) = 2;
              *param_1 = uVar7 + 1;
            }
            if ((*(long *)(param_1 + 2) == 0) || (param_1[1] <= *param_1)) {
              uVar8 = FUN_002f2d5c(param_1,5,uVar6,__s2);
            }
            else {
              puVar3 = (undefined2 *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0x10);
              *puVar3 = 5;
              *(char **)(puVar3 + 4) = __s2;
              uVar8 = *param_1;
              *(uint *)(puVar3 + 2) = uVar6;
              *param_1 = uVar8 + 1;
            }
            pcVar9 = (char *)FUN_002f2bdc(param_1,pcVar12 + local_7c,param_4,param_5);
            if ((char)param_1[8] != '\0') {
              return (char *)0x0;
            }
            if (pcVar9 == (char *)0x0) {
              return (char *)0x0;
            }
            lVar13 = *(long *)(param_1 + 2) + (ulong)param_2 * 0x10;
            *(uint *)(lVar13 + 8) = uVar7 - param_2;
            lVar2 = *(long *)(param_1 + 2) + (ulong)uVar8 * 0x10;
            *(byte *)(lVar13 + 1) = *(byte *)(lVar13 + 1) | 0x20;
            *(byte *)(lVar2 + 1) = *(byte *)(lVar2 + 1) | 1;
            return pcVar9;
          }
          param_2 = *(int *)(pcVar9 + 8) + param_2;
          pcVar9 = (char *)(lVar13 + (ulong)param_2 * 0x10);
          uVar7 = *(uint *)(pcVar9 + 4);
        } while( true );
      }
    }
    else {
      uVar6 = 0;
      while (((cVar10 != '\0' && (cVar10 != '.')) && (cVar10 != '['))) {
        uVar6 = uVar6 + 1;
        cVar10 = pcVar12[uVar6];
      }
      __s2 = pcVar12;
      local_7c = uVar6;
      if (uVar6 != 0) goto LAB_002f28ec;
    }
LAB_002f2a18:
    *param_5 = pcVar12;
    return (char *)0x0;
  }
  if (cVar10 != '[') goto LAB_002f2a9c;
  uVar11 = (ulong)(byte)param_3[1];
  if (uVar11 - 0x3a < 0xfffffffffffffff6) {
    uVar7 = 0;
    uVar6 = 1;
LAB_002f2690:
    if (param_3[1] == 0x23) {
      pcVar12 = pcVar9;
      uVar8 = param_2;
      if (*pcVar9 != '\x06') {
        return (char *)0x0;
      }
      do {
        for (; uVar6 <= *(uint *)(pcVar12 + 4); uVar6 = uVar6 + 1) {
          while( true ) {
            if (((pcVar12 + (ulong)uVar6 * 0x10)[1] & 4U) == 0) {
              uVar7 = uVar7 + 1;
            }
            if ((byte)pcVar12[(ulong)uVar6 * 0x10] < 6) break;
            uVar6 = *(int *)(pcVar12 + (ulong)uVar6 * 0x10 + 4) + 1 + uVar6;
            if (*(uint *)(pcVar12 + 4) < uVar6) goto LAB_002f2704;
          }
        }
LAB_002f2704:
        if (((byte)pcVar12[1] >> 5 & 1) == 0) goto LAB_002f2764;
        piVar1 = (int *)(pcVar12 + 8);
        uVar6 = 1;
        pcVar12 = (char *)(lVar13 + (long)(int)(*piVar1 + uVar8) * 0x10);
        uVar8 = *piVar1 + uVar8;
      } while( true );
    }
    goto LAB_002f2a9c;
  }
  uVar7 = 0;
  uVar6 = 1;
  do {
    uVar6 = uVar6 + 1;
    iVar5 = (int)uVar11;
    uVar11 = (ulong)(byte)param_3[uVar6];
    uVar7 = (iVar5 + uVar7 * 10) - 0x30;
  } while (0xfffffffffffffff5 < uVar11 - 0x3a);
  if ((uVar6 < 2) || (param_3[uVar6] != 0x5d)) goto LAB_002f2690;
  if (*pcVar9 != '\x06') {
    return (char *)0x0;
  }
  goto LAB_002f2840;
LAB_002f2764:
  uVar11 = (ulong)(byte)param_3[2];
  if (param_3[2] == 0x2d) {
    uVar11 = (ulong)(byte)param_3[3];
    if (uVar11 - 0x3a < 0xfffffffffffffff6) goto LAB_002f2a9c;
    uVar8 = 0;
    uVar6 = 3;
    do {
      uVar6 = uVar6 + 1;
      iVar5 = (int)uVar11;
      uVar11 = (ulong)(byte)param_3[uVar6];
      uVar8 = (iVar5 + uVar8 * 10) - 0x30;
    } while (0xfffffffffffffff5 < uVar11 - 0x3a);
    bVar4 = uVar7 < uVar8;
    uVar7 = uVar7 - uVar8;
    if (bVar4) {
      return (char *)0x0;
    }
  }
  else {
    uVar6 = 2;
  }
  if ((int)uVar11 == 0x5d) {
LAB_002f2840:
    param_3 = param_3 + (uVar6 + 1);
    while (*(uint *)(pcVar9 + 4) == 0) {
LAB_002f284c:
      if (((byte)pcVar9[1] >> 5 & 1) == 0) {
        if (param_4 == 0) {
          return (char *)0x0;
        }
        if (uVar7 != 0) {
          return (char *)0x0;
        }
        if ((lVar13 == 0) || (param_1[1] <= *param_1)) {
          uVar6 = FUN_002f2d5c(param_1,6,1,0);
        }
        else {
          puVar3 = (undefined2 *)(lVar13 + (ulong)*param_1 * 0x10);
          *puVar3 = 6;
          *(undefined8 *)(puVar3 + 4) = 0;
          uVar6 = *param_1;
          *(undefined4 *)(puVar3 + 2) = 1;
          *param_1 = uVar6 + 1;
        }
        pcVar9 = (char *)FUN_002f2bdc(param_1,param_3,param_4,param_5);
        if ((char)param_1[8] != '\0') {
          return (char *)0x0;
        }
        if (pcVar9 == (char *)0x0) {
          return (char *)0x0;
        }
        lVar13 = *(long *)(param_1 + 2) + (ulong)param_2 * 0x10;
        *(uint *)(lVar13 + 8) = uVar6 - param_2;
        *(byte *)(lVar13 + 1) = *(byte *)(lVar13 + 1) | 0x20;
        return pcVar9;
      }
LAB_002f2854:
      param_2 = *(int *)(pcVar9 + 8) + param_2;
      pcVar9 = (char *)(lVar13 + (ulong)param_2 * 0x10);
    }
    uVar6 = 1;
    while( true ) {
      uVar11 = (ulong)uVar6;
      if ((uVar7 == 0) && (((byte)pcVar9[uVar11 * 0x10 + 1] >> 2 & 1) == 0)) break;
      if ((byte)pcVar9[(ulong)uVar6 * 0x10] < 6) {
        iVar5 = 1;
      }
      else {
        iVar5 = *(int *)(pcVar9 + (ulong)uVar6 * 0x10 + 4) + 1;
      }
      uVar6 = iVar5 + uVar6;
      uVar7 = (((byte)pcVar9[uVar11 * 0x10 + 1] >> 2 & 1) + uVar7) - 1;
      if (*(uint *)(pcVar9 + 4) < uVar6) goto LAB_002f284c;
    }
    if (((byte)pcVar9[1] >> 5 & 1) != 0) {
      uVar7 = 0;
      goto LAB_002f2854;
    }
    param_2 = uVar6 + param_2;
LAB_002f29c0:
    cVar10 = *param_3;
    pcVar9 = (char *)(lVar13 + (ulong)param_2 * 0x10);
    uVar11 = (ulong)param_2;
    if (cVar10 == '\0') {
      return pcVar9;
    }
    goto LAB_002f265c;
  }
LAB_002f2a9c:
  *param_5 = param_3;
  return (char *)0x0;
}


// ===== 002f2bdc  FUN_002f2bdc =====

long FUN_002f2bdc(uint *param_1,char *param_2,undefined4 *param_3,undefined8 param_4)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  undefined2 uVar7;
  
  *param_3 = 1;
  if (*param_2 == '.') {
    if ((*(long *)(param_1 + 2) == 0) || (param_1[1] <= *param_1)) {
      uVar5 = 7;
      goto LAB_002f2d0c;
    }
    puVar6 = (undefined2 *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0x10);
    uVar7 = 7;
  }
  else {
    if (*param_2 == '\0') {
      if ((*(long *)(param_1 + 2) == 0) || (param_1[1] <= *param_1)) {
        FUN_002f2d5c(param_1,0,0,0);
        cVar2 = (char)param_1[8];
      }
      else {
        puVar6 = (undefined2 *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0x10);
        *puVar6 = 0;
        *(undefined8 *)(puVar6 + 4) = 0;
        uVar1 = *param_1;
        *(undefined4 *)(puVar6 + 2) = 0;
        *param_1 = uVar1 + 1;
        cVar2 = (char)param_1[8];
      }
      if (cVar2 != '\0') {
        return 0;
      }
      return *(long *)(param_1 + 2) + (ulong)(*param_1 - 1) * 0x10;
    }
    iVar3 = strncmp(param_2,"[0]",3);
    if (iVar3 != 0) {
      return 0;
    }
    if ((*(long *)(param_1 + 2) == 0) || (param_1[1] <= *param_1)) {
      uVar5 = 6;
LAB_002f2d0c:
      FUN_002f2d5c(param_1,uVar5,0,0);
      cVar2 = (char)param_1[8];
      goto joined_r0x002f2d1c;
    }
    puVar6 = (undefined2 *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0x10);
    uVar7 = 6;
  }
  *puVar6 = uVar7;
  *(undefined8 *)(puVar6 + 4) = 0;
  uVar1 = *param_1;
  *(undefined4 *)(puVar6 + 2) = 0;
  *param_1 = uVar1 + 1;
  cVar2 = (char)param_1[8];
joined_r0x002f2d1c:
  if (cVar2 != '\0') {
    return 0;
  }
  lVar4 = FUN_002f261c(param_1,*param_1 - 1,param_2,param_3,param_4);
  return lVar4;
}


// ===== 002f2d5c  FUN_002f2d5c =====

uint FUN_002f2d5c(uint *param_1,undefined1 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  
  while( true ) {
    if ((char)param_1[8] != '\0') {
      return 0xffffffff;
    }
    uVar2 = param_1[1];
    uVar5 = *(undefined8 *)(param_1 + 2);
    iVar3 = sqlite3_initialize();
    if (iVar3 != 0) break;
    uVar2 = uVar2 * 2 + 10;
    lVar4 = FUN_0022b604(uVar5,(ulong)uVar2 << 4);
    if (lVar4 == 0) break;
    param_1[1] = uVar2;
    *(long *)(param_1 + 2) = lVar4;
    if (*param_1 < uVar2) {
      puVar1 = (undefined1 *)(lVar4 + (ulong)*param_1 * 0x10);
      *(undefined8 *)(puVar1 + 8) = param_4;
      uVar2 = *param_1;
      *puVar1 = param_2;
      puVar1[1] = 0;
      *(undefined4 *)(puVar1 + 4) = param_3;
      *param_1 = uVar2 + 1;
      return uVar2;
    }
  }
  *(undefined1 *)(param_1 + 8) = 1;
  return 0xffffffff;
}


// ===== 002f2e10  FUN_002f2e10 =====

undefined8 FUN_002f2e10(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  iVar1 = sqlite3_initialize();
  if ((iVar1 == 0) && (puVar3 = (undefined8 *)FUN_0022a6ac(0x60), puVar3 != (undefined8 *)0x0)) {
    uVar2 = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[9] = 0;
    puVar3[8] = 0;
    puVar3[0xb] = 0;
    puVar3[10] = 0;
    *param_2 = puVar3;
  }
  else {
    uVar2 = 7;
  }
  return uVar2;
}


// ===== 002f2e64  FUN_002f2e64 =====

void FUN_002f2e64(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar2 = sqlite3_mprintf("unable to use function %s in the requested context",
                          *(undefined8 *)(param_1[1] + 8));
  *(undefined4 *)((long)param_1 + 0x24) = 1;
  FUN_0023c180(*param_1,lVar2,0xffffffffffffffff,1,0xffffffffffffffff);
  if (lVar2 == 0) {
    return;
  }
  puVar3 = &DAT_00313858;
  if (DAT_00313830 != 0) {
    if (DAT_00316f08 != 0) {
      (*DAT_003138b0)();
    }
    iVar1 = (*DAT_00313868)(lVar2);
    DAT_00316e60 = DAT_00316e60 - iVar1;
    DAT_00316ea8 = DAT_00316ea8 + -1;
    (*DAT_00313858)(lVar2);
    if (DAT_00316f08 == 0) {
      return;
    }
    puVar3 = &DAT_003138c0;
    lVar2 = DAT_00316f08;
  }
                    /* WARNING: Could not recover jumptable at 0x002f2f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(lVar2);
  return;
}


// ===== 002f2f50  FUN_002f2f50 =====

undefined8 FUN_002f2f50(byte *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  byte *pbVar3;
  byte bVar4;
  
  bVar4 = *param_1;
  if (2 < bVar4) {
    uVar2 = FUN_002e9580(param_1);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    bVar4 = *param_1;
  }
  if (bVar4 == 0) {
    pbVar3 = *(byte **)(*(long *)(param_1 + 0x20) + 0x10);
    if (pbVar3 != (byte *)0x0) {
      iVar1 = *(int *)(param_1 + 0x50);
      do {
        if ((pbVar3 != param_1) && ((iVar1 == 0 || (*(int *)(pbVar3 + 0x50) == iVar1)))) {
          FUN_0024ebf4(pbVar3,iVar1,param_1);
          bVar4 = param_1[1];
          goto joined_r0x002f300c;
        }
        pbVar3 = *(byte **)(pbVar3 + 0x28);
      } while (pbVar3 != (byte *)0x0);
    }
    bVar4 = param_1[1];
    param_1[1] = bVar4 & 0xdf;
joined_r0x002f300c:
    if ((bVar4 & 1) != 0) {
      uVar2 = FUN_002552b8(param_1,param_2,param_3,param_4,1);
      return uVar2;
    }
    uVar2 = 8;
  }
  else {
    uVar2 = 4;
  }
  return uVar2;
}


// ===== 002f3024  FUN_002f3024 =====

undefined4 FUN_002f3024(int *param_1,undefined8 param_2,ulong param_3,uint param_4,code *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (param_1 == (int *)0x0) {
    sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x18240,
                "89c459e766ea7e9165d0beeb124708b955a4950d0f4792f457465d71b158d318");
    return 0x15;
  }
  lVar6 = *(long *)(param_1 + 8);
  if (*(long *)(lVar6 + 0x18) != 0) {
    param_3 = param_3 & 0xffffffff;
    (*DAT_003138b0)();
  }
  if (((int)(param_4 | (uint)param_3) < 0) ||
     ((long)*param_1 < (long)((ulong)param_4 + (param_3 & 0xffffffff)))) {
    iVar2 = 1;
    *(undefined4 *)(lVar6 + 0x50) = 1;
LAB_002f3094:
    FUN_0023e358(lVar6,iVar2);
    if (iVar2 == 0) goto LAB_002f30a4;
  }
  else {
    lVar7 = *(long *)(param_1 + 6);
    if (lVar7 == 0) {
      iVar2 = 4;
      *(undefined4 *)(lVar6 + 0x50) = 4;
      goto LAB_002f3094;
    }
    lVar4 = *(long *)(param_1 + 4);
    lVar5 = *(long *)(lVar4 + 8);
    if ((*(char *)(lVar5 + 0x11) != '\0') &&
       (*(int *)(lVar5 + 0x14) = *(int *)(lVar5 + 0x14) + 1, *(char *)(lVar5 + 0x12) == '\0')) {
      param_3 = param_3 & 0xffffffff;
      FUN_0022eb3c(lVar5);
      lVar4 = *(long *)(param_1 + 4);
    }
    iVar2 = (*param_5)(lVar4,param_1[1] + param_4,param_3,param_2);
    lVar4 = *(long *)(*(long *)(param_1 + 4) + 8);
    if ((*(char *)(lVar4 + 0x11) != '\0') &&
       (iVar1 = *(int *)(lVar4 + 0x14) + -1, *(int *)(lVar4 + 0x14) = iVar1, iVar1 == 0)) {
      FUN_0022eb04(lVar4);
    }
    if (iVar2 == 4) {
      FUN_0024cea8(lVar7);
      param_1[6] = 0;
      param_1[7] = 0;
      *(undefined4 *)(lVar6 + 0x50) = 4;
      goto LAB_002f3094;
    }
    *(int *)(lVar7 + 0x34) = iVar2;
    *(int *)(lVar6 + 0x50) = iVar2;
    if (iVar2 != 0) goto LAB_002f3094;
    if (*(long *)(lVar6 + 0x188) != 0) {
      iVar2 = 0;
      goto LAB_002f3094;
    }
    iVar2 = 0;
    *(undefined4 *)(lVar6 + 0x54) = 0xffffffff;
LAB_002f30a4:
    if (*(char *)(lVar6 + 0x67) == '\0') {
      uVar3 = 0;
      lVar6 = *(long *)(lVar6 + 0x18);
      goto joined_r0x002f31d0;
    }
  }
  uVar3 = FUN_0023e2e4(lVar6,iVar2);
  lVar6 = *(long *)(lVar6 + 0x18);
joined_r0x002f31d0:
  if (lVar6 != 0) {
    (*DAT_003138c0)();
  }
  return uVar3;
}


// ===== 002f31fc  FUN_002f31fc =====

void FUN_002f31fc(char *param_1)

{
  if (*param_1 != '\0') {
    FUN_002f3210();
    return;
  }
  FUN_002552b8();
  return;
}


// ===== 002f3210  FUN_002f3210 =====

undefined8 FUN_002f3210(char *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (*param_1 == '\x01') {
    uVar1 = 4;
  }
  else {
    uVar1 = FUN_002e9580();
    if ((int)uVar1 == 0) {
      uVar1 = FUN_002552b8(param_1,param_2,param_3,param_4,0);
      return uVar1;
    }
  }
  return uVar1;
}


// ===== 002f3280  FUN_002f3280 =====

void FUN_002f3280(undefined8 *param_1,long param_2)

{
  long lVar1;
  int *piVar2;
  long local_48;
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  piVar2 = (int *)*param_1;
  if ((*piVar2 < 2) || (*(code **)(piVar2 + 0x22) == (code *)0x0)) {
    (**(code **)(piVar2 + 0x1e))(piVar2,&local_40);
    local_48 = (long)(local_40 * 86400000.0);
  }
  else {
    (**(code **)(piVar2 + 0x22))(piVar2,&local_48);
  }
  local_40 = (double)((local_48 - *(long *)(param_2 + 0xb8)) * 1000000);
  if ((code *)param_1[0x20] != (code *)0x0) {
    (*(code *)param_1[0x20])(param_1[0x21],*(undefined8 *)(param_2 + 0xf8));
  }
  if ((*(byte *)((long)param_1 + 0x6e) >> 1 & 1) != 0) {
    (*(code *)param_1[0x1e])(2,param_1[0x1f],param_2,&local_40);
  }
  *(undefined8 *)(param_2 + 0xb8) = 0;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002f336c  FUN_002f336c =====

undefined8 FUN_002f336c(long *param_1,uint param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  size_t sVar5;
  void *__dest;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  
  iVar3 = *(int *)((long)param_1 + 0x14);
  uVar7 = (ulong)param_2;
  iVar2 = param_2 << (param_3 != (undefined8 *)0x0 && iVar3 == 0);
  if (*(uint *)(param_1 + 2) < (uint)(iVar2 + *(int *)((long)param_1 + 0x1c))) {
    uVar1 = iVar2 + *(uint *)(param_1 + 2) * 2;
    *(uint *)(param_1 + 2) = uVar1;
    lVar4 = FUN_0022b604(*param_1,(ulong)uVar1 << 3);
    if (lVar4 == 0) {
LAB_002f3548:
      *(undefined4 *)(param_1 + 4) = 7;
      return 1;
    }
    iVar3 = *(int *)((long)param_1 + 0x14);
    *param_1 = lVar4;
  }
  if (iVar3 == 0) {
    *(uint *)(param_1 + 3) = param_2;
    if (0 < (int)param_2) {
      uVar8 = (ulong)param_2;
      do {
        lVar4 = sqlite3_mprintf(&DAT_001716ae,*param_4);
        if (lVar4 == 0) goto LAB_002f3548;
        uVar1 = *(uint *)((long)param_1 + 0x1c);
        uVar8 = uVar8 - 1;
        param_4 = param_4 + 1;
        *(long *)(*param_1 + (ulong)uVar1 * 8) = lVar4;
        *(uint *)((long)param_1 + 0x1c) = uVar1 + 1;
      } while (uVar8 != 0);
    }
  }
  else if (*(uint *)(param_1 + 3) != param_2) {
    lVar4 = param_1[1];
    if (lVar4 != 0) {
      puVar6 = &DAT_00313858;
      if (DAT_00313830 != 0) {
        if (DAT_00316f08 != 0) {
          (*DAT_003138b0)();
        }
        iVar3 = (*DAT_00313868)(lVar4);
        DAT_00316e60 = DAT_00316e60 - iVar3;
        DAT_00316ea8 = DAT_00316ea8 + -1;
        (*DAT_00313858)(lVar4);
        if (DAT_00316f08 == 0) goto LAB_002f346c;
        puVar6 = &DAT_003138c0;
        lVar4 = DAT_00316f08;
      }
      (*(code *)*puVar6)(lVar4);
    }
LAB_002f346c:
    lVar4 = sqlite3_mprintf("sqlite3_get_table() called with two or more incompatible queries");
    param_1[1] = lVar4;
    *(undefined4 *)(param_1 + 4) = 1;
    return 1;
  }
  if (param_3 != (undefined8 *)0x0) {
    if (0 < (int)param_2) {
      do {
        if ((char *)*param_3 == (char *)0x0) {
          __dest = (void *)0x0;
        }
        else {
          sVar5 = strlen((char *)*param_3);
          iVar3 = sqlite3_initialize();
          if (iVar3 != 0) goto LAB_002f3548;
          __dest = (void *)FUN_0022a6ac((sVar5 & 0x3fffffff) + 1);
          if (__dest == (void *)0x0) goto LAB_002f3548;
          memcpy(__dest,(void *)*param_3,(sVar5 & 0x3fffffff) + 1);
        }
        uVar1 = *(uint *)((long)param_1 + 0x1c);
        uVar7 = uVar7 - 1;
        param_3 = param_3 + 1;
        *(void **)(*param_1 + (ulong)uVar1 * 8) = __dest;
        *(uint *)((long)param_1 + 0x1c) = uVar1 + 1;
      } while (uVar7 != 0);
    }
    *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
  }
  return 0;
}


// ===== 002f3584  FUN_002f3584 =====

undefined8 FUN_002f3584(long *param_1,uint param_2,int param_3,uint param_4)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined2 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if (*(ushort *)(param_1 + 0x18) <= param_2) {
    return 0;
  }
  lVar7 = *param_1;
  lVar8 = (ulong)param_2 + (ulong)*(ushort *)(param_1 + 0x18) * (ulong)param_4;
  if (*(long *)(lVar7 + 0x18) != 0) {
    (*DAT_003138b0)(*(long *)(lVar7 + 0x18));
  }
  lVar6 = param_1[0x13];
  if (param_3 == 0) {
    if (lVar6 != 0) {
      uVar2 = *(ushort *)(lVar6 + lVar8 * 0x38 + 0x14);
      if ((((uVar2 ^ 0xffff) & 0x202) == 0) && (*(char *)(lVar6 + lVar8 * 0x38 + 0x16) == '\x01'))
      goto LAB_002f365c;
      if ((uVar2 & 1) == 0) {
        uVar4 = 1;
        goto LAB_002f367c;
      }
    }
LAB_002f368c:
    uVar4 = 0;
    cVar1 = *(char *)(lVar7 + 0x67);
  }
  else {
    if (lVar6 == 0) goto LAB_002f368c;
    uVar2 = *(ushort *)(lVar6 + lVar8 * 0x38 + 0x14);
    if ((((uVar2 ^ 0xffff) & 0x202) == 0) && (*(char *)(lVar6 + lVar8 * 0x38 + 0x16) == '\x02')) {
LAB_002f365c:
      uVar4 = *(undefined8 *)(lVar6 + lVar8 * 0x38 + 8);
      cVar1 = *(char *)(lVar7 + 0x67);
    }
    else {
      if ((uVar2 & 1) != 0) goto LAB_002f368c;
      uVar4 = 2;
LAB_002f367c:
      uVar4 = FUN_0022ae18(lVar6 + lVar8 * 0x38,uVar4);
      cVar1 = *(char *)(lVar7 + 0x67);
    }
  }
  if (cVar1 != '\0') {
    if (*(int *)(lVar7 + 0xdc) == 0) {
      *(undefined1 *)(lVar7 + 0x67) = 0;
      *(undefined4 *)(lVar7 + 400) = 0;
      iVar3 = *(int *)(lVar7 + 0x198) + -1;
      *(int *)(lVar7 + 0x198) = iVar3;
      uVar5 = 0;
      if (iVar3 == 0) {
        uVar5 = *(undefined2 *)(lVar7 + 0x19e);
      }
      uVar4 = 0;
      *(undefined2 *)(lVar7 + 0x19c) = uVar5;
      lVar7 = *(long *)(lVar7 + 0x18);
      goto joined_r0x002f36fc;
    }
    uVar4 = 0;
  }
  lVar7 = *(long *)(lVar7 + 0x18);
joined_r0x002f36fc:
  if (lVar7 != 0) {
    (*DAT_003138c0)(lVar7);
  }
  return uVar4;
}


// ===== 002f3704  FUN_002f3704 =====

undefined8 FUN_002f3704(long *param_1,int param_2)

{
  if (*(int *)((long)param_1 + 0x2e4) < param_2 * 1000 + 1000) {
    return 0;
  }
  (**(code **)(*param_1 + 0x70))(*param_1,1000000);
  return 1;
}


// ===== 002f374c  FUN_002f374c =====

void FUN_002f374c(undefined8 param_1,uint param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [8];
  long local_70;
  char local_57;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((int)param_2 < 1) goto LAB_002f3800;
  lVar3 = *param_3;
  if (lVar3 == 0) {
LAB_002f37c4:
    uVar5 = 0;
  }
  else if ((((*(ushort *)(lVar3 + 0x14) ^ 0xffff) & 0x202) == 0) &&
          (*(char *)(lVar3 + 0x16) == '\x01')) {
    uVar5 = *(undefined8 *)(lVar3 + 8);
  }
  else {
    if ((*(ushort *)(lVar3 + 0x14) & 1) != 0) goto LAB_002f37c4;
    uVar5 = FUN_0022ae18(lVar3,1);
  }
  iVar2 = FUN_002f58cc(auStack_78,param_1,uVar5);
  if (iVar2 == 0) {
    if (param_2 != 1) {
      param_3 = param_3 + 1;
      lVar3 = (ulong)param_2 - 1;
      do {
        lVar4 = *param_3;
        if (lVar4 == 0) goto LAB_002f37f8;
        if ((((*(ushort *)(lVar4 + 0x14) ^ 0xffff) & 0x202) == 0) &&
           (*(char *)(lVar4 + 0x16) == '\x01')) {
          lVar4 = *(long *)(lVar4 + 8);
        }
        else {
          if ((*(ushort *)(lVar4 + 0x14) & 1) != 0) goto LAB_002f37f8;
          lVar4 = FUN_0022ae18(lVar4,1);
        }
        if ((lVar4 == 0) || (lVar4 = FUN_002f5a5c(auStack_78,lVar4,0,param_1), local_57 != '\0'))
        goto LAB_002f37f8;
        if (lVar4 != 0) {
          *(byte *)(lVar4 + 1) = *(byte *)(lVar4 + 1) | 4;
        }
        lVar3 = lVar3 + -1;
        param_3 = param_3 + 1;
      } while (lVar3 != 0);
    }
    if ((*(byte *)(local_70 + 1) >> 2 & 1) == 0) {
      FUN_002f1000(local_70,param_1,0);
    }
LAB_002f37f8:
    FUN_002f23c4(auStack_78);
  }
LAB_002f3800:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002f38b4  FUN_002f38b4 =====

void FUN_002f38b4(long *param_1,uint param_2,undefined8 *param_3)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *local_d0;
  undefined1 *local_c8;
  ulong local_c0;
  ulong local_b8;
  undefined2 local_b0;
  undefined1 local_ae [102];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_c8 = local_ae;
  local_c0 = 100;
  local_b8 = 1;
  local_b0 = 1;
  local_ae[0] = 0x5b;
  uVar6 = 1;
  local_d0 = param_1;
  if (0 < (int)param_2) {
    uVar6 = (ulong)param_2;
    do {
      if (((local_b8 != 0) && ((local_c8[local_b8 - 1] & 0xdf) != 0x5b)) &&
         ((local_b8 < local_c0 || (iVar4 = FUN_002f0c14(&local_d0,1), iVar4 == 0)))) {
        local_c8[local_b8] = 0x2c;
        local_b8 = local_b8 + 1;
      }
      FUN_002f15bc(&local_d0,*param_3);
      uVar6 = uVar6 - 1;
      param_3 = param_3 + 1;
    } while (uVar6 != 0);
    uVar6 = local_b8;
    if ((local_c0 <= local_b8) && (iVar4 = FUN_002f0c14(&local_d0,1), uVar6 = local_b8, iVar4 != 0))
    goto LAB_002f39b8;
  }
  local_b8 = uVar6 + 1;
  local_c8[uVar6] = 0x5d;
LAB_002f39b8:
  plVar3 = local_d0;
  if (local_b0._1_1_ == '\0') {
    pcVar1 = (code *)PTR_sqlite3_free_0030d498;
    if ((char)local_b0 != '\0') {
      pcVar1 = (code *)0xffffffffffffffff;
    }
    if (local_b8 >> 0x1f == 0) {
      FUN_0023d018();
    }
    else {
      if ((code *)0x1 < pcVar1 + 1) {
        (*pcVar1)(local_c8);
      }
      *(undefined4 *)((long)plVar3 + 0x24) = 0x12;
      FUN_0023c180(*plVar3,"string or blob too big",0xffffffffffffffff,1,0);
    }
  }
  lVar5 = *param_1;
  *(undefined1 *)(lVar5 + 0x17) = 0x4a;
  *(ushort *)(lVar5 + 0x14) = *(ushort *)(lVar5 + 0x14) | 0x800;
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 002f3a78  FUN_002f3a78 =====

void FUN_002f3a78(undefined8 *param_1,int param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  char *pcVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  
  lVar2 = FUN_002f5430(param_1,param_3,param_1);
  if (lVar2 == 0) {
    return;
  }
  if (param_2 != 2) {
    pcVar3 = *(char **)(lVar2 + 8);
    goto joined_r0x002f3adc;
  }
  lVar6 = *(long *)(param_3 + 8);
  if (lVar6 == 0) {
LAB_002f3b04:
    uVar5 = 0;
  }
  else if ((((*(ushort *)(lVar6 + 0x14) ^ 0xffff) & 0x202) == 0) &&
          (*(char *)(lVar6 + 0x16) == '\x01')) {
    uVar5 = *(undefined8 *)(lVar6 + 8);
  }
  else {
    if ((*(ushort *)(lVar6 + 0x14) & 1) != 0) goto LAB_002f3b04;
    uVar5 = FUN_0022ae18(lVar6,1);
  }
  pcVar3 = (char *)FUN_002f5a5c(lVar2,uVar5,0,param_1);
joined_r0x002f3adc:
  if (pcVar3 != (char *)0x0) {
    if ((*pcVar3 == '\x06') && (*(uint *)(pcVar3 + 4) != 0)) {
      lVar2 = 0;
      uVar7 = 1;
      do {
        if ((byte)pcVar3[uVar7 * 0x10] < 6) {
          iVar8 = 1;
        }
        else {
          iVar8 = *(int *)(pcVar3 + uVar7 * 0x10 + 4) + 1;
        }
        uVar1 = iVar8 + (int)uVar7;
        uVar7 = (ulong)uVar1;
        lVar2 = lVar2 + 1;
      } while (uVar1 <= *(uint *)(pcVar3 + 4));
    }
    else {
      lVar2 = 0;
    }
    plVar4 = (long *)*param_1;
    if ((*(ushort *)((long)plVar4 + 0x14) & 0x9000) != 0) {
      FUN_0023c114();
      return;
    }
    *plVar4 = lVar2;
    *(undefined2 *)((long)plVar4 + 0x14) = 4;
  }
  return;
}


// ===== 002f3bb4  FUN_002f3bb4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002f3bb4(long *param_1,uint param_2,long param_3)

{
  code *pcVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  size_t sVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  byte *__s;
  ulong uVar14;
  long *local_f0;
  undefined1 *local_e8;
  ulong local_e0;
  ulong uStack_d8;
  undefined2 local_d0;
  undefined1 local_ce [102];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (1 < (int)param_2) {
    uVar2 = *(uint *)(param_1[1] + 8);
    lVar7 = FUN_002f5430(param_1,param_3,param_1);
    if (lVar7 != 0) {
      if (param_2 == 2) {
        lVar8 = *(long *)(param_3 + 8);
        if (lVar8 != 0) {
          if ((((*(ushort *)(lVar8 + 0x14) ^ 0xffff) & 0x202) == 0) &&
             (*(char *)(lVar8 + 0x16) == '\x01')) {
            __s = *(byte **)(lVar8 + 8);
          }
          else {
            if ((*(ushort *)(lVar8 + 0x14) & 1) != 0) goto LAB_002f4164;
            __s = (byte *)FUN_0022ae18(lVar8,1);
          }
          uVar4 = _UNK_00177618;
          uVar14 = _DAT_00177610;
          if (__s != (byte *)0x0) {
            if ((uVar2 & 3) == 0) {
              lVar8 = FUN_002f5a5c(lVar7,__s,0,param_1);
              if ((*(char *)(lVar7 + 0x21) == '\0') && (lVar8 != 0)) {
                if (*(long *)(lVar3 + 0x28) == local_68) {
                  FUN_002f03c0(lVar8,param_1);
                  return;
                }
                goto LAB_002f4194;
              }
            }
            else {
              if (*__s == 0x24) {
                lVar7 = FUN_002f5a5c(lVar7,__s,0,param_1);
              }
              else {
                uStack_d8 = _UNK_00177618;
                local_e0 = _DAT_00177610;
                local_d0 = 1;
                local_e8 = local_ce;
                if ((ulong)*__s - 0x3a < 0xfffffffffffffff6) {
                  uVar11 = 1;
                  if (*__s != 0x5b) {
                    uVar11 = 2;
                  }
                  local_f0 = param_1;
                  FUN_002f5f88(&local_f0,&DAT_00171d5f,uVar11);
                  sVar9 = strlen((char *)__s);
                  FUN_002f5f88(&local_f0,__s,sVar9);
                  FUN_002f0d8c(&local_f0,0);
                }
                else {
                  local_f0 = param_1;
                  FUN_002f5f88(&local_f0,&DAT_001751d9,2);
                  sVar9 = strlen((char *)__s);
                  FUN_002f5f88(&local_f0,__s,sVar9);
                  FUN_002f5f88(&local_f0,&DAT_001733ab,2);
                }
                if (local_d0._1_1_ == '\0') {
                  lVar7 = FUN_002f5a5c(lVar7,local_e8,0,param_1);
                }
                else {
                  lVar7 = 0;
                }
                puVar13 = local_e8;
                if (((char)local_d0 == '\0') && (local_e8 != (undefined1 *)0x0)) {
                  puVar12 = &DAT_00313858;
                  if (DAT_00313830 != 0) {
                    if (DAT_00316f08 != (undefined1 *)0x0) {
                      (*DAT_003138b0)();
                    }
                    iVar6 = (*DAT_00313868)(puVar13);
                    DAT_00316e60 = DAT_00316e60 - iVar6;
                    DAT_00316ea8 = DAT_00316ea8 + -1;
                    (*DAT_00313858)(puVar13);
                    if (DAT_00316f08 == (undefined1 *)0x0) goto LAB_002f411c;
                    puVar12 = &DAT_003138c0;
                    puVar13 = DAT_00316f08;
                  }
                  (*(code *)*puVar12)(puVar13);
                }
LAB_002f411c:
                local_d0 = CONCAT11(local_d0._1_1_,1);
                uStack_d8 = uVar4;
                local_e0 = uVar14;
                local_e8 = local_ce;
              }
              if (lVar7 != 0) {
                if ((uVar2 & 1) == 0) {
                  FUN_002f03c0(lVar7,param_1);
                  lVar7 = *param_1;
                  *(undefined1 *)(lVar7 + 0x17) = 0;
                  *(ushort *)(lVar7 + 0x14) = *(ushort *)(lVar7 + 0x14) | 0x800;
                }
                else {
                  FUN_002f1000(lVar7,param_1,0);
                }
              }
            }
          }
        }
      }
      else {
        uVar14 = 1;
        local_d0 = 1;
        local_ce[0] = 0x5b;
        local_e0 = 100;
        uStack_d8 = 1;
        local_f0 = param_1;
        local_e8 = local_ce;
        do {
          lVar8 = *(long *)(param_3 + uVar14 * 8);
          if (lVar8 == 0) {
LAB_002f3ce8:
            uVar10 = 0;
          }
          else if ((((*(ushort *)(lVar8 + 0x14) ^ 0xffff) & 0x202) == 0) &&
                  (*(char *)(lVar8 + 0x16) == '\x01')) {
            uVar10 = *(undefined8 *)(lVar8 + 8);
          }
          else {
            if ((*(ushort *)(lVar8 + 0x14) & 1) != 0) goto LAB_002f3ce8;
            uVar10 = FUN_0022ae18(lVar8,1);
          }
          lVar8 = FUN_002f5a5c(lVar7,uVar10,0,param_1);
          if (*(char *)(lVar7 + 0x21) != '\0') {
            if ((uint)uVar14 != param_2) goto LAB_002f3ec0;
            break;
          }
          if (((uStack_d8 != 0) && ((local_e8[uStack_d8 - 1] & 0xdf) != 0x5b)) &&
             ((uStack_d8 < local_e0 || (iVar6 = FUN_002f0c14(&local_f0,1), iVar6 == 0)))) {
            local_e8[uStack_d8] = 0x2c;
            uStack_d8 = uStack_d8 + 1;
          }
          if (lVar8 == 0) {
            if ((uStack_d8 + 4 < local_e0) || (iVar6 = FUN_002f0c14(&local_f0,4), iVar6 == 0)) {
              *(undefined4 *)(local_e8 + uStack_d8) = 0x6c6c756e;
              uStack_d8 = uStack_d8 + 4;
            }
          }
          else {
            FUN_002f1108(lVar8,&local_f0,0);
          }
          uVar14 = uVar14 + 1;
        } while (param_2 != uVar14);
        if ((uStack_d8 < local_e0) || (iVar6 = FUN_002f0c14(&local_f0,1), iVar6 == 0)) {
          local_e8[uStack_d8] = 0x5d;
          uStack_d8 = uStack_d8 + 1;
        }
        plVar5 = local_f0;
        if (local_d0._1_1_ == '\0') {
          pcVar1 = (code *)PTR_sqlite3_free_0030d498;
          if ((char)local_d0 != '\0') {
            pcVar1 = (code *)0xffffffffffffffff;
          }
          if (uStack_d8 >> 0x1f == 0) {
            FUN_0023d018();
          }
          else {
            if ((code *)0x1 < pcVar1 + 1) {
              (*pcVar1)(local_e8);
            }
            *(undefined4 *)((long)plVar5 + 0x24) = 0x12;
            FUN_0023c180(*plVar5,"string or blob too big",0xffffffffffffffff,1,0);
          }
          uStack_d8 = _UNK_00177618;
          local_e0 = _DAT_00177610;
          local_d0 = CONCAT11(local_d0._1_1_,1);
          local_e8 = local_ce;
        }
        lVar7 = *param_1;
        *(undefined1 *)(lVar7 + 0x17) = 0x4a;
        *(ushort *)(lVar7 + 0x14) = *(ushort *)(lVar7 + 0x14) | 0x800;
LAB_002f3ec0:
        puVar13 = local_e8;
        if (((char)local_d0 == '\0') && (local_e8 != (undefined1 *)0x0)) {
          puVar12 = &DAT_00313858;
          if (DAT_00313830 != 0) {
            if (DAT_00316f08 != (undefined1 *)0x0) {
              (*DAT_003138b0)();
            }
            iVar6 = (*DAT_00313868)(puVar13);
            DAT_00316e60 = DAT_00316e60 - iVar6;
            DAT_00316ea8 = DAT_00316ea8 + -1;
            (*DAT_00313858)(puVar13);
            if (DAT_00316f08 == (undefined1 *)0x0) goto LAB_002f4164;
            puVar12 = &DAT_003138c0;
            puVar13 = DAT_00316f08;
          }
          (*(code *)*puVar12)(puVar13);
        }
      }
    }
  }
LAB_002f4164:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
LAB_002f4194:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002f4198  FUN_002f4198 =====

void FUN_002f4198(undefined8 *param_1,uint param_2,long *param_3)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int local_8c;
  undefined1 auStack_88 [8];
  long local_80;
  char local_68;
  char local_67;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (0 < (int)param_2) {
    lVar7 = *(long *)(param_1[1] + 8);
    if ((param_2 & 1) == 0) {
      pcVar1 = "set";
      if (lVar7 == 0) {
        pcVar1 = "insert";
      }
      lVar7 = sqlite3_mprintf("json_%s() needs an odd number of arguments",pcVar1);
      *(undefined4 *)((long)param_1 + 0x24) = 1;
      FUN_0023c180(*param_1,lVar7,0xffffffffffffffff,1,0xffffffffffffffff);
      if (lVar7 != 0) {
        puVar6 = &DAT_00313858;
        if (DAT_00313830 != 0) {
          if (DAT_00316f08 != 0) {
            (*DAT_003138b0)();
          }
          iVar3 = (*DAT_00313868)(lVar7);
          DAT_00316e60 = DAT_00316e60 - iVar3;
          DAT_00316ea8 = DAT_00316ea8 + -1;
          (*DAT_00313858)(lVar7);
          if (DAT_00316f08 == 0) goto LAB_002f4420;
          puVar6 = &DAT_003138c0;
          lVar7 = DAT_00316f08;
        }
        if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Could not recover jumptable at 0x002f42c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)*puVar6)(lVar7);
          return;
        }
        goto LAB_002f444c;
      }
    }
    else {
      lVar4 = *param_3;
      if (lVar4 == 0) {
LAB_002f431c:
        uVar5 = 0;
      }
      else if ((((*(ushort *)(lVar4 + 0x14) ^ 0xffff) & 0x202) == 0) &&
              (*(char *)(lVar4 + 0x16) == '\x01')) {
        uVar5 = *(undefined8 *)(lVar4 + 8);
      }
      else {
        if ((*(ushort *)(lVar4 + 0x14) & 1) != 0) goto LAB_002f431c;
        uVar5 = FUN_0022ae18(lVar4,1);
      }
      iVar3 = FUN_002f58cc(auStack_88,param_1,uVar5);
      if (iVar3 == 0) {
        if (param_2 != 1) {
          uVar8 = 1;
          do {
            lVar4 = param_3[uVar8];
            if (lVar4 == 0) {
LAB_002f43c0:
              uVar5 = 0;
            }
            else if ((((*(ushort *)(lVar4 + 0x14) ^ 0xffff) & 0x202) == 0) &&
                    (*(char *)(lVar4 + 0x16) == '\x01')) {
              uVar5 = *(undefined8 *)(lVar4 + 8);
            }
            else {
              if ((*(ushort *)(lVar4 + 0x14) & 1) != 0) goto LAB_002f43c0;
              uVar5 = FUN_0022ae18(lVar4,1);
            }
            local_8c = 0;
            lVar4 = FUN_002f5a5c(auStack_88,uVar5,&local_8c,param_1);
            if (local_68 != '\0') {
              sqlite3_result_error_nomem(param_1);
              goto LAB_002f4418;
            }
            if (local_67 != '\0') goto LAB_002f4418;
            if ((lVar4 != 0) && ((local_8c != 0 || (lVar7 != 0)))) {
              *(int *)(lVar4 + 8) = (int)uVar8 + 1;
              *(byte *)(lVar4 + 1) = *(byte *)(lVar4 + 1) | 8;
            }
            uVar8 = uVar8 + 2;
          } while (uVar8 < param_2);
        }
        if ((*(byte *)(local_80 + 1) >> 3 & 1) == 0) {
          FUN_002f1000(local_80,param_1,param_3);
        }
        else {
          sqlite3_result_value(param_1,param_3[*(uint *)(local_80 + 8)]);
        }
LAB_002f4418:
        FUN_002f23c4(auStack_88);
      }
    }
  }
LAB_002f4420:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
LAB_002f444c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002f4450  FUN_002f4450 =====

void FUN_002f4450(long *param_1,uint param_2,long param_3)

{
  code *pcVar1;
  ushort uVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined8 *puVar8;
  ulong uVar9;
  uint uVar10;
  undefined1 *puVar11;
  long lVar12;
  long *local_f0;
  undefined1 *local_e8;
  ulong local_e0;
  ulong local_d8;
  undefined2 local_d0;
  undefined1 local_ce [102];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if ((param_2 & 1) != 0) {
    *(undefined4 *)((long)param_1 + 0x24) = 1;
    if (*(long *)(lVar3 + 0x28) == local_68) {
      FUN_0023c180(*param_1,"json_object() requires an even number of arguments",0xffffffffffffffff,
                   1,0xffffffffffffffff);
      return;
    }
    goto LAB_002f482c;
  }
  local_e8 = local_ce;
  local_d0 = 1;
  local_e0 = 100;
  local_d8 = 1;
  local_ce[0] = 0x7b;
  uVar9 = 1;
  local_f0 = param_1;
  if ((int)param_2 < 1) {
LAB_002f4754:
    local_d8 = uVar9 + 1;
    local_e8[uVar9] = 0x7d;
  }
  else {
    lVar12 = 0;
    do {
      if ((0x4000400040004U >> ((ulong)*(ushort *)(*(long *)(param_3 + lVar12 * 8) + 0x14) & 0x3f) &
          1) == 0) {
        *(undefined4 *)((long)param_1 + 0x24) = 1;
        FUN_0023c180(*param_1,"json_object() labels must be TEXT",0xffffffffffffffff,1,
                     0xffffffffffffffff);
        puVar11 = local_e8;
        if (((char)local_d0 != '\0') || (local_e8 == (undefined1 *)0x0)) goto LAB_002f47fc;
        puVar8 = &DAT_00313858;
        if (DAT_00313830 != 0) {
          if (DAT_00316f08 != (undefined1 *)0x0) {
            (*DAT_003138b0)();
          }
          iVar5 = (*DAT_00313868)(puVar11);
          DAT_00316e60 = DAT_00316e60 - iVar5;
          DAT_00316ea8 = DAT_00316ea8 + -1;
          (*DAT_00313858)(puVar11);
          if (DAT_00316f08 == (undefined1 *)0x0) goto LAB_002f47fc;
          puVar8 = &DAT_003138c0;
          puVar11 = DAT_00316f08;
        }
        (*(code *)*puVar8)(puVar11);
        goto LAB_002f47fc;
      }
      if (((local_d8 != 0) && ((local_e8[local_d8 - 1] & 0xdf) != 0x5b)) &&
         ((local_d8 < local_e0 || (iVar5 = FUN_002f0c14(&local_f0,1), iVar5 == 0)))) {
        local_e8[local_d8] = 0x2c;
        local_d8 = local_d8 + 1;
      }
      piVar7 = *(int **)(param_3 + lVar12 * 8);
      uVar2 = *(ushort *)(piVar7 + 5);
      uVar10 = (uint)uVar2;
      if ((((uVar2 ^ 0xffff) & 0x202) == 0) && (*(char *)((long)piVar7 + 0x16) == '\x01')) {
        uVar6 = *(undefined8 *)(piVar7 + 2);
joined_r0x002f45ac:
        if ((uVar2 >> 1 & 1) == 0) goto LAB_002f45c4;
LAB_002f45b0:
        uVar10 = (uint)uVar2;
        if (*(char *)((long)piVar7 + 0x16) != '\x01') goto LAB_002f45c4;
        iVar5 = piVar7[4];
      }
      else {
        if ((uVar2 & 1) != 0) {
          uVar6 = 0;
          goto joined_r0x002f45ac;
        }
        uVar6 = FUN_0022ae18(piVar7,1);
        piVar7 = *(int **)(param_3 + lVar12 * 8);
        uVar2 = *(ushort *)(piVar7 + 5);
        uVar10 = (uint)uVar2;
        if ((uVar2 >> 1 & 1) != 0) goto LAB_002f45b0;
LAB_002f45c4:
        if ((uVar10 >> 4 & 1) == 0) {
          if ((uVar10 & 1) == 0) {
            iVar5 = FUN_0023c158(piVar7,1);
          }
          else {
            iVar5 = 0;
          }
        }
        else {
          iVar5 = piVar7[4];
          if ((uVar10 >> 10 & 1) != 0) {
            iVar5 = *piVar7 + iVar5;
          }
        }
      }
      FUN_002f1930(&local_f0,uVar6,iVar5);
      if ((local_d8 < local_e0) || (iVar5 = FUN_002f0c14(&local_f0,1), iVar5 == 0)) {
        local_e8[local_d8] = 0x3a;
        local_d8 = local_d8 + 1;
      }
      FUN_002f15bc(&local_f0,*(undefined8 *)(param_3 + lVar12 * 8 + 8));
      lVar12 = lVar12 + 2;
    } while ((int)lVar12 < (int)param_2);
    uVar9 = local_d8;
    if ((local_d8 < local_e0) || (iVar5 = FUN_002f0c14(&local_f0,1), uVar9 = local_d8, iVar5 == 0))
    goto LAB_002f4754;
  }
  plVar4 = local_f0;
  if (local_d0._1_1_ == '\0') {
    pcVar1 = (code *)PTR_sqlite3_free_0030d498;
    if ((char)local_d0 != '\0') {
      pcVar1 = (code *)0xffffffffffffffff;
    }
    if (local_d8 >> 0x1f == 0) {
      FUN_0023d018();
    }
    else {
      if ((code *)0x1 < pcVar1 + 1) {
        (*pcVar1)(local_e8);
      }
      *(undefined4 *)((long)plVar4 + 0x24) = 0x12;
      FUN_0023c180(*plVar4,"string or blob too big",0xffffffffffffffff,1,0);
    }
  }
  lVar12 = *param_1;
  *(undefined1 *)(lVar12 + 0x17) = 0x4a;
  *(ushort *)(lVar12 + 0x14) = *(ushort *)(lVar12 + 0x14) | 0x800;
LAB_002f47fc:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
LAB_002f482c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002f4830  FUN_002f4830 =====

void FUN_002f4830(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_98 [8];
  undefined8 local_90;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar5 = *param_3;
  if (lVar5 == 0) {
LAB_002f489c:
    uVar4 = 0;
  }
  else if ((((*(ushort *)(lVar5 + 0x14) ^ 0xffff) & 0x202) == 0) &&
          (*(char *)(lVar5 + 0x16) == '\x01')) {
    uVar4 = *(undefined8 *)(lVar5 + 8);
  }
  else {
    if ((*(ushort *)(lVar5 + 0x14) & 1) != 0) goto LAB_002f489c;
    uVar4 = FUN_0022ae18(lVar5,1);
  }
  iVar2 = FUN_002f58cc(auStack_68,param_1,uVar4);
  if (iVar2 != 0) goto LAB_002f4948;
  lVar5 = param_3[1];
  if (lVar5 == 0) {
LAB_002f48f0:
    uVar4 = 0;
  }
  else if ((((*(ushort *)(lVar5 + 0x14) ^ 0xffff) & 0x202) == 0) &&
          (*(char *)(lVar5 + 0x16) == '\x01')) {
    uVar4 = *(undefined8 *)(lVar5 + 8);
  }
  else {
    if ((*(ushort *)(lVar5 + 0x14) & 1) != 0) goto LAB_002f48f0;
    uVar4 = FUN_0022ae18(lVar5,1);
  }
  iVar2 = FUN_002f58cc(auStack_98,param_1,uVar4);
  if (iVar2 == 0) {
    lVar5 = FUN_002f5bbc(auStack_68,0,local_90);
    if (lVar5 == 0) {
      sqlite3_result_error_nomem(param_1);
    }
    else {
      FUN_002f1000(lVar5,param_1,0);
    }
    FUN_002f23c4(auStack_68);
    puVar3 = auStack_98;
  }
  else {
    puVar3 = auStack_68;
  }
  FUN_002f23c4(puVar3);
LAB_002f4948:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002f4970  FUN_002f4970 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002f4970(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *local_c0;
  undefined1 *puStack_b8;
  undefined8 local_b0;
  ulong uStack_a8;
  undefined2 local_a0;
  undefined1 auStack_9e [102];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  puStack_b8 = auStack_9e;
  uStack_a8 = _UNK_00177618;
  local_b0 = _DAT_00177610;
  local_a0 = 1;
  local_c0 = param_1;
  FUN_002f15bc(&local_c0,*param_3);
  plVar3 = local_c0;
  if (local_a0._1_1_ == '\0') {
    pcVar1 = (code *)PTR_sqlite3_free_0030d498;
    if ((char)local_a0 != '\0') {
      pcVar1 = (code *)0xffffffffffffffff;
    }
    if (uStack_a8 >> 0x1f == 0) {
      FUN_0023d018();
    }
    else {
      if ((code *)0x1 < pcVar1 + 1) {
        (*pcVar1)(puStack_b8);
      }
      *(undefined4 *)((long)plVar3 + 0x24) = 0x12;
      FUN_0023c180(*plVar3,"string or blob too big",0xffffffffffffffff,1,0);
    }
  }
  lVar4 = *param_1;
  *(undefined1 *)(lVar4 + 0x17) = 0x4a;
  *(ushort *)(lVar4 + 0x14) = *(ushort *)(lVar4 + 0x14) | 0x800;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002f4a7c  FUN_002f4a7c =====

void FUN_002f4a7c(undefined8 *param_1,uint param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined1 auStack_78 [8];
  long local_70;
  char local_57;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (0 < (int)param_2) {
    if ((param_2 & 1) == 0) {
      lVar3 = sqlite3_mprintf("json_%s() needs an odd number of arguments","replace");
      *(undefined4 *)((long)param_1 + 0x24) = 1;
      FUN_0023c180(*param_1,lVar3,0xffffffffffffffff,1,0xffffffffffffffff);
      if (lVar3 != 0) {
        puVar5 = &DAT_00313858;
        if (DAT_00313830 != 0) {
          if (DAT_00316f08 != 0) {
            (*DAT_003138b0)();
          }
          iVar2 = (*DAT_00313868)(lVar3);
          DAT_00316e60 = DAT_00316e60 - iVar2;
          DAT_00316ea8 = DAT_00316ea8 + -1;
          (*DAT_00313858)(lVar3);
          if (DAT_00316f08 == 0) goto LAB_002f4cc0;
          puVar5 = &DAT_003138c0;
          lVar3 = DAT_00316f08;
        }
        if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Could not recover jumptable at 0x002f4b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)*puVar5)(lVar3);
          return;
        }
        goto LAB_002f4ce8;
      }
    }
    else {
      lVar3 = *param_3;
      if (lVar3 == 0) {
LAB_002f4be0:
        uVar4 = 0;
      }
      else if ((((*(ushort *)(lVar3 + 0x14) ^ 0xffff) & 0x202) == 0) &&
              (*(char *)(lVar3 + 0x16) == '\x01')) {
        uVar4 = *(undefined8 *)(lVar3 + 8);
      }
      else {
        if ((*(ushort *)(lVar3 + 0x14) & 1) != 0) goto LAB_002f4be0;
        uVar4 = FUN_0022ae18(lVar3,1);
      }
      iVar2 = FUN_002f58cc(auStack_78,param_1,uVar4);
      if (iVar2 == 0) {
        if (param_2 != 1) {
          uVar6 = 1;
          do {
            lVar3 = param_3[uVar6];
            if (lVar3 == 0) {
LAB_002f4c70:
              uVar4 = 0;
            }
            else if ((((*(ushort *)(lVar3 + 0x14) ^ 0xffff) & 0x202) == 0) &&
                    (*(char *)(lVar3 + 0x16) == '\x01')) {
              uVar4 = *(undefined8 *)(lVar3 + 8);
            }
            else {
              if ((*(ushort *)(lVar3 + 0x14) & 1) != 0) goto LAB_002f4c70;
              uVar4 = FUN_0022ae18(lVar3,1);
            }
            lVar3 = FUN_002f5a5c(auStack_78,uVar4,0,param_1);
            if (local_57 != '\0') goto LAB_002f4cb8;
            if (lVar3 != 0) {
              *(int *)(lVar3 + 8) = (int)uVar6 + 1;
              *(byte *)(lVar3 + 1) = *(byte *)(lVar3 + 1) | 8;
            }
            uVar6 = uVar6 + 2;
          } while (uVar6 < param_2);
        }
        if ((*(byte *)(local_70 + 1) >> 3 & 1) == 0) {
          FUN_002f1000(local_70,param_1,param_3);
        }
        else {
          sqlite3_result_value(param_1,param_3[*(uint *)(local_70 + 8)]);
        }
LAB_002f4cb8:
        FUN_002f23c4(auStack_78);
      }
    }
  }
LAB_002f4cc0:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_002f4ce8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002f4cec  FUN_002f4cec =====

void FUN_002f4cec(undefined8 param_1,int param_2,long param_3)

{
  long lVar1;
  byte *pbVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = FUN_002f5430(param_1,param_3,param_1);
  if (lVar1 == 0) {
    return;
  }
  if (param_2 != 2) {
    pbVar2 = *(byte **)(lVar1 + 8);
    if (pbVar2 == (byte *)0x0) {
      return;
    }
    goto LAB_002f4d54;
  }
  lVar4 = *(long *)(param_3 + 8);
  if (lVar4 == 0) {
LAB_002f4da4:
    uVar3 = 0;
  }
  else if ((((*(ushort *)(lVar4 + 0x14) ^ 0xffff) & 0x202) == 0) &&
          (*(char *)(lVar4 + 0x16) == '\x01')) {
    uVar3 = *(undefined8 *)(lVar4 + 8);
  }
  else {
    if ((*(ushort *)(lVar4 + 0x14) & 1) != 0) goto LAB_002f4da4;
    uVar3 = FUN_0022ae18(lVar4,1);
  }
  pbVar2 = (byte *)FUN_002f5a5c(lVar1,uVar3,0,param_1);
  if (pbVar2 == (byte *)0x0) {
    return;
  }
LAB_002f4d54:
  FUN_0023d018(param_1,(&PTR_DAT_0030cef0)[*pbVar2],0xffffffff,1,0);
  return;
}


// ===== 002f4dc8  FUN_002f4dc8 =====

void FUN_002f4dc8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong *puVar2;
  
  lVar1 = FUN_002f5430(param_1,param_3,0);
  puVar2 = (ulong *)*param_1;
  if ((*(ushort *)((long)puVar2 + 0x14) & 0x9000) != 0) {
    FUN_0023c114();
    return;
  }
  *puVar2 = (ulong)(lVar1 != 0);
  *(undefined2 *)((long)puVar2 + 0x14) = 4;
  return;
}


// ===== 002f4e28  FUN_002f4e28 =====

void FUN_002f4e28(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  
  if (*(short *)(*(long *)(param_1 + 0x10) + 0x14) < 0) {
    plVar2 = *(long **)(*(long *)(param_1 + 0x10) + 8);
  }
  else {
    plVar2 = (long *)FUN_0023ce88(param_1,0x88);
  }
  if (plVar2 == (long *)0x0) {
    return;
  }
  lVar3 = plVar2[1];
  if (lVar3 == 0) {
    *(undefined2 *)((long)plVar2 + 0x21) = 0x5b00;
    plVar2[1] = (long)plVar2 + 0x22;
    plVar2[2] = 100;
    *(undefined1 *)(plVar2 + 4) = 1;
    plVar2[3] = 1;
  }
  else {
    uVar4 = plVar2[3];
    if (1 < uVar4) {
      if ((ulong)plVar2[2] <= uVar4) {
        iVar1 = FUN_002f0c14(plVar2,1);
        if (iVar1 != 0) goto LAB_002f4ee8;
        uVar4 = plVar2[3];
        lVar3 = plVar2[1];
      }
      plVar2[3] = uVar4 + 1;
      *(undefined1 *)(lVar3 + uVar4) = 0x2c;
    }
  }
LAB_002f4ee8:
  *plVar2 = param_1;
  FUN_002f15bc(plVar2,*param_3);
  return;
}


// ===== 002f4f00  FUN_002f4f00 =====

void FUN_002f4f00(undefined8 param_1)

{
  FUN_002f5300(param_1,1);
  return;
}


// ===== 002f4f08  FUN_002f4f08 =====

void FUN_002f4f08(undefined8 param_1)

{
  FUN_002f5300(param_1,0);
  return;
}


// ===== 002f4f10  FUN_002f4f10 =====

void FUN_002f4f10(long param_1)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  
  if (*(short *)(*(long *)(param_1 + 0x10) + 0x14) < 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 8);
  }
  else {
    lVar3 = FUN_0023ce88(param_1,0);
  }
  if (lVar3 != 0) {
    uVar4 = *(ulong *)(lVar3 + 0x18);
    if (1 < uVar4) {
      lVar7 = *(long *)(lVar3 + 8);
      bVar2 = false;
      iVar6 = 0;
      uVar5 = 1;
      do {
        bVar1 = *(byte *)(lVar7 + uVar5);
        if (((bVar1 == 0x2c) && (!bVar2)) && (iVar6 == 0)) {
          *(ulong *)(lVar3 + 0x18) = uVar4 - uVar5;
          memmove((void *)(lVar7 + 1),(void *)(lVar7 + (ulong)((int)uVar5 + 1)),(uVar4 - uVar5) - 1)
          ;
          *(undefined1 *)(lVar7 + *(long *)(lVar3 + 0x18)) = 0;
          return;
        }
        if (bVar1 == 0x5c) {
          uVar5 = (ulong)((int)uVar5 + 1);
        }
        else if (bVar1 == 0x22) {
          bVar2 = !bVar2;
        }
        else if (bVar2) {
          bVar2 = true;
        }
        else {
          if ((bVar1 & 0xdf) == 0x5b) {
            iVar6 = iVar6 + 1;
          }
          iVar6 = iVar6 - (uint)((bVar1 & 0xdf) == 0x5d);
        }
        uVar5 = (ulong)((int)uVar5 + 1);
      } while (uVar5 < uVar4);
    }
    *(undefined8 *)(lVar3 + 0x18) = 1;
  }
  return;
}


// ===== 002f5008  FUN_002f5008 =====

void FUN_002f5008(long param_1,undefined8 param_2,undefined8 *param_3)

{
  ushort uVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  uint uVar7;
  ulong uVar8;
  
  if (*(short *)(*(long *)(param_1 + 0x10) + 0x14) < 0) {
    plVar3 = *(long **)(*(long *)(param_1 + 0x10) + 8);
  }
  else {
    plVar3 = (long *)FUN_0023ce88(param_1,0x88);
  }
  if (plVar3 == (long *)0x0) {
    return;
  }
  lVar5 = plVar3[1];
  if (lVar5 == 0) {
    *(undefined2 *)((long)plVar3 + 0x21) = 0x7b00;
    plVar3[1] = (long)plVar3 + 0x22;
    plVar3[2] = 100;
    *(undefined1 *)(plVar3 + 4) = 1;
    plVar3[3] = 1;
  }
  else {
    uVar8 = plVar3[3];
    if (1 < uVar8) {
      if ((ulong)plVar3[2] <= uVar8) {
        iVar2 = FUN_002f0c14(plVar3,1);
        if (iVar2 != 0) goto LAB_002f50c4;
        uVar8 = plVar3[3];
        lVar5 = plVar3[1];
      }
      plVar3[3] = uVar8 + 1;
      *(undefined1 *)(lVar5 + uVar8) = 0x2c;
    }
  }
LAB_002f50c4:
  *plVar3 = param_1;
  piVar6 = (int *)*param_3;
  uVar1 = *(ushort *)(piVar6 + 5);
  uVar7 = (uint)uVar1;
  if ((((uVar1 ^ 0xffff) & 0x202) == 0) && (*(char *)((long)piVar6 + 0x16) == '\x01')) {
    uVar4 = *(undefined8 *)(piVar6 + 2);
joined_r0x002f511c:
    if ((uVar1 >> 1 & 1) == 0) goto LAB_002f5134;
LAB_002f5120:
    uVar7 = (uint)uVar1;
    if (*(char *)((long)piVar6 + 0x16) != '\x01') goto LAB_002f5134;
    iVar2 = piVar6[4];
  }
  else {
    if ((uVar1 & 1) != 0) {
      uVar4 = 0;
      goto joined_r0x002f511c;
    }
    uVar4 = FUN_0022ae18(piVar6,1);
    piVar6 = (int *)*param_3;
    uVar1 = *(ushort *)(piVar6 + 5);
    uVar7 = (uint)uVar1;
    if ((uVar1 >> 1 & 1) != 0) goto LAB_002f5120;
LAB_002f5134:
    if ((uVar7 >> 4 & 1) == 0) {
      if ((uVar7 & 1) == 0) {
        iVar2 = FUN_0023c158(piVar6,1);
      }
      else {
        iVar2 = 0;
      }
    }
    else {
      iVar2 = piVar6[4];
      if ((uVar7 >> 10 & 1) != 0) {
        iVar2 = *piVar6 + iVar2;
      }
    }
  }
  FUN_002f1930(plVar3,uVar4,iVar2);
  uVar8 = plVar3[3];
  if ((ulong)plVar3[2] <= uVar8) {
    iVar2 = FUN_002f0c14(plVar3,1);
    if (iVar2 != 0) goto LAB_002f51ac;
    uVar8 = plVar3[3];
  }
  plVar3[3] = uVar8 + 1;
  *(undefined1 *)(plVar3[1] + uVar8) = 0x3a;
LAB_002f51ac:
  FUN_002f15bc(plVar3,param_3[1]);
  return;
}


// ===== 002f51c4  FUN_002f51c4 =====

void FUN_002f51c4(undefined8 param_1)

{
  FUN_002f51d4(param_1,1);
  return;
}


// ===== 002f51cc  FUN_002f51cc =====

void FUN_002f51cc(undefined8 param_1)

{
  FUN_002f51d4(param_1,0);
  return;
}


// ===== 002f51d4  FUN_002f51d4 =====

void FUN_002f51d4(long *param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  if (*(short *)(param_1[2] + 0x14) < 0) {
    lVar3 = *(long *)(param_1[2] + 8);
  }
  else {
    lVar3 = FUN_0023ce88(param_1,0);
  }
  if (lVar3 == 0) {
    FUN_0023d018(param_1,&DAT_0016ee17,2,1,0);
    goto LAB_002f52d8;
  }
  uVar4 = *(ulong *)(lVar3 + 0x18);
  if (uVar4 < *(ulong *)(lVar3 + 0x10)) {
LAB_002f522c:
    *(ulong *)(lVar3 + 0x18) = uVar4 + 1;
    *(undefined1 *)(*(long *)(lVar3 + 8) + uVar4) = 0x7d;
  }
  else {
    iVar2 = FUN_002f0c14(lVar3,1);
    if (iVar2 == 0) {
      uVar4 = *(ulong *)(lVar3 + 0x18);
      goto LAB_002f522c;
    }
  }
  if (*(char *)(lVar3 + 0x21) == '\0') {
    if (param_2 == 0) {
      FUN_0023d018(param_1,*(undefined8 *)(lVar3 + 8),*(undefined4 *)(lVar3 + 0x18),1,
                   0xffffffffffffffff);
      *(long *)(lVar3 + 0x18) = *(long *)(lVar3 + 0x18) + -1;
    }
    else {
      puVar1 = PTR_sqlite3_free_0030d498;
      if (*(char *)(lVar3 + 0x20) != '\0') {
        puVar1 = (undefined *)0xffffffffffffffff;
      }
      FUN_0023d018(param_1,*(undefined8 *)(lVar3 + 8),*(undefined4 *)(lVar3 + 0x18),1,puVar1);
      *(undefined1 *)(lVar3 + 0x20) = 1;
    }
  }
  else if (*(char *)(lVar3 + 0x21) == '\x01') {
    sqlite3_result_error_nomem(param_1);
  }
LAB_002f52d8:
  lVar3 = *param_1;
  *(undefined1 *)(lVar3 + 0x17) = 0x4a;
  *(ushort *)(lVar3 + 0x14) = *(ushort *)(lVar3 + 0x14) | 0x800;
  return;
}


// ===== 002f5300  FUN_002f5300 =====

void FUN_002f5300(long *param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  
  if (*(short *)(param_1[2] + 0x14) < 0) {
    plVar3 = *(long **)(param_1[2] + 8);
  }
  else {
    plVar3 = (long *)FUN_0023ce88(param_1,0);
  }
  if (plVar3 == (long *)0x0) {
    FUN_0023d018(param_1,&DAT_0016e079,2,1,0);
    goto LAB_002f5408;
  }
  uVar4 = plVar3[3];
  *plVar3 = (long)param_1;
  if (uVar4 < (ulong)plVar3[2]) {
LAB_002f535c:
    plVar3[3] = uVar4 + 1;
    *(undefined1 *)(plVar3[1] + uVar4) = 0x5d;
  }
  else {
    iVar2 = FUN_002f0c14(plVar3,1);
    if (iVar2 == 0) {
      uVar4 = plVar3[3];
      goto LAB_002f535c;
    }
  }
  if (*(char *)((long)plVar3 + 0x21) == '\0') {
    if (param_2 == 0) {
      FUN_0023d018(param_1,plVar3[1],(int)plVar3[3],1,0xffffffffffffffff);
      plVar3[3] = plVar3[3] + -1;
    }
    else {
      puVar1 = PTR_sqlite3_free_0030d498;
      if ((char)plVar3[4] != '\0') {
        puVar1 = (undefined *)0xffffffffffffffff;
      }
      FUN_0023d018(param_1,plVar3[1],(int)plVar3[3],1,puVar1);
      *(undefined1 *)(plVar3 + 4) = 1;
    }
  }
  else if (*(char *)((long)plVar3 + 0x21) == '\x01') {
    sqlite3_result_error_nomem(param_1);
  }
LAB_002f5408:
  lVar5 = *param_1;
  *(undefined1 *)(lVar5 + 0x17) = 0x4a;
  *(ushort *)(lVar5 + 0x14) = *(ushort *)(lVar5 + 0x14) | 0x800;
  return;
}


// ===== 002f5430  FUN_002f5430 =====

/* WARNING: Type propagation algorithm not settling */

long FUN_002f5430(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  int *piVar6;
  long lVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  void *__s2;
  size_t __n;
  long lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  
  piVar6 = (int *)*param_2;
  uVar2 = *(ushort *)(piVar6 + 5);
  uVar9 = (uint)uVar2;
  if ((((uVar2 ^ 0xffff) & 0x202) == 0) && (*(char *)((long)piVar6 + 0x16) == '\x01')) {
    __s2 = *(void **)(piVar6 + 2);
joined_r0x002f547c:
    if ((uVar2 >> 1 & 1) == 0) goto LAB_002f54cc;
LAB_002f54b4:
    uVar9 = (uint)uVar2;
    if (*(char *)((long)piVar6 + 0x16) != '\x01') goto LAB_002f54cc;
    iVar3 = piVar6[4];
  }
  else {
    if ((uVar2 & 1) != 0) {
      __s2 = (void *)0x0;
      goto joined_r0x002f547c;
    }
    __s2 = (void *)FUN_0022ae18(piVar6,1);
    piVar6 = (int *)*param_2;
    uVar2 = *(ushort *)(piVar6 + 5);
    uVar9 = (uint)uVar2;
    if ((uVar2 >> 1 & 1) != 0) goto LAB_002f54b4;
LAB_002f54cc:
    if ((uVar9 >> 4 & 1) == 0) {
      if ((uVar9 & 1) == 0) {
        iVar3 = FUN_0023c158(piVar6,1);
      }
      else {
        iVar3 = 0;
      }
    }
    else {
      iVar3 = piVar6[4];
      if ((uVar9 >> 10 & 1) != 0) {
        iVar3 = *piVar6 + iVar3;
      }
    }
  }
  if (__s2 == (void *)0x0) {
    return 0;
  }
  __n = (size_t)iVar3;
  lVar12 = *(long *)(*(long *)(param_1 + 0x18) + 0x128);
  for (lVar7 = lVar12; lVar7 != 0; lVar7 = *(long *)(lVar7 + 0x18)) {
    if (*(int *)(lVar7 + 4) == -0x68f72) {
      lVar7 = *(long *)(lVar7 + 8);
      if (lVar7 != 0) {
        lVar16 = lVar12;
        if ((*(int *)(lVar7 + 0x24) == iVar3) &&
           (iVar4 = memcmp(*(void **)(lVar7 + 0x10),__s2,__n), iVar4 == 0)) {
          uVar9 = *(uint *)(lVar7 + 0x28);
          *(undefined1 *)(lVar7 + 0x21) = 0;
          uVar11 = 0xffffffff;
        }
        else {
          uVar9 = *(uint *)(lVar7 + 0x28);
          lVar7 = 0;
          uVar11 = uVar9;
        }
        goto LAB_002f557c;
      }
      break;
    }
  }
  uVar14 = 0;
  uVar13 = 0;
  goto LAB_002f55a0;
  while (plVar1 = (long *)(lVar16 + 0x18), lVar16 = *plVar1, *plVar1 != 0) {
LAB_002f557c:
    if (*(int *)(lVar16 + 4) == -0x68f71) {
      lVar16 = *(long *)(lVar16 + 8);
      if (lVar16 != 0) {
        if (((lVar7 == 0) && (*(int *)(lVar16 + 0x24) == iVar3)) &&
           (iVar4 = memcmp(*(void **)(lVar16 + 0x10),__s2,__n), iVar4 == 0)) {
          uVar13 = *(uint *)(lVar16 + 0x28);
          uVar14 = 0;
          *(undefined1 *)(lVar16 + 0x21) = 0;
          lVar7 = lVar16;
          uVar10 = uVar11;
        }
        else {
          uVar13 = *(uint *)(lVar16 + 0x28);
          uVar14 = (uint)(uVar13 < uVar11);
          uVar10 = uVar13;
          if (uVar13 >= uVar11) {
            uVar10 = uVar11;
          }
        }
        lVar16 = lVar12;
        if (uVar13 <= uVar9) {
          uVar13 = uVar9;
        }
        goto LAB_002f5710;
      }
      break;
    }
  }
  uVar14 = 1;
  uVar13 = uVar9;
  goto LAB_002f5884;
  while (plVar1 = (long *)(lVar16 + 0x18), lVar16 = *plVar1, *plVar1 != 0) {
LAB_002f5710:
    if (*(int *)(lVar16 + 4) == -0x68f70) {
      lVar16 = *(long *)(lVar16 + 8);
      if (lVar16 != 0) {
        if (((lVar7 == 0) && (*(int *)(lVar16 + 0x24) == iVar3)) &&
           (iVar4 = memcmp(*(void **)(lVar16 + 0x10),__s2,__n), iVar4 == 0)) {
          uVar9 = *(uint *)(lVar16 + 0x28);
          *(undefined1 *)(lVar16 + 0x21) = 0;
          lVar7 = lVar16;
          uVar15 = uVar14;
          uVar11 = uVar10;
        }
        else {
          uVar9 = *(uint *)(lVar16 + 0x28);
          uVar15 = 2;
          uVar11 = uVar9;
          if (uVar10 <= uVar9) {
            uVar15 = uVar14;
            uVar11 = uVar10;
          }
        }
        if (uVar9 <= uVar13) {
          uVar9 = uVar13;
        }
        goto LAB_002f57f4;
      }
      break;
    }
  }
  uVar14 = 2;
  goto LAB_002f5884;
  while (lVar12 = *(long *)(lVar12 + 0x18), lVar12 != 0) {
LAB_002f57f4:
    if (*(int *)(lVar12 + 4) == -0x68f6f) {
      lVar12 = *(long *)(lVar12 + 8);
      if (lVar12 != 0) {
        if (((lVar7 == 0) && (*(int *)(lVar12 + 0x24) == iVar3)) &&
           (iVar4 = memcmp(*(void **)(lVar12 + 0x10),__s2,__n), iVar4 == 0)) {
          uVar13 = *(uint *)(lVar12 + 0x28);
          *(undefined1 *)(lVar12 + 0x21) = 0;
          lVar7 = lVar12;
          uVar14 = uVar15;
        }
        else {
          uVar13 = *(uint *)(lVar12 + 0x28);
          uVar14 = 3;
          if (uVar11 <= uVar13) {
            uVar14 = uVar15;
          }
        }
        if (uVar13 <= uVar9) {
          uVar13 = uVar9;
        }
        goto LAB_002f5884;
      }
      break;
    }
  }
  uVar14 = 3;
  uVar13 = uVar9;
LAB_002f5884:
  if (lVar7 != 0) {
    *(undefined1 *)(lVar7 + 0x21) = 0;
    *(uint *)(lVar7 + 0x28) = uVar13 + 1;
    return lVar7;
  }
LAB_002f55a0:
  iVar4 = sqlite3_initialize();
  if ((iVar4 == 0) && (puVar5 = (undefined8 *)FUN_0022a6ac(__n + 0x31), puVar5 != (undefined8 *)0x0)
     ) {
    puVar8 = puVar5 + 6;
    puVar5[3] = 0;
    puVar5[2] = 0;
    puVar5[5] = 0;
    puVar5[4] = 0;
    puVar5[1] = 0;
    *puVar5 = 0;
    puVar5[2] = puVar8;
    memcpy(puVar8,__s2,(long)(iVar3 + 1));
    iVar4 = FUN_002f58cc(puVar5,param_3,puVar8);
    if (iVar4 == 0) {
      *(int *)((long)puVar5 + 0x24) = iVar3;
      *(uint *)(puVar5 + 5) = uVar13 + 1;
      sqlite3_set_auxdata(param_1,uVar14 - 0x68f72,puVar5,FUN_002f59a4);
      lVar7 = *(long *)(*(long *)(param_1 + 0x18) + 0x128);
      if (lVar7 != 0) {
        do {
          if (*(int *)(lVar7 + 4) == uVar14 - 0x68f72) {
            return *(long *)(lVar7 + 8);
          }
          lVar7 = *(long *)(lVar7 + 0x18);
        } while (lVar7 != 0);
        return 0;
      }
    }
    else {
      puVar8 = &DAT_00313858;
      if (DAT_00313830 != 0) {
        if (DAT_00316f08 != (undefined8 *)0x0) {
          (*DAT_003138b0)();
        }
        iVar3 = (*DAT_00313868)(puVar5);
        DAT_00316e60 = DAT_00316e60 - iVar3;
        DAT_00316ea8 = DAT_00316ea8 + -1;
        (*DAT_00313858)(puVar5);
        if (DAT_00316f08 == (undefined8 *)0x0) {
          return 0;
        }
        puVar8 = &DAT_003138c0;
        puVar5 = DAT_00316f08;
      }
      (*(code *)*puVar8)(puVar5);
    }
  }
  else {
    sqlite3_result_error_nomem(param_1);
  }
  return 0;
}


// ===== 002f58cc  FUN_002f58cc =====

undefined8 FUN_002f58cc(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  if (param_3 == 0) {
    return 1;
  }
  param_1[2] = param_3;
  uVar2 = FUN_002f1c6c(param_1,0);
  if ((*(char *)(param_1 + 4) == '\0') && (0 < (int)uVar2)) {
    uVar1 = (ulong)uVar2;
    do {
      uVar3 = uVar1;
      uVar1 = uVar3 + 1;
    } while ((&DAT_00181588)[*(byte *)(param_3 + uVar3)] != '\0');
    if ((0 < (int)uVar3) && (*(byte *)(param_3 + uVar3) == 0)) {
      return 0;
    }
  }
  if (param_2 != (undefined8 *)0x0) {
    if (*(char *)(param_1 + 4) == '\0') {
      *(undefined4 *)((long)param_2 + 0x24) = 1;
      FUN_0023c180(*param_2,"malformed JSON",0xffffffffffffffff,1,0xffffffffffffffff);
    }
    else {
      sqlite3_result_error_nomem(param_2);
    }
  }
  FUN_002f23c4(param_1);
  return 1;
}


// ===== 002f59a4  FUN_002f59a4 =====

void FUN_002f59a4(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  FUN_002f23c4();
  if (param_1 == 0) {
    return;
  }
  puVar2 = &DAT_00313858;
  if (DAT_00313830 != 0) {
    if (DAT_00316f08 != 0) {
      (*DAT_003138b0)();
    }
    iVar1 = (*DAT_00313868)(param_1);
    DAT_00316e60 = DAT_00316e60 - iVar1;
    DAT_00316ea8 = DAT_00316ea8 + -1;
    (*DAT_00313858)(param_1);
    if (DAT_00316f08 == 0) {
      return;
    }
    puVar2 = &DAT_003138c0;
    param_1 = DAT_00316f08;
  }
                    /* WARNING: Could not recover jumptable at 0x002f5a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(param_1);
  return;
}


// ===== 002f5a5c  FUN_002f5a5c =====

void FUN_002f5a5c(long param_1,char *param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = 0;
  if (param_2 != (char *)0x0) {
    if ((*param_2 == '$') &&
       (uVar3 = FUN_002f261c(param_1,0,param_2 + 1,param_3,&local_40), local_40 == 0))
    goto LAB_002f5b8c;
    *(char *)(param_1 + 0x21) = *(char *)(param_1 + 0x21) + '\x01';
    lVar4 = sqlite3_mprintf("JSON path error near \'%q\'");
    if (lVar4 == 0) {
      sqlite3_result_error_nomem(param_4);
    }
    else {
      *(undefined4 *)((long)param_4 + 0x24) = 1;
      FUN_0023c180(*param_4,lVar4,0xffffffffffffffff,1,0xffffffffffffffff);
      puVar5 = &DAT_00313858;
      if (DAT_00313830 != 0) {
        if (DAT_00316f08 != 0) {
          (*DAT_003138b0)();
        }
        iVar2 = (*DAT_00313868)(lVar4);
        DAT_00316e60 = DAT_00316e60 - iVar2;
        DAT_00316ea8 = DAT_00316ea8 + -1;
        (*DAT_00313858)(lVar4);
        if (DAT_00316f08 == 0) goto LAB_002f5b88;
        puVar5 = &DAT_003138c0;
        lVar4 = DAT_00316f08;
      }
      (*(code *)*puVar5)(lVar4);
    }
  }
LAB_002f5b88:
  uVar3 = 0;
LAB_002f5b8c:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


// ===== 002f5bbc  FUN_002f5bbc =====

char * FUN_002f5bbc(uint *param_1,uint param_2,char *param_3)

{
  long lVar1;
  undefined2 *puVar2;
  char *pcVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  char *pcVar15;
  char *__s2;
  uint uVar16;
  ulong uVar17;
  
  pcVar15 = param_3;
  if (*param_3 == '\a') {
    uVar13 = (ulong)param_2;
    pcVar15 = (char *)(*(long *)(param_1 + 2) + (ulong)param_2 * 0x10);
    if (*pcVar15 == '\a') {
      if (1 < *(uint *)(param_3 + 4)) {
        uVar16 = 1;
        uVar14 = uVar13;
        do {
          uVar9 = *(uint *)(pcVar15 + 4);
          uVar8 = 1;
          uVar4 = *(uint *)(param_3 + (ulong)uVar16 * 0x10 + 4);
          __s2 = *(char **)(param_3 + (ulong)uVar16 * 0x10 + 8);
          uVar6 = 1;
          if (1 < uVar9) {
            do {
              uVar8 = uVar6;
              if ((*(uint *)(pcVar15 + (ulong)uVar8 * 0x10 + 4) == uVar4) &&
                 (iVar7 = strncmp(*(char **)(pcVar15 + (ulong)uVar8 * 0x10 + 8),__s2,(ulong)uVar4),
                 iVar7 == 0)) {
                bVar5 = pcVar15[(ulong)(uVar8 + 1) * 0x10 + 1];
                if ((bVar5 & 0x14) == 0) {
                  if (param_3[(ulong)(uVar16 + 1) * 0x10] == '\0') {
                    pcVar15[(ulong)(uVar8 + 1) * 0x10 + 1] = bVar5 | 4;
                  }
                  else {
                    pcVar10 = (char *)FUN_002f5bbc(param_1,param_2 + 1 + uVar8);
                    if (pcVar10 == (char *)0x0) {
                      return (char *)0x0;
                    }
                    pcVar15 = (char *)(*(long *)(param_1 + 2) + uVar13 * 0x10);
                    pcVar3 = pcVar15 + (ulong)(uVar8 + 1) * 0x10;
                    if (pcVar10 != pcVar3) {
                      *(char **)(pcVar3 + 8) = pcVar10;
                      pcVar3[1] = pcVar3[1] | 0x10;
                    }
                  }
                }
                break;
              }
              uVar8 = uVar8 + 1;
              if ((byte)pcVar15[(ulong)uVar8 * 0x10] < 6) {
                iVar7 = 1;
              }
              else {
                iVar7 = *(int *)(pcVar15 + (ulong)uVar8 * 0x10 + 4) + 1;
              }
              uVar8 = uVar8 + iVar7;
              uVar6 = uVar8;
            } while (uVar8 < uVar9);
          }
          uVar17 = (ulong)(uVar16 + 1);
          if ((*(uint *)(pcVar15 + 4) <= uVar8) && (param_3[uVar17 * 0x10] != '\0')) {
            if ((*(long *)(param_1 + 2) == 0) || (param_1[1] <= *param_1)) {
              uVar8 = FUN_002f2d5c(param_1,7,2,0);
              lVar11 = *(long *)(param_1 + 2);
              if (lVar11 != 0) goto LAB_002f5d40;
LAB_002f5d78:
              FUN_002f2d5c(param_1,5,(ulong)uVar4,__s2);
              lVar11 = *(long *)(param_1 + 2);
              if (lVar11 == 0) goto LAB_002f5dc4;
LAB_002f5d94:
              if (param_1[1] <= *param_1) goto LAB_002f5dc4;
              puVar2 = (undefined2 *)(lVar11 + (ulong)*param_1 * 0x10);
              *puVar2 = 1;
              *(undefined8 *)(puVar2 + 4) = 0;
              uVar9 = *param_1;
              *(undefined4 *)(puVar2 + 2) = 0;
              *param_1 = uVar9 + 1;
            }
            else {
              puVar2 = (undefined2 *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0x10);
              *puVar2 = 7;
              *(undefined8 *)(puVar2 + 4) = 0;
              uVar8 = *param_1;
              *(undefined4 *)(puVar2 + 2) = 2;
              *param_1 = uVar8 + 1;
              lVar11 = *(long *)(param_1 + 2);
              if (lVar11 == 0) goto LAB_002f5d78;
LAB_002f5d40:
              if (param_1[1] <= *param_1) goto LAB_002f5d78;
              puVar2 = (undefined2 *)(lVar11 + (ulong)*param_1 * 0x10);
              *puVar2 = 5;
              *(char **)(puVar2 + 4) = __s2;
              uVar9 = *param_1;
              *(uint *)(puVar2 + 2) = uVar4;
              *param_1 = uVar9 + 1;
              lVar11 = *(long *)(param_1 + 2);
              if (lVar11 != 0) goto LAB_002f5d94;
LAB_002f5dc4:
              uVar9 = FUN_002f2d5c(param_1,1,0,0);
            }
            if ((char)param_1[8] != '\0') {
              return (char *)0x0;
            }
            FUN_002f5ee8(param_3);
            lVar12 = *(long *)(param_1 + 2);
            iVar7 = (int)uVar14;
            lVar11 = lVar12 + uVar14 * 0x10;
            uVar14 = (ulong)uVar8;
            *(uint *)(lVar11 + 8) = uVar8 - iVar7;
            lVar1 = *(long *)(param_1 + 2) + (long)(int)uVar9 * 0x10;
            *(byte *)(lVar11 + 1) = *(byte *)(lVar11 + 1) | 0x20;
            pcVar15 = (char *)(lVar12 + uVar13 * 0x10);
            *(char **)(lVar1 + 8) = param_3 + uVar17 * 0x10;
            *(byte *)(lVar1 + 1) = *(byte *)(lVar1 + 1) | 0x10;
          }
          if ((byte)param_3[uVar17 * 0x10] < 6) {
            iVar7 = 1;
          }
          else {
            iVar7 = *(int *)(param_3 + uVar17 * 0x10 + 4) + 1;
          }
          uVar16 = uVar16 + 1 + iVar7;
        } while (uVar16 < *(uint *)(param_3 + 4));
      }
    }
    else {
      FUN_002f5ee8(param_3);
      pcVar15 = param_3;
    }
  }
  return pcVar15;
}


// ===== 002f5ee8  FUN_002f5ee8 =====

void FUN_002f5ee8(long param_1)

{
  byte *pbVar1;
  long lVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = *(int *)(param_1 + 4);
  if (1 < iVar3) {
    iVar6 = 2;
    do {
      pbVar1 = (byte *)(param_1 + (long)iVar6 * 0x10);
      bVar4 = *pbVar1;
      if (bVar4 == 7) {
        FUN_002f5ee8(pbVar1);
        bVar4 = *pbVar1;
LAB_002f5f78:
        if (bVar4 < 6) {
          iVar5 = 1;
        }
        else {
          iVar5 = *(int *)(param_1 + (long)iVar6 * 0x10 + 4) + 1;
        }
      }
      else {
        if (bVar4 != 0) goto LAB_002f5f78;
        lVar2 = param_1 + (long)iVar6 * 0x10;
        *(byte *)(lVar2 + 1) = *(byte *)(lVar2 + 1) | 4;
        iVar5 = 1;
      }
      iVar6 = iVar6 + iVar5 + 1;
    } while (iVar6 <= iVar3);
  }
  return;
}


// ===== 002f5f88  FUN_002f5f88 =====

void FUN_002f5f88(long param_1,void *param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  ulong __n;
  
  if (param_3 != 0) {
    lVar2 = *(long *)(param_1 + 0x18);
    __n = (ulong)param_3;
    if (*(ulong *)(param_1 + 0x10) <= lVar2 + __n) {
      iVar1 = FUN_002f0c14(param_1,param_3);
      if (iVar1 != 0) {
        return;
      }
      lVar2 = *(long *)(param_1 + 0x18);
    }
    memcpy((void *)(*(long *)(param_1 + 8) + lVar2),param_2,__n);
    *(ulong *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + __n;
  }
  return;
}


// ===== 002f5ffc  FUN_002f5ffc =====

void FUN_002f5ffc(long *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  double *pdVar7;
  double dVar8;
  long local_70;
  int iStack_68;
  int iStack_64;
  int local_60;
  int iStack_5c;
  undefined8 uStack_58;
  int iStack_54;
  undefined8 local_50;
  char local_48;
  char local_47;
  char local_46;
  char cStack_45;
  char local_44;
  
  lVar4 = tpidr_el0;
  lVar6 = *(long *)(lVar4 + 0x28);
  iVar5 = FUN_002f7b68();
  if (iVar5 != 0) goto LAB_002f622c;
  if (local_48 == '\0') {
    if (local_46 == '\0') {
      iStack_64 = 1;
      iStack_68 = 2000;
      iVar5 = 1;
joined_r0x002f61ac:
      if (local_47 == '\0') {
        iVar1 = iStack_64 + 0xc;
        if (2 < iStack_64) {
          iVar1 = iStack_64;
        }
        iStack_68 = iStack_68 - (uint)(iStack_64 < 3);
        iVar3 = (int)(short)iStack_68;
        iVar2 = iVar3 * -0x147b;
        local_70 = (long)(((double)(int)(((iVar2 >> 0x13) - (iVar2 >> 0x1f)) + iVar3 / 400 +
                                         (iVar1 * 0x4ab51 + 0x4ab51) / 10000 + iVar5 +
                                         (iStack_68 * 0x8ead + 0xa445afcU) / 100 + 2) + -1524.5) *
                         86400000.0);
        if (cStack_45 != '\0') {
          dVar8 = (double)NEON_fmadd(local_50,0x408f400000000000,0x3fe0000000000000);
          local_70 = (long)dVar8 + (long)iStack_5c * 3600000 + (long)iStack_54 * 60000 + local_70;
          if (local_44 != '\0') {
            local_70 = local_70 + (long)iStack_54 * -60000;
          }
        }
        goto LAB_002f61c8;
      }
    }
    else if (0xffffc686 < iStack_68 - 10000U) {
      iVar5 = local_60;
      goto joined_r0x002f61ac;
    }
    local_70 = 0;
  }
LAB_002f61c8:
  pdVar7 = (double *)*param_1;
  dVar8 = (double)local_70 / 86400000.0;
  if ((*(ushort *)((long)pdVar7 + 0x14) & 0x9000) == 0) {
    *(undefined2 *)((long)pdVar7 + 0x14) = 1;
  }
  else {
    FUN_0022c2ec(pdVar7);
  }
  if ((((ulong)dVar8 ^ 0xffffffffffffffff) & 0x7ff0000000000000) != 0 ||
      ((ulong)dVar8 & 0xfffffffffffff) == 0) {
    *pdVar7 = dVar8;
    *(undefined2 *)((long)pdVar7 + 0x14) = 8;
  }
LAB_002f622c:
  if (*(long *)(lVar4 + 0x28) != lVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 002f6254  FUN_002f6254 =====

void FUN_002f6254(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  double dVar8;
  long local_60;
  int iStack_58;
  int iStack_54;
  int local_50;
  int iStack_4c;
  undefined8 uStack_48;
  int iStack_44;
  undefined8 local_40;
  char local_38;
  char local_37;
  char local_36;
  char cStack_35;
  char local_34;
  
  lVar4 = tpidr_el0;
  lVar7 = *(long *)(lVar4 + 0x28);
  iVar5 = FUN_002f7b68();
  if (iVar5 != 0) goto LAB_002f6470;
  if (local_38 == '\0') {
    if (local_36 == '\0') {
      iStack_54 = 1;
      iStack_58 = 2000;
      iVar5 = 1;
joined_r0x002f6400:
      if (local_37 == '\0') {
        iVar1 = iStack_54 + 0xc;
        if (2 < iStack_54) {
          iVar1 = iStack_54;
        }
        iStack_58 = iStack_58 - (uint)(iStack_54 < 3);
        iVar3 = (int)(short)iStack_58;
        iVar2 = iVar3 * -0x147b;
        local_60 = (long)(((double)(int)(((iVar2 >> 0x13) - (iVar2 >> 0x1f)) + iVar3 / 400 +
                                         (iVar1 * 0x4ab51 + 0x4ab51) / 10000 + iVar5 +
                                         (iStack_58 * 0x8ead + 0xa445afcU) / 100 + 2) + -1524.5) *
                         86400000.0);
        if (cStack_35 != '\0') {
          dVar8 = (double)NEON_fmadd(local_40,0x408f400000000000,0x3fe0000000000000);
          local_60 = (long)dVar8 + (long)iStack_4c * 3600000 + (long)iStack_44 * 60000 + local_60;
          if (local_34 != '\0') {
            local_60 = local_60 + (long)iStack_44 * -60000;
          }
        }
        goto LAB_002f641c;
      }
    }
    else if (0xffffc686 < iStack_58 - 10000U) {
      iVar5 = local_50;
      goto joined_r0x002f6400;
    }
    local_60 = 0;
  }
LAB_002f641c:
  plVar6 = (long *)*param_1;
  if ((*(ushort *)((long)plVar6 + 0x14) & 0x9000) == 0) {
    *plVar6 = local_60 / 1000 + -0x3118a36940;
    *(undefined2 *)((long)plVar6 + 0x14) = 4;
  }
  else {
    FUN_0023c114();
  }
LAB_002f6470:
  if (*(long *)(lVar4 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002f6494  FUN_002f6494 =====

void FUN_002f6494(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  ulong local_80;
  uint uStack_78;
  int iStack_74;
  int local_70;
  undefined8 local_58;
  undefined1 local_48;
  byte local_47;
  byte local_46;
  byte local_45;
  byte local_44;
  undefined1 local_43;
  char local_42;
  char local_41;
  undefined1 local_40;
  char local_3f;
  char local_3e;
  undefined1 local_3d;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar6 = FUN_002f7b68();
  if (iVar6 == 0) {
    if (local_58._2_1_ == '\0') {
      puVar7 = (undefined1 *)((long)&local_58 + 2);
      if ((char)local_58 == '\0') {
        uStack_78 = 2000;
        iStack_74 = 1;
        local_70 = 1;
      }
      else if (local_80 < 0x1a6401072fe00) {
        iVar11 = (int)((local_80 + 43200000) / 86400000);
        iVar10 = (int)(((double)iVar11 + DAT_00177f10) / 36524.25);
        iVar6 = iVar10 + 3;
        if (-1 < iVar10) {
          iVar6 = iVar10;
        }
        iVar6 = ((iVar11 + iVar10) - (iVar6 >> 2)) + 0x5f5;
        uStack_78 = (uint)(((double)iVar6 + DAT_00178010) / 365.25);
        iVar6 = iVar6 - ((uStack_78 & 0x7fff) * 0x8ead) / 100;
        iVar11 = (int)((double)iVar6 / DAT_00177f08);
        iStack_74 = -0xd;
        if (iVar11 < 0xe) {
          iStack_74 = -1;
        }
        iStack_74 = iStack_74 + iVar11;
        local_70 = iVar6 - (int)((double)iVar11 * DAT_00177f08);
        iVar6 = -0x126c;
        if (iStack_74 < 3) {
          iVar6 = -0x126b;
        }
        uStack_78 = iVar6 + uStack_78;
      }
      else {
        local_70 = 0;
        iStack_74 = 0;
        uStack_78 = 0;
        puVar7 = (undefined1 *)((long)&local_58 + 6);
        local_58 = 0;
      }
      *puVar7 = 1;
    }
    else {
    }
    uVar1 = -uStack_78;
    if (-1 < (int)uStack_78) {
      uVar1 = uStack_78;
    }
    local_3d = 0;
    cVar3 = (char)(uVar1 / 10);
    lVar9 = (long)(iStack_74 / 10) * 0x66666667;
    lVar12 = (long)(local_70 / 10) * 0x66666667;
    local_44 = (char)uVar1 + cVar3 * -10 | 0x30;
    local_47 = (char)(uVar1 / 1000) + (char)(((ulong)uVar1 / 1000) * 0x1999999a >> 0x20) * -10 |
               0x30;
    cVar5 = (char)(local_70 / 10);
    local_46 = (char)(uVar1 / 100) + (char)(((ulong)uVar1 / 100) * 0x1999999a >> 0x20) * -10 | 0x30;
    cVar4 = (char)(iStack_74 / 10);
    local_45 = cVar3 + (char)(((ulong)uVar1 / 10) * 0x1999999a >> 0x20) * -10 | 0x30;
    local_42 = cVar4 + ((char)(uint)((ulong)lVar9 >> 0x22) - (char)(lVar9 >> 0x3f)) * -10 + '0';
    local_3e = (char)local_70 + cVar5 * -10 + '0';
    local_43 = 0x2d;
    local_41 = (char)iStack_74 + cVar4 * -10 + '0';
    local_3f = cVar5 + ((char)(uint)((ulong)lVar12 >> 0x22) - (char)(lVar12 >> 0x3f)) * -10 + '0';
    local_40 = 0x2d;
    if ((int)uStack_78 < 0) {
      local_48 = 0x2d;
      puVar7 = &local_48;
      uVar8 = 0xb;
    }
    else {
      uVar8 = 10;
      puVar7 = (undefined1 *)((ulong)&local_48 | 1);
    }
    FUN_0023d018(param_1,puVar7,uVar8,1,0xffffffffffffffff);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002f67b4  FUN_002f67b4 =====

void FUN_002f67b4(undefined8 param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  int iVar3;
  long lVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  long local_70;
  int iStack_68;
  int iStack_64;
  int local_60;
  int iStack_5c;
  int iStack_58;
  double local_50;
  char local_48;
  char local_47;
  char local_46;
  char local_45;
  char local_38;
  char local_37;
  undefined1 local_36;
  char local_35;
  char local_34;
  undefined1 local_33;
  char local_32;
  char local_31;
  undefined1 local_30;
  long local_28;
  
  lVar4 = tpidr_el0;
  local_28 = *(long *)(lVar4 + 0x28);
  iVar7 = FUN_002f7b68();
  if (iVar7 != 0) goto LAB_002f6ac0;
  if (local_45 == '\0') {
    if (local_48 == '\0') {
      if (local_46 == '\0') {
        iStack_64 = 1;
        iStack_68 = 2000;
        local_60 = 1;
LAB_002f6838:
        if (local_47 == '\0') {
          iVar7 = iStack_64 + 0xc;
          if (2 < iStack_64) {
            iVar7 = iStack_64;
          }
          iStack_68 = iStack_68 - (uint)(iStack_64 < 3);
          iVar3 = (int)(short)iStack_68;
          iVar1 = iVar3 * -0x147b;
          local_70 = (long)(((double)(int)(((iVar1 >> 0x13) - (iVar1 >> 0x1f)) + iVar3 / 400 +
                                           (iVar7 * 0x4ab51 + 0x4ab51) / 10000 + local_60 +
                                           (iStack_68 * 0x8ead + 0xa445afcU) / 100 + 2) + -1524.5) *
                           86400000.0);
          goto LAB_002f6920;
        }
      }
      else if (0xffffc686 < iStack_68 - 10000U) {
        goto LAB_002f6838;
      }
      local_70 = 0;
    }
LAB_002f6920:
    auVar2 = SEXT816(local_70 + 43200000) * SEXT816(0x636ba875fd33dc87);
    dVar10 = (double)((int)(local_70 + 43200000) +
                     ((int)(auVar2._8_8_ >> 0x19) - (auVar2._12_4_ >> 0x1f)) * -86400000) / 1000.0;
    iVar7 = (int)dVar10;
    iStack_5c = iVar7 / 0xe10;
    iStack_58 = (iVar7 % 0xe10) / 0x3c;
    local_50 = (dVar10 - (double)iVar7) + (double)((iVar7 % 0xe10) % 0x3c);
  }
  else {
  }
  local_36 = 0x3a;
  local_33 = 0x3a;
  local_30 = 0;
  lVar9 = (long)(iStack_5c / 10) * 0x66666667;
  lVar8 = (long)(iStack_58 / 10) * 0x66666667;
  iVar7 = (int)local_50 / 10;
  cVar5 = (char)(iStack_5c / 10);
  cVar6 = (char)(iStack_58 / 10);
  local_37 = (char)iStack_5c + cVar5 * -10 + '0';
  local_34 = (char)iStack_58 + cVar6 * -10 + '0';
  local_31 = (char)(int)local_50 + (char)iVar7 * -10 + '0';
  local_35 = cVar6 + ((char)(uint)((ulong)lVar8 >> 0x22) - (char)(lVar8 >> 0x3f)) * -10 + '0';
  local_38 = cVar5 + ((char)(uint)((ulong)lVar9 >> 0x22) - (char)(lVar9 >> 0x3f)) * -10 + '0';
  local_32 = (char)iVar7 +
             ((char)(uint)((ulong)((long)iVar7 * 0x66666667) >> 0x22) - (char)(iVar7 >> 0x1f)) * -10
             + '0';
  FUN_0023d018(param_1,&local_38,8,1,0xffffffffffffffff);
LAB_002f6ac0:
  if (*(long *)(lVar4 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 002f6ae4  FUN_002f6ae4 =====

void FUN_002f6ae4(undefined8 param_1)

{
  undefined1 auVar1 [16];
  int iVar2;
  long lVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  double dVar18;
  ulong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  int iStack_68;
  double local_60;
  undefined8 local_58;
  undefined1 local_50;
  byte local_4f;
  byte local_4e;
  byte local_4d;
  byte local_4c;
  undefined1 local_4b;
  char local_4a;
  char local_49;
  undefined1 local_48;
  char local_47;
  char local_46;
  undefined1 local_45;
  char local_44;
  char local_43;
  undefined1 local_42;
  char local_41;
  char local_40;
  undefined1 local_3f;
  char local_3e;
  char local_3d;
  undefined1 local_3c;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  iVar8 = FUN_002f7b68();
  if (iVar8 != 0) goto LAB_002f7088;
  if (local_58._2_1_ == '\0') {
    puVar10 = (undefined1 *)((long)&local_58 + 2);
    if ((byte)local_58 == '\0') {
      local_70 = CONCAT44(local_70._4_4_,1);
      uStack_78 = DAT_00177f50;
    }
    else if (local_80 < 0x1a6401072fe00) {
      iVar16 = (int)((local_80 + 43200000) / 86400000);
      iVar14 = (int)(((double)iVar16 + DAT_00177f10) / 36524.25);
      iVar8 = iVar14 + 3;
      if (-1 < iVar14) {
        iVar8 = iVar14;
      }
      iVar8 = ((iVar16 + iVar14) - (iVar8 >> 2)) + 0x5f5;
      uVar15 = (uint)(((double)iVar8 + DAT_00178010) / 365.25);
      iVar8 = iVar8 - ((uVar15 & 0x7fff) * 0x8ead) / 100;
      iVar14 = (int)((double)iVar8 / DAT_00177f08);
      iVar16 = -0xd;
      if (iVar14 < 0xe) {
        iVar16 = -1;
      }
      iVar17 = -0x126c;
      if (iVar16 + iVar14 < 3) {
        iVar17 = -0x126b;
      }
      local_70 = CONCAT44(local_70._4_4_,iVar8 - (int)((double)iVar14 * DAT_00177f08));
      uStack_78 = CONCAT44(iVar16 + iVar14,iVar17 + uVar15);
    }
    else {
      puVar10 = (undefined1 *)((long)&local_58 + 6);
      iStack_68 = 0;
      local_70 = 0;
      local_58 = 0;
      local_60 = 0.0;
      uStack_78 = 0;
      local_80 = 0;
    }
    *puVar10 = 1;
    if (local_58._3_1_ != '\0') goto LAB_002f6b28;
LAB_002f6c8c:
    if ((byte)local_58 == '\0') {
      if (local_58._2_1_ == '\0') {
        iVar16 = 1;
        iVar8 = 2000;
        iVar14 = 1;
LAB_002f6cd0:
        if (local_58._1_1_ == '\0') {
          iVar17 = iVar16 + 0xc;
          if (2 < iVar16) {
            iVar17 = iVar16;
          }
          iVar8 = iVar8 - (uint)(iVar16 < 3);
          iVar2 = (int)(short)iVar8;
          iVar16 = iVar2 * -0x147b;
          local_58 = CONCAT71(local_58._1_7_,1);
          local_80 = (ulong)(((double)(int)(((iVar16 >> 0x13) - (iVar16 >> 0x1f)) + iVar2 / 400 +
                                            (iVar17 * 0x4ab51 + 0x4ab51) / 10000 + iVar14 +
                                            (iVar8 * 0x8ead + 0xa445afcU) / 100 + 2) + -1524.5) *
                            86400000.0);
          goto LAB_002f6db8;
        }
      }
      else if (0xffffc686 < (uint)uStack_78 - 10000) {
        iVar8 = (uint)uStack_78;
        iVar16 = uStack_78._4_4_;
        iVar14 = (int)local_70;
        goto LAB_002f6cd0;
      }
      local_80 = 0;
      local_70._0_4_ = 0;
      uStack_78 = 0;
      local_58 = 0x1000000000000;
    }
LAB_002f6db8:
    uVar11 = local_58;
    local_58._0_2_ = (ushort)(byte)local_58;
    uVar7 = local_58;
    auVar1 = SEXT816((long)(local_80 + 43200000)) * SEXT816(0x636ba875fd33dc87);
    dVar18 = (double)((int)(local_80 + 43200000) +
                     ((int)(auVar1._8_8_ >> 0x19) - (auVar1._12_4_ >> 0x1f)) * -86400000) / 1000.0;
    iVar16 = (int)dVar18;
    iVar8 = iVar16 / 0xe10;
    iStack_68 = (iVar16 % 0xe10) / 0x3c;
    local_70 = CONCAT44(iVar8,(int)local_70);
    local_58._4_4_ = SUB84(uVar11,4);
    local_58._0_4_ = CONCAT13(1,(int3)uVar7);
    local_60 = (dVar18 - (double)iVar16) + (double)((iVar16 % 0xe10) % 0x3c);
  }
  else {
    if (local_58._3_1_ == '\0') goto LAB_002f6c8c;
LAB_002f6b28:
    iVar8 = local_70._4_4_;
  }
  uVar15 = -(uint)uStack_78;
  if (-1 < (int)(uint)uStack_78) {
    uVar15 = (uint)uStack_78;
  }
  local_3c = 0;
  cVar4 = (char)(uVar15 / 10);
  lVar12 = (long)(uStack_78._4_4_ / 10) * 0x66666667;
  lVar13 = (long)((int)local_70 / 10) * 0x66666667;
  local_4e = (char)(uVar15 / 100) + (char)(((ulong)uVar15 / 100) * 0x1999999a >> 0x20) * -10 | 0x30;
  cVar5 = (char)((int)local_70 / 10);
  cVar6 = (char)(uStack_78._4_4_ / 10);
  local_4c = (char)uVar15 + cVar4 * -10 | 0x30;
  local_4f = (char)(uVar15 / 1000) + (char)(((ulong)uVar15 / 1000) * 0x1999999a >> 0x20) * -10 |
             0x30;
  local_4d = cVar4 + (char)(((ulong)uVar15 / 10) * 0x1999999a >> 0x20) * -10 | 0x30;
  lVar9 = (long)(iVar8 / 10) * 0x66666667;
  local_4a = cVar6 + ((char)(uint)((ulong)lVar12 >> 0x22) - (char)(lVar12 >> 0x3f)) * -10 + '0';
  local_46 = (char)local_70 + cVar5 * -10 + '0';
  local_49 = (char)((ulong)uStack_78 >> 0x20) + cVar6 * -10 + '0';
  local_47 = cVar5 + ((char)(uint)((ulong)lVar13 >> 0x22) - (char)(lVar13 >> 0x3f)) * -10 + '0';
  cVar4 = (char)(iVar8 / 10);
  lVar12 = (long)(iStack_68 / 10) * 0x66666667;
  local_45 = 0x20;
  cVar5 = (char)(iStack_68 / 10);
  local_44 = cVar4 + ((char)(uint)((ulong)lVar9 >> 0x22) - (char)(lVar9 >> 0x3f)) * -10 + '0';
  iVar16 = (int)local_60 / 10;
  lVar9 = (long)iVar16 * 0x66666667;
  local_40 = (char)iStack_68 + cVar5 * -10 + '0';
  cVar6 = (char)iVar16;
  local_43 = (char)iVar8 + cVar4 * -10 + '0';
  local_41 = cVar5 + ((char)(uint)((ulong)lVar12 >> 0x22) - (char)(lVar12 >> 0x3f)) * -10 + '0';
  local_4b = 0x2d;
  local_48 = 0x2d;
  local_42 = 0x3a;
  local_3e = cVar6 + ((char)(uint)((ulong)lVar9 >> 0x22) - (char)(lVar9 >> 0x3f)) * -10 + '0';
  local_3d = (char)(int)local_60 + cVar6 * -10 + '0';
  local_3f = 0x3a;
  if ((int)(uint)uStack_78 < 0) {
    local_50 = 0x2d;
    puVar10 = &local_50;
    uVar11 = 0x14;
  }
  else {
    uVar11 = 0x13;
    puVar10 = (undefined1 *)((ulong)&local_50 | 1);
  }
  FUN_0023d018(param_1,puVar10,uVar11,1,0xffffffffffffffff);
LAB_002f7088:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 002f70b0  FUN_002f70b0 =====

void FUN_002f70b0(long *param_1,int param_2,long *param_3)

{
  undefined1 auVar1 [16];
  int iVar2;
  long lVar3;
  double dVar4;
  undefined8 uVar5;
  char cVar6;
  char cVar7;
  undefined8 uVar8;
  int iVar9;
  long lVar10;
  char *pcVar11;
  char cVar12;
  ulong uVar13;
  undefined1 *puVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  double dVar22;
  undefined8 local_d0;
  long local_c8;
  uint local_c0;
  undefined4 local_bc;
  uint local_b8;
  undefined2 local_b4;
  ulong local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  double local_90;
  undefined1 local_88 [2];
  char local_86;
  char cStack_85;
  char local_84;
  undefined3 uStack_83;
  undefined1 local_82 [10];
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  if ((param_2 == 0) || (lVar10 = *param_3, lVar10 == 0)) goto LAB_002f7ae8;
  if ((((*(ushort *)(lVar10 + 0x14) ^ 0xffff) & 0x202) == 0) && (*(char *)(lVar10 + 0x16) == '\x01')
     ) {
    lVar10 = *(long *)(lVar10 + 8);
  }
  else {
    if ((*(ushort *)(lVar10 + 0x14) & 1) != 0) goto LAB_002f7ae8;
    lVar10 = FUN_0022ae18(lVar10,1);
  }
  if ((lVar10 == 0) ||
     (iVar9 = FUN_002f7b68(param_1,param_2 + -1,param_3 + 1,&local_b0), uVar5 = _local_88,
     dVar4 = DAT_00177ec8, iVar9 != 0)) goto LAB_002f7ae8;
  cVar6 = local_86;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b4 = 0;
  local_bc = *(undefined4 *)(*(long *)(*param_1 + 0x18) + 0x88);
  local_b8 = 0;
  uVar8 = _local_88;
  cVar12 = local_88[0];
  if (local_88[0] != '\0') goto LAB_002f717c;
  if (local_86 == '\0') {
    iVar15 = 1;
    iVar9 = 2000;
    iVar16 = 1;
LAB_002f72e4:
    if (local_88[1] != '\0') goto LAB_002f72ec;
    iVar18 = iVar15 + 0xc;
    if (2 < iVar15) {
      iVar18 = iVar15;
    }
    iVar9 = iVar9 - (uint)(iVar15 < 3);
    iVar2 = (int)(short)iVar9;
    iVar15 = iVar2 * -0x147b;
    cVar7 = cStack_85;
    cVar12 = '\x01';
    _local_88 = CONCAT71(stack0xffffffffffffff79,1);
    uVar8 = _local_88;
    local_b0 = (ulong)(((double)(int)(((iVar15 >> 0x13) - (iVar15 >> 0x1f)) + iVar2 / 400 +
                                      (iVar18 * 0x4ab51 + 0x4ab51) / 10000 + iVar16 +
                                      (iVar9 * 0x8ead + 0xa445afcU) / 100 + 2) + -1524.5) *
                      86400000.0);
    if (cVar7 != '\0') {
      dVar22 = (double)NEON_fmadd(local_90,0x408f400000000000,0x3fe0000000000000);
      local_84 = SUB81(uVar5,4);
      local_b0 = (long)dVar22 + (long)local_a0._4_4_ * 3600000 + (long)uStack_98._4_4_ * 60000 +
                 local_b0;
      if (local_84 == '\0') {
        cVar12 = '\x01';
        goto LAB_002f717c;
      }
      local_88 = SUB82(uVar8,0);
      uStack_83 = SUB83(uVar5,5);
      _local_88 = (uint5)(ushort)local_88;
      local_b0 = local_b0 + (long)uStack_98._4_4_ * -60000;
      cVar12 = '\x01';
LAB_002f718c:
      puVar14 = local_88 + 2;
      if (local_b0 < 0x1a6401072fe00) {
        iVar15 = (int)((local_b0 + 43200000) / 86400000);
        iVar16 = (int)(((double)iVar15 + DAT_00177f10) / 36524.25);
        iVar9 = iVar16 + 3;
        if (-1 < iVar16) {
          iVar9 = iVar16;
        }
        iVar9 = ((iVar15 + iVar16) - (iVar9 >> 2)) + 0x5f5;
        uVar17 = (uint)(((double)iVar9 + DAT_00178010) / 365.25);
        iVar9 = iVar9 - ((uVar17 & 0x7fff) * 0x8ead) / 100;
        iVar16 = (int)((double)iVar9 / DAT_00177f08);
        iVar15 = -0xd;
        if (iVar16 < 0xe) {
          iVar15 = -1;
        }
        iVar18 = -0x126c;
        if (iVar15 + iVar16 < 3) {
          iVar18 = -0x126b;
        }
        local_a0 = CONCAT44(local_a0._4_4_,iVar9 - (int)((double)iVar16 * DAT_00177f08));
        uStack_a8 = CONCAT44(iVar15 + iVar16,iVar18 + uVar17);
      }
      else {
        cVar12 = '\0';
        puVar14 = local_88 + 6;
        uStack_98 = 0;
        local_a0 = 0;
        _local_88 = 0;
        local_90 = 0.0;
        uStack_a8 = 0;
        local_b0 = 0;
      }
      goto LAB_002f731c;
    }
LAB_002f717c:
    _local_88 = uVar8;
    if (cVar6 == '\0') goto LAB_002f718c;
  }
  else {
    if (0xffffc686 < (int)uStack_a8 - 10000U) {
      iVar9 = (int)uStack_a8;
      iVar15 = uStack_a8._4_4_;
      iVar16 = (int)local_a0;
      goto LAB_002f72e4;
    }
LAB_002f72ec:
    cVar12 = '\0';
    puVar14 = local_88 + 2;
    uStack_98 = 0;
    local_90 = 0.0;
    local_b0 = 0;
    _local_88 = 0x1000000000000;
    uStack_a8 = DAT_00177f50;
    local_a0 = 1;
LAB_002f731c:
    *puVar14 = 1;
  }
  if (cStack_85 == '\0') {
    if (cVar12 == '\0') {
      if (local_86 == '\0') {
        iVar15 = 1;
        iVar9 = 2000;
        iVar16 = 1;
LAB_002f74bc:
        if (local_88[1] == '\0') {
          iVar18 = iVar15 + 0xc;
          if (2 < iVar15) {
            iVar18 = iVar15;
          }
          iVar9 = iVar9 - (uint)(iVar15 < 3);
          iVar2 = (int)(short)iVar9;
          iVar15 = iVar2 * -0x147b;
          _local_88 = CONCAT71(stack0xffffffffffffff79,1);
          local_b0 = (ulong)(((double)(int)(((iVar15 >> 0x13) - (iVar15 >> 0x1f)) + iVar2 / 400 +
                                            (iVar18 * 0x4ab51 + 0x4ab51) / 10000 + iVar16 +
                                            (iVar9 * 0x8ead + 0xa445afcU) / 100 + 2) + -1524.5) *
                            86400000.0);
          goto LAB_002f75a4;
        }
      }
      else if (0xffffc686 < (int)uStack_a8 - 10000U) {
        iVar9 = (int)uStack_a8;
        iVar15 = uStack_a8._4_4_;
        iVar16 = (int)local_a0;
        goto LAB_002f74bc;
      }
      uStack_98 = 0;
      local_a0 = 0;
      uStack_a8 = 0;
      local_b0 = 0;
      _local_88 = 0x1000000000000;
    }
LAB_002f75a4:
    uVar5 = _local_88;
    local_88 = (undefined1  [2])CONCAT11(0,local_88[0]);
    uVar8 = _local_88;
    auVar1 = SEXT816((long)(local_b0 + 43200000)) * SEXT816(0x636ba875fd33dc87);
    dVar22 = (double)((int)(local_b0 + 43200000) +
                     ((int)(auVar1._8_8_ >> 0x19) - (auVar1._12_4_ >> 0x1f)) * -86400000) / 1000.0;
    iVar9 = (int)dVar22;
    local_a0 = CONCAT44(iVar9 / 0xe10,(int)local_a0);
    uStack_98 = CONCAT44(uStack_98._4_4_,(iVar9 % 0xe10) / 0x3c);
    _local_84 = SUB84(uVar5,4);
    _local_88 = CONCAT13(1,(int3)uVar8);
    local_90 = (dVar22 - (double)iVar9) + (double)((iVar9 % 0xe10) % 0x3c);
  }
  uVar20 = 0;
  uVar21 = 0;
LAB_002f7690:
  for (; *(char *)(lVar10 + uVar21) != '%'; uVar21 = uVar21 + 1) {
    if (*(char *)(lVar10 + uVar21) == '\0') {
      if (uVar20 <= uVar21 && uVar21 - uVar20 != 0) {
        uVar13 = (ulong)local_b8;
        iVar9 = (int)(uVar21 - uVar20);
        if (local_b8 + iVar9 < local_c0) {
          if (iVar9 != 0) {
            local_b8 = local_b8 + iVar9;
            memcpy((void *)(local_c8 + uVar13),(void *)(lVar10 + uVar20),(long)iVar9);
          }
        }
        else {
          FUN_0022acc8(&local_d0,lVar10 + uVar20);
        }
      }
      FUN_0023d0e4(param_1,&local_d0);
      goto LAB_002f7ae8;
    }
  }
  if (uVar20 <= uVar21 && uVar21 - uVar20 != 0) {
    uVar13 = (ulong)local_b8;
    iVar9 = (int)(uVar21 - uVar20);
    if (local_b8 + iVar9 < local_c0) {
      if (iVar9 != 0) {
        local_b8 = local_b8 + iVar9;
        memcpy((void *)(local_c8 + uVar13),(void *)(lVar10 + uVar20),(long)iVar9);
      }
    }
    else {
      FUN_0022acc8(&local_d0,lVar10 + uVar20);
    }
  }
  uVar13 = local_b0;
  uVar17 = (uint)*(byte *)(lVar10 + uVar21 + 1);
  if (uVar17 - 0x25 < 0x53) {
    uVar20 = uVar21 + 2;
    switch(uVar17) {
    case 0x25:
      if ((ulong)local_b8 + 1 < (ulong)local_c0) {
        iVar9 = 1;
      }
      else {
        iVar9 = FUN_0022b13c(&local_d0,1);
        if (iVar9 < 1) goto LAB_002f7a8c;
      }
      uVar17 = iVar9 + 1;
      do {
        uVar13 = (ulong)local_b8;
        uVar17 = uVar17 - 1;
        local_b8 = local_b8 + 1;
        *(undefined1 *)(local_c8 + uVar13) = 0x25;
      } while (1 < uVar17);
      goto LAB_002f7a8c;
    default:
      goto switchD_002f7718_caseD_26;
    case 0x48:
      iVar9 = local_a0._4_4_;
      break;
    case 0x4a:
      pcVar11 = "%.16g";
      dVar22 = (double)(long)local_b0 / 86400000.0;
      goto LAB_002f78c8;
    case 0x4d:
      iVar9 = (int)uStack_98;
      break;
    case 0x53:
      iVar9 = (int)local_90;
      break;
    case 0x57:
    case 0x6a:
      if (local_86 == '\0') {
        iVar9 = 2000;
        if (local_88[1] == '\0') goto LAB_002f791c;
LAB_002f775c:
        lVar19 = 0;
      }
      else {
        if (((int)uStack_a8 - 10000U < 0xffffc687) || (iVar9 = (int)uStack_a8, local_88[1] != '\0'))
        goto LAB_002f775c;
LAB_002f791c:
        iVar16 = (int)(short)(iVar9 + -1);
        iVar15 = iVar16 * -0x147b;
        lVar19 = (long)(((double)(int)(((iVar15 >> 0x13) - (iVar15 >> 0x1f)) +
                                       ((iVar9 + -1) * 0x8ead + 0xa445afcU) / 100 + iVar16 / 400 +
                                      0x1af) + -1524.5) * 86400000.0);
        if (cStack_85 != '\0') {
          dVar22 = (double)NEON_fmadd(local_90,0x408f400000000000,0x3fe0000000000000);
          lVar19 = (long)dVar22 + (long)local_a0._4_4_ * 3600000 + (long)uStack_98._4_4_ * 60000 +
                   lVar19;
          if (local_84 != '\0') {
            lVar19 = lVar19 + (long)uStack_98._4_4_ * -60000;
          }
        }
      }
      auVar1 = SEXT816((long)((local_b0 + 43200000) - lVar19)) * SEXT816(0x636ba875fd33dc87);
      iVar9 = (int)(auVar1._8_8_ >> 0x19) - (auVar1._12_4_ >> 0x1f);
      if (uVar17 != 0x57) {
        sqlite3_str_appendf(&local_d0,&DAT_0016db0f,iVar9 + 1);
        uVar21 = uVar21 + 2;
        goto LAB_002f7690;
      }
      lVar19 = (long)(local_b0 + 43200000) / 86400000;
      auVar1 = SEXT816(lVar19) * SEXT816(0x4924924924924925);
      iVar9 = (iVar9 + (((int)(auVar1._8_8_ >> 1) - (auVar1._12_4_ >> 0x1f)) * 7 - (int)lVar19) + 7)
              / 7;
      break;
    case 0x59:
      sqlite3_str_appendf(&local_d0,&DAT_00176331,uStack_a8 & 0xffffffff);
      uVar21 = uVar21 + 2;
      goto LAB_002f7690;
    case 100:
      iVar9 = (int)local_a0;
      break;
    case 0x66:
      pcVar11 = "%06.3f";
      dVar22 = dVar4;
      if (local_90 == dVar4 || local_90 < dVar4 != (NAN(local_90) || NAN(dVar4))) {
        dVar22 = local_90;
      }
LAB_002f78c8:
      sqlite3_str_appendf(dVar22,&local_d0,pcVar11);
      goto LAB_002f7a8c;
    case 0x6d:
      iVar9 = uStack_a8._4_4_;
      break;
    case 0x73:
      goto switchD_002f7718_caseD_73;
    case 0x77:
      if ((ulong)local_b8 + 1 < (ulong)local_c0) {
        iVar9 = 1;
      }
      else {
        iVar9 = FUN_0022b13c(&local_d0,1);
        if (iVar9 < 1) goto LAB_002f7a8c;
      }
      lVar19 = (long)(uVar13 + 0x7b98a00) / 86400000;
      auVar1 = SEXT816(lVar19) * SEXT816(0x4924924924924925);
      uVar17 = iVar9 + 1;
      do {
        uVar13 = (ulong)local_b8;
        uVar17 = uVar17 - 1;
        local_b8 = local_b8 + 1;
        *(char *)(local_c8 + uVar13) =
             (char)lVar19 + ((char)(auVar1._8_8_ >> 1) - (auVar1[0xf] >> 7)) * -7 + '0';
      } while (1 < uVar17);
LAB_002f7a8c:
      uVar21 = uVar21 + 2;
      goto LAB_002f7690;
    }
    sqlite3_str_appendf(&local_d0,&DAT_001751b7,iVar9);
    uVar21 = uVar21 + 2;
    goto LAB_002f7690;
  }
switchD_002f7718_caseD_26:
  if (((local_b4._1_1_ >> 2 & 1) != 0) && (local_c8 != 0)) {
    FUN_0022a888(local_d0);
  }
LAB_002f7ae8:
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
switchD_002f7718_caseD_73:
  sqlite3_str_appendf(&local_d0,&DAT_0016e7ab,(long)local_b0 / 1000 + -0x3118a36940);
  uVar21 = uVar21 + 2;
  goto LAB_002f7690;
}


// ===== 002f7b44  FUN_002f7b44 =====

void FUN_002f7b44(undefined8 param_1)

{
  FUN_002f67b4(param_1,0,0);
  return;
}


// ===== 002f7b50  FUN_002f7b50 =====

void FUN_002f7b50(undefined8 param_1)

{
  FUN_002f6ae4(param_1,0,0);
  return;
}


// ===== 002f7b5c  FUN_002f7b5c =====

void FUN_002f7b5c(undefined8 param_1)

{
  FUN_002f6494(param_1,0,0);
  return;
}


// ===== 002f7b68  FUN_002f7b68 =====

/* WARNING: Removing unreachable block (ram,0x002f87bc) */

void FUN_002f7b68(long *param_1,uint param_2,long *param_3,double *param_4)

{
  char *pcVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  undefined1 auVar6 [16];
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  bool bVar16;
  int iVar17;
  double *pdVar18;
  size_t sVar19;
  int *piVar20;
  int iVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  ushort uVar25;
  int iVar26;
  int iVar27;
  char *pcVar28;
  byte *pbVar29;
  int iVar30;
  char cVar31;
  ulong uVar32;
  char *pcVar33;
  byte *pbVar34;
  byte *pbVar35;
  uint uVar36;
  ulong uVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  undefined8 uVar41;
  undefined4 local_f8;
  undefined4 local_f4;
  double local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  double local_b8;
  long local_b0;
  
  lVar7 = tpidr_el0;
  local_b0 = *(long *)(lVar7 + 0x28);
  param_4[3] = 0.0;
  param_4[2] = 0.0;
  param_4[5] = 0.0;
  param_4[4] = 0.0;
  param_4[1] = 0.0;
  *param_4 = 0.0;
  if (param_2 == 0) {
    iVar17 = FUN_002f9778(param_1);
    if (iVar17 != 0) {
      pdVar18 = (double *)(param_1[3] + 0x48);
      dVar38 = *pdVar18;
      if (dVar38 == 0.0) {
        piVar20 = (int *)**(undefined8 **)(*param_1 + 0x18);
        if ((*piVar20 < 2) || (*(code **)(piVar20 + 0x22) == (code *)0x0)) {
          iVar17 = (**(code **)(piVar20 + 0x1e))(piVar20,&local_f0);
          *pdVar18 = (double)(long)(local_f0 * 86400000.0);
        }
        else {
          iVar17 = (**(code **)(piVar20 + 0x22))(piVar20,pdVar18);
        }
        if (iVar17 != 0) {
          *pdVar18 = 0.0;
          bVar16 = true;
          *param_4 = 0.0;
          goto LAB_002f950c;
        }
        dVar38 = *pdVar18;
      }
      bVar16 = true;
      *param_4 = dVar38;
      if (0 < (long)dVar38) {
        *(undefined1 *)(param_4 + 5) = 1;
        bVar16 = false;
      }
      goto LAB_002f950c;
    }
  }
  else {
    pdVar18 = (double *)*param_3;
    uVar25 = *(ushort *)((long)pdVar18 + 0x14);
    if ((byte)(&DAT_0017d33a)[(ulong)uVar25 & 0x3f] - 1 < 2) {
      if ((uVar25 >> 3 & 1) == 0) {
        if ((uVar25 & 0x24) == 0) {
          if ((uVar25 & 0x12) == 0) {
            dVar38 = 0.0;
          }
          else {
            dVar38 = (double)FUN_0022adb8();
          }
        }
        else {
          dVar38 = (double)(long)*pdVar18;
        }
      }
      else {
        dVar38 = *pdVar18;
      }
      param_4[4] = dVar38;
      *(undefined1 *)((long)param_4 + 0x29) = 1;
      dVar8 = DAT_00177ef0;
      dVar9 = DAT_00177f08;
      dVar10 = DAT_00177f10;
      dVar11 = DAT_00177f50;
      uVar12 = DAT_00177f58;
      dVar13 = DAT_00177f60;
      dVar14 = DAT_00177f70;
      dVar15 = DAT_00178010;
      if ((dVar38 < 0.0 == NAN(dVar38)) && (dVar38 < DAT_00178000)) {
        *(undefined1 *)(param_4 + 5) = 1;
        dVar38 = (double)NEON_fmadd(dVar38,0x4194997000000000,0x3fe0000000000000);
        *param_4 = (double)(long)dVar38;
        dVar8 = DAT_00177ef0;
        dVar9 = DAT_00177f08;
        dVar10 = DAT_00177f10;
        dVar11 = DAT_00177f50;
        uVar12 = DAT_00177f58;
        dVar13 = DAT_00177f60;
        dVar14 = DAT_00177f70;
        dVar15 = DAT_00178010;
      }
      goto joined_r0x002f94f0;
    }
    if ((((uVar25 ^ 0xffff) & 0x202) == 0) && (*(char *)((long)pdVar18 + 0x16) == '\x01')) {
      pcVar33 = (char *)pdVar18[1];
    }
    else {
      if ((uVar25 & 1) != 0) goto LAB_002f9508;
      pcVar33 = (char *)FUN_0022ae18(pdVar18,1);
    }
    if (pcVar33 != (char *)0x0) {
      cVar31 = *pcVar33;
      pcVar1 = pcVar33;
      if (cVar31 == '-') {
        pcVar1 = pcVar33 + 1;
      }
      iVar17 = FUN_002f98b8(pcVar1,"40f-21a-21d",&local_f0,&local_f4,&local_f8);
      if (iVar17 == 3) {
        pbVar34 = (byte *)(pcVar33 + (ulong)(cVar31 == '-') + 9);
        do {
          do {
            pbVar34 = pbVar34 + 1;
          } while ((ulong)*pbVar34 == 0x54);
        } while (((&DAT_0017d382)[*pbVar34] & 1) != 0);
        iVar17 = FUN_002f9a14(pbVar34,param_4);
        if (iVar17 != 0) {
          if (*pbVar34 != 0) goto LAB_002f7cec;
          *(undefined1 *)((long)param_4 + 0x2b) = 0;
        }
        *(undefined1 *)((long)param_4 + 0x2a) = 1;
        iVar17 = -local_f0._0_4_;
        if (cVar31 != '-') {
          iVar17 = local_f0._0_4_;
        }
        *(undefined1 *)(param_4 + 5) = 0;
        *(int *)(param_4 + 1) = iVar17;
        *(undefined4 *)((long)param_4 + 0xc) = local_f4;
        *(undefined4 *)(param_4 + 2) = local_f8;
        dVar8 = DAT_00177ef0;
        dVar9 = DAT_00177f08;
        dVar10 = DAT_00177f10;
        dVar11 = DAT_00177f50;
        uVar12 = DAT_00177f58;
        dVar13 = DAT_00177f60;
        dVar14 = DAT_00177f70;
        dVar15 = DAT_00178010;
        if (*(char *)((long)param_4 + 0x2c) != '\0') {
          FUN_002f95e0(param_4);
          dVar8 = DAT_00177ef0;
          dVar9 = DAT_00177f08;
          dVar10 = DAT_00177f10;
          dVar11 = DAT_00177f50;
          uVar12 = DAT_00177f58;
          dVar13 = DAT_00177f60;
          dVar14 = DAT_00177f70;
          dVar15 = DAT_00178010;
        }
      }
      else {
LAB_002f7cec:
        iVar17 = FUN_002f9a14(pcVar33,param_4);
        dVar8 = DAT_00177ef0;
        dVar9 = DAT_00177f08;
        dVar10 = DAT_00177f10;
        dVar11 = DAT_00177f50;
        uVar12 = DAT_00177f58;
        dVar13 = DAT_00177f60;
        dVar14 = DAT_00177f70;
        dVar15 = DAT_00178010;
        if (iVar17 != 0) {
          lVar22 = 0;
          do {
            bVar3 = pcVar33[lVar22];
            if (bVar3 == (&DAT_001713f0)[lVar22]) {
              if (bVar3 == 0) goto code_r0x002f7d44;
            }
            else if ((&DAT_0017d228)[bVar3] != (&DAT_0017d228)[(byte)(&DAT_001713f0)[lVar22]])
            goto LAB_002f9428;
            lVar22 = lVar22 + 1;
          } while( true );
        }
      }
      goto joined_r0x002f94f0;
    }
  }
  goto LAB_002f9508;
code_r0x002f84a8:
  iVar17 = FUN_002f9778(param_1);
  if ((iVar17 == 0) || (iVar17 = FUN_002f9c08(param_4,param_1), iVar17 != 0)) goto LAB_002f9508;
  goto LAB_002f7f80;
code_r0x002f9270:
  pbVar35 = &DAT_001758fb;
  pbVar29 = pbVar34;
  do {
    uVar36 = (uint)*pbVar29;
    if (uVar36 == *pbVar35) {
      if (uVar36 == 0) {
        *(undefined8 *)((long)param_4 + 0xc) = 0x100000001;
        goto LAB_002f7f80;
      }
    }
    else if ((&DAT_0017d228)[uVar36] != (&DAT_0017d228)[(uint)*pbVar35]) break;
    pbVar29 = pbVar29 + 1;
    pbVar35 = pbVar35 + 1;
  } while( true );
  pbVar35 = &DAT_001771b1;
  do {
    bVar3 = *pbVar34;
    if (bVar3 == *pbVar35) {
      if (bVar3 == 0) goto LAB_002f7f80;
    }
    else if ((&DAT_0017d228)[bVar3] != (&DAT_0017d228)[*pbVar35]) goto LAB_002f9508;
    pbVar34 = pbVar34 + 1;
    pbVar35 = pbVar35 + 1;
  } while( true );
code_r0x002f850c:
  if (*(char *)((long)param_4 + 0x29) == '\0') {
LAB_002f8570:
    pbVar35 = &DAT_001734bf;
    pbVar34 = pbVar34 + 1;
    do {
      if ((uint)uVar32 == (uint)*pbVar35) {
        if ((uint)uVar32 == 0) goto code_r0x002f85a4;
      }
      else if ((&DAT_0017d228)[uVar32] != (&DAT_0017d228)[*pbVar35]) goto LAB_002f9508;
      uVar32 = (ulong)*pbVar34;
      pbVar35 = pbVar35 + 1;
      pbVar34 = pbVar34 + 1;
    } while( true );
  }
  if (((1 < uVar37) ||
      (dVar38 = (double)NEON_fmadd(param_4[4],0x408f400000000000,uVar12),
      dVar38 < 0.0 != NAN(dVar38))) || (dVar8 <= dVar38)) goto LAB_002f9508;
LAB_002f8938:
  *(undefined1 *)((long)param_4 + 0x2c) = 0;
  *param_4 = (double)(long)(dVar38 + 0.5);
  *(undefined4 *)(param_4 + 5) = 1;
  goto LAB_002f7f80;
code_r0x002f85a4:
  iVar17 = FUN_002f9778(param_1);
  if (iVar17 == 0) goto LAB_002f9508;
  if (*(char *)((long)param_4 + 0x2d) == '\0') {
    FUN_002f95e0(param_4);
    dVar38 = *param_4;
    local_d0 = 0;
    uStack_d8 = 0;
    local_e0 = 0;
    uStack_e8 = 0;
    local_c8 = 1;
    local_f0 = dVar38;
    iVar17 = FUN_002f9c08(&local_f0,param_1);
    if (iVar17 != 0) goto LAB_002f9508;
    FUN_002f95e0(&local_f0);
    iVar17 = SUB84(dVar38,0);
    iVar21 = SUB84(local_f0,0) - iVar17;
    if (iVar21 != 0) {
      dVar38 = (double)((long)dVar38 - (long)iVar21);
      local_d0 = 0;
      uStack_d8 = 0;
      local_e0 = 0;
      uStack_e8 = 0;
      local_c8 = 1;
      local_f0 = dVar38;
      iVar21 = FUN_002f9c08(&local_f0,param_1);
      if (iVar21 != 0) goto LAB_002f9508;
      FUN_002f95e0(&local_f0);
      iVar21 = SUB84(local_f0,0) - iVar17;
      if (iVar21 != 0) {
        dVar38 = (double)((long)dVar38 - (long)iVar21);
        local_d0 = 0;
        uStack_d8 = 0;
        local_e0 = 0;
        uStack_e8 = 0;
        local_c8 = 1;
        local_f0 = dVar38;
        iVar21 = FUN_002f9c08(&local_f0,param_1);
        if (iVar21 != 0) goto LAB_002f9508;
        FUN_002f95e0(&local_f0);
        iVar17 = SUB84(local_f0,0) - iVar17;
        if (iVar17 != 0) {
          dVar38 = (double)((long)dVar38 - (long)iVar17);
          local_d0 = 0;
          uStack_d8 = 0;
          local_e0 = 0;
          uStack_e8 = 0;
          local_c8 = 1;
          local_f0 = dVar38;
          iVar17 = FUN_002f9c08(&local_f0,param_1);
          if (iVar17 != 0) goto LAB_002f9508;
          FUN_002f95e0(&local_f0);
        }
      }
    }
    param_4[5] = 0.0;
    *param_4 = dVar38;
    *(undefined1 *)(param_4 + 5) = 1;
    *(undefined1 *)((long)param_4 + 0x2d) = 1;
    param_4[4] = 0.0;
    param_4[3] = 0.0;
    param_4[2] = 0.0;
    param_4[1] = 0.0;
  }
LAB_002f7f80:
  uVar37 = uVar37 + 1;
  if (uVar37 == param_2) goto LAB_002f94f4;
  goto LAB_002f7f90;
code_r0x002f8450:
  if (1 < uVar37) goto LAB_002f9508;
  if ((*(char *)((long)param_4 + 0x29) != '\0') && (*(char *)(param_4 + 5) == '\0')) {
    dVar38 = param_4[4];
    if ((dVar38 < dVar14 != (NAN(dVar38) || NAN(dVar14))) || (dVar13 < dVar38)) goto LAB_002f9508;
    dVar38 = (double)NEON_fmadd(dVar38,0x408f400000000000,uVar12);
    goto LAB_002f8938;
  }
LAB_002f8468:
  *(undefined1 *)((long)param_4 + 0x29) = 0;
  goto LAB_002f7f80;
code_r0x002f82f0:
  if (((1 < uVar37) || (*(char *)(param_4 + 5) == '\0')) ||
     (*(char *)((long)param_4 + 0x29) == '\0')) goto LAB_002f9508;
  goto LAB_002f8468;
code_r0x002f7d44:
  iVar17 = FUN_002f9778(param_1);
  if (iVar17 == 0) {
LAB_002f9428:
    sVar19 = strlen(pcVar33);
    iVar17 = FUN_0022c3dc(pcVar33,&local_b8,(uint)sVar19 & 0x3fffffff,1);
    if (0 < iVar17) {
      *(undefined1 *)((long)param_4 + 0x29) = 1;
      param_4[4] = local_b8;
      dVar8 = DAT_00177ef0;
      dVar9 = DAT_00177f08;
      dVar10 = DAT_00177f10;
      dVar11 = DAT_00177f50;
      uVar12 = DAT_00177f58;
      dVar13 = DAT_00177f60;
      dVar14 = DAT_00177f70;
      dVar15 = DAT_00178010;
      if ((local_b8 < 0.0 == NAN(local_b8)) && (local_b8 < DAT_00178000)) {
        *(undefined1 *)(param_4 + 5) = 1;
        dVar38 = (double)NEON_fmadd(local_b8,0x4194997000000000,0x3fe0000000000000);
        *param_4 = (double)(long)dVar38;
        dVar8 = DAT_00177ef0;
        dVar9 = DAT_00177f08;
        dVar10 = DAT_00177f10;
        dVar11 = DAT_00177f50;
        uVar12 = DAT_00177f58;
        dVar13 = DAT_00177f60;
        dVar14 = DAT_00177f70;
        dVar15 = DAT_00178010;
      }
      goto joined_r0x002f94f0;
    }
  }
  else {
    pdVar18 = (double *)(param_1[3] + 0x48);
    dVar38 = *pdVar18;
    if (dVar38 == 0.0) {
      piVar20 = (int *)**(undefined8 **)(*param_1 + 0x18);
      if ((*piVar20 < 2) || (*(code **)(piVar20 + 0x22) == (code *)0x0)) {
        iVar17 = (**(code **)(piVar20 + 0x1e))(piVar20,&local_f0);
        *pdVar18 = (double)(long)(local_f0 * 86400000.0);
      }
      else {
        iVar17 = (**(code **)(piVar20 + 0x22))(piVar20,pdVar18);
      }
      if (iVar17 != 0) {
        *pdVar18 = 0.0;
        *param_4 = 0.0;
        goto LAB_002f9508;
      }
      dVar38 = *pdVar18;
    }
    *param_4 = dVar38;
    if (0 < (long)dVar38) {
      *(undefined1 *)(param_4 + 5) = 1;
      dVar8 = DAT_00177ef0;
      dVar9 = DAT_00177f08;
      dVar10 = DAT_00177f10;
      dVar11 = DAT_00177f50;
      uVar12 = DAT_00177f58;
      dVar13 = DAT_00177f60;
      dVar14 = DAT_00177f70;
      dVar15 = DAT_00178010;
joined_r0x002f94f0:
      DAT_00177ef0 = dVar8;
      DAT_00177f08 = dVar9;
      DAT_00177f10 = dVar10;
      DAT_00177f50 = dVar11;
      DAT_00177f58 = uVar12;
      DAT_00177f60 = dVar13;
      DAT_00177f70 = dVar14;
      DAT_00178010 = dVar15;
      if (1 < (int)param_2) {
        pcVar33 = (char *)((long)param_4 + 0x2a);
        pcVar1 = (char *)((long)param_4 + 0x2e);
        uVar37 = 1;
LAB_002f7f90:
        lVar22 = param_3[uVar37];
        uVar25 = *(ushort *)(lVar22 + 0x14);
        if ((((uVar25 ^ 0xffff) & 0x202) == 0) && (*(char *)(lVar22 + 0x16) == '\x01')) {
          pbVar34 = *(byte **)(lVar22 + 8);
joined_r0x002f81a8:
          if ((uVar25 >> 1 & 1) == 0) goto joined_r0x002f7ff0;
LAB_002f7fdc:
          if (*(char *)(lVar22 + 0x16) != '\x01') goto joined_r0x002f7ff0;
        }
        else {
          if ((uVar25 & 1) != 0) {
            pbVar34 = (byte *)0x0;
            goto joined_r0x002f81a8;
          }
          pbVar34 = (byte *)FUN_0022ae18(lVar22,1);
          lVar22 = param_3[uVar37];
          uVar25 = *(ushort *)(lVar22 + 0x14);
          if ((uVar25 >> 1 & 1) != 0) goto LAB_002f7fdc;
joined_r0x002f7ff0:
          if ((uVar25 & 0x11) == 0) {
            FUN_0023c158(lVar22,1);
          }
        }
        if (pbVar34 == (byte *)0x0) goto LAB_002f9508;
        bVar3 = *pbVar34;
        uVar32 = (ulong)bVar3;
        bVar4 = (&DAT_0017d228)[uVar32];
        uVar36 = (uint)bVar4;
        if (bVar4 < 0x6c) {
          uVar23 = (ulong)(uVar36 - 0x2b);
          if (0x3f < uVar36 - 0x2b) goto LAB_002f9508;
          if ((1L << (uVar23 & 0x3f) & 0x7fe5U) == 0) {
            if (uVar23 == 0x36) {
              pbVar35 = &DAT_0016e588;
              do {
                pbVar34 = pbVar34 + 1;
                if ((uint)uVar32 == (uint)*pbVar35) {
                  if ((uint)uVar32 == 0) goto code_r0x002f8450;
                }
                else if ((&DAT_0017d228)[uVar32] != (&DAT_0017d228)[*pbVar35]) goto LAB_002f9508;
                uVar32 = (ulong)*pbVar34;
                pbVar35 = pbVar35 + 1;
              } while( true );
            }
            if (uVar23 == 0x3f) {
              pcVar28 = "julianday";
              do {
                pbVar34 = pbVar34 + 1;
                if ((uint)uVar32 == (uint)(byte)*pcVar28) {
                  if ((uint)uVar32 == 0) goto code_r0x002f82f0;
                }
                else if ((&DAT_0017d228)[uVar32] != (&DAT_0017d228)[(byte)*pcVar28]) break;
                uVar32 = (ulong)*pbVar34;
                pcVar28 = (char *)((byte *)pcVar28 + 1);
              } while( true );
            }
            goto LAB_002f9508;
          }
          lVar22 = 1;
          uVar36 = (uint)pbVar34[1];
          pbVar35 = pbVar34;
          if (pbVar34[1] != 0) {
            do {
              if ((uVar36 == 0x3a) || (((&DAT_0017d382)[uVar36] & 1) != 0)) break;
              lVar22 = lVar22 + 1;
              pbVar35 = pbVar35 + 1;
              uVar36 = (uint)pbVar34[lVar22];
            } while (uVar36 != 0);
          }
          iVar17 = FUN_0022c3dc(pbVar34,&local_b8,lVar22,1);
          if (iVar17 < 1) goto LAB_002f9508;
          if (uVar36 == 0x3a) {
            pbVar35 = pbVar34;
            if (uVar32 - 0x3a < 0xfffffffffffffff6) {
              pbVar35 = pbVar34 + 1;
            }
            uStack_d8 = 0;
            local_e0 = 0;
            local_c8 = 0;
            local_d0 = 0;
            uStack_e8 = 0;
            local_f0 = 0.0;
            iVar17 = FUN_002f9a14(pbVar35,&local_f0);
            if (iVar17 == 0) {
              dVar38 = local_f0;
              if ((char)local_c8 == '\0') {
                if (local_c8._2_1_ == '\0') {
                  iVar21 = 1;
                  iVar17 = 2000;
                  iVar26 = 1;
LAB_002f874c:
                  if (local_c8._1_1_ == '\0') {
                    iVar27 = iVar21 + 0xc;
                    if (2 < iVar21) {
                      iVar27 = iVar21;
                    }
                    iVar17 = iVar17 - (uint)(iVar21 < 3);
                    iVar30 = (int)(short)iVar17;
                    iVar21 = iVar30 * -0x147b;
                    dVar38 = (double)(long)(((double)(int)(((iVar21 >> 0x13) - (iVar21 >> 0x1f)) +
                                                           iVar30 / 400 +
                                                           (iVar27 * 0x4ab51 + 0x4ab51) / 10000 +
                                                           iVar26 + (iVar17 * 0x8ead + 0xa445afcU) /
                                                                    100 + 2) + -1524.5) * 86400000.0
                                           );
                    if (local_c8._3_1_ != '\0') {
                      dVar39 = (double)NEON_fmadd(local_d0,0x408f400000000000,0x3fe0000000000000);
                      dVar38 = (double)((long)dVar39 +
                                        (long)local_e0._4_4_ * 3600000 +
                                        (long)uStack_d8._4_4_ * 60000 + (long)dVar38);
                      if (local_c8._4_1_ != '\0') {
                        dVar38 = (double)((long)dVar38 + (long)uStack_d8._4_4_ * -60000);
                      }
                    }
                    goto LAB_002f8758;
                  }
                }
                else if (0xffffc686 < (int)uStack_e8 - 10000U) {
                  iVar17 = (int)uStack_e8;
                  iVar21 = uStack_e8._4_4_;
                  iVar26 = (int)local_e0;
                  goto LAB_002f874c;
                }
                dVar38 = 0.0;
              }
LAB_002f8758:
              lVar24 = (long)((long)dVar38 - 43200000U) % 86400000;
              lVar22 = -lVar24;
              if (*pbVar34 != 0x2d) {
                lVar22 = lVar24;
              }
              FUN_002f95e0(param_4);
              *(undefined2 *)((long)param_4 + 0x2a) = 0;
              *(undefined1 *)((long)param_4 + 0x2c) = 0;
              *param_4 = (double)((long)*param_4 + lVar22);
              goto LAB_002f7f80;
            }
            goto LAB_002f9508;
          }
          do {
            pbVar35 = pbVar35 + 1;
          } while (((&DAT_0017d382)[*pbVar35] & 1) != 0);
          sVar19 = strlen((char *)pbVar35);
          uVar36 = (uint)sVar19 & 0x3fffffff;
          if (uVar36 - 0xb < 0xfffffff8) goto LAB_002f9508;
          uVar2 = uVar36 - 1;
          if ((pbVar35[uVar36 - 1] & 0xdf) != 0x53) {
            uVar2 = uVar36;
          }
          FUN_002f95e0(param_4);
          dVar38 = local_b8;
          lVar22 = 0;
          pcVar28 = "second";
          uVar41 = 0xbfe0000000000000;
          if (0.0 <= local_b8) {
            uVar41 = 0x3fe0000000000000;
          }
          do {
            if (uVar2 == (byte)(&DAT_00181528)[lVar22 * 0x10]) {
              uVar32 = 0;
              do {
                if ((ulong)(byte)pcVar28[uVar32] == 0) {
                  cVar31 = '\0';
                  cVar5 = (&DAT_0017d228)[pbVar35[uVar32]];
LAB_002f8198:
                  if (cVar31 != cVar5) goto LAB_002f813c;
                  break;
                }
                cVar31 = (&DAT_0017d228)[(byte)pcVar28[uVar32]];
                cVar5 = (&DAT_0017d228)[pbVar35[uVar32]];
                if (cVar31 != cVar5) goto LAB_002f8198;
                uVar32 = uVar32 + 1;
              } while (uVar2 != uVar32);
              dVar39 = (double)(float)(&DAT_00181530)[lVar22 * 4];
              dVar40 = (double)-(float)(&DAT_00181530)[lVar22 * 4];
              bVar16 = false;
              if ((local_b8 != dVar40 && local_b8 < dVar40 == (NAN(local_b8) || NAN(dVar40))) &&
                 (bVar16 = false, !NAN(local_b8) && !NAN(dVar39))) {
                bVar16 = local_b8 < dVar39;
              }
              if (bVar16) {
                if ((int)lVar22 == 5) {
                  if (*pcVar33 == '\0') {
                    pcVar28 = pcVar33;
                    if (*(char *)(param_4 + 5) == '\0') {
                      param_4[1] = dVar11;
                      *(undefined4 *)(param_4 + 2) = 1;
                    }
                    else if ((ulong)*param_4 < 0x1a6401072fe00) {
                      iVar21 = (int)(((long)*param_4 + 43200000U) / 86400000);
                      iVar26 = (int)(((double)iVar21 + dVar10) / 36524.25);
                      iVar17 = iVar26 + 3;
                      if (-1 < iVar26) {
                        iVar17 = iVar26;
                      }
                      iVar17 = ((iVar21 + iVar26) - (iVar17 >> 2)) + 0x5f5;
                      uVar36 = (uint)(((double)iVar17 + dVar15) / 365.25);
                      iVar17 = iVar17 - ((uVar36 & 0x7fff) * 0x8ead) / 100;
                      iVar26 = (int)((double)iVar17 / dVar9);
                      iVar21 = -0xd;
                      if (iVar26 < 0xe) {
                        iVar21 = -1;
                      }
                      iVar27 = -0x126c;
                      if (iVar21 + iVar26 < 3) {
                        iVar27 = -0x126b;
                      }
                      *(int *)((long)param_4 + 0xc) = iVar21 + iVar26;
                      *(int *)(param_4 + 2) = iVar17 - (int)((double)iVar26 * dVar9);
                      *(uint *)(param_4 + 1) = iVar27 + uVar36;
                    }
                    else {
                      param_4[3] = 0.0;
                      param_4[2] = 0.0;
                      param_4[5] = 0.0;
                      param_4[4] = 0.0;
                      param_4[1] = 0.0;
                      *param_4 = 0.0;
                      pcVar28 = pcVar1;
                    }
                    *pcVar28 = '\x01';
                  }
                  if (*(char *)((long)param_4 + 0x2b) == '\0') {
                    FUN_002f95e0(param_4);
                    *(undefined1 *)((long)param_4 + 0x29) = 0;
                    auVar6 = SEXT816((long)((long)*param_4 + 43200000U)) *
                             SEXT816(0x636ba875fd33dc87);
                    dVar39 = (double)((int)((long)*param_4 + 43200000U) +
                                     ((int)(auVar6._8_8_ >> 0x19) - (auVar6._12_4_ >> 0x1f)) *
                                     -86400000) / 1000.0;
                    iVar17 = (int)dVar39;
                    *(int *)((long)param_4 + 0x14) = iVar17 / 0xe10;
                    *(int *)(param_4 + 3) = (iVar17 % 0xe10) / 0x3c;
                    *(undefined1 *)((long)param_4 + 0x2b) = 1;
                    param_4[4] = (dVar39 - (double)iVar17) + (double)((iVar17 % 0xe10) % 0x3c);
                  }
                  *(int *)(param_4 + 1) = *(int *)(param_4 + 1) + (int)dVar38;
LAB_002f8da4:
                  *(undefined1 *)(param_4 + 5) = 0;
                  dVar38 = dVar38 - (double)(int)dVar38;
                }
                else if ((int)lVar22 == 4) {
                  if (*pcVar33 == '\0') {
                    pcVar28 = pcVar33;
                    if (*(char *)(param_4 + 5) == '\0') {
                      param_4[1] = dVar11;
                      *(undefined4 *)(param_4 + 2) = 1;
                    }
                    else if ((ulong)*param_4 < 0x1a6401072fe00) {
                      iVar21 = (int)(((long)*param_4 + 43200000U) / 86400000);
                      iVar26 = (int)(((double)iVar21 + dVar10) / 36524.25);
                      iVar17 = iVar26 + 3;
                      if (-1 < iVar26) {
                        iVar17 = iVar26;
                      }
                      iVar17 = ((iVar21 + iVar26) - (iVar17 >> 2)) + 0x5f5;
                      uVar36 = (uint)(((double)iVar17 + dVar15) / 365.25);
                      iVar17 = iVar17 - ((uVar36 & 0x7fff) * 0x8ead) / 100;
                      iVar26 = (int)((double)iVar17 / dVar9);
                      iVar21 = -0xd;
                      if (iVar26 < 0xe) {
                        iVar21 = -1;
                      }
                      iVar27 = -0x126c;
                      if (iVar21 + iVar26 < 3) {
                        iVar27 = -0x126b;
                      }
                      *(int *)((long)param_4 + 0xc) = iVar21 + iVar26;
                      *(int *)(param_4 + 2) = iVar17 - (int)((double)iVar26 * dVar9);
                      *(uint *)(param_4 + 1) = iVar27 + uVar36;
                    }
                    else {
                      param_4[3] = 0.0;
                      param_4[2] = 0.0;
                      param_4[5] = 0.0;
                      param_4[4] = 0.0;
                      param_4[1] = 0.0;
                      *param_4 = 0.0;
                      pcVar28 = pcVar1;
                    }
                    *pcVar28 = '\x01';
                  }
                  if (*(char *)((long)param_4 + 0x2b) == '\0') {
                    FUN_002f95e0(param_4);
                    *(undefined1 *)((long)param_4 + 0x29) = 0;
                    *(undefined1 *)((long)param_4 + 0x2b) = 1;
                    auVar6 = SEXT816((long)((long)*param_4 + 43200000U)) *
                             SEXT816(0x636ba875fd33dc87);
                    dVar39 = (double)((int)((long)*param_4 + 43200000U) +
                                     ((int)(auVar6._8_8_ >> 0x19) - (auVar6._12_4_ >> 0x1f)) *
                                     -86400000) / 1000.0;
                    iVar17 = (int)dVar39;
                    *(int *)((long)param_4 + 0x14) = iVar17 / 0xe10;
                    *(int *)(param_4 + 3) = (iVar17 % 0xe10) / 0x3c;
                    param_4[4] = (dVar39 - (double)iVar17) + (double)((iVar17 % 0xe10) % 0x3c);
                  }
                  iVar17 = *(int *)((long)param_4 + 0xc) + (int)dVar38;
                  if (iVar17 < 1) {
                    uVar36 = -((0xcU - iVar17) / 0xc);
                  }
                  else {
                    uVar36 = (iVar17 - 1U) / 0xc;
                  }
                  *(uint *)(param_4 + 1) = *(int *)(param_4 + 1) + uVar36;
                  *(uint *)((long)param_4 + 0xc) = iVar17 + uVar36 * -0xc;
                  goto LAB_002f8da4;
                }
                FUN_002f95e0(param_4);
                bVar16 = false;
                dVar38 = (double)NEON_fmadd(dVar38 * 1000.0,
                                            (double)(float)(&DAT_00181534)[lVar22 * 4],uVar41);
                *param_4 = (double)((long)*param_4 + (long)dVar38);
                goto LAB_002f8de8;
              }
            }
LAB_002f813c:
            lVar22 = lVar22 + 1;
            pcVar28 = pcVar28 + 0x10;
          } while (lVar22 != 6);
          bVar16 = true;
LAB_002f8de8:
          *(undefined2 *)((long)param_4 + 0x2a) = 0;
          *(undefined1 *)((long)param_4 + 0x2c) = 0;
          if (bVar16) goto LAB_002f9508;
        }
        else {
          if (bVar4 < 0x75) {
            if (uVar36 == 0x6c) {
              pcVar28 = "localtime";
              do {
                pbVar34 = pbVar34 + 1;
                if ((uint)uVar32 == (uint)(byte)*pcVar28) {
                  if ((uint)uVar32 == 0) goto code_r0x002f84a8;
                }
                else if ((&DAT_0017d228)[uVar32] != (&DAT_0017d228)[(byte)*pcVar28])
                goto LAB_002f9508;
                uVar32 = (ulong)*pbVar34;
                pcVar28 = (char *)((byte *)pcVar28 + 1);
              } while( true );
            }
            if (uVar36 != 0x73) goto LAB_002f9508;
            if (bVar3 == 0) {
              uVar32 = 0;
              pcVar28 = "start of ";
LAB_002f91d0:
              if ((uint)uVar32 != (uint)(byte)(&DAT_0017d228)[(byte)*pcVar28]) goto LAB_002f9508;
            }
            else {
              bVar3 = pbVar34[1];
              uVar32 = (ulong)bVar3;
              if (bVar3 == 0) {
                pcVar28 = "tart of ";
                goto LAB_002f91d0;
              }
              if ((bVar3 & 0xdf) != 0x54) {
                pcVar28 = "tart of ";
                uVar32 = (ulong)(byte)(&DAT_0017d228)[uVar32];
                goto LAB_002f91d0;
              }
              bVar3 = pbVar34[2];
              uVar32 = (ulong)bVar3;
              if (bVar3 == 0) {
                pcVar28 = "art of ";
                goto LAB_002f91d0;
              }
              if ((bVar3 & 0xdf) != 0x41) {
                pcVar28 = "art of ";
                uVar32 = (ulong)(byte)(&DAT_0017d228)[uVar32];
                goto LAB_002f91d0;
              }
              bVar3 = pbVar34[3];
              uVar32 = (ulong)bVar3;
              if (bVar3 == 0) {
                pcVar28 = "rt of ";
                goto LAB_002f91d0;
              }
              if ((bVar3 & 0xdf) != 0x52) {
                pcVar28 = "rt of ";
                uVar32 = (ulong)(byte)(&DAT_0017d228)[uVar32];
                goto LAB_002f91d0;
              }
              bVar3 = pbVar34[4];
              uVar32 = (ulong)bVar3;
              if (bVar3 == 0) {
                pcVar28 = "t of ";
                goto LAB_002f91d0;
              }
              if ((bVar3 & 0xdf) != 0x54) {
                pcVar28 = "t of ";
                uVar32 = (ulong)(byte)(&DAT_0017d228)[uVar32];
                goto LAB_002f91d0;
              }
              bVar3 = pbVar34[5];
              uVar32 = (ulong)bVar3;
              if (bVar3 == 0) {
                pcVar28 = " of ";
                goto LAB_002f91d0;
              }
              if (bVar3 != 0x20) {
                pcVar28 = " of ";
                uVar32 = (ulong)(byte)(&DAT_0017d228)[uVar32];
                goto LAB_002f91d0;
              }
              bVar3 = pbVar34[6];
              uVar32 = (ulong)bVar3;
              if (bVar3 == 0) {
                pcVar28 = "of ";
                goto LAB_002f91d0;
              }
              if ((bVar3 & 0xdf) != 0x4f) {
                pcVar28 = "of ";
                uVar32 = (ulong)(byte)(&DAT_0017d228)[uVar32];
                goto LAB_002f91d0;
              }
              bVar3 = pbVar34[7];
              uVar32 = (ulong)bVar3;
              if (bVar3 == 0) {
                pcVar28 = "f ";
                goto LAB_002f91d0;
              }
              if ((bVar3 & 0xdf) != 0x46) {
                pcVar28 = "f ";
                uVar32 = (ulong)(byte)(&DAT_0017d228)[uVar32];
                goto LAB_002f91d0;
              }
              bVar3 = pbVar34[8];
              uVar32 = (ulong)bVar3;
              if (bVar3 == 0) {
                pcVar28 = " ";
                goto LAB_002f91d0;
              }
              if (bVar3 != 0x20) {
                pcVar28 = " ";
                uVar32 = (ulong)(byte)(&DAT_0017d228)[uVar32];
                goto LAB_002f91d0;
              }
            }
            pcVar28 = pcVar33;
            if ((*(char *)(param_4 + 5) == '\0') && (*(char *)((long)param_4 + 0x2a) == '\0')) {
              if (*(char *)((long)param_4 + 0x2b) == '\0') goto LAB_002f9508;
LAB_002f91fc:
              param_4[1] = dVar11;
              *(undefined4 *)(param_4 + 2) = 1;
            }
            else {
              if (*(char *)((long)param_4 + 0x2a) != '\0') goto LAB_002f9220;
              if (*(char *)(param_4 + 5) == '\0') goto LAB_002f91fc;
              if ((ulong)*param_4 < 0x1a6401072fe00) {
                iVar21 = (int)(((long)*param_4 + 43200000U) / 86400000);
                iVar26 = (int)(((double)iVar21 + dVar10) / 36524.25);
                iVar17 = iVar26 + 3;
                if (-1 < iVar26) {
                  iVar17 = iVar26;
                }
                iVar17 = ((iVar21 + iVar26) - (iVar17 >> 2)) + 0x5f5;
                uVar36 = (uint)(((double)iVar17 + dVar15) / 365.25);
                iVar17 = iVar17 - ((uVar36 & 0x7fff) * 0x8ead) / 100;
                iVar26 = (int)((double)iVar17 / dVar9);
                iVar21 = -0xd;
                if (iVar26 < 0xe) {
                  iVar21 = -1;
                }
                iVar27 = -0x126c;
                if (iVar21 + iVar26 < 3) {
                  iVar27 = -0x126b;
                }
                *(int *)((long)param_4 + 0xc) = iVar21 + iVar26;
                *(int *)(param_4 + 2) = iVar17 - (int)((double)iVar26 * dVar9);
                *(uint *)(param_4 + 1) = iVar27 + uVar36;
              }
              else {
                param_4[3] = 0.0;
                param_4[2] = 0.0;
                param_4[5] = 0.0;
                param_4[4] = 0.0;
                param_4[1] = 0.0;
                *param_4 = 0.0;
                pcVar28 = pcVar1;
              }
            }
            *pcVar28 = '\x01';
LAB_002f9220:
            pbVar34 = pbVar34 + 9;
            *(undefined2 *)((long)param_4 + 0x2b) = 1;
            pcVar28 = "month";
            *(undefined4 *)((long)param_4 + 0x14) = 0;
            *(undefined4 *)(param_4 + 3) = 0;
            param_4[4] = 0.0;
            *(undefined2 *)(param_4 + 5) = 0;
            pbVar35 = pbVar34;
            do {
              uVar36 = (uint)*pbVar35;
              if (uVar36 == (byte)*pcVar28) {
                if (uVar36 == 0) {
                  *(undefined4 *)(param_4 + 2) = 1;
                  goto LAB_002f7f80;
                }
              }
              else if ((&DAT_0017d228)[uVar36] != (&DAT_0017d228)[(uint)(byte)*pcVar28])
              goto code_r0x002f9270;
              pbVar35 = pbVar35 + 1;
              pcVar28 = (char *)((byte *)pcVar28 + 1);
            } while( true );
          }
          if (uVar36 == 0x75) {
            uVar23 = (ulong)(uint)bVar3;
            pcVar28 = "unixepoch";
            pbVar35 = pbVar34 + 1;
            do {
              if ((uint)uVar23 == (uint)(byte)*pcVar28) {
                if ((uint)uVar23 == 0) goto code_r0x002f850c;
              }
              else if ((&DAT_0017d228)[uVar23] != (&DAT_0017d228)[(byte)*pcVar28])
              goto LAB_002f8570;
              uVar23 = (ulong)*pbVar35;
              pcVar28 = (char *)((byte *)pcVar28 + 1);
              pbVar35 = pbVar35 + 1;
            } while( true );
          }
          if (uVar36 != 0x77) goto LAB_002f9508;
          if (bVar3 == 0) {
            uVar32 = 0;
            pbVar35 = &DAT_00175511;
LAB_002f8f38:
            if ((uint)uVar32 != (uint)(byte)(&DAT_0017d228)[*pbVar35]) goto LAB_002f9508;
          }
          else {
            bVar3 = pbVar34[1];
            uVar32 = (ulong)bVar3;
            if (bVar3 == 0) {
              pbVar35 = &DAT_00175512;
              goto LAB_002f8f38;
            }
            if ((bVar3 & 0xdf) != 0x45) {
              pbVar35 = &DAT_00175512;
              uVar32 = (ulong)(byte)(&DAT_0017d228)[uVar32];
              goto LAB_002f8f38;
            }
            bVar3 = pbVar34[2];
            uVar32 = (ulong)bVar3;
            if (bVar3 == 0) {
              pbVar35 = &DAT_00175513;
              goto LAB_002f8f38;
            }
            if ((bVar3 & 0xdf) != 0x45) {
              pbVar35 = &DAT_00175513;
              uVar32 = (ulong)(byte)(&DAT_0017d228)[uVar32];
              goto LAB_002f8f38;
            }
            bVar3 = pbVar34[3];
            uVar32 = (ulong)bVar3;
            if (bVar3 == 0) {
              pbVar35 = &DAT_00175514;
              goto LAB_002f8f38;
            }
            if ((bVar3 & 0xdf) != 0x4b) {
              pbVar35 = &DAT_00175514;
              uVar32 = (ulong)(byte)(&DAT_0017d228)[uVar32];
              goto LAB_002f8f38;
            }
            bVar3 = pbVar34[4];
            uVar32 = (ulong)bVar3;
            if (bVar3 == 0) {
              pbVar35 = &DAT_00175515;
              goto LAB_002f8f38;
            }
            if ((bVar3 & 0xdf) != 0x44) {
              pbVar35 = &DAT_00175515;
              uVar32 = (ulong)(byte)(&DAT_0017d228)[uVar32];
              goto LAB_002f8f38;
            }
            bVar3 = pbVar34[5];
            uVar32 = (ulong)bVar3;
            if (bVar3 == 0) {
              pbVar35 = &DAT_00175516;
              goto LAB_002f8f38;
            }
            if ((bVar3 & 0xdf) != 0x41) {
              pbVar35 = &DAT_00175516;
              uVar32 = (ulong)(byte)(&DAT_0017d228)[uVar32];
              goto LAB_002f8f38;
            }
            bVar3 = pbVar34[6];
            uVar32 = (ulong)bVar3;
            if (bVar3 == 0) {
              pbVar35 = &DAT_00175517;
              goto LAB_002f8f38;
            }
            if ((bVar3 & 0xdf) != 0x59) {
              pbVar35 = &DAT_00175517;
              uVar32 = (ulong)(byte)(&DAT_0017d228)[uVar32];
              goto LAB_002f8f38;
            }
            bVar3 = pbVar34[7];
            uVar32 = (ulong)bVar3;
            if (bVar3 == 0) {
              pbVar35 = &DAT_00175518;
              goto LAB_002f8f38;
            }
            if (bVar3 != 0x20) {
              pbVar35 = &DAT_00175518;
              uVar32 = (ulong)(byte)(&DAT_0017d228)[uVar32];
              goto LAB_002f8f38;
            }
          }
          sVar19 = strlen((char *)(pbVar34 + 8));
          iVar17 = FUN_0022c3dc(pbVar34 + 8,&local_b8,(uint)sVar19 & 0x3fffffff,1);
          if (((iVar17 < 1) || (local_b8 < 0.0 != NAN(local_b8))) ||
             ((7.0 <= local_b8 || (iVar17 = (int)local_b8, local_b8 != (double)iVar17))))
          goto LAB_002f9508;
          if (*pcVar33 == '\0') {
            pcVar28 = pcVar33;
            if (*(char *)(param_4 + 5) == '\0') {
              param_4[1] = dVar11;
              *(undefined4 *)(param_4 + 2) = 1;
            }
            else if ((ulong)*param_4 < 0x1a6401072fe00) {
              iVar26 = (int)(((long)*param_4 + 43200000U) / 86400000);
              iVar27 = (int)(((double)iVar26 + dVar10) / 36524.25);
              iVar21 = iVar27 + 3;
              if (-1 < iVar27) {
                iVar21 = iVar27;
              }
              iVar21 = ((iVar26 + iVar27) - (iVar21 >> 2)) + 0x5f5;
              uVar36 = (uint)(((double)iVar21 + dVar15) / 365.25);
              iVar21 = iVar21 - ((uVar36 & 0x7fff) * 0x8ead) / 100;
              iVar27 = (int)((double)iVar21 / dVar9);
              iVar26 = -0xd;
              if (iVar27 < 0xe) {
                iVar26 = -1;
              }
              iVar30 = -0x126c;
              if (iVar26 + iVar27 < 3) {
                iVar30 = -0x126b;
              }
              *(int *)((long)param_4 + 0xc) = iVar26 + iVar27;
              *(int *)(param_4 + 2) = iVar21 - (int)((double)iVar27 * dVar9);
              *(uint *)(param_4 + 1) = iVar30 + uVar36;
            }
            else {
              param_4[3] = 0.0;
              param_4[2] = 0.0;
              param_4[5] = 0.0;
              param_4[4] = 0.0;
              param_4[1] = 0.0;
              *param_4 = 0.0;
              pcVar28 = pcVar1;
            }
            *pcVar28 = '\x01';
          }
          if (*(char *)((long)param_4 + 0x2b) == '\0') {
            FUN_002f95e0(param_4);
            *(undefined1 *)((long)param_4 + 0x29) = 0;
            *(undefined1 *)((long)param_4 + 0x2b) = 1;
            auVar6 = SEXT816((long)((long)*param_4 + 43200000U)) * SEXT816(0x636ba875fd33dc87);
            dVar38 = (double)((int)((long)*param_4 + 43200000U) +
                             ((int)(auVar6._8_8_ >> 0x19) - (auVar6._12_4_ >> 0x1f)) * -86400000) /
                     1000.0;
            iVar21 = (int)dVar38;
            *(int *)((long)param_4 + 0x14) = iVar21 / 0xe10;
            *(int *)(param_4 + 3) = (iVar21 % 0xe10) / 0x3c;
            param_4[4] = (dVar38 - (double)iVar21) + (double)((iVar21 % 0xe10) % 0x3c);
          }
          *(undefined1 *)((long)param_4 + 0x2c) = 0;
          *(undefined1 *)(param_4 + 5) = 0;
          FUN_002f95e0(param_4);
          *(undefined2 *)((long)param_4 + 0x2a) = 0;
          *(undefined1 *)((long)param_4 + 0x2c) = 0;
          lVar22 = ((long)((long)*param_4 + 0x7b98a00U) / 86400000) % 7;
          lVar24 = lVar22 + -7;
          if (lVar22 <= iVar17) {
            lVar24 = lVar22;
          }
          *param_4 = (double)((long)*param_4 + (iVar17 - lVar24) * 86400000);
        }
        goto LAB_002f7f80;
      }
LAB_002f94f4:
      FUN_002f95e0(param_4);
      if (*(char *)((long)param_4 + 0x2e) == '\0') {
        bVar16 = 0x1a6401072fdff < (ulong)*param_4;
        goto LAB_002f950c;
      }
    }
  }
LAB_002f9508:
  bVar16 = true;
LAB_002f950c:
  if (*(long *)(lVar7 + 0x28) != local_b0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar16);
  }
  return;
}


// ===== 002f95e0  FUN_002f95e0 =====

void FUN_002f95e0(long *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  
  if ((char)param_1[5] == '\0') {
    if (*(char *)((long)param_1 + 0x2a) == '\0') {
      iVar7 = 1;
      iVar6 = 2000;
      iVar4 = 1;
      cVar2 = *(char *)((long)param_1 + 0x29);
    }
    else {
      iVar6 = (int)param_1[1];
      if (iVar6 - 10000U < 0xffffc687) goto LAB_002f9760;
      iVar7 = *(int *)((long)param_1 + 0xc);
      iVar4 = (int)param_1[2];
      cVar2 = *(char *)((long)param_1 + 0x29);
    }
    if (cVar2 != '\0') {
LAB_002f9760:
      param_1[3] = 0;
      param_1[2] = 0;
      param_1[5] = 0;
      param_1[4] = 0;
      param_1[1] = 0;
      *param_1 = 0;
      *(undefined1 *)((long)param_1 + 0x2e) = 1;
      return;
    }
    iVar1 = iVar7 + 0xc;
    if (2 < iVar7) {
      iVar1 = iVar7;
    }
    iVar6 = iVar6 - (uint)(iVar7 < 3);
    iVar3 = (int)(short)iVar6;
    iVar7 = iVar3 * -0x147b;
    *(undefined1 *)(param_1 + 5) = 1;
    lVar5 = (long)(((double)(int)(((iVar7 >> 0x13) - (iVar7 >> 0x1f)) + iVar3 / 400 +
                                  (iVar1 * 0x4ab51 + 0x4ab51) / 10000 + iVar4 +
                                  (iVar6 * 0x8ead + 0xa445afcU) / 100 + 2) + -1524.5) * 86400000.0);
    *param_1 = lVar5;
    if (*(char *)((long)param_1 + 0x2b) != '\0') {
      dVar8 = (double)NEON_fmadd(param_1[4],0x408f400000000000,0x3fe0000000000000);
      lVar5 = (long)dVar8 +
              (long)*(int *)((long)param_1 + 0x14) * 3600000 +
              (long)*(int *)((long)param_1 + 0x1c) * 60000 + lVar5;
      *param_1 = lVar5;
      if (*(char *)((long)param_1 + 0x2c) != '\0') {
        *(undefined2 *)((long)param_1 + 0x2a) = 0;
        *(undefined1 *)((long)param_1 + 0x2c) = 0;
        *param_1 = lVar5 + (long)*(int *)((long)param_1 + 0x1c) * -60000;
        return;
      }
    }
  }
  return;
}


// ===== 002f9778  FUN_002f9778 =====

undefined4 FUN_002f9778(undefined8 *param_1)

{
  char *pcVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if (*(char *)(*(long *)(param_1[3] + 0x88) + (long)*(int *)(param_1 + 4) * 0x18) != 'A') {
    return 1;
  }
  uVar2 = *(ushort *)(*(long *)(param_1[3] + 0x88) + (long)*(int *)(param_1 + 4) * 0x18 + 2);
  pcVar1 = "an index";
  if ((uVar2 & 8) != 0) {
    pcVar1 = "a generated column";
  }
  if ((uVar2 & 4) != 0) {
    pcVar1 = "a CHECK constraint";
  }
  lVar4 = sqlite3_mprintf("non-deterministic use of %s() in %s",*(undefined8 *)(param_1[1] + 0x38),
                          pcVar1);
  *(undefined4 *)((long)param_1 + 0x24) = 1;
  FUN_0023c180(*param_1,lVar4,0xffffffffffffffff,1,0xffffffffffffffff);
  if (lVar4 != 0) {
    puVar5 = &DAT_00313858;
    if (DAT_00313830 != 0) {
      if (DAT_00316f08 != 0) {
        (*DAT_003138b0)();
      }
      iVar3 = (*DAT_00313868)(lVar4);
      DAT_00316e60 = DAT_00316e60 - iVar3;
      DAT_00316ea8 = DAT_00316ea8 + -1;
      (*DAT_00313858)(lVar4);
      if (DAT_00316f08 == 0) {
        return 0;
      }
      puVar5 = &DAT_003138c0;
      lVar4 = DAT_00316f08;
    }
    (*(code *)*puVar5)(lVar4);
  }
  return 0;
}


// ===== 002f98b8  FUN_002f98b8 =====

void FUN_002f98b8(byte *param_1,char *param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  byte *pbVar8;
  long lVar9;
  int iVar10;
  undefined8 *puVar11;
  byte bVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  iVar7 = 0;
  lVar4 = tpidr_el0;
  lVar9 = *(long *)(lVar4 + 0x28);
  uVar5 = 0xffffffd0;
  puVar13 = (undefined8 *)register0x00000008;
  do {
    bVar2 = param_2[3];
    if (*param_2 == '0') {
      iVar10 = 0;
      pbVar8 = param_1;
    }
    else {
      bVar12 = *param_2 - 0x31;
      iVar10 = 0;
      pbVar8 = param_1 + (ulong)bVar12 + 1;
      do {
        bVar3 = *param_1;
        if ((ulong)bVar3 - 0x3a < 0xfffffffffffffff6) goto LAB_002f99f4;
        bVar6 = bVar12 != 0;
        bVar12 = bVar12 - 1;
        param_1 = param_1 + 1;
        iVar10 = (uint)bVar3 + iVar10 * 10 + -0x30;
      } while (bVar6);
    }
    if (((iVar10 < (int)((byte)param_2[1] - 0x30 & 0xff)) ||
        ((int)(uint)*(ushort *)(&DAT_0018145a + (ulong)(byte)param_2[2] * 2) < iVar10)) ||
       ((bVar2 != 0 && (bVar2 != *pbVar8)))) break;
    uVar1 = uVar5;
    if (((int)uVar5 < 0) && (uVar1 = uVar5 + 8, uVar5 < 0xfffffff9)) {
      puVar11 = (undefined8 *)(&stack0xffffffffffffffc8 + (int)uVar5);
      puVar14 = puVar13;
      uVar5 = uVar1;
    }
    else {
      puVar14 = puVar13 + 1;
      puVar11 = puVar13;
      uVar5 = uVar1;
    }
    param_1 = pbVar8 + 1;
    iVar7 = iVar7 + 1;
    param_2 = param_2 + 4;
    *(int *)*puVar11 = iVar10;
    puVar13 = puVar14;
  } while (bVar2 != 0);
LAB_002f99f4:
  if (*(long *)(lVar4 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar7);
  }
  return;
}


// ===== 002f9a14  FUN_002f9a14 =====

void FUN_002f9a14(long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  undefined8 uVar7;
  ulong uVar8;
  byte *pbVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  int local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  int local_50;
  int local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  iVar4 = FUN_002f98b8(param_1,"20c:20e",&uStack_54,&local_58);
  if (iVar4 == 2) {
    pbVar6 = (byte *)(param_1 + 5);
    if (*pbVar6 == 0x3a) {
      iVar4 = FUN_002f98b8(param_1 + 6,&DAT_00176c16,&local_5c);
      if (iVar4 != 1) goto LAB_002f9bcc;
      dVar10 = 0.0;
      pbVar6 = (byte *)(param_1 + 8);
      if (*pbVar6 == 0x2e) {
        pbVar9 = (byte *)(param_1 + 9);
        uVar8 = (ulong)*pbVar9;
        if (0xfffffffffffffff5 < uVar8 - 0x3a) {
          dVar10 = 0.0;
          dVar11 = 1.0;
          do {
            dVar11 = dVar11 * 10.0;
            dVar12 = (double)uVar8;
            pbVar9 = pbVar9 + 1;
            uVar8 = (ulong)*pbVar9;
            dVar10 = (double)NEON_fmadd(dVar10,0x4024000000000000,dVar12);
            dVar10 = dVar10 + -48.0;
          } while (0xfffffffffffffff5 < uVar8 - 0x3a);
          dVar10 = dVar10 / dVar11;
          pbVar6 = pbVar9;
        }
      }
    }
    else {
      dVar10 = 0.0;
      local_5c = 0;
    }
    *(undefined2 *)(param_2 + 0x28) = 0;
    *(undefined1 *)(param_2 + 0x2b) = 1;
    *(undefined4 *)(param_2 + 0x14) = uStack_54;
    *(undefined4 *)(param_2 + 0x18) = local_58;
    *(double *)(param_2 + 0x20) = dVar10 + (double)local_5c;
    do {
      pbVar9 = pbVar6;
      pbVar6 = pbVar9 + 1;
    } while (((&DAT_0017d382)[*pbVar9] & 1) != 0);
    *(undefined4 *)(param_2 + 0x1c) = 0;
    bVar1 = *pbVar9;
    if (bVar1 == 0x2d) {
      iVar4 = -1;
LAB_002f9b58:
      iVar5 = FUN_002f98b8(pbVar6,"20b:20e",&local_4c,&local_50);
      if (iVar5 != 2) goto LAB_002f9bcc;
      pbVar6 = pbVar9 + 6;
      local_50 = local_50 + local_4c * 0x3c;
      bVar3 = local_50 != 0;
      *(int *)(param_2 + 0x1c) = local_50 * iVar4;
LAB_002f9bac:
      pbVar6 = pbVar6 + -1;
      do {
        pbVar6 = pbVar6 + 1;
      } while (((&DAT_0017d382)[*pbVar6] & 1) != 0);
      *(undefined1 *)(param_2 + 0x2d) = 1;
      bVar1 = *pbVar6;
    }
    else {
      if (bVar1 == 0x2b) {
        iVar4 = 1;
        goto LAB_002f9b58;
      }
      bVar3 = false;
      if ((bVar1 & 0xdf) == 0x5a) goto LAB_002f9bac;
    }
    if (bVar1 == 0) {
      uVar7 = 0;
      *(bool *)(param_2 + 0x2c) = bVar3;
      goto LAB_002f9bd0;
    }
  }
LAB_002f9bcc:
  uVar7 = 1;
LAB_002f9bd0:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}


// ===== 002f9c08  FUN_002f9c08 =====

bool FUN_002f9c08(ulong *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  uint uVar2;
  long lVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  tm *ptVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  char cVar15;
  int iVar16;
  long lVar17;
  int iVar18;
  char cVar19;
  int iVar20;
  ulong uVar21;
  char cVar22;
  ulong uVar23;
  double dVar24;
  char local_a4;
  tm local_a0;
  long local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  local_a0.tm_zone = (char *)0x0;
  local_a0.tm_wday = 0;
  local_a0.tm_yday = 0;
  local_a0.tm_mon = 0;
  local_a0.tm_year = 0;
  local_a0.tm_gmtoff = 0;
  local_a0.tm_isdst = 0;
  local_a0._36_4_ = 0;
  local_a0.tm_hour = 0;
  local_a0.tm_mday = 0;
  local_a0.tm_sec = 0;
  local_a0.tm_min = 0;
  FUN_002f95e0();
  uVar21 = *param_1;
  if (uVar21 - 0xc1bc387b0a01 < 0xfffffe0c05d817ff) {
    iVar16 = (int)param_1[2];
    iVar18 = *(int *)((long)param_1 + 0x14);
    iVar10 = (int)param_1[3];
    iVar14 = *(int *)((long)param_1 + 0x1c);
    uVar23 = param_1[1];
    dVar24 = (double)param_1[4];
    cVar22 = (char)param_1[5];
    local_a4 = *(char *)((long)param_1 + 0x2a);
    cVar19 = *(char *)((long)param_1 + 0x29);
    cVar15 = *(char *)((long)param_1 + 0x2c);
    if (local_a4 == '\0') {
      if (cVar22 == '\0') {
        iVar16 = 1;
        uVar23 = DAT_00177f50;
joined_r0x002f9d48:
        local_a4 = '\x01';
        goto joined_r0x002f9d48;
      }
      if (uVar21 < 0x1a6401072fe00) {
        iVar12 = (int)((uVar21 + 43200000) / 86400000);
        iVar20 = (int)(((double)iVar12 + DAT_00177f10) / 36524.25);
        iVar16 = iVar20 + 3;
        if (-1 < iVar20) {
          iVar16 = iVar20;
        }
        iVar16 = ((iVar12 + iVar20) - (iVar16 >> 2)) + 0x5f5;
        uVar9 = (uint)(((double)iVar16 + DAT_00178010) / 365.25);
        iVar16 = iVar16 - ((uVar9 & 0x7fff) * 0x8ead) / 100;
        iVar12 = (int)((double)iVar16 / DAT_00177f08);
        iVar20 = -0xd;
        if (iVar12 < 0xe) {
          iVar20 = -1;
        }
        iVar13 = -0x126c;
        if (iVar20 + iVar12 < 3) {
          iVar13 = -0x126b;
        }
        uVar23 = CONCAT44(iVar20 + iVar12,iVar13 + uVar9);
        iVar16 = iVar16 - (int)((double)iVar12 * DAT_00177f08);
        goto joined_r0x002f9d48;
      }
      uVar21 = 0;
      iVar16 = 0;
      iVar14 = 0;
      cVar22 = '\0';
      cVar19 = '\0';
      cVar15 = '\0';
      uVar23 = 0;
      local_a4 = '\0';
LAB_002f9e50:
      if (cVar22 == '\0') {
        if (local_a4 == '\0') {
          iVar20 = 1;
          iVar10 = 2000;
          iVar18 = 1;
LAB_002f9e8c:
          if (cVar19 == '\0') {
            iVar12 = iVar20 + 0xc;
            if (2 < iVar20) {
              iVar12 = iVar20;
            }
            iVar10 = iVar10 - (uint)(iVar20 < 3);
            iVar13 = (int)(short)iVar10;
            iVar20 = iVar13 * -0x147b;
            uVar21 = (ulong)(((double)(int)(((iVar20 >> 0x13) - (iVar20 >> 0x1f)) + iVar13 / 400 +
                                            (iVar12 * 0x4ab51 + 0x4ab51) / 10000 + iVar18 +
                                            (iVar10 * 0x8ead + 0xa445afcU) / 100 + 2) + -1524.5) *
                            86400000.0);
            goto LAB_002f9f64;
          }
        }
        else {
          iVar10 = (int)uVar23;
          if (0xffffc686 < iVar10 - 10000U) {
            iVar20 = (int)(uVar23 >> 0x20);
            iVar18 = iVar16;
            goto LAB_002f9e8c;
          }
        }
        uVar21 = 0;
        iVar16 = 0;
        iVar14 = 0;
        cVar15 = '\0';
        uVar23 = 0;
        local_a4 = '\0';
      }
LAB_002f9f64:
      auVar1 = SEXT816((long)(uVar21 + 43200000)) * SEXT816(0x636ba875fd33dc87);
      dVar24 = (double)((int)(uVar21 + 43200000) +
                       ((int)(auVar1._8_8_ >> 0x19) - (auVar1._12_4_ >> 0x1f)) * -86400000) / 1000.0
      ;
      iVar20 = (int)dVar24;
      iVar18 = iVar20 / 0xe10;
      iVar10 = (iVar20 % 0xe10) / 0x3c;
      cVar19 = '\0';
      dVar24 = (dVar24 - (double)iVar20) + (double)((iVar20 % 0xe10) % 0x3c);
    }
    else {
joined_r0x002f9d48:
      if (*(char *)((long)param_1 + 0x2b) == '\0') goto LAB_002f9e50;
    }
    uVar4 = (uint)uVar23;
    iVar20 = (int)(uVar23 >> 0x20);
    uVar9 = uVar4 & 3;
    if ((int)uVar4 < 1) {
      uVar9 = -(-uVar4 & 3);
    }
    if (local_a4 == '\0') {
      iVar20 = 1;
      iVar16 = 1;
    }
    iVar12 = 2000;
    if (local_a4 != '\0') {
      iVar12 = uVar9 + 2000;
    }
    if (cVar19 == '\0') {
      iVar13 = iVar20 + 0xc;
      if (2 < iVar20) {
        iVar13 = iVar20;
      }
      uVar2 = iVar12 - (uint)(iVar20 < 3);
      iVar20 = (short)uVar2 * -0x147b;
      dVar24 = (double)NEON_fmadd(dVar24,0x408f400000000000,0x3fe0000000000000);
      lVar17 = (long)dVar24 +
               (long)(((double)(int)(((iVar20 >> 0x13) - (iVar20 >> 0x1f)) +
                                     (iVar13 * 0x4ab51 + 0x4ab51) / 10000 + iVar16 +
                                     (uVar2 * 0x8ead + 0xa445afc) / 100 +
                                     (uVar2 >> 4 & 0xfff) / 0x19 + 2) + -1524.5) * 86400000.0) +
               (long)(iVar18 * 3600000 + iVar10 * 60000);
      if (cVar15 != '\0') {
        lVar17 = lVar17 - iVar14 * 60000;
      }
    }
    else {
      lVar17 = 0;
    }
    iVar16 = (uVar4 - (uVar9 + 2000)) + 0x76c;
    uVar21 = lVar17 / 1000;
  }
  else {
    iVar16 = 0x76c;
    uVar21 = uVar21 / 1000;
  }
  local_60 = uVar21 - 0x3118a36940;
  if (DAT_00313834 == '\0') {
    lVar17 = 0;
LAB_002fa1a0:
    bVar5 = true;
  }
  else {
    lVar17 = (*DAT_003138a0)(2);
    if (lVar17 == 0) goto LAB_002fa1a0;
    (*DAT_003138b0)(lVar17);
    bVar5 = false;
  }
  ptVar11 = localtime(&local_60);
  if (DAT_003139c8 == 0) {
    if (ptVar11 != (tm *)0x0) goto LAB_002fa1e0;
  }
  else if ((DAT_003139d0 != (code *)0x0) &&
          (iVar10 = (*DAT_003139d0)(&local_60,&local_a0), iVar10 == 0)) {
    ptVar11 = &local_a0;
LAB_002fa1e0:
    local_a0.tm_wday = ptVar11->tm_wday;
    local_a0.tm_yday = ptVar11->tm_yday;
    local_a0.tm_mon = ptVar11->tm_mon;
    local_a0.tm_year = ptVar11->tm_year;
    local_a0.tm_gmtoff = ptVar11->tm_gmtoff;
    local_a0.tm_isdst = ptVar11->tm_isdst;
    local_a0._36_4_ = *(undefined4 *)&ptVar11->field_0x24;
    bVar6 = true;
    local_a0.tm_zone = ptVar11->tm_zone;
    local_a0.tm_hour = ptVar11->tm_hour;
    local_a0.tm_mday = ptVar11->tm_mday;
    local_a0.tm_sec = ptVar11->tm_sec;
    local_a0.tm_min = ptVar11->tm_min;
    goto joined_r0x002fa1fc;
  }
  bVar6 = false;
joined_r0x002fa1fc:
  if (!bVar5) {
    (*DAT_003138c0)(lVar17);
  }
  if (!bVar6) {
    *(undefined4 *)((long)param_2 + 0x24) = 1;
    FUN_0023c180(*param_2,"local time unavailable",0xffffffffffffffff,1,0xffffffffffffffff);
  }
  else {
    *(undefined1 *)((long)param_1 + 0x2c) = 0;
    *(undefined1 *)((long)param_1 + 0x2e) = 0;
    uVar8 = DAT_00178080;
    *(int *)(param_1 + 3) = local_a0.tm_min;
    uVar7 = DAT_00177ed0;
    uVar21 = NEON_fmadd((double)((long)*param_1 % 1000),uVar8,(double)local_a0.tm_sec);
    uVar23 = NEON_rev64(local_a0._8_8_,4);
    *(int *)(param_1 + 1) = iVar16 + local_a0.tm_year;
    *(int *)((long)param_1 + 0xc) = local_a0.tm_mon + 1;
    *(int *)(param_1 + 5) = (int)uVar7;
    param_1[4] = uVar21;
    param_1[2] = uVar23;
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return !bVar6;
}


// ===== 002fa2ec  FUN_002fa2ec =====

void FUN_002fa2ec(long param_1)

{
  long *plVar1;
  
  if (*(short *)(*(long *)(param_1 + 0x10) + 0x14) < 0) {
    plVar1 = *(long **)(*(long *)(param_1 + 0x10) + 8);
  }
  else {
    plVar1 = (long *)FUN_0023ce88(param_1,8);
  }
  if (plVar1 != (long *)0x0) {
    *plVar1 = *plVar1 + 1;
  }
  return;
}


// ===== 002fa32c  FUN_002fa32c =====

void FUN_002fa32c(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (*(short *)(param_1[2] + 0x14) < 0) {
    puVar1 = *(undefined8 **)(param_1[2] + 8);
  }
  else {
    puVar1 = (undefined8 *)FUN_0023ce88(param_1,8);
  }
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  puVar1 = (undefined8 *)*param_1;
  if ((*(ushort *)((long)puVar1 + 0x14) & 0x9000) == 0) {
    *puVar1 = uVar2;
    *(undefined2 *)((long)puVar1 + 0x14) = 4;
    return;
  }
  FUN_0023c114();
  return;
}


// ===== 002fa3a4  FUN_002fa3a4 =====

void FUN_002fa3a4(long param_1)

{
  long lVar1;
  
  if (*(short *)(*(long *)(param_1 + 0x10) + 0x14) < 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 8);
  }
  else {
    lVar1 = FUN_0023ce88(param_1,0x18);
  }
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 8) = 1;
  }
  return;
}


// ===== 002fa3e0  FUN_002fa3e0 =====

void FUN_002fa3e0(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  if (*(short *)(param_1[2] + 0x14) < 0) {
    plVar1 = *(long **)(param_1[2] + 8);
  }
  else {
    plVar1 = (long *)FUN_0023ce88(param_1,0x18);
  }
  if (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    if (plVar1[1] != 0) {
      lVar2 = lVar2 + 1;
      *plVar1 = lVar2;
      plVar1[1] = 0;
    }
    plVar1 = (long *)*param_1;
    if ((*(ushort *)((long)plVar1 + 0x14) & 0x9000) != 0) {
      FUN_0023c114();
      return;
    }
    *plVar1 = lVar2;
    *(undefined2 *)((long)plVar1 + 0x14) = 4;
  }
  return;
}


// ===== 002fa460  FUN_002fa460 =====

void FUN_002fa460(long param_1)

{
  long lVar1;
  long *plVar2;
  
  if (*(short *)(*(long *)(param_1 + 0x10) + 0x14) < 0) {
    plVar2 = *(long **)(*(long *)(param_1 + 0x10) + 8);
  }
  else {
    plVar2 = (long *)FUN_0023ce88(param_1,0x18);
  }
  if (plVar2 != (long *)0x0) {
    lVar1 = plVar2[1];
    plVar2[1] = lVar1 + 1;
    if (*plVar2 == 0) {
      *plVar2 = lVar1 + 1;
      return;
    }
  }
  return;
}


// ===== 002fa4ac  FUN_002fa4ac =====

void FUN_002fa4ac(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (*(short *)(param_1[2] + 0x14) < 0) {
    puVar1 = *(undefined8 **)(param_1[2] + 8);
  }
  else {
    puVar1 = (undefined8 *)FUN_0023ce88(param_1,0x18);
  }
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*param_1;
    if ((*(ushort *)((long)puVar2 + 0x14) & 0x9000) == 0) {
      *puVar2 = *puVar1;
      *(undefined2 *)((long)puVar2 + 0x14) = 4;
    }
    else {
      FUN_0023c114();
    }
    *puVar1 = 0;
  }
  return;
}


// ===== 002fa524  FUN_002fa524 =====

void FUN_002fa524(long param_1)

{
  long lVar1;
  
  if (*(short *)(*(long *)(param_1 + 0x10) + 0x14) < 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 8);
  }
  else {
    lVar1 = FUN_0023ce88(param_1,0x18);
  }
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x10) = *(long *)(lVar1 + 0x10) + 1;
  }
  return;
}


// ===== 002fa564  FUN_002fa564 =====

void FUN_002fa564(long *param_1)

{
  long *plVar1;
  double *pdVar2;
  undefined8 *puVar3;
  ushort *puVar4;
  double dVar5;
  
  if (*(short *)(param_1[2] + 0x14) < 0) {
    plVar1 = *(long **)(param_1[2] + 8);
  }
  else {
    plVar1 = (long *)FUN_0023ce88(param_1,0x18);
  }
  if (plVar1 != (long *)0x0) {
    *plVar1 = plVar1[1];
    if (plVar1[2] < 2) {
      puVar3 = (undefined8 *)*param_1;
      puVar4 = (ushort *)((long)puVar3 + 0x14);
      if ((*puVar4 & 0x9000) != 0) {
        FUN_0022c2ec(puVar3);
      }
      *puVar3 = 0;
    }
    else {
      pdVar2 = (double *)*param_1;
      puVar4 = (ushort *)((long)pdVar2 + 0x14);
      dVar5 = (double)plVar1[1] / (double)(plVar1[2] + -1);
      if ((*puVar4 & 0x9000) == 0) {
        *puVar4 = 1;
      }
      else {
        FUN_0022c2ec(pdVar2);
      }
      if ((((ulong)dVar5 ^ 0xffffffffffffffff) & 0x7ff0000000000000) == 0 &&
          ((ulong)dVar5 & 0xfffffffffffff) != 0) {
        return;
      }
      *pdVar2 = dVar5;
    }
    *puVar4 = 8;
  }
  return;
}


// ===== 002fa64c  FUN_002fa64c =====

void FUN_002fa64c(long param_1)

{
  long lVar1;
  
  if (*(short *)(*(long *)(param_1 + 0x10) + 0x14) < 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 8);
  }
  else {
    lVar1 = FUN_0023ce88(param_1,0x18);
  }
  *(long *)(lVar1 + 8) = *(long *)(lVar1 + 8) + 1;
  return;
}


// ===== 002fa684  FUN_002fa684 =====

void FUN_002fa684(long param_1)

{
  long lVar1;
  
  if (*(short *)(*(long *)(param_1 + 0x10) + 0x14) < 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 8);
  }
  else {
    lVar1 = FUN_0023ce88(param_1,0x18);
  }
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x10) = *(long *)(lVar1 + 0x10) + 1;
  }
  return;
}


// ===== 002fa6c4  FUN_002fa6c4 =====

void FUN_002fa6c4(long *param_1)

{
  long lVar1;
  double *pdVar2;
  double dVar3;
  
  if (*(short *)(param_1[2] + 0x14) < 0) {
    lVar1 = *(long *)(param_1[2] + 8);
  }
  else {
    lVar1 = FUN_0023ce88(param_1,0);
  }
  if (lVar1 != 0) {
    pdVar2 = (double *)*param_1;
    dVar3 = (double)*(long *)(lVar1 + 8) / (double)*(long *)(lVar1 + 0x10);
    if ((*(ushort *)((long)pdVar2 + 0x14) & 0x9000) == 0) {
      *(undefined2 *)((long)pdVar2 + 0x14) = 1;
    }
    else {
      FUN_0022c2ec(pdVar2);
    }
    if ((((ulong)dVar3 ^ 0xffffffffffffffff) & 0x7ff0000000000000) != 0 ||
        ((ulong)dVar3 & 0xfffffffffffff) == 0) {
      *pdVar2 = dVar3;
      *(undefined2 *)((long)pdVar2 + 0x14) = 8;
    }
  }
  return;
}


// ===== 002fa770  FUN_002fa770 =====

void FUN_002fa770(long param_1)

{
  long lVar1;
  
  if (*(short *)(*(long *)(param_1 + 0x10) + 0x14) < 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 8);
  }
  else {
    lVar1 = FUN_0023ce88(param_1,0x18);
  }
  *(long *)(lVar1 + 8) = *(long *)(lVar1 + 8) + 1;
  return;
}


// ===== 002fa7a8  FUN_002fa7a8 =====

void FUN_002fa7a8(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  ushort uVar1;
  long *plVar2;
  long lVar3;
  
  if (*(short *)(param_1[2] + 0x14) < 0) {
    plVar2 = *(long **)(param_1[2] + 8);
  }
  else {
    plVar2 = (long *)FUN_0023ce88(param_1,0x18);
  }
  if (plVar2 == (long *)0x0) {
    return;
  }
  if (*plVar2 != 0) goto LAB_002fa888;
  param_3 = (long *)*param_3;
  uVar1 = *(ushort *)((long)param_3 + 0x14);
  if ((uVar1 & 0x24) == 0) {
    if ((uVar1 >> 3 & 1) != 0) {
      lVar3 = FUN_0022ad28(*param_3);
      goto LAB_002fa844;
    }
    if (((uVar1 & 0x12) != 0) && (param_3[1] != 0)) {
      lVar3 = FUN_0022ad58(param_3);
      goto LAB_002fa844;
    }
    plVar2[1] = 0;
  }
  else {
    lVar3 = *param_3;
LAB_002fa844:
    plVar2[1] = lVar3;
    if (0 < lVar3) goto LAB_002fa888;
  }
  *(undefined4 *)((long)param_1 + 0x24) = 1;
  FUN_0023c180(*param_1,"argument of ntile must be a positive integer",0xffffffffffffffff,1,
               0xffffffffffffffff);
LAB_002fa888:
  *plVar2 = *plVar2 + 1;
  return;
}


// ===== 002fa8a0  FUN_002fa8a0 =====

void FUN_002fa8a0(undefined8 *param_1)

{
  ushort uVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  if (*(short *)(param_1[2] + 0x14) < 0) {
    plVar3 = *(long **)(param_1[2] + 8);
  }
  else {
    plVar3 = (long *)FUN_0023ce88(param_1,0x18);
  }
  if ((plVar3 != (long *)0x0) && (lVar5 = plVar3[1], 0 < lVar5)) {
    iVar2 = 0;
    if (lVar5 != 0) {
      iVar2 = (int)(*plVar3 / lVar5);
    }
    if (iVar2 == 0) {
      plVar4 = (long *)*param_1;
      if ((*(ushort *)((long)plVar4 + 0x14) & 0x9000) != 0) goto LAB_002fa974;
      *plVar4 = plVar3[2] + 1;
      *(undefined2 *)((long)plVar4 + 0x14) = 4;
    }
    else {
      lVar6 = (long)iVar2;
      lVar7 = (long)(iVar2 + 1);
      lVar5 = *plVar3 - lVar6 * lVar5;
      lVar8 = plVar3[2];
      lVar9 = lVar5 * lVar7;
      if (lVar8 < lVar9) {
        lVar5 = 0;
        if (lVar7 != 0) {
          lVar5 = lVar8 / lVar7;
        }
        plVar4 = (long *)*param_1;
        uVar1 = *(ushort *)((long)plVar4 + 0x14);
      }
      else {
        lVar7 = 0;
        if (lVar6 != 0) {
          lVar7 = (lVar8 - lVar9) / lVar6;
        }
        plVar4 = (long *)*param_1;
        uVar1 = *(ushort *)((long)plVar4 + 0x14);
        lVar5 = lVar5 + lVar7;
      }
      if ((uVar1 & 0x9000) != 0) {
LAB_002fa974:
        FUN_0023c114(plVar4);
        return;
      }
      *plVar4 = lVar5 + 1;
      *(undefined2 *)((long)plVar4 + 0x14) = 4;
    }
  }
  return;
}


// ===== 002fa9a8  FUN_002fa9a8 =====

void FUN_002fa9a8(long param_1)

{
  long lVar1;
  
  if (*(short *)(*(long *)(param_1 + 0x10) + 0x14) < 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 8);
  }
  else {
    lVar1 = FUN_0023ce88(param_1,0x18);
  }
  *(long *)(lVar1 + 0x10) = *(long *)(lVar1 + 0x10) + 1;
  return;
}


// ===== 002fa9e0  FUN_002fa9e0 =====

void FUN_002fa9e0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  long lVar2;
  
  if (*(short *)(*(long *)(param_1 + 0x10) + 0x14) < 0) {
    plVar1 = *(long **)(*(long *)(param_1 + 0x10) + 8);
  }
  else {
    plVar1 = (long *)FUN_0023ce88(param_1,0x10);
  }
  if (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    if (lVar2 != 0) {
      if (((*(ushort *)(lVar2 + 0x14) & 0x9000) != 0) || (*(int *)(lVar2 + 0x20) != 0)) {
        FUN_0022c29c(lVar2);
      }
      FUN_0022a888(*(undefined8 *)(lVar2 + 0x18),lVar2);
    }
    lVar2 = sqlite3_value_dup(*param_3);
    *plVar1 = lVar2;
    if (lVar2 == 0) {
      sqlite3_result_error_nomem(param_1);
      return;
    }
    *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
  }
  return;
}


// ===== 002faa98  FUN_002faa98 =====

void FUN_002faa98(long param_1)

{
  long *plVar1;
  long lVar2;
  
  if (*(short *)(*(long *)(param_1 + 0x10) + 0x14) < 0) {
    plVar1 = *(long **)(*(long *)(param_1 + 0x10) + 8);
  }
  else {
    plVar1 = (long *)FUN_0023ce88(param_1,0x10);
  }
  if ((plVar1 != (long *)0x0) && (*plVar1 != 0)) {
    sqlite3_result_value(param_1);
    lVar2 = *plVar1;
    if (lVar2 != 0) {
      if (((*(ushort *)(lVar2 + 0x14) & 0x9000) != 0) || (*(int *)(lVar2 + 0x20) != 0)) {
        FUN_0022c29c(lVar2);
      }
      FUN_0022a888(*(undefined8 *)(lVar2 + 0x18),lVar2);
    }
    *plVar1 = 0;
  }
  return;
}


// ===== 002fab28  FUN_002fab28 =====

void FUN_002fab28(long param_1)

{
  long *plVar1;
  
  if (*(short *)(*(long *)(param_1 + 0x10) + 0x14) < 0) {
    plVar1 = *(long **)(*(long *)(param_1 + 0x10) + 8);
  }
  else {
    plVar1 = (long *)FUN_0023ce88(param_1,0);
  }
  if ((plVar1 != (long *)0x0) && (*plVar1 != 0)) {
    sqlite3_result_value(param_1);
    return;
  }
  return;
}


// ===== 002fab84  FUN_002fab84 =====

void FUN_002fab84(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  if (*(short *)(*(long *)(param_1 + 0x10) + 0x14) < 0) {
    plVar2 = *(long **)(*(long *)(param_1 + 0x10) + 8);
  }
  else {
    plVar2 = (long *)FUN_0023ce88(param_1,0x10);
  }
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    lVar3 = *plVar2;
    if (lVar3 != 0) {
      if (((*(ushort *)(lVar3 + 0x14) & 0x9000) != 0) || (*(int *)(lVar3 + 0x20) != 0)) {
        FUN_0022c29c(lVar3);
      }
      FUN_0022a888(*(undefined8 *)(lVar3 + 0x18),lVar3);
    }
    *plVar2 = 0;
  }
  return;
}


// ===== 002fac10  FUN_002fac10 =====

void FUN_002fac10(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  ushort uVar1;
  char cVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  double *pdVar6;
  long lVar7;
  double dVar8;
  
  if (*(short *)(param_1[2] + 0x14) < 0) {
    plVar3 = *(long **)(param_1[2] + 8);
  }
  else {
    plVar3 = (long *)FUN_0023ce88(param_1,0x10);
  }
  if (plVar3 != (long *)0x0) {
    cVar2 = sqlite3_value_numeric_type(param_3[1]);
    if (cVar2 == '\x02') {
      pdVar6 = (double *)param_3[1];
      uVar1 = *(ushort *)((long)pdVar6 + 0x14);
      if ((uVar1 >> 3 & 1) == 0) {
        if ((uVar1 & 0x24) == 0) {
          if ((uVar1 & 0x12) == 0) {
            dVar8 = 0.0;
          }
          else {
            dVar8 = (double)FUN_0022adb8();
          }
        }
        else {
          dVar8 = (double)(long)*pdVar6;
        }
      }
      else {
        dVar8 = *pdVar6;
      }
      if (dVar8 != (double)(long)dVar8) goto LAB_002fad30;
      lVar5 = (long)dVar8;
    }
    else {
      if (cVar2 != '\x01') goto LAB_002fad30;
      plVar4 = (long *)param_3[1];
      uVar1 = *(ushort *)((long)plVar4 + 0x14);
      if ((uVar1 & 0x24) == 0) {
        if ((uVar1 >> 3 & 1) == 0) {
          if (((uVar1 & 0x12) == 0) || (plVar4[1] == 0)) goto LAB_002fad30;
          lVar5 = FUN_0022ad58();
        }
        else {
          lVar5 = FUN_0022ad28(*plVar4);
        }
      }
      else {
        lVar5 = *plVar4;
      }
    }
    if (lVar5 < 1) {
LAB_002fad30:
      *(undefined4 *)((long)param_1 + 0x24) = 1;
      FUN_0023c180(*param_1,"second argument to nth_value must be a positive integer",
                   0xffffffffffffffff,1,0xffffffffffffffff);
      return;
    }
    lVar7 = *plVar3;
    *plVar3 = lVar7 + 1;
    if (lVar5 == lVar7 + 1) {
      lVar5 = sqlite3_value_dup(*param_3);
      plVar3[1] = lVar5;
      if (lVar5 == 0) {
        sqlite3_result_error_nomem(param_1);
        return;
      }
    }
  }
  return;
}


// ===== 002fad90  FUN_002fad90 =====

void FUN_002fad90(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(short *)(*(long *)(param_1 + 0x10) + 0x14) < 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 8);
  }
  else {
    lVar1 = FUN_0023ce88(param_1,0);
  }
  if ((lVar1 != 0) && (*(long *)(lVar1 + 8) != 0)) {
    sqlite3_result_value(param_1);
    lVar2 = *(long *)(lVar1 + 8);
    if (lVar2 != 0) {
      if (((*(ushort *)(lVar2 + 0x14) & 0x9000) != 0) || (*(int *)(lVar2 + 0x20) != 0)) {
        FUN_0022c29c(lVar2);
      }
      FUN_0022a888(*(undefined8 *)(lVar2 + 0x18),lVar2);
    }
    *(undefined8 *)(lVar1 + 8) = 0;
  }
  return;
}


// ===== 002fae20  FUN_002fae20 =====

void FUN_002fae20(void)

{
  return;
}


// ===== 002fae24  FUN_002fae24 =====

void FUN_002fae24(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  
  if (*(short *)(*(long *)(param_1 + 0x10) + 0x14) < 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 8);
  }
  else {
    lVar1 = FUN_0023ce88(param_1,0x10);
  }
  if ((lVar1 != 0) && (*(long *)(lVar1 + 8) == 0)) {
    lVar2 = sqlite3_value_dup(*param_3);
    *(long *)(lVar1 + 8) = lVar2;
    if (lVar2 == 0) {
      sqlite3_result_error_nomem(param_1);
      return;
    }
  }
  return;
}


// ===== 002faea4  FUN_002faea4 =====

void FUN_002faea4(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(short *)(*(long *)(param_1 + 0x10) + 0x14) < 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 8);
  }
  else {
    lVar1 = FUN_0023ce88(param_1,0x10);
  }
  if ((lVar1 != 0) && (*(long *)(lVar1 + 8) != 0)) {
    sqlite3_result_value(param_1);
    lVar2 = *(long *)(lVar1 + 8);
    if (lVar2 != 0) {
      if (((*(ushort *)(lVar2 + 0x14) & 0x9000) != 0) || (*(int *)(lVar2 + 0x20) != 0)) {
        FUN_0022c29c(lVar2);
      }
      FUN_0022a888(*(undefined8 *)(lVar2 + 0x18),lVar2);
    }
    *(undefined8 *)(lVar1 + 8) = 0;
  }
  return;
}


// ===== 002faf34  FUN_002faf34 =====

void FUN_002faf34(long *param_1,undefined8 param_2,long *param_3)

{
  byte bVar1;
  ushort uVar2;
  long lVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  uint *puVar9;
  undefined8 *puVar10;
  ulong *puVar11;
  undefined8 *puVar12;
  char *pcVar13;
  byte *pbVar14;
  undefined8 uVar15;
  long **pplVar16;
  int iVar17;
  byte *pbVar18;
  long lVar19;
  int *piVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  long *plVar24;
  long lVar25;
  ulong uVar26;
  long *plVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  byte *pbVar31;
  undefined8 uVar32;
  undefined8 local_268;
  undefined1 *local_260;
  code *pcStack_258;
  code *local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  long **pplStack_238;
  long *local_230;
  long lStack_228;
  undefined8 *local_220;
  undefined8 uStack_218;
  undefined1 auStack_210 [8];
  long local_208;
  uint local_1f8;
  undefined8 *local_160;
  undefined8 *local_b8;
  long local_b0;
  long local_a8;
  long *local_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  lVar8 = *param_3;
  lVar25 = *(long *)(*param_1 + 0x18);
  if (lVar8 == 0) {
LAB_002fafc0:
    lVar29 = 0;
    lVar8 = param_3[3];
    if (lVar8 != 0) goto LAB_002fafcc;
LAB_002fb014:
    uVar32 = 0;
    lVar8 = param_3[4];
joined_r0x002faff0:
    if (lVar8 == 0) goto LAB_002fb058;
LAB_002fb020:
    if ((((*(ushort *)(lVar8 + 0x14) ^ 0xffff) & 0x202) == 0) && (*(char *)(lVar8 + 0x16) == '\x01')
       ) {
      pbVar31 = *(byte **)(lVar8 + 8);
    }
    else {
      if ((*(ushort *)(lVar8 + 0x14) & 1) != 0) goto LAB_002fb058;
      pbVar31 = (byte *)FUN_0022ae18(lVar8,1);
    }
  }
  else {
    if ((((*(ushort *)(lVar8 + 0x14) ^ 0xffff) & 0x202) == 0) && (*(char *)(lVar8 + 0x16) == '\x01')
       ) {
      lVar29 = *(long *)(lVar8 + 8);
      lVar8 = param_3[3];
    }
    else {
      if ((*(ushort *)(lVar8 + 0x14) & 1) != 0) goto LAB_002fafc0;
      lVar29 = FUN_0022ae18(lVar8,1);
      lVar8 = param_3[3];
    }
    if (lVar8 == 0) goto LAB_002fb014;
LAB_002fafcc:
    if ((((*(ushort *)(lVar8 + 0x14) ^ 0xffff) & 0x202) == 0) && (*(char *)(lVar8 + 0x16) == '\x01')
       ) {
      uVar32 = *(undefined8 *)(lVar8 + 8);
      lVar8 = param_3[4];
      goto joined_r0x002faff0;
    }
    if ((*(ushort *)(lVar8 + 0x14) & 1) != 0) goto LAB_002fb014;
    uVar32 = FUN_0022ae18(lVar8,1);
    lVar8 = param_3[4];
    if (lVar8 != 0) goto LAB_002fb020;
LAB_002fb058:
    pbVar31 = (byte *)0x0;
  }
  puVar9 = (uint *)param_3[5];
  uVar2 = (ushort)puVar9[5];
  if ((uVar2 & 0x24) == 0) {
    if ((uVar2 >> 3 & 1) == 0) {
      if (((uVar2 & 0x12) != 0) && (*(long *)(puVar9 + 2) != 0)) {
        uVar5 = FUN_0022ad58();
        goto LAB_002fb0a8;
      }
      uVar5 = 0;
      lVar8 = param_3[6];
    }
    else {
      uVar5 = FUN_0022ad28(*(undefined8 *)puVar9);
LAB_002fb0a8:
      lVar8 = param_3[6];
    }
    if (lVar8 != 0) goto LAB_002fb0c4;
LAB_002fb0fc:
    lVar8 = 0;
  }
  else {
    uVar5 = *puVar9;
    lVar8 = param_3[6];
    if (lVar8 == 0) goto LAB_002fb0fc;
LAB_002fb0c4:
    if ((((*(ushort *)(lVar8 + 0x14) ^ 0xffff) & 0x202) == 0) && (*(char *)(lVar8 + 0x16) == '\x01')
       ) {
      lVar8 = *(long *)(lVar8 + 8);
    }
    else {
      if ((*(ushort *)(lVar8 + 0x14) & 1) != 0) goto LAB_002fb0fc;
      lVar8 = FUN_0022ae18(lVar8,1);
    }
  }
  puVar10 = (undefined8 *)param_3[7];
  uVar2 = *(ushort *)((long)puVar10 + 0x14);
  if ((uVar2 & 0x24) == 0) {
    if ((uVar2 >> 3 & 1) == 0) {
      if (((uVar2 & 0x12) == 0) || (puVar10[1] == 0)) {
        local_268 = 0;
      }
      else {
        local_268 = FUN_0022ad58();
      }
    }
    else {
      local_268 = FUN_0022ad28(*puVar10);
    }
  }
  else {
    local_268 = *puVar10;
  }
  puVar11 = (ulong *)param_3[8];
  uVar2 = *(ushort *)((long)puVar11 + 0x14);
  if ((uVar2 & 0x24) == 0) {
    if ((uVar2 >> 3 & 1) == 0) {
      if (((uVar2 & 0x12) == 0) || (puVar11[1] == 0)) {
        uVar26 = 0;
      }
      else {
        uVar26 = FUN_0022ad58();
      }
    }
    else {
      uVar26 = FUN_0022ad28(*puVar11);
    }
  }
  else {
    uVar26 = *puVar11;
  }
  if ((((lVar29 != 0) && (pbVar31 != (byte *)0x0)) && (lVar8 != 0)) && (-1 < (int)uVar5)) {
    uVar15 = *(undefined8 *)(lVar25 + 0x1f8);
    if (*(char *)(lVar25 + 0x6f) == '\0') {
      FUN_0022d2b8(lVar25);
    }
    puVar10 = (undefined8 *)FUN_0028c0b8(lVar25,pbVar31,uVar32);
    if ((puVar10 == (undefined8 *)0x0) || ((int)*(short *)((long)puVar10 + 0x36) <= (int)uVar5)) {
      if (*(char *)(lVar25 + 0x6f) == '\0') {
        if (*(long *)(lVar3 + 0x28) == local_70) {
          FUN_0022d348(lVar25);
          return;
        }
        goto LAB_002fbb08;
      }
    }
    else {
      lVar30 = *(long *)(puVar10[1] + (ulong)uVar5 * 0x10);
      uVar6 = uVar5;
      if (uVar5 == (int)*(short *)((long)puVar10 + 0x34)) {
        uVar6 = 0xffffffff;
      }
      local_230 = (long *)0x0;
      uStack_218 = 0;
      local_220 = (undefined8 *)0x0;
      lStack_228 = (ulong)uVar6 << 0x20;
      *(undefined8 *)(lVar25 + 0x1f8) = 0;
      uVar6 = FUN_002fcfd0(auStack_210,uVar32,lVar25,lVar29,uVar26 & 0xffffffff);
      pcStack_258 = FUN_002fe25c;
      local_250 = FUN_002fd428;
      uStack_248 = 0;
      pplStack_238 = &local_230;
      local_240 = 0;
      local_260 = auStack_210;
      local_220 = puVar10;
      if (uVar6 == 0) {
        if (local_b8 == (undefined8 *)0x0) {
          if (local_b0 == 0) {
            uVar6 = FUN_002fd45c(auStack_210);
            if (uVar6 != 0) goto LAB_002fb9a4;
            lVar19 = *(long *)(local_a8 + 0x38);
            if (lVar19 != 0) {
              do {
                if ((*(long *)(lVar19 + 0x18) != 0) &&
                   (puVar12 = (undefined8 *)
                              FUN_0028a230(auStack_210,0,*(long *)(lVar19 + 0x18),uVar32),
                   puVar12 == puVar10)) {
                  if (*(long *)(lVar19 + 0x40) != 0) {
                    FUN_002fe364(auStack_210,&local_230,
                                 *(undefined8 *)(*(long *)(lVar19 + 0x40) + 0x10),lVar30);
                  }
                  puVar9 = *(uint **)(lVar19 + 0x38);
                  if ((puVar9 != (uint *)0x0) && (uVar5 = *puVar9, 0 < (int)uVar5)) {
                    uVar26 = 0;
                    plVar27 = local_230;
                    iVar17 = (int)lStack_228;
LAB_002fb4b4:
                    if ((lVar30 != 0) && (lVar28 = *(long *)(puVar9 + uVar26 * 4 + 2), lVar28 != 0))
                    {
                      lVar23 = 0;
                      do {
                        bVar1 = *(byte *)(lVar28 + lVar23);
                        if (bVar1 == *(byte *)(lVar30 + lVar23)) {
                          if (bVar1 == 0) goto code_r0x002fb4f4;
                        }
                        else if ((&DAT_0017d228)[bVar1] !=
                                 (&DAT_0017d228)[*(byte *)(lVar30 + lVar23)]) break;
                        lVar23 = lVar23 + 1;
                      } while( true );
                    }
                    goto LAB_002fb4a8;
                  }
LAB_002fb528:
                  puVar9 = *(uint **)(lVar19 + 0x30);
                  if ((puVar9 != (uint *)0x0) && (uVar5 = *puVar9, 0 < (int)uVar5)) {
                    uVar26 = 0;
                    plVar27 = local_230;
                    iVar17 = (int)lStack_228;
LAB_002fb578:
                    if ((lVar30 != 0) &&
                       (lVar28 = *(long *)(puVar9 + uVar26 * 6 + 4),
                       (*(ushort *)((long)puVar9 + uVar26 * 0x18 + 0x19) & 3) == 0 && lVar28 != 0))
                    {
                      lVar23 = 0;
                      do {
                        bVar1 = *(byte *)(lVar28 + lVar23);
                        if (bVar1 == *(byte *)(lVar30 + lVar23)) {
                          if (bVar1 == 0) goto code_r0x002fb5c8;
                        }
                        else if ((&DAT_0017d228)[bVar1] !=
                                 (&DAT_0017d228)[*(byte *)(lVar30 + lVar23)]) break;
                        lVar23 = lVar23 + 1;
                      } while( true );
                    }
                    goto LAB_002fb56c;
                  }
                }
LAB_002fb420:
                lVar19 = *(long *)(lVar19 + 0x50);
              } while (lVar19 != 0);
            }
            if (local_160 == puVar10) {
              FUN_002fe448(auStack_210,&local_230,*(undefined8 *)(local_a8 + 0x20),lVar30);
            }
            FUN_002fd900(&local_260,local_a8);
          }
          else {
            FUN_002897e8(&local_260,*(undefined8 *)(local_b0 + 0x50));
            if (*(long *)(local_b0 + 0x48) != 0) {
              FUN_0027e9d8(&local_260);
            }
          }
        }
        else {
          if (*(char *)((long)local_b8 + 0x3f) == '\0') {
            pbVar14 = (byte *)*local_b8;
            pbVar18 = pbVar31;
            if (pbVar14 != (byte *)0x0) {
              do {
                bVar1 = *pbVar18;
                if (bVar1 == *pbVar14) {
                  if (bVar1 == 0) goto code_r0x002fb394;
                }
                else if ((&DAT_0017d228)[bVar1] != (&DAT_0017d228)[*pbVar14]) break;
                pbVar14 = pbVar14 + 1;
                pbVar18 = pbVar18 + 1;
              } while( true );
            }
            bVar4 = false;
            local_220 = local_b8;
            goto LAB_002fb81c;
          }
          if (*(char *)((long)local_b8 + 0x3f) == '\x02') {
            lVar30 = local_b8[8];
            local_1f8 = 0;
            *(uint *)(lVar30 + 4) = *(uint *)(lVar30 + 4) & 0xffdfffff;
            FUN_0027f1ac(auStack_210,lVar30,0);
            uVar6 = local_1f8;
            if (*(char *)(lVar25 + 0x67) != '\0') {
              uVar6 = 7;
            }
            if (uVar6 != 0) goto LAB_002fb9a4;
            FUN_0027f2c8(&local_260,lVar30);
          }
        }
LAB_002fb994:
        uVar6 = FUN_002fdab0(param_1,&local_230,lVar29,lVar8,local_268);
      }
LAB_002fb9a4:
      if (uVar6 != 0) {
        if ((uVar6 == 1) && ((*(ulong *)(lVar25 + 0x30) & 0x10000001) == 1)) {
          sqlite3_result_value(param_1,*param_3);
        }
        else if (local_208 == 0) {
          *(uint *)((long)param_1 + 0x24) = uVar6;
          if ((*(ushort *)(*param_1 + 0x14) & 1) != 0) {
            if (uVar6 == 0x204) {
              pcVar13 = "abort due to ROLLBACK";
            }
            else if (uVar6 == 0x65) {
              pcVar13 = "no more rows available";
            }
            else if (uVar6 == 100) {
              pcVar13 = "another row available";
            }
            else {
              uVar6 = uVar6 & 0xff;
              if ((uVar6 < 0x1d) && ((0x1410004U >> ((ulong)uVar6 & 0x3f) & 1) == 0)) {
                pcVar13 = (&PTR_s_not_an_error_0030cfd8)[uVar6];
              }
              else {
                pcVar13 = "unknown error";
              }
            }
            FUN_0023d018(param_1,pcVar13,0xffffffff,1,0);
          }
        }
        else {
          FUN_002fdf98(param_1,&DAT_0016f7d1,param_3[1],param_3[2],auStack_210);
        }
      }
      FUN_002fdee0(auStack_210);
      plVar27 = local_230;
      while (plVar27 != (long *)0x0) {
        plVar27 = (long *)plVar27[3];
        FUN_0022a888(lVar25);
      }
      *(undefined8 *)(lVar25 + 0x1f8) = uVar15;
      if (*(char *)(lVar25 + 0x6f) == '\0') {
        FUN_0022d348(lVar25);
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
LAB_002fbb08:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x002fb4f4:
  if (local_78 != (long *)0x0) {
    plVar24 = local_78;
    pplVar16 = &local_78;
    if (*local_78 != lVar28) {
      do {
        plVar22 = plVar24;
        plVar24 = (long *)plVar22[3];
        if (plVar24 == (long *)0x0) goto LAB_002fb4a8;
      } while (*plVar24 != lVar28);
      pplVar16 = (long **)(plVar22 + 3);
    }
    iVar17 = iVar17 + 1;
    lStack_228 = CONCAT44(lStack_228._4_4_,iVar17);
    *pplVar16 = (long *)plVar24[3];
    plVar24[3] = (long)plVar27;
    plVar27 = plVar24;
    local_230 = plVar24;
  }
LAB_002fb4a8:
  uVar26 = uVar26 + 1;
  if (uVar26 == uVar5) goto LAB_002fb528;
  goto LAB_002fb4b4;
code_r0x002fb5c8:
  if (local_78 != (long *)0x0) {
    plVar24 = local_78;
    pplVar16 = &local_78;
    if (*local_78 != lVar28) {
      do {
        plVar22 = plVar24;
        plVar24 = (long *)plVar22[3];
        if (plVar24 == (long *)0x0) goto LAB_002fb56c;
      } while (*plVar24 != lVar28);
      pplVar16 = (long **)(plVar22 + 3);
    }
    iVar17 = iVar17 + 1;
    lStack_228 = CONCAT44(lStack_228._4_4_,iVar17);
    *pplVar16 = (long *)plVar24[3];
    plVar24[3] = (long)plVar27;
    plVar27 = plVar24;
    local_230 = plVar24;
  }
LAB_002fb56c:
  uVar26 = uVar26 + 1;
  if (uVar26 == uVar5) goto LAB_002fb420;
  goto LAB_002fb578;
code_r0x002fb394:
  local_220 = local_b8;
  if ((((int)uVar5 < (int)*(short *)((long)local_b8 + 0x36)) &&
      (lVar19 = *(long *)(local_b8[1] + (ulong)uVar5 * 0x10), lVar19 != 0)) &&
     (local_78 != (long *)0x0)) {
    plVar27 = local_78;
    if (*local_78 == lVar19) {
      pplVar16 = &local_78;
    }
    else {
      do {
        plVar24 = plVar27;
        plVar27 = (long *)plVar24[3];
        if (plVar27 == (long *)0x0) goto LAB_002fb664;
      } while (*plVar27 != lVar19);
      pplVar16 = (long **)(plVar24 + 3);
    }
    *pplVar16 = (long *)plVar27[3];
    plVar27[3] = (long)local_230;
    lStack_228 = CONCAT44(lStack_228._4_4_,(int)lStack_228 + 1);
    local_230 = plVar27;
  }
LAB_002fb664:
  if ((lStack_228 < 0) && (local_78 != (long *)0x0)) {
    plVar27 = local_78;
    if (*local_78 == (long)local_b8 + 0x34) {
      pplVar16 = &local_78;
    }
    else {
      do {
        plVar24 = plVar27;
        plVar27 = (long *)plVar24[3];
        if (plVar27 == (long *)0x0) goto LAB_002fb6d0;
      } while (*plVar27 != (long)local_b8 + 0x34);
      pplVar16 = (long **)(plVar24 + 3);
    }
    *pplVar16 = (long *)plVar27[3];
    plVar27[3] = (long)local_230;
    lStack_228 = CONCAT44(lStack_228._4_4_,(int)lStack_228 + 1);
    local_230 = plVar27;
  }
LAB_002fb6d0:
  FUN_002897e8(&local_260,local_b8[4]);
  for (lVar19 = local_b8[2]; puVar10 = local_b8, lVar28 = local_b0, lVar19 != 0;
      lVar19 = *(long *)(lVar19 + 0x28)) {
    piVar20 = *(int **)(lVar19 + 0x50);
    if ((piVar20 != (int *)0x0) && (iVar17 = *piVar20, 0 < iVar17)) {
      plVar27 = (long *)(piVar20 + 2);
      for (; ((*plVar27 == 0 || (iVar7 = FUN_0027e9d8(&local_260), iVar7 == 0)) && (1 < iVar17));
          iVar17 = iVar17 + -1) {
        plVar27 = plVar27 + 3;
      }
    }
  }
  for (; local_b8 = puVar10, lVar28 != 0; lVar28 = *(long *)(lVar28 + 0x28)) {
    piVar20 = *(int **)(lVar28 + 0x50);
    if ((piVar20 != (int *)0x0) && (iVar17 = *piVar20, 0 < iVar17)) {
      plVar27 = (long *)(piVar20 + 2);
      for (; ((*plVar27 == 0 || (iVar7 = FUN_0027e9d8(&local_260), iVar7 == 0)) && (1 < iVar17));
          iVar17 = iVar17 + -1) {
        plVar27 = plVar27 + 3;
      }
    }
    puVar10 = local_b8;
  }
  if (0 < *(short *)((long)puVar10 + 0x36)) {
    lVar19 = 0;
    lVar28 = 0xc;
    do {
      uVar2 = *(ushort *)(puVar10[1] + lVar28);
      if ((((uVar2 != 0) && (*(char *)((long)puVar10 + 0x3f) == '\0')) &&
          (piVar20 = (int *)puVar10[10], piVar20 != (int *)0x0)) &&
         (((int)(uint)uVar2 <= *piVar20 && (*(long *)(piVar20 + (ulong)(uVar2 - 1) * 6 + 2) != 0))))
      {
        FUN_0027e9d8(&local_260);
        puVar10 = local_b8;
      }
      lVar19 = lVar19 + 1;
      lVar28 = lVar28 + 0x10;
    } while (lVar19 < *(short *)((long)puVar10 + 0x36));
  }
  bVar4 = true;
  local_b8 = puVar10;
LAB_002fb81c:
  lVar19 = local_b8[9];
  if (lVar19 != 0) {
    plVar27 = local_230;
    iVar17 = (int)lStack_228;
    do {
      uVar6 = *(uint *)(lVar19 + 0x28);
      if (0 < (int)uVar6) {
        uVar26 = 0;
        plVar24 = plVar27;
LAB_002fb880:
        plVar27 = plVar24;
        if (((bVar4) && (puVar9 = (uint *)(lVar19 + uVar26 * 0x10 + 0x40), *puVar9 == uVar5)) &&
           (local_78 != (long *)0x0)) {
          plVar22 = local_78;
          plVar27 = local_78;
          pplVar16 = &local_78;
          if ((uint *)*local_78 != puVar9) {
            do {
              plVar21 = plVar22;
              plVar22 = (long *)plVar21[3];
              plVar27 = plVar24;
              if (plVar22 == (long *)0x0) goto LAB_002fb8e4;
            } while ((uint *)*plVar22 != puVar9);
            pplVar16 = (long **)(plVar21 + 3);
            plVar27 = plVar22;
          }
          iVar17 = iVar17 + 1;
          lStack_228 = CONCAT44(lStack_228._4_4_,iVar17);
          *pplVar16 = (long *)plVar27[3];
          plVar27[3] = (long)plVar24;
          local_230 = plVar27;
        }
LAB_002fb8e4:
        pbVar14 = *(byte **)(lVar19 + 0x10);
        pbVar18 = pbVar31;
        if (pbVar14 != (byte *)0x0) {
          do {
            bVar1 = *pbVar14;
            if (bVar1 == *pbVar18) {
              if (bVar1 == 0) goto code_r0x002fb920;
            }
            else if ((&DAT_0017d228)[bVar1] != (&DAT_0017d228)[*pbVar18]) break;
            pbVar14 = pbVar14 + 1;
            pbVar18 = pbVar18 + 1;
          } while( true );
        }
        goto LAB_002fb874;
      }
LAB_002fb838:
      lVar19 = *(long *)(lVar19 + 8);
    } while (lVar19 != 0);
  }
  goto LAB_002fb994;
code_r0x002fb920:
  lVar28 = *(long *)(lVar19 + uVar26 * 0x10 + 0x48);
  if ((lVar28 != 0) && (lVar30 != 0)) {
    lVar23 = 0;
    do {
      bVar1 = *(byte *)(lVar28 + lVar23);
      if (bVar1 == *(byte *)(lVar30 + lVar23)) {
        if (bVar1 == 0) goto code_r0x002fb960;
      }
      else if ((&DAT_0017d228)[bVar1] != (&DAT_0017d228)[*(byte *)(lVar30 + lVar23)]) break;
      lVar23 = lVar23 + 1;
    } while( true );
  }
  goto LAB_002fb874;
code_r0x002fb960:
  if (local_78 != (long *)0x0) {
    plVar24 = local_78;
    pplVar16 = &local_78;
    if (*local_78 != lVar28) {
      do {
        plVar22 = plVar24;
        plVar24 = (long *)plVar22[3];
        if (plVar24 == (long *)0x0) goto LAB_002fb874;
      } while (*plVar24 != lVar28);
      pplVar16 = (long **)(plVar22 + 3);
    }
    iVar17 = iVar17 + 1;
    lStack_228 = CONCAT44(lStack_228._4_4_,iVar17);
    *pplVar16 = (long *)plVar24[3];
    plVar24[3] = (long)plVar27;
    plVar27 = plVar24;
    local_230 = plVar24;
  }
LAB_002fb874:
  uVar26 = uVar26 + 1;
  plVar24 = plVar27;
  if (uVar26 == uVar6) goto LAB_002fb838;
  goto LAB_002fb880;
}


// ===== 002fbb0c  FUN_002fbb0c =====

void FUN_002fbb0c(long *param_1,undefined8 param_2,long *param_3)

{
  byte bVar1;
  ushort uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong *puVar8;
  long lVar9;
  long *plVar10;
  long **pplVar11;
  char *pcVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  int *piVar18;
  int iVar19;
  long lVar20;
  long *plVar21;
  undefined8 uVar22;
  ulong uVar23;
  undefined8 uVar24;
  undefined1 *local_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined1 *local_260;
  code *pcStack_258;
  code *local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  long **pplStack_238;
  long *local_230;
  undefined8 uStack_228;
  long *local_220;
  undefined8 uStack_218;
  undefined1 auStack_210 [8];
  long local_208;
  uint local_1f8;
  int local_1e0;
  long *local_b8;
  long *local_b0;
  long local_a8;
  long *local_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  lVar5 = *param_3;
  lVar20 = *(long *)(*param_1 + 0x18);
  if (lVar5 == 0) {
LAB_002fbb98:
    uVar22 = 0;
    lVar5 = param_3[3];
    if (lVar5 != 0) goto LAB_002fbba4;
LAB_002fbbec:
    lVar5 = 0;
    lVar6 = param_3[4];
joined_r0x002fbbc8:
    if (lVar6 == 0) goto LAB_002fbc40;
LAB_002fbbf8:
    if ((((*(ushort *)(lVar6 + 0x14) ^ 0xffff) & 0x202) == 0) && (*(char *)(lVar6 + 0x16) == '\x01')
       ) {
      lVar6 = *(long *)(lVar6 + 8);
      lVar7 = param_3[5];
      goto joined_r0x002fbc1c;
    }
    if ((*(ushort *)(lVar6 + 0x14) & 1) != 0) goto LAB_002fbc40;
    lVar6 = FUN_0022ae18(lVar6,1);
    lVar7 = param_3[5];
    if (lVar7 != 0) goto LAB_002fbc4c;
LAB_002fbc84:
    lVar7 = 0;
  }
  else {
    if ((((*(ushort *)(lVar5 + 0x14) ^ 0xffff) & 0x202) == 0) && (*(char *)(lVar5 + 0x16) == '\x01')
       ) {
      uVar22 = *(undefined8 *)(lVar5 + 8);
      lVar5 = param_3[3];
    }
    else {
      if ((*(ushort *)(lVar5 + 0x14) & 1) != 0) goto LAB_002fbb98;
      uVar22 = FUN_0022ae18(lVar5,1);
      lVar5 = param_3[3];
    }
    if (lVar5 == 0) goto LAB_002fbbec;
LAB_002fbba4:
    if ((((*(ushort *)(lVar5 + 0x14) ^ 0xffff) & 0x202) == 0) && (*(char *)(lVar5 + 0x16) == '\x01')
       ) {
      lVar5 = *(long *)(lVar5 + 8);
      lVar6 = param_3[4];
      goto joined_r0x002fbbc8;
    }
    if ((*(ushort *)(lVar5 + 0x14) & 1) != 0) goto LAB_002fbbec;
    lVar5 = FUN_0022ae18(lVar5,1);
    lVar6 = param_3[4];
    if (lVar6 != 0) goto LAB_002fbbf8;
LAB_002fbc40:
    lVar6 = 0;
    lVar7 = param_3[5];
joined_r0x002fbc1c:
    if (lVar7 == 0) goto LAB_002fbc84;
LAB_002fbc4c:
    if ((((*(ushort *)(lVar7 + 0x14) ^ 0xffff) & 0x202) == 0) && (*(char *)(lVar7 + 0x16) == '\x01')
       ) {
      lVar7 = *(long *)(lVar7 + 8);
    }
    else {
      if ((*(ushort *)(lVar7 + 0x14) & 1) != 0) goto LAB_002fbc84;
      lVar7 = FUN_0022ae18(lVar7,1);
    }
  }
  puVar8 = (ulong *)param_3[6];
  uVar2 = *(ushort *)((long)puVar8 + 0x14);
  if ((uVar2 & 0x24) == 0) {
    if ((uVar2 >> 3 & 1) == 0) {
      if (((uVar2 & 0x12) == 0) || (puVar8[1] == 0)) {
        uVar23 = 0;
      }
      else {
        uVar23 = FUN_0022ad58();
      }
    }
    else {
      uVar23 = FUN_0022ad28(*puVar8);
    }
  }
  else {
    uVar23 = *puVar8;
  }
  if (((lVar5 == 0) || (lVar6 == 0)) || (lVar7 == 0)) goto LAB_002fc368;
  uVar24 = *(undefined8 *)(lVar20 + 0x1f8);
  *(undefined8 *)(lVar20 + 0x1f8) = 0;
  if (*(char *)(lVar20 + 0x6f) == '\0') {
    FUN_0022d2b8(lVar20);
  }
  uStack_228 = 0;
  local_230 = (long *)0x0;
  uStack_218 = 0;
  local_220 = (long *)0x0;
  local_220 = (long *)FUN_0028c0b8(lVar20,lVar6,uVar22);
  local_260 = auStack_210;
  pcStack_258 = FUN_002fe0d4;
  local_250 = FUN_002fe170;
  uStack_248 = 0;
  pplStack_238 = &local_230;
  local_240 = 0;
  uVar4 = FUN_002fcfd0(auStack_210,uVar22,lVar20,lVar5,uVar23 & 0xffffffff);
  if (uVar4 != 0) goto LAB_002fc248;
  uVar4 = (uint)*(ulong *)(lVar20 + 0x30);
  if (local_b8 == (long *)0x0) {
    if (local_b0 == (long *)0x0) {
      lVar13 = *(long *)(local_a8 + 8);
      if (lVar13 != 0) {
        lVar15 = 0;
        do {
          bVar1 = *(byte *)(lVar13 + lVar15);
          if (bVar1 == *(byte *)(lVar6 + lVar15)) {
            if (bVar1 == 0) goto code_r0x002fbfac;
          }
          else if ((&DAT_0017d228)[bVar1] != (&DAT_0017d228)[*(byte *)(lVar6 + lVar15)]) break;
          lVar15 = lVar15 + 1;
        } while( true );
      }
      goto LAB_002fc09c;
    }
    lVar6 = *local_b0;
    if ((lVar6 != 0) && (local_78 != (long *)0x0)) {
      if (*local_78 == lVar6) {
        pplVar11 = &local_78;
        plVar21 = local_78;
      }
      else {
        do {
          plVar21 = local_78;
          local_78 = (long *)plVar21[3];
          if (local_78 == (long *)0x0) goto LAB_002fc02c;
        } while (*local_78 != lVar6);
        pplVar11 = (long **)(plVar21 + 3);
        plVar21 = local_78;
      }
      *pplVar11 = (long *)plVar21[3];
      plVar21[3] = (long)local_230;
      uStack_228 = CONCAT44(uStack_228._4_4_,(int)uStack_228 + 1);
      local_230 = plVar21;
    }
LAB_002fc02c:
    if (((uVar4 >> 0x1a & 1) == 0) && (local_b0[9] != 0)) {
      FUN_0027e9d8(&local_260);
    }
  }
  else if (*(char *)((long)local_b8 + 0x3f) == '\x02') {
    if ((uVar4 >> 0x1a & 1) == 0) {
      uStack_278 = 0;
      local_280 = 0;
      uStack_268 = 0;
      uStack_270 = 0;
      uStack_288 = 0;
      local_290 = 0;
      *(uint *)(local_b8[8] + 4) = *(uint *)(local_b8[8] + 4) & 0xffdfffff;
      local_298 = auStack_210;
      FUN_0027f1ac(auStack_210,local_b8[8],&local_298);
      if (local_1e0 == 0) {
        FUN_0027f2c8(&local_260,local_b8[8]);
      }
      else {
        uVar4 = local_1f8;
        if (local_1f8 != 0) goto LAB_002fc248;
      }
    }
  }
  else {
    if (((((uint)((*(ulong *)(lVar20 + 0x30) & 0x4000) == 0) & uVar4 >> 0x1a) == 0) &&
        (*(char *)((long)local_b8 + 0x3f) != '\x01')) && (lVar13 = local_b8[9], lVar13 != 0)) {
      plVar21 = local_230;
      iVar14 = (int)uStack_228;
LAB_002fbe6c:
      lVar15 = *(long *)(lVar13 + 0x10);
      if (lVar15 != 0) {
        lVar16 = 0;
        do {
          bVar1 = *(byte *)(lVar15 + lVar16);
          if (bVar1 == *(byte *)(lVar6 + lVar16)) {
            if (bVar1 == 0) goto code_r0x002fbea4;
          }
          else if ((&DAT_0017d228)[bVar1] != (&DAT_0017d228)[*(byte *)(lVar6 + lVar16)]) break;
          lVar16 = lVar16 + 1;
        } while( true );
      }
      goto LAB_002fbe64;
    }
LAB_002fbed8:
    lVar13 = *local_b8;
    if (lVar13 != 0) {
      lVar15 = 0;
      do {
        bVar1 = *(byte *)(lVar6 + lVar15);
        if (bVar1 == *(byte *)(lVar13 + lVar15)) {
          if (bVar1 == 0) goto code_r0x002fbf18;
        }
        else if ((&DAT_0017d228)[bVar1] != (&DAT_0017d228)[*(byte *)(lVar13 + lVar15)]) break;
        lVar15 = lVar15 + 1;
      } while( true );
    }
  }
  goto LAB_002fc230;
code_r0x002fbfac:
  if ((local_220[0xc] == *(long *)(local_a8 + 0x30)) && (local_78 != (long *)0x0)) {
    plVar21 = local_78;
    if (*local_78 == lVar13) {
      pplVar11 = &local_78;
    }
    else {
      do {
        plVar17 = plVar21;
        plVar21 = (long *)plVar17[3];
        if (plVar21 == (long *)0x0) goto LAB_002fc09c;
      } while (*plVar21 != lVar13);
      pplVar11 = (long **)(plVar17 + 3);
    }
    *pplVar11 = (long *)plVar21[3];
    plVar21[3] = (long)local_230;
    uStack_228 = CONCAT44(uStack_228._4_4_,(int)uStack_228 + 1);
    local_230 = plVar21;
  }
LAB_002fc09c:
  if ((uVar4 >> 0x1a & 1) != 0) goto LAB_002fc230;
  uVar4 = FUN_002fd45c(auStack_210);
  if (uVar4 == 0) {
    FUN_002fd900(&local_260,local_a8);
    lVar13 = *(long *)(local_a8 + 0x38);
    if (lVar13 != 0) {
      plVar21 = local_230;
      iVar14 = (int)uStack_228;
LAB_002fc0e8:
      lVar15 = *(long *)(lVar13 + 0x18);
      if (lVar15 != 0) {
        lVar16 = 0;
        do {
          bVar1 = *(byte *)(lVar15 + lVar16);
          if (bVar1 == *(byte *)(lVar6 + lVar16)) {
            if (bVar1 == 0) goto code_r0x002fc120;
          }
          else if ((&DAT_0017d228)[bVar1] != (&DAT_0017d228)[*(byte *)(lVar6 + lVar16)]) break;
          lVar16 = lVar16 + 1;
        } while( true );
      }
      goto LAB_002fc170;
    }
    goto LAB_002fc230;
  }
  goto LAB_002fc248;
code_r0x002fc120:
  if (local_78 != (long *)0x0) {
    plVar17 = local_78;
    pplVar11 = &local_78;
    if (*local_78 != lVar15) {
      do {
        plVar10 = plVar17;
        plVar17 = (long *)plVar10[3];
        if (plVar17 == (long *)0x0) goto LAB_002fc170;
      } while (*plVar17 != lVar15);
      pplVar11 = (long **)(plVar10 + 3);
    }
    iVar14 = iVar14 + 1;
    uStack_228 = CONCAT44(uStack_228._4_4_,iVar14);
    *pplVar11 = (long *)plVar17[3];
    plVar17[3] = (long)plVar21;
    plVar21 = plVar17;
    local_230 = plVar17;
  }
LAB_002fc170:
  piVar18 = *(int **)(lVar13 + 0x20);
  if ((piVar18 != (int *)0x0) && (iVar19 = *piVar18, 0 < iVar19)) {
    lVar15 = 0;
LAB_002fc1c0:
    lVar16 = *(long *)(piVar18 + lVar15 * 0x1a + 6);
    if (lVar16 != 0) {
      lVar9 = 0;
      do {
        bVar1 = *(byte *)(lVar16 + lVar9);
        if (bVar1 == *(byte *)(lVar6 + lVar9)) {
          if (bVar1 == 0) goto code_r0x002fc1fc;
        }
        else if ((&DAT_0017d228)[bVar1] != (&DAT_0017d228)[*(byte *)(lVar6 + lVar9)]) break;
        lVar9 = lVar9 + 1;
      } while( true );
    }
    goto LAB_002fc1b4;
  }
LAB_002fc0e0:
  lVar13 = *(long *)(lVar13 + 0x50);
  if (lVar13 == 0) goto LAB_002fc230;
  goto LAB_002fc0e8;
code_r0x002fc1fc:
  if (local_78 != (long *)0x0) {
    plVar17 = local_78;
    pplVar11 = &local_78;
    if (*local_78 != lVar16) {
      do {
        plVar10 = plVar17;
        plVar17 = (long *)plVar10[3];
        if (plVar17 == (long *)0x0) goto LAB_002fc1b4;
      } while (*plVar17 != lVar16);
      pplVar11 = (long **)(plVar10 + 3);
    }
    iVar14 = iVar14 + 1;
    uStack_228 = CONCAT44(uStack_228._4_4_,iVar14);
    *pplVar11 = (long *)plVar17[3];
    piVar18 = *(int **)(lVar13 + 0x20);
    plVar17[3] = (long)plVar21;
    iVar19 = *piVar18;
    plVar21 = plVar17;
    local_230 = plVar17;
  }
LAB_002fc1b4:
  lVar15 = lVar15 + 1;
  if (iVar19 <= lVar15) goto LAB_002fc0e0;
  goto LAB_002fc1c0;
code_r0x002fbea4:
  if (local_78 != (long *)0x0) {
    plVar17 = local_78;
    pplVar11 = &local_78;
    if (*local_78 != lVar15) {
      do {
        plVar10 = plVar17;
        plVar17 = (long *)plVar10[3];
        if (plVar17 == (long *)0x0) goto LAB_002fbe64;
      } while (*plVar17 != lVar15);
      pplVar11 = (long **)(plVar10 + 3);
    }
    iVar14 = iVar14 + 1;
    uStack_228 = CONCAT44(uStack_228._4_4_,iVar14);
    *pplVar11 = (long *)plVar17[3];
    plVar17[3] = (long)plVar21;
    plVar21 = plVar17;
    local_230 = plVar17;
  }
LAB_002fbe64:
  lVar13 = *(long *)(lVar13 + 8);
  if (lVar13 == 0) goto LAB_002fbed8;
  goto LAB_002fbe6c;
code_r0x002fbf18:
  local_220 = local_b8;
  if ((uVar4 >> 0x1a & 1) == 0) {
    FUN_002897e8(&local_260,local_b8[4]);
    lVar13 = *local_b8;
  }
  if ((lVar13 != 0) && (local_78 != (long *)0x0)) {
    if (*local_78 == lVar13) {
      pplVar11 = &local_78;
      plVar21 = local_78;
    }
    else {
      do {
        plVar21 = local_78;
        local_78 = (long *)plVar21[3];
        if (local_78 == (long *)0x0) goto LAB_002fc230;
      } while (*local_78 != lVar13);
      pplVar11 = (long **)(plVar21 + 3);
      plVar21 = local_78;
    }
    *pplVar11 = (long *)plVar21[3];
    plVar21[3] = (long)local_230;
    uStack_228 = CONCAT44(uStack_228._4_4_,(int)uStack_228 + 1);
    local_230 = plVar21;
  }
LAB_002fc230:
  uVar4 = FUN_002fdab0(param_1,&local_230,lVar5,lVar7,1);
LAB_002fc248:
  if (uVar4 != 0) {
    if ((uVar4 == 1) && ((*(ulong *)(lVar20 + 0x30) & 0x10000001) == 1)) {
      sqlite3_result_value(param_1,param_3[3]);
    }
    else if (local_208 == 0) {
      *(uint *)((long)param_1 + 0x24) = uVar4;
      if ((*(ushort *)(*param_1 + 0x14) & 1) != 0) {
        if (uVar4 == 0x204) {
          pcVar12 = "abort due to ROLLBACK";
        }
        else if (uVar4 == 0x65) {
          pcVar12 = "no more rows available";
        }
        else if (uVar4 == 100) {
          pcVar12 = "another row available";
        }
        else {
          uVar4 = uVar4 & 0xff;
          if ((uVar4 < 0x1d) && ((0x1410004U >> ((ulong)uVar4 & 0x3f) & 1) == 0)) {
            pcVar12 = (&PTR_s_not_an_error_0030cfd8)[uVar4];
          }
          else {
            pcVar12 = "unknown error";
          }
        }
        FUN_0023d018(param_1,pcVar12,0xffffffff,1,0);
      }
    }
    else {
      FUN_002fdf98(param_1,&DAT_0016f7d1,param_3[1],param_3[2],auStack_210);
    }
  }
  FUN_002fdee0(auStack_210);
  plVar21 = local_230;
  while (plVar21 != (long *)0x0) {
    plVar21 = (long *)plVar21[3];
    FUN_0022a888(lVar20);
  }
  if (*(char *)(lVar20 + 0x6f) == '\0') {
    FUN_0022d348(lVar20);
  }
  *(undefined8 *)(lVar20 + 0x1f8) = uVar24;
LAB_002fc368:
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 002fc39c  FUN_002fc39c =====

void FUN_002fc39c(long *param_1,undefined8 param_2,long *param_3)

{
  bool bVar1;
  byte bVar2;
  ushort uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  ulong *puVar7;
  long lVar8;
  int *piVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  uint uVar12;
  long *plVar13;
  byte *pbVar14;
  byte *pbVar15;
  long lVar16;
  ulong uVar17;
  byte *pbVar18;
  ulong uVar19;
  uint uVar20;
  undefined8 uVar21;
  undefined1 *local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 auStack_210 [24];
  int local_1f8;
  int local_1e0;
  long local_b8;
  long local_a8;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  lVar6 = *param_3;
  lVar16 = *(long *)(*param_1 + 0x18);
  if (lVar6 == 0) {
LAB_002fc428:
    pbVar18 = (byte *)0x0;
    lVar6 = param_3[1];
    if (lVar6 != 0) goto LAB_002fc434;
LAB_002fc46c:
    lVar6 = 0;
  }
  else {
    if ((((*(ushort *)(lVar6 + 0x14) ^ 0xffff) & 0x202) == 0) && (*(char *)(lVar6 + 0x16) == '\x01')
       ) {
      pbVar18 = *(byte **)(lVar6 + 8);
      lVar6 = param_3[1];
    }
    else {
      if ((*(ushort *)(lVar6 + 0x14) & 1) != 0) goto LAB_002fc428;
      pbVar18 = (byte *)FUN_0022ae18(lVar6,1);
      lVar6 = param_3[1];
    }
    if (lVar6 == 0) goto LAB_002fc46c;
LAB_002fc434:
    if ((((*(ushort *)(lVar6 + 0x14) ^ 0xffff) & 0x202) == 0) && (*(char *)(lVar6 + 0x16) == '\x01')
       ) {
      lVar6 = *(long *)(lVar6 + 8);
    }
    else {
      if ((*(ushort *)(lVar6 + 0x14) & 1) != 0) goto LAB_002fc46c;
      lVar6 = FUN_0022ae18(lVar6,1);
    }
  }
  puVar7 = (ulong *)param_3[4];
  uVar3 = *(ushort *)((long)puVar7 + 0x14);
  if ((uVar3 & 0x24) == 0) {
    if ((uVar3 >> 3 & 1) == 0) {
      if (((uVar3 & 0x12) == 0) || (puVar7[1] == 0)) {
        uVar19 = 0;
      }
      else {
        uVar19 = FUN_0022ad58();
      }
    }
    else {
      uVar19 = FUN_0022ad28(*puVar7);
    }
  }
  else {
    uVar19 = *puVar7;
  }
  lVar8 = param_3[5];
  uVar21 = *(undefined8 *)(lVar16 + 0x30);
  if (lVar8 == 0) {
LAB_002fc504:
    lVar8 = 0;
  }
  else if ((((*(ushort *)(lVar8 + 0x14) ^ 0xffff) & 0x202) == 0) &&
          (*(char *)(lVar8 + 0x16) == '\x01')) {
    lVar8 = *(long *)(lVar8 + 8);
  }
  else {
    if ((*(ushort *)(lVar8 + 0x14) & 1) != 0) goto LAB_002fc504;
    lVar8 = FUN_0022ae18(lVar8,1);
  }
  piVar9 = (int *)param_3[6];
  uVar3 = *(ushort *)(piVar9 + 5);
  if ((uVar3 & 0x24) == 0) {
    if ((uVar3 >> 3 & 1) == 0) {
      if (((uVar3 & 0x12) == 0) || (*(long *)(piVar9 + 2) == 0)) {
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_0022ad58();
      }
    }
    else {
      iVar5 = FUN_0022ad28(*(undefined8 *)piVar9);
    }
  }
  else {
    iVar5 = *piVar9;
  }
  uVar11 = *(undefined8 *)(lVar16 + 0x1f8);
  *(undefined8 *)(lVar16 + 0x1f8) = 0;
  if ((pbVar18 == (byte *)0x0) || (lVar6 == 0)) goto LAB_002fc788;
  uVar17 = *(ulong *)(lVar16 + 0x30);
  if (iVar5 != 0) {
    *(ulong *)(lVar16 + 0x30) = uVar17 & 0xffffffff9fffffff;
  }
  iVar5 = FUN_002fcfd0(auStack_210,pbVar18,lVar16,lVar6,uVar19 & 0xffffffff);
  *(ulong *)(lVar16 + 0x30) = *(ulong *)(lVar16 + 0x30) | uVar17 & 0x60000000;
  if (iVar5 == 0) {
    uVar20 = (uint)uVar21;
    if ((((uVar20 >> 0x1a & 1) == 0) && (local_b8 != 0)) && (*(char *)(local_b8 + 0x3f) == '\x02'))
    {
      local_248 = auStack_210;
      uStack_228 = 0;
      local_230 = 0;
      uStack_218 = 0;
      uStack_220 = 0;
      uStack_238 = 0;
      local_240 = 0;
      FUN_0027f1ac(auStack_210,*(undefined8 *)(local_b8 + 0x40),&local_248);
      bVar1 = local_1e0 != 0 && local_1f8 != 0;
      goto LAB_002fc5b0;
    }
    if (local_a8 == 0) goto LAB_002fc77c;
    if (((uVar20 >> 0x1a & 1) == 0) && (iVar5 = FUN_002fd45c(auStack_210), iVar5 != 0)) {
      bVar1 = true;
      goto LAB_002fc5b0;
    }
    if (*(long *)(local_a8 + 0x30) == 0) {
      uVar20 = 0xffff8000;
    }
    else {
      uVar20 = 0xffffffff;
      plVar13 = (long *)(*(long *)(lVar16 + 0x20) + 0x18);
      do {
        lVar6 = *plVar13;
        uVar20 = uVar20 + 1;
        plVar13 = plVar13 + 4;
      } while (lVar6 != *(long *)(local_a8 + 0x30));
    }
    uVar12 = *(int *)(lVar16 + 0x28) - 1;
    uVar19 = (ulong)uVar12;
    if (*(int *)(lVar16 + 0x28) < 1) {
LAB_002fc744:
      if (uVar20 == uVar12) {
LAB_002fc74c:
        puVar10 = (undefined8 *)*param_1;
        if ((*(ushort *)((long)puVar10 + 0x14) & 0x9000) == 0) {
          *puVar10 = 1;
          *(undefined2 *)((long)puVar10 + 0x14) = 4;
        }
        else {
          FUN_0023c114(puVar10,1);
        }
      }
    }
    else {
      puVar10 = (undefined8 *)(*(long *)(lVar16 + 0x20) + uVar19 * 0x20);
      do {
        uVar12 = (uint)uVar19;
        pbVar14 = (byte *)*puVar10;
        pbVar15 = pbVar18;
        if (pbVar14 != (byte *)0x0) {
          do {
            bVar2 = *pbVar14;
            if (bVar2 == *pbVar15) {
              if (bVar2 == 0) goto LAB_002fc744;
            }
            else if ((&DAT_0017d228)[bVar2] != (&DAT_0017d228)[*pbVar15]) break;
            pbVar14 = pbVar14 + 1;
            pbVar15 = pbVar15 + 1;
          } while( true );
        }
        pbVar14 = pbVar18;
        pbVar15 = &DAT_00171f77;
        if (uVar12 == 0) {
          do {
            bVar2 = *pbVar15;
            if (bVar2 == *pbVar14) {
              if (bVar2 == 0) {
                uVar12 = 0;
                goto LAB_002fc744;
              }
            }
            else if ((&DAT_0017d228)[bVar2] != (&DAT_0017d228)[*pbVar14]) break;
            pbVar14 = pbVar14 + 1;
            pbVar15 = pbVar15 + 1;
          } while( true );
        }
        uVar19 = (ulong)(uVar12 - 1);
        puVar10 = puVar10 + -4;
      } while (0 < (int)uVar12);
      if (uVar20 == 0xffffffff) goto LAB_002fc74c;
    }
  }
  else {
    bVar1 = true;
LAB_002fc5b0:
    if (((bVar1) && (lVar8 != 0)) && ((*(ulong *)(lVar16 + 0x30) & 0x10000001) != 1)) {
      FUN_002fdf98(param_1,lVar8,param_3[2],param_3[3],auStack_210);
    }
  }
LAB_002fc77c:
  FUN_002fdee0(auStack_210);
LAB_002fc788:
  *(undefined8 *)(lVar16 + 0x1f8) = uVar11;
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002fc7d0  FUN_002fc7d0 =====

void FUN_002fc7d0(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  char *pcVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined1 auStack_1f8 [344];
  long local_a0;
  long *local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  piVar10 = (int *)*param_3;
  uVar3 = *(ushort *)(piVar10 + 5);
  lVar16 = *(long *)(*param_1 + 0x18);
  if ((uVar3 & 0x24) == 0) {
    if ((uVar3 >> 3 & 1) == 0) {
      if (((uVar3 & 0x12) != 0) && (*(long *)(piVar10 + 2) != 0)) {
        iVar9 = FUN_0022ad58();
        goto LAB_002fc854;
      }
      iVar9 = 0;
      lVar11 = param_3[1];
    }
    else {
      iVar9 = FUN_0022ad28(*(undefined8 *)piVar10);
LAB_002fc854:
      lVar11 = param_3[1];
    }
    if (lVar11 != 0) goto LAB_002fc870;
LAB_002fc8a8:
    lVar11 = 0;
  }
  else {
    iVar9 = *piVar10;
    lVar11 = param_3[1];
    if (lVar11 == 0) goto LAB_002fc8a8;
LAB_002fc870:
    if ((((*(ushort *)(lVar11 + 0x14) ^ 0xffff) & 0x202) == 0) &&
       (*(char *)(lVar11 + 0x16) == '\x01')) {
      lVar11 = *(long *)(lVar11 + 8);
    }
    else {
      if ((*(ushort *)(lVar11 + 0x14) & 1) != 0) goto LAB_002fc8a8;
      lVar11 = FUN_0022ae18(lVar11,1);
    }
  }
  puVar12 = (undefined8 *)param_3[2];
  uVar3 = *(ushort *)((long)puVar12 + 0x14);
  if ((uVar3 & 0x24) == 0) {
    if ((uVar3 >> 3 & 1) == 0) {
      if (((uVar3 & 0x12) == 0) || (puVar12[1] == 0)) {
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_0022ad58();
      }
    }
    else {
      iVar7 = FUN_0022ad28(*puVar12);
    }
  }
  else {
    iVar7 = (int)*puVar12;
  }
  uVar17 = *(undefined8 *)(lVar16 + 0x1f8);
  *(undefined8 *)(lVar16 + 0x1f8) = 0;
  uVar8 = FUN_002fcfd0(auStack_1f8,*(undefined8 *)(*(long *)(lVar16 + 0x20) + (long)iVar9 * 0x20),
                       lVar16,lVar11,iVar9 == 1);
  if (uVar8 == 0) {
    if (local_a0 != 0) {
      sVar4 = *(short *)(local_a0 + 0x36);
      if ((sVar4 != 1) && (iVar7 < sVar4)) {
        plVar1 = (long *)(*(long *)(local_a0 + 8) + (long)iVar7 * 0x10);
        plVar13 = (long *)0x0;
        lVar15 = *plVar1;
        plVar6 = local_60;
        if (lVar15 != 0) {
          while ((plVar6 != (long *)0x0 && (plVar13 = plVar6, *plVar6 != lVar15))) {
            plVar13 = (long *)plVar6[3];
            plVar6 = plVar13;
          }
        }
        if (iVar7 < sVar4 + -1) {
          for (; *local_60 != plVar1[2]; local_60 = (long *)local_60[3]) {
          }
          lVar15 = local_60[1];
          pcVar14 = (char *)plVar13[1];
        }
        else {
          pcVar14 = (char *)plVar13[1];
          lVar15 = lVar11 + *(int *)(local_a0 + 0x40);
          cVar2 = *pcVar14;
          while ((cVar2 != '\0' && (cVar2 != ','))) {
            pcVar14 = pcVar14 + -1;
            plVar13[1] = (long)pcVar14;
            cVar2 = *pcVar14;
          }
        }
        lVar11 = FUN_00255dd0(lVar16,"%.*s%s",(long)pcVar14 - lVar11,lVar11,lVar15);
        FUN_0023d018(param_1,lVar11,0xffffffff,1,0xffffffffffffffff);
        if (lVar11 != 0) {
          puVar12 = &DAT_00313858;
          if (DAT_00313830 != 0) {
            if (DAT_00316f08 != 0) {
              (*DAT_003138b0)();
            }
            iVar9 = (*DAT_00313868)(lVar11);
            DAT_00316e60 = DAT_00316e60 - iVar9;
            DAT_00316ea8 = DAT_00316ea8 + -1;
            (*DAT_00313858)(lVar11);
            if (DAT_00316f08 == 0) goto LAB_002fcb64;
            puVar12 = &DAT_003138c0;
            lVar11 = DAT_00316f08;
          }
          (*(code *)*puVar12)(lVar11);
        }
LAB_002fcb64:
        FUN_002fdee0(auStack_1f8);
        *(undefined8 *)(lVar16 + 0x1f8) = uVar17;
        goto LAB_002fcb70;
      }
    }
    uVar8 = 0xb;
    sqlite3_log(0xb,"%s at line %d of [%.10s]","database corruption",0x1bbef,
                "89c459e766ea7e9165d0beeb124708b955a4950d0f4792f457465d71b158d318");
  }
  FUN_002fdee0(auStack_1f8);
  lVar11 = *param_1;
  *(undefined8 *)(lVar16 + 0x1f8) = uVar17;
  *(uint *)((long)param_1 + 0x24) = uVar8;
  if ((*(ushort *)(lVar11 + 0x14) & 1) != 0) {
    if (uVar8 == 0x204) {
      pcVar14 = "abort due to ROLLBACK";
    }
    else if (uVar8 == 0x65) {
      pcVar14 = "no more rows available";
    }
    else if (uVar8 == 100) {
      pcVar14 = "another row available";
    }
    else {
      uVar8 = uVar8 & 0xff;
      if ((uVar8 < 0x1d) && ((0x1410004U >> ((ulong)uVar8 & 0x3f) & 1) == 0)) {
        pcVar14 = (&PTR_s_not_an_error_0030cfd8)[uVar8];
      }
      else {
        pcVar14 = "unknown error";
      }
    }
    FUN_0023d018(param_1,pcVar14,0xffffffff,1,0);
  }
LAB_002fcb70:
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 002fcba0  FUN_002fcba0 =====

void FUN_002fcba0(long *param_1,undefined8 param_2,long *param_3)

{
  ushort uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined1 *local_260;
  code *pcStack_258;
  code *local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  long *plStack_238;
  long local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 auStack_208 [24];
  uint local_1f0;
  long local_b0;
  long local_a8;
  undefined8 local_a0;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar5 = *param_3;
  lVar9 = *(long *)(*param_1 + 0x18);
  if (lVar5 == 0) {
LAB_002fcc2c:
    lVar11 = 0;
    lVar5 = param_3[1];
    if (lVar5 != 0) goto LAB_002fcc38;
LAB_002fcc70:
    lVar5 = 0;
  }
  else {
    if ((((*(ushort *)(lVar5 + 0x14) ^ 0xffff) & 0x202) == 0) && (*(char *)(lVar5 + 0x16) == '\x01')
       ) {
      lVar11 = *(long *)(lVar5 + 8);
      lVar5 = param_3[1];
    }
    else {
      if ((*(ushort *)(lVar5 + 0x14) & 1) != 0) goto LAB_002fcc2c;
      lVar11 = FUN_0022ae18(lVar5,1);
      lVar5 = param_3[1];
    }
    if (lVar5 == 0) goto LAB_002fcc70;
LAB_002fcc38:
    if ((((*(ushort *)(lVar5 + 0x14) ^ 0xffff) & 0x202) == 0) && (*(char *)(lVar5 + 0x16) == '\x01')
       ) {
      lVar5 = *(long *)(lVar5 + 8);
    }
    else {
      if ((*(ushort *)(lVar5 + 0x14) & 1) != 0) goto LAB_002fcc70;
      lVar5 = FUN_0022ae18(lVar5,1);
    }
  }
  uVar13 = *(undefined8 *)(lVar9 + 0x1f8);
  *(undefined8 *)(lVar9 + 0x1f8) = 0;
  if (*(char *)(lVar9 + 0x6f) == '\0') {
    FUN_0022d2b8(lVar9);
  }
  if ((lVar11 == 0) || (lVar5 == 0)) goto LAB_002fcf88;
  uVar3 = FUN_002fcfd0(auStack_208,lVar11,lVar9,lVar5,0);
  if (uVar3 == 0) {
    pcStack_258 = FUN_002fd3a0;
    local_250 = FUN_002fd428;
    uStack_248 = 0;
    plStack_238 = &local_230;
    local_240 = 0;
    uStack_228 = 0;
    local_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    local_260 = auStack_208;
    if (local_b0 == 0) {
      if (local_a8 == 0) {
        uVar3 = FUN_002fd45c(auStack_208);
        lVar11 = local_230;
        if (uVar3 != 0) goto joined_r0x002fcea0;
        FUN_002fd900(&local_260,local_a0);
      }
      else {
        piVar8 = *(int **)(local_a8 + 0x50);
        if ((piVar8 != (int *)0x0) && (iVar10 = *piVar8, 0 < iVar10)) {
          plVar14 = (long *)(piVar8 + 2);
          for (; ((*plVar14 == 0 || (iVar4 = FUN_0027e9d8(&local_260), iVar4 == 0)) && (1 < iVar10))
              ; iVar10 = iVar10 + -1) {
            plVar14 = plVar14 + 3;
          }
        }
        if (*(long *)(local_a8 + 0x48) != 0) {
          FUN_0027e9d8(&local_260);
        }
      }
LAB_002fce80:
      uVar3 = FUN_002fdab0(param_1,&local_230,lVar5,0,0);
      lVar11 = local_230;
    }
    else {
      if (*(char *)(local_b0 + 0x3f) != '\x02') {
        piVar8 = *(int **)(local_b0 + 0x20);
        if ((piVar8 != (int *)0x0) && (iVar10 = *piVar8, 0 < iVar10)) {
          plVar14 = (long *)(piVar8 + 2);
          for (; ((*plVar14 == 0 || (iVar4 = FUN_0027e9d8(&local_260), iVar4 == 0)) && (1 < iVar10))
              ; iVar10 = iVar10 + -1) {
            plVar14 = plVar14 + 3;
          }
        }
        if (0 < *(short *)(local_b0 + 0x36)) {
          lVar11 = 0;
          lVar12 = 0xc;
          lVar7 = local_b0;
          do {
            uVar1 = *(ushort *)(*(long *)(lVar7 + 8) + lVar12);
            if ((((uVar1 != 0) && (*(char *)(lVar7 + 0x3f) == '\0')) &&
                (piVar8 = *(int **)(lVar7 + 0x50), piVar8 != (int *)0x0)) &&
               (((int)(uint)uVar1 <= *piVar8 &&
                (*(long *)(piVar8 + (ulong)(uVar1 - 1) * 6 + 2) != 0)))) {
              FUN_0027e9d8(&local_260);
              lVar7 = local_b0;
            }
            lVar11 = lVar11 + 1;
            lVar12 = lVar12 + 0x10;
          } while (lVar11 < *(short *)(lVar7 + 0x36));
        }
        goto LAB_002fce80;
      }
      lVar12 = *(long *)(local_b0 + 0x40);
      local_1f0 = 0;
      *(uint *)(lVar12 + 4) = *(uint *)(lVar12 + 4) & 0xffdfffff;
      FUN_0027f1ac(auStack_208,lVar12,0);
      uVar3 = local_1f0;
      if (*(char *)(lVar9 + 0x67) != '\0') {
        uVar3 = 7;
      }
      lVar11 = local_230;
      if (uVar3 == 0) {
        FUN_0027f2c8(&local_260,lVar12);
        goto LAB_002fce80;
      }
    }
joined_r0x002fcea0:
    while (lVar11 != 0) {
      lVar11 = *(long *)(lVar11 + 0x18);
      FUN_0022a888(lVar9);
    }
    if (uVar3 != 0) goto LAB_002fcec0;
  }
  else {
LAB_002fcec0:
    if ((uVar3 == 1) && ((*(ulong *)(lVar9 + 0x30) & 0x10000001) == 1)) {
      sqlite3_result_value(param_1,param_3[1]);
    }
    else {
      *(uint *)((long)param_1 + 0x24) = uVar3;
      if ((*(ushort *)(*param_1 + 0x14) & 1) != 0) {
        if (uVar3 == 0x204) {
          pcVar6 = "abort due to ROLLBACK";
        }
        else if (uVar3 == 0x65) {
          pcVar6 = "no more rows available";
        }
        else if (uVar3 == 100) {
          pcVar6 = "another row available";
        }
        else {
          uVar3 = uVar3 & 0xff;
          if ((uVar3 < 0x1d) && ((0x1410004U >> ((ulong)uVar3 & 0x3f) & 1) == 0)) {
            pcVar6 = (&PTR_s_not_an_error_0030cfd8)[uVar3];
          }
          else {
            pcVar6 = "unknown error";
          }
        }
        FUN_0023d018(param_1,pcVar6,0xffffffff,1,0);
      }
    }
  }
  FUN_002fdee0(auStack_208);
LAB_002fcf88:
  *(undefined8 *)(lVar9 + 0x1f8) = uVar13;
  if (*(char *)(lVar9 + 0x6f) == '\0') {
    FUN_0022d348(lVar9);
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 002fcfd0  FUN_002fcfd0 =====

int FUN_002fcfd0(long *param_1,byte *param_2,long param_3,byte *param_4,int param_5)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  char cVar5;
  uint uVar6;
  char *pcVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined1 uVar10;
  byte *pbVar11;
  byte *pbVar12;
  
  param_1[0x1b] = 0;
  param_1[0x33] = 0;
  *param_1 = param_3;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  lVar3 = *(long *)(param_3 + 0x158);
  *(long **)(param_3 + 0x158) = param_1;
  param_1[0x20] = lVar3;
  if (*(char *)(param_3 + 0x67) != '\0') {
    FUN_0022aac0(param_1,"out of memory");
  }
  if (param_4 == (byte *)0x0) {
    return 7;
  }
  bVar1 = *param_4;
  if (bVar1 == 0) {
    cVar5 = '\0';
    pcVar4 = "CREATE ";
  }
  else {
    if ((bVar1 & 0xdf) == 0x43) {
      bVar1 = param_4[1];
      if (bVar1 == 0) {
        cVar5 = '\0';
        pcVar4 = "REATE ";
        goto LAB_002fd1e0;
      }
      if ((bVar1 & 0xdf) == 0x52) {
        bVar1 = param_4[2];
        if (bVar1 == 0) {
          cVar5 = '\0';
          pcVar4 = "EATE ";
          goto LAB_002fd1e0;
        }
        if ((bVar1 & 0xdf) == 0x45) {
          bVar1 = param_4[3];
          if (bVar1 == 0) {
            cVar5 = '\0';
            pcVar4 = "ATE ";
            goto LAB_002fd1e0;
          }
          if ((bVar1 & 0xdf) == 0x41) {
            bVar1 = param_4[4];
            if (bVar1 == 0) {
              cVar5 = '\0';
              pcVar4 = "TE ";
              goto LAB_002fd1e0;
            }
            if ((bVar1 & 0xdf) == 0x54) {
              bVar1 = param_4[5];
              if (bVar1 == 0) {
                cVar5 = '\0';
                pcVar4 = "E ";
                goto LAB_002fd1e0;
              }
              if ((bVar1 & 0xdf) == 0x45) {
                bVar1 = param_4[6];
                if (bVar1 == 0) {
                  cVar5 = '\0';
                  pcVar4 = " ";
                  goto LAB_002fd1e0;
                }
                if (bVar1 == 0x20) goto LAB_002fd1f0;
                pcVar7 = &DAT_0017d228 + bVar1;
                pcVar4 = " ";
              }
              else {
                pcVar7 = &DAT_0017d228 + bVar1;
                pcVar4 = "E ";
              }
            }
            else {
              pcVar7 = &DAT_0017d228 + bVar1;
              pcVar4 = "TE ";
            }
          }
          else {
            pcVar7 = &DAT_0017d228 + bVar1;
            pcVar4 = "ATE ";
          }
        }
        else {
          pcVar7 = &DAT_0017d228 + bVar1;
          pcVar4 = "EATE ";
        }
      }
      else {
        pcVar7 = &DAT_0017d228 + bVar1;
        pcVar4 = "REATE ";
      }
    }
    else {
      pcVar7 = &DAT_0017d228 + bVar1;
      pcVar4 = "CREATE ";
    }
    cVar5 = *pcVar7;
  }
LAB_002fd1e0:
  if (cVar5 != (&DAT_0017d228)[(byte)*pcVar4]) {
    sqlite3_log(0xb,"%s at line %d of [%.10s]","database corruption",0x1b83c,
                "89c459e766ea7e9165d0beeb124708b955a4950d0f4792f457465d71b158d318");
    return 0xb;
  }
LAB_002fd1f0:
  uVar10 = 1;
  if (param_5 == 0) {
    if (param_2 == (byte *)0x0) {
      uVar10 = 0xff;
    }
    else {
      uVar6 = *(int *)(param_3 + 0x28) - 1;
      uVar8 = (ulong)uVar6;
      if (*(int *)(param_3 + 0x28) < 1) {
LAB_002fd2e8:
        uVar10 = (undefined1)uVar6;
      }
      else {
        puVar9 = (undefined8 *)(*(long *)(param_3 + 0x20) + uVar8 * 0x20);
        do {
          uVar6 = (uint)uVar8;
          pbVar11 = (byte *)*puVar9;
          pbVar12 = param_2;
          if (pbVar11 != (byte *)0x0) {
            do {
              bVar1 = *pbVar11;
              if (bVar1 == *pbVar12) {
                if (bVar1 == 0) goto LAB_002fd2e8;
              }
              else if ((&DAT_0017d228)[bVar1] != (&DAT_0017d228)[*pbVar12]) break;
              pbVar11 = pbVar11 + 1;
              pbVar12 = pbVar12 + 1;
            } while( true );
          }
          pbVar11 = param_2;
          pbVar12 = &DAT_00171f77;
          if (uVar6 == 0) {
            do {
              bVar1 = *pbVar12;
              if (bVar1 == *pbVar11) {
                if (bVar1 == 0) {
                  uVar10 = 0;
                  goto LAB_002fd2f4;
                }
              }
              else if ((&DAT_0017d228)[bVar1] != (&DAT_0017d228)[*pbVar11]) break;
              pbVar11 = pbVar11 + 1;
              pbVar12 = pbVar12 + 1;
            } while( true );
          }
          uVar8 = (ulong)(uVar6 - 1);
          puVar9 = puVar9 + -4;
          uVar10 = 0xff;
        } while (0 < (int)uVar6);
      }
    }
  }
LAB_002fd2f4:
  *(undefined1 *)(param_3 + 0xc4) = uVar10;
  *(undefined1 *)((long)param_1 + 300) = 2;
  *param_1 = param_3;
  *(undefined4 *)(param_1 + 0x1a) = 1;
  iVar2 = FUN_0024b7d8(param_1,param_4);
  if (*(char *)(param_3 + 0x67) != '\0') {
    iVar2 = 7;
  }
  if (iVar2 == 0) {
    if (((param_1[0x2b] == 0) && (param_1[0x2c] == 0)) && (param_1[0x2d] == 0)) {
      sqlite3_log(0xb,"%s at line %d of [%.10s]","database corruption",0x1b847,
                  "89c459e766ea7e9165d0beeb124708b955a4950d0f4792f457465d71b158d318");
      iVar2 = 0xb;
    }
    else {
      iVar2 = 0;
    }
  }
  *(undefined1 *)(param_3 + 0xc4) = 0;
  return iVar2;
}


// ===== 002fd3a0  FUN_002fd3a0 =====

undefined8 FUN_002fd3a0(long *param_1,char *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if ((*param_2 == 'u') && (param_2[4] < '\0')) {
    puVar2 = *(undefined8 **)(*param_1 + 0x198);
    if (puVar2 != (undefined8 *)0x0) {
      puVar4 = (undefined8 *)param_1[5];
      if ((char *)*puVar2 == param_2) {
        puVar3 = (undefined8 *)(*param_1 + 0x198);
      }
      else {
        do {
          puVar3 = puVar2;
          puVar2 = (undefined8 *)puVar3[3];
          if (puVar2 == (undefined8 *)0x0) {
            return 0;
          }
        } while ((char *)*puVar2 != param_2);
        puVar3 = puVar3 + 3;
      }
      if (puVar4 != (undefined8 *)0x0) {
        *puVar3 = puVar2[3];
        iVar1 = *(int *)(puVar4 + 1);
        uVar5 = *puVar4;
        *puVar4 = puVar2;
        puVar2[3] = uVar5;
        *(int *)(puVar4 + 1) = iVar1 + 1;
        return 0;
      }
    }
  }
  return 0;
}


// ===== 002fd428  FUN_002fd428 =====

undefined8 FUN_002fd428(undefined8 param_1,long param_2)

{
  if ((*(ushort *)(param_2 + 6) & 0x420) != 0) {
    return 1;
  }
  FUN_0027ece0(param_1,*(undefined8 *)(param_2 + 0x68));
  return 0;
}


// ===== 002fd45c  FUN_002fd45c =====

/* WARNING: Removing unreachable block (ram,0x002fd6fc) */
/* WARNING: Removing unreachable block (ram,0x002fd598) */

uint FUN_002fd45c(long *param_1)

{
  long lVar1;
  ulong uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  int *piVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long *local_d0;
  long local_c8;
  undefined8 *puStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulong local_a8;
  undefined8 uStack_a0;
  long *local_98;
  code *pcStack_90;
  code *local_88;
  undefined8 uStack_80;
  long **local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar12 = param_1[0x2d];
  lVar10 = *param_1;
  uStack_a0 = 0;
  local_a8 = 0;
  uStack_b0 = 0;
  local_b8 = 0;
  puStack_c0 = (undefined8 *)0x0;
  local_c8 = 0;
  if (*(long *)(lVar12 + 0x30) == 0) {
    lVar9 = -0x8000;
  }
  else {
    iVar5 = -1;
    plVar8 = (long *)(*(long *)(lVar10 + 0x20) + 0x18);
    do {
      lVar9 = *plVar8;
      iVar5 = iVar5 + 1;
      plVar8 = plVar8 + 4;
    } while (lVar9 != *(long *)(lVar12 + 0x30));
    lVar9 = (long)iVar5;
  }
  local_d0 = param_1;
  lVar9 = FUN_0028c0b8(lVar10,*(undefined8 *)(lVar12 + 8),
                       *(undefined8 *)(*(long *)(lVar10 + 0x20) + lVar9 * 0x20));
  param_1[0x16] = lVar9;
  *(undefined1 *)((long)param_1 + 0xdc) = *(undefined1 *)(lVar12 + 0x10);
  if ((lVar9 == 0) ||
     (((*(char *)(lVar9 + 0x3f) != '\x01' && (0 < *(short *)(lVar9 + 0x36))) ||
      (uVar4 = FUN_0028a8b8(param_1), uVar4 == 0)))) {
    lVar9 = *(long *)(lVar12 + 0x18);
    if (lVar9 == 0) {
      uVar4 = 0;
LAB_002fd5fc:
      lVar12 = *(long *)(lVar12 + 0x38);
      do {
        if ((lVar12 == 0) ||
           (((*(long *)(lVar12 + 0x10) != 0 &&
             (FUN_0027f1ac(param_1,*(long *)(lVar12 + 0x10),&local_d0), (int)param_1[6] != 0)) &&
            (uVar4 = *(uint *)(param_1 + 3), uVar4 != 0)))) goto LAB_002fd8c8;
        if (*(long *)(lVar12 + 0x18) == 0) {
          uVar4 = 0;
        }
        else {
          lVar9 = FUN_002c0808(param_1,lVar12);
          if (lVar9 == 0) {
            uVar4 = 7;
            goto LAB_002fd8c8;
          }
          lVar6 = FUN_0026dbdc(param_1,*(undefined8 *)(lVar12 + 0x30),lVar9,0,0,0,0,0,0);
          if (lVar6 == 0) {
            lVar9 = 0;
            *(undefined8 *)(lVar12 + 0x30) = 0;
            uVar11 = 7;
            uVar4 = 7;
            piVar7 = *(int **)(lVar12 + 0x20);
          }
          else {
            FUN_0027f1ac(param_1,lVar6,0);
            bVar3 = (int)param_1[6] != 0;
            uVar11 = (uint)bVar3;
            uVar4 = (uint)bVar3;
            if (*(long *)(lVar12 + 0x30) != 0) {
              *(undefined8 *)(lVar6 + 0x20) = 0;
            }
            *(undefined8 *)(lVar6 + 0x28) = 0;
            FUN_0022e2dc(lVar10,lVar6,1);
            piVar7 = *(int **)(lVar12 + 0x20);
          }
          if (((piVar7 != (int *)0x0) && (iVar5 = *piVar7, uVar4 = uVar11, 0 < iVar5)) &&
             (uVar11 == 0)) {
            lVar6 = 0;
            lVar14 = 0x30;
            do {
              if (*(long *)((long)piVar7 + lVar14) != 0) {
                FUN_0027f1ac(param_1,*(long *)((long)piVar7 + lVar14),0);
                piVar7 = *(int **)(lVar12 + 0x20);
                iVar5 = *piVar7;
              }
              lVar6 = lVar6 + 1;
              lVar14 = lVar14 + 0x68;
            } while (lVar6 < iVar5);
          }
          if (*(char *)(lVar10 + 0x67) != '\0') {
            uVar4 = 7;
          }
          if (uVar4 == 0) {
            lVar6 = *(long *)(lVar12 + 0x28);
            local_c8 = lVar9;
            if (lVar6 == 0) {
LAB_002fd840:
              uVar4 = FUN_002854b4(&local_d0,*(undefined8 *)(lVar12 + 0x30));
              puVar13 = *(undefined8 **)(lVar12 + 0x40);
              if ((puVar13 != (undefined8 *)0x0) && (uVar4 == 0)) {
                local_a8 = CONCAT44(local_a8._4_4_,0x200);
                puVar13[8] = lVar9;
                puStack_c0 = puVar13;
                uVar4 = FUN_002854b4(&local_d0,*puVar13);
                if ((uVar4 == 0) && (uVar4 = FUN_002854b4(&local_d0,puVar13[2]), uVar4 == 0)) {
                  iVar5 = FUN_00285380(&local_d0,puVar13[3]);
                  if (iVar5 == 0) {
                    uVar4 = FUN_00285380(&local_d0,puVar13[1]);
                  }
                  else {
                    uVar4 = 1;
                  }
                }
                local_a8 = local_a8 & 0xffffffff00000000;
              }
            }
            else {
              uVar4 = (uint)local_a8;
              local_98 = local_d0;
              pcStack_90 = FUN_00281998;
              local_70 = &local_d0;
              uVar2 = local_a8 & 0x80000;
              local_a8 = local_a8 & 0xfffffffff7ff6fef;
              local_88 = FUN_00283fbc;
              if (uVar2 != 0) {
                local_88 = (code *)0x0;
              }
              uStack_80 = 0;
              iVar5 = *(int *)((long)local_d0 + 0x134) + *(int *)(lVar6 + 0x28);
              *(int *)((long)local_d0 + 0x134) = iVar5;
              if (*(int *)(*local_d0 + 0x94) < iVar5) {
                FUN_0022aac0(local_d0,"Expression tree is too large (maximum depth %d)");
                uVar4 = 1;
              }
              else {
                FUN_0027e9d8(&local_98,lVar6);
                *(int *)((long)local_98 + 0x134) =
                     *(int *)((long)local_98 + 0x134) - *(int *)(lVar6 + 0x28);
                *(uint *)(lVar6 + 4) = *(uint *)(lVar6 + 4) | (uint)local_a8 & 0x8010;
                local_a8 = CONCAT44(local_a8._4_4_,(uint)local_a8 | uVar4 & 0x8009010);
                if ((uStack_b0._4_4_ < 1) && ((int)local_98[6] < 1)) goto LAB_002fd840;
                uVar4 = 1;
              }
            }
          }
          local_c8 = 0;
          FUN_0022e690(lVar10,lVar9);
          if (uVar4 != 0) goto LAB_002fd8c8;
        }
        lVar12 = *(long *)(lVar12 + 0x50);
      } while( true );
    }
    local_70 = &local_d0;
    local_a8 = local_a8 & 0xffffffff00000000;
    pcStack_90 = FUN_00281998;
    local_88 = FUN_00283fbc;
    uStack_80 = 0;
    iVar5 = *(int *)((long)param_1 + 0x134) + *(int *)(lVar9 + 0x28);
    *(int *)((long)param_1 + 0x134) = iVar5;
    local_98 = param_1;
    if (*(int *)(*param_1 + 0x94) < iVar5) {
      FUN_0022aac0(param_1,"Expression tree is too large (maximum depth %d)");
      uVar4 = 1;
    }
    else {
      FUN_0027e9d8(&local_98,lVar9);
      *(int *)((long)local_98 + 0x134) = *(int *)((long)local_98 + 0x134) - *(int *)(lVar9 + 0x28);
      *(uint *)(lVar9 + 4) = *(uint *)(lVar9 + 4) | (uint)local_a8 & 0x8010;
      if (uStack_b0._4_4_ < 1) {
        bVar3 = 0 < (int)local_98[6];
        uVar4 = (uint)bVar3;
        if (!bVar3) goto LAB_002fd5fc;
      }
      else {
        uVar4 = 1;
      }
    }
  }
LAB_002fd8c8:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}


// ===== 002fd900  FUN_002fd900 =====

void FUN_002fd900(undefined8 param_1,long param_2)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  if (*(long *)(param_2 + 0x18) != 0) {
    FUN_0027e9d8(param_1);
  }
  for (lVar3 = *(long *)(param_2 + 0x38); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x50)) {
    FUN_0027f2c8(param_1,*(undefined8 *)(lVar3 + 0x10));
    if (*(long *)(lVar3 + 0x28) != 0) {
      FUN_0027e9d8(param_1);
    }
    piVar2 = *(int **)(lVar3 + 0x30);
    if ((piVar2 != (int *)0x0) && (iVar4 = *piVar2, 0 < iVar4)) {
      plVar7 = (long *)(piVar2 + 2);
      for (; ((*plVar7 == 0 || (iVar1 = FUN_0027e9d8(param_1), iVar1 == 0)) && (1 < iVar4));
          iVar4 = iVar4 + -1) {
        plVar7 = plVar7 + 3;
      }
    }
    puVar5 = *(undefined8 **)(lVar3 + 0x40);
    if (puVar5 != (undefined8 *)0x0) {
      piVar2 = (int *)*puVar5;
      if ((piVar2 != (int *)0x0) && (iVar4 = *piVar2, 0 < iVar4)) {
        plVar7 = (long *)(piVar2 + 2);
        for (; ((*plVar7 == 0 || (iVar1 = FUN_0027e9d8(param_1), iVar1 == 0)) && (1 < iVar4));
            iVar4 = iVar4 + -1) {
          plVar7 = plVar7 + 3;
        }
      }
      piVar2 = (int *)puVar5[2];
      if ((piVar2 != (int *)0x0) && (iVar4 = *piVar2, 0 < iVar4)) {
        plVar7 = (long *)(piVar2 + 2);
        for (; ((*plVar7 == 0 || (iVar1 = FUN_0027e9d8(param_1), iVar1 == 0)) && (1 < iVar4));
            iVar4 = iVar4 + -1) {
          plVar7 = plVar7 + 3;
        }
      }
      if (puVar5[3] != 0) {
        FUN_0027e9d8(param_1);
      }
      if (puVar5[1] != 0) {
        FUN_0027e9d8(param_1);
      }
    }
    piVar2 = *(int **)(lVar3 + 0x20);
    if ((piVar2 != (int *)0x0) && (0 < *piVar2)) {
      lVar6 = 0;
      lVar8 = 0x30;
      do {
        FUN_0027f2c8(param_1,*(undefined8 *)((long)piVar2 + lVar8));
        piVar2 = *(int **)(lVar3 + 0x20);
        lVar6 = lVar6 + 1;
        lVar8 = lVar8 + 0x68;
      } while (lVar6 < *piVar2);
    }
  }
  return;
}


// ===== 002fdab0  FUN_002fdab0 =====

undefined4 FUN_002fdab0(long *param_1,long *param_2,char *param_3,char *param_4,int param_5)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  int iVar6;
  size_t sVar7;
  size_t sVar8;
  void *__s;
  byte *__src;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uVar12;
  byte bVar13;
  undefined4 uVar14;
  long lVar15;
  char *__src_00;
  uint uVar16;
  ulong uVar17;
  int iVar18;
  int iVar19;
  long lVar20;
  byte *__dest;
  char *__s_00;
  uint local_8c;
  uint local_84;
  char *local_80;
  
  if (param_4 == (char *)0x0) {
    local_8c = 0;
  }
  else {
    sVar7 = strlen(param_4);
    local_8c = (uint)sVar7 & 0x3fffffff;
  }
  sVar7 = strlen(param_3);
  uVar17 = sVar7 & 0x3fffffff;
  lVar20 = *(long *)(*param_1 + 0x18);
  if (param_4 == (char *)0x0) {
    uVar12 = uVar17 << 1 | 1;
    sVar8 = uVar12 * 3;
    if (lVar20 == 0) {
      __s = (void *)FUN_0022a6ac(sVar8);
    }
    else {
      __s = (void *)FUN_0022a5f4(lVar20,sVar8);
    }
    if (__s == (void *)0x0) {
      return 7;
    }
    memset(__s,0,sVar8);
    __dest = (byte *)((long)__s + uVar12);
    local_80 = (char *)0x0;
    __s_00 = (char *)((long)__s + uVar17 * 4 + 2);
    local_84 = 0;
  }
  else {
    local_80 = (char *)FUN_00255dd0(lVar20,"\"%w\" ",param_4);
    if (local_80 == (char *)0x0) {
      return 7;
    }
    sVar8 = strlen(local_80);
    local_84 = ((uint)sVar8 & 0x3fffffff) - 1;
    lVar15 = uVar17 + (long)(int)param_2[1] * (long)(int)local_84;
    if (lVar20 == 0) {
      __s = (void *)FUN_0022a6ac(lVar15 + 1);
    }
    else {
      __s = (void *)FUN_0022a5f4(lVar20,lVar15 + 1);
    }
    if (__s == (void *)0x0) {
      uVar14 = 7;
      goto code_r0x002fde28;
    }
    memset(__s,0,lVar15 + 1);
    __dest = (byte *)0x0;
    __s_00 = (char *)0x0;
  }
  memcpy(__s,param_3,uVar17);
  lVar15 = *param_2;
  if (lVar15 != 0) {
    uVar16 = (uint)sVar7 & 0x3fffffff;
    iVar6 = uVar16 << 1;
    do {
      lVar9 = *(long *)(lVar15 + 0x18);
      for (; plVar5 = param_2, lVar9 != 0; lVar9 = *(long *)(lVar9 + 0x18)) {
        lVar3 = lVar9;
        if (*(ulong *)(lVar9 + 8) <= *(ulong *)(lVar15 + 8)) {
          lVar3 = lVar15;
        }
        lVar15 = lVar3;
      }
      do {
        plVar11 = plVar5;
        lVar9 = *plVar11;
        plVar5 = (long *)(lVar9 + 0x18);
      } while (lVar9 != lVar15);
      *plVar11 = *(long *)(lVar15 + 0x18);
      __src = *(byte **)(lVar15 + 8);
      if (param_4 == (char *)0x0) {
        memcpy(__dest,__src,(ulong)*(uint *)(lVar15 + 0x10));
        __dest[*(uint *)(lVar15 + 0x10)] = 0;
        bVar13 = *__dest;
        if ((char)(&DAT_0017d382)[bVar13] < '\0') {
          uVar17 = 0;
          bVar2 = 0x5d;
          if (bVar13 != 0x5b) {
            bVar2 = bVar13;
          }
          uVar12 = 1;
          while( true ) {
            bVar13 = __dest[(int)uVar12];
            if ((__dest[(int)uVar12] == bVar2) &&
               (uVar12 = (long)(int)uVar12 + 1, bVar13 = bVar2, __dest[uVar12] != bVar2)) break;
            __dest[uVar17] = bVar13;
            uVar17 = uVar17 + 1;
            uVar12 = (ulong)((int)uVar12 + 1);
          }
          __dest[uVar17 & 0xffffffff] = 0;
        }
        puVar4 = &DAT_0016e4cb;
        if (*(char *)(*(long *)(lVar15 + 8) + (ulong)*(uint *)(lVar15 + 0x10)) != '\'') {
          puVar4 = &DAT_0016f7d1;
        }
        sqlite3_snprintf(iVar6,__s_00,&DAT_00172e32,__dest,puVar4);
        if (__s_00 == (char *)0x0) {
          sVar7 = 0;
          __src_00 = (char *)0x0;
        }
        else {
          sVar7 = strlen(__s_00);
          sVar7 = (size_t)((uint)sVar7 & 0x3fffffff);
          __src_00 = __s_00;
        }
      }
      else if ((param_5 != 0) ||
              (sVar7 = (size_t)local_8c, __src_00 = param_4, ((&DAT_0017d382)[*__src] & 0x46) == 0))
      {
        uVar1 = local_84;
        if (__src[*(uint *)(lVar15 + 0x10)] == 0x22) {
          uVar1 = local_84 + 1;
        }
        sVar7 = (size_t)uVar1;
        __src_00 = local_80;
      }
      iVar18 = (int)sVar7;
      iVar19 = (int)*(undefined8 *)(lVar15 + 8) - (int)param_3;
      if (*(int *)(lVar15 + 0x10) != iVar18) {
        uVar1 = *(int *)(lVar15 + 0x10) + iVar19;
        memmove((void *)((long)__s + (ulong)(uint)(iVar18 + iVar19)),
                (void *)((long)__s + (ulong)uVar1),(ulong)(uVar16 - uVar1));
        uVar16 = (iVar18 - *(int *)(lVar15 + 0x10)) + uVar16;
        *(undefined1 *)((long)__s + (long)(int)uVar16) = 0;
      }
      memcpy((void *)((long)__s + (long)iVar19),__src_00,sVar7);
      FUN_0022a888(lVar20,lVar15);
      lVar15 = *param_2;
    } while (lVar15 != 0);
  }
  FUN_0023d018(param_1,__s,0xffffffff,1,0xffffffffffffffff);
  FUN_0022a888(lVar20,__s);
  uVar14 = 0;
  if (local_80 == (char *)0x0) {
    return 0;
  }
code_r0x002fde28:
  puVar10 = &DAT_00313858;
  if (DAT_00313830 != 0) {
    if (DAT_00316f08 != (char *)0x0) {
      (*DAT_003138b0)();
    }
    iVar6 = (*DAT_00313868)(local_80);
    DAT_00316e60 = DAT_00316e60 - iVar6;
    DAT_00316ea8 = DAT_00316ea8 + -1;
    (*DAT_00313858)(local_80);
    if (DAT_00316f08 == (char *)0x0) {
      return uVar14;
    }
    puVar10 = &DAT_003138c0;
    local_80 = DAT_00316f08;
  }
  (*(code *)*puVar10)(local_80);
  return uVar14;
}


// ===== 002fdee0  FUN_002fdee0 =====

void FUN_002fdee0(long *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (param_1[2] != 0) {
    FUN_0024cea8();
  }
  lVar2 = param_1[0x2b];
  if ((lVar2 != 0) &&
     ((*(long *)(lVar3 + 0x300) != 0 ||
      (iVar1 = *(int *)(lVar2 + 0x2c) + -1, *(int *)(lVar2 + 0x2c) = iVar1, iVar1 == 0)))) {
    FUN_0022d4a8(lVar3);
  }
  while (param_1[0x2c] != 0) {
    param_1[0x2c] = *(long *)(param_1[0x2c] + 0x28);
    FUN_0022e1ec(lVar3);
  }
  FUN_0022d3c4(lVar3,param_1[0x2d]);
  if (param_1[1] != 0) {
    FUN_0022a888(lVar3);
  }
  lVar2 = param_1[0x33];
  while (lVar2 != 0) {
    lVar2 = *(long *)(lVar2 + 0x18);
    FUN_0022a888(lVar3);
  }
  FUN_0024cf4c(param_1);
  return;
}


// ===== 002fdf98  FUN_002fdf98 =====

void FUN_002fdf98(undefined8 *param_1,char *param_2,long param_3,long param_4,undefined8 *param_5)

{
  undefined *puVar1;
  long lVar2;
  
  if (param_3 != 0) {
    if ((((*(ushort *)(param_3 + 0x14) ^ 0xffff) & 0x202) == 0) &&
       (*(char *)(param_3 + 0x16) == '\x01')) {
      param_3 = *(long *)(param_3 + 8);
    }
    else if ((*(ushort *)(param_3 + 0x14) & 1) == 0) {
      param_3 = FUN_0022ae18(param_3,1);
    }
    else {
      param_3 = 0;
    }
  }
  if (param_4 != 0) {
    if ((((*(ushort *)(param_4 + 0x14) ^ 0xffff) & 0x202) == 0) &&
       (*(char *)(param_4 + 0x16) == '\x01')) {
      param_4 = *(long *)(param_4 + 8);
    }
    else if ((*(ushort *)(param_4 + 0x14) & 1) == 0) {
      param_4 = FUN_0022ae18(param_4,1,param_3);
    }
    else {
      param_4 = 0;
    }
  }
  puVar1 = &DAT_0016f7d1;
  if (*param_2 != '\0') {
    puVar1 = &DAT_0016e4cb;
  }
  lVar2 = FUN_00255dd0(*param_5,"error in %s %s%s%s: %s",param_3,param_4,puVar1,param_2,param_5[1]);
  *(undefined4 *)((long)param_1 + 0x24) = 1;
  FUN_0023c180(*param_1,lVar2,0xffffffffffffffff,1,0xffffffffffffffff);
  if (lVar2 != 0) {
    FUN_0022a888(*param_5,lVar2);
    return;
  }
  return;
}


// ===== 002fe0d4  FUN_002fe0d4 =====

undefined8 FUN_002fe0d4(long *param_1,char *param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  if ((*param_2 == -0x59) && ((param_2[7] & 3U) == 0)) {
    puVar3 = (undefined8 *)param_1[5];
    plVar2 = (long *)(param_2 + 0x40);
    if (puVar3[2] == *plVar2) {
      puVar4 = *(undefined8 **)(*param_1 + 0x198);
      if (puVar4 != (undefined8 *)0x0) {
        if ((long *)*puVar4 == plVar2) {
          puVar5 = (undefined8 *)(*param_1 + 0x198);
        }
        else {
          do {
            puVar5 = puVar4;
            puVar4 = (undefined8 *)puVar5[3];
            if (puVar4 == (undefined8 *)0x0) {
              return 0;
            }
          } while ((long *)*puVar4 != plVar2);
          if (puVar3 == (undefined8 *)0x0) {
            return 0;
          }
          puVar5 = puVar5 + 3;
        }
        *puVar5 = puVar4[3];
        iVar1 = *(int *)(puVar3 + 1);
        uVar6 = *puVar3;
        *puVar3 = puVar4;
        puVar4[3] = uVar6;
        *(int *)(puVar3 + 1) = iVar1 + 1;
        return 0;
      }
    }
  }
  return 0;
}


// ===== 002fe170  FUN_002fe170 =====

undefined8 FUN_002fe170(long *param_1,long param_2)

{
  uint uVar1;
  uint *puVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  if ((*(ushort *)(param_2 + 6) & 0x420) != 0) {
    return 1;
  }
  puVar2 = *(uint **)(param_2 + 0x28);
  if (puVar2 == (uint *)0x0) {
    return 2;
  }
  uVar1 = *puVar2;
  if (0 < (int)uVar1) {
    plVar4 = (long *)param_1[5];
    uVar3 = 0;
    do {
      if ((*(long *)(puVar2 + uVar3 * 0x1a + 10) == plVar4[2]) &&
         (lVar7 = *(long *)(puVar2 + uVar3 * 0x1a + 6), lVar7 != 0)) {
        plVar5 = *(long **)(*param_1 + 0x198);
        if (plVar5 != (long *)0x0) {
          if (*plVar5 == lVar7) {
            plVar6 = (long *)(*param_1 + 0x198);
          }
          else {
            do {
              plVar6 = plVar5;
              plVar5 = (long *)plVar6[3];
              if (plVar5 == (long *)0x0) goto LAB_002fe1d8;
            } while (*plVar5 != lVar7);
            if (plVar4 == (long *)0x0) goto LAB_002fe1d8;
            plVar6 = plVar6 + 3;
          }
          *plVar6 = plVar5[3];
          lVar7 = plVar4[1];
          lVar8 = *plVar4;
          *plVar4 = (long)plVar5;
          plVar5[3] = lVar8;
          *(int *)(plVar4 + 1) = (int)lVar7 + 1;
        }
      }
LAB_002fe1d8:
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar1);
  }
  FUN_0027ece0(param_1,*(undefined8 *)(param_2 + 0x68));
  return 0;
}


// ===== 002fe25c  FUN_002fe25c =====

undefined8 FUN_002fe25c(long *param_1,char *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  puVar2 = (undefined8 *)param_1[5];
  if (*param_2 == -0x59) {
    if (*(int *)((long)puVar2 + 0xc) != (int)*(short *)(param_2 + 0x30)) {
      return 0;
    }
    if ((param_2[7] & 3U) != 0) {
      return 0;
    }
    if (puVar2[2] != *(long *)(param_2 + 0x40)) {
      return 0;
    }
    lVar4 = *param_1;
    puVar3 = *(undefined8 **)(lVar4 + 0x198);
    if (puVar3 == (undefined8 *)0x0) {
      return 0;
    }
    if ((char *)*puVar3 == param_2) goto LAB_002fe338;
    do {
      puVar5 = puVar3;
      puVar3 = (undefined8 *)puVar5[3];
      if (puVar3 == (undefined8 *)0x0) {
        return 0;
      }
    } while ((char *)*puVar3 != param_2);
  }
  else {
    if (*param_2 != 'M') {
      return 0;
    }
    if (*(int *)((long)puVar2 + 0xc) != (int)*(short *)(param_2 + 0x30)) {
      return 0;
    }
    lVar4 = *param_1;
    if (*(long *)(lVar4 + 0xb0) != puVar2[2]) {
      return 0;
    }
    puVar3 = *(undefined8 **)(lVar4 + 0x198);
    if (puVar3 == (undefined8 *)0x0) {
      return 0;
    }
    if ((char *)*puVar3 == param_2) {
LAB_002fe338:
      puVar5 = (undefined8 *)(lVar4 + 0x198);
      goto LAB_002fe33c;
    }
    do {
      puVar5 = puVar3;
      puVar3 = (undefined8 *)puVar5[3];
      if (puVar3 == (undefined8 *)0x0) {
        return 0;
      }
    } while ((char *)*puVar3 != param_2);
  }
  if (puVar2 == (undefined8 *)0x0) {
    return 0;
  }
  puVar5 = puVar5 + 3;
LAB_002fe33c:
  *puVar5 = puVar3[3];
  iVar1 = *(int *)(puVar2 + 1);
  uVar6 = *puVar2;
  *puVar2 = puVar3;
  puVar3[3] = uVar6;
  *(int *)(puVar2 + 1) = iVar1 + 1;
  return 0;
}


// ===== 002fe364  FUN_002fe364 =====

void FUN_002fe364(long param_1,long *param_2,uint *param_3,long param_4)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  if ((param_3 == (uint *)0x0) || (uVar1 = *param_3, (int)uVar1 < 1)) {
    return;
  }
  uVar3 = 0;
LAB_002fe398:
  if ((param_4 != 0) &&
     (lVar4 = *(long *)(param_3 + uVar3 * 6 + 4),
     (*(ushort *)((long)param_3 + uVar3 * 0x18 + 0x19) & 3) == 0 && lVar4 != 0)) {
    lVar5 = 0;
    do {
      bVar2 = *(byte *)(lVar4 + lVar5);
      if (bVar2 == *(byte *)(param_4 + lVar5)) {
        if (bVar2 == 0) goto code_r0x002fe3e8;
      }
      else if ((&DAT_0017d228)[bVar2] != (&DAT_0017d228)[*(byte *)(param_4 + lVar5)]) break;
      lVar5 = lVar5 + 1;
    } while( true );
  }
  goto LAB_002fe38c;
code_r0x002fe3e8:
  plVar6 = *(long **)(param_1 + 0x198);
  if (plVar6 != (long *)0x0) {
    plVar7 = (long *)(param_1 + 0x198);
    if (*plVar6 != lVar4) {
      do {
        plVar7 = plVar6;
        plVar6 = (long *)plVar7[3];
        if (plVar6 == (long *)0x0) goto LAB_002fe38c;
      } while (*plVar6 != lVar4);
      plVar7 = plVar7 + 3;
    }
    if (param_2 != (long *)0x0) {
      *plVar7 = plVar6[3];
      lVar4 = param_2[1];
      lVar5 = *param_2;
      *param_2 = (long)plVar6;
      plVar6[3] = lVar5;
      *(int *)(param_2 + 1) = (int)lVar4 + 1;
    }
  }
LAB_002fe38c:
  uVar3 = uVar3 + 1;
  if (uVar3 == uVar1) {
    return;
  }
  goto LAB_002fe398;
}


// ===== 002fe448  FUN_002fe448 =====

void FUN_002fe448(long param_1,long *param_2,uint *param_3,long param_4)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  if ((param_3 == (uint *)0x0) || (uVar1 = *param_3, (int)uVar1 < 1)) {
    return;
  }
  uVar3 = 0;
LAB_002fe478:
  lVar4 = *(long *)(param_3 + uVar3 * 4 + 2);
  if (lVar4 != 0 && param_4 != 0) {
    lVar5 = 0;
    do {
      bVar2 = *(byte *)(lVar4 + lVar5);
      if (bVar2 == *(byte *)(param_4 + lVar5)) {
        if (bVar2 == 0) goto code_r0x002fe4bc;
      }
      else if ((&DAT_0017d228)[bVar2] != (&DAT_0017d228)[*(byte *)(param_4 + lVar5)]) break;
      lVar5 = lVar5 + 1;
    } while( true );
  }
  goto LAB_002fe46c;
code_r0x002fe4bc:
  plVar6 = *(long **)(param_1 + 0x198);
  if (plVar6 != (long *)0x0) {
    plVar7 = (long *)(param_1 + 0x198);
    if (*plVar6 != lVar4) {
      do {
        plVar7 = plVar6;
        plVar6 = (long *)plVar7[3];
        if (plVar6 == (long *)0x0) goto LAB_002fe46c;
      } while (*plVar6 != lVar4);
      plVar7 = plVar7 + 3;
    }
    if (param_2 != (long *)0x0) {
      *plVar7 = plVar6[3];
      lVar4 = param_2[1];
      lVar5 = *param_2;
      *param_2 = (long)plVar6;
      plVar6[3] = lVar5;
      *(int *)(param_2 + 1) = (int)lVar4 + 1;
    }
  }
LAB_002fe46c:
  uVar3 = uVar3 + 1;
  if (uVar3 == uVar1) {
    return;
  }
  goto LAB_002fe478;
}


// ===== 002fe51c  FUN_002fe51c =====

long * FUN_002fe51c(int param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)malloc((long)(param_1 + 8));
  if (plVar1 == (long *)0x0) {
    sqlite3_log(7,"failed to allocate %u bytes of memory",param_1);
    plVar2 = (long *)0x0;
  }
  else {
    plVar2 = plVar1 + 1;
    *plVar1 = (long)param_1;
  }
  return plVar2;
}


// ===== 002fe56c  FUN_002fe56c =====

void FUN_002fe56c(long param_1)

{
  free((void *)(param_1 + -8));
  return;
}


// ===== 002fe574  FUN_002fe574 =====

long * FUN_002fe574(long param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)realloc((undefined4 *)(param_1 + -8),(long)(param_2 + 8));
  if (plVar1 == (long *)0x0) {
    sqlite3_log(7,"failed memory resize %u to %u bytes",*(undefined4 *)(param_1 + -8),param_2);
    plVar2 = (long *)0x0;
  }
  else {
    plVar2 = plVar1 + 1;
    *plVar1 = (long)param_2;
  }
  return plVar2;
}


// ===== 002fe5d0  FUN_002fe5d0 =====

undefined4 FUN_002fe5d0(long param_1)

{
  return *(undefined4 *)(param_1 + -8);
}


// ===== 002fe5d8  FUN_002fe5d8 =====

uint FUN_002fe5d8(int param_1)

{
  return param_1 + 7U & 0xfffffff8;
}


// ===== 002fe5e4  FUN_002fe5e4 =====

undefined8 FUN_002fe5e4(void)

{
  return 0;
}


// ===== 002fe5ec  FUN_002fe5ec =====

void FUN_002fe5ec(void)

{
  return;
}


// ===== 002fe5f0  sqlite3_memory_alarm =====

undefined8 sqlite3_memory_alarm(void)

{
  return 0;
}


// ===== 002fe5f8  sqlite3_os_init =====

undefined8 sqlite3_os_init(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = 0;
  do {
    param_1 = sqlite3_initialize(param_1);
    if ((int)param_1 == 0) {
      if (DAT_00313834 == '\0') {
        param_1 = 0;
LAB_002fe68c:
        bVar1 = true;
      }
      else {
        param_1 = (*DAT_003138a0)(2);
        if (param_1 == 0) goto LAB_002fe68c;
        (*DAT_003138b0)();
        bVar1 = false;
      }
      puVar2 = &DAT_00313a08 + lVar6 * 0xa8;
      if (DAT_00316f00 == puVar2) {
        puVar3 = &DAT_00316f00;
LAB_002fe6d0:
        *puVar3 = (&DAT_00313a18)[lVar6 * 0x15];
LAB_002fe6e0:
        if ((lVar6 == 0) || (DAT_00316f00 == (undefined *)0x0)) goto LAB_002fe6f8;
        puVar3 = (undefined8 *)(DAT_00316f00 + 0x10);
        puVar5 = (undefined *)*puVar3;
      }
      else {
        puVar5 = DAT_00316f00;
        if (DAT_00316f00 != (undefined *)0x0) {
          do {
            puVar4 = puVar5;
            puVar5 = *(undefined **)(puVar4 + 0x10);
            if (puVar5 == (undefined *)0x0) break;
          } while (puVar5 != puVar2);
          if (puVar5 == puVar2) {
            puVar3 = (undefined8 *)(puVar4 + 0x10);
            goto LAB_002fe6d0;
          }
          goto LAB_002fe6e0;
        }
LAB_002fe6f8:
        puVar3 = &DAT_00316f00;
        puVar5 = DAT_00316f00;
      }
      (&DAT_00313a18)[lVar6 * 0x15] = puVar5;
      *puVar3 = puVar2;
      if (!bVar1) {
        param_1 = (*DAT_003138c0)();
      }
    }
    lVar6 = lVar6 + 1;
    if (lVar6 == 4) {
      if (DAT_00313834 == '\0') {
        DAT_00316fb0 = 0;
      }
      else {
        DAT_00316fb0 = (*DAT_003138a0)(0xb);
      }
      DAT_00313f68 = getenv("SQLITE_TMPDIR");
      DAT_00313f70 = getenv("TMPDIR");
      return 0;
    }
  } while( true );
}


// ===== 002fe788  sqlite3_os_end =====

undefined8 sqlite3_os_end(void)

{
  DAT_00316fb0 = 0;
  return 0;
}


// ===== 002fe798  sqlite3_value_encoding =====

undefined1 sqlite3_value_encoding(long param_1)

{
  return *(undefined1 *)(param_1 + 0x16);
}


// ===== 002fe7a0  sqlite3_enable_load_extension =====

undefined8 sqlite3_enable_load_extension(long param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 != 0) {
    (*DAT_003138b0)();
    lVar2 = *(long *)(param_1 + 0x18);
  }
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = 0x30000;
  }
  *(ulong *)(param_1 + 0x30) = *(ulong *)(param_1 + 0x30) & 0xfffffffffffcffff | uVar1;
  if (lVar2 != 0) {
    (*DAT_003138c0)();
  }
  return 0;
}


// ===== 002fe808  sqlite3_shutdown =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 sqlite3_shutdown(void)

{
  if (DAT_00313984 != 0) {
    DAT_00316fb0 = 0;
    sqlite3_reset_auto_extension();
    DAT_00313984 = 0;
  }
  if (DAT_00313994 != 0) {
    if (DAT_003138f0 != (code *)0x0) {
      (*DAT_003138f0)(DAT_003138e0);
    }
    DAT_00313994 = 0;
  }
  if (DAT_00313990 != 0) {
    if (DAT_00313880 != (code *)0x0) {
      (*DAT_00313880)(DAT_00313888);
    }
    DAT_00313990 = 0;
    *(undefined8 *)PTR_sqlite3_data_directory_0030d4b0 = 0;
    DAT_00316f10 = 0;
    DAT_00316f08 = 0;
    _DAT_00316f20 = 0;
    DAT_00316f18 = 0;
    *(undefined8 *)PTR_sqlite3_temp_directory_0030d4a8 = 0;
  }
  if (DAT_0031398c != 0) {
    if (DAT_00313898 != (code *)0x0) {
      (*DAT_00313898)();
    }
    DAT_0031398c = 0;
  }
  return 0;
}


// ===== 002fe8d8  sqlite3_global_recover =====

undefined8 sqlite3_global_recover(void)

{
  return 0;
}


// ===== 002fe8e0  FUN_002fe8e0 =====

void FUN_002fe8e0(void)

{
  (*(code *)PTR_0030d920)();
  return;
}


// ===== 002fe900  <EXTERNAL>::__cxa_finalize =====

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_0030d928)();
  return;
}


// ===== 002fe910  <EXTERNAL>::__cxa_atexit =====

void __cxa_atexit(void)

{
  (*(code *)PTR___cxa_atexit_0030d930)();
  return;
}


// ===== 002fe920  <EXTERNAL>::__register_atfork =====

void __register_atfork(void)

{
  (*(code *)PTR___register_atfork_0030d938)();
  return;
}


// ===== 002fe930  sqlite3_initialize =====

void sqlite3_initialize(void)

{
  (*(code *)PTR_sqlite3_initialize_0030d940)();
  return;
}


// ===== 002fe940  sqlite3_soft_heap_limit64 =====

void sqlite3_soft_heap_limit64(void)

{
  (*(code *)PTR_sqlite3_soft_heap_limit64_0030d948)();
  return;
}


// ===== 002fe950  sqlite3_hard_heap_limit64 =====

void sqlite3_hard_heap_limit64(void)

{
  (*(code *)PTR_sqlite3_hard_heap_limit64_0030d950)();
  return;
}


// ===== 002fe960  sqlite3_free =====

void sqlite3_free(void)

{
  (*(code *)PTR_sqlite3_free_0030d958)();
  return;
}


// ===== 002fe970  sqlite3_str_vappendf =====

void sqlite3_str_vappendf(void)

{
  (*(code *)PTR_sqlite3_str_vappendf_0030d960)();
  return;
}


// ===== 002fe980  sqlite3_str_appendf =====

void sqlite3_str_appendf(void)

{
  (*(code *)PTR_sqlite3_str_appendf_0030d968)();
  return;
}


// ===== 002fe990  sqlite3_mprintf =====

void sqlite3_mprintf(void)

{
  (*(code *)PTR_sqlite3_mprintf_0030d970)();
  return;
}


// ===== 002fe9a0  sqlite3_snprintf =====

void sqlite3_snprintf(void)

{
  (*(code *)PTR_sqlite3_snprintf_0030d978)();
  return;
}


// ===== 002fe9b0  sqlite3_log =====

void sqlite3_log(void)

{
  (*(code *)PTR_sqlite3_log_0030d980)();
  return;
}


// ===== 002fe9c0  sqlite3_randomness =====

void sqlite3_randomness(void)

{
  (*(code *)PTR_sqlite3_randomness_0030d988)();
  return;
}


// ===== 002fe9d0  sqlite3_stricmp =====

void sqlite3_stricmp(void)

{
  (*(code *)PTR_sqlite3_stricmp_0030d990)();
  return;
}


// ===== 002fe9e0  sqlite3_strnicmp =====

void sqlite3_strnicmp(void)

{
  (*(code *)PTR_sqlite3_strnicmp_0030d998)();
  return;
}


// ===== 002fe9f0  sqlite3_step =====

void sqlite3_step(void)

{
  (*(code *)PTR_sqlite3_step_0030d9a0)();
  return;
}


// ===== 002fea00  sqlite3_column_int64 =====

void sqlite3_column_int64(void)

{
  (*(code *)PTR_sqlite3_column_int64_0030d9a8)();
  return;
}


// ===== 002fea10  sqlite3_column_int =====

void sqlite3_column_int(void)

{
  (*(code *)PTR_sqlite3_column_int_0030d9b0)();
  return;
}


// ===== 002fea20  sqlite3_finalize =====

void sqlite3_finalize(void)

{
  (*(code *)PTR_sqlite3_finalize_0030d9b8)();
  return;
}


// ===== 002fea30  sqlite3_backup_step =====

void sqlite3_backup_step(void)

{
  (*(code *)PTR_sqlite3_backup_step_0030d9c0)();
  return;
}


// ===== 002fea40  sqlite3_backup_finish =====

void sqlite3_backup_finish(void)

{
  (*(code *)PTR_sqlite3_backup_finish_0030d9c8)();
  return;
}


// ===== 002fea50  sqlite3_reset =====

void sqlite3_reset(void)

{
  (*(code *)PTR_sqlite3_reset_0030d9d0)();
  return;
}


// ===== 002fea60  sqlite3_clear_bindings =====

void sqlite3_clear_bindings(void)

{
  (*(code *)PTR_sqlite3_clear_bindings_0030d9d8)();
  return;
}


// ===== 002fea70  sqlite3_value_blob =====

void sqlite3_value_blob(void)

{
  (*(code *)PTR_sqlite3_value_blob_0030d9e0)();
  return;
}


// ===== 002fea80  sqlite3_value_text =====

void sqlite3_value_text(void)

{
  (*(code *)PTR_sqlite3_value_text_0030d9e8)();
  return;
}


// ===== 002fea90  sqlite3_value_bytes =====

void sqlite3_value_bytes(void)

{
  (*(code *)PTR_sqlite3_value_bytes_0030d9f0)();
  return;
}


// ===== 002feaa0  sqlite3_value_dup =====

void sqlite3_value_dup(void)

{
  (*(code *)PTR_sqlite3_value_dup_0030d9f8)();
  return;
}


// ===== 002feab0  sqlite3_result_value =====

void sqlite3_result_value(void)

{
  (*(code *)PTR_sqlite3_result_value_0030da00)();
  return;
}


// ===== 002feac0  sqlite3_result_error_nomem =====

void sqlite3_result_error_nomem(void)

{
  (*(code *)PTR_sqlite3_result_error_nomem_0030da08)();
  return;
}


// ===== 002fead0  sqlite3_set_auxdata =====

void sqlite3_set_auxdata(void)

{
  (*(code *)PTR_sqlite3_set_auxdata_0030da10)();
  return;
}


// ===== 002feae0  sqlite3_column_count =====

void sqlite3_column_count(void)

{
  (*(code *)PTR_sqlite3_column_count_0030da18)();
  return;
}


// ===== 002feaf0  sqlite3_column_blob =====

void sqlite3_column_blob(void)

{
  (*(code *)PTR_sqlite3_column_blob_0030da20)();
  return;
}


// ===== 002feb00  sqlite3_column_bytes =====

void sqlite3_column_bytes(void)

{
  (*(code *)PTR_sqlite3_column_bytes_0030da28)();
  return;
}


// ===== 002feb10  sqlite3_column_double =====

void sqlite3_column_double(void)

{
  (*(code *)PTR_sqlite3_column_double_0030da30)();
  return;
}


// ===== 002feb20  sqlite3_column_text =====

void sqlite3_column_text(void)

{
  (*(code *)PTR_sqlite3_column_text_0030da38)();
  return;
}


// ===== 002feb30  sqlite3_column_value =====

void sqlite3_column_value(void)

{
  (*(code *)PTR_sqlite3_column_value_0030da40)();
  return;
}


// ===== 002feb40  sqlite3_column_type =====

void sqlite3_column_type(void)

{
  (*(code *)PTR_sqlite3_column_type_0030da48)();
  return;
}


// ===== 002feb50  sqlite3_column_name =====

void sqlite3_column_name(void)

{
  (*(code *)PTR_sqlite3_column_name_0030da50)();
  return;
}


// ===== 002feb60  sqlite3_bind_blob64 =====

void sqlite3_bind_blob64(void)

{
  (*(code *)PTR_sqlite3_bind_blob64_0030da58)();
  return;
}


// ===== 002feb70  sqlite3_bind_double =====

void sqlite3_bind_double(void)

{
  (*(code *)PTR_sqlite3_bind_double_0030da60)();
  return;
}


// ===== 002feb80  sqlite3_bind_int64 =====

void sqlite3_bind_int64(void)

{
  (*(code *)PTR_sqlite3_bind_int64_0030da68)();
  return;
}


// ===== 002feb90  sqlite3_bind_text64 =====

void sqlite3_bind_text64(void)

{
  (*(code *)PTR_sqlite3_bind_text64_0030da70)();
  return;
}


// ===== 002feba0  sqlite3_bind_parameter_count =====

void sqlite3_bind_parameter_count(void)

{
  (*(code *)PTR_sqlite3_bind_parameter_count_0030da78)();
  return;
}


// ===== 002febb0  sqlite3_bind_parameter_name =====

void sqlite3_bind_parameter_name(void)

{
  (*(code *)PTR_sqlite3_bind_parameter_name_0030da80)();
  return;
}


// ===== 002febc0  sqlite3_sql =====

void sqlite3_sql(void)

{
  (*(code *)PTR_sqlite3_sql_0030da88)();
  return;
}


// ===== 002febd0  sqlite3_value_numeric_type =====

void sqlite3_value_numeric_type(void)

{
  (*(code *)PTR_sqlite3_value_numeric_type_0030da90)();
  return;
}


// ===== 002febe0  sqlite3_exec =====

void sqlite3_exec(void)

{
  (*(code *)PTR_sqlite3_exec_0030da98)();
  return;
}


// ===== 002febf0  sqlite3_errmsg =====

void sqlite3_errmsg(void)

{
  (*(code *)PTR_sqlite3_errmsg_0030daa0)();
  return;
}


// ===== 002fec00  sqlite3_load_extension =====

void sqlite3_load_extension(void)

{
  (*(code *)PTR_sqlite3_load_extension_0030daa8)();
  return;
}


// ===== 002fec10  sqlite3_reset_auto_extension =====

void sqlite3_reset_auto_extension(void)

{
  (*(code *)PTR_sqlite3_reset_auto_extension_0030dab0)();
  return;
}


// ===== 002fec20  sqlite3_prepare_v3 =====

void sqlite3_prepare_v3(void)

{
  (*(code *)PTR_sqlite3_prepare_v3_0030dab8)();
  return;
}


// ===== 002fec30  sqlite3_free_table =====

void sqlite3_free_table(void)

{
  (*(code *)PTR_sqlite3_free_table_0030dac0)();
  return;
}


// ===== 002fec40  sqlite3_declare_vtab =====

void sqlite3_declare_vtab(void)

{
  (*(code *)PTR_sqlite3_declare_vtab_0030dac8)();
  return;
}


// ===== 002fec50  sqlite3_vtab_config =====

void sqlite3_vtab_config(void)

{
  (*(code *)PTR_sqlite3_vtab_config_0030dad0)();
  return;
}


// ===== 002fec60  sqlite3_complete =====

void sqlite3_complete(void)

{
  (*(code *)PTR_sqlite3_complete_0030dad8)();
  return;
}


// ===== 002fec70  sqlite3_config =====

void sqlite3_config(void)

{
  (*(code *)PTR_sqlite3_config_0030dae0)();
  return;
}


// ===== 002fec80  sqlite3_db_release_memory =====

void sqlite3_db_release_memory(void)

{
  (*(code *)PTR_sqlite3_db_release_memory_0030dae8)();
  return;
}


// ===== 002fec90  sqlite3_changes =====

void sqlite3_changes(void)

{
  (*(code *)PTR_sqlite3_changes_0030daf0)();
  return;
}


// ===== 002feca0  sqlite3_close_v2 =====

void sqlite3_close_v2(void)

{
  (*(code *)PTR_sqlite3_close_v2_0030daf8)();
  return;
}


// ===== 002fecb0  sqlite3_busy_timeout =====

void sqlite3_busy_timeout(void)

{
  (*(code *)PTR_sqlite3_busy_timeout_0030db00)();
  return;
}


// ===== 002fecc0  sqlite3_wal_autocheckpoint =====

void sqlite3_wal_autocheckpoint(void)

{
  (*(code *)PTR_sqlite3_wal_autocheckpoint_0030db08)();
  return;
}


// ===== 002fecd0  sqlite3_wal_checkpoint_v2 =====

void sqlite3_wal_checkpoint_v2(void)

{
  (*(code *)PTR_sqlite3_wal_checkpoint_v2_0030db10)();
  return;
}


// ===== 002fece0  sqlite3_errcode =====

void sqlite3_errcode(void)

{
  (*(code *)PTR_sqlite3_errcode_0030db18)();
  return;
}


// ===== 002fecf0  sqlite3_open_v2 =====

void sqlite3_open_v2(void)

{
  (*(code *)PTR_sqlite3_open_v2_0030db20)();
  return;
}


// ===== 002fed00  sqlite3_file_control =====

void sqlite3_file_control(void)

{
  (*(code *)PTR_sqlite3_file_control_0030db28)();
  return;
}


// ===== 002fed10  sqlite3_uri_parameter =====

void sqlite3_uri_parameter(void)

{
  (*(code *)PTR_sqlite3_uri_parameter_0030db30)();
  return;
}


// ===== 002fed20  sqlite3_uri_boolean =====

void sqlite3_uri_boolean(void)

{
  (*(code *)PTR_sqlite3_uri_boolean_0030db38)();
  return;
}


// ===== 002fed30  sqlite3_compileoption_used =====

void sqlite3_compileoption_used(void)

{
  (*(code *)PTR_sqlite3_compileoption_used_0030db40)();
  return;
}


// ===== 002fed40  <EXTERNAL>::strcmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_0030db48)((int)__s1);
  return iVar1;
}


// ===== 002fed50  <EXTERNAL>::pthread_mutexattr_init =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutexattr_init(pthread_mutexattr_t *__attr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutexattr_init_0030db50)((int)__attr);
  return iVar1;
}


// ===== 002fed60  <EXTERNAL>::pthread_mutexattr_settype =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutexattr_settype(pthread_mutexattr_t *__attr,int __kind)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutexattr_settype_0030db58)((int)__attr,__kind);
  return iVar1;
}


// ===== 002fed70  <EXTERNAL>::pthread_mutex_init =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_0030db60)((int)__mutex);
  return iVar1;
}


// ===== 002fed80  <EXTERNAL>::pthread_mutexattr_destroy =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutexattr_destroy(pthread_mutexattr_t *__attr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutexattr_destroy_0030db68)((int)__attr);
  return iVar1;
}


// ===== 002fed90  <EXTERNAL>::pthread_mutex_destroy =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_0030db70)((int)__mutex);
  return iVar1;
}


// ===== 002feda0  <EXTERNAL>::pthread_mutex_lock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_0030db78)((int)__mutex);
  return iVar1;
}


// ===== 002fedb0  <EXTERNAL>::pthread_mutex_trylock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_trylock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_trylock_0030db80)((int)__mutex);
  return iVar1;
}


// ===== 002fedc0  <EXTERNAL>::pthread_mutex_unlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_0030db88)((int)__mutex);
  return iVar1;
}


// ===== 002fedd0  <EXTERNAL>::__memcpy_chk =====

void __memcpy_chk(void)

{
  (*(code *)PTR___memcpy_chk_0030db90)();
  return;
}


// ===== 002fede0  <EXTERNAL>::__strlen_chk =====

void __strlen_chk(void)

{
  (*(code *)PTR___strlen_chk_0030db98)();
  return;
}


// ===== 002fedf0  <EXTERNAL>::__memset_chk =====

void __memset_chk(void)

{
  (*(code *)PTR___memset_chk_0030dba0)();
  return;
}


// ===== 002fee00  <EXTERNAL>::close =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_0030dba8)(__fd);
  return iVar1;
}


// ===== 002fee10  <EXTERNAL>::stat =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat(char *__file,stat *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_stat_0030dbb0)((int)__file);
  return iVar1;
}


// ===== 002fee20  <EXTERNAL>::mkdir =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mkdir(char *__path,__mode_t __mode)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_mkdir_0030dbb8)((int)__path,__mode);
  return iVar1;
}


// ===== 002fee30  <EXTERNAL>::open =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open_0030dbc0)((int)__file,__oflag);
  return iVar1;
}


// ===== 002fee40  <EXTERNAL>::__errno =====

void __errno(void)

{
  (*(code *)PTR___errno_0030dbc8)();
  return;
}


// ===== 002fee50  <EXTERNAL>::sysconf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long sysconf(int __name)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_sysconf_0030dbd0)(__name);
  return lVar1;
}


// ===== 002fee60  <EXTERNAL>::lseek64 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__off64_t lseek64(int __fd,__off64_t __offset,int __whence)

{
  __off64_t _Var1;
  
  _Var1 = (*(code *)PTR_lseek64_0030dbd8)(__fd,__offset,__whence);
  return _Var1;
}


// ===== 002fee70  <EXTERNAL>::fsync =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fsync(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fsync_0030dbe0)(__fd);
  return iVar1;
}


// ===== 002fee80  <EXTERNAL>::getpid =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_getpid_0030dbe8)();
  return _Var1;
}


// ===== 002fee90  <EXTERNAL>::memcmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_0030dbf0)((int)__s1);
  return iVar1;
}


// ===== 002feea0  <EXTERNAL>::utimes =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int utimes(char *__file,timeval *__tvp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_utimes_0030dbf8)((int)__file);
  return iVar1;
}


// ===== 002feeb0  <EXTERNAL>::dlopen =====

void dlopen(void)

{
  (*(code *)PTR_dlopen_0030dc00)();
  return;
}


// ===== 002feec0  <EXTERNAL>::dlerror =====

void dlerror(void)

{
  (*(code *)PTR_dlerror_0030dc08)();
  return;
}


// ===== 002feed0  <EXTERNAL>::dlsym =====

void dlsym(void)

{
  (*(code *)PTR_dlsym_0030dc10)();
  return;
}


// ===== 002feee0  <EXTERNAL>::dlclose =====

void dlclose(void)

{
  (*(code *)PTR_dlclose_0030dc18)();
  return;
}


// ===== 002feef0  <EXTERNAL>::time =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_0030dc20)();
  return tVar1;
}


// ===== 002fef00  <EXTERNAL>::sleep =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_sleep_0030dc28)(__seconds);
  return uVar1;
}


// ===== 002fef10  <EXTERNAL>::gettimeofday =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_gettimeofday_0030dc30)((int)__tv);
  return iVar1;
}


// ===== 002fef20  <EXTERNAL>::getenv =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_getenv_0030dc38)();
  return pcVar1;
}


// ===== 002fef30  <EXTERNAL>::pthread_join =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_0030dc40)((int)__th);
  return iVar1;
}


// ===== 002fef40  <EXTERNAL>::pthread_create =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_0030dc48)((int)__newthread);
  return iVar1;
}


// ===== 002fef50  <EXTERNAL>::strncmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_0030dc50)((int)__s1);
  return iVar1;
}


// ===== 002fef60  <EXTERNAL>::strcspn =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strcspn(char *__s,char *__reject)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strcspn_0030dc58)();
  return sVar1;
}


// ===== 002fef70  <EXTERNAL>::strrchr =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strrchr_0030dc60)(__s,__c);
  return pcVar1;
}


// ===== 002fef80  <EXTERNAL>::localtime =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * localtime(time_t *__timer)

{
  tm *ptVar1;
  
  ptVar1 = (tm *)(*(code *)PTR_localtime_0030dc68)();
  return ptVar1;
}


// ===== 002fef90  <EXTERNAL>::malloc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0030dc70)();
  return pvVar1;
}


// ===== 002fefa0  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0030dc78)();
  return;
}


// ===== 002fefb0  <EXTERNAL>::realloc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_0030dc80)();
  return pvVar1;
}


// ===== 002fefc0  <EXTERNAL>::strlen =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_0030dc88)();
  return sVar1;
}


// ===== 002fefd0  discord::jni::JavaVm::JavaVm =====

void __thiscall discord::jni::JavaVm::JavaVm(JavaVm *this,_JavaVM *param_1,_JNIEnv *param_2)

{
  (*(code *)PTR_JavaVm_0030dc90)();
  return;
}


// ===== 002fefe0  discord::jni::JavaVm::JavaVm =====

void __thiscall discord::jni::JavaVm::JavaVm(JavaVm *this,JavaVm *param_1)

{
  (*(code *)PTR_JavaVm_0030dc98)();
  return;
}


// ===== 002feff0  discord::jni::JavaVm::~JavaVm =====

void __thiscall discord::jni::JavaVm::~JavaVm(JavaVm *this)

{
  (*(code *)PTR__JavaVm_0030dca0)();
  return;
}


// ===== 002ff000  <EXTERNAL>::__cxa_begin_catch =====

void __cxa_begin_catch(void)

{
  (*(code *)PTR___cxa_begin_catch_0030dca8)();
  return;
}


// ===== 002ff010  <EXTERNAL>::std::terminate =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::terminate(void)

{
  (*(code *)PTR_terminate_0030dcb0)();
  return;
}


// ===== 002ff020  discord::jni::throw_exception =====

void discord::jni::throw_exception(_JNIEnv *param_1,basic_string *param_2)

{
  (*(code *)PTR_throw_exception_0030dcb8)();
  return;
}


// ===== 002ff030  discord::jni::as_jstring =====

void discord::jni::as_jstring(_JNIEnv *param_1,char *param_2)

{
  (*(code *)PTR_as_jstring_0030dcc0)();
  return;
}


// ===== 002ff040  discord::jni::as_string =====

void __thiscall discord::jni::as_string(jni *this,_JNIEnv *param_1,_jstring *param_2)

{
  (*(code *)PTR_as_string_0030dcc8)();
  return;
}


// ===== 002ff050  <EXTERNAL>::operator.new =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_0030dcd0)();
  return pvVar1;
}


// ===== 002ff060  <EXTERNAL>::memmove =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_0030dcd8)();
  return pvVar1;
}


// ===== 002ff070  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0030dce0)();
  return;
}


// ===== 002ff080  <EXTERNAL>::__cxa_allocate_exception =====

void __cxa_allocate_exception(void)

{
  (*(code *)PTR___cxa_allocate_exception_0030dce8)();
  return;
}


// ===== 002ff090  <EXTERNAL>::__cxa_throw =====

void __cxa_throw(void)

{
  (*(code *)PTR___cxa_throw_0030dcf0)();
  return;
}


// ===== 002ff0a0  <EXTERNAL>::__cxa_free_exception =====

void __cxa_free_exception(void)

{
  (*(code *)PTR___cxa_free_exception_0030dcf8)();
  return;
}


// ===== 002ff0b0  <EXTERNAL>::std::logic_error::logic_error =====

void __thiscall std::logic_error::logic_error(logic_error *this,char *param_1)

{
  (*(code *)PTR_logic_error_0030dd00)();
  return;
}


// ===== 002ff0c0  <EXTERNAL>::std::__ndk1::__shared_weak_count::__release_weak =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__shared_weak_count::__release_weak(void)

{
  (*(code *)PTR___release_weak_0030dd08)();
  return;
}


// ===== 002ff0d0  <EXTERNAL>::std::__ndk1::__call_once =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__call_once(ulong *param_1,void *param_2,_func_void_void_ptr *param_3)

{
  (*(code *)PTR___call_once_0030dd10)();
  return;
}


// ===== 002ff0e0  discord::frontends::discordapp::DiscordMobileApi::open =====

void __thiscall discord::frontends::discordapp::DiscordMobileApi::open(void)

{
  (*(code *)PTR_open_0030dd18)();
  return;
}


// ===== 002ff0f0  _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc =====

void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc(void)

{
  (*(code *)
    PTR__ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc_0030dd20
  )();
  return;
}


// ===== 002ff100  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::__init_copy_ctor_external =====

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
__init_copy_ctor_external
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1,ulong param_2)

{
  (*(code *)PTR___init_copy_ctor_external_0030dd28)();
  return;
}


// ===== 002ff110  discord::frontends::discordapp::DiscordMobileApi::get_guild_versions =====

void discord::frontends::discordapp::DiscordMobileApi::get_guild_versions(void)

{
  (*(code *)PTR_get_guild_versions_0030dd30)();
  return;
}


// ===== 002ff120  discord::Result<discord::frontends::discordapp::Json,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>::~Result =====

void __thiscall
discord::
Result<discord::frontends::discordapp::Json,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
::~Result(Result<discord::frontends::discordapp::Json,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
          *this)

{
  (*(code *)PTR__Result_0030dd38)();
  return;
}


// ===== 002ff130  discord::frontends::discordapp::DiscordMobileApi::get_guild_emojis =====

void discord::frontends::discordapp::DiscordMobileApi::get_guild_emojis(void)

{
  (*(code *)PTR_get_guild_emojis_0030dd40)();
  return;
}


// ===== 002ff140  _JNIEnv::NewObject =====

void _JNIEnv::NewObject(_jclass *param_1,_jmethodID *param_2,...)

{
  (*(code *)PTR_NewObject_0030dd48)();
  return;
}


// ===== 002ff150  discord::raw::RawValue::variant =====

void discord::raw::RawValue::variant(void)

{
  (*(code *)PTR_variant_0030dd50)();
  return;
}


// ===== 002ff160  discord::raw::RawValue::variant_type =====

void __thiscall discord::raw::RawValue::variant_type(RawValue *this)

{
  (*(code *)PTR_variant_type_0030dd58)();
  return;
}


// ===== 002ff170  discord::raw::RawBytes::variant =====

void discord::raw::RawBytes::variant(void)

{
  (*(code *)PTR_variant_0030dd60)();
  return;
}


// ===== 002ff180  discord::raw::RawValue::is_json =====

void __thiscall discord::raw::RawValue::is_json(RawValue *this)

{
  (*(code *)PTR_is_json_0030dd68)();
  return;
}


// ===== 002ff190  discord::raw::RawObject::data =====

void __thiscall discord::raw::RawObject::data(RawObject *this)

{
  (*(code *)PTR_data_0030dd70)();
  return;
}


// ===== 002ff1a0  discord::raw::RawObject::size =====

void __thiscall discord::raw::RawObject::size(RawObject *this)

{
  (*(code *)PTR_size_0030dd78)();
  return;
}


// ===== 002ff1b0  <EXTERNAL>::memcpy =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0030dd80)();
  return pvVar1;
}


// ===== 002ff1c0  _JNIEnv::CallBooleanMethod =====

void _JNIEnv::CallBooleanMethod(_jobject *param_1,_jmethodID *param_2,...)

{
  (*(code *)PTR_CallBooleanMethod_0030dd88)();
  return;
}


// ===== 002ff1d0  _JNIEnv::CallObjectMethod =====

void _JNIEnv::CallObjectMethod(_jobject *param_1,_jmethodID *param_2,...)

{
  (*(code *)PTR_CallObjectMethod_0030dd90)();
  return;
}


// ===== 002ff1e0  discord::Result<std::__ndk1::map<discord::raw::RawValue,boost::container::small_vector<discord::raw::RawValue,1ul,void,void>,std::__ndk1::less<discord::raw::RawValue>,std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue_const,boost::container::small_vector<discord::raw::RawValue,1ul,void,void>>>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>::~Result =====

void __thiscall
discord::
Result<std::__ndk1::map<discord::raw::RawValue,boost::container::small_vector<discord::raw::RawValue,1ul,void,void>,std::__ndk1::less<discord::raw::RawValue>,std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue_const,boost::container::small_vector<discord::raw::RawValue,1ul,void,void>>>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
::~Result(Result<std::__ndk1::map<discord::raw::RawValue,boost::container::small_vector<discord::raw::RawValue,1ul,void,void>,std::__ndk1::less<discord::raw::RawValue>,std::__ndk1::allocator<std::__ndk1::pair<discord::raw::RawValue_const,boost::container::small_vector<discord::raw::RawValue,1ul,void,void>>>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
          *this)

{
  (*(code *)PTR__Result_0030dd98)();
  return;
}


// ===== 002ff1f0  discord::frontends::discordapp::DiscordMobileApi::put_message =====

void __thiscall discord::frontends::discordapp::DiscordMobileApi::put_message(void)

{
  (*(code *)PTR_put_message_0030dda0)();
  return;
}


// ===== 002ff200  <EXTERNAL>::std::exception::~exception =====

void __thiscall std::exception::~exception(exception *this)

{
  (*(code *)PTR__exception_0030dda8)();
  return;
}


// ===== 002ff210  _ZNSt6__ndk120__shared_ptr_emplaceIN7discord9frontends10discordapp16DiscordMobileApiENS_9allocatorIS4_EEEC2B8ne180000IJRNS_12basic_stringIcNS_11char_traitsIcEENS5_IcEEEEES6_TnNS_9enable_ifIXntsr7is_sameINT0_10value_typeENS_19__for_overwrite_tagEEE5valueEiE4typeELi0EEES6_DpOT_ =====

void _ZNSt6__ndk120__shared_ptr_emplaceIN7discord9frontends10discordapp16DiscordMobileApiENS_9allocatorIS4_EEEC2B8ne180000IJRNS_12basic_stringIcNS_11char_traitsIcEENS5_IcEEEEES6_TnNS_9enable_ifIXntsr7is_sameINT0_10value_typeENS_19__for_overwrite_tagEEE5valueEiE4typeELi0EEES6_DpOT_
               (void)

{
  (*(code *)
    PTR__ZNSt6__ndk120__shared_ptr_emplaceIN7discord9frontends10discordapp16DiscordMobileApiENS_9allocatorIS4_EEEC2B8ne180000IJRNS_12basic_stringIcNS_11char_traitsIcEENS5_IcEEEEES6_TnNS_9enable_ifIXntsr7is_sameINT0_10value_typeENS_19__for_overwrite_tagEEE5valueEiE4typeELi0EEES6_DpOT__0030ddb0
  )();
  return;
}


// ===== 002ff220  discord::frontends::discordapp::DiscordMobileApi::DiscordMobileApi =====

void __thiscall discord::frontends::discordapp::DiscordMobileApi::DiscordMobileApi(void)

{
  (*(code *)PTR_DiscordMobileApi_0030ddb8)();
  return;
}


// ===== 002ff230  <EXTERNAL>::std::__ndk1::__shared_weak_count::~__shared_weak_count =====

void __thiscall std::__ndk1::__shared_weak_count::~__shared_weak_count(__shared_weak_count *this)

{
  (*(code *)PTR____shared_weak_count_0030ddc0)();
  return;
}


// ===== 002ff240  <EXTERNAL>::facebook::jni::initialize =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::initialize(_JavaVM *param_1,function *param_2)

{
  (*(code *)PTR_initialize_0030ddc8)();
  return;
}


// ===== 002ff250  discord::android::KvStorageBridge::registerNatives =====

void discord::android::KvStorageBridge::registerNatives(void)

{
  (*(code *)PTR_registerNatives_0030ddd0)();
  return;
}


// ===== 002ff260  <EXTERNAL>::facebook::jni::Environment::current =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::Environment::current(void)

{
  (*(code *)PTR_current_0030ddd8)();
  return;
}


// ===== 002ff270  <EXTERNAL>::facebook::jni::throwCppExceptionIf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::throwCppExceptionIf(bool param_1)

{
  (*(code *)PTR_throwCppExceptionIf_0030dde0)(param_1);
  return;
}


// ===== 002ff280  <EXTERNAL>::__cxa_guard_acquire =====

void __cxa_guard_acquire(void)

{
  (*(code *)PTR___cxa_guard_acquire_0030dde8)();
  return;
}


// ===== 002ff290  <EXTERNAL>::facebook::jni::findClassStatic =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::findClassStatic(char *param_1)

{
  (*(code *)PTR_findClassStatic_0030ddf0)();
  return;
}


// ===== 002ff2a0  <EXTERNAL>::__cxa_guard_release =====

void __cxa_guard_release(void)

{
  (*(code *)PTR___cxa_guard_release_0030ddf8)();
  return;
}


// ===== 002ff2b0  <EXTERNAL>::__cxa_guard_abort =====

void __cxa_guard_abort(void)

{
  (*(code *)PTR___cxa_guard_abort_0030de00)();
  return;
}


// ===== 002ff2c0  facebook::jni::detail::FunctionWrapper<void(*)(facebook::jni::alias_ref<facebook::jni::JObject>,long,facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<facebook::react::CallInvokerHolder,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::alias_ref<facebook::jni::JString>),facebook::jni::JObject,void,long,facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<facebook::react::CallInvokerHolder,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::alias_ref<facebook::jni::JString>>::call =====

void facebook::jni::detail::
     FunctionWrapper<void(*)(facebook::jni::alias_ref<facebook::jni::JObject>,long,facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<facebook::react::CallInvokerHolder,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::alias_ref<facebook::jni::JString>),facebook::jni::JObject,void,long,facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<facebook::react::CallInvokerHolder,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::alias_ref<facebook::jni::JString>>
     ::call(_JNIEnv *param_1,_jobject *param_2,long param_3,_javaobject *param_4,_jstring *param_5,
           _func_void_alias_ref_long_alias_ref_alias_ref *param_6)

{
  (*(code *)PTR_call_0030de08)();
  return;
}


// ===== 002ff2d0  <EXTERNAL>::facebook::jni::detail::JniEnvCacher::JniEnvCacher =====

void __thiscall
facebook::jni::detail::JniEnvCacher::JniEnvCacher(JniEnvCacher *this,_JNIEnv *param_1)

{
  (*(code *)PTR_JniEnvCacher_0030de10)();
  return;
}


// ===== 002ff2e0  discord::frontends::jsi::KvClassicModule::deactivate =====

void discord::frontends::jsi::KvClassicModule::deactivate(void)

{
  (*(code *)PTR_deactivate_0030de18)();
  return;
}


// ===== 002ff2f0  <EXTERNAL>::facebook::jni::detail::JniEnvCacher::~JniEnvCacher =====

void __thiscall facebook::jni::detail::JniEnvCacher::~JniEnvCacher(JniEnvCacher *this)

{
  (*(code *)PTR__JniEnvCacher_0030de20)();
  return;
}


// ===== 002ff300  <EXTERNAL>::facebook::jni::translatePendingCppExceptionToJavaException =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::translatePendingCppExceptionToJavaException(void)

{
  (*(code *)PTR_translatePendingCppExceptionToJavaException_0030de28)();
  return;
}


// ===== 002ff310  <EXTERNAL>::__cxa_end_catch =====

void __cxa_end_catch(void)

{
  (*(code *)PTR___cxa_end_catch_0030de30)();
  return;
}


// ===== 002ff320  facebook::jni::getHybridDataFromField =====

void facebook::jni::getHybridDataFromField(JObject *param_1,JField *param_2)

{
  (*(code *)PTR_getHybridDataFromField_0030de38)();
  return;
}


// ===== 002ff330  <EXTERNAL>::facebook::jni::JString::toStdString =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::JString::toStdString(void)

{
  (*(code *)PTR_toStdString_0030de40)();
  return;
}


// ===== 002ff340  discord::frontends::jsi::KvClassicModule::activate =====

void discord::frontends::jsi::KvClassicModule::activate(void)

{
  (*(code *)PTR_activate_0030de48)();
  return;
}


// ===== 002ff350  facebook::jni::JObject::getClass =====

void facebook::jni::JObject::getClass(void)

{
  (*(code *)PTR_getClass_0030de50)();
  return;
}


// ===== 002ff360  facebook::jni::detectHybrid<facebook::react::CallInvokerHolder,facebook::jni::detail::BaseHybridClass> =====

void facebook::jni::
     detectHybrid<facebook::react::CallInvokerHolder,facebook::jni::detail::BaseHybridClass>(void)

{
  (*(code *)
    PTR_detectHybrid<facebook_react_CallInvokerHolder,facebook_jni_detail_BaseHybridClass>_0030de58)
            ();
  return;
}


// ===== 002ff370  facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

void __thiscall
facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
~base_owned_ref(base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *this)

{
  (*(code *)PTR__base_owned_ref_0030de60)();
  return;
}


// ===== 002ff380  facebook::jni::detail::HybridClassBase::isHybridClassBase =====

void facebook::jni::detail::HybridClassBase::isHybridClassBase(void)

{
  (*(code *)PTR_isHybridClassBase_0030de68)();
  return;
}


// ===== 002ff390  facebook::jni::throwNPE =====

void facebook::jni::throwNPE(void)

{
  (*(code *)PTR_throwNPE_0030de70)();
  return;
}


// ===== 002ff3a0  facebook::jni::detail::getHolder<facebook::jni::detail::HybridData> =====

void __thiscall
facebook::jni::detail::getHolder<facebook::jni::detail::HybridData>
          (detail *this,HybridData *param_1)

{
  (*(code *)PTR_getHolder<facebook_jni_detail_HybridData>_0030de78)();
  return;
}


// ===== 002ff3b0  <EXTERNAL>::facebook::jni::detail::HybridDestructor::getNativePointer =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::detail::HybridDestructor::getNativePointer(void)

{
  (*(code *)PTR_getNativePointer_0030de80)();
  return;
}


// ===== 002ff3c0  facebook::jni::detail::getHolder<facebook::jni::JObject> =====

void __thiscall
facebook::jni::detail::getHolder<facebook::jni::JObject>(detail *this,JObject *param_1)

{
  (*(code *)PTR_getHolder<facebook_jni_JObject>_0030de88)();
  return;
}


// ===== 002ff3d0  facebook::jni::base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridDestructor,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

void __thiscall
facebook::jni::
base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridDestructor,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>
::~base_owned_ref(base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridDestructor,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>
                  *this)

{
  (*(code *)PTR__base_owned_ref_0030de90)();
  return;
}


// ===== 002ff3e0  facebook::jni::base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

void __thiscall
facebook::jni::
base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>
::~base_owned_ref(base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>
                  *this)

{
  (*(code *)PTR__base_owned_ref_0030de98)();
  return;
}


// ===== 002ff3f0  <EXTERNAL>::facebook::jni::throwNewJavaException =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::throwNewJavaException(char *param_1,char *param_2)

{
  (*(code *)PTR_throwNewJavaException_0030dea0)();
  return;
}


// ===== 002ff400  facebook::jni::detail::getDestructorField =====

void facebook::jni::detail::getDestructorField(basic_strong_ref *param_1)

{
  (*(code *)PTR_getDestructorField_0030dea8)();
  return;
}


// ===== 002ff410  discord::api::Key::length =====

void __thiscall discord::api::Key::length(Key *this)

{
  (*(code *)PTR_length_0030deb0)();
  return;
}


// ===== 002ff420  discord::raw::RawValue::is_hidden =====

void __thiscall discord::raw::RawValue::is_hidden(RawValue *this)

{
  (*(code *)PTR_is_hidden_0030deb8)();
  return;
}


// ===== 002ff430  discord::api::Timings::operator+= =====

void __thiscall discord::api::Timings::operator+=(Timings *this,Timings *param_1)

{
  (*(code *)PTR_operator___0030dec0)();
  return;
}


// ===== 002ff440  discord::api::Timings::operator+ =====

void __thiscall discord::api::Timings::operator+(Timings *this,Timings *param_1)

{
  (*(code *)PTR_operator__0030dec8)();
  return;
}


// ===== 002ff450  discord::api::Key::Key =====

void __thiscall discord::api::Key::Key(void)

{
  (*(code *)PTR_Key_0030ded0)();
  return;
}


// ===== 002ff460  fmt::v9::vformat =====

void fmt::v9::vformat(void)

{
  (*(code *)PTR_vformat_0030ded8)();
  return;
}


// ===== 002ff470  discord::Error::Error =====

void __thiscall discord::Error::Error(void)

{
  (*(code *)PTR_Error_0030dee0)();
  return;
}


// ===== 002ff480  boost::container::small_vector_base<discord::api::Cell,void,void>::move_construct_impl =====

void boost::container::small_vector_base<discord::api::Cell,void,void>::move_construct_impl
               (vector *param_1,small_vector_allocator *param_2)

{
  (*(code *)PTR_move_construct_impl_0030dee8)();
  return;
}


// ===== 002ff490  boost::container::vector<discord::api::Cell,boost::container::small_vector_allocator<discord::api::Cell,boost::container::new_allocator<void>,void>,void>::~vector =====

void __thiscall
boost::container::
vector<discord::api::Cell,boost::container::small_vector_allocator<discord::api::Cell,boost::container::new_allocator<void>,void>,void>
::~vector(vector<discord::api::Cell,boost::container::small_vector_allocator<discord::api::Cell,boost::container::new_allocator<void>,void>,void>
          *this)

{
  (*(code *)PTR__vector_0030def0)();
  return;
}


// ===== 002ff4a0  boost::container::vector<discord::api::Cell,boost::container::small_vector_allocator<discord::api::Cell,boost::container::new_allocator<void>,void>,void>::priv_insert_forward_range_new_allocation<boost::container::dtl::insert_range_proxy<boost::container::small_vector_allocator<discord::api::Cell,boost::container::new_allocator<void>,void>,boost::move_iterator<discord::api::Cell*>>> =====

void __thiscall
boost::container::
vector<discord::api::Cell,boost::container::small_vector_allocator<discord::api::Cell,boost::container::new_allocator<void>,void>,void>
::
priv_insert_forward_range_new_allocation<boost::container::dtl::insert_range_proxy<boost::container::small_vector_allocator<discord::api::Cell,boost::container::new_allocator<void>,void>,boost::move_iterator<discord::api::Cell*>>>
          (void)

{
  (*(code *)
    PTR_priv_insert_forward_range_new_allocation<boost_container_dtl_insert_range_proxy<boost_container_small_vector_allocator<discord_api_Cell,boost_container_new_allocator<void>,void>,boost_move_iterator<discord_api_Cell*>>>_0030def8
  )();
  return;
}


// ===== 002ff4b0  discord::api::Key::Key =====

void __thiscall discord::api::Key::Key(Key *this,Key *param_1)

{
  (*(code *)PTR_Key_0030df00)();
  return;
}


// ===== 002ff4c0  discord::api::Key::~Key =====

void __thiscall discord::api::Key::~Key(Key *this)

{
  (*(code *)PTR__Key_0030df08)();
  return;
}


// ===== 002ff4d0  boost::container::vector<discord::api::Cell,boost::container::small_vector_allocator<discord::api::Cell,boost::container::new_allocator<void>,void>,void>::priv_insert_forward_range_no_capacity<boost::container::dtl::insert_emplace_proxy<boost::container::small_vector_allocator<discord::api::Cell,boost::container::new_allocator<void>,void>,discord::api::Cell>> =====

void __thiscall
boost::container::
vector<discord::api::Cell,boost::container::small_vector_allocator<discord::api::Cell,boost::container::new_allocator<void>,void>,void>
::
priv_insert_forward_range_no_capacity<boost::container::dtl::insert_emplace_proxy<boost::container::small_vector_allocator<discord::api::Cell,boost::container::new_allocator<void>,void>,discord::api::Cell>>
          (void)

{
  (*(code *)
    PTR_priv_insert_forward_range_no_capacity<boost_container_dtl_insert_emplace_proxy<boost_container_small_vector_allocator<discord_api_Cell,boost_container_new_allocator<void>,void>,discord_api_Cell>>_0030df10
  )();
  return;
}


// ===== 002ff4e0  boost::container::throw_length_error =====

void boost::container::throw_length_error(char *param_1)

{
  (*(code *)PTR_throw_length_error_0030df18)();
  return;
}


// ===== 002ff4f0  discord::api::Cell::~Cell =====

void __thiscall discord::api::Cell::~Cell(Cell *this)

{
  (*(code *)PTR__Cell_0030df20)();
  return;
}


// ===== 002ff500  discord::raw::RawValue::~RawValue =====

void __thiscall discord::raw::RawValue::~RawValue(RawValue *this)

{
  (*(code *)PTR__RawValue_0030df28)();
  return;
}


// ===== 002ff510  fmt::v9::formatter<fmt::v9::basic_string_view<char>,char,void>::parse<fmt::v9::basic_format_parse_context<char>> =====

char * __thiscall
fmt::v9::formatter<fmt::v9::basic_string_view<char>,char,void>::
parse<fmt::v9::basic_format_parse_context<char>>
          (formatter<fmt::v9::basic_string_view<char>,char,void> *this,
          basic_format_parse_context *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_parse<fmt_v9_basic_format_parse_context<char>>_0030df30)();
  return pcVar1;
}


// ===== 002ff520  fmt::v9::formatter<fmt::v9::join_view<std::__ndk1::__wrap_iter<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>*>,std::__ndk1::__wrap_iter<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>*>,char>,char,void>::format<fmt::v9::basic_format_context<fmt::v9::appender,char>> =====

void __thiscall
fmt::v9::
formatter<fmt::v9::join_view<std::__ndk1::__wrap_iter<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>*>,std::__ndk1::__wrap_iter<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>*>,char>,char,void>
::format<fmt::v9::basic_format_context<fmt::v9::appender,char>>
          (formatter<fmt::v9::join_view<std::__ndk1::__wrap_iter<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>*>,std::__ndk1::__wrap_iter<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>*>,char>,char,void>
           *this,join_view *param_1,basic_format_context *param_2)

{
  (*(code *)PTR_format<fmt_v9_basic_format_context<fmt_v9_appender,char>>_0030df38)();
  return;
}


// ===== 002ff530  fmt::v9::formatter<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,char,void>::format<fmt::v9::basic_format_context<fmt::v9::appender,char>> =====

void __thiscall
fmt::v9::
formatter<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,char,void>
::format<fmt::v9::basic_format_context<fmt::v9::appender,char>>
          (formatter<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,char,void>
           *this,basic_string *param_1,basic_format_context *param_2)

{
  (*(code *)PTR_format<fmt_v9_basic_format_context<fmt_v9_appender,char>>_0030df40)();
  return;
}


// ===== 002ff540  fmt::v9::detail::parse_dynamic_spec<char> =====

char * fmt::v9::detail::parse_dynamic_spec<char>
                 (char *param_1,char *param_2,int *param_3,arg_ref *param_4,
                 basic_format_parse_context *param_5)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_parse_dynamic_spec<char>_0030df48)();
  return pcVar1;
}


// ===== 002ff550  fmt::v9::detail::throw_format_error =====

void fmt::v9::detail::throw_format_error(char *param_1)

{
  (*(code *)PTR_throw_format_error_0030df50)();
  return;
}


// ===== 002ff560  fmt::v9::detail::do_parse_arg_id<char,fmt::v9::detail::dynamic_spec_id_handler<char>&> =====

char * fmt::v9::detail::do_parse_arg_id<char,fmt::v9::detail::dynamic_spec_id_handler<char>&>
                 (char *param_1,char *param_2,dynamic_spec_id_handler *param_3)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)
                     PTR_do_parse_arg_id<char,fmt_v9_detail_dynamic_spec_id_handler<char>&>_0030df58
                   )();
  return pcVar1;
}


// ===== 002ff570  fmt::v9::detail::write<char,fmt::v9::appender> =====

void __thiscall fmt::v9::detail::write<char,fmt::v9::appender>(void)

{
  (*(code *)PTR_write<char,fmt_v9_appender>_0030df60)();
  return;
}


// ===== 002ff580  fmt::v9::detail::handle_dynamic_spec<fmt::v9::detail::width_checker,fmt::v9::basic_format_context<fmt::v9::appender,char>> =====

void fmt::v9::detail::
     handle_dynamic_spec<fmt::v9::detail::width_checker,fmt::v9::basic_format_context<fmt::v9::appender,char>>
               (void)

{
  (*(code *)
    PTR_handle_dynamic_spec<fmt_v9_detail_width_checker,fmt_v9_basic_format_context<fmt_v9_appender,char>>_0030df68
  )();
  return;
}


// ===== 002ff590  fmt::v9::detail::handle_dynamic_spec<fmt::v9::detail::precision_checker,fmt::v9::basic_format_context<fmt::v9::appender,char>> =====

void fmt::v9::detail::
     handle_dynamic_spec<fmt::v9::detail::precision_checker,fmt::v9::basic_format_context<fmt::v9::appender,char>>
               (void)

{
  (*(code *)
    PTR_handle_dynamic_spec<fmt_v9_detail_precision_checker,fmt_v9_basic_format_context<fmt_v9_appender,char>>_0030df70
  )();
  return;
}


// ===== 002ff5a0  fmt::v9::basic_format_args<fmt::v9::basic_format_context<fmt::v9::appender,char>>::get<char> =====

void fmt::v9::basic_format_args<fmt::v9::basic_format_context<fmt::v9::appender,char>>::get<char>
               (void)

{
  (*(code *)PTR_get<char>_0030df78)();
  return;
}


// ===== 002ff5b0  fmt::v9::detail::get_dynamic_spec<fmt::v9::detail::width_checker,fmt::v9::basic_format_arg<fmt::v9::basic_format_context<fmt::v9::appender,char>>,fmt::v9::detail::error_handler> =====

int fmt::v9::detail::
    get_dynamic_spec<fmt::v9::detail::width_checker,fmt::v9::basic_format_arg<fmt::v9::basic_format_context<fmt::v9::appender,char>>,fmt::v9::detail::error_handler>
              (void)

{
  int iVar1;
  
  iVar1 = (*(code *)
            PTR_get_dynamic_spec<fmt_v9_detail_width_checker,fmt_v9_basic_format_arg<fmt_v9_basic_format_context<fmt_v9_appender,char>>,fmt_v9_detail_error_handler>_0030df80
          )();
  return iVar1;
}


// ===== 002ff5c0  fmt::v9::detail::get_dynamic_spec<fmt::v9::detail::precision_checker,fmt::v9::basic_format_arg<fmt::v9::basic_format_context<fmt::v9::appender,char>>,fmt::v9::detail::error_handler> =====

int fmt::v9::detail::
    get_dynamic_spec<fmt::v9::detail::precision_checker,fmt::v9::basic_format_arg<fmt::v9::basic_format_context<fmt::v9::appender,char>>,fmt::v9::detail::error_handler>
              (void)

{
  int iVar1;
  
  iVar1 = (*(code *)
            PTR_get_dynamic_spec<fmt_v9_detail_precision_checker,fmt_v9_basic_format_arg<fmt_v9_basic_format_context<fmt_v9_appender,char>>,fmt_v9_detail_error_handler>_0030df88
          )();
  return iVar1;
}


// ===== 002ff5d0  fmt::v9::detail::write_escaped_string<char,fmt::v9::detail::counting_iterator> =====

void __thiscall fmt::v9::detail::write_escaped_string<char,fmt::v9::detail::counting_iterator>(void)

{
  (*(code *)PTR_write_escaped_string<char,fmt_v9_detail_counting_iterator>_0030df90)();
  return;
}


// ===== 002ff5e0  fmt::v9::detail::for_each_codepoint<fmt::v9::detail::compute_width(fmt::v9::basic_string_view<char>)::count_code_points>(fmt::v9::basic_string_view<char>,fmt::v9::detail::compute_width(fmt::v9::basic_string_view<char>)::count_code_points)::{lambda(char_const*,char_const*)#1}::operator() =====

void fmt::v9::detail::
     for_each_codepoint<fmt::v9::detail::compute_width(fmt::v9::basic_string_view<char>)::count_code_points>(fmt::v9::basic_string_view<char>,fmt::v9::detail::compute_width(fmt::v9::basic_string_view<char>)::count_code_points)
     ::{lambda(char_const*,char_const*)#1}::operator()(char *param_1,char *param_2)

{
  (*(code *)PTR_operator___0030df98)();
  return;
}


// ===== 002ff5f0  fmt::v9::detail::write_padded<(fmt::v9::align::type)1,fmt::v9::appender,char,fmt::v9::detail::write<char,fmt::v9::appender>(fmt::v9::appender,fmt::v9::basic_string_view<char>,fmt::v9::format_specs<char>const&)::{lambda(fmt::v9::appender)#1}> =====

void fmt::v9::detail::
     write_padded<(fmt::v9::align::type)1,fmt::v9::appender,char,fmt::v9::detail::write<char,fmt::v9::appender>(fmt::v9::appender,fmt::v9::basic_string_view<char>,fmt::v9::format_specs<char>const&)::_lambda(fmt::v9::appender)_1_>
               (void)

{
  (*(code *)
    PTR_write_padded<(fmt_v9_align_type)1,fmt_v9_appender,char,fmt_v9_detail_write<char,fmt_v9_appender>(fmt_v9_appender,fmt_v9_basic_string_view<char>,fmt_v9_format_specs<char>const&)__lambda(fmt_v9_appender)_1_>_0030dfa0
  )();
  return;
}


// ===== 002ff600  fmt::v9::detail::for_each_codepoint<fmt::v9::detail::find_escape(char_const*,char_const*)::{lambda(unsigned_int,fmt::v9::basic_string_view<char>)#1}>(fmt::v9::basic_string_view<char>,fmt::v9::detail::find_escape(char_const*,char_const*)::{lambda(unsigned_int,fmt::v9::basic_string_view<char>)#1})::{lambda(char_const*,char_const*)#1}::operator() =====

void __thiscall
fmt::v9::detail::
for_each_codepoint<fmt::v9::detail::find_escape(char_const*,char_const*)::{lambda(unsigned_int,fmt::v9::basic_string_view<char>)#1}>(fmt::v9::basic_string_view<char>,fmt::v9::detail::find_escape(char_const*,char_const*)::{lambda(unsigned_int,fmt::v9::basic_string_view<char>)#1})
::{lambda(char_const*,char_const*)#1}::operator()
          (_lambda_char_const__char_const___1_ *this,char *param_1,char *param_2)

{
  (*(code *)PTR_operator___0030dfa8)();
  return;
}


// ===== 002ff610  fmt::v9::detail::write_escaped_cp<fmt::v9::detail::counting_iterator,char> =====

void fmt::v9::detail::write_escaped_cp<fmt::v9::detail::counting_iterator,char>(void)

{
  (*(code *)PTR_write_escaped_cp<fmt_v9_detail_counting_iterator,char>_0030dfb0)();
  return;
}


// ===== 002ff620  fmt::v9::detail::fill<fmt::v9::appender,char> =====

void fmt::v9::detail::fill<fmt::v9::appender,char>(void)

{
  (*(code *)PTR_fill<fmt_v9_appender,char>_0030dfb8)();
  return;
}


// ===== 002ff630  fmt::v9::detail::write_escaped_string<char,fmt::v9::appender> =====

void __thiscall fmt::v9::detail::write_escaped_string<char,fmt::v9::appender>(void)

{
  (*(code *)PTR_write_escaped_string<char,fmt_v9_appender>_0030dfc0)();
  return;
}


// ===== 002ff640  fmt::v9::detail::is_printable =====

void fmt::v9::detail::is_printable(uint param_1)

{
  (*(code *)PTR_is_printable_0030dfc8)(param_1);
  return;
}


// ===== 002ff650  fmt::v9::detail::write_escaped_cp<fmt::v9::appender,char> =====

void fmt::v9::detail::write_escaped_cp<fmt::v9::appender,char>(void)

{
  (*(code *)PTR_write_escaped_cp<fmt_v9_appender,char>_0030dfd0)();
  return;
}


// ===== 002ff660  fmt::v9::detail::write_codepoint<2ul,char,fmt::v9::appender> =====

void fmt::v9::detail::write_codepoint<2ul,char,fmt::v9::appender>(void)

{
  (*(code *)PTR_write_codepoint<2ul,char,fmt_v9_appender>_0030dfd8)();
  return;
}


// ===== 002ff670  fmt::v9::detail::write_codepoint<4ul,char,fmt::v9::appender> =====

void fmt::v9::detail::write_codepoint<4ul,char,fmt::v9::appender>(void)

{
  (*(code *)PTR_write_codepoint<4ul,char,fmt_v9_appender>_0030dfe0)();
  return;
}


// ===== 002ff680  fmt::v9::detail::write_codepoint<8ul,char,fmt::v9::appender> =====

void fmt::v9::detail::write_codepoint<8ul,char,fmt::v9::appender>(void)

{
  (*(code *)PTR_write_codepoint<8ul,char,fmt_v9_appender>_0030dfe8)();
  return;
}


// ===== 002ff690  boost::container::uninitialized_move_and_insert_alloc<boost::container::small_vector_allocator<discord::api::Cell,boost::container::new_allocator<void>,void>,discord::api::Cell*,discord::api::Cell*,boost::container::dtl::insert_range_proxy<boost::container::small_vector_allocator<discord::api::Cell,boost::container::new_allocator<void>,void>,boost::move_iterator<discord::api::Cell*>>> =====

void boost::container::
     uninitialized_move_and_insert_alloc<boost::container::small_vector_allocator<discord::api::Cell,boost::container::new_allocator<void>,void>,discord::api::Cell*,discord::api::Cell*,boost::container::dtl::insert_range_proxy<boost::container::small_vector_allocator<discord::api::Cell,boost::container::new_allocator<void>,void>,boost::move_iterator<discord::api::Cell*>>>
               (void)

{
  (*(code *)
    PTR_uninitialized_move_and_insert_alloc<boost_container_small_vector_allocator<discord_api_Cell,boost_container_new_allocator<void>,void>,discord_api_Cell*,discord_api_Cell*,boost_container_dtl_insert_range_proxy<boost_container_small_vector_allocator<discord_api_Cell,boost_container_new_allocator<void>,void>,boost_move_iterator<discord_api_Cell*>>>_0030dff0
  )();
  return;
}


// ===== 002ff6a0  boost::container::vector<discord::api::Cell,boost::container::small_vector_allocator<discord::api::Cell,boost::container::new_allocator<void>,void>,void>::priv_insert_forward_range_new_allocation<boost::container::dtl::insert_emplace_proxy<boost::container::small_vector_allocator<discord::api::Cell,boost::container::new_allocator<void>,void>,discord::api::Cell>> =====

void __thiscall
boost::container::
vector<discord::api::Cell,boost::container::small_vector_allocator<discord::api::Cell,boost::container::new_allocator<void>,void>,void>
::
priv_insert_forward_range_new_allocation<boost::container::dtl::insert_emplace_proxy<boost::container::small_vector_allocator<discord::api::Cell,boost::container::new_allocator<void>,void>,discord::api::Cell>>
          (void)

{
  (*(code *)
    PTR_priv_insert_forward_range_new_allocation<boost_container_dtl_insert_emplace_proxy<boost_container_small_vector_allocator<discord_api_Cell,boost_container_new_allocator<void>,void>,discord_api_Cell>>_0030dff8
  )();
  return;
}


// ===== 002ff6b0  boost::container::uninitialized_move_and_insert_alloc<boost::container::small_vector_allocator<discord::api::Cell,boost::container::new_allocator<void>,void>,discord::api::Cell*,discord::api::Cell*,boost::container::dtl::insert_emplace_proxy<boost::container::small_vector_allocator<discord::api::Cell,boost::container::new_allocator<void>,void>,discord::api::Cell>> =====

void boost::container::
     uninitialized_move_and_insert_alloc<boost::container::small_vector_allocator<discord::api::Cell,boost::container::new_allocator<void>,void>,discord::api::Cell*,discord::api::Cell*,boost::container::dtl::insert_emplace_proxy<boost::container::small_vector_allocator<discord::api::Cell,boost::container::new_allocator<void>,void>,discord::api::Cell>>
               (void)

{
  (*(code *)
    PTR_uninitialized_move_and_insert_alloc<boost_container_small_vector_allocator<discord_api_Cell,boost_container_new_allocator<void>,void>,discord_api_Cell*,discord_api_Cell*,boost_container_dtl_insert_emplace_proxy<boost_container_small_vector_allocator<discord_api_Cell,boost_container_new_allocator<void>,void>,discord_api_Cell>>_0030e000
  )();
  return;
}


// ===== 002ff6c0  discord::api::detail::ToPair::from_entries =====

void __thiscall discord::api::detail::ToPair::from_entries(ToPair *this,RawTableEntries *param_1)

{
  (*(code *)PTR_from_entries_0030e008)();
  return;
}


// ===== 002ff6d0  std::__ndk1::vector<std::__ndk1::tuple<discord::raw::RawValue,discord::raw::RawValue>,std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue,discord::raw::RawValue>>>::__push_back_slow_path<std::__ndk1::tuple<discord::raw::RawValue,discord::raw::RawValue>> =====

tuple * __thiscall
std::__ndk1::
vector<std::__ndk1::tuple<discord::raw::RawValue,discord::raw::RawValue>,std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue,discord::raw::RawValue>>>
::__push_back_slow_path<std::__ndk1::tuple<discord::raw::RawValue,discord::raw::RawValue>>
          (vector<std::__ndk1::tuple<discord::raw::RawValue,discord::raw::RawValue>,std::__ndk1::allocator<std::__ndk1::tuple<discord::raw::RawValue,discord::raw::RawValue>>>
           *this,tuple *param_1)

{
  tuple *ptVar1;
  
  ptVar1 = (tuple *)(*(code *)
                      PTR___push_back_slow_path<std___ndk1_tuple<discord_raw_RawValue,discord_raw_RawValue>>_0030e010
                    )();
  return ptVar1;
}


// ===== 002ff6e0  std::__ndk1::tuple<discord::raw::RawValue,discord::raw::RawValue>::~tuple =====

void __thiscall
std::__ndk1::tuple<discord::raw::RawValue,discord::raw::RawValue>::~tuple
          (tuple<discord::raw::RawValue,discord::raw::RawValue> *this)

{
  (*(code *)PTR__tuple_0030e018)();
  return;
}


// ===== 002ff6f0  <EXTERNAL>::std::bad_array_new_length::bad_array_new_length =====

void __thiscall std::bad_array_new_length::bad_array_new_length(bad_array_new_length *this)

{
  (*(code *)PTR_bad_array_new_length_0030e020)();
  return;
}


// ===== 002ff700  discord::api::detail::ToMap::from_entries =====

void __thiscall discord::api::detail::ToMap::from_entries(ToMap *this,RawTableEntries *param_1)

{
  (*(code *)PTR_from_entries_0030e028)();
  return;
}


// ===== 002ff710  discord::raw::RawValue::operator!= =====

void __thiscall discord::raw::RawValue::operator!=(RawValue *this,RawValue *param_1)

{
  (*(code *)PTR_operator___0030e030)();
  return;
}


// ===== 002ff720  std::__ndk1::__tree<std::__ndk1::__value_type<discord::raw::RawValue,boost::container::small_vector<discord::raw::RawValue,1ul,void,void>>,std::__ndk1::__map_value_compare<discord::raw::RawValue,std::__ndk1::__value_type<discord::raw::RawValue,boost::container::small_vector<discord::raw::RawValue,1ul,void,void>>,std::__ndk1::less<discord::raw::RawValue>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<discord::raw::RawValue,boost::container::small_vector<discord::raw::RawValue,1ul,void,void>>>>::__emplace_unique_key_args<discord::raw::RawValue,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<discord::raw::RawValue&&>,std::__ndk1::tuple<boost::container::small_vector<discord::raw::RawValue,1ul,void,void>&&>> =====

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<discord::raw::RawValue,boost::container::small_vector<discord::raw::RawValue,1ul,void,void>>,std::__ndk1::__map_value_compare<discord::raw::RawValue,std::__ndk1::__value_type<discord::raw::RawValue,boost::container::small_vector<discord::raw::RawValue,1ul,void,void>>,std::__ndk1::less<discord::raw::RawValue>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<discord::raw::RawValue,boost::container::small_vector<discord::raw::RawValue,1ul,void,void>>>>
::
__emplace_unique_key_args<discord::raw::RawValue,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<discord::raw::RawValue&&>,std::__ndk1::tuple<boost::container::small_vector<discord::raw::RawValue,1ul,void,void>&&>>
          (__tree<std::__ndk1::__value_type<discord::raw::RawValue,boost::container::small_vector<discord::raw::RawValue,1ul,void,void>>,std::__ndk1::__map_value_compare<discord::raw::RawValue,std::__ndk1::__value_type<discord::raw::RawValue,boost::container::small_vector<discord::raw::RawValue,1ul,void,void>>,std::__ndk1::less<discord::raw::RawValue>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<discord::raw::RawValue,boost::container::small_vector<discord::raw::RawValue,1ul,void,void>>>>
           *this,RawValue *param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  (*(code *)
    PTR___emplace_unique_key_args<discord_raw_RawValue,std___ndk1_piecewise_construct_t_const&,std___ndk1_tuple<discord_raw_RawValue&&>,std___ndk1_tuple<boost_container_small_vector<discord_raw_RawValue,1ul,void,void>&&>>_0030e038
  )();
  return;
}


// ===== 002ff730  boost::container::vector<discord::raw::RawValue,boost::container::small_vector_allocator<discord::raw::RawValue,boost::container::new_allocator<void>,void>,void>::priv_insert_forward_range_no_capacity<boost::container::dtl::insert_emplace_proxy<boost::container::small_vector_allocator<discord::raw::RawValue,boost::container::new_allocator<void>,void>,discord::raw::RawValue>> =====

void __thiscall
boost::container::
vector<discord::raw::RawValue,boost::container::small_vector_allocator<discord::raw::RawValue,boost::container::new_allocator<void>,void>,void>
::
priv_insert_forward_range_no_capacity<boost::container::dtl::insert_emplace_proxy<boost::container::small_vector_allocator<discord::raw::RawValue,boost::container::new_allocator<void>,void>,discord::raw::RawValue>>
          (void)

{
  (*(code *)
    PTR_priv_insert_forward_range_no_capacity<boost_container_dtl_insert_emplace_proxy<boost_container_small_vector_allocator<discord_raw_RawValue,boost_container_new_allocator<void>,void>,discord_raw_RawValue>>_0030e040
  )();
  return;
}


// ===== 002ff740  boost::container::vector<discord::raw::RawValue,boost::container::small_vector_allocator<discord::raw::RawValue,boost::container::new_allocator<void>,void>,void>::~vector =====

void __thiscall
boost::container::
vector<discord::raw::RawValue,boost::container::small_vector_allocator<discord::raw::RawValue,boost::container::new_allocator<void>,void>,void>
::~vector(vector<discord::raw::RawValue,boost::container::small_vector_allocator<discord::raw::RawValue,boost::container::new_allocator<void>,void>,void>
          *this)

{
  (*(code *)PTR__vector_0030e048)();
  return;
}


// ===== 002ff750  discord::raw::RawValue::operator< =====

void __thiscall discord::raw::RawValue::operator<(RawValue *this,RawValue *param_1)

{
  (*(code *)PTR_operator<_0030e050)();
  return;
}


// ===== 002ff760  boost::container::small_vector_base<discord::raw::RawValue,void,void>::move_construct_impl =====

void boost::container::small_vector_base<discord::raw::RawValue,void,void>::move_construct_impl
               (vector *param_1,small_vector_allocator *param_2)

{
  (*(code *)PTR_move_construct_impl_0030e058)();
  return;
}


// ===== 002ff770  boost::container::vector<discord::raw::RawValue,boost::container::small_vector_allocator<discord::raw::RawValue,boost::container::new_allocator<void>,void>,void>::priv_insert_forward_range_new_allocation<boost::container::dtl::insert_emplace_proxy<boost::container::small_vector_allocator<discord::raw::RawValue,boost::container::new_allocator<void>,void>,discord::raw::RawValue>> =====

void __thiscall
boost::container::
vector<discord::raw::RawValue,boost::container::small_vector_allocator<discord::raw::RawValue,boost::container::new_allocator<void>,void>,void>
::
priv_insert_forward_range_new_allocation<boost::container::dtl::insert_emplace_proxy<boost::container::small_vector_allocator<discord::raw::RawValue,boost::container::new_allocator<void>,void>,discord::raw::RawValue>>
          (void)

{
  (*(code *)
    PTR_priv_insert_forward_range_new_allocation<boost_container_dtl_insert_emplace_proxy<boost_container_small_vector_allocator<discord_raw_RawValue,boost_container_new_allocator<void>,void>,discord_raw_RawValue>>_0030e060
  )();
  return;
}


// ===== 002ff780  boost::container::uninitialized_move_and_insert_alloc<boost::container::small_vector_allocator<discord::raw::RawValue,boost::container::new_allocator<void>,void>,discord::raw::RawValue*,discord::raw::RawValue*,boost::container::dtl::insert_emplace_proxy<boost::container::small_vector_allocator<discord::raw::RawValue,boost::container::new_allocator<void>,void>,discord::raw::RawValue>> =====

void boost::container::
     uninitialized_move_and_insert_alloc<boost::container::small_vector_allocator<discord::raw::RawValue,boost::container::new_allocator<void>,void>,discord::raw::RawValue*,discord::raw::RawValue*,boost::container::dtl::insert_emplace_proxy<boost::container::small_vector_allocator<discord::raw::RawValue,boost::container::new_allocator<void>,void>,discord::raw::RawValue>>
               (void)

{
  (*(code *)
    PTR_uninitialized_move_and_insert_alloc<boost_container_small_vector_allocator<discord_raw_RawValue,boost_container_new_allocator<void>,void>,discord_raw_RawValue*,discord_raw_RawValue*,boost_container_dtl_insert_emplace_proxy<boost_container_small_vector_allocator<discord_raw_RawValue,boost_container_new_allocator<void>,void>,discord_raw_RawValue>>_0030e068
  )();
  return;
}


// ===== 002ff790  discord::api::detail::ToNone::from_entries =====

void discord::api::detail::ToNone::from_entries(RawTableEntries *param_1)

{
  (*(code *)PTR_from_entries_0030e070)();
  return;
}


// ===== 002ff7a0  discord::api::detail::ToQuery::meta_key_bindings =====

void __thiscall
discord::api::detail::ToQuery::meta_key_bindings(ToQuery *this,basic_string *param_1)

{
  (*(code *)PTR_meta_key_bindings_0030e078)();
  return;
}


// ===== 002ff7b0  discord::StaticString::StaticString =====

void __thiscall discord::StaticString::StaticString(StaticString *this,char *param_1)

{
  (*(code *)PTR_StaticString_0030e080)();
  return;
}


// ===== 002ff7c0  discord::raw::RawBytes::RawBytes =====

void __thiscall discord::raw::RawBytes::RawBytes(void)

{
  (*(code *)PTR_RawBytes_0030e088)();
  return;
}


// ===== 002ff7d0  discord::raw::RawValue::RawValue =====

void __thiscall discord::raw::RawValue::RawValue(void)

{
  (*(code *)PTR_RawValue_0030e090)();
  return;
}


// ===== 002ff7e0  discord::raw::RawStatementBinding::RawStatementBinding =====

void __thiscall discord::raw::RawStatementBinding::RawStatementBinding(void)

{
  (*(code *)PTR_RawStatementBinding_0030e098)();
  return;
}


// ===== 002ff7f0  discord::raw::RawStatementBinding::~RawStatementBinding =====

void __thiscall discord::raw::RawStatementBinding::~RawStatementBinding(RawStatementBinding *this)

{
  (*(code *)PTR__RawStatementBinding_0030e0a0)();
  return;
}


// ===== 002ff800  discord::raw::RawBytes::~RawBytes =====

void __thiscall discord::raw::RawBytes::~RawBytes(RawBytes *this)

{
  (*(code *)PTR__RawBytes_0030e0a8)();
  return;
}


// ===== 002ff810  discord::api::detail::ToQuery::meta_key_value_bindings =====

void __thiscall
discord::api::detail::ToQuery::meta_key_value_bindings
          (ToQuery *this,basic_string *param_1,RawValue *param_2)

{
  (*(code *)PTR_meta_key_value_bindings_0030e0b0)();
  return;
}


// ===== 002ff820  discord::api::detail::ToQuery::key_bindings =====

void __thiscall discord::api::detail::ToQuery::key_bindings(ToQuery *this,Key *param_1)

{
  (*(code *)PTR_key_bindings_0030e0b8)();
  return;
}


// ===== 002ff830  discord::api::detail::add_value_into =====

void discord::api::detail::add_value_into(vector *param_1,char *param_2,RawValue *param_3)

{
  (*(code *)PTR_add_value_into_0030e0c0)();
  return;
}


// ===== 002ff840  std::__ndk1::vector<discord::raw::RawStatementBinding,std::__ndk1::allocator<discord::raw::RawStatementBinding>>::__push_back_slow_path<discord::raw::RawStatementBinding> =====

RawStatementBinding * __thiscall
std::__ndk1::
vector<discord::raw::RawStatementBinding,std::__ndk1::allocator<discord::raw::RawStatementBinding>>
::__push_back_slow_path<discord::raw::RawStatementBinding>
          (vector<discord::raw::RawStatementBinding,std::__ndk1::allocator<discord::raw::RawStatementBinding>>
           *this,RawStatementBinding *param_1)

{
  RawStatementBinding *pRVar1;
  
  pRVar1 = (RawStatementBinding *)
           (*(code *)PTR___push_back_slow_path<discord_raw_RawStatementBinding>_0030e0c8)();
  return pRVar1;
}


// ===== 002ff850  std::__ndk1::__variant_detail::__dtor<std::__ndk1::__variant_detail::__traits<discord::raw::Hidden,discord::None,bool,unsigned_long,long,double,discord::raw::RawBytes,discord::raw::RawObject>,(std::__ndk1::__variant_detail::_Trait)1>::~__dtor =====

void __thiscall
std::__ndk1::__variant_detail::
__dtor<std::__ndk1::__variant_detail::__traits<discord::raw::Hidden,discord::None,bool,unsigned_long,long,double,discord::raw::RawBytes,discord::raw::RawObject>,(std::__ndk1::__variant_detail::_Trait)1>
::~__dtor(__dtor<std::__ndk1::__variant_detail::__traits<discord::raw::Hidden,discord::None,bool,unsigned_long,long,double,discord::raw::RawBytes,discord::raw::RawObject>,(std::__ndk1::__variant_detail::_Trait)1>
          *this)

{
  (*(code *)PTR____dtor_0030e0d0)();
  return;
}


// ===== 002ff860  discord::api::detail::ToQuery::range_bindings =====

void __thiscall discord::api::detail::ToQuery::range_bindings(ToQuery *this,KeyRange *param_1)

{
  (*(code *)PTR_range_bindings_0030e0d8)();
  return;
}


