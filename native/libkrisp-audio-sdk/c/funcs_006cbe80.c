// ===== 006cbe80  FUN_006cbe80 =====

void FUN_006cbe80(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar2 = FUN_0066a944(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 0x30);
  lVar2 = lVar2 + (long)iVar1 * 2;
  puVar4 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x38) != 0) {
    puVar4 = (undefined8 *)(*(long *)(param_1 + 0x38) + 8);
  }
  if (iVar1 != 0) {
    lVar5 = (long)iVar1 << 3;
    do {
      lVar3 = FUN_006cee4c(*puVar4);
      lVar5 = lVar5 + -8;
      lVar2 = lVar3 + lVar2 + (ulong)(((uint)LZCOUNT((uint)lVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      puVar4 = puVar4 + 1;
    } while (lVar5 != 0);
  }
  FUN_006e5694(param_1,lVar2,param_1 + 0x40);
  return;
}


// ===== 006cbf08  FUN_006cbf08 =====

void FUN_006cbf08(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  iVar1 = *(int *)(param_2 + 0x30);
  if (iVar1 != 0) {
    lVar4 = *(long *)(param_2 + 0x38);
    uVar3 = FUN_00675710(param_1 + 0x28,iVar1);
    FUN_006d2998(param_1 + 0x28,uVar3,lVar4 + 8,iVar1,
                 **(int **)(param_1 + 0x38) - *(int *)(param_1 + 0x30));
    iVar2 = **(int **)(param_1 + 0x38);
    iVar1 = *(int *)(param_1 + 0x30) + iVar1;
    *(int *)(param_1 + 0x30) = iVar1;
    if (iVar2 < iVar1) {
      **(int **)(param_1 + 0x38) = iVar1;
    }
  }
  FUN_00666818(param_1 + 0x10,PTR_PTR_007a3400,param_2 + 0x10);
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  FUN_006621e0(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffc) + 8);
  return;
}


// ===== 006cbfc4  FUN_006cbfc4 =====

undefined ** FUN_006cbfc4(void)

{
  return &PTR_FUN_0079a728;
}


// ===== 006cbfd0  FUN_006cbfd0 =====

void FUN_006cbfd0(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  byte *pbVar6;
  long lVar7;
  
  if (param_2 != param_1) {
    FUN_006667cc(param_1 + 0x10);
    uVar5 = (ulong)*(uint *)(param_1 + 0x30);
    if (0 < (int)*(uint *)(param_1 + 0x30)) {
      puVar4 = *(undefined8 **)(param_1 + 0x38);
      do {
        puVar4 = puVar4 + 1;
        FUN_006ce578(*puVar4);
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    pbVar6 = (byte *)(param_1 + 8);
    if ((*pbVar6 & 1) != 0) {
      FUN_006622b8(pbVar6);
    }
    iVar1 = *(int *)(param_2 + 0x30);
    if (iVar1 != 0) {
      lVar7 = *(long *)(param_2 + 0x38);
      uVar3 = FUN_00675710(param_1 + 0x28,iVar1);
      FUN_006d2998(param_1 + 0x28,uVar3,lVar7 + 8,iVar1,
                   **(int **)(param_1 + 0x38) - *(int *)(param_1 + 0x30));
      iVar2 = **(int **)(param_1 + 0x38);
      iVar1 = *(int *)(param_1 + 0x30) + iVar1;
      *(int *)(param_1 + 0x30) = iVar1;
      if (iVar2 < iVar1) {
        **(int **)(param_1 + 0x38) = iVar1;
      }
    }
    FUN_00666818(param_1 + 0x10,PTR_PTR_007a3400,param_2 + 0x10);
    if ((*(ulong *)(param_2 + 8) & 1) != 0) {
      FUN_006621e0(pbVar6,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffc) + 8);
      return;
    }
  }
  return;
}


// ===== 006cc0e4  FUN_006cc0e4 =====

void FUN_006cc0e4(void)

{
  FUN_00684dd0(PTR_FUN_007a3328,&DAT_007aebb8,&DAT_007aecc0);
  return;
}


// ===== 006cc0fc  FUN_006cc0fc =====

void FUN_006cc0fc(long *param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  
  uVar1 = param_2 | 2;
  if ((param_3 & 1) == 0) {
    uVar1 = param_2;
  }
  *param_1 = (long)(PTR_DAT_007a34e0 + 0x10);
  param_1[1] = uVar1;
                    /* try { // try from 006cc12c to 006cc12f has its CatchHandler @ 006cc148 */
  FUN_00663dac(param_1 + 2);
  param_1[5] = 0;
  param_1[6] = param_2;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined2 *)(param_1 + 9) = 0;
  return;
}


// ===== 006cc15c  FUN_006cc15c =====

void FUN_006cc15c(undefined8 *param_1)

{
  void *__ptr;
  ulong uVar1;
  
  if ((param_1[1] & 1) == 0) {
    uVar1 = param_1[1] & 0xfffffffffffffffc;
  }
  else {
                    /* try { // try from 006cc17c to 006cc17f has its CatchHandler @ 006cc1ec */
    uVar1 = FUN_00662218();
  }
  if (uVar1 == 0) {
    FUN_00663dbc(param_1 + 2);
    if ((param_1[8] != 0) && (param_1[6] == 0)) {
                    /* try { // try from 006cc1a0 to 006cc1a3 has its CatchHandler @ 006cc1e8 */
      FUN_00675910();
    }
  }
  *param_1 = &PTR_FUN_00799110;
  if ((((uint)param_1[1] >> 1 & 1) != 0) &&
     (__ptr = (void *)(param_1[1] + -2), __ptr != (void *)0x0)) {
    FUN_00662da0(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 006cc1f0  FUN_006cc1f0 =====

void FUN_006cc1f0(void *param_1)

{
  FUN_006cc15c();
  free(param_1);
  return;
}


// ===== 006cc214  FUN_006cc214 =====

void FUN_006cc214(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}


// ===== 006cc21c  FUN_006cc21c =====

byte * FUN_006cc21c(long param_1,byte *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  
  puVar3 = PTR_PTR_007a3430;
  uVar10 = 0;
  do {
    while( true ) {
      pbVar7 = param_2;
      if ((byte *)*param_3 <= param_2) {
        iVar1 = (int)param_2 - *(int *)(param_3 + 1);
        if (*(int *)((long)param_3 + 0x1c) == iVar1) {
          pbVar7 = (byte *)0x0;
          if (param_3[2] != 0 || iVar1 < 1) {
            pbVar7 = param_2;
          }
          goto LAB_006cc4f0;
        }
        auVar11 = FUN_0066f53c(param_3,iVar1,*(undefined4 *)((long)param_3 + 0x5c));
        pbVar7 = auVar11._0_8_;
        if ((auVar11 & (undefined1  [16])0x1) != (undefined1  [16])0x0) goto LAB_006cc4f0;
      }
      pbVar6 = pbVar7 + 1;
      uVar8 = (uint)*pbVar7;
      if ((char)*pbVar7 < '\0') break;
LAB_006cc298:
      auVar2._8_4_ = uVar8;
      auVar2._0_8_ = pbVar6;
      auVar2._12_4_ = 0;
      auVar11._8_4_ = uVar8;
      auVar11._0_8_ = pbVar6;
      auVar11._12_4_ = 0;
      uVar8 = uVar8 >> 3;
      if (uVar8 == 999) goto LAB_006cc368;
LAB_006cc2a4:
      auVar11 = auVar2;
      pbVar7 = auVar11._0_8_;
      if (uVar8 == 3) {
        if ((auVar11._8_4_ & 0xff) != 0x18) goto LAB_006cc3fc;
        uVar10 = uVar10 | 2;
        param_2 = pbVar7 + 1;
        uVar5 = (ulong)(char)*pbVar7;
        if ((long)uVar5 < 0) {
          uVar5 = (ulong)(((uint)*param_2 * 0x80 + (uint)*pbVar7) - 0x80);
          if (-1 < (char)*param_2) {
            param_2 = pbVar7 + 2;
            goto LAB_006cc258;
          }
          auVar11 = FUN_0066fd14(pbVar7);
          param_2 = auVar11._0_8_;
          *(bool *)(param_1 + 0x49) = auVar11._8_8_ != 0;
joined_r0x006cc348:
          if (param_2 == (byte *)0x0) {
LAB_006cc4dc:
            pbVar7 = (byte *)0x0;
LAB_006cc4f0:
            *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | uVar10;
            return pbVar7;
          }
        }
        else {
LAB_006cc258:
          *(bool *)(param_1 + 0x49) = uVar5 != 0;
        }
      }
      else {
        if ((uVar8 != 2) || ((auVar11._8_4_ & 0xff) != 0x10)) goto LAB_006cc3fc;
        uVar10 = uVar10 | 1;
        param_2 = pbVar7 + 1;
        uVar5 = (ulong)(char)*pbVar7;
        if ((long)uVar5 < 0) {
          uVar5 = (ulong)(((uint)*param_2 * 0x80 + (uint)*pbVar7) - 0x80);
          if ((char)*param_2 < '\0') {
            auVar11 = FUN_0066fd14(pbVar7);
            param_2 = auVar11._0_8_;
            *(bool *)(param_1 + 0x48) = auVar11._8_8_ != 0;
            goto joined_r0x006cc348;
          }
          param_2 = pbVar7 + 2;
        }
        *(bool *)(param_1 + 0x48) = uVar5 != 0;
      }
    }
    uVar8 = (uVar8 + (uint)*pbVar6 * 0x80) - 0x80;
    if (-1 < (char)*pbVar6) {
      pbVar6 = pbVar7 + 2;
      goto LAB_006cc298;
    }
    auVar11 = FUN_0066fe50(pbVar7);
    uVar8 = (uint)(auVar11._8_8_ >> 3) & 0x1fffffff;
    auVar2 = auVar11;
    if (uVar8 != 999) goto LAB_006cc2a4;
LAB_006cc368:
    if ((auVar11._8_4_ & 0xff) != 0x3a) {
LAB_006cc3fc:
      pbVar7 = auVar11._0_8_;
      uVar8 = auVar11._8_4_;
      if ((uVar8 == 0) || ((uVar8 & 7) == 4)) {
        if (pbVar7 != (byte *)0x0) {
          *(uint *)(param_3 + 10) = uVar8 - 1;
        }
        goto LAB_006cc4f0;
      }
      uVar5 = auVar11._8_8_ & 0xffffffff;
      if (uVar8 >> 6 < 0x7d) {
        if ((*(ulong *)(param_1 + 8) & 1) == 0) {
          uVar4 = FUN_00661fa4(param_1 + 8);
          param_2 = (byte *)FUN_006fbab8(uVar5,uVar4,pbVar7,param_3);
        }
        else {
          param_2 = (byte *)FUN_006fbab8(uVar5,(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,
                                         pbVar7,param_3);
        }
      }
      else {
        param_2 = (byte *)FUN_006d3624(param_1 + 0x10,uVar5,pbVar7,puVar3,param_1 + 8,param_3);
      }
      goto joined_r0x006cc348;
    }
    param_2 = (byte *)(auVar11._0_8_ + -2);
    do {
      piVar9 = *(int **)(param_1 + 0x40);
      if (piVar9 == (int *)0x0) {
LAB_006cc3b4:
        uVar4 = FUN_006d210c(*(undefined8 *)(param_1 + 0x30));
        uVar4 = FUN_00675990(param_1 + 0x30,uVar4);
        param_2 = (byte *)FUN_0066fa8c(param_3,uVar4,param_2 + 2);
      }
      else {
        iVar1 = *(int *)(param_1 + 0x38);
        if (*piVar9 <= iVar1) goto LAB_006cc3b4;
        *(int *)(param_1 + 0x38) = iVar1 + 1;
        param_2 = (byte *)FUN_0066fa8c(param_3,*(undefined8 *)(piVar9 + (long)iVar1 * 2 + 2),
                                       param_2 + 2);
      }
      if (param_2 == (byte *)0x0) goto LAB_006cc4dc;
    } while ((param_2 < (byte *)*param_3) && (*(short *)param_2 == 0x3eba));
  } while( true );
}


// ===== 006cc534  FUN_006cc534 =====

undefined1 * FUN_006cc534(long param_1,undefined1 *param_2,undefined8 *param_3)

{
  uint uVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  long lVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if ((uVar1 & 1) != 0) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_0066d3f8(param_3,param_2);
    }
    uVar3 = *(undefined1 *)(param_1 + 0x48);
    *param_2 = 0x10;
    param_2[1] = uVar3;
    param_2 = param_2 + 2;
  }
  if ((uVar1 >> 1 & 1) == 0) {
    iVar2 = *(int *)(param_1 + 0x38);
  }
  else {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_0066d3f8(param_3,param_2);
    }
    uVar3 = *(undefined1 *)(param_1 + 0x49);
    *param_2 = 0x18;
    param_2[1] = uVar3;
    param_2 = param_2 + 2;
    iVar2 = *(int *)(param_1 + 0x38);
  }
  if (iVar2 != 0) {
    iVar6 = 0;
    do {
      lVar5 = *(long *)(*(long *)(param_1 + 0x40) + (long)iVar6 * 8 + 8);
      param_2 = (undefined1 *)FUN_00678d18(999,lVar5,*(undefined4 *)(lVar5 + 0x14),param_2,param_3);
      iVar6 = iVar6 + 1;
    } while (iVar2 != iVar6);
  }
  if (*(short *)(param_1 + 0x1a) != 0) {
    param_2 = (undefined1 *)
              FUN_00668058(param_1 + 0x10,PTR_PTR_007a3430,1000,0x20000000,param_2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  puVar4 = (undefined1 *)
           FUN_006fc418((*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,param_2,param_3);
  return puVar4;
}


// ===== 006cc674  FUN_006cc674 =====

void FUN_006cc674(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  
  lVar3 = FUN_0066a944(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x38);
  lVar3 = lVar3 + (long)iVar2 * 2;
  puVar5 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x40) != 0) {
    puVar5 = (undefined8 *)(*(long *)(param_1 + 0x40) + 8);
  }
  if (iVar2 != 0) {
    lVar6 = (long)iVar2 << 3;
    do {
      lVar4 = FUN_006cee4c(*puVar5);
      lVar6 = lVar6 + -8;
      lVar3 = lVar4 + lVar3 + (ulong)(((uint)LZCOUNT((uint)lVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      puVar5 = puVar5 + 1;
    } while (lVar6 != 0);
  }
  uVar1 = *(uint *)(param_1 + 0x28);
  if ((uVar1 & 3) != 0) {
    lVar3 = lVar3 + (ulong)(uVar1 & 2) + ((ulong)uVar1 & 1) * 2;
  }
  FUN_006e5694(param_1,lVar3,param_1 + 0x2c);
  return;
}


// ===== 006cc718  FUN_006cc718 =====

void FUN_006cc718(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  
  iVar1 = *(int *)(param_2 + 0x38);
  if (iVar1 != 0) {
    lVar5 = *(long *)(param_2 + 0x40);
    uVar4 = FUN_00675710(param_1 + 0x30,iVar1);
    FUN_006d2998(param_1 + 0x30,uVar4,lVar5 + 8,iVar1,
                 **(int **)(param_1 + 0x40) - *(int *)(param_1 + 0x38));
    iVar2 = **(int **)(param_1 + 0x40);
    iVar1 = *(int *)(param_1 + 0x38) + iVar1;
    *(int *)(param_1 + 0x38) = iVar1;
    if (iVar2 < iVar1) {
      **(int **)(param_1 + 0x40) = iVar1;
    }
  }
  uVar3 = *(uint *)(param_2 + 0x28);
  if ((uVar3 & 3) != 0) {
    if ((uVar3 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 0x48);
    }
    if ((uVar3 >> 1 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x49) = *(undefined1 *)(param_2 + 0x49);
    }
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | uVar3;
  }
  FUN_00666818(param_1 + 0x10,PTR_PTR_007a3430,param_2 + 0x10);
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  FUN_006621e0(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffc) + 8);
  return;
}


// ===== 006cc804  FUN_006cc804 =====

undefined ** FUN_006cc804(void)

{
  return &PTR_FUN_0079a738;
}


// ===== 006cc810  FUN_006cc810 =====

void FUN_006cc810(long param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  if (param_2 != param_1) {
    FUN_006667cc(param_1 + 0x10);
    uVar2 = (ulong)*(uint *)(param_1 + 0x38);
    if (0 < (int)*(uint *)(param_1 + 0x38)) {
      puVar1 = *(undefined8 **)(param_1 + 0x40);
      do {
        puVar1 = puVar1 + 1;
        FUN_006ce578(*puVar1);
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
    *(undefined2 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    if ((*(byte *)(param_1 + 8) & 1) != 0) {
      FUN_006622b8();
    }
    FUN_006cc718(param_1,param_2);
    return;
  }
  return;
}


// ===== 006cc894  FUN_006cc894 =====

void FUN_006cc894(void)

{
  FUN_00684dd0(PTR_FUN_007a3328,&DAT_007aebb8,&DAT_007aecd0);
  return;
}


// ===== 006cc8ac  FUN_006cc8ac =====

void FUN_006cc8ac(long *param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  
  uVar1 = param_2 | 2;
  if ((param_3 & 1) == 0) {
    uVar1 = param_2;
  }
  *param_1 = (long)(PTR_DAT_007a34f0 + 0x10);
  param_1[1] = uVar1;
                    /* try { // try from 006cc8dc to 006cc8df has its CatchHandler @ 006cc8f8 */
  FUN_00663dac(param_1 + 2);
  param_1[5] = 0;
  param_1[6] = param_2;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  return;
}


// ===== 006cc90c  FUN_006cc90c =====

void FUN_006cc90c(undefined8 *param_1)

{
  void *__ptr;
  ulong uVar1;
  
  if ((param_1[1] & 1) == 0) {
    uVar1 = param_1[1] & 0xfffffffffffffffc;
  }
  else {
                    /* try { // try from 006cc92c to 006cc92f has its CatchHandler @ 006cc99c */
    uVar1 = FUN_00662218();
  }
  if (uVar1 == 0) {
    FUN_00663dbc(param_1 + 2);
    if ((param_1[8] != 0) && (param_1[6] == 0)) {
                    /* try { // try from 006cc950 to 006cc953 has its CatchHandler @ 006cc998 */
      FUN_00675910();
    }
  }
  *param_1 = &PTR_FUN_00799110;
  if ((((uint)param_1[1] >> 1 & 1) != 0) &&
     (__ptr = (void *)(param_1[1] + -2), __ptr != (void *)0x0)) {
    FUN_00662da0(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 006cc9a0  FUN_006cc9a0 =====

void FUN_006cc9a0(void *param_1)

{
  FUN_006cc90c();
  free(param_1);
  return;
}


// ===== 006cc9c4  FUN_006cc9c4 =====

void FUN_006cc9c4(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}


// ===== 006cc9cc  FUN_006cc9cc =====

byte * FUN_006cc9cc(long param_1,byte *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  
  puVar3 = PTR_PTR_007a3450;
  uVar10 = 0;
  do {
    while( true ) {
      pbVar7 = param_2;
      if ((byte *)*param_3 <= param_2) {
        iVar1 = (int)param_2 - *(int *)(param_3 + 1);
        if (*(int *)((long)param_3 + 0x1c) == iVar1) {
          pbVar7 = (byte *)0x0;
          if (param_3[2] != 0 || iVar1 < 1) {
            pbVar7 = param_2;
          }
          goto LAB_006ccc34;
        }
        auVar11 = FUN_0066f53c(param_3,iVar1,*(undefined4 *)((long)param_3 + 0x5c));
        pbVar7 = auVar11._0_8_;
        if ((auVar11 & (undefined1  [16])0x1) != (undefined1  [16])0x0) goto LAB_006ccc34;
      }
      pbVar6 = pbVar7 + 1;
      uVar8 = (uint)*pbVar7;
      if (-1 < (char)*pbVar7) break;
      uVar8 = (uVar8 + (uint)*pbVar6 * 0x80) - 0x80;
      if (-1 < (char)*pbVar6) {
        pbVar6 = pbVar7 + 2;
        break;
      }
      auVar11 = FUN_0066fe50(pbVar7);
      uVar8 = (uint)(auVar11._8_8_ >> 3) & 0x1fffffff;
      auVar2 = auVar11;
      if (uVar8 == 999) goto LAB_006ccacc;
LAB_006cca58:
      auVar11 = auVar2;
      pbVar7 = auVar11._0_8_;
      if ((uVar8 != 1) || ((auVar11._8_4_ & 0xff) != 8)) goto LAB_006ccb60;
      param_2 = pbVar7 + 1;
      uVar5 = (ulong)(char)*pbVar7;
      if ((long)uVar5 < 0) {
        uVar5 = (ulong)(((uint)*param_2 * 0x80 + (uint)*pbVar7) - 0x80);
        if (-1 < (char)*param_2) {
          param_2 = pbVar7 + 2;
          goto LAB_006cca08;
        }
        auVar11 = FUN_0066fd14(pbVar7);
        param_2 = auVar11._0_8_;
        uVar10 = 1;
        *(bool *)(param_1 + 0x48) = auVar11._8_8_ != 0;
joined_r0x006ccaac:
        if (param_2 == (byte *)0x0) {
LAB_006ccc20:
          pbVar7 = (byte *)0x0;
LAB_006ccc34:
          *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | uVar10;
          return pbVar7;
        }
      }
      else {
LAB_006cca08:
        uVar10 = 1;
        *(bool *)(param_1 + 0x48) = uVar5 != 0;
      }
    }
    auVar2._8_4_ = uVar8;
    auVar2._0_8_ = pbVar6;
    auVar2._12_4_ = 0;
    auVar11._8_4_ = uVar8;
    auVar11._0_8_ = pbVar6;
    auVar11._12_4_ = 0;
    uVar8 = uVar8 >> 3;
    if (uVar8 != 999) goto LAB_006cca58;
LAB_006ccacc:
    if ((auVar11._8_4_ & 0xff) != 0x3a) {
LAB_006ccb60:
      pbVar7 = auVar11._0_8_;
      uVar8 = auVar11._8_4_;
      if ((uVar8 == 0) || ((uVar8 & 7) == 4)) {
        if (pbVar7 != (byte *)0x0) {
          *(uint *)(param_3 + 10) = uVar8 - 1;
        }
        goto LAB_006ccc34;
      }
      uVar5 = auVar11._8_8_ & 0xffffffff;
      if (uVar8 >> 6 < 0x7d) {
        if ((*(ulong *)(param_1 + 8) & 1) == 0) {
          uVar4 = FUN_00661fa4(param_1 + 8);
          param_2 = (byte *)FUN_006fbab8(uVar5,uVar4,pbVar7,param_3);
        }
        else {
          param_2 = (byte *)FUN_006fbab8(uVar5,(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,
                                         pbVar7,param_3);
        }
      }
      else {
        param_2 = (byte *)FUN_006d3624(param_1 + 0x10,uVar5,pbVar7,puVar3,param_1 + 8,param_3);
      }
      goto joined_r0x006ccaac;
    }
    param_2 = (byte *)(auVar11._0_8_ + -2);
    do {
      piVar9 = *(int **)(param_1 + 0x40);
      if (piVar9 == (int *)0x0) {
LAB_006ccb18:
        uVar4 = FUN_006d210c(*(undefined8 *)(param_1 + 0x30));
        uVar4 = FUN_00675990(param_1 + 0x30,uVar4);
        param_2 = (byte *)FUN_0066fa8c(param_3,uVar4,param_2 + 2);
      }
      else {
        iVar1 = *(int *)(param_1 + 0x38);
        if (*piVar9 <= iVar1) goto LAB_006ccb18;
        *(int *)(param_1 + 0x38) = iVar1 + 1;
        param_2 = (byte *)FUN_0066fa8c(param_3,*(undefined8 *)(piVar9 + (long)iVar1 * 2 + 2),
                                       param_2 + 2);
      }
      if (param_2 == (byte *)0x0) goto LAB_006ccc20;
    } while ((param_2 < (byte *)*param_3) && (*(short *)param_2 == 0x3eba));
  } while( true );
}


// ===== 006ccc78  FUN_006ccc78 =====

undefined1 * FUN_006ccc78(long param_1,undefined1 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  long lVar4;
  int iVar5;
  
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_0066d3f8(param_3,param_2);
    }
    uVar2 = *(undefined1 *)(param_1 + 0x48);
    *param_2 = 8;
    param_2[1] = uVar2;
    param_2 = param_2 + 2;
  }
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 != 0) {
    iVar5 = 0;
    do {
      lVar4 = *(long *)(*(long *)(param_1 + 0x40) + (long)iVar5 * 8 + 8);
      param_2 = (undefined1 *)FUN_00678d18(999,lVar4,*(undefined4 *)(lVar4 + 0x14),param_2,param_3);
      iVar5 = iVar5 + 1;
    } while (iVar1 != iVar5);
  }
  if (*(short *)(param_1 + 0x1a) != 0) {
    param_2 = (undefined1 *)
              FUN_00668058(param_1 + 0x10,PTR_PTR_007a3450,1000,0x20000000,param_2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  puVar3 = (undefined1 *)
           FUN_006fc418((*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,param_2,param_3);
  return puVar3;
}


// ===== 006ccd70  FUN_006ccd70 =====

void FUN_006ccd70(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar2 = FUN_0066a944(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 0x38);
  lVar2 = lVar2 + (long)iVar1 * 2;
  puVar4 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x40) != 0) {
    puVar4 = (undefined8 *)(*(long *)(param_1 + 0x40) + 8);
  }
  if (iVar1 != 0) {
    lVar5 = (long)iVar1 << 3;
    do {
      lVar3 = FUN_006cee4c(*puVar4);
      lVar5 = lVar5 + -8;
      lVar2 = lVar3 + lVar2 + (ulong)(((uint)LZCOUNT((uint)lVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      puVar4 = puVar4 + 1;
    } while (lVar5 != 0);
  }
  FUN_006e5694(param_1,lVar2 + ((ulong)*(uint *)(param_1 + 0x28) & 1) * 2,param_1 + 0x2c);
  return;
}


// ===== 006cce00  FUN_006cce00 =====

void FUN_006cce00(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  iVar1 = *(int *)(param_2 + 0x38);
  if (iVar1 != 0) {
    lVar4 = *(long *)(param_2 + 0x40);
    uVar3 = FUN_00675710(param_1 + 0x30,iVar1);
    FUN_006d2998(param_1 + 0x30,uVar3,lVar4 + 8,iVar1,
                 **(int **)(param_1 + 0x40) - *(int *)(param_1 + 0x38));
    iVar2 = **(int **)(param_1 + 0x40);
    iVar1 = *(int *)(param_1 + 0x38) + iVar1;
    *(int *)(param_1 + 0x38) = iVar1;
    if (iVar2 < iVar1) {
      **(int **)(param_1 + 0x40) = iVar1;
    }
  }
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 0x48);
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 1;
  }
  FUN_00666818(param_1 + 0x10,PTR_PTR_007a3450,param_2 + 0x10);
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  FUN_006621e0(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffc) + 8);
  return;
}


// ===== 006cced8  FUN_006cced8 =====

undefined ** FUN_006cced8(void)

{
  return &PTR_FUN_0079a748;
}


// ===== 006ccee4  FUN_006ccee4 =====

void FUN_006ccee4(long param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  if (param_2 != param_1) {
    FUN_006667cc(param_1 + 0x10);
    uVar2 = (ulong)*(uint *)(param_1 + 0x38);
    if (0 < (int)*(uint *)(param_1 + 0x38)) {
      puVar1 = *(undefined8 **)(param_1 + 0x40);
      do {
        puVar1 = puVar1 + 1;
        FUN_006ce578(*puVar1);
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
    *(undefined1 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    if ((*(byte *)(param_1 + 8) & 1) != 0) {
      FUN_006622b8();
    }
    FUN_006cce00(param_1,param_2);
    return;
  }
  return;
}


// ===== 006ccf68  FUN_006ccf68 =====

void FUN_006ccf68(void)

{
  FUN_00684dd0(PTR_FUN_007a3328,&DAT_007aebb8,&DAT_007aece0);
  return;
}


// ===== 006ccf80  FUN_006ccf80 =====

void FUN_006ccf80(long *param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  
  uVar1 = param_2 | 2;
  if ((param_3 & 1) == 0) {
    uVar1 = param_2;
  }
  *param_1 = (long)(PTR_DAT_007a3500 + 0x10);
  param_1[1] = uVar1;
                    /* try { // try from 006ccfb0 to 006ccfb3 has its CatchHandler @ 006ccfcc */
  FUN_00663dac(param_1 + 2);
  param_1[5] = 0;
  param_1[6] = param_2;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  return;
}


// ===== 006ccfe0  FUN_006ccfe0 =====

void FUN_006ccfe0(undefined8 *param_1)

{
  void *__ptr;
  ulong uVar1;
  
  if ((param_1[1] & 1) == 0) {
    uVar1 = param_1[1] & 0xfffffffffffffffc;
  }
  else {
                    /* try { // try from 006cd000 to 006cd003 has its CatchHandler @ 006cd070 */
    uVar1 = FUN_00662218();
  }
  if (uVar1 == 0) {
    FUN_00663dbc(param_1 + 2);
    if ((param_1[8] != 0) && (param_1[6] == 0)) {
                    /* try { // try from 006cd024 to 006cd027 has its CatchHandler @ 006cd06c */
      FUN_00675910();
    }
  }
  *param_1 = &PTR_FUN_00799110;
  if ((((uint)param_1[1] >> 1 & 1) != 0) &&
     (__ptr = (void *)(param_1[1] + -2), __ptr != (void *)0x0)) {
    FUN_00662da0(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 006cd074  FUN_006cd074 =====

void FUN_006cd074(void *param_1)

{
  FUN_006ccfe0();
  free(param_1);
  return;
}


// ===== 006cd098  FUN_006cd098 =====

void FUN_006cd098(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}


// ===== 006cd0a0  FUN_006cd0a0 =====

byte * FUN_006cd0a0(long param_1,byte *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  
  puVar3 = PTR_PTR_007a3470;
  uVar10 = 0;
  do {
    while( true ) {
      pbVar7 = param_2;
      if ((byte *)*param_3 <= param_2) {
        iVar1 = (int)param_2 - *(int *)(param_3 + 1);
        if (*(int *)((long)param_3 + 0x1c) == iVar1) {
          pbVar7 = (byte *)0x0;
          if (param_3[2] != 0 || iVar1 < 1) {
            pbVar7 = param_2;
          }
          goto LAB_006cd308;
        }
        auVar11 = FUN_0066f53c(param_3,iVar1,*(undefined4 *)((long)param_3 + 0x5c));
        pbVar7 = auVar11._0_8_;
        if ((auVar11 & (undefined1  [16])0x1) != (undefined1  [16])0x0) goto LAB_006cd308;
      }
      pbVar6 = pbVar7 + 1;
      uVar8 = (uint)*pbVar7;
      if (-1 < (char)*pbVar7) break;
      uVar8 = (uVar8 + (uint)*pbVar6 * 0x80) - 0x80;
      if (-1 < (char)*pbVar6) {
        pbVar6 = pbVar7 + 2;
        break;
      }
      auVar11 = FUN_0066fe50(pbVar7);
      uVar8 = (uint)(auVar11._8_8_ >> 3) & 0x1fffffff;
      auVar2 = auVar11;
      if (uVar8 == 999) goto LAB_006cd1a0;
LAB_006cd12c:
      auVar11 = auVar2;
      pbVar7 = auVar11._0_8_;
      if ((uVar8 != 0x21) || ((auVar11._8_4_ & 0xff) != 8)) goto LAB_006cd234;
      param_2 = pbVar7 + 1;
      uVar5 = (ulong)(char)*pbVar7;
      if ((long)uVar5 < 0) {
        uVar5 = (ulong)(((uint)*param_2 * 0x80 + (uint)*pbVar7) - 0x80);
        if (-1 < (char)*param_2) {
          param_2 = pbVar7 + 2;
          goto LAB_006cd0dc;
        }
        auVar11 = FUN_0066fd14(pbVar7);
        param_2 = auVar11._0_8_;
        uVar10 = 1;
        *(bool *)(param_1 + 0x48) = auVar11._8_8_ != 0;
joined_r0x006cd180:
        if (param_2 == (byte *)0x0) {
LAB_006cd2f4:
          pbVar7 = (byte *)0x0;
LAB_006cd308:
          *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | uVar10;
          return pbVar7;
        }
      }
      else {
LAB_006cd0dc:
        uVar10 = 1;
        *(bool *)(param_1 + 0x48) = uVar5 != 0;
      }
    }
    auVar2._8_4_ = uVar8;
    auVar2._0_8_ = pbVar6;
    auVar2._12_4_ = 0;
    auVar11._8_4_ = uVar8;
    auVar11._0_8_ = pbVar6;
    auVar11._12_4_ = 0;
    uVar8 = uVar8 >> 3;
    if (uVar8 != 999) goto LAB_006cd12c;
LAB_006cd1a0:
    if ((auVar11._8_4_ & 0xff) != 0x3a) {
LAB_006cd234:
      pbVar7 = auVar11._0_8_;
      uVar8 = auVar11._8_4_;
      if ((uVar8 == 0) || ((uVar8 & 7) == 4)) {
        if (pbVar7 != (byte *)0x0) {
          *(uint *)(param_3 + 10) = uVar8 - 1;
        }
        goto LAB_006cd308;
      }
      uVar5 = auVar11._8_8_ & 0xffffffff;
      if (uVar8 >> 6 < 0x7d) {
        if ((*(ulong *)(param_1 + 8) & 1) == 0) {
          uVar4 = FUN_00661fa4(param_1 + 8);
          param_2 = (byte *)FUN_006fbab8(uVar5,uVar4,pbVar7,param_3);
        }
        else {
          param_2 = (byte *)FUN_006fbab8(uVar5,(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,
                                         pbVar7,param_3);
        }
      }
      else {
        param_2 = (byte *)FUN_006d3624(param_1 + 0x10,uVar5,pbVar7,puVar3,param_1 + 8,param_3);
      }
      goto joined_r0x006cd180;
    }
    param_2 = (byte *)(auVar11._0_8_ + -2);
    do {
      piVar9 = *(int **)(param_1 + 0x40);
      if (piVar9 == (int *)0x0) {
LAB_006cd1ec:
        uVar4 = FUN_006d210c(*(undefined8 *)(param_1 + 0x30));
        uVar4 = FUN_00675990(param_1 + 0x30,uVar4);
        param_2 = (byte *)FUN_0066fa8c(param_3,uVar4,param_2 + 2);
      }
      else {
        iVar1 = *(int *)(param_1 + 0x38);
        if (*piVar9 <= iVar1) goto LAB_006cd1ec;
        *(int *)(param_1 + 0x38) = iVar1 + 1;
        param_2 = (byte *)FUN_0066fa8c(param_3,*(undefined8 *)(piVar9 + (long)iVar1 * 2 + 2),
                                       param_2 + 2);
      }
      if (param_2 == (byte *)0x0) goto LAB_006cd2f4;
    } while ((param_2 < (byte *)*param_3) && (*(short *)param_2 == 0x3eba));
  } while( true );
}


// ===== 006cd34c  FUN_006cd34c =====

undefined2 * FUN_006cd34c(long param_1,undefined2 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined2 *puVar3;
  long lVar4;
  int iVar5;
  
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_0066d3f8(param_3,param_2);
    }
    uVar2 = *(undefined1 *)(param_1 + 0x48);
    *param_2 = 0x288;
    *(undefined1 *)(param_2 + 1) = uVar2;
    param_2 = (undefined2 *)((long)param_2 + 3);
  }
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 != 0) {
    iVar5 = 0;
    do {
      lVar4 = *(long *)(*(long *)(param_1 + 0x40) + (long)iVar5 * 8 + 8);
      param_2 = (undefined2 *)FUN_00678d18(999,lVar4,*(undefined4 *)(lVar4 + 0x14),param_2,param_3);
      iVar5 = iVar5 + 1;
    } while (iVar1 != iVar5);
  }
  if (*(short *)(param_1 + 0x1a) != 0) {
    param_2 = (undefined2 *)
              FUN_00668058(param_1 + 0x10,PTR_PTR_007a3470,1000,0x20000000,param_2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  puVar3 = (undefined2 *)
           FUN_006fc418((*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,param_2,param_3);
  return puVar3;
}


// ===== 006cd444  FUN_006cd444 =====

void FUN_006cd444(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar2 = FUN_0066a944(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 0x38);
  lVar2 = lVar2 + (long)iVar1 * 2;
  puVar4 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x40) != 0) {
    puVar4 = (undefined8 *)(*(long *)(param_1 + 0x40) + 8);
  }
  if (iVar1 != 0) {
    lVar5 = (long)iVar1 << 3;
    do {
      lVar3 = FUN_006cee4c(*puVar4);
      lVar5 = lVar5 + -8;
      lVar2 = lVar3 + lVar2 + (ulong)(((uint)LZCOUNT((uint)lVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      puVar4 = puVar4 + 1;
    } while (lVar5 != 0);
  }
  if ((*(uint *)(param_1 + 0x28) & 1) != 0) {
    lVar2 = lVar2 + 3;
  }
  FUN_006e5694(param_1,lVar2,param_1 + 0x2c);
  return;
}


// ===== 006cd4d8  FUN_006cd4d8 =====

void FUN_006cd4d8(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  iVar1 = *(int *)(param_2 + 0x38);
  if (iVar1 != 0) {
    lVar4 = *(long *)(param_2 + 0x40);
    uVar3 = FUN_00675710(param_1 + 0x30,iVar1);
    FUN_006d2998(param_1 + 0x30,uVar3,lVar4 + 8,iVar1,
                 **(int **)(param_1 + 0x40) - *(int *)(param_1 + 0x38));
    iVar2 = **(int **)(param_1 + 0x40);
    iVar1 = *(int *)(param_1 + 0x38) + iVar1;
    *(int *)(param_1 + 0x38) = iVar1;
    if (iVar2 < iVar1) {
      **(int **)(param_1 + 0x40) = iVar1;
    }
  }
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 0x48);
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 1;
  }
  FUN_00666818(param_1 + 0x10,PTR_PTR_007a3470,param_2 + 0x10);
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  FUN_006621e0(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffc) + 8);
  return;
}


// ===== 006cd5b0  FUN_006cd5b0 =====

undefined ** FUN_006cd5b0(void)

{
  return &PTR_FUN_0079a758;
}


// ===== 006cd5bc  FUN_006cd5bc =====

void FUN_006cd5bc(long param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  if (param_2 != param_1) {
    FUN_006667cc(param_1 + 0x10);
    uVar2 = (ulong)*(uint *)(param_1 + 0x38);
    if (0 < (int)*(uint *)(param_1 + 0x38)) {
      puVar1 = *(undefined8 **)(param_1 + 0x40);
      do {
        puVar1 = puVar1 + 1;
        FUN_006ce578(*puVar1);
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
    *(undefined1 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    if ((*(byte *)(param_1 + 8) & 1) != 0) {
      FUN_006622b8();
    }
    FUN_006cd4d8(param_1,param_2);
    return;
  }
  return;
}


// ===== 006cd640  FUN_006cd640 =====

void FUN_006cd640(void)

{
  FUN_00684dd0(PTR_FUN_007a3328,&DAT_007aebb8,&DAT_007aecf0);
  return;
}


// ===== 006cd658  FUN_006cd658 =====

void FUN_006cd658(long *param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  
  uVar1 = param_2 | 2;
  if ((param_3 & 1) == 0) {
    uVar1 = param_2;
  }
  *param_1 = (long)(PTR_DAT_007a3510 + 0x10);
  param_1[1] = uVar1;
                    /* try { // try from 006cd688 to 006cd68b has its CatchHandler @ 006cd6a8 */
  FUN_00663dac(param_1 + 2);
  param_1[5] = 0;
  param_1[6] = param_2;
  *(undefined4 *)((long)param_1 + 0x4c) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  return;
}


// ===== 006cd6bc  FUN_006cd6bc =====

void FUN_006cd6bc(undefined8 *param_1)

{
  void *__ptr;
  ulong uVar1;
  
  if ((param_1[1] & 1) == 0) {
    uVar1 = param_1[1] & 0xfffffffffffffffc;
  }
  else {
                    /* try { // try from 006cd6dc to 006cd6df has its CatchHandler @ 006cd74c */
    uVar1 = FUN_00662218();
  }
  if (uVar1 == 0) {
    FUN_00663dbc(param_1 + 2);
    if ((param_1[8] != 0) && (param_1[6] == 0)) {
                    /* try { // try from 006cd700 to 006cd703 has its CatchHandler @ 006cd748 */
      FUN_00675910();
    }
  }
  *param_1 = &PTR_FUN_00799110;
  if ((((uint)param_1[1] >> 1 & 1) != 0) &&
     (__ptr = (void *)(param_1[1] + -2), __ptr != (void *)0x0)) {
    FUN_00662da0(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 006cd750  FUN_006cd750 =====

void FUN_006cd750(void *param_1)

{
  FUN_006cd6bc();
  free(param_1);
  return;
}


// ===== 006cd774  FUN_006cd774 =====

void FUN_006cd774(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}


// ===== 006cd77c  FUN_006cd77c =====

byte * FUN_006cd77c(long param_1,byte *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  puVar3 = PTR_PTR_007a3490;
  uVar11 = 0;
LAB_006cd7c8:
  do {
    pbVar8 = param_2;
    if ((byte *)*param_3 <= param_2) {
      iVar1 = (int)param_2 - *(int *)(param_3 + 1);
      if (*(int *)((long)param_3 + 0x1c) == iVar1) {
        pbVar8 = (byte *)0x0;
        if (param_3[2] != 0 || iVar1 < 1) {
          pbVar8 = param_2;
        }
        goto LAB_006cda8c;
      }
      auVar12 = FUN_0066f53c(param_3,iVar1,*(undefined4 *)((long)param_3 + 0x5c));
      pbVar8 = auVar12._0_8_;
      if ((auVar12 & (undefined1  [16])0x1) != (undefined1  [16])0x0) goto LAB_006cda8c;
    }
    pbVar7 = pbVar8 + 1;
    uVar9 = (uint)*pbVar8;
    if ((char)*pbVar8 < '\0') {
      uVar9 = (uVar9 + (uint)*pbVar7 * 0x80) - 0x80;
      if (-1 < (char)*pbVar7) {
        pbVar7 = pbVar8 + 2;
        goto LAB_006cd7fc;
      }
      auVar12 = FUN_0066fe50(pbVar8);
      uVar9 = (uint)(auVar12._8_8_ >> 3) & 0x1fffffff;
      auVar2 = auVar12;
      if (uVar9 != 999) goto LAB_006cd808;
LAB_006cd8d4:
      if ((auVar12._8_4_ & 0xff) == 0x3a) {
        param_2 = (byte *)(auVar12._0_8_ + -2);
        do {
          piVar10 = *(int **)(param_1 + 0x40);
          if (piVar10 == (int *)0x0) {
LAB_006cd920:
            uVar4 = FUN_006d210c(*(undefined8 *)(param_1 + 0x30));
            uVar4 = FUN_00675990(param_1 + 0x30,uVar4);
            param_2 = (byte *)FUN_0066fa8c(param_3,uVar4,param_2 + 2);
          }
          else {
            iVar1 = *(int *)(param_1 + 0x38);
            if (*piVar10 <= iVar1) goto LAB_006cd920;
            *(int *)(param_1 + 0x38) = iVar1 + 1;
            param_2 = (byte *)FUN_0066fa8c(param_3,*(undefined8 *)(piVar10 + (long)iVar1 * 2 + 2),
                                           param_2 + 2);
          }
          if (param_2 == (byte *)0x0) goto LAB_006cda88;
        } while ((param_2 < (byte *)*param_3) && (*(short *)param_2 == 0x3eba));
        goto LAB_006cd7c8;
      }
LAB_006cd968:
      pbVar8 = auVar12._0_8_;
      uVar9 = auVar12._8_4_;
      if ((uVar9 == 0) || ((uVar9 & 7) == 4)) {
        if (pbVar8 != (byte *)0x0) {
          *(uint *)(param_3 + 10) = uVar9 - 1;
        }
        goto LAB_006cda8c;
      }
      uVar6 = auVar12._8_8_ & 0xffffffff;
      if (uVar9 >> 6 < 0x7d) {
        if ((*(ulong *)(param_1 + 8) & 1) == 0) {
          uVar4 = FUN_00661fa4(param_1 + 8);
          param_2 = (byte *)FUN_006fbab8(uVar6,uVar4,pbVar8,param_3);
        }
        else {
          param_2 = (byte *)FUN_006fbab8(uVar6,(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,
                                         pbVar8,param_3);
        }
      }
      else {
        param_2 = (byte *)FUN_006d3624(param_1 + 0x10,uVar6,pbVar8,puVar3,param_1 + 8,param_3);
      }
    }
    else {
LAB_006cd7fc:
      auVar2._8_4_ = uVar9;
      auVar2._0_8_ = pbVar7;
      auVar2._12_4_ = 0;
      auVar12._8_4_ = uVar9;
      auVar12._0_8_ = pbVar7;
      auVar12._12_4_ = 0;
      uVar9 = uVar9 >> 3;
      if (uVar9 == 999) goto LAB_006cd8d4;
LAB_006cd808:
      auVar12 = auVar2;
      pbVar8 = auVar12._0_8_;
      if (uVar9 == 0x22) {
        if ((auVar12._8_4_ & 0xff) != 0x10) goto LAB_006cd968;
        pbVar7 = pbVar8 + 1;
        uVar6 = (ulong)(char)*pbVar8;
        if ((long)uVar6 < 0) {
          uVar6 = (ulong)(((uint)*pbVar7 * 0x80 + (uint)*pbVar8) - 0x80);
          if (-1 < (char)*pbVar7) {
            pbVar7 = pbVar8 + 2;
            goto LAB_006cd8a0;
          }
          auVar13 = FUN_0066fd14(pbVar8);
          if (auVar13._0_8_ == 0) goto LAB_006cda88;
          uVar9 = auVar13._8_4_;
        }
        else {
LAB_006cd8a0:
          auVar13._8_8_ = uVar6;
          auVar13._0_8_ = pbVar7;
          uVar9 = (uint)uVar6;
        }
        param_2 = auVar13._0_8_;
        if (uVar9 < 3) {
          *(int *)(param_1 + 0x4c) = auVar13._8_4_;
          *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 2;
        }
        else {
          if ((*(ulong *)(param_1 + 8) & 1) == 0) {
            lVar5 = FUN_00661fa4(param_1 + 8);
          }
          else {
            lVar5 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8;
          }
          FUN_006faf8c(lVar5,0x22,auVar13._8_8_);
        }
        goto LAB_006cd7c8;
      }
      if ((uVar9 != 0x21) || ((auVar12._8_4_ & 0xff) != 8)) goto LAB_006cd968;
      param_2 = pbVar8 + 1;
      uVar6 = (ulong)(char)*pbVar8;
      if (-1 < (long)uVar6) {
LAB_006cd7b8:
        uVar11 = 1;
        *(bool *)(param_1 + 0x48) = uVar6 != 0;
        goto LAB_006cd7c8;
      }
      uVar6 = (ulong)(((uint)*param_2 * 0x80 + (uint)*pbVar8) - 0x80);
      if (-1 < (char)*param_2) {
        param_2 = pbVar8 + 2;
        goto LAB_006cd7b8;
      }
      auVar12 = FUN_0066fd14(pbVar8);
      param_2 = auVar12._0_8_;
      uVar11 = 1;
      *(bool *)(param_1 + 0x48) = auVar12._8_8_ != 0;
    }
    if (param_2 == (byte *)0x0) {
LAB_006cda88:
      pbVar8 = (byte *)0x0;
LAB_006cda8c:
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | uVar11;
      return pbVar8;
    }
  } while( true );
}


// ===== 006cdad0  FUN_006cdad0 =====

undefined2 * FUN_006cdad0(long param_1,undefined2 *param_2,undefined8 *param_3)

{
  uint uVar1;
  int iVar2;
  undefined1 uVar3;
  undefined2 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if ((uVar1 & 1) != 0) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_0066d3f8(param_3,param_2);
    }
    uVar3 = *(undefined1 *)(param_1 + 0x48);
    *param_2 = 0x288;
    *(undefined1 *)(param_2 + 1) = uVar3;
    param_2 = (undefined2 *)((long)param_2 + 3);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    if (param_2 < (undefined2 *)*param_3) {
      uVar1 = *(uint *)(param_1 + 0x4c);
      *param_2 = 0x290;
      *(char *)(param_2 + 1) = (char)uVar1;
    }
    else {
      param_2 = (undefined2 *)FUN_0066d3f8(param_3,param_2);
      uVar1 = *(uint *)(param_1 + 0x4c);
      *param_2 = 0x290;
      *(char *)(param_2 + 1) = (char)uVar1;
    }
    if (uVar1 < 0x80) {
      param_2 = (undefined2 *)((long)param_2 + 3);
    }
    else {
      uVar6 = (ulong)(long)(int)uVar1 >> 7;
      *(byte *)(param_2 + 1) = (byte)uVar1 | 0x80;
      *(char *)((long)param_2 + 3) = (char)uVar6;
      param_2 = param_2 + 2;
      puVar4 = param_2;
      if (0x3fff < uVar1) {
        do {
          uVar7 = uVar6 >> 0xe;
          uVar6 = uVar6 >> 7;
          *(byte *)((long)puVar4 + -1) = *(byte *)((long)puVar4 + -1) | 0x80;
          param_2 = (undefined2 *)((long)puVar4 + 1);
          *(char *)puVar4 = (char)uVar6;
          puVar4 = param_2;
        } while (uVar7 != 0);
      }
    }
  }
  iVar2 = *(int *)(param_1 + 0x38);
  if (iVar2 != 0) {
    iVar8 = 0;
    do {
      lVar5 = *(long *)(*(long *)(param_1 + 0x40) + (long)iVar8 * 8 + 8);
      param_2 = (undefined2 *)FUN_00678d18(999,lVar5,*(undefined4 *)(lVar5 + 0x14),param_2,param_3);
      iVar8 = iVar8 + 1;
    } while (iVar2 != iVar8);
  }
  if (*(short *)(param_1 + 0x1a) != 0) {
    param_2 = (undefined2 *)
              FUN_00668058(param_1 + 0x10,PTR_PTR_007a3490,1000,0x20000000,param_2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    puVar4 = (undefined2 *)
             FUN_006fc418((*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,param_2,param_3);
    return puVar4;
  }
  return param_2;
}


// ===== 006cdc58  FUN_006cdc58 =====

void FUN_006cdc58(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  
  lVar3 = FUN_0066a944(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x38);
  lVar3 = lVar3 + (long)iVar2 * 2;
  puVar5 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x40) != 0) {
    puVar5 = (undefined8 *)(*(long *)(param_1 + 0x40) + 8);
  }
  if (iVar2 != 0) {
    lVar6 = (long)iVar2 << 3;
    do {
      lVar4 = FUN_006cee4c(*puVar5);
      lVar6 = lVar6 + -8;
      lVar3 = lVar4 + lVar3 + (ulong)(((uint)LZCOUNT((uint)lVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      puVar5 = puVar5 + 1;
    } while (lVar6 != 0);
  }
  uVar1 = *(uint *)(param_1 + 0x28);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar3 = lVar3 + 3;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar3 = lVar3 + ((LZCOUNT((long)*(int *)(param_1 + 0x4c) | 1) ^ 0x3fU) * 9 + 0x49 >> 6) + 2;
    }
  }
  FUN_006e5694(param_1,lVar3,param_1 + 0x2c);
  return;
}


// ===== 006cdd1c  FUN_006cdd1c =====

void FUN_006cdd1c(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  
  iVar1 = *(int *)(param_2 + 0x38);
  if (iVar1 != 0) {
    lVar5 = *(long *)(param_2 + 0x40);
    uVar4 = FUN_00675710(param_1 + 0x30,iVar1);
    FUN_006d2998(param_1 + 0x30,uVar4,lVar5 + 8,iVar1,
                 **(int **)(param_1 + 0x40) - *(int *)(param_1 + 0x38));
    iVar2 = **(int **)(param_1 + 0x40);
    iVar1 = *(int *)(param_1 + 0x38) + iVar1;
    *(int *)(param_1 + 0x38) = iVar1;
    if (iVar2 < iVar1) {
      **(int **)(param_1 + 0x40) = iVar1;
    }
  }
  uVar3 = *(uint *)(param_2 + 0x28);
  if ((uVar3 & 3) != 0) {
    if ((uVar3 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 0x48);
    }
    if ((uVar3 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
    }
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | uVar3;
  }
  FUN_00666818(param_1 + 0x10,PTR_PTR_007a3490,param_2 + 0x10);
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  FUN_006621e0(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffc) + 8);
  return;
}


// ===== 006cde08  FUN_006cde08 =====

undefined ** FUN_006cde08(void)

{
  return &PTR_FUN_0079a768;
}


// ===== 006cde14  FUN_006cde14 =====

void FUN_006cde14(long param_1,long param_2)

{
  if (param_2 != param_1) {
    FUN_006c7d14();
    FUN_006cdd1c(param_1,param_2);
    return;
  }
  return;
}


// ===== 006cde4c  FUN_006cde4c =====

void FUN_006cde4c(void)

{
  FUN_00684dd0(PTR_FUN_007a3328,&DAT_007aebb8,&DAT_007aed00);
  return;
}


// ===== 006cde64  FUN_006cde64 =====

void FUN_006cde64(long *param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_007a3520;
  uVar1 = param_2 | 2;
  if ((param_3 & 1) == 0) {
    uVar1 = param_2;
  }
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = uVar1;
  param_1[2] = 0;
  param_1[3] = (long)&DAT_007aea80;
  return;
}


// ===== 006cde94  FUN_006cde94 =====

void FUN_006cde94(undefined8 *param_1)

{
  void *__ptr;
  ulong uVar1;
  
  if ((param_1[1] & 1) == 0) {
    uVar1 = param_1[1] & 0xfffffffffffffffc;
  }
  else {
                    /* try { // try from 006cdeb4 to 006cdec3 has its CatchHandler @ 006cdf08 */
    uVar1 = FUN_00662218();
  }
  if (uVar1 == 0) {
    FUN_00663a20(param_1 + 3);
  }
  *param_1 = &PTR_FUN_00799110;
  if ((((uint)param_1[1] >> 1 & 1) != 0) &&
     (__ptr = (void *)(param_1[1] + -2), __ptr != (void *)0x0)) {
    FUN_00662da0(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 006cdf0c  FUN_006cdf0c =====

void FUN_006cdf0c(void *param_1)

{
  FUN_006cde94();
  free(param_1);
  return;
}


// ===== 006cdf30  FUN_006cdf30 =====

void FUN_006cdf30(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}


// ===== 006cdf38  FUN_006cdf38 =====

void FUN_006cdf38(long param_1)

{
  byte bVar1;
  byte *pbVar2;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    pbVar2 = (byte *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    if ((*pbVar2 & 1) != 0) {
      **(undefined1 **)(pbVar2 + 0x10) = 0;
      pbVar2[8] = 0;
      pbVar2[9] = 0;
      pbVar2[10] = 0;
      pbVar2[0xb] = 0;
      pbVar2[0xc] = 0;
      pbVar2[0xd] = 0;
      pbVar2[0xe] = 0;
      pbVar2[0xf] = 0;
      bVar1 = *(byte *)(param_1 + 8);
      *(undefined1 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      goto joined_r0x006cdf80;
    }
    pbVar2[0] = 0;
    pbVar2[1] = 0;
  }
  bVar1 = *(byte *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
joined_r0x006cdf80:
  if ((bVar1 & 1) == 0) {
    return;
  }
  FUN_006622b8();
  return;
}


// ===== 006cdf88  FUN_006cdf88 =====

byte * FUN_006cdf88(long param_1,byte *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  ulong *puVar4;
  ulong uVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  
  uVar8 = 0;
  do {
    while( true ) {
      if ((byte *)*param_3 <= param_2) {
        iVar1 = (int)param_2 - *(int *)(param_3 + 1);
        if (*(int *)((long)param_3 + 0x1c) == iVar1) {
          pbVar7 = (byte *)0x0;
          if (param_3[2] != 0 || iVar1 < 1) {
            pbVar7 = param_2;
          }
          goto LAB_006ce15c;
        }
        auVar9 = FUN_0066f53c(param_3,iVar1,*(undefined4 *)((long)param_3 + 0x5c));
        param_2 = auVar9._0_8_;
        pbVar7 = param_2;
        if ((auVar9 & (undefined1  [16])0x1) != (undefined1  [16])0x0) goto LAB_006ce15c;
      }
      pbVar7 = param_2 + 1;
      uVar6 = (uint)*param_2;
      if ((char)*param_2 < '\0') break;
LAB_006cdff8:
      auVar2._8_4_ = uVar6;
      auVar2._0_8_ = pbVar7;
      auVar2._12_4_ = 0;
      auVar9._8_4_ = uVar6;
      auVar9._0_8_ = pbVar7;
      auVar9._12_4_ = 0;
      uVar6 = uVar6 >> 3;
      if (uVar6 == 2) goto LAB_006ce060;
LAB_006ce004:
      auVar9 = auVar2;
      if ((uVar6 != 1) || ((auVar9._8_4_ & 0xff) != 10)) goto LAB_006ce0b0;
      puVar4 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar4 = (ulong *)*puVar4;
      }
      uVar3 = FUN_0066399c(param_1 + 0x18,puVar4);
      param_2 = (byte *)FUN_0066ff90(uVar3,auVar9._0_8_,param_3);
joined_r0x006ce0a8:
      if (param_2 == (byte *)0x0) {
        pbVar7 = (byte *)0x0;
LAB_006ce15c:
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar8;
        return pbVar7;
      }
    }
    uVar6 = (uVar6 + (uint)*pbVar7 * 0x80) - 0x80;
    if (-1 < (char)*pbVar7) {
      pbVar7 = param_2 + 2;
      goto LAB_006cdff8;
    }
    auVar9 = FUN_0066fe50();
    uVar6 = (uint)(auVar9._8_8_ >> 3) & 0x1fffffff;
    auVar2 = auVar9;
    if (uVar6 != 2) goto LAB_006ce004;
LAB_006ce060:
    pbVar7 = auVar9._0_8_;
    if ((auVar9._8_4_ & 0xff) != 0x10) {
LAB_006ce0b0:
      pbVar7 = auVar9._0_8_;
      uVar6 = auVar9._8_4_;
      if ((uVar6 == 0) || ((uVar6 & 7) == 4)) {
        if (pbVar7 != (byte *)0x0) {
          *(uint *)(param_3 + 10) = uVar6 - 1;
        }
        goto LAB_006ce15c;
      }
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        uVar3 = FUN_00661fa4(param_1 + 8);
        param_2 = (byte *)FUN_006fbab8(auVar9._8_8_ & 0xffffffff,uVar3,pbVar7,param_3);
      }
      else {
        param_2 = (byte *)FUN_006fbab8(auVar9._8_8_ & 0xffffffff,
                                       (*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,pbVar7,
                                       param_3);
      }
      goto joined_r0x006ce0a8;
    }
    param_2 = pbVar7 + 1;
    uVar5 = (ulong)(char)*pbVar7;
    if ((long)uVar5 < 0) {
      uVar5 = (ulong)(((uint)*param_2 * 0x80 + (uint)*pbVar7) - 0x80);
      if ((char)*param_2 < '\0') {
        auVar9 = FUN_0066fd14(pbVar7);
        param_2 = auVar9._0_8_;
        uVar8 = 2;
        *(bool *)(param_1 + 0x20) = auVar9._8_8_ != 0;
        goto joined_r0x006ce0a8;
      }
      param_2 = pbVar7 + 2;
    }
    uVar8 = 2;
    *(bool *)(param_1 + 0x20) = uVar5 != 0;
  } while( true );
}


// ===== 006ce19c  FUN_006ce19c =====

undefined1 * FUN_006ce19c(long param_1,undefined1 *param_2,long *param_3)

{
  size_t __n;
  void *__src;
  uint uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    pbVar4 = (byte *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    __n = (ulong)(*pbVar4 >> 1);
    if ((*pbVar4 & 1) != 0) {
      __n = *(size_t *)(pbVar4 + 8);
    }
    if (((long)__n < 0x80) && ((long)__n <= (*param_3 - (long)param_2) + 0xe)) {
      param_2[1] = (char)__n;
      *param_2 = 10;
      __src = (void *)((ulong)pbVar4 | 1);
      if ((*pbVar4 & 1) != 0) {
        __src = *(void **)(pbVar4 + 0x10);
      }
      memcpy(param_2 + 2,__src,__n);
      param_2 = param_2 + 2 + __n;
    }
    else {
      param_2 = (undefined1 *)FUN_0066d778(param_3,1);
    }
  }
  if ((uVar1 >> 1 & 1) == 0) {
    uVar5 = *(ulong *)(param_1 + 8);
  }
  else {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_0066d3f8(param_3,param_2);
    }
    uVar2 = *(undefined1 *)(param_1 + 0x20);
    *param_2 = 0x10;
    param_2[1] = uVar2;
    param_2 = param_2 + 2;
    uVar5 = *(ulong *)(param_1 + 8);
  }
  if ((uVar5 & 1) != 0) {
    puVar3 = (undefined1 *)FUN_006fc418((uVar5 & 0xfffffffffffffffc) + 8,param_2,param_3);
    return puVar3;
  }
  return param_2;
}


// ===== 006ce2d0  FUN_006ce2d0 =====

void FUN_006ce2d0(long param_1)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  byte *pbVar4;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if (((uVar2 ^ 0xffffffff) & 3) == 0) {
    pbVar4 = (byte *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    bVar3 = *pbVar4;
    uVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      uVar1 = *(ulong *)(pbVar4 + 8);
    }
    FUN_006e5694(param_1,uVar1 + (((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 3,
                 param_1 + 0x14);
    return;
  }
  if ((uVar2 & 1) == 0) {
    FUN_006e5694(param_1,(ulong)uVar2 & 2,param_1 + 0x14);
    return;
  }
  pbVar4 = (byte *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  bVar3 = *pbVar4;
  uVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    uVar1 = *(ulong *)(pbVar4 + 8);
  }
  FUN_006e5694(param_1,uVar1 + (((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1 +
                       ((ulong)uVar2 & 2),param_1 + 0x14);
  return;
}


// ===== 006ce384  FUN_006ce384 =====

void FUN_006ce384(long param_1,long param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar3 = *(ulong *)(param_2 + 0x18);
      puVar2 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar2 = (ulong *)*puVar2;
      }
      FUN_006636d4(param_1 + 0x18,uVar3 & 0xfffffffffffffffc,puVar2);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
    }
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  }
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  FUN_006621e0(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffc) + 8);
  return;
}


// ===== 006ce430  FUN_006ce430 =====

undefined ** FUN_006ce430(void)

{
  return &PTR_FUN_0079a778;
}


// ===== 006ce43c  FUN_006ce43c =====

bool FUN_006ce43c(long param_1)

{
  return ((*(uint *)(param_1 + 0x10) ^ 0xffffffff) & 3) == 0;
}


// ===== 006ce450  FUN_006ce450 =====

void FUN_006ce450(void)

{
  FUN_00684dd0(PTR_FUN_007a3328,&DAT_007aebb8,&DAT_007aed10);
  return;
}


// ===== 006ce468  FUN_006ce468 =====

void FUN_006ce468(long *param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_007a3530;
  param_1[2] = 0;
  param_1[3] = param_2;
  uVar1 = param_2 | 2;
  if ((param_3 & 1) == 0) {
    uVar1 = param_2;
  }
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = uVar1;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  puVar2 = PTR_DAT_007a2ea0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[6] = (long)puVar2;
  param_1[7] = (long)puVar2;
  param_1[8] = (long)puVar2;
  return;
}


// ===== 006ce4a8  FUN_006ce4a8 =====

void FUN_006ce4a8(undefined8 *param_1)

{
  void *__ptr;
  ulong uVar1;
  
  if ((param_1[1] & 1) == 0) {
    uVar1 = param_1[1] & 0xfffffffffffffffc;
  }
  else {
                    /* try { // try from 006ce4c8 to 006ce4cb has its CatchHandler @ 006ce548 */
    uVar1 = FUN_00662218();
  }
  if (uVar1 == 0) {
    if ((param_1[5] != 0) && (param_1[3] == 0)) {
                    /* try { // try from 006ce4e4 to 006ce4e7 has its CatchHandler @ 006ce544 */
      FUN_00675910();
    }
                    /* try { // try from 006ce4e8 to 006ce4ff has its CatchHandler @ 006ce548 */
    FUN_00663a20(param_1 + 6);
    FUN_00663a20(param_1 + 7);
    FUN_00663a20(param_1 + 8);
  }
  *param_1 = &PTR_FUN_00799110;
  if ((((uint)param_1[1] >> 1 & 1) != 0) &&
     (__ptr = (void *)(param_1[1] + -2), __ptr != (void *)0x0)) {
    FUN_00662da0(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 006ce54c  FUN_006ce54c =====

void FUN_006ce54c(void *param_1)

{
  FUN_006ce4a8();
  free(param_1);
  return;
}


// ===== 006ce570  FUN_006ce570 =====

void FUN_006ce570(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}


// ===== 006ce578  FUN_006ce578 =====

void FUN_006ce578(long param_1)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  byte *pbVar5;
  ulong uVar6;
  
  uVar6 = (ulong)*(uint *)(param_1 + 0x20);
  if (0 < (int)*(uint *)(param_1 + 0x20)) {
    plVar4 = *(long **)(param_1 + 0x28);
    do {
      plVar4 = plVar4 + 1;
      lVar3 = *plVar4;
      if ((*(byte *)(lVar3 + 0x10) & 1) == 0) {
        bVar2 = *(byte *)(lVar3 + 8);
        *(undefined1 *)(lVar3 + 0x20) = 0;
        *(undefined4 *)(lVar3 + 0x10) = 0;
      }
      else {
        pbVar5 = (byte *)(*(ulong *)(lVar3 + 0x18) & 0xfffffffffffffffc);
        if ((*pbVar5 & 1) == 0) {
          pbVar5[0] = 0;
          pbVar5[1] = 0;
          bVar2 = *(byte *)(lVar3 + 8);
          *(undefined1 *)(lVar3 + 0x20) = 0;
          *(undefined4 *)(lVar3 + 0x10) = 0;
        }
        else {
          **(undefined1 **)(pbVar5 + 0x10) = 0;
          pbVar5[8] = 0;
          pbVar5[9] = 0;
          pbVar5[10] = 0;
          pbVar5[0xb] = 0;
          pbVar5[0xc] = 0;
          pbVar5[0xd] = 0;
          pbVar5[0xe] = 0;
          pbVar5[0xf] = 0;
          bVar2 = *(byte *)(lVar3 + 8);
          *(undefined1 *)(lVar3 + 0x20) = 0;
          *(undefined4 *)(lVar3 + 0x10) = 0;
        }
      }
      if ((bVar2 & 1) != 0) {
        FUN_006622b8();
      }
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      pbVar5 = (byte *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
      if ((*pbVar5 & 1) == 0) {
        pbVar5[0] = 0;
        pbVar5[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar5 + 0x10) = 0;
        pbVar5[8] = 0;
        pbVar5[9] = 0;
        pbVar5[10] = 0;
        pbVar5[0xb] = 0;
        pbVar5[0xc] = 0;
        pbVar5[0xd] = 0;
        pbVar5[0xe] = 0;
        pbVar5[0xf] = 0;
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      pbVar5 = (byte *)(*(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc);
      if ((*pbVar5 & 1) == 0) {
        pbVar5[0] = 0;
        pbVar5[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar5 + 0x10) = 0;
        pbVar5[8] = 0;
        pbVar5[9] = 0;
        pbVar5[10] = 0;
        pbVar5[0xb] = 0;
        pbVar5[0xc] = 0;
        pbVar5[0xd] = 0;
        pbVar5[0xe] = 0;
        pbVar5[0xf] = 0;
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      pbVar5 = (byte *)(*(ulong *)(param_1 + 0x40) & 0xfffffffffffffffc);
      if ((*pbVar5 & 1) == 0) {
        pbVar5[0] = 0;
        pbVar5[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar5 + 0x10) = 0;
        pbVar5[8] = 0;
        pbVar5[9] = 0;
        pbVar5[10] = 0;
        pbVar5[0xb] = 0;
        pbVar5[0xc] = 0;
        pbVar5[0xd] = 0;
        pbVar5[0xe] = 0;
        pbVar5[0xf] = 0;
      }
    }
  }
  if ((uVar1 & 0x38) != 0) {
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_006622b8((byte *)(param_1 + 8));
    return;
  }
  return;
}


// ===== 006ce6f8  FUN_006ce6f8 =====

byte * FUN_006ce6f8(long param_1,byte *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  ulong *puVar6;
  ulong uVar7;
  uint uVar8;
  int *piVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  
  uVar12 = 0;
LAB_006ce73c:
  while( true ) {
    pbVar11 = param_2;
    if ((byte *)*param_3 <= param_2) {
      iVar1 = (int)param_2 - *(int *)(param_3 + 1);
      if (*(int *)((long)param_3 + 0x1c) == iVar1) {
        pbVar11 = (byte *)0x0;
        if (param_3[2] != 0 || iVar1 < 1) {
          pbVar11 = param_2;
        }
        goto LAB_006cea64;
      }
      auVar13 = FUN_0066f53c(param_3,iVar1,*(undefined4 *)((long)param_3 + 0x5c));
      pbVar11 = auVar13._0_8_;
      if ((auVar13 & (undefined1  [16])0x1) != (undefined1  [16])0x0) goto LAB_006cea64;
    }
    pbVar10 = pbVar11 + 1;
    uVar8 = (uint)*pbVar11;
    if ((char)*pbVar11 < '\0') break;
LAB_006ce770:
    auVar2._8_4_ = uVar8;
    auVar2._0_8_ = pbVar10;
    auVar2._12_4_ = 0;
    auVar13._8_4_ = uVar8;
    auVar13._0_8_ = pbVar10;
    auVar13._12_4_ = 0;
    uVar8 = uVar8 >> 3;
    if (4 < uVar8) goto LAB_006ce77c;
LAB_006ce808:
    pbVar11 = auVar13._0_8_;
    uVar5 = auVar13._8_4_;
    if (uVar8 == 2) {
      if ((uVar5 & 0xff) != 0x12) goto LAB_006ce98c;
      param_2 = pbVar11 + -1;
      do {
        piVar9 = *(int **)(param_1 + 0x28);
        if (piVar9 == (int *)0x0) {
LAB_006ce8ac:
          uVar3 = FUN_006d208c(*(undefined8 *)(param_1 + 0x18));
          uVar3 = FUN_00675990(param_1 + 0x18,uVar3);
          param_2 = (byte *)FUN_0066fa8c(param_3,uVar3,param_2 + 1);
        }
        else {
          iVar1 = *(int *)(param_1 + 0x20);
          if (*piVar9 <= iVar1) goto LAB_006ce8ac;
          *(int *)(param_1 + 0x20) = iVar1 + 1;
          param_2 = (byte *)FUN_0066fa8c(param_3,*(undefined8 *)(piVar9 + (long)iVar1 * 2 + 2),
                                         param_2 + 1);
        }
        if (param_2 == (byte *)0x0) goto LAB_006cea60;
      } while ((param_2 < (byte *)*param_3) && (*param_2 == 0x12));
    }
    else {
      if (uVar8 == 3) {
        if ((uVar5 & 0xff) != 0x1a) goto LAB_006ce98c;
        puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar6 = (ulong *)*puVar6;
        }
        lVar4 = param_1 + 0x30;
        goto LAB_006ce724;
      }
      if ((uVar8 != 4) || ((uVar5 & 0xff) != 0x20)) goto LAB_006ce98c;
      uVar12 = uVar12 | 8;
      param_2 = pbVar11 + 1;
      uVar7 = (ulong)(char)*pbVar11;
      if ((long)uVar7 < 0) {
        uVar7 = (ulong)(((uint)*param_2 * 0x80 + (uint)*pbVar11) - 0x80);
        if (-1 < (char)*param_2) {
          param_2 = pbVar11 + 2;
          goto LAB_006ce858;
        }
        auVar13 = FUN_0066fd14(pbVar11);
        param_2 = auVar13._0_8_;
        *(long *)(param_1 + 0x48) = auVar13._8_8_;
joined_r0x006ce9dc:
        if (param_2 == (byte *)0x0) {
LAB_006cea60:
          pbVar11 = (byte *)0x0;
LAB_006cea64:
          *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar12;
          return pbVar11;
        }
      }
      else {
LAB_006ce858:
        *(ulong *)(param_1 + 0x48) = uVar7;
      }
    }
  }
  uVar8 = (uVar8 + (uint)*pbVar10 * 0x80) - 0x80;
  if (-1 < (char)*pbVar10) {
    pbVar10 = pbVar11 + 2;
    goto LAB_006ce770;
  }
  auVar13 = FUN_0066fe50(pbVar11);
  uVar8 = (uint)(auVar13._8_8_ >> 3) & 0x1fffffff;
  auVar2 = auVar13;
  if (uVar8 < 5) goto LAB_006ce808;
LAB_006ce77c:
  auVar13 = auVar2;
  pbVar11 = auVar13._0_8_;
  uVar5 = auVar13._8_4_;
  if (uVar8 < 7) {
    if (uVar8 == 5) {
      if ((uVar5 & 0xff) == 0x28) {
        uVar12 = uVar12 | 0x10;
        param_2 = pbVar11 + 1;
        uVar7 = (ulong)(char)*pbVar11;
        if ((long)uVar7 < 0) {
          uVar7 = (ulong)(((uint)*param_2 * 0x80 + (uint)*pbVar11) - 0x80);
          if ((char)*param_2 < '\0') {
            auVar13 = FUN_0066fd14(pbVar11);
            param_2 = auVar13._0_8_;
            *(long *)(param_1 + 0x50) = auVar13._8_8_;
            goto joined_r0x006ce9dc;
          }
          param_2 = pbVar11 + 2;
        }
        *(ulong *)(param_1 + 0x50) = uVar7;
        goto LAB_006ce73c;
      }
    }
    else if ((uVar8 == 6) && ((uVar5 & 0xff) == 0x31)) {
      param_2 = pbVar11 + 8;
      uVar12 = uVar12 | 0x20;
      *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)pbVar11;
      goto LAB_006ce73c;
    }
  }
  else if (uVar8 == 7) {
    if ((uVar5 & 0xff) == 0x3a) {
      puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar6 = (ulong *)*puVar6;
      }
      lVar4 = param_1 + 0x38;
LAB_006ce724:
      uVar3 = FUN_0066399c(lVar4,puVar6);
      param_2 = (byte *)FUN_0066ff90(uVar3,pbVar11,param_3);
      goto joined_r0x006ce9dc;
    }
  }
  else if ((uVar8 == 8) && ((uVar5 & 0xff) == 0x42)) {
    puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar6 = (ulong *)*puVar6;
    }
    lVar4 = param_1 + 0x40;
    goto LAB_006ce724;
  }
LAB_006ce98c:
  pbVar11 = auVar13._0_8_;
  uVar8 = auVar13._8_4_;
  if ((uVar8 == 0) || ((uVar8 & 7) == 4)) {
    if (pbVar11 != (byte *)0x0) {
      *(uint *)(param_3 + 10) = uVar8 - 1;
    }
    goto LAB_006cea64;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    lVar4 = FUN_00661fa4(param_1 + 8);
  }
  else {
    lVar4 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8;
  }
  param_2 = (byte *)FUN_006fbab8(auVar13._8_8_ & 0xffffffff,lVar4,pbVar11,param_3);
  goto joined_r0x006ce9dc;
}


// ===== 006ceaa4  FUN_006ceaa4 =====

/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_006ceaa4(long param_1,undefined1 *param_2,long *param_3)

{
  size_t sVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  long lVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  byte *__src;
  int iVar11;
  
  iVar3 = *(int *)(param_1 + 0x20);
  if (iVar3 != 0) {
    iVar11 = 0;
    do {
      lVar6 = *(long *)(*(long *)(param_1 + 0x28) + (long)iVar11 * 8 + 8);
      param_2 = (undefined1 *)FUN_00678d18(2,lVar6,*(undefined4 *)(lVar6 + 0x14),param_2,param_3);
      iVar11 = iVar11 + 1;
    } while (iVar3 != iVar11);
  }
  uVar4 = *(uint *)(param_1 + 0x10);
  if ((uVar4 & 1) != 0) {
    pbVar7 = (byte *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
    sVar1 = (ulong)(*pbVar7 >> 1);
    if ((*pbVar7 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar7 + 8);
    }
    if (((long)sVar1 < 0x80) && ((long)sVar1 <= (*param_3 - (long)param_2) + 0xe)) {
      param_2[1] = (char)sVar1;
      *param_2 = 0x1a;
      pvVar2 = (void *)((ulong)pbVar7 | 1);
      if ((*pbVar7 & 1) != 0) {
        pvVar2 = *(void **)(pbVar7 + 0x10);
      }
      memcpy(param_2 + 2,pvVar2,sVar1);
      param_2 = param_2 + 2 + sVar1;
    }
    else {
      param_2 = (undefined1 *)FUN_0066d778(param_3,3);
    }
  }
  if ((uVar4 >> 3 & 1) != 0) {
    if (param_2 < (undefined1 *)*param_3) {
      uVar10 = *(ulong *)(param_1 + 0x48);
      *param_2 = 0x20;
      param_2[1] = (char)uVar10;
    }
    else {
      param_2 = (undefined1 *)FUN_0066d3f8(param_3,param_2);
      uVar10 = *(ulong *)(param_1 + 0x48);
      *param_2 = 0x20;
      param_2[1] = (char)uVar10;
    }
    if (uVar10 < 0x80) {
      param_2 = param_2 + 2;
    }
    else {
      uVar8 = uVar10 >> 7;
      param_2[1] = (byte)uVar10 | 0x80;
      param_2[2] = (char)uVar8;
      param_2 = param_2 + 3;
      puVar5 = param_2;
      if (0x3fff < uVar10) {
        do {
          uVar10 = uVar8 >> 0xe;
          uVar8 = uVar8 >> 7;
          puVar5[-1] = puVar5[-1] | 0x80;
          param_2 = puVar5 + 1;
          *puVar5 = (char)uVar8;
          puVar5 = param_2;
        } while (uVar10 != 0);
      }
    }
  }
  if ((uVar4 >> 4 & 1) != 0) {
    if (param_2 < (undefined1 *)*param_3) {
      uVar10 = *(ulong *)(param_1 + 0x50);
      *param_2 = 0x28;
      param_2[1] = (char)uVar10;
    }
    else {
      param_2 = (undefined1 *)FUN_0066d3f8(param_3,param_2);
      uVar10 = *(ulong *)(param_1 + 0x50);
      *param_2 = 0x28;
      param_2[1] = (char)uVar10;
    }
    if (uVar10 < 0x80) {
      param_2 = param_2 + 2;
    }
    else {
      uVar8 = uVar10 >> 7;
      param_2[1] = (byte)uVar10 | 0x80;
      param_2[2] = (char)uVar8;
      param_2 = param_2 + 3;
      puVar5 = param_2;
      if (0x3fff < uVar10) {
        do {
          uVar10 = uVar8 >> 0xe;
          uVar8 = uVar8 >> 7;
          puVar5[-1] = puVar5[-1] | 0x80;
          param_2 = puVar5 + 1;
          *puVar5 = (char)uVar8;
          puVar5 = param_2;
        } while (uVar10 != 0);
      }
    }
  }
  if ((uVar4 >> 5 & 1) != 0) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_0066d3f8(param_3,param_2);
    }
    uVar9 = *(undefined8 *)(param_1 + 0x58);
    *param_2 = 0x31;
    *(undefined8 *)(param_2 + 1) = uVar9;
    param_2 = param_2 + 9;
  }
  if ((uVar4 >> 1 & 1) != 0) {
    pbVar7 = (byte *)(*(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc);
    sVar1 = (ulong)(*pbVar7 >> 1);
    if ((*pbVar7 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar7 + 8);
    }
    if (((long)sVar1 < 0x80) && ((long)sVar1 <= (*param_3 - (long)param_2) + 0xe)) {
      param_2[1] = (char)sVar1;
      *param_2 = 0x3a;
      __src = *(byte **)(pbVar7 + 0x10);
      if ((*pbVar7 & 1) == 0) {
        __src = pbVar7 + 1;
      }
      memcpy(param_2 + 2,__src,sVar1);
      param_2 = param_2 + 2 + sVar1;
    }
    else {
      param_2 = (undefined1 *)FUN_0066d778(param_3,7);
    }
  }
  if ((uVar4 >> 2 & 1) == 0) {
    uVar10 = *(ulong *)(param_1 + 8);
  }
  else {
    pbVar7 = (byte *)(*(ulong *)(param_1 + 0x40) & 0xfffffffffffffffc);
    sVar1 = (ulong)(*pbVar7 >> 1);
    if ((*pbVar7 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar7 + 8);
    }
    if (((long)sVar1 < 0x80) && ((long)sVar1 <= (*param_3 - (long)param_2) + 0xe)) {
      param_2[1] = (char)sVar1;
      *param_2 = 0x42;
      pvVar2 = (void *)((ulong)pbVar7 | 1);
      if ((*pbVar7 & 1) != 0) {
        pvVar2 = *(void **)(pbVar7 + 0x10);
      }
      memcpy(param_2 + 2,pvVar2,sVar1);
      param_2 = param_2 + 2 + sVar1;
      uVar10 = *(ulong *)(param_1 + 8);
    }
    else {
      param_2 = (undefined1 *)FUN_0066d778(param_3,8);
      uVar10 = *(ulong *)(param_1 + 8);
    }
  }
  if ((uVar10 & 1) == 0) {
    return param_2;
  }
  puVar5 = (undefined1 *)FUN_006fc418((uVar10 & 0xfffffffffffffffc) + 8,param_2,param_3);
  return puVar5;
}


// ===== 006cee44  FUN_006cee44 =====

undefined4 FUN_006cee44(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}


// ===== 006cee4c  FUN_006cee4c =====

/* WARNING: Type propagation algorithm not settling */

void FUN_006cee4c(long param_1)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  byte *pbVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  lVar7 = (long)*(int *)(param_1 + 0x20);
  plVar8 = (long *)0x0;
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar8 = (long *)(*(long *)(param_1 + 0x28) + 8);
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    lVar7 = 0;
  }
  else {
    lVar9 = lVar7 << 3;
    do {
      lVar4 = *plVar8;
      uVar2 = *(uint *)(lVar4 + 0x10);
      if (((uVar2 ^ 0xffffffff) & 3) == 0) {
        pbVar6 = (byte *)(*(ulong *)(lVar4 + 0x18) & 0xfffffffffffffffc);
        bVar3 = *pbVar6;
        uVar1 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          uVar1 = *(ulong *)(pbVar6 + 8);
        }
        lVar5 = uVar1 + (((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 3;
      }
      else {
        if ((uVar2 & 1) == 0) {
          lVar5 = 0;
        }
        else {
          pbVar6 = (byte *)(*(ulong *)(lVar4 + 0x18) & 0xfffffffffffffffc);
          bVar3 = *pbVar6;
          uVar1 = (ulong)(bVar3 >> 1);
          if ((bVar3 & 1) != 0) {
            uVar1 = *(ulong *)(pbVar6 + 8);
          }
          lVar5 = uVar1 + (((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
        }
        lVar5 = lVar5 + ((ulong)uVar2 & 2);
      }
      lVar4 = FUN_006e5694(lVar4,lVar5,lVar4 + 0x14);
      lVar9 = lVar9 + -8;
      plVar8 = plVar8 + 1;
      lVar7 = lVar4 + lVar7 + (ulong)(((uint)LZCOUNT((uint)lVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    } while (lVar9 != 0);
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 0x3f) != 0) {
    if ((uVar2 & 1) != 0) {
      pbVar6 = (byte *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
      bVar3 = *pbVar6;
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(pbVar6 + 8);
      }
      lVar7 = lVar7 + uVar1 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar2 >> 1 & 1) != 0) {
      pbVar6 = (byte *)(*(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc);
      bVar3 = *pbVar6;
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(pbVar6 + 8);
      }
      lVar7 = lVar7 + uVar1 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar2 >> 2 & 1) != 0) {
      pbVar6 = (byte *)(*(ulong *)(param_1 + 0x40) & 0xfffffffffffffffc);
      bVar3 = *pbVar6;
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(pbVar6 + 8);
      }
      lVar7 = lVar7 + uVar1 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar2 >> 3 & 1) != 0) {
      lVar7 = lVar7 + ((LZCOUNT(*(ulong *)(param_1 + 0x48) | 1) ^ 0x3fU) * 9 + 0x89 >> 6);
    }
    if ((uVar2 >> 4 & 1) != 0) {
      lVar7 = lVar7 + ((LZCOUNT(*(ulong *)(param_1 + 0x50) | 1) ^ 0x3fU) * 9 + 0x89 >> 6);
    }
    if ((uVar2 & 0x20) != 0) {
      lVar7 = lVar7 + 9;
    }
  }
  FUN_006e5694(param_1,lVar7,param_1 + 0x14);
  return;
}


// ===== 006cf0b8  FUN_006cf0b8 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_006cf0b8(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  iVar1 = *(int *)(param_2 + 0x20);
  if (iVar1 != 0) {
    lVar6 = *(long *)(param_2 + 0x28);
    uVar4 = FUN_00675710(param_1 + 0x18,iVar1);
    FUN_006d2bf4(param_1 + 0x18,uVar4,lVar6 + 8,iVar1,
                 **(int **)(param_1 + 0x28) - *(int *)(param_1 + 0x20));
    iVar2 = **(int **)(param_1 + 0x28);
    iVar1 = *(int *)(param_1 + 0x20) + iVar1;
    *(int *)(param_1 + 0x20) = iVar1;
    if (iVar2 < iVar1) {
      **(int **)(param_1 + 0x28) = iVar1;
    }
  }
  uVar3 = *(uint *)(param_2 + 0x10);
  if ((uVar3 & 0x3f) != 0) {
    if ((uVar3 & 1) != 0) {
      uVar5 = *(ulong *)(param_2 + 0x30);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        FUN_006636d4(param_1 + 0x30,uVar5 & 0xfffffffffffffffc);
      }
      else {
        FUN_006636d4(param_1 + 0x30,uVar5 & 0xfffffffffffffffc,
                     *(undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc));
      }
    }
    if ((uVar3 >> 1 & 1) != 0) {
      uVar5 = *(ulong *)(param_2 + 0x38);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        FUN_006636d4(param_1 + 0x38,uVar5 & 0xfffffffffffffffc);
      }
      else {
        FUN_006636d4(param_1 + 0x38,uVar5 & 0xfffffffffffffffc,
                     *(undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc));
      }
    }
    if ((uVar3 >> 2 & 1) != 0) {
      uVar5 = *(ulong *)(param_2 + 0x40);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        FUN_006636d4(param_1 + 0x40,uVar5 & 0xfffffffffffffffc);
      }
      else {
        FUN_006636d4(param_1 + 0x40,uVar5 & 0xfffffffffffffffc,
                     *(undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc));
      }
    }
    if ((uVar3 >> 3 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
    }
    if ((uVar3 >> 4 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
    }
    if ((uVar3 >> 5 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
    }
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar3;
  }
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  FUN_006621e0(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffc) + 8);
  return;
}


// ===== 006cf280  FUN_006cf280 =====

undefined ** FUN_006cf280(void)

{
  return &PTR_FUN_0079a788;
}


// ===== 006cf28c  FUN_006cf28c =====

bool FUN_006cf28c(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = (ulong)*(uint *)(param_1 + 0x20);
  do {
    iVar2 = (int)uVar3;
    if (iVar2 < 1) break;
    lVar1 = uVar3 * 8;
    uVar3 = uVar3 - 1;
  } while (((*(uint *)(*(long *)(*(long *)(param_1 + 0x28) + lVar1) + 0x10) ^ 0xffffffff) & 3) == 0)
  ;
  return iVar2 < 1;
}


// ===== 006cf2c4  FUN_006cf2c4 =====

void FUN_006cf2c4(void)

{
  FUN_00684dd0(PTR_FUN_007a3328,&DAT_007aebb8,&DAT_007aed20);
  return;
}


// ===== 006cf2dc  FUN_006cf2dc =====

void FUN_006cf2dc(long *param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_007a3540;
  uVar1 = param_2 | 2;
  if ((param_3 & 1) == 0) {
    uVar1 = param_2;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_2;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = uVar1;
  param_1[6] = 0;
  param_1[7] = param_2;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = param_2;
  param_1[10] = 0;
  puVar2 = PTR_DAT_007a2ea0;
  param_1[0xb] = 0;
  param_1[0xc] = (long)puVar2;
  param_1[0xd] = (long)puVar2;
  return;
}


// ===== 006cf324  FUN_006cf324 =====

void FUN_006cf324(undefined8 *param_1)

{
  void *__ptr;
  ulong uVar1;
  
  if ((param_1[1] & 1) == 0) {
    uVar1 = param_1[1] & 0xfffffffffffffffc;
  }
  else {
                    /* try { // try from 006cf344 to 006cf373 has its CatchHandler @ 006cf3b8 */
    uVar1 = FUN_00662218();
  }
  if (uVar1 == 0) {
    FUN_00673a60(param_1 + 3);
    FUN_00673a60(param_1 + 6);
    FUN_00675290(param_1 + 9);
    FUN_00663a20(param_1 + 0xc);
    FUN_00663a20(param_1 + 0xd);
  }
  *param_1 = &PTR_FUN_00799110;
  if ((((uint)param_1[1] >> 1 & 1) != 0) &&
     (__ptr = (void *)(param_1[1] + -2), __ptr != (void *)0x0)) {
    FUN_00662da0(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 006cf3bc  FUN_006cf3bc =====

void FUN_006cf3bc(void *param_1)

{
  FUN_006cf324();
  free(param_1);
  return;
}


// ===== 006cf3e0  FUN_006cf3e0 =====

void FUN_006cf3e0(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}


// ===== 006cf3e8  FUN_006cf3e8 =====

void FUN_006cf3e8(long param_1)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  
  uVar3 = (ulong)*(uint *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (0 < (int)*(uint *)(param_1 + 0x50)) {
    puVar4 = (undefined8 *)(*(long *)(param_1 + 0x58) + 8);
    do {
      while (pbVar5 = (byte *)*puVar4, (*pbVar5 & 1) != 0) {
        **(undefined1 **)(pbVar5 + 0x10) = 0;
        pbVar5[8] = 0;
        pbVar5[9] = 0;
        pbVar5[10] = 0;
        pbVar5[0xb] = 0;
        pbVar5[0xc] = 0;
        pbVar5[0xd] = 0;
        pbVar5[0xe] = 0;
        pbVar5[0xf] = 0;
        uVar3 = uVar3 - 1;
        puVar4 = puVar4 + 1;
        if (uVar3 == 0) goto LAB_006cf43c;
      }
      pbVar5[0] = 0;
      pbVar5[1] = 0;
      uVar3 = uVar3 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar3 != 0);
LAB_006cf43c:
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      pbVar5 = (byte *)(*(ulong *)(param_1 + 0x60) & 0xfffffffffffffffc);
      if ((*pbVar5 & 1) == 0) {
        pbVar5[0] = 0;
        pbVar5[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar5 + 0x10) = 0;
        pbVar5[8] = 0;
        pbVar5[9] = 0;
        pbVar5[10] = 0;
        pbVar5[0xb] = 0;
        pbVar5[0xc] = 0;
        pbVar5[0xd] = 0;
        pbVar5[0xe] = 0;
        pbVar5[0xf] = 0;
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      pbVar5 = (byte *)(*(ulong *)(param_1 + 0x68) & 0xfffffffffffffffc);
      if ((*pbVar5 & 1) == 0) {
        pbVar5[0] = 0;
        pbVar5[1] = 0;
        bVar2 = *(byte *)(param_1 + 8);
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
      else {
        **(undefined1 **)(pbVar5 + 0x10) = 0;
        pbVar5[8] = 0;
        pbVar5[9] = 0;
        pbVar5[10] = 0;
        pbVar5[0xb] = 0;
        pbVar5[0xc] = 0;
        pbVar5[0xd] = 0;
        pbVar5[0xe] = 0;
        pbVar5[0xf] = 0;
        bVar2 = *(byte *)(param_1 + 8);
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
      goto joined_r0x006cf484;
    }
  }
  bVar2 = *(byte *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
joined_r0x006cf484:
  if ((bVar2 & 1) == 0) {
    return;
  }
  FUN_006622b8();
  return;
}


// ===== 006cf4c8  FUN_006cf4c8 =====

void FUN_006cf4c8(long param_1,byte *param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  ulong *puVar11;
  byte *pbVar12;
  uint uVar13;
  int *piVar14;
  undefined1 auVar15 [16];
  byte *local_50;
  long local_48;
  
  puVar5 = PTR_PTR_007a2ea8;
  puVar4 = PTR_FUN_007a2ca8;
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_50 = param_2;
LAB_006cf52c:
  if ((byte *)*param_3 <= local_50) {
    iVar1 = (int)local_50 - *(int *)(param_3 + 1);
    if (*(int *)((long)param_3 + 0x1c) == iVar1) {
      pbVar12 = (byte *)0x0;
      if (param_3[2] != 0 || iVar1 < 1) {
        pbVar12 = local_50;
      }
      goto LAB_006cf7dc;
    }
    auVar15 = FUN_0066f53c(param_3,iVar1,*(undefined4 *)((long)param_3 + 0x5c));
    pbVar12 = auVar15._0_8_;
    local_50 = pbVar12;
    if ((auVar15 & (undefined1  [16])0x1) != (undefined1  [16])0x0) goto LAB_006cf7dc;
  }
  pbVar12 = local_50 + 1;
  uVar13 = (uint)*local_50;
  if ((char)*local_50 < '\0') {
    uVar13 = (uVar13 + (uint)*pbVar12 * 0x80) - 0x80;
    if (-1 < (char)*pbVar12) {
      pbVar12 = local_50 + 2;
      goto LAB_006cf560;
    }
    auVar15 = FUN_0066fe50();
    uVar13 = (uint)(auVar15._8_8_ >> 3) & 0x1fffffff;
    auVar3 = auVar15;
    if (2 < uVar13) goto LAB_006cf570;
LAB_006cf6bc:
    local_50 = auVar15._0_8_;
    if (uVar13 == 1) {
      uVar13 = auVar15._8_4_ & 0xff;
      if (uVar13 == 10) {
        lVar9 = param_1 + 0x18;
LAB_006cf6f0:
        local_50 = (byte *)FUN_006700c8(lVar9,local_50,param_3);
        goto joined_r0x006cf528;
      }
      if (uVar13 == 8) {
        uVar6 = FUN_00658ba4(&local_50);
        FUN_006cf824(param_1,uVar6);
        goto joined_r0x006cf528;
      }
    }
    else if (uVar13 == 2) {
      uVar13 = auVar15._8_4_ & 0xff;
      if (uVar13 == 0x12) {
        lVar9 = param_1 + 0x30;
        goto LAB_006cf6f0;
      }
      if (uVar13 == 0x10) {
        uVar6 = FUN_00658ba4(&local_50);
        FUN_006cf8a4(param_1,uVar6);
        goto joined_r0x006cf528;
      }
    }
  }
  else {
LAB_006cf560:
    auVar3._8_4_ = uVar13;
    auVar3._0_8_ = pbVar12;
    auVar3._12_4_ = 0;
    auVar15._8_4_ = uVar13;
    auVar15._0_8_ = pbVar12;
    auVar15._12_4_ = 0;
    uVar13 = uVar13 >> 3;
    if (uVar13 < 3) goto LAB_006cf6bc;
LAB_006cf570:
    auVar15 = auVar3;
    local_50 = auVar15._0_8_;
    uVar10 = auVar15._8_4_;
    if (uVar13 == 3) {
      if ((uVar10 & 0xff) != 0x1a) goto LAB_006cf774;
      puVar11 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar11 = (ulong *)*puVar11;
      }
      lVar9 = param_1 + 0x60;
LAB_006cf514:
      uVar8 = FUN_0066399c(lVar9,puVar11);
      local_50 = (byte *)FUN_0066ff90(uVar8,local_50,param_3);
joined_r0x006cf528:
      pbVar12 = local_50;
      if (local_50 == (byte *)0x0) {
LAB_006cf7dc:
        if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail(pbVar12);
        }
        return;
      }
      goto LAB_006cf52c;
    }
    if (uVar13 == 4) {
      if ((uVar10 & 0xff) == 0x22) {
        puVar11 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar11 = (ulong *)*puVar11;
        }
        lVar9 = param_1 + 0x68;
        goto LAB_006cf514;
      }
      goto LAB_006cf774;
    }
    if ((uVar13 == 6) && ((uVar10 & 0xff) == 0x32)) {
      local_50 = local_50 + -1;
      do {
        piVar14 = *(int **)(param_1 + 0x58);
        local_50 = local_50 + 1;
        if (piVar14 == (int *)0x0) {
LAB_006cf5dc:
          if (*(long *)(param_1 + 0x48) == 0) {
            puVar7 = (undefined8 *)FUN_00759c3c(0x18);
          }
          else {
            auVar15 = FUN_00663600(*(long *)(param_1 + 0x48),0x18,puVar5);
            puVar7 = auVar15._0_8_;
            *auVar15._8_8_ = puVar7;
            auVar15._8_8_[1] = puVar4;
          }
          *puVar7 = 0;
          puVar7[1] = 0;
          puVar7[2] = 0;
          uVar8 = FUN_00675990(param_1 + 0x48,puVar7);
          local_50 = (byte *)FUN_0066ff90(uVar8,local_50,param_3);
        }
        else {
          iVar1 = *(int *)(param_1 + 0x50);
          if (*piVar14 <= iVar1) goto LAB_006cf5dc;
          *(int *)(param_1 + 0x50) = iVar1 + 1;
          local_50 = (byte *)FUN_0066ff90(*(undefined8 *)(piVar14 + (long)iVar1 * 2 + 2),local_50,
                                          param_3);
        }
        pbVar12 = local_50;
        if (local_50 == (byte *)0x0) goto LAB_006cf7dc;
      } while ((local_50 < (byte *)*param_3) && (*local_50 == 0x32));
      goto LAB_006cf52c;
    }
  }
LAB_006cf774:
  local_50 = auVar15._0_8_;
  uVar13 = auVar15._8_4_;
  if ((uVar13 == 0) || ((uVar13 & 7) == 4)) {
    if (local_50 == (byte *)0x0) {
      pbVar12 = (byte *)0x0;
    }
    else {
      *(uint *)(param_3 + 10) = uVar13 - 1;
      pbVar12 = local_50;
    }
    goto LAB_006cf7dc;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    lVar9 = FUN_00661fa4(param_1 + 8);
  }
  else {
    lVar9 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8;
  }
  local_50 = (byte *)FUN_006fbab8(auVar15._8_8_ & 0xffffffff,lVar9,local_50,param_3);
  goto joined_r0x006cf528;
}


// ===== 006cf824  FUN_006cf824 =====

void FUN_006cf824(long param_1,undefined4 param_2)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)(param_1 + 0x18);
  uVar1 = *puVar2;
  if (uVar1 == *(uint *)(param_1 + 0x1c)) {
    FUN_00673968(puVar2,uVar1 + 1);
    *(undefined4 *)(*(long *)(param_1 + 0x20) + (ulong)uVar1 * 4) = param_2;
    *puVar2 = uVar1 + 1;
    return;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x20) + (ulong)uVar1 * 4) = param_2;
  *puVar2 = uVar1 + 1;
  return;
}


// ===== 006cf8a4  FUN_006cf8a4 =====

void FUN_006cf8a4(long param_1,undefined4 param_2)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)(param_1 + 0x30);
  uVar1 = *puVar2;
  if (uVar1 == *(uint *)(param_1 + 0x34)) {
    FUN_00673968(puVar2,uVar1 + 1);
    *(undefined4 *)(*(long *)(param_1 + 0x38) + (ulong)uVar1 * 4) = param_2;
    *puVar2 = uVar1 + 1;
    return;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x38) + (ulong)uVar1 * 4) = param_2;
  *puVar2 = uVar1 + 1;
  return;
}


// ===== 006cf924  FUN_006cf924 =====

byte * FUN_006cf924(long param_1,byte *param_2,long *param_3)

{
  uint *puVar1;
  void *pvVar2;
  size_t sVar3;
  byte *__src;
  uint uVar4;
  byte bVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  uint *puVar10;
  long lVar11;
  
  uVar9 = *(uint *)(param_1 + 0x28);
  if (0 < (int)uVar9) {
    if (param_2 < (byte *)*param_3) {
      pbVar6 = param_2 + 1;
      *param_2 = 10;
    }
    else {
      param_2 = (byte *)FUN_0066d3f8(param_3,param_2);
      pbVar6 = param_2 + 1;
      *param_2 = 10;
    }
    if (0x7f < uVar9) {
      do {
        param_2 = pbVar6;
        uVar4 = uVar9 >> 0xe;
        bVar5 = (byte)uVar9;
        uVar9 = uVar9 >> 7;
        pbVar6 = param_2 + 1;
        *param_2 = bVar5 | 0x80;
      } while (uVar4 != 0);
    }
    *pbVar6 = (byte)uVar9;
    param_2 = param_2 + 2;
    puVar10 = *(uint **)(param_1 + 0x20);
    puVar1 = puVar10 + *(int *)(param_1 + 0x18);
    do {
      if (param_2 < (byte *)*param_3) {
        uVar9 = *puVar10;
        *param_2 = (byte)uVar9;
        if (uVar9 < 0x80) goto LAB_006cf98c;
LAB_006cf9b4:
        uVar7 = (ulong)(long)(int)uVar9 >> 7;
        *param_2 = (byte)uVar9 | 0x80;
        param_2[1] = (byte)uVar7;
        param_2 = param_2 + 2;
        pbVar6 = param_2;
        if (0x3fff < uVar9) {
          do {
            uVar8 = uVar7 >> 0xe;
            uVar7 = uVar7 >> 7;
            pbVar6[-1] = pbVar6[-1] | 0x80;
            param_2 = pbVar6 + 1;
            *pbVar6 = (byte)uVar7;
            pbVar6 = param_2;
          } while (uVar8 != 0);
        }
      }
      else {
        param_2 = (byte *)FUN_0066d3f8(param_3,param_2);
        uVar9 = *puVar10;
        *param_2 = (byte)uVar9;
        if (0x7f < uVar9) goto LAB_006cf9b4;
LAB_006cf98c:
        param_2 = param_2 + 1;
      }
      puVar10 = puVar10 + 1;
    } while (puVar10 < puVar1);
  }
  uVar9 = *(uint *)(param_1 + 0x40);
  if (0 < (int)uVar9) {
    if (param_2 < (byte *)*param_3) {
      *param_2 = 0x12;
    }
    else {
      param_2 = (byte *)FUN_0066d3f8(param_3,param_2);
      *param_2 = 0x12;
    }
    pbVar6 = param_2 + 1;
    if (0x7f < uVar9) {
      do {
        param_2 = pbVar6;
        uVar4 = uVar9 >> 0xe;
        bVar5 = (byte)uVar9;
        uVar9 = uVar9 >> 7;
        pbVar6 = param_2 + 1;
        *param_2 = bVar5 | 0x80;
      } while (uVar4 != 0);
    }
    *pbVar6 = (byte)uVar9;
    param_2 = param_2 + 2;
    puVar10 = *(uint **)(param_1 + 0x38);
    puVar1 = puVar10 + *(int *)(param_1 + 0x30);
    do {
      if (param_2 < (byte *)*param_3) {
        uVar9 = *puVar10;
        *param_2 = (byte)uVar9;
        if (uVar9 < 0x80) goto LAB_006cfa58;
LAB_006cfa80:
        uVar7 = (ulong)(long)(int)uVar9 >> 7;
        *param_2 = (byte)uVar9 | 0x80;
        param_2[1] = (byte)uVar7;
        param_2 = param_2 + 2;
        pbVar6 = param_2;
        if (0x3fff < uVar9) {
          do {
            uVar8 = uVar7 >> 0xe;
            uVar7 = uVar7 >> 7;
            pbVar6[-1] = pbVar6[-1] | 0x80;
            param_2 = pbVar6 + 1;
            *pbVar6 = (byte)uVar7;
            pbVar6 = param_2;
          } while (uVar8 != 0);
        }
      }
      else {
        param_2 = (byte *)FUN_0066d3f8(param_3,param_2);
        uVar9 = *puVar10;
        *param_2 = (byte)uVar9;
        if (0x7f < uVar9) goto LAB_006cfa80;
LAB_006cfa58:
        param_2 = param_2 + 1;
      }
      puVar10 = puVar10 + 1;
    } while (puVar10 < puVar1);
  }
  uVar9 = *(uint *)(param_1 + 0x10);
  if ((uVar9 & 1) != 0) {
    pbVar6 = (byte *)(*(ulong *)(param_1 + 0x60) & 0xfffffffffffffffc);
    sVar3 = (ulong)(*pbVar6 >> 1);
    if ((*pbVar6 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar6 + 8);
    }
    if (((long)sVar3 < 0x80) && ((long)sVar3 <= (*param_3 - (long)param_2) + 0xe)) {
      param_2[1] = (byte)sVar3;
      *param_2 = 0x1a;
      pvVar2 = (void *)((ulong)pbVar6 | 1);
      if ((*pbVar6 & 1) != 0) {
        pvVar2 = *(void **)(pbVar6 + 0x10);
      }
      memcpy(param_2 + 2,pvVar2,sVar3);
      param_2 = param_2 + 2 + sVar3;
    }
    else {
      param_2 = (byte *)FUN_0066d778(param_3,3);
    }
  }
  if ((uVar9 >> 1 & 1) == 0) {
    uVar9 = *(uint *)(param_1 + 0x50);
  }
  else {
    pbVar6 = (byte *)(*(ulong *)(param_1 + 0x68) & 0xfffffffffffffffc);
    sVar3 = (ulong)(*pbVar6 >> 1);
    if ((*pbVar6 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar6 + 8);
    }
    if (((long)sVar3 < 0x80) && ((long)sVar3 <= (*param_3 - (long)param_2) + 0xe)) {
      param_2[1] = (byte)sVar3;
      *param_2 = 0x22;
      pvVar2 = (void *)((ulong)pbVar6 | 1);
      if ((*pbVar6 & 1) != 0) {
        pvVar2 = *(void **)(pbVar6 + 0x10);
      }
      memcpy(param_2 + 2,pvVar2,sVar3);
      param_2 = param_2 + 2 + sVar3;
      uVar9 = *(uint *)(param_1 + 0x50);
    }
    else {
      param_2 = (byte *)FUN_0066d778(param_3,4);
      uVar9 = *(uint *)(param_1 + 0x50);
    }
  }
  if (0 < (int)uVar9) {
    lVar11 = 0;
    do {
      while( true ) {
        pbVar6 = *(byte **)(*(long *)(param_1 + 0x58) + lVar11 + 8);
        sVar3 = (ulong)(*pbVar6 >> 1);
        if ((*pbVar6 & 1) != 0) {
          sVar3 = *(size_t *)(pbVar6 + 8);
        }
        if ((0x7f < (long)sVar3) || ((*param_3 - (long)param_2) + 0xe < (long)sVar3)) break;
        *param_2 = 0x32;
        param_2[1] = (byte)sVar3;
        __src = pbVar6 + 1;
        if ((*pbVar6 & 1) != 0) {
          __src = *(byte **)(pbVar6 + 0x10);
        }
        memcpy(param_2 + 2,__src,sVar3);
        param_2 = param_2 + 2 + sVar3;
        lVar11 = lVar11 + 8;
        if ((ulong)uVar9 * 8 - lVar11 == 0) goto LAB_006cfcc0;
      }
      param_2 = (byte *)FUN_0066d8d0(param_3,6);
      lVar11 = lVar11 + 8;
    } while ((ulong)uVar9 * 8 - lVar11 != 0);
  }
LAB_006cfcc0:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    pbVar6 = (byte *)FUN_006fc418((*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,param_2,param_3
                                 );
    return pbVar6;
  }
  return param_2;
}


// ===== 006cfd8c  FUN_006cfd8c =====

void FUN_006cfd8c(long param_1)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  
  lVar5 = FUN_006792fc(param_1 + 0x18);
  iVar4 = (int)lVar5;
  if (lVar5 == 0) {
    *(int *)(param_1 + 0x28) = iVar4;
    lVar6 = FUN_006792fc(param_1 + 0x30);
    lVar5 = 0;
    if (lVar6 == 0) {
      lVar5 = 0;
      goto LAB_006cfdfc;
    }
  }
  else {
    *(int *)(param_1 + 0x28) = iVar4;
    lVar5 = ((LZCOUNT((long)iVar4 | 1) ^ 0x3fU) * 9 + 0x49 >> 6) + 1 + lVar5;
    lVar6 = FUN_006792fc(param_1 + 0x30);
    if (lVar6 == 0) goto LAB_006cfdfc;
  }
  lVar5 = lVar5 + ((LZCOUNT((long)(int)lVar6 | 1) ^ 0x3fU) * 9 + 0x49 >> 6) + 1;
LAB_006cfdfc:
  *(int *)(param_1 + 0x40) = (int)lVar6;
  uVar7 = (ulong)*(uint *)(param_1 + 0x50);
  lVar5 = lVar5 + lVar6 + uVar7;
  if (0 < (int)*(uint *)(param_1 + 0x50)) {
    puVar8 = *(undefined8 **)(param_1 + 0x58);
    do {
      puVar8 = puVar8 + 1;
      bVar3 = *(byte *)*puVar8;
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)((byte *)*puVar8 + 8);
      }
      uVar7 = uVar7 - 1;
      lVar5 = uVar1 + lVar5 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    } while (uVar7 != 0);
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 3) != 0) {
    if ((uVar2 & 1) != 0) {
      pbVar9 = (byte *)(*(ulong *)(param_1 + 0x60) & 0xfffffffffffffffc);
      bVar3 = *pbVar9;
      uVar7 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar7 = *(ulong *)(pbVar9 + 8);
      }
      lVar5 = lVar5 + uVar7 + (ulong)(((uint)LZCOUNT((uint)uVar7 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar2 >> 1 & 1) != 0) {
      pbVar9 = (byte *)(*(ulong *)(param_1 + 0x68) & 0xfffffffffffffffc);
      bVar3 = *pbVar9;
      uVar7 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar7 = *(ulong *)(pbVar9 + 8);
      }
      lVar5 = lVar5 + uVar7 + (ulong)(((uint)LZCOUNT((uint)uVar7 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
  }
  FUN_006e5694(param_1,lVar5,param_1 + 0x14);
  return;
}


// ===== 006cff1c  FUN_006cff1c =====

void FUN_006cff1c(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  void *pvVar5;
  ulong *puVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  
  if (*(int *)(param_2 + 0x18) != 0) {
    piVar8 = (int *)(param_1 + 0x18);
    iVar3 = *piVar8;
    FUN_00673968(piVar8,iVar3 + *(int *)(param_2 + 0x18));
    pvVar5 = *(void **)(param_2 + 0x20);
    *piVar8 = *piVar8 + *(int *)(param_2 + 0x18);
    memcpy((void *)(*(long *)(param_1 + 0x20) + (long)iVar3 * 4),pvVar5,
           (long)*(int *)(param_2 + 0x18) << 2);
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    piVar8 = (int *)(param_1 + 0x30);
    iVar3 = *piVar8;
    FUN_00673968(piVar8,iVar3 + *(int *)(param_2 + 0x30));
    pvVar5 = *(void **)(param_2 + 0x38);
    *piVar8 = *piVar8 + *(int *)(param_2 + 0x30);
    memcpy((void *)(*(long *)(param_1 + 0x38) + (long)iVar3 * 4),pvVar5,
           (long)*(int *)(param_2 + 0x30) << 2);
  }
  iVar3 = *(int *)(param_2 + 0x50);
  if (iVar3 != 0) {
    lVar9 = *(long *)(param_2 + 0x58);
    uVar4 = FUN_00675710(param_1 + 0x48,iVar3);
    FUN_005d663c(param_1 + 0x48,uVar4,lVar9 + 8,iVar3,
                 **(int **)(param_1 + 0x58) - *(int *)(param_1 + 0x50));
    iVar1 = **(int **)(param_1 + 0x58);
    iVar3 = *(int *)(param_1 + 0x50) + iVar3;
    *(int *)(param_1 + 0x50) = iVar3;
    if (iVar1 < iVar3) {
      **(int **)(param_1 + 0x58) = iVar3;
    }
  }
  uVar2 = *(uint *)(param_2 + 0x10);
  if ((uVar2 & 3) != 0) {
    if ((uVar2 & 1) != 0) {
      uVar7 = *(ulong *)(param_2 + 0x60);
      puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar6 = (ulong *)*puVar6;
      }
      FUN_006636d4(param_1 + 0x60,uVar7 & 0xfffffffffffffffc,puVar6);
    }
    if ((uVar2 >> 1 & 1) != 0) {
      uVar7 = *(ulong *)(param_2 + 0x68);
      puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar6 = (ulong *)*puVar6;
      }
      FUN_006636d4(param_1 + 0x68,uVar7 & 0xfffffffffffffffc,puVar6);
    }
  }
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  FUN_006621e0(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffc) + 8);
  return;
}


// ===== 006d00c0  FUN_006d00c0 =====

undefined ** FUN_006d00c0(void)

{
  return &PTR_FUN_0079a798;
}


// ===== 006d00cc  FUN_006d00cc =====

void FUN_006d00cc(long param_1,long param_2)

{
  if (param_2 != param_1) {
    FUN_006cf3e8();
    FUN_006cff1c(param_1,param_2);
    return;
  }
  return;
}


// ===== 006d0104  FUN_006d0104 =====

undefined8 FUN_006d0104(void)

{
  return 1;
}


// ===== 006d010c  FUN_006d010c =====

void FUN_006d010c(void)

{
  FUN_00684dd0(PTR_FUN_007a3328,&DAT_007aebb8,&DAT_007aed30);
  return;
}


// ===== 006d0124  FUN_006d0124 =====

void FUN_006d0124(long *param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_007a3550;
  uVar1 = param_2 | 2;
  if ((param_3 & 1) == 0) {
    uVar1 = param_2;
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = param_2;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = uVar1;
  return;
}


// ===== 006d0150  FUN_006d0150 =====

void FUN_006d0150(undefined8 *param_1)

{
  void *__ptr;
  ulong uVar1;
  
  if ((param_1[1] & 1) == 0) {
    uVar1 = param_1[1] & 0xfffffffffffffffc;
  }
  else {
                    /* try { // try from 006d0170 to 006d0173 has its CatchHandler @ 006d01d8 */
    uVar1 = FUN_00662218();
  }
  if (uVar1 == 0) {
    if ((param_1[4] != 0) && (param_1[2] == 0)) {
                    /* try { // try from 006d018c to 006d018f has its CatchHandler @ 006d01d4 */
      FUN_00675910();
    }
  }
  *param_1 = &PTR_FUN_00799110;
  if ((((uint)param_1[1] >> 1 & 1) != 0) &&
     (__ptr = (void *)(param_1[1] + -2), __ptr != (void *)0x0)) {
    FUN_00662da0(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 006d01dc  FUN_006d01dc =====

void FUN_006d01dc(void *param_1)

{
  FUN_006d0150();
  free(param_1);
  return;
}


// ===== 006d0200  FUN_006d0200 =====

void FUN_006d0200(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return;
}


// ===== 006d0208  FUN_006d0208 =====

byte * FUN_006d0208(long param_1,byte *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  byte *pbVar4;
  int *piVar5;
  undefined1 auVar6 [16];
  
  do {
    if ((byte *)*param_3 <= param_2) {
      iVar1 = (int)param_2 - *(int *)(param_3 + 1);
      if (*(int *)((long)param_3 + 0x1c) == iVar1) {
        pbVar4 = (byte *)0x0;
        if (param_3[2] != 0 || iVar1 < 1) {
          pbVar4 = param_2;
        }
        return pbVar4;
      }
      auVar6 = FUN_0066f53c(param_3,iVar1,*(undefined4 *)((long)param_3 + 0x5c));
      param_2 = auVar6._0_8_;
      if ((auVar6 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
        return param_2;
      }
    }
    pbVar4 = param_2 + 1;
    uVar3 = (uint)*param_2;
    if ((char)*param_2 < '\0') {
      uVar3 = (uVar3 + (uint)*pbVar4 * 0x80) - 0x80;
      if (-1 < (char)*pbVar4) {
        pbVar4 = param_2 + 2;
        goto LAB_006d0258;
      }
      auVar6 = FUN_0066fe50(param_2);
      uVar3 = auVar6._8_4_;
    }
    else {
LAB_006d0258:
      auVar6._8_4_ = uVar3;
      auVar6._0_8_ = pbVar4;
      auVar6._12_4_ = 0;
    }
    param_2 = auVar6._0_8_;
    if (uVar3 == 10) {
      param_2 = param_2 + -1;
      do {
        piVar5 = *(int **)(param_1 + 0x20);
        if (piVar5 == (int *)0x0) {
LAB_006d02f4:
          uVar2 = FUN_006d218c(*(undefined8 *)(param_1 + 0x10));
          uVar2 = FUN_00675990(param_1 + 0x10,uVar2);
          param_2 = (byte *)FUN_0066fa8c(param_3,uVar2,param_2 + 1);
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
        }
        else {
          iVar1 = *(int *)(param_1 + 0x18);
          if (*piVar5 <= iVar1) goto LAB_006d02f4;
          *(int *)(param_1 + 0x18) = iVar1 + 1;
          param_2 = (byte *)FUN_0066fa8c(param_3,*(undefined8 *)(piVar5 + (long)iVar1 * 2 + 2),
                                         param_2 + 1);
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
        }
      } while ((param_2 < (byte *)*param_3) && (*param_2 == 10));
    }
    else {
      uVar3 = auVar6._8_4_;
      if ((uVar3 == 0) || ((uVar3 & 7) == 4)) {
        if (param_2 != (byte *)0x0) {
          *(uint *)(param_3 + 10) = uVar3 - 1;
          return param_2;
        }
        return (byte *)0x0;
      }
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        uVar2 = FUN_00661fa4(param_1 + 8);
        param_2 = (byte *)FUN_006fbab8(auVar6._8_8_ & 0xffffffff,uVar2,param_2,param_3);
        if (param_2 == (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        param_2 = (byte *)FUN_006fbab8(auVar6._8_8_ & 0xffffffff,
                                       (*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,param_2,
                                       param_3);
        if (param_2 == (byte *)0x0) {
          return (byte *)0x0;
        }
      }
    }
  } while( true );
}


// ===== 006d0400  FUN_006d0400 =====

undefined8 FUN_006d0400(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != 0) {
    iVar4 = 0;
    do {
      lVar3 = *(long *)(*(long *)(param_1 + 0x20) + (long)iVar4 * 8 + 8);
      param_2 = FUN_00678d18(1,lVar3,*(undefined4 *)(lVar3 + 0x14),param_2,param_3);
      iVar4 = iVar4 + 1;
    } while (iVar1 != iVar4);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar2 = FUN_006fc418((*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,param_2,param_3);
  return uVar2;
}


// ===== 006d0490  FUN_006d0490 =====

undefined4 FUN_006d0490(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}


// ===== 006d0498  FUN_006d0498 =====

void FUN_006d0498(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar2 = (long)*(int *)(param_1 + 0x18);
  puVar3 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x20) != 0) {
    puVar3 = (undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    lVar2 = 0;
  }
  else {
    lVar4 = lVar2 << 3;
    do {
      lVar1 = FUN_006cfd8c(*puVar3);
      lVar4 = lVar4 + -8;
      lVar2 = lVar1 + lVar2 + (ulong)(((uint)LZCOUNT((uint)lVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      puVar3 = puVar3 + 1;
    } while (lVar4 != 0);
  }
  FUN_006e5694(param_1,lVar2,param_1 + 0x28);
  return;
}


// ===== 006d051c  FUN_006d051c =====

void FUN_006d051c(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 != 0) {
    lVar4 = *(long *)(param_2 + 0x20);
    uVar3 = FUN_00675710(param_1 + 0x10,iVar1);
    FUN_006bd904(param_1 + 0x10,uVar3,lVar4 + 8,iVar1,
                 **(int **)(param_1 + 0x20) - *(int *)(param_1 + 0x18));
    iVar2 = **(int **)(param_1 + 0x20);
    iVar1 = *(int *)(param_1 + 0x18) + iVar1;
    *(int *)(param_1 + 0x18) = iVar1;
    if (iVar2 < iVar1) {
      **(int **)(param_1 + 0x20) = iVar1;
    }
  }
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  FUN_006621e0(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffc) + 8);
  return;
}


// ===== 006d05c4  FUN_006d05c4 =====

undefined ** FUN_006d05c4(void)

{
  return &PTR_FUN_0079a7a8;
}


// ===== 006d05d0  FUN_006d05d0 =====

void FUN_006d05d0(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  byte *pbVar6;
  long lVar7;
  
  if (param_2 != param_1) {
    uVar5 = (ulong)*(uint *)(param_1 + 0x18);
    if (0 < (int)*(uint *)(param_1 + 0x18)) {
      puVar4 = *(undefined8 **)(param_1 + 0x20);
      do {
        puVar4 = puVar4 + 1;
        FUN_006cf3e8(*puVar4);
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    pbVar6 = (byte *)(param_1 + 8);
    if ((*pbVar6 & 1) != 0) {
      FUN_006622b8(pbVar6);
    }
    iVar1 = *(int *)(param_2 + 0x18);
    if (iVar1 != 0) {
      lVar7 = *(long *)(param_2 + 0x20);
      uVar3 = FUN_00675710(param_1 + 0x10,iVar1);
      FUN_006bd904(param_1 + 0x10,uVar3,lVar7 + 8,iVar1,
                   **(int **)(param_1 + 0x20) - *(int *)(param_1 + 0x18));
      iVar2 = **(int **)(param_1 + 0x20);
      iVar1 = *(int *)(param_1 + 0x18) + iVar1;
      *(int *)(param_1 + 0x18) = iVar1;
      if (iVar2 < iVar1) {
        **(int **)(param_1 + 0x20) = iVar1;
      }
    }
    if ((*(ulong *)(param_2 + 8) & 1) != 0) {
      FUN_006621e0(pbVar6,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffc) + 8);
      return;
    }
  }
  return;
}


// ===== 006d06c8  FUN_006d06c8 =====

undefined8 FUN_006d06c8(void)

{
  return 1;
}


// ===== 006d06d0  FUN_006d06d0 =====

void FUN_006d06d0(void)

{
  FUN_00684dd0(PTR_FUN_007a3328,&DAT_007aebb8,&DAT_007aed40);
  return;
}


// ===== 006d06e8  FUN_006d06e8 =====

void FUN_006d06e8(long *param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_007a3560;
  uVar1 = param_2 | 2;
  if ((param_3 & 1) == 0) {
    uVar1 = param_2;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_2;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = uVar1;
  param_1[6] = (long)&DAT_007aea80;
  param_1[7] = 0;
  return;
}


// ===== 006d0720  FUN_006d0720 =====

void FUN_006d0720(undefined8 *param_1)

{
  void *__ptr;
  ulong uVar1;
  
  if ((param_1[1] & 1) == 0) {
    uVar1 = param_1[1] & 0xfffffffffffffffc;
  }
  else {
                    /* try { // try from 006d0740 to 006d0757 has its CatchHandler @ 006d079c */
    uVar1 = FUN_00662218();
  }
  if (uVar1 == 0) {
    FUN_00673a60(param_1 + 3);
    FUN_00663a20(param_1 + 6);
  }
  *param_1 = &PTR_FUN_00799110;
  if ((((uint)param_1[1] >> 1 & 1) != 0) &&
     (__ptr = (void *)(param_1[1] + -2), __ptr != (void *)0x0)) {
    FUN_00662da0(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 006d07a0  FUN_006d07a0 =====

void FUN_006d07a0(void *param_1)

{
  FUN_006d0720();
  free(param_1);
  return;
}


// ===== 006d07c4  FUN_006d07c4 =====

void FUN_006d07c4(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}


// ===== 006d07cc  FUN_006d07cc =====

void FUN_006d07cc(long param_1)

{
  uint uVar1;
  byte *pbVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((uVar1 & 1) != 0) {
    pbVar2 = (byte *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
    if ((*pbVar2 & 1) == 0) {
      pbVar2[0] = 0;
      pbVar2[1] = 0;
    }
    else {
      **(undefined1 **)(pbVar2 + 0x10) = 0;
      pbVar2[8] = 0;
      pbVar2[9] = 0;
      pbVar2[10] = 0;
      pbVar2[0xb] = 0;
      pbVar2[0xc] = 0;
      pbVar2[0xd] = 0;
      pbVar2[0xe] = 0;
      pbVar2[0xf] = 0;
    }
  }
  if ((uVar1 & 6) != 0) {
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_006622b8();
    return;
  }
  return;
}


// ===== 006d0824  FUN_006d0824 =====

byte * FUN_006d0824(long param_1,byte *param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong *puVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  byte *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar10 = 0;
  local_50 = param_2;
LAB_006d087c:
  while( true ) {
    if ((byte *)*param_3 <= local_50) {
      iVar1 = (int)local_50 - *(int *)(param_3 + 1);
      if (*(int *)((long)param_3 + 0x1c) == iVar1) {
        pbVar8 = (byte *)0x0;
        if (param_3[2] != 0 || iVar1 < 1) {
          pbVar8 = local_50;
        }
        goto LAB_006d0aac;
      }
      auVar11 = FUN_0066f53c(param_3,iVar1,*(undefined4 *)((long)param_3 + 0x5c));
      pbVar8 = auVar11._0_8_;
      local_50 = pbVar8;
      if ((auVar11 & (undefined1  [16])0x1) != (undefined1  [16])0x0) goto LAB_006d0aac;
    }
    pbVar8 = local_50 + 1;
    uVar9 = (uint)*local_50;
    if ((char)*local_50 < '\0') break;
LAB_006d08b0:
    auVar3._8_4_ = uVar9;
    auVar3._0_8_ = pbVar8;
    auVar3._12_4_ = 0;
    auVar11._8_4_ = uVar9;
    auVar11._0_8_ = pbVar8;
    auVar11._12_4_ = 0;
    uVar9 = uVar9 >> 3;
    if (2 < uVar9) goto LAB_006d0934;
LAB_006d08c0:
    auVar11 = auVar3;
    local_50 = auVar11._0_8_;
    if (uVar9 != 1) {
      if ((uVar9 == 2) && ((auVar11._8_4_ & 0xff) == 0x12)) {
        puVar7 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar7 = (ulong *)*puVar7;
        }
        uVar5 = FUN_0066399c(param_1 + 0x30,puVar7);
        local_50 = (byte *)FUN_0066ff90(uVar5,local_50,param_3);
        goto joined_r0x006d09dc;
      }
      goto LAB_006d0a50;
    }
    uVar9 = auVar11._8_4_ & 0xff;
    if (uVar9 == 10) {
      local_50 = (byte *)FUN_006700c8(param_1 + 0x18,local_50,param_3);
    }
    else {
      if (uVar9 != 8) goto LAB_006d0a50;
      uVar4 = FUN_00658ba4(&local_50);
      FUN_006d0b0c(param_1,uVar4);
    }
joined_r0x006d09dc:
    if (local_50 == (byte *)0x0) {
      pbVar8 = (byte *)0x0;
LAB_006d0aac:
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar10;
      if (*(long *)(lVar2 + 0x28) == local_48) {
        return pbVar8;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  uVar9 = (uVar9 + (uint)*pbVar8 * 0x80) - 0x80;
  if (-1 < (char)*pbVar8) {
    pbVar8 = local_50 + 2;
    goto LAB_006d08b0;
  }
  auVar11 = FUN_0066fe50();
  uVar9 = (uint)(auVar11._8_8_ >> 3) & 0x1fffffff;
  auVar3 = auVar11;
  if (uVar9 < 3) goto LAB_006d08c0;
LAB_006d0934:
  local_50 = auVar11._0_8_;
  if (uVar9 == 3) {
    if ((auVar11._8_4_ & 0xff) == 0x18) {
      uVar10 = uVar10 | 2;
      pbVar8 = local_50 + 1;
      uVar9 = (uint)*local_50;
      if ((char)*local_50 < '\0') {
        uVar9 = (uVar9 + (uint)*pbVar8 * 0x80) - 0x80;
        if ((char)*pbVar8 < '\0') {
          auVar12 = FUN_0066fc04(local_50);
          local_50 = auVar12._0_8_;
          *(int *)(param_1 + 0x38) = auVar12._8_4_;
          goto joined_r0x006d09dc;
        }
        pbVar8 = local_50 + 2;
      }
      *(uint *)(param_1 + 0x38) = uVar9;
      local_50 = pbVar8;
      goto LAB_006d087c;
    }
  }
  else if ((uVar9 == 4) && ((auVar11._8_4_ & 0xff) == 0x20)) {
    uVar10 = uVar10 | 4;
    pbVar8 = local_50 + 1;
    uVar9 = (uint)*local_50;
    if ((char)*local_50 < '\0') {
      uVar9 = (uVar9 + (uint)*pbVar8 * 0x80) - 0x80;
      if ((char)*pbVar8 < '\0') {
        auVar12 = FUN_0066fc04(local_50);
        local_50 = auVar12._0_8_;
        *(int *)(param_1 + 0x3c) = auVar12._8_4_;
        goto joined_r0x006d09dc;
      }
      pbVar8 = local_50 + 2;
    }
    *(uint *)(param_1 + 0x3c) = uVar9;
    local_50 = pbVar8;
    goto LAB_006d087c;
  }
LAB_006d0a50:
  local_50 = auVar11._0_8_;
  uVar9 = auVar11._8_4_;
  if ((uVar9 == 0) || ((uVar9 & 7) == 4)) {
    pbVar8 = local_50;
    if (local_50 != (byte *)0x0) {
      *(uint *)(param_3 + 10) = uVar9 - 1;
    }
    goto LAB_006d0aac;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    lVar6 = FUN_00661fa4(param_1 + 8);
  }
  else {
    lVar6 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8;
  }
  local_50 = (byte *)FUN_006fbab8(auVar11._8_8_ & 0xffffffff,lVar6,local_50,param_3);
  goto joined_r0x006d09dc;
}


// ===== 006d0b0c  FUN_006d0b0c =====

void FUN_006d0b0c(long param_1,undefined4 param_2)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)(param_1 + 0x18);
  uVar1 = *puVar2;
  if (uVar1 == *(uint *)(param_1 + 0x1c)) {
    FUN_00673968(puVar2,uVar1 + 1);
    *(undefined4 *)(*(long *)(param_1 + 0x20) + (ulong)uVar1 * 4) = param_2;
    *puVar2 = uVar1 + 1;
    return;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x20) + (ulong)uVar1 * 4) = param_2;
  *puVar2 = uVar1 + 1;
  return;
}


// ===== 006d0b8c  FUN_006d0b8c =====

byte * FUN_006d0b8c(long param_1,byte *param_2,long *param_3)

{
  uint *puVar1;
  size_t __n;
  void *__src;
  uint uVar2;
  byte bVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  uint *puVar8;
  
  uVar7 = *(uint *)(param_1 + 0x28);
  if (0 < (int)uVar7) {
    if (param_2 < (byte *)*param_3) {
      pbVar4 = param_2 + 1;
      *param_2 = 10;
    }
    else {
      param_2 = (byte *)FUN_0066d3f8(param_3,param_2);
      pbVar4 = param_2 + 1;
      *param_2 = 10;
    }
    if (0x7f < uVar7) {
      do {
        param_2 = pbVar4;
        uVar2 = uVar7 >> 0xe;
        bVar3 = (byte)uVar7;
        uVar7 = uVar7 >> 7;
        pbVar4 = param_2 + 1;
        *param_2 = bVar3 | 0x80;
      } while (uVar2 != 0);
    }
    *pbVar4 = (byte)uVar7;
    param_2 = param_2 + 2;
    puVar8 = *(uint **)(param_1 + 0x20);
    puVar1 = puVar8 + *(int *)(param_1 + 0x18);
    do {
      if (param_2 < (byte *)*param_3) {
        uVar7 = *puVar8;
        *param_2 = (byte)uVar7;
        if (0x7f < uVar7) goto LAB_006d0c18;
LAB_006d0bf0:
        param_2 = param_2 + 1;
      }
      else {
        param_2 = (byte *)FUN_0066d3f8(param_3,param_2);
        uVar7 = *puVar8;
        *param_2 = (byte)uVar7;
        if (uVar7 < 0x80) goto LAB_006d0bf0;
LAB_006d0c18:
        uVar5 = (ulong)(long)(int)uVar7 >> 7;
        *param_2 = (byte)uVar7 | 0x80;
        param_2[1] = (byte)uVar5;
        param_2 = param_2 + 2;
        pbVar4 = param_2;
        if (0x3fff < uVar7) {
          do {
            uVar6 = uVar5 >> 0xe;
            uVar5 = uVar5 >> 7;
            pbVar4[-1] = pbVar4[-1] | 0x80;
            param_2 = pbVar4 + 1;
            *pbVar4 = (byte)uVar5;
            pbVar4 = param_2;
          } while (uVar6 != 0);
        }
      }
      puVar8 = puVar8 + 1;
    } while (puVar8 < puVar1);
  }
  uVar7 = *(uint *)(param_1 + 0x10);
  if ((uVar7 & 1) != 0) {
    pbVar4 = (byte *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
    __n = (ulong)(*pbVar4 >> 1);
    if ((*pbVar4 & 1) != 0) {
      __n = *(size_t *)(pbVar4 + 8);
    }
    if (((long)__n < 0x80) && ((long)__n <= (*param_3 - (long)param_2) + 0xe)) {
      param_2[1] = (byte)__n;
      *param_2 = 0x12;
      __src = (void *)((ulong)pbVar4 | 1);
      if ((*pbVar4 & 1) != 0) {
        __src = *(void **)(pbVar4 + 0x10);
      }
      memcpy(param_2 + 2,__src,__n);
      param_2 = param_2 + 2 + __n;
    }
    else {
      param_2 = (byte *)FUN_0066d778(param_3,2);
    }
  }
  if ((uVar7 >> 1 & 1) != 0) {
    if (param_2 < (byte *)*param_3) {
      uVar2 = *(uint *)(param_1 + 0x38);
      *param_2 = 0x18;
      param_2[1] = (byte)uVar2;
    }
    else {
      param_2 = (byte *)FUN_0066d3f8(param_3,param_2);
      uVar2 = *(uint *)(param_1 + 0x38);
      *param_2 = 0x18;
      param_2[1] = (byte)uVar2;
    }
    if (uVar2 < 0x80) {
      param_2 = param_2 + 2;
    }
    else {
      uVar5 = (ulong)(long)(int)uVar2 >> 7;
      param_2[1] = (byte)uVar2 | 0x80;
      param_2[2] = (byte)uVar5;
      param_2 = param_2 + 3;
      pbVar4 = param_2;
      if (0x3fff < uVar2) {
        do {
          uVar6 = uVar5 >> 0xe;
          uVar5 = uVar5 >> 7;
          pbVar4[-1] = pbVar4[-1] | 0x80;
          param_2 = pbVar4 + 1;
          *pbVar4 = (byte)uVar5;
          pbVar4 = param_2;
        } while (uVar6 != 0);
      }
    }
  }
  if ((uVar7 >> 2 & 1) != 0) {
    if (param_2 < (byte *)*param_3) {
      uVar7 = *(uint *)(param_1 + 0x3c);
      *param_2 = 0x20;
      param_2[1] = (byte)uVar7;
    }
    else {
      param_2 = (byte *)FUN_0066d3f8(param_3,param_2);
      uVar7 = *(uint *)(param_1 + 0x3c);
      *param_2 = 0x20;
      param_2[1] = (byte)uVar7;
    }
    if (uVar7 < 0x80) {
      param_2 = param_2 + 2;
    }
    else {
      uVar5 = (ulong)(long)(int)uVar7 >> 7;
      param_2[1] = (byte)uVar7 | 0x80;
      param_2[2] = (byte)uVar5;
      param_2 = param_2 + 3;
      pbVar4 = param_2;
      if (0x3fff < uVar7) {
        do {
          uVar6 = uVar5 >> 0xe;
          uVar5 = uVar5 >> 7;
          pbVar4[-1] = pbVar4[-1] | 0x80;
          param_2 = pbVar4 + 1;
          *pbVar4 = (byte)uVar5;
          pbVar4 = param_2;
        } while (uVar6 != 0);
      }
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  pbVar4 = (byte *)FUN_006fc418((*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,param_2,param_3);
  return pbVar4;
}


// ===== 006d0ea8  FUN_006d0ea8 =====

void FUN_006d0ea8(long param_1)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  byte *pbVar6;
  
  lVar5 = FUN_006792fc(param_1 + 0x18);
  iVar4 = (int)lVar5;
  if (lVar5 == 0) {
    *(int *)(param_1 + 0x28) = iVar4;
    uVar2 = *(uint *)(param_1 + 0x10);
    lVar5 = 0;
  }
  else {
    *(int *)(param_1 + 0x28) = iVar4;
    lVar5 = ((LZCOUNT((long)iVar4 | 1) ^ 0x3fU) * 9 + 0x49 >> 6) + 1 + lVar5;
    uVar2 = *(uint *)(param_1 + 0x10);
  }
  if ((uVar2 & 7) != 0) {
    if ((uVar2 & 1) != 0) {
      pbVar6 = (byte *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
      bVar3 = *pbVar6;
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(pbVar6 + 8);
      }
      lVar5 = lVar5 + uVar1 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar2 >> 1 & 1) != 0) {
      lVar5 = lVar5 + ((LZCOUNT((long)*(int *)(param_1 + 0x38) | 1) ^ 0x3fU) * 9 + 0x89 >> 6);
    }
    if ((uVar2 >> 2 & 1) != 0) {
      FUN_006e5694(param_1,lVar5 + ((LZCOUNT((long)*(int *)(param_1 + 0x3c) | 1) ^ 0x3fU) * 9 + 0x89
                                   >> 6),param_1 + 0x14);
      return;
    }
  }
  FUN_006e5694(param_1,lVar5,param_1 + 0x14);
  return;
}


// ===== 006d0fc8  FUN_006d0fc8 =====

void FUN_006d0fc8(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  void *__src;
  ulong uVar3;
  int *piVar4;
  
  if (*(int *)(param_2 + 0x18) != 0) {
    piVar4 = (int *)(param_1 + 0x18);
    iVar2 = *piVar4;
    FUN_00673968(piVar4,iVar2 + *(int *)(param_2 + 0x18));
    __src = *(void **)(param_2 + 0x20);
    *piVar4 = *piVar4 + *(int *)(param_2 + 0x18);
    memcpy((void *)(*(long *)(param_1 + 0x20) + (long)iVar2 * 4),__src,
           (long)*(int *)(param_2 + 0x18) << 2);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar3 = *(ulong *)(param_2 + 0x30);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        FUN_006636d4(param_1 + 0x30,uVar3 & 0xfffffffffffffffc);
      }
      else {
        FUN_006636d4(param_1 + 0x30,uVar3 & 0xfffffffffffffffc,
                     *(undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc));
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
    }
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_006621e0(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffc) + 8);
    return;
  }
  return;
}


// ===== 006d10d8  FUN_006d10d8 =====

undefined ** FUN_006d10d8(void)

{
  return &PTR_FUN_0079a7b8;
}


// ===== 006d10e4  FUN_006d10e4 =====

undefined8 FUN_006d10e4(void)

{
  return 1;
}


// ===== 006d10ec  FUN_006d10ec =====

void FUN_006d10ec(void)

{
  FUN_00684dd0(PTR_FUN_007a3328,&DAT_007aebb8,&DAT_007aed50);
  return;
}


// ===== 006d1104  FUN_006d1104 =====

void FUN_006d1104(long *param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_007a3570;
  uVar1 = param_2 | 2;
  if ((param_3 & 1) == 0) {
    uVar1 = param_2;
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = param_2;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = uVar1;
  return;
}


// ===== 006d1130  FUN_006d1130 =====

void FUN_006d1130(undefined8 *param_1)

{
  void *__ptr;
  ulong uVar1;
  
  if ((param_1[1] & 1) == 0) {
    uVar1 = param_1[1] & 0xfffffffffffffffc;
  }
  else {
                    /* try { // try from 006d1150 to 006d1153 has its CatchHandler @ 006d11b8 */
    uVar1 = FUN_00662218();
  }
  if (uVar1 == 0) {
    if ((param_1[4] != 0) && (param_1[2] == 0)) {
                    /* try { // try from 006d116c to 006d116f has its CatchHandler @ 006d11b4 */
      FUN_00675910();
    }
  }
  *param_1 = &PTR_FUN_00799110;
  if ((((uint)param_1[1] >> 1 & 1) != 0) &&
     (__ptr = (void *)(param_1[1] + -2), __ptr != (void *)0x0)) {
    FUN_00662da0(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 006d11bc  FUN_006d11bc =====

void FUN_006d11bc(void *param_1)

{
  FUN_006d1130();
  free(param_1);
  return;
}


// ===== 006d11e0  FUN_006d11e0 =====

void FUN_006d11e0(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return;
}


// ===== 006d11e8  FUN_006d11e8 =====

void FUN_006d11e8(long param_1)

{
  FUN_006d2474(param_1 + 0x10);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006622b8((byte *)(param_1 + 8));
  return;
}


// ===== 006d1224  FUN_006d1224 =====

byte * FUN_006d1224(long param_1,byte *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  byte *pbVar4;
  int *piVar5;
  undefined1 auVar6 [16];
  
  do {
    if ((byte *)*param_3 <= param_2) {
      iVar1 = (int)param_2 - *(int *)(param_3 + 1);
      if (*(int *)((long)param_3 + 0x1c) == iVar1) {
        pbVar4 = (byte *)0x0;
        if (param_3[2] != 0 || iVar1 < 1) {
          pbVar4 = param_2;
        }
        return pbVar4;
      }
      auVar6 = FUN_0066f53c(param_3,iVar1,*(undefined4 *)((long)param_3 + 0x5c));
      param_2 = auVar6._0_8_;
      if ((auVar6 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
        return param_2;
      }
    }
    pbVar4 = param_2 + 1;
    uVar3 = (uint)*param_2;
    if ((char)*param_2 < '\0') {
      uVar3 = (uVar3 + (uint)*pbVar4 * 0x80) - 0x80;
      if (-1 < (char)*pbVar4) {
        pbVar4 = param_2 + 2;
        goto LAB_006d1274;
      }
      auVar6 = FUN_0066fe50(param_2);
      uVar3 = auVar6._8_4_;
    }
    else {
LAB_006d1274:
      auVar6._8_4_ = uVar3;
      auVar6._0_8_ = pbVar4;
      auVar6._12_4_ = 0;
    }
    param_2 = auVar6._0_8_;
    if (uVar3 == 10) {
      param_2 = param_2 + -1;
      do {
        piVar5 = *(int **)(param_1 + 0x20);
        if (piVar5 == (int *)0x0) {
LAB_006d1310:
          uVar2 = FUN_006d228c(*(undefined8 *)(param_1 + 0x10));
          uVar2 = FUN_00675990(param_1 + 0x10,uVar2);
          param_2 = (byte *)FUN_0066fa8c(param_3,uVar2,param_2 + 1);
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
        }
        else {
          iVar1 = *(int *)(param_1 + 0x18);
          if (*piVar5 <= iVar1) goto LAB_006d1310;
          *(int *)(param_1 + 0x18) = iVar1 + 1;
          param_2 = (byte *)FUN_0066fa8c(param_3,*(undefined8 *)(piVar5 + (long)iVar1 * 2 + 2),
                                         param_2 + 1);
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
        }
      } while ((param_2 < (byte *)*param_3) && (*param_2 == 10));
    }
    else {
      uVar3 = auVar6._8_4_;
      if ((uVar3 == 0) || ((uVar3 & 7) == 4)) {
        if (param_2 != (byte *)0x0) {
          *(uint *)(param_3 + 10) = uVar3 - 1;
          return param_2;
        }
        return (byte *)0x0;
      }
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        uVar2 = FUN_00661fa4(param_1 + 8);
        param_2 = (byte *)FUN_006fbab8(auVar6._8_8_ & 0xffffffff,uVar2,param_2,param_3);
        if (param_2 == (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        param_2 = (byte *)FUN_006fbab8(auVar6._8_8_ & 0xffffffff,
                                       (*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,param_2,
                                       param_3);
        if (param_2 == (byte *)0x0) {
          return (byte *)0x0;
        }
      }
    }
  } while( true );
}


// ===== 006d141c  FUN_006d141c =====

undefined8 FUN_006d141c(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != 0) {
    iVar4 = 0;
    do {
      lVar3 = *(long *)(*(long *)(param_1 + 0x20) + (long)iVar4 * 8 + 8);
      param_2 = FUN_00678d18(1,lVar3,*(undefined4 *)(lVar3 + 0x14),param_2,param_3);
      iVar4 = iVar4 + 1;
    } while (iVar1 != iVar4);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar2 = FUN_006fc418((*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,param_2,param_3);
  return uVar2;
}


// ===== 006d14ac  FUN_006d14ac =====

undefined4 FUN_006d14ac(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}


// ===== 006d14b4  FUN_006d14b4 =====

void FUN_006d14b4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar2 = (long)*(int *)(param_1 + 0x18);
  puVar3 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x20) != 0) {
    puVar3 = (undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    lVar2 = 0;
  }
  else {
    lVar4 = lVar2 << 3;
    do {
      lVar1 = FUN_006d0ea8(*puVar3);
      lVar4 = lVar4 + -8;
      lVar2 = lVar1 + lVar2 + (ulong)(((uint)LZCOUNT((uint)lVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      puVar3 = puVar3 + 1;
    } while (lVar4 != 0);
  }
  FUN_006e5694(param_1,lVar2,param_1 + 0x28);
  return;
}


// ===== 006d1538  FUN_006d1538 =====

void FUN_006d1538(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 != 0) {
    lVar4 = *(long *)(param_2 + 0x20);
    uVar3 = FUN_00675710(param_1 + 0x10,iVar1);
    FUN_006d2d18(param_1 + 0x10,uVar3,lVar4 + 8,iVar1,
                 **(int **)(param_1 + 0x20) - *(int *)(param_1 + 0x18));
    iVar2 = **(int **)(param_1 + 0x20);
    iVar1 = *(int *)(param_1 + 0x18) + iVar1;
    *(int *)(param_1 + 0x18) = iVar1;
    if (iVar2 < iVar1) {
      **(int **)(param_1 + 0x20) = iVar1;
    }
  }
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  FUN_006621e0(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffc) + 8);
  return;
}


// ===== 006d15e0  FUN_006d15e0 =====

undefined ** FUN_006d15e0(void)

{
  return &PTR_FUN_0079a7c8;
}


// ===== 006d15ec  FUN_006d15ec =====

undefined8 FUN_006d15ec(void)

{
  return 1;
}


// ===== 006d15f4  FUN_006d15f4 =====

void FUN_006d15f4(void)

{
  FUN_00684dd0(PTR_FUN_007a3328,&DAT_007aebb8,&DAT_007aed60);
  return;
}


// ===== 006d160c  FUN_006d160c =====

undefined8 FUN_006d160c(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00663420(param_1,0x30,PTR_PTR_007a3580);
    FUN_006bdb00(uVar1,param_1,0);
    return uVar1;
  }
  uVar1 = FUN_00759c3c(0x30);
                    /* try { // try from 006d165c to 006d1667 has its CatchHandler @ 006d1678 */
  FUN_006bdb00(uVar1,0,0);
  return uVar1;
}


// ===== 006d168c  FUN_006d168c =====

undefined8 FUN_006d168c(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00663420(param_1,0xd8,PTR_PTR_007a3588);
    FUN_006be080(uVar1,param_1,0);
    return uVar1;
  }
  uVar1 = FUN_00759c3c(0xd8);
                    /* try { // try from 006d16dc to 006d16e7 has its CatchHandler @ 006d16f8 */
  FUN_006be080(uVar1,0,0);
  return uVar1;
}


// ===== 006d170c  FUN_006d170c =====

undefined8 FUN_006d170c(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00663420(param_1,0x28,PTR_PTR_007a3590);
    FUN_006c001c(uVar1,param_1,0);
    return uVar1;
  }
  uVar1 = FUN_00759c3c(0x28);
                    /* try { // try from 006d175c to 006d1767 has its CatchHandler @ 006d1778 */
  FUN_006c001c(uVar1,0,0);
  return uVar1;
}


// ===== 006d178c  FUN_006d178c =====

undefined8 FUN_006d178c(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00663420(param_1,0x20,PTR_PTR_007a3598);
    FUN_006c0a30(uVar1,param_1,0);
    return uVar1;
  }
  uVar1 = FUN_00759c3c(0x20);
                    /* try { // try from 006d17dc to 006d17e7 has its CatchHandler @ 006d17f8 */
  FUN_006c0a30(uVar1,0,0);
  return uVar1;
}


// ===== 006d180c  FUN_006d180c =====

undefined8 FUN_006d180c(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00663420(param_1,0xe8,PTR_PTR_007a35a0);
    FUN_006c0f80(uVar1,param_1,0);
    return uVar1;
  }
  uVar1 = FUN_00759c3c(0xe8);
                    /* try { // try from 006d185c to 006d1867 has its CatchHandler @ 006d1878 */
  FUN_006c0f80(uVar1,0,0);
  return uVar1;
}


// ===== 006d188c  FUN_006d188c =====

undefined8 FUN_006d188c(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00663420(param_1,0x48,PTR_PTR_007a35a8);
    FUN_006c2a98(uVar1,param_1,0);
    return uVar1;
  }
  uVar1 = FUN_00759c3c(0x48);
                    /* try { // try from 006d18dc to 006d18e7 has its CatchHandler @ 006d18f8 */
  FUN_006c2a98(uVar1,0,0);
  return uVar1;
}


// ===== 006d190c  FUN_006d190c =====

undefined8 FUN_006d190c(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00663420(param_1,0x60,PTR_PTR_007a35b0);
    FUN_006c3118(uVar1,param_1,0);
    return uVar1;
  }
  uVar1 = FUN_00759c3c(0x60);
                    /* try { // try from 006d195c to 006d1967 has its CatchHandler @ 006d1978 */
  FUN_006c3118(uVar1,0,0);
  return uVar1;
}


// ===== 006d198c  FUN_006d198c =====

undefined8 FUN_006d198c(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00663420(param_1,0x28,PTR_PTR_007a35b8);
    FUN_006c462c(uVar1,param_1,0);
    return uVar1;
  }
  uVar1 = FUN_00759c3c(0x28);
                    /* try { // try from 006d19dc to 006d19e7 has its CatchHandler @ 006d19f8 */
  FUN_006c462c(uVar1,0,0);
  return uVar1;
}


// ===== 006d1a0c  FUN_006d1a0c =====

undefined8 FUN_006d1a0c(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00663420(param_1,0x20,PTR_PTR_007a35c0);
    FUN_006c4f84(uVar1,param_1,0);
    return uVar1;
  }
  uVar1 = FUN_00759c3c(0x20);
                    /* try { // try from 006d1a5c to 006d1a67 has its CatchHandler @ 006d1a78 */
  FUN_006c4f84(uVar1,0,0);
  return uVar1;
}


// ===== 006d1a8c  FUN_006d1a8c =====

undefined8 FUN_006d1a8c(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00663420(param_1,0x70,PTR_PTR_007a35c8);
    FUN_006c54d4(uVar1,param_1,0);
    return uVar1;
  }
  uVar1 = FUN_00759c3c(0x70);
                    /* try { // try from 006d1adc to 006d1ae7 has its CatchHandler @ 006d1af8 */
  FUN_006c54d4(uVar1,0,0);
  return uVar1;
}


// ===== 006d1b0c  FUN_006d1b0c =====

undefined8 FUN_006d1b0c(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00663420(param_1,0x30,PTR_PTR_007a35d0);
    FUN_006c6564(uVar1,param_1,0);
    return uVar1;
  }
  uVar1 = FUN_00759c3c(0x30);
                    /* try { // try from 006d1b5c to 006d1b67 has its CatchHandler @ 006d1b78 */
  FUN_006c6564(uVar1,0,0);
  return uVar1;
}


// ===== 006d1b8c  FUN_006d1b8c =====

undefined8 FUN_006d1b8c(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00663420(param_1,0x40,PTR_PTR_007a35d8);
    FUN_006c6fb0(uVar1,param_1,0);
    return uVar1;
  }
  uVar1 = FUN_00759c3c(0x40);
                    /* try { // try from 006d1bdc to 006d1be7 has its CatchHandler @ 006d1bf8 */
  FUN_006c6fb0(uVar1,0,0);
  return uVar1;
}


// ===== 006d1c0c  FUN_006d1c0c =====

undefined8 FUN_006d1c0c(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00663420(param_1,0x40,PTR_PTR_007a35e0);
    FUN_006c7b14(uVar1,param_1,0);
    return uVar1;
  }
  uVar1 = FUN_00759c3c(0x40);
                    /* try { // try from 006d1c5c to 006d1c67 has its CatchHandler @ 006d1c78 */
  FUN_006c7b14(uVar1,0,0);
  return uVar1;
}


// ===== 006d1c8c  FUN_006d1c8c =====

undefined8 FUN_006d1c8c(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00663420(param_1,0xa8,PTR_PTR_007a35e8);
    FUN_006c8844(uVar1,param_1,0);
    return uVar1;
  }
  uVar1 = FUN_00759c3c(0xa8);
                    /* try { // try from 006d1cdc to 006d1ce7 has its CatchHandler @ 006d1cf8 */
  FUN_006c8844(uVar1,0,0);
  return uVar1;
}


// ===== 006d1d0c  FUN_006d1d0c =====

undefined8 FUN_006d1d0c(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00663420(param_1,0x50,PTR_PTR_007a35f0);
    FUN_006ca4a4(uVar1,param_1,0);
    return uVar1;
  }
  uVar1 = FUN_00759c3c(0x50);
                    /* try { // try from 006d1d5c to 006d1d67 has its CatchHandler @ 006d1d78 */
  FUN_006ca4a4(uVar1,0,0);
  return uVar1;
}


// ===== 006d1d8c  FUN_006d1d8c =====

undefined8 FUN_006d1d8c(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00663420(param_1,0x58,PTR_PTR_007a35f8);
    FUN_006cade8(uVar1,param_1,0);
    return uVar1;
  }
  uVar1 = FUN_00759c3c(0x58);
                    /* try { // try from 006d1ddc to 006d1de7 has its CatchHandler @ 006d1df8 */
  FUN_006cade8(uVar1,0,0);
  return uVar1;
}


// ===== 006d1e0c  FUN_006d1e0c =====

undefined8 FUN_006d1e0c(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00663420(param_1,0x48,PTR_PTR_007a3600);
    FUN_006cba84(uVar1,param_1,0);
    return uVar1;
  }
  uVar1 = FUN_00759c3c(0x48);
                    /* try { // try from 006d1e5c to 006d1e67 has its CatchHandler @ 006d1e78 */
  FUN_006cba84(uVar1,0,0);
  return uVar1;
}


// ===== 006d1e8c  FUN_006d1e8c =====

undefined8 FUN_006d1e8c(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00663420(param_1,0x50,PTR_PTR_007a3608);
    FUN_006cc0fc(uVar1,param_1,0);
    return uVar1;
  }
  uVar1 = FUN_00759c3c(0x50);
                    /* try { // try from 006d1edc to 006d1ee7 has its CatchHandler @ 006d1ef8 */
  FUN_006cc0fc(uVar1,0,0);
  return uVar1;
}


// ===== 006d1f0c  FUN_006d1f0c =====

undefined8 FUN_006d1f0c(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00663420(param_1,0x50,PTR_PTR_007a3610);
    FUN_006cc8ac(uVar1,param_1,0);
    return uVar1;
  }
  uVar1 = FUN_00759c3c(0x50);
                    /* try { // try from 006d1f5c to 006d1f67 has its CatchHandler @ 006d1f78 */
  FUN_006cc8ac(uVar1,0,0);
  return uVar1;
}


// ===== 006d1f8c  FUN_006d1f8c =====

undefined8 FUN_006d1f8c(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00663420(param_1,0x50,PTR_PTR_007a3618);
    FUN_006ccf80(uVar1,param_1,0);
    return uVar1;
  }
  uVar1 = FUN_00759c3c(0x50);
                    /* try { // try from 006d1fdc to 006d1fe7 has its CatchHandler @ 006d1ff8 */
  FUN_006ccf80(uVar1,0,0);
  return uVar1;
}


// ===== 006d200c  FUN_006d200c =====

undefined8 FUN_006d200c(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00663420(param_1,0x50,PTR_PTR_007a3620);
    FUN_006cd658(uVar1,param_1,0);
    return uVar1;
  }
  uVar1 = FUN_00759c3c(0x50);
                    /* try { // try from 006d205c to 006d2067 has its CatchHandler @ 006d2078 */
  FUN_006cd658(uVar1,0,0);
  return uVar1;
}


// ===== 006d208c  FUN_006d208c =====

undefined8 FUN_006d208c(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00663420(param_1,0x28,PTR_PTR_007a3628);
    FUN_006cde64(uVar1,param_1,0);
    return uVar1;
  }
  uVar1 = FUN_00759c3c(0x28);
                    /* try { // try from 006d20dc to 006d20e7 has its CatchHandler @ 006d20f8 */
  FUN_006cde64(uVar1,0,0);
  return uVar1;
}


// ===== 006d210c  FUN_006d210c =====

undefined8 FUN_006d210c(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00663420(param_1,0x60,PTR_PTR_007a3630);
    FUN_006ce468(uVar1,param_1,0);
    return uVar1;
  }
  uVar1 = FUN_00759c3c(0x60);
                    /* try { // try from 006d215c to 006d2167 has its CatchHandler @ 006d2178 */
  FUN_006ce468(uVar1,0,0);
  return uVar1;
}


// ===== 006d218c  FUN_006d218c =====

undefined8 FUN_006d218c(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00663420(param_1,0x70,PTR_PTR_007a3638);
    FUN_006cf2dc(uVar1,param_1,0);
    return uVar1;
  }
  uVar1 = FUN_00759c3c(0x70);
                    /* try { // try from 006d21dc to 006d21e7 has its CatchHandler @ 006d21f8 */
  FUN_006cf2dc(uVar1,0,0);
  return uVar1;
}


// ===== 006d220c  FUN_006d220c =====

undefined8 FUN_006d220c(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00663420(param_1,0x30,PTR_PTR_007a3640);
    FUN_006d0124(uVar1,param_1,0);
    return uVar1;
  }
  uVar1 = FUN_00759c3c(0x30);
                    /* try { // try from 006d225c to 006d2267 has its CatchHandler @ 006d2278 */
  FUN_006d0124(uVar1,0,0);
  return uVar1;
}


// ===== 006d228c  FUN_006d228c =====

undefined8 FUN_006d228c(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00663420(param_1,0x40,PTR_PTR_007a3648);
    FUN_006d06e8(uVar1,param_1,0);
    return uVar1;
  }
  uVar1 = FUN_00759c3c(0x40);
                    /* try { // try from 006d22dc to 006d22e7 has its CatchHandler @ 006d22f8 */
  FUN_006d06e8(uVar1,0,0);
  return uVar1;
}


// ===== 006d230c  FUN_006d230c =====

undefined8 FUN_006d230c(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00663420(param_1,0x30,PTR_PTR_007a3650);
    FUN_006d1104(uVar1,param_1,0);
    return uVar1;
  }
  uVar1 = FUN_00759c3c(0x30);
                    /* try { // try from 006d235c to 006d2367 has its CatchHandler @ 006d2378 */
  FUN_006d1104(uVar1,0,0);
  return uVar1;
}


// ===== 006d238c  FUN_006d238c =====

void FUN_006d238c(undefined8 param_1,undefined8 param_2)

{
  FUN_006d160c(param_2);
  return;
}


// ===== 006d2394  FUN_006d2394 =====

undefined4 FUN_006d2394(long param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}


// ===== 006d239c  FUN_006d239c =====

void FUN_006d239c(undefined8 param_1,undefined8 param_2)

{
  FUN_006d168c(param_2);
  return;
}


// ===== 006d23a4  FUN_006d23a4 =====

void FUN_006d23a4(undefined8 param_1,undefined8 param_2)

{
  FUN_006d170c(param_2);
  return;
}


// ===== 006d23ac  FUN_006d23ac =====

void FUN_006d23ac(undefined8 param_1,undefined8 param_2)

{
  FUN_006d178c(param_2);
  return;
}


// ===== 006d23b4  FUN_006d23b4 =====

void FUN_006d23b4(undefined8 param_1,undefined8 param_2)

{
  FUN_006d180c(param_2);
  return;
}


// ===== 006d23bc  FUN_006d23bc =====

void FUN_006d23bc(undefined8 param_1,undefined8 param_2)

{
  FUN_006d188c(param_2);
  return;
}


// ===== 006d23c4  FUN_006d23c4 =====

void FUN_006d23c4(undefined8 param_1,undefined8 param_2)

{
  FUN_006d190c(param_2);
  return;
}


// ===== 006d23cc  FUN_006d23cc =====

void FUN_006d23cc(undefined8 param_1,undefined8 param_2)

{
  FUN_006d198c(param_2);
  return;
}


// ===== 006d23d4  FUN_006d23d4 =====

void FUN_006d23d4(undefined8 param_1,undefined8 param_2)

{
  FUN_006d1a0c(param_2);
  return;
}


// ===== 006d23dc  FUN_006d23dc =====

void FUN_006d23dc(undefined8 param_1,undefined8 param_2)

{
  FUN_006d1a8c(param_2);
  return;
}


// ===== 006d23e4  FUN_006d23e4 =====

void FUN_006d23e4(undefined8 param_1,undefined8 param_2)

{
  FUN_006d1b0c(param_2);
  return;
}


// ===== 006d23ec  FUN_006d23ec =====

void FUN_006d23ec(undefined8 param_1,undefined8 param_2)

{
  FUN_006d1b8c(param_2);
  return;
}


// ===== 006d23f4  FUN_006d23f4 =====

void FUN_006d23f4(undefined8 param_1,undefined8 param_2)

{
  FUN_006d1c0c(param_2);
  return;
}


// ===== 006d23fc  FUN_006d23fc =====

void FUN_006d23fc(undefined8 param_1,undefined8 param_2)

{
  FUN_006d1c8c(param_2);
  return;
}


// ===== 006d2404  FUN_006d2404 =====

void FUN_006d2404(undefined8 param_1,undefined8 param_2)

{
  FUN_006d1d0c(param_2);
  return;
}


// ===== 006d240c  FUN_006d240c =====

void FUN_006d240c(undefined8 param_1,undefined8 param_2)

{
  FUN_006d1d8c(param_2);
  return;
}


// ===== 006d2414  FUN_006d2414 =====

void FUN_006d2414(undefined8 param_1,undefined8 param_2)

{
  FUN_006d1e0c(param_2);
  return;
}


// ===== 006d241c  FUN_006d241c =====

void FUN_006d241c(undefined8 param_1,undefined8 param_2)

{
  FUN_006d1e8c(param_2);
  return;
}


// ===== 006d2424  FUN_006d2424 =====

void FUN_006d2424(undefined8 param_1,undefined8 param_2)

{
  FUN_006d1f0c(param_2);
  return;
}


// ===== 006d242c  FUN_006d242c =====

void FUN_006d242c(undefined8 param_1,undefined8 param_2)

{
  FUN_006d1f8c(param_2);
  return;
}


// ===== 006d2434  FUN_006d2434 =====

void FUN_006d2434(undefined8 param_1,undefined8 param_2)

{
  FUN_006d200c(param_2);
  return;
}


// ===== 006d243c  FUN_006d243c =====

void FUN_006d243c(undefined8 param_1,undefined8 param_2)

{
  FUN_006d208c(param_2);
  return;
}


// ===== 006d2444  FUN_006d2444 =====

void FUN_006d2444(undefined8 param_1,undefined8 param_2)

{
  FUN_006d210c(param_2);
  return;
}


// ===== 006d244c  FUN_006d244c =====

void FUN_006d244c(undefined8 param_1,undefined8 param_2)

{
  FUN_006d218c(param_2);
  return;
}


// ===== 006d2454  FUN_006d2454 =====

void FUN_006d2454(undefined8 param_1,undefined8 param_2)

{
  FUN_006d220c(param_2);
  return;
}


// ===== 006d245c  FUN_006d245c =====

void FUN_006d245c(undefined8 param_1,undefined8 param_2)

{
  FUN_006d228c(param_2);
  return;
}


// ===== 006d2464  FUN_006d2464 =====

void FUN_006d2464(undefined8 param_1,undefined8 param_2)

{
  FUN_006d230c(param_2);
  return;
}


// ===== 006d246c  FUN_006d246c =====

undefined4 FUN_006d246c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}


// ===== 006d2474  FUN_006d2474 =====

void FUN_006d2474(long param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  byte *pbVar4;
  ulong uVar5;
  
  uVar5 = (ulong)*(uint *)(param_1 + 8);
  if (0 < (int)*(uint *)(param_1 + 8)) {
    plVar3 = *(long **)(param_1 + 0x10);
    do {
      plVar3 = plVar3 + 1;
      lVar2 = *plVar3;
      uVar1 = *(uint *)(lVar2 + 0x10);
      *(undefined4 *)(lVar2 + 0x18) = 0;
      if ((uVar1 & 1) != 0) {
        pbVar4 = (byte *)(*(ulong *)(lVar2 + 0x30) & 0xfffffffffffffffc);
        if ((*pbVar4 & 1) == 0) {
          pbVar4[0] = 0;
          pbVar4[1] = 0;
        }
        else {
          **(undefined1 **)(pbVar4 + 0x10) = 0;
          pbVar4[8] = 0;
          pbVar4[9] = 0;
          pbVar4[10] = 0;
          pbVar4[0xb] = 0;
          pbVar4[0xc] = 0;
          pbVar4[0xd] = 0;
          pbVar4[0xe] = 0;
          pbVar4[0xf] = 0;
        }
      }
      if ((uVar1 & 6) != 0) {
        *(undefined8 *)(lVar2 + 0x38) = 0;
      }
      *(undefined4 *)(lVar2 + 0x10) = 0;
      if ((*(byte *)(lVar2 + 8) & 1) != 0) {
        FUN_006622b8();
      }
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


// ===== 006d251c  FUN_006d251c =====

void FUN_006d251c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,
                 int param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  
  iVar4 = param_4 - param_5;
  if (iVar4 != 0 && param_5 <= (int)param_4) {
    uVar3 = *param_1;
    puVar5 = param_2 + param_5;
    do {
      uVar1 = FUN_006d168c(uVar3);
      iVar4 = iVar4 + -1;
      *puVar5 = uVar1;
      puVar5 = puVar5 + 1;
    } while (iVar4 != 0);
  }
  if (0 < (int)param_4) {
    uVar2 = (ulong)param_4;
    do {
      FUN_006d2594(*param_3,*param_2);
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
    } while (uVar2 != 0);
  }
  return;
}


// ===== 006d2594  FUN_006d2594 =====

void FUN_006d2594(undefined8 param_1,undefined8 param_2)

{
  FUN_006bf8d8(param_2,param_1);
  return;
}


// ===== 006d25a4  FUN_006d25a4 =====

void FUN_006d25a4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,
                 int param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  
  iVar4 = param_4 - param_5;
  if (iVar4 != 0 && param_5 <= (int)param_4) {
    uVar3 = *param_1;
    puVar5 = param_2 + param_5;
    do {
      uVar1 = FUN_006d180c(uVar3);
      iVar4 = iVar4 + -1;
      *puVar5 = uVar1;
      puVar5 = puVar5 + 1;
    } while (iVar4 != 0);
  }
  if (0 < (int)param_4) {
    uVar2 = (ulong)param_4;
    do {
      FUN_006d261c(*param_3,*param_2);
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
    } while (uVar2 != 0);
  }
  return;
}


// ===== 006d261c  FUN_006d261c =====

void FUN_006d261c(undefined8 param_1,undefined8 param_2)

{
  FUN_006c22ec(param_2,param_1);
  return;
}


// ===== 006d262c  FUN_006d262c =====

void FUN_006d262c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,
                 int param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  
  iVar4 = param_4 - param_5;
  if (iVar4 != 0 && param_5 <= (int)param_4) {
    uVar3 = *param_1;
    puVar5 = param_2 + param_5;
    do {
      uVar1 = FUN_006d1a8c(uVar3);
      iVar4 = iVar4 + -1;
      *puVar5 = uVar1;
      puVar5 = puVar5 + 1;
    } while (iVar4 != 0);
  }
  if (0 < (int)param_4) {
    uVar2 = (ulong)param_4;
    do {
      FUN_006d26a4(*param_3,*param_2);
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
    } while (uVar2 != 0);
  }
  return;
}


// ===== 006d26a4  FUN_006d26a4 =====

void FUN_006d26a4(undefined8 param_1,undefined8 param_2)

{
  FUN_006c614c(param_2,param_1);
  return;
}


// ===== 006d26b4  FUN_006d26b4 =====

void FUN_006d26b4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,
                 int param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  
  iVar4 = param_4 - param_5;
  if (iVar4 != 0 && param_5 <= (int)param_4) {
    uVar3 = *param_1;
    puVar5 = param_2 + param_5;
    do {
      uVar1 = FUN_006d1b8c(uVar3);
      iVar4 = iVar4 + -1;
      *puVar5 = uVar1;
      puVar5 = puVar5 + 1;
    } while (iVar4 != 0);
  }
  if (0 < (int)param_4) {
    uVar2 = (ulong)param_4;
    do {
      FUN_006d272c(*param_3,*param_2);
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
    } while (uVar2 != 0);
  }
  return;
}


// ===== 006d272c  FUN_006d272c =====

void FUN_006d272c(undefined8 param_1,undefined8 param_2)

{
  FUN_006c77b4(param_2,param_1);
  return;
}


// ===== 006d273c  FUN_006d273c =====

void FUN_006d273c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,
                 int param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  
  iVar4 = param_4 - param_5;
  if (iVar4 != 0 && param_5 <= (int)param_4) {
    uVar3 = *param_1;
    puVar5 = param_2 + param_5;
    do {
      uVar1 = FUN_006d190c(uVar3);
      iVar4 = iVar4 + -1;
      *puVar5 = uVar1;
      puVar5 = puVar5 + 1;
    } while (iVar4 != 0);
  }
  if (0 < (int)param_4) {
    uVar2 = (ulong)param_4;
    do {
      FUN_006d27b4(*param_3,*param_2);
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
    } while (uVar2 != 0);
  }
  return;
}


// ===== 006d27b4  FUN_006d27b4 =====

void FUN_006d27b4(undefined8 param_1,undefined8 param_2)

{
  FUN_006c4248(param_2,param_1);
  return;
}


// ===== 006d27c4  FUN_006d27c4 =====

void FUN_006d27c4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,
                 int param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  
  iVar4 = param_4 - param_5;
  if (iVar4 != 0 && param_5 <= (int)param_4) {
    uVar3 = *param_1;
    puVar5 = param_2 + param_5;
    do {
      uVar1 = FUN_006d170c(uVar3);
      iVar4 = iVar4 + -1;
      *puVar5 = uVar1;
      puVar5 = puVar5 + 1;
    } while (iVar4 != 0);
  }
  if (0 < (int)param_4) {
    uVar2 = (ulong)param_4;
    do {
      FUN_006d283c(*param_3,*param_2);
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
    } while (uVar2 != 0);
  }
  return;
}


// ===== 006d283c  FUN_006d283c =====

void FUN_006d283c(undefined8 param_1,undefined8 param_2)

{
  FUN_006c0764(param_2,param_1);
  return;
}


// ===== 006d284c  FUN_006d284c =====

void FUN_006d284c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,
                 int param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  
  iVar4 = param_4 - param_5;
  if (iVar4 != 0 && param_5 <= (int)param_4) {
    uVar3 = *param_1;
    puVar5 = param_2 + param_5;
    do {
      uVar1 = FUN_006d198c(uVar3);
      iVar4 = iVar4 + -1;
      *puVar5 = uVar1;
      puVar5 = puVar5 + 1;
    } while (iVar4 != 0);
  }
  if (0 < (int)param_4) {
    uVar2 = (ulong)param_4;
    do {
      FUN_006d28c4(*param_3,*param_2);
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
    } while (uVar2 != 0);
  }
  return;
}


// ===== 006d28c4  FUN_006d28c4 =====

void FUN_006d28c4(undefined8 param_1,undefined8 param_2)

{
  FUN_006c4cb4(param_2,param_1);
  return;
}


// ===== 006d28d4  FUN_006d28d4 =====

void FUN_006d28d4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,
                 int param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  
  iVar4 = param_4 - param_5;
  if (iVar4 != 0 && param_5 <= (int)param_4) {
    uVar3 = *param_1;
    puVar5 = param_2 + param_5;
    do {
      uVar1 = FUN_006d178c(uVar3);
      iVar4 = iVar4 + -1;
      *puVar5 = uVar1;
      puVar5 = puVar5 + 1;
    } while (iVar4 != 0);
  }
  if (0 < (int)param_4) {
    uVar2 = (ulong)param_4;
    do {
      FUN_006d294c(*param_3,*param_2);
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
    } while (uVar2 != 0);
  }
  return;
}


// ===== 006d294c  FUN_006d294c =====

void FUN_006d294c(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0x18);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    }
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | uVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006621e0(param_2 + 8,(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8);
  return;
}


// ===== 006d2998  FUN_006d2998 =====

void FUN_006d2998(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,
                 int param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  
  iVar4 = param_4 - param_5;
  if (iVar4 != 0 && param_5 <= (int)param_4) {
    uVar3 = *param_1;
    puVar5 = param_2 + param_5;
    do {
      uVar1 = FUN_006d210c(uVar3);
      iVar4 = iVar4 + -1;
      *puVar5 = uVar1;
      puVar5 = puVar5 + 1;
    } while (iVar4 != 0);
  }
  if (0 < (int)param_4) {
    uVar2 = (ulong)param_4;
    do {
      FUN_006d2a10(*param_3,*param_2);
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
    } while (uVar2 != 0);
  }
  return;
}


// ===== 006d2a10  FUN_006d2a10 =====

void FUN_006d2a10(undefined8 param_1,undefined8 param_2)

{
  FUN_006cf0b8(param_2,param_1);
  return;
}


// ===== 006d2a20  FUN_006d2a20 =====

void FUN_006d2a20(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,
                 int param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  
  iVar4 = param_4 - param_5;
  if (iVar4 != 0 && param_5 <= (int)param_4) {
    uVar3 = *param_1;
    puVar5 = param_2 + param_5;
    do {
      uVar1 = FUN_006d1b0c(uVar3);
      iVar4 = iVar4 + -1;
      *puVar5 = uVar1;
      puVar5 = puVar5 + 1;
    } while (iVar4 != 0);
  }
  if (0 < (int)param_4) {
    uVar2 = (ulong)param_4;
    do {
      FUN_006d2a98(*param_3,*param_2);
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
    } while (uVar2 != 0);
  }
  return;
}


// ===== 006d2a98  FUN_006d2a98 =====

void FUN_006d2a98(undefined8 param_1,undefined8 param_2)

{
  FUN_006c6d40(param_2,param_1);
  return;
}


// ===== 006d2aa8  FUN_006d2aa8 =====

void FUN_006d2aa8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,
                 int param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  
  iVar4 = param_4 - param_5;
  if (iVar4 != 0 && param_5 <= (int)param_4) {
    uVar3 = *param_1;
    puVar5 = param_2 + param_5;
    do {
      uVar1 = FUN_006d1a0c(uVar3);
      iVar4 = iVar4 + -1;
      *puVar5 = uVar1;
      puVar5 = puVar5 + 1;
    } while (iVar4 != 0);
  }
  if (0 < (int)param_4) {
    uVar2 = (ulong)param_4;
    do {
      FUN_006d2b20(*param_3,*param_2);
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
    } while (uVar2 != 0);
  }
  return;
}


// ===== 006d2b20  FUN_006d2b20 =====

void FUN_006d2b20(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0x18);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    }
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | uVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006621e0(param_2 + 8,(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8);
  return;
}


// ===== 006d2b6c  FUN_006d2b6c =====

void FUN_006d2b6c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,
                 int param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  
  iVar4 = param_4 - param_5;
  if (iVar4 != 0 && param_5 <= (int)param_4) {
    uVar3 = *param_1;
    puVar5 = param_2 + param_5;
    do {
      uVar1 = FUN_006d1c0c(uVar3);
      iVar4 = iVar4 + -1;
      *puVar5 = uVar1;
      puVar5 = puVar5 + 1;
    } while (iVar4 != 0);
  }
  if (0 < (int)param_4) {
    uVar2 = (ulong)param_4;
    do {
      FUN_006d2be4(*param_3,*param_2);
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
    } while (uVar2 != 0);
  }
  return;
}


// ===== 006d2be4  FUN_006d2be4 =====

void FUN_006d2be4(undefined8 param_1,undefined8 param_2)

{
  FUN_006c8534(param_2,param_1);
  return;
}


// ===== 006d2bf4  FUN_006d2bf4 =====

void FUN_006d2bf4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,
                 int param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  
  iVar4 = param_4 - param_5;
  if (iVar4 != 0 && param_5 <= (int)param_4) {
    uVar3 = *param_1;
    puVar5 = param_2 + param_5;
    do {
      uVar1 = FUN_006d208c(uVar3);
      iVar4 = iVar4 + -1;
      *puVar5 = uVar1;
      puVar5 = puVar5 + 1;
    } while (iVar4 != 0);
  }
  if (0 < (int)param_4) {
    uVar2 = (ulong)param_4;
    do {
      FUN_006d2c6c(*param_3,*param_2);
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
    } while (uVar2 != 0);
  }
  return;
}


// ===== 006d2c6c  FUN_006d2c6c =====

void FUN_006d2c6c(long param_1,long param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar3 = *(ulong *)(param_1 + 0x18);
      puVar2 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffc);
      *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 1;
      if ((*(ulong *)(param_2 + 8) & 1) != 0) {
        puVar2 = (ulong *)*puVar2;
      }
      FUN_006636d4(param_2 + 0x18,uVar3 & 0xfffffffffffffffc,puVar2);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined1 *)(param_2 + 0x20) = *(undefined1 *)(param_1 + 0x20);
    }
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | uVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006621e0(param_2 + 8,(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8);
  return;
}


// ===== 006d2d18  FUN_006d2d18 =====

void FUN_006d2d18(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,
                 int param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  
  iVar4 = param_4 - param_5;
  if (iVar4 != 0 && param_5 <= (int)param_4) {
    uVar3 = *param_1;
    puVar5 = param_2 + param_5;
    do {
      uVar1 = FUN_006d228c(uVar3);
      iVar4 = iVar4 + -1;
      *puVar5 = uVar1;
      puVar5 = puVar5 + 1;
    } while (iVar4 != 0);
  }
  if (0 < (int)param_4) {
    uVar2 = (ulong)param_4;
    do {
      FUN_006d2d90(*param_3,*param_2);
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
    } while (uVar2 != 0);
  }
  return;
}


// ===== 006d2d90  FUN_006d2d90 =====

void FUN_006d2d90(undefined8 param_1,undefined8 param_2)

{
  FUN_006d0fc8(param_2,param_1);
  return;
}


// ===== 006d2da0  _INIT_5 =====

void _INIT_5(void)

{
  FUN_006853b0(&DAT_007aebb0,PTR_DAT_007a3330);
  return;
}


// ===== 006d2db4  FUN_006d2db4 =====

void FUN_006d2db4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  short sVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 *local_40;
  long local_38;
  undefined8 *puVar5;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  sVar1 = *(short *)(param_1 + 10);
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  local_70 = param_4;
  if ((long)sVar1 < 0) {
    local_50 = param_2;
    uStack_48 = param_3;
    local_40 = (undefined1 *)&local_70;
    FUN_006d47c4(&local_68,*puVar3,puVar3 + 1,&local_50);
    if (*(long *)(lVar2 + 0x28) != local_38) goto LAB_006d2e70;
  }
  else {
    local_68 = param_2;
    uStack_60 = param_3;
    local_58 = (undefined1 *)&local_70;
    if (sVar1 != 0) {
      puVar4 = puVar3;
      local_58 = (undefined1 *)&local_70;
      do {
        puVar5 = puVar4 + 4;
        FUN_006d485c(&local_68,*(undefined4 *)puVar4,puVar4 + 1);
        puVar4 = puVar5;
      } while (puVar5 != puVar3 + (long)sVar1 * 4);
    }
    if (*(long *)(lVar2 + 0x28) != local_38) {
LAB_006d2e70:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  return;
}


// ===== 006d2e74  FUN_006d2e74 =====

long * FUN_006d2e74(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  
  puVar1 = (undefined8 *)FUN_00663ef8();
  if ((puVar1 != (undefined8 *)0x0) && ((*(byte *)((long)puVar1 + 10) & 1) == 0)) {
    plVar3 = (long *)*puVar1;
    if ((*(byte *)((long)puVar1 + 10) >> 4 & 1) == 0) {
      return plVar3;
    }
    uVar2 = (**(code **)(*param_4 + 0x10))(param_4,param_3);
                    /* WARNING: Could not recover jumptable at 0x006d2f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,uVar2,*param_1);
    return plVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x006d2ed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar3 = (long *)(**(code **)(*param_4 + 0x10))(param_4,param_3);
  return plVar3;
}


// ===== 006d2f14  FUN_006d2f14 =====

void FUN_006d2f14(undefined8 *param_1,long param_2,long *param_3)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *local_78;
  long local_70;
  code *pcStack_68;
  undefined8 **local_60;
  code **local_58;
  long *plStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_006644d0(param_1,*(undefined4 *)(param_2 + 4),param_2,&local_78);
  if ((uVar3 & 1) == 0) {
    bVar1 = *(byte *)((long)local_78 + 10);
    plVar4 = (long *)*local_78;
    *(byte *)((long)local_78 + 10) = bVar1 & 0xf0;
    if ((bVar1 >> 4 & 1) != 0) {
      uVar5 = FUN_0068c940(param_2);
      uVar5 = (**(code **)(*param_3 + 0x10))(param_3,uVar5);
      plVar4 = (long *)(**(code **)(*plVar4 + 0x20))(plVar4,uVar5,*param_1);
    }
  }
  else {
    plVar4 = *(long **)(param_2 + 0x18);
    if (plVar4 != (long *)0x0) {
      pcStack_68 = thunk_FUN_006af330;
      local_70 = param_2;
      if (*plVar4 != -1) {
        local_58 = &pcStack_68;
        plStack_50 = &local_70;
        local_60 = &local_58;
        FUN_00710f84(plVar4,&local_60,FUN_00685640);
      }
    }
    *(undefined1 *)(local_78 + 1) = *(undefined1 *)(param_2 + 2);
    *(undefined1 *)((long)local_78 + 9) = 0;
    *(undefined1 *)((long)local_78 + 0xb) = 0;
    uVar5 = FUN_0068c940(param_2);
    plVar4 = (long *)(**(code **)(*param_3 + 0x10))(param_3,uVar5);
    *(byte *)((long)local_78 + 10) = *(byte *)((long)local_78 + 10) & 0xf;
    uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4,*param_1);
    *local_78 = uVar5;
    plVar4 = (long *)*local_78;
    *(byte *)((long)local_78 + 10) = *(byte *)((long)local_78 + 10) & 0xf0;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar4);
}


// ===== 006d3088  FUN_006d3088 =====

long * FUN_006d3088(long *param_1,long param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  
  plVar1 = (long *)FUN_006641a4(param_1,*(undefined4 *)(param_2 + 4));
  if (plVar1 != (long *)0x0) {
    plVar3 = (long *)*plVar1;
    if ((*(byte *)((long)plVar1 + 10) >> 4 & 1) != 0) {
      uVar2 = FUN_0068c940(param_2);
      uVar2 = (**(code **)(*param_3 + 0x10))(param_3,uVar2);
      plVar3 = (long *)(**(code **)(*plVar3 + 0x40))(plVar3,uVar2,*param_1);
      if ((*param_1 == 0) && ((long *)*plVar1 != (long *)0x0)) {
        (**(code **)(*(long *)*plVar1 + 8))();
      }
    }
    FUN_006664a4(param_1,*(undefined4 *)(param_2 + 4));
    return plVar3;
  }
  return (long *)0x0;
}


// ===== 006d3158  FUN_006d3158 =====

void FUN_006d3158(long *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  undefined8 *local_68;
  long local_60;
  code *pcStack_58;
  undefined8 **local_50;
  code **local_48;
  long *plStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_006644d0(param_1,*(undefined4 *)(param_2 + 4),param_2,&local_68);
  if ((uVar2 & 1) != 0) {
    plVar3 = *(long **)(param_2 + 0x18);
    if (plVar3 != (long *)0x0) {
      pcStack_58 = thunk_FUN_006af330;
      local_60 = param_2;
      if (*plVar3 != -1) {
        local_48 = &pcStack_58;
        plStack_40 = &local_60;
        local_50 = &local_48;
        FUN_00710f84(plVar3,&local_50,FUN_00685640);
      }
    }
    puVar5 = local_68;
    lVar4 = *param_1;
    *(undefined1 *)(local_68 + 1) = *(undefined1 *)(param_2 + 2);
    *(undefined1 *)((long)local_68 + 9) = 1;
    if (lVar4 == 0) {
      plVar3 = (long *)FUN_00759c3c(0x18);
      plVar3[1] = 0;
      plVar3[2] = 0;
      *plVar3 = 0;
    }
    else {
      auVar6 = FUN_00663600(lVar4,0x18,PTR_PTR_007a31c8);
      plVar3 = auVar6._0_8_;
      *auVar6._8_8_ = plVar3;
      auVar6._8_8_[1] = FUN_0066bd68;
      *plVar3 = lVar4;
      plVar3[1] = 0;
      plVar3[2] = 0;
      puVar5 = local_68;
    }
    *puVar5 = plVar3;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_68);
}


// ===== 006d3264  FUN_006d3264 =====

long FUN_006d3264(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  undefined1 uStack_79;
  undefined1 auStack_78 [48];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  plVar3 = (long *)FUN_006d3158();
  lVar6 = *plVar3;
  piVar7 = *(int **)(lVar6 + 0x10);
  if (piVar7 == (int *)0x0) {
LAB_006d32d0:
    if (*(int *)(lVar6 + 8) == 0) {
      uVar5 = FUN_0068c940(param_2);
      plVar4 = (long *)(**(code **)(*param_3 + 0x10))(param_3,uVar5);
      if (plVar4 == (long *)0x0) {
        FUN_00675e64(auStack_78,3,
                     "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/extension_set_heavy.cc"
                     ,0xfa);
                    /* try { // try from 006d336c to 006d337f has its CatchHandler @ 006d3394 */
        uVar5 = FUN_00675a58(auStack_78,"CHECK failed: prototype != nullptr: ");
                    /* try { // try from 006d3380 to 006d3387 has its CatchHandler @ 006d3390 */
        FUN_00675ac0(&uStack_79,uVar5);
        uVar5 = FUN_00675e7c(auStack_78);
                    /* catch() { ... } // from try @ 006d3380 with catch @ 006d3390 */
                    /* catch() { ... } // from try @ 006d336c with catch @ 006d3394 */
        FUN_00675e7c(auStack_78);
        if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
          FUN_00755eac(uVar5);
        }
        goto LAB_006d33b8;
      }
    }
    else {
      plVar4 = *(long **)(*(long *)(lVar6 + 0x10) + 8);
    }
    lVar8 = (**(code **)(*plVar4 + 0x18))(plVar4,*param_1);
    FUN_0066bd90(*plVar3,lVar8);
  }
  else {
    iVar1 = *(int *)(lVar6 + 8);
    if (*piVar7 <= iVar1) goto LAB_006d32d0;
    lVar8 = *(long *)(piVar7 + (long)iVar1 * 2 + 2);
    *(int *)(lVar6 + 8) = iVar1 + 1;
    if (lVar8 == 0) {
      lVar6 = *plVar3;
      goto LAB_006d32d0;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return lVar8;
  }
LAB_006d33b8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006d33bc  FUN_006d33bc =====

void FUN_006d33bc(undefined8 *param_1,undefined4 param_2,long param_3)

{
  byte bVar1;
  undefined1 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  undefined **local_90;
  long *plStack_88;
  long local_60;
  undefined *puStack_58;
  undefined1 *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar5 = FUN_0068bfbc(*param_1,param_1[2],param_2);
  puVar4 = PTR_thunk_FUN_006af330_007a32d0;
  if (lVar5 != 0) {
    plVar6 = *(long **)(lVar5 + 0x18);
    if (plVar6 != (long *)0x0) {
      puStack_58 = PTR_thunk_FUN_006af330_007a32d0;
      local_60 = lVar5;
      if (*plVar6 != -1) {
        local_90 = &puStack_58;
        plStack_88 = &local_60;
        local_50 = (undefined1 *)&local_90;
        FUN_00710f84(plVar6,&local_50,FUN_00685640);
      }
      plVar6 = *(long **)(lVar5 + 0x18);
    }
    bVar1 = *(byte *)(lVar5 + 2);
    *(byte *)(param_3 + 0xc) = bVar1;
    *(bool *)(param_3 + 0xd) = ((*(byte *)(lVar5 + 1) ^ 0xff) & 0x60) == 0;
    uVar2 = *(undefined1 *)(*(long *)(lVar5 + 0x38) + 0x50);
    *(long *)(param_3 + 0x20) = lVar5;
    *(undefined1 *)(param_3 + 0xe) = uVar2;
    if (plVar6 != (long *)0x0) {
      puStack_58 = puVar4;
      local_60 = lVar5;
      if (*plVar6 != -1) {
        local_90 = &puStack_58;
        plStack_88 = &local_60;
        local_50 = (undefined1 *)&local_90;
        FUN_00710f84(plVar6,&local_50,FUN_00685640);
      }
      bVar1 = *(byte *)(lVar5 + 2);
    }
    iVar9 = *(int *)(&DAT_00210878 + (ulong)bVar1 * 4);
    if (iVar9 == 10) {
      plVar6 = (long *)param_1[1];
      uVar7 = FUN_0068c940(lVar5);
      lVar8 = (**(code **)(*plVar6 + 0x10))(plVar6,uVar7);
      *(long *)(param_3 + 0x10) = lVar8;
      if (lVar8 == 0) {
        FUN_00675e64(&local_90,3,
                     "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/extension_set_heavy.cc"
                     ,0x124);
                    /* try { // try from 006d3508 to 006d3533 has its CatchHandler @ 006d35e0 */
        uVar7 = FUN_00675a58(&local_90,"CHECK failed: output->message_info.prototype != nullptr: ");
        uVar7 = FUN_00675a58(uVar7,
                             "Extension factory\'s GetPrototype() returned nullptr; extension: ");
        uVar7 = FUN_00675a80(uVar7,*(long *)(lVar5 + 8) + 0x18);
                    /* try { // try from 006d3534 to 006d353b has its CatchHandler @ 006d35dc */
        FUN_00675ac0(&local_50,uVar7);
        FUN_00675e7c(&local_90);
      }
    }
    else {
      plVar6 = *(long **)(lVar5 + 0x18);
      if (plVar6 != (long *)0x0) {
        puStack_58 = puVar4;
        local_60 = lVar5;
        if (*plVar6 != -1) {
          local_90 = &puStack_58;
          plStack_88 = &local_60;
          local_50 = (undefined1 *)&local_90;
          FUN_00710f84(plVar6,&local_50,FUN_00685640);
        }
        iVar9 = *(int *)(&DAT_00210878 + (ulong)*(byte *)(lVar5 + 2) * 4);
      }
      if (iVar9 == 8) {
        *(code **)(param_3 + 0x10) = FUN_006d3608;
        uVar7 = FUN_0068f648(lVar5);
        *(undefined8 *)(param_3 + 0x18) = uVar7;
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar5 != 0);
}


// ===== 006d3608  FUN_006d3608 =====

bool FUN_006d3608(void)

{
  long lVar1;
  
  lVar1 = FUN_0068cf8c();
  return lVar1 != 0;
}


// ===== 006d3624  FUN_006d3624 =====

void FUN_006d3624(undefined8 param_1,ulong param_2,undefined8 param_3,long *param_4,ulong *param_5,
                 long param_6)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined7 uStack_b0;
  undefined1 local_a9;
  undefined4 uStack_a8;
  byte bStack_a4;
  char cStack_a3;
  undefined1 uStack_a2;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar6 = param_2 >> 3;
  uVar1 = (uint)param_2 & 7;
  plVar7 = *(long **)(param_6 + 0x60);
  uStack_a8 = 0;
  bStack_a4 = 0;
  cStack_a3 = '\0';
  uStack_a2 = 0;
  uStack_b0 = 0;
  local_a9 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (plVar7 == (long *)0x0) {
    local_80 = param_4;
    uVar3 = FUN_00663c28(&local_80,uVar6 & 0xffffffff,&uStack_b0);
    if ((uVar3 & 1) != 0) {
      uVar5 = *(uint *)(PTR_DAT_007a3228 + (ulong)bStack_a4 * 4);
      if (((uVar1 == 2) && (cStack_a3 != '\0')) && (uVar5 - 5 < 0xfffffffd)) goto LAB_006d3728;
LAB_006d3730:
      if (uVar5 == uVar1) {
        uVar8 = 0;
        goto LAB_006d373c;
      }
    }
  }
  else {
    uVar8 = *(undefined8 *)(param_6 + 0x68);
    local_70 = (**(code **)(*param_4 + 0x80))(param_4);
    local_80 = plVar7;
    uStack_78 = uVar8;
    uVar3 = FUN_006d33bc(&local_80,uVar6 & 0xffffffff,&uStack_b0);
    if ((uVar3 & 1) != 0) {
      uVar5 = *(uint *)(PTR_DAT_007a3228 + (ulong)bStack_a4 * 4);
      if (((uVar1 != 2) || (cStack_a3 == '\0')) || (0xfffffffc < uVar5 - 5)) goto LAB_006d3730;
LAB_006d3728:
      uVar8 = 1;
LAB_006d373c:
      FUN_006d37c0(param_1,uVar6 & 0xffffffff,uVar8,&uStack_b0,param_5,param_3,param_6);
      goto LAB_006d377c;
    }
  }
  if ((*param_5 & 1) == 0) {
    lVar4 = FUN_00661fa4(param_5);
  }
  else {
    lVar4 = (*param_5 & 0xfffffffffffffffc) + 8;
  }
  FUN_006fbab8(param_2,lVar4,param_3,param_6);
LAB_006d377c:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 006d37c0  FUN_006d37c0 =====

uint * FUN_006d37c0(undefined8 param_1,ulong param_2,ulong param_3,long param_4,ulong *param_5,
                   uint *param_6,long param_7)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  uint *puVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined1 uVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  undefined1 uStack_89;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  ulong *local_70;
  int local_68;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  iVar4 = *(byte *)(param_4 + 0xc) - 1;
  puVar8 = param_6;
  if ((param_3 & 1) == 0) {
    switch(iVar4) {
    case 0:
      puVar8 = param_6 + 2;
      if (*(char *)(param_4 + 0xd) == '\0') {
        FUN_006653f8(*(undefined8 *)param_6,param_1,param_2,1,*(undefined8 *)(param_4 + 0x20));
      }
      else {
        FUN_00665578(param_1,param_2,1,*(undefined1 *)(param_4 + 0xe),
                     *(undefined8 *)(param_4 + 0x20));
      }
      break;
    case 1:
      puVar8 = param_6 + 1;
      if (*(char *)(param_4 + 0xd) == '\0') {
        FUN_006650e4(*param_6,param_1,param_2,2,*(undefined8 *)(param_4 + 0x20));
      }
      else {
        FUN_00665264(param_1,param_2,2,*(undefined1 *)(param_4 + 0xe),
                     *(undefined8 *)(param_4 + 0x20));
      }
      break;
    case 2:
      bVar2 = (byte)*param_6;
      auVar17._8_8_ = (long)(char)bVar2;
      auVar17._0_8_ = (byte *)((long)param_6 + 1);
      if ((long)(char)bVar2 < 0) {
        bVar3 = *(byte *)((long)param_6 + 1);
        iVar4 = (uint)bVar3 * 0x80 + (uint)bVar2 + -0x80;
        if ((char)bVar3 < '\0') {
          param_2 = param_2 & 0xffffffff;
          auVar17 = FUN_0066fd14(param_6,iVar4);
          puVar8 = auVar17._0_8_;
          if (puVar8 == (uint *)0x0) break;
        }
        else {
          auVar17._8_4_ = iVar4;
          auVar17._0_8_ = (long)param_6 + 2;
          auVar17._12_4_ = 0;
        }
      }
      if (*(char *)(param_4 + 0xd) == '\0') {
        uVar12 = *(undefined8 *)(param_4 + 0x20);
        uVar7 = 3;
        goto LAB_006d43c4;
      }
      uVar13 = *(undefined1 *)(param_4 + 0xe);
      uVar12 = *(undefined8 *)(param_4 + 0x20);
      uVar7 = 3;
LAB_006d43b0:
      puVar8 = auVar17._0_8_;
      FUN_00664940(param_1,param_2,uVar7,uVar13,auVar17._8_8_,uVar12);
      break;
    case 3:
      bVar2 = (byte)*param_6;
      auVar18._8_8_ = (long)(char)bVar2;
      auVar18._0_8_ = (byte *)((long)param_6 + 1);
      if ((long)(char)bVar2 < 0) {
        bVar3 = *(byte *)((long)param_6 + 1);
        iVar4 = (uint)bVar3 * 0x80 + (uint)bVar2 + -0x80;
        if ((char)bVar3 < '\0') {
          param_2 = param_2 & 0xffffffff;
          auVar18 = FUN_0066fd14(param_6,iVar4);
          puVar8 = auVar18._0_8_;
          if (puVar8 == (uint *)0x0) break;
        }
        else {
          auVar18._8_4_ = iVar4;
          auVar18._0_8_ = (long)param_6 + 2;
          auVar18._12_4_ = 0;
        }
      }
      if (*(char *)(param_4 + 0xd) == '\0') {
        uVar12 = *(undefined8 *)(param_4 + 0x20);
        uVar7 = 4;
        goto LAB_006d42e0;
      }
      uVar13 = *(undefined1 *)(param_4 + 0xe);
      uVar12 = *(undefined8 *)(param_4 + 0x20);
      uVar7 = 4;
LAB_006d42cc:
      puVar8 = auVar18._0_8_;
      FUN_00664f58(param_1,param_2,uVar7,uVar13,auVar18._8_8_,uVar12);
      break;
    case 4:
      bVar2 = (byte)*param_6;
      auVar16._8_8_ = (long)(char)bVar2;
      auVar16._0_8_ = (byte *)((long)param_6 + 1);
      if ((long)(char)bVar2 < 0) {
        bVar3 = *(byte *)((long)param_6 + 1);
        iVar4 = (uint)bVar3 * 0x80 + (uint)bVar2 + -0x80;
        if ((char)bVar3 < '\0') {
          param_2 = param_2 & 0xffffffff;
          auVar16 = FUN_0066fd14(param_6,iVar4);
          puVar8 = auVar16._0_8_;
          if (puVar8 == (uint *)0x0) break;
        }
        else {
          auVar16._8_4_ = iVar4;
          auVar16._0_8_ = (long)param_6 + 2;
          auVar16._12_4_ = 0;
        }
      }
      puVar8 = auVar16._0_8_;
      if (*(char *)(param_4 + 0xd) == '\0') {
        uVar12 = *(undefined8 *)(param_4 + 0x20);
        uVar7 = 5;
        uVar11 = auVar16._8_8_ & 0xffffffff;
        goto LAB_006d4228;
      }
      FUN_00664634(param_1,param_2,5,*(undefined1 *)(param_4 + 0xe),auVar16._8_8_,
                   *(undefined8 *)(param_4 + 0x20));
      break;
    case 5:
      auVar18._8_8_ = *(undefined8 *)param_6;
      auVar18._0_8_ = param_6 + 2;
      if (*(char *)(param_4 + 0xd) != '\0') {
        uVar13 = *(undefined1 *)(param_4 + 0xe);
        uVar12 = *(undefined8 *)(param_4 + 0x20);
        uVar7 = 6;
        goto LAB_006d42cc;
      }
      uVar12 = *(undefined8 *)(param_4 + 0x20);
      uVar7 = 6;
LAB_006d42e0:
      puVar8 = auVar18._0_8_;
      FUN_00664dd8(param_1,param_2,uVar7,auVar18._8_8_,uVar12);
      break;
    case 6:
      puVar8 = param_6 + 1;
      uVar11 = (ulong)*param_6;
      if (*(char *)(param_4 + 0xd) == '\0') {
        uVar12 = *(undefined8 *)(param_4 + 0x20);
        uVar7 = 7;
LAB_006d41c0:
        FUN_00664acc(param_1,param_2,uVar7,uVar11,uVar12);
      }
      else {
        FUN_00664c4c(param_1,param_2,7,*(undefined1 *)(param_4 + 0xe),uVar11,
                     *(undefined8 *)(param_4 + 0x20));
      }
      break;
    case 7:
      bVar2 = (byte)*param_6;
      auVar19._8_8_ = (long)(char)bVar2;
      auVar19._0_8_ = (byte *)((long)param_6 + 1);
      if ((long)(char)bVar2 < 0) {
        bVar3 = *(byte *)((long)param_6 + 1);
        iVar4 = (uint)bVar3 * 0x80 + (uint)bVar2 + -0x80;
        if ((char)bVar3 < '\0') {
          param_2 = param_2 & 0xffffffff;
          auVar19 = FUN_0066fd14(param_6,iVar4);
          puVar8 = auVar19._0_8_;
          if (puVar8 == (uint *)0x0) break;
        }
        else {
          auVar19._8_4_ = iVar4;
          auVar19._0_8_ = (long)param_6 + 2;
          auVar19._12_4_ = 0;
        }
      }
      puVar8 = auVar19._0_8_;
      if (*(char *)(param_4 + 0xd) == '\0') {
        FUN_00665710(param_1,param_2,8,auVar19._8_8_ != 0,*(undefined8 *)(param_4 + 0x20));
      }
      else {
        FUN_00665894(param_1,param_2,8,*(undefined1 *)(param_4 + 0xe),auVar19._8_8_ != 0,
                     *(undefined8 *)(param_4 + 0x20));
      }
      break;
    case 8:
    case 0xb:
      if (*(char *)(param_4 + 0xd) != '\0') {
        uVar7 = FUN_00666170();
        bVar2 = (byte)*param_6;
        if ((char)bVar2 < '\0') goto LAB_006d3eb0;
LAB_006d389c:
        puVar8 = (uint *)((long)param_6 + 1);
        uVar11 = (ulong)(int)(uint)bVar2;
        if ((long)uVar11 <= (*(long *)(param_7 + 8) - (long)puVar8) + 0x10) goto LAB_006d3ed8;
LAB_006d38b8:
        if (*(long *)(lVar5 + 0x28) == local_58) {
          puVar8 = (uint *)FUN_0066f6c8(param_7,puVar8,uVar11 & 0xffffffff,uVar7);
          return puVar8;
        }
        goto LAB_006d44d0;
      }
      uVar7 = FUN_00665fa8(param_1,param_2,9,*(undefined8 *)(param_4 + 0x20));
      bVar2 = (byte)*param_6;
      if (-1 < (char)bVar2) goto LAB_006d389c;
LAB_006d3eb0:
      auVar22 = FUN_0066fed4(param_6);
      puVar8 = auVar22._0_8_;
      if (puVar8 != (uint *)0x0) {
        uVar11 = (ulong)auVar22._8_4_;
        if ((*(long *)(param_7 + 8) - (long)puVar8) + 0x10 < (long)uVar11) goto LAB_006d38b8;
LAB_006d3ed8:
        FUN_00712d54(uVar7,puVar8,uVar11);
        puVar8 = (uint *)((long)puVar8 + uVar11);
      }
      break;
    case 9:
      if (*(char *)(param_4 + 0xd) == '\0') {
        plVar9 = (long *)FUN_006662a0(param_1,param_2,10,*(undefined8 *)(param_4 + 0x10),
                                      *(undefined8 *)(param_4 + 0x20));
      }
      else {
        plVar9 = (long *)FUN_006666ac();
      }
      iVar4 = *(int *)(param_7 + 0x58);
      *(int *)(param_7 + 0x58) = iVar4 + -1;
      if (iVar4 < 1) {
        puVar8 = (uint *)0x0;
      }
      else {
        *(int *)(param_7 + 0x5c) = *(int *)(param_7 + 0x5c) + 1;
        puVar8 = (uint *)(**(code **)(*plVar9 + 0x50))(plVar9,param_6,param_7);
        uVar7 = DAT_001b7178;
        uVar1 = *(uint *)(param_7 + 0x50);
        *(undefined4 *)(param_7 + 0x50) = 0;
        if (uVar1 != ((int)param_2 << 3 | 3U)) {
          puVar8 = (uint *)0x0;
        }
        *(ulong *)(param_7 + 0x58) =
             CONCAT44((int)((ulong)*(undefined8 *)(param_7 + 0x58) >> 0x20) +
                      (int)((ulong)uVar7 >> 0x20),(int)*(undefined8 *)(param_7 + 0x58) + (int)uVar7)
        ;
      }
      break;
    case 10:
      if (*(char *)(param_4 + 0xd) == '\0') {
        uVar7 = FUN_006662a0(param_1,param_2,0xb,*(undefined8 *)(param_4 + 0x10),
                             *(undefined8 *)(param_4 + 0x20));
      }
      else {
        uVar7 = FUN_006666ac();
      }
      if (*(long *)(lVar5 + 0x28) == local_58) {
        puVar8 = (uint *)FUN_0066fa8c(param_7,uVar7,param_6);
        return puVar8;
      }
      goto LAB_006d44d0;
    case 0xc:
      bVar2 = (byte)*param_6;
      auVar15._8_8_ = (long)(char)bVar2;
      auVar15._0_8_ = (byte *)((long)param_6 + 1);
      if ((long)(char)bVar2 < 0) {
        bVar3 = *(byte *)((long)param_6 + 1);
        iVar4 = (uint)bVar3 * 0x80 + (uint)bVar2 + -0x80;
        if ((char)bVar3 < '\0') {
          param_2 = param_2 & 0xffffffff;
          auVar15 = FUN_0066fd14(param_6,iVar4);
          puVar8 = auVar15._0_8_;
          if (puVar8 == (uint *)0x0) break;
        }
        else {
          auVar15._8_4_ = iVar4;
          auVar15._0_8_ = (long)param_6 + 2;
          auVar15._12_4_ = 0;
        }
      }
      puVar8 = auVar15._0_8_;
      if (*(char *)(param_4 + 0xd) == '\0') {
        uVar12 = *(undefined8 *)(param_4 + 0x20);
        uVar7 = 0xd;
        uVar11 = auVar15._8_8_ & 0xffffffff;
        goto LAB_006d41c0;
      }
      FUN_00664c4c(param_1,param_2,0xd,*(undefined1 *)(param_4 + 0xe),auVar15._8_8_,
                   *(undefined8 *)(param_4 + 0x20));
      break;
    case 0xd:
      bVar2 = (byte)*param_6;
      auVar21._8_8_ = (long)(char)bVar2;
      auVar21._0_8_ = (byte *)((long)param_6 + 1);
      if ((long)(char)bVar2 < 0) {
        bVar3 = *(byte *)((long)param_6 + 1);
        iVar4 = (uint)bVar3 * 0x80 + (uint)bVar2 + -0x80;
        if ((char)bVar3 < '\0') {
          auVar21 = FUN_0066fd14(param_6,iVar4);
          puVar8 = auVar21._0_8_;
          if (puVar8 == (uint *)0x0) break;
        }
        else {
          auVar21._8_4_ = iVar4;
          auVar21._0_8_ = (long)param_6 + 2;
          auVar21._12_4_ = 0;
        }
      }
      uVar14 = auVar21._8_8_;
      puVar8 = auVar21._0_8_;
      param_2 = param_2 & 0xffffffff;
      uVar11 = (**(code **)(param_4 + 0x10))(*(undefined8 *)(param_4 + 0x18),uVar14 & 0xffffffff);
      if ((uVar11 & 1) == 0) {
        if ((*param_5 & 1) == 0) {
          lVar10 = FUN_00661fa4(param_5,param_2);
        }
        else {
          lVar10 = (*param_5 & 0xfffffffffffffffc) + 8;
        }
        FUN_006faf8c(lVar10,param_2,uVar14);
      }
      else if (*(char *)(param_4 + 0xd) == '\0') {
        FUN_00665c9c(param_1,param_2,0xe,uVar14 & 0xffffffff,*(undefined8 *)(param_4 + 0x20));
      }
      else {
        FUN_00665e1c(param_1,param_2,0xe,*(undefined1 *)(param_4 + 0xe),uVar14 & 0xffffffff,
                     *(undefined8 *)(param_4 + 0x20));
      }
      break;
    case 0xe:
      puVar8 = param_6 + 1;
      uVar11 = (ulong)*param_6;
      if (*(char *)(param_4 + 0xd) == '\0') {
        uVar12 = *(undefined8 *)(param_4 + 0x20);
        uVar7 = 0xf;
        goto LAB_006d4228;
      }
      uVar13 = *(undefined1 *)(param_4 + 0xe);
      uVar12 = *(undefined8 *)(param_4 + 0x20);
      uVar7 = 0xf;
LAB_006d4148:
      FUN_00664634(param_1,param_2,uVar7,uVar13,uVar11,uVar12);
      break;
    case 0xf:
      auVar17._8_8_ = *(undefined8 *)param_6;
      auVar17._0_8_ = param_6 + 2;
      if (*(char *)(param_4 + 0xd) != '\0') {
        uVar13 = *(undefined1 *)(param_4 + 0xe);
        uVar12 = *(undefined8 *)(param_4 + 0x20);
        uVar7 = 0x10;
        goto LAB_006d43b0;
      }
      uVar12 = *(undefined8 *)(param_4 + 0x20);
      uVar7 = 0x10;
      goto LAB_006d43c4;
    case 0x10:
      bVar2 = (byte)*param_6;
      auVar6._8_8_ = (long)(char)bVar2;
      auVar6._0_8_ = (byte *)((long)param_6 + 1);
      auVar22 = auVar6._0_12_;
      if ((long)(char)bVar2 < 0) {
        bVar3 = *(byte *)((long)param_6 + 1);
        iVar4 = (uint)bVar3 * 0x80 + (uint)bVar2 + -0x80;
        if ((char)bVar3 < '\0') {
          param_2 = param_2 & 0xffffffff;
          auVar20 = FUN_0066fd14(param_6,iVar4);
          auVar22 = auVar20._0_12_;
          puVar8 = auVar20._0_8_;
          if (puVar8 == (uint *)0x0) break;
        }
        else {
          auVar22._8_4_ = iVar4;
          auVar22._0_8_ = (long)param_6 + 2;
        }
      }
      puVar8 = auVar22._0_8_;
      uVar11 = (ulong)(-(auVar22._8_4_ & 1) ^ auVar22._8_4_ >> 1);
      if (*(char *)(param_4 + 0xd) != '\0') {
        uVar13 = *(undefined1 *)(param_4 + 0xe);
        uVar12 = *(undefined8 *)(param_4 + 0x20);
        uVar7 = 0x11;
        goto LAB_006d4148;
      }
      uVar12 = *(undefined8 *)(param_4 + 0x20);
      uVar7 = 0x11;
LAB_006d4228:
      FUN_0066447c(param_1,param_2,uVar7,uVar11,uVar12);
      break;
    case 0x11:
      bVar2 = (byte)*param_6;
      auVar20._8_8_ = (long)(char)bVar2;
      auVar20._0_8_ = (byte *)((long)param_6 + 1);
      if ((long)(char)bVar2 < 0) {
        bVar3 = *(byte *)((long)param_6 + 1);
        iVar4 = (uint)bVar3 * 0x80 + (uint)bVar2 + -0x80;
        if ((char)bVar3 < '\0') {
          param_2 = param_2 & 0xffffffff;
          auVar20 = FUN_0066fd14(param_6,iVar4);
          puVar8 = auVar20._0_8_;
          if (puVar8 == (uint *)0x0) break;
        }
        else {
          auVar20._8_4_ = iVar4;
          auVar20._0_8_ = (long)param_6 + 2;
          auVar20._12_4_ = 0;
        }
      }
      auVar17._8_8_ = -(auVar20._8_8_ & 1) ^ auVar20._8_8_ >> 1;
      auVar17._0_8_ = auVar20._0_8_;
      if (*(char *)(param_4 + 0xd) != '\0') {
        uVar13 = *(undefined1 *)(param_4 + 0xe);
        uVar12 = *(undefined8 *)(param_4 + 0x20);
        uVar7 = 0x12;
        goto LAB_006d43b0;
      }
      uVar12 = *(undefined8 *)(param_4 + 0x20);
      uVar7 = 0x12;
LAB_006d43c4:
      puVar8 = auVar17._0_8_;
      FUN_006647c0(param_1,param_2,uVar7,auVar17._8_8_,uVar12);
    }
    goto switchD_006d3818_default;
  }
  switch(iVar4) {
  case 0:
    uVar7 = FUN_00665994(param_1,param_2,1,*(undefined1 *)(param_4 + 0xe),
                         *(undefined8 *)(param_4 + 0x20));
    if (*(long *)(lVar5 + 0x28) == local_58) {
      puVar8 = (uint *)FUN_00670620(uVar7,param_6,param_7);
      return puVar8;
    }
    break;
  case 1:
    uVar7 = FUN_00665994(param_1,param_2,2,*(undefined1 *)(param_4 + 0xe),
                         *(undefined8 *)(param_4 + 0x20));
    if (*(long *)(lVar5 + 0x28) == local_58) {
      puVar8 = (uint *)FUN_00670528(uVar7,param_6,param_7);
      return puVar8;
    }
    break;
  case 2:
    uVar7 = FUN_00665994(param_1,param_2,3,*(undefined1 *)(param_4 + 0xe),
                         *(undefined8 *)(param_4 + 0x20));
    if (*(long *)(lVar5 + 0x28) == local_58) {
      puVar8 = (uint *)FUN_006700e8(uVar7,param_6,param_7);
      return puVar8;
    }
    break;
  case 3:
    uVar7 = FUN_00665994(param_1,param_2,4,*(undefined1 *)(param_4 + 0xe),
                         *(undefined8 *)(param_4 + 0x20));
    if (*(long *)(lVar5 + 0x28) == local_58) {
      puVar8 = (uint *)FUN_006700f8(uVar7,param_6,param_7);
      return puVar8;
    }
    break;
  case 4:
    uVar7 = FUN_00665994(param_1,param_2,5,*(undefined1 *)(param_4 + 0xe),
                         *(undefined8 *)(param_4 + 0x20));
    if (*(long *)(lVar5 + 0x28) == local_58) {
      puVar8 = (uint *)FUN_006700c8(uVar7,param_6,param_7);
      return puVar8;
    }
    break;
  case 5:
    uVar7 = FUN_00665994(param_1,param_2,6,*(undefined1 *)(param_4 + 0xe),
                         *(undefined8 *)(param_4 + 0x20));
    if (*(long *)(lVar5 + 0x28) == local_58) {
      puVar8 = (uint *)FUN_00670338(uVar7,param_6,param_7);
      return puVar8;
    }
    break;
  case 6:
    uVar7 = FUN_00665994(param_1,param_2,7,*(undefined1 *)(param_4 + 0xe),
                         *(undefined8 *)(param_4 + 0x20));
    if (*(long *)(lVar5 + 0x28) == local_58) {
      puVar8 = (uint *)FUN_00670148(uVar7,param_6,param_7);
      return puVar8;
    }
    break;
  case 7:
    uVar7 = FUN_00665994(param_1,param_2,8,*(undefined1 *)(param_4 + 0xe),
                         *(undefined8 *)(param_4 + 0x20));
    if (*(long *)(lVar5 + 0x28) == local_58) {
      puVar8 = (uint *)FUN_00670138(uVar7,param_6,param_7);
      return puVar8;
    }
    break;
  case 8:
  case 9:
  case 10:
  case 0xb:
    FUN_00675e64(&local_88,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/extension_set_inl.h"
                 ,0x4f);
                    /* try { // try from 006d3834 to 006d3847 has its CatchHandler @ 006d44ac */
    uVar7 = FUN_00675a58(&local_88,"Non-primitive types can\'t be packed.");
                    /* try { // try from 006d3848 to 006d384f has its CatchHandler @ 006d44a8 */
    FUN_00675ac0(&uStack_89,uVar7);
    FUN_00675e7c(&local_88);
  default:
switchD_006d3818_default:
    if (*(long *)(lVar5 + 0x28) == local_58) {
      return puVar8;
    }
    break;
  case 0xc:
    uVar7 = FUN_00665994(param_1,param_2,0xd,*(undefined1 *)(param_4 + 0xe),
                         *(undefined8 *)(param_4 + 0x20));
    if (*(long *)(lVar5 + 0x28) == local_58) {
      puVar8 = (uint *)FUN_006700d8(uVar7,param_6,param_7);
      return puVar8;
    }
    break;
  case 0xd:
    local_88 = FUN_00665994(param_1,param_2,0xe,*(undefined1 *)(param_4 + 0xe),
                            *(undefined8 *)(param_4 + 0x20));
    uStack_78 = *(undefined8 *)(param_4 + 0x18);
    local_80 = *(undefined8 *)(param_4 + 0x10);
    local_70 = param_5;
    local_68 = (int)param_2;
    puVar8 = (uint *)FUN_006d4a58(param_7,param_6,&local_88);
    goto switchD_006d3818_default;
  case 0xe:
    uVar7 = FUN_00665994(param_1,param_2,0xf,*(undefined1 *)(param_4 + 0xe),
                         *(undefined8 *)(param_4 + 0x20));
    if (*(long *)(lVar5 + 0x28) == local_58) {
      puVar8 = (uint *)FUN_00670240(uVar7,param_6,param_7);
      return puVar8;
    }
    break;
  case 0xf:
    uVar7 = FUN_00665994(param_1,param_2,0x10,*(undefined1 *)(param_4 + 0xe),
                         *(undefined8 *)(param_4 + 0x20));
    if (*(long *)(lVar5 + 0x28) == local_58) {
      puVar8 = (uint *)FUN_00670430(uVar7,param_6,param_7);
      return puVar8;
    }
    break;
  case 0x10:
    uVar7 = FUN_00665994(param_1,param_2,0x11,*(undefined1 *)(param_4 + 0xe),
                         *(undefined8 *)(param_4 + 0x20));
    if (*(long *)(lVar5 + 0x28) == local_58) {
      puVar8 = (uint *)FUN_00670108(uVar7,param_6,param_7);
      return puVar8;
    }
    break;
  case 0x11:
    uVar7 = FUN_00665994(param_1,param_2,0x12,*(undefined1 *)(param_4 + 0xe),
                         *(undefined8 *)(param_4 + 0x20));
    if (*(long *)(lVar5 + 0x28) == local_58) {
      puVar8 = (uint *)FUN_00670118(uVar7,param_6,param_7);
      return puVar8;
    }
  }
LAB_006d44d0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006d44d4  FUN_006d44d4 =====

long FUN_006d44d4(long param_1)

{
  short sVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  sVar1 = *(short *)(param_1 + 10);
  if ((long)sVar1 < 0) {
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    local_40 = puVar4[2] << 5;
    FUN_006d4d18(*puVar4,puVar4 + 1,&local_40);
    lVar5 = local_40;
  }
  else {
    lVar5 = (ulong)*(ushort *)(param_1 + 8) << 5;
    if (sVar1 != 0) {
      lVar7 = (long)sVar1 << 5;
      lVar6 = *(long *)(param_1 + 0x10) + 8;
      do {
        lVar3 = FUN_006d4580(lVar6);
        lVar7 = lVar7 + -0x20;
        lVar5 = lVar5 + lVar3;
        lVar6 = lVar6 + 0x20;
      } while (lVar7 != 0);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar5;
}


// ===== 006d4580  FUN_006d4580 =====

long FUN_006d4580(long *param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  iVar1 = *(int *)(PTR_DAT_007a32d8 + (ulong)*(byte *)(param_1 + 1) * 4);
  if (*(char *)((long)param_1 + 9) == '\0') {
    if (iVar1 == 10) {
      if ((*(byte *)((long)param_1 + 10) >> 4 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x006d4734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar5 = (**(code **)(*(long *)*param_1 + 0x70))();
        return lVar5;
      }
                    /* WARNING: Could not recover jumptable at 0x006d475c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar5 = (**(code **)(*(long *)*param_1 + 0x60))();
      return lVar5;
    }
    if (iVar1 == 9) {
      lVar5 = FUN_00663b4c(*param_1);
      return lVar5 + 0x18;
    }
    return 0;
  }
  if (iVar1 < 6) {
    if (iVar1 < 3) {
      if (iVar1 == 1) goto LAB_006d46e8;
      if (iVar1 != 2) {
        return 0;
      }
    }
    else {
      if (iVar1 == 3) goto LAB_006d46e8;
      if ((iVar1 != 4) && (iVar1 != 5)) {
        return 0;
      }
    }
    uVar3 = *(uint *)(*param_1 + 4);
    lVar5 = (ulong)uVar3 << 3;
  }
  else {
    if (iVar1 < 8) {
      if (iVar1 != 6) {
        if (iVar1 != 7) {
          return 0;
        }
        uVar3 = *(int *)(*param_1 + 4) + 8;
        if (*(int *)(*param_1 + 4) < 1) {
          uVar3 = 0;
        }
        return (ulong)uVar3 + 0x10;
      }
    }
    else if (iVar1 != 8) {
      if (iVar1 == 9) {
        lVar6 = *param_1;
        piVar4 = *(int **)(lVar6 + 0x10);
        lVar5 = (long)*(int *)(lVar6 + 0xc) << 3;
        if (piVar4 != (int *)0x0) {
          if (0 < *piVar4) {
            lVar7 = 0;
            do {
              lVar2 = FUN_00663b4c(*(undefined8 *)(piVar4 + lVar7 * 2 + 2));
              piVar4 = *(int **)(lVar6 + 0x10);
              lVar7 = lVar7 + 1;
              lVar5 = lVar5 + lVar2 + 0x18;
            } while (lVar7 < *piVar4);
          }
          lVar5 = lVar5 + 8;
        }
        return lVar5 + 0x18;
      }
      if (iVar1 != 10) {
        return 0;
      }
      lVar6 = *param_1;
      piVar4 = *(int **)(lVar6 + 0x10);
      lVar5 = (long)*(int *)(lVar6 + 0xc) << 3;
      if (piVar4 != (int *)0x0) {
        if (0 < *piVar4) {
          lVar7 = 0;
          do {
            lVar2 = (**(code **)(**(long **)(piVar4 + lVar7 * 2 + 2) + 0x70))();
            piVar4 = *(int **)(lVar6 + 0x10);
            lVar7 = lVar7 + 1;
            lVar5 = lVar2 + lVar5;
          } while (lVar7 < *piVar4);
        }
        lVar5 = lVar5 + 8;
      }
      return lVar5 + 0x18;
    }
LAB_006d46e8:
    uVar3 = *(uint *)(*param_1 + 4);
    lVar5 = (ulong)uVar3 << 2;
  }
  lVar5 = lVar5 + 0x18;
  if ((int)uVar3 < 1) {
    lVar5 = 0x10;
  }
  return lVar5;
}


// ===== 006d47c4  FUN_006d47c4 =====

void FUN_006d47c4(undefined8 *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  long *plVar1;
  bool bVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  
  if (param_2 != param_3) {
    do {
      FUN_006d485c(param_4,(int)param_2[4],param_2 + 5);
      plVar1 = (long *)param_2[1];
      plVar4 = param_2;
      if ((long *)param_2[1] == (long *)0x0) {
        do {
          param_2 = (long *)plVar4[2];
          bVar2 = (long *)*param_2 != plVar4;
          plVar4 = param_2;
        } while (bVar2);
      }
      else {
        do {
          param_2 = plVar1;
          plVar1 = (long *)*param_2;
        } while ((long *)*param_2 != (long *)0x0);
      }
    } while (param_2 != param_3);
  }
  uVar5 = *param_4;
  uVar3 = param_4[2];
  param_1[1] = param_4[1];
  *param_1 = uVar5;
  param_1[2] = uVar3;
  return;
}


// ===== 006d485c  FUN_006d485c =====

void FUN_006d485c(undefined8 *param_1,undefined4 param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 uVar7;
  void *pvVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  void *pvVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long *plVar16;
  
  if (*(char *)(param_3 + 9) == '\0') {
    if ((*(byte *)(param_3 + 10) & 1) != 0) {
      return;
    }
  }
  else {
    iVar6 = FUN_00663fd4(param_3);
    if (iVar6 < 1) {
      return;
    }
  }
  lVar13 = *(long *)(param_3 + 0x10);
  puVar11 = *(undefined8 **)param_1[2];
  if (lVar13 == 0) {
    uVar7 = FUN_0068bfbc(param_1[1],*param_1,param_2);
    puVar5 = (undefined8 *)puVar11[1];
    if (puVar5 < (undefined8 *)puVar11[2]) {
      puVar14 = puVar5 + 1;
      *puVar5 = uVar7;
LAB_006d4a30:
      puVar11[1] = puVar14;
      return;
    }
    pvVar12 = (void *)*puVar11;
    lVar13 = (long)puVar5 - (long)pvVar12 >> 3;
    uVar1 = lVar13 + 1;
    if (uVar1 >> 0x3d == 0) {
      uVar9 = (long)puVar11[2] - (long)pvVar12;
      uVar10 = (long)uVar9 >> 2;
      if (uVar10 <= uVar1) {
        uVar10 = uVar1;
      }
      if (0x7ffffffffffffff7 < uVar9) {
        uVar10 = 0x1fffffffffffffff;
      }
      if (uVar10 == 0) {
        pvVar8 = (void *)0x0;
      }
      else {
        if (uVar10 >> 0x3d != 0) goto LAB_006d4a54;
        pvVar8 = (void *)FUN_00759c3c(uVar10 << 3);
      }
      puVar3 = (undefined8 *)((long)pvVar8 + lVar13 * 8);
      puVar14 = puVar3 + 1;
      *puVar3 = uVar7;
      memcpy(pvVar8,pvVar12,(long)puVar5 - (long)pvVar12);
      *puVar11 = pvVar8;
      puVar11[1] = puVar14;
      puVar11[2] = (void *)((long)pvVar8 + uVar10 * 8);
      if (pvVar12 != (void *)0x0) {
        free(pvVar12);
      }
      goto LAB_006d4a30;
    }
  }
  else {
    plVar4 = (long *)puVar11[1];
    if (plVar4 < (long *)puVar11[2]) {
      plVar16 = plVar4 + 1;
      *plVar4 = lVar13;
LAB_006d49e0:
      puVar11[1] = plVar16;
      return;
    }
    pvVar12 = (void *)*puVar11;
    lVar15 = (long)plVar4 - (long)pvVar12 >> 3;
    uVar1 = lVar15 + 1;
    if (uVar1 >> 0x3d == 0) {
      uVar9 = (long)puVar11[2] - (long)pvVar12;
      uVar10 = (long)uVar9 >> 2;
      if (uVar10 <= uVar1) {
        uVar10 = uVar1;
      }
      if (0x7ffffffffffffff7 < uVar9) {
        uVar10 = 0x1fffffffffffffff;
      }
      if (uVar10 == 0) {
        pvVar8 = (void *)0x0;
      }
      else {
        if (uVar10 >> 0x3d != 0) goto LAB_006d4a54;
        pvVar8 = (void *)FUN_00759c3c(uVar10 << 3);
      }
      plVar2 = (long *)((long)pvVar8 + lVar15 * 8);
      plVar16 = plVar2 + 1;
      *plVar2 = lVar13;
      memcpy(pvVar8,pvVar12,(long)plVar4 - (long)pvVar12);
      *puVar11 = pvVar8;
      puVar11[1] = plVar16;
      puVar11[2] = (void *)((long)pvVar8 + uVar10 * 8);
      if (pvVar12 != (void *)0x0) {
        free(pvVar12);
      }
      goto LAB_006d49e0;
    }
  }
  FUN_00685d28(puVar11);
LAB_006d4a54:
                    /* WARNING: Subroutine does not return */
  FUN_002f9ee0();
}


// ===== 006d4a58  FUN_006d4a58 =====

void FUN_006d4a58(long param_1,byte *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  long lVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined1 auVar12 [16];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70 [3];
  undefined2 local_58;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  bVar3 = *param_2;
  uVar9 = (uint)bVar3;
  if ((char)bVar3 < '\0') {
    auVar12 = FUN_0066fed4(param_2,bVar3);
    param_2 = auVar12._0_8_;
    uVar9 = auVar12._8_4_;
    if (param_2 == (byte *)0x0) goto LAB_006d4b58;
    uVar7 = *(undefined8 *)(param_1 + 8);
    iVar10 = (int)uVar7 - auVar12._0_4_;
    if (iVar10 < (int)uVar9) goto LAB_006d4acc;
  }
  else {
    param_2 = param_2 + 1;
    auVar12[8] = bVar3;
    auVar12._0_8_ = param_2;
    auVar12._9_7_ = 0;
    uVar7 = *(undefined8 *)(param_1 + 8);
    iVar10 = (int)uVar7 - (int)param_2;
    if (iVar10 < (int)(uint)bVar3) {
LAB_006d4acc:
      do {
        uStack_98 = param_3[1];
        local_a0 = *param_3;
        uStack_88 = param_3[3];
        uStack_90 = param_3[2];
        local_80 = param_3[4];
        param_2 = (byte *)FUN_006d4bdc(auVar12._0_8_,uVar7,&local_a0);
        if (param_2 == (byte *)0x0) goto LAB_006d4b58;
        puVar8 = *(undefined8 **)(param_1 + 8);
        iVar4 = auVar12._8_4_ - iVar10;
        iVar11 = (int)param_2 - (int)puVar8;
        if (iVar4 < 0x11) {
          local_58 = 0;
          local_70[2] = 0;
          uStack_c8 = param_3[1];
          local_d0 = *param_3;
          uStack_b8 = param_3[3];
          uStack_c0 = param_3[2];
          local_70[1] = puVar8[1];
          local_70[0] = *puVar8;
          local_b0 = param_3[4];
          lVar2 = (long)local_70 + (long)iVar4;
          lVar6 = FUN_006d4bdc((long)local_70 + (long)iVar11,lVar2,&local_d0);
          param_2 = (byte *)(*(long *)(param_1 + 8) + (lVar6 - (long)local_70));
          if (lVar6 != lVar2) {
            param_2 = (byte *)0x0;
          }
          goto LAB_006d4b58;
        }
        if (*(int *)(param_1 + 0x1c) < 0x11) {
          param_2 = (byte *)0x0;
          goto LAB_006d4b58;
        }
        param_2 = (byte *)FUN_0066f100(param_1);
        if (param_2 == (byte *)0x0) goto LAB_006d4b58;
        uVar7 = *(undefined8 *)(param_1 + 8);
        param_2 = param_2 + iVar11;
        uVar9 = (auVar12._8_4_ - iVar10) - iVar11;
        auVar12._8_4_ = uVar9;
        auVar12._0_8_ = param_2;
        auVar12._12_4_ = 0;
        iVar10 = (int)uVar7 - (int)param_2;
      } while (iVar10 < (int)uVar9);
    }
  }
  uStack_f8 = param_3[1];
  local_100 = *param_3;
  uStack_e8 = param_3[3];
  uStack_f0 = param_3[2];
  pbVar1 = param_2 + (int)uVar9;
  local_e0 = param_3[4];
  param_2 = (byte *)FUN_006d4bdc(param_2,pbVar1,&local_100);
  if (pbVar1 != param_2) {
    param_2 = (byte *)0x0;
  }
LAB_006d4b58:
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_2);
  }
  return;
}


// ===== 006d4bdc  FUN_006d4bdc =====

byte * FUN_006d4bdc(byte *param_1,byte *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  undefined1 auVar5 [12];
  long lVar6;
  ulong uVar7;
  uint *puVar8;
  undefined1 auVar9 [16];
  
  if (param_1 < param_2) {
    do {
      uVar7 = (ulong)(char)*param_1;
      auVar9._8_8_ = uVar7;
      auVar9._0_8_ = param_1 + 1;
      auVar5 = auVar9._0_12_;
      if ((long)uVar7 < 0) {
        bVar3 = param_1[1];
        iVar4 = (uint)bVar3 * 0x80 + (uint)*param_1 + -0x80;
        if ((char)bVar3 < '\0') {
          auVar9 = FUN_0066fd14(param_1,iVar4);
          auVar5 = auVar9._0_12_;
          if (auVar9._0_8_ == 0) {
            return (byte *)0x0;
          }
          uVar7 = (*(code *)param_3[1])(param_3[2]);
          goto joined_r0x006d4cc4;
        }
        auVar9._8_4_ = iVar4;
        auVar9._0_8_ = param_1 + 2;
        auVar9._12_4_ = 0;
        auVar5._8_4_ = iVar4;
        auVar5._0_8_ = param_1 + 2;
        uVar7 = (*(code *)param_3[1])(param_3[2],iVar4);
        if ((uVar7 & 1) == 0) goto LAB_006d4cc8;
LAB_006d4c80:
        param_1 = auVar5._0_8_;
        puVar8 = (uint *)*param_3;
        uVar1 = *puVar8;
        if (uVar1 == puVar8[1]) {
          FUN_00673968(puVar8,uVar1 + 1);
          *(int *)(*(long *)(puVar8 + 2) + (ulong)uVar1 * 4) = auVar5._8_4_;
          *puVar8 = uVar1 + 1;
        }
        else {
          *(int *)(*(long *)(puVar8 + 2) + (ulong)uVar1 * 4) = auVar5._8_4_;
          *puVar8 = uVar1 + 1;
        }
      }
      else {
        uVar7 = (*(code *)param_3[1])(param_3[2],uVar7 & 0xffffffff);
joined_r0x006d4cc4:
        if ((uVar7 & 1) != 0) goto LAB_006d4c80;
LAB_006d4cc8:
        param_1 = auVar9._0_8_;
        uVar2 = *(undefined4 *)(param_3 + 4);
        uVar7 = *(ulong *)param_3[3];
        if ((uVar7 & 1) == 0) {
          lVar6 = FUN_00661fa4((ulong *)param_3[3],uVar2);
        }
        else {
          lVar6 = (uVar7 & 0xfffffffffffffffc) + 8;
        }
        FUN_006faf8c(lVar6,uVar2,auVar9._8_8_);
      }
    } while (param_1 < param_2);
  }
  return param_1;
}


// ===== 006d4d18  FUN_006d4d18 =====

long * FUN_006d4d18(long *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  if (param_1 != param_2) {
    do {
      lVar2 = FUN_006d4580(param_1 + 5);
      plVar3 = (long *)param_1[1];
      *param_3 = *param_3 + lVar2;
      plVar4 = param_1;
      if (plVar3 == (long *)0x0) {
        do {
          param_1 = (long *)plVar4[2];
          bVar1 = (long *)*param_1 != plVar4;
          plVar4 = param_1;
        } while (bVar1);
      }
      else {
        do {
          param_1 = plVar3;
          plVar3 = (long *)*param_1;
        } while ((long *)*param_1 != (long *)0x0);
      }
    } while (param_1 != param_2);
  }
  return param_3;
}


// ===== 006d4da4  FUN_006d4da4 =====

uint FUN_006d4da4(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 uStack_151;
  undefined1 auStack_150 [48];
  undefined1 auStack_120 [216];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_006be080(auStack_120,0,0);
                    /* try { // try from 006d4de4 to 006d4e0b has its CatchHandler @ 006d4ea0 */
  uVar3 = FUN_0066ea3c(auStack_120,param_2,param_3);
  if ((uVar3 & 1) == 0) {
                    /* try { // try from 006d4e14 to 006d4e2b has its CatchHandler @ 006d4e9c */
    FUN_00675e64(auStack_150,2,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor_database.cc"
                 ,0x230);
                    /* try { // try from 006d4e2c to 006d4e3f has its CatchHandler @ 006d4e8c */
    uVar4 = FUN_00675a58(auStack_150,
                         "Invalid file descriptor data passed to EncodedDescriptorDatabase::Add().")
    ;
                    /* try { // try from 006d4e40 to 006d4e47 has its CatchHandler @ 006d4e88 */
    FUN_00675ac0(&uStack_151,uVar4);
    FUN_00675e7c(auStack_150);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_006d4ec8(*(undefined8 *)(param_1 + 8),auStack_120,param_2,param_3);
  }
  FUN_006be0e4(auStack_120);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006d4ec8  FUN_006d4ec8 =====

uint FUN_006d4ec8(long *param_1,long param_2,undefined8 param_3,uint param_4)

{
  bool bVar1;
  ulong uVar2;
  void *__s2;
  size_t __n;
  undefined8 *puVar3;
  void *pvVar4;
  byte bVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong extraout_x1;
  byte *pbVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  byte *pbVar15;
  undefined8 local_b0;
  uint uStack_a8;
  undefined4 uStack_a4;
  ulong local_a0;
  void *pvStack_98;
  void *local_90;
  byte *local_80;
  ulong uStack_78;
  undefined1 local_6c [4];
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  puVar3 = (undefined8 *)param_1[1];
  pvStack_98 = (void *)0x0;
  local_90 = (void *)0x0;
  local_a0 = 0;
  local_b0 = param_3;
  uStack_a8 = param_4;
  if (puVar3 < (undefined8 *)param_1[2]) {
    *(uint *)(puVar3 + 1) = param_4;
    *puVar3 = param_3;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    param_1[1] = (long)(puVar3 + 5);
  }
  else {
                    /* try { // try from 006d4f48 to 006d4f53 has its CatchHandler @ 006d55bc */
    lVar12 = FUN_006d7b34(param_1,&local_b0);
    param_1[1] = lVar12;
    if ((local_a0 & 1) != 0) {
      free(local_90);
    }
  }
  pbVar11 = (byte *)(*(ulong *)(param_2 + 0xb8) & 0xfffffffffffffffc);
  uVar10 = *(ulong *)(pbVar11 + 8);
  pbVar15 = *(byte **)(pbVar11 + 0x10);
  if ((*pbVar11 & 1) == 0) {
    pbVar15 = pbVar11 + 1;
    uVar10 = (ulong)(*pbVar11 >> 1);
  }
  if ((long)uVar10 < 0) {
    FUN_00676318(uVar10,"string length exceeds max size");
    goto LAB_006d54f0;
  }
  for (; uVar10 != 0; uVar10 = uVar10 - 1) {
LAB_006d54f0:
    bVar5 = *pbVar15;
    if ((((bVar5 != 0x2e) && (bVar5 != 0x5f)) && (bVar5 - 0x3a < 0xfffffff6)) &&
       ((bVar5 & 0xffffffdf) - 0x5b < 0xffffffe6)) {
      FUN_00675e64(&local_b0,2,
                   "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor_database.cc"
                   ,0x278);
                    /* try { // try from 006d5538 to 006d5557 has its CatchHandler @ 006d55b8 */
      uVar9 = FUN_00675a58(&local_b0,"Invalid package name: ");
      uVar9 = FUN_00675a80(uVar9,*(ulong *)(param_2 + 0xb8) & 0xfffffffffffffffc);
                    /* try { // try from 006d5558 to 006d555f has its CatchHandler @ 006d55b4 */
      FUN_00675ac0(&local_80,uVar9);
      goto LAB_006d5150;
    }
    pbVar15 = pbVar15 + 1;
  }
  pbVar11 = (byte *)(*(ulong *)(param_2 + 0xb8) & 0xfffffffffffffffc);
  uVar10 = *(ulong *)(pbVar11 + 8);
  pbVar15 = *(byte **)(pbVar11 + 0x10);
  if ((*pbVar11 & 1) == 0) {
    pbVar15 = pbVar11 + 1;
    uVar10 = (ulong)(*pbVar11 >> 1);
  }
  if ((long)uVar10 < 0) {
    FUN_00676318(uVar10,"string length exceeds max size");
  }
  local_80 = pbVar15;
  uStack_78 = uVar10;
  FUN_00675c30(&local_b0,&local_80);
  lVar12 = param_1[1];
  if ((*(byte *)(lVar12 + -0x18) & 1) != 0) {
    free(*(void **)(lVar12 + -8));
  }
  *(ulong *)(lVar12 + -8) = local_a0;
  *(ulong *)(lVar12 + -0x10) = CONCAT44(uStack_a4,uStack_a8);
  *(undefined8 *)(lVar12 + -0x18) = local_b0;
  local_b0 = CONCAT44(local_b0._4_4_,(int)((ulong)(param_1[1] - *param_1) >> 3) * -0x33333333 + -1);
  pbVar11 = (byte *)(*(ulong *)(param_2 + 0xb0) & 0xfffffffffffffffc);
  uVar10 = *(ulong *)(pbVar11 + 8);
  pbVar15 = *(byte **)(pbVar11 + 0x10);
  if ((*pbVar11 & 1) == 0) {
    pbVar15 = pbVar11 + 1;
    uVar10 = (ulong)(*pbVar11 >> 1);
  }
  if ((long)uVar10 < 0) {
    FUN_00676318(uVar10,"string length exceeds max size");
  }
  local_80 = pbVar15;
  uStack_78 = uVar10;
  FUN_00675c30(&uStack_a8,&local_80);
                    /* try { // try from 006d5044 to 006d5097 has its CatchHandler @ 006d55e4 */
  FUN_006d7ccc(param_1 + 3,&local_b0,&local_b0);
  if ((extraout_x1 & 1) == 0) {
    if ((uStack_a8 & 1) != 0) {
      free(pvStack_98);
    }
  }
  else {
    local_80 = (byte *)param_1[6];
    lVar14 = param_1[8];
    local_6c[0] = 0;
    pbVar15 = (byte *)(*(ulong *)(param_2 + 0xb0) & 0xfffffffffffffffc);
    lVar12 = FUN_006d800c(param_1[7],lVar14,pbVar15,&local_80,local_6c);
    if (lVar14 == lVar12) {
LAB_006d50f8:
      bVar1 = false;
    }
    else {
      uVar10 = *(ulong *)(pbVar15 + 8);
      pbVar11 = *(byte **)(pbVar15 + 0x10);
      if ((*pbVar15 & 1) == 0) {
        pbVar11 = pbVar15 + 1;
        uVar10 = (ulong)(*pbVar15 >> 1);
      }
      if ((long)uVar10 < 0) {
                    /* try { // try from 006d558c to 006d55af has its CatchHandler @ 006d55e4 */
        FUN_00676318(uVar10,"string length exceeds max size");
      }
      bVar5 = *(byte *)(lVar12 + 8);
      pvVar4 = *(void **)(lVar12 + 0x18);
      uVar2 = (ulong)(bVar5 >> 1);
      if ((bVar5 & 1) != 0) {
        uVar2 = *(ulong *)(lVar12 + 0x10);
      }
      if ((long)uVar2 < 0) {
        FUN_00676318(uVar2,"string length exceeds max size");
      }
      __s2 = (void *)(lVar12 + 9);
      if ((bVar5 & 1) != 0) {
        __s2 = pvVar4;
      }
      __n = uVar10;
      if (uVar2 <= uVar10) {
        __n = uVar2;
      }
      iVar7 = memcmp(pbVar11,__s2,__n);
      if (iVar7 < 0) goto LAB_006d50f8;
      bVar1 = uVar2 <= uVar10 || iVar7 != 0;
    }
    if ((uStack_a8 & 1) != 0) {
      free(pvStack_98);
    }
    if (!bVar1) {
      plVar13 = (long *)0x0;
      if (*(long *)(param_2 + 0x40) != 0) {
        plVar13 = (long *)(*(long *)(param_2 + 0x40) + 8);
      }
      if (*(int *)(param_2 + 0x38) != 0) {
        lVar12 = (long)*(int *)(param_2 + 0x38) << 3;
        do {
          lVar14 = *plVar13;
          pbVar11 = (byte *)(*(ulong *)(lVar14 + 0xd8) & 0xfffffffffffffffc);
          uVar10 = *(ulong *)(pbVar11 + 8);
          pbVar15 = *(byte **)(pbVar11 + 0x10);
          if ((*pbVar11 & 1) == 0) {
            pbVar15 = pbVar11 + 1;
            uVar10 = (ulong)(*pbVar11 >> 1);
          }
          if ((long)uVar10 < 0) {
            FUN_00676318(uVar10,"string length exceeds max size");
            uVar10 = FUN_006d5f44(param_1,pbVar15,uVar10);
          }
          else {
            uVar10 = FUN_006d5f44(param_1,pbVar15);
          }
          if ((uVar10 & 1) == 0) goto LAB_006d5158;
          pbVar11 = (byte *)(*(ulong *)(param_2 + 0xb0) & 0xfffffffffffffffc);
          uVar10 = *(ulong *)(pbVar11 + 8);
          pbVar15 = *(byte **)(pbVar11 + 0x10);
          if ((*pbVar11 & 1) == 0) {
            pbVar15 = pbVar11 + 1;
            uVar10 = (ulong)(*pbVar11 >> 1);
          }
          if ((long)uVar10 < 0) {
            FUN_00676318(uVar10,"string length exceeds max size");
            uVar10 = FUN_006d7680(param_1,pbVar15,uVar10,lVar14);
          }
          else {
            uVar10 = FUN_006d7680(param_1,pbVar15,uVar10,lVar14);
          }
          if ((uVar10 & 1) == 0) goto LAB_006d5158;
          lVar12 = lVar12 + -8;
          plVar13 = plVar13 + 1;
        } while (lVar12 != 0);
      }
      plVar13 = (long *)0x0;
      if (*(long *)(param_2 + 0x58) != 0) {
        plVar13 = (long *)(*(long *)(param_2 + 0x58) + 8);
      }
      if (*(int *)(param_2 + 0x50) != 0) {
        lVar12 = (long)*(int *)(param_2 + 0x50) << 3;
        do {
          pbVar11 = (byte *)(*(ulong *)(*plVar13 + 0x60) & 0xfffffffffffffffc);
          uVar10 = *(ulong *)(pbVar11 + 8);
          pbVar15 = *(byte **)(pbVar11 + 0x10);
          if ((*pbVar11 & 1) == 0) {
            pbVar15 = pbVar11 + 1;
            uVar10 = (ulong)(*pbVar11 >> 1);
          }
          if ((long)uVar10 < 0) {
            FUN_00676318(uVar10,"string length exceeds max size");
            uVar10 = FUN_006d5f44(param_1,pbVar15,uVar10);
          }
          else {
            uVar10 = FUN_006d5f44(param_1,pbVar15);
          }
          if ((uVar10 & 1) == 0) goto LAB_006d5158;
          lVar12 = lVar12 + -8;
          plVar13 = plVar13 + 1;
        } while (lVar12 != 0);
      }
      plVar13 = (long *)0x0;
      if (*(long *)(param_2 + 0x88) != 0) {
        plVar13 = (long *)(*(long *)(param_2 + 0x88) + 8);
      }
      if (*(int *)(param_2 + 0x80) != 0) {
        lVar12 = (long)*(int *)(param_2 + 0x80) << 3;
        do {
          lVar14 = *plVar13;
          pbVar11 = (byte *)(*(ulong *)(lVar14 + 0x18) & 0xfffffffffffffffc);
          uVar10 = *(ulong *)(pbVar11 + 8);
          pbVar15 = *(byte **)(pbVar11 + 0x10);
          if ((*pbVar11 & 1) == 0) {
            pbVar15 = pbVar11 + 1;
            uVar10 = (ulong)(*pbVar11 >> 1);
          }
          if ((long)uVar10 < 0) {
            FUN_00676318(uVar10,"string length exceeds max size");
            uVar10 = FUN_006d5f44(param_1,pbVar15,uVar10);
          }
          else {
            uVar10 = FUN_006d5f44(param_1,pbVar15);
          }
          if ((uVar10 & 1) == 0) goto LAB_006d5158;
          pbVar11 = (byte *)(*(ulong *)(param_2 + 0xb0) & 0xfffffffffffffffc);
          uVar10 = *(ulong *)(pbVar11 + 8);
          pbVar15 = *(byte **)(pbVar11 + 0x10);
          if ((*pbVar11 & 1) == 0) {
            pbVar15 = pbVar11 + 1;
            uVar10 = (ulong)(*pbVar11 >> 1);
          }
          if ((long)uVar10 < 0) {
            FUN_00676318(uVar10,"string length exceeds max size");
            uVar10 = FUN_006d7774(param_1,pbVar15,uVar10,lVar14);
          }
          else {
            uVar10 = FUN_006d7774(param_1,pbVar15,uVar10,lVar14);
          }
          if ((uVar10 & 1) == 0) goto LAB_006d5158;
          lVar12 = lVar12 + -8;
          plVar13 = plVar13 + 1;
        } while (lVar12 != 0);
      }
      plVar13 = (long *)0x0;
      if (*(long *)(param_2 + 0x70) != 0) {
        plVar13 = (long *)(*(long *)(param_2 + 0x70) + 8);
      }
      if (*(int *)(param_2 + 0x68) == 0) {
        uVar8 = 1;
      }
      else {
        lVar12 = (long)*(int *)(param_2 + 0x68) * 8;
        do {
          lVar12 = lVar12 + -8;
          pbVar11 = (byte *)(*(ulong *)(*plVar13 + 0x30) & 0xfffffffffffffffc);
          uVar10 = *(ulong *)(pbVar11 + 8);
          pbVar15 = *(byte **)(pbVar11 + 0x10);
          if ((*pbVar11 & 1) == 0) {
            pbVar15 = pbVar11 + 1;
            uVar10 = (ulong)(*pbVar11 >> 1);
          }
          if ((long)uVar10 < 0) {
            FUN_00676318(uVar10,"string length exceeds max size");
            uVar8 = FUN_006d5f44(param_1,pbVar15,uVar10);
          }
          else {
            uVar8 = FUN_006d5f44(param_1,pbVar15);
          }
        } while (((uVar8 & 1) != 0) && (plVar13 = plVar13 + 1, lVar12 != 0));
      }
      goto LAB_006d515c;
    }
  }
  FUN_00675e64(&local_b0,2,
               "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor_database.cc"
               ,0x282);
                    /* try { // try from 006d5128 to 006d5147 has its CatchHandler @ 006d55d4 */
  uVar9 = FUN_00675a58(&local_b0,"File already exists in database: ");
  uVar9 = FUN_00675a80(uVar9,*(ulong *)(param_2 + 0xb0) & 0xfffffffffffffffc);
                    /* try { // try from 006d5148 to 006d514f has its CatchHandler @ 006d55d0 */
  FUN_00675ac0(&local_80,uVar9);
LAB_006d5150:
  FUN_00675e7c(&local_b0);
LAB_006d5158:
  uVar8 = 0;
LAB_006d515c:
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return uVar8 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006d5614  FUN_006d5614 =====

void FUN_006d5614(long param_1,byte *param_2,undefined8 param_3)

{
  ulong uVar1;
  byte *pbVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  uVar1 = *(ulong *)(param_2 + 8);
  pbVar2 = *(byte **)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  if ((*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
    uVar1 = (ulong)(*param_2 >> 1);
  }
  if ((long)uVar1 < 0) {
    FUN_00676318(uVar1,"string length exceeds max size");
    auVar4 = FUN_006d56b4(uVar3,pbVar2,uVar1);
  }
  else {
    auVar4 = FUN_006d56b4(uVar3,pbVar2);
  }
  if (auVar4._0_8_ == 0) {
    return;
  }
  FUN_0066ea3c(param_3,auVar4._0_8_,auVar4._8_8_);
  return;
}


// ===== 006d56b4  FUN_006d56b4 =====

undefined1  [16] FUN_006d56b4(long *param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  void *pvVar2;
  size_t __n;
  void *pvVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int *piVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  
  FUN_006d6a24();
  piVar8 = (int *)param_1[7];
  if (param_1[8] - (long)piVar8 != 0) {
    uVar9 = param_1[8] - (long)piVar8 >> 5;
    do {
      uVar10 = uVar9 >> 1;
      bVar4 = *(byte *)(piVar8 + uVar10 * 8 + 2);
      pvVar3 = *(void **)(piVar8 + uVar10 * 8 + 6);
      uVar1 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        uVar1 = *(ulong *)(piVar8 + uVar10 * 8 + 4);
      }
      if ((long)uVar1 < 0) {
        FUN_00676318(uVar1,"string length exceeds max size");
      }
      pvVar2 = (void *)((long)piVar8 + uVar10 * 0x20 + 9);
      if ((bVar4 & 1) != 0) {
        pvVar2 = pvVar3;
      }
      __n = uVar1;
      if (param_3 <= uVar1) {
        __n = param_3;
      }
      iVar5 = memcmp(pvVar2,param_2,__n);
      if ((iVar5 < 0) || (uVar1 < param_3 && iVar5 == 0)) {
        piVar8 = piVar8 + uVar10 * 8 + 8;
        uVar10 = uVar9 + ~uVar10;
      }
      uVar9 = uVar10;
    } while (uVar9 != 0);
    if (piVar8 != (int *)param_1[8]) {
      bVar4 = *(byte *)(piVar8 + 2);
      pvVar3 = *(void **)(piVar8 + 6);
      uVar9 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        uVar9 = *(ulong *)(piVar8 + 4);
      }
      if ((long)uVar9 < 0) {
        FUN_00676318(uVar9,"string length exceeds max size");
        pvVar2 = (void *)((long)piVar8 + 9);
        if ((bVar4 & 1) != 0) {
          pvVar2 = pvVar3;
        }
      }
      else {
        pvVar2 = (void *)((long)piVar8 + 9);
        if ((bVar4 & 1) != 0) {
          pvVar2 = pvVar3;
        }
      }
      if ((uVar9 == param_3) &&
         (((param_3 == 0 || (pvVar2 == param_2)) ||
          (iVar5 = memcmp(pvVar2,param_2,param_3), iVar5 == 0)))) {
        puVar7 = (undefined8 *)(*param_1 + (long)*piVar8 * 0x28);
        uVar6 = *puVar7;
        uVar9 = (ulong)*(uint *)(puVar7 + 1);
        goto LAB_006d57c8;
      }
    }
  }
  uVar6 = 0;
  uVar9 = 0;
LAB_006d57c8:
  auVar11._8_8_ = uVar9;
  auVar11._0_8_ = uVar6;
  return auVar11;
}


// ===== 006d582c  FUN_006d582c =====

void FUN_006d582c(long param_1,byte *param_2,undefined8 param_3)

{
  ulong uVar1;
  byte *pbVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  uVar1 = *(ulong *)(param_2 + 8);
  pbVar2 = *(byte **)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  if ((*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
    uVar1 = (ulong)(*param_2 >> 1);
  }
  if ((long)uVar1 < 0) {
    FUN_00676318(uVar1,"string length exceeds max size");
  }
  FUN_006d6a24(uVar3);
  auVar4 = FUN_006d6f88(uVar3,pbVar2,uVar1);
  if (auVar4._0_8_ != 0) {
    FUN_0066ea3c(param_3,auVar4._0_8_,auVar4._8_8_);
    return;
  }
  return;
}


// ===== 006d58c0  FUN_006d58c0 =====

void FUN_006d58c0(long param_1,byte *param_2,undefined4 param_3,undefined8 param_4)

{
  ulong uVar1;
  byte *pbVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  uVar1 = *(ulong *)(param_2 + 8);
  pbVar2 = *(byte **)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  if ((*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
    uVar1 = (ulong)(*param_2 >> 1);
  }
  if ((long)uVar1 < 0) {
    FUN_00676318(uVar1,"string length exceeds max size");
    auVar4 = FUN_006d5978(uVar3,pbVar2,uVar1,param_3);
  }
  else {
    auVar4 = FUN_006d5978(uVar3,pbVar2,uVar1,param_3);
  }
  if (auVar4._0_8_ == 0) {
    return;
  }
  FUN_0066ea3c(param_4,auVar4._0_8_,auVar4._8_8_);
  return;
}


// ===== 006d5978  FUN_006d5978 =====

void FUN_006d5978(long *param_1,void *param_2,size_t param_3,int param_4)

{
  size_t sVar1;
  void *pvVar2;
  byte bVar3;
  long lVar4;
  int *piVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  int *piVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  long local_88;
  void *local_80;
  size_t sStack_78;
  int local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  FUN_006d6a24();
  piVar11 = (int *)param_1[0x15];
  local_88 = param_1[0x14];
  if (param_1[0x16] - (long)piVar11 != 0) {
    uVar12 = (param_1[0x16] - (long)piVar11 >> 3) * -0x3333333333333333;
    do {
      uVar13 = uVar12 >> 1;
      local_80 = param_2;
      sStack_78 = param_3;
      local_70 = param_4;
      uVar7 = FUN_006d8758(&local_88,piVar11 + uVar13 * 10,&local_80);
      uVar12 = uVar12 + ~uVar13;
      piVar5 = piVar11 + uVar13 * 10 + 10;
      if ((uVar7 & 1) == 0) {
        uVar12 = uVar13;
        piVar5 = piVar11;
      }
      piVar11 = piVar5;
    } while (uVar12 != 0);
    if (piVar11 != (int *)param_1[0x16]) {
      bVar3 = *(byte *)(piVar11 + 2);
      pvVar2 = *(void **)(piVar11 + 6);
      sVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        sVar1 = *(size_t *)(piVar11 + 4);
      }
      if ((long)sVar1 < 0) {
        FUN_00676318(sVar1,"string length exceeds max size");
      }
      local_80 = (void *)((long)piVar11 + 9);
      if ((bVar3 & 1) != 0) {
        local_80 = pvVar2;
      }
      sStack_78 = sVar1;
      auVar14 = FUN_006766cc(&local_80,1,*(undefined8 *)PTR_DAT_007a32a0);
      if (((auVar14._8_8_ == param_3) &&
          (((param_3 == 0 || (auVar14._0_8_ == param_2)) ||
           (iVar6 = memcmp(auVar14._0_8_,param_2,param_3), iVar6 == 0)))) && (piVar11[8] == param_4)
         ) {
        puVar10 = (undefined8 *)(*param_1 + (long)*piVar11 * 0x28);
        uVar8 = *puVar10;
        uVar9 = *(undefined4 *)(puVar10 + 1);
        goto LAB_006d5ac4;
      }
    }
  }
  uVar8 = 0;
  uVar9 = 0;
LAB_006d5ac4:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8,uVar9);
  }
  return;
}


// ===== 006d5b0c  FUN_006d5b0c =====

void FUN_006d5b0c(long param_1,byte *param_2,undefined8 param_3)

{
  ulong uVar1;
  byte *pbVar2;
  byte bVar3;
  undefined8 uVar4;
  
  bVar3 = *param_2;
  pbVar2 = *(byte **)(param_2 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 8);
  }
  if ((long)uVar1 < 0) {
    FUN_00676318(uVar1,"string length exceeds max size");
  }
  if ((bVar3 & 1) == 0) {
    pbVar2 = param_2 + 1;
  }
  FUN_006d5b8c(uVar4,pbVar2,uVar1,param_3);
  return;
}


// ===== 006d5b8c  FUN_006d5b8c =====

undefined4 FUN_006d5b8c(long param_1,void *param_2,size_t param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  size_t sVar2;
  undefined4 *puVar3;
  byte bVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  ulong uVar8;
  void *pvVar9;
  long lVar10;
  long lVar11;
  undefined4 uVar12;
  ulong uVar13;
  undefined4 *puVar14;
  void *pvVar15;
  ulong uVar16;
  undefined1 auVar17 [16];
  undefined8 local_88;
  void *local_80;
  size_t sStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  FUN_006d6a24();
  lVar11 = *(long *)(param_1 + 0xa8);
  local_88 = *(undefined8 *)(param_1 + 0xa0);
  lVar10 = *(long *)(param_1 + 0xb0) - lVar11;
  if (lVar10 == 0) {
LAB_006d5ca8:
    uVar12 = 0;
  }
  else {
    uVar13 = (lVar10 >> 3) * -0x3333333333333333;
    do {
      uVar16 = uVar13 >> 1;
      lVar10 = lVar11 + uVar16 * 0x28;
      local_70 = 0;
      local_80 = param_2;
      sStack_78 = param_3;
      uVar8 = FUN_006d8758(&local_88,lVar10,&local_80);
      uVar6 = DAT_0020fb88;
      uVar13 = uVar13 + ~uVar16;
      lVar10 = lVar10 + 0x28;
      if ((uVar8 & 1) == 0) {
        uVar13 = uVar16;
        lVar10 = lVar11;
      }
      lVar11 = lVar10;
    } while (uVar13 != 0);
    if (lVar11 == *(long *)(param_1 + 0xb0)) goto LAB_006d5ca8;
    bVar4 = *(byte *)(lVar11 + 8);
    pvVar15 = *(void **)(lVar11 + 0x18);
    sVar2 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      sVar2 = *(size_t *)(lVar11 + 0x10);
    }
    if ((long)sVar2 < 0) {
      FUN_00676318(sVar2,"string length exceeds max size");
    }
    local_80 = (void *)(lVar11 + 9);
    if ((bVar4 & 1) != 0) {
      local_80 = pvVar15;
    }
    sStack_78 = sVar2;
    auVar17 = FUN_006766cc(&local_80,1);
    if ((auVar17._8_8_ != param_3) ||
       (((param_3 != 0 && (auVar17._0_8_ != param_2)) &&
        (iVar7 = memcmp(auVar17._0_8_,param_2,param_3), iVar7 != 0)))) goto LAB_006d5ca8;
    puVar3 = (undefined4 *)param_4[1];
    if (puVar3 < (undefined4 *)param_4[2]) {
      puVar14 = puVar3 + 1;
      *puVar3 = *(undefined4 *)(lVar11 + 0x20);
    }
    else {
      pvVar15 = (void *)*param_4;
      lVar10 = (long)puVar3 - (long)pvVar15 >> 2;
      uVar13 = lVar10 + 1;
      if (uVar13 >> 0x3e != 0) {
LAB_006d5f10:
        if (*(long *)(lVar5 + 0x28) != local_68) goto LAB_006d5f40;
        FUN_004b6308(param_4);
LAB_006d5f28:
        if (*(long *)(lVar5 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_002f9ee0();
        }
        goto LAB_006d5f40;
      }
      uVar16 = (long)param_4[2] - (long)pvVar15;
      uVar8 = (long)uVar16 >> 1;
      if (uVar8 <= uVar13) {
        uVar8 = uVar13;
      }
      if (0x7ffffffffffffffb < uVar16) {
        uVar8 = 0x3fffffffffffffff;
      }
      if (uVar8 == 0) {
        pvVar9 = (void *)0x0;
      }
      else {
        if (uVar8 >> 0x3e != 0) goto LAB_006d5f28;
        pvVar9 = (void *)FUN_00759c3c(uVar8 << 2);
      }
      puVar1 = (undefined4 *)((long)pvVar9 + lVar10 * 4);
      puVar14 = puVar1 + 1;
      *puVar1 = *(undefined4 *)(lVar11 + 0x20);
      memcpy(pvVar9,pvVar15,(long)puVar3 - (long)pvVar15);
      *param_4 = pvVar9;
      param_4[1] = puVar14;
      param_4[2] = (void *)((long)pvVar9 + uVar8 * 4);
      if (pvVar15 != (void *)0x0) {
        free(pvVar15);
      }
    }
    param_4[1] = puVar14;
    lVar11 = lVar11 + 0x28;
    if (lVar11 != *(long *)(param_1 + 0xb0)) {
      do {
        while( true ) {
          bVar4 = *(byte *)(lVar11 + 8);
          pvVar15 = *(void **)(lVar11 + 0x18);
          sVar2 = (ulong)(bVar4 >> 1);
          if ((bVar4 & 1) != 0) {
            sVar2 = *(size_t *)(lVar11 + 0x10);
          }
          if ((long)sVar2 < 0) {
            FUN_00676318(sVar2,"string length exceeds max size");
          }
          local_80 = (void *)(lVar11 + 9);
          if ((bVar4 & 1) != 0) {
            local_80 = pvVar15;
          }
          uVar12 = 1;
          sStack_78 = sVar2;
          auVar17 = FUN_006766cc(&local_80,1,uVar6);
          if (auVar17._8_8_ != param_3) goto LAB_006d5cac;
          if (((param_3 != 0) && (auVar17._0_8_ != param_2)) &&
             (iVar7 = memcmp(auVar17._0_8_,param_2,param_3), iVar7 != 0)) goto LAB_006d5eec;
          puVar3 = (undefined4 *)param_4[1];
          if (puVar3 < (undefined4 *)param_4[2]) break;
          pvVar15 = (void *)*param_4;
          lVar10 = (long)puVar3 - (long)pvVar15 >> 2;
          uVar13 = lVar10 + 1;
          if (uVar13 >> 0x3e != 0) goto LAB_006d5f10;
          uVar16 = (long)param_4[2] - (long)pvVar15;
          uVar8 = (long)uVar16 >> 1;
          if (uVar8 <= uVar13) {
            uVar8 = uVar13;
          }
          if (0x7ffffffffffffffb < uVar16) {
            uVar8 = 0x3fffffffffffffff;
          }
          if (uVar8 == 0) {
            pvVar9 = (void *)0x0;
          }
          else {
            if (uVar8 >> 0x3e != 0) goto LAB_006d5f28;
            pvVar9 = (void *)FUN_00759c3c(uVar8 << 2);
          }
          puVar1 = (undefined4 *)((long)pvVar9 + lVar10 * 4);
          puVar14 = puVar1 + 1;
          *puVar1 = *(undefined4 *)(lVar11 + 0x20);
          memcpy(pvVar9,pvVar15,(long)puVar3 - (long)pvVar15);
          *param_4 = pvVar9;
          param_4[1] = puVar14;
          param_4[2] = (void *)((long)pvVar9 + uVar8 * 4);
          if (pvVar15 != (void *)0x0) {
            free(pvVar15);
          }
          param_4[1] = puVar14;
          lVar11 = lVar11 + 0x28;
          if (lVar11 == *(long *)(param_1 + 0xb0)) goto LAB_006d5eec;
        }
        *puVar3 = *(undefined4 *)(lVar11 + 0x20);
        param_4[1] = puVar3 + 1;
        lVar11 = lVar11 + 0x28;
      } while (lVar11 != *(long *)(param_1 + 0xb0));
    }
LAB_006d5eec:
    uVar12 = 1;
  }
LAB_006d5cac:
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return uVar12;
  }
LAB_006d5f40:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006d5f44  FUN_006d5f44 =====

undefined4 FUN_006d5f44(long *param_1,byte *param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  undefined1 *puVar3;
  byte bVar4;
  long lVar5;
  undefined1 *puVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined4 uVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  long *plVar19;
  byte local_108;
  undefined1 auStack_107 [7];
  ulong local_100;
  undefined1 *local_f8;
  int local_f0 [2];
  byte local_e8 [16];
  void *local_d8;
  undefined1 uStack_c9;
  byte local_c8 [16];
  void *local_b8;
  undefined8 local_b0;
  ulong local_a8;
  undefined1 *local_a0;
  undefined1 *local_80;
  ulong uStack_78;
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  local_f0[0] = (int)((ulong)(param_1[1] - *param_1) >> 3) * -0x33333333 + -1;
  local_b0 = param_2;
  local_a8 = param_3;
  FUN_00675c30(local_e8,&local_b0);
                    /* try { // try from 006d5fb0 to 006d5fbf has its CatchHandler @ 006d68a8 */
  FUN_006d6900(&local_108,local_f0,param_1);
  if (param_3 != 0) {
    do {
      bVar4 = *param_2;
      if ((((bVar4 != 0x2e) && (bVar4 != 0x5f)) && (bVar4 - 0x3a < 0xfffffff6)) &&
         ((bVar4 & 0xffffffdf) - 0x5b < 0xffffffe6)) {
                    /* try { // try from 006d601c to 006d6033 has its CatchHandler @ 006d684c */
        FUN_00675e64(&local_b0,2,
                     "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor_database.cc"
                     ,0x2c0);
                    /* try { // try from 006d6034 to 006d604f has its CatchHandler @ 006d6868 */
        uVar10 = FUN_00675a58(&local_b0,"Invalid symbol name: ");
        uVar10 = FUN_00675a80(uVar10,&local_108);
                    /* try { // try from 006d6050 to 006d6057 has its CatchHandler @ 006d6848 */
        FUN_00675ac0(local_c8,uVar10);
        goto LAB_006d6678;
      }
      param_3 = param_3 - 1;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  plVar16 = param_1 + 0xb;
  plVar17 = plVar16;
  for (plVar15 = (long *)*plVar16; plVar15 != (long *)0x0;
      plVar15 = *(long **)((long)plVar15 + lVar13)) {
                    /* try { // try from 006d606c to 006d607b has its CatchHandler @ 006d68c4 */
    uVar9 = FUN_006d88a8(param_1 + 0xd,local_f0,plVar15 + 4);
    if ((uVar9 & 1) == 0) {
      lVar13 = 8;
    }
    else {
      lVar13 = 0;
    }
    plVar19 = plVar15;
    if ((uVar9 & 1) == 0) {
      plVar19 = plVar17;
    }
    plVar17 = plVar19;
  }
  if (plVar17 != (long *)param_1[10]) {
    plVar15 = plVar17;
    plVar19 = (long *)*plVar17;
    if ((long *)*plVar17 == (long *)0x0) {
      do {
        plVar17 = (long *)plVar15[2];
        bVar7 = (long *)*plVar17 == plVar15;
        plVar15 = plVar17;
      } while (bVar7);
    }
    else {
      do {
        plVar17 = plVar19;
        plVar19 = (long *)plVar17[1];
      } while ((long *)plVar17[1] != (long *)0x0);
    }
  }
  uVar9 = local_100;
  puVar3 = local_f8;
  if ((local_108 & 1) == 0) {
    uVar9 = (ulong)(local_108 >> 1);
    puVar3 = auStack_107;
  }
  if ((long)uVar9 < 0) {
                    /* try { // try from 006d6758 to 006d6767 has its CatchHandler @ 006d68bc */
    FUN_00676318(uVar9,"string length exceeds max size");
  }
  local_80 = puVar3;
  uStack_78 = uVar9;
  if (plVar17 == plVar16) {
LAB_006d639c:
    lVar12 = param_1[0xe];
    local_b0 = (byte *)param_1[0xd];
    lVar13 = lVar12;
    if (param_1[0xf] - lVar12 != 0) {
      uVar9 = param_1[0xf] - lVar12 >> 5;
      do {
        uVar18 = uVar9 >> 1;
        lVar12 = lVar13 + uVar18 * 0x20;
                    /* try { // try from 006d63bc to 006d63cb has its CatchHandler @ 006d68c0 */
        uVar11 = FUN_006d88a8(&local_b0,local_f0,lVar12);
        uVar1 = uVar9 + ~uVar18;
        uVar9 = uVar18;
        if ((uVar11 & 1) == 0) {
          uVar9 = uVar1;
          lVar13 = lVar12 + 0x20;
        }
      } while (uVar9 != 0);
      lVar12 = param_1[0xe];
    }
    lVar2 = 0;
    if (lVar13 != lVar12) {
      lVar2 = -0x20;
    }
    puVar3 = (undefined1 *)((ulong)&local_108 | 1);
    uVar9 = (ulong)(local_108 >> 1);
    if ((local_108 & 1) != 0) {
      puVar3 = local_f8;
      uVar9 = local_100;
    }
    if ((long)uVar9 < 0) {
                    /* try { // try from 006d6780 to 006d678f has its CatchHandler @ 006d68a4 */
      FUN_00676318(uVar9,"string length exceeds max size");
    }
    lVar12 = param_1[0xf];
    lVar13 = lVar13 + lVar2;
    local_80 = puVar3;
    uStack_78 = uVar9;
    if (lVar13 != lVar12) {
                    /* try { // try from 006d6434 to 006d64f3 has its CatchHandler @ 006d68a4 */
      FUN_006d6900(&local_b0,lVar13,param_1);
      uVar9 = local_a8;
      puVar3 = local_a0;
      if (((ulong)local_b0 & 1) == 0) {
        uVar9 = (ulong)local_b0 >> 1 & 0x7f;
        puVar3 = (undefined1 *)((long)&local_b0 + 1);
      }
      if ((long)uVar9 < 0) {
                    /* try { // try from 006d6794 to 006d67a3 has its CatchHandler @ 006d67d8 */
        FUN_00676318(uVar9,"string length exceeds max size");
      }
      uVar1 = uStack_78;
      puVar6 = local_80;
      if ((uVar9 != uStack_78) ||
         (((bVar7 = true, uVar9 != 0 && (puVar3 != local_80)) &&
          (iVar8 = memcmp(puVar3,local_80,uVar9), iVar8 != 0)))) {
        if (uVar1 < uVar9) {
          bVar7 = false;
        }
        else {
          iVar8 = memcmp(puVar6,puVar3,uVar9);
          if (iVar8 == 0) {
            bVar7 = puVar6[uVar9] == '.';
          }
          else {
            bVar7 = false;
          }
        }
      }
      if (((ulong)local_b0 & 1) != 0) {
        free(local_a0);
      }
      uVar9 = uStack_78;
      puVar3 = local_80;
      if (bVar7) {
        FUN_00675e64(&local_b0,2,
                     "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor_database.cc"
                     ,0x29d);
                    /* try { // try from 006d64f4 to 006d6517 has its CatchHandler @ 006d6870 */
        uVar10 = FUN_00675a58(&local_b0,"Symbol name \"");
        uVar10 = FUN_00675b74(uVar10,&local_80);
        uVar10 = FUN_00675a58(uVar10,"\" conflicts with the existing symbol \"");
                    /* try { // try from 006d6518 to 006d652b has its CatchHandler @ 006d6844 */
        FUN_006d6900(local_c8,lVar13,param_1);
                    /* try { // try from 006d652c to 006d6547 has its CatchHandler @ 006d6864 */
        uVar10 = FUN_00675a80(uVar10,local_c8);
        uVar10 = FUN_00675a58(uVar10,&DAT_001f097e);
                    /* try { // try from 006d6548 to 006d654f has its CatchHandler @ 006d6840 */
        FUN_00675ac0(&uStack_c9,uVar10);
        goto LAB_006d6668;
      }
      lVar13 = lVar13 + 0x20;
      if (lVar13 != lVar12) {
                    /* try { // try from 006d6564 to 006d660b has its CatchHandler @ 006d68a4 */
        FUN_006d6900(&local_b0,lVar13,param_1);
        uVar1 = local_a8;
        puVar6 = local_a0;
        if (((ulong)local_b0 & 1) == 0) {
          uVar1 = (ulong)local_b0 >> 1 & 0x7f;
          puVar6 = (undefined1 *)((long)&local_b0 + 1);
        }
        if ((long)uVar1 < 0) {
                    /* try { // try from 006d67bc to 006d67cb has its CatchHandler @ 006d67d0 */
          FUN_00676318(uVar1,"string length exceeds max size");
        }
        if ((uVar9 != uVar1) ||
           (((bVar7 = true, uVar9 != 0 && (puVar6 != puVar3)) &&
            (iVar8 = memcmp(puVar3,puVar6,uVar9), iVar8 != 0)))) {
          if ((uVar1 < uVar9) || (iVar8 = memcmp(puVar6,puVar3,uVar9), iVar8 != 0)) {
            bVar7 = false;
          }
          else {
            bVar7 = puVar6[uVar9] == '.';
          }
        }
        if (((ulong)local_b0 & 1) != 0) {
          free(local_a0);
        }
        if (bVar7) {
          FUN_00675e64(&local_b0,2,
                       "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor_database.cc"
                       ,0x2ab);
                    /* try { // try from 006d660c to 006d662f has its CatchHandler @ 006d683c */
          uVar10 = FUN_00675a58(&local_b0,"Symbol name \"");
          uVar10 = FUN_00675b74(uVar10,&local_80);
          uVar10 = FUN_00675a58(uVar10,"\" conflicts with the existing symbol \"");
                    /* try { // try from 006d6630 to 006d6643 has its CatchHandler @ 006d682c */
          FUN_006d6900(local_c8,lVar13,param_1);
                    /* try { // try from 006d6644 to 006d665f has its CatchHandler @ 006d6838 */
          uVar10 = FUN_00675a80(uVar10,local_c8);
          uVar10 = FUN_00675a58(uVar10,&DAT_001f097e);
                    /* try { // try from 006d6660 to 006d6667 has its CatchHandler @ 006d6828 */
          FUN_00675ac0(&uStack_c9,uVar10);
          goto LAB_006d6668;
        }
      }
    }
                    /* try { // try from 006d66ec to 006d66ff has its CatchHandler @ 006d68a4 */
    FUN_006d8c1c(param_1 + 10,plVar16,local_f0,local_f0);
    uVar14 = 1;
  }
  else {
                    /* try { // try from 006d6110 to 006d61cf has its CatchHandler @ 006d68bc */
    FUN_006d6900(&local_b0,plVar17 + 4,param_1);
    uVar9 = local_a8;
    puVar3 = local_a0;
    if (((ulong)local_b0 & 1) == 0) {
      uVar9 = (ulong)local_b0 >> 1 & 0x7f;
      puVar3 = (undefined1 *)((long)&local_b0 + 1);
    }
    if ((long)uVar9 < 0) {
                    /* try { // try from 006d676c to 006d677b has its CatchHandler @ 006d67dc */
      FUN_00676318(uVar9,"string length exceeds max size");
    }
    uVar1 = uStack_78;
    puVar6 = local_80;
    if ((uVar9 != uStack_78) ||
       (((bVar7 = true, uVar9 != 0 && (puVar3 != local_80)) &&
        (iVar8 = memcmp(puVar3,local_80,uVar9), iVar8 != 0)))) {
      if (uVar1 < uVar9) {
        bVar7 = false;
      }
      else {
        iVar8 = memcmp(puVar6,puVar3,uVar9);
        if (iVar8 == 0) {
          bVar7 = puVar6[uVar9] == '.';
        }
        else {
          bVar7 = false;
        }
      }
    }
    if (((ulong)local_b0 & 1) != 0) {
      free(local_a0);
    }
    uVar9 = uStack_78;
    puVar3 = local_80;
    if (!bVar7) {
      plVar15 = (long *)plVar17[1];
      if ((long *)plVar17[1] == (long *)0x0) {
        do {
          plVar19 = (long *)plVar17[2];
          bVar7 = (long *)*plVar19 != plVar17;
          plVar17 = plVar19;
        } while (bVar7);
      }
      else {
        do {
          plVar19 = plVar15;
          plVar15 = (long *)*plVar19;
        } while ((long *)*plVar19 != (long *)0x0);
      }
      if (plVar19 != plVar16) {
                    /* try { // try from 006d6268 to 006d6337 has its CatchHandler @ 006d68bc */
        FUN_006d6900(&local_b0,plVar19 + 4,param_1);
        uVar1 = local_a8;
        puVar6 = local_a0;
        if (((ulong)local_b0 & 1) == 0) {
          uVar1 = (ulong)local_b0 >> 1 & 0x7f;
          puVar6 = (undefined1 *)((long)&local_b0 + 1);
        }
        if ((long)uVar1 < 0) {
                    /* try { // try from 006d67a8 to 006d67b7 has its CatchHandler @ 006d67d4 */
          FUN_00676318(uVar1,"string length exceeds max size");
        }
        if ((uVar9 != uVar1) ||
           (((bVar7 = true, uVar9 != 0 && (puVar6 != puVar3)) &&
            (iVar8 = memcmp(puVar3,puVar6,uVar9), iVar8 != 0)))) {
          if (uVar1 < uVar9) {
            bVar7 = false;
          }
          else {
            iVar8 = memcmp(puVar6,puVar3,uVar9);
            if (iVar8 == 0) {
              bVar7 = puVar6[uVar9] == '.';
            }
            else {
              bVar7 = false;
            }
          }
        }
        if (((ulong)local_b0 & 1) != 0) {
          free(local_a0);
        }
        plVar16 = plVar19;
        if (bVar7) {
          FUN_00675e64(&local_b0,2,
                       "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor_database.cc"
                       ,0x2ab);
                    /* try { // try from 006d6338 to 006d635b has its CatchHandler @ 006d6858 */
          uVar10 = FUN_00675a58(&local_b0,"Symbol name \"");
          uVar10 = FUN_00675b74(uVar10,&local_80);
          uVar10 = FUN_00675a58(uVar10,"\" conflicts with the existing symbol \"");
                    /* try { // try from 006d635c to 006d636f has its CatchHandler @ 006d6834 */
          FUN_006d6900(local_c8,plVar19 + 4,param_1);
                    /* try { // try from 006d6370 to 006d638b has its CatchHandler @ 006d6854 */
          uVar10 = FUN_00675a80(uVar10,local_c8);
          uVar10 = FUN_00675a58(uVar10,&DAT_001f097e);
                    /* try { // try from 006d638c to 006d6393 has its CatchHandler @ 006d6830 */
          FUN_00675ac0(&uStack_c9,uVar10);
          goto LAB_006d6668;
        }
      }
      goto LAB_006d639c;
    }
    FUN_00675e64(&local_b0,2,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor_database.cc"
                 ,0x29d);
                    /* try { // try from 006d61d0 to 006d61f3 has its CatchHandler @ 006d688c */
    uVar10 = FUN_00675a58(&local_b0,"Symbol name \"");
    uVar10 = FUN_00675b74(uVar10,&local_80);
    uVar10 = FUN_00675a58(uVar10,"\" conflicts with the existing symbol \"");
                    /* try { // try from 006d61f4 to 006d6207 has its CatchHandler @ 006d6860 */
    FUN_006d6900(local_c8,plVar17 + 4,param_1);
                    /* try { // try from 006d6208 to 006d6223 has its CatchHandler @ 006d6874 */
    uVar10 = FUN_00675a80(uVar10,local_c8);
    uVar10 = FUN_00675a58(uVar10,&DAT_001f097e);
                    /* try { // try from 006d6224 to 006d622b has its CatchHandler @ 006d685c */
    FUN_00675ac0(&uStack_c9,uVar10);
LAB_006d6668:
    if ((local_c8[0] & 1) != 0) {
      free(local_b8);
    }
LAB_006d6678:
    FUN_00675e7c(&local_b0);
    uVar14 = 0;
  }
  if ((local_108 & 1) != 0) {
    free(local_f8);
  }
  if ((local_e8[0] & 1) == 0) {
    if (*(long *)(lVar5 + 0x28) == local_70) {
      return uVar14;
    }
  }
  else {
    free(local_d8);
    if (*(long *)(lVar5 + 0x28) == local_70) {
      return uVar14;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006d6900  FUN_006d6900 =====

void FUN_006d6900(undefined8 param_1,int *param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  long local_e8;
  ulong uStack_e0;
  undefined1 *local_b8;
  undefined8 local_b0;
  long local_88;
  ulong uStack_80;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  lVar5 = *param_3 + (long)*param_2 * 0x28;
  bVar3 = *(byte *)(lVar5 + 0x10);
  lVar2 = *(long *)(lVar5 + 0x20);
  uVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    uVar1 = *(ulong *)(lVar5 + 0x18);
  }
  if ((long)uVar1 < 0) {
    FUN_00676318(uVar1,"string length exceeds max size");
  }
  if ((bVar3 & 1) == 0) {
    lVar2 = lVar5 + 0x11;
  }
  local_b8 = &DAT_001c717f;
  if (uVar1 != 0) {
    local_b8 = &DAT_001c773b;
  }
  local_88 = lVar2;
  uStack_80 = uVar1;
  local_b0 = __strlen_chk(local_b8,2);
  bVar3 = *(byte *)(param_2 + 2);
  lVar2 = *(long *)(param_2 + 6);
  uStack_e0 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    uStack_e0 = *(ulong *)(param_2 + 4);
  }
  if ((long)uStack_e0 < 0) {
    FUN_00676318(uStack_e0,"string length exceeds max size");
  }
  local_e8 = (long)param_2 + 9;
  if ((bVar3 & 1) != 0) {
    local_e8 = lVar2;
  }
  FUN_00678644(param_1,&local_88,&local_b8,&local_e8);
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006d6a24  FUN_006d6a24 =====

void FUN_006d6a24(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  undefined8 uVar6;
  size_t sVar7;
  void *pvVar8;
  ulong uVar9;
  void *local_80;
  void *pvStack_78;
  void *local_70;
  undefined1 *local_68;
  undefined1 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_006d7194();
  if (*(long *)(param_1 + 0x28) == 0) {
LAB_006d6bac:
    if (*(long *)(param_1 + 0x60) != 0) {
      lVar1 = *(long *)(param_1 + 0x70);
      lVar2 = *(long *)(param_1 + 0x78);
      pvStack_78 = (void *)0x0;
      local_70 = (void *)0x0;
      local_80 = (void *)0x0;
      uVar9 = *(long *)(param_1 + 0x60) + (lVar2 - lVar1 >> 5);
      local_60 = 0;
      if (uVar9 == 0) {
        pvVar4 = (void *)0x0;
      }
      else {
        local_68 = (undefined1 *)&local_80;
        if (uVar9 >> 0x3b != 0) goto LAB_006d6ee0;
        sVar7 = uVar9 * 0x20;
        local_68 = (undefined1 *)&local_80;
                    /* try { // try from 006d6be4 to 006d6beb has its CatchHandler @ 006d6f50 */
        pvVar4 = (void *)FUN_00759c3c(sVar7);
        local_70 = (void *)((long)pvVar4 + uVar9 * 0x20);
        local_80 = pvVar4;
        memset(pvVar4,0,sVar7);
        pvStack_78 = (void *)((long)pvVar4 + sVar7);
      }
      local_68 = *(undefined1 **)(param_1 + 0x68);
                    /* try { // try from 006d6c28 to 006d6c3f has its CatchHandler @ 006d6f20 */
      FUN_006d9678(*(undefined8 *)(param_1 + 0x50),param_1 + 0x58,lVar1,lVar2,pvVar4,&local_68);
      pvVar4 = *(void **)(param_1 + 0x70);
      if (pvVar4 != (void *)0x0) {
        pvVar8 = *(void **)(param_1 + 0x78);
        pvVar5 = pvVar4;
        if (pvVar8 != pvVar4) {
          do {
            if ((*(byte *)((long)pvVar8 + -0x18) & 1) != 0) {
              free(*(void **)((long)pvVar8 + -8));
            }
            pvVar8 = (void *)((long)pvVar8 + -0x20);
          } while (pvVar8 != pvVar4);
          pvVar5 = *(void **)(param_1 + 0x70);
        }
        *(void **)(param_1 + 0x78) = pvVar4;
        free(pvVar5);
        *(undefined8 *)(param_1 + 0x70) = 0;
        *(undefined8 *)(param_1 + 0x78) = 0;
        *(undefined8 *)(param_1 + 0x80) = 0;
      }
      pvVar5 = local_70;
      pvVar4 = pvStack_78;
      pvStack_78 = (void *)0x0;
      local_70 = (void *)0x0;
      *(void **)(param_1 + 0x78) = pvVar4;
      *(void **)(param_1 + 0x70) = local_80;
      *(void **)(param_1 + 0x80) = pvVar5;
      local_80 = (void *)0x0;
      FUN_006d97e4(param_1 + 0x50,*(undefined8 *)(param_1 + 0x58));
      pvVar5 = local_80;
      *(undefined8 *)(param_1 + 0x58) = 0;
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(long *)(param_1 + 0x50) = param_1 + 0x58;
      pvVar4 = pvStack_78;
      if (local_80 != (void *)0x0) {
        for (; pvVar4 != pvVar5; pvVar4 = (void *)((long)pvVar4 + -0x20)) {
          if ((*(byte *)((long)pvVar4 + -0x18) & 1) != 0) {
            free(*(void **)((long)pvVar4 + -8));
          }
        }
        pvStack_78 = pvVar5;
        free(local_80);
      }
    }
    if (*(long *)(param_1 + 0x98) != 0) {
      lVar1 = *(long *)(param_1 + 0xa8);
      lVar2 = *(long *)(param_1 + 0xb0);
      pvStack_78 = (void *)0x0;
      local_70 = (void *)0x0;
      local_80 = (void *)0x0;
      local_60 = 0;
      uVar9 = *(long *)(param_1 + 0x98) + (lVar2 - lVar1 >> 3) * -0x3333333333333333;
      if (uVar9 == 0) {
        pvVar4 = (void *)0x0;
      }
      else {
        local_68 = (undefined1 *)&local_80;
        if (0x666666666666666 < uVar9) goto LAB_006d6ef8;
        local_68 = (undefined1 *)&local_80;
                    /* try { // try from 006d6d58 to 006d6d5f has its CatchHandler @ 006d6f40 */
        pvVar4 = (void *)FUN_00759c3c(uVar9 * 0x28);
        local_70 = (void *)((long)pvVar4 + uVar9 * 0x28);
        sVar7 = ((uVar9 * 0x28 - 0x28) / 0x28) * 0x28 + 0x28;
        local_80 = pvVar4;
        memset(pvVar4,0,sVar7);
        pvStack_78 = (void *)((long)pvVar4 + sVar7);
      }
      local_68 = *(undefined1 **)(param_1 + 0xa0);
                    /* try { // try from 006d6dc0 to 006d6dd7 has its CatchHandler @ 006d6f10 */
      FUN_006d9968(*(undefined8 *)(param_1 + 0x88),param_1 + 0x90,lVar1,lVar2,pvVar4,&local_68);
      pvVar4 = *(void **)(param_1 + 0xa8);
      if (pvVar4 != (void *)0x0) {
        pvVar8 = *(void **)(param_1 + 0xb0);
        pvVar5 = pvVar4;
        if (pvVar8 != pvVar4) {
          do {
            if ((*(byte *)((long)pvVar8 + -0x20) & 1) != 0) {
              free(*(void **)((long)pvVar8 + -0x10));
            }
            pvVar8 = (void *)((long)pvVar8 + -0x28);
          } while (pvVar8 != pvVar4);
          pvVar5 = *(void **)(param_1 + 0xa8);
        }
        *(void **)(param_1 + 0xb0) = pvVar4;
        free(pvVar5);
        *(undefined8 *)(param_1 + 0xa8) = 0;
        *(undefined8 *)(param_1 + 0xb0) = 0;
        *(undefined8 *)(param_1 + 0xb8) = 0;
      }
      pvVar5 = local_70;
      pvVar4 = pvStack_78;
      pvStack_78 = (void *)0x0;
      local_70 = (void *)0x0;
      *(void **)(param_1 + 0xb0) = pvVar4;
      *(void **)(param_1 + 0xa8) = local_80;
      *(void **)(param_1 + 0xb8) = pvVar5;
      local_80 = (void *)0x0;
      FUN_006d9adc(param_1 + 0x88,*(undefined8 *)(param_1 + 0x90));
      pvVar5 = local_80;
      *(undefined8 *)(param_1 + 0x90) = 0;
      *(undefined8 *)(param_1 + 0x98) = 0;
      *(long *)(param_1 + 0x88) = param_1 + 0x90;
      pvVar4 = pvStack_78;
      if (local_80 != (void *)0x0) {
        for (; pvVar4 != pvVar5; pvVar4 = (void *)((long)pvVar4 + -0x28)) {
          if ((*(byte *)((long)pvVar4 + -0x20) & 1) != 0) {
            free(*(void **)((long)pvVar4 + -0x10));
          }
        }
        pvStack_78 = pvVar5;
        free(local_80);
      }
    }
    if (*(long *)(lVar3 + 0x28) == local_58) {
      return;
    }
  }
  else {
    lVar1 = *(long *)(param_1 + 0x38);
    lVar2 = *(long *)(param_1 + 0x40);
    pvStack_78 = (void *)0x0;
    local_70 = (void *)0x0;
    local_80 = (void *)0x0;
    uVar9 = *(long *)(param_1 + 0x28) + (lVar2 - lVar1 >> 5);
    local_60 = 0;
    if (uVar9 == 0) {
      pvVar4 = (void *)0x0;
LAB_006d6ac0:
      local_68 = *(undefined1 **)(param_1 + 0x30);
                    /* try { // try from 006d6ad0 to 006d6ae7 has its CatchHandler @ 006d6f30 */
      FUN_006d92f4(*(undefined8 *)(param_1 + 0x18),param_1 + 0x20,lVar1,lVar2,pvVar4,&local_68);
      pvVar4 = *(void **)(param_1 + 0x38);
      if (pvVar4 != (void *)0x0) {
        pvVar8 = *(void **)(param_1 + 0x40);
        pvVar5 = pvVar4;
        if (pvVar8 != pvVar4) {
          do {
            if ((*(byte *)((long)pvVar8 + -0x18) & 1) != 0) {
              free(*(void **)((long)pvVar8 + -8));
            }
            pvVar8 = (void *)((long)pvVar8 + -0x20);
          } while (pvVar8 != pvVar4);
          pvVar5 = *(void **)(param_1 + 0x38);
        }
        *(void **)(param_1 + 0x40) = pvVar4;
        free(pvVar5);
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(undefined8 *)(param_1 + 0x40) = 0;
        *(undefined8 *)(param_1 + 0x48) = 0;
      }
      pvVar5 = local_70;
      pvVar4 = pvStack_78;
      pvStack_78 = (void *)0x0;
      local_70 = (void *)0x0;
      *(void **)(param_1 + 0x40) = pvVar4;
      *(void **)(param_1 + 0x38) = local_80;
      *(void **)(param_1 + 0x48) = pvVar5;
      local_80 = (void *)0x0;
      FUN_006d94f4(param_1 + 0x18,*(undefined8 *)(param_1 + 0x20));
      pvVar5 = local_80;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(long *)(param_1 + 0x18) = param_1 + 0x20;
      pvVar4 = pvStack_78;
      if (local_80 != (void *)0x0) {
        for (; pvVar4 != pvVar5; pvVar4 = (void *)((long)pvVar4 + -0x20)) {
          if ((*(byte *)((long)pvVar4 + -0x18) & 1) != 0) {
            free(*(void **)((long)pvVar4 + -8));
          }
        }
        pvStack_78 = pvVar5;
        free(local_80);
      }
      goto LAB_006d6bac;
    }
    if (uVar9 >> 0x3b == 0) {
      sVar7 = uVar9 * 0x20;
      local_68 = (undefined1 *)&local_80;
                    /* try { // try from 006d6a8c to 006d6a93 has its CatchHandler @ 006d6f60 */
      pvVar4 = (void *)FUN_00759c3c(sVar7);
      local_70 = (void *)((long)pvVar4 + uVar9 * 0x20);
      local_80 = pvVar4;
      memset(pvVar4,0,sVar7);
      pvStack_78 = (void *)((long)pvVar4 + sVar7);
      goto LAB_006d6ac0;
    }
    local_68 = (undefined1 *)&local_80;
    if (*(long *)(lVar3 + 0x28) != local_58) goto LAB_006d6f84;
    local_68 = (undefined1 *)&local_80;
                    /* try { // try from 006d6ed8 to 006d6edf has its CatchHandler @ 006d6f60 */
    FUN_006d92e0(&local_80);
LAB_006d6ee0:
    if (*(long *)(lVar3 + 0x28) != local_58) goto LAB_006d6f84;
                    /* try { // try from 006d6ef0 to 006d6ef7 has its CatchHandler @ 006d6f50 */
    FUN_006d9664(&local_80);
LAB_006d6ef8:
    if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 006d6f08 to 006d6f0f has its CatchHandler @ 006d6f40 */
      uVar6 = FUN_006d9954(&local_80);
                    /* catch() { ... } // from try @ 006d6dc0 with catch @ 006d6f10 */
      FUN_006d9834(&local_80);
      if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00755eac(uVar6);
      }
    }
  }
LAB_006d6f84:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006d6f88  FUN_006d6f88 =====

/* WARNING: Removing unreachable block (ram,0x006d70dc) */

void FUN_006d6f88(long *param_1,void *param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  int *piVar3;
  long lVar4;
  void *__s1;
  void *__s1_00;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 local_80;
  ulong local_78;
  void *local_70;
  void *local_68;
  ulong uStack_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  lVar10 = param_1[0xe];
  local_80 = param_1[0xd];
  local_68 = param_2;
  uStack_60 = param_3;
  if (param_1[0xf] - lVar10 != 0) {
    uVar11 = param_1[0xf] - lVar10 >> 5;
    do {
      uVar12 = uVar11 >> 1;
      lVar1 = lVar10 + uVar12 * 0x20;
      uVar6 = FUN_006d8fcc(&local_80,&local_68,lVar1);
      uVar2 = uVar11 + ~uVar12;
      uVar11 = uVar12;
      if ((uVar6 & 1) == 0) {
        uVar11 = uVar2;
        lVar10 = lVar1 + 0x20;
      }
    } while (uVar11 != 0);
    lVar1 = 0;
    if (lVar10 != param_1[0xe]) {
      lVar1 = -0x20;
    }
    piVar3 = (int *)(lVar10 + lVar1);
    if (piVar3 != (int *)param_1[0xf]) {
      FUN_006d6900(&local_80,piVar3,param_1);
      uVar11 = local_78;
      __s1 = local_70;
      if ((local_80 & 1) == 0) {
        uVar11 = local_80 >> 1 & 0x7f;
        __s1 = (void *)((long)&local_80 + 1);
      }
      if ((long)uVar11 < 0) {
                    /* try { // try from 006d7150 to 006d715f has its CatchHandler @ 006d7164 */
        FUN_00676318(uVar11,"string length exceeds max size");
      }
      uVar2 = uStack_60;
      __s1_00 = local_68;
      if (((uVar11 == uStack_60) &&
          (((uVar11 == 0 || (__s1 == local_68)) ||
           (iVar5 = memcmp(__s1,local_68,uVar11), iVar5 == 0)))) ||
         (((uVar11 <= uVar2 && (iVar5 = memcmp(__s1_00,__s1,uVar11), iVar5 == 0)) &&
          (*(char *)((long)__s1_00 + uVar11) == '.')))) {
        puVar9 = (undefined8 *)(*param_1 + (long)*piVar3 * 0x28);
        uVar7 = *puVar9;
        uVar8 = *(undefined4 *)(puVar9 + 1);
      }
      else {
        uVar7 = 0;
        uVar8 = 0;
      }
      if ((local_80 & 1) != 0) {
        free(local_70);
      }
      goto LAB_006d7124;
    }
  }
  uVar7 = 0;
  uVar8 = 0;
LAB_006d7124:
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7,uVar8);
}


// ===== 006d7194  FUN_006d7194 =====

void FUN_006d7194(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *__ptr;
  ulong uVar6;
  undefined8 uVar7;
  
  puVar1 = (undefined8 *)param_1[1];
  __ptr = (undefined8 *)*param_1;
  uVar6 = (long)puVar1 - (long)__ptr;
  if (uVar6 < (ulong)(param_1[2] - (long)__ptr)) {
    if (puVar1 == __ptr) {
      *param_1 = 0;
      param_1[1] = uVar6;
      param_1[2] = uVar6;
    }
    else {
      if (0x666666666666666 < (ulong)(((long)uVar6 >> 3) * -0x3333333333333333)) {
                    /* WARNING: Subroutine does not return */
        FUN_002f9ee0();
      }
                    /* try { // try from 006d71f0 to 006d72a3 has its CatchHandler @ 006d72a4 */
      puVar2 = (undefined8 *)FUN_00759c3c(uVar6);
      puVar3 = __ptr;
      puVar4 = puVar2;
      do {
        uVar5 = *puVar3;
        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar3 + 1);
        *puVar4 = uVar5;
        uVar7 = puVar3[3];
        uVar5 = puVar3[2];
        puVar4[4] = puVar3[4];
        puVar4[3] = uVar7;
        puVar4[2] = uVar5;
        puVar4 = puVar4 + 5;
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[2] = 0;
        puVar3 = puVar3 + 5;
      } while (puVar3 != puVar1);
      do {
        if ((*(byte *)(__ptr + 2) & 1) != 0) {
          free((void *)__ptr[4]);
        }
        __ptr = __ptr + 5;
      } while (__ptr != puVar1);
      __ptr = (undefined8 *)*param_1;
      *param_1 = (long)puVar2;
      param_1[1] = (long)puVar2 + uVar6;
      param_1[2] = (long)puVar2 + uVar6;
    }
    if (__ptr != (undefined8 *)0x0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 006d72c4  FUN_006d72c4 =====

void FUN_006d72c4(long param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  byte *pbVar5;
  long *plVar6;
  bool bVar7;
  long lVar8;
  byte *pbVar9;
  byte *pbVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long local_90;
  ulong uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  lVar8 = param_2[1] - *param_2 >> 3;
  uVar12 = *(long *)(param_1 + 0x28) + (*(long *)(param_1 + 0x40) - *(long *)(param_1 + 0x38) >> 5);
  bVar7 = uVar12 < (ulong)(lVar8 * -0x5555555555555555);
  lVar8 = uVar12 + lVar8 * 0x5555555555555555;
  if (bVar7 || lVar8 == 0) {
    if (bVar7) {
      pbVar9 = (byte *)(*param_2 + uVar12 * 0x18);
      pbVar10 = (byte *)param_2[1];
      while (pbVar5 = pbVar10, pbVar5 != pbVar9) {
        pbVar10 = pbVar5 + -0x18;
        if ((*pbVar10 & 1) != 0) {
          free(*(void **)(pbVar5 + -8));
        }
      }
      param_2[1] = (long)pbVar9;
    }
  }
  else {
    FUN_006d9b2c(param_2,lVar8);
  }
  plVar14 = *(long **)(param_1 + 0x18);
  if (plVar14 == (long *)(param_1 + 0x20)) {
    uVar12 = 0;
    lVar8 = *(long *)(param_1 + 0x38);
    lVar11 = *(long *)(param_1 + 0x40);
    if (lVar8 == lVar11) goto LAB_006d74fc;
  }
  else {
    uVar12 = 0;
    do {
      bVar3 = *(byte *)(plVar14 + 5);
      lVar8 = plVar14[7];
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = plVar14[6];
      }
      if ((long)uVar1 < 0) {
        FUN_00676318(uVar1,"string length exceeds max size");
      }
      local_90 = (long)plVar14 + 0x29;
      if ((bVar3 & 1) != 0) {
        local_90 = lVar8;
      }
      uStack_88 = uVar1;
      FUN_00675c30(&local_80,&local_90);
      pbVar10 = (byte *)(*param_2 + uVar12 * 0x18);
      if ((*pbVar10 & 1) != 0) {
        free(*(void **)(pbVar10 + 0x10));
      }
      *(undefined8 *)(pbVar10 + 0x10) = local_70;
      *(undefined8 *)(pbVar10 + 8) = uStack_78;
      *(undefined8 *)pbVar10 = local_80;
      plVar6 = (long *)plVar14[1];
      plVar15 = plVar14;
      if ((long *)plVar14[1] == (long *)0x0) {
        do {
          plVar14 = (long *)plVar15[2];
          bVar7 = (long *)*plVar14 != plVar15;
          plVar15 = plVar14;
        } while (bVar7);
      }
      else {
        do {
          plVar14 = plVar6;
          plVar6 = (long *)*plVar14;
        } while ((long *)*plVar14 != (long *)0x0);
      }
      uVar12 = uVar12 + 1;
    } while (plVar14 != (long *)(param_1 + 0x20));
    uVar12 = uVar12 & 0xffffffff;
    lVar8 = *(long *)(param_1 + 0x38);
    lVar11 = *(long *)(param_1 + 0x40);
    if (lVar8 == lVar11) goto LAB_006d74fc;
  }
  lVar13 = uVar12 * 0x18;
  do {
    bVar3 = *(byte *)(lVar8 + 8);
    lVar2 = *(long *)(lVar8 + 0x18);
    uVar12 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      uVar12 = *(ulong *)(lVar8 + 0x10);
    }
    if ((long)uVar12 < 0) {
      FUN_00676318(uVar12,"string length exceeds max size");
    }
    local_90 = lVar8 + 9;
    if ((bVar3 & 1) != 0) {
      local_90 = lVar2;
    }
    uStack_88 = uVar12;
    FUN_00675c30(&local_80,&local_90);
    pbVar10 = (byte *)(*param_2 + lVar13);
    if ((*pbVar10 & 1) != 0) {
      free(*(void **)(pbVar10 + 0x10));
    }
    lVar8 = lVar8 + 0x20;
    lVar13 = lVar13 + 0x18;
    *(undefined8 *)(pbVar10 + 0x10) = local_70;
    *(undefined8 *)(pbVar10 + 8) = uStack_78;
    *(undefined8 *)pbVar10 = local_80;
  } while (lVar8 != lVar11);
LAB_006d74fc:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 006d7530  FUN_006d7530 =====

undefined8 FUN_006d7530(long param_1)

{
  FUN_006d72c4(*(undefined8 *)(param_1 + 8));
  return 1;
}


// ===== 006d754c  FUN_006d754c =====

void FUN_006d754c(long *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = (long)(PTR_DAT_007a3658 + 0x10);
  puVar1 = (undefined8 *)FUN_00759c3c(0xc0);
  puVar1[6] = puVar1;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = puVar1;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[3] = puVar1 + 4;
  puVar1[0xb] = 0;
  puVar1[10] = puVar1 + 0xb;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = puVar1;
  puVar1[0x10] = 0;
  puVar1[0x11] = puVar1 + 0x12;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  param_1[1] = (long)puVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}


// ===== 006d75d0  FUN_006d75d0 =====

void FUN_006d75d0(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *__ptr;
  void *__ptr_00;
  
  __ptr = (undefined8 *)param_1[2];
  puVar1 = (undefined8 *)param_1[3];
  *param_1 = (long)(PTR_DAT_007a3658 + 0x10);
  if (__ptr != puVar1) {
    do {
      puVar2 = __ptr + 1;
      free((void *)*__ptr);
      __ptr = puVar2;
    } while (puVar2 != puVar1);
    __ptr = (undefined8 *)param_1[2];
  }
  if (__ptr != (undefined8 *)0x0) {
    param_1[3] = (long)__ptr;
    free(__ptr);
  }
  __ptr_00 = (void *)param_1[1];
  param_1[1] = 0;
  if (__ptr_00 != (void *)0x0) {
    FUN_006d9cc0(__ptr_00);
    free(__ptr_00);
    return;
  }
  return;
}


// ===== 006d765c  FUN_006d765c =====

void FUN_006d765c(void *param_1)

{
  FUN_006d75d0();
  free(param_1);
  return;
}


// ===== 006d7680  FUN_006d7680 =====

uint FUN_006d7680(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar3 = (undefined8 *)0x0;
  if (*(long *)(param_4 + 0x40) != 0) {
    puVar3 = (undefined8 *)(*(long *)(param_4 + 0x40) + 8);
  }
  if (*(int *)(param_4 + 0x38) != 0) {
    lVar4 = (long)*(int *)(param_4 + 0x38) << 3;
    do {
      uVar2 = FUN_006d7680(param_1,param_2,param_3,*puVar3);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      lVar4 = lVar4 + -8;
      puVar3 = puVar3 + 1;
    } while (lVar4 != 0);
  }
  puVar3 = (undefined8 *)0x0;
  if (*(long *)(param_4 + 0x88) != 0) {
    puVar3 = (undefined8 *)(*(long *)(param_4 + 0x88) + 8);
  }
  if (*(int *)(param_4 + 0x80) == 0) {
    return 1;
  }
  lVar4 = (long)*(int *)(param_4 + 0x80) * 8;
  do {
    lVar4 = lVar4 + -8;
    uVar1 = FUN_006d7774(param_1,param_2,param_3,*puVar3);
    if ((uVar1 & 1) == 0) break;
    puVar3 = puVar3 + 1;
  } while (lVar4 != 0);
  return uVar1 & 1;
}


// ===== 006d7774  FUN_006d7774 =====

void FUN_006d7774(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  undefined8 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong __n;
  void *__dest;
  undefined1 auVar9 [16];
  byte *local_e8;
  ulong uStack_e0;
  void *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  int local_c0 [2];
  byte local_b8 [16];
  void *local_a8;
  undefined4 local_a0;
  byte *local_90;
  ulong uStack_88;
  void *local_80;
  undefined4 local_78;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  pbVar6 = (byte *)(*(ulong *)(param_4 + 0x20) & 0xfffffffffffffffc);
  bVar3 = *pbVar6;
  uVar8 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    uVar8 = *(ulong *)(pbVar6 + 8);
  }
  local_d0 = param_2;
  uStack_c8 = param_3;
  if (uVar8 != 0) {
    pbVar7 = *(byte **)(pbVar6 + 0x10);
    if ((bVar3 & 1) == 0) {
      pbVar7 = pbVar6 + 1;
    }
    if (*pbVar7 == 0x2e) {
      local_c0[0] = (int)((ulong)(param_1[1] - *param_1) >> 3) * -0x33333333 + -1;
      if ((long)uVar8 < 0) {
        FUN_00676318(uVar8,"string length exceeds max size");
      }
      local_90 = pbVar7;
      uStack_88 = uVar8;
      FUN_00675c30(local_b8,&local_90);
      local_a0 = *(undefined4 *)(param_4 + 0x48);
                    /* try { // try from 006d7824 to 006d7833 has its CatchHandler @ 006d7ad8 */
      auVar9 = FUN_006d82a0(param_1 + 0x11,local_c0,local_c0);
      uVar5 = auVar9._0_8_;
      if ((auVar9 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
        uVar8 = 1;
      }
      else {
        pbVar6 = (byte *)(*(ulong *)(param_4 + 0x20) & 0xfffffffffffffffc);
        bVar3 = *pbVar6;
        uVar8 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          uVar8 = *(ulong *)(pbVar6 + 8);
        }
        if (uVar8 == 0) {
          if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* try { // try from 006d7a60 to 006d7a7f has its CatchHandler @ 006d7ae8 */
                    /* WARNING: Subroutine does not return */
            FUN_0030b8f4(&local_e8);
          }
          goto LAB_006d7a14;
        }
        pbVar7 = *(byte **)(pbVar6 + 0x10);
        __n = uVar8 - 1;
        if ((bVar3 & 1) == 0) {
          pbVar7 = pbVar6 + 1;
        }
        if (0xfffffffffffffff7 < __n) {
          if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_002fb400(&local_e8);
          }
          goto LAB_006d7a14;
        }
        lVar1 = param_1[0x15];
        lVar2 = param_1[0x16];
        if (uVar8 < 0x18) {
          __dest = (void *)((ulong)&local_e8 | 1);
          local_e8 = (byte *)CONCAT71(local_e8._1_7_,(char)((int)__n << 1));
          if (__n != 0) goto LAB_006d7910;
        }
        else {
          uVar8 = (__n & 0xfffffffffffffff8) + 8;
          if ((__n | 7) != 0x17) {
            uVar8 = __n | 7;
          }
                    /* try { // try from 006d78f8 to 006d78ff has its CatchHandler @ 006d7ae8 */
          __dest = (void *)FUN_00759c3c(uVar8 + 1);
          local_e8 = (byte *)(uVar8 + 1 | 1);
          uStack_e0 = __n;
          local_d8 = __dest;
LAB_006d7910:
          memmove(__dest,pbVar7 + 1,__n);
        }
        uStack_88 = uStack_e0;
        local_90 = local_e8;
        *(undefined1 *)((long)__dest + __n) = 0;
        local_e8 = (byte *)0x0;
        uStack_e0 = 0;
        local_80 = local_d8;
        local_78 = *(undefined4 *)(param_4 + 0x48);
        local_d8 = (void *)0x0;
                    /* try { // try from 006d7948 to 006d7957 has its CatchHandler @ 006d7a84 */
        uVar8 = FUN_006d8120(lVar1,lVar2,&local_90,param_1[0x14]);
        uVar8 = uVar8 & 0xffffffff;
        if (((ulong)local_90 & 1) != 0) {
          free(local_80);
        }
        if (((ulong)local_e8 & 1) != 0) {
          free(local_d8);
        }
      }
      if ((local_b8[0] & 1) != 0) {
        free(local_a8);
      }
      if ((uVar8 & 1) != 0) {
        FUN_00675e64(local_c0,2,
                     "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor_database.cc"
                     ,0x2f5);
                    /* try { // try from 006d7990 to 006d79ef has its CatchHandler @ 006d7b10 */
        uVar5 = FUN_00675a58(local_c0,
                             "Extension conflicts with extension already in database: extend ");
        uVar5 = FUN_00675a80(uVar5,*(ulong *)(param_4 + 0x20) & 0xfffffffffffffffc);
        uVar5 = FUN_00675a58(uVar5,&DAT_001ee9cb);
        uVar5 = FUN_00675a80(uVar5,*(ulong *)(param_4 + 0x18) & 0xfffffffffffffffc);
        uVar5 = FUN_00675a58(uVar5,&DAT_001d8638);
        uVar5 = FUN_00675d6c(uVar5,*(undefined4 *)(param_4 + 0x48));
        uVar5 = FUN_00675a58(uVar5," } from:");
        uVar5 = FUN_00675b74(uVar5,&local_d0);
                    /* try { // try from 006d79f0 to 006d79f7 has its CatchHandler @ 006d7a80 */
        FUN_00675ac0(&local_90,uVar5);
        FUN_00675e7c(local_c0);
        uVar5 = 0;
        if (*(long *)(lVar4 + 0x28) == local_68) {
          return;
        }
        goto LAB_006d7a14;
      }
    }
  }
  uVar5 = 1;
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
LAB_006d7a14:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


// ===== 006d7b34  FUN_006d7b34 =====

undefined8 * FUN_006d7b34(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 *__ptr;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar3 = param_1[1] - *param_1 >> 3;
  uVar1 = lVar3 * -0x3333333333333333 + 1;
  if (0x666666666666666 < uVar1) {
    FUN_006d7cb8(param_1);
LAB_006d7cb4:
                    /* WARNING: Subroutine does not return */
    FUN_002f9ee0();
  }
  lVar7 = param_1[2] - *param_1 >> 3;
  uVar9 = lVar7 * -0x6666666666666666;
  if (uVar9 < uVar1 || uVar9 - uVar1 == 0) {
    uVar9 = uVar1;
  }
  if (0x333333333333332 < (ulong)(lVar7 * -0x3333333333333333)) {
    uVar9 = 0x666666666666666;
  }
  if (uVar9 == 0) {
    lVar7 = 0;
  }
  else {
    if (0x666666666666666 < uVar9) goto LAB_006d7cb4;
    lVar7 = FUN_00759c3c(uVar9 * 0x28);
  }
  uVar8 = param_2[4];
  uVar13 = param_2[3];
  uVar12 = param_2[2];
  puVar5 = (undefined8 *)(lVar7 + lVar3 * 8);
  param_2[2] = 0;
  uVar10 = *param_2;
  param_2[3] = 0;
  param_2[4] = 0;
  puVar11 = (undefined8 *)*param_1;
  __ptr = (undefined8 *)param_1[1];
  *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(param_2 + 1);
  *puVar5 = uVar10;
  puVar2 = (undefined8 *)((long)puVar5 + ((long)puVar11 - (long)__ptr));
  puVar5[3] = uVar13;
  puVar5[2] = uVar12;
  puVar5[4] = uVar8;
  puVar4 = puVar11;
  puVar6 = puVar2;
  if ((long)puVar11 - (long)__ptr != 0) {
    do {
      uVar8 = *puVar4;
      *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar4 + 1);
      *puVar6 = uVar8;
      uVar10 = puVar4[3];
      uVar8 = puVar4[2];
      puVar6[4] = puVar4[4];
      puVar6[3] = uVar10;
      puVar6[2] = uVar8;
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4[2] = 0;
      puVar4 = puVar4 + 5;
      puVar6 = puVar6 + 5;
    } while (puVar4 != __ptr);
    do {
      if ((*(byte *)(puVar11 + 2) & 1) != 0) {
        free((void *)puVar11[4]);
      }
      puVar11 = puVar11 + 5;
    } while (puVar11 != __ptr);
    __ptr = (undefined8 *)*param_1;
  }
  *param_1 = (long)puVar2;
  param_1[1] = (long)(puVar5 + 5);
  param_1[2] = lVar7 + uVar9 * 0x28;
  if (__ptr != (undefined8 *)0x0) {
    free(__ptr);
  }
  return puVar5 + 5;
}


// ===== 006d7cb8  FUN_006d7cb8 =====

void FUN_006d7cb8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("vector");
}


// ===== 006d7ccc  FUN_006d7ccc =====

undefined8 * FUN_006d7ccc(long *param_1,undefined8 param_2,undefined4 *param_3)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 local_68;
  undefined8 *local_60;
  long *plStack_58;
  undefined1 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  plVar3 = (long *)FUN_006d7e08(param_1,&local_68,param_2);
  if ((undefined8 *)*plVar3 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)FUN_00759c3c(0x40);
    bVar1 = *(byte *)(param_3 + 2);
    local_50 = 0;
    *(undefined4 *)(puVar4 + 4) = *param_3;
    local_60 = puVar4;
    plStack_58 = param_1 + 1;
    if ((bVar1 & 1) == 0) {
      uVar7 = *(undefined8 *)(param_3 + 2);
      uVar5 = *(undefined8 *)(param_3 + 6);
      puVar4[6] = *(undefined8 *)(param_3 + 4);
      puVar4[5] = uVar7;
      puVar4[7] = uVar5;
    }
    else {
                    /* try { // try from 006d7d6c to 006d7d73 has its CatchHandler @ 006d7de0 */
      FUN_002fb36c(puVar4 + 5,*(undefined8 *)(param_3 + 6),*(undefined8 *)(param_3 + 4));
    }
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = local_68;
    *plVar3 = (long)puVar4;
    puVar6 = puVar4;
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      puVar6 = (undefined8 *)*plVar3;
    }
    plVar3 = (long *)FUN_00328410(param_1[1],puVar6);
    uVar5 = 1;
    param_1[2] = param_1[2] + 1;
    if (*(long *)(lVar2 + 0x28) == local_48) {
      return puVar4;
    }
  }
  else {
    uVar5 = 0;
    if (*(long *)(lVar2 + 0x28) == local_48) {
      return (undefined8 *)*plVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar3,uVar5);
}


// ===== 006d7e08  FUN_006d7e08 =====

long * FUN_006d7e08(long param_1,undefined8 *param_2,long param_3)

{
  void *pvVar1;
  ulong uVar2;
  void *pvVar3;
  ulong uVar4;
  size_t sVar5;
  void *pvVar6;
  void *pvVar7;
  byte bVar8;
  byte bVar9;
  long *plVar10;
  int iVar11;
  long *plVar12;
  long *plVar13;
  
  plVar12 = (long *)(param_1 + 8);
  plVar13 = plVar12;
  if ((long *)*plVar12 != (long *)0x0) {
    pvVar1 = (void *)(param_3 + 9);
    plVar10 = (long *)*plVar12;
    do {
      while( true ) {
        plVar13 = plVar10;
        bVar8 = *(byte *)(param_3 + 8);
        pvVar6 = *(void **)(param_3 + 0x18);
        uVar2 = (ulong)(bVar8 >> 1);
        if ((bVar8 & 1) != 0) {
          uVar2 = *(ulong *)(param_3 + 0x10);
        }
        if ((long)uVar2 < 0) {
          FUN_00676318(uVar2,"string length exceeds max size");
        }
        bVar9 = *(byte *)(plVar13 + 5);
        pvVar7 = (void *)plVar13[7];
        pvVar3 = pvVar1;
        if ((bVar8 & 1) != 0) {
          pvVar3 = pvVar6;
        }
        uVar4 = (ulong)(bVar9 >> 1);
        if ((bVar9 & 1) != 0) {
          uVar4 = plVar13[6];
        }
        if ((long)uVar4 < 0) {
          FUN_00676318(uVar4,"string length exceeds max size");
        }
        pvVar6 = (void *)((long)plVar13 + 0x29);
        if ((bVar9 & 1) != 0) {
          pvVar6 = pvVar7;
        }
        sVar5 = uVar2;
        if (uVar4 <= uVar2) {
          sVar5 = uVar4;
        }
        iVar11 = memcmp(pvVar3,pvVar6,sVar5);
        if ((iVar11 < 0) || ((uVar2 < uVar4 && (iVar11 == 0)))) break;
        bVar8 = *(byte *)(plVar13 + 5);
        pvVar6 = (void *)plVar13[7];
        uVar2 = (ulong)(bVar8 >> 1);
        if ((bVar8 & 1) != 0) {
          uVar2 = plVar13[6];
        }
        if ((long)uVar2 < 0) {
          FUN_00676318(uVar2,"string length exceeds max size");
        }
        bVar9 = *(byte *)(param_3 + 8);
        pvVar3 = (void *)((long)plVar13 + 0x29);
        if ((bVar8 & 1) != 0) {
          pvVar3 = pvVar6;
        }
        pvVar6 = *(void **)(param_3 + 0x18);
        uVar4 = (ulong)(bVar9 >> 1);
        if ((bVar9 & 1) != 0) {
          uVar4 = *(ulong *)(param_3 + 0x10);
        }
        if ((long)uVar4 < 0) {
          FUN_00676318(uVar4,"string length exceeds max size");
          pvVar7 = pvVar1;
          if ((bVar9 & 1) != 0) {
            pvVar7 = pvVar6;
          }
          sVar5 = uVar2;
          if (uVar4 <= uVar2) {
            sVar5 = uVar4;
          }
          iVar11 = memcmp(pvVar3,pvVar7,sVar5);
        }
        else {
          pvVar7 = pvVar1;
          if ((bVar9 & 1) != 0) {
            pvVar7 = pvVar6;
          }
          sVar5 = uVar2;
          if (uVar4 <= uVar2) {
            sVar5 = uVar4;
          }
          iVar11 = memcmp(pvVar3,pvVar7,sVar5);
        }
        if ((-1 < iVar11) && ((uVar4 <= uVar2 || (iVar11 != 0)))) goto LAB_006d7f98;
        plVar12 = plVar13 + 1;
        plVar10 = (long *)*plVar12;
        if ((long *)*plVar12 == (long *)0x0) goto LAB_006d7f98;
      }
      plVar10 = (long *)*plVar13;
      plVar12 = plVar13;
    } while ((long *)*plVar13 != (long *)0x0);
  }
LAB_006d7f98:
  *param_2 = plVar13;
  return plVar12;
}


// ===== 006d7fbc  FUN_006d7fbc =====

void FUN_006d7fbc(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr != (void *)0x0) {
    if ((*(char *)(param_1 + 2) != '\0') && ((*(byte *)((long)__ptr + 0x28) & 1) != 0)) {
      free(*(void **)((long)__ptr + 0x38));
    }
    free(__ptr);
    return;
  }
  return;
}


// ===== 006d800c  FUN_006d800c =====

long FUN_006d800c(long param_1,long param_2,byte *param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  void *__s1;
  size_t __n;
  void *pvVar4;
  byte bVar5;
  byte *__s2;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  
  if (param_2 - param_1 != 0) {
    uVar7 = param_2 - param_1 >> 5;
    do {
      uVar2 = (ulong)(*param_3 >> 1);
      __s2 = param_3 + 1;
      if ((*param_3 & 1) != 0) {
        uVar2 = *(ulong *)(param_3 + 8);
        __s2 = *(byte **)(param_3 + 0x10);
      }
      if ((long)uVar2 < 0) {
        FUN_00676318(uVar2,"string length exceeds max size");
      }
      uVar8 = uVar7 >> 1;
      lVar1 = param_1 + uVar8 * 0x20;
      bVar5 = *(byte *)(lVar1 + 8);
      pvVar4 = *(void **)(lVar1 + 0x18);
      uVar3 = (ulong)(bVar5 >> 1);
      if ((bVar5 & 1) != 0) {
        uVar3 = *(ulong *)(lVar1 + 0x10);
      }
      if ((long)uVar3 < 0) {
        FUN_00676318(uVar3,"string length exceeds max size");
      }
      __s1 = (void *)(lVar1 + 9);
      if ((bVar5 & 1) != 0) {
        __s1 = pvVar4;
      }
      __n = uVar3;
      if (uVar2 <= uVar3) {
        __n = uVar2;
      }
      iVar6 = memcmp(__s1,__s2,__n);
      if ((iVar6 < 0) || ((uVar3 < uVar2 && (iVar6 == 0)))) {
        param_1 = lVar1 + 0x20;
        uVar8 = uVar7 + ~uVar8;
      }
      uVar7 = uVar8;
    } while (uVar7 != 0);
  }
  return param_1;
}


// ===== 006d8120  FUN_006d8120 =====

uint FUN_006d8120(long param_1,long param_2,byte *param_3,undefined8 param_4)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 local_a0;
  byte *local_98;
  ulong local_90;
  undefined4 local_88;
  byte *local_80;
  ulong local_78;
  undefined4 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar6 = param_2 - param_1;
  local_a0 = param_4;
  if (uVar6 != 0) {
    uVar6 = ((long)uVar6 >> 3) * -0x3333333333333333;
    do {
      uVar3 = (ulong)(*param_3 >> 1);
      local_80 = param_3 + 1;
      if ((*param_3 & 1) != 0) {
        uVar3 = *(ulong *)(param_3 + 8);
        local_80 = *(byte **)(param_3 + 0x10);
      }
      if ((long)uVar3 < 0) {
        FUN_00676318(uVar3,"string length exceeds max size");
      }
      uVar4 = uVar6 >> 1;
      local_70 = *(undefined4 *)(param_3 + 0x18);
      lVar5 = param_1 + uVar4 * 0x28;
      local_78 = uVar3;
      uVar3 = FUN_006d8758(&local_a0,lVar5,&local_80);
      uVar6 = uVar6 + ~uVar4;
      lVar5 = lVar5 + 0x28;
      if ((uVar3 & 1) == 0) {
        uVar6 = uVar4;
        lVar5 = param_1;
      }
      param_1 = lVar5;
    } while (uVar6 != 0);
    if (param_1 == param_2) {
      uVar2 = 0;
      if (*(long *)(lVar1 + 0x28) != local_68) goto LAB_006d8288;
      goto LAB_006d8250;
    }
    uVar6 = *(ulong *)(param_3 + 8);
    local_98 = *(byte **)(param_3 + 0x10);
    if ((*param_3 & 1) == 0) {
      local_98 = param_3 + 1;
      uVar6 = (ulong)(*param_3 >> 1);
    }
    if ((long)uVar6 < 0) {
      FUN_00676318(uVar6,"string length exceeds max size");
    }
    local_88 = *(undefined4 *)(param_3 + 0x18);
    local_90 = uVar6;
    uVar2 = FUN_006d8604(&local_a0,&local_98,param_1);
    uVar6 = (ulong)(uVar2 ^ 1);
  }
  uVar2 = (uint)uVar6;
  if (*(long *)(lVar1 + 0x28) != local_68) {
LAB_006d8288:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_006d8250:
  return uVar2 & 1;
}


// ===== 006d82a0  FUN_006d82a0 =====

void FUN_006d82a0(long *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 uVar12;
  
  lVar3 = tpidr_el0;
  lVar7 = *(long *)(lVar3 + 0x28);
  plVar11 = param_1 + 1;
  plVar9 = plVar11;
  plVar4 = (long *)*plVar11;
joined_r0x006d82e0:
  do {
    if (plVar4 == (long *)0x0) {
LAB_006d8348:
      puVar6 = (undefined8 *)FUN_00759c3c(0x48);
      bVar2 = *(byte *)(param_3 + 2);
      *(undefined4 *)(puVar6 + 4) = *param_3;
      if ((bVar2 & 1) == 0) {
        uVar12 = *(undefined8 *)(param_3 + 2);
        uVar8 = *(undefined8 *)(param_3 + 6);
        puVar6[6] = *(undefined8 *)(param_3 + 4);
        puVar6[5] = uVar12;
        puVar6[7] = uVar8;
      }
      else {
                    /* try { // try from 006d8388 to 006d838f has its CatchHandler @ 006d8404 */
        FUN_002fb36c(puVar6 + 5,*(undefined8 *)(param_3 + 6),*(undefined8 *)(param_3 + 4));
      }
      *puVar6 = 0;
      puVar6[1] = 0;
      uVar1 = param_3[8];
      puVar6[2] = plVar9;
      *plVar11 = (long)puVar6;
      plVar9 = (long *)*param_1;
      *(undefined4 *)(puVar6 + 8) = uVar1;
      puVar10 = puVar6;
      if (*plVar9 != 0) {
        *param_1 = *plVar9;
        puVar10 = (undefined8 *)*plVar11;
      }
      FUN_00328410(param_1[1],puVar10);
      uVar8 = 1;
      param_1[2] = param_1[2] + 1;
LAB_006d83d8:
      if (*(long *)(lVar3 + 0x28) == lVar7) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(puVar6,uVar8);
    }
    uVar5 = FUN_006d847c(param_1 + 3,param_2,plVar4 + 4);
    plVar9 = plVar4;
    if ((uVar5 & 1) != 0) {
      plVar11 = plVar4;
      plVar4 = (long *)*plVar4;
      goto joined_r0x006d82e0;
    }
    uVar5 = FUN_006d847c(param_1 + 3,plVar4 + 4,param_2);
    if ((uVar5 & 1) == 0) {
      puVar6 = (undefined8 *)*plVar11;
      if (puVar6 != (undefined8 *)0x0) {
        uVar8 = 0;
        goto LAB_006d83d8;
      }
      goto LAB_006d8348;
    }
    plVar11 = plVar4 + 1;
    plVar4 = (long *)*plVar11;
  } while( true );
}


// ===== 006d842c  FUN_006d842c =====

void FUN_006d842c(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr != (void *)0x0) {
    if ((*(char *)(param_1 + 2) != '\0') && ((*(byte *)((long)__ptr + 0x28) & 1) != 0)) {
      free(*(void **)((long)__ptr + 0x38));
    }
    free(__ptr);
    return;
  }
  return;
}


// ===== 006d847c  FUN_006d847c =====

bool FUN_006d847c(undefined8 param_1,long param_2,long param_3)

{
  size_t __n;
  long lVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  bool bVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  long local_78;
  ulong uStack_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  bVar4 = *(byte *)(param_2 + 8);
  lVar1 = *(long *)(param_2 + 0x18);
  uVar8 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar8 = *(ulong *)(param_2 + 0x10);
  }
  if ((long)uVar8 < 0) {
    FUN_00676318(uVar8,"string length exceeds max size");
  }
  local_78 = param_2 + 9;
  if ((bVar4 & 1) != 0) {
    local_78 = lVar1;
  }
  uVar10 = *(undefined8 *)PTR_DAT_007a32a0;
  uStack_70 = uVar8;
  auVar11 = FUN_006766cc(&local_78,1,uVar10);
  uVar7 = auVar11._8_8_;
  bVar4 = *(byte *)(param_3 + 8);
  lVar1 = *(long *)(param_3 + 0x18);
  iVar2 = *(int *)(param_2 + 0x20);
  uVar8 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar8 = *(ulong *)(param_3 + 0x10);
  }
  if ((long)uVar8 < 0) {
    FUN_00676318(uVar8,"string length exceeds max size");
  }
  local_78 = param_3 + 9;
  if ((bVar4 & 1) != 0) {
    local_78 = lVar1;
  }
  bVar9 = true;
  uStack_70 = uVar8;
  auVar12 = FUN_006766cc(&local_78,1,uVar10);
  uVar8 = auVar12._8_8_;
  iVar3 = *(int *)(param_3 + 0x20);
  __n = uVar7;
  if (uVar8 <= uVar7) {
    __n = uVar8;
  }
  iVar6 = memcmp(auVar11._0_8_,auVar12._0_8_,__n);
  if (-1 < iVar6) {
    if ((uVar7 < uVar8) && (iVar6 == 0)) {
      bVar9 = true;
    }
    else {
      iVar6 = memcmp(auVar12._0_8_,auVar11._0_8_,__n);
      if (iVar6 < 0) {
        bVar9 = false;
      }
      else {
        bVar9 = (uVar7 <= uVar8 || iVar6 != 0) && iVar2 < iVar3;
      }
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return bVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006d8604  FUN_006d8604 =====

bool FUN_006d8604(undefined8 param_1,undefined8 *param_2,long param_3)

{
  size_t __n;
  void *__s1;
  long lVar1;
  ulong uVar2;
  int iVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  bool bVar8;
  undefined1 auVar9 [16];
  long local_78;
  ulong uStack_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  bVar4 = *(byte *)(param_3 + 8);
  lVar1 = *(long *)(param_3 + 0x18);
  uVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar2 = *(ulong *)(param_3 + 0x10);
  }
  if ((long)uVar2 < 0) {
    FUN_00676318(uVar2,"string length exceeds max size");
  }
  local_78 = param_3 + 9;
  if ((bVar4 & 1) != 0) {
    local_78 = lVar1;
  }
  bVar8 = true;
  uStack_70 = uVar2;
  auVar9 = FUN_006766cc(&local_78,1,*(undefined8 *)PTR_DAT_007a32a0);
  uVar7 = auVar9._8_8_;
  __s1 = (void *)*param_2;
  uVar2 = param_2[1];
  iVar3 = *(int *)(param_3 + 0x20);
  __n = uVar2;
  if (uVar7 <= uVar2) {
    __n = uVar7;
  }
  iVar6 = memcmp(__s1,auVar9._0_8_,__n);
  if (-1 < iVar6) {
    if ((uVar2 < uVar7) && (iVar6 == 0)) {
      if (*(long *)(lVar5 + 0x28) == local_68) {
        return true;
      }
      goto LAB_006d8740;
    }
    iVar6 = memcmp(auVar9._0_8_,__s1,__n);
    if ((-1 < iVar6) && ((uVar2 <= uVar7 || (iVar6 != 0)))) {
      if (*(long *)(lVar5 + 0x28) == local_68) {
        return *(int *)(param_2 + 2) < iVar3;
      }
      goto LAB_006d8740;
    }
    bVar8 = false;
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return bVar8;
  }
LAB_006d8740:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006d8758  FUN_006d8758 =====

bool FUN_006d8758(undefined8 param_1,long param_2,undefined8 *param_3)

{
  size_t __n;
  void *__s2;
  long lVar1;
  ulong uVar2;
  int iVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  bool bVar8;
  undefined1 auVar9 [16];
  long local_78;
  ulong uStack_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  bVar4 = *(byte *)(param_2 + 8);
  lVar1 = *(long *)(param_2 + 0x18);
  uVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar2 = *(ulong *)(param_2 + 0x10);
  }
  if ((long)uVar2 < 0) {
    FUN_00676318(uVar2,"string length exceeds max size");
  }
  local_78 = param_2 + 9;
  if ((bVar4 & 1) != 0) {
    local_78 = lVar1;
  }
  bVar8 = true;
  uStack_70 = uVar2;
  auVar9 = FUN_006766cc(&local_78,1,*(undefined8 *)PTR_DAT_007a32a0);
  uVar7 = auVar9._8_8_;
  __s2 = (void *)*param_3;
  uVar2 = param_3[1];
  iVar3 = *(int *)(param_2 + 0x20);
  __n = uVar7;
  if (uVar2 <= uVar7) {
    __n = uVar2;
  }
  iVar6 = memcmp(auVar9._0_8_,__s2,__n);
  if (-1 < iVar6) {
    if ((uVar7 < uVar2) && (iVar6 == 0)) {
      if (*(long *)(lVar5 + 0x28) == local_68) {
        return true;
      }
      goto LAB_006d8890;
    }
    iVar6 = memcmp(__s2,auVar9._0_8_,__n);
    if ((-1 < iVar6) && ((uVar7 <= uVar2 || (iVar6 != 0)))) {
      if (*(long *)(lVar5 + 0x28) == local_68) {
        return iVar3 < *(int *)(param_3 + 2);
      }
      goto LAB_006d8890;
    }
    bVar8 = false;
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return bVar8;
  }
LAB_006d8890:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006d88a8  FUN_006d88a8 =====

void FUN_006d88a8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  size_t sVar2;
  undefined1 *__s2;
  undefined1 *__s1;
  byte bVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  byte local_c8;
  undefined1 auStack_c7 [7];
  ulong local_c0;
  undefined1 *puStack_b8;
  byte local_b0;
  undefined1 auStack_af [7];
  ulong local_a8;
  undefined1 *local_a0;
  undefined1 auStack_98 [8];
  long local_90;
  void *local_88;
  ulong uStack_80;
  undefined1 auStack_78 [8];
  long local_70;
  void *local_68;
  ulong uStack_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  FUN_006d8ab8(auStack_78);
  FUN_006d8ab8(auStack_98,param_1,param_3);
  auVar10 = FUN_006766cc(auStack_78,0,local_90);
  uVar7 = auVar10._8_8_;
  auVar11 = FUN_006766cc(auStack_98,0,local_70);
  uVar8 = auVar11._8_8_;
  sVar2 = uVar7;
  if (uVar8 <= uVar7) {
    sVar2 = uVar8;
  }
  iVar6 = memcmp(auVar10._0_8_,auVar11._0_8_,sVar2);
  if (iVar6 < 0) {
    uVar9 = 0xffffffff;
  }
  else {
    uVar1 = 0xffffffff;
    if (iVar6 != 0) {
      uVar1 = 0;
    }
    uVar9 = (ulong)uVar1;
    if ((uVar8 <= uVar7) && (iVar6 == 0)) {
      if (uVar7 <= uVar8) {
        if (local_70 == local_90) {
          sVar2 = uStack_60;
          if (uStack_80 <= uStack_60) {
            sVar2 = uStack_80;
          }
          iVar6 = memcmp(local_68,local_88,sVar2);
          if (iVar6 < 0) {
            uVar9 = 1;
          }
          else {
            uVar9 = (ulong)(uStack_60 < uStack_80 && iVar6 == 0);
          }
        }
        else {
          FUN_006d6900(&local_b0,param_2,*param_1);
                    /* try { // try from 006d89e0 to 006d89ef has its CatchHandler @ 006d8a88 */
          FUN_006d6900(&local_c8,param_3,*param_1);
          bVar3 = local_b0;
          bVar5 = (local_c8 & 1) == 0;
          __s2 = puStack_b8;
          if (bVar5) {
            __s2 = auStack_c7;
          }
          uVar7 = (ulong)(local_c8 >> 1);
          if (!bVar5) {
            uVar7 = local_c0;
          }
          __s1 = local_a0;
          uVar8 = local_a8;
          if ((local_b0 & 1) == 0) {
            __s1 = auStack_af;
            uVar8 = (ulong)(local_b0 >> 1);
          }
          sVar2 = uVar7;
          if (uVar8 <= uVar7) {
            sVar2 = uVar8;
          }
          iVar6 = memcmp(__s1,__s2,sVar2);
          bVar5 = uVar8 < uVar7;
          if (iVar6 != 0) {
            bVar5 = iVar6 < 0;
          }
          uVar9 = (ulong)bVar5;
          if ((local_c8 & 1) != 0) {
            free(puStack_b8);
            bVar3 = local_b0;
          }
          if ((bVar3 & 1) != 0) {
            free(local_a0);
          }
        }
        goto LAB_006d8944;
      }
      uVar9 = 0;
    }
  }
  uVar9 = uVar9 >> 0x1f;
LAB_006d8944:
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar9);
  }
  return;
}


// ===== 006d8ab8  FUN_006d8ab8 =====

void FUN_006d8ab8(long *param_1,undefined8 *param_2,int *param_3)

{
  ulong uVar1;
  byte bVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  lVar5 = *(long *)*param_2 + (long)*param_3 * 0x28;
  bVar2 = *(byte *)(lVar5 + 0x10);
  lVar4 = *(long *)(lVar5 + 0x20);
  bVar3 = (bVar2 & 1) != 0;
  uVar1 = (ulong)(bVar2 >> 1);
  if (bVar3) {
    uVar1 = *(ulong *)(lVar5 + 0x18);
  }
  if ((long)uVar1 < 0) {
    FUN_00676318(uVar1,"string length exceeds max size");
    if ((bVar2 & 1) == 0) {
      lVar4 = lVar5 + 0x11;
    }
    bVar2 = *(byte *)(param_3 + 2);
    lVar5 = *(long *)(param_3 + 6);
    uVar6 = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      uVar6 = *(ulong *)(param_3 + 4);
    }
  }
  else {
    if (!bVar3) {
      lVar4 = lVar5 + 0x11;
    }
    if (uVar1 == 0) {
      bVar2 = *(byte *)(param_3 + 2);
      lVar4 = *(long *)(param_3 + 6);
      uVar6 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar6 = *(ulong *)(param_3 + 4);
      }
      if ((long)uVar6 < 0) {
        FUN_00676318(uVar6,"string length exceeds max size");
      }
      param_1[2] = 0;
      param_1[3] = 0;
      lVar5 = (long)param_3 + 9;
      if ((bVar2 & 1) != 0) {
        lVar5 = lVar4;
      }
      *param_1 = lVar5;
      lVar4 = 8;
      goto LAB_006d8b6c;
    }
    bVar2 = *(byte *)(param_3 + 2);
    lVar5 = *(long *)(param_3 + 6);
    uVar6 = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      uVar6 = *(ulong *)(param_3 + 4);
    }
  }
  if ((long)uVar6 < 0) {
    FUN_00676318(uVar6,"string length exceeds max size");
  }
  *param_1 = lVar4;
  param_1[1] = uVar1;
  lVar4 = (long)param_3 + 9;
  if ((bVar2 & 1) != 0) {
    lVar4 = lVar5;
  }
  param_1[2] = lVar4;
  lVar4 = 0x18;
LAB_006d8b6c:
  *(ulong *)((long)param_1 + lVar4) = uVar6;
  return;
}


// ===== 006d8c1c  FUN_006d8c1c =====

undefined8 * FUN_006d8c1c(long *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  undefined8 *local_60;
  long *plStack_58;
  undefined1 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  plVar3 = (long *)FUN_006d8d5c(param_1,param_2,&local_68,auStack_70,param_3);
  if ((undefined8 *)*plVar3 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)FUN_00759c3c(0x40);
    bVar1 = *(byte *)(param_4 + 2);
    local_50 = 0;
    *(undefined4 *)(puVar4 + 4) = *param_4;
    local_60 = puVar4;
    plStack_58 = param_1 + 1;
    if ((bVar1 & 1) == 0) {
      uVar7 = *(undefined8 *)(param_4 + 2);
      uVar5 = *(undefined8 *)(param_4 + 6);
      puVar4[6] = *(undefined8 *)(param_4 + 4);
      puVar4[5] = uVar7;
      puVar4[7] = uVar5;
    }
    else {
                    /* try { // try from 006d8cc0 to 006d8cc7 has its CatchHandler @ 006d8d34 */
      FUN_002fb36c(puVar4 + 5,*(undefined8 *)(param_4 + 6),*(undefined8 *)(param_4 + 4));
    }
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = local_68;
    *plVar3 = (long)puVar4;
    puVar6 = puVar4;
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      puVar6 = (undefined8 *)*plVar3;
    }
    plVar3 = (long *)FUN_00328410(param_1[1],puVar6);
    uVar5 = 1;
    param_1[2] = param_1[2] + 1;
    if (*(long *)(lVar2 + 0x28) == local_48) {
      return puVar4;
    }
  }
  else {
    uVar5 = 0;
    if (*(long *)(lVar2 + 0x28) == local_48) {
      return (undefined8 *)*plVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar3,uVar5);
}


// ===== 006d8d5c  FUN_006d8d5c =====

long * FUN_006d8d5c(undefined8 *param_1,long *param_2,long *param_3,long *param_4,undefined8 param_5
                   )

{
  long *plVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar8 = param_1 + 1;
  plVar7 = plVar8;
  if ((plVar8 == param_2) ||
     (uVar3 = FUN_006d88a8(param_1 + 3,param_5,param_2 + 4), (uVar3 & 1) != 0)) {
    plVar6 = param_2;
    if ((long *)*param_1 != param_2) {
      plVar5 = param_2;
      plVar1 = (long *)*param_2;
      if ((long *)*param_2 == (long *)0x0) {
        do {
          plVar6 = (long *)plVar5[2];
          bVar2 = (long *)*plVar6 == plVar5;
          plVar5 = plVar6;
        } while (bVar2);
      }
      else {
        do {
          plVar6 = plVar1;
          plVar1 = (long *)plVar6[1];
        } while ((long *)plVar6[1] != (long *)0x0);
      }
      uVar3 = FUN_006d88a8(param_1 + 3,plVar6 + 4,param_5);
      if ((uVar3 & 1) == 0) {
        plVar6 = (long *)*plVar8;
        while (plVar6 != (long *)0x0) {
          while (plVar7 = plVar6, uVar3 = FUN_006d88a8(param_1 + 3,param_5,plVar7 + 4),
                (uVar3 & 1) != 0) {
            plVar6 = (long *)*plVar7;
            plVar8 = plVar7;
            if ((long *)*plVar7 == (long *)0x0) goto LAB_006d8e9c;
          }
          uVar3 = FUN_006d88a8(param_1 + 3,plVar7 + 4,param_5);
          if ((uVar3 & 1) == 0) break;
          plVar8 = plVar7 + 1;
          plVar6 = (long *)*plVar8;
        }
        goto LAB_006d8e9c;
      }
    }
    if (*param_2 == 0) {
      *param_3 = (long)param_2;
      plVar6 = param_2;
    }
    else {
      *param_3 = (long)plVar6;
      plVar6 = plVar6 + 1;
    }
  }
  else {
    uVar3 = FUN_006d88a8(param_1 + 3,param_2 + 4,param_5);
    if ((uVar3 & 1) == 0) {
      *param_3 = (long)param_2;
      *param_4 = (long)param_2;
      return param_4;
    }
    plVar6 = param_2 + 1;
    plVar4 = (long *)*plVar6;
    plVar5 = param_2;
    plVar1 = plVar4;
    if (plVar4 == (long *)0x0) {
      do {
        plVar9 = (long *)plVar5[2];
        bVar2 = (long *)*plVar9 != plVar5;
        plVar5 = plVar9;
      } while (bVar2);
    }
    else {
      do {
        plVar9 = plVar1;
        plVar1 = (long *)*plVar9;
      } while ((long *)*plVar9 != (long *)0x0);
    }
    if (plVar9 != plVar8) {
      uVar3 = FUN_006d88a8(param_1 + 3,param_5,plVar9 + 4);
      if ((uVar3 & 1) == 0) {
        plVar6 = (long *)*plVar8;
        while (plVar6 != (long *)0x0) {
          while (plVar7 = plVar6, uVar3 = FUN_006d88a8(param_1 + 3,param_5,plVar7 + 4),
                (uVar3 & 1) != 0) {
            plVar6 = (long *)*plVar7;
            plVar8 = plVar7;
            if ((long *)*plVar7 == (long *)0x0) goto LAB_006d8e9c;
          }
          uVar3 = FUN_006d88a8(param_1 + 3,plVar7 + 4,param_5);
          if ((uVar3 & 1) == 0) break;
          plVar8 = plVar7 + 1;
          plVar6 = (long *)*plVar8;
        }
LAB_006d8e9c:
        *param_3 = (long)plVar7;
        return plVar8;
      }
      plVar4 = (long *)*plVar6;
    }
    if (plVar4 == (long *)0x0) {
      *param_3 = (long)param_2;
    }
    else {
      *param_3 = (long)plVar9;
      plVar6 = plVar9;
    }
  }
  return plVar6;
}


// ===== 006d8f7c  FUN_006d8f7c =====

void FUN_006d8f7c(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr != (void *)0x0) {
    if ((*(char *)(param_1 + 2) != '\0') && ((*(byte *)((long)__ptr + 0x28) & 1) != 0)) {
      free(*(void **)((long)__ptr + 0x38));
    }
    free(__ptr);
    return;
  }
  return;
}


// ===== 006d8fcc  FUN_006d8fcc =====

void FUN_006d8fcc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  size_t sVar2;
  void *__s1;
  long lVar3;
  undefined1 *__s2;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  byte local_b8;
  undefined1 auStack_b7 [7];
  ulong local_b0;
  undefined1 *local_a8;
  undefined1 auStack_a0 [8];
  long local_98;
  void *local_90;
  ulong uStack_88;
  undefined8 local_80;
  long lStack_78;
  void *local_70;
  ulong uStack_68;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  lStack_78 = param_2[1];
  local_80 = *param_2;
  local_70 = (void *)0x0;
  uStack_68 = 0;
  FUN_006d8ab8(auStack_a0,param_1,param_3);
  auVar9 = FUN_006766cc(&local_80,0,local_98);
  uVar6 = auVar9._8_8_;
  auVar10 = FUN_006766cc(auStack_a0,0,lStack_78);
  uVar7 = auVar10._8_8_;
  sVar2 = uVar6;
  if (uVar7 <= uVar6) {
    sVar2 = uVar7;
  }
  iVar5 = memcmp(auVar9._0_8_,auVar10._0_8_,sVar2);
  uVar4 = uStack_68;
  if (iVar5 < 0) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar1 = 0xffffffff;
    if (iVar5 != 0) {
      uVar1 = 0;
    }
    uVar8 = (ulong)uVar1;
    if ((uVar7 <= uVar6) && (iVar5 == 0)) {
      if (uVar6 <= uVar7) {
        if (lStack_78 == local_98) {
          sVar2 = uStack_68;
          if (uStack_88 <= uStack_68) {
            sVar2 = uStack_88;
          }
          iVar5 = memcmp(local_70,local_90,sVar2);
          if (iVar5 < 0) {
            uVar8 = 1;
          }
          else {
            uVar8 = (ulong)(uVar4 < uStack_88 && iVar5 == 0);
          }
        }
        else {
          __s1 = (void *)*param_2;
          uVar7 = param_2[1];
          FUN_006d6900(&local_b8,param_3,*param_1);
          uVar6 = local_b0;
          __s2 = local_a8;
          if ((local_b8 & 1) == 0) {
            uVar6 = (ulong)(local_b8 >> 1);
            __s2 = auStack_b7;
          }
          if ((long)uVar6 < 0) {
                    /* try { // try from 006d917c to 006d918b has its CatchHandler @ 006d9190 */
            FUN_00676318(uVar6,"string length exceeds max size");
          }
          sVar2 = uVar7;
          if (uVar6 <= uVar7) {
            sVar2 = uVar6;
          }
          iVar5 = memcmp(__s1,__s2,sVar2);
          if (iVar5 < 0) {
            uVar8 = 1;
          }
          else {
            uVar8 = (ulong)(uVar7 < uVar6 && iVar5 == 0);
          }
          if ((local_b8 & 1) != 0) {
            free(local_a8);
          }
        }
        goto LAB_006d9068;
      }
      uVar8 = 0;
    }
  }
  uVar8 = uVar8 >> 0x1f;
LAB_006d9068:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
}


// ===== 006d91c0  FUN_006d91c0 =====

void FUN_006d91c0(undefined8 *param_1)

{
  void *__ptr;
  void *pvVar1;
  
  __ptr = (void *)*param_1;
  if (__ptr == (void *)0x0) {
    return;
  }
  pvVar1 = (void *)param_1[1];
  if (pvVar1 == __ptr) {
    param_1[1] = __ptr;
    free(__ptr);
    return;
  }
  do {
    if ((*(byte *)((long)pvVar1 + -0x18) & 1) != 0) {
      free(*(void **)((long)pvVar1 + -8));
    }
    pvVar1 = (void *)((long)pvVar1 + -0x20);
  } while (pvVar1 != __ptr);
  param_1[1] = __ptr;
  free((void *)*param_1);
  return;
}


// ===== 006d9248  FUN_006d9248 =====

void FUN_006d9248(long *param_1)

{
  undefined8 *puVar1;
  void *__ptr;
  void *pvVar2;
  
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    puVar1 = (undefined8 *)*param_1;
    __ptr = (void *)*puVar1;
    if (__ptr != (void *)0x0) {
      pvVar2 = (void *)puVar1[1];
      if (pvVar2 == __ptr) {
        puVar1[1] = __ptr;
        free(__ptr);
        return;
      }
      do {
        if ((*(byte *)((long)pvVar2 + -0x18) & 1) != 0) {
          free(*(void **)((long)pvVar2 + -8));
        }
        pvVar2 = (void *)((long)pvVar2 + -0x20);
      } while (pvVar2 != __ptr);
      pvVar2 = *(void **)*param_1;
      puVar1[1] = __ptr;
      free(pvVar2);
      return;
    }
  }
  return;
}


// ===== 006d92e0  FUN_006d92e0 =====

void FUN_006d92e0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("vector");
}


// ===== 006d92f4  FUN_006d92f4 =====

undefined4 *
FUN_006d92f4(long *param_1,long *param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5
            )

{
  ulong uVar1;
  void *__s1;
  ulong uVar2;
  void *__s2;
  size_t __n;
  void *pvVar3;
  byte bVar4;
  byte bVar5;
  long *plVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  
  if (param_1 != param_2) {
    do {
      if (param_3 == param_4) {
        do {
          *param_5 = (int)param_1[4];
          FUN_007139b0(param_5 + 2,param_1 + 5);
          plVar6 = (long *)param_1[1];
          plVar9 = param_1;
          if ((long *)param_1[1] == (long *)0x0) {
            do {
              param_1 = (long *)plVar9[2];
              bVar7 = (long *)*param_1 != plVar9;
              plVar9 = param_1;
            } while (bVar7);
          }
          else {
            do {
              param_1 = plVar6;
              plVar6 = (long *)*param_1;
            } while ((long *)*param_1 != (long *)0x0);
          }
          param_5 = param_5 + 8;
        } while (param_1 != param_2);
        return param_5;
      }
      bVar4 = *(byte *)(param_3 + 2);
      pvVar3 = *(void **)(param_3 + 6);
      uVar1 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        uVar1 = *(ulong *)(param_3 + 4);
      }
      if ((long)uVar1 < 0) {
        FUN_00676318(uVar1,"string length exceeds max size");
      }
      bVar5 = *(byte *)(param_1 + 5);
      __s1 = (void *)((long)param_3 + 9);
      if ((bVar4 & 1) != 0) {
        __s1 = pvVar3;
      }
      pvVar3 = (void *)param_1[7];
      uVar2 = (ulong)(bVar5 >> 1);
      if ((bVar5 & 1) != 0) {
        uVar2 = param_1[6];
      }
      if ((long)uVar2 < 0) {
        FUN_00676318(uVar2,"string length exceeds max size");
      }
      __s2 = (void *)((long)param_1 + 0x29);
      if ((bVar5 & 1) != 0) {
        __s2 = pvVar3;
      }
      __n = uVar1;
      if (uVar2 <= uVar1) {
        __n = uVar2;
      }
      iVar8 = memcmp(__s1,__s2,__n);
      if ((iVar8 < 0) || ((uVar1 < uVar2 && (iVar8 == 0)))) {
        *param_5 = *param_3;
        FUN_007139b0(param_5 + 2,param_3 + 2);
        param_3 = param_3 + 8;
      }
      else {
        *param_5 = (int)param_1[4];
        FUN_007139b0(param_5 + 2,param_1 + 5);
        plVar6 = (long *)param_1[1];
        plVar9 = param_1;
        if ((long *)param_1[1] == (long *)0x0) {
          do {
            param_1 = (long *)plVar9[2];
            bVar7 = (long *)*param_1 != plVar9;
            plVar9 = param_1;
          } while (bVar7);
        }
        else {
          do {
            param_1 = plVar6;
            plVar6 = (long *)*param_1;
          } while ((long *)*param_1 != (long *)0x0);
        }
      }
      param_5 = param_5 + 8;
    } while (param_1 != param_2);
  }
  for (; param_3 != param_4; param_3 = param_3 + 8) {
    *param_5 = *param_3;
    FUN_007139b0(param_5 + 2,param_3 + 2);
    param_5 = param_5 + 8;
  }
  return param_5;
}


// ===== 006d94f4  FUN_006d94f4 =====

void FUN_006d94f4(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_006d94f4(param_1,*param_2);
    FUN_006d94f4(param_1,param_2[1]);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      free((void *)param_2[7]);
    }
    free(param_2);
    return;
  }
  return;
}


// ===== 006d9544  FUN_006d9544 =====

void FUN_006d9544(undefined8 *param_1)

{
  void *__ptr;
  void *pvVar1;
  
  __ptr = (void *)*param_1;
  if (__ptr == (void *)0x0) {
    return;
  }
  pvVar1 = (void *)param_1[1];
  if (pvVar1 == __ptr) {
    param_1[1] = __ptr;
    free(__ptr);
    return;
  }
  do {
    if ((*(byte *)((long)pvVar1 + -0x18) & 1) != 0) {
      free(*(void **)((long)pvVar1 + -8));
    }
    pvVar1 = (void *)((long)pvVar1 + -0x20);
  } while (pvVar1 != __ptr);
  param_1[1] = __ptr;
  free((void *)*param_1);
  return;
}


// ===== 006d95cc  FUN_006d95cc =====

void FUN_006d95cc(long *param_1)

{
  undefined8 *puVar1;
  void *__ptr;
  void *pvVar2;
  
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    puVar1 = (undefined8 *)*param_1;
    __ptr = (void *)*puVar1;
    if (__ptr != (void *)0x0) {
      pvVar2 = (void *)puVar1[1];
      if (pvVar2 == __ptr) {
        puVar1[1] = __ptr;
        free(__ptr);
        return;
      }
      do {
        if ((*(byte *)((long)pvVar2 + -0x18) & 1) != 0) {
          free(*(void **)((long)pvVar2 + -8));
        }
        pvVar2 = (void *)((long)pvVar2 + -0x20);
      } while (pvVar2 != __ptr);
      pvVar2 = *(void **)*param_1;
      puVar1[1] = __ptr;
      free(pvVar2);
      return;
    }
  }
  return;
}


// ===== 006d9664  FUN_006d9664 =====

void FUN_006d9664(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("vector");
}


// ===== 006d9678  FUN_006d9678 =====

undefined4 *
FUN_006d9678(long *param_1,long *param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5
            ,undefined8 param_6)

{
  long *plVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  
  if (param_1 != param_2) {
    do {
      if (param_3 == param_4) {
        do {
          *param_5 = (int)param_1[4];
          FUN_007139b0(param_5 + 2,param_1 + 5);
          plVar1 = (long *)param_1[1];
          plVar4 = param_1;
          if ((long *)param_1[1] == (long *)0x0) {
            do {
              param_1 = (long *)plVar4[2];
              bVar2 = (long *)*param_1 != plVar4;
              plVar4 = param_1;
            } while (bVar2);
          }
          else {
            do {
              param_1 = plVar1;
              plVar1 = (long *)*param_1;
            } while ((long *)*param_1 != (long *)0x0);
          }
          param_5 = param_5 + 8;
        } while (param_1 != param_2);
        return param_5;
      }
      uVar3 = FUN_006d88a8(param_6,param_3,param_1 + 4);
      if ((uVar3 & 1) == 0) {
        *param_5 = (int)param_1[4];
        FUN_007139b0(param_5 + 2,param_1 + 5);
        plVar1 = (long *)param_1[1];
        plVar4 = param_1;
        if ((long *)param_1[1] == (long *)0x0) {
          do {
            param_1 = (long *)plVar4[2];
            bVar2 = (long *)*param_1 != plVar4;
            plVar4 = param_1;
          } while (bVar2);
        }
        else {
          do {
            param_1 = plVar1;
            plVar1 = (long *)*param_1;
          } while ((long *)*param_1 != (long *)0x0);
        }
      }
      else {
        *param_5 = *param_3;
        FUN_007139b0(param_5 + 2,param_3 + 2);
        param_3 = param_3 + 8;
      }
      param_5 = param_5 + 8;
    } while (param_1 != param_2);
  }
  for (; param_3 != param_4; param_3 = param_3 + 8) {
    *param_5 = *param_3;
    FUN_007139b0(param_5 + 2,param_3 + 2);
    param_5 = param_5 + 8;
  }
  return param_5;
}


// ===== 006d97e4  FUN_006d97e4 =====

void FUN_006d97e4(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_006d97e4(param_1,*param_2);
    FUN_006d97e4(param_1,param_2[1]);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      free((void *)param_2[7]);
    }
    free(param_2);
    return;
  }
  return;
}


// ===== 006d9834  FUN_006d9834 =====

void FUN_006d9834(undefined8 *param_1)

{
  void *__ptr;
  void *pvVar1;
  
  __ptr = (void *)*param_1;
  if (__ptr == (void *)0x0) {
    return;
  }
  pvVar1 = (void *)param_1[1];
  if (pvVar1 == __ptr) {
    param_1[1] = __ptr;
    free(__ptr);
    return;
  }
  do {
    if ((*(byte *)((long)pvVar1 + -0x20) & 1) != 0) {
      free(*(void **)((long)pvVar1 + -0x10));
    }
    pvVar1 = (void *)((long)pvVar1 + -0x28);
  } while (pvVar1 != __ptr);
  param_1[1] = __ptr;
  free((void *)*param_1);
  return;
}


// ===== 006d98bc  FUN_006d98bc =====

void FUN_006d98bc(long *param_1)

{
  undefined8 *puVar1;
  void *__ptr;
  void *pvVar2;
  
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    puVar1 = (undefined8 *)*param_1;
    __ptr = (void *)*puVar1;
    if (__ptr != (void *)0x0) {
      pvVar2 = (void *)puVar1[1];
      if (pvVar2 == __ptr) {
        puVar1[1] = __ptr;
        free(__ptr);
        return;
      }
      do {
        if ((*(byte *)((long)pvVar2 + -0x20) & 1) != 0) {
          free(*(void **)((long)pvVar2 + -0x10));
        }
        pvVar2 = (void *)((long)pvVar2 + -0x28);
      } while (pvVar2 != __ptr);
      pvVar2 = *(void **)*param_1;
      puVar1[1] = __ptr;
      free(pvVar2);
      return;
    }
  }
  return;
}


// ===== 006d9954  FUN_006d9954 =====

void FUN_006d9954(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("vector");
}


// ===== 006d9968  FUN_006d9968 =====

undefined4 *
FUN_006d9968(long *param_1,long *param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5
            ,undefined8 param_6)

{
  undefined4 *puVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  
  if (param_1 != param_2) {
    do {
      if (param_3 == param_4) {
        do {
          *param_5 = (int)param_1[4];
          FUN_007139b0(param_5 + 2,param_1 + 5);
          plVar4 = (long *)param_1[1];
          param_5[8] = (int)param_1[8];
          plVar5 = param_1;
          if (plVar4 == (long *)0x0) {
            do {
              param_1 = (long *)plVar5[2];
              bVar2 = (long *)*param_1 != plVar5;
              plVar5 = param_1;
            } while (bVar2);
          }
          else {
            do {
              param_1 = plVar4;
              plVar4 = (long *)*param_1;
            } while ((long *)*param_1 != (long *)0x0);
          }
          param_5 = param_5 + 10;
        } while (param_1 != param_2);
        return param_5;
      }
      uVar3 = FUN_006d847c(param_6,param_3,param_1 + 4);
      if ((uVar3 & 1) == 0) {
        *param_5 = (int)param_1[4];
        FUN_007139b0(param_5 + 2,param_1 + 5);
        plVar4 = (long *)param_1[1];
        param_5[8] = (int)param_1[8];
        plVar5 = param_1;
        if (plVar4 == (long *)0x0) {
          do {
            param_1 = (long *)plVar5[2];
            bVar2 = (long *)*param_1 != plVar5;
            plVar5 = param_1;
          } while (bVar2);
        }
        else {
          do {
            param_1 = plVar4;
            plVar4 = (long *)*param_1;
          } while ((long *)*param_1 != (long *)0x0);
        }
      }
      else {
        *param_5 = *param_3;
        FUN_007139b0(param_5 + 2,param_3 + 2);
        puVar1 = param_3 + 8;
        param_3 = param_3 + 10;
        param_5[8] = *puVar1;
      }
      param_5 = param_5 + 10;
    } while (param_1 != param_2);
  }
  for (; param_3 != param_4; param_3 = param_3 + 10) {
    *param_5 = *param_3;
    FUN_007139b0(param_5 + 2,param_3 + 2);
    param_5[8] = param_3[8];
    param_5 = param_5 + 10;
  }
  return param_5;
}


// ===== 006d9adc  FUN_006d9adc =====

void FUN_006d9adc(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_006d9adc(param_1,*param_2);
    FUN_006d9adc(param_1,param_2[1]);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      free((void *)param_2[7]);
    }
    free(param_2);
    return;
  }
  return;
}


// ===== 006d9b2c  FUN_006d9b2c =====

void FUN_006d9b2c(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  void *__src;
  size_t sVar4;
  void *pvVar5;
  size_t __n;
  
  pvVar5 = (void *)param_1[1];
  if ((ulong)((param_1[2] - (long)pvVar5 >> 3) * -0x5555555555555555) < param_2) {
    __src = (void *)*param_1;
    sVar4 = (long)pvVar5 - (long)__src;
    uVar1 = ((long)sVar4 >> 3) * -0x5555555555555555 + param_2;
    if (0xaaaaaaaaaaaaaaa < uVar1) {
      FUN_00304228(param_1);
LAB_006d9cbc:
                    /* WARNING: Subroutine does not return */
      FUN_002f9ee0();
    }
    lVar2 = param_1[2] - (long)__src >> 3;
    uVar3 = lVar2 * 0x5555555555555556;
    if (uVar3 < uVar1 || uVar3 - uVar1 == 0) {
      uVar3 = uVar1;
    }
    if (0x555555555555554 < (ulong)(lVar2 * -0x5555555555555555)) {
      uVar3 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar3 == 0) {
      lVar2 = 0;
    }
    else {
      if (0xaaaaaaaaaaaaaaa < uVar3) goto LAB_006d9cbc;
      lVar2 = FUN_00759c3c(uVar3 * 0x18);
    }
    pvVar5 = (void *)(lVar2 + ((long)sVar4 >> 3) * 8);
    __n = ((param_2 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
    memset(pvVar5,0,__n);
    memcpy((void *)((long)pvVar5 - sVar4),__src,sVar4);
    *param_1 = (void *)((long)pvVar5 - sVar4);
    param_1[1] = (long)pvVar5 + __n;
    param_1[2] = lVar2 + uVar3 * 0x18;
    if (__src != (void *)0x0) {
      free(__src);
      return;
    }
  }
  else {
    if (param_2 != 0) {
      sVar4 = ((param_2 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
      memset(pvVar5,0,sVar4);
      pvVar5 = (void *)((long)pvVar5 + sVar4);
    }
    param_1[1] = pvVar5;
  }
  return;
}


// ===== 006d9cc0  FUN_006d9cc0 =====

void FUN_006d9cc0(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar1 = (void *)param_1[0x15];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[0x16];
    pvVar3 = pvVar1;
    if (pvVar2 != pvVar1) {
      do {
        if ((*(byte *)((long)pvVar2 + -0x20) & 1) != 0) {
          free(*(void **)((long)pvVar2 + -0x10));
        }
        pvVar2 = (void *)((long)pvVar2 + -0x28);
      } while (pvVar2 != pvVar1);
      pvVar3 = (void *)param_1[0x15];
    }
    param_1[0x16] = pvVar1;
    free(pvVar3);
  }
  FUN_006d9adc(param_1 + 0x11,param_1[0x12]);
  pvVar1 = (void *)param_1[0xe];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[0xf];
    pvVar3 = pvVar1;
    if (pvVar2 != pvVar1) {
      do {
        if ((*(byte *)((long)pvVar2 + -0x18) & 1) != 0) {
          free(*(void **)((long)pvVar2 + -8));
        }
        pvVar2 = (void *)((long)pvVar2 + -0x20);
      } while (pvVar2 != pvVar1);
      pvVar3 = (void *)param_1[0xe];
    }
    param_1[0xf] = pvVar1;
    free(pvVar3);
  }
  FUN_006d97e4(param_1 + 10,param_1[0xb]);
  pvVar1 = (void *)param_1[7];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[8];
    pvVar3 = pvVar1;
    if (pvVar2 != pvVar1) {
      do {
        if ((*(byte *)((long)pvVar2 + -0x18) & 1) != 0) {
          free(*(void **)((long)pvVar2 + -8));
        }
        pvVar2 = (void *)((long)pvVar2 + -0x20);
      } while (pvVar2 != pvVar1);
      pvVar3 = (void *)param_1[7];
    }
    param_1[8] = pvVar1;
    free(pvVar3);
  }
  FUN_006d94f4(param_1 + 3,param_1[4]);
  pvVar1 = (void *)*param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  pvVar3 = (void *)param_1[1];
  if (pvVar3 != pvVar1) {
    do {
      if ((*(byte *)((long)pvVar3 + -0x18) & 1) != 0) {
        free(*(void **)((long)pvVar3 + -8));
      }
      pvVar3 = (void *)((long)pvVar3 + -0x28);
    } while (pvVar3 != pvVar1);
    param_1[1] = pvVar1;
    free((void *)*param_1);
    return;
  }
  param_1[1] = pvVar1;
  free(pvVar1);
  return;
}


// ===== 006d9e44  FUN_006d9e44 =====

void FUN_006d9e44(undefined8 param_1,char *param_2,undefined8 *param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  char *__s;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  char acStack_458 [1024];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uStack_478 = param_3[1];
  local_480 = *param_3;
  uStack_468 = param_3[3];
  uStack_470 = param_3[2];
  uVar2 = vsnprintf(acStack_458,0x400,param_2,&local_480);
  if ((int)uVar2 < 0x400) {
    if (-1 < (int)uVar2) {
      FUN_0071302c(param_1,acStack_458,uVar2);
    }
  }
  else {
    __s = (char *)thunk_FUN_00759c3c((ulong)(uVar2 + 1));
    uStack_478 = param_3[1];
    local_480 = *param_3;
    uStack_468 = param_3[3];
    uStack_470 = param_3[2];
    uVar3 = vsnprintf(__s,(ulong)(uVar2 + 1),param_2,&local_480);
    if (uVar3 <= uVar2) {
      FUN_0071302c(param_1,__s,uVar3);
    }
    free(__s);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006d9f38  FUN_006d9f38 =====

void FUN_006d9f38(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 *local_80;
  undefined1 **ppuStack_78;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  ppuStack_78 = &local_80;
  puStack_70 = auStack_c0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uStack_68 = 0xffffff80ffffffc8;
                    /* try { // try from 006d9fb8 to 006d9fc7 has its CatchHandler @ 006d9fec */
  local_b8 = param_3;
  uStack_b0 = param_4;
  local_a8 = param_5;
  uStack_a0 = param_6;
  local_98 = param_7;
  uStack_90 = param_8;
  local_88 = param_9;
  local_80 = (undefined1 *)register0x00000008;
  FUN_006d9e44(param_1,param_2,&local_80);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006da01c  FUN_006da01c =====

void FUN_006da01c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  undefined8 local_a0;
  undefined8 uStack_98;
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
  puStack_60 = &local_a0;
  uStack_58 = 0xffffff80ffffffd0;
  local_a0 = param_3;
  uStack_98 = param_4;
  local_90 = param_5;
  uStack_88 = param_6;
  local_80 = param_7;
  uStack_78 = param_8;
  local_70 = (undefined1 *)register0x00000008;
  FUN_006d9e44(param_1,param_2,&local_70);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006da0b0  FUN_006da0b0 =====

float FUN_006da0b0(double param_1)

{
  if (param_1 != 3.4028234663852886e+38 && param_1 < 3.4028234663852886e+38 == NAN(param_1)) {
    if (3.4028235677973366e+38 < param_1) {
      return INFINITY;
    }
    return 3.4028235e+38;
  }
  if (param_1 < -3.4028234663852886e+38) {
    if (param_1 < -3.4028235677973366e+38 != NAN(param_1)) {
      return -INFINITY;
    }
    return -3.4028235e+38;
  }
  return (float)param_1;
}


// ===== 006da138  thunk_FUN_00677fb0 =====

/* WARNING: Type propagation algorithm not settling */

void thunk_FUN_00677fb0(char *param_1,long *param_2)

{
  uint uVar1;
  char *__nptr;
  long lVar2;
  byte bVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  size_t sVar8;
  double dVar9;
  char *pcStack_b8;
  undefined1 uStack_a9;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  char *pcStack_98;
  char acStack_79 [2];
  undefined7 uStack_77;
  long lStack_68;
  
  lVar2 = tpidr_el0;
  lStack_68 = *(long *)(lVar2 + 0x28);
  dVar9 = strtod(param_1,&pcStack_b8);
  if (param_2 != (long *)0x0) {
    *param_2 = (long)pcStack_b8;
  }
  if (*pcStack_b8 == '.') {
    iVar6 = FUN_00677f0c(0x3ff8000000000000,(long)acStack_79 + 1,0x10,0x10,&DAT_001f08ed);
    if (acStack_79[1] != '1') {
      FUN_00675e64(&uStack_a8,3,
                   "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/stubs/strutil.cc"
                   ,0x97b);
      uVar7 = FUN_00675a58(&uStack_a8,"CHECK failed: (temp[0]) == (\'1\'): ");
      FUN_00675ac0(&uStack_a9,uVar7);
      FUN_00675e7c(&uStack_a8);
    }
    if (acStack_79[iVar6] != '5') {
      FUN_00675e64(&uStack_a8,3,
                   "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/stubs/strutil.cc"
                   ,0x97c);
      uVar7 = FUN_00675a58(&uStack_a8,"CHECK failed: (temp[size - 1]) == (\'5\'): ");
      FUN_00675ac0(&uStack_a9,uVar7);
      FUN_00675e7c(&uStack_a8);
    }
    if (6 < iVar6) {
      FUN_00675e64(&uStack_a8,3,
                   "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/stubs/strutil.cc"
                   ,0x97d);
      uVar7 = FUN_00675a58(&uStack_a8,"CHECK failed: (size) <= (6): ");
      FUN_00675ac0(&uStack_a9,uVar7);
      FUN_00675e7c(&uStack_a8);
    }
    uStack_a8 = 0;
    uStack_a0 = 0;
    pcStack_98 = (char *)0x0;
    sVar8 = strlen(param_1);
    FUN_00712ea8(&uStack_a8,sVar8 + (long)iVar6 + -3);
    FUN_0030dd04(&uStack_a8,param_1,pcStack_b8);
    FUN_0071302c(&uStack_a8,(long)acStack_79 + 1U | 1,(long)(iVar6 + -2));
    FUN_00713bdc(&uStack_a8,pcStack_b8 + 1);
    __nptr = pcStack_98;
    if ((uStack_a8 & 1) == 0) {
      __nptr = (char *)((long)&uStack_a8 + 1);
    }
    dVar9 = strtod(__nptr,(char **)((long)acStack_79 + 1));
    uVar4 = uStack_a8;
    if ((param_2 != (long *)0x0) &&
       ((long)pcStack_b8 - (long)param_1 < CONCAT71(uStack_77,acStack_79[1]) - (long)__nptr)) {
      uVar5 = (uint)uStack_a0;
      bVar3 = (byte)uStack_a8 >> 1;
      sVar8 = strlen(param_1);
      uVar1 = (uint)bVar3;
      if ((uVar4 & 1) != 0) {
        uVar1 = uVar5;
      }
      *param_2 = (long)(param_1 +
                       (CONCAT71(uStack_77,acStack_79[1]) -
                       (long)(__nptr + (int)(uVar1 - (int)sVar8))));
    }
    if ((uStack_a8 & 1) != 0) {
      free(pcStack_98);
    }
  }
  if (*(long *)(lVar2 + 0x28) == lStack_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(dVar9);
}


// ===== 006da13c  FUN_006da13c =====

void FUN_006da13c(long *param_1,long param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_007a3660;
  param_1[1] = 0;
  param_1[2] = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar1 + 0x10);
                    /* try { // try from 006da164 to 006da16b has its CatchHandler @ 006da178 */
  FUN_006da18c(param_1,1);
  return;
}


// ===== 006da18c  FUN_006da18c =====

void FUN_006da18c(long param_1,uint param_2)

{
  byte bVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong *puVar9;
  undefined4 uVar10;
  long lVar11;
  long lVar12;
  ulong *puVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  long local_90;
  code *pcStack_88;
  code ***local_80;
  code **local_78;
  long *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar11 = *(long *)(param_1 + 0x10);
  lVar19 = *(long *)(lVar11 + 0x20);
  iVar15 = *(int *)(lVar19 + 0x68);
  if (0 < iVar15) {
    lVar14 = 0;
    iVar16 = 0;
    plVar5 = (long *)(*(long *)(lVar19 + 0x30) + 0x20);
    do {
      if ((*(int *)((long)plVar5 + -0x1c) != 1) || ((*(byte *)(*plVar5 + 1) >> 1 & 1) == 0)) {
        iVar15 = iVar16 * 4;
        iVar16 = iVar16 + 1;
        *(undefined4 *)(param_1 + (*(int *)(lVar11 + 8) + iVar15)) = 0;
        iVar15 = *(int *)(lVar19 + 0x68);
      }
      lVar14 = lVar14 + 1;
      plVar5 = plVar5 + 5;
    } while (lVar14 < iVar15);
  }
  if (*(int *)(lVar11 + 0xc) != -1) {
    puVar9 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar9 = (ulong *)*puVar9;
    }
    FUN_00663dac(param_1 + *(int *)(lVar11 + 0xc),puVar9);
  }
  puVar3 = PTR_DAT_007a32d8;
  if (0 < *(int *)(lVar19 + 4)) {
    lVar14 = 0;
    lVar11 = 0;
    do {
      lVar17 = *(long *)(lVar19 + 0x28);
      lVar8 = lVar17 + lVar14;
      iVar15 = *(int *)(*(long *)(*(long *)(param_1 + 0x10) + 0x28) + lVar11 * 4);
      if ((((*(byte *)(lVar8 + 1) >> 4 & 1) != 0) && (lVar12 = *(long *)(lVar8 + 0x28), lVar12 != 0)
          ) && ((*(int *)(lVar12 + 4) != 1 ||
                ((*(byte *)(*(long *)(lVar12 + 0x20) + 1) >> 1 & 1) == 0)))) goto LAB_006da27c;
      plVar5 = *(long **)(lVar8 + 0x18);
      if ((plVar5 != (long *)0x0) &&
         (pcStack_88 = thunk_FUN_006af330, local_90 = lVar8, *plVar5 != -1)) {
        local_78 = &pcStack_88;
        local_70 = &local_90;
        local_80 = &local_78;
        FUN_00710f84(plVar5,&local_80,FUN_00685640);
      }
      puVar9 = (ulong *)(param_1 + iVar15);
      bVar1 = *(byte *)(lVar17 + lVar14 + 2);
      iVar15 = *(int *)(puVar3 + (ulong)bVar1 * 4);
      if (iVar15 < 6) {
        if (iVar15 < 3) {
          if (iVar15 == 1) goto LAB_006da4b8;
          if (iVar15 == 2) goto LAB_006da47c;
        }
        else if (iVar15 == 3) {
LAB_006da4b8:
          if (((*(byte *)(lVar8 + 1) ^ 0xff) & 0x60) != 0) {
            uVar10 = *(undefined4 *)(lVar17 + lVar14 + 0x40);
            goto LAB_006da53c;
          }
LAB_006da4f8:
          puVar13 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
          if ((*(ulong *)(param_1 + 8) & 1) != 0) {
            puVar13 = (ulong *)*puVar13;
          }
          *puVar9 = 0;
          puVar9[1] = (ulong)puVar13;
        }
        else if (iVar15 == 4) {
LAB_006da47c:
          if (((*(byte *)(lVar8 + 1) ^ 0xff) & 0x60) == 0) goto LAB_006da4f8;
          *puVar9 = *(ulong *)(lVar17 + lVar14 + 0x40);
        }
        else if (iVar15 == 5) {
          if (((*(byte *)(lVar8 + 1) ^ 0xff) & 0x60) == 0) goto LAB_006da4f8;
          *puVar9 = *(ulong *)(lVar17 + lVar14 + 0x40);
        }
      }
      else if (iVar15 < 8) {
        if (iVar15 == 6) {
          if (((*(byte *)(lVar8 + 1) ^ 0xff) & 0x60) == 0) goto LAB_006da4f8;
          *(undefined4 *)puVar9 = *(undefined4 *)(lVar17 + lVar14 + 0x40);
        }
        else if (iVar15 == 7) {
          if (((*(byte *)(lVar8 + 1) ^ 0xff) & 0x60) == 0) goto LAB_006da4f8;
          *(undefined1 *)puVar9 = *(undefined1 *)(lVar17 + lVar14 + 0x40);
        }
      }
      else if (iVar15 == 8) {
        if (((*(byte *)(lVar8 + 1) ^ 0xff) & 0x60) == 0) goto LAB_006da4f8;
        lVar8 = FUN_0068df34(lVar8);
        uVar10 = *(undefined4 *)(lVar8 + 4);
LAB_006da53c:
        *(undefined4 *)puVar9 = uVar10;
      }
      else if (iVar15 == 9) {
        if (((*(byte *)(lVar8 + 1) ^ 0xff) & 0x60) == 0) {
LAB_006da518:
          puVar13 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
          if ((*(ulong *)(param_1 + 8) & 1) != 0) {
            puVar13 = (ulong *)*puVar13;
          }
          puVar9[1] = 0;
          puVar9[2] = 0;
          *puVar9 = (ulong)puVar13;
        }
        else {
          *puVar9 = (ulong)&DAT_007aea80;
        }
      }
      else if (iVar15 == 10) {
        if (((*(byte *)(lVar8 + 1) ^ 0xff) & 0x60) == 0) {
          plVar5 = *(long **)(lVar8 + 0x18);
          if (plVar5 != (long *)0x0) {
            pcStack_88 = thunk_FUN_006af330;
            local_90 = lVar8;
            if (*plVar5 != -1) {
              local_78 = &pcStack_88;
              local_70 = &local_90;
              local_80 = &local_78;
              FUN_00710f84(plVar5,&local_80,FUN_00685640);
            }
            bVar1 = *(byte *)(lVar17 + lVar14 + 2);
          }
          if ((bVar1 != 0xb) || (uVar6 = FUN_0068d830(lVar8), (uVar6 & 1) == 0)) goto LAB_006da518;
          uVar6 = *(ulong *)(param_1 + 8);
          puVar13 = (ulong *)(uVar6 & 0xfffffffffffffffc);
          if ((param_2 & 1) == 0) {
            if ((uVar6 & 1) != 0) {
              puVar13 = (ulong *)*puVar13;
            }
            uVar18 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
            uVar7 = FUN_0068c940(lVar8);
            uVar7 = FUN_006da6f8(uVar18,uVar7);
            if (puVar13 == (ulong *)0x0) goto LAB_006da5b8;
            if ((*(ulong *)(param_1 + 8) & 1) == 0) {
              FUN_006debc0(puVar9,uVar7);
              uVar6 = *(ulong *)(param_1 + 8);
              uVar4 = (uint)uVar6;
            }
            else {
              FUN_006debc0(puVar9,uVar7,
                           *(undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc));
              uVar6 = *(ulong *)(param_1 + 8);
              uVar4 = (uint)uVar6;
            }
            if ((uVar4 >> 1 & 1) == 0) {
              if ((uVar6 & 1) != 0) goto LAB_006da5a4;
LAB_006da454:
              if (uVar6 != 0) {
LAB_006da458:
                FUN_006630c8(uVar6,puVar9,PTR_FUN_007a3668);
              }
            }
          }
          else {
            if ((uVar6 & 1) != 0) {
              puVar13 = (ulong *)*puVar13;
            }
            plVar5 = *(long **)(*(long *)(param_1 + 0x10) + 0x10);
            uVar7 = FUN_0068c940(lVar8);
            uVar7 = (**(code **)(*plVar5 + 0x10))(plVar5,uVar7);
            if (puVar13 == (ulong *)0x0) {
LAB_006da5b8:
              FUN_006deb78(puVar9,uVar7);
            }
            else {
              if ((*(ulong *)(param_1 + 8) & 1) == 0) {
                FUN_006debc0(puVar9);
                uVar6 = *(ulong *)(param_1 + 8);
                uVar4 = (uint)uVar6;
              }
              else {
                FUN_006debc0(puVar9,uVar7,
                             *(undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc));
                uVar6 = *(ulong *)(param_1 + 8);
                uVar4 = (uint)uVar6;
              }
              if ((uVar4 >> 1 & 1) == 0) {
                if ((uVar6 & 1) == 0) goto LAB_006da454;
LAB_006da5a4:
                if (*(ulong *)(uVar6 & 0xfffffffffffffffc) != 0) {
                  uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffc);
                  goto LAB_006da458;
                }
              }
            }
          }
        }
        else {
          *puVar9 = 0;
        }
      }
LAB_006da27c:
      lVar11 = lVar11 + 1;
      lVar14 = lVar14 + 0x48;
    } while (lVar11 < *(int *)(lVar19 + 4));
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006da654  FUN_006da654 =====

void FUN_006da654(long *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_007a3660;
  param_1[1] = param_3;
  param_1[2] = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar1 + 0x10);
                    /* try { // try from 006da67c to 006da683 has its CatchHandler @ 006da690 */
  FUN_006da18c(param_1,1);
  return;
}


// ===== 006da6a4  FUN_006da6a4 =====

void FUN_006da6a4(long *param_1,long param_2,undefined4 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_007a3660;
  param_1[1] = 0;
  param_1[2] = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
  *(long **)(param_2 + 0x40) = param_1;
  *param_1 = (long)(puVar1 + 0x10);
                    /* try { // try from 006da6d0 to 006da6d7 has its CatchHandler @ 006da6e4 */
  FUN_006da18c(param_1,param_3);
  return;
}


// ===== 006da6f8  FUN_006da6f8 =====

void * FUN_006da6f8(long param_1,code *param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  int *piVar8;
  long *plVar9;
  undefined8 uVar10;
  void *__ptr;
  int iVar11;
  ulong uVar12;
  void *pvVar13;
  long lVar14;
  int iVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  int iVar22;
  code *pcVar23;
  code *pcVar24;
  code **local_c8;
  long *local_c0;
  undefined8 uStack_b8;
  int local_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  int local_a0;
  int iStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  code *local_88;
  long local_80;
  code *pcStack_78;
  code ***local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  local_88 = param_2;
  if ((*(char *)(param_1 + 0x10) != '\0') &&
     (lVar21 = *(long *)(*(long *)(param_2 + 0x10) + 0x18), lVar7 = FUN_0068b994(), lVar21 == lVar7)
     ) {
    plVar9 = (long *)FUN_006e56e0();
    if (*(long *)(lVar5 + 0x28) == local_68) {
                    /* WARNING: Could not recover jumptable at 0x006da864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pvVar13 = (void *)(**(code **)(*plVar9 + 0x10))(plVar9,param_2);
      return pvVar13;
    }
    goto LAB_006daf14;
  }
  local_c8 = &local_88;
  lVar7 = FUN_006db880(param_1 + 0x18,&local_88,&DAT_00210f12,&local_c8,&local_70);
  if (*(long *)(lVar7 + 0x18) != 0) {
    if (*(long *)(lVar5 + 0x28) == local_68) {
      return *(void **)(*(long *)(lVar7 + 0x18) + 0x40);
    }
    goto LAB_006daf14;
  }
  piVar8 = (int *)FUN_00759c3c(0x50);
  pcVar24 = local_88;
  plVar9 = (long *)(piVar8 + 10);
  piVar8[0xc] = 0;
  piVar8[0xd] = 0;
  *plVar9 = 0;
  piVar8[0x10] = 0;
  piVar8[0x11] = 0;
  piVar8[0xe] = 0;
  piVar8[0xf] = 0;
  *(int **)(lVar7 + 0x18) = piVar8;
  lVar7 = *(long *)(param_1 + 8);
  *(code **)(piVar8 + 8) = local_88;
  if (lVar7 == 0) {
    uVar10 = *(undefined8 *)(*(long *)(local_88 + 0x10) + 0x18);
    *(long *)(piVar8 + 4) = param_1;
    *(undefined8 *)(piVar8 + 6) = uVar10;
    uVar2 = *(uint *)(local_88 + 0x68);
    if ((int)uVar2 < 1) goto LAB_006da884;
LAB_006da7d8:
    uVar12 = (ulong)uVar2;
    iVar22 = 0;
    plVar16 = (long *)(*(long *)(local_88 + 0x30) + 0x20);
    do {
      while (*(int *)((long)plVar16 + -0x1c) != 1) {
        uVar12 = uVar12 - 1;
        iVar22 = iVar22 + 1;
        plVar16 = plVar16 + 5;
        if (uVar12 == 0) goto LAB_006da888;
      }
      uVar12 = uVar12 - 1;
      iVar22 = iVar22 + (uint)((*(byte *)(*plVar16 + 1) & 2) == 0);
      plVar16 = plVar16 + 5;
    } while (uVar12 != 0);
  }
  else {
    *(long *)(piVar8 + 4) = param_1;
    *(long *)(piVar8 + 6) = lVar7;
    uVar2 = *(uint *)(local_88 + 0x68);
    if (0 < (int)uVar2) goto LAB_006da7d8;
LAB_006da884:
    iVar22 = 0;
  }
LAB_006da888:
  uVar2 = *(int *)(local_88 + 4) + iVar22;
  uVar12 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
  if ((int)uVar2 < 0 != SCARRY4(*(int *)(local_88 + 4),iVar22)) {
    uVar12 = 0xffffffffffffffff;
  }
  lVar7 = thunk_FUN_00759c3c(uVar12);
  pvVar13 = (void *)*plVar9;
  *plVar9 = lVar7;
  if (pvVar13 != (void *)0x0) {
    free(pvVar13);
    pcVar24 = local_88;
  }
  iVar11 = 0x20;
  piVar8[1] = -1;
  pcVar23 = pcVar24 + 4;
  uVar12 = (ulong)*(uint *)pcVar23;
  if (0 < (int)*(uint *)pcVar23) {
    lVar21 = 0;
    iVar11 = 0;
    do {
      lVar17 = *(long *)(pcVar24 + 0x28) + lVar21 * 0x48;
      bVar3 = *(byte *)(lVar17 + 1);
      if ((bVar3 >> 1 & 1) == 0) {
        if ((bVar3 & 0x60) == 0x20 && *(char *)(*(long *)(lVar17 + 0x10) + 3) == '\x02') {
          if (((bVar3 >> 4 & 1) == 0) || (*(long *)(lVar17 + 0x28) == 0)) goto LAB_006da950;
        }
        else if ((bVar3 & 0x60) == 0x40) goto LAB_006da950;
      }
      else {
LAB_006da950:
        if ((*(byte *)(*(long *)(lVar17 + 0x38) + 0x54) & 1) == 0) {
          if (piVar8[1] == -1) {
            piVar8[1] = 0x20;
            uVar18 = -((uVar12 & 0xffffffff) >> 0x1f) & 0xfffffffc00000000 |
                     (uVar12 & 0xffffffff) << 2;
            if ((int)uVar12 < 0) {
              uVar18 = 0xffffffffffffffff;
            }
            lVar17 = thunk_FUN_00759c3c(uVar18);
            if (0 < (int)*(uint *)pcVar23) {
              lVar14 = 0;
              do {
                *(undefined4 *)(lVar17 + lVar14 * 4) = 0xffffffff;
                lVar14 = lVar14 + 1;
              } while (lVar14 < (int)*(uint *)pcVar23);
            }
            pvVar13 = *(void **)(piVar8 + 0xc);
            *(long *)(piVar8 + 0xc) = lVar17;
            if (pvVar13 != (void *)0x0) {
              free(pvVar13);
              pcVar24 = local_88;
            }
          }
          *(int *)(*(long *)(piVar8 + 0xc) + lVar21 * 4) = iVar11;
          iVar11 = iVar11 + 1;
        }
      }
      lVar21 = lVar21 + 1;
      pcVar23 = pcVar24 + 4;
      uVar12 = (ulong)(int)*(uint *)pcVar23;
    } while (lVar21 < (long)uVar12);
    if (iVar11 < 1) {
      iVar11 = 0x20;
    }
    else {
      iVar15 = iVar11 + 0x3e;
      if (-1 < iVar11 + 0x1f) {
        iVar15 = iVar11 + 0x1f;
      }
      uVar2 = (iVar15 >> 5) * 4 + 0x27;
      uVar1 = uVar2 & 7;
      if ((int)uVar2 < 1) {
        uVar1 = -(-uVar2 & 7);
      }
      iVar11 = uVar2 - uVar1;
    }
  }
  if (0 < iVar22) {
    piVar8[2] = iVar11;
    uVar2 = iVar11 + iVar22 * 4 + 7;
    uVar1 = uVar2 & 7;
    if ((int)uVar2 < 1) {
      uVar1 = -(-uVar2 & 7);
    }
    iVar11 = uVar2 - uVar1;
  }
  if (*(int *)(pcVar24 + 0x78) < 1) {
    piVar8[3] = -1;
    iVar15 = *(int *)(pcVar24 + 4);
    iVar22 = iVar11;
    puVar6 = PTR_DAT_007a32d8;
  }
  else {
    uVar2 = iVar11 + 0x1f;
    uVar1 = uVar2 & 7;
    if ((int)uVar2 < 1) {
      uVar1 = -(-uVar2 & 7);
    }
    iVar22 = uVar2 - uVar1;
    piVar8[3] = iVar11;
    iVar15 = *(int *)(pcVar24 + 4);
    puVar6 = PTR_DAT_007a32d8;
  }
  PTR_DAT_007a32d8 = puVar6;
  if (0 < iVar15) {
    lVar17 = 0;
    lVar21 = 0;
    do {
      lVar19 = *(long *)(pcVar24 + 0x28);
      lVar14 = lVar19 + lVar17;
      if ((((*(byte *)(lVar14 + 1) >> 4 & 1) == 0) ||
          (lVar20 = *(long *)(lVar14 + 0x28), lVar20 == 0)) ||
         ((*(int *)(lVar20 + 4) == 1 && ((*(byte *)(*(long *)(lVar20 + 0x20) + 1) >> 1 & 1) != 0))))
      {
        plVar9 = *(long **)(lVar14 + 0x18);
        if (((*(byte *)(lVar14 + 1) ^ 0xff) & 0x60) == 0) {
          if ((plVar9 != (long *)0x0) &&
             (pcStack_78 = thunk_FUN_006af330, local_80 = lVar14, *plVar9 != -1)) {
            local_c8 = &pcStack_78;
            local_c0 = &local_80;
            local_70 = &local_c8;
            FUN_00710f84(plVar9,&local_70,FUN_00685640);
          }
          uVar12 = (ulong)*(byte *)(lVar19 + lVar17 + 2);
          iVar11 = *(int *)(puVar6 + uVar12 * 4);
          if (iVar11 - 1U < 8) {
            iVar11 = 0x10;
            iVar15 = 8;
          }
          else {
            if (iVar11 != 9) {
              if (iVar11 != 10) goto LAB_006dabcc;
              plVar9 = *(long **)(lVar14 + 0x18);
              if (plVar9 != (long *)0x0) {
                pcStack_78 = thunk_FUN_006af330;
                local_80 = lVar14;
                if (*plVar9 != -1) {
                  local_c8 = &pcStack_78;
                  local_c0 = &local_80;
                  local_70 = &local_c8;
                  FUN_00710f84(plVar9,&local_70,FUN_00685640);
                }
                uVar12 = (ulong)*(byte *)(lVar19 + lVar17 + 2);
              }
              if ((int)uVar12 == 0xb) {
                uVar12 = FUN_0068d830(lVar14);
                iVar15 = 8;
                iVar11 = 0x80;
                if ((uVar12 & 1) == 0) {
                  iVar11 = 0x18;
                }
                goto LAB_006daa9c;
              }
            }
            iVar11 = 0x18;
            iVar15 = 8;
          }
        }
        else {
          if ((plVar9 != (long *)0x0) &&
             (pcStack_78 = thunk_FUN_006af330, local_80 = lVar14, *plVar9 != -1)) {
            local_c8 = &pcStack_78;
            local_c0 = &local_80;
            local_70 = &local_c8;
            FUN_00710f84(plVar9,&local_70,FUN_00685640);
          }
          if (*(int *)(puVar6 + (ulong)*(byte *)(lVar19 + lVar17 + 2) * 4) - 1U < 10) {
            iVar11 = *(int *)(&DAT_00210f14 +
                             (ulong)(*(int *)(puVar6 + (ulong)*(byte *)(lVar19 + lVar17 + 2) * 4) -
                                    1U) * 4);
            iVar15 = iVar11;
          }
          else {
LAB_006dabcc:
            FUN_00675e64(&local_c8,2,
                         "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/dynamic_message.cc"
                         ,0xc6);
                    /* try { // try from 006dabe4 to 006dabf7 has its CatchHandler @ 006daeec */
            uVar10 = FUN_00675a58(&local_c8,"Can\'t get here.");
                    /* try { // try from 006dabf8 to 006dabff has its CatchHandler @ 006daee8 */
            FUN_00675ac0(&local_70,uVar10);
            FUN_00675e7c(&local_c8);
            iVar11 = 0;
            iVar15 = 0;
          }
        }
LAB_006daa9c:
        iVar4 = 0;
        if (iVar15 != 0) {
          iVar4 = (iVar22 + iVar15 + -1) / iVar15;
        }
        *(int *)(lVar7 + lVar21 * 4) = iVar4 * iVar15;
        iVar22 = iVar4 * iVar15 + iVar11;
        pcVar24 = local_88;
      }
      lVar21 = lVar21 + 1;
      lVar17 = lVar17 + 0x48;
    } while (lVar21 < *(int *)(pcVar24 + 4));
  }
  iVar11 = *(int *)(pcVar24 + 0x68);
  if (iVar11 < 1) {
    *piVar8 = iVar22;
    piVar8[0x12] = -1;
  }
  else {
    lVar21 = 0;
    plVar9 = (long *)(*(long *)(pcVar24 + 0x30) + 0x20);
    do {
      if ((*(int *)((long)plVar9 + -0x1c) != 1) || ((*(byte *)(*plVar9 + 1) >> 1 & 1) == 0)) {
        uVar2 = iVar22 + 7;
        uVar1 = uVar2 & 7;
        if ((int)uVar2 < 1) {
          uVar1 = -(-uVar2 & 7);
        }
        *(uint *)(lVar7 + (lVar21 + *(int *)(pcVar24 + 4)) * 4) = uVar2 - uVar1;
        iVar11 = *(int *)(pcVar24 + 0x68);
        iVar22 = (uVar2 - uVar1) + 8;
      }
      lVar21 = lVar21 + 1;
      plVar9 = plVar9 + 5;
    } while (lVar21 < iVar11);
    *piVar8 = iVar22;
    piVar8[0x12] = -1;
    if (0 < iVar11) {
      lVar17 = *(long *)(pcVar24 + 0x30);
      lVar21 = 0;
      do {
        lVar14 = lVar17 + lVar21 * 0x28;
        if (*(int *)(lVar14 + 4) == 1) {
          if ((*(byte *)(*(long *)(lVar14 + 0x20) + 1) >> 1 & 1) == 0) {
LAB_006dad80:
            lVar20 = *(long *)(lVar14 + 0x20);
            lVar19 = 0;
            plVar9 = (long *)(lVar20 + 0x20);
            do {
              if ((*(byte *)((long)plVar9 + -0x1f) >> 3 & 1) == 0) {
                plVar16 = (long *)(*plVar9 + 0x28);
              }
              else if (plVar9[1] == 0) {
                plVar16 = (long *)(plVar9[-2] + 0x70);
              }
              else {
                plVar16 = (long *)(plVar9[1] + 0x50);
              }
              lVar19 = lVar19 + 1;
              plVar9 = plVar9 + 9;
              uVar12 = lVar20 - *plVar16;
              lVar20 = lVar20 + 0x48;
              *(undefined4 *)(lVar7 + (long)((int)(uVar12 >> 3) * 0x38e38e39) * 4) = 0x40000000;
            } while (lVar19 < *(int *)(lVar14 + 4));
            iVar11 = *(int *)(pcVar24 + 0x68);
          }
        }
        else if (0 < *(int *)(lVar14 + 4)) goto LAB_006dad80;
        lVar21 = lVar21 + 1;
      } while (lVar21 < iVar11);
    }
  }
  pvVar13 = (void *)FUN_00759c3c((long)iVar22);
  memset(pvVar13,0,(long)iVar22);
  FUN_006da6a4(pvVar13,piVar8,0);
  uStack_b8 = *(undefined8 *)(piVar8 + 0xc);
  local_c0 = *(long **)(piVar8 + 10);
  local_c8 = *(code ***)(piVar8 + 0x10);
  local_98 = 0;
  local_a0 = *piVar8;
  local_b0 = piVar8[1];
  local_a8 = NEON_rev64(*(undefined8 *)(piVar8 + 2),4);
  local_90 = 0;
  uStack_ac = 8;
  iStack_9c = piVar8[0x12];
  uVar10 = FUN_00759c3c(0x60);
                    /* try { // try from 006dae6c to 006dae77 has its CatchHandler @ 006daed8 */
  FUN_00679580(uVar10,*(undefined8 *)(piVar8 + 8),&local_c8,*(undefined8 *)(piVar8 + 6),param_1);
  __ptr = *(void **)(piVar8 + 0xe);
  *(undefined8 *)(piVar8 + 0xe) = uVar10;
  if (__ptr != (void *)0x0) {
    free(__ptr);
  }
  FUN_006db40c(pvVar13);
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return pvVar13;
  }
LAB_006daf14:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006daf18  FUN_006daf18 =====

void FUN_006daf18(long *param_1)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  void *__ptr;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long local_90;
  undefined *puStack_88;
  undefined ***local_80;
  undefined **local_78;
  long *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  lVar11 = param_1[2];
  *param_1 = (long)(PTR_DAT_007a3660 + 0x10);
  lVar16 = *(long *)(lVar11 + 0x20);
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
                    /* try { // try from 006daf68 to 006daf6b has its CatchHandler @ 006db3e0 */
    FUN_00662218();
    lVar11 = param_1[2];
  }
  if (*(int *)(lVar11 + 0xc) != -1) {
    FUN_00663dbc((long)param_1 + (long)*(int *)(lVar11 + 0xc));
  }
  puVar6 = PTR_DAT_007a32d8;
  puVar5 = PTR_thunk_FUN_006af330_007a32d0;
  if (0 < *(int *)(lVar16 + 4)) {
    lVar17 = 0;
    lVar11 = 0;
    do {
      lVar15 = *(long *)(lVar16 + 0x28);
      lVar1 = lVar15 + lVar17;
      if ((((*(byte *)(lVar1 + 1) >> 4 & 1) == 0) || (lVar13 = *(long *)(lVar1 + 0x28), lVar13 == 0)
          ) || ((*(int *)(lVar13 + 4) == 1 &&
                ((*(byte *)(*(long *)(lVar13 + 0x20) + 1) >> 1 & 1) != 0)))) {
        plVar8 = *(long **)(lVar1 + 0x18);
        plVar7 = (long *)((long)param_1 + (long)*(int *)(*(long *)(param_1[2] + 0x28) + lVar11 * 4))
        ;
        if (((*(byte *)(lVar1 + 1) ^ 0xff) & 0x60) == 0) {
          if ((plVar8 != (long *)0x0) && (puStack_88 = puVar5, local_90 = lVar1, *plVar8 != -1)) {
            local_78 = &puStack_88;
            local_70 = &local_90;
            local_80 = &local_78;
            FUN_00710f84(plVar8,&local_80,FUN_00685640);
          }
          bVar3 = *(byte *)(lVar15 + lVar17 + 2);
          iVar10 = *(int *)(puVar6 + (ulong)bVar3 * 4);
          if (iVar10 < 6) {
            if (iVar10 < 3) {
              if (iVar10 == 1) {
LAB_006db31c:
                FUN_00673a60(plVar7);
              }
              else if (iVar10 == 2) {
                FUN_006742e4(plVar7);
              }
            }
            else if (iVar10 == 3) {
              FUN_00673ea0(plVar7);
            }
            else if (iVar10 == 4) {
              FUN_00674728(plVar7);
            }
            else if (iVar10 == 5) {
              FUN_00674fac(plVar7);
            }
          }
          else if (iVar10 < 8) {
            if (iVar10 == 6) {
              FUN_00674b68(plVar7);
            }
            else if (iVar10 == 7) {
              FUN_00673630(plVar7);
            }
          }
          else {
            if (iVar10 == 8) goto LAB_006db31c;
            if (iVar10 == 9) {
              FUN_00675290(plVar7);
            }
            else if (iVar10 == 10) {
              plVar8 = *(long **)(lVar1 + 0x18);
              if (plVar8 != (long *)0x0) {
                puStack_88 = puVar5;
                local_90 = lVar1;
                if (*plVar8 != -1) {
                  local_78 = &puStack_88;
                  local_70 = &local_90;
                  local_80 = &local_78;
                    /* try { // try from 006db2ac to 006db2cf has its CatchHandler @ 006db3e4 */
                  FUN_00710f84(plVar8,&local_80,FUN_00685640);
                }
                bVar3 = *(byte *)(lVar15 + lVar17 + 2);
              }
              if ((bVar3 == 0xb) && (uVar9 = FUN_0068d830(lVar1), (uVar9 & 1) != 0)) {
                pcVar12 = *(code **)(*plVar7 + 0xb0);
                goto LAB_006db254;
              }
              if ((plVar7[2] != 0) && (*plVar7 == 0)) {
                    /* try { // try from 006db368 to 006db36f has its CatchHandler @ 006db3dc */
                FUN_00675910(plVar7);
              }
            }
          }
        }
        else {
          if ((plVar8 != (long *)0x0) && (puStack_88 = puVar5, local_90 = lVar1, *plVar8 != -1)) {
            local_78 = &puStack_88;
            local_70 = &local_90;
            local_80 = &local_78;
            FUN_00710f84(plVar8,&local_80,FUN_00685640);
          }
          iVar10 = *(int *)(puVar6 + (ulong)*(byte *)(lVar15 + lVar17 + 2) * 4);
          if (iVar10 == 9) goto LAB_006dafb0;
          plVar8 = *(long **)(lVar1 + 0x18);
          if (plVar8 != (long *)0x0) {
            puStack_88 = puVar5;
            local_90 = lVar1;
            if (*plVar8 != -1) {
              local_78 = &puStack_88;
              local_70 = &local_90;
              local_80 = &local_78;
              FUN_00710f84(plVar8,&local_80,FUN_00685640);
            }
            iVar10 = *(int *)(puVar6 + (ulong)*(byte *)(lVar15 + lVar17 + 2) * 4);
          }
          if (((iVar10 == 10) && (*(long **)(param_1[2] + 0x40) != param_1)) &&
             (*(long **)(param_1[2] + 0x40) != (long *)0x0)) goto LAB_006db244;
        }
      }
      else {
        lVar2 = lVar15 + lVar17;
        lVar14 = param_1[2];
        iVar10 = (int)((ulong)(lVar13 - *(long *)(*(long *)(lVar13 + 0x10) + 0x30)) >> 3);
        if (*(int *)((long)param_1 + (long)(*(int *)(lVar14 + 8) + iVar10 * 0x33333334)) ==
            *(int *)(lVar2 + 4)) {
          plVar7 = *(long **)(lVar2 + 0x18);
          iVar10 = *(int *)(*(long *)(lVar14 + 0x28) +
                           (long)(*(int *)(*(long *)(lVar14 + 0x20) + 4) + iVar10 * -0x33333333) * 4
                           );
          if ((plVar7 != (long *)0x0) && (puStack_88 = puVar5, local_90 = lVar1, *plVar7 != -1)) {
            local_78 = &puStack_88;
            local_70 = &local_90;
            local_80 = &local_78;
            FUN_00710f84(plVar7,&local_80,FUN_00685640);
          }
          plVar7 = (long *)((long)param_1 + (long)iVar10);
          iVar10 = *(int *)(puVar6 + (ulong)*(byte *)(lVar15 + lVar17 + 2) * 4);
          if (iVar10 == 9) {
LAB_006dafb0:
                    /* try { // try from 006dafb0 to 006db21f has its CatchHandler @ 006db3e4 */
            FUN_00663a20(plVar7);
          }
          else {
            plVar8 = *(long **)(lVar2 + 0x18);
            if (plVar8 != (long *)0x0) {
              puStack_88 = puVar5;
              local_90 = lVar1;
              if (*plVar8 != -1) {
                local_78 = &puStack_88;
                local_70 = &local_90;
                local_80 = &local_78;
                FUN_00710f84(plVar8,&local_80,FUN_00685640);
              }
              iVar10 = *(int *)(puVar6 + (ulong)*(byte *)(lVar15 + lVar17 + 2) * 4);
            }
            if (iVar10 == 10) {
LAB_006db244:
              plVar7 = (long *)*plVar7;
              if (plVar7 != (long *)0x0) {
                pcVar12 = *(code **)(*plVar7 + 8);
LAB_006db254:
                (*pcVar12)(plVar7);
              }
            }
          }
        }
      }
      lVar11 = lVar11 + 1;
      lVar17 = lVar17 + 0x48;
    } while (lVar11 < *(int *)(lVar16 + 4));
  }
  *param_1 = (long)(PTR_DAT_007a2ef0 + 0x10);
  if ((((uint)param_1[1] >> 1 & 1) != 0) &&
     (__ptr = (void *)(param_1[1] + -2), __ptr != (void *)0x0)) {
    FUN_00662da0(__ptr);
    free(__ptr);
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 006db3e8  FUN_006db3e8 =====

void FUN_006db3e8(void *param_1)

{
  FUN_006daf18();
  free(param_1);
  return;
}


// ===== 006db40c  FUN_006db40c =====

void FUN_006db40c(long param_1)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined **local_b0;
  long *local_a8;
  long local_80;
  undefined *puStack_78;
  undefined ***local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  lVar10 = *(long *)(param_1 + 0x10);
  if (*(long *)(lVar10 + 0x40) != param_1 && *(long *)(lVar10 + 0x40) != 0) {
    FUN_00675e64(&local_b0,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/dynamic_message.cc"
                 ,0x250);
                    /* try { // try from 006db46c to 006db47f has its CatchHandler @ 006db5f4 */
    uVar7 = FUN_00675a58(&local_b0,"CHECK failed: is_prototype(): ");
                    /* try { // try from 006db480 to 006db487 has its CatchHandler @ 006db5f0 */
    FUN_00675ac0(&local_70,uVar7);
    FUN_00675e7c(&local_b0);
    lVar10 = *(long *)(param_1 + 0x10);
  }
  puVar6 = PTR_DAT_007a32d8;
  puVar5 = PTR_thunk_FUN_006af330_007a32d0;
  lVar12 = *(long *)(lVar10 + 0x20);
  if (0 < *(int *)(lVar12 + 4)) {
    uVar7 = *(undefined8 *)(lVar10 + 0x10);
    lVar13 = 0;
    lVar10 = 0;
    do {
      lVar11 = *(long *)(lVar12 + 0x28);
      lVar1 = lVar11 + lVar13;
      plVar9 = *(long **)(lVar1 + 0x18);
      if ((plVar9 != (long *)0x0) && (puStack_78 = puVar5, local_80 = lVar1, *plVar9 != -1)) {
        local_b0 = &puStack_78;
        local_a8 = &local_80;
        local_70 = &local_b0;
        FUN_00710f84(plVar9,&local_70,FUN_00685640);
      }
      if ((*(int *)(puVar6 + (ulong)*(byte *)(lVar1 + 2) * 4) == 10) &&
         (lVar11 = lVar11 + lVar13, (*(byte *)(*(long *)(lVar11 + 0x38) + 0x54) & 1) == 0)) {
        bVar2 = *(byte *)(lVar11 + 1);
        if (((bVar2 >> 4 & 1) == 0) || (lVar11 = *(long *)(lVar11 + 0x28), lVar11 == 0)) {
          bVar2 = (bVar2 ^ 0xff) & 0x60;
        }
        else {
          if ((*(int *)(lVar11 + 4) != 1) || (((bVar2 ^ 0xff) & 0x60) == 0)) goto LAB_006db508;
          bVar2 = *(byte *)(*(long *)(lVar11 + 0x20) + 1) >> 1 & 1;
        }
        if (bVar2 != 0) {
          iVar3 = *(int *)(*(long *)(*(long *)(param_1 + 0x10) + 0x28) + lVar10 * 4);
          uVar8 = FUN_0068c940(lVar1);
          uVar8 = FUN_006da6f8(uVar7,uVar8);
          *(undefined8 *)(param_1 + iVar3) = uVar8;
        }
      }
LAB_006db508:
      lVar10 = lVar10 + 1;
      lVar13 = lVar13 + 0x48;
    } while (lVar10 < *(int *)(lVar12 + 4));
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006db620  FUN_006db620 =====

void * FUN_006db620(long param_1,long param_2)

{
  void *pvVar1;
  int *piVar2;
  
  if (param_2 != 0) {
    pvVar1 = (void *)thunk_FUN_006634e4(param_2,(long)**(int **)(param_1 + 0x10) + 7U &
                                                0xfffffffffffffff8,PTR_PTR_007a3270);
    memset(pvVar1,0,(long)**(int **)(param_1 + 0x10));
    FUN_006da654(pvVar1,*(undefined8 *)(param_1 + 0x10),param_2);
    return pvVar1;
  }
  pvVar1 = (void *)FUN_00759c3c();
  piVar2 = *(int **)(param_1 + 0x10);
  memset(pvVar1,0,(long)*piVar2);
  FUN_006da13c(pvVar1,piVar2);
  return pvVar1;
}


// ===== 006db6cc  FUN_006db6cc =====

undefined4 FUN_006db6cc(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}


// ===== 006db6d4  FUN_006db6d4 =====

void FUN_006db6d4(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}


// ===== 006db6dc  FUN_006db6dc =====

undefined1  [16] FUN_006db6dc(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x20);
  auVar1._8_8_ = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x38);
  return auVar1;
}


// ===== 006db6ec  FUN_006db6ec =====

void FUN_006db6ec(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_007a3670;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[0xc] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 7) = 0x3f800000;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  return;
}


// ===== 006db720  FUN_006db720 =====

void FUN_006db720(long *param_1)

{
  undefined8 *__ptr;
  void *pvVar1;
  void *pvVar2;
  long *plVar3;
  
  plVar3 = (long *)param_1[5];
  *param_1 = (long)(PTR_DAT_007a3670 + 0x10);
  for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
    pvVar2 = (void *)plVar3[3];
    if (pvVar2 != (void *)0x0) {
      if (*(long **)((long)pvVar2 + 0x40) != (long *)0x0) {
        (**(code **)(**(long **)((long)pvVar2 + 0x40) + 8))();
      }
      pvVar1 = *(void **)((long)pvVar2 + 0x38);
      *(undefined8 *)((long)pvVar2 + 0x38) = 0;
      if (pvVar1 != (void *)0x0) {
        free(pvVar1);
      }
      pvVar1 = *(void **)((long)pvVar2 + 0x30);
      *(undefined8 *)((long)pvVar2 + 0x30) = 0;
      if (pvVar1 != (void *)0x0) {
        free(pvVar1);
      }
      pvVar1 = *(void **)((long)pvVar2 + 0x28);
      *(undefined8 *)((long)pvVar2 + 0x28) = 0;
      if (pvVar1 != (void *)0x0) {
        free(pvVar1);
      }
      free(pvVar2);
    }
  }
  FUN_00715bac(param_1 + 8);
  __ptr = (undefined8 *)param_1[5];
  while (__ptr != (undefined8 *)0x0) {
    pvVar2 = (void *)*__ptr;
    free(__ptr);
    __ptr = (undefined8 *)pvVar2;
  }
  pvVar2 = (void *)param_1[3];
  param_1[3] = 0;
  if (pvVar2 != (void *)0x0) {
    free(pvVar2);
  }
  FUN_006e56dc(param_1);
  return;
}


// ===== 006db7f0  FUN_006db7f0 =====

void FUN_006db7f0(void *param_1)

{
  FUN_006db720();
  free(param_1);
  return;
}


// ===== 006db814  FUN_006db814 =====

undefined8 FUN_006db814(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_00715bcc(param_1 + 0x40);
                    /* try { // try from 006db830 to 006db83b has its CatchHandler @ 006db858 */
  uVar1 = FUN_006da6f8(param_1,param_2);
  FUN_00715bf8(param_1 + 0x40);
  return uVar1;
}


// ===== 006db86c  FUN_006db86c =====

undefined8 FUN_006db86c(void)

{
  return 0;
}


// ===== 006db874  FUN_006db874 =====

void FUN_006db874(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x006db87c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))();
  return;
}


// ===== 006db880  FUN_006db880 =====

undefined1  [16] FUN_006db880(long *param_1,ulong *param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x24;
  undefined2 uVar10;
  undefined8 uVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  uVar2 = *param_2;
  uVar8 = param_1[1];
  uVar5 = ((ulong)(uint)((int)uVar2 << 3) + 8 ^ uVar2 >> 0x20) * -0x622015f714c7d297;
  uVar5 = (uVar2 >> 0x20 ^ uVar5 >> 0x2f ^ uVar5) * -0x622015f714c7d297;
  uVar5 = uVar5 ^ uVar5 >> 0x2f;
  uVar9 = uVar5 * -0x622015f714c7d297;
  if (uVar8 != 0) {
    uVar11 = NEON_cnt(uVar8,1);
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar7 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
    if (uVar7 < 2) {
      unaff_x24 = uVar9 & uVar8 - 1;
    }
    else {
      unaff_x24 = uVar9;
      if (uVar8 <= uVar9) {
        uVar1 = 0;
        if (uVar8 != 0) {
          uVar1 = uVar9 / uVar8;
        }
        unaff_x24 = uVar9 - uVar1 * uVar8;
      }
    }
    plVar6 = *(long **)(*param_1 + unaff_x24 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      if (uVar7 < 2) {
        do {
          if (plVar6[1] == uVar9) {
            if (plVar6[2] == uVar2) {
LAB_006db9ac:
              auVar13._8_8_ = 0;
              auVar13._0_8_ = plVar6;
              return auVar13;
            }
          }
          else if ((plVar6[1] & uVar8 - 1) != unaff_x24) break;
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar6[1];
          if (uVar7 == uVar9) {
            if (plVar6[2] == uVar2) goto LAB_006db9ac;
          }
          else {
            if (uVar8 <= uVar7) {
              uVar1 = 0;
              if (uVar8 != 0) {
                uVar1 = uVar7 / uVar8;
              }
              uVar7 = uVar7 - uVar1 * uVar8;
            }
            if (uVar7 != unaff_x24) break;
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
    }
  }
  auVar14._0_8_ = (long *)FUN_00759c3c(0x20);
  lVar3 = param_1[3];
  plVar6 = (long *)*param_4;
  *auVar14._0_8_ = 0;
  fVar12 = *(float *)(param_1 + 4);
  lVar4 = *plVar6;
  auVar14._0_8_[3] = 0;
  auVar14._0_8_[1] = uVar9;
  auVar14._0_8_[2] = lVar4;
  if ((uVar8 == 0) || (fVar12 * (float)uVar8 < (float)(lVar3 + 1))) {
    if (uVar8 < 3) {
      uVar2 = 1;
    }
    else {
      uVar2 = (ulong)((uVar8 & uVar8 - 1) != 0);
    }
    uVar2 = uVar2 | uVar8 << 1;
    uVar7 = (ulong)((float)(lVar3 + 1) / fVar12);
    if (uVar2 <= uVar7) {
      uVar2 = uVar7;
    }
    if (uVar2 - 1 == 0) {
      uVar2 = 2;
    }
    else if ((uVar2 & uVar2 - 1) != 0) {
                    /* try { // try from 006dba70 to 006dbaf3 has its CatchHandler @ 006dbbd0 */
      uVar2 = FUN_00711ce0(uVar2);
      uVar8 = param_1[1];
    }
    if (uVar8 < uVar2) {
LAB_006dba88:
      FUN_006dbbe4(param_1,uVar2);
    }
    else if (uVar2 < uVar8) {
      uVar7 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar8 < 3) {
LAB_006dbaf0:
        uVar7 = FUN_00711ce0();
      }
      else {
        uVar11 = NEON_cnt(uVar8,1);
        uVar10 = NEON_uaddlv(uVar11,1);
        if (1 < (CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff)) goto LAB_006dbaf0;
        if (1 < uVar7) {
          uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
        }
      }
      if (uVar2 <= uVar7) {
        uVar2 = uVar7;
      }
      if (uVar2 < uVar8) goto LAB_006dba88;
    }
    uVar8 = param_1[1];
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x24 = uVar8 - 1 & uVar9;
      lVar3 = *param_1;
      plVar6 = *(long **)(lVar3 + unaff_x24 * 8);
      goto joined_r0x006dbb6c;
    }
    if (uVar9 < uVar8) {
      lVar3 = *param_1;
      plVar6 = *(long **)(lVar3 + uVar5 * -0x1100afb8a63e94b8);
      unaff_x24 = uVar9;
      goto joined_r0x006dbb6c;
    }
    uVar2 = 0;
    if (uVar8 != 0) {
      uVar2 = uVar9 / uVar8;
    }
    unaff_x24 = uVar9 - uVar2 * uVar8;
    lVar3 = *param_1;
    plVar6 = *(long **)(lVar3 + unaff_x24 * 8);
    if (plVar6 == (long *)0x0) goto LAB_006dbb24;
LAB_006dba18:
    *auVar14._0_8_ = *plVar6;
  }
  else {
    lVar3 = *param_1;
    plVar6 = *(long **)(lVar3 + unaff_x24 * 8);
joined_r0x006dbb6c:
    if (plVar6 != (long *)0x0) goto LAB_006dba18;
LAB_006dbb24:
    plVar6 = param_1 + 2;
    lVar4 = *plVar6;
    *plVar6 = (long)auVar14._0_8_;
    *auVar14._0_8_ = lVar4;
    *(long **)(lVar3 + unaff_x24 * 8) = plVar6;
    if (*auVar14._0_8_ == 0) goto LAB_006dbba8;
    uVar2 = *(ulong *)(*auVar14._0_8_ + 8);
    if ((uVar8 & uVar8 - 1) == 0) {
      uVar2 = uVar2 & uVar8 - 1;
    }
    else if (uVar8 <= uVar2) {
      uVar5 = 0;
      if (uVar8 != 0) {
        uVar5 = uVar2 / uVar8;
      }
      uVar2 = uVar2 - uVar5 * uVar8;
    }
    plVar6 = (long *)(*param_1 + uVar2 * 8);
  }
  *plVar6 = (long)auVar14._0_8_;
LAB_006dbba8:
  param_1[3] = param_1[3] + 1;
  auVar14._8_8_ = 1;
  return auVar14;
}


// ===== 006dbbe4  FUN_006dbbe4 =====

void FUN_006dbbe4(long *param_1,ulong param_2)

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
LAB_006dbd68:
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
          goto LAB_006dbd68;
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


// ===== 006dbdbc  FUN_006dbdbc =====

void FUN_006dbdbc(undefined8 param_1,long param_2,byte *param_3,byte *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = *(undefined8 *)PTR_DAT_007a32a0;
  local_58 = param_1;
  local_50 = param_2;
  lVar2 = FUN_006763e8(&local_58,0x2f,uVar3);
  if ((lVar2 == -1) || (lVar2 = lVar2 + 1, lVar2 == local_50)) {
    uVar3 = 0;
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
  else {
    if (param_3 != (byte *)0x0) {
      local_80 = FUN_006766cc(&local_58,0,lVar2);
      FUN_00675c30(&local_70,local_80);
      if ((*param_3 & 1) != 0) {
        free(*(void **)(param_3 + 0x10));
      }
      *(undefined8 *)(param_3 + 8) = uStack_68;
      *(undefined8 *)param_3 = local_70;
      *(undefined8 *)(param_3 + 0x10) = local_60;
    }
    auVar4 = FUN_006766cc(&local_58,lVar2,uVar3);
    local_80 = auVar4;
    FUN_00675c30(&local_70,local_80);
    if ((*param_4 & 1) != 0) {
      free(*(void **)(param_4 + 0x10));
    }
    uVar3 = 1;
    *(undefined8 *)(param_4 + 8) = uStack_68;
    *(undefined8 *)param_4 = local_70;
    *(undefined8 *)(param_4 + 0x10) = local_60;
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 006dbee8  FUN_006dbee8 =====

void FUN_006dbee8(void)

{
  return;
}


// ===== 006dbeec  FUN_006dbeec =====

void FUN_006dbeec(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined1 uVar3;
  int *piVar4;
  undefined1 *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x1a) = param_3;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  piVar4 = param_1 + 0x20;
  piVar4[0] = 0;
  piVar4[1] = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  *(undefined8 *)(param_1 + 0x23) = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x28] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 1;
  param_1[10] = 0;
  *param_1 = 0;
  local_50 = (undefined1 *)0x0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  param_1[0x21] = 0;
  do {
                    /* try { // try from 006dbf8c to 006dbf97 has its CatchHandler @ 006dbff0 */
    uVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))
                      (*(long **)(param_1 + 0x18),&local_50,piVar4);
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
      param_1[0x20] = 0;
      *(undefined1 *)(param_1 + 0x22) = 1;
      goto LAB_006dbfc4;
    }
  } while (*piVar4 == 0);
  *(undefined1 **)(param_1 + 0x1e) = local_50;
  uVar3 = *local_50;
LAB_006dbfc4:
  *(undefined1 *)(param_1 + 0x1c) = uVar3;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006dc048  FUN_006dc048 =====

void FUN_006dc048(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x80) - *(int *)(param_1 + 0x84);
  if (iVar1 != 0 && *(int *)(param_1 + 0x84) <= *(int *)(param_1 + 0x80)) {
                    /* try { // try from 006dc070 to 006dc073 has its CatchHandler @ 006dc0a8 */
    (**(code **)(**(long **)(param_1 + 0x60) + 0x18))(*(long **)(param_1 + 0x60),iVar1);
  }
  if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
    free(*(void **)(param_1 + 0x48));
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  free(*(void **)(param_1 + 0x18));
  return;
}


// ===== 006dc0ac  FUN_006dc0ac =====

void FUN_006dc0ac(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0xae) = param_2;
  *(byte *)(param_1 + 0xaf) = *(byte *)(param_1 + 0xaf) & param_2;
  return;
}


// ===== 006dc0c0  FUN_006dc0c0 =====

void FUN_006dc0c0(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  int *piVar8;
  undefined1 *local_40;
  long local_38;
  
  lVar6 = tpidr_el0;
  local_38 = *(long *)(lVar6 + 0x28);
  if (*(char *)(param_1 + 0x70) == '\t') {
    uVar3 = *(uint *)(param_1 + 0x90);
    uVar2 = uVar3 & 7;
    if ((int)uVar3 < 1) {
      uVar2 = -(-uVar3 & 7);
    }
    iVar5 = (uVar3 - uVar2) + 8;
LAB_006dc130:
    *(int *)(param_1 + 0x90) = iVar5;
  }
  else {
    if (*(char *)(param_1 + 0x70) != '\n') {
      iVar5 = *(int *)(param_1 + 0x90) + 1;
      goto LAB_006dc130;
    }
    *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  piVar8 = (int *)(param_1 + 0x80);
  iVar5 = *piVar8;
  lVar1 = (long)*(int *)(param_1 + 0x84) + 1;
  iVar7 = (int)lVar1;
  *(int *)(param_1 + 0x84) = iVar7;
  if (iVar7 < iVar5) {
    *(undefined1 *)(param_1 + 0x70) = *(undefined1 *)(*(long *)(param_1 + 0x78) + lVar1);
    lVar6 = *(long *)(lVar6 + 0x28);
  }
  else {
    if (*(char *)(param_1 + 0x88) == '\0') {
      if (*(long *)(param_1 + 0x98) != 0) {
        iVar7 = *(int *)(param_1 + 0xa0);
        if (iVar7 < iVar5) {
          FUN_0071302c(*(long *)(param_1 + 0x98),*(long *)(param_1 + 0x78) + (long)iVar7,
                       (long)(iVar5 - iVar7));
          *(undefined4 *)(param_1 + 0xa0) = 0;
        }
      }
      local_40 = (undefined1 *)0x0;
      *(undefined8 *)(param_1 + 0x78) = 0;
      *(undefined4 *)(param_1 + 0x84) = 0;
      do {
        uVar4 = (**(code **)(**(long **)(param_1 + 0x60) + 0x10))
                          (*(long **)(param_1 + 0x60),&local_40,piVar8);
        if ((uVar4 & 1) == 0) {
          *(undefined4 *)(param_1 + 0x80) = 0;
          *(undefined1 *)(param_1 + 0x88) = 1;
          *(undefined1 *)(param_1 + 0x70) = 0;
          lVar6 = *(long *)(lVar6 + 0x28);
          goto joined_r0x006dc240;
        }
      } while (*piVar8 == 0);
      *(undefined1 **)(param_1 + 0x78) = local_40;
      *(undefined1 *)(param_1 + 0x70) = *local_40;
      lVar6 = *(long *)(lVar6 + 0x28);
joined_r0x006dc240:
      if (lVar6 == local_38) {
        return;
      }
      goto LAB_006dc19c;
    }
    *(undefined1 *)(param_1 + 0x70) = 0;
    lVar6 = *(long *)(lVar6 + 0x28);
  }
  if (lVar6 == local_38) {
    return;
  }
LAB_006dc19c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006dc248  FUN_006dc248 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006dc248(long param_1,char param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  long local_68;
  
  uVar13 = _UNK_00200b18;
  uVar19 = _DAT_00200b10;
  uVar12 = _UNK_002009e8;
  uVar18 = _DAT_002009e0;
  uVar9 = _UNK_002008f8;
  uVar17 = _DAT_002008f0;
  uVar8 = _UNK_00200118;
  uVar16 = _DAT_00200110;
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
LAB_006dc2f0:
  while (cVar3 = *(char *)(param_1 + 0x70), cVar3 == '\n') {
    if ((*(byte *)(param_1 + 0xad) & 1) == 0) {
      local_70 = (char *)FUN_00759c3c(0x30);
      uStack_78 = _UNK_00200978;
      local_80 = _DAT_00200970;
      uVar8 = CONCAT53(s_String_literals_cannot_cross_lin_001dde8c._32_5_,
                       s_String_literals_cannot_cross_lin_001dde8c._29_3_);
      plVar21 = *(long **)(param_1 + 0x68);
      *(undefined8 *)(local_70 + 0x25) = s_String_literals_cannot_cross_lin_001dde8c._37_8_;
      *(undefined8 *)(local_70 + 0x1d) = uVar8;
      uVar13 = s_String_literals_cannot_cross_lin_001dde8c._16_8_;
      uVar12 = s_String_literals_cannot_cross_lin_001dde8c._8_8_;
      uVar9 = s_String_literals_cannot_cross_lin_001dde8c._0_8_;
      uVar8 = CONCAT35(s_String_literals_cannot_cross_lin_001dde8c._29_3_,
                       s_String_literals_cannot_cross_lin_001dde8c._24_5_);
      local_70[0x2d] = '\0';
      uVar1 = *(undefined4 *)(param_1 + 0x8c);
      uVar2 = *(undefined4 *)(param_1 + 0x90);
      *(undefined8 *)(local_70 + 8) = uVar12;
      *(undefined8 *)local_70 = uVar9;
      *(undefined8 *)(local_70 + 0x18) = uVar8;
      *(undefined8 *)(local_70 + 0x10) = uVar13;
                    /* try { // try from 006dc748 to 006dc753 has its CatchHandler @ 006dc7a4 */
      (**(code **)(*plVar21 + 0x10))(plVar21,uVar1,uVar2,&local_80);
LAB_006dc754:
      if ((local_80 & 1) != 0) {
        free(local_70);
      }
      goto LAB_006dc764;
    }
LAB_006dc2e8:
    FUN_006dc0c0(param_1);
  }
  if (cVar3 != '\\') goto code_r0x006dc304;
  FUN_006dc0c0(param_1);
  bVar4 = *(byte *)(param_1 + 0x70);
  uVar5 = bVar4 - 0x61;
  if ((((uVar5 < 0x16) && ((1 << (ulong)(uVar5 & 0x1f) & 0x2a2023U) != 0)) ||
      ((uVar5 = bVar4 - 0x22, uVar5 < 0x3b &&
       ((1L << ((ulong)uVar5 & 0x3f) & 0x400000020000021U) != 0)))) || ((bVar4 & 0xf8) == 0x30))
  goto LAB_006dc2e8;
  if (bVar4 == 0x55) {
    FUN_006dc0c0(param_1);
    if (((*(char *)(param_1 + 0x70) == '0') &&
        (FUN_006dc0c0(param_1), *(char *)(param_1 + 0x70) == '0')) &&
       (FUN_006dc0c0(param_1), (*(byte *)(param_1 + 0x70) & 0xfe) == 0x30)) {
      FUN_006dc0c0(param_1);
      if (((*(byte *)(param_1 + 0x70) - 0x30 & 0xff) < 10) ||
         ((uVar5 = *(byte *)(param_1 + 0x70) - 0x41, uVar5 < 0x26 &&
          ((1L << ((ulong)uVar5 & 0x3f) & 0x3f0000003fU) != 0)))) {
        FUN_006dc0c0(param_1);
        if (((*(byte *)(param_1 + 0x70) - 0x30 & 0xff) < 10) ||
           ((uVar5 = *(byte *)(param_1 + 0x70) - 0x41, uVar5 < 0x26 &&
            ((1L << ((ulong)uVar5 & 0x3f) & 0x3f0000003fU) != 0)))) {
          FUN_006dc0c0(param_1);
          uVar20 = FUN_006dc7d8(param_1);
          if (((uVar20 & 1) != 0) &&
             ((uVar20 = FUN_006dc7d8(param_1), (uVar20 & 1) != 0 &&
              (uVar20 = FUN_006dc7d8(param_1), (uVar20 & 1) != 0)))) goto LAB_006dc2f0;
        }
      }
    }
    local_70 = (char *)FUN_00759c3c(0x40);
    plVar21 = *(long **)(param_1 + 0x68);
    local_70[0x3d] = '\0';
    uStack_78 = uVar12;
    local_80 = uVar18;
    uVar7 = CONCAT53(s_Expected_eight_hex_digits_up_to_1_001c4d40._48_5_,
                     s_Expected_eight_hex_digits_up_to_1_001c4d40._45_3_);
    uVar1 = *(undefined4 *)(param_1 + 0x8c);
    uVar2 = *(undefined4 *)(param_1 + 0x90);
    *(undefined8 *)(local_70 + 0x35) = s_Expected_eight_hex_digits_up_to_1_001c4d40._53_8_;
    *(undefined8 *)(local_70 + 0x2d) = uVar7;
    uVar11 = s_Expected_eight_hex_digits_up_to_1_001c4d40._32_8_;
    uVar10 = s_Expected_eight_hex_digits_up_to_1_001c4d40._16_8_;
    uVar7 = CONCAT35(s_Expected_eight_hex_digits_up_to_1_001c4d40._45_3_,
                     s_Expected_eight_hex_digits_up_to_1_001c4d40._40_5_);
    *(undefined8 *)(local_70 + 0x18) = s_Expected_eight_hex_digits_up_to_1_001c4d40._24_8_;
    *(undefined8 *)(local_70 + 0x10) = uVar10;
    *(undefined8 *)(local_70 + 0x28) = uVar7;
    *(undefined8 *)(local_70 + 0x20) = uVar11;
    uVar7 = s_Expected_eight_hex_digits_up_to_1_001c4d40._0_8_;
    *(undefined8 *)(local_70 + 8) = s_Expected_eight_hex_digits_up_to_1_001c4d40._8_8_;
    *(undefined8 *)local_70 = uVar7;
                    /* try { // try from 006dc648 to 006dc653 has its CatchHandler @ 006dc79c */
    (**(code **)(*plVar21 + 0x10))(plVar21,uVar1,uVar2,&local_80);
  }
  else if (bVar4 == 0x75) {
    FUN_006dc0c0(param_1);
    if (((*(byte *)(param_1 + 0x70) - 0x30 & 0xff) < 10) ||
       ((uVar5 = *(byte *)(param_1 + 0x70) - 0x41, uVar5 < 0x26 &&
        ((1L << ((ulong)uVar5 & 0x3f) & 0x3f0000003fU) != 0)))) {
      FUN_006dc0c0(param_1);
      if (((*(byte *)(param_1 + 0x70) - 0x30 & 0xff) < 10) ||
         ((uVar5 = *(byte *)(param_1 + 0x70) - 0x41, uVar5 < 0x26 &&
          ((1L << ((ulong)uVar5 & 0x3f) & 0x3f0000003fU) != 0)))) {
        FUN_006dc0c0(param_1);
        if (((*(byte *)(param_1 + 0x70) - 0x30 & 0xff) < 10) ||
           ((uVar5 = *(byte *)(param_1 + 0x70) - 0x41, uVar5 < 0x26 &&
            ((1L << ((ulong)uVar5 & 0x3f) & 0x3f0000003fU) != 0)))) {
          FUN_006dc0c0(param_1);
          if (((*(byte *)(param_1 + 0x70) - 0x30 & 0xff) < 10) ||
             ((uVar5 = *(byte *)(param_1 + 0x70) - 0x41, uVar5 < 0x26 &&
              ((1L << ((ulong)uVar5 & 0x3f) & 0x3f0000003fU) != 0)))) goto LAB_006dc2e8;
        }
      }
    }
    local_70 = (char *)FUN_00759c3c(0x38);
    uVar15 = s_Expected_four_hex_digits_for__u_e_001d32fc._40_8_;
    uVar14 = s_Expected_four_hex_digits_for__u_e_001d32fc._32_8_;
    uVar11 = s_Expected_four_hex_digits_for__u_e_001d32fc._16_8_;
    uVar10 = s_Expected_four_hex_digits_for__u_e_001d32fc._8_8_;
    uVar7 = s_Expected_four_hex_digits_for__u_e_001d32fc._0_8_;
    plVar21 = *(long **)(param_1 + 0x68);
    uStack_78 = uVar13;
    local_80 = uVar19;
    *(undefined8 *)(local_70 + 0x18) = s_Expected_four_hex_digits_for__u_e_001d32fc._24_8_;
    *(undefined8 *)(local_70 + 0x10) = uVar11;
    *(undefined8 *)(local_70 + 0x28) = uVar15;
    *(undefined8 *)(local_70 + 0x20) = uVar14;
    *(undefined8 *)(local_70 + 8) = uVar10;
    *(undefined8 *)local_70 = uVar7;
    local_70[0x30] = '\0';
                    /* try { // try from 006dc51c to 006dc527 has its CatchHandler @ 006dc798 */
    (**(code **)(*plVar21 + 0x10))
              (plVar21,*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x90),&local_80);
  }
  else if (bVar4 == 0x78) {
    FUN_006dc0c0(param_1);
    if (((*(byte *)(param_1 + 0x70) - 0x30 & 0xff) < 10) ||
       ((uVar5 = *(byte *)(param_1 + 0x70) - 0x41, uVar5 < 0x26 &&
        ((1L << ((ulong)uVar5 & 0x3f) & 0x3f0000003fU) != 0)))) goto LAB_006dc2e8;
    local_70 = (char *)FUN_00759c3c(0x30);
    uVar14 = s_Expected_hex_digits_for_escape_s_001c7027._24_8_;
    uVar11 = s_Expected_hex_digits_for_escape_s_001c7027._16_8_;
    uVar10 = s_Expected_hex_digits_for_escape_s_001c7027._8_8_;
    uVar7 = s_Expected_hex_digits_for_escape_s_001c7027._0_8_;
    uStack_78 = uVar9;
    local_80 = uVar17;
    *(undefined8 *)(local_70 + 0x20) = s_Expected_hex_digits_for_escape_s_001c7027._32_8_;
    plVar21 = *(long **)(param_1 + 0x68);
    local_70[0x28] = '\0';
    *(undefined8 *)(local_70 + 8) = uVar10;
    *(undefined8 *)local_70 = uVar7;
    *(undefined8 *)(local_70 + 0x18) = uVar14;
    *(undefined8 *)(local_70 + 0x10) = uVar11;
                    /* try { // try from 006dc3f4 to 006dc3ff has its CatchHandler @ 006dc794 */
    (**(code **)(*plVar21 + 0x10))
              (plVar21,*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x90),&local_80);
  }
  else {
    local_70 = (char *)FUN_00759c3c(0x30);
    uVar7 = CONCAT26(s_Invalid_escape_sequence_in_strin_001cb4a8._32_2_,
                     s_Invalid_escape_sequence_in_strin_001cb4a8._26_6_);
    plVar21 = *(long **)(param_1 + 0x68);
    uStack_78 = uVar8;
    local_80 = uVar16;
    *(undefined8 *)(local_70 + 0x22) = s_Invalid_escape_sequence_in_strin_001cb4a8._34_8_;
    *(undefined8 *)(local_70 + 0x1a) = uVar7;
    uVar14 = s_Invalid_escape_sequence_in_strin_001cb4a8._16_8_;
    uVar11 = s_Invalid_escape_sequence_in_strin_001cb4a8._8_8_;
    uVar10 = s_Invalid_escape_sequence_in_strin_001cb4a8._0_8_;
    uVar7 = CONCAT62(s_Invalid_escape_sequence_in_strin_001cb4a8._26_6_,
                     s_Invalid_escape_sequence_in_strin_001cb4a8._24_2_);
    local_70[0x2a] = '\0';
    uVar1 = *(undefined4 *)(param_1 + 0x8c);
    uVar2 = *(undefined4 *)(param_1 + 0x90);
    *(undefined8 *)(local_70 + 8) = uVar11;
    *(undefined8 *)local_70 = uVar10;
    *(undefined8 *)(local_70 + 0x18) = uVar7;
    *(undefined8 *)(local_70 + 0x10) = uVar14;
                    /* try { // try from 006dc690 to 006dc69b has its CatchHandler @ 006dc7a0 */
    (**(code **)(*plVar21 + 0x10))(plVar21,uVar1,uVar2,&local_80);
  }
  if ((local_80 & 1) != 0) {
    free(local_70);
  }
  goto LAB_006dc2f0;
code_r0x006dc304:
  if (cVar3 == '\0') {
    local_70 = (char *)FUN_00759c3c(0x20);
    uVar13 = s_Unexpected_end_of_string__001c700d._17_8_;
    uVar12 = s_Unexpected_end_of_string__001c700d._0_8_;
    uVar9 = CONCAT17(s_Unexpected_end_of_string__001c700d[0x10],
                     s_Unexpected_end_of_string__001c700d._9_7_);
    uVar8 = CONCAT71(s_Unexpected_end_of_string__001c700d._9_7_,
                     s_Unexpected_end_of_string__001c700d[8]);
    local_70[0x19] = '\0';
    *(undefined8 *)(local_70 + 0x11) = uVar13;
    *(undefined8 *)(local_70 + 9) = uVar9;
    uStack_78 = _UNK_00200518;
    local_80 = _DAT_00200510;
    plVar21 = *(long **)(param_1 + 0x68);
    *(undefined8 *)(local_70 + 8) = uVar8;
    *(undefined8 *)local_70 = uVar12;
                    /* try { // try from 006dc6f4 to 006dc6ff has its CatchHandler @ 006dc7a8 */
    (**(code **)(*plVar21 + 0x10))
              (plVar21,*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x90),&local_80);
    goto LAB_006dc754;
  }
  FUN_006dc0c0(param_1);
  if (cVar3 == param_2) {
LAB_006dc764:
    if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  goto LAB_006dc2f0;
}


// ===== 006dc7d8  FUN_006dc7d8 =====

undefined8 FUN_006dc7d8(long param_1)

{
  uint uVar1;
  
  if ((9 < (*(byte *)(param_1 + 0x70) - 0x30 & 0xff)) &&
     (uVar1 = *(byte *)(param_1 + 0x70) - 0x41,
     0x25 < uVar1 || (1L << ((ulong)uVar1 & 0x3f) & 0x3f0000003fU) == 0)) {
    return 0;
  }
  FUN_006dc0c0();
  return 1;
}


// ===== 006dc82c  FUN_006dc82c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006dc82c(long param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  byte bVar13;
  uint uVar14;
  long *plVar15;
  int iVar16;
  undefined4 uVar17;
  byte *local_50;
  undefined8 uStack_48;
  char *local_40;
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  if ((param_2 & 1) == 0) {
LAB_006dca60:
    bVar13 = *(byte *)(param_1 + 0x70);
    uVar14 = bVar13 - 0x30;
    if ((param_3 & 1) == 0) {
      while (uVar14 < 10) {
        FUN_006dc0c0(param_1);
        bVar13 = *(byte *)(param_1 + 0x70);
        uVar14 = bVar13 - 0x30;
      }
      if (bVar13 == 0x2e) {
        FUN_006dc0c0(param_1);
        bVar13 = *(byte *)(param_1 + 0x70);
        while (bVar13 - 0x30 < 10) {
          FUN_006dc0c0(param_1);
          bVar13 = *(byte *)(param_1 + 0x70);
        }
        goto LAB_006dcae4;
      }
      bVar8 = false;
      if ((bVar13 | 0x20) == 0x65) goto LAB_006dcaf4;
LAB_006dcbc0:
      cVar4 = *(char *)(param_1 + 0xa4);
    }
    else {
      while (uVar14 < 10) {
        FUN_006dc0c0(param_1);
        bVar13 = *(byte *)(param_1 + 0x70);
        uVar14 = bVar13 - 0x30;
      }
LAB_006dcae4:
      bVar8 = true;
      if ((bVar13 | 0x20) != 0x65) goto LAB_006dcbc0;
LAB_006dcaf4:
      FUN_006dc0c0(param_1);
      if ((*(char *)(param_1 + 0x70) == '-') || (*(char *)(param_1 + 0x70) == '+')) {
        FUN_006dc0c0(param_1);
      }
      if (*(byte *)(param_1 + 0x70) - 0x30 < 10) {
        do {
          FUN_006dc0c0(param_1);
        } while (*(byte *)(param_1 + 0x70) - 0x30 < 10);
      }
      else {
        local_40 = (char *)FUN_00759c3c(0x28);
        uStack_48 = _UNK_00200438;
        local_50 = _DAT_00200430;
        local_40[0x20] = '.';
        uVar9 = s__e__must_be_followed_by_exponent_001e2564._24_8_;
        uVar7 = s__e__must_be_followed_by_exponent_001e2564._16_8_;
        uVar6 = s__e__must_be_followed_by_exponent_001e2564._0_8_;
        local_40[0x21] = '\0';
        plVar15 = *(long **)(param_1 + 0x68);
        uVar17 = *(undefined4 *)(param_1 + 0x8c);
        uVar3 = *(undefined4 *)(param_1 + 0x90);
        *(undefined8 *)(local_40 + 8) = s__e__must_be_followed_by_exponent_001e2564._8_8_;
        *(undefined8 *)local_40 = uVar6;
        *(undefined8 *)(local_40 + 0x18) = uVar9;
        *(undefined8 *)(local_40 + 0x10) = uVar7;
                    /* try { // try from 006dcb84 to 006dcb8f has its CatchHandler @ 006dcdd8 */
        (**(code **)(*plVar15 + 0x10))(plVar15,uVar17,uVar3,&local_50);
        if (((ulong)local_50 & 1) != 0) {
          free(local_40);
        }
      }
      bVar8 = true;
      cVar4 = *(char *)(param_1 + 0xa4);
    }
    if ((cVar4 != '\0') &&
       ((*(char *)(param_1 + 0x70) == 'F' || (*(char *)(param_1 + 0x70) == 'f')))) {
      FUN_006dc0c0(param_1);
      bVar8 = true;
    }
  }
  else {
    bVar13 = *(byte *)(param_1 + 0x70);
    if ((bVar13 | 0x20) == 0x78) {
      FUN_006dc0c0(param_1);
      if (((*(byte *)(param_1 + 0x70) - 0x30 & 0xff) < 10) ||
         ((uVar14 = *(byte *)(param_1 + 0x70) - 0x41, uVar14 < 0x26 &&
          ((1L << ((ulong)uVar14 & 0x3f) & 0x3f0000003fU) != 0)))) {
        do {
          do {
            iVar2 = *(int *)(param_1 + 0x80);
            lVar1 = (long)*(int *)(param_1 + 0x84) + 1;
            *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
            iVar16 = (int)lVar1;
            *(int *)(param_1 + 0x84) = iVar16;
            if (iVar16 < iVar2) {
              bVar13 = *(byte *)(*(long *)(param_1 + 0x78) + lVar1);
              *(byte *)(param_1 + 0x70) = bVar13;
            }
            else {
              if (*(char *)(param_1 + 0x88) != '\0') {
                bVar8 = false;
                *(undefined1 *)(param_1 + 0x70) = 0;
                goto LAB_006dcc54;
              }
              if (*(long *)(param_1 + 0x98) != 0) {
                iVar16 = *(int *)(param_1 + 0xa0);
                if (iVar16 < iVar2) {
                  FUN_0071302c(*(long *)(param_1 + 0x98),*(long *)(param_1 + 0x78) + (long)iVar16,
                               (long)(iVar2 - iVar16));
                  *(undefined4 *)(param_1 + 0xa0) = 0;
                }
              }
              local_50 = (byte *)0x0;
              *(undefined8 *)(param_1 + 0x78) = 0;
              *(undefined4 *)(param_1 + 0x84) = 0;
              do {
                uVar12 = (**(code **)(**(long **)(param_1 + 0x60) + 0x10))
                                   (*(long **)(param_1 + 0x60),&local_50,param_1 + 0x80);
                if ((uVar12 & 1) == 0) {
                  uVar14 = 0;
                  *(undefined4 *)(param_1 + 0x80) = 0;
                  *(undefined1 *)(param_1 + 0x88) = 1;
                  *(undefined1 *)(param_1 + 0x70) = 0;
                  goto LAB_006dc990;
                }
              } while (*(int *)(param_1 + 0x80) == 0);
              *(byte **)(param_1 + 0x78) = local_50;
              bVar13 = *local_50;
              *(byte *)(param_1 + 0x70) = bVar13;
            }
            uVar14 = (uint)bVar13;
          } while ((byte)(bVar13 - 0x30) < 10);
LAB_006dc990:
        } while ((uVar14 - 0x41 < 0x26) &&
                ((1L << ((ulong)(uVar14 - 0x41) & 0x3f) & 0x3f0000003fU) != 0));
      }
      else {
        local_40 = (char *)FUN_00759c3c(0x28);
        uStack_48 = _UNK_00200808;
        local_50 = _DAT_00200800;
        local_40[0x24] = '\0';
        uVar10 = s__0x__must_be_followed_by_hex_dig_001be319._24_8_;
        uVar9 = s__0x__must_be_followed_by_hex_dig_001be319._16_8_;
        uVar7 = s__0x__must_be_followed_by_hex_dig_001be319._8_8_;
        uVar6 = s__0x__must_be_followed_by_hex_dig_001be319._0_8_;
        plVar15 = *(long **)(param_1 + 0x68);
        local_40[0x20] = 'i';
        local_40[0x21] = 't';
        local_40[0x22] = 's';
        local_40[0x23] = '.';
        uVar17 = *(undefined4 *)(param_1 + 0x8c);
        uVar3 = *(undefined4 *)(param_1 + 0x90);
        *(undefined8 *)(local_40 + 8) = uVar7;
        *(undefined8 *)local_40 = uVar6;
        *(undefined8 *)(local_40 + 0x18) = uVar10;
        *(undefined8 *)(local_40 + 0x10) = uVar9;
                    /* try { // try from 006dcc34 to 006dcc3f has its CatchHandler @ 006dcdc8 */
        (**(code **)(*plVar15 + 0x10))(plVar15,uVar17,uVar3,&local_50);
        if (((ulong)local_50 & 1) != 0) {
          free(local_40);
        }
      }
LAB_006dcc50:
      bVar8 = false;
    }
    else {
      if (9 < bVar13 - 0x30) goto LAB_006dca60;
      if ((bVar13 & 0x38) == 0x30) {
        do {
          FUN_006dc0c0(param_1);
        } while ((*(byte *)(param_1 + 0x70) & 0xf8) == 0x30);
        if (9 < *(byte *)(param_1 + 0x70) - 0x30) goto LAB_006dcc50;
      }
      FUN_002fd2b0(&local_50,"Numbers starting with leading zero must be in octal.");
                    /* try { // try from 006dca18 to 006dca1f has its CatchHandler @ 006dcdcc */
      (**(code **)(**(long **)(param_1 + 0x68) + 0x10))
                (*(long **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x8c),
                 *(undefined4 *)(param_1 + 0x90),&local_50);
      if (((ulong)local_50 & 1) != 0) {
        free(local_40);
      }
      if (9 < *(byte *)(param_1 + 0x70) - 0x30) goto LAB_006dcc50;
      do {
        FUN_006dc0c0(param_1);
        bVar8 = false;
      } while (*(byte *)(param_1 + 0x70) - 0x30 < 10);
    }
  }
LAB_006dcc54:
  bVar13 = *(byte *)(param_1 + 0x70);
  if (((bVar13 & 0xffffffdf) - 0x5b < 0xffffffe6 && bVar13 != 0x5f) ||
     (*(char *)(param_1 + 0xac) == '\0')) {
    if (bVar13 != 0x2e) goto LAB_006dcd44;
    if (bVar8) {
      local_40 = (char *)FUN_00759c3c(0x40);
      uVar11 = s_Already_saw_decimal_point_or_exp_001ee9cf._32_8_;
      uVar10 = s_Already_saw_decimal_point_or_exp_001ee9cf._24_8_;
      uVar9 = s_Already_saw_decimal_point_or_exp_001ee9cf._16_8_;
      uVar7 = CONCAT62(s_Already_saw_decimal_point_or_exp_001ee9cf._48_6_,
                       s_Already_saw_decimal_point_or_exp_001ee9cf._46_2_);
      uVar6 = CONCAT26(s_Already_saw_decimal_point_or_exp_001ee9cf._46_2_,
                       s_Already_saw_decimal_point_or_exp_001ee9cf._40_6_);
      *(undefined8 *)(local_40 + 0x36) = s_Already_saw_decimal_point_or_exp_001ee9cf._54_8_;
      *(undefined8 *)(local_40 + 0x2e) = uVar7;
      uStack_48 = _UNK_002005e8;
      local_50 = _DAT_002005e0;
      *(undefined8 *)(local_40 + 0x18) = uVar10;
      *(undefined8 *)(local_40 + 0x10) = uVar9;
      *(undefined8 *)(local_40 + 0x28) = uVar6;
      *(undefined8 *)(local_40 + 0x20) = uVar11;
      uVar7 = s_Already_saw_decimal_point_or_exp_001ee9cf._8_8_;
      uVar6 = s_Already_saw_decimal_point_or_exp_001ee9cf._0_8_;
      plVar15 = *(long **)(param_1 + 0x68);
      local_40[0x3e] = '\0';
      *(undefined8 *)(local_40 + 8) = uVar7;
      *(undefined8 *)local_40 = uVar6;
                    /* try { // try from 006dcd34 to 006dcd3f has its CatchHandler @ 006dcdd4 */
      (**(code **)(*plVar15 + 0x10))
                (plVar15,*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x90),&local_50);
    }
    else {
      local_40 = (char *)FUN_00759c3c(0x28);
      uStack_48 = _UNK_002001f8;
      local_50 = _DAT_002001f0;
      uVar7 = CONCAT71(s_Hex_and_octal_numbers_must_be_in_001ec701._32_7_,
                       s_Hex_and_octal_numbers_must_be_in_001ec701[0x1f]);
      local_40[0x27] = '\0';
      uVar11 = s_Hex_and_octal_numbers_must_be_in_001ec701._16_8_;
      uVar10 = s_Hex_and_octal_numbers_must_be_in_001ec701._8_8_;
      uVar9 = s_Hex_and_octal_numbers_must_be_in_001ec701._0_8_;
      uVar6 = CONCAT17(s_Hex_and_octal_numbers_must_be_in_001ec701[0x1f],
                       s_Hex_and_octal_numbers_must_be_in_001ec701._24_7_);
      *(undefined8 *)(local_40 + 0x1f) = uVar7;
      plVar15 = *(long **)(param_1 + 0x68);
      uVar17 = *(undefined4 *)(param_1 + 0x8c);
      uVar3 = *(undefined4 *)(param_1 + 0x90);
      *(undefined8 *)(local_40 + 8) = uVar10;
      *(undefined8 *)local_40 = uVar9;
      *(undefined8 *)(local_40 + 0x18) = uVar6;
      *(undefined8 *)(local_40 + 0x10) = uVar11;
                    /* try { // try from 006dcdb8 to 006dcdc3 has its CatchHandler @ 006dcdd0 */
      (**(code **)(*plVar15 + 0x10))(plVar15,uVar17,uVar3,&local_50);
    }
  }
  else {
    local_40 = (char *)FUN_00759c3c(0x30);
    uStack_48 = _UNK_002003b8;
    local_50 = _DAT_002003b0;
    uVar6 = CONCAT17(s_Need_space_between_number_and_id_001f72df[0x20],
                     s_Need_space_between_number_and_id_001f72df._25_7_);
    plVar15 = *(long **)(param_1 + 0x68);
    *(undefined8 *)(local_40 + 0x21) = s_Need_space_between_number_and_id_001f72df._33_8_;
    *(undefined8 *)(local_40 + 0x19) = uVar6;
    uVar10 = s_Need_space_between_number_and_id_001f72df._16_8_;
    uVar9 = s_Need_space_between_number_and_id_001f72df._8_8_;
    uVar7 = s_Need_space_between_number_and_id_001f72df._0_8_;
    uVar6 = CONCAT71(s_Need_space_between_number_and_id_001f72df._25_7_,
                     s_Need_space_between_number_and_id_001f72df[0x18]);
    local_40[0x29] = '\0';
    uVar17 = *(undefined4 *)(param_1 + 0x8c);
    uVar3 = *(undefined4 *)(param_1 + 0x90);
    *(undefined8 *)(local_40 + 8) = uVar9;
    *(undefined8 *)local_40 = uVar7;
    *(undefined8 *)(local_40 + 0x18) = uVar6;
    *(undefined8 *)(local_40 + 0x10) = uVar10;
                    /* try { // try from 006dccbc to 006dccc7 has its CatchHandler @ 006dcddc */
    (**(code **)(*plVar15 + 0x10))(plVar15,uVar17,uVar3,&local_50);
  }
  if (((ulong)local_50 & 1) != 0) {
    free(local_40);
  }
LAB_006dcd44:
  uVar17 = 3;
  if (bVar8) {
    uVar17 = 4;
  }
  if (*(long *)(lVar5 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar17);
  }
  return;
}


// ===== 006dce0c  FUN_006dce0c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006dce0c(long param_1,byte *param_2)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  byte *pbVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  byte bVar15;
  uint uVar16;
  long *plVar17;
  int iVar18;
  byte *local_70;
  undefined8 uStack_68;
  char *local_60;
  long local_58;
  
  lVar8 = tpidr_el0;
  local_58 = *(long *)(lVar8 + 0x28);
  uVar2 = *(undefined4 *)(param_1 + 0x8c);
  iVar5 = *(int *)(param_1 + 0x90);
  uVar9 = _UNK_002007f8;
  pbVar11 = _DAT_002007f0;
  if (param_2 != (byte *)0x0) {
    *(byte **)(param_1 + 0x98) = param_2;
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x84);
    uVar9 = _UNK_002007f8;
    pbVar11 = _DAT_002007f0;
  }
LAB_006dce8c:
  do {
    bVar15 = *(byte *)(param_1 + 0x70);
LAB_006dcea0:
    if (bVar15 < 10) {
      if (bVar15 != 9) {
        if (bVar15 != 0) goto LAB_006dceec;
        goto LAB_006dce88;
      }
      uVar7 = *(uint *)(param_1 + 0x90);
      uVar16 = uVar7 & 7;
      if ((int)uVar7 < 1) {
        uVar16 = -(-uVar7 & 7);
      }
      iVar18 = (uVar7 - uVar16) + 8;
LAB_006dcef4:
      iVar3 = *(int *)(param_1 + 0x80);
      *(int *)(param_1 + 0x90) = iVar18;
      lVar1 = (long)*(int *)(param_1 + 0x84) + 1;
      iVar18 = (int)lVar1;
      *(int *)(param_1 + 0x84) = iVar18;
      if (iVar18 < iVar3) {
        bVar15 = *(byte *)(*(long *)(param_1 + 0x78) + lVar1);
        *(byte *)(param_1 + 0x70) = bVar15;
      }
      else if (*(char *)(param_1 + 0x88) == '\0') {
        if (*(long *)(param_1 + 0x98) != 0) {
          iVar18 = *(int *)(param_1 + 0xa0);
          if (iVar18 < iVar3) {
            FUN_0071302c(*(long *)(param_1 + 0x98),*(long *)(param_1 + 0x78) + (long)iVar18,
                         (long)(iVar3 - iVar18));
            *(undefined4 *)(param_1 + 0xa0) = 0;
          }
        }
        local_70 = (byte *)0x0;
        *(undefined8 *)(param_1 + 0x78) = 0;
        *(undefined4 *)(param_1 + 0x84) = 0;
        do {
          uVar14 = (**(code **)(**(long **)(param_1 + 0x60) + 0x10))
                             (*(long **)(param_1 + 0x60),&local_70,param_1 + 0x80);
          if ((uVar14 & 1) == 0) {
            bVar15 = 0;
            *(undefined4 *)(param_1 + 0x80) = 0;
            *(undefined1 *)(param_1 + 0x88) = 1;
            *(undefined1 *)(param_1 + 0x70) = 0;
            goto LAB_006dcea0;
          }
        } while (*(int *)(param_1 + 0x80) == 0);
        *(byte **)(param_1 + 0x78) = local_70;
        bVar15 = *local_70;
        *(byte *)(param_1 + 0x70) = bVar15;
      }
      else {
        bVar15 = 0;
        *(undefined1 *)(param_1 + 0x70) = 0;
      }
      goto LAB_006dcea0;
    }
    if (bVar15 == 10) {
      FUN_006dc0c0(param_1);
      if (param_2 != (byte *)0x0) {
        iVar18 = *(int *)(param_1 + 0xa0);
        if (*(int *)(param_1 + 0x84) != iVar18) {
          FUN_0071302c(*(undefined8 *)(param_1 + 0x98),*(long *)(param_1 + 0x78) + (long)iVar18,
                       (long)(*(int *)(param_1 + 0x84) - iVar18));
        }
        *(undefined8 *)(param_1 + 0x98) = 0;
        *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
      }
      bVar15 = *(byte *)(param_1 + 0x70);
      goto LAB_006dcff8;
    }
    if (bVar15 != 0x2a) {
      if (bVar15 == 0x2f) {
        FUN_006dc0c0(param_1);
        bVar15 = *(byte *)(param_1 + 0x70);
        if (bVar15 == 0x2a) {
          local_60 = (char *)FUN_00759c3c(0x40);
          plVar17 = *(long **)(param_1 + 0x68);
          local_60[0x3c] = '\0';
          uVar10 = CONCAT44(s______inside_block_comment__Block_001e461b._48_4_,
                            s______inside_block_comment__Block_001e461b._44_4_);
          uVar4 = *(undefined4 *)(param_1 + 0x8c);
          uVar6 = *(undefined4 *)(param_1 + 0x90);
          *(undefined8 *)(local_60 + 0x34) = s______inside_block_comment__Block_001e461b._52_8_;
          *(undefined8 *)(local_60 + 0x2c) = uVar10;
          uVar13 = s______inside_block_comment__Block_001e461b._32_8_;
          uVar12 = s______inside_block_comment__Block_001e461b._16_8_;
          uVar10 = CONCAT44(s______inside_block_comment__Block_001e461b._44_4_,
                            s______inside_block_comment__Block_001e461b._40_4_);
          *(undefined8 *)(local_60 + 0x18) = s______inside_block_comment__Block_001e461b._24_8_;
          *(undefined8 *)(local_60 + 0x10) = uVar12;
          *(undefined8 *)(local_60 + 0x28) = uVar10;
          *(undefined8 *)(local_60 + 0x20) = uVar13;
          uVar10 = s______inside_block_comment__Block_001e461b._0_8_;
          *(undefined8 *)(local_60 + 8) = s______inside_block_comment__Block_001e461b._8_8_;
          *(undefined8 *)local_60 = uVar10;
                    /* try { // try from 006dd150 to 006dd15b has its CatchHandler @ 006dd360 */
          local_70 = pbVar11;
          uStack_68 = uVar9;
          (**(code **)(*plVar17 + 0x10))(plVar17,uVar4,uVar6,&local_70);
          if (((ulong)local_70 & 1) != 0) {
            free(local_60);
          }
          goto LAB_006dce8c;
        }
        goto LAB_006dce88;
      }
LAB_006dceec:
      iVar18 = *(int *)(param_1 + 0x90) + 1;
      goto LAB_006dcef4;
    }
    FUN_006dc0c0(param_1);
    bVar15 = *(byte *)(param_1 + 0x70);
    if (bVar15 == 0x2f) {
      FUN_006dc0c0(param_1);
      if (param_2 != (byte *)0x0) {
        iVar5 = *(int *)(param_1 + 0xa0);
        if (*(int *)(param_1 + 0x84) != iVar5) {
          FUN_0071302c(*(undefined8 *)(param_1 + 0x98),*(long *)(param_1 + 0x78) + (long)iVar5,
                       (long)(*(int *)(param_1 + 0x84) - iVar5));
        }
        *(undefined8 *)(param_1 + 0x98) = 0;
        *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
        uVar14 = (ulong)(*param_2 >> 1);
        if ((*param_2 & 1) != 0) {
          uVar14 = *(ulong *)(param_2 + 8);
        }
        FUN_007135f0(param_2,uVar14 - 2,0xffffffffffffffff);
      }
      goto LAB_006dd310;
    }
LAB_006dce88:
  } while (bVar15 != 0);
  local_60 = (char *)FUN_00759c3c(0x28);
  uStack_68 = _UNK_00200438;
  local_70 = _DAT_00200430;
  local_60[0x20] = '.';
  uVar12 = s_End_of_file_inside_block_comment_001d3362._24_8_;
  uVar10 = s_End_of_file_inside_block_comment_001d3362._16_8_;
  uVar9 = s_End_of_file_inside_block_comment_001d3362._0_8_;
  local_60[0x21] = '\0';
  plVar17 = *(long **)(param_1 + 0x68);
  uVar4 = *(undefined4 *)(param_1 + 0x8c);
  uVar6 = *(undefined4 *)(param_1 + 0x90);
  *(undefined8 *)(local_60 + 8) = s_End_of_file_inside_block_comment_001d3362._8_8_;
  *(undefined8 *)local_60 = uVar9;
  *(undefined8 *)(local_60 + 0x18) = uVar12;
  *(undefined8 *)(local_60 + 0x10) = uVar10;
                    /* try { // try from 006dd1e0 to 006dd1eb has its CatchHandler @ 006dd35c */
  (**(code **)(*plVar17 + 0x10))(plVar17,uVar4,uVar6,&local_70);
  if (((ulong)local_70 & 1) != 0) {
    free(local_60);
  }
  plVar17 = *(long **)(param_1 + 0x68);
  local_60 = (char *)FUN_00759c3c(0x19);
  uStack_68 = _UNK_002002d8;
  local_70 = _DAT_002002d0;
  uVar10 = s_Comment_started_here__001c4d7e._0_8_;
  uVar9 = CONCAT17(s_Comment_started_here__001c4d7e[0xf],s_Comment_started_here__001c4d7e._8_7_);
  *(ulong *)(local_60 + 0xf) =
       CONCAT71(s_Comment_started_here__001c4d7e._16_7_,s_Comment_started_here__001c4d7e[0xf]);
  *(undefined8 *)(local_60 + 8) = uVar9;
  *(undefined8 *)local_60 = uVar10;
  local_60[0x17] = '\0';
                    /* try { // try from 006dd23c to 006dd24f has its CatchHandler @ 006dd358 */
  (**(code **)(*plVar17 + 0x10))(plVar17,uVar2,iVar5 + -2,&local_70);
  if (((ulong)local_70 & 1) != 0) {
    free(local_60);
  }
  if (param_2 == (byte *)0x0) {
LAB_006dd310:
    if (*(long *)(lVar8 + 0x28) == local_58) {
      return;
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 0xa0);
    if (*(int *)(param_1 + 0x84) != iVar5) {
      FUN_0071302c(*(undefined8 *)(param_1 + 0x98),*(long *)(param_1 + 0x78) + (long)iVar5,
                   (long)(*(int *)(param_1 + 0x84) - iVar5));
    }
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
    if (*(long *)(lVar8 + 0x28) == local_58) {
      return;
    }
  }
LAB_006dd354:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_006dcff8:
  uVar16 = (uint)bVar15;
  if (bVar15 < 0x20) {
    if (uVar16 - 0xb < 3) goto LAB_006dd040;
    if (uVar16 != 9) goto LAB_006dd18c;
    uVar7 = *(uint *)(param_1 + 0x90);
    uVar16 = uVar7 & 7;
    if ((int)uVar7 < 1) {
      uVar16 = -(-uVar7 & 7);
    }
    iVar18 = (uVar7 - uVar16) + 8;
  }
  else {
    if (uVar16 != 0x20) goto LAB_006dd170;
LAB_006dd040:
    iVar18 = *(int *)(param_1 + 0x90) + 1;
  }
  iVar3 = *(int *)(param_1 + 0x80);
  *(int *)(param_1 + 0x90) = iVar18;
  lVar1 = (long)*(int *)(param_1 + 0x84) + 1;
  iVar18 = (int)lVar1;
  *(int *)(param_1 + 0x84) = iVar18;
  if (iVar18 < iVar3) {
    bVar15 = *(byte *)(*(long *)(param_1 + 0x78) + lVar1);
    *(byte *)(param_1 + 0x70) = bVar15;
  }
  else if (*(char *)(param_1 + 0x88) == '\0') {
    if (*(long *)(param_1 + 0x98) != 0) {
      iVar18 = *(int *)(param_1 + 0xa0);
      if (iVar18 < iVar3) {
        FUN_0071302c(*(long *)(param_1 + 0x98),*(long *)(param_1 + 0x78) + (long)iVar18,
                     (long)(iVar3 - iVar18));
        *(undefined4 *)(param_1 + 0xa0) = 0;
      }
    }
    local_70 = (byte *)0x0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x84) = 0;
    do {
      uVar14 = (**(code **)(**(long **)(param_1 + 0x60) + 0x10))
                         (*(long **)(param_1 + 0x60),&local_70,param_1 + 0x80);
      if ((uVar14 & 1) == 0) {
        bVar15 = 0;
        *(undefined4 *)(param_1 + 0x80) = 0;
        *(undefined1 *)(param_1 + 0x88) = 1;
        *(undefined1 *)(param_1 + 0x70) = 0;
        goto LAB_006dcff8;
      }
    } while (*(int *)(param_1 + 0x80) == 0);
    *(byte **)(param_1 + 0x78) = local_70;
    bVar15 = *local_70;
    *(byte *)(param_1 + 0x70) = bVar15;
  }
  else {
    bVar15 = 0;
    *(undefined1 *)(param_1 + 0x70) = 0;
  }
  goto LAB_006dcff8;
LAB_006dd170:
  if ((uVar16 == 0x2a) && (FUN_006dc0c0(param_1), *(char *)(param_1 + 0x70) == '/')) {
    FUN_006dc0c0(param_1);
    if (*(long *)(lVar8 + 0x28) == local_58) {
      return;
    }
    goto LAB_006dd354;
  }
LAB_006dd18c:
  if (param_2 != (byte *)0x0) {
    *(byte **)(param_1 + 0x98) = param_2;
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x84);
  }
  goto LAB_006dce8c;
}


// ===== 006dd38c  FUN_006dd38c =====

undefined8 FUN_006dd38c(undefined4 *param_1)

{
  if (param_1[0x2a] == 0) {
    if (*(char *)(param_1 + 0x1c) != '/') {
      return 3;
    }
    FUN_006dc0c0();
    if (*(char *)(param_1 + 0x1c) == '*') {
      FUN_006dc0c0(param_1);
      return 1;
    }
    if (*(char *)(param_1 + 0x1c) != '/') {
      *param_1 = 6;
      FUN_0071396c(param_1 + 2,&DAT_001c55aa);
      param_1[10] = param_1[0x24];
      param_1[8] = param_1[0x23];
      param_1[9] = param_1[0x24] + -1;
      return 2;
    }
  }
  else {
    if (param_1[0x2a] != 1) {
      return 3;
    }
    if (*(char *)(param_1 + 0x1c) != '#') {
      return 3;
    }
  }
  FUN_006dc0c0(param_1);
  return 0;
}


// ===== 006dd460  FUN_006dd460 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006dd460(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  byte *pbVar12;
  int iVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  uint uVar16;
  undefined8 uVar17;
  ulong uVar18;
  long *plVar19;
  byte *local_80;
  undefined8 uStack_78;
  char *local_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  puVar1 = param_1 + 2;
  local_68 = *(long *)(lVar7 + 0x28);
  param_1[0xc] = *param_1;
  FUN_007139b0(param_1 + 0xe,puVar1);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_1 + 8);
  param_1[0x16] = param_1[10];
  uVar15 = _UNK_00200198;
  pbVar12 = _DAT_00200190;
  bVar5 = *(byte *)(param_1 + 0x22) & 1;
joined_r0x006dd4c4:
  while (bVar5 == 0) {
    *param_1 = 0;
    if ((*(byte *)(param_1 + 2) & 1) == 0) {
      *(undefined2 *)(param_1 + 2) = 0;
    }
    else {
      **(undefined1 **)(param_1 + 6) = 0;
      *(undefined8 *)(param_1 + 4) = 0;
    }
    bVar5 = *(byte *)(param_1 + 0x1c);
    uVar18 = (ulong)bVar5;
    *(undefined4 **)(param_1 + 0x26) = puVar1;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x23);
    param_1[0x28] = param_1[0x21];
    uVar16 = (uint)bVar5;
    if (*(char *)((long)param_1 + 0xaf) == '\0') {
      if ((uVar16 - 9 < 5) || (uVar16 == 0x20)) {
        do {
          if ((int)uVar18 == 9) {
            uVar4 = param_1[0x24];
            uVar16 = uVar4 & 7;
            if ((int)uVar4 < 1) {
              uVar16 = -(-uVar4 & 7);
            }
            iVar13 = (uVar4 - uVar16) + 8;
          }
          else if ((int)uVar18 == 10) {
            iVar13 = 0;
            param_1[0x23] = param_1[0x23] + 1;
          }
          else {
            iVar13 = param_1[0x24] + 1;
          }
          iVar6 = param_1[0x20];
          iVar3 = param_1[0x21];
          param_1[0x24] = iVar13;
          iVar13 = (int)((long)iVar3 + 1);
          param_1[0x21] = iVar13;
          if (iVar13 < iVar6) {
            uVar18 = (ulong)*(byte *)(*(long *)(param_1 + 0x1e) + (long)iVar3 + 1);
          }
          else {
            if (*(char *)(param_1 + 0x22) != '\0') {
              *(undefined1 *)(param_1 + 0x1c) = 0;
              break;
            }
            if (*(long *)(param_1 + 0x26) != 0) {
              iVar13 = param_1[0x28];
              if (iVar13 < iVar6) {
                FUN_0071302c(*(long *)(param_1 + 0x26),*(long *)(param_1 + 0x1e) + (long)iVar13,
                             (long)(iVar6 - iVar13));
                param_1[0x28] = 0;
              }
            }
            local_80 = (byte *)0x0;
            *(undefined8 *)(param_1 + 0x1e) = 0;
            param_1[0x21] = 0;
            do {
              uVar18 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))
                                 (*(long **)(param_1 + 0x18),&local_80,param_1 + 0x20);
              if ((uVar18 & 1) == 0) {
                uVar18 = 0;
                param_1[0x20] = 0;
                *(undefined1 *)(param_1 + 0x22) = 1;
                goto LAB_006dd6c0;
              }
            } while (param_1[0x20] == 0);
            *(byte **)(param_1 + 0x1e) = local_80;
            uVar18 = (ulong)*local_80;
          }
LAB_006dd6c0:
          *(char *)(param_1 + 0x1c) = (char)uVar18;
        } while (((int)uVar18 - 9U < 5) || ((int)uVar18 == 0x20));
        *param_1 = 7;
        if (*(char *)((long)param_1 + 0xae) != '\0') goto LAB_006dd950;
      }
      bVar8 = false;
      iVar13 = param_1[0x21];
      iVar6 = param_1[0x28];
      if (iVar13 != iVar6) goto LAB_006dd5a8;
    }
    else {
      if ((bVar5 < 0x21) && ((1L << (uVar18 & 0x3f) & 0x100003a00U) != 0)) goto LAB_006dd830;
      bVar8 = false;
      if ((*(char *)((long)param_1 + 0xae) != '\0') && (uVar16 == 10)) {
        FUN_006dc0c0(param_1);
        bVar8 = true;
        *param_1 = 8;
      }
      iVar13 = param_1[0x21];
      iVar6 = param_1[0x28];
      if (iVar13 != iVar6) {
LAB_006dd5a8:
        FUN_0071302c(*(undefined8 *)(param_1 + 0x26),*(long *)(param_1 + 0x1e) + (long)iVar6,
                     (long)(iVar13 - iVar6));
      }
    }
    *(undefined8 *)(param_1 + 0x26) = 0;
    param_1[0x28] = 0xffffffff;
    param_1[10] = param_1[0x24];
    if (bVar8) {
LAB_006dd9a4:
      uVar15 = 1;
      if (*(long *)(lVar7 + 0x28) == local_68) {
        return;
      }
      goto LAB_006ddc58;
    }
    iVar13 = FUN_006dd38c(param_1);
    if (iVar13 != 0) {
      if (iVar13 == 1) {
        FUN_006dce0c(param_1,0);
        goto LAB_006dd514;
      }
      if (iVar13 == 2) goto LAB_006dd9a4;
      if ((*(byte *)(param_1 + 0x22) & 1) == 0) {
        bVar5 = *(byte *)(param_1 + 0x1c);
        if (bVar5 < 0x20) goto code_r0x006dd604;
        *param_1 = 0;
        if ((*(byte *)(param_1 + 2) & 1) == 0) {
          *(undefined2 *)(param_1 + 2) = 0;
        }
        else {
          **(undefined1 **)(param_1 + 6) = 0;
          bVar5 = *(byte *)(param_1 + 0x1c);
          *(undefined8 *)(param_1 + 4) = 0;
        }
        uVar14 = param_1[0x23];
        uVar2 = param_1[0x24];
        uVar16 = (uint)bVar5;
        *(undefined4 **)(param_1 + 0x26) = puVar1;
        param_1[8] = uVar14;
        param_1[9] = uVar2;
        param_1[0x28] = param_1[0x21];
        if ((uVar16 != 0x5f) && (0x19 < (uVar16 & 0xffffffdf) - 0x41)) {
          if (uVar16 == 0x2e) {
            FUN_006dc0c0(param_1);
            if (9 < *(byte *)(param_1 + 0x1c) - 0x30) {
LAB_006ddc08:
              uVar14 = 6;
              goto LAB_006ddc0c;
            }
            FUN_006dc0c0(param_1);
            if (((param_1[0xc] == 2) && (param_1[8] == param_1[0x14])) &&
               (param_1[9] == param_1[0x16])) {
              uVar14 = param_1[0x23];
              iVar13 = param_1[0x24];
              plVar19 = *(long **)(param_1 + 0x1a);
              FUN_002fd2b0(&local_80,"Need space between identifier and decimal point.");
                    /* try { // try from 006ddb24 to 006ddb37 has its CatchHandler @ 006ddc28 */
              (**(code **)(*plVar19 + 0x10))(plVar19,uVar14,iVar13 + -2,&local_80);
              if (((ulong)local_80 & 1) != 0) {
                free(local_70);
              }
            }
            uVar15 = 0;
            uVar17 = 1;
          }
          else {
            if (uVar16 == 0x30) {
              FUN_006dc0c0(param_1);
              uVar15 = 1;
            }
            else {
              if (9 < uVar16 - 0x30) {
                if (uVar16 == 0x27) {
                  FUN_006dc0c0(param_1);
                  uVar15 = 0x27;
                }
                else {
                  if (uVar16 != 0x22) {
                    if ((char)bVar5 < '\0') {
                      plVar19 = *(long **)(param_1 + 0x1a);
                      FUN_006d9f38(&local_80,"Interpreting non ascii codepoint %d.");
                    /* try { // try from 006ddbdc to 006ddbef has its CatchHandler @ 006ddc24 */
                      (**(code **)(*plVar19 + 0x10))(plVar19,uVar14,uVar2,&local_80);
                      if (((ulong)local_80 & 1) != 0) {
                        free(local_70);
                      }
                    }
                    FUN_006dc0c0(param_1);
                    goto LAB_006ddc08;
                  }
                  FUN_006dc0c0(param_1);
                  uVar15 = 0x22;
                }
                FUN_006dc248(param_1,uVar15);
                uVar14 = 5;
                goto LAB_006ddc0c;
              }
              FUN_006dc0c0(param_1);
              uVar15 = 0;
            }
            uVar17 = 0;
          }
          uVar14 = FUN_006dc82c(param_1,uVar15,uVar17);
          goto LAB_006ddc0c;
        }
        FUN_006dc0c0(param_1);
        bVar5 = *(byte *)(param_1 + 0x1c);
        while (((bVar5 == 0x5f || (bVar5 - 0x30 < 10)) || ((bVar5 & 0xffffffdf) - 0x41 < 0x1a))) {
          FUN_006dc0c0(param_1);
          bVar5 = *(byte *)(param_1 + 0x1c);
        }
        uVar14 = 2;
LAB_006ddc0c:
        iVar13 = param_1[0x21];
        iVar6 = param_1[0x28];
        *param_1 = uVar14;
        if (iVar13 != iVar6) goto LAB_006dd960;
        goto LAB_006dd978;
      }
      break;
    }
    while (*(char *)(param_1 + 0x1c) != '\0') {
      if (*(char *)(param_1 + 0x1c) == '\n') {
        FUN_006dc0c0(param_1);
        break;
      }
      FUN_006dc0c0(param_1);
    }
LAB_006dd514:
    bVar5 = *(byte *)(param_1 + 0x22);
  }
  *param_1 = 1;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    *(undefined2 *)(param_1 + 2) = 0;
  }
  else {
    **(undefined1 **)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
  }
  uVar15 = 0;
  param_1[8] = param_1[0x23];
  param_1[9] = param_1[0x24];
  param_1[10] = param_1[0x24];
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return;
  }
LAB_006ddc58:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar15);
LAB_006dd830:
  if ((int)uVar18 == 9) {
    uVar4 = param_1[0x24];
    uVar16 = uVar4 & 7;
    if ((int)uVar4 < 1) {
      uVar16 = -(-uVar4 & 7);
    }
    iVar13 = (uVar4 - uVar16) + 8;
  }
  else if ((int)uVar18 == 10) {
    iVar13 = 0;
    param_1[0x23] = param_1[0x23] + 1;
  }
  else {
    iVar13 = param_1[0x24] + 1;
  }
  iVar6 = param_1[0x20];
  iVar3 = param_1[0x21];
  param_1[0x24] = iVar13;
  iVar13 = (int)((long)iVar3 + 1);
  param_1[0x21] = iVar13;
  if (iVar13 < iVar6) {
    uVar18 = (ulong)*(byte *)(*(long *)(param_1 + 0x1e) + (long)iVar3 + 1);
  }
  else {
    if (*(char *)(param_1 + 0x22) != '\0') {
      *(undefined1 *)(param_1 + 0x1c) = 0;
LAB_006dd948:
      *param_1 = 7;
LAB_006dd950:
      iVar13 = param_1[0x21];
      iVar6 = param_1[0x28];
      if (iVar13 != iVar6) {
LAB_006dd960:
        FUN_0071302c(*(undefined8 *)(param_1 + 0x26),*(long *)(param_1 + 0x1e) + (long)iVar6,
                     (long)(iVar13 - iVar6));
      }
LAB_006dd978:
      *(undefined8 *)(param_1 + 0x26) = 0;
      param_1[0x28] = 0xffffffff;
      uVar15 = 1;
      param_1[10] = param_1[0x24];
      if (*(long *)(lVar7 + 0x28) == local_68) {
        return;
      }
      goto LAB_006ddc58;
    }
    if (*(long *)(param_1 + 0x26) != 0) {
      iVar13 = param_1[0x28];
      if (iVar13 < iVar6) {
        FUN_0071302c(*(long *)(param_1 + 0x26),*(long *)(param_1 + 0x1e) + (long)iVar13,
                     (long)(iVar6 - iVar13));
        param_1[0x28] = 0;
      }
    }
    local_80 = (byte *)0x0;
    *(undefined8 *)(param_1 + 0x1e) = 0;
    param_1[0x21] = 0;
    do {
      uVar18 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))
                         (*(long **)(param_1 + 0x18),&local_80,param_1 + 0x20);
      if ((uVar18 & 1) == 0) {
        uVar18 = 0;
        param_1[0x20] = 0;
        *(undefined1 *)(param_1 + 0x22) = 1;
        goto LAB_006dd924;
      }
    } while (param_1[0x20] == 0);
    *(byte **)(param_1 + 0x1e) = local_80;
    uVar18 = (ulong)*local_80;
  }
LAB_006dd924:
  *(char *)(param_1 + 0x1c) = (char)uVar18;
  if ((0x20 < (uint)uVar18) || ((1L << (uVar18 & 0x3f) & 0x100003a00U) == 0)) goto LAB_006dd948;
  goto LAB_006dd830;
code_r0x006dd604:
  local_70 = (char *)FUN_00759c3c(0x30);
  uVar17 = CONCAT71(s_Invalid_control_characters_encou_001ea780._32_7_,
                    s_Invalid_control_characters_encou_001ea780[0x1f]);
  plVar19 = *(long **)(param_1 + 0x1a);
  uStack_78 = uVar15;
  local_80 = pbVar12;
  *(undefined8 *)(local_70 + 0x27) = s_Invalid_control_characters_encou_001ea780._39_8_;
  *(undefined8 *)(local_70 + 0x1f) = uVar17;
  uVar11 = s_Invalid_control_characters_encou_001ea780._16_8_;
  uVar10 = s_Invalid_control_characters_encou_001ea780._8_8_;
  uVar9 = s_Invalid_control_characters_encou_001ea780._0_8_;
  uVar17 = CONCAT17(s_Invalid_control_characters_encou_001ea780[0x1f],
                    s_Invalid_control_characters_encou_001ea780._24_7_);
  local_70[0x2f] = '\0';
  uVar14 = param_1[0x23];
  uVar2 = param_1[0x24];
  *(undefined8 *)(local_70 + 8) = uVar10;
  *(undefined8 *)local_70 = uVar9;
  *(undefined8 *)(local_70 + 0x18) = uVar17;
  *(undefined8 *)(local_70 + 0x10) = uVar11;
                    /* try { // try from 006dd63c to 006dd647 has its CatchHandler @ 006ddc2c */
  (**(code **)(*plVar19 + 0x10))(plVar19,uVar14,uVar2,&local_80);
  if (((ulong)local_80 & 1) != 0) {
    free(local_70);
  }
  do {
    do {
      FUN_006dc0c0(param_1);
    } while (*(byte *)(param_1 + 0x1c) - 1 < 0x1f);
    bVar5 = *(byte *)(param_1 + 0x22);
  } while (bVar5 == 0 && *(byte *)(param_1 + 0x1c) == 0);
  goto joined_r0x006dd4c4;
}


// ===== 006ddc5c  FUN_006ddc5c =====

undefined8 FUN_006ddc5c(byte *param_1,ulong param_2,ulong *param_3)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  
  pbVar4 = *(byte **)(param_1 + 0x10);
  if ((*param_1 & 1) == 0) {
    pbVar4 = param_1 + 1;
  }
  if (*pbVar4 == 0x30) {
    bVar2 = (pbVar4[1] | 0x20) != 0x78;
    uVar6 = 0x10;
    if (bVar2) {
      uVar6 = 8;
    }
    uVar5 = 0x1000000000000000;
    pbVar3 = pbVar4 + 2;
    if (bVar2) {
      uVar5 = 0x2000000000000000;
      pbVar3 = pbVar4;
    }
  }
  else {
    uVar6 = 10;
    uVar5 = 0x199999999999999a;
    pbVar3 = pbVar4;
  }
  uVar7 = 0;
  do {
    bVar1 = *pbVar3;
    uVar8 = uVar7;
    if (bVar1 == 0) goto LAB_006ddd38;
    pbVar3 = pbVar3 + 1;
    iVar9 = 0;
    if (bVar1 != 0x30) {
      iVar9 = 3;
      uVar8 = (long)"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"[(uint)bVar1];
    }
    if ((int)uVar6 <= (int)"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"[(uint)bVar1]) {
      iVar9 = 1;
      uVar8 = uVar7;
    }
    uVar7 = uVar8;
  } while (iVar9 == 0);
  if (iVar9 == 3) {
    bVar1 = *pbVar3;
    if (bVar1 != 0) {
      lVar10 = 1;
      do {
        if ((int)uVar6 <= (int)"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"[bVar1]) {
          return 0;
        }
        if (uVar5 <= uVar8) {
          return 0;
        }
        uVar8 = (long)"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"[bVar1] + uVar8 * uVar6;
        if (uVar8 < uVar6) {
          return 0;
        }
        bVar1 = pbVar3[lVar10];
        lVar10 = lVar10 + 1;
      } while (bVar1 != 0);
    }
LAB_006ddd38:
    if (uVar8 <= param_2) {
      *param_3 = uVar8;
      return 1;
    }
  }
  return 0;
}


// ===== 006ddd54  FUN_006ddd54 =====

void FUN_006ddd54(byte *param_1)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  byte *pbVar4;
  undefined8 uVar5;
  byte *pbVar6;
  undefined8 uVar7;
  undefined1 uStack_89;
  byte local_88 [16];
  void *local_78;
  undefined1 auStack_70 [48];
  byte *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  pbVar6 = *(byte **)(param_1 + 0x10);
  if ((*param_1 & 1) == 0) {
    pbVar6 = param_1 + 1;
  }
  uVar7 = thunk_FUN_00677fb0(pbVar6,&local_40);
  bVar2 = *local_40;
  pbVar4 = local_40;
  if ((bVar2 | 0x20) == 0x65) {
    bVar2 = local_40[1];
    if ((bVar2 == 0x2d) || (pbVar4 = local_40 + 1, bVar2 == 0x2b)) {
      bVar2 = local_40[2];
      pbVar4 = local_40 + 2;
    }
  }
  local_40 = pbVar4;
  if ((bVar2 | 0x20) == 0x66) {
    local_40 = local_40 + 1;
  }
  uVar1 = (ulong)(*param_1 >> 1);
  if ((*param_1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (((long)local_40 - (long)pbVar6 != uVar1) || (*pbVar6 == 0x2d)) {
    FUN_00675e64(auStack_70,2,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/io/tokenizer.cc"
                 ,0x400);
                    /* try { // try from 006dde34 to 006dde43 has its CatchHandler @ 006dded0 */
    uVar5 = FUN_00675a58(auStack_70,
                         " Tokenizer::ParseFloat() passed text that could not have been tokenized as a float: "
                        );
                    /* try { // try from 006dde44 to 006dde53 has its CatchHandler @ 006ddecc */
    FUN_006774fc(local_88,param_1);
                    /* try { // try from 006dde54 to 006dde63 has its CatchHandler @ 006ddeb4 */
    uVar5 = FUN_00675a80(uVar5,local_88);
                    /* try { // try from 006dde64 to 006dde6b has its CatchHandler @ 006ddeb0 */
    FUN_00675ac0(&uStack_89,uVar5);
    if ((local_88[0] & 1) != 0) {
      free(local_78);
    }
    FUN_00675e7c(auStack_70);
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}


// ===== 006ddef8  FUN_006ddef8 =====

void FUN_006ddef8(byte *param_1,ulong *param_2)

{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  bool bVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  long lVar15;
  undefined1 uStack_b1;
  byte local_b0 [16];
  void *local_a0;
  undefined4 local_98;
  undefined1 auStack_94 [44];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  bVar4 = *param_1;
  uVar8 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar8 = *(ulong *)(param_1 + 8);
  }
  if (uVar8 != 0) {
    bVar6 = ((byte)*param_2 & 1) != 0;
    uVar9 = (ulong)(byte)((byte)*param_2 >> 1);
    if (bVar6) {
      uVar9 = param_2[1];
    }
    uVar2 = 0x16;
    if (bVar6) {
      uVar2 = (*param_2 & 0xfffffffffffffffe) - 1;
    }
    if (uVar2 < uVar9 + uVar8) {
      FUN_00712ea8(param_2);
      bVar4 = *param_1;
    }
    pbVar12 = *(byte **)(param_1 + 0x10);
    if ((bVar4 & 1) == 0) {
      pbVar12 = param_1 + 1;
    }
LAB_006ddfc4:
    do {
      pbVar13 = pbVar12 + 1;
      bVar4 = *pbVar13;
      if (bVar4 != 0x5c) {
        if (bVar4 != 0) {
LAB_006de044:
          pbVar14 = param_1 + 1;
          if ((*param_1 & 1) != 0) {
            pbVar14 = *(byte **)(param_1 + 0x10);
          }
          if ((bVar4 != *pbVar14) || (pbVar14 = pbVar12 + 2, pbVar12 = pbVar13, *pbVar14 != 0)) {
            FUN_007132e8(param_2,bVar4);
            pbVar12 = pbVar13;
          }
          goto LAB_006ddfc4;
        }
        goto LAB_006de378;
      }
      pbVar14 = pbVar12 + 2;
      bVar3 = *pbVar14;
      uVar8 = (ulong)bVar3;
      if (uVar8 == 0) goto LAB_006de044;
      if ((bVar3 & 0xf8) != 0x30) {
        uVar9 = 7;
        switch(bVar3) {
        case 0x22:
        case 0x27:
        case 0x3f:
        case 0x5c:
          uVar9 = uVar8;
          break;
        default:
          uVar9 = 0x3f;
          break;
        case 0x55:
        case 0x75:
          uVar10 = 4;
          if (bVar3 != 0x75) {
            uVar10 = (uint)(bVar3 == 0x55) << 3;
          }
          if (uVar10 != 0) {
            uVar8 = (ulong)(uVar10 | 3);
            uVar9 = 0;
            pbVar13 = pbVar12 + 3;
            pbVar1 = pbVar12 + uVar8;
            do {
              bVar4 = *pbVar13;
              if ((ulong)bVar4 == 0) goto LAB_006de190;
              pbVar13 = pbVar13 + 1;
              uVar10 = (int)"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"[bVar4] +
                       (int)uVar9 * 0x10;
              uVar9 = (ulong)uVar10;
            } while (pbVar13 < pbVar1);
            if (uVar10 >> 10 == 0x36) {
              if (((((*pbVar1 == 0x5c) && (pbVar1[1] == 0x75)) && ((ulong)pbVar1[2] != 0)) &&
                  (((ulong)pbVar1[3] != 0 && ((ulong)pbVar1[4] != 0)))) &&
                 (((ulong)pbVar1[5] != 0 &&
                  (uVar11 = (int)"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"[pbVar1[5]] +
                            ("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"[pbVar1[2]] * 0x100 +
                             "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"[pbVar1[3]] * 0x10 +
                            (int)"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"[pbVar1[4]]) *
                            0x10, uVar11 >> 10 == 0x37)))) {
                uVar8 = uVar8 + 6;
                uVar9 = (ulong)(uVar11 + uVar10 * 0x400 + 0xfca02400);
              }
              pbVar12 = pbVar12 + uVar8;
LAB_006de164:
              uVar11 = (uint)(uVar9 >> 0x10);
              uVar10 = (uint)uVar9;
              if (uVar11 == 0) {
                lVar15 = 3;
                uVar10 = (uVar10 & 0xfc0) << 2 | uVar10 & 0x3f | (uVar10 >> 0xc & 0xf) << 0x10;
                uVar11 = 0xe08080;
              }
              else {
                if (0x10 < uVar11) {
                  FUN_006da01c(param_2,"\\U%08x");
                  pbVar12 = pbVar12 + -1;
                  goto LAB_006ddfc4;
                }
                lVar15 = 4;
                uVar11 = 0xf0808080;
                uVar10 = (uVar10 & 0x3f000) << 4 | (uVar10 >> 0x12 & 7) << 0x18 |
                         uVar10 & 0x3f | (uVar10 >> 6 & 0x3f) << 8;
              }
LAB_006de2d0:
              uVar9 = (ulong)(uVar10 | uVar11);
            }
            else {
              pbVar12 = pbVar12 + uVar8;
              if (0x7f < uVar10) {
                if (0x7ff < uVar10) goto LAB_006de164;
                uVar11 = 0xc080;
                lVar15 = 2;
                uVar10 = uVar10 * 4 & 0x1f00 | uVar10 & 0x3f;
                goto LAB_006de2d0;
              }
              lVar15 = 1;
            }
            local_98 = FUN_00675f04(uVar9);
            FUN_0071302c(param_2,auStack_94 + -lVar15,lVar15);
            pbVar12 = pbVar12 + -1;
            goto LAB_006ddfc4;
          }
LAB_006de190:
          FUN_007132e8(param_2);
          pbVar12 = pbVar14;
          goto LAB_006ddfc4;
        case 0x61:
          break;
        case 0x62:
          uVar9 = 8;
          break;
        case 0x66:
          uVar9 = 0xc;
          break;
        case 0x6e:
          uVar9 = 10;
          break;
        case 0x72:
          uVar9 = 0xd;
          break;
        case 0x74:
          uVar9 = 9;
          break;
        case 0x76:
          uVar9 = 0xb;
          break;
        case 0x78:
          bVar4 = pbVar12[3];
          if ((bVar4 - 0x30 & 0xff) < 10) {
LAB_006de1dc:
            uVar9 = (ulong)"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"[bVar4];
            pbVar14 = pbVar12 + 3;
          }
          else {
            uVar9 = 0;
            uVar10 = bVar4 - 0x41;
            if ((uVar10 < 0x26) && ((1L << ((ulong)uVar10 & 0x3f) & 0x3f0000003fU) != 0))
            goto LAB_006de1dc;
          }
          pbVar12 = pbVar14 + 1;
          bVar4 = *pbVar12;
          if (((bVar4 - 0x30 & 0xff) < 10) ||
             ((uVar10 = bVar4 - 0x41, uVar10 < 0x26 &&
              ((1L << ((ulong)uVar10 & 0x3f) & 0x3f0000003fU) != 0)))) {
            uVar10 = (uint)(byte)"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"[bVar4] +
                     (int)uVar9 * 0x10;
            goto LAB_006de034;
          }
          goto LAB_006de038;
        }
        FUN_007132e8(param_2,uVar9);
        pbVar12 = pbVar14;
        goto LAB_006ddfc4;
      }
      uVar9 = (ulong)"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"[uVar8];
      uVar10 = (uint)pbVar12[3];
      if ((uVar10 & 0xf8) == 0x30) {
        uVar9 = (ulong)(uint)((int)"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"[uVar10] +
                             "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"[uVar8] * 8);
        pbVar14 = pbVar12 + 3;
      }
      pbVar12 = pbVar14 + 1;
      if ((*pbVar12 & 0xf8) == 0x30) {
        uVar10 = (uint)(byte)"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"[(uint)*pbVar12] +
                 (int)uVar9 * 8;
LAB_006de034:
        uVar9 = (ulong)uVar10;
        pbVar14 = pbVar12;
      }
LAB_006de038:
      FUN_007132e8(param_2,uVar9);
      pbVar12 = pbVar14;
    } while( true );
  }
  FUN_00675e64(&local_98,2,
               "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/io/tokenizer.cc"
               ,0x47a);
                    /* try { // try from 006de328 to 006de337 has its CatchHandler @ 006de3c8 */
  uVar7 = FUN_00675a58(&local_98,
                       " Tokenizer::ParseStringAppend() passed text that could not have been tokenized as a string: "
                      );
                    /* try { // try from 006de338 to 006de347 has its CatchHandler @ 006de3c4 */
  FUN_006774fc(local_b0,param_1);
                    /* try { // try from 006de348 to 006de357 has its CatchHandler @ 006de3ac */
  uVar7 = FUN_00675a80(uVar7,local_b0);
                    /* try { // try from 006de358 to 006de35f has its CatchHandler @ 006de3a8 */
  FUN_00675ac0(&uStack_b1,uVar7);
  if ((local_b0[0] & 1) != 0) {
    free(local_a0);
  }
  FUN_00675e7c(&local_98);
LAB_006de378:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 006de3f0  FUN_006de3f0 =====

bool FUN_006de3f0(byte *param_1)

{
  byte bVar1;
  long lVar2;
  bool bVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong __n;
  byte *__dest;
  undefined8 local_60;
  ulong local_58;
  byte *pbStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar5 = (ulong)(*param_1 >> 1);
  if ((*param_1 & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8);
  }
  if (uVar5 == 0) {
LAB_006de454:
    bVar3 = false;
  }
  else {
    pbVar4 = (byte *)FUN_00712bf4(param_1,0);
    if ((*pbVar4 != 0x5f) && (0x19 < (*pbVar4 & 0xffffffdf) - 0x41)) goto LAB_006de454;
    bVar1 = *param_1;
    uVar5 = (ulong)(bVar1 >> 1);
    if ((bVar1 & 1) != 0) {
      uVar5 = *(ulong *)(param_1 + 8);
    }
    if (uVar5 == 0) {
      if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_0030b8f4(&local_60);
      }
      goto LAB_006de5b8;
    }
    pbVar4 = *(byte **)(param_1 + 0x10);
    __n = uVar5 - 1;
    if ((bVar1 & 1) == 0) {
      pbVar4 = param_1 + 1;
    }
    if (0xfffffffffffffff7 < __n) {
      if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_002fb400(&local_60);
      }
      goto LAB_006de5b8;
    }
    if (uVar5 < 0x18) {
      __dest = (byte *)((ulong)&local_60 | 1);
      local_60 = CONCAT71(local_60._1_7_,(char)((int)__n << 1));
      if (__n != 0) goto LAB_006de504;
    }
    else {
      uVar5 = (__n & 0xfffffffffffffff8) + 8;
      if ((__n | 7) != 0x17) {
        uVar5 = __n | 7;
      }
      __dest = (byte *)FUN_00759c3c(uVar5 + 1);
      local_60 = uVar5 + 1 | 1;
      local_58 = __n;
      pbStack_50 = __dest;
LAB_006de504:
      memmove(__dest,pbVar4 + 1,__n);
    }
    __dest[__n] = 0;
    pbVar4 = pbStack_50;
    uVar5 = local_58;
    if ((local_60 & 1) == 0) {
      pbVar4 = (byte *)((long)&local_60 + 1);
      uVar5 = local_60 >> 1 & 0x7f;
    }
    if (uVar5 == 0) {
      bVar3 = true;
    }
    else {
      do {
        uVar5 = uVar5 - 1;
        bVar1 = *pbVar4;
        bVar3 = (bVar1 - 0x30 < 10 || (bVar1 & 0xffffffdf) - 0x41 < 0x1a) || bVar1 == 0x5f;
        pbVar4 = pbVar4 + 1;
      } while (bVar3 && uVar5 != 0);
    }
    if ((local_60 & 1) != 0) {
      free(pbStack_50);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return bVar3;
  }
LAB_006de5b8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006de5bc  FUN_006de5bc =====

undefined8 FUN_006de5bc(long param_1)

{
  FUN_006de5e0();
  return *(undefined8 *)(param_1 + 0x10);
}


// ===== 006de5e0  FUN_006de5e0 =====

void FUN_006de5e0(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  if ((int)param_1[8] == 2) {
    FUN_00715bcc(param_1 + 3);
    if ((int)param_1[8] == 2) {
      if (param_1[2] == 0) {
        lVar2 = param_1[1];
        if (lVar2 == 0) {
          plVar1 = (long *)FUN_00759c3c(0x18);
          plVar1[1] = 0;
          plVar1[2] = 0;
          *plVar1 = 0;
        }
        else {
          auVar3 = FUN_00663600(lVar2,0x18,PTR_PTR_007a3678);
          plVar1 = auVar3._0_8_;
          *auVar3._8_8_ = plVar1;
          auVar3._8_8_[1] = FUN_006e3158;
          *plVar1 = lVar2;
          plVar1[1] = 0;
          plVar1[2] = 0;
        }
        param_1[2] = (long)plVar1;
      }
      goto LAB_006de6bc;
    }
  }
  else {
    if ((int)param_1[8] != 0) {
      return;
    }
    FUN_00715bcc(param_1 + 3);
    if ((int)param_1[8] == 0) {
      (**(code **)(*param_1 + 0x68))(param_1);
LAB_006de6bc:
      *(undefined4 *)(param_1 + 8) = 2;
      FUN_00715bf8(param_1 + 3);
      return;
    }
  }
  FUN_00715bf8(param_1 + 3);
  return;
}


// ===== 006de6dc  FUN_006de6dc =====

undefined8 FUN_006de6dc(long param_1)

{
  FUN_006de5e0();
  *(undefined4 *)(param_1 + 0x40) = 1;
  return *(undefined8 *)(param_1 + 0x10);
}


// ===== 006de708  FUN_006de708 =====

void FUN_006de708(undefined8 *param_1,long *param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  
  if (param_4 == 0) {
    puVar1 = (undefined8 *)FUN_00759c3c(0x18);
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0;
    *param_2 = (long)puVar1;
    FUN_006de7d8(puVar1,*param_1);
  }
  else {
    auVar3 = FUN_00663600(param_4,0x18,PTR_PTR_007a3678);
    plVar2 = auVar3._0_8_;
    *auVar3._8_8_ = (long)plVar2;
    auVar3._8_8_[1] = (long)FUN_006e3158;
    *plVar2 = param_4;
    plVar2[1] = 0;
    plVar2[2] = 0;
    *param_2 = (long)plVar2;
    FUN_006de7d8(plVar2,*param_1);
  }
  if ((param_3 == 0) && (plVar2 = (long *)*param_1, plVar2 != (long *)0x0)) {
    if ((plVar2[2] != 0) && (*plVar2 == 0)) {
                    /* try { // try from 006de7b0 to 006de7b7 has its CatchHandler @ 006de7d4 */
      FUN_00675910(plVar2);
    }
    free(plVar2);
    *param_1 = 0;
    return;
  }
  *param_1 = 0;
  return;
}


// ===== 006de7d8  FUN_006de7d8 =====

long * FUN_006de7d8(long *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  if (param_1 != param_2) {
    lVar4 = *param_1;
    if (lVar4 == *param_2) {
      lVar6 = param_2[2];
      lVar8 = param_1[1];
      lVar9 = param_2[1];
      param_2[2] = param_1[2];
      *param_1 = lVar4;
      param_2[1] = lVar8;
      param_1[1] = lVar9;
      param_1[2] = lVar6;
      return param_1;
    }
    uVar7 = (ulong)*(uint *)(param_1 + 1);
    if (0 < (int)*(uint *)(param_1 + 1)) {
      puVar5 = (undefined8 *)param_1[2];
      do {
        puVar5 = puVar5 + 1;
                    /* try { // try from 006de828 to 006de82b has its CatchHandler @ 006de8e8 */
        (**(code **)(*(long *)*puVar5 + 0x20))();
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      *(undefined4 *)(param_1 + 1) = 0;
    }
    iVar1 = (int)param_2[1];
    if (iVar1 != 0) {
      lVar4 = param_2[2];
                    /* try { // try from 006de850 to 006de87b has its CatchHandler @ 006de8e4 */
      uVar3 = FUN_00675710(param_1,iVar1);
      FUN_006e3180(param_1,uVar3,lVar4 + 8,iVar1,*(int *)param_1[2] - (int)param_1[1]);
      iVar2 = *(int *)param_1[2];
      iVar1 = (int)param_1[1] + iVar1;
      *(int *)(param_1 + 1) = iVar1;
      if (iVar2 < iVar1) {
        *(int *)param_1[2] = iVar1;
      }
    }
  }
  return param_1;
}


// ===== 006de8ec  FUN_006de8ec =====

void FUN_006de8ec(long param_1,long param_2)

{
  undefined4 uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar4 = *(long *)(param_2 + 8);
  if (*(long *)(param_1 + 8) == lVar4) {
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_2 + 0x10) = uVar6;
  }
  else {
    plVar2 = *(long **)(param_1 + 0x10);
    plVar5 = (long *)(param_2 + 0x10);
    plVar3 = (long *)*plVar5;
    if (plVar2 == (long *)0x0) {
      if (plVar3 != (long *)0x0) {
        FUN_006de708(plVar5,param_1 + 0x10,lVar4);
      }
    }
    else if (plVar3 == (long *)0x0) {
      FUN_006de708(param_1 + 0x10,plVar5,*(long *)(param_1 + 8),lVar4);
    }
    else if (plVar2 != plVar3) {
      lVar4 = *plVar2;
      if (lVar4 == *plVar3) {
        lVar7 = plVar3[2];
        lVar8 = plVar2[1];
        lVar9 = plVar3[1];
        plVar3[2] = plVar2[2];
        *plVar2 = lVar4;
        plVar3[1] = lVar8;
        plVar2[1] = lVar9;
        plVar2[2] = lVar7;
      }
      else {
        FUN_006e3208();
      }
    }
  }
  uVar1 = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  return;
}


// ===== 006de9c8  FUN_006de9c8 =====

void FUN_006de9c8(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = uVar2;
  uVar1 = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  return;
}


// ===== 006de9fc  FUN_006de9fc =====

undefined8 FUN_006de9fc(long *param_1)

{
  undefined8 uVar1;
  
  FUN_00715bcc(param_1 + 3);
  uVar1 = (**(code **)(*param_1 + 0x60))(param_1);
  FUN_00715bf8(param_1 + 3);
  return uVar1;
}


// ===== 006dea40  FUN_006dea40 =====

long FUN_006dea40(long param_1)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 != 0) {
    piVar2 = *(int **)(lVar4 + 0x10);
    lVar3 = (long)*(int *)(lVar4 + 0xc) << 3;
    if (piVar2 != (int *)0x0) {
      if (0 < *piVar2) {
        lVar5 = 0;
        do {
          lVar1 = (**(code **)(**(long **)(piVar2 + lVar5 * 2 + 2) + 0x70))();
          piVar2 = *(int **)(lVar4 + 0x10);
          lVar5 = lVar5 + 1;
          lVar3 = lVar1 + lVar3;
        } while (lVar5 < *piVar2);
      }
      lVar3 = lVar3 + 8;
    }
    return lVar3;
  }
  return 0;
}


// ===== 006dead4  FUN_006dead4 =====

bool FUN_006dead4(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x40) != 1;
}


// ===== 006deae8  FUN_006deae8 =====

bool FUN_006deae8(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x40) != 0;
}


// ===== 006deafc  FUN_006deafc =====

void FUN_006deafc(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  if (*(long *)(param_1 + 0x10) != 0) {
    return;
  }
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 != 0) {
    auVar4 = FUN_00663600(lVar3,0x18,PTR_PTR_007a3678);
    plVar1 = auVar4._0_8_;
    *auVar4._8_8_ = (long)plVar1;
    auVar4._8_8_[1] = (long)FUN_006e3158;
    *plVar1 = lVar3;
    plVar1[1] = 0;
    plVar1[2] = 0;
    *(long **)(param_1 + 0x10) = plVar1;
    return;
  }
  puVar2 = (undefined8 *)FUN_00759c3c(0x18);
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  *(undefined8 **)(param_1 + 0x10) = puVar2;
  return;
}


// ===== 006deb78  FUN_006deb78 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006deb78(long *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_007a3688 + 0x10;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  lVar3 = _UNK_002003a8;
  lVar2 = _DAT_002003a0;
  *param_1 = (long)puVar1;
  param_1[10] = lVar3;
  param_1[9] = lVar2;
  puVar1 = PTR_DAT_007a3250;
  param_1[0xc] = lVar3;
  param_1[0xb] = lVar2;
  param_1[0xf] = param_2;
  param_1[0xd] = (long)puVar1;
  param_1[0xe] = 0;
  return;
}


// ===== 006debc0  FUN_006debc0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006debc0(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  puVar3 = PTR_DAT_007a3688;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  lVar2 = _UNK_002003a8;
  lVar1 = _DAT_002003a0;
  param_1[10] = _UNK_002003a8;
  param_1[9] = lVar1;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[1] = param_3;
  puVar3 = PTR_DAT_007a3250;
  param_1[0xc] = lVar2;
  param_1[0xb] = lVar1;
  param_1[0xf] = param_2;
  param_1[0xd] = (long)puVar3;
  param_1[0xe] = param_3;
  return;
}


// ===== 006dec04  FUN_006dec04 =====

void FUN_006dec04(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long *__ptr;
  long *local_50;
  undefined8 *puStack_48;
  ulong local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  *param_1 = &PTR_FUN_0079abe8;
  if (param_1[1] == 0) {
    local_40 = param_1[0xc];
    uVar3 = param_1[10];
    puVar1 = param_1 + 9;
    puStack_48 = puVar1;
    if (local_40 < uVar3) {
      do {
        local_50 = *(long **)(param_1[0xd] + local_40 * 8);
        if (local_50 != (long *)0x0) {
          if (local_50 == *(long **)(param_1[0xd] + (local_40 ^ 1) * 8)) {
            local_50 = *(long **)(*local_50 + 0x28);
          }
          goto joined_r0x006deca0;
        }
        local_40 = local_40 + 1;
      } while (uVar3 != local_40);
      local_50 = (long *)0x0;
      local_40 = uVar3;
    }
    else {
      local_50 = (long *)0x0;
    }
joined_r0x006deca0:
    while (local_50 != (long *)0x0) {
      FUN_006ded74(local_50 + 4);
                    /* try { // try from 006decac to 006decb3 has its CatchHandler @ 006ded70 */
      FUN_006e35fc(&local_50);
    }
                    /* try { // try from 006decbc to 006decc3 has its CatchHandler @ 006ded68 */
    FUN_006e33cc(puVar1);
    if ((param_1[1] == 0) && (__ptr = (long *)param_1[2], __ptr != (long *)0x0)) {
      if ((__ptr[2] != 0) && (*__ptr == 0)) {
                    /* try { // try from 006dece4 to 006deceb has its CatchHandler @ 006ded64 */
        FUN_00675910(__ptr);
      }
      free(__ptr);
    }
  }
  param_1[2] = 0;
                    /* try { // try from 006ded0c to 006ded13 has its CatchHandler @ 006ded6c */
  if (((param_1[0xe] == 0) && (param_1[10] != 1)) && (FUN_006e33cc(param_1 + 9), param_1[0xe] == 0))
  {
    free((void *)param_1[0xd]);
  }
  *param_1 = &PTR_FUN_0079acb8;
  FUN_00715bac(param_1 + 3);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006ded74  FUN_006ded74 =====

void FUN_006ded74(long *param_1)

{
  int iVar1;
  byte *__ptr;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < 6) {
    if (iVar1 < 3) {
      if (iVar1 == 1) {
        if ((void *)*param_1 != (void *)0x0) {
          free((void *)*param_1);
          return;
        }
      }
      else if ((iVar1 == 2) && ((void *)*param_1 != (void *)0x0)) {
        free((void *)*param_1);
        return;
      }
    }
    else if (iVar1 == 3) {
      if ((void *)*param_1 != (void *)0x0) {
        free((void *)*param_1);
        return;
      }
    }
    else if (iVar1 == 4) {
      if ((void *)*param_1 != (void *)0x0) {
        free((void *)*param_1);
        return;
      }
    }
    else if ((iVar1 == 5) && ((void *)*param_1 != (void *)0x0)) {
      free((void *)*param_1);
      return;
    }
  }
  else if (iVar1 < 8) {
    if (iVar1 == 6) {
      if ((void *)*param_1 != (void *)0x0) {
        free((void *)*param_1);
        return;
      }
    }
    else if ((iVar1 == 7) && ((void *)*param_1 != (void *)0x0)) {
      free((void *)*param_1);
      return;
    }
  }
  else if (iVar1 == 8) {
    if ((void *)*param_1 != (void *)0x0) {
      free((void *)*param_1);
      return;
    }
  }
  else if (iVar1 == 9) {
    __ptr = (byte *)*param_1;
    if (__ptr != (byte *)0x0) {
      if ((*__ptr & 1) != 0) {
        free(*(void **)(__ptr + 0x10));
      }
      free(__ptr);
      return;
    }
  }
  else if ((iVar1 == 10) && ((long *)*param_1 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x006dedf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)*param_1 + 8))();
    return;
  }
  return;
}


// ===== 006deedc  FUN_006deedc =====

void FUN_006deedc(long param_1)

{
                    /* try { // try from 006def00 to 006def07 has its CatchHandler @ 006def2c */
  if (((*(long *)(param_1 + 0x28) == 0) && (*(long *)(param_1 + 8) != 1)) &&
     (FUN_006e33cc(param_1), *(long *)(param_1 + 0x28) == 0)) {
    free(*(void **)(param_1 + 0x20));
    return;
  }
  return;
}


// ===== 006def30  FUN_006def30 =====

void FUN_006def30(void *param_1)

{
  FUN_006dec04();
  free(param_1);
  return;
}


// ===== 006def54  FUN_006def54 =====

undefined4 FUN_006def54(long *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x98))();
  return *puVar1;
}


// ===== 006def74  FUN_006def74 =====

void FUN_006def74(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long *local_60;
  long lStack_58;
  ulong local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  lVar5 = param_1 + 0x48;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 8) == 0) {
    uVar2 = *(ulong *)(param_1 + 0x60);
    if (uVar2 < *(ulong *)(param_1 + 0x50)) {
      do {
        plVar4 = *(long **)(*(long *)(param_1 + 0x68) + uVar2 * 8);
        if (plVar4 != (long *)0x0) {
          local_60 = plVar4;
          lStack_58 = lVar5;
          local_50 = uVar2;
          if (plVar4 != *(long **)(*(long *)(param_1 + 0x68) + (uVar2 ^ 1) * 8)) goto LAB_006df004;
          local_60 = *(long **)(*plVar4 + 0x28);
          while (local_60 != (long *)0x0) {
LAB_006df004:
            FUN_006ded74(local_60 + 4);
            FUN_006e35fc(&local_60);
          }
          break;
        }
        uVar2 = uVar2 + 1;
      } while (*(ulong *)(param_1 + 0x50) != uVar2);
    }
  }
  FUN_006e33cc(lVar5);
  lVar5 = *(long *)(param_1 + 0x10);
  if ((lVar5 != 0) && (uVar2 = (ulong)*(uint *)(lVar5 + 8), 0 < (int)*(uint *)(lVar5 + 8))) {
    puVar3 = *(undefined8 **)(lVar5 + 0x10);
    do {
      puVar3 = puVar3 + 1;
      (**(code **)(*(long *)*puVar3 + 0x20))();
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    *(undefined4 *)(lVar5 + 8) = 0;
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006df08c  FUN_006df08c =====

void FUN_006df08c(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long local_48 [4];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = (**(code **)(*param_1 + 0x98))();
  FUN_006e37c4(local_48,uVar2,param_2,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_48[0] != 0);
}


// ===== 006df0f8  FUN_006df0f8 =====

void FUN_006df0f8(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 extraout_x1;
  undefined **ppuVar6;
  int iVar7;
  undefined1 auVar8 [16];
  long local_70;
  code *pcStack_68;
  undefined8 **local_60;
  code **local_58;
  undefined1 *puStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  (**(code **)(**(long **)(param_1 + 0x78) + 0x80))();
  lVar3 = FUN_0068ceb8();
  puVar2 = PTR_DAT_007a32d8;
  plVar4 = *(long **)(lVar3 + 0x18);
  if (plVar4 == (long *)0x0) {
    iVar7 = *(int *)(PTR_DAT_007a32d8 + (ulong)*(byte *)(lVar3 + 2) * 4);
    *(int *)(param_2 + 1) = iVar7;
    if (5 < iVar7) goto LAB_006df234;
LAB_006df1e0:
    if (iVar7 < 3) {
      if (iVar7 != 1) {
        if (iVar7 != 2) goto LAB_006df3c0;
        if (*(long *)(param_1 + 8) == 0) goto LAB_006df364;
        puVar5 = (undefined8 *)FUN_00663420(*(long *)(param_1 + 8),8,PTR_PTR_007a36a0);
        *puVar5 = 0;
        goto LAB_006df3bc;
      }
LAB_006df2f0:
      lVar3 = *(long *)(param_1 + 8);
      if (lVar3 == 0) goto LAB_006df334;
      ppuVar6 = &PTR_PTR_thunk_FUN_0073a404_0079dfe0;
      goto LAB_006df328;
    }
    if (iVar7 == 3) {
      lVar3 = *(long *)(param_1 + 8);
      if (lVar3 != 0) {
        ppuVar6 = &PTR_PTR_thunk_FUN_0073a404_0079dff0;
        goto LAB_006df328;
      }
LAB_006df334:
      puVar5 = (undefined8 *)FUN_00759c3c(4);
      goto LAB_006df33c;
    }
    if (iVar7 == 4) {
      if (*(long *)(param_1 + 8) == 0) {
LAB_006df364:
        puVar5 = (undefined8 *)FUN_00759c3c(8);
        *puVar5 = 0;
      }
      else {
        puVar5 = (undefined8 *)FUN_00663420(*(long *)(param_1 + 8),8,PTR_PTR_007a36c8);
        *puVar5 = 0;
      }
    }
    else {
      if (iVar7 != 5) goto LAB_006df3c0;
      if (*(long *)(param_1 + 8) == 0) goto LAB_006df364;
      puVar5 = (undefined8 *)FUN_00663420(*(long *)(param_1 + 8),8,PTR_PTR_007a3698);
      *puVar5 = 0;
    }
  }
  else {
    pcStack_68 = thunk_FUN_006af330;
    local_70 = lVar3;
    if (*plVar4 != -1) {
      local_58 = &pcStack_68;
      local_60 = &local_58;
      puStack_50 = (undefined1 *)&local_70;
      FUN_00710f84(plVar4,&local_60,FUN_00685640);
    }
    plVar4 = *(long **)(lVar3 + 0x18);
    iVar7 = *(int *)(puVar2 + (ulong)*(byte *)(lVar3 + 2) * 4);
    *(int *)(param_2 + 1) = iVar7;
    if (plVar4 != (long *)0x0) {
      pcStack_68 = thunk_FUN_006af330;
      local_70 = lVar3;
      if (*plVar4 != -1) {
        local_58 = &pcStack_68;
        local_60 = &local_58;
        puStack_50 = (undefined1 *)&local_70;
        FUN_00710f84(plVar4,&local_60,FUN_00685640);
      }
      iVar7 = *(int *)(puVar2 + (ulong)*(byte *)(lVar3 + 2) * 4);
    }
    if (iVar7 < 6) goto LAB_006df1e0;
LAB_006df234:
    if (7 < iVar7) {
      if (iVar7 != 8) {
        if (iVar7 == 9) {
          if (*(long *)(param_1 + 8) == 0) {
            puVar5 = (undefined8 *)FUN_00759c3c(0x18);
          }
          else {
            auVar8 = FUN_00663600(*(long *)(param_1 + 8),0x18,PTR_PTR_007a2ea8);
            puVar5 = auVar8._0_8_;
            *auVar8._8_8_ = puVar5;
            auVar8._8_8_[1] = FUN_005d5b40;
          }
          *puVar5 = 0;
          puVar5[1] = 0;
          puVar5[2] = 0;
        }
        else {
          if (iVar7 != 10) goto LAB_006df3c0;
          (**(code **)(**(long **)(param_1 + 0x78) + 0x80))();
          plVar4 = (long *)FUN_0068265c(extraout_x1,*(undefined8 *)(param_1 + 0x78),lVar3,0);
          puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x18))(plVar4,*(undefined8 *)(param_1 + 8));
        }
        goto LAB_006df3bc;
      }
      goto LAB_006df2f0;
    }
    if (iVar7 != 6) {
      if (iVar7 != 7) goto LAB_006df3c0;
      if (*(long *)(param_1 + 8) == 0) {
        puVar5 = (undefined8 *)FUN_00759c3c(1);
        *(undefined1 *)puVar5 = 0;
      }
      else {
        puVar5 = (undefined8 *)FUN_00663420(*(long *)(param_1 + 8),8,PTR_PTR_007a36a8);
        *(undefined1 *)puVar5 = 0;
      }
      goto LAB_006df3bc;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 == 0) goto LAB_006df334;
    ppuVar6 = &PTR_PTR_thunk_FUN_0073a404_0079e020;
LAB_006df328:
    puVar5 = (undefined8 *)FUN_00663420(lVar3,8,ppuVar6);
LAB_006df33c:
    *(undefined4 *)puVar5 = 0;
  }
LAB_006df3bc:
  *param_2 = puVar5;
LAB_006df3c0:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006df3ec  FUN_006df3ec =====

void FUN_006df3ec(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long local_68 [4];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = (**(code **)(*param_1 + 0xa0))();
  FUN_006e37c4(local_68,uVar3,param_2,0);
  lVar2 = local_68[0];
  if (local_68[0] == 0) {
    FUN_006e3fc4(local_68,param_1 + 9,param_2);
    FUN_006df0f8(param_1,local_68[0] + 0x20);
  }
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(local_68[0] + 0x28);
  *param_3 = *(undefined8 *)(local_68[0] + 0x20);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar2 == 0);
  }
  return;
}


// ===== 006df4ac  FUN_006df4ac =====

void FUN_006df4ac(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long local_58 [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = (**(code **)(*param_1 + 0x98))();
  FUN_006e37c4(local_58,uVar2,param_2,0);
  if (local_58[0] != 0) {
    uVar2 = *(undefined8 *)(local_58[0] + 0x20);
    *(undefined4 *)(param_3 + 1) = *(undefined4 *)(local_58[0] + 0x28);
    *param_3 = uVar2;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_58[0] != 0);
}


// ===== 006df538  FUN_006df538 =====

void FUN_006df538(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 local_80 [16];
  undefined8 local_70;
  long local_60 [2];
  undefined8 local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((int)param_1[8] == 1) {
    FUN_00715bcc(param_1 + 3);
    if ((int)param_1[8] == 1) {
      (**(code **)(*param_1 + 0x70))(param_1);
      *(undefined4 *)(param_1 + 8) = 2;
    }
    FUN_00715bf8(param_1 + 3);
  }
  FUN_006e37c4(local_60,param_1 + 9,param_2,0);
  if (local_60[0] != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    if (param_1[1] == 0) {
      FUN_006ded74(local_60[0] + 0x20);
    }
    local_70 = local_50;
    FUN_006e35fc(local_80);
    FUN_006e48b8(param_1 + 9,local_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_60[0] != 0);
}


// ===== 006df640  FUN_006df640 =====

long * FUN_006df640(long *param_1)

{
  if ((int)param_1[8] == 1) {
    FUN_00715bcc(param_1 + 3);
    if ((int)param_1[8] == 1) {
      (**(code **)(*param_1 + 0x70))(param_1);
      *(undefined4 *)(param_1 + 8) = 2;
    }
    FUN_00715bf8(param_1 + 3);
  }
  return param_1 + 9;
}


// ===== 006df6a8  FUN_006df6a8 =====

long * FUN_006df6a8(long *param_1)

{
  if ((int)param_1[8] == 1) {
    FUN_00715bcc(param_1 + 3);
    if ((int)param_1[8] == 1) {
      (**(code **)(*param_1 + 0x70))(param_1);
      *(undefined4 *)(param_1 + 8) = 2;
    }
    FUN_00715bf8(param_1 + 3);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1 + 9;
}


// ===== 006df714  FUN_006df714 =====

void FUN_006df714(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)*param_2;
  if (lVar2 != 0) {
    FUN_006df758(param_2 + 2,lVar2);
    uVar1 = *(undefined8 *)(lVar2 + 0x20);
    *(undefined4 *)(param_2 + 7) = *(undefined4 *)(lVar2 + 0x28);
    param_2[6] = uVar1;
  }
  return;
}


// ===== 006df758  FUN_006df758 =====

void FUN_006df758(byte *param_1,byte *param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 uStack_69;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_006e2e60(param_2);
  if (*(uint *)(param_1 + 0x18) == uVar2) {
    if ((int)uVar2 < 4) goto LAB_006df868;
    if (uVar2 < 0xb) {
      if ((1 << (ulong)(uVar2 & 0x1f) & 0x560U) != 0) {
LAB_006df818:
        FUN_00675e64(auStack_68,3,
                     "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/map_field.h"
                     ,0xdd);
                    /* try { // try from 006df830 to 006df843 has its CatchHandler @ 006df934 */
        uVar3 = FUN_00675a58(auStack_68,"Unsupported");
                    /* try { // try from 006df844 to 006df84b has its CatchHandler @ 006df930 */
        FUN_00675ac0(&uStack_69,uVar3);
        FUN_00675e7c(auStack_68);
        if (*(long *)(lVar1 + 0x28) == local_38) {
          return;
        }
        goto LAB_006df92c;
      }
      if (uVar2 == 7) {
LAB_006df914:
        *param_1 = *param_2;
        if (*(long *)(lVar1 + 0x28) == local_38) {
          return;
        }
        goto LAB_006df92c;
      }
      if (uVar2 == 9) {
LAB_006df8b4:
        if (*(long *)(lVar1 + 0x28) == local_38) {
          FUN_007139b0(param_1,param_2);
          return;
        }
        goto LAB_006df92c;
      }
    }
LAB_006df8e0:
    if (uVar2 == 4) goto LAB_006df8e8;
LAB_006df8f0:
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
  else {
    if ((*(uint *)(param_1 + 0x18) == 9) && ((*param_1 & 1) != 0)) {
      free(*(void **)(param_1 + 0x10));
    }
    *(uint *)(param_1 + 0x18) = uVar2;
    if (3 < (int)uVar2) {
      if (uVar2 < 0xb) {
        if ((1 << (ulong)(uVar2 & 0x1f) & 0x560U) != 0) goto LAB_006df818;
        if (uVar2 == 7) goto LAB_006df914;
        if (uVar2 == 9) {
          param_1[0] = 0;
          param_1[1] = 0;
          param_1[2] = 0;
          param_1[3] = 0;
          param_1[4] = 0;
          param_1[5] = 0;
          param_1[6] = 0;
          param_1[7] = 0;
          param_1[8] = 0;
          param_1[9] = 0;
          param_1[10] = 0;
          param_1[0xb] = 0;
          param_1[0xc] = 0;
          param_1[0xd] = 0;
          param_1[0xe] = 0;
          param_1[0xf] = 0;
          param_1[0x10] = 0;
          param_1[0x11] = 0;
          param_1[0x12] = 0;
          param_1[0x13] = 0;
          param_1[0x14] = 0;
          param_1[0x15] = 0;
          param_1[0x16] = 0;
          param_1[0x17] = 0;
          goto LAB_006df8b4;
        }
      }
      goto LAB_006df8e0;
    }
LAB_006df868:
    if (uVar2 != 1) {
      if (uVar2 == 2) {
LAB_006df8e8:
        *(undefined8 *)param_1 = *(undefined8 *)param_2;
        goto LAB_006df8f0;
      }
      if (uVar2 != 3) goto LAB_006df8f0;
    }
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
LAB_006df92c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006df958  FUN_006df958 =====

void FUN_006df958(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  undefined **ppuVar13;
  long *local_b8;
  long lStack_b0;
  ulong local_a8;
  long local_a0;
  undefined *puStack_98;
  undefined ***local_90;
  undefined **local_88;
  long *plStack_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar7 = (**(code **)(*param_1 + 0xa0))();
  puVar4 = PTR_DAT_007a32d8;
  puVar3 = PTR_thunk_FUN_006af330_007a32d0;
  uVar12 = *(ulong *)(param_2 + 0x60);
  if (uVar12 < *(ulong *)(param_2 + 0x50)) {
    do {
      plVar11 = *(long **)(*(long *)(param_2 + 0x68) + uVar12 * 8);
      if (plVar11 != (long *)0x0) {
        lStack_b0 = param_2 + 0x48;
        local_a8 = uVar12;
        if ((plVar11 != *(long **)(*(long *)(param_2 + 0x68) + (uVar12 ^ 1) * 8)) ||
           (plVar11 = *(long **)(*plVar11 + 0x28), local_b8 = plVar11, plVar11 != (long *)0x0)) {
          local_b8 = plVar11;
          do {
            FUN_006e37c4(&local_88,uVar7,local_b8,0);
            if (local_88 == (undefined **)0x0) {
              FUN_006e3fc4(&local_88,param_1 + 9,local_b8);
              ppuVar13 = local_88 + 4;
              FUN_006df0f8(param_1,ppuVar13);
            }
            else {
              ppuVar13 = local_88 + 4;
            }
            (**(code **)(*(long *)param_1[0xf] + 0x80))();
            lVar8 = FUN_0068ceb8();
            plVar11 = *(long **)(lVar8 + 0x18);
            if ((plVar11 != (long *)0x0) && (puStack_98 = puVar3, local_a0 = lVar8, *plVar11 != -1))
            {
              local_90 = &local_88;
              local_88 = &puStack_98;
              plStack_80 = &local_a0;
              FUN_00710f84(plVar11,&local_90,FUN_00685640);
            }
            iVar1 = *(int *)(puVar4 + (ulong)*(byte *)(lVar8 + 2) * 4);
            if (iVar1 < 6) {
              if (iVar1 < 3) {
                if (iVar1 == 1) {
                  uVar6 = FUN_006dfda8(local_b8 + 4);
                  FUN_006dfc74(ppuVar13,uVar6);
                }
                else if (iVar1 == 2) {
                  uVar10 = FUN_006e0004(local_b8 + 4);
                  FUN_006dfed0(ppuVar13,uVar10);
                }
              }
              else if (iVar1 == 3) {
                uVar6 = FUN_006e0260(local_b8 + 4);
                FUN_006e012c(ppuVar13,uVar6);
              }
              else if (iVar1 == 4) {
                uVar10 = FUN_006e04bc(local_b8 + 4);
                FUN_006e0388(ppuVar13,uVar10);
              }
              else if (iVar1 == 5) {
                FUN_006e0974(local_b8 + 4);
                FUN_006e0840(ppuVar13);
              }
            }
            else if (iVar1 < 8) {
              if (iVar1 == 6) {
                FUN_006e0718(local_b8 + 4);
                FUN_006e05e4(ppuVar13);
              }
              else if (iVar1 == 7) {
                uVar5 = FUN_006e0bd4(local_b8 + 4);
                FUN_006e0a9c(ppuVar13,uVar5 & 1);
              }
            }
            else if (iVar1 == 8) {
              uVar6 = FUN_006e108c(local_b8 + 4);
              FUN_006e0f58(ppuVar13,uVar6);
            }
            else if (iVar1 == 9) {
              uVar10 = FUN_006e0e34(local_b8 + 4);
              FUN_006e0cfc(ppuVar13,uVar10);
            }
            else if (iVar1 == 10) {
              uVar10 = FUN_0068551c(ppuVar13);
              uVar9 = FUN_006e11b4(local_b8 + 4);
              FUN_006e51bc(uVar10,uVar9);
            }
            FUN_006e4b48(&local_b8);
          } while (local_b8 != (long *)0x0);
        }
        break;
      }
      uVar12 = uVar12 + 1;
    } while (*(ulong *)(param_2 + 0x50) != uVar12);
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 006dfc74  FUN_006dfc74 =====

void FUN_006dfc74(undefined8 *param_1,undefined4 param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 uStack_79;
  undefined1 auStack_78 [48];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_00685a7c();
  if (iVar2 != 1) {
    FUN_00675e64(auStack_78,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/map_field.h"
                 ,0x329);
                    /* try { // try from 006dfcc4 to 006dfd3b has its CatchHandler @ 006dfd80 */
    uVar3 = FUN_00675a58(auStack_78,"Protocol Buffer map usage error:\n");
    uVar3 = FUN_00675a58(uVar3,"MapValueRef::SetInt32Value");
    uVar3 = FUN_00675a58(uVar3," type does not match\n");
    uVar3 = FUN_00675a58(uVar3,"  Expected : ");
    uVar3 = FUN_00675a58(uVar3,PTR_s_int32_00799318);
    uVar3 = FUN_00675a58(uVar3,&DAT_001e2980);
    uVar3 = FUN_00675a58(uVar3,"  Actual   : ");
    uVar4 = FUN_00685a7c(param_1);
    uVar3 = FUN_00675a58(uVar3,(&PTR_s_ERROR_00799310)[uVar4 & 0xffffffff]);
                    /* try { // try from 006dfd3c to 006dfd43 has its CatchHandler @ 006dfd7c */
    FUN_00675ac0(&uStack_79,uVar3);
    FUN_00675e7c(auStack_78);
  }
  *(undefined4 *)*param_1 = param_2;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006dfda8  FUN_006dfda8 =====

void FUN_006dfda8(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 uStack_69;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_00685a7c();
  if (iVar2 != 1) {
    FUN_00675e64(auStack_68,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/map_field.h"
                 ,0x2d0);
                    /* try { // try from 006dfdf0 to 006dfe67 has its CatchHandler @ 006dfea8 */
    uVar3 = FUN_00675a58(auStack_68,"Protocol Buffer map usage error:\n");
    uVar3 = FUN_00675a58(uVar3,"MapValueConstRef::GetInt32Value");
    uVar3 = FUN_00675a58(uVar3," type does not match\n");
    uVar3 = FUN_00675a58(uVar3,"  Expected : ");
    uVar3 = FUN_00675a58(uVar3,PTR_s_int32_00799318);
    uVar3 = FUN_00675a58(uVar3,&DAT_001e2980);
    uVar3 = FUN_00675a58(uVar3,"  Actual   : ");
    uVar4 = FUN_00685a7c(param_1);
    uVar3 = FUN_00675a58(uVar3,(&PTR_s_ERROR_00799310)[uVar4 & 0xffffffff]);
                    /* try { // try from 006dfe68 to 006dfe6f has its CatchHandler @ 006dfea4 */
    FUN_00675ac0(&uStack_69,uVar3);
    FUN_00675e7c(auStack_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined4 *)*param_1);
}


// ===== 006dfed0  FUN_006dfed0 =====

void FUN_006dfed0(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 uStack_79;
  undefined1 auStack_78 [48];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_00685a7c();
  if (iVar2 != 2) {
    FUN_00675e64(auStack_78,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/map_field.h"
                 ,0x321);
                    /* try { // try from 006dff20 to 006dff97 has its CatchHandler @ 006dffdc */
    uVar3 = FUN_00675a58(auStack_78,"Protocol Buffer map usage error:\n");
    uVar3 = FUN_00675a58(uVar3,"MapValueRef::SetInt64Value");
    uVar3 = FUN_00675a58(uVar3," type does not match\n");
    uVar3 = FUN_00675a58(uVar3,"  Expected : ");
    uVar3 = FUN_00675a58(uVar3,PTR_s_int64_00799320);
    uVar3 = FUN_00675a58(uVar3,&DAT_001e2980);
    uVar3 = FUN_00675a58(uVar3,"  Actual   : ");
    uVar4 = FUN_00685a7c(param_1);
    uVar3 = FUN_00675a58(uVar3,(&PTR_s_ERROR_00799310)[uVar4 & 0xffffffff]);
                    /* try { // try from 006dff98 to 006dff9f has its CatchHandler @ 006dffd8 */
    FUN_00675ac0(&uStack_79,uVar3);
    FUN_00675e7c(auStack_78);
  }
  *(undefined8 *)*param_1 = param_2;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006e0004  FUN_006e0004 =====

void FUN_006e0004(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 uStack_69;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_00685a7c();
  if (iVar2 != 2) {
    FUN_00675e64(auStack_68,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/map_field.h"
                 ,0x2c6);
                    /* try { // try from 006e004c to 006e00c3 has its CatchHandler @ 006e0104 */
    uVar3 = FUN_00675a58(auStack_68,"Protocol Buffer map usage error:\n");
    uVar3 = FUN_00675a58(uVar3,"MapValueConstRef::GetInt64Value");
    uVar3 = FUN_00675a58(uVar3," type does not match\n");
    uVar3 = FUN_00675a58(uVar3,"  Expected : ");
    uVar3 = FUN_00675a58(uVar3,PTR_s_int64_00799320);
    uVar3 = FUN_00675a58(uVar3,&DAT_001e2980);
    uVar3 = FUN_00675a58(uVar3,"  Actual   : ");
    uVar4 = FUN_00685a7c(param_1);
    uVar3 = FUN_00675a58(uVar3,(&PTR_s_ERROR_00799310)[uVar4 & 0xffffffff]);
                    /* try { // try from 006e00c4 to 006e00cb has its CatchHandler @ 006e0100 */
    FUN_00675ac0(&uStack_69,uVar3);
    FUN_00675e7c(auStack_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined8 *)*param_1);
}


// ===== 006e012c  FUN_006e012c =====

void FUN_006e012c(undefined8 *param_1,undefined4 param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 uStack_79;
  undefined1 auStack_78 [48];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_00685a7c();
  if (iVar2 != 3) {
    FUN_00675e64(auStack_78,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/map_field.h"
                 ,0x32d);
                    /* try { // try from 006e017c to 006e01f3 has its CatchHandler @ 006e0238 */
    uVar3 = FUN_00675a58(auStack_78,"Protocol Buffer map usage error:\n");
    uVar3 = FUN_00675a58(uVar3,"MapValueRef::SetUInt32Value");
    uVar3 = FUN_00675a58(uVar3," type does not match\n");
    uVar3 = FUN_00675a58(uVar3,"  Expected : ");
    uVar3 = FUN_00675a58(uVar3,PTR_s_uint32_00799328);
    uVar3 = FUN_00675a58(uVar3,&DAT_001e2980);
    uVar3 = FUN_00675a58(uVar3,"  Actual   : ");
    uVar4 = FUN_00685a7c(param_1);
    uVar3 = FUN_00675a58(uVar3,(&PTR_s_ERROR_00799310)[uVar4 & 0xffffffff]);
                    /* try { // try from 006e01f4 to 006e01fb has its CatchHandler @ 006e0234 */
    FUN_00675ac0(&uStack_79,uVar3);
    FUN_00675e7c(auStack_78);
  }
  *(undefined4 *)*param_1 = param_2;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006e0260  FUN_006e0260 =====

void FUN_006e0260(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 uStack_69;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_00685a7c();
  if (iVar2 != 3) {
    FUN_00675e64(auStack_68,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/map_field.h"
                 ,0x2d5);
                    /* try { // try from 006e02a8 to 006e031f has its CatchHandler @ 006e0360 */
    uVar3 = FUN_00675a58(auStack_68,"Protocol Buffer map usage error:\n");
    uVar3 = FUN_00675a58(uVar3,"MapValueConstRef::GetUInt32Value");
    uVar3 = FUN_00675a58(uVar3," type does not match\n");
    uVar3 = FUN_00675a58(uVar3,"  Expected : ");
    uVar3 = FUN_00675a58(uVar3,PTR_s_uint32_00799328);
    uVar3 = FUN_00675a58(uVar3,&DAT_001e2980);
    uVar3 = FUN_00675a58(uVar3,"  Actual   : ");
    uVar4 = FUN_00685a7c(param_1);
    uVar3 = FUN_00675a58(uVar3,(&PTR_s_ERROR_00799310)[uVar4 & 0xffffffff]);
                    /* try { // try from 006e0320 to 006e0327 has its CatchHandler @ 006e035c */
    FUN_00675ac0(&uStack_69,uVar3);
    FUN_00675e7c(auStack_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined4 *)*param_1);
}


// ===== 006e0388  FUN_006e0388 =====

void FUN_006e0388(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 uStack_79;
  undefined1 auStack_78 [48];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_00685a7c();
  if (iVar2 != 4) {
    FUN_00675e64(auStack_78,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/map_field.h"
                 ,0x325);
                    /* try { // try from 006e03d8 to 006e044f has its CatchHandler @ 006e0494 */
    uVar3 = FUN_00675a58(auStack_78,"Protocol Buffer map usage error:\n");
    uVar3 = FUN_00675a58(uVar3,"MapValueRef::SetUInt64Value");
    uVar3 = FUN_00675a58(uVar3," type does not match\n");
    uVar3 = FUN_00675a58(uVar3,"  Expected : ");
    uVar3 = FUN_00675a58(uVar3,PTR_s_uint64_00799330);
    uVar3 = FUN_00675a58(uVar3,&DAT_001e2980);
    uVar3 = FUN_00675a58(uVar3,"  Actual   : ");
    uVar4 = FUN_00685a7c(param_1);
    uVar3 = FUN_00675a58(uVar3,(&PTR_s_ERROR_00799310)[uVar4 & 0xffffffff]);
                    /* try { // try from 006e0450 to 006e0457 has its CatchHandler @ 006e0490 */
    FUN_00675ac0(&uStack_79,uVar3);
    FUN_00675e7c(auStack_78);
  }
  *(undefined8 *)*param_1 = param_2;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006e04bc  FUN_006e04bc =====

void FUN_006e04bc(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 uStack_69;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_00685a7c();
  if (iVar2 != 4) {
    FUN_00675e64(auStack_68,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/map_field.h"
                 ,0x2cb);
                    /* try { // try from 006e0504 to 006e057b has its CatchHandler @ 006e05bc */
    uVar3 = FUN_00675a58(auStack_68,"Protocol Buffer map usage error:\n");
    uVar3 = FUN_00675a58(uVar3,"MapValueConstRef::GetUInt64Value");
    uVar3 = FUN_00675a58(uVar3," type does not match\n");
    uVar3 = FUN_00675a58(uVar3,"  Expected : ");
    uVar3 = FUN_00675a58(uVar3,PTR_s_uint64_00799330);
    uVar3 = FUN_00675a58(uVar3,&DAT_001e2980);
    uVar3 = FUN_00675a58(uVar3,"  Actual   : ");
    uVar4 = FUN_00685a7c(param_1);
    uVar3 = FUN_00675a58(uVar3,(&PTR_s_ERROR_00799310)[uVar4 & 0xffffffff]);
                    /* try { // try from 006e057c to 006e0583 has its CatchHandler @ 006e05b8 */
    FUN_00675ac0(&uStack_69,uVar3);
    FUN_00675e7c(auStack_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined8 *)*param_1);
}


// ===== 006e05e4  FUN_006e05e4 =====

void FUN_006e05e4(undefined4 param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 uStack_79;
  undefined1 auStack_78 [48];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_00685a7c();
  if (iVar2 != 6) {
    FUN_00675e64(auStack_78,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/map_field.h"
                 ,0x33e);
                    /* try { // try from 006e0634 to 006e06ab has its CatchHandler @ 006e06f0 */
    uVar3 = FUN_00675a58(auStack_78,"Protocol Buffer map usage error:\n");
    uVar3 = FUN_00675a58(uVar3,"MapValueRef::SetFloatValue");
    uVar3 = FUN_00675a58(uVar3," type does not match\n");
    uVar3 = FUN_00675a58(uVar3,"  Expected : ");
    uVar3 = FUN_00675a58(uVar3,PTR_s_float_00799340);
    uVar3 = FUN_00675a58(uVar3,&DAT_001e2980);
    uVar3 = FUN_00675a58(uVar3,"  Actual   : ");
    uVar4 = FUN_00685a7c(param_2);
    uVar3 = FUN_00675a58(uVar3,(&PTR_s_ERROR_00799310)[uVar4 & 0xffffffff]);
                    /* try { // try from 006e06ac to 006e06b3 has its CatchHandler @ 006e06ec */
    FUN_00675ac0(&uStack_79,uVar3);
    FUN_00675e7c(auStack_78);
  }
  *(undefined4 *)*param_2 = param_1;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006e0718  FUN_006e0718 =====

void FUN_006e0718(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 uStack_69;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_00685a7c();
  if (iVar2 != 6) {
    FUN_00675e64(auStack_68,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/map_field.h"
                 ,0x2e7);
                    /* try { // try from 006e0760 to 006e07d7 has its CatchHandler @ 006e0818 */
    uVar3 = FUN_00675a58(auStack_68,"Protocol Buffer map usage error:\n");
    uVar3 = FUN_00675a58(uVar3,"MapValueConstRef::GetFloatValue");
    uVar3 = FUN_00675a58(uVar3," type does not match\n");
    uVar3 = FUN_00675a58(uVar3,"  Expected : ");
    uVar3 = FUN_00675a58(uVar3,PTR_s_float_00799340);
    uVar3 = FUN_00675a58(uVar3,&DAT_001e2980);
    uVar3 = FUN_00675a58(uVar3,"  Actual   : ");
    uVar4 = FUN_00685a7c(param_1);
    uVar3 = FUN_00675a58(uVar3,(&PTR_s_ERROR_00799310)[uVar4 & 0xffffffff]);
                    /* try { // try from 006e07d8 to 006e07df has its CatchHandler @ 006e0814 */
    FUN_00675ac0(&uStack_69,uVar3);
    FUN_00675e7c(auStack_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined4 *)*param_1);
}


// ===== 006e0840  FUN_006e0840 =====

void FUN_006e0840(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 uStack_79;
  undefined1 auStack_78 [48];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_00685a7c();
  if (iVar2 != 5) {
    FUN_00675e64(auStack_78,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/map_field.h"
                 ,0x342);
                    /* try { // try from 006e0890 to 006e0907 has its CatchHandler @ 006e094c */
    uVar3 = FUN_00675a58(auStack_78,"Protocol Buffer map usage error:\n");
    uVar3 = FUN_00675a58(uVar3,"MapValueRef::SetDoubleValue");
    uVar3 = FUN_00675a58(uVar3," type does not match\n");
    uVar3 = FUN_00675a58(uVar3,"  Expected : ");
    uVar3 = FUN_00675a58(uVar3,PTR_s_double_00799338);
    uVar3 = FUN_00675a58(uVar3,&DAT_001e2980);
    uVar3 = FUN_00675a58(uVar3,"  Actual   : ");
    uVar4 = FUN_00685a7c(param_2);
    uVar3 = FUN_00675a58(uVar3,(&PTR_s_ERROR_00799310)[uVar4 & 0xffffffff]);
                    /* try { // try from 006e0908 to 006e090f has its CatchHandler @ 006e0948 */
    FUN_00675ac0(&uStack_79,uVar3);
    FUN_00675e7c(auStack_78);
  }
  *(undefined8 *)*param_2 = param_1;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006e0974  FUN_006e0974 =====

void FUN_006e0974(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 uStack_69;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_00685a7c();
  if (iVar2 != 5) {
    FUN_00675e64(auStack_68,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/map_field.h"
                 ,0x2ec);
                    /* try { // try from 006e09bc to 006e0a33 has its CatchHandler @ 006e0a74 */
    uVar3 = FUN_00675a58(auStack_68,"Protocol Buffer map usage error:\n");
    uVar3 = FUN_00675a58(uVar3,"MapValueConstRef::GetDoubleValue");
    uVar3 = FUN_00675a58(uVar3," type does not match\n");
    uVar3 = FUN_00675a58(uVar3,"  Expected : ");
    uVar3 = FUN_00675a58(uVar3,PTR_s_double_00799338);
    uVar3 = FUN_00675a58(uVar3,&DAT_001e2980);
    uVar3 = FUN_00675a58(uVar3,"  Actual   : ");
    uVar4 = FUN_00685a7c(param_1);
    uVar3 = FUN_00675a58(uVar3,(&PTR_s_ERROR_00799310)[uVar4 & 0xffffffff]);
                    /* try { // try from 006e0a34 to 006e0a3b has its CatchHandler @ 006e0a70 */
    FUN_00675ac0(&uStack_69,uVar3);
    FUN_00675e7c(auStack_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined8 *)*param_1);
}


// ===== 006e0a9c  FUN_006e0a9c =====

void FUN_006e0a9c(undefined8 *param_1,byte param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 uStack_79;
  undefined1 auStack_78 [48];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_00685a7c();
  if (iVar2 != 7) {
    FUN_00675e64(auStack_78,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/map_field.h"
                 ,0x331);
                    /* try { // try from 006e0aec to 006e0b63 has its CatchHandler @ 006e0bac */
    uVar3 = FUN_00675a58(auStack_78,"Protocol Buffer map usage error:\n");
    uVar3 = FUN_00675a58(uVar3,"MapValueRef::SetBoolValue");
    uVar3 = FUN_00675a58(uVar3," type does not match\n");
    uVar3 = FUN_00675a58(uVar3,"  Expected : ");
    uVar3 = FUN_00675a58(uVar3,PTR_DAT_00799348);
    uVar3 = FUN_00675a58(uVar3,&DAT_001e2980);
    uVar3 = FUN_00675a58(uVar3,"  Actual   : ");
    uVar4 = FUN_00685a7c(param_1);
    uVar3 = FUN_00675a58(uVar3,(&PTR_s_ERROR_00799310)[uVar4 & 0xffffffff]);
                    /* try { // try from 006e0b64 to 006e0b6b has its CatchHandler @ 006e0ba8 */
    FUN_00675ac0(&uStack_79,uVar3);
    FUN_00675e7c(auStack_78);
  }
  *(byte *)*param_1 = param_2 & 1;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006e0bd4  FUN_006e0bd4 =====

void FUN_006e0bd4(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 uStack_69;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_00685a7c();
  if (iVar2 != 7) {
    FUN_00675e64(auStack_68,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/map_field.h"
                 ,0x2d9);
                    /* try { // try from 006e0c1c to 006e0c93 has its CatchHandler @ 006e0cd4 */
    uVar3 = FUN_00675a58(auStack_68,"Protocol Buffer map usage error:\n");
    uVar3 = FUN_00675a58(uVar3,"MapValueConstRef::GetBoolValue");
    uVar3 = FUN_00675a58(uVar3," type does not match\n");
    uVar3 = FUN_00675a58(uVar3,"  Expected : ");
    uVar3 = FUN_00675a58(uVar3,PTR_DAT_00799348);
    uVar3 = FUN_00675a58(uVar3,&DAT_001e2980);
    uVar3 = FUN_00675a58(uVar3,"  Actual   : ");
    uVar4 = FUN_00685a7c(param_1);
    uVar3 = FUN_00675a58(uVar3,(&PTR_s_ERROR_00799310)[uVar4 & 0xffffffff]);
                    /* try { // try from 006e0c94 to 006e0c9b has its CatchHandler @ 006e0cd0 */
    FUN_00675ac0(&uStack_69,uVar3);
    FUN_00675e7c(auStack_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined1 *)*param_1);
}


// ===== 006e0cfc  FUN_006e0cfc =====

void FUN_006e0cfc(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 uStack_79;
  undefined1 auStack_78 [48];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_00685a7c();
  if (iVar2 != 9) {
    FUN_00675e64(auStack_78,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/map_field.h"
                 ,0x33a);
                    /* try { // try from 006e0d4c to 006e0dc3 has its CatchHandler @ 006e0e0c */
    uVar3 = FUN_00675a58(auStack_78,"Protocol Buffer map usage error:\n");
    uVar3 = FUN_00675a58(uVar3,"MapValueRef::SetStringValue");
    uVar3 = FUN_00675a58(uVar3," type does not match\n");
    uVar3 = FUN_00675a58(uVar3,"  Expected : ");
    uVar3 = FUN_00675a58(uVar3,PTR_s_string_00799358);
    uVar3 = FUN_00675a58(uVar3,&DAT_001e2980);
    uVar3 = FUN_00675a58(uVar3,"  Actual   : ");
    uVar4 = FUN_00685a7c(param_1);
    uVar3 = FUN_00675a58(uVar3,(&PTR_s_ERROR_00799310)[uVar4 & 0xffffffff]);
                    /* try { // try from 006e0dc4 to 006e0dcb has its CatchHandler @ 006e0e08 */
    FUN_00675ac0(&uStack_79,uVar3);
    FUN_00675e7c(auStack_78);
  }
  FUN_007139b0(*param_1,param_2);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006e0e34  FUN_006e0e34 =====

void FUN_006e0e34(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 uStack_69;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_00685a7c();
  if (iVar2 != 9) {
    FUN_00675e64(auStack_68,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/map_field.h"
                 ,0x2e2);
                    /* try { // try from 006e0e7c to 006e0ef3 has its CatchHandler @ 006e0f30 */
    uVar3 = FUN_00675a58(auStack_68,"Protocol Buffer map usage error:\n");
    uVar3 = FUN_00675a58(uVar3,"MapValueConstRef::GetStringValue");
    uVar3 = FUN_00675a58(uVar3," type does not match\n");
    uVar3 = FUN_00675a58(uVar3,"  Expected : ");
    uVar3 = FUN_00675a58(uVar3,PTR_s_string_00799358);
    uVar3 = FUN_00675a58(uVar3,&DAT_001e2980);
    uVar3 = FUN_00675a58(uVar3,"  Actual   : ");
    uVar4 = FUN_00685a7c(param_1);
    uVar3 = FUN_00675a58(uVar3,(&PTR_s_ERROR_00799310)[uVar4 & 0xffffffff]);
                    /* try { // try from 006e0ef4 to 006e0efb has its CatchHandler @ 006e0f2c */
    FUN_00675ac0(&uStack_69,uVar3);
    FUN_00675e7c(auStack_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*param_1);
}


// ===== 006e0f58  FUN_006e0f58 =====

void FUN_006e0f58(undefined8 *param_1,undefined4 param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 uStack_79;
  undefined1 auStack_78 [48];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_00685a7c();
  if (iVar2 != 8) {
    FUN_00675e64(auStack_78,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/map_field.h"
                 ,0x336);
                    /* try { // try from 006e0fa8 to 006e101f has its CatchHandler @ 006e1064 */
    uVar3 = FUN_00675a58(auStack_78,"Protocol Buffer map usage error:\n");
    uVar3 = FUN_00675a58(uVar3,"MapValueRef::SetEnumValue");
    uVar3 = FUN_00675a58(uVar3," type does not match\n");
    uVar3 = FUN_00675a58(uVar3,"  Expected : ");
    uVar3 = FUN_00675a58(uVar3,PTR_DAT_00799350);
    uVar3 = FUN_00675a58(uVar3,&DAT_001e2980);
    uVar3 = FUN_00675a58(uVar3,"  Actual   : ");
    uVar4 = FUN_00685a7c(param_1);
    uVar3 = FUN_00675a58(uVar3,(&PTR_s_ERROR_00799310)[uVar4 & 0xffffffff]);
                    /* try { // try from 006e1020 to 006e1027 has its CatchHandler @ 006e1060 */
    FUN_00675ac0(&uStack_79,uVar3);
    FUN_00675e7c(auStack_78);
  }
  *(undefined4 *)*param_1 = param_2;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006e108c  FUN_006e108c =====

void FUN_006e108c(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 uStack_69;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_00685a7c();
  if (iVar2 != 8) {
    FUN_00675e64(auStack_68,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/map_field.h"
                 ,0x2dd);
                    /* try { // try from 006e10d4 to 006e114b has its CatchHandler @ 006e118c */
    uVar3 = FUN_00675a58(auStack_68,"Protocol Buffer map usage error:\n");
    uVar3 = FUN_00675a58(uVar3,"MapValueConstRef::GetEnumValue");
    uVar3 = FUN_00675a58(uVar3," type does not match\n");
    uVar3 = FUN_00675a58(uVar3,"  Expected : ");
    uVar3 = FUN_00675a58(uVar3,PTR_DAT_00799350);
    uVar3 = FUN_00675a58(uVar3,&DAT_001e2980);
    uVar3 = FUN_00675a58(uVar3,"  Actual   : ");
    uVar4 = FUN_00685a7c(param_1);
    uVar3 = FUN_00675a58(uVar3,(&PTR_s_ERROR_00799310)[uVar4 & 0xffffffff]);
                    /* try { // try from 006e114c to 006e1153 has its CatchHandler @ 006e1188 */
    FUN_00675ac0(&uStack_69,uVar3);
    FUN_00675e7c(auStack_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined4 *)*param_1);
}


// ===== 006e11b4  FUN_006e11b4 =====

void FUN_006e11b4(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 uStack_69;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_00685a7c();
  if (iVar2 != 10) {
    FUN_00675e64(auStack_68,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/map_field.h"
                 ,0x2f2);
                    /* try { // try from 006e11fc to 006e1273 has its CatchHandler @ 006e12b0 */
    uVar3 = FUN_00675a58(auStack_68,"Protocol Buffer map usage error:\n");
    uVar3 = FUN_00675a58(uVar3,"MapValueConstRef::GetMessageValue");
    uVar3 = FUN_00675a58(uVar3," type does not match\n");
    uVar3 = FUN_00675a58(uVar3,"  Expected : ");
    uVar3 = FUN_00675a58(uVar3,PTR_s_message_00799360);
    uVar3 = FUN_00675a58(uVar3,&DAT_001e2980);
    uVar3 = FUN_00675a58(uVar3,"  Actual   : ");
    uVar4 = FUN_00685a7c(param_1);
    uVar3 = FUN_00675a58(uVar3,(&PTR_s_ERROR_00799310)[uVar4 & 0xffffffff]);
                    /* try { // try from 006e1274 to 006e127b has its CatchHandler @ 006e12ac */
    FUN_00675ac0(&uStack_69,uVar3);
    FUN_00675e7c(auStack_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*param_1);
}


// ===== 006e12d8  FUN_006e12d8 =====

void FUN_006e12d8(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = uVar2;
  FUN_006e1324(param_1 + 0x48,param_2 + 0x48);
  uVar1 = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  return;
}


// ===== 006e1324  FUN_006e1324 =====

void FUN_006e1324(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uStack_a0;
  ulong local_98;
  ulong local_88;
  void *local_80;
  long local_78;
  long *local_70;
  undefined8 *puStack_68;
  ulong local_60;
  undefined1 auStack_58 [32];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1[5] == param_2[5]) {
    uVar4 = *param_1;
    *param_1 = *param_2;
    *param_2 = uVar4;
    uVar4 = param_1[1];
    param_1[1] = param_2[1];
    param_2[1] = uVar4;
    uVar4 = param_1[2];
    param_1[2] = param_2[2];
    param_2[2] = uVar4;
    uVar4 = param_1[3];
    param_1[3] = param_2[3];
    param_2[3] = uVar4;
    uVar4 = param_1[4];
    param_1[4] = param_2[4];
    param_2[4] = uVar4;
    uVar4 = param_1[5];
    param_1[5] = param_2[5];
    param_2[5] = uVar4;
  }
  else {
    FUN_006e4d10(&uStack_a0,param_1);
    if (param_1 != param_2) {
                    /* try { // try from 006e1374 to 006e137b has its CatchHandler @ 006e1544 */
      FUN_006e33cc(param_1);
      uVar3 = param_2[3];
      if (uVar3 < (ulong)param_2[1]) {
LAB_006e1390:
        plVar2 = *(long **)(param_2[4] + uVar3 * 8);
        if (plVar2 == (long *)0x0) goto code_r0x006e1398;
        local_70 = plVar2;
        puStack_68 = param_2;
        local_60 = uVar3;
        if (plVar2 != *(long **)(param_2[4] + (uVar3 ^ 1) * 8)) goto LAB_006e143c;
        local_70 = *(long **)(*plVar2 + 0x28);
        while (local_70 != (long *)0x0) {
LAB_006e143c:
                    /* try { // try from 006e143c to 006e1453 has its CatchHandler @ 006e154c */
          FUN_006e4e1c(auStack_58,param_1,local_70,local_70 + 4);
          FUN_006e4b48(&local_70);
        }
      }
    }
LAB_006e145c:
                    /* try { // try from 006e1464 to 006e146b has its CatchHandler @ 006e1544 */
    if ((&uStack_a0 != param_2) && (FUN_006e33cc(param_2), local_88 < local_98)) {
LAB_006e1480:
      plVar2 = *(long **)((long)local_80 + local_88 * 8);
      if (plVar2 == (long *)0x0) goto code_r0x006e1488;
      local_70 = plVar2;
      puStack_68 = &uStack_a0;
      local_60 = local_88;
      if (plVar2 != *(long **)((long)local_80 + (local_88 ^ 1) * 8)) goto LAB_006e14d0;
      local_70 = *(long **)(*plVar2 + 0x28);
      puStack_68 = &uStack_a0;
      while (local_70 != (long *)0x0) {
LAB_006e14d0:
                    /* try { // try from 006e14d0 to 006e14e7 has its CatchHandler @ 006e1548 */
        FUN_006e4e1c(auStack_58,param_2,local_70,local_70 + 4);
        FUN_006e4b48(&local_70);
      }
    }
LAB_006e14f0:
                    /* try { // try from 006e1504 to 006e150b has its CatchHandler @ 006e1540 */
    if (((local_78 == 0) && (local_98 != 1)) && (FUN_006e33cc(&uStack_a0), local_78 == 0)) {
      free(local_80);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x006e1398:
  uVar3 = uVar3 + 1;
  if (param_2[1] == uVar3) goto LAB_006e145c;
  goto LAB_006e1390;
code_r0x006e1488:
  local_88 = local_88 + 1;
  if (local_98 == local_88) goto LAB_006e14f0;
  goto LAB_006e1480;
}


// ===== 006e1574  FUN_006e1574 =====

void FUN_006e1574(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong *puVar13;
  undefined8 extraout_x1;
  undefined8 *puVar14;
  int *piVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  undefined1 auVar19 [16];
  ulong local_100;
  ulong uStack_f8;
  void *local_f0;
  undefined **local_e0;
  long *plStack_d8;
  ulong local_b0;
  ulong uStack_a8;
  void *local_a0;
  long *local_98;
  long lStack_90;
  ulong local_88;
  long local_80;
  undefined *puStack_78;
  undefined ***local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  (**(code **)(**(long **)(param_1 + 0x78) + 0x80))();
  (**(code **)(**(long **)(param_1 + 0x78) + 0x80))();
  lVar8 = FUN_0068cea4();
  (**(code **)(**(long **)(param_1 + 0x78) + 0x80))(*(long **)(param_1 + 0x78));
  lVar9 = FUN_0068ceb8();
  plVar16 = *(long **)(param_1 + 0x10);
  if (plVar16 == (long *)0x0) {
    lVar17 = *(long *)(param_1 + 8);
    if (lVar17 == 0) {
      plVar16 = (long *)FUN_00759c3c(0x18);
      plVar16[1] = 0;
      plVar16[2] = 0;
      *plVar16 = 0;
    }
    else {
      auVar19 = FUN_00663600(lVar17,0x18,PTR_PTR_007a3678);
      puVar4 = PTR_FUN_007a3680;
      plVar16 = auVar19._0_8_;
      *auVar19._8_8_ = plVar16;
      auVar19._8_8_[1] = puVar4;
      *plVar16 = lVar17;
      plVar16[1] = 0;
      plVar16[2] = 0;
    }
    *(long **)(param_1 + 0x10) = plVar16;
  }
  uVar18 = (ulong)*(uint *)(plVar16 + 1);
  if (0 < (int)*(uint *)(plVar16 + 1)) {
    puVar14 = (undefined8 *)plVar16[2];
    do {
      puVar14 = puVar14 + 1;
      (**(code **)(*(long *)*puVar14 + 0x20))();
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
    *(undefined4 *)(plVar16 + 1) = 0;
  }
  uVar18 = *(ulong *)(param_1 + 0x60);
  if (uVar18 < *(ulong *)(param_1 + 0x50)) {
    lVar17 = param_1 + 0x48;
    do {
      plVar16 = *(long **)(*(long *)(param_1 + 0x68) + uVar18 * 8);
      if (plVar16 != (long *)0x0) {
        local_98 = plVar16;
        lStack_90 = lVar17;
        local_88 = uVar18;
        if ((plVar16 != *(long **)(*(long *)(param_1 + 0x68) + (uVar18 ^ 1) * 8)) ||
           (local_98 = *(long **)(*plVar16 + 0x28), local_98 != (long *)0x0)) goto LAB_006e172c;
        break;
      }
      uVar18 = uVar18 + 1;
    } while (*(ulong *)(param_1 + 0x50) != uVar18);
  }
  goto LAB_006e16a0;
  while( true ) {
    plVar16 = local_98;
    plVar12 = *(long **)(lVar9 + 0x18);
    if ((plVar12 != (long *)0x0) && (local_80 = lVar9, puStack_78 = puVar4, *plVar12 != -1)) {
      local_e0 = &puStack_78;
      plStack_d8 = &local_80;
      local_70 = &local_e0;
      FUN_00710f84(plVar12,&local_70,FUN_00685640);
    }
    iVar1 = *(int *)(puVar5 + (ulong)*(byte *)(lVar9 + 2) * 4);
    if (iVar1 < 6) {
      if (iVar1 < 3) {
        if (iVar1 == 1) {
          uVar7 = FUN_006dfda8(plVar16 + 4);
          FUN_0067cd04(extraout_x1,uVar10,lVar9,uVar7);
        }
        else if (iVar1 == 2) {
          uVar11 = FUN_006e0004(plVar16 + 4);
          FUN_0067d544(extraout_x1,uVar10,lVar9,uVar11);
        }
      }
      else if (iVar1 == 3) {
        uVar7 = FUN_006e0260(plVar16 + 4);
        FUN_0067dd84(extraout_x1,uVar10,lVar9,uVar7);
      }
      else if (iVar1 == 4) {
        uVar11 = FUN_006e04bc(plVar16 + 4);
        FUN_0067e5c4(extraout_x1,uVar10,lVar9,uVar11);
      }
      else if (iVar1 == 5) {
        FUN_006e0974(plVar16 + 4);
        FUN_0067f658(extraout_x1,uVar10,lVar9);
      }
    }
    else if (iVar1 < 8) {
      if (iVar1 == 6) {
        FUN_006e0718(plVar16 + 4);
        FUN_0067ee04(extraout_x1,uVar10,lVar9);
      }
      else if (iVar1 == 7) {
        uVar6 = FUN_006e0bd4(plVar16 + 4);
        FUN_0067feb0(extraout_x1,uVar10,lVar9,uVar6 & 1);
      }
    }
    else if (iVar1 == 8) {
      uVar7 = FUN_006e108c(plVar16 + 4);
      FUN_00681d30(extraout_x1,uVar10,lVar9,uVar7);
    }
    else if (iVar1 == 10) {
      uVar11 = FUN_006e11b4(plVar16 + 4);
      uVar10 = FUN_00682834(extraout_x1,uVar10,lVar9,0);
      FUN_006e51bc(uVar10,uVar11);
    }
    else if (iVar1 == 9) {
      puVar13 = (ulong *)FUN_006e0e34(plVar16 + 4);
      if ((*puVar13 & 1) == 0) {
        local_f0 = (void *)puVar13[2];
        uStack_f8 = puVar13[1];
        local_100 = *puVar13;
      }
      else {
        FUN_002fb36c(&local_100,puVar13[2],puVar13[1]);
      }
                    /* try { // try from 006e1b94 to 006e1ba7 has its CatchHandler @ 006e1bd0 */
      FUN_00680a64(extraout_x1,uVar10,lVar9,&local_100);
      if ((local_100 & 1) != 0) {
        free(local_f0);
      }
    }
    FUN_006e4b48(&local_98);
    if (local_98 == (long *)0x0) break;
LAB_006e172c:
    uVar10 = (**(code **)(**(long **)(param_1 + 0x78) + 0x18))
                       (*(long **)(param_1 + 0x78),*(undefined8 *)(param_1 + 8));
    plVar16 = *(long **)(param_1 + 0x10);
    lVar17 = FUN_006e5f10();
    if ((*plVar16 == lVar17) && (piVar15 = (int *)plVar16[2], piVar15 != (int *)0x0)) {
      iVar1 = *piVar15;
      if (*(int *)((long)plVar16 + 0xc) <= iVar1) goto LAB_006e175c;
      iVar2 = (int)plVar16[1];
      if (iVar2 < iVar1) {
        *(undefined8 *)(piVar15 + (long)iVar1 * 2 + 2) =
             *(undefined8 *)(piVar15 + (long)iVar2 * 2 + 2);
      }
      *(undefined8 *)(piVar15 + (long)iVar2 * 2 + 2) = uVar10;
      *(int *)(plVar16 + 1) = iVar2 + 1;
      *(int *)plVar16[2] = *(int *)plVar16[2] + 1;
      plVar16 = *(long **)(lVar8 + 0x18);
      puVar4 = PTR_thunk_FUN_006af330_007a32d0;
      plVar12 = local_98;
    }
    else {
LAB_006e175c:
      FUN_006e5004(plVar16,uVar10,lVar17);
      plVar16 = *(long **)(lVar8 + 0x18);
      puVar4 = PTR_thunk_FUN_006af330_007a32d0;
      plVar12 = local_98;
    }
    PTR_thunk_FUN_006af330_007a32d0 = puVar4;
    local_98 = plVar12;
    if ((plVar16 != (long *)0x0) && (local_80 = lVar8, puStack_78 = puVar4, *plVar16 != -1)) {
      local_e0 = &puStack_78;
      plStack_d8 = &local_80;
      local_70 = &local_e0;
      FUN_00710f84(plVar16,&local_70,FUN_00685640);
    }
    puVar5 = PTR_DAT_007a32d8;
    uVar6 = *(uint *)(PTR_DAT_007a32d8 + (ulong)*(byte *)(lVar8 + 2) * 4);
    if ((int)uVar6 < 4) {
      if (uVar6 == 1) {
        uVar7 = FUN_006e1e5c(plVar12);
        FUN_0067cd04(extraout_x1,uVar10,lVar8,uVar7);
      }
      else if (uVar6 == 2) {
        uVar11 = FUN_006e1d38(plVar12);
        FUN_0067d544(extraout_x1,uVar10,lVar8,uVar11);
      }
      else if (uVar6 == 3) {
        uVar7 = FUN_006e20a4(plVar12);
        FUN_0067dd84(extraout_x1,uVar10,lVar8,uVar7);
      }
    }
    else if (uVar6 < 0xb) {
      if ((1 << (ulong)(uVar6 & 0x1f) & 0x560U) == 0) {
        if (uVar6 == 7) {
          uVar6 = FUN_006e21c8(plVar12);
          FUN_0067feb0(extraout_x1,uVar10,lVar8,uVar6 & 1);
        }
        else {
          if (uVar6 != 9) goto LAB_006e18f4;
          puVar13 = (ulong *)FUN_006e1c14(plVar12);
          if ((*puVar13 & 1) == 0) {
            local_a0 = (void *)puVar13[2];
            uStack_a8 = puVar13[1];
            local_b0 = *puVar13;
          }
          else {
            FUN_002fb36c(&local_b0,puVar13[2],puVar13[1]);
          }
                    /* try { // try from 006e1988 to 006e199b has its CatchHandler @ 006e1bbc */
          FUN_00680a64(extraout_x1,uVar10,lVar8,&local_b0);
          if ((local_b0 & 1) != 0) {
            free(local_a0);
          }
        }
      }
      else {
        FUN_00675e64(&local_e0,3,
                     "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/map_field.cc"
                     ,0x1df);
                    /* try { // try from 006e17fc to 006e180f has its CatchHandler @ 006e1bec */
        uVar11 = FUN_00675a58(&local_e0,"Can\'t get here.");
                    /* try { // try from 006e1810 to 006e1817 has its CatchHandler @ 006e1be8 */
        FUN_00675ac0(&local_70,uVar11);
        FUN_00675e7c(&local_e0);
      }
    }
    else {
LAB_006e18f4:
      if (uVar6 == 4) {
        uVar11 = FUN_006e1f80(plVar12);
        FUN_0067e5c4(extraout_x1,uVar10,lVar8,uVar11);
      }
    }
  }
LAB_006e16a0:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006e1c14  FUN_006e1c14 =====

undefined8 FUN_006e1c14(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 uStack_69;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_006e2e60();
  if (iVar2 != 9) {
    FUN_00675e64(auStack_68,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/map_field.h"
                 ,0x98);
                    /* try { // try from 006e1c5c to 006e1cd3 has its CatchHandler @ 006e1d10 */
    uVar3 = FUN_00675a58(auStack_68,"Protocol Buffer map usage error:\n");
    uVar3 = FUN_00675a58(uVar3,"MapKey::GetStringValue");
    uVar3 = FUN_00675a58(uVar3," type does not match\n");
    uVar3 = FUN_00675a58(uVar3,"  Expected : ");
    uVar3 = FUN_00675a58(uVar3,PTR_s_string_00799358);
    uVar3 = FUN_00675a58(uVar3,&DAT_001e2980);
    uVar3 = FUN_00675a58(uVar3,"  Actual   : ");
    uVar4 = FUN_006e2e60(param_1);
    uVar3 = FUN_00675a58(uVar3,(&PTR_s_ERROR_00799310)[uVar4 & 0xffffffff]);
                    /* try { // try from 006e1cd4 to 006e1cdb has its CatchHandler @ 006e1d0c */
    FUN_00675ac0(&uStack_69,uVar3);
    FUN_00675e7c(auStack_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006e1d38  FUN_006e1d38 =====

void FUN_006e1d38(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 uStack_69;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_006e2e60();
  if (iVar2 != 2) {
    FUN_00675e64(auStack_68,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/map_field.h"
                 ,0x84);
                    /* try { // try from 006e1d80 to 006e1df7 has its CatchHandler @ 006e1e34 */
    uVar3 = FUN_00675a58(auStack_68,"Protocol Buffer map usage error:\n");
    uVar3 = FUN_00675a58(uVar3,"MapKey::GetInt64Value");
    uVar3 = FUN_00675a58(uVar3," type does not match\n");
    uVar3 = FUN_00675a58(uVar3,"  Expected : ");
    uVar3 = FUN_00675a58(uVar3,PTR_s_int64_00799320);
    uVar3 = FUN_00675a58(uVar3,&DAT_001e2980);
    uVar3 = FUN_00675a58(uVar3,"  Actual   : ");
    uVar4 = FUN_006e2e60(param_1);
    uVar3 = FUN_00675a58(uVar3,(&PTR_s_ERROR_00799310)[uVar4 & 0xffffffff]);
                    /* try { // try from 006e1df8 to 006e1dff has its CatchHandler @ 006e1e30 */
    FUN_00675ac0(&uStack_69,uVar3);
    FUN_00675e7c(auStack_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*param_1);
}


// ===== 006e1e5c  FUN_006e1e5c =====

void FUN_006e1e5c(undefined4 *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 uStack_69;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_006e2e60();
  if (iVar2 != 1) {
    FUN_00675e64(auStack_68,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/map_field.h"
                 ,0x8c);
                    /* try { // try from 006e1ea4 to 006e1f1b has its CatchHandler @ 006e1f58 */
    uVar3 = FUN_00675a58(auStack_68,"Protocol Buffer map usage error:\n");
    uVar3 = FUN_00675a58(uVar3,"MapKey::GetInt32Value");
    uVar3 = FUN_00675a58(uVar3," type does not match\n");
    uVar3 = FUN_00675a58(uVar3,"  Expected : ");
    uVar3 = FUN_00675a58(uVar3,PTR_s_int32_00799318);
    uVar3 = FUN_00675a58(uVar3,&DAT_001e2980);
    uVar3 = FUN_00675a58(uVar3,"  Actual   : ");
    uVar4 = FUN_006e2e60(param_1);
    uVar3 = FUN_00675a58(uVar3,(&PTR_s_ERROR_00799310)[uVar4 & 0xffffffff]);
                    /* try { // try from 006e1f1c to 006e1f23 has its CatchHandler @ 006e1f54 */
    FUN_00675ac0(&uStack_69,uVar3);
    FUN_00675e7c(auStack_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*param_1);
}


// ===== 006e1f80  FUN_006e1f80 =====

void FUN_006e1f80(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 uStack_69;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_006e2e60();
  if (iVar2 != 4) {
    FUN_00675e64(auStack_68,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/map_field.h"
                 ,0x88);
                    /* try { // try from 006e1fc8 to 006e203f has its CatchHandler @ 006e207c */
    uVar3 = FUN_00675a58(auStack_68,"Protocol Buffer map usage error:\n");
    uVar3 = FUN_00675a58(uVar3,"MapKey::GetUInt64Value");
    uVar3 = FUN_00675a58(uVar3," type does not match\n");
    uVar3 = FUN_00675a58(uVar3,"  Expected : ");
    uVar3 = FUN_00675a58(uVar3,PTR_s_uint64_00799330);
    uVar3 = FUN_00675a58(uVar3,&DAT_001e2980);
    uVar3 = FUN_00675a58(uVar3,"  Actual   : ");
    uVar4 = FUN_006e2e60(param_1);
    uVar3 = FUN_00675a58(uVar3,(&PTR_s_ERROR_00799310)[uVar4 & 0xffffffff]);
                    /* try { // try from 006e2040 to 006e2047 has its CatchHandler @ 006e2078 */
    FUN_00675ac0(&uStack_69,uVar3);
    FUN_00675e7c(auStack_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*param_1);
}


// ===== 006e20a4  FUN_006e20a4 =====

void FUN_006e20a4(undefined4 *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 uStack_69;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_006e2e60();
  if (iVar2 != 3) {
    FUN_00675e64(auStack_68,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/map_field.h"
                 ,0x90);
                    /* try { // try from 006e20ec to 006e2163 has its CatchHandler @ 006e21a0 */
    uVar3 = FUN_00675a58(auStack_68,"Protocol Buffer map usage error:\n");
    uVar3 = FUN_00675a58(uVar3,"MapKey::GetUInt32Value");
    uVar3 = FUN_00675a58(uVar3," type does not match\n");
    uVar3 = FUN_00675a58(uVar3,"  Expected : ");
    uVar3 = FUN_00675a58(uVar3,PTR_s_uint32_00799328);
    uVar3 = FUN_00675a58(uVar3,&DAT_001e2980);
    uVar3 = FUN_00675a58(uVar3,"  Actual   : ");
    uVar4 = FUN_006e2e60(param_1);
    uVar3 = FUN_00675a58(uVar3,(&PTR_s_ERROR_00799310)[uVar4 & 0xffffffff]);
                    /* try { // try from 006e2164 to 006e216b has its CatchHandler @ 006e219c */
    FUN_00675ac0(&uStack_69,uVar3);
    FUN_00675e7c(auStack_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*param_1);
}


// ===== 006e21c8  FUN_006e21c8 =====

void FUN_006e21c8(undefined1 *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 uStack_69;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_006e2e60();
  if (iVar2 != 7) {
    FUN_00675e64(auStack_68,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/map_field.h"
                 ,0x94);
                    /* try { // try from 006e2210 to 006e2287 has its CatchHandler @ 006e22c4 */
    uVar3 = FUN_00675a58(auStack_68,"Protocol Buffer map usage error:\n");
    uVar3 = FUN_00675a58(uVar3,"MapKey::GetBoolValue");
    uVar3 = FUN_00675a58(uVar3," type does not match\n");
    uVar3 = FUN_00675a58(uVar3,"  Expected : ");
    uVar3 = FUN_00675a58(uVar3,PTR_DAT_00799348);
    uVar3 = FUN_00675a58(uVar3,&DAT_001e2980);
    uVar3 = FUN_00675a58(uVar3,"  Actual   : ");
    uVar4 = FUN_006e2e60(param_1);
    uVar3 = FUN_00675a58(uVar3,(&PTR_s_ERROR_00799310)[uVar4 & 0xffffffff]);
                    /* try { // try from 006e2288 to 006e228f has its CatchHandler @ 006e22c0 */
    FUN_00675ac0(&uStack_69,uVar3);
    FUN_00675e7c(auStack_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*param_1);
}


// ===== 006e22ec  FUN_006e22ec =====

void FUN_006e22ec(long param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  undefined1 uVar4;
  byte bVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined8 extraout_x1;
  int iVar12;
  ulong uVar13;
  long lVar14;
  code **ppcVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined1 auVar18 [16];
  undefined2 local_f0;
  undefined6 uStack_ee;
  void *local_e0;
  long local_d8;
  code *pcStack_d0;
  code ***local_c8;
  code **local_c0;
  long *plStack_b8;
  ulong local_b0;
  ulong local_90 [2];
  void *local_80;
  int local_78;
  long local_68;
  
  lVar3 = tpidr_el0;
  plVar1 = (long *)(param_1 + 0x48);
  local_68 = *(long *)(lVar3 + 0x28);
  (**(code **)(**(long **)(param_1 + 0x78) + 0x80))();
  (**(code **)(**(long **)(param_1 + 0x78) + 0x80))();
  lVar7 = FUN_0068cea4();
  (**(code **)(**(long **)(param_1 + 0x78) + 0x80))(*(long **)(param_1 + 0x78));
  lVar8 = FUN_0068ceb8();
  if (*(long *)(param_1 + 8) == 0) {
    uVar13 = *(ulong *)(param_1 + 0x60);
    if (uVar13 < *(ulong *)(param_1 + 0x50)) {
LAB_006e2388:
      ppcVar15 = *(code ***)(*(long *)(param_1 + 0x68) + uVar13 * 8);
      if (ppcVar15 == (code **)0x0) goto code_r0x006e2390;
      local_c0 = ppcVar15;
      plStack_b8 = plVar1;
      local_b0 = uVar13;
      if (ppcVar15 != *(code ***)(*(long *)(param_1 + 0x68) + (uVar13 ^ 1) * 8)) goto LAB_006e23d0;
      local_c0 = *(code ***)(*ppcVar15 + 0x28);
      while (local_c0 != (code **)0x0) {
LAB_006e23d0:
        FUN_006ded74(local_c0 + 4);
        FUN_006e35fc(&local_c0);
      }
    }
  }
LAB_006e23e8:
  FUN_006e33cc(plVar1);
  if (*(int *)(*(long *)(param_1 + 0x10) + 8) != 0) {
    lVar14 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
    puVar17 = (undefined8 *)0x0;
    if (lVar14 != 0) {
      puVar17 = (undefined8 *)(lVar14 + 8);
    }
    do {
      local_78 = 0;
      plVar9 = *(long **)(lVar7 + 0x18);
      if ((plVar9 != (long *)0x0) &&
         (pcStack_d0 = thunk_FUN_006af330, local_d8 = lVar7, *plVar9 != -1)) {
        local_c0 = &pcStack_d0;
        plStack_b8 = &local_d8;
        local_c8 = &local_c0;
                    /* try { // try from 006e247c to 006e248b has its CatchHandler @ 006e2bf0 */
        FUN_00710f84(plVar9,&local_c8,FUN_00685640);
      }
      uVar2 = *(uint *)(&DAT_00210878 + (ulong)*(byte *)(lVar7 + 2) * 4);
      if ((int)uVar2 < 4) {
        if (uVar2 == 1) {
          uVar6 = FUN_0067cb40(extraout_x1,*puVar17,lVar7);
          if (local_78 != 1) {
            if ((local_78 == 9) && ((local_90[0] & 1) != 0)) {
              free(local_80);
            }
            local_78 = 1;
          }
        }
        else {
          if (uVar2 == 2) {
            uVar13 = FUN_0067d380(extraout_x1,*puVar17,lVar7);
            if (local_78 != 2) {
              if ((local_78 == 9) && ((local_90[0] & 1) != 0)) {
                free(local_80);
              }
              local_78 = 2;
            }
            goto LAB_006e269c;
          }
          if (uVar2 != 3) goto LAB_006e26fc;
                    /* try { // try from 006e251c to 006e26bb has its CatchHandler @ 006e2bf0 */
          uVar6 = FUN_0067dbc0(extraout_x1,*puVar17,lVar7);
          if (local_78 != 3) {
            if ((local_78 == 9) && ((local_90[0] & 1) != 0)) {
              free(local_80);
            }
            local_78 = 3;
          }
        }
        local_90[0] = CONCAT44(local_90[0]._4_4_,uVar6);
        lVar14 = *(long *)(param_1 + 8);
      }
      else if (uVar2 < 0xb) {
        if ((1 << (ulong)(uVar2 & 0x1f) & 0x560U) == 0) {
          if (uVar2 == 7) {
            uVar4 = FUN_0067fce8(extraout_x1,*puVar17,lVar7);
            if (local_78 != 7) {
              if ((local_78 == 9) && ((local_90[0] & 1) != 0)) {
                free(local_80);
              }
              local_78 = 7;
            }
            local_90[0] = CONCAT71(local_90[0]._1_7_,uVar4) & 0xffffffffffffff01;
            goto LAB_006e26fc;
          }
          if (uVar2 != 9) goto LAB_006e25a8;
          FUN_00680534(&local_f0,extraout_x1,*puVar17,lVar7);
          if (local_78 == 9) {
            if ((local_90[0] & 1) != 0) {
              free(local_80);
            }
          }
          else {
            local_78 = 9;
          }
          local_90[0] = CONCAT62(uStack_ee,local_f0);
          local_f0 = 0;
          lVar14 = *(long *)(param_1 + 8);
          local_80 = local_e0;
        }
        else {
                    /* try { // try from 006e24b8 to 006e24cf has its CatchHandler @ 006e2bd4 */
          FUN_00675e64(&local_c0,3,
                       "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/map_field.cc"
                       ,0x232);
                    /* try { // try from 006e24d0 to 006e24e3 has its CatchHandler @ 006e2bdc */
          uVar10 = FUN_00675a58(&local_c0,"Can\'t get here.");
                    /* try { // try from 006e24e4 to 006e24eb has its CatchHandler @ 006e2bd8 */
          FUN_00675ac0(&local_c8,uVar10);
          FUN_00675e7c(&local_c0);
          lVar14 = *(long *)(param_1 + 8);
        }
      }
      else {
LAB_006e25a8:
        if (uVar2 == 4) {
          uVar13 = FUN_0067e400(extraout_x1,*puVar17,lVar7);
          if (local_78 != 4) {
            if ((local_78 == 9) && ((local_90[0] & 1) != 0)) {
              free(local_80);
            }
            local_78 = 4;
          }
LAB_006e269c:
          lVar14 = *(long *)(param_1 + 8);
          local_90[0] = uVar13;
        }
        else {
LAB_006e26fc:
          lVar14 = *(long *)(param_1 + 8);
        }
      }
                    /* try { // try from 006e2704 to 006e2717 has its CatchHandler @ 006e2bec */
      if ((lVar14 == 0) && (FUN_006e37c4(&local_c0,plVar1,local_90,0), local_c0 != (code **)0x0)) {
        FUN_006ded74(local_c0 + 4);
      }
                    /* try { // try from 006e2728 to 006e27d7 has its CatchHandler @ 006e2bf4 */
      FUN_006e3fc4(&local_c0,plVar1,local_90);
      ppcVar15 = local_c0;
      plVar9 = *(long **)(lVar8 + 0x18);
      if (plVar9 == (long *)0x0) {
        iVar12 = *(int *)(&DAT_00210878 + (ulong)*(byte *)(lVar8 + 2) * 4);
        *(int *)(local_c0 + 5) = iVar12;
        if (5 < iVar12) goto LAB_006e2838;
LAB_006e27e8:
        if (iVar12 < 3) {
          if (iVar12 == 1) {
            if (*(long *)(param_1 + 8) == 0) {
                    /* try { // try from 006e2a1c to 006e2a3b has its CatchHandler @ 006e2bb4 */
              pcVar11 = (code *)FUN_00759c3c(4);
            }
            else {
                    /* try { // try from 006e28f0 to 006e28ff has its CatchHandler @ 006e2bb4 */
              pcVar11 = (code *)FUN_00663420(*(long *)(param_1 + 8),8,PTR_PTR_007a36b0);
            }
            *(undefined4 *)pcVar11 = 0;
            uVar6 = FUN_0067cb40(extraout_x1,*puVar17,lVar8);
LAB_006e2aac:
            *(undefined4 *)pcVar11 = uVar6;
            goto LAB_006e2b4c;
          }
          if (iVar12 == 2) {
            if (*(long *)(param_1 + 8) == 0) {
                    /* try { // try from 006e29cc to 006e29eb has its CatchHandler @ 006e2bb8 */
              pcVar11 = (code *)FUN_00759c3c(8);
            }
            else {
                    /* try { // try from 006e28a8 to 006e28b7 has its CatchHandler @ 006e2bb8 */
              pcVar11 = (code *)FUN_00663420(*(long *)(param_1 + 8),8,PTR_PTR_007a36a0);
            }
            *(long *)pcVar11 = 0;
            lVar14 = FUN_0067d380(extraout_x1,*puVar17,lVar8);
LAB_006e2afc:
            *(long *)pcVar11 = lVar14;
            goto LAB_006e2b4c;
          }
        }
        else {
          if (iVar12 == 3) {
            if (*(long *)(param_1 + 8) == 0) {
                    /* try { // try from 006e2a68 to 006e2a87 has its CatchHandler @ 006e2bbc */
              pcVar11 = (code *)FUN_00759c3c(4);
            }
            else {
                    /* try { // try from 006e2928 to 006e2937 has its CatchHandler @ 006e2bbc */
              pcVar11 = (code *)FUN_00663420(*(long *)(param_1 + 8),8,PTR_PTR_007a36c0);
            }
            *(undefined4 *)pcVar11 = 0;
            uVar6 = FUN_0067dbc0(extraout_x1,*puVar17,lVar8);
            goto LAB_006e2aac;
          }
          if (iVar12 == 4) {
            if (*(long *)(param_1 + 8) == 0) {
                    /* try { // try from 006e2adc to 006e2afb has its CatchHandler @ 006e2bc0 */
              pcVar11 = (code *)FUN_00759c3c(8);
            }
            else {
                    /* try { // try from 006e2960 to 006e296f has its CatchHandler @ 006e2bc0 */
              pcVar11 = (code *)FUN_00663420(*(long *)(param_1 + 8),8,PTR_PTR_007a36c8);
            }
            *(long *)pcVar11 = 0;
            lVar14 = FUN_0067e400(extraout_x1,*puVar17,lVar8);
            goto LAB_006e2afc;
          }
          if (iVar12 == 5) {
            if (*(long *)(param_1 + 8) == 0) {
                    /* try { // try from 006e2ab4 to 006e2ad3 has its CatchHandler @ 006e2bc4 */
              pcVar11 = (code *)FUN_00759c3c(8);
            }
            else {
                    /* try { // try from 006e2810 to 006e281f has its CatchHandler @ 006e2bc4 */
              pcVar11 = (code *)FUN_00663420(*(long *)(param_1 + 8),8,PTR_PTR_007a3698);
            }
            *(long *)pcVar11 = 0;
            lVar14 = FUN_0067f494(extraout_x1,*puVar17,lVar8);
            *(long *)pcVar11 = lVar14;
            goto LAB_006e2b4c;
          }
        }
      }
      else {
        pcStack_d0 = thunk_FUN_006af330;
        local_d8 = lVar8;
        if (*plVar9 != -1) {
          local_c0 = &pcStack_d0;
          plStack_b8 = &local_d8;
          local_c8 = &local_c0;
          FUN_00710f84(plVar9,&local_c8,FUN_00685640);
        }
        plVar9 = *(long **)(lVar8 + 0x18);
        iVar12 = *(int *)(&DAT_00210878 + (ulong)*(byte *)(lVar8 + 2) * 4);
        *(int *)(ppcVar15 + 5) = iVar12;
        if (plVar9 != (long *)0x0) {
          pcStack_d0 = thunk_FUN_006af330;
          local_d8 = lVar8;
          if (*plVar9 != -1) {
            local_c0 = &pcStack_d0;
            plStack_b8 = &local_d8;
            local_c8 = &local_c0;
            FUN_00710f84(plVar9,&local_c8,FUN_00685640);
          }
          iVar12 = *(int *)(&DAT_00210878 + (ulong)*(byte *)(lVar8 + 2) * 4);
        }
        if (iVar12 < 6) goto LAB_006e27e8;
LAB_006e2838:
        if (7 < iVar12) {
          if (iVar12 != 8) {
            if (iVar12 == 9) {
              if (*(long *)(param_1 + 8) == 0) {
                    /* try { // try from 006e2b04 to 006e2b0b has its CatchHandler @ 006e2ba8 */
                pcVar11 = (code *)FUN_00759c3c(0x18);
              }
              else {
                    /* try { // try from 006e297c to 006e298b has its CatchHandler @ 006e2ba8 */
                auVar18 = FUN_00663600(*(long *)(param_1 + 8),0x18,PTR_PTR_007a2ea8);
                pcVar11 = auVar18._0_8_;
                *auVar18._8_8_ = pcVar11;
                auVar18._8_8_[1] = PTR_FUN_007a2ca8;
              }
              *(long *)pcVar11 = 0;
              *(long *)(pcVar11 + 8) = 0;
              *(long *)(pcVar11 + 0x10) = 0;
                    /* try { // try from 006e2b1c to 006e2b2b has its CatchHandler @ 006e2ba4 */
              FUN_00680534(&local_c0,extraout_x1,*puVar17,lVar8);
              if (((byte)*pcVar11 & 1) != 0) {
                free(*(void **)(pcVar11 + 0x10));
              }
              *(ulong *)(pcVar11 + 0x10) = local_b0;
              *(long **)(pcVar11 + 8) = plStack_b8;
              *(code ***)pcVar11 = local_c0;
            }
            else {
              if (iVar12 != 10) goto LAB_006e2b50;
                    /* try { // try from 006e285c to 006e286b has its CatchHandler @ 006e2bac */
              plVar9 = (long *)FUN_0068265c(extraout_x1,*puVar17,lVar8,0);
                    /* try { // try from 006e287c to 006e288b has its CatchHandler @ 006e2bb0 */
              pcVar11 = (code *)(**(code **)(*plVar9 + 0x18))(plVar9,*(undefined8 *)(param_1 + 8));
              FUN_006e51bc(pcVar11,plVar9);
            }
            goto LAB_006e2b4c;
          }
          if (*(long *)(param_1 + 8) == 0) {
                    /* try { // try from 006e2a8c to 006e2aab has its CatchHandler @ 006e2bd0 */
            pcVar11 = (code *)FUN_00759c3c(4);
          }
          else {
                    /* try { // try from 006e2944 to 006e2953 has its CatchHandler @ 006e2bd0 */
            pcVar11 = (code *)FUN_00663420(*(long *)(param_1 + 8),8,PTR_PTR_007a36b0);
          }
          *(undefined4 *)pcVar11 = 0;
          uVar6 = FUN_006818fc(extraout_x1,*puVar17,lVar8);
          goto LAB_006e2aac;
        }
        if (iVar12 != 6) {
          if (iVar12 == 7) {
            if (*(long *)(param_1 + 8) == 0) {
                    /* try { // try from 006e29f0 to 006e2a0f has its CatchHandler @ 006e2bcc */
              pcVar11 = (code *)FUN_00759c3c(1);
            }
            else {
                    /* try { // try from 006e28d4 to 006e28e3 has its CatchHandler @ 006e2bcc */
              pcVar11 = (code *)FUN_00663420(*(long *)(param_1 + 8),8,PTR_PTR_007a36a8);
            }
            *pcVar11 = (code)0x0;
            bVar5 = FUN_0067fce8(extraout_x1,*puVar17,lVar8);
            *pcVar11 = (code)(bVar5 & 1);
            goto LAB_006e2b4c;
          }
          goto LAB_006e2b50;
        }
        if (*(long *)(param_1 + 8) == 0) {
                    /* try { // try from 006e2a40 to 006e2a5f has its CatchHandler @ 006e2bc8 */
          pcVar11 = (code *)FUN_00759c3c(4);
        }
        else {
                    /* try { // try from 006e290c to 006e291b has its CatchHandler @ 006e2bc8 */
          pcVar11 = (code *)FUN_00663420(*(long *)(param_1 + 8),8,PTR_PTR_007a36b8);
        }
        *(undefined4 *)pcVar11 = 0;
        uVar6 = FUN_0067ec40(extraout_x1,*puVar17,lVar8);
        *(undefined4 *)pcVar11 = uVar6;
LAB_006e2b4c:
        ppcVar15[4] = pcVar11;
      }
LAB_006e2b50:
      if ((local_78 == 9) && ((local_90[0] & 1) != 0)) {
        free(local_80);
      }
      puVar17 = puVar17 + 1;
      lVar16 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
      lVar14 = 0;
      if (lVar16 != 0) {
        lVar14 = lVar16 + 8;
      }
    } while (puVar17 != (undefined8 *)(lVar14 + (long)*(int *)(*(long *)(param_1 + 0x10) + 8) * 8));
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x006e2390:
  uVar13 = uVar13 + 1;
  if (*(ulong *)(param_1 + 0x50) == uVar13) goto LAB_006e23e8;
  goto LAB_006e2388;
}


// ===== 006e2c34  FUN_006e2c34 =====

long FUN_006e2c34(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 extraout_x1;
  int *piVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *local_60;
  long lStack_58;
  ulong local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 == 0) {
    lVar5 = 0x30;
    lVar7 = *(long *)(param_1 + 0x48);
  }
  else {
    piVar3 = *(int **)(lVar7 + 0x10);
    lVar5 = (long)*(int *)(lVar7 + 0xc) << 3;
    if (piVar3 != (int *)0x0) {
      if (0 < *piVar3) {
        lVar8 = 0;
        do {
          lVar2 = (**(code **)(**(long **)(piVar3 + lVar8 * 2 + 2) + 0x70))();
          piVar3 = *(int **)(lVar7 + 0x10);
          lVar8 = lVar8 + 1;
          lVar5 = lVar2 + lVar5;
        } while (lVar8 < *piVar3);
      }
      lVar5 = lVar5 + 8;
    }
    lVar5 = lVar5 + 0x30;
    lVar7 = *(long *)(param_1 + 0x48);
  }
  if (lVar7 == 0) goto LAB_006e2e1c;
  lStack_58 = param_1 + 0x48;
  local_50 = *(ulong *)(param_1 + 0x60);
  lVar8 = *(long *)(param_1 + 0x68);
  plVar6 = *(long **)(lVar8 + local_50 * 8);
  if (plVar6 == (long *)0x0) {
    do {
      plVar6 = *(long **)(lVar8 + 8 + local_50 * 8);
      local_50 = local_50 + 1;
    } while (plVar6 == (long *)0x0);
  }
  if (plVar6 == *(long **)(lVar8 + (local_50 ^ 1) * 8)) {
    plVar6 = *(long **)(*plVar6 + 0x28);
  }
  local_60 = plVar6;
  iVar1 = FUN_006e2e60(plVar6);
  lVar8 = lVar7 * 0x18;
  if (iVar1 != 9) {
    lVar8 = 0;
  }
  lVar5 = lVar5 + lVar7 * 0x30 + lVar8;
  iVar1 = FUN_00685a7c(plVar6 + 4);
  if (iVar1 < 6) {
    if (iVar1 < 3) {
      if (iVar1 == 1) goto LAB_006e2e18;
      if (iVar1 == 2) goto LAB_006e2dd8;
    }
    else if (iVar1 == 3) {
LAB_006e2e18:
      lVar5 = lVar5 + lVar7 * 4;
    }
    else if ((iVar1 == 4) || (iVar1 == 5)) {
LAB_006e2dd8:
      lVar7 = lVar7 * 8;
      lVar4 = *(long *)(lVar4 + 0x28);
      goto joined_r0x006e2e58;
    }
  }
  else if (iVar1 < 8) {
    if (iVar1 == 6) goto LAB_006e2e18;
    if (iVar1 == 7) {
      lVar4 = *(long *)(lVar4 + 0x28);
      goto joined_r0x006e2e58;
    }
  }
  else {
    if (iVar1 == 8) goto LAB_006e2e18;
    if (iVar1 == 9) {
      lVar4 = *(long *)(lVar4 + 0x28);
      lVar7 = lVar7 * 0x18;
joined_r0x006e2e58:
      if (lVar4 == local_48) {
        return lVar5 + lVar7;
      }
      goto LAB_006e2dec;
    }
    if (iVar1 == 10) {
      do {
        plVar6 = (long *)FUN_006e11b4(plVar6 + 4);
        (**(code **)(*plVar6 + 0x80))();
        lVar7 = FUN_00679630(extraout_x1,plVar6);
        lVar5 = lVar7 + lVar5;
        FUN_006e4b48(&local_60);
        plVar6 = local_60;
      } while (local_60 != (long *)0x0);
    }
  }
LAB_006e2e1c:
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return lVar5;
  }
LAB_006e2dec:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006e2e60  FUN_006e2e60 =====

void FUN_006e2e60(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 uStack_59;
  undefined1 auStack_58 [48];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    FUN_00675e64(auStack_58,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/map_field.h"
                 ,99);
                    /* try { // try from 006e2ea4 to 006e2ecf has its CatchHandler @ 006e2f08 */
    uVar3 = FUN_00675a58(auStack_58,"Protocol Buffer map usage error:\n");
    uVar3 = FUN_00675a58(uVar3,"MapKey::type MapKey is not initialized. ");
    uVar3 = FUN_00675a58(uVar3,"Call set methods to initialize MapKey.");
                    /* try { // try from 006e2ed0 to 006e2ed7 has its CatchHandler @ 006e2f04 */
    FUN_00675ac0(&uStack_59,uVar3);
    FUN_00675e7c(auStack_58);
    iVar1 = *(int *)(param_1 + 0x18);
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}


// ===== 006e2f30  FUN_006e2f30 =====

void FUN_006e2f30(void)

{
  return;
}


// ===== 006e2f34  FUN_006e2f34 =====

bool FUN_006e2f34(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  return *(long *)*param_2 == *(long *)*param_3;
}


// ===== 006e2f50  FUN_006e2f50 =====

void FUN_006e2f50(long *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  
  lVar1 = (**(code **)(*param_1 + 0x98))();
  uVar2 = *(ulong *)(lVar1 + 0x18);
  uVar5 = *(ulong *)(lVar1 + 8);
  if (uVar2 < uVar5) {
    do {
      plVar3 = *(long **)(*(long *)(lVar1 + 0x20) + uVar2 * 8);
      if (plVar3 != (long *)0x0) {
        if (plVar3 == *(long **)(*(long *)(lVar1 + 0x20) + (uVar2 ^ 1) * 8)) {
          plVar3 = *(long **)(*plVar3 + 0x28);
        }
        goto LAB_006e2fc4;
      }
      uVar2 = uVar2 + 1;
    } while (uVar5 != uVar2);
    plVar3 = (long *)0x0;
    uVar2 = uVar5;
  }
  else {
    plVar3 = (long *)0x0;
  }
LAB_006e2fc4:
  plVar6 = (long *)*param_2;
  *plVar6 = (long)plVar3;
  lVar4 = *param_1;
  plVar6[1] = lVar1;
  plVar6[2] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x006e2fe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 0xa8))(param_1,param_2);
  return;
}


// ===== 006e2fec  FUN_006e2fec =====

void FUN_006e2fec(long *param_1,undefined8 *param_2)

{
  (**(code **)(*param_1 + 0x98))();
  param_2 = (undefined8 *)*param_2;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  return;
}


// ===== 006e3020  FUN_006e3020 =====

void FUN_006e3020(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x006e3028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))();
  return;
}


// ===== 006e302c  FUN_006e302c =====

void FUN_006e302c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x18);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  *param_2 = puVar1;
  return;
}


// ===== 006e305c  FUN_006e305c =====

void FUN_006e305c(undefined8 param_1,undefined8 *param_2)

{
  if ((void *)*param_2 != (void *)0x0) {
    free((void *)*param_2);
    return;
  }
  return;
}


// ===== 006e306c  FUN_006e306c =====

void FUN_006e306c(long *param_1,long *param_2,long *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar3 = (undefined8 *)*param_2;
  puVar2 = (undefined8 *)*param_3;
  uVar6 = puVar2[1];
  uVar5 = *puVar2;
  puVar3[2] = puVar2[2];
  puVar3[1] = uVar6;
  *puVar3 = uVar5;
  iVar1 = FUN_006e2e60(param_3 + 2);
  if ((int)param_2[5] != iVar1) {
    if (((int)param_2[5] == 9) && ((*(byte *)(param_2 + 2) & 1) != 0)) {
      free((void *)param_2[4]);
    }
    *(int *)(param_2 + 5) = iVar1;
    if (iVar1 == 9) {
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
    }
  }
  lVar4 = *param_1;
  *(int *)(param_2 + 7) = (int)param_3[7];
                    /* WARNING: Could not recover jumptable at 0x006e3118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 0xa8))(param_1);
  return;
}


// ===== 006e311c  FUN_006e311c =====

void FUN_006e311c(long *param_1,undefined8 *param_2)

{
  FUN_006e4b48(*param_2);
                    /* WARNING: Could not recover jumptable at 0x006e3154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa8))(param_1,param_2);
  return;
}


// ===== 006e3158  FUN_006e3158 =====

void FUN_006e3158(long *param_1)

{
  if ((param_1[2] != 0) && (*param_1 == 0)) {
                    /* try { // try from 006e3170 to 006e3173 has its CatchHandler @ 006e317c */
    FUN_00675910();
  }
  return;
}


// ===== 006e3180  FUN_006e3180 =====

void FUN_006e3180(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,
                 int param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  
  iVar5 = param_4 - param_5;
  if (iVar5 != 0 && param_5 <= (int)param_4) {
    uVar3 = *param_1;
    uVar4 = *param_3;
    puVar6 = param_2 + param_5;
    do {
      uVar1 = FUN_006e5f04(uVar4,uVar3);
      iVar5 = iVar5 + -1;
      *puVar6 = uVar1;
      puVar6 = puVar6 + 1;
    } while (iVar5 != 0);
  }
  if (0 < (int)param_4) {
    uVar2 = (ulong)param_4;
    do {
      FUN_00685b44(*param_3,*param_2);
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
    } while (uVar2 != 0);
  }
  return;
}


