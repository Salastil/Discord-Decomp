// ===== 007c825c  FUN_007c825c =====

void FUN_007c825c(long param_1,long param_2,long param_3,int param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  long lVar5;
  byte *pbVar6;
  
  if (0 < param_4) {
    lVar5 = 0;
    pbVar6 = (byte *)(param_1 + 3);
    do {
      pbVar3 = pbVar6 + param_2;
      puVar4 = (undefined1 *)(param_3 + lVar5);
      lVar5 = lVar5 + 3;
      *puVar4 = (char)(((uint)pbVar6[-2] + (uint)pbVar6[-3] + (uint)pbVar6[-1] +
                        (uint)pbVar3[-3] + (uint)pbVar3[-2] + (uint)pbVar3[-1]) * 0x2aaa >> 0x10);
      puVar4[1] = (char)(((uint)pbVar6[1] + (uint)*pbVar6 + (uint)pbVar6[2] +
                          (uint)*pbVar3 + (uint)pbVar3[1] + (uint)pbVar3[2]) * 0x2aaa >> 0x10);
      pbVar1 = pbVar6 + 3;
      pbVar2 = pbVar6 + 4;
      pbVar6 = pbVar6 + 8;
      puVar4[2] = (char)((uint)*pbVar2 + (uint)*pbVar1 + (uint)pbVar3[3] + (uint)pbVar3[4] >> 2);
    } while ((int)lVar5 < param_4);
  }
  return;
}


// ===== 007c8324  FUN_007c8324 =====

void FUN_007c8324(byte *param_1,byte *param_2,uint param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint3 uVar3;
  uint3 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  pbVar5 = param_2;
  pbVar6 = param_1;
  if (0 < (int)(param_3 - 1)) {
    if ((param_3 - 2 < 0x1e) ||
       ((uVar2 = param_3 - 2 >> 1, param_2 < param_1 + (ulong)uVar2 * 2 + 2 &&
        (param_1 < param_2 + (ulong)uVar2 * 4 + 4)))) {
      iVar7 = 0;
    }
    else {
      uVar8 = (ulong)(uVar2 + 1);
      uVar9 = uVar8 & 0xfffffff0;
      uVar10 = uVar8 & 0xfffffff0;
      iVar7 = (int)uVar9 << 1;
      pbVar6 = param_1 + uVar9 * 2;
      pbVar5 = param_2 + uVar9 * 4;
      do {
        uVar18 = *(undefined8 *)(param_1 + 8);
        uVar17 = *(undefined8 *)param_1;
        uVar12 = *(undefined8 *)(param_1 + 0x18);
        uVar11 = *(undefined8 *)(param_1 + 0x10);
        uVar16 = *(undefined8 *)(param_2 + 0x28);
        uVar15 = *(undefined8 *)(param_2 + 0x20);
        uVar14 = *(undefined8 *)(param_2 + 0x38);
        uVar13 = *(undefined8 *)(param_2 + 0x30);
        uVar10 = uVar10 - 0x10;
        uVar22 = *(undefined8 *)(param_2 + 8);
        uVar21 = *(undefined8 *)param_2;
        uVar20 = *(undefined8 *)(param_2 + 0x18);
        uVar19 = *(undefined8 *)(param_2 + 0x10);
        uVar3 = CONCAT12((char)((ulong)uVar11 >> 8),(short)uVar11) & 0xff00ff;
        uVar4 = CONCAT12((char)((ulong)uVar17 >> 8),(short)uVar17) & 0xff00ff;
        *(ulong *)(param_2 + 0x28) =
             CONCAT26((short)((ulong)uVar16 >> 0x30) + (ushort)(byte)((ulong)uVar11 >> 0x38),
                      CONCAT24((short)((ulong)uVar16 >> 0x20) +
                               (ushort)(byte)((ulong)uVar11 >> 0x30),
                               CONCAT22((short)((ulong)uVar16 >> 0x10) +
                                        (ushort)(byte)((ulong)uVar11 >> 0x28),
                                        (short)uVar16 + (ushort)(byte)((ulong)uVar11 >> 0x20))));
        *(ulong *)(param_2 + 0x20) =
             CONCAT26((short)((ulong)uVar15 >> 0x30) + (ushort)(byte)((ulong)uVar11 >> 0x18),
                      CONCAT24((short)((ulong)uVar15 >> 0x20) +
                               (ushort)(byte)((ulong)uVar11 >> 0x10),
                               CONCAT22((short)((ulong)uVar15 >> 0x10) +
                                        (ushort)(byte)(uVar3 >> 0x10),(short)uVar15 + (short)uVar3))
                     );
        *(ulong *)(param_2 + 0x38) =
             CONCAT26((short)((ulong)uVar14 >> 0x30) + (ushort)(byte)((ulong)uVar12 >> 0x38),
                      CONCAT24((short)((ulong)uVar14 >> 0x20) +
                               (ushort)(byte)((ulong)uVar12 >> 0x30),
                               CONCAT22((short)((ulong)uVar14 >> 0x10) +
                                        (ushort)(byte)((ulong)uVar12 >> 0x28),
                                        (short)uVar14 + (ushort)(byte)((ulong)uVar12 >> 0x20))));
        *(ulong *)(param_2 + 0x30) =
             CONCAT26((short)((ulong)uVar13 >> 0x30) + (ushort)(byte)((ulong)uVar12 >> 0x18),
                      CONCAT24((short)((ulong)uVar13 >> 0x20) +
                               (ushort)(byte)((ulong)uVar12 >> 0x10),
                               CONCAT22((short)((ulong)uVar13 >> 0x10) +
                                        (ushort)(byte)((ulong)uVar12 >> 8),
                                        (short)uVar13 + (ushort)(byte)uVar12)));
        *(ulong *)(param_2 + 8) =
             CONCAT26((short)((ulong)uVar22 >> 0x30) + (ushort)(byte)((ulong)uVar17 >> 0x38),
                      CONCAT24((short)((ulong)uVar22 >> 0x20) +
                               (ushort)(byte)((ulong)uVar17 >> 0x30),
                               CONCAT22((short)((ulong)uVar22 >> 0x10) +
                                        (ushort)(byte)((ulong)uVar17 >> 0x28),
                                        (short)uVar22 + (ushort)(byte)((ulong)uVar17 >> 0x20))));
        *(ulong *)param_2 =
             CONCAT26((short)((ulong)uVar21 >> 0x30) + (ushort)(byte)((ulong)uVar17 >> 0x18),
                      CONCAT24((short)((ulong)uVar21 >> 0x20) +
                               (ushort)(byte)((ulong)uVar17 >> 0x10),
                               CONCAT22((short)((ulong)uVar21 >> 0x10) +
                                        (ushort)(byte)(uVar4 >> 0x10),(short)uVar21 + (short)uVar4))
                     );
        *(ulong *)(param_2 + 0x18) =
             CONCAT26((short)((ulong)uVar20 >> 0x30) + (ushort)(byte)((ulong)uVar18 >> 0x38),
                      CONCAT24((short)((ulong)uVar20 >> 0x20) +
                               (ushort)(byte)((ulong)uVar18 >> 0x30),
                               CONCAT22((short)((ulong)uVar20 >> 0x10) +
                                        (ushort)(byte)((ulong)uVar18 >> 0x28),
                                        (short)uVar20 + (ushort)(byte)((ulong)uVar18 >> 0x20))));
        *(ulong *)(param_2 + 0x10) =
             CONCAT26((short)((ulong)uVar19 >> 0x30) + (ushort)(byte)((ulong)uVar18 >> 0x18),
                      CONCAT24((short)((ulong)uVar19 >> 0x20) +
                               (ushort)(byte)((ulong)uVar18 >> 0x10),
                               CONCAT22((short)((ulong)uVar19 >> 0x10) +
                                        (ushort)(byte)((ulong)uVar18 >> 8),
                                        (short)uVar19 + (ushort)(byte)uVar18)));
        param_1 = param_1 + 0x20;
        param_2 = param_2 + 0x40;
      } while (uVar10 != 0);
      if (uVar9 == uVar8) goto joined_r0x007c83c4;
    }
    do {
      iVar7 = iVar7 + 2;
      *(ushort *)pbVar5 = *(short *)pbVar5 + (ushort)*pbVar6;
      pbVar1 = pbVar6 + 1;
      pbVar6 = pbVar6 + 2;
      *(ushort *)(pbVar5 + 2) = *(short *)(pbVar5 + 2) + (ushort)*pbVar1;
      pbVar5 = pbVar5 + 4;
    } while (iVar7 < (int)(param_3 - 1));
  }
joined_r0x007c83c4:
  if ((param_3 & 1) != 0) {
    *(ushort *)pbVar5 = *(short *)pbVar5 + (ushort)*pbVar6;
  }
  return;
}


// ===== 007c841c  FUN_007c841c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007c841c(long param_1,undefined8 param_2,undefined1 *param_3,uint param_4)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 *puVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined1 (*pauVar9) [16];
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined2 uVar13;
  undefined2 uVar14;
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
  
  auVar16 = _DAT_001f3d30;
  auVar4 = _DAT_001f36e0;
  auVar3 = _DAT_001f30f0;
  if ((int)param_4 < 1) {
    return;
  }
  if ((param_4 < 9) ||
     ((param_3 < (undefined1 *)(param_1 + (ulong)(param_4 - 1) * 4 + 4) &&
      ((undefined1 *)(param_1 + 2U) < param_3 + (ulong)(param_4 - 1) * 2 + 2)))) {
    uVar11 = 0;
  }
  else {
    uVar7 = (ulong)param_4;
    if (param_4 < 0x21) {
      uVar10 = 0;
    }
    else {
      uVar11 = 0x20;
      if ((param_4 & 0x1f) != 0) {
        uVar11 = uVar7 & 0x1f;
      }
      uVar13 = (undefined2)_UNK_001f1f9c;
      uVar14 = (undefined2)((uint)_UNK_001f1f9c >> 0x10);
      auVar2._8_4_ = _UNK_001f1f98;
      auVar2._0_8_ = _DAT_001f1f90;
      auVar18._8_4_ = _UNK_001f1f98;
      auVar18._0_8_ = _DAT_001f1f90;
      uVar10 = uVar7 - uVar11;
      puVar5 = param_3 + 0x20;
      lVar12 = uVar7 - uVar11;
      pauVar9 = (undefined1 (*) [16])(param_1 + 0x42);
      do {
        lVar12 = lVar12 + -0x20;
        auVar15._14_2_ = 0;
        auVar15._0_14_ = *(undefined1 (*) [14])pauVar9[-1];
        auVar19 = a64_TBL(ZEXT816(0),pauVar9[-2],auVar15,auVar3);
        auVar20 = a64_TBL(ZEXT816(0),pauVar9[-4],pauVar9[-3],auVar4);
        auVar18._12_2_ = uVar13;
        auVar18._14_2_ = uVar14;
        auVar15 = a64_TBL(ZEXT816(0),pauVar9[-2],auVar15,auVar18);
        auVar17._14_2_ = 0;
        auVar17._0_14_ = *(undefined1 (*) [14])pauVar9[3];
        auVar22 = a64_TBL(ZEXT816(0),pauVar9[2],auVar17,auVar3);
        auVar23 = a64_TBL(ZEXT816(0),*pauVar9,pauVar9[1],auVar4);
        auVar2._12_2_ = uVar13;
        auVar2._14_2_ = uVar14;
        auVar21._14_2_ = 0;
        auVar21._0_14_ = *(undefined1 (*) [14])pauVar9[3];
        auVar17 = a64_TBL(ZEXT816(0),pauVar9[2],auVar21,auVar2);
        auVar21 = a64_TBL(ZEXT816(0),pauVar9[-4],pauVar9[-3],auVar16);
        auVar24 = a64_TBL(ZEXT816(0),*pauVar9,pauVar9[1],auVar16);
        puVar5[-0x20] = auVar20[0];
        puVar5[-0x1f] = auVar21[0];
        puVar5[-0x1e] = auVar20[1];
        puVar5[-0x1d] = auVar21[1];
        puVar5[-0x1c] = auVar20[2];
        puVar5[-0x1b] = auVar21[2];
        puVar5[-0x1a] = auVar20[3];
        puVar5[-0x19] = auVar21[3];
        puVar5[-0x18] = auVar20[4];
        puVar5[-0x17] = auVar21[4];
        puVar5[-0x16] = auVar20[5];
        puVar5[-0x15] = auVar21[5];
        puVar5[-0x14] = auVar20[6];
        puVar5[-0x13] = auVar21[6];
        puVar5[-0x12] = auVar20[7];
        puVar5[-0x11] = auVar21[7];
        puVar5[-0x10] = auVar19[8];
        puVar5[-0xf] = auVar15[8];
        puVar5[-0xe] = auVar19[9];
        puVar5[-0xd] = auVar15[9];
        puVar5[-0xc] = auVar19[10];
        puVar5[-0xb] = auVar15[10];
        puVar5[-10] = auVar19[0xb];
        puVar5[-9] = auVar15[0xb];
        puVar5[-8] = auVar19[0xc];
        puVar5[-7] = auVar15[0xc];
        puVar5[-6] = auVar19[0xd];
        puVar5[-5] = auVar15[0xd];
        puVar5[-4] = auVar19[0xe];
        puVar5[-3] = auVar15[0xe];
        puVar5[-2] = auVar19[0xf];
        puVar5[-1] = auVar15[0xf];
        *puVar5 = auVar23[0];
        puVar5[1] = auVar24[0];
        puVar5[2] = auVar23[1];
        puVar5[3] = auVar24[1];
        puVar5[4] = auVar23[2];
        puVar5[5] = auVar24[2];
        puVar5[6] = auVar23[3];
        puVar5[7] = auVar24[3];
        puVar5[8] = auVar23[4];
        puVar5[9] = auVar24[4];
        puVar5[10] = auVar23[5];
        puVar5[0xb] = auVar24[5];
        puVar5[0xc] = auVar23[6];
        puVar5[0xd] = auVar24[6];
        puVar5[0xe] = auVar23[7];
        puVar5[0xf] = auVar24[7];
        puVar5[0x10] = auVar22[8];
        puVar5[0x11] = auVar17[8];
        puVar5[0x12] = auVar22[9];
        puVar5[0x13] = auVar17[9];
        puVar5[0x14] = auVar22[10];
        puVar5[0x15] = auVar17[10];
        puVar5[0x16] = auVar22[0xb];
        puVar5[0x17] = auVar17[0xb];
        puVar5[0x18] = auVar22[0xc];
        puVar5[0x19] = auVar17[0xc];
        puVar5[0x1a] = auVar22[0xd];
        puVar5[0x1b] = auVar17[0xd];
        puVar5[0x1c] = auVar22[0xe];
        puVar5[0x1d] = auVar17[0xe];
        puVar5[0x1e] = auVar22[0xf];
        puVar5[0x1f] = auVar17[0xf];
        puVar5 = puVar5 + 0x40;
        pauVar9 = pauVar9 + 8;
      } while (lVar12 != 0);
      if (uVar11 < 9) {
        param_1 = param_1 + uVar10 * 4;
        param_3 = param_3 + uVar10 * 2;
        uVar11 = uVar10 & 0xffffffff;
        goto LAB_007c8594;
      }
    }
    auVar4 = _DAT_001f3d30;
    auVar3 = _DAT_001f36e0;
    lVar12 = param_1 + uVar10 * 4;
    uVar1 = 8;
    if ((param_4 & 7) != 0) {
      uVar1 = uVar7 & 7;
    }
    puVar5 = param_3 + uVar10 * 2;
    uVar11 = uVar7 - uVar1;
    param_1 = param_1 + uVar11 * 4;
    param_3 = param_3 + uVar11 * 2;
    lVar8 = (uVar1 + uVar10) - uVar7;
    pauVar9 = (undefined1 (*) [16])(lVar12 + 2);
    do {
      lVar8 = lVar8 + 8;
      auVar16._14_2_ = 0;
      auVar16._0_14_ = *(undefined1 (*) [14])pauVar9[1];
      auVar16 = a64_TBL(ZEXT816(0),*pauVar9,auVar16,auVar3);
      auVar19._14_2_ = 0;
      auVar19._0_14_ = *(undefined1 (*) [14])pauVar9[1];
      auVar18 = a64_TBL(ZEXT816(0),*pauVar9,auVar19,auVar4);
      *puVar5 = auVar16[0];
      puVar5[1] = auVar18[0];
      puVar5[2] = auVar16[1];
      puVar5[3] = auVar18[1];
      puVar5[4] = auVar16[2];
      puVar5[5] = auVar18[2];
      puVar5[6] = auVar16[3];
      puVar5[7] = auVar18[3];
      puVar5[8] = auVar16[4];
      puVar5[9] = auVar18[4];
      puVar5[10] = auVar16[5];
      puVar5[0xb] = auVar18[5];
      puVar5[0xc] = auVar16[6];
      puVar5[0xd] = auVar18[6];
      puVar5[0xe] = auVar16[7];
      puVar5[0xf] = auVar18[7];
      puVar5 = puVar5 + 0x10;
      pauVar9 = pauVar9 + 2;
    } while (lVar8 != 0);
  }
LAB_007c8594:
  iVar6 = param_4 - (int)uVar11;
  puVar5 = (undefined1 *)(param_1 + 3);
  do {
    iVar6 = iVar6 + -1;
    *param_3 = puVar5[-1];
    param_3[1] = *puVar5;
    param_3 = param_3 + 2;
    puVar5 = puVar5 + 4;
  } while (iVar6 != 0);
  return;
}


// ===== 007c85cc  FUN_007c85cc  [FAILED] =====
/* decompilation failed: 
Recoverable Error: Unable to find unique hash for varnode */

// ===== 007c86f8  FUN_007c86f8  [FAILED] =====
/* decompilation failed: 
Recoverable Error: Unable to find unique hash for varnode */

// ===== 007c88d0  FUN_007c88d0 =====

void FUN_007c88d0(undefined2 *param_1,undefined8 param_2,int param_3,undefined2 *param_4,
                 uint param_5)

{
  undefined2 *puVar1;
  int iVar2;
  
  if (0 < (int)(param_5 - 1)) {
    iVar2 = 0;
    do {
      iVar2 = iVar2 + 2;
      *param_4 = *param_1;
      puVar1 = param_1 + param_3;
      param_1 = (undefined2 *)
                ((long)param_1 +
                (-(ulong)((uint)(param_3 << 1) >> 0x1f) & 0xfffffffe00000000 |
                (ulong)(uint)(param_3 << 1) << 1));
      param_4[1] = *puVar1;
      param_4 = param_4 + 2;
    } while (iVar2 < (int)(param_5 - 1));
  }
  if ((param_5 & 1) != 0) {
    *param_4 = *param_1;
  }
  return;
}


// ===== 007c8920  FUN_007c8920 =====

void FUN_007c8920(long param_1,long param_2,int param_3,undefined1 *param_4,int param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte *pbVar4;
  
  if (0 < param_5) {
    pbVar4 = (byte *)(param_1 + 1);
    do {
      pbVar2 = pbVar4 + param_2;
      param_5 = param_5 + -1;
      *param_4 = (char)((uint)pbVar4[-1] + (uint)pbVar4[1] + (uint)pbVar2[-1] + (uint)pbVar2[1] + 2
                       >> 2);
      bVar3 = *pbVar4;
      pbVar1 = pbVar4 + 2;
      pbVar4 = pbVar4 + (param_3 << 1);
      param_4[1] = (char)((uint)bVar3 + (uint)*pbVar1 + (uint)*pbVar2 + (uint)pbVar2[2] + 2 >> 2);
      param_4 = param_4 + 2;
    } while (param_5 != 0);
  }
  return;
}


// ===== 007c89a0  FUN_007c89a0 =====

void FUN_007c89a0(ulong param_1,ulong param_2,int param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined1 auVar5 [16];
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  uint3 uVar23;
  uint3 uVar24;
  uint3 uVar25;
  byte *pbVar26;
  byte *pbVar28;
  byte *pbVar55;
  ulong uVar85;
  ulong uVar86;
  ulong uVar87;
  int iVar88;
  long lVar89;
  byte *pbVar90;
  byte *pbVar91;
  undefined2 uVar92;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  byte bVar98;
  byte bVar99;
  byte bVar100;
  undefined8 uVar93;
  byte bVar101;
  byte bVar102;
  byte bVar103;
  byte bVar104;
  byte bVar105;
  byte bVar106;
  byte bVar107;
  byte bVar108;
  byte bVar109;
  byte bVar112;
  byte bVar113;
  byte bVar114;
  byte bVar115;
  byte bVar116;
  byte bVar117;
  byte bVar118;
  undefined8 uVar111;
  undefined2 uVar119;
  byte bVar122;
  byte bVar123;
  byte bVar124;
  byte bVar125;
  byte bVar126;
  byte bVar127;
  undefined8 uVar120;
  undefined1 in_q17 [16];
  undefined1 auVar128 [16];
  undefined1 in_q18 [16];
  undefined1 auVar129 [16];
  undefined1 in_q19 [16];
  undefined1 auVar130 [16];
  undefined1 in_q20 [16];
  undefined1 auVar131 [16];
  byte *pbVar27;
  byte *pbVar29;
  byte *pbVar30;
  byte *pbVar31;
  byte *pbVar32;
  byte *pbVar33;
  byte *pbVar34;
  byte *pbVar35;
  byte *pbVar36;
  byte *pbVar37;
  byte *pbVar38;
  byte *pbVar39;
  byte *pbVar40;
  byte *pbVar41;
  byte *pbVar42;
  byte *pbVar43;
  byte *pbVar44;
  byte *pbVar45;
  byte *pbVar46;
  byte *pbVar47;
  byte *pbVar48;
  byte *pbVar49;
  byte *pbVar50;
  byte *pbVar51;
  byte *pbVar52;
  byte *pbVar53;
  byte *pbVar54;
  byte *pbVar56;
  byte *pbVar57;
  byte *pbVar58;
  byte *pbVar59;
  byte *pbVar60;
  byte *pbVar61;
  byte *pbVar62;
  byte *pbVar63;
  byte *pbVar64;
  byte *pbVar65;
  byte *pbVar66;
  byte *pbVar67;
  byte *pbVar68;
  byte *pbVar69;
  byte *pbVar70;
  byte *pbVar71;
  byte *pbVar72;
  byte *pbVar73;
  byte *pbVar74;
  byte *pbVar75;
  byte *pbVar76;
  byte *pbVar77;
  byte *pbVar78;
  byte *pbVar79;
  byte *pbVar80;
  byte *pbVar81;
  byte *pbVar82;
  byte *pbVar83;
  byte *pbVar84;
  byte bVar94;
  undefined2 uVar110;
  byte bVar121;
  
  uVar2 = param_3 >> 1;
  uVar85 = (ulong)uVar2;
  if ((int)uVar2 < 1) {
    return;
  }
  if (((uVar2 < 8) ||
      (lVar89 = (uVar85 - 1) * 4,
      (((param_2 + 3 + lVar89 < param_2 + 3 || param_2 + 2 + lVar89 < param_2 + 2) ||
       param_2 + 1 + lVar89 < param_2 + 1) || param_2 + lVar89 < param_2) || uVar85 - 1 >> 0x1d != 0
      )) || ((param_1 < param_2 + uVar85 * 4 && (param_2 < param_1 + uVar85 * 2 + 2)))) {
    uVar86 = 0;
  }
  else {
    if (uVar2 < 0x10) {
      uVar87 = 0;
    }
    else {
      lVar89 = 0;
      uVar86 = uVar85 & 0x3ffffff0;
      pbVar27 = (byte *)(param_1 + 2);
      do {
        pbVar91 = pbVar27 + -2;
        pbVar28 = pbVar27 + -1;
        bVar94 = *pbVar27;
        bVar95 = pbVar27[1];
        pbVar29 = pbVar27 + 2;
        pbVar30 = pbVar27 + 3;
        pbVar31 = pbVar27 + 4;
        pbVar32 = pbVar27 + 5;
        pbVar33 = pbVar27 + 6;
        pbVar34 = pbVar27 + 7;
        pbVar35 = pbVar27 + 8;
        pbVar36 = pbVar27 + 9;
        pbVar37 = pbVar27 + 10;
        pbVar38 = pbVar27 + 0xb;
        pbVar39 = pbVar27 + 0xc;
        pbVar40 = pbVar27 + 0xd;
        pbVar90 = pbVar27 + 0xe;
        pbVar41 = pbVar27 + 0xf;
        pbVar42 = pbVar27 + 0x10;
        pbVar43 = pbVar27 + 0x11;
        pbVar44 = pbVar27 + 0x12;
        pbVar45 = pbVar27 + 0x13;
        pbVar46 = pbVar27 + 0x14;
        pbVar47 = pbVar27 + 0x15;
        pbVar26 = pbVar27 + 0x16;
        pbVar48 = pbVar27 + 0x17;
        pbVar49 = pbVar27 + 0x18;
        pbVar50 = pbVar27 + 0x19;
        pbVar51 = pbVar27 + 0x1a;
        pbVar52 = pbVar27 + 0x1b;
        pbVar53 = pbVar27 + 0x1c;
        pbVar54 = pbVar27 + 0x1d;
        puVar1 = (undefined1 *)(param_2 + (long)(int)lVar89);
        lVar89 = lVar89 + 0x40;
        bVar96 = *pbVar27;
        pbVar55 = pbVar27 + 1;
        bVar97 = pbVar27[2];
        pbVar56 = pbVar27 + 3;
        pbVar57 = pbVar27 + 4;
        pbVar58 = pbVar27 + 5;
        pbVar59 = pbVar27 + 6;
        pbVar60 = pbVar27 + 7;
        pbVar61 = pbVar27 + 8;
        pbVar62 = pbVar27 + 9;
        pbVar63 = pbVar27 + 10;
        pbVar64 = pbVar27 + 0xb;
        pbVar65 = pbVar27 + 0xc;
        pbVar66 = pbVar27 + 0xd;
        pbVar67 = pbVar27 + 0xe;
        pbVar68 = pbVar27 + 0xf;
        pbVar69 = pbVar27 + 0x10;
        pbVar70 = pbVar27 + 0x11;
        pbVar71 = pbVar27 + 0x12;
        pbVar72 = pbVar27 + 0x13;
        pbVar73 = pbVar27 + 0x14;
        pbVar74 = pbVar27 + 0x15;
        pbVar75 = pbVar27 + 0x16;
        pbVar76 = pbVar27 + 0x17;
        pbVar77 = pbVar27 + 0x18;
        pbVar78 = pbVar27 + 0x19;
        pbVar79 = pbVar27 + 0x1a;
        pbVar80 = pbVar27 + 0x1b;
        pbVar81 = pbVar27 + 0x1c;
        pbVar82 = pbVar27 + 0x1d;
        pbVar83 = pbVar27 + 0x1e;
        pbVar84 = pbVar27 + 0x1f;
        pbVar27 = pbVar27 + 0x20;
        uVar23 = CONCAT12(bVar95,CONCAT11(bVar95,*pbVar28)) & 0xff00ff;
        auVar14._2_2_ = (ushort)*pbVar56 + (ushort)(byte)(uVar23 >> 0x10) * 3;
        auVar14._0_2_ = (ushort)*pbVar55 + (short)uVar23 * 3;
        auVar14._4_2_ = (ushort)*pbVar58 + (ushort)*pbVar30 * 3;
        auVar14._6_2_ = (ushort)*pbVar60 + (ushort)*pbVar32 * 3;
        auVar14._8_2_ = (ushort)*pbVar62 + (ushort)*pbVar34 * 3;
        auVar14._10_2_ = (ushort)*pbVar64 + (ushort)*pbVar36 * 3;
        auVar14._12_2_ = (ushort)*pbVar66 + (ushort)*pbVar38 * 3;
        auVar14._14_2_ = (ushort)*pbVar68 + (ushort)*pbVar40 * 3;
        auVar129._8_8_ = in_q18._8_8_;
        auVar129._0_8_ = NEON_rshrn(in_q18._0_8_,auVar14,2,2);
        auVar17._2_2_ = (ushort)*pbVar72 + (ushort)*pbVar43 * 3;
        auVar17._0_2_ = (ushort)*pbVar70 + (ushort)*pbVar41 * 3;
        auVar17._4_2_ = (ushort)*pbVar74 + (ushort)*pbVar45 * 3;
        auVar17._6_2_ = (ushort)*pbVar76 + (ushort)*pbVar47 * 3;
        auVar17._8_2_ = (ushort)*pbVar78 + (ushort)*pbVar48 * 3;
        auVar17._10_2_ = (ushort)*pbVar80 + (ushort)*pbVar50 * 3;
        auVar17._12_2_ = (ushort)*pbVar82 + (ushort)*pbVar52 * 3;
        auVar17._14_2_ = (ushort)*pbVar84 + (ushort)*pbVar54 * 3;
        in_q18 = NEON_rshrn2(auVar129,auVar17,2,2);
        auVar20._2_2_ = (ushort)bVar97 + (ushort)bVar94 * 3;
        auVar20._0_2_ = (ushort)bVar96 + (ushort)*pbVar91 * 3;
        auVar20._4_2_ = (ushort)*pbVar57 + (ushort)*pbVar29 * 3;
        auVar20._6_2_ = (ushort)*pbVar59 + (ushort)*pbVar31 * 3;
        auVar20._8_2_ = (ushort)*pbVar61 + (ushort)*pbVar33 * 3;
        auVar20._10_2_ = (ushort)*pbVar63 + (ushort)*pbVar35 * 3;
        auVar20._12_2_ = (ushort)*pbVar65 + (ushort)*pbVar37 * 3;
        auVar20._14_2_ = (ushort)*pbVar67 + (ushort)*pbVar39 * 3;
        auVar128._8_8_ = in_q17._8_8_;
        auVar128._0_8_ = NEON_rshrn(in_q17._0_8_,auVar20,2,2);
        uVar23 = CONCAT12(bVar97,CONCAT11(bVar97,bVar96)) & 0xff00ff;
        sVar6 = (ushort)*pbVar42 + (ushort)*pbVar71 * 3;
        sVar7 = (ushort)*pbVar44 + (ushort)*pbVar73 * 3;
        sVar8 = (ushort)*pbVar46 + (ushort)*pbVar75 * 3;
        sVar9 = (ushort)*pbVar26 + (ushort)*pbVar77 * 3;
        sVar10 = (ushort)*pbVar49 + (ushort)*pbVar79 * 3;
        sVar11 = (ushort)*pbVar51 + (ushort)*pbVar81 * 3;
        sVar12 = (ushort)*pbVar53 + (ushort)*pbVar83 * 3;
        auVar15._2_2_ = (ushort)*pbVar71 + (ushort)*pbVar42 * 3;
        auVar15._0_2_ = (ushort)*pbVar69 + (ushort)*pbVar90 * 3;
        auVar15._4_2_ = (ushort)*pbVar73 + (ushort)*pbVar44 * 3;
        auVar15._6_2_ = (ushort)*pbVar75 + (ushort)*pbVar46 * 3;
        auVar15._8_2_ = (ushort)*pbVar77 + (ushort)*pbVar26 * 3;
        auVar15._10_2_ = (ushort)*pbVar79 + (ushort)*pbVar49 * 3;
        auVar15._12_2_ = (ushort)*pbVar81 + (ushort)*pbVar51 * 3;
        auVar15._14_2_ = (ushort)*pbVar83 + (ushort)*pbVar53 * 3;
        in_q17 = NEON_rshrn2(auVar128,auVar15,2,2);
        auVar131._8_8_ = in_q20._8_8_;
        auVar22._2_2_ = (ushort)bVar95 + (ushort)*pbVar56 * 3;
        auVar22._0_2_ = (ushort)*pbVar28 + (ushort)*pbVar55 * 3;
        auVar22._4_2_ = (ushort)*pbVar30 + (ushort)*pbVar58 * 3;
        auVar22._6_2_ = (ushort)*pbVar32 + (ushort)*pbVar60 * 3;
        auVar22._8_2_ = (ushort)*pbVar34 + (ushort)*pbVar62 * 3;
        auVar22._10_2_ = (ushort)*pbVar36 + (ushort)*pbVar64 * 3;
        auVar22._12_2_ = (ushort)*pbVar38 + (ushort)*pbVar66 * 3;
        auVar22._14_2_ = (ushort)*pbVar40 + (ushort)*pbVar68 * 3;
        auVar131._0_8_ = NEON_rshrn(in_q20._0_8_,auVar22,2,2);
        auVar18._2_2_ = (ushort)*pbVar43 + (ushort)*pbVar72 * 3;
        auVar18._0_2_ = (ushort)*pbVar41 + (ushort)*pbVar70 * 3;
        auVar18._4_2_ = (ushort)*pbVar45 + (ushort)*pbVar74 * 3;
        auVar18._6_2_ = (ushort)*pbVar47 + (ushort)*pbVar76 * 3;
        auVar18._8_2_ = (ushort)*pbVar48 + (ushort)*pbVar78 * 3;
        auVar18._10_2_ = (ushort)*pbVar50 + (ushort)*pbVar80 * 3;
        auVar18._12_2_ = (ushort)*pbVar52 + (ushort)*pbVar82 * 3;
        auVar18._14_2_ = (ushort)*pbVar54 + (ushort)*pbVar84 * 3;
        in_q20 = NEON_rshrn2(auVar131,auVar18,2,2);
        auVar21._2_2_ = (ushort)bVar94 + (ushort)(byte)(uVar23 >> 0x10) * 3;
        auVar21._0_2_ = (ushort)*pbVar91 + (short)uVar23 * 3;
        auVar21._4_2_ = (ushort)*pbVar29 + (ushort)*pbVar57 * 3;
        auVar21._6_2_ = (ushort)*pbVar31 + (ushort)*pbVar59 * 3;
        auVar21._8_2_ = (ushort)*pbVar33 + (ushort)*pbVar61 * 3;
        auVar21._10_2_ = (ushort)*pbVar35 + (ushort)*pbVar63 * 3;
        auVar21._12_2_ = (ushort)*pbVar37 + (ushort)*pbVar65 * 3;
        auVar21._14_2_ = (ushort)*pbVar39 + (ushort)*pbVar67 * 3;
        auVar130._8_8_ = in_q19._8_8_;
        auVar130._0_8_ = NEON_rshrn(in_q19._0_8_,auVar21,2,2);
        auVar3[2] = (char)sVar6;
        auVar3._0_2_ = (ushort)*pbVar90 + (ushort)*pbVar69 * 3;
        auVar3[3] = (char)((ushort)sVar6 >> 8);
        auVar3[4] = (char)sVar7;
        auVar3[5] = (char)((ushort)sVar7 >> 8);
        auVar3[6] = (char)sVar8;
        auVar3[7] = (char)((ushort)sVar8 >> 8);
        auVar3[8] = (char)sVar9;
        auVar3[9] = (char)((ushort)sVar9 >> 8);
        auVar3[10] = (char)sVar10;
        auVar3[0xb] = (char)((ushort)sVar10 >> 8);
        auVar3[0xc] = (char)sVar11;
        auVar3[0xd] = (char)((ushort)sVar11 >> 8);
        auVar3[0xe] = (char)sVar12;
        auVar3[0xf] = (char)((ushort)sVar12 >> 8);
        in_q19 = NEON_rshrn2(auVar130,auVar3,2,2);
        *puVar1 = in_q17[0];
        puVar1[1] = in_q18[0];
        puVar1[2] = in_q19[0];
        puVar1[3] = in_q20[0];
        puVar1[4] = in_q17[1];
        puVar1[5] = in_q18[1];
        puVar1[6] = in_q19[1];
        puVar1[7] = in_q20[1];
        puVar1[8] = in_q17[2];
        puVar1[9] = in_q18[2];
        puVar1[10] = in_q19[2];
        puVar1[0xb] = in_q20[2];
        puVar1[0xc] = in_q17[3];
        puVar1[0xd] = in_q18[3];
        puVar1[0xe] = in_q19[3];
        puVar1[0xf] = in_q20[3];
        puVar1[0x10] = in_q17[4];
        puVar1[0x11] = in_q18[4];
        puVar1[0x12] = in_q19[4];
        puVar1[0x13] = in_q20[4];
        puVar1[0x14] = in_q17[5];
        puVar1[0x15] = in_q18[5];
        puVar1[0x16] = in_q19[5];
        puVar1[0x17] = in_q20[5];
        puVar1[0x18] = in_q17[6];
        puVar1[0x19] = in_q18[6];
        puVar1[0x1a] = in_q19[6];
        puVar1[0x1b] = in_q20[6];
        puVar1[0x1c] = in_q17[7];
        puVar1[0x1d] = in_q18[7];
        puVar1[0x1e] = in_q19[7];
        puVar1[0x1f] = in_q20[7];
        puVar1[0x20] = in_q17[8];
        puVar1[0x21] = in_q18[8];
        puVar1[0x22] = in_q19[8];
        puVar1[0x23] = in_q20[8];
        puVar1[0x24] = in_q17[9];
        puVar1[0x25] = in_q18[9];
        puVar1[0x26] = in_q19[9];
        puVar1[0x27] = in_q20[9];
        puVar1[0x28] = in_q17[10];
        puVar1[0x29] = in_q18[10];
        puVar1[0x2a] = in_q19[10];
        puVar1[0x2b] = in_q20[10];
        puVar1[0x2c] = in_q17[0xb];
        puVar1[0x2d] = in_q18[0xb];
        puVar1[0x2e] = in_q19[0xb];
        puVar1[0x2f] = in_q20[0xb];
        puVar1[0x30] = in_q17[0xc];
        puVar1[0x31] = in_q18[0xc];
        puVar1[0x32] = in_q19[0xc];
        puVar1[0x33] = in_q20[0xc];
        puVar1[0x34] = in_q17[0xd];
        puVar1[0x35] = in_q18[0xd];
        puVar1[0x36] = in_q19[0xd];
        puVar1[0x37] = in_q20[0xd];
        puVar1[0x38] = in_q17[0xe];
        puVar1[0x39] = in_q18[0xe];
        puVar1[0x3a] = in_q19[0xe];
        puVar1[0x3b] = in_q20[0xe];
        puVar1[0x3c] = in_q17[0xf];
        puVar1[0x3d] = in_q18[0xf];
        puVar1[0x3e] = in_q19[0xf];
        puVar1[0x3f] = in_q20[0xf];
      } while ((uVar85 & 0x3ffffff0) * 4 - lVar89 != 0);
      if (uVar86 == uVar85) {
        return;
      }
      uVar87 = uVar86;
      if ((uVar2 >> 3 & 1) == 0) goto LAB_007c8a18;
    }
    uVar86 = uVar85 & 0x3ffffff8;
    iVar88 = (int)uVar87 << 2;
    lVar89 = uVar87 - uVar86;
    pbVar27 = (byte *)(param_1 + uVar87 * 2 + 2);
    do {
      pbVar90 = pbVar27 + -2;
      lVar89 = lVar89 + 8;
      bVar101 = pbVar27[-1];
      bVar94 = *pbVar27;
      uVar92 = CONCAT11(bVar94,*pbVar90);
      bVar102 = pbVar27[1];
      bVar95 = pbVar27[2];
      bVar103 = pbVar27[3];
      bVar96 = pbVar27[4];
      bVar104 = pbVar27[5];
      bVar97 = pbVar27[6];
      bVar105 = pbVar27[7];
      bVar98 = pbVar27[8];
      bVar106 = pbVar27[9];
      bVar99 = pbVar27[10];
      bVar107 = pbVar27[0xb];
      bVar100 = pbVar27[0xc];
      bVar108 = pbVar27[0xd];
      bVar109 = *pbVar27;
      pbVar26 = pbVar27 + 1;
      bVar112 = pbVar27[2];
      uVar110 = CONCAT11(bVar112,bVar109);
      bVar121 = pbVar27[3];
      uVar119 = CONCAT11(bVar121,*pbVar26);
      bVar113 = pbVar27[4];
      bVar122 = pbVar27[5];
      bVar114 = pbVar27[6];
      bVar123 = pbVar27[7];
      bVar115 = pbVar27[8];
      bVar124 = pbVar27[9];
      bVar116 = pbVar27[10];
      bVar125 = pbVar27[0xb];
      bVar117 = pbVar27[0xc];
      bVar126 = pbVar27[0xd];
      bVar118 = pbVar27[0xe];
      bVar127 = pbVar27[0xf];
      pbVar27 = pbVar27 + 0x10;
      puVar1 = (undefined1 *)(param_2 + (long)iVar88);
      iVar88 = iVar88 + 0x20;
      sVar6 = (ushort)bVar121 + (ushort)bVar102 * 3;
      sVar7 = (ushort)bVar122 + (ushort)bVar103 * 3;
      sVar8 = (ushort)bVar123 + (ushort)bVar104 * 3;
      sVar9 = (ushort)bVar124 + (ushort)bVar105 * 3;
      sVar10 = (ushort)bVar125 + (ushort)bVar106 * 3;
      sVar11 = (ushort)bVar126 + (ushort)bVar107 * 3;
      sVar12 = (ushort)bVar127 + (ushort)bVar108 * 3;
      uVar23 = CONCAT12(bVar94,uVar92) & 0xff00ff;
      uVar24 = CONCAT12(bVar121,uVar119) & 0xff00ff;
      uVar25 = CONCAT12(bVar112,uVar110) & 0xff00ff;
      auVar5[2] = (char)sVar6;
      auVar5._0_2_ = (ushort)*pbVar26 + (ushort)bVar101 * 3;
      auVar5[3] = (char)((ushort)sVar6 >> 8);
      auVar5[4] = (char)sVar7;
      auVar5[5] = (char)((ushort)sVar7 >> 8);
      auVar5[6] = (char)sVar8;
      auVar5[7] = (char)((ushort)sVar8 >> 8);
      auVar5[8] = (char)sVar9;
      auVar5[9] = (char)((ushort)sVar9 >> 8);
      auVar5[10] = (char)sVar10;
      auVar5[0xb] = (char)((ushort)sVar10 >> 8);
      auVar5[0xc] = (char)sVar11;
      auVar5[0xd] = (char)((ushort)sVar11 >> 8);
      auVar5[0xe] = (char)sVar12;
      auVar5[0xf] = (char)((ushort)sVar12 >> 8);
      uVar4 = NEON_rshrn(CONCAT17(bVar108,CONCAT16(bVar107,CONCAT15(bVar106,CONCAT14(bVar105,
                                                  CONCAT13(bVar104,CONCAT12(bVar103,CONCAT11(bVar102
                                                  ,bVar101))))))),auVar5,2,2);
      auVar13._2_2_ = (ushort)bVar112 + (ushort)(byte)(uVar23 >> 0x10) * 3;
      auVar13._0_2_ = (ushort)bVar109 + (short)uVar23 * 3;
      auVar13._4_2_ = (ushort)bVar113 + (ushort)bVar95 * 3;
      auVar13._6_2_ = (ushort)bVar114 + (ushort)bVar96 * 3;
      auVar13._8_2_ = (ushort)bVar115 + (ushort)bVar97 * 3;
      auVar13._10_2_ = (ushort)bVar116 + (ushort)bVar98 * 3;
      auVar13._12_2_ = (ushort)bVar117 + (ushort)bVar99 * 3;
      auVar13._14_2_ = (ushort)bVar118 + (ushort)bVar100 * 3;
      uVar93 = NEON_rshrn(CONCAT17(bVar100,CONCAT16(bVar99,CONCAT15(bVar98,CONCAT14(bVar97,CONCAT13(
                                                  bVar96,CONCAT12(bVar95,uVar92)))))),auVar13,2,2);
      auVar16._2_2_ = (ushort)bVar102 + (ushort)(byte)(uVar24 >> 0x10) * 3;
      auVar16._0_2_ = (ushort)bVar101 + (short)uVar24 * 3;
      auVar16._4_2_ = (ushort)bVar103 + (ushort)bVar122 * 3;
      auVar16._6_2_ = (ushort)bVar104 + (ushort)bVar123 * 3;
      auVar16._8_2_ = (ushort)bVar105 + (ushort)bVar124 * 3;
      auVar16._10_2_ = (ushort)bVar106 + (ushort)bVar125 * 3;
      auVar16._12_2_ = (ushort)bVar107 + (ushort)bVar126 * 3;
      auVar16._14_2_ = (ushort)bVar108 + (ushort)bVar127 * 3;
      uVar120 = NEON_rshrn(CONCAT17(bVar127,CONCAT16(bVar126,CONCAT15(bVar125,CONCAT14(bVar124,
                                                  CONCAT13(bVar123,CONCAT12(bVar122,uVar119)))))),
                           auVar16,2,2);
      auVar19._2_2_ = (ushort)bVar94 + (ushort)(byte)(uVar25 >> 0x10) * 3;
      auVar19._0_2_ = (ushort)*pbVar90 + (short)uVar25 * 3;
      auVar19._4_2_ = (ushort)bVar95 + (ushort)bVar113 * 3;
      auVar19._6_2_ = (ushort)bVar96 + (ushort)bVar114 * 3;
      auVar19._8_2_ = (ushort)bVar97 + (ushort)bVar115 * 3;
      auVar19._10_2_ = (ushort)bVar98 + (ushort)bVar116 * 3;
      auVar19._12_2_ = (ushort)bVar99 + (ushort)bVar117 * 3;
      auVar19._14_2_ = (ushort)bVar100 + (ushort)bVar118 * 3;
      uVar111 = NEON_rshrn(CONCAT17(bVar118,CONCAT16(bVar117,CONCAT15(bVar116,CONCAT14(bVar115,
                                                  CONCAT13(bVar114,CONCAT12(bVar113,uVar110)))))),
                           auVar19,2,2);
      *puVar1 = (char)uVar93;
      puVar1[1] = (char)uVar4;
      puVar1[2] = (char)uVar111;
      puVar1[3] = (char)uVar120;
      puVar1[4] = (char)((ulong)uVar93 >> 8);
      puVar1[5] = (char)((ulong)uVar4 >> 8);
      puVar1[6] = (char)((ulong)uVar111 >> 8);
      puVar1[7] = (char)((ulong)uVar120 >> 8);
      puVar1[8] = (char)((ulong)uVar93 >> 0x10);
      puVar1[9] = (char)((ulong)uVar4 >> 0x10);
      puVar1[10] = (char)((ulong)uVar111 >> 0x10);
      puVar1[0xb] = (char)((ulong)uVar120 >> 0x10);
      puVar1[0xc] = (char)((ulong)uVar93 >> 0x18);
      puVar1[0xd] = (char)((ulong)uVar4 >> 0x18);
      puVar1[0xe] = (char)((ulong)uVar111 >> 0x18);
      puVar1[0xf] = (char)((ulong)uVar120 >> 0x18);
      puVar1[0x10] = (char)((ulong)uVar93 >> 0x20);
      puVar1[0x11] = (char)((ulong)uVar4 >> 0x20);
      puVar1[0x12] = (char)((ulong)uVar111 >> 0x20);
      puVar1[0x13] = (char)((ulong)uVar120 >> 0x20);
      puVar1[0x14] = (char)((ulong)uVar93 >> 0x28);
      puVar1[0x15] = (char)((ulong)uVar4 >> 0x28);
      puVar1[0x16] = (char)((ulong)uVar111 >> 0x28);
      puVar1[0x17] = (char)((ulong)uVar120 >> 0x28);
      puVar1[0x18] = (char)((ulong)uVar93 >> 0x30);
      puVar1[0x19] = (char)((ulong)uVar4 >> 0x30);
      puVar1[0x1a] = (char)((ulong)uVar111 >> 0x30);
      puVar1[0x1b] = (char)((ulong)uVar120 >> 0x30);
      puVar1[0x1c] = (char)((ulong)uVar93 >> 0x38);
      puVar1[0x1d] = (char)((ulong)uVar4 >> 0x38);
      puVar1[0x1e] = (char)((ulong)uVar111 >> 0x38);
      puVar1[0x1f] = (char)((ulong)uVar120 >> 0x38);
    } while (lVar89 != 0);
    if (uVar86 == uVar85) {
      return;
    }
  }
LAB_007c8a18:
  iVar88 = (int)uVar86 << 2;
  lVar89 = uVar85 - uVar86;
  pbVar27 = (byte *)(param_1 + uVar86 * 2 + 3);
  do {
    lVar89 = lVar89 + -1;
    puVar1 = (undefined1 *)(param_2 + (long)iVar88);
    iVar88 = iVar88 + 4;
    *puVar1 = (char)((uint)pbVar27[-1] + (uint)pbVar27[-3] * 3 + 2 >> 2);
    puVar1[1] = (char)((uint)*pbVar27 + (uint)pbVar27[-2] * 3 + 2 >> 2);
    puVar1[2] = (char)((uint)pbVar27[-3] + (uint)pbVar27[-1] * 3 + 2 >> 2);
    bVar94 = *pbVar27;
    pbVar26 = pbVar27 + -2;
    pbVar27 = pbVar27 + 2;
    puVar1[3] = (char)((uint)*pbVar26 + (uint)bVar94 * 3 + 2 >> 2);
  } while (lVar89 != 0);
  return;
}


// ===== 007c8be0  FUN_007c8be0 =====

void FUN_007c8be0(byte *param_1,long param_2,byte *param_3,long param_4,int param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined1 auVar13 [16];
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  undefined1 auVar18 [16];
  short sVar19;
  short sVar20;
  uint3 uVar21;
  uint3 uVar22;
  uint3 uVar23;
  ulong uVar24;
  byte *pbVar25;
  uint uVar26;
  byte *pbVar27;
  ulong uVar28;
  long lVar29;
  byte *pbVar30;
  long lVar31;
  byte *pbVar32;
  byte *pbVar33;
  byte *pbVar34;
  byte *pbVar35;
  byte *pbVar36;
  ulong uVar37;
  long lVar38;
  byte *pbVar39;
  byte *pbVar40;
  short sVar41;
  short sVar42;
  short sVar43;
  short sVar44;
  byte bVar45;
  short sVar46;
  short sVar47;
  short sVar48;
  short sVar49;
  byte bVar51;
  undefined1 auVar50 [16];
  byte bVar52;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  undefined8 uVar54;
  undefined2 uVar62;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  undefined8 uVar63;
  undefined8 uVar71;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  short sVar76;
  short sVar82;
  undefined8 uVar77;
  short sVar80;
  short sVar81;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 in_q26 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 in_q27 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 in_q28 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 in_q29 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined2 uVar53;
  byte bVar64;
  
  uVar26 = param_5 >> 1;
  uVar24 = (ulong)uVar26;
  if ((int)uVar26 < 1) {
    return;
  }
  pbVar8 = param_3 + param_4;
  if (uVar26 < 8) {
    uVar28 = 0;
  }
  else {
    lVar31 = (uVar24 - 1) * 4;
    uVar28 = 0;
    if (((((param_3 + param_4 + 3 <= param_3 + param_4 + 3 + lVar31) &&
          (param_3 + param_4 + 2 <= param_3 + param_4 + 2 + lVar31)) &&
         (param_3 + param_4 + 1 <= param_3 + param_4 + 1 + lVar31)) &&
        ((pbVar8 <= pbVar8 + lVar31 && (param_3 + 3 <= param_3 + 3 + lVar31)))) &&
       (((param_3 + 2 <= param_3 + 2 + lVar31 &&
         ((param_3 + 1 <= param_3 + 1 + lVar31 && (param_3 <= param_3 + lVar31)))) &&
        (uVar24 - 1 >> 0x1d == 0)))) {
      pbVar33 = param_3 + 2;
      pbVar34 = param_3 + 3;
      pbVar36 = param_3 + param_4 + 1;
      pbVar35 = param_3 + param_4 + 2;
      pbVar9 = param_3 + uVar24 * 4;
      pbVar10 = param_3 + uVar24 * 4 + param_4;
      pbVar39 = pbVar9 + -1;
      pbVar30 = pbVar9 + -3;
      pbVar40 = pbVar10 + -2;
      pbVar1 = param_3 + param_4 + 3;
      pbVar11 = param_1 + uVar24 * 2;
      pbVar12 = param_1 + uVar24 * 2 + param_2;
      pbVar27 = pbVar10 + -3;
      pbVar2 = pbVar11 + 2;
      pbVar3 = param_3 + 1;
      pbVar32 = pbVar10 + -1;
      pbVar4 = pbVar12 + 2;
      pbVar5 = param_1 + param_2 + 2;
      pbVar6 = param_1 + param_2 + 1;
      pbVar7 = param_1 + param_2 + 3;
      pbVar25 = pbVar9 + -2;
      uVar28 = 0;
      if (((((((pbVar30 <= pbVar3 || pbVar25 <= param_3) &&
              (pbVar39 <= param_3 || pbVar30 <= pbVar33)) &&
             (pbVar9 <= param_3 || pbVar30 <= pbVar34)) &&
            (((((pbVar27 <= param_3 || pbVar30 <= pbVar8 &&
                (pbVar40 <= param_3 || pbVar30 <= pbVar36)) &&
               ((pbVar32 <= param_3 || pbVar30 <= pbVar35 &&
                ((pbVar10 <= param_3 || pbVar30 <= pbVar1 &&
                 (pbVar11 + -1 <= param_3 || pbVar30 <= param_1)))))) &&
              (pbVar11 + 1 <= param_3 || pbVar30 <= param_1 + 2)) &&
             ((((pbVar12 + -1 <= param_3 || pbVar30 <= param_1 + param_2 &&
                (pbVar12 + 1 <= param_3 || pbVar30 <= pbVar5)) &&
               (pbVar11 <= param_3 || pbVar30 <= param_1 + 1)) &&
              ((pbVar2 <= param_3 || pbVar30 <= param_1 + 3 &&
               (pbVar12 <= param_3 || pbVar30 <= pbVar6)))))))) &&
           (((pbVar4 <= param_3 || pbVar30 <= pbVar7 &&
             ((pbVar39 <= pbVar3 || pbVar25 <= pbVar33 && (pbVar9 <= pbVar3 || pbVar25 <= pbVar34)))
             ) && ((((pbVar27 <= pbVar3 || pbVar25 <= pbVar8 &&
                     ((((((pbVar40 <= pbVar3 || pbVar25 <= pbVar36 &&
                          (pbVar32 <= pbVar3 || pbVar25 <= pbVar35)) &&
                         (pbVar10 <= pbVar3 || pbVar25 <= pbVar1)) &&
                        ((pbVar11 + -1 <= pbVar3 || pbVar25 <= param_1 &&
                         (pbVar11 + 1 <= pbVar3 || pbVar25 <= param_1 + 2)))) &&
                       (pbVar12 + -1 <= pbVar3 || pbVar25 <= param_1 + param_2)) &&
                      ((pbVar12 + 1 <= pbVar3 || pbVar25 <= pbVar5 &&
                       (pbVar11 <= pbVar3 || pbVar25 <= param_1 + 1)))))) &&
                    (((((pbVar2 <= pbVar3 || pbVar25 <= param_1 + 3 &&
                        (((pbVar12 <= pbVar3 || pbVar25 <= pbVar6 &&
                          (pbVar4 <= pbVar3 || pbVar25 <= pbVar7)) &&
                         (pbVar9 <= pbVar33 || pbVar39 <= pbVar34)))) &&
                       (((pbVar27 <= pbVar33 || pbVar39 <= pbVar8 &&
                         (pbVar40 <= pbVar33 || pbVar39 <= pbVar36)) &&
                        (pbVar32 <= pbVar33 || pbVar39 <= pbVar35)))) &&
                      ((((pbVar10 <= pbVar33 || pbVar39 <= pbVar1 &&
                         (pbVar11 + -1 <= pbVar33 || pbVar39 <= param_1)) &&
                        ((((pbVar11 + 1 <= pbVar33 || pbVar39 <= param_1 + 2 &&
                           (((pbVar12 + -1 <= pbVar33 || pbVar39 <= param_1 + param_2 &&
                             (pbVar12 + 1 <= pbVar33 || pbVar39 <= pbVar5)) &&
                            (pbVar11 <= pbVar33 || pbVar39 <= param_1 + 1)))) &&
                          ((pbVar2 <= pbVar33 || pbVar39 <= param_1 + 3 &&
                           (pbVar12 <= pbVar33 || pbVar39 <= pbVar6)))) &&
                         (pbVar4 <= pbVar33 || pbVar39 <= pbVar7)))) &&
                       ((((pbVar27 <= pbVar34 || pbVar9 <= pbVar8 &&
                          (pbVar40 <= pbVar34 || pbVar9 <= pbVar36)) &&
                         ((pbVar32 <= pbVar34 || pbVar9 <= pbVar35 &&
                          ((((pbVar10 <= pbVar34 || pbVar9 <= pbVar1 &&
                             (pbVar11 + -1 <= pbVar34 || pbVar9 <= param_1)) &&
                            (pbVar11 + 1 <= pbVar34 || pbVar9 <= param_1 + 2)) &&
                           ((pbVar12 + -1 <= pbVar34 || pbVar9 <= param_1 + param_2 &&
                            (pbVar12 + 1 <= pbVar34 || pbVar9 <= pbVar5)))))))) &&
                        (pbVar11 <= pbVar34 || pbVar9 <= param_1 + 1)))))) &&
                     ((pbVar2 <= pbVar34 || pbVar9 <= param_1 + 3 &&
                      (pbVar12 <= pbVar34 || pbVar9 <= pbVar6)))))) &&
                   (((pbVar4 <= pbVar34 || pbVar9 <= pbVar7 &&
                     (((pbVar40 <= pbVar8 || pbVar27 <= pbVar36 &&
                       (pbVar32 <= pbVar8 || pbVar27 <= pbVar35)) &&
                      (pbVar10 <= pbVar8 || pbVar27 <= pbVar1)))) &&
                    (((((pbVar11 + -1 <= pbVar8 || pbVar27 <= param_1 &&
                        (pbVar11 + 1 <= pbVar8 || pbVar27 <= param_1 + 2)) &&
                       (pbVar12 + -1 <= pbVar8 || pbVar27 <= param_1 + param_2)) &&
                      ((pbVar12 + 1 <= pbVar8 || pbVar27 <= pbVar5 &&
                       (pbVar11 <= pbVar8 || pbVar27 <= param_1 + 1)))) &&
                     ((pbVar2 <= pbVar8 || pbVar27 <= param_1 + 3 &&
                      (((pbVar12 <= pbVar8 || pbVar27 <= pbVar6 &&
                        (pbVar4 <= pbVar8 || pbVar27 <= pbVar7)) &&
                       (pbVar32 <= pbVar36 || pbVar40 <= pbVar35)))))))))))))) &&
          (((pbVar10 <= pbVar36 || pbVar40 <= pbVar1 &&
            (pbVar11 + -1 <= pbVar36 || pbVar40 <= param_1)) &&
           ((pbVar11 + 1 <= pbVar36 || pbVar40 <= param_1 + 2 &&
            (((pbVar12 + -1 <= pbVar36 || pbVar40 <= param_1 + param_2 &&
              (pbVar12 + 1 <= pbVar36 || pbVar40 <= pbVar5)) &&
             ((pbVar11 <= pbVar36 || pbVar40 <= param_1 + 1 &&
              ((((pbVar2 <= pbVar36 || pbVar40 <= param_1 + 3 &&
                 (pbVar12 <= pbVar36 || pbVar40 <= pbVar6)) &&
                (pbVar4 <= pbVar36 || pbVar40 <= pbVar7)) &&
               ((pbVar10 <= pbVar35 || pbVar32 <= pbVar1 &&
                (pbVar11 + -1 <= pbVar35 || pbVar32 <= param_1)))))))))))))) &&
         ((((pbVar11 + 1 <= pbVar35 || pbVar32 <= param_1 + 2 &&
            ((pbVar12 + -1 <= pbVar35 || pbVar32 <= param_1 + param_2 &&
             (pbVar12 + 1 <= pbVar35 || pbVar32 <= pbVar5)))) &&
           (((pbVar11 <= pbVar35 || pbVar32 <= param_1 + 1 &&
             (((pbVar2 <= pbVar35 || pbVar32 <= param_1 + 3 &&
               (pbVar12 <= pbVar35 || pbVar32 <= pbVar6)) &&
              (pbVar4 <= pbVar35 || pbVar32 <= pbVar7)))) &&
            (((pbVar11 + -1 <= pbVar1 || pbVar10 <= param_1 &&
              (pbVar11 + 1 <= pbVar1 || pbVar10 <= param_1 + 2)) &&
             (pbVar12 + -1 <= pbVar1 || pbVar10 <= param_1 + param_2)))))) &&
          (((pbVar12 + 1 <= pbVar1 || pbVar10 <= pbVar5 &&
            (pbVar11 <= pbVar1 || pbVar10 <= param_1 + 1)) &&
           ((pbVar2 <= pbVar1 || pbVar10 <= param_1 + 3 &&
            ((pbVar12 <= pbVar1 || pbVar10 <= pbVar6 && (pbVar4 <= pbVar1 || pbVar10 <= pbVar7))))))
          )))) {
        if (uVar26 < 0x10) {
          uVar37 = 0;
        }
        else {
          lVar31 = 0;
          uVar28 = uVar24 & 0x7ffffff0;
          uVar37 = uVar24 & 0x7ffffff0;
          pbVar33 = param_1;
          do {
            lVar29 = lVar31 >> 0x20;
            pbVar36 = pbVar33 + param_2;
            bVar45 = pbVar33[2];
            pbVar34 = param_3 + lVar29;
            uVar37 = uVar37 - 0x10;
            lVar31 = lVar31 + 0x4000000000;
            bVar51 = pbVar36[2];
            bVar52 = pbVar36[4];
            bVar55 = pbVar36[5];
            auVar72 = NEON_umull(CONCAT17(pbVar33[0xf],
                                          CONCAT16(pbVar33[0xd],
                                                   CONCAT15(pbVar33[0xb],
                                                            CONCAT14(pbVar33[9],
                                                                     CONCAT13(pbVar33[7],
                                                                              CONCAT12(pbVar33[5],
                                                                                       CONCAT11(
                                                  pbVar33[3],pbVar33[1]))))))),0x909090909090909,1);
            auVar78 = NEON_umull(CONCAT17(pbVar33[0xe],
                                          CONCAT16(pbVar33[0xc],
                                                   CONCAT15(pbVar33[10],
                                                            CONCAT14(pbVar33[8],
                                                                     CONCAT13(pbVar33[6],
                                                                              CONCAT12(pbVar33[4],
                                                                                       CONCAT11(
                                                  pbVar33[2],*pbVar33))))))),0x909090909090909,1);
            auVar83 = NEON_umull(CONCAT17(pbVar33[0x11],
                                          CONCAT16(pbVar33[0xf],
                                                   CONCAT15(pbVar33[0xd],
                                                            CONCAT14(pbVar33[0xb],
                                                                     CONCAT13(pbVar33[9],
                                                                              CONCAT12(pbVar33[7],
                                                                                       CONCAT11(
                                                  pbVar33[5],pbVar33[3]))))))),0x909090909090909,1);
            uVar21 = CONCAT12(bVar55,CONCAT11(bVar55,pbVar36[3])) & 0xff00ff;
            uVar22 = CONCAT12(bVar52,CONCAT11(bVar52,bVar51)) & 0xff00ff;
            auVar89._0_2_ =
                 auVar72._0_2_ + (short)uVar21 + ((ushort)pbVar36[1] + (ushort)pbVar33[3]) * 3;
            auVar89._2_2_ =
                 auVar72._2_2_ + (ushort)(byte)(uVar21 >> 0x10) +
                 ((ushort)pbVar36[3] + (ushort)pbVar33[5]) * 3;
            auVar89._4_2_ =
                 auVar72._4_2_ + (ushort)pbVar36[7] + ((ushort)pbVar36[5] + (ushort)pbVar33[7]) * 3;
            auVar89._6_2_ =
                 auVar72._6_2_ + (ushort)pbVar36[9] + ((ushort)pbVar36[7] + (ushort)pbVar33[9]) * 3;
            auVar89._8_2_ =
                 auVar72._8_2_ + (ushort)pbVar36[0xb] +
                 ((ushort)pbVar36[9] + (ushort)pbVar33[0xb]) * 3;
            auVar89._10_2_ =
                 auVar72._10_2_ + (ushort)pbVar36[0xd] +
                 ((ushort)pbVar36[0xb] + (ushort)pbVar33[0xd]) * 3;
            auVar89._12_2_ =
                 auVar72._12_2_ + (ushort)pbVar36[0xf] +
                 ((ushort)pbVar36[0xd] + (ushort)pbVar33[0xf]) * 3;
            auVar89._14_2_ =
                 auVar72._14_2_ + (ushort)pbVar36[0x11] +
                 ((ushort)pbVar36[0xf] + (ushort)pbVar33[0x11]) * 3;
            auVar93._0_2_ = auVar78._0_2_ + (short)uVar22 + ((ushort)*pbVar36 + (ushort)bVar45) * 3;
            auVar93._2_2_ =
                 auVar78._2_2_ + (ushort)(byte)(uVar22 >> 0x10) +
                 ((ushort)pbVar36[2] + (ushort)pbVar33[4]) * 3;
            auVar93._4_2_ =
                 auVar78._4_2_ + (ushort)pbVar36[6] + ((ushort)pbVar36[4] + (ushort)pbVar33[6]) * 3;
            auVar93._6_2_ =
                 auVar78._6_2_ + (ushort)pbVar36[8] + ((ushort)pbVar36[6] + (ushort)pbVar33[8]) * 3;
            auVar93._8_2_ =
                 auVar78._8_2_ + (ushort)pbVar36[10] +
                 ((ushort)pbVar36[8] + (ushort)pbVar33[10]) * 3;
            auVar93._10_2_ =
                 auVar78._10_2_ + (ushort)pbVar36[0xc] +
                 ((ushort)pbVar36[10] + (ushort)pbVar33[0xc]) * 3;
            auVar93._12_2_ =
                 auVar78._12_2_ + (ushort)pbVar36[0xe] +
                 ((ushort)pbVar36[0xc] + (ushort)pbVar33[0xe]) * 3;
            auVar93._14_2_ =
                 auVar78._14_2_ + (ushort)pbVar36[0x10] +
                 ((ushort)pbVar36[0xe] + (ushort)pbVar33[0x10]) * 3;
            auVar86._0_2_ =
                 (ushort)pbVar36[0x13] + (ushort)pbVar33[0x11] * 9 +
                 ((ushort)pbVar36[0x11] + (ushort)pbVar33[0x13]) * 3;
            auVar86._2_2_ =
                 (ushort)pbVar36[0x15] + (ushort)pbVar33[0x13] * 9 +
                 ((ushort)pbVar36[0x13] + (ushort)pbVar33[0x15]) * 3;
            auVar86._4_2_ =
                 (ushort)pbVar36[0x17] + (ushort)pbVar33[0x15] * 9 +
                 ((ushort)pbVar36[0x15] + (ushort)pbVar33[0x17]) * 3;
            auVar86._6_2_ =
                 (ushort)pbVar36[0x19] + (ushort)pbVar33[0x17] * 9 +
                 ((ushort)pbVar36[0x17] + (ushort)pbVar33[0x19]) * 3;
            auVar86._8_2_ =
                 (ushort)pbVar36[0x1b] + (ushort)pbVar33[0x19] * 9 +
                 ((ushort)pbVar36[0x19] + (ushort)pbVar33[0x1b]) * 3;
            auVar86._10_2_ =
                 (ushort)pbVar36[0x1d] + (ushort)pbVar33[0x1b] * 9 +
                 ((ushort)pbVar36[0x1b] + (ushort)pbVar33[0x1d]) * 3;
            auVar86._12_2_ =
                 (ushort)pbVar36[0x1f] + (ushort)pbVar33[0x1d] * 9 +
                 ((ushort)pbVar36[0x1d] + (ushort)pbVar33[0x1f]) * 3;
            auVar86._14_2_ =
                 (ushort)pbVar36[0x21] + (ushort)pbVar33[0x1f] * 9 +
                 ((ushort)pbVar36[0x1f] + (ushort)pbVar33[0x21]) * 3;
            auVar100._8_8_ = in_q27._8_8_;
            auVar100._0_8_ = NEON_rshrn(in_q27._0_8_,auVar89,4,2);
            auVar96._0_2_ =
                 auVar83._0_2_ + (ushort)pbVar36[1] + ((ushort)pbVar36[3] + (ushort)pbVar33[1]) * 3;
            auVar96._2_2_ =
                 auVar83._2_2_ + (ushort)pbVar36[3] + ((ushort)bVar55 + (ushort)pbVar33[3]) * 3;
            auVar96._4_2_ =
                 auVar83._4_2_ + (ushort)pbVar36[5] + ((ushort)pbVar36[7] + (ushort)pbVar33[5]) * 3;
            auVar96._6_2_ =
                 auVar83._6_2_ + (ushort)pbVar36[7] + ((ushort)pbVar36[9] + (ushort)pbVar33[7]) * 3;
            auVar96._8_2_ =
                 auVar83._8_2_ + (ushort)pbVar36[9] +
                 ((ushort)pbVar36[0xb] + (ushort)pbVar33[9]) * 3;
            auVar96._10_2_ =
                 auVar83._10_2_ + (ushort)pbVar36[0xb] +
                 ((ushort)pbVar36[0xd] + (ushort)pbVar33[0xb]) * 3;
            auVar96._12_2_ =
                 auVar83._12_2_ + (ushort)pbVar36[0xd] +
                 ((ushort)pbVar36[0xf] + (ushort)pbVar33[0xd]) * 3;
            auVar96._14_2_ =
                 auVar83._14_2_ + (ushort)pbVar36[0xf] +
                 ((ushort)pbVar36[0x11] + (ushort)pbVar33[0xf]) * 3;
            auVar83 = NEON_rshrn2(auVar100,auVar86,4,2);
            auVar72 = NEON_umull(CONCAT17(pbVar33[0x10],
                                          CONCAT16(pbVar33[0xe],
                                                   CONCAT15(pbVar33[0xc],
                                                            CONCAT14(pbVar33[10],
                                                                     CONCAT13(pbVar33[8],
                                                                              CONCAT12(pbVar33[6],
                                                                                       CONCAT11(
                                                  pbVar33[4],bVar45))))))),0x909090909090909,1);
            auVar98._8_8_ = in_q26._8_8_;
            auVar98._0_8_ = NEON_rshrn(in_q26._0_8_,auVar93,4,2);
            auVar91._0_2_ =
                 (ushort)pbVar36[0x11] + (ushort)pbVar33[0x13] * 9 +
                 ((ushort)pbVar36[0x13] + (ushort)pbVar33[0x11]) * 3;
            auVar91._2_2_ =
                 (ushort)pbVar36[0x13] + (ushort)pbVar33[0x15] * 9 +
                 ((ushort)pbVar36[0x15] + (ushort)pbVar33[0x13]) * 3;
            auVar91._4_2_ =
                 (ushort)pbVar36[0x15] + (ushort)pbVar33[0x17] * 9 +
                 ((ushort)pbVar36[0x17] + (ushort)pbVar33[0x15]) * 3;
            auVar91._6_2_ =
                 (ushort)pbVar36[0x17] + (ushort)pbVar33[0x19] * 9 +
                 ((ushort)pbVar36[0x19] + (ushort)pbVar33[0x17]) * 3;
            auVar91._8_2_ =
                 (ushort)pbVar36[0x19] + (ushort)pbVar33[0x1b] * 9 +
                 ((ushort)pbVar36[0x1b] + (ushort)pbVar33[0x19]) * 3;
            auVar91._10_2_ =
                 (ushort)pbVar36[0x1b] + (ushort)pbVar33[0x1d] * 9 +
                 ((ushort)pbVar36[0x1d] + (ushort)pbVar33[0x1b]) * 3;
            auVar91._12_2_ =
                 (ushort)pbVar36[0x1d] + (ushort)pbVar33[0x1f] * 9 +
                 ((ushort)pbVar36[0x1f] + (ushort)pbVar33[0x1d]) * 3;
            auVar91._14_2_ =
                 (ushort)pbVar36[0x1f] + (ushort)pbVar33[0x21] * 9 +
                 ((ushort)pbVar36[0x21] + (ushort)pbVar33[0x1f]) * 3;
            auVar78._2_2_ =
                 (ushort)pbVar36[0x14] + (ushort)pbVar33[0x12] * 9 +
                 ((ushort)pbVar36[0x12] + (ushort)pbVar33[0x14]) * 3;
            auVar78._0_2_ =
                 (ushort)pbVar36[0x12] + (ushort)pbVar33[0x10] * 9 +
                 ((ushort)pbVar36[0x10] + (ushort)pbVar33[0x12]) * 3;
            auVar78._4_2_ =
                 (ushort)pbVar36[0x16] + (ushort)pbVar33[0x14] * 9 +
                 ((ushort)pbVar36[0x14] + (ushort)pbVar33[0x16]) * 3;
            auVar78._6_2_ =
                 (ushort)pbVar36[0x18] + (ushort)pbVar33[0x16] * 9 +
                 ((ushort)pbVar36[0x16] + (ushort)pbVar33[0x18]) * 3;
            auVar78._8_2_ =
                 (ushort)pbVar36[0x1a] + (ushort)pbVar33[0x18] * 9 +
                 ((ushort)pbVar36[0x18] + (ushort)pbVar33[0x1a]) * 3;
            auVar78._10_2_ =
                 (ushort)pbVar36[0x1c] + (ushort)pbVar33[0x1a] * 9 +
                 ((ushort)pbVar36[0x1a] + (ushort)pbVar33[0x1c]) * 3;
            auVar78._12_2_ =
                 (ushort)pbVar36[0x1e] + (ushort)pbVar33[0x1c] * 9 +
                 ((ushort)pbVar36[0x1c] + (ushort)pbVar33[0x1e]) * 3;
            auVar78._14_2_ =
                 (ushort)pbVar36[0x20] + (ushort)pbVar33[0x1e] * 9 +
                 ((ushort)pbVar36[0x1e] + (ushort)pbVar33[0x20]) * 3;
            auVar78 = NEON_rshrn2(auVar98,auVar78,4,2);
            auVar104._8_8_ = in_q29._8_8_;
            auVar104._0_8_ = NEON_rshrn(in_q29._0_8_,auVar96,4,2);
            auVar75._0_2_ =
                 auVar72._0_2_ + (ushort)*pbVar36 + ((ushort)bVar51 + (ushort)*pbVar33) * 3;
            auVar75._2_2_ =
                 auVar72._2_2_ + (ushort)pbVar36[2] + ((ushort)bVar52 + (ushort)pbVar33[2]) * 3;
            auVar75._4_2_ =
                 auVar72._4_2_ + (ushort)pbVar36[4] + ((ushort)pbVar36[6] + (ushort)pbVar33[4]) * 3;
            auVar75._6_2_ =
                 auVar72._6_2_ + (ushort)pbVar36[6] + ((ushort)pbVar36[8] + (ushort)pbVar33[6]) * 3;
            auVar75._8_2_ =
                 auVar72._8_2_ + (ushort)pbVar36[8] + ((ushort)pbVar36[10] + (ushort)pbVar33[8]) * 3
            ;
            auVar75._10_2_ =
                 auVar72._10_2_ + (ushort)pbVar36[10] +
                 ((ushort)pbVar36[0xc] + (ushort)pbVar33[10]) * 3;
            auVar75._12_2_ =
                 auVar72._12_2_ + (ushort)pbVar36[0xc] +
                 ((ushort)pbVar36[0xe] + (ushort)pbVar33[0xc]) * 3;
            auVar75._14_2_ =
                 auVar72._14_2_ + (ushort)pbVar36[0xe] +
                 ((ushort)pbVar36[0x10] + (ushort)pbVar33[0xe]) * 3;
            auVar94._0_2_ =
                 (ushort)pbVar36[0x10] + (ushort)pbVar33[0x12] * 9 +
                 ((ushort)pbVar36[0x12] + (ushort)pbVar33[0x10]) * 3;
            auVar94._2_2_ =
                 (ushort)pbVar36[0x12] + (ushort)pbVar33[0x14] * 9 +
                 ((ushort)pbVar36[0x14] + (ushort)pbVar33[0x12]) * 3;
            auVar94._4_2_ =
                 (ushort)pbVar36[0x14] + (ushort)pbVar33[0x16] * 9 +
                 ((ushort)pbVar36[0x16] + (ushort)pbVar33[0x14]) * 3;
            auVar94._6_2_ =
                 (ushort)pbVar36[0x16] + (ushort)pbVar33[0x18] * 9 +
                 ((ushort)pbVar36[0x18] + (ushort)pbVar33[0x16]) * 3;
            auVar94._8_2_ =
                 (ushort)pbVar36[0x18] + (ushort)pbVar33[0x1a] * 9 +
                 ((ushort)pbVar36[0x1a] + (ushort)pbVar33[0x18]) * 3;
            auVar94._10_2_ =
                 (ushort)pbVar36[0x1a] + (ushort)pbVar33[0x1c] * 9 +
                 ((ushort)pbVar36[0x1c] + (ushort)pbVar33[0x1a]) * 3;
            auVar94._12_2_ =
                 (ushort)pbVar36[0x1c] + (ushort)pbVar33[0x1e] * 9 +
                 ((ushort)pbVar36[0x1e] + (ushort)pbVar33[0x1c]) * 3;
            auVar94._14_2_ =
                 (ushort)pbVar36[0x1e] + (ushort)pbVar33[0x20] * 9 +
                 ((ushort)pbVar36[0x20] + (ushort)pbVar33[0x1e]) * 3;
            auVar89 = NEON_rshrn2(auVar104,auVar91,4,2);
            auVar102._8_8_ = in_q28._8_8_;
            auVar102._0_8_ = NEON_rshrn(in_q28._0_8_,auVar75,4,2);
            auVar72 = NEON_rshrn2(auVar102,auVar94,4,2);
            *pbVar34 = auVar78[0];
            pbVar34[1] = auVar83[0];
            pbVar34[2] = auVar72[0];
            pbVar34[3] = auVar89[0];
            pbVar34[4] = auVar78[1];
            pbVar34[5] = auVar83[1];
            pbVar34[6] = auVar72[1];
            pbVar34[7] = auVar89[1];
            pbVar34[8] = auVar78[2];
            pbVar34[9] = auVar83[2];
            pbVar34[10] = auVar72[2];
            pbVar34[0xb] = auVar89[2];
            pbVar34[0xc] = auVar78[3];
            pbVar34[0xd] = auVar83[3];
            pbVar34[0xe] = auVar72[3];
            pbVar34[0xf] = auVar89[3];
            pbVar34[0x10] = auVar78[4];
            pbVar34[0x11] = auVar83[4];
            pbVar34[0x12] = auVar72[4];
            pbVar34[0x13] = auVar89[4];
            pbVar34[0x14] = auVar78[5];
            pbVar34[0x15] = auVar83[5];
            pbVar34[0x16] = auVar72[5];
            pbVar34[0x17] = auVar89[5];
            pbVar34[0x18] = auVar78[6];
            pbVar34[0x19] = auVar83[6];
            pbVar34[0x1a] = auVar72[6];
            pbVar34[0x1b] = auVar89[6];
            pbVar34[0x1c] = auVar78[7];
            pbVar34[0x1d] = auVar83[7];
            pbVar34[0x1e] = auVar72[7];
            pbVar34[0x1f] = auVar89[7];
            pbVar34[0x20] = auVar78[8];
            pbVar34[0x21] = auVar83[8];
            pbVar34[0x22] = auVar72[8];
            pbVar34[0x23] = auVar89[8];
            pbVar34[0x24] = auVar78[9];
            pbVar34[0x25] = auVar83[9];
            pbVar34[0x26] = auVar72[9];
            pbVar34[0x27] = auVar89[9];
            pbVar34[0x28] = auVar78[10];
            pbVar34[0x29] = auVar83[10];
            pbVar34[0x2a] = auVar72[10];
            pbVar34[0x2b] = auVar89[10];
            pbVar34[0x2c] = auVar78[0xb];
            pbVar34[0x2d] = auVar83[0xb];
            pbVar34[0x2e] = auVar72[0xb];
            pbVar34[0x2f] = auVar89[0xb];
            pbVar34[0x30] = auVar78[0xc];
            pbVar34[0x31] = auVar83[0xc];
            pbVar34[0x32] = auVar72[0xc];
            pbVar34[0x33] = auVar89[0xc];
            pbVar34[0x34] = auVar78[0xd];
            pbVar34[0x35] = auVar83[0xd];
            pbVar34[0x36] = auVar72[0xd];
            pbVar34[0x37] = auVar89[0xd];
            pbVar34[0x38] = auVar78[0xe];
            pbVar34[0x39] = auVar83[0xe];
            pbVar34[0x3a] = auVar72[0xe];
            pbVar34[0x3b] = auVar89[0xe];
            pbVar34[0x3c] = auVar78[0xf];
            pbVar34[0x3d] = auVar83[0xf];
            pbVar34[0x3e] = auVar72[0xf];
            pbVar34[0x3f] = auVar89[0xf];
            bVar45 = pbVar33[2];
            bVar51 = pbVar36[2];
            bVar52 = pbVar36[3];
            bVar55 = pbVar36[2];
            pbVar34 = pbVar8 + lVar29;
            uVar21 = CONCAT12(bVar52,CONCAT11(bVar52,pbVar36[1])) & 0xff00ff;
            uVar22 = CONCAT12(bVar51,CONCAT11(bVar51,*pbVar36)) & 0xff00ff;
            auVar50._0_2_ =
                 (ushort)pbVar33[3] + (short)uVar21 * 9 +
                 ((ushort)pbVar36[3] + (ushort)pbVar33[1]) * 3;
            auVar50._2_2_ =
                 (ushort)pbVar33[5] + (ushort)(byte)(uVar21 >> 0x10) * 9 +
                 ((ushort)pbVar36[5] + (ushort)pbVar33[3]) * 3;
            auVar50._4_2_ =
                 (ushort)pbVar33[7] + (ushort)pbVar36[5] * 9 +
                 ((ushort)pbVar36[7] + (ushort)pbVar33[5]) * 3;
            auVar50._6_2_ =
                 (ushort)pbVar33[9] + (ushort)pbVar36[7] * 9 +
                 ((ushort)pbVar36[9] + (ushort)pbVar33[7]) * 3;
            auVar50._8_2_ =
                 (ushort)pbVar33[0xb] + (ushort)pbVar36[9] * 9 +
                 ((ushort)pbVar36[0xb] + (ushort)pbVar33[9]) * 3;
            auVar50._10_2_ =
                 (ushort)pbVar33[0xd] + (ushort)pbVar36[0xb] * 9 +
                 ((ushort)pbVar36[0xd] + (ushort)pbVar33[0xb]) * 3;
            auVar50._12_2_ =
                 (ushort)pbVar33[0xf] + (ushort)pbVar36[0xd] * 9 +
                 ((ushort)pbVar36[0xf] + (ushort)pbVar33[0xd]) * 3;
            auVar50._14_2_ =
                 (ushort)pbVar33[0x11] + (ushort)pbVar36[0xf] * 9 +
                 ((ushort)pbVar36[0x11] + (ushort)pbVar33[0xf]) * 3;
            auVar95._0_2_ =
                 (ushort)bVar45 + (short)uVar22 * 9 + ((ushort)bVar55 + (ushort)*pbVar33) * 3;
            auVar95._2_2_ =
                 (ushort)pbVar33[4] + (ushort)(byte)(uVar22 >> 0x10) * 9 +
                 ((ushort)pbVar36[4] + (ushort)pbVar33[2]) * 3;
            auVar95._4_2_ =
                 (ushort)pbVar33[6] + (ushort)pbVar36[4] * 9 +
                 ((ushort)pbVar36[6] + (ushort)pbVar33[4]) * 3;
            auVar95._6_2_ =
                 (ushort)pbVar33[8] + (ushort)pbVar36[6] * 9 +
                 ((ushort)pbVar36[8] + (ushort)pbVar33[6]) * 3;
            auVar95._8_2_ =
                 (ushort)pbVar33[10] + (ushort)pbVar36[8] * 9 +
                 ((ushort)pbVar36[10] + (ushort)pbVar33[8]) * 3;
            auVar95._10_2_ =
                 (ushort)pbVar33[0xc] + (ushort)pbVar36[10] * 9 +
                 ((ushort)pbVar36[0xc] + (ushort)pbVar33[10]) * 3;
            auVar95._12_2_ =
                 (ushort)pbVar33[0xe] + (ushort)pbVar36[0xc] * 9 +
                 ((ushort)pbVar36[0xe] + (ushort)pbVar33[0xc]) * 3;
            auVar95._14_2_ =
                 (ushort)pbVar33[0x10] + (ushort)pbVar36[0xe] * 9 +
                 ((ushort)pbVar36[0x10] + (ushort)pbVar33[0xe]) * 3;
            auVar87._0_2_ =
                 (ushort)pbVar33[0x13] + (ushort)pbVar36[0x11] * 9 +
                 ((ushort)pbVar36[0x13] + (ushort)pbVar33[0x11]) * 3;
            auVar87._2_2_ =
                 (ushort)pbVar33[0x15] + (ushort)pbVar36[0x13] * 9 +
                 ((ushort)pbVar36[0x15] + (ushort)pbVar33[0x13]) * 3;
            auVar87._4_2_ =
                 (ushort)pbVar33[0x17] + (ushort)pbVar36[0x15] * 9 +
                 ((ushort)pbVar36[0x17] + (ushort)pbVar33[0x15]) * 3;
            auVar87._6_2_ =
                 (ushort)pbVar33[0x19] + (ushort)pbVar36[0x17] * 9 +
                 ((ushort)pbVar36[0x19] + (ushort)pbVar33[0x17]) * 3;
            auVar87._8_2_ =
                 (ushort)pbVar33[0x1b] + (ushort)pbVar36[0x19] * 9 +
                 ((ushort)pbVar36[0x1b] + (ushort)pbVar33[0x19]) * 3;
            auVar87._10_2_ =
                 (ushort)pbVar33[0x1d] + (ushort)pbVar36[0x1b] * 9 +
                 ((ushort)pbVar36[0x1d] + (ushort)pbVar33[0x1b]) * 3;
            auVar87._12_2_ =
                 (ushort)pbVar33[0x1f] + (ushort)pbVar36[0x1d] * 9 +
                 ((ushort)pbVar36[0x1f] + (ushort)pbVar33[0x1d]) * 3;
            auVar87._14_2_ =
                 (ushort)pbVar33[0x21] + (ushort)pbVar36[0x1f] * 9 +
                 ((ushort)pbVar36[0x21] + (ushort)pbVar33[0x1f]) * 3;
            auVar101._8_8_ = auVar83._8_8_;
            auVar101._0_8_ = NEON_rshrn(auVar83._0_8_,auVar50,4,2);
            auVar97._0_2_ =
                 (ushort)pbVar33[1] + (ushort)pbVar36[3] * 9 +
                 ((ushort)pbVar36[1] + (ushort)pbVar33[3]) * 3;
            auVar97._2_2_ =
                 (ushort)pbVar33[3] + (ushort)pbVar36[5] * 9 +
                 ((ushort)bVar52 + (ushort)pbVar33[5]) * 3;
            auVar97._4_2_ =
                 (ushort)pbVar33[5] + (ushort)pbVar36[7] * 9 +
                 ((ushort)pbVar36[5] + (ushort)pbVar33[7]) * 3;
            auVar97._6_2_ =
                 (ushort)pbVar33[7] + (ushort)pbVar36[9] * 9 +
                 ((ushort)pbVar36[7] + (ushort)pbVar33[9]) * 3;
            auVar97._8_2_ =
                 (ushort)pbVar33[9] + (ushort)pbVar36[0xb] * 9 +
                 ((ushort)pbVar36[9] + (ushort)pbVar33[0xb]) * 3;
            auVar97._10_2_ =
                 (ushort)pbVar33[0xb] + (ushort)pbVar36[0xd] * 9 +
                 ((ushort)pbVar36[0xb] + (ushort)pbVar33[0xd]) * 3;
            auVar97._12_2_ =
                 (ushort)pbVar33[0xd] + (ushort)pbVar36[0xf] * 9 +
                 ((ushort)pbVar36[0xd] + (ushort)pbVar33[0xf]) * 3;
            auVar97._14_2_ =
                 (ushort)pbVar33[0xf] + (ushort)pbVar36[0x11] * 9 +
                 ((ushort)pbVar36[0xf] + (ushort)pbVar33[0x11]) * 3;
            in_q27 = NEON_rshrn2(auVar101,auVar87,4,2);
            auVar99._8_8_ = auVar78._8_8_;
            auVar99._0_8_ = NEON_rshrn(auVar78._0_8_,auVar95,4,2);
            auVar92._0_2_ =
                 (ushort)pbVar33[0x11] + (ushort)pbVar36[0x13] * 9 +
                 ((ushort)pbVar36[0x11] + (ushort)pbVar33[0x13]) * 3;
            auVar92._2_2_ =
                 (ushort)pbVar33[0x13] + (ushort)pbVar36[0x15] * 9 +
                 ((ushort)pbVar36[0x13] + (ushort)pbVar33[0x15]) * 3;
            auVar92._4_2_ =
                 (ushort)pbVar33[0x15] + (ushort)pbVar36[0x17] * 9 +
                 ((ushort)pbVar36[0x15] + (ushort)pbVar33[0x17]) * 3;
            auVar92._6_2_ =
                 (ushort)pbVar33[0x17] + (ushort)pbVar36[0x19] * 9 +
                 ((ushort)pbVar36[0x17] + (ushort)pbVar33[0x19]) * 3;
            auVar92._8_2_ =
                 (ushort)pbVar33[0x19] + (ushort)pbVar36[0x1b] * 9 +
                 ((ushort)pbVar36[0x19] + (ushort)pbVar33[0x1b]) * 3;
            auVar92._10_2_ =
                 (ushort)pbVar33[0x1b] + (ushort)pbVar36[0x1d] * 9 +
                 ((ushort)pbVar36[0x1b] + (ushort)pbVar33[0x1d]) * 3;
            auVar92._12_2_ =
                 (ushort)pbVar33[0x1d] + (ushort)pbVar36[0x1f] * 9 +
                 ((ushort)pbVar36[0x1d] + (ushort)pbVar33[0x1f]) * 3;
            auVar92._14_2_ =
                 (ushort)pbVar33[0x1f] + (ushort)pbVar36[0x21] * 9 +
                 ((ushort)pbVar36[0x1f] + (ushort)pbVar33[0x21]) * 3;
            auVar83._2_2_ =
                 (ushort)pbVar33[0x14] + (ushort)pbVar36[0x12] * 9 +
                 ((ushort)pbVar36[0x14] + (ushort)pbVar33[0x12]) * 3;
            auVar83._0_2_ =
                 (ushort)pbVar33[0x12] + (ushort)pbVar36[0x10] * 9 +
                 ((ushort)pbVar36[0x12] + (ushort)pbVar33[0x10]) * 3;
            auVar83._4_2_ =
                 (ushort)pbVar33[0x16] + (ushort)pbVar36[0x14] * 9 +
                 ((ushort)pbVar36[0x16] + (ushort)pbVar33[0x14]) * 3;
            auVar83._6_2_ =
                 (ushort)pbVar33[0x18] + (ushort)pbVar36[0x16] * 9 +
                 ((ushort)pbVar36[0x18] + (ushort)pbVar33[0x16]) * 3;
            auVar83._8_2_ =
                 (ushort)pbVar33[0x1a] + (ushort)pbVar36[0x18] * 9 +
                 ((ushort)pbVar36[0x1a] + (ushort)pbVar33[0x18]) * 3;
            auVar83._10_2_ =
                 (ushort)pbVar33[0x1c] + (ushort)pbVar36[0x1a] * 9 +
                 ((ushort)pbVar36[0x1c] + (ushort)pbVar33[0x1a]) * 3;
            auVar83._12_2_ =
                 (ushort)pbVar33[0x1e] + (ushort)pbVar36[0x1c] * 9 +
                 ((ushort)pbVar36[0x1e] + (ushort)pbVar33[0x1c]) * 3;
            auVar83._14_2_ =
                 (ushort)pbVar33[0x20] + (ushort)pbVar36[0x1e] * 9 +
                 ((ushort)pbVar36[0x20] + (ushort)pbVar33[0x1e]) * 3;
            in_q26 = NEON_rshrn2(auVar99,auVar83,4,2);
            auVar105._8_8_ = auVar89._8_8_;
            auVar105._0_8_ = NEON_rshrn(auVar89._0_8_,auVar97,4,2);
            auVar88._0_2_ =
                 (ushort)*pbVar33 + (ushort)bVar55 * 9 + ((ushort)*pbVar36 + (ushort)bVar45) * 3;
            auVar88._2_2_ =
                 (ushort)pbVar33[2] + (ushort)pbVar36[4] * 9 +
                 ((ushort)bVar51 + (ushort)pbVar33[4]) * 3;
            auVar88._4_2_ =
                 (ushort)pbVar33[4] + (ushort)pbVar36[6] * 9 +
                 ((ushort)pbVar36[4] + (ushort)pbVar33[6]) * 3;
            auVar88._6_2_ =
                 (ushort)pbVar33[6] + (ushort)pbVar36[8] * 9 +
                 ((ushort)pbVar36[6] + (ushort)pbVar33[8]) * 3;
            auVar88._8_2_ =
                 (ushort)pbVar33[8] + (ushort)pbVar36[10] * 9 +
                 ((ushort)pbVar36[8] + (ushort)pbVar33[10]) * 3;
            auVar88._10_2_ =
                 (ushort)pbVar33[10] + (ushort)pbVar36[0xc] * 9 +
                 ((ushort)pbVar36[10] + (ushort)pbVar33[0xc]) * 3;
            auVar88._12_2_ =
                 (ushort)pbVar33[0xc] + (ushort)pbVar36[0xe] * 9 +
                 ((ushort)pbVar36[0xc] + (ushort)pbVar33[0xe]) * 3;
            auVar88._14_2_ =
                 (ushort)pbVar33[0xe] + (ushort)pbVar36[0x10] * 9 +
                 ((ushort)pbVar36[0xe] + (ushort)pbVar33[0x10]) * 3;
            sVar14 = (ushort)pbVar33[0x12] + (ushort)pbVar36[0x14] * 9 +
                     ((ushort)pbVar36[0x12] + (ushort)pbVar33[0x14]) * 3;
            sVar15 = (ushort)pbVar33[0x14] + (ushort)pbVar36[0x16] * 9 +
                     ((ushort)pbVar36[0x14] + (ushort)pbVar33[0x16]) * 3;
            sVar16 = (ushort)pbVar33[0x16] + (ushort)pbVar36[0x18] * 9 +
                     ((ushort)pbVar36[0x16] + (ushort)pbVar33[0x18]) * 3;
            sVar17 = (ushort)pbVar33[0x18] + (ushort)pbVar36[0x1a] * 9 +
                     ((ushort)pbVar36[0x18] + (ushort)pbVar33[0x1a]) * 3;
            sVar41 = (ushort)pbVar33[0x1a] + (ushort)pbVar36[0x1c] * 9 +
                     ((ushort)pbVar36[0x1a] + (ushort)pbVar33[0x1c]) * 3;
            sVar42 = (ushort)pbVar33[0x1c] + (ushort)pbVar36[0x1e] * 9 +
                     ((ushort)pbVar36[0x1c] + (ushort)pbVar33[0x1e]) * 3;
            sVar43 = (ushort)pbVar33[0x1e] + (ushort)pbVar36[0x20] * 9 +
                     ((ushort)pbVar36[0x1e] + (ushort)pbVar33[0x20]) * 3;
            in_q29 = NEON_rshrn2(auVar105,auVar92,4,2);
            auVar103._8_8_ = auVar72._8_8_;
            auVar103._0_8_ = NEON_rshrn(auVar72._0_8_,auVar88,4,2);
            auVar72[2] = (char)sVar14;
            auVar72._0_2_ =
                 (ushort)pbVar33[0x10] + (ushort)pbVar36[0x12] * 9 +
                 ((ushort)pbVar36[0x10] + (ushort)pbVar33[0x12]) * 3;
            auVar72[3] = (char)((ushort)sVar14 >> 8);
            auVar72[4] = (char)sVar15;
            auVar72[5] = (char)((ushort)sVar15 >> 8);
            auVar72[6] = (char)sVar16;
            auVar72[7] = (char)((ushort)sVar16 >> 8);
            auVar72[8] = (char)sVar17;
            auVar72[9] = (char)((ushort)sVar17 >> 8);
            auVar72[10] = (char)sVar41;
            auVar72[0xb] = (char)((ushort)sVar41 >> 8);
            auVar72[0xc] = (char)sVar42;
            auVar72[0xd] = (char)((ushort)sVar42 >> 8);
            auVar72[0xe] = (char)sVar43;
            auVar72[0xf] = (char)((ushort)sVar43 >> 8);
            in_q28 = NEON_rshrn2(auVar103,auVar72,4,2);
            *pbVar34 = in_q26[0];
            pbVar34[1] = in_q27[0];
            pbVar34[2] = in_q28[0];
            pbVar34[3] = in_q29[0];
            pbVar34[4] = in_q26[1];
            pbVar34[5] = in_q27[1];
            pbVar34[6] = in_q28[1];
            pbVar34[7] = in_q29[1];
            pbVar34[8] = in_q26[2];
            pbVar34[9] = in_q27[2];
            pbVar34[10] = in_q28[2];
            pbVar34[0xb] = in_q29[2];
            pbVar34[0xc] = in_q26[3];
            pbVar34[0xd] = in_q27[3];
            pbVar34[0xe] = in_q28[3];
            pbVar34[0xf] = in_q29[3];
            pbVar34[0x10] = in_q26[4];
            pbVar34[0x11] = in_q27[4];
            pbVar34[0x12] = in_q28[4];
            pbVar34[0x13] = in_q29[4];
            pbVar34[0x14] = in_q26[5];
            pbVar34[0x15] = in_q27[5];
            pbVar34[0x16] = in_q28[5];
            pbVar34[0x17] = in_q29[5];
            pbVar34[0x18] = in_q26[6];
            pbVar34[0x19] = in_q27[6];
            pbVar34[0x1a] = in_q28[6];
            pbVar34[0x1b] = in_q29[6];
            pbVar34[0x1c] = in_q26[7];
            pbVar34[0x1d] = in_q27[7];
            pbVar34[0x1e] = in_q28[7];
            pbVar34[0x1f] = in_q29[7];
            pbVar34[0x20] = in_q26[8];
            pbVar34[0x21] = in_q27[8];
            pbVar34[0x22] = in_q28[8];
            pbVar34[0x23] = in_q29[8];
            pbVar34[0x24] = in_q26[9];
            pbVar34[0x25] = in_q27[9];
            pbVar34[0x26] = in_q28[9];
            pbVar34[0x27] = in_q29[9];
            pbVar34[0x28] = in_q26[10];
            pbVar34[0x29] = in_q27[10];
            pbVar34[0x2a] = in_q28[10];
            pbVar34[0x2b] = in_q29[10];
            pbVar34[0x2c] = in_q26[0xb];
            pbVar34[0x2d] = in_q27[0xb];
            pbVar34[0x2e] = in_q28[0xb];
            pbVar34[0x2f] = in_q29[0xb];
            pbVar34[0x30] = in_q26[0xc];
            pbVar34[0x31] = in_q27[0xc];
            pbVar34[0x32] = in_q28[0xc];
            pbVar34[0x33] = in_q29[0xc];
            pbVar34[0x34] = in_q26[0xd];
            pbVar34[0x35] = in_q27[0xd];
            pbVar34[0x36] = in_q28[0xd];
            pbVar34[0x37] = in_q29[0xd];
            pbVar34[0x38] = in_q26[0xe];
            pbVar34[0x39] = in_q27[0xe];
            pbVar34[0x3a] = in_q28[0xe];
            pbVar34[0x3b] = in_q29[0xe];
            pbVar34[0x3c] = in_q26[0xf];
            pbVar34[0x3d] = in_q27[0xf];
            pbVar34[0x3e] = in_q28[0xf];
            pbVar34[0x3f] = in_q29[0xf];
            pbVar33 = pbVar33 + 0x20;
          } while (uVar37 != 0);
          if (uVar28 == uVar24) {
            return;
          }
          uVar37 = uVar28;
          if ((uVar26 >> 3 & 1) == 0) goto LAB_007c8c20;
        }
        uVar28 = uVar24 & 0x7ffffff8;
        lVar29 = uVar37 << 0x22;
        lVar31 = uVar37 - uVar28;
        pbVar33 = param_1 + uVar37 * 2;
        do {
          lVar38 = lVar29 >> 0x20;
          pbVar36 = pbVar33 + param_2;
          bVar45 = pbVar33[2];
          bVar51 = pbVar36[3];
          pbVar34 = param_3 + lVar38;
          bVar52 = pbVar36[2];
          bVar55 = pbVar36[4];
          uVar53 = CONCAT11(bVar55,bVar52);
          bVar64 = pbVar36[5];
          uVar62 = CONCAT11(bVar64,pbVar36[3]);
          bVar56 = pbVar36[6];
          bVar65 = pbVar36[7];
          bVar57 = pbVar36[8];
          bVar66 = pbVar36[9];
          bVar58 = pbVar36[10];
          bVar67 = pbVar36[0xb];
          bVar59 = pbVar36[0xc];
          bVar68 = pbVar36[0xd];
          bVar60 = pbVar36[0xe];
          bVar69 = pbVar36[0xf];
          bVar61 = pbVar36[0x10];
          bVar70 = pbVar36[0x11];
          lVar31 = lVar31 + 8;
          lVar29 = lVar29 + 0x2000000000;
          auVar72 = NEON_umull(CONCAT17(pbVar33[0xf],
                                        CONCAT16(pbVar33[0xd],
                                                 CONCAT15(pbVar33[0xb],
                                                          CONCAT14(pbVar33[9],
                                                                   CONCAT13(pbVar33[7],
                                                                            CONCAT12(pbVar33[5],
                                                                                     CONCAT11(
                                                  pbVar33[3],pbVar33[1]))))))),0x909090909090909,1);
          auVar78 = NEON_umull(CONCAT17(pbVar33[0xe],
                                        CONCAT16(pbVar33[0xc],
                                                 CONCAT15(pbVar33[10],
                                                          CONCAT14(pbVar33[8],
                                                                   CONCAT13(pbVar33[6],
                                                                            CONCAT12(pbVar33[4],
                                                                                     CONCAT11(
                                                  pbVar33[2],*pbVar33))))))),0x909090909090909,1);
          auVar83 = NEON_umull(CONCAT17(pbVar33[0x11],
                                        CONCAT16(pbVar33[0xf],
                                                 CONCAT15(pbVar33[0xd],
                                                          CONCAT14(pbVar33[0xb],
                                                                   CONCAT13(pbVar33[9],
                                                                            CONCAT12(pbVar33[7],
                                                                                     CONCAT11(
                                                  pbVar33[5],pbVar33[3]))))))),0x909090909090909,1);
          auVar89 = NEON_umull(CONCAT17(pbVar33[0x10],
                                        CONCAT16(pbVar33[0xe],
                                                 CONCAT15(pbVar33[0xc],
                                                          CONCAT14(pbVar33[10],
                                                                   CONCAT13(pbVar33[8],
                                                                            CONCAT12(pbVar33[6],
                                                                                     CONCAT11(
                                                  pbVar33[4],bVar45))))))),0x909090909090909,1);
          uVar21 = CONCAT12(bVar55,uVar53) & 0xff00ff;
          uVar22 = CONCAT12(bVar64,uVar62) & 0xff00ff;
          sVar76 = (ushort)pbVar36[3] + (ushort)pbVar33[1];
          sVar80 = (ushort)bVar64 + (ushort)pbVar33[3];
          sVar81 = (ushort)bVar65 + (ushort)pbVar33[5];
          sVar82 = (ushort)bVar66 + (ushort)pbVar33[7];
          uVar23 = CONCAT12(bVar51,CONCAT11(bVar51,pbVar36[1])) & 0xff00ff;
          auVar73._0_8_ =
               CONCAT26(auVar72._6_2_ + (ushort)bVar66 +
                        ((ushort)pbVar36[7] + (ushort)pbVar33[9]) * 3,
                        CONCAT24(auVar72._4_2_ + (ushort)bVar65 +
                                 ((ushort)pbVar36[5] + (ushort)pbVar33[7]) * 3,
                                 CONCAT22(auVar72._2_2_ + (ushort)(byte)(uVar22 >> 0x10) +
                                          ((ushort)bVar51 + (ushort)pbVar33[5]) * 3,
                                          auVar72._0_2_ + (short)uVar22 +
                                          ((ushort)pbVar36[1] + (ushort)pbVar33[3]) * 3)));
          auVar73._8_2_ =
               auVar72._8_2_ + (ushort)bVar67 + ((ushort)pbVar36[9] + (ushort)pbVar33[0xb]) * 3;
          auVar73._10_2_ =
               auVar72._10_2_ + (ushort)bVar68 + ((ushort)pbVar36[0xb] + (ushort)pbVar33[0xd]) * 3;
          auVar73._12_2_ =
               auVar72._12_2_ + (ushort)bVar69 + ((ushort)pbVar36[0xd] + (ushort)pbVar33[0xf]) * 3;
          auVar73._14_2_ =
               auVar72._14_2_ + (ushort)bVar70 + ((ushort)pbVar36[0xf] + (ushort)pbVar33[0x11]) * 3;
          sVar44 = auVar78._2_2_ + (ushort)bVar55 + ((ushort)pbVar36[2] + (ushort)pbVar33[4]) * 3;
          sVar46 = auVar78._4_2_ + (ushort)bVar56 + ((ushort)pbVar36[4] + (ushort)pbVar33[6]) * 3;
          sVar47 = auVar78._6_2_ + (ushort)bVar57 + ((ushort)pbVar36[6] + (ushort)pbVar33[8]) * 3;
          sVar48 = auVar78._8_2_ + (ushort)bVar58 + ((ushort)pbVar36[8] + (ushort)pbVar33[10]) * 3;
          sVar49 = auVar78._10_2_ + (ushort)bVar59 +
                   ((ushort)pbVar36[10] + (ushort)pbVar33[0xc]) * 3;
          sVar19 = auVar78._12_2_ + (ushort)bVar60 +
                   ((ushort)pbVar36[0xc] + (ushort)pbVar33[0xe]) * 3;
          sVar20 = auVar78._14_2_ + (ushort)bVar61 +
                   ((ushort)pbVar36[0xe] + (ushort)pbVar33[0x10]) * 3;
          auVar84._0_2_ = auVar83._0_2_ + (short)uVar23 + sVar76 * 3;
          auVar84._2_2_ = auVar83._2_2_ + (ushort)(byte)(uVar23 >> 0x10) + sVar80 * 3;
          auVar84._4_2_ = auVar83._4_2_ + (ushort)pbVar36[5] + sVar81 * 3;
          auVar84._6_2_ = auVar83._6_2_ + (ushort)pbVar36[7] + sVar82 * 3;
          auVar84._8_2_ =
               auVar83._8_2_ + (ushort)pbVar36[9] + ((ushort)bVar67 + (ushort)pbVar33[9]) * 3;
          auVar84._10_2_ =
               auVar83._10_2_ + (ushort)pbVar36[0xb] + ((ushort)bVar68 + (ushort)pbVar33[0xb]) * 3;
          auVar84._12_2_ =
               auVar83._12_2_ + (ushort)pbVar36[0xd] + ((ushort)bVar69 + (ushort)pbVar33[0xd]) * 3;
          auVar84._14_2_ =
               auVar83._14_2_ + (ushort)pbVar36[0xf] + ((ushort)bVar70 + (ushort)pbVar33[0xf]) * 3;
          sVar14 = auVar89._2_2_ + (ushort)pbVar36[2] +
                   ((ushort)(byte)(uVar21 >> 0x10) + (ushort)pbVar33[2]) * 3;
          sVar15 = auVar89._4_2_ + (ushort)pbVar36[4] + ((ushort)bVar56 + (ushort)pbVar33[4]) * 3;
          sVar16 = auVar89._6_2_ + (ushort)pbVar36[6] + ((ushort)bVar57 + (ushort)pbVar33[6]) * 3;
          sVar17 = auVar89._8_2_ + (ushort)pbVar36[8] + ((ushort)bVar58 + (ushort)pbVar33[8]) * 3;
          sVar41 = auVar89._10_2_ + (ushort)pbVar36[10] + ((ushort)bVar59 + (ushort)pbVar33[10]) * 3
          ;
          sVar42 = auVar89._12_2_ + (ushort)pbVar36[0xc] +
                   ((ushort)bVar60 + (ushort)pbVar33[0xc]) * 3;
          sVar43 = auVar89._14_2_ + (ushort)pbVar36[0xe] +
                   ((ushort)bVar61 + (ushort)pbVar33[0xe]) * 3;
          uVar63 = NEON_rshrn(CONCAT17(bVar70,CONCAT16(bVar69,CONCAT15(bVar68,CONCAT14(bVar67,
                                                  CONCAT13(bVar66,CONCAT12(bVar65,uVar62)))))),
                              auVar73,4,2);
          auVar18[2] = (char)sVar44;
          auVar18._0_2_ = auVar78._0_2_ + (ushort)bVar52 + ((ushort)*pbVar36 + (ushort)bVar45) * 3;
          auVar18[3] = (char)((ushort)sVar44 >> 8);
          auVar18[4] = (char)sVar46;
          auVar18[5] = (char)((ushort)sVar46 >> 8);
          auVar18[6] = (char)sVar47;
          auVar18[7] = (char)((ushort)sVar47 >> 8);
          auVar18[8] = (char)sVar48;
          auVar18[9] = (char)((ushort)sVar48 >> 8);
          auVar18[10] = (char)sVar49;
          auVar18[0xb] = (char)((ushort)sVar49 >> 8);
          auVar18[0xc] = (char)sVar19;
          auVar18[0xd] = (char)((ushort)sVar19 >> 8);
          auVar18[0xe] = (char)sVar20;
          auVar18[0xf] = (char)((ushort)sVar20 >> 8);
          uVar54 = NEON_rshrn(CONCAT17(bVar61,CONCAT16(bVar60,CONCAT15(bVar59,CONCAT14(bVar58,
                                                  CONCAT13(bVar57,CONCAT12(bVar56,uVar53)))))),
                              auVar18,4,2);
          uVar77 = NEON_rshrn(CONCAT26(sVar82,CONCAT24(sVar81,CONCAT22(sVar80,sVar76))),auVar84,4,2)
          ;
          auVar13[2] = (char)sVar14;
          auVar13._0_2_ = auVar89._0_2_ + (ushort)*pbVar36 + ((short)uVar21 + (ushort)*pbVar33) * 3;
          auVar13[3] = (char)((ushort)sVar14 >> 8);
          auVar13[4] = (char)sVar15;
          auVar13[5] = (char)((ushort)sVar15 >> 8);
          auVar13[6] = (char)sVar16;
          auVar13[7] = (char)((ushort)sVar16 >> 8);
          auVar13[8] = (char)sVar17;
          auVar13[9] = (char)((ushort)sVar17 >> 8);
          auVar13[10] = (char)sVar41;
          auVar13[0xb] = (char)((ushort)sVar41 >> 8);
          auVar13[0xc] = (char)sVar42;
          auVar13[0xd] = (char)((ushort)sVar42 >> 8);
          auVar13[0xe] = (char)sVar43;
          auVar13[0xf] = (char)((ushort)sVar43 >> 8);
          uVar71 = NEON_rshrn(auVar73._0_8_,auVar13,4,2);
          *pbVar34 = (byte)uVar54;
          pbVar34[1] = (byte)uVar63;
          pbVar34[2] = (byte)uVar71;
          pbVar34[3] = (byte)uVar77;
          pbVar34[4] = (byte)((ulong)uVar54 >> 8);
          pbVar34[5] = (byte)((ulong)uVar63 >> 8);
          pbVar34[6] = (byte)((ulong)uVar71 >> 8);
          pbVar34[7] = (byte)((ulong)uVar77 >> 8);
          pbVar34[8] = (byte)((ulong)uVar54 >> 0x10);
          pbVar34[9] = (byte)((ulong)uVar63 >> 0x10);
          pbVar34[10] = (byte)((ulong)uVar71 >> 0x10);
          pbVar34[0xb] = (byte)((ulong)uVar77 >> 0x10);
          pbVar34[0xc] = (byte)((ulong)uVar54 >> 0x18);
          pbVar34[0xd] = (byte)((ulong)uVar63 >> 0x18);
          pbVar34[0xe] = (byte)((ulong)uVar71 >> 0x18);
          pbVar34[0xf] = (byte)((ulong)uVar77 >> 0x18);
          pbVar34[0x10] = (byte)((ulong)uVar54 >> 0x20);
          pbVar34[0x11] = (byte)((ulong)uVar63 >> 0x20);
          pbVar34[0x12] = (byte)((ulong)uVar71 >> 0x20);
          pbVar34[0x13] = (byte)((ulong)uVar77 >> 0x20);
          pbVar34[0x14] = (byte)((ulong)uVar54 >> 0x28);
          pbVar34[0x15] = (byte)((ulong)uVar63 >> 0x28);
          pbVar34[0x16] = (byte)((ulong)uVar71 >> 0x28);
          pbVar34[0x17] = (byte)((ulong)uVar77 >> 0x28);
          pbVar34[0x18] = (byte)((ulong)uVar54 >> 0x30);
          pbVar34[0x19] = (byte)((ulong)uVar63 >> 0x30);
          pbVar34[0x1a] = (byte)((ulong)uVar71 >> 0x30);
          pbVar34[0x1b] = (byte)((ulong)uVar77 >> 0x30);
          pbVar34[0x1c] = (byte)((ulong)uVar54 >> 0x38);
          pbVar34[0x1d] = (byte)((ulong)uVar63 >> 0x38);
          pbVar34[0x1e] = (byte)((ulong)uVar71 >> 0x38);
          pbVar34[0x1f] = (byte)((ulong)uVar77 >> 0x38);
          bVar45 = pbVar33[2];
          bVar51 = pbVar33[3];
          bVar52 = pbVar33[5];
          bVar55 = pbVar33[7];
          bVar56 = pbVar33[9];
          bVar57 = pbVar33[0xb];
          bVar58 = pbVar33[0xd];
          bVar59 = pbVar33[0xf];
          bVar60 = pbVar33[0x11];
          bVar61 = pbVar36[3];
          bVar64 = pbVar36[2];
          bVar65 = pbVar36[4];
          bVar66 = pbVar36[5];
          pbVar34 = pbVar8 + lVar38;
          uVar21 = CONCAT12(bVar66,CONCAT11(bVar66,pbVar36[3])) & 0xff00ff;
          uVar22 = CONCAT12(bVar65,CONCAT11(bVar65,bVar64)) & 0xff00ff;
          sVar41 = (short)uVar22 + (ushort)*pbVar33;
          sVar42 = (ushort)(byte)(uVar22 >> 0x10) + (ushort)pbVar33[2];
          sVar43 = (ushort)pbVar36[6] + (ushort)pbVar33[4];
          sVar44 = (ushort)pbVar36[8] + (ushort)pbVar33[6];
          sVar14 = (ushort)pbVar36[1] + (ushort)bVar51;
          sVar15 = (ushort)bVar61 + (ushort)bVar52;
          sVar16 = (ushort)pbVar36[5] + (ushort)bVar55;
          sVar17 = (ushort)pbVar36[7] + (ushort)bVar56;
          sVar46 = (ushort)*pbVar36 + (ushort)bVar45;
          sVar47 = (ushort)pbVar36[2] + (ushort)pbVar33[4];
          sVar48 = (ushort)pbVar36[4] + (ushort)pbVar33[6];
          sVar49 = (ushort)pbVar36[6] + (ushort)pbVar33[8];
          uVar22 = CONCAT12(bVar61,CONCAT11(bVar61,pbVar36[1])) & 0xff00ff;
          auVar74._0_2_ =
               (ushort)bVar51 + (short)uVar22 * 9 + ((short)uVar21 + (ushort)pbVar33[1]) * 3;
          auVar74._2_2_ =
               (ushort)bVar52 + (ushort)(byte)(uVar22 >> 0x10) * 9 +
               ((ushort)(byte)(uVar21 >> 0x10) + (ushort)pbVar33[3]) * 3;
          auVar74._4_2_ =
               (ushort)bVar55 + (ushort)pbVar36[5] * 9 +
               ((ushort)pbVar36[7] + (ushort)pbVar33[5]) * 3;
          auVar74._6_2_ =
               (ushort)bVar56 + (ushort)pbVar36[7] * 9 +
               ((ushort)pbVar36[9] + (ushort)pbVar33[7]) * 3;
          auVar74._8_2_ =
               (ushort)bVar57 + (ushort)pbVar36[9] * 9 +
               ((ushort)pbVar36[0xb] + (ushort)pbVar33[9]) * 3;
          auVar74._10_2_ =
               (ushort)bVar58 + (ushort)pbVar36[0xb] * 9 +
               ((ushort)pbVar36[0xd] + (ushort)pbVar33[0xb]) * 3;
          auVar74._12_2_ =
               (ushort)bVar59 + (ushort)pbVar36[0xd] * 9 +
               ((ushort)pbVar36[0xf] + (ushort)pbVar33[0xd]) * 3;
          auVar74._14_2_ =
               (ushort)bVar60 + (ushort)pbVar36[0xf] * 9 +
               ((ushort)pbVar36[0x11] + (ushort)pbVar33[0xf]) * 3;
          auVar79._0_2_ = (ushort)bVar45 + (ushort)*pbVar36 * 9 + sVar41 * 3;
          auVar79._2_2_ = (ushort)pbVar33[4] + (ushort)pbVar36[2] * 9 + sVar42 * 3;
          auVar79._4_2_ = (ushort)pbVar33[6] + (ushort)pbVar36[4] * 9 + sVar43 * 3;
          auVar79._6_2_ = (ushort)pbVar33[8] + (ushort)pbVar36[6] * 9 + sVar44 * 3;
          auVar79._8_2_ =
               (ushort)pbVar33[10] + (ushort)pbVar36[8] * 9 +
               ((ushort)pbVar36[10] + (ushort)pbVar33[8]) * 3;
          auVar79._10_2_ =
               (ushort)pbVar33[0xc] + (ushort)pbVar36[10] * 9 +
               ((ushort)pbVar36[0xc] + (ushort)pbVar33[10]) * 3;
          auVar79._12_2_ =
               (ushort)pbVar33[0xe] + (ushort)pbVar36[0xc] * 9 +
               ((ushort)pbVar36[0xe] + (ushort)pbVar33[0xc]) * 3;
          auVar79._14_2_ =
               (ushort)pbVar33[0x10] + (ushort)pbVar36[0xe] * 9 +
               ((ushort)pbVar36[0x10] + (ushort)pbVar33[0xe]) * 3;
          auVar85._0_2_ = (ushort)pbVar33[1] + (ushort)pbVar36[3] * 9 + sVar14 * 3;
          auVar85._2_2_ = (ushort)pbVar33[3] + (ushort)bVar66 * 9 + sVar15 * 3;
          auVar85._4_2_ = (ushort)pbVar33[5] + (ushort)pbVar36[7] * 9 + sVar16 * 3;
          auVar85._6_2_ = (ushort)pbVar33[7] + (ushort)pbVar36[9] * 9 + sVar17 * 3;
          auVar85._8_2_ =
               (ushort)pbVar33[9] + (ushort)pbVar36[0xb] * 9 +
               ((ushort)pbVar36[9] + (ushort)bVar57) * 3;
          auVar85._10_2_ =
               (ushort)pbVar33[0xb] + (ushort)pbVar36[0xd] * 9 +
               ((ushort)pbVar36[0xb] + (ushort)bVar58) * 3;
          auVar85._12_2_ =
               (ushort)pbVar33[0xd] + (ushort)pbVar36[0xf] * 9 +
               ((ushort)pbVar36[0xd] + (ushort)bVar59) * 3;
          auVar85._14_2_ =
               (ushort)pbVar33[0xf] + (ushort)pbVar36[0x11] * 9 +
               ((ushort)pbVar36[0xf] + (ushort)bVar60) * 3;
          auVar90._0_2_ = (ushort)*pbVar33 + (ushort)bVar64 * 9 + sVar46 * 3;
          auVar90._2_2_ = (ushort)pbVar33[2] + (ushort)bVar65 * 9 + sVar47 * 3;
          auVar90._4_2_ = (ushort)pbVar33[4] + (ushort)pbVar36[6] * 9 + sVar48 * 3;
          auVar90._6_2_ = (ushort)pbVar33[6] + (ushort)pbVar36[8] * 9 + sVar49 * 3;
          auVar90._8_2_ =
               (ushort)pbVar33[8] + (ushort)pbVar36[10] * 9 +
               ((ushort)pbVar36[8] + (ushort)pbVar33[10]) * 3;
          auVar90._10_2_ =
               (ushort)pbVar33[10] + (ushort)pbVar36[0xc] * 9 +
               ((ushort)pbVar36[10] + (ushort)pbVar33[0xc]) * 3;
          auVar90._12_2_ =
               (ushort)pbVar33[0xc] + (ushort)pbVar36[0xe] * 9 +
               ((ushort)pbVar36[0xc] + (ushort)pbVar33[0xe]) * 3;
          auVar90._14_2_ =
               (ushort)pbVar33[0xe] + (ushort)pbVar36[0x10] * 9 +
               ((ushort)pbVar36[0xe] + (ushort)pbVar33[0x10]) * 3;
          uVar54 = NEON_rshrn(CONCAT17((char)((ushort)sVar17 >> 8),
                                       CONCAT16((char)sVar17,
                                                CONCAT15((char)((ushort)sVar16 >> 8),
                                                         CONCAT14((char)sVar16,
                                                                  CONCAT13((char)((ushort)sVar15 >>
                                                                                 8),CONCAT12((char)
                                                  sVar15,sVar14)))))),auVar74,4,2);
          uVar71 = NEON_rshrn(CONCAT26(sVar44,CONCAT24(sVar43,CONCAT22(sVar42,sVar41))),auVar79,4,2)
          ;
          uVar63 = NEON_rshrn(CONCAT17(bVar60,CONCAT16(bVar59,CONCAT15(bVar58,CONCAT14(bVar57,
                                                  CONCAT13(bVar56,CONCAT12(bVar55,CONCAT11(bVar52,
                                                  bVar51))))))),auVar85,4,2);
          uVar77 = NEON_rshrn(CONCAT26(sVar49,CONCAT24(sVar48,CONCAT22(sVar47,sVar46))),auVar90,4,2)
          ;
          *pbVar34 = (byte)uVar71;
          pbVar34[1] = (byte)uVar54;
          pbVar34[2] = (byte)uVar77;
          pbVar34[3] = (byte)uVar63;
          pbVar34[4] = (byte)((ulong)uVar71 >> 8);
          pbVar34[5] = (byte)((ulong)uVar54 >> 8);
          pbVar34[6] = (byte)((ulong)uVar77 >> 8);
          pbVar34[7] = (byte)((ulong)uVar63 >> 8);
          pbVar34[8] = (byte)((ulong)uVar71 >> 0x10);
          pbVar34[9] = (byte)((ulong)uVar54 >> 0x10);
          pbVar34[10] = (byte)((ulong)uVar77 >> 0x10);
          pbVar34[0xb] = (byte)((ulong)uVar63 >> 0x10);
          pbVar34[0xc] = (byte)((ulong)uVar71 >> 0x18);
          pbVar34[0xd] = (byte)((ulong)uVar54 >> 0x18);
          pbVar34[0xe] = (byte)((ulong)uVar77 >> 0x18);
          pbVar34[0xf] = (byte)((ulong)uVar63 >> 0x18);
          pbVar34[0x10] = (byte)((ulong)uVar71 >> 0x20);
          pbVar34[0x11] = (byte)((ulong)uVar54 >> 0x20);
          pbVar34[0x12] = (byte)((ulong)uVar77 >> 0x20);
          pbVar34[0x13] = (byte)((ulong)uVar63 >> 0x20);
          pbVar34[0x14] = (byte)((ulong)uVar71 >> 0x28);
          pbVar34[0x15] = (byte)((ulong)uVar54 >> 0x28);
          pbVar34[0x16] = (byte)((ulong)uVar77 >> 0x28);
          pbVar34[0x17] = (byte)((ulong)uVar63 >> 0x28);
          pbVar34[0x18] = (byte)((ulong)uVar71 >> 0x30);
          pbVar34[0x19] = (byte)((ulong)uVar54 >> 0x30);
          pbVar34[0x1a] = (byte)((ulong)uVar77 >> 0x30);
          pbVar34[0x1b] = (byte)((ulong)uVar63 >> 0x30);
          pbVar34[0x1c] = (byte)((ulong)uVar71 >> 0x38);
          pbVar34[0x1d] = (byte)((ulong)uVar54 >> 0x38);
          pbVar34[0x1e] = (byte)((ulong)uVar77 >> 0x38);
          pbVar34[0x1f] = (byte)((ulong)uVar63 >> 0x38);
          pbVar33 = pbVar33 + 0x10;
        } while (lVar31 != 0);
        if (uVar28 == uVar24) {
          return;
        }
      }
    }
  }
LAB_007c8c20:
  lVar31 = uVar28 << 0x22;
  uVar26 = (int)uVar28 << 2 | 3;
  lVar29 = uVar24 - uVar28;
  pbVar33 = param_1 + uVar28 * 2 + 3;
  pbVar34 = param_1 + param_2 + uVar28 * 2;
  do {
    lVar29 = lVar29 + -1;
    pbVar35 = pbVar34 + 2;
    uVar24 = lVar31 >> 0x20;
    lVar31 = lVar31 + 0x400000000;
    param_3[uVar24] =
         (byte)((uint)pbVar33[-3] * 9 + (uint)*pbVar35 + ((uint)*pbVar34 + (uint)pbVar33[-1]) * 3 +
                8 >> 4);
    param_3[uVar24 | 1] =
         (byte)((uint)pbVar33[-2] * 9 + (uint)pbVar34[3] + ((uint)pbVar34[1] + (uint)*pbVar33) * 3 +
                8 >> 4);
    param_3[uVar24 | 2] =
         (byte)((uint)pbVar33[-1] * 9 + (uint)*pbVar34 + ((uint)*pbVar35 + (uint)pbVar33[-3]) * 3 +
                8 >> 4);
    param_3[(int)uVar26] =
         (byte)((uint)*pbVar33 * 9 + (uint)pbVar34[1] + ((uint)pbVar34[3] + (uint)pbVar33[-2]) * 3 +
                8 >> 4);
    pbVar8[uVar24] =
         (byte)((uint)pbVar33[-1] + (uint)*pbVar34 * 9 + ((uint)*pbVar35 + (uint)pbVar33[-3]) * 3 +
                8 >> 4);
    pbVar8[uVar24 | 1] =
         (byte)((uint)*pbVar33 + (uint)pbVar34[1] * 9 + ((uint)pbVar34[3] + (uint)pbVar33[-2]) * 3 +
                8 >> 4);
    pbVar8[uVar24 | 2] =
         (byte)((uint)pbVar33[-3] + (uint)*pbVar35 * 9 + ((uint)*pbVar34 + (uint)pbVar33[-1]) * 3 +
                8 >> 4);
    bVar45 = *pbVar33;
    pbVar36 = pbVar33 + -2;
    pbVar33 = pbVar33 + 2;
    pbVar8[(int)uVar26] =
         (byte)((uint)*pbVar36 + (uint)pbVar34[3] * 9 + ((uint)pbVar34[1] + (uint)bVar45) * 3 + 8 >>
               4);
    uVar26 = uVar26 + 4;
    pbVar34 = pbVar35;
  } while (lVar29 != 0);
  return;
}


// ===== 007c9acc  FUN_007c9acc =====

void FUN_007c9acc(undefined2 *param_1,long param_2,uint param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (0 < (int)(param_3 - 1)) {
    iVar3 = 0;
    do {
      iVar2 = param_4 >> 0x10;
      iVar1 = param_4 + param_5;
      iVar3 = iVar3 + 2;
      param_4 = iVar1 + param_5;
      *param_1 = *(undefined2 *)(param_2 + (long)iVar2 * 2);
      param_1[1] = *(undefined2 *)(param_2 + (long)(iVar1 >> 0x10) * 2);
      param_1 = param_1 + 2;
    } while (iVar3 < (int)(param_3 - 1));
  }
  if ((param_3 & 1) != 0) {
    *param_1 = *(undefined2 *)(param_2 + (long)(param_4 >> 0x10) * 2);
  }
  return;
}


// ===== 007c9b24  FUN_007c9b24 =====

void FUN_007c9b24(undefined2 *param_1,long param_2,uint param_3,int param_4,int param_5)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  
  lVar2 = (long)param_4;
  if (0 < (int)(param_3 - 1)) {
    iVar3 = 0;
    do {
      lVar4 = lVar2 >> 0x10;
      lVar1 = lVar2 + param_5;
      iVar3 = iVar3 + 2;
      lVar2 = lVar1 + param_5;
      *param_1 = *(undefined2 *)(param_2 + lVar4 * 2);
      param_1[1] = *(undefined2 *)(param_2 + (lVar1 >> 0x10) * 2);
      param_1 = param_1 + 2;
    } while (iVar3 < (int)(param_3 - 1));
  }
  if ((param_3 & 1) != 0) {
    *param_1 = *(undefined2 *)(param_2 + (lVar2 >> 0x10) * 2);
  }
  return;
}


// ===== 007c9b84  FUN_007c9b84 =====

void FUN_007c9b84(undefined2 *param_1,undefined2 *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined2 *puVar6;
  ulong uVar7;
  undefined2 uVar9;
  undefined8 uVar8;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if (0 < (int)(param_3 - 1)) {
    if ((param_3 - 2 < 0x1e) ||
       ((uVar1 = param_3 - 2 >> 1, param_1 < param_2 + (ulong)uVar1 + 1 &&
        (param_2 < param_1 + (ulong)uVar1 * 2 + 2)))) {
      iVar2 = 0;
    }
    else {
      uVar3 = (ulong)(uVar1 + 1);
      puVar5 = (undefined8 *)(param_2 + 8);
      puVar6 = param_1 + 0x10;
      uVar4 = uVar3 & 0xfffffff0;
      uVar7 = uVar3 & 0xfffffff0;
      iVar2 = (int)uVar4 << 1;
      param_1 = param_1 + uVar4 * 2;
      param_2 = param_2 + uVar4;
      do {
        uVar12 = puVar5[-1];
        uVar11 = puVar5[-2];
        uVar10 = puVar5[1];
        uVar8 = *puVar5;
        uVar7 = uVar7 - 0x10;
        puVar5 = puVar5 + 4;
        *puVar6 = (short)uVar8;
        puVar6[1] = (short)uVar8;
        uVar9 = (undefined2)((ulong)uVar8 >> 0x10);
        puVar6[2] = uVar9;
        puVar6[3] = uVar9;
        uVar9 = (undefined2)((ulong)uVar8 >> 0x20);
        puVar6[4] = uVar9;
        puVar6[5] = uVar9;
        uVar9 = (undefined2)((ulong)uVar8 >> 0x30);
        puVar6[6] = uVar9;
        puVar6[7] = uVar9;
        puVar6[8] = (short)uVar10;
        puVar6[9] = (short)uVar10;
        uVar9 = (undefined2)((ulong)uVar10 >> 0x10);
        puVar6[10] = uVar9;
        puVar6[0xb] = uVar9;
        uVar9 = (undefined2)((ulong)uVar10 >> 0x20);
        puVar6[0xc] = uVar9;
        puVar6[0xd] = uVar9;
        uVar9 = (undefined2)((ulong)uVar10 >> 0x30);
        puVar6[0xe] = uVar9;
        puVar6[0xf] = uVar9;
        puVar6[-0x10] = (short)uVar11;
        puVar6[-0xf] = (short)uVar11;
        uVar9 = (undefined2)((ulong)uVar11 >> 0x10);
        puVar6[-0xe] = uVar9;
        puVar6[-0xd] = uVar9;
        uVar9 = (undefined2)((ulong)uVar11 >> 0x20);
        puVar6[-0xc] = uVar9;
        puVar6[-0xb] = uVar9;
        uVar9 = (undefined2)((ulong)uVar11 >> 0x30);
        puVar6[-10] = uVar9;
        puVar6[-9] = uVar9;
        puVar6[-8] = (short)uVar12;
        puVar6[-7] = (short)uVar12;
        uVar9 = (undefined2)((ulong)uVar12 >> 0x10);
        puVar6[-6] = uVar9;
        puVar6[-5] = uVar9;
        uVar9 = (undefined2)((ulong)uVar12 >> 0x20);
        puVar6[-4] = uVar9;
        puVar6[-3] = uVar9;
        uVar9 = (undefined2)((ulong)uVar12 >> 0x30);
        puVar6[-2] = uVar9;
        puVar6[-1] = uVar9;
        puVar6 = puVar6 + 0x20;
      } while (uVar7 != 0);
      if (uVar4 == uVar3) goto joined_r0x007c9c04;
    }
    do {
      puVar6 = param_2 + 1;
      uVar9 = *param_2;
      iVar2 = iVar2 + 2;
      *param_1 = uVar9;
      param_1[1] = uVar9;
      param_1 = param_1 + 2;
      param_2 = puVar6;
    } while (iVar2 < (int)(param_3 - 1));
  }
joined_r0x007c9c04:
  if ((param_3 & 1) != 0) {
    *param_1 = *param_2;
  }
  return;
}


// ===== 007c9c60  FUN_007c9c60 =====

void FUN_007c9c60(ushort *param_1,long param_2,uint param_3,uint param_4,int param_5)

{
  ushort *puVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  
  if (0 < (int)(param_3 - 1)) {
    iVar6 = 0;
    do {
      uVar5 = param_4 >> 9 & 0x7f;
      iVar6 = iVar6 + 2;
      puVar1 = (ushort *)(param_2 + (long)((int)param_4 >> 0x10) * 2);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar2 = param_4 + param_5;
      param_4 = uVar2 + param_5;
      puVar1 = (ushort *)(param_2 + (long)((int)uVar2 >> 0x10) * 2);
      uVar2 = uVar2 >> 9 & 0x7f;
      *param_1 = ((uVar3 >> 8) * (short)(uVar5 ^ 0x7f) + (uVar4 >> 8) * (short)uVar5) * 2 & 0xff00 |
                 (ushort)((uVar3 & 0xff) * (uVar5 ^ 0x7f) + (uVar4 & 0xff) * uVar5 >> 7);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      param_1[1] = ((uVar3 >> 8) * (short)(uVar2 ^ 0x7f) + (uVar4 >> 8) * (short)uVar2) * 2 & 0xff00
                   | (ushort)((uVar3 & 0xff) * (uVar2 ^ 0x7f) + (uVar4 & 0xff) * uVar2 >> 7);
      param_1 = param_1 + 2;
    } while (iVar6 < (int)(param_3 - 1));
  }
  if ((param_3 & 1) != 0) {
    uVar2 = param_4 >> 9 & 0x7f;
    puVar1 = (ushort *)(param_2 + (long)((int)param_4 >> 0x10) * 2);
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    *param_1 = ((uVar3 >> 8) * (short)(uVar2 ^ 0x7f) + (uVar4 >> 8) * (short)uVar2) * 2 & 0xff00 |
               (ushort)((uVar3 & 0xff) * (uVar2 ^ 0x7f) + (uVar4 & 0xff) * uVar2 >> 7);
  }
  return;
}


// ===== 007c9d6c  FUN_007c9d6c =====

void FUN_007c9d6c(ushort *param_1,long param_2,uint param_3,int param_4,int param_5)

{
  ushort *puVar1;
  long lVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  
  lVar8 = (long)param_4;
  if (0 < (int)(param_3 - 1)) {
    iVar7 = 0;
    do {
      uVar5 = (uint)lVar8 >> 9 & 0x7f;
      iVar7 = iVar7 + 2;
      puVar1 = (ushort *)(param_2 + (lVar8 >> 0x10) * 2);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      lVar2 = lVar8 + param_5;
      uVar6 = param_5 + (uint)lVar8 >> 9 & 0x7f;
      puVar1 = (ushort *)(param_2 + (lVar2 >> 0x10) * 2);
      *param_1 = ((uVar3 >> 8) * (short)(uVar5 ^ 0x7f) + (uVar4 >> 8) * (short)uVar5) * 2 & 0xff00 |
                 (ushort)((uVar3 & 0xff) * (uVar5 ^ 0x7f) + (uVar4 & 0xff) * uVar5 >> 7);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      param_1[1] = ((uVar3 >> 8) * (short)(uVar6 ^ 0x7f) + (uVar4 >> 8) * (short)uVar6) * 2 & 0xff00
                   | (ushort)((uVar3 & 0xff) * (uVar6 ^ 0x7f) + (uVar4 & 0xff) * uVar6 >> 7);
      lVar8 = lVar2 + param_5;
      param_1 = param_1 + 2;
    } while (iVar7 < (int)(param_3 - 1));
  }
  if ((param_3 & 1) != 0) {
    uVar5 = (uint)lVar8 >> 9 & 0x7f;
    puVar1 = (ushort *)(param_2 + (lVar8 >> 0x10) * 2);
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    *param_1 = ((uVar3 >> 8) * (short)(uVar5 ^ 0x7f) + (uVar4 >> 8) * (short)uVar5) * 2 & 0xff00 |
               (ushort)((uVar3 & 0xff) * (uVar5 ^ 0x7f) + (uVar4 & 0xff) * uVar5 >> 7);
  }
  return;
}


// ===== 007c9e84  FUN_007c9e84 =====

void FUN_007c9e84(int param_1,int param_2,int param_3,int param_4,int param_5,long param_6,
                 long param_7,int param_8,uint param_9,int param_10,int param_11,int param_12)

{
  uint uVar1;
  code *pcVar2;
  code *pcVar3;
  uint uVar4;
  
  uVar1 = param_1 * 0x10000 - 0x10001;
  uVar4 = *(uint *)PTR_DAT_00d52960;
  if (param_1 < 2) {
    uVar1 = 0;
  }
  if (uVar4 == 0) {
    uVar4 = FUN_007c0604();
  }
  pcVar2 = (code *)PTR_FUN_00d52aa8;
  if ((param_11 * param_2 & 0xfU) != 0) {
    pcVar2 = (code *)PTR_FUN_00d52aa0;
  }
  pcVar3 = (code *)PTR_FUN_00d52ab0;
  if ((uVar4 & 0x100) != 0) {
    pcVar3 = pcVar2;
  }
  if (0 < param_3) {
    do {
      if ((int)uVar1 <= (int)param_9) {
        param_9 = uVar1;
      }
      uVar4 = 0;
      if (param_12 != 0) {
        uVar4 = param_9 >> 8 & 0xff;
      }
      (*pcVar3)(param_7,param_6 + param_11 * (param_8 >> 0x10) +
                        (long)(((int)param_9 >> 0x10) * param_4),(long)param_4,param_11 * param_2,
                uVar4);
      param_3 = param_3 + -1;
      param_7 = param_7 + param_5;
      param_9 = param_9 + param_10;
    } while (param_3 != 0);
  }
  return;
}


// ===== 007c9fd0  FUN_007c9fd0 =====

uint FUN_007c9fd0(int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  
  iVar1 = -param_1;
  if (-1 < param_1) {
    iVar1 = param_1;
  }
  iVar2 = -param_2;
  if (-1 < param_2) {
    iVar2 = param_2;
  }
  if (param_5 != 2) {
    if (param_5 != 3) goto LAB_007ca038;
    if ((iVar1 != param_3 * 2 && iVar1 + param_3 * -2 < 0 == SBORROW4(iVar1,param_3 * 2)) &&
       (param_4 * 2 < iVar2)) {
      return 3;
    }
  }
  param_5 = 1;
  if ((param_4 * 3 != iVar2 && param_4 != iVar2) && iVar2 != 1) {
    param_5 = 2;
  }
  if (iVar1 == 1) {
    return 0;
  }
LAB_007ca038:
  if (param_5 == 1) {
    param_5 = (uint)((iVar1 != 1 && param_3 * 3 != iVar1) && param_3 != iVar1);
  }
  return param_5;
}


// ===== 007ca05c  FUN_007ca05c =====

long FUN_007ca05c(ulong param_1,int param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if ((long)param_2 != 0) {
    lVar1 = (long)(-(param_1 >> 0x1f & 1) & 0xffff000000000000 | (param_1 & 0xffffffff) << 0x10) /
            (long)param_2;
  }
  return lVar1;
}


// ===== 007ca070  FUN_007ca070 =====

long FUN_007ca070(int param_1,int param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if ((long)(param_2 + -1) != 0) {
    lVar1 = ((long)param_1 * 0x10000 + -0x10001) / (long)(param_2 + -1);
  }
  return lVar1;
}


// ===== 007ca090  FUN_007ca090 =====

void FUN_007ca090(uint param_1,uint param_2,uint param_3,uint param_4,int param_5,uint *param_6,
                 uint *param_7,uint *param_8,uint *param_9)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  
  uVar1 = param_1;
  if (param_3 != 1 || (int)param_1 < 0x8000) {
    uVar1 = param_3;
  }
  uVar2 = param_2;
  if (param_4 != 1 || (int)param_2 < 0x8000) {
    uVar2 = param_4;
  }
  uVar3 = -param_1;
  if (-1 < (int)param_1) {
    uVar3 = param_1;
  }
  uVar5 = (ulong)uVar3;
  if (param_5 == 1) {
    if ((int)uVar3 < (int)uVar1) {
      if (1 < (int)param_1) {
        uVar3 = 0;
        uVar4 = 0;
        if ((ulong)(uVar1 - 1) != 0) {
          uVar4 = (uint)((long)(uVar5 * 0x10000 + -0x10001) / (long)(ulong)(uVar1 - 1));
        }
        *param_8 = uVar4;
        goto LAB_007ca270;
      }
    }
    else {
      uVar4 = 0;
      if ((long)(int)uVar1 != 0) {
        uVar4 = (uint)((long)(-(ulong)(uVar3 >> 0x1f) & 0xffff000000000000 | uVar5 << 0x10) /
                      (long)(int)uVar1);
      }
      *param_8 = uVar4;
      if ((int)uVar4 < 0) {
        uVar3 = 0x8000 - ((int)-uVar4 >> 1);
      }
      else {
        uVar3 = (uVar4 >> 1) - 0x8000;
      }
LAB_007ca270:
      *param_6 = uVar3;
    }
    uVar3 = 0;
    if ((long)(int)uVar2 != 0) {
      uVar3 = (uint)((long)(-(ulong)(param_2 >> 0x1f) & 0xffff000000000000 | (ulong)param_2 << 0x10)
                    / (long)(int)uVar2);
    }
    uVar4 = (int)uVar3 >> 1;
LAB_007ca284:
    *param_9 = uVar3;
  }
  else if (param_5 == 2) {
    if ((int)uVar3 < (int)uVar1) {
      if (1 < (int)param_1) {
        uVar3 = 0;
        uVar4 = 0;
        if ((ulong)(uVar1 - 1) != 0) {
          uVar4 = (uint)((long)(uVar5 * 0x10000 + -0x10001) / (long)(ulong)(uVar1 - 1));
        }
        *param_8 = uVar4;
        goto LAB_007ca1fc;
      }
    }
    else {
      uVar4 = 0;
      if ((long)(int)uVar1 != 0) {
        uVar4 = (uint)((long)(-(ulong)(uVar3 >> 0x1f) & 0xffff000000000000 | uVar5 << 0x10) /
                      (long)(int)uVar1);
      }
      *param_8 = uVar4;
      if ((int)uVar4 < 0) {
        uVar3 = 0x8000 - ((int)-uVar4 >> 1);
      }
      else {
        uVar3 = (uVar4 >> 1) - 0x8000;
      }
LAB_007ca1fc:
      *param_6 = uVar3;
    }
    if ((int)param_2 < (int)uVar2) {
      if ((int)param_2 < 2) goto joined_r0x007ca22c;
      uVar4 = 0;
      uVar3 = 0;
      if ((ulong)(uVar2 - 1) != 0) {
        uVar3 = (uint)(((ulong)param_2 * 0x10000 - 0x10001) / (ulong)(uVar2 - 1));
      }
      goto LAB_007ca284;
    }
    uVar5 = 0;
    if ((long)(int)uVar2 != 0) {
      uVar5 = (long)(-(ulong)(param_2 >> 0x1f) & 0xffff000000000000 | (ulong)param_2 << 0x10) /
              (long)(int)uVar2;
    }
    *param_9 = (uint)uVar5;
    uVar4 = ((uint)(uVar5 >> 1) & 0x7fffffff) - 0x8000;
    if ((uVar5 & 0x80000000) != 0) {
      uVar4 = 0x8000 - ((int)-(uint)uVar5 >> 1);
    }
  }
  else if (param_5 == 3) {
    uVar4 = 0;
    if ((long)(int)uVar1 != 0) {
      uVar4 = (uint)((long)(-(ulong)(uVar3 >> 0x1f) & 0xffff000000000000 | uVar5 << 0x10) /
                    (long)(int)uVar1);
    }
    uVar3 = 0;
    if ((long)(int)uVar2 != 0) {
      uVar3 = (uint)((long)(-(ulong)(param_2 >> 0x1f) & 0xffff000000000000 | (ulong)param_2 << 0x10)
                    / (long)(int)uVar2);
    }
    *param_8 = uVar4;
    *param_9 = uVar3;
    *param_6 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    if ((long)(int)uVar1 != 0) {
      uVar4 = (uint)((long)(-(ulong)(uVar3 >> 0x1f) & 0xffff000000000000 | uVar5 << 0x10) /
                    (long)(int)uVar1);
    }
    uVar3 = 0;
    if ((long)(int)uVar2 != 0) {
      uVar3 = (uint)((long)(-(ulong)(param_2 >> 0x1f) & 0xffff000000000000 | (ulong)param_2 << 0x10)
                    / (long)(int)uVar2);
    }
    *param_8 = uVar4;
    *param_9 = uVar3;
    uVar3 = *param_8;
    uVar2 = uVar3 >> 1;
    if ((int)uVar3 < 0) {
      uVar2 = -((int)-uVar3 >> 1);
    }
    *param_6 = uVar2;
    uVar2 = *param_9;
    uVar4 = uVar2 >> 1;
    if ((int)uVar2 < 0) {
      uVar4 = -((int)-uVar2 >> 1);
    }
  }
  *param_7 = uVar4;
joined_r0x007ca22c:
  if ((int)param_1 < 0) {
    *param_6 = *param_6 + *param_8 * (uVar1 - 1);
    *param_8 = -*param_8;
    return;
  }
  return;
}


// ===== 007ca2b4  FUN_007ca2b4 =====

undefined8
FUN_007ca2b4(long param_1,int param_2,int param_3,uint param_4,long param_5,int param_6,uint param_7
            ,uint param_8,undefined4 param_9)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  void *pvVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  code *pcVar18;
  ulong uVar19;
  long lVar20;
  uint uVar21;
  uint local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  if ((int)param_8 < 1) {
    return 0xffffffff;
  }
  if ((int)param_7 < 1) {
    return 0xffffffff;
  }
  if (param_5 == 0) {
    return 0xffffffff;
  }
  if (0x8000 < (int)param_4) {
    return 0xffffffff;
  }
  if (0x8000 < param_3) {
    return 0xffffffff;
  }
  if (param_1 == 0) {
    return 0xffffffff;
  }
  if (param_3 < 1) {
    return 0xffffffff;
  }
  if (param_4 != 0) {
    local_70 = 0;
    local_68 = 0;
    uVar5 = FUN_007c9fd0(param_3,param_4,param_7,param_8,param_9);
    if ((int)param_4 < 0) {
      uVar6 = ~param_4;
      param_4 = -param_4;
      lVar11 = (long)param_2;
      param_2 = -param_2;
      param_1 = param_1 + (ulong)uVar6 * lVar11;
    }
    FUN_007ca090(param_3,param_4,param_7,param_8,uVar5,(long)&local_68 + 4,&local_68,
                 (long)&local_70 + 4,&local_70);
    uVar6 = (uint)local_70;
    uVar16 = local_70._4_4_;
    lVar11 = (long)(int)local_70._4_4_;
    iVar13 = -param_3;
    if (-1 < param_3) {
      iVar13 = param_3;
    }
    uVar17 = (uint)local_68;
    iVar7 = local_68._4_4_;
    local_78 = uVar5;
    if ((((((uint)local_70 | local_70._4_4_) & 0xffff) == 0) && (local_78 = 0, local_70._4_4_ != 0))
       && ((uint)local_70 != 0)) {
      uVar21 = local_68._4_4_ >> 0xf;
      if ((((uint)local_70 | local_70._4_4_) >> 0x10 & 1) == 0) {
        if ((local_70._4_4_ == 0x20000) && ((uint)local_70 == 0x20000)) {
          iVar13 = (int)local_68._2_2_;
          pcVar3 = (code *)PTR_FUN_00d52c30;
          if (uVar5 != 1) {
            pcVar3 = (code *)PTR_FUN_00d52c48;
          }
          pcVar18 = (code *)PTR_FUN_00d52c18;
          if (uVar5 != 0) {
            pcVar18 = pcVar3;
          }
          uVar6 = *(uint *)PTR_DAT_00d52960;
          lVar11 = 0;
          if (uVar5 != 2) {
            lVar11 = -2;
          }
          if (uVar6 == 0) {
            uVar6 = FUN_007c0604();
          }
          lVar11 = param_1 + (long)iVar13 * (long)param_2 + (long)(int)(uVar21 & 0xfffffffe) +
                   lVar11;
          if ((uVar6 >> 8 & 1) != 0) {
            pcVar3 = (code *)PTR_FUN_00d52c20;
            if (uVar5 != 1) {
              pcVar3 = (code *)PTR_FUN_00d52c38;
            }
            pcVar18 = (code *)PTR_FUN_00d52c08;
            if (uVar5 != 0) {
              pcVar18 = pcVar3;
            }
            if ((param_7 & 7) == 0) {
              pcVar3 = (code *)PTR_FUN_00d52c28;
              if (uVar5 != 1) {
                pcVar3 = (code *)PTR_FUN_00d52c40;
              }
              pcVar18 = (code *)PTR_FUN_00d52c10;
              if (uVar5 != 0) {
                pcVar18 = pcVar3;
              }
            }
          }
          iVar13 = 0;
          if (uVar5 != 1) {
            iVar13 = param_2;
          }
          do {
            (*pcVar18)(lVar11,(long)iVar13,param_5,param_7);
            param_8 = param_8 - 1;
            lVar11 = lVar11 + (param_2 << 1);
            param_5 = param_5 + param_6;
          } while (param_8 != 0);
          return 0;
        }
        if ((local_70._4_4_ == 0x40000) && (((uint)local_70 == 0x40000 && (uVar5 == 3)))) {
          uVar5 = param_7 * 4 + 0xf & 0xfffffff0;
          pvVar8 = malloc((long)(int)(uVar5 * 2 + 0x3f));
          uVar14 = (long)pvVar8 + 0x3fU & 0xffffffffffffffc0;
          if (uVar14 == 0) {
            return 1;
          }
          uVar6 = *(uint *)PTR_DAT_00d52960;
          lVar11 = param_1 + (long)((int)uVar17 >> 0x10) * (long)param_2 +
                   (long)(int)(uVar21 & 0xfffffffe);
          if (uVar6 == 0) {
            uVar6 = FUN_007c0604();
          }
          pcVar3 = (code *)PTR_FUN_00d52c40;
          if ((param_7 & 7) != 0) {
            pcVar3 = (code *)PTR_FUN_00d52c38;
          }
          pcVar18 = (code *)PTR_FUN_00d52c48;
          if ((uVar6 & 0x100) != 0) {
            pcVar18 = pcVar3;
          }
          do {
            (*pcVar18)(lVar11,(long)param_2,uVar14,param_7 << 1);
            (*pcVar18)(lVar11 + (param_2 << 1),(long)param_2,uVar14 + (long)(int)uVar5,param_7 << 1)
            ;
            (*pcVar18)(uVar14,(long)(int)uVar5,param_5,param_7);
            param_8 = param_8 - 1;
            param_5 = param_5 + param_6;
            lVar11 = lVar11 + (param_2 << 2);
          } while (param_8 != 0);
          free(pvVar8);
          return 0;
        }
        iVar13 = (int)local_70._4_4_ >> 0x10;
        uVar6 = *(uint *)PTR_DAT_00d52960;
        iVar7 = (int)(uint)local_70 >> 0x10;
        lVar11 = param_1 + (long)((int)uVar17 >> 0x10) * (long)param_2 +
                 (long)(int)(uVar21 & 0xfffffffe);
        if (uVar6 == 0) {
          uVar6 = FUN_007c0604();
        }
        pcVar3 = (code *)PTR_FUN_00d52c58;
        if ((param_7 & 3) != 0) {
          pcVar3 = (code *)PTR_FUN_00d52c50;
        }
        pcVar18 = (code *)PTR_FUN_00d52c60;
        if ((uVar6 & 0x100) != 0) {
          pcVar18 = pcVar3;
        }
        if (uVar5 != 0) {
          pcVar18 = (code *)PTR_FUN_00d52c88;
        }
        iVar2 = 0;
        if (uVar5 != 1) {
          iVar2 = param_2;
        }
        do {
          (*pcVar18)(lVar11,(long)iVar2,iVar13,param_5,param_7);
          param_8 = param_8 - 1;
          lVar11 = lVar11 + (long)iVar7 * (long)param_2;
          param_5 = param_5 + param_6;
        } while (param_8 != 0);
        return 0;
      }
      local_78 = uVar5;
      if (((((local_70._4_4_ & (uint)local_70) >> 0x10 & 1) != 0) &&
          (local_78 = 0, local_70._4_4_ == 0x10000)) && ((uint)local_70 == 0x10000)) {
        lVar11 = param_1 + (long)(int)local_68._2_2_ * (long)param_2 +
                 (long)(int)(uVar21 & 0xfffffffe);
        if (lVar11 != 0) {
          FUN_007c069c(lVar11,param_2,param_5,param_6,param_7 << 1,param_8);
          return 0;
        }
        return 0;
      }
    }
    if ((local_70._4_4_ == 0x10000) && ((local_68 & 0xffff00000000) == 0)) {
      FUN_007c9e84(param_4,param_7,param_8,param_2,param_6,param_1,param_5,local_68._4_4_,
                   local_68 & 0xffffffff,(uint)local_70,2,local_78);
    }
    else if ((local_78 == 1) && (iVar13 == (int)(param_7 + 1) / 2)) {
      uVar5 = *(uint *)PTR_DAT_00d52960;
      if (uVar5 == 0) {
        uVar5 = FUN_007c0604();
      }
      pcVar3 = (code *)PTR_FUN_00d52c68;
      if ((uVar5 & 0x100) != 0) {
        pcVar3 = (code *)PTR_FUN_00d52c70;
      }
      if (param_8 - 1 == 0) {
        (*pcVar3)(param_1 + (ulong)(uint)((int)(param_4 - 1) / 2) * (long)param_2,param_5,param_7);
      }
      else {
        iVar7 = FUN_007ca05c(param_4 - 1,param_8 - 1);
        iVar13 = 0x7fff;
        do {
          (*pcVar3)(param_1 + (long)param_2 * (long)(iVar13 >> 0x10),param_5,param_7);
          param_8 = param_8 - 1;
          param_5 = param_5 + param_6;
          iVar13 = iVar13 + iVar7;
        } while (param_8 != 0);
      }
    }
    else if (((param_4 == (int)(param_8 + 1) / 2) && (iVar13 == (int)(param_7 + 1) / 2)) &&
            ((local_78 & 0xfffffffe) == 2)) {
      uVar5 = *(uint *)PTR_DAT_00d52960;
      if (uVar5 == 0) {
        uVar5 = FUN_007c0604();
      }
      pcVar3 = (code *)PTR_FUN_00d52c78;
      if ((uVar5 & 0x100) != 0) {
        pcVar3 = (code *)PTR_FUN_00d52c80;
      }
      (*pcVar3)(param_1,0,param_5,0,param_7);
      param_5 = param_5 + param_6;
      if (1 < param_4) {
        iVar13 = param_4 - 1;
        do {
          (*pcVar3)(param_1,(long)param_2,param_5,(long)param_6,param_7);
          iVar13 = iVar13 + -1;
          param_1 = param_1 + param_2;
          param_5 = param_5 + (param_6 << 1);
        } while (iVar13 != 0);
      }
      if ((param_8 & 1) == 0) {
        (*pcVar3)(param_1,0,param_5,0,param_7);
      }
    }
    else {
      lVar15 = (long)local_68._4_4_;
      if (((int)(uint)local_70 < 0x10000) && (local_78 != 0)) {
        uVar5 = *(uint *)PTR_DAT_00d52960;
        if (uVar5 == 0) {
          uVar5 = FUN_007c0604();
        }
        uVar21 = param_7 * 2 + 0xf & 0xfffffff0;
        pcVar3 = (code *)PTR_FUN_00d52aa8;
        if ((param_7 & 7) != 0) {
          pcVar3 = (code *)PTR_FUN_00d52aa0;
        }
        pcVar18 = (code *)PTR_FUN_00d52ab0;
        if ((uVar5 & 0x100) != 0) {
          pcVar18 = pcVar3;
        }
        pcVar3 = (code *)PTR_FUN_00d52cb0;
        if (iVar13 < 0x8000) {
          pcVar3 = (code *)PTR_FUN_00d52ca8;
        }
        pvVar8 = malloc((long)(int)(uVar21 * 2 + 0x3f));
        uVar14 = (long)pvVar8 + 0x3fU & 0xffffffffffffffc0;
        if (uVar14 == 0) {
          return 1;
        }
        uVar5 = param_4 * 0x10000 - 0x10000;
        lVar12 = (long)param_2;
        if ((int)uVar5 <= (int)uVar17) {
          uVar17 = uVar5;
        }
        iVar13 = (int)uVar17 >> 0x10;
        lVar9 = param_1 + (long)param_2 * (long)iVar13;
        (*pcVar3)(uVar14,lVar9,param_7,lVar15,uVar16);
        lVar20 = lVar12;
        if ((int)param_4 < 2) {
          lVar20 = 0;
        }
        lVar9 = lVar9 + lVar20;
        (*pcVar3)(uVar14 + (long)(int)uVar21,lVar9,param_7,lVar15,uVar16);
        lVar20 = lVar12;
        if ((int)param_4 < 3) {
          lVar20 = 0;
        }
        lVar9 = lVar9 + lVar20;
        do {
          lVar20 = lVar9;
          uVar16 = uVar17;
          if ((int)uVar17 >> 0x10 != iVar13) {
            if ((int)uVar5 <= (int)uVar17) {
              uVar16 = uVar5;
            }
            lVar20 = param_1 + (long)param_2 * (long)((int)uVar5 >> 0x10);
            iVar7 = (int)uVar5 >> 0x10;
            if ((int)uVar17 <= (int)uVar5) {
              lVar20 = lVar9;
              iVar7 = (int)uVar17 >> 0x10;
            }
            if (iVar7 != iVar13) {
              (*pcVar3)(uVar14,lVar20,param_7,lVar15,lVar11);
              uVar14 = uVar14 + (long)(int)uVar21;
              uVar21 = -uVar21;
              lVar9 = lVar12;
              if ((int)uVar5 <= (int)(uVar16 + 0x10000)) {
                lVar9 = 0;
              }
              lVar20 = lVar20 + lVar9;
              iVar13 = iVar7;
            }
          }
          if (local_78 == 1) {
            lVar9 = 0;
            uVar17 = 0;
          }
          else {
            uVar17 = uVar16 >> 8 & 0xff;
            lVar9 = (long)(int)uVar21;
          }
          (*pcVar18)(param_5,uVar14,lVar9,param_7 * 2,uVar17);
          param_8 = param_8 - 1;
          param_5 = param_5 + param_6;
          uVar17 = uVar16 + uVar6;
          lVar9 = lVar20;
        } while (param_8 != 0);
        free(pvVar8);
      }
      else if (local_78 == 0) {
        pcVar3 = (code *)PTR_FUN_00d52c98;
        if (iVar13 < 0x8000) {
          pcVar3 = (code *)PTR_FUN_00d52c90;
        }
        pcVar18 = (code *)PTR_FUN_00d52ca0;
        if (0x7fff < local_68._4_4_ || iVar13 << 1 != param_7) {
          pcVar18 = pcVar3;
        }
        do {
          (*pcVar18)(param_5,param_1 + (long)param_2 * (long)((int)uVar17 >> 0x10),param_7,iVar7,
                     uVar16);
          param_8 = param_8 - 1;
          uVar17 = uVar17 + uVar6;
          param_5 = param_5 + param_6;
        } while (param_8 != 0);
      }
      else {
        lVar11 = lVar15 + lVar11 * (ulong)(param_7 - 1);
        pcVar3 = (code *)PTR_FUN_00d52cb0;
        if (iVar13 < 0x8000) {
          pcVar3 = (code *)PTR_FUN_00d52ca8;
        }
        lVar12 = lVar15;
        if (local_70._4_4_ == 0xffffffff ||
            (int)(local_70._4_4_ + 1) < 0 != SCARRY4(local_70._4_4_,1)) {
          lVar12 = lVar11;
          lVar11 = lVar15;
        }
        uVar5 = *(uint *)PTR_DAT_00d52960;
        uVar19 = lVar12 >> 0x10 & 0xfffffffffffffffc;
        uVar14 = (lVar11 >> 0x10) + 5U & 0xfffffffffffffffc;
        if ((long)iVar13 <= (long)uVar14) {
          uVar14 = (long)iVar13;
        }
        iVar13 = (int)uVar19;
        uVar21 = (int)uVar14 - iVar13;
        if (uVar5 == 0) {
          uVar5 = FUN_007c0604();
        }
        pcVar18 = (code *)PTR_FUN_00d52aa8;
        if ((uVar21 & 7) != 0) {
          pcVar18 = (code *)PTR_FUN_00d52aa0;
        }
        pcVar4 = (code *)PTR_FUN_00d52ab0;
        if ((uVar5 & 0x100) != 0) {
          pcVar4 = pcVar18;
        }
        pvVar8 = malloc((long)(int)(uVar21 * 4 + 0x3f));
        uVar14 = (long)pvVar8 + 0x3fU & 0xffffffffffffffc0;
        if (uVar14 == 0) {
          return 1;
        }
        uVar5 = param_4 * 0x10000 - 0x10000;
        if ((int)uVar5 <= (int)uVar17) {
          uVar17 = uVar5;
        }
        do {
          uVar10 = param_1 + uVar19 * 2 + (long)param_2 * (long)((int)uVar17 >> 0x10);
          if (local_78 != 1) {
            (*pcVar4)(uVar14,uVar10,(long)param_2,uVar21 * 2,uVar17 >> 8 & 0xff);
            uVar10 = uVar14;
          }
          (*pcVar3)(param_5,uVar10,param_7,iVar7 + iVar13 * -0x10000,uVar16);
          param_5 = param_5 + param_6;
          uVar1 = uVar17 + uVar6;
          if ((int)uVar5 <= (int)(uVar17 + uVar6)) {
            uVar1 = uVar5;
          }
          param_8 = param_8 - 1;
          uVar17 = uVar1;
        } while (param_8 != 0);
        free(pvVar8);
      }
    }
    return 0;
  }
  return 0xffffffff;
}


// ===== 007cad84  FUN_007cad84 =====

void FUN_007cad84(undefined1 (*param_1) [15],int param_2,undefined8 *param_3,int param_4,int param_5
                 )

{
  bool bVar1;
  int iVar2;
  undefined1 auVar3 [15];
  undefined1 auVar4 [15];
  undefined1 auVar5 [15];
  undefined1 auVar6 [15];
  undefined1 auVar7 [15];
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  undefined1 auVar17 [15];
  undefined1 auVar18 [15];
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  undefined1 auVar23 [15];
  undefined1 auVar24 [15];
  undefined1 auVar25 [15];
  undefined1 auVar26 [15];
  undefined1 auVar27 [15];
  undefined1 auVar28 [15];
  undefined1 auVar29 [15];
  undefined1 auVar30 [15];
  undefined1 auVar31 [15];
  undefined1 auVar32 [15];
  undefined1 auVar33 [15];
  undefined1 auVar34 [15];
  long lVar35;
  undefined1 (*pauVar36) [15];
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  
  lVar35 = (long)param_4;
  do {
    auVar5 = *param_1;
    auVar3 = *param_1;
    uVar37 = param_1[1][0];
    pauVar36 = (undefined1 (*) [15])(*param_1 + param_2);
    auVar6 = *pauVar36;
    auVar4 = *pauVar36;
    uVar38 = pauVar36[1][0];
    pauVar36 = (undefined1 (*) [15])(*pauVar36 + param_2);
    auVar9 = *pauVar36;
    auVar7 = *pauVar36;
    uVar39 = pauVar36[1][0];
    pauVar36 = (undefined1 (*) [15])(*pauVar36 + param_2);
    auVar10 = *pauVar36;
    auVar8 = *pauVar36;
    uVar40 = pauVar36[1][0];
    pauVar36 = (undefined1 (*) [15])(*pauVar36 + param_2);
    auVar13 = *pauVar36;
    auVar11 = *pauVar36;
    uVar41 = pauVar36[1][0];
    pauVar36 = (undefined1 (*) [15])(*pauVar36 + param_2);
    auVar14 = *pauVar36;
    auVar12 = *pauVar36;
    uVar42 = pauVar36[1][0];
    pauVar36 = (undefined1 (*) [15])(*pauVar36 + param_2);
    auVar17 = *pauVar36;
    auVar15 = *pauVar36;
    uVar43 = pauVar36[1][0];
    pauVar36 = (undefined1 (*) [15])(*pauVar36 + param_2);
    auVar18 = *pauVar36;
    auVar16 = *pauVar36;
    uVar44 = pauVar36[1][0];
    pauVar36 = (undefined1 (*) [15])(*pauVar36 + param_2);
    auVar21 = *pauVar36;
    auVar19 = *pauVar36;
    uVar45 = pauVar36[1][0];
    pauVar36 = (undefined1 (*) [15])(*pauVar36 + param_2);
    auVar22 = *pauVar36;
    auVar20 = *pauVar36;
    uVar46 = pauVar36[1][0];
    pauVar36 = (undefined1 (*) [15])(*pauVar36 + param_2);
    auVar25 = *pauVar36;
    auVar23 = *pauVar36;
    uVar47 = pauVar36[1][0];
    pauVar36 = (undefined1 (*) [15])(*pauVar36 + param_2);
    auVar26 = *pauVar36;
    auVar24 = *pauVar36;
    uVar48 = pauVar36[1][0];
    pauVar36 = (undefined1 (*) [15])(*pauVar36 + param_2);
    auVar29 = *pauVar36;
    auVar27 = *pauVar36;
    uVar49 = pauVar36[1][0];
    pauVar36 = (undefined1 (*) [15])(*pauVar36 + param_2);
    auVar30 = *pauVar36;
    auVar28 = *pauVar36;
    uVar50 = pauVar36[1][0];
    pauVar36 = (undefined1 (*) [15])(*pauVar36 + param_2);
    auVar33 = *pauVar36;
    auVar31 = *pauVar36;
    uVar51 = pauVar36[1][0];
    pauVar36 = (undefined1 (*) [15])(*pauVar36 + param_2);
    auVar34 = *pauVar36;
    auVar32 = *pauVar36;
    uVar52 = pauVar36[1][0];
    param_1 = (undefined1 (*) [15])(param_1[1] + 1);
    iVar2 = param_5 + -0x10;
    *param_3 = CONCAT17(auVar16[0],
                        CONCAT16(auVar15[0],
                                 CONCAT15(auVar12[0],
                                          CONCAT14(auVar11[0],
                                                   CONCAT13(auVar8[0],
                                                            CONCAT12(auVar7[0],
                                                                     CONCAT11(auVar4[0],auVar3[0])))
                                                  ))));
    param_3[1] = CONCAT17(auVar32[0],
                          CONCAT16(auVar31[0],
                                   CONCAT15(auVar28[0],
                                            CONCAT14(auVar27[0],
                                                     CONCAT13(auVar24[0],
                                                              CONCAT12(auVar23[0],
                                                                       CONCAT11(auVar20[0],
                                                                                auVar19[0])))))));
    param_3 = (undefined8 *)((long)param_3 + lVar35);
    *param_3 = CONCAT17(auVar18[1],
                        CONCAT16(auVar17[1],
                                 CONCAT15(auVar14[1],
                                          CONCAT14(auVar13[1],
                                                   CONCAT13(auVar10[1],
                                                            CONCAT12(auVar9[1],
                                                                     CONCAT11(auVar6[1],auVar5[1])))
                                                  ))));
    param_3[1] = CONCAT17(auVar34[1],
                          CONCAT16(auVar33[1],
                                   CONCAT15(auVar30[1],
                                            CONCAT14(auVar29[1],
                                                     CONCAT13(auVar26[1],
                                                              CONCAT12(auVar25[1],
                                                                       CONCAT11(auVar22[1],
                                                                                auVar21[1])))))));
    param_3 = (undefined8 *)((long)param_3 + lVar35);
    *param_3 = CONCAT17(auVar16[2],
                        CONCAT16(auVar15[2],
                                 CONCAT15(auVar12[2],
                                          CONCAT14(auVar11[2],
                                                   CONCAT13(auVar8[2],
                                                            CONCAT12(auVar7[2],
                                                                     CONCAT11(auVar4[2],auVar3[2])))
                                                  ))));
    param_3[1] = CONCAT17(auVar32[2],
                          CONCAT16(auVar31[2],
                                   CONCAT15(auVar28[2],
                                            CONCAT14(auVar27[2],
                                                     CONCAT13(auVar24[2],
                                                              CONCAT12(auVar23[2],
                                                                       CONCAT11(auVar20[2],
                                                                                auVar19[2])))))));
    param_3 = (undefined8 *)((long)param_3 + lVar35);
    *param_3 = CONCAT17(auVar18[3],
                        CONCAT16(auVar17[3],
                                 CONCAT15(auVar14[3],
                                          CONCAT14(auVar13[3],
                                                   CONCAT13(auVar10[3],
                                                            CONCAT12(auVar9[3],
                                                                     CONCAT11(auVar6[3],auVar5[3])))
                                                  ))));
    param_3[1] = CONCAT17(auVar34[3],
                          CONCAT16(auVar33[3],
                                   CONCAT15(auVar30[3],
                                            CONCAT14(auVar29[3],
                                                     CONCAT13(auVar26[3],
                                                              CONCAT12(auVar25[3],
                                                                       CONCAT11(auVar22[3],
                                                                                auVar21[3])))))));
    param_3 = (undefined8 *)((long)param_3 + lVar35);
    *param_3 = CONCAT17(auVar16[4],
                        CONCAT16(auVar15[4],
                                 CONCAT15(auVar12[4],
                                          CONCAT14(auVar11[4],
                                                   CONCAT13(auVar8[4],
                                                            CONCAT12(auVar7[4],
                                                                     CONCAT11(auVar4[4],auVar3[4])))
                                                  ))));
    param_3[1] = CONCAT17(auVar32[4],
                          CONCAT16(auVar31[4],
                                   CONCAT15(auVar28[4],
                                            CONCAT14(auVar27[4],
                                                     CONCAT13(auVar24[4],
                                                              CONCAT12(auVar23[4],
                                                                       CONCAT11(auVar20[4],
                                                                                auVar19[4])))))));
    param_3 = (undefined8 *)((long)param_3 + lVar35);
    *param_3 = CONCAT17(auVar18[5],
                        CONCAT16(auVar17[5],
                                 CONCAT15(auVar14[5],
                                          CONCAT14(auVar13[5],
                                                   CONCAT13(auVar10[5],
                                                            CONCAT12(auVar9[5],
                                                                     CONCAT11(auVar6[5],auVar5[5])))
                                                  ))));
    param_3[1] = CONCAT17(auVar34[5],
                          CONCAT16(auVar33[5],
                                   CONCAT15(auVar30[5],
                                            CONCAT14(auVar29[5],
                                                     CONCAT13(auVar26[5],
                                                              CONCAT12(auVar25[5],
                                                                       CONCAT11(auVar22[5],
                                                                                auVar21[5])))))));
    param_3 = (undefined8 *)((long)param_3 + lVar35);
    *param_3 = CONCAT17(auVar16[6],
                        CONCAT16(auVar15[6],
                                 CONCAT15(auVar12[6],
                                          CONCAT14(auVar11[6],
                                                   CONCAT13(auVar8[6],
                                                            CONCAT12(auVar7[6],
                                                                     CONCAT11(auVar4[6],auVar3[6])))
                                                  ))));
    param_3[1] = CONCAT17(auVar32[6],
                          CONCAT16(auVar31[6],
                                   CONCAT15(auVar28[6],
                                            CONCAT14(auVar27[6],
                                                     CONCAT13(auVar24[6],
                                                              CONCAT12(auVar23[6],
                                                                       CONCAT11(auVar20[6],
                                                                                auVar19[6])))))));
    param_3 = (undefined8 *)((long)param_3 + lVar35);
    *param_3 = CONCAT17(auVar18[7],
                        CONCAT16(auVar17[7],
                                 CONCAT15(auVar14[7],
                                          CONCAT14(auVar13[7],
                                                   CONCAT13(auVar10[7],
                                                            CONCAT12(auVar9[7],
                                                                     CONCAT11(auVar6[7],auVar5[7])))
                                                  ))));
    param_3[1] = CONCAT17(auVar34[7],
                          CONCAT16(auVar33[7],
                                   CONCAT15(auVar30[7],
                                            CONCAT14(auVar29[7],
                                                     CONCAT13(auVar26[7],
                                                              CONCAT12(auVar25[7],
                                                                       CONCAT11(auVar22[7],
                                                                                auVar21[7])))))));
    param_3 = (undefined8 *)((long)param_3 + lVar35);
    *param_3 = CONCAT17(auVar16[8],
                        CONCAT16(auVar15[8],
                                 CONCAT15(auVar12[8],
                                          CONCAT14(auVar11[8],
                                                   CONCAT13(auVar8[8],
                                                            (int3)(CONCAT13(auVar7[8],
                                                                            CONCAT12(auVar4[8],
                                                                                     CONCAT11(auVar3
                                                  [8],auVar8[4]))) >> 8))))));
    param_3[1] = CONCAT17(auVar32[8],
                          CONCAT16(auVar31[8],
                                   CONCAT15(auVar28[8],
                                            CONCAT14(auVar27[8],
                                                     CONCAT13(auVar24[8],
                                                              (int3)(CONCAT13(auVar23[8],
                                                                              CONCAT12(auVar20[8],
                                                                                       CONCAT11(
                                                  auVar19[8],auVar24[4]))) >> 8))))));
    param_3 = (undefined8 *)((long)param_3 + lVar35);
    *param_3 = CONCAT17(auVar18[9],
                        CONCAT16(auVar17[9],
                                 CONCAT15(auVar14[9],
                                          CONCAT14(auVar13[9],
                                                   CONCAT13(auVar10[9],
                                                            (int3)(CONCAT13(auVar9[9],
                                                                            CONCAT12(auVar6[9],
                                                                                     CONCAT11(auVar5
                                                  [9],auVar10[5]))) >> 8))))));
    param_3[1] = CONCAT17(auVar34[9],
                          CONCAT16(auVar33[9],
                                   CONCAT15(auVar30[9],
                                            CONCAT14(auVar29[9],
                                                     CONCAT13(auVar26[9],
                                                              (int3)(CONCAT13(auVar25[9],
                                                                              CONCAT12(auVar22[9],
                                                                                       CONCAT11(
                                                  auVar21[9],auVar26[5]))) >> 8))))));
    param_3 = (undefined8 *)((long)param_3 + lVar35);
    *param_3 = CONCAT17(auVar16[10],
                        CONCAT16(auVar15[10],
                                 CONCAT15(auVar12[10],
                                          CONCAT14(auVar11[10],
                                                   CONCAT13(auVar8[10],
                                                            (int3)(CONCAT13(auVar7[10],
                                                                            CONCAT12(auVar4[10],
                                                                                     CONCAT11(auVar3
                                                  [10],auVar8[6]))) >> 8))))));
    param_3[1] = CONCAT17(auVar32[10],
                          CONCAT16(auVar31[10],
                                   CONCAT15(auVar28[10],
                                            CONCAT14(auVar27[10],
                                                     CONCAT13(auVar24[10],
                                                              (int3)(CONCAT13(auVar23[10],
                                                                              CONCAT12(auVar20[10],
                                                                                       CONCAT11(
                                                  auVar19[10],auVar24[6]))) >> 8))))));
    param_3 = (undefined8 *)((long)param_3 + lVar35);
    *param_3 = CONCAT17(auVar18[0xb],
                        CONCAT16(auVar17[0xb],
                                 CONCAT15(auVar14[0xb],
                                          CONCAT14(auVar13[0xb],
                                                   CONCAT13(auVar10[0xb],
                                                            (int3)(CONCAT13(auVar9[0xb],
                                                                            CONCAT12(auVar6[0xb],
                                                                                     CONCAT11(auVar5
                                                  [0xb],auVar10[7]))) >> 8))))));
    param_3[1] = CONCAT17(auVar34[0xb],
                          CONCAT16(auVar33[0xb],
                                   CONCAT15(auVar30[0xb],
                                            CONCAT14(auVar29[0xb],
                                                     CONCAT13(auVar26[0xb],
                                                              (int3)(CONCAT13(auVar25[0xb],
                                                                              CONCAT12(auVar22[0xb],
                                                                                       CONCAT11(
                                                  auVar21[0xb],auVar26[7]))) >> 8))))));
    param_3 = (undefined8 *)((long)param_3 + lVar35);
    *param_3 = CONCAT17(auVar16[0xc],
                        CONCAT16(auVar15[0xc],
                                 CONCAT15(auVar12[0xc],
                                          CONCAT14(auVar11[0xc],
                                                   CONCAT13(auVar8[0xc],
                                                            CONCAT12(auVar7[0xc],
                                                                     (short)(CONCAT12(auVar4[0xc],
                                                                                      CONCAT11(
                                                  auVar3[0xc],auVar8[8])) >> 8)))))));
    param_3[1] = CONCAT17(auVar32[0xc],
                          CONCAT16(auVar31[0xc],
                                   CONCAT15(auVar28[0xc],
                                            CONCAT14(auVar27[0xc],
                                                     CONCAT13(auVar24[0xc],
                                                              CONCAT12(auVar23[0xc],
                                                                       (short)(CONCAT12(auVar20[0xc]
                                                                                        ,CONCAT11(
                                                  auVar19[0xc],auVar24[8])) >> 8)))))));
    param_3 = (undefined8 *)((long)param_3 + lVar35);
    *param_3 = CONCAT17(auVar18[0xd],
                        CONCAT16(auVar17[0xd],
                                 CONCAT15(auVar14[0xd],
                                          CONCAT14(auVar13[0xd],
                                                   CONCAT13(auVar10[0xd],
                                                            CONCAT12(auVar9[0xd],
                                                                     (short)(CONCAT12(auVar6[0xd],
                                                                                      CONCAT11(
                                                  auVar5[0xd],auVar10[9])) >> 8)))))));
    param_3[1] = CONCAT17(auVar34[0xd],
                          CONCAT16(auVar33[0xd],
                                   CONCAT15(auVar30[0xd],
                                            CONCAT14(auVar29[0xd],
                                                     CONCAT13(auVar26[0xd],
                                                              CONCAT12(auVar25[0xd],
                                                                       (short)(CONCAT12(auVar22[0xd]
                                                                                        ,CONCAT11(
                                                  auVar21[0xd],auVar26[9])) >> 8)))))));
    param_3 = (undefined8 *)((long)param_3 + lVar35);
    *param_3 = CONCAT17(auVar16[0xe],
                        CONCAT16(auVar15[0xe],
                                 CONCAT15(auVar12[0xe],
                                          CONCAT14(auVar11[0xe],
                                                   CONCAT13(auVar8[0xe],
                                                            CONCAT12(auVar7[0xe],
                                                                     (short)(CONCAT12(auVar4[0xe],
                                                                                      CONCAT11(
                                                  auVar3[0xe],auVar8[10])) >> 8)))))));
    param_3[1] = CONCAT17(auVar32[0xe],
                          CONCAT16(auVar31[0xe],
                                   CONCAT15(auVar28[0xe],
                                            CONCAT14(auVar27[0xe],
                                                     CONCAT13(auVar24[0xe],
                                                              CONCAT12(auVar23[0xe],
                                                                       (short)(CONCAT12(auVar20[0xe]
                                                                                        ,CONCAT11(
                                                  auVar19[0xe],auVar24[10])) >> 8)))))));
    param_3 = (undefined8 *)((long)param_3 + lVar35);
    *param_3 = CONCAT17(uVar44,CONCAT16(uVar43,CONCAT15(uVar42,CONCAT14(uVar41,CONCAT13(uVar40,
                                                  CONCAT12(uVar39,(short)(CONCAT12(uVar38,CONCAT11(
                                                  uVar37,auVar10[0xb])) >> 8)))))));
    param_3[1] = CONCAT17(uVar52,CONCAT16(uVar51,CONCAT15(uVar50,CONCAT14(uVar49,CONCAT13(uVar48,
                                                  CONCAT12(uVar47,(short)(CONCAT12(uVar46,CONCAT11(
                                                  uVar45,auVar26[0xb])) >> 8)))))));
    param_3 = (undefined8 *)((long)param_3 + lVar35);
    bVar1 = 0xf < param_5;
    param_5 = iVar2;
  } while (iVar2 != 0 && bVar1);
  return;
}


// ===== 007caf04  FUN_007caf04 =====

void FUN_007caf04(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3,undefined1 *param_4,
                 long param_5,int param_6)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auVar7 [15];
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  undefined1 uVar13;
  byte bVar14;
  undefined1 uVar15;
  byte bVar16;
  undefined1 uVar17;
  byte bVar18;
  undefined1 uVar20;
  byte bVar21;
  short sVar19;
  undefined1 uVar22;
  undefined1 uVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  undefined8 uVar31;
  undefined1 auVar35 [15];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined8 uVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined8 uVar42;
  undefined1 auVar43 [16];
  undefined8 in_d24;
  undefined8 in_register_00005308;
  undefined1 in_q25 [16];
  short in_h26;
  short in_register_00005342;
  short in_register_00005344;
  short in_register_00005346;
  short in_register_00005348;
  short in_register_0000534a;
  short in_register_0000534c;
  short in_register_0000534e;
  undefined8 in_d28;
  undefined8 in_d29;
  undefined8 in_d30;
  unkbyte10 Var32;
  undefined1 auVar33 [12];
  undefined1 auVar34 [14];
  
  bVar3 = *(byte *)(param_5 + 3);
  uVar4 = *(undefined2 *)(param_5 + 0x16);
  do {
    uVar31 = *param_1;
    uVar5 = *param_2;
    uVar6 = *param_3;
    bVar14 = (byte)((ulong)uVar31 >> 8);
    auVar35._0_4_ = (uint)bVar14 << 0x10;
    uVar15 = (undefined1)((ulong)uVar31 >> 0x10);
    auVar35[4] = uVar15;
    uVar17 = (undefined1)((ulong)uVar31 >> 0x18);
    uVar13 = (undefined1)((ulong)uVar31 >> 0x38);
    auVar35[5] = 0;
    auVar35[6] = uVar17;
    auVar35[7] = uVar13;
    uVar20 = (undefined1)((ulong)uVar31 >> 0x20);
    auVar35[8] = uVar20;
    uVar22 = (undefined1)((ulong)uVar31 >> 0x28);
    auVar35[9] = 0;
    auVar35[10] = uVar22;
    uVar23 = (undefined1)((ulong)uVar31 >> 0x30);
    auVar35[0xb] = 0;
    auVar35[0xc] = uVar23;
    auVar35[0xd] = 0;
    auVar35[0xe] = uVar13;
    auVar7[1] = (char)uVar31;
    auVar7[0] = (char)uVar31;
    auVar7._2_13_ = auVar35._2_13_;
    auVar8[3] = bVar14;
    auVar8._0_3_ = auVar7._0_3_;
    auVar8._4_11_ = auVar35._4_11_;
    auVar9[5] = uVar15;
    auVar9._0_5_ = auVar8._0_5_;
    auVar9._6_9_ = auVar35._6_9_;
    uVar31 = CONCAT17(uVar17,auVar9._0_7_);
    auVar10._8_7_ = auVar35._8_7_;
    auVar10._0_8_ = uVar31;
    Var32 = CONCAT19(uVar20,auVar10._0_9_);
    auVar11._10_5_ = auVar35._10_5_;
    auVar11._0_10_ = Var32;
    auVar33._0_11_ = auVar11._0_11_;
    auVar33[0xb] = uVar22;
    auVar12._12_3_ = auVar35._12_3_;
    auVar12._0_12_ = auVar33;
    auVar34._0_13_ = auVar12._0_13_;
    auVar34[0xd] = uVar23;
    auVar37[0xe] = uVar13;
    auVar37._0_14_ = auVar34;
    auVar37[0xf] = uVar13;
    Hint_Prefetch(param_1 + 0x39,0,0,0);
    uVar13 = (undefined1)uVar5;
    uVar15 = (undefined1)((uint)uVar5 >> 8);
    uVar17 = (undefined1)((uint)uVar5 >> 0x10);
    uVar20 = (undefined1)((uint)uVar5 >> 0x18);
    bVar14 = (byte)uVar6;
    bVar16 = (byte)((uint)uVar6 >> 8);
    bVar18 = (byte)((uint)uVar6 >> 0x10);
    bVar21 = (byte)((uint)uVar6 >> 0x18);
    Hint_Prefetch(param_2 + 0x21,0,0,0);
    Hint_Prefetch(param_3 + 0x21,0,0,0);
    iVar2 = param_6 + -8;
    auVar38 = NEON_umull(CONCAT17(uVar20,CONCAT16(uVar20,CONCAT15(uVar17,CONCAT14(uVar17,CONCAT13(
                                                  uVar15,CONCAT12(uVar15,CONCAT11(uVar13,uVar13)))))
                                                 )),in_d30,1);
    auVar36 = NEON_umull(uVar31,in_d24,2);
    auVar41._0_2_ = auVar38._0_2_ + (ushort)bVar14 * (ushort)bVar3;
    auVar41._2_2_ = auVar38._2_2_ + (ushort)bVar14 * (ushort)bVar3;
    auVar41._4_2_ = auVar38._4_2_ + (ushort)bVar16 * (ushort)bVar3;
    auVar41._6_2_ = auVar38._6_2_ + (ushort)bVar16 * (ushort)bVar3;
    auVar41._8_2_ = auVar38._8_2_ + (ushort)bVar18 * (ushort)bVar3;
    auVar41._10_2_ = auVar38._10_2_ + (ushort)bVar18 * (ushort)bVar3;
    auVar41._12_2_ = auVar38._12_2_ + (ushort)bVar21 * (ushort)bVar3;
    auVar41._14_2_ = auVar38._14_2_ + (ushort)bVar21 * (ushort)bVar3;
    sVar19 = auVar36._2_2_;
    sVar24 = auVar36._6_2_;
    sVar25 = auVar36._10_2_;
    sVar26 = auVar36._14_2_;
    sVar27 = (short)((uint)(ushort)((unkuint10)Var32 >> 0x40) * (uint)(ushort)in_register_00005308
                    >> 0x10);
    sVar28 = (short)((uint)auVar33._10_2_ * (uint)(ushort)((ulong)in_register_00005308 >> 0x10) >>
                    0x10);
    sVar29 = (short)((uint)auVar34._12_2_ * (uint)(ushort)((ulong)in_register_00005308 >> 0x20) >>
                    0x10);
    sVar30 = (short)((uint)auVar37._14_2_ * (uint)(ushort)((ulong)in_register_00005308 >> 0x30) >>
                    0x10);
    auVar36 = NEON_umull(CONCAT17(uVar20,CONCAT16(uVar20,CONCAT15(uVar17,CONCAT14(uVar17,CONCAT13(
                                                  uVar15,CONCAT12(uVar15,CONCAT11(uVar13,uVar13)))))
                                                 )),in_d28,1);
    auVar37 = NEON_umull(CONCAT17(bVar21,CONCAT16(bVar21,CONCAT15(bVar18,CONCAT14(bVar18,CONCAT13(
                                                  bVar16,CONCAT12(bVar16,CONCAT11(bVar14,bVar14)))))
                                                 )),in_d29,1);
    auVar40._0_2_ = sVar19 + in_h26;
    auVar40._2_2_ = sVar24 + in_register_00005342;
    auVar40._4_2_ = sVar25 + in_register_00005344;
    auVar40._6_2_ = sVar26 + in_register_00005346;
    auVar40._8_2_ = sVar27 + in_register_00005348;
    auVar40._10_2_ = sVar28 + in_register_0000534a;
    auVar40._12_2_ = sVar29 + in_register_0000534c;
    auVar40._14_2_ = sVar30 + in_register_0000534e;
    auVar38._0_2_ = sVar19 + auVar36._0_2_;
    auVar38._2_2_ = sVar24 + auVar36._2_2_;
    auVar38._4_2_ = sVar25 + auVar36._4_2_;
    auVar38._6_2_ = sVar26 + auVar36._6_2_;
    auVar38._8_2_ = sVar27 + auVar36._8_2_;
    auVar38._10_2_ = sVar28 + auVar36._10_2_;
    auVar38._12_2_ = sVar29 + auVar36._12_2_;
    auVar38._14_2_ = sVar30 + auVar36._14_2_;
    auVar43._0_2_ = sVar19 + auVar37._0_2_;
    auVar43._2_2_ = sVar24 + auVar37._2_2_;
    auVar43._4_2_ = sVar25 + auVar37._4_2_;
    auVar43._6_2_ = sVar26 + auVar37._6_2_;
    auVar43._8_2_ = sVar27 + auVar37._8_2_;
    auVar43._10_2_ = sVar28 + auVar37._10_2_;
    auVar43._12_2_ = sVar29 + auVar37._12_2_;
    auVar43._14_2_ = sVar30 + auVar37._14_2_;
    auVar41 = NEON_uqsub(auVar40,auVar41,2);
    auVar37 = NEON_uqsub(auVar38,in_q25,2);
    auVar36._2_2_ = uVar4;
    auVar36._0_2_ = uVar4;
    auVar36._4_2_ = uVar4;
    auVar36._6_2_ = uVar4;
    auVar36._8_2_ = uVar4;
    auVar36._10_2_ = uVar4;
    auVar36._12_2_ = uVar4;
    auVar36._14_2_ = uVar4;
    auVar36 = NEON_uqsub(auVar43,auVar36,2);
    uVar39 = NEON_uqshrn(auVar41._0_8_,auVar41,6,2);
    uVar31 = NEON_uqshrn(auVar37._0_8_,auVar37,6,2);
    uVar42 = NEON_uqshrn(auVar36._0_8_,auVar36,6,2);
    *param_4 = (char)uVar31;
    param_4[1] = (char)uVar39;
    param_4[2] = (char)uVar42;
    param_4[3] = 0xff;
    param_4[4] = (char)((ulong)uVar31 >> 8);
    param_4[5] = (char)((ulong)uVar39 >> 8);
    param_4[6] = (char)((ulong)uVar42 >> 8);
    param_4[7] = 0xff;
    param_4[8] = (char)((ulong)uVar31 >> 0x10);
    param_4[9] = (char)((ulong)uVar39 >> 0x10);
    param_4[10] = (char)((ulong)uVar42 >> 0x10);
    param_4[0xb] = 0xff;
    param_4[0xc] = (char)((ulong)uVar31 >> 0x18);
    param_4[0xd] = (char)((ulong)uVar39 >> 0x18);
    param_4[0xe] = (char)((ulong)uVar42 >> 0x18);
    param_4[0xf] = 0xff;
    param_4[0x10] = (char)((ulong)uVar31 >> 0x20);
    param_4[0x11] = (char)((ulong)uVar39 >> 0x20);
    param_4[0x12] = (char)((ulong)uVar42 >> 0x20);
    param_4[0x13] = 0xff;
    param_4[0x14] = (char)((ulong)uVar31 >> 0x28);
    param_4[0x15] = (char)((ulong)uVar39 >> 0x28);
    param_4[0x16] = (char)((ulong)uVar42 >> 0x28);
    param_4[0x17] = 0xff;
    param_4[0x18] = (char)((ulong)uVar31 >> 0x30);
    param_4[0x19] = (char)((ulong)uVar39 >> 0x30);
    param_4[0x1a] = (char)((ulong)uVar42 >> 0x30);
    param_4[0x1b] = 0xff;
    param_4[0x1c] = (char)((ulong)uVar31 >> 0x38);
    param_4[0x1d] = (char)((ulong)uVar39 >> 0x38);
    param_4[0x1e] = (char)((ulong)uVar42 >> 0x38);
    param_4[0x1f] = 0xff;
    param_4 = param_4 + 0x20;
    bVar1 = 7 < param_6;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    param_3 = param_3 + 1;
    param_6 = iVar2;
  } while (iVar2 != 0 && bVar1);
  return;
}


// ===== 007caf8c  FUN_007caf8c =====

void FUN_007caf8c(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  
  do {
    uVar18 = param_1[1];
    uVar3 = param_1[2];
    uVar19 = param_1[3];
    uVar4 = param_1[4];
    uVar20 = param_1[5];
    uVar5 = param_1[6];
    uVar21 = param_1[7];
    uVar6 = param_1[8];
    uVar22 = param_1[9];
    uVar7 = param_1[10];
    uVar23 = param_1[0xb];
    uVar8 = param_1[0xc];
    uVar24 = param_1[0xd];
    uVar9 = param_1[0xe];
    uVar25 = param_1[0xf];
    uVar10 = param_1[0x10];
    uVar26 = param_1[0x11];
    uVar11 = param_1[0x12];
    uVar27 = param_1[0x13];
    uVar12 = param_1[0x14];
    uVar28 = param_1[0x15];
    uVar13 = param_1[0x16];
    uVar29 = param_1[0x17];
    uVar14 = param_1[0x18];
    uVar30 = param_1[0x19];
    uVar15 = param_1[0x1a];
    uVar31 = param_1[0x1b];
    uVar16 = param_1[0x1c];
    uVar32 = param_1[0x1d];
    uVar17 = param_1[0x1e];
    uVar33 = param_1[0x1f];
    iVar2 = param_4 + -0x10;
    Hint_Prefetch(param_1 + 0x1e0,0,0,0);
    *param_2 = *param_1;
    param_2[1] = uVar3;
    param_2[2] = uVar4;
    param_2[3] = uVar5;
    param_2[4] = uVar6;
    param_2[5] = uVar7;
    param_2[6] = uVar8;
    param_2[7] = uVar9;
    param_2[8] = uVar10;
    param_2[9] = uVar11;
    param_2[10] = uVar12;
    param_2[0xb] = uVar13;
    param_2[0xc] = uVar14;
    param_2[0xd] = uVar15;
    param_2[0xe] = uVar16;
    param_2[0xf] = uVar17;
    param_2 = param_2 + 0x10;
    *param_3 = uVar18;
    param_3[1] = uVar19;
    param_3[2] = uVar20;
    param_3[3] = uVar21;
    param_3[4] = uVar22;
    param_3[5] = uVar23;
    param_3[6] = uVar24;
    param_3[7] = uVar25;
    param_3[8] = uVar26;
    param_3[9] = uVar27;
    param_3[10] = uVar28;
    param_3[0xb] = uVar29;
    param_3[0xc] = uVar30;
    param_3[0xd] = uVar31;
    param_3[0xe] = uVar32;
    param_3[0xf] = uVar33;
    param_3 = param_3 + 0x10;
    bVar1 = 0xf < param_4;
    param_1 = param_1 + 0x20;
    param_4 = iVar2;
  } while (iVar2 != 0 && bVar1);
  return;
}


// ===== 007cafac  FUN_007cafac =====

void FUN_007cafac(undefined1 (*param_1) [15],undefined1 (*param_2) [15],undefined1 *param_3,
                 int param_4)

{
  bool bVar1;
  int iVar2;
  undefined1 auVar3 [15];
  undefined1 auVar4 [15];
  undefined5 uVar5;
  undefined5 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  
  do {
    uVar5 = *(undefined5 *)(*param_1 + 7);
    uVar7 = (*param_1)[0xc];
    uVar8 = (*param_1)[0xd];
    uVar9 = (*param_1)[0xe];
    auVar3 = *param_1;
    uVar10 = param_1[1][0];
    uVar6 = *(undefined5 *)(*param_2 + 7);
    uVar11 = (*param_2)[0xc];
    uVar12 = (*param_2)[0xd];
    uVar13 = (*param_2)[0xe];
    auVar4 = *param_2;
    uVar14 = param_2[1][0];
    iVar2 = param_4 + -0x10;
    Hint_Prefetch(param_1[0x1e] + 0xe,0,0,0);
    Hint_Prefetch(param_2[0x1e] + 0xe,0,0,0);
    *param_3 = auVar3[0];
    param_3[1] = auVar4[0];
    param_3[2] = auVar3[1];
    param_3[3] = auVar4[1];
    param_3[4] = auVar3[2];
    param_3[5] = auVar4[2];
    param_3[6] = auVar3[3];
    param_3[7] = auVar4[3];
    param_3[8] = auVar3[4];
    param_3[9] = auVar4[4];
    param_3[10] = auVar3[5];
    param_3[0xb] = auVar4[5];
    param_3[0xc] = auVar3[6];
    param_3[0xd] = auVar4[6];
    param_3[0xe] = auVar3[7];
    param_3[0xf] = auVar4[7];
    param_3[0x10] = (char)((uint5)uVar5 >> 8);
    param_3[0x11] = (char)((uint5)uVar6 >> 8);
    param_3[0x12] = (char)((uint5)uVar5 >> 0x10);
    param_3[0x13] = (char)((uint5)uVar6 >> 0x10);
    param_3[0x14] = (char)((uint5)uVar5 >> 0x18);
    param_3[0x15] = (char)((uint5)uVar6 >> 0x18);
    param_3[0x16] = (char)((uint5)uVar5 >> 0x20);
    param_3[0x17] = (char)((uint5)uVar6 >> 0x20);
    param_3[0x18] = uVar7;
    param_3[0x19] = uVar11;
    param_3[0x1a] = uVar8;
    param_3[0x1b] = uVar12;
    param_3[0x1c] = uVar9;
    param_3[0x1d] = uVar13;
    param_3[0x1e] = uVar10;
    param_3[0x1f] = uVar14;
    param_3 = param_3 + 0x20;
    bVar1 = 0xf < param_4;
    param_1 = (undefined1 (*) [15])(param_1[1] + 1);
    param_2 = (undefined1 (*) [15])(param_2[1] + 1);
    param_4 = iVar2;
  } while (iVar2 != 0 && bVar1);
  return;
}


// ===== 007cafd8  FUN_007cafd8 =====

void FUN_007cafd8(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  do {
    uVar3 = *param_1;
    uVar5 = param_1[3];
    uVar4 = param_1[2];
    Hint_Prefetch(param_1 + 0x3c,0,0,0);
    iVar2 = param_3 + -0x20;
    param_2[1] = param_1[1];
    *param_2 = uVar3;
    param_2[3] = uVar5;
    param_2[2] = uVar4;
    bVar1 = 0x1f < param_3;
    param_1 = param_1 + 4;
    param_2 = param_2 + 4;
    param_3 = iVar2;
  } while (iVar2 != 0 && bVar1);
  return;
}


// ===== 007caff4  FUN_007caff4 =====

void FUN_007caff4(undefined1 *param_1,undefined1 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  
  do {
    iVar2 = param_3 + -0x10;
    *param_1 = param_2;
    param_1[1] = param_2;
    param_1[2] = param_2;
    param_1[3] = param_2;
    param_1[4] = param_2;
    param_1[5] = param_2;
    param_1[6] = param_2;
    param_1[7] = param_2;
    param_1[8] = param_2;
    param_1[9] = param_2;
    param_1[10] = param_2;
    param_1[0xb] = param_2;
    param_1[0xc] = param_2;
    param_1[0xd] = param_2;
    param_1[0xe] = param_2;
    param_1[0xf] = param_2;
    param_1 = param_1 + 0x10;
    bVar1 = 0xf < param_3;
    param_3 = iVar2;
  } while (iVar2 != 0 && bVar1);
  return;
}


// ===== 007cb00c  FUN_007cb00c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007cb00c(long param_1,undefined1 *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined1 (*pauVar3) [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  auVar4 = _DAT_00214d30;
  pauVar3 = (undefined1 (*) [16])(param_1 + param_3);
  do {
    iVar2 = param_3 + -0x20;
    auVar5 = a64_TBL(ZEXT816(0),pauVar3[-1],auVar4);
    auVar6 = a64_TBL(ZEXT816(0),pauVar3[-2],auVar4);
    *param_2 = auVar5[0];
    param_2[1] = auVar5[1];
    param_2[2] = auVar5[2];
    param_2[3] = auVar5[3];
    param_2[4] = auVar5[4];
    param_2[5] = auVar5[5];
    param_2[6] = auVar5[6];
    param_2[7] = auVar5[7];
    param_2[8] = auVar5[8];
    param_2[9] = auVar5[9];
    param_2[10] = auVar5[10];
    param_2[0xb] = auVar5[0xb];
    param_2[0xc] = auVar5[0xc];
    param_2[0xd] = auVar5[0xd];
    param_2[0xe] = auVar5[0xe];
    param_2[0xf] = auVar5[0xf];
    param_2[0x10] = auVar6[0];
    param_2[0x11] = auVar6[1];
    param_2[0x12] = auVar6[2];
    param_2[0x13] = auVar6[3];
    param_2[0x14] = auVar6[4];
    param_2[0x15] = auVar6[5];
    param_2[0x16] = auVar6[6];
    param_2[0x17] = auVar6[7];
    param_2[0x18] = auVar6[8];
    param_2[0x19] = auVar6[9];
    param_2[0x1a] = auVar6[10];
    param_2[0x1b] = auVar6[0xb];
    param_2[0x1c] = auVar6[0xc];
    param_2[0x1d] = auVar6[0xd];
    param_2[0x1e] = auVar6[0xe];
    param_2[0x1f] = auVar6[0xf];
    param_2 = param_2 + 0x20;
    bVar1 = 0x1f < param_3;
    param_3 = iVar2;
    pauVar3 = pauVar3 + -2;
  } while (iVar2 != 0 && bVar1);
  return;
}


// ===== 007cb044  FUN_007cb044 =====

void FUN_007cb044(byte *param_1,int param_2,undefined1 *param_3,undefined1 *param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  byte *pbVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  pbVar10 = param_1 + param_2;
  do {
    iVar2 = param_5 + -0x10;
    Hint_Prefetch(param_1 + 0x200,0,0,0);
    sVar3 = (ushort)param_1[10] + (ushort)param_1[0xe] + (ushort)pbVar10[10] + (ushort)pbVar10[0xe];
    sVar4 = (ushort)param_1[0x12] + (ushort)param_1[0x16] +
            (ushort)pbVar10[0x12] + (ushort)pbVar10[0x16];
    sVar5 = (ushort)param_1[0x1a] + (ushort)param_1[0x1e] +
            (ushort)pbVar10[0x1a] + (ushort)pbVar10[0x1e];
    sVar6 = (ushort)param_1[0x22] + (ushort)param_1[0x26] +
            (ushort)pbVar10[0x22] + (ushort)pbVar10[0x26];
    sVar7 = (ushort)param_1[0x2a] + (ushort)param_1[0x2e] +
            (ushort)pbVar10[0x2a] + (ushort)pbVar10[0x2e];
    sVar8 = (ushort)param_1[0x32] + (ushort)param_1[0x36] +
            (ushort)pbVar10[0x32] + (ushort)pbVar10[0x36];
    sVar9 = (ushort)param_1[0x3a] + (ushort)param_1[0x3e] +
            (ushort)pbVar10[0x3a] + (ushort)pbVar10[0x3e];
    Hint_Prefetch(pbVar10 + 0x200,0,0,0);
    auVar13._0_2_ =
         (ushort)param_1[1] + (ushort)param_1[5] + (ushort)pbVar10[1] + (ushort)pbVar10[5];
    auVar13._2_2_ =
         (ushort)param_1[9] + (ushort)param_1[0xd] + (ushort)pbVar10[9] + (ushort)pbVar10[0xd];
    auVar13._4_2_ =
         (ushort)param_1[0x11] + (ushort)param_1[0x15] +
         (ushort)pbVar10[0x11] + (ushort)pbVar10[0x15];
    auVar13._6_2_ =
         (ushort)param_1[0x19] + (ushort)param_1[0x1d] +
         (ushort)pbVar10[0x19] + (ushort)pbVar10[0x1d];
    auVar13._8_2_ =
         (ushort)param_1[0x21] + (ushort)param_1[0x25] +
         (ushort)pbVar10[0x21] + (ushort)pbVar10[0x25];
    auVar13._10_2_ =
         (ushort)param_1[0x29] + (ushort)param_1[0x2d] +
         (ushort)pbVar10[0x29] + (ushort)pbVar10[0x2d];
    auVar13._12_2_ =
         (ushort)param_1[0x31] + (ushort)param_1[0x35] +
         (ushort)pbVar10[0x31] + (ushort)pbVar10[0x35];
    auVar13._14_2_ =
         (ushort)param_1[0x39] + (ushort)param_1[0x3d] +
         (ushort)pbVar10[0x39] + (ushort)pbVar10[0x3d];
    auVar12._0_2_ = (ushort)*param_1 + (ushort)param_1[4] + (ushort)*pbVar10 + (ushort)pbVar10[4];
    auVar12._2_2_ =
         (ushort)param_1[8] + (ushort)param_1[0xc] + (ushort)pbVar10[8] + (ushort)pbVar10[0xc];
    auVar12._4_2_ =
         (ushort)param_1[0x10] + (ushort)param_1[0x14] +
         (ushort)pbVar10[0x10] + (ushort)pbVar10[0x14];
    auVar12._6_2_ =
         (ushort)param_1[0x18] + (ushort)param_1[0x1c] +
         (ushort)pbVar10[0x18] + (ushort)pbVar10[0x1c];
    auVar12._8_2_ =
         (ushort)param_1[0x20] + (ushort)param_1[0x24] +
         (ushort)pbVar10[0x20] + (ushort)pbVar10[0x24];
    auVar12._10_2_ =
         (ushort)param_1[0x28] + (ushort)param_1[0x2c] +
         (ushort)pbVar10[0x28] + (ushort)pbVar10[0x2c];
    auVar12._12_2_ =
         (ushort)param_1[0x30] + (ushort)param_1[0x34] +
         (ushort)pbVar10[0x30] + (ushort)pbVar10[0x34];
    auVar12._14_2_ =
         (ushort)param_1[0x38] + (ushort)param_1[0x3c] +
         (ushort)pbVar10[0x38] + (ushort)pbVar10[0x3c];
    auVar11[2] = (char)sVar3;
    auVar11._0_2_ =
         (ushort)param_1[2] + (ushort)param_1[6] + (ushort)pbVar10[2] + (ushort)pbVar10[6];
    auVar11[3] = (char)((ushort)sVar3 >> 8);
    auVar11[4] = (char)sVar4;
    auVar11[5] = (char)((ushort)sVar4 >> 8);
    auVar11[6] = (char)sVar5;
    auVar11[7] = (char)((ushort)sVar5 >> 8);
    auVar11[8] = (char)sVar6;
    auVar11[9] = (char)((ushort)sVar6 >> 8);
    auVar11[10] = (char)sVar7;
    auVar11[0xb] = (char)((ushort)sVar7 >> 8);
    auVar11[0xc] = (char)sVar8;
    auVar11[0xd] = (char)((ushort)sVar8 >> 8);
    auVar11[0xe] = (char)sVar9;
    auVar11[0xf] = (char)((ushort)sVar9 >> 8);
    auVar11 = NEON_urshr(auVar11,2,2);
    auVar13 = NEON_urshr(auVar13,2,2);
    auVar12 = NEON_urshr(auVar12,2,2);
    *param_3 = (char)((ushort)(auVar11._0_2_ * 0x70 + auVar13._0_2_ * -0x4a + auVar12._0_2_ * -0x26
                              + -0x8000) >> 8);
    param_3[1] = (char)((ushort)(auVar11._2_2_ * 0x70 + auVar13._2_2_ * -0x4a +
                                 auVar12._2_2_ * -0x26 + -0x8000) >> 8);
    param_3[2] = (char)((ushort)(auVar11._4_2_ * 0x70 + auVar13._4_2_ * -0x4a +
                                 auVar12._4_2_ * -0x26 + -0x8000) >> 8);
    param_3[3] = (char)((ushort)(auVar11._6_2_ * 0x70 + auVar13._6_2_ * -0x4a +
                                 auVar12._6_2_ * -0x26 + -0x8000) >> 8);
    param_3[4] = (char)((ushort)(auVar11._8_2_ * 0x70 + auVar13._8_2_ * -0x4a +
                                 auVar12._8_2_ * -0x26 + -0x8000) >> 8);
    param_3[5] = (char)((ushort)(auVar11._10_2_ * 0x70 + auVar13._10_2_ * -0x4a +
                                 auVar12._10_2_ * -0x26 + -0x8000) >> 8);
    param_3[6] = (char)((ushort)(auVar11._12_2_ * 0x70 + auVar13._12_2_ * -0x4a +
                                 auVar12._12_2_ * -0x26 + -0x8000) >> 8);
    param_3[7] = (char)((ushort)(auVar11._14_2_ * 0x70 + auVar13._14_2_ * -0x4a +
                                 auVar12._14_2_ * -0x26 + -0x8000) >> 8);
    param_3 = param_3 + 8;
    *param_4 = (char)((ushort)(auVar12._0_2_ * 0x70 + auVar13._0_2_ * -0x5e + auVar11._0_2_ * -0x12
                              + -0x8000) >> 8);
    param_4[1] = (char)((ushort)(auVar12._2_2_ * 0x70 + auVar13._2_2_ * -0x5e +
                                 auVar11._2_2_ * -0x12 + -0x8000) >> 8);
    param_4[2] = (char)((ushort)(auVar12._4_2_ * 0x70 + auVar13._4_2_ * -0x5e +
                                 auVar11._4_2_ * -0x12 + -0x8000) >> 8);
    param_4[3] = (char)((ushort)(auVar12._6_2_ * 0x70 + auVar13._6_2_ * -0x5e +
                                 auVar11._6_2_ * -0x12 + -0x8000) >> 8);
    param_4[4] = (char)((ushort)(auVar12._8_2_ * 0x70 + auVar13._8_2_ * -0x5e +
                                 auVar11._8_2_ * -0x12 + -0x8000) >> 8);
    param_4[5] = (char)((ushort)(auVar12._10_2_ * 0x70 + auVar13._10_2_ * -0x5e +
                                 auVar11._10_2_ * -0x12 + -0x8000) >> 8);
    param_4[6] = (char)((ushort)(auVar12._12_2_ * 0x70 + auVar13._12_2_ * -0x5e +
                                 auVar11._12_2_ * -0x12 + -0x8000) >> 8);
    param_4[7] = (char)((ushort)(auVar12._14_2_ * 0x70 + auVar13._14_2_ * -0x5e +
                                 auVar11._14_2_ * -0x12 + -0x8000) >> 8);
    param_4 = param_4 + 8;
    bVar1 = 0xf < param_5;
    param_1 = param_1 + 0x40;
    pbVar10 = pbVar10 + 0x40;
    param_5 = iVar2;
  } while (iVar2 != 0 && bVar1);
  return;
}


// ===== 007cb0cc  FUN_007cb0cc =====

void FUN_007cb0cc(undefined4 *param_1,int param_2,undefined8 *param_3,undefined8 *param_4,
                 int param_5)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auVar7 [16];
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 auVar16 [16];
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined1 auVar25 [16];
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 in_q24 [16];
  
  uVar3 = DAT_00214d44;
  puVar4 = (undefined4 *)((long)param_1 + (long)param_2);
  do {
    uVar5 = *param_1;
    uVar14 = param_1[1];
    uVar8 = param_1[2];
    uVar17 = param_1[3];
    uVar10 = param_1[4];
    uVar19 = param_1[5];
    uVar12 = param_1[6];
    uVar21 = param_1[7];
    uVar23 = param_1[8];
    uVar32 = param_1[9];
    uVar26 = param_1[10];
    uVar34 = param_1[0xb];
    uVar28 = param_1[0xc];
    uVar36 = param_1[0xd];
    uVar30 = param_1[0xe];
    uVar38 = param_1[0xf];
    iVar2 = param_5 + -0x10;
    uVar6 = *puVar4;
    uVar15 = puVar4[1];
    uVar9 = puVar4[2];
    uVar18 = puVar4[3];
    uVar11 = puVar4[4];
    uVar20 = puVar4[5];
    uVar13 = puVar4[6];
    uVar22 = puVar4[7];
    uVar24 = puVar4[8];
    uVar33 = puVar4[9];
    uVar27 = puVar4[10];
    uVar35 = puVar4[0xb];
    uVar29 = puVar4[0xc];
    uVar37 = puVar4[0xd];
    uVar31 = puVar4[0xe];
    uVar39 = puVar4[0xf];
    Hint_Prefetch(param_1 + 0x80,0,0,0);
    auVar44._0_8_ =
         CONCAT26((ushort)(byte)((uint)uVar5 >> 0x18) + (ushort)(byte)((uint)uVar14 >> 0x18) +
                  (ushort)(byte)((uint)uVar6 >> 0x18) + (ushort)(byte)((uint)uVar15 >> 0x18),
                  CONCAT24((ushort)(byte)((uint)uVar5 >> 0x10) +
                           (ushort)(byte)((uint)uVar14 >> 0x10) +
                           (ushort)(byte)((uint)uVar6 >> 0x10) +
                           (ushort)(byte)((uint)uVar15 >> 0x10),
                           CONCAT22((ushort)(byte)((uint)uVar5 >> 8) +
                                    (ushort)(byte)((uint)uVar14 >> 8) +
                                    (ushort)(byte)((uint)uVar6 >> 8) +
                                    (ushort)(byte)((uint)uVar15 >> 8),
                                    (ushort)(byte)uVar5 + (ushort)(byte)uVar14 + (ushort)(byte)uVar6
                                    + (ushort)(byte)uVar15)));
    auVar44._8_2_ =
         (ushort)(byte)uVar8 + (ushort)(byte)uVar17 + (ushort)(byte)uVar9 + (ushort)(byte)uVar18;
    auVar44._10_2_ =
         (ushort)(byte)((uint)uVar8 >> 8) + (ushort)(byte)((uint)uVar17 >> 8) +
         (ushort)(byte)((uint)uVar9 >> 8) + (ushort)(byte)((uint)uVar18 >> 8);
    auVar44._12_2_ =
         (ushort)(byte)((uint)uVar8 >> 0x10) + (ushort)(byte)((uint)uVar17 >> 0x10) +
         (ushort)(byte)((uint)uVar9 >> 0x10) + (ushort)(byte)((uint)uVar18 >> 0x10);
    auVar44._14_2_ =
         (ushort)(byte)((uint)uVar8 >> 0x18) + (ushort)(byte)((uint)uVar17 >> 0x18) +
         (ushort)(byte)((uint)uVar9 >> 0x18) + (ushort)(byte)((uint)uVar18 >> 0x18);
    auVar42._0_8_ =
         CONCAT26((ushort)(byte)((uint)uVar23 >> 0x18) + (ushort)(byte)((uint)uVar32 >> 0x18) +
                  (ushort)(byte)((uint)uVar24 >> 0x18) + (ushort)(byte)((uint)uVar33 >> 0x18),
                  CONCAT24((ushort)(byte)((uint)uVar23 >> 0x10) +
                           (ushort)(byte)((uint)uVar32 >> 0x10) +
                           (ushort)(byte)((uint)uVar24 >> 0x10) +
                           (ushort)(byte)((uint)uVar33 >> 0x10),
                           CONCAT22((ushort)(byte)((uint)uVar23 >> 8) +
                                    (ushort)(byte)((uint)uVar32 >> 8) +
                                    (ushort)(byte)((uint)uVar24 >> 8) +
                                    (ushort)(byte)((uint)uVar33 >> 8),
                                    (ushort)(byte)uVar23 + (ushort)(byte)uVar32 +
                                    (ushort)(byte)uVar24 + (ushort)(byte)uVar33)));
    auVar42._8_2_ =
         (ushort)(byte)uVar26 + (ushort)(byte)uVar34 + (ushort)(byte)uVar27 + (ushort)(byte)uVar35;
    auVar42._10_2_ =
         (ushort)(byte)((uint)uVar26 >> 8) + (ushort)(byte)((uint)uVar34 >> 8) +
         (ushort)(byte)((uint)uVar27 >> 8) + (ushort)(byte)((uint)uVar35 >> 8);
    auVar42._12_2_ =
         (ushort)(byte)((uint)uVar26 >> 0x10) + (ushort)(byte)((uint)uVar34 >> 0x10) +
         (ushort)(byte)((uint)uVar27 >> 0x10) + (ushort)(byte)((uint)uVar35 >> 0x10);
    auVar42._14_2_ =
         (ushort)(byte)((uint)uVar26 >> 0x18) + (ushort)(byte)((uint)uVar34 >> 0x18) +
         (ushort)(byte)((uint)uVar27 >> 0x18) + (ushort)(byte)((uint)uVar35 >> 0x18);
    Hint_Prefetch(puVar4 + 0x80,0,0,0);
    auVar40._8_8_ = auVar44._8_8_;
    auVar40._0_8_ = NEON_rshrn(auVar44._0_8_,auVar44,2,2);
    auVar43._8_8_ = auVar42._8_8_;
    auVar43._0_8_ = NEON_rshrn(auVar42._0_8_,auVar42,2,2);
    auVar7._2_2_ = (ushort)(byte)((uint)uVar10 >> 8) + (ushort)(byte)((uint)uVar19 >> 8) +
                   (ushort)(byte)((uint)uVar11 >> 8) + (ushort)(byte)((uint)uVar20 >> 8);
    auVar7._0_2_ = (ushort)(byte)uVar10 + (ushort)(byte)uVar19 + (ushort)(byte)uVar11 +
                   (ushort)(byte)uVar20;
    auVar7._4_2_ = (ushort)(byte)((uint)uVar10 >> 0x10) + (ushort)(byte)((uint)uVar19 >> 0x10) +
                   (ushort)(byte)((uint)uVar11 >> 0x10) + (ushort)(byte)((uint)uVar20 >> 0x10);
    auVar7._6_2_ = (ushort)(byte)((uint)uVar10 >> 0x18) + (ushort)(byte)((uint)uVar19 >> 0x18) +
                   (ushort)(byte)((uint)uVar11 >> 0x18) + (ushort)(byte)((uint)uVar20 >> 0x18);
    auVar7._8_2_ = (ushort)(byte)uVar12 + (ushort)(byte)uVar21 + (ushort)(byte)uVar13 +
                   (ushort)(byte)uVar22;
    auVar7._10_2_ =
         (ushort)(byte)((uint)uVar12 >> 8) + (ushort)(byte)((uint)uVar21 >> 8) +
         (ushort)(byte)((uint)uVar13 >> 8) + (ushort)(byte)((uint)uVar22 >> 8);
    auVar7._12_2_ =
         (ushort)(byte)((uint)uVar12 >> 0x10) + (ushort)(byte)((uint)uVar21 >> 0x10) +
         (ushort)(byte)((uint)uVar13 >> 0x10) + (ushort)(byte)((uint)uVar22 >> 0x10);
    auVar7._14_2_ =
         (ushort)(byte)((uint)uVar12 >> 0x18) + (ushort)(byte)((uint)uVar21 >> 0x18) +
         (ushort)(byte)((uint)uVar13 >> 0x18) + (ushort)(byte)((uint)uVar22 >> 0x18);
    auVar41 = NEON_rshrn2(auVar40,auVar7,2,2);
    auVar16._2_2_ =
         (ushort)(byte)((uint)uVar28 >> 8) + (ushort)(byte)((uint)uVar36 >> 8) +
         (ushort)(byte)((uint)uVar29 >> 8) + (ushort)(byte)((uint)uVar37 >> 8);
    auVar16._0_2_ =
         (ushort)(byte)uVar28 + (ushort)(byte)uVar36 + (ushort)(byte)uVar29 + (ushort)(byte)uVar37;
    auVar16._4_2_ =
         (ushort)(byte)((uint)uVar28 >> 0x10) + (ushort)(byte)((uint)uVar36 >> 0x10) +
         (ushort)(byte)((uint)uVar29 >> 0x10) + (ushort)(byte)((uint)uVar37 >> 0x10);
    auVar16._6_2_ =
         (ushort)(byte)((uint)uVar28 >> 0x18) + (ushort)(byte)((uint)uVar36 >> 0x18) +
         (ushort)(byte)((uint)uVar29 >> 0x18) + (ushort)(byte)((uint)uVar37 >> 0x18);
    auVar16._8_2_ =
         (ushort)(byte)uVar30 + (ushort)(byte)uVar38 + (ushort)(byte)uVar31 + (ushort)(byte)uVar39;
    auVar16._10_2_ =
         (ushort)(byte)((uint)uVar30 >> 8) + (ushort)(byte)((uint)uVar38 >> 8) +
         (ushort)(byte)((uint)uVar31 >> 8) + (ushort)(byte)((uint)uVar39 >> 8);
    auVar16._12_2_ =
         (ushort)(byte)((uint)uVar30 >> 0x10) + (ushort)(byte)((uint)uVar38 >> 0x10) +
         (ushort)(byte)((uint)uVar31 >> 0x10) + (ushort)(byte)((uint)uVar39 >> 0x10);
    auVar16._14_2_ =
         (ushort)(byte)((uint)uVar30 >> 0x18) + (ushort)(byte)((uint)uVar38 >> 0x18) +
         (ushort)(byte)((uint)uVar31 >> 0x18) + (ushort)(byte)((uint)uVar39 >> 0x18);
    auVar44 = NEON_rshrn2(auVar43,auVar16,2,2);
    auVar7 = NEON_usdot(ZEXT816(0),auVar41,in_q24);
    auVar16 = NEON_usdot(ZEXT816(0),auVar44,in_q24);
    auVar25._4_4_ = uVar3;
    auVar25._0_4_ = uVar3;
    auVar25._8_4_ = uVar3;
    auVar25._12_4_ = uVar3;
    auVar25 = NEON_usdot(ZEXT816(0),auVar41,auVar25);
    auVar41._4_4_ = uVar3;
    auVar41._0_4_ = uVar3;
    auVar41._8_4_ = uVar3;
    auVar41._12_4_ = uVar3;
    auVar41 = NEON_usdot(ZEXT816(0),auVar44,auVar41);
    *param_3 = CONCAT17((char)((ushort)(-0x8000 - auVar16._12_2_) >> 8),
                        CONCAT16((char)((ushort)(-0x8000 - auVar16._8_2_) >> 8),
                                 CONCAT15((char)((ushort)(-0x8000 - auVar16._4_2_) >> 8),
                                          CONCAT14((char)((ushort)(-0x8000 - auVar16._0_2_) >> 8),
                                                   CONCAT13((char)((ushort)(-0x8000 - auVar7._12_2_)
                                                                  >> 8),
                                                            CONCAT12((char)((ushort)(-0x8000 -
                                                                                    auVar7._8_2_) >>
                                                                           8),CONCAT11((char)((
                                                  ushort)(-0x8000 - auVar7._4_2_) >> 8),
                                                  (char)((ushort)(-0x8000 - auVar7._0_2_) >> 8))))))
                                ));
    *param_4 = CONCAT17((char)((ushort)(-0x8000 - auVar41._12_2_) >> 8),
                        CONCAT16((char)((ushort)(-0x8000 - auVar41._8_2_) >> 8),
                                 CONCAT15((char)((ushort)(-0x8000 - auVar41._4_2_) >> 8),
                                          CONCAT14((char)((ushort)(-0x8000 - auVar41._0_2_) >> 8),
                                                   CONCAT13((char)((ushort)(-0x8000 - auVar25._12_2_
                                                                           ) >> 8),
                                                            CONCAT12((char)((ushort)(-0x8000 -
                                                                                    auVar25._8_2_)
                                                                           >> 8),
                                                                     CONCAT11((char)((ushort)(
                                                  -0x8000 - auVar25._4_2_) >> 8),
                                                  (char)((ushort)(-0x8000 - auVar25._0_2_) >> 8)))))
                                         )));
    bVar1 = 0xf < param_5;
    param_1 = param_1 + 0x10;
    param_3 = param_3 + 1;
    param_4 = param_4 + 1;
    puVar4 = puVar4 + 0x10;
    param_5 = iVar2;
  } while (iVar2 != 0 && bVar1);
  return;
}


// ===== 007cb180  FUN_007cb180 =====

void FUN_007cb180(undefined1 *param_1,undefined1 *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  byte bVar5;
  byte bVar6;
  short sVar7;
  undefined1 auVar4 [16];
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  
  bVar3 = (byte)DAT_00214d48;
  bVar5 = (byte)((ulong)DAT_00214d48 >> 8);
  bVar6 = (byte)((ulong)DAT_00214d48 >> 0x10);
  sVar7 = (short)((ulong)DAT_00214d48 >> 0x20);
  do {
    bVar16 = param_1[5];
    bVar31 = param_1[6];
    bVar17 = param_1[9];
    bVar32 = param_1[10];
    bVar18 = param_1[0xd];
    bVar33 = param_1[0xe];
    bVar19 = param_1[0x11];
    bVar34 = param_1[0x12];
    bVar20 = param_1[0x15];
    bVar35 = param_1[0x16];
    bVar21 = param_1[0x19];
    bVar36 = param_1[0x1a];
    bVar22 = param_1[0x1d];
    bVar37 = param_1[0x1e];
    bVar8 = param_1[0x20];
    bVar23 = param_1[0x21];
    bVar38 = param_1[0x22];
    bVar9 = param_1[0x24];
    bVar24 = param_1[0x25];
    bVar39 = param_1[0x26];
    bVar10 = param_1[0x28];
    bVar25 = param_1[0x29];
    bVar40 = param_1[0x2a];
    bVar11 = param_1[0x2c];
    bVar26 = param_1[0x2d];
    bVar41 = param_1[0x2e];
    bVar12 = param_1[0x30];
    bVar27 = param_1[0x31];
    bVar42 = param_1[0x32];
    bVar13 = param_1[0x34];
    bVar28 = param_1[0x35];
    bVar43 = param_1[0x36];
    bVar14 = param_1[0x38];
    bVar29 = param_1[0x39];
    bVar44 = param_1[0x3a];
    bVar15 = param_1[0x3c];
    bVar30 = param_1[0x3d];
    bVar45 = param_1[0x3e];
    iVar2 = param_3 + -0x10;
    auVar4 = NEON_umull(CONCAT17(param_1[0x1c],
                                 CONCAT16(param_1[0x18],
                                          CONCAT15(param_1[0x14],
                                                   CONCAT14(param_1[0x10],
                                                            CONCAT13(param_1[0xc],
                                                                     CONCAT12(param_1[8],
                                                                              CONCAT11(param_1[4],
                                                                                       *param_1)))))
                                         )),
                        CONCAT17(bVar3,CONCAT16(bVar3,CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,
                                                  CONCAT12(bVar3,CONCAT11(bVar3,bVar3))))))),1);
    Hint_Prefetch(param_1 + 0x200,0,0,0);
    *param_2 = (char)((ushort)(auVar4._0_2_ + (ushort)(byte)param_1[1] * (ushort)bVar5 +
                               (ushort)(byte)param_1[2] * (ushort)bVar6 + sVar7) >> 8);
    param_2[1] = (char)((ushort)(auVar4._2_2_ + (ushort)bVar16 * (ushort)bVar5 +
                                 (ushort)bVar31 * (ushort)bVar6 + sVar7) >> 8);
    param_2[2] = (char)((ushort)(auVar4._4_2_ + (ushort)bVar17 * (ushort)bVar5 +
                                 (ushort)bVar32 * (ushort)bVar6 + sVar7) >> 8);
    param_2[3] = (char)((ushort)(auVar4._6_2_ + (ushort)bVar18 * (ushort)bVar5 +
                                 (ushort)bVar33 * (ushort)bVar6 + sVar7) >> 8);
    param_2[4] = (char)((ushort)(auVar4._8_2_ + (ushort)bVar19 * (ushort)bVar5 +
                                 (ushort)bVar34 * (ushort)bVar6 + sVar7) >> 8);
    param_2[5] = (char)((ushort)(auVar4._10_2_ + (ushort)bVar20 * (ushort)bVar5 +
                                 (ushort)bVar35 * (ushort)bVar6 + sVar7) >> 8);
    param_2[6] = (char)((ushort)(auVar4._12_2_ + (ushort)bVar21 * (ushort)bVar5 +
                                 (ushort)bVar36 * (ushort)bVar6 + sVar7) >> 8);
    param_2[7] = (char)((ushort)(auVar4._14_2_ + (ushort)bVar22 * (ushort)bVar5 +
                                 (ushort)bVar37 * (ushort)bVar6 + sVar7) >> 8);
    param_2[8] = (char)((ushort)((ushort)bVar8 * (ushort)bVar3 + (ushort)bVar23 * (ushort)bVar5 +
                                 (ushort)bVar38 * (ushort)bVar6 + sVar7) >> 8);
    param_2[9] = (char)((ushort)((ushort)bVar9 * (ushort)bVar3 + (ushort)bVar24 * (ushort)bVar5 +
                                 (ushort)bVar39 * (ushort)bVar6 + sVar7) >> 8);
    param_2[10] = (char)((ushort)((ushort)bVar10 * (ushort)bVar3 + (ushort)bVar25 * (ushort)bVar5 +
                                  (ushort)bVar40 * (ushort)bVar6 + sVar7) >> 8);
    param_2[0xb] = (char)((ushort)((ushort)bVar11 * (ushort)bVar3 + (ushort)bVar26 * (ushort)bVar5 +
                                   (ushort)bVar41 * (ushort)bVar6 + sVar7) >> 8);
    param_2[0xc] = (char)((ushort)((ushort)bVar12 * (ushort)bVar3 + (ushort)bVar27 * (ushort)bVar5 +
                                   (ushort)bVar42 * (ushort)bVar6 + sVar7) >> 8);
    param_2[0xd] = (char)((ushort)((ushort)bVar13 * (ushort)bVar3 + (ushort)bVar28 * (ushort)bVar5 +
                                   (ushort)bVar43 * (ushort)bVar6 + sVar7) >> 8);
    param_2[0xe] = (char)((ushort)((ushort)bVar14 * (ushort)bVar3 + (ushort)bVar29 * (ushort)bVar5 +
                                   (ushort)bVar44 * (ushort)bVar6 + sVar7) >> 8);
    param_2[0xf] = (char)((ushort)((ushort)bVar15 * (ushort)bVar3 + (ushort)bVar30 * (ushort)bVar5 +
                                   (ushort)bVar45 * (ushort)bVar6 + sVar7) >> 8);
    param_2 = param_2 + 0x10;
    bVar1 = 0xf < param_3;
    param_1 = param_1 + 0x40;
    param_3 = iVar2;
  } while (iVar2 != 0 && bVar1);
  return;
}


// ===== 007cb1d8  FUN_007cb1d8 =====

void FUN_007cb1d8(undefined1 (*param_1) [16],undefined1 *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined1 (*pauVar3) [16];
  undefined4 uVar6;
  short sVar8;
  undefined1 auVar7 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  
  uVar6 = (undefined4)DAT_00214d48;
  sVar8 = (short)((ulong)DAT_00214d48 >> 0x20);
  do {
    auVar9 = *param_1;
    pauVar3 = param_1 + 1;
    pauVar4 = param_1 + 2;
    pauVar5 = param_1 + 3;
    param_1 = param_1 + 4;
    iVar2 = param_3 + -0x10;
    auVar7._4_4_ = uVar6;
    auVar7._0_4_ = uVar6;
    auVar7._8_4_ = uVar6;
    auVar7._12_4_ = uVar6;
    auVar7 = NEON_udot(auVar9,auVar7,1);
    auVar9._4_4_ = uVar6;
    auVar9._0_4_ = uVar6;
    auVar9._8_4_ = uVar6;
    auVar9._12_4_ = uVar6;
    auVar9 = NEON_udot(*pauVar3,auVar9,1);
    auVar10._4_4_ = uVar6;
    auVar10._0_4_ = uVar6;
    auVar10._8_4_ = uVar6;
    auVar10._12_4_ = uVar6;
    auVar10 = NEON_udot(*pauVar4,auVar10,1);
    auVar11._4_4_ = uVar6;
    auVar11._0_4_ = uVar6;
    auVar11._8_4_ = uVar6;
    auVar11._12_4_ = uVar6;
    auVar11 = NEON_udot(*pauVar5,auVar11,1);
    *param_2 = (char)((ushort)(auVar7._0_2_ + sVar8) >> 8);
    param_2[1] = (char)((ushort)(auVar7._4_2_ + sVar8) >> 8);
    param_2[2] = (char)((ushort)(auVar7._8_2_ + sVar8) >> 8);
    param_2[3] = (char)((ushort)(auVar7._12_2_ + sVar8) >> 8);
    param_2[4] = (char)((ushort)(auVar9._0_2_ + sVar8) >> 8);
    param_2[5] = (char)((ushort)(auVar9._4_2_ + sVar8) >> 8);
    param_2[6] = (char)((ushort)(auVar9._8_2_ + sVar8) >> 8);
    param_2[7] = (char)((ushort)(auVar9._12_2_ + sVar8) >> 8);
    param_2[8] = (char)((ushort)(auVar10._0_2_ + sVar8) >> 8);
    param_2[9] = (char)((ushort)(auVar10._4_2_ + sVar8) >> 8);
    param_2[10] = (char)((ushort)(auVar10._8_2_ + sVar8) >> 8);
    param_2[0xb] = (char)((ushort)(auVar10._12_2_ + sVar8) >> 8);
    param_2[0xc] = (char)((ushort)(auVar11._0_2_ + sVar8) >> 8);
    param_2[0xd] = (char)((ushort)(auVar11._4_2_ + sVar8) >> 8);
    param_2[0xe] = (char)((ushort)(auVar11._8_2_ + sVar8) >> 8);
    param_2[0xf] = (char)((ushort)(auVar11._12_2_ + sVar8) >> 8);
    param_2 = param_2 + 0x10;
    bVar1 = 0xf < param_3;
    param_3 = iVar2;
  } while (iVar2 != 0 && bVar1);
  return;
}


// ===== 007cb234  FUN_007cb234 =====

void FUN_007cb234(undefined1 *param_1,undefined1 (*param_2) [16],long param_3,int param_4,
                 int param_5)

{
  bool bVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined7 uVar4;
  byte bVar5;
  byte bVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 (*pauVar22) [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  
  pauVar22 = (undefined1 (*) [16])(*param_2 + param_3);
  bVar6 = (byte)param_5;
  bVar5 = -bVar6;
  if (param_5 == 0) {
    do {
      uVar7 = (*param_2)[1];
      uVar8 = (*param_2)[2];
      uVar9 = (*param_2)[3];
      uVar10 = (*param_2)[4];
      uVar11 = (*param_2)[5];
      uVar12 = (*param_2)[6];
      uVar13 = (*param_2)[7];
      uVar14 = (*param_2)[8];
      uVar15 = (*param_2)[9];
      uVar16 = (*param_2)[10];
      uVar17 = (*param_2)[0xb];
      uVar18 = (*param_2)[0xc];
      uVar19 = (*param_2)[0xd];
      uVar20 = (*param_2)[0xe];
      uVar21 = (*param_2)[0xf];
      iVar2 = param_4 + -0x10;
      Hint_Prefetch(param_2 + 0x1d,0,0,0);
      *param_1 = (*param_2)[0];
      param_1[1] = uVar7;
      param_1[2] = uVar8;
      param_1[3] = uVar9;
      param_1[4] = uVar10;
      param_1[5] = uVar11;
      param_1[6] = uVar12;
      param_1[7] = uVar13;
      param_1[8] = uVar14;
      param_1[9] = uVar15;
      param_1[10] = uVar16;
      param_1[0xb] = uVar17;
      param_1[0xc] = uVar18;
      param_1[0xd] = uVar19;
      param_1[0xe] = uVar20;
      param_1[0xf] = uVar21;
      param_1 = param_1 + 0x10;
      bVar1 = 0xf < param_4;
      param_2 = param_2 + 1;
      param_4 = iVar2;
    } while (iVar2 != 0 && bVar1);
  }
  else if (param_5 == 0x80) {
    do {
      iVar2 = param_4 + -0x10;
      Hint_Prefetch(param_2 + 0x1d,0,0,0);
      auVar24 = NEON_urhadd(*param_2,*pauVar22,1);
      Hint_Prefetch(pauVar22 + 0x1d,0,0,0);
      *param_1 = auVar24[0];
      param_1[1] = auVar24[1];
      param_1[2] = auVar24[2];
      param_1[3] = auVar24[3];
      param_1[4] = auVar24[4];
      param_1[5] = auVar24[5];
      param_1[6] = auVar24[6];
      param_1[7] = auVar24[7];
      param_1[8] = auVar24[8];
      param_1[9] = auVar24[9];
      param_1[10] = auVar24[10];
      param_1[0xb] = auVar24[0xb];
      param_1[0xc] = auVar24[0xc];
      param_1[0xd] = auVar24[0xd];
      param_1[0xe] = auVar24[0xe];
      param_1[0xf] = auVar24[0xf];
      param_1 = param_1 + 0x10;
      bVar1 = 0xf < param_4;
      param_2 = param_2 + 1;
      pauVar22 = pauVar22 + 1;
      param_4 = iVar2;
    } while (iVar2 != 0 && bVar1);
  }
  else {
    do {
      auVar3 = *param_2;
      uVar4 = *(undefined7 *)(*pauVar22 + 8);
      iVar2 = param_4 + -0x10;
      auVar24 = NEON_umull(auVar3._0_8_,
                           CONCAT17(bVar5,CONCAT16(bVar5,CONCAT15(bVar5,CONCAT14(bVar5,CONCAT13(
                                                  bVar5,CONCAT12(bVar5,CONCAT11(bVar5,bVar5))))))),1
                          );
      Hint_Prefetch(param_2 + 0x1d,0,0,0);
      auVar23._8_8_ = auVar3._8_8_;
      Hint_Prefetch(pauVar22 + 0x1d,0,0,0);
      auVar25._0_2_ = auVar24._0_2_ + (ushort)(byte)(*pauVar22)[0] * (ushort)bVar6;
      auVar25._2_2_ = auVar24._2_2_ + (ushort)(byte)(*pauVar22)[1] * (ushort)bVar6;
      auVar25._4_2_ = auVar24._4_2_ + (ushort)(byte)(*pauVar22)[2] * (ushort)bVar6;
      auVar25._6_2_ = auVar24._6_2_ + (ushort)(byte)(*pauVar22)[3] * (ushort)bVar6;
      auVar25._8_2_ = auVar24._8_2_ + (ushort)(byte)(*pauVar22)[4] * (ushort)bVar6;
      auVar25._10_2_ = auVar24._10_2_ + (ushort)(byte)(*pauVar22)[5] * (ushort)bVar6;
      auVar25._12_2_ = auVar24._12_2_ + (ushort)(byte)(*pauVar22)[6] * (ushort)bVar6;
      auVar25._14_2_ = auVar24._14_2_ + (ushort)(byte)(*pauVar22)[7] * (ushort)bVar6;
      auVar23._0_8_ = NEON_rshrn(auVar3._0_8_,auVar25,8,2);
      auVar24._2_2_ =
           (ushort)auVar3[9] * (ushort)bVar5 + (ushort)(byte)((uint7)uVar4 >> 8) * (ushort)bVar6;
      auVar24._0_2_ = (ushort)auVar3[8] * (ushort)bVar5 + (ushort)(byte)uVar4 * (ushort)bVar6;
      auVar24._4_2_ =
           (ushort)auVar3[10] * (ushort)bVar5 + (ushort)(byte)((uint7)uVar4 >> 0x10) * (ushort)bVar6
      ;
      auVar24._6_2_ =
           (ushort)auVar3[0xb] * (ushort)bVar5 +
           (ushort)(byte)((uint7)uVar4 >> 0x18) * (ushort)bVar6;
      auVar24._8_2_ =
           (ushort)auVar3[0xc] * (ushort)bVar5 +
           (ushort)(byte)((uint7)uVar4 >> 0x20) * (ushort)bVar6;
      auVar24._10_2_ =
           (ushort)auVar3[0xd] * (ushort)bVar5 +
           (ushort)(byte)((uint7)uVar4 >> 0x28) * (ushort)bVar6;
      auVar24._12_2_ =
           (ushort)auVar3[0xe] * (ushort)bVar5 +
           (ushort)(byte)((uint7)uVar4 >> 0x30) * (ushort)bVar6;
      auVar24._14_2_ =
           (ushort)auVar3[0xf] * (ushort)bVar5 + (ushort)(byte)(*pauVar22)[0xf] * (ushort)bVar6;
      auVar24 = NEON_rshrn2(auVar23,auVar24,8,2);
      *param_1 = auVar24[0];
      param_1[1] = auVar24[1];
      param_1[2] = auVar24[2];
      param_1[3] = auVar24[3];
      param_1[4] = auVar24[4];
      param_1[5] = auVar24[5];
      param_1[6] = auVar24[6];
      param_1[7] = auVar24[7];
      param_1[8] = auVar24[8];
      param_1[9] = auVar24[9];
      param_1[10] = auVar24[10];
      param_1[0xb] = auVar24[0xb];
      param_1[0xc] = auVar24[0xc];
      param_1[0xd] = auVar24[0xd];
      param_1[0xe] = auVar24[0xe];
      param_1[0xf] = auVar24[0xf];
      param_1 = param_1 + 0x10;
      bVar1 = 0xf < param_4;
      param_2 = param_2 + 1;
      pauVar22 = pauVar22 + 1;
      param_4 = iVar2;
    } while (iVar2 != 0 && bVar1);
  }
  return;
}


// ===== 007cb2d0  FUN_007cb2d0 =====

undefined1  [16]
FUN_007cb2d0(undefined1 *param_1,undefined8 param_2,undefined1 *param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  
  do {
    auVar3[0] = *param_1;
    auVar3[1] = param_1[2];
    uVar4 = param_1[3];
    auVar3[2] = param_1[4];
    uVar5 = param_1[5];
    auVar3[3] = param_1[6];
    uVar6 = param_1[7];
    auVar3[4] = param_1[8];
    uVar7 = param_1[9];
    auVar3[5] = param_1[10];
    uVar8 = param_1[0xb];
    auVar3[6] = param_1[0xc];
    uVar9 = param_1[0xd];
    auVar3[7] = param_1[0xe];
    uVar10 = param_1[0xf];
    auVar3[8] = param_1[0x10];
    uVar11 = param_1[0x11];
    auVar3[9] = param_1[0x12];
    uVar12 = param_1[0x13];
    auVar3[10] = param_1[0x14];
    uVar13 = param_1[0x15];
    auVar3[0xb] = param_1[0x16];
    uVar14 = param_1[0x17];
    auVar3[0xc] = param_1[0x18];
    uVar15 = param_1[0x19];
    auVar3[0xd] = param_1[0x1a];
    uVar16 = param_1[0x1b];
    auVar3[0xe] = param_1[0x1c];
    uVar17 = param_1[0x1d];
    auVar3[0xf] = param_1[0x1e];
    uVar18 = param_1[0x1f];
    iVar2 = param_4 + -0x10;
    Hint_Prefetch(param_1 + 0x1e0,0,0,0);
    *param_3 = param_1[1];
    param_3[1] = uVar4;
    param_3[2] = uVar5;
    param_3[3] = uVar6;
    param_3[4] = uVar7;
    param_3[5] = uVar8;
    param_3[6] = uVar9;
    param_3[7] = uVar10;
    param_3[8] = uVar11;
    param_3[9] = uVar12;
    param_3[10] = uVar13;
    param_3[0xb] = uVar14;
    param_3[0xc] = uVar15;
    param_3[0xd] = uVar16;
    param_3[0xe] = uVar17;
    param_3[0xf] = uVar18;
    param_3 = param_3 + 0x10;
    bVar1 = 0xf < param_4;
    param_1 = param_1 + 0x20;
    param_4 = iVar2;
  } while (iVar2 != 0 && bVar1);
  return auVar3;
}


// ===== 007cb2ec  FUN_007cb2ec =====

void FUN_007cb2ec(undefined1 *param_1,undefined8 param_2,undefined1 *param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  do {
    auVar3[0] = *param_1;
    auVar3[1] = param_1[2];
    auVar3[2] = param_1[4];
    auVar3[3] = param_1[6];
    auVar3[4] = param_1[8];
    auVar3[5] = param_1[10];
    auVar3[6] = param_1[0xc];
    auVar3[7] = param_1[0xe];
    auVar3[8] = param_1[0x10];
    auVar3[9] = param_1[0x12];
    auVar3[10] = param_1[0x14];
    auVar3[0xb] = param_1[0x16];
    auVar3[0xc] = param_1[0x18];
    auVar3[0xd] = param_1[0x1a];
    auVar3[0xe] = param_1[0x1c];
    auVar3[0xf] = param_1[0x1e];
    iVar2 = param_4 + -0x10;
    auVar4[1] = param_1[3];
    auVar4[0] = param_1[1];
    auVar4[2] = param_1[5];
    auVar4[3] = param_1[7];
    auVar4[4] = param_1[9];
    auVar4[5] = param_1[0xb];
    auVar4[6] = param_1[0xd];
    auVar4[7] = param_1[0xf];
    auVar4[8] = param_1[0x11];
    auVar4[9] = param_1[0x13];
    auVar4[10] = param_1[0x15];
    auVar4[0xb] = param_1[0x17];
    auVar4[0xc] = param_1[0x19];
    auVar4[0xd] = param_1[0x1b];
    auVar4[0xe] = param_1[0x1d];
    auVar4[0xf] = param_1[0x1f];
    auVar4 = NEON_urhadd(auVar3,auVar4,1);
    Hint_Prefetch(param_1 + 0x1e0,0,0,0);
    *param_3 = auVar4[0];
    param_3[1] = auVar4[1];
    param_3[2] = auVar4[2];
    param_3[3] = auVar4[3];
    param_3[4] = auVar4[4];
    param_3[5] = auVar4[5];
    param_3[6] = auVar4[6];
    param_3[7] = auVar4[7];
    param_3[8] = auVar4[8];
    param_3[9] = auVar4[9];
    param_3[10] = auVar4[10];
    param_3[0xb] = auVar4[0xb];
    param_3[0xc] = auVar4[0xc];
    param_3[0xd] = auVar4[0xd];
    param_3[0xe] = auVar4[0xe];
    param_3[0xf] = auVar4[0xf];
    param_3 = param_3 + 0x10;
    bVar1 = 0xf < param_4;
    param_1 = param_1 + 0x20;
    param_4 = iVar2;
  } while (iVar2 != 0 && bVar1);
  return;
}


// ===== 007cb30c  FUN_007cb30c =====

void FUN_007cb30c(byte *param_1,long param_2,undefined1 *param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  undefined1 auVar10 [15];
  byte *pbVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  pbVar11 = param_1 + param_2;
  do {
    auVar10 = *(undefined1 (*) [15])(param_1 + 0x10);
    iVar2 = param_4 + -0x10;
    Hint_Prefetch(param_1 + 0x1e0,0,0,0);
    Hint_Prefetch(pbVar11 + 0x1e0,0,0,0);
    auVar12._0_8_ =
         CONCAT26((ushort)param_1[6] + (ushort)param_1[7] + (ushort)pbVar11[6] + (ushort)pbVar11[7],
                  CONCAT24((ushort)param_1[4] + (ushort)param_1[5] +
                           (ushort)pbVar11[4] + (ushort)pbVar11[5],
                           CONCAT22((ushort)param_1[2] + (ushort)param_1[3] +
                                    (ushort)pbVar11[2] + (ushort)pbVar11[3],
                                    (ushort)*param_1 + (ushort)param_1[1] +
                                    (ushort)*pbVar11 + (ushort)pbVar11[1])));
    auVar12._8_2_ =
         (ushort)param_1[8] + (ushort)param_1[9] + (ushort)pbVar11[8] + (ushort)pbVar11[9];
    auVar12._10_2_ =
         (ushort)param_1[10] + (ushort)param_1[0xb] + (ushort)pbVar11[10] + (ushort)pbVar11[0xb];
    auVar12._12_2_ =
         (ushort)param_1[0xc] + (ushort)param_1[0xd] + (ushort)pbVar11[0xc] + (ushort)pbVar11[0xd];
    auVar12._14_2_ =
         (ushort)param_1[0xe] + (ushort)param_1[0xf] + (ushort)pbVar11[0xe] + (ushort)pbVar11[0xf];
    sVar3 = (ushort)auVar10[2] + (ushort)auVar10[3] + (ushort)pbVar11[0x12] + (ushort)pbVar11[0x13];
    sVar4 = (ushort)auVar10[4] + (ushort)auVar10[5] + (ushort)pbVar11[0x14] + (ushort)pbVar11[0x15];
    sVar5 = (ushort)auVar10[6] + (ushort)auVar10[7] + (ushort)pbVar11[0x16] + (ushort)pbVar11[0x17];
    sVar6 = (ushort)auVar10[8] + (ushort)auVar10[9] + (ushort)pbVar11[0x18] + (ushort)pbVar11[0x19];
    sVar7 = (ushort)auVar10[10] + (ushort)auVar10[0xb] +
            (ushort)pbVar11[0x1a] + (ushort)pbVar11[0x1b];
    sVar8 = (ushort)auVar10[0xc] + (ushort)auVar10[0xd] +
            (ushort)pbVar11[0x1c] + (ushort)pbVar11[0x1d];
    sVar9 = (ushort)auVar10[0xe] + (ushort)param_1[0x1f] +
            (ushort)pbVar11[0x1e] + (ushort)pbVar11[0x1f];
    auVar13._8_8_ = auVar12._8_8_;
    auVar13._0_8_ = NEON_rshrn(auVar12._0_8_,auVar12,2,2);
    auVar14[2] = (char)sVar3;
    auVar14._0_2_ =
         (ushort)auVar10[0] + (ushort)auVar10[1] + (ushort)pbVar11[0x10] + (ushort)pbVar11[0x11];
    auVar14[3] = (char)((ushort)sVar3 >> 8);
    auVar14[4] = (char)sVar4;
    auVar14[5] = (char)((ushort)sVar4 >> 8);
    auVar14[6] = (char)sVar5;
    auVar14[7] = (char)((ushort)sVar5 >> 8);
    auVar14[8] = (char)sVar6;
    auVar14[9] = (char)((ushort)sVar6 >> 8);
    auVar14[10] = (char)sVar7;
    auVar14[0xb] = (char)((ushort)sVar7 >> 8);
    auVar14[0xc] = (char)sVar8;
    auVar14[0xd] = (char)((ushort)sVar8 >> 8);
    auVar14[0xe] = (char)sVar9;
    auVar14[0xf] = (char)((ushort)sVar9 >> 8);
    auVar14 = NEON_rshrn2(auVar13,auVar14,2,2);
    *param_3 = auVar14[0];
    param_3[1] = auVar14[1];
    param_3[2] = auVar14[2];
    param_3[3] = auVar14[3];
    param_3[4] = auVar14[4];
    param_3[5] = auVar14[5];
    param_3[6] = auVar14[6];
    param_3[7] = auVar14[7];
    param_3[8] = auVar14[8];
    param_3[9] = auVar14[9];
    param_3[10] = auVar14[10];
    param_3[0xb] = auVar14[0xb];
    param_3[0xc] = auVar14[0xc];
    param_3[0xd] = auVar14[0xd];
    param_3[0xe] = auVar14[0xe];
    param_3[0xf] = auVar14[0xf];
    param_3 = param_3 + 0x10;
    bVar1 = 0xf < param_4;
    param_1 = param_1 + 0x20;
    pbVar11 = pbVar11 + 0x20;
    param_4 = iVar2;
  } while (iVar2 != 0 && bVar1);
  return;
}


// ===== 007cb34c  FUN_007cb34c =====

undefined1  [16]
FUN_007cb34c(undefined1 *param_1,undefined8 param_2,undefined1 *param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  
  do {
    auVar3[0] = *param_1;
    auVar3[1] = param_1[4];
    uVar4 = param_1[6];
    auVar3[2] = param_1[8];
    uVar5 = param_1[10];
    auVar3[3] = param_1[0xc];
    uVar6 = param_1[0xe];
    auVar3[4] = param_1[0x10];
    uVar7 = param_1[0x12];
    auVar3[5] = param_1[0x14];
    uVar8 = param_1[0x16];
    auVar3[6] = param_1[0x18];
    uVar9 = param_1[0x1a];
    auVar3[7] = param_1[0x1c];
    uVar10 = param_1[0x1e];
    auVar3[8] = param_1[0x20];
    uVar11 = param_1[0x22];
    auVar3[9] = param_1[0x24];
    uVar12 = param_1[0x26];
    auVar3[10] = param_1[0x28];
    uVar13 = param_1[0x2a];
    auVar3[0xb] = param_1[0x2c];
    uVar14 = param_1[0x2e];
    auVar3[0xc] = param_1[0x30];
    uVar15 = param_1[0x32];
    auVar3[0xd] = param_1[0x34];
    uVar16 = param_1[0x36];
    auVar3[0xe] = param_1[0x38];
    uVar17 = param_1[0x3a];
    auVar3[0xf] = param_1[0x3c];
    uVar18 = param_1[0x3e];
    iVar2 = param_4 + -0x10;
    Hint_Prefetch(param_1 + 0x200,0,0,0);
    *param_3 = param_1[2];
    param_3[1] = uVar4;
    param_3[2] = uVar5;
    param_3[3] = uVar6;
    param_3[4] = uVar7;
    param_3[5] = uVar8;
    param_3[6] = uVar9;
    param_3[7] = uVar10;
    param_3[8] = uVar11;
    param_3[9] = uVar12;
    param_3[10] = uVar13;
    param_3[0xb] = uVar14;
    param_3[0xc] = uVar15;
    param_3[0xd] = uVar16;
    param_3[0xe] = uVar17;
    param_3[0xf] = uVar18;
    param_3 = param_3 + 0x10;
    bVar1 = 0xf < param_4;
    param_1 = param_1 + 0x40;
    param_4 = iVar2;
  } while (iVar2 != 0 && bVar1);
  return auVar3;
}


// ===== 007cb368  FUN_007cb368 =====

void FUN_007cb368(byte *param_1,long param_2,undefined8 *param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  unkbyte10 Var3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  pbVar4 = param_1 + param_2 + param_2 * 2;
  pbVar5 = param_1 + param_2;
  pbVar6 = param_1 + param_2 * 2;
  do {
    uVar8 = *(undefined8 *)(param_1 + 0x18);
    uVar14 = (ushort)((ulong)uVar8 >> 0x10);
    uVar15 = (ushort)((ulong)uVar8 >> 0x20);
    uVar16 = (ushort)((ulong)uVar8 >> 0x30);
    Var3 = *(unkbyte10 *)(param_1 + 0x10);
    uVar9 = *(undefined8 *)(pbVar5 + 8);
    uVar8 = *(undefined8 *)pbVar5;
    uVar18 = *(undefined8 *)(pbVar5 + 0x18);
    uVar17 = *(undefined8 *)(pbVar5 + 0x10);
    uVar11 = *(undefined8 *)(pbVar6 + 8);
    uVar10 = *(undefined8 *)pbVar6;
    uVar20 = *(undefined8 *)(pbVar6 + 0x18);
    uVar19 = *(undefined8 *)(pbVar6 + 0x10);
    uVar13 = *(undefined8 *)(pbVar4 + 8);
    uVar12 = *(undefined8 *)pbVar4;
    uVar22 = *(undefined8 *)(pbVar4 + 0x18);
    uVar21 = *(undefined8 *)(pbVar4 + 0x10);
    iVar2 = param_4 + -8;
    Hint_Prefetch(param_1 + 0x1e0,0,0,0);
    Hint_Prefetch(pbVar5 + 0x1e0,0,0,0);
    Hint_Prefetch(pbVar6 + 0x1e0,0,0,0);
    Hint_Prefetch(pbVar4 + 0x1e0,0,0,0);
    auVar7._0_8_ = CONCAT26((ushort)param_1[0xc] + (ushort)param_1[0xd] +
                            (ushort)(byte)((ulong)uVar9 >> 0x20) +
                            (ushort)(byte)((ulong)uVar9 >> 0x28) +
                            (ushort)(byte)((ulong)uVar11 >> 0x20) +
                            (ushort)(byte)((ulong)uVar11 >> 0x28) +
                            (ushort)(byte)((ulong)uVar13 >> 0x20) +
                            (ushort)(byte)((ulong)uVar13 >> 0x28) +
                            (ushort)param_1[0xe] + (ushort)param_1[0xf] +
                            (ushort)(byte)((ulong)uVar9 >> 0x30) +
                            (ushort)(byte)((ulong)uVar9 >> 0x38) +
                            (ushort)(byte)((ulong)uVar11 >> 0x30) +
                            (ushort)(byte)((ulong)uVar11 >> 0x38) +
                            (ushort)(byte)((ulong)uVar13 >> 0x30) +
                            (ushort)(byte)((ulong)uVar13 >> 0x38),
                            CONCAT24((ushort)param_1[8] + (ushort)param_1[9] +
                                     (ushort)(byte)uVar9 + (ushort)(byte)((ulong)uVar9 >> 8) +
                                     (ushort)(byte)uVar11 + (ushort)(byte)((ulong)uVar11 >> 8) +
                                     (ushort)(byte)uVar13 + (ushort)(byte)((ulong)uVar13 >> 8) +
                                     (ushort)param_1[10] + (ushort)param_1[0xb] +
                                     (ushort)(byte)((ulong)uVar9 >> 0x10) +
                                     (ushort)(byte)((ulong)uVar9 >> 0x18) +
                                     (ushort)(byte)((ulong)uVar11 >> 0x10) +
                                     (ushort)(byte)((ulong)uVar11 >> 0x18) +
                                     (ushort)(byte)((ulong)uVar13 >> 0x10) +
                                     (ushort)(byte)((ulong)uVar13 >> 0x18),
                                     CONCAT22((ushort)param_1[4] + (ushort)param_1[5] +
                                              (ushort)(byte)((ulong)uVar8 >> 0x20) +
                                              (ushort)(byte)((ulong)uVar8 >> 0x28) +
                                              (ushort)(byte)((ulong)uVar10 >> 0x20) +
                                              (ushort)(byte)((ulong)uVar10 >> 0x28) +
                                              (ushort)(byte)((ulong)uVar12 >> 0x20) +
                                              (ushort)(byte)((ulong)uVar12 >> 0x28) +
                                              (ushort)param_1[6] + (ushort)param_1[7] +
                                              (ushort)(byte)((ulong)uVar8 >> 0x30) +
                                              (ushort)(byte)((ulong)uVar8 >> 0x38) +
                                              (ushort)(byte)((ulong)uVar10 >> 0x30) +
                                              (ushort)(byte)((ulong)uVar10 >> 0x38) +
                                              (ushort)(byte)((ulong)uVar12 >> 0x30) +
                                              (ushort)(byte)((ulong)uVar12 >> 0x38),
                                              (ushort)*param_1 + (ushort)param_1[1] +
                                              (ushort)(byte)uVar8 +
                                              (ushort)(byte)((ulong)uVar8 >> 8) +
                                              (ushort)(byte)uVar10 +
                                              (ushort)(byte)((ulong)uVar10 >> 8) +
                                              (ushort)(byte)uVar12 +
                                              (ushort)(byte)((ulong)uVar12 >> 8) +
                                              (ushort)param_1[2] + (ushort)param_1[3] +
                                              (ushort)(byte)((ulong)uVar8 >> 0x10) +
                                              (ushort)(byte)((ulong)uVar8 >> 0x18) +
                                              (ushort)(byte)((ulong)uVar10 >> 0x10) +
                                              (ushort)(byte)((ulong)uVar10 >> 0x18) +
                                              (ushort)(byte)((ulong)uVar12 >> 0x10) +
                                              (ushort)(byte)((ulong)uVar12 >> 0x18))));
    auVar7._8_2_ = (ushort)(byte)Var3 + (ushort)(byte)((unkuint10)Var3 >> 8) +
                   (ushort)(byte)uVar17 + (ushort)(byte)((ulong)uVar17 >> 8) +
                   (ushort)(byte)uVar19 + (ushort)(byte)((ulong)uVar19 >> 8) +
                   (ushort)(byte)uVar21 + (ushort)(byte)((ulong)uVar21 >> 8) +
                   (ushort)(byte)((unkuint10)Var3 >> 0x10) + (ushort)(byte)((unkuint10)Var3 >> 0x18)
                   + (ushort)(byte)((ulong)uVar17 >> 0x10) + (ushort)(byte)((ulong)uVar17 >> 0x18) +
                   (ushort)(byte)((ulong)uVar19 >> 0x10) + (ushort)(byte)((ulong)uVar19 >> 0x18) +
                   (ushort)(byte)((ulong)uVar21 >> 0x10) + (ushort)(byte)((ulong)uVar21 >> 0x18);
    auVar7._10_2_ =
         (ushort)(byte)((unkuint10)Var3 >> 0x20) + (ushort)(byte)((unkuint10)Var3 >> 0x28) +
         (ushort)(byte)((ulong)uVar17 >> 0x20) + (ushort)(byte)((ulong)uVar17 >> 0x28) +
         (ushort)(byte)((ulong)uVar19 >> 0x20) + (ushort)(byte)((ulong)uVar19 >> 0x28) +
         (ushort)(byte)((ulong)uVar21 >> 0x20) + (ushort)(byte)((ulong)uVar21 >> 0x28) +
         (ushort)(byte)((unkuint10)Var3 >> 0x30) + (ushort)(byte)((unkuint10)Var3 >> 0x38) +
         (ushort)(byte)((ulong)uVar17 >> 0x30) + (ushort)(byte)((ulong)uVar17 >> 0x38) +
         (ushort)(byte)((ulong)uVar19 >> 0x30) + (ushort)(byte)((ulong)uVar19 >> 0x38) +
         (ushort)(byte)((ulong)uVar21 >> 0x30) + (ushort)(byte)((ulong)uVar21 >> 0x38);
    auVar7._12_2_ =
         (ushort)(byte)((unkuint10)Var3 >> 0x40) + (ushort)(byte)((unkuint10)Var3 >> 0x48) +
         (ushort)(byte)uVar18 + (ushort)(byte)((ulong)uVar18 >> 8) +
         (ushort)(byte)uVar20 + (ushort)(byte)((ulong)uVar20 >> 8) +
         (ushort)(byte)uVar22 + (ushort)(byte)((ulong)uVar22 >> 8) +
         (uVar14 & 0xff) + (uVar14 >> 8) +
         (ushort)(byte)((ulong)uVar18 >> 0x10) + (ushort)(byte)((ulong)uVar18 >> 0x18) +
         (ushort)(byte)((ulong)uVar20 >> 0x10) + (ushort)(byte)((ulong)uVar20 >> 0x18) +
         (ushort)(byte)((ulong)uVar22 >> 0x10) + (ushort)(byte)((ulong)uVar22 >> 0x18);
    auVar7._14_2_ =
         (uVar15 & 0xff) + (uVar15 >> 8) +
         (ushort)(byte)((ulong)uVar18 >> 0x20) + (ushort)(byte)((ulong)uVar18 >> 0x28) +
         (ushort)(byte)((ulong)uVar20 >> 0x20) + (ushort)(byte)((ulong)uVar20 >> 0x28) +
         (ushort)(byte)((ulong)uVar22 >> 0x20) + (ushort)(byte)((ulong)uVar22 >> 0x28) +
         (uVar16 & 0xff) + (uVar16 >> 8) +
         (ushort)(byte)((ulong)uVar18 >> 0x30) + (ushort)(byte)((ulong)uVar18 >> 0x38) +
         (ushort)(byte)((ulong)uVar20 >> 0x30) + (ushort)(byte)((ulong)uVar20 >> 0x38) +
         (ushort)(byte)((ulong)uVar22 >> 0x30) + (ushort)(byte)((ulong)uVar22 >> 0x38);
    uVar8 = NEON_rshrn(auVar7._0_8_,auVar7,4,2);
    *param_3 = uVar8;
    bVar1 = 7 < param_4;
    param_1 = param_1 + 0x20;
    param_3 = param_3 + 1;
    pbVar4 = pbVar4 + 0x20;
    pbVar5 = pbVar5 + 0x20;
    pbVar6 = pbVar6 + 0x20;
    param_4 = iVar2;
  } while (iVar2 != 0 && bVar1);
  return;
}


// ===== 007cb3d4  FUN_007cb3d4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007cb3d4(undefined1 (*param_1) [16],undefined8 param_2,undefined1 *param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  auVar5 = _DAT_00214d70;
  auVar4 = _DAT_00214d60;
  auVar3 = _DAT_00214d50;
  do {
    iVar2 = param_4 + -0x30;
    auVar6 = a64_TBL(ZEXT816(0),*param_1,param_1[1],auVar3);
    Hint_Prefetch(param_1 + 0x20,0,0,0);
    auVar7 = a64_TBL(ZEXT816(0),param_1[1],param_1[2],auVar4);
    auVar8 = a64_TBL(ZEXT816(0),param_1[2],param_1[3],auVar5);
    *param_3 = auVar6[0];
    param_3[1] = auVar6[1];
    param_3[2] = auVar6[2];
    param_3[3] = auVar6[3];
    param_3[4] = auVar6[4];
    param_3[5] = auVar6[5];
    param_3[6] = auVar6[6];
    param_3[7] = auVar6[7];
    param_3[8] = auVar6[8];
    param_3[9] = auVar6[9];
    param_3[10] = auVar6[10];
    param_3[0xb] = auVar6[0xb];
    param_3[0xc] = auVar6[0xc];
    param_3[0xd] = auVar6[0xd];
    param_3[0xe] = auVar6[0xe];
    param_3[0xf] = auVar6[0xf];
    param_3[0x10] = auVar7[0];
    param_3[0x11] = auVar7[1];
    param_3[0x12] = auVar7[2];
    param_3[0x13] = auVar7[3];
    param_3[0x14] = auVar7[4];
    param_3[0x15] = auVar7[5];
    param_3[0x16] = auVar7[6];
    param_3[0x17] = auVar7[7];
    param_3[0x18] = auVar7[8];
    param_3[0x19] = auVar7[9];
    param_3[0x1a] = auVar7[10];
    param_3[0x1b] = auVar7[0xb];
    param_3[0x1c] = auVar7[0xc];
    param_3[0x1d] = auVar7[0xd];
    param_3[0x1e] = auVar7[0xe];
    param_3[0x1f] = auVar7[0xf];
    param_3[0x20] = auVar8[0];
    param_3[0x21] = auVar8[1];
    param_3[0x22] = auVar8[2];
    param_3[0x23] = auVar8[3];
    param_3[0x24] = auVar8[4];
    param_3[0x25] = auVar8[5];
    param_3[0x26] = auVar8[6];
    param_3[0x27] = auVar8[7];
    param_3[0x28] = auVar8[8];
    param_3[0x29] = auVar8[9];
    param_3[0x2a] = auVar8[10];
    param_3[0x2b] = auVar8[0xb];
    param_3[0x2c] = auVar8[0xc];
    param_3[0x2d] = auVar8[0xd];
    param_3[0x2e] = auVar8[0xe];
    param_3[0x2f] = auVar8[0xf];
    param_3 = param_3 + 0x30;
    bVar1 = 0x2f < param_4;
    param_1 = param_1 + 4;
    param_4 = iVar2;
  } while (iVar2 != 0 && bVar1);
  return;
}


// ===== 007cb420  FUN_007cb420 =====

void FUN_007cb420(byte *param_1,long param_2,undefined1 *param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  byte *pbVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  pbVar10 = param_1 + param_2;
  do {
    iVar2 = param_4 + -0x30;
    Hint_Prefetch(param_1 + 0x200,0,0,0);
    auVar11._2_2_ = (ushort)pbVar10[4] + (ushort)param_1[4] * 3;
    auVar11._0_2_ = (ushort)*pbVar10 + (ushort)*param_1 * 3;
    auVar11._4_2_ = (ushort)pbVar10[8] + (ushort)param_1[8] * 3;
    auVar11._6_2_ = (ushort)pbVar10[0xc] + (ushort)param_1[0xc] * 3;
    auVar11._8_2_ = (ushort)pbVar10[0x10] + (ushort)param_1[0x10] * 3;
    auVar11._10_2_ = (ushort)pbVar10[0x14] + (ushort)param_1[0x14] * 3;
    auVar11._12_2_ = (ushort)pbVar10[0x18] + (ushort)param_1[0x18] * 3;
    auVar11._14_2_ = (ushort)pbVar10[0x1c] + (ushort)param_1[0x1c] * 3;
    NEON_uqrshrn(auVar11,2,2);
    auVar14._2_2_ = (ushort)pbVar10[5] + (ushort)param_1[5] * 3;
    auVar14._0_2_ = (ushort)pbVar10[1] + (ushort)param_1[1] * 3;
    auVar14._4_2_ = (ushort)pbVar10[9] + (ushort)param_1[9] * 3;
    auVar14._6_2_ = (ushort)pbVar10[0xd] + (ushort)param_1[0xd] * 3;
    auVar14._8_2_ = (ushort)pbVar10[0x11] + (ushort)param_1[0x11] * 3;
    auVar14._10_2_ = (ushort)pbVar10[0x15] + (ushort)param_1[0x15] * 3;
    auVar14._12_2_ = (ushort)pbVar10[0x19] + (ushort)param_1[0x19] * 3;
    auVar14._14_2_ = (ushort)pbVar10[0x1d] + (ushort)param_1[0x1d] * 3;
    NEON_uqrshrn(auVar14,2,2);
    auVar15._2_2_ = (ushort)pbVar10[6] + (ushort)param_1[6] * 3;
    auVar15._0_2_ = (ushort)pbVar10[2] + (ushort)param_1[2] * 3;
    auVar15._4_2_ = (ushort)pbVar10[10] + (ushort)param_1[10] * 3;
    auVar15._6_2_ = (ushort)pbVar10[0xe] + (ushort)param_1[0xe] * 3;
    auVar15._8_2_ = (ushort)pbVar10[0x12] + (ushort)param_1[0x12] * 3;
    auVar15._10_2_ = (ushort)pbVar10[0x16] + (ushort)param_1[0x16] * 3;
    auVar15._12_2_ = (ushort)pbVar10[0x1a] + (ushort)param_1[0x1a] * 3;
    auVar15._14_2_ = (ushort)pbVar10[0x1e] + (ushort)param_1[0x1e] * 3;
    NEON_uqrshrn(auVar15,2,2);
    auVar5._2_2_ = (ushort)pbVar10[7] + (ushort)param_1[7] * 3;
    auVar5._0_2_ = (ushort)pbVar10[3] + (ushort)param_1[3] * 3;
    auVar5._4_2_ = (ushort)pbVar10[0xb] + (ushort)param_1[0xb] * 3;
    auVar5._6_2_ = (ushort)pbVar10[0xf] + (ushort)param_1[0xf] * 3;
    auVar5._8_2_ = (ushort)pbVar10[0x13] + (ushort)param_1[0x13] * 3;
    auVar5._10_2_ = (ushort)pbVar10[0x17] + (ushort)param_1[0x17] * 3;
    auVar5._12_2_ = (ushort)pbVar10[0x1b] + (ushort)param_1[0x1b] * 3;
    auVar5._14_2_ = (ushort)pbVar10[0x1f] + (ushort)param_1[0x1f] * 3;
    NEON_uqrshrn(auVar5,2,2);
    auVar6._2_2_ = (ushort)pbVar10[0x24] + (ushort)param_1[0x24] * 3;
    auVar6._0_2_ = (ushort)pbVar10[0x20] + (ushort)param_1[0x20] * 3;
    auVar6._4_2_ = (ushort)pbVar10[0x28] + (ushort)param_1[0x28] * 3;
    auVar6._6_2_ = (ushort)pbVar10[0x2c] + (ushort)param_1[0x2c] * 3;
    auVar6._8_2_ = (ushort)pbVar10[0x30] + (ushort)param_1[0x30] * 3;
    auVar6._10_2_ = (ushort)pbVar10[0x34] + (ushort)param_1[0x34] * 3;
    auVar6._12_2_ = (ushort)pbVar10[0x38] + (ushort)param_1[0x38] * 3;
    auVar6._14_2_ = (ushort)pbVar10[0x3c] + (ushort)param_1[0x3c] * 3;
    auVar11 = NEON_uqrshrn2(auVar6,2,2);
    auVar7._2_2_ = (ushort)pbVar10[0x25] + (ushort)param_1[0x25] * 3;
    auVar7._0_2_ = (ushort)pbVar10[0x21] + (ushort)param_1[0x21] * 3;
    auVar7._4_2_ = (ushort)pbVar10[0x29] + (ushort)param_1[0x29] * 3;
    auVar7._6_2_ = (ushort)pbVar10[0x2d] + (ushort)param_1[0x2d] * 3;
    auVar7._8_2_ = (ushort)pbVar10[0x31] + (ushort)param_1[0x31] * 3;
    auVar7._10_2_ = (ushort)pbVar10[0x35] + (ushort)param_1[0x35] * 3;
    auVar7._12_2_ = (ushort)pbVar10[0x39] + (ushort)param_1[0x39] * 3;
    auVar7._14_2_ = (ushort)pbVar10[0x3d] + (ushort)param_1[0x3d] * 3;
    auVar12 = NEON_uqrshrn2(auVar7,2,2);
    auVar8._2_2_ = (ushort)pbVar10[0x26] + (ushort)param_1[0x26] * 3;
    auVar8._0_2_ = (ushort)pbVar10[0x22] + (ushort)param_1[0x22] * 3;
    auVar8._4_2_ = (ushort)pbVar10[0x2a] + (ushort)param_1[0x2a] * 3;
    auVar8._6_2_ = (ushort)pbVar10[0x2e] + (ushort)param_1[0x2e] * 3;
    auVar8._8_2_ = (ushort)pbVar10[0x32] + (ushort)param_1[0x32] * 3;
    auVar8._10_2_ = (ushort)pbVar10[0x36] + (ushort)param_1[0x36] * 3;
    auVar8._12_2_ = (ushort)pbVar10[0x3a] + (ushort)param_1[0x3a] * 3;
    auVar8._14_2_ = (ushort)pbVar10[0x3e] + (ushort)param_1[0x3e] * 3;
    auVar14 = NEON_uqrshrn2(auVar8,2,2);
    auVar9._2_2_ = (ushort)pbVar10[0x27] + (ushort)param_1[0x27] * 3;
    auVar9._0_2_ = (ushort)pbVar10[0x23] + (ushort)param_1[0x23] * 3;
    auVar9._4_2_ = (ushort)pbVar10[0x2b] + (ushort)param_1[0x2b] * 3;
    auVar9._6_2_ = (ushort)pbVar10[0x2f] + (ushort)param_1[0x2f] * 3;
    auVar9._8_2_ = (ushort)pbVar10[0x33] + (ushort)param_1[0x33] * 3;
    auVar9._10_2_ = (ushort)pbVar10[0x37] + (ushort)param_1[0x37] * 3;
    auVar9._12_2_ = (ushort)pbVar10[0x3b] + (ushort)param_1[0x3b] * 3;
    auVar9._14_2_ = (ushort)pbVar10[0x3f] + (ushort)param_1[0x3f] * 3;
    auVar15 = NEON_uqrshrn2(auVar9,2,2);
    Hint_Prefetch(pbVar10 + 0x200,0,0,0);
    auVar13._2_2_ = (ushort)auVar12[1] + (ushort)auVar11[1] * 3;
    auVar13._0_2_ = (ushort)auVar12[0] + (ushort)auVar11[0] * 3;
    auVar13._4_2_ = (ushort)auVar12[2] + (ushort)auVar11[2] * 3;
    auVar13._6_2_ = (ushort)auVar12[3] + (ushort)auVar11[3] * 3;
    auVar13._8_2_ = (ushort)auVar12[4] + (ushort)auVar11[4] * 3;
    auVar13._10_2_ = (ushort)auVar12[5] + (ushort)auVar11[5] * 3;
    auVar13._12_2_ = (ushort)auVar12[6] + (ushort)auVar11[6] * 3;
    auVar13._14_2_ = (ushort)auVar12[7] + (ushort)auVar11[7] * 3;
    NEON_uqrshrn(auVar13,2,2);
    auVar3._2_2_ = (ushort)auVar12[9] + (ushort)auVar11[9] * 3;
    auVar3._0_2_ = (ushort)auVar12[8] + (ushort)auVar11[8] * 3;
    auVar3._4_2_ = (ushort)auVar12[10] + (ushort)auVar11[10] * 3;
    auVar3._6_2_ = (ushort)auVar12[0xb] + (ushort)auVar11[0xb] * 3;
    auVar3._8_2_ = (ushort)auVar12[0xc] + (ushort)auVar11[0xc] * 3;
    auVar3._10_2_ = (ushort)auVar12[0xd] + (ushort)auVar11[0xd] * 3;
    auVar3._12_2_ = (ushort)auVar12[0xe] + (ushort)auVar11[0xe] * 3;
    auVar3._14_2_ = (ushort)auVar12[0xf] + (ushort)auVar11[0xf] * 3;
    auVar11 = NEON_uqrshrn2(auVar3,2,2);
    auVar13 = NEON_urhadd(auVar12,auVar14,1);
    auVar12._2_2_ = (ushort)auVar14[1] + (ushort)auVar15[1] * 3;
    auVar12._0_2_ = (ushort)auVar14[0] + (ushort)auVar15[0] * 3;
    auVar12._4_2_ = (ushort)auVar14[2] + (ushort)auVar15[2] * 3;
    auVar12._6_2_ = (ushort)auVar14[3] + (ushort)auVar15[3] * 3;
    auVar12._8_2_ = (ushort)auVar14[4] + (ushort)auVar15[4] * 3;
    auVar12._10_2_ = (ushort)auVar14[5] + (ushort)auVar15[5] * 3;
    auVar12._12_2_ = (ushort)auVar14[6] + (ushort)auVar15[6] * 3;
    auVar12._14_2_ = (ushort)auVar14[7] + (ushort)auVar15[7] * 3;
    NEON_uqrshrn(auVar12,2,2);
    auVar4._2_2_ = (ushort)auVar14[9] + (ushort)auVar15[9] * 3;
    auVar4._0_2_ = (ushort)auVar14[8] + (ushort)auVar15[8] * 3;
    auVar4._4_2_ = (ushort)auVar14[10] + (ushort)auVar15[10] * 3;
    auVar4._6_2_ = (ushort)auVar14[0xb] + (ushort)auVar15[0xb] * 3;
    auVar4._8_2_ = (ushort)auVar14[0xc] + (ushort)auVar15[0xc] * 3;
    auVar4._10_2_ = (ushort)auVar14[0xd] + (ushort)auVar15[0xd] * 3;
    auVar4._12_2_ = (ushort)auVar14[0xe] + (ushort)auVar15[0xe] * 3;
    auVar4._14_2_ = (ushort)auVar14[0xf] + (ushort)auVar15[0xf] * 3;
    auVar12 = NEON_uqrshrn2(auVar4,2,2);
    *param_3 = auVar11[0];
    param_3[1] = auVar13[0];
    param_3[2] = auVar12[0];
    param_3[3] = auVar11[1];
    param_3[4] = auVar13[1];
    param_3[5] = auVar12[1];
    param_3[6] = auVar11[2];
    param_3[7] = auVar13[2];
    param_3[8] = auVar12[2];
    param_3[9] = auVar11[3];
    param_3[10] = auVar13[3];
    param_3[0xb] = auVar12[3];
    param_3[0xc] = auVar11[4];
    param_3[0xd] = auVar13[4];
    param_3[0xe] = auVar12[4];
    param_3[0xf] = auVar11[5];
    param_3[0x10] = auVar13[5];
    param_3[0x11] = auVar12[5];
    param_3[0x12] = auVar11[6];
    param_3[0x13] = auVar13[6];
    param_3[0x14] = auVar12[6];
    param_3[0x15] = auVar11[7];
    param_3[0x16] = auVar13[7];
    param_3[0x17] = auVar12[7];
    param_3[0x18] = auVar11[8];
    param_3[0x19] = auVar13[8];
    param_3[0x1a] = auVar12[8];
    param_3[0x1b] = auVar11[9];
    param_3[0x1c] = auVar13[9];
    param_3[0x1d] = auVar12[9];
    param_3[0x1e] = auVar11[10];
    param_3[0x1f] = auVar13[10];
    param_3[0x20] = auVar12[10];
    param_3[0x21] = auVar11[0xb];
    param_3[0x22] = auVar13[0xb];
    param_3[0x23] = auVar12[0xb];
    param_3[0x24] = auVar11[0xc];
    param_3[0x25] = auVar13[0xc];
    param_3[0x26] = auVar12[0xc];
    param_3[0x27] = auVar11[0xd];
    param_3[0x28] = auVar13[0xd];
    param_3[0x29] = auVar12[0xd];
    param_3[0x2a] = auVar11[0xe];
    param_3[0x2b] = auVar13[0xe];
    param_3[0x2c] = auVar12[0xe];
    param_3[0x2d] = auVar11[0xf];
    param_3[0x2e] = auVar13[0xf];
    param_3[0x2f] = auVar12[0xf];
    param_3 = param_3 + 0x30;
    bVar1 = 0x2f < param_4;
    param_1 = param_1 + 0x40;
    pbVar10 = pbVar10 + 0x40;
    param_4 = iVar2;
  } while (iVar2 != 0 && bVar1);
  return;
}


// ===== 007cb4e0  FUN_007cb4e0 =====

void FUN_007cb4e0(undefined1 *param_1,long param_2,undefined1 *param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  undefined1 auVar19 [16];
  undefined1 *puVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  
  puVar20 = param_1 + param_2;
  do {
    auVar21[0] = *param_1;
    auVar23[0] = param_1[1];
    auVar26[0] = param_1[2];
    auVar28[0] = param_1[3];
    auVar21[1] = param_1[4];
    auVar23[1] = param_1[5];
    auVar26[1] = param_1[6];
    auVar28[1] = param_1[7];
    auVar21[2] = param_1[8];
    auVar23[2] = param_1[9];
    auVar26[2] = param_1[10];
    auVar28[2] = param_1[0xb];
    auVar21[3] = param_1[0xc];
    auVar23[3] = param_1[0xd];
    auVar26[3] = param_1[0xe];
    auVar28[3] = param_1[0xf];
    auVar21[4] = param_1[0x10];
    auVar23[4] = param_1[0x11];
    auVar26[4] = param_1[0x12];
    auVar28[4] = param_1[0x13];
    auVar21[5] = param_1[0x14];
    auVar23[5] = param_1[0x15];
    auVar26[5] = param_1[0x16];
    auVar28[5] = param_1[0x17];
    auVar21[6] = param_1[0x18];
    auVar23[6] = param_1[0x19];
    auVar26[6] = param_1[0x1a];
    auVar28[6] = param_1[0x1b];
    auVar21[7] = param_1[0x1c];
    auVar23[7] = param_1[0x1d];
    auVar26[7] = param_1[0x1e];
    auVar28[7] = param_1[0x1f];
    auVar21[8] = param_1[0x20];
    auVar23[8] = param_1[0x21];
    auVar26[8] = param_1[0x22];
    auVar28[8] = param_1[0x23];
    auVar21[9] = param_1[0x24];
    auVar23[9] = param_1[0x25];
    auVar26[9] = param_1[0x26];
    auVar28[9] = param_1[0x27];
    auVar21[10] = param_1[0x28];
    auVar23[10] = param_1[0x29];
    auVar26[10] = param_1[0x2a];
    auVar28[10] = param_1[0x2b];
    auVar21[0xb] = param_1[0x2c];
    auVar23[0xb] = param_1[0x2d];
    auVar26[0xb] = param_1[0x2e];
    auVar28[0xb] = param_1[0x2f];
    auVar21[0xc] = param_1[0x30];
    auVar23[0xc] = param_1[0x31];
    auVar26[0xc] = param_1[0x32];
    auVar28[0xc] = param_1[0x33];
    auVar21[0xd] = param_1[0x34];
    auVar23[0xd] = param_1[0x35];
    auVar26[0xd] = param_1[0x36];
    auVar28[0xd] = param_1[0x37];
    auVar21[0xe] = param_1[0x38];
    auVar23[0xe] = param_1[0x39];
    auVar26[0xe] = param_1[0x3a];
    auVar28[0xe] = param_1[0x3b];
    auVar21[0xf] = param_1[0x3c];
    auVar23[0xf] = param_1[0x3d];
    auVar26[0xf] = param_1[0x3e];
    auVar28[0xf] = param_1[0x3f];
    iVar2 = param_4 + -0x30;
    auVar22[1] = puVar20[4];
    auVar22[0] = *puVar20;
    auVar22[2] = puVar20[8];
    auVar22[3] = puVar20[0xc];
    auVar22[4] = puVar20[0x10];
    auVar22[5] = puVar20[0x14];
    auVar22[6] = puVar20[0x18];
    auVar22[7] = puVar20[0x1c];
    auVar22[8] = puVar20[0x20];
    auVar22[9] = puVar20[0x24];
    auVar22[10] = puVar20[0x28];
    auVar22[0xb] = puVar20[0x2c];
    auVar22[0xc] = puVar20[0x30];
    auVar22[0xd] = puVar20[0x34];
    auVar22[0xe] = puVar20[0x38];
    auVar22[0xf] = puVar20[0x3c];
    auVar22 = NEON_urhadd(auVar21,auVar22,1);
    auVar27[1] = puVar20[5];
    auVar27[0] = puVar20[1];
    auVar27[2] = puVar20[9];
    auVar27[3] = puVar20[0xd];
    auVar27[4] = puVar20[0x11];
    auVar27[5] = puVar20[0x15];
    auVar27[6] = puVar20[0x19];
    auVar27[7] = puVar20[0x1d];
    auVar27[8] = puVar20[0x21];
    auVar27[9] = puVar20[0x25];
    auVar27[10] = puVar20[0x29];
    auVar27[0xb] = puVar20[0x2d];
    auVar27[0xc] = puVar20[0x31];
    auVar27[0xd] = puVar20[0x35];
    auVar27[0xe] = puVar20[0x39];
    auVar27[0xf] = puVar20[0x3d];
    auVar24 = NEON_urhadd(auVar23,auVar27,1);
    auVar29[1] = puVar20[6];
    auVar29[0] = puVar20[2];
    auVar29[2] = puVar20[10];
    auVar29[3] = puVar20[0xe];
    auVar29[4] = puVar20[0x12];
    auVar29[5] = puVar20[0x16];
    auVar29[6] = puVar20[0x1a];
    auVar29[7] = puVar20[0x1e];
    auVar29[8] = puVar20[0x22];
    auVar29[9] = puVar20[0x26];
    auVar29[10] = puVar20[0x2a];
    auVar29[0xb] = puVar20[0x2e];
    auVar29[0xc] = puVar20[0x32];
    auVar29[0xd] = puVar20[0x36];
    auVar29[0xe] = puVar20[0x3a];
    auVar29[0xf] = puVar20[0x3e];
    auVar27 = NEON_urhadd(auVar26,auVar29,1);
    auVar19[1] = puVar20[7];
    auVar19[0] = puVar20[3];
    auVar19[2] = puVar20[0xb];
    auVar19[3] = puVar20[0xf];
    auVar19[4] = puVar20[0x13];
    auVar19[5] = puVar20[0x17];
    auVar19[6] = puVar20[0x1b];
    auVar19[7] = puVar20[0x1f];
    auVar19[8] = puVar20[0x23];
    auVar19[9] = puVar20[0x27];
    auVar19[10] = puVar20[0x2b];
    auVar19[0xb] = puVar20[0x2f];
    auVar19[0xc] = puVar20[0x33];
    auVar19[0xd] = puVar20[0x37];
    auVar19[0xe] = puVar20[0x3b];
    auVar19[0xf] = puVar20[0x3f];
    auVar29 = NEON_urhadd(auVar28,auVar19,1);
    Hint_Prefetch(param_1 + 0x200,0,0,0);
    sVar3 = (ushort)auVar24[1] + (ushort)auVar22[1] * 3;
    sVar4 = (ushort)auVar24[2] + (ushort)auVar22[2] * 3;
    sVar5 = (ushort)auVar24[3] + (ushort)auVar22[3] * 3;
    sVar6 = (ushort)auVar24[4] + (ushort)auVar22[4] * 3;
    sVar7 = (ushort)auVar24[5] + (ushort)auVar22[5] * 3;
    sVar8 = (ushort)auVar24[6] + (ushort)auVar22[6] * 3;
    sVar9 = (ushort)auVar24[7] + (ushort)auVar22[7] * 3;
    sVar12 = (ushort)auVar24[9] + (ushort)auVar22[9] * 3;
    sVar13 = (ushort)auVar24[10] + (ushort)auVar22[10] * 3;
    sVar14 = (ushort)auVar24[0xb] + (ushort)auVar22[0xb] * 3;
    sVar15 = (ushort)auVar24[0xc] + (ushort)auVar22[0xc] * 3;
    sVar16 = (ushort)auVar24[0xd] + (ushort)auVar22[0xd] * 3;
    sVar17 = (ushort)auVar24[0xe] + (ushort)auVar22[0xe] * 3;
    sVar18 = (ushort)auVar24[0xf] + (ushort)auVar22[0xf] * 3;
    auVar25[2] = (char)sVar3;
    auVar25._0_2_ = (ushort)auVar24[0] + (ushort)auVar22[0] * 3;
    auVar25[3] = (char)((ushort)sVar3 >> 8);
    auVar25[4] = (char)sVar4;
    auVar25[5] = (char)((ushort)sVar4 >> 8);
    auVar25[6] = (char)sVar5;
    auVar25[7] = (char)((ushort)sVar5 >> 8);
    auVar25[8] = (char)sVar6;
    auVar25[9] = (char)((ushort)sVar6 >> 8);
    auVar25[10] = (char)sVar7;
    auVar25[0xb] = (char)((ushort)sVar7 >> 8);
    auVar25[0xc] = (char)sVar8;
    auVar25[0xd] = (char)((ushort)sVar8 >> 8);
    auVar25[0xe] = (char)sVar9;
    auVar25[0xf] = (char)((ushort)sVar9 >> 8);
    NEON_uqrshrn(auVar25,2,2);
    auVar10[2] = (char)sVar12;
    auVar10._0_2_ = (ushort)auVar24[8] + (ushort)auVar22[8] * 3;
    auVar10[3] = (char)((ushort)sVar12 >> 8);
    auVar10[4] = (char)sVar13;
    auVar10[5] = (char)((ushort)sVar13 >> 8);
    auVar10[6] = (char)sVar14;
    auVar10[7] = (char)((ushort)sVar14 >> 8);
    auVar10[8] = (char)sVar15;
    auVar10[9] = (char)((ushort)sVar15 >> 8);
    auVar10[10] = (char)sVar16;
    auVar10[0xb] = (char)((ushort)sVar16 >> 8);
    auVar10[0xc] = (char)sVar17;
    auVar10[0xd] = (char)((ushort)sVar17 >> 8);
    auVar10[0xe] = (char)sVar18;
    auVar10[0xf] = (char)((ushort)sVar18 >> 8);
    auVar22 = NEON_uqrshrn2(auVar10,2,2);
    Hint_Prefetch(puVar20 + 0x200,0,0,0);
    auVar25 = NEON_urhadd(auVar24,auVar27,1);
    sVar3 = (ushort)auVar27[1] + (ushort)auVar29[1] * 3;
    sVar4 = (ushort)auVar27[2] + (ushort)auVar29[2] * 3;
    sVar5 = (ushort)auVar27[3] + (ushort)auVar29[3] * 3;
    sVar6 = (ushort)auVar27[4] + (ushort)auVar29[4] * 3;
    sVar7 = (ushort)auVar27[5] + (ushort)auVar29[5] * 3;
    sVar8 = (ushort)auVar27[6] + (ushort)auVar29[6] * 3;
    sVar9 = (ushort)auVar27[7] + (ushort)auVar29[7] * 3;
    sVar12 = (ushort)auVar27[9] + (ushort)auVar29[9] * 3;
    sVar13 = (ushort)auVar27[10] + (ushort)auVar29[10] * 3;
    sVar14 = (ushort)auVar27[0xb] + (ushort)auVar29[0xb] * 3;
    sVar15 = (ushort)auVar27[0xc] + (ushort)auVar29[0xc] * 3;
    sVar16 = (ushort)auVar27[0xd] + (ushort)auVar29[0xd] * 3;
    sVar17 = (ushort)auVar27[0xe] + (ushort)auVar29[0xe] * 3;
    sVar18 = (ushort)auVar27[0xf] + (ushort)auVar29[0xf] * 3;
    auVar24[2] = (char)sVar3;
    auVar24._0_2_ = (ushort)auVar27[0] + (ushort)auVar29[0] * 3;
    auVar24[3] = (char)((ushort)sVar3 >> 8);
    auVar24[4] = (char)sVar4;
    auVar24[5] = (char)((ushort)sVar4 >> 8);
    auVar24[6] = (char)sVar5;
    auVar24[7] = (char)((ushort)sVar5 >> 8);
    auVar24[8] = (char)sVar6;
    auVar24[9] = (char)((ushort)sVar6 >> 8);
    auVar24[10] = (char)sVar7;
    auVar24[0xb] = (char)((ushort)sVar7 >> 8);
    auVar24[0xc] = (char)sVar8;
    auVar24[0xd] = (char)((ushort)sVar8 >> 8);
    auVar24[0xe] = (char)sVar9;
    auVar24[0xf] = (char)((ushort)sVar9 >> 8);
    NEON_uqrshrn(auVar24,2,2);
    auVar11[2] = (char)sVar12;
    auVar11._0_2_ = (ushort)auVar27[8] + (ushort)auVar29[8] * 3;
    auVar11[3] = (char)((ushort)sVar12 >> 8);
    auVar11[4] = (char)sVar13;
    auVar11[5] = (char)((ushort)sVar13 >> 8);
    auVar11[6] = (char)sVar14;
    auVar11[7] = (char)((ushort)sVar14 >> 8);
    auVar11[8] = (char)sVar15;
    auVar11[9] = (char)((ushort)sVar15 >> 8);
    auVar11[10] = (char)sVar16;
    auVar11[0xb] = (char)((ushort)sVar16 >> 8);
    auVar11[0xc] = (char)sVar17;
    auVar11[0xd] = (char)((ushort)sVar17 >> 8);
    auVar11[0xe] = (char)sVar18;
    auVar11[0xf] = (char)((ushort)sVar18 >> 8);
    auVar24 = NEON_uqrshrn2(auVar11,2,2);
    *param_3 = auVar22[0];
    param_3[1] = auVar25[0];
    param_3[2] = auVar24[0];
    param_3[3] = auVar22[1];
    param_3[4] = auVar25[1];
    param_3[5] = auVar24[1];
    param_3[6] = auVar22[2];
    param_3[7] = auVar25[2];
    param_3[8] = auVar24[2];
    param_3[9] = auVar22[3];
    param_3[10] = auVar25[3];
    param_3[0xb] = auVar24[3];
    param_3[0xc] = auVar22[4];
    param_3[0xd] = auVar25[4];
    param_3[0xe] = auVar24[4];
    param_3[0xf] = auVar22[5];
    param_3[0x10] = auVar25[5];
    param_3[0x11] = auVar24[5];
    param_3[0x12] = auVar22[6];
    param_3[0x13] = auVar25[6];
    param_3[0x14] = auVar24[6];
    param_3[0x15] = auVar22[7];
    param_3[0x16] = auVar25[7];
    param_3[0x17] = auVar24[7];
    param_3[0x18] = auVar22[8];
    param_3[0x19] = auVar25[8];
    param_3[0x1a] = auVar24[8];
    param_3[0x1b] = auVar22[9];
    param_3[0x1c] = auVar25[9];
    param_3[0x1d] = auVar24[9];
    param_3[0x1e] = auVar22[10];
    param_3[0x1f] = auVar25[10];
    param_3[0x20] = auVar24[10];
    param_3[0x21] = auVar22[0xb];
    param_3[0x22] = auVar25[0xb];
    param_3[0x23] = auVar24[0xb];
    param_3[0x24] = auVar22[0xc];
    param_3[0x25] = auVar25[0xc];
    param_3[0x26] = auVar24[0xc];
    param_3[0x27] = auVar22[0xd];
    param_3[0x28] = auVar25[0xd];
    param_3[0x29] = auVar24[0xd];
    param_3[0x2a] = auVar22[0xe];
    param_3[0x2b] = auVar25[0xe];
    param_3[0x2c] = auVar24[0xe];
    param_3[0x2d] = auVar22[0xf];
    param_3[0x2e] = auVar25[0xf];
    param_3[0x2f] = auVar24[0xf];
    param_3 = param_3 + 0x30;
    bVar1 = 0x2f < param_4;
    param_1 = param_1 + 0x40;
    puVar20 = puVar20 + 0x40;
    param_4 = iVar2;
  } while (iVar2 != 0 && bVar1);
  return;
}


// ===== 007cb550  FUN_007cb550 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007cb550(undefined1 (*param_1) [16],undefined8 param_2,undefined8 *param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  undefined1 (*pauVar3) [16];
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  auVar6 = _DAT_00214d80;
  pauVar3 = param_1;
  iVar4 = param_4 + -0xc;
  if (param_4 + -0xc != 0) {
    do {
      param_1 = pauVar3 + 2;
      iVar2 = iVar4 + -0xc;
      auVar5 = a64_TBL(ZEXT816(0),*pauVar3,pauVar3[1],auVar6);
      Hint_Prefetch(pauVar3 + 0x1e,0,0,0);
      param_3[1] = auVar5._8_8_;
      *param_3 = auVar5._0_8_;
      param_3 = (undefined8 *)((long)param_3 + 0xc);
      bVar1 = 0xb < iVar4;
      pauVar3 = param_1;
      iVar4 = iVar2;
    } while (iVar2 != 0 && bVar1);
  }
  auVar6 = a64_TBL(ZEXT816(0),*param_1,param_1[1],auVar6);
  *(char *)param_3 = auVar6[0];
  *(char *)((long)param_3 + 1) = auVar6[1];
  *(char *)((long)param_3 + 2) = auVar6[2];
  *(char *)((long)param_3 + 3) = auVar6[3];
  *(char *)((long)param_3 + 4) = auVar6[4];
  *(char *)((long)param_3 + 5) = auVar6[5];
  *(char *)((long)param_3 + 6) = auVar6[6];
  *(char *)((long)param_3 + 7) = auVar6[7];
  *(int *)(param_3 + 1) = auVar6._8_4_;
  return;
}


// ===== 007cb598  FUN_007cb598 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007cb598(byte *param_1,long param_2,undefined8 *param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  byte *pbVar12;
  byte *pbVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  short sVar31;
  short sVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  short sVar36;
  short sVar37;
  short sVar38;
  short sVar39;
  short sVar40;
  short sVar41;
  short sVar42;
  short sVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  
  auVar11 = _DAT_00214dd0;
  auVar10 = _DAT_00214dc0;
  auVar9 = _DAT_00214db0;
  auVar8 = _DAT_00214da0;
  auVar7 = _DAT_00214d90;
  pbVar12 = param_1 + param_2 * 2;
  pbVar13 = param_1 + param_2;
  do {
    iVar2 = param_4 + -0xc;
    sVar36 = (ushort)*param_1 + (ushort)*pbVar13 + (ushort)*pbVar12;
    sVar37 = (ushort)param_1[1] + (ushort)pbVar13[1] + (ushort)pbVar12[1];
    sVar38 = (ushort)param_1[2] + (ushort)pbVar13[2] + (ushort)pbVar12[2];
    sVar39 = (ushort)param_1[3] + (ushort)pbVar13[3] + (ushort)pbVar12[3];
    sVar40 = (ushort)param_1[4] + (ushort)pbVar13[4] + (ushort)pbVar12[4];
    sVar41 = (ushort)param_1[5] + (ushort)pbVar13[5] + (ushort)pbVar12[5];
    sVar42 = (ushort)param_1[6] + (ushort)pbVar13[6] + (ushort)pbVar12[6];
    sVar43 = (ushort)param_1[7] + (ushort)pbVar13[7] + (ushort)pbVar12[7];
    sVar17 = (ushort)param_1[0x10] + (ushort)pbVar13[0x10] + (ushort)pbVar12[0x10];
    sVar18 = (ushort)param_1[0x11] + (ushort)pbVar13[0x11] + (ushort)pbVar12[0x11];
    sVar19 = (ushort)param_1[0x12] + (ushort)pbVar13[0x12] + (ushort)pbVar12[0x12];
    sVar20 = (ushort)param_1[0x13] + (ushort)pbVar13[0x13] + (ushort)pbVar12[0x13];
    sVar21 = (ushort)param_1[0x14] + (ushort)pbVar13[0x14] + (ushort)pbVar12[0x14];
    sVar22 = (ushort)param_1[0x15] + (ushort)pbVar13[0x15] + (ushort)pbVar12[0x15];
    sVar23 = (ushort)param_1[0x16] + (ushort)pbVar13[0x16] + (ushort)pbVar12[0x16];
    sVar24 = (ushort)param_1[0x17] + (ushort)pbVar13[0x17] + (ushort)pbVar12[0x17];
    auVar44._0_2_ = (ushort)param_1[8] + (ushort)pbVar13[8] + (ushort)pbVar12[8];
    auVar44._2_2_ = (ushort)param_1[9] + (ushort)pbVar13[9] + (ushort)pbVar12[9];
    auVar44._4_2_ = (ushort)param_1[10] + (ushort)pbVar13[10] + (ushort)pbVar12[10];
    auVar44._6_2_ = (ushort)param_1[0xb] + (ushort)pbVar13[0xb] + (ushort)pbVar12[0xb];
    auVar44._8_2_ = (ushort)param_1[0xc] + (ushort)pbVar13[0xc] + (ushort)pbVar12[0xc];
    auVar44._10_2_ = (ushort)param_1[0xd] + (ushort)pbVar13[0xd] + (ushort)pbVar12[0xd];
    auVar44._12_2_ = (ushort)param_1[0xe] + (ushort)pbVar13[0xe] + (ushort)pbVar12[0xe];
    auVar44._14_2_ = (ushort)param_1[0xf] + (ushort)pbVar13[0xf] + (ushort)pbVar12[0xf];
    sVar25 = (ushort)param_1[0x18] + (ushort)pbVar13[0x18] + (ushort)pbVar12[0x18];
    sVar26 = (ushort)param_1[0x19] + (ushort)pbVar13[0x19] + (ushort)pbVar12[0x19];
    sVar27 = (ushort)param_1[0x1a] + (ushort)pbVar13[0x1a] + (ushort)pbVar12[0x1a];
    sVar28 = (ushort)param_1[0x1b] + (ushort)pbVar13[0x1b] + (ushort)pbVar12[0x1b];
    sVar29 = (ushort)param_1[0x1c] + (ushort)pbVar13[0x1c] + (ushort)pbVar12[0x1c];
    sVar30 = (ushort)param_1[0x1d] + (ushort)pbVar13[0x1d] + (ushort)pbVar12[0x1d];
    sVar31 = (ushort)param_1[0x1e] + (ushort)pbVar13[0x1e] + (ushort)pbVar12[0x1e];
    sVar32 = (ushort)param_1[0x1f] + (ushort)pbVar13[0x1f] + (ushort)pbVar12[0x1f];
    auVar4._2_2_ = sVar37;
    auVar4._0_2_ = sVar36;
    auVar4._4_2_ = sVar38;
    auVar4._6_2_ = sVar39;
    auVar4._8_2_ = sVar40;
    auVar4._10_2_ = sVar41;
    auVar4._12_2_ = sVar42;
    auVar4._14_2_ = sVar43;
    auVar33 = a64_TBL(ZEXT816(0),auVar4,auVar44,auVar8);
    auVar14._2_2_ = sVar18;
    auVar14._0_2_ = sVar17;
    auVar14._4_2_ = sVar19;
    auVar14._6_2_ = sVar20;
    auVar14._8_2_ = sVar21;
    auVar14._10_2_ = sVar22;
    auVar14._12_2_ = sVar23;
    auVar14._14_2_ = sVar24;
    auVar34._2_2_ = sVar26;
    auVar34._0_2_ = sVar25;
    auVar34._4_2_ = sVar27;
    auVar34._6_2_ = sVar28;
    auVar34._8_2_ = sVar29;
    auVar34._10_2_ = sVar30;
    auVar34._12_2_ = sVar31;
    auVar34._14_2_ = sVar32;
    auVar14 = a64_TBL(ZEXT816(0),auVar14,auVar34,auVar8);
    auVar5._2_2_ = sVar37;
    auVar5._0_2_ = sVar36;
    auVar5._4_2_ = sVar38;
    auVar5._6_2_ = sVar39;
    auVar5._8_2_ = sVar40;
    auVar5._10_2_ = sVar41;
    auVar5._12_2_ = sVar42;
    auVar5._14_2_ = sVar43;
    auVar34 = a64_TBL(ZEXT816(0),auVar5,auVar44,auVar9);
    auVar15._2_2_ = sVar18;
    auVar15._0_2_ = sVar17;
    auVar15._4_2_ = sVar19;
    auVar15._6_2_ = sVar20;
    auVar15._8_2_ = sVar21;
    auVar15._10_2_ = sVar22;
    auVar15._12_2_ = sVar23;
    auVar15._14_2_ = sVar24;
    auVar35._2_2_ = sVar26;
    auVar35._0_2_ = sVar25;
    auVar35._4_2_ = sVar27;
    auVar35._6_2_ = sVar28;
    auVar35._8_2_ = sVar29;
    auVar35._10_2_ = sVar30;
    auVar35._12_2_ = sVar31;
    auVar35._14_2_ = sVar32;
    auVar15 = a64_TBL(ZEXT816(0),auVar15,auVar35,auVar9);
    auVar6._2_2_ = sVar37;
    auVar6._0_2_ = sVar36;
    auVar6._4_2_ = sVar38;
    auVar6._6_2_ = sVar39;
    auVar6._8_2_ = sVar40;
    auVar6._10_2_ = sVar41;
    auVar6._12_2_ = sVar42;
    auVar6._14_2_ = sVar43;
    auVar35 = a64_TBL(ZEXT816(0),auVar6,auVar44,auVar10);
    auVar16._2_2_ = sVar18;
    auVar16._0_2_ = sVar17;
    auVar16._4_2_ = sVar19;
    auVar16._6_2_ = sVar20;
    auVar16._8_2_ = sVar21;
    auVar16._10_2_ = sVar22;
    auVar16._12_2_ = sVar23;
    auVar16._14_2_ = sVar24;
    auVar3._2_2_ = sVar26;
    auVar3._0_2_ = sVar25;
    auVar3._4_2_ = sVar27;
    auVar3._6_2_ = sVar28;
    auVar3._8_2_ = sVar29;
    auVar3._10_2_ = sVar30;
    auVar3._12_2_ = sVar31;
    auVar3._14_2_ = sVar32;
    auVar16 = a64_TBL(ZEXT816(0),auVar16,auVar3,auVar10);
    auVar45._0_2_ = auVar33._0_2_ + auVar34._0_2_ + auVar35._0_2_;
    auVar45._2_2_ = auVar33._2_2_ + auVar34._2_2_ + auVar35._2_2_;
    auVar45._4_2_ = auVar33._4_2_ + auVar34._4_2_ + auVar35._4_2_;
    auVar45._6_2_ = auVar33._6_2_ + auVar34._6_2_ + auVar35._6_2_;
    auVar45._8_2_ = auVar33._8_2_ + auVar34._8_2_ + auVar35._8_2_;
    auVar45._10_2_ = auVar33._10_2_ + auVar34._10_2_ + auVar35._10_2_;
    auVar45._12_2_ = auVar33._12_2_ + auVar34._12_2_ + auVar35._12_2_;
    auVar45._14_2_ = auVar33._14_2_ + auVar34._14_2_ + auVar35._14_2_;
    auVar34 = NEON_sqrdmulh(auVar45,auVar7,2);
    auVar33._2_2_ = auVar14._2_2_ + auVar15._2_2_ + auVar16._2_2_;
    auVar33._0_2_ = auVar14._0_2_ + auVar15._0_2_ + auVar16._0_2_;
    auVar33._4_2_ = auVar14._4_2_ + auVar15._4_2_ + auVar16._4_2_;
    auVar33._6_2_ = auVar14._6_2_ + auVar15._6_2_ + auVar16._6_2_;
    auVar33._8_2_ = auVar14._8_2_ + auVar15._8_2_ + auVar16._8_2_;
    auVar33._10_2_ = auVar14._10_2_ + auVar15._10_2_ + auVar16._10_2_;
    auVar33._12_2_ = auVar14._12_2_ + auVar15._12_2_ + auVar16._12_2_;
    auVar33._14_2_ = auVar14._14_2_ + auVar15._14_2_ + auVar16._14_2_;
    auVar14 = NEON_sqrdmulh(auVar33,auVar7,2);
    auVar14 = a64_TBL(ZEXT816(0),auVar34,auVar14,auVar11);
    *param_3 = auVar14._0_8_;
    *(int *)(param_3 + 1) = auVar14._8_4_;
    param_3 = (undefined8 *)((long)param_3 + 0xc);
    bVar1 = 0xb < param_4;
    param_1 = param_1 + 0x20;
    pbVar12 = pbVar12 + 0x20;
    pbVar13 = pbVar13 + 0x20;
    param_4 = iVar2;
  } while (iVar2 != 0 && bVar1);
  return;
}


// ===== 007cb664  FUN_007cb664 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007cb664(unkbyte10 *param_1,long param_2,undefined8 *param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 (*pauVar8) [16];
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined2 uVar18;
  undefined2 uVar19;
  undefined2 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  
  auVar7 = _DAT_00214e00;
  auVar6 = _DAT_00214df0;
  auVar5 = _DAT_00214de0;
  auVar4 = _DAT_00214dd0;
  pauVar8 = (undefined1 (*) [16])((long)param_1 + param_2);
  do {
    uVar3 = *(undefined8 *)((long)param_1 + 8);
    uVar18 = (undefined2)((ulong)uVar3 >> 0x10);
    uVar19 = (undefined2)((ulong)uVar3 >> 0x20);
    uVar20 = (undefined2)((ulong)uVar3 >> 0x30);
    uVar3 = *(undefined8 *)((long)param_1 + 0x18);
    uVar9 = (undefined2)((ulong)uVar3 >> 0x10);
    uVar10 = (undefined2)((ulong)uVar3 >> 0x20);
    uVar11 = (undefined2)((ulong)uVar3 >> 0x30);
    uVar3 = *(undefined8 *)(pauVar8[1] + 8);
    uVar12 = (undefined2)((ulong)uVar3 >> 0x10);
    uVar13 = (undefined2)((ulong)uVar3 >> 0x20);
    uVar14 = (undefined2)((ulong)uVar3 >> 0x30);
    iVar2 = param_4 + -0xc;
    auVar24._10_2_ = uVar18;
    auVar24._0_10_ = *param_1;
    auVar24._12_2_ = uVar19;
    auVar24._14_2_ = uVar20;
    auVar23 = a64_TBL(ZEXT816(0),auVar24,auVar6);
    auVar15._10_2_ = uVar9;
    auVar15._0_10_ = param_1[1];
    auVar15._12_2_ = uVar10;
    auVar15._14_2_ = uVar11;
    auVar15 = a64_TBL(ZEXT816(0),auVar15,auVar6);
    auVar24 = a64_TBL(ZEXT816(0),*pauVar8,auVar6);
    auVar16._10_2_ = uVar12;
    auVar16._0_10_ = *(unkbyte10 *)pauVar8[1];
    auVar16._12_2_ = uVar13;
    auVar16._14_2_ = uVar14;
    auVar16 = a64_TBL(ZEXT816(0),auVar16,auVar6);
    auVar25._10_2_ = uVar18;
    auVar25._0_10_ = *param_1;
    auVar25._12_2_ = uVar19;
    auVar25._14_2_ = uVar20;
    auVar25 = a64_TBL(ZEXT816(0),auVar25,*pauVar8,auVar7);
    auVar17._10_2_ = uVar9;
    auVar17._0_10_ = param_1[1];
    auVar17._12_2_ = uVar10;
    auVar17._14_2_ = uVar11;
    auVar22._10_2_ = uVar12;
    auVar22._0_10_ = *(unkbyte10 *)pauVar8[1];
    auVar22._12_2_ = uVar13;
    auVar22._14_2_ = uVar14;
    auVar17 = a64_TBL(ZEXT816(0),auVar17,auVar22,auVar7);
    auVar21._0_2_ =
         (ushort)auVar23[0] + (ushort)auVar23[1] + (ushort)auVar24[0] + (ushort)auVar24[1] +
         (ushort)auVar25[0] + (ushort)auVar25[1];
    auVar21._2_2_ =
         (ushort)auVar23[2] + (ushort)auVar23[3] + (ushort)auVar24[2] + (ushort)auVar24[3] +
         (ushort)auVar25[2] + (ushort)auVar25[3];
    auVar21._4_2_ =
         (ushort)auVar23[4] + (ushort)auVar23[5] + (ushort)auVar24[4] + (ushort)auVar24[5] +
         (ushort)auVar25[4] + (ushort)auVar25[5];
    auVar21._6_2_ =
         (ushort)auVar23[6] + (ushort)auVar23[7] + (ushort)auVar24[6] + (ushort)auVar24[7] +
         (ushort)auVar25[6] + (ushort)auVar25[7];
    auVar21._8_2_ =
         (ushort)auVar23[8] + (ushort)auVar23[9] + (ushort)auVar24[8] + (ushort)auVar24[9] +
         (ushort)auVar25[8] + (ushort)auVar25[9];
    auVar21._10_2_ =
         (ushort)auVar23[10] + (ushort)auVar23[0xb] + (ushort)auVar24[10] + (ushort)auVar24[0xb] +
         (ushort)auVar25[10] + (ushort)auVar25[0xb];
    auVar21._12_2_ =
         (ushort)auVar23[0xc] + (ushort)auVar23[0xd] + (ushort)auVar24[0xc] + (ushort)auVar24[0xd] +
         (ushort)auVar25[0xc] + (ushort)auVar25[0xd];
    auVar21._14_2_ =
         (ushort)auVar23[0xe] + (ushort)auVar23[0xf] + (ushort)auVar24[0xe] + (ushort)auVar24[0xf] +
         (ushort)auVar25[0xe] + (ushort)auVar25[0xf];
    auVar22 = NEON_sqrdmulh(auVar21,auVar5,2);
    auVar23._2_2_ =
         (ushort)auVar15[2] + (ushort)auVar15[3] + (ushort)auVar16[2] + (ushort)auVar16[3] +
         (ushort)auVar17[2] + (ushort)auVar17[3];
    auVar23._0_2_ =
         (ushort)auVar15[0] + (ushort)auVar15[1] + (ushort)auVar16[0] + (ushort)auVar16[1] +
         (ushort)auVar17[0] + (ushort)auVar17[1];
    auVar23._4_2_ =
         (ushort)auVar15[4] + (ushort)auVar15[5] + (ushort)auVar16[4] + (ushort)auVar16[5] +
         (ushort)auVar17[4] + (ushort)auVar17[5];
    auVar23._6_2_ =
         (ushort)auVar15[6] + (ushort)auVar15[7] + (ushort)auVar16[6] + (ushort)auVar16[7] +
         (ushort)auVar17[6] + (ushort)auVar17[7];
    auVar23._8_2_ =
         (ushort)auVar15[8] + (ushort)auVar15[9] + (ushort)auVar16[8] + (ushort)auVar16[9] +
         (ushort)auVar17[8] + (ushort)auVar17[9];
    auVar23._10_2_ =
         (ushort)auVar15[10] + (ushort)auVar15[0xb] + (ushort)auVar16[10] + (ushort)auVar16[0xb] +
         (ushort)auVar17[10] + (ushort)auVar17[0xb];
    auVar23._12_2_ =
         (ushort)auVar15[0xc] + (ushort)auVar15[0xd] + (ushort)auVar16[0xc] + (ushort)auVar16[0xd] +
         (ushort)auVar17[0xc] + (ushort)auVar17[0xd];
    auVar23._14_2_ =
         (ushort)auVar15[0xe] + (ushort)auVar15[0xf] + (ushort)auVar16[0xe] + (ushort)auVar16[0xf] +
         (ushort)auVar17[0xe] + (ushort)auVar17[0xf];
    auVar15 = NEON_sqrdmulh(auVar23,auVar5,2);
    auVar15 = a64_TBL(ZEXT816(0),auVar22,auVar15,auVar4);
    *param_3 = auVar15._0_8_;
    *(int *)(param_3 + 1) = auVar15._8_4_;
    param_3 = (undefined8 *)((long)param_3 + 0xc);
    bVar1 = 0xb < param_4;
    param_1 = param_1 + 2;
    pauVar8 = pauVar8 + 2;
    param_4 = iVar2;
  } while (iVar2 != 0 && bVar1);
  return;
}


// ===== 007cb704  FUN_007cb704 =====

void FUN_007cb704(undefined8 *param_1,undefined1 *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint3 uVar5;
  undefined1 (*pauVar6) [16];
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  
  pauVar6 = (undefined1 (*) [16])((long)param_1 + 1);
  do {
    uVar22 = param_1[1];
    uVar21 = *param_1;
    auVar4 = *pauVar6;
    Hint_Prefetch(param_1 + 0x3a,0,0,0);
    bVar7 = (byte)((ulong)uVar21 >> 8);
    bVar9 = (byte)((ulong)uVar21 >> 0x10);
    bVar11 = (byte)((ulong)uVar21 >> 0x18);
    bVar13 = (byte)((ulong)uVar21 >> 0x20);
    bVar15 = (byte)((ulong)uVar21 >> 0x28);
    bVar17 = (byte)((ulong)uVar21 >> 0x30);
    bVar19 = (byte)((ulong)uVar21 >> 0x38);
    bVar8 = (byte)((ulong)uVar22 >> 8);
    bVar10 = (byte)((ulong)uVar22 >> 0x10);
    bVar12 = (byte)((ulong)uVar22 >> 0x18);
    bVar14 = (byte)((ulong)uVar22 >> 0x20);
    bVar16 = (byte)((ulong)uVar22 >> 0x28);
    bVar18 = (byte)((ulong)uVar22 >> 0x30);
    bVar20 = (byte)((ulong)uVar22 >> 0x38);
    auVar23._8_8_ = auVar4._8_8_;
    auVar25._0_8_ =
         CONCAT26((ushort)bVar11 + (ushort)auVar4[3] * 3,
                  CONCAT24((ushort)bVar9 + (ushort)auVar4[2] * 3,
                           CONCAT22((ushort)bVar7 + (ushort)auVar4[1] * 3,
                                    (ushort)(byte)uVar21 + (ushort)auVar4[0] * 3)));
    auVar25._8_2_ = (ushort)bVar13 + (ushort)auVar4[4] * 3;
    auVar25._10_2_ = (ushort)bVar15 + (ushort)auVar4[5] * 3;
    auVar25._12_2_ = (ushort)bVar17 + (ushort)auVar4[6] * 3;
    auVar25._14_2_ = (ushort)bVar19 + (ushort)auVar4[7] * 3;
    uVar5 = CONCAT12(bVar7,(short)uVar21) & 0xff00ff;
    auVar26._8_8_ = auVar25._8_8_;
    auVar26._0_8_ = NEON_rshrn(auVar25._0_8_,auVar25,2,2);
    auVar24._2_2_ = (ushort)auVar4[1] + (ushort)(byte)(uVar5 >> 0x10) * 3;
    auVar24._0_2_ = (ushort)auVar4[0] + (short)uVar5 * 3;
    auVar24._4_2_ = (ushort)auVar4[2] + (ushort)bVar9 * 3;
    auVar24._6_2_ = (ushort)auVar4[3] + (ushort)bVar11 * 3;
    auVar24._8_2_ = (ushort)auVar4[4] + (ushort)bVar13 * 3;
    auVar24._10_2_ = (ushort)auVar4[5] + (ushort)bVar15 * 3;
    auVar24._12_2_ = (ushort)auVar4[6] + (ushort)bVar17 * 3;
    auVar24._14_2_ = (ushort)auVar4[7] + (ushort)bVar19 * 3;
    auVar23._0_8_ = NEON_rshrn(auVar4._0_8_,auVar24,2,2);
    auVar27._2_2_ = (ushort)bVar8 + (ushort)auVar4[9] * 3;
    auVar27._0_2_ = (ushort)(byte)uVar22 + (ushort)auVar4[8] * 3;
    auVar27._4_2_ = (ushort)bVar10 + (ushort)auVar4[10] * 3;
    auVar27._6_2_ = (ushort)bVar12 + (ushort)auVar4[0xb] * 3;
    auVar27._8_2_ = (ushort)bVar14 + (ushort)auVar4[0xc] * 3;
    auVar27._10_2_ = (ushort)bVar16 + (ushort)auVar4[0xd] * 3;
    auVar27._12_2_ = (ushort)bVar18 + (ushort)auVar4[0xe] * 3;
    auVar27._14_2_ = (ushort)bVar20 + (ushort)auVar4[0xf] * 3;
    auVar27 = NEON_rshrn2(auVar26,auVar27,2,2);
    auVar3._2_2_ = (ushort)auVar4[9] + (ushort)bVar8 * 3;
    auVar3._0_2_ = (ushort)auVar4[8] + (ushort)(byte)uVar22 * 3;
    auVar3._4_2_ = (ushort)auVar4[10] + (ushort)bVar10 * 3;
    auVar3._6_2_ = (ushort)auVar4[0xb] + (ushort)bVar12 * 3;
    auVar3._8_2_ = (ushort)auVar4[0xc] + (ushort)bVar14 * 3;
    auVar3._10_2_ = (ushort)auVar4[0xd] + (ushort)bVar16 * 3;
    auVar3._12_2_ = (ushort)auVar4[0xe] + (ushort)bVar18 * 3;
    auVar3._14_2_ = (ushort)auVar4[0xf] + (ushort)bVar20 * 3;
    auVar24 = NEON_rshrn2(auVar23,auVar3,2,2);
    *param_2 = auVar24[0];
    param_2[1] = auVar27[0];
    param_2[2] = auVar24[1];
    param_2[3] = auVar27[1];
    param_2[4] = auVar24[2];
    param_2[5] = auVar27[2];
    param_2[6] = auVar24[3];
    param_2[7] = auVar27[3];
    param_2[8] = auVar24[4];
    param_2[9] = auVar27[4];
    param_2[10] = auVar24[5];
    param_2[0xb] = auVar27[5];
    param_2[0xc] = auVar24[6];
    param_2[0xd] = auVar27[6];
    param_2[0xe] = auVar24[7];
    param_2[0xf] = auVar27[7];
    param_2[0x10] = auVar24[8];
    param_2[0x11] = auVar27[8];
    param_2[0x12] = auVar24[9];
    param_2[0x13] = auVar27[9];
    param_2[0x14] = auVar24[10];
    param_2[0x15] = auVar27[10];
    param_2[0x16] = auVar24[0xb];
    param_2[0x17] = auVar27[0xb];
    param_2[0x18] = auVar24[0xc];
    param_2[0x19] = auVar27[0xc];
    param_2[0x1a] = auVar24[0xd];
    param_2[0x1b] = auVar27[0xd];
    param_2[0x1c] = auVar24[0xe];
    param_2[0x1d] = auVar27[0xe];
    param_2[0x1e] = auVar24[0xf];
    param_2[0x1f] = auVar27[0xf];
    param_2 = param_2 + 0x20;
    iVar2 = param_3 + -0x20;
    bVar1 = 0x1f < param_3;
    param_1 = param_1 + 2;
    pauVar6 = pauVar6 + 1;
    param_3 = iVar2;
  } while (iVar2 != 0 && bVar1);
  return;
}


// ===== 007cb75c  FUN_007cb75c =====

void FUN_007cb75c(undefined8 *param_1,long param_2,undefined1 *param_3,long param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  undefined1 auVar3 [16];
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined1 auVar8 [16];
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  undefined4 uVar13;
  undefined6 uVar14;
  undefined1 auVar15 [16];
  short sVar16;
  short sVar17;
  undefined8 uVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  undefined1 auVar22 [16];
  uint3 uVar23;
  undefined1 *puVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  short sVar51;
  short sVar52;
  short sVar53;
  short sVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  short sVar61;
  short sVar62;
  short sVar63;
  short sVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  short sVar71;
  short sVar72;
  short sVar73;
  short sVar74;
  short sVar75;
  short sVar76;
  short sVar77;
  short sVar78;
  short sVar79;
  short sVar80;
  short sVar81;
  short sVar82;
  
  puVar24 = param_3 + param_4;
  puVar25 = (undefined8 *)((long)param_1 + param_2);
  puVar26 = (undefined8 *)((long)param_1 + 1);
  puVar27 = (undefined8 *)((long)param_1 + param_2 + 1);
  do {
    uVar42 = *param_1;
    uVar43 = *puVar26;
    Hint_Prefetch(param_1 + 0x39,0,0,0);
    bVar28 = (byte)((ulong)uVar42 >> 8);
    bVar30 = (byte)((ulong)uVar42 >> 0x10);
    bVar32 = (byte)((ulong)uVar42 >> 0x18);
    bVar34 = (byte)((ulong)uVar42 >> 0x20);
    bVar36 = (byte)((ulong)uVar42 >> 0x28);
    bVar38 = (byte)((ulong)uVar42 >> 0x30);
    bVar40 = (byte)((ulong)uVar42 >> 0x38);
    bVar29 = (byte)((ulong)uVar43 >> 8);
    bVar31 = (byte)((ulong)uVar43 >> 0x10);
    bVar33 = (byte)((ulong)uVar43 >> 0x18);
    bVar35 = (byte)((ulong)uVar43 >> 0x20);
    bVar37 = (byte)((ulong)uVar43 >> 0x28);
    bVar39 = (byte)((ulong)uVar43 >> 0x30);
    bVar41 = (byte)((ulong)uVar43 >> 0x38);
    uVar23 = CONCAT12(bVar29,(short)uVar43) & 0xff00ff;
    sVar4 = (ushort)(byte)uVar42 + (short)uVar23 * 3;
    sVar5 = (ushort)bVar28 + (ushort)(byte)(uVar23 >> 0x10) * 3;
    sVar6 = (ushort)bVar30 + (ushort)bVar31 * 3;
    sVar7 = (ushort)bVar32 + (ushort)bVar33 * 3;
    sVar51 = (ushort)bVar34 + (ushort)bVar35 * 3;
    sVar52 = (ushort)bVar36 + (ushort)bVar37 * 3;
    sVar53 = (ushort)bVar38 + (ushort)bVar39 * 3;
    sVar54 = (ushort)bVar40 + (ushort)bVar41 * 3;
    uVar23 = CONCAT12(bVar28,(short)uVar42) & 0xff00ff;
    sVar9 = (ushort)(byte)uVar43 + (short)uVar23 * 3;
    sVar10 = (ushort)bVar29 + (ushort)(byte)(uVar23 >> 0x10) * 3;
    sVar11 = (ushort)bVar31 + (ushort)bVar30 * 3;
    sVar12 = (ushort)bVar33 + (ushort)bVar32 * 3;
    sVar61 = (ushort)bVar35 + (ushort)bVar34 * 3;
    sVar62 = (ushort)bVar37 + (ushort)bVar36 * 3;
    sVar63 = (ushort)bVar39 + (ushort)bVar38 * 3;
    sVar64 = (ushort)bVar41 + (ushort)bVar40 * 3;
    uVar42 = *puVar25;
    uVar43 = *puVar27;
    Hint_Prefetch(puVar25 + 0x39,0,0,0);
    bVar28 = (byte)((ulong)uVar42 >> 8);
    bVar30 = (byte)((ulong)uVar42 >> 0x10);
    bVar32 = (byte)((ulong)uVar42 >> 0x18);
    bVar34 = (byte)((ulong)uVar42 >> 0x20);
    bVar36 = (byte)((ulong)uVar42 >> 0x28);
    bVar38 = (byte)((ulong)uVar42 >> 0x30);
    bVar40 = (byte)((ulong)uVar42 >> 0x38);
    bVar29 = (byte)((ulong)uVar43 >> 8);
    bVar31 = (byte)((ulong)uVar43 >> 0x10);
    bVar33 = (byte)((ulong)uVar43 >> 0x18);
    bVar35 = (byte)((ulong)uVar43 >> 0x20);
    bVar37 = (byte)((ulong)uVar43 >> 0x28);
    bVar39 = (byte)((ulong)uVar43 >> 0x30);
    bVar41 = (byte)((ulong)uVar43 >> 0x38);
    uVar23 = CONCAT12(bVar29,(short)uVar43) & 0xff00ff;
    sVar16 = (ushort)(byte)uVar42 + (short)uVar23 * 3;
    sVar19 = (ushort)bVar28 + (ushort)(byte)(uVar23 >> 0x10) * 3;
    sVar20 = (ushort)bVar30 + (ushort)bVar31 * 3;
    sVar21 = (ushort)bVar32 + (ushort)bVar33 * 3;
    sVar71 = (ushort)bVar34 + (ushort)bVar35 * 3;
    sVar72 = (ushort)bVar36 + (ushort)bVar37 * 3;
    sVar73 = (ushort)bVar38 + (ushort)bVar39 * 3;
    sVar74 = (ushort)bVar40 + (ushort)bVar41 * 3;
    uVar23 = CONCAT12(bVar28,(short)uVar42) & 0xff00ff;
    sVar75 = (ushort)(byte)uVar43 + (short)uVar23 * 3;
    sVar76 = (ushort)bVar29 + (ushort)(byte)(uVar23 >> 0x10) * 3;
    sVar77 = (ushort)bVar31 + (ushort)bVar30 * 3;
    sVar78 = (ushort)bVar33 + (ushort)bVar32 * 3;
    sVar79 = (ushort)bVar35 + (ushort)bVar34 * 3;
    sVar80 = (ushort)bVar37 + (ushort)bVar36 * 3;
    sVar81 = (ushort)bVar39 + (ushort)bVar38 * 3;
    sVar82 = (ushort)bVar41 + (ushort)bVar40 * 3;
    uVar13 = CONCAT13((char)((ushort)sVar19 >> 8),CONCAT12((char)sVar19,sVar16));
    uVar14 = CONCAT15((char)((ushort)sVar20 >> 8),CONCAT14((char)sVar20,uVar13));
    sVar17 = sVar16 + sVar4 * 3;
    sVar19 = sVar19 + sVar5 * 3;
    uVar65 = (undefined1)sVar19;
    uVar66 = (undefined1)((ushort)sVar19 >> 8);
    sVar20 = sVar20 + sVar6 * 3;
    uVar67 = (undefined1)sVar20;
    uVar68 = (undefined1)((ushort)sVar20 >> 8);
    sVar19 = sVar21 + sVar7 * 3;
    uVar69 = (undefined1)sVar19;
    uVar70 = (undefined1)((ushort)sVar19 >> 8);
    sVar4 = sVar4 + sVar16 * 3;
    sVar5 = sVar5 + (short)((uint)uVar13 >> 0x10) * 3;
    uVar45 = (undefined1)sVar5;
    uVar46 = (undefined1)((ushort)sVar5 >> 8);
    sVar6 = sVar6 + (short)((uint6)uVar14 >> 0x20) * 3;
    uVar47 = (undefined1)sVar6;
    uVar48 = (undefined1)((ushort)sVar6 >> 8);
    sVar7 = sVar7 + (short)(CONCAT17((char)((ushort)sVar21 >> 8),CONCAT16((char)sVar21,uVar14)) >>
                           0x30) * 3;
    uVar49 = (undefined1)sVar7;
    uVar50 = (undefined1)((ushort)sVar7 >> 8);
    sVar5 = sVar9 + sVar75 * 3;
    sVar6 = sVar10 + sVar76 * 3;
    uVar55 = (undefined1)sVar6;
    uVar56 = (undefined1)((ushort)sVar6 >> 8);
    sVar6 = sVar11 + sVar77 * 3;
    uVar57 = (undefined1)sVar6;
    uVar58 = (undefined1)((ushort)sVar6 >> 8);
    sVar6 = sVar12 + sVar78 * 3;
    uVar59 = (undefined1)sVar6;
    uVar60 = (undefined1)((ushort)sVar6 >> 8);
    auVar3[2] = uVar45;
    auVar3._0_2_ = sVar4;
    auVar3[3] = uVar46;
    auVar3[4] = uVar47;
    auVar3[5] = uVar48;
    auVar3[6] = uVar49;
    auVar3[7] = uVar50;
    auVar3._8_2_ = sVar51 + sVar71 * 3;
    auVar3._10_2_ = sVar52 + sVar72 * 3;
    auVar3._12_2_ = sVar53 + sVar73 * 3;
    auVar3._14_2_ = sVar54 + sVar74 * 3;
    uVar42 = NEON_rshrn(CONCAT17(uVar50,CONCAT16(uVar49,CONCAT15(uVar48,CONCAT14(uVar47,CONCAT13(
                                                  uVar46,CONCAT12(uVar45,sVar4)))))),auVar3,4,2);
    auVar8[2] = uVar55;
    auVar8._0_2_ = sVar5;
    auVar8[3] = uVar56;
    auVar8[4] = uVar57;
    auVar8[5] = uVar58;
    auVar8[6] = uVar59;
    auVar8[7] = uVar60;
    auVar8._8_2_ = sVar61 + sVar79 * 3;
    auVar8._10_2_ = sVar62 + sVar80 * 3;
    auVar8._12_2_ = sVar63 + sVar81 * 3;
    auVar8._14_2_ = sVar64 + sVar82 * 3;
    uVar44 = NEON_rshrn(CONCAT26(sVar78,CONCAT24(sVar77,CONCAT22(sVar76,sVar75))),auVar8,4,2);
    auVar15[2] = uVar65;
    auVar15._0_2_ = sVar17;
    auVar15[3] = uVar66;
    auVar15[4] = uVar67;
    auVar15[5] = uVar68;
    auVar15[6] = uVar69;
    auVar15[7] = uVar70;
    auVar15._8_2_ = sVar71 + sVar51 * 3;
    auVar15._10_2_ = sVar72 + sVar52 * 3;
    auVar15._12_2_ = sVar73 + sVar53 * 3;
    auVar15._14_2_ = sVar74 + sVar54 * 3;
    uVar18 = NEON_rshrn(CONCAT17(uVar70,CONCAT16(uVar69,CONCAT15(uVar68,CONCAT14(uVar67,CONCAT13(
                                                  uVar66,CONCAT12(uVar65,sVar17)))))),auVar15,4,2);
    auVar22._2_2_ = sVar76 + sVar10 * 3;
    auVar22._0_2_ = sVar75 + sVar9 * 3;
    auVar22._4_2_ = sVar77 + sVar11 * 3;
    auVar22._6_2_ = sVar78 + sVar12 * 3;
    auVar22._8_2_ = sVar79 + sVar61 * 3;
    auVar22._10_2_ = sVar80 + sVar62 * 3;
    auVar22._12_2_ = sVar81 + sVar63 * 3;
    auVar22._14_2_ = sVar82 + sVar64 * 3;
    uVar43 = NEON_rshrn(CONCAT17(uVar60,CONCAT16(uVar59,CONCAT15(uVar58,CONCAT14(uVar57,CONCAT13(
                                                  uVar56,CONCAT12(uVar55,sVar5)))))),auVar22,4,2);
    *puVar24 = (char)uVar44;
    puVar24[1] = (char)uVar42;
    puVar24[2] = (char)((ulong)uVar44 >> 8);
    puVar24[3] = (char)((ulong)uVar42 >> 8);
    puVar24[4] = (char)((ulong)uVar44 >> 0x10);
    puVar24[5] = (char)((ulong)uVar42 >> 0x10);
    puVar24[6] = (char)((ulong)uVar44 >> 0x18);
    puVar24[7] = (char)((ulong)uVar42 >> 0x18);
    puVar24[8] = (char)((ulong)uVar44 >> 0x20);
    puVar24[9] = (char)((ulong)uVar42 >> 0x20);
    puVar24[10] = (char)((ulong)uVar44 >> 0x28);
    puVar24[0xb] = (char)((ulong)uVar42 >> 0x28);
    puVar24[0xc] = (char)((ulong)uVar44 >> 0x30);
    puVar24[0xd] = (char)((ulong)uVar42 >> 0x30);
    puVar24[0xe] = (char)((ulong)uVar44 >> 0x38);
    puVar24[0xf] = (char)((ulong)uVar42 >> 0x38);
    puVar24 = puVar24 + 0x10;
    *param_3 = (char)uVar43;
    param_3[1] = (char)uVar18;
    param_3[2] = (char)((ulong)uVar43 >> 8);
    param_3[3] = (char)((ulong)uVar18 >> 8);
    param_3[4] = (char)((ulong)uVar43 >> 0x10);
    param_3[5] = (char)((ulong)uVar18 >> 0x10);
    param_3[6] = (char)((ulong)uVar43 >> 0x18);
    param_3[7] = (char)((ulong)uVar18 >> 0x18);
    param_3[8] = (char)((ulong)uVar43 >> 0x20);
    param_3[9] = (char)((ulong)uVar18 >> 0x20);
    param_3[10] = (char)((ulong)uVar43 >> 0x28);
    param_3[0xb] = (char)((ulong)uVar18 >> 0x28);
    param_3[0xc] = (char)((ulong)uVar43 >> 0x30);
    param_3[0xd] = (char)((ulong)uVar18 >> 0x30);
    param_3[0xe] = (char)((ulong)uVar43 >> 0x38);
    param_3[0xf] = (char)((ulong)uVar18 >> 0x38);
    param_3 = param_3 + 0x10;
    iVar2 = param_5 + -0x10;
    bVar1 = 0xf < param_5;
    param_1 = param_1 + 1;
    puVar25 = puVar25 + 1;
    puVar26 = puVar26 + 1;
    puVar27 = puVar27 + 1;
    param_5 = iVar2;
  } while (iVar2 != 0 && bVar1);
  return;
}


// ===== 007cb7ec  FUN_007cb7ec =====

void FUN_007cb7ec(undefined8 *param_1,undefined2 *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint3 uVar5;
  undefined8 *puVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  
  puVar6 = (undefined8 *)((long)param_1 + 2);
  do {
    uVar21 = *param_1;
    uVar22 = *puVar6;
    Hint_Prefetch(param_1 + 0x39,0,0,0);
    bVar7 = (byte)((ulong)uVar21 >> 8);
    bVar9 = (byte)((ulong)uVar21 >> 0x10);
    bVar11 = (byte)((ulong)uVar21 >> 0x18);
    bVar13 = (byte)((ulong)uVar21 >> 0x20);
    bVar15 = (byte)((ulong)uVar21 >> 0x28);
    bVar17 = (byte)((ulong)uVar21 >> 0x30);
    bVar19 = (byte)((ulong)uVar21 >> 0x38);
    bVar8 = (byte)((ulong)uVar22 >> 8);
    bVar10 = (byte)((ulong)uVar22 >> 0x10);
    bVar12 = (byte)((ulong)uVar22 >> 0x18);
    bVar14 = (byte)((ulong)uVar22 >> 0x20);
    bVar16 = (byte)((ulong)uVar22 >> 0x28);
    bVar18 = (byte)((ulong)uVar22 >> 0x30);
    bVar20 = (byte)((ulong)uVar22 >> 0x38);
    uVar5 = CONCAT12(bVar8,(short)uVar22) & 0xff00ff;
    sVar23 = (ushort)(byte)uVar21 + (short)uVar5 * 3;
    sVar24 = (ushort)bVar7 + (ushort)(byte)(uVar5 >> 0x10) * 3;
    sVar25 = (ushort)bVar9 + (ushort)bVar10 * 3;
    sVar26 = (ushort)bVar11 + (ushort)bVar12 * 3;
    uVar5 = CONCAT12(bVar7,(short)uVar21) & 0xff00ff;
    auVar3._2_2_ = sVar24;
    auVar3._0_2_ = sVar23;
    auVar3._4_2_ = sVar25;
    auVar3._6_2_ = sVar26;
    auVar3._8_2_ = (ushort)bVar13 + (ushort)bVar14 * 3;
    auVar3._10_2_ = (ushort)bVar15 + (ushort)bVar16 * 3;
    auVar3._12_2_ = (ushort)bVar17 + (ushort)bVar18 * 3;
    auVar3._14_2_ = (ushort)bVar19 + (ushort)bVar20 * 3;
    uVar21 = NEON_rshrn(CONCAT26(sVar26,CONCAT24(sVar25,CONCAT22(sVar24,sVar23))),auVar3,2,2);
    auVar4._2_2_ = (ushort)bVar8 + (ushort)(byte)(uVar5 >> 0x10) * 3;
    auVar4._0_2_ = (ushort)(byte)uVar22 + (short)uVar5 * 3;
    auVar4._4_2_ = (ushort)bVar10 + (ushort)bVar9 * 3;
    auVar4._6_2_ = (ushort)bVar12 + (ushort)bVar11 * 3;
    auVar4._8_2_ = (ushort)bVar14 + (ushort)bVar13 * 3;
    auVar4._10_2_ = (ushort)bVar16 + (ushort)bVar15 * 3;
    auVar4._12_2_ = (ushort)bVar18 + (ushort)bVar17 * 3;
    auVar4._14_2_ = (ushort)bVar20 + (ushort)bVar19 * 3;
    uVar22 = NEON_rshrn(uVar22,auVar4,2,2);
    *param_2 = (short)uVar22;
    param_2[1] = (short)uVar21;
    param_2[2] = (short)((ulong)uVar22 >> 0x10);
    param_2[3] = (short)((ulong)uVar21 >> 0x10);
    param_2[4] = (short)((ulong)uVar22 >> 0x20);
    param_2[5] = (short)((ulong)uVar21 >> 0x20);
    param_2[6] = (short)((ulong)uVar22 >> 0x30);
    param_2[7] = (short)((ulong)uVar21 >> 0x30);
    param_2 = param_2 + 8;
    iVar2 = param_3 + -8;
    bVar1 = 7 < param_3;
    param_1 = param_1 + 1;
    puVar6 = puVar6 + 1;
    param_3 = iVar2;
  } while (iVar2 != 0 && bVar1);
  return;
}


// ===== 007cb82c  FUN_007cb82c =====

void FUN_007cb82c(undefined8 *param_1,long param_2,undefined2 *param_3,long param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined1 auVar7 [16];
  uint3 uVar8;
  undefined2 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  short sVar30;
  short sVar31;
  short sVar32;
  short sVar33;
  short sVar34;
  short sVar35;
  short sVar36;
  short sVar37;
  short sVar38;
  short sVar39;
  short sVar40;
  short sVar41;
  short sVar42;
  short sVar43;
  short sVar44;
  short sVar45;
  short sVar46;
  short sVar47;
  short sVar48;
  short sVar49;
  short sVar50;
  short sVar51;
  short sVar52;
  short sVar53;
  short sVar54;
  short sVar55;
  short sVar56;
  short sVar57;
  short sVar58;
  short sVar59;
  short sVar60;
  short sVar61;
  short sVar62;
  short sVar63;
  short sVar64;
  short sVar65;
  
  puVar9 = (undefined2 *)((long)param_3 + param_4);
  puVar10 = (undefined8 *)((long)param_1 + param_2);
  puVar11 = (undefined8 *)((long)param_1 + 2);
  puVar12 = (undefined8 *)((long)param_1 + param_2 + 2);
  do {
    uVar27 = *param_1;
    uVar28 = *puVar11;
    Hint_Prefetch(param_1 + 0x39,0,0,0);
    bVar13 = (byte)((ulong)uVar27 >> 8);
    bVar15 = (byte)((ulong)uVar27 >> 0x10);
    bVar17 = (byte)((ulong)uVar27 >> 0x18);
    bVar19 = (byte)((ulong)uVar27 >> 0x20);
    bVar21 = (byte)((ulong)uVar27 >> 0x28);
    bVar23 = (byte)((ulong)uVar27 >> 0x30);
    bVar25 = (byte)((ulong)uVar27 >> 0x38);
    bVar14 = (byte)((ulong)uVar28 >> 8);
    bVar16 = (byte)((ulong)uVar28 >> 0x10);
    bVar18 = (byte)((ulong)uVar28 >> 0x18);
    bVar20 = (byte)((ulong)uVar28 >> 0x20);
    bVar22 = (byte)((ulong)uVar28 >> 0x28);
    bVar24 = (byte)((ulong)uVar28 >> 0x30);
    bVar26 = (byte)((ulong)uVar28 >> 0x38);
    uVar8 = CONCAT12(bVar14,(short)uVar28) & 0xff00ff;
    sVar30 = (ushort)(byte)uVar27 + (short)uVar8 * 3;
    sVar31 = (ushort)bVar13 + (ushort)(byte)(uVar8 >> 0x10) * 3;
    sVar32 = (ushort)bVar15 + (ushort)bVar16 * 3;
    sVar33 = (ushort)bVar17 + (ushort)bVar18 * 3;
    sVar34 = (ushort)bVar19 + (ushort)bVar20 * 3;
    sVar35 = (ushort)bVar21 + (ushort)bVar22 * 3;
    sVar36 = (ushort)bVar23 + (ushort)bVar24 * 3;
    sVar37 = (ushort)bVar25 + (ushort)bVar26 * 3;
    uVar8 = CONCAT12(bVar13,(short)uVar27) & 0xff00ff;
    sVar38 = (ushort)(byte)uVar28 + (short)uVar8 * 3;
    sVar39 = (ushort)bVar14 + (ushort)(byte)(uVar8 >> 0x10) * 3;
    sVar40 = (ushort)bVar16 + (ushort)bVar15 * 3;
    sVar41 = (ushort)bVar18 + (ushort)bVar17 * 3;
    sVar42 = (ushort)bVar20 + (ushort)bVar19 * 3;
    sVar43 = (ushort)bVar22 + (ushort)bVar21 * 3;
    sVar44 = (ushort)bVar24 + (ushort)bVar23 * 3;
    sVar45 = (ushort)bVar26 + (ushort)bVar25 * 3;
    uVar27 = *puVar10;
    uVar28 = *puVar12;
    Hint_Prefetch(puVar10 + 0x39,0,0,0);
    bVar13 = (byte)((ulong)uVar27 >> 8);
    bVar15 = (byte)((ulong)uVar27 >> 0x10);
    bVar17 = (byte)((ulong)uVar27 >> 0x18);
    bVar19 = (byte)((ulong)uVar27 >> 0x20);
    bVar21 = (byte)((ulong)uVar27 >> 0x28);
    bVar23 = (byte)((ulong)uVar27 >> 0x30);
    bVar25 = (byte)((ulong)uVar27 >> 0x38);
    bVar14 = (byte)((ulong)uVar28 >> 8);
    bVar16 = (byte)((ulong)uVar28 >> 0x10);
    bVar18 = (byte)((ulong)uVar28 >> 0x18);
    bVar20 = (byte)((ulong)uVar28 >> 0x20);
    bVar22 = (byte)((ulong)uVar28 >> 0x28);
    bVar24 = (byte)((ulong)uVar28 >> 0x30);
    bVar26 = (byte)((ulong)uVar28 >> 0x38);
    uVar8 = CONCAT12(bVar14,(short)uVar28) & 0xff00ff;
    sVar46 = (ushort)(byte)uVar27 + (short)uVar8 * 3;
    sVar48 = (ushort)bVar13 + (ushort)(byte)(uVar8 >> 0x10) * 3;
    sVar50 = (ushort)bVar15 + (ushort)bVar16 * 3;
    sVar52 = (ushort)bVar17 + (ushort)bVar18 * 3;
    sVar54 = (ushort)bVar19 + (ushort)bVar20 * 3;
    sVar55 = (ushort)bVar21 + (ushort)bVar22 * 3;
    sVar56 = (ushort)bVar23 + (ushort)bVar24 * 3;
    sVar57 = (ushort)bVar25 + (ushort)bVar26 * 3;
    uVar8 = CONCAT12(bVar13,(short)uVar27) & 0xff00ff;
    sVar58 = (ushort)(byte)uVar28 + (short)uVar8 * 3;
    sVar59 = (ushort)bVar14 + (ushort)(byte)(uVar8 >> 0x10) * 3;
    sVar60 = (ushort)bVar16 + (ushort)bVar15 * 3;
    sVar61 = (ushort)bVar18 + (ushort)bVar17 * 3;
    sVar62 = (ushort)bVar20 + (ushort)bVar19 * 3;
    sVar63 = (ushort)bVar22 + (ushort)bVar21 * 3;
    sVar64 = (ushort)bVar24 + (ushort)bVar23 * 3;
    sVar65 = (ushort)bVar26 + (ushort)bVar25 * 3;
    sVar47 = sVar46 + sVar30 * 3;
    sVar49 = sVar48 + sVar31 * 3;
    sVar51 = sVar50 + sVar32 * 3;
    sVar53 = sVar52 + sVar33 * 3;
    sVar30 = sVar30 + sVar46 * 3;
    sVar31 = sVar31 + sVar48 * 3;
    sVar32 = sVar32 + sVar50 * 3;
    sVar33 = sVar33 + sVar52 * 3;
    sVar46 = sVar38 + sVar58 * 3;
    sVar48 = sVar39 + sVar59 * 3;
    sVar50 = sVar40 + sVar60 * 3;
    sVar52 = sVar41 + sVar61 * 3;
    auVar3._2_2_ = sVar31;
    auVar3._0_2_ = sVar30;
    auVar3._4_2_ = sVar32;
    auVar3._6_2_ = sVar33;
    auVar3._8_2_ = sVar34 + sVar54 * 3;
    auVar3._10_2_ = sVar35 + sVar55 * 3;
    auVar3._12_2_ = sVar36 + sVar56 * 3;
    auVar3._14_2_ = sVar37 + sVar57 * 3;
    uVar27 = NEON_rshrn(CONCAT26(sVar33,CONCAT24(sVar32,CONCAT22(sVar31,sVar30))),auVar3,4,2);
    auVar4._2_2_ = sVar48;
    auVar4._0_2_ = sVar46;
    auVar4._4_2_ = sVar50;
    auVar4._6_2_ = sVar52;
    auVar4._8_2_ = sVar42 + sVar62 * 3;
    auVar4._10_2_ = sVar43 + sVar63 * 3;
    auVar4._12_2_ = sVar44 + sVar64 * 3;
    auVar4._14_2_ = sVar45 + sVar65 * 3;
    uVar29 = NEON_rshrn(CONCAT26(sVar61,CONCAT24(sVar60,CONCAT22(sVar59,sVar58))),auVar4,4,2);
    auVar5._2_2_ = sVar49;
    auVar5._0_2_ = sVar47;
    auVar5._4_2_ = sVar51;
    auVar5._6_2_ = sVar53;
    auVar5._8_2_ = sVar54 + sVar34 * 3;
    auVar5._10_2_ = sVar55 + sVar35 * 3;
    auVar5._12_2_ = sVar56 + sVar36 * 3;
    auVar5._14_2_ = sVar57 + sVar37 * 3;
    uVar6 = NEON_rshrn(CONCAT26(sVar53,CONCAT24(sVar51,CONCAT22(sVar49,sVar47))),auVar5,4,2);
    auVar7._2_2_ = sVar59 + sVar39 * 3;
    auVar7._0_2_ = sVar58 + sVar38 * 3;
    auVar7._4_2_ = sVar60 + sVar40 * 3;
    auVar7._6_2_ = sVar61 + sVar41 * 3;
    auVar7._8_2_ = sVar62 + sVar42 * 3;
    auVar7._10_2_ = sVar63 + sVar43 * 3;
    auVar7._12_2_ = sVar64 + sVar44 * 3;
    auVar7._14_2_ = sVar65 + sVar45 * 3;
    uVar28 = NEON_rshrn(CONCAT26(sVar52,CONCAT24(sVar50,CONCAT22(sVar48,sVar46))),auVar7,4,2);
    *puVar9 = (short)uVar29;
    puVar9[1] = (short)uVar27;
    puVar9[2] = (short)((ulong)uVar29 >> 0x10);
    puVar9[3] = (short)((ulong)uVar27 >> 0x10);
    puVar9[4] = (short)((ulong)uVar29 >> 0x20);
    puVar9[5] = (short)((ulong)uVar27 >> 0x20);
    puVar9[6] = (short)((ulong)uVar29 >> 0x30);
    puVar9[7] = (short)((ulong)uVar27 >> 0x30);
    puVar9 = puVar9 + 8;
    *param_3 = (short)uVar28;
    param_3[1] = (short)uVar6;
    param_3[2] = (short)((ulong)uVar28 >> 0x10);
    param_3[3] = (short)((ulong)uVar6 >> 0x10);
    param_3[4] = (short)((ulong)uVar28 >> 0x20);
    param_3[5] = (short)((ulong)uVar6 >> 0x20);
    param_3[6] = (short)((ulong)uVar28 >> 0x30);
    param_3[7] = (short)((ulong)uVar6 >> 0x30);
    param_3 = param_3 + 8;
    iVar2 = param_5 + -8;
    bVar1 = 7 < param_5;
    param_1 = param_1 + 1;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
    puVar12 = puVar12 + 1;
    param_5 = iVar2;
  } while (iVar2 != 0 && bVar1);
  return;
}


// ===== 007cb8bc  FUN_007cb8bc =====

void FUN_007cb8bc(byte *param_1,short *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined7 uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  
  do {
    bVar4 = param_1[1];
    bVar5 = param_1[2];
    bVar6 = param_1[3];
    bVar7 = param_1[4];
    bVar8 = param_1[5];
    bVar9 = param_1[6];
    bVar10 = param_1[7];
    uVar3 = *(undefined7 *)(param_1 + 8);
    bVar11 = param_1[0xf];
    Hint_Prefetch(param_1 + 0x1d0,0,0,0);
    *param_2 = *param_2 + (ushort)*param_1;
    param_2[1] = param_2[1] + (ushort)bVar4;
    param_2[2] = param_2[2] + (ushort)bVar5;
    param_2[3] = param_2[3] + (ushort)bVar6;
    param_2[4] = param_2[4] + (ushort)bVar7;
    param_2[5] = param_2[5] + (ushort)bVar8;
    param_2[6] = param_2[6] + (ushort)bVar9;
    param_2[7] = param_2[7] + (ushort)bVar10;
    param_2[8] = param_2[8] + (ushort)(byte)uVar3;
    param_2[9] = param_2[9] + (ushort)(byte)((uint7)uVar3 >> 8);
    param_2[10] = param_2[10] + (ushort)(byte)((uint7)uVar3 >> 0x10);
    param_2[0xb] = param_2[0xb] + (ushort)(byte)((uint7)uVar3 >> 0x18);
    param_2[0xc] = param_2[0xc] + (ushort)(byte)((uint7)uVar3 >> 0x20);
    param_2[0xd] = param_2[0xd] + (ushort)(byte)((uint7)uVar3 >> 0x28);
    param_2[0xe] = param_2[0xe] + (ushort)(byte)((uint7)uVar3 >> 0x30);
    param_2[0xf] = param_2[0xf] + (ushort)bVar11;
    param_2 = param_2 + 0x10;
    iVar2 = param_3 + -0x10;
    bVar1 = 0xf < param_3;
    param_1 = param_1 + 0x10;
    param_3 = iVar2;
  } while (iVar2 != 0 && bVar1);
  return;
}


// ===== 007cb8e4  FUN_007cb8e4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007cb8e4(char *param_1,long param_2,int param_3,ulong param_4,long param_5)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  byte bVar5;
  int iVar6;
  short sVar7;
  short sVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint3 uVar13;
  ushort uVar14;
  ushort uVar18;
  ushort uVar19;
  ushort uVar20;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  uint uVar21;
  uint uVar22;
  uint uVar23;
  ushort uVar24;
  short sVar25;
  short sVar26;
  int local_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  iVar6 = (int)param_5;
  uVar12 = (uint)param_4;
  local_10 = (int)_DAT_001f3f60;
  iStack_c = (int)((ulong)_DAT_001f3f60 >> 0x20);
  iStack_8 = (int)_UNK_001f3f68;
  iStack_4 = (int)((ulong)_UNK_001f3f68 >> 0x20);
  sVar25 = (short)(iVar6 << 3);
  sVar26 = (short)(iVar6 << 3);
  uVar9 = iVar6 * local_10 + (uVar12 & 0xffff);
  uVar10 = iVar6 * iStack_c + uVar12;
  uVar11 = iVar6 * iStack_8 + uVar12;
  uVar12 = iVar6 * iStack_4 + uVar12;
  uVar24 = (short)uVar12 + (short)(iVar6 << 2);
  uVar2 = (ulong)CONCAT24((short)(iVar6 << 3),iVar6 << 3) & 0xffffffff0000ffff;
  sVar7 = (short)uVar2;
  sVar8 = (short)(uVar2 >> 0x20);
  uVar21 = uVar9 & 0xffff;
  uVar22 = uVar10 & 0xffff;
  uVar23 = uVar11 & 0xffff;
  uVar12 = uVar12 & 0xffff;
  uVar9 = uVar9 + iVar6 * 4 & 0xffff;
  uVar10 = uVar10 + iVar6 * 4 & 0xffff;
  uVar11 = uVar11 + iVar6 * 4 & 0xffff;
  do {
    uVar14 = *(ushort *)(param_2 + (param_4 >> 0x10));
    uVar2 = param_4 + param_5 + param_5;
    uVar18 = *(ushort *)(param_2 + (param_4 + param_5 >> 0x10));
    uVar3 = uVar2 + param_5;
    uVar19 = *(ushort *)(param_2 + (uVar2 >> 0x10));
    uVar2 = uVar3 + param_5;
    uVar20 = *(ushort *)(param_2 + (uVar3 >> 0x10));
    auVar15._0_8_ = CONCAT26(uVar20,CONCAT24(uVar19,CONCAT22(uVar18,uVar14)));
    uVar3 = uVar2 + param_5;
    auVar15._8_2_ = *(ushort *)(param_2 + (uVar2 >> 0x10));
    uVar2 = uVar3 + param_5;
    auVar15._10_2_ = *(ushort *)(param_2 + (uVar3 >> 0x10));
    uVar3 = uVar2 + param_5;
    auVar15._12_2_ = *(ushort *)(param_2 + (uVar2 >> 0x10));
    param_4 = uVar3 + param_5;
    auVar15._14_2_ = *(ushort *)(param_2 + (uVar3 >> 0x10));
    iVar6 = param_3 + -8;
    uVar13 = (uint3)CONCAT52((int5)(CONCAT16((char)auVar15._14_2_,
                                             (uint6)CONCAT14((char)auVar15._12_2_,
                                                             (uint)(CONCAT12((char)auVar15._10_2_,
                                                                             auVar15._8_2_) &
                                                                   0xff00ff))) >> 0x10),
                             auVar15._8_2_) & 0xff00ff;
    bVar5 = (byte)(uVar13 >> 0x10);
    auVar17._4_4_ = ((int)(short)(uVar18 >> 8) - (int)(short)(uVar18 & 0xff)) * uVar22;
    auVar17._0_4_ = ((int)(short)(uVar14 >> 8) - (int)(short)(uVar14 & 0xff)) * uVar21;
    auVar17._8_4_ = ((int)(short)(uVar19 >> 8) - (int)(short)(uVar19 & 0xff)) * uVar23;
    auVar17._12_4_ = ((int)(short)(uVar20 >> 8) - (int)(short)(uVar20 & 0xff)) * uVar12;
    auVar16._0_8_ = NEON_rshrn(auVar15._0_8_,auVar17,0x10,4);
    auVar16._8_8_ = auVar15._8_8_;
    auVar4._4_4_ = ((int)(short)(auVar15._10_2_ >> 8) - (int)(short)(ushort)bVar5) * uVar10;
    auVar4._0_4_ = ((int)(short)(auVar15._8_2_ >> 8) - (int)(short)uVar13) * uVar9;
    auVar4._8_4_ = ((int)(short)(auVar15._12_2_ >> 8) - (int)(short)(auVar15._12_2_ & 0xff)) *
                   uVar11;
    auVar4._12_4_ =
         ((int)(short)(auVar15._14_2_ >> 8) - (int)(short)(auVar15._14_2_ & 0xff)) * (uint)uVar24;
    auVar17 = NEON_rshrn2(auVar16,auVar4,0x10,4);
    uVar21 = (uint)(ushort)((short)uVar21 + sVar7);
    uVar22 = (uint)(ushort)((short)uVar22 + sVar8);
    uVar23 = (uint)(ushort)((short)uVar23 + sVar25);
    uVar12 = (uint)(ushort)((short)uVar12 + sVar26);
    uVar9 = (uint)(ushort)((short)uVar9 + sVar7);
    uVar10 = (uint)(ushort)((short)uVar10 + sVar8);
    uVar11 = (uint)(ushort)((short)uVar11 + sVar25);
    uVar24 = uVar24 + sVar26;
    *param_1 = (char)uVar14 + auVar17[0];
    param_1[1] = (char)uVar18 + auVar17[2];
    param_1[2] = (char)uVar19 + auVar17[4];
    param_1[3] = (char)uVar20 + auVar17[6];
    param_1[4] = (char)uVar13 + auVar17[8];
    param_1[5] = bVar5 + auVar17[10];
    param_1[6] = (char)auVar15._12_2_ + auVar17[0xc];
    param_1[7] = (char)auVar15._14_2_ + auVar17[0xe];
    param_1 = param_1 + 8;
    bVar1 = 7 < param_3;
    param_3 = iVar6;
  } while (iVar6 != 0 && bVar1);
  return;
}


// ===== 007cb9ec  FUN_007cb9ec =====

undefined1  [16]
FUN_007cb9ec(undefined2 *param_1,undefined8 param_2,undefined2 *param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  
  do {
    auVar3._0_2_ = *param_1;
    auVar3._2_2_ = param_1[2];
    uVar4 = param_1[3];
    auVar3._4_2_ = param_1[4];
    uVar5 = param_1[5];
    auVar3._6_2_ = param_1[6];
    uVar6 = param_1[7];
    auVar3._8_2_ = param_1[8];
    uVar7 = param_1[9];
    auVar3._10_2_ = param_1[10];
    uVar8 = param_1[0xb];
    auVar3._12_2_ = param_1[0xc];
    uVar9 = param_1[0xd];
    auVar3._14_2_ = param_1[0xe];
    uVar10 = param_1[0xf];
    iVar2 = param_4 + -8;
    Hint_Prefetch(param_1 + 0xf0,0,0,0);
    *param_3 = param_1[1];
    param_3[1] = uVar4;
    param_3[2] = uVar5;
    param_3[3] = uVar6;
    param_3[4] = uVar7;
    param_3[5] = uVar8;
    param_3[6] = uVar9;
    param_3[7] = uVar10;
    param_3 = param_3 + 8;
    bVar1 = 7 < param_4;
    param_1 = param_1 + 0x10;
    param_4 = iVar2;
  } while (iVar2 != 0 && bVar1);
  return auVar3;
}


// ===== 007cba08  FUN_007cba08 =====

void FUN_007cba08(undefined2 *param_1,undefined8 param_2,undefined2 *param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  do {
    auVar3._0_2_ = *param_1;
    auVar3._2_2_ = param_1[2];
    auVar3._4_2_ = param_1[4];
    auVar3._6_2_ = param_1[6];
    auVar3._8_2_ = param_1[8];
    auVar3._10_2_ = param_1[10];
    auVar3._12_2_ = param_1[0xc];
    auVar3._14_2_ = param_1[0xe];
    iVar2 = param_4 + -8;
    auVar4._2_2_ = param_1[3];
    auVar4._0_2_ = param_1[1];
    auVar4._4_2_ = param_1[5];
    auVar4._6_2_ = param_1[7];
    auVar4._8_2_ = param_1[9];
    auVar4._10_2_ = param_1[0xb];
    auVar4._12_2_ = param_1[0xd];
    auVar4._14_2_ = param_1[0xf];
    auVar4 = NEON_urhadd(auVar3,auVar4,1);
    Hint_Prefetch(param_1 + 0xf0,0,0,0);
    *param_3 = auVar4._0_2_;
    param_3[1] = auVar4._2_2_;
    param_3[2] = auVar4._4_2_;
    param_3[3] = auVar4._6_2_;
    param_3[4] = auVar4._8_2_;
    param_3[5] = auVar4._10_2_;
    param_3[6] = auVar4._12_2_;
    param_3[7] = auVar4._14_2_;
    param_3 = param_3 + 8;
    bVar1 = 7 < param_4;
    param_1 = param_1 + 0x10;
    param_4 = iVar2;
  } while (iVar2 != 0 && bVar1);
  return;
}


// ===== 007cba28  FUN_007cba28 =====

void FUN_007cba28(byte *param_1,long param_2,undefined1 *param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  undefined1 auVar3 [16];
  short sVar4;
  undefined8 uVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  undefined1 auVar10 [16];
  short sVar11;
  undefined8 uVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  byte *pbVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  
  pbVar17 = param_1 + param_2;
  do {
    iVar2 = param_4 + -8;
    sVar4 = (ushort)*param_1 + (ushort)param_1[2] + (ushort)*pbVar17 + (ushort)pbVar17[2];
    sVar6 = (ushort)param_1[4] + (ushort)param_1[6] + (ushort)pbVar17[4] + (ushort)pbVar17[6];
    uVar18 = (undefined1)sVar6;
    uVar19 = (undefined1)((ushort)sVar6 >> 8);
    sVar6 = (ushort)param_1[8] + (ushort)param_1[10] + (ushort)pbVar17[8] + (ushort)pbVar17[10];
    uVar20 = (undefined1)sVar6;
    uVar21 = (undefined1)((ushort)sVar6 >> 8);
    sVar6 = (ushort)param_1[0xc] + (ushort)param_1[0xe] +
            (ushort)pbVar17[0xc] + (ushort)pbVar17[0xe];
    uVar22 = (undefined1)sVar6;
    uVar23 = (undefined1)((ushort)sVar6 >> 8);
    sVar6 = (ushort)param_1[0x10] + (ushort)param_1[0x12] +
            (ushort)pbVar17[0x10] + (ushort)pbVar17[0x12];
    sVar7 = (ushort)param_1[0x14] + (ushort)param_1[0x16] +
            (ushort)pbVar17[0x14] + (ushort)pbVar17[0x16];
    sVar8 = (ushort)param_1[0x18] + (ushort)param_1[0x1a] +
            (ushort)pbVar17[0x18] + (ushort)pbVar17[0x1a];
    sVar9 = (ushort)param_1[0x1c] + (ushort)param_1[0x1e] +
            (ushort)pbVar17[0x1c] + (ushort)pbVar17[0x1e];
    sVar11 = (ushort)param_1[1] + (ushort)param_1[3] + (ushort)pbVar17[1] + (ushort)pbVar17[3];
    sVar13 = (ushort)param_1[5] + (ushort)param_1[7] + (ushort)pbVar17[5] + (ushort)pbVar17[7];
    uVar24 = (undefined1)sVar13;
    uVar25 = (undefined1)((ushort)sVar13 >> 8);
    sVar13 = (ushort)param_1[9] + (ushort)param_1[0xb] + (ushort)pbVar17[9] + (ushort)pbVar17[0xb];
    uVar26 = (undefined1)sVar13;
    uVar27 = (undefined1)((ushort)sVar13 >> 8);
    sVar13 = (ushort)param_1[0xd] + (ushort)param_1[0xf] +
             (ushort)pbVar17[0xd] + (ushort)pbVar17[0xf];
    uVar28 = (undefined1)sVar13;
    uVar29 = (undefined1)((ushort)sVar13 >> 8);
    sVar13 = (ushort)param_1[0x11] + (ushort)param_1[0x13] +
             (ushort)pbVar17[0x11] + (ushort)pbVar17[0x13];
    sVar14 = (ushort)param_1[0x15] + (ushort)param_1[0x17] +
             (ushort)pbVar17[0x15] + (ushort)pbVar17[0x17];
    sVar15 = (ushort)param_1[0x19] + (ushort)param_1[0x1b] +
             (ushort)pbVar17[0x19] + (ushort)pbVar17[0x1b];
    sVar16 = (ushort)param_1[0x1d] + (ushort)param_1[0x1f] +
             (ushort)pbVar17[0x1d] + (ushort)pbVar17[0x1f];
    Hint_Prefetch(param_1 + 0x1e0,0,0,0);
    auVar3[2] = uVar18;
    auVar3._0_2_ = sVar4;
    auVar3[3] = uVar19;
    auVar3[4] = uVar20;
    auVar3[5] = uVar21;
    auVar3[6] = uVar22;
    auVar3[7] = uVar23;
    auVar3[8] = (char)sVar6;
    auVar3[9] = (char)((ushort)sVar6 >> 8);
    auVar3[10] = (char)sVar7;
    auVar3[0xb] = (char)((ushort)sVar7 >> 8);
    auVar3[0xc] = (char)sVar8;
    auVar3[0xd] = (char)((ushort)sVar8 >> 8);
    auVar3[0xe] = (char)sVar9;
    auVar3[0xf] = (char)((ushort)sVar9 >> 8);
    uVar5 = NEON_rshrn(CONCAT17(uVar23,CONCAT16(uVar22,CONCAT15(uVar21,CONCAT14(uVar20,CONCAT13(
                                                  uVar19,CONCAT12(uVar18,sVar4)))))),auVar3,2,2);
    Hint_Prefetch(pbVar17 + 0x1e0,0,0,0);
    auVar10[2] = uVar24;
    auVar10._0_2_ = sVar11;
    auVar10[3] = uVar25;
    auVar10[4] = uVar26;
    auVar10[5] = uVar27;
    auVar10[6] = uVar28;
    auVar10[7] = uVar29;
    auVar10[8] = (char)sVar13;
    auVar10[9] = (char)((ushort)sVar13 >> 8);
    auVar10[10] = (char)sVar14;
    auVar10[0xb] = (char)((ushort)sVar14 >> 8);
    auVar10[0xc] = (char)sVar15;
    auVar10[0xd] = (char)((ushort)sVar15 >> 8);
    auVar10[0xe] = (char)sVar16;
    auVar10[0xf] = (char)((ushort)sVar16 >> 8);
    uVar12 = NEON_rshrn(CONCAT17(uVar29,CONCAT16(uVar28,CONCAT15(uVar27,CONCAT14(uVar26,CONCAT13(
                                                  uVar25,CONCAT12(uVar24,sVar11)))))),auVar10,2,2);
    *param_3 = (char)uVar5;
    param_3[1] = (char)uVar12;
    param_3[2] = (char)((ulong)uVar5 >> 8);
    param_3[3] = (char)((ulong)uVar12 >> 8);
    param_3[4] = (char)((ulong)uVar5 >> 0x10);
    param_3[5] = (char)((ulong)uVar12 >> 0x10);
    param_3[6] = (char)((ulong)uVar5 >> 0x18);
    param_3[7] = (char)((ulong)uVar12 >> 0x18);
    param_3[8] = (char)((ulong)uVar5 >> 0x20);
    param_3[9] = (char)((ulong)uVar12 >> 0x20);
    param_3[10] = (char)((ulong)uVar5 >> 0x28);
    param_3[0xb] = (char)((ulong)uVar12 >> 0x28);
    param_3[0xc] = (char)((ulong)uVar5 >> 0x30);
    param_3[0xd] = (char)((ulong)uVar12 >> 0x30);
    param_3[0xe] = (char)((ulong)uVar5 >> 0x38);
    param_3[0xf] = (char)((ulong)uVar12 >> 0x38);
    param_3 = param_3 + 0x10;
    bVar1 = 7 < param_4;
    param_1 = param_1 + 0x20;
    pbVar17 = pbVar17 + 0x20;
    param_4 = iVar2;
  } while (iVar2 != 0 && bVar1);
  return;
}


// ===== 007cba68  FUN_007cba68 =====

void FUN_007cba68(undefined2 *param_1,undefined8 param_2,int param_3,undefined2 *param_4,int param_5
                 )

{
  bool bVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  long lVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  
  puVar3 = (undefined2 *)((long)param_1 + (long)(param_3 * 2));
  puVar5 = (undefined2 *)((long)param_1 + (long)(param_3 << 2));
  lVar6 = (long)(param_3 << 3);
  puVar4 = (undefined2 *)((long)param_1 + (long)(param_3 * 6));
  do {
    uVar7 = *param_1;
    param_1 = (undefined2 *)((long)param_1 + lVar6);
    uVar8 = *puVar3;
    puVar3 = (undefined2 *)((long)puVar3 + lVar6);
    uVar9 = *puVar5;
    puVar5 = (undefined2 *)((long)puVar5 + lVar6);
    uVar10 = *puVar4;
    puVar4 = (undefined2 *)((long)puVar4 + lVar6);
    iVar2 = param_5 + -4;
    *param_4 = uVar7;
    param_4[1] = uVar8;
    param_4[2] = uVar9;
    param_4[3] = uVar10;
    param_4 = param_4 + 4;
    bVar1 = 3 < param_5;
    param_5 = iVar2;
  } while (iVar2 != 0 && bVar1);
  return;
}


// ===== 007cbab0  FUN_007cbab0 =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_007cbab0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,int param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 in_x9;
  undefined8 uVar4;
  undefined1 in_z0 [32];
  undefined1 auVar5 [32];
  undefined1 in_z1 [32];
  undefined1 in_z2 [32];
  undefined1 in_z3 [32];
  undefined1 in_z19 [32];
  undefined1 in_z24 [32];
  undefined1 in_z25 [32];
  undefined1 in_z26 [32];
  undefined1 in_z27 [32];
  undefined1 in_z28 [32];
  undefined1 in_z29 [32];
  undefined1 in_z30 [32];
  undefined1 in_z31 [32];
  undefined4 in_p0;
  undefined4 uVar6;
  undefined4 in_p1;
  
  lVar1 = param_5 + 0x10;
  uVar4 = SVE_cntb(in_x9,0x1f,1);
  uVar6 = SVE_ptrue(in_p0,0x1f);
  SVE_ld1rb(in_z28,uVar6,param_5,0);
  SVE_ld1rb(in_z29,uVar6,param_5,1);
  SVE_ld1rb(in_z30,uVar6,param_5,2);
  SVE_ld1rb(in_z31,uVar6,param_5,3);
  SVE_ld1rh(in_z24,uVar6,lVar1,0);
  SVE_ld1rh(in_z25,uVar6,lVar1,2);
  SVE_ld1rh(in_z26,uVar6,lVar1,4);
  SVE_ld1rh(in_z27,uVar6,lVar1,6);
  SVE_dup(in_z19,0xffff,0);
  if ((int)uVar4 <= param_6) {
    uVar6 = SVE_ptrue(in_p1,0x1f);
    auVar5 = SVE_ld1b(in_z0,uVar6,param_1,0);
    SVE_ld1b(in_z2,uVar6,param_2,0);
    SVE_ld1b(in_z3,uVar6,param_3,0);
    lVar1 = SVE_incb(param_1,0x1f,1);
    lVar2 = SVE_inch(param_2,0x1f,1);
    lVar3 = SVE_inch(param_3,0x1f,1);
    Hint_Prefetch(lVar1 + 0x1c0,0,0,0);
    Hint_Prefetch(lVar2 + 0x80,0,0,0);
    Hint_Prefetch(lVar3 + 0x80,0,0,0);
    SVE_trn2(in_z1,auVar5,auVar5);
    SVE_trn1(auVar5,auVar5,auVar5);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_6 != 0) {
    SVE_cnth(uVar4,0x1f,1);
    uVar6 = SVE_whilelt(in_p1,0,param_6);
    auVar5 = SVE_ld1b(in_z0,uVar6,param_1,0);
    SVE_ld1b(in_z2,uVar6,param_2,0);
    SVE_ld1b(in_z3,uVar6,param_3,0);
    lVar1 = SVE_incb(param_1,0x1f,1);
    lVar2 = SVE_inch(param_2,0x1f,1);
    lVar3 = SVE_inch(param_3,0x1f,1);
    Hint_Prefetch(lVar1 + 0x1c0,0,0,0);
    Hint_Prefetch(lVar2 + 0x80,0,0,0);
    Hint_Prefetch(lVar3 + 0x80,0,0,0);
    SVE_trn2(in_z1,auVar5,auVar5);
    SVE_trn1(auVar5,auVar5,auVar5);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}


// ===== 007cbc30  FUN_007cbc30 =====

/* WARNING: Control flow encountered bad instruction data */

undefined1  [16]
FUN_007cbc30(undefined8 param_1,long param_2,int param_3,undefined8 param_4,undefined8 param_5,
            int param_6)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 in_z0 [32];
  undefined1 auVar5 [32];
  undefined1 in_z1 [32];
  undefined1 auVar6 [32];
  undefined1 in_z2 [32];
  undefined1 in_z3 [32];
  undefined1 in_z4 [32];
  undefined1 in_z5 [32];
  undefined1 in_z6 [32];
  undefined1 in_z7 [32];
  undefined1 in_z24 [32];
  undefined1 in_z25 [32];
  undefined1 in_z26 [32];
  undefined1 in_z27 [32];
  undefined4 in_p0;
  undefined4 uVar7;
  undefined4 in_p1;
  undefined4 in_p2;
  undefined4 uVar8;
  undefined4 in_p3;
  undefined4 uVar9;
  undefined4 in_p4;
  undefined4 uVar10;
  undefined4 in_p5;
  
  uVar4 = SVE_cntd(param_1,0x1f,1);
  iVar3 = (int)uVar4;
  lVar1 = param_2 + param_3;
  uVar7 = SVE_ptrue(in_p0,0x1f);
  SVE_ld1rw(in_z24,uVar7,0x214e10,0);
  SVE_ld1rw(in_z25,uVar7,0x214e10,4);
  SVE_dup(in_z26,0x8000,8);
  auVar5 = SVE_index(in_z0,0,1);
  auVar6 = SVE_index(in_z1,1,1);
  SVE_uzp1(in_z27,auVar5,auVar6);
  iVar2 = (param_6 >> 1) + iVar3 * -4;
  if (iVar2 < 0 == SBORROW4(param_6 >> 1,iVar3 * 4)) {
    uVar7 = SVE_ptrue(in_p1,0x1f);
    uVar8 = SVE_ptrue(in_p2,0x1f);
    uVar9 = SVE_ptrue(in_p3,0x1f);
    uVar10 = SVE_ptrue(in_p4,0x1f);
    SVE_ptrue(in_p5,0x1f);
    SVE_ld1d(auVar5,uVar7,param_2,0);
    SVE_ld1d(auVar6,uVar8,param_2,1);
    SVE_ld1d(in_z2,uVar9,param_2,2);
    SVE_ld1d(in_z3,uVar10,param_2,3);
    SVE_ld1d(in_z4,uVar7,lVar1,0);
    SVE_ld1d(in_z5,uVar8,lVar1,1);
    SVE_ld1d(in_z6,uVar9,lVar1,2);
    SVE_ld1d(in_z7,uVar10,lVar1,3);
    SVE_incb(param_2,0x1f,4);
    SVE_incb(lVar1,0x1f,4);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar2 = iVar2 + iVar3 * 4;
  if (iVar2 != 0) {
    uVar7 = SVE_whilelt(in_p1,0,iVar2);
    uVar8 = SVE_whilelt(in_p2,iVar3,iVar2);
    uVar9 = SVE_whilelt(in_p3,iVar3 * 2,iVar2);
    uVar10 = SVE_whilelt(in_p4,iVar3 * 3,iVar2);
    SVE_whilelt(in_p5,0,iVar2);
    SVE_ld1d(auVar5,uVar7,param_2,0);
    SVE_ld1d(auVar6,uVar8,param_2,1);
    SVE_ld1d(in_z2,uVar9,param_2,2);
    SVE_ld1d(in_z3,uVar10,param_2,3);
    SVE_ld1d(in_z4,uVar7,lVar1,0);
    SVE_ld1d(in_z5,uVar8,lVar1,1);
    SVE_ld1d(in_z6,uVar9,lVar1,2);
    SVE_ld1d(in_z7,uVar10,lVar1,3);
    SVE_incb(param_2,0x1f,4);
    SVE_incb(lVar1,0x1f,4);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return auVar5._0_16_;
}


// ===== 007cbe28  FUN_007cbe28 =====

void FUN_007cbe28(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  return;
}


// ===== 007cbed8  FUN_007cbed8 =====

bool FUN_007cbed8(uint *param_1,ulong param_2,ulong param_3,uint param_4)

{
  long lVar1;
  ulong uVar2;
  
  if (4 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../api/video/video_bitrate_allocation.cc",0x20,
                 "spatial_index < kMaxSpatialLayers",&DAT_001fbca2,param_2,5);
  }
  if (param_3 < 4) {
    uVar2 = (ulong)*param_1;
    if ((char)param_1[param_2 * 8 + param_3 * 2 + 2] == '\x01') {
      uVar2 = uVar2 - param_1[param_2 * 8 + param_3 * 2 + 1];
    }
    lVar1 = uVar2 + param_4;
    if (lVar1 < 0x100000000) {
      param_1[param_2 * 8 + param_3 * 2 + 1] = param_4;
      *(undefined1 *)(param_1 + param_2 * 8 + param_3 * 2 + 2) = 1;
      *param_1 = (uint)lVar1;
    }
    return lVar1 < 0x100000000;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../api/video/video_bitrate_allocation.cc",0x21,
               "temporal_index < kMaxTemporalStreams",&DAT_001fbca2,param_3,4);
}


// ===== 007cbfa0  FUN_007cbfa0 =====

undefined1 FUN_007cbfa0(long param_1,ulong param_2,ulong param_3)

{
  if (4 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../api/video/video_bitrate_allocation.cc",0x34,
                 "spatial_index < kMaxSpatialLayers",&DAT_001fbca2,param_2,5);
  }
  if (param_3 < 4) {
    return *(undefined1 *)(param_1 + param_2 * 0x20 + param_3 * 8 + 8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../api/video/video_bitrate_allocation.cc",0x35,
               "temporal_index < kMaxTemporalStreams",&DAT_001fbca2,param_3,4);
}


// ===== 007cc028  FUN_007cc028 =====

undefined4 FUN_007cc028(long param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  undefined4 uVar2;
  
  if (4 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../api/video/video_bitrate_allocation.cc",0x3b,
                 "spatial_index < kMaxSpatialLayers",&DAT_001fbca2,param_2,5);
  }
  if (param_3 < 4) {
    lVar1 = param_1 + param_2 * 0x20 + param_3 * 8;
    if (*(char *)(lVar1 + 8) == '\x01') {
      uVar2 = *(undefined4 *)(lVar1 + 4);
    }
    else {
      uVar2 = 0;
    }
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../api/video/video_bitrate_allocation.cc",0x3c,
               "temporal_index < kMaxTemporalStreams",&DAT_001fbca2,param_3,4);
}


// ===== 007cc0c4  FUN_007cc0c4 =====

byte FUN_007cc0c4(long param_1,ulong param_2)

{
  if (4 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../api/video/video_bitrate_allocation.cc",0x43,
                 "spatial_index < kMaxSpatialLayers",&DAT_001fbca2,param_2,5);
  }
  param_1 = param_1 + param_2 * 0x20;
  if ((((*(byte *)(param_1 + 8) & 1) == 0) && ((*(byte *)(param_1 + 0x10) & 1) == 0)) &&
     ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
    return *(byte *)(param_1 + 0x20) & 1;
  }
  return 1;
}


// ===== 007cc138  FUN_007cc138 =====

int FUN_007cc138(long param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 < 5) {
    param_1 = param_1 + param_2 * 0x20;
    if (*(char *)(param_1 + 8) == '\x01') {
      iVar1 = *(int *)(param_1 + 4);
    }
    else {
      iVar1 = 0;
    }
    if (*(char *)(param_1 + 0x10) == '\x01') {
      iVar3 = *(int *)(param_1 + 0xc);
    }
    else {
      iVar3 = 0;
    }
    if (*(char *)(param_1 + 0x18) == '\x01') {
      iVar4 = *(int *)(param_1 + 0x14);
    }
    else {
      iVar4 = 0;
    }
    if (*(char *)(param_1 + 0x20) == '\x01') {
      iVar2 = *(int *)(param_1 + 0x1c);
    }
    else {
      iVar2 = 0;
    }
    return iVar2 + iVar4 + iVar3 + iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../api/video/video_bitrate_allocation.cc",0x4e,
               "spatial_index < kMaxSpatialLayers",&DAT_001fbca2,param_2,5);
}


// ===== 007cc1ec  FUN_007cc1ec =====

void FUN_007cc1ec(long *param_1,long param_2,ulong param_3)

{
  byte bVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if (4 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../api/video/video_bitrate_allocation.cc",0x60,
                 "spatial_index < kMaxSpatialLayers",&DAT_001fbca2,param_3,5);
  }
  param_2 = param_2 + param_3 * 0x20;
  *param_1 = 0;
  param_1[1] = 0;
  bVar1 = *(byte *)(param_2 + 0x20);
  param_1[2] = 0;
  if ((bVar1 & 1) == 0) {
    if ((*(byte *)(param_2 + 0x18) & 1) == 0) {
      if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
        if (*(char *)(param_2 + 8) != '\x01') {
          return;
        }
        uVar3 = 1;
      }
      else {
        uVar3 = 2;
      }
    }
    else {
      uVar3 = 3;
    }
  }
  else {
    uVar3 = 4;
  }
  FUN_007121a4(param_1,uVar3);
  if ((undefined4 *)param_1[1] != (undefined4 *)*param_1) {
    if (*(char *)(param_2 + 8) == '\x01') {
      uVar4 = *(undefined4 *)(param_2 + 4);
    }
    else {
      uVar4 = 0;
    }
    *(undefined4 *)*param_1 = uVar4;
    if (4 < (ulong)(param_1[1] - *param_1)) {
      if (*(char *)(param_2 + 0x10) == '\x01') {
        uVar4 = *(undefined4 *)(param_2 + 0xc);
      }
      else {
        uVar4 = 0;
      }
      *(undefined4 *)(*param_1 + 4) = uVar4;
      if (8 < (ulong)(param_1[1] - *param_1)) {
        if (*(char *)(param_2 + 0x18) == '\x01') {
          uVar4 = *(undefined4 *)(param_2 + 0x14);
        }
        else {
          uVar4 = 0;
        }
        *(undefined4 *)(*param_1 + 8) = uVar4;
        if (0xc < (ulong)(param_1[1] - *param_1)) {
          if (*(char *)(param_2 + 0x20) == '\x01') {
            uVar4 = *(undefined4 *)(param_2 + 0x1c);
          }
          else {
            uVar4 = 0;
          }
          *(undefined4 *)(*param_1 + 0xc) = uVar4;
          if (0x10 < (ulong)(param_1[1] - *param_1)) {
            if (*(char *)(param_2 + 0x28) == '\x01') {
              uVar4 = *(undefined4 *)(param_2 + 0x24);
            }
            else {
              uVar4 = 0;
            }
            *(undefined4 *)(*param_1 + 0x10) = uVar4;
            if (0x14 < (ulong)(param_1[1] - *param_1)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(0x5512,0x7cc380);
              (*pcVar2)();
            }
          }
        }
      }
    }
  }
  return;
}


// ===== 007cc380  FUN_007cc380 =====

void FUN_007cc380(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  
  puVar3 = (undefined8 *)0x0;
  pbVar5 = (byte *)(param_2 + 0x10);
  lVar6 = 5;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  do {
    uStack_50 = 0xaaaaaaaa;
    uStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
    local_d8 = &DAT_aaaaaaaaaaaaaaaa;
    local_e0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
    local_d0 = &DAT_aaaaaaaaaaaaaaaa;
    local_b8 = &DAT_aaaaaaaaaaaaaaaa;
    local_c0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
    local_b0 = &DAT_aaaaaaaaaaaaaaaa;
    local_98 = &DAT_aaaaaaaaaaaaaaaa;
    local_a0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
    local_90 = &DAT_aaaaaaaaaaaaaaaa;
    local_78 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    local_58 = 0xaaaaaaaa;
    local_54 = 0xaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    local_f0 = 0xaaaaaaaaaaaaaa00;
    uStack_4c = 0xaaaaaa00aaaaaaaa;
    if (((((pbVar5[-8] & 1) != 0) || ((*pbVar5 & 1) != 0)) || ((pbVar5[8] & 1) != 0)) ||
       (pbVar5[0x10] == 1)) {
      local_f0 = 0xaaaaaa0000000000;
      uStack_e8 = (undefined1 *)0xaaaaaa00aaaaaa00;
      local_e0 = (undefined1 *)0xaaaaaa00aaaaaa00;
      local_d8 = (undefined1 *)0xaaaaaa00aaaaaa00;
      local_d0 = (undefined1 *)0xaaaaaa00aaaaaa00;
      puStack_c8 = (undefined1 *)0xaaaaaa00aaaaaa00;
      local_c0 = (undefined1 *)0xaaaaaa00aaaaaa00;
      local_b8 = (undefined1 *)0xaaaaaa00aaaaaa00;
      local_b0 = (undefined1 *)0xaaaaaa00aaaaaa00;
      puStack_a8 = (undefined1 *)0xaaaaaa00aaaaaa00;
      local_a0 = (undefined1 *)0xaaaaaa00aaaaaa00;
      local_98 = (undefined1 *)0xaaaaaa00aaaaaa00;
      local_90 = (undefined1 *)0xaaaaaa00aaaaaa00;
      puStack_88 = (undefined1 *)0xaaaaaa00aaaaaa00;
      local_80 = (undefined1 *)0xaaaaaa00aaaaaa00;
      local_78 = (undefined1 *)0xaaaaaa00aaaaaa00;
      local_70 = (undefined1 *)0xaaaaaa00aaaaaa00;
      puStack_68 = (undefined1 *)0xaaaaaa00aaaaaa00;
      local_60 = (undefined1 *)0xaaaaaa00aaaaaa00;
      local_58 = 0xaaaaaa00;
      local_54 = 0xaaaaaa00;
      uStack_50 = 0xaaaaaa00;
      uStack_4c = 0xaaaaaa01aaaaaa00;
      if (pbVar5[-8] == 0) {
        uVar4 = 0;
      }
      else {
        uVar2 = *(uint *)(pbVar5 + -0xc);
        uVar4 = (ulong)uVar2;
        uStack_e8 = (undefined1 *)0xaaaaaa00aaaaaa01;
        local_f0 = CONCAT44(uVar2,uVar2);
      }
      if (*pbVar5 == 1) {
        uVar1 = uVar4 + *(uint *)(pbVar5 + -4);
        if (uVar1 >> 0x20 == 0) {
          uStack_e8 = (undefined1 *)CONCAT44(*(uint *)(pbVar5 + -4),(undefined4)uStack_e8);
          local_e0 = (undefined1 *)0xaaaaaa00aaaaaa01;
          local_f0 = CONCAT44(local_f0._4_4_,(int)uVar1);
          uVar4 = uVar1;
        }
      }
      if (pbVar5[8] == 1) {
        uVar1 = uVar4 + *(uint *)(pbVar5 + 4);
        if (uVar1 >> 0x20 == 0) {
          local_e0 = (undefined1 *)CONCAT44(*(uint *)(pbVar5 + 4),(undefined4)local_e0);
          local_d8 = (undefined1 *)0xaaaaaa00aaaaaa01;
          local_f0 = CONCAT44(local_f0._4_4_,(int)uVar1);
          uVar4 = uVar1;
        }
      }
      if (pbVar5[0x10] == 1) {
        uVar4 = uVar4 + *(uint *)(pbVar5 + 0xc);
        if (uVar4 >> 0x20 == 0) {
          local_d0 = (undefined1 *)0xaaaaaa00aaaaaa01;
          local_d8 = (undefined1 *)CONCAT44(*(uint *)(pbVar5 + 0xc),(undefined4)local_d8);
          local_f0 = CONCAT44(local_f0._4_4_,(int)uVar4);
        }
      }
    }
    if (puVar3 < (undefined8 *)param_1[2]) {
      if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar3[5] = puStack_c8;
      puVar3[4] = local_d0;
      puVar3[7] = local_b8;
      puVar3[6] = local_c0;
      puVar3[1] = uStack_e8;
      *puVar3 = local_f0;
      puVar3[3] = local_d8;
      puVar3[2] = local_e0;
      puVar3[0xd] = puStack_88;
      puVar3[0xc] = local_90;
      puVar3[0xf] = local_78;
      puVar3[0xe] = local_80;
      puVar3[9] = puStack_a8;
      puVar3[8] = local_b0;
      puVar3[0xb] = local_98;
      puVar3[10] = local_a0;
      *(undefined8 *)((long)puVar3 + 0xa4) = uStack_4c;
      *(ulong *)((long)puVar3 + 0x9c) = CONCAT44(uStack_50,local_54);
      puVar3[0x11] = puStack_68;
      puVar3[0x10] = local_70;
      puVar3[0x13] = CONCAT44(local_54,local_58);
      puVar3[0x12] = local_60;
      puVar3 = (undefined8 *)((long)puVar3 + 0xac);
    }
    else {
      puVar3 = (undefined8 *)FUN_007ccb44(param_1,&local_f0);
    }
    lVar6 = lVar6 + -1;
    pbVar5 = pbVar5 + 0x20;
    param_1[1] = puVar3;
  } while (lVar6 != 0);
  return;
}


// ===== 007cc5e8  FUN_007cc5e8 =====

undefined8 FUN_007cc5e8(long param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  
  lVar3 = 0;
  do {
    bVar1 = *(byte *)(param_1 + lVar3 + 8);
    bVar2 = *(byte *)(param_2 + lVar3 + 8);
    if ((bVar2 & bVar1) == 0) {
      if (bVar1 != bVar2) {
        return 0;
      }
    }
    else {
      if ((bVar2 & 1) == 0) goto code_r0x007cc6f0;
      if (*(int *)(param_1 + lVar3 + 4) != *(int *)(param_2 + lVar3 + 4)) {
        return 0;
      }
    }
    bVar1 = *(byte *)(param_1 + lVar3 + 0x10);
    bVar2 = *(byte *)(param_2 + lVar3 + 0x10);
    if ((bVar2 & bVar1) == 0) {
      if (bVar1 != bVar2) {
        return 0;
      }
    }
    else {
      if (bVar2 == 0) goto code_r0x007cc6f0;
      if (*(int *)(param_1 + lVar3 + 0xc) != *(int *)(param_2 + lVar3 + 0xc)) {
        return 0;
      }
    }
    bVar1 = *(byte *)(param_1 + lVar3 + 0x18);
    bVar2 = *(byte *)(param_2 + lVar3 + 0x18);
    if ((bVar2 & bVar1) == 0) {
      if (bVar1 != bVar2) {
        return 0;
      }
    }
    else {
      if (bVar2 == 0) goto code_r0x007cc6f0;
      if (*(int *)(param_1 + lVar3 + 0x14) != *(int *)(param_2 + lVar3 + 0x14)) {
        return 0;
      }
    }
    bVar1 = *(byte *)(param_1 + lVar3 + 0x20);
    bVar2 = *(byte *)(param_2 + lVar3 + 0x20);
    if ((bVar2 & bVar1) == 0) {
      if (bVar1 != bVar2) {
        return 0;
      }
    }
    else {
      if (bVar2 == 0) {
code_r0x007cc6f0:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                  );
      }
      if (*(int *)(param_1 + lVar3 + 0x1c) != *(int *)(param_2 + lVar3 + 0x1c)) {
        return 0;
      }
    }
    lVar3 = lVar3 + 0x20;
    if (lVar3 == 0xa0) {
      return 1;
    }
  } while( true );
}


// ===== 007cc70c  FUN_007cc70c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007cc70c(char *param_1,int *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  size_t __n;
  char *pcVar9;
  char *__dest;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  char *local_290;
  undefined1 *puStack_288;
  undefined1 *local_280;
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
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  if (*param_2 == 0) {
    pcVar9 = (char *)operator_new(0x20);
    *(char **)param_1 = pcVar9;
    uVar8 = _DAT_001f3af0;
    *(undefined8 *)(param_1 + 0x10) = _UNK_001f3af8;
    *(undefined8 *)(param_1 + 8) = uVar8;
    uVar7 = s_VideoBitrateAllocation________001eaf98._21_8_;
    uVar8 = s_VideoBitrateAllocation________001eaf98._0_8_;
    if (pcVar9 + 0x1d < pcVar9) goto LAB_007ccb00;
    if ((pcVar9 < "ideoBitrateAllocation [ [] ]") &&
       ("VideoBitrateAllocation [ [] ]" < pcVar9 + 0x1d)) goto LAB_007ccb14;
    uVar5 = CONCAT35(s_VideoBitrateAllocation________001eaf98._13_3_,
                     s_VideoBitrateAllocation________001eaf98._8_5_);
    uVar6 = CONCAT53(s_VideoBitrateAllocation________001eaf98._16_5_,
                     s_VideoBitrateAllocation________001eaf98._13_3_);
    pcVar9[0x1d] = '\0';
    *(undefined8 *)(pcVar9 + 8) = uVar5;
    *(undefined8 *)pcVar9 = uVar8;
    *(undefined8 *)(pcVar9 + 0x15) = uVar7;
    *(undefined8 *)(pcVar9 + 0xd) = uVar6;
  }
  else {
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
    local_280 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_288 = &DAT_aaaaaaaaaaaaaaaa;
    local_290 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00622830(&local_290,&local_270,0x200);
    FUN_006228b0(&local_290,"VideoBitrateAllocation [",0x18);
    lVar15 = 0;
    iVar14 = 0;
    do {
      if (iVar14 == *param_2) break;
      if (*(char *)((long)param_2 + lVar15 + 8) == '\x01') {
        iVar10 = *(int *)((long)param_2 + lVar15 + 4);
      }
      else {
        iVar10 = 0;
      }
      if (*(char *)((long)param_2 + lVar15 + 0x10) == '\x01') {
        iVar11 = *(int *)((long)param_2 + lVar15 + 0xc);
      }
      else {
        iVar11 = 0;
      }
      if (*(char *)((long)param_2 + lVar15 + 0x18) == '\x01') {
        iVar12 = *(int *)((long)param_2 + lVar15 + 0x14);
      }
      else {
        iVar12 = 0;
      }
      if (*(char *)((long)param_2 + lVar15 + 0x20) == '\x01') {
        iVar13 = *(int *)((long)param_2 + lVar15 + 0x1c);
      }
      else {
        iVar13 = 0;
      }
      iVar10 = iVar11 + iVar10 + iVar12 + iVar13;
      if ((lVar15 == 0) && (iVar10 == *param_2)) {
        FUN_006228b0(&local_290,&DAT_001c22a3,2);
      }
      else {
        if (lVar15 != 0) {
          FUN_006228b0(&local_290,&DAT_001ea264,1);
        }
        uVar8 = FUN_00622844(&local_290,10);
        FUN_006228b0(uVar8,&DAT_001f02ef,3);
      }
      if (iVar10 != 0) {
        if (*(char *)((long)param_2 + lVar15 + 8) == '\x01') {
          iVar11 = *(int *)((long)param_2 + lVar15 + 4);
        }
        else {
          iVar11 = 0;
        }
        FUN_006229f8(&local_290,iVar11);
        if (iVar11 != iVar10) {
          FUN_006228b0(&local_290,&DAT_001e1644,2);
          if (*(char *)((long)param_2 + lVar15 + 0x10) == '\x01') {
            iVar12 = *(int *)((long)param_2 + lVar15 + 0xc);
          }
          else {
            iVar12 = 0;
          }
          FUN_006229f8(&local_290,iVar12);
          if (iVar12 + iVar11 != iVar10) {
            FUN_006228b0(&local_290,&DAT_001e1644,2);
            if (*(char *)((long)param_2 + lVar15 + 0x18) == '\x01') {
              iVar13 = *(int *)((long)param_2 + lVar15 + 0x14);
            }
            else {
              iVar13 = 0;
            }
            FUN_006229f8(&local_290,iVar13);
            if (iVar13 + iVar12 + iVar11 != iVar10) {
              FUN_006228b0(&local_290,&DAT_001e1644,2);
              if (*(char *)((long)param_2 + lVar15 + 0x20) == '\x01') {
                uVar1 = *(undefined4 *)((long)param_2 + lVar15 + 0x1c);
              }
              else {
                uVar1 = 0;
              }
              FUN_006229f8(&local_290,uVar1);
            }
          }
        }
      }
      iVar14 = iVar10 + iVar14;
      FUN_006228b0(&local_290,&DAT_0019fa9e,1);
      lVar15 = lVar15 + 0x20;
    } while (lVar15 != 0xa0);
    FUN_006228b0(&local_290,&DAT_001bc69f,2);
    pcVar9 = local_290;
    if (local_290 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string:1063: libc++ Hardening assertion __s != nullptr failed: basic_string(const char*) detected nullptr\n"
                );
    }
    __n = strlen(local_290);
    if (0x7ffffffffffffff6 < __n) {
                    /* WARNING: Subroutine does not return */
      FUN_005d45ec();
    }
    if (__n < 0x17) {
      param_1[0x17] = (char)__n;
      __dest = param_1;
    }
    else {
      uVar2 = (__n & 0x7ffffffffffffff8) + 8;
      uVar3 = 0x19;
      if (uVar2 != 0x18) {
        uVar3 = uVar2;
      }
      __dest = (char *)operator_new(uVar3);
      *(char **)param_1 = __dest;
      *(size_t *)(param_1 + 8) = __n;
      *(ulong *)(param_1 + 0x10) = uVar3 | 0x8000000000000000;
    }
    if (__dest + __n < __dest) {
LAB_007ccb00:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                );
    }
    if ((__dest <= pcVar9) && (pcVar9 < __dest + __n)) {
LAB_007ccb14:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
    memmove(__dest,pcVar9,__n);
    __dest[__n] = '\0';
  }
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007ccb44  FUN_007ccb44 =====

long FUN_007ccb44(long *param_1,undefined8 *param_2)

{
  void *pvVar1;
  void *pvVar2;
  size_t __n;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  void *__dest;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar6 = (undefined8 *)(param_1[1] - *param_1);
  uVar3 = ((long)puVar6 >> 2) * -0x7d05f417d05f417d + 1;
  if (0x17d05f417d05f41 < uVar3) {
    FUN_007ccca0();
LAB_007ccc9c:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  lVar4 = param_1[2] - *param_1 >> 2;
  uVar5 = lVar4 * 0x5f417d05f417d06;
  if (uVar5 < uVar3 || uVar5 - uVar3 == 0) {
    uVar5 = uVar3;
  }
  if (0xbe82fa0be82f9f < (ulong)(lVar4 * -0x7d05f417d05f417d)) {
    uVar5 = 0x17d05f417d05f41;
  }
  if (uVar5 == 0) {
    pvVar1 = (void *)0x0;
  }
  else {
    if (0x17d05f417d05f41 < uVar5) goto LAB_007ccc9c;
    pvVar1 = operator_new(uVar5 * 0xac);
    puVar6 = (undefined8 *)((long)pvVar1 + (long)puVar6);
  }
  if (puVar6 != (undefined8 *)0x0) {
    uVar9 = param_2[4];
    uVar8 = param_2[7];
    uVar7 = param_2[6];
    uVar11 = param_2[1];
    uVar10 = *param_2;
    uVar13 = param_2[3];
    uVar12 = param_2[2];
    puVar6[5] = param_2[5];
    puVar6[4] = uVar9;
    puVar6[7] = uVar8;
    puVar6[6] = uVar7;
    puVar6[1] = uVar11;
    *puVar6 = uVar10;
    puVar6[3] = uVar13;
    puVar6[2] = uVar12;
    uVar9 = param_2[0xc];
    uVar8 = param_2[0xf];
    uVar7 = param_2[0xe];
    uVar11 = param_2[9];
    uVar10 = param_2[8];
    uVar13 = param_2[0xb];
    uVar12 = param_2[10];
    puVar6[0xd] = param_2[0xd];
    puVar6[0xc] = uVar9;
    puVar6[0xf] = uVar8;
    puVar6[0xe] = uVar7;
    puVar6[9] = uVar11;
    puVar6[8] = uVar10;
    puVar6[0xb] = uVar13;
    puVar6[10] = uVar12;
    uVar11 = param_2[0x11];
    uVar10 = param_2[0x10];
    uVar9 = param_2[0x13];
    uVar8 = param_2[0x12];
    uVar7 = *(undefined8 *)((long)param_2 + 0x9c);
    *(undefined8 *)((long)puVar6 + 0xa4) = *(undefined8 *)((long)param_2 + 0xa4);
    *(undefined8 *)((long)puVar6 + 0x9c) = uVar7;
    puVar6[0x11] = uVar11;
    puVar6[0x10] = uVar10;
    puVar6[0x13] = uVar9;
    puVar6[0x12] = uVar8;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar6 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar2 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)puVar6 + 0xac;
    param_1[2] = (long)((long)pvVar1 + uVar5 * 0xac);
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    return (long)puVar6 + 0xac;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 007ccca0  FUN_007ccca0 =====

void FUN_007ccca0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 007cccb8  FUN_007cccb8 =====

long FUN_007cccb8(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if ((long)param_2 != 0) {
    lVar1 = (long)((ulong)*(uint *)(param_1 + 0x14) * 1000000) / (long)param_2;
  }
  return lVar1;
}


// ===== 007cccd8  FUN_007cccd8 =====

void FUN_007cccd8(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined4 uVar1;
  
  *param_1 = param_2;
  param_1[1] = *param_3;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_3 + 1);
  param_1[3] = param_3[2];
  param_1[4] = param_3[3];
  uVar1 = param_3[4];
  *(undefined8 *)(param_1 + 6) = param_4;
  *(undefined8 *)(param_1 + 8) = param_5;
  param_1[5] = uVar1;
  return;
}


// ===== 007ccd10  FUN_007ccd10 =====

void FUN_007ccd10(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x30);
  lVar2 = -0x8000000000000000;
  if (param_2 != -0x8000000000000000 && lVar3 != -0x8000000000000000) {
    lVar2 = lVar3 + param_2;
  }
  lVar1 = 0x7fffffffffffffff;
  if (param_2 != 0x7fffffffffffffff) {
    lVar1 = lVar2;
  }
  lVar2 = 0x7fffffffffffffff;
  if (lVar3 != 0x7fffffffffffffff) {
    lVar2 = lVar1;
  }
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 1;
  *(long *)(param_1 + 0x28) = param_2;
  *(long *)(param_1 + 0x30) = lVar2;
  return;
}


// ===== 007ccd50  FUN_007ccd50 =====

bool FUN_007ccd50(byte *param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  
  if (param_2 - 0x11U < 0xfffffffffffffff0) {
    return false;
  }
  param_2 = param_2 + -1;
  do {
    bVar1 = *param_1 - 0x30 < 10 || (*param_1 | 0x20) - 0x61 < 0x1a;
    bVar2 = param_2 != 0;
    param_2 = param_2 + -1;
    param_1 = param_1 + 1;
  } while (bVar1 && bVar2);
  return bVar1;
}


// ===== 007ccda0  FUN_007ccda0 =====

void FUN_007ccda0(undefined8 *param_1)

{
  param_1[0x15] = 0;
  *param_1 = 0x7fffffffffffffff;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
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
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  return;
}


// ===== 007ccde0  FUN_007ccde0 =====

void FUN_007ccde0(undefined8 *param_1,long param_2)

{
  byte bVar1;
  undefined8 uVar2;
  
  *param_1 = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = *(undefined8 *)(param_2 + 0x18);
  bVar1 = *(byte *)(param_2 + 2);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[2] = (ulong)bVar1;
  param_1[3] = 1;
  uVar2 = *(undefined8 *)(param_2 + 0xc0);
  if ((*(uint *)(param_2 + 200) & 1) == 0) {
    uVar2 = 0;
  }
  param_1[6] = uVar2;
  if (*(char *)(param_2 + 0xbc) == '\x01') {
    param_1[4] = 1;
  }
  return;
}


// ===== 007cce34  FUN_007cce34 =====

void FUN_007cce34(long *param_1,long param_2)

{
  long lVar1;
  
  param_1[3] = param_1[3] + 1;
  *param_1 = *param_1 + *(long *)(param_2 + 0x10);
  param_1[2] = param_1[2] + (ulong)*(byte *)(param_2 + 2);
  param_1[1] = param_1[1] + *(long *)(param_2 + 0x18);
  if (*(char *)(param_2 + 0x78) == '\x01') {
    lVar1 = 0x20;
  }
  else {
    if (*(char *)(param_2 + 0x78) != '\x03') {
      return;
    }
    lVar1 = 0x28;
  }
  *(long *)((long)param_1 + lVar1) = *(long *)((long)param_1 + lVar1) + 1;
  return;
}


// ===== 007cce9c  FUN_007cce9c =====

undefined8 FUN_007cce9c(byte *param_1,long param_2,uint *param_3)

{
  byte bVar1;
  double dVar2;
  
  if (param_3 != (uint *)0x0) {
    if (param_2 == 1) {
      *(byte *)(param_3 + 1) = *param_1 >> 7;
      *param_3 = *param_1 & 0x7f;
      return 1;
    }
    if (0xfffffffffffffff2 < param_2 - 0x11U) {
      *(byte *)(param_3 + 1) = *param_1 >> 7;
      *param_3 = *param_1 & 0x7f;
      dVar2 = (double)NEON_ucvtf((ulong)param_1[1]);
      *(double *)(param_3 + 2) = (dVar2 * 40.0) / 255.0;
      bVar1 = param_1[2];
      param_3[4] = (uint)(bVar1 >> 4);
      param_3[5] = bVar1 & 0xf;
      FUN_007cd068(param_3 + 6,param_1 + 3,param_2 + -3);
      return 1;
    }
  }
  return 0;
}


// ===== 007ccf64  FUN_007ccf64 =====

bool FUN_007ccf64(byte *param_1,ulong param_2,undefined4 *param_3)

{
  byte *pbVar1;
  undefined4 uVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  undefined4 *puVar7;
  
  uVar6 = (*(ulong *)(param_3 + 6) >> 1) + 3;
  if (*(ulong *)(param_3 + 6) < 2) {
    uVar6 = 1;
  }
  bVar5 = param_2 < 0x11 && param_2 == uVar6;
  if (param_2 < 0x11 && param_2 == uVar6) {
    uVar2 = *param_3;
    *param_1 = (byte)uVar2 & 0x7f;
    if (*(char *)(param_3 + 1) == '\x01') {
      *param_1 = (byte)uVar2 | 0x80;
    }
    if (1 < *(ulong *)(param_3 + 6)) {
      param_1[1] = (byte)(int)((*(double *)(param_3 + 2) / 40.0) * 255.0);
      param_1[2] = (byte)param_3[5] & 0xf | (byte)(param_3[4] << 4);
      if (param_2 < 3) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x7cd04c);
        (*pcVar3)();
      }
      uVar6 = 0;
      pbVar1 = (byte *)0x0;
      if (param_2 != 3) {
        pbVar1 = param_1 + 3;
      }
      do {
        bVar4 = *(ulong *)(param_3 + 6) >> 1 <= uVar6;
        if ((*(ulong *)(param_3 + 6) & 1) == 0) {
          puVar7 = param_3 + 8;
          if (bVar4) {
            return bVar5;
          }
        }
        else {
          if (bVar4) {
            return bVar5;
          }
          puVar7 = *(undefined4 **)(param_3 + 8);
        }
        pbVar1[uVar6] = (byte)(int)*(double *)(puVar7 + uVar6 * 2);
        uVar6 = uVar6 + 1;
      } while( true );
    }
  }
  return bVar5;
}


// ===== 007cd04c  FUN_007cd04c =====

long FUN_007cd04c(long param_1)

{
  long lVar1;
  
  lVar1 = (*(ulong *)(param_1 + 0x18) >> 1) + 3;
  if (*(ulong *)(param_1 + 0x18) < 2) {
    lVar1 = 1;
  }
  return lVar1;
}


// ===== 007cd068  FUN_007cd068 =====

void FUN_007cd068(ulong *param_1,undefined1 (*param_2) [16],ulong param_3)

{
  undefined1 auVar1 [16];
  bool bVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  double *pdVar9;
  long lVar10;
  ulong uVar11;
  ulong *puVar12;
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  ulong uVar15;
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
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  
  puVar8 = param_1 + 1;
  if ((*param_1 & 1) == 0) {
    uVar6 = 0xd;
    if (0xd < param_3) goto LAB_007cd0fc;
LAB_007cd0a4:
    uVar7 = *param_1 >> 1;
    puVar3 = puVar8 + uVar7;
    bVar2 = uVar7 <= param_3;
    uVar6 = param_3;
    if (bVar2) {
      uVar6 = uVar7;
    }
    uVar4 = 0;
    if (bVar2) {
      uVar4 = param_3 - uVar7;
    }
    if (!bVar2 || param_3 - uVar7 == 0) {
      puVar3 = (ulong *)0x0;
    }
    pauVar14 = param_2;
    if (uVar6 != 0) {
      if (((((uVar6 < 0x20) || (puVar8 + (uVar6 - 1) < puVar8)) || (uVar6 - 1 >> 0x3d != 0)) ||
          ((undefined1 (*) [16])((long)param_2[-1] + uVar6 + 0xf) < param_2)) ||
         ((puVar8 < (ulong *)((long)*param_2 + uVar6) &&
          (param_2 < (undefined1 (*) [16])(puVar8 + uVar6))))) {
        uVar15 = 0;
      }
      else {
        uVar15 = uVar6 & 0x3ffffffffffffff0;
        pauVar14 = (undefined1 (*) [16])((long)*param_2 + uVar15);
        uVar11 = uVar6 & 0x3ffffffffffffff0;
        puVar12 = puVar8;
        do {
          auVar18 = *param_2;
          uVar11 = uVar11 - 0x10;
          auVar21 = NEON_ext(auVar18,auVar18,8,1);
          auVar28._0_8_ = (ulong)CONCAT14(auVar18[7],(uint)auVar18[6]) & 0xff;
          auVar28[8] = auVar18[7];
          auVar28._9_7_ = 0;
          auVar26._0_8_ = (ulong)CONCAT14(auVar18[5],(uint)auVar18[4]) & 0xff;
          auVar26[8] = auVar18[5];
          auVar26._9_7_ = 0;
          auVar30._0_8_ = (ulong)CONCAT14(auVar18[3],(uint)auVar18[2]) & 0xff;
          auVar30[8] = auVar18[3];
          auVar30._9_7_ = 0;
          auVar23._0_8_ = (ulong)CONCAT14(auVar18[1],(uint)auVar18[0]) & 0xff;
          auVar23[8] = auVar18[1];
          auVar23._9_7_ = 0;
          auVar18 = NEON_ucvtf(auVar28,8);
          auVar16 = NEON_ucvtf(auVar26,8);
          auVar29._0_8_ = (ulong)CONCAT14(auVar21[7],(uint)auVar21[6]) & 0xffffffff;
          auVar29[8] = auVar21[7];
          auVar29._9_7_ = 0;
          auVar26 = NEON_ucvtf(auVar30,8);
          auVar23 = NEON_ucvtf(auVar23,8);
          auVar25._0_8_ = (ulong)CONCAT14(auVar21[1],(uint)auVar21[0]) & 0xff;
          auVar25[8] = auVar21[1];
          auVar25._9_7_ = 0;
          auVar30 = NEON_ucvtf(auVar29,8);
          puVar12[5] = auVar16._8_8_;
          puVar12[4] = auVar16._0_8_;
          puVar12[7] = auVar18._8_8_;
          puVar12[6] = auVar18._0_8_;
          auVar18[8] = auVar21[5];
          auVar18._0_8_ = (ulong)CONCAT14(auVar21[5],(uint)auVar21[4]) & 0xffffffff;
          auVar18._9_7_ = 0;
          auVar28 = NEON_ucvtf(auVar18,8);
          auVar16[8] = auVar21[3];
          auVar16._0_8_ = (ulong)CONCAT14(auVar21[3],(uint)auVar21[2]) & 0xffffffff;
          auVar16._9_7_ = 0;
          auVar16 = NEON_ucvtf(auVar16,8);
          auVar18 = NEON_ucvtf(auVar25,8);
          puVar12[1] = auVar23._8_8_;
          *puVar12 = auVar23._0_8_;
          puVar12[3] = auVar26._8_8_;
          puVar12[2] = auVar26._0_8_;
          puVar12[0xd] = auVar28._8_8_;
          puVar12[0xc] = auVar28._0_8_;
          puVar12[0xf] = auVar30._8_8_;
          puVar12[0xe] = auVar30._0_8_;
          puVar12[9] = auVar18._8_8_;
          puVar12[8] = auVar18._0_8_;
          puVar12[0xb] = auVar16._8_8_;
          puVar12[10] = auVar16._0_8_;
          puVar12 = puVar12 + 0x10;
          param_2 = param_2 + 1;
        } while (uVar11 != 0);
        if (uVar6 == uVar15) goto LAB_007cd128;
      }
      lVar10 = uVar6 - uVar15;
      pdVar9 = (double *)(puVar8 + uVar15);
      pauVar13 = pauVar14;
      do {
        pauVar14 = (undefined1 (*) [16])((long)*pauVar13 + 1);
        lVar10 = lVar10 + -1;
        *pdVar9 = (double)(byte)*(ulong *)*pauVar13;
        pdVar9 = pdVar9 + 1;
        pauVar13 = pauVar14;
      } while (lVar10 != 0);
    }
LAB_007cd128:
    if (param_3 <= uVar7) {
      uVar7 = *param_1;
      goto LAB_007cd2fc;
    }
    uVar6 = 0;
    param_2 = pauVar14;
    puVar8 = (ulong *)0x0;
  }
  else {
    puVar8 = (ulong *)param_1[1];
    uVar6 = param_1[2];
    if (param_3 <= uVar6) goto LAB_007cd0a4;
LAB_007cd0fc:
    uVar6 = uVar6 * 2;
    if (uVar6 < param_3 || uVar6 - param_3 == 0) {
      uVar6 = param_3;
    }
    if (uVar6 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    puVar3 = (ulong *)operator_new(uVar6 << 3);
    uVar4 = param_3;
    puVar8 = puVar3;
  }
  uVar11 = uVar4 - 1;
  uVar7 = (ulong)-(long)puVar3 >> 3;
  if (uVar11 <= (ulong)-(long)puVar3 >> 3) {
    uVar7 = uVar11;
  }
  pauVar14 = param_2;
  if (uVar7 < 0x30) {
LAB_007cd158:
    lVar10 = 0;
  }
  else {
    lVar10 = 0;
    uVar15 = (ulong)-(long)puVar3 >> 3;
    if (uVar11 <= uVar15) {
      uVar15 = uVar11;
    }
    if ((((-(long)puVar3 & 7U) == 0) && (puVar3 <= puVar3 + uVar15)) &&
       (param_2 <= (undefined1 (*) [16])((long)*param_2 + uVar15))) {
      uVar15 = (ulong)-(long)puVar3 >> 3;
      if (uVar11 <= (ulong)-(long)puVar3 >> 3) {
        uVar15 = uVar11;
      }
      if ((puVar3 < (ulong *)((long)*param_2 + uVar15 + 1)) &&
         (param_2 < (undefined1 (*) [16])(puVar3 + uVar15 + 1))) goto LAB_007cd158;
      uVar11 = uVar7 + 1 & 0xf;
      uVar15 = 0x10;
      if (uVar11 != 0) {
        uVar15 = uVar11;
      }
      lVar10 = (uVar7 + 1) - uVar15;
      pauVar14 = (undefined1 (*) [16])((long)param_2 + lVar10);
      puVar12 = puVar3;
      lVar5 = lVar10;
      do {
        auVar18 = *param_2;
        lVar5 = lVar5 + -0x10;
        auVar16 = NEON_ext(auVar18,auVar18,8,1);
        auVar20._0_8_ = (ulong)CONCAT14(auVar18[7],(uint)auVar18[6]) & 0xff;
        auVar20[8] = auVar18[7];
        auVar20._9_7_ = 0;
        auVar22._0_8_ = (ulong)CONCAT14(auVar18[5],(uint)auVar18[4]) & 0xff;
        auVar22[8] = auVar18[5];
        auVar22._9_7_ = 0;
        auVar24._0_8_ = (ulong)CONCAT14(auVar18[3],(uint)auVar18[2]) & 0xff;
        auVar24[8] = auVar18[3];
        auVar24._9_7_ = 0;
        auVar17._0_8_ = (ulong)CONCAT14(auVar18[1],(uint)auVar18[0]) & 0xff;
        auVar17[8] = auVar18[1];
        auVar17._9_7_ = 0;
        auVar21 = NEON_ucvtf(auVar20,8);
        auVar23 = NEON_ucvtf(auVar22,8);
        auVar27._0_8_ = (ulong)CONCAT14(auVar16[7],(uint)auVar16[6]) & 0xffffffff;
        auVar27[8] = auVar16[7];
        auVar27._9_7_ = 0;
        auVar25 = NEON_ucvtf(auVar24,8);
        auVar18 = NEON_ucvtf(auVar17,8);
        auVar19._0_8_ = (ulong)CONCAT14(auVar16[1],(uint)auVar16[0]) & 0xff;
        auVar19[8] = auVar16[1];
        auVar19._9_7_ = 0;
        auVar28 = NEON_ucvtf(auVar27,8);
        puVar12[5] = auVar23._8_8_;
        puVar12[4] = auVar23._0_8_;
        puVar12[7] = auVar21._8_8_;
        puVar12[6] = auVar21._0_8_;
        auVar21[8] = auVar16[5];
        auVar21._0_8_ = (ulong)CONCAT14(auVar16[5],(uint)auVar16[4]) & 0xffffffff;
        auVar21._9_7_ = 0;
        auVar21 = NEON_ucvtf(auVar21,8);
        auVar1[8] = auVar16[3];
        auVar1._0_8_ = (ulong)CONCAT14(auVar16[3],(uint)auVar16[2]) & 0xffffffff;
        auVar1._9_7_ = 0;
        auVar23 = NEON_ucvtf(auVar1,8);
        auVar16 = NEON_ucvtf(auVar19,8);
        puVar12[1] = auVar18._8_8_;
        *puVar12 = auVar18._0_8_;
        puVar12[3] = auVar25._8_8_;
        puVar12[2] = auVar25._0_8_;
        puVar12[0xd] = auVar21._8_8_;
        puVar12[0xc] = auVar21._0_8_;
        puVar12[0xf] = auVar28._8_8_;
        puVar12[0xe] = auVar28._0_8_;
        puVar12[9] = auVar16._8_8_;
        puVar12[8] = auVar16._0_8_;
        puVar12[0xb] = auVar23._8_8_;
        puVar12[10] = auVar23._0_8_;
        puVar12 = puVar12 + 0x10;
        param_2 = param_2 + 1;
      } while (lVar5 != 0);
    }
  }
  lVar5 = uVar4 - lVar10;
  pdVar9 = (double *)(puVar3 + lVar10);
  do {
    if (pdVar9 == (double *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    lVar5 = lVar5 + -1;
    *pdVar9 = (double)(byte)*(ulong *)*pauVar14;
    pdVar9 = pdVar9 + 1;
    pauVar14 = (undefined1 (*) [16])((long)*pauVar14 + 1);
  } while (lVar5 != 0);
  uVar7 = *param_1;
  if (puVar8 != (ulong *)0x0) {
    if ((uVar7 & 1) != 0) {
      operator_delete((void *)param_1[1]);
      uVar7 = *param_1;
    }
    uVar7 = uVar7 | 1;
    param_1[1] = (ulong)puVar8;
    param_1[2] = uVar6;
  }
LAB_007cd2fc:
  *param_1 = uVar7 & 1 | param_3 << 1;
  return;
}


// ===== 007cd458  FUN_007cd458 =====

void FUN_007cd458(ulong *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  void *pvVar3;
  ulong uVar4;
  void *pvVar5;
  long lVar6;
  code *pcVar7;
  ulong local_28;
  
  uVar2 = (**(code **)(*param_2 + 0x10))();
  *param_1 = 0;
  param_1[1] = uVar2;
  if (uVar2 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    pvVar3 = operator_new__(uVar2);
  }
  lVar6 = *param_2;
  param_1[2] = (ulong)pvVar3;
  uVar4 = (**(code **)(lVar6 + 0x10))(param_2);
  pvVar5 = pvVar3;
  if (uVar2 < uVar4) {
    uVar2 = uVar2 + (uVar2 >> 1);
    uVar1 = uVar4;
    if (uVar4 <= uVar2) {
      uVar1 = uVar2;
    }
    pvVar5 = operator_new__(uVar1);
    param_1[2] = (ulong)pvVar5;
    if (pvVar3 != (void *)0x0) {
      operator_delete__(pvVar3);
      pvVar5 = (void *)param_1[2];
    }
    param_1[1] = uVar1;
  }
  pvVar3 = (void *)0x0;
  if (uVar4 != 0) {
    pvVar3 = pvVar5;
  }
  pcVar7 = *(code **)(*param_2 + 0x18);
  *param_1 = uVar4;
  local_28 = 0;
  (*pcVar7)(param_2,pvVar3,&local_28,uVar4);
  if (uVar4 < local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../rtc_base/buffer.h",0x152,"written_elements <= max_elements",&DAT_001fb920,
                 local_28,uVar4);
  }
  *param_1 = local_28;
  return;
}


// ===== 007cd570  FUN_007cd570 =====

bool FUN_007cd570(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                 code *param_5)

{
  long lVar1;
  
  lVar1 = *param_3;
  if (lVar1 != 0) {
    (*param_5)(param_4,param_2,lVar1);
    *param_3 = 0;
  }
  return lVar1 != 0;
}


// ===== 007cd5b4  FUN_007cd5b4 =====

ulong FUN_007cd5b4(long *param_1)

{
  long lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x10))();
  return lVar1 - 4U >> 2;
}


// ===== 007cd5e0  FUN_007cd5e0 =====

void FUN_007cd5e0(byte param_1,undefined1 param_2,undefined4 param_3,long param_4,long *param_5)

{
  *(byte *)(param_4 + *param_5) = param_1 | 0x80;
  *(undefined1 *)(param_4 + *param_5 + 1) = param_2;
  *(char *)(param_4 + *param_5 + 2) = (char)((uint)param_3 >> 8);
  *(char *)(param_4 + *param_5 + 3) = (char)param_3;
  *param_5 = *param_5 + 4;
  return;
}


// ===== 007cd628  FUN_007cd628 =====

void FUN_007cd628(byte param_1,undefined1 param_2,undefined4 param_3,uint param_4,long param_5,
                 long *param_6)

{
  byte bVar1;
  
  bVar1 = 0xa0;
  if ((param_4 & 1) == 0) {
    bVar1 = 0x80;
  }
  *(byte *)(param_5 + *param_6) = bVar1 | param_1;
  *(undefined1 *)(param_5 + *param_6 + 1) = param_2;
  *(char *)(param_5 + *param_6 + 2) = (char)((uint)param_3 >> 8);
  *(char *)(param_5 + *param_6 + 3) = (char)param_3;
  *param_6 = *param_6 + 4;
  return;
}


// ===== 007cd680  FUN_007cd680 =====

void FUN_007cd680(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_00d37b58;
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  return;
}


// ===== 007cd6a8  FUN_007cd6a8 =====

void FUN_007cd6a8(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[5];
  param_1[5] = 0;
  *param_1 = &PTR_FUN_00d37b58;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
    return;
  }
  return;
}


// ===== 007cd6d0  FUN_007cd6d0 =====

void FUN_007cd6d0(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[5];
  param_1[5] = 0;
  *param_1 = &PTR_FUN_00d37b58;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 007cd718  FUN_007cd718 =====

undefined8 FUN_007cd718(long param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  char *pcVar6;
  ulong uVar7;
  void *pvVar8;
  long lVar9;
  
  if (*(uint *)(param_2 + 4) < 8) {
    uVar3 = FUN_004022fc();
    if ((uVar3 & 1) != 0) {
      return 0;
    }
    pcVar6 = "Packet is too small to be a valid APP packet";
    uVar5 = 0x162;
  }
  else {
    if ((*(uint *)(param_2 + 4) & 3) == 0) {
      *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 1);
      uVar2 = (**(uint **)(param_2 + 8) & 0xff00ff00) >> 8 |
              (**(uint **)(param_2 + 8) & 0xff00ff) << 8;
      *(uint *)(param_1 + 8) = uVar2 >> 0x10 | uVar2 << 0x10;
      uVar2 = *(uint *)(*(long *)(param_2 + 8) + 4);
      uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
      *(uint *)(param_1 + 0x10) = uVar2 >> 0x10 | uVar2 << 0x10;
      uVar2 = *(uint *)(param_2 + 4);
      lVar9 = *(long *)(param_2 + 8);
      *(undefined8 *)(param_1 + 0x18) = 0;
      uVar3 = (ulong)uVar2 - 8;
      if (uVar3 != 0) {
        uVar7 = *(ulong *)(param_1 + 0x20);
        if (uVar7 < uVar3) {
          uVar7 = uVar7 + (uVar7 >> 1);
          uVar1 = uVar3;
          if (uVar3 <= uVar7) {
            uVar1 = uVar7;
          }
          pvVar4 = operator_new__(uVar1);
          pvVar8 = *(void **)(param_1 + 0x28);
          *(void **)(param_1 + 0x28) = pvVar4;
          if (pvVar8 != (void *)0x0) {
            operator_delete__(pvVar8);
            pvVar8 = *(void **)(param_1 + 0x18);
          }
          *(ulong *)(param_1 + 0x20) = uVar1;
        }
        else {
          pvVar8 = (void *)0x0;
        }
        memcpy((void *)(*(long *)(param_1 + 0x28) + (long)pvVar8),(void *)(lVar9 + 8),uVar3);
        *(ulong *)(param_1 + 0x18) = uVar3;
      }
      return 1;
    }
    uVar3 = FUN_004022fc();
    if ((uVar3 & 1) != 0) {
      return 0;
    }
    pcVar6 = "Packet payload must be 32 bits aligned to make a valid APP packet";
    uVar5 = 0x182;
  }
  FUN_00623bb0(&DAT_001f4e98,"../../modules/rtp_rtcp/source/rtcp_packet/app.cc",uVar5,pcVar6);
  return 0;
}


// ===== 007cd854  FUN_007cd854 =====

long FUN_007cd854(long param_1)

{
  return *(long *)(param_1 + 0x18) + 0xc;
}


// ===== 007cd864  FUN_007cd864 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_007cd864(long *param_1,long param_2,long *param_3,ulong param_4,undefined8 param_5,
                 undefined8 param_6)

{
  undefined1 uVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  do {
    lVar7 = *param_3;
    lVar3 = (**(code **)(*param_1 + 0x10))(param_1);
    if ((ulong)(lVar3 + lVar7) <= param_4) {
      (**(code **)(*param_1 + 0x10))(param_1);
      uVar1 = *(undefined1 *)((long)param_1 + 0xc);
      uVar5 = FUN_007cd5b4(param_1);
      FUN_007cd5e0(uVar1,0xcc,uVar5,param_2,param_3);
      auVar10 = _DAT_001f3910;
      uVar2 = (undefined4)param_1[1];
      auVar8._4_4_ = uVar2;
      auVar8._0_4_ = uVar2;
      auVar8._8_4_ = uVar2;
      auVar8._12_4_ = uVar2;
      auVar8 = NEON_ushl(auVar8,_DAT_001f3910,4);
      *(uint *)(param_2 + *param_3) =
           CONCAT13(auVar8[0xc],CONCAT12(auVar8[8],CONCAT11(auVar8[4],auVar8[0])));
      uVar2 = (undefined4)param_1[2];
      auVar9._4_4_ = uVar2;
      auVar9._0_4_ = uVar2;
      auVar9._8_4_ = uVar2;
      auVar9._12_4_ = uVar2;
      auVar10 = NEON_ushl(auVar9,auVar10,4);
      *(uint *)(param_2 + *param_3 + 4) =
           CONCAT13(auVar10[0xc],CONCAT12(auVar10[8],CONCAT11(auVar10[4],auVar10[0])));
      if (param_1[3] == 0) {
        lVar6 = 8;
      }
      else {
        memcpy((void *)(param_2 + *param_3 + 8),(void *)param_1[5],param_1[3]);
        lVar6 = param_1[3] + 8;
      }
      *param_3 = lVar6 + *param_3;
      break;
    }
    uVar4 = FUN_007cd570(param_1,param_2,param_3,param_5,param_6);
  } while ((uVar4 & 1) != 0);
  return (ulong)(lVar3 + lVar7) <= param_4;
}


// ===== 007cd9ac  FUN_007cd9ac =====

undefined8 FUN_007cd9ac(byte *param_1,byte *param_2,ulong param_3)

{
  undefined *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  char *pcVar8;
  
  if (param_3 < 4) {
    uVar6 = FUN_004022fc();
    if ((uVar6 & 1) == 0) {
      puVar1 = &DAT_001b3348;
      if (param_3 != 1) {
        puVar1 = &DAT_0019cf4c;
      }
      FUN_00623bb0(&DAT_00214e18,"../../modules/rtp_rtcp/source/rtcp_packet/common_header.cc",0x122,
                   "Too little data (",param_3," byte",puVar1,
                   ") remaining in buffer to parse RTCP header (4 bytes).");
    }
  }
  else {
    bVar2 = *param_2;
    if (bVar2 >> 6 == 2) {
      param_1[1] = bVar2 & 0x1f;
      *param_1 = param_2[1];
      bVar3 = param_2[2];
      bVar4 = param_2[3];
      param_1[2] = 0;
      uVar5 = (uint)bVar3 << 10 | (uint)bVar4 << 2;
      *(byte **)(param_1 + 8) = param_2 + 4;
      *(uint *)(param_1 + 4) = uVar5;
      if (param_3 < uVar5 + 4) {
        uVar6 = FUN_004022fc();
        if ((uVar6 & 1) == 0) {
          FUN_00623bb0(&DAT_00214e1f,"../../modules/rtp_rtcp/source/rtcp_packet/common_header.cc",
                       0x1da,"Buffer too small (",param_3,
                       " bytes) to fit an RtcpPacket with a header and ",
                       *(undefined4 *)(param_1 + 4)," bytes.");
        }
      }
      else {
        if ((bVar2 >> 5 & 1) == 0) {
          return 1;
        }
        if (uVar5 == 0) {
          uVar6 = FUN_004022fc();
          if ((uVar6 & 1) != 0) {
            return 0;
          }
          pcVar8 = "Invalid RTCP header: Padding bit set but 0 payload size specified.";
          uVar7 = 0x21a;
        }
        else {
          bVar2 = (param_2 + 4)[(ulong)uVar5 - 1];
          param_1[2] = bVar2;
          if (bVar2 != 0) {
            if (bVar2 <= uVar5) {
              *(uint *)(param_1 + 4) = uVar5 - bVar2;
              return 1;
            }
            uVar6 = FUN_004022fc();
            if ((uVar6 & 1) != 0) {
              return 0;
            }
            FUN_00623bb0(&DAT_00214e26,"../../modules/rtp_rtcp/source/rtcp_packet/common_header.cc",
                         0x28a,"Invalid RTCP header: Too many padding bytes (",param_1[2],
                         ") for a packet payload size of ",*(undefined4 *)(param_1 + 4)," bytes.");
            return 0;
          }
          uVar6 = FUN_004022fc();
          if ((uVar6 & 1) != 0) {
            return 0;
          }
          pcVar8 = "Invalid RTCP header: Padding bit set but 0 padding size specified.";
          uVar7 = 0x25a;
        }
        FUN_00623bb0(&DAT_001f4e98,"../../modules/rtp_rtcp/source/rtcp_packet/common_header.cc",
                     uVar7,pcVar8);
      }
    }
    else {
      uVar6 = FUN_004022fc();
      if ((uVar6 & 1) == 0) {
        FUN_00623bb0(&DAT_001f6148,"../../modules/rtp_rtcp/source/rtcp_packet/common_header.cc",
                     0x16a,"Invalid RTCP header: Version must be ",2," but was ",bVar2 >> 6);
      }
    }
  }
  return 0;
}


// ===== 007cdbf8  FUN_007cdbf8 =====

void FUN_007cdbf8(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_00d37b88;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  return;
}


// ===== 007cdc18  FUN_007cdc18 =====

void FUN_007cdc18(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00d37b88;
  if (plVar3 == (long *)0x0) {
    return;
  }
  plVar2 = (long *)param_1[3];
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
      plVar1 = (long *)*plVar2;
      *plVar2 = 0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
    } while (plVar2 != plVar3);
    plVar1 = (long *)param_1[2];
  }
  param_1[3] = plVar3;
  operator_delete(plVar1);
  return;
}


// ===== 007cdcd4  FUN_007cdcd4 =====

void FUN_007cdcd4(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00d37b88;
  if (plVar3 != (long *)0x0) {
    plVar2 = (long *)param_1[3];
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
        plVar1 = (long *)*plVar2;
        *plVar2 = 0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
      } while (plVar2 != plVar3);
      plVar1 = (long *)param_1[2];
    }
    param_1[3] = plVar3;
    operator_delete(plVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 007cdd88  FUN_007cdd88 =====

void FUN_007cdd88(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *local_8;
  
  local_8 = param_2;
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/rtp_rtcp/source/rtcp_packet/compound_packet.cc",0x1d,"packet",
                 &DAT_001f5fa0);
  }
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 < *(long **)(param_1 + 0x20)) {
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    local_8 = (long *)0x0;
    plVar2 = plVar1 + 1;
    *plVar1 = (long)param_2;
  }
  else {
    plVar2 = (long *)FUN_007cdf30(param_1 + 0x10,&local_8);
  }
  plVar1 = local_8;
  *(long **)(param_1 + 0x18) = plVar2;
  local_8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  return;
}


// ===== 007cde34  FUN_007cde34 =====

uint FUN_007cde34(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  if (puVar1 == puVar2) {
    uVar3 = 1;
  }
  else {
    do {
      uVar3 = (**(code **)(*(long *)*puVar1 + 0x18))
                        ((long *)*puVar1,param_2,param_3,param_4,param_5,param_6);
      if (puVar1 + 1 == puVar2) break;
      puVar1 = puVar1 + 1;
    } while ((uVar3 & 1) != 0);
  }
  return uVar3 & 1;
}


// ===== 007cded0  FUN_007cded0 =====

long FUN_007cded0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  if (*(undefined8 **)(param_1 + 0x10) == puVar1) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    do {
      puVar5 = puVar4 + 1;
      lVar2 = (**(code **)(*(long *)*puVar4 + 0x10))();
      lVar3 = lVar2 + lVar3;
      puVar4 = puVar5;
    } while (puVar5 != puVar1);
  }
  return lVar3;
}


// ===== 007cdf30  FUN_007cdf30 =====

undefined8 * FUN_007cdf30(long *param_1,undefined8 *param_2)

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
    FUN_007ce028();
LAB_007ce024:
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
    if (uVar6 >> 0x3d != 0) goto LAB_007ce024;
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


// ===== 007ce028  FUN_007ce028 =====

void FUN_007ce028(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 007ce040  FUN_007ce040 =====

void FUN_007ce040(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d37bb8;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  return;
}


// ===== 007ce060  FUN_007ce060 =====

void FUN_007ce060(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = (void *)param_1[5];
  *param_1 = &PTR_FUN_00d37bb8;
  if (pvVar1 == (void *)0x0) {
LAB_007ce0f8:
    pvVar1 = (void *)param_1[2];
    if (pvVar1 == (void *)0x0) {
      return;
    }
    pvVar2 = (void *)param_1[3];
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
        param_1[3] = pvVar1;
        operator_delete(pvVar1);
        return;
      }
      pvVar2 = (void *)((long)pvVar2 + -4);
    } while (pvVar2 != (void *)0x0);
  }
  else {
    pvVar2 = (void *)param_1[6];
    uVar4 = (ulong)((long)pvVar2 + ((long)pvVar2 << 0x3f) + -2) >> 1;
    uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2 << 0x3f) - ((long)pvVar1 - (long)pvVar2)) >> 1;
    if (uVar4 <= uVar3) {
      uVar3 = uVar4;
    }
    if ((1 < uVar3) && ((((int)pvVar1 - (uint)pvVar2 | (uint)pvVar2) & 1) == 0)) {
      uVar3 = uVar3 & 0x7ffffffffffffffe;
      pvVar2 = (void *)((long)pvVar2 + uVar3 * -2);
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
    do {
      if (pvVar2 == pvVar1) {
        param_1[6] = pvVar1;
        operator_delete(pvVar1);
        goto LAB_007ce0f8;
      }
      pvVar2 = (void *)((long)pvVar2 + -2);
    } while (pvVar2 != (void *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 007ce1a4  FUN_007ce1a4 =====

void FUN_007ce1a4(void *param_1)

{
  FUN_007ce060();
  operator_delete(param_1);
  return;
}


// ===== 007ce1d4  FUN_007ce1d4 =====

bool FUN_007ce1d4(long param_1,long param_2)

{
  ushort *puVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar2 = *(uint *)(param_2 + 4);
  if (uVar2 < 0xc) {
    uVar6 = FUN_004022fc();
    if ((uVar6 & 1) == 0) {
      FUN_00623bb0(&DAT_001f6d4b,"../../modules/rtp_rtcp/source/rtcp_packet/nack.cc",0x1da,
                   "Payload length ",*(undefined4 *)(param_2 + 4)," is too small for a Nack.");
    }
  }
  else {
    uVar9 = (ulong)uVar2 - 8 >> 2;
    FUN_007d0240(param_1,*(undefined8 *)(param_2 + 8));
    lVar5 = *(long *)(param_1 + 0x28);
    lVar4 = *(long *)(param_1 + 0x30);
    uVar8 = (lVar4 + (lVar4 << 0x3f)) - 2U >> 1;
    uVar6 = (ulong)((lVar5 - lVar4 << 0x3f) - (lVar5 - lVar4)) >> 1;
    if (uVar8 <= uVar6) {
      uVar6 = uVar8;
    }
    lVar7 = *(long *)(param_2 + 8);
    if ((1 < uVar6) && ((((int)lVar5 - (uint)lVar4 | (uint)lVar4) & 1) == 0)) {
      uVar6 = uVar6 & 0x7ffffffffffffffe;
      lVar4 = lVar4 + uVar6 * -2;
      do {
        uVar6 = uVar6 - 2;
      } while (uVar6 != 0);
    }
    while (lVar4 != lVar5) {
      lVar4 = lVar4 + -2;
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    *(long *)(param_1 + 0x30) = lVar5;
    FUN_007ce364(param_1 + 0x10,uVar9);
    lVar5 = 0;
    uVar6 = 0;
    do {
      if ((ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10) >> 2) <= uVar6) {
LAB_007ce350:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                  );
      }
      puVar1 = (ushort *)(lVar7 + 8 + lVar5);
      uVar3 = *puVar1;
      *(ushort *)(*(long *)(param_1 + 0x10) + lVar5) =
           uVar3 >> 8 | (ushort)((uVar3 & 0xff00ff) << 8);
      if ((ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10) >> 2) <= uVar6)
      goto LAB_007ce350;
      uVar3 = puVar1[1];
      uVar6 = uVar6 + 1;
      lVar4 = *(long *)(param_1 + 0x10) + lVar5;
      lVar5 = lVar5 + 4;
      *(ushort *)(lVar4 + 2) = uVar3 >> 8 | (ushort)((uVar3 & 0xff00ff) << 8);
    } while (uVar9 != uVar6);
    FUN_007ce624(param_1);
  }
  return 0xb < uVar2;
}


// ===== 007ce364  FUN_007ce364 =====

void FUN_007ce364(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  void *__src;
  void *pvVar3;
  undefined4 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  size_t __n;
  ulong uVar8;
  void *__dest;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  ulong uVar12;
  
  __src = (void *)*param_1;
  puVar4 = (undefined4 *)param_1[1];
  __n = (long)puVar4 - (long)__src;
  uVar12 = (long)__n >> 2;
  uVar6 = param_2 - uVar12;
  iVar9 = (int)puVar4;
  if (param_2 < uVar12 || uVar6 == 0) {
    if (param_2 < uVar12) {
      puVar11 = (undefined4 *)((long)__src + param_2 * 4);
      uVar6 = (ulong)(((long)puVar11 - (long)puVar4 << 0x3e) - ((long)puVar11 - (long)puVar4)) >> 2;
      uVar12 = (ulong)((long)puVar4 + (-4 - ((long)puVar4 << 0x3e))) >> 2;
      if (uVar12 <= uVar6) {
        uVar6 = uVar12;
      }
      if ((1 < uVar6) && ((((int)__src - iVar9 | -iVar9) & 3U) == 0)) {
        uVar6 = uVar6 & 0x3ffffffffffffffe;
        puVar4 = puVar4 + -uVar6;
        do {
          uVar6 = uVar6 - 2;
        } while (uVar6 != 0);
      }
      while (puVar4 != puVar11) {
        puVar4 = puVar4 + -1;
        if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      param_1[1] = puVar11;
    }
  }
  else {
    uVar8 = param_1[2] - (long)__src;
    if ((ulong)((long)uVar8 >> 2) < param_2) {
      if (param_2 >> 0x3e == 0) {
        uVar1 = (long)uVar8 >> 1;
        if ((ulong)((long)uVar8 >> 1) <= param_2) {
          uVar1 = param_2;
        }
        if (0x7ffffffffffffffb < uVar8) {
          uVar1 = 0x3fffffffffffffff;
        }
        if (uVar1 >> 0x3e == 0) {
          pvVar3 = operator_new(uVar1 * 4);
          if (uVar6 * 4 == 0) {
            puVar11 = (undefined4 *)((long)pvVar3 + __n);
          }
          else {
            puVar11 = (undefined4 *)((long)pvVar3 + uVar6 * 4 + __n);
            uVar6 = (ulong)((long)__src + (-(long)pvVar3 - (long)puVar4)) >> 2;
            uVar8 = (param_2 * 4 - __n) - 4 >> 2;
            if (uVar8 <= uVar6) {
              uVar6 = uVar8;
            }
            if (uVar6 < 8) {
              puVar4 = (undefined4 *)((long)pvVar3 + __n);
            }
            else {
              puVar4 = (undefined4 *)((long)pvVar3 + __n);
              if ((((int)__src - iVar9) - (int)pvVar3 & 3U) == 0) {
                uVar8 = uVar6 + 1 & 7;
                uVar2 = 8;
                if (uVar8 != 0) {
                  uVar2 = uVar8;
                }
                lVar5 = (uVar6 + 1) - uVar2;
                puVar7 = (undefined8 *)((long)pvVar3 + __n + 0x10);
                puVar4 = (undefined4 *)((long)pvVar3 + lVar5 * 4 + __n);
                do {
                  lVar5 = lVar5 + -8;
                  puVar7[-1] = 0;
                  puVar7[-2] = 0;
                  puVar7[1] = 0;
                  *puVar7 = 0;
                  puVar7 = puVar7 + 4;
                } while (lVar5 != 0);
              }
            }
            do {
              if (puVar4 == (undefined4 *)0x0) goto LAB_007ce608;
              puVar10 = puVar4 + 1;
              *puVar4 = 0;
              puVar4 = puVar10;
            } while (puVar10 != puVar11);
          }
          __dest = (void *)((long)pvVar3 + uVar12 * -4 + __n);
          memcpy(__dest,__src,__n);
          *param_1 = __dest;
          param_1[1] = puVar11;
          param_1[2] = (void *)((long)pvVar3 + uVar1 * 4);
          if (__src == (void *)0x0) {
            return;
          }
          operator_delete(__src);
          return;
        }
      }
      else {
        FUN_007cec9c();
      }
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    puVar11 = puVar4;
    if ((uVar6 & 0x3fffffffffffffff) != 0) {
      puVar11 = puVar4 + uVar6;
      uVar12 = (param_2 * 4 - __n) - 4 >> 2;
      uVar6 = (ulong)-(long)puVar4 >> 2;
      if (uVar12 <= (ulong)-(long)puVar4 >> 2) {
        uVar6 = uVar12;
      }
      if ((7 < uVar6) && ((-iVar9 & 3U) == 0)) {
        uVar12 = uVar6 + 1 & 7;
        uVar8 = 8;
        if (uVar12 != 0) {
          uVar8 = uVar12;
        }
        puVar7 = (undefined8 *)(puVar4 + 4);
        lVar5 = (uVar6 + 1) - uVar8;
        puVar4 = puVar4 + lVar5;
        do {
          lVar5 = lVar5 + -8;
          puVar7[-1] = 0;
          puVar7[-2] = 0;
          puVar7[1] = 0;
          *puVar7 = 0;
          puVar7 = puVar7 + 4;
        } while (lVar5 != 0);
      }
      do {
        if (puVar4 == (undefined4 *)0x0) {
LAB_007ce608:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        puVar10 = puVar4 + 1;
        *puVar4 = 0;
        puVar4 = puVar10;
      } while (puVar10 != puVar11);
    }
    param_1[1] = puVar11;
  }
  return;
}


// ===== 007ce624  FUN_007ce624 =====

void FUN_007ce624(long param_1)

{
  ulong uVar1;
  short *psVar2;
  void *pvVar3;
  void *pvVar4;
  size_t __n;
  ulong uVar5;
  long lVar6;
  short *psVar7;
  short *psVar8;
  short *psVar9;
  void *__dest;
  ulong uVar10;
  short sVar11;
  
  psVar7 = *(short **)(param_1 + 0x10);
  psVar2 = *(short **)(param_1 + 0x18);
  if (psVar7 != psVar2) {
    psVar8 = *(short **)(param_1 + 0x30);
    do {
      if (psVar8 < *(short **)(param_1 + 0x38)) {
        if (psVar8 == (short *)0x0) {
LAB_007ce790:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        *psVar8 = *psVar7;
        psVar8 = psVar8 + 1;
      }
      else {
        psVar8 = (short *)FUN_005dd418(param_1 + 0x28,psVar7);
      }
      *(short **)(param_1 + 0x30) = psVar8;
      uVar10 = (ulong)(ushort)psVar7[1];
      if (psVar7[1] != 0) {
        sVar11 = *psVar7;
        psVar9 = psVar8;
        do {
          sVar11 = sVar11 + 1;
          psVar8 = psVar9;
          if ((uVar10 & 1) != 0) {
            if (psVar9 < *(short **)(param_1 + 0x38)) {
              if (psVar9 == (short *)0x0) goto LAB_007ce790;
              psVar8 = psVar9 + 1;
              *psVar9 = sVar11;
            }
            else {
              psVar9 = (short *)((long)psVar9 - *(long *)(param_1 + 0x28));
              lVar6 = (long)psVar9 >> 1;
              if (lVar6 == -2 || lVar6 + 2 < 0 != SCARRY8(lVar6,2)) {
                    /* WARNING: Subroutine does not return */
                FUN_005d4754();
              }
              uVar5 = (long)*(short **)(param_1 + 0x38) - *(long *)(param_1 + 0x28);
              uVar1 = uVar5;
              if (uVar5 <= lVar6 + 1U) {
                uVar1 = lVar6 + 1;
              }
              if (0x7ffffffffffffffd < uVar5) {
                uVar1 = 0x7fffffffffffffff;
              }
              if (uVar1 == 0) {
                pvVar3 = (void *)0x0;
              }
              else {
                if ((long)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_005d55a4();
                }
                pvVar3 = operator_new(uVar1 << 1);
                psVar9 = (short *)((long)pvVar3 + (long)psVar9);
              }
              if (psVar9 == (short *)0x0) goto LAB_007ce790;
              psVar8 = psVar9 + 1;
              *psVar9 = sVar11;
              __n = *(long *)(param_1 + 0x30) - (long)*(void **)(param_1 + 0x28);
              __dest = (void *)((long)psVar9 - __n);
              memcpy(__dest,*(void **)(param_1 + 0x28),__n);
              pvVar4 = *(void **)(param_1 + 0x28);
              *(void **)(param_1 + 0x28) = __dest;
              *(short **)(param_1 + 0x30) = psVar8;
              *(void **)(param_1 + 0x38) = (void *)((long)pvVar3 + uVar1 * 2);
              if (pvVar4 != (void *)0x0) {
                operator_delete(pvVar4);
              }
            }
            *(short **)(param_1 + 0x30) = psVar8;
          }
          uVar10 = uVar10 >> 1;
          psVar9 = psVar8;
        } while ((int)uVar10 != 0);
      }
      psVar7 = psVar7 + 2;
    } while (psVar7 != psVar2);
  }
  return;
}


// ===== 007ce7ac  FUN_007ce7ac =====

long FUN_007ce7ac(long param_1)

{
  return (*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10)) + 0xc;
}


// ===== 007ce7c0  FUN_007ce7c0 =====

undefined8
FUN_007ce7c0(long param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
            undefined8 param_6)

{
  ushort *puVar1;
  ushort uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  lVar7 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
  if (lVar7 != 0) {
    uVar4 = lVar7 >> 2;
    uVar3 = 0;
    do {
      uVar8 = uVar3;
      if ((ulong)(param_4 - *param_3) < 0x10) {
        uVar3 = FUN_007cd570(param_1,param_2,param_3,param_5,param_6);
        if ((uVar3 & 1) == 0) {
          return 0;
        }
      }
      else {
        uVar5 = (param_4 - *param_3) - 0xcU >> 2;
        uVar9 = uVar4 - uVar3;
        if (uVar5 <= uVar4 - uVar3) {
          uVar9 = uVar5;
        }
        FUN_007cd5e0(1,0xcd,uVar9 + 2,param_2,param_3);
        FUN_007d0260(param_1,param_2 + *param_3);
        uVar4 = uVar9 + uVar3;
        lVar7 = *param_3 + 8;
        *param_3 = lVar7;
        if (uVar3 < uVar4) {
          lVar6 = uVar3 << 2;
          do {
            if ((ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10) >> 2) <= uVar3) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                        );
            }
            puVar1 = (ushort *)(*(long *)(param_1 + 0x10) + lVar6);
            uVar9 = uVar9 - 1;
            uVar3 = uVar3 + 1;
            uVar2 = *puVar1;
            lVar6 = lVar6 + 4;
            *(ushort *)(param_2 + lVar7) = uVar2 >> 8 | (ushort)((uVar2 & 0xff00ff) << 8);
            uVar2 = puVar1[1];
            *(ushort *)(param_2 + *param_3 + 2) = uVar2 >> 8 | (ushort)((uVar2 & 0xff00ff) << 8);
            lVar7 = *param_3 + 4;
            *param_3 = lVar7;
            uVar8 = uVar4;
          } while (uVar9 != 0);
        }
      }
      uVar4 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10) >> 2;
      uVar3 = uVar8;
    } while (uVar8 < uVar4);
  }
  return 1;
}


// ===== 007ce940  FUN_007ce940 =====

void FUN_007ce940(undefined8 param_1,undefined2 *param_2,long param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  ulong uVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined2 *local_48;
  undefined2 *local_40;
  undefined2 *local_38;
  
  uVar11 = param_3 * 2;
  local_48 = (undefined2 *)0x0;
  local_40 = (undefined2 *)0x0;
  local_38 = (undefined2 *)0x0;
  puVar3 = local_40;
  if (uVar11 != 0) {
    if ((long)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d4754();
    }
    local_48 = (undefined2 *)operator_new(uVar11);
    uVar5 = uVar11 - 2 >> 1;
    uVar11 = (ulong)-(long)local_48 >> 1;
    if (uVar5 <= (ulong)-(long)local_48 >> 1) {
      uVar11 = uVar5;
    }
    local_38 = local_48 + param_3;
    puVar3 = local_48;
    puVar6 = param_2;
    if ((0xf < uVar11) && (((ulong)local_48 & 1) == 0)) {
      puVar9 = (undefined8 *)(local_48 + 8);
      uVar5 = uVar11 + 1 & 0xf;
      puVar10 = (undefined8 *)(param_2 + 8);
      uVar1 = 0x10;
      if (uVar5 != 0) {
        uVar1 = uVar5;
      }
      lVar8 = (uVar11 + 1) - uVar1;
      puVar6 = param_2 + lVar8;
      puVar3 = local_48 + lVar8;
      do {
        puVar2 = puVar10 + -1;
        uVar12 = puVar10[-2];
        uVar14 = puVar10[1];
        uVar13 = *puVar10;
        lVar8 = lVar8 + -0x10;
        puVar10 = puVar10 + 4;
        puVar9[-1] = *puVar2;
        puVar9[-2] = uVar12;
        puVar9[1] = uVar14;
        *puVar9 = uVar13;
        puVar9 = puVar9 + 4;
      } while (lVar8 != 0);
    }
    puVar4 = puVar3;
    do {
      if (puVar4 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar7 = puVar6 + 1;
      puVar3 = puVar3 + 1;
      *puVar4 = *puVar6;
      puVar4 = puVar4 + 1;
      puVar6 = puVar7;
    } while (puVar7 != param_2 + param_3);
  }
  local_40 = puVar3;
  FUN_007ceaec(param_1,&local_48);
  if (local_48 == (undefined2 *)0x0) {
    return;
  }
  uVar5 = (ulong)((long)local_40 + ((long)local_40 << 0x3f) + -2) >> 1;
  uVar11 = (ulong)(((long)local_48 - (long)local_40 << 0x3f) - ((long)local_48 - (long)local_40)) >>
           1;
  if (uVar5 <= uVar11) {
    uVar11 = uVar5;
  }
  puVar3 = local_40;
  if ((1 < uVar11) && ((((int)local_48 - (uint)local_40 | (uint)local_40) & 1) == 0)) {
    uVar11 = uVar11 & 0x7ffffffffffffffe;
    puVar3 = local_40 + -uVar11;
    do {
      uVar11 = uVar11 - 2;
    } while (uVar11 != 0);
  }
  do {
    if (puVar3 == local_48) {
      operator_delete(local_48);
      return;
    }
    puVar3 = puVar3 + -1;
  } while (puVar3 != (undefined2 *)0x0);
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 007ceaec  FUN_007ceaec =====

void FUN_007ceaec(long param_1,undefined8 *param_2)

{
  uint uVar1;
  uint *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  void *pvVar5;
  uint *puVar6;
  uint uVar7;
  void *pvVar8;
  ulong uVar9;
  ulong uVar10;
  ushort *puVar11;
  undefined4 local_24;
  
  pvVar5 = *(void **)(param_1 + 0x28);
  if (pvVar5 != (void *)0x0) {
    pvVar8 = *(void **)(param_1 + 0x30);
    uVar10 = (ulong)((long)pvVar8 + ((long)pvVar8 << 0x3f) + -2) >> 1;
    uVar9 = (ulong)(((long)pvVar5 - (long)pvVar8 << 0x3f) - ((long)pvVar5 - (long)pvVar8)) >> 1;
    if (uVar10 <= uVar9) {
      uVar9 = uVar10;
    }
    if ((1 < uVar9) && ((((int)pvVar5 - (uint)pvVar8 | (uint)pvVar8) & 1) == 0)) {
      uVar9 = uVar9 & 0x7ffffffffffffffe;
      pvVar8 = (void *)((long)pvVar8 + uVar9 * -2);
      do {
        uVar9 = uVar9 - 2;
      } while (uVar9 != 0);
    }
    while (pvVar8 != pvVar5) {
      pvVar8 = (void *)((long)pvVar8 + -2);
      if (pvVar8 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    *(void **)(param_1 + 0x30) = pvVar5;
    operator_delete(pvVar5);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  *(undefined8 *)(param_1 + 0x28) = *param_2;
  *(undefined8 *)(param_1 + 0x30) = param_2[1];
  *(undefined8 *)(param_1 + 0x38) = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  puVar3 = *(ushort **)(param_1 + 0x30);
  puVar4 = *(ushort **)(param_1 + 0x28);
  do {
    if (puVar4 == puVar3) {
      return;
    }
    puVar11 = puVar4 + 1;
    local_24 = (uint)*puVar4;
    if (puVar11 != puVar3) {
      uVar7 = 0;
      do {
        uVar1 = (uint)*puVar11 + ~(uint)*puVar4;
        if (0xf < (uVar1 & 0xffff)) break;
        puVar11 = puVar11 + 1;
        uVar7 = uVar7 | 1 << (ulong)(uVar1 & 0x1f);
        local_24 = CONCAT22((short)uVar7,(undefined2)local_24);
      } while (puVar11 != puVar3);
    }
    puVar2 = *(uint **)(param_1 + 0x18);
    if (puVar2 < *(uint **)(param_1 + 0x20)) {
      if (puVar2 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar6 = puVar2 + 1;
      *puVar2 = local_24;
    }
    else {
      puVar6 = (uint *)FUN_007cecb4(param_1 + 0x10,&local_24);
    }
    *(uint **)(param_1 + 0x18) = puVar6;
    puVar4 = puVar11;
  } while( true );
}


// ===== 007cec84  FUN_007cec84 =====

void FUN_007cec84(void)

{
  return;
}


// ===== 007cec8c  FUN_007cec8c =====

void FUN_007cec8c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x7cec94);
  (*pcVar1)();
}


// ===== 007cec94  FUN_007cec94 =====

void FUN_007cec94(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x7cec9c);
  (*pcVar1)();
}


// ===== 007cec9c  FUN_007cec9c =====

void FUN_007cec9c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 007cecb4  FUN_007cecb4 =====

undefined4 * FUN_007cecb4(long *param_1,undefined4 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  size_t __n;
  ulong uVar4;
  ulong uVar5;
  undefined4 *puVar6;
  void *__dest;
  
  puVar6 = (undefined4 *)(param_1[1] - *param_1);
  uVar1 = ((long)puVar6 >> 2) + 1;
  if (uVar1 >> 0x3e != 0) {
    FUN_007cec9c();
LAB_007ceda4:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  uVar4 = param_1[2] - *param_1;
  uVar5 = (long)uVar4 >> 1;
  if (uVar5 <= uVar1) {
    uVar5 = uVar1;
  }
  if (0x7ffffffffffffffb < uVar4) {
    uVar5 = 0x3fffffffffffffff;
  }
  if (uVar5 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar5 >> 0x3e != 0) goto LAB_007ceda4;
    pvVar2 = operator_new(uVar5 << 2);
    puVar6 = (undefined4 *)((long)pvVar2 + (long)puVar6);
  }
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = *param_2;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar6 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(puVar6 + 1);
    param_1[2] = (long)((long)pvVar2 + uVar5 * 4);
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


// ===== 007ceda8  FUN_007ceda8 =====

void FUN_007ceda8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d37c48;
  param_1[1] = 0;
  return;
}


// ===== 007cedbc  FUN_007cedbc =====

void FUN_007cedbc(void)

{
  return;
}


// ===== 007cedc4  FUN_007cedc4 =====

void FUN_007cedc4(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 007cedd0  FUN_007cedd0 =====

bool FUN_007cedd0(undefined8 param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(param_2 + 4);
  if (uVar1 < 8) {
    uVar2 = FUN_004022fc();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../modules/rtp_rtcp/source/rtcp_packet/pli.cc",0x1a2,
                   "Packet is too small to be a valid PLI packet");
    }
  }
  else {
    FUN_007cef14(param_1,*(undefined8 *)(param_2 + 8));
  }
  return 7 < uVar1;
}


// ===== 007cee38  FUN_007cee38 =====

undefined8 FUN_007cee38(void)

{
  return 0xc;
}


// ===== 007cee44  FUN_007cee44 =====

bool FUN_007cee44(long *param_1,long param_2,long *param_3,ulong param_4,undefined8 param_5,
                 undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  do {
    lVar4 = *param_3;
    lVar1 = (**(code **)(*param_1 + 0x10))(param_1);
    if ((ulong)(lVar1 + lVar4) <= param_4) {
      uVar3 = FUN_007cd5b4(param_1);
      FUN_007cd5e0(1,0xce,uVar3,param_2,param_3);
      FUN_007cef34(param_1,param_2 + *param_3);
      *param_3 = *param_3 + 8;
      break;
    }
    uVar2 = FUN_007cd570(param_1,param_2,param_3,param_5,param_6);
  } while ((uVar2 & 1) != 0);
  return (ulong)(lVar1 + lVar4) <= param_4;
}


// ===== 007cef14  FUN_007cef14 =====

void FUN_007cef14(long param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
  *(uint *)(param_1 + 8) = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_2[1] & 0xff00ff00) >> 8 | (param_2[1] & 0xff00ff) << 8;
  *(uint *)(param_1 + 0xc) = uVar1 >> 0x10 | uVar1 << 0x10;
  return;
}


// ===== 007cef34  FUN_007cef34 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007cef34(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  auVar4 = _DAT_001f3910;
  uVar1 = *(undefined4 *)(param_1 + 8);
  auVar2._4_4_ = uVar1;
  auVar2._0_4_ = uVar1;
  auVar2._8_4_ = uVar1;
  auVar2._12_4_ = uVar1;
  auVar2 = NEON_ushl(auVar2,_DAT_001f3910,4);
  *param_2 = CONCAT13(auVar2[0xc],CONCAT12(auVar2[8],CONCAT11(auVar2[4],auVar2[0])));
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  auVar3._4_4_ = uVar1;
  auVar3._0_4_ = uVar1;
  auVar3._8_4_ = uVar1;
  auVar3._12_4_ = uVar1;
  auVar4 = NEON_ushl(auVar3,auVar4,4);
  param_2[1] = CONCAT13(auVar4[0xc],CONCAT12(auVar4[8],CONCAT11(auVar4[4],auVar4[0])));
  return;
}


// ===== 007cef74  FUN_007cef74 =====

void FUN_007cef74(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_00d37c78;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  return;
}


// ===== 007cef94  FUN_007cef94 =====

void FUN_007cef94(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = (void *)param_1[2];
  *param_1 = &PTR_FUN_00d37c78;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  pvVar2 = (void *)param_1[3];
  uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2) * 0x1249249249249249) >> 2;
  uVar4 = (long)pvVar2 * -0x1249249249249249 - 4U >> 2;
  if (uVar4 <= uVar3) {
    uVar3 = uVar4;
  }
  if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 3U) == 0)) {
    uVar3 = uVar3 & 0x3ffffffffffffffe;
    pvVar2 = (void *)((long)pvVar2 + uVar3 * -0x1c);
    do {
      uVar3 = uVar3 - 2;
    } while (uVar3 != 0);
  }
  do {
    if (pvVar2 == pvVar1) {
      param_1[3] = pvVar1;
      operator_delete(pvVar1);
      return;
    }
    pvVar2 = (void *)((long)pvVar2 + -0x1c);
  } while (pvVar2 != (void *)0x0);
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 007cf068  FUN_007cf068 =====

void FUN_007cf068(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = (void *)param_1[2];
  *param_1 = &PTR_FUN_00d37c78;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[3];
    uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2) * 0x1249249249249249) >> 2;
    uVar4 = (long)pvVar2 * -0x1249249249249249 - 4U >> 2;
    if (uVar4 <= uVar3) {
      uVar3 = uVar4;
    }
    if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 3U) == 0)) {
      uVar3 = uVar3 & 0x3ffffffffffffffe;
      pvVar2 = (void *)((long)pvVar2 + uVar3 * -0x1c);
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
    while (pvVar2 != pvVar1) {
      pvVar2 = (void *)((long)pvVar2 + -0x1c);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    param_1[3] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 007cf150  FUN_007cf150 =====

bool FUN_007cf150(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  
  uVar2 = *(uint *)(param_2 + 4);
  uVar6 = (uint)*(byte *)(param_2 + 1) * 0x18 | 4;
  if (uVar2 < uVar6) {
    uVar4 = FUN_004022fc();
    if ((uVar4 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../modules/rtp_rtcp/source/rtcp_packet/receiver_report.cc",
                   0x19a,"Packet is too small to contain all the data.");
    }
  }
  else {
    uVar3 = (**(uint **)(param_2 + 8) & 0xff00ff00) >> 8 |
            (**(uint **)(param_2 + 8) & 0xff00ff) << 8;
    *(uint *)(param_1 + 8) = uVar3 >> 0x10 | uVar3 << 0x10;
    lVar7 = *(long *)(param_2 + 8);
    FUN_007cf224(param_1 + 0x10);
    lVar5 = *(long *)(param_1 + 0x10);
    lVar1 = *(long *)(param_1 + 0x18);
    if (lVar5 != lVar1) {
      lVar7 = lVar7 + 4;
      do {
        FUN_007d006c(lVar5,lVar7,0x18);
        lVar5 = lVar5 + 0x1c;
        lVar7 = lVar7 + 0x18;
      } while (lVar5 != lVar1);
    }
  }
  return uVar6 <= uVar2;
}


// ===== 007cf224  FUN_007cf224 =====

void FUN_007cf224(long *param_1,ulong param_2)

{
  bool bVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  puVar11 = (undefined8 *)*param_1;
  puVar10 = (undefined8 *)param_1[1];
  lVar14 = (long)puVar10 - (long)puVar11;
  bVar1 = param_2 < (ulong)((lVar14 >> 2) * 0x6db6db6db6db6db7);
  lVar12 = param_2 + (lVar14 >> 2) * -0x6db6db6db6db6db7;
  if (bVar1 || lVar12 == 0) {
    if (bVar1) {
      puVar6 = (undefined8 *)((long)puVar11 + param_2 * 0x1c);
      uVar3 = (ulong)(((long)puVar6 - (long)puVar10) * 0x1249249249249249) >> 2;
      uVar7 = (long)puVar10 * -0x1249249249249249 - 4U >> 2;
      if (uVar7 <= uVar3) {
        uVar3 = uVar7;
      }
      if ((1 < uVar3) && ((((int)puVar11 - (int)puVar10 | -(int)puVar10) & 3U) == 0)) {
        uVar3 = uVar3 & 0x3ffffffffffffffe;
        puVar10 = (undefined8 *)((long)puVar10 + uVar3 * -0x1c);
        do {
          uVar3 = uVar3 - 2;
        } while (uVar3 != 0);
      }
      do {
        if (puVar10 == puVar6) {
          param_1[1] = (long)puVar6;
          return;
        }
        puVar10 = (undefined8 *)((long)puVar10 + -0x1c);
      } while (puVar10 != (undefined8 *)0x0);
LAB_007cf3a8:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
  }
  else {
    lVar4 = param_1[2] - (long)puVar11 >> 2;
    uVar3 = lVar4 * 0x6db6db6db6db6db7;
    if (uVar3 < param_2) {
      if (param_2 < 0x924924924924925) {
        uVar7 = lVar4 * -0x2492492492492492;
        if (uVar7 < param_2 || uVar7 - param_2 == 0) {
          uVar7 = param_2;
        }
        if (0x492492492492491 < uVar3) {
          uVar7 = 0x924924924924924;
        }
        if (uVar7 < 0x924924924924925) {
          pvVar2 = operator_new(uVar7 * 0x1c);
          lVar4 = (long)pvVar2 + lVar14;
          lVar12 = lVar12 * 0x1c;
          if (lVar12 == 0) {
            lVar13 = (long)pvVar2 + lVar14;
          }
          else {
            lVar13 = lVar4 + lVar12;
            lVar14 = lVar4;
            do {
              if (lVar14 == 0) goto LAB_007cf50c;
              FUN_007d0054(lVar14);
              lVar12 = lVar12 + -0x1c;
              lVar14 = lVar14 + 0x1c;
            } while (lVar12 != 0);
            puVar11 = (undefined8 *)*param_1;
            puVar10 = (undefined8 *)param_1[1];
            lVar14 = (long)puVar10 - (long)puVar11;
          }
          puVar6 = puVar11;
          puVar8 = (undefined8 *)(lVar4 - lVar14);
          if (puVar11 != puVar10) {
            do {
              if (puVar8 == (undefined8 *)0x0) goto LAB_007cf50c;
              uVar15 = *(undefined8 *)((long)puVar6 + 0xc);
              puVar5 = (undefined8 *)((long)puVar6 + 0x1c);
              uVar17 = puVar6[1];
              uVar16 = *puVar6;
              *(undefined8 *)((long)puVar8 + 0x14) = *(undefined8 *)((long)puVar6 + 0x14);
              *(undefined8 *)((long)puVar8 + 0xc) = uVar15;
              puVar8[1] = uVar17;
              *puVar8 = uVar16;
              puVar6 = puVar5;
              puVar8 = (undefined8 *)((long)puVar8 + 0x1c);
            } while (puVar5 != puVar10);
            uVar3 = (ulong)((long)puVar11 * -0x2db6db6db6db6db7) >> 2;
            uVar9 = ((long)puVar10 - (long)puVar11) * 0x2db6db6db6db6db7 - 4U >> 2;
            if (uVar9 <= uVar3) {
              uVar3 = uVar9;
            }
            puVar6 = puVar11;
            if ((1 < uVar3) && ((((int)puVar10 - (int)puVar11 | -(int)puVar11) & 3U) == 0)) {
              uVar3 = uVar3 & 0x3ffffffffffffffe;
              puVar6 = (undefined8 *)((long)puVar11 + uVar3 * 0x1c);
              do {
                uVar3 = uVar3 - 2;
              } while (uVar3 != 0);
            }
            do {
              if (puVar6 == (undefined8 *)0x0) goto LAB_007cf3a8;
              puVar6 = (undefined8 *)((long)puVar6 + 0x1c);
            } while (puVar6 != puVar10);
          }
          *param_1 = lVar4 - lVar14;
          param_1[1] = lVar13;
          param_1[2] = (long)((long)pvVar2 + uVar7 * 0x1c);
          if (puVar11 == (undefined8 *)0x0) {
            return;
          }
          operator_delete(puVar11);
          return;
        }
      }
      else {
        FUN_007cf80c();
      }
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    lVar12 = lVar12 * 0x1c;
    puVar11 = puVar10;
    if (lVar12 != 0) {
      puVar11 = (undefined8 *)((long)puVar10 + lVar12);
      do {
        if (puVar10 == (undefined8 *)0x0) {
LAB_007cf50c:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        FUN_007d0054(puVar10);
        lVar12 = lVar12 + -0x1c;
        puVar10 = (undefined8 *)((long)puVar10 + 0x1c);
      } while (lVar12 != 0);
    }
    param_1[1] = (long)puVar11;
  }
  return;
}


// ===== 007cf528  FUN_007cf528 =====

long FUN_007cf528(long param_1)

{
  return ((ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10)) >> 2) * 0x4924924924924928
         + 8;
}


// ===== 007cf554  FUN_007cf554 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_007cf554(long *param_1,long param_2,long *param_3,ulong param_4,undefined8 param_5,
                 undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  
  while( true ) {
    lVar8 = *param_3;
    lVar5 = (**(code **)(*param_1 + 0x10))(param_1);
    if ((ulong)(lVar5 + lVar8) <= param_4) break;
    uVar6 = FUN_007cd570(param_1,param_2,param_3,param_5,param_6);
    if ((uVar6 & 1) == 0) goto LAB_007cf668;
  }
  lVar1 = param_1[2];
  lVar2 = param_1[3];
  uVar7 = FUN_007cd5b4(param_1);
  FUN_007cd5e0((lVar2 - lVar1 >> 2) * 0x6db6db6db6db6db7,0xc9,uVar7,param_2,param_3);
  uVar4 = (undefined4)param_1[1];
  auVar9._4_4_ = uVar4;
  auVar9._0_4_ = uVar4;
  auVar9._8_4_ = uVar4;
  auVar9._12_4_ = uVar4;
  auVar9 = NEON_ushl(auVar9,_DAT_001f3910,4);
  *(uint *)(param_2 + *param_3) =
       CONCAT13(auVar9[0xc],CONCAT12(auVar9[8],CONCAT11(auVar9[4],auVar9[0])));
  lVar1 = *param_3 + 4;
  *param_3 = lVar1;
  lVar3 = param_1[3];
  for (lVar2 = param_1[2]; lVar2 != lVar3; lVar2 = lVar2 + 0x1c) {
    FUN_007d0134(lVar2,param_2 + lVar1);
    lVar1 = *param_3 + 0x18;
    *param_3 = lVar1;
  }
LAB_007cf668:
  return (ulong)(lVar5 + lVar8) <= param_4;
}


// ===== 007cf68c  FUN_007cf68c =====

bool FUN_007cf68c(long param_1,long *param_2)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar3 = *param_2;
  uVar6 = (param_2[1] - lVar3 >> 2) * 0x6db6db6db6db6db7;
  if (uVar6 < 0x20) {
    pvVar1 = *(void **)(param_1 + 0x10);
    if (pvVar1 != (void *)0x0) {
      pvVar2 = *(void **)(param_1 + 0x18);
      uVar4 = (ulong)(((long)pvVar1 - (long)pvVar2) * 0x1249249249249249) >> 2;
      uVar5 = (long)pvVar2 * -0x1249249249249249 - 4U >> 2;
      if (uVar5 <= uVar4) {
        uVar4 = uVar5;
      }
      if ((1 < uVar4) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 3U) == 0)) {
        uVar4 = uVar4 & 0x3ffffffffffffffe;
        pvVar2 = (void *)((long)pvVar2 + uVar4 * -0x1c);
        do {
          uVar4 = uVar4 - 2;
        } while (uVar4 != 0);
      }
      while (pvVar2 != pvVar1) {
        pvVar2 = (void *)((long)pvVar2 + -0x1c);
        if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      *(void **)(param_1 + 0x18) = pvVar1;
      operator_delete(pvVar1);
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      lVar3 = *param_2;
    }
    *(long *)(param_1 + 0x10) = lVar3;
    *(long *)(param_1 + 0x18) = param_2[1];
    *(long *)(param_1 + 0x20) = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  else {
    uVar4 = FUN_004022fc();
    if ((uVar4 & 1) == 0) {
      FUN_00623bb0(&DAT_001f6d4b,"../../modules/rtp_rtcp/source/rtcp_packet/receiver_report.cc",
                   0x34a,"Too many report blocks (",
                   (param_2[1] - *param_2 >> 2) * 0x6db6db6db6db6db7,") for receiver report.");
    }
  }
  return uVar6 < 0x20;
}


// ===== 007cf80c  FUN_007cf80c =====

void FUN_007cf80c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 007cf824  FUN_007cf824 =====

void FUN_007cf824(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d37ca8;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  return;
}


// ===== 007cf840  FUN_007cf840 =====

void FUN_007cf840(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = (void *)param_1[3];
  *param_1 = &PTR_FUN_00d37ca8;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  pvVar2 = (void *)param_1[4];
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
      param_1[4] = pvVar1;
      operator_delete(pvVar1);
      return;
    }
    pvVar2 = (void *)((long)pvVar2 + -4);
  } while (pvVar2 != (void *)0x0);
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 007cf8f4  FUN_007cf8f4 =====

void FUN_007cf8f4(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = (void *)param_1[3];
  *param_1 = &PTR_FUN_00d37ca8;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[4];
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
    param_1[4] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 007cf9bc  FUN_007cf9bc =====

undefined4 FUN_007cf9bc(long param_1,long param_2)

{
  void *pvVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  uint *puVar5;
  uint *puVar6;
  ulong uVar7;
  void *pvVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  uint *puVar13;
  char *local_68;
  undefined8 uStack_60;
  undefined1 *local_58;
  undefined1 uStack_31;
  
  if (*(uint *)(param_2 + 4) < 0x10) {
    uVar4 = FUN_004022fc();
    if ((uVar4 & 1) == 0) {
      FUN_00623bb0(&DAT_001f6d4b,"../../modules/rtp_rtcp/source/rtcp_packet/remb.cc",0x1c2,
                   "Payload length ",*(undefined4 *)(param_2 + 4)," is too small for Remb packet.");
    }
  }
  else {
    lVar12 = *(long *)(param_2 + 8);
    uVar11 = (*(uint *)(lVar12 + 8) & 0xff00ff00) >> 8 | (*(uint *)(lVar12 + 8) & 0xff00ff) << 8;
    if ((uVar11 >> 0x10 | uVar11 << 0x10) == 0x52454d42) {
      bVar2 = *(byte *)(lVar12 + 0xc);
      uVar4 = (ulong)bVar2;
      if (uVar4 * 4 + 0x10 == (ulong)*(uint *)(param_2 + 4)) {
        FUN_007cef14(param_1,lVar12);
        uVar10 = (ulong)(*(byte *)(lVar12 + 0xd) >> 2);
        uVar9 = (ulong)((uint)(*(ushort *)(lVar12 + 0xe) >> 8) |
                       (*(ushort *)(lVar12 + 0xe) & 0xff00ff) << 8) |
                ((ulong)*(byte *)(lVar12 + 0xd) & 3) << 0x10;
        uVar7 = uVar9 << uVar10;
        *(ulong *)(param_1 + 0x10) = uVar7;
        if ((-1 < (long)uVar7) && (uVar7 >> uVar10 == uVar9)) {
          puVar13 = (uint *)(lVar12 + 0x10);
          pvVar1 = *(void **)(param_1 + 0x18);
          pvVar8 = *(void **)(param_1 + 0x20);
          uVar7 = (ulong)((long)pvVar8 + (-4 - ((long)pvVar8 << 0x3e))) >> 2;
          uVar9 = (ulong)(((long)pvVar1 - (long)pvVar8 << 0x3e) - ((long)pvVar1 - (long)pvVar8)) >>
                  2;
          if (uVar7 <= uVar9) {
            uVar9 = uVar7;
          }
          if ((1 < uVar9) && ((((int)pvVar1 - (int)pvVar8 | -(int)pvVar8) & 3U) == 0)) {
            uVar9 = uVar9 & 0x3ffffffffffffffe;
            pvVar8 = (void *)((long)pvVar8 + uVar9 * -4);
            do {
              uVar9 = uVar9 - 2;
            } while (uVar9 != 0);
          }
          while (pvVar8 != pvVar1) {
            pvVar8 = (void *)((long)pvVar8 + -4);
            if (pvVar8 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                        );
            }
          }
          *(void **)(param_1 + 0x20) = pvVar1;
          if ((ulong)(*(long *)(param_1 + 0x28) - (long)pvVar1 >> 2) < uVar4) {
            pvVar8 = operator_new(uVar4 * 4);
            *(void **)(param_1 + 0x18) = pvVar8;
            *(void **)(param_1 + 0x20) = pvVar8;
            *(void **)(param_1 + 0x28) = (void *)((long)pvVar8 + uVar4 * 4);
            if (pvVar1 != (void *)0x0) {
              operator_delete(pvVar1);
            }
          }
          if (bVar2 != 0) {
            uVar11 = 0;
            puVar5 = *(uint **)(param_1 + 0x20);
            do {
              uVar3 = (*puVar13 & 0xff00ff00) >> 8 | (*puVar13 & 0xff00ff) << 8;
              uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
              local_68 = (char *)CONCAT44(local_68._4_4_,uVar3);
              if (puVar5 < *(uint **)(param_1 + 0x28)) {
                if (puVar5 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
                  std::__Cr::__libcpp_verbose_abort
                            ("%s",
                             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                            );
                }
                puVar6 = puVar5 + 1;
                *puVar5 = uVar3;
              }
              else {
                puVar6 = (uint *)FUN_007cff60((undefined8 *)(param_1 + 0x18),&local_68);
              }
              uVar11 = uVar11 + 1;
              puVar13 = puVar13 + 1;
              *(uint **)(param_1 + 0x20) = puVar6;
              puVar5 = puVar6;
            } while (uVar11 < bVar2);
            return 1;
          }
          return 1;
        }
        uVar4 = FUN_004249b0();
        if ((uVar4 & 1) == 0) {
          FUN_00623bb0(&DAT_00214e34,"../../modules/rtp_rtcp/source/rtcp_packet/remb.cc",0x283,
                       "Invalid remb bitrate value : ",uVar9,&DAT_001a6bc7,uVar10);
        }
      }
      else {
        uVar9 = FUN_004022fc();
        if ((uVar9 & 1) == 0) {
          local_58 = &uStack_31;
          local_68 = "../../modules/rtp_rtcp/source/rtcp_packet/remb.cc";
          uStack_60 = 0x21a;
          FUN_00623bb0(&DAT_00214e2d,"../../modules/rtp_rtcp/source/rtcp_packet/remb.cc",0x21a,
                       "Payload size ",*(undefined4 *)(param_2 + 4)," does not match ",uVar4,
                       " ssrcs.");
        }
      }
    }
  }
  return 0;
}


// ===== 007cfc6c  FUN_007cfc6c =====

bool FUN_007cfc6c(long param_1,long *param_2)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar3 = *param_2;
  uVar6 = param_2[1] - lVar3;
  if (uVar6 < 0x400) {
    pvVar1 = *(void **)(param_1 + 0x18);
    if (pvVar1 != (void *)0x0) {
      pvVar2 = *(void **)(param_1 + 0x20);
      uVar5 = (ulong)((long)pvVar2 + (-4 - ((long)pvVar2 << 0x3e))) >> 2;
      uVar4 = (ulong)(((long)pvVar1 - (long)pvVar2 << 0x3e) - ((long)pvVar1 - (long)pvVar2)) >> 2;
      if (uVar5 <= uVar4) {
        uVar4 = uVar5;
      }
      if ((1 < uVar4) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 3U) == 0)) {
        uVar4 = uVar4 & 0x3ffffffffffffffe;
        pvVar2 = (void *)((long)pvVar2 + uVar4 * -4);
        do {
          uVar4 = uVar4 - 2;
        } while (uVar4 != 0);
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
      *(void **)(param_1 + 0x20) = pvVar1;
      operator_delete(pvVar1);
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      lVar3 = *param_2;
    }
    *(long *)(param_1 + 0x18) = lVar3;
    *(long *)(param_1 + 0x20) = param_2[1];
    *(long *)(param_1 + 0x28) = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  else {
    uVar4 = FUN_004022fc();
    if ((uVar4 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../modules/rtp_rtcp/source/rtcp_packet/remb.cc",0x312,
                   "Not enough space for all given SSRCs.");
    }
  }
  return uVar6 < 0x400;
}


// ===== 007cfd9c  FUN_007cfd9c =====

long FUN_007cfd9c(long param_1)

{
  return (*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) + 0x14;
}


// ===== 007cfdb0  FUN_007cfdb0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_007cfdb0(long *param_1,long param_2,long *param_3,ulong param_4,undefined8 param_5,
                 undefined8 param_6)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined4 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  char cVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined4 uVar15;
  undefined1 auVar16 [16];
  
  while( true ) {
    lVar14 = *param_3;
    lVar6 = (**(code **)(*param_1 + 0x10))(param_1);
    if ((ulong)(lVar6 + lVar14) <= param_4) break;
    uVar7 = FUN_007cd570(param_1,param_2,param_3,param_5,param_6);
    if ((uVar7 & 1) == 0) goto LAB_007cff3c;
  }
  (**(code **)(*param_1 + 0x10))(param_1);
  uVar8 = FUN_007cd5b4(param_1);
  FUN_007cd5e0(0xf,0xce,uVar8,param_2,param_3);
  FUN_007cef34(param_1,param_2 + *param_3);
  lVar9 = *param_3;
  uVar15 = (undefined4)DAT_001f54d8;
  *param_3 = lVar9 + 8;
  *(undefined4 *)(param_2 + lVar9 + 8) = uVar15;
  lVar10 = *param_3;
  lVar9 = lVar10 + 4;
  *param_3 = lVar9;
  uVar7 = param_1[2];
  if (uVar7 < 0x40000) {
    cVar11 = '\0';
  }
  else {
    uVar12 = 0;
    do {
      uVar13 = uVar7 >> 0x13;
      uVar7 = uVar7 >> 1;
      uVar12 = (ulong)((int)uVar12 + 1);
    } while (uVar13 != 0);
    cVar11 = (char)((uVar12 & 0xff) << 2);
  }
  lVar2 = param_1[4];
  lVar3 = param_1[3];
  *param_3 = lVar10 + 5;
  *(char *)(param_2 + lVar9) = (char)((uint)((int)lVar2 - (int)lVar3) >> 2);
  lVar9 = *param_3;
  *param_3 = lVar9 + 1;
  *(char *)(param_2 + lVar9) = cVar11 + (char)(uVar7 >> 0x10);
  *(ushort *)(param_2 + *param_3) =
       (ushort)(uVar7 >> 8) & 0xff | (ushort)(((uint)uVar7 & 0xff00ff) << 8);
  lVar9 = *param_3 + 2;
  *param_3 = lVar9;
  auVar4 = _DAT_001f3910;
  puVar5 = (undefined4 *)param_1[3];
  puVar1 = (undefined4 *)param_1[4];
  while (puVar5 != puVar1) {
    uVar15 = *puVar5;
    auVar16._4_4_ = uVar15;
    auVar16._0_4_ = uVar15;
    auVar16._8_4_ = uVar15;
    auVar16._12_4_ = uVar15;
    puVar5 = puVar5 + 1;
    auVar16 = NEON_ushl(auVar16,auVar4,4);
    *(uint *)(param_2 + lVar9) =
         CONCAT13(auVar16[0xc],CONCAT12(auVar16[8],CONCAT11(auVar16[4],auVar16[0])));
    lVar9 = *param_3 + 4;
    *param_3 = lVar9;
  }
LAB_007cff3c:
  return (ulong)(lVar6 + lVar14) <= param_4;
}


// ===== 007cff60  FUN_007cff60 =====

undefined4 * FUN_007cff60(long *param_1,undefined4 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  size_t __n;
  ulong uVar4;
  ulong uVar5;
  undefined4 *puVar6;
  void *__dest;
  
  puVar6 = (undefined4 *)(param_1[1] - *param_1);
  uVar1 = ((long)puVar6 >> 2) + 1;
  if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_005da79c();
  }
  uVar4 = param_1[2] - *param_1;
  uVar5 = (long)uVar4 >> 1;
  if (uVar5 <= uVar1) {
    uVar5 = uVar1;
  }
  if (0x7ffffffffffffffb < uVar4) {
    uVar5 = 0x3fffffffffffffff;
  }
  if (uVar5 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar5 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    pvVar2 = operator_new(uVar5 << 2);
    puVar6 = (undefined4 *)((long)pvVar2 + (long)puVar6);
  }
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = *param_2;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar6 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(puVar6 + 1);
    param_1[2] = (long)((long)pvVar2 + uVar5 * 4);
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


// ===== 007d0054  FUN_007d0054 =====

void FUN_007d0054(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[6] = 0;
  return;
}


// ===== 007d006c  FUN_007d006c =====

bool FUN_007d006c(uint *param_1,uint *param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  if (param_3 < 0x18) {
    uVar3 = FUN_004249b0();
    if ((uVar3 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../modules/rtp_rtcp/source/rtcp_packet/report_block.cc",0x1b3,
                   "Report Block should be 24 bytes long");
    }
  }
  else {
    uVar2 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
    *param_1 = uVar2 >> 0x10 | uVar2 << 0x10;
    *(char *)(param_1 + 1) = (char)param_2[1];
    uVar1 = (uint)*(byte *)((long)param_2 + 7) | (uint)*(byte *)((long)param_2 + 5) << 0x10 |
            (uint)*(byte *)((long)param_2 + 6) << 8;
    uVar2 = uVar1 | 0xff000000;
    if ((*(byte *)((long)param_2 + 5) & 0x80) == 0) {
      uVar2 = uVar1;
    }
    param_1[2] = uVar2;
    uVar2 = (param_2[2] & 0xff00ff00) >> 8 | (param_2[2] & 0xff00ff) << 8;
    param_1[3] = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (param_2[3] & 0xff00ff00) >> 8 | (param_2[3] & 0xff00ff) << 8;
    param_1[4] = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (param_2[4] & 0xff00ff00) >> 8 | (param_2[4] & 0xff00ff) << 8;
    param_1[5] = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (param_2[5] & 0xff00ff00) >> 8 | (param_2[5] & 0xff00ff) << 8;
    param_1[6] = uVar2 >> 0x10 | uVar2 << 0x10;
  }
  return 0x17 < param_3;
}


// ===== 007d0134  FUN_007d0134 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007d0134(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  auVar7 = _DAT_001f3910;
  uVar1 = *param_1;
  auVar2._4_4_ = uVar1;
  auVar2._0_4_ = uVar1;
  auVar2._8_4_ = uVar1;
  auVar2._12_4_ = uVar1;
  auVar2 = NEON_ushl(auVar2,_DAT_001f3910,4);
  *param_2 = CONCAT13(auVar2[0xc],CONCAT12(auVar2[8],CONCAT11(auVar2[4],auVar2[0])));
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 1);
  uVar1 = param_1[2];
  *(char *)((long)param_2 + 7) = (char)uVar1;
  *(char *)((long)param_2 + 5) = (char)((uint)uVar1 >> 0x10);
  *(char *)((long)param_2 + 6) = (char)((uint)uVar1 >> 8);
  uVar1 = param_1[3];
  auVar3._4_4_ = uVar1;
  auVar3._0_4_ = uVar1;
  auVar3._8_4_ = uVar1;
  auVar3._12_4_ = uVar1;
  auVar2 = NEON_ushl(auVar3,auVar7,4);
  param_2[2] = CONCAT13(auVar2[0xc],CONCAT12(auVar2[8],CONCAT11(auVar2[4],auVar2[0])));
  uVar1 = param_1[4];
  auVar4._4_4_ = uVar1;
  auVar4._0_4_ = uVar1;
  auVar4._8_4_ = uVar1;
  auVar4._12_4_ = uVar1;
  auVar2 = NEON_ushl(auVar4,auVar7,4);
  param_2[3] = CONCAT13(auVar2[0xc],CONCAT12(auVar2[8],CONCAT11(auVar2[4],auVar2[0])));
  uVar1 = param_1[5];
  auVar5._4_4_ = uVar1;
  auVar5._0_4_ = uVar1;
  auVar5._8_4_ = uVar1;
  auVar5._12_4_ = uVar1;
  auVar2 = NEON_ushl(auVar5,auVar7,4);
  param_2[4] = CONCAT13(auVar2[0xc],CONCAT12(auVar2[8],CONCAT11(auVar2[4],auVar2[0])));
  uVar1 = param_1[6];
  auVar6._4_4_ = uVar1;
  auVar6._0_4_ = uVar1;
  auVar6._8_4_ = uVar1;
  auVar6._12_4_ = uVar1;
  auVar7 = NEON_ushl(auVar6,auVar7,4);
  param_2[5] = CONCAT13(auVar7[0xc],CONCAT12(auVar7[8],CONCAT11(auVar7[4],auVar7[0])));
  return;
}


// ===== 007d01dc  FUN_007d01dc =====

bool FUN_007d01dc(long param_1,int param_2)

{
  ulong uVar1;
  
  if ((param_2 + 0x800000U & 0xff000000) == 0) {
    *(int *)(param_1 + 8) = param_2;
  }
  else {
    uVar1 = FUN_004022fc();
    if ((uVar1 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../modules/rtp_rtcp/source/rtcp_packet/report_block.cc",0x2aa,
                   "Cumulative lost is too big to fit into Report Block");
    }
  }
  return param_2 + 0x800000U >> 0x18 == 0;
}


// ===== 007d0240  FUN_007d0240 =====

void FUN_007d0240(long param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
  *(uint *)(param_1 + 8) = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_2[1] & 0xff00ff00) >> 8 | (param_2[1] & 0xff00ff) << 8;
  *(uint *)(param_1 + 0xc) = uVar1 >> 0x10 | uVar1 << 0x10;
  return;
}


// ===== 007d0260  FUN_007d0260 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007d0260(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  auVar4 = _DAT_001f3910;
  uVar1 = *(undefined4 *)(param_1 + 8);
  auVar2._4_4_ = uVar1;
  auVar2._0_4_ = uVar1;
  auVar2._8_4_ = uVar1;
  auVar2._12_4_ = uVar1;
  auVar2 = NEON_ushl(auVar2,_DAT_001f3910,4);
  *param_2 = CONCAT13(auVar2[0xc],CONCAT12(auVar2[8],CONCAT11(auVar2[4],auVar2[0])));
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  auVar3._4_4_ = uVar1;
  auVar3._0_4_ = uVar1;
  auVar3._8_4_ = uVar1;
  auVar3._12_4_ = uVar1;
  auVar4 = NEON_ushl(auVar3,auVar4,4);
  param_2[1] = CONCAT13(auVar4[0xc],CONCAT12(auVar4[8],CONCAT11(auVar4[4],auVar4[0])));
  return;
}


// ===== 007d02a0  FUN_007d02a0 =====

void FUN_007d02a0(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_00d37cd8;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 4;
  return;
}


// ===== 007d02c4  FUN_007d02c4 =====

/* WARNING: Removing unreachable block (ram,0x007d0320) */

void FUN_007d02c4(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar3 = (void *)param_1[2];
  *param_1 = &PTR_FUN_00d37cd8;
  if (pvVar3 == (void *)0x0) {
    return;
  }
  pvVar2 = (void *)param_1[3];
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
    } while (pvVar2 != pvVar3);
    pvVar1 = (void *)param_1[2];
  }
  param_1[3] = pvVar3;
  operator_delete(pvVar1);
  return;
}


// ===== 007d0380  FUN_007d0380 =====

/* WARNING: Removing unreachable block (ram,0x007d03dc) */

void FUN_007d0380(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar3 = (void *)param_1[2];
  *param_1 = &PTR_FUN_00d37cd8;
  if (pvVar3 != (void *)0x0) {
    pvVar2 = (void *)param_1[3];
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
      } while (pvVar2 != pvVar3);
      pvVar1 = (void *)param_1[2];
    }
    param_1[3] = pvVar3;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 007d0434  FUN_007d0434 =====

/* WARNING: Removing unreachable block (ram,0x007d0678) */
/* WARNING: Removing unreachable block (ram,0x007d07bc) */

undefined8 FUN_007d0434(long param_1,long param_2)

{
  byte *pbVar1;
  long lVar2;
  byte bVar3;
  char cVar4;
  ulong uVar5;
  void *pvVar6;
  undefined8 uVar7;
  char *pcVar8;
  bool bVar9;
  ulong uVar10;
  ulong uVar11;
  void *pvVar12;
  uint *puVar13;
  uint *puVar14;
  void *pvVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  byte bVar19;
  byte *pbVar20;
  void *local_80;
  void *pvStack_78;
  undefined8 local_70;
  
  uVar16 = *(uint *)(param_2 + 4);
  bVar19 = *(byte *)(param_2 + 1);
  local_80 = (void *)0x0;
  pvStack_78 = (void *)0x0;
  local_70 = 0;
  if ((uVar16 & 3) != 0) {
    uVar5 = FUN_004022fc();
    if ((uVar5 & 1) == 0) {
      FUN_00623bb0(&DAT_001f6d4b,"../../modules/rtp_rtcp/source/rtcp_packet/sdes.cc",0x282,
                   "Invalid payload size ",*(undefined4 *)(param_2 + 4),
                   " bytes for a valid Sdes packet. Size should be multiple of 4 bytes");
    }
    uVar16 = *(uint *)(param_2 + 4);
  }
  puVar13 = *(uint **)(param_2 + 8);
  FUN_007d0848(&local_80,bVar19);
  if (bVar19 == 0) {
    lVar18 = 4;
  }
  else {
    pbVar1 = (byte *)((long)puVar13 + (ulong)uVar16);
    uVar5 = 0;
    lVar18 = 4;
    do {
      if ((long)pbVar1 - (long)puVar13 < 8) {
        uVar17 = FUN_004022fc();
        if ((uVar17 & 1) == 0) {
          pcVar8 = "Not enough space left for chunk #";
          uVar7 = 0x2e2;
LAB_007d0780:
          FUN_00623bb0(&DAT_001f6643,"../../modules/rtp_rtcp/source/rtcp_packet/sdes.cc",uVar7,
                       pcVar8,uVar5 + 1);
        }
LAB_007d0784:
        pvVar15 = pvStack_78;
        if (local_80 == (void *)0x0) {
          return 0;
        }
        do {
          if (local_80 == pvVar15) {
            pvStack_78 = local_80;
            operator_delete(local_80);
            return 0;
          }
          pvVar15 = (void *)((long)pvVar15 + -0x20);
        } while (pvVar15 != (void *)0x0);
        goto LAB_007d080c;
      }
      if ((ulong)((long)pvStack_78 - (long)local_80 >> 5) <= uVar5) goto LAB_007d0820;
      uVar16 = (*puVar13 & 0xff00ff00) >> 8 | (*puVar13 & 0xff00ff) << 8;
      *(uint *)((long)local_80 + uVar5 * 0x20) = uVar16 >> 0x10 | uVar16 << 0x10;
      puVar14 = puVar13 + 1;
      cVar4 = (char)*puVar14;
      pbVar20 = (byte *)((long)puVar13 + 5);
      if (cVar4 == '\0') {
LAB_007d05cc:
        uVar17 = FUN_004022fc();
        if ((uVar17 & 1) == 0) {
          if ((ulong)((long)pvStack_78 - (long)local_80 >> 5) <= uVar5) {
LAB_007d0820:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                      );
          }
          FUN_00623bb0(&DAT_001f6220,"../../modules/rtp_rtcp/source/rtcp_packet/sdes.cc",0x44a,
                       "CNAME not found for ssrc ",*(undefined4 *)((long)local_80 + uVar5 * 0x20));
        }
        bVar19 = bVar19 - 1;
        uVar17 = (ulong)bVar19;
        FUN_007d0848(&local_80,uVar17);
      }
      else {
        bVar9 = false;
        do {
          if (pbVar1 <= pbVar20) {
            uVar17 = FUN_004022fc();
            if ((uVar17 & 1) == 0) {
              FUN_00623bb0(&DAT_001f6d4b,"../../modules/rtp_rtcp/source/rtcp_packet/sdes.cc",0x332,
                           "Unexpected end of packet while reading chunk #",uVar5 + 1,
                           ". Expected to find size of the text.");
            }
            goto LAB_007d0784;
          }
          bVar3 = *pbVar20;
          uVar17 = (ulong)bVar3;
          lVar2 = (long)puVar14 + 2;
          puVar14 = (uint *)(lVar2 + uVar17);
          pbVar20 = (byte *)((long)puVar14 + 1);
          if (pbVar1 < pbVar20) {
            uVar11 = FUN_004022fc();
            if ((uVar11 & 1) == 0) {
              FUN_00623bb0(&DAT_00214e34,"../../modules/rtp_rtcp/source/rtcp_packet/sdes.cc",0x372,
                           "Unexpected end of packet while reading chunk #",uVar5 + 1,
                           ". Expected to find text of size ",uVar17);
            }
            goto LAB_007d0784;
          }
          if (cVar4 == '\x01') {
            if (bVar9) {
              uVar17 = FUN_004022fc();
              if ((uVar17 & 1) != 0) goto LAB_007d0784;
              pcVar8 = "Found extra CNAME for same ssrc in chunk #";
              uVar7 = 0x3aa;
              goto LAB_007d0780;
            }
            if ((ulong)((long)pvStack_78 - (long)local_80 >> 5) <= uVar5) goto LAB_007d0820;
            if ((lVar2 == 0) && (bVar3 != 0)) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/string:2845: libc++ Hardening assertion __n == 0 || __s != nullptr failed: string::assign received nullptr\n"
                        );
            }
            FUN_00547b08((long)local_80 + uVar5 * 0x20 + 8,lVar2,uVar17);
            bVar9 = true;
          }
          cVar4 = (char)*puVar14;
        } while (cVar4 != '\0');
        if (!bVar9) goto LAB_007d05cc;
        if ((ulong)((long)pvStack_78 - (long)local_80 >> 5) <= uVar5) goto LAB_007d0820;
        bVar3 = *(byte *)((long)local_80 + uVar5 * 0x20 + 0x1f);
        uVar17 = *(ulong *)((long)local_80 + uVar5 * 0x20 + 0x10);
        if ((bVar3 & 0x80) == 0) {
          uVar17 = (ulong)bVar3;
        }
        lVar18 = lVar18 + uVar17 + (uVar17 & 3 ^ 0xfffffffffffffffd) + 0xb;
        uVar17 = (ulong)bVar19;
        uVar5 = uVar5 + 1;
      }
      uVar10 = (long)pbVar1 - (long)pbVar20;
      uVar11 = uVar10 & 3;
      if ((long)uVar10 < 1) {
        uVar11 = -(-uVar10 & 3);
      }
      puVar13 = (uint *)(pbVar20 + uVar11);
    } while (uVar5 < uVar17);
  }
  pvVar15 = *(void **)(param_1 + 0x10);
  if (pvVar15 != (void *)0x0) {
    pvVar12 = *(void **)(param_1 + 0x18);
    pvVar6 = pvVar15;
    if (pvVar15 != pvVar12) {
      do {
        pvVar12 = (void *)((long)pvVar12 + -0x20);
        if (pvVar12 == (void *)0x0) {
LAB_007d080c:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      } while (pvVar12 != pvVar15);
      pvVar6 = *(void **)(param_1 + 0x10);
    }
    *(void **)(param_1 + 0x18) = pvVar15;
    operator_delete(pvVar6);
  }
  *(void **)(param_1 + 0x18) = pvStack_78;
  *(void **)(param_1 + 0x10) = local_80;
  *(undefined8 *)(param_1 + 0x20) = local_70;
  *(long *)(param_1 + 0x28) = lVar18;
  return 1;
}


// ===== 007d0848  FUN_007d0848 =====

/* WARNING: Removing unreachable block (ram,0x007d094c) */
/* WARNING: Removing unreachable block (ram,0x007d0994) */

void FUN_007d0848(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  void *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  void *local_38;
  
  lVar6 = *param_1;
  puVar3 = (undefined8 *)param_1[1];
  uVar7 = (long)puVar3 - lVar6 >> 5;
  lVar2 = param_2 - uVar7;
  if (param_2 < uVar7 || lVar2 == 0) {
    if (param_2 < uVar7) {
      puVar4 = (undefined8 *)(lVar6 + param_2 * 0x20);
      do {
        if (puVar4 == puVar3) {
          param_1[1] = (long)puVar4;
          return;
        }
        puVar3 = puVar3 + -4;
      } while (puVar3 != (undefined8 *)0x0);
LAB_007d09fc:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
  }
  else {
    uVar7 = param_1[2] - lVar6;
    if ((ulong)((long)uVar7 >> 5) < param_2) {
      if (param_2 >> 0x3b == 0) {
        uVar1 = (long)uVar7 >> 4;
        if ((ulong)((long)uVar7 >> 4) <= param_2) {
          uVar1 = param_2;
        }
        if (0x7fffffffffffffdf < uVar7) {
          uVar1 = 0x7ffffffffffffff;
        }
        if (uVar1 >> 0x3b == 0) {
          local_50 = operator_new(uVar1 * 0x20);
          lVar5 = lVar2 * 0x20;
          local_48 = (undefined8 *)((long)local_50 + ((long)puVar3 - lVar6));
          local_38 = (void *)((long)local_50 + uVar1 * 0x20);
          local_40 = local_48;
          if (lVar5 != 0) {
            local_40 = local_48 + lVar2 * 4;
            puVar3 = local_48;
            do {
              if (puVar3 == (undefined8 *)0x0) goto LAB_007d09e8;
              lVar5 = lVar5 + -0x20;
              puVar3[1] = 0;
              *puVar3 = 0;
              puVar3[3] = 0;
              puVar3[2] = 0;
              puVar3 = puVar3 + 4;
            } while (lVar5 != 0);
          }
          FUN_007d0e4c(param_1,&local_50);
          puVar3 = local_40;
          do {
            if (local_48 == puVar3) {
              if (local_50 == (void *)0x0) {
                return;
              }
              local_40 = puVar3;
              operator_delete(local_50);
              return;
            }
            puVar3 = puVar3 + -4;
          } while (puVar3 != (undefined8 *)0x0);
          goto LAB_007d09fc;
        }
      }
      else {
        FUN_007d0f58();
      }
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    lVar6 = lVar2 * 0x20;
    puVar4 = puVar3;
    if (lVar6 != 0) {
      puVar4 = puVar3 + lVar2 * 4;
      do {
        if (puVar3 == (undefined8 *)0x0) {
LAB_007d09e8:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        lVar6 = lVar6 + -0x20;
        puVar3[1] = 0;
        *puVar3 = 0;
        puVar3[3] = 0;
        puVar3[2] = 0;
        puVar3 = puVar3 + 4;
      } while (lVar6 != 0);
    }
    param_1[1] = (long)puVar4;
  }
  return;
}


// ===== 007d0a18  FUN_007d0a18 =====

bool FUN_007d0a18(long param_1,undefined4 param_2,undefined8 ***param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 ***__dest;
  undefined4 *puVar3;
  ulong uVar4;
  undefined8 **local_98;
  ulong uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 **local_78;
  ulong uStack_70;
  undefined8 local_68;
  
  puVar3 = *(undefined4 **)(param_1 + 0x18);
  uVar4 = (long)puVar3 - *(long *)(param_1 + 0x10);
  if (uVar4 < 0x3e0) {
    _local_80 = CONCAT44(0xaaaaaaaa,param_2);
    if (0x7ffffffffffffff6 < param_4) {
                    /* WARNING: Subroutine does not return */
      FUN_005d45ec();
    }
    if (param_4 < 0x17) {
      local_88 = CONCAT17((char)param_4,(undefined7)local_88);
      __dest = &local_98;
    }
    else {
      uVar2 = (param_4 & 0x7ffffffffffffff8) + 8;
      uVar1 = 0x19;
      if (uVar2 != 0x18) {
        uVar1 = uVar2;
      }
      __dest = (undefined8 ***)operator_new(uVar1);
      local_88 = uVar1 | 0x8000000000000000;
      local_98 = __dest;
      uStack_90 = param_4;
    }
    if ((undefined8 ***)((long)__dest + param_4) < __dest) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                );
    }
    if ((__dest <= param_3) && (param_3 < (undefined8 ***)((long)__dest + param_4))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
    memmove(__dest,param_3,param_4);
    *(undefined1 *)((long)__dest + param_4) = 0;
    uStack_70 = uStack_90;
    local_78 = local_98;
    local_68 = local_88;
    if (puVar3 < *(undefined4 **)(param_1 + 0x20)) {
      if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *puVar3 = param_2;
      if ((long)local_88 < 0) {
        FUN_005478d8(puVar3 + 2,local_98,uStack_90);
      }
      else {
        *(ulong *)(puVar3 + 6) = local_88;
        *(ulong *)(puVar3 + 4) = uStack_90;
        *(undefined8 ***)(puVar3 + 2) = local_98;
      }
      puVar3 = puVar3 + 8;
    }
    else {
      puVar3 = (undefined4 *)FUN_007d0f70((long *)(param_1 + 0x10),&local_80);
    }
    *(undefined4 **)(param_1 + 0x18) = puVar3;
    uVar2 = uStack_70;
    if (-1 < (long)local_68) {
      uVar2 = (long)local_68._7_1_;
    }
    *(ulong *)(param_1 + 0x28) =
         uVar2 + *(long *)(param_1 + 0x28) + (uVar2 & 3 ^ 0xfffffffffffffffd) + 0xb;
    if ((long)local_68._7_1_ < 0) {
      operator_delete(local_78);
    }
  }
  else {
    uVar2 = FUN_004022fc();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../modules/rtp_rtcp/source/rtcp_packet/sdes.cc",0x4ca,
                   "Max SDES chunks reached.");
    }
  }
  return uVar4 < 0x3e0;
}


// ===== 007d0c2c  FUN_007d0c2c =====

undefined8 FUN_007d0c2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}


// ===== 007d0c38  FUN_007d0c38 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_007d0c38(long *param_1,long param_2,long *param_3,ulong param_4,undefined8 param_5,
                 undefined8 param_6)

{
  long lVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  size_t sVar10;
  long lVar11;
  char cVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  while( true ) {
    lVar14 = *param_3;
    lVar5 = (**(code **)(*param_1 + 0x10))(param_1);
    if ((ulong)(lVar5 + lVar14) <= param_4) break;
    uVar6 = FUN_007cd570(param_1,param_2,param_3,param_5,param_6);
    if ((uVar6 & 1) == 0) goto LAB_007d0e00;
  }
  lVar13 = *param_3;
  lVar7 = (**(code **)(*param_1 + 0x10))(param_1);
  lVar11 = param_1[2];
  lVar1 = param_1[3];
  uVar8 = FUN_007cd5b4(param_1);
  FUN_007cd5e0(lVar1 - lVar11 >> 5,0xca,uVar8,param_2,param_3);
  uVar4 = _UNK_001f3918;
  uVar8 = _DAT_001f3910;
  puVar2 = (undefined8 *)param_1[3];
  lVar11 = *param_3;
  if ((undefined8 *)param_1[2] != puVar2) {
    puVar15 = (undefined8 *)param_1[2] + 1;
    do {
      auVar17._8_8_ = uVar4;
      auVar17._0_8_ = uVar8;
      uVar3 = *(undefined4 *)(puVar15 + -1);
      auVar16._4_4_ = uVar3;
      auVar16._0_4_ = uVar3;
      auVar16._8_4_ = uVar3;
      auVar16._12_4_ = uVar3;
      auVar17 = NEON_ushl(auVar16,auVar17,4);
      *(uint *)(param_2 + lVar11) =
           CONCAT13(auVar17[0xc],CONCAT12(auVar17[8],CONCAT11(auVar17[4],auVar17[0])));
      *(undefined1 *)(param_2 + *param_3 + 4) = 1;
      cVar12 = *(char *)((long)puVar15 + 0x17);
      if (cVar12 < '\0') {
        cVar12 = *(char *)(puVar15 + 1);
      }
      *(char *)(param_2 + *param_3 + 5) = cVar12;
      sVar10 = (size_t)*(char *)((long)puVar15 + 0x17);
      puVar9 = puVar15;
      if ((long)sVar10 < 0) {
        sVar10 = puVar15[1];
        puVar9 = (undefined8 *)*puVar15;
      }
      memcpy((void *)(param_2 + *param_3 + 6),puVar9,sVar10);
      lVar11 = (long)*(char *)((long)puVar15 + 0x17);
      if (lVar11 < 0) {
        lVar11 = puVar15[1];
      }
      lVar11 = lVar11 + *param_3 + 6;
      *param_3 = lVar11;
      uVar6 = (ulong)*(char *)((long)puVar15 + 0x17);
      if ((long)uVar6 < 0) {
        uVar6 = puVar15[1];
      }
      sVar10 = 4 - (uVar6 & 3 ^ 2);
      memset((void *)(param_2 + lVar11),0,sVar10);
      puVar9 = puVar15 + 3;
      puVar15 = puVar15 + 4;
      lVar11 = sVar10 + *param_3;
      *param_3 = lVar11;
    } while (puVar9 != puVar2);
  }
  if (lVar11 != lVar7 + lVar13) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/rtp_rtcp/source/rtcp_packet/sdes.cc",0xc4,"*index == index_end",
                 &DAT_001fb920);
  }
LAB_007d0e00:
  return (ulong)(lVar5 + lVar14) <= param_4;
}


// ===== 007d0e4c  FUN_007d0e4c =====

void FUN_007d0e4c(long *param_1,long *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined4 *puVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  
  puVar8 = (undefined4 *)*param_1;
  puVar2 = (undefined4 *)param_1[1];
  puVar1 = (undefined4 *)((long)puVar8 + (param_2[1] - (long)puVar2));
  puVar3 = puVar8;
  puVar5 = puVar1;
  if (puVar2 != puVar8) {
    do {
      if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *puVar5 = *puVar3;
      uVar11 = *(undefined8 *)(puVar3 + 4);
      uVar9 = *(undefined8 *)(puVar3 + 2);
      *(undefined8 *)(puVar5 + 6) = *(undefined8 *)(puVar3 + 6);
      *(undefined8 *)(puVar5 + 4) = uVar11;
      *(undefined8 *)(puVar5 + 2) = uVar9;
      *(undefined8 *)(puVar3 + 4) = 0;
      *(undefined8 *)(puVar3 + 6) = 0;
      *(undefined8 *)(puVar3 + 2) = 0;
      puVar3 = puVar3 + 8;
      puVar5 = puVar5 + 8;
    } while (puVar3 != puVar2);
    do {
      if (puVar8 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      if (*(char *)((long)puVar8 + 0x1f) < '\0') {
        operator_delete(*(void **)(puVar8 + 2));
      }
      puVar8 = puVar8 + 8;
    } while (puVar8 != puVar2);
  }
  param_2[1] = (long)puVar1;
  lVar4 = *param_1;
  lVar7 = param_1[2];
  param_1[1] = lVar4;
  lVar10 = param_2[1];
  lVar6 = param_2[3];
  param_1[1] = param_2[2];
  *param_1 = lVar10;
  param_1[2] = lVar6;
  param_2[2] = lVar4;
  param_2[3] = lVar7;
  *param_2 = lVar4;
  param_2[1] = lVar4;
  return;
}


// ===== 007d0f58  FUN_007d0f58 =====

void FUN_007d0f58(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 007d0f70  FUN_007d0f70 =====

/* WARNING: Removing unreachable block (ram,0x007d10ac) */

long FUN_007d0f70(long *param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *local_50;
  undefined4 *local_48;
  undefined4 *local_40;
  void *local_38;
  
  lVar5 = param_1[1] - *param_1;
  uVar1 = (lVar5 >> 5) + 1;
  if (uVar1 >> 0x3b == 0) {
    local_50 = (void *)0x0;
    uVar3 = param_1[2] - *param_1;
    uVar4 = (long)uVar3 >> 4;
    if (uVar4 <= uVar1) {
      uVar4 = uVar1;
    }
    if (0x7fffffffffffffdf < uVar3) {
      uVar4 = 0x7ffffffffffffff;
    }
    if (uVar4 != 0) {
      if (uVar4 >> 0x3b != 0) goto LAB_007d10ec;
      local_50 = operator_new(uVar4 << 5);
    }
    local_38 = (void *)((long)local_50 + uVar4 * 0x20);
    puVar2 = (undefined4 *)((long)local_50 + lVar5);
    local_48 = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *puVar2 = *param_2;
    if (*(char *)((long)param_2 + 0x1f) < '\0') {
      FUN_005478d8(puVar2 + 2,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
    }
    else {
      uVar7 = *(undefined8 *)(param_2 + 4);
      uVar6 = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(puVar2 + 6) = *(undefined8 *)(param_2 + 6);
      *(undefined8 *)(puVar2 + 4) = uVar7;
      *(undefined8 *)(puVar2 + 2) = uVar6;
    }
    local_40 = puVar2 + 8;
    FUN_007d0e4c(param_1,&local_50);
    lVar5 = param_1[1];
    puVar2 = local_40;
    do {
      if (local_48 == puVar2) {
        if (local_50 != (void *)0x0) {
          local_40 = puVar2;
          operator_delete(local_50);
        }
        return lVar5;
      }
      puVar2 = puVar2 + -8;
    } while (puVar2 != (undefined4 *)0x0);
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
  FUN_007d0f58();
LAB_007d10ec:
                    /* WARNING: Subroutine does not return */
  FUN_005d55a4();
}


// ===== 007d10f0  FUN_007d10f0 =====

void FUN_007d10f0(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_00d37d08;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


// ===== 007d1118  FUN_007d1118 =====

void FUN_007d1118(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = (void *)param_1[5];
  *param_1 = &PTR_FUN_00d37d08;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  pvVar2 = (void *)param_1[6];
  uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2) * 0x1249249249249249) >> 2;
  uVar4 = (long)pvVar2 * -0x1249249249249249 - 4U >> 2;
  if (uVar4 <= uVar3) {
    uVar3 = uVar4;
  }
  if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 3U) == 0)) {
    uVar3 = uVar3 & 0x3ffffffffffffffe;
    pvVar2 = (void *)((long)pvVar2 + uVar3 * -0x1c);
    do {
      uVar3 = uVar3 - 2;
    } while (uVar3 != 0);
  }
  do {
    if (pvVar2 == pvVar1) {
      param_1[6] = pvVar1;
      operator_delete(pvVar1);
      return;
    }
    pvVar2 = (void *)((long)pvVar2 + -0x1c);
  } while (pvVar2 != (void *)0x0);
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 007d11ec  FUN_007d11ec =====

void FUN_007d11ec(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = (void *)param_1[5];
  *param_1 = &PTR_FUN_00d37d08;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[6];
    uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2) * 0x1249249249249249) >> 2;
    uVar4 = (long)pvVar2 * -0x1249249249249249 - 4U >> 2;
    if (uVar4 <= uVar3) {
      uVar3 = uVar4;
    }
    if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 3U) == 0)) {
      uVar3 = uVar3 & 0x3ffffffffffffffe;
      pvVar2 = (void *)((long)pvVar2 + uVar3 * -0x1c);
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
    while (pvVar2 != pvVar1) {
      pvVar2 = (void *)((long)pvVar2 + -0x1c);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    param_1[6] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 007d12d4  FUN_007d12d4 =====

bool FUN_007d12d4(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  uint *puVar7;
  
  uVar4 = *(uint *)(param_2 + 4);
  uVar1 = (uint)*(byte *)(param_2 + 1) * 0x18 + 0x18;
  if (uVar4 < uVar1) {
    uVar6 = FUN_004022fc();
    if ((uVar6 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../modules/rtp_rtcp/source/rtcp_packet/sender_report.cc",0x1e2,
                   "Packet is too small to contain all the data.");
    }
  }
  else {
    puVar7 = *(uint **)(param_2 + 8);
    uVar5 = (*puVar7 & 0xff00ff00) >> 8 | (*puVar7 & 0xff00ff) << 8;
    *(uint *)(param_1 + 8) = uVar5 >> 0x10 | uVar5 << 0x10;
    uVar6 = (*(ulong *)(puVar7 + 1) & 0xff00ff00ff00ff00) >> 8 |
            (*(ulong *)(puVar7 + 1) & 0xff00ff00ff00ff) << 8;
    uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
    *(ulong *)(param_1 + 0x10) = uVar6 >> 0x20 | uVar6 << 0x20;
    uVar5 = (puVar7[3] & 0xff00ff00) >> 8 | (puVar7[3] & 0xff00ff) << 8;
    *(uint *)(param_1 + 0x18) = uVar5 >> 0x10 | uVar5 << 0x10;
    uVar5 = (puVar7[4] & 0xff00ff00) >> 8 | (puVar7[4] & 0xff00ff) << 8;
    *(uint *)(param_1 + 0x1c) = uVar5 >> 0x10 | uVar5 << 0x10;
    uVar5 = (puVar7[5] & 0xff00ff00) >> 8 | (puVar7[5] & 0xff00ff) << 8;
    *(uint *)(param_1 + 0x20) = uVar5 >> 0x10 | uVar5 << 0x10;
    FUN_007cf224(param_1 + 0x28);
    lVar3 = *(long *)(param_1 + 0x30);
    for (lVar2 = *(long *)(param_1 + 0x28); lVar2 != lVar3; lVar2 = lVar2 + 0x1c) {
      puVar7 = puVar7 + 6;
      FUN_007d006c(lVar2,puVar7,0x18);
    }
  }
  return uVar1 <= uVar4;
}


// ===== 007d13d4  FUN_007d13d4 =====

long FUN_007d13d4(long param_1)

{
  return ((ulong)(*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28)) >> 2) * 0x4924924924924928
         + 0x1c;
}


// ===== 007d1400  FUN_007d1400 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_007d1400(long *param_1,long param_2,long *param_3,ulong param_4,undefined8 param_5,
                 undefined8 param_6)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  while( true ) {
    lVar9 = *param_3;
    lVar5 = (**(code **)(*param_1 + 0x10))(param_1);
    if ((ulong)(lVar5 + lVar9) <= param_4) break;
    uVar6 = FUN_007cd570(param_1,param_2,param_3,param_5,param_6);
    if ((uVar6 & 1) == 0) goto LAB_007d15c4;
  }
  (**(code **)(*param_1 + 0x10))(param_1);
  lVar1 = param_1[5];
  lVar8 = param_1[6];
  uVar7 = FUN_007cd5b4(param_1);
  FUN_007cd5e0((lVar8 - lVar1 >> 2) * 0x6db6db6db6db6db7,200,uVar7,param_2,param_3);
  auVar14 = _DAT_001f3910;
  uVar4 = (undefined4)param_1[1];
  auVar10._4_4_ = uVar4;
  auVar10._0_4_ = uVar4;
  auVar10._8_4_ = uVar4;
  auVar10._12_4_ = uVar4;
  auVar10 = NEON_ushl(auVar10,_DAT_001f3910,4);
  *(uint *)(param_2 + *param_3) =
       CONCAT13(auVar10[0xc],CONCAT12(auVar10[8],CONCAT11(auVar10[4],auVar10[0])));
  lVar8 = param_1[2];
  lVar1 = param_2 + *param_3;
  *(char *)(lVar1 + 4) = (char)((ulong)lVar8 >> 0x38);
  *(char *)(lVar1 + 5) = (char)((ulong)lVar8 >> 0x30);
  *(char *)(lVar1 + 6) = (char)((ulong)lVar8 >> 0x28);
  *(char *)(lVar1 + 7) = (char)((ulong)lVar8 >> 0x20);
  uVar3 = (*(uint *)(param_1 + 2) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 2) & 0xff00ff) << 8;
  *(uint *)(param_2 + *param_3 + 8) = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar4 = (undefined4)param_1[3];
  auVar11._4_4_ = uVar4;
  auVar11._0_4_ = uVar4;
  auVar11._8_4_ = uVar4;
  auVar11._12_4_ = uVar4;
  auVar10 = NEON_ushl(auVar11,auVar14,4);
  *(uint *)(param_2 + *param_3 + 0xc) =
       CONCAT13(auVar10[0xc],CONCAT12(auVar10[8],CONCAT11(auVar10[4],auVar10[0])));
  uVar4 = *(undefined4 *)((long)param_1 + 0x1c);
  auVar12._4_4_ = uVar4;
  auVar12._0_4_ = uVar4;
  auVar12._8_4_ = uVar4;
  auVar12._12_4_ = uVar4;
  auVar10 = NEON_ushl(auVar12,auVar14,4);
  *(uint *)(param_2 + *param_3 + 0x10) =
       CONCAT13(auVar10[0xc],CONCAT12(auVar10[8],CONCAT11(auVar10[4],auVar10[0])));
  uVar4 = (undefined4)param_1[4];
  auVar13._4_4_ = uVar4;
  auVar13._0_4_ = uVar4;
  auVar13._8_4_ = uVar4;
  auVar13._12_4_ = uVar4;
  auVar14 = NEON_ushl(auVar13,auVar14,4);
  *(uint *)(param_2 + *param_3 + 0x14) =
       CONCAT13(auVar14[0xc],CONCAT12(auVar14[8],CONCAT11(auVar14[4],auVar14[0])));
  lVar1 = *param_3 + 0x18;
  *param_3 = lVar1;
  lVar2 = param_1[6];
  for (lVar8 = param_1[5]; lVar8 != lVar2; lVar8 = lVar8 + 0x1c) {
    FUN_007d0134(lVar8,param_2 + lVar1);
    lVar1 = *param_3 + 0x18;
    *param_3 = lVar1;
  }
LAB_007d15c4:
  return (ulong)(lVar5 + lVar9) <= param_4;
}


// ===== 007d15e8  FUN_007d15e8 =====

bool FUN_007d15e8(long param_1,long *param_2)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar3 = *param_2;
  uVar6 = (param_2[1] - lVar3 >> 2) * 0x6db6db6db6db6db7;
  if (uVar6 < 0x20) {
    pvVar1 = *(void **)(param_1 + 0x28);
    if (pvVar1 != (void *)0x0) {
      pvVar2 = *(void **)(param_1 + 0x30);
      uVar4 = (ulong)(((long)pvVar1 - (long)pvVar2) * 0x1249249249249249) >> 2;
      uVar5 = (long)pvVar2 * -0x1249249249249249 - 4U >> 2;
      if (uVar5 <= uVar4) {
        uVar4 = uVar5;
      }
      if ((1 < uVar4) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 3U) == 0)) {
        uVar4 = uVar4 & 0x3ffffffffffffffe;
        pvVar2 = (void *)((long)pvVar2 + uVar4 * -0x1c);
        do {
          uVar4 = uVar4 - 2;
        } while (uVar4 != 0);
      }
      while (pvVar2 != pvVar1) {
        pvVar2 = (void *)((long)pvVar2 + -0x1c);
        if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      *(void **)(param_1 + 0x30) = pvVar1;
      operator_delete(pvVar1);
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      lVar3 = *param_2;
    }
    *(long *)(param_1 + 0x28) = lVar3;
    *(long *)(param_1 + 0x30) = param_2[1];
    *(long *)(param_1 + 0x38) = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  else {
    uVar4 = FUN_004022fc();
    if ((uVar4 & 1) == 0) {
      FUN_00623bb0(&DAT_001f6d4b,"../../modules/rtp_rtcp/source/rtcp_packet/sender_report.cc",0x42a,
                   "Too many report blocks (",(param_2[1] - *param_2 >> 2) * 0x6db6db6db6db6db7,
                   ") for sender report.");
    }
  }
  return uVar6 < 0x20;
}


// ===== 007d1768  FUN_007d1768 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_007d1768(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 auVar6 [15];
  bool bVar7;
  bool bVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined4 uVar11;
  undefined1 auVar12 [16];
  
  if (param_1[0x18] == 1) {
    uVar4 = (uint)*(ushort *)(param_1 + 0x10) | (uint)*param_1 << 0xd;
  }
  else {
    if (*(long *)(param_1 + 0x10) != 0xe) {
      uVar11 = *(undefined4 *)param_1;
      uVar5 = *(long *)(param_1 + 0x10) - 7;
      auVar12[1] = 0;
      auVar12[0] = (byte)uVar11;
      auVar12[2] = (char)((uint)uVar11 >> 8);
      auVar12[3] = 0;
      auVar12[4] = (char)((uint)uVar11 >> 0x10);
      auVar12[5] = 0;
      auVar12[6] = (char)((uint)uVar11 >> 0x18);
      *(ulong *)(param_1 + 0x10) = uVar5;
      param_1[0x18] = 1;
      param_1[0x19] = 0;
      auVar10[8] = param_1[4];
      auVar10._0_8_ = 0xc000000000000000;
      auVar10[9] = 0;
      auVar10[10] = param_1[5];
      auVar10[0xb] = 0;
      auVar10._12_4_ = 0xc0000000;
      auVar6[0xe] = param_1[6];
      auVar6._0_14_ = auVar10._0_14_;
      auVar12[7] = 0;
      auVar12._8_7_ = auVar6._8_7_;
      auVar12[0xf] = 0;
      auVar10 = NEON_ushl(auVar12,_DAT_001f1fa0,2);
      auVar12 = NEON_ext(auVar10,auVar10,8,1);
      uVar9 = CONCAT17(auVar10[7] | auVar12[7],
                       CONCAT16(auVar10[6] | auVar12[6],
                                CONCAT15(auVar10[5] | auVar12[5],
                                         CONCAT14(auVar10[4] | auVar12[4],
                                                  CONCAT13(auVar10[3] | auVar12[3],
                                                           CONCAT12(auVar10[2] | auVar12[2],
                                                                    CONCAT11(auVar10[1] | auVar12[1]
                                                                             ,auVar10[0] |
                                                                              auVar12[0])))))));
      uVar9 = uVar9 | uVar9 >> 0x20;
      uVar4 = (uint)uVar9 | (uint)(uVar9 >> 0x10);
      if (uVar5 == 0) {
        return uVar4;
      }
      bVar1 = param_1[7];
      *param_1 = bVar1;
      param_1[0x19] = bVar1 == 2;
      if (uVar5 == 1) {
        return uVar4;
      }
      bVar2 = param_1[8];
      param_1[1] = bVar2;
      bVar7 = bVar1 == 2 || bVar2 == 2;
      param_1[0x18] = bVar2 == bVar1;
      param_1[0x19] = bVar7;
      if (uVar5 < 3) {
        return uVar4;
      }
      bVar3 = param_1[9];
      bVar8 = bVar2 == bVar1 && bVar3 == bVar1;
      param_1[2] = bVar3;
      bVar7 = bVar3 == 2 || bVar7;
      param_1[0x18] = bVar8;
      param_1[0x19] = bVar7;
      if (uVar5 == 3) {
        return uVar4;
      }
      bVar2 = param_1[10];
      param_1[3] = bVar2;
      bVar8 = bVar2 == bVar1 && bVar8;
      bVar7 = bVar2 == 2 || bVar7;
      param_1[0x18] = bVar8;
      param_1[0x19] = bVar7;
      if (uVar5 < 5) {
        return uVar4;
      }
      bVar2 = param_1[0xb];
      param_1[4] = bVar2;
      bVar8 = bVar2 == bVar1 && bVar8;
      bVar7 = bVar2 == 2 || bVar7;
      param_1[0x18] = bVar8;
      param_1[0x19] = bVar7;
      if (uVar5 == 5) {
        return uVar4;
      }
      bVar2 = param_1[0xc];
      param_1[5] = bVar2;
      bVar8 = bVar2 == bVar1 && bVar8;
      bVar7 = bVar2 == 2 || bVar7;
      param_1[0x18] = bVar8;
      param_1[0x19] = bVar7;
      if (uVar5 < 7) {
        return uVar4;
      }
      bVar2 = param_1[0xd];
      param_1[6] = bVar2;
      param_1[0x18] = bVar2 == bVar1 && bVar8;
      param_1[0x19] = bVar2 == 2 || bVar7;
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/array:277: libc++ Hardening assertion __n < _Size failed: out-of-bounds access in std::array<T, N>\n"
                );
    }
    uVar4 = (uint)*param_1 << 0xd | (uint)param_1[1] << 0xc | (uint)param_1[2] << 0xb |
            (uint)param_1[3] << 10 | (uint)param_1[4] << 9 | (uint)param_1[5] << 8 |
            (uint)param_1[6] << 7 | (uint)param_1[7] << 6 | (uint)param_1[8] << 5 |
            (uint)param_1[9] << 4 | (uint)param_1[10] << 3 | (uint)param_1[0xb] << 2 |
            (uint)param_1[0xc] << 1 | (uint)param_1[0xd] | 0xffff8000;
  }
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 1;
  param_1[0x19] = 0;
  return uVar4;
}


// ===== 007d19a8  FUN_007d19a8 =====

undefined1 * FUN_007d19a8(long *param_1,undefined1 *param_2,ulong param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  void *__src;
  undefined1 uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  void *pvVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined8 *puVar15;
  undefined1 *puVar16;
  size_t __n;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  puVar16 = param_2;
  if (param_3 != 0) {
    puVar1 = (undefined1 *)param_1[1];
    if ((ulong)(param_1[2] - (long)puVar1) < param_3) {
      lVar18 = *param_1;
      puVar1 = puVar1 + (param_3 - lVar18);
      if ((long)puVar1 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d34c0();
      }
      uVar7 = param_1[2] - lVar18;
      lVar17 = (long)param_2 - lVar18;
      puVar8 = (undefined1 *)(uVar7 * 2);
      if (puVar8 < puVar1 || (long)puVar8 - (long)puVar1 == 0) {
        puVar8 = puVar1;
      }
      if (0x3ffffffffffffffe < uVar7) {
        puVar8 = (undefined1 *)0x7fffffffffffffff;
      }
      if (puVar8 == (undefined1 *)0x0) {
        pvVar4 = (void *)0x0;
      }
      else {
        pvVar4 = operator_new((ulong)puVar8);
      }
      uVar9 = param_3 - 1;
      puVar16 = (undefined1 *)((long)pvVar4 + lVar17);
      uVar11 = lVar18 - (long)((long)pvVar4 + (long)param_2);
      puVar1 = puVar16 + param_3;
      uVar7 = uVar11;
      if (uVar9 <= uVar11) {
        uVar7 = uVar9;
      }
      uVar7 = uVar7 + 1;
      puVar13 = (undefined1 *)((long)pvVar4 + lVar17);
      if (0x20 < uVar7) {
        if (uVar9 <= uVar11) {
          uVar11 = uVar9;
        }
        puVar13 = (undefined1 *)((long)pvVar4 + lVar17);
        if (puVar16 <= puVar16 + uVar11) {
          uVar11 = lVar18 - (long)((long)pvVar4 + (long)param_2);
          if (uVar9 <= uVar11) {
            uVar11 = uVar9;
          }
          if (((undefined1 *)((long)pvVar4 + (long)(param_2 + (uVar11 - lVar18) + 1)) <= param_4) ||
             (puVar13 = (undefined1 *)((long)pvVar4 + lVar17), param_4 + 1 <= puVar16)) {
            uVar2 = *param_4;
            uVar19 = CONCAT17(uVar2,CONCAT16(uVar2,CONCAT15(uVar2,CONCAT14(uVar2,CONCAT13(uVar2,
                                                  CONCAT12(uVar2,CONCAT11(uVar2,uVar2)))))));
            uVar20 = CONCAT17(uVar2,CONCAT16(uVar2,CONCAT15(uVar2,CONCAT14(uVar2,CONCAT13(uVar2,
                                                  CONCAT12(uVar2,CONCAT11(uVar2,uVar2)))))));
            uVar11 = 0x20;
            if ((uVar7 & 0x1f) != 0) {
              uVar11 = uVar7 & 0x1f;
            }
            lVar18 = uVar7 - uVar11;
            puVar10 = (undefined8 *)((long)pvVar4 + lVar17 + 0x10);
            puVar13 = puVar16 + lVar18;
            do {
              lVar18 = lVar18 + -0x20;
              puVar10[-1] = uVar20;
              puVar10[-2] = uVar19;
              puVar10[1] = uVar20;
              *puVar10 = uVar19;
              puVar10 = puVar10 + 4;
            } while (lVar18 != 0);
          }
        }
      }
      do {
        if (puVar13 == (undefined1 *)0x0) {
LAB_007d1d70:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        puVar6 = puVar13 + 1;
        *puVar13 = *param_4;
        puVar13 = puVar6;
      } while (puVar6 != puVar1);
      memcpy(puVar1,param_2,param_1[1] - (long)param_2);
      __src = (void *)*param_1;
      lVar18 = param_1[1];
      param_1[1] = (long)param_2;
      memcpy(puVar16 + ((long)__src - (long)param_2),__src,(long)param_2 - (long)__src);
      pvVar5 = (void *)*param_1;
      *param_1 = (long)(puVar16 + ((long)__src - (long)param_2));
      param_1[1] = (long)(puVar1 + (lVar18 - (long)param_2));
      param_1[2] = (long)((long)pvVar4 + (long)puVar8);
      if (pvVar5 != (void *)0x0) {
        operator_delete(pvVar5);
      }
    }
    else {
      uVar7 = (long)puVar1 - (long)param_2;
      puVar8 = puVar1;
      __n = param_3;
      if (uVar7 <= param_3 && param_3 - uVar7 != 0) {
        puVar8 = puVar1 + (param_3 - uVar7);
        puVar6 = param_2 + ~(ulong)puVar1 + param_3;
        puVar13 = puVar6;
        if ((undefined1 *)-(long)puVar1 <= puVar6) {
          puVar13 = (undefined1 *)-(long)puVar1;
        }
        puVar13 = puVar13 + 1;
        puVar12 = puVar1;
        if ((undefined1 *)0x20 < puVar13) {
          if ((undefined1 *)-(long)puVar1 <= puVar6) {
            puVar6 = (undefined1 *)-(long)puVar1;
          }
          if (puVar1 <= puVar1 + (long)puVar6) {
            puVar6 = param_2 + ~(ulong)puVar1 + param_3;
            if ((undefined1 *)-(long)puVar1 <= puVar6) {
              puVar6 = (undefined1 *)-(long)puVar1;
            }
            if ((puVar1 + (long)puVar6 + 1 <= param_4) || (param_4 + 1 <= puVar1)) {
              uVar2 = *param_4;
              uVar19 = CONCAT17(uVar2,CONCAT16(uVar2,CONCAT15(uVar2,CONCAT14(uVar2,CONCAT13(uVar2,
                                                  CONCAT12(uVar2,CONCAT11(uVar2,uVar2)))))));
              uVar20 = CONCAT17(uVar2,CONCAT16(uVar2,CONCAT15(uVar2,CONCAT14(uVar2,CONCAT13(uVar2,
                                                  CONCAT12(uVar2,CONCAT11(uVar2,uVar2)))))));
              uVar11 = 0x20;
              if (((ulong)puVar13 & 0x1f) != 0) {
                uVar11 = (ulong)puVar13 & 0x1f;
              }
              puVar10 = (undefined8 *)(puVar1 + 0x10);
              lVar18 = (long)puVar13 - uVar11;
              puVar12 = puVar1 + lVar18;
              do {
                lVar18 = lVar18 + -0x20;
                puVar10[-1] = uVar20;
                puVar10[-2] = uVar19;
                puVar10[1] = uVar20;
                *puVar10 = uVar19;
                puVar10 = puVar10 + 4;
              } while (lVar18 != 0);
            }
          }
        }
        do {
          if (puVar12 == (undefined1 *)0x0) goto LAB_007d1d70;
          puVar13 = puVar12 + 1;
          *puVar12 = *param_4;
          puVar12 = puVar13;
        } while (puVar13 != puVar8);
        param_1[1] = (long)puVar8;
        if (uVar7 == 0) {
          return param_2;
        }
        __n = (long)puVar1 - (long)param_2;
      }
      puVar13 = puVar8 + -param_3;
      puVar6 = puVar8;
      if (puVar13 < puVar1) {
        uVar11 = param_3;
        if (param_3 <= uVar7) {
          uVar11 = uVar7;
        }
        puVar6 = puVar1 + ((~(ulong)param_2 + param_3) - uVar11);
        if ((undefined1 *)-(long)puVar8 < puVar6) {
          puVar6 = (undefined1 *)-(long)puVar8;
        }
        puVar6 = puVar6 + 1;
        puVar12 = puVar8;
        if ((undefined1 *)0x20 < puVar6) {
          uVar9 = param_3;
          if (param_3 <= uVar7) {
            uVar9 = uVar7;
          }
          puVar14 = puVar1 + ((~(ulong)param_2 + param_3) - uVar9);
          if ((undefined1 *)-(long)puVar8 < puVar14) {
            puVar14 = (undefined1 *)-(long)puVar8;
          }
          if (((puVar8 <= puVar8 + (long)puVar14) && (puVar13 <= puVar13 + (long)puVar14)) &&
             (0x1f < param_3)) {
            uVar7 = 0x20;
            if (((ulong)puVar6 & 0x1f) != 0) {
              uVar7 = (ulong)puVar6 & 0x1f;
            }
            lVar18 = (long)puVar6 - uVar7;
            puVar10 = (undefined8 *)(param_2 + uVar11 + 0x10);
            puVar13 = puVar13 + lVar18;
            puVar12 = puVar8 + lVar18;
            puVar15 = (undefined8 *)((long)puVar10 - param_3);
            do {
              puVar3 = puVar15 + -1;
              uVar19 = puVar15[-2];
              uVar21 = puVar15[1];
              uVar20 = *puVar15;
              lVar18 = lVar18 + -0x20;
              puVar15 = puVar15 + 4;
              puVar10[-1] = *puVar3;
              puVar10[-2] = uVar19;
              puVar10[1] = uVar21;
              *puVar10 = uVar20;
              puVar10 = puVar10 + 4;
            } while (lVar18 != 0);
          }
        }
        do {
          if (puVar12 == (undefined1 *)0x0) goto LAB_007d1d70;
          puVar14 = puVar13 + 1;
          puVar6 = puVar12 + 1;
          *puVar12 = *puVar13;
          puVar13 = puVar14;
          puVar12 = puVar6;
        } while (puVar14 != puVar1);
      }
      param_1[1] = (long)puVar6;
      memmove(puVar8 + -((long)puVar8 - (long)(param_2 + param_3)),param_2,
              (long)puVar8 - (long)(param_2 + param_3));
      if ((undefined1 *)param_1[1] < param_2) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                  );
      }
      if ((undefined1 *)param_1[1] <= param_4 || param_4 < param_2) {
        param_3 = 0;
      }
      memset(param_2,(uint)(byte)param_4[param_3],__n);
    }
  }
  return puVar16;
}


// ===== 007d1dac  FUN_007d1dac =====

void FUN_007d1dac(byte *param_1,uint param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if ((param_2 >> 0xf & 1) == 0) {
    uVar1 = param_2 >> 0xd & 7;
    param_1[0x18] = 1;
    if (((ulong)param_2 & 0x1fff) <= param_3) {
      param_3 = (ulong)param_2 & 0x1fff;
    }
    *(ulong *)(param_1 + 0x10) = param_3;
    param_1[0x19] = 1 < uVar1;
    if (param_3 != 0) {
      uVar2 = 0;
      do {
        param_1[uVar2] = (byte)uVar1;
        uVar2 = uVar2 + 1;
        uVar3 = *(ulong *)(param_1 + 0x10);
        if (0xd < uVar3) {
          uVar3 = 0xe;
        }
      } while (uVar2 < uVar3);
    }
  }
  else {
    if ((param_2 >> 0xe & 1) == 0) {
      FUN_007d1e90();
      return;
    }
    uVar2 = param_3;
    if (6 < param_3) {
      uVar2 = 7;
    }
    param_1[0x18] = 0;
    param_1[0x19] = 1;
    *(ulong *)(param_1 + 0x10) = uVar2;
    if ((param_3 != 0) && (*param_1 = (byte)(param_2 >> 0xc) & 3, param_3 != 1)) {
      param_1[1] = (byte)(param_2 >> 10) & 3;
      if ((2 < param_3) && (param_1[2] = (byte)(param_2 >> 8) & 3, param_3 != 3)) {
        param_1[3] = (byte)(param_2 >> 6) & 3;
        if (((4 < param_3) && (param_1[4] = (byte)(param_2 >> 4) & 3, param_3 != 5)) &&
           (param_1[5] = (byte)(param_2 >> 2) & 3, 6 < param_3)) {
          param_1[6] = (byte)param_2 & 3;
          return;
        }
      }
    }
  }
  return;
}


// ===== 007d1e90  FUN_007d1e90 =====

void FUN_007d1e90(byte *param_1,uint param_2,ulong param_3)

{
  ulong uVar1;
  
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  uVar1 = param_3;
  if (0xd < param_3) {
    uVar1 = 0xe;
  }
  *(ulong *)(param_1 + 0x10) = uVar1;
  if ((param_3 != 0) && (*param_1 = (byte)(param_2 >> 0xd) & 1, param_3 != 1)) {
    param_1[1] = (byte)(param_2 >> 0xc) & 1;
    if ((2 < param_3) && (param_1[2] = (byte)(param_2 >> 0xb) & 1, param_3 != 3)) {
      param_1[3] = (byte)(param_2 >> 10) & 1;
      if ((4 < param_3) && (param_1[4] = (byte)(param_2 >> 9) & 1, param_3 != 5)) {
        param_1[5] = (byte)(param_2 >> 8) & 1;
        if ((6 < param_3) && (param_1[6] = (byte)(param_2 >> 7) & 1, param_3 != 7)) {
          param_1[7] = (byte)(param_2 >> 6) & 1;
          if ((8 < param_3) && (param_1[8] = (byte)(param_2 >> 5) & 1, param_3 != 9)) {
            param_1[9] = (byte)(param_2 >> 4) & 1;
            if ((10 < param_3) && (param_1[10] = (byte)(param_2 >> 3) & 1, param_3 != 0xb)) {
              param_1[0xb] = (byte)(param_2 >> 2) & 1;
              if ((0xc < param_3) && (param_1[0xc] = (byte)(param_2 >> 1) & 1, param_3 != 0xd)) {
                param_1[0xd] = (byte)param_2 & 1;
              }
            }
          }
        }
      }
    }
  }
  return;
}


// ===== 007d1f70  FUN_007d1f70 =====

void FUN_007d1f70(undefined8 *param_1)

{
  param_1[0x10] = 0;
  *param_1 = &PTR_FUN_00d37d38;
  *(undefined2 *)(param_1 + 3) = 0x100;
  *(undefined2 *)(param_1 + 0x11) = 1;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[0x12] = 0x14;
  return;
}


// ===== 007d1fbc  FUN_007d1fbc =====

void FUN_007d1fbc(undefined8 *param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_00d37d38;
  *(undefined2 *)(param_1 + 0x11) = 1;
  *(undefined1 *)((long)param_1 + 0x19) = param_2;
  param_1[0x10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0x12] = 0x14;
  return;
}


// ===== 007d2008  FUN_007d2008 =====

void FUN_007d2008(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  lVar1 = *(long *)(param_1 + 0x28);
  lVar2 = *(long *)(param_1 + 0x30);
  *(undefined2 *)(param_1 + 0x12) = 0;
  uVar5 = (lVar2 - (lVar2 << 0x3e)) - 4U >> 2;
  uVar3 = (ulong)((lVar1 - lVar2 << 0x3e) - (lVar1 - lVar2)) >> 2;
  if (uVar5 <= uVar3) {
    uVar3 = uVar5;
  }
  *(ulong *)(param_1 + 0x20) = (ulong)*(uint *)(param_1 + 0x14) * 64000 + 0xfa00000000;
  if ((1 < uVar3) && ((((int)lVar1 - (int)lVar2 | -(int)lVar2) & 3U) == 0)) {
    uVar3 = uVar3 & 0x3ffffffffffffffe;
    lVar2 = lVar2 + uVar3 * -4;
    do {
      uVar3 = uVar3 - 2;
    } while (uVar3 != 0);
  }
  do {
    if (lVar2 == lVar1) {
      lVar2 = *(long *)(param_1 + 0x40);
      lVar4 = *(long *)(param_1 + 0x48);
      *(long *)(param_1 + 0x30) = lVar1;
      uVar5 = (lVar4 - (lVar4 << 0x3e)) - 4U >> 2;
      uVar3 = (ulong)((lVar2 - lVar4 << 0x3e) - (lVar2 - lVar4)) >> 2;
      if (uVar5 <= uVar3) {
        uVar3 = uVar5;
      }
      if ((1 < uVar3) && ((((int)lVar2 - (int)lVar4 | -(int)lVar4) & 3U) == 0)) {
        uVar3 = uVar3 & 0x3ffffffffffffffe;
        lVar4 = lVar4 + uVar3 * -4;
        do {
          uVar3 = uVar3 - 2;
        } while (uVar3 != 0);
      }
      goto LAB_007d20fc;
    }
    lVar2 = lVar2 + -4;
  } while (lVar2 != 0);
  goto LAB_007d2090;
  while (lVar4 = lVar4 + -4, lVar4 != 0) {
LAB_007d20fc:
    if (lVar4 == lVar2) {
      lVar1 = *(long *)(param_1 + 0x58);
      lVar4 = *(long *)(param_1 + 0x60);
      *(long *)(param_1 + 0x48) = lVar2;
      uVar5 = (lVar4 + (lVar4 << 0x3f)) - 2U >> 1;
      uVar3 = (ulong)((lVar1 - lVar4 << 0x3f) - (lVar1 - lVar4)) >> 1;
      if (uVar5 <= uVar3) {
        uVar3 = uVar5;
      }
      if ((1 < uVar3) && ((((int)lVar1 - (uint)lVar4 | (uint)lVar4) & 1) == 0)) {
        uVar3 = uVar3 & 0x7ffffffffffffffe;
        lVar4 = lVar4 + uVar3 * -2;
        do {
          uVar3 = uVar3 - 2;
        } while (uVar3 != 0);
      }
      do {
        if (lVar4 == lVar1) {
          *(long *)(param_1 + 0x60) = lVar1;
          *(undefined2 *)(param_1 + 0x88) = 1;
          *(undefined8 *)(param_1 + 0x80) = 0;
          *(undefined8 *)(param_1 + 0x90) = 0x14;
          return;
        }
        lVar4 = lVar4 + -2;
      } while (lVar4 != 0);
      break;
    }
  }
LAB_007d2090:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 007d2198  FUN_007d2198 =====

void FUN_007d2198(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = (void *)param_1[0xb];
  *param_1 = &PTR_FUN_00d37d38;
  if (pvVar1 == (void *)0x0) {
LAB_007d2230:
    pvVar1 = (void *)param_1[8];
    if (pvVar1 == (void *)0x0) {
LAB_007d22b0:
      pvVar1 = (void *)param_1[5];
      if (pvVar1 == (void *)0x0) {
        return;
      }
      pvVar2 = (void *)param_1[6];
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
          param_1[6] = pvVar1;
          operator_delete(pvVar1);
          return;
        }
        pvVar2 = (void *)((long)pvVar2 + -4);
      } while (pvVar2 != (void *)0x0);
    }
    else {
      pvVar2 = (void *)param_1[9];
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
          param_1[9] = pvVar1;
          operator_delete(pvVar1);
          goto LAB_007d22b0;
        }
        pvVar2 = (void *)((long)pvVar2 + -4);
      } while (pvVar2 != (void *)0x0);
    }
  }
  else {
    pvVar2 = (void *)param_1[0xc];
    uVar4 = (ulong)((long)pvVar2 + ((long)pvVar2 << 0x3f) + -2) >> 1;
    uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2 << 0x3f) - ((long)pvVar1 - (long)pvVar2)) >> 1;
    if (uVar4 <= uVar3) {
      uVar3 = uVar4;
    }
    if ((1 < uVar3) && ((((int)pvVar1 - (uint)pvVar2 | (uint)pvVar2) & 1) == 0)) {
      uVar3 = uVar3 & 0x7ffffffffffffffe;
      pvVar2 = (void *)((long)pvVar2 + uVar3 * -2);
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
    do {
      if (pvVar2 == pvVar1) {
        param_1[0xc] = pvVar1;
        operator_delete(pvVar1);
        goto LAB_007d2230;
      }
      pvVar2 = (void *)((long)pvVar2 + -2);
    } while (pvVar2 != (void *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 007d235c  FUN_007d235c =====

void FUN_007d235c(void *param_1)

{
  FUN_007d2198();
  operator_delete(param_1);
  return;
}


// ===== 007d238c  FUN_007d238c =====

void FUN_007d238c(long param_1,undefined2 param_2,long param_3)

{
  ulong uVar1;
  
  *(undefined2 *)(param_1 + 0x10) = param_2;
  uVar1 = (param_3 % 0xfa00000000) / 64000;
  *(int *)(param_1 + 0x14) = (int)uVar1;
  *(ulong *)(param_1 + 0x20) = (uVar1 & 0xffffffff) * 64000 + 0xfa00000000;
  return;
}


// ===== 007d23e0  FUN_007d23e0 =====

long FUN_007d23e0(long param_1)

{
  return (ulong)*(uint *)(param_1 + 0x14) * 64000 + 0xfa00000000;
}


// ===== 007d23f8  FUN_007d23f8 =====

void FUN_007d23f8(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x18) = param_2;
  return;
}


// ===== 007d2404  FUN_007d2404 =====

undefined8 FUN_007d2404(long param_1,uint param_2,long param_3)

{
  undefined2 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  ulong uVar5;
  undefined2 *puVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  short local_38 [2];
  undefined2 local_34 [2];
  
  uVar4 = (undefined2)param_2;
  uVar12 = 0;
  local_38[0] = 0;
  local_34[0] = uVar4;
  if (*(char *)(param_1 + 0x19) != '\x01') goto LAB_007d2538;
  lVar10 = *(long *)(param_1 + 0x20);
  lVar7 = param_3;
  if (lVar10 - param_3 == 0 || lVar10 < param_3) {
LAB_007d24b8:
    lVar9 = 0x93ffffffff;
    if ((lVar10 == -0x8000000000000000) || (lVar7 == 0x7fffffffffffffff)) goto LAB_007d2510;
    lVar9 = (lVar7 - lVar10) % 0xfa00000000;
    lVar11 = -0x9400000000;
    if (lVar7 != -0x8000000000000000 && lVar10 != 0x7fffffffffffffff) {
      lVar11 = lVar9;
    }
    if (0x7d00000000 < lVar11) goto LAB_007d2510;
    lVar9 = lVar11 + 0x7d;
  }
  else {
    lVar7 = -0x7fffff0600000002;
    if (lVar10 != 0x7fffffffffffffff && param_3 != -0x8000000000000000) {
      lVar7 = (lVar10 - param_3) + 0xf9ffffffff;
    }
    lVar11 = (lVar7 / 0xfa00000000) * 0xfa00000000;
    lVar9 = 0x93ffffffff;
    if (lVar11 != 0x7fffffffffffffff) {
      lVar7 = -0x8000000000000000;
      if (lVar11 != -0x8000000000000000 && param_3 != -0x8000000000000000) {
        lVar7 = lVar11 + param_3;
      }
      goto LAB_007d24b8;
    }
LAB_007d2510:
    lVar9 = lVar9 + -0xfa0000007d;
  }
  lVar9 = lVar9 / 0xfa;
  local_38[0] = (short)lVar9;
  if (lVar9 != local_38[0]) {
    uVar5 = FUN_004022fc();
    if ((uVar5 & 1) != 0) {
      return 0;
    }
    FUN_00623bb0(&DAT_001f4e98,"../../modules/rtp_rtcp/source/rtcp_packet/transport_feedback.cc",
                 0xab2,"Delta value too large ( >= 2^16 ticks )");
    return 0;
  }
  uVar12 = (uint)lVar9 & 0xffff;
LAB_007d2538:
  uVar8 = (uint)*(ushort *)(param_1 + 0x12) + (uint)*(ushort *)(param_1 + 0x10);
  if ((param_2 & 0xffff) != (uVar8 & 0xffff)) {
    uVar3 = uVar8 - 1;
    uVar2 = (param_2 & 0xffff) - (uVar3 & 0xffff);
    if (uVar2 == 0x8000) {
      if ((param_2 & 0xffff) <= (uVar3 & 0xffff)) {
        return 0;
      }
    }
    else {
      if ((param_2 & 0xffff) == (uVar3 & 0xffff)) {
        return 0;
      }
      if ((uVar2 >> 0xf & 1) != 0) {
        return 0;
      }
    }
    uVar5 = FUN_007d269c(param_1,param_2 - uVar8 & 0xffff);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
  }
  uVar8 = 1;
  if (0xff < uVar12) {
    uVar8 = 2;
  }
  uVar5 = FUN_007d2854(param_1,uVar8);
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  puVar1 = *(undefined2 **)(param_1 + 0x30);
  if (puVar1 < *(undefined2 **)(param_1 + 0x38)) {
    if (puVar1 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *puVar1 = uVar4;
    puVar6 = puVar1 + 2;
    puVar1[1] = (short)uVar12;
  }
  else {
    puVar6 = (undefined2 *)FUN_007d3edc(param_1 + 0x28,local_34,local_38);
  }
  lVar10 = *(long *)(param_1 + 0x20);
  *(undefined2 **)(param_1 + 0x30) = puVar6;
  lVar7 = lVar10;
  if (lVar10 != -0x8000000000000000) {
    lVar7 = lVar10 + (long)(int)local_38[0] * 0xfa;
  }
  if (lVar10 != 0x7fffffffffffffff) {
    lVar10 = lVar7;
  }
  *(long *)(param_1 + 0x20) = lVar10;
  if (*(char *)(param_1 + 0x19) == '\x01') {
    *(ulong *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + (ulong)uVar8;
  }
  return 1;
}


// ===== 007d269c  FUN_007d269c =====

undefined8 FUN_007d269c(long param_1,ulong param_2)

{
  char *pcVar1;
  undefined2 *puVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined2 local_28 [2];
  undefined2 local_24 [2];
  
  uVar8 = param_2 + *(ushort *)(param_1 + 0x12);
  if (uVar8 >> 0x10 == 0) {
    uVar7 = *(ulong *)(param_1 + 0x80);
    pcVar1 = (char *)(param_1 + 0x70);
    if (uVar7 == 0) {
LAB_007d27a0:
      uVar6 = param_2 / 0x1fff;
      uVar7 = uVar6;
      if (param_2 % 0x1fff != 0) {
        uVar7 = uVar6 + 1;
      }
      uVar7 = *(long *)(param_1 + 0x90) + uVar7 * 2;
      if (uVar7 < 0x40001) {
        *(ulong *)(param_1 + 0x90) = uVar7;
        local_28[0] = 0x1fff;
        FUN_007d35fc(param_1 + 0x58,*(undefined8 *)(param_1 + 0x60),uVar6,local_28);
        uVar4 = 1;
        *(undefined8 *)(param_1 + 0x76) = 0;
        pcVar1[0] = '\0';
        pcVar1[1] = '\0';
        pcVar1[2] = '\0';
        pcVar1[3] = '\0';
        pcVar1[4] = '\0';
        pcVar1[5] = '\0';
        pcVar1[6] = '\0';
        pcVar1[7] = '\0';
        *(ulong *)(param_1 + 0x80) = param_2 % 0x1fff;
      }
      else {
        uVar4 = 0;
        uVar8 = uVar8 - param_2;
      }
    }
    else {
      if (param_2 != 0) {
        do {
          if (uVar7 < 7) {
LAB_007d274c:
            pcVar1[uVar7] = '\0';
            bVar3 = false;
            uVar7 = *(long *)(param_1 + 0x80) + 1;
            *(ulong *)(param_1 + 0x80) = uVar7;
            if (*(char *)(param_1 + 0x88) == '\x01') goto LAB_007d26f4;
          }
          else {
            if (0xd < uVar7) {
              if (uVar7 < 0x1fff) goto LAB_007d2730;
LAB_007d2778:
              local_24[0] = FUN_007d1768(param_1 + 0x70);
              puVar2 = *(undefined2 **)(param_1 + 0x60);
              if (puVar2 < *(undefined2 **)(param_1 + 0x68)) {
                if (puVar2 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
                  std::__Cr::__libcpp_verbose_abort
                            ("%s",
                             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                            );
                }
                puVar5 = puVar2 + 1;
                *puVar2 = local_24[0];
              }
              else {
                puVar5 = (undefined2 *)FUN_007d40ec(param_1 + 0x58,local_24);
              }
              *(undefined2 **)(param_1 + 0x60) = puVar5;
              goto LAB_007d27a0;
            }
            if ((*(byte *)(param_1 + 0x89) & 1) == 0) goto LAB_007d274c;
LAB_007d2730:
            if ((*(char *)(param_1 + 0x88) != '\x01') || (*pcVar1 != '\0')) goto LAB_007d2778;
            if (uVar7 < 0xe) goto LAB_007d274c;
            uVar7 = uVar7 + 1;
            *(ulong *)(param_1 + 0x80) = uVar7;
LAB_007d26f4:
            bVar3 = *pcVar1 == '\0';
          }
          param_2 = param_2 - 1;
          *(bool *)(param_1 + 0x88) = bVar3;
        } while (param_2 != 0);
      }
      uVar4 = 1;
    }
    *(short *)(param_1 + 0x12) = (short)uVar8;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}


// ===== 007d2854  FUN_007d2854 =====

undefined8 FUN_007d2854(long param_1,byte param_2)

{
  long lVar1;
  byte *pbVar2;
  uint uVar3;
  long lVar4;
  undefined2 *puVar5;
  bool bVar6;
  undefined2 *puVar7;
  ulong uVar8;
  undefined2 local_14 [2];
  
  if (*(short *)(param_1 + 0x12) == -1) {
    return 0;
  }
  uVar8 = *(ulong *)(param_1 + 0x80);
  uVar3 = (uint)param_2;
  lVar1 = *(long *)(param_1 + 0x90) + (ulong)uVar3;
  lVar4 = 2;
  if (uVar8 != 0) {
    lVar4 = 0;
  }
  if (0x40000 < (ulong)(lVar1 + lVar4)) {
    return 0;
  }
  pbVar2 = (byte *)(param_1 + 0x70);
  if (uVar8 < 7) {
LAB_007d28b4:
    *(long *)(param_1 + 0x90) = lVar4 + *(long *)(param_1 + 0x90);
LAB_007d28bc:
    pbVar2[uVar8] = param_2;
    *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + 1;
    if (*(char *)(param_1 + 0x88) != '\x01') {
      *(char *)(param_1 + 0x88) = '\0';
      goto LAB_007d29d8;
    }
  }
  else {
    if (uVar8 < 0xe) {
      if ((uVar3 == 2) || ((*(byte *)(param_1 + 0x89) & 1) != 0)) goto LAB_007d2920;
      goto LAB_007d28b4;
    }
    if (0x1ffe < uVar8) {
LAB_007d2950:
      if (lVar1 - 0x3ffffU < 0xfffffffffffbffff) {
        return 0;
      }
      local_14[0] = FUN_007d1768(param_1 + 0x70);
      puVar5 = *(undefined2 **)(param_1 + 0x60);
      if (puVar5 < *(undefined2 **)(param_1 + 0x68)) {
        if (puVar5 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        puVar7 = puVar5 + 1;
        *puVar5 = local_14[0];
      }
      else {
        puVar7 = (undefined2 *)FUN_007d40ec(param_1 + 0x58,local_14);
      }
      uVar8 = *(ulong *)(param_1 + 0x80);
      *(undefined2 **)(param_1 + 0x60) = puVar7;
      *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + 2;
      if (uVar8 < 0xe) {
        pbVar2[uVar8] = param_2;
        uVar8 = *(ulong *)(param_1 + 0x80);
      }
      *(ulong *)(param_1 + 0x80) = uVar8 + 1;
      if (*(char *)(param_1 + 0x88) == '\x01') {
        bVar6 = uVar3 == *pbVar2;
      }
      else {
        bVar6 = false;
      }
      *(bool *)(param_1 + 0x88) = bVar6;
      goto LAB_007d29d8;
    }
LAB_007d2920:
    if ((*(char *)(param_1 + 0x88) != '\x01') || (*pbVar2 != uVar3)) goto LAB_007d2950;
    if (uVar8 < 0xe) goto LAB_007d28bc;
    *(ulong *)(param_1 + 0x80) = uVar8 + 1;
  }
  *(bool *)(param_1 + 0x88) = uVar3 == *pbVar2;
LAB_007d29d8:
  *(byte *)(param_1 + 0x89) = uVar3 == 2 | *(byte *)(param_1 + 0x89);
  *(short *)(param_1 + 0x12) = *(short *)(param_1 + 0x12) + 1;
  return 1;
}


// ===== 007d2a34  FUN_007d2a34 =====

void FUN_007d2a34(long param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  ushort uVar2;
  ushort uVar3;
  long lVar4;
  uint uVar5;
  ushort *puVar6;
  
  uVar2 = *(ushort *)(param_1 + 0x12);
  if (uVar2 != 0) {
    uVar3 = *(ushort *)(param_1 + 0x10);
    uVar5 = (uint)uVar3;
    puVar6 = *(ushort **)(param_1 + 0x28);
    lVar4 = 0;
    do {
      if ((puVar6 == *(ushort **)(param_1 + 0x30)) || ((uint)*puVar6 != (uVar5 & 0xffff))) {
        (*param_3)(param_2,uVar5,0x7fffffffffffffff);
      }
      else {
        lVar1 = lVar4;
        if (lVar4 != -0x8000000000000000) {
          lVar1 = lVar4 + (long)(int)(short)puVar6[1] * 0xfa;
        }
        if (lVar4 != 0x7fffffffffffffff) {
          lVar4 = lVar1;
        }
        (*param_3)(param_2,uVar5,lVar4);
        puVar6 = puVar6 + 2;
      }
      uVar5 = uVar5 + 1;
    } while ((uVar5 & 0xffff) != ((uint)uVar2 + (uint)uVar3 & 0xffff));
  }
  return;
}


// ===== 007d2b14  FUN_007d2b14 =====

undefined2 FUN_007d2b14(long param_1)

{
  return *(undefined2 *)(param_1 + 0x10);
}


// ===== 007d2b20  FUN_007d2b20 =====

long FUN_007d2b20(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  
  if (param_2 != -0x8000000000000000) {
    if (param_2 == 0x7fffffffffffffff) {
      return -0x8000000000000000;
    }
    param_2 = (ulong)*(uint *)(param_1 + 0x14) * 64000 - param_2;
    lVar6 = param_2 + 0xfa00000000;
    if (lVar6 != 0x7fffffffffffffff) {
      lVar7 = -param_2;
      if (-1 < param_2) {
        lVar7 = param_2;
      }
      lVar1 = lVar6;
      if (lVar6 != -0x8000000000000000) {
        lVar1 = lVar7;
      }
      lVar7 = -lVar6;
      if (-1 < lVar6) {
        lVar7 = lVar6;
      }
      if (lVar1 < lVar7) {
        if (lVar6 != -0x8000000000000000) {
          lVar6 = param_2;
        }
        return lVar6;
      }
      bVar5 = false;
      goto LAB_007d2b3c;
    }
  }
  lVar7 = 0x7fffffffffffffff;
  bVar5 = true;
  lVar6 = 0x7fffffffffffffff;
LAB_007d2b3c:
  lVar1 = lVar6 + 0xfa00000000;
  lVar2 = lVar1;
  if (lVar1 < 0) {
    lVar2 = -0xfa00000000 - lVar6;
  }
  lVar3 = lVar6;
  lVar4 = lVar6;
  if (lVar6 != -0x8000000000000000) {
    lVar3 = lVar1;
    lVar4 = lVar2;
  }
  if (lVar7 <= lVar4) {
    bVar5 = true;
  }
  if (!bVar5) {
    lVar6 = lVar3;
  }
  return lVar6;
}


// ===== 007d2be0  FUN_007d2be0 =====

undefined4 FUN_007d2be0(long param_1,long param_2)

{
  long lVar1;
  ushort *puVar2;
  short *psVar3;
  ushort uVar4;
  byte *pbVar5;
  ulong uVar6;
  ushort *puVar7;
  short *psVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  uint *puVar12;
  byte *pbVar13;
  undefined4 uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  uint uVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  int iVar56;
  int iVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  undefined4 local_88;
  short local_84 [2];
  byte *local_80;
  byte *local_78;
  byte *local_70;
  char **local_68;
  char *local_60;
  char *pcStack_58;
  byte *pbVar14;
  
  if (((DAT_00d802b8 & 1) == 0) && (iVar25 = FUN_0054fdd4(&DAT_00d802b8), iVar25 != 0)) {
    DAT_00d802b0 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00d802b8);
  }
  local_68 = (char **)0x0;
  pcStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00d802b0 != '\0') {
    FUN_0066d348(0x42,DAT_00d802b0,"TransportFeedback::Parse",0,0,0,0,0,0);
    local_60 = DAT_00d802b0;
    pcStack_58 = "TransportFeedback::Parse";
    local_68 = &local_60;
  }
  if (*(uint *)(param_2 + 4) < 0x12) {
    uVar6 = FUN_004022fc();
    if ((uVar6 & 1) == 0) {
      FUN_00623bb0(&DAT_001fd8a8,"../../modules/rtp_rtcp/source/rtcp_packet/transport_feedback.cc",
                   0xd32,"Buffer too small (",*(undefined4 *)(param_2 + 4),
                   " bytes) to fit a FeedbackPacket. Minimum size = ",0x12);
      uVar15 = 0;
      goto LAB_007d2edc;
    }
  }
  else {
    lVar16 = *(long *)(param_2 + 8);
    FUN_007d0240(param_1,lVar16);
    *(ushort *)(param_1 + 0x10) =
         *(ushort *)(lVar16 + 8) >> 8 | (ushort)((*(ushort *)(lVar16 + 8) & 0xff00ff) << 8);
    uVar4 = *(ushort *)(lVar16 + 10);
    *(uint *)(param_1 + 0x14) =
         (uint)*(byte *)(lVar16 + 0xc) << 0x10 | (uint)*(byte *)(lVar16 + 0xd) << 8 |
         (uint)*(byte *)(lVar16 + 0xe);
    uVar30 = (uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8;
    uVar6 = (ulong)uVar30;
    *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(lVar16 + 0xf);
    FUN_007d2008(param_1);
    if (uVar30 != 0) {
      uVar18 = (ulong)*(uint *)(param_2 + 4);
      local_80 = (byte *)operator_new(uVar6);
      local_70 = local_80 + uVar6;
      uVar17 = 0x10;
      local_78 = local_80;
      do {
        if (uVar18 < uVar17 + 2) {
          uVar6 = FUN_004022fc();
          if ((uVar6 & 1) == 0) {
            FUN_00623bb0(&DAT_001f4e98,
                         "../../modules/rtp_rtcp/source/rtcp_packet/transport_feedback.cc",0xe0a,
                         "Buffer overflow while parsing packet.");
          }
          FUN_007d2008(param_1);
          uVar15 = 0;
          goto LAB_007d2eb0;
        }
        uVar4 = *(ushort *)(lVar16 + uVar17);
        puVar2 = *(ushort **)(param_1 + 0x60);
        local_88 = CONCAT22(local_88._2_2_,uVar4 >> 8 | (ushort)((uVar4 & 0xff00ff) << 8));
        if (puVar2 < *(ushort **)(param_1 + 0x68)) {
          if (puVar2 == (ushort *)0x0) goto LAB_007d31f0;
          puVar7 = puVar2 + 1;
          *puVar2 = uVar4 >> 8 | (ushort)((uVar4 & 0xff00ff) << 8);
        }
        else {
          puVar7 = (ushort *)FUN_005dd418(param_1 + 0x58,&local_88);
        }
        pbVar5 = local_78;
        *(ushort **)(param_1 + 0x60) = puVar7;
        FUN_007d1dac(param_1 + 0x70,(short)local_88,local_80 + (uVar6 - (long)local_78));
        if (*(char *)(param_1 + 0x88) == '\x01') {
          FUN_007d19a8(&local_80,pbVar5,*(long *)(param_1 + 0x80),param_1 + 0x70);
        }
        else {
          FUN_007d3a1c(&local_80,pbVar5,param_1 + 0x70,*(long *)(param_1 + 0x80) + param_1 + 0x70);
        }
        pbVar5 = local_78;
        uVar17 = uVar17 + 2;
        uVar9 = (long)local_78 - (long)local_80;
      } while (uVar9 < uVar6);
      if (*(long *)(param_1 + 0x58) == *(long *)(param_1 + 0x60)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:492: libc++ Hardening assertion !empty() failed: vector::pop_back called on an empty vector\n"
                  );
      }
      lVar10 = *(long *)(param_1 + 0x60) + -2;
      if (lVar10 == 0) goto LAB_007d3204;
      *(long *)(param_1 + 0x60) = lVar10;
      local_84[0] = *(short *)(param_1 + 0x10);
      *(short *)(param_1 + 0x12) = (short)uVar30;
      if (local_80 == local_78) {
        if (uVar18 < uVar17) {
          *(undefined1 *)(param_1 + 0x19) = 0;
        }
      }
      else {
        if (uVar9 < 4) {
          iVar25 = 0;
          pbVar14 = local_80;
LAB_007d3028:
          do {
            pbVar13 = pbVar14 + 1;
            iVar25 = iVar25 + (uint)*pbVar14;
            pbVar14 = pbVar13;
          } while (pbVar13 != local_78);
        }
        else if (uVar9 < 0x20) {
          uVar11 = 0;
          iVar25 = 0;
LAB_007d2fec:
          iVar27 = 0;
          iVar28 = 0;
          iVar26 = 0;
          uVar6 = uVar9 & 0xfffffffffffffffc;
          pbVar14 = local_80 + uVar6;
          lVar10 = uVar11 - uVar6;
          puVar12 = (uint *)(local_80 + uVar11);
          do {
            uVar30 = *puVar12;
            lVar10 = lVar10 + 4;
            bVar20 = (byte)(uVar30 >> 8);
            iVar25 = iVar25 + (CONCAT12(bVar20,(ushort)(byte)uVar30) & 0xffff);
            iVar26 = iVar26 + (uint)bVar20;
            iVar27 = iVar27 + (uVar30 >> 0x10 & 0xff);
            iVar28 = iVar28 + (uVar30 >> 0x18);
            puVar12 = puVar12 + 1;
          } while (lVar10 != 0);
          iVar25 = iVar25 + iVar26 + iVar27 + iVar28;
          if (uVar9 != uVar6) goto LAB_007d3028;
        }
        else {
          iVar25 = 0;
          iVar26 = 0;
          iVar27 = 0;
          iVar28 = 0;
          iVar29 = 0;
          iVar31 = 0;
          iVar32 = 0;
          iVar33 = 0;
          iVar38 = 0;
          iVar39 = 0;
          iVar40 = 0;
          iVar41 = 0;
          iVar34 = 0;
          iVar35 = 0;
          iVar36 = 0;
          iVar37 = 0;
          uVar11 = uVar9 & 0xffffffffffffffe0;
          iVar42 = 0;
          iVar43 = 0;
          iVar44 = 0;
          iVar45 = 0;
          iVar46 = 0;
          iVar47 = 0;
          iVar48 = 0;
          iVar49 = 0;
          pbVar14 = local_80 + 0x10;
          iVar50 = 0;
          iVar51 = 0;
          iVar52 = 0;
          iVar53 = 0;
          iVar54 = 0;
          iVar55 = 0;
          iVar56 = 0;
          iVar57 = 0;
          uVar6 = uVar9 & 0xffffffffffffffe0;
          do {
            uVar59 = *(undefined8 *)(pbVar14 + -8);
            uVar58 = *(undefined8 *)(pbVar14 + -0x10);
            uVar61 = *(undefined8 *)(pbVar14 + 8);
            uVar60 = *(undefined8 *)pbVar14;
            uVar6 = uVar6 - 0x20;
            pbVar14 = pbVar14 + 0x20;
            bVar21 = (byte)((ulong)uVar59 >> 0x28);
            bVar20 = (byte)((ulong)uVar58 >> 8);
            bVar22 = (byte)((ulong)uVar58 >> 0x28);
            bVar23 = (byte)((ulong)uVar61 >> 0x28);
            bVar19 = (byte)((ulong)uVar60 >> 8);
            bVar24 = (byte)((ulong)uVar60 >> 0x28);
            iVar42 = iVar42 + (CONCAT12(bVar21,(ushort)(byte)((ulong)uVar59 >> 0x20)) & 0xffff);
            iVar43 = iVar43 + (uint)bVar21;
            iVar44 = iVar44 + (uint)(byte)((ulong)uVar59 >> 0x30);
            iVar45 = iVar45 + (uint)(byte)((ulong)uVar59 >> 0x38);
            iVar34 = iVar34 + ((uint)uVar59 & 0xff);
            iVar35 = iVar35 + (uint)(byte)((ulong)uVar59 >> 8);
            iVar36 = iVar36 + (uint)(byte)((ulong)uVar59 >> 0x10);
            iVar37 = iVar37 + (uint)(byte)((ulong)uVar59 >> 0x18);
            iVar38 = iVar38 + (CONCAT12(bVar22,(ushort)(byte)((ulong)uVar58 >> 0x20)) & 0xffff);
            iVar39 = iVar39 + (uint)bVar22;
            iVar40 = iVar40 + (uint)(byte)((ulong)uVar58 >> 0x30);
            iVar41 = iVar41 + (uint)(byte)((ulong)uVar58 >> 0x38);
            iVar29 = iVar29 + ((CONCAT12(bVar20,(short)uVar58) & 0xff00ff) & 0xffff);
            iVar31 = iVar31 + (uint)bVar20;
            iVar32 = iVar32 + (uint)(byte)((ulong)uVar58 >> 0x10);
            iVar33 = iVar33 + (uint)(byte)((ulong)uVar58 >> 0x18);
            iVar54 = iVar54 + (CONCAT12(bVar23,(ushort)(byte)((ulong)uVar61 >> 0x20)) & 0xffff);
            iVar55 = iVar55 + (uint)bVar23;
            iVar56 = iVar56 + (uint)(byte)((ulong)uVar61 >> 0x30);
            iVar57 = iVar57 + (uint)(byte)((ulong)uVar61 >> 0x38);
            iVar50 = iVar50 + ((uint)uVar61 & 0xff);
            iVar51 = iVar51 + (uint)(byte)((ulong)uVar61 >> 8);
            iVar52 = iVar52 + (uint)(byte)((ulong)uVar61 >> 0x10);
            iVar53 = iVar53 + (uint)(byte)((ulong)uVar61 >> 0x18);
            iVar25 = iVar25 + (CONCAT12(bVar24,(ushort)(byte)((ulong)uVar60 >> 0x20)) & 0xffff);
            iVar26 = iVar26 + (uint)bVar24;
            iVar27 = iVar27 + (uint)(byte)((ulong)uVar60 >> 0x30);
            iVar28 = iVar28 + (uint)(byte)((ulong)uVar60 >> 0x38);
            iVar46 = iVar46 + ((CONCAT12(bVar19,(short)uVar60) & 0xff00ff) & 0xffff);
            iVar47 = iVar47 + (uint)bVar19;
            iVar48 = iVar48 + (uint)(byte)((ulong)uVar60 >> 0x10);
            iVar49 = iVar49 + (uint)(byte)((ulong)uVar60 >> 0x18);
          } while (uVar6 != 0);
          iVar25 = iVar46 + iVar29 + iVar50 + iVar34 + iVar25 + iVar38 + iVar54 + iVar42 +
                   iVar47 + iVar31 + iVar51 + iVar35 + iVar26 + iVar39 + iVar55 + iVar43 +
                   iVar48 + iVar32 + iVar52 + iVar36 + iVar27 + iVar40 + iVar56 + iVar44 +
                   iVar49 + iVar33 + iVar53 + iVar37 + iVar28 + iVar41 + iVar57 + iVar45;
          if (uVar9 != uVar11) {
            if ((uVar9 & 0x1c) == 0) {
              pbVar14 = local_80 + uVar11;
              goto LAB_007d3028;
            }
            goto LAB_007d2fec;
          }
        }
        pbVar14 = local_80;
        if (uVar18 < uVar17 + (long)iVar25) {
          *(undefined1 *)(param_1 + 0x19) = 0;
          do {
            if (*pbVar14 != 0) {
              psVar3 = *(short **)(param_1 + 0x30);
              local_88 = 0;
              if (psVar3 < *(short **)(param_1 + 0x38)) {
                if (psVar3 == (short *)0x0) {
LAB_007d31f0:
                    /* WARNING: Subroutine does not return */
                  std::__Cr::__libcpp_verbose_abort
                            ("%s",
                             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                            );
                }
                *psVar3 = local_84[0];
                psVar8 = psVar3 + 2;
                psVar3[1] = 0;
              }
              else {
                psVar8 = (short *)FUN_007d3fe4(param_1 + 0x28,local_84,&local_88);
              }
              *(short **)(param_1 + 0x30) = psVar8;
            }
            pbVar14 = pbVar14 + 1;
            local_84[0] = local_84[0] + 1;
          } while (pbVar14 != pbVar5);
        }
        else {
          do {
            bVar20 = *pbVar14;
            if (bVar20 == 1) {
              psVar3 = *(short **)(param_1 + 0x30);
              bVar20 = *(byte *)(lVar16 + uVar17);
              local_88 = CONCAT22(local_88._2_2_,(ushort)bVar20);
              if (psVar3 < *(short **)(param_1 + 0x38)) {
                if (psVar3 == (short *)0x0) goto LAB_007d31f0;
                *psVar3 = local_84[0];
                psVar8 = psVar3 + 2;
                psVar3[1] = (ushort)bVar20;
              }
              else {
                psVar8 = (short *)FUN_007d3edc(param_1 + 0x28,local_84,&local_88);
              }
              lVar10 = *(long *)(param_1 + 0x20);
              uVar17 = uVar17 + 1;
LAB_007d30d8:
              *(short **)(param_1 + 0x30) = psVar8;
              lVar1 = lVar10;
              if (lVar10 != -0x8000000000000000) {
                lVar1 = lVar10 + (long)(int)(short)local_88 * 0xfa;
              }
              if (lVar10 != 0x7fffffffffffffff) {
                lVar10 = lVar1;
              }
              *(long *)(param_1 + 0x20) = lVar10;
            }
            else {
              if (bVar20 == 2) {
                uVar4 = *(ushort *)(lVar16 + uVar17);
                psVar3 = *(short **)(param_1 + 0x30);
                local_88 = CONCAT22(local_88._2_2_,uVar4 >> 8 | (ushort)((uVar4 & 0xff00ff) << 8));
                if (psVar3 < *(short **)(param_1 + 0x38)) {
                  if (psVar3 == (short *)0x0) goto LAB_007d31f0;
                  *psVar3 = local_84[0];
                  psVar8 = psVar3 + 2;
                  psVar3[1] = uVar4 >> 8 | (ushort)((uVar4 & 0xff00ff) << 8);
                }
                else {
                  psVar8 = (short *)FUN_007d3edc(param_1 + 0x28,local_84,&local_88);
                }
                lVar10 = *(long *)(param_1 + 0x20);
                uVar17 = uVar17 + 2;
                goto LAB_007d30d8;
              }
              if (bVar20 == 3) {
                FUN_007d2008(param_1);
                uVar6 = FUN_004022fc();
                if ((uVar6 & 1) == 0) {
                  FUN_00623bb0(&DAT_001f4e94,
                               "../../modules/rtp_rtcp/source/rtcp_packet/transport_feedback.cc",
                               0xf5a,"Invalid delta_size for seq_no ",local_84[0]);
                  uVar15 = 0;
                }
                else {
                  uVar15 = 0;
                }
                goto LAB_007d2eb0;
              }
            }
            pbVar14 = pbVar14 + 1;
            local_84[0] = local_84[0] + 1;
          } while (pbVar14 != pbVar5);
        }
      }
      *(ulong *)(param_1 + 0x90) = uVar17 + 4;
      uVar15 = 1;
LAB_007d2eb0:
      if (local_80 != (byte *)0x0) {
        if (local_78 + -1 < local_78 + -(long)local_80) {
LAB_007d3204:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        local_78 = local_80;
        operator_delete(local_80);
      }
      goto LAB_007d2edc;
    }
    uVar6 = FUN_004022fc();
    if ((uVar6 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../modules/rtp_rtcp/source/rtcp_packet/transport_feedback.cc",
                   0xdca,"Empty feedback messages not allowed.");
      uVar15 = 0;
      goto LAB_007d2edc;
    }
  }
  uVar15 = 0;
LAB_007d2edc:
  if ((local_68 != (char **)0x0) && (**local_68 != '\0')) {
    FUN_0066d348(0x45,*local_68,local_68[1],0,0,0,0,0,0);
  }
  return uVar15;
}


// ===== 007d325c  FUN_007d325c =====

ulong FUN_007d325c(long param_1)

{
  return *(long *)(param_1 + 0x90) + 3U & 0xfffffffffffffffc;
}


// ===== 007d3270  FUN_007d3270 =====

undefined8
FUN_007d3270(long *param_1,long param_2,long *param_3,ulong param_4,undefined8 param_5,
            undefined8 param_6)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  ushort *puVar4;
  undefined4 uVar5;
  ushort uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  ushort *puVar12;
  byte bVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  int iVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  ushort *puVar13;
  
  if (*(short *)((long)param_1 + 0x12) != 0) {
    do {
      lVar20 = *param_3;
      lVar7 = (**(code **)(*param_1 + 0x10))(param_1);
      if ((ulong)(lVar7 + lVar20) <= param_4) {
        (**(code **)(*param_1 + 0x10))(param_1);
        lVar9 = (**(code **)(*param_1 + 0x10))(param_1);
        lVar21 = param_1[0x12];
        lVar20 = lVar9 - lVar21;
        uVar10 = FUN_007cd5b4(param_1);
        FUN_007cd628(0xf,0xcd,uVar10,lVar20 != 0,param_2,param_3);
        FUN_007d0260(param_1,param_2 + *param_3);
        lVar7 = *param_3;
        *param_3 = lVar7 + 8;
        *(ushort *)(param_2 + lVar7 + 8) =
             *(ushort *)(param_1 + 2) >> 8 | (ushort)((*(ushort *)(param_1 + 2) & 0xff00ff) << 8);
        lVar7 = *param_3;
        *param_3 = lVar7 + 2;
        *(ushort *)(param_2 + lVar7 + 2) =
             *(ushort *)((long)param_1 + 0x12) >> 8 |
             (ushort)((*(ushort *)((long)param_1 + 0x12) & 0xff00ff) << 8);
        lVar7 = *param_3;
        *param_3 = lVar7 + 2;
        puVar3 = (undefined1 *)(param_2 + lVar7 + 2);
        uVar5 = *(undefined4 *)((long)param_1 + 0x14);
        puVar3[2] = (char)uVar5;
        *puVar3 = (char)((uint)uVar5 >> 0x10);
        puVar3[1] = (char)((uint)uVar5 >> 8);
        lVar11 = *param_3;
        lVar7 = lVar11 + 3;
        *param_3 = lVar7;
        lVar16 = param_1[3];
        *param_3 = lVar11 + 4;
        *(char *)(param_2 + lVar7) = (char)lVar16;
        puVar4 = (ushort *)param_1[0xc];
        if ((ushort *)param_1[0xb] != puVar4) {
          lVar7 = *param_3;
          puVar12 = (ushort *)param_1[0xb];
          do {
            puVar13 = puVar12 + 1;
            *(ushort *)(param_2 + lVar7) = *puVar12 >> 8 | (ushort)((*puVar12 & 0xff00ff) << 8);
            lVar7 = *param_3 + 2;
            *param_3 = lVar7;
            puVar12 = puVar13;
          } while (puVar13 != puVar4);
        }
        uVar8 = param_1[0x10];
        if (uVar8 == 0) goto LAB_007d34d4;
        pbVar2 = (byte *)(param_1 + 0xe);
        if ((char)param_1[0x11] == '\x01') {
          bVar14 = (byte)(uVar8 >> 8) | (byte)(((uint)*pbVar2 << 0xd) >> 8);
        }
        else if (uVar8 < 8) {
          uVar15 = (uint)*pbVar2 << 0xc | 0xffffc000;
          if (uVar8 == 1) {
            bVar14 = (byte)(uVar15 >> 8);
          }
          else {
            uVar15 = uVar15 | (uint)*(byte *)((long)param_1 + 0x71) << 10;
            if ((uVar8 != 2) &&
               (uVar15 = uVar15 | (uint)*(byte *)((long)param_1 + 0x72) << 8, uVar8 != 3)) {
              uVar17 = (uint)*(byte *)((long)param_1 + 0x73) << 6;
              if (uVar8 == 4) {
                bVar14 = (byte)((uVar15 | uVar17) >> 8);
              }
              else {
                uVar17 = uVar15 | uVar17 | (uint)*(byte *)((long)param_1 + 0x74) << 4;
                if (uVar8 == 5) goto LAB_007d3484;
                uVar17 = uVar17 | (uint)*(byte *)((long)param_1 + 0x75) << 2;
                bVar14 = (byte)(uVar17 >> 8);
                if (uVar8 != 6) {
                  uVar8 = (ulong)(*(byte *)((long)param_1 + 0x76) | uVar17);
                  goto LAB_007d34b8;
                }
              }
              goto LAB_007d3488;
            }
            bVar14 = (byte)(uVar15 >> 8);
          }
          uVar8 = 0;
        }
        else {
          if (0xe < uVar8) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/array:282: libc++ Hardening assertion __n < _Size failed: out-of-bounds access in std::array<T, N>\n"
                      );
          }
          uVar19 = 0;
          uVar17 = 0x8000;
          do {
            pbVar1 = pbVar2 + uVar19;
            iVar18 = (int)uVar19;
            uVar19 = uVar19 + 1;
            uVar17 = (uint)*pbVar1 << (ulong)(0xdU - iVar18 & 0x1f) | uVar17;
          } while (uVar8 != uVar19);
LAB_007d3484:
          bVar14 = (byte)(uVar17 >> 8);
LAB_007d3488:
          uVar8 = (ulong)uVar17;
        }
LAB_007d34b8:
        lVar7 = *param_3;
        *(byte *)(param_2 + lVar7) = bVar14;
        ((byte *)(param_2 + lVar7))[1] = (byte)uVar8;
        *param_3 = *param_3 + 2;
LAB_007d34d4:
        if (*(char *)((long)param_1 + 0x19) == '\x01') {
          lVar16 = param_1[6];
          for (lVar7 = param_1[5]; lVar7 != lVar16; lVar7 = lVar7 + 4) {
            while( true ) {
              uVar6 = *(ushort *)(lVar7 + 2);
              if (uVar6 < 0x100) break;
              lVar11 = *param_3;
              lVar7 = lVar7 + 4;
              *(undefined1 *)(param_2 + lVar11) = (char)(uVar6 >> 8);
              ((undefined1 *)(param_2 + lVar11))[1] = (char)uVar6;
              *param_3 = *param_3 + 2;
              if (lVar7 == lVar16) goto LAB_007d3544;
            }
            lVar11 = *param_3;
            *param_3 = lVar11 + 1;
            *(char *)(param_2 + lVar11) = (char)uVar6;
          }
        }
LAB_007d3544:
        lVar7 = lVar20;
        if (lVar9 != lVar21) {
          while (lVar7 + -1 != 0) {
            lVar16 = *param_3;
            *param_3 = lVar16 + 1;
            *(undefined1 *)(param_2 + lVar16) = 0;
            lVar7 = lVar7 + -1;
          }
          lVar7 = *param_3;
          *param_3 = lVar7 + 1;
          *(char *)(param_2 + lVar7) = (char)lVar20;
        }
        return 1;
      }
      uVar8 = FUN_007cd570(param_1,param_2,param_3,param_5,param_6);
    } while ((uVar8 & 1) != 0);
  }
  return 0;
}


// ===== 007d35fc  FUN_007d35fc =====

undefined2 * FUN_007d35fc(long *param_1,undefined2 *param_2,ulong param_3,undefined2 *param_4)

{
  undefined2 uVar1;
  bool bVar2;
  void *pvVar3;
  void *pvVar4;
  size_t __n;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  ulong uVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined2 *puVar15;
  long lVar16;
  undefined8 uVar17;
  
  if (param_3 == 0) {
    return param_2;
  }
  puVar15 = (undefined2 *)param_1[1];
  if ((ulong)(param_1[2] - (long)puVar15 >> 1) < param_3) {
    lVar16 = *param_1;
    uVar12 = param_3 + ((long)puVar15 - lVar16 >> 1);
    if ((long)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d4754();
    }
    uVar5 = param_1[2] - lVar16;
    uVar9 = uVar5;
    if (uVar5 <= uVar12) {
      uVar9 = uVar12;
    }
    if (0x7ffffffffffffffd < uVar5) {
      uVar9 = 0x7fffffffffffffff;
    }
    if (uVar9 == 0) {
      pvVar3 = (void *)0x0;
    }
    else {
      if ((long)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      pvVar3 = operator_new(uVar9 << 1);
    }
    lVar6 = (long)param_2 - lVar16;
    puVar8 = (undefined2 *)((long)pvVar3 + lVar6);
    puVar10 = puVar8;
    if (param_3 * 2 != 0) {
      uVar14 = lVar16 - ((long)pvVar3 + (long)param_2);
      uVar5 = uVar14 >> 1;
      uVar13 = param_3 * 2 - 2 >> 1;
      uVar12 = uVar5;
      if (uVar13 <= uVar5) {
        uVar12 = uVar13;
      }
      puVar15 = (undefined2 *)((long)pvVar3 + lVar6);
      if (0x2f < uVar12) {
        if (uVar13 <= uVar5) {
          uVar5 = uVar13;
        }
        puVar15 = (undefined2 *)((long)pvVar3 + lVar6);
        if ((puVar8 <= puVar8 + uVar5) &&
           (puVar15 = (undefined2 *)((long)pvVar3 + lVar6), (uVar14 & 1) == 0)) {
          uVar5 = (ulong)(lVar16 - ((long)pvVar3 + (long)param_2)) >> 1;
          if (uVar13 <= uVar5) {
            uVar5 = uVar13;
          }
          if (((undefined2 *)((long)pvVar3 + (long)param_2 + (uVar5 * 2 - lVar16) + 2) <= param_4)
             || (puVar15 = (undefined2 *)((long)pvVar3 + lVar6), param_4 + 1 <= puVar8)) {
            uVar1 = *param_4;
            uVar17 = CONCAT26(uVar1,CONCAT24(uVar1,CONCAT22(uVar1,uVar1)));
            uVar5 = uVar12 + 1 & 0xf;
            uVar13 = 0x10;
            if (uVar5 != 0) {
              uVar13 = uVar5;
            }
            puVar7 = (undefined8 *)((long)pvVar3 + lVar6 + 0x10);
            lVar16 = (uVar12 + 1) - uVar13;
            puVar15 = puVar8 + lVar16;
            do {
              lVar16 = lVar16 + -0x10;
              puVar7[-1] = uVar17;
              puVar7[-2] = CONCAT26(uVar1,CONCAT24(uVar1,CONCAT22(uVar1,uVar1)));
              puVar7[1] = uVar17;
              *puVar7 = CONCAT26(uVar1,CONCAT24(uVar1,CONCAT22(uVar1,uVar1)));
              puVar7 = puVar7 + 4;
            } while (lVar16 != 0);
          }
        }
      }
      do {
        if (puVar15 == (undefined2 *)0x0) goto LAB_007d39ec;
        puVar10 = puVar15 + 1;
        *puVar15 = *param_4;
        puVar15 = puVar10;
      } while (puVar10 != puVar8 + param_3);
      puVar15 = (undefined2 *)param_1[1];
      puVar10 = puVar8 + param_3;
    }
    memcpy(puVar10,param_2,(long)puVar15 - (long)param_2);
    lVar16 = param_1[1];
    param_1[1] = (long)param_2;
    __n = (long)param_2 - *param_1;
    memcpy((void *)((long)puVar8 - __n),(void *)*param_1,__n);
    pvVar4 = (void *)*param_1;
    *param_1 = (long)puVar8 - __n;
    param_1[1] = (long)puVar10 + (lVar16 - (long)param_2);
    param_1[2] = (long)((long)pvVar3 + uVar9 * 2);
    if (pvVar4 == (void *)0x0) {
      return puVar8;
    }
    operator_delete(pvVar4);
    return puVar8;
  }
  uVar5 = (long)puVar15 - (long)param_2 >> 1;
  uVar9 = param_3 - uVar5;
  puVar8 = puVar15;
  uVar12 = param_3;
  if (uVar5 <= param_3 && uVar9 != 0) {
    if ((uVar9 & 0x7fffffffffffffff) != 0) {
      puVar8 = puVar15 + uVar9;
      uVar9 = (param_3 * 2 - ((long)puVar15 - (long)param_2)) - 2 >> 1;
      uVar12 = (ulong)-(long)puVar15 >> 1;
      if (uVar9 <= (ulong)-(long)puVar15 >> 1) {
        uVar12 = uVar9;
      }
      puVar10 = puVar15;
      if (0x37 < uVar12) {
        uVar13 = (ulong)-(long)puVar15 >> 1;
        if (uVar9 <= (ulong)-(long)puVar15 >> 1) {
          uVar13 = uVar9;
        }
        if ((puVar15 <= puVar15 + uVar13) && (((ulong)puVar15 & 1) == 0)) {
          uVar13 = (ulong)-(long)puVar15 >> 1;
          if (uVar9 <= (ulong)-(long)puVar15 >> 1) {
            uVar13 = uVar9;
          }
          if ((puVar15 + uVar13 + 1 <= param_4) || (param_4 + 1 <= puVar15)) {
            uVar1 = *param_4;
            uVar17 = CONCAT26(uVar1,CONCAT24(uVar1,CONCAT22(uVar1,uVar1)));
            uVar9 = uVar12 + 1 & 0xf;
            uVar13 = 0x10;
            if (uVar9 != 0) {
              uVar13 = uVar9;
            }
            puVar7 = (undefined8 *)(puVar15 + 8);
            lVar16 = (uVar12 + 1) - uVar13;
            puVar10 = puVar15 + lVar16;
            do {
              lVar16 = lVar16 + -0x10;
              puVar7[-1] = uVar17;
              puVar7[-2] = CONCAT26(uVar1,CONCAT24(uVar1,CONCAT22(uVar1,uVar1)));
              puVar7[1] = uVar17;
              *puVar7 = CONCAT26(uVar1,CONCAT24(uVar1,CONCAT22(uVar1,uVar1)));
              puVar7 = puVar7 + 4;
            } while (lVar16 != 0);
          }
        }
      }
      do {
        if (puVar10 == (undefined2 *)0x0) goto LAB_007d39ec;
        puVar11 = puVar10 + 1;
        *puVar10 = *param_4;
        puVar10 = puVar11;
      } while (puVar11 != puVar8);
    }
    param_1[1] = (long)puVar8;
    uVar12 = uVar5;
    if (puVar15 == param_2) {
      return param_2;
    }
  }
  puVar11 = puVar8;
  for (puVar10 = puVar8 + -param_3; puVar10 < puVar15; puVar10 = puVar10 + 1) {
    if (puVar11 == (undefined2 *)0x0) {
LAB_007d39ec:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *puVar11 = *puVar10;
    puVar11 = puVar11 + 1;
  }
  param_1[1] = (long)puVar11;
  memmove((void *)((long)puVar8 - ((long)puVar8 - (long)(param_2 + param_3))),param_2,
          (long)puVar8 - (long)(param_2 + param_3));
  if ((undefined2 *)param_1[1] < param_2) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
  if ((undefined2 *)param_1[1] <= param_4 || param_4 < param_2) {
    param_3 = 0;
  }
  uVar1 = param_4[param_3];
  puVar15 = param_2;
  if (3 < uVar12) {
    if (uVar12 < 0x10) {
      uVar5 = 0;
    }
    else {
      uVar17 = CONCAT26(uVar1,CONCAT24(uVar1,CONCAT22(uVar1,uVar1)));
      uVar5 = uVar12 & 0xfffffffffffffff0;
      puVar7 = (undefined8 *)(param_2 + 8);
      uVar9 = uVar12 & 0xfffffffffffffff0;
      do {
        uVar9 = uVar9 - 0x10;
        puVar7[-1] = uVar17;
        puVar7[-2] = CONCAT26(uVar1,CONCAT24(uVar1,CONCAT22(uVar1,uVar1)));
        puVar7[1] = uVar17;
        *puVar7 = CONCAT26(uVar1,CONCAT24(uVar1,CONCAT22(uVar1,uVar1)));
        puVar7 = puVar7 + 4;
      } while (uVar9 != 0);
      if (uVar12 == uVar5) {
        return param_2;
      }
      if ((uVar12 & 0xc) == 0) {
        uVar12 = uVar12 & 0xf;
        puVar15 = param_2 + uVar5;
        goto LAB_007d391c;
      }
    }
    uVar9 = uVar12 & 0xfffffffffffffffc;
    lVar16 = uVar5 - uVar9;
    puVar7 = (undefined8 *)(param_2 + uVar5);
    do {
      lVar16 = lVar16 + 4;
      *puVar7 = CONCAT26(uVar1,CONCAT24(uVar1,CONCAT22(uVar1,uVar1)));
      puVar7 = puVar7 + 1;
    } while (lVar16 != 0);
    bVar2 = uVar12 == uVar9;
    puVar15 = param_2 + uVar9;
    uVar12 = uVar12 & 3;
    if (bVar2) {
      return param_2;
    }
  }
LAB_007d391c:
  do {
    uVar12 = uVar12 - 1;
    *puVar15 = uVar1;
    puVar15 = puVar15 + 1;
  } while (uVar12 != 0);
  return param_2;
}


// ===== 007d3a1c  FUN_007d3a1c =====

undefined1 *
FUN_007d3a1c(long *param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4,
            size_t param_5)

{
  undefined1 *puVar1;
  void *__src;
  ulong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  void *pvVar5;
  ulong uVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  size_t sVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  uVar2 = param_5 - 1;
  puVar15 = param_2;
  if (0 < (long)param_5) {
    puVar1 = (undefined1 *)param_1[1];
    if (param_1[2] - (long)puVar1 < (long)param_5) {
      lVar18 = *param_1;
      puVar1 = puVar1 + (param_5 - lVar18);
      if ((long)puVar1 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d34c0();
      }
      uVar8 = param_1[2] - lVar18;
      lVar17 = (long)param_2 - lVar18;
      puVar9 = (undefined1 *)(uVar8 * 2);
      if (puVar9 < puVar1 || (long)puVar9 - (long)puVar1 == 0) {
        puVar9 = puVar1;
      }
      if (0x3ffffffffffffffe < uVar8) {
        puVar9 = (undefined1 *)0x7fffffffffffffff;
      }
      if (puVar9 == (undefined1 *)0x0) {
        pvVar4 = (void *)0x0;
      }
      else {
        pvVar4 = operator_new((ulong)puVar9);
      }
      puVar15 = (undefined1 *)((long)pvVar4 + lVar17);
      uVar6 = lVar18 - (long)((long)pvVar4 + (long)param_2);
      puVar1 = puVar15 + param_5;
      uVar8 = uVar6;
      if (uVar2 <= uVar6) {
        uVar8 = uVar2;
      }
      uVar8 = uVar8 + 1;
      puVar10 = puVar15;
      if (0x20 < uVar8) {
        if (uVar2 <= uVar6) {
          uVar6 = uVar2;
        }
        if (((puVar15 <= puVar15 + uVar6) && (param_3 <= param_3 + uVar6)) &&
           (puVar10 = (undefined1 *)((long)pvVar4 + lVar17),
           (undefined1 *)0x1f <
           (undefined1 *)((long)pvVar4 + (long)param_2) + (-lVar18 - (long)param_3))) {
          uVar2 = 0x20;
          if ((uVar8 & 0x1f) != 0) {
            uVar2 = uVar8 & 0x1f;
          }
          puVar12 = (undefined8 *)((long)pvVar4 + lVar17 + 0x10);
          puVar14 = (undefined8 *)(param_3 + 0x10);
          lVar18 = uVar8 - uVar2;
          puVar10 = puVar15 + lVar18;
          param_3 = param_3 + lVar18;
          do {
            puVar3 = puVar14 + -1;
            uVar19 = puVar14[-2];
            uVar21 = puVar14[1];
            uVar20 = *puVar14;
            lVar18 = lVar18 + -0x20;
            puVar14 = puVar14 + 4;
            puVar12[-1] = *puVar3;
            puVar12[-2] = uVar19;
            puVar12[1] = uVar21;
            *puVar12 = uVar20;
            puVar12 = puVar12 + 4;
          } while (lVar18 != 0);
        }
      }
      do {
        if (puVar10 == (undefined1 *)0x0) {
LAB_007d3e8c:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        puVar7 = puVar10 + 1;
        *puVar10 = *param_3;
        puVar10 = puVar7;
        param_3 = param_3 + 1;
      } while (puVar7 != puVar1);
      memcpy(puVar1,param_2,param_1[1] - (long)param_2);
      __src = (void *)*param_1;
      lVar18 = param_1[1];
      param_1[1] = (long)param_2;
      memcpy(puVar15 + ((long)__src - (long)param_2),__src,(long)param_2 - (long)__src);
      pvVar5 = (void *)*param_1;
      *param_1 = (long)(puVar15 + ((long)__src - (long)param_2));
      param_1[1] = (long)(puVar1 + (lVar18 - (long)param_2));
      param_1[2] = (long)((long)pvVar4 + (long)puVar9);
      if (pvVar5 != (void *)0x0) {
        operator_delete(pvVar5);
      }
    }
    else {
      sVar16 = (long)puVar1 - (long)param_2;
      if ((long)sVar16 < (long)param_5) {
        puVar9 = param_3 + sVar16;
        puVar10 = puVar1;
        if (puVar9 != param_4) {
          puVar7 = param_4 + (long)param_2 + (~(ulong)puVar1 - (long)param_3);
          puVar10 = puVar7;
          if ((undefined1 *)-(long)puVar1 <= puVar7) {
            puVar10 = (undefined1 *)-(long)puVar1;
          }
          puVar10 = puVar10 + 1;
          puVar11 = puVar1;
          puVar13 = puVar1;
          if ((undefined1 *)0x20 < puVar10) {
            if ((undefined1 *)-(long)puVar1 <= puVar7) {
              puVar7 = (undefined1 *)-(long)puVar1;
            }
            if (((puVar1 <= puVar1 + (long)puVar7) && (puVar9 <= puVar9 + (long)puVar7)) &&
               (0x1f < (ulong)((long)param_2 - (long)param_3))) {
              uVar2 = 0x20;
              if (((ulong)puVar10 & 0x1f) != 0) {
                uVar2 = (ulong)puVar10 & 0x1f;
              }
              puVar12 = (undefined8 *)(puVar1 + 0x10);
              lVar18 = (long)puVar10 - uVar2;
              puVar9 = puVar9 + lVar18;
              puVar11 = puVar1 + lVar18;
              puVar14 = (undefined8 *)(param_3 + ((long)puVar12 - (long)param_2));
              do {
                puVar3 = puVar14 + -1;
                uVar19 = puVar14[-2];
                uVar21 = puVar14[1];
                uVar20 = *puVar14;
                lVar18 = lVar18 + -0x20;
                puVar14 = puVar14 + 4;
                puVar12[-1] = *puVar3;
                puVar12[-2] = uVar19;
                puVar12[1] = uVar21;
                *puVar12 = uVar20;
                puVar12 = puVar12 + 4;
                puVar13 = puVar11;
              } while (lVar18 != 0);
            }
          }
          do {
            if (puVar13 == (undefined1 *)0x0) goto LAB_007d3e8c;
            puVar7 = puVar9 + 1;
            *puVar13 = *puVar9;
            puVar10 = puVar11 + 1;
            puVar11 = puVar11 + 1;
            puVar9 = puVar7;
            puVar13 = puVar13 + 1;
          } while (puVar7 != param_4);
        }
        param_1[1] = (long)puVar10;
        if ((long)sVar16 < 1) {
          return param_2;
        }
        puVar9 = puVar10 + -param_5;
        puVar7 = puVar10;
        if (puVar9 < puVar1) {
          puVar11 = puVar1 + ~(ulong)puVar10 + param_5;
          puVar7 = puVar11;
          if ((undefined1 *)-(long)puVar10 < puVar11) {
            puVar7 = (undefined1 *)-(long)puVar10;
          }
          puVar7 = puVar7 + 1;
          puVar13 = puVar10;
          if ((undefined1 *)0x20 < puVar7) {
            if ((undefined1 *)-(long)puVar10 < puVar11) {
              puVar11 = (undefined1 *)-(long)puVar10;
            }
            if (((puVar10 <= puVar10 + (long)puVar11) && (puVar9 <= puVar9 + (long)puVar11)) &&
               (0x1f < param_5)) {
              uVar2 = 0x20;
              if (((ulong)puVar7 & 0x1f) != 0) {
                uVar2 = (ulong)puVar7 & 0x1f;
              }
              puVar12 = (undefined8 *)(puVar10 + 0x10);
              lVar18 = (long)puVar7 - uVar2;
              puVar14 = (undefined8 *)((long)puVar12 - param_5);
              puVar9 = puVar9 + lVar18;
              puVar13 = puVar10 + lVar18;
              do {
                puVar3 = puVar14 + -1;
                uVar19 = puVar14[-2];
                uVar21 = puVar14[1];
                uVar20 = *puVar14;
                lVar18 = lVar18 + -0x20;
                puVar14 = puVar14 + 4;
                puVar12[-1] = *puVar3;
                puVar12[-2] = uVar19;
                puVar12[1] = uVar21;
                *puVar12 = uVar20;
                puVar12 = puVar12 + 4;
              } while (lVar18 != 0);
            }
          }
          do {
            if (puVar13 == (undefined1 *)0x0) goto LAB_007d3e8c;
            puVar11 = puVar9 + 1;
            puVar7 = puVar13 + 1;
            *puVar13 = *puVar9;
            puVar9 = puVar11;
            puVar13 = puVar7;
          } while (puVar11 != puVar1);
        }
        param_1[1] = (long)puVar7;
        memmove(puVar10 + -((long)puVar10 - (long)(param_2 + param_5)),param_2,
                (long)puVar10 - (long)(param_2 + param_5));
        param_5 = sVar16;
      }
      else {
        puVar9 = puVar1 + -param_5;
        puVar10 = puVar1;
        if (puVar9 < puVar1) {
          uVar8 = uVar2;
          if ((ulong)-(long)puVar1 < uVar2) {
            uVar8 = -(long)puVar1;
          }
          uVar8 = uVar8 + 1;
          puVar7 = puVar1;
          if (0x20 < uVar8) {
            if ((ulong)-(long)puVar1 < uVar2) {
              uVar2 = -(long)puVar1;
            }
            if (((puVar1 <= puVar1 + uVar2) && (puVar9 <= puVar9 + uVar2)) && (0x1f < param_5)) {
              uVar2 = 0x20;
              if ((uVar8 & 0x1f) != 0) {
                uVar2 = uVar8 & 0x1f;
              }
              puVar12 = (undefined8 *)(puVar1 + 0x10);
              lVar18 = uVar8 - uVar2;
              puVar14 = (undefined8 *)((long)puVar12 - param_5);
              puVar9 = puVar9 + lVar18;
              puVar7 = puVar1 + lVar18;
              do {
                puVar3 = puVar14 + -1;
                uVar19 = puVar14[-2];
                uVar21 = puVar14[1];
                uVar20 = *puVar14;
                lVar18 = lVar18 + -0x20;
                puVar14 = puVar14 + 4;
                puVar12[-1] = *puVar3;
                puVar12[-2] = uVar19;
                puVar12[1] = uVar21;
                *puVar12 = uVar20;
                puVar12 = puVar12 + 4;
              } while (lVar18 != 0);
            }
          }
          do {
            if (puVar7 == (undefined1 *)0x0) goto LAB_007d3e8c;
            puVar11 = puVar9 + 1;
            puVar10 = puVar7 + 1;
            *puVar7 = *puVar9;
            puVar9 = puVar11;
            puVar7 = puVar10;
          } while (puVar11 != puVar1);
        }
        param_1[1] = (long)puVar10;
        memmove(puVar1 + -((long)puVar1 - (long)(param_2 + param_5)),param_2,
                (long)puVar1 - (long)(param_2 + param_5));
      }
      memmove(param_2,param_3,param_5);
    }
  }
  return puVar15;
}


// ===== 007d3ec4  FUN_007d3ec4 =====

void FUN_007d3ec4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 007d3edc  FUN_007d3edc =====

undefined2 * FUN_007d3edc(long *param_1,undefined2 *param_2,undefined2 *param_3)

{
  ulong uVar1;
  undefined2 uVar2;
  void *pvVar3;
  void *pvVar4;
  size_t __n;
  ulong uVar5;
  ulong uVar6;
  void *__dest;
  undefined2 *puVar7;
  
  puVar7 = (undefined2 *)(param_1[1] - *param_1);
  uVar1 = ((long)puVar7 >> 2) + 1;
  if (uVar1 >> 0x3e != 0) {
    FUN_007d3ec4();
LAB_007d3fe0:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  uVar5 = param_1[2] - *param_1;
  uVar6 = (long)uVar5 >> 1;
  if (uVar6 <= uVar1) {
    uVar6 = uVar1;
  }
  if (0x7ffffffffffffffb < uVar5) {
    uVar6 = 0x3fffffffffffffff;
  }
  if (uVar6 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    if (uVar6 >> 0x3e != 0) goto LAB_007d3fe0;
    pvVar3 = operator_new(uVar6 << 2);
    puVar7 = (undefined2 *)((long)pvVar3 + (long)puVar7);
  }
  if (puVar7 != (undefined2 *)0x0) {
    uVar2 = *param_3;
    *puVar7 = *param_2;
    puVar7[1] = uVar2;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar7 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar4 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(puVar7 + 2);
    param_1[2] = (long)((long)pvVar3 + uVar6 * 4);
    if (pvVar4 != (void *)0x0) {
      operator_delete(pvVar4);
    }
    return puVar7 + 2;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 007d3fe4  FUN_007d3fe4 =====

undefined2 * FUN_007d3fe4(long *param_1,undefined2 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  void *pvVar3;
  void *pvVar4;
  size_t __n;
  ulong uVar5;
  ulong uVar6;
  void *__dest;
  undefined2 *puVar7;
  
  puVar7 = (undefined2 *)(param_1[1] - *param_1);
  uVar1 = ((long)puVar7 >> 2) + 1;
  if (uVar1 >> 0x3e != 0) {
    FUN_007d3ec4();
LAB_007d40e8:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  uVar5 = param_1[2] - *param_1;
  uVar6 = (long)uVar5 >> 1;
  if (uVar6 <= uVar1) {
    uVar6 = uVar1;
  }
  if (0x7ffffffffffffffb < uVar5) {
    uVar6 = 0x3fffffffffffffff;
  }
  if (uVar6 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    if (uVar6 >> 0x3e != 0) goto LAB_007d40e8;
    pvVar3 = operator_new(uVar6 << 2);
    puVar7 = (undefined2 *)((long)pvVar3 + (long)puVar7);
  }
  if (puVar7 != (undefined2 *)0x0) {
    uVar2 = *param_3;
    *puVar7 = *param_2;
    puVar7[1] = (short)uVar2;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar7 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar4 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(puVar7 + 2);
    param_1[2] = (long)((long)pvVar3 + uVar6 * 4);
    if (pvVar4 != (void *)0x0) {
      operator_delete(pvVar4);
    }
    return puVar7 + 2;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 007d40ec  FUN_007d40ec =====

undefined2 * FUN_007d40ec(long *param_1,undefined2 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  size_t __n;
  long lVar4;
  ulong uVar5;
  undefined2 *puVar6;
  void *__dest;
  
  puVar6 = (undefined2 *)(param_1[1] - *param_1);
  lVar4 = (long)puVar6 >> 1;
  if (lVar4 == -2 || lVar4 + 2 < 0 != SCARRY8(lVar4,2)) {
                    /* WARNING: Subroutine does not return */
    FUN_005d4754();
  }
  uVar5 = param_1[2] - *param_1;
  uVar1 = uVar5;
  if (uVar5 <= lVar4 + 1U) {
    uVar1 = lVar4 + 1;
  }
  if (0x7ffffffffffffffd < uVar5) {
    uVar1 = 0x7fffffffffffffff;
  }
  if (uVar1 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if ((long)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    pvVar2 = operator_new(uVar1 << 1);
    puVar6 = (undefined2 *)((long)pvVar2 + (long)puVar6);
  }
  if (puVar6 != (undefined2 *)0x0) {
    *puVar6 = *param_2;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar6 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(puVar6 + 1);
    param_1[2] = (long)((long)pvVar2 + uVar1 * 2);
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


// ===== 007d41d8  FUN_007d41d8 =====

uint FUN_007d41d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  undefined1 *puStack_28;
  undefined1 *local_20;
  
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  local_20 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007d4338(&local_40,param_1,param_2,param_3,param_4);
  return ~(uint)local_30 >> 0x1f;
}


// ===== 007d4228  FUN_007d4228 =====

long FUN_007d4228(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  undefined1 *puStack_28;
  undefined1 *puStack_20;
  undefined1 *puStack_18;
  
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_18 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_20 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007d66a0(&local_60,0,0,param_1,param_2,param_3);
  uVar3 = FUN_007d6c3c(&local_60);
  uVar2 = uVar3 + 7;
  if (-1 < (int)uVar3) {
    uVar2 = uVar3;
  }
  iVar1 = (int)uVar2 >> 3;
  if (0 < (int)(uVar3 & 0x80000007)) {
    iVar1 = iVar1 + 1;
  }
  return (long)iVar1;
}


// ===== 007d4298  FUN_007d4298 =====

uint FUN_007d4298(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  uint uVar1;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  undefined1 *puStack_28;
  undefined1 *puStack_20;
  undefined1 *puStack_18;
  
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_18 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_20 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007d66a0(&local_60,param_1,param_2,param_3,param_4,param_5);
  uVar1 = FUN_007d6838(&local_60);
  return uVar1 & 1;
}


// ===== 007d42f0  FUN_007d42f0 =====

bool FUN_007d42f0(byte *param_1,ulong param_2,uint *param_3)

{
  if (2 < param_2) {
    *(byte *)(param_3 + 2) = *param_1 >> 7;
    *(byte *)((long)param_3 + 9) = *param_1 >> 6 & 1;
    param_3[1] = *param_1 & 0x3f;
    *param_3 = (uint)(*(ushort *)(param_1 + 1) >> 8) | (*(ushort *)(param_1 + 1) & 0xff00ff) << 8;
  }
  return 2 < param_2;
}


// ===== 007d4338  FUN_007d4338 =====

void FUN_007d4338(long *param_1,long param_2,ulong param_3,long param_4,long param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  
  *param_1 = param_5;
  plVar5 = param_1 + 1;
  *plVar5 = param_2;
  if ((param_3 >> 0x1c & 0x1ffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../rtc_base/numerics/safe_conversions.h",0x24,
                 "IsValueInRangeForNumericType<Dst>(value)",&DAT_001f5fa0);
  }
  *(undefined1 *)((long)param_1 + 0x14) = 1;
  *(int *)(param_1 + 2) = (int)(param_3 << 3);
  param_1[3] = 0;
  param_1[4] = 0;
  iVar1 = FUN_007d60c4(plVar5);
  *(bool *)*param_1 = iVar1 != 0;
  iVar1 = FUN_007d60c4(plVar5);
  *(bool *)(*param_1 + 1) = iVar1 != 0;
  uVar2 = FUN_007d5db0(plVar5,6);
  *(undefined4 *)(param_1 + 3) = uVar2;
  uVar3 = FUN_007d5db0(plVar5,0x10);
  *(uint *)(*param_1 + 4) = uVar3 & 0xffff;
  if (3 < param_3) {
    FUN_007d44bc(param_1);
  }
  lVar4 = *(long *)(param_5 + 0x88);
  if (lVar4 == 0) {
    param_1[4] = param_4;
    if (param_4 == 0) {
      *(undefined4 *)(param_1 + 2) = 0xffffffff;
      return;
    }
  }
  else {
    param_1[4] = lVar4;
    param_4 = lVar4;
  }
  if (*(char *)((long)param_1 + 0x1c) == '\x01') {
    uVar2 = FUN_007d5db0(plVar5,*(undefined4 *)(param_4 + 4));
    if (*(char *)(param_5 + 0x80) == '\x01') {
      *(undefined4 *)(param_5 + 0x7c) = uVar2;
    }
    else {
      if ((undefined4 *)(param_5 + 0x7c) == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *(undefined4 *)(param_5 + 0x7c) = uVar2;
      *(undefined1 *)(param_5 + 0x80) = 1;
    }
  }
  FUN_007d459c(param_1);
  return;
}


// ===== 007d44bc  FUN_007d44bc =====

void FUN_007d44bc(long *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  
  iVar1 = FUN_007d60c4(param_1 + 1);
  iVar2 = FUN_007d60c4(param_1 + 1);
  *(bool *)((long)param_1 + 0x1c) = iVar2 != 0;
  iVar2 = FUN_007d60c4(param_1 + 1);
  *(bool *)((long)param_1 + 0x1d) = iVar2 != 0;
  iVar2 = FUN_007d60c4(param_1 + 1);
  *(bool *)((long)param_1 + 0x1e) = iVar2 != 0;
  iVar2 = FUN_007d60c4(param_1 + 1);
  *(bool *)((long)param_1 + 0x1f) = iVar2 != 0;
  if (iVar1 != 0) {
    FUN_007d47cc(param_1);
    lVar3 = *param_1;
    uVar4 = ~(uint)(-1L << ((ulong)*(uint *)(*(long *)(lVar3 + 0x88) + 4) & 0x3f));
    if (*(char *)(lVar3 + 0x80) == '\x01') {
      *(uint *)(lVar3 + 0x7c) = uVar4;
    }
    else {
      if ((uint *)(lVar3 + 0x7c) == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *(uint *)(lVar3 + 0x7c) = uVar4;
      *(undefined1 *)(lVar3 + 0x80) = 1;
    }
  }
  return;
}


// ===== 007d459c  FUN_007d459c =====

void FUN_007d459c(long *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  int *piVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  uint *puVar12;
  undefined8 *puVar13;
  
  piVar8 = (int *)param_1[4];
  uVar5 = ((int)param_1[3] - *piVar8) + 0x40;
  uVar9 = (*(long *)(piVar8 + 0x1c) - *(long *)(piVar8 + 0x1a) >> 3) * 0x4ec4ec4ec4ec4ec5;
  uVar1 = uVar5 & 0x3f;
  if ((int)uVar5 < 1) {
    uVar1 = -(-uVar5 & 0x3f);
  }
  if (uVar9 < (ulong)(long)(int)uVar1 || uVar9 - (long)(int)uVar1 == 0) {
    *(undefined4 *)(param_1 + 2) = 0xffffffff;
  }
  else {
    lVar10 = *param_1;
    puVar13 = (undefined8 *)(*(long *)(piVar8 + 0x1a) + (long)(int)uVar1 * 0x68);
    *(undefined8 *)(lVar10 + 8) = *puVar13;
    if ((undefined8 *)(lVar10 + 8) != puVar13) {
      puVar2 = puVar13 + 2;
      if ((puVar13[1] & 1) != 0) {
        puVar2 = (undefined8 *)puVar13[2];
      }
      FUN_0060adc4(lVar10 + 0x10,puVar2,(long)(puVar13[1] << 1) >> 2);
      puVar2 = puVar13 + 8;
      if ((puVar13[7] & 1) != 0) {
        puVar2 = (undefined8 *)puVar13[8];
      }
      FUN_007d51b0(lVar10 + 0x40,puVar2,(long)(puVar13[7] << 1) >> 2);
      puVar2 = puVar13 + 0xb;
      if ((puVar13[10] & 1) != 0) {
        puVar2 = (undefined8 *)puVar13[0xb];
      }
      FUN_007d51b0(lVar10 + 0x58,puVar2,(long)(puVar13[10] << 1) >> 2);
    }
    if (*(char *)((long)param_1 + 0x1d) == '\x01') {
      uVar9 = *(ulong *)(*param_1 + 0x10);
      plVar11 = (long *)(*param_1 + 0x18);
      if ((uVar9 & 1) != 0) {
        plVar11 = (long *)*plVar11;
      }
      uVar9 = uVar9 & 0x7ffffffffffffffe;
      uVar6 = uVar9 << 1;
      while (uVar9 != 0) {
        uVar4 = FUN_007d5db0(param_1 + 1,2);
        *(undefined4 *)plVar11 = uVar4;
        uVar6 = uVar6 - 4;
        plVar11 = (long *)((long)plVar11 + 4);
        uVar9 = uVar6;
      }
    }
    if (*(char *)((long)param_1 + 0x1e) == '\x01') {
      FUN_007d4e60(param_1);
    }
    if (*(char *)((long)param_1 + 0x1f) == '\x01') {
      uVar9 = *(ulong *)(*param_1 + 0x58);
      puVar12 = (uint *)(*param_1 + 0x60);
      if ((uVar9 & 1) != 0) {
        puVar12 = *(uint **)puVar12;
      }
      uVar9 = uVar9 & 0x7ffffffffffffffe;
      uVar6 = uVar9 << 1;
      while (uVar9 != 0) {
        uVar5 = FUN_007d5db0(param_1 + 1,8);
        *puVar12 = uVar5 & 0xff;
        uVar6 = uVar6 - 4;
        puVar12 = puVar12 + 1;
        uVar9 = uVar6;
      }
    }
    lVar10 = *param_1;
    uVar9 = *(ulong *)(param_1[4] + 0x40);
    if (uVar9 < 2) {
      if (*(char *)(lVar10 + 0x78) == '\x01') {
        *(undefined1 *)(lVar10 + 0x78) = 0;
      }
    }
    else {
      uVar6 = (ulong)*(int *)(lVar10 + 8);
      if (uVar9 >> 1 <= uVar6) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x7d47b8);
        (*pcVar3)();
      }
      puVar13 = (undefined8 *)(param_1[4] + 0x48);
      if ((uVar9 & 1) != 0) {
        puVar13 = (undefined8 *)*puVar13;
      }
      if (*(char *)(lVar10 + 0x78) == '\x01') {
        *(undefined8 *)(lVar10 + 0x70) = puVar13[uVar6];
      }
      else {
        if ((undefined8 *)(lVar10 + 0x70) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        uVar7 = puVar13[uVar6];
        *(undefined1 *)(lVar10 + 0x78) = 1;
        *(undefined8 *)(lVar10 + 0x70) = uVar7;
      }
    }
  }
  return;
}


// ===== 007d47cc  FUN_007d47cc =====

void FUN_007d47cc(long *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  puVar4 = (undefined8 *)operator_new(0x80);
  puVar4[1] = 0;
  *puVar4 = 0;
  puVar4[3] = 0;
  puVar4[2] = 0;
  puVar4[5] = 0;
  puVar4[4] = 0;
  puVar4[7] = 0;
  puVar4[6] = 0;
  puVar4[9] = 0;
  puVar4[8] = 0;
  puVar4[0xb] = 0;
  puVar4[10] = 0;
  lVar5 = *param_1;
  puVar4[0xd] = 0;
  puVar4[0xc] = 0;
  puVar4[0xf] = 0;
  puVar4[0xe] = 0;
  lVar6 = *(long *)(lVar5 + 0x88);
  *(long *)(lVar5 + 0x88) = (long)puVar4;
  if (lVar6 != 0) {
    FUN_007d5418();
  }
  uVar2 = FUN_007d5db0(param_1 + 1,6);
  **(undefined4 **)(*param_1 + 0x88) = uVar2;
  iVar3 = FUN_007d5db0(param_1 + 1,5);
  *(int *)(*(long *)(*param_1 + 0x88) + 4) = iVar3 + 1;
  FUN_007d493c(param_1);
  lVar9 = *(long *)(*param_1 + 0x88);
  lVar5 = *(long *)(lVar9 + 0x68);
  lVar6 = *(long *)(lVar9 + 0x70);
  if (lVar5 != lVar6) {
    uVar7 = (ulong)*(uint *)(lVar9 + 4);
    do {
      if ((int)uVar7 < 0) {
LAB_007d4938:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x7d493c);
        (*pcVar1)();
      }
      FUN_007d54c8(lVar5 + 8,0,uVar7 & 0xffffffff);
      uVar7 = (ulong)*(uint *)(lVar9 + 4);
      if (0 < (int)*(uint *)(lVar9 + 4)) {
        uVar10 = 0;
        do {
          uVar2 = FUN_007d5db0(param_1 + 1,2);
          if (*(ulong *)(lVar5 + 8) >> 1 <= uVar10) goto LAB_007d4938;
          lVar8 = lVar5 + 0x10;
          if ((*(ulong *)(lVar5 + 8) & 1) != 0) {
            lVar8 = *(long *)(lVar5 + 0x10);
          }
          *(undefined4 *)(lVar8 + uVar10 * 4) = uVar2;
          uVar10 = uVar10 + 1;
          uVar7 = (ulong)*(int *)(lVar9 + 4);
        } while ((long)uVar10 < (long)uVar7);
      }
      lVar5 = lVar5 + 0x68;
    } while (lVar5 != lVar6);
  }
  FUN_007d4ae4(param_1);
  FUN_007d4bb8(param_1);
  iVar3 = FUN_007d60c4(param_1 + 1);
  if (iVar3 != 0) {
    FUN_007d4d3c(param_1);
    return;
  }
  return;
}


// ===== 007d493c  FUN_007d493c =====

void FUN_007d493c(long *param_1)

{
  int iVar1;
  void *pvVar2;
  long lVar3;
  undefined8 *puVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  void *pvVar8;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  
  iVar7 = 0;
  iVar5 = 0;
  local_58 = (undefined8 *)0x0;
  local_50 = (undefined8 *)0x0;
  local_48 = (undefined8 *)0x0;
  do {
    if (local_50 < local_48) {
      if (local_50 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      local_50[0xc] = 0;
      puVar4 = local_50 + 0xd;
      local_50[1] = 0;
      *local_50 = 0;
      local_50[3] = 0;
      local_50[2] = 0;
      local_50[5] = 0;
      local_50[4] = 0;
      local_50[7] = 0;
      local_50[6] = 0;
      local_50[9] = 0;
      local_50[8] = 0;
      local_50[0xb] = 0;
      local_50[10] = 0;
    }
    else {
      puVar4 = (undefined8 *)FUN_007d4f30(&local_58);
    }
    local_50 = puVar4;
    if (local_58 == puVar4) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__vector/vector.h:439: libc++ Hardening assertion !empty() failed: back() called on an empty vector\n"
                );
    }
    *(int *)(puVar4 + -0xd) = iVar5;
    *(int *)((long)puVar4 + -100) = iVar7;
    iVar1 = FUN_007d5db0(param_1 + 1,2);
    if (iVar1 == 1) {
      iVar7 = iVar7 + 1;
      if (7 < iVar7) break;
    }
    else if (iVar1 == 2) {
      iVar5 = iVar5 + 1;
      if (3 < iVar5) break;
      iVar7 = 0;
    }
    else if (iVar1 == 3) goto LAB_007d4a30;
    *(undefined1 *)((long)param_1 + 0x14) = 1;
    if ((int)param_1[2] < 0) goto LAB_007d4a30;
  } while ((long)local_50 - (long)local_58 != 0x1a00);
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
LAB_007d4a30:
  lVar3 = *(long *)(*param_1 + 0x88);
  puVar4 = (undefined8 *)(lVar3 + 0x68);
  pvVar8 = (void *)*puVar4;
  if (pvVar8 != (void *)0x0) {
    pvVar6 = *(void **)(lVar3 + 0x70);
    pvVar2 = pvVar8;
    if (pvVar8 != pvVar6) {
      do {
        pvVar6 = (void *)((long)pvVar6 + -0x68);
        FUN_007d511c(puVar4,pvVar6);
      } while (pvVar6 != pvVar8);
      pvVar2 = (void *)*puVar4;
    }
    *(void **)(lVar3 + 0x70) = pvVar8;
    operator_delete(pvVar2);
    *puVar4 = 0;
    *(undefined8 *)(lVar3 + 0x70) = 0;
    *(undefined8 *)(lVar3 + 0x78) = 0;
  }
  *(undefined8 **)(lVar3 + 0x68) = local_58;
  *(undefined8 **)(lVar3 + 0x70) = local_50;
  *(undefined8 **)(lVar3 + 0x78) = local_48;
  return;
}


// ===== 007d4ae4  FUN_007d4ae4 =====

void FUN_007d4ae4(long *param_1)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  int local_14;
  
  lVar2 = *(long *)(*(long *)(*param_1 + 0x88) + 0x68);
  lVar3 = *(long *)(*(long *)(*param_1 + 0x88) + 0x70);
  do {
    if (lVar2 == lVar3) {
      return;
    }
    while (iVar4 = FUN_007d60c4(param_1 + 1), iVar4 != 0) {
      local_14 = FUN_007d5db0(param_1 + 1,4);
      local_14 = local_14 + 1;
      if ((*(ulong *)(lVar2 + 0x38) & 1) == 0) {
        lVar6 = lVar2 + 0x40;
        uVar7 = 4;
      }
      else {
        lVar6 = *(long *)(lVar2 + 0x40);
        uVar7 = *(ulong *)(lVar2 + 0x48);
      }
      uVar5 = *(ulong *)(lVar2 + 0x38) >> 1;
      if (uVar5 == uVar7) {
        FUN_007d577c(lVar2 + 0x38,&local_14);
      }
      else {
        piVar1 = (int *)(lVar6 + uVar5 * 4);
        if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        *piVar1 = local_14;
        *(long *)(lVar2 + 0x38) = *(long *)(lVar2 + 0x38) + 2;
      }
    }
    lVar2 = lVar2 + 0x68;
  } while( true );
}


// ===== 007d4bb8  FUN_007d4bb8 =====

void FUN_007d4bb8(long *param_1)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  undefined4 local_28;
  undefined4 local_24;
  
  plVar8 = param_1 + 1;
  lVar9 = *(long *)(*param_1 + 0x88);
  iVar3 = FUN_007d6174(plVar8,*(int *)(lVar9 + 4) + 1);
  *(int *)(lVar9 + 8) = iVar3;
  if (iVar3 != 0) {
    if (0 < *(int *)(lVar9 + 4)) {
      iVar3 = 0;
      do {
        local_24 = FUN_007d6174(plVar8,*(undefined4 *)(lVar9 + 8));
        if ((*(ulong *)(lVar9 + 0x10) & 1) == 0) {
          lVar5 = lVar9 + 0x18;
          uVar7 = 10;
        }
        else {
          lVar5 = *(long *)(lVar9 + 0x18);
          uVar7 = *(ulong *)(lVar9 + 0x20);
        }
        uVar4 = *(ulong *)(lVar9 + 0x10) >> 1;
        if (uVar4 == uVar7) {
          FUN_007d590c(lVar9 + 0x10,&local_24);
        }
        else {
          puVar1 = (undefined4 *)(lVar5 + uVar4 * 4);
          if (puVar1 == (undefined4 *)0x0) {
LAB_007d4d28:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          *puVar1 = local_24;
          *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + 2;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(lVar9 + 4));
    }
    lVar5 = *(long *)(lVar9 + 0x68);
    lVar2 = *(long *)(lVar9 + 0x70);
    if (lVar5 != lVar2) {
      iVar3 = *(int *)(lVar9 + 8);
      do {
        if (0 < iVar3) {
          iVar10 = 0;
          do {
            local_28 = FUN_007d5db0(plVar8,4);
            if ((*(ulong *)(lVar5 + 0x50) & 1) == 0) {
              lVar6 = lVar5 + 0x58;
              uVar7 = 4;
            }
            else {
              lVar6 = *(long *)(lVar5 + 0x58);
              uVar7 = *(ulong *)(lVar5 + 0x60);
            }
            uVar4 = *(ulong *)(lVar5 + 0x50) >> 1;
            if (uVar4 == uVar7) {
              FUN_007d577c(lVar5 + 0x50,&local_28);
            }
            else {
              puVar1 = (undefined4 *)(lVar6 + uVar4 * 4);
              if (puVar1 == (undefined4 *)0x0) goto LAB_007d4d28;
              *puVar1 = local_28;
              *(long *)(lVar5 + 0x50) = *(long *)(lVar5 + 0x50) + 2;
            }
            iVar3 = *(int *)(lVar9 + 8);
            iVar10 = iVar10 + 1;
          } while (iVar10 < iVar3);
        }
        lVar5 = lVar5 + 0x68;
      } while (lVar5 != lVar2);
    }
  }
  return;
}


// ===== 007d4d3c  FUN_007d4d3c =====

void FUN_007d4d3c(long *param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  int local_38;
  int local_34;
  
  lVar7 = *(long *)(*param_1 + 0x88);
  if (*(long *)(lVar7 + 0x68) == *(long *)(lVar7 + 0x70)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__vector/vector.h:439: libc++ Hardening assertion !empty() failed: back() called on an empty vector\n"
              );
  }
  uVar2 = *(uint *)(*(long *)(lVar7 + 0x70) + -0x68);
  iVar8 = uVar2 + 1;
  FUN_007d5a9c(lVar7 + 0x40,(long)iVar8);
  if (uVar2 < 0x7fffffff) {
    do {
      while( true ) {
        uVar2 = FUN_007d5db0(param_1 + 1,0x10);
        uVar3 = FUN_007d5db0(param_1 + 1,0x10);
        local_34 = (uVar2 & 0xffff) + 1;
        local_38 = (uVar3 & 0xffff) + 1;
        if ((*(ulong *)(lVar7 + 0x40) & 1) == 0) {
          lVar5 = lVar7 + 0x48;
          uVar6 = 4;
        }
        else {
          lVar5 = *(long *)(lVar7 + 0x48);
          uVar6 = *(ulong *)(lVar7 + 0x50);
        }
        uVar4 = *(ulong *)(lVar7 + 0x40) >> 1;
        if (uVar4 == uVar6) break;
        piVar1 = (int *)(lVar5 + uVar4 * 8);
        if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        *piVar1 = local_34;
        piVar1[1] = local_38;
        *(long *)(lVar7 + 0x40) = *(long *)(lVar7 + 0x40) + 2;
        iVar8 = iVar8 + -1;
        if (iVar8 == 0) {
          return;
        }
      }
      FUN_007d5c10(lVar7 + 0x40,&local_34,&local_38);
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  return;
}


// ===== 007d4e60  FUN_007d4e60 =====

void FUN_007d4e60(long *param_1)

{
  int *piVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  int local_24;
  
  *(ulong *)(*param_1 + 0x40) = *(ulong *)(*param_1 + 0x40) & 1;
  while( true ) {
    while( true ) {
      lVar2 = FUN_007d5db0(param_1 + 1,2);
      if (lVar2 == 0) {
        return;
      }
      local_24 = FUN_007d5db0(param_1 + 1,(int)lVar2 << 2);
      lVar2 = *param_1;
      local_24 = local_24 + 1;
      puVar3 = (ulong *)(lVar2 + 0x40);
      if ((*puVar3 & 1) == 0) {
        lVar5 = lVar2 + 0x48;
        uVar6 = 4;
      }
      else {
        lVar5 = *(long *)(lVar2 + 0x48);
        uVar6 = *(ulong *)(lVar2 + 0x50);
      }
      uVar4 = *puVar3 >> 1;
      if (uVar4 != uVar6) break;
      FUN_007d577c(puVar3,&local_24);
    }
    piVar1 = (int *)(lVar5 + uVar4 * 4);
    if (piVar1 == (int *)0x0) break;
    *piVar1 = local_24;
    *puVar3 = *puVar3 + 2;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 007d4f30  FUN_007d4f30 =====

undefined8 * FUN_007d4f30(long *param_1)

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
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar9 = (undefined8 *)(param_1[1] - *param_1);
  uVar5 = ((long)puVar9 >> 3) * 0x4ec4ec4ec4ec4ec5 + 1;
  if (uVar5 < 0x276276276276277) {
    lVar7 = param_1[2] - *param_1 >> 3;
    uVar8 = lVar7 * -0x6276276276276276;
    if (uVar8 < uVar5 || uVar8 - uVar5 == 0) {
      uVar8 = uVar5;
    }
    if (0x13b13b13b13b13a < (ulong)(lVar7 * 0x4ec4ec4ec4ec4ec5)) {
      uVar8 = 0x276276276276276;
    }
    if (uVar8 == 0) {
      pvVar3 = (void *)0x0;
    }
    else {
      if (0x276276276276276 < uVar8) goto LAB_007d5100;
      pvVar3 = operator_new(uVar8 * 0x68);
      puVar9 = (undefined8 *)((long)pvVar3 + (long)puVar9);
    }
    if (puVar9 == (undefined8 *)0x0) {
LAB_007d50e8:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    puVar9[0xc] = 0;
    puVar9[1] = 0;
    *puVar9 = 0;
    puVar9[3] = 0;
    puVar9[2] = 0;
    puVar9[5] = 0;
    puVar9[4] = 0;
    puVar9[7] = 0;
    puVar9[6] = 0;
    puVar9[9] = 0;
    puVar9[8] = 0;
    puVar9[0xb] = 0;
    puVar9[10] = 0;
    puVar10 = (undefined8 *)*param_1;
    puVar2 = (undefined8 *)param_1[1];
    puVar1 = (undefined8 *)((long)puVar9 + ((long)puVar10 - (long)puVar2));
    puVar4 = puVar10;
    puVar6 = puVar1;
    if (puVar2 != puVar10) {
      do {
        if (puVar6 == (undefined8 *)0x0) goto LAB_007d50e8;
        *puVar6 = *puVar4;
        puVar6[1] = 0;
        puVar6[1] = puVar4[1];
        uVar14 = puVar4[3];
        uVar13 = puVar4[2];
        uVar12 = puVar4[5];
        uVar11 = puVar4[4];
        puVar6[6] = puVar4[6];
        puVar6[3] = uVar14;
        puVar6[2] = uVar13;
        puVar6[5] = uVar12;
        puVar6[4] = uVar11;
        puVar4[1] = 0;
        puVar6[7] = 0;
        puVar6[7] = puVar4[7];
        uVar11 = puVar4[8];
        puVar6[9] = puVar4[9];
        puVar6[8] = uVar11;
        puVar4[7] = 0;
        puVar6[10] = 0;
        puVar6[10] = puVar4[10];
        uVar11 = puVar4[0xb];
        puVar6[0xc] = puVar4[0xc];
        puVar6[0xb] = uVar11;
        puVar4[10] = 0;
        puVar4 = puVar4 + 0xd;
        puVar6 = puVar6 + 0xd;
      } while (puVar4 != puVar2);
      do {
        FUN_007d511c(param_1,puVar10);
        puVar10 = puVar10 + 0xd;
      } while (puVar10 != puVar2);
      puVar10 = (undefined8 *)*param_1;
    }
    *param_1 = (long)puVar1;
    param_1[1] = (long)(puVar9 + 0xd);
    param_1[2] = (long)((long)pvVar3 + uVar8 * 0x68);
    if (puVar10 != (undefined8 *)0x0) {
      operator_delete(puVar10);
    }
    return puVar9 + 0xd;
  }
  FUN_007d5104();
LAB_007d5100:
                    /* WARNING: Subroutine does not return */
  FUN_005d55a4();
}


// ===== 007d5104  FUN_007d5104 =====

void FUN_007d5104(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 007d511c  FUN_007d511c =====

void FUN_007d511c(undefined8 param_1,long param_2)

{
  byte bVar1;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
  if ((*(byte *)(param_2 + 0x50) & 1) == 0) {
    bVar1 = *(byte *)(param_2 + 0x38);
  }
  else {
    operator_delete(*(void **)(param_2 + 0x58));
    bVar1 = *(byte *)(param_2 + 0x38);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_2 + 8);
  }
  else {
    operator_delete(*(void **)(param_2 + 0x40));
    bVar1 = *(byte *)(param_2 + 8);
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_2 + 0x10));
  return;
}


// ===== 007d51b0  FUN_007d51b0 =====

void FUN_007d51b0(ulong *param_1,undefined4 *param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong *puVar2;
  bool bVar3;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  undefined4 *puVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong *puVar17;
  ulong *puVar18;
  void *pvVar19;
  undefined8 uVar20;
  ulong uVar21;
  undefined8 uVar22;
  ulong uVar23;
  undefined8 uVar24;
  ulong uVar25;
  
  puVar9 = param_1 + 1;
  if ((*param_1 & 1) == 0) {
    uVar7 = 4;
    if (4 < param_3) goto LAB_007d5240;
LAB_007d51ec:
    uVar8 = *param_1 >> 1;
    pvVar4 = (void *)((long)puVar9 + uVar8 * 4);
    bVar3 = uVar8 <= param_3;
    uVar7 = param_3;
    if (bVar3) {
      uVar7 = uVar8;
    }
    uVar5 = 0;
    if (bVar3) {
      uVar5 = param_3 - uVar8;
    }
    if (!bVar3 || param_3 - uVar8 == 0) {
      pvVar4 = (void *)0x0;
    }
    if (uVar7 != 0) {
      if (uVar7 < 0x18) {
LAB_007d5214:
        uVar16 = 0;
      }
      else {
        uVar12 = uVar7 - 1;
        if (((((ulong *)((long)puVar9 + uVar12 * 4) < puVar9) || (param_2 + uVar12 < param_2)) ||
            (uVar12 >> 0x3e != 0)) || ((ulong)((long)puVar9 - (long)param_2) < 0x20))
        goto LAB_007d5214;
        uVar16 = uVar7 & 0x7ffffffffffffff8;
        puVar17 = (ulong *)(param_2 + 4);
        puVar18 = puVar9 + 2;
        param_2 = param_2 + uVar16;
        uVar12 = uVar7 & 0x7ffffffffffffff8;
        do {
          puVar2 = puVar17 + -1;
          uVar21 = puVar17[-2];
          uVar25 = puVar17[1];
          uVar23 = *puVar17;
          uVar12 = uVar12 - 8;
          puVar17 = puVar17 + 4;
          puVar18[-1] = *puVar2;
          puVar18[-2] = uVar21;
          puVar18[1] = uVar25;
          *puVar18 = uVar23;
          puVar18 = puVar18 + 4;
        } while (uVar12 != 0);
        if (uVar7 == uVar16) goto LAB_007d526c;
      }
      lVar11 = uVar7 - uVar16;
      puVar10 = (undefined4 *)((long)puVar9 + uVar16 * 4);
      puVar14 = param_2;
      do {
        param_2 = puVar14 + 1;
        lVar11 = lVar11 + -1;
        *puVar10 = *puVar14;
        puVar10 = puVar10 + 1;
        puVar14 = param_2;
      } while (lVar11 != 0);
    }
LAB_007d526c:
    if (param_3 <= uVar8) {
      uVar8 = *param_1;
      goto LAB_007d5370;
    }
    uVar7 = 0;
    pvVar19 = (void *)0x0;
  }
  else {
    puVar9 = (ulong *)param_1[1];
    uVar7 = param_1[2];
    if (param_3 <= uVar7) goto LAB_007d51ec;
LAB_007d5240:
    uVar7 = uVar7 * 2;
    if (uVar7 < param_3 || uVar7 - param_3 == 0) {
      uVar7 = param_3;
    }
    if (uVar7 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    pvVar4 = operator_new(uVar7 << 2);
    uVar5 = param_3;
    pvVar19 = pvVar4;
  }
  uVar12 = uVar5 - 1;
  uVar8 = (ulong)-(long)pvVar4 >> 2;
  if (uVar12 <= (ulong)-(long)pvVar4 >> 2) {
    uVar8 = uVar12;
  }
  if (uVar8 < 0x20) {
    lVar11 = 0;
  }
  else {
    lVar11 = 0;
    uVar16 = (ulong)-(long)pvVar4 >> 2;
    if (uVar12 <= uVar16) {
      uVar16 = uVar12;
    }
    if ((((-(long)pvVar4 & 3U) == 0) && (pvVar4 <= (void *)((long)pvVar4 + uVar16 * 4))) &&
       ((param_2 <= param_2 + uVar16 && (0x1f < (ulong)((long)pvVar4 - (long)param_2))))) {
      puVar15 = (undefined8 *)((long)pvVar4 + 0x10);
      uVar12 = uVar8 + 1 & 7;
      uVar16 = 8;
      if (uVar12 != 0) {
        uVar16 = uVar12;
      }
      puVar13 = (undefined8 *)(param_2 + 4);
      lVar11 = (uVar8 + 1) - uVar16;
      param_2 = param_2 + lVar11;
      lVar6 = lVar11;
      do {
        puVar1 = puVar13 + -1;
        uVar20 = puVar13[-2];
        uVar24 = puVar13[1];
        uVar22 = *puVar13;
        lVar6 = lVar6 + -8;
        puVar13 = puVar13 + 4;
        puVar15[-1] = *puVar1;
        puVar15[-2] = uVar20;
        puVar15[1] = uVar24;
        *puVar15 = uVar22;
        puVar15 = puVar15 + 4;
      } while (lVar6 != 0);
    }
  }
  lVar6 = uVar5 - lVar11;
  puVar10 = (undefined4 *)((long)pvVar4 + lVar11 * 4);
  do {
    if (puVar10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    lVar6 = lVar6 + -1;
    *puVar10 = *param_2;
    puVar10 = puVar10 + 1;
    param_2 = param_2 + 1;
  } while (lVar6 != 0);
  uVar8 = *param_1;
  if (pvVar19 != (void *)0x0) {
    if ((uVar8 & 1) != 0) {
      operator_delete((void *)param_1[1]);
      uVar8 = *param_1;
    }
    uVar8 = uVar8 | 1;
    param_1[1] = (ulong)pvVar19;
    param_1[2] = uVar7;
  }
LAB_007d5370:
  *param_1 = uVar8 & 1 | param_3 << 1;
  return;
}


// ===== 007d5418  FUN_007d5418 =====

void FUN_007d5418(undefined8 param_1,void *param_2)

{
  void *pvVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *pvVar4;
  
  if (param_2 != (void *)0x0) {
    puVar2 = (undefined8 *)((long)param_2 + 0x68);
    pvVar4 = (void *)*puVar2;
    if (pvVar4 != (void *)0x0) {
      pvVar3 = *(void **)((long)param_2 + 0x70);
      pvVar1 = pvVar4;
      if (pvVar4 != pvVar3) {
        do {
          pvVar3 = (void *)((long)pvVar3 + -0x68);
          FUN_007d511c(puVar2,pvVar3);
        } while (pvVar3 != pvVar4);
        pvVar1 = (void *)*puVar2;
      }
      *(void **)((long)param_2 + 0x70) = pvVar4;
      operator_delete(pvVar1);
    }
    if ((*(byte *)((long)param_2 + 0x40) & 1) != 0) {
      operator_delete(*(void **)((long)param_2 + 0x48));
    }
    if ((*(byte *)((long)param_2 + 0x10) & 1) != 0) {
      operator_delete(*(void **)((long)param_2 + 0x18));
    }
    operator_delete(param_2);
    return;
  }
  return;
}


// ===== 007d54c8  FUN_007d54c8 =====

void FUN_007d54c8(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong *puVar1;
  bool bVar2;
  void *pvVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined4 *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong uVar16;
  
  puVar14 = param_1 + 1;
  uVar15 = *param_1;
  if ((uVar15 & 1) == 0) {
    uVar4 = 10;
  }
  else {
    puVar14 = (ulong *)param_1[1];
    uVar4 = param_1[2];
  }
  uVar16 = uVar15 >> 1;
  if (uVar16 < param_3) {
    if (uVar4 < param_3) {
      uVar4 = uVar4 * 2;
      if (uVar4 < param_3 || uVar4 - param_3 == 0) {
        uVar4 = param_3;
      }
      if (uVar4 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      pvVar3 = operator_new(uVar4 << 2);
      uVar8 = -(long)pvVar3 + uVar16 * -4 >> 2;
      if (param_3 + ~uVar16 <= uVar8) {
        uVar8 = param_3 + ~uVar16;
      }
      if ((uVar8 < 8) || ((-(int)pvVar3 & 3U) != 0)) {
        lVar9 = 0;
      }
      else {
        uVar10 = uVar8 + 1 & 7;
        uVar12 = 8;
        if (uVar10 != 0) {
          uVar12 = uVar10;
        }
        lVar9 = (uVar8 + 1) - uVar12;
        lVar6 = ~uVar8 + uVar12;
        puVar5 = (undefined8 *)((long)pvVar3 + uVar16 * 4 + 0x10);
        do {
          lVar6 = lVar6 + 8;
          puVar5[-1] = 0;
          puVar5[-2] = 0;
          puVar5[1] = 0;
          *puVar5 = 0;
          puVar5 = puVar5 + 4;
        } while (lVar6 != 0);
      }
      lVar6 = (lVar9 + uVar16) - param_3;
      puVar7 = (undefined4 *)((long)pvVar3 + uVar16 * 4 + lVar9 * 4);
      do {
        if (puVar7 == (undefined4 *)0x0) goto LAB_007d5764;
        bVar2 = lVar6 != -1;
        lVar6 = lVar6 + 1;
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      } while (bVar2);
      if (uVar16 != 0) {
        uVar10 = (ulong)-(long)pvVar3 >> 2;
        uVar12 = uVar16 - 1;
        uVar8 = uVar10;
        if (uVar12 <= uVar10) {
          uVar8 = uVar12;
        }
        if (uVar8 < 0x20) {
          lVar9 = 0;
        }
        else {
          lVar9 = 0;
          if (uVar12 <= uVar10) {
            uVar10 = uVar12;
          }
          if (((((-(int)pvVar3 & 3U) == 0) && (pvVar3 <= (void *)((long)pvVar3 + uVar10 * 4))) &&
              (puVar14 <= (ulong *)((long)puVar14 + uVar10 * 4))) &&
             (0x1f < (ulong)((long)pvVar3 - (long)puVar14))) {
            puVar13 = (ulong *)((long)pvVar3 + 0x10);
            uVar10 = uVar8 + 1 & 7;
            uVar12 = 8;
            if (uVar10 != 0) {
              uVar12 = uVar10;
            }
            puVar11 = puVar14 + 2;
            lVar9 = (uVar8 + 1) - uVar12;
            puVar14 = (ulong *)((long)puVar14 + lVar9 * 4);
            lVar6 = lVar9;
            do {
              puVar1 = puVar11 + -1;
              uVar8 = puVar11[-2];
              uVar12 = puVar11[1];
              uVar10 = *puVar11;
              lVar6 = lVar6 + -8;
              puVar11 = puVar11 + 4;
              puVar13[-1] = *puVar1;
              puVar13[-2] = uVar8;
              puVar13[1] = uVar12;
              *puVar13 = uVar10;
              puVar13 = puVar13 + 4;
            } while (lVar6 != 0);
          }
        }
        lVar6 = uVar16 - lVar9;
        puVar7 = (undefined4 *)((long)pvVar3 + lVar9 * 4);
        do {
          if (puVar7 == (undefined4 *)0x0) {
LAB_007d5764:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          lVar6 = lVar6 + -1;
          *puVar7 = (int)*puVar14;
          puVar7 = puVar7 + 1;
          puVar14 = (ulong *)((long)puVar14 + 4);
        } while (lVar6 != 0);
      }
      if ((uVar15 & 1) != 0) {
        operator_delete((void *)param_1[1]);
        uVar15 = *param_1;
      }
      uVar15 = uVar15 | 1;
      param_1[1] = (ulong)pvVar3;
      param_1[2] = uVar4;
    }
    else {
      lVar9 = (long)puVar14 + uVar16 * 4;
      uVar15 = (ulong)-lVar9 >> 2;
      if (param_3 + ~uVar16 <= uVar15) {
        uVar15 = param_3 + ~uVar16;
      }
      if ((uVar15 < 8) || ((-(int)puVar14 & 3U) != 0)) {
        lVar9 = 0;
      }
      else {
        uVar4 = uVar15 + 1 & 7;
        puVar5 = (undefined8 *)(lVar9 + 0x10);
        uVar8 = 8;
        if (uVar4 != 0) {
          uVar8 = uVar4;
        }
        lVar9 = (uVar15 + 1) - uVar8;
        lVar6 = ~uVar15 + uVar8;
        do {
          lVar6 = lVar6 + 8;
          puVar5[-1] = 0;
          puVar5[-2] = 0;
          puVar5[1] = 0;
          *puVar5 = 0;
          puVar5 = puVar5 + 4;
        } while (lVar6 != 0);
      }
      lVar6 = (lVar9 + uVar16) - param_3;
      puVar7 = (undefined4 *)((long)puVar14 + lVar9 * 4 + uVar16 * 4);
      do {
        if (puVar7 == (undefined4 *)0x0) goto LAB_007d5764;
        bVar2 = lVar6 != -1;
        lVar6 = lVar6 + 1;
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      } while (bVar2);
      uVar15 = *param_1;
    }
  }
  *param_1 = uVar15 & 1 | param_3 << 1;
  return;
}


// ===== 007d577c  FUN_007d577c =====

undefined4 * FUN_007d577c(ulong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  ulong *puVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong uVar15;
  
  puVar13 = param_1 + 1;
  uVar12 = *param_1;
  if ((uVar12 & 1) == 0) {
    uVar11 = 8;
  }
  else {
    if ((param_1[2] >> 0x3d & 3) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    puVar13 = (ulong *)param_1[1];
    uVar11 = param_1[2] << 1;
  }
  uVar14 = uVar12 >> 1;
  pvVar3 = operator_new(uVar11 << 2);
  puVar1 = (undefined4 *)((long)pvVar3 + uVar14 * 4);
  if (puVar1 == (undefined4 *)0x0) {
LAB_007d58f4:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  *puVar1 = *param_2;
  if (uVar14 != 0) {
    uVar7 = uVar14 - 1;
    uVar15 = (ulong)-(long)pvVar3 >> 2;
    if (uVar7 <= (ulong)-(long)pvVar3 >> 2) {
      uVar15 = uVar7;
    }
    if (uVar15 < 0x20) {
      lVar4 = 0;
    }
    else {
      lVar4 = 0;
      uVar10 = (ulong)-(long)pvVar3 >> 2;
      if (uVar7 <= uVar10) {
        uVar10 = uVar7;
      }
      if (((((-(long)pvVar3 & 3U) == 0) && (pvVar3 <= (void *)((long)pvVar3 + uVar10 * 4))) &&
          (puVar13 <= (ulong *)((long)puVar13 + uVar10 * 4))) &&
         (0x1f < (ulong)((long)pvVar3 - (long)puVar13))) {
        puVar9 = (ulong *)((long)pvVar3 + 0x10);
        uVar7 = uVar15 + 1 & 7;
        uVar10 = 8;
        if (uVar7 != 0) {
          uVar10 = uVar7;
        }
        puVar8 = puVar13 + 2;
        lVar4 = (uVar15 + 1) - uVar10;
        puVar13 = (ulong *)((long)puVar13 + lVar4 * 4);
        lVar5 = lVar4;
        do {
          puVar2 = puVar8 + -1;
          uVar15 = puVar8[-2];
          uVar10 = puVar8[1];
          uVar7 = *puVar8;
          lVar5 = lVar5 + -8;
          puVar8 = puVar8 + 4;
          puVar9[-1] = *puVar2;
          puVar9[-2] = uVar15;
          puVar9[1] = uVar10;
          *puVar9 = uVar7;
          puVar9 = puVar9 + 4;
        } while (lVar5 != 0);
      }
    }
    lVar5 = uVar14 - lVar4;
    puVar6 = (undefined4 *)((long)pvVar3 + lVar4 * 4);
    do {
      if (puVar6 == (undefined4 *)0x0) goto LAB_007d58f4;
      lVar5 = lVar5 + -1;
      *puVar6 = (int)*puVar13;
      puVar6 = puVar6 + 1;
      puVar13 = (ulong *)((long)puVar13 + 4);
    } while (lVar5 != 0);
  }
  if ((uVar12 & 1) != 0) {
    operator_delete((void *)param_1[1]);
    uVar12 = *param_1;
  }
  param_1[1] = (ulong)pvVar3;
  param_1[2] = uVar11;
  *param_1 = (uVar12 | 1) + 2;
  return puVar1;
}


// ===== 007d590c  FUN_007d590c =====

undefined4 * FUN_007d590c(ulong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  ulong *puVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong uVar15;
  
  puVar13 = param_1 + 1;
  uVar12 = *param_1;
  if ((uVar12 & 1) == 0) {
    uVar11 = 0x14;
  }
  else {
    if ((param_1[2] >> 0x3d & 3) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    puVar13 = (ulong *)param_1[1];
    uVar11 = param_1[2] << 1;
  }
  uVar14 = uVar12 >> 1;
  pvVar3 = operator_new(uVar11 << 2);
  puVar1 = (undefined4 *)((long)pvVar3 + uVar14 * 4);
  if (puVar1 == (undefined4 *)0x0) {
LAB_007d5a84:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  *puVar1 = *param_2;
  if (uVar14 != 0) {
    uVar7 = uVar14 - 1;
    uVar15 = (ulong)-(long)pvVar3 >> 2;
    if (uVar7 <= (ulong)-(long)pvVar3 >> 2) {
      uVar15 = uVar7;
    }
    if (uVar15 < 0x20) {
      lVar4 = 0;
    }
    else {
      lVar4 = 0;
      uVar10 = (ulong)-(long)pvVar3 >> 2;
      if (uVar7 <= uVar10) {
        uVar10 = uVar7;
      }
      if (((((-(long)pvVar3 & 3U) == 0) && (pvVar3 <= (void *)((long)pvVar3 + uVar10 * 4))) &&
          (puVar13 <= (ulong *)((long)puVar13 + uVar10 * 4))) &&
         (0x1f < (ulong)((long)pvVar3 - (long)puVar13))) {
        puVar9 = (ulong *)((long)pvVar3 + 0x10);
        uVar7 = uVar15 + 1 & 7;
        uVar10 = 8;
        if (uVar7 != 0) {
          uVar10 = uVar7;
        }
        puVar8 = puVar13 + 2;
        lVar4 = (uVar15 + 1) - uVar10;
        puVar13 = (ulong *)((long)puVar13 + lVar4 * 4);
        lVar5 = lVar4;
        do {
          puVar2 = puVar8 + -1;
          uVar15 = puVar8[-2];
          uVar10 = puVar8[1];
          uVar7 = *puVar8;
          lVar5 = lVar5 + -8;
          puVar8 = puVar8 + 4;
          puVar9[-1] = *puVar2;
          puVar9[-2] = uVar15;
          puVar9[1] = uVar10;
          *puVar9 = uVar7;
          puVar9 = puVar9 + 4;
        } while (lVar5 != 0);
      }
    }
    lVar5 = uVar14 - lVar4;
    puVar6 = (undefined4 *)((long)pvVar3 + lVar4 * 4);
    do {
      if (puVar6 == (undefined4 *)0x0) goto LAB_007d5a84;
      lVar5 = lVar5 + -1;
      *puVar6 = (int)*puVar13;
      puVar6 = puVar6 + 1;
      puVar13 = (ulong *)((long)puVar13 + 4);
    } while (lVar5 != 0);
  }
  if ((uVar12 & 1) != 0) {
    operator_delete((void *)param_1[1]);
    uVar12 = *param_1;
  }
  param_1[1] = (ulong)pvVar3;
  param_1[2] = uVar11;
  *param_1 = (uVar12 | 1) + 2;
  return puVar1;
}


// ===== 007d5a9c  FUN_007d5a9c =====

void FUN_007d5a9c(ulong *param_1,ulong param_2)

{
  ulong *puVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  
  puVar11 = param_1 + 1;
  uVar10 = *param_1;
  if ((uVar10 & 1) == 0) {
    uVar3 = 4;
  }
  else {
    puVar11 = (ulong *)param_1[1];
    uVar3 = param_1[2];
  }
  if (uVar3 < param_2) {
    uVar3 = uVar3 * 2;
    if (uVar3 < param_2 || uVar3 - param_2 == 0) {
      uVar3 = param_2;
    }
    if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    uVar12 = uVar10 >> 1;
    pvVar2 = operator_new(uVar3 << 3);
    if (uVar12 != 0) {
      uVar7 = uVar12 - 1;
      uVar13 = (ulong)-(long)pvVar2 >> 3;
      if (uVar7 <= (ulong)-(long)pvVar2 >> 3) {
        uVar13 = uVar7;
      }
      if (uVar13 < 0x1e) {
        lVar4 = 0;
      }
      else {
        lVar4 = 0;
        uVar9 = (ulong)-(long)pvVar2 >> 3;
        if (uVar7 <= uVar9) {
          uVar9 = uVar7;
        }
        if ((((-(long)pvVar2 & 7U) == 0) &&
            (pvVar2 <= (void *)((long)pvVar2 + uVar9 * 8) && puVar11 <= puVar11 + uVar9)) &&
           (0x1f < (ulong)((long)pvVar2 - (long)puVar11))) {
          puVar6 = (ulong *)((long)pvVar2 + 0x10);
          uVar7 = uVar13 + 1 & 3;
          uVar9 = 4;
          if (uVar7 != 0) {
            uVar9 = uVar7;
          }
          puVar8 = puVar11 + 2;
          lVar4 = (uVar13 + 1) - uVar9;
          puVar11 = puVar11 + lVar4;
          lVar5 = lVar4;
          do {
            puVar1 = puVar8 + -1;
            uVar13 = puVar8[-2];
            uVar9 = puVar8[1];
            uVar7 = *puVar8;
            lVar5 = lVar5 + -4;
            puVar8 = puVar8 + 4;
            puVar6[-1] = *puVar1;
            puVar6[-2] = uVar13;
            puVar6[1] = uVar9;
            *puVar6 = uVar7;
            puVar6 = puVar6 + 4;
          } while (lVar5 != 0);
        }
      }
      lVar5 = uVar12 - lVar4;
      puVar6 = (ulong *)((long)pvVar2 + lVar4 * 8);
      do {
        if (puVar6 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        lVar5 = lVar5 + -1;
        *puVar6 = *puVar11;
        puVar6 = puVar6 + 1;
        puVar11 = puVar11 + 1;
      } while (lVar5 != 0);
    }
    if ((uVar10 & 1) != 0) {
      operator_delete((void *)param_1[1]);
      uVar10 = *param_1;
    }
    param_1[1] = (ulong)pvVar2;
    param_1[2] = uVar3;
    *param_1 = uVar10 | 1;
  }
  return;
}


// ===== 007d5c10  FUN_007d5c10 =====

undefined4 * FUN_007d5c10(ulong *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  ulong *puVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong uVar15;
  
  puVar13 = param_1 + 1;
  uVar12 = *param_1;
  if ((uVar12 & 1) == 0) {
    uVar11 = 8;
  }
  else {
    if ((param_1[2] >> 0x3c & 7) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    puVar13 = (ulong *)param_1[1];
    uVar11 = param_1[2] << 1;
  }
  uVar14 = uVar12 >> 1;
  pvVar4 = operator_new(uVar11 << 3);
  puVar1 = (undefined4 *)((long)pvVar4 + uVar14 * 8);
  if (puVar1 == (undefined4 *)0x0) {
LAB_007d5d98:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar2 = *param_3;
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  if (uVar14 != 0) {
    uVar8 = uVar14 - 1;
    uVar15 = (ulong)-(long)pvVar4 >> 3;
    if (uVar8 <= (ulong)-(long)pvVar4 >> 3) {
      uVar15 = uVar8;
    }
    if (uVar15 < 0x1e) {
      lVar5 = 0;
    }
    else {
      lVar5 = 0;
      uVar10 = (ulong)-(long)pvVar4 >> 3;
      if (uVar8 <= uVar10) {
        uVar10 = uVar8;
      }
      if (((((-(long)pvVar4 & 7U) == 0) && (pvVar4 <= (void *)((long)pvVar4 + uVar10 * 8))) &&
          (puVar13 <= puVar13 + uVar10)) && (0x1f < (ulong)((long)pvVar4 - (long)puVar13))) {
        puVar7 = (ulong *)((long)pvVar4 + 0x10);
        uVar8 = uVar15 + 1 & 3;
        uVar10 = 4;
        if (uVar8 != 0) {
          uVar10 = uVar8;
        }
        puVar9 = puVar13 + 2;
        lVar5 = (uVar15 + 1) - uVar10;
        puVar13 = puVar13 + lVar5;
        lVar6 = lVar5;
        do {
          puVar3 = puVar9 + -1;
          uVar15 = puVar9[-2];
          uVar10 = puVar9[1];
          uVar8 = *puVar9;
          lVar6 = lVar6 + -4;
          puVar9 = puVar9 + 4;
          puVar7[-1] = *puVar3;
          puVar7[-2] = uVar15;
          puVar7[1] = uVar10;
          *puVar7 = uVar8;
          puVar7 = puVar7 + 4;
        } while (lVar6 != 0);
      }
    }
    lVar6 = uVar14 - lVar5;
    puVar7 = (ulong *)((long)pvVar4 + lVar5 * 8);
    do {
      if (puVar7 == (ulong *)0x0) goto LAB_007d5d98;
      lVar6 = lVar6 + -1;
      *puVar7 = *puVar13;
      puVar7 = puVar7 + 1;
      puVar13 = puVar13 + 1;
    } while (lVar6 != 0);
  }
  if ((uVar12 & 1) != 0) {
    operator_delete((void *)param_1[1]);
    uVar12 = *param_1;
  }
  param_1[1] = (ulong)pvVar4;
  param_1[2] = uVar11;
  *param_1 = (uVar12 | 1) + 2;
  return puVar1;
}


// ===== 007d5db0  FUN_007d5db0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_007d5db0(undefined8 *param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [13];
  undefined1 auVar8 [13];
  undefined1 auVar9 [13];
  undefined1 uVar10;
  undefined1 uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  uint *puVar16;
  uint *puVar17;
  ulong uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
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
  undefined1 auVar36 [16];
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  byte bVar47;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  undefined8 uVar48;
  byte bVar55;
  byte bVar56;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  undefined8 uVar57;
  byte bVar64;
  byte bVar65;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  undefined8 uVar66;
  byte bVar73;
  byte bVar74;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  undefined8 uVar75;
  byte bVar82;
  byte bVar83;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  undefined8 uVar84;
  byte bVar91;
  byte bVar92;
  byte bVar94;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  byte bVar98;
  byte bVar99;
  undefined8 uVar93;
  byte bVar100;
  byte bVar101;
  byte bVar103;
  byte bVar104;
  byte bVar105;
  byte bVar106;
  byte bVar107;
  byte bVar108;
  undefined8 uVar102;
  byte bVar109;
  byte bVar110;
  byte bVar112;
  byte bVar113;
  byte bVar114;
  byte bVar115;
  byte bVar116;
  byte bVar117;
  undefined8 uVar111;
  byte bVar118;
  byte bVar119;
  byte bVar121;
  byte bVar122;
  byte bVar123;
  byte bVar124;
  byte bVar125;
  byte bVar126;
  undefined8 uVar120;
  byte bVar127;
  byte bVar128;
  byte bVar130;
  byte bVar131;
  byte bVar132;
  byte bVar133;
  byte bVar134;
  byte bVar135;
  undefined8 uVar129;
  byte bVar136;
  byte bVar137;
  byte bVar139;
  byte bVar140;
  byte bVar141;
  byte bVar142;
  byte bVar143;
  byte bVar144;
  undefined8 uVar138;
  byte bVar145;
  byte bVar146;
  byte bVar148;
  byte bVar149;
  byte bVar150;
  byte bVar151;
  byte bVar152;
  byte bVar153;
  undefined8 uVar147;
  byte bVar154;
  long lVar155;
  long lVar156;
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  ulong uVar159;
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  byte bVar162;
  byte bVar165;
  byte bVar166;
  byte bVar167;
  byte bVar168;
  byte bVar169;
  byte bVar170;
  byte bVar171;
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  ulong uVar174;
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  byte bStack_48;
  byte bStack_47;
  byte bStack_46;
  byte bStack_45;
  byte bStack_44;
  byte bStack_43;
  byte bStack_42;
  byte bStack_41;
  uint *puVar18;
  
  puVar17 = (uint *)(param_1 + 1);
  uVar4 = *puVar17;
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  uVar12 = (uint)param_2;
  if ((int)uVar4 < (int)uVar12) {
    *puVar17 = 0xffffffff;
    return 0;
  }
  uVar3 = uVar4 & 7;
  *puVar17 = uVar4 - uVar12;
  if ((int)uVar4 < 1) {
    uVar3 = -(-uVar4 & 7);
  }
  uVar4 = uVar12 - uVar3;
  uVar15 = (ulong)uVar4;
  if ((int)uVar12 < (int)uVar3) {
    return (ulong)((uint)(*(byte *)*param_1 >> (ulong)(uVar3 - uVar12 & 0x1f)) &
                  (-1 << (ulong)(uVar12 & 0x1f) ^ 0xffffffffU));
  }
  if ((int)uVar3 < 1) {
    uVar14 = 0;
    uVar15 = param_2;
    uVar4 = uVar12;
  }
  else {
    bVar162 = *(byte *)*param_1;
    *param_1 = (byte *)*param_1 + 1;
    uVar14 = (ulong)((uint)bVar162 & (-1 << (ulong)(uVar3 & 0x1f) ^ 0xffffffffU)) << (uVar15 & 0x3f)
    ;
  }
  if (7 < (int)uVar4) {
    uVar13 = uVar15 & 0xffffffff;
    uVar15 = 0;
    if (0xe < uVar13) {
      uVar15 = uVar13 - 0xf;
    }
    puVar16 = (uint *)*param_1;
    if (0x70 < uVar15) {
      lVar24 = 0;
      if (0xe < uVar13) {
        lVar24 = uVar13 - 0xf;
      }
      if (((undefined8 *)((long)puVar16 + (lVar24 + 7U >> 3) + 1) <= param_1) ||
         (puVar17 <= puVar16)) {
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar14;
        bVar162 = 0;
        bVar165 = 0;
        bVar166 = 0;
        bVar167 = 0;
        bVar168 = 0;
        bVar169 = 0;
        bVar170 = 0;
        bVar171 = 0;
        uVar2 = (uVar15 + 7 >> 3) + 1;
        uVar48 = 0;
        uVar57 = 0;
        uVar66 = 0;
        uVar75 = 0;
        uVar120 = 0;
        uVar129 = 0;
        uVar84 = 0;
        uVar93 = 0;
        uVar138 = 0;
        uVar147 = 0;
        uVar102 = 0;
        uVar111 = 0;
        lVar24 = uVar13 + _DAT_001f3100;
        lVar25 = uVar13 + _UNK_001f3108;
        uVar19 = uVar2 & 0x3ffffff0;
        lVar26 = uVar13 + _DAT_001f32c0;
        lVar27 = uVar13 + _UNK_001f32c8;
        lVar28 = uVar13 + _DAT_001f3660;
        lVar29 = uVar13 + _UNK_001f3668;
        lVar30 = uVar13 + _DAT_001f2f80;
        lVar31 = uVar13 + _UNK_001f2f88;
        lVar32 = uVar13 + _DAT_001f1a20;
        lVar33 = uVar13 + _UNK_001f1a28;
        lVar34 = uVar13 + _DAT_001f2de0;
        lVar35 = uVar13 + _UNK_001f2de8;
        lVar45 = uVar13 + _DAT_001f43c0;
        lVar46 = uVar13 + _UNK_001f43c8;
        lVar155 = uVar13 + _DAT_001f3430;
        lVar156 = uVar13 + _UNK_001f3438;
        uVar15 = uVar13 + uVar19 * -8;
        uVar14 = uVar2 & 0x3ffffff0;
        puVar17 = puVar16;
        do {
          puVar18 = puVar17 + 4;
          uVar10 = *(undefined1 *)((long)puVar17 + 1);
          uVar11 = *(undefined1 *)((long)puVar17 + 9);
          auVar163._0_8_ = lVar32 + -8;
          auVar163._8_8_ = lVar33 + -8;
          auVar172._0_8_ = lVar28 + -8;
          auVar172._8_8_ = lVar29 + -8;
          auVar177._0_8_ = lVar30 + -8;
          auVar177._8_8_ = lVar31 + -8;
          auVar176._0_8_ = lVar34 + -8;
          auVar176._8_8_ = lVar35 + -8;
          lVar37 = lVar45 + -8;
          lVar38 = lVar46 + -8;
          lVar39 = lVar26 + -8;
          lVar40 = lVar27 + -8;
          uVar14 = uVar14 - 0x10;
          lVar41 = lVar155 + -8;
          lVar42 = lVar156 + -8;
          lVar45 = lVar45 + -0x80;
          lVar46 = lVar46 + -0x80;
          lVar155 = lVar155 + -0x80;
          lVar156 = lVar156 + -0x80;
          uVar174 = CONCAT35(0,CONCAT14(*(undefined1 *)((long)puVar17 + 5),(uint)(byte)puVar17[1]));
          auVar7[8] = *(undefined1 *)((long)puVar17 + 6);
          auVar7._0_8_ = uVar174;
          auVar7._9_3_ = 0;
          auVar7[0xc] = *(undefined1 *)((long)puVar17 + 7);
          uVar159 = CONCAT26(0,(uint6)CONCAT14(uVar10,(uint)CONCAT12(uVar10,(ushort)(byte)*puVar17))
                               & 0xffff0000ffff);
          auVar9[8] = *(undefined1 *)((long)puVar17 + 2);
          auVar9._0_8_ = uVar159;
          auVar9._9_3_ = 0;
          auVar9[0xc] = *(undefined1 *)((long)puVar17 + 3);
          uVar13 = CONCAT35(0,CONCAT14(*(undefined1 *)((long)puVar17 + 0xd),(uint)(byte)puVar17[3]))
          ;
          auVar8[8] = *(undefined1 *)((long)puVar17 + 0xe);
          auVar8._0_8_ = uVar13;
          auVar8._9_3_ = 0;
          auVar8[0xc] = *(undefined1 *)((long)puVar17 + 0xf);
          lVar34 = lVar34 + -0x80;
          lVar35 = lVar35 + -0x80;
          lVar32 = lVar32 + -0x80;
          lVar33 = lVar33 + -0x80;
          lVar30 = lVar30 + -0x80;
          lVar31 = lVar31 + -0x80;
          lVar28 = lVar28 + -0x80;
          lVar29 = lVar29 + -0x80;
          lVar26 = lVar26 + -0x80;
          lVar27 = lVar27 + -0x80;
          auVar175._0_8_ = uVar174 & 0xffffffff;
          auVar175[8] = *(undefined1 *)((long)puVar17 + 5);
          auVar175._9_7_ = 0;
          auVar20._0_8_ = uVar13 & 0xffffffff;
          auVar20[8] = *(undefined1 *)((long)puVar17 + 0xd);
          auVar20._9_7_ = 0;
          auVar160._0_8_ = uVar159 & 0xffffffff;
          auVar160[8] = uVar10;
          auVar160._9_7_ = 0;
          auVar157._0_8_ = (ulong)auVar8._8_5_ & 0xffffffff;
          auVar157._8_5_ = auVar8._8_5_ >> 0x20;
          auVar157._13_3_ = 0;
          auVar164._8_5_ = auVar7._8_5_ >> 0x20;
          auVar164._0_8_ = (ulong)auVar7._8_5_ & 0xffffffff;
          auVar164._13_3_ = 0;
          auVar164 = NEON_ushl(auVar164,auVar163,8);
          lVar43 = lVar24 + -8;
          lVar44 = lVar25 + -8;
          auVar21[8] = uVar11;
          auVar21._0_8_ =
               (ulong)((uint6)CONCAT14(uVar11,(uint)CONCAT12(uVar11,(ushort)(byte)puVar17[2])) &
                      0xffff0000ffff) & 0xffffffff;
          auVar21._9_7_ = 0;
          auVar178 = NEON_ushl(auVar21,auVar177,8);
          auVar176 = NEON_ushl(auVar175,auVar176,8);
          auVar173[8] = *(undefined1 *)((long)puVar17 + 0xb);
          auVar173._0_8_ =
               (ulong)CONCAT14(*(undefined1 *)((long)puVar17 + 0xb),
                               (uint)*(byte *)((long)puVar17 + 10)) & 0xffffffff;
          auVar173._9_7_ = 0;
          auVar173 = NEON_ushl(auVar173,auVar172,8);
          auVar158._8_8_ = lVar40;
          auVar158._0_8_ = lVar39;
          auVar21 = NEON_ushl(auVar20,auVar158,8);
          auVar161._8_8_ = lVar42;
          auVar161._0_8_ = lVar41;
          auVar161 = NEON_ushl(auVar160,auVar161,8);
          auVar36._8_8_ = lVar38;
          auVar36._0_8_ = lVar37;
          auVar6._8_5_ = auVar9._8_5_ >> 0x20;
          auVar6._0_8_ = (ulong)auVar9._8_5_ & 0xffffffff;
          auVar6._13_3_ = 0;
          auVar36 = NEON_ushl(auVar6,auVar36,8);
          lVar24 = lVar24 + -0x80;
          lVar25 = lVar25 + -0x80;
          auVar5._8_8_ = lVar44;
          auVar5._0_8_ = lVar43;
          auVar158 = NEON_ushl(auVar157,auVar5,8);
          bVar65 = auVar164[0] | (byte)uVar66;
          bVar67 = auVar164[1] | (byte)((ulong)uVar66 >> 8);
          bVar68 = auVar164[2] | (byte)((ulong)uVar66 >> 0x10);
          bVar69 = auVar164[3] | (byte)((ulong)uVar66 >> 0x18);
          bVar70 = auVar164[4] | (byte)((ulong)uVar66 >> 0x20);
          bVar71 = auVar164[5] | (byte)((ulong)uVar66 >> 0x28);
          bVar72 = auVar164[6] | (byte)((ulong)uVar66 >> 0x30);
          bVar73 = auVar164[7] | (byte)((ulong)uVar66 >> 0x38);
          uVar66 = CONCAT17(bVar73,CONCAT16(bVar72,CONCAT15(bVar71,CONCAT14(bVar70,CONCAT13(bVar69,
                                                  CONCAT12(bVar68,CONCAT11(bVar67,bVar65)))))));
          bVar74 = auVar164[8] | (byte)uVar75;
          bVar76 = auVar164[9] | (byte)((ulong)uVar75 >> 8);
          bVar77 = auVar164[10] | (byte)((ulong)uVar75 >> 0x10);
          bVar78 = auVar164[0xb] | (byte)((ulong)uVar75 >> 0x18);
          bVar79 = auVar164[0xc] | (byte)((ulong)uVar75 >> 0x20);
          bVar80 = auVar164[0xd] | (byte)((ulong)uVar75 >> 0x28);
          bVar81 = auVar164[0xe] | (byte)((ulong)uVar75 >> 0x30);
          bVar82 = auVar164[0xf] | (byte)((ulong)uVar75 >> 0x38);
          uVar75 = CONCAT17(bVar82,CONCAT16(bVar81,CONCAT15(bVar80,CONCAT14(bVar79,CONCAT13(bVar78,
                                                  CONCAT12(bVar77,CONCAT11(bVar76,bVar74)))))));
          bVar83 = auVar173[0] | (byte)uVar84;
          bVar85 = auVar173[1] | (byte)((ulong)uVar84 >> 8);
          bVar86 = auVar173[2] | (byte)((ulong)uVar84 >> 0x10);
          bVar87 = auVar173[3] | (byte)((ulong)uVar84 >> 0x18);
          bVar88 = auVar173[4] | (byte)((ulong)uVar84 >> 0x20);
          bVar89 = auVar173[5] | (byte)((ulong)uVar84 >> 0x28);
          bVar90 = auVar173[6] | (byte)((ulong)uVar84 >> 0x30);
          bVar91 = auVar173[7] | (byte)((ulong)uVar84 >> 0x38);
          uVar84 = CONCAT17(bVar91,CONCAT16(bVar90,CONCAT15(bVar89,CONCAT14(bVar88,CONCAT13(bVar87,
                                                  CONCAT12(bVar86,CONCAT11(bVar85,bVar83)))))));
          bVar92 = auVar173[8] | (byte)uVar93;
          bVar94 = auVar173[9] | (byte)((ulong)uVar93 >> 8);
          bVar95 = auVar173[10] | (byte)((ulong)uVar93 >> 0x10);
          bVar96 = auVar173[0xb] | (byte)((ulong)uVar93 >> 0x18);
          bVar97 = auVar173[0xc] | (byte)((ulong)uVar93 >> 0x20);
          bVar98 = auVar173[0xd] | (byte)((ulong)uVar93 >> 0x28);
          bVar99 = auVar173[0xe] | (byte)((ulong)uVar93 >> 0x30);
          bVar100 = auVar173[0xf] | (byte)((ulong)uVar93 >> 0x38);
          uVar93 = CONCAT17(bVar100,CONCAT16(bVar99,CONCAT15(bVar98,CONCAT14(bVar97,CONCAT13(bVar96,
                                                  CONCAT12(bVar95,CONCAT11(bVar94,bVar92)))))));
          bVar119 = auVar178[0] | (byte)uVar120;
          bVar121 = auVar178[1] | (byte)((ulong)uVar120 >> 8);
          bVar122 = auVar178[2] | (byte)((ulong)uVar120 >> 0x10);
          bVar123 = auVar178[3] | (byte)((ulong)uVar120 >> 0x18);
          bVar124 = auVar178[4] | (byte)((ulong)uVar120 >> 0x20);
          bVar125 = auVar178[5] | (byte)((ulong)uVar120 >> 0x28);
          bVar126 = auVar178[6] | (byte)((ulong)uVar120 >> 0x30);
          bVar127 = auVar178[7] | (byte)((ulong)uVar120 >> 0x38);
          uVar120 = CONCAT17(bVar127,CONCAT16(bVar126,CONCAT15(bVar125,CONCAT14(bVar124,CONCAT13(
                                                  bVar123,CONCAT12(bVar122,CONCAT11(bVar121,bVar119)
                                                                  ))))));
          bVar128 = auVar178[8] | (byte)uVar129;
          bVar130 = auVar178[9] | (byte)((ulong)uVar129 >> 8);
          bVar131 = auVar178[10] | (byte)((ulong)uVar129 >> 0x10);
          bVar132 = auVar178[0xb] | (byte)((ulong)uVar129 >> 0x18);
          bVar133 = auVar178[0xc] | (byte)((ulong)uVar129 >> 0x20);
          bVar134 = auVar178[0xd] | (byte)((ulong)uVar129 >> 0x28);
          bVar135 = auVar178[0xe] | (byte)((ulong)uVar129 >> 0x30);
          bVar136 = auVar178[0xf] | (byte)((ulong)uVar129 >> 0x38);
          uVar129 = CONCAT17(bVar136,CONCAT16(bVar135,CONCAT15(bVar134,CONCAT14(bVar133,CONCAT13(
                                                  bVar132,CONCAT12(bVar131,CONCAT11(bVar130,bVar128)
                                                                  ))))));
          bVar137 = auVar21[0] | (byte)uVar138;
          bVar139 = auVar21[1] | (byte)((ulong)uVar138 >> 8);
          bVar140 = auVar21[2] | (byte)((ulong)uVar138 >> 0x10);
          bVar141 = auVar21[3] | (byte)((ulong)uVar138 >> 0x18);
          bVar142 = auVar21[4] | (byte)((ulong)uVar138 >> 0x20);
          bVar143 = auVar21[5] | (byte)((ulong)uVar138 >> 0x28);
          bVar144 = auVar21[6] | (byte)((ulong)uVar138 >> 0x30);
          bVar145 = auVar21[7] | (byte)((ulong)uVar138 >> 0x38);
          uVar138 = CONCAT17(bVar145,CONCAT16(bVar144,CONCAT15(bVar143,CONCAT14(bVar142,CONCAT13(
                                                  bVar141,CONCAT12(bVar140,CONCAT11(bVar139,bVar137)
                                                                  ))))));
          bVar146 = auVar21[8] | (byte)uVar147;
          bVar148 = auVar21[9] | (byte)((ulong)uVar147 >> 8);
          bVar149 = auVar21[10] | (byte)((ulong)uVar147 >> 0x10);
          bVar150 = auVar21[0xb] | (byte)((ulong)uVar147 >> 0x18);
          bVar151 = auVar21[0xc] | (byte)((ulong)uVar147 >> 0x20);
          bVar152 = auVar21[0xd] | (byte)((ulong)uVar147 >> 0x28);
          bVar153 = auVar21[0xe] | (byte)((ulong)uVar147 >> 0x30);
          bVar154 = auVar21[0xf] | (byte)((ulong)uVar147 >> 0x38);
          uVar147 = CONCAT17(bVar154,CONCAT16(bVar153,CONCAT15(bVar152,CONCAT14(bVar151,CONCAT13(
                                                  bVar150,CONCAT12(bVar149,CONCAT11(bVar148,bVar146)
                                                                  ))))));
          bVar162 = auVar176[0] | bVar162;
          bVar165 = auVar176[1] | bVar165;
          bVar166 = auVar176[2] | bVar166;
          bVar167 = auVar176[3] | bVar167;
          bVar168 = auVar176[4] | bVar168;
          bVar169 = auVar176[5] | bVar169;
          bVar170 = auVar176[6] | bVar170;
          bVar171 = auVar176[7] | bVar171;
          bVar47 = auVar36[0] | (byte)uVar48;
          bVar49 = auVar36[1] | (byte)((ulong)uVar48 >> 8);
          bVar50 = auVar36[2] | (byte)((ulong)uVar48 >> 0x10);
          bVar51 = auVar36[3] | (byte)((ulong)uVar48 >> 0x18);
          bVar52 = auVar36[4] | (byte)((ulong)uVar48 >> 0x20);
          bVar53 = auVar36[5] | (byte)((ulong)uVar48 >> 0x28);
          bVar54 = auVar36[6] | (byte)((ulong)uVar48 >> 0x30);
          bVar55 = auVar36[7] | (byte)((ulong)uVar48 >> 0x38);
          uVar48 = CONCAT17(bVar55,CONCAT16(bVar54,CONCAT15(bVar53,CONCAT14(bVar52,CONCAT13(bVar51,
                                                  CONCAT12(bVar50,CONCAT11(bVar49,bVar47)))))));
          bVar56 = auVar36[8] | (byte)uVar57;
          bVar58 = auVar36[9] | (byte)((ulong)uVar57 >> 8);
          bVar59 = auVar36[10] | (byte)((ulong)uVar57 >> 0x10);
          bVar60 = auVar36[0xb] | (byte)((ulong)uVar57 >> 0x18);
          bVar61 = auVar36[0xc] | (byte)((ulong)uVar57 >> 0x20);
          bVar62 = auVar36[0xd] | (byte)((ulong)uVar57 >> 0x28);
          bVar63 = auVar36[0xe] | (byte)((ulong)uVar57 >> 0x30);
          bVar64 = auVar36[0xf] | (byte)((ulong)uVar57 >> 0x38);
          uVar57 = CONCAT17(bVar64,CONCAT16(bVar63,CONCAT15(bVar62,CONCAT14(bVar61,CONCAT13(bVar60,
                                                  CONCAT12(bVar59,CONCAT11(bVar58,bVar56)))))));
          auVar178[0] = auVar161[0] | auVar23[0];
          auVar178[1] = auVar161[1] | auVar23[1];
          auVar178[2] = auVar161[2] | auVar23[2];
          auVar178[3] = auVar161[3] | auVar23[3];
          auVar178[4] = auVar161[4] | auVar23[4];
          auVar178[5] = auVar161[5] | auVar23[5];
          auVar178[6] = auVar161[6] | auVar23[6];
          auVar178[7] = auVar161[7] | auVar23[7];
          auVar178[8] = auVar161[8] | auVar23[8];
          auVar178[9] = auVar161[9] | auVar23[9];
          auVar178[10] = auVar161[10] | auVar23[10];
          auVar178[0xb] = auVar161[0xb] | auVar23[0xb];
          auVar178[0xc] = auVar161[0xc] | auVar23[0xc];
          auVar178[0xd] = auVar161[0xd] | auVar23[0xd];
          auVar178[0xe] = auVar161[0xe] | auVar23[0xe];
          auVar178[0xf] = auVar161[0xf] | auVar23[0xf];
          bVar101 = auVar158[0] | (byte)uVar102;
          bVar103 = auVar158[1] | (byte)((ulong)uVar102 >> 8);
          bVar104 = auVar158[2] | (byte)((ulong)uVar102 >> 0x10);
          bVar105 = auVar158[3] | (byte)((ulong)uVar102 >> 0x18);
          bVar106 = auVar158[4] | (byte)((ulong)uVar102 >> 0x20);
          bVar107 = auVar158[5] | (byte)((ulong)uVar102 >> 0x28);
          bVar108 = auVar158[6] | (byte)((ulong)uVar102 >> 0x30);
          bVar109 = auVar158[7] | (byte)((ulong)uVar102 >> 0x38);
          uVar102 = CONCAT17(bVar109,CONCAT16(bVar108,CONCAT15(bVar107,CONCAT14(bVar106,CONCAT13(
                                                  bVar105,CONCAT12(bVar104,CONCAT11(bVar103,bVar101)
                                                                  ))))));
          bVar110 = auVar158[8] | (byte)uVar111;
          bVar112 = auVar158[9] | (byte)((ulong)uVar111 >> 8);
          bVar113 = auVar158[10] | (byte)((ulong)uVar111 >> 0x10);
          bVar114 = auVar158[0xb] | (byte)((ulong)uVar111 >> 0x18);
          bVar115 = auVar158[0xc] | (byte)((ulong)uVar111 >> 0x20);
          bVar116 = auVar158[0xd] | (byte)((ulong)uVar111 >> 0x28);
          bVar117 = auVar158[0xe] | (byte)((ulong)uVar111 >> 0x30);
          bVar118 = auVar158[0xf] | (byte)((ulong)uVar111 >> 0x38);
          uVar111 = CONCAT17(bVar118,CONCAT16(bVar117,CONCAT15(bVar116,CONCAT14(bVar115,CONCAT13(
                                                  bVar114,CONCAT12(bVar113,CONCAT11(bVar112,bVar110)
                                                                  ))))));
          puVar17 = puVar18;
          auVar23 = auVar178;
        } while (uVar14 != 0);
        *param_1 = puVar18;
        auVar22[0] = auVar178[0] | bVar119 | bVar162 | bVar137 | bVar47 | bVar83 | bVar65 | bVar101;
        auVar22[1] = auVar178[1] | bVar121 | bVar165 | bVar139 | bVar49 | bVar85 | bVar67 | bVar103;
        auVar22[2] = auVar178[2] | bVar122 | bVar166 | bVar140 | bVar50 | bVar86 | bVar68 | bVar104;
        auVar22[3] = auVar178[3] | bVar123 | bVar167 | bVar141 | bVar51 | bVar87 | bVar69 | bVar105;
        auVar22[4] = auVar178[4] | bVar124 | bVar168 | bVar142 | bVar52 | bVar88 | bVar70 | bVar106;
        auVar22[5] = auVar178[5] | bVar125 | bVar169 | bVar143 | bVar53 | bVar89 | bVar71 | bVar107;
        auVar22[6] = auVar178[6] | bVar126 | bVar170 | bVar144 | bVar54 | bVar90 | bVar72 | bVar108;
        auVar22[7] = auVar178[7] | bVar127 | bVar171 | bVar145 | bVar55 | bVar91 | bVar73 | bVar109;
        auVar22[8] = auVar178[8] | bVar128 | auVar176[8] | bStack_48 | bVar146 |
                     bVar56 | bVar92 | bVar74 | bVar110;
        auVar22[9] = auVar178[9] | bVar130 | auVar176[9] | bStack_47 | bVar148 |
                     bVar58 | bVar94 | bVar76 | bVar112;
        auVar22[10] = auVar178[10] | bVar131 | auVar176[10] | bStack_46 | bVar149 |
                      bVar59 | bVar95 | bVar77 | bVar113;
        auVar22[0xb] = auVar178[0xb] | bVar132 | auVar176[0xb] | bStack_45 | bVar150 |
                       bVar60 | bVar96 | bVar78 | bVar114;
        auVar22[0xc] = auVar178[0xc] | bVar133 | auVar176[0xc] | bStack_44 | bVar151 |
                       bVar61 | bVar97 | bVar79 | bVar115;
        auVar22[0xd] = auVar178[0xd] | bVar134 | auVar176[0xd] | bStack_43 | bVar152 |
                       bVar62 | bVar98 | bVar80 | bVar116;
        auVar22[0xe] = auVar178[0xe] | bVar135 | auVar176[0xe] | bStack_42 | bVar153 |
                       bVar63 | bVar99 | bVar81 | bVar117;
        auVar22[0xf] = auVar178[0xf] | bVar136 | auVar176[0xf] | bStack_41 | bVar154 |
                       bVar64 | bVar100 | bVar82 | bVar118;
        auVar23 = NEON_ext(auVar22,auVar22,8,1);
        uVar14 = CONCAT17(auVar22[7] | auVar23[7],
                          CONCAT16(auVar22[6] | auVar23[6],
                                   CONCAT15(auVar22[5] | auVar23[5],
                                            CONCAT14(auVar22[4] | auVar23[4],
                                                     CONCAT13(auVar22[3] | auVar23[3],
                                                              CONCAT12(auVar22[2] | auVar23[2],
                                                                       CONCAT11(auVar22[1] |
                                                                                auVar23[1],
                                                                                auVar22[0] |
                                                                                auVar23[0])))))));
        uVar13 = uVar15;
        puVar16 = (uint *)((long)puVar16 + uVar19);
        if (uVar2 == uVar19) goto LAB_007d5ed0;
      }
    }
    do {
      uVar4 = *puVar16;
      uVar15 = uVar13 - 8;
      *param_1 = (uint *)((long)puVar16 + 1);
      uVar14 = (ulong)(byte)uVar4 << (uVar15 & 0x3f) | uVar14;
      bVar1 = 0xf < uVar13;
      uVar13 = uVar15;
      puVar16 = (uint *)((long)puVar16 + 1);
    } while (bVar1);
  }
LAB_007d5ed0:
  if (0 < (int)uVar15) {
    uVar14 = uVar14 | *(byte *)*param_1 >> (ulong)(8U - (int)uVar15 & 0x1f);
  }
  return uVar14;
}


// ===== 007d60c4  FUN_007d60c4 =====

byte FUN_007d60c4(long *param_1)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  if ((int)param_1[1] < 1) {
    *(undefined4 *)(param_1 + 1) = 0xffffffff;
    return 0;
  }
  uVar2 = (int)param_1[1] - 1;
  pbVar3 = (byte *)*param_1;
  uVar1 = uVar2 & 7;
  *(uint *)(param_1 + 1) = uVar2;
  if (uVar1 != 0) {
    return *pbVar3 >> (ulong)uVar1 & 1;
  }
  *param_1 = (long)(pbVar3 + 1);
  return *pbVar3 & 1;
}


// ===== 007d6120  FUN_007d6120 =====

void FUN_007d6120(long *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (int)param_1[1];
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  iVar3 = iVar2 - param_2;
  if (iVar2 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0xffffffff;
    return;
  }
  iVar1 = iVar2 + 0xe;
  if (-1 < iVar2 + 7) {
    iVar1 = iVar2 + 7;
  }
  *(int *)(param_1 + 1) = iVar3;
  iVar2 = iVar3 + 0xe;
  if (-1 < iVar3 + 7) {
    iVar2 = iVar3 + 7;
  }
  *param_1 = *param_1 + (long)((iVar1 >> 3) - (iVar2 >> 3));
  return;
}


// ===== 007d6174  FUN_007d6174 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_007d6174(long *param_1,int param_2)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [13];
  undefined1 auVar11 [13];
  undefined1 auVar12 [13];
  undefined1 uVar13;
  undefined1 uVar14;
  ulong uVar15;
  uint *puVar16;
  byte *pbVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  uint *puVar21;
  uint *puVar22;
  ulong uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
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
  long lVar39;
  long lVar40;
  undefined1 auVar41 [16];
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  byte bVar52;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  undefined8 uVar53;
  byte bVar60;
  byte bVar61;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  undefined8 uVar62;
  byte bVar69;
  byte bVar70;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  undefined8 uVar71;
  byte bVar78;
  byte bVar79;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  undefined8 uVar80;
  byte bVar87;
  byte bVar88;
  byte bVar90;
  byte bVar91;
  byte bVar92;
  byte bVar93;
  byte bVar94;
  byte bVar95;
  undefined8 uVar89;
  byte bVar96;
  byte bVar97;
  byte bVar99;
  byte bVar100;
  byte bVar101;
  byte bVar102;
  byte bVar103;
  byte bVar104;
  undefined8 uVar98;
  byte bVar105;
  byte bVar106;
  byte bVar108;
  byte bVar109;
  byte bVar110;
  byte bVar111;
  byte bVar112;
  byte bVar113;
  undefined8 uVar107;
  byte bVar114;
  byte bVar115;
  byte bVar117;
  byte bVar118;
  byte bVar119;
  byte bVar120;
  byte bVar121;
  byte bVar122;
  undefined8 uVar116;
  byte bVar123;
  byte bVar124;
  byte bVar126;
  byte bVar127;
  byte bVar128;
  byte bVar129;
  byte bVar130;
  byte bVar131;
  undefined8 uVar125;
  byte bVar132;
  byte bVar133;
  byte bVar135;
  byte bVar136;
  byte bVar137;
  byte bVar138;
  byte bVar139;
  byte bVar140;
  undefined8 uVar134;
  byte bVar141;
  byte bVar142;
  byte bVar144;
  byte bVar145;
  byte bVar146;
  byte bVar147;
  byte bVar148;
  byte bVar149;
  undefined8 uVar143;
  byte bVar150;
  byte bVar151;
  byte bVar153;
  byte bVar154;
  byte bVar155;
  byte bVar156;
  byte bVar157;
  byte bVar158;
  undefined8 uVar152;
  byte bVar159;
  long lVar160;
  long lVar161;
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  ulong uVar164;
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  byte bVar167;
  byte bVar170;
  byte bVar171;
  byte bVar172;
  byte bVar173;
  byte bVar174;
  byte bVar175;
  byte bVar176;
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  ulong uVar179;
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  byte bStack_48;
  byte bStack_47;
  byte bStack_46;
  byte bStack_45;
  byte bStack_44;
  byte bStack_43;
  byte bStack_42;
  byte bStack_41;
  uint *puVar23;
  
  puVar16 = (uint *)(param_1 + 1);
  uVar18 = *puVar16;
  iVar4 = 1 << (ulong)(-(int)LZCOUNT(param_2) & 0x1f);
  uVar5 = 0x1f - (int)LZCOUNT(param_2);
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  uVar7 = uVar18 - uVar5;
  uVar6 = iVar4 - param_2;
  if ((int)uVar18 < (int)uVar5) {
    uVar15 = 0;
    *puVar16 = 0xffffffff;
    if (iVar4 != param_2) goto LAB_007d6334;
LAB_007d630c:
    uVar18 = 0;
    *puVar16 = 0xffffffff;
  }
  else {
    uVar3 = uVar18 & 7;
    *puVar16 = uVar7;
    if ((int)uVar18 < 1) {
      uVar3 = -(-uVar18 & 7);
    }
    uVar18 = uVar5 - uVar3;
    uVar20 = (ulong)uVar18;
    if ((int)uVar5 < (int)uVar3) {
      uVar15 = (ulong)((uint)(*(byte *)*param_1 >> (ulong)(uVar3 - uVar5 & 0x1f)) &
                      (-1 << (ulong)(uVar5 & 0x1f) ^ 0xffffffffU));
    }
    else {
      if ((int)uVar3 < 1) {
        uVar15 = 0;
        uVar20 = (ulong)uVar5;
        uVar18 = uVar5;
      }
      else {
        bVar167 = *(byte *)*param_1;
        *param_1 = (long)((byte *)*param_1 + 1);
        uVar15 = (ulong)((uint)bVar167 & (-1 << (ulong)(uVar3 & 0x1f) ^ 0xffffffffU)) <<
                 (uVar20 & 0x3f);
      }
      if (7 < (int)uVar18) {
        uVar2 = 0;
        if (0xe < uVar20) {
          uVar2 = uVar20 - 0xf;
        }
        puVar21 = (uint *)*param_1;
        uVar19 = uVar20;
        if (0x70 < uVar2) {
          lVar29 = 0;
          if (0xe < uVar20) {
            lVar29 = uVar20 - 0xf;
          }
          if (((long *)((long)puVar21 + (lVar29 + 7U >> 3) + 1) <= param_1) || (puVar16 <= puVar21))
          {
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar15;
            bVar167 = 0;
            bVar170 = 0;
            bVar171 = 0;
            bVar172 = 0;
            bVar173 = 0;
            bVar174 = 0;
            bVar175 = 0;
            bVar176 = 0;
            uVar2 = (uVar2 + 7 >> 3) + 1;
            uVar53 = 0;
            uVar62 = 0;
            uVar71 = 0;
            uVar80 = 0;
            uVar125 = 0;
            uVar134 = 0;
            uVar89 = 0;
            uVar98 = 0;
            uVar143 = 0;
            uVar152 = 0;
            uVar107 = 0;
            uVar116 = 0;
            lVar29 = uVar20 + _DAT_001f3100;
            lVar30 = uVar20 + _UNK_001f3108;
            uVar24 = uVar2 & 0x3ffffff0;
            lVar31 = uVar20 + _DAT_001f32c0;
            lVar32 = uVar20 + _UNK_001f32c8;
            lVar33 = uVar20 + _DAT_001f3660;
            lVar34 = uVar20 + _UNK_001f3668;
            lVar35 = uVar20 + _DAT_001f2f80;
            lVar36 = uVar20 + _UNK_001f2f88;
            lVar37 = uVar20 + _DAT_001f1a20;
            lVar38 = uVar20 + _UNK_001f1a28;
            lVar39 = uVar20 + _DAT_001f2de0;
            lVar40 = uVar20 + _UNK_001f2de8;
            lVar50 = uVar20 + _DAT_001f43c0;
            lVar51 = uVar20 + _UNK_001f43c8;
            lVar160 = uVar20 + _DAT_001f3430;
            lVar161 = uVar20 + _UNK_001f3438;
            uVar20 = uVar20 + uVar24 * -8;
            uVar15 = uVar2 & 0x3ffffff0;
            puVar22 = puVar21;
            do {
              puVar23 = puVar22 + 4;
              uVar13 = *(undefined1 *)((long)puVar22 + 1);
              uVar14 = *(undefined1 *)((long)puVar22 + 9);
              auVar168._0_8_ = lVar37 + -8;
              auVar168._8_8_ = lVar38 + -8;
              auVar177._0_8_ = lVar33 + -8;
              auVar177._8_8_ = lVar34 + -8;
              auVar182._0_8_ = lVar35 + -8;
              auVar182._8_8_ = lVar36 + -8;
              auVar181._0_8_ = lVar39 + -8;
              auVar181._8_8_ = lVar40 + -8;
              lVar42 = lVar50 + -8;
              lVar43 = lVar51 + -8;
              lVar44 = lVar31 + -8;
              lVar45 = lVar32 + -8;
              uVar15 = uVar15 - 0x10;
              lVar46 = lVar160 + -8;
              lVar47 = lVar161 + -8;
              lVar50 = lVar50 + -0x80;
              lVar51 = lVar51 + -0x80;
              lVar160 = lVar160 + -0x80;
              lVar161 = lVar161 + -0x80;
              uVar179 = CONCAT35(0,CONCAT14(*(undefined1 *)((long)puVar22 + 5),
                                            (uint)(byte)puVar22[1]));
              auVar10[8] = *(undefined1 *)((long)puVar22 + 6);
              auVar10._0_8_ = uVar179;
              auVar10._9_3_ = 0;
              auVar10[0xc] = *(undefined1 *)((long)puVar22 + 7);
              uVar164 = CONCAT26(0,(uint6)CONCAT14(uVar13,(uint)CONCAT12(uVar13,(ushort)(byte)*
                                                  puVar22)) & 0xffff0000ffff);
              auVar12[8] = *(undefined1 *)((long)puVar22 + 2);
              auVar12._0_8_ = uVar164;
              auVar12._9_3_ = 0;
              auVar12[0xc] = *(undefined1 *)((long)puVar22 + 3);
              uVar19 = CONCAT35(0,CONCAT14(*(undefined1 *)((long)puVar22 + 0xd),
                                           (uint)(byte)puVar22[3]));
              auVar11[8] = *(undefined1 *)((long)puVar22 + 0xe);
              auVar11._0_8_ = uVar19;
              auVar11._9_3_ = 0;
              auVar11[0xc] = *(undefined1 *)((long)puVar22 + 0xf);
              lVar39 = lVar39 + -0x80;
              lVar40 = lVar40 + -0x80;
              lVar37 = lVar37 + -0x80;
              lVar38 = lVar38 + -0x80;
              lVar35 = lVar35 + -0x80;
              lVar36 = lVar36 + -0x80;
              lVar33 = lVar33 + -0x80;
              lVar34 = lVar34 + -0x80;
              lVar31 = lVar31 + -0x80;
              lVar32 = lVar32 + -0x80;
              auVar180._0_8_ = uVar179 & 0xffffffff;
              auVar180[8] = *(undefined1 *)((long)puVar22 + 5);
              auVar180._9_7_ = 0;
              auVar25._0_8_ = uVar19 & 0xffffffff;
              auVar25[8] = *(undefined1 *)((long)puVar22 + 0xd);
              auVar25._9_7_ = 0;
              auVar165._0_8_ = uVar164 & 0xffffffff;
              auVar165[8] = uVar13;
              auVar165._9_7_ = 0;
              auVar162._0_8_ = (ulong)auVar11._8_5_ & 0xffffffff;
              auVar162._8_5_ = auVar11._8_5_ >> 0x20;
              auVar162._13_3_ = 0;
              auVar169._8_5_ = auVar10._8_5_ >> 0x20;
              auVar169._0_8_ = (ulong)auVar10._8_5_ & 0xffffffff;
              auVar169._13_3_ = 0;
              auVar169 = NEON_ushl(auVar169,auVar168,8);
              lVar48 = lVar29 + -8;
              lVar49 = lVar30 + -8;
              auVar26[8] = uVar14;
              auVar26._0_8_ =
                   (ulong)((uint6)CONCAT14(uVar14,(uint)CONCAT12(uVar14,(ushort)(byte)puVar22[2])) &
                          0xffff0000ffff) & 0xffffffff;
              auVar26._9_7_ = 0;
              auVar183 = NEON_ushl(auVar26,auVar182,8);
              auVar181 = NEON_ushl(auVar180,auVar181,8);
              auVar178[8] = *(undefined1 *)((long)puVar22 + 0xb);
              auVar178._0_8_ =
                   (ulong)CONCAT14(*(undefined1 *)((long)puVar22 + 0xb),
                                   (uint)*(byte *)((long)puVar22 + 10)) & 0xffffffff;
              auVar178._9_7_ = 0;
              auVar178 = NEON_ushl(auVar178,auVar177,8);
              auVar163._8_8_ = lVar45;
              auVar163._0_8_ = lVar44;
              auVar26 = NEON_ushl(auVar25,auVar163,8);
              auVar166._8_8_ = lVar47;
              auVar166._0_8_ = lVar46;
              auVar166 = NEON_ushl(auVar165,auVar166,8);
              auVar41._8_8_ = lVar43;
              auVar41._0_8_ = lVar42;
              auVar9._8_5_ = auVar12._8_5_ >> 0x20;
              auVar9._0_8_ = (ulong)auVar12._8_5_ & 0xffffffff;
              auVar9._13_3_ = 0;
              auVar41 = NEON_ushl(auVar9,auVar41,8);
              lVar29 = lVar29 + -0x80;
              lVar30 = lVar30 + -0x80;
              auVar8._8_8_ = lVar49;
              auVar8._0_8_ = lVar48;
              auVar163 = NEON_ushl(auVar162,auVar8,8);
              bVar70 = auVar169[0] | (byte)uVar71;
              bVar72 = auVar169[1] | (byte)((ulong)uVar71 >> 8);
              bVar73 = auVar169[2] | (byte)((ulong)uVar71 >> 0x10);
              bVar74 = auVar169[3] | (byte)((ulong)uVar71 >> 0x18);
              bVar75 = auVar169[4] | (byte)((ulong)uVar71 >> 0x20);
              bVar76 = auVar169[5] | (byte)((ulong)uVar71 >> 0x28);
              bVar77 = auVar169[6] | (byte)((ulong)uVar71 >> 0x30);
              bVar78 = auVar169[7] | (byte)((ulong)uVar71 >> 0x38);
              uVar71 = CONCAT17(bVar78,CONCAT16(bVar77,CONCAT15(bVar76,CONCAT14(bVar75,CONCAT13(
                                                  bVar74,CONCAT12(bVar73,CONCAT11(bVar72,bVar70)))))
                                               ));
              bVar79 = auVar169[8] | (byte)uVar80;
              bVar81 = auVar169[9] | (byte)((ulong)uVar80 >> 8);
              bVar82 = auVar169[10] | (byte)((ulong)uVar80 >> 0x10);
              bVar83 = auVar169[0xb] | (byte)((ulong)uVar80 >> 0x18);
              bVar84 = auVar169[0xc] | (byte)((ulong)uVar80 >> 0x20);
              bVar85 = auVar169[0xd] | (byte)((ulong)uVar80 >> 0x28);
              bVar86 = auVar169[0xe] | (byte)((ulong)uVar80 >> 0x30);
              bVar87 = auVar169[0xf] | (byte)((ulong)uVar80 >> 0x38);
              uVar80 = CONCAT17(bVar87,CONCAT16(bVar86,CONCAT15(bVar85,CONCAT14(bVar84,CONCAT13(
                                                  bVar83,CONCAT12(bVar82,CONCAT11(bVar81,bVar79)))))
                                               ));
              bVar88 = auVar178[0] | (byte)uVar89;
              bVar90 = auVar178[1] | (byte)((ulong)uVar89 >> 8);
              bVar91 = auVar178[2] | (byte)((ulong)uVar89 >> 0x10);
              bVar92 = auVar178[3] | (byte)((ulong)uVar89 >> 0x18);
              bVar93 = auVar178[4] | (byte)((ulong)uVar89 >> 0x20);
              bVar94 = auVar178[5] | (byte)((ulong)uVar89 >> 0x28);
              bVar95 = auVar178[6] | (byte)((ulong)uVar89 >> 0x30);
              bVar96 = auVar178[7] | (byte)((ulong)uVar89 >> 0x38);
              uVar89 = CONCAT17(bVar96,CONCAT16(bVar95,CONCAT15(bVar94,CONCAT14(bVar93,CONCAT13(
                                                  bVar92,CONCAT12(bVar91,CONCAT11(bVar90,bVar88)))))
                                               ));
              bVar97 = auVar178[8] | (byte)uVar98;
              bVar99 = auVar178[9] | (byte)((ulong)uVar98 >> 8);
              bVar100 = auVar178[10] | (byte)((ulong)uVar98 >> 0x10);
              bVar101 = auVar178[0xb] | (byte)((ulong)uVar98 >> 0x18);
              bVar102 = auVar178[0xc] | (byte)((ulong)uVar98 >> 0x20);
              bVar103 = auVar178[0xd] | (byte)((ulong)uVar98 >> 0x28);
              bVar104 = auVar178[0xe] | (byte)((ulong)uVar98 >> 0x30);
              bVar105 = auVar178[0xf] | (byte)((ulong)uVar98 >> 0x38);
              uVar98 = CONCAT17(bVar105,CONCAT16(bVar104,CONCAT15(bVar103,CONCAT14(bVar102,CONCAT13(
                                                  bVar101,CONCAT12(bVar100,CONCAT11(bVar99,bVar97)))
                                                  ))));
              bVar124 = auVar183[0] | (byte)uVar125;
              bVar126 = auVar183[1] | (byte)((ulong)uVar125 >> 8);
              bVar127 = auVar183[2] | (byte)((ulong)uVar125 >> 0x10);
              bVar128 = auVar183[3] | (byte)((ulong)uVar125 >> 0x18);
              bVar129 = auVar183[4] | (byte)((ulong)uVar125 >> 0x20);
              bVar130 = auVar183[5] | (byte)((ulong)uVar125 >> 0x28);
              bVar131 = auVar183[6] | (byte)((ulong)uVar125 >> 0x30);
              bVar132 = auVar183[7] | (byte)((ulong)uVar125 >> 0x38);
              uVar125 = CONCAT17(bVar132,CONCAT16(bVar131,CONCAT15(bVar130,CONCAT14(bVar129,CONCAT13
                                                  (bVar128,CONCAT12(bVar127,CONCAT11(bVar126,bVar124
                                                                                    )))))));
              bVar133 = auVar183[8] | (byte)uVar134;
              bVar135 = auVar183[9] | (byte)((ulong)uVar134 >> 8);
              bVar136 = auVar183[10] | (byte)((ulong)uVar134 >> 0x10);
              bVar137 = auVar183[0xb] | (byte)((ulong)uVar134 >> 0x18);
              bVar138 = auVar183[0xc] | (byte)((ulong)uVar134 >> 0x20);
              bVar139 = auVar183[0xd] | (byte)((ulong)uVar134 >> 0x28);
              bVar140 = auVar183[0xe] | (byte)((ulong)uVar134 >> 0x30);
              bVar141 = auVar183[0xf] | (byte)((ulong)uVar134 >> 0x38);
              uVar134 = CONCAT17(bVar141,CONCAT16(bVar140,CONCAT15(bVar139,CONCAT14(bVar138,CONCAT13
                                                  (bVar137,CONCAT12(bVar136,CONCAT11(bVar135,bVar133
                                                                                    )))))));
              bVar142 = auVar26[0] | (byte)uVar143;
              bVar144 = auVar26[1] | (byte)((ulong)uVar143 >> 8);
              bVar145 = auVar26[2] | (byte)((ulong)uVar143 >> 0x10);
              bVar146 = auVar26[3] | (byte)((ulong)uVar143 >> 0x18);
              bVar147 = auVar26[4] | (byte)((ulong)uVar143 >> 0x20);
              bVar148 = auVar26[5] | (byte)((ulong)uVar143 >> 0x28);
              bVar149 = auVar26[6] | (byte)((ulong)uVar143 >> 0x30);
              bVar150 = auVar26[7] | (byte)((ulong)uVar143 >> 0x38);
              uVar143 = CONCAT17(bVar150,CONCAT16(bVar149,CONCAT15(bVar148,CONCAT14(bVar147,CONCAT13
                                                  (bVar146,CONCAT12(bVar145,CONCAT11(bVar144,bVar142
                                                                                    )))))));
              bVar151 = auVar26[8] | (byte)uVar152;
              bVar153 = auVar26[9] | (byte)((ulong)uVar152 >> 8);
              bVar154 = auVar26[10] | (byte)((ulong)uVar152 >> 0x10);
              bVar155 = auVar26[0xb] | (byte)((ulong)uVar152 >> 0x18);
              bVar156 = auVar26[0xc] | (byte)((ulong)uVar152 >> 0x20);
              bVar157 = auVar26[0xd] | (byte)((ulong)uVar152 >> 0x28);
              bVar158 = auVar26[0xe] | (byte)((ulong)uVar152 >> 0x30);
              bVar159 = auVar26[0xf] | (byte)((ulong)uVar152 >> 0x38);
              uVar152 = CONCAT17(bVar159,CONCAT16(bVar158,CONCAT15(bVar157,CONCAT14(bVar156,CONCAT13
                                                  (bVar155,CONCAT12(bVar154,CONCAT11(bVar153,bVar151
                                                                                    )))))));
              bVar167 = auVar181[0] | bVar167;
              bVar170 = auVar181[1] | bVar170;
              bVar171 = auVar181[2] | bVar171;
              bVar172 = auVar181[3] | bVar172;
              bVar173 = auVar181[4] | bVar173;
              bVar174 = auVar181[5] | bVar174;
              bVar175 = auVar181[6] | bVar175;
              bVar176 = auVar181[7] | bVar176;
              bVar52 = auVar41[0] | (byte)uVar53;
              bVar54 = auVar41[1] | (byte)((ulong)uVar53 >> 8);
              bVar55 = auVar41[2] | (byte)((ulong)uVar53 >> 0x10);
              bVar56 = auVar41[3] | (byte)((ulong)uVar53 >> 0x18);
              bVar57 = auVar41[4] | (byte)((ulong)uVar53 >> 0x20);
              bVar58 = auVar41[5] | (byte)((ulong)uVar53 >> 0x28);
              bVar59 = auVar41[6] | (byte)((ulong)uVar53 >> 0x30);
              bVar60 = auVar41[7] | (byte)((ulong)uVar53 >> 0x38);
              uVar53 = CONCAT17(bVar60,CONCAT16(bVar59,CONCAT15(bVar58,CONCAT14(bVar57,CONCAT13(
                                                  bVar56,CONCAT12(bVar55,CONCAT11(bVar54,bVar52)))))
                                               ));
              bVar61 = auVar41[8] | (byte)uVar62;
              bVar63 = auVar41[9] | (byte)((ulong)uVar62 >> 8);
              bVar64 = auVar41[10] | (byte)((ulong)uVar62 >> 0x10);
              bVar65 = auVar41[0xb] | (byte)((ulong)uVar62 >> 0x18);
              bVar66 = auVar41[0xc] | (byte)((ulong)uVar62 >> 0x20);
              bVar67 = auVar41[0xd] | (byte)((ulong)uVar62 >> 0x28);
              bVar68 = auVar41[0xe] | (byte)((ulong)uVar62 >> 0x30);
              bVar69 = auVar41[0xf] | (byte)((ulong)uVar62 >> 0x38);
              uVar62 = CONCAT17(bVar69,CONCAT16(bVar68,CONCAT15(bVar67,CONCAT14(bVar66,CONCAT13(
                                                  bVar65,CONCAT12(bVar64,CONCAT11(bVar63,bVar61)))))
                                               ));
              auVar183[0] = auVar166[0] | auVar28[0];
              auVar183[1] = auVar166[1] | auVar28[1];
              auVar183[2] = auVar166[2] | auVar28[2];
              auVar183[3] = auVar166[3] | auVar28[3];
              auVar183[4] = auVar166[4] | auVar28[4];
              auVar183[5] = auVar166[5] | auVar28[5];
              auVar183[6] = auVar166[6] | auVar28[6];
              auVar183[7] = auVar166[7] | auVar28[7];
              auVar183[8] = auVar166[8] | auVar28[8];
              auVar183[9] = auVar166[9] | auVar28[9];
              auVar183[10] = auVar166[10] | auVar28[10];
              auVar183[0xb] = auVar166[0xb] | auVar28[0xb];
              auVar183[0xc] = auVar166[0xc] | auVar28[0xc];
              auVar183[0xd] = auVar166[0xd] | auVar28[0xd];
              auVar183[0xe] = auVar166[0xe] | auVar28[0xe];
              auVar183[0xf] = auVar166[0xf] | auVar28[0xf];
              bVar106 = auVar163[0] | (byte)uVar107;
              bVar108 = auVar163[1] | (byte)((ulong)uVar107 >> 8);
              bVar109 = auVar163[2] | (byte)((ulong)uVar107 >> 0x10);
              bVar110 = auVar163[3] | (byte)((ulong)uVar107 >> 0x18);
              bVar111 = auVar163[4] | (byte)((ulong)uVar107 >> 0x20);
              bVar112 = auVar163[5] | (byte)((ulong)uVar107 >> 0x28);
              bVar113 = auVar163[6] | (byte)((ulong)uVar107 >> 0x30);
              bVar114 = auVar163[7] | (byte)((ulong)uVar107 >> 0x38);
              uVar107 = CONCAT17(bVar114,CONCAT16(bVar113,CONCAT15(bVar112,CONCAT14(bVar111,CONCAT13
                                                  (bVar110,CONCAT12(bVar109,CONCAT11(bVar108,bVar106
                                                                                    )))))));
              bVar115 = auVar163[8] | (byte)uVar116;
              bVar117 = auVar163[9] | (byte)((ulong)uVar116 >> 8);
              bVar118 = auVar163[10] | (byte)((ulong)uVar116 >> 0x10);
              bVar119 = auVar163[0xb] | (byte)((ulong)uVar116 >> 0x18);
              bVar120 = auVar163[0xc] | (byte)((ulong)uVar116 >> 0x20);
              bVar121 = auVar163[0xd] | (byte)((ulong)uVar116 >> 0x28);
              bVar122 = auVar163[0xe] | (byte)((ulong)uVar116 >> 0x30);
              bVar123 = auVar163[0xf] | (byte)((ulong)uVar116 >> 0x38);
              uVar116 = CONCAT17(bVar123,CONCAT16(bVar122,CONCAT15(bVar121,CONCAT14(bVar120,CONCAT13
                                                  (bVar119,CONCAT12(bVar118,CONCAT11(bVar117,bVar115
                                                                                    )))))));
              puVar22 = puVar23;
              auVar28 = auVar183;
            } while (uVar15 != 0);
            *param_1 = (long)puVar23;
            auVar27[0] = auVar183[0] | bVar124 | bVar167 | bVar142 |
                         bVar52 | bVar88 | bVar70 | bVar106;
            auVar27[1] = auVar183[1] | bVar126 | bVar170 | bVar144 |
                         bVar54 | bVar90 | bVar72 | bVar108;
            auVar27[2] = auVar183[2] | bVar127 | bVar171 | bVar145 |
                         bVar55 | bVar91 | bVar73 | bVar109;
            auVar27[3] = auVar183[3] | bVar128 | bVar172 | bVar146 |
                         bVar56 | bVar92 | bVar74 | bVar110;
            auVar27[4] = auVar183[4] | bVar129 | bVar173 | bVar147 |
                         bVar57 | bVar93 | bVar75 | bVar111;
            auVar27[5] = auVar183[5] | bVar130 | bVar174 | bVar148 |
                         bVar58 | bVar94 | bVar76 | bVar112;
            auVar27[6] = auVar183[6] | bVar131 | bVar175 | bVar149 |
                         bVar59 | bVar95 | bVar77 | bVar113;
            auVar27[7] = auVar183[7] | bVar132 | bVar176 | bVar150 |
                         bVar60 | bVar96 | bVar78 | bVar114;
            auVar27[8] = auVar183[8] | bVar133 | auVar181[8] | bStack_48 | bVar151 |
                         bVar61 | bVar97 | bVar79 | bVar115;
            auVar27[9] = auVar183[9] | bVar135 | auVar181[9] | bStack_47 | bVar153 |
                         bVar63 | bVar99 | bVar81 | bVar117;
            auVar27[10] = auVar183[10] | bVar136 | auVar181[10] | bStack_46 | bVar154 |
                          bVar64 | bVar100 | bVar82 | bVar118;
            auVar27[0xb] = auVar183[0xb] | bVar137 | auVar181[0xb] | bStack_45 | bVar155 |
                           bVar65 | bVar101 | bVar83 | bVar119;
            auVar27[0xc] = auVar183[0xc] | bVar138 | auVar181[0xc] | bStack_44 | bVar156 |
                           bVar66 | bVar102 | bVar84 | bVar120;
            auVar27[0xd] = auVar183[0xd] | bVar139 | auVar181[0xd] | bStack_43 | bVar157 |
                           bVar67 | bVar103 | bVar85 | bVar121;
            auVar27[0xe] = auVar183[0xe] | bVar140 | auVar181[0xe] | bStack_42 | bVar158 |
                           bVar68 | bVar104 | bVar86 | bVar122;
            auVar27[0xf] = auVar183[0xf] | bVar141 | auVar181[0xf] | bStack_41 | bVar159 |
                           bVar69 | bVar105 | bVar87 | bVar123;
            auVar28 = NEON_ext(auVar27,auVar27,8,1);
            uVar15 = CONCAT17(auVar27[7] | auVar28[7],
                              CONCAT16(auVar27[6] | auVar28[6],
                                       CONCAT15(auVar27[5] | auVar28[5],
                                                CONCAT14(auVar27[4] | auVar28[4],
                                                         CONCAT13(auVar27[3] | auVar28[3],
                                                                  CONCAT12(auVar27[2] | auVar28[2],
                                                                           CONCAT11(auVar27[1] |
                                                                                    auVar28[1],
                                                                                    auVar27[0] |
                                                                                    auVar28[0]))))))
                             );
            uVar19 = uVar20;
            puVar21 = (uint *)((long)puVar21 + uVar24);
            if (uVar2 == uVar24) goto LAB_007d62b8;
          }
        }
        do {
          uVar18 = *puVar21;
          uVar20 = uVar19 - 8;
          *param_1 = (long)puVar21 + 1;
          uVar15 = (ulong)(byte)uVar18 << (uVar20 & 0x3f) | uVar15;
          bVar1 = 0xf < uVar19;
          uVar19 = uVar20;
          puVar21 = (uint *)((long)puVar21 + 1);
        } while (bVar1);
      }
LAB_007d62b8:
      if (0 < (int)uVar20) {
        uVar15 = uVar15 | *(byte *)*param_1 >> (ulong)(8U - (int)uVar20 & 0x1f);
      }
    }
    if (uVar15 < uVar6) goto LAB_007d6334;
    *(undefined1 *)((long)param_1 + 0xc) = 0;
    if ((int)uVar7 < 1) goto LAB_007d630c;
    pbVar17 = (byte *)*param_1;
    uVar18 = uVar7 - 1 & 7;
    *(uint *)(param_1 + 1) = uVar7 - 1;
    if (uVar18 == 0) {
      *param_1 = (long)(pbVar17 + 1);
      bVar167 = *pbVar17;
    }
    else {
      bVar167 = *pbVar17 >> (ulong)uVar18;
    }
    uVar18 = bVar167 & 1;
  }
  uVar15 = (ulong)((uVar18 - uVar6) + (int)uVar15 * 2);
LAB_007d6334:
  return uVar15 & 0xffffffff;
}


// ===== 007d6508  FUN_007d6508 =====

int FUN_007d6508(long *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar6 = *(uint *)(param_1 + 1);
  uVar3 = 0;
  do {
    *(undefined1 *)((long)param_1 + 0xc) = 0;
    if ((int)uVar6 < 1) {
      *(undefined4 *)(param_1 + 1) = 0xffffffff;
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = uVar6 - 1;
      pbVar4 = (byte *)*param_1;
      *(uint *)(param_1 + 1) = uVar2;
      if ((uVar2 & 7) == 0) {
        *param_1 = (long)(pbVar4 + 1);
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
      }
      else {
        bVar1 = *pbVar4 >> (ulong)(uVar2 & 7);
      }
      if ((bVar1 & 1) != 0) {
        *(undefined1 *)((long)param_1 + 0xc) = 0;
        if ((int)uVar3 < (int)uVar6) {
          uVar2 = uVar2 & 7;
          *(uint *)(param_1 + 1) = ~uVar3 + uVar6;
          if (uVar2 < uVar3 || uVar2 - uVar3 == 0) {
            if (uVar2 == 0) {
              uVar7 = 0;
              uVar6 = 0;
              uVar9 = (ulong)uVar3;
              pbVar5 = pbVar4;
              uVar8 = uVar3;
            }
            else {
              pbVar5 = pbVar4 + 1;
              bVar1 = *pbVar4;
              uVar8 = uVar3 - uVar2;
              uVar9 = (ulong)uVar8;
              *param_1 = (long)pbVar5;
              uVar7 = (ulong)((uint)bVar1 & (-1 << (ulong)uVar2 ^ 0xffffffffU)) << (uVar9 & 0x3f);
              uVar6 = (uint)uVar7;
            }
            if (7 < (int)uVar8) {
              uVar10 = uVar9 + 8;
              pbVar4 = pbVar5;
              do {
                pbVar5 = pbVar4 + 1;
                bVar1 = *pbVar4;
                uVar11 = uVar10 - 0x10;
                uVar10 = uVar10 - 8;
                uVar8 = (int)uVar9 - 8;
                uVar9 = (ulong)uVar8;
                *param_1 = (long)pbVar5;
                uVar7 = (ulong)bVar1 << (uVar11 & 0x3f) | uVar7;
                uVar6 = (uint)uVar7;
                pbVar4 = pbVar5;
              } while (0xf < uVar10);
            }
            if (0 < (int)uVar8) {
              uVar6 = uVar6 | *pbVar5 >> (ulong)(8 - uVar8 & 0x1f);
            }
          }
          else {
            uVar6 = (uint)(*pbVar4 >> (ulong)(uVar2 - uVar3 & 0x1f)) &
                    (-1 << (ulong)(uVar3 & 0x1f) ^ 0xffffffffU);
          }
        }
        else {
          uVar6 = 0;
          *(undefined4 *)(param_1 + 1) = 0xffffffff;
        }
        return ~(-1 << (ulong)(uVar3 & 0x1f)) + uVar6;
      }
    }
    uVar6 = uVar2;
    uVar3 = uVar3 + 1;
    if (uVar3 == 0x20) {
      *(undefined4 *)(param_1 + 1) = 0xffffffff;
      return 0;
    }
  } while( true );
}


// ===== 007d6670  FUN_007d6670 =====

uint FUN_007d6670(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = FUN_007d6508();
  uVar1 = uVar2 + 1 >> 1;
  if ((uVar2 & 1) == 0) {
    uVar1 = -(uVar2 >> 1);
  }
  return uVar1;
}


// ===== 007d66a0  FUN_007d66a0 =====

void FUN_007d66a0(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6)

{
  uint uVar1;
  
  *param_1 = 0;
  *(long *)(param_1 + 8) = param_6;
  *(undefined8 *)(param_1 + 0x10) = param_4;
  *(undefined8 *)(param_1 + 0x18) = param_5;
  FUN_007d76d8(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x40) = 0;
  uVar1 = *(uint *)(*(long *)(param_1 + 0x10) + 8);
  if ((((-1 < (int)uVar1) && (*(ulong *)(param_6 + 0x58) >> 1 == (ulong)uVar1)) &&
      (uVar1 = *(uint *)(*(long *)(param_1 + 0x10) + 4), -1 < (int)uVar1)) &&
     (*(ulong *)(param_6 + 0x10) >> 1 == (ulong)uVar1)) {
    FUN_007d6730(param_1);
    return;
  }
  *param_1 = 1;
  return;
}


// ===== 007d6730  FUN_007d6730 =====

void FUN_007d6730(undefined1 *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined1 auVar5 [16];
  
  piVar2 = *(int **)(*(long *)(param_1 + 0x10) + 0x68);
  piVar1 = *(int **)(*(long *)(param_1 + 0x10) + 0x70);
  if (piVar2 == piVar1) {
LAB_007d678c:
    if (piVar2 != piVar1) {
      piVar3 = piVar2;
      do {
        piVar4 = piVar3;
        if ((*(int *)(*(long *)(param_1 + 8) + 8) != *piVar3) ||
           (*(int *)(*(long *)(param_1 + 8) + 0xc) != piVar3[1])) break;
        piVar3 = piVar3 + 0x1a;
        piVar4 = piVar1;
      } while (piVar3 != piVar1);
      auVar5 = FUN_007d6e10(param_1,piVar2);
      *(undefined1 (*) [16])(param_1 + 0x40) = auVar5;
      while (piVar2 = piVar2 + 0x1a, piVar2 != piVar4) {
        auVar5 = FUN_007d6e10(param_1,piVar2);
        if (auVar5._12_4_ < *(int *)(param_1 + 0x4c)) {
          *(undefined1 (*) [16])(param_1 + 0x40) = auVar5;
        }
      }
      return;
    }
  }
  else {
    do {
      if ((*(int *)(*(long *)(param_1 + 8) + 8) == *piVar2) &&
         (*(int *)(*(long *)(param_1 + 8) + 0xc) == piVar2[1])) goto LAB_007d678c;
      piVar2 = piVar2 + 0x1a;
    } while (piVar2 != piVar1);
  }
  *param_1 = 1;
  return;
}


// ===== 007d6838  FUN_007d6838 =====

byte FUN_007d6838(byte *param_1)

{
  undefined8 uVar1;
  
  if ((*param_1 & 1) != 0) {
    return 0;
  }
  FUN_007d68c8();
  if (((0 < *(int *)(param_1 + 0x4c)) || (*(long *)(*(long *)(param_1 + 8) + 0x88) != 0)) ||
     (*(char *)(*(long *)(param_1 + 8) + 0x80) == '\x01')) {
    FUN_007d69a0(param_1);
    FUN_007d6af8(param_1);
  }
  uVar1 = FUN_007d76e8(param_1 + 0x20);
  FUN_007d7a00(param_1 + 0x20,uVar1);
  return (*param_1 ^ 1) & 1;
}


// ===== 007d68c8  FUN_007d68c8 =====

void FUN_007d68c8(undefined1 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = FUN_007d785c(param_1 + 0x20,**(undefined1 **)(param_1 + 8),1);
  if ((uVar1 & 1) == 0) {
    *param_1 = 1;
  }
  uVar1 = FUN_007d785c(param_1 + 0x20,*(undefined1 *)(*(long *)(param_1 + 8) + 1),1);
  if ((uVar1 & 1) == 0) {
    *param_1 = 1;
  }
  uVar2 = (long)**(int **)(param_1 + 0x10) +
          (*(long *)(param_1 + 0x40) - *(long *)(*(int **)(param_1 + 0x10) + 0x1a) >> 3) *
          0x4ec4ec4ec4ec4ec5;
  uVar1 = uVar2 & 0x3f;
  if ((long)uVar2 < 1) {
    uVar1 = -(-uVar2 & 0x3f);
  }
  uVar1 = FUN_007d785c(param_1 + 0x20,uVar1,6);
  if ((uVar1 & 1) == 0) {
    *param_1 = 1;
  }
  uVar1 = FUN_007d785c(param_1 + 0x20,(long)*(int *)(*(long *)(param_1 + 8) + 4),0x10);
  if ((uVar1 & 1) == 0) {
    *param_1 = 1;
  }
  return;
}


// ===== 007d69a0  FUN_007d69a0 =====

void FUN_007d69a0(undefined1 *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x88);
  uVar1 = FUN_007d785c(param_1 + 0x20,lVar3 != 0,1);
  if ((uVar1 & 1) == 0) {
    *param_1 = 1;
  }
  lVar2 = *(long *)(param_1 + 8);
  if ((*(char *)(lVar2 + 0x80) == '\x01') &&
     ((*(long *)(lVar2 + 0x88) == 0 ||
      ((-1L << ((ulong)*(uint *)(*(long *)(param_1 + 0x10) + 4) & 0x3f) ^
       (ulong)*(uint *)(lVar2 + 0x7c)) != 0xffffffffffffffff)))) {
    iVar4 = 1;
  }
  else {
    iVar4 = 0;
  }
  uVar1 = FUN_007d785c(param_1 + 0x20,iVar4,1);
  if ((uVar1 & 1) == 0) {
    *param_1 = 1;
  }
  uVar1 = FUN_007d785c(param_1 + 0x20,param_1[0x48],1);
  if ((uVar1 & 1) == 0) {
    *param_1 = 1;
  }
  uVar1 = FUN_007d785c(param_1 + 0x20,param_1[0x49],1);
  if ((uVar1 & 1) == 0) {
    *param_1 = 1;
  }
  uVar1 = FUN_007d785c(param_1 + 0x20,param_1[0x4a],1);
  if ((uVar1 & 1) == 0) {
    *param_1 = 1;
  }
  if (lVar3 != 0) {
    FUN_007d70f0(param_1);
  }
  if (iVar4 != 0) {
    if ((*(byte *)(*(long *)(param_1 + 8) + 0x80) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    uVar1 = FUN_007d785c(param_1 + 0x20,*(undefined4 *)(*(long *)(param_1 + 8) + 0x7c),
                         (long)*(int *)(*(long *)(param_1 + 0x10) + 4));
    if ((uVar1 & 1) == 0) {
      *param_1 = 1;
    }
  }
  return;
}


// ===== 007d6af8  FUN_007d6af8 =====

void FUN_007d6af8(undefined1 *param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long *plVar6;
  
  if (param_1[0x48] == '\x01') {
    uVar3 = *(ulong *)(*(long *)(param_1 + 8) + 0x10);
    plVar6 = (long *)(*(long *)(param_1 + 8) + 0x18);
    if ((uVar3 & 1) != 0) {
      plVar6 = (long *)*plVar6;
    }
    uVar3 = uVar3 & 0x7ffffffffffffffe;
    uVar5 = uVar3 << 1;
    while (uVar3 != 0) {
      uVar3 = FUN_007d785c(param_1 + 0x20,*(undefined4 *)plVar6,2);
      if ((uVar3 & 1) == 0) {
        *param_1 = 1;
      }
      plVar6 = (long *)((long)plVar6 + 4);
      uVar5 = uVar5 - 4;
      uVar3 = uVar5;
    }
  }
  if (param_1[0x49] == '\x01') {
    FUN_007d75e4(param_1);
  }
  if ((param_1[0x4a] == '\x01') && (0 < *(int *)(*(long *)(param_1 + 0x10) + 8))) {
    uVar3 = 0;
    do {
      if (uVar3 == 0x20) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/bitset:696: libc++ Hardening assertion __p < _Size failed: bitset::operator[] index out of bounds\n"
                  );
      }
      if ((*(ulong *)(param_1 + 0x18) >> (uVar3 & 0x3f) & 1) == 0) {
        lVar2 = 0;
      }
      else {
        uVar5 = *(ulong *)(*(long *)(param_1 + 8) + 0x58);
        if (uVar5 >> 1 <= uVar3) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x7d6c3c);
          (*pcVar1)();
        }
        puVar4 = (undefined8 *)(*(long *)(param_1 + 8) + 0x60);
        if ((uVar5 & 1) != 0) {
          puVar4 = (undefined8 *)*puVar4;
        }
        lVar2 = (long)*(int *)((long)puVar4 + uVar3 * 4);
      }
      uVar5 = FUN_007d785c(param_1 + 0x20,lVar2,8);
      if ((uVar5 & 1) == 0) {
        *param_1 = 1;
      }
      uVar3 = uVar3 + 1;
    } while ((long)uVar3 < (long)*(int *)(*(long *)(param_1 + 0x10) + 8));
  }
  return;
}


// ===== 007d6c3c  FUN_007d6c3c =====

int FUN_007d6c3c(byte *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  if ((*param_1 & 1) != 0) {
    return 0;
  }
  lVar3 = *(long *)(param_1 + 8);
  iVar1 = *(int *)(param_1 + 0x4c);
  if (iVar1 < 1) {
    if (*(long *)(lVar3 + 0x88) == 0) {
      if (*(char *)(lVar3 + 0x80) != '\x01') {
        return iVar1 + 0x18;
      }
      iVar2 = iVar1 + 0x1d;
      goto LAB_007d6c98;
    }
  }
  else {
    iVar2 = iVar1 + 0x1d;
    if (*(long *)(lVar3 + 0x88) == 0) goto LAB_007d6c98;
  }
  iVar2 = FUN_007d6d00(param_1);
  lVar3 = *(long *)(param_1 + 8);
  iVar2 = iVar2 + iVar1 + 0x1d;
LAB_007d6c98:
  if (*(char *)(lVar3 + 0x80) == '\x01') {
    if ((*(long *)(lVar3 + 0x88) == 0) ||
       ((-1L << ((ulong)*(uint *)(*(long *)(param_1 + 0x10) + 4) & 0x3f) ^
        (ulong)*(uint *)(lVar3 + 0x7c)) != 0xffffffffffffffff)) {
      iVar2 = *(uint *)(*(long *)(param_1 + 0x10) + 4) + iVar2;
    }
  }
  return iVar2;
}


// ===== 007d6d00  FUN_007d6d00 =====

int FUN_007d6d00(long param_1)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  
  lVar6 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(lVar6 + 0x68);
  lVar2 = *(long *)(lVar6 + 0x70) - lVar7;
  lVar8 = lVar2 >> 3;
  lVar8 = lVar8 * 0x24ec4ec4f + lVar8 * 0x189d89d8a * (ulong)*(uint *)(lVar6 + 4) + 0xb;
  iVar5 = (int)lVar8;
  if (lVar2 != 0) {
    do {
      puVar1 = (ulong *)(lVar7 + 0x38);
      lVar7 = lVar7 + 0x68;
      lVar8 = (*puVar1 >> 1) * 5 + (long)(int)lVar8;
      iVar5 = (int)lVar8;
    } while (lVar7 != *(long *)(lVar6 + 0x70));
  }
  iVar4 = FUN_007d7c58(*(undefined4 *)(lVar6 + 8),*(uint *)(lVar6 + 4) + 1);
  lVar8 = *(long *)(param_1 + 0x10);
  iVar4 = iVar4 + iVar5;
  iVar5 = *(int *)(lVar8 + 8);
  if (0 < iVar5) {
    plVar9 = (long *)(lVar8 + 0x18);
    if ((*(ulong *)(lVar8 + 0x10) & 1) != 0) {
      plVar9 = (long *)*plVar9;
    }
    uVar3 = *(ulong *)(lVar8 + 0x10) & 0x7ffffffffffffffe;
    lVar7 = uVar3 << 1;
    if (uVar3 != 0) {
      do {
        iVar5 = FUN_007d7c58(*(undefined4 *)plVar9,*(undefined4 *)(*(long *)(param_1 + 0x10) + 8));
        lVar7 = lVar7 + -4;
        iVar4 = iVar4 + iVar5;
        plVar9 = (long *)((long)plVar9 + 4);
      } while (lVar7 != 0);
      lVar8 = *(long *)(param_1 + 0x10);
      iVar5 = *(int *)(lVar8 + 8);
    }
    iVar4 = iVar4 + (int)((ulong)(*(long *)(lVar8 + 0x70) - *(long *)(lVar8 + 0x68)) >> 3) * iVar5 *
                    0x13b13b14;
  }
  return iVar4 + (*(uint *)(lVar8 + 0x40) >> 1) * 0x20 + 1;
}


// ===== 007d6e10  FUN_007d6e10 =====

undefined1  [16] FUN_007d6e10(long param_1,long param_2)

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
  undefined8 *__s2;
  undefined8 *__s1;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  code *pcVar9;
  bool bVar10;
  int iVar11;
  ulong uVar12;
  size_t __n;
  ulong uVar13;
  uint uVar14;
  int *piVar15;
  int *piVar16;
  ulong uVar17;
  long lVar18;
  uint *puVar19;
  uint *puVar20;
  long lVar22;
  undefined1 (*pauVar23) [16];
  long lVar24;
  ulong uVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  uint *puVar21;
  
  lVar24 = *(long *)(param_1 + 8);
  uVar25 = *(ulong *)(lVar24 + 0x40);
  __n = (uVar25 & 0x7ffffffffffffffe) * 2;
  if (__n + (*(ulong *)(param_2 + 0x38) >> 1) * -4 == 0) {
    __s2 = (undefined8 *)(param_2 + 0x40);
    if ((*(ulong *)(param_2 + 0x38) & 1) != 0) {
      __s2 = (undefined8 *)*(void **)(param_2 + 0x40);
    }
    __s1 = (undefined8 *)(lVar24 + 0x48);
    if ((uVar25 & 1) != 0) {
      __s1 = (undefined8 *)*(void **)(lVar24 + 0x48);
    }
    iVar11 = memcmp(__s1,__s2,__n);
    bVar10 = iVar11 != 0;
  }
  else {
    bVar10 = true;
  }
  uVar13 = *(ulong *)(lVar24 + 0x10);
  piVar15 = (int *)(lVar24 + 0x18);
  if ((uVar13 & 1) != 0) {
    piVar15 = *(int **)(lVar24 + 0x18);
  }
  lVar18 = (uVar13 & 0x7ffffffffffffffe) * 2;
  if (lVar18 + (*(ulong *)(param_2 + 8) >> 1) * -4 == 0) {
    if ((uVar13 & 0x7ffffffffffffffe) == 0) {
      uVar14 = 0;
    }
    else {
      piVar16 = (int *)(param_2 + 0x10);
      if ((*(ulong *)(param_2 + 8) & 1) != 0) {
        piVar16 = *(int **)(param_2 + 0x10);
      }
      do {
        lVar18 = lVar18 + -4;
        uVar14 = (uint)(*piVar15 != *piVar16);
        if (*piVar15 != *piVar16) break;
        piVar15 = piVar15 + 1;
        piVar16 = piVar16 + 1;
      } while (lVar18 != 0);
    }
  }
  else {
    uVar14 = 1;
  }
  uVar3 = *(uint *)(*(long *)(param_1 + 0x10) + 8);
  if (0 < (int)uVar3) {
    uVar17 = 0;
    do {
      if (uVar17 == 0x20) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/bitset:686: libc++ Hardening assertion __p < _Size failed: bitset::operator[] index out of bounds\n"
                  );
      }
      if ((*(ulong *)(param_1 + 0x18) >> (uVar17 & 0x3f) & 1) != 0) {
        if (*(ulong *)(lVar24 + 0x58) >> 1 <= uVar17) {
LAB_007d70d8:
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x7d70dc);
          (*pcVar9)();
        }
        lVar18 = lVar24 + 0x60;
        if ((*(ulong *)(lVar24 + 0x58) & 1) != 0) {
          lVar18 = *(long *)(lVar24 + 0x60);
        }
        if (*(ulong *)(param_2 + 0x50) >> 1 <= uVar17) goto LAB_007d70d8;
        lVar22 = param_2 + 0x58;
        if ((*(ulong *)(param_2 + 0x50) & 1) != 0) {
          lVar22 = *(long *)(param_2 + 0x58);
        }
        if (*(int *)(lVar18 + uVar17 * 4) != *(int *)(lVar22 + uVar17 * 4)) {
          lVar18 = 1;
          goto joined_r0x007d7044;
        }
      }
      uVar17 = uVar17 + 1;
    } while (uVar3 != uVar17);
  }
  lVar18 = 0;
joined_r0x007d7044:
  if (!bVar10) {
    uVar25 = 0;
    iVar11 = 0;
    goto LAB_007d7084;
  }
  uVar17 = uVar25 >> 1;
  puVar19 = (uint *)(lVar24 + 0x48);
  iVar11 = (int)uVar17 * 2 + 2;
  if ((uVar25 & 1) != 0) {
    puVar19 = *(uint **)puVar19;
  }
  if (uVar17 * 4 == 0) {
LAB_007d7038:
    uVar25 = 0x100;
  }
  else {
    uVar25 = uVar17 * 4 - 4;
    puVar20 = puVar19;
    if (0x1b < uVar25) {
      iVar27 = 0;
      iVar28 = 0;
      iVar29 = 0;
      iVar30 = 0;
      iVar31 = 0;
      iVar32 = 0;
      uVar25 = (uVar25 >> 2) + 1;
      pauVar23 = (undefined1 (*) [16])(puVar19 + 4);
      uVar12 = uVar25 & 0x7ffffffffffffff8;
      iVar26 = 0;
      puVar20 = puVar19 + (uVar25 & 0x7ffffffffffffff8);
      do {
        pauVar1 = pauVar23 + -1;
        auVar36 = *pauVar23;
        uVar12 = uVar12 - 8;
        pauVar23 = pauVar23 + 2;
        auVar7._8_4_ = 0x101;
        auVar7._0_8_ = 0x10100000101;
        auVar7._12_4_ = 0x101;
        auVar35 = NEON_cmhi(auVar7,*pauVar1,4);
        auVar8._8_4_ = 0x101;
        auVar8._0_8_ = 0x10100000101;
        auVar8._12_4_ = 0x101;
        auVar37 = NEON_cmhi(auVar8,auVar36,4);
        auVar33._8_4_ = 0x11;
        auVar33._0_8_ = 0x1100000011;
        auVar33._12_4_ = 0x11;
        auVar33 = NEON_cmgt(auVar33,*pauVar1,4);
        auVar34._8_4_ = 0x11;
        auVar34._0_8_ = 0x1100000011;
        auVar34._12_4_ = 0x11;
        auVar34 = NEON_cmgt(auVar34,auVar36,4);
        auVar36._8_4_ = 0xc;
        auVar36._0_8_ = 0xc0000000c;
        auVar36._12_4_ = 0xc;
        auVar4._8_4_ = 8;
        auVar4._0_8_ = 0x800000008;
        auVar4._12_4_ = 8;
        auVar36 = NEON_bsl(auVar35,auVar4,auVar36,1);
        auVar35._8_4_ = 0xc;
        auVar35._0_8_ = 0xc0000000c;
        auVar35._12_4_ = 0xc;
        auVar5._8_4_ = 8;
        auVar5._0_8_ = 0x800000008;
        auVar5._12_4_ = 8;
        auVar35 = NEON_bsl(auVar37,auVar5,auVar35,1);
        auVar37._8_4_ = 4;
        auVar37._0_8_ = 0x400000004;
        auVar37._12_4_ = 4;
        auVar33 = NEON_bsl(auVar33,auVar37,auVar36,1);
        auVar6._8_4_ = 4;
        auVar6._0_8_ = 0x400000004;
        auVar6._12_4_ = 4;
        auVar34 = NEON_bsl(auVar34,auVar6,auVar35,1);
        iVar11 = iVar11 + auVar33._0_4_;
        iVar26 = iVar26 + auVar33._4_4_;
        iVar27 = iVar27 + auVar33._8_4_;
        iVar28 = iVar28 + auVar33._12_4_;
        iVar29 = iVar29 + auVar34._0_4_;
        iVar30 = iVar30 + auVar34._4_4_;
        iVar31 = iVar31 + auVar34._8_4_;
        iVar32 = iVar32 + auVar34._12_4_;
      } while (uVar12 != 0);
      iVar11 = iVar29 + iVar11 + iVar30 + iVar26 + iVar31 + iVar27 + iVar32 + iVar28;
      if (uVar25 == (uVar25 & 0x7ffffffffffffff8)) goto LAB_007d7038;
    }
    uVar25 = 0x100;
    do {
      puVar21 = puVar20 + 1;
      iVar26 = 8;
      if (0x100 < *puVar20) {
        iVar26 = 0xc;
      }
      iVar27 = 4;
      if (0x10 < (int)*puVar20) {
        iVar27 = iVar26;
      }
      iVar11 = iVar11 + iVar27;
      puVar20 = puVar21;
    } while (puVar21 != puVar19 + uVar17);
  }
LAB_007d7084:
  uVar2 = (uint)uVar13 & 0xfffffffe;
  iVar26 = uVar3 << 3;
  if (uVar14 == 0) {
    uVar2 = 0;
  }
  if ((int)lVar18 == 0) {
    iVar26 = 0;
  }
  auVar38._8_8_ =
       lVar18 << 0x10 | (ulong)(iVar26 + uVar2 + iVar11) << 0x20 | uVar25 | uVar14 | 0xaa000000;
  auVar38._0_8_ = param_2;
  return auVar38;
}


// ===== 007d70f0  FUN_007d70f0 =====

void FUN_007d70f0(undefined1 *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  uVar1 = FUN_007d785c(param_1 + 0x20,(long)**(int **)(param_1 + 0x10),6);
  if ((uVar1 & 1) == 0) {
    *param_1 = 1;
  }
  uVar1 = FUN_007d785c(param_1 + 0x20,(long)(*(int *)(*(long *)(param_1 + 0x10) + 4) + -1),5);
  if ((uVar1 & 1) == 0) {
    *param_1 = 1;
  }
  FUN_007d72c0(param_1);
  lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x68);
  lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x70);
  if (lVar2 != lVar4) {
    do {
      plVar5 = (long *)(lVar2 + 0x10);
      if ((*(ulong *)(lVar2 + 8) & 1) != 0) {
        plVar5 = (long *)*plVar5;
      }
      uVar3 = *(ulong *)(lVar2 + 8) & 0x7ffffffffffffffe;
      uVar1 = uVar3 << 1;
      while (uVar3 != 0) {
        uVar3 = FUN_007d785c(param_1 + 0x20,*(undefined4 *)plVar5,2);
        if ((uVar3 & 1) == 0) {
          *param_1 = 1;
        }
        plVar5 = (long *)((long)plVar5 + 4);
        uVar1 = uVar1 - 4;
        uVar3 = uVar1;
      }
      lVar2 = lVar2 + 0x68;
    } while (lVar2 != lVar4);
    lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x68);
    lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x70);
  }
  for (; lVar2 != lVar4; lVar2 = lVar2 + 0x68) {
    plVar5 = (long *)(lVar2 + 0x40);
    if ((*(ulong *)(lVar2 + 0x38) & 1) != 0) {
      plVar5 = (long *)*plVar5;
    }
    uVar3 = *(ulong *)(lVar2 + 0x38) & 0x7ffffffffffffffe;
    uVar1 = uVar3 << 1;
    while (uVar3 != 0) {
      uVar3 = FUN_007d785c(param_1 + 0x20,*(int *)plVar5 - 1U | 0x10,5);
      if ((uVar3 & 1) == 0) {
        *param_1 = 1;
      }
      plVar5 = (long *)((long)plVar5 + 4);
      uVar1 = uVar1 - 4;
      uVar3 = uVar1;
    }
    uVar1 = FUN_007d785c(param_1 + 0x20,0,1);
    if ((uVar1 & 1) == 0) {
      *param_1 = 1;
    }
  }
  FUN_007d7400(param_1);
  uVar3 = *(ulong *)(*(long *)(param_1 + 0x10) + 0x40);
  uVar1 = FUN_007d785c(param_1 + 0x20,1 < uVar3,1);
  if ((uVar1 & 1) == 0) {
    *param_1 = 1;
  }
  if (1 < uVar3) {
    FUN_007d751c(param_1);
    return;
  }
  return;
}


// ===== 007d72c0  FUN_007d72c0 =====

void FUN_007d72c0(undefined1 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  lVar6 = *(long *)(param_1 + 0x10);
  lVar4 = *(long *)(lVar6 + 0x68);
  uVar5 = (*(long *)(lVar6 + 0x70) - lVar4 >> 3) * 0x4ec4ec4ec4ec4ec5;
  if (1 < uVar5) {
    lVar7 = 0;
    uVar8 = 1;
    do {
      if (uVar5 <= uVar8 - 1) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                  );
      }
      piVar1 = (int *)(lVar4 + lVar7);
      iVar2 = piVar1[0x1b];
      if (piVar1[0x1a] == *piVar1) {
        if (iVar2 == piVar1[1]) {
          uVar3 = 0;
        }
        else {
          if (iVar2 != piVar1[1] + 1) goto LAB_007d738c;
          uVar3 = 1;
        }
      }
      else {
LAB_007d738c:
        uVar3 = 2;
        if (iVar2 != 0 || piVar1[0x1a] != *piVar1 + 1) {
          uVar3 = 4;
        }
      }
      uVar5 = FUN_007d785c(param_1 + 0x20,uVar3,2);
      if ((uVar5 & 1) == 0) {
        *param_1 = 1;
      }
      lVar4 = *(long *)(lVar6 + 0x68);
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0x68;
      uVar5 = (*(long *)(lVar6 + 0x70) - lVar4 >> 3) * 0x4ec4ec4ec4ec4ec5;
    } while (uVar8 < uVar5);
  }
  uVar5 = FUN_007d785c(param_1 + 0x20,3,2);
  if ((uVar5 & 1) == 0) {
    *param_1 = 1;
  }
  return;
}


// ===== 007d7400  FUN_007d7400 =====

void FUN_007d7400(undefined1 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  uVar1 = FUN_007d7a7c(param_1 + 0x20,*(undefined4 *)(*(long *)(param_1 + 0x10) + 8),
                       *(int *)(*(long *)(param_1 + 0x10) + 4) + 1);
  if ((uVar1 & 1) == 0) {
    *param_1 = 1;
  }
  lVar3 = *(long *)(param_1 + 0x10);
  if (*(int *)(lVar3 + 8) != 0) {
    plVar4 = (long *)(lVar3 + 0x18);
    if ((*(ulong *)(lVar3 + 0x10) & 1) != 0) {
      plVar4 = (long *)*plVar4;
    }
    uVar1 = *(ulong *)(lVar3 + 0x10) & 0x7ffffffffffffffe;
    lVar5 = uVar1 << 1;
    if (uVar1 != 0) {
      do {
        uVar1 = FUN_007d7a7c(param_1 + 0x20,*(undefined4 *)plVar4,
                             *(undefined4 *)(*(long *)(param_1 + 0x10) + 8));
        if ((uVar1 & 1) == 0) {
          *param_1 = 1;
        }
        lVar5 = lVar5 + -4;
        plVar4 = (long *)((long)plVar4 + 4);
      } while (lVar5 != 0);
      lVar3 = *(long *)(param_1 + 0x10);
    }
    lVar5 = *(long *)(lVar3 + 0x70);
    for (lVar3 = *(long *)(lVar3 + 0x68); lVar3 != lVar5; lVar3 = lVar3 + 0x68) {
      plVar4 = (long *)(lVar3 + 0x58);
      if ((*(ulong *)(lVar3 + 0x50) & 1) != 0) {
        plVar4 = (long *)*plVar4;
      }
      uVar2 = *(ulong *)(lVar3 + 0x50) & 0x7ffffffffffffffe;
      uVar1 = uVar2 << 1;
      while (uVar2 != 0) {
        uVar2 = FUN_007d785c(param_1 + 0x20,(long)*(int *)plVar4,4);
        if ((uVar2 & 1) == 0) {
          *param_1 = 1;
        }
        plVar4 = (long *)((long)plVar4 + 4);
        uVar1 = uVar1 - 4;
        uVar2 = uVar1;
      }
    }
  }
  return;
}


// ===== 007d751c  FUN_007d751c =====

void FUN_007d751c(undefined1 *param_1)

{
  int *piVar1;
  ulong uVar2;
  long lVar3;
  int *piVar4;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (*(long *)(lVar3 + 0x68) != *(long *)(lVar3 + 0x70)) {
    piVar4 = (int *)(lVar3 + 0x48);
    if ((*(ulong *)(lVar3 + 0x40) & 1) != 0) {
      piVar4 = *(int **)piVar4;
    }
    uVar2 = *(ulong *)(lVar3 + 0x40) & 0x3ffffffffffffffe;
    if (uVar2 != 0) {
      piVar1 = piVar4 + uVar2;
      do {
        uVar2 = FUN_007d785c(param_1 + 0x20,(long)(*piVar4 + -1),0x10);
        if ((uVar2 & 1) == 0) {
          *param_1 = 1;
        }
        uVar2 = FUN_007d785c(param_1 + 0x20,(long)(piVar4[1] + -1),0x10);
        if ((uVar2 & 1) == 0) {
          *param_1 = 1;
        }
        piVar4 = piVar4 + 2;
      } while (piVar4 != piVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:443: libc++ Hardening assertion !empty() failed: back() called on an empty vector\n"
            );
}


// ===== 007d75e4  FUN_007d75e4 =====

void FUN_007d75e4(undefined1 *param_1)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  uint *puVar4;
  
  uVar3 = *(ulong *)(*(long *)(param_1 + 8) + 0x40);
  puVar4 = (uint *)(*(long *)(param_1 + 8) + 0x48);
  if ((uVar3 & 1) != 0) {
    puVar4 = *(uint **)puVar4;
  }
  uVar3 = uVar3 & 0x7ffffffffffffffe;
  uVar1 = uVar3 << 1;
  while (uVar3 != 0) {
    uVar2 = *puVar4;
    if ((int)uVar2 < 0x11) {
      uVar3 = FUN_007d785c(param_1 + 0x20,uVar2 - 1 | 0x10,6);
    }
    else if (uVar2 < 0x101) {
      uVar3 = FUN_007d785c(param_1 + 0x20,uVar2 - 1 | 0x200,10);
    }
    else {
      uVar3 = FUN_007d785c(param_1 + 0x20,uVar2 - 1 | 0x3000,0xe);
    }
    if ((uVar3 & 1) == 0) {
      *param_1 = 1;
    }
    puVar4 = puVar4 + 1;
    uVar1 = uVar1 - 4;
    uVar3 = uVar1;
  }
  uVar3 = FUN_007d785c(param_1 + 0x20,0,2);
  if ((uVar3 & 1) == 0) {
    *param_1 = 1;
  }
  return;
}


// ===== 007d76c8  FUN_007d76c8 =====

void FUN_007d76c8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}


// ===== 007d76d8  FUN_007d76d8 =====

void FUN_007d76d8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}


// ===== 007d76e8  FUN_007d76e8 =====

long FUN_007d76e8(long param_1)

{
  return (*(long *)(param_1 + 8) - *(long *)(param_1 + 0x10)) * 8 - *(long *)(param_1 + 0x18);
}


// ===== 007d7704  FUN_007d7704 =====

void FUN_007d7704(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (param_2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../rtc_base/bit_buffer.cc",0x52,"out_byte_offset != nullptr",&DAT_001f5fa0);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x10);
    *param_3 = *(undefined8 *)(param_1 + 0x18);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../rtc_base/bit_buffer.cc",0x53,"out_bit_offset != nullptr",&DAT_001f5fa0);
}


// ===== 007d7774  FUN_007d7774 =====

undefined4 FUN_007d7774(long param_1,ulong param_2,ulong param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_3 < 8) && (param_2 <= *(ulong *)(param_1 + 8))) {
    if ((param_3 != 0) && (param_2 == *(ulong *)(param_1 + 8))) {
      return 0;
    }
    uVar1 = 1;
    *(ulong *)(param_1 + 0x10) = param_2;
    *(ulong *)(param_1 + 0x18) = param_3;
  }
  return uVar1;
}


// ===== 007d77b4  FUN_007d77b4 =====

bool FUN_007d77b4(long *param_1,uint param_2)

{
  byte *pbVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  lVar6 = param_1[3];
  uVar3 = (param_1[1] - param_1[2]) * 8 - lVar6;
  if (uVar3 < 8) goto LAB_007d7850;
  lVar5 = (ulong)param_2 << 0x38;
  pbVar1 = (byte *)(*param_1 + param_1[2]);
  pbVar4 = pbVar1;
  if (lVar6 == 0) {
LAB_007d7834:
    *pbVar4 = (byte)((ulong)lVar5 >> 0x38);
  }
  else {
    uVar7 = 8 - lVar6;
    uVar2 = uVar7;
    if (7 < uVar7) {
      uVar2 = 8;
    }
    lVar5 = lVar5 << (uVar2 & 0x3f);
    pbVar4 = pbVar1 + 1;
    *pbVar1 = *pbVar1 & ((byte)((0xff << (ulong)(8U - (int)uVar2 & 0x1f) & 0xffU) >>
                               (ulong)((uint)lVar6 & 0x1f)) ^ 0xff) |
              (byte)((param_2 & 0xff) >> (ulong)((uint)lVar6 & 0x1f));
    if ((lVar6 == 8) || (uVar7 < 8)) goto LAB_007d7834;
  }
  param_1[2] = param_1[2] + (param_1[3] + 8U >> 3);
  param_1[3] = param_1[3] & 7;
LAB_007d7850:
  return 7 < uVar3;
}


// ===== 007d785c  FUN_007d785c =====

bool FUN_007d785c(long *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte *pbVar3;
  long lVar4;
  ulong uVar5;
  
  lVar4 = param_1[3];
  uVar2 = (param_1[1] - param_1[2]) * 8 - lVar4;
  if (param_3 <= uVar2) {
    param_2 = param_2 << (-param_3 & 0x3f);
    pbVar3 = (byte *)(*param_1 + param_1[2]);
    if (lVar4 == 0) {
      uVar5 = param_3;
      if (7 < param_3) goto LAB_007d78dc;
    }
    else {
      uVar1 = 8U - lVar4;
      if (param_3 <= 8U - lVar4) {
        uVar1 = param_3;
      }
      *pbVar3 = *pbVar3 & ((byte)((0xff << (ulong)(8U - (int)uVar1 & 0x1f) & 0xffU) >>
                                 (ulong)((uint)lVar4 & 0x1f)) ^ 0xff) |
                (byte)((ulong)param_2 >> 0x38) >> (ulong)((uint)lVar4 & 0x1f);
      param_2 = param_2 << (uVar1 & 0x3f);
      for (uVar5 = param_3 - uVar1; pbVar3 = pbVar3 + 1, 7 < uVar5; uVar5 = uVar5 - 8) {
LAB_007d78dc:
        *pbVar3 = (byte)((ulong)param_2 >> 0x38);
        param_2 = param_2 << 8;
      }
    }
    if (uVar5 != 0) {
      *pbVar3 = (byte)((ulong)param_2 >> 0x38);
    }
    param_1[2] = param_1[2] + (param_1[3] + param_3 >> 3);
    param_1[3] = param_1[3] + param_3 & 7;
  }
  return param_3 <= uVar2;
}


// ===== 007d7930  FUN_007d7930 =====

bool FUN_007d7930(long *param_1,long param_2)

{
  ulong uVar1;
  byte *pbVar2;
  byte *pbVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar6 = param_1[3];
  uVar1 = (param_1[1] - param_1[2]) * 8 - lVar6;
  if (uVar1 < 0x10) goto LAB_007d79f4;
  lVar4 = param_2 << 0x30;
  pbVar3 = (byte *)(*param_1 + param_1[2]);
  if (lVar6 == 0) {
    uVar7 = 0x10;
LAB_007d79bc:
    do {
      uVar7 = uVar7 - 8;
      lVar5 = lVar4 << 8;
      pbVar2 = pbVar3 + 1;
      *pbVar3 = (byte)((ulong)lVar4 >> 0x38);
      pbVar3 = pbVar2;
      lVar4 = lVar5;
    } while (7 < uVar7);
  }
  else {
    uVar8 = 8 - lVar6;
    uVar7 = uVar8;
    if (0xf < uVar8) {
      uVar7 = 0x10;
    }
    lVar5 = lVar4 << (uVar7 & 0x3f);
    pbVar2 = pbVar3 + 1;
    *pbVar3 = *pbVar3 & ((byte)((0xff << (ulong)(8U - (int)uVar7 & 0x1f) & 0xffU) >>
                               (ulong)((uint)lVar6 & 0x1f)) ^ 0xff) |
              (byte)(((uint)((ulong)param_2 >> 8) & 0xff) >> (ulong)((uint)lVar6 & 0x1f));
    uVar7 = 0x10 - uVar7;
    pbVar3 = pbVar2;
    lVar4 = lVar5;
    if (uVar8 < 9) goto LAB_007d79bc;
  }
  if (uVar7 != 0) {
    *pbVar2 = (byte)((ulong)lVar5 >> 0x38);
  }
  param_1[2] = param_1[2] + (param_1[3] + 0x10U >> 3);
  param_1[3] = param_1[3] & 7;
LAB_007d79f4:
  return 0xf < uVar1;
}


// ===== 007d7a00  FUN_007d7a00 =====

bool FUN_007d7a00(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  uVar4 = param_1[2];
  lVar5 = param_1[3];
  uVar6 = (param_1[1] - uVar4) * 8 - lVar5;
  if (param_2 <= uVar6) {
    uVar1 = uVar4 + (lVar5 + param_2 >> 3);
    if (lVar5 != 0) {
      uVar4 = uVar4 + 1;
    }
    uVar2 = lVar5 + param_2 & 7;
    uVar3 = uVar1;
    if (uVar2 != 0) {
      uVar3 = uVar1 + 1;
    }
    param_1[2] = uVar1;
    param_1[3] = uVar2;
    if (uVar4 <= uVar3 && uVar3 - uVar4 != 0) {
      memset((void *)(*param_1 + uVar4),0,uVar3 - uVar4);
    }
  }
  return param_2 <= uVar6;
}


// ===== 007d7a7c  FUN_007d7a7c =====

undefined8 FUN_007d7a7c(long *param_1,uint param_2,int param_3)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if (param_3 != 1) {
    uVar2 = (1 << (ulong)(-(int)LZCOUNT(param_3) & 0x1f)) - param_3;
    uVar4 = (ulong)(0x20 - (int)LZCOUNT(param_3));
    if (param_2 < uVar2) {
      lVar8 = param_1[3];
      uVar5 = uVar4 - 1;
      if ((ulong)((param_1[1] - param_1[2]) * 8 - lVar8) < uVar5) {
        return 0;
      }
      lVar6 = (ulong)param_2 << (0x41 - uVar4 & 0x3f);
      pbVar1 = (byte *)(*param_1 + param_1[2]);
      uVar4 = uVar5;
      if (lVar8 == 0) goto joined_r0x007d7c40;
      uVar4 = 8U - lVar8;
      if (uVar5 <= 8U - lVar8) {
        uVar4 = uVar5;
      }
      lVar7 = lVar6 << (uVar4 & 0x3f);
      *pbVar1 = *pbVar1 & ((byte)((0xff << (ulong)(8U - (int)uVar4 & 0x1f) & 0xffU) >>
                                 (ulong)((uint)lVar8 & 0x1f)) ^ 0xff) |
                (byte)((ulong)lVar6 >> 0x38) >> (ulong)((uint)lVar8 & 0x1f);
      uVar4 = uVar5 - uVar4;
      while( true ) {
        pbVar1 = pbVar1 + 1;
        lVar6 = lVar7;
joined_r0x007d7c40:
        bVar3 = (byte)((ulong)lVar6 >> 0x38);
        if (uVar4 < 8) break;
        uVar4 = uVar4 - 8;
        lVar7 = lVar6 << 8;
        *pbVar1 = bVar3;
      }
      if (uVar4 != 0) {
        *pbVar1 = bVar3;
      }
      lVar8 = param_1[2];
      uVar5 = param_1[3] + uVar5;
    }
    else {
      lVar8 = param_1[3];
      if ((ulong)((param_1[1] - param_1[2]) * 8 - lVar8) < uVar4) {
        return 0;
      }
      lVar6 = (ulong)(uVar2 + param_2) << (-uVar4 & 0x3f);
      pbVar1 = (byte *)(*param_1 + param_1[2]);
      uVar5 = uVar4;
      if (lVar8 == 0) goto joined_r0x007d7c50;
      uVar5 = 8U - lVar8;
      if (uVar4 <= 8U - lVar8) {
        uVar5 = uVar4;
      }
      lVar7 = lVar6 << (uVar5 & 0x3f);
      *pbVar1 = *pbVar1 & ((byte)((0xff << (ulong)(8U - (int)uVar5 & 0x1f) & 0xffU) >>
                                 (ulong)((uint)lVar8 & 0x1f)) ^ 0xff) |
                (byte)((ulong)lVar6 >> 0x38) >> (ulong)((uint)lVar8 & 0x1f);
      uVar5 = uVar4 - uVar5;
      while( true ) {
        pbVar1 = pbVar1 + 1;
        lVar6 = lVar7;
joined_r0x007d7c50:
        bVar3 = (byte)((ulong)lVar6 >> 0x38);
        if (uVar5 < 8) break;
        uVar5 = uVar5 - 8;
        lVar7 = lVar6 << 8;
        *pbVar1 = bVar3;
      }
      if (uVar5 != 0) {
        *pbVar1 = bVar3;
      }
      lVar8 = param_1[2];
      uVar5 = param_1[3] + uVar4;
    }
    param_1[2] = lVar8 + (uVar5 >> 3);
    param_1[3] = uVar5 & 7;
  }
  return 1;
}


// ===== 007d7c58  FUN_007d7c58 =====

long FUN_007d7c58(uint param_1,int param_2)

{
  return (ulong)(0x20 - (int)LZCOUNT(param_2)) -
         (ulong)(param_1 < (uint)((1 << (ulong)(-(int)LZCOUNT(param_2) & 0x1f)) - param_2));
}


// ===== 007d7c84  FUN_007d7c84 =====

undefined8 FUN_007d7c84(long *param_1,uint param_2)

{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  if (param_2 != 0xffffffff) {
    lVar7 = param_1[3];
    uVar5 = LZCOUNT((ulong)param_2 + 1) << 1 ^ 0x7f;
    if (uVar5 <= (ulong)((param_1[1] - param_1[2]) * 8 - lVar7)) {
      lVar6 = (ulong)param_2 + 1 << (-uVar5 & 0x3f);
      pbVar1 = (byte *)(*param_1 + param_1[2]);
      uVar4 = uVar5;
      if (lVar7 != 0) {
        uVar2 = 8U - lVar7;
        if (uVar5 <= 8U - lVar7) {
          uVar2 = uVar5;
        }
        *pbVar1 = *pbVar1 & ((byte)((0xff << (ulong)(8U - (int)uVar2 & 0x1f) & 0xffU) >>
                                   (ulong)((uint)lVar7 & 0x1f)) ^ 0xff) |
                  (byte)((ulong)lVar6 >> 0x38) >> (ulong)((uint)lVar7 & 0x1f);
        uVar4 = uVar5 - uVar2;
        lVar6 = lVar6 << (uVar2 & 0x3f);
        pbVar1 = pbVar1 + 1;
      }
      for (; bVar3 = (byte)((ulong)lVar6 >> 0x38), 7 < uVar4; uVar4 = uVar4 - 8) {
        *pbVar1 = bVar3;
        lVar6 = lVar6 << 8;
        pbVar1 = pbVar1 + 1;
      }
      if (uVar4 != 0) {
        *pbVar1 = bVar3;
      }
      param_1[2] = param_1[2] + (param_1[3] + uVar5 >> 3);
      param_1[3] = param_1[3] + uVar5 & 7;
      return 1;
    }
  }
  return 0;
}


// ===== 007d7d78  FUN_007d7d78 =====

byte FUN_007d7d78(long *param_1,ulong param_2)

{
  byte *pbVar1;
  uint uVar2;
  ulong uVar3;
  byte bVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  byte *pbVar11;
  long lVar12;
  
  bVar4 = 1;
  lVar10 = param_1[2];
  uVar8 = param_1[3];
  do {
    uVar7 = param_2 >> 7;
    uVar9 = (param_1[1] - lVar10) * 8 - uVar8;
    uVar6 = 0;
    if (uVar7 != 0) {
      uVar6 = 0xffffff80;
    }
    if (7 < uVar9) {
      uVar2 = (uint)param_2 & 0x7f;
      lVar12 = (ulong)(uVar6 | uVar2) << 0x38;
      pbVar1 = (byte *)(*param_1 + lVar10);
      pbVar11 = pbVar1;
      if (uVar8 == 0) {
LAB_007d7d98:
        *pbVar11 = (byte)((ulong)lVar12 >> 0x38);
      }
      else {
        uVar5 = 8 - uVar8;
        uVar3 = uVar5;
        if (7 < uVar5) {
          uVar3 = 8;
        }
        lVar12 = lVar12 << (uVar3 & 0x3f);
        pbVar11 = pbVar1 + 1;
        *pbVar1 = *pbVar1 & ((byte)((0xff << (ulong)(8U - (int)uVar3 & 0x1f) & 0xffU) >>
                                   (ulong)((uint)uVar8 & 0x1f)) ^ 0xff) |
                  (byte)((uVar6 & 0xff | uVar2) >> (ulong)((uint)uVar8 & 0x1f));
        if ((uVar8 == 8) || (uVar5 < 8)) goto LAB_007d7d98;
      }
      uVar8 = param_1[3] & 7;
      lVar10 = param_1[2] + (param_1[3] + 8U >> 3);
      param_1[2] = lVar10;
      param_1[3] = uVar8;
    }
    bVar4 = bVar4 & 7 < uVar9;
    param_2 = uVar7;
    if (uVar7 == 0) {
      return bVar4;
    }
  } while( true );
}


// ===== 007d7e50  FUN_007d7e50 =====

byte FUN_007d7e50(long *param_1,byte *param_2,long param_3)

{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  byte *pbVar7;
  long lVar8;
  ulong uVar9;
  
  if (param_3 == 0) {
    bVar3 = 1;
  }
  else {
    lVar6 = param_1[2];
    uVar4 = param_1[3];
    bVar3 = 1;
    do {
      uVar5 = (param_1[1] - lVar6) * 8 - uVar4;
      if (7 < uVar5) {
        lVar8 = (ulong)*param_2 << 0x38;
        pbVar1 = (byte *)(*param_1 + lVar6);
        pbVar7 = pbVar1;
        if (uVar4 == 0) {
LAB_007d7e6c:
          *pbVar7 = (byte)((ulong)lVar8 >> 0x38);
        }
        else {
          uVar9 = 8 - uVar4;
          uVar2 = uVar9;
          if (7 < uVar9) {
            uVar2 = 8;
          }
          lVar8 = lVar8 << (uVar2 & 0x3f);
          pbVar7 = pbVar1 + 1;
          *pbVar1 = *pbVar1 & ((byte)((0xff << (ulong)(8U - (int)uVar2 & 0x1f) & 0xffU) >>
                                     (ulong)((uint)uVar4 & 0x1f)) ^ 0xff) |
                    *param_2 >> (ulong)((uint)uVar4 & 0x1f);
          if ((uVar4 == 8) || (uVar9 < 8)) goto LAB_007d7e6c;
        }
        uVar4 = param_1[3] & 7;
        lVar6 = param_1[2] + (param_1[3] + 8U >> 3);
        param_1[2] = lVar6;
        param_1[3] = uVar4;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
      bVar3 = bVar3 & 7 < uVar5;
    } while (param_3 != 0);
  }
  return bVar3;
}


// ===== 007d7f20  FUN_007d7f20 =====

void FUN_007d7f20(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 1;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}


// ===== 007d7f3c  FUN_007d7f3c =====

void FUN_007d7f3c(void)

{
  return;
}


// ===== 007d7f44  FUN_007d7f44 =====

undefined1 FUN_007d7f44(long param_1)

{
  return *(undefined1 *)(param_1 + 5);
}


// ===== 007d7f50  FUN_007d7f50 =====

void FUN_007d7f50(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 5) = param_2;
  return;
}


// ===== 007d7f5c  FUN_007d7f5c =====

int FUN_007d7f5c(long param_1)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  
  bVar1 = *(byte *)(param_1 + 4);
  iVar2 = 0;
  if ((bVar1 != 0) && ((bVar1 & 1) == 0)) {
    iVar2 = 0;
    uVar3 = (ulong)bVar1;
    do {
      iVar2 = iVar2 + 1;
      uVar4 = (uint)uVar3;
      uVar3 = uVar3 >> 1;
    } while ((uVar4 >> 1 & 1) == 0);
  }
  return iVar2;
}


// ===== 007d7f88  FUN_007d7f88 =====

undefined1 FUN_007d7f88(long param_1)

{
  return *(undefined1 *)(param_1 + 4);
}


// ===== 007d7f94  FUN_007d7f94 =====

void FUN_007d7f94(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 4) = param_2;
  return;
}


// ===== 007d7fa0  FUN_007d7fa0 =====

void FUN_007d7fa0(long param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = param_3;
  return;
}


// ===== 007d7fac  FUN_007d7fac =====

undefined2 FUN_007d7fac(long param_1)

{
  return *(undefined2 *)(param_1 + 2);
}


// ===== 007d7fb8  FUN_007d7fb8 =====

void FUN_007d7fb8(long param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 2) = param_2;
  return;
}


// ===== 007d7fc4  FUN_007d7fc4 =====

long FUN_007d7fc4(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 8) != 0) {
    lVar1 = param_1 + 0x10;
  }
  return lVar1;
}


// ===== 007d7fdc  FUN_007d7fdc =====

bool FUN_007d7fdc(long param_1,short param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if (param_2 != 0 && uVar2 != 8) {
    if (7 < uVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(0x5512,0x7d801c);
      (*pcVar1)();
    }
    *(short *)(param_1 + uVar2 * 2 + 0x10) = param_2;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
  }
  return param_2 != 0 && uVar2 != 8;
}


// ===== 007d801c  FUN_007d801c =====

bool FUN_007d801c(byte *param_1,ulong param_2,byte *param_3)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  
  if (param_2 != 0) {
    bVar5 = *param_1;
    *param_3 = bVar5 >> 7;
    param_3[1] = *param_1 >> 6 & 1;
    if (-1 < (char)bVar5) {
      return param_2 == 1;
    }
    if (3 < param_2) {
      FUN_007d7f50(param_3,*param_1 & 7);
      FUN_007d7f94(param_3,param_1[1]);
      FUN_007d7fb8(param_3,*(undefined2 *)(param_1 + 2));
      param_3[8] = 0;
      param_3[9] = 0;
      param_3[10] = 0;
      param_3[0xb] = 0;
      param_3[0xc] = 0;
      param_3[0xd] = 0;
      param_3[0xe] = 0;
      param_3[0xf] = 0;
      bVar5 = *param_1 & 8;
      uVar4 = 4;
      if ((7 < param_2) && ((*param_1 & 8) == 0)) {
        FUN_007d7fa0(param_3,(uint)(*(ushort *)(param_1 + 4) >> 8) |
                             (*(ushort *)(param_1 + 4) & 0xff00ff) << 8,
                     (uint)(*(ushort *)(param_1 + 6) >> 8) |
                     (*(ushort *)(param_1 + 6) & 0xff00ff) << 8);
        uVar4 = 8;
      }
      do {
        bVar2 = bVar5 == 0;
        if (bVar5 == 0) {
          return bVar2;
        }
        if (param_2 == uVar4) {
          return bVar2;
        }
        bVar5 = param_1[uVar4];
        uVar3 = uVar4 + 1;
        uVar1 = (uint)(bVar5 >> 2);
        if ((bVar5 >> 1 & 1) != 0) {
          if (param_2 == uVar3) {
            return bVar2;
          }
          uVar1 = uVar1 | (uint)param_1[uVar3] << 6;
          uVar3 = uVar4 + 2;
        }
        uVar4 = uVar3;
        bVar5 = bVar5 & 1;
        uVar3 = FUN_007d7fdc(param_3,uVar1);
      } while ((uVar3 & 1) != 0);
      return bVar2;
    }
  }
  return false;
}


// ===== 007d8148  FUN_007d8148 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_007d8148(byte *param_1)

{
  undefined1 (*pauVar1) [16];
  ulong uVar2;
  ushort *puVar3;
  long extraout_x1;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ushort *puVar8;
  undefined1 (*pauVar9) [16];
  ushort *puVar10;
  long lVar11;
  long lVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  undefined2 uVar16;
  undefined2 uVar17;
  undefined2 uVar18;
  undefined2 uVar19;
  undefined2 uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  byte bVar25;
  byte bVar28;
  long lVar26;
  undefined8 uVar27;
  byte bVar29;
  byte bVar31;
  long lVar30;
  byte bVar33;
  long lVar32;
  byte bVar34;
  byte bVar36;
  long lVar35;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  byte bVar47;
  byte bVar48;
  byte bVar49;
  undefined1 auVar50 [16];
  byte bVar43;
  byte bVar44;
  
  if (*param_1 != 1) {
    return 1;
  }
  auVar50 = FUN_007d7fc4();
  puVar3 = auVar50._0_8_;
  lVar4 = auVar50._8_8_ * 2;
  if (lVar4 == 0) {
    lVar4 = 4;
    goto LAB_007d838c;
  }
  uVar5 = lVar4 - 2;
  if (uVar5 < 6) {
    lVar4 = 4;
    puVar8 = puVar3;
  }
  else {
    uVar2 = (uVar5 >> 1) + 1;
    if (uVar5 < 0x1e) {
      uVar6 = 0;
      lVar4 = 4;
    }
    else {
      lVar12 = 0;
      lVar11 = 0;
      lVar21 = 0;
      lVar22 = 0;
      lVar23 = 0;
      lVar24 = 0;
      lVar26 = 0;
      lVar30 = 0;
      lVar37 = 0;
      lVar38 = 0;
      lVar32 = 0;
      lVar35 = 0;
      lVar39 = 0;
      lVar40 = 0;
      uVar6 = uVar2 & 0xfffffffffffffff0;
      pauVar9 = (undefined1 (*) [16])(puVar3 + 8);
      uVar5 = uVar2 & 0xfffffffffffffff0;
      lVar4 = _DAT_001f25c0;
      lVar7 = _UNK_001f25c8;
      do {
        pauVar1 = pauVar9 + -1;
        auVar42 = *pauVar9;
        uVar5 = uVar5 - 0x10;
        pauVar9 = pauVar9 + 2;
        auVar41._8_2_ = 0x3f;
        auVar41._0_8_ = 0x3f003f003f003f;
        auVar41._10_2_ = 0x3f;
        auVar41._12_2_ = 0x3f;
        auVar41._14_2_ = 0x3f;
        auVar41 = NEON_cmhi(*pauVar1,auVar41,2);
        auVar45._8_2_ = 0x3f;
        auVar45._0_8_ = 0x3f003f003f003f;
        auVar45._10_2_ = 0x3f;
        auVar45._12_2_ = 0x3f;
        auVar45._14_2_ = 0x3f;
        auVar45 = NEON_cmhi(auVar42,auVar45,2);
        bVar25 = (char)auVar41[1] >> 7;
        bVar28 = (char)auVar41[3] >> 7;
        bVar47 = (char)auVar41[5] >> 7;
        bVar48 = (char)auVar41[7] >> 7;
        bVar43 = (byte)(auVar41._8_2_ >> 0xf);
        bVar44 = (byte)((int)auVar41._8_2_ >> 0x1f);
        auVar42._0_8_ =
             CONCAT17(~bVar44,CONCAT16(~bVar44,CONCAT15(~bVar44,CONCAT14(~bVar44,CONCAT13(~bVar43,
                                                  CONCAT12(~bVar43,CONCAT11(~auVar41[9],~auVar41[8])
                                                          ))))));
        auVar42[8] = ~auVar41[10];
        auVar42[9] = ~auVar41[0xb];
        bVar43 = (char)auVar41[0xb] >> 7;
        auVar42[10] = ~bVar43;
        auVar42[0xb] = ~bVar43;
        auVar42[0xc] = ~bVar43;
        auVar42[0xd] = ~bVar43;
        auVar42[0xe] = ~bVar43;
        auVar42[0xf] = ~bVar43;
        bVar29 = (char)auVar41[0xd] >> 7;
        bVar31 = (char)auVar41[0xf] >> 7;
        bVar43 = (byte)(auVar45._0_2_ >> 0xf);
        bVar44 = (byte)((int)auVar45._0_2_ >> 0x1f);
        auVar46._0_8_ =
             CONCAT17(~bVar44,CONCAT16(~bVar44,CONCAT15(~bVar44,CONCAT14(~bVar44,CONCAT13(~bVar43,
                                                  CONCAT12(~bVar43,CONCAT11(~auVar45[1],~auVar45[0])
                                                          ))))));
        auVar46[8] = ~auVar45[2];
        auVar46[9] = ~auVar45[3];
        bVar43 = (char)auVar45[3] >> 7;
        auVar46[10] = ~bVar43;
        auVar46[0xb] = ~bVar43;
        auVar46[0xc] = ~bVar43;
        auVar46[0xd] = ~bVar43;
        auVar46[0xe] = ~bVar43;
        auVar46[0xf] = ~bVar43;
        bVar33 = (char)auVar45[0xd] >> 7;
        bVar34 = (char)auVar45[0xf] >> 7;
        bVar36 = (char)auVar45[5] >> 7;
        bVar49 = (char)auVar45[7] >> 7;
        bVar43 = (char)auVar45[9] >> 7;
        bVar44 = (char)auVar45[0xb] >> 7;
        lVar23 = ((ulong)(auVar41[0xc] & 2) -
                 CONCAT17(~bVar29,CONCAT16(~bVar29,CONCAT15(~bVar29,CONCAT14(~bVar29,CONCAT13(~
                                                  bVar29,CONCAT12(~(byte)(auVar41._12_2_ >> 0xf),
                                                                  CONCAT11(~auVar41[0xd],
                                                                           ~auVar41[0xc])))))))) +
                 lVar23;
        lVar24 = ((ulong)(auVar41[0xe] & 2) -
                 CONCAT17(~bVar31,CONCAT16(~bVar31,CONCAT15(~bVar31,CONCAT14(~bVar31,CONCAT13(~
                                                  bVar31,CONCAT12(~(byte)(auVar41._14_2_ >> 0xf),
                                                                  CONCAT11(~auVar41[0xf],
                                                                           ~auVar41[0xe])))))))) +
                 lVar24;
        lVar12 = ((ulong)(auVar41[8] & 2) - auVar42._0_8_) + lVar12;
        lVar11 = ((ulong)(auVar41[10] & 2) - auVar42._8_8_) + lVar11;
        lVar21 = ((ulong)(auVar41[4] & 2) -
                 CONCAT17(~bVar47,CONCAT16(~bVar47,CONCAT15(~bVar47,CONCAT14(~bVar47,CONCAT13(~
                                                  bVar47,CONCAT12(~bVar47,CONCAT11(~auVar41[5],
                                                                                   ~auVar41[4]))))))
                         )) + lVar21;
        lVar22 = ((ulong)(auVar41[6] & 2) -
                 CONCAT17(~bVar48,CONCAT16(~bVar48,CONCAT15(~bVar48,CONCAT14(~bVar48,CONCAT13(~
                                                  bVar48,CONCAT12(~bVar48,CONCAT11(~auVar41[7],
                                                                                   ~auVar41[6]))))))
                         )) + lVar22;
        lVar4 = ((ulong)(auVar41[0] & 2) -
                CONCAT17(~bVar25,CONCAT16(~bVar25,CONCAT15(~bVar25,CONCAT14(~bVar25,CONCAT13(~bVar25
                                                  ,CONCAT12(~bVar25,CONCAT11(~auVar41[1],~auVar41[0]
                                                                            )))))))) + lVar4;
        lVar7 = ((ulong)(auVar41[2] & 2) -
                CONCAT17(~bVar28,CONCAT16(~bVar28,CONCAT15(~bVar28,CONCAT14(~bVar28,CONCAT13(~bVar28
                                                  ,CONCAT12(~bVar28,CONCAT11(~auVar41[3],~auVar41[2]
                                                                            )))))))) + lVar7;
        lVar26 = ((ulong)(auVar45[0] & 2) - auVar46._0_8_) + lVar26;
        lVar30 = ((ulong)(auVar45[2] & 2) - auVar46._8_8_) + lVar30;
        lVar39 = ((ulong)(auVar45[0xc] & 2) -
                 CONCAT17(~bVar33,CONCAT16(~bVar33,CONCAT15(~bVar33,CONCAT14(~bVar33,CONCAT13(~
                                                  bVar33,CONCAT12(~bVar33,CONCAT11(~auVar45[0xd],
                                                                                   ~auVar45[0xc]))))
                                                  )))) + lVar39;
        lVar40 = ((ulong)(auVar45[0xe] & 2) -
                 CONCAT17(~bVar34,CONCAT16(~bVar34,CONCAT15(~bVar34,CONCAT14(~bVar34,CONCAT13(~
                                                  bVar34,CONCAT12(~bVar34,CONCAT11(~auVar45[0xf],
                                                                                   ~auVar45[0xe]))))
                                                  )))) + lVar40;
        lVar37 = ((ulong)(auVar45[4] & 2) -
                 CONCAT17(~bVar36,CONCAT16(~bVar36,CONCAT15(~bVar36,CONCAT14(~bVar36,CONCAT13(~
                                                  bVar36,CONCAT12(~(byte)(auVar45._4_2_ >> 0xf),
                                                                  CONCAT11(~auVar45[5],~auVar45[4]))
                                                  )))))) + lVar37;
        lVar38 = ((ulong)(auVar45[6] & 2) -
                 CONCAT17(~bVar49,CONCAT16(~bVar49,CONCAT15(~bVar49,CONCAT14(~bVar49,CONCAT13(~
                                                  bVar49,CONCAT12(~(byte)(auVar45._6_2_ >> 0xf),
                                                                  CONCAT11(~auVar45[7],~auVar45[6]))
                                                  )))))) + lVar38;
        lVar32 = ((ulong)(auVar45[8] & 2) -
                 CONCAT17(~bVar43,CONCAT16(~bVar43,CONCAT15(~bVar43,CONCAT14(~bVar43,CONCAT13(~
                                                  bVar43,CONCAT12(~bVar43,CONCAT11(~auVar45[9],
                                                                                   ~auVar45[8]))))))
                         )) + lVar32;
        lVar35 = ((ulong)(auVar45[10] & 2) -
                 CONCAT17(~bVar44,CONCAT16(~bVar44,CONCAT15(~bVar44,CONCAT14(~bVar44,CONCAT13(~
                                                  bVar44,CONCAT12(~bVar44,CONCAT11(~auVar45[0xb],
                                                                                   ~auVar45[10])))))
                                          ))) + lVar35;
      } while (uVar5 != 0);
      lVar4 = lVar26 + lVar4 + lVar32 + lVar12 + lVar37 + lVar21 + lVar39 + lVar23 +
              lVar30 + lVar7 + lVar35 + lVar11 + lVar38 + lVar22 + lVar40 + lVar24;
      if (uVar2 == uVar6) goto LAB_007d838c;
      if ((uVar2 & 0xc) == 0) {
        puVar8 = puVar3 + uVar6;
        goto LAB_007d836c;
      }
    }
    lVar12 = 0;
    uVar13 = 0;
    uVar14 = 0;
    uVar15 = 0;
    uVar16 = 0;
    uVar17 = 0;
    uVar18 = 0;
    uVar19 = 0;
    uVar20 = 0;
    uVar5 = uVar2 & 0xfffffffffffffffc;
    puVar8 = puVar3 + uVar5;
    lVar7 = uVar6 - uVar5;
    puVar10 = puVar3 + uVar6;
    do {
      lVar7 = lVar7 + 4;
      uVar27 = NEON_cmhi(*(undefined8 *)puVar10,0x3f003f003f003f,2);
      bVar34 = (byte)((ulong)uVar27 >> 0x10);
      bVar43 = (byte)((ulong)uVar27 >> 8);
      bVar33 = (char)bVar43 >> 7;
      bVar44 = (byte)((ulong)uVar27 >> 0x18);
      bVar36 = (char)bVar44 >> 7;
      bVar25 = (byte)((ulong)uVar27 >> 0x20);
      bVar29 = (byte)((ulong)uVar27 >> 0x30);
      bVar47 = (byte)((ulong)uVar27 >> 0x28);
      bVar28 = (char)bVar47 >> 7;
      bVar48 = (byte)((ulong)uVar27 >> 0x38);
      bVar31 = (char)bVar48 >> 7;
      lVar4 = ((ulong)((byte)uVar27 & 2) -
              CONCAT17(~bVar33,CONCAT16(~bVar33,CONCAT15(~bVar33,CONCAT14(~bVar33,CONCAT13(~bVar33,
                                                  CONCAT12(~bVar33,CONCAT11(~bVar43,~(byte)uVar27)))
                                                  ))))) + lVar4;
      lVar12 = ((ulong)(bVar34 & 2) -
               CONCAT17(~bVar36,CONCAT16(~bVar36,CONCAT15(~bVar36,CONCAT14(~bVar36,CONCAT13(~bVar36,
                                                  CONCAT12(~bVar36,CONCAT11(~bVar44,~bVar34))))))))
               + lVar12;
      lVar11 = ((ulong)(bVar25 & 2) -
               CONCAT17(~bVar28,CONCAT16(~bVar28,CONCAT15(~bVar28,CONCAT14(~bVar28,CONCAT13(~bVar28,
                                                  CONCAT12(~bVar28,CONCAT11(~bVar47,~bVar25))))))))
               + CONCAT26(uVar16,CONCAT24(uVar15,CONCAT22(uVar14,uVar13)));
      uVar13 = (undefined2)lVar11;
      uVar14 = (undefined2)((ulong)lVar11 >> 0x10);
      uVar15 = (undefined2)((ulong)lVar11 >> 0x20);
      uVar16 = (undefined2)((ulong)lVar11 >> 0x30);
      lVar21 = ((ulong)(bVar29 & 2) -
               CONCAT17(~bVar31,CONCAT16(~bVar31,CONCAT15(~bVar31,CONCAT14(~bVar31,CONCAT13(~bVar31,
                                                  CONCAT12(~bVar31,CONCAT11(~bVar48,~bVar29))))))))
               + CONCAT26(uVar20,CONCAT24(uVar19,CONCAT22(uVar18,uVar17)));
      uVar17 = (undefined2)lVar21;
      uVar18 = (undefined2)((ulong)lVar21 >> 0x10);
      uVar19 = (undefined2)((ulong)lVar21 >> 0x20);
      uVar20 = (undefined2)((ulong)lVar21 >> 0x30);
      puVar10 = puVar10 + 4;
    } while (lVar7 != 0);
    lVar4 = lVar4 + lVar11 + lVar12 + lVar21;
    if (uVar2 == uVar5) goto LAB_007d838c;
  }
LAB_007d836c:
  do {
    puVar10 = puVar8 + 1;
    lVar7 = 1;
    if (0x3f < *puVar8) {
      lVar7 = 2;
    }
    lVar4 = lVar7 + lVar4;
    puVar8 = puVar10;
  } while (puVar10 != puVar3 + auVar50._8_8_);
LAB_007d838c:
  lVar7 = lVar4;
  if (((((*param_1 & 1) != 0) && (FUN_007d7fc4(param_1), extraout_x1 == 0)) &&
      (0 < *(int *)(param_1 + 0x20))) && (lVar7 = lVar4 + 4, *(int *)(param_1 + 0x24) < 1)) {
    lVar7 = lVar4;
  }
  return lVar7;
}


// ===== 007d83dc  FUN_007d83dc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_007d83dc(byte *param_1,long param_2,byte *param_3)

{
  undefined1 (*pauVar1) [16];
  ushort uVar2;
  byte bVar3;
  byte bVar4;
  undefined2 uVar5;
  ushort *puVar6;
  undefined8 uVar7;
  long extraout_x1;
  long extraout_x1_00;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ushort *puVar12;
  undefined1 (*pauVar13) [16];
  ushort *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined2 uVar18;
  undefined2 uVar19;
  undefined2 uVar20;
  undefined2 uVar21;
  undefined2 uVar22;
  undefined2 uVar23;
  undefined2 uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  byte bVar29;
  byte bVar31;
  long lVar30;
  byte bVar32;
  byte bVar34;
  long lVar33;
  byte bVar36;
  long lVar35;
  byte bVar37;
  byte bVar39;
  long lVar38;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  byte bVar49;
  byte bVar50;
  undefined1 auVar51 [16];
  byte bVar46;
  
  if (*param_3 != 1) {
    lVar8 = 1;
    goto LAB_007d8660;
  }
  auVar51 = FUN_007d7fc4(param_3);
  puVar6 = auVar51._0_8_;
  lVar8 = auVar51._8_8_ * 2;
  if (lVar8 == 0) {
    lVar15 = 4;
  }
  else {
    uVar10 = lVar8 - 2;
    if (uVar10 < 6) {
      lVar15 = 4;
      puVar12 = puVar6;
    }
    else {
      uVar9 = (uVar10 >> 1) + 1;
      if (uVar10 < 0x1e) {
        uVar11 = 0;
        lVar15 = 4;
      }
      else {
        lVar17 = 0;
        lVar16 = 0;
        lVar25 = 0;
        lVar26 = 0;
        lVar27 = 0;
        lVar28 = 0;
        lVar30 = 0;
        lVar33 = 0;
        lVar40 = 0;
        lVar41 = 0;
        lVar35 = 0;
        lVar38 = 0;
        lVar42 = 0;
        lVar43 = 0;
        uVar11 = uVar9 & 0xfffffffffffffff0;
        pauVar13 = (undefined1 (*) [16])(puVar6 + 8);
        uVar10 = uVar9 & 0xfffffffffffffff0;
        lVar8 = _DAT_001f25c0;
        lVar15 = _UNK_001f25c8;
        do {
          pauVar1 = pauVar13 + -1;
          auVar45 = *pauVar13;
          uVar10 = uVar10 - 0x10;
          pauVar13 = pauVar13 + 2;
          auVar44._8_2_ = 0x3f;
          auVar44._0_8_ = 0x3f003f003f003f;
          auVar44._10_2_ = 0x3f;
          auVar44._12_2_ = 0x3f;
          auVar44._14_2_ = 0x3f;
          auVar44 = NEON_cmhi(*pauVar1,auVar44,2);
          auVar47._8_2_ = 0x3f;
          auVar47._0_8_ = 0x3f003f003f003f;
          auVar47._10_2_ = 0x3f;
          auVar47._12_2_ = 0x3f;
          auVar47._14_2_ = 0x3f;
          auVar47 = NEON_cmhi(auVar45,auVar47,2);
          bVar29 = (char)auVar44[1] >> 7;
          bVar31 = (char)auVar44[3] >> 7;
          bVar3 = (char)auVar44[5] >> 7;
          bVar49 = (char)auVar44[7] >> 7;
          bVar4 = (byte)(auVar44._8_2_ >> 0xf);
          bVar46 = (byte)((int)auVar44._8_2_ >> 0x1f);
          auVar45._0_8_ =
               CONCAT17(~bVar46,CONCAT16(~bVar46,CONCAT15(~bVar46,CONCAT14(~bVar46,CONCAT13(~bVar4,
                                                  CONCAT12(~bVar4,CONCAT11(~auVar44[9],~auVar44[8]))
                                                  )))));
          auVar45[8] = ~auVar44[10];
          auVar45[9] = ~auVar44[0xb];
          bVar4 = (char)auVar44[0xb] >> 7;
          auVar45[10] = ~bVar4;
          auVar45[0xb] = ~bVar4;
          auVar45[0xc] = ~bVar4;
          auVar45[0xd] = ~bVar4;
          auVar45[0xe] = ~bVar4;
          auVar45[0xf] = ~bVar4;
          bVar32 = (char)auVar44[0xd] >> 7;
          bVar34 = (char)auVar44[0xf] >> 7;
          bVar4 = (byte)(auVar47._0_2_ >> 0xf);
          bVar46 = (byte)((int)auVar47._0_2_ >> 0x1f);
          auVar48._0_8_ =
               CONCAT17(~bVar46,CONCAT16(~bVar46,CONCAT15(~bVar46,CONCAT14(~bVar46,CONCAT13(~bVar4,
                                                  CONCAT12(~bVar4,CONCAT11(~auVar47[1],~auVar47[0]))
                                                  )))));
          auVar48[8] = ~auVar47[2];
          auVar48[9] = ~auVar47[3];
          bVar4 = (char)auVar47[3] >> 7;
          auVar48[10] = ~bVar4;
          auVar48[0xb] = ~bVar4;
          auVar48[0xc] = ~bVar4;
          auVar48[0xd] = ~bVar4;
          auVar48[0xe] = ~bVar4;
          auVar48[0xf] = ~bVar4;
          bVar36 = (char)auVar47[0xd] >> 7;
          bVar37 = (char)auVar47[0xf] >> 7;
          bVar39 = (char)auVar47[5] >> 7;
          bVar50 = (char)auVar47[7] >> 7;
          bVar4 = (char)auVar47[9] >> 7;
          bVar46 = (char)auVar47[0xb] >> 7;
          lVar27 = ((ulong)(auVar44[0xc] & 2) -
                   CONCAT17(~bVar32,CONCAT16(~bVar32,CONCAT15(~bVar32,CONCAT14(~bVar32,CONCAT13(~
                                                  bVar32,CONCAT12(~(byte)(auVar44._12_2_ >> 0xf),
                                                                  CONCAT11(~auVar44[0xd],
                                                                           ~auVar44[0xc])))))))) +
                   lVar27;
          lVar28 = ((ulong)(auVar44[0xe] & 2) -
                   CONCAT17(~bVar34,CONCAT16(~bVar34,CONCAT15(~bVar34,CONCAT14(~bVar34,CONCAT13(~
                                                  bVar34,CONCAT12(~(byte)(auVar44._14_2_ >> 0xf),
                                                                  CONCAT11(~auVar44[0xf],
                                                                           ~auVar44[0xe])))))))) +
                   lVar28;
          lVar17 = ((ulong)(auVar44[8] & 2) - auVar45._0_8_) + lVar17;
          lVar16 = ((ulong)(auVar44[10] & 2) - auVar45._8_8_) + lVar16;
          lVar25 = ((ulong)(auVar44[4] & 2) -
                   CONCAT17(~bVar3,CONCAT16(~bVar3,CONCAT15(~bVar3,CONCAT14(~bVar3,CONCAT13(~bVar3,
                                                  CONCAT12(~bVar3,CONCAT11(~auVar44[5],~auVar44[4]))
                                                  )))))) + lVar25;
          lVar26 = ((ulong)(auVar44[6] & 2) -
                   CONCAT17(~bVar49,CONCAT16(~bVar49,CONCAT15(~bVar49,CONCAT14(~bVar49,CONCAT13(~
                                                  bVar49,CONCAT12(~bVar49,CONCAT11(~auVar44[7],
                                                                                   ~auVar44[6]))))))
                           )) + lVar26;
          lVar8 = ((ulong)(auVar44[0] & 2) -
                  CONCAT17(~bVar29,CONCAT16(~bVar29,CONCAT15(~bVar29,CONCAT14(~bVar29,CONCAT13(~
                                                  bVar29,CONCAT12(~bVar29,CONCAT11(~auVar44[1],
                                                                                   ~auVar44[0]))))))
                          )) + lVar8;
          lVar15 = ((ulong)(auVar44[2] & 2) -
                   CONCAT17(~bVar31,CONCAT16(~bVar31,CONCAT15(~bVar31,CONCAT14(~bVar31,CONCAT13(~
                                                  bVar31,CONCAT12(~bVar31,CONCAT11(~auVar44[3],
                                                                                   ~auVar44[2]))))))
                           )) + lVar15;
          lVar30 = ((ulong)(auVar47[0] & 2) - auVar48._0_8_) + lVar30;
          lVar33 = ((ulong)(auVar47[2] & 2) - auVar48._8_8_) + lVar33;
          lVar42 = ((ulong)(auVar47[0xc] & 2) -
                   CONCAT17(~bVar36,CONCAT16(~bVar36,CONCAT15(~bVar36,CONCAT14(~bVar36,CONCAT13(~
                                                  bVar36,CONCAT12(~bVar36,CONCAT11(~auVar47[0xd],
                                                                                   ~auVar47[0xc]))))
                                                  )))) + lVar42;
          lVar43 = ((ulong)(auVar47[0xe] & 2) -
                   CONCAT17(~bVar37,CONCAT16(~bVar37,CONCAT15(~bVar37,CONCAT14(~bVar37,CONCAT13(~
                                                  bVar37,CONCAT12(~bVar37,CONCAT11(~auVar47[0xf],
                                                                                   ~auVar47[0xe]))))
                                                  )))) + lVar43;
          lVar40 = ((ulong)(auVar47[4] & 2) -
                   CONCAT17(~bVar39,CONCAT16(~bVar39,CONCAT15(~bVar39,CONCAT14(~bVar39,CONCAT13(~
                                                  bVar39,CONCAT12(~(byte)(auVar47._4_2_ >> 0xf),
                                                                  CONCAT11(~auVar47[5],~auVar47[4]))
                                                  )))))) + lVar40;
          lVar41 = ((ulong)(auVar47[6] & 2) -
                   CONCAT17(~bVar50,CONCAT16(~bVar50,CONCAT15(~bVar50,CONCAT14(~bVar50,CONCAT13(~
                                                  bVar50,CONCAT12(~(byte)(auVar47._6_2_ >> 0xf),
                                                                  CONCAT11(~auVar47[7],~auVar47[6]))
                                                  )))))) + lVar41;
          lVar35 = ((ulong)(auVar47[8] & 2) -
                   CONCAT17(~bVar4,CONCAT16(~bVar4,CONCAT15(~bVar4,CONCAT14(~bVar4,CONCAT13(~bVar4,
                                                  CONCAT12(~bVar4,CONCAT11(~auVar47[9],~auVar47[8]))
                                                  )))))) + lVar35;
          lVar38 = ((ulong)(auVar47[10] & 2) -
                   CONCAT17(~bVar46,CONCAT16(~bVar46,CONCAT15(~bVar46,CONCAT14(~bVar46,CONCAT13(~
                                                  bVar46,CONCAT12(~bVar46,CONCAT11(~auVar47[0xb],
                                                                                   ~auVar47[10])))))
                                            ))) + lVar38;
        } while (uVar10 != 0);
        lVar15 = lVar30 + lVar8 + lVar35 + lVar17 + lVar40 + lVar25 + lVar42 + lVar27 +
                 lVar33 + lVar15 + lVar38 + lVar16 + lVar41 + lVar26 + lVar43 + lVar28;
        if (uVar9 == uVar11) goto LAB_007d8630;
        if ((uVar9 & 0xc) == 0) {
          puVar12 = puVar6 + uVar11;
          goto LAB_007d8610;
        }
      }
      lVar17 = 0;
      uVar5 = 0;
      uVar18 = 0;
      uVar19 = 0;
      uVar20 = 0;
      uVar21 = 0;
      uVar22 = 0;
      uVar23 = 0;
      uVar24 = 0;
      uVar10 = uVar9 & 0xfffffffffffffffc;
      puVar12 = puVar6 + uVar10;
      lVar8 = uVar11 - uVar10;
      puVar14 = puVar6 + uVar11;
      do {
        lVar8 = lVar8 + 4;
        uVar7 = NEON_cmhi(*(undefined8 *)puVar14,0x3f003f003f003f,2);
        bVar37 = (byte)((ulong)uVar7 >> 0x10);
        bVar4 = (byte)((ulong)uVar7 >> 8);
        bVar36 = (char)bVar4 >> 7;
        bVar46 = (byte)((ulong)uVar7 >> 0x18);
        bVar39 = (char)bVar46 >> 7;
        bVar29 = (byte)((ulong)uVar7 >> 0x20);
        bVar32 = (byte)((ulong)uVar7 >> 0x30);
        bVar3 = (byte)((ulong)uVar7 >> 0x28);
        bVar31 = (char)bVar3 >> 7;
        bVar49 = (byte)((ulong)uVar7 >> 0x38);
        bVar34 = (char)bVar49 >> 7;
        lVar15 = ((ulong)((byte)uVar7 & 2) -
                 CONCAT17(~bVar36,CONCAT16(~bVar36,CONCAT15(~bVar36,CONCAT14(~bVar36,CONCAT13(~
                                                  bVar36,CONCAT12(~bVar36,CONCAT11(~bVar4,~(byte)
                                                  uVar7)))))))) + lVar15;
        lVar17 = ((ulong)(bVar37 & 2) -
                 CONCAT17(~bVar39,CONCAT16(~bVar39,CONCAT15(~bVar39,CONCAT14(~bVar39,CONCAT13(~
                                                  bVar39,CONCAT12(~bVar39,CONCAT11(~bVar46,~bVar37))
                                                  )))))) + lVar17;
        lVar16 = ((ulong)(bVar29 & 2) -
                 CONCAT17(~bVar31,CONCAT16(~bVar31,CONCAT15(~bVar31,CONCAT14(~bVar31,CONCAT13(~
                                                  bVar31,CONCAT12(~bVar31,CONCAT11(~bVar3,~bVar29)))
                                                  ))))) +
                 CONCAT26(uVar20,CONCAT24(uVar19,CONCAT22(uVar18,uVar5)));
        uVar5 = (undefined2)lVar16;
        uVar18 = (undefined2)((ulong)lVar16 >> 0x10);
        uVar19 = (undefined2)((ulong)lVar16 >> 0x20);
        uVar20 = (undefined2)((ulong)lVar16 >> 0x30);
        lVar25 = ((ulong)(bVar32 & 2) -
                 CONCAT17(~bVar34,CONCAT16(~bVar34,CONCAT15(~bVar34,CONCAT14(~bVar34,CONCAT13(~
                                                  bVar34,CONCAT12(~bVar34,CONCAT11(~bVar49,~bVar32))
                                                  )))))) +
                 CONCAT26(uVar24,CONCAT24(uVar23,CONCAT22(uVar22,uVar21)));
        uVar21 = (undefined2)lVar25;
        uVar22 = (undefined2)((ulong)lVar25 >> 0x10);
        uVar23 = (undefined2)((ulong)lVar25 >> 0x20);
        uVar24 = (undefined2)((ulong)lVar25 >> 0x30);
        puVar14 = puVar14 + 4;
      } while (lVar8 != 0);
      lVar15 = lVar15 + lVar16 + lVar17 + lVar25;
      if (uVar9 == uVar10) goto LAB_007d8630;
    }
LAB_007d8610:
    do {
      puVar14 = puVar12 + 1;
      lVar8 = 1;
      if (0x3f < *puVar12) {
        lVar8 = 2;
      }
      lVar15 = lVar8 + lVar15;
      puVar12 = puVar14;
    } while (puVar14 != puVar6 + auVar51._8_8_);
  }
LAB_007d8630:
  lVar8 = lVar15;
  if (((((*param_3 & 1) != 0) && (FUN_007d7fc4(param_3), extraout_x1 == 0)) &&
      (0 < *(int *)(param_3 + 0x20))) && (lVar8 = lVar15 + 4, *(int *)(param_3 + 0x24) < 1)) {
    lVar8 = lVar15;
  }
LAB_007d8660:
  if (param_2 != lVar8) {
    uVar7 = FUN_007d8148(param_3);
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/rtp_rtcp/source/rtp_generic_frame_descriptor_extension.cc",0x88,
                 "data.size() == ValueSize(descriptor)",&DAT_001fb920,param_2,uVar7);
  }
  bVar4 = param_3[1] << 6 | *param_3 << 7 | 0x30;
  if ((*param_3 & 1) == 0) {
    *param_1 = bVar4;
  }
  else {
    FUN_007d7fc4(param_3);
    bVar46 = 0;
    if (extraout_x1_00 != 0) {
      bVar46 = 8;
    }
    bVar3 = FUN_007d7f44(param_3);
    *param_1 = bVar3 | bVar4 | bVar46;
    bVar4 = FUN_007d7f88(param_3);
    param_1[1] = bVar4;
    uVar5 = FUN_007d7fac(param_3);
    *(undefined2 *)(param_1 + 2) = uVar5;
    auVar51 = FUN_007d7fc4(param_3);
    uVar10 = auVar51._8_8_;
    if ((*param_3 == 1) && (uVar10 == 0)) {
      if ((0 < *(int *)(param_3 + 0x20)) && (0 < *(int *)(param_3 + 0x24))) {
        param_1[4] = (byte)((uint)*(int *)(param_3 + 0x20) >> 8);
        param_1[5] = (byte)*(undefined4 *)(param_3 + 0x20);
        param_1[6] = (byte)((uint)*(undefined4 *)(param_3 + 0x24) >> 8);
        param_1[7] = (byte)*(undefined4 *)(param_3 + 0x24);
      }
    }
    else if (uVar10 != 0) {
      uVar9 = 0;
      lVar8 = 4;
      do {
        uVar2 = *(ushort *)(auVar51._0_8_ + uVar9 * 2);
        bVar4 = 2;
        if (uVar2 < 0x40) {
          bVar4 = 0;
        }
        bVar4 = bVar4 | (char)uVar2 << 2;
        if (uVar9 < uVar10 - 1) {
          bVar4 = bVar4 + 1;
        }
        param_1[lVar8] = bVar4;
        lVar15 = lVar8 + 1;
        if (0x3f < uVar2) {
          param_1[lVar8 + 1] = (byte)(*(ushort *)(auVar51._0_8_ + uVar9 * 2) >> 6);
          lVar15 = lVar8 + 2;
        }
        lVar8 = lVar15;
        uVar9 = uVar9 + 1;
      } while (uVar10 != uVar9);
    }
  }
  return 1;
}


// ===== 007d87d8  FUN_007d87d8 =====

void FUN_007d87d8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((long)param_1 + 0xf) = 0;
  return;
}


// ===== 007d87e8  FUN_007d87e8 =====

void FUN_007d87e8(undefined8 *param_1,undefined1 param_2)

{
  *(undefined1 *)((long)param_1 + 0x16) = param_2;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((long)param_1 + 0xe) = 0;
  return;
}


// ===== 007d87fc  FUN_007d87fc =====

void FUN_007d87fc(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((long)param_1 + 0xf) = 0;
  for (param_3 = param_3 << 5; param_3 != 0; param_3 = param_3 + -0x20) {
    lVar2 = (long)*(char *)((long)param_2 + 0x17);
    puVar1 = param_2;
    if (lVar2 < 0) {
      lVar2 = param_2[1];
      puVar1 = (undefined8 *)*param_2;
    }
    FUN_007d886c(param_1,*(undefined4 *)(param_2 + 3),puVar1,lVar2);
    param_2 = param_2 + 4;
  }
  return;
}


// ===== 007d886c  FUN_007d886c =====

undefined8 FUN_007d886c(undefined8 param_1,undefined4 param_2,void *param_3,size_t param_4)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  void *__s2;
  size_t *psVar4;
  long lVar5;
  void *local_60;
  size_t sStack_58;
  
  psVar4 = &DAT_00d37d68;
  lVar5 = 0x1f8;
  local_60 = param_3;
  sStack_58 = param_4;
  do {
    if (param_4 == *psVar4) {
      __s2 = (void *)psVar4[-1];
      iVar1 = memcmp(param_3,__s2,param_4);
      if (iVar1 == 0) {
        uVar2 = FUN_007d8978(param_1,param_2,(int)psVar4[-2],__s2,param_4);
        return uVar2;
      }
    }
    lVar5 = lVar5 + -0x18;
    psVar4 = psVar4 + 3;
  } while (lVar5 != 0);
  uVar3 = FUN_004022fc();
  if ((uVar3 & 1) == 0) {
    FUN_00623bb0(&DAT_00214ea3,"../../modules/rtp_rtcp/source/rtp_header_extension_map.cc",0x352,
                 "Unknown extension uri:\'",&local_60,"\', id: ",param_2,&DAT_001ea377);
  }
  return 0;
}


// ===== 007d8978  FUN_007d8978 =====

undefined8
FUN_007d8978(long param_1,uint param_2,uint param_3,undefined8 param_4,undefined8 param_5)

{
  uint uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = param_4;
  uStack_38 = param_5;
  if (param_2 - 0x100 < 0xffffff01) {
    uVar2 = FUN_004022fc();
    if ((uVar2 & 1) != 0) {
      return 0;
    }
    puVar3 = &DAT_00214ea3;
    pcVar5 = "Failed to register extension uri:\'";
    pcVar6 = "\' with invalid id:";
    pcVar7 = ".";
    uVar4 = 0x45a;
  }
  else {
    uVar1 = FUN_007d8b14(param_1,param_2);
    if (uVar1 == param_3) {
      uVar2 = FUN_0044075c();
      if ((uVar2 & 1) == 0) {
        FUN_00623bb0(&DAT_00214eaa,"../../modules/rtp_rtcp/source/rtp_header_extension_map.cc",0x490
                     ,"Reregistering extension uri:\'",&local_40,"\', id:",param_2);
      }
      return 1;
    }
    if (uVar1 == 0) {
      if (0x15 < param_3) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/array:282: libc++ Hardening assertion __n < _Size failed: out-of-bounds access in std::array<T, N>\n"
                  );
      }
      if (*(char *)(param_1 + (ulong)param_3) == '\0') {
        *(char *)(param_1 + (ulong)param_3) = (char)param_2;
        return 1;
      }
      uVar2 = FUN_004022fc();
      if ((uVar2 & 1) != 0) {
        return 0;
      }
      param_2 = (uint)*(byte *)(param_1 + (ulong)param_3);
      puVar3 = &DAT_00214eb0;
      pcVar5 = "Illegal reregistration for uri: ";
      pcVar6 = " is previously registered with id ";
      pcVar7 = " and cannot be reregistered with id ";
      uVar4 = 0x502;
    }
    else {
      uVar2 = FUN_004022fc();
      if ((uVar2 & 1) != 0) {
        return 0;
      }
      puVar3 = &DAT_00214eb0;
      pcVar5 = "Failed to register extension uri:\'";
      pcVar6 = "\', id:";
      pcVar7 = ". Id already in use by extension type ";
      uVar4 = 0x4ca;
    }
  }
  FUN_00623bb0(puVar3,"../../modules/rtp_rtcp/source/rtp_header_extension_map.cc",uVar4,pcVar5,
               &local_40,pcVar6,param_2,pcVar7);
  return 0;
}


// ===== 007d8b14  FUN_007d8b14 =====

undefined4 FUN_007d8b14(long param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_2 == *(byte *)(param_1 + 1)) {
    return 1;
  }
  if (param_2 == *(byte *)(param_1 + 2)) {
    return 2;
  }
  if (param_2 == *(byte *)(param_1 + 3)) {
    return 3;
  }
  if (param_2 == *(byte *)(param_1 + 4)) {
    return 4;
  }
  if (param_2 == *(byte *)(param_1 + 5)) {
    return 5;
  }
  if (param_2 == *(byte *)(param_1 + 6)) {
    return 6;
  }
  if (param_2 == *(byte *)(param_1 + 7)) {
    return 7;
  }
  if (param_2 == *(byte *)(param_1 + 8)) {
    return 8;
  }
  if (param_2 == *(byte *)(param_1 + 9)) {
    return 9;
  }
  if (param_2 == *(byte *)(param_1 + 10)) {
    return 10;
  }
  if (param_2 == *(byte *)(param_1 + 0xb)) {
    return 0xb;
  }
  if (param_2 == *(byte *)(param_1 + 0xc)) {
    return 0xc;
  }
  if (param_2 == *(byte *)(param_1 + 0xd)) {
    return 0xd;
  }
  if (param_2 == *(byte *)(param_1 + 0xe)) {
    return 0xe;
  }
  if (param_2 == *(byte *)(param_1 + 0xf)) {
    return 0xf;
  }
  if (param_2 == *(byte *)(param_1 + 0x10)) {
    return 0x10;
  }
  if (param_2 == *(byte *)(param_1 + 0x11)) {
    return 0x11;
  }
  if (param_2 == *(byte *)(param_1 + 0x12)) {
    return 0x12;
  }
  if (param_2 == *(byte *)(param_1 + 0x13)) {
    return 0x13;
  }
  if (param_2 == *(byte *)(param_1 + 0x14)) {
    return 0x14;
  }
  uVar1 = 0x15;
  if (param_2 != *(byte *)(param_1 + 0x15)) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 007d8cbc  FUN_007d8cbc =====

void FUN_007d8cbc(long param_1,void *param_2,size_t param_3)

{
  int iVar1;
  size_t *psVar2;
  long lVar3;
  
  psVar2 = &DAT_00d37d68;
  lVar3 = 0x1f8;
  while ((*psVar2 != param_3 || (iVar1 = memcmp((void *)psVar2[-1],param_2,param_3), iVar1 != 0))) {
    lVar3 = lVar3 + -0x18;
    psVar2 = psVar2 + 3;
    if (lVar3 == 0) {
      return;
    }
  }
  if ((uint)psVar2[-2] < 0x16) {
    *(undefined1 *)(param_1 + (ulong)(uint)psVar2[-2]) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/array:277: libc++ Hardening assertion __n < _Size failed: out-of-bounds access in std::array<T, N>\n"
            );
}


// ===== 007d8d58  FUN_007d8d58 =====

bool FUN_007d8d58(byte *param_1,long param_2,uint *param_3)

{
  if (param_2 == 3) {
    *param_3 = (uint)*param_1 << 0x10 | (uint)param_1[1] << 8 | (uint)param_1[2];
  }
  return param_2 == 3;
}


// ===== 007d8d8c  FUN_007d8d8c =====

undefined8 FUN_007d8d8c(undefined1 *param_1,undefined8 param_2,undefined4 param_3)

{
  param_1[2] = (char)param_3;
  *param_1 = (char)((uint)param_3 >> 0x10);
  param_1[1] = (char)((uint)param_3 >> 8);
  return 1;
}


// ===== 007d8db0  FUN_007d8db0 =====

undefined4 FUN_007d8db0(ulong *param_1,long param_2,ulong *param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  
  if ((param_2 == 0x10) || (param_2 == 8)) {
    uVar2 = (*param_1 & 0xff00ff00ff00ff00) >> 8 | (*param_1 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    *param_3 = uVar2 >> 0x20 | uVar2 << 0x20;
    uVar1 = 1;
    if (param_2 != 8) {
      uVar2 = param_1[1];
      *(undefined1 *)(param_3 + 2) = 1;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      param_3[1] = uVar2 >> 0x20 | uVar2 << 0x20;
      return 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 007d8e00  FUN_007d8e00 =====

undefined8 FUN_007d8e00(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x10;
  if (*(char *)(param_1 + 0x10) == '\0') {
    uVar1 = 8;
  }
  return uVar1;
}


// ===== 007d8e1c  FUN_007d8e1c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_007d8e1c(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  auVar1 = _DAT_001f47c0;
  auVar3 = _DAT_001f3400;
  auVar4 = _DAT_001f2dd0;
  auVar2 = _DAT_001f2dc0;
  auVar5._8_8_ = *param_3;
  auVar5._0_8_ = *param_3;
  auVar6 = NEON_ushl(auVar5,_DAT_001f47c0,8);
  auVar7 = NEON_ushl(auVar5,_DAT_001f2dc0,8);
  auVar8 = NEON_ushl(auVar5,_DAT_001f3400,8);
  auVar5 = NEON_ushl(auVar5,_DAT_001f2dd0,8);
  *param_1 = CONCAT17(auVar8[8],
                      CONCAT16(auVar8[0],
                               CONCAT15(auVar5[8],
                                        CONCAT14(auVar5[0],
                                                 CONCAT13(auVar6[8],
                                                          CONCAT12(auVar6[0],
                                                                   CONCAT11(auVar7[8],auVar7[0])))))
                              ));
  if (param_2 != 8) {
    if ((*(byte *)(param_3 + 2) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005dc08c();
    }
    auVar6._0_8_ = param_3[1];
    auVar6._8_8_ = auVar6._0_8_;
    auVar1 = NEON_ushl(auVar6,auVar1,8);
    auVar2 = NEON_ushl(auVar6,auVar2,8);
    auVar3 = NEON_ushl(auVar6,auVar3,8);
    auVar4 = NEON_ushl(auVar6,auVar4,8);
    param_1[1] = CONCAT17(auVar3[8],
                          CONCAT16(auVar3[0],
                                   CONCAT15(auVar4[8],
                                            CONCAT14(auVar4[0],
                                                     CONCAT13(auVar1[8],
                                                              CONCAT12(auVar1[0],
                                                                       CONCAT11(auVar2[8],auVar2[0])
                                                                      ))))));
  }
  return 1;
}


// ===== 007d8ec0  FUN_007d8ec0 =====

bool FUN_007d8ec0(byte *param_1,long param_2,undefined8 *param_3)

{
  undefined8 local_28;
  
  if (param_2 == 1) {
    FUN_00659684(&local_28,*param_1 >> 7,*param_1 & 0x7f);
    *param_3 = local_28;
  }
  return param_2 == 1;
}


// ===== 007d8f1c  FUN_007d8f1c =====

undefined8 FUN_007d8f1c(byte *param_1,undefined8 param_2,char *param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_3 + 4);
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/rtp_rtcp/source/rtp_header_extensions.cc",0xb3,
                 "extension.level() >= 0",&DAT_001fbedc,uVar1,0);
  }
  if (uVar1 < 0x80) {
    *param_1 = (byte)uVar1 | *param_3 << 7;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../modules/rtp_rtcp/source/rtp_header_extensions.cc",0xb4,
               "extension.level() <= 0x7f",&DAT_001fbedc,uVar1,0x7f);
}


// ===== 007d8fa0  FUN_007d8fa0 =====

bool FUN_007d8fa0(byte *param_1,long param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == 3) {
    uVar2 = (uint)param_1[2] | (uint)*param_1 << 0x10 | (uint)param_1[1] << 8;
    uVar1 = uVar2 | 0xff000000;
    if ((*param_1 & 0x80) == 0) {
      uVar1 = uVar2;
    }
    *param_3 = uVar1;
  }
  return param_2 == 3;
}


// ===== 007d8fdc  FUN_007d8fdc =====

undefined8 FUN_007d8fdc(undefined1 *param_1,undefined8 param_2,undefined4 param_3)

{
  param_1[2] = (char)param_3;
  *param_1 = (char)((uint)param_3 >> 0x10);
  param_1[1] = (char)((uint)param_3 >> 8);
  return 1;
}


// ===== 007d9000  FUN_007d9000 =====

bool FUN_007d9000(ushort *param_1,long param_2,ushort *param_3)

{
  if (param_2 == 2) {
    *param_3 = *param_1 >> 8 | (ushort)((*param_1 & 0xff00ff) << 8);
  }
  return param_2 == 2;
}


// ===== 007d9028  FUN_007d9028 =====

undefined8 FUN_007d9028(ushort *param_1,undefined8 param_2,uint param_3)

{
  *param_1 = (ushort)(param_3 >> 8) & 0xff | (ushort)((param_3 & 0xff00ff) << 8);
  return 1;
}


// ===== 007d9044  FUN_007d9044 =====

undefined8 FUN_007d9044(ushort *param_1,long param_2,ushort *param_3,ulong *param_4)

{
  uint uVar1;
  ushort uVar2;
  
  if ((param_2 != 4) && (param_2 != 2)) {
    return 0;
  }
  *param_3 = *param_1 >> 8 | (ushort)((*param_1 & 0xff00ff) << 8);
  if ((char)param_4[1] == '\x01') {
    *(undefined1 *)(param_4 + 1) = 0;
  }
  if (param_2 == 4) {
    uVar2 = param_1[1];
    uVar1 = (uint)*(byte *)((long)param_1 + 3) | ((byte)uVar2 & 0x7f) << 8;
    if (uVar1 != 0) {
      if (param_4 != (ulong *)0x0) {
        *(undefined1 *)(param_4 + 1) = 1;
        *param_4 = (ulong)(byte)((byte)uVar2 >> 7) | (ulong)uVar1 << 0x20;
        return 1;
      }
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
  }
  return 1;
}


// ===== 007d90e0  FUN_007d90e0 =====

bool FUN_007d90e0(byte *param_1,long param_2,int *param_3)

{
  if (param_2 == 1) {
    *param_3 = (*param_1 & 3) * 0x5a;
  }
  return param_2 == 1;
}


// ===== 007d910c  FUN_007d910c =====

undefined8 FUN_007d910c(undefined1 *param_1,undefined8 param_2,int param_3)

{
  undefined1 uVar1;
  
  if (param_3 == 0x5a) {
    uVar1 = 1;
  }
  else if (param_3 == 0x10e) {
    uVar1 = 3;
  }
  else if (param_3 == 0xb4) {
    uVar1 = 2;
  }
  else {
    uVar1 = 0;
  }
  *param_1 = uVar1;
  return 1;
}


// ===== 007d9154  FUN_007d9154 =====

undefined8 FUN_007d9154(byte *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (param_2 == 3) {
    uVar1 = FUN_0065a478(param_3,(((uint)*param_1 << 0x10 | (uint)param_1[1] << 8) >> 0xc) * 10000,
                         ((uint)param_1[2] | (param_1[1] & 0xf) << 8) * 10000);
    return uVar1;
  }
  return 0;
}


// ===== 007d919c  FUN_007d919c =====

undefined8 FUN_007d919c(undefined1 *param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  
  uVar1 = SUB168(SEXT816(*param_3) * SEXT816(0x346dc5d63886594b),8);
  uVar1 = param_3[1] / 10000 | ((uVar1 >> 0xb) - ((long)uVar1 >> 0x3f)) * 0x1000;
  param_1[2] = (char)(param_3[1] / 10000);
  *param_1 = (char)(uVar1 >> 0x10);
  param_1[1] = (char)(uVar1 >> 8);
  return 1;
}


// ===== 007d91f0  FUN_007d91f0 =====

bool FUN_007d91f0(byte *param_1,long param_2,byte *param_3)

{
  bool bVar1;
  ulong uVar2;
  
  if (param_2 != 1) {
    return false;
  }
  uVar2 = FUN_00659d50(*param_1);
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    *param_3 = *param_1 & 1;
  }
  return bVar1;
}


// ===== 007d9250  FUN_007d9250 =====

undefined8 FUN_007d9250(undefined1 *param_1,undefined8 param_2,undefined1 param_3)

{
  *param_1 = param_3;
  return 1;
}


// ===== 007d9264  FUN_007d9264 =====

undefined4 FUN_007d9264(undefined1 *param_1,long param_2,ushort *param_3)

{
  undefined1 uVar1;
  long lVar2;
  
  if (param_2 == 0xc) {
    uVar1 = 0;
    lVar2 = -1;
  }
  else {
    if (param_2 != 0xd) {
      return 0;
    }
    uVar1 = *param_1;
    lVar2 = 0;
  }
  *(undefined1 *)(param_3 + 6) = uVar1;
  *param_3 = *(ushort *)(param_1 + lVar2 + 1) >> 8 |
             (ushort)((*(ushort *)(param_1 + lVar2 + 1) & 0xff00ff) << 8);
  param_3[1] = *(ushort *)(param_1 + lVar2 + 3) >> 8 |
               (ushort)((*(ushort *)(param_1 + lVar2 + 3) & 0xff00ff) << 8);
  param_3[2] = *(ushort *)(param_1 + lVar2 + 5) >> 8 |
               (ushort)((*(ushort *)(param_1 + lVar2 + 5) & 0xff00ff) << 8);
  param_3[3] = *(ushort *)(param_1 + lVar2 + 7) >> 8 |
               (ushort)((*(ushort *)(param_1 + lVar2 + 7) & 0xff00ff) << 8);
  param_3[4] = *(ushort *)(param_1 + lVar2 + 9) >> 8 |
               (ushort)((*(ushort *)(param_1 + lVar2 + 9) & 0xff00ff) << 8);
  param_3[5] = *(ushort *)(param_1 + lVar2 + 0xb) >> 8 |
               (ushort)((*(ushort *)(param_1 + lVar2 + 0xb) & 0xff00ff) << 8);
  return 1;
}


// ===== 007d9304  FUN_007d9304 =====

undefined8 FUN_007d9304(undefined1 *param_1,undefined8 param_2,ushort *param_3)

{
  *param_1 = (char)param_3[6];
  *(ushort *)(param_1 + 1) = *param_3 >> 8 | (ushort)((*param_3 & 0xff00ff) << 8);
  *(ushort *)(param_1 + 3) = param_3[1] >> 8 | (ushort)((param_3[1] & 0xff00ff) << 8);
  *(ushort *)(param_1 + 5) = param_3[2] >> 8 | (ushort)((param_3[2] & 0xff00ff) << 8);
  *(ushort *)(param_1 + 7) = param_3[3] >> 8 | (ushort)((param_3[3] & 0xff00ff) << 8);
  *(ushort *)(param_1 + 9) = param_3[4] >> 8 | (ushort)((param_3[4] & 0xff00ff) << 8);
  *(ushort *)(param_1 + 0xb) = param_3[5] >> 8 | (ushort)((param_3[5] & 0xff00ff) << 8);
  return 1;
}


// ===== 007d937c  FUN_007d937c =====

undefined8 FUN_007d937c(long param_1,undefined8 param_2,uint param_3,ulong param_4)

{
  *(ushort *)(param_1 + (param_4 & 0xff)) =
       (ushort)(param_3 >> 8) & 0xff | (ushort)((param_3 & 0xff00ff) << 8);
  return 1;
}


// ===== 007d939c  FUN_007d939c =====

undefined8 FUN_007d939c(undefined1 *param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 *puStack_38;
  
  puVar3 = &local_60;
  if ((((param_2 == 0x1c) || (param_2 == 4)) &&
      (uVar2 = FUN_00659bc0(param_3,*param_1), (uVar2 & 1) != 0)) &&
     ((uVar2 = FUN_00659bf4(param_3,param_1[1]), (uVar2 & 1) != 0 &&
      (uVar2 = FUN_00659c28(param_3,param_1[2]), (uVar2 & 1) != 0)))) {
    bVar1 = param_1[3];
    uVar2 = FUN_00659c58(param_3,bVar1 >> 4 & 3);
    if (((uVar2 & 1) != 0) &&
       ((uVar2 = FUN_00659c78(param_3,bVar1 >> 2 & 3), (uVar2 & 1) != 0 &&
        (uVar2 = FUN_00659c98(param_3,bVar1 & 3), (uVar2 & 1) != 0)))) {
      if (param_2 + -4 == 0) {
        puVar3 = (undefined8 *)0x0;
      }
      else {
        uStack_58 = 0xffffffffffffffff;
        local_60 = 0xffffffffffffffff;
        uStack_48 = 0xffffffffffffffff;
        uStack_50 = 0xffffffffffffffff;
        local_40 = 0xffffffffffffffff;
        puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
        FUN_007d99c8(&local_60);
        FUN_007d94ac(param_1 + 4,param_2 + -4,&local_60);
        uVar2 = FUN_007d95c4(&local_60);
        if ((uVar2 & 1) == 0) {
          return 0;
        }
      }
      FUN_00659cb8(param_3,puVar3);
      return 1;
    }
  }
  return 0;
}


// ===== 007d94ac  FUN_007d94ac =====

undefined8 FUN_007d94ac(ushort *param_1,undefined8 param_2,float *param_3)

{
  ushort uVar1;
  
  param_3[8] = (float)((uint)(*param_1 >> 8) | (*param_1 & 0xff00ff) << 8);
  param_3[9] = (float)((uint)(param_1[1] >> 8) | (param_1[1] & 0xff00ff) << 8) / 10000.0;
  uVar1 = param_1[3];
  *param_3 = (float)((uint)(param_1[2] >> 8) | (param_1[2] & 0xff00ff) << 8) / 50000.0;
  param_3[1] = (float)((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8) / 50000.0;
  uVar1 = param_1[5];
  param_3[2] = (float)((uint)(param_1[4] >> 8) | (param_1[4] & 0xff00ff) << 8) / 50000.0;
  param_3[3] = (float)((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8) / 50000.0;
  uVar1 = param_1[7];
  param_3[4] = (float)((uint)(param_1[6] >> 8) | (param_1[6] & 0xff00ff) << 8) / 50000.0;
  param_3[5] = (float)((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8) / 50000.0;
  uVar1 = param_1[9];
  param_3[6] = (float)((uint)(param_1[8] >> 8) | (param_1[8] & 0xff00ff) << 8) / 50000.0;
  param_3[7] = (float)((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8) / 50000.0;
  param_3[10] = (float)((uint)(param_1[10] >> 8) | (param_1[10] & 0xff00ff) << 8);
  param_3[0xb] = (float)((uint)(param_1[0xb] >> 8) | (param_1[0xb] & 0xff00ff) << 8);
  return 0x18;
}


// ===== 007d95c4  FUN_007d95c4 =====

bool FUN_007d95c4(float *param_1)

{
  bool bVar1;
  float fVar2;
  
  if (((uint)param_1[10] < 0x4e21) && ((uint)param_1[0xb] < 0x4e21)) {
    fVar2 = param_1[8];
    bVar1 = false;
    if ((fVar2 < 0.0 == NAN(fVar2)) && (fVar2 <= 20000.0)) {
      fVar2 = param_1[9];
      bVar1 = false;
      if ((fVar2 < 0.0 == NAN(fVar2)) && (fVar2 <= 5.0)) {
        fVar2 = *param_1;
        bVar1 = false;
        if ((fVar2 < 0.0 == NAN(fVar2)) && (fVar2 <= 1.0)) {
          fVar2 = param_1[1];
          bVar1 = false;
          if ((fVar2 < 0.0 == NAN(fVar2)) && (fVar2 <= 1.0)) {
            fVar2 = param_1[2];
            bVar1 = false;
            if ((fVar2 < 0.0 == NAN(fVar2)) && (fVar2 <= 1.0)) {
              fVar2 = param_1[3];
              bVar1 = false;
              if ((fVar2 < 0.0 == NAN(fVar2)) && (fVar2 <= 1.0)) {
                fVar2 = param_1[4];
                bVar1 = false;
                if ((fVar2 < 0.0 == NAN(fVar2)) && (fVar2 <= 1.0)) {
                  fVar2 = param_1[5];
                  bVar1 = false;
                  if ((fVar2 < 0.0 == NAN(fVar2)) && (fVar2 <= 1.0)) {
                    fVar2 = param_1[6];
                    bVar1 = false;
                    if ((fVar2 < 0.0 == NAN(fVar2)) && (fVar2 <= 1.0)) {
                      fVar2 = param_1[7];
                      if (fVar2 < 0.0 != NAN(fVar2)) {
                        return false;
                      }
                      bVar1 = fVar2 <= 1.0;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    return bVar1;
  }
  return false;
}


// ===== 007d96f4  FUN_007d96f4 =====

undefined8 FUN_007d96f4(undefined1 *param_1,ulong param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined1 uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  
  uVar3 = FUN_00659b60(param_3);
  *param_1 = uVar3;
  uVar3 = FUN_00659b6c(param_3);
  param_1[1] = uVar3;
  uVar3 = FUN_00659b78(param_3);
  param_1[2] = uVar3;
  iVar5 = FUN_00659b84(param_3);
  iVar6 = FUN_00659b90(param_3);
  bVar4 = FUN_00659b9c(param_3);
  param_1[3] = (byte)(iVar6 << 2) | (byte)(iVar5 << 4) | bVar4;
  lVar7 = FUN_00659ba8(param_3);
  if (lVar7 != 0) {
    if (param_2 < 4) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x7d97c4);
      (*pcVar2)();
    }
    puVar1 = (undefined1 *)0x0;
    if (param_2 - 4 != 0) {
      puVar1 = param_1 + 4;
    }
    uVar8 = FUN_00659ba8(param_3);
    FUN_007d97c4(puVar1,param_2 - 4,uVar8);
  }
  return 1;
}


// ===== 007d97c4  FUN_007d97c4 =====

undefined8 FUN_007d97c4(ushort *param_1,undefined8 param_2,float *param_3)

{
  *param_1 = (ushort)((uint)(int)param_3[8] >> 8) & 0xff |
             (ushort)(((int)param_3[8] & 0xff00ffU) << 8);
  param_1[1] = (ushort)((uint)(int)(param_3[9] * 10000.0) >> 8) & 0xff |
               (ushort)(((int)(param_3[9] * 10000.0) & 0xff00ffU) << 8);
  param_1[2] = (ushort)((uint)(int)(*param_3 * 50000.0) >> 8) & 0xff |
               (ushort)(((int)(*param_3 * 50000.0) & 0xff00ffU) << 8);
  param_1[3] = (ushort)((uint)(int)(param_3[1] * 50000.0) >> 8) & 0xff |
               (ushort)(((int)(param_3[1] * 50000.0) & 0xff00ffU) << 8);
  param_1[4] = (ushort)((uint)(int)(param_3[2] * 50000.0) >> 8) & 0xff |
               (ushort)(((int)(param_3[2] * 50000.0) & 0xff00ffU) << 8);
  param_1[5] = (ushort)((uint)(int)(param_3[3] * 50000.0) >> 8) & 0xff |
               (ushort)(((int)(param_3[3] * 50000.0) & 0xff00ffU) << 8);
  param_1[6] = (ushort)((uint)(int)(param_3[4] * 50000.0) >> 8) & 0xff |
               (ushort)(((int)(param_3[4] * 50000.0) & 0xff00ffU) << 8);
  param_1[7] = (ushort)((uint)(int)(param_3[5] * 50000.0) >> 8) & 0xff |
               (ushort)(((int)(param_3[5] * 50000.0) & 0xff00ffU) << 8);
  param_1[8] = (ushort)((uint)(int)(param_3[6] * 50000.0) >> 8) & 0xff |
               (ushort)(((int)(param_3[6] * 50000.0) & 0xff00ffU) << 8);
  param_1[9] = (ushort)((uint)(int)(param_3[7] * 50000.0) >> 8) & 0xff |
               (ushort)(((int)(param_3[7] * 50000.0) & 0xff00ffU) << 8);
  param_1[10] = *(ushort *)(param_3 + 10) >> 8 |
                (ushort)((*(ushort *)(param_3 + 10) & 0xff00ff) << 8);
  param_1[0xb] = *(ushort *)(param_3 + 0xb) >> 8 |
                 (ushort)((*(ushort *)(param_3 + 0xb) & 0xff00ff) << 8);
  return 0x18;
}


// ===== 007d98d0  FUN_007d98d0 =====

undefined8 FUN_007d98d0(char *param_1,size_t param_2,undefined8 param_3)

{
  size_t sVar1;
  undefined8 uVar2;
  
  if ((param_2 == 0) || (*param_1 == '\0')) {
    uVar2 = 0;
  }
  else {
    sVar1 = strnlen(param_1,param_2);
    if ((param_1 == (char *)0x0) && (sVar1 != 0)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string:2845: libc++ Hardening assertion __n == 0 || __s != nullptr failed: string::assign received nullptr\n"
                );
    }
    FUN_00547b08(param_3,param_1);
    uVar2 = 1;
  }
  return uVar2;
}


// ===== 007d9944  FUN_007d9944 =====

bool FUN_007d9944(void *param_1,undefined8 param_2,void *param_3,ulong param_4)

{
  if (param_4 < 0x11) {
    memcpy(param_1,param_3,param_4);
  }
  return param_4 < 0x11;
}


// ===== 007d9984  FUN_007d9984 =====

bool FUN_007d9984(ushort *param_1,long param_2,ushort *param_3)

{
  if (param_2 == 2) {
    *param_3 = *param_1 >> 8 | (ushort)((*param_1 & 0xff00ff) << 8);
  }
  return param_2 == 2;
}


// ===== 007d99ac  FUN_007d99ac =====

undefined8 FUN_007d99ac(ushort *param_1,undefined8 param_2,uint param_3)

{
  *param_1 = (ushort)(param_3 >> 8) & 0xff | (ushort)((param_3 & 0xff00ff) << 8);
  return 1;
}


// ===== 007d99c8  FUN_007d99c8 =====

void FUN_007d99c8(undefined8 *param_1)

{
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}


// ===== 007d99dc  FUN_007d99dc =====

void FUN_007d99dc(long param_1)

{
  FUN_007d87d8(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  FUN_007b545c(param_1 + 0x58,0x5dc);
  FUN_007d9ae8(param_1);
  return;
}


// ===== 007d9a24  FUN_007d9a24 =====

void FUN_007d9a24(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 == (undefined8 *)0x0) {
    FUN_007d87d8(param_1 + 0x20);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    *(undefined8 *)(param_1 + 0x2f) = *(undefined8 *)((long)param_2 + 0xf);
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    *(undefined8 *)(param_1 + 0x20) = uVar1;
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  FUN_007b545c(param_1 + 0x58,param_3);
  FUN_007d9ae8(param_1);
  return;
}


// ===== 007d9a88  FUN_007d9a88 =====

void FUN_007d9a88(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 == (undefined8 *)0x0) {
    FUN_007d87d8(param_1 + 0x20);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    *(undefined8 *)(param_1 + 0x2f) = *(undefined8 *)((long)param_2 + 0xf);
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    *(undefined8 *)(param_1 + 0x20) = uVar1;
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  FUN_007b545c(param_1 + 0x58,0x5dc);
  FUN_007d9ae8(param_1);
  return;
}


// ===== 007d9ae8  FUN_007d9ae8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007d9ae8(undefined2 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  
  uVar3 = _UNK_001f4748;
  uVar2 = _DAT_001f4740;
  lVar1 = *(long *)(param_1 + 0x1c);
  lVar6 = *(long *)(param_1 + 0x20);
  *param_1 = 0;
  param_1[2] = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0xc) = uVar3;
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(undefined1 *)(param_1 + 1) = 0;
  uVar8 = (lVar6 - (lVar6 << 0x3e)) - 4U >> 2;
  *(undefined8 *)(param_1 + 0x28) = 0;
  uVar7 = (ulong)((lVar1 - lVar6 << 0x3e) - (lVar1 - lVar6)) >> 2;
  if (uVar8 <= uVar7) {
    uVar7 = uVar8;
  }
  if ((1 < uVar7) && ((((int)lVar1 - (int)lVar6 | -(int)lVar6) & 3U) == 0)) {
    uVar7 = uVar7 & 0x3ffffffffffffffe;
    lVar6 = lVar6 + uVar7 * -4;
    do {
      uVar7 = uVar7 - 2;
    } while (uVar7 != 0);
  }
  do {
    if (lVar6 == lVar1) {
      plVar9 = (long *)(param_1 + 0x2c);
      *(long *)(param_1 + 0x20) = lVar1;
      if (*plVar9 == 0) {
        puVar4 = (undefined8 *)0x0;
      }
      else {
        FUN_007b5788(plVar9,*(long *)(*plVar9 + 8) - *(long *)(param_1 + 0x30));
        puVar4 = (undefined8 *)
                 (*(long *)(*(long *)(param_1 + 0x2c) + 0x10) + *(long *)(param_1 + 0x30));
      }
      *(undefined4 *)(puVar4 + 1) = 0;
      *puVar4 = 0;
      FUN_007b5678(plVar9,0xc);
      puVar5 = (undefined1 *)*plVar9;
      if (puVar5 != (undefined1 *)0x0) {
        FUN_007b5788(plVar9,*(long *)(puVar5 + 8) - *(long *)(param_1 + 0x30));
        puVar5 = (undefined1 *)
                 (*(long *)(*(long *)(param_1 + 0x2c) + 0x10) + *(long *)(param_1 + 0x30));
      }
      *puVar5 = 0x80;
      return;
    }
    lVar6 = lVar6 + -4;
  } while (lVar6 != 0);
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 007d9c20  FUN_007d9c20 =====

void FUN_007d9c20(undefined8 *param_1,undefined8 *param_2)

{
  void *__src;
  ulong __n;
  void *__dest;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  uVar5 = param_2[5];
  uVar4 = param_2[4];
  uVar3 = *(undefined8 *)((long)param_2 + 0x2f);
  uVar7 = param_2[1];
  uVar6 = *param_2;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((long)param_1 + 0x2f) = uVar3;
  param_1[3] = uVar9;
  param_1[2] = uVar8;
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  param_1[1] = uVar7;
  *param_1 = uVar6;
  param_1[7] = 0;
  __src = (void *)param_2[7];
  __n = param_2[8] - (long)__src;
  if (__n != 0) {
    if ((long)__n < 0) {
      auVar10 = FUN_007dbbd0();
      puVar2 = auVar10._8_8_;
      puVar1 = auVar10._0_8_;
      uVar9 = puVar2[3];
      uVar8 = puVar2[2];
      uVar5 = puVar2[5];
      uVar4 = puVar2[4];
      uVar3 = *(undefined8 *)((long)puVar2 + 0x2f);
      uVar7 = puVar2[1];
      uVar6 = *puVar2;
      puVar1[8] = 0;
      puVar1[9] = 0;
      puVar1[7] = 0;
      *(undefined8 *)((long)puVar1 + 0x2f) = uVar3;
      puVar1[3] = uVar9;
      puVar1[2] = uVar8;
      puVar1[5] = uVar5;
      puVar1[4] = uVar4;
      puVar1[1] = uVar7;
      *puVar1 = uVar6;
      puVar1[7] = puVar2[7];
      puVar1[8] = puVar2[8];
      puVar1[9] = puVar2[9];
      puVar2[7] = 0;
      puVar2[8] = 0;
      puVar2[9] = 0;
      puVar1[10] = puVar2[10];
      FUN_007b5434(puVar1 + 0xb,puVar2 + 0xb);
      return;
    }
    __dest = operator_new(__n);
    param_1[7] = __dest;
    param_1[8] = __dest;
    param_1[9] = (long)__dest + __n;
    memcpy(__dest,__src,__n);
    param_1[8] = (long)__dest + __n;
  }
  param_1[10] = param_2[10];
  FUN_007b53e4(param_1 + 0xb,param_2 + 0xb);
  return;
}


// ===== 007d9cc0  FUN_007d9cc0 =====

void FUN_007d9cc0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  uVar3 = param_2[5];
  uVar2 = param_2[4];
  uVar1 = *(undefined8 *)((long)param_2 + 0x2f);
  uVar5 = param_2[1];
  uVar4 = *param_2;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[7] = 0;
  *(undefined8 *)((long)param_1 + 0x2f) = uVar1;
  param_1[3] = uVar7;
  param_1[2] = uVar6;
  param_1[5] = uVar3;
  param_1[4] = uVar2;
  param_1[1] = uVar5;
  *param_1 = uVar4;
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_1[10] = param_2[10];
  FUN_007b5434(param_1 + 0xb,param_2 + 0xb);
  return;
}


// ===== 007d9d1c  FUN_007d9d1c =====

undefined8 * FUN_007d9d1c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar10 = param_2[3];
  uVar9 = param_2[2];
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  uVar8 = param_2[1];
  uVar7 = *param_2;
  *(undefined8 *)((long)param_1 + 0x2f) = *(undefined8 *)((long)param_2 + 0x2f);
  param_1[3] = uVar10;
  param_1[2] = uVar9;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  param_1[1] = uVar8;
  *param_1 = uVar7;
  if (param_1 == param_2) {
    lVar4 = 0x50;
  }
  else {
    FUN_007dbbe8(param_1 + 7,param_2[7],param_2[8],(long)(param_2[8] - param_2[7]) >> 2);
    param_1[10] = param_2[10];
    lVar4 = param_2[0xb];
    if (lVar4 != 0) {
      FUN_00d0f740(1,lVar4 + 0x18);
    }
    pvVar3 = (void *)param_1[0xb];
    if ((pvVar3 != (void *)0x0) &&
       (iVar1 = FUN_00d0f7a0(0xffffffff,(long)pvVar3 + 0x18), iVar1 == 1)) {
      pvVar2 = *(void **)((long)pvVar3 + 0x10);
      *(undefined8 *)((long)pvVar3 + 0x10) = 0;
      if (pvVar2 != (void *)0x0) {
        operator_delete__(pvVar2);
      }
      operator_delete(pvVar3);
    }
    param_1[0xb] = lVar4;
    param_1[0xc] = param_2[0xc];
    lVar4 = 0x68;
  }
  *(undefined8 *)((long)param_1 + lVar4) = *(undefined8 *)((long)param_2 + lVar4);
  return param_1;
}


// ===== 007d9df8  FUN_007d9df8 =====

undefined8 * FUN_007d9df8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar11 = param_2[3];
  uVar10 = param_2[2];
  uVar7 = param_2[5];
  uVar4 = param_2[4];
  uVar9 = param_2[1];
  uVar8 = *param_2;
  *(undefined8 *)((long)param_1 + 0x2f) = *(undefined8 *)((long)param_2 + 0x2f);
  pvVar2 = (void *)param_1[7];
  param_1[3] = uVar11;
  param_1[2] = uVar10;
  param_1[5] = uVar7;
  param_1[4] = uVar4;
  param_1[1] = uVar9;
  *param_1 = uVar8;
  if (pvVar2 != (void *)0x0) {
    pvVar3 = (void *)param_1[8];
    uVar6 = (ulong)((long)pvVar3 + (-4 - ((long)pvVar3 << 0x3e))) >> 2;
    uVar5 = (ulong)(((long)pvVar2 - (long)pvVar3 << 0x3e) - ((long)pvVar2 - (long)pvVar3)) >> 2;
    if (uVar6 <= uVar5) {
      uVar5 = uVar6;
    }
    if ((1 < uVar5) && ((((int)pvVar2 - (int)pvVar3 | -(int)pvVar3) & 3U) == 0)) {
      uVar5 = uVar5 & 0x3ffffffffffffffe;
      pvVar3 = (void *)((long)pvVar3 + uVar5 * -4);
      do {
        uVar5 = uVar5 - 2;
      } while (uVar5 != 0);
    }
    while (pvVar3 != pvVar2) {
      pvVar3 = (void *)((long)pvVar3 + -4);
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    param_1[8] = pvVar2;
    operator_delete(pvVar2);
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_1[10] = param_2[10];
  uVar4 = param_2[0xb];
  param_2[0xb] = 0;
  pvVar2 = (void *)param_1[0xb];
  param_1[0xb] = uVar4;
  if ((pvVar2 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,(long)pvVar2 + 0x18), iVar1 == 1))
  {
    pvVar3 = *(void **)((long)pvVar2 + 0x10);
    *(undefined8 *)((long)pvVar2 + 0x10) = 0;
    if (pvVar3 != (void *)0x0) {
      operator_delete__(pvVar3);
    }
    operator_delete(pvVar2);
  }
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  return param_1;
}


// ===== 007d9f60  FUN_007d9f60 =====

void FUN_007d9f60(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  FUN_007b5554(param_1 + 0x58);
  pvVar1 = *(void **)(param_1 + 0x38);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  pvVar2 = *(void **)(param_1 + 0x40);
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
      *(void **)(param_1 + 0x40) = pvVar1;
      operator_delete(pvVar1);
      return;
    }
    pvVar2 = (void *)((long)pvVar2 + -4);
  } while (pvVar2 != (void *)0x0);
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 007da028  FUN_007da028 =====

void FUN_007da028(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 0x2f) = *(undefined8 *)((long)param_2 + 0xf);
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  return;
}


// ===== 007da040  FUN_007da040 =====

uint FUN_007da040(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  
  uVar1 = FUN_007da0a0();
  if ((uVar1 & 1) == 0) {
    FUN_007d9ae8(param_1);
  }
  else {
    FUN_007da49c(param_1 + 0x58,param_2,param_3);
  }
  return uVar1 & 1;
}


// ===== 007da0a0  FUN_007da0a0 =====

undefined8 FUN_007da0a0(byte *param_1,byte *param_2,ulong param_3)

{
  ushort *puVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  byte *pbVar16;
  uint local_64;
  
  if (param_3 < 0xc) {
    return 0;
  }
  bVar4 = *param_2;
  iVar8 = (int)(char)bVar4;
  if (iVar8 != -0x41 && iVar8 + 0x41 < 0 == SCARRY4(iVar8,0x41)) {
    return 0;
  }
  *param_1 = param_2[1] >> 7;
  param_1[1] = param_2[1] & 0x7f;
  *(ushort *)(param_1 + 4) =
       *(ushort *)(param_2 + 2) >> 8 | (ushort)((*(ushort *)(param_2 + 2) & 0xff00ff) << 8);
  uVar5 = (*(uint *)(param_2 + 4) & 0xff00ff00) >> 8 | (*(uint *)(param_2 + 4) & 0xff00ff) << 8;
  *(uint *)(param_1 + 8) = uVar5 >> 0x10 | uVar5 << 0x10;
  uVar9 = (ulong)((bVar4 & 0xf) << 2);
  uVar6 = uVar9 + 0xc;
  uVar5 = (*(uint *)(param_2 + 8) & 0xff00ff00) >> 8 | (*(uint *)(param_2 + 8) & 0xff00ff) << 8;
  *(uint *)(param_1 + 0xc) = uVar5 >> 0x10 | uVar5 << 0x10;
  if (param_3 < uVar6) {
    return 0;
  }
  lVar12 = *(long *)(param_1 + 0x38);
  lVar11 = *(long *)(param_1 + 0x40);
  *(ulong *)(param_1 + 0x10) = uVar6;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  uVar15 = (lVar11 - (lVar11 << 0x3e)) - 4U >> 2;
  uVar14 = (ulong)((lVar12 - lVar11 << 0x3e) - (lVar12 - lVar11)) >> 2;
  if (uVar15 <= uVar14) {
    uVar14 = uVar15;
  }
  if ((1 < uVar14) && ((((int)lVar12 - (int)lVar11 | -(int)lVar11) & 3U) == 0)) {
    uVar14 = uVar14 & 0x3ffffffffffffffe;
    lVar11 = lVar11 + uVar14 * -4;
    do {
      uVar14 = uVar14 - 2;
    } while (uVar14 != 0);
  }
  while (lVar11 != lVar12) {
    lVar11 = lVar11 + -4;
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
  }
  *(long *)(param_1 + 0x40) = lVar12;
  if ((bVar4 >> 4 & 1) != 0) {
    uVar9 = uVar9 + 0x10;
    if (param_3 < uVar9) {
      return 0;
    }
    puVar1 = (ushort *)(param_2 + uVar6);
    uVar14 = (ulong)(byte)puVar1[1] << 10 | (ulong)*(byte *)((long)puVar1 + 3) << 2;
    uVar6 = uVar14 + uVar9;
    if (param_3 < uVar6) {
      return 0;
    }
    uVar13 = (uint)(*puVar1 >> 8);
    uVar10 = (*puVar1 & 0xff00ff) << 8;
    uVar5 = uVar13 | uVar10;
    if ((uVar5 == 0xbede) || ((uVar13 & 0xfff0 | uVar10) == 0x1000)) {
      uVar15 = 1;
      if (uVar5 != 0xbede) {
        uVar15 = 2;
      }
      if (uVar15 < uVar14) {
        lVar12 = 0;
        uVar7 = uVar15;
        do {
          bVar3 = param_2[lVar12 + uVar9];
          uVar13 = (uint)bVar3;
          if (uVar13 == 0) {
            lVar12 = lVar12 + 1;
          }
          else {
            if (uVar5 == 0xbede) {
              uVar13 = (uint)(bVar3 >> 4);
              if (uVar13 == 0xf) break;
              uVar10 = (bVar3 & 0xf) + 1;
              if ((uVar13 == 0) && ((bVar3 & 0xf) != 0)) break;
            }
            else {
              uVar10 = (uint)(param_2 + lVar12 + uVar9)[1];
            }
            if (uVar14 < uVar7 + uVar10) {
              uVar9 = FUN_004022fc();
              if ((uVar9 & 1) == 0) {
                FUN_00623bb0(&DAT_001f4e98,"../../modules/rtp_rtcp/source/rtp_packet.cc",0x10ca,
                             "Oversized rtp header extension.");
              }
              break;
            }
            pbVar2 = *(byte **)(param_1 + 0x40);
            for (pbVar16 = *(byte **)(param_1 + 0x38); local_64 = uVar13, pbVar16 != pbVar2;
                pbVar16 = pbVar16 + 4) {
              if (uVar13 == *pbVar16) goto LAB_007da3a8;
            }
            if (pbVar2 < *(byte **)(param_1 + 0x48)) {
              if (pbVar2 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                          );
              }
              *pbVar2 = (byte)uVar13;
              pbVar16 = pbVar2 + 4;
              pbVar2[1] = 0;
              pbVar2[2] = 0;
              pbVar2[3] = 0;
            }
            else {
              pbVar16 = (byte *)FUN_007dbf24(param_1 + 0x38,&local_64);
            }
            *(byte **)(param_1 + 0x40) = pbVar16;
            if (*(byte **)(param_1 + 0x38) == pbVar16) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__vector/vector.h:439: libc++ Hardening assertion !empty() failed: back() called on an empty vector\n"
                        );
            }
            pbVar16 = pbVar16 + -4;
LAB_007da3a8:
            if ((pbVar16[1] != 0) && (uVar7 = FUN_0044075c(), (uVar7 & 1) == 0)) {
              FUN_00623bb0(&DAT_001f1906,"../../modules/rtp_rtcp/source/rtp_packet.cc",0x10f8,
                           "Duplicate rtp header extension id ",uVar13,". Overwriting.");
            }
            uVar7 = (uVar15 | uVar9) + *(long *)(param_1 + 0x50);
            if (uVar7 >> 0x10 != 0) break;
            *(short *)(pbVar16 + 2) = (short)uVar7;
            pbVar16[1] = (byte)uVar10;
            lVar12 = uVar15 + uVar10 + *(long *)(param_1 + 0x50);
          }
          uVar7 = lVar12 + uVar15;
          *(long *)(param_1 + 0x50) = lVar12;
        } while (uVar7 < uVar14);
      }
    }
    else {
      uVar9 = FUN_004022fc();
      if ((uVar9 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e94,"../../modules/rtp_rtcp/source/rtp_packet.cc",0xfe2,
                     "Unsupported rtp extension ",uVar5);
      }
    }
    *(ulong *)(param_1 + 0x10) = uVar6;
  }
  if (((bVar4 >> 5 & 1) == 0) || (param_3 <= uVar6)) {
    uVar9 = 0;
    param_1[2] = 0;
  }
  else {
    bVar4 = param_2[param_3 - 1];
    uVar9 = (ulong)bVar4;
    param_1[2] = bVar4;
    if (bVar4 == 0) {
      uVar6 = FUN_004022fc();
      if ((uVar6 & 1) != 0) {
        return 0;
      }
      FUN_00623bb0(&DAT_001f4e98,"../../modules/rtp_rtcp/source/rtp_packet.cc",0x11a2,
                   "Padding was set, but padding size is zero");
      return 0;
    }
  }
  if (param_3 < uVar6 + uVar9) {
    return 0;
  }
  *(ulong *)(param_1 + 0x18) = param_3 - (uVar6 + uVar9);
  return 1;
}


// ===== 007da49c  FUN_007da49c =====

void FUN_007da49c(long *param_1,void *param_2,void *param_3)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  undefined8 *puVar5;
  
  if (*param_1 == 0) {
    if (param_3 == (void *)0x0) {
      *param_1 = 0;
      goto LAB_007da62c;
    }
    puVar5 = (undefined8 *)operator_new(0x20);
    *puVar5 = param_3;
    puVar5[1] = param_3;
    pvVar3 = operator_new__((ulong)param_3);
    puVar5[2] = pvVar3;
    memcpy(pvVar3,param_2,(size_t)param_3);
    *(undefined4 *)(puVar5 + 3) = 0;
    if (puVar5 != (undefined8 *)0x0) {
      FUN_00d0f740(1,puVar5 + 3);
    }
  }
  else {
    if ((int)*(undefined8 *)(*param_1 + 0x18) == 1) {
      puVar5 = (undefined8 *)*param_1;
      *puVar5 = 0;
      if (param_3 != (void *)0x0) {
        pvVar3 = (void *)puVar5[1];
        if (pvVar3 < param_3) {
          pvVar3 = (void *)((long)pvVar3 + ((ulong)pvVar3 >> 1));
          pvVar4 = param_3;
          if (param_3 <= pvVar3) {
            pvVar4 = pvVar3;
          }
          pvVar2 = operator_new__((ulong)pvVar4);
          pvVar3 = (void *)puVar5[2];
          puVar5[2] = pvVar2;
          if (pvVar3 != (void *)0x0) {
            operator_delete__(pvVar3);
            pvVar3 = (void *)*puVar5;
          }
          puVar5[1] = pvVar4;
        }
        else {
          pvVar3 = (void *)0x0;
        }
        memcpy((void *)(puVar5[2] + (long)pvVar3),param_2,(size_t)param_3);
        *puVar5 = param_3;
      }
      goto LAB_007da62c;
    }
    puVar5 = (undefined8 *)operator_new(0x20);
    pvVar3 = param_3;
    if ((*param_1 != 0) &&
       (pvVar4 = (void *)(*(long *)(*param_1 + 8) - param_1[1]), param_3 <= pvVar4)) {
      pvVar3 = pvVar4;
    }
    *puVar5 = param_3;
    puVar5[1] = pvVar3;
    if (pvVar3 != (void *)0x0) {
      pvVar3 = operator_new__((ulong)pvVar3);
    }
    puVar5[2] = pvVar3;
    if (param_3 != (void *)0x0) {
      memcpy(pvVar3,param_2,(size_t)param_3);
    }
    *(undefined4 *)(puVar5 + 3) = 0;
    if (puVar5 != (undefined8 *)0x0) {
      FUN_00d0f740(1,puVar5 + 3);
    }
    pvVar3 = (void *)*param_1;
    if ((pvVar3 != (void *)0x0) &&
       (iVar1 = FUN_00d0f7a0(0xffffffff,(long)pvVar3 + 0x18), iVar1 == 1)) {
      pvVar4 = *(void **)((long)pvVar3 + 0x10);
      *(undefined8 *)((long)pvVar3 + 0x10) = 0;
      if (pvVar4 != (void *)0x0) {
        operator_delete__(pvVar4);
      }
      operator_delete(pvVar3);
    }
  }
  *param_1 = (long)puVar5;
LAB_007da62c:
  param_1[1] = 0;
  param_1[2] = (long)param_3;
  return;
}


// ===== 007da648  FUN_007da648 =====

uint FUN_007da648(long param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  long lVar4;
  void *pvVar5;
  
  if (*param_2 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(*param_2 + 0x10) + param_2[1];
  }
  uVar1 = FUN_007da0a0(param_1,lVar4,param_2[2]);
  if ((uVar1 & 1) == 0) {
    FUN_007d9ae8(param_1);
  }
  else {
    lVar4 = *param_2;
    *param_2 = 0;
    pvVar5 = *(void **)(param_1 + 0x58);
    *(long *)(param_1 + 0x58) = lVar4;
    if ((pvVar5 != (void *)0x0) &&
       (iVar2 = FUN_00d0f7a0(0xffffffff,(long)pvVar5 + 0x18), iVar2 == 1)) {
      pvVar3 = *(void **)((long)pvVar5 + 0x10);
      *(undefined8 *)((long)pvVar5 + 0x10) = 0;
      if (pvVar3 != (void *)0x0) {
        operator_delete__(pvVar3);
      }
      operator_delete(pvVar5);
    }
    *(long *)(param_1 + 0x60) = param_2[1];
    *(long *)(param_1 + 0x68) = param_2[2];
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return uVar1 & 1;
}


// ===== 007da710  FUN_007da710 =====

void FUN_007da710(undefined8 *param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  
  if (*(long *)(param_2 + 0x58) == 0) {
    pbVar4 = (byte *)0x0;
  }
  else {
    pbVar4 = (byte *)(*(long *)(*(long *)(param_2 + 0x58) + 0x10) + *(long *)(param_2 + 0x60));
  }
  bVar2 = *pbVar4;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar5 = (ulong)bVar2 & 0xf;
  if ((int)uVar5 != 0) {
    uVar11 = uVar5 * 4;
    puVar3 = (undefined4 *)operator_new(uVar11);
    *param_1 = puVar3;
    param_1[2] = puVar3 + uVar5;
    uVar6 = uVar11;
    puVar8 = puVar3;
    do {
      if (puVar8 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      uVar6 = uVar6 - 4;
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    } while (uVar6 != 0);
    lVar9 = *(long *)(param_2 + 0x58);
    param_1[1] = puVar3 + uVar5;
    lVar7 = 0;
    do {
      if (lVar9 == 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = *(long *)(lVar9 + 0x10) + *(long *)(param_2 + 0x60);
      }
      if (uVar11 - lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                  );
      }
      uVar1 = *(uint *)(lVar10 + lVar7 + 0xc);
      uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
      *(uint *)((long)puVar3 + lVar7) = uVar1 >> 0x10 | uVar1 << 0x10;
      lVar7 = lVar7 + 4;
    } while (uVar11 - lVar7 != 0);
  }
  return;
}


// ===== 007da814  FUN_007da814 =====

void FUN_007da814(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  uVar7 = *(undefined8 *)(param_2 + 0x28);
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x2f) = *(undefined8 *)(param_2 + 0x2f);
  *(undefined8 *)(param_1 + 0x28) = uVar7;
  *(undefined8 *)(param_1 + 0x20) = uVar6;
  if (param_1 != param_2) {
    FUN_007dbbe8(param_1 + 0x38,*(long *)(param_2 + 0x38),*(long *)(param_2 + 0x40),
                 *(long *)(param_2 + 0x40) - *(long *)(param_2 + 0x38) >> 2);
  }
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007b53e4(&local_50,param_2 + 0x58);
  puVar1 = local_50;
  pvVar5 = *(void **)(param_1 + 0x58);
  local_50 = (undefined1 *)0x0;
  *(undefined1 **)(param_1 + 0x58) = puVar1;
  local_40 = (undefined1 *)uVar6;
  if ((pvVar5 != (void *)0x0) && (iVar3 = FUN_00d0f7a0(0xffffffff,(long)pvVar5 + 0x18), iVar3 == 1))
  {
    pvVar4 = *(void **)((long)pvVar5 + 0x10);
    *(undefined8 *)((long)pvVar5 + 0x10) = 0;
    if (pvVar4 != (void *)0x0) {
      operator_delete__(pvVar4);
    }
    operator_delete(pvVar5);
  }
  puVar2 = local_40;
  puVar1 = puStack_48;
  puStack_48 = (undefined1 *)0x0;
  local_40 = (undefined1 *)0x0;
  *(undefined1 **)(param_1 + 0x68) = puVar2;
  *(undefined1 **)(param_1 + 0x60) = puVar1;
  FUN_007b5554(&local_50);
  *(undefined8 *)(param_1 + 0x18) = 0;
  param_1[2] = 0;
  return;
}


// ===== 007da930  FUN_007da930 =====

void FUN_007da930(byte *param_1,byte param_2)

{
  byte *pbVar1;
  long lVar2;
  byte bVar3;
  
  pbVar1 = param_1 + 0x58;
  lVar2 = *(long *)pbVar1;
  *param_1 = param_2;
  if ((param_2 & 1) == 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
      bVar3 = bRam0000000000000001;
    }
    else {
      bVar3 = *(byte *)(*(long *)(lVar2 + 0x10) + *(long *)(param_1 + 0x60) + 1);
      FUN_007b5788(pbVar1,*(long *)(lVar2 + 8) - *(long *)(param_1 + 0x60));
      lVar2 = *(long *)(*(long *)(param_1 + 0x58) + 0x10) + *(long *)(param_1 + 0x60);
    }
    bVar3 = bVar3 & 0x7f;
  }
  else if (lVar2 == 0) {
    lVar2 = 0;
    bVar3 = bRam0000000000000001 | 0x80;
  }
  else {
    bVar3 = *(byte *)(*(long *)(lVar2 + 0x10) + *(long *)(param_1 + 0x60) + 1);
    FUN_007b5788(pbVar1,*(long *)(lVar2 + 8) - *(long *)(param_1 + 0x60));
    lVar2 = *(long *)(*(long *)(param_1 + 0x58) + 0x10) + *(long *)(param_1 + 0x60);
    bVar3 = bVar3 | 0x80;
  }
  *(byte *)(lVar2 + 1) = bVar3;
  return;
}


// ===== 007da9e4  FUN_007da9e4 =====

void FUN_007da9e4(long param_1,long param_2,undefined1 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x58);
  if (lVar1 != 0) {
    FUN_007b5788((long *)(param_1 + 0x58),*(long *)(lVar1 + 8) - *(long *)(param_1 + 0x60));
    lVar1 = *(long *)(*(long *)(param_1 + 0x58) + 0x10) + *(long *)(param_1 + 0x60);
  }
  *(undefined1 *)(lVar1 + param_2) = param_3;
  return;
}


// ===== 007daa40  FUN_007daa40 =====

void FUN_007daa40(long param_1,byte param_2)

{
  long lVar1;
  byte bVar2;
  
  lVar1 = *(long *)(param_1 + 0x58);
  *(byte *)(param_1 + 1) = param_2;
  if (lVar1 == 0) {
    lVar1 = 0;
    bVar2 = bRam0000000000000001;
  }
  else {
    bVar2 = *(byte *)(*(long *)(lVar1 + 0x10) + *(long *)(param_1 + 0x60) + 1);
    FUN_007b5788((long *)(param_1 + 0x58),*(long *)(lVar1 + 8) - *(long *)(param_1 + 0x60));
    lVar1 = *(long *)(*(long *)(param_1 + 0x58) + 0x10) + *(long *)(param_1 + 0x60);
  }
  *(byte *)(lVar1 + 1) = bVar2 & 0x80 | param_2;
  return;
}


// ===== 007daabc  FUN_007daabc =====

void FUN_007daabc(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x58);
  *(short *)(param_1 + 4) = (short)param_2;
  if (lVar1 != 0) {
    FUN_007b5788((long *)(param_1 + 0x58),*(long *)(lVar1 + 8) - *(long *)(param_1 + 0x60));
    lVar1 = *(long *)(*(long *)(param_1 + 0x58) + 0x10) + *(long *)(param_1 + 0x60);
  }
  *(ushort *)(lVar1 + 2) = (ushort)(param_2 >> 8) & 0xff | (ushort)((param_2 & 0xff00ff) << 8);
  return;
}


// ===== 007dab18  FUN_007dab18 =====

long FUN_007dab18(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x58);
  if (lVar1 != 0) {
    FUN_007b5788((long *)(param_1 + 0x58),*(long *)(lVar1 + 8) - *(long *)(param_1 + 0x60));
    lVar1 = *(long *)(*(long *)(param_1 + 0x58) + 0x10) + *(long *)(param_1 + 0x60);
  }
  return lVar1 + param_2;
}


// ===== 007dab68  FUN_007dab68 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007dab68(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = *(long *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 8) = param_2;
  if (lVar1 != 0) {
    FUN_007b5788((long *)(param_1 + 0x58),*(long *)(lVar1 + 8) - *(long *)(param_1 + 0x60));
    lVar1 = *(long *)(*(long *)(param_1 + 0x58) + 0x10) + *(long *)(param_1 + 0x60);
  }
  auVar2._4_4_ = param_2;
  auVar2._0_4_ = param_2;
  auVar2._8_4_ = param_2;
  auVar2._12_4_ = param_2;
  auVar2 = NEON_ushl(auVar2,_DAT_001f3910,4);
  *(uint *)(lVar1 + 4) = CONCAT13(auVar2[0xc],CONCAT12(auVar2[8],CONCAT11(auVar2[4],auVar2[0])));
  return;
}


// ===== 007dabd4  FUN_007dabd4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007dabd4(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = *(long *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0xc) = param_2;
  if (lVar1 != 0) {
    FUN_007b5788((long *)(param_1 + 0x58),*(long *)(lVar1 + 8) - *(long *)(param_1 + 0x60));
    lVar1 = *(long *)(*(long *)(param_1 + 0x58) + 0x10) + *(long *)(param_1 + 0x60);
  }
  auVar2._4_4_ = param_2;
  auVar2._0_4_ = param_2;
  auVar2._8_4_ = param_2;
  auVar2._12_4_ = param_2;
  auVar2 = NEON_ushl(auVar2,_DAT_001f3910,4);
  *(uint *)(lVar1 + 8) = CONCAT13(auVar2[0xc],CONCAT12(auVar2[8],CONCAT11(auVar2[4],auVar2[0])));
  return;
}


// ===== 007dac40  FUN_007dac40 =====

void FUN_007dac40(long param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  void *__s;
  ulong uVar6;
  size_t __n;
  long lVar7;
  
  puVar1 = *(undefined1 **)(param_1 + 0x38);
  puVar2 = *(undefined1 **)(param_1 + 0x40);
  do {
    if (puVar1 == puVar2) {
      return;
    }
    uVar5 = FUN_007d8b14(param_1 + 0x20,*puVar1);
    if (uVar5 < 0xe) {
      if ((0x322U >> (ulong)(uVar5 & 0x1f) & 1) == 0) {
        if (uVar5 == 0) {
          uVar6 = FUN_004022fc();
          if ((uVar6 & 1) == 0) {
            FUN_00623bb0(&DAT_001f4e98,"../../modules/rtp_rtcp/source/rtp_packet.cc",0x562,
                         "Unidentified extension in the packet.");
          }
        }
        else if ((uVar5 == 0xd) && (bVar3 = puVar1[1], 7 < bVar3)) {
          lVar7 = *(long *)(param_1 + 0x58);
          uVar4 = *(ushort *)(puVar1 + 2);
          if (lVar7 != 0) {
            FUN_007b5788(param_1 + 0x58,*(long *)(lVar7 + 8) - *(long *)(param_1 + 0x60));
            bVar3 = puVar1[1];
            lVar7 = *(long *)(*(long *)(param_1 + 0x58) + 0x10) + *(long *)(param_1 + 0x60);
          }
          __n = (ulong)bVar3 - 7;
          __s = (void *)(lVar7 + (ulong)uVar4 + 7);
          goto LAB_007dac94;
        }
      }
      else {
        lVar7 = *(long *)(param_1 + 0x58);
        uVar4 = *(ushort *)(puVar1 + 2);
        if (lVar7 != 0) {
          FUN_007b5788(param_1 + 0x58,*(long *)(lVar7 + 8) - *(long *)(param_1 + 0x60));
          lVar7 = *(long *)(*(long *)(param_1 + 0x58) + 0x10) + *(long *)(param_1 + 0x60);
        }
        __n = (size_t)(byte)puVar1[1];
        __s = (void *)(lVar7 + (ulong)uVar4);
LAB_007dac94:
        memset(__s,0,__n);
      }
    }
    puVar1 = puVar1 + 4;
  } while( true );
}


// ===== 007dad8c  FUN_007dad8c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007dad8c(long param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  lVar7 = param_3 * 4;
  plVar6 = (long *)(param_1 + 0x58);
  lVar4 = *plVar6;
  *(long *)(param_1 + 0x10) = lVar7 + 0xc;
  if (lVar4 == 0) {
    bRam0000000000000000 = bRam0000000000000000 & 0xf0 | (byte)param_3;
    auVar3 = _DAT_001f3910;
  }
  else {
    bVar2 = *(byte *)(*(long *)(lVar4 + 0x10) + *(long *)(param_1 + 0x60));
    FUN_007b5788(plVar6,*(long *)(lVar4 + 8) - *(long *)(param_1 + 0x60));
    *(byte *)(*(long *)(*(long *)(param_1 + 0x58) + 0x10) + *(long *)(param_1 + 0x60)) =
         bVar2 & 0xf0 | (byte)param_3;
    auVar3 = _DAT_001f3910;
  }
  _DAT_001f3910 = auVar3;
  if (lVar7 != 0) {
    lVar4 = 0;
    do {
      lVar5 = *plVar6;
      uVar1 = *(undefined4 *)(param_2 + lVar4);
      if (lVar5 != 0) {
        FUN_007b5788(plVar6,*(long *)(lVar5 + 8) - *(long *)(param_1 + 0x60));
        lVar5 = *(long *)(*(long *)(param_1 + 0x58) + 0x10) + *(long *)(param_1 + 0x60);
      }
      auVar8._4_4_ = uVar1;
      auVar8._0_4_ = uVar1;
      auVar8._8_4_ = uVar1;
      auVar8._12_4_ = uVar1;
      lVar5 = lVar5 + lVar4;
      lVar4 = lVar4 + 4;
      auVar8 = NEON_ushl(auVar8,auVar3,4);
      *(uint *)(lVar5 + 0xc) =
           CONCAT13(auVar8[0xc],CONCAT12(auVar8[8],CONCAT11(auVar8[4],auVar8[0])));
    } while (lVar7 - lVar4 != 0);
  }
  FUN_007b5678(plVar6,*(undefined8 *)(param_1 + 0x10));
  return;
}


// ===== 007daea4  FUN_007daea4 =====

undefined1  [16] FUN_007daea4(long param_1,uint param_2,ulong param_3)

{
  long lVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  ushort uVar4;
  short sVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  ushort *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  char *pcVar12;
  byte *pbVar13;
  long lVar14;
  uint uVar15;
  byte *pbVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined1 auVar20 [16];
  byte local_84 [4];
  char *local_80;
  undefined8 uStack_78;
  byte *local_70;
  uint local_64;
  
  pbVar2 = *(byte **)(param_1 + 0x38);
  for (pbVar13 = pbVar2; local_64 = param_2, pbVar13 != *(byte **)(param_1 + 0x40);
      pbVar13 = pbVar13 + 4) {
    if (param_2 == *pbVar13) {
      if (pbVar13 != (byte *)0x0) {
        if (param_3 != pbVar13[1]) {
          uVar7 = FUN_004249b0();
          if ((uVar7 & 1) == 0) {
            local_70 = local_84;
            local_80 = "../../modules/rtp_rtcp/source/rtp_packet.cc";
            uStack_78 = 0x7b3;
            FUN_00623bb0(&DAT_00214ebc,"../../modules/rtp_rtcp/source/rtp_packet.cc",0x7b3,
                         "Length mismatch for extension id ",param_2,": expected ",pbVar13[1],
                         ". received ",param_3);
          }
          goto LAB_007dafc4;
        }
        uVar4 = *(ushort *)(pbVar13 + 2);
        lVar14 = *(long *)(param_1 + 0x58);
        if (lVar14 != 0) {
          FUN_007b5788((long *)(param_1 + 0x58),*(long *)(lVar14 + 8) - *(long *)(param_1 + 0x60));
          lVar14 = *(long *)(*(long *)(param_1 + 0x58) + 0x10) + *(long *)(param_1 + 0x60);
        }
        lVar14 = lVar14 + (ulong)uVar4;
        bVar6 = param_3 == 0;
        goto LAB_007db360;
      }
      break;
    }
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    if (*(char *)(param_1 + 2) == '\0') {
      puVar19 = (undefined8 *)(param_1 + 0x58);
      pbVar13 = (byte *)*puVar19;
      if (pbVar13 == (byte *)0x0) {
        pbVar16 = (byte *)0x0;
      }
      else {
        pbVar16 = (byte *)(*(long *)(pbVar13 + 0x10) + *(long *)(param_1 + 0x60));
      }
      bVar6 = 0xffffffffffffffef < param_3 - 0x11;
      if ((0xe < (int)param_2 || !bVar6) && ((*(byte *)(param_1 + 0x36) & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_0061fd88("../../modules/rtp_rtcp/source/rtp_packet.cc",0x10f,
                     "!two_byte_header_required || extensions_.ExtmapAllowMixed()",&DAT_001f5fa0);
      }
      lVar8 = ((ulong)*pbVar16 & 0xf) * 4;
      lVar17 = *(long *)(param_1 + 0x50);
      lVar14 = lVar8 + 0xc;
      lVar8 = lVar8 + 0x10;
      if (lVar17 == 0) {
        uVar15 = 0x1000;
        if ((int)param_2 < 0xf && bVar6) {
          uVar15 = 0xffffbede;
        }
      }
      else {
        if (pbVar13 == (byte *)0x0) {
          lVar18 = 0;
        }
        else {
          lVar18 = *(long *)(pbVar13 + 0x10) + *(long *)(param_1 + 0x60);
        }
        uVar4 = *(ushort *)(lVar18 + lVar14);
        if (((uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8) != 0xbede || (int)param_2 < 0xf && bVar6)
        {
          uVar15 = (uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8;
        }
        else {
          if (pbVar13 != (byte *)0x0) {
            pbVar13 = (byte *)(*(long *)(pbVar13 + 8) - *(long *)(param_1 + 0x60));
          }
          if (pbVar13 < (byte *)(param_3 + lVar8 + lVar17 +
                                 ((long)*(byte **)(param_1 + 0x40) - (long)pbVar2 >> 2) + 2)) {
            uVar7 = FUN_004249b0();
            if ((uVar7 & 1) == 0) {
              FUN_00623bb0(&DAT_001f4e98,"../../modules/rtp_rtcp/source/rtp_packet.cc",0x8eb,
                           "Extension cannot be registered: Not enough space left in buffer to change to two-byte header extension and add new extension."
                          );
            }
            goto LAB_007dafc4;
          }
          FUN_007db3b4(param_1);
          lVar17 = *(long *)(param_1 + 0x50);
          pbVar13 = *(byte **)(param_1 + 0x58);
          uVar15 = 0x1000;
        }
      }
      lVar18 = 1;
      if ((uVar15 & 0xffff) != 0xbede) {
        lVar18 = 2;
      }
      lVar1 = lVar17 + param_3 + lVar18;
      if (pbVar13 == (byte *)0x0) {
        if (lVar1 + lVar8 == 0) goto LAB_007db1c8;
      }
      else if ((ulong)(lVar1 + lVar8) <= (ulong)(*(long *)(pbVar13 + 8) - *(long *)(param_1 + 0x60))
              ) {
LAB_007db1c8:
        if (lVar17 == 0) {
          if (pbVar13 != (byte *)0x0) {
            pbVar13 = (byte *)(*(long *)(pbVar13 + 0x10) + *(long *)(param_1 + 0x60));
          }
          FUN_007da9e4(param_1,0,*pbVar13 | 0x10);
          puVar9 = (ushort *)FUN_007dab18(param_1,lVar14);
          *puVar9 = (ushort)(uVar15 >> 8) & 0xff | (ushort)((uVar15 & 0xff00ff) << 8);
        }
        if ((uVar15 & 0xffff) == 0xbede) {
          uVar7 = (ulong)((int)param_3 - 1U | param_2 << 4);
          lVar14 = *(long *)(param_1 + 0x50) + lVar8;
        }
        else {
          FUN_007da9e4(param_1,*(long *)(param_1 + 0x50) + lVar8,param_2);
          uVar7 = param_3 & 0xffffffff;
          lVar14 = lVar14 + *(long *)(param_1 + 0x50) + 5;
        }
        FUN_007da9e4(param_1,lVar14,uVar7);
        puVar3 = *(undefined1 **)(param_1 + 0x40);
        local_84[0] = (byte)param_3;
        sVar5 = ((ushort)lVar18 | (ushort)lVar8) + (short)*(undefined4 *)(param_1 + 0x50);
        local_80 = (char *)CONCAT62(local_80._2_6_,sVar5);
        if (puVar3 < *(undefined1 **)(param_1 + 0x48)) {
          if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          *puVar3 = (char)param_2;
          puVar10 = puVar3 + 4;
          puVar3[1] = local_84[0];
          *(short *)(puVar3 + 2) = sVar5;
        }
        else {
          puVar10 = (undefined1 *)
                    FUN_007dbe10((long *)(param_1 + 0x38),&local_64,local_84,&local_80);
        }
        lVar14 = *(long *)(param_1 + 0x58);
        uVar7 = lVar1 + 3;
        *(undefined1 **)(param_1 + 0x40) = puVar10;
        *(long *)(param_1 + 0x50) = lVar1;
        if (lVar14 != 0) {
          FUN_007b5788(puVar19,*(long *)(lVar14 + 8) - *(long *)(param_1 + 0x60));
          lVar14 = *(long *)(*(long *)(param_1 + 0x58) + 0x10) + *(long *)(param_1 + 0x60);
        }
        *(char *)(lVar14 + lVar8 + -2) = (char)(uVar7 >> 10);
        *(char *)(lVar14 + lVar8 + -1) = (char)(uVar7 >> 2);
        lVar17 = *(long *)(param_1 + 0x50);
        lVar14 = *(long *)(param_1 + 0x58);
        if (lVar14 != 0) {
          FUN_007b5788(puVar19,*(long *)(lVar14 + 8) - *(long *)(param_1 + 0x60));
          lVar14 = *(long *)(*(long *)(param_1 + 0x58) + 0x10) + *(long *)(param_1 + 0x60);
        }
        memset((void *)(lVar14 + lVar8 + lVar17),0,(ulong)((uint)uVar7 & 0x3fffc) - lVar17);
        *(ulong *)(param_1 + 0x10) = lVar8 + (ulong)((uint)uVar7 & 0xfffc);
        FUN_007b5678(puVar19);
        lVar14 = *(long *)(param_1 + 0x58);
        uVar7 = (ulong)local_80 & 0xffff;
        if (lVar14 != 0) {
          FUN_007b5788(puVar19,*(long *)(lVar14 + 8) - *(long *)(param_1 + 0x60));
          lVar14 = *(long *)(*(long *)(param_1 + 0x58) + 0x10) + *(long *)(param_1 + 0x60);
        }
        param_3 = (ulong)local_84[0];
        lVar14 = lVar14 + uVar7;
        bVar6 = local_84[0] == 0;
LAB_007db360:
        lVar8 = 0;
        if (!bVar6) {
          lVar8 = lVar14;
        }
        goto LAB_007dafcc;
      }
      uVar7 = FUN_004249b0();
      if ((uVar7 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../modules/rtp_rtcp/source/rtp_packet.cc",0x9a3,
                     "Extension cannot be registered: Not enough space left in buffer.");
      }
    }
    else {
      uVar7 = FUN_004249b0();
      if ((uVar7 & 1) == 0) {
        pcVar12 = " after padding was set.";
        uVar11 = 0x813;
        goto LAB_007dafbc;
      }
    }
  }
  else {
    uVar7 = FUN_004249b0();
    if ((uVar7 & 1) == 0) {
      pcVar12 = " after payload was set.";
      uVar11 = 0x7eb;
LAB_007dafbc:
      FUN_00623bb0(&DAT_001f1906,"../../modules/rtp_rtcp/source/rtp_packet.cc",uVar11,
                   "Can\'t add new extension id ",param_2,pcVar12);
    }
  }
LAB_007dafc4:
  param_3 = 0;
  lVar8 = 0;
LAB_007dafcc:
  auVar20._8_8_ = param_3;
  auVar20._0_8_ = lVar8;
  return auVar20;
}


// ===== 007db3b4  FUN_007db3b4 =====

void FUN_007db3b4(long param_1)

{
  ushort *puVar1;
  long lVar2;
  ushort uVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  long *plVar8;
  long lVar9;
  void *__dest;
  undefined1 *puVar10;
  ulong uVar11;
  
  plVar8 = (long *)(param_1 + 0x58);
  lVar6 = *plVar8;
  if (lVar6 == 0) {
    pbVar7 = (byte *)0x0;
  }
  else {
    pbVar7 = (byte *)(*(long *)(lVar6 + 0x10) + *(long *)(param_1 + 0x60));
  }
  puVar10 = *(undefined1 **)(param_1 + 0x40);
  lVar5 = (long)puVar10 - *(long *)(param_1 + 0x38);
  lVar9 = lVar5 >> 2;
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/rtp_rtcp/source/rtp_packet.cc",0x160,"extension_entries_.size() > 0"
                 ,&DAT_001fbca2,lVar9,0);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/rtp_rtcp/source/rtp_packet.cc",0x161,"payload_size_ == 0",
                 &DAT_001fbca2,*(long *)(param_1 + 0x18),0);
  }
  lVar5 = ((ulong)*pbVar7 & 0xf) * 4;
  puVar1 = (ushort *)(lVar5 + 0xc);
  if (lVar6 == 0) {
    if (((uint)(*puVar1 >> 8) | (*puVar1 & 0xff00ff) << 8) == 0xbede) goto LAB_007db4ac;
    lVar6 = 0;
  }
  else {
    uVar3 = *(ushort *)(*(long *)(lVar6 + 0x10) + *(long *)(param_1 + 0x60) + (long)puVar1);
    if (((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8) == 0xbede) {
LAB_007db4ac:
      do {
        uVar11 = (ulong)*(ushort *)(puVar10 + -2);
        __dest = (void *)(lVar9 + uVar11);
        *(short *)(puVar10 + -2) = (short)__dest;
        lVar6 = *plVar8;
        if (lVar6 != 0) {
          FUN_007b5788(plVar8,*(long *)(lVar6 + 8) - *(long *)(param_1 + 0x60));
          lVar2 = *(long *)(*(long *)(param_1 + 0x58) + 0x10) + *(long *)(param_1 + 0x60);
          __dest = (void *)(lVar2 + (long)__dest);
          lVar6 = 0;
          if (*(long *)(param_1 + 0x58) != 0) {
            lVar6 = lVar2;
          }
        }
        memmove(__dest,(void *)(lVar6 + uVar11),(ulong)(byte)puVar10[-3]);
        lVar6 = *plVar8;
        uVar4 = puVar10[-3];
        if (lVar6 != 0) {
          FUN_007b5788(plVar8,*(long *)(lVar6 + 8) - *(long *)(param_1 + 0x60));
          lVar6 = *(long *)(*(long *)(param_1 + 0x58) + 0x10) + *(long *)(param_1 + 0x60);
        }
        *(undefined1 *)(lVar6 + lVar9 + uVar11 + -1) = uVar4;
        lVar6 = *plVar8;
        puVar10 = puVar10 + -4;
        uVar4 = *puVar10;
        if (lVar6 != 0) {
          FUN_007b5788(plVar8,*(long *)(lVar6 + 8) - *(long *)(param_1 + 0x60));
          lVar6 = *(long *)(*(long *)(param_1 + 0x58) + 0x10) + *(long *)(param_1 + 0x60);
        }
        lVar6 = lVar6 + lVar9;
        lVar9 = lVar9 + -1;
        *(undefined1 *)(lVar6 + uVar11 + -2) = uVar4;
      } while (puVar10 != *(undefined1 **)(param_1 + 0x38));
      lVar6 = *plVar8;
      if (lVar6 != 0) {
        FUN_007b5788(plVar8,*(long *)(lVar6 + 8) - *(long *)(param_1 + 0x60));
        lVar6 = *(long *)(*(long *)(param_1 + 0x58) + 0x10) + *(long *)(param_1 + 0x60);
      }
      *(undefined2 *)(lVar6 + (long)puVar1) = 0x10;
      lVar5 = lVar5 + 0x10;
      lVar9 = *(long *)(param_1 + 0x58);
      lVar6 = *(long *)(param_1 + 0x50) +
              (*(long *)(param_1 + 0x40) - *(long *)(param_1 + 0x38) >> 2);
      uVar11 = lVar6 + 3;
      *(long *)(param_1 + 0x50) = lVar6;
      if (lVar9 != 0) {
        FUN_007b5788(plVar8,*(long *)(lVar9 + 8) - *(long *)(param_1 + 0x60));
        lVar9 = *(long *)(*(long *)(param_1 + 0x58) + 0x10) + *(long *)(param_1 + 0x60);
      }
      *(char *)(lVar9 + lVar5 + -2) = (char)(uVar11 >> 10);
      *(char *)(lVar9 + lVar5 + -1) = (char)(uVar11 >> 2);
      lVar9 = *(long *)(param_1 + 0x50);
      lVar6 = *(long *)(param_1 + 0x58);
      if (lVar6 != 0) {
        FUN_007b5788(plVar8,*(long *)(lVar6 + 8) - *(long *)(param_1 + 0x60));
        lVar6 = *(long *)(*(long *)(param_1 + 0x58) + 0x10) + *(long *)(param_1 + 0x60);
      }
      memset((void *)(lVar6 + lVar5 + lVar9),0,(ulong)((uint)uVar11 & 0x3fffc) - lVar9);
      *(ulong *)(param_1 + 0x10) = lVar5 + (ulong)((uint)uVar11 & 0xfffc);
      FUN_007b5678(plVar8);
      return;
    }
    lVar6 = *(long *)(lVar6 + 0x10) + *(long *)(param_1 + 0x60);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../modules/rtp_rtcp/source/rtp_packet.cc",0x163,
               "kOneByteExtensionProfileId == ByteReader<uint16_t>::ReadBigEndian( data() + extensions_offset - 4)"
               ,&DAT_001fbedc,0xbede,
               (uint)(*(ushort *)(lVar6 + (long)puVar1) >> 8) |
               (*(ushort *)(lVar6 + (long)puVar1) & 0xff00ff) << 8);
}


// ===== 007db6a0  FUN_007db6a0 =====

long FUN_007db6a0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_007b5678(param_1 + 0x58,*(undefined8 *)(param_1 + 0x10));
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_007b5788(param_1 + 0x58,*(long *)(*(long *)(param_1 + 0x58) + 8) - *(long *)(param_1 + 0x60)
                );
  }
  *(long *)(param_1 + 0x18) = param_2;
  FUN_007b5678(param_1 + 0x58,*(long *)(param_1 + 0x10) + param_2);
  lVar1 = *(long *)(param_1 + 0x58);
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_007b5788(param_1 + 0x58,*(long *)(lVar1 + 8) - *(long *)(param_1 + 0x60));
    lVar1 = *(long *)(*(long *)(param_1 + 0x58) + 0x10) + *(long *)(param_1 + 0x60);
  }
  return lVar1 + lVar2;
}


// ===== 007db738  FUN_007db738 =====

long FUN_007db738(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  *(long *)(param_1 + 0x18) = param_2;
  FUN_007b5678(param_1 + 0x58,*(long *)(param_1 + 0x10) + param_2);
  lVar1 = *(long *)(param_1 + 0x58);
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_007b5788(param_1 + 0x58,*(long *)(lVar1 + 8) - *(long *)(param_1 + 0x60));
    lVar1 = *(long *)(*(long *)(param_1 + 0x58) + 0x10) + *(long *)(param_1 + 0x60);
  }
  return lVar1 + lVar2;
}


// ===== 007db7a0  FUN_007db7a0 =====

void FUN_007db7a0(long param_1,void *param_2,size_t param_3)

{
  void *__dest;
  
  if (param_3 != 0) {
    __dest = (void *)FUN_007db6a0(param_1,param_3);
    memcpy(__dest,param_2,param_3);
    return;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_007b5678(param_1 + 0x58,*(undefined8 *)(param_1 + 0x10));
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_007b5788(param_1 + 0x58,*(long *)(*(long *)(param_1 + 0x58) + 8) - *(long *)(param_1 + 0x60)
                );
    return;
  }
  return;
}


// ===== 007db83c  FUN_007db83c =====

bool FUN_007db83c(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  byte *pbVar5;
  ulong uVar6;
  long *plVar7;
  byte bVar8;
  ulong uVar9;
  ulong uVar10;
  
  plVar7 = (long *)(param_1 + 0x58);
  lVar4 = *(long *)(param_1 + 0x18) + *(long *)(param_1 + 0x10);
  uVar1 = lVar4 + param_2;
  if (*plVar7 == 0) {
    uVar10 = 0;
    if (uVar1 != 0) goto LAB_007db8e8;
  }
  else {
    uVar10 = *(long *)(*plVar7 + 8) - *(long *)(param_1 + 0x60);
    if (uVar10 < uVar1) {
LAB_007db8e8:
      uVar9 = FUN_004022fc();
      if ((uVar9 & 1) == 0) {
        lVar4 = *plVar7;
        if (lVar4 != 0) {
          lVar4 = *(long *)(lVar4 + 8) - *(long *)(param_1 + 0x60);
        }
        FUN_00623bb0(&DAT_001f4ef8,"../../modules/rtp_rtcp/source/rtp_packet.cc",0xd32,
                     "Cannot set padding size ",param_2,", only ",
                     lVar4 - (*(long *)(param_1 + 0x10) + *(long *)(param_1 + 0x18)),
                     " bytes left in buffer.");
      }
      goto LAB_007dba10;
    }
  }
  *(char *)(param_1 + 2) = (char)param_2;
  FUN_007b5678(plVar7,lVar4 + (param_2 & 0xff));
  uVar9 = (ulong)*(byte *)(param_1 + 2);
  if (uVar9 == 0) {
    lVar4 = *plVar7;
    if (lVar4 == 0) {
      pbVar5 = (byte *)0x0;
      bVar8 = bRam0000000000000000;
    }
    else {
      bVar8 = *(byte *)(*(long *)(lVar4 + 0x10) + *(long *)(param_1 + 0x60));
      FUN_007b5788(plVar7,*(long *)(lVar4 + 8) - *(long *)(param_1 + 0x60));
      pbVar5 = (byte *)(*(long *)(*(long *)(param_1 + 0x58) + 0x10) + *(long *)(param_1 + 0x60));
    }
    bVar8 = bVar8 & 0xdf;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x18) + *(long *)(param_1 + 0x10);
    if (*(long *)(param_1 + 0x58) == 0) {
      lVar3 = 0;
      uVar6 = uVar9;
    }
    else {
      FUN_007b5788(plVar7,*(long *)(*(long *)(param_1 + 0x58) + 8) - *(long *)(param_1 + 0x60));
      lVar3 = *(long *)(*(long *)(param_1 + 0x58) + 0x10) + *(long *)(param_1 + 0x60);
      uVar6 = (ulong)*(byte *)(param_1 + 2);
    }
    memset((void *)(lVar3 + lVar4),0,uVar6 - 1);
    lVar3 = *(long *)(param_1 + 0x58);
    uVar2 = *(undefined1 *)(param_1 + 2);
    if (lVar3 != 0) {
      FUN_007b5788(plVar7,*(long *)(lVar3 + 8) - *(long *)(param_1 + 0x60));
      lVar3 = *(long *)(*(long *)(param_1 + 0x58) + 0x10) + *(long *)(param_1 + 0x60);
    }
    *(undefined1 *)(lVar3 + uVar9 + lVar4 + -1) = uVar2;
    lVar4 = *plVar7;
    if (lVar4 == 0) {
      bVar8 = bRam0000000000000000 | 0x20;
      pbVar5 = (byte *)0x0;
    }
    else {
      bVar8 = *(byte *)(*(long *)(lVar4 + 0x10) + *(long *)(param_1 + 0x60));
      FUN_007b5788(plVar7,*(long *)(lVar4 + 8) - *(long *)(param_1 + 0x60));
      pbVar5 = (byte *)(*(long *)(*(long *)(param_1 + 0x58) + 0x10) + *(long *)(param_1 + 0x60));
      bVar8 = bVar8 | 0x20;
    }
  }
  *pbVar5 = bVar8;
LAB_007dba10:
  return uVar1 <= uVar10;
}


// ===== 007dba34  FUN_007dba34 =====

undefined1  [16] FUN_007dba34(long param_1,uint param_2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  char *pcVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  if (0x15 < param_2) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/array:282: libc++ Hardening assertion __n < _Size failed: out-of-bounds access in std::array<T, N>\n"
              );
  }
  cVar1 = *(char *)(param_1 + (ulong)param_2 + 0x20);
  if (cVar1 != '\0') {
    for (pcVar4 = *(char **)(param_1 + 0x38); pcVar4 != *(char **)(param_1 + 0x40);
        pcVar4 = pcVar4 + 4) {
      if (cVar1 == *pcVar4) {
        if (pcVar4 != (char *)0x0) {
          lVar5 = *(long *)(param_1 + 0x58);
          if (lVar5 != 0) {
            lVar5 = *(long *)(lVar5 + 0x10) + *(long *)(param_1 + 0x60);
          }
          uVar3 = (ulong)(byte)pcVar4[1];
          lVar2 = 0;
          if (pcVar4[1] != 0) {
            lVar2 = lVar5 + (ulong)*(ushort *)(pcVar4 + 2);
          }
          goto LAB_007dbaac;
        }
        break;
      }
    }
  }
  uVar3 = 0;
  lVar2 = 0;
LAB_007dbaac:
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = lVar2;
  return auVar6;
}


// ===== 007dbacc  FUN_007dbacc =====

undefined8 FUN_007dbacc(long param_1,uint param_2,ulong param_3)

{
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  
  if ((param_3 - 0x100 < 0xffffffffffffff01) ||
     ((cVar1 = *(char *)(param_1 + 0x36), 0x10 < param_3 && (cVar1 == '\0')))) {
    uVar3 = 0;
  }
  else {
    if (0x15 < param_2) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/array:282: libc++ Hardening assertion __n < _Size failed: out-of-bounds access in std::array<T, N>\n"
                );
    }
    uVar3 = 0;
    bVar2 = *(byte *)(param_1 + 0x20 + (ulong)param_2);
    if (bVar2 < 0xf) {
      cVar1 = '\x01';
    }
    if ((bVar2 != 0) && (cVar1 != '\0')) {
      uVar3 = FUN_007daea4(param_1,bVar2);
    }
  }
  return uVar3;
}


// ===== 007dbb58  FUN_007dbb58 =====

bool FUN_007dbb58(long param_1,uint param_2)

{
  char cVar1;
  char *pcVar2;
  
  if (0x15 < param_2) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/array:282: libc++ Hardening assertion __n < _Size failed: out-of-bounds access in std::array<T, N>\n"
              );
  }
  cVar1 = *(char *)(param_1 + (ulong)param_2 + 0x20);
  if (cVar1 != '\0') {
    pcVar2 = *(char **)(param_1 + 0x38);
    if (pcVar2 != *(char **)(param_1 + 0x40)) {
      do {
        if (cVar1 == *pcVar2) goto LAB_007dbba0;
        pcVar2 = pcVar2 + 4;
      } while (pcVar2 != *(char **)(param_1 + 0x40));
      pcVar2 = (char *)0x0;
LAB_007dbba0:
      return pcVar2 != (char *)0x0;
    }
  }
  return false;
}


// ===== 007dbbd0  FUN_007dbbd0 =====

void FUN_007dbbd0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 007dbbe8  FUN_007dbbe8 =====

undefined1 * FUN_007dbbe8(undefined8 *param_1,void *param_2,undefined1 *param_3,undefined2 *param_4)

{
  undefined2 *puVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined1 *puVar4;
  long *plVar5;
  size_t sVar6;
  undefined2 *puVar7;
  long lVar8;
  ulong uVar9;
  void *pvVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  size_t __n;
  void *pvVar14;
  undefined1 *puVar15;
  undefined1 auVar16 [16];
  
  uVar9 = param_1[2];
  pvVar14 = (void *)*param_1;
  if ((undefined2 *)((long)(uVar9 - (long)pvVar14) >> 2) < param_4) {
    puVar4 = param_3;
    puVar7 = param_4;
    if (pvVar14 == (void *)0x0) {
LAB_007dbd8c:
      if ((ulong)param_4 >> 0x3e == 0) {
        puVar1 = (undefined2 *)((long)uVar9 >> 1);
        if ((undefined2 *)((long)uVar9 >> 1) <= param_4) {
          puVar1 = param_4;
        }
        if (0x7ffffffffffffffb < uVar9) {
          puVar1 = (undefined2 *)0x3fffffffffffffff;
        }
        if ((ulong)puVar1 >> 0x3e == 0) {
          pvVar14 = operator_new((long)puVar1 * 4);
          *param_1 = pvVar14;
          param_1[1] = pvVar14;
          param_1[2] = (void *)((long)pvVar14 + (long)puVar1 * 4);
          puVar4 = (undefined1 *)memcpy(pvVar14,param_2,(long)param_3 - (long)param_2);
          lVar8 = (long)pvVar14 + ((long)param_3 - (long)param_2);
          goto LAB_007dbde8;
        }
      }
      auVar16 = FUN_007dbbd0();
      plVar5 = auVar16._0_8_;
      puVar15 = (undefined1 *)(plVar5[1] - *plVar5);
      uVar9 = ((long)puVar15 >> 2) + 1;
      if (uVar9 >> 0x3e != 0) {
        FUN_007dbbd0();
LAB_007dbf20:
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      uVar12 = plVar5[2] - *plVar5;
      uVar13 = (long)uVar12 >> 1;
      if (uVar13 <= uVar9) {
        uVar13 = uVar9;
      }
      if (0x7ffffffffffffffb < uVar12) {
        uVar13 = 0x3fffffffffffffff;
      }
      if (uVar13 == 0) {
        pvVar14 = (void *)0x0;
      }
      else {
        if (uVar13 >> 0x3e != 0) goto LAB_007dbf20;
        pvVar14 = operator_new(uVar13 << 2);
        puVar15 = (undefined1 *)((long)pvVar14 + (long)puVar15);
      }
      if (puVar15 != (undefined1 *)0x0) {
        uVar2 = *puVar4;
        uVar3 = *puVar7;
        *puVar15 = (char)*auVar16._8_8_;
        puVar15[1] = uVar2;
        *(undefined2 *)(puVar15 + 2) = uVar3;
        sVar6 = plVar5[1] - *plVar5;
        memcpy(puVar15 + -sVar6,(void *)*plVar5,sVar6);
        pvVar10 = (void *)*plVar5;
        *plVar5 = (long)(puVar15 + -sVar6);
        plVar5[1] = (long)(puVar15 + 4);
        plVar5[2] = (long)((long)pvVar14 + uVar13 * 4);
        if (pvVar10 != (void *)0x0) {
          operator_delete(pvVar10);
        }
        return puVar15 + 4;
      }
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    pvVar10 = (void *)param_1[1];
    uVar13 = (ulong)((long)pvVar10 + (-4 - ((long)pvVar10 << 0x3e))) >> 2;
    uVar9 = (ulong)(((long)pvVar14 - (long)pvVar10 << 0x3e) - ((long)pvVar14 - (long)pvVar10)) >> 2;
    if (uVar13 <= uVar9) {
      uVar9 = uVar13;
    }
    if ((1 < uVar9) && ((((int)pvVar14 - (int)pvVar10 | -(int)pvVar10) & 3U) == 0)) {
      uVar9 = uVar9 & 0x3ffffffffffffffe;
      pvVar10 = (void *)((long)pvVar10 + uVar9 * -4);
      do {
        uVar9 = uVar9 - 2;
      } while (uVar9 != 0);
    }
    do {
      if (pvVar10 == pvVar14) {
        param_1[1] = pvVar14;
        operator_delete(pvVar14);
        uVar9 = 0;
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        goto LAB_007dbd8c;
      }
      pvVar10 = (void *)((long)pvVar10 + -4);
    } while (pvVar10 != (void *)0x0);
  }
  else {
    sVar6 = param_1[1] - (long)pvVar14;
    if ((undefined2 *)((long)sVar6 >> 2) < param_4) {
      memmove(pvVar14,param_2,sVar6);
      pvVar14 = (void *)param_1[1];
      __n = (long)param_3 - (long)((long)param_2 + sVar6);
      puVar4 = (undefined1 *)memmove(pvVar14,(void *)((long)param_2 + sVar6),__n);
      lVar8 = (long)pvVar14 + __n;
LAB_007dbde8:
      param_1[1] = lVar8;
      return puVar4;
    }
    puVar4 = (undefined1 *)memmove(pvVar14,param_2,(long)param_3 - (long)param_2);
    lVar8 = param_1[1];
    lVar11 = (long)((long)pvVar14 + (long)param_3) - (lVar8 + (long)param_2);
    uVar9 = (ulong)((lVar11 << 0x3e) - lVar11) >> 2;
    uVar13 = (lVar8 - (lVar8 << 0x3e)) - 4U >> 2;
    if (uVar13 <= uVar9) {
      uVar9 = uVar13;
    }
    lVar11 = (long)pvVar14 + ((long)param_3 - (long)param_2);
    if ((1 < uVar9) &&
       (((((int)pvVar14 + (int)param_3) - ((int)lVar8 + (int)param_2) | -(int)lVar8) & 3U) == 0)) {
      uVar9 = uVar9 & 0x3ffffffffffffffe;
      lVar8 = lVar8 + uVar9 * -4;
      do {
        uVar9 = uVar9 - 2;
      } while (uVar9 != 0);
    }
    do {
      if (lVar8 == lVar11) {
        param_1[1] = lVar11;
        return puVar4;
      }
      lVar8 = lVar8 + -4;
    } while (lVar8 != 0);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 007dbe10  FUN_007dbe10 =====

undefined1 * FUN_007dbe10(long *param_1,undefined4 *param_2,undefined1 *param_3,undefined2 *param_4)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  void *pvVar4;
  void *pvVar5;
  size_t __n;
  ulong uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  
  puVar8 = (undefined1 *)(param_1[1] - *param_1);
  uVar1 = ((long)puVar8 >> 2) + 1;
  if (uVar1 >> 0x3e != 0) {
    FUN_007dbbd0();
LAB_007dbf20:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  uVar6 = param_1[2] - *param_1;
  uVar7 = (long)uVar6 >> 1;
  if (uVar7 <= uVar1) {
    uVar7 = uVar1;
  }
  if (0x7ffffffffffffffb < uVar6) {
    uVar7 = 0x3fffffffffffffff;
  }
  if (uVar7 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if (uVar7 >> 0x3e != 0) goto LAB_007dbf20;
    pvVar4 = operator_new(uVar7 << 2);
    puVar8 = (undefined1 *)((long)pvVar4 + (long)puVar8);
  }
  if (puVar8 != (undefined1 *)0x0) {
    uVar2 = *param_3;
    uVar3 = *param_4;
    *puVar8 = (char)*param_2;
    puVar8[1] = uVar2;
    *(undefined2 *)(puVar8 + 2) = uVar3;
    __n = param_1[1] - *param_1;
    memcpy(puVar8 + -__n,(void *)*param_1,__n);
    pvVar5 = (void *)*param_1;
    *param_1 = (long)(puVar8 + -__n);
    param_1[1] = (long)(puVar8 + 4);
    param_1[2] = (long)((long)pvVar4 + uVar7 * 4);
    if (pvVar5 != (void *)0x0) {
      operator_delete(pvVar5);
    }
    return puVar8 + 4;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 007dbf24  FUN_007dbf24 =====

undefined1 * FUN_007dbf24(long *param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  void *pvVar3;
  void *pvVar4;
  size_t __n;
  ulong uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  
  puVar7 = (undefined1 *)(param_1[1] - *param_1);
  uVar1 = ((long)puVar7 >> 2) + 1;
  if (uVar1 >> 0x3e != 0) {
    FUN_007dbbd0();
LAB_007dc01c:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  uVar5 = param_1[2] - *param_1;
  uVar6 = (long)uVar5 >> 1;
  if (uVar6 <= uVar1) {
    uVar6 = uVar1;
  }
  if (0x7ffffffffffffffb < uVar5) {
    uVar6 = 0x3fffffffffffffff;
  }
  if (uVar6 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    if (uVar6 >> 0x3e != 0) goto LAB_007dc01c;
    pvVar3 = operator_new(uVar6 << 2);
    puVar7 = (undefined1 *)((long)pvVar3 + (long)puVar7);
  }
  if (puVar7 != (undefined1 *)0x0) {
    uVar2 = *param_2;
    puVar7[1] = 0;
    *(undefined2 *)(puVar7 + 2) = 0;
    *puVar7 = (char)uVar2;
    __n = param_1[1] - *param_1;
    memcpy(puVar7 + -__n,(void *)*param_1,__n);
    pvVar4 = (void *)*param_1;
    *param_1 = (long)(puVar7 + -__n);
    param_1[1] = (long)(puVar7 + 4);
    param_1[2] = (long)((long)pvVar3 + uVar6 * 4);
    if (pvVar4 != (void *)0x0) {
      operator_delete(pvVar4);
    }
    return puVar7 + 4;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 007dc020  FUN_007dc020 =====

void FUN_007dc020(long param_1)

{
  FUN_007d99dc();
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0x8000000000000000;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  return;
}


// ===== 007dc060  FUN_007dc060 =====

void FUN_007dc060(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_007d9a88();
  *(undefined8 *)(param_1 + 0x70) = param_3;
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  return;
}


// ===== 007dc0a0  FUN_007dc0a0 =====

void FUN_007dc0a0(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_007d9c20();
  uVar3 = *(undefined8 *)(param_2 + 0x78);
  uVar2 = *(undefined8 *)(param_2 + 0x70);
  *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x78) = uVar3;
  *(undefined8 *)(param_1 + 0x70) = uVar2;
  lVar1 = *(long *)(param_2 + 0x88);
  *(long *)(param_1 + 0x88) = lVar1;
  if (lVar1 != 0) {
    FUN_00d0f740(1,lVar1 + 8);
  }
  return;
}


// ===== 007dc0f4  FUN_007dc0f4 =====

void FUN_007dc0f4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_007d9cc0();
  uVar2 = *(undefined8 *)(param_2 + 0x78);
  uVar1 = *(undefined8 *)(param_2 + 0x70);
  *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x78) = uVar2;
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  return;
}


// ===== 007dc13c  FUN_007dc13c =====

long FUN_007dc13c(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  
  FUN_007d9df8();
  uVar4 = *(undefined8 *)(param_2 + 0x78);
  uVar2 = *(undefined8 *)(param_2 + 0x70);
  *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x78) = uVar4;
  *(undefined8 *)(param_1 + 0x70) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_2 + 0x88) = 0;
  plVar3 = *(long **)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = uVar2;
  if ((plVar3 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar3 + 1), iVar1 == 1)) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  return param_1;
}


// ===== 007dc1b4  FUN_007dc1b4 =====

void FUN_007dc1b4(long param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x88);
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  FUN_007d9f60(param_1);
  return;
}


// ===== 007dc208  FUN_007dc208 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007dc208(undefined1 *param_1,undefined1 *param_2)

{
  char cVar1;
  code *pcVar2;
  byte bVar3;
  ulong uVar4;
  char cVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined4 *puVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  ulong local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 local_90;
  undefined7 uStack_8f;
  byte local_88;
  undefined7 uStack_87;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 local_60 [16];
  undefined4 *local_50;
  undefined4 *puStack_48;
  undefined1 *local_40;
  
  *param_2 = *param_1;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  param_2[1] = param_1[1];
  puStack_48 = (undefined4 *)&DAT_aaaaaaaaaaaaaaaa;
  local_50 = (undefined4 *)&DAT_aaaaaaaaaaaaaaaa;
  *(undefined2 *)(param_2 + 2) = *(undefined2 *)(param_1 + 4);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0xc);
  FUN_007da710(&local_50);
  lVar7 = (long)puStack_48 - (long)local_50 >> 2;
  param_2[0xc] = (char)lVar7;
  if ((long)puStack_48 - (long)local_50 != 0) {
    if (lVar7 - 0x10U < 0xfffffffffffffff1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(0x5512,0x7dc674);
      (*pcVar2)();
    }
    puVar6 = local_50;
    puVar8 = (undefined4 *)(param_2 + 0x10);
    do {
      lVar7 = lVar7 + -1;
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    } while (lVar7 != 0);
  }
  *(ulong *)(param_2 + 0x50) = (ulong)(byte)param_1[2];
  *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(param_1 + 0x10);
  auVar10 = FUN_007dba34(param_1,1);
  if (auVar10._8_8_ == 0) {
    bVar3 = 0;
  }
  else {
    bVar3 = FUN_007d8fa0(auVar10._0_8_,auVar10._8_8_,param_2 + 100);
  }
  param_2[0x60] = bVar3 & 1;
  auVar10 = FUN_007dba34(param_1,5);
  if (auVar10._8_8_ == 0) {
    bVar3 = 0;
  }
  else {
    bVar3 = FUN_007d8d58(auVar10._0_8_,auVar10._8_8_,param_2 + 0x6c);
  }
  param_2[0x68] = bVar3 & 1;
  uStack_98 = 0xaaaaaaaa;
  uStack_94 = 0xaaaaaaaa;
  uStack_87 = 0xaaaaaaaaaaaaaa;
  local_90 = 0xaa;
  uStack_8f = 0xaaaaaaaaaaaaaa;
  local_a0 = 0xaaaaaaaaaaaaaa00;
  local_88 = 0;
  auVar10 = FUN_007dba34(param_1,6);
  if (auVar10._8_8_ != 0) {
    local_a0 = 0;
    uStack_98 = 0;
    uStack_94 = 0;
    local_90 = 0;
    uStack_8f = 0;
    local_88 = 1;
    uVar4 = FUN_007d8db0(auVar10._0_8_,auVar10._8_8_,&local_a0);
    if (((uVar4 & 1) == 0) && ((local_88 & 1) != 0)) {
      local_88 = 0;
    }
  }
  *(ulong *)(param_2 + 0x78) = CONCAT44(uStack_94,uStack_98);
  *(ulong *)(param_2 + 0x70) = local_a0;
  *(ulong *)(param_2 + 0x81) = CONCAT17(local_88,uStack_8f);
  *(ulong *)(param_2 + 0x79) = CONCAT17(local_90,CONCAT43(uStack_94,uStack_98._1_3_));
  auVar10 = FUN_007dba34(param_1,9);
  if ((auVar10._8_8_ == 0) ||
     (uVar4 = FUN_007d9044(auVar10._0_8_,auVar10._8_8_,param_2 + 0x92,param_2 + 0x94),
     (uVar4 & 1) == 0)) {
    auVar10 = FUN_007dba34(param_1,8);
    if (auVar10._8_8_ == 0) {
      bVar3 = 0;
    }
    else {
      bVar3 = FUN_007d9000(auVar10._0_8_,auVar10._8_8_,param_2 + 0x92);
    }
  }
  else {
    bVar3 = 1;
  }
  param_2[0x90] = bVar3 & 1;
  local_a0 = 0xaaaaaaaaaaaaaa00;
  uStack_98._0_1_ = 0;
  uStack_98._1_3_ = 0xaaaaaa;
  auVar10 = FUN_007dba34(param_1,2);
  if (auVar10._8_8_ != 0) {
    FUN_00659674(&local_a0);
    uStack_98._0_1_ = 1;
    uVar4 = FUN_007d8ec0(auVar10._0_8_,auVar10._8_8_,&local_a0);
    if (((uVar4 & 1) == 0) && (((byte)uStack_98 & 1) != 0)) {
      uStack_98._0_1_ = 0;
    }
  }
  *(ulong *)(param_2 + 0x160) = local_a0;
  param_2[0x168] = (byte)uStack_98;
  auVar10 = FUN_007dba34(param_1,7);
  if (auVar10._8_8_ == 0) {
    bVar3 = 0;
  }
  else {
    bVar3 = FUN_007d90e0(auVar10._0_8_,auVar10._8_8_,param_2 + 0xa4);
  }
  param_2[0xa0] = bVar3 & 1;
  auVar10 = FUN_007dba34(param_1,0xb);
  if (auVar10._8_8_ == 0) {
    bVar3 = 0;
  }
  else {
    bVar3 = FUN_007d91f0(auVar10._0_8_,auVar10._8_8_,param_2 + 0xa9);
  }
  param_2[0xa8] = bVar3 & 1;
  auVar10 = FUN_007dba34(param_1,0xd);
  if (auVar10._8_8_ == 0) {
    bVar3 = 0;
  }
  else {
    bVar3 = FUN_007d9264(auVar10._0_8_,auVar10._8_8_,param_2 + 0xac);
  }
  param_2[0xaa] = bVar3 & 1;
  auVar10 = FUN_007dba34(param_1,0xe);
  if (auVar10._8_8_ != 0) {
    FUN_007d98d0(auVar10._0_8_,auVar10._8_8_,param_2 + 0xd0);
  }
  auVar10 = FUN_007dba34(param_1,0xf);
  if (auVar10._8_8_ != 0) {
    FUN_007d98d0(auVar10._0_8_,auVar10._8_8_,param_2 + 0xe8);
  }
  auVar10 = FUN_007dba34(param_1,0x10);
  if (auVar10._8_8_ != 0) {
    FUN_007d98d0(auVar10._0_8_,auVar10._8_8_,param_2 + 0x100);
  }
  auVar10 = FUN_007dba34(param_1,10);
  if (auVar10._8_8_ != 0) {
    FUN_007d9154(auVar10._0_8_,auVar10._8_8_,param_2 + 0xc0);
  }
  local_60._0_8_ = 0xaaaaaa00aaaaaaaa;
  uStack_98 = (undefined4)_UNK_00214ed4;
  uStack_94 = (undefined4)((ulong)_UNK_00214ed4 >> 0x20);
  local_88 = (byte)_UNK_00214ee4;
  uStack_87 = (undefined7)((ulong)_UNK_00214ee4 >> 8);
  local_90 = (undefined1)_DAT_00214edc;
  uStack_8f = (undefined7)((ulong)_DAT_00214edc >> 8);
  local_a0 = _DAT_00214ecc & 0xffffffffffffff00;
  uStack_78 = _UNK_00214ef4;
  local_80 = _DAT_00214eec;
  uStack_68 = _UNK_00214f04;
  uStack_70 = _DAT_00214efc;
  auVar10 = FUN_007dba34(param_1,0x13);
  if (auVar10._8_8_ == 0) {
    cVar5 = '\0';
  }
  else {
    FUN_00659ab8(&local_a0);
    local_60[4] = 1;
    uVar4 = FUN_007d939c(auVar10._0_8_,auVar10._8_8_,&local_a0);
    cVar5 = local_60[4];
    if (((uVar4 & 1) == 0) && (local_60[4] != '\0')) {
      cVar5 = '\0';
      local_60[4] = 0;
    }
  }
  cVar1 = param_2[0x15c];
  if (cVar1 == cVar5) {
    if (cVar1 != '\0') {
      FUN_00659b1c(param_2 + 0x118,&local_a0);
    }
  }
  else if (cVar1 == '\0') {
    if (param_2 + 0x118 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    FUN_00659afc(param_2 + 0x118,&local_a0);
    param_2[0x15c] = 1;
  }
  else {
    param_2[0x15c] = 0;
  }
  if (local_50 != (undefined4 *)0x0) {
    uVar9 = (ulong)((long)puStack_48 + (-4 - ((long)puStack_48 << 0x3e))) >> 2;
    uVar4 = (ulong)(((long)local_50 - (long)puStack_48 << 0x3e) -
                   ((long)local_50 - (long)puStack_48)) >> 2;
    if (uVar9 <= uVar4) {
      uVar4 = uVar9;
    }
    puVar6 = puStack_48;
    if ((1 < uVar4) && ((((int)local_50 - (int)puStack_48 | -(int)puStack_48) & 3U) == 0)) {
      uVar4 = uVar4 & 0x3ffffffffffffffe;
      puVar6 = puStack_48 + -uVar4;
      do {
        uVar4 = uVar4 - 2;
      } while (uVar4 != 0);
    }
    while (puVar6 != local_50) {
      puVar6 = puVar6 + -1;
      if (puVar6 == (undefined4 *)0x0) {
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


// ===== 007dc674  FUN_007dc674 =====

void FUN_007dc674(long param_1)

{
  FUN_007d9a88();
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined1 *)(param_1 + 0x88) = 0;
  *(undefined1 *)(param_1 + 0x8c) = 0;
  *(undefined1 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(undefined1 *)(param_1 + 0x98) = 0;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0xa8) = 0;
  *(undefined1 *)(param_1 + 0xaa) = 0;
  *(undefined1 *)(param_1 + 0xac) = 0;
  *(undefined1 *)(param_1 + 0xc0) = 0;
  *(undefined1 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb5) = 0;
  return;
}


// ===== 007dc6dc  FUN_007dc6dc =====

void FUN_007dc6dc(long param_1)

{
  FUN_007d9a24();
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined1 *)(param_1 + 0x88) = 0;
  *(undefined1 *)(param_1 + 0x8c) = 0;
  *(undefined1 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(undefined1 *)(param_1 + 0x98) = 0;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0xa8) = 0;
  *(undefined1 *)(param_1 + 0xaa) = 0;
  *(undefined1 *)(param_1 + 0xac) = 0;
  *(undefined1 *)(param_1 + 0xc0) = 0;
  *(undefined1 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb5) = 0;
  return;
}


// ===== 007dc744  FUN_007dc744 =====

void FUN_007dc744(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  FUN_007d9c20();
  uVar8 = *(undefined8 *)(param_2 + 0x88);
  uVar7 = *(undefined8 *)(param_2 + 0x80);
  uVar4 = *(undefined8 *)(param_2 + 0x98);
  uVar3 = *(undefined8 *)(param_2 + 0x90);
  uVar2 = *(undefined8 *)(param_2 + 0x9d);
  uVar6 = *(undefined8 *)(param_2 + 0x78);
  uVar5 = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0xa5) = *(undefined8 *)(param_2 + 0xa5);
  *(undefined8 *)(param_1 + 0x9d) = uVar2;
  *(undefined8 *)(param_1 + 0x88) = uVar8;
  *(undefined8 *)(param_1 + 0x80) = uVar7;
  *(undefined8 *)(param_1 + 0x98) = uVar4;
  *(undefined8 *)(param_1 + 0x90) = uVar3;
  *(undefined8 *)(param_1 + 0x78) = uVar6;
  *(undefined8 *)(param_1 + 0x70) = uVar5;
  lVar1 = *(long *)(param_2 + 0xb0);
  *(long *)(param_1 + 0xb0) = lVar1;
  if (lVar1 != 0) {
    FUN_00d0f740(1,lVar1 + 8);
  }
  uVar3 = *(undefined8 *)(param_2 + 0xc0);
  uVar2 = *(undefined8 *)(param_2 + 0xb8);
  *(undefined1 *)(param_1 + 200) = *(undefined1 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xc0) = uVar3;
  *(undefined8 *)(param_1 + 0xb8) = uVar2;
  return;
}


// ===== 007dc7b0  FUN_007dc7b0 =====

long FUN_007dc7b0(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  FUN_007d9d1c();
  uVar10 = *(undefined8 *)(param_2 + 0x88);
  uVar9 = *(undefined8 *)(param_2 + 0x80);
  uVar6 = *(undefined8 *)(param_2 + 0x98);
  uVar5 = *(undefined8 *)(param_2 + 0x90);
  uVar4 = *(undefined8 *)(param_2 + 0x9d);
  uVar8 = *(undefined8 *)(param_2 + 0x78);
  uVar7 = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0xa5) = *(undefined8 *)(param_2 + 0xa5);
  *(undefined8 *)(param_1 + 0x9d) = uVar4;
  *(undefined8 *)(param_1 + 0x88) = uVar10;
  *(undefined8 *)(param_1 + 0x80) = uVar9;
  *(undefined8 *)(param_1 + 0x98) = uVar6;
  *(undefined8 *)(param_1 + 0x90) = uVar5;
  *(undefined8 *)(param_1 + 0x78) = uVar8;
  *(undefined8 *)(param_1 + 0x70) = uVar7;
  lVar3 = *(long *)(param_2 + 0xb0);
  if (lVar3 != 0) {
    FUN_00d0f740(1,lVar3 + 8);
  }
  plVar2 = *(long **)(param_1 + 0xb0);
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  *(long *)(param_1 + 0xb0) = lVar3;
  uVar5 = *(undefined8 *)(param_2 + 0xc0);
  uVar4 = *(undefined8 *)(param_2 + 0xb8);
  *(undefined1 *)(param_1 + 200) = *(undefined1 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xc0) = uVar5;
  *(undefined8 *)(param_1 + 0xb8) = uVar4;
  return param_1;
}


// ===== 007dc854  FUN_007dc854 =====

void FUN_007dc854(long param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0xb0);
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  FUN_007d9f60(param_1);
  return;
}


// ===== 007dc8a8  FUN_007dc8a8 =====

void FUN_007dc8a8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x78);
  if (((*(char *)(param_1 + 0x80) == '\x01') && (lVar1 == 0)) ||
     ((*(char *)(param_1 + 0x80) != '\0' && (lVar1 == 1)))) {
    *(int *)(param_1 + 0x88) = (int)lVar1;
    *(undefined1 *)(param_1 + 0x8c) = 1;
  }
  *(undefined8 *)(param_1 + 0x78) = param_2;
  *(undefined1 *)(param_1 + 0x80) = 1;
  return;
}


// ===== 007dc8e8  FUN_007dc8e8 =====

void FUN_007dc8e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d37f60;
  return;
}


// ===== 007dc8fc  FUN_007dc8fc =====

void FUN_007dc8fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d38028;
  return;
}


// ===== 007dc910  FUN_007dc910 =====

undefined8 FUN_007dc910(void)

{
  return 0;
}


// ===== 007dc91c  FUN_007dc91c =====

void FUN_007dc91c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x7dc924);
  (*pcVar1)();
}


// ===== 007dc924  FUN_007dc924 =====

void FUN_007dc924(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x18] = 0;
  return;
}


// ===== 007dc934  FUN_007dc934 =====

void FUN_007dc934(void)

{
  return;
}


// ===== 007dc93c  FUN_007dc93c =====

void FUN_007dc93c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x7dc944);
  (*pcVar1)();
}


// ===== 007dc944  FUN_007dc944 =====

undefined8 FUN_007dc944(void)

{
  return 0;
}


// ===== 007dc950  FUN_007dc950 =====

undefined8 FUN_007dc950(void)

{
  return 0;
}


// ===== 007dc95c  FUN_007dc95c =====

void FUN_007dc95c(void)

{
  return;
}


// ===== 007dc964  FUN_007dc964 =====

void FUN_007dc964(undefined8 *param_1)

{
  param_1[8] = 0;
  param_1[0xe] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  param_1[0x11] = 0xffffffff;
  return;
}


// ===== 007dc984  FUN_007dc984 =====

void FUN_007dc984(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[2] = 0;
  uVar1 = param_2[2];
  if (1 < uVar1) {
    if ((uVar1 & 1) == 0) {
      param_1[2] = uVar1;
      uVar3 = param_2[6];
      uVar2 = param_2[5];
      uVar5 = param_2[4];
      uVar4 = param_2[3];
      param_1[7] = param_2[7];
      param_1[6] = uVar3;
      param_1[5] = uVar2;
      param_1[4] = uVar5;
      param_1[3] = uVar4;
    }
    else {
      FUN_007ddc94();
    }
  }
  param_1[8] = 0;
  uVar1 = param_2[8];
  if (1 < uVar1) {
    if ((uVar1 & 1) == 0) {
      param_1[8] = uVar1;
      uVar3 = param_2[0xc];
      uVar2 = param_2[0xb];
      uVar5 = param_2[10];
      uVar4 = param_2[9];
      param_1[0xd] = param_2[0xd];
      param_1[0xc] = uVar3;
      param_1[0xb] = uVar2;
      param_1[10] = uVar5;
      param_1[9] = uVar4;
    }
    else {
      FUN_007ddd18();
    }
  }
  param_1[0xe] = 0;
  uVar1 = param_2[0xe];
  if (1 < uVar1) {
    if ((uVar1 & 1) == 0) {
      param_1[0xe] = uVar1;
      uVar2 = param_2[0xf];
      param_1[0x10] = param_2[0x10];
      param_1[0xf] = uVar2;
    }
    else {
      FUN_007ddda0();
    }
  }
  param_1[0x11] = param_2[0x11];
  return;
}


// ===== 007dca64  FUN_007dca64 =====

void FUN_007dca64(long param_1)

{
  byte bVar1;
  
  if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x40);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x78));
    bVar1 = *(byte *)(param_1 + 0x40);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x10);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x48));
    bVar1 = *(byte *)(param_1 + 0x10);
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007dcae0  FUN_007dcae0 =====

void FUN_007dcae0(undefined1 *param_1,undefined8 param_2)

{
  memcpy(param_1,&DAT_00214f18,0x7f0);
  *param_1 = 0;
  *(undefined2 *)(param_1 + 0xa7) = 1;
  param_1[0x90] = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x9f) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  param_1[0xb0] = 0;
  param_1[0xc0] = 0;
  *(undefined8 *)(param_1 + 0xce) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  param_1[0xd4] = 0xff;
  param_1[0xd8] = 0;
  param_1[0x11c] = 0;
  param_1[0x120] = 0;
  param_1[0x122] = 0;
  param_1[0x790] = 0;
  param_1[0x798] = 0;
  param_1[0x7b0] = 0;
  param_1[0x7b8] = 0;
  param_1[0x7e8] = 0;
  FUN_007dcb7c(param_1,param_2);
  return;
}


// ===== 007dcb7c  FUN_007dcb7c =====

void FUN_007dcb7c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulong __n;
  undefined1 uVar2;
  byte bVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  void *pvVar9;
  void *__dest;
  ulong extraout_x1;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 uStack_43;
  undefined1 uStack_42;
  undefined1 uStack_41;
  
  uVar5 = FUN_007de0cc(param_2);
  *(undefined4 *)(param_1 + 0x13) = uVar5;
  uVar4 = FUN_007de0e4(param_2);
  *(undefined2 *)((long)param_1 + 0x9c) = uVar4;
  uVar4 = FUN_007de0fc(param_2);
  *(undefined2 *)((long)param_1 + 0x9e) = uVar4;
  uVar5 = FUN_007de114(param_2);
  *(undefined4 *)(param_1 + 0x14) = uVar5;
  uVar2 = FUN_007de12c(param_2);
  *(undefined1 *)((long)param_1 + 0xa4) = uVar2;
  FUN_007de144(param_2);
  if ((extraout_x1 & 1) == 0) {
    if (*(char *)(param_1 + 0x12) == '\x01') {
      if ((*(byte *)(param_1 + 0xe) & 1) == 0) {
        if ((*(byte *)(param_1 + 8) & 1) != 0) goto LAB_007dce24;
LAB_007dccb4:
        bVar3 = *(byte *)(param_1 + 2);
      }
      else {
        operator_delete((void *)param_1[0xf]);
        if ((*(byte *)(param_1 + 8) & 1) == 0) goto LAB_007dccb4;
LAB_007dce24:
        operator_delete((void *)param_1[9]);
        bVar3 = *(byte *)(param_1 + 2);
      }
      if ((bVar3 & 1) != 0) {
        operator_delete((void *)param_1[3]);
      }
      *(undefined1 *)(param_1 + 0x12) = 0;
    }
  }
  else {
    FUN_007dd5f4(param_1);
    auVar12 = FUN_007de144(param_2);
    if ((auVar12 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_005dc08c();
    }
    if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
LAB_007dcf6c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                );
    }
    *param_1 = auVar12._0_8_;
    uVar5 = FUN_007de164(param_2);
    if ((*(byte *)(param_1 + 0x12) & 1) == 0) goto LAB_007dcf6c;
    *(undefined4 *)(param_1 + 1) = uVar5;
    uVar5 = FUN_007de17c(param_2);
    if ((*(byte *)(param_1 + 0x12) & 1) == 0) goto LAB_007dcf6c;
    *(undefined4 *)((long)param_1 + 0xc) = uVar5;
    lVar7 = FUN_007de194(param_2);
    auVar12 = FUN_007de194(param_2);
    FUN_007dde24(param_1 + 8,lVar7,(auVar12._0_8_ - lVar7) + auVar12._8_8_ * 8 >> 3);
    if ((*(byte *)(param_1 + 0x12) & 1) == 0) goto LAB_007dcf6c;
    lVar7 = FUN_007de1c8(param_2);
    auVar12 = FUN_007de1c8(param_2);
    FUN_0060adc4(param_1 + 2,lVar7,(auVar12._0_8_ - lVar7) + auVar12._8_8_ * 4 >> 2);
  }
  bVar3 = FUN_007de1fc(param_2);
  *(byte *)((long)param_1 + 0xa7) = bVar3 & 1;
  uVar2 = FUN_007de214(param_2);
  *(undefined1 *)(param_1 + 0x15) = uVar2;
  iVar6 = FUN_007de22c(param_2);
  *(int *)((long)param_1 + 0xac) = iVar6;
  if (iVar6 == 4) {
    puVar8 = (undefined8 *)FUN_007de244(param_2);
    if (*(char *)(puVar8 + 0xcd) != '\x03') goto LAB_007dcf94;
    bVar3 = *(byte *)(param_1 + 0xf2);
    uVar10 = *puVar8;
    puVar1 = param_1 + 0x25;
    if (bVar3 == 3) {
      *puVar1 = uVar10;
      if (puVar1 != puVar8) {
        FUN_007dda20(param_1 + 0x26,puVar8[1],puVar8[2],
                     ((long)(puVar8[2] - puVar8[1]) >> 2) * -0x5555555555555555);
      }
      *(undefined4 *)(param_1 + 0x29) = *(undefined4 *)(puVar8 + 4);
      return;
    }
    pvVar9 = (void *)puVar8[1];
    __n = puVar8[2] - (long)pvVar9;
    if (__n == 0) {
      lVar7 = 0;
      __dest = (void *)0x0;
    }
    else {
      if (0x1555555555555555 < (ulong)(((long)__n >> 2) * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
        FUN_007dd920();
      }
      __dest = operator_new(__n);
      lVar7 = (long)__dest + __n;
      memcpy(__dest,pvVar9,__n);
    }
    uVar5 = *(undefined4 *)(puVar8 + 4);
    if (bVar3 != 0xff) {
      (*(code *)(&PTR_FUN_00d380f8)[bVar3])(&uStack_41,param_1 + 0x25);
    }
    *(undefined1 *)(param_1 + 0xf2) = 0xff;
    if (puVar1 == (undefined8 *)0x0) goto LAB_007dcf80;
    uVar2 = 3;
    param_1[0x25] = uVar10;
    param_1[0x26] = __dest;
    param_1[0x27] = lVar7;
    param_1[0x28] = lVar7;
    *(undefined4 *)(param_1 + 0x29) = uVar5;
  }
  else if (iVar6 == 2) {
    pvVar9 = (void *)FUN_007de244(param_2);
    if (*(char *)((long)pvVar9 + 0x668) != '\x02') goto LAB_007dcf94;
    bVar3 = *(byte *)(param_1 + 0xf2);
    if (bVar3 != 0xff) {
      if (bVar3 == 2) {
        memcpy(param_1 + 0x25,pvVar9,0x668);
        return;
      }
      (*(code *)(&PTR_FUN_00d380f8)[bVar3])(&uStack_42,param_1 + 0x25);
    }
    *(undefined1 *)(param_1 + 0xf2) = 0xff;
    if (param_1 + 0x25 == (undefined8 *)0x0) goto LAB_007dcf80;
    memcpy(param_1 + 0x25,pvVar9,0x668);
    uVar2 = 2;
  }
  else {
    if (iVar6 != 1) {
      return;
    }
    puVar8 = (undefined8 *)FUN_007de244(param_2);
    if (*(char *)(puVar8 + 0xcd) != '\x01') {
LAB_007dcf94:
                    /* WARNING: Subroutine does not return */
      FUN_005ee558();
    }
    bVar3 = *(byte *)(param_1 + 0xf2);
    puVar1 = param_1 + 0x25;
    if (bVar3 != 0xff) {
      if (bVar3 == 1) {
        uVar11 = puVar8[1];
        uVar10 = *puVar8;
        *(undefined4 *)(param_1 + 0x27) = *(undefined4 *)(puVar8 + 2);
        param_1[0x26] = uVar11;
        *puVar1 = uVar10;
        return;
      }
      (*(code *)(&PTR_FUN_00d380f8)[bVar3])(&uStack_43,param_1 + 0x25);
    }
    *(undefined1 *)(param_1 + 0xf2) = 0xff;
    if (puVar1 == (undefined8 *)0x0) {
LAB_007dcf80:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    uVar11 = puVar8[1];
    uVar10 = *puVar8;
    *(undefined4 *)(param_1 + 0x27) = *(undefined4 *)(puVar8 + 2);
    uVar2 = 1;
    param_1[0x26] = uVar11;
    *puVar1 = uVar10;
  }
  *(undefined1 *)(param_1 + 0xf2) = uVar2;
  return;
}


// ===== 007dcfa0  FUN_007dcfa0 =====

void FUN_007dcfa0(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 0xa7) = 1;
  param_1[0x90] = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x9f) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  param_1[0xb0] = 0;
  param_1[0xc0] = 0;
  *(undefined8 *)(param_1 + 0xce) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  param_1[0xd4] = 0xff;
  param_1[0xd8] = 0;
  param_1[0x11c] = 0;
  param_1[0x120] = 0;
  param_1[0x122] = 0;
  param_1[0x790] = 0;
  param_1[0x798] = 0;
  param_1[0x7b0] = 0;
  param_1[0x7b8] = 0;
  param_1[0x7e8] = 0;
  return;
}


// ===== 007dd000  FUN_007dd000 =====

void FUN_007dd000(undefined1 *param_1,long param_2)

{
  undefined4 uVar1;
  byte bVar2;
  ulong __n;
  void *__dest;
  undefined8 uVar3;
  void *__src;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 *local_38;
  
  *param_1 = 0;
  param_1[0x90] = 0;
  if (*(char *)(param_2 + 0x90) == '\x01') {
    if (param_1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    FUN_007dc984(param_1,param_2);
    param_1[0x90] = 1;
  }
  uVar4 = *(undefined8 *)(param_2 + 0xa0);
  uVar3 = *(undefined8 *)(param_2 + 0x98);
  uVar6 = *(undefined8 *)(param_2 + 0xb0);
  uVar5 = *(undefined8 *)(param_2 + 0xa8);
  uVar8 = *(undefined8 *)(param_2 + 0xcd);
  uVar7 = *(undefined8 *)(param_2 + 0xc5);
  uVar10 = *(undefined8 *)(param_2 + 0xc0);
  uVar9 = *(undefined8 *)(param_2 + 0xb8);
  param_1[0xd8] = 0;
  *(undefined8 *)(param_1 + 0xcd) = uVar8;
  *(undefined8 *)(param_1 + 0xc5) = uVar7;
  *(undefined8 *)(param_1 + 0xb0) = uVar6;
  *(undefined8 *)(param_1 + 0xa8) = uVar5;
  *(undefined8 *)(param_1 + 0xc0) = uVar10;
  *(undefined8 *)(param_1 + 0xb8) = uVar9;
  *(undefined8 *)(param_1 + 0xa0) = uVar4;
  *(undefined8 *)(param_1 + 0x98) = uVar3;
  param_1[0x11c] = 0;
  if (*(char *)(param_2 + 0x11c) == '\x01') {
    FUN_00659adc(param_1 + 0xd8,param_2 + 0xd8);
    param_1[0x11c] = 1;
  }
  uVar1 = *(undefined4 *)(param_2 + 0x120);
  param_1[0x128] = 0;
  param_1[0x790] = 0xff;
  *(undefined4 *)(param_1 + 0x120) = uVar1;
  bVar2 = *(byte *)(param_2 + 0x790);
  if ((ulong)bVar2 != 0xff) {
    local_38 = param_1 + 0x128;
    (*(code *)(&PTR_FUN_00d38120)[bVar2])(&local_38,param_2 + 0x128);
    param_1[0x790] = bVar2;
  }
  uVar6 = *(undefined8 *)(param_2 + 0x7a0);
  uVar5 = *(undefined8 *)(param_2 + 0x798);
  uVar4 = *(undefined8 *)(param_2 + 0x7b0);
  uVar3 = *(undefined8 *)(param_2 + 0x7a8);
  param_1[0x7b8] = 0;
  param_1[0x7e8] = 0;
  *(undefined8 *)(param_1 + 0x7a0) = uVar6;
  *(undefined8 *)(param_1 + 0x798) = uVar5;
  *(undefined8 *)(param_1 + 0x7b0) = uVar4;
  *(undefined8 *)(param_1 + 0x7a8) = uVar3;
  if (*(char *)(param_2 + 0x7e8) == '\x01') {
    uVar3 = *(undefined8 *)(param_2 + 0x7c8);
    uVar5 = *(undefined8 *)(param_2 + 0x7c0);
    uVar4 = *(undefined8 *)(param_2 + 0x7b8);
    *(undefined8 *)(param_1 + 2000) = 0;
    *(undefined8 *)(param_1 + 0x7e0) = 0;
    *(undefined8 *)(param_1 + 0x7c8) = uVar3;
    *(undefined8 *)(param_1 + 0x7c0) = uVar5;
    *(undefined8 *)(param_1 + 0x7b8) = uVar4;
    *(undefined8 *)(param_1 + 0x7d8) = 0;
    __src = *(void **)(param_2 + 2000);
    __n = *(long *)(param_2 + 0x7d8) - (long)__src;
    if (__n != 0) {
      if ((long)__n < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_007dd938();
      }
      __dest = operator_new(__n);
      *(void **)(param_1 + 2000) = __dest;
      *(void **)(param_1 + 0x7d8) = __dest;
      *(ulong *)(param_1 + 0x7e0) = (long)__dest + __n;
      memcpy(__dest,__src,__n);
      *(ulong *)(param_1 + 0x7d8) = (long)__dest + __n;
    }
    param_1[0x7e8] = 1;
  }
  return;
}


// ===== 007dd190  FUN_007dd190 =====

void FUN_007dd190(long param_1)

{
  byte bVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 uStack_1;
  
  if ((*(char *)(param_1 + 0x7e8) == '\x01') &&
     (pvVar2 = *(void **)(param_1 + 2000), pvVar2 != (void *)0x0)) {
    pvVar3 = *(void **)(param_1 + 0x7d8);
    uVar5 = (ulong)((long)pvVar3 + (-8 - ((long)pvVar3 << 0x3d))) >> 3;
    uVar4 = (ulong)(((long)pvVar2 - (long)pvVar3 << 0x3d) - ((long)pvVar2 - (long)pvVar3)) >> 3;
    if (uVar5 <= uVar4) {
      uVar4 = uVar5;
    }
    if ((1 < uVar4) && ((((int)pvVar2 - (int)pvVar3 | -(int)pvVar3) & 7U) == 0)) {
      uVar4 = uVar4 & 0x1ffffffffffffffe;
      pvVar3 = (void *)((long)pvVar3 + uVar4 * -8);
      do {
        uVar4 = uVar4 - 2;
      } while (uVar4 != 0);
    }
    while (pvVar3 != pvVar2) {
      pvVar3 = (void *)((long)pvVar3 + -8);
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    *(void **)(param_1 + 0x7d8) = pvVar2;
    operator_delete(pvVar2);
  }
  if ((ulong)*(byte *)(param_1 + 0x790) != 0xff) {
    (*(code *)(&PTR_FUN_00d380f8)[*(byte *)(param_1 + 0x790)])(&uStack_1,param_1 + 0x128);
  }
  *(undefined1 *)(param_1 + 0x790) = 0xff;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 0x40);
    }
    else {
      operator_delete(*(void **)(param_1 + 0x78));
      bVar1 = *(byte *)(param_1 + 0x40);
    }
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 0x10);
    }
    else {
      operator_delete(*(void **)(param_1 + 0x48));
      bVar1 = *(byte *)(param_1 + 0x10);
    }
    if ((bVar1 & 1) != 0) {
      operator_delete(*(void **)(param_1 + 0x18));
    }
    return;
  }
  return;
}


// ===== 007dd2d8  FUN_007dd2d8 =====

void FUN_007dd2d8(void *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  void *__src;
  int iVar3;
  ulong __n;
  long lVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined1 uStack_13b1;
  undefined8 local_13b0;
  void *local_13a8;
  long local_13a0;
  long local_1398;
  undefined4 local_1390;
  byte local_d48;
  undefined8 auStack_d40 [205];
  byte local_6d8;
  undefined8 local_6d0;
  undefined8 uStack_6c8;
  undefined4 local_6c0;
  byte local_68;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  memset(param_1,0xaa,0x720);
  FUN_007de08c(param_1);
  FUN_007de0d8(param_1,*(undefined4 *)(param_2 + 0x13));
  FUN_007de0f0(param_1,*(undefined2 *)((long)param_2 + 0x9c));
  FUN_007de108(param_1,*(undefined2 *)((long)param_2 + 0x9e));
  FUN_007de120(param_1,*(undefined4 *)(param_2 + 0x14));
  FUN_007de138(param_1,*(undefined1 *)((long)param_2 + 0xa4));
  if (*(char *)(param_2 + 0x12) == '\x01') {
    FUN_007de154(param_1,*param_2,1);
    if ((*(byte *)(param_2 + 0x12) & 1) == 0) {
LAB_007dd5d4:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1054: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                );
    }
    FUN_007de170(param_1,*(undefined4 *)(param_2 + 1));
    if ((*(byte *)(param_2 + 0x12) & 1) == 0) goto LAB_007dd5d4;
    FUN_007de188(param_1,*(undefined4 *)((long)param_2 + 0xc));
    if ((*(byte *)(param_2 + 0x12) & 1) == 0) goto LAB_007dd5d4;
    puVar5 = param_2 + 9;
    if ((param_2[8] & 1) != 0) {
      puVar5 = (undefined8 *)param_2[9];
    }
    puVar2 = (undefined8 *)0x0;
    if ((ulong)param_2[8] >> 1 != 0) {
      puVar2 = puVar5;
    }
    FUN_007de1b8(param_1,puVar2);
    if ((*(byte *)(param_2 + 0x12) & 1) == 0) goto LAB_007dd5d4;
    puVar5 = param_2 + 3;
    if ((param_2[2] & 1) != 0) {
      puVar5 = (undefined8 *)param_2[3];
    }
    puVar2 = (undefined8 *)0x0;
    if ((ulong)param_2[2] >> 1 != 0) {
      puVar2 = puVar5;
    }
    FUN_007de1ec(param_1,puVar2);
  }
  FUN_007de208(param_1,*(undefined1 *)((long)param_2 + 0xa7));
  FUN_007de220(param_1,*(undefined1 *)(param_2 + 0x15));
  FUN_007de238(param_1,*(undefined4 *)((long)param_2 + 0xac));
  iVar3 = *(int *)((long)param_2 + 0xac);
  if (iVar3 == 4) {
    if (*(char *)(param_2 + 0xf2) != '\x03') {
LAB_007dd5ec:
                    /* WARNING: Subroutine does not return */
      FUN_005ee558();
    }
    local_13b0 = param_2[0x25];
    __src = (void *)param_2[0x26];
    local_13a0 = 0;
    local_1398 = 0;
    __n = param_2[0x27] - (long)__src;
    local_13a8 = (void *)0x0;
    if (__n != 0) {
      if (0x1555555555555555 < (ulong)(((long)__n >> 2) * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
        FUN_007dd920();
      }
      local_13a8 = operator_new(__n);
      lVar1 = (long)local_13a8 + __n;
      local_1398 = lVar1;
      memcpy(local_13a8,__src,__n);
      local_13a0 = lVar1;
    }
    local_1390 = *(undefined4 *)(param_2 + 0x29);
    local_d48 = 3;
    FUN_007de250(param_1,&local_13b0);
    if ((ulong)local_d48 == 0xff) goto LAB_007dd5a0;
    pcVar6 = (code *)(&PTR_FUN_00d38148)[local_d48];
    puVar5 = &local_13b0;
  }
  else if (iVar3 == 2) {
    if (*(char *)(param_2 + 0xf2) != '\x02') goto LAB_007dd5ec;
    memcpy(auStack_d40,param_2 + 0x25,0x668);
    local_6d8 = 2;
    FUN_007de250(param_1,auStack_d40);
    if ((ulong)local_6d8 == 0xff) goto LAB_007dd5a0;
    pcVar6 = (code *)(&PTR_FUN_00d38148)[local_6d8];
    puVar5 = auStack_d40;
  }
  else {
    if (iVar3 != 1) goto LAB_007dd5a0;
    if (*(char *)(param_2 + 0xf2) != '\x01') goto LAB_007dd5ec;
    local_6c0 = *(undefined4 *)(param_2 + 0x27);
    uStack_6c8 = param_2[0x26];
    local_6d0 = param_2[0x25];
    local_68 = 1;
    FUN_007de250(param_1,&local_6d0);
    if ((ulong)local_68 == 0xff) goto LAB_007dd5a0;
    pcVar6 = (code *)(&PTR_FUN_00d38148)[local_68];
    puVar5 = &local_6d0;
  }
  (*pcVar6)(&uStack_13b1,puVar5);
LAB_007dd5a0:
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007dd5f4  FUN_007dd5f4 =====

undefined8 * FUN_007dd5f4(undefined8 *param_1)

{
  byte bVar1;
  
  if (*(char *)(param_1 + 0x12) != '\x01') goto LAB_007dd63c;
  if ((*(byte *)(param_1 + 0xe) & 1) == 0) {
    if ((*(byte *)(param_1 + 8) & 1) == 0) goto LAB_007dd624;
LAB_007dd688:
    operator_delete((void *)param_1[9]);
    bVar1 = *(byte *)(param_1 + 2);
  }
  else {
    operator_delete((void *)param_1[0xf]);
    if ((*(byte *)(param_1 + 8) & 1) != 0) goto LAB_007dd688;
LAB_007dd624:
    bVar1 = *(byte *)(param_1 + 2);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  *(undefined1 *)(param_1 + 0x12) = 0;
LAB_007dd63c:
  if (param_1 != (undefined8 *)0x0) {
    param_1[8] = 0;
    param_1[0x11] = 0xffffffff;
    param_1[0xe] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    *(undefined1 *)(param_1 + 0x12) = 1;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 007dd6b4  FUN_007dd6b4 =====

void FUN_007dd6b4(void)

{
  return;
}


// ===== 007dd6bc  FUN_007dd6bc =====

void FUN_007dd6bc(void)

{
  return;
}


// ===== 007dd6c4  FUN_007dd6c4 =====

void FUN_007dd6c4(void)

{
  return;
}


// ===== 007dd6cc  FUN_007dd6cc =====

void FUN_007dd6cc(undefined8 param_1,long param_2)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = *(void **)(param_2 + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  pvVar2 = *(void **)(param_2 + 0x10);
  uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2) * 0x1555555555555555) >> 2;
  uVar4 = (long)pvVar2 * -0x1555555555555555 - 4U >> 2;
  if (uVar4 <= uVar3) {
    uVar3 = uVar4;
  }
  if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 3U) == 0)) {
    uVar3 = uVar3 & 0x3ffffffffffffffe;
    pvVar2 = (void *)((long)pvVar2 + uVar3 * -0xc);
    do {
      uVar3 = uVar3 - 2;
    } while (uVar3 != 0);
  }
  do {
    if (pvVar2 == pvVar1) {
      *(void **)(param_2 + 0x10) = pvVar1;
      operator_delete(pvVar1);
      return;
    }
    pvVar2 = (void *)((long)pvVar2 + -0xc);
  } while (pvVar2 != (void *)0x0);
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 007dd784  FUN_007dd784 =====

void FUN_007dd784(void)

{
  return;
}


// ===== 007dd78c  FUN_007dd78c =====

void FUN_007dd78c(long *param_1)

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


// ===== 007dd7bc  FUN_007dd7bc =====

void FUN_007dd7bc(long *param_1,undefined8 *param_2)

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


// ===== 007dd7fc  FUN_007dd7fc =====

void FUN_007dd7fc(undefined8 *param_1,void *param_2)

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


// ===== 007dd830  FUN_007dd830 =====

void FUN_007dd830(undefined8 *param_1,undefined8 *param_2)

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


// ===== 007dd8e8  FUN_007dd8e8 =====

void FUN_007dd8e8(undefined8 *param_1,undefined2 *param_2)

{
  if ((undefined2 *)*param_1 != (undefined2 *)0x0) {
    *(undefined2 *)*param_1 = *param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 007dd920  FUN_007dd920 =====

void FUN_007dd920(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 007dd938  FUN_007dd938 =====

void FUN_007dd938(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 007dd950  FUN_007dd950 =====

void FUN_007dd950(void)

{
  return;
}


// ===== 007dd958  FUN_007dd958 =====

void FUN_007dd958(void)

{
  return;
}


// ===== 007dd960  FUN_007dd960 =====

void FUN_007dd960(void)

{
  return;
}


// ===== 007dd968  FUN_007dd968 =====

void FUN_007dd968(undefined8 param_1,long param_2)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = *(void **)(param_2 + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  pvVar2 = *(void **)(param_2 + 0x10);
  uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2) * 0x1555555555555555) >> 2;
  uVar4 = (long)pvVar2 * -0x1555555555555555 - 4U >> 2;
  if (uVar4 <= uVar3) {
    uVar3 = uVar4;
  }
  if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 3U) == 0)) {
    uVar3 = uVar3 & 0x3ffffffffffffffe;
    pvVar2 = (void *)((long)pvVar2 + uVar3 * -0xc);
    do {
      uVar3 = uVar3 - 2;
    } while (uVar3 != 0);
  }
  do {
    if (pvVar2 == pvVar1) {
      *(void **)(param_2 + 0x10) = pvVar1;
      operator_delete(pvVar1);
      return;
    }
    pvVar2 = (void *)((long)pvVar2 + -0xc);
  } while (pvVar2 != (void *)0x0);
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 007dda20  FUN_007dda20 =====

void FUN_007dda20(undefined8 *param_1,void *param_2,long param_3,ulong param_4)

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
  if ((ulong)((lVar2 - (long)pvVar6 >> 2) * -0x5555555555555555) < param_4) {
    if (pvVar6 == (void *)0x0) {
LAB_007ddbfc:
      if (param_4 < 0x1555555555555556) {
        uVar4 = (lVar2 >> 2) * 0x5555555555555556;
        if (uVar4 < param_4 || uVar4 - param_4 == 0) {
          uVar4 = param_4;
        }
        if (0xaaaaaaaaaaaaaa9 < (ulong)((lVar2 >> 2) * -0x5555555555555555)) {
          uVar4 = 0x1555555555555555;
        }
        if (uVar4 < 0x1555555555555556) {
          pvVar6 = operator_new(uVar4 * 0xc);
          *param_1 = pvVar6;
          param_1[1] = pvVar6;
          param_1[2] = (void *)((long)pvVar6 + uVar4 * 0xc);
          memcpy(pvVar6,param_2,param_3 - (long)param_2);
          lVar2 = (long)pvVar6 + (param_3 - (long)param_2);
          goto LAB_007ddc6c;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_007dd920();
    }
    pvVar3 = (void *)param_1[1];
    uVar5 = (long)pvVar3 * -0x1555555555555555 - 4U >> 2;
    uVar4 = (ulong)(((long)pvVar6 - (long)pvVar3) * 0x1555555555555555) >> 2;
    if (uVar5 <= uVar4) {
      uVar4 = uVar5;
    }
    if ((1 < uVar4) && ((((int)pvVar6 - (int)pvVar3 | -(int)pvVar3) & 3U) == 0)) {
      uVar4 = uVar4 & 0x3ffffffffffffffe;
      pvVar3 = (void *)((long)pvVar3 + uVar4 * -0xc);
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
        goto LAB_007ddbfc;
      }
      pvVar3 = (void *)((long)pvVar3 + -0xc);
    } while (pvVar3 != (void *)0x0);
  }
  else {
    __n = param_1[1] - (long)pvVar6;
    if ((ulong)(((long)__n >> 2) * -0x5555555555555555) < param_4) {
      memmove(pvVar6,param_2,__n);
      pvVar6 = (void *)param_1[1];
      __n_00 = param_3 - (long)((long)param_2 + __n);
      memmove(pvVar6,(void *)((long)param_2 + __n),__n_00);
      lVar2 = (long)pvVar6 + __n_00;
LAB_007ddc6c:
      param_1[1] = lVar2;
      return;
    }
    memmove(pvVar6,param_2,param_3 - (long)param_2);
    lVar2 = param_1[1];
    uVar4 = (ulong)(((long)pvVar6 + (param_3 - (lVar2 + (long)param_2))) * 0x1555555555555555) >> 2;
    uVar5 = lVar2 * -0x1555555555555555 - 4U >> 2;
    if (uVar5 <= uVar4) {
      uVar4 = uVar5;
    }
    lVar1 = (long)pvVar6 + (param_3 - (long)param_2);
    if ((1 < uVar4) &&
       (((((int)pvVar6 + (int)param_3) - ((int)lVar2 + (int)param_2) | -(int)lVar2) & 3U) == 0)) {
      uVar4 = uVar4 & 0x3ffffffffffffffe;
      lVar2 = lVar2 + uVar4 * -0xc;
      do {
        uVar4 = uVar4 - 2;
      } while (uVar4 != 0);
    }
    do {
      if (lVar2 == lVar1) {
        param_1[1] = lVar1;
        return;
      }
      lVar2 = lVar2 + -0xc;
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 007ddc94  FUN_007ddc94 =====

void FUN_007ddc94(ulong *param_1,ulong *param_2)

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
    pcVar1 = (code *)SoftwareBreakpoint(1,0x7ddd14);
    (*pcVar1)();
  }
  if ((uVar2 & 1) == 0) {
    __dest = param_1 + 1;
    __src = param_2 + 1;
  }
  else {
    if ((long)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    uVar2 = uVar3;
    if (uVar3 < 0x15) {
      uVar2 = 0x14;
    }
    __dest = (ulong *)operator_new(uVar2 << 2);
    param_1[1] = (ulong)__dest;
    param_1[2] = uVar2;
    __src = (ulong *)param_2[1];
  }
  memcpy(__dest,__src,uVar3 << 2);
  *param_1 = *param_2;
  return;
}


// ===== 007ddd18  FUN_007ddd18 =====

void FUN_007ddd18(ulong *param_1,ulong *param_2)

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
    pcVar1 = (code *)SoftwareBreakpoint(1,0x7ddd9c);
    (*pcVar1)();
  }
  if ((uVar2 & 1) == 0) {
    __dest = param_1 + 1;
    __src = param_2 + 1;
  }
  else {
    if (uVar2 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    uVar2 = uVar3;
    if (uVar3 < 0xb) {
      uVar2 = 10;
    }
    __dest = (ulong *)operator_new(uVar2 << 3);
    param_1[1] = (ulong)__dest;
    param_1[2] = uVar2;
    __src = (ulong *)param_2[1];
  }
  memcpy(__dest,__src,uVar3 << 3);
  *param_1 = *param_2;
  return;
}


// ===== 007ddda0  FUN_007ddda0 =====

void FUN_007ddda0(ulong *param_1,ulong *param_2)

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
    pcVar1 = (code *)SoftwareBreakpoint(1,0x7dde20);
    (*pcVar1)();
  }
  if ((uVar2 & 1) == 0) {
    __dest = param_1 + 1;
    __src = param_2 + 1;
  }
  else {
    if ((long)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    uVar2 = uVar3;
    if (uVar3 < 9) {
      uVar2 = 8;
    }
    __dest = (ulong *)operator_new(uVar2 << 2);
    param_1[1] = (ulong)__dest;
    param_1[2] = uVar2;
    __src = (ulong *)param_2[1];
  }
  memcpy(__dest,__src,uVar3 << 2);
  *param_1 = *param_2;
  return;
}


// ===== 007dde24  FUN_007dde24 =====

void FUN_007dde24(ulong *param_1,ulong *param_2,ulong param_3)

{
  ulong *puVar1;
  bool bVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  
  puVar8 = param_1 + 1;
  if ((*param_1 & 1) == 0) {
    uVar6 = 5;
    if (5 < param_3) goto LAB_007ddeb4;
LAB_007dde60:
    uVar7 = *param_1 >> 1;
    puVar3 = puVar8 + uVar7;
    bVar2 = uVar7 <= param_3;
    uVar6 = param_3;
    if (bVar2) {
      uVar6 = uVar7;
    }
    uVar4 = 0;
    if (bVar2) {
      uVar4 = param_3 - uVar7;
    }
    if (!bVar2 || param_3 - uVar7 == 0) {
      puVar3 = (ulong *)0x0;
    }
    if (uVar6 != 0) {
      if (uVar6 < 0x18) {
LAB_007dde88:
        uVar13 = 0;
      }
      else {
        uVar10 = uVar6 - 1;
        if ((((puVar8 + uVar10 < puVar8) || (param_2 + uVar10 < param_2)) || (uVar10 >> 0x3d != 0))
           || ((ulong)((long)puVar8 - (long)param_2) < 0x20)) goto LAB_007dde88;
        uVar13 = uVar6 & 0x3ffffffffffffffc;
        puVar12 = param_2 + 2;
        puVar11 = puVar8 + 2;
        param_2 = param_2 + uVar13;
        uVar10 = uVar6 & 0x3ffffffffffffffc;
        do {
          puVar1 = puVar12 + -1;
          uVar14 = puVar12[-2];
          uVar16 = puVar12[1];
          uVar15 = *puVar12;
          uVar10 = uVar10 - 4;
          puVar12 = puVar12 + 4;
          puVar11[-1] = *puVar1;
          puVar11[-2] = uVar14;
          puVar11[1] = uVar16;
          *puVar11 = uVar15;
          puVar11 = puVar11 + 4;
        } while (uVar10 != 0);
        if (uVar6 == uVar13) goto LAB_007ddee0;
      }
      lVar9 = uVar6 - uVar13;
      puVar8 = puVar8 + uVar13;
      puVar12 = param_2;
      do {
        param_2 = puVar12 + 1;
        lVar9 = lVar9 + -1;
        *puVar8 = *puVar12;
        puVar8 = puVar8 + 1;
        puVar12 = param_2;
      } while (lVar9 != 0);
    }
LAB_007ddee0:
    if (param_3 <= uVar7) {
      uVar7 = *param_1;
      goto LAB_007ddfe4;
    }
    uVar6 = 0;
    puVar8 = (ulong *)0x0;
  }
  else {
    puVar8 = (ulong *)param_1[1];
    uVar6 = param_1[2];
    if (param_3 <= uVar6) goto LAB_007dde60;
LAB_007ddeb4:
    uVar6 = uVar6 * 2;
    if (uVar6 < param_3 || uVar6 - param_3 == 0) {
      uVar6 = param_3;
    }
    if (uVar6 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    puVar3 = (ulong *)operator_new(uVar6 << 3);
    uVar4 = param_3;
    puVar8 = puVar3;
  }
  uVar10 = uVar4 - 1;
  uVar7 = (ulong)-(long)puVar3 >> 3;
  if (uVar10 <= (ulong)-(long)puVar3 >> 3) {
    uVar7 = uVar10;
  }
  if (uVar7 < 0x1e) {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    uVar13 = (ulong)-(long)puVar3 >> 3;
    if (uVar10 <= uVar13) {
      uVar13 = uVar10;
    }
    if ((((-(long)puVar3 & 7U) == 0) && (puVar3 <= puVar3 + uVar13)) &&
       ((param_2 <= param_2 + uVar13 && (0x1f < (ulong)((long)puVar3 - (long)param_2))))) {
      puVar12 = puVar3 + 2;
      uVar10 = uVar7 + 1 & 3;
      uVar13 = 4;
      if (uVar10 != 0) {
        uVar13 = uVar10;
      }
      puVar11 = param_2 + 2;
      lVar9 = (uVar7 + 1) - uVar13;
      param_2 = param_2 + lVar9;
      lVar5 = lVar9;
      do {
        puVar1 = puVar11 + -1;
        uVar7 = puVar11[-2];
        uVar13 = puVar11[1];
        uVar10 = *puVar11;
        lVar5 = lVar5 + -4;
        puVar11 = puVar11 + 4;
        puVar12[-1] = *puVar1;
        puVar12[-2] = uVar7;
        puVar12[1] = uVar13;
        *puVar12 = uVar10;
        puVar12 = puVar12 + 4;
      } while (lVar5 != 0);
    }
  }
  lVar5 = uVar4 - lVar9;
  puVar3 = puVar3 + lVar9;
  do {
    if (puVar3 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    lVar5 = lVar5 + -1;
    *puVar3 = *param_2;
    puVar3 = puVar3 + 1;
    param_2 = param_2 + 1;
  } while (lVar5 != 0);
  uVar7 = *param_1;
  if (puVar8 != (ulong *)0x0) {
    if ((uVar7 & 1) != 0) {
      operator_delete((void *)param_1[1]);
      uVar7 = *param_1;
    }
    uVar7 = uVar7 | 1;
    param_1[1] = (ulong)puVar8;
    param_1[2] = uVar6;
  }
LAB_007ddfe4:
  *param_1 = uVar7 & 1 | param_3 << 1;
  return;
}


// ===== 007de08c  FUN_007de08c =====

void FUN_007de08c(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[0xb] = 0;
  *param_1 = 0;
  *(undefined8 *)((long)param_1 + 5) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 0x11) = 1;
  *(undefined4 *)((long)param_1 + 0x8c) = 0;
  *(undefined1 *)(param_1 + 0xdf) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  param_1[0xe1] = 0;
  param_1[0xe3] = 0;
  param_1[0xe2] = 0;
  return;
}


// ===== 007de0cc  FUN_007de0cc =====

undefined4 FUN_007de0cc(undefined4 *param_1)

{
  return *param_1;
}


// ===== 007de0d8  FUN_007de0d8 =====

void FUN_007de0d8(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}


// ===== 007de0e4  FUN_007de0e4 =====

undefined2 FUN_007de0e4(long param_1)

{
  return *(undefined2 *)(param_1 + 4);
}


// ===== 007de0f0  FUN_007de0f0 =====

void FUN_007de0f0(long param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 4) = param_2;
  return;
}


// ===== 007de0fc  FUN_007de0fc =====

undefined2 FUN_007de0fc(long param_1)

{
  return *(undefined2 *)(param_1 + 6);
}


// ===== 007de108  FUN_007de108 =====

void FUN_007de108(long param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 6) = param_2;
  return;
}


// ===== 007de114  FUN_007de114 =====

undefined4 FUN_007de114(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


// ===== 007de120  FUN_007de120 =====

void FUN_007de120(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}


