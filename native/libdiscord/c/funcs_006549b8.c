// ===== 006549b8  FUN_006549b8 =====

void FUN_006549b8(ulong *param_1,uint param_2)

{
  ulong uVar1;
  
  uVar1 = 0x200000000000;
  if ((param_2 & 1) == 0) {
    uVar1 = 0;
  }
  *param_1 = *param_1 & 0xffffdfffffffffff | uVar1;
  return;
}


// ===== 006549dc  FUN_006549dc =====

void FUN_006549dc(ulong *param_1,uint param_2)

{
  ulong uVar1;
  
  uVar1 = 0x400000000000;
  if ((param_2 & 1) == 0) {
    uVar1 = 0;
  }
  *param_1 = *param_1 & 0xffffbfffffffffff | uVar1;
  return;
}


// ===== 00654a00  FUN_00654a00 =====

void FUN_00654a00(ulong *param_1,uint param_2)

{
  ulong uVar1;
  
  uVar1 = 0x800000000000;
  if ((param_2 & 1) == 0) {
    uVar1 = 0;
  }
  *param_1 = *param_1 & 0xffff7fffffffffff | uVar1;
  return;
}


// ===== 00654a24  FUN_00654a24 =====

void FUN_00654a24(ulong *param_1,uint param_2)

{
  ulong uVar1;
  
  uVar1 = 0x1000000000000;
  if ((param_2 & 1) == 0) {
    uVar1 = 0;
  }
  *param_1 = *param_1 & 0xfffeffffffffffff | uVar1;
  return;
}


// ===== 00654a48  FUN_00654a48 =====

void FUN_00654a48(ulong *param_1,uint param_2)

{
  ulong uVar1;
  
  uVar1 = 0x2000000000000;
  if ((param_2 & 1) == 0) {
    uVar1 = 0;
  }
  *param_1 = *param_1 & 0xfffdffffffffffff | uVar1;
  return;
}


// ===== 00654a6c  FUN_00654a6c =====

void FUN_00654a6c(ulong *param_1,uint param_2)

{
  ulong uVar1;
  
  uVar1 = 0x4000000000000;
  if ((param_2 & 1) == 0) {
    uVar1 = 0;
  }
  *param_1 = *param_1 & 0xfffbffffffffffff | uVar1;
  return;
}


// ===== 00654a90  FUN_00654a90 =====

void FUN_00654a90(ulong *param_1,uint param_2)

{
  ulong uVar1;
  
  uVar1 = 0x8000000000000;
  if ((param_2 & 1) == 0) {
    uVar1 = 0;
  }
  *param_1 = *param_1 & 0xfff7ffffffffffff | uVar1;
  return;
}


// ===== 00654ab4  FUN_00654ab4 =====

void FUN_00654ab4(ulong *param_1,uint param_2)

{
  ulong uVar1;
  
  uVar1 = 0x10000000000000;
  if ((param_2 & 1) == 0) {
    uVar1 = 0;
  }
  *param_1 = *param_1 & 0xffefffffffffffff | uVar1;
  return;
}


// ===== 00654ad8  FUN_00654ad8 =====

void FUN_00654ad8(ulong *param_1,uint param_2)

{
  ulong uVar1;
  
  uVar1 = 0x20000000000000;
  if ((param_2 & 1) == 0) {
    uVar1 = 0;
  }
  *param_1 = *param_1 & 0xffdfffffffffffff | uVar1;
  return;
}


// ===== 00654afc  FUN_00654afc =====

bool FUN_00654afc(uint param_1,uint param_2,uint param_3,uint param_4)

{
  if ((param_1 != 0) && ((param_3 & param_1) == param_1)) {
    return true;
  }
  return (param_2 & (param_4 ^ 0xffffffff)) == 0 && param_2 != 0;
}


// ===== 00654b28  FUN_00654b28 =====

undefined1  [16] FUN_00654b28(void)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined8 local_18;
  
  uVar3 = getauxval(0x10);
  if (uVar3 == 0) {
    iVar1 = FUN_00653944("/proc/self/auxv");
    if (iVar1 < 0) {
      uVar3 = 0;
    }
    else {
      local_18 = &DAT_aaaaaaaaaaaaaaaa;
      do {
        iVar2 = FUN_0065399c(iVar1,&local_18,8);
        if (iVar2 < 1) {
LAB_00654b98:
          uVar5 = 0;
          break;
        }
        if ((int)local_18 == 0 && local_18._4_4_ == 0) goto LAB_00654b98;
        uVar5 = local_18._4_4_;
      } while ((int)local_18 != 0x10);
      close(iVar1);
      uVar3 = (ulong)uVar5;
    }
  }
  uVar4 = getauxval(0x1a);
  if (uVar4 == 0) {
    iVar1 = FUN_00653944("/proc/self/auxv",0);
    if (iVar1 < 0) {
      uVar4 = 0;
    }
    else {
      local_18 = &DAT_aaaaaaaaaaaaaaaa;
      do {
        iVar2 = FUN_0065399c(iVar1,&local_18,8);
        if (iVar2 < 1) {
LAB_00654c0c:
          uVar5 = 0;
          break;
        }
        if ((int)local_18 == 0 && local_18._4_4_ == 0) goto LAB_00654c0c;
        uVar5 = local_18._4_4_;
      } while ((int)local_18 != 0x1a);
      close(iVar1);
      uVar4 = (ulong)uVar5;
    }
  }
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = uVar3;
  return auVar6;
}


// ===== 00654c3c  FUN_00654c3c =====

void FUN_00654c3c(short *param_1,ulong param_2,short *param_3,short param_4)

{
  short *psVar1;
  ushort *puVar2;
  uint uVar3;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  short *psVar9;
  short *psVar10;
  short sVar11;
  short *psVar12;
  short *psVar13;
  short *psVar14;
  short *psVar15;
  short *psVar16;
  short *psVar17;
  short *psVar18;
  ushort *puVar19;
  ushort *puVar20;
  ushort *puVar21;
  ushort *puVar22;
  ushort *puVar23;
  ushort *puVar24;
  ushort *puVar25;
  ushort uVar26;
  ushort *puVar27;
  ushort *puVar28;
  ushort *puVar29;
  ushort *puVar30;
  ushort *puVar31;
  ushort *puVar32;
  ushort *puVar33;
  bool bVar34;
  long lVar35;
  short *psVar36;
  ushort *puVar37;
  short *psVar38;
  ulong uVar39;
  ulong uVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined8 uVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  
  uVar3 = (uint)param_4;
  if ((int)uVar3 < 1) {
    if (param_2 == 0) {
      return;
    }
    uVar3 = -uVar3;
    if ((((3 < param_2) && (lVar35 = param_2 - 1, param_1 <= param_1 + lVar35)) &&
        (param_3 <= param_3 + lVar35)) &&
       ((-1 < lVar35 && (0x1f < (ulong)((long)param_1 - (long)param_3))))) {
      auVar42._4_4_ = uVar3;
      auVar42._0_4_ = uVar3;
      auVar42._8_4_ = uVar3;
      auVar42._12_4_ = uVar3;
      if (param_2 < 0x10) {
        uVar39 = 0;
      }
      else {
        uVar39 = param_2 & 0xfffffffffffffff0;
        puVar37 = (ushort *)(param_3 + 8);
        psVar36 = param_1 + 8;
        uVar40 = param_2 & 0xfffffffffffffff0;
        do {
          puVar2 = puVar37 + -8;
          puVar19 = puVar37 + -7;
          puVar20 = puVar37 + -6;
          puVar21 = puVar37 + -5;
          puVar22 = puVar37 + -4;
          puVar23 = puVar37 + -3;
          puVar24 = puVar37 + -2;
          puVar25 = puVar37 + -1;
          uVar26 = *puVar37;
          puVar27 = puVar37 + 1;
          puVar28 = puVar37 + 2;
          puVar29 = puVar37 + 3;
          puVar30 = puVar37 + 4;
          puVar31 = puVar37 + 5;
          puVar32 = puVar37 + 6;
          puVar33 = puVar37 + 7;
          uVar40 = uVar40 - 0x10;
          puVar37 = puVar37 + 0x10;
          auVar51._2_2_ = 0;
          auVar51._0_2_ = *puVar2;
          auVar51._4_2_ = *puVar19;
          auVar51._6_2_ = 0;
          auVar51._8_2_ = *puVar20;
          auVar51._10_2_ = 0;
          auVar51._12_2_ = *puVar21;
          auVar51._14_2_ = 0;
          auVar45._2_2_ = 0;
          auVar45._0_2_ = *puVar22;
          auVar45._4_2_ = *puVar23;
          auVar45._6_2_ = 0;
          auVar45._8_2_ = *puVar24;
          auVar45._10_2_ = 0;
          auVar45._12_2_ = *puVar25;
          auVar45._14_2_ = 0;
          auVar53._2_2_ = 0;
          auVar53._0_2_ = uVar26;
          auVar53._4_2_ = *puVar27;
          auVar53._6_2_ = 0;
          auVar53._8_2_ = *puVar28;
          auVar53._10_2_ = 0;
          auVar53._12_2_ = *puVar29;
          auVar53._14_2_ = 0;
          auVar49._2_2_ = 0;
          auVar49._0_2_ = *puVar30;
          auVar49._4_2_ = *puVar31;
          auVar49._6_2_ = 0;
          auVar49._8_2_ = *puVar32;
          auVar49._10_2_ = 0;
          auVar49._12_2_ = *puVar33;
          auVar49._14_2_ = 0;
          auVar45 = NEON_ushl(auVar45,auVar42,4);
          auVar51 = NEON_ushl(auVar51,auVar42,4);
          auVar53 = NEON_ushl(auVar53,auVar42,4);
          auVar49 = NEON_ushl(auVar49,auVar42,4);
          *psVar36 = auVar45._0_2_;
          psVar36[1] = auVar45._4_2_;
          psVar36[2] = auVar45._8_2_;
          psVar36[3] = auVar45._12_2_;
          psVar36[-8] = auVar51._0_2_;
          psVar36[-7] = auVar51._4_2_;
          psVar36[-6] = auVar51._8_2_;
          psVar36[-5] = auVar51._12_2_;
          psVar36[8] = auVar49._0_2_;
          psVar36[9] = auVar49._4_2_;
          psVar36[10] = auVar49._8_2_;
          psVar36[0xb] = auVar49._12_2_;
          *psVar36 = auVar53._0_2_;
          psVar36[1] = auVar53._4_2_;
          psVar36[2] = auVar53._8_2_;
          psVar36[3] = auVar53._12_2_;
          psVar36 = psVar36 + 0x10;
        } while (uVar40 != 0);
        if (param_2 == uVar39) {
          return;
        }
        if ((param_2 & 0xc) == 0) {
          param_2 = param_2 & 0xf;
          param_1 = param_1 + uVar39;
          param_3 = param_3 + uVar39;
          goto LAB_00654c98;
        }
      }
      uVar40 = param_2 & 0xfffffffffffffffc;
      lVar35 = uVar39 - uVar40;
      psVar36 = param_3 + uVar39;
      psVar38 = param_1 + uVar39;
      param_1 = param_1 + uVar40;
      param_3 = param_3 + uVar40;
      do {
        uVar43 = *(undefined8 *)psVar36;
        lVar35 = lVar35 + 4;
        auVar46._2_2_ = 0;
        auVar46._0_2_ = (ushort)uVar43;
        auVar46._4_2_ = (short)((ulong)uVar43 >> 0x10);
        auVar46._6_2_ = 0;
        auVar46._8_2_ = (short)((ulong)uVar43 >> 0x20);
        auVar46._10_2_ = 0;
        auVar46._12_2_ = (short)((ulong)uVar43 >> 0x30);
        auVar46._14_2_ = 0;
        auVar45 = NEON_ushl(auVar46,auVar42,4);
        *(ulong *)psVar38 =
             CONCAT26(auVar45._12_2_,CONCAT24(auVar45._8_2_,CONCAT22(auVar45._4_2_,auVar45._0_2_)));
        psVar36 = psVar36 + 4;
        psVar38 = psVar38 + 4;
      } while (lVar35 != 0);
      bVar34 = param_2 == uVar40;
      param_2 = param_2 & 3;
      if (bVar34) {
        return;
      }
    }
LAB_00654c98:
    do {
      param_2 = param_2 - 1;
      *param_1 = *param_3 << (ulong)(uVar3 & 0x1f);
      param_1 = param_1 + 1;
      param_3 = param_3 + 1;
    } while (param_2 != 0);
    return;
  }
  if (param_2 == 0) {
    return;
  }
  if (((3 < param_2) && (lVar35 = param_2 - 1, param_1 <= param_1 + lVar35)) &&
     ((param_3 <= param_3 + lVar35 &&
      ((-1 < lVar35 && (0x1f < (ulong)((long)param_1 - (long)param_3))))))) {
    auVar41._4_4_ = uVar3;
    auVar41._0_4_ = uVar3;
    auVar41._8_4_ = uVar3;
    auVar41._12_4_ = uVar3;
    if (param_2 < 0x10) {
      uVar39 = 0;
    }
    else {
      auVar42 = NEON_neg(auVar41,4);
      uVar39 = param_2 & 0xfffffffffffffff0;
      psVar36 = param_3 + 8;
      psVar38 = param_1 + 8;
      uVar40 = param_2 & 0xfffffffffffffff0;
      do {
        psVar1 = psVar36 + -8;
        psVar4 = psVar36 + -7;
        psVar5 = psVar36 + -6;
        psVar6 = psVar36 + -5;
        psVar7 = psVar36 + -4;
        psVar8 = psVar36 + -3;
        psVar9 = psVar36 + -2;
        psVar10 = psVar36 + -1;
        sVar11 = *psVar36;
        psVar12 = psVar36 + 1;
        psVar13 = psVar36 + 2;
        psVar14 = psVar36 + 3;
        psVar15 = psVar36 + 4;
        psVar16 = psVar36 + 5;
        psVar17 = psVar36 + 6;
        psVar18 = psVar36 + 7;
        uVar40 = uVar40 - 0x10;
        psVar36 = psVar36 + 0x10;
        auVar50._0_4_ = (int)*psVar1;
        auVar50._4_4_ = (int)*psVar4;
        auVar50._8_4_ = (int)*psVar5;
        auVar50._12_4_ = (int)*psVar6;
        auVar47._0_4_ = (int)*psVar7;
        auVar47._4_4_ = (int)*psVar8;
        auVar47._8_4_ = (int)*psVar9;
        auVar47._12_4_ = (int)*psVar10;
        auVar52._0_4_ = (int)sVar11;
        auVar52._4_4_ = (int)*psVar12;
        auVar52._8_4_ = (int)*psVar13;
        auVar52._12_4_ = (int)*psVar14;
        auVar48._0_4_ = (int)*psVar15;
        auVar48._4_4_ = (int)*psVar16;
        auVar48._8_4_ = (int)*psVar17;
        auVar48._12_4_ = (int)*psVar18;
        auVar45 = NEON_sshl(auVar47,auVar42,4);
        auVar51 = NEON_sshl(auVar50,auVar42,4);
        auVar53 = NEON_sshl(auVar52,auVar42,4);
        auVar49 = NEON_sshl(auVar48,auVar42,4);
        *psVar38 = auVar45._0_2_;
        psVar38[1] = auVar45._4_2_;
        psVar38[2] = auVar45._8_2_;
        psVar38[3] = auVar45._12_2_;
        psVar38[-8] = auVar51._0_2_;
        psVar38[-7] = auVar51._4_2_;
        psVar38[-6] = auVar51._8_2_;
        psVar38[-5] = auVar51._12_2_;
        psVar38[8] = auVar49._0_2_;
        psVar38[9] = auVar49._4_2_;
        psVar38[10] = auVar49._8_2_;
        psVar38[0xb] = auVar49._12_2_;
        *psVar38 = auVar53._0_2_;
        psVar38[1] = auVar53._4_2_;
        psVar38[2] = auVar53._8_2_;
        psVar38[3] = auVar53._12_2_;
        psVar38 = psVar38 + 0x10;
      } while (uVar40 != 0);
      if (param_2 == uVar39) {
        return;
      }
      if ((param_2 & 0xc) == 0) {
        param_2 = param_2 & 0xf;
        param_1 = param_1 + uVar39;
        param_3 = param_3 + uVar39;
        goto LAB_00654c64;
      }
    }
    uVar40 = param_2 & 0xfffffffffffffffc;
    auVar42 = NEON_neg(auVar41,4);
    lVar35 = uVar39 - uVar40;
    psVar36 = param_3 + uVar39;
    psVar38 = param_1 + uVar39;
    param_1 = param_1 + uVar40;
    param_3 = param_3 + uVar40;
    do {
      uVar43 = *(undefined8 *)psVar36;
      lVar35 = lVar35 + 4;
      auVar44._0_4_ = (int)(short)uVar43;
      auVar44._4_4_ = (int)(short)((ulong)uVar43 >> 0x10);
      auVar44._8_4_ = (int)(short)((ulong)uVar43 >> 0x20);
      auVar44._12_4_ = (int)(short)((ulong)uVar43 >> 0x30);
      auVar45 = NEON_sshl(auVar44,auVar42,4);
      *(ulong *)psVar38 =
           CONCAT26(auVar45._12_2_,CONCAT24(auVar45._8_2_,CONCAT22(auVar45._4_2_,auVar45._0_2_)));
      psVar36 = psVar36 + 4;
      psVar38 = psVar38 + 4;
    } while (lVar35 != 0);
    bVar34 = param_2 == uVar40;
    param_2 = param_2 & 3;
    if (bVar34) {
      return;
    }
  }
LAB_00654c64:
  do {
    param_2 = param_2 - 1;
    *param_1 = (short)((int)*param_3 >> (uVar3 & 0x1f));
    param_1 = param_1 + 1;
    param_3 = param_3 + 1;
  } while (param_2 != 0);
  return;
}


// ===== 00654ec0  FUN_00654ec0 =====

void FUN_00654ec0(int *param_1,ulong param_2,int *param_3,uint param_4)

{
  int iVar1;
  bool bVar2;
  ulong uVar3;
  undefined1 (*pauVar4) [16];
  int *piVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  if ((int)param_4 < 0) {
    if (param_2 == 0) {
      return;
    }
    param_4 = -param_4;
    if (((((3 < param_2) && (uVar3 = param_2 - 1, param_1 <= (int *)((long)param_1 + uVar3 * 2))) &&
         (param_3 <= param_3 + uVar3)) && (uVar3 >> 0x3e == 0)) &&
       ((param_3 + param_2 <= param_1 || ((int *)((long)param_1 + param_2 * 2) <= param_3)))) {
      auVar9._4_4_ = param_4;
      auVar9._0_4_ = param_4;
      auVar9._8_4_ = param_4;
      auVar9._12_4_ = param_4;
      if (param_2 < 0x10) {
        uVar6 = 0;
      }
      else {
        uVar6 = param_2 & 0x7ffffffffffffff0;
        piVar5 = param_1 + 4;
        uVar3 = param_2 & 0x7ffffffffffffff0;
        pauVar4 = (undefined1 (*) [16])(param_3 + 8);
        do {
          uVar3 = uVar3 - 0x10;
          auVar11 = NEON_ushl(pauVar4[-2],auVar9,4);
          auVar14 = NEON_ushl(pauVar4[-1],auVar9,4);
          auVar12 = NEON_ushl(*pauVar4,auVar9,4);
          auVar16 = NEON_ushl(pauVar4[1],auVar9,4);
          auVar11._0_8_ = NEON_sqxtn(auVar11._0_8_,auVar11,4);
          auVar12._0_8_ = NEON_sqxtn(auVar12._0_8_,auVar12,4);
          auVar11 = NEON_sqxtn2(auVar11,auVar14,4);
          auVar12 = NEON_sqxtn2(auVar12,auVar16,4);
          *(long *)(piVar5 + -2) = auVar11._8_8_;
          *(long *)(piVar5 + -4) = auVar11._0_8_;
          *(long *)(piVar5 + 2) = auVar12._8_8_;
          *(long *)piVar5 = auVar12._0_8_;
          piVar5 = piVar5 + 8;
          pauVar4 = pauVar4 + 4;
        } while (uVar3 != 0);
        if (param_2 == uVar6) {
          return;
        }
        if ((param_2 & 0xc) == 0) {
          param_1 = (int *)((long)param_1 + uVar6 * 2);
          param_3 = param_3 + uVar6;
          param_2 = param_2 & 0xf;
          goto LAB_00654f34;
        }
      }
      uVar3 = param_2 & 0x7ffffffffffffffc;
      pauVar4 = (undefined1 (*) [16])(param_3 + uVar6);
      puVar8 = (undefined8 *)((long)param_1 + uVar6 * 2);
      param_1 = (int *)((long)param_1 + uVar3 * 2);
      param_3 = param_3 + uVar3;
      lVar7 = uVar6 - uVar3;
      do {
        lVar7 = lVar7 + 4;
        auVar11 = NEON_ushl(*pauVar4,auVar9,4);
        uVar10 = NEON_sqxtn(auVar11._0_8_,auVar11,4);
        *puVar8 = uVar10;
        pauVar4 = pauVar4 + 1;
        puVar8 = puVar8 + 1;
      } while (lVar7 != 0);
      bVar2 = param_2 == uVar3;
      param_2 = param_2 & 3;
      if (bVar2) {
        return;
      }
    }
LAB_00654f34:
    do {
      iVar1 = *param_3 << (ulong)(param_4 & 0x1f);
      if (iVar1 == -0x8000 || iVar1 + 0x8000 < 0 != SCARRY4(iVar1,0x8000)) {
        iVar1 = -0x8000;
      }
      if (0x7ffe < iVar1) {
        iVar1 = 0x7fff;
      }
      param_2 = param_2 - 1;
      *(short *)param_1 = (short)iVar1;
      param_1 = (int *)((long)param_1 + 2);
      param_3 = param_3 + 1;
    } while (param_2 != 0);
    return;
  }
  if (param_2 == 0) {
    return;
  }
  if ((((3 < param_2) && (uVar3 = param_2 - 1, param_1 <= (int *)((long)param_1 + uVar3 * 2))) &&
      ((param_3 <= param_3 + uVar3 && (uVar3 >> 0x3e == 0)))) &&
     ((param_3 + param_2 <= param_1 || ((int *)((long)param_1 + param_2 * 2) <= param_3)))) {
    auVar14._4_4_ = param_4;
    auVar14._0_4_ = param_4;
    auVar14._8_4_ = param_4;
    auVar14._12_4_ = param_4;
    if (param_2 < 0x10) {
      uVar6 = 0;
    }
    else {
      auVar9 = NEON_neg(auVar14,4);
      uVar6 = param_2 & 0x7ffffffffffffff0;
      piVar5 = param_1 + 4;
      uVar3 = param_2 & 0x7ffffffffffffff0;
      pauVar4 = (undefined1 (*) [16])(param_3 + 8);
      do {
        uVar3 = uVar3 - 0x10;
        auVar11 = NEON_sshl(pauVar4[-2],auVar9,4);
        auVar15 = NEON_sshl(pauVar4[-1],auVar9,4);
        auVar12 = NEON_sshl(*pauVar4,auVar9,4);
        auVar17 = NEON_sshl(pauVar4[1],auVar9,4);
        auVar16._8_8_ = auVar11._8_8_;
        auVar16._0_8_ = NEON_sqxtn(auVar11._0_8_,auVar11,4);
        auVar13._8_8_ = auVar12._8_8_;
        auVar13._0_8_ = NEON_sqxtn(auVar12._0_8_,auVar12,4);
        auVar11 = NEON_sqxtn2(auVar16,auVar15,4);
        auVar12 = NEON_sqxtn2(auVar13,auVar17,4);
        *(long *)(piVar5 + -2) = auVar11._8_8_;
        *(long *)(piVar5 + -4) = auVar11._0_8_;
        *(long *)(piVar5 + 2) = auVar12._8_8_;
        *(long *)piVar5 = auVar12._0_8_;
        piVar5 = piVar5 + 8;
        pauVar4 = pauVar4 + 4;
      } while (uVar3 != 0);
      if (param_2 == uVar6) {
        return;
      }
      if ((param_2 & 0xc) == 0) {
        param_1 = (int *)((long)param_1 + uVar6 * 2);
        param_3 = param_3 + uVar6;
        param_2 = param_2 & 0xf;
        goto LAB_00654ee8;
      }
    }
    uVar3 = param_2 & 0x7ffffffffffffffc;
    auVar9 = NEON_neg(auVar14,4);
    pauVar4 = (undefined1 (*) [16])(param_3 + uVar6);
    param_3 = param_3 + uVar3;
    lVar7 = uVar6 - uVar3;
    puVar8 = (undefined8 *)((long)param_1 + uVar6 * 2);
    do {
      lVar7 = lVar7 + 4;
      auVar11 = NEON_sshl(*pauVar4,auVar9,4);
      uVar10 = NEON_sqxtn(auVar11._0_8_,auVar11,4);
      *puVar8 = uVar10;
      pauVar4 = pauVar4 + 1;
      puVar8 = puVar8 + 1;
    } while (lVar7 != 0);
    bVar2 = param_2 == uVar3;
    param_1 = (int *)((long)param_1 + uVar3 * 2);
    param_2 = param_2 & 3;
    if (bVar2) {
      return;
    }
  }
LAB_00654ee8:
  do {
    iVar1 = *param_3 >> (param_4 & 0x1f);
    if (iVar1 == -0x8000 || iVar1 + 0x8000 < 0 != SCARRY4(iVar1,0x8000)) {
      iVar1 = -0x8000;
    }
    if (0x7ffe < iVar1) {
      iVar1 = 0x7fff;
    }
    param_2 = param_2 - 1;
    *(short *)param_1 = (short)iVar1;
    param_1 = (int *)((long)param_1 + 2);
    param_3 = param_3 + 1;
  } while (param_2 != 0);
  return;
}


// ===== 00655154  FUN_00655154 =====

void FUN_00655154(short *param_1,undefined2 *param_2,short param_3,ulong param_4,uint param_5)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  short *psVar7;
  short sVar8;
  short *psVar9;
  short *psVar10;
  short *psVar11;
  short *psVar12;
  short *psVar13;
  short *psVar14;
  short *psVar15;
  long lVar16;
  ulong uVar17;
  undefined2 *puVar18;
  short *psVar19;
  short *psVar20;
  ulong uVar21;
  undefined8 *puVar22;
  undefined1 auVar23 [16];
  undefined8 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  
  if (param_4 == 0) {
    return;
  }
  if ((((param_4 < 4) || (lVar16 = param_4 - 1, param_2 + lVar16 < param_2)) ||
      (param_1 + lVar16 < param_1)) ||
     ((lVar16 < 0 || ((ulong)((long)param_2 - (long)param_1) < 0x20)))) {
    uVar17 = 0;
    puVar18 = param_2;
    psVar19 = param_1;
  }
  else {
    auVar23._0_8_ = CONCAT44(param_5,param_5) & 0xffff0000ffff;
    auVar23._8_4_ = param_5 & 0xffff;
    auVar23._12_4_ = param_5 & 0xffff;
    if (param_4 < 0x10) {
      uVar21 = 0;
    }
    else {
      auVar25 = NEON_neg(auVar23,4);
      uVar17 = param_4 & 0xfffffffffffffff0;
      psVar19 = param_1 + 8;
      puVar18 = param_2 + 8;
      uVar21 = param_4 & 0xfffffffffffffff0;
      do {
        psVar20 = psVar19 + -8;
        psVar1 = psVar19 + -7;
        psVar2 = psVar19 + -6;
        psVar3 = psVar19 + -5;
        psVar4 = psVar19 + -4;
        psVar5 = psVar19 + -3;
        psVar6 = psVar19 + -2;
        psVar7 = psVar19 + -1;
        sVar8 = *psVar19;
        psVar9 = psVar19 + 1;
        psVar10 = psVar19 + 2;
        psVar11 = psVar19 + 3;
        psVar12 = psVar19 + 4;
        psVar13 = psVar19 + 5;
        psVar14 = psVar19 + 6;
        psVar15 = psVar19 + 7;
        uVar21 = uVar21 - 0x10;
        psVar19 = psVar19 + 0x10;
        auVar28._0_4_ = (int)param_3 * (int)*psVar20;
        auVar28._4_4_ = (int)param_3 * (int)*psVar1;
        auVar28._8_4_ = (int)param_3 * (int)*psVar2;
        auVar28._12_4_ = (int)param_3 * (int)*psVar3;
        auVar26._0_4_ = (int)param_3 * (int)*psVar4;
        auVar26._4_4_ = (int)param_3 * (int)*psVar5;
        auVar26._8_4_ = (int)param_3 * (int)*psVar6;
        auVar26._12_4_ = (int)param_3 * (int)*psVar7;
        auVar29._0_4_ = (int)param_3 * (int)sVar8;
        auVar29._4_4_ = (int)param_3 * (int)*psVar9;
        auVar29._8_4_ = (int)param_3 * (int)*psVar10;
        auVar29._12_4_ = (int)param_3 * (int)*psVar11;
        auVar27._0_4_ = (int)param_3 * (int)*psVar12;
        auVar27._4_4_ = (int)param_3 * (int)*psVar13;
        auVar27._8_4_ = (int)param_3 * (int)*psVar14;
        auVar27._12_4_ = (int)param_3 * (int)*psVar15;
        auVar26 = NEON_sshl(auVar26,auVar25,4);
        auVar28 = NEON_sshl(auVar28,auVar25,4);
        auVar29 = NEON_sshl(auVar29,auVar25,4);
        auVar27 = NEON_sshl(auVar27,auVar25,4);
        *puVar18 = auVar26._0_2_;
        puVar18[1] = auVar26._4_2_;
        puVar18[2] = auVar26._8_2_;
        puVar18[3] = auVar26._12_2_;
        puVar18[-8] = auVar28._0_2_;
        puVar18[-7] = auVar28._4_2_;
        puVar18[-6] = auVar28._8_2_;
        puVar18[-5] = auVar28._12_2_;
        puVar18[8] = auVar27._0_2_;
        puVar18[9] = auVar27._4_2_;
        puVar18[10] = auVar27._8_2_;
        puVar18[0xb] = auVar27._12_2_;
        *puVar18 = auVar29._0_2_;
        puVar18[1] = auVar29._4_2_;
        puVar18[2] = auVar29._8_2_;
        puVar18[3] = auVar29._12_2_;
        puVar18 = puVar18 + 0x10;
      } while (uVar21 != 0);
      if (param_4 == uVar17) {
        return;
      }
      uVar21 = uVar17;
      if ((param_4 & 0xc) == 0) {
        puVar18 = param_2 + uVar17;
        psVar19 = param_1 + uVar17;
        goto LAB_00655174;
      }
    }
    uVar17 = param_4 & 0xfffffffffffffffc;
    auVar23 = NEON_neg(auVar23,4);
    lVar16 = uVar21 - uVar17;
    puVar18 = param_2 + uVar17;
    psVar19 = param_1 + uVar17;
    psVar20 = param_1 + uVar21;
    puVar22 = (undefined8 *)(param_2 + uVar21);
    do {
      uVar24 = *(undefined8 *)psVar20;
      lVar16 = lVar16 + 4;
      auVar25._0_4_ = (int)param_3 * (int)(short)uVar24;
      auVar25._4_4_ = (int)param_3 * (int)(short)((ulong)uVar24 >> 0x10);
      auVar25._8_4_ = (int)param_3 * (int)(short)((ulong)uVar24 >> 0x20);
      auVar25._12_4_ = (int)param_3 * (int)(short)((ulong)uVar24 >> 0x30);
      auVar25 = NEON_sshl(auVar25,auVar23,4);
      *puVar22 = CONCAT26(auVar25._12_2_,
                          CONCAT24(auVar25._8_2_,CONCAT22(auVar25._4_2_,auVar25._0_2_)));
      psVar20 = psVar20 + 4;
      puVar22 = puVar22 + 1;
    } while (lVar16 != 0);
    if (param_4 == uVar17) {
      return;
    }
  }
LAB_00655174:
  lVar16 = param_4 - uVar17;
  do {
    lVar16 = lVar16 + -1;
    *puVar18 = (short)((int)*psVar19 * (int)param_3 >> (param_5 & 0x1f));
    puVar18 = puVar18 + 1;
    psVar19 = psVar19 + 1;
  } while (lVar16 != 0);
  return;
}


// ===== 006552ac  FUN_006552ac =====

undefined4
FUN_006552ac(ulong param_1,short param_2,ulong param_3,short param_4,uint param_5,ulong param_6,
            ulong param_7)

{
  short *psVar1;
  short *psVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  short *psVar9;
  short *psVar10;
  short sVar11;
  short *psVar12;
  short *psVar13;
  short *psVar14;
  short *psVar15;
  short *psVar16;
  short *psVar17;
  short *psVar18;
  short *psVar19;
  short *psVar20;
  short *psVar21;
  short *psVar22;
  short *psVar23;
  short *psVar24;
  short *psVar25;
  short sVar26;
  short *psVar27;
  short *psVar28;
  short *psVar29;
  short *psVar30;
  short *psVar31;
  short *psVar32;
  short *psVar33;
  ulong uVar34;
  long lVar35;
  undefined2 *puVar36;
  undefined8 *puVar37;
  short *psVar38;
  undefined8 *puVar39;
  short *psVar40;
  undefined8 *puVar41;
  long lVar42;
  ulong uVar43;
  undefined1 auVar44 [16];
  undefined8 uVar45;
  undefined8 uVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  
  if ((int)param_5 < 0) {
    return 0xffffffff;
  }
  if (param_1 == 0) {
    return 0xffffffff;
  }
  if (param_3 == 0) {
    return 0xffffffff;
  }
  if (param_6 == 0) {
    return 0xffffffff;
  }
  if (param_7 == 0) {
    return 0xffffffff;
  }
  iVar3 = (1 << (ulong)(param_5 & 0x1f)) >> 1;
  if (param_7 < 4) {
    uVar34 = 0;
  }
  else {
    lVar35 = (param_7 - 1) * 2;
    uVar34 = 0;
    if ((((param_3 <= param_3 + lVar35) && (param_6 <= param_6 + lVar35)) &&
        (param_1 <= param_1 + lVar35)) &&
       (((-1 < (long)(param_7 - 1) && (uVar34 = 0, 0x1f < param_6 - param_1)) &&
        (0x1f < param_6 - param_3)))) {
      auVar44._4_4_ = param_5;
      auVar44._0_4_ = param_5;
      auVar44._8_4_ = param_5;
      auVar44._12_4_ = param_5;
      if (param_7 < 0x10) {
        uVar43 = 0;
      }
      else {
        auVar47 = NEON_neg(auVar44,4);
        uVar34 = param_7 & 0xfffffffffffffff0;
        puVar36 = (undefined2 *)(param_6 + 0x10);
        psVar38 = (short *)(param_3 + 0x10);
        psVar40 = (short *)(param_1 + 0x10);
        uVar43 = param_7 & 0xfffffffffffffff0;
        do {
          psVar1 = psVar40 + -8;
          psVar4 = psVar40 + -7;
          psVar5 = psVar40 + -6;
          psVar6 = psVar40 + -5;
          psVar7 = psVar40 + -4;
          psVar8 = psVar40 + -3;
          psVar9 = psVar40 + -2;
          psVar10 = psVar40 + -1;
          sVar11 = *psVar40;
          psVar12 = psVar40 + 1;
          psVar13 = psVar40 + 2;
          psVar14 = psVar40 + 3;
          psVar15 = psVar40 + 4;
          psVar16 = psVar40 + 5;
          psVar17 = psVar40 + 6;
          psVar18 = psVar40 + 7;
          uVar43 = uVar43 - 0x10;
          psVar40 = psVar40 + 0x10;
          psVar2 = psVar38 + -8;
          psVar19 = psVar38 + -7;
          psVar20 = psVar38 + -6;
          psVar21 = psVar38 + -5;
          psVar22 = psVar38 + -4;
          psVar23 = psVar38 + -3;
          psVar24 = psVar38 + -2;
          psVar25 = psVar38 + -1;
          sVar26 = *psVar38;
          psVar27 = psVar38 + 1;
          psVar28 = psVar38 + 2;
          psVar29 = psVar38 + 3;
          psVar30 = psVar38 + 4;
          psVar31 = psVar38 + 5;
          psVar32 = psVar38 + 6;
          psVar33 = psVar38 + 7;
          psVar38 = psVar38 + 0x10;
          auVar49._0_4_ = iVar3 + (int)param_2 * (int)*psVar1 + (int)param_4 * (int)*psVar2;
          auVar49._4_4_ = iVar3 + (int)param_2 * (int)*psVar4 + (int)param_4 * (int)*psVar19;
          auVar49._8_4_ = iVar3 + (int)param_2 * (int)*psVar5 + (int)param_4 * (int)*psVar20;
          auVar49._12_4_ = iVar3 + (int)param_2 * (int)*psVar6 + (int)param_4 * (int)*psVar21;
          auVar48._0_4_ = iVar3 + (int)param_2 * (int)*psVar7 + (int)param_4 * (int)*psVar22;
          auVar48._4_4_ = iVar3 + (int)param_2 * (int)*psVar8 + (int)param_4 * (int)*psVar23;
          auVar48._8_4_ = iVar3 + (int)param_2 * (int)*psVar9 + (int)param_4 * (int)*psVar24;
          auVar48._12_4_ = iVar3 + (int)param_2 * (int)*psVar10 + (int)param_4 * (int)*psVar25;
          auVar48 = NEON_sshl(auVar48,auVar47,4);
          auVar49 = NEON_sshl(auVar49,auVar47,4);
          auVar51._4_4_ = iVar3 + (int)param_2 * (int)*psVar12 + (int)param_4 * (int)*psVar27;
          auVar51._0_4_ = iVar3 + (int)param_2 * (int)sVar11 + (int)param_4 * (int)sVar26;
          auVar51._8_4_ = iVar3 + (int)param_2 * (int)*psVar13 + (int)param_4 * (int)*psVar28;
          auVar51._12_4_ = iVar3 + (int)param_2 * (int)*psVar14 + (int)param_4 * (int)*psVar29;
          auVar51 = NEON_sshl(auVar51,auVar47,4);
          auVar50._4_4_ = iVar3 + (int)param_2 * (int)*psVar16 + (int)param_4 * (int)*psVar31;
          auVar50._0_4_ = iVar3 + (int)param_2 * (int)*psVar15 + (int)param_4 * (int)*psVar30;
          auVar50._8_4_ = iVar3 + (int)param_2 * (int)*psVar17 + (int)param_4 * (int)*psVar32;
          auVar50._12_4_ = iVar3 + (int)param_2 * (int)*psVar18 + (int)param_4 * (int)*psVar33;
          auVar50 = NEON_sshl(auVar50,auVar47,4);
          *puVar36 = auVar48._0_2_;
          puVar36[1] = auVar48._4_2_;
          puVar36[2] = auVar48._8_2_;
          puVar36[3] = auVar48._12_2_;
          puVar36[-8] = auVar49._0_2_;
          puVar36[-7] = auVar49._4_2_;
          puVar36[-6] = auVar49._8_2_;
          puVar36[-5] = auVar49._12_2_;
          puVar36[8] = auVar50._0_2_;
          puVar36[9] = auVar50._4_2_;
          puVar36[10] = auVar50._8_2_;
          puVar36[0xb] = auVar50._12_2_;
          *puVar36 = auVar51._0_2_;
          puVar36[1] = auVar51._4_2_;
          puVar36[2] = auVar51._8_2_;
          puVar36[3] = auVar51._12_2_;
          puVar36 = puVar36 + 0x10;
        } while (uVar43 != 0);
        if (param_7 == uVar34) {
          return 0;
        }
        uVar43 = uVar34;
        if ((param_7 & 0xc) == 0) goto LAB_006552e0;
      }
      lVar42 = uVar43 * 2;
      auVar44 = NEON_neg(auVar44,4);
      uVar34 = param_7 & 0xfffffffffffffffc;
      lVar35 = uVar43 - uVar34;
      puVar37 = (undefined8 *)(param_6 + lVar42);
      puVar39 = (undefined8 *)(param_3 + lVar42);
      puVar41 = (undefined8 *)(param_1 + lVar42);
      do {
        uVar45 = *puVar41;
        lVar35 = lVar35 + 4;
        uVar46 = *puVar39;
        auVar47._0_4_ =
             iVar3 + (int)param_2 * (int)(short)uVar45 + (int)param_4 * (int)(short)uVar46;
        auVar47._4_4_ =
             iVar3 + (int)param_2 * (int)(short)((ulong)uVar45 >> 0x10) +
             (int)param_4 * (int)(short)((ulong)uVar46 >> 0x10);
        auVar47._8_4_ =
             iVar3 + (int)param_2 * (int)(short)((ulong)uVar45 >> 0x20) +
             (int)param_4 * (int)(short)((ulong)uVar46 >> 0x20);
        auVar47._12_4_ =
             iVar3 + (int)param_2 * (int)(short)((ulong)uVar45 >> 0x30) +
             (int)param_4 * (int)(short)((ulong)uVar46 >> 0x30);
        auVar47 = NEON_sshl(auVar47,auVar44,4);
        *puVar37 = CONCAT26(auVar47._12_2_,
                            CONCAT24(auVar47._8_2_,CONCAT22(auVar47._4_2_,auVar47._0_2_)));
        puVar37 = puVar37 + 1;
        puVar39 = puVar39 + 1;
        puVar41 = puVar41 + 1;
      } while (lVar35 != 0);
      if (param_7 == uVar34) {
        return 0;
      }
    }
  }
LAB_006552e0:
  lVar42 = uVar34 * 2;
  lVar35 = param_7 - uVar34;
  puVar36 = (undefined2 *)(param_6 + lVar42);
  psVar38 = (short *)(param_3 + lVar42);
  psVar40 = (short *)(param_1 + lVar42);
  do {
    lVar35 = lVar35 + -1;
    *puVar36 = (short)(iVar3 + (int)*psVar40 * (int)param_2 + (int)*psVar38 * (int)param_4 >>
                      (param_5 & 0x1f));
    puVar36 = puVar36 + 1;
    psVar38 = psVar38 + 1;
    psVar40 = psVar40 + 1;
  } while (lVar35 != 0);
  return 0;
}


// ===== 00655484  FUN_00655484 =====

void FUN_00655484(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(0x2e0);
  *(undefined4 *)((long)pvVar1 + 0x2dc) = 0;
  return;
}


// ===== 006554a8  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 006554b0  thunk_FUN_00655618 =====

void thunk_FUN_00655618(void)

{
  FUN_00655618();
  return;
}


// ===== 006554b8  FUN_006554b8 =====

undefined8 FUN_006554b8(long param_1)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x2dc) == 0x2a)) {
    uVar1 = FUN_006557dc();
    return uVar1;
  }
  return 0xffffffff;
}


// ===== 006554d8  FUN_006554d8 =====

int FUN_006554d8(long param_1,int param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  
  if (((param_1 != 0) && (param_3 != 0)) && (*(int *)(param_1 + 0x2dc) == 0x2a)) {
    if (param_2 < 32000) {
      if (param_2 == 8000) {
        lVar2 = 8;
      }
      else {
        if (param_2 != 16000) {
          return -1;
        }
        lVar2 = 0x10;
      }
    }
    else if (param_2 == 32000) {
      lVar2 = 0x20;
    }
    else {
      if (param_2 != 48000) {
        return -1;
      }
      lVar2 = 0x30;
    }
    if (((param_4 == lVar2 * 10) || (param_4 == lVar2 * 0x14)) || (param_4 + lVar2 * -0x1e == 0)) {
      iVar1 = -1;
      if (param_2 < 32000) {
        if (param_2 == 8000) {
          iVar1 = FUN_00655a00(param_1,param_3,param_4);
        }
        else if (param_2 == 16000) {
          iVar1 = FUN_006561cc(param_1,param_3,param_4);
        }
      }
      else if (param_2 == 32000) {
        iVar1 = FUN_00656108(param_1,param_3,param_4);
      }
      else if (param_2 == 48000) {
        iVar1 = FUN_00655884(param_1,param_3,param_4);
      }
      if (0 < iVar1) {
        iVar1 = 1;
      }
      return iVar1;
    }
  }
  return -1;
}


// ===== 00655618  FUN_00655618 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00655618(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 1;
    *(undefined8 *)(param_1 + 3) = 0;
    *(undefined8 *)(param_1 + 1) = 0;
    *(undefined8 *)(param_1 + 0x45) = 0;
    FUN_00656418(param_1 + 5);
    uVar2 = DAT_001fe600;
    uVar1 = _DAT_001fe5f0;
    *(undefined8 *)(param_1 + 0x2f) = _UNK_001fe5f8;
    *(undefined8 *)(param_1 + 0x2d) = uVar1;
    uVar5 = _UNK_001fe628;
    uVar4 = _DAT_001fe620;
    uVar3 = _UNK_001fe610;
    uVar1 = _DAT_001fe608;
    *(undefined8 *)(param_1 + 0x31) = uVar2;
    uVar2 = DAT_001fe618;
    *(undefined8 *)(param_1 + 0x49) = 0;
    *(undefined8 *)(param_1 + 0x47) = 0;
    *(undefined8 *)(param_1 + 0x4d) = 0;
    *(undefined8 *)(param_1 + 0x4b) = 0;
    *(undefined8 *)(param_1 + 0x51) = 0;
    *(undefined8 *)(param_1 + 0x4f) = 0;
    *(undefined8 *)(param_1 + 0x55) = 0;
    *(undefined8 *)(param_1 + 0x53) = 0;
    *(undefined8 *)(param_1 + 0x59) = 0;
    *(undefined8 *)(param_1 + 0x57) = 0;
    *(undefined8 *)(param_1 + 0x5d) = 0;
    *(undefined8 *)(param_1 + 0x5b) = 0;
    *(undefined8 *)(param_1 + 0x61) = 0;
    *(undefined8 *)(param_1 + 0x5f) = 0;
    *(undefined8 *)(param_1 + 0x65) = 0;
    *(undefined8 *)(param_1 + 99) = 0;
    *(undefined8 *)(param_1 + 0x69) = 0;
    *(undefined8 *)(param_1 + 0x67) = 0;
    *(undefined8 *)(param_1 + 0x6d) = 0;
    *(undefined8 *)(param_1 + 0x6b) = 0;
    *(undefined8 *)(param_1 + 0x71) = 0;
    *(undefined8 *)(param_1 + 0x6f) = 0;
    *(undefined8 *)(param_1 + 0x75) = 0;
    *(undefined8 *)(param_1 + 0x73) = 0;
    *(undefined8 *)(param_1 + 0x3b) = uVar5;
    *(undefined8 *)(param_1 + 0x39) = uVar4;
    uVar6 = DAT_001fe648;
    uVar5 = _UNK_001fe640;
    uVar4 = _DAT_001fe638;
    *(undefined8 *)(param_1 + 0x37) = uVar2;
    uVar2 = DAT_001fe630;
    *(undefined8 *)(param_1 + 0x41) = uVar5;
    *(undefined8 *)(param_1 + 0x3f) = uVar4;
    *(undefined8 *)(param_1 + 0x3d) = uVar2;
    *(undefined8 *)(param_1 + 0x43) = uVar6;
    *(undefined8 *)(param_1 + 0x89) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0x87) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0x8d) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0x8b) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0x91) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0x8f) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0x95) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0x93) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0x99) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0x97) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0x9d) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0x9b) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0xa1) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0x9f) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0x79) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0x77) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0x7d) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0x7b) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0x81) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0x7f) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0x85) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0x83) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0xa5) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0xa3) = 0x2710271027102710;
    *(undefined8 *)(param_1 + 0x35) = uVar3;
    *(undefined8 *)(param_1 + 0x33) = uVar1;
    param_1[0xa9] = 0x6400640;
    *(undefined2 *)(param_1 + 0xb2) = 3;
    *(undefined8 *)((long)param_1 + 0x2b2) = 0;
    param_1[0xb1] = 0x40008;
    *(undefined2 *)((long)param_1 + 0x2ce) = 5;
    *(undefined8 *)(param_1 + 0xaa) = 0;
    *(undefined4 *)((long)param_1 + 0x2ca) = 0x7000e;
    *(undefined2 *)(param_1 + 0xb5) = 0x18;
    *(undefined2 *)(param_1 + 0xac) = 0;
    param_1[0xb4] = 0x150018;
    *(undefined2 *)((long)param_1 + 0x2da) = 0x39;
    *(undefined2 *)((long)param_1 + 0x2ba) = 0;
    *(undefined4 *)((long)param_1 + 0x2d6) = 0x300039;
    *(undefined8 *)(param_1 + 0xaf) = 0;
    *(undefined8 *)(param_1 + 0xa7) = 0x640064006400640;
    param_1[0xb7] = 0x2a;
    return 0;
  }
  return 0xffffffff;
}


// ===== 006557dc  FUN_006557dc =====

undefined8 FUN_006557dc(long param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 < 4) {
    iVar1 = *(int *)(&DAT_001fe710 + (ulong)param_2 * 4);
    iVar2 = *(int *)(&DAT_001fe730 + (ulong)param_2 * 4);
    iVar3 = *(int *)(&DAT_001fe720 + (ulong)param_2 * 4);
    iVar4 = *(int *)(&DAT_001fe740 + (ulong)param_2 * 4);
    *(undefined4 *)(param_1 + 0x2c4) = *(undefined4 *)(&DAT_001fe710 + iVar1);
    *(undefined2 *)(param_1 + 0x2c8) = *(undefined2 *)(&DAT_001fe714 + iVar1);
    *(undefined4 *)(param_1 + 0x2ca) = *(undefined4 *)(&DAT_001fe720 + iVar3);
    *(undefined2 *)(param_1 + 0x2ce) = *(undefined2 *)(&DAT_001fe724 + iVar3);
    *(undefined4 *)(param_1 + 0x2d0) = *(undefined4 *)(&DAT_001fe730 + iVar2);
    *(undefined2 *)(param_1 + 0x2d4) = *(undefined2 *)(&DAT_001fe734 + iVar2);
    *(undefined2 *)(param_1 + 0x2da) = *(undefined2 *)(&DAT_001fe744 + iVar4);
    *(undefined4 *)(param_1 + 0x2d6) = *(undefined4 *)(&DAT_001fe740 + iVar4);
    return 0;
  }
  return 0xffffffff;
}


// ===== 00655884  FUN_00655884 =====

void FUN_00655884(long param_1,undefined8 param_2,ulong param_3)

{
  code *pcVar1;
  undefined1 auStack_da0 [2944];
  undefined1 *local_220;
  undefined1 *puStack_218;
  undefined1 *local_210;
  undefined1 *puStack_208;
  undefined1 *local_200;
  undefined1 *puStack_1f8;
  undefined1 *local_1f0;
  undefined1 *puStack_1e8;
  undefined1 *local_1e0;
  undefined1 *puStack_1d8;
  undefined1 *local_1d0;
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
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  
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
  puStack_1c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_1d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_1e0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1e8 = &DAT_aaaaaaaaaaaaaaaa;
  local_1f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1f8 = &DAT_aaaaaaaaaaaaaaaa;
  local_200 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_208 = &DAT_aaaaaaaaaaaaaaaa;
  local_210 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_218 = &DAT_aaaaaaaaaaaaaaaa;
  local_220 = &DAT_aaaaaaaaaaaaaaaa;
  memset(auStack_da0,0,0xb80);
  if ((0x1df < param_3) &&
     (FUN_00656390(param_2,&local_220,param_1 + 0x14,auStack_da0), 0x1df < param_3 - 0x1e0)) {
    FUN_00656390(param_2,&local_180,param_1 + 0x14,auStack_da0);
    if (0x1df < param_3 - 0x3c0) {
      FUN_00656390(param_2,&local_e0,param_1 + 0x14,auStack_da0);
      if ((0x1df < param_3 - 0x5a0) &&
         (FUN_00656390(param_2,&stack0xffffffffffffffc0,param_1 + 0x14,auStack_da0),
         0x1df < param_3 - 0x780)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(0x5512,0x655a00);
        (*pcVar1)();
      }
    }
  }
  FUN_00655a00(param_1,&local_220,((uint)param_3 & 0xffff) / 6);
  return;
}


// ===== 00655a00  FUN_00655a00 =====

void FUN_00655a00(int *param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  undefined2 *puVar2;
  short *psVar3;
  short *psVar4;
  undefined2 uVar5;
  ushort uVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  short sVar14;
  short sVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  short sVar20;
  undefined2 uVar21;
  short sVar22;
  int iVar23;
  long lVar24;
  int *piVar25;
  long lVar26;
  long lVar27;
  short sVar28;
  long lVar29;
  uint uVar30;
  uint uVar31;
  ulong uVar32;
  short sVar33;
  undefined1 *local_e0;
  undefined4 local_d8;
  short local_d0 [24];
  undefined1 *local_a0;
  undefined8 uStack_98;
  undefined1 *local_90;
  undefined1 *local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  
  local_d8 = 0xaaaaaaaa;
  local_e0 = &DAT_aaaaaaaaaaaaaaaa;
  sVar14 = FUN_0065768c();
  local_d0[0xc] = 0;
  local_d0[0xd] = 0;
  local_d0[0xe] = 0;
  local_d0[0xf] = 0;
  local_d0[0x10] = 0;
  local_d0[0x11] = 0;
  local_d0[0x12] = 0;
  local_d0[0x13] = 0;
  local_d0[0x14] = 0;
  local_d0[0x15] = 0;
  local_d0[0x16] = 0;
  local_d0[0x17] = 0;
  local_d0[0] = 0;
  local_d0[1] = 0;
  local_d0[2] = 0;
  local_d0[3] = 0;
  local_d0[4] = 0;
  local_d0[5] = 0;
  local_d0[6] = 0;
  local_d0[7] = 0;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0[8] = 0;
  local_d0[9] = 0;
  local_d0[10] = 0;
  local_d0[0xb] = 0;
  if (param_3 == 0x50) {
    lVar24 = 0x2d6;
    lVar26 = 0x2d0;
    lVar27 = 0x2ca;
    lVar29 = 0x2c4;
  }
  else if (param_3 == 0xa0) {
    lVar24 = 0x2d8;
    lVar26 = 0x2d2;
    lVar27 = 0x2cc;
    lVar29 = 0x2c6;
  }
  else {
    lVar24 = 0x2da;
    lVar26 = 0x2d4;
    lVar27 = 0x2ce;
    lVar29 = 0x2c8;
  }
  if (10 < sVar14) {
    sVar14 = *(short *)((long)param_1 + lVar24);
    uVar5 = *(undefined2 *)((long)param_1 + lVar27);
    lVar24 = 0;
    iVar19 = 0;
    bVar12 = false;
    uVar21 = *(undefined2 *)((long)param_1 + lVar29);
    sVar33 = *(short *)((long)param_1 + lVar26);
    do {
      puVar2 = (undefined2 *)((long)param_1 + lVar24 + 0x108);
      iVar16 = FUN_00658754(*(undefined2 *)((long)&local_e0 + lVar24),puVar2[-0x2a],puVar2[-0x12],
                            (long)&local_80 + lVar24);
      iVar16 = iVar16 * *(short *)((long)&DAT_001fe6b0 + lVar24);
      iVar17 = FUN_00658754(*(undefined2 *)((long)&local_e0 + lVar24),puVar2[-0x1e],puVar2[-6],
                            (long)&local_a0 + lVar24);
      iVar17 = iVar17 * *(short *)((long)&DAT_001fe6c8 + lVar24);
      iVar18 = FUN_00658754(*(undefined2 *)((long)&local_e0 + lVar24),puVar2[-0x24],puVar2[-0xc],
                            (long)&uStack_78 + lVar24 + 4);
      uVar31 = iVar16 + iVar18 * *(short *)((long)&DAT_001fe6bc + lVar24);
      iVar18 = FUN_00658754(*(undefined2 *)((long)&local_e0 + lVar24),puVar2[-0x18],*puVar2,
                            (long)&uStack_98 + lVar24 + 4);
      uVar30 = iVar17 + iVar18 * *(short *)((long)&DAT_001fe6d4 + lVar24);
      iVar23 = 0x1f;
      iVar18 = iVar23;
      if (uVar31 != 0) {
        iVar18 = (int)LZCOUNT(uVar31 ^ uVar31 * 2 | 1);
      }
      if (uVar30 != 0) {
        iVar23 = (int)LZCOUNT(uVar30 ^ uVar30 * 2 | 1);
      }
      iVar18 = iVar18 - iVar23;
      sVar28 = *(short *)((long)&DAT_001fe6e0 + lVar24);
      if ((int)sVar33 + iVar18 * -4 < 0 != SBORROW4((int)sVar33,iVar18 * 4)) {
        bVar12 = true;
      }
      if ((int)(uVar31 * 0x10) >> 0x10 < 1) {
        *(undefined2 *)((long)local_d0 + lVar24 + 0x18) = 0x4000;
      }
      else {
        sVar15 = FUN_0065880c(iVar16 * 4 & 0xffffc000,uVar31 >> 0xc);
        *(short *)((long)local_d0 + lVar24 + 0x18) = sVar15;
        *(short *)((long)local_d0 + lVar24 + 0x24) = 0x4000 - sVar15;
      }
      if (0 < (int)(uVar30 * 0x10) >> 0x10) {
        sVar15 = FUN_0065880c(iVar17 * 4 & 0xffffc000,uVar30 >> 0xc);
        *(short *)((long)local_d0 + lVar24) = sVar15;
        *(short *)((long)local_d0 + lVar24 + 0xc) = 0x4000 - sVar15;
      }
      iVar19 = iVar19 + iVar18 * sVar28;
      lVar24 = lVar24 + 2;
    } while (lVar24 != 0xc);
    uVar32 = 0;
    sVar33 = 0x3200;
    bVar1 = iVar19 < sVar14;
    do {
      lVar26 = uVar32 * 2;
      iVar19 = FUN_00658948(param_1,*(undefined2 *)((long)&local_e0 + lVar26),uVar32 & 0xffffffff);
      psVar3 = (short *)((long)param_1 + lVar26 + 0xb4);
      sVar14 = *psVar3;
      sVar28 = psVar3[6];
      lVar24 = 0;
      iVar23 = (int)(short)(&DAT_001fe6b0)[uVar32];
      iVar18 = (int)(short)(&DAT_001fe6bc)[uVar32];
      sVar15 = 0x48 - (short)uVar32;
      bVar13 = true;
      do {
        bVar11 = bVar13;
        lVar27 = uVar32 + lVar24 * 6;
        sVar20 = *(short *)((long)param_1 + lVar27 * 2 + 0xb4);
        sVar9 = sVar20 + (short)((uint)(((int)(iVar19 * 0x100000 +
                                              ((uint)(iVar23 * sVar14 + iVar18 * sVar28) >> 6) *
                                              -0x10000) >> 0x10) * 0x4d00) >> 0x10);
        sVar22 = (short)lVar24;
        if (!bVar12 && bVar1) {
          iVar16 = (int)*(short *)((long)&local_80 + lVar27 * 2);
          sVar7 = (sVar22 + sVar15) * 0x80;
          sVar9 = sVar9 + (short)((local_d0[lVar27 + 0xc] * iVar16 * 0x20 >> 0x10) * 0x28f >> 0x16);
          sVar22 = sVar22 * 0x80 + 0x280;
          iVar16 = (((short)(*(short *)((long)&local_e0 + uVar32 * 2) -
                            (short)((uint)(int)sVar20 >> 3)) * iVar16 >> 3) + -0x1000) *
                   (local_d0[lVar27 + 0xc] * 0x4000 + 0x8000 >> 0x10) >> 0xe;
          if (sVar9 <= sVar22) {
            sVar9 = sVar22;
          }
          sVar20 = *(short *)((long)(param_1 + 0x39) + lVar27 * 2);
          if (sVar7 <= sVar9) {
            sVar9 = sVar7;
          }
          *(short *)((long)param_1 + lVar27 * 2 + 0xb4) = sVar9;
          if (iVar16 < 1) {
            iVar16 = FUN_0065880c(-iVar16,sVar20);
            iVar16 = -iVar16;
          }
          else {
            iVar16 = FUN_0065880c(iVar16,sVar20);
          }
          sVar20 = sVar20 + (short)(iVar16 * 0x10000 + 0x200000 >> 0x16);
          piVar25 = param_1 + 0x39;
        }
        else {
          sVar7 = local_d0[lVar27];
          sVar8 = *(short *)((long)param_1 + lVar27 * 2 + 0xcc);
          sVar20 = *(short *)((long)&local_e0 + uVar32 * 2);
          iVar16 = (int)*(short *)((long)&local_a0 + lVar27 * 2);
          sVar10 = sVar22 * 0x80 + 0x280;
          sVar22 = (sVar22 + sVar15) * 0x80;
          if (sVar9 <= sVar10) {
            sVar9 = sVar10;
          }
          sVar10 = sVar8 + (short)(((sVar7 * iVar16 * 0x20 >> 0x10) * 0x199a >> 0x15) + 1U >> 1);
          if (sVar22 <= sVar9) {
            sVar9 = sVar22;
          }
          *(short *)((long)param_1 + lVar27 * 2 + 0xb4) = sVar9;
          uVar6 = *(ushort *)((long)(param_1 + 0x3f) + lVar27 * 2);
          if (sVar10 <= (short)(&DAT_001fdc44)[lVar24]) {
            sVar10 = (&DAT_001fdc44)[lVar24];
          }
          iVar16 = (((short)(sVar20 - (short)((uint)(sVar8 * 0x2000 + 0x8000) >> 0x10)) * iVar16 >>
                    3) + -0x1000) * ((int)sVar7 >> 2) >> 4;
          if ((short)(sVar33 + 0x280) <= sVar10) {
            sVar10 = sVar33 + 0x280;
          }
          *(short *)((long)param_1 + lVar27 * 2 + 0xcc) = sVar10;
          iVar17 = (uint)uVar6 * 10;
          if (iVar16 < 1) {
            iVar16 = FUN_0065880c(-iVar16,iVar17);
            iVar16 = -iVar16;
          }
          else {
            iVar16 = FUN_0065880c(iVar16,iVar17);
          }
          sVar20 = uVar6 + (short)(char)((uint)(iVar16 * 0x10000 + 0x800000) >> 0x18);
          piVar25 = param_1 + 0x3f;
        }
        if (sVar20 < 0x181) {
          sVar20 = 0x180;
        }
        *(short *)((long)piVar25 + lVar27 * 2) = sVar20;
        lVar24 = 1;
        bVar13 = false;
      } while (bVar11);
      psVar3 = (short *)((long)param_1 + lVar26 + 0xcc);
      psVar4 = (short *)((long)param_1 + lVar26 + 0xb4);
      sVar28 = *psVar3;
      sVar33 = (&DAT_001fe6c8)[uVar32];
      sVar15 = psVar3[6];
      sVar9 = (&DAT_001fe6d4)[uVar32];
      sVar20 = *psVar4;
      sVar22 = psVar4[6];
      uVar31 = (int)sVar33 * (int)sVar28 + (int)sVar9 * (int)sVar15;
      uVar30 = sVar20 * iVar23 + sVar22 * iVar18;
      sVar14 = (short)(uVar31 >> 9) - (short)(uVar30 >> 9);
      if (sVar14 < *(short *)(&DAT_001fe6ec + lVar26)) {
        sVar14 = *(short *)(&DAT_001fe6ec + lVar26) - sVar14;
        sVar7 = (short)((uint)((int)sVar14 + sVar14 * 2) >> 2);
        sVar20 = sVar20 - sVar7;
        sVar22 = sVar22 - sVar7;
        sVar14 = (short)((uint)(sVar14 * 0xd) >> 2);
        sVar28 = sVar28 + sVar14;
        sVar15 = sVar15 + sVar14;
        *psVar3 = sVar28;
        psVar3[6] = sVar15;
        uVar31 = (int)sVar28 * (int)sVar33 + (int)sVar15 * (int)sVar9;
        *psVar4 = sVar20;
        uVar30 = sVar20 * iVar23 + sVar22 * iVar18;
        psVar4[6] = sVar22;
      }
      sVar33 = (&DAT_001fe6f8)[uVar32];
      if ((int)sVar33 < (int)(uVar31 << 9) >> 0x10) {
        sVar14 = sVar33 - (short)((uVar31 << 9) >> 0x10);
        *psVar3 = sVar14 + sVar28;
        psVar3[6] = sVar15 + sVar14;
      }
      if ((int)(short)(&DAT_001fe704)[uVar32] < (int)(uVar30 << 9) >> 0x10) {
        sVar14 = (&DAT_001fe704)[uVar32] - (short)((uVar30 << 9) >> 0x10);
        *psVar4 = sVar20 + sVar14;
        psVar4[6] = sVar22 + sVar14;
      }
      uVar32 = uVar32 + 1;
    } while (uVar32 != 6);
    param_1[0x45] = param_1[0x45] + 1;
    if (bVar12 || !bVar1) {
      sVar14 = *(short *)((long)param_1 + 0x11a) + 1;
      *(short *)((long)param_1 + 0x11a) = sVar14;
      if (6 < sVar14) {
        *(undefined2 *)((long)param_1 + 0x11a) = 6;
        uVar21 = uVar5;
      }
      iVar19 = 1;
      *(undefined2 *)(param_1 + 0x46) = uVar21;
      goto LAB_006560e0;
    }
  }
  sVar14 = (short)param_1[0x46];
  if (sVar14 < 1) {
    iVar19 = 0;
    *(undefined2 *)((long)param_1 + 0x11a) = 0;
  }
  else {
    *(short *)(param_1 + 0x46) = sVar14 + -1;
    iVar19 = (int)(short)(sVar14 + 2);
    *(undefined2 *)((long)param_1 + 0x11a) = 0;
  }
LAB_006560e0:
  *param_1 = iVar19;
  return;
}


// ===== 00656108  FUN_00656108 =====

void FUN_00656108(long param_1,undefined8 param_2,ulong param_3)

{
  undefined1 *local_5d0;
  undefined1 *puStack_5c8;
  undefined1 *puStack_5c0;
  undefined1 *puStack_5b8;
  undefined1 *local_5b0;
  undefined1 *puStack_5a8;
  undefined1 *puStack_5a0;
  undefined1 *puStack_598;
  undefined1 *local_590;
  undefined1 *puStack_588;
  undefined1 *puStack_580;
  undefined1 *puStack_578;
  undefined1 *local_570;
  undefined1 *puStack_568;
  undefined1 *puStack_560;
  undefined1 *puStack_558;
  undefined1 *local_550;
  undefined1 *puStack_548;
  undefined1 *puStack_540;
  undefined1 *puStack_538;
  undefined1 *local_530;
  undefined1 *puStack_528;
  undefined1 *puStack_520;
  undefined1 *puStack_518;
  undefined1 *local_510;
  undefined1 *puStack_508;
  undefined1 *puStack_500;
  undefined1 *puStack_4f8;
  undefined1 *local_4f0;
  undefined1 *puStack_4e8;
  undefined1 *puStack_4e0;
  undefined1 *puStack_4d8;
  undefined1 *local_4d0;
  undefined1 *puStack_4c8;
  undefined1 *puStack_4c0;
  undefined1 *puStack_4b8;
  undefined1 *local_4b0;
  undefined1 *puStack_4a8;
  undefined1 *puStack_4a0;
  undefined1 *puStack_498;
  undefined1 *local_490;
  undefined1 *puStack_488;
  undefined1 *puStack_480;
  undefined1 *puStack_478;
  undefined1 *local_470;
  undefined1 *puStack_468;
  undefined1 *puStack_460;
  undefined1 *puStack_458;
  undefined1 *local_450;
  undefined1 *puStack_448;
  undefined1 *puStack_440;
  undefined1 *puStack_438;
  undefined1 *local_430;
  undefined1 *puStack_428;
  undefined1 *puStack_420;
  undefined1 *puStack_418;
  undefined1 *local_410;
  undefined1 *puStack_408;
  undefined1 *puStack_400;
  undefined1 *puStack_3f8;
  undefined1 auStack_3f0 [960];
  
  memset(auStack_3f0,0xaa,0x3c0);
  puStack_5c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_5d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_5b8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_5c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_5a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_5b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_598 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_5a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_588 = &DAT_aaaaaaaaaaaaaaaa;
  local_590 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_578 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_580 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_568 = &DAT_aaaaaaaaaaaaaaaa;
  local_570 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_558 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_560 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_548 = &DAT_aaaaaaaaaaaaaaaa;
  local_550 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_538 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_540 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_528 = &DAT_aaaaaaaaaaaaaaaa;
  local_530 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_518 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_520 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_508 = &DAT_aaaaaaaaaaaaaaaa;
  local_510 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_4f8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_500 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_4e8 = &DAT_aaaaaaaaaaaaaaaa;
  local_4f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_4d8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_4e0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_4c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_4d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_4b8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_4c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_4a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_4b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_498 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_4a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_488 = &DAT_aaaaaaaaaaaaaaaa;
  local_490 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_478 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_480 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_468 = &DAT_aaaaaaaaaaaaaaaa;
  local_470 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_458 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_460 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_448 = &DAT_aaaaaaaaaaaaaaaa;
  local_450 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_438 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_440 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_428 = &DAT_aaaaaaaaaaaaaaaa;
  local_430 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_418 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_420 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_408 = &DAT_aaaaaaaaaaaaaaaa;
  local_410 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_3f8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_400 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_006588d0(param_2,auStack_3f0,param_1 + 0xc,param_3);
  FUN_006588d0(auStack_3f0,&local_5d0,param_1 + 4,param_3 >> 1);
  FUN_00655a00(param_1,&local_5d0,param_3 >> 2);
  return;
}


// ===== 006561cc  FUN_006561cc =====

void FUN_006561cc(long param_1,undefined8 param_2,ulong param_3)

{
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
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  
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
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_006588d0(param_2,&local_210,param_1 + 4,param_3);
  FUN_00655a00(param_1,&local_210,param_3 >> 1);
  return;
}


// ===== 0065626c  FUN_0065626c =====

void FUN_0065626c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_00656938(param_1,0x1e0,param_4 + 0x40,param_3);
  uVar3 = *(undefined8 *)(param_3 + 0x40);
  uVar2 = *(undefined8 *)(param_3 + 0x58);
  uVar1 = *(undefined8 *)(param_3 + 0x50);
  uVar5 = *(undefined8 *)(param_4 + 0x7b8);
  uVar4 = *(undefined8 *)(param_4 + 0x7b0);
  *(undefined8 *)(param_4 + 0x28) = *(undefined8 *)(param_3 + 0x48);
  *(undefined8 *)(param_4 + 0x20) = uVar3;
  *(undefined8 *)(param_4 + 0x38) = uVar2;
  *(undefined8 *)(param_4 + 0x30) = uVar1;
  uVar1 = *(undefined8 *)(param_4 + 0x7a0);
  *(undefined8 *)(param_3 + 0x48) = *(undefined8 *)(param_4 + 0x7a8);
  *(undefined8 *)(param_3 + 0x40) = uVar1;
  *(undefined8 *)(param_3 + 0x58) = uVar5;
  *(undefined8 *)(param_3 + 0x50) = uVar4;
  FUN_00656d08(param_4 + 0x20,param_4,0xa0);
  FUN_00656438(param_4,0x140,param_2,param_3 + 0x60);
  return;
}


// ===== 006562e4  FUN_006562e4 =====

void FUN_006562e4(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
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
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  return;
}


// ===== 00656300  FUN_00656300 =====

void FUN_00656300(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_00656714(param_1,0xa0,param_4 + 0x40,param_3);
  uVar3 = *(undefined8 *)(param_3 + 0x20);
  uVar2 = *(undefined8 *)(param_3 + 0x38);
  uVar1 = *(undefined8 *)(param_3 + 0x30);
  uVar5 = *(undefined8 *)(param_4 + 0x538);
  uVar4 = *(undefined8 *)(param_4 + 0x530);
  *(undefined8 *)(param_4 + 0x28) = *(undefined8 *)(param_3 + 0x28);
  *(undefined8 *)(param_4 + 0x20) = uVar3;
  *(undefined8 *)(param_4 + 0x38) = uVar2;
  *(undefined8 *)(param_4 + 0x30) = uVar1;
  uVar1 = *(undefined8 *)(param_4 + 0x520);
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(param_4 + 0x528);
  *(undefined8 *)(param_3 + 0x20) = uVar1;
  *(undefined8 *)(param_3 + 0x38) = uVar5;
  *(undefined8 *)(param_3 + 0x30) = uVar4;
  FUN_00657030(param_4 + 0x20,param_4,0x50);
  FUN_00656810(param_4,0xf0,param_2,param_3 + 0x40);
  return;
}


// ===== 00656378  FUN_00656378 =====

void FUN_00656378(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  return;
}


// ===== 00656390  FUN_00656390 =====

void FUN_00656390(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_0065661c(param_1,0x1e0,param_4 + 0x400,param_3);
  FUN_00656b30(param_4 + 0x400,0xf0,param_4 + 0x40,param_3 + 0x20);
  uVar3 = *(undefined8 *)(param_3 + 0x60);
  uVar2 = *(undefined8 *)(param_3 + 0x78);
  uVar1 = *(undefined8 *)(param_3 + 0x70);
  *(undefined8 *)(param_4 + 0x28) = *(undefined8 *)(param_3 + 0x68);
  *(undefined8 *)(param_4 + 0x20) = uVar3;
  *(undefined8 *)(param_4 + 0x38) = uVar2;
  *(undefined8 *)(param_4 + 0x30) = uVar1;
  uVar3 = *(undefined8 *)(param_4 + 0x3e0);
  uVar2 = *(undefined8 *)(param_4 + 0x3f8);
  uVar1 = *(undefined8 *)(param_4 + 0x3f0);
  *(undefined8 *)(param_3 + 0x68) = *(undefined8 *)(param_4 + 1000);
  *(undefined8 *)(param_3 + 0x60) = uVar3;
  *(undefined8 *)(param_3 + 0x78) = uVar2;
  *(undefined8 *)(param_3 + 0x70) = uVar1;
  FUN_00656d08(param_4 + 0x20,param_4,0x50);
  FUN_00656438(param_4,0xa0,param_2,param_3 + 0x80);
  return;
}


// ===== 00656418  FUN_00656418 =====

void FUN_00656418(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
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
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  return;
}


// ===== 00656438  FUN_00656438 =====

void FUN_00656438(int *param_1,int param_2,int *param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined2 *puVar10;
  int *piVar11;
  ulong uVar12;
  int *piVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 in_q17 [16];
  undefined1 auVar17 [16];
  
  uVar1 = param_2 >> 1;
  uVar6 = (ulong)uVar1;
  if (0 < (int)uVar1) {
    lVar7 = 0;
    do {
      iVar2 = param_4[1];
      iVar3 = *param_4 + ((*(int *)((long)param_1 + lVar7) - iVar2) + 0x2000 >> 0xe) * 0xbea;
      *param_4 = *(int *)((long)param_1 + lVar7);
      param_4[1] = iVar3;
      iVar3 = iVar3 - param_4[2];
      iVar2 = iVar2 + ((iVar3 >> 0xe) - (iVar3 >> 0x1f)) * 0x2498;
      iVar3 = iVar2 - param_4[3];
      iVar3 = param_4[2] + ((iVar3 >> 0xe) - (iVar3 >> 0x1f)) * 0x3ad7;
      param_4[2] = iVar2;
      param_4[3] = iVar3;
      *(int *)((long)param_1 + lVar7) = iVar3 >> 1;
      lVar7 = lVar7 + 8;
    } while (uVar6 << 3 != lVar7);
    lVar7 = 4;
    uVar8 = uVar6;
    do {
      iVar2 = param_4[5];
      uVar8 = uVar8 - 1;
      iVar3 = param_4[4] + ((*(int *)((long)param_1 + lVar7) - iVar2) + 0x2000 >> 0xe) * 0x335;
      param_4[4] = *(int *)((long)param_1 + lVar7);
      param_4[5] = iVar3;
      iVar3 = iVar3 - param_4[6];
      iVar2 = iVar2 + ((iVar3 >> 0xe) - (iVar3 >> 0x1f)) * 0x17de;
      iVar3 = iVar2 - param_4[7];
      iVar3 = param_4[6] + ((iVar3 >> 0xe) - (iVar3 >> 0x1f)) * 0x305e;
      param_4[6] = iVar2;
      param_4[7] = iVar3;
      *(int *)((long)param_1 + lVar7) = iVar3 >> 1;
      lVar7 = lVar7 + 8;
    } while (uVar8 != 0);
    if ((uVar1 < 0xf) ||
       ((uVar8 = uVar6 - 1 >> 1, param_3 < param_1 + uVar8 * 4 + 4 &&
        (param_1 < param_3 + uVar8 + 1)))) {
      uVar9 = 0;
    }
    else {
      uVar8 = uVar8 + 1;
      uVar12 = uVar8 & 0xfffffffffffffff8;
      uVar9 = (uVar8 & 0xfffffffffffffff8) << 1;
      piVar11 = param_1;
      piVar13 = param_3;
      do {
        uVar12 = uVar12 - 8;
        auVar14._0_8_ = CONCAT44(piVar11[5] + piVar11[4],piVar11[1] + *piVar11);
        auVar14._8_4_ = piVar11[9] + piVar11[8];
        auVar14._12_4_ = piVar11[0xd] + piVar11[0xc];
        auVar15._8_8_ = auVar14._8_8_;
        auVar15._0_8_ = NEON_sqshrn(auVar14._0_8_,auVar14,0xf,4);
        auVar16._4_4_ = piVar11[0x15] + piVar11[0x14];
        auVar16._0_4_ = piVar11[0x11] + piVar11[0x10];
        auVar16._8_4_ = piVar11[0x19] + piVar11[0x18];
        auVar16._12_4_ = piVar11[0x1d] + piVar11[0x1c];
        auVar16 = NEON_sqshrn2(auVar15,auVar16,0xf,4);
        auVar4._4_4_ = piVar11[7] + piVar11[6];
        auVar4._0_4_ = piVar11[3] + piVar11[2];
        auVar4._8_4_ = piVar11[0xb] + piVar11[10];
        auVar4._12_4_ = piVar11[0xf] + piVar11[0xe];
        auVar17._8_8_ = in_q17._8_8_;
        auVar17._0_8_ = NEON_sqshrn(in_q17._0_8_,auVar4,0xf,4);
        auVar5._4_4_ = piVar11[0x17] + piVar11[0x16];
        auVar5._0_4_ = piVar11[0x13] + piVar11[0x12];
        auVar5._8_4_ = piVar11[0x1b] + piVar11[0x1a];
        auVar5._12_4_ = piVar11[0x1f] + piVar11[0x1e];
        in_q17 = NEON_sqshrn2(auVar17,auVar5,0xf,4);
        *(short *)piVar13 = auVar16._0_2_;
        *(short *)((long)piVar13 + 2) = in_q17._0_2_;
        *(short *)(piVar13 + 1) = auVar16._2_2_;
        *(short *)((long)piVar13 + 6) = in_q17._2_2_;
        *(short *)(piVar13 + 2) = auVar16._4_2_;
        *(short *)((long)piVar13 + 10) = in_q17._4_2_;
        *(short *)(piVar13 + 3) = auVar16._6_2_;
        *(short *)((long)piVar13 + 0xe) = in_q17._6_2_;
        *(short *)(piVar13 + 4) = auVar16._8_2_;
        *(short *)((long)piVar13 + 0x12) = in_q17._8_2_;
        *(short *)(piVar13 + 5) = auVar16._10_2_;
        *(short *)((long)piVar13 + 0x16) = in_q17._10_2_;
        *(short *)(piVar13 + 6) = auVar16._12_2_;
        *(short *)((long)piVar13 + 0x1a) = in_q17._12_2_;
        *(short *)(piVar13 + 7) = auVar16._14_2_;
        *(short *)((long)piVar13 + 0x1e) = in_q17._14_2_;
        piVar13 = piVar13 + 8;
        piVar11 = piVar11 + 0x20;
      } while (uVar12 != 0);
      if (uVar8 == (uVar8 & 0xfffffffffffffff8)) {
        return;
      }
    }
    puVar10 = (undefined2 *)((long)param_3 + uVar9 * 2 + 2);
    piVar11 = param_1 + uVar9 * 2 + 2;
    do {
      uVar9 = uVar9 + 2;
      iVar2 = piVar11[-1] + piVar11[-2] >> 0xf;
      iVar3 = piVar11[1] + *piVar11 >> 0xf;
      if (iVar2 == -0x8000 || iVar2 + 0x8000 < 0 != SCARRY4(iVar2,0x8000)) {
        iVar2 = -0x8000;
      }
      if (0x7ffe < iVar2) {
        iVar2 = 0x7fff;
      }
      if (iVar3 == -0x8000 || iVar3 + 0x8000 < 0 != SCARRY4(iVar3,0x8000)) {
        iVar3 = -0x8000;
      }
      puVar10[-1] = (short)iVar2;
      if (0x7ffe < iVar3) {
        iVar3 = 0x7fff;
      }
      *puVar10 = (short)iVar3;
      puVar10 = puVar10 + 2;
      piVar11 = piVar11 + 4;
    } while (uVar9 < uVar6);
  }
  return;
}


// ===== 0065661c  FUN_0065661c =====

void FUN_0065661c(short *param_1,int param_2,int *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  short *psVar6;
  ulong uVar7;
  int *piVar8;
  
  uVar5 = (ulong)(uint)(param_2 >> 1);
  uVar7 = uVar5;
  piVar8 = param_3;
  psVar6 = param_1;
  if (0 < param_2 >> 1) {
    do {
      uVar7 = uVar7 - 1;
      uVar1 = param_4[1];
      uVar3 = (int)*psVar6 << 0xf | 0x4000;
      uVar2 = *param_4 + ((int)((uVar3 - uVar1) + 0x2000) >> 0xe) * 0xbea;
      *param_4 = uVar3;
      param_4[1] = uVar2;
      iVar4 = uVar2 - param_4[2];
      uVar1 = uVar1 + ((iVar4 >> 0xe) - (iVar4 >> 0x1f)) * 0x2498;
      iVar4 = uVar1 - param_4[3];
      uVar2 = param_4[2] + ((iVar4 >> 0xe) - (iVar4 >> 0x1f)) * 0x3ad7;
      param_4[2] = uVar1;
      param_4[3] = uVar2;
      *piVar8 = (int)uVar2 >> 1;
      piVar8 = piVar8 + 1;
      psVar6 = psVar6 + 2;
    } while (uVar7 != 0);
    psVar6 = param_1 + 1;
    do {
      uVar5 = uVar5 - 1;
      uVar1 = param_4[5];
      uVar3 = (int)*psVar6 << 0xf | 0x4000;
      uVar2 = param_4[4] + ((int)((uVar3 - uVar1) + 0x2000) >> 0xe) * 0x335;
      param_4[4] = uVar3;
      param_4[5] = uVar2;
      iVar4 = uVar2 - param_4[6];
      uVar1 = uVar1 + ((iVar4 >> 0xe) - (iVar4 >> 0x1f)) * 0x17de;
      iVar4 = uVar1 - param_4[7];
      uVar2 = param_4[6] + ((iVar4 >> 0xe) - (iVar4 >> 0x1f)) * 0x305e;
      param_4[6] = uVar1;
      param_4[7] = uVar2;
      *param_3 = *param_3 + ((int)uVar2 >> 1);
      param_3 = param_3 + 1;
      psVar6 = psVar6 + 2;
    } while (uVar5 != 0);
  }
  return;
}


// ===== 00656714  FUN_00656714 =====

void FUN_00656714(long param_1,uint param_2,long param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  
  if (0 < (int)param_2) {
    lVar5 = 0;
    do {
      uVar1 = param_4[5];
      uVar3 = (int)*(short *)(param_1 + lVar5) << 0xf | 0x4000;
      uVar2 = param_4[4] + ((int)((uVar3 - uVar1) + 0x2000) >> 0xe) * 0x335;
      param_4[4] = uVar3;
      param_4[5] = uVar2;
      iVar4 = uVar2 - param_4[6];
      uVar1 = uVar1 + ((iVar4 >> 0xe) - (iVar4 >> 0x1f)) * 0x17de;
      iVar4 = uVar1 - param_4[7];
      uVar2 = param_4[6] + ((iVar4 >> 0xe) - (iVar4 >> 0x1f)) * 0x305e;
      param_4[6] = uVar1;
      param_4[7] = uVar2;
      *(int *)(param_3 + (long)(int)lVar5 * 4) = (int)uVar2 >> 0xf;
      lVar5 = lVar5 + 2;
    } while ((ulong)param_2 << 1 != lVar5);
    lVar5 = 0;
    do {
      uVar1 = param_4[1];
      uVar3 = (int)*(short *)(param_1 + lVar5) << 0xf | 0x4000;
      uVar2 = *param_4 + ((int)((uVar3 - uVar1) + 0x2000) >> 0xe) * 0xbea;
      *param_4 = uVar3;
      param_4[1] = uVar2;
      iVar4 = uVar2 - param_4[2];
      uVar1 = uVar1 + ((iVar4 >> 0xe) - (iVar4 >> 0x1f)) * 0x2498;
      iVar4 = uVar1 - param_4[3];
      uVar2 = param_4[2] + ((iVar4 >> 0xe) - (iVar4 >> 0x1f)) * 0x3ad7;
      param_4[2] = uVar1;
      param_4[3] = uVar2;
      *(int *)(param_3 + 4 + (long)(int)lVar5 * 4) = (int)uVar2 >> 0xf;
      lVar5 = lVar5 + 2;
    } while ((ulong)param_2 << 1 != lVar5);
  }
  return;
}


// ===== 00656810  FUN_00656810 =====

void FUN_00656810(int *param_1,uint param_2,long param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  
  if (0 < (int)param_2) {
    lVar4 = 0;
    piVar5 = param_1;
    do {
      iVar1 = param_4[5];
      iVar2 = param_4[4] + ((*piVar5 - iVar1) + 0x2000 >> 0xe) * 0x335;
      param_4[4] = *piVar5;
      param_4[5] = iVar2;
      iVar2 = iVar2 - param_4[6];
      iVar1 = iVar1 + ((iVar2 >> 0xe) - (iVar2 >> 0x1f)) * 0x17de;
      iVar2 = iVar1 - param_4[7];
      iVar3 = param_4[6] + ((iVar2 >> 0xe) - (iVar2 >> 0x1f)) * 0x305e;
      iVar2 = iVar3 >> 0xf;
      param_4[6] = iVar1;
      param_4[7] = iVar3;
      if (iVar2 == -0x8000 || iVar2 + 0x8000 < 0 != SCARRY4(iVar2,0x8000)) {
        iVar2 = -0x8000;
      }
      if (0x7ffe < iVar2) {
        iVar2 = 0x7fff;
      }
      *(short *)(param_3 + (long)(int)lVar4 * 2) = (short)iVar2;
      lVar4 = lVar4 + 2;
      piVar5 = piVar5 + 1;
    } while ((ulong)param_2 << 1 != lVar4);
    lVar4 = 0;
    do {
      iVar1 = param_4[1];
      iVar2 = *param_4 + ((*param_1 - iVar1) + 0x2000 >> 0xe) * 0xbea;
      *param_4 = *param_1;
      param_4[1] = iVar2;
      iVar2 = iVar2 - param_4[2];
      iVar1 = iVar1 + ((iVar2 >> 0xe) - (iVar2 >> 0x1f)) * 0x2498;
      iVar2 = iVar1 - param_4[3];
      iVar3 = param_4[2] + ((iVar2 >> 0xe) - (iVar2 >> 0x1f)) * 0x3ad7;
      iVar2 = iVar3 >> 0xf;
      param_4[2] = iVar1;
      param_4[3] = iVar3;
      if (iVar2 == -0x8000 || iVar2 + 0x8000 < 0 != SCARRY4(iVar2,0x8000)) {
        iVar2 = -0x8000;
      }
      if (0x7ffe < iVar2) {
        iVar2 = 0x7fff;
      }
      *(short *)(param_3 + 2 + (long)(int)lVar4 * 2) = (short)iVar2;
      lVar4 = lVar4 + 2;
      param_1 = param_1 + 1;
    } while ((ulong)param_2 << 1 != lVar4);
  }
  return;
}


// ===== 00656938  FUN_00656938 =====

void FUN_00656938(short *param_1,int param_2,int *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  short *psVar5;
  ulong uVar6;
  ulong uVar7;
  short *psVar8;
  int *piVar9;
  short *psVar10;
  int *piVar11;
  uint uVar12;
  
  uVar4 = (ulong)(uint)(param_2 >> 1);
  if (0 < param_2 >> 1) {
    uVar12 = param_4[0xc];
    psVar5 = param_1 + 1;
    uVar6 = uVar4;
    psVar8 = param_1 + 1;
    piVar11 = param_3;
    do {
      uVar1 = param_4[1];
      uVar6 = uVar6 - 1;
      uVar2 = *param_4 + ((int)((uVar12 - uVar1) + 0x2000) >> 0xe) * 0xbea;
      *param_4 = uVar12;
      param_4[1] = uVar2;
      iVar3 = uVar2 - param_4[2];
      uVar1 = uVar1 + ((iVar3 >> 0xe) - (iVar3 >> 0x1f)) * 0x2498;
      iVar3 = uVar1 - param_4[3];
      uVar12 = param_4[2] + ((iVar3 >> 0xe) - (iVar3 >> 0x1f)) * 0x3ad7;
      param_4[2] = uVar1;
      param_4[3] = uVar12;
      *piVar11 = (int)uVar12 >> 1;
      uVar12 = (int)*psVar8 << 0xf | 0x4000;
      uVar7 = uVar4;
      piVar9 = param_3;
      psVar8 = psVar8 + 2;
      psVar10 = param_1;
      piVar11 = piVar11 + 2;
    } while (uVar6 != 0);
    do {
      uVar7 = uVar7 - 1;
      uVar12 = param_4[5];
      uVar2 = (int)*psVar10 << 0xf | 0x4000;
      uVar1 = param_4[4] + ((int)((uVar2 - uVar12) + 0x2000) >> 0xe) * 0x335;
      param_4[4] = uVar2;
      param_4[5] = uVar1;
      iVar3 = uVar1 - param_4[6];
      uVar12 = uVar12 + ((iVar3 >> 0xe) - (iVar3 >> 0x1f)) * 0x17de;
      iVar3 = uVar12 - param_4[7];
      uVar1 = param_4[6] + ((iVar3 >> 0xe) - (iVar3 >> 0x1f)) * 0x305e;
      param_4[6] = uVar12;
      param_4[7] = uVar1;
      *piVar9 = *piVar9 + ((int)uVar1 >> 1) >> 0xf;
      piVar9 = piVar9 + 2;
      psVar10 = psVar10 + 2;
    } while (uVar7 != 0);
    param_3 = param_3 + 1;
    uVar6 = uVar4;
    piVar11 = param_3;
    do {
      uVar6 = uVar6 - 1;
      uVar12 = param_4[9];
      uVar2 = (int)*param_1 << 0xf | 0x4000;
      uVar1 = param_4[8] + ((int)((uVar2 - uVar12) + 0x2000) >> 0xe) * 0xbea;
      param_4[8] = uVar2;
      param_4[9] = uVar1;
      iVar3 = uVar1 - param_4[10];
      uVar12 = uVar12 + ((iVar3 >> 0xe) - (iVar3 >> 0x1f)) * 0x2498;
      iVar3 = uVar12 - param_4[0xb];
      uVar1 = param_4[10] + ((iVar3 >> 0xe) - (iVar3 >> 0x1f)) * 0x3ad7;
      param_4[10] = uVar12;
      param_4[0xb] = uVar1;
      *piVar11 = (int)uVar1 >> 1;
      param_1 = param_1 + 2;
      piVar11 = piVar11 + 2;
    } while (uVar6 != 0);
    do {
      uVar4 = uVar4 - 1;
      uVar12 = param_4[0xd];
      uVar2 = (int)*psVar5 << 0xf | 0x4000;
      uVar1 = param_4[0xc] + ((int)((uVar2 - uVar12) + 0x2000) >> 0xe) * 0x335;
      param_4[0xc] = uVar2;
      param_4[0xd] = uVar1;
      iVar3 = uVar1 - param_4[0xe];
      uVar12 = uVar12 + ((iVar3 >> 0xe) - (iVar3 >> 0x1f)) * 0x17de;
      iVar3 = uVar12 - param_4[0xf];
      uVar1 = param_4[0xe] + ((iVar3 >> 0xe) - (iVar3 >> 0x1f)) * 0x305e;
      param_4[0xe] = uVar12;
      param_4[0xf] = uVar1;
      *param_3 = *param_3 + ((int)uVar1 >> 1) >> 0xf;
      psVar5 = psVar5 + 2;
      param_3 = param_3 + 2;
    } while (uVar4 != 0);
  }
  return;
}


// ===== 00656b30  FUN_00656b30 =====

void FUN_00656b30(int *param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  ulong uVar4;
  int *piVar5;
  ulong uVar6;
  ulong uVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  
  uVar4 = (ulong)(uint)(param_2 >> 1);
  if (0 < param_2 >> 1) {
    piVar5 = param_1 + 1;
    uVar6 = uVar4;
    piVar8 = param_3;
    piVar3 = param_1 + 1;
    piVar12 = param_4 + 0xc;
    do {
      piVar10 = piVar3;
      iVar1 = param_4[1];
      uVar6 = uVar6 - 1;
      iVar2 = *param_4 + ((*piVar12 - iVar1) + 0x2000 >> 0xe) * 0xbea;
      *param_4 = *piVar12;
      param_4[1] = iVar2;
      iVar2 = iVar2 - param_4[2];
      iVar1 = iVar1 + ((iVar2 >> 0xe) - (iVar2 >> 0x1f)) * 0x2498;
      iVar2 = iVar1 - param_4[3];
      iVar2 = param_4[2] + ((iVar2 >> 0xe) - (iVar2 >> 0x1f)) * 0x3ad7;
      param_4[2] = iVar1;
      param_4[3] = iVar2;
      *piVar8 = iVar2 >> 1;
      uVar7 = uVar4;
      piVar9 = param_3;
      piVar8 = piVar8 + 2;
      piVar11 = param_1;
      piVar3 = piVar10 + 2;
      piVar12 = piVar10;
    } while (uVar6 != 0);
    do {
      iVar1 = param_4[5];
      uVar7 = uVar7 - 1;
      iVar2 = param_4[4] + ((*piVar11 - iVar1) + 0x2000 >> 0xe) * 0x335;
      param_4[4] = *piVar11;
      param_4[5] = iVar2;
      iVar2 = iVar2 - param_4[6];
      iVar1 = iVar1 + ((iVar2 >> 0xe) - (iVar2 >> 0x1f)) * 0x17de;
      iVar2 = iVar1 - param_4[7];
      iVar2 = param_4[6] + ((iVar2 >> 0xe) - (iVar2 >> 0x1f)) * 0x305e;
      param_4[6] = iVar1;
      param_4[7] = iVar2;
      *piVar9 = *piVar9 + (iVar2 >> 1) >> 0xf;
      piVar9 = piVar9 + 2;
      piVar11 = piVar11 + 2;
    } while (uVar7 != 0);
    param_3 = param_3 + 1;
    uVar6 = uVar4;
    piVar8 = param_3;
    do {
      iVar1 = param_4[9];
      uVar6 = uVar6 - 1;
      iVar2 = param_4[8] + ((*param_1 - iVar1) + 0x2000 >> 0xe) * 0xbea;
      param_4[8] = *param_1;
      param_4[9] = iVar2;
      iVar2 = iVar2 - param_4[10];
      iVar1 = iVar1 + ((iVar2 >> 0xe) - (iVar2 >> 0x1f)) * 0x2498;
      iVar2 = iVar1 - param_4[0xb];
      iVar2 = param_4[10] + ((iVar2 >> 0xe) - (iVar2 >> 0x1f)) * 0x3ad7;
      param_4[10] = iVar1;
      param_4[0xb] = iVar2;
      *piVar8 = iVar2 >> 1;
      param_1 = param_1 + 2;
      piVar8 = piVar8 + 2;
    } while (uVar6 != 0);
    do {
      iVar1 = param_4[0xd];
      uVar4 = uVar4 - 1;
      iVar2 = param_4[0xc] + ((*piVar5 - iVar1) + 0x2000 >> 0xe) * 0x335;
      param_4[0xc] = *piVar5;
      param_4[0xd] = iVar2;
      iVar2 = iVar2 - param_4[0xe];
      iVar1 = iVar1 + ((iVar2 >> 0xe) - (iVar2 >> 0x1f)) * 0x17de;
      iVar2 = iVar1 - param_4[0xf];
      iVar2 = param_4[0xe] + ((iVar2 >> 0xe) - (iVar2 >> 0x1f)) * 0x305e;
      param_4[0xe] = iVar1;
      param_4[0xf] = iVar2;
      *param_3 = *param_3 + (iVar2 >> 1) >> 0xf;
      piVar5 = piVar5 + 2;
      param_3 = param_3 + 2;
    } while (uVar4 != 0);
  }
  return;
}


// ===== 00656d08  FUN_00656d08 =====

void FUN_00656d08(int *param_1,int *param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auVar7 [16];
  bool bVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  ulong uVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
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
  int iVar58;
  int iVar59;
  int iVar60;
  int iVar61;
  
  if (param_3 == 0) {
    return;
  }
  if (0xb < param_3) {
    uVar12 = param_3 - 1;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar12;
    bVar8 = SUB168(auVar7 * ZEXT816(0xc),8) == 0;
    if ((((((param_2 <= param_2 + uVar12 * 2) && (param_2 + 1 <= param_2 + 1 + uVar12 * 2)) &&
          (uVar12 >> 0x3d == 0)) &&
         (((param_1 <= param_1 + uVar12 * 3 && (bVar8)) &&
          ((param_1 + 1 <= param_1 + 1 + uVar12 * 3 &&
           ((bVar8 && (param_1 + 2 <= param_1 + 2 + uVar12 * 3)))))))) &&
        ((bVar8 && ((((((param_1 + 3 <= param_1 + 3 + uVar12 * 3 && (bVar8)) &&
                       (param_1 + 4 <= param_1 + 4 + uVar12 * 3)) &&
                      ((bVar8 && (param_1 + 5 <= param_1 + 5 + uVar12 * 3)))) &&
                     ((bVar8 && ((param_1 + 6 <= param_1 + 6 + uVar12 * 3 && (bVar8)))))) &&
                    (piVar13 = param_1 + 7, piVar13 <= piVar13 + uVar12 * 3)))))) &&
       ((((bVar8 && (param_1 + 8 <= param_1 + 8 + uVar12 * 3)) && (bVar8)) &&
        ((param_1 + param_3 * 3 + 6 <= param_2 || (param_2 + param_3 * 2 <= param_1)))))) {
      uVar10 = param_3 & 0xfffffffffffffffc;
      param_1 = param_1 + uVar10 * 3;
      piVar11 = param_2 + uVar10 * 2;
      uVar12 = param_3 & 0xfffffffffffffffc;
      do {
        iVar3 = piVar13[-3];
        iVar1 = *piVar13;
        iVar2 = piVar13[3];
        iVar4 = piVar13[-4];
        iVar5 = piVar13[-2];
        iVar21 = piVar13[-6];
        iVar28 = piVar13[-5];
        iVar22 = piVar13[-3];
        iVar29 = piVar13[-2];
        iVar35 = piVar13[-1];
        iVar24 = *piVar13;
        iVar31 = piVar13[1];
        iVar36 = piVar13[2];
        iVar26 = piVar13[3];
        iVar33 = piVar13[4];
        iVar37 = piVar13[5];
        iVar6 = piVar13[-1];
        iVar38 = piVar13[-4];
        iVar42 = piVar13[-3];
        iVar46 = piVar13[-2];
        iVar39 = piVar13[-1];
        iVar43 = *piVar13;
        iVar47 = piVar13[1];
        iVar40 = piVar13[2];
        iVar44 = piVar13[3];
        iVar48 = piVar13[4];
        iVar41 = piVar13[5];
        iVar45 = piVar13[6];
        iVar49 = piVar13[7];
        iVar50 = piVar13[-1];
        iVar54 = *piVar13;
        iVar58 = piVar13[1];
        iVar51 = piVar13[2];
        iVar55 = piVar13[3];
        iVar59 = piVar13[4];
        iVar52 = piVar13[5];
        iVar56 = piVar13[6];
        iVar60 = piVar13[7];
        iVar53 = piVar13[8];
        iVar57 = piVar13[9];
        iVar61 = piVar13[10];
        uVar12 = uVar12 - 4;
        iVar14 = piVar13[2];
        iVar17 = piVar13[1];
        iVar19 = piVar13[4];
        iVar16 = piVar13[1];
        iVar23 = piVar13[2];
        iVar30 = piVar13[3];
        iVar18 = piVar13[4];
        iVar25 = piVar13[5];
        iVar32 = piVar13[6];
        iVar20 = piVar13[7];
        iVar27 = piVar13[8];
        iVar34 = piVar13[9];
        iVar15 = piVar13[6];
        *param_2 = piVar13[-6] * -0x802 + piVar13[-7] * 0x30a + piVar13[-5] * 0x43f +
                   piVar13[-4] * 0x5af5 + iVar3 * 0x3267 + piVar13[-2] * -0xec7 +
                   piVar13[-1] * 0x1b9 + *piVar13 * 0xde + 0x4000;
        param_2[1] = iVar28 * 0x1b9 + iVar21 * 0xde + iVar38 * -0xec7 + iVar42 * 0x3267 +
                     iVar46 * 0x5af5 + iVar50 * 0x43f + iVar54 * -0x802 + iVar58 * 0x30a + 0x4000;
        param_2[2] = iVar3 * -0x802 + iVar4 * 0x30a + iVar5 * 0x43f + iVar35 * 0x5af5 +
                     iVar1 * 0x3267 + iVar16 * -0xec7 + iVar23 * 0x1b9 + iVar30 * 0xde + 0x4000;
        param_2[3] = iVar29 * 0x1b9 + iVar22 * 0xde + iVar39 * -0xec7 + iVar43 * 0x3267 +
                     iVar47 * 0x5af5 + iVar51 * 0x43f + iVar55 * -0x802 + iVar59 * 0x30a + 0x4000;
        param_2[4] = iVar1 * -0x802 + iVar6 * 0x30a + iVar17 * 0x43f + iVar36 * 0x5af5 +
                     iVar2 * 0x3267 + iVar18 * -0xec7 + iVar25 * 0x1b9 + iVar32 * 0xde + 0x4000;
        param_2[5] = iVar31 * 0x1b9 + iVar24 * 0xde + iVar40 * -0xec7 + iVar44 * 0x3267 +
                     iVar48 * 0x5af5 + iVar52 * 0x43f + iVar56 * -0x802 + iVar60 * 0x30a + 0x4000;
        param_2[6] = iVar2 * -0x802 + iVar14 * 0x30a + iVar19 * 0x43f + iVar37 * 0x5af5 +
                     iVar15 * 0x3267 + iVar20 * -0xec7 + iVar27 * 0x1b9 + iVar34 * 0xde + 0x4000;
        param_2[7] = iVar33 * 0x1b9 + iVar26 * 0xde + iVar41 * -0xec7 + iVar45 * 0x3267 +
                     iVar49 * 0x5af5 + iVar53 * 0x43f + iVar57 * -0x802 + iVar61 * 0x30a + 0x4000;
        param_2 = param_2 + 8;
        piVar13 = piVar13 + 0xc;
      } while (uVar12 != 0);
      if (param_3 == uVar10) {
        return;
      }
      goto LAB_00656d20;
    }
  }
  uVar10 = 0;
  piVar11 = param_2;
LAB_00656d20:
  lVar9 = param_3 - uVar10;
  do {
    lVar9 = lVar9 + -1;
    piVar13 = param_1 + 3;
    *piVar11 = param_1[1] * -0x802 + *param_1 * 0x30a + param_1[2] * 0x43f + *piVar13 * 0x5af5 +
               param_1[4] * 0x3267 + param_1[5] * -0xec7 + param_1[6] * 0x1b9 + param_1[7] * 0xde +
               0x4000;
    piVar11[1] = param_1[2] * 0x1b9 + param_1[1] * 0xde + *piVar13 * -0xec7 + param_1[4] * 0x3267 +
                 param_1[5] * 0x5af5 + param_1[6] * 0x43f + param_1[7] * -0x802 + param_1[8] * 0x30a
                 + 0x4000;
    piVar11 = piVar11 + 2;
    param_1 = piVar13;
  } while (lVar9 != 0);
  return;
}


// ===== 00657030  FUN_00657030 =====

void FUN_00657030(int *param_1,int *param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  bool bVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  ulong uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
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
  int iVar58;
  int iVar59;
  int iVar60;
  int iVar61;
  int iVar62;
  int iVar63;
  int iVar64;
  int iVar65;
  int iVar66;
  int iVar67;
  int iVar68;
  int iVar69;
  int iVar70;
  int iVar71;
  int iVar72;
  int iVar73;
  int iVar74;
  int iVar75;
  int iVar76;
  int iVar77;
  int iVar78;
  int iVar79;
  int iVar80;
  int iVar81;
  int iVar82;
  int iVar83;
  int iVar84;
  int iVar85;
  int iVar86;
  int iVar87;
  int iVar88;
  int iVar89;
  int iVar90;
  int iVar91;
  int iVar92;
  int iVar93;
  int iVar94;
  int iVar95;
  
  if (param_3 == 0) {
    return;
  }
  if (0xb < param_3) {
    uVar4 = param_3 - 1;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar4;
    bVar2 = SUB168(auVar1 * ZEXT816(0xc),8) == 0;
    if (((((((param_1 + 9 <= param_1 + 9 + uVar4 * 4) && (param_1 + 7 <= param_1 + 7 + uVar4 * 4))
           && (param_1 + 6 <= param_1 + 6 + uVar4 * 4)) &&
          ((param_1 + 5 <= param_1 + 5 + uVar4 * 4 &&
           (piVar7 = param_1 + 4, piVar7 <= piVar7 + uVar4 * 4)))) &&
         ((param_1 + 3 <= param_1 + 3 + uVar4 * 4 &&
          ((param_1 + 2 <= param_1 + 2 + uVar4 * 4 && (param_1 + 1 <= param_1 + 1 + uVar4 * 4))))))
        && (param_2 <= param_2 + uVar4 * 3)) &&
       (((((bVar2 && (param_2 + 1 <= param_2 + 1 + uVar4 * 3)) && (bVar2)) &&
         (((param_2 + 2 <= param_2 + 2 + uVar4 * 3 && (bVar2)) &&
          ((param_1 <= param_1 + uVar4 * 4 &&
           ((uVar4 >> 0x3c == 0 && (param_1 + 8 <= param_1 + 8 + uVar4 * 4)))))))) &&
        ((param_1 + param_3 * 4 + 6 <= param_2 || (param_2 + param_3 * 3 <= param_1)))))) {
      uVar4 = param_3 & 0x1ffffffffffffffc;
      piVar5 = param_2 + uVar4 * 3;
      param_1 = param_1 + uVar4 * 4;
      uVar6 = param_3 & 0x1ffffffffffffffc;
      do {
        uVar6 = uVar6 - 4;
        iVar69 = *piVar7;
        iVar76 = piVar7[1];
        iVar83 = piVar7[2];
        iVar90 = piVar7[3];
        iVar71 = piVar7[4];
        iVar78 = piVar7[5];
        iVar85 = piVar7[6];
        iVar92 = piVar7[7];
        iVar73 = piVar7[8];
        iVar80 = piVar7[9];
        iVar87 = piVar7[10];
        iVar94 = piVar7[0xb];
        iVar56 = piVar7[4];
        iVar59 = piVar7[5];
        iVar62 = piVar7[6];
        iVar65 = piVar7[7];
        iVar57 = piVar7[8];
        iVar60 = piVar7[9];
        iVar63 = piVar7[10];
        iVar66 = piVar7[0xb];
        iVar58 = piVar7[0xc];
        iVar61 = piVar7[0xd];
        iVar64 = piVar7[0xe];
        iVar67 = piVar7[0xf];
        iVar8 = piVar7[-2];
        iVar12 = piVar7[-1];
        iVar16 = *piVar7;
        iVar20 = piVar7[1];
        iVar9 = piVar7[2];
        iVar13 = piVar7[3];
        iVar17 = piVar7[4];
        iVar21 = piVar7[5];
        iVar10 = piVar7[6];
        iVar14 = piVar7[7];
        iVar18 = piVar7[8];
        iVar22 = piVar7[9];
        iVar11 = piVar7[10];
        iVar15 = piVar7[0xb];
        iVar19 = piVar7[0xc];
        iVar23 = piVar7[0xd];
        iVar40 = piVar7[1];
        iVar44 = piVar7[2];
        iVar48 = piVar7[3];
        iVar52 = piVar7[4];
        iVar41 = piVar7[5];
        iVar45 = piVar7[6];
        iVar49 = piVar7[7];
        iVar53 = piVar7[8];
        iVar42 = piVar7[9];
        iVar46 = piVar7[10];
        iVar50 = piVar7[0xb];
        iVar54 = piVar7[0xc];
        iVar43 = piVar7[0xd];
        iVar47 = piVar7[0xe];
        iVar51 = piVar7[0xf];
        iVar55 = piVar7[0x10];
        iVar24 = piVar7[-3];
        iVar28 = piVar7[-2];
        iVar32 = piVar7[-1];
        iVar36 = *piVar7;
        iVar25 = piVar7[1];
        iVar29 = piVar7[2];
        iVar33 = piVar7[3];
        iVar37 = piVar7[4];
        iVar26 = piVar7[5];
        iVar30 = piVar7[6];
        iVar34 = piVar7[7];
        iVar38 = piVar7[8];
        iVar27 = piVar7[9];
        iVar31 = piVar7[10];
        iVar35 = piVar7[0xb];
        iVar39 = piVar7[0xc];
        iVar68 = piVar7[2];
        iVar75 = piVar7[3];
        iVar82 = piVar7[4];
        iVar89 = piVar7[5];
        iVar70 = piVar7[6];
        iVar77 = piVar7[7];
        iVar84 = piVar7[8];
        iVar91 = piVar7[9];
        iVar72 = piVar7[10];
        iVar79 = piVar7[0xb];
        iVar86 = piVar7[0xc];
        iVar93 = piVar7[0xd];
        iVar74 = piVar7[0xe];
        iVar81 = piVar7[0xf];
        iVar88 = piVar7[0x10];
        iVar95 = piVar7[0x11];
        *param_2 = piVar7[-3] * -0x93a + piVar7[-4] * 0x2ff + piVar7[-2] * 0x982 +
                   piVar7[-1] * 0x5f56 + *piVar7 * 0x297c + piVar7[1] * -0xefe + piVar7[2] * 0x2d1 +
                   piVar7[3] * 0x5a + 0x4000;
        param_2[1] = (iVar44 + iVar32) * -0xa56 + (iVar40 + iVar36) * 0x4a76 +
                     (iVar48 + iVar28) * -0x17d + (iVar52 + iVar24) * 0x182 + 0x4000;
        param_2[2] = iVar12 * 0x2d1 + iVar8 * 0x5a + iVar16 * -0xefe + iVar20 * 0x297c +
                     iVar68 * 0x5f56 + iVar75 * 0x982 + iVar82 * -0x93a + iVar89 * 0x2ff + 0x4000;
        param_2[3] = iVar76 * -0x93a + iVar69 * 0x2ff + iVar83 * 0x982 + iVar90 * 0x5f56 +
                     iVar56 * 0x297c + iVar59 * -0xefe + iVar62 * 0x2d1 + iVar65 * 0x5a + 0x4000;
        param_2[4] = (iVar45 + iVar33) * -0xa56 + (iVar41 + iVar37) * 0x4a76 +
                     (iVar49 + iVar29) * -0x17d + (iVar53 + iVar25) * 0x182 + 0x4000;
        param_2[5] = iVar13 * 0x2d1 + iVar9 * 0x5a + iVar17 * -0xefe + iVar21 * 0x297c +
                     iVar70 * 0x5f56 + iVar77 * 0x982 + iVar84 * -0x93a + iVar91 * 0x2ff + 0x4000;
        param_2[6] = iVar78 * -0x93a + iVar71 * 0x2ff + iVar85 * 0x982 + iVar92 * 0x5f56 +
                     iVar57 * 0x297c + iVar60 * -0xefe + iVar63 * 0x2d1 + iVar66 * 0x5a + 0x4000;
        param_2[7] = (iVar46 + iVar34) * -0xa56 + (iVar42 + iVar38) * 0x4a76 +
                     (iVar50 + iVar30) * -0x17d + (iVar54 + iVar26) * 0x182 + 0x4000;
        param_2[8] = iVar14 * 0x2d1 + iVar10 * 0x5a + iVar18 * -0xefe + iVar22 * 0x297c +
                     iVar72 * 0x5f56 + iVar79 * 0x982 + iVar86 * -0x93a + iVar93 * 0x2ff + 0x4000;
        param_2[9] = iVar80 * -0x93a + iVar73 * 0x2ff + iVar87 * 0x982 + iVar94 * 0x5f56 +
                     iVar58 * 0x297c + iVar61 * -0xefe + iVar64 * 0x2d1 + iVar67 * 0x5a + 0x4000;
        param_2[10] = (iVar47 + iVar35) * -0xa56 + (iVar43 + iVar39) * 0x4a76 +
                      (iVar51 + iVar31) * -0x17d + (iVar55 + iVar27) * 0x182 + 0x4000;
        param_2[0xb] = iVar15 * 0x2d1 + iVar11 * 0x5a + iVar19 * -0xefe + iVar23 * 0x297c +
                       iVar74 * 0x5f56 + iVar81 * 0x982 + iVar88 * -0x93a + iVar95 * 0x2ff + 0x4000;
        param_2 = param_2 + 0xc;
        piVar7 = piVar7 + 0x10;
      } while (uVar6 != 0);
      if (param_3 == uVar4) {
        return;
      }
      goto LAB_0065718c;
    }
  }
  uVar4 = 0;
  piVar5 = param_2;
LAB_0065718c:
  lVar3 = param_3 - uVar4;
  do {
    lVar3 = lVar3 + -1;
    piVar7 = param_1 + 4;
    *piVar5 = param_1[1] * -0x93a + *param_1 * 0x2ff + param_1[2] * 0x982 + param_1[3] * 0x5f56 +
              *piVar7 * 0x297c + param_1[5] * -0xefe + param_1[6] * 0x2d1 + param_1[7] * 0x5a +
              0x4000;
    piVar5[1] = (param_1[6] + param_1[3]) * -0xa56 + (param_1[5] + *piVar7) * 0x4a76 +
                (param_1[7] + param_1[2]) * -0x17d + (param_1[8] + param_1[1]) * 0x182 + 0x4000;
    piVar5[2] = param_1[3] * 0x2d1 + param_1[2] * 0x5a + *piVar7 * -0xefe + param_1[5] * 0x297c +
                param_1[6] * 0x5f56 + param_1[7] * 0x982 + param_1[8] * -0x93a + param_1[9] * 0x2ff
                + 0x4000;
    piVar5 = piVar5 + 3;
    param_1 = piVar7;
  } while (lVar3 != 0);
  return;
}


// ===== 006573e8  FUN_006573e8 =====

void FUN_006573e8(long param_1,uint *param_2,long param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  
  if (param_3 != 0) {
    piVar10 = (int *)(param_1 + 0x24);
    do {
      param_3 = param_3 + -1;
      *param_2 = piVar10[-6] << 0xf | 0x4000;
      param_2[4] = piVar10[-3] * 0x3ce + piVar10[-4] * -0x9c + piVar10[-2] * -0xf17 +
                   piVar10[-1] * 0x48ab + *piVar10 * 0x54bb + piVar10[1] * -0x1866 +
                   piVar10[2] * 0x931 + piVar10[3] * -0x2c8 + piVar10[4] * 0x7e + 0x4000;
      iVar2 = piVar10[7];
      iVar6 = piVar10[8];
      iVar3 = piVar10[5];
      iVar7 = piVar10[6];
      iVar4 = piVar10[3];
      iVar8 = piVar10[4];
      iVar5 = piVar10[1];
      iVar9 = piVar10[2];
      param_2[1] = piVar10[-8] * -0x29d + piVar10[-9] * 0x75 + piVar10[-7] * 0x8c5 +
                   piVar10[-6] * -0x1827 + piVar10[-5] * 0x669b + piVar10[-4] * 0x34d9 +
                   piVar10[-3] * -0xcad + piVar10[-2] * 0x34d + piVar10[-1] * -0x8a + 0x4000;
      param_2[7] = iVar2 * -0x29d + iVar6 * 0x75 + iVar7 * 0x8c5 + iVar3 * -0x1827 + iVar8 * 0x669b
                   + iVar4 * 0x34d9 + iVar9 * -0xcad + iVar5 * 0x34d + *piVar10 * -0x8a + 0x4000;
      iVar2 = piVar10[5];
      iVar6 = piVar10[6];
      iVar3 = piVar10[3];
      iVar7 = piVar10[4];
      iVar4 = piVar10[-1];
      iVar8 = *piVar10;
      iVar5 = piVar10[1];
      iVar9 = piVar10[2];
      param_2[2] = piVar10[-6] * 0x264 + piVar10[-7] * -0x65 + piVar10[-5] * -0x8eb +
                   piVar10[-4] * 0x2154 + piVar10[-3] * 0x745e + piVar10[-2] * -0x1412 +
                   iVar4 * 0x6fd + iVar8 * -0x20c + iVar5 * 0x5b + 0x4000;
      param_2[6] = iVar2 * 0x264 + iVar6 * -0x65 + iVar7 * -0x8eb + iVar3 * 0x2154 + iVar9 * 0x745e
                   + iVar5 * -0x1412 + iVar8 * 0x6fd + iVar4 * -0x20c + piVar10[-2] * 0x5b + 0x4000;
      iVar2 = piVar10[4];
      iVar6 = piVar10[5];
      iVar3 = piVar10[2];
      iVar7 = piVar10[3];
      iVar4 = piVar10[-2];
      iVar8 = piVar10[-1];
      iVar5 = *piVar10;
      iVar9 = piVar10[1];
      param_2[3] = piVar10[-5] * -0x124 + piVar10[-6] * 0x32 + piVar10[-4] * 0x3f8 +
                   piVar10[-3] * -0xbf8 + iVar4 * 0x7d0a + iVar8 * 0xf5d + iVar5 * -0x47b +
                   iVar9 * 0x13b + iVar3 * -0x35 + 0x4000;
      piVar1 = piVar10 + -3;
      piVar10 = piVar10 + 0xb;
      param_2[5] = iVar2 * -0x124 + iVar6 * 0x32 + iVar7 * 0x3f8 + iVar3 * -0xbf8 + iVar9 * 0x7d0a +
                   iVar5 * 0xf5d + iVar8 * -0x47b + iVar4 * 0x13b + *piVar1 * -0x35 + 0x4000;
      param_2 = param_2 + 8;
    } while (param_3 != 0);
  }
  return;
}


// ===== 0065768c  FUN_0065768c =====

/* WARNING: Type propagation algorithm not settling */

uint FUN_0065768c(long param_1,long param_2,ulong param_3,short *param_4)

{
  undefined2 uVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 **ppuVar7;
  long lVar8;
  ulong uVar9;
  undefined1 **ppuVar10;
  short *psVar11;
  undefined1 **ppuVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  short sVar22;
  short sVar23;
  undefined1 *puVar20;
  undefined8 uVar21;
  short sVar24;
  short sVar26;
  short sVar27;
  undefined1 *puVar25;
  short sVar28;
  short sVar31;
  short sVar32;
  undefined1 *puVar29;
  short sVar33;
  undefined8 uVar30;
  short sVar35;
  short sVar36;
  undefined1 *puVar34;
  short sVar37;
  short sVar39;
  short sVar40;
  undefined1 *puVar38;
  short sVar41;
  short sVar43;
  short sVar44;
  undefined1 *puVar42;
  short sVar45;
  short sVar47;
  short sVar48;
  undefined1 *puVar46;
  short sVar49;
  short sVar51;
  short sVar52;
  undefined1 *puVar50;
  short sVar53;
  undefined1 auStack_342 [2];
  undefined1 *local_340 [7];
  undefined1 *puStack_308;
  undefined1 *puStack_300;
  undefined1 *puStack_2f8;
  undefined1 *local_2f0;
  undefined1 *puStack_2e8;
  undefined1 *puStack_2e0;
  undefined1 *puStack_2d8;
  undefined1 *local_2d0;
  undefined1 *local_2c0 [7];
  undefined1 *puStack_288;
  undefined1 *puStack_280;
  undefined1 *puStack_278;
  undefined1 *local_270;
  undefined1 *puStack_268;
  undefined1 *puStack_260;
  undefined1 *puStack_258;
  undefined1 *local_250;
  undefined1 *local_240 [7];
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
  undefined1 *local_150 [7];
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
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  int local_54;
  
  ppuVar7 = local_340;
  uVar4 = param_3 >> 1;
  local_150[3] = &DAT_aaaaaaaaaaaaaaaa;
  local_150[2] = &DAT_aaaaaaaaaaaaaaaa;
  local_150[5] = &DAT_aaaaaaaaaaaaaaaa;
  local_150[4] = &DAT_aaaaaaaaaaaaaaaa;
  puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
  local_150[6] = &DAT_aaaaaaaaaaaaaaaa;
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
  local_150[1] = &DAT_aaaaaaaaaaaaaaaa;
  local_150[0] = &DAT_aaaaaaaaaaaaaaaa;
  local_240[1] = &DAT_aaaaaaaaaaaaaaaa;
  local_240[0] = &DAT_aaaaaaaaaaaaaaaa;
  local_250 = &DAT_aaaaaaaaaaaaaaaa;
  local_340[3] = &DAT_aaaaaaaaaaaaaaaa;
  local_340[2] = &DAT_aaaaaaaaaaaaaaaa;
  local_340[5] = &DAT_aaaaaaaaaaaaaaaa;
  local_340[4] = &DAT_aaaaaaaaaaaaaaaa;
  puStack_308 = &DAT_aaaaaaaaaaaaaaaa;
  local_340[6] = &DAT_aaaaaaaaaaaaaaaa;
  puStack_2f8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_300 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_2e8 = &DAT_aaaaaaaaaaaaaaaa;
  local_2f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_2d8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_2e0 = &DAT_aaaaaaaaaaaaaaaa;
  local_2c0[3] = &DAT_aaaaaaaaaaaaaaaa;
  local_2c0[2] = &DAT_aaaaaaaaaaaaaaaa;
  local_2c0[5] = &DAT_aaaaaaaaaaaaaaaa;
  local_2c0[4] = &DAT_aaaaaaaaaaaaaaaa;
  puStack_288 = &DAT_aaaaaaaaaaaaaaaa;
  local_2c0[6] = &DAT_aaaaaaaaaaaaaaaa;
  puStack_278 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_280 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_268 = &DAT_aaaaaaaaaaaaaaaa;
  local_270 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_258 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_260 = &DAT_aaaaaaaaaaaaaaaa;
  local_240[3] = &DAT_aaaaaaaaaaaaaaaa;
  local_240[2] = &DAT_aaaaaaaaaaaaaaaa;
  local_240[5] = &DAT_aaaaaaaaaaaaaaaa;
  local_240[4] = &DAT_aaaaaaaaaaaaaaaa;
  puStack_208 = &DAT_aaaaaaaaaaaaaaaa;
  local_240[6] = &DAT_aaaaaaaaaaaaaaaa;
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
  local_2c0[1] = &DAT_aaaaaaaaaaaaaaaa;
  local_2c0[0] = &DAT_aaaaaaaaaaaaaaaa;
  local_2d0 = &DAT_aaaaaaaaaaaaaaaa;
  local_340[1] = &DAT_aaaaaaaaaaaaaaaa;
  local_340[0] = &DAT_aaaaaaaaaaaaaaaa;
  if (uVar4 == 0) {
    uVar4 = 0;
LAB_006578ec:
    bVar2 = true;
  }
  else {
    lVar8 = 0;
    iVar17 = (uint)*(ushort *)(param_1 + 0x2a8) << 0x10;
    uVar9 = uVar4;
    do {
      uVar9 = uVar9 - 1;
      iVar16 = (int)*(short *)(param_2 + lVar8 * 2);
      iVar17 = iVar17 + iVar16 * 0x51ec;
      *(short *)((long)local_150 + lVar8) = (short)((uint)iVar17 >> 0x10);
      lVar8 = lVar8 + 2;
      iVar17 = (iVar17 >> 0x10) * -0xa3d8 + iVar16 * 0x8000;
    } while (uVar9 != 0);
    lVar8 = 0;
    iVar16 = (uint)*(ushort *)(param_1 + 0x2b2) << 0x10;
    *(short *)(param_1 + 0x2a8) = (short)((uint)iVar17 >> 0x10);
    uVar9 = uVar4;
    do {
      uVar9 = uVar9 - 1;
      iVar17 = (int)*(short *)(param_2 + 2 + lVar8 * 2);
      iVar16 = iVar16 + iVar17 * 0x15c3;
      *(short *)((long)local_240 + lVar8) = (short)((uint)iVar16 >> 0x10);
      lVar8 = lVar8 + 2;
      iVar16 = (iVar16 >> 0x10) * -0x2b86 + iVar17 * 0x8000;
    } while (uVar9 != 0);
    ppuVar10 = local_240;
    ppuVar12 = local_150;
    *(short *)(param_1 + 0x2b2) = (short)((uint)iVar16 >> 0x10);
    if (param_3 < 8) {
      uVar9 = 0;
LAB_006577dc:
      lVar8 = uVar4 - uVar9;
      do {
        sVar22 = *(short *)ppuVar12;
        sVar23 = *(short *)ppuVar10;
        lVar8 = lVar8 + -1;
        *(short *)ppuVar12 = sVar22 - sVar23;
        *(short *)ppuVar10 = sVar23 + sVar22;
        ppuVar12 = (undefined1 **)((long)ppuVar12 + 2);
        ppuVar10 = (undefined1 **)((long)ppuVar10 + 2);
      } while (lVar8 != 0);
    }
    else {
      uVar9 = 0;
      if (((undefined1 **)((long)ppuVar12 + (uVar4 - 1) * 2) < ppuVar12) ||
         ((undefined1 **)((long)ppuVar10 + (uVar4 - 1) * 2) < ppuVar10)) goto LAB_006577dc;
      if (param_3 < 0x20) {
        uVar6 = 0;
LAB_00658288:
        uVar9 = uVar4 & 0x7ffffffffffffffc;
        lVar8 = uVar6 - uVar9;
        ppuVar12 = (undefined1 **)((long)local_150 + uVar9 * 2);
        ppuVar10 = (undefined1 **)((long)local_240 + uVar9 * 2);
        puVar13 = (undefined8 *)((long)local_240 + uVar6 * 2);
        puVar14 = (undefined8 *)((long)local_150 + uVar6 * 2);
        do {
          uVar21 = *puVar14;
          uVar30 = *puVar13;
          lVar8 = lVar8 + 4;
          sVar22 = (short)((ulong)uVar21 >> 0x10);
          sVar26 = (short)((ulong)uVar30 >> 0x10);
          sVar23 = (short)((ulong)uVar21 >> 0x20);
          sVar27 = (short)((ulong)uVar30 >> 0x20);
          sVar24 = (short)((ulong)uVar21 >> 0x30);
          sVar28 = (short)((ulong)uVar30 >> 0x30);
          *puVar14 = CONCAT26(sVar24 - sVar28,
                              CONCAT24(sVar23 - sVar27,
                                       CONCAT22(sVar22 - sVar26,(short)uVar21 - (short)uVar30)));
          *puVar13 = CONCAT26(sVar28 + sVar24,
                              CONCAT24(sVar27 + sVar23,
                                       CONCAT22(sVar26 + sVar22,(short)uVar30 + (short)uVar21)));
          puVar13 = puVar13 + 1;
          puVar14 = puVar14 + 1;
        } while (lVar8 != 0);
        if (uVar4 != uVar9) goto LAB_006577dc;
      }
      else {
        uVar9 = uVar4 & 0x7ffffffffffffff0;
        ppuVar10 = local_240 + 2;
        ppuVar12 = local_150 + 2;
        uVar6 = uVar4 & 0x7ffffffffffffff0;
        do {
          puVar25 = ppuVar10[-1];
          puVar20 = ppuVar10[-2];
          puVar50 = ppuVar10[1];
          puVar46 = *ppuVar10;
          uVar6 = uVar6 - 0x10;
          puVar34 = ppuVar12[-1];
          puVar29 = ppuVar12[-2];
          puVar42 = ppuVar12[1];
          puVar38 = *ppuVar12;
          sVar22 = (short)((ulong)puVar20 >> 0x10);
          sVar31 = (short)((ulong)puVar29 >> 0x10);
          sVar23 = (short)((ulong)puVar20 >> 0x20);
          sVar32 = (short)((ulong)puVar29 >> 0x20);
          sVar24 = (short)((ulong)puVar20 >> 0x30);
          sVar33 = (short)((ulong)puVar29 >> 0x30);
          sVar26 = (short)((ulong)puVar25 >> 0x10);
          sVar35 = (short)((ulong)puVar34 >> 0x10);
          sVar27 = (short)((ulong)puVar25 >> 0x20);
          sVar36 = (short)((ulong)puVar34 >> 0x20);
          sVar28 = (short)((ulong)puVar25 >> 0x30);
          sVar37 = (short)((ulong)puVar34 >> 0x30);
          sVar39 = (short)((ulong)puVar38 >> 0x10);
          sVar47 = (short)((ulong)puVar46 >> 0x10);
          sVar40 = (short)((ulong)puVar38 >> 0x20);
          sVar48 = (short)((ulong)puVar46 >> 0x20);
          sVar41 = (short)((ulong)puVar38 >> 0x30);
          sVar49 = (short)((ulong)puVar46 >> 0x30);
          sVar43 = (short)((ulong)puVar42 >> 0x10);
          sVar51 = (short)((ulong)puVar50 >> 0x10);
          sVar44 = (short)((ulong)puVar42 >> 0x20);
          sVar52 = (short)((ulong)puVar50 >> 0x20);
          sVar45 = (short)((ulong)puVar42 >> 0x30);
          sVar53 = (short)((ulong)puVar50 >> 0x30);
          ppuVar12[-1] = (undefined1 *)
                         CONCAT26(sVar37 - sVar28,
                                  CONCAT24(sVar36 - sVar27,
                                           CONCAT22(sVar35 - sVar26,(short)puVar34 - (short)puVar25)
                                          ));
          ppuVar12[-2] = (undefined1 *)
                         CONCAT26(sVar33 - sVar24,
                                  CONCAT24(sVar32 - sVar23,
                                           CONCAT22(sVar31 - sVar22,(short)puVar29 - (short)puVar20)
                                          ));
          ppuVar12[1] = (undefined1 *)
                        CONCAT26(sVar45 - sVar53,
                                 CONCAT24(sVar44 - sVar52,
                                          CONCAT22(sVar43 - sVar51,(short)puVar42 - (short)puVar50))
                                );
          *ppuVar12 = (undefined1 *)
                      CONCAT26(sVar41 - sVar49,
                               CONCAT24(sVar40 - sVar48,
                                        CONCAT22(sVar39 - sVar47,(short)puVar38 - (short)puVar46)));
          ppuVar12 = ppuVar12 + 4;
          ppuVar10[-1] = (undefined1 *)
                         CONCAT26(sVar28 + sVar37,
                                  CONCAT24(sVar27 + sVar36,
                                           CONCAT22(sVar26 + sVar35,(short)puVar25 + (short)puVar34)
                                          ));
          ppuVar10[-2] = (undefined1 *)
                         CONCAT26(sVar24 + sVar33,
                                  CONCAT24(sVar23 + sVar32,
                                           CONCAT22(sVar22 + sVar31,(short)puVar20 + (short)puVar29)
                                          ));
          ppuVar10[1] = (undefined1 *)
                        CONCAT26(sVar53 + sVar45,
                                 CONCAT24(sVar52 + sVar44,
                                          CONCAT22(sVar51 + sVar43,(short)puVar50 + (short)puVar42))
                                );
          *ppuVar10 = (undefined1 *)
                      CONCAT26(sVar49 + sVar41,
                               CONCAT24(sVar48 + sVar40,
                                        CONCAT22(sVar47 + sVar39,(short)puVar46 + (short)puVar38)));
          ppuVar10 = ppuVar10 + 4;
        } while (uVar6 != 0);
        if (uVar4 != uVar9) {
          uVar6 = uVar9;
          if ((param_3 & 0x18) == 0) {
            ppuVar12 = (undefined1 **)((long)local_150 + uVar9 * 2);
            ppuVar10 = (undefined1 **)((long)local_240 + uVar9 * 2);
            goto LAB_006577dc;
          }
          goto LAB_00658288;
        }
      }
    }
    uVar4 = param_3 >> 2;
    if (uVar4 == 0) goto LAB_006578ec;
    lVar8 = 0;
    iVar17 = (uint)*(ushort *)(param_1 + 0x2aa) << 0x10;
    lVar5 = uVar4 * 2;
    do {
      iVar16 = (int)*(short *)((long)local_150 + lVar8 * 2);
      iVar17 = iVar17 + iVar16 * 0x51ec;
      *(short *)((long)local_2c0 + lVar8) = (short)((uint)iVar17 >> 0x10);
      lVar8 = lVar8 + 2;
      iVar17 = (iVar17 >> 0x10) * -0xa3d8 + iVar16 * 0x8000;
    } while (lVar5 - lVar8 != 0);
    lVar8 = 0;
    iVar16 = (uint)*(ushort *)(param_1 + 0x2b4) << 0x10;
    *(short *)(param_1 + 0x2aa) = (short)((uint)iVar17 >> 0x10);
    do {
      iVar17 = (int)*(short *)(((ulong)local_150 | 2) + lVar8 * 2);
      iVar16 = iVar16 + iVar17 * 0x15c3;
      *(short *)((long)local_340 + lVar8) = (short)((uint)iVar16 >> 0x10);
      lVar8 = lVar8 + 2;
      iVar16 = (iVar16 >> 0x10) * -0x2b86 + iVar17 * 0x8000;
    } while (lVar5 - lVar8 != 0);
    *(short *)(param_1 + 0x2b4) = (short)((uint)iVar16 >> 0x10);
    ppuVar10 = local_2c0;
    if (param_3 < 0x10) {
      uVar9 = 0;
      ppuVar12 = local_340;
LAB_006578bc:
      lVar8 = uVar4 - uVar9;
      do {
        sVar22 = *(short *)ppuVar10;
        sVar23 = *(short *)ppuVar12;
        lVar8 = lVar8 + -1;
        *(short *)ppuVar10 = sVar22 - sVar23;
        *(short *)ppuVar12 = sVar23 + sVar22;
        ppuVar10 = (undefined1 **)((long)ppuVar10 + 2);
        ppuVar12 = (undefined1 **)((long)ppuVar12 + 2);
      } while (lVar8 != 0);
    }
    else {
      uVar9 = 0;
      ppuVar12 = local_340;
      if (((undefined1 **)((long)ppuVar10 + (uVar4 - 1) * 2) < ppuVar10) ||
         (ppuVar12 = local_340, auStack_342 + lVar5 < local_340)) goto LAB_006578bc;
      if (param_3 < 0x40) {
        uVar6 = 0;
LAB_006583e8:
        uVar9 = uVar4 & 0x3ffffffffffffffc;
        lVar8 = uVar6 - uVar9;
        ppuVar10 = (undefined1 **)((long)local_2c0 + uVar9 * 2);
        ppuVar12 = (undefined1 **)((long)local_340 + uVar9 * 2);
        puVar13 = (undefined8 *)((long)local_340 + uVar6 * 2);
        puVar14 = (undefined8 *)((long)local_2c0 + uVar6 * 2);
        do {
          uVar21 = *puVar14;
          uVar30 = *puVar13;
          lVar8 = lVar8 + 4;
          sVar22 = (short)((ulong)uVar21 >> 0x10);
          sVar26 = (short)((ulong)uVar30 >> 0x10);
          sVar23 = (short)((ulong)uVar21 >> 0x20);
          sVar27 = (short)((ulong)uVar30 >> 0x20);
          sVar24 = (short)((ulong)uVar21 >> 0x30);
          sVar28 = (short)((ulong)uVar30 >> 0x30);
          *puVar14 = CONCAT26(sVar24 - sVar28,
                              CONCAT24(sVar23 - sVar27,
                                       CONCAT22(sVar22 - sVar26,(short)uVar21 - (short)uVar30)));
          *puVar13 = CONCAT26(sVar28 + sVar24,
                              CONCAT24(sVar27 + sVar23,
                                       CONCAT22(sVar26 + sVar22,(short)uVar30 + (short)uVar21)));
          puVar13 = puVar13 + 1;
          puVar14 = puVar14 + 1;
        } while (lVar8 != 0);
        if (uVar4 != uVar9) goto LAB_006578bc;
      }
      else {
        uVar9 = uVar4 & 0x3ffffffffffffff0;
        ppuVar10 = local_340 + 2;
        ppuVar12 = local_2c0 + 2;
        uVar6 = uVar4 & 0x3ffffffffffffff0;
        do {
          puVar25 = ppuVar10[-1];
          puVar20 = ppuVar10[-2];
          puVar50 = ppuVar10[1];
          puVar46 = *ppuVar10;
          uVar6 = uVar6 - 0x10;
          puVar34 = ppuVar12[-1];
          puVar29 = ppuVar12[-2];
          puVar42 = ppuVar12[1];
          puVar38 = *ppuVar12;
          sVar22 = (short)((ulong)puVar20 >> 0x10);
          sVar31 = (short)((ulong)puVar29 >> 0x10);
          sVar23 = (short)((ulong)puVar20 >> 0x20);
          sVar32 = (short)((ulong)puVar29 >> 0x20);
          sVar24 = (short)((ulong)puVar20 >> 0x30);
          sVar33 = (short)((ulong)puVar29 >> 0x30);
          sVar26 = (short)((ulong)puVar25 >> 0x10);
          sVar35 = (short)((ulong)puVar34 >> 0x10);
          sVar27 = (short)((ulong)puVar25 >> 0x20);
          sVar36 = (short)((ulong)puVar34 >> 0x20);
          sVar28 = (short)((ulong)puVar25 >> 0x30);
          sVar37 = (short)((ulong)puVar34 >> 0x30);
          sVar39 = (short)((ulong)puVar38 >> 0x10);
          sVar47 = (short)((ulong)puVar46 >> 0x10);
          sVar40 = (short)((ulong)puVar38 >> 0x20);
          sVar48 = (short)((ulong)puVar46 >> 0x20);
          sVar41 = (short)((ulong)puVar38 >> 0x30);
          sVar49 = (short)((ulong)puVar46 >> 0x30);
          sVar43 = (short)((ulong)puVar42 >> 0x10);
          sVar51 = (short)((ulong)puVar50 >> 0x10);
          sVar44 = (short)((ulong)puVar42 >> 0x20);
          sVar52 = (short)((ulong)puVar50 >> 0x20);
          sVar45 = (short)((ulong)puVar42 >> 0x30);
          sVar53 = (short)((ulong)puVar50 >> 0x30);
          ppuVar12[-1] = (undefined1 *)
                         CONCAT26(sVar37 - sVar28,
                                  CONCAT24(sVar36 - sVar27,
                                           CONCAT22(sVar35 - sVar26,(short)puVar34 - (short)puVar25)
                                          ));
          ppuVar12[-2] = (undefined1 *)
                         CONCAT26(sVar33 - sVar24,
                                  CONCAT24(sVar32 - sVar23,
                                           CONCAT22(sVar31 - sVar22,(short)puVar29 - (short)puVar20)
                                          ));
          ppuVar12[1] = (undefined1 *)
                        CONCAT26(sVar45 - sVar53,
                                 CONCAT24(sVar44 - sVar52,
                                          CONCAT22(sVar43 - sVar51,(short)puVar42 - (short)puVar50))
                                );
          *ppuVar12 = (undefined1 *)
                      CONCAT26(sVar41 - sVar49,
                               CONCAT24(sVar40 - sVar48,
                                        CONCAT22(sVar39 - sVar47,(short)puVar38 - (short)puVar46)));
          ppuVar12 = ppuVar12 + 4;
          ppuVar10[-1] = (undefined1 *)
                         CONCAT26(sVar28 + sVar37,
                                  CONCAT24(sVar27 + sVar36,
                                           CONCAT22(sVar26 + sVar35,(short)puVar25 + (short)puVar34)
                                          ));
          ppuVar10[-2] = (undefined1 *)
                         CONCAT26(sVar24 + sVar33,
                                  CONCAT24(sVar23 + sVar32,
                                           CONCAT22(sVar22 + sVar31,(short)puVar20 + (short)puVar29)
                                          ));
          ppuVar10[1] = (undefined1 *)
                        CONCAT26(sVar53 + sVar45,
                                 CONCAT24(sVar52 + sVar44,
                                          CONCAT22(sVar51 + sVar43,(short)puVar50 + (short)puVar42))
                                );
          *ppuVar10 = (undefined1 *)
                      CONCAT26(sVar49 + sVar41,
                               CONCAT24(sVar48 + sVar40,
                                        CONCAT22(sVar47 + sVar39,(short)puVar46 + (short)puVar38)));
          ppuVar10 = ppuVar10 + 4;
        } while (uVar6 != 0);
        if (uVar4 != uVar9) {
          uVar6 = uVar9;
          if ((param_3 & 0x30) == 0) {
            ppuVar10 = (undefined1 **)((long)local_2c0 + uVar9 * 2);
            ppuVar12 = (undefined1 **)((long)local_340 + uVar9 * 2);
            goto LAB_006578bc;
          }
          goto LAB_006583e8;
        }
      }
    }
    bVar2 = false;
  }
  local_54 = 0;
  uVar3 = FUN_006584b8(local_2c0,uVar4,&local_54);
  if (uVar3 == 0) {
    uVar19 = 0;
    param_4[5] = 0xb0;
  }
  else {
    uVar18 = 0x11 - (int)LZCOUNT(uVar3);
    local_54 = local_54 + uVar18;
    uVar19 = uVar3 << (ulong)((int)LZCOUNT(uVar3) - 0x11U & 0x1f);
    if (0x3fff < uVar3) {
      uVar19 = uVar3 >> (ulong)(uVar18 & 0x1f);
    }
    uVar3 = ((uint)(local_54 * 0x6054) >> 9) + ((uVar19 >> 4 & 0x3ff) * 0x6054 + 0x15126000 >> 0x13)
    ;
    sVar22 = (short)uVar3 + 0xb0;
    if ((uVar3 & 0x8000) != 0) {
      sVar22 = 0xb0;
    }
    param_4[5] = sVar22;
    if (local_54 < 0) {
      uVar19 = uVar19 >> (ulong)(-local_54 & 0x1f);
    }
    else {
      uVar19 = 0xb;
    }
  }
  local_54 = 0;
  uVar3 = FUN_006584b8(local_340,uVar4,&local_54);
  if (uVar3 == 0) {
    param_4[4] = 0xb0;
  }
  else {
    uVar15 = 0x11 - (int)LZCOUNT(uVar3);
    local_54 = local_54 + uVar15;
    uVar18 = uVar3 << (ulong)((int)LZCOUNT(uVar3) - 0x11U & 0x1f);
    if (0x3fff < uVar3) {
      uVar18 = uVar3 >> (ulong)(uVar15 & 0x1f);
    }
    uVar3 = ((uint)(local_54 * 0x6054) >> 9) + ((uVar18 >> 4 & 0x3ff) * 0x6054 + 0x15126000 >> 0x13)
    ;
    sVar22 = (short)uVar3 + 0xb0;
    if ((uVar3 & 0x8000) != 0) {
      sVar22 = 0xb0;
    }
    param_4[4] = sVar22;
    if ((short)uVar19 < 0xb) {
      if (local_54 < 0) {
        uVar19 = uVar19 + (uVar18 >> (ulong)(-local_54 & 0x1f));
      }
      else {
        uVar19 = uVar19 + 0xb;
      }
    }
  }
  if (!bVar2) {
    uVar9 = 0;
    iVar17 = (uint)*(ushort *)(param_1 + 0x2ac) << 0x10;
    ppuVar10 = local_240;
    do {
      sVar22 = *(short *)ppuVar10;
      iVar17 = iVar17 + sVar22 * 0x51ec;
      *(short *)((long)local_2c0 + uVar9 * 2) = (short)((uint)iVar17 >> 0x10);
      uVar9 = uVar9 + 1;
      iVar17 = (iVar17 >> 0x10) * -0xa3d8 + sVar22 * 0x8000;
      ppuVar10 = (undefined1 **)((long)ppuVar10 + 4);
    } while (uVar4 != uVar9);
    uVar9 = 0;
    iVar16 = (uint)*(ushort *)(param_1 + 0x2b6) << 0x10;
    *(short *)(param_1 + 0x2ac) = (short)((uint)iVar17 >> 0x10);
    psVar11 = (short *)((ulong)local_240 | 2);
    do {
      sVar22 = *psVar11;
      iVar16 = iVar16 + sVar22 * 0x15c3;
      *(short *)((long)local_340 + uVar9 * 2) = (short)((uint)iVar16 >> 0x10);
      uVar9 = uVar9 + 1;
      iVar16 = (iVar16 >> 0x10) * -0x2b86 + sVar22 * 0x8000;
      psVar11 = psVar11 + 2;
    } while (uVar4 != uVar9);
    ppuVar10 = local_2c0;
    *(short *)(param_1 + 0x2b6) = (short)((uint)iVar16 >> 0x10);
    if (uVar4 < 4) {
      uVar9 = 0;
      ppuVar12 = local_340;
    }
    else {
      uVar9 = 0;
      ppuVar12 = local_340;
      if ((ppuVar10 <= (undefined1 **)((long)ppuVar10 + (uVar4 - 1) * 2)) &&
         (ppuVar12 = local_340, local_340 <= auStack_342 + uVar4 * 2)) {
        if (uVar4 < 0x10) {
          uVar6 = 0;
        }
        else {
          uVar9 = uVar4 & 0x3ffffffffffffff0;
          ppuVar10 = local_340 + 2;
          ppuVar12 = local_2c0 + 2;
          uVar6 = uVar4 & 0x3ffffffffffffff0;
          do {
            puVar25 = ppuVar10[-1];
            puVar20 = ppuVar10[-2];
            puVar50 = ppuVar10[1];
            puVar46 = *ppuVar10;
            uVar6 = uVar6 - 0x10;
            puVar34 = ppuVar12[-1];
            puVar29 = ppuVar12[-2];
            puVar42 = ppuVar12[1];
            puVar38 = *ppuVar12;
            sVar22 = (short)((ulong)puVar20 >> 0x10);
            sVar31 = (short)((ulong)puVar29 >> 0x10);
            sVar23 = (short)((ulong)puVar20 >> 0x20);
            sVar32 = (short)((ulong)puVar29 >> 0x20);
            sVar24 = (short)((ulong)puVar20 >> 0x30);
            sVar33 = (short)((ulong)puVar29 >> 0x30);
            sVar26 = (short)((ulong)puVar25 >> 0x10);
            sVar35 = (short)((ulong)puVar34 >> 0x10);
            sVar27 = (short)((ulong)puVar25 >> 0x20);
            sVar36 = (short)((ulong)puVar34 >> 0x20);
            sVar28 = (short)((ulong)puVar25 >> 0x30);
            sVar37 = (short)((ulong)puVar34 >> 0x30);
            sVar39 = (short)((ulong)puVar38 >> 0x10);
            sVar47 = (short)((ulong)puVar46 >> 0x10);
            sVar40 = (short)((ulong)puVar38 >> 0x20);
            sVar48 = (short)((ulong)puVar46 >> 0x20);
            sVar41 = (short)((ulong)puVar38 >> 0x30);
            sVar49 = (short)((ulong)puVar46 >> 0x30);
            sVar43 = (short)((ulong)puVar42 >> 0x10);
            sVar51 = (short)((ulong)puVar50 >> 0x10);
            sVar44 = (short)((ulong)puVar42 >> 0x20);
            sVar52 = (short)((ulong)puVar50 >> 0x20);
            sVar45 = (short)((ulong)puVar42 >> 0x30);
            sVar53 = (short)((ulong)puVar50 >> 0x30);
            ppuVar12[-1] = (undefined1 *)
                           CONCAT26(sVar37 - sVar28,
                                    CONCAT24(sVar36 - sVar27,
                                             CONCAT22(sVar35 - sVar26,
                                                      (short)puVar34 - (short)puVar25)));
            ppuVar12[-2] = (undefined1 *)
                           CONCAT26(sVar33 - sVar24,
                                    CONCAT24(sVar32 - sVar23,
                                             CONCAT22(sVar31 - sVar22,
                                                      (short)puVar29 - (short)puVar20)));
            ppuVar12[1] = (undefined1 *)
                          CONCAT26(sVar45 - sVar53,
                                   CONCAT24(sVar44 - sVar52,
                                            CONCAT22(sVar43 - sVar51,(short)puVar42 - (short)puVar50
                                                    )));
            *ppuVar12 = (undefined1 *)
                        CONCAT26(sVar41 - sVar49,
                                 CONCAT24(sVar40 - sVar48,
                                          CONCAT22(sVar39 - sVar47,(short)puVar38 - (short)puVar46))
                                );
            ppuVar12 = ppuVar12 + 4;
            ppuVar10[-1] = (undefined1 *)
                           CONCAT26(sVar28 + sVar37,
                                    CONCAT24(sVar27 + sVar36,
                                             CONCAT22(sVar26 + sVar35,
                                                      (short)puVar25 + (short)puVar34)));
            ppuVar10[-2] = (undefined1 *)
                           CONCAT26(sVar24 + sVar33,
                                    CONCAT24(sVar23 + sVar32,
                                             CONCAT22(sVar22 + sVar31,
                                                      (short)puVar20 + (short)puVar29)));
            ppuVar10[1] = (undefined1 *)
                          CONCAT26(sVar53 + sVar45,
                                   CONCAT24(sVar52 + sVar44,
                                            CONCAT22(sVar51 + sVar43,(short)puVar50 + (short)puVar42
                                                    )));
            *ppuVar10 = (undefined1 *)
                        CONCAT26(sVar49 + sVar41,
                                 CONCAT24(sVar48 + sVar40,
                                          CONCAT22(sVar47 + sVar39,(short)puVar46 + (short)puVar38))
                                );
            ppuVar10 = ppuVar10 + 4;
          } while (uVar6 != 0);
          if (uVar4 == uVar9) goto LAB_00657b28;
          uVar6 = uVar9;
          if ((uVar4 & 0xc) == 0) {
            ppuVar10 = (undefined1 **)((long)local_2c0 + uVar9 * 2);
            ppuVar12 = (undefined1 **)((long)local_340 + uVar9 * 2);
            goto LAB_00657b04;
          }
        }
        uVar9 = uVar4 & 0x3ffffffffffffffc;
        lVar8 = uVar6 - uVar9;
        ppuVar10 = (undefined1 **)((long)local_2c0 + uVar9 * 2);
        ppuVar12 = (undefined1 **)((long)local_340 + uVar9 * 2);
        puVar13 = (undefined8 *)((long)local_340 + uVar6 * 2);
        puVar14 = (undefined8 *)((long)local_2c0 + uVar6 * 2);
        do {
          uVar21 = *puVar14;
          uVar30 = *puVar13;
          lVar8 = lVar8 + 4;
          sVar22 = (short)((ulong)uVar21 >> 0x10);
          sVar26 = (short)((ulong)uVar30 >> 0x10);
          sVar23 = (short)((ulong)uVar21 >> 0x20);
          sVar27 = (short)((ulong)uVar30 >> 0x20);
          sVar24 = (short)((ulong)uVar21 >> 0x30);
          sVar28 = (short)((ulong)uVar30 >> 0x30);
          *puVar14 = CONCAT26(sVar24 - sVar28,
                              CONCAT24(sVar23 - sVar27,
                                       CONCAT22(sVar22 - sVar26,(short)uVar21 - (short)uVar30)));
          *puVar13 = CONCAT26(sVar28 + sVar24,
                              CONCAT24(sVar27 + sVar23,
                                       CONCAT22(sVar26 + sVar22,(short)uVar30 + (short)uVar21)));
          puVar13 = puVar13 + 1;
          puVar14 = puVar14 + 1;
        } while (lVar8 != 0);
        if (uVar4 == uVar9) goto LAB_00657b28;
      }
    }
LAB_00657b04:
    lVar8 = uVar4 - uVar9;
    do {
      sVar22 = *(short *)ppuVar10;
      sVar23 = *(short *)ppuVar12;
      lVar8 = lVar8 + -1;
      *(short *)ppuVar10 = sVar22 - sVar23;
      *(short *)ppuVar12 = sVar23 + sVar22;
      ppuVar10 = (undefined1 **)((long)ppuVar10 + 2);
      ppuVar12 = (undefined1 **)((long)ppuVar12 + 2);
    } while (lVar8 != 0);
  }
LAB_00657b28:
  local_54 = 0;
  uVar3 = FUN_006584b8(local_2c0,uVar4,&local_54);
  if (uVar3 == 0) {
    param_4[3] = 0xb0;
  }
  else {
    uVar15 = 0x11 - (int)LZCOUNT(uVar3);
    local_54 = local_54 + uVar15;
    uVar18 = uVar3 << (ulong)((int)LZCOUNT(uVar3) - 0x11U & 0x1f);
    if (0x3fff < uVar3) {
      uVar18 = uVar3 >> (ulong)(uVar15 & 0x1f);
    }
    uVar3 = ((uint)(local_54 * 0x6054) >> 9) + ((uVar18 >> 4 & 0x3ff) * 0x6054 + 0x15126000 >> 0x13)
    ;
    sVar22 = (short)uVar3 + 0xb0;
    if ((uVar3 & 0x8000) != 0) {
      sVar22 = 0xb0;
    }
    param_4[3] = sVar22;
    if ((short)uVar19 < 0xb) {
      if (local_54 < 0) {
        uVar19 = uVar19 + (uVar18 >> (ulong)(-local_54 & 0x1f));
      }
      else {
        uVar19 = uVar19 + 0xb;
      }
    }
  }
  if (param_3 >> 3 != 0) {
    uVar4 = param_3 >> 3;
    lVar8 = 0;
    iVar17 = (uint)*(ushort *)(param_1 + 0x2ae) << 0x10;
    do {
      iVar16 = (int)*(short *)((long)local_340 + lVar8 * 2);
      iVar17 = iVar17 + iVar16 * 0x51ec;
      *(short *)((long)local_150 + lVar8) = (short)((uint)iVar17 >> 0x10);
      lVar8 = lVar8 + 2;
      iVar17 = (iVar17 >> 0x10) * -0xa3d8 + iVar16 * 0x8000;
    } while (uVar4 * 2 - lVar8 != 0);
    lVar8 = 0;
    iVar16 = (uint)*(ushort *)(param_1 + 0x2b8) << 0x10;
    *(short *)(param_1 + 0x2ae) = (short)((uint)iVar17 >> 0x10);
    do {
      iVar17 = (int)*(short *)(((ulong)local_340 | 2) + lVar8 * 2);
      iVar16 = iVar16 + iVar17 * 0x15c3;
      *(short *)((long)local_240 + lVar8) = (short)((uint)iVar16 >> 0x10);
      lVar8 = lVar8 + 2;
      iVar16 = (iVar16 >> 0x10) * -0x2b86 + iVar17 * 0x8000;
    } while (uVar4 * 2 - lVar8 != 0);
    *(short *)(param_1 + 0x2b8) = (short)((uint)iVar16 >> 0x10);
    if (param_3 < 0x20) {
      uVar6 = 0;
      ppuVar10 = local_240;
      ppuVar12 = local_150;
    }
    else {
      if (param_3 < 0x80) {
        uVar9 = 0;
      }
      else {
        uVar6 = uVar4 & 0x1ffffffffffffff0;
        ppuVar10 = local_240 + 2;
        ppuVar12 = local_150 + 2;
        uVar9 = uVar4 & 0x1ffffffffffffff0;
        do {
          puVar25 = ppuVar10[-1];
          puVar20 = ppuVar10[-2];
          puVar50 = ppuVar10[1];
          puVar46 = *ppuVar10;
          uVar9 = uVar9 - 0x10;
          puVar34 = ppuVar12[-1];
          puVar29 = ppuVar12[-2];
          puVar42 = ppuVar12[1];
          puVar38 = *ppuVar12;
          sVar22 = (short)((ulong)puVar20 >> 0x10);
          sVar31 = (short)((ulong)puVar29 >> 0x10);
          sVar23 = (short)((ulong)puVar20 >> 0x20);
          sVar32 = (short)((ulong)puVar29 >> 0x20);
          sVar24 = (short)((ulong)puVar20 >> 0x30);
          sVar33 = (short)((ulong)puVar29 >> 0x30);
          sVar26 = (short)((ulong)puVar25 >> 0x10);
          sVar35 = (short)((ulong)puVar34 >> 0x10);
          sVar27 = (short)((ulong)puVar25 >> 0x20);
          sVar36 = (short)((ulong)puVar34 >> 0x20);
          sVar28 = (short)((ulong)puVar25 >> 0x30);
          sVar37 = (short)((ulong)puVar34 >> 0x30);
          sVar39 = (short)((ulong)puVar38 >> 0x10);
          sVar47 = (short)((ulong)puVar46 >> 0x10);
          sVar40 = (short)((ulong)puVar38 >> 0x20);
          sVar48 = (short)((ulong)puVar46 >> 0x20);
          sVar41 = (short)((ulong)puVar38 >> 0x30);
          sVar49 = (short)((ulong)puVar46 >> 0x30);
          sVar43 = (short)((ulong)puVar42 >> 0x10);
          sVar51 = (short)((ulong)puVar50 >> 0x10);
          sVar44 = (short)((ulong)puVar42 >> 0x20);
          sVar52 = (short)((ulong)puVar50 >> 0x20);
          sVar45 = (short)((ulong)puVar42 >> 0x30);
          sVar53 = (short)((ulong)puVar50 >> 0x30);
          ppuVar12[-1] = (undefined1 *)
                         CONCAT26(sVar37 - sVar28,
                                  CONCAT24(sVar36 - sVar27,
                                           CONCAT22(sVar35 - sVar26,(short)puVar34 - (short)puVar25)
                                          ));
          ppuVar12[-2] = (undefined1 *)
                         CONCAT26(sVar33 - sVar24,
                                  CONCAT24(sVar32 - sVar23,
                                           CONCAT22(sVar31 - sVar22,(short)puVar29 - (short)puVar20)
                                          ));
          ppuVar12[1] = (undefined1 *)
                        CONCAT26(sVar45 - sVar53,
                                 CONCAT24(sVar44 - sVar52,
                                          CONCAT22(sVar43 - sVar51,(short)puVar42 - (short)puVar50))
                                );
          *ppuVar12 = (undefined1 *)
                      CONCAT26(sVar41 - sVar49,
                               CONCAT24(sVar40 - sVar48,
                                        CONCAT22(sVar39 - sVar47,(short)puVar38 - (short)puVar46)));
          ppuVar12 = ppuVar12 + 4;
          ppuVar10[-1] = (undefined1 *)
                         CONCAT26(sVar28 + sVar37,
                                  CONCAT24(sVar27 + sVar36,
                                           CONCAT22(sVar26 + sVar35,(short)puVar25 + (short)puVar34)
                                          ));
          ppuVar10[-2] = (undefined1 *)
                         CONCAT26(sVar24 + sVar33,
                                  CONCAT24(sVar23 + sVar32,
                                           CONCAT22(sVar22 + sVar31,(short)puVar20 + (short)puVar29)
                                          ));
          ppuVar10[1] = (undefined1 *)
                        CONCAT26(sVar53 + sVar45,
                                 CONCAT24(sVar52 + sVar44,
                                          CONCAT22(sVar51 + sVar43,(short)puVar50 + (short)puVar42))
                                );
          *ppuVar10 = (undefined1 *)
                      CONCAT26(sVar49 + sVar41,
                               CONCAT24(sVar48 + sVar40,
                                        CONCAT22(sVar47 + sVar39,(short)puVar46 + (short)puVar38)));
          ppuVar10 = ppuVar10 + 4;
        } while (uVar9 != 0);
        if (uVar4 == uVar6) goto LAB_00657dc8;
        uVar9 = uVar6;
        if ((param_3 & 0x60) == 0) {
          ppuVar12 = (undefined1 **)((long)local_150 + uVar6 * 2);
          ppuVar10 = (undefined1 **)((long)local_240 + uVar6 * 2);
          goto LAB_00657da4;
        }
      }
      uVar6 = uVar4 & 0x1ffffffffffffffc;
      lVar8 = uVar9 - uVar6;
      ppuVar12 = (undefined1 **)((long)local_150 + uVar6 * 2);
      ppuVar10 = (undefined1 **)((long)local_240 + uVar6 * 2);
      puVar13 = (undefined8 *)((long)local_240 + uVar9 * 2);
      puVar14 = (undefined8 *)((long)local_150 + uVar9 * 2);
      do {
        uVar21 = *puVar14;
        uVar30 = *puVar13;
        lVar8 = lVar8 + 4;
        sVar22 = (short)((ulong)uVar21 >> 0x10);
        sVar26 = (short)((ulong)uVar30 >> 0x10);
        sVar23 = (short)((ulong)uVar21 >> 0x20);
        sVar27 = (short)((ulong)uVar30 >> 0x20);
        sVar24 = (short)((ulong)uVar21 >> 0x30);
        sVar28 = (short)((ulong)uVar30 >> 0x30);
        *puVar14 = CONCAT26(sVar24 - sVar28,
                            CONCAT24(sVar23 - sVar27,
                                     CONCAT22(sVar22 - sVar26,(short)uVar21 - (short)uVar30)));
        *puVar13 = CONCAT26(sVar28 + sVar24,
                            CONCAT24(sVar27 + sVar23,
                                     CONCAT22(sVar26 + sVar22,(short)uVar30 + (short)uVar21)));
        puVar13 = puVar13 + 1;
        puVar14 = puVar14 + 1;
      } while (lVar8 != 0);
      if (uVar4 == uVar6) goto LAB_00657dc8;
    }
LAB_00657da4:
    lVar8 = uVar4 - uVar6;
    do {
      sVar22 = *(short *)ppuVar12;
      sVar23 = *(short *)ppuVar10;
      lVar8 = lVar8 + -1;
      *(short *)ppuVar12 = sVar22 - sVar23;
      *(short *)ppuVar10 = sVar23 + sVar22;
      ppuVar10 = (undefined1 **)((long)ppuVar10 + 2);
      ppuVar12 = (undefined1 **)((long)ppuVar12 + 2);
    } while (lVar8 != 0);
  }
LAB_00657dc8:
  local_54 = 0;
  uVar3 = FUN_006584b8(local_150,param_3 >> 3,&local_54);
  if (uVar3 == 0) {
    param_4[2] = 0x110;
  }
  else {
    uVar15 = 0x11 - (int)LZCOUNT(uVar3);
    local_54 = local_54 + uVar15;
    uVar18 = uVar3 << (ulong)((int)LZCOUNT(uVar3) - 0x11U & 0x1f);
    if (0x3fff < uVar3) {
      uVar18 = uVar3 >> (ulong)(uVar15 & 0x1f);
    }
    uVar3 = ((uint)(local_54 * 0x6054) >> 9) + ((uVar18 >> 4 & 0x3ff) * 0x6054 + 0x15126000 >> 0x13)
    ;
    sVar22 = (short)uVar3 + 0x110;
    if ((uVar3 & 0x8000) != 0) {
      sVar22 = 0x110;
    }
    param_4[2] = sVar22;
    if ((short)uVar19 < 0xb) {
      if (local_54 < 0) {
        uVar19 = uVar19 + (uVar18 >> (ulong)(-local_54 & 0x1f));
      }
      else {
        uVar19 = uVar19 + 0xb;
      }
    }
  }
  if (param_3 >> 4 == 0) goto LAB_00657ff8;
  uVar4 = param_3 >> 4;
  lVar8 = 0;
  iVar17 = (uint)*(ushort *)(param_1 + 0x2b0) << 0x10;
  do {
    iVar16 = (int)*(short *)((long)local_240 + lVar8 * 2);
    iVar17 = iVar17 + iVar16 * 0x51ec;
    *(short *)((long)local_2c0 + lVar8) = (short)((uint)iVar17 >> 0x10);
    lVar8 = lVar8 + 2;
    iVar17 = (iVar17 >> 0x10) * -0xa3d8 + iVar16 * 0x8000;
  } while (uVar4 * 2 - lVar8 != 0);
  lVar8 = 0;
  iVar16 = (uint)*(ushort *)(param_1 + 0x2ba) << 0x10;
  *(short *)(param_1 + 0x2b0) = (short)((uint)iVar17 >> 0x10);
  do {
    iVar17 = (int)*(short *)(((ulong)local_240 | 2) + lVar8 * 2);
    iVar16 = iVar16 + iVar17 * 0x15c3;
    *(short *)((long)local_340 + lVar8) = (short)((uint)iVar16 >> 0x10);
    lVar8 = lVar8 + 2;
    iVar16 = (iVar16 >> 0x10) * -0x2b86 + iVar17 * 0x8000;
  } while (uVar4 * 2 - lVar8 != 0);
  *(short *)(param_1 + 0x2ba) = (short)((uint)iVar16 >> 0x10);
  if (param_3 < 0x40) {
    uVar6 = 0;
    ppuVar10 = local_2c0;
  }
  else {
    if (param_3 < 0x100) {
      uVar9 = 0;
    }
    else {
      uVar6 = uVar4 & 0xffffffffffffff0;
      ppuVar7 = local_340 + 2;
      ppuVar10 = local_2c0 + 2;
      uVar9 = uVar4 & 0xffffffffffffff0;
      do {
        puVar25 = ppuVar7[-1];
        puVar20 = ppuVar7[-2];
        puVar50 = ppuVar7[1];
        puVar46 = *ppuVar7;
        uVar9 = uVar9 - 0x10;
        puVar34 = ppuVar10[-1];
        puVar29 = ppuVar10[-2];
        puVar42 = ppuVar10[1];
        puVar38 = *ppuVar10;
        sVar22 = (short)((ulong)puVar20 >> 0x10);
        sVar31 = (short)((ulong)puVar29 >> 0x10);
        sVar23 = (short)((ulong)puVar20 >> 0x20);
        sVar32 = (short)((ulong)puVar29 >> 0x20);
        sVar24 = (short)((ulong)puVar20 >> 0x30);
        sVar33 = (short)((ulong)puVar29 >> 0x30);
        sVar26 = (short)((ulong)puVar25 >> 0x10);
        sVar35 = (short)((ulong)puVar34 >> 0x10);
        sVar27 = (short)((ulong)puVar25 >> 0x20);
        sVar36 = (short)((ulong)puVar34 >> 0x20);
        sVar28 = (short)((ulong)puVar25 >> 0x30);
        sVar37 = (short)((ulong)puVar34 >> 0x30);
        sVar39 = (short)((ulong)puVar38 >> 0x10);
        sVar47 = (short)((ulong)puVar46 >> 0x10);
        sVar40 = (short)((ulong)puVar38 >> 0x20);
        sVar48 = (short)((ulong)puVar46 >> 0x20);
        sVar41 = (short)((ulong)puVar38 >> 0x30);
        sVar49 = (short)((ulong)puVar46 >> 0x30);
        sVar43 = (short)((ulong)puVar42 >> 0x10);
        sVar51 = (short)((ulong)puVar50 >> 0x10);
        sVar44 = (short)((ulong)puVar42 >> 0x20);
        sVar52 = (short)((ulong)puVar50 >> 0x20);
        sVar45 = (short)((ulong)puVar42 >> 0x30);
        sVar53 = (short)((ulong)puVar50 >> 0x30);
        ppuVar10[-1] = (undefined1 *)
                       CONCAT26(sVar37 - sVar28,
                                CONCAT24(sVar36 - sVar27,
                                         CONCAT22(sVar35 - sVar26,(short)puVar34 - (short)puVar25)))
        ;
        ppuVar10[-2] = (undefined1 *)
                       CONCAT26(sVar33 - sVar24,
                                CONCAT24(sVar32 - sVar23,
                                         CONCAT22(sVar31 - sVar22,(short)puVar29 - (short)puVar20)))
        ;
        ppuVar10[1] = (undefined1 *)
                      CONCAT26(sVar45 - sVar53,
                               CONCAT24(sVar44 - sVar52,
                                        CONCAT22(sVar43 - sVar51,(short)puVar42 - (short)puVar50)));
        *ppuVar10 = (undefined1 *)
                    CONCAT26(sVar41 - sVar49,
                             CONCAT24(sVar40 - sVar48,
                                      CONCAT22(sVar39 - sVar47,(short)puVar38 - (short)puVar46)));
        ppuVar10 = ppuVar10 + 4;
        ppuVar7[-1] = (undefined1 *)
                      CONCAT26(sVar28 + sVar37,
                               CONCAT24(sVar27 + sVar36,
                                        CONCAT22(sVar26 + sVar35,(short)puVar25 + (short)puVar34)));
        ppuVar7[-2] = (undefined1 *)
                      CONCAT26(sVar24 + sVar33,
                               CONCAT24(sVar23 + sVar32,
                                        CONCAT22(sVar22 + sVar31,(short)puVar20 + (short)puVar29)));
        ppuVar7[1] = (undefined1 *)
                     CONCAT26(sVar53 + sVar45,
                              CONCAT24(sVar52 + sVar44,
                                       CONCAT22(sVar51 + sVar43,(short)puVar50 + (short)puVar42)));
        *ppuVar7 = (undefined1 *)
                   CONCAT26(sVar49 + sVar41,
                            CONCAT24(sVar48 + sVar40,
                                     CONCAT22(sVar47 + sVar39,(short)puVar46 + (short)puVar38)));
        ppuVar7 = ppuVar7 + 4;
      } while (uVar9 != 0);
      if (uVar4 == uVar6) goto LAB_00657ff8;
      uVar9 = uVar6;
      if ((param_3 & 0xc0) == 0) {
        ppuVar10 = (undefined1 **)((long)local_2c0 + uVar6 * 2);
        ppuVar7 = (undefined1 **)((long)local_340 + uVar6 * 2);
        goto LAB_00657fd4;
      }
    }
    uVar6 = uVar4 & 0xffffffffffffffc;
    lVar8 = uVar9 - uVar6;
    ppuVar10 = (undefined1 **)((long)local_2c0 + uVar6 * 2);
    ppuVar7 = (undefined1 **)((long)local_340 + uVar6 * 2);
    puVar13 = (undefined8 *)((long)local_340 + uVar9 * 2);
    puVar14 = (undefined8 *)((long)local_2c0 + uVar9 * 2);
    do {
      uVar21 = *puVar14;
      uVar30 = *puVar13;
      lVar8 = lVar8 + 4;
      sVar22 = (short)((ulong)uVar21 >> 0x10);
      sVar26 = (short)((ulong)uVar30 >> 0x10);
      sVar23 = (short)((ulong)uVar21 >> 0x20);
      sVar27 = (short)((ulong)uVar30 >> 0x20);
      sVar24 = (short)((ulong)uVar21 >> 0x30);
      sVar28 = (short)((ulong)uVar30 >> 0x30);
      *puVar14 = CONCAT26(sVar24 - sVar28,
                          CONCAT24(sVar23 - sVar27,
                                   CONCAT22(sVar22 - sVar26,(short)uVar21 - (short)uVar30)));
      *puVar13 = CONCAT26(sVar28 + sVar24,
                          CONCAT24(sVar27 + sVar23,
                                   CONCAT22(sVar26 + sVar22,(short)uVar30 + (short)uVar21)));
      puVar13 = puVar13 + 1;
      puVar14 = puVar14 + 1;
    } while (lVar8 != 0);
    if (uVar4 == uVar6) goto LAB_00657ff8;
  }
LAB_00657fd4:
  lVar8 = uVar4 - uVar6;
  do {
    sVar22 = *(short *)ppuVar10;
    sVar23 = *(short *)ppuVar7;
    lVar8 = lVar8 + -1;
    *(short *)ppuVar10 = sVar22 - sVar23;
    *(short *)ppuVar7 = sVar23 + sVar22;
    ppuVar7 = (undefined1 **)((long)ppuVar7 + 2);
    ppuVar10 = (undefined1 **)((long)ppuVar10 + 2);
  } while (lVar8 != 0);
LAB_00657ff8:
  param_3 = param_3 >> 4;
  local_54 = 0;
  uVar3 = FUN_006584b8(local_2c0,param_3,&local_54);
  if (uVar3 == 0) {
    param_4[1] = 0x170;
  }
  else {
    uVar15 = 0x11 - (int)LZCOUNT(uVar3);
    local_54 = local_54 + uVar15;
    uVar18 = uVar3 << (ulong)((int)LZCOUNT(uVar3) - 0x11U & 0x1f);
    if (0x3fff < uVar3) {
      uVar18 = uVar3 >> (ulong)(uVar15 & 0x1f);
    }
    uVar3 = ((uint)(local_54 * 0x6054) >> 9) + ((uVar18 >> 4 & 0x3ff) * 0x6054 + 0x15126000 >> 0x13)
    ;
    sVar22 = (short)uVar3 + 0x170;
    if ((uVar3 & 0x8000) != 0) {
      sVar22 = 0x170;
    }
    param_4[1] = sVar22;
    if ((short)uVar19 < 0xb) {
      if (local_54 < 0) {
        uVar19 = uVar19 + (uVar18 >> (ulong)(-local_54 & 0x1f));
      }
      else {
        uVar19 = uVar19 + 0xb;
      }
    }
  }
  if (param_3 != 0) {
    ppuVar7 = local_340;
    ppuVar10 = local_150;
    uVar4 = param_3;
    sVar23 = *(short *)(param_1 + 0x2be);
    uVar3 = (uint)*(ushort *)(param_1 + 0x2c0);
    uVar18 = (uint)*(ushort *)(param_1 + 0x2c2);
    sVar22 = *(short *)(param_1 + 700);
    do {
      sVar26 = sVar22;
      uVar15 = uVar3;
      sVar22 = *(short *)ppuVar7;
      sVar24 = (short)uVar15;
      uVar4 = uVar4 - 1;
      uVar3 = (uint)(sVar26 * 0x3fffcc32 + ((int)sVar22 + (int)sVar23) * 0x19e7 + sVar24 * 0x1e4c +
                    (short)uVar18 * 0x3fffea0c) >> 0xe;
      uVar1 = (undefined2)uVar3;
      *(undefined2 *)ppuVar10 = uVar1;
      ppuVar7 = (undefined1 **)((long)ppuVar7 + 2);
      ppuVar10 = (undefined1 **)((long)ppuVar10 + 2);
      sVar23 = sVar26;
      uVar18 = uVar15;
    } while (uVar4 != 0);
    *(short *)(param_1 + 700) = sVar22;
    *(short *)(param_1 + 0x2be) = sVar26;
    *(undefined2 *)(param_1 + 0x2c0) = uVar1;
    *(short *)(param_1 + 0x2c2) = sVar24;
  }
  local_54 = 0;
  uVar3 = FUN_006584b8(local_150,param_3,&local_54);
  if (uVar3 == 0) {
    *param_4 = 0x170;
  }
  else {
    uVar15 = 0x11 - (int)LZCOUNT(uVar3);
    local_54 = local_54 + uVar15;
    uVar18 = uVar3 << (ulong)((int)LZCOUNT(uVar3) - 0x11U & 0x1f);
    if (0x3fff < uVar3) {
      uVar18 = uVar3 >> (ulong)(uVar15 & 0x1f);
    }
    uVar3 = ((uint)(local_54 * 0x6054) >> 9) + ((uVar18 >> 4 & 0x3ff) * 0x6054 + 0x15126000 >> 0x13)
    ;
    sVar22 = (short)uVar3 + 0x170;
    if ((uVar3 & 0x8000) != 0) {
      sVar22 = 0x170;
    }
    *param_4 = sVar22;
    if ((short)uVar19 < 0xb) {
      if (local_54 < 0) {
        uVar19 = uVar19 + (uVar18 >> (ulong)(-local_54 & 0x1f));
      }
      else {
        uVar19 = uVar19 + 0xb;
      }
    }
  }
  return uVar19;
}


// ===== 006584b8  FUN_006584b8 =====

int FUN_006584b8(short *param_1,ulong param_2,uint *param_3)

{
  uint uVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  short *psVar9;
  short *psVar10;
  short *psVar11;
  short *psVar12;
  short *psVar13;
  short *psVar14;
  short *psVar15;
  short sVar16;
  ulong uVar17;
  long lVar18;
  short *psVar19;
  short *psVar20;
  ulong uVar21;
  undefined1 auVar22 [16];
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  short sVar30;
  int iVar31;
  undefined8 uVar28;
  short sVar32;
  int iVar33;
  int iVar34;
  undefined1 auVar29 [16];
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  
  sVar16 = FUN_00658628(param_1,param_2,param_2);
  uVar1 = (uint)sVar16;
  if (param_2 == 0) {
    iVar23 = 0;
    goto LAB_00658608;
  }
  if (param_2 < 4) {
    iVar23 = 0;
    uVar17 = 0;
    psVar19 = param_1;
  }
  else {
    auVar22._4_4_ = uVar1;
    auVar22._0_4_ = uVar1;
    auVar22._8_4_ = uVar1;
    auVar22._12_4_ = uVar1;
    if (param_2 < 0x10) {
      iVar23 = 0;
      uVar21 = 0;
    }
    else {
      iVar23 = 0;
      iVar24 = 0;
      iVar25 = 0;
      iVar26 = 0;
      iVar27 = 0;
      iVar31 = 0;
      iVar33 = 0;
      iVar34 = 0;
      iVar35 = 0;
      iVar36 = 0;
      iVar37 = 0;
      iVar38 = 0;
      iVar39 = 0;
      iVar40 = 0;
      iVar41 = 0;
      iVar42 = 0;
      uVar17 = param_2 & 0xfffffffffffffff0;
      auVar29 = NEON_neg(auVar22,4);
      psVar19 = param_1 + 8;
      uVar21 = param_2 & 0xfffffffffffffff0;
      do {
        psVar20 = psVar19 + -8;
        psVar2 = psVar19 + -7;
        psVar3 = psVar19 + -6;
        psVar4 = psVar19 + -5;
        psVar5 = psVar19 + -4;
        psVar6 = psVar19 + -3;
        psVar7 = psVar19 + -2;
        psVar8 = psVar19 + -1;
        sVar16 = *psVar19;
        psVar9 = psVar19 + 1;
        psVar10 = psVar19 + 2;
        psVar11 = psVar19 + 3;
        psVar12 = psVar19 + 4;
        psVar13 = psVar19 + 5;
        psVar14 = psVar19 + 6;
        psVar15 = psVar19 + 7;
        uVar21 = uVar21 - 0x10;
        psVar19 = psVar19 + 0x10;
        auVar45._0_4_ = (int)*psVar5 * (int)*psVar5;
        auVar45._4_4_ = (int)*psVar6 * (int)*psVar6;
        auVar45._8_4_ = (int)*psVar7 * (int)*psVar7;
        auVar45._12_4_ = (int)*psVar8 * (int)*psVar8;
        auVar43._0_4_ = (int)*psVar20 * (int)*psVar20;
        auVar43._4_4_ = (int)*psVar2 * (int)*psVar2;
        auVar43._8_4_ = (int)*psVar3 * (int)*psVar3;
        auVar43._12_4_ = (int)*psVar4 * (int)*psVar4;
        auVar46._0_4_ = (int)*psVar12 * (int)*psVar12;
        auVar46._4_4_ = (int)*psVar13 * (int)*psVar13;
        auVar46._8_4_ = (int)*psVar14 * (int)*psVar14;
        auVar46._12_4_ = (int)*psVar15 * (int)*psVar15;
        auVar44._0_4_ = (int)sVar16 * (int)sVar16;
        auVar44._4_4_ = (int)*psVar9 * (int)*psVar9;
        auVar44._8_4_ = (int)*psVar10 * (int)*psVar10;
        auVar44._12_4_ = (int)*psVar11 * (int)*psVar11;
        auVar45 = NEON_ushl(auVar45,auVar29,4);
        auVar43 = NEON_ushl(auVar43,auVar29,4);
        auVar46 = NEON_ushl(auVar46,auVar29,4);
        auVar44 = NEON_ushl(auVar44,auVar29,4);
        iVar35 = auVar45._0_4_ + iVar35;
        iVar36 = auVar45._4_4_ + iVar36;
        iVar37 = auVar45._8_4_ + iVar37;
        iVar38 = auVar45._12_4_ + iVar38;
        iVar27 = auVar43._0_4_ + iVar27;
        iVar31 = auVar43._4_4_ + iVar31;
        iVar33 = auVar43._8_4_ + iVar33;
        iVar34 = auVar43._12_4_ + iVar34;
        iVar23 = auVar46._0_4_ + iVar23;
        iVar24 = auVar46._4_4_ + iVar24;
        iVar25 = auVar46._8_4_ + iVar25;
        iVar26 = auVar46._12_4_ + iVar26;
        iVar39 = auVar44._0_4_ + iVar39;
        iVar40 = auVar44._4_4_ + iVar40;
        iVar41 = auVar44._8_4_ + iVar41;
        iVar42 = auVar44._12_4_ + iVar42;
      } while (uVar21 != 0);
      iVar23 = iVar39 + iVar27 + iVar23 + iVar35 + iVar40 + iVar31 + iVar24 + iVar36 +
               iVar41 + iVar33 + iVar25 + iVar37 + iVar42 + iVar34 + iVar26 + iVar38;
      if (param_2 == uVar17) goto LAB_00658608;
      uVar21 = uVar17;
      if ((param_2 & 0xc) == 0) {
        psVar19 = param_1 + uVar17;
        goto LAB_006585ec;
      }
    }
    iVar25 = 0;
    iVar26 = 0;
    uVar17 = param_2 & 0xfffffffffffffffc;
    auVar22 = NEON_neg(auVar22,4);
    psVar19 = param_1 + uVar17;
    lVar18 = uVar21 - uVar17;
    iVar24 = 0;
    psVar20 = param_1 + uVar21;
    do {
      uVar28 = *(undefined8 *)psVar20;
      lVar18 = lVar18 + 4;
      sVar16 = (short)((ulong)uVar28 >> 0x10);
      sVar30 = (short)((ulong)uVar28 >> 0x20);
      sVar32 = (short)((ulong)uVar28 >> 0x30);
      auVar29._0_4_ = (int)(short)uVar28 * (int)(short)uVar28;
      auVar29._4_4_ = (int)sVar16 * (int)sVar16;
      auVar29._8_4_ = (int)sVar30 * (int)sVar30;
      auVar29._12_4_ = (int)sVar32 * (int)sVar32;
      auVar29 = NEON_ushl(auVar29,auVar22,4);
      iVar23 = auVar29._0_4_ + iVar23;
      iVar24 = auVar29._4_4_ + iVar24;
      iVar25 = auVar29._8_4_ + iVar25;
      iVar26 = auVar29._12_4_ + iVar26;
      psVar20 = psVar20 + 4;
    } while (lVar18 != 0);
    iVar23 = iVar23 + iVar24 + iVar25 + iVar26;
    if (param_2 == uVar17) goto LAB_00658608;
  }
LAB_006585ec:
  lVar18 = param_2 - uVar17;
  do {
    lVar18 = lVar18 + -1;
    iVar23 = ((uint)((int)*psVar19 * (int)*psVar19) >> (ulong)(uVar1 & 0x1f)) + iVar23;
    psVar19 = psVar19 + 1;
  } while (lVar18 != 0);
LAB_00658608:
  *param_3 = uVar1;
  return iVar23;
}


// ===== 00658628  FUN_00658628 =====

int FUN_00658628(short *param_1,ulong param_2,undefined4 param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  short sVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined8 uVar11;
  short *psVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  short *psVar17;
  uint uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uVar23;
  undefined2 uVar25;
  undefined2 uVar26;
  undefined2 uVar27;
  undefined1 auVar24 [16];
  undefined2 uVar28;
  undefined2 uVar29;
  undefined2 uVar30;
  undefined2 uVar31;
  undefined2 uVar32;
  undefined2 uVar33;
  undefined2 uVar34;
  undefined2 uVar35;
  undefined2 uVar36;
  undefined2 uVar37;
  undefined2 uVar38;
  undefined2 uVar39;
  
  if (param_2 == 0) {
    uVar18 = 0xffff;
    goto LAB_00658714;
  }
  if (param_2 < 4) {
    uVar18 = 0xffff;
    psVar12 = param_1;
    uVar14 = param_2;
  }
  else {
    if (param_2 < 0x10) {
      uVar15 = 0;
      auVar20._0_2_ = 0xffff;
    }
    else {
      auVar19._8_8_ = 0xffffffffffffffff;
      auVar19._0_8_ = 0xffffffffffffffff;
      auVar24._8_8_ = 0xffffffffffffffff;
      auVar24._0_8_ = 0xffffffffffffffff;
      uVar15 = param_2 & 0xfffffffffffffff0;
      psVar12 = param_1 + 8;
      uVar14 = param_2 & 0xfffffffffffffff0;
      do {
        uVar8 = *(undefined8 *)(psVar12 + -4);
        uVar23 = *(undefined8 *)(psVar12 + -8);
        uVar11 = *(undefined8 *)(psVar12 + 4);
        uVar10 = *(undefined8 *)psVar12;
        uVar14 = uVar14 - 0x10;
        psVar12 = psVar12 + 0x10;
        auVar20._0_2_ = MP_INT_ABS((short)uVar23);
        uVar25 = MP_INT_ABS((short)((ulong)uVar23 >> 0x10));
        uVar26 = MP_INT_ABS((short)((ulong)uVar23 >> 0x20));
        uVar27 = MP_INT_ABS((short)((ulong)uVar23 >> 0x30));
        uVar28 = MP_INT_ABS((short)uVar8);
        uVar29 = MP_INT_ABS((short)((ulong)uVar8 >> 0x10));
        uVar30 = MP_INT_ABS((short)((ulong)uVar8 >> 0x20));
        uVar31 = MP_INT_ABS((short)((ulong)uVar8 >> 0x30));
        uVar32 = MP_INT_ABS((short)uVar10);
        uVar33 = MP_INT_ABS((short)((ulong)uVar10 >> 0x10));
        uVar34 = MP_INT_ABS((short)((ulong)uVar10 >> 0x20));
        uVar35 = MP_INT_ABS((short)((ulong)uVar10 >> 0x30));
        uVar36 = MP_INT_ABS((short)uVar11);
        uVar37 = MP_INT_ABS((short)((ulong)uVar11 >> 0x10));
        uVar38 = MP_INT_ABS((short)((ulong)uVar11 >> 0x20));
        uVar39 = MP_INT_ABS((short)((ulong)uVar11 >> 0x30));
        auVar7._2_2_ = uVar25;
        auVar7._0_2_ = auVar20._0_2_;
        auVar7._4_2_ = uVar26;
        auVar7._6_2_ = uVar27;
        auVar7._8_2_ = uVar28;
        auVar7._10_2_ = uVar29;
        auVar7._12_2_ = uVar30;
        auVar7._14_2_ = uVar31;
        auVar19 = NEON_smax(auVar7,auVar19,2);
        auVar9._2_2_ = uVar33;
        auVar9._0_2_ = uVar32;
        auVar9._4_2_ = uVar34;
        auVar9._6_2_ = uVar35;
        auVar9._8_2_ = uVar36;
        auVar9._10_2_ = uVar37;
        auVar9._12_2_ = uVar38;
        auVar9._14_2_ = uVar39;
        auVar24 = NEON_smax(auVar9,auVar24,2);
      } while (uVar14 != 0);
      auVar19 = NEON_smax(auVar19,auVar24,2);
      auVar20._2_14_ = auVar19._2_14_;
      auVar20._0_2_ = NEON_smaxv(auVar19,2);
      uVar18 = auVar20._0_4_;
      if (param_2 == uVar15) goto LAB_00658714;
      if ((param_2 & 0xc) == 0) {
        psVar12 = param_1 + uVar15;
        uVar14 = param_2 & 0xf;
        goto LAB_006586f0;
      }
    }
    auVar21._2_2_ = auVar20._0_2_;
    auVar21._0_2_ = auVar20._0_2_;
    auVar21._4_2_ = auVar20._0_2_;
    auVar21._6_2_ = auVar20._0_2_;
    auVar21._8_8_ = 0;
    uVar13 = param_2 & 0xfffffffffffffffc;
    psVar12 = param_1 + uVar13;
    uVar14 = param_2 & 3;
    lVar16 = uVar15 - uVar13;
    psVar17 = param_1 + uVar15;
    do {
      uVar23 = *(undefined8 *)psVar17;
      lVar16 = lVar16 + 4;
      auVar20._0_2_ = MP_INT_ABS((short)uVar23);
      uVar25 = MP_INT_ABS((short)((ulong)uVar23 >> 0x10));
      uVar26 = MP_INT_ABS((short)((ulong)uVar23 >> 0x20));
      uVar27 = MP_INT_ABS((short)((ulong)uVar23 >> 0x30));
      auVar21._0_8_ =
           NEON_smax(CONCAT26(uVar27,CONCAT24(uVar26,CONCAT22(uVar25,auVar20._0_2_))),auVar21._0_8_,
                     2);
      psVar17 = psVar17 + 4;
    } while (lVar16 != 0);
    auVar22._2_14_ = auVar21._2_14_;
    auVar22._0_2_ = NEON_smaxv(auVar21._0_8_,2);
    uVar18 = auVar22._0_4_;
    if (param_2 == uVar13) goto LAB_00658714;
  }
LAB_006586f0:
  do {
    sVar4 = *psVar12;
    sVar6 = (short)uVar18;
    sVar1 = -sVar4;
    if (-1 < sVar4) {
      sVar1 = sVar4;
    }
    uVar18 = (int)sVar1;
    if ((int)sVar1 <= (int)sVar6) {
      uVar18 = (int)sVar6;
    }
    uVar14 = uVar14 - 1;
    psVar12 = psVar12 + 1;
  } while (uVar14 != 0);
LAB_00658714:
  iVar5 = 0x20 - (int)LZCOUNT(param_3);
  iVar2 = 0;
  if ((uVar18 & 0xffff) != 0) {
    iVar2 = (int)LZCOUNT((int)(short)uVar18 * (int)(short)uVar18) + -1;
  }
  iVar3 = 0;
  if (iVar2 <= iVar5 && (uVar18 & 0xffff) != 0) {
    iVar3 = iVar5 - iVar2;
  }
  return iVar3;
}


// ===== 00658754  FUN_00658754 =====

int FUN_00658754(short param_1,short param_2,int param_3,undefined2 *param_4)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  
  uVar3 = FUN_0065880c(((param_3 << 0x10) >> 0x11) + 0x20000,param_3);
  iVar1 = (int)((uint)uVar3 << 0x10) >> 0x12;
  iVar2 = (int)(short)(param_1 * 8 - param_2);
  uVar4 = (iVar1 * iVar1 * 0x4000 >> 0x10) * iVar2;
  *param_4 = (short)(uVar4 >> 10);
  iVar1 = ((int)(uVar4 * 0x40) >> 0x10) * iVar2 >> 9;
  if (iVar1 < 0x55f5) {
    uVar4 = -(iVar1 * 0x17150 & 0xffff0000U);
    uVar4 = (uVar4 >> 0x10 & 0x3ff | 0x400) >> (ulong)(-((int)uVar4 >> 0x1a) & 0x1f);
  }
  else {
    uVar4 = 0;
  }
  return uVar4 * (int)(short)uVar3;
}


// ===== 0065880c  FUN_0065880c =====

int FUN_0065880c(int param_1,short param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = 0;
    if (param_2 != 0) {
      iVar1 = param_1 / (int)param_2;
    }
    return iVar1;
  }
  return 0x7fffffff;
}


// ===== 0065882c  FUN_0065882c =====

int FUN_0065882c(int param_1,short param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = 0;
    if (param_2 != 0) {
      iVar1 = param_1 / (int)param_2;
    }
    return iVar1;
  }
  return 0x7fff;
}


// ===== 0065884c  FUN_0065884c =====

int FUN_0065884c(uint param_1,short param_2,short param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (param_2 == 0) {
    iVar3 = -1;
    uVar4 = 0x7fffffff;
  }
  else {
    iVar2 = (int)param_2;
    sVar1 = 0;
    if (iVar2 != 0) {
      sVar1 = (short)(0x1fffffff / iVar2);
    }
    iVar3 = (int)sVar1;
    uVar4 = iVar2 * iVar3 * 2 ^ 0x7fffffff;
  }
  uVar4 = uVar4 + (iVar3 * param_3 >> 0xf) * -2;
  uVar4 = ((int)uVar4 >> 0x10) * iVar3 + ((int)((uVar4 >> 1 & 0x7fff) * iVar3) >> 0xf);
  iVar3 = (int)(uVar4 * 2) >> 0x10;
  return (iVar3 * ((int)param_1 >> 0x10) + ((int)((uVar4 & 0x7fff) * ((int)param_1 >> 0x10)) >> 0xf)
         + ((int)(iVar3 * (param_1 >> 1 & 0x7fff)) >> 0xf)) * 8;
}


// ===== 006588d0  FUN_006588d0 =====

void FUN_006588d0(short *param_1,short *param_2,uint *param_3,ulong param_4)

{
  short *psVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  
  uVar2 = *param_3;
  uVar3 = param_3[1];
  for (param_4 = param_4 >> 1; param_4 != 0; param_4 = param_4 - 1) {
    sVar5 = (short)((uint)(*param_1 * 0x147b) >> 0xe) + (short)(uVar2 >> 1);
    *param_2 = sVar5;
    sVar6 = (short)((uint)(param_1[1] * 0x570) >> 0xe) + (short)(uVar3 >> 1);
    sVar4 = *param_1;
    *param_2 = sVar6 + sVar5;
    psVar1 = param_1 + 1;
    param_1 = param_1 + 2;
    uVar2 = (int)sVar4 - (sVar5 * 0x147b >> 0xc);
    uVar3 = (int)*psVar1 - (sVar6 * 0x570 >> 0xc);
    param_2 = param_2 + 1;
  }
  *param_3 = uVar2;
  param_3[1] = uVar3;
  return;
}


// ===== 00658948  FUN_00658948 =====

uint FUN_00658948(long param_1,short param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  short *psVar8;
  short sVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  undefined2 *puVar15;
  ulong uVar16;
  undefined2 *puVar17;
  
  uVar12 = param_3 << 4;
  if (0x60 < uVar12) goto LAB_00658b9c;
  lVar1 = param_1 + (ulong)uVar12 * 2;
  lVar13 = 0;
  uVar16 = 0xffffffffffffffff;
  lVar2 = lVar1 + 0x11c;
  psVar8 = (short *)(lVar1 + 0x1dc);
  puVar15 = (undefined2 *)(lVar1 + 0x1de);
  do {
    sVar9 = *(short *)(lVar2 + lVar13 * 2);
    if (sVar9 == 100) {
      puVar17 = puVar15;
      uVar14 = uVar16;
      if (lVar13 != 0xf) {
        do {
          uVar14 = uVar14 + 1;
          puVar17[-1] = *puVar17;
          puVar17[-0x61] = puVar17[-0x60];
          puVar17 = puVar17 + 1;
        } while (uVar14 < 0xe);
      }
      *(undefined2 *)(lVar1 + 0x13a) = 0x65;
      *(undefined2 *)(lVar1 + 0x1fa) = 10000;
    }
    else {
      *(short *)(lVar2 + lVar13 * 2) = sVar9 + 1;
    }
    lVar13 = lVar13 + 1;
    uVar16 = uVar16 + 1;
    puVar15 = puVar15 + 1;
  } while (lVar13 != 0x10);
  if (param_2 < *(short *)(lVar1 + 0x1ea)) {
    if (param_2 < *(short *)(lVar1 + 0x1e2)) {
      if (*(short *)(lVar1 + 0x1de) <= param_2) {
        iVar7 = (int)param_2;
        iVar11 = (int)*(short *)(lVar1 + 0x1e0);
        bVar4 = SBORROW4(iVar11,iVar7);
        bVar5 = iVar11 - iVar7 < 0;
        bVar6 = iVar11 == iVar7;
        uVar10 = 2;
        goto LAB_00658ab0;
      }
      uVar10 = (uint)(*psVar8 <= param_2);
    }
    else {
      if (param_2 < *(short *)(lVar1 + 0x1e6)) {
        iVar7 = (int)param_2;
        iVar11 = (int)*(short *)(lVar1 + 0x1e4);
        bVar4 = SBORROW4(iVar11,iVar7);
        bVar5 = iVar11 - iVar7 < 0;
        bVar6 = iVar11 == iVar7;
        uVar10 = 4;
      }
      else {
        iVar7 = (int)param_2;
        iVar11 = (int)*(short *)(lVar1 + 0x1e8);
        bVar4 = SBORROW4(iVar11,iVar7);
        bVar5 = iVar11 - iVar7 < 0;
        bVar6 = iVar11 == iVar7;
        uVar10 = 6;
      }
LAB_00658ab0:
      if (bVar6 || bVar5 != bVar4) {
        uVar10 = uVar10 + 1;
      }
    }
LAB_00658ab4:
    uVar16 = (ulong)uVar10;
    uVar14 = 0xf;
    puVar15 = (undefined2 *)(param_1 + (ulong)uVar12 * 2 + 0x1fa);
    do {
      uVar14 = uVar14 - 1;
      *puVar15 = puVar15[-1];
      puVar15[-0x60] = puVar15[-0x61];
      puVar15 = puVar15 + -1;
    } while (uVar16 < uVar14);
LAB_00658ae8:
    psVar8[uVar16] = param_2;
    *(undefined2 *)(lVar2 + uVar16 * 2) = 1;
  }
  else if (param_2 < *(short *)(lVar1 + 0x1fa)) {
    if (param_2 < *(short *)(lVar1 + 0x1f2)) {
      if (param_2 < *(short *)(lVar1 + 0x1ee)) {
        iVar7 = (int)param_2;
        iVar11 = (int)*(short *)(lVar1 + 0x1ec);
        bVar4 = SBORROW4(iVar11,iVar7);
        bVar5 = iVar11 - iVar7 < 0;
        bVar6 = iVar11 == iVar7;
        uVar10 = 8;
      }
      else {
        iVar7 = (int)param_2;
        iVar11 = (int)*(short *)(lVar1 + 0x1f0);
        bVar4 = SBORROW4(iVar11,iVar7);
        bVar5 = iVar11 - iVar7 < 0;
        bVar6 = iVar11 == iVar7;
        uVar10 = 10;
      }
      goto LAB_00658ab0;
    }
    if (param_2 < *(short *)(lVar1 + 0x1f6)) {
      iVar7 = (int)param_2;
      iVar11 = (int)*(short *)(lVar1 + 500);
      bVar4 = SBORROW4(iVar11,iVar7);
      bVar5 = iVar11 - iVar7 < 0;
      bVar6 = iVar11 == iVar7;
      uVar10 = 0xc;
      goto LAB_00658ab0;
    }
    if (param_2 < *(short *)(lVar1 + 0x1f8)) {
      uVar10 = 0xe;
      goto LAB_00658ab4;
    }
    uVar16 = 0xf;
    goto LAB_00658ae8;
  }
  if (*(int *)(param_1 + 0x114) < 3) {
    if (*(int *)(param_1 + 0x114) < 1) {
      if (5 < param_3) goto LAB_00658b9c;
      uVar12 = 0;
      sVar9 = *(short *)(param_1 + (ulong)param_3 * 2 + 0x29c);
      iVar7 = 0x640;
      goto LAB_00658b38;
    }
  }
  else {
    psVar8 = (short *)(lVar1 + 0x1e0);
  }
  if (5 < param_3) {
LAB_00658b9c:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(0x5512,0x658ba0);
    (*pcVar3)();
  }
  iVar7 = (int)*psVar8;
  sVar9 = *(short *)(param_1 + (ulong)param_3 * 2 + 0x29c);
  uVar12 = 0x1999;
  if (sVar9 <= *psVar8) {
    uVar12 = 0x7eb7;
  }
LAB_00658b38:
  uVar12 = (int)sVar9 + (int)sVar9 * uVar12 + (uVar12 ^ 0x7fff) * iVar7 + 0x4000 >> 0xf;
  *(short *)(param_1 + (ulong)param_3 * 2 + 0x29c) = (short)uVar12;
  return uVar12;
}


// ===== 00658ba0  FUN_00658ba0 =====

ulong FUN_00658ba0(long param_1,ulong param_2)

{
  ulong uVar1;
  void *pvVar2;
  
  uVar1 = 0;
  if (((param_1 != 0) && (param_2 != 0)) && ((param_2 & param_2 - 1) == 0)) {
    pvVar2 = malloc(param_1 + param_2 + 7);
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../rtc_base/memory/aligned_malloc.cc",0x42,"memory_pointer",&DAT_001fbee0,
                   "Couldn\'t allocate memory in AlignedMalloc");
    }
    uVar1 = (long)pvVar2 + param_2 + 7 & -param_2;
    *(void **)(uVar1 - 8) = pvVar2;
  }
  return uVar1;
}


// ===== 00658c34  FUN_00658c34 =====

void FUN_00658c34(long param_1)

{
  if (param_1 != 0) {
    free(*(void **)(param_1 + -8));
    return;
  }
  return;
}


// ===== 00658c48  FUN_00658c48 =====

void FUN_00658c48(undefined4 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  param_1[8] = 0;
  *(undefined8 *)(param_1 + 4) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 2) = 0xffffffffffffffff;
  uVar1 = DAT_001f50e8;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = uVar1;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0xf12) = 1;
  param_1[0xf13] = 0;
  *(undefined1 *)(param_1 + 0xf14) = 0;
  *(undefined1 *)(param_1 + 0xf16) = 0;
  return;
}


// ===== 00658c90  FUN_00658c90 =====

void FUN_00658c90(undefined4 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  *param_1 = 0;
  uVar1 = DAT_001f50e8;
  *(undefined8 *)(param_1 + 6) = 0;
  param_1[8] = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 4) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 2) = 0xffffffffffffffff;
  param_1[0xf13] = 0;
  lVar2 = *(long *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0xc) = uVar1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (lVar2 != 0) {
    FUN_00659370();
  }
  if (*(char *)(param_1 + 0xf16) == '\x01') {
    *(undefined1 *)(param_1 + 0xf16) = 0;
  }
  *(undefined1 *)(param_1 + 0xf12) = 1;
  return;
}


// ===== 00658d08  FUN_00658d08 =====

void FUN_00658d08(undefined4 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  *param_1 = 0;
  uVar1 = DAT_001f50e8;
  *(undefined8 *)(param_1 + 6) = 0;
  param_1[8] = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 4) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 2) = 0xffffffffffffffff;
  param_1[0xf13] = 0;
  lVar2 = *(long *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0xc) = uVar1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (lVar2 != 0) {
    FUN_00659370();
  }
  if (*(char *)(param_1 + 0xf16) == '\x01') {
    *(undefined1 *)(param_1 + 0xf16) = 0;
  }
  return;
}


// ===== 00658d78  FUN_00658d78 =====

void FUN_00658d78(undefined4 *param_1,undefined4 param_2,void *param_3,long param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,ulong param_8)

{
  undefined4 uVar1;
  
  if (0x18 < param_8) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../api/audio/audio_frame.cc",0x48,"num_channels <= kMaxNumberOfAudioChannels",
                 &DAT_001fb920,param_8,0x18);
  }
  *param_1 = param_2;
  *(long *)(param_1 + 6) = param_4;
  param_1[8] = param_5;
  param_1[0xc] = param_6;
  param_1[0xd] = param_7;
  *(ulong *)(param_1 + 10) = param_8;
  uVar1 = FUN_006594c0(param_8 & 0xffffffff);
  param_8 = param_8 * param_4;
  param_1[0xf13] = uVar1;
  if (0x1e00 < param_8) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../api/audio/audio_frame.cc",0x55,"length <= data_.size()",&DAT_001fb920,
                 param_8,0x1e00);
  }
  if (param_3 != (void *)0x0) {
    memcpy(param_1 + 0x12,param_3,param_8 * 2);
  }
  *(bool *)(param_1 + 0xf12) = param_3 == (void *)0x0;
  return;
}


// ===== 00658e5c  FUN_00658e5c =====

void FUN_00658e5c(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (param_1 != param_2) {
    if ((*(char *)(param_1 + 0xf12) == '\x01') && ((*(byte *)(param_2 + 0xf12) & 1) == 0)) {
      memset(param_1 + 0x12,0,0x3c00);
    }
    *param_1 = *param_2;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    lVar5 = *(long *)(param_2 + 0x10);
    if (lVar5 != 0) {
      FUN_00d0f740(1,lVar5);
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_00659370();
    }
    *(long *)(param_1 + 0x10) = lVar5;
    *(undefined1 *)(param_1 + 0xf12) = *(undefined1 *)(param_2 + 0xf12);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    param_1[8] = param_2[8];
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
    param_1[0xf13] = param_2[0xf13];
    uVar4 = *(undefined8 *)(param_2 + 0xf16);
    *(undefined8 *)(param_1 + 0xf14) = *(undefined8 *)(param_2 + 0xf14);
    *(char *)(param_1 + 0xf16) = (char)uVar4;
    if (*(char *)(param_2 + 0xf12) == '\x01') {
      puVar2 = DAT_00d646e0;
      if (((DAT_00d646e8 & 1) == 0) &&
         (iVar1 = FUN_0054fdd4(&DAT_00d646e8), puVar2 = DAT_00d646e0, iVar1 != 0)) {
        puVar2 = (undefined4 *)operator_new__(0x3c00);
        memset(puVar2,0,0x3c00);
        DAT_00d646e0 = puVar2;
        FUN_0054ff1c(&DAT_00d646e8);
        puVar2 = DAT_00d646e0;
      }
    }
    else {
      puVar2 = param_2 + 0x12;
    }
    uVar3 = *(long *)(param_2 + 10) * *(long *)(param_2 + 6);
    if (0x1e00 < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../api/audio/audio_frame.cc",0x7a,"data.size() <= data_.size()",&DAT_001fb920
                   ,uVar3,0x1e00);
    }
    if ((uVar3 != 0) && ((*(byte *)(param_1 + 0xf12) & 1) == 0)) {
      memcpy(param_1 + 0x12,puVar2,uVar3 * 2);
      return;
    }
  }
  return;
}


// ===== 0065901c  FUN_0065901c =====

undefined1 FUN_0065901c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x3c48);
}


// ===== 0065902c  FUN_0065902c =====

void FUN_0065902c(long *param_1,long param_2)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  
  if (*(char *)(param_2 + 0x3c48) == '\x01') {
    pvVar3 = DAT_00d646e0;
    if (((DAT_00d646e8 & 1) == 0) &&
       (iVar2 = FUN_0054fdd4(&DAT_00d646e8), pvVar3 = DAT_00d646e0, iVar2 != 0)) {
      pvVar3 = operator_new__(0x3c00);
      memset(pvVar3,0,0x3c00);
      DAT_00d646e0 = pvVar3;
      FUN_0054ff1c(&DAT_00d646e8);
      pvVar3 = DAT_00d646e0;
    }
  }
  else {
    pvVar3 = (void *)(param_2 + 0x48);
  }
  lVar4 = *(long *)(param_2 + 0x18);
  lVar5 = *(long *)(param_2 + 0x28) * lVar4;
  *param_1 = *(long *)(param_2 + 0x28);
  param_1[1] = lVar4;
  pvVar1 = (void *)0x0;
  if (lVar5 != 0) {
    pvVar1 = pvVar3;
  }
  param_1[2] = (long)pvVar1;
  param_1[3] = lVar5;
  return;
}


// ===== 00659108  FUN_00659108 =====

void * FUN_00659108(long param_1)

{
  int iVar1;
  void *__s;
  
  if (*(char *)(param_1 + 0x3c48) == '\x01') {
    if (((DAT_00d646e8 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d646e8), iVar1 != 0)) {
      __s = operator_new__(0x3c00);
      memset(__s,0,0x3c00);
      DAT_00d646e0 = __s;
      FUN_0054ff1c(&DAT_00d646e8);
    }
    return DAT_00d646e0;
  }
  return (void *)(param_1 + 0x48);
}


// ===== 006591a0  FUN_006591a0 =====

long FUN_006591a0(long param_1)

{
  if (*(char *)(param_1 + 0x3c48) == '\x01') {
    memset((void *)(param_1 + 0x48),0,0x3c01);
  }
  return param_1 + 0x48;
}


// ===== 006591e8  FUN_006591e8 =====

void FUN_006591e8(ulong *param_1,long param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = param_4 * param_3;
  if (0x1e00 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../api/audio/audio_frame.cc",0x9f,"total_samples <= data_.size()",&DAT_001fb920
                 ,uVar2,0x1e00);
  }
  if (param_4 < 0x19) {
    if (*(char *)(param_2 + 0x3c48) == '\x01') {
      memset((void *)(param_2 + 0x48),0,uVar2 * 2);
      *(undefined1 *)(param_2 + 0x3c48) = 0;
    }
    *(ulong *)(param_2 + 0x18) = param_3;
    uVar1 = 0;
    if (uVar2 != 0) {
      uVar1 = param_2 + 0x48;
    }
    *(ulong *)(param_2 + 0x28) = param_4;
    *param_1 = param_4;
    param_1[1] = param_3;
    param_1[2] = uVar1;
    param_1[3] = uVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../api/audio/audio_frame.cc",0xa0,"num_channels <= kMaxNumberOfAudioChannels",
               &DAT_001fb920,param_4,0x18);
}


// ===== 006592d8  FUN_006592d8 =====

void FUN_006592d8(long param_1)

{
  *(undefined1 *)(param_1 + 0x3c48) = 1;
  return;
}


// ===== 006592ec  FUN_006592ec =====

void FUN_006592ec(long param_1,undefined4 param_2,long param_3)

{
  ulong uVar1;
  
  *(undefined4 *)(param_1 + 0x3c4c) = param_2;
  *(long *)(param_1 + 0x28) = param_3;
  uVar1 = *(long *)(param_1 + 0x18) * param_3;
  if (uVar1 < 0x1e01) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../api/audio/audio_frame.cc",0xc9,
               "samples_per_channel_ * num_channels_ <= data_.size()",&DAT_001fb920,uVar1,0x1e00);
}


// ===== 00659340  FUN_00659340 =====

void FUN_00659340(long param_1,int param_2)

{
  *(int *)(param_1 + 0x20) = param_2;
  *(ulong *)(param_1 + 0x18) = (ulong)(long)param_2 / 100;
  return;
}


// ===== 00659370  FUN_00659370 =====

bool FUN_00659370(void *param_1)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  void *pvVar8;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,param_1);
  if ((param_1 != (void *)0x0) && (iVar1 == 1)) {
    pvVar8 = *(void **)((long)param_1 + 8);
    if (pvVar8 != (void *)0x0) {
      pvVar3 = pvVar8;
      pvVar4 = *(void **)((long)param_1 + 0x10);
      if (pvVar8 != *(void **)((long)param_1 + 0x10)) {
        do {
          pvVar3 = (void *)((long)pvVar4 + -0x68);
          if (pvVar3 == (void *)0x0) {
LAB_0065948c:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
          pvVar2 = *(void **)((long)pvVar4 + -0x60);
          if (pvVar2 != (void *)0x0) {
            pvVar5 = *(void **)((long)pvVar4 + -0x58);
            uVar7 = (ulong)((long)pvVar5 + (-4 - ((long)pvVar5 << 0x3e))) >> 2;
            uVar6 = (ulong)(((long)pvVar2 - (long)pvVar5 << 0x3e) - ((long)pvVar2 - (long)pvVar5))
                    >> 2;
            if (uVar7 <= uVar6) {
              uVar6 = uVar7;
            }
            if ((1 < uVar6) && ((((int)pvVar2 - (int)pvVar5 | -(int)pvVar5) & 3U) == 0)) {
              uVar6 = uVar6 & 0x3ffffffffffffffe;
              pvVar5 = (void *)((long)pvVar5 + uVar6 * -4);
              do {
                uVar6 = uVar6 - 2;
              } while (uVar6 != 0);
            }
            while (pvVar5 != pvVar2) {
              pvVar5 = (void *)((long)pvVar5 + -4);
              if (pvVar5 == (void *)0x0) goto LAB_0065948c;
            }
            *(void **)((long)pvVar4 + -0x58) = pvVar2;
            operator_delete(pvVar2);
          }
          pvVar4 = pvVar3;
        } while (pvVar8 != pvVar3);
        pvVar3 = *(void **)((long)param_1 + 8);
      }
      *(void **)((long)param_1 + 0x10) = pvVar8;
      operator_delete(pvVar3);
    }
    operator_delete(param_1);
  }
  return iVar1 != 1;
}


// ===== 006594a0  FUN_006594a0 =====

undefined4 FUN_006594a0(uint param_1)

{
  code *pcVar1;
  
  if (param_1 < 0x21) {
    return *(undefined4 *)(&DAT_001fe750 + (ulong)param_1 * 4);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0x6594c0);
  (*pcVar1)();
}


// ===== 006594c0  FUN_006594c0 =====

undefined4 FUN_006594c0(int param_1)

{
  if (param_1 - 1U < 8) {
    return *(undefined4 *)(&DAT_001f8a88 + (ulong)(param_1 - 1U) * 4);
  }
  return 1;
}


// ===== 006594e8  FUN_006594e8 =====

undefined4 FUN_006594e8(uint param_1,uint param_2)

{
  code *pcVar1;
  
  if ((param_1 < 0x21) && (param_2 < 0xb)) {
    return *(undefined4 *)(&UNK_001fe7d4 + (ulong)param_2 * 4 + (ulong)param_1 * 0x2c);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0x659518);
  (*pcVar1)();
}


// ===== 00659518  FUN_00659518 =====

void FUN_00659518(undefined4 *param_1,undefined4 param_2,undefined8 *param_3,undefined4 param_4,
                 undefined8 param_5)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 2) = *param_3;
  *(undefined8 *)(param_1 + 4) = param_3[1];
  *(undefined8 *)(param_1 + 6) = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_1[8] = param_4;
  *(undefined8 *)(param_1 + 10) = param_5;
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}


// ===== 00659568  FUN_00659568 =====

void FUN_00659568(undefined4 *param_1,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *param_1 = uVar1;
  uVar1 = *(undefined4 *)(param_2 + 4);
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 10) = param_3;
  param_1[8] = uVar1;
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  uVar2 = (uint)*(byte *)(param_2 + 0xc);
  if (0xe < uVar2) {
    uVar2 = 0xf;
  }
  FUN_005ec41c(param_1 + 2,param_2 + 0x10,param_2 + 0x10 + (ulong)uVar2 * 4);
  if (((*(uint *)(param_2 + 0x168) & 1) != 0) &&
     (*(char *)(param_1 + 0xc) = (char)*(undefined4 *)(param_2 + 0x164),
     (*(byte *)((long)param_1 + 0x31) & 1) == 0)) {
    *(undefined1 *)((long)param_1 + 0x31) = 1;
  }
  uVar3 = *(undefined8 *)(param_2 + 0x79);
  uVar5 = *(undefined8 *)(param_2 + 0x78);
  uVar4 = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)((long)param_1 + 0x49) = *(undefined8 *)(param_2 + 0x81);
  *(undefined8 *)((long)param_1 + 0x41) = uVar3;
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  *(undefined8 *)(param_1 + 0xe) = uVar4;
  return;
}


// ===== 0065961c  FUN_0065961c =====

bool FUN_0065961c(long *param_1,long *param_2)

{
  byte bVar1;
  bool bVar2;
  
  bVar1 = *(byte *)(param_2 + 1);
  bVar2 = *(byte *)(param_1 + 1) == bVar1;
  if ((bVar1 & *(byte *)(param_1 + 1)) != 0) {
    if ((bVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    bVar2 = *param_1 == *param_2;
  }
  return bVar2;
}


// ===== 00659674  FUN_00659674 =====

void FUN_00659674(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


// ===== 00659684  FUN_00659684 =====

void FUN_00659684(undefined1 *param_1,undefined1 param_2,uint param_3)

{
  *param_1 = param_2;
  *(uint *)(param_1 + 4) = param_3;
  if ((int)param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../api/rtp_headers.cc",0x17,"audio_level >= 0",&DAT_001fbedc,param_3,0);
  }
  if (param_3 < 0x80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../api/rtp_headers.cc",0x18,"audio_level <= 127",&DAT_001fbedc,param_3,0x7f);
}


// ===== 006596fc  FUN_006596fc =====

void FUN_006596fc(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar4 = param_2[4];
  uVar3 = param_2[7];
  uVar2 = param_2[6];
  uVar6 = param_2[1];
  uVar5 = *param_2;
  uVar8 = param_2[3];
  uVar7 = param_2[2];
  param_1[5] = param_2[5];
  param_1[4] = uVar4;
  param_1[7] = uVar3;
  param_1[6] = uVar2;
  param_1[1] = uVar6;
  *param_1 = uVar5;
  param_1[3] = uVar8;
  param_1[2] = uVar7;
  uVar5 = param_2[0xb];
  uVar4 = param_2[10];
  uVar3 = param_2[0xd];
  uVar2 = param_2[0xc];
  uVar6 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar6;
  param_1[0xb] = uVar5;
  param_1[10] = uVar4;
  param_1[0xd] = uVar3;
  param_1[0xc] = uVar2;
  if (*(char *)((long)param_2 + 0x87) < '\0') {
    FUN_005478d8(param_1 + 0xe,param_2[0xe],param_2[0xf]);
    cVar1 = *(char *)((long)param_2 + 0x9f);
  }
  else {
    uVar3 = param_2[0xf];
    uVar2 = param_2[0xe];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar3;
    param_1[0xe] = uVar2;
    cVar1 = *(char *)((long)param_2 + 0x9f);
  }
  if (cVar1 < '\0') {
    FUN_005478d8(param_1 + 0x11,param_2[0x11],param_2[0x12]);
    cVar1 = *(char *)((long)param_2 + 0xb7);
  }
  else {
    uVar3 = param_2[0x12];
    uVar2 = param_2[0x11];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar3;
    param_1[0x11] = uVar2;
    cVar1 = *(char *)((long)param_2 + 0xb7);
  }
  if (cVar1 < '\0') {
    FUN_005478d8(param_1 + 0x14,param_2[0x14],param_2[0x15]);
  }
  else {
    uVar3 = param_2[0x15];
    uVar2 = param_2[0x14];
    param_1[0x16] = param_2[0x16];
    param_1[0x15] = uVar3;
    param_1[0x14] = uVar2;
  }
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined1 *)((long)param_1 + 0xfc) = 0;
  if (*(char *)((long)param_2 + 0xfc) == '\x01') {
    FUN_00659adc(param_1 + 0x17,param_2 + 0x17);
    *(undefined1 *)((long)param_1 + 0xfc) = 1;
  }
  uVar2 = param_2[0x20];
  *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(param_2 + 0x21);
  param_1[0x20] = uVar2;
  return;
}


// ===== 006597fc  FUN_006597fc =====

undefined8 * FUN_006597fc(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  byte bVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar7 = param_2[4];
  uVar6 = param_2[7];
  uVar5 = param_2[6];
  uVar9 = param_2[1];
  uVar8 = *param_2;
  uVar11 = param_2[3];
  uVar10 = param_2[2];
  param_1[5] = param_2[5];
  param_1[4] = uVar7;
  param_1[7] = uVar6;
  param_1[6] = uVar5;
  param_1[1] = uVar9;
  *param_1 = uVar8;
  param_1[3] = uVar11;
  param_1[2] = uVar10;
  uVar8 = param_2[0xb];
  uVar7 = param_2[10];
  uVar6 = param_2[0xd];
  uVar5 = param_2[0xc];
  uVar9 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar9;
  param_1[0xb] = uVar8;
  param_1[10] = uVar7;
  param_1[0xd] = uVar6;
  param_1[0xc] = uVar5;
  if (param_1 != param_2) {
    bVar2 = *(byte *)((long)param_2 + 0x87);
    if (*(char *)((long)param_1 + 0x87) < '\0') {
      uVar1 = param_2[0xf];
      puVar4 = (undefined8 *)param_2[0xe];
      if (-1 < (char)bVar2) {
        uVar1 = (ulong)bVar2;
        puVar4 = param_2 + 0xe;
      }
      FUN_00547f08(param_1 + 0xe,puVar4,uVar1);
    }
    else if ((char)bVar2 < '\0') {
      FUN_00547fc0(param_1 + 0xe,param_2[0xe],param_2[0xf]);
    }
    else {
      uVar6 = param_2[0xf];
      uVar5 = param_2[0xe];
      param_1[0x10] = param_2[0x10];
      param_1[0xf] = uVar6;
      param_1[0xe] = uVar5;
    }
    bVar2 = *(byte *)((long)param_2 + 0x9f);
    if (*(char *)((long)param_1 + 0x9f) < '\0') {
      uVar1 = param_2[0x12];
      puVar4 = (undefined8 *)param_2[0x11];
      if (-1 < (char)bVar2) {
        uVar1 = (ulong)bVar2;
        puVar4 = param_2 + 0x11;
      }
      FUN_00547f08(param_1 + 0x11,puVar4,uVar1);
    }
    else if ((char)bVar2 < '\0') {
      FUN_00547fc0(param_1 + 0x11,param_2[0x11],param_2[0x12]);
    }
    else {
      uVar6 = param_2[0x12];
      uVar5 = param_2[0x11];
      param_1[0x13] = param_2[0x13];
      param_1[0x12] = uVar6;
      param_1[0x11] = uVar5;
    }
    bVar2 = *(byte *)((long)param_2 + 0xb7);
    if (*(char *)((long)param_1 + 0xb7) < '\0') {
      uVar1 = param_2[0x15];
      puVar4 = (undefined8 *)param_2[0x14];
      if (-1 < (char)bVar2) {
        uVar1 = (ulong)bVar2;
        puVar4 = param_2 + 0x14;
      }
      FUN_00547f08(param_1 + 0x14,puVar4,uVar1);
    }
    else if ((char)bVar2 < '\0') {
      FUN_00547fc0(param_1 + 0x14,param_2[0x14],param_2[0x15]);
    }
    else {
      uVar6 = param_2[0x15];
      uVar5 = param_2[0x14];
      param_1[0x16] = param_2[0x16];
      param_1[0x15] = uVar6;
      param_1[0x14] = uVar5;
    }
  }
  cVar3 = *(char *)((long)param_1 + 0xfc);
  if (cVar3 == *(char *)((long)param_2 + 0xfc)) {
    if (cVar3 != '\0') {
      FUN_00659b1c(param_1 + 0x17,param_2 + 0x17);
    }
  }
  else if (cVar3 == '\0') {
    if (param_1 == (undefined8 *)0xffffffffffffff48) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    FUN_00659adc(param_1 + 0x17,param_2 + 0x17);
    *(undefined1 *)((long)param_1 + 0xfc) = 1;
  }
  else {
    *(undefined1 *)((long)param_1 + 0xfc) = 0;
  }
  uVar5 = param_2[0x20];
  *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)(param_2 + 0x21);
  param_1[0x20] = uVar5;
  return param_1;
}


// ===== 006599bc  FUN_006599bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006599bc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined4 *)((long)param_1 + 100) = 0;
  uVar2 = _UNK_001f4cc8;
  uVar1 = _DAT_001f4cc0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((long)param_1 + 0x6c) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined2 *)((long)param_1 + 0x92) = 0;
  *(undefined1 *)((long)param_1 + 0x94) = 0;
  *(undefined1 *)((long)param_1 + 0x9c) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((long)param_1 + 0xa4) = 0;
  *(undefined4 *)((long)param_1 + 0xa7) = 0;
  *param_1 = 0;
  *(undefined8 *)((long)param_1 + 5) = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0xff;
  param_1[0x19] = uVar2;
  param_1[0x18] = uVar1;
  *(undefined1 *)((long)param_1 + 0x15c) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((long)param_1 + 0x111) = 0;
  *(undefined8 *)((long)param_1 + 0x109) = 0;
  return;
}


// ===== 00659a44  FUN_00659a44 =====

void FUN_00659a44(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = param_2[4];
  uVar2 = param_2[7];
  uVar1 = param_2[6];
  uVar5 = param_2[1];
  uVar4 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  param_1[1] = uVar5;
  *param_1 = uVar4;
  param_1[3] = uVar7;
  param_1[2] = uVar6;
  uVar3 = param_2[8];
  uVar2 = param_2[0xb];
  uVar1 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar3;
  param_1[0xb] = uVar2;
  param_1[10] = uVar1;
  FUN_006596fc(param_1 + 0xc,param_2 + 0xc);
  return;
}


// ===== 00659a6c  FUN_00659a6c =====

undefined8 * FUN_00659a6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = param_2[4];
  uVar2 = param_2[7];
  uVar1 = param_2[6];
  uVar5 = param_2[1];
  uVar4 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  param_1[1] = uVar5;
  *param_1 = uVar4;
  param_1[3] = uVar7;
  param_1[2] = uVar6;
  uVar3 = param_2[8];
  uVar2 = param_2[0xb];
  uVar1 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar3;
  param_1[0xb] = uVar2;
  param_1[10] = uVar1;
  FUN_006597fc(param_1 + 0xc,param_2 + 0xc);
  return param_1;
}


// ===== 00659ab8  FUN_00659ab8 =====

void FUN_00659ab8(undefined2 *param_1)

{
  *(undefined1 *)(param_1 + 0x20) = 0;
  *param_1 = 0x202;
  *(undefined1 *)(param_1 + 1) = 2;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)((long)param_1 + 9) = 0;
  return;
}


// ===== 00659adc  FUN_00659adc =====

void FUN_00659adc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = param_2[4];
  uVar2 = param_2[7];
  uVar1 = param_2[6];
  uVar5 = param_2[1];
  uVar4 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  param_1[1] = uVar5;
  *param_1 = uVar4;
  param_1[3] = uVar7;
  param_1[2] = uVar6;
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  return;
}


// ===== 00659afc  FUN_00659afc =====

void FUN_00659afc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = param_2[4];
  uVar2 = param_2[7];
  uVar1 = param_2[6];
  uVar5 = param_2[1];
  uVar4 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  param_1[1] = uVar5;
  *param_1 = uVar4;
  param_1[3] = uVar7;
  param_1[2] = uVar6;
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  return;
}


// ===== 00659b1c  FUN_00659b1c =====

void FUN_00659b1c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = param_2[4];
  uVar2 = param_2[7];
  uVar1 = param_2[6];
  uVar5 = param_2[1];
  uVar4 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  param_1[1] = uVar5;
  *param_1 = uVar4;
  param_1[3] = uVar7;
  param_1[2] = uVar6;
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  return;
}


// ===== 00659b3c  FUN_00659b3c =====

void FUN_00659b3c(undefined1 *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                 undefined4 param_5)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  *(undefined4 *)(param_1 + 4) = param_5;
  param_1[0x40] = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  param_1[0x10] = 0;
  return;
}


// ===== 00659b60  FUN_00659b60 =====

undefined1 FUN_00659b60(undefined1 *param_1)

{
  return *param_1;
}


// ===== 00659b6c  FUN_00659b6c =====

undefined1 FUN_00659b6c(long param_1)

{
  return *(undefined1 *)(param_1 + 1);
}


// ===== 00659b78  FUN_00659b78 =====

undefined1 FUN_00659b78(long param_1)

{
  return *(undefined1 *)(param_1 + 2);
}


// ===== 00659b84  FUN_00659b84 =====

undefined4 FUN_00659b84(long param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


// ===== 00659b90  FUN_00659b90 =====

undefined4 FUN_00659b90(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


// ===== 00659b9c  FUN_00659b9c =====

undefined4 FUN_00659b9c(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}


// ===== 00659ba8  FUN_00659ba8 =====

long FUN_00659ba8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  if (*(char *)(param_1 + 0x40) == '\0') {
    lVar1 = 0;
  }
  return lVar1;
}


// ===== 00659bc0  FUN_00659bc0 =====

undefined8 FUN_00659bc0(undefined1 *param_1,uint param_2)

{
  if (((param_2 & 0xff) < 0x40) && ((0x401ff6U >> ((ulong)param_2 & 0x3f) & 1) != 0)) {
    *param_1 = (char)param_2;
    return 1;
  }
  return 0;
}


// ===== 00659bf4  FUN_00659bf4 =====

undefined8 FUN_00659bf4(long param_1,uint param_2)

{
  if (((param_2 & 0xff) < 0x40) && ((0x7fff6U >> ((ulong)param_2 & 0x3f) & 1) != 0)) {
    *(char *)(param_1 + 1) = (char)param_2;
    return 1;
  }
  return 0;
}


// ===== 00659c28  FUN_00659c28 =====

undefined8 FUN_00659c28(long param_1,uint param_2)

{
  if (((param_2 & 0xff) < 0x40) && ((0x7ff7UL >> ((ulong)param_2 & 0x3f) & 1) != 0)) {
    *(char *)(param_1 + 2) = (char)param_2;
    return 1;
  }
  return 0;
}


// ===== 00659c58  FUN_00659c58 =====

bool FUN_00659c58(long param_1,uint param_2)

{
  if ((param_2 & 0xff) < 4) {
    *(uint *)(param_1 + 4) = param_2 & 0xff;
  }
  return (param_2 & 0xfc) == 0;
}


// ===== 00659c78  FUN_00659c78 =====

bool FUN_00659c78(long param_1,uint param_2)

{
  param_2 = param_2 & 0xff;
  if (param_2 < 3) {
    *(uint *)(param_1 + 8) = param_2;
  }
  return param_2 < 3;
}


// ===== 00659c98  FUN_00659c98 =====

bool FUN_00659c98(long param_1,uint param_2)

{
  param_2 = param_2 & 0xff;
  if (param_2 < 3) {
    *(uint *)(param_1 + 0xc) = param_2;
  }
  return param_2 < 3;
}


// ===== 00659cb8  FUN_00659cb8 =====

void FUN_00659cb8(long param_1,undefined1 *param_2)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined7 uStack_38;
  undefined1 local_31;
  undefined7 uStack_30;
  undefined8 uStack_29;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (param_2 == (undefined1 *)0x0) {
    uVar3 = 0;
  }
  else {
    uStack_48 = *(undefined8 *)(param_2 + 9);
    local_50 = *(undefined8 *)(param_2 + 1);
    uStack_40 = *(undefined8 *)(param_2 + 0x11);
    uStack_29 = *(undefined8 *)(param_2 + 0x28);
    uVar3 = *param_2;
    uStack_38 = (undefined7)*(undefined8 *)(param_2 + 0x19);
    local_31 = (undefined1)*(undefined8 *)(param_2 + 0x20);
    uStack_30 = (undefined7)((ulong)*(undefined8 *)(param_2 + 0x20) >> 8);
  }
  *(undefined1 *)(param_1 + 0x10) = uVar3;
  *(bool *)(param_1 + 0x40) = param_2 != (undefined1 *)0x0;
  *(undefined8 *)(param_1 + 0x19) = uStack_48;
  *(undefined8 *)(param_1 + 0x11) = local_50;
  *(ulong *)(param_1 + 0x29) = CONCAT17(local_31,uStack_38);
  *(undefined8 *)(param_1 + 0x21) = uStack_40;
  *(undefined8 *)(param_1 + 0x38) = uStack_29;
  *(ulong *)(param_1 + 0x30) = CONCAT71(uStack_30,local_31);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00659d40  FUN_00659d40 =====

byte FUN_00659d40(byte *param_1)

{
  return *param_1 & 1;
}


// ===== 00659d50  FUN_00659d50 =====

bool FUN_00659d50(ulong param_1)

{
  return (param_1 & 0xc0) == 0;
}


// ===== 00659d60  FUN_00659d60 =====

char * FUN_00659d60(byte *param_1)

{
  char *pcVar1;
  
  pcVar1 = "realtime";
  if ((*param_1 & 1) != 0) {
    pcVar1 = "screen";
  }
  return pcVar1;
}


// ===== 00659d84  FUN_00659d84 =====

ulong FUN_00659d84(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar2 = param_2 - param_1;
  uVar3 = 2;
  if ((long)uVar2 < 0x10000) {
    uVar3 = 0;
  }
  uVar3 = uVar3 | (uint)(uVar2 >> 0x3f);
  if (uVar3 < 2) {
    uVar1 = 0;
    if (uVar3 == 0) {
      return uVar2 & 0xffffffff;
    }
  }
  else {
    if (uVar3 != 2) {
                    /* WARNING: Subroutine does not return */
      FUN_0061ff28();
    }
    uVar1 = 0xffff;
  }
  return uVar1;
}


// ===== 00659dd8  FUN_00659dd8 =====

ulong FUN_00659dd8(ulong param_1)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = param_1 / 1000;
  if (499 < param_1 % 1000) {
    uVar3 = uVar3 + 1;
  }
  if ((param_1 & 0x8000000000000000) != 0) {
    uVar3 = -(-param_1 / 1000) - (ulong)(500 < -param_1 % 1000);
  }
  uVar2 = 2;
  if ((long)uVar3 < 0x10000) {
    uVar2 = 0;
  }
  uVar2 = uVar2 | (uint)(uVar3 >> 0x3f);
  if (uVar2 < 2) {
    uVar1 = 0;
    if (uVar2 == 0) {
      return uVar3 & 0xffffffff;
    }
  }
  else {
    if (uVar2 != 2) {
                    /* WARNING: Subroutine does not return */
      FUN_0061ff28();
    }
    uVar1 = 0xffff;
  }
  return uVar1;
}


// ===== 00659e80  FUN_00659e80 =====

void FUN_00659e80(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 4) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 2) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 6) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xc) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 10) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xe) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x14) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x12) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x18) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x16) = 0xffffffffffffffff;
  return;
}


// ===== 00659eac  FUN_00659eac =====

bool FUN_00659eac(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if ((-1 < *(long *)(param_2 + 8)) &&
     (lVar1 = *(long *)(param_2 + 0x58) - *(long *)(param_2 + 8), lVar1 != -1)) {
    if (*(long *)(param_1 + 8) < 0) {
      lVar2 = -1;
    }
    else {
      lVar2 = *(long *)(param_1 + 0x58) - *(long *)(param_1 + 8);
    }
    return lVar2 <= lVar1;
  }
  return false;
}


// ===== 00659ef4  FUN_00659ef4 =====

void FUN_00659ef4(char *param_1,undefined4 *param_2)

{
  ulong uVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  char *__src;
  undefined8 uVar5;
  size_t __n;
  char *__dest;
  char *local_460;
  undefined1 *puStack_458;
  undefined1 *local_450;
  undefined1 auStack_448 [1024];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  if (*(char *)(param_2 + 0x1a) == -1) {
    param_1[0x17] = '\0';
    *param_1 = '\0';
  }
  else {
    memset(auStack_448,0xaa,0x400);
    local_450 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_458 = &DAT_aaaaaaaaaaaaaaaa;
    local_460 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00622830(&local_460,auStack_448,0x400);
    uVar5 = FUN_006229f8(&local_460,*param_2);
    uVar5 = FUN_00622844(uVar5,0x2c);
    uVar5 = FUN_00622a0c(uVar5,*(undefined8 *)(param_2 + 2));
    uVar5 = FUN_00622844(uVar5,0x2c);
    uVar5 = FUN_00622a0c(uVar5,*(undefined8 *)(param_2 + 4));
    uVar5 = FUN_00622844(uVar5,0x2c);
    uVar5 = FUN_00622a0c(uVar5,*(undefined8 *)(param_2 + 6));
    uVar5 = FUN_00622844(uVar5,0x2c);
    uVar5 = FUN_00622a0c(uVar5,*(undefined8 *)(param_2 + 8));
    uVar5 = FUN_00622844(uVar5,0x2c);
    uVar5 = FUN_00622a0c(uVar5,*(undefined8 *)(param_2 + 10));
    uVar5 = FUN_00622844(uVar5,0x2c);
    uVar5 = FUN_00622a0c(uVar5,*(undefined8 *)(param_2 + 0xc));
    uVar5 = FUN_00622844(uVar5,0x2c);
    uVar5 = FUN_00622a0c(uVar5,*(undefined8 *)(param_2 + 0xe));
    uVar5 = FUN_00622844(uVar5,0x2c);
    uVar5 = FUN_00622a0c(uVar5,*(undefined8 *)(param_2 + 0x10));
    uVar5 = FUN_00622844(uVar5,0x2c);
    uVar5 = FUN_00622a0c(uVar5,*(undefined8 *)(param_2 + 0x12));
    uVar5 = FUN_00622844(uVar5,0x2c);
    uVar5 = FUN_00622a0c(uVar5,*(undefined8 *)(param_2 + 0x14));
    uVar5 = FUN_00622844(uVar5,0x2c);
    uVar5 = FUN_00622a0c(uVar5,*(undefined8 *)(param_2 + 0x16));
    uVar5 = FUN_00622844(uVar5,0x2c);
    uVar5 = FUN_00622a0c(uVar5,*(undefined8 *)(param_2 + 0x18));
    uVar5 = FUN_00622844(uVar5,0x2c);
    bVar2 = 0;
    if (*(byte *)(param_2 + 0x1a) != 0xff) {
      bVar2 = *(byte *)(param_2 + 0x1a) >> 1 & 1;
    }
    uVar5 = FUN_00622910(uVar5,bVar2);
    uVar5 = FUN_00622844(uVar5,0x2c);
    FUN_00622910(uVar5,*(byte *)(param_2 + 0x1a) != 0xff & *(byte *)(param_2 + 0x1a));
    __src = local_460;
    if (local_460 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string:1063: libc++ Hardening assertion __s != nullptr failed: basic_string(const char*) detected nullptr\n"
                );
    }
    __n = strlen(local_460);
    if (0x7ffffffffffffff6 < __n) {
                    /* WARNING: Subroutine does not return */
      FUN_005d45ec();
    }
    if (__n < 0x17) {
      param_1[0x17] = (char)__n;
      __dest = param_1;
    }
    else {
      uVar1 = (__n & 0x7ffffffffffffff8) + 8;
      uVar3 = 0x19;
      if (uVar1 != 0x18) {
        uVar3 = uVar1;
      }
      __dest = (char *)operator_new(uVar3);
      *(char **)param_1 = __dest;
      *(size_t *)(param_1 + 8) = __n;
      *(ulong *)(param_1 + 0x10) = uVar3 | 0x8000000000000000;
    }
    if (__dest + __n < __dest) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                );
    }
    if ((__dest <= __src) && (__src < __dest + __n)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
    memmove(__dest,__src,__n);
    __dest[__n] = '\0';
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0065a16c  FUN_0065a16c =====

/* WARNING: Removing unreachable block (ram,0x0065a41c) */
/* WARNING: Removing unreachable block (ram,0x0065a38c) */
/* WARNING: Removing unreachable block (ram,0x0065a324) */
/* WARNING: Removing unreachable block (ram,0x0065a2b4) */
/* WARNING: Removing unreachable block (ram,0x0065a24c) */
/* WARNING: Removing unreachable block (ram,0x0065a230) */
/* WARNING: Removing unreachable block (ram,0x0065a298) */
/* WARNING: Removing unreachable block (ram,0x0065a308) */
/* WARNING: Removing unreachable block (ram,0x0065a370) */
/* WARNING: Removing unreachable block (ram,0x0065a434) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0065a16c(ulong *param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong local_140;
  ulong local_138;
  undefined1 uStack_129;
  char *local_128;
  undefined8 local_120;
  undefined1 *local_118;
  char *local_110;
  char **ppcStack_108;
  void *local_100;
  undefined8 uStack_f8;
  long local_f0;
  char **local_e8;
  undefined *local_e0;
  void **ppvStack_d8;
  void *local_d0;
  undefined8 uStack_c8;
  long local_c0;
  undefined **local_b8;
  char *local_b0;
  void **ppvStack_a8;
  void *local_a0;
  undefined8 uStack_98;
  long local_90;
  char **local_88;
  undefined *local_80;
  void **ppvStack_78;
  void *local_70;
  undefined8 uStack_68;
  long local_60;
  undefined **local_58;
  ulong local_50;
  void *local_48;
  undefined8 uStack_40;
  ulong local_18;
  
  uVar5 = param_2 & ((long)param_2 >> 0x3f ^ 0xffffffffffffffffU);
  uVar4 = uVar5;
  if (0x270d8ef < (long)uVar5) {
    uVar4 = 0x270d8f0;
  }
  if ((long)uVar4 <= (long)param_3) {
    uVar5 = param_3;
  }
  if (0x270d8ef < (long)uVar5) {
    uVar5 = 0x270d8f0;
  }
  *param_1 = uVar4;
  param_1[1] = uVar5;
  if (((((long)param_2 < 0) || ((long)param_3 < (long)param_2)) || (0x270d8f0 < param_3)) &&
     (local_50 = param_3, local_18 = param_2, uVar4 = FUN_004249b0(), (uVar4 & 1) == 0)) {
    local_128 = "../../api/video/video_timing.cc";
    local_120 = 0x36b;
    local_118 = &uStack_129;
    ppcStack_108 = &local_128;
    local_110 = "Invalid video playout delay: [";
    FUN_005f3380(&local_70,&local_18);
    local_e8 = &local_110;
    uStack_f8 = uStack_68;
    local_100 = local_70;
    local_f0 = local_60;
    ppvStack_d8 = &local_100;
    local_e0 = &DAT_001ea264;
    FUN_005f3380(&local_70,&local_50);
    local_b8 = &local_e0;
    uStack_c8 = uStack_68;
    local_d0 = local_70;
    local_c0 = local_60;
    ppvStack_a8 = &local_d0;
    local_138 = *param_1;
    local_b0 = "]. Clamped to [";
    FUN_005f3380(&local_70,&local_138);
    local_88 = &local_b0;
    uStack_98 = uStack_68;
    local_a0 = local_70;
    local_90 = local_60;
    ppvStack_78 = &local_a0;
    local_140 = param_1[1];
    local_80 = &DAT_001ea264;
    FUN_005f3380(&local_48,&local_140);
    local_58 = &local_80;
    uStack_68 = uStack_40;
    local_70 = local_48;
                    /* WARNING: Load size is inaccurate */
    lVar1 = *(long *)((long)ppvStack_78[3] + 8);
    puVar6 = *(undefined8 **)(lVar1 + 0x18);
    lVar2 = puVar6[1];
    puVar7 = *(undefined8 **)(lVar2 + 0x18);
    puVar3 = (undefined8 *)puVar7[1];
    FUN_00623bb0("\r\t\n\t\n\t\n\t\n\t",*puVar3,*(undefined4 *)(puVar3 + 1),*puVar7,lVar2,*puVar6,
                 lVar1,*ppvStack_78[3],ppvStack_78,local_80,&local_70,&DAT_0019fa9e);
    if (local_c0 < 0) {
      operator_delete(local_d0);
    }
    if (local_f0 < 0) {
      operator_delete(local_100);
    }
  }
  return;
}


// ===== 0065a478  FUN_0065a478 =====

bool FUN_0065a478(long *param_1,long param_2,ulong param_3)

{
  bool bVar1;
  
  bVar1 = ((param_2 <= (long)param_3 && 0x270d8f0 >= param_3) && param_2 != -1) &&
          (((long)param_3 < param_2 || 0x270d8f0 < param_3) || param_2 + 1 < 0 == SCARRY8(param_2,1)
          );
  if (bVar1) {
    *param_1 = param_2;
    param_1[1] = param_3;
  }
  return bVar1;
}


// ===== 0065a4a8  FUN_0065a4a8 =====

void FUN_0065a4a8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0065a4dc(param_2,param_3,1,0);
  *param_1 = uVar1;
  return;
}


// ===== 0065a4dc  FUN_0065a4dc =====

FILE * FUN_0065a4dc(char *param_1,undefined1 *param_2,ulong param_3,undefined4 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  char *__modes;
  char *pcVar3;
  void *pvVar4;
  char **ppcVar5;
  FILE *pFVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  char *local_70;
  undefined1 *puStack_68;
  undefined8 local_60;
  char *local_50;
  undefined1 *puStack_48;
  
  ppcVar5 = &local_70;
  local_50 = param_1;
  puStack_48 = param_2;
  pvVar4 = memchr(param_1,0,(size_t)param_2);
  if ((pvVar4 != (void *)0x0) && ((long)pvVar4 - (long)param_1 != -1)) {
    uVar8 = FUN_0065a880(&local_50,0,0);
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../rtc_base/system/file_wrapper.cc",0x21,
                 "file_name_utf8.find_first_of(\'\\0\') == absl::string_view::npos",&DAT_001fed8b,
                 uVar8,0xffffffffffffffff,"Invalid filename, containing NUL character");
  }
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  if ((undefined1 *)0x7ffffffffffffff6 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (param_2 < (undefined1 *)0x17) {
    local_60 = (undefined1 *)CONCAT17((char)param_2,0xaaaaaaaaaaaaaa);
  }
  else {
    uVar1 = ((ulong)param_2 & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    ppcVar5 = (char **)operator_new(uVar2);
    local_60 = (undefined1 *)(uVar2 | 0x8000000000000000);
    local_70 = (char *)ppcVar5;
    puStack_68 = param_2;
  }
  if (ppcVar5 <= (char *)((long)ppcVar5 + (long)param_2)) {
    if ((ppcVar5 <= param_1) && (param_1 < (char *)((long)ppcVar5 + (long)param_2))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
    memmove(ppcVar5,param_1,(size_t)param_2);
    *(char *)((long)ppcVar5 + (long)param_2) = '\0';
    uVar1 = (ulong)local_60;
    pcVar3 = local_70;
    ppcVar5 = (char **)local_70;
    if (-1 < (long)local_60) {
      ppcVar5 = &local_70;
    }
    __modes = "rb";
    if ((param_3 & 1) == 0) {
      __modes = "wb";
    }
    pFVar6 = fopen((char *)ppcVar5,__modes);
    if ((param_4 != (undefined4 *)0x0) && (pFVar6 == (FILE *)0x0)) {
      puVar7 = (undefined4 *)__errno();
      *param_4 = *puVar7;
    }
    if ((long)uVar1 < 0) {
      operator_delete(pcVar3);
    }
    return pFVar6;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
            );
}


// ===== 0065a69c  FUN_0065a69c =====

void FUN_0065a69c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0065a4dc(param_2,param_3,0,param_4);
  *param_1 = uVar1;
  return;
}


// ===== 0065a6d0  FUN_0065a6d0 =====

void FUN_0065a6d0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  return;
}


// ===== 0065a6e8  FUN_0065a6e8 =====

undefined8 * FUN_0065a6e8(undefined8 *param_1,undefined8 *param_2)

{
  if ((FILE *)*param_1 != (FILE *)0x0) {
    fclose((FILE *)*param_1);
    *param_1 = 0;
  }
  *param_1 = *param_2;
  *param_2 = 0;
  return param_1;
}


// ===== 0065a730  FUN_0065a730 =====

bool FUN_0065a730(undefined8 *param_1)

{
  bool bVar1;
  int iVar2;
  
  if ((FILE *)*param_1 == (FILE *)0x0) {
    bVar1 = true;
  }
  else {
    iVar2 = fclose((FILE *)*param_1);
    bVar1 = iVar2 == 0;
    *param_1 = 0;
  }
  return bVar1;
}


// ===== 0065a774  FUN_0065a774 =====

bool FUN_0065a774(undefined8 *param_1,long param_2)

{
  int iVar1;
  
  iVar1 = fseek((FILE *)*param_1,param_2,1);
  return iVar1 == 0;
}


// ===== 0065a7a0  FUN_0065a7a0 =====

bool FUN_0065a7a0(undefined8 *param_1,long param_2)

{
  int iVar1;
  
  iVar1 = fseek((FILE *)*param_1,param_2,0);
  return iVar1 == 0;
}


// ===== 0065a7cc  FUN_0065a7cc =====

bool FUN_0065a7cc(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = fflush((FILE *)*param_1);
  return iVar1 == 0;
}


// ===== 0065a7f4  FUN_0065a7f4 =====

void FUN_0065a7f4(undefined8 *param_1,void *param_2,size_t param_3)

{
  fread(param_2,1,param_3,(FILE *)*param_1);
  return;
}


// ===== 0065a808  FUN_0065a808 =====

bool FUN_0065a808(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = feof((FILE *)*param_1);
  return iVar1 != 0;
}


// ===== 0065a830  FUN_0065a830 =====

bool FUN_0065a830(undefined8 *param_1,void *param_2,size_t param_3)

{
  size_t sVar1;
  
  sVar1 = fwrite(param_2,1,param_3,(FILE *)*param_1);
  return sVar1 == param_3;
}


// ===== 0065a86c  FUN_0065a86c =====

undefined8 FUN_0065a86c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = 0;
  return uVar1;
}


// ===== 0065a880  FUN_0065a880 =====

long FUN_0065a880(long *param_1,uint param_2,ulong param_3)

{
  void *pvVar1;
  long lVar2;
  
  if ((ulong)param_1[1] < param_3) {
    return -1;
  }
  lVar2 = *param_1;
  pvVar1 = memchr((void *)(lVar2 + param_3),param_2 & 0xff,param_1[1] - param_3);
  lVar2 = (long)pvVar1 - lVar2;
  if (pvVar1 == (void *)0x0) {
    lVar2 = -1;
  }
  return lVar2;
}


// ===== 0065a8d8  FUN_0065a8d8 =====

undefined1  [16] FUN_0065a8d8(double param_1,float *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 auVar1 [16];
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar5 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  
  fVar4 = 0.0;
  fVar6 = 0.0;
  fVar7 = 0.0;
  fVar8 = 0.0;
  fVar9 = 0.0;
  fVar10 = 0.0;
  fVar11 = 0.0;
  fVar12 = 0.0;
  if (param_2 < param_2 + 0x20) {
    fVar9 = *param_2 * (float)*param_3 + 0.0;
    fVar10 = param_2[1] * (float)((ulong)*param_3 >> 0x20) + 0.0;
    fVar11 = param_2[2] * (float)param_3[1] + 0.0;
    fVar12 = param_2[3] * (float)((ulong)param_3[1] >> 0x20) + 0.0;
    fVar4 = *param_2 * (float)*param_4 + 0.0;
    fVar6 = param_2[1] * (float)((ulong)*param_4 >> 0x20) + 0.0;
    fVar7 = param_2[2] * (float)param_4[1] + 0.0;
    fVar8 = param_2[3] * (float)((ulong)param_4[1] >> 0x20) + 0.0;
    if (param_2 + 4 < param_2 + 0x20) {
      fVar2 = (float)*(undefined8 *)(param_2 + 4);
      fVar16 = (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20);
      fVar20 = (float)*(undefined8 *)(param_2 + 6);
      fVar24 = (float)((ulong)*(undefined8 *)(param_2 + 6) >> 0x20);
      fVar28 = (float)*(undefined8 *)(param_2 + 8);
      fVar29 = (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
      fVar30 = (float)*(undefined8 *)(param_2 + 10);
      fVar31 = (float)((ulong)*(undefined8 *)(param_2 + 10) >> 0x20);
      fVar15 = (float)*(undefined8 *)(param_2 + 0xc);
      fVar17 = (float)((ulong)*(undefined8 *)(param_2 + 0xc) >> 0x20);
      fVar21 = (float)*(undefined8 *)(param_2 + 0xe);
      fVar25 = (float)((ulong)*(undefined8 *)(param_2 + 0xe) >> 0x20);
      fVar32 = (float)*(undefined8 *)(param_2 + 0x10);
      fVar34 = (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
      fVar36 = (float)*(undefined8 *)(param_2 + 0x12);
      fVar38 = (float)((ulong)*(undefined8 *)(param_2 + 0x12) >> 0x20);
      fVar13 = (float)*(undefined8 *)(param_2 + 0x14);
      fVar18 = (float)((ulong)*(undefined8 *)(param_2 + 0x14) >> 0x20);
      fVar22 = (float)*(undefined8 *)(param_2 + 0x16);
      fVar26 = (float)((ulong)*(undefined8 *)(param_2 + 0x16) >> 0x20);
      fVar33 = (float)*(undefined8 *)(param_2 + 0x18);
      fVar35 = (float)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20);
      fVar37 = (float)*(undefined8 *)(param_2 + 0x1a);
      fVar39 = (float)((ulong)*(undefined8 *)(param_2 + 0x1a) >> 0x20);
      fVar14 = (float)*(undefined8 *)(param_2 + 0x1c);
      fVar19 = (float)((ulong)*(undefined8 *)(param_2 + 0x1c) >> 0x20);
      fVar23 = (float)*(undefined8 *)(param_2 + 0x1e);
      fVar27 = (float)((ulong)*(undefined8 *)(param_2 + 0x1e) >> 0x20);
      fVar9 = fVar9 + fVar2 * (float)param_3[2] + fVar28 * (float)param_3[4] +
              fVar15 * (float)param_3[6] + fVar32 * (float)param_3[8] + fVar13 * (float)param_3[10]
              + fVar33 * (float)param_3[0xc] + fVar14 * (float)param_3[0xe];
      fVar10 = fVar10 + fVar16 * (float)((ulong)param_3[2] >> 0x20) +
               fVar29 * (float)((ulong)param_3[4] >> 0x20) +
               fVar17 * (float)((ulong)param_3[6] >> 0x20) +
               fVar34 * (float)((ulong)param_3[8] >> 0x20) +
               fVar18 * (float)((ulong)param_3[10] >> 0x20) +
               fVar35 * (float)((ulong)param_3[0xc] >> 0x20) +
               fVar19 * (float)((ulong)param_3[0xe] >> 0x20);
      fVar11 = fVar11 + fVar20 * (float)param_3[3] + fVar30 * (float)param_3[5] +
               fVar21 * (float)param_3[7] + fVar36 * (float)param_3[9] +
               fVar22 * (float)param_3[0xb] + fVar37 * (float)param_3[0xd] +
               fVar23 * (float)param_3[0xf];
      fVar12 = fVar12 + fVar24 * (float)((ulong)param_3[3] >> 0x20) +
               fVar31 * (float)((ulong)param_3[5] >> 0x20) +
               fVar25 * (float)((ulong)param_3[7] >> 0x20) +
               fVar38 * (float)((ulong)param_3[9] >> 0x20) +
               fVar26 * (float)((ulong)param_3[0xb] >> 0x20) +
               fVar39 * (float)((ulong)param_3[0xd] >> 0x20) +
               fVar27 * (float)((ulong)param_3[0xf] >> 0x20);
      fVar4 = fVar4 + fVar2 * (float)param_4[2] + fVar28 * (float)param_4[4] +
              fVar15 * (float)param_4[6] + fVar32 * (float)param_4[8] + fVar13 * (float)param_4[10]
              + fVar33 * (float)param_4[0xc] + fVar14 * (float)param_4[0xe];
      fVar6 = fVar6 + fVar16 * (float)((ulong)param_4[2] >> 0x20) +
              fVar29 * (float)((ulong)param_4[4] >> 0x20) +
              fVar17 * (float)((ulong)param_4[6] >> 0x20) +
              fVar34 * (float)((ulong)param_4[8] >> 0x20) +
              fVar18 * (float)((ulong)param_4[10] >> 0x20) +
              fVar35 * (float)((ulong)param_4[0xc] >> 0x20) +
              fVar19 * (float)((ulong)param_4[0xe] >> 0x20);
      fVar7 = fVar7 + fVar20 * (float)param_4[3] + fVar30 * (float)param_4[5] +
              fVar21 * (float)param_4[7] + fVar36 * (float)param_4[9] + fVar22 * (float)param_4[0xb]
              + fVar37 * (float)param_4[0xd] + fVar23 * (float)param_4[0xf];
      fVar8 = fVar8 + fVar24 * (float)((ulong)param_4[3] >> 0x20) +
              fVar31 * (float)((ulong)param_4[5] >> 0x20) +
              fVar25 * (float)((ulong)param_4[7] >> 0x20) +
              fVar38 * (float)((ulong)param_4[9] >> 0x20) +
              fVar26 * (float)((ulong)param_4[0xb] >> 0x20) +
              fVar39 * (float)((ulong)param_4[0xd] >> 0x20) +
              fVar27 * (float)((ulong)param_4[0xf] >> 0x20);
    }
  }
  fVar2 = (float)param_1;
  fVar15 = (float)(1.0 - param_1);
  fVar4 = fVar4 * fVar2 + fVar9 * fVar15;
  fVar6 = fVar6 * fVar2 + fVar10 * fVar15;
  fVar7 = fVar7 * fVar2 + fVar11 * fVar15;
  fVar8 = fVar8 * fVar2 + fVar12 * fVar15;
  auVar5._4_4_ = fVar6;
  auVar5._0_4_ = fVar4;
  auVar5._8_4_ = fVar7;
  auVar5._12_4_ = fVar8;
  auVar1._4_4_ = fVar6;
  auVar1._0_4_ = fVar4;
  auVar1._8_4_ = fVar7;
  auVar1._12_4_ = fVar8;
  auVar5 = NEON_ext(auVar5,auVar1,8,1);
  fVar4 = auVar5._0_4_ + fVar4;
  fVar6 = auVar5._4_4_ + fVar6;
  auVar3._4_4_ = fVar4 + fVar6;
  auVar3._0_4_ = fVar4 + fVar6;
  auVar3._8_8_ = 0;
  return auVar3;
}


// ===== 0065a9e8  FUN_0065a9e8 =====

void FUN_0065a9e8(undefined4 *param_1,short *param_2,long param_3,ulong param_4,uint param_5,
                 uint param_6,int param_7)

{
  ulong uVar1;
  ulong uVar2;
  short *psVar3;
  long lVar4;
  short *psVar5;
  short *psVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  if (0 < (int)param_5) {
    uVar2 = param_4 >> 3;
    uVar1 = 0;
    param_4 = param_4 & 7;
    do {
      psVar3 = (short *)(param_3 + (long)(param_7 * (int)uVar1) * 2);
      if (uVar2 == 0) {
        lVar13 = 0;
        lVar15 = 0;
        lVar9 = 0;
        lVar11 = 0;
        psVar5 = param_2;
        lVar8 = 0;
        lVar10 = 0;
        lVar12 = 0;
        lVar14 = 0;
        if (param_4 == 0) goto LAB_0065aa10;
LAB_0065aa98:
        lVar4 = (long)(int)*psVar3 * (long)(int)*psVar5;
        if ((((param_4 != 1) &&
             (lVar4 = lVar4 + (long)(int)psVar3[1] * (long)(int)psVar5[1], param_4 != 2)) &&
            (lVar4 = lVar4 + (long)(int)psVar3[2] * (long)(int)psVar5[2], param_4 != 3)) &&
           (((lVar4 = lVar4 + (long)(int)psVar3[3] * (long)(int)psVar5[3], param_4 != 4 &&
             (lVar4 = lVar4 + (long)(int)psVar3[4] * (long)(int)psVar5[4], param_4 != 5)) &&
            (lVar4 = lVar4 + (long)(int)psVar3[5] * (long)(int)psVar5[5], param_4 != 6)))) {
          lVar4 = lVar4 + (long)(int)psVar3[6] * (long)(int)psVar5[6];
        }
      }
      else {
        lVar9 = 0;
        lVar11 = 0;
        lVar13 = 0;
        lVar15 = 0;
        psVar5 = param_2;
        psVar6 = psVar3;
        uVar7 = uVar2;
        do {
          uVar17 = *(undefined8 *)(psVar5 + 4);
          uVar16 = *(undefined8 *)psVar5;
          uVar7 = uVar7 - 1;
          uVar19 = *(undefined8 *)(psVar6 + 4);
          uVar18 = *(undefined8 *)psVar6;
          lVar9 = lVar9 + (long)((int)(short)uVar16 * (int)(short)uVar18) +
                          (long)((int)(short)((ulong)uVar16 >> 0x10) *
                                (int)(short)((ulong)uVar18 >> 0x10));
          lVar11 = lVar11 + (long)((int)(short)((ulong)uVar16 >> 0x20) *
                                  (int)(short)((ulong)uVar18 >> 0x20)) +
                            (long)((int)(short)((ulong)uVar16 >> 0x30) *
                                  (int)(short)((ulong)uVar18 >> 0x30));
          lVar13 = lVar13 + (long)((int)(short)uVar17 * (int)(short)uVar19) +
                            (long)((int)(short)((ulong)uVar17 >> 0x10) *
                                  (int)(short)((ulong)uVar19 >> 0x10));
          lVar15 = lVar15 + (long)((int)(short)((ulong)uVar17 >> 0x20) *
                                  (int)(short)((ulong)uVar19 >> 0x20)) +
                            (long)((int)(short)((ulong)uVar17 >> 0x30) *
                                  (int)(short)((ulong)uVar19 >> 0x30));
          psVar5 = psVar5 + 8;
          psVar6 = psVar6 + 8;
        } while (uVar7 != 0);
        psVar3 = psVar3 + uVar2 * 8;
        psVar5 = param_2 + uVar2 * 8;
        lVar8 = lVar9;
        lVar10 = lVar11;
        lVar12 = lVar13;
        lVar14 = lVar15;
        if (param_4 != 0) goto LAB_0065aa98;
LAB_0065aa10:
        lVar4 = 0;
        lVar9 = lVar8;
        lVar11 = lVar10;
        lVar13 = lVar12;
        lVar15 = lVar14;
      }
      uVar1 = uVar1 + 1;
      *param_1 = (int)(lVar4 + lVar9 + lVar13 + lVar11 + lVar15 >> ((ulong)param_6 & 0x3f));
      param_1 = param_1 + 1;
    } while (uVar1 != ((ulong)param_5 & 0x7fffffff));
  }
  return;
}


// ===== 0065ab28  FUN_0065ab28 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_0065ab28(long param_1,int param_2,undefined8 *param_3,long param_4,short *param_5,ulong param_6,
            int param_7,int param_8)

{
  long lVar1;
  short *psVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined2 uVar10;
  short *psVar11;
  undefined8 *puVar12;
  ulong uVar13;
  uint uVar14;
  undefined4 uVar15;
  ulong uVar16;
  int iVar17;
  long lVar18;
  uint uVar19;
  ulong uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar38;
  undefined8 uVar37;
  int iVar39;
  int iVar40;
  short sVar41;
  short sVar42;
  short sVar43;
  short sVar44;
  short sVar45;
  int iVar46;
  int iVar48;
  int iVar49;
  int iVar50;
  undefined1 auVar51 [16];
  undefined8 uVar52;
  undefined1 auVar53 [16];
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar47;
  
  uVar14 = (uint)param_6;
  uVar15 = 0xffffffff;
  if ((param_4 != 0) && (param_6 != 0)) {
    iVar3 = param_8 + ((uint)param_4 - 1) * param_7 + 1;
    if (iVar3 <= param_2) {
      iVar29 = iVar3 - param_7 * ((uint)param_4 & 7);
      if (param_7 == 4) {
        if (param_8 < iVar29) {
          iVar17 = param_8 + -3;
          puVar12 = param_3;
          do {
            if ((int)(uVar14 - 3) < 1) {
              iVar28 = 0x800;
              iVar30 = 0x800;
              iVar32 = 0x800;
              iVar34 = 0x800;
              auVar22._8_4_ = 0x800;
              auVar22._0_8_ = 0x80000000800;
              auVar22._12_4_ = 0x800;
              uVar19 = 0;
              if (0 < (int)uVar14) goto LAB_0065ad00;
            }
            else {
              auVar22._8_4_ = 0x800;
              auVar22._0_8_ = 0x80000000800;
              auVar22._12_4_ = 0x800;
              iVar28 = 0x800;
              iVar30 = 0x800;
              iVar32 = 0x800;
              iVar34 = 0x800;
              lVar18 = 0;
              psVar11 = param_5;
              iVar31 = iVar17;
              do {
                psVar2 = (short *)(param_1 + (long)iVar31 * 2);
                uVar52 = *(undefined8 *)psVar11;
                lVar18 = lVar18 + 4;
                iVar31 = iVar31 + -4;
                sVar45 = (short)((ulong)uVar52 >> 0x30);
                iVar33 = (int)sVar45;
                iVar48 = auVar22._4_4_;
                iVar49 = auVar22._8_4_;
                iVar50 = auVar22._12_4_;
                iVar39 = (int)sVar45;
                sVar45 = (short)((ulong)uVar52 >> 0x20);
                iVar35 = (int)sVar45;
                iVar40 = (int)sVar45;
                sVar45 = (short)((ulong)uVar52 >> 0x10);
                iVar36 = (int)sVar45;
                iVar46 = (int)sVar45;
                iVar38 = (int)(short)uVar52;
                auVar22._0_4_ =
                     auVar22._0_4_ + *psVar2 * iVar33 + psVar2[1] * iVar35 + psVar2[2] * iVar36 +
                     psVar2[3] * iVar38;
                auVar22._4_4_ =
                     iVar48 + psVar2[4] * iVar33 + psVar2[5] * iVar35 + psVar2[6] * iVar36 +
                     psVar2[7] * iVar38;
                auVar22._8_4_ =
                     iVar49 + psVar2[8] * iVar33 + psVar2[9] * iVar35 + psVar2[10] * iVar36 +
                     psVar2[0xb] * iVar38;
                auVar22._12_4_ =
                     iVar50 + psVar2[0xc] * iVar33 + psVar2[0xd] * iVar35 + psVar2[0xe] * iVar36 +
                     psVar2[0xf] * iVar38;
                iVar33 = (int)(short)uVar52;
                iVar28 = iVar28 + psVar2[0x10] * iVar39 + psVar2[0x11] * iVar40 +
                         psVar2[0x12] * iVar46 + psVar2[0x13] * iVar33;
                iVar30 = iVar30 + psVar2[0x14] * iVar39 + psVar2[0x15] * iVar40 +
                         psVar2[0x16] * iVar46 + psVar2[0x17] * iVar33;
                iVar32 = iVar32 + psVar2[0x18] * iVar39 + psVar2[0x19] * iVar40 +
                         psVar2[0x1a] * iVar46 + psVar2[0x1b] * iVar33;
                iVar34 = iVar34 + psVar2[0x1c] * iVar39 + psVar2[0x1d] * iVar40 +
                         psVar2[0x1e] * iVar46 + psVar2[0x1f] * iVar33;
                psVar11 = psVar11 + 4;
              } while (lVar18 < (int)(uVar14 - 3));
              uVar19 = uVar14 & 0xfffffffc;
              if ((int)uVar19 < (int)uVar14) {
LAB_0065ad00:
                psVar11 = param_5 + (int)uVar19;
                lVar18 = (long)(int)uVar14 - (long)(int)uVar19;
                iVar31 = param_8 - uVar19;
                auVar51 = auVar22;
                do {
                  psVar2 = (short *)(param_1 + (long)iVar31 * 2);
                  sVar45 = *psVar11;
                  psVar11 = psVar11 + 1;
                  lVar18 = lVar18 + -1;
                  iVar31 = iVar31 + -1;
                  sVar41 = *psVar2;
                  sVar42 = psVar2[4];
                  sVar43 = psVar2[8];
                  sVar44 = psVar2[0xc];
                  auVar53._2_2_ = sVar42;
                  auVar53._0_2_ = sVar41;
                  auVar53._4_2_ = sVar43;
                  auVar53._6_2_ = sVar44;
                  auVar53._8_2_ = psVar2[0x10];
                  auVar53._10_2_ = psVar2[0x14];
                  auVar53._12_2_ = psVar2[0x18];
                  auVar53._14_2_ = psVar2[0x1c];
                  auVar8._2_2_ = sVar42;
                  auVar8._0_2_ = sVar41;
                  auVar8._4_2_ = sVar43;
                  auVar8._6_2_ = sVar44;
                  auVar8._8_2_ = psVar2[0x10];
                  auVar8._10_2_ = psVar2[0x14];
                  auVar8._12_2_ = psVar2[0x18];
                  auVar8._14_2_ = psVar2[0x1c];
                  auVar53 = NEON_ext(auVar53,auVar8,8,1);
                  auVar22._0_4_ = auVar51._0_4_ + (int)sVar41 * (int)sVar45;
                  auVar22._4_4_ = auVar51._4_4_ + (int)sVar42 * (int)sVar45;
                  auVar22._8_4_ = auVar51._8_4_ + (int)sVar43 * (int)sVar45;
                  auVar22._12_4_ = auVar51._12_4_ + (int)sVar44 * (int)sVar45;
                  iVar28 = iVar28 + (int)auVar53._0_2_ * (int)sVar45;
                  iVar30 = iVar30 + (int)auVar53._2_2_ * (int)sVar45;
                  iVar32 = iVar32 + (int)auVar53._4_2_ * (int)sVar45;
                  iVar34 = iVar34 + (int)auVar53._6_2_ * (int)sVar45;
                  auVar51 = auVar22;
                } while (lVar18 != 0);
              }
            }
            auVar24._8_8_ = auVar22._8_8_;
            auVar24._0_8_ = NEON_sqshrn(auVar22._0_8_,auVar22,0xc,4);
            param_8 = param_8 + 0x20;
            iVar17 = iVar17 + 0x20;
            auVar51._4_4_ = iVar30;
            auVar51._0_4_ = iVar28;
            auVar51._8_4_ = iVar32;
            auVar51._12_4_ = iVar34;
            auVar22 = NEON_sqshrn2(auVar24,auVar51,0xc,4);
            param_3 = puVar12 + 2;
            puVar12[1] = auVar22._8_8_;
            *puVar12 = auVar22._0_8_;
            puVar12 = param_3;
          } while (param_8 < iVar29);
        }
      }
      else if (param_7 == 2) {
        if (param_8 < iVar29) {
          iVar17 = param_8 + -1;
          puVar12 = param_3;
          do {
            if ((int)(uVar14 - 1) < 1) {
              iVar28 = 0x800;
              iVar30 = 0x800;
              iVar32 = 0x800;
              iVar34 = 0x800;
              auVar23._8_4_ = 0x800;
              auVar23._0_8_ = 0x80000000800;
              auVar23._12_4_ = 0x800;
              uVar19 = 0;
              if (0 < (int)uVar14) goto LAB_0065ac18;
            }
            else {
              auVar23._8_4_ = 0x800;
              auVar23._0_8_ = 0x80000000800;
              auVar23._12_4_ = 0x800;
              iVar28 = 0x800;
              iVar30 = 0x800;
              iVar32 = 0x800;
              iVar34 = 0x800;
              lVar18 = 0;
              psVar11 = param_5;
              iVar31 = iVar17;
              do {
                psVar2 = (short *)(param_1 + (long)iVar31 * 2);
                lVar18 = lVar18 + 2;
                iVar31 = iVar31 + -2;
                sVar45 = (short)((uint)*(undefined4 *)psVar11 >> 0x10);
                iVar33 = (int)sVar45;
                iVar38 = auVar23._4_4_;
                iVar39 = auVar23._8_4_;
                iVar40 = auVar23._12_4_;
                iVar36 = (int)sVar45;
                sVar45 = (short)*(undefined4 *)psVar11;
                iVar35 = (int)sVar45;
                auVar23._0_4_ = auVar23._0_4_ + *psVar2 * iVar33 + psVar2[1] * iVar35;
                auVar23._4_4_ = iVar38 + psVar2[2] * iVar33 + psVar2[3] * iVar35;
                auVar23._8_4_ = iVar39 + psVar2[4] * iVar33 + psVar2[5] * iVar35;
                auVar23._12_4_ = iVar40 + psVar2[6] * iVar33 + psVar2[7] * iVar35;
                iVar33 = (int)sVar45;
                iVar28 = iVar28 + psVar2[8] * iVar36 + psVar2[9] * iVar33;
                iVar30 = iVar30 + psVar2[10] * iVar36 + psVar2[0xb] * iVar33;
                iVar32 = iVar32 + psVar2[0xc] * iVar36 + psVar2[0xd] * iVar33;
                iVar34 = iVar34 + psVar2[0xe] * iVar36 + psVar2[0xf] * iVar33;
                psVar11 = psVar11 + 2;
              } while (lVar18 < (int)(uVar14 - 1));
              uVar19 = uVar14 & 0xfffffffe;
              if ((int)uVar19 < (int)uVar14) {
LAB_0065ac18:
                psVar11 = param_5 + (int)uVar19;
                lVar18 = (long)(int)uVar14 - (long)(int)uVar19;
                iVar31 = param_8 - uVar19;
                auVar22 = auVar23;
                do {
                  psVar2 = (short *)(param_1 + (long)iVar31 * 2);
                  sVar45 = *psVar11;
                  psVar11 = psVar11 + 1;
                  lVar18 = lVar18 + -1;
                  iVar31 = iVar31 + -1;
                  sVar41 = *psVar2;
                  sVar42 = psVar2[2];
                  sVar43 = psVar2[4];
                  sVar44 = psVar2[6];
                  auVar6._2_2_ = sVar42;
                  auVar6._0_2_ = sVar41;
                  auVar6._4_2_ = sVar43;
                  auVar6._6_2_ = sVar44;
                  auVar6._8_2_ = psVar2[8];
                  auVar6._10_2_ = psVar2[10];
                  auVar6._12_2_ = psVar2[0xc];
                  auVar6._14_2_ = psVar2[0xe];
                  auVar7._2_2_ = sVar42;
                  auVar7._0_2_ = sVar41;
                  auVar7._4_2_ = sVar43;
                  auVar7._6_2_ = sVar44;
                  auVar7._8_2_ = psVar2[8];
                  auVar7._10_2_ = psVar2[10];
                  auVar7._12_2_ = psVar2[0xc];
                  auVar7._14_2_ = psVar2[0xe];
                  auVar51 = NEON_ext(auVar6,auVar7,8,1);
                  auVar23._0_4_ = auVar22._0_4_ + (int)sVar41 * (int)sVar45;
                  auVar23._4_4_ = auVar22._4_4_ + (int)sVar42 * (int)sVar45;
                  auVar23._8_4_ = auVar22._8_4_ + (int)sVar43 * (int)sVar45;
                  auVar23._12_4_ = auVar22._12_4_ + (int)sVar44 * (int)sVar45;
                  iVar28 = iVar28 + (int)auVar51._0_2_ * (int)sVar45;
                  iVar30 = iVar30 + (int)auVar51._2_2_ * (int)sVar45;
                  iVar32 = iVar32 + (int)auVar51._4_2_ * (int)sVar45;
                  iVar34 = iVar34 + (int)auVar51._6_2_ * (int)sVar45;
                  auVar22 = auVar23;
                } while (lVar18 != 0);
              }
            }
            auVar21._8_8_ = auVar23._8_8_;
            auVar21._0_8_ = NEON_sqshrn(auVar23._0_8_,auVar23,0xc,4);
            param_8 = param_8 + 0x10;
            iVar17 = iVar17 + 0x10;
            auVar4._4_4_ = iVar30;
            auVar4._0_4_ = iVar28;
            auVar4._8_4_ = iVar32;
            auVar4._12_4_ = iVar34;
            auVar22 = NEON_sqshrn2(auVar21,auVar4,0xc,4);
            param_3 = puVar12 + 2;
            puVar12[1] = auVar22._8_8_;
            *puVar12 = auVar22._0_8_;
            puVar12 = param_3;
          } while (param_8 < iVar29);
        }
      }
      else if (param_8 < iVar29) {
        iVar35 = param_7 * 8;
        iVar17 = param_8 + param_7 * 4;
        iVar28 = param_8 + param_7 * 2;
        iVar33 = param_8 + param_7 * 6;
        iVar30 = iVar17 + param_7;
        iVar32 = param_7 * 7 + param_8;
        iVar34 = iVar28 + param_7;
        iVar31 = param_7 + param_8;
        puVar12 = param_3;
        do {
          if ((int)uVar14 < 1) {
            iVar36 = 0x800;
            iVar38 = 0x800;
            iVar39 = 0x800;
            iVar40 = 0x800;
            auVar25._8_4_ = 0x800;
            auVar25._0_8_ = 0x80000000800;
            auVar25._12_4_ = 0x800;
          }
          else {
            auVar27._8_4_ = 0x800;
            auVar27._0_8_ = 0x80000000800;
            auVar27._12_4_ = 0x800;
            iVar36 = 0x800;
            iVar38 = 0x800;
            iVar39 = 0x800;
            iVar40 = 0x800;
            lVar18 = 0;
            psVar11 = param_5;
            do {
              iVar46 = (int)lVar18;
              sVar45 = *psVar11;
              psVar11 = psVar11 + 1;
              lVar18 = lVar18 + -1;
              auVar25._0_4_ =
                   auVar27._0_4_ +
                   (int)*(short *)(param_1 + (long)(param_8 + iVar46) * 2) * (int)sVar45;
              auVar25._4_4_ =
                   auVar27._4_4_ +
                   (int)*(short *)(param_1 + (long)(iVar31 + iVar46) * 2) * (int)sVar45;
              auVar25._8_4_ =
                   auVar27._8_4_ +
                   (int)*(short *)(param_1 + (long)(iVar28 + iVar46) * 2) * (int)sVar45;
              auVar25._12_4_ =
                   auVar27._12_4_ +
                   (int)*(short *)(param_1 + (long)(iVar34 + iVar46) * 2) * (int)sVar45;
              iVar36 = iVar36 + (int)*(short *)(param_1 + (long)(iVar17 + iVar46) * 2) * (int)sVar45
              ;
              iVar38 = iVar38 + (int)*(short *)(param_1 + (long)(iVar30 + iVar46) * 2) * (int)sVar45
              ;
              iVar39 = iVar39 + (int)*(short *)(param_1 + (long)(iVar33 + iVar46) * 2) * (int)sVar45
              ;
              iVar40 = iVar40 + (int)*(short *)(param_1 + (long)(iVar32 + iVar46) * 2) * (int)sVar45
              ;
              auVar27 = auVar25;
            } while (-lVar18 != (param_6 & 0x7fffffff));
          }
          auVar26._8_8_ = auVar25._8_8_;
          auVar26._0_8_ = NEON_sqshrn(auVar25._0_8_,auVar25,0xc,4);
          param_8 = param_8 + iVar35;
          iVar32 = iVar32 + iVar35;
          iVar33 = iVar33 + iVar35;
          iVar30 = iVar30 + iVar35;
          iVar17 = iVar17 + iVar35;
          iVar34 = iVar34 + iVar35;
          iVar28 = iVar28 + iVar35;
          iVar31 = iVar31 + iVar35;
          auVar5._4_4_ = iVar38;
          auVar5._0_4_ = iVar36;
          auVar5._8_4_ = iVar39;
          auVar5._12_4_ = iVar40;
          auVar22 = NEON_sqshrn2(auVar26,auVar5,0xc,4);
          param_3 = puVar12 + 2;
          puVar12[1] = auVar22._8_8_;
          *puVar12 = auVar22._0_8_;
          puVar12 = param_3;
        } while (param_8 < iVar29);
      }
      uVar9 = _UNK_001f33b8;
      uVar52 = _DAT_001f33b0;
      if (param_8 < iVar3) {
        uVar16 = param_6 & 0x7fffffff;
        do {
          if ((int)uVar14 < 1) {
            uVar10 = 0;
          }
          else {
            if (uVar16 < 4) {
              uVar13 = 0;
              iVar29 = 0x800;
LAB_0065ae9c:
              iVar17 = param_8 - (int)uVar13;
              lVar18 = uVar16 - uVar13;
              psVar11 = param_5 + uVar13;
              do {
                lVar1 = (long)iVar17;
                lVar18 = lVar18 + -1;
                iVar17 = iVar17 + -1;
                iVar29 = iVar29 + (int)*(short *)(param_1 + lVar1 * 2) * (int)*psVar11;
                psVar11 = psVar11 + 1;
              } while (lVar18 != 0);
            }
            else {
              uVar13 = 0;
              iVar29 = 0x800;
              if ((param_8 < param_8 - (int)(uVar16 - 1)) || (uVar16 - 1 >> 0x20 != 0))
              goto LAB_0065ae9c;
              if (uVar16 < 0x10) {
                uVar20 = 0;
LAB_0065af84:
                iVar28 = 0;
                iVar30 = 0;
                iVar32 = 0;
                lVar18 = uVar20 - (param_6 & 0x7ffffffc);
                iVar17 = param_8 - (int)uVar20;
                psVar11 = param_5 + uVar20;
                do {
                  lVar1 = (long)iVar17;
                  uVar47 = *(undefined8 *)psVar11;
                  lVar18 = lVar18 + 4;
                  iVar17 = iVar17 + -4;
                  uVar37 = NEON_rev64(*(undefined8 *)(param_1 + lVar1 * 2 + -6),2);
                  iVar29 = iVar29 + (int)(short)uVar37 * (int)(short)uVar47;
                  iVar28 = iVar28 + (int)(short)((ulong)uVar37 >> 0x10) *
                                    (int)(short)((ulong)uVar47 >> 0x10);
                  iVar30 = iVar30 + (int)(short)((ulong)uVar37 >> 0x20) *
                                    (int)(short)((ulong)uVar47 >> 0x20);
                  iVar32 = iVar32 + (int)(short)((ulong)uVar37 >> 0x30) *
                                    (int)(short)((ulong)uVar47 >> 0x30);
                  psVar11 = psVar11 + 4;
                } while (lVar18 != 0);
                iVar29 = iVar29 + iVar28 + iVar30 + iVar32;
                uVar13 = param_6 & 0x7ffffffc;
                if (uVar16 != (param_6 & 0x7ffffffc)) goto LAB_0065ae9c;
              }
              else {
                iVar34 = 0;
                iVar31 = 0;
                iVar33 = 0;
                iVar35 = 0;
                iVar36 = 0;
                iVar38 = 0;
                iVar39 = 0;
                iVar40 = 0;
                iVar17 = 0;
                iVar28 = 0;
                iVar30 = 0;
                iVar32 = 0;
                psVar11 = param_5 + 8;
                uVar13 = param_6 & 0x7ffffff0;
                uVar47 = uVar52;
                uVar37 = uVar9;
                iVar29 = param_8;
                do {
                  lVar18 = param_1 + (long)iVar29 * 2;
                  auVar22 = *(undefined1 (*) [16])(psVar11 + -8);
                  uVar55 = *(undefined8 *)(psVar11 + 4);
                  uVar54 = *(undefined8 *)psVar11;
                  uVar13 = uVar13 - 0x10;
                  psVar11 = psVar11 + 0x10;
                  iVar29 = iVar29 + -0x10;
                  auVar51 = NEON_rev64(*(undefined1 (*) [16])(lVar18 + -0xe),2);
                  auVar53 = NEON_rev64(*(undefined1 (*) [16])(lVar18 + -0x1e),2);
                  auVar51 = NEON_ext(auVar51,auVar51,8,1);
                  auVar53 = NEON_ext(auVar53,auVar53,8,1);
                  iVar36 = iVar36 + (int)auVar51._8_2_ * (int)auVar22._8_2_;
                  iVar38 = iVar38 + (int)auVar51._10_2_ * (int)auVar22._10_2_;
                  iVar39 = iVar39 + (int)auVar51._12_2_ * (int)auVar22._12_2_;
                  iVar40 = iVar40 + (int)auVar51._14_2_ * (int)auVar22._14_2_;
                  iVar46 = (int)uVar47 + (int)auVar51._0_2_ * (int)auVar22._0_2_;
                  iVar48 = (int)((ulong)uVar47 >> 0x20) + (int)auVar51._2_2_ * (int)auVar22._2_2_;
                  uVar47 = CONCAT44(iVar48,iVar46);
                  iVar49 = (int)uVar37 + (int)auVar51._4_2_ * (int)auVar22._4_2_;
                  iVar50 = (int)((ulong)uVar37 >> 0x20) + (int)auVar51._6_2_ * (int)auVar22._6_2_;
                  uVar37 = CONCAT44(iVar50,iVar49);
                  iVar17 = iVar17 + (int)auVar53._8_2_ * (int)(short)uVar55;
                  iVar28 = iVar28 + (int)auVar53._10_2_ * (int)(short)((ulong)uVar55 >> 0x10);
                  iVar30 = iVar30 + (int)auVar53._12_2_ * (int)(short)((ulong)uVar55 >> 0x20);
                  iVar32 = iVar32 + (int)auVar53._14_2_ * (int)(short)((ulong)uVar55 >> 0x30);
                  iVar34 = iVar34 + (int)auVar53._0_2_ * (int)(short)uVar54;
                  iVar31 = iVar31 + (int)auVar53._2_2_ * (int)(short)((ulong)uVar54 >> 0x10);
                  iVar33 = iVar33 + (int)auVar53._4_2_ * (int)(short)((ulong)uVar54 >> 0x20);
                  iVar35 = iVar35 + (int)auVar53._6_2_ * (int)(short)((ulong)uVar54 >> 0x30);
                } while (uVar13 != 0);
                iVar29 = iVar34 + iVar46 + iVar17 + iVar36 + iVar31 + iVar48 + iVar28 + iVar38 +
                         iVar33 + iVar49 + iVar30 + iVar39 + iVar35 + iVar50 + iVar32 + iVar40;
                if (uVar16 != (param_6 & 0x7ffffff0)) {
                  uVar20 = param_6 & 0x7ffffff0;
                  uVar13 = param_6 & 0x7ffffff0;
                  if ((param_6 & 0xc) == 0) goto LAB_0065ae9c;
                  goto LAB_0065af84;
                }
              }
            }
            iVar29 = iVar29 >> 0xc;
            if (iVar29 == -0x8000 || iVar29 + 0x8000 < 0 != SCARRY4(iVar29,0x8000)) {
              iVar29 = -0x8000;
            }
            if (0x7ffe < iVar29) {
              iVar29 = 0x7fff;
            }
            uVar10 = (undefined2)iVar29;
          }
          param_8 = param_8 + param_7;
          *(undefined2 *)param_3 = uVar10;
          param_3 = (undefined8 *)((long)param_3 + 2);
        } while (param_8 < iVar3);
      }
      uVar15 = 0;
    }
  }
  return uVar15;
}


// ===== 0065afe8  FUN_0065afe8 =====

uint FUN_0065afe8(short *param_1,ulong param_2)

{
  ulong uVar1;
  short *psVar2;
  short sVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  short *psVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 uVar20;
  undefined2 uVar24;
  undefined2 uVar25;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined2 uVar26;
  undefined1 auVar23 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  ushort uVar29;
  ushort uVar30;
  undefined2 uVar31;
  undefined2 uVar32;
  undefined2 uVar33;
  ushort uVar34;
  undefined2 uVar35;
  undefined2 uVar36;
  undefined2 uVar37;
  ushort uVar38;
  undefined2 uVar39;
  undefined2 uVar40;
  undefined2 uVar41;
  
  psVar2 = param_1 + param_2;
  if (param_1 < psVar2 + -(param_2 & 7)) {
    auVar17 = ZEXT816(0);
    psVar11 = param_1;
    do {
      param_1 = psVar11 + 8;
      auVar22._0_2_ = MP_INT_ABS(*psVar11);
      auVar22._2_2_ = MP_INT_ABS(psVar11[1]);
      auVar22._4_2_ = MP_INT_ABS(psVar11[2]);
      auVar22._6_2_ = MP_INT_ABS(psVar11[3]);
      auVar22._8_2_ = MP_INT_ABS(psVar11[4]);
      auVar22._10_2_ = MP_INT_ABS(psVar11[5]);
      auVar22._12_2_ = MP_INT_ABS(psVar11[6]);
      auVar22._14_2_ = MP_INT_ABS(psVar11[7]);
      auVar17 = NEON_umax(auVar17,auVar22,2);
      psVar11 = param_1;
    } while (param_1 < psVar2 + -(param_2 & 7));
    auVar17._0_2_ = NEON_umaxv(auVar17,2);
    uVar16 = auVar17._0_4_;
    if (psVar2 <= param_1) goto LAB_0065b144;
  }
  else {
    uVar16 = 0;
    if (psVar2 <= param_1) goto LAB_0065b144;
  }
  psVar11 = psVar2;
  if (psVar2 <= param_1 + 1) {
    psVar11 = param_1 + 1;
  }
  uVar15 = (long)psVar11 + ~(ulong)param_1;
  if (5 < uVar15) {
    uVar1 = (uVar15 >> 1) + 1;
    if (uVar15 < 0x1e) {
      uVar13 = 0;
    }
    else {
      auVar18._0_8_ = CONCAT44(uVar16,uVar16);
      auVar18._8_4_ = uVar16;
      auVar18._12_4_ = uVar16;
      uVar13 = uVar1 & 0xfffffffffffffff0;
      psVar11 = param_1 + 8;
      uVar15 = uVar1 & 0xfffffffffffffff0;
      uVar20 = auVar18._8_8_;
      auVar21._8_8_ = uVar20;
      auVar21._0_8_ = auVar18._0_8_;
      auVar27._8_8_ = uVar20;
      auVar27._0_8_ = auVar18._0_8_;
      auVar28._8_8_ = uVar20;
      auVar28._0_8_ = auVar18._0_8_;
      do {
        uVar5 = *(undefined8 *)(psVar11 + -4);
        uVar20 = *(undefined8 *)(psVar11 + -8);
        uVar8 = *(undefined8 *)(psVar11 + 4);
        uVar7 = *(undefined8 *)psVar11;
        uVar15 = uVar15 - 0x10;
        psVar11 = psVar11 + 0x10;
        uVar29 = MP_INT_ABS((short)uVar20);
        uVar24 = MP_INT_ABS((short)((ulong)uVar20 >> 0x10));
        uVar25 = MP_INT_ABS((short)((ulong)uVar20 >> 0x20));
        uVar26 = MP_INT_ABS((short)((ulong)uVar20 >> 0x30));
        uVar30 = MP_INT_ABS((short)uVar5);
        uVar31 = MP_INT_ABS((short)((ulong)uVar5 >> 0x10));
        uVar32 = MP_INT_ABS((short)((ulong)uVar5 >> 0x20));
        uVar33 = MP_INT_ABS((short)((ulong)uVar5 >> 0x30));
        uVar34 = MP_INT_ABS((short)uVar7);
        uVar35 = MP_INT_ABS((short)((ulong)uVar7 >> 0x10));
        uVar36 = MP_INT_ABS((short)((ulong)uVar7 >> 0x20));
        uVar37 = MP_INT_ABS((short)((ulong)uVar7 >> 0x30));
        uVar38 = MP_INT_ABS((short)uVar8);
        uVar39 = MP_INT_ABS((short)((ulong)uVar8 >> 0x10));
        uVar40 = MP_INT_ABS((short)((ulong)uVar8 >> 0x20));
        uVar41 = MP_INT_ABS((short)((ulong)uVar8 >> 0x30));
        auVar9._2_2_ = 0;
        auVar9._0_2_ = uVar30;
        auVar10._2_2_ = 0;
        auVar10._0_2_ = uVar34;
        auVar9._4_2_ = uVar31;
        auVar9._6_2_ = 0;
        auVar9._8_2_ = uVar32;
        auVar9._10_2_ = 0;
        auVar9._12_2_ = uVar33;
        auVar9._14_2_ = 0;
        auVar27 = NEON_umax(auVar27,auVar9,4);
        auVar4._2_2_ = 0;
        auVar4._0_2_ = uVar29;
        auVar4._4_2_ = uVar24;
        auVar4._6_2_ = 0;
        auVar4._8_2_ = uVar25;
        auVar4._10_2_ = 0;
        auVar4._12_2_ = uVar26;
        auVar4._14_2_ = 0;
        auVar21 = NEON_umax(auVar21,auVar4,4);
        auVar10._4_2_ = uVar35;
        auVar10._6_2_ = 0;
        auVar10._8_2_ = uVar36;
        auVar10._10_2_ = 0;
        auVar10._12_2_ = uVar37;
        auVar10._14_2_ = 0;
        auVar28 = NEON_umax(auVar28,auVar10,4);
        auVar6._2_2_ = 0;
        auVar6._0_2_ = uVar38;
        auVar6._4_2_ = uVar39;
        auVar6._6_2_ = 0;
        auVar6._8_2_ = uVar40;
        auVar6._10_2_ = 0;
        auVar6._12_2_ = uVar41;
        auVar6._14_2_ = 0;
        auVar18 = NEON_umax(auVar18,auVar6,4);
      } while (uVar15 != 0);
      auVar22 = NEON_umax(auVar21,auVar28,4);
      auVar17 = NEON_umax(auVar27,auVar18,4);
      auVar17 = NEON_umax(auVar22,auVar17,4);
      uVar16 = NEON_umaxv(auVar17,4);
      if (uVar1 == uVar13) goto LAB_0065b144;
      if ((uVar1 & 0xc) == 0) {
        param_1 = param_1 + uVar13;
        goto LAB_0065b128;
      }
    }
    uVar15 = uVar1 & 0xfffffffffffffffc;
    auVar19._4_4_ = uVar16;
    auVar19._0_4_ = uVar16;
    auVar19._8_4_ = uVar16;
    auVar19._12_4_ = uVar16;
    psVar11 = param_1 + uVar13;
    param_1 = param_1 + uVar15;
    lVar14 = uVar13 - uVar15;
    do {
      uVar20 = *(undefined8 *)psVar11;
      lVar14 = lVar14 + 4;
      auVar23._0_2_ = MP_INT_ABS((short)uVar20);
      uVar24 = MP_INT_ABS((short)((ulong)uVar20 >> 0x10));
      uVar25 = MP_INT_ABS((short)((ulong)uVar20 >> 0x20));
      uVar26 = MP_INT_ABS((short)((ulong)uVar20 >> 0x30));
      auVar23._2_2_ = 0;
      auVar23._4_2_ = uVar24;
      auVar23._6_2_ = 0;
      auVar23._8_2_ = uVar25;
      auVar23._10_2_ = 0;
      auVar23._12_2_ = uVar26;
      auVar23._14_2_ = 0;
      auVar19 = NEON_umax(auVar19,auVar23,4);
      psVar11 = psVar11 + 4;
    } while (lVar14 != 0);
    uVar16 = NEON_umaxv(auVar19,4);
    if (uVar1 == uVar15) goto LAB_0065b144;
  }
LAB_0065b128:
  do {
    psVar11 = param_1 + 1;
    sVar3 = *param_1;
    uVar12 = -(int)sVar3;
    if (-1 < sVar3) {
      uVar12 = (uint)sVar3;
    }
    if (uVar16 <= uVar12) {
      uVar16 = uVar12;
    }
    param_1 = psVar11;
  } while (psVar11 < psVar2);
LAB_0065b144:
  if (0x7ffe < (int)uVar16) {
    uVar16 = 0x7fff;
  }
  return uVar16;
}


// ===== 0065b15c  FUN_0065b15c =====

uint FUN_0065b15c(uint *param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint *puVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  
  uVar6 = param_2 & 7;
  if ((param_2 & 0xfffffffffffffff8) == 0) {
    auVar10 = ZEXT816(0);
    auVar9 = ZEXT816(0);
  }
  else {
    auVar9 = ZEXT816(0);
    auVar10 = ZEXT816(0);
    uVar7 = 0;
    puVar5 = param_1;
    do {
      param_1 = puVar5 + 8;
      uVar7 = uVar7 + 8;
      uVar11 = MP_INT_ABS((int)*(undefined8 *)puVar5);
      uVar12 = MP_INT_ABS((int)((ulong)*(undefined8 *)puVar5 >> 0x20));
      uVar13 = MP_INT_ABS((int)*(undefined8 *)(puVar5 + 2));
      uVar14 = MP_INT_ABS((int)((ulong)*(undefined8 *)(puVar5 + 2) >> 0x20));
      uVar15 = MP_INT_ABS((int)*(undefined8 *)(puVar5 + 4));
      uVar16 = MP_INT_ABS((int)((ulong)*(undefined8 *)(puVar5 + 4) >> 0x20));
      uVar17 = MP_INT_ABS((int)*(undefined8 *)(puVar5 + 6));
      uVar18 = MP_INT_ABS((int)((ulong)*(undefined8 *)(puVar5 + 6) >> 0x20));
      auVar3._4_4_ = uVar12;
      auVar3._0_4_ = uVar11;
      auVar3._8_4_ = uVar13;
      auVar3._12_4_ = uVar14;
      auVar9 = NEON_umax(auVar9,auVar3,4);
      auVar4._4_4_ = uVar16;
      auVar4._0_4_ = uVar15;
      auVar4._8_4_ = uVar17;
      auVar4._12_4_ = uVar18;
      auVar10 = NEON_umax(auVar10,auVar4,4);
      puVar5 = param_1;
    } while (uVar7 < (param_2 & 0xfffffffffffffff8));
  }
  auVar9 = NEON_umax(auVar9,auVar10,4);
  uVar8 = NEON_umaxv(auVar9,4);
  if (uVar6 != 0) {
    uVar1 = *param_1;
    uVar2 = -uVar1;
    if (-1 < (int)uVar1) {
      uVar2 = uVar1;
    }
    if (uVar2 <= uVar8) {
      uVar2 = uVar8;
    }
    uVar8 = uVar2;
    if (uVar6 != 1) {
      uVar1 = param_1[1];
      uVar8 = -uVar1;
      if (-1 < (int)uVar1) {
        uVar8 = uVar1;
      }
      if (uVar8 <= uVar2) {
        uVar8 = uVar2;
      }
      if (uVar6 != 2) {
        uVar1 = param_1[2];
        uVar2 = -uVar1;
        if (-1 < (int)uVar1) {
          uVar2 = uVar1;
        }
        if (uVar2 <= uVar8) {
          uVar2 = uVar8;
        }
        uVar8 = uVar2;
        if (uVar6 != 3) {
          uVar1 = param_1[3];
          uVar8 = -uVar1;
          if (-1 < (int)uVar1) {
            uVar8 = uVar1;
          }
          if (uVar8 <= uVar2) {
            uVar8 = uVar2;
          }
          if (uVar6 != 4) {
            uVar1 = param_1[4];
            uVar2 = -uVar1;
            if (-1 < (int)uVar1) {
              uVar2 = uVar1;
            }
            if (uVar2 <= uVar8) {
              uVar2 = uVar8;
            }
            uVar8 = uVar2;
            if (uVar6 != 5) {
              uVar8 = param_1[5];
              uVar1 = -uVar8;
              if (-1 < (int)uVar8) {
                uVar1 = uVar8;
              }
              if (uVar1 <= uVar2) {
                uVar1 = uVar2;
              }
              uVar8 = uVar1;
              if (uVar6 != 6) {
                uVar2 = param_1[6];
                uVar8 = -uVar2;
                if (-1 < (int)uVar2) {
                  uVar8 = uVar2;
                }
                if (uVar8 <= uVar1) {
                  uVar8 = uVar1;
                }
              }
            }
          }
        }
      }
    }
  }
  if (0x7ffffffe < uVar8) {
    uVar8 = 0x7fffffff;
  }
  return uVar8;
}


// ===== 0065b280  FUN_0065b280 =====

void FUN_0065b280(undefined1 (*param_1) [16],ulong param_2,short *param_3,short *param_4)

{
  short sVar1;
  short sVar2;
  undefined1 (*pauVar3) [16];
  ulong uVar4;
  ulong uVar5;
  short sVar6;
  undefined1 auVar7 [16];
  short sVar8;
  undefined1 auVar9 [16];
  
  uVar4 = param_2 & 7;
  if ((param_2 & 0xfffffffffffffff8) == 0) {
    sVar6 = -0x8000;
    sVar8 = 0x7fff;
  }
  else {
    auVar7._8_2_ = 0x8000;
    auVar7._0_8_ = 0x8000800080008000;
    auVar7._10_2_ = 0x8000;
    auVar7._12_2_ = 0x8000;
    auVar7._14_2_ = 0x8000;
    auVar9._8_2_ = 0x7fff;
    auVar9._0_8_ = 0x7fff7fff7fff7fff;
    auVar9._10_2_ = 0x7fff;
    auVar9._12_2_ = 0x7fff;
    auVar9._14_2_ = 0x7fff;
    uVar5 = 0;
    pauVar3 = param_1;
    do {
      param_1 = pauVar3 + 1;
      uVar5 = uVar5 + 8;
      auVar9 = NEON_smin(auVar9,*pauVar3,2);
      auVar7 = NEON_smax(auVar7,*pauVar3,2);
      pauVar3 = param_1;
    } while (uVar5 < (param_2 & 0xfffffffffffffff8));
    sVar8 = NEON_sminv(auVar9,2);
    sVar6 = NEON_smaxv(auVar7,2);
  }
  if (uVar4 != 0) {
    sVar1 = *(short *)*param_1;
    sVar2 = sVar1;
    if (sVar8 <= sVar1) {
      sVar2 = sVar8;
    }
    sVar8 = sVar2;
    if (sVar1 <= sVar6) {
      sVar1 = sVar6;
    }
    sVar6 = sVar1;
    if (uVar4 != 1) {
      sVar6 = *(short *)(*param_1 + 2);
      sVar2 = sVar6;
      if (sVar8 <= sVar6) {
        sVar2 = sVar8;
      }
      sVar8 = sVar2;
      if (sVar6 <= sVar1) {
        sVar6 = sVar1;
      }
      if (uVar4 != 2) {
        sVar1 = *(short *)(*param_1 + 4);
        sVar2 = sVar1;
        if (sVar8 <= sVar1) {
          sVar2 = sVar8;
        }
        sVar8 = sVar2;
        if (sVar1 <= sVar6) {
          sVar1 = sVar6;
        }
        sVar6 = sVar1;
        if (uVar4 != 3) {
          sVar6 = *(short *)(*param_1 + 6);
          sVar2 = sVar6;
          if (sVar8 <= sVar6) {
            sVar2 = sVar8;
          }
          sVar8 = sVar2;
          if (sVar6 <= sVar1) {
            sVar6 = sVar1;
          }
          if (uVar4 != 4) {
            sVar1 = *(short *)(*param_1 + 8);
            sVar2 = sVar1;
            if (sVar8 <= sVar1) {
              sVar2 = sVar8;
            }
            sVar8 = sVar2;
            if (sVar1 <= sVar6) {
              sVar1 = sVar6;
            }
            sVar6 = sVar1;
            if (uVar4 != 5) {
              sVar2 = *(short *)(*param_1 + 10);
              sVar6 = sVar2;
              if (sVar8 <= sVar2) {
                sVar6 = sVar8;
              }
              sVar8 = sVar6;
              if (sVar2 <= sVar1) {
                sVar2 = sVar1;
              }
              sVar6 = sVar2;
              if (uVar4 != 6) {
                sVar6 = *(short *)(*param_1 + 0xc);
                sVar1 = sVar6;
                if (sVar8 <= sVar6) {
                  sVar1 = sVar8;
                }
                sVar8 = sVar1;
                if (sVar6 <= sVar2) {
                  sVar6 = sVar2;
                }
              }
            }
          }
        }
      }
    }
  }
  *param_3 = sVar8;
  *param_4 = sVar6;
  return;
}


// ===== 0065b3d8  FUN_0065b3d8 =====

void FUN_0065b3d8(void)

{
  return;
}


// ===== 0065b3e0  FUN_0065b3e0 =====

void FUN_0065b3e0(void)

{
  return;
}


// ===== 0065b3e8  FUN_0065b3e8 =====

void FUN_0065b3e8(void)

{
  FUN_0065b3f8();
  return;
}


// ===== 0065b3f8  FUN_0065b3f8 =====

void FUN_0065b3f8(undefined8 *param_1,int param_2,undefined8 param_3,int param_4,undefined8 param_5,
                 int param_6,int param_7,undefined4 param_8)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  void *pvVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long *local_38;
  
  uVar1 = param_3;
  if (param_7 != 2) {
    uVar1 = param_5;
  }
  *(int *)(param_1 + 1) = param_7;
  *(undefined4 *)((long)param_1 + 0xc) = param_8;
  param_1[8] = 0;
  param_1[9] = param_5;
  uVar9 = (ulong)(param_4 / 100);
  uVar11 = 3;
  if (99 < param_4 - 48000U) {
    uVar11 = 1;
  }
  uVar2 = 2;
  if (99 < param_4 - 32000U) {
    uVar2 = uVar11;
  }
  param_1[4] = uVar9;
  param_1[5] = param_5;
  uVar11 = 0;
  if (uVar2 != 0) {
    uVar11 = uVar9 / uVar2;
  }
  param_1[10] = uVar2;
  *param_1 = &PTR_FUN_00d27e30;
  param_1[2] = (long)(param_2 / 100);
  param_1[3] = param_3;
  param_1[6] = uVar1;
  param_1[7] = (long)(param_6 / 100);
  lVar7 = uVar9 - uVar11 * uVar2;
  if (lVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../rtc_base/checks.h",0x1e6,"a % b == 0",&DAT_001fed90,lVar7,0,uVar9,
                 " is not evenly divisible by ",uVar2);
  }
  param_1[0xb] = uVar11;
  pvVar4 = operator_new(0x70);
  FUN_0065b730(pvVar4,uVar9,uVar1,1);
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = pvVar4;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  *(bool *)(param_1 + 0x15) = param_7 == 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x16] = 0;
  FUN_0065f0d0(param_1 + 0x17,param_1[4]);
  lVar7 = param_1[4];
  lVar10 = param_1[7];
  if ((param_1[2] != lVar7) && (param_1[6] != 0)) {
    uVar11 = 0;
    do {
      plVar5 = (long *)operator_new(0x40);
      FUN_005ee570(plVar5,param_1[2],param_1[4]);
      puVar3 = (undefined8 *)param_1[0x10];
      local_38 = plVar5;
      if (puVar3 < (undefined8 *)param_1[0x11]) {
        if (puVar3 == (undefined8 *)0x0) goto LAB_0065b6e4;
        local_38 = (long *)0x0;
        puVar6 = puVar3 + 1;
        *puVar3 = plVar5;
      }
      else {
        puVar6 = (undefined8 *)FUN_0065d348(param_1 + 0xf,&local_38);
      }
      plVar5 = local_38;
      param_1[0x10] = puVar6;
      local_38 = (long *)0x0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < (ulong)param_1[6]);
  }
  if ((lVar10 != lVar7) && (param_1[6] != 0)) {
    uVar11 = 0;
    do {
      plVar5 = (long *)operator_new(0x40);
      FUN_005ee570(plVar5,param_1[4],param_1[7]);
      puVar3 = (undefined8 *)param_1[0x13];
      local_38 = plVar5;
      if (puVar3 < (undefined8 *)param_1[0x14]) {
        if (puVar3 == (undefined8 *)0x0) {
LAB_0065b6e4:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        local_38 = (long *)0x0;
        puVar6 = puVar3 + 1;
        *puVar3 = plVar5;
      }
      else {
        puVar6 = (undefined8 *)FUN_0065d348(param_1 + 0x12,&local_38);
      }
      plVar5 = local_38;
      param_1[0x13] = puVar6;
      local_38 = (long *)0x0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < (ulong)param_1[6]);
  }
  uVar11 = param_1[10];
  if (1 < uVar11) {
    pvVar4 = operator_new(0x70);
    FUN_0065b730(pvVar4,param_1[4],param_1[6],uVar11);
    lVar7 = param_1[0xd];
    param_1[0xd] = pvVar4;
    if (lVar7 != 0) {
      FUN_0065d440(param_1 + 0xd);
    }
    pvVar4 = operator_new(0x38);
    FUN_0065d4b8(pvVar4,param_1[6],param_1[10],param_1[4]);
    pvVar8 = (void *)param_1[0xe];
    param_1[0xe] = pvVar4;
    if (pvVar8 != (void *)0x0) {
      FUN_0065d674(pvVar8);
      operator_delete(pvVar8);
    }
  }
  return;
}


// ===== 0065b730  FUN_0065b730 =====

void FUN_0065b730(long *param_1,ulong param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  void *pvVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  
  uVar8 = param_3 * param_2 * 4;
  if (param_3 * param_2 >> 0x3e != 0) {
    uVar8 = 0xffffffffffffffff;
  }
  pvVar5 = operator_new__(uVar8);
  memset(pvVar5,0,uVar8);
  *param_1 = (long)pvVar5;
  uVar8 = param_4 * param_3 * 8;
  if (param_4 * param_3 >> 0x3d != 0) {
    uVar8 = 0xffffffffffffffff;
  }
  pvVar5 = operator_new__(uVar8);
  param_1[1] = (long)pvVar5;
  pvVar5 = operator_new__(uVar8);
  uVar8 = 0;
  if (param_4 != 0) {
    uVar8 = param_2 / param_4;
  }
  param_1[2] = (long)pvVar5;
  param_1[3] = param_2;
  param_1[6] = param_3;
  param_1[7] = param_4;
  param_1[4] = uVar8;
  param_1[5] = param_3;
  if (param_4 >> 0x3c != 0) {
LAB_0065bc08:
                    /* WARNING: Subroutine does not return */
    FUN_0062aad8();
  }
  local_58 = (undefined8 *)operator_new(param_4 * 0x10);
  uVar8 = param_4 * 0x10 - 0x10;
  local_48 = local_58 + param_4 * 2;
  uVar9 = (uint)uVar8;
  puVar7 = local_58;
  if ((~uVar9 & 0x30) != 0) {
    lVar10 = -((ulong)((uVar9 >> 4) + 1) & 3);
    puVar6 = local_58;
    do {
      if (puVar6 == (undefined8 *)0x0) goto LAB_0065ba20;
      bVar4 = lVar10 != -1;
      lVar10 = lVar10 + 1;
      puVar7 = puVar6 + 2;
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6 = puVar7;
    } while (bVar4);
  }
  if (0x2f < uVar8) {
    do {
      if (puVar7 == (undefined8 *)0x0) goto LAB_0065ba20;
      *puVar7 = 0;
      puVar7[1] = 0;
      if (puVar7 + 2 == (undefined8 *)0x0) goto LAB_0065ba20;
      puVar7[2] = 0;
      puVar7[3] = 0;
      if (puVar7 + 4 == (undefined8 *)0x0) goto LAB_0065ba20;
      puVar7[4] = 0;
      puVar7[5] = 0;
      if (puVar7 + 6 == (undefined8 *)0x0) goto LAB_0065ba20;
      puVar6 = puVar7 + 8;
      puVar7[6] = 0;
      puVar7[7] = 0;
      puVar7 = puVar6;
    } while (puVar6 != local_48);
  }
  local_50 = local_48;
  FUN_0062975c(param_1 + 8,param_3,&local_58);
  if (local_58 == (undefined8 *)0x0) {
LAB_0065b8e8:
    uVar8 = param_1[5];
    lVar10 = param_1[7];
    local_50 = (undefined8 *)0x0;
    local_48 = (undefined8 *)0x0;
    local_58 = (undefined8 *)0x0;
    if (uVar8 != 0) {
      if (uVar8 >> 0x3c != 0) goto LAB_0065bc08;
      local_58 = (undefined8 *)operator_new(uVar8 * 0x10);
      uVar11 = uVar8 * 0x10 - 0x10;
      local_48 = local_58 + uVar8 * 2;
      uVar9 = (uint)uVar11;
      puVar7 = local_58;
      if ((~uVar9 & 0x30) != 0) {
        lVar12 = -((ulong)((uVar9 >> 4) + 1) & 3);
        puVar6 = local_58;
        do {
          if (puVar6 == (undefined8 *)0x0) goto LAB_0065ba20;
          bVar4 = lVar12 != -1;
          lVar12 = lVar12 + 1;
          puVar7 = puVar6 + 2;
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar6 = puVar7;
        } while (bVar4);
      }
      if (0x2f < uVar11) {
        do {
          if (puVar7 == (undefined8 *)0x0) {
LAB_0065ba20:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          *puVar7 = 0;
          puVar7[1] = 0;
          if (puVar7 + 2 == (undefined8 *)0x0) goto LAB_0065ba20;
          puVar7[2] = 0;
          puVar7[3] = 0;
          if (puVar7 + 4 == (undefined8 *)0x0) goto LAB_0065ba20;
          puVar7[4] = 0;
          puVar7[5] = 0;
          if (puVar7 + 6 == (undefined8 *)0x0) goto LAB_0065ba20;
          puVar6 = puVar7 + 8;
          puVar7[6] = 0;
          puVar7[7] = 0;
          puVar7 = puVar6;
        } while (puVar6 != local_48);
      }
    }
    local_50 = local_48;
    FUN_0062975c(param_1 + 0xb,lVar10,&local_58);
    if (local_58 == (undefined8 *)0x0) {
LAB_0065ba44:
      uVar8 = param_1[5];
      if (uVar8 != 0) {
        uVar14 = param_1[7];
        lVar10 = 0;
        uVar11 = 0;
        do {
          if (uVar14 != 0) {
            lVar12 = 0;
            lVar13 = 0;
            uVar8 = 0;
            do {
              lVar3 = param_1[4];
              lVar2 = 0;
              if (lVar3 != 0) {
                lVar2 = *param_1 + param_1[3] * uVar11 * 4 + lVar3 * uVar8 * 4;
              }
              if (((ulong)((param_1[0xc] - param_1[0xb] >> 3) * -0x5555555555555555) <= uVar8) ||
                 (plVar15 = (long *)(param_1[0xb] + lVar13), lVar1 = *plVar15,
                 (ulong)(plVar15[1] - lVar1 >> 4) <= uVar11)) {
LAB_0065bbe0:
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                          );
              }
              plVar15 = (long *)(lVar1 + uVar11 * 0x10);
              *plVar15 = lVar2;
              plVar15[1] = lVar3;
              if (((ulong)((param_1[0xc] - param_1[0xb] >> 3) * -0x5555555555555555) <= uVar8) ||
                 (plVar15 = (long *)(param_1[0xb] + lVar13), lVar2 = *plVar15,
                 (ulong)(plVar15[1] - lVar2 >> 4) <= uVar11)) {
LAB_0065bbf4:
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                          );
              }
              if (((ulong)((param_1[9] - param_1[8] >> 3) * -0x5555555555555555) <= uVar11) ||
                 (plVar15 = (long *)(param_1[8] + uVar11 * 0x18), lVar3 = *plVar15,
                 (ulong)(plVar15[1] - lVar3 >> 4) <= uVar8)) goto LAB_0065bbe0;
              puVar7 = (undefined8 *)(lVar2 + uVar11 * 0x10);
              uVar16 = *puVar7;
              puVar6 = (undefined8 *)(lVar3 + lVar12);
              puVar6[1] = puVar7[1];
              *puVar6 = uVar16;
              if (((ulong)((param_1[0xc] - param_1[0xb] >> 3) * -0x5555555555555555) <= uVar8) ||
                 (plVar15 = (long *)(param_1[0xb] + lVar13), lVar2 = *plVar15,
                 (ulong)(plVar15[1] - lVar2 >> 4) <= uVar11)) goto LAB_0065bbf4;
              lVar12 = lVar12 + 0x10;
              lVar13 = lVar13 + 0x18;
              *(undefined8 *)(param_1[1] + param_1[5] * uVar8 * 8 + uVar11 * 8) =
                   *(undefined8 *)(lVar2 + uVar11 * 0x10);
              *(undefined8 *)(param_1[2] + lVar10 * param_1[7] + uVar8 * 8) =
                   *(undefined8 *)(param_1[1] + param_1[5] * uVar8 * 8 + uVar11 * 8);
              uVar8 = uVar8 + 1;
              uVar14 = param_1[7];
            } while (uVar8 < uVar14);
            uVar8 = param_1[5];
          }
          uVar11 = uVar11 + 1;
          lVar10 = lVar10 + 8;
        } while (uVar11 < uVar8);
      }
      return;
    }
    uVar11 = (ulong)((long)local_50 + (-0x10 - ((long)local_50 << 0x3c))) >> 4;
    uVar8 = (ulong)(((long)local_58 - (long)local_50 << 0x3c) - ((long)local_58 - (long)local_50))
            >> 4;
    if (uVar11 <= uVar8) {
      uVar8 = uVar11;
    }
    puVar7 = local_50;
    if ((1 < uVar8) && ((((int)local_58 - (int)local_50 | -(int)local_50) & 0xfU) == 0)) {
      uVar8 = uVar8 & 0xffffffffffffffe;
      puVar7 = local_50 + uVar8 * -2;
      do {
        uVar8 = uVar8 - 2;
      } while (uVar8 != 0);
    }
    do {
      if (puVar7 == local_58) {
        local_50 = local_58;
        operator_delete(local_58);
        goto LAB_0065ba44;
      }
      puVar7 = puVar7 + -2;
    } while (puVar7 != (undefined8 *)0x0);
  }
  else {
    uVar11 = (ulong)((long)local_50 + (-0x10 - ((long)local_50 << 0x3c))) >> 4;
    uVar8 = (ulong)(((long)local_58 - (long)local_50 << 0x3c) - ((long)local_58 - (long)local_50))
            >> 4;
    if (uVar11 <= uVar8) {
      uVar8 = uVar11;
    }
    puVar7 = local_50;
    if ((1 < uVar8) && ((((int)local_58 - (int)local_50 | -(int)local_50) & 0xfU) == 0)) {
      uVar8 = uVar8 & 0xffffffffffffffe;
      puVar7 = local_50 + uVar8 * -2;
      do {
        uVar8 = uVar8 - 2;
      } while (uVar8 != 0);
    }
    do {
      if (puVar7 == local_58) {
        local_50 = local_58;
        operator_delete(local_58);
        goto LAB_0065b8e8;
      }
      puVar7 = puVar7 + -2;
    } while (puVar7 != (undefined8 *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0065bc0c  FUN_0065bc0c =====

void FUN_0065bc0c(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  void *pvVar5;
  
  plVar4 = (long *)param_1[0x12];
  *param_1 = &PTR_FUN_00d27e30;
  if (plVar4 != (long *)0x0) {
    plVar3 = (long *)param_1[0x13];
    plVar1 = plVar4;
    if (plVar4 != plVar3) {
      do {
        plVar3 = plVar3 + -1;
        if (plVar3 == (long *)0x0) goto LAB_0065bd5c;
        plVar1 = (long *)*plVar3;
        *plVar3 = 0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
      } while (plVar3 != plVar4);
      plVar1 = (long *)param_1[0x12];
    }
    param_1[0x13] = plVar4;
    operator_delete(plVar1);
  }
  plVar4 = (long *)param_1[0xf];
  if (plVar4 != (long *)0x0) {
    plVar3 = (long *)param_1[0x10];
    plVar1 = plVar4;
    if (plVar4 != plVar3) {
      do {
        plVar3 = plVar3 + -1;
        if (plVar3 == (long *)0x0) {
LAB_0065bd5c:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        plVar1 = (long *)*plVar3;
        *plVar3 = 0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
      } while (plVar3 != plVar4);
      plVar1 = (long *)param_1[0xf];
    }
    param_1[0x10] = plVar4;
    operator_delete(plVar1);
  }
  pvVar5 = (void *)param_1[0xe];
  param_1[0xe] = 0;
  if (pvVar5 != (void *)0x0) {
    FUN_0065d674(pvVar5);
    operator_delete(pvVar5);
  }
  lVar2 = param_1[0xd];
  param_1[0xd] = 0;
  if (lVar2 != 0) {
    FUN_0065d440();
  }
  plVar4 = param_1 + 0xc;
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 == 0) {
    return;
  }
  FUN_0065d440(plVar4);
  return;
}


// ===== 0065bd70  FUN_0065bd70 =====

void FUN_0065bd70(void *param_1)

{
  FUN_0065bc0c();
  operator_delete(param_1);
  return;
}


// ===== 0065bda0  FUN_0065bda0 =====

void FUN_0065bda0(long param_1,long *param_2)

{
  undefined8 uVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  float fVar15;
  float local_3c40 [3840];
  
  pfVar2 = local_3c40;
  pfVar4 = local_3c40;
  pfVar3 = local_3c40;
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x48) = uVar6;
  *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x30) = uVar6;
  if (*(long *)(param_1 + 0x68) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x30) = uVar6;
  }
  lVar12 = *(long *)(param_1 + 0x10);
  lVar14 = *(long *)(param_1 + 0x20);
  if (((*(int *)(param_1 + 8) == 2) || (*(int *)(param_1 + 0xc) == 2)) &&
     (*(long *)(param_1 + 0x30) == 2)) {
    if (lVar12 == lVar14) {
      if (*(long *)(param_1 + 0x18) != 0) {
        uVar13 = 0;
        do {
          FUN_005eeb44(param_2[uVar13],*(undefined8 *)(param_1 + 0x20),
                       *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x60) + 8) + uVar13 * 8));
          uVar13 = uVar13 + 1;
        } while (uVar13 < *(ulong *)(param_1 + 0x18));
      }
    }
    else if (*(long *)(param_1 + 0x18) != 0) {
      uVar13 = 0;
      do {
        if ((ulong)(*(long *)(param_1 + 0x80) - *(long *)(param_1 + 0x78) >> 3) <= uVar13)
        goto LAB_0065c0c4;
        FUN_005ee748(*(undefined8 *)(*(long *)(param_1 + 0x78) + uVar13 * 8),param_2[uVar13],
                     *(undefined8 *)(param_1 + 0x10),
                     *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x60) + 8) + uVar13 * 8),
                     *(undefined8 *)(param_1 + 0x20));
        uVar6 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x60) + 8) + uVar13 * 8);
        FUN_005eeb44(uVar6,*(undefined8 *)(param_1 + 0x20),uVar6);
        uVar13 = uVar13 + 1;
      } while (uVar13 < *(ulong *)(param_1 + 0x18));
    }
    lVar12 = *(long *)(param_1 + 0x20);
    puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 8);
    uVar6 = 0;
    if (lVar12 != 0) {
      uVar6 = *puVar8;
    }
    uVar1 = 0;
    if (lVar12 != 0) {
      uVar1 = puVar8[1];
    }
    FUN_0065f11c(param_1 + 0xb8,*(undefined8 *)(param_1 + 0x28),uVar6,lVar12,uVar1,lVar12);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x48) = uVar6;
    *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x30) = uVar6;
    if (*(long *)(param_1 + 0x68) == 0) {
      return;
    }
    *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x30) = uVar6;
    return;
  }
  uVar13 = *(ulong *)(param_1 + 0x18);
  if ((uVar13 < 2) || (*(long *)(param_1 + 0x48) != 1)) {
    if (lVar12 == lVar14) {
      if (*(long *)(param_1 + 0x48) == 0) {
        return;
      }
      uVar13 = 0;
      do {
        FUN_005eeb44(param_2[uVar13],*(undefined8 *)(param_1 + 0x20),
                     *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x60) + 8) + uVar13 * 8));
        uVar13 = uVar13 + 1;
      } while (uVar13 < *(ulong *)(param_1 + 0x48));
      return;
    }
    if (*(long *)(param_1 + 0x48) == 0) {
      return;
    }
    uVar13 = 0;
    while (uVar13 < (ulong)(*(long *)(param_1 + 0x80) - *(long *)(param_1 + 0x78) >> 3)) {
      FUN_005ee748(*(undefined8 *)(*(long *)(param_1 + 0x78) + uVar13 * 8),param_2[uVar13],
                   *(undefined8 *)(param_1 + 0x10),
                   *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x60) + 8) + uVar13 * 8),
                   *(undefined8 *)(param_1 + 0x20));
      uVar6 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x60) + 8) + uVar13 * 8);
      FUN_005eeb44(uVar6,*(undefined8 *)(param_1 + 0x20),uVar6);
      uVar13 = uVar13 + 1;
      if (*(ulong *)(param_1 + 0x48) <= uVar13) {
        return;
      }
    }
    goto LAB_0065c0c4;
  }
  memset(local_3c40,0xff,0x3c00);
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    if (lVar12 != 0) {
      lVar7 = 0;
      lVar9 = *param_2;
      do {
        fVar15 = *(float *)(lVar9 + lVar7 * 4);
        plVar10 = param_2 + 1;
        lVar11 = uVar13 - 1;
        do {
          lVar11 = lVar11 + -1;
          fVar15 = fVar15 + *(float *)(*plVar10 + lVar7 * 4);
          plVar10 = plVar10 + 1;
        } while (lVar11 != 0);
        if (lVar7 == 0xf00) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/array:277: libc++ Hardening assertion __n < _Size failed: out-of-bounds access in std::array<T, N>\n"
                    );
        }
        local_3c40[lVar7] = (1.0 / (float)uVar13) * fVar15;
        lVar7 = lVar7 + 1;
      } while (lVar7 != lVar12);
      goto LAB_0065c038;
    }
    if (lVar14 != 0) goto LAB_0065c05c;
  }
  else {
    pfVar2 = (float *)param_2[*(long *)(param_1 + 0xb0)];
LAB_0065c038:
    pfVar3 = pfVar2;
    pfVar4 = pfVar2;
    if (lVar12 != lVar14) {
LAB_0065c05c:
      if (*(undefined8 **)(param_1 + 0x80) == *(undefined8 **)(param_1 + 0x78)) {
LAB_0065c0c4:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                  );
      }
      FUN_005ee748(**(undefined8 **)(param_1 + 0x78),pfVar3,lVar12,
                   **(undefined8 **)(*(long *)(param_1 + 0x60) + 8),lVar14);
      lVar12 = *(long *)(param_1 + 0x20);
      pfVar4 = (float *)**(undefined8 **)(*(long *)(param_1 + 0x60) + 8);
      puVar5 = (undefined1 *)pfVar4;
      goto LAB_0065c098;
    }
  }
  puVar5 = (undefined1 *)**(undefined8 **)(*(long *)(param_1 + 0x60) + 8);
LAB_0065c098:
  FUN_005eeb44(pfVar4,lVar12,puVar5);
  return;
}


// ===== 0065c0ec  FUN_0065c0ec =====

void FUN_0065c0ec(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x48) = param_2;
  *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x30) = param_2;
  if (*(long *)(param_1 + 0x68) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x30) = param_2;
  }
  return;
}


// ===== 0065c10c  FUN_0065c10c =====

void FUN_0065c10c(long param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (*(long *)(param_1 + 0x38) == *(long *)(param_1 + 0x20)) {
    if (*(long *)(param_1 + 0x48) == 0) {
      uVar3 = *(ulong *)(param_2 + 8);
      uVar2 = 0;
      goto LAB_0065c214;
    }
    uVar3 = 0;
    do {
      FUN_005eec3c(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x60) + 8) + uVar3 * 8),
                   *(undefined8 *)(param_1 + 0x20),param_3[uVar3]);
      uVar2 = *(ulong *)(param_1 + 0x48);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  else {
    if (*(long *)(param_1 + 0x48) == 0) {
      uVar3 = *(ulong *)(param_2 + 8);
      uVar2 = 0;
      goto LAB_0065c214;
    }
    uVar3 = 0;
    do {
      uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x60) + 8) + uVar3 * 8);
      FUN_005eec3c(uVar1,*(undefined8 *)(param_1 + 0x20),uVar1);
      if ((ulong)(*(long *)(param_1 + 0x98) - *(long *)(param_1 + 0x90) >> 3) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                  );
      }
      FUN_005ee748(*(undefined8 *)(*(long *)(param_1 + 0x90) + uVar3 * 8),
                   *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x60) + 8) + uVar3 * 8),
                   *(undefined8 *)(param_1 + 0x20),param_3[uVar3],*(undefined8 *)(param_1 + 0x38));
      uVar2 = *(ulong *)(param_1 + 0x48);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  uVar3 = *(ulong *)(param_2 + 8);
LAB_0065c214:
  for (; uVar2 < uVar3; uVar2 = uVar2 + 1) {
    memcpy((void *)param_3[uVar2],(void *)*param_3,*(long *)(param_1 + 0x38) << 2);
    uVar3 = *(ulong *)(param_2 + 8);
  }
  return;
}


// ===== 0065c248  FUN_0065c248 =====

void FUN_0065c248(long param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (*(long *)(param_1 + 0x38) == *(long *)(param_1 + 0x20)) {
    if (*(long *)(param_1 + 0x48) == 0) {
      uVar3 = *(ulong *)(param_2 + 0x48);
      uVar2 = 0;
      goto LAB_0065c34c;
    }
    uVar3 = 0;
    do {
      memcpy(*(void **)(*(long *)(*(long *)(param_2 + 0x60) + 8) + uVar3 * 8),
             *(void **)(*(long *)(*(long *)(param_1 + 0x60) + 8) + uVar3 * 8),
             *(long *)(param_1 + 0x20) << 2);
      uVar2 = *(ulong *)(param_1 + 0x48);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  else {
    if (*(long *)(param_1 + 0x48) == 0) {
      uVar3 = *(ulong *)(param_2 + 0x48);
      uVar2 = 0;
      goto LAB_0065c34c;
    }
    uVar3 = 0;
    do {
      if ((ulong)(*(long *)(param_1 + 0x98) - *(long *)(param_1 + 0x90) >> 3) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                  );
      }
      FUN_005ee748(*(undefined8 *)(*(long *)(param_1 + 0x90) + uVar3 * 8),
                   *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x60) + 8) + uVar3 * 8),
                   *(undefined8 *)(param_1 + 0x20),
                   *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x60) + 8) + uVar3 * 8),
                   *(undefined8 *)(param_2 + 0x20));
      uVar2 = *(ulong *)(param_1 + 0x48);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  uVar3 = *(ulong *)(param_2 + 0x48);
LAB_0065c34c:
  for (; uVar2 < uVar3; uVar2 = uVar2 + 1) {
    puVar1 = *(undefined8 **)(*(long *)(param_2 + 0x60) + 8);
    memcpy((void *)puVar1[uVar2],(void *)*puVar1,*(long *)(param_1 + 0x38) << 2);
    uVar3 = *(ulong *)(param_2 + 0x48);
  }
  return;
}


// ===== 0065c37c  FUN_0065c37c =====

void FUN_0065c37c(long param_1,long param_2)

{
  short *psVar1;
  short sVar2;
  short *psVar3;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  short *psVar9;
  short *psVar10;
  short *psVar11;
  short *psVar12;
  short *psVar13;
  short *psVar14;
  short *psVar15;
  short *psVar16;
  short *psVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  long lVar21;
  short *psVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  long lVar29;
  ulong uVar30;
  undefined8 *puVar31;
  ulong uVar32;
  long lVar33;
  float *pfVar34;
  long lVar35;
  int iVar36;
  int iVar45;
  int iVar46;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  int iVar47;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  int iVar48;
  int iVar53;
  int iVar54;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  int iVar55;
  undefined1 auVar52 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined8 uVar66;
  undefined8 uVar67;
  undefined8 uVar68;
  float local_3c50 [8];
  undefined8 auStack_3c30 [1916];
  
  pfVar34 = local_3c50;
  uVar18 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x48) = uVar18;
  *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x30) = uVar18;
  if (*(long *)(param_1 + 0x68) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x30) = uVar18;
  }
  lVar33 = *(long *)(param_1 + 0x10);
  lVar35 = *(long *)(param_1 + 0x20);
  if (((*(int *)(param_1 + 8) == 2) || (*(int *)(param_1 + 0xc) == 2)) &&
     (*(long *)(param_1 + 0x18) == 2)) {
    if (lVar33 == lVar35) {
      uVar19 = 0;
      psVar22 = (short *)(param_2 + 0x10);
      uVar23 = 2;
      lVar33 = param_2;
      do {
        uVar24 = *(ulong *)(param_1 + 0x10);
        if (uVar24 != 0) {
          uVar26 = *(ulong *)(*(long *)(*(long *)(param_1 + 0x60) + 8) + uVar19 * 8);
          uVar32 = uVar19;
          if (uVar24 < 4) {
LAB_0065c444:
            uVar28 = 0;
LAB_0065c448:
            psVar17 = (short *)(param_2 + uVar32 * 2);
            lVar35 = uVar24 - uVar28;
            pfVar34 = (float *)(uVar26 + uVar28 * 4);
            do {
              sVar2 = *psVar17;
              lVar35 = lVar35 + -1;
              psVar17 = psVar17 + uVar23;
              *pfVar34 = (float)(int)sVar2;
              pfVar34 = pfVar34 + 1;
            } while (lVar35 != 0);
          }
          else {
            uVar27 = param_2 + uVar19 * 2;
            uVar30 = uVar24 - 1;
            uVar28 = 0;
            if (((uVar27 + uVar30 * 2 < uVar27) || (uVar23 != 1)) || (uVar26 + uVar30 * 4 < uVar26))
            goto LAB_0065c444;
            if (uVar30 >> 0x3e != 0) goto LAB_0065c448;
            if ((uVar26 < uVar27 + uVar24 * 2) && (uVar27 < uVar26 + uVar24 * 4)) goto LAB_0065c444;
            if (uVar24 < 0x10) {
              uVar27 = 0;
LAB_0065c52c:
              uVar28 = uVar24 & 0x7ffffffffffffffc;
              uVar32 = uVar19 + uVar28;
              lVar35 = uVar27 - uVar28;
              puVar20 = (undefined8 *)(lVar33 + uVar27 * 2);
              puVar31 = (undefined8 *)(uVar26 + uVar27 * 4);
              do {
                uVar18 = *puVar20;
                lVar35 = lVar35 + 4;
                auVar38._0_4_ = (int)(short)uVar18;
                auVar38._4_4_ = (int)(short)((ulong)uVar18 >> 0x10);
                auVar38._8_4_ = (int)(short)((ulong)uVar18 >> 0x20);
                auVar38._12_4_ = (int)(short)((ulong)uVar18 >> 0x30);
                auVar39 = NEON_scvtf(auVar38,4);
                puVar31[1] = auVar39._8_8_;
                *puVar31 = auVar39._0_8_;
                puVar20 = puVar20 + 1;
                puVar31 = puVar31 + 2;
              } while (lVar35 != 0);
              if (uVar24 != uVar28) goto LAB_0065c448;
            }
            else {
              uVar28 = uVar24 & 0x7ffffffffffffff0;
              uVar32 = uVar24 & 0x7ffffffffffffff0;
              psVar17 = psVar22;
              puVar20 = (undefined8 *)(uVar26 + 0x20);
              do {
                psVar1 = psVar17 + -8;
                psVar3 = psVar17 + -7;
                psVar4 = psVar17 + -6;
                psVar5 = psVar17 + -5;
                psVar6 = psVar17 + -4;
                psVar7 = psVar17 + -3;
                psVar8 = psVar17 + -2;
                psVar9 = psVar17 + -1;
                sVar2 = *psVar17;
                psVar10 = psVar17 + 1;
                psVar11 = psVar17 + 2;
                psVar12 = psVar17 + 3;
                psVar13 = psVar17 + 4;
                psVar14 = psVar17 + 5;
                psVar15 = psVar17 + 6;
                psVar16 = psVar17 + 7;
                uVar32 = uVar32 - 0x10;
                psVar17 = psVar17 + 0x10;
                auVar56._0_4_ = (int)*psVar6;
                auVar56._4_4_ = (int)*psVar7;
                auVar56._8_4_ = (int)*psVar8;
                auVar56._12_4_ = (int)*psVar9;
                auVar37._0_4_ = (int)*psVar1;
                auVar37._4_4_ = (int)*psVar3;
                auVar37._8_4_ = (int)*psVar4;
                auVar37._12_4_ = (int)*psVar5;
                auVar61._0_4_ = (int)*psVar13;
                auVar61._4_4_ = (int)*psVar14;
                auVar61._8_4_ = (int)*psVar15;
                auVar61._12_4_ = (int)*psVar16;
                auVar49._0_4_ = (int)sVar2;
                auVar49._4_4_ = (int)*psVar10;
                auVar49._8_4_ = (int)*psVar11;
                auVar49._12_4_ = (int)*psVar12;
                auVar57 = NEON_scvtf(auVar56,4);
                auVar39 = NEON_scvtf(auVar37,4);
                auVar62 = NEON_scvtf(auVar61,4);
                auVar50 = NEON_scvtf(auVar49,4);
                puVar20[-3] = auVar39._8_8_;
                puVar20[-4] = auVar39._0_8_;
                puVar20[-1] = auVar57._8_8_;
                puVar20[-2] = auVar57._0_8_;
                puVar20[1] = auVar50._8_8_;
                *puVar20 = auVar50._0_8_;
                puVar20[3] = auVar62._8_8_;
                puVar20[2] = auVar62._0_8_;
                puVar20 = puVar20 + 8;
              } while (uVar32 != 0);
              if (uVar24 != uVar28) {
                uVar27 = uVar28;
                if ((uVar24 & 0xc) == 0) {
                  uVar32 = uVar19 + uVar28;
                  goto LAB_0065c448;
                }
                goto LAB_0065c52c;
              }
            }
          }
          uVar23 = *(ulong *)(param_1 + 0x18);
        }
        uVar19 = uVar19 + 1;
        psVar22 = psVar22 + 1;
        lVar33 = lVar33 + 2;
      } while (uVar19 < uVar23);
    }
    else {
      memset(local_3c50,0xff,0x3c00);
      uVar19 = 0;
      psVar22 = (short *)(param_2 + 0x10);
      uVar23 = 2;
      lVar33 = param_2;
      do {
        uVar24 = *(ulong *)(param_1 + 0x10);
        if (uVar24 != 0) {
          uVar26 = 0;
          uVar32 = uVar19;
          if ((3 < uVar24) && (uVar23 == 1)) {
            if (uVar24 < 0x10) {
              uVar32 = 0;
            }
            else {
              uVar26 = uVar24 & 0xfffffffffffffff0;
              uVar32 = uVar24 & 0xfffffffffffffff0;
              puVar20 = auStack_3c30;
              psVar17 = psVar22;
              do {
                psVar1 = psVar17 + -8;
                psVar3 = psVar17 + -7;
                psVar4 = psVar17 + -6;
                psVar5 = psVar17 + -5;
                psVar6 = psVar17 + -4;
                psVar7 = psVar17 + -3;
                psVar8 = psVar17 + -2;
                psVar9 = psVar17 + -1;
                sVar2 = *psVar17;
                psVar10 = psVar17 + 1;
                psVar11 = psVar17 + 2;
                psVar12 = psVar17 + 3;
                psVar13 = psVar17 + 4;
                psVar14 = psVar17 + 5;
                psVar15 = psVar17 + 6;
                psVar16 = psVar17 + 7;
                uVar32 = uVar32 - 0x10;
                psVar17 = psVar17 + 0x10;
                auVar57._0_4_ = (int)*psVar6;
                auVar57._4_4_ = (int)*psVar7;
                auVar57._8_4_ = (int)*psVar8;
                auVar57._12_4_ = (int)*psVar9;
                auVar39._0_4_ = (int)*psVar1;
                auVar39._4_4_ = (int)*psVar3;
                auVar39._8_4_ = (int)*psVar4;
                auVar39._12_4_ = (int)*psVar5;
                auVar62._0_4_ = (int)*psVar13;
                auVar62._4_4_ = (int)*psVar14;
                auVar62._8_4_ = (int)*psVar15;
                auVar62._12_4_ = (int)*psVar16;
                auVar50._0_4_ = (int)sVar2;
                auVar50._4_4_ = (int)*psVar10;
                auVar50._8_4_ = (int)*psVar11;
                auVar50._12_4_ = (int)*psVar12;
                auVar57 = NEON_scvtf(auVar57,4);
                auVar39 = NEON_scvtf(auVar39,4);
                auVar62 = NEON_scvtf(auVar62,4);
                auVar50 = NEON_scvtf(auVar50,4);
                puVar20[-3] = auVar39._8_8_;
                puVar20[-4] = auVar39._0_8_;
                puVar20[-1] = auVar57._8_8_;
                puVar20[-2] = auVar57._0_8_;
                puVar20[1] = auVar50._8_8_;
                *puVar20 = auVar50._0_8_;
                puVar20[3] = auVar62._8_8_;
                puVar20[2] = auVar62._0_8_;
                puVar20 = puVar20 + 8;
              } while (uVar32 != 0);
              if (uVar24 == uVar26) goto LAB_0065c85c;
              uVar32 = uVar26;
              if ((uVar24 & 0xc) == 0) {
                uVar32 = uVar19 + uVar26;
                goto LAB_0065c834;
              }
            }
            uVar26 = uVar24 & 0xfffffffffffffffc;
            lVar35 = uVar32 - uVar26;
            puVar20 = (undefined8 *)(lVar33 + uVar32 * 2);
            pfVar34 = local_3c50 + uVar32;
            do {
              uVar18 = *puVar20;
              lVar35 = lVar35 + 4;
              auVar42._0_4_ = (int)(short)uVar18;
              auVar42._4_4_ = (int)(short)((ulong)uVar18 >> 0x10);
              auVar42._8_4_ = (int)(short)((ulong)uVar18 >> 0x20);
              auVar42._12_4_ = (int)(short)((ulong)uVar18 >> 0x30);
              auVar39 = NEON_scvtf(auVar42,4);
              *(long *)(pfVar34 + 2) = auVar39._8_8_;
              *(long *)pfVar34 = auVar39._0_8_;
              puVar20 = puVar20 + 1;
              pfVar34 = pfVar34 + 4;
            } while (lVar35 != 0);
            uVar32 = uVar19 + uVar26;
            if (uVar24 == uVar26) goto LAB_0065c85c;
          }
LAB_0065c834:
          psVar17 = (short *)(param_2 + uVar32 * 2);
          lVar35 = uVar24 - uVar26;
          pfVar34 = local_3c50 + uVar26;
          do {
            sVar2 = *psVar17;
            lVar35 = lVar35 + -1;
            psVar17 = psVar17 + uVar23;
            *pfVar34 = (float)(int)sVar2;
            pfVar34 = pfVar34 + 1;
          } while (lVar35 != 0);
        }
LAB_0065c85c:
        if ((ulong)(*(long *)(param_1 + 0x80) - *(long *)(param_1 + 0x78) >> 3) <= uVar19)
        goto LAB_0065cca4;
        FUN_005ee748(*(undefined8 *)(*(long *)(param_1 + 0x78) + uVar19 * 8),local_3c50,uVar24,
                     *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x60) + 8) + uVar19 * 8),
                     *(undefined8 *)(param_1 + 0x20));
        uVar23 = *(ulong *)(param_1 + 0x18);
        uVar19 = uVar19 + 1;
        psVar22 = psVar22 + 1;
        lVar33 = lVar33 + 2;
      } while (uVar19 < uVar23);
    }
    lVar33 = *(long *)(param_1 + 0x20);
    puVar20 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 8);
    uVar18 = 0;
    if (lVar33 != 0) {
      uVar18 = *puVar20;
    }
    uVar66 = 0;
    if (lVar33 != 0) {
      uVar66 = puVar20[1];
    }
    FUN_0065f11c(param_1 + 0xb8,*(undefined8 *)(param_1 + 0x28),uVar18,lVar33,uVar66,lVar33);
    uVar18 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x48) = uVar18;
    *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x30) = uVar18;
    if (*(long *)(param_1 + 0x68) == 0) {
      return;
    }
    *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x30) = uVar18;
    return;
  }
  uVar19 = *(ulong *)(param_1 + 0x48);
  if (uVar19 != 1) {
    if (lVar33 != lVar35) {
      memset(local_3c50,0xff,0x3c00);
      if (uVar19 == 0) {
        return;
      }
      uVar23 = 0;
      psVar22 = (short *)(param_2 + 0x10);
      lVar33 = param_2;
      do {
        uVar24 = *(ulong *)(param_1 + 0x10);
        if (uVar24 != 0) {
          uVar26 = 0;
          uVar32 = uVar23;
          if ((3 < uVar24) && (uVar19 == 1)) {
            if (uVar24 < 0x10) {
              uVar32 = 0;
            }
            else {
              uVar26 = uVar24 & 0xfffffffffffffff0;
              uVar32 = uVar24 & 0xfffffffffffffff0;
              puVar20 = auStack_3c30;
              psVar17 = psVar22;
              do {
                psVar1 = psVar17 + -8;
                psVar3 = psVar17 + -7;
                psVar4 = psVar17 + -6;
                psVar5 = psVar17 + -5;
                psVar6 = psVar17 + -4;
                psVar7 = psVar17 + -3;
                psVar8 = psVar17 + -2;
                psVar9 = psVar17 + -1;
                sVar2 = *psVar17;
                psVar10 = psVar17 + 1;
                psVar11 = psVar17 + 2;
                psVar12 = psVar17 + 3;
                psVar13 = psVar17 + 4;
                psVar14 = psVar17 + 5;
                psVar15 = psVar17 + 6;
                psVar16 = psVar17 + 7;
                uVar32 = uVar32 - 0x10;
                psVar17 = psVar17 + 0x10;
                auVar60._0_4_ = (int)*psVar6;
                auVar60._4_4_ = (int)*psVar7;
                auVar60._8_4_ = (int)*psVar8;
                auVar60._12_4_ = (int)*psVar9;
                auVar43._0_4_ = (int)*psVar1;
                auVar43._4_4_ = (int)*psVar3;
                auVar43._8_4_ = (int)*psVar4;
                auVar43._12_4_ = (int)*psVar5;
                auVar65._0_4_ = (int)*psVar13;
                auVar65._4_4_ = (int)*psVar14;
                auVar65._8_4_ = (int)*psVar15;
                auVar65._12_4_ = (int)*psVar16;
                auVar52._0_4_ = (int)sVar2;
                auVar52._4_4_ = (int)*psVar10;
                auVar52._8_4_ = (int)*psVar11;
                auVar52._12_4_ = (int)*psVar12;
                auVar57 = NEON_scvtf(auVar60,4);
                auVar39 = NEON_scvtf(auVar43,4);
                auVar62 = NEON_scvtf(auVar65,4);
                auVar50 = NEON_scvtf(auVar52,4);
                puVar20[-3] = auVar39._8_8_;
                puVar20[-4] = auVar39._0_8_;
                puVar20[-1] = auVar57._8_8_;
                puVar20[-2] = auVar57._0_8_;
                puVar20[1] = auVar50._8_8_;
                *puVar20 = auVar50._0_8_;
                puVar20[3] = auVar62._8_8_;
                puVar20[2] = auVar62._0_8_;
                puVar20 = puVar20 + 8;
              } while (uVar32 != 0);
              if (uVar24 == uVar26) goto LAB_0065cb74;
              uVar32 = uVar26;
              if ((uVar24 & 0xc) == 0) {
                uVar32 = uVar23 + uVar26;
                goto LAB_0065cb4c;
              }
            }
            uVar26 = uVar24 & 0xfffffffffffffffc;
            lVar35 = uVar32 - uVar26;
            puVar20 = (undefined8 *)(lVar33 + uVar32 * 2);
            pfVar34 = local_3c50 + uVar32;
            do {
              uVar18 = *puVar20;
              lVar35 = lVar35 + 4;
              auVar44._0_4_ = (int)(short)uVar18;
              auVar44._4_4_ = (int)(short)((ulong)uVar18 >> 0x10);
              auVar44._8_4_ = (int)(short)((ulong)uVar18 >> 0x20);
              auVar44._12_4_ = (int)(short)((ulong)uVar18 >> 0x30);
              auVar39 = NEON_scvtf(auVar44,4);
              *(long *)(pfVar34 + 2) = auVar39._8_8_;
              *(long *)pfVar34 = auVar39._0_8_;
              puVar20 = puVar20 + 1;
              pfVar34 = pfVar34 + 4;
            } while (lVar35 != 0);
            uVar32 = uVar23 + uVar26;
            if (uVar24 == uVar26) goto LAB_0065cb74;
          }
LAB_0065cb4c:
          psVar17 = (short *)(param_2 + uVar32 * 2);
          lVar35 = uVar24 - uVar26;
          pfVar34 = local_3c50 + uVar26;
          do {
            sVar2 = *psVar17;
            lVar35 = lVar35 + -1;
            psVar17 = psVar17 + uVar19;
            *pfVar34 = (float)(int)sVar2;
            pfVar34 = pfVar34 + 1;
          } while (lVar35 != 0);
        }
LAB_0065cb74:
        if ((ulong)(*(long *)(param_1 + 0x80) - *(long *)(param_1 + 0x78) >> 3) <= uVar23)
        goto LAB_0065cca4;
        FUN_005ee748(*(undefined8 *)(*(long *)(param_1 + 0x78) + uVar23 * 8),local_3c50,uVar24,
                     *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x60) + 8) + uVar23 * 8),
                     *(undefined8 *)(param_1 + 0x20));
        uVar19 = *(ulong *)(param_1 + 0x48);
        uVar23 = uVar23 + 1;
        psVar22 = psVar22 + 1;
        lVar33 = lVar33 + 2;
        if (uVar19 <= uVar23) {
          return;
        }
      } while( true );
    }
    if (uVar19 == 0) {
      return;
    }
    uVar23 = 0;
    psVar22 = (short *)(param_2 + 0x10);
    lVar33 = param_2;
    do {
      uVar24 = *(ulong *)(param_1 + 0x10);
      if (uVar24 != 0) {
        uVar26 = *(ulong *)(*(long *)(*(long *)(param_1 + 0x60) + 8) + uVar23 * 8);
        uVar32 = uVar23;
        if (uVar24 < 4) {
LAB_0065c61c:
          uVar28 = 0;
LAB_0065c620:
          psVar17 = (short *)(param_2 + uVar32 * 2);
          lVar35 = uVar24 - uVar28;
          pfVar34 = (float *)(uVar26 + uVar28 * 4);
          do {
            sVar2 = *psVar17;
            lVar35 = lVar35 + -1;
            psVar17 = psVar17 + uVar19;
            *pfVar34 = (float)(int)sVar2;
            pfVar34 = pfVar34 + 1;
          } while (lVar35 != 0);
        }
        else {
          uVar27 = param_2 + uVar23 * 2;
          uVar30 = uVar24 - 1;
          uVar28 = 0;
          if (((uVar27 + uVar30 * 2 < uVar27) || (uVar19 != 1)) || (uVar26 + uVar30 * 4 < uVar26))
          goto LAB_0065c61c;
          if (uVar30 >> 0x3e != 0) goto LAB_0065c620;
          if ((uVar26 < uVar27 + uVar24 * 2) && (uVar27 < uVar26 + uVar24 * 4)) goto LAB_0065c61c;
          if (uVar24 < 0x10) {
            uVar27 = 0;
LAB_0065c704:
            uVar28 = uVar24 & 0x7ffffffffffffffc;
            uVar32 = uVar23 + uVar28;
            lVar35 = uVar27 - uVar28;
            puVar20 = (undefined8 *)(lVar33 + uVar27 * 2);
            puVar31 = (undefined8 *)(uVar26 + uVar27 * 4);
            do {
              uVar18 = *puVar20;
              lVar35 = lVar35 + 4;
              auVar41._0_4_ = (int)(short)uVar18;
              auVar41._4_4_ = (int)(short)((ulong)uVar18 >> 0x10);
              auVar41._8_4_ = (int)(short)((ulong)uVar18 >> 0x20);
              auVar41._12_4_ = (int)(short)((ulong)uVar18 >> 0x30);
              auVar39 = NEON_scvtf(auVar41,4);
              puVar31[1] = auVar39._8_8_;
              *puVar31 = auVar39._0_8_;
              puVar20 = puVar20 + 1;
              puVar31 = puVar31 + 2;
            } while (lVar35 != 0);
            if (uVar24 != uVar28) goto LAB_0065c620;
          }
          else {
            uVar28 = uVar24 & 0x7ffffffffffffff0;
            uVar32 = uVar24 & 0x7ffffffffffffff0;
            puVar20 = (undefined8 *)(uVar26 + 0x20);
            psVar17 = psVar22;
            do {
              psVar1 = psVar17 + -8;
              psVar3 = psVar17 + -7;
              psVar4 = psVar17 + -6;
              psVar5 = psVar17 + -5;
              psVar6 = psVar17 + -4;
              psVar7 = psVar17 + -3;
              psVar8 = psVar17 + -2;
              psVar9 = psVar17 + -1;
              sVar2 = *psVar17;
              psVar10 = psVar17 + 1;
              psVar11 = psVar17 + 2;
              psVar12 = psVar17 + 3;
              psVar13 = psVar17 + 4;
              psVar14 = psVar17 + 5;
              psVar15 = psVar17 + 6;
              psVar16 = psVar17 + 7;
              uVar32 = uVar32 - 0x10;
              psVar17 = psVar17 + 0x10;
              auVar58._0_4_ = (int)*psVar6;
              auVar58._4_4_ = (int)*psVar7;
              auVar58._8_4_ = (int)*psVar8;
              auVar58._12_4_ = (int)*psVar9;
              auVar40._0_4_ = (int)*psVar1;
              auVar40._4_4_ = (int)*psVar3;
              auVar40._8_4_ = (int)*psVar4;
              auVar40._12_4_ = (int)*psVar5;
              auVar63._0_4_ = (int)*psVar13;
              auVar63._4_4_ = (int)*psVar14;
              auVar63._8_4_ = (int)*psVar15;
              auVar63._12_4_ = (int)*psVar16;
              auVar51._0_4_ = (int)sVar2;
              auVar51._4_4_ = (int)*psVar10;
              auVar51._8_4_ = (int)*psVar11;
              auVar51._12_4_ = (int)*psVar12;
              auVar57 = NEON_scvtf(auVar58,4);
              auVar39 = NEON_scvtf(auVar40,4);
              auVar62 = NEON_scvtf(auVar63,4);
              auVar50 = NEON_scvtf(auVar51,4);
              puVar20[-3] = auVar39._8_8_;
              puVar20[-4] = auVar39._0_8_;
              puVar20[-1] = auVar57._8_8_;
              puVar20[-2] = auVar57._0_8_;
              puVar20[1] = auVar50._8_8_;
              *puVar20 = auVar50._0_8_;
              puVar20[3] = auVar62._8_8_;
              puVar20[2] = auVar62._0_8_;
              puVar20 = puVar20 + 8;
            } while (uVar32 != 0);
            if (uVar24 != uVar28) {
              uVar27 = uVar28;
              if ((uVar24 & 0xc) == 0) {
                uVar32 = uVar23 + uVar28;
                goto LAB_0065c620;
              }
              goto LAB_0065c704;
            }
          }
        }
        uVar19 = *(ulong *)(param_1 + 0x48);
      }
      uVar23 = uVar23 + 1;
      psVar22 = psVar22 + 1;
      lVar33 = lVar33 + 2;
      if (uVar19 <= uVar23) {
        return;
      }
    } while( true );
  }
  if (*(long *)(param_1 + 0x18) == 1) {
    if (lVar33 == lVar35) {
      FUN_005ee8f4(param_2,lVar33,**(undefined8 **)(*(long *)(param_1 + 0x60) + 8));
      return;
    }
    memset(local_3c50,0xff,0x3c00);
    FUN_005ee8f4(param_2,lVar33,local_3c50);
    if (*(undefined8 **)(param_1 + 0x80) == *(undefined8 **)(param_1 + 0x78)) goto LAB_0065cca4;
    lVar33 = *(long *)(param_1 + 0x60);
    uVar18 = **(undefined8 **)(param_1 + 0x78);
    uVar23 = *(ulong *)(param_1 + 0x10);
    goto LAB_0065cc50;
  }
  memset(local_3c50,0xff,0x3c00);
  pfVar34 = local_3c50;
  if (lVar33 == lVar35) {
    pfVar34 = (float *)**(undefined8 **)(*(long *)(param_1 + 0x60) + 8);
  }
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    if (lVar33 != 0) {
      lVar21 = 0;
      uVar19 = 0;
      do {
        uVar23 = *(ulong *)(param_1 + 0x18);
        if (uVar23 == 0) {
          iVar36 = 0;
        }
        else {
          if (uVar23 < 4) {
            uVar32 = 0;
            iVar36 = 0;
            lVar29 = lVar21;
LAB_0065ca38:
            lVar25 = uVar23 - uVar32;
            psVar22 = (short *)(param_2 + lVar29 * 2);
            do {
              lVar25 = lVar25 + -1;
              iVar36 = iVar36 + *psVar22;
              psVar22 = psVar22 + 1;
            } while (lVar25 != 0);
          }
          else if (uVar23 < 0x10) {
            iVar36 = 0;
            uVar24 = 0;
LAB_0065c9f4:
            iVar45 = 0;
            iVar46 = 0;
            iVar47 = 0;
            uVar32 = uVar23 & 0xfffffffffffffffc;
            lVar29 = lVar21 + uVar32;
            lVar25 = uVar24 - uVar32;
            puVar20 = (undefined8 *)(param_2 + lVar21 * 2 + uVar24 * 2);
            do {
              uVar18 = *puVar20;
              lVar25 = lVar25 + 4;
              iVar36 = iVar36 + (short)uVar18;
              iVar45 = iVar45 + (short)((ulong)uVar18 >> 0x10);
              iVar46 = iVar46 + (short)((ulong)uVar18 >> 0x20);
              iVar47 = iVar47 + (short)((ulong)uVar18 >> 0x30);
              puVar20 = puVar20 + 1;
            } while (lVar25 != 0);
            iVar36 = iVar36 + iVar45 + iVar46 + iVar47;
            if (uVar23 != uVar32) goto LAB_0065ca38;
          }
          else {
            iVar36 = 0;
            iVar45 = 0;
            iVar46 = 0;
            iVar47 = 0;
            iVar48 = 0;
            iVar53 = 0;
            iVar54 = 0;
            iVar55 = 0;
            puVar20 = (undefined8 *)(param_2 + 0x10 + lVar21 * 2);
            uVar32 = uVar23 & 0xfffffffffffffff0;
            uVar24 = uVar23 & 0xfffffffffffffff0;
            auVar39 = ZEXT816(0);
            auVar50 = ZEXT816(0);
            do {
              uVar66 = puVar20[-1];
              uVar18 = puVar20[-2];
              uVar68 = puVar20[1];
              uVar67 = *puVar20;
              uVar24 = uVar24 - 0x10;
              puVar20 = puVar20 + 4;
              auVar59._0_4_ = auVar39._0_4_ + (int)(short)uVar66;
              auVar59._4_4_ = auVar39._4_4_ + (int)(short)((ulong)uVar66 >> 0x10);
              auVar59._8_4_ = auVar39._8_4_ + (int)(short)((ulong)uVar66 >> 0x20);
              auVar59._12_4_ = auVar39._12_4_ + (int)(short)((ulong)uVar66 >> 0x30);
              iVar48 = iVar48 + (short)uVar18;
              iVar53 = iVar53 + (short)((ulong)uVar18 >> 0x10);
              iVar54 = iVar54 + (short)((ulong)uVar18 >> 0x20);
              iVar55 = iVar55 + (short)((ulong)uVar18 >> 0x30);
              iVar36 = iVar36 + (short)uVar68;
              iVar45 = iVar45 + (short)((ulong)uVar68 >> 0x10);
              iVar46 = iVar46 + (short)((ulong)uVar68 >> 0x20);
              iVar47 = iVar47 + (short)((ulong)uVar68 >> 0x30);
              auVar64._0_4_ = auVar50._0_4_ + (int)(short)uVar67;
              auVar64._4_4_ = auVar50._4_4_ + (int)(short)((ulong)uVar67 >> 0x10);
              auVar64._8_4_ = auVar50._8_4_ + (int)(short)((ulong)uVar67 >> 0x20);
              auVar64._12_4_ = auVar50._12_4_ + (int)(short)((ulong)uVar67 >> 0x30);
              auVar39 = auVar59;
              auVar50 = auVar64;
            } while (uVar24 != 0);
            iVar36 = auVar64._0_4_ + iVar48 + iVar36 + auVar59._0_4_ +
                     auVar64._4_4_ + iVar53 + iVar45 + auVar59._4_4_ +
                     auVar64._8_4_ + iVar54 + iVar46 + auVar59._8_4_ +
                     auVar64._12_4_ + iVar55 + iVar47 + auVar59._12_4_;
            if (uVar23 != uVar32) {
              uVar24 = uVar32;
              if ((uVar23 & 0xc) == 0) {
                lVar29 = lVar21 + uVar32;
                goto LAB_0065ca38;
              }
              goto LAB_0065c9f4;
            }
          }
          lVar21 = lVar21 + uVar23;
        }
        iVar45 = 0;
        if ((short)uVar23 != 0) {
          iVar45 = iVar36 / (int)(short)uVar23;
        }
        *(float *)((long)pfVar34 + uVar19 * 4) = (float)iVar45;
        uVar19 = uVar19 + 1;
        uVar23 = *(ulong *)(param_1 + 0x10);
      } while (uVar19 < uVar23);
      goto LAB_0065cc30;
    }
joined_r0x0065cc9c:
    uVar23 = 0;
    if (lVar35 == 0) {
      return;
    }
  }
  else {
    if (lVar33 == 0) goto joined_r0x0065cc9c;
    lVar21 = *(long *)(param_1 + 0xb0);
    uVar19 = 0;
    do {
      *(float *)((long)pfVar34 + uVar19 * 4) = (float)(int)*(short *)(param_2 + lVar21 * 2);
      uVar19 = uVar19 + 1;
      uVar23 = *(ulong *)(param_1 + 0x10);
      lVar21 = *(long *)(param_1 + 0x18) + lVar21;
    } while (uVar19 < uVar23);
LAB_0065cc30:
    if (lVar33 == lVar35) {
      return;
    }
  }
  if (*(undefined8 **)(param_1 + 0x80) == *(undefined8 **)(param_1 + 0x78)) {
LAB_0065cca4:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
              );
  }
  lVar33 = *(long *)(param_1 + 0x60);
  uVar18 = **(undefined8 **)(param_1 + 0x78);
LAB_0065cc50:
  FUN_005ee748(uVar18,pfVar34,uVar23,**(undefined8 **)(lVar33 + 8),*(undefined8 *)(param_1 + 0x20));
  return;
}


// ===== 0065ccb8  FUN_0065ccb8 =====

void FUN_0065ccb8(long param_1,long param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  float fVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined1 (*pauVar9) [16];
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined1 (*pauVar14) [16];
  long lVar15;
  float *pfVar16;
  long lVar17;
  ulong uVar18;
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
  undefined2 uVar30;
  undefined2 uVar31;
  undefined2 uVar32;
  undefined2 uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar39;
  undefined1 auVar40 [16];
  undefined8 uVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float afStack_3c60 [3840];
  
  uVar8 = *(ulong *)(param_1 + 0x48);
  uVar18 = *(ulong *)(param_2 + 8);
  lVar15 = *(long *)(param_1 + 0x20);
  lVar17 = *(long *)(param_1 + 0x38);
  if (uVar8 == 1) {
    memset(afStack_3c60,0xff,0x3c00);
    if (lVar15 == lVar17) {
      pfVar16 = (float *)**(undefined8 **)(*(long *)(param_1 + 0x60) + 8);
    }
    else {
      if (*(undefined8 **)(param_1 + 0x98) == *(undefined8 **)(param_1 + 0x90)) {
LAB_0065d254:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                  );
      }
      pfVar16 = afStack_3c60;
      FUN_005ee748(**(undefined8 **)(param_1 + 0x90),
                   **(undefined8 **)(*(long *)(param_1 + 0x60) + 8),lVar15,afStack_3c60,lVar17);
    }
    uVar8 = *(ulong *)(param_1 + 0x38);
    if (uVar18 == 1) {
      if (uVar8 != 0) {
        auVar23._8_4_ = 0x7fffffff;
        auVar23._0_8_ = 0x7fffffff7fffffff;
        auVar23._12_4_ = 0x7fffffff;
        uVar8 = 0;
        do {
          fVar2 = pfVar16[uVar8];
          auVar35._8_8_ = auVar23._8_8_;
          auVar35._0_8_ = 0x7fffffff7fffffff;
          uVar30 = 0xfe00;
          uVar32 = 0x46ff;
          if (fVar2 == 32767.0 || fVar2 < 32767.0 != NAN(fVar2)) {
            uVar30 = SUB42(fVar2,0);
            uVar32 = (undefined2)((uint)fVar2 >> 0x10);
          }
          uVar31 = 0;
          uVar33 = 0xc700;
          if (-32768.0 <= (float)CONCAT22(uVar32,uVar30)) {
            uVar31 = uVar30;
            uVar33 = uVar32;
          }
          auVar36 = NEON_bsl(auVar35,ZEXT816(0x3f000000),ZEXT416(CONCAT22(uVar33,uVar31)),1);
          *(short *)((long)param_3 + uVar8 * 2) =
               (short)(int)((float)CONCAT22(uVar33,uVar31) + auVar36._0_4_);
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(ulong *)(param_1 + 0x38));
      }
    }
    else if (uVar8 != 0) {
      auVar25._8_4_ = 0x7fffffff;
      auVar25._0_8_ = 0x7fffffff7fffffff;
      auVar25._12_4_ = 0x7fffffff;
      uVar11 = uVar18 & 0xfffffffffffffffc;
      lVar15 = 0;
      uVar6 = 0;
      puVar7 = param_3 + 2;
      uVar10 = uVar18;
      puVar12 = param_3;
      do {
        fVar2 = pfVar16[uVar6];
        uVar30 = 0xfe00;
        uVar32 = 0x46ff;
        if (fVar2 == 32767.0 || fVar2 < 32767.0 != NAN(fVar2)) {
          uVar30 = SUB42(fVar2,0);
          uVar32 = (undefined2)((uint)fVar2 >> 0x10);
        }
        uVar31 = 0;
        uVar33 = 0xc700;
        if (-32768.0 <= (float)CONCAT22(uVar32,uVar30)) {
          uVar31 = uVar30;
          uVar33 = uVar32;
        }
        if (uVar18 != 0) {
          auVar38._8_8_ = auVar25._8_8_;
          auVar38._0_8_ = 0x7fffffff7fffffff;
          auVar36 = NEON_bsl(auVar38,ZEXT816(0x3f000000),ZEXT416(CONCAT22(uVar33,uVar31)),1);
          uVar30 = (undefined2)(int)((float)CONCAT22(uVar33,uVar31) + auVar36._0_4_);
          lVar17 = lVar15;
          if (uVar18 < 4) {
LAB_0065d20c:
            lVar3 = uVar10 - lVar17;
            puVar5 = (undefined2 *)((long)param_3 + lVar17 * 2);
            do {
              lVar3 = lVar3 + -1;
              *puVar5 = uVar30;
              puVar5 = puVar5 + 1;
            } while (lVar3 != 0);
          }
          else if (uVar18 < 0x10) {
            uVar8 = 0;
LAB_0065d1e8:
            lVar17 = lVar15 + uVar11;
            lVar3 = uVar8 - uVar11;
            puVar4 = (undefined8 *)((long)puVar12 + uVar8 * 2);
            do {
              lVar3 = lVar3 + 4;
              *puVar4 = CONCAT26(uVar30,CONCAT24(uVar30,CONCAT22(uVar30,uVar30)));
              puVar4 = puVar4 + 1;
            } while (lVar3 != 0);
            if (uVar18 != uVar11) goto LAB_0065d20c;
          }
          else {
            uVar8 = uVar18 & 0xfffffffffffffff0;
            puVar4 = puVar7;
            do {
              uVar8 = uVar8 - 0x10;
              puVar4[-1] = CONCAT26(uVar30,CONCAT24(uVar30,CONCAT22(uVar30,uVar30)));
              puVar4[-2] = CONCAT26(uVar30,CONCAT24(uVar30,CONCAT22(uVar30,uVar30)));
              puVar4[1] = CONCAT26(uVar30,CONCAT24(uVar30,CONCAT22(uVar30,uVar30)));
              *puVar4 = CONCAT26(uVar30,CONCAT24(uVar30,CONCAT22(uVar30,uVar30)));
              puVar4 = puVar4 + 4;
            } while (uVar8 != 0);
            if (uVar18 != (uVar18 & 0xfffffffffffffff0)) {
              uVar8 = uVar18 & 0xfffffffffffffff0;
              if ((uVar18 & 0xc) == 0) {
                lVar17 = lVar15 + (uVar18 & 0xfffffffffffffff0);
                goto LAB_0065d20c;
              }
              goto LAB_0065d1e8;
            }
          }
          uVar8 = *(ulong *)(param_1 + 0x38);
          lVar15 = uVar18 + lVar15;
        }
        uVar6 = uVar6 + 1;
        puVar7 = (undefined8 *)((long)puVar7 + uVar18 * 2);
        puVar12 = (undefined8 *)((long)puVar12 + uVar18 * 2);
        uVar10 = uVar10 + uVar18;
      } while (uVar6 < uVar8);
    }
  }
  else {
    if (lVar15 == lVar17) {
      if (uVar8 != 0) {
        auVar19._8_4_ = 0xc7000000;
        auVar19._0_8_ = 0xc7000000c7000000;
        auVar19._12_4_ = 0xc7000000;
        auVar22._8_4_ = 0x3f000000;
        auVar22._0_8_ = 0x3f0000003f000000;
        auVar22._12_4_ = 0x3f000000;
        auVar34._8_4_ = 0x46fffe00;
        auVar34._0_8_ = 0x46fffe0046fffe00;
        auVar34._12_4_ = 0x46fffe00;
        uVar6 = 0;
        puVar7 = param_3;
        do {
          uVar10 = *(ulong *)(param_1 + 0x38);
          if (uVar10 != 0) {
            pauVar9 = *(undefined1 (**) [16])(*(long *)(*(long *)(param_1 + 0x60) + 8) + uVar6 * 8);
            uVar8 = uVar6;
            if ((uVar10 < 0x10) || (uVar11 = 0, uVar18 != 1)) {
LAB_0065cd9c:
              uVar11 = 0;
LAB_0065cda0:
              puVar5 = (undefined2 *)((long)param_3 + uVar8 * 2);
              lVar15 = uVar10 - uVar11;
              pfVar16 = (float *)(*pauVar9 + uVar11 * 4);
              do {
                fVar39 = *pfVar16;
                auVar42._8_8_ = 0x7fffffff7fffffff;
                auVar42._0_8_ = 0x7fffffff7fffffff;
                fVar2 = 32767.0;
                if (fVar39 == 32767.0 || fVar39 < 32767.0 != NAN(fVar39)) {
                  fVar2 = fVar39;
                }
                auVar36 = ZEXT816(0xc7000000);
                if (-32768.0 <= fVar2) {
                  auVar36 = ZEXT416((uint)fVar2);
                }
                lVar15 = lVar15 + -1;
                auVar43 = NEON_bsl(auVar42,ZEXT816(0x3f000000),auVar36,1);
                *puVar5 = (short)(int)(auVar36._0_4_ + auVar43._0_4_);
                puVar5 = puVar5 + uVar18;
                pfVar16 = pfVar16 + 1;
              } while (lVar15 != 0);
            }
            else {
              puVar5 = (undefined2 *)((long)param_3 + uVar6 * 2);
              uVar13 = uVar10 - 1;
              if ((puVar5 + uVar13 < puVar5) ||
                 (((long)uVar13 < 0 ||
                  ((undefined1 (*) [16])(pauVar9[-1] + uVar10 * 4 + 0xc) < pauVar9))))
              goto LAB_0065cd9c;
              if (uVar13 >> 0x3e != 0) goto LAB_0065cda0;
              if ((puVar5 < *pauVar9 + uVar10 * 4) &&
                 (pauVar9 < (undefined1 (*) [16])(puVar5 + uVar10))) goto LAB_0065cd9c;
              uVar11 = uVar10 & 0x7ffffffffffffff8;
              uVar13 = uVar10 & 0x7ffffffffffffff8;
              uVar8 = uVar6 + uVar11;
              pauVar14 = pauVar9;
              puVar12 = puVar7;
              do {
                uVar13 = uVar13 - 8;
                auVar43 = NEON_fcmgt(pauVar14[1],auVar34,4);
                auVar36 = NEON_fcmgt(*pauVar14,auVar34,4);
                auVar36 = NEON_bit(*pauVar14,auVar34,auVar36,1);
                auVar43 = NEON_bit(pauVar14[1],auVar34,auVar43,1);
                auVar44 = NEON_fcmgt(auVar19,auVar43,4);
                auVar46 = NEON_fcmgt(auVar19,auVar36,4);
                auVar36 = NEON_bit(auVar36,auVar19,auVar46,1);
                auVar43 = NEON_bit(auVar43,auVar19,auVar44,1);
                auVar45._8_8_ = 0x7fffffff7fffffff;
                auVar45._0_8_ = 0x7fffffff7fffffff;
                auVar47._8_8_ = 0x7fffffff7fffffff;
                auVar47._0_8_ = 0x7fffffff7fffffff;
                auVar44 = NEON_bsl(auVar45,auVar22,auVar43,1);
                auVar46 = NEON_bsl(auVar47,auVar22,auVar36,1);
                auVar40._0_8_ =
                     CONCAT26((short)(int)(auVar36._12_4_ + auVar46._12_4_),
                              CONCAT24((short)(int)(auVar36._8_4_ + auVar46._8_4_),
                                       CONCAT22((short)(int)(auVar36._4_4_ + auVar46._4_4_),
                                                (short)(int)(auVar36._0_4_ + auVar46._0_4_))));
                auVar40._8_2_ = (short)(int)(auVar43._0_4_ + auVar44._0_4_);
                auVar40._10_2_ = (short)(int)(auVar43._4_4_ + auVar44._4_4_);
                auVar40._12_2_ = (short)(int)(auVar43._8_4_ + auVar44._8_4_);
                auVar40._14_2_ = (short)(int)(auVar43._12_4_ + auVar44._12_4_);
                puVar12[1] = auVar40._8_8_;
                *puVar12 = auVar40._0_8_;
                pauVar14 = pauVar14 + 2;
                puVar12 = puVar12 + 2;
              } while (uVar13 != 0);
              if (uVar10 != uVar11) goto LAB_0065cda0;
            }
            uVar8 = *(ulong *)(param_1 + 0x48);
          }
          uVar6 = uVar6 + 1;
          puVar7 = (undefined8 *)((long)puVar7 + 2);
        } while (uVar6 < uVar8);
      }
    }
    else if (uVar8 != 0) {
      uVar6 = 0;
      puVar7 = param_3;
      do {
        memset(afStack_3c60,0xff,0x3c00);
        if ((ulong)(*(long *)(param_1 + 0x98) - *(long *)(param_1 + 0x90) >> 3) <= uVar6)
        goto LAB_0065d254;
        FUN_005ee748(*(undefined8 *)(*(long *)(param_1 + 0x90) + uVar6 * 8),
                     *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x60) + 8) + uVar6 * 8),
                     *(undefined8 *)(param_1 + 0x20),afStack_3c60,*(undefined8 *)(param_1 + 0x38));
        auVar37._8_4_ = 0x3f000000;
        auVar37._0_8_ = 0x3f0000003f000000;
        auVar37._12_4_ = 0x3f000000;
        uVar8 = *(ulong *)(param_1 + 0x38);
        auVar26._8_4_ = 0x7fffffff;
        auVar26._0_8_ = 0x7fffffff7fffffff;
        auVar26._12_4_ = 0x7fffffff;
        auVar46._8_4_ = 0x46fffe00;
        auVar46._0_8_ = 0x46fffe0046fffe00;
        auVar44._8_4_ = 0x46fffe00;
        auVar44._0_8_ = 0x46fffe0046fffe00;
        auVar43._8_4_ = 0x46fffe00;
        auVar43._0_8_ = 0x46fffe0046fffe00;
        auVar36._8_4_ = 0x46fffe00;
        auVar36._0_8_ = 0x46fffe0046fffe00;
        if (uVar8 != 0) {
          uVar11 = 0;
          uVar41 = auVar26._8_8_;
          uVar10 = uVar6;
          if ((7 < uVar8) && (uVar18 == 1)) {
            uVar11 = uVar8 & 0xfffffffffffffff8;
            uVar13 = uVar8 & 0xfffffffffffffff8;
            uVar10 = uVar6 + uVar11;
            pauVar9 = (undefined1 (*) [16])afStack_3c60;
            puVar12 = puVar7;
            do {
              uVar13 = uVar13 - 8;
              auVar36._12_4_ = 0x46fffe00;
              auVar24 = NEON_fcmgt(pauVar9[1],auVar36,4);
              auVar43._12_4_ = 0x46fffe00;
              auVar26 = NEON_fcmgt(*pauVar9,auVar43,4);
              auVar44._12_4_ = 0x46fffe00;
              auVar26 = NEON_bit(*pauVar9,auVar44,auVar26,1);
              auVar46._12_4_ = 0x46fffe00;
              auVar20 = NEON_bit(pauVar9[1],auVar46,auVar24,1);
              auVar24._10_2_ = 0xc700;
              auVar24._0_10_ = (unkuint10)0xc7000000c7000000;
              auVar24._12_2_ = 0;
              auVar24._14_2_ = 0xc700;
              auVar24 = NEON_fcmgt(auVar24,auVar20,4);
              auVar27._10_2_ = 0xc700;
              auVar27._0_10_ = (unkuint10)0xc7000000c7000000;
              auVar27._12_2_ = 0;
              auVar27._14_2_ = 0xc700;
              auVar27 = NEON_fcmgt(auVar27,auVar26,4);
              auVar29._10_2_ = 0xc700;
              auVar29._0_10_ = (unkuint10)0xc7000000c7000000;
              auVar29._12_2_ = 0;
              auVar29._14_2_ = 0xc700;
              auVar26 = NEON_bit(auVar26,auVar29,auVar27,1);
              auVar1._10_2_ = 0xc700;
              auVar1._0_10_ = (unkuint10)0xc7000000c7000000;
              auVar1._12_2_ = 0;
              auVar1._14_2_ = 0xc700;
              auVar24 = NEON_bit(auVar20,auVar1,auVar24,1);
              auVar20._8_8_ = uVar41;
              auVar20._0_8_ = 0x7fffffff7fffffff;
              auVar28._8_8_ = uVar41;
              auVar28._0_8_ = 0x7fffffff7fffffff;
              auVar27 = NEON_bsl(auVar20,auVar37,auVar24,1);
              auVar29 = NEON_bsl(auVar28,auVar37,auVar26,1);
              *(short *)(puVar12 + 2) = (short)(int)(auVar24._0_4_ + auVar27._0_4_);
              *(short *)((long)puVar12 + 0x12) = (short)(int)(auVar24._4_4_ + auVar27._4_4_);
              *(short *)((long)puVar12 + 0x14) = (short)(int)(auVar24._8_4_ + auVar27._8_4_);
              *(short *)((long)puVar12 + 0x16) = (short)(int)(auVar24._12_4_ + auVar27._12_4_);
              *(short *)puVar12 = (short)(int)(auVar26._0_4_ + auVar29._0_4_);
              *(short *)((long)puVar12 + 2) = (short)(int)(auVar26._4_4_ + auVar29._4_4_);
              *(short *)((long)puVar12 + 4) = (short)(int)(auVar26._8_4_ + auVar29._8_4_);
              *(short *)((long)puVar12 + 6) = (short)(int)(auVar26._12_4_ + auVar29._12_4_);
              pauVar9 = pauVar9 + 2;
              puVar12 = puVar12 + 2;
            } while (uVar13 != 0);
            if (uVar8 == uVar11) goto LAB_0065cf74;
          }
          puVar5 = (undefined2 *)((long)param_3 + uVar10 * 2);
          lVar15 = uVar8 - uVar11;
          pfVar16 = afStack_3c60 + uVar11;
          do {
            fVar39 = *pfVar16;
            auVar21._8_8_ = uVar41;
            auVar21._0_8_ = 0x7fffffff7fffffff;
            fVar2 = 32767.0;
            if (fVar39 == 32767.0 || fVar39 < 32767.0 != NAN(fVar39)) {
              fVar2 = fVar39;
            }
            auVar36 = ZEXT816(0xc7000000);
            if (-32768.0 <= fVar2) {
              auVar36 = ZEXT416((uint)fVar2);
            }
            lVar15 = lVar15 + -1;
            auVar43 = NEON_bsl(auVar21,ZEXT816(0x3f000000),auVar36,1);
            *puVar5 = (short)(int)(auVar36._0_4_ + auVar43._0_4_);
            puVar5 = puVar5 + uVar18;
            pfVar16 = pfVar16 + 1;
          } while (lVar15 != 0);
        }
LAB_0065cf74:
        uVar8 = *(ulong *)(param_1 + 0x48);
        uVar6 = uVar6 + 1;
        puVar7 = (undefined8 *)((long)puVar7 + 2);
      } while (uVar6 < uVar8);
    }
    if (uVar8 < uVar18) {
      uVar6 = *(ulong *)(param_1 + 0x38);
      lVar15 = uVar8 << 1;
      do {
        if (uVar6 != 0) {
          lVar17 = *(long *)(param_1 + 0x48);
          uVar10 = 0;
          puVar7 = param_3;
          do {
            uVar10 = uVar10 + 1;
            *(undefined2 *)((long)puVar7 + lVar15) = *(undefined2 *)((long)puVar7 + lVar17 * 2);
            puVar7 = (undefined8 *)((long)puVar7 + uVar18 * 2);
            uVar6 = *(ulong *)(param_1 + 0x38);
          } while (uVar10 < uVar6);
        }
        uVar8 = uVar8 + 1;
        lVar15 = lVar15 + 2;
      } while (uVar8 != uVar18);
    }
  }
  return;
}


// ===== 0065d268  FUN_0065d268 =====

void FUN_0065d268(long param_1)

{
  FUN_0065d794(*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x60),
               *(undefined8 *)(param_1 + 0x68));
  return;
}


// ===== 0065d27c  FUN_0065d27c =====

void FUN_0065d27c(long param_1)

{
  FUN_0065d9d4(*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x68),
               *(undefined8 *)(param_1 + 0x60));
  return;
}


// ===== 0065d290  FUN_0065d290 =====

void FUN_0065d290(long param_1,long param_2,long param_3)

{
  float fVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined1 auVar10 [16];
  
  uVar3 = *(ulong *)(param_1 + 0x50);
  if (uVar3 != 0) {
    uVar2 = 0;
    do {
      lVar4 = *(long *)(param_1 + 0x68);
      if (lVar4 == 0) {
        lVar4 = *(long *)(param_1 + 0x60);
        lVar5 = *(long *)(param_1 + 0x58);
      }
      else {
        lVar5 = *(long *)(param_1 + 0x58);
      }
      if (lVar5 != 0) {
        uVar3 = 0;
        lVar4 = *(long *)(*(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 0x38) * param_2 * 8 +
                         uVar2 * 8);
        do {
          fVar1 = *(float *)(lVar4 + uVar3 * 4);
          auVar10._8_8_ = 0x7fffffff7fffffff;
          auVar10._0_8_ = 0x7fffffff7fffffff;
          uVar6 = 0xfe00;
          uVar8 = 0x46ff;
          if (fVar1 == 32767.0 || fVar1 < 32767.0 != NAN(fVar1)) {
            uVar6 = SUB42(fVar1,0);
            uVar8 = (undefined2)((uint)fVar1 >> 0x10);
          }
          uVar7 = 0;
          uVar9 = 0xc700;
          if (-32768.0 <= (float)CONCAT22(uVar8,uVar6)) {
            uVar7 = uVar6;
            uVar9 = uVar8;
          }
          auVar10 = NEON_bsl(auVar10,ZEXT816(0x3f000000),ZEXT416(CONCAT22(uVar9,uVar7)),1);
          *(short *)(*(long *)(param_3 + uVar2 * 8) + uVar3 * 2) =
               (short)(int)((float)CONCAT22(uVar9,uVar7) + auVar10._0_4_);
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(ulong *)(param_1 + 0x58));
        uVar3 = *(ulong *)(param_1 + 0x50);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return;
}


// ===== 0065d348  FUN_0065d348 =====

undefined8 * FUN_0065d348(long *param_1,undefined8 *param_2)

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
    FUN_005ee540();
LAB_0065d43c:
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
    if (uVar6 >> 0x3d != 0) goto LAB_0065d43c;
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


// ===== 0065d440  FUN_0065d440 =====

void FUN_0065d440(undefined8 param_1,undefined8 *param_2)

{
  void *pvVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    FUN_00629980(param_2 + 0xb);
    FUN_00629980(param_2 + 8);
    pvVar1 = (void *)param_2[2];
    param_2[2] = 0;
    if (pvVar1 != (void *)0x0) {
      operator_delete__(pvVar1);
    }
    pvVar1 = (void *)param_2[1];
    param_2[1] = 0;
    if (pvVar1 != (void *)0x0) {
      operator_delete__(pvVar1);
    }
    pvVar1 = (void *)*param_2;
    *param_2 = 0;
    if (pvVar1 != (void *)0x0) {
      operator_delete__(pvVar1);
    }
    operator_delete(param_2);
    return;
  }
  return;
}


// ===== 0065d4b8  FUN_0065d4b8 =====

void FUN_0065d4b8(ulong *param_1,ulong param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  long lVar5;
  void *pvVar6;
  ulong uVar7;
  ulong uVar8;
  void *pvVar9;
  
  *param_1 = param_3;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_2 != 0) && (param_3 == 2)) {
    if (0x2aaaaaaaaaaaaaa < param_2) {
      FUN_0065dc48();
      goto LAB_0065d670;
    }
    puVar3 = (undefined8 *)operator_new(param_2 * 0x60);
    puVar2 = puVar3 + param_2 * 0xc;
    param_1[1] = (ulong)puVar3;
    param_1[2] = (ulong)puVar3;
    param_1[3] = (ulong)puVar2;
    for (uVar7 = param_2 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      if (puVar3 == (undefined8 *)0x0) goto LAB_0065d638;
      puVar3[5] = 0;
      puVar3[4] = 0;
      puVar3[7] = 0;
      puVar3[6] = 0;
      puVar3[9] = 0;
      puVar3[8] = 0;
      puVar3[0xb] = 0;
      puVar3[10] = 0;
      puVar3[1] = 0;
      *puVar3 = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
      puVar3 = puVar3 + 0xc;
    }
    if (2 < (param_2 - 1 & 0x7ffffffffffffff)) {
      do {
        if (puVar3 == (undefined8 *)0x0) goto LAB_0065d638;
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
        if (puVar3 + 0xc == (undefined8 *)0x0) goto LAB_0065d638;
        puVar3[0xd] = 0;
        puVar3[0xc] = 0;
        puVar3[0xf] = 0;
        puVar3[0xe] = 0;
        puVar3[0x11] = 0;
        puVar3[0x10] = 0;
        puVar3[0x13] = 0;
        puVar3[0x12] = 0;
        puVar3[0x15] = 0;
        puVar3[0x14] = 0;
        puVar3[0x17] = 0;
        puVar3[0x16] = 0;
        if (puVar3 + 0x18 == (undefined8 *)0x0) goto LAB_0065d638;
        puVar3[0x19] = 0;
        puVar3[0x18] = 0;
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
        if (puVar3 + 0x24 == (undefined8 *)0x0) goto LAB_0065d638;
        puVar1 = puVar3 + 0x30;
        puVar3[0x25] = 0;
        puVar3[0x24] = 0;
        puVar3[0x27] = 0;
        puVar3[0x26] = 0;
        puVar3[0x29] = 0;
        puVar3[0x28] = 0;
        puVar3[0x2b] = 0;
        puVar3[0x2a] = 0;
        puVar3[0x2d] = 0;
        puVar3[0x2c] = 0;
        puVar3[0x2f] = 0;
        puVar3[0x2e] = 0;
        puVar3 = puVar1;
      } while (puVar1 != puVar2);
    }
    param_1[2] = (ulong)puVar2;
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  if ((param_2 != 0) && (param_3 == 3)) {
    if (0x369d0369d0369d < param_2) {
LAB_0065d670:
      lVar5 = FUN_0065dc60();
      pvVar4 = *(void **)(lVar5 + 0x20);
      if (pvVar4 != (void *)0x0) {
        pvVar9 = *(void **)(lVar5 + 0x28);
        pvVar6 = pvVar4;
        if (pvVar4 != pvVar9) {
          do {
            pvVar9 = (void *)((long)pvVar9 + -0x4b0);
            if (pvVar9 == (void *)0x0) goto LAB_0065d74c;
            FUN_0065e3bc(pvVar9);
          } while (pvVar9 != pvVar4);
          pvVar6 = *(void **)(lVar5 + 0x20);
        }
        *(void **)(lVar5 + 0x28) = pvVar4;
        operator_delete(pvVar6);
      }
      pvVar4 = *(void **)(lVar5 + 8);
      if (pvVar4 == (void *)0x0) {
        return;
      }
      pvVar9 = *(void **)(lVar5 + 0x10);
      uVar7 = (ulong)(((long)pvVar4 - (long)pvVar9) * 0x555555555555555) >> 5;
      uVar8 = (long)pvVar9 * -0x555555555555555 - 0x20U >> 5;
      if (uVar8 <= uVar7) {
        uVar7 = uVar8;
      }
      if ((1 < uVar7) && ((((int)pvVar4 - (int)pvVar9 | -(int)pvVar9) & 0x1fU) == 0)) {
        uVar7 = uVar7 & 0x7fffffffffffffe;
        pvVar9 = (void *)((long)pvVar9 + uVar7 * -0x60);
        do {
          uVar7 = uVar7 - 2;
        } while (uVar7 != 0);
      }
      do {
        if (pvVar9 == pvVar4) {
          *(void **)(lVar5 + 0x10) = pvVar4;
          operator_delete(pvVar4);
          return;
        }
        pvVar9 = (void *)((long)pvVar9 + -0x60);
      } while (pvVar9 != (void *)0x0);
LAB_0065d74c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    param_2 = param_2 * 0x4b0;
    pvVar4 = operator_new(param_2);
    pvVar9 = (void *)((long)pvVar4 + param_2);
    param_1[4] = (ulong)pvVar4;
    param_1[5] = (ulong)pvVar4;
    param_1[6] = (ulong)pvVar9;
    do {
      if (pvVar4 == (void *)0x0) {
LAB_0065d638:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      FUN_0065e3ac(pvVar4);
      param_2 = param_2 - 0x4b0;
      pvVar4 = (void *)((long)pvVar4 + 0x4b0);
    } while (param_2 != 0);
    param_3 = *param_1;
    param_1[5] = (ulong)pvVar9;
  }
  if ((param_3 & 0xfffffffffffffffe) == 2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../modules/audio_processing/splitting_filter.cc",0x25,
               "num_bands_ == 2 || num_bands_ == 3",&DAT_001f5fa0);
}


// ===== 0065d674  FUN_0065d674 =====

void FUN_0065d674(long param_1)

{
  void *pvVar1;
  ulong uVar2;
  ulong uVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar5 = *(void **)(param_1 + 0x20);
  if (pvVar5 != (void *)0x0) {
    pvVar4 = *(void **)(param_1 + 0x28);
    pvVar1 = pvVar5;
    if (pvVar5 != pvVar4) {
      do {
        pvVar4 = (void *)((long)pvVar4 + -0x4b0);
        if (pvVar4 == (void *)0x0) goto LAB_0065d74c;
        FUN_0065e3bc(pvVar4);
      } while (pvVar4 != pvVar5);
      pvVar1 = *(void **)(param_1 + 0x20);
    }
    *(void **)(param_1 + 0x28) = pvVar5;
    operator_delete(pvVar1);
  }
  pvVar5 = *(void **)(param_1 + 8);
  if (pvVar5 == (void *)0x0) {
    return;
  }
  pvVar4 = *(void **)(param_1 + 0x10);
  uVar2 = (ulong)(((long)pvVar5 - (long)pvVar4) * 0x555555555555555) >> 5;
  uVar3 = (long)pvVar4 * -0x555555555555555 - 0x20U >> 5;
  if (uVar3 <= uVar2) {
    uVar2 = uVar3;
  }
  if ((1 < uVar2) && ((((int)pvVar5 - (int)pvVar4 | -(int)pvVar4) & 0x1fU) == 0)) {
    uVar2 = uVar2 & 0x7fffffffffffffe;
    pvVar4 = (void *)((long)pvVar4 + uVar2 * -0x60);
    do {
      uVar2 = uVar2 - 2;
    } while (uVar2 != 0);
  }
  do {
    if (pvVar4 == pvVar5) {
      *(void **)(param_1 + 0x10) = pvVar5;
      operator_delete(pvVar5);
      return;
    }
    pvVar4 = (void *)((long)pvVar4 + -0x60);
  } while (pvVar4 != (void *)0x0);
LAB_0065d74c:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0065d794  FUN_0065d794 =====

void FUN_0065d794(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_560 [640];
  undefined1 auStack_2e0 [640];
  
  if (*(long *)(param_3 + 0x38) != 3) {
    if ((*(long *)(param_3 + 0x38) == 2) &&
       (lVar3 = *(long *)(param_1 + 8), *(long *)(param_1 + 0x10) != lVar3)) {
      lVar1 = 0;
      uVar2 = 0;
      do {
        memset(auStack_560,0xff,0x500);
        FUN_0065dc78(*(undefined8 *)(*(long *)(param_2 + 8) + uVar2 * 8),
                     *(undefined8 *)(param_2 + 0x18),auStack_560,auStack_2e0,lVar3 + lVar1,
                     lVar3 + lVar1 + 0x18);
        memcpy(*(void **)(*(long *)(param_3 + 8) + uVar2 * 8),auStack_560,0x280);
        memcpy(*(void **)(*(long *)(param_3 + 8) + *(long *)(param_3 + 0x28) * 8 + uVar2 * 8),
               auStack_2e0,0x280);
        lVar3 = *(long *)(param_1 + 8);
        uVar2 = uVar2 + 1;
        lVar1 = lVar1 + 0x60;
      } while (uVar2 < (ulong)((*(long *)(param_1 + 0x10) - lVar3 >> 5) * -0x5555555555555555));
    }
    return;
  }
  FUN_0065d8cc(param_1,param_2,param_3);
  return;
}


// ===== 0065d8cc  FUN_0065d8cc =====

void FUN_0065d8cc(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  lVar6 = *(long *)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != lVar6) {
    lVar7 = 0;
    lVar8 = 0;
    lVar9 = 0;
    uVar10 = 0;
    do {
      plVar4 = *(long **)(param_2 + 0x58);
      if ((*(long **)(param_2 + 0x60) == plVar4) ||
         ((ulong)((*(long *)(param_3 + 0x48) - *(long *)(param_3 + 0x40) >> 3) * -0x5555555555555555
                 ) <= uVar10)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                  );
      }
      plVar1 = (long *)(*(long *)(param_3 + 0x40) + lVar8);
      lVar5 = *plVar1;
      lVar2 = 0;
      if (plVar4[1] != *plVar4) {
        lVar2 = *plVar4;
      }
      lVar3 = 0;
      if (plVar1[1] != lVar5) {
        lVar3 = lVar5;
      }
      FUN_0065e3c4(lVar6 + lVar7,*(undefined8 *)(lVar2 + lVar9),lVar3);
      lVar6 = *(long *)(param_1 + 0x20);
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 0x10;
      lVar8 = lVar8 + 0x18;
      lVar7 = lVar7 + 0x4b0;
    } while (uVar10 < (ulong)((*(long *)(param_1 + 0x28) - lVar6 >> 4) * 0x2fc962fc962fc963));
  }
  return;
}


// ===== 0065d9d4  FUN_0065d9d4 =====

void FUN_0065d9d4(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_560 [640];
  undefined1 auStack_2e0 [640];
  
  if (*(long *)(param_2 + 0x38) == 3) {
    FUN_0065db24(param_1,param_2,param_3);
    return;
  }
  if ((*(long *)(param_2 + 0x38) == 2) && (*(long *)(param_3 + 0x30) != 0)) {
    uVar2 = 0;
    lVar3 = 0x48;
    do {
      memset(auStack_560,0xff,0x500);
      puVar1 = (undefined8 *)(*(long *)(param_2 + 8) + uVar2 * 8);
      memcpy(auStack_560,(void *)*puVar1,0x280);
      memcpy(auStack_2e0,(void *)puVar1[*(long *)(param_2 + 0x28)],0x280);
      if ((ulong)((*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 5) * -0x5555555555555555)
          <= uVar2) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                  );
      }
      FUN_0065e078(auStack_560,auStack_2e0,*(undefined8 *)(param_2 + 0x20),
                   *(undefined8 *)(*(long *)(param_3 + 8) + uVar2 * 8),
                   *(long *)(param_1 + 8) + lVar3 + -0x18);
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 0x60;
    } while (uVar2 < *(ulong *)(param_3 + 0x30));
  }
  return;
}


// ===== 0065db24  FUN_0065db24 =====

void FUN_0065db24(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  if (*(long *)(param_3 + 0x30) != 0) {
    lVar5 = 0;
    lVar6 = 0;
    lVar7 = 0;
    uVar8 = 0;
    do {
      if ((ulong)((*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20) >> 4) * 0x2fc962fc962fc963)
          <= uVar8) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                  );
      }
      if (((ulong)((*(long *)(param_2 + 0x48) - *(long *)(param_2 + 0x40) >> 3) *
                  -0x5555555555555555) <= uVar8) ||
         (plVar3 = *(long **)(param_3 + 0x58), *(long **)(param_3 + 0x60) == plVar3)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                  );
      }
      plVar1 = (long *)(*(long *)(param_2 + 0x40) + lVar7);
      lVar4 = *plVar1;
      lVar2 = 0;
      if (plVar1[1] != lVar4) {
        lVar2 = lVar4;
      }
      lVar4 = 0;
      if (plVar3[1] != *plVar3) {
        lVar4 = *plVar3;
      }
      FUN_0065eda0(*(long *)(param_1 + 0x20) + lVar5,lVar2,*(undefined8 *)(lVar4 + lVar6));
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0x18;
      lVar6 = lVar6 + 0x10;
      lVar5 = lVar5 + 0x4b0;
    } while (uVar8 < *(ulong *)(param_3 + 0x30));
  }
  return;
}


// ===== 0065dc48  FUN_0065dc48 =====

void FUN_0065dc48(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 0065dc60  FUN_0065dc60 =====

void FUN_0065dc60(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 0065dc78  FUN_0065dc78 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0065dc78(long param_1,ulong param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined4 *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  float *pfVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  float *pfVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  float fStack_1460;
  undefined1 auStack_145c [4];
  undefined8 auStack_1458 [159];
  float fStack_f60;
  undefined1 auStack_f5c [4];
  undefined8 auStack_f58 [159];
  undefined8 local_a60 [160];
  undefined8 local_560 [160];
  
  memset(local_560,0xff,0x500);
  memset(local_a60,0xff,0x500);
  uVar14 = param_2 >> 1;
  if (uVar14 == 0) {
    memset(auStack_f5c,0xff,0x4fc);
    memset(auStack_145c,0xff,0x4fc);
    FUN_0065df44(local_560,0,&fStack_f60,&DAT_001fed98,param_5);
    FUN_0065df44(local_a60,0,&fStack_1460,&DAT_001feda4,param_6);
  }
  else {
    uVar3 = uVar14 - 1;
    if (0x13f < uVar3) {
      uVar3 = 0x140;
    }
    uVar3 = uVar3 + 1;
    if (param_2 < 0x12) {
      lVar7 = 0;
      uVar4 = 0;
    }
    else {
      uVar4 = 8;
      if ((uVar3 & 7) != 0) {
        uVar4 = uVar3 & 7;
      }
      uVar4 = uVar3 - uVar4;
      puVar10 = local_560 + 2;
      puVar11 = local_a60 + 2;
      lVar7 = uVar4 * 2;
      puVar8 = (undefined4 *)(param_1 + 0x20);
      uVar13 = uVar4;
      do {
        uVar24 = *puVar8;
        uVar33 = puVar8[1];
        uVar27 = puVar8[2];
        uVar34 = puVar8[3];
        uVar29 = puVar8[4];
        uVar35 = puVar8[5];
        uVar31 = puVar8[6];
        uVar36 = puVar8[7];
        uVar13 = uVar13 - 8;
        uVar17 = puVar8[-8];
        uVar16 = puVar8[-7];
        uVar15 = puVar8[-6];
        uVar19 = puVar8[-5];
        uVar20 = puVar8[-3];
        uVar22 = puVar8[-1];
        puVar11[-1] = CONCAT44(puVar8[-2],puVar8[-4]);
        puVar11[-2] = CONCAT44(uVar15,uVar17);
        puVar11[1] = CONCAT44(uVar31,uVar29);
        *puVar11 = CONCAT44(uVar27,uVar24);
        puVar11 = puVar11 + 4;
        puVar10[-1] = CONCAT44(uVar22,uVar20);
        puVar10[-2] = CONCAT44(uVar19,uVar16);
        puVar10[1] = CONCAT44(uVar36,uVar35);
        *puVar10 = CONCAT44(uVar34,uVar33);
        puVar10 = puVar10 + 4;
        puVar8 = puVar8 + 0x10;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined4 *)(param_1 + lVar7 * 4 + 4);
    do {
      if (uVar4 == 0x140) goto LAB_0065df40;
      puVar1 = puVar8 + -1;
      uVar17 = *puVar8;
      puVar8 = puVar8 + 2;
      *(undefined4 *)((long)local_a60 + uVar4 * 4) = *puVar1;
      *(undefined4 *)((long)local_560 + uVar4 * 4) = uVar17;
      uVar4 = uVar4 + 1;
    } while (uVar14 != uVar4);
    memset(auStack_f5c,0xff,0x4fc);
    memset(auStack_145c,0xff,0x4fc);
    FUN_0065df44(local_560,uVar14,&fStack_f60,&DAT_001fed98,param_5);
    FUN_0065df44(local_a60,uVar14,&fStack_1460,&DAT_001feda4,param_6);
    lVar7 = 0;
    if ((9 < param_2) && (0xf < (ulong)((long)param_4 - (long)param_3))) {
      uVar4 = 4;
      if ((uVar3 & 3) != 0) {
        uVar4 = uVar3 & 3;
      }
      lVar7 = uVar3 - uVar4;
      pfVar5 = &fStack_1460;
      pfVar9 = &fStack_f60;
      puVar10 = param_3;
      puVar11 = param_4;
      lVar6 = lVar7;
      do {
        lVar6 = lVar6 + -4;
        fVar18 = (float)*(undefined8 *)pfVar9;
        fVar25 = (float)*(undefined8 *)pfVar5;
        fVar26 = (float)((ulong)*(undefined8 *)pfVar9 >> 0x20);
        fVar28 = (float)((ulong)*(undefined8 *)pfVar5 >> 0x20);
        fVar21 = (float)*(undefined8 *)(pfVar9 + 2);
        fVar30 = (float)*(undefined8 *)((long)pfVar5 + 8);
        fVar23 = (float)((ulong)*(undefined8 *)(pfVar9 + 2) >> 0x20);
        fVar32 = (float)((ulong)*(undefined8 *)((long)pfVar5 + 8) >> 0x20);
        puVar10[1] = CONCAT44((fVar23 + fVar32) * 0.5,(fVar21 + fVar30) * 0.5);
        *puVar10 = CONCAT44((fVar26 + fVar28) * 0.5,(fVar18 + fVar25) * 0.5);
        puVar11[1] = CONCAT44((fVar23 - fVar32) * 0.5,(fVar21 - fVar30) * 0.5);
        *puVar11 = CONCAT44((fVar26 - fVar28) * 0.5,(fVar18 - fVar25) * 0.5);
        pfVar5 = (float *)((long)pfVar5 + 0x10);
        pfVar9 = pfVar9 + 4;
        puVar10 = puVar10 + 2;
        puVar11 = puVar11 + 2;
      } while (lVar6 != 0);
    }
    lVar12 = lVar7 * 4;
    lVar6 = 0;
    do {
      if (0x140 - lVar7 == lVar6) {
LAB_0065df40:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(0x5512,0x65df44);
        (*pcVar2)();
      }
      fVar18 = *(float *)((long)auStack_f58 + lVar6 * 4 + lVar12 + -8);
      fVar26 = *(float *)((long)auStack_1458 + lVar6 * 4 + lVar12 + -8);
      *(float *)((long)param_3 + lVar6 * 4 + lVar12) = (fVar18 + fVar26) * 0.5;
      *(float *)((long)param_4 + lVar6 * 4 + lVar12) = (fVar18 - fVar26) * 0.5;
      lVar6 = lVar6 + 1;
    } while (uVar14 - lVar7 != lVar6);
  }
  return;
}


// ===== 0065df44  FUN_0065df44 =====

void FUN_0065df44(float *param_1,ulong param_2,float *param_3,float *param_4,float *param_5)

{
  float *pfVar1;
  float *pfVar2;
  long lVar3;
  float *pfVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = *param_5 + (*param_1 - param_5[1]) * *param_4;
  *param_3 = fVar6;
  if (1 < param_2) {
    pfVar2 = param_1 + 1;
    lVar3 = param_2 - 1;
    pfVar4 = param_3 + 1;
    do {
      pfVar1 = pfVar2 + -1;
      fVar7 = *pfVar2;
      lVar3 = lVar3 + -1;
      pfVar2 = pfVar2 + 1;
      fVar6 = *pfVar1 + (fVar7 - fVar6) * *param_4;
      *pfVar4 = fVar6;
      pfVar4 = pfVar4 + 1;
    } while (lVar3 != 0);
  }
  lVar3 = param_2 - 1;
  *param_5 = param_1[lVar3];
  param_5[1] = param_3[lVar3];
  fVar6 = param_5[2] + (*param_3 - param_5[3]) * param_4[1];
  *param_1 = fVar6;
  if (1 < param_2) {
    pfVar2 = param_3 + 1;
    lVar5 = param_2 - 1;
    pfVar4 = param_1 + 1;
    do {
      pfVar1 = pfVar2 + -1;
      fVar7 = *pfVar2;
      lVar5 = lVar5 + -1;
      pfVar2 = pfVar2 + 1;
      fVar6 = *pfVar1 + (fVar7 - fVar6) * param_4[1];
      *pfVar4 = fVar6;
      pfVar4 = pfVar4 + 1;
    } while (lVar5 != 0);
  }
  param_5[2] = param_3[lVar3];
  param_5[3] = param_1[lVar3];
  fVar6 = param_5[4] + (*param_1 - param_5[5]) * param_4[2];
  *param_3 = fVar6;
  if (1 < param_2) {
    pfVar2 = param_1 + 1;
    pfVar4 = param_3 + 1;
    lVar5 = lVar3;
    do {
      pfVar1 = pfVar2 + -1;
      fVar7 = *pfVar2;
      lVar5 = lVar5 + -1;
      pfVar2 = pfVar2 + 1;
      fVar6 = *pfVar1 + (fVar7 - fVar6) * param_4[2];
      *pfVar4 = fVar6;
      pfVar4 = pfVar4 + 1;
    } while (lVar5 != 0);
  }
  param_5[4] = param_1[lVar3];
  param_5[5] = param_3[lVar3];
  return;
}


// ===== 0065e078  FUN_0065e078 =====

void FUN_0065e078(long param_1,long param_2,ulong param_3,undefined4 *param_4,undefined8 param_5,
                 undefined8 param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  code *pcVar11;
  ulong uVar12;
  long lVar13;
  float *pfVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined1 (*pauVar17) [16];
  undefined1 (*pauVar18) [16];
  float *pfVar19;
  ulong uVar20;
  float *pfVar21;
  undefined4 *puVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float local_1460;
  undefined1 auStack_145c [1276];
  float local_f60;
  undefined1 auStack_f5c [1276];
  float local_a60 [2];
  undefined8 auStack_a58 [159];
  float local_560 [320];
  
  memset(local_560,0xff,0x500);
  memset(local_a60,0xff,0x500);
  if (param_3 == 0) {
    memset(auStack_f5c,0xff,0x4fc);
    memset(auStack_145c,0xff,0x4fc);
    FUN_0065df44(local_560,0,&local_f60,&DAT_001feda4,param_5);
    FUN_0065df44(local_a60,0,&local_1460,&DAT_001fed98,param_6);
  }
  else {
    uVar12 = param_3 - 1;
    if (0x13f < uVar12) {
      uVar12 = 0x140;
    }
    uVar12 = uVar12 + 1;
    if (param_3 < 9) {
      lVar13 = 0;
    }
    else {
      uVar20 = 8;
      if ((uVar12 & 7) != 0) {
        uVar20 = uVar12 & 7;
      }
      pfVar14 = local_560 + 4;
      lVar13 = uVar12 - uVar20;
      puVar15 = auStack_a58 + 1;
      pfVar19 = (float *)(param_2 + 0x10);
      pfVar21 = (float *)(param_1 + 0x10);
      lVar16 = lVar13;
      do {
        fVar26 = (float)*(undefined8 *)(pfVar19 + -2);
        fVar27 = (float)((ulong)*(undefined8 *)(pfVar19 + -2) >> 0x20);
        fVar23 = (float)*(undefined8 *)(pfVar19 + -4);
        fVar25 = (float)((ulong)*(undefined8 *)(pfVar19 + -4) >> 0x20);
        fVar24 = *pfVar19;
        fVar29 = pfVar19[1];
        fVar34 = pfVar19[2];
        fVar33 = pfVar19[3];
        lVar16 = lVar16 + -8;
        fVar31 = (float)*(undefined8 *)(pfVar21 + -2);
        fVar32 = (float)((ulong)*(undefined8 *)(pfVar21 + -2) >> 0x20);
        fVar28 = (float)*(undefined8 *)(pfVar21 + -4);
        fVar30 = (float)((ulong)*(undefined8 *)(pfVar21 + -4) >> 0x20);
        fVar7 = *pfVar21;
        fVar8 = pfVar21[1];
        fVar9 = pfVar21[2];
        fVar10 = pfVar21[3];
        pfVar19 = pfVar19 + 8;
        pfVar21 = pfVar21 + 8;
        *pfVar14 = fVar31 + fVar26;
        pfVar14[1] = fVar32 + fVar27;
        pfVar14[-4] = fVar28 + fVar23;
        pfVar14[-3] = fVar30 + fVar25;
        pfVar14[4] = fVar9 + fVar34;
        pfVar14[5] = fVar10 + fVar33;
        *pfVar14 = fVar7 + fVar24;
        pfVar14[1] = fVar8 + fVar29;
        pfVar14 = pfVar14 + 8;
        puVar15[-1] = CONCAT44(fVar32 - fVar27,fVar31 - fVar26);
        puVar15[-2] = CONCAT44(fVar30 - fVar25,fVar28 - fVar23);
        puVar15[1] = CONCAT44(fVar10 - fVar33,fVar9 - fVar34);
        *puVar15 = CONCAT44(fVar8 - fVar29,fVar7 - fVar24);
        puVar15 = puVar15 + 4;
      } while (lVar16 != 0);
    }
    lVar16 = 0;
    do {
      if (0x140 - lVar13 == lVar16) goto LAB_0065e3a8;
      fVar24 = *(float *)(param_1 + lVar13 * 4 + lVar16 * 4);
      fVar29 = *(float *)(param_2 + lVar13 * 4 + lVar16 * 4);
      local_560[lVar13 + lVar16] = fVar24 + fVar29;
      local_a60[lVar13 + lVar16] = fVar24 - fVar29;
      lVar16 = lVar16 + 1;
    } while (param_3 - lVar13 != lVar16);
    memset(auStack_f5c,0xff,0x4fc);
    memset(auStack_145c,0xff,0x4fc);
    FUN_0065df44(local_560,param_3,&local_f60,&DAT_001feda4,param_5);
    FUN_0065df44(local_a60,param_3,&local_1460,&DAT_001fed98,param_6);
    if (param_3 < 5) {
      lVar16 = 0;
      uVar12 = 0;
    }
    else {
      uVar20 = 4;
      if ((uVar12 & 3) != 0) {
        uVar20 = uVar12 & 3;
      }
      uVar12 = uVar12 - uVar20;
      lVar16 = uVar12 * 2;
      pauVar17 = (undefined1 (*) [16])&local_f60;
      pauVar18 = (undefined1 (*) [16])&local_1460;
      uVar20 = uVar12;
      puVar22 = param_4;
      do {
        auVar2 = *pauVar18;
        uVar20 = uVar20 - 4;
        auVar3 = *pauVar17;
        auVar35._8_4_ = 0xc7000000;
        auVar35._0_8_ = 0xc7000000c7000000;
        auVar35._12_4_ = 0xc7000000;
        auVar35 = NEON_fcmgt(auVar2,auVar35,4);
        auVar37._8_4_ = 0x46fffe00;
        auVar37._0_8_ = 0x46fffe0046fffe00;
        auVar37._12_4_ = 0x46fffe00;
        auVar37 = NEON_fcmgt(auVar37,auVar2,4);
        auVar39._8_4_ = 0xc7000000;
        auVar39._0_8_ = 0xc7000000c7000000;
        auVar39._12_4_ = 0xc7000000;
        auVar39 = NEON_fcmgt(auVar3,auVar39,4);
        auVar41._8_4_ = 0x46fffe00;
        auVar41._0_8_ = 0x46fffe0046fffe00;
        auVar41._12_4_ = 0x46fffe00;
        auVar41 = NEON_fcmgt(auVar41,auVar3,4);
        auVar36._0_8_ =
             CONCAT17(auVar35[7] & ~auVar37[7],
                      CONCAT16(auVar35[6] & ~auVar37[6],
                               CONCAT15(auVar35[5] & ~auVar37[5],
                                        CONCAT14(auVar35[4] & ~auVar37[4],
                                                 CONCAT13(auVar35[3] & ~auVar37[3],
                                                          CONCAT12(auVar35[2] & ~auVar37[2],
                                                                   CONCAT11(auVar35[1] & ~auVar37[1]
                                                                            ,auVar35[0] &
                                                                             ~auVar37[0])))))));
        auVar36[8] = auVar35[8] & ~auVar37[8];
        auVar36[9] = auVar35[9] & ~auVar37[9];
        auVar36[10] = auVar35[10] & ~auVar37[10];
        auVar36[0xb] = auVar35[0xb] & ~auVar37[0xb];
        auVar36[0xc] = auVar35[0xc] & ~auVar37[0xc];
        auVar36[0xd] = auVar35[0xd] & ~auVar37[0xd];
        auVar36[0xe] = auVar35[0xe] & ~auVar37[0xe];
        auVar36[0xf] = auVar35[0xf] & ~auVar37[0xf];
        auVar38._0_8_ =
             CONCAT17(auVar39[7] & ~auVar41[7],
                      CONCAT16(auVar39[6] & ~auVar41[6],
                               CONCAT15(auVar39[5] & ~auVar41[5],
                                        CONCAT14(auVar39[4] & ~auVar41[4],
                                                 CONCAT13(auVar39[3] & ~auVar41[3],
                                                          CONCAT12(auVar39[2] & ~auVar41[2],
                                                                   CONCAT11(auVar39[1] & ~auVar41[1]
                                                                            ,auVar39[0] &
                                                                             ~auVar41[0])))))));
        auVar38[8] = auVar39[8] & ~auVar41[8];
        auVar38[9] = auVar39[9] & ~auVar41[9];
        auVar38[10] = auVar39[10] & ~auVar41[10];
        auVar38[0xb] = auVar39[0xb] & ~auVar41[0xb];
        auVar38[0xc] = auVar39[0xc] & ~auVar41[0xc];
        auVar38[0xd] = auVar39[0xd] & ~auVar41[0xd];
        auVar38[0xe] = auVar39[0xe] & ~auVar41[0xe];
        auVar38[0xf] = auVar39[0xf] & ~auVar41[0xf];
        auVar1._8_4_ = 0xc7000000;
        auVar1._0_8_ = 0xc7000000c7000000;
        auVar1._12_4_ = 0xc7000000;
        auVar5[1] = auVar35[1] & auVar37[1];
        auVar5[0] = auVar35[0] & auVar37[0];
        auVar5[2] = auVar35[2] & auVar37[2];
        auVar5[3] = auVar35[3] & auVar37[3];
        auVar5[4] = auVar35[4] & auVar37[4];
        auVar5[5] = auVar35[5] & auVar37[5];
        auVar5[6] = auVar35[6] & auVar37[6];
        auVar5[7] = auVar35[7] & auVar37[7];
        auVar5[8] = auVar35[8] & auVar37[8];
        auVar5[9] = auVar35[9] & auVar37[9];
        auVar5[10] = auVar35[10] & auVar37[10];
        auVar5[0xb] = auVar35[0xb] & auVar37[0xb];
        auVar5[0xc] = auVar35[0xc] & auVar37[0xc];
        auVar5[0xd] = auVar35[0xd] & auVar37[0xd];
        auVar5[0xe] = auVar35[0xe] & auVar37[0xe];
        auVar5[0xf] = auVar35[0xf] & auVar37[0xf];
        auVar35 = NEON_bif(auVar2,auVar1,auVar5,1);
        auVar40._8_8_ = auVar36._8_8_;
        auVar40._0_8_ = auVar36._0_8_;
        auVar2._8_4_ = 0xc7000000;
        auVar2._0_8_ = 0xc7000000c7000000;
        auVar2._12_4_ = 0xc7000000;
        auVar6[1] = auVar39[1] & auVar41[1];
        auVar6[0] = auVar39[0] & auVar41[0];
        auVar6[2] = auVar39[2] & auVar41[2];
        auVar6[3] = auVar39[3] & auVar41[3];
        auVar6[4] = auVar39[4] & auVar41[4];
        auVar6[5] = auVar39[5] & auVar41[5];
        auVar6[6] = auVar39[6] & auVar41[6];
        auVar6[7] = auVar39[7] & auVar41[7];
        auVar6[8] = auVar39[8] & auVar41[8];
        auVar6[9] = auVar39[9] & auVar41[9];
        auVar6[10] = auVar39[10] & auVar41[10];
        auVar6[0xb] = auVar39[0xb] & auVar41[0xb];
        auVar6[0xc] = auVar39[0xc] & auVar41[0xc];
        auVar6[0xd] = auVar39[0xd] & auVar41[0xd];
        auVar6[0xe] = auVar39[0xe] & auVar41[0xe];
        auVar6[0xf] = auVar39[0xf] & auVar41[0xf];
        auVar39 = NEON_bif(auVar3,auVar2,auVar6,1);
        auVar3._8_4_ = 0x46fffe00;
        auVar3._0_8_ = 0x46fffe0046fffe00;
        auVar3._12_4_ = 0x46fffe00;
        auVar35 = NEON_bsl(auVar40,auVar3,auVar35,1);
        auVar42._8_8_ = auVar38._8_8_;
        auVar42._0_8_ = auVar38._0_8_;
        auVar4._8_4_ = 0x46fffe00;
        auVar4._0_8_ = 0x46fffe0046fffe00;
        auVar4._12_4_ = 0x46fffe00;
        auVar39 = NEON_bsl(auVar42,auVar4,auVar39,1);
        *puVar22 = auVar35._0_4_;
        puVar22[1] = auVar39._0_4_;
        puVar22[2] = auVar35._4_4_;
        puVar22[3] = auVar39._4_4_;
        puVar22[4] = auVar35._8_4_;
        puVar22[5] = auVar39._8_4_;
        puVar22[6] = auVar35._12_4_;
        puVar22[7] = auVar39._12_4_;
        puVar22 = puVar22 + 8;
        pauVar17 = pauVar17 + 1;
        pauVar18 = pauVar18 + 1;
      } while (uVar20 != 0);
    }
    pfVar14 = (float *)(param_4 + lVar16 + 1);
    do {
      if (uVar12 == 0x140) {
LAB_0065e3a8:
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(0x5512,0x65e3ac);
        (*pcVar11)();
      }
      fVar29 = (&local_1460)[uVar12];
      fVar24 = 32767.0;
      if (fVar29 < 32767.0) {
        fVar24 = fVar29;
      }
      fVar33 = (&local_f60)[uVar12];
      fVar34 = -32768.0;
      if (fVar29 != -32768.0 && fVar29 < -32768.0 == NAN(fVar29)) {
        fVar34 = fVar24;
      }
      pfVar14[-1] = fVar34;
      fVar24 = -32768.0;
      if ((fVar33 != -32768.0 && fVar33 < -32768.0 == NAN(fVar33)) &&
         (fVar24 = 32767.0, fVar33 < 32767.0)) {
        fVar24 = fVar33;
      }
      uVar12 = uVar12 + 1;
      *pfVar14 = fVar24;
      pfVar14 = pfVar14 + 2;
    } while (param_3 != uVar12);
  }
  return;
}


// ===== 0065e3ac  FUN_0065e3ac =====

void FUN_0065e3ac(void *param_1)

{
  memset(param_1,0,0x4b0);
  return;
}


// ===== 0065e3bc  FUN_0065e3bc =====

void FUN_0065e3bc(void)

{
  return;
}


// ===== 0065e3c4  FUN_0065e3c4 =====

void FUN_0065e3c4(long param_1,long param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  undefined8 *puVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  undefined4 uVar22;
  undefined8 local_568 [80];
  undefined8 local_2e8 [76];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  
  if (0 < param_3[1] * 4) {
    memset((void *)*param_3,0,param_3[1] * 4);
  }
  if (0 < param_3[3] * 4) {
    memset((void *)param_3[2],0,param_3[3] * 4);
  }
  if (0 < param_3[5] * 4) {
    memset((void *)param_3[4],0,param_3[5] * 4);
  }
  lVar14 = 0;
  puVar15 = (undefined8 *)(param_2 + 0x38);
  puVar1 = local_568 + 2;
  do {
    memset(local_2e8,0xff,0x280);
    lVar12 = 0;
    puVar7 = puVar15;
    do {
      uVar18 = puVar7[-5];
      uVar17 = puVar7[-6];
      uVar21 = puVar7[1];
      uVar19 = *puVar7;
      puVar9 = puVar7 + -3;
      uVar20 = *(undefined4 *)(puVar7 + 3);
      puVar10 = (undefined4 *)((long)puVar7 + -0xc);
      puVar2 = (undefined4 *)((long)puVar7 + 0x24);
      puVar7 = puVar7 + 0xc;
      uVar22 = *puVar2;
      lVar11 = lVar12 + 0x20;
      *(ulong *)((long)local_2e8 + lVar12 + 8) = CONCAT44(*puVar10,*(undefined4 *)puVar9);
      *(ulong *)((long)local_2e8 + lVar12) = CONCAT44((int)((ulong)uVar18 >> 0x20),(int)uVar17);
      *(ulong *)((long)local_2e8 + lVar12 + 0x18) = CONCAT44(uVar22,uVar20);
      *(ulong *)((long)local_2e8 + lVar12 + 0x10) =
           CONCAT44((int)((ulong)uVar21 >> 0x20),(int)uVar19);
      lVar12 = lVar11;
    } while (lVar11 != 0x260);
    iVar13 = 0;
    local_88 = *(undefined4 *)(param_2 + (0x1c8 - lVar14) * 4 + 8);
    local_84 = *(undefined4 *)(param_2 + (0x1cb - lVar14) * 4 + 8);
    local_80 = *(undefined4 *)(param_2 + (0x1ce - lVar14) * 4 + 8);
    local_7c = *(undefined4 *)(param_2 + (0x1d1 - lVar14) * 4 + 8);
    local_78 = *(undefined4 *)(param_2 + (0x1d4 - lVar14) * 4 + 8);
    local_74 = *(undefined4 *)(param_2 + (0x1d7 - lVar14) * 4 + 8);
    local_70 = *(undefined4 *)(param_2 + (0x1da - lVar14) * 4 + 8);
    local_6c = *(undefined4 *)(param_2 + (0x1dd - lVar14) * 4 + 8);
    do {
      uVar3 = iVar13 * 3 + (int)lVar14;
      if (uVar3 != 3 && uVar3 != 9) {
        iVar8 = -2;
        if (uVar3 < 9) {
          iVar8 = -1;
        }
        iVar4 = 0;
        if (2 < uVar3) {
          iVar4 = iVar8;
        }
        uVar3 = iVar4 + uVar3;
        if (10 < uVar3) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(0x5512,0x65e6f8);
          (*pcVar6)();
        }
        if (uVar3 == 10) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/array:277: libc++ Hardening assertion __n < _Size failed: out-of-bounds access in std::array<T, N>\n"
                    );
        }
        lVar12 = (long)(int)uVar3;
        FUN_0065e6f8(&DAT_001fedb0 + (long)(int)uVar3 * 0x10,local_2e8,iVar13,local_568,
                     param_1 + (long)(int)uVar3 * 0x3c);
        fVar16 = (float)(&DAT_001fee50)[lVar12 * 3];
        lVar11 = 0xa0;
        puVar7 = (undefined8 *)(*param_3 + 0x10);
        puVar9 = puVar1;
        do {
          puVar5 = puVar9 + -1;
          uVar17 = puVar9[-2];
          uVar19 = puVar9[1];
          uVar18 = *puVar9;
          lVar11 = lVar11 + -8;
          puVar9 = puVar9 + 4;
          puVar7[-1] = CONCAT44((float)((ulong)puVar7[-1] >> 0x20) +
                                (float)((ulong)*puVar5 >> 0x20) * fVar16,
                                (float)puVar7[-1] + (float)*puVar5 * fVar16);
          puVar7[-2] = CONCAT44((float)((ulong)puVar7[-2] >> 0x20) +
                                (float)((ulong)uVar17 >> 0x20) * fVar16,
                                (float)puVar7[-2] + (float)uVar17 * fVar16);
          puVar7[1] = CONCAT44((float)((ulong)puVar7[1] >> 0x20) +
                               (float)((ulong)uVar19 >> 0x20) * fVar16,
                               (float)puVar7[1] + (float)uVar19 * fVar16);
          *puVar7 = CONCAT44((float)((ulong)*puVar7 >> 0x20) +
                             (float)((ulong)uVar18 >> 0x20) * fVar16,
                             (float)*puVar7 + (float)uVar18 * fVar16);
          puVar7 = puVar7 + 4;
        } while (lVar11 != 0);
        fVar16 = (float)(&DAT_001fee54)[lVar12 * 3];
        lVar11 = 0xa0;
        puVar7 = (undefined8 *)(param_3[2] + 0x10);
        puVar9 = puVar1;
        do {
          puVar5 = puVar9 + -1;
          uVar17 = puVar9[-2];
          uVar19 = puVar9[1];
          uVar18 = *puVar9;
          lVar11 = lVar11 + -8;
          puVar9 = puVar9 + 4;
          puVar7[-1] = CONCAT44((float)((ulong)puVar7[-1] >> 0x20) +
                                (float)((ulong)*puVar5 >> 0x20) * fVar16,
                                (float)puVar7[-1] + (float)*puVar5 * fVar16);
          puVar7[-2] = CONCAT44((float)((ulong)puVar7[-2] >> 0x20) +
                                (float)((ulong)uVar17 >> 0x20) * fVar16,
                                (float)puVar7[-2] + (float)uVar17 * fVar16);
          puVar7[1] = CONCAT44((float)((ulong)puVar7[1] >> 0x20) +
                               (float)((ulong)uVar19 >> 0x20) * fVar16,
                               (float)puVar7[1] + (float)uVar19 * fVar16);
          *puVar7 = CONCAT44((float)((ulong)*puVar7 >> 0x20) +
                             (float)((ulong)uVar18 >> 0x20) * fVar16,
                             (float)*puVar7 + (float)uVar18 * fVar16);
          puVar7 = puVar7 + 4;
        } while (lVar11 != 0);
        fVar16 = (float)(&DAT_001fee58)[lVar12 * 3];
        lVar12 = 0xa0;
        puVar7 = (undefined8 *)(param_3[4] + 0x10);
        puVar9 = puVar1;
        do {
          puVar5 = puVar9 + -1;
          uVar17 = puVar9[-2];
          uVar19 = puVar9[1];
          uVar18 = *puVar9;
          lVar12 = lVar12 + -8;
          puVar9 = puVar9 + 4;
          puVar7[-1] = CONCAT44((float)((ulong)puVar7[-1] >> 0x20) +
                                (float)((ulong)*puVar5 >> 0x20) * fVar16,
                                (float)puVar7[-1] + (float)*puVar5 * fVar16);
          puVar7[-2] = CONCAT44((float)((ulong)puVar7[-2] >> 0x20) +
                                (float)((ulong)uVar17 >> 0x20) * fVar16,
                                (float)puVar7[-2] + (float)uVar17 * fVar16);
          puVar7[1] = CONCAT44((float)((ulong)puVar7[1] >> 0x20) +
                               (float)((ulong)uVar19 >> 0x20) * fVar16,
                               (float)puVar7[1] + (float)uVar19 * fVar16);
          *puVar7 = CONCAT44((float)((ulong)*puVar7 >> 0x20) +
                             (float)((ulong)uVar18 >> 0x20) * fVar16,
                             (float)*puVar7 + (float)uVar18 * fVar16);
          puVar7 = puVar7 + 4;
        } while (lVar12 != 0);
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 != 4);
    lVar14 = lVar14 + 1;
    puVar15 = (undefined8 *)((long)puVar15 + -4);
    if (lVar14 == 3) {
      return;
    }
  } while( true );
}


// ===== 0065e6f8  FUN_0065e6f8 =====

void FUN_0065e6f8(float *param_1,long param_2,uint param_3,float *param_4,undefined8 *param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  float *pfVar18;
  int iVar19;
  long lVar20;
  undefined8 uVar21;
  float *pfVar22;
  ulong uVar23;
  float fVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  
  memset(param_4,0,0x280);
  if ((int)param_3 < 1) {
    uVar17 = (ulong)(int)param_3;
  }
  else {
    fVar24 = *param_4 + *(float *)((long)param_5 + (ulong)(0xf - param_3) * 4) * *param_1;
    *param_4 = fVar24;
    fVar24 = fVar24 + *(float *)((long)param_5 + (ulong)(0xb - param_3) * 4) * param_1[1];
    *param_4 = fVar24;
    fVar24 = fVar24 + *(float *)((long)param_5 + (ulong)(7 - param_3) * 4) * param_1[2];
    *param_4 = fVar24;
    uVar17 = (ulong)param_3;
    *param_4 = fVar24 + *(float *)((long)param_5 + (ulong)(3 - param_3) * 4) * param_1[3];
    if (param_3 != 1) {
      fVar24 = param_4[1] + *(float *)((long)param_5 + (ulong)(0x10 - param_3) * 4) * *param_1;
      param_4[1] = fVar24;
      fVar24 = fVar24 + *(float *)((long)param_5 + (ulong)(0xc - param_3) * 4) * param_1[1];
      param_4[1] = fVar24;
      fVar24 = fVar24 + *(float *)((long)param_5 + (ulong)(8 - param_3) * 4) * param_1[2];
      param_4[1] = fVar24;
      param_4[1] = fVar24 + *(float *)((long)param_5 + (ulong)(4 - param_3) * 4) * param_1[3];
      if (param_3 != 2) {
        fVar24 = param_4[2] + *(float *)((long)param_5 + (ulong)(0x11 - param_3) * 4) * *param_1;
        param_4[2] = fVar24;
        fVar24 = fVar24 + *(float *)((long)param_5 + (ulong)(0xd - param_3) * 4) * param_1[1];
        param_4[2] = fVar24;
        fVar24 = fVar24 + *(float *)((long)param_5 + (ulong)(9 - param_3) * 4) * param_1[2];
        param_4[2] = fVar24;
        param_4[2] = fVar24 + *(float *)((long)param_5 + (ulong)(5 - param_3) * 4) * param_1[3];
      }
    }
  }
  pfVar18 = param_4 + uVar17;
  iVar19 = 0;
  lVar20 = uVar17 + (0xf - param_3);
  iVar7 = 0x10 - param_3;
  iVar10 = 0xb;
  do {
    uVar5 = iVar19 >> 2;
    uVar6 = uVar5;
    if (2 < (int)uVar5) {
      uVar6 = 3;
    }
    if ((int)uVar5 < 0) {
LAB_0065e9a4:
      lVar13 = (long)(int)uVar5;
      fVar24 = param_4[uVar17];
      uVar15 = 3 - lVar13;
      uVar5 = iVar19 + ~uVar6 * 4 + 0xf;
      uVar12 = (ulong)uVar5;
      lVar14 = lVar13;
      if ((0x17 < uVar15) &&
         (uVar16 = (long)param_5 + (long)(int)uVar5 * 4, uVar23 = 2 - lVar13,
         ((param_1 + lVar13 + 1 <= param_1 + lVar13 + 1 + uVar23 &&
          (uVar16 + lVar13 * 0x10) - 0x20 <= uVar16) &&
         (int)(uVar5 + (int)uVar23 * -4) <= (int)uVar5) && uVar23 >> 0x1e == 0)) {
        uVar16 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | uVar12 << 2;
        if ((param_4 + lVar20 + 1 <= (float *)((long)param_5 + uVar16 + lVar13 * 0x10 + -0x20) ||
             (float *)((long)param_5 + uVar16 + 4) <= pfVar18) &&
           (param_1 + 4 <= pfVar18 || param_4 + lVar20 + 1 <= param_1 + lVar13 + 1)) {
          uVar23 = uVar15 & 0xfffffffffffffff8;
          uVar12 = (ulong)(uVar5 + (int)uVar23 * -4);
          lVar14 = uVar23 + lVar13;
          pfVar22 = param_1 + lVar13 + 5;
          uVar16 = uVar15 & 0xfffffffffffffff8;
          iVar11 = iVar10;
          do {
            iVar4 = uVar6 * -4 + iVar11;
            uVar16 = uVar16 - 8;
            iVar11 = iVar11 + -0x20;
            pfVar1 = pfVar22 + -4;
            pfVar2 = pfVar22 + -2;
            pfVar9 = pfVar22 + 2;
            uVar30 = *(undefined8 *)pfVar22;
            pfVar22 = pfVar22 + 8;
            fVar24 = fVar24 + *(float *)((long)param_5 + (long)iVar4 * 4) *
                              (float)*(undefined8 *)pfVar1 +
                     *(float *)((long)param_5 + (long)(iVar4 + -4) * 4) *
                     (float)((ulong)*(undefined8 *)pfVar1 >> 0x20) +
                     *(float *)((long)param_5 + (long)(iVar4 + -8) * 4) *
                     (float)*(undefined8 *)pfVar2 +
                     *(float *)((long)param_5 + (long)(iVar4 + -0xc) * 4) *
                     (float)((ulong)*(undefined8 *)pfVar2 >> 0x20) +
                     *(float *)((long)param_5 + (long)(iVar4 + -0x10) * 4) * (float)uVar30 +
                     *(float *)((long)param_5 + (long)(iVar4 + -0x14) * 4) *
                     (float)((ulong)uVar30 >> 0x20) +
                     *(float *)((long)param_5 + (long)(iVar4 + -0x18) * 4) *
                     (float)*(undefined8 *)pfVar9 +
                     *(float *)((long)param_5 + (long)(iVar4 + -0x1c) * 4) *
                     (float)((ulong)*(undefined8 *)pfVar9 >> 0x20);
          } while (uVar16 != 0);
          param_4[uVar17] = fVar24;
          if (uVar15 == uVar23) goto LAB_0065e900;
        }
      }
      lVar14 = lVar14 + 1;
      do {
        iVar11 = (int)uVar12;
        pfVar22 = param_1 + lVar14;
        lVar14 = lVar14 + 1;
        uVar12 = (ulong)(iVar11 - 4);
        fVar24 = fVar24 + *(float *)((long)param_5 + (long)iVar11 * 4) * *pfVar22;
        param_4[uVar17] = fVar24;
      } while (lVar14 != 4);
    }
    else {
      fVar24 = param_4[uVar17] + *(float *)(param_2 + (long)iVar19 * 4) * *param_1;
      param_4[uVar17] = fVar24;
      if (uVar5 != 0) {
        fVar24 = fVar24 + *(float *)(param_2 + (long)(iVar19 + -4) * 4) * param_1[1];
        param_4[uVar17] = fVar24;
        if (uVar6 != 1) {
          fVar24 = fVar24 + *(float *)(param_2 + (long)(iVar19 + -8) * 4) * param_1[2];
          param_4[uVar17] = fVar24;
          if (uVar6 != 2) {
            param_4[uVar17] = fVar24 + *(float *)(param_2 + (long)(iVar19 + -0xc) * 4) * param_1[3];
          }
        }
      }
      if (uVar5 < 3) goto LAB_0065e9a4;
    }
LAB_0065e900:
    iVar19 = iVar19 + 1;
    uVar17 = uVar17 + 1;
    iVar10 = iVar10 + 1;
  } while (iVar19 != iVar7);
  if ((((iVar7 <= (int)(0x9f - param_3)) &&
       (pfVar18 = (float *)(param_2 + (long)iVar7 * 4), pfVar18 <= pfVar18 + 0x8f)) &&
      ((int)(0xc - param_3) <= (int)(0x9b - param_3))) &&
     (((uVar17 = param_2 + (long)(int)(0xc - param_3) * 4, uVar17 <= uVar17 + 0x23c &&
       ((int)(8 - param_3) <= (int)(0x97 - param_3))) &&
      ((uVar17 = param_2 + (long)(int)(8 - param_3) * 4, uVar17 <= uVar17 + 0x23c &&
       (((int)(4 - param_3) <= (int)(0x93 - param_3) &&
        (uVar17 = param_2 + (long)(int)(4 - param_3) * 4, uVar17 <= uVar17 + 0x23c)))))))) {
    pfVar9 = param_4 + 0x10;
    pfVar22 = (float *)(param_2 + (long)(int)(4 - param_3) * 4);
    pfVar1 = (float *)(param_2 + (long)(int)(8 - param_3) * 4);
    pfVar3 = param_4 + 0xa0;
    pfVar2 = (float *)(param_2 + (long)(int)(0xc - param_3) * 4);
    if ((pfVar3 <= param_1 || param_1 + 4 <= pfVar9) &&
       ((((pfVar22 + 0x90 <= pfVar9 || pfVar3 <= pfVar22 &&
          (pfVar1 + 0x90 <= pfVar9 || pfVar3 <= pfVar1)) &&
         (pfVar2 + 0x90 <= pfVar9 || pfVar3 <= pfVar2)) &&
        (pfVar18 + 0x90 <= pfVar9 || pfVar3 <= pfVar18)))) {
      fVar27 = param_1[2];
      fVar24 = param_1[3];
      fVar29 = *param_1;
      fVar28 = param_1[1];
      lVar20 = -0x90;
      pfVar18 = param_4 + 0x10;
      do {
        iVar19 = (int)lVar20 - param_3;
        lVar20 = lVar20 + 4;
        puVar8 = (undefined8 *)
                 (param_2 +
                 (-(ulong)(iVar19 + 0xa0U >> 0x1f) & 0xfffffffc00000000 |
                 (ulong)(iVar19 + 0xa0U) << 2));
        uVar31 = puVar8[1];
        uVar30 = *puVar8;
        puVar8 = (undefined8 *)
                 (param_2 +
                 (-(ulong)(iVar19 + 0x9cU >> 0x1f) & 0xfffffffc00000000 |
                 (ulong)(iVar19 + 0x9cU) << 2));
        uVar25 = puVar8[1];
        uVar32 = *puVar8;
        puVar8 = (undefined8 *)
                 (param_2 +
                 (-(ulong)(iVar19 + 0x98U >> 0x1f) & 0xfffffffc00000000 |
                 (ulong)(iVar19 + 0x98U) << 2));
        uVar26 = puVar8[1];
        uVar33 = *puVar8;
        puVar8 = (undefined8 *)
                 (param_2 +
                 (-(ulong)(iVar19 + 0x94U >> 0x1f) & 0xfffffffc00000000 |
                 (ulong)(iVar19 + 0x94U) << 2));
        uVar34 = puVar8[1];
        uVar21 = *puVar8;
        *(ulong *)(pfVar18 + 2) =
             CONCAT44((float)((ulong)*(undefined8 *)(pfVar18 + 2) >> 0x20) +
                      (float)((ulong)uVar31 >> 0x20) * fVar29 +
                      (float)((ulong)uVar25 >> 0x20) * fVar28 +
                      (float)((ulong)uVar26 >> 0x20) * fVar27 +
                      (float)((ulong)uVar34 >> 0x20) * fVar24,
                      (float)*(undefined8 *)(pfVar18 + 2) + (float)uVar31 * fVar29 +
                      (float)uVar25 * fVar28 + (float)uVar26 * fVar27 + (float)uVar34 * fVar24);
        *(ulong *)pfVar18 =
             CONCAT44((float)((ulong)*(undefined8 *)pfVar18 >> 0x20) +
                      (float)((ulong)uVar30 >> 0x20) * fVar29 +
                      (float)((ulong)uVar32 >> 0x20) * fVar28 +
                      (float)((ulong)uVar33 >> 0x20) * fVar27 +
                      (float)((ulong)uVar21 >> 0x20) * fVar24,
                      (float)*(undefined8 *)pfVar18 + (float)uVar30 * fVar29 +
                      (float)uVar32 * fVar28 + (float)uVar33 * fVar27 + (float)uVar21 * fVar24);
        pfVar18 = pfVar18 + 4;
      } while (lVar20 != 0);
      goto LAB_0065ed5c;
    }
  }
  lVar20 = 0;
  do {
    iVar19 = (int)lVar20 - param_3;
    fVar24 = param_4[lVar20 + 0x10] + *(float *)(param_2 + (long)(iVar19 + 0x10) * 4) * *param_1;
    param_4[lVar20 + 0x10] = fVar24;
    fVar24 = fVar24 + *(float *)(param_2 + (long)(iVar19 + 0xc) * 4) * param_1[1];
    param_4[lVar20 + 0x10] = fVar24;
    fVar24 = fVar24 + *(float *)(param_2 + (long)(iVar19 + 8) * 4) * param_1[2];
    param_4[lVar20 + 0x10] = fVar24;
    param_4[lVar20 + 0x10] = fVar24 + *(float *)(param_2 + (long)(iVar19 + 4) * 4) * param_1[3];
    lVar20 = lVar20 + 1;
  } while (lVar20 != 0x90);
LAB_0065ed5c:
  uVar26 = *(undefined8 *)(param_2 + 0x24c);
  uVar25 = *(undefined8 *)(param_2 + 0x244);
  uVar31 = *(undefined8 *)(param_2 + 0x25c);
  uVar30 = *(undefined8 *)(param_2 + 0x254);
  uVar21 = *(undefined8 *)(param_2 + 0x274);
  uVar33 = *(undefined8 *)(param_2 + 0x26c);
  uVar32 = *(undefined8 *)(param_2 + 0x264);
  *(undefined4 *)(param_5 + 7) = *(undefined4 *)(param_2 + 0x27c);
  param_5[6] = uVar21;
  param_5[3] = uVar31;
  param_5[2] = uVar30;
  param_5[5] = uVar33;
  param_5[4] = uVar32;
  param_5[1] = uVar26;
  *param_5 = uVar25;
  return;
}


// ===== 0065eda0  FUN_0065eda0 =====

void FUN_0065eda0(long param_1,long *param_2,float *param_3)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  float *pfVar14;
  int iVar15;
  long lVar16;
  float *pfVar17;
  float fVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 local_578 [78];
  float local_308;
  float local_304;
  float local_300;
  float local_2fc;
  undefined8 local_2f8 [2];
  float afStack_2e8 [2];
  undefined8 uStack_2e0;
  float afStack_2d8 [154];
  
  memset(param_3,0,0x780);
  lVar16 = 0;
  pfVar17 = param_3;
  do {
    iVar15 = 0;
    do {
      uVar2 = iVar15 * 3 + (int)lVar16;
      if (uVar2 != 3 && uVar2 != 9) {
        iVar13 = -2;
        if (uVar2 < 9) {
          iVar13 = -1;
        }
        iVar4 = 0;
        if (2 < uVar2) {
          iVar4 = iVar13;
        }
        uVar2 = iVar4 + uVar2;
        if (10 < uVar2) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(0x5512,0x65f054);
          (*pcVar9)();
        }
        if (uVar2 == 10) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/array:277: libc++ Hardening assertion __n < _Size failed: out-of-bounds access in std::array<T, N>\n"
                    );
        }
        lVar12 = (long)(int)uVar2;
        memset(local_2f8,0,0x280);
        lVar10 = *param_2;
        fVar18 = (float)(&DAT_001fee50)[lVar12 * 3];
        lVar11 = 0;
        do {
          puVar3 = (undefined8 *)(lVar10 + lVar11);
          uVar19 = *puVar3;
          fVar5 = *(float *)(puVar3 + 2);
          fVar6 = *(float *)((long)puVar3 + 0x14);
          fVar7 = *(float *)(puVar3 + 3);
          fVar8 = *(float *)((long)puVar3 + 0x1c);
          uVar22 = *(undefined8 *)((long)local_2f8 + lVar11 + 8);
          uVar20 = *(undefined8 *)((long)local_2f8 + lVar11);
          uVar24 = *(undefined8 *)((long)&uStack_2e0 + lVar11);
          uVar23 = *(undefined8 *)((long)afStack_2e8 + lVar11);
          lVar1 = lVar11 + 0x20;
          *(ulong *)((long)local_2f8 + lVar11 + 8) =
               CONCAT44((float)((ulong)uVar22 >> 0x20) + (float)((ulong)puVar3[1] >> 0x20) * fVar18,
                        (float)uVar22 + (float)puVar3[1] * fVar18);
          *(undefined8 *)((long)local_2f8 + lVar11) =
               CONCAT44((float)((ulong)uVar20 >> 0x20) + (float)((ulong)uVar19 >> 0x20) * fVar18,
                        (float)uVar20 + (float)uVar19 * fVar18);
          *(float *)((long)afStack_2d8 + lVar11) = (float)uVar24 + fVar7 * fVar18;
          *(float *)((long)afStack_2d8 + lVar11 + 4) =
               (float)((ulong)uVar24 >> 0x20) + fVar8 * fVar18;
          *(float *)((long)afStack_2e8 + lVar11) = (float)uVar23 + fVar5 * fVar18;
          *(float *)((long)afStack_2e8 + lVar11 + 4) =
               (float)((ulong)uVar23 >> 0x20) + fVar6 * fVar18;
          lVar11 = lVar1;
        } while (lVar1 != 0x280);
        lVar10 = param_2[2];
        fVar18 = (float)(&DAT_001fee54)[lVar12 * 3];
        lVar11 = 0;
        do {
          puVar3 = (undefined8 *)(lVar10 + lVar11);
          uVar19 = *puVar3;
          fVar5 = *(float *)(puVar3 + 2);
          fVar6 = *(float *)((long)puVar3 + 0x14);
          fVar7 = *(float *)(puVar3 + 3);
          fVar8 = *(float *)((long)puVar3 + 0x1c);
          uVar22 = *(undefined8 *)((long)local_2f8 + lVar11 + 8);
          uVar20 = *(undefined8 *)((long)local_2f8 + lVar11);
          uVar24 = *(undefined8 *)((long)&uStack_2e0 + lVar11);
          uVar23 = *(undefined8 *)((long)afStack_2e8 + lVar11);
          lVar1 = lVar11 + 0x20;
          *(ulong *)((long)local_2f8 + lVar11 + 8) =
               CONCAT44((float)((ulong)uVar22 >> 0x20) + (float)((ulong)puVar3[1] >> 0x20) * fVar18,
                        (float)uVar22 + (float)puVar3[1] * fVar18);
          *(undefined8 *)((long)local_2f8 + lVar11) =
               CONCAT44((float)((ulong)uVar20 >> 0x20) + (float)((ulong)uVar19 >> 0x20) * fVar18,
                        (float)uVar20 + (float)uVar19 * fVar18);
          *(float *)((long)afStack_2d8 + lVar11) = (float)uVar24 + fVar7 * fVar18;
          *(float *)((long)afStack_2d8 + lVar11 + 4) =
               (float)((ulong)uVar24 >> 0x20) + fVar8 * fVar18;
          *(float *)((long)afStack_2e8 + lVar11) = (float)uVar23 + fVar5 * fVar18;
          *(float *)((long)afStack_2e8 + lVar11 + 4) =
               (float)((ulong)uVar23 >> 0x20) + fVar6 * fVar18;
          lVar11 = lVar1;
        } while (lVar1 != 0x280);
        lVar11 = param_2[4];
        fVar18 = (float)(&DAT_001fee58)[lVar12 * 3];
        lVar12 = 0;
        do {
          puVar3 = (undefined8 *)(lVar11 + lVar12);
          uVar19 = *puVar3;
          uVar22 = *(undefined8 *)((long)local_2f8 + lVar12 + 8);
          uVar20 = *(undefined8 *)((long)local_2f8 + lVar12);
          lVar10 = lVar12 + 0x20;
          auVar21._0_8_ =
               CONCAT44((float)((ulong)*(undefined8 *)((long)afStack_2e8 + lVar12) >> 0x20) +
                        *(float *)((long)puVar3 + 0x14) * fVar18,
                        (float)*(undefined8 *)((long)afStack_2e8 + lVar12) +
                        *(float *)(puVar3 + 2) * fVar18);
          auVar21._8_4_ =
               (float)*(undefined8 *)((long)&uStack_2e0 + lVar12) + *(float *)(puVar3 + 3) * fVar18;
          auVar21._12_4_ =
               (float)((ulong)*(undefined8 *)((long)&uStack_2e0 + lVar12) >> 0x20) +
               *(float *)((long)puVar3 + 0x1c) * fVar18;
          *(ulong *)((long)local_2f8 + lVar12 + 8) =
               CONCAT44((float)((ulong)uVar22 >> 0x20) + (float)((ulong)puVar3[1] >> 0x20) * fVar18,
                        (float)uVar22 + (float)puVar3[1] * fVar18);
          *(undefined8 *)((long)local_2f8 + lVar12) =
               CONCAT44((float)((ulong)uVar20 >> 0x20) + (float)((ulong)uVar19 >> 0x20) * fVar18,
                        (float)uVar20 + (float)uVar19 * fVar18);
          *(long *)((long)&uStack_2e0 + lVar12) = auVar21._8_8_;
          *(undefined8 *)((long)afStack_2e8 + lVar12) = auVar21._0_8_;
          lVar12 = lVar10;
        } while (lVar10 != 0x280);
        FUN_0065e6f8(&DAT_001fedb0 + (long)(int)uVar2 * 0x10,local_2f8,iVar15,local_578,
                     param_1 + 600 + (long)(int)uVar2 * 0x3c);
        auVar21 = NEON_fmov(0x40400000,4);
        lVar12 = 0;
        pfVar14 = pfVar17;
        do {
          uVar20 = *(undefined8 *)((long)local_578 + lVar12 + 8);
          uVar19 = *(undefined8 *)((long)local_578 + lVar12);
          lVar12 = lVar12 + 0x10;
          *pfVar14 = (float)*(undefined8 *)pfVar14 + (float)uVar19 * auVar21._0_4_;
          pfVar14[3] = (float)((ulong)*(undefined8 *)(pfVar14 + 2) >> 0x20) +
                       (float)((ulong)uVar19 >> 0x20) * auVar21._4_4_;
          pfVar14[6] = pfVar14[6] + (float)uVar20 * auVar21._8_4_;
          pfVar14[9] = pfVar14[9] + (float)((ulong)uVar20 >> 0x20) * auVar21._12_4_;
          pfVar14 = pfVar14 + 0xc;
        } while (lVar12 != 0x270);
        param_3[lVar16 + 0x1d4] = param_3[lVar16 + 0x1d4] + local_308 * 3.0;
        param_3[lVar16 + 0x1d7] = param_3[lVar16 + 0x1d7] + local_304 * 3.0;
        param_3[lVar16 + 0x1da] = param_3[lVar16 + 0x1da] + local_300 * 3.0;
        param_3[lVar16 + 0x1dd] = param_3[lVar16 + 0x1dd] + local_2fc * 3.0;
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 != 4);
    lVar16 = lVar16 + 1;
    pfVar17 = pfVar17 + 1;
    if (lVar16 == 3) {
      return;
    }
  } while( true );
}


// ===== 0065f054  FUN_0065f054 =====

void FUN_0065f054(undefined2 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0x36) = 0;
  return;
}


// ===== 0065f0a0  FUN_0065f0a0 =====

void FUN_0065f0a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = param_2[4];
  uVar2 = param_2[7];
  uVar1 = param_2[6];
  uVar5 = param_2[1];
  uVar4 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  param_1[1] = uVar5;
  *param_1 = uVar4;
  param_1[3] = uVar7;
  param_1[2] = uVar6;
  uVar5 = param_2[9];
  uVar4 = param_2[8];
  uVar3 = param_2[0xb];
  uVar2 = param_2[10];
  uVar1 = *(undefined8 *)((long)param_2 + 0x5d);
  *(undefined8 *)((long)param_1 + 0x65) = *(undefined8 *)((long)param_2 + 0x65);
  *(undefined8 *)((long)param_1 + 0x5d) = uVar1;
  param_1[9] = uVar5;
  param_1[8] = uVar4;
  param_1[0xb] = uVar3;
  param_1[10] = uVar2;
  return;
}


// ===== 0065f0c8  FUN_0065f0c8 =====

void FUN_0065f0c8(void)

{
  return;
}


// ===== 0065f0d0  FUN_0065f0d0 =====

void FUN_0065f0d0(long param_1,undefined8 param_2)

{
  FUN_0065f1c0();
  FUN_0065f2c4(param_1 + 0x30,param_2,0x14);
  *(undefined4 *)(param_1 + 0x60) = 3;
  FUN_00660048(param_1 + 0x68,param_2);
  return;
}


// ===== 0065f11c  FUN_0065f11c =====

void FUN_0065f11c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5
                 ,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  
  uVar1 = 0;
  if (param_4 != 0) {
    uVar1 = param_3;
  }
  uVar2 = 0;
  if (param_6 != 0) {
    uVar2 = param_5;
  }
  uVar4 = FUN_0065f204(param_1,uVar1,param_4,uVar2,param_6);
  if ((uVar4 & 1) == 0) {
    uVar3 = 3;
  }
  else {
    uVar3 = FUN_00660070(param_1 + 0x68,param_1 + 0xc,param_1 + 0x18,param_1 + 0x20);
  }
  *(undefined4 *)(param_1 + 0x60) = uVar3;
  FUN_0065f2f0(param_1 + 0x30,param_2,uVar3,param_3,param_4,param_5,param_6);
  return;
}


// ===== 0065f1c0  FUN_0065f1c0 =====

void FUN_0065f1c0(long param_1,undefined8 param_2)

{
  FUN_0065fd2c();
  FUN_0065fe74(param_1 + 0xc);
  FUN_00660374(param_1 + 0x14,param_2);
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}


// ===== 0065f204  FUN_0065f204 =====

bool FUN_0065f204(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0x28) + 1;
  *(int *)(param_1 + 0x28) = iVar1;
  if (iVar1 < 2) {
    return false;
  }
  FUN_0065fd48();
  if (*(int *)(param_1 + 0x28) < 100) {
    bVar2 = false;
  }
  else {
    FUN_0065fe80(param_1 + 0xc,param_2,param_3,param_4,param_5,param_1 + 4);
    FUN_00660394(param_1 + 0x14,param_2,param_3,param_4,param_5,param_1 + 4);
    bVar2 = 199 < *(int *)(param_1 + 0x28);
  }
  return bVar2;
}


// ===== 0065f2c4  FUN_0065f2c4 =====

void FUN_0065f2c4(long *param_1,long param_2,long param_3)

{
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = param_2;
  param_1[1] = param_3 * param_2;
  *(undefined8 *)((long)param_1 + 0x14) = 0x300000003;
  *(float *)(param_1 + 2) = 1.0 / (float)(ulong)(param_3 * param_2);
  return;
}


// ===== 0065f2f0  FUN_0065f2f0 =====

bool FUN_0065f2f0(long param_1,undefined8 param_2,int param_3,float *param_4,ulong param_5,
                 float *param_6,ulong param_7)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong *puVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar9 = (ulong *)(param_1 + 0x20);
  uVar6 = *puVar9;
  if (uVar6 == *(ulong *)(param_1 + 8)) {
    *puVar9 = 0;
LAB_0065f3c0:
    uVar6 = 0;
    *(undefined8 *)(param_1 + 0x28) = param_2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x18);
    *(int *)(param_1 + 0x18) = param_3;
    if (param_3 < 2) goto LAB_0065f3d8;
LAB_0065f330:
    if (param_3 != 2) {
      if (param_3 != 3) goto LAB_0065f9dc;
      iVar1 = *(int *)(param_1 + 0x14);
      if (iVar1 < 2) {
        if (iVar1 != 0) {
          if (iVar1 == 1) {
            if (*(long *)(param_1 + 0x28) == 1) {
              pfVar3 = (float *)0x0;
              if (param_7 != 0) {
                pfVar3 = param_6;
              }
              if (param_5 != 0) {
                do {
                  param_5 = param_5 - 1;
                  fVar10 = *(float *)(param_1 + 0x10) * (float)uVar6;
                  *param_4 = (1.0 - fVar10) * *param_4 + fVar10 * (*param_4 + *pfVar3) * 0.5;
                  uVar6 = *(long *)(param_1 + 0x20) + 1;
                  *(ulong *)(param_1 + 0x20) = uVar6;
                  param_4 = param_4 + 1;
                  pfVar3 = pfVar3 + 1;
                } while (param_5 != 0);
              }
            }
            else if (param_5 != 0) {
              do {
                param_5 = param_5 - 1;
                fVar10 = *(float *)(param_1 + 0x10) * (float)uVar6;
                fVar10 = (1.0 - fVar10) * *param_4 + fVar10 * (*param_4 + *param_6) * 0.5;
                *param_4 = fVar10;
                *param_6 = fVar10;
                uVar6 = *(long *)(param_1 + 0x20) + 1;
                *(ulong *)(param_1 + 0x20) = uVar6;
                param_4 = param_4 + 1;
                param_6 = param_6 + 1;
              } while (param_5 != 0);
            }
          }
          goto LAB_0065f9dc;
        }
        if (*(long *)(param_1 + 0x28) != 1) {
          FUN_0065fc5c(param_1,param_4,param_5,param_6,param_7,puVar9);
          goto LAB_0065f9dc;
        }
        pfVar3 = (float *)0x0;
        if (param_5 != 0) {
          pfVar3 = param_4;
        }
        uVar6 = param_5;
        pfVar5 = (float *)0x0;
        if (param_7 != 0) {
          pfVar5 = param_6;
        }
      }
      else {
        if (iVar1 != 2) {
          if (iVar1 != 3) goto LAB_0065f9dc;
          if (*(long *)(param_1 + 0x28) != 1) {
            if (param_5 == 0) goto LAB_0065f9dc;
            if (param_5 < 0x10) {
LAB_0065f918:
              uVar6 = 0;
            }
            else {
              uVar8 = param_5 - 1;
              uVar6 = 0;
              if (((param_4 <= param_4 + uVar8) && (param_6 <= param_6 + uVar8)) &&
                 (uVar8 >> 0x3e == 0)) {
                if ((param_4 < param_6 + param_5) && (param_6 < param_4 + param_5))
                goto LAB_0065f918;
                uVar6 = param_5 & 0x7ffffffffffffff8;
                pfVar3 = param_6 + 4;
                pfVar5 = param_4 + 4;
                uVar8 = param_5 & 0x7ffffffffffffff8;
                do {
                  uVar8 = uVar8 - 8;
                  uVar11 = CONCAT44(((float)((ulong)*(undefined8 *)(pfVar5 + -4) >> 0x20) +
                                    (float)((ulong)*(undefined8 *)(pfVar3 + -4) >> 0x20)) * 0.5,
                                    ((float)*(undefined8 *)(pfVar5 + -4) +
                                    (float)*(undefined8 *)(pfVar3 + -4)) * 0.5);
                  uVar14 = CONCAT44(((float)((ulong)*(undefined8 *)(pfVar5 + -2) >> 0x20) +
                                    (float)((ulong)*(undefined8 *)(pfVar3 + -2) >> 0x20)) * 0.5,
                                    ((float)*(undefined8 *)(pfVar5 + -2) +
                                    (float)*(undefined8 *)(pfVar3 + -2)) * 0.5);
                  uVar15 = CONCAT44(((float)((ulong)*(undefined8 *)pfVar5 >> 0x20) +
                                    (float)((ulong)*(undefined8 *)pfVar3 >> 0x20)) * 0.5,
                                    ((float)*(undefined8 *)pfVar5 + (float)*(undefined8 *)pfVar3) *
                                    0.5);
                  uVar12 = CONCAT44(((float)((ulong)*(undefined8 *)(pfVar5 + 2) >> 0x20) +
                                    (float)((ulong)*(undefined8 *)(pfVar3 + 2) >> 0x20)) * 0.5,
                                    ((float)*(undefined8 *)(pfVar5 + 2) +
                                    (float)*(undefined8 *)(pfVar3 + 2)) * 0.5);
                  *(undefined8 *)(pfVar5 + -2) = uVar14;
                  *(undefined8 *)(pfVar5 + -4) = uVar11;
                  *(undefined8 *)(pfVar5 + 2) = uVar12;
                  *(undefined8 *)pfVar5 = uVar15;
                  pfVar5 = pfVar5 + 8;
                  *(undefined8 *)(pfVar3 + -2) = uVar14;
                  *(undefined8 *)(pfVar3 + -4) = uVar11;
                  *(undefined8 *)(pfVar3 + 2) = uVar12;
                  *(undefined8 *)pfVar3 = uVar15;
                  pfVar3 = pfVar3 + 8;
                } while (uVar8 != 0);
                if (param_5 == uVar6) goto LAB_0065f9dc;
              }
            }
            lVar7 = param_5 - uVar6;
            pfVar3 = param_6 + uVar6;
            pfVar5 = param_4 + uVar6;
            do {
              lVar7 = lVar7 + -1;
              fVar10 = (*pfVar5 + *pfVar3) * 0.5;
              *pfVar5 = fVar10;
              *pfVar3 = fVar10;
              pfVar3 = pfVar3 + 1;
              pfVar5 = pfVar5 + 1;
            } while (lVar7 != 0);
            goto LAB_0065f9dc;
          }
          pfVar3 = (float *)0x0;
          if (param_7 != 0) {
            pfVar3 = param_6;
          }
          if (param_5 == 0) goto LAB_0065f9dc;
          if (param_5 < 0x10) {
LAB_0065f534:
            uVar6 = 0;
          }
          else {
            uVar8 = param_5 - 1;
            uVar6 = 0;
            if (((param_4 <= param_4 + uVar8) && (pfVar3 <= pfVar3 + uVar8)) && (uVar8 >> 0x3e == 0)
               ) {
              if ((param_4 < pfVar3 + param_5) && (pfVar3 < param_4 + param_5)) goto LAB_0065f534;
              uVar6 = param_5 & 0x7ffffffffffffff8;
              pfVar5 = pfVar3 + 4;
              pfVar4 = param_4 + 4;
              uVar8 = param_5 & 0x7ffffffffffffff8;
              do {
                pfVar2 = pfVar5 + -2;
                uVar11 = *(undefined8 *)(pfVar5 + -4);
                uVar15 = *(undefined8 *)(pfVar5 + 2);
                uVar14 = *(undefined8 *)pfVar5;
                uVar8 = uVar8 - 8;
                pfVar5 = pfVar5 + 8;
                *(ulong *)(pfVar4 + -2) =
                     CONCAT44(((float)((ulong)*(undefined8 *)(pfVar4 + -2) >> 0x20) +
                              (float)((ulong)*(undefined8 *)pfVar2 >> 0x20)) * 0.5,
                              ((float)*(undefined8 *)(pfVar4 + -2) + (float)*(undefined8 *)pfVar2) *
                              0.5);
                *(ulong *)(pfVar4 + -4) =
                     CONCAT44(((float)((ulong)*(undefined8 *)(pfVar4 + -4) >> 0x20) +
                              (float)((ulong)uVar11 >> 0x20)) * 0.5,
                              ((float)*(undefined8 *)(pfVar4 + -4) + (float)uVar11) * 0.5);
                *(ulong *)(pfVar4 + 2) =
                     CONCAT44(((float)((ulong)*(undefined8 *)(pfVar4 + 2) >> 0x20) +
                              (float)((ulong)uVar15 >> 0x20)) * 0.5,
                              ((float)*(undefined8 *)(pfVar4 + 2) + (float)uVar15) * 0.5);
                *(ulong *)pfVar4 =
                     CONCAT44(((float)((ulong)*(undefined8 *)pfVar4 >> 0x20) +
                              (float)((ulong)uVar14 >> 0x20)) * 0.5,
                              ((float)*(undefined8 *)pfVar4 + (float)uVar14) * 0.5);
                pfVar4 = pfVar4 + 8;
              } while (uVar8 != 0);
              if (param_5 == uVar6) goto LAB_0065f9dc;
            }
          }
          lVar7 = param_5 - uVar6;
          pfVar3 = pfVar3 + uVar6;
          pfVar5 = param_4 + uVar6;
          do {
            lVar7 = lVar7 + -1;
            *pfVar5 = (*pfVar5 + *pfVar3) * 0.5;
            pfVar3 = pfVar3 + 1;
            pfVar5 = pfVar5 + 1;
          } while (lVar7 != 0);
          goto LAB_0065f9dc;
        }
        pfVar3 = (float *)0x0;
        if (param_7 != 0) {
          pfVar3 = param_6;
        }
        uVar6 = param_7;
        pfVar5 = pfVar3;
        if (*(long *)(param_1 + 0x28) != 1) {
          FUN_0065fcc8(param_1,pfVar3,param_7);
          goto LAB_0065f9dc;
        }
      }
      FUN_0065fbfc(param_1,pfVar3,uVar6,param_4,param_5,pfVar5,param_7,puVar9);
      goto LAB_0065f9dc;
    }
    iVar1 = *(int *)(param_1 + 0x14);
    if (1 < iVar1) {
      if (iVar1 == 2) {
        pfVar3 = (float *)0x0;
        if (param_7 != 0) {
          pfVar3 = param_6;
        }
        memmove(param_4,pfVar3,param_7 << 2);
      }
      else if (iVar1 == 3) {
        pfVar3 = (float *)0x0;
        if (param_7 != 0) {
          pfVar3 = param_6;
        }
        if (*(long *)(param_1 + 0x28) == 1) {
          FUN_0065fb38();
        }
        else {
          FUN_0065fb98(param_1,pfVar3,param_7);
        }
      }
      goto LAB_0065f9dc;
    }
    if (iVar1 == 0) {
      pfVar3 = (float *)0x0;
      if (param_7 != 0) {
        pfVar3 = param_6;
      }
      if (param_5 != 0) {
        do {
          param_5 = param_5 - 1;
          fVar10 = *(float *)(param_1 + 0x10) * (float)uVar6;
          *param_4 = *param_4 * (1.0 - fVar10) + fVar10 * *pfVar3;
          uVar6 = *(long *)(param_1 + 0x20) + 1;
          *(ulong *)(param_1 + 0x20) = uVar6;
          param_4 = param_4 + 1;
          pfVar3 = pfVar3 + 1;
        } while (param_5 != 0);
      }
      goto LAB_0065f9dc;
    }
    if (iVar1 != 1) goto LAB_0065f9dc;
    pfVar3 = (float *)0x0;
    if (param_5 != 0) {
      pfVar3 = param_4;
    }
    pfVar5 = (float *)0x0;
    if (param_7 != 0) {
      pfVar5 = param_6;
    }
    uVar8 = param_5;
    if (param_5 != 0) {
      do {
        uVar8 = uVar8 - 1;
        fVar10 = *(float *)(param_1 + 0x10) * (float)uVar6;
        *param_4 = *param_4 * (1.0 - fVar10) + fVar10 * *pfVar5;
        uVar6 = *(long *)(param_1 + 0x20) + 1;
        *(ulong *)(param_1 + 0x20) = uVar6;
        param_4 = param_4 + 1;
        pfVar5 = pfVar5 + 1;
      } while (uVar8 != 0);
    }
LAB_0065f7cc:
    if (*(long *)(param_1 + 0x28) != 2) goto LAB_0065f9dc;
  }
  else {
    if (uVar6 == 0) goto LAB_0065f3c0;
    param_3 = *(int *)(param_1 + 0x18);
    if (1 < param_3) goto LAB_0065f330;
LAB_0065f3d8:
    if (param_3 == 0) {
      iVar1 = *(int *)(param_1 + 0x14);
      if (iVar1 == 3) {
        if (*(long *)(param_1 + 0x28) == 1) {
          if (param_5 != 0) {
            do {
              param_5 = param_5 - 1;
              fVar10 = *(float *)(param_1 + 0x10) * (float)uVar6;
              *param_4 = fVar10 * *param_4 + (1.0 - fVar10) * (*param_4 + *param_6) * 0.5;
              uVar6 = *(long *)(param_1 + 0x20) + 1;
              *(ulong *)(param_1 + 0x20) = uVar6;
              param_4 = param_4 + 1;
              param_6 = param_6 + 1;
            } while (param_5 != 0);
          }
        }
        else if (param_5 != 0) {
          do {
            param_5 = param_5 - 1;
            fVar10 = *(float *)(param_1 + 0x10) * (float)uVar6;
            fVar13 = (1.0 - fVar10) * (*param_4 + *param_6) * 0.5;
            *param_4 = fVar10 * *param_4 + fVar13;
            *param_6 = fVar13 + fVar10 * *param_6;
            uVar6 = *(long *)(param_1 + 0x20) + 1;
            *(ulong *)(param_1 + 0x20) = uVar6;
            param_4 = param_4 + 1;
            param_6 = param_6 + 1;
          } while (param_5 != 0);
        }
      }
      else if (iVar1 == 2) {
        pfVar3 = (float *)0x0;
        if (param_7 != 0) {
          pfVar3 = param_6;
        }
        if (param_5 != 0) {
          do {
            param_5 = param_5 - 1;
            fVar10 = *(float *)(param_1 + 0x10) * (float)uVar6;
            *param_4 = *pfVar3 * (1.0 - fVar10) + fVar10 * *param_4;
            uVar6 = *(long *)(param_1 + 0x20) + 1;
            *(ulong *)(param_1 + 0x20) = uVar6;
            param_4 = param_4 + 1;
            pfVar3 = pfVar3 + 1;
          } while (param_5 != 0);
        }
      }
      else if ((iVar1 == 1) && (*(long *)(param_1 + 0x28) == 2)) {
        pfVar3 = (float *)0x0;
        if (param_5 != 0) {
          pfVar3 = param_4;
        }
        if (param_7 != 0) {
          do {
            param_7 = param_7 - 1;
            fVar10 = *(float *)(param_1 + 0x10) * (float)uVar6;
            *param_6 = *pfVar3 * (1.0 - fVar10) + fVar10 * *param_6;
            uVar6 = *(long *)(param_1 + 0x20) + 1;
            *(ulong *)(param_1 + 0x20) = uVar6;
            param_6 = param_6 + 1;
            pfVar3 = pfVar3 + 1;
          } while (param_7 != 0);
        }
      }
      goto LAB_0065f9dc;
    }
    if (param_3 != 1) goto LAB_0065f9dc;
    iVar1 = *(int *)(param_1 + 0x14);
    if (1 < iVar1) {
      if (iVar1 != 2) {
        if (iVar1 == 3) {
          if (*(long *)(param_1 + 0x28) == 1) {
            if (param_5 != 0) {
              do {
                param_5 = param_5 - 1;
                fVar10 = *(float *)(param_1 + 0x10) * (float)uVar6;
                *param_4 = fVar10 * *param_4 + (1.0 - fVar10) * (*param_4 + *param_6) * 0.5;
                uVar6 = *(long *)(param_1 + 0x20) + 1;
                *(ulong *)(param_1 + 0x20) = uVar6;
                param_4 = param_4 + 1;
                param_6 = param_6 + 1;
              } while (param_5 != 0);
            }
          }
          else if (param_5 != 0) {
            do {
              param_5 = param_5 - 1;
              fVar10 = *(float *)(param_1 + 0x10) * (float)uVar6;
              fVar10 = fVar10 * *param_4 + (1.0 - fVar10) * (*param_4 + *param_6) * 0.5;
              *param_4 = fVar10;
              *param_6 = fVar10;
              uVar6 = *(long *)(param_1 + 0x20) + 1;
              *(ulong *)(param_1 + 0x20) = uVar6;
              param_4 = param_4 + 1;
              param_6 = param_6 + 1;
            } while (param_5 != 0);
          }
        }
        goto LAB_0065f9dc;
      }
      pfVar5 = (float *)0x0;
      if (param_7 != 0) {
        pfVar5 = param_6;
      }
      pfVar3 = (float *)0x0;
      pfVar4 = param_4;
      uVar8 = param_5;
      if (param_5 != 0) {
        do {
          uVar8 = uVar8 - 1;
          fVar10 = *(float *)(param_1 + 0x10) * (float)uVar6;
          *pfVar4 = *pfVar5 * (1.0 - fVar10) + fVar10 * *pfVar4;
          uVar6 = *(long *)(param_1 + 0x20) + 1;
          *(ulong *)(param_1 + 0x20) = uVar6;
          pfVar3 = param_4;
          pfVar4 = pfVar4 + 1;
          pfVar5 = pfVar5 + 1;
        } while (uVar8 != 0);
      }
      goto LAB_0065f7cc;
    }
    if (iVar1 == 0) {
      if (*(long *)(param_1 + 0x28) == 2) {
        pfVar3 = (float *)0x0;
        if (param_5 != 0) {
          pfVar3 = param_4;
        }
        if (param_7 != 0) {
          do {
            param_7 = param_7 - 1;
            fVar10 = *(float *)(param_1 + 0x10) * (float)uVar6;
            *param_6 = *param_6 * (1.0 - fVar10) + fVar10 * *pfVar3;
            uVar6 = *(long *)(param_1 + 0x20) + 1;
            *(ulong *)(param_1 + 0x20) = uVar6;
            param_6 = param_6 + 1;
            pfVar3 = pfVar3 + 1;
          } while (param_7 != 0);
        }
      }
      goto LAB_0065f9dc;
    }
    if ((iVar1 != 1) || (*(long *)(param_1 + 0x28) != 2)) goto LAB_0065f9dc;
    pfVar3 = (float *)0x0;
    if (param_5 != 0) {
      pfVar3 = param_4;
    }
  }
  memmove(param_6,pfVar3,param_5 << 2);
LAB_0065f9dc:
  lVar7 = *(long *)(param_1 + 0x20);
  if (lVar7 == *(long *)(param_1 + 8)) {
    lVar7 = 0;
    *puVar9 = 0;
  }
  return lVar7 == 0;
}


// ===== 0065fb38  FUN_0065fb38 =====

void FUN_0065fb38(long param_1,float *param_2,undefined8 param_3,float *param_4,long param_5,
                 float *param_6,undefined8 param_7,ulong *param_8)

{
  ulong uVar1;
  float fVar2;
  
  if (param_5 != 0) {
    uVar1 = *param_8;
    do {
      param_5 = param_5 + -1;
      fVar2 = *(float *)(param_1 + 0x10) * (float)uVar1;
      *param_4 = fVar2 * *param_2 + (1.0 - fVar2) * (*param_4 + *param_6) * 0.5;
      uVar1 = *param_8 + 1;
      *param_8 = uVar1;
      param_2 = param_2 + 1;
      param_4 = param_4 + 1;
      param_6 = param_6 + 1;
    } while (param_5 != 0);
  }
  return;
}


// ===== 0065fb98  FUN_0065fb98 =====

void FUN_0065fb98(long param_1,float *param_2,undefined8 param_3,float *param_4,long param_5,
                 float *param_6,undefined8 param_7,ulong *param_8)

{
  ulong uVar1;
  float fVar2;
  
  if (param_5 != 0) {
    uVar1 = *param_8;
    do {
      param_5 = param_5 + -1;
      fVar2 = *(float *)(param_1 + 0x10) * (float)uVar1;
      fVar2 = fVar2 * *param_2 + (1.0 - fVar2) * (*param_4 + *param_6) * 0.5;
      *param_4 = fVar2;
      *param_6 = fVar2;
      uVar1 = *param_8 + 1;
      *param_8 = uVar1;
      param_2 = param_2 + 1;
      param_4 = param_4 + 1;
      param_6 = param_6 + 1;
    } while (param_5 != 0);
  }
  return;
}


// ===== 0065fbfc  FUN_0065fbfc =====

void FUN_0065fbfc(long param_1,float *param_2,undefined8 param_3,float *param_4,long param_5,
                 float *param_6,undefined8 param_7,ulong *param_8)

{
  ulong uVar1;
  float fVar2;
  
  if (param_5 != 0) {
    uVar1 = *param_8;
    do {
      param_5 = param_5 + -1;
      fVar2 = *(float *)(param_1 + 0x10) * (float)uVar1;
      *param_4 = (1.0 - fVar2) * *param_2 + fVar2 * (*param_4 + *param_6) * 0.5;
      uVar1 = *param_8 + 1;
      *param_8 = uVar1;
      param_2 = param_2 + 1;
      param_4 = param_4 + 1;
      param_6 = param_6 + 1;
    } while (param_5 != 0);
  }
  return;
}


// ===== 0065fc5c  FUN_0065fc5c =====

void FUN_0065fc5c(long param_1,float *param_2,long param_3,float *param_4,undefined8 param_5,
                 ulong *param_6)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  
  if (param_3 != 0) {
    uVar1 = *param_6;
    do {
      param_3 = param_3 + -1;
      fVar2 = *(float *)(param_1 + 0x10) * (float)uVar1;
      fVar3 = 1.0 - fVar2;
      fVar2 = fVar2 * (*param_2 + *param_4) * 0.5;
      *param_2 = *param_2 * fVar3 + fVar2;
      *param_4 = fVar3 * *param_4 + fVar2;
      uVar1 = *param_6 + 1;
      *param_6 = uVar1;
      param_2 = param_2 + 1;
      param_4 = param_4 + 1;
    } while (param_3 != 0);
  }
  return;
}


// ===== 0065fcc8  FUN_0065fcc8 =====

void FUN_0065fcc8(long param_1,float *param_2,undefined8 param_3,float *param_4,long param_5,
                 float *param_6,undefined8 param_7,ulong *param_8)

{
  ulong uVar1;
  float fVar2;
  
  if (param_5 != 0) {
    uVar1 = *param_8;
    do {
      param_5 = param_5 + -1;
      fVar2 = *(float *)(param_1 + 0x10) * (float)uVar1;
      fVar2 = (1.0 - fVar2) * *param_2 + fVar2 * (*param_4 + *param_6) * 0.5;
      *param_4 = fVar2;
      *param_6 = fVar2;
      uVar1 = *param_8 + 1;
      *param_8 = uVar1;
      param_2 = param_2 + 1;
      param_4 = param_4 + 1;
      param_6 = param_6 + 1;
    } while (param_5 != 0);
  }
  return;
}


// ===== 0065fd2c  FUN_0065fd2c =====

void FUN_0065fd2c(float *param_1,ulong param_2)

{
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  *param_1 = 1.0 / (float)param_2;
  return;
}


// ===== 0065fd48  FUN_0065fd48 =====

void FUN_0065fd48(float *param_1,float *param_2,long param_3,float *param_4,long param_5)

{
  ulong uVar1;
  float *pfVar2;
  float *pfVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar5 = 0.0;
  fVar6 = 0.0;
  if (param_3 * 4 != 0) {
    uVar1 = param_3 * 4 - 4;
    pfVar3 = param_2;
    if (uVar1 != 0) {
      pfVar3 = param_2 + 1;
      uVar1 = (uVar1 >> 2) + 1;
      uVar4 = uVar1 & 0x7ffffffffffffffe;
      do {
        pfVar2 = pfVar3 + -1;
        fVar7 = *pfVar3;
        uVar4 = uVar4 - 2;
        pfVar3 = pfVar3 + 2;
        fVar6 = fVar6 + *pfVar2 + fVar7;
      } while (uVar4 != 0);
      pfVar3 = param_2 + (uVar1 & 0x7ffffffffffffffe);
      if (uVar1 == (uVar1 & 0x7ffffffffffffffe)) goto LAB_0065fdbc;
    }
    do {
      pfVar2 = pfVar3 + 1;
      fVar6 = fVar6 + *pfVar3;
      pfVar3 = pfVar2;
    } while (pfVar2 != param_2 + param_3);
  }
LAB_0065fdbc:
  param_1[1] = param_1[1] + (*param_1 * fVar6 - param_1[1]) * 0.05;
  if (param_5 * 4 != 0) {
    uVar1 = param_5 * 4 - 4;
    if (uVar1 == 0) {
      fVar5 = 0.0;
      pfVar3 = param_4;
    }
    else {
      fVar5 = 0.0;
      pfVar3 = param_4 + 1;
      uVar1 = (uVar1 >> 2) + 1;
      uVar4 = uVar1 & 0x7ffffffffffffffe;
      do {
        pfVar2 = pfVar3 + -1;
        fVar6 = *pfVar3;
        uVar4 = uVar4 - 2;
        pfVar3 = pfVar3 + 2;
        fVar5 = fVar5 + *pfVar2 + fVar6;
      } while (uVar4 != 0);
      pfVar3 = param_4 + (uVar1 & 0x7ffffffffffffffe);
      if (uVar1 == (uVar1 & 0x7ffffffffffffffe)) goto LAB_0065fe4c;
    }
    do {
      pfVar2 = pfVar3 + 1;
      fVar5 = fVar5 + *pfVar3;
      pfVar3 = pfVar2;
    } while (pfVar2 != param_4 + param_5);
  }
LAB_0065fe4c:
  param_1[2] = param_1[2] + (*param_1 * fVar5 - param_1[2]) * 0.05;
  return;
}


// ===== 0065fe74  FUN_0065fe74 =====

void FUN_0065fe74(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}


// ===== 0065fe80  FUN_0065fe80 =====

void FUN_0065fe80(float *param_1,float *param_2,long param_3,float *param_4,long param_5,
                 float *param_6)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  ulong uVar4;
  float *pfVar5;
  float *pfVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  fVar8 = 0.0;
  fVar10 = 0.0;
  if (param_3 * 4 != 0) {
    uVar4 = param_3 * 4 - 4;
    fVar9 = *param_6;
    pfVar5 = param_2;
    if (0x1b < uVar4) {
      pfVar5 = param_2 + 4;
      uVar4 = (uVar4 >> 2) + 1;
      uVar7 = uVar4 & 0x7ffffffffffffff8;
      do {
        pfVar6 = pfVar5 + -4;
        pfVar1 = pfVar5 + -2;
        pfVar3 = pfVar5 + 2;
        uVar15 = *(undefined8 *)pfVar5;
        uVar7 = uVar7 - 8;
        pfVar5 = pfVar5 + 8;
        fVar11 = (float)*(undefined8 *)pfVar6 - fVar9;
        fVar12 = (float)((ulong)*(undefined8 *)pfVar6 >> 0x20) - fVar9;
        fVar13 = (float)*(undefined8 *)pfVar1 - fVar9;
        fVar14 = (float)((ulong)*(undefined8 *)pfVar1 >> 0x20) - fVar9;
        fVar16 = (float)uVar15 - fVar9;
        fVar17 = (float)((ulong)uVar15 >> 0x20) - fVar9;
        fVar18 = (float)*(undefined8 *)pfVar3 - fVar9;
        fVar19 = (float)((ulong)*(undefined8 *)pfVar3 >> 0x20) - fVar9;
        fVar10 = fVar10 + fVar11 * fVar11 + fVar12 * fVar12 + fVar13 * fVar13 + fVar14 * fVar14 +
                 fVar16 * fVar16 + fVar17 * fVar17 + fVar18 * fVar18 + fVar19 * fVar19;
      } while (uVar7 != 0);
      pfVar5 = param_2 + (uVar4 & 0x7ffffffffffffff8);
      if (uVar4 == (uVar4 & 0x7ffffffffffffff8)) goto LAB_0065ff44;
    }
    do {
      pfVar6 = pfVar5 + 1;
      fVar10 = fVar10 + (*pfVar5 - fVar9) * (*pfVar5 - fVar9);
      pfVar5 = pfVar6;
    } while (pfVar6 != param_2 + param_3);
  }
LAB_0065ff44:
  *param_1 = *param_1 + (fVar10 - *param_1) * 0.005;
  if (param_5 * 4 != 0) {
    uVar4 = param_5 * 4 - 4;
    fVar10 = param_6[1];
    if (uVar4 < 0x1c) {
      fVar8 = 0.0;
      pfVar6 = param_4;
    }
    else {
      fVar8 = 0.0;
      pfVar5 = param_4 + 4;
      uVar4 = (uVar4 >> 2) + 1;
      uVar7 = uVar4 & 0x7ffffffffffffff8;
      pfVar6 = param_4 + (uVar4 & 0x7ffffffffffffff8);
      do {
        pfVar1 = pfVar5 + -4;
        pfVar3 = pfVar5 + -2;
        pfVar2 = pfVar5 + 2;
        uVar15 = *(undefined8 *)pfVar5;
        uVar7 = uVar7 - 8;
        pfVar5 = pfVar5 + 8;
        fVar9 = (float)*(undefined8 *)pfVar1 - fVar10;
        fVar11 = (float)((ulong)*(undefined8 *)pfVar1 >> 0x20) - fVar10;
        fVar12 = (float)*(undefined8 *)pfVar3 - fVar10;
        fVar13 = (float)((ulong)*(undefined8 *)pfVar3 >> 0x20) - fVar10;
        fVar14 = (float)uVar15 - fVar10;
        fVar16 = (float)((ulong)uVar15 >> 0x20) - fVar10;
        fVar17 = (float)*(undefined8 *)pfVar2 - fVar10;
        fVar18 = (float)((ulong)*(undefined8 *)pfVar2 >> 0x20) - fVar10;
        fVar8 = fVar8 + fVar9 * fVar9 + fVar11 * fVar11 + fVar12 * fVar12 + fVar13 * fVar13 +
                fVar14 * fVar14 + fVar16 * fVar16 + fVar17 * fVar17 + fVar18 * fVar18;
      } while (uVar7 != 0);
      if (uVar4 == (uVar4 & 0x7ffffffffffffff8)) goto LAB_00660024;
    }
    do {
      pfVar5 = pfVar6 + 1;
      fVar8 = fVar8 + (*pfVar6 - fVar10) * (*pfVar6 - fVar10);
      pfVar6 = pfVar5;
    } while (pfVar5 != param_4 + param_5);
  }
LAB_00660024:
  param_1[1] = param_1[1] + (fVar8 - param_1[1]) * 0.005;
  return;
}


// ===== 00660048  FUN_00660048 =====

void FUN_00660048(undefined2 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 6) = 0;
  uVar1 = DAT_001f55d0;
  *param_1 = 1;
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined8 *)(param_1 + 2) = uVar1;
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}


// ===== 00660070  FUN_00660070 =====

undefined4 FUN_00660070(char *param_1,float *param_2,int *param_3,float *param_4)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if ((100 < *param_3) && (100 < param_3[1])) goto LAB_00660088;
  if (*param_1 == '\x01') {
    if (*param_3 < 0x65) {
      if ((param_3[1] < 0x65) ||
         (fVar9 = param_2[1], (float)*(ulong *)(param_1 + 0x10) * 10000.0 <= fVar9))
      goto LAB_00660110;
      fVar10 = *param_2;
LAB_00660100:
      bVar2 = fVar9 * 100.0 < fVar10;
      if (!bVar2) goto LAB_00660118;
    }
    else {
      fVar9 = *param_2;
      if (fVar9 < (float)*(ulong *)(param_1 + 0x10) * 10000.0) {
        fVar10 = param_2[1];
        goto LAB_00660100;
      }
LAB_00660110:
      bVar2 = false;
LAB_00660118:
      if (*(int *)(param_1 + 4) != 1) goto LAB_00660124;
    }
    if (bVar2) {
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
      *(undefined8 *)(param_1 + 4) = DAT_001f5990;
      return 3;
    }
    iVar1 = *(int *)(param_1 + 0xc);
    *(int *)(param_1 + 0xc) = iVar1 + 1;
    if (iVar1 + 1 < 0x3e9) goto LAB_00660088;
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
  }
LAB_00660124:
  if (param_1[2] == '\x01') {
    fVar10 = *param_2;
    fVar9 = param_2[1];
    bVar4 = fVar10 == fVar9;
    fVar12 = fVar9 * 50.0;
    fVar11 = fVar10 * 50.0;
    bVar2 = fVar10 < fVar9 != (NAN(fVar10) || NAN(fVar9));
    bVar3 = false;
    bVar5 = false;
    bVar6 = false;
    if (fVar10 == fVar12 || fVar10 < fVar12 != (NAN(fVar10) || NAN(fVar12))) {
      bVar3 = false;
      bVar5 = false;
      bVar6 = true;
      if (!NAN(fVar9) && !NAN(fVar11)) {
        bVar3 = fVar9 < fVar11;
        bVar5 = fVar9 == fVar11;
        bVar6 = false;
      }
    }
    bVar3 = bVar3 == bVar6;
    bVar6 = !bVar5;
    if (*(int *)(param_1 + 4) == 3) {
      if (!bVar5 && bVar3) {
        if (((bVar6 && bVar3) && (bVar4 || bVar2)) || (*(int *)(param_1 + 8) != 1)) {
          if (((!bVar6 || !bVar3) || !bVar4 && !bVar2) || (*(int *)(param_1 + 8) != 2))
          goto LAB_00660170;
          uVar7 = 2;
        }
        else {
          uVar7 = 1;
        }
LAB_006602d4:
        uVar8 = 3;
        param_1[0xc] = '\0';
        param_1[0xd] = '\0';
        param_1[0xe] = '\0';
        param_1[0xf] = '\0';
        goto LAB_00660354;
      }
LAB_00660170:
      iVar1 = *(int *)(param_1 + 0xc);
      *(int *)(param_1 + 0xc) = iVar1 + 1;
      if (iVar1 + 1 < 0x12d) goto LAB_00660088;
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
      *(undefined8 *)(param_1 + 4) = DAT_001f55d0;
    }
    else if (!bVar5 && bVar3) {
      uVar7 = 1;
      if ((bVar6 && bVar3) && (bVar4 || bVar2)) {
        uVar7 = 2;
      }
      goto LAB_006602d4;
    }
  }
  if (param_1[1] != '\x01') goto LAB_00660334;
  fVar9 = *param_2;
  fVar10 = param_2[1];
  bVar2 = false;
  bVar3 = true;
  fVar11 = fVar9 * 50.0;
  if (fVar10 == fVar11 || fVar10 < fVar11 != (NAN(fVar10) || NAN(fVar11))) {
    fVar11 = fVar10 * 50.0;
    bVar4 = true;
    if (fVar9 == fVar11 || fVar9 < fVar11 != (NAN(fVar9) || NAN(fVar11))) {
      fVar11 = fVar10 * 4.0;
      if (((fVar9 == fVar11 || fVar9 < fVar11 != (NAN(fVar9) || NAN(fVar11))) ||
          (fVar11 = *param_4, fVar11 == 0.8 || fVar11 < 0.8 != NAN(fVar11))) || (0.1 <= param_4[1]))
      {
        fVar9 = fVar9 * 4.0;
        if (((fVar10 != fVar9 && fVar10 < fVar9 == (NAN(fVar10) || NAN(fVar9))) &&
            (fVar9 = param_4[1], fVar9 != 0.8 && fVar9 < 0.8 == NAN(fVar9))) && (*param_4 < 0.1)) {
          bVar3 = false;
        }
        bVar2 = false;
      }
      else {
        bVar3 = false;
        bVar4 = false;
        bVar2 = true;
      }
    }
  }
  else {
    bVar4 = true;
  }
  if (*(int *)(param_1 + 4) != 2) {
    if (bVar3) goto LAB_00660334;
LAB_00660340:
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    uVar8 = 2;
    uVar7 = 1;
    if (!bVar4) {
      uVar7 = 2;
    }
LAB_00660354:
    *(undefined4 *)(param_1 + 4) = uVar8;
    *(undefined4 *)(param_1 + 8) = uVar7;
    return uVar7;
  }
  if (!bVar3) {
    bVar3 = false;
    if (*(int *)(param_1 + 8) == 1) {
      bVar3 = bVar4;
    }
    bVar5 = false;
    if (*(int *)(param_1 + 8) == 2) {
      bVar5 = bVar2;
    }
    if ((bVar3) || (bVar5)) goto LAB_00660340;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = iVar1 + 1;
  if (iVar1 + 1 < 0x12d) {
LAB_00660088:
    return *(undefined4 *)(param_1 + 8);
  }
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
LAB_00660334:
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  return 0;
}


// ===== 00660374  FUN_00660374 =====

void FUN_00660374(float *param_1,ulong param_2)

{
  param_1[3] = 0.0;
  param_1[4] = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  *param_1 = 1.0 / (float)param_2;
  return;
}


// ===== 00660394  FUN_00660394 =====

void FUN_00660394(float *param_1,float *param_2,long param_3,float *param_4,long param_5,
                 float *param_6)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  param_3 = param_3 << 2;
  fVar3 = *param_6;
  fVar1 = (float)((int)param_1[1] + 1);
  param_1[1] = fVar1;
  if (param_3 == 0) {
    fVar3 = 0.0;
  }
  else {
    iVar2 = 0;
    do {
      fVar4 = ABS(*param_2 - fVar3);
      if (fVar4 != 32000.0 && fVar4 < 32000.0 == NAN(fVar4)) {
        iVar2 = iVar2 + 1;
      }
      if (fVar4 != 100.0 && fVar4 < 100.0 == NAN(fVar4)) {
        fVar1 = 0.0;
        param_1[1] = 0.0;
      }
      param_3 = param_3 + -4;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
    fVar3 = (float)iVar2 * 0.050000012;
  }
  if (fVar1 == 0.0) {
    param_1[3] = *param_1 * fVar3 + param_1[3] * 0.95;
  }
  param_5 = param_5 << 2;
  fVar3 = param_6[1];
  fVar1 = (float)((int)param_1[2] + 1);
  param_1[2] = fVar1;
  if (param_5 == 0) {
    fVar3 = 0.0;
  }
  else {
    iVar2 = 0;
    do {
      fVar4 = ABS(*param_4 - fVar3);
      if (fVar4 != 32000.0 && fVar4 < 32000.0 == NAN(fVar4)) {
        iVar2 = iVar2 + 1;
      }
      if (fVar4 != 100.0 && fVar4 < 100.0 == NAN(fVar4)) {
        fVar1 = 0.0;
        param_1[2] = 0.0;
      }
      param_5 = param_5 + -4;
      param_4 = param_4 + 1;
    } while (param_5 != 0);
    fVar3 = (float)iVar2 * 0.050000012;
  }
  if (fVar1 != 0.0) {
    return;
  }
  param_1[4] = *param_1 * fVar3 + param_1[4] * 0.95;
  return;
}


// ===== 006604e8  FUN_006604e8 =====

void FUN_006604e8(int *param_1,int param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  void *pvVar3;
  long *plVar4;
  void *pvVar5;
  ulong uVar6;
  long lVar7;
  
  *param_1 = param_2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  plVar4 = (long *)(param_1 + 2);
  *plVar4 = 0;
  FUN_006605d4(plVar4,param_3);
  lVar7 = *plVar4;
  puVar1 = &UNK_001fef04;
  if (*param_1 != 32000) {
    puVar1 = &DAT_001feec8;
  }
  puVar2 = &UNK_001fef40;
  if (*param_1 != 48000) {
    puVar2 = puVar1;
  }
  if (*(long *)(param_1 + 4) != lVar7) {
    uVar6 = 0;
    do {
      pvVar3 = operator_new(0x18);
      FUN_00660af0(pvVar3,puVar2,3);
      pvVar5 = *(void **)(lVar7 + uVar6 * 8);
      *(void **)(lVar7 + uVar6 * 8) = pvVar3;
      if (pvVar5 != (void *)0x0) {
        FUN_00660bb8(pvVar5);
        operator_delete(pvVar5);
      }
      lVar7 = *(long *)(param_1 + 2);
      uVar6 = uVar6 + 1;
    } while (uVar6 < (ulong)(*(long *)(param_1 + 4) - lVar7 >> 3));
  }
  return;
}


// ===== 006605d4  FUN_006605d4 =====

void FUN_006605d4(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  void *pvVar8;
  size_t __n;
  ulong uVar9;
  void *__dest;
  undefined8 *puVar10;
  ulong uVar11;
  
  pvVar8 = (void *)*param_1;
  puVar7 = (undefined8 *)param_1[1];
  __n = (long)puVar7 - (long)pvVar8;
  uVar11 = (long)__n >> 3;
  uVar6 = param_2 - uVar11;
  if (param_2 < uVar11 || uVar6 == 0) {
    if (param_2 < uVar11) {
      puVar10 = (undefined8 *)((long)pvVar8 + param_2 * 8);
      while (puVar10 != puVar7) {
        puVar7 = puVar7 + -1;
        if (puVar7 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        pvVar8 = (void *)*puVar7;
        *puVar7 = 0;
        if (pvVar8 != (void *)0x0) {
          FUN_00660bb8(pvVar8);
          operator_delete(pvVar8);
        }
      }
      param_1[1] = puVar10;
    }
  }
  else {
    uVar9 = param_1[2] - (long)pvVar8;
    if ((ulong)((long)uVar9 >> 3) < param_2) {
      if (param_2 >> 0x3d == 0) {
        uVar1 = (long)uVar9 >> 2;
        if ((ulong)((long)uVar9 >> 2) <= param_2) {
          uVar1 = param_2;
        }
        if (0x7ffffffffffffff7 < uVar9) {
          uVar1 = 0x1fffffffffffffff;
        }
        if (uVar1 >> 0x3d == 0) {
          pvVar3 = operator_new(uVar1 * 8);
          if (uVar6 * 8 == 0) {
            puVar10 = (undefined8 *)((long)pvVar3 + __n);
          }
          else {
            puVar10 = (undefined8 *)((long)pvVar3 + uVar6 * 8 + __n);
            uVar6 = (ulong)((long)pvVar8 + (-(long)pvVar3 - (long)puVar7)) >> 3;
            uVar9 = (param_2 * 8 - __n) - 8 >> 3;
            if (uVar9 <= uVar6) {
              uVar6 = uVar9;
            }
            if (uVar6 < 8) {
              puVar4 = (undefined8 *)((long)pvVar3 + __n);
            }
            else {
              puVar4 = (undefined8 *)((long)pvVar3 + __n);
              if ((((int)pvVar8 - (int)puVar7) - (int)pvVar3 & 7U) == 0) {
                uVar9 = uVar6 + 1 & 3;
                uVar2 = 4;
                if (uVar9 != 0) {
                  uVar2 = uVar9;
                }
                lVar5 = (uVar6 + 1) - uVar2;
                puVar7 = (undefined8 *)((long)pvVar3 + __n + 0x10);
                puVar4 = (undefined8 *)((long)pvVar3 + lVar5 * 8 + __n);
                do {
                  lVar5 = lVar5 + -4;
                  puVar7[-1] = 0;
                  puVar7[-2] = 0;
                  puVar7[1] = 0;
                  *puVar7 = 0;
                  puVar7 = puVar7 + 4;
                } while (lVar5 != 0);
              }
            }
            do {
              if (puVar4 == (undefined8 *)0x0) goto LAB_0066084c;
              puVar7 = puVar4 + 1;
              *puVar4 = 0;
              puVar4 = puVar7;
            } while (puVar7 != puVar10);
          }
          __dest = (void *)((long)pvVar3 + uVar11 * -8 + __n);
          memcpy(__dest,pvVar8,__n);
          *param_1 = __dest;
          param_1[1] = puVar10;
          param_1[2] = (void *)((long)pvVar3 + uVar1 * 8);
          if (pvVar8 == (void *)0x0) {
            return;
          }
          operator_delete(pvVar8);
          return;
        }
      }
      else {
        FUN_00660ad8();
      }
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    puVar10 = puVar7;
    if ((uVar6 & 0x1fffffffffffffff) != 0) {
      puVar10 = puVar7 + uVar6;
      uVar11 = (param_2 * 8 - __n) - 8 >> 3;
      uVar6 = (ulong)-(long)puVar7 >> 3;
      if (uVar11 <= (ulong)-(long)puVar7 >> 3) {
        uVar6 = uVar11;
      }
      if ((5 < uVar6) && ((-(int)puVar7 & 7U) == 0)) {
        uVar11 = uVar6 + 1 & 3;
        uVar9 = 4;
        if (uVar11 != 0) {
          uVar9 = uVar11;
        }
        puVar4 = puVar7 + 2;
        lVar5 = (uVar6 + 1) - uVar9;
        puVar7 = puVar7 + lVar5;
        do {
          lVar5 = lVar5 + -4;
          puVar4[-1] = 0;
          puVar4[-2] = 0;
          puVar4[1] = 0;
          *puVar4 = 0;
          puVar4 = puVar4 + 4;
        } while (lVar5 != 0);
      }
      do {
        if (puVar7 == (undefined8 *)0x0) {
LAB_0066084c:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        puVar4 = puVar7 + 1;
        *puVar7 = 0;
        puVar7 = puVar4;
      } while (puVar4 != puVar10);
    }
    param_1[1] = puVar10;
  }
  return;
}


// ===== 0066087c  FUN_0066087c =====

void FUN_0066087c(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(param_1 + 8);
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  puVar1 = puVar4;
  if (puVar4 != puVar2) {
    do {
      puVar2 = puVar2 + -1;
      if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      pvVar3 = (void *)*puVar2;
      *puVar2 = 0;
      if (pvVar3 != (void *)0x0) {
        FUN_00660bb8(pvVar3);
        operator_delete(pvVar3);
      }
    } while (puVar2 != puVar4);
    puVar1 = *(undefined8 **)(param_1 + 8);
  }
  *(undefined8 **)(param_1 + 0x10) = puVar4;
  operator_delete(puVar1);
  return;
}


// ===== 00660934  FUN_00660934 =====

void FUN_00660934(long param_1,long param_2,ulong param_3)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  
  if ((param_3 & 1) == 0) {
    if (*(long *)(param_2 + 0x48) != 0) {
      uVar3 = 0;
      do {
        if ((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) <= uVar3)
        goto LAB_00660a10;
        uVar1 = 0;
        if (*(long *)(param_2 + 0x20) != 0) {
          uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x60) + 8) + uVar3 * 8);
        }
        FUN_00660dcc(*(undefined8 *)(*(long *)(param_1 + 8) + uVar3 * 8),uVar1);
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(ulong *)(param_2 + 0x48));
    }
  }
  else if (*(long *)(param_2 + 0x48) != 0) {
    uVar3 = 0;
    do {
      lVar2 = *(long *)(param_2 + 0x68);
      if (lVar2 == 0) {
        lVar2 = *(long *)(param_2 + 0x60);
      }
      if ((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) <= uVar3) {
LAB_00660a10:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                  );
      }
      uVar1 = 0;
      if (*(long *)(param_2 + 0x58) != 0) {
        uVar1 = *(undefined8 *)(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 0x38) * uVar3 * 8);
      }
      FUN_00660dcc(*(undefined8 *)(*(long *)(param_1 + 8) + uVar3 * 8),uVar1);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ulong *)(param_2 + 0x48));
  }
  return;
}


// ===== 00660a24  FUN_00660a24 =====

void FUN_00660a24(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  lVar3 = *param_2;
  if (param_2[1] != lVar3) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      if ((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) <= uVar5) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                  );
      }
      lVar1 = *(long *)(lVar3 + lVar4);
      lVar2 = ((long *)(lVar3 + lVar4))[1] - lVar1;
      lVar3 = 0;
      if (lVar2 != 0) {
        lVar3 = lVar1;
      }
      FUN_00660dcc(*(undefined8 *)(*(long *)(param_1 + 8) + uVar5 * 8),lVar3,lVar2 >> 2);
      lVar3 = *param_2;
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x18;
    } while (uVar5 < (ulong)((param_2[1] - lVar3 >> 3) * -0x5555555555555555));
  }
  return;
}


// ===== 00660ad8  FUN_00660ad8 =====

void FUN_00660ad8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00660af0  FUN_00660af0 =====

void FUN_00660af0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_3 = param_3 * 0x14;
  if (param_3 != 0) {
    puVar1 = (undefined8 *)0x0;
    do {
      local_50 = *(uint *)(param_2 + 2);
      uStack_58 = param_2[1];
      local_60 = *param_2;
      local_44 = 0;
      uStack_40 = 0;
      local_4c = 0;
      uStack_48 = 0;
      if (puVar1 < (undefined8 *)param_1[2]) {
        if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        *(undefined4 *)(puVar1 + 4) = 0;
        puVar1[1] = uStack_58;
        *puVar1 = local_60;
        puVar1[3] = 0;
        puVar1[2] = (ulong)local_50;
        puVar1 = (undefined8 *)((long)puVar1 + 0x24);
      }
      else {
        puVar1 = (undefined8 *)FUN_00660e58(param_1,&local_60);
      }
      param_3 = param_3 + -0x14;
      param_2 = (undefined8 *)((long)param_2 + 0x14);
      param_1[1] = puVar1;
    } while (param_3 != 0);
  }
  return;
}


// ===== 00660bb8  FUN_00660bb8 =====

void FUN_00660bb8(undefined8 *param_1)

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
  uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2) * 0x31c71c71c71c71c7) >> 2;
  uVar4 = (long)pvVar2 * -0x31c71c71c71c71c7 - 4U >> 2;
  if (uVar4 <= uVar3) {
    uVar3 = uVar4;
  }
  if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 3U) == 0)) {
    uVar3 = uVar3 & 0x3ffffffffffffffe;
    pvVar2 = (void *)((long)pvVar2 + uVar3 * -0x24);
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
    pvVar2 = (void *)((long)pvVar2 + -0x24);
  } while (pvVar2 != (void *)0x0);
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00660c80  FUN_00660c80 =====

void FUN_00660c80(long *param_1,float *param_2,long param_3,float *param_4,long param_5)

{
  float *pfVar1;
  ulong uVar2;
  float *pfVar3;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  long lVar4;
  
  pfVar3 = (float *)*param_1;
  if (pfVar3 == (float *)param_1[1]) {
    memmove(param_4,param_2,param_3 << 2);
    return;
  }
  fVar9 = pfVar3[5];
  fVar7 = pfVar3[6];
  fVar10 = pfVar3[7];
  fVar5 = pfVar3[8];
  if (param_3 != 0) {
    fVar14 = pfVar3[3];
    fVar11 = pfVar3[4];
    fVar12 = *pfVar3;
    fVar13 = pfVar3[1];
    fVar15 = pfVar3[2];
    pfVar1 = param_4;
    fVar6 = fVar5;
    fVar8 = fVar7;
    do {
      fVar5 = fVar10;
      fVar7 = fVar9;
      param_3 = param_3 + -1;
      fVar9 = *param_2;
      fVar10 = ((fVar15 * fVar8 + fVar13 * fVar7 + fVar12 * fVar9) - fVar14 * fVar5) -
               fVar11 * fVar6;
      *pfVar1 = fVar10;
      param_2 = param_2 + 1;
      pfVar1 = pfVar1 + 1;
      fVar6 = fVar5;
      fVar8 = fVar7;
    } while (param_3 != 0);
  }
  pfVar3[5] = fVar9;
  pfVar3[6] = fVar7;
  pfVar3[7] = fVar10;
  pfVar3[8] = fVar5;
  lVar4 = *param_1;
  if (1 < (ulong)((param_1[1] - lVar4 >> 2) * -0x71c71c71c71c71c7)) {
    uVar2 = 1;
    do {
      pfVar3 = (float *)(lVar4 + uVar2 * 0x24);
      fVar9 = pfVar3[5];
      fVar7 = pfVar3[6];
      fVar10 = pfVar3[7];
      fVar5 = pfVar3[8];
      if (param_5 != 0) {
        fVar14 = pfVar3[3];
        fVar11 = pfVar3[4];
        fVar12 = *pfVar3;
        fVar13 = pfVar3[1];
        fVar15 = pfVar3[2];
        pfVar1 = param_4;
        lVar4 = param_5;
        fVar6 = fVar5;
        fVar8 = fVar7;
        do {
          fVar5 = fVar10;
          fVar7 = fVar9;
          fVar9 = *pfVar1;
          lVar4 = lVar4 + -1;
          fVar10 = ((fVar15 * fVar8 + fVar13 * fVar7 + fVar12 * fVar9) - fVar14 * fVar5) -
                   fVar11 * fVar6;
          *pfVar1 = fVar10;
          pfVar1 = pfVar1 + 1;
          fVar6 = fVar5;
          fVar8 = fVar7;
        } while (lVar4 != 0);
      }
      pfVar3[5] = fVar9;
      pfVar3[6] = fVar7;
      uVar2 = uVar2 + 1;
      pfVar3[7] = fVar10;
      pfVar3[8] = fVar5;
      lVar4 = *param_1;
    } while (uVar2 < (ulong)((param_1[1] - lVar4 >> 2) * -0x71c71c71c71c71c7));
  }
  return;
}


// ===== 00660dcc  FUN_00660dcc =====

void FUN_00660dcc(long *param_1,float *param_2,long param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  pfVar1 = (float *)param_1[1];
  for (pfVar2 = (float *)*param_1; pfVar2 != pfVar1; pfVar2 = pfVar2 + 9) {
    fVar9 = pfVar2[5];
    fVar7 = pfVar2[6];
    fVar10 = pfVar2[7];
    fVar5 = pfVar2[8];
    if (param_3 != 0) {
      fVar14 = pfVar2[3];
      fVar11 = pfVar2[4];
      fVar12 = *pfVar2;
      fVar13 = pfVar2[1];
      fVar15 = pfVar2[2];
      pfVar3 = param_2;
      lVar4 = param_3;
      fVar6 = fVar5;
      fVar8 = fVar7;
      do {
        fVar5 = fVar10;
        fVar7 = fVar9;
        fVar9 = *pfVar3;
        lVar4 = lVar4 + -1;
        fVar10 = ((fVar15 * fVar8 + fVar13 * fVar7 + fVar12 * fVar9) - fVar14 * fVar5) -
                 fVar11 * fVar6;
        *pfVar3 = fVar10;
        pfVar3 = pfVar3 + 1;
        fVar6 = fVar5;
        fVar8 = fVar7;
      } while (lVar4 != 0);
    }
    pfVar2[5] = fVar9;
    pfVar2[6] = fVar7;
    pfVar2[7] = fVar10;
    pfVar2[8] = fVar5;
  }
  return;
}


// ===== 00660e58  FUN_00660e58 =====

long FUN_00660e58(long *param_1,undefined8 *param_2)

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
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar6 = (undefined8 *)(param_1[1] - *param_1);
  uVar3 = ((long)puVar6 >> 2) * -0x71c71c71c71c71c7 + 1;
  if (0x71c71c71c71c71c < uVar3) {
    FUN_00660f94();
LAB_00660f90:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  lVar4 = param_1[2] - *param_1 >> 2;
  uVar5 = lVar4 * 0x1c71c71c71c71c72;
  if (uVar5 < uVar3 || uVar5 - uVar3 == 0) {
    uVar5 = uVar3;
  }
  if (0x38e38e38e38e38d < (ulong)(lVar4 * -0x71c71c71c71c71c7)) {
    uVar5 = 0x71c71c71c71c71c;
  }
  if (uVar5 == 0) {
    pvVar1 = (void *)0x0;
  }
  else {
    if (0x71c71c71c71c71c < uVar5) goto LAB_00660f90;
    pvVar1 = operator_new(uVar5 * 0x24);
    puVar6 = (undefined8 *)((long)pvVar1 + (long)puVar6);
  }
  if (puVar6 != (undefined8 *)0x0) {
    uVar10 = param_2[1];
    uVar9 = *param_2;
    uVar8 = param_2[3];
    uVar7 = param_2[2];
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)(param_2 + 4);
    puVar6[1] = uVar10;
    *puVar6 = uVar9;
    puVar6[3] = uVar8;
    puVar6[2] = uVar7;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar6 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar2 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)puVar6 + 0x24;
    param_1[2] = (long)((long)pvVar1 + uVar5 * 0x24);
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    return (long)puVar6 + 0x24;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00660f94  FUN_00660f94 =====

void FUN_00660f94(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00660fac  FUN_00660fac =====

void FUN_00660fac(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}


// ===== 00660fb8  FUN_00660fb8 =====

void FUN_00660fb8(undefined8 *param_1,int *param_2)

{
  int iVar1;
  byte bVar2;
  undefined8 local_30;
  pthread_t local_28;
  
  *param_1 = param_2;
  local_28 = pthread_self();
  iVar1 = *param_2;
  *param_2 = *param_2 + 1;
  if (iVar1 == 0) {
    *(pthread_t *)(param_2 + 2) = local_28;
  }
  local_30 = *(undefined8 *)(param_2 + 2);
  bVar2 = FUN_00625808(&local_30,&local_28);
  *(byte *)(param_1 + 1) = bVar2 & 1;
  return;
}


// ===== 00661028  FUN_00661028 =====

byte FUN_00661028(long param_1)

{
  return (*(byte *)(param_1 + 8) ^ 0xff) & 1;
}


// ===== 0066103c  FUN_0066103c =====

void FUN_0066103c(undefined8 *param_1)

{
  *(int *)*param_1 = *(int *)*param_1 + -1;
  return;
}


// ===== 00661054  FUN_00661054 =====

void FUN_00661054(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *__dest;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_00d28000;
  param_1[1] = 0;
  if (0x7ffffffffffffff6 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (param_3 < 0x17) {
    __dest = param_1 + 4;
    *(char *)((long)param_1 + 0x37) = (char)param_3;
  }
  else {
    uVar1 = (param_3 & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    __dest = (undefined8 *)operator_new(uVar2);
    param_1[4] = __dest;
    param_1[5] = param_3;
    param_1[6] = uVar2 | 0x8000000000000000;
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
    *(undefined1 *)(param_1 + 7) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
            );
}


// ===== 00661150  FUN_00661150 =====

bool FUN_00661150(long param_1,undefined8 *param_2)

{
  ushort uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if (*(char *)(param_2 + 3) != '\x01') {
    return false;
  }
  lVar3 = (long)*(char *)((long)param_2 + 0x17);
  puVar2 = param_2;
  if (lVar3 < 0) {
    puVar2 = (undefined8 *)*param_2;
    lVar3 = param_2[1];
  }
  uVar1 = FUN_006611c4(puVar2,lVar3);
  if (0xff < uVar1) {
    *(char *)(param_1 + 0x39) = (char)uVar1;
  }
  return 0xff < uVar1;
}


// ===== 006611c4  FUN_006611c4 =====

uint FUN_006611c4(int *param_1,size_t param_2)

{
  int iVar1;
  char *__s2;
  uint uVar2;
  
  if (param_2 == 1) {
    iVar1 = memcmp(param_1,&DAT_001a8867,1);
    if (iVar1 != 0) {
      __s2 = "0";
      goto LAB_00661238;
    }
LAB_00661254:
    uVar2 = 1;
LAB_00661260:
    iVar1 = 1;
  }
  else {
    if (param_2 == 5) {
      __s2 = "false";
LAB_00661238:
      iVar1 = memcmp(param_1,__s2,param_2);
      if (iVar1 == 0) {
        uVar2 = 0;
        goto LAB_00661260;
      }
    }
    else if ((param_2 == 4) && (*param_1 == 0x65757274)) goto LAB_00661254;
    uVar2 = 0;
    iVar1 = 0;
  }
  return uVar2 | iVar1 << 8;
}


// ===== 00661278  FUN_00661278 =====

bool FUN_00661278(long param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  if (*(char *)(param_2 + 3) != '\x01') {
    return false;
  }
  lVar3 = (long)*(char *)((long)param_2 + 0x17);
  puVar2 = param_2;
  if (lVar3 < 0) {
    puVar2 = (undefined8 *)*param_2;
    lVar3 = param_2[1];
  }
  auVar4 = FUN_006612e4(puVar2,lVar3);
  bVar1 = (auVar4 & (undefined1  [16])0x1) != (undefined1  [16])0x0;
  if (bVar1) {
    *(long *)(param_1 + 0x40) = auVar4._0_8_;
  }
  return bVar1;
}


// ===== 006612e4  FUN_006612e4 =====

undefined1  [16] FUN_006612e4(char ****param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  char ***pppcVar3;
  int iVar4;
  char ****__dest;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  char ***local_58;
  ulong uStack_50;
  undefined8 local_48;
  undefined2 local_3c [2];
  double local_38;
  
  local_3c[0] = 0;
  if (0x7ffffffffffffff6 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (param_2 < 0x17) {
    local_48 = CONCAT17((char)param_2,(undefined7)local_48);
    __dest = &local_58;
  }
  else {
    uVar1 = (param_2 & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    __dest = (char ****)operator_new(uVar2);
    local_48 = uVar2 | 0x8000000000000000;
    local_58 = (char ***)__dest;
    uStack_50 = param_2;
  }
  local_38 = -NAN;
  if (__dest <= (char ****)((long)__dest + param_2)) {
    if ((__dest <= param_1) && (param_1 < (char ****)((long)__dest + param_2))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
    memmove(__dest,param_1,param_2);
    *(undefined1 *)((long)__dest + param_2) = 0;
    pppcVar3 = local_58;
    if ((long)local_48 < 0) {
      iVar4 = sscanf((char *)local_58,"%lf%1s",&local_38,local_3c);
      operator_delete(pppcVar3);
    }
    else {
      iVar4 = sscanf((char *)&local_58,"%lf%1s",&local_38,local_3c);
    }
    if (iVar4 < 1) {
      local_38 = 0.0;
      uVar5 = 0;
    }
    else {
      if ((char)local_3c[0] == '%') {
        local_38 = local_38 / 100.0;
      }
      uVar5 = 1;
    }
    auVar6._8_8_ = uVar5;
    auVar6._0_8_ = local_38;
    return auVar6;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
            );
}


// ===== 00661464  FUN_00661464 =====

bool FUN_00661464(long param_1,undefined8 *param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (*(char *)(param_2 + 3) != '\x01') {
    return false;
  }
  lVar4 = (long)*(char *)((long)param_2 + 0x17);
  puVar3 = param_2;
  if (lVar4 < 0) {
    puVar3 = (undefined8 *)*param_2;
    lVar4 = param_2[1];
  }
  uVar2 = FUN_006614d4(puVar3,lVar4);
  bVar1 = uVar2 >> 0x20 != 0;
  if (bVar1) {
    *(int *)(param_1 + 0x3c) = (int)uVar2;
  }
  return bVar1;
}


// ===== 006614d4  FUN_006614d4 =====

ulong FUN_006614d4(char *param_1,ulong param_2)

{
  ulong uVar1;
  char *pcVar2;
  int iVar3;
  char **__dest;
  ulong uVar4;
  char *local_50;
  ulong uStack_48;
  undefined8 local_40;
  undefined1 *local_38;
  
  __dest = &local_50;
  if (0x7ffffffffffffff6 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (param_2 < 0x17) {
    local_40 = CONCAT17((char)param_2,(undefined7)local_40);
  }
  else {
    uVar4 = (param_2 & 0x7ffffffffffffff8) + 8;
    uVar1 = 0x19;
    if (uVar4 != 0x18) {
      uVar1 = uVar4;
    }
    __dest = (char **)operator_new(uVar1);
    local_40 = uVar1 | 0x8000000000000000;
    local_50 = (char *)__dest;
    uStack_48 = param_2;
  }
  local_38 = &DAT_aaaaaaaaaaaaaaaa;
  if (__dest <= (char *)((long)__dest + param_2)) {
    if ((__dest <= param_1) && (param_1 < (char *)((long)__dest + param_2))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
    memmove(__dest,param_1,param_2);
    *(char *)((long)__dest + param_2) = '\0';
    pcVar2 = local_50;
    if ((long)local_40 < 0) {
      iVar3 = sscanf(local_50,"%ld",&local_38);
      operator_delete(pcVar2);
    }
    else {
      iVar3 = sscanf((char *)&local_50,"%ld",&local_38);
    }
    if ((iVar3 == 1) && (local_38 == (undefined1 *)(long)(int)local_38)) {
      uVar4 = (ulong)local_38 & 0xffffffff | 0x100000000;
    }
    else {
      uVar4 = 0;
    }
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
            );
}


// ===== 00661638  FUN_00661638 =====

bool FUN_00661638(long param_1,undefined8 *param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (*(char *)(param_2 + 3) != '\x01') {
    return false;
  }
  lVar4 = (long)*(char *)((long)param_2 + 0x17);
  puVar3 = param_2;
  if (lVar4 < 0) {
    puVar3 = (undefined8 *)*param_2;
    lVar4 = param_2[1];
  }
  uVar2 = FUN_006616a8(puVar3,lVar4);
  bVar1 = uVar2 >> 0x20 != 0;
  if (bVar1) {
    *(int *)(param_1 + 0x3c) = (int)uVar2;
  }
  return bVar1;
}


// ===== 006616a8  FUN_006616a8 =====

ulong FUN_006616a8(char *param_1,ulong param_2)

{
  ulong uVar1;
  char *pcVar2;
  int iVar3;
  char **__dest;
  ulong uVar4;
  char *local_50;
  ulong uStack_48;
  undefined8 local_40;
  undefined1 *local_38;
  
  __dest = &local_50;
  if (0x7ffffffffffffff6 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (param_2 < 0x17) {
    local_40 = CONCAT17((char)param_2,(undefined7)local_40);
  }
  else {
    uVar4 = (param_2 & 0x7ffffffffffffff8) + 8;
    uVar1 = 0x19;
    if (uVar4 != 0x18) {
      uVar1 = uVar4;
    }
    __dest = (char **)operator_new(uVar1);
    local_40 = uVar1 | 0x8000000000000000;
    local_50 = (char *)__dest;
    uStack_48 = param_2;
  }
  local_38 = &DAT_aaaaaaaaaaaaaaaa;
  if ((char *)((long)__dest + param_2) < __dest) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
  if ((__dest <= param_1) && (param_1 < (char *)((long)__dest + param_2))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
  memmove(__dest,param_1,param_2);
  *(char *)((long)__dest + param_2) = '\0';
  pcVar2 = local_50;
  if ((long)local_40 < 0) {
    iVar3 = sscanf(local_50,"%ld",&local_38);
    operator_delete(pcVar2);
  }
  else {
    iVar3 = sscanf((char *)&local_50,"%ld",&local_38);
  }
  if (iVar3 == 1) {
    uVar4 = (ulong)local_38 | 0x100000000;
    if ((ulong)local_38 >> 0x20 != 0) {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}


// ===== 00661808  FUN_00661808 =====

/* WARNING: Type propagation algorithm not settling */

char FUN_00661808(long param_1,undefined8 *******param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *******pppppppuVar3;
  ulong uVar4;
  undefined8 ******ppppppuVar5;
  undefined8 *******local_80;
  undefined8 ******ppppppuStack_78;
  ulong local_70;
  undefined1 *local_68;
  undefined8 *******local_58;
  undefined8 ******ppppppuStack_50;
  undefined8 local_48;
  
  if (*(char *)(param_2 + 3) != '\x01') {
    return *(char *)(param_2 + 3);
  }
  ppppppuVar5 = (undefined8 ******)(long)*(char *)((long)param_2 + 0x17);
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  if ((long)ppppppuVar5 < 0) {
    ppppppuVar5 = param_2[1];
    if ((undefined8 ******)0x7ffffffffffffff6 < ppppppuVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_005d45ec();
    }
    param_2 = (undefined8 *******)*param_2;
  }
  if (ppppppuVar5 < (undefined8 ******)0x17) {
    local_48 = CONCAT17((char)ppppppuVar5,(undefined7)local_48);
    pppppppuVar3 = &local_58;
  }
  else {
    uVar4 = ((ulong)ppppppuVar5 & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar4 != 0x18) {
      uVar2 = uVar4;
    }
    pppppppuVar3 = (undefined8 *******)operator_new(uVar2);
    local_48 = uVar2 | 0x8000000000000000;
    local_58 = pppppppuVar3;
    ppppppuStack_50 = ppppppuVar5;
  }
  if ((undefined8 *******)((long)pppppppuVar3 + (long)ppppppuVar5) < pppppppuVar3) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
  if ((pppppppuVar3 <= param_2) &&
     (param_2 < (undefined8 *******)((long)pppppppuVar3 + (long)ppppppuVar5))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
  memmove(pppppppuVar3,param_2,(size_t)ppppppuVar5);
  *(undefined1 *)((long)pppppppuVar3 + (long)ppppppuVar5) = 0;
  puVar1 = (undefined8 *)(param_1 + 0x40);
  uVar4 = 1;
  local_68 = (undefined1 *)CONCAT71(local_68._1_7_,1);
  ppppppuStack_78 = ppppppuStack_50;
  local_80 = local_58;
  local_70 = local_48;
  if ((undefined8 ********)puVar1 != &local_80) {
    if (*(char *)(param_1 + 0x57) < '\0') {
      ppppppuVar5 = ppppppuStack_50;
      pppppppuVar3 = local_58;
      if (-1 < (long)local_48) {
        ppppppuVar5 = (undefined8 ******)(local_48 >> 0x38);
        pppppppuVar3 = &local_80;
      }
      FUN_00547f08(puVar1,pppppppuVar3,ppppppuVar5);
      uVar4 = (ulong)local_68 & 0xff;
    }
    else {
      if ((long)local_48 < 0) {
        FUN_00547fc0(puVar1,local_58,ppppppuStack_50);
      }
      else {
        *(undefined8 *******)(param_1 + 0x48) = ppppppuStack_50;
        *puVar1 = local_58;
        *(ulong *)(param_1 + 0x50) = local_48;
      }
      uVar4 = 1;
    }
  }
  if (((uVar4 & 1) != 0) && ((long)local_70 < 0)) {
    operator_delete(local_80);
  }
  return '\x01';
}


// ===== 006619bc  FUN_006619bc =====

undefined8 FUN_006619bc(long param_1,undefined8 *param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if (*(char *)(param_2 + 3) == '\x01') {
    lVar5 = (long)*(char *)((long)param_2 + 0x17);
    puVar4 = param_2;
    if (lVar5 < 0) {
      puVar4 = (undefined8 *)*param_2;
      lVar5 = param_2[1];
    }
    uVar2 = FUN_006614d4(puVar4,lVar5);
    if (((uVar2 >> 0x20 == 0) ||
        ((iVar1 = (int)uVar2, *(char *)(param_1 + 0x44) == '\x01' &&
         (iVar1 < *(int *)(param_1 + 0x40))))) ||
       (((*(byte *)(param_1 + 0x4c) & 1) != 0 && (*(int *)(param_1 + 0x48) < iVar1)))) {
      uVar3 = 0;
    }
    else {
      *(int *)(param_1 + 0x3c) = iVar1;
      uVar3 = 1;
    }
    return uVar3;
  }
  return 0;
}


// ===== 00661a58  FUN_00661a58 =====

undefined8 FUN_00661a58(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  if (*(char *)(param_2 + 3) == '\x01') {
    lVar3 = (long)*(char *)((long)param_2 + 0x17);
    puVar2 = param_2;
    if (lVar3 < 0) {
      puVar2 = (undefined8 *)*param_2;
      lVar3 = param_2[1];
    }
    auVar4 = FUN_006612e4(puVar2,lVar3);
    if ((auVar4 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
      uVar1 = 0;
    }
    else {
      *(long *)(param_1 + 0x40) = auVar4._0_8_;
      uVar1 = 1;
      *(undefined1 *)(param_1 + 0x48) = 1;
    }
  }
  else {
    if (*(char *)(param_1 + 0x48) == '\x01') {
      *(undefined1 *)(param_1 + 0x48) = 0;
    }
    uVar1 = 1;
  }
  return uVar1;
}


// ===== 00661ad4  FUN_00661ad4 =====

undefined8 FUN_00661ad4(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (*(char *)(param_2 + 3) == '\x01') {
    lVar4 = (long)*(char *)((long)param_2 + 0x17);
    puVar3 = param_2;
    if (lVar4 < 0) {
      puVar3 = (undefined8 *)*param_2;
      lVar4 = param_2[1];
    }
    uVar1 = FUN_006614d4(puVar3,lVar4);
    if (uVar1 >> 0x20 == 0) {
      uVar2 = 0;
    }
    else {
      *(int *)(param_1 + 0x3c) = (int)uVar1;
      uVar2 = 1;
      *(undefined1 *)(param_1 + 0x40) = 1;
    }
  }
  else {
    if (*(char *)(param_1 + 0x40) == '\x01') {
      *(undefined1 *)(param_1 + 0x40) = 0;
    }
    uVar2 = 1;
  }
  return uVar2;
}


// ===== 00661b54  FUN_00661b54 =====

undefined8 FUN_00661b54(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (*(char *)(param_2 + 3) == '\x01') {
    lVar4 = (long)*(char *)((long)param_2 + 0x17);
    puVar3 = param_2;
    if (lVar4 < 0) {
      puVar3 = (undefined8 *)*param_2;
      lVar4 = param_2[1];
    }
    uVar1 = FUN_006616a8(puVar3,lVar4);
    if (uVar1 >> 0x20 == 0) {
      uVar2 = 0;
    }
    else {
      *(int *)(param_1 + 0x3c) = (int)uVar1;
      uVar2 = 1;
      *(undefined1 *)(param_1 + 0x40) = 1;
    }
  }
  else {
    if (*(char *)(param_1 + 0x40) == '\x01') {
      *(undefined1 *)(param_1 + 0x40) = 0;
    }
    uVar2 = 1;
  }
  return uVar2;
}


// ===== 00661bd4  FUN_00661bd4 =====

undefined8 * FUN_00661bd4(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*(char *)(param_1 + 3) == '\x01') {
    if (param_1 != param_2) {
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
    }
  }
  else {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      FUN_005478d8(param_1,*param_2,param_2[1]);
    }
    else {
      uVar5 = param_2[1];
      uVar4 = *param_2;
      param_1[2] = param_2[2];
      param_1[1] = uVar5;
      *param_1 = uVar4;
    }
    *(undefined1 *)(param_1 + 3) = 1;
  }
  return param_1;
}


// ===== 00661cb8  FUN_00661cb8 =====

void FUN_00661cb8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x661cc0);
  (*pcVar1)();
}


// ===== 00661cc0  FUN_00661cc0 =====

/* WARNING: Removing unreachable block (ram,0x00662320) */
/* WARNING: Type propagation algorithm not settling */

void FUN_00661cc0(undefined8 *param_1,long param_2,long *******param_3,undefined8 ******param_4)

{
  long *******__s;
  undefined8 ******__n;
  ulong uVar1;
  bool bVar2;
  long *plVar3;
  undefined8 ******ppppppuVar4;
  undefined1 *puVar5;
  undefined8 *******pppppppuVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  void *pvVar11;
  ulong uVar12;
  long *******ppppppplVar13;
  undefined8 uVar14;
  char *pcVar15;
  long lVar16;
  undefined8 ******ppppppuVar17;
  undefined8 ******ppppppuVar18;
  undefined8 ******ppppppuVar19;
  long *plVar20;
  undefined8 *******pppppppuVar21;
  undefined8 *******pppppppuVar22;
  long *plVar23;
  long *******__s1;
  undefined8 *puVar24;
  long *local_138;
  long *******local_128;
  undefined8 ******ppppppuStack_120;
  undefined8 local_118;
  long *******local_110;
  undefined8 ******ppppppuStack_108;
  ulong local_100;
  char local_f8;
  long *******local_f0;
  undefined8 ******ppppppuStack_e8;
  undefined1 *local_e0;
  char local_d8;
  long *******local_d0;
  undefined8 ******ppppppuStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long *******local_a8;
  undefined8 ******ppppppuStack_a0;
  undefined8 *******local_98;
  undefined8 *******local_90;
  undefined8 local_88;
  long *******local_80;
  undefined8 ******local_78;
  undefined1 auStack_69 [9];
  
  lVar16 = param_2 * 8;
  local_90 = (undefined8 *******)0x0;
  local_88 = 0;
  local_98 = &local_90;
  local_80 = param_3;
  local_78 = param_4;
  if (lVar16 == 0) {
    local_138 = (long *)0x0;
    if (param_4 != (undefined8 ******)0x0) goto LAB_00661e00;
  }
  else {
    local_138 = (long *)0x0;
    puVar24 = param_1;
    do {
      plVar23 = (long *)*puVar24;
      plVar20 = (long *)plVar23[1];
      plVar3 = (long *)plVar23[2];
      *(undefined1 *)(plVar23 + 7) = 1;
      if (plVar20 == plVar3) {
        ppppppuVar17 = (undefined8 ******)(long)*(char *)((long)plVar23 + 0x37);
        if ((long)ppppppuVar17 < 0) {
          if (plVar23[5] != 0) {
            local_d0 = (long *******)plVar23[4];
            ppppppuVar17 = (undefined8 ******)plVar23[5];
            goto LAB_00661db8;
          }
        }
        else if (*(char *)((long)plVar23 + 0x37) != '\0') {
          local_d0 = (long *******)(plVar23 + 4);
LAB_00661db8:
          local_128 = (long *******)&local_98;
          ppppppuStack_c8 = ppppppuVar17;
          local_a8 = (long *******)&local_d0;
          lVar10 = FUN_00663840(&local_128,&local_d0,&DAT_001f94c3,&local_a8,auStack_69);
          *(long **)(lVar10 + 0x30) = plVar23;
          plVar23 = local_138;
        }
      }
      else {
        do {
          lVar10 = *plVar20;
          ppppppuStack_c8 = (undefined8 ******)(long)*(char *)(lVar10 + 0x37);
          *(undefined1 *)(lVar10 + 0x38) = 1;
          if ((long)ppppppuStack_c8 < 0) {
            local_d0 = *(long ********)(lVar10 + 0x20);
            ppppppuStack_c8 = *(undefined8 *******)(lVar10 + 0x28);
          }
          else {
            local_d0 = (long *******)(lVar10 + 0x20);
          }
          local_128 = (long *******)&local_98;
          local_a8 = (long *******)&local_d0;
          lVar9 = FUN_00663840(&local_128,&local_d0,&DAT_001f94c3,&local_a8,auStack_69);
          plVar20 = plVar20 + 1;
          *(long *)(lVar9 + 0x30) = lVar10;
          plVar23 = local_138;
        } while (plVar20 != plVar3);
      }
      local_138 = plVar23;
      puVar24 = puVar24 + 1;
    } while (puVar24 != param_1 + param_2);
    if (local_78 != (undefined8 ******)0x0) {
LAB_00661e00:
      bVar7 = false;
      ppppppuVar17 = local_78;
      __s1 = local_80;
      do {
        ppppppuVar18 = (undefined8 ******)0x0;
        do {
          if ((*(char *)((long)__s1 + (long)ppppppuVar18) == ',') ||
             (*(char *)((long)__s1 + (long)ppppppuVar18) == ':')) {
            if (ppppppuVar17 == ppppppuVar18) {
              ppppppuVar18 = (undefined8 ******)0xffffffffffffffff;
            }
            goto LAB_00661e4c;
          }
          ppppppuVar18 = (undefined8 ******)((long)ppppppuVar18 + 1);
        } while (ppppppuVar17 != ppppppuVar18);
        ppppppuVar18 = (undefined8 ******)0xffffffffffffffff;
LAB_00661e4c:
        __n = ppppppuVar17;
        if (ppppppuVar18 <= ppppppuVar17) {
          __n = ppppppuVar18;
        }
        ppppppuStack_c8 = (undefined8 ******)&DAT_aaaaaaaaaaaaaaaa;
        local_c0 = &DAT_aaaaaaaaaaaaaaaa;
        local_d0 = (long *******)0xaaaaaaaaaaaaaa00;
        local_b8 = 0xaaaaaaaaaaaaaa00;
        local_a8 = __s1;
        ppppppuStack_a0 = __n;
        if (ppppppuVar18 == (undefined8 ******)0xffffffffffffffff) {
          bVar2 = false;
LAB_00661f90:
          ppppppuVar17 = (undefined8 ******)0x0;
          __s = (long *******)&DAT_001b3348;
          pppppppuVar22 = local_90;
        }
        else {
          if (ppppppuVar17 <= ppppppuVar18) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/string_view:417: libc++ Hardening assertion __pos < size() failed: string_view[] index out of bounds\n"
                      );
          }
          __s = (long *******)((long)__s1 + (long)ppppppuVar18 + 1);
          ppppppuVar17 = (undefined8 ******)((long)ppppppuVar17 - (long)((long)ppppppuVar18 + 1));
          if (*(char *)((long)__s1 + (long)ppppppuVar18) == ':') {
            pvVar11 = memchr(__s,0x2c,(size_t)ppppppuVar17);
            ppppppuVar19 = (undefined8 ******)((long)pvVar11 - (long)__s);
            if (pvVar11 == (void *)0x0) {
              ppppppuVar19 = (undefined8 ******)0xffffffffffffffff;
            }
            ppppppuVar4 = ppppppuVar17;
            if (ppppppuVar19 <= ppppppuVar17) {
              ppppppuVar4 = ppppppuVar19;
            }
            if ((undefined8 ******)0x7ffffffffffffff6 < ppppppuVar4) {
LAB_006623c8:
                    /* WARNING: Subroutine does not return */
              FUN_005d45ec();
            }
            if (ppppppuVar4 < (undefined8 ******)0x17) {
              local_c0 = (undefined1 *)CONCAT17((char)ppppppuVar4,(undefined7)local_c0);
              ppppppplVar13 = (long *******)&local_d0;
            }
            else {
              uVar12 = ((ulong)ppppppuVar4 & 0x7ffffffffffffff8) + 8;
              uVar1 = 0x19;
              if (uVar12 != 0x18) {
                uVar1 = uVar12;
              }
              ppppppplVar13 = (long *******)operator_new(uVar1);
              local_c0 = (undefined1 *)(uVar1 | 0x8000000000000000);
              local_d0 = ppppppplVar13;
              ppppppuStack_c8 = ppppppuVar4;
            }
            if ((long *******)((long)ppppppplVar13 + (long)ppppppuVar4) < ppppppplVar13) {
LAB_006623a0:
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                        );
            }
            if ((ppppppplVar13 <= __s) &&
               (__s < (long *******)((long)ppppppplVar13 + (long)ppppppuVar4))) {
LAB_006623b4:
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                        );
            }
            memmove(ppppppplVar13,__s,(size_t)ppppppuVar4);
            *(char *)((long)ppppppplVar13 + (long)ppppppuVar4) = '\0';
            bVar2 = true;
            local_b8 = CONCAT71(local_b8._1_7_,1);
            if (ppppppuVar19 == (undefined8 ******)0xffffffffffffffff) goto LAB_00661f90;
            if (ppppppuVar17 <= ppppppuVar19) {
                    /* WARNING: Subroutine does not return */
              FUN_005f55a8("string_view::substr");
            }
            __s = (long *******)((long)__s + (long)ppppppuVar19 + 1);
            ppppppuVar17 = (undefined8 ******)((long)ppppppuVar17 - (long)((long)ppppppuVar19 + 1));
            pppppppuVar22 = local_90;
          }
          else {
            bVar2 = false;
            pppppppuVar22 = local_90;
          }
        }
joined_r0x00661eec:
        if (pppppppuVar22 != (undefined8 *******)0x0) {
          do {
            ppppppuVar4 = pppppppuVar22[5];
            ppppppuVar19 = ppppppuVar4;
            if (__n <= ppppppuVar4) {
              ppppppuVar19 = __n;
            }
            iVar8 = memcmp(__s1,pppppppuVar22[4],(size_t)ppppppuVar19);
            puVar5 = local_c0;
            ppppppuVar19 = ppppppuStack_c8;
            ppppppplVar13 = local_d0;
            if (iVar8 == 0) {
              if (__n == ppppppuVar4) {
                if ((undefined8 ********)pppppppuVar22 == &local_90) break;
                local_f0 = (long *******)((ulong)local_f0 & 0xffffffffffffff00);
                if (bVar2) {
                  ppppppuStack_c8 = (undefined8 ******)0x0;
                  local_c0 = (undefined1 *)0x0;
                  local_d0 = (long *******)0x0;
                  local_e0 = puVar5;
                  ppppppuStack_e8 = ppppppuVar19;
                  local_f0 = ppppppplVar13;
                }
                local_d8 = bVar2;
                uVar12 = (*(code *)(*pppppppuVar22[6])[2])(pppppppuVar22[6],&local_f0);
                if ((local_d8 == '\x01') && ((long)local_e0 < 0)) {
                  operator_delete(local_f0);
                }
                if (((uVar12 & 1) != 0) || (uVar12 = FUN_004022fc(), (uVar12 & 1) != 0))
                goto LAB_0066230c;
                uVar14 = 0x2b2;
                pcVar15 = "Failed to read field with key: \'";
                goto LAB_006622f8;
              }
              if (ppppppuVar4 <= __n) goto LAB_00661fa8;
            }
            else if (-1 < iVar8) goto LAB_00661fa8;
            pppppppuVar22 = (undefined8 *******)*pppppppuVar22;
            if (pppppppuVar22 == (undefined8 *******)0x0) break;
          } while( true );
        }
        if (local_138 == (long *)0x0) {
          bVar2 = true;
        }
        if (bVar2) {
          if (ppppppuVar18 == (undefined8 ******)0x0) {
LAB_006620e8:
            if (!bVar7) goto LAB_006620f8;
          }
          else {
            if (*(char *)__s1 == '_' || bVar7) goto LAB_0066230c;
LAB_006620f8:
            uVar12 = FUN_00417e08();
            if ((uVar12 & 1) == 0) {
              FUN_00623bb0(&DAT_001fef7c,"../../rtc_base/experiments/field_trial_parser.cc",0x319,
                           "No field with key: \'",&local_a8,"\' (found in trial: \"",&local_80,
                           &DAT_001cdf49);
            }
            local_128 = (long *******)0x0;
            ppppppuStack_120 = (undefined8 ******)0x0;
            local_118 = 0;
            pppppppuVar22 = local_98;
            while ((undefined8 ********)pppppppuVar22 != &local_90) {
              FUN_00547cac(&local_128,pppppppuVar22[4],pppppppuVar22[5]);
              FUN_00547cac(&local_128,&DAT_001e1644,2);
              pppppppuVar6 = (undefined8 *******)pppppppuVar22[1];
              pppppppuVar21 = pppppppuVar22;
              if ((undefined8 *******)pppppppuVar22[1] == (undefined8 *******)0x0) {
                do {
                  pppppppuVar22 = (undefined8 *******)pppppppuVar21[2];
                  bVar7 = pppppppuVar21 != (undefined8 *******)*pppppppuVar22;
                  pppppppuVar21 = pppppppuVar22;
                } while (bVar7);
              }
              else {
                do {
                  pppppppuVar22 = pppppppuVar6;
                  pppppppuVar6 = (undefined8 *******)*pppppppuVar22;
                } while ((undefined8 *******)*pppppppuVar22 != (undefined8 *******)0x0);
              }
            }
            uVar12 = FUN_00417e08();
            if ((uVar12 & 1) == 0) {
              FUN_00623bb0(&DAT_001f4e90,"../../rtc_base/experiments/field_trial_parser.cc",0x351,
                           "Valid keys are: ",&local_128);
            }
            if ((long)local_118 < 0) {
              operator_delete(local_128);
            }
          }
          bVar7 = true;
        }
        else {
          if (ppppppuVar18 == (undefined8 ******)0x0) goto LAB_006620e8;
          if ((undefined8 ******)0x7ffffffffffffff6 < __n) goto LAB_006623c8;
          if (__n < (undefined8 ******)0x17) {
            local_118 = CONCAT17((char)__n,(undefined7)local_118);
            ppppppplVar13 = (long *******)&local_128;
          }
          else {
            uVar12 = ((ulong)__n & 0x7ffffffffffffff8) + 8;
            uVar1 = 0x19;
            if (uVar12 != 0x18) {
              uVar1 = uVar12;
            }
            ppppppplVar13 = (long *******)operator_new(uVar1);
            local_118 = uVar1 | 0x8000000000000000;
            local_128 = ppppppplVar13;
            ppppppuStack_120 = __n;
          }
          if ((long *******)((long)ppppppplVar13 + (long)__n) < ppppppplVar13) goto LAB_006623a0;
          if ((ppppppplVar13 <= __s1) && (__s1 < (long *******)((long)ppppppplVar13 + (long)__n)))
          goto LAB_006623b4;
          memmove(ppppppplVar13,__s1,(size_t)__n);
          *(char *)((long)ppppppplVar13 + (long)__n) = '\0';
          local_100 = local_118;
          ppppppuStack_108 = ppppppuStack_120;
          local_110 = local_128;
          local_128 = (long *******)0x0;
          ppppppuStack_120 = (undefined8 ******)0x0;
          local_118 = 0;
          local_f8 = '\x01';
          uVar12 = (**(code **)(*local_138 + 0x10))(local_138,&local_110);
          if ((local_f8 == '\x01') && ((long)local_100 < 0)) {
            operator_delete(local_110);
          }
          if ((long)local_118 < 0) {
            operator_delete(local_128);
          }
          if (((uVar12 & 1) == 0) && (uVar12 = FUN_004022fc(), (uVar12 & 1) == 0)) {
            uVar14 = 0x2da;
            pcVar15 = "Failed to read empty key field with value \'";
LAB_006622f8:
            FUN_00623bb0(&DAT_001fef7c,"../../rtc_base/experiments/field_trial_parser.cc",uVar14,
                         pcVar15,&local_a8,"\' in trial: \"",&local_80,&DAT_001d6255);
          }
        }
LAB_0066230c:
        __s1 = __s;
        if (ppppppuVar17 == (undefined8 ******)0x0) break;
      } while( true );
    }
  }
  for (; lVar16 != 0; lVar16 = lVar16 + -8) {
    (**(code **)(*(long *)*param_1 + 0x18))();
    param_1 = param_1 + 1;
  }
  local_d0 = (long *******)&local_98;
  FUN_006637cc(&local_d0,local_90);
  return;
LAB_00661fa8:
  pppppppuVar22 = (undefined8 *******)pppppppuVar22[1];
  goto joined_r0x00661eec;
}


// ===== 006623d8  FUN_006623d8 =====

undefined1  [16] FUN_006623d8(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  if (param_2 != 0) {
    uVar1 = FUN_006614d4();
    auVar2._8_8_ = uVar1 >> 0x20;
    uVar1 = uVar1 | 0xaaaaaa0000000000;
    if (auVar2._8_8_ == 0) {
      uVar1 = 0;
    }
    auVar2._0_8_ = uVar1;
    return auVar2;
  }
  return ZEXT816(1) << 0x40;
}


// ===== 00662420  FUN_00662420 =====

void FUN_00662420(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [12];
  
  if (param_3 == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    *(undefined1 *)(param_1 + 2) = 1;
  }
  else {
    auVar1 = FUN_006612e4();
    if ((auVar1 & (undefined1  [12])0x1) == (undefined1  [12])0x0) {
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 2) = 0;
    }
    else {
      *param_1 = auVar1._0_8_;
      *(char *)(param_1 + 1) = auVar1[8];
      *(undefined8 *)((long)param_1 + 9) = 0x1aaaaaaaaaaaaaa;
    }
  }
  return;
}


// ===== 00662484  FUN_00662484 =====

void FUN_00662484(undefined8 *param_1)

{
  FUN_00661054();
  *param_1 = &PTR_FUN_00d28030;
  *(undefined1 *)((long)param_1 + 0x39) = 0;
  return;
}


// ===== 006624bc  FUN_006624bc =====

undefined1 FUN_006624bc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x39);
}


// ===== 006624c8  FUN_006624c8 =====

undefined1 FUN_006624c8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x39);
}


// ===== 006624d4  FUN_006624d4 =====

undefined8 FUN_006624d4(long param_1,undefined8 *param_2)

{
  ushort uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if (*(char *)(param_2 + 3) == '\x01') {
    lVar3 = (long)*(char *)((long)param_2 + 0x17);
    puVar2 = param_2;
    if (lVar3 < 0) {
      puVar2 = (undefined8 *)*param_2;
      lVar3 = param_2[1];
    }
    uVar1 = FUN_006611c4(puVar2,lVar3);
    if (uVar1 < 0x100) {
      return 0;
    }
  }
  else {
    uVar1 = 1;
  }
  *(char *)(param_1 + 0x39) = (char)uVar1;
  return 1;
}


// ===== 00662540  FUN_00662540 =====

void FUN_00662540(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 long param_5)

{
  long *plVar1;
  bool bVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  FUN_00661054();
  *(undefined4 *)((long)param_1 + 0x3c) = param_4;
  *param_1 = &PTR_FUN_00d28060;
  plVar6 = param_1 + 9;
  *plVar6 = 0;
  puVar3 = param_1 + 8;
  *puVar3 = plVar6;
  param_1[10] = 0;
  if (*(long *)(param_5 + 0x10) == 0) {
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xb] = param_1 + 0xc;
  }
  else {
    lVar4 = FUN_00663598(puVar3,*(undefined8 *)(param_5 + 8),puVar3);
    *plVar6 = lVar4;
    *(long **)(lVar4 + 0x10) = plVar6;
    plVar1 = (long *)*plVar6;
    do {
      plVar8 = plVar1;
      plVar1 = (long *)*plVar8;
    } while ((long *)*plVar8 != (long *)0x0);
    param_1[8] = plVar8;
    uVar5 = *(undefined8 *)(param_5 + 0x10);
    param_1[0xc] = 0;
    puVar3 = param_1 + 0xb;
    *puVar3 = param_1 + 0xc;
    param_1[10] = uVar5;
    param_1[0xd] = 0;
    while (plVar8 != plVar6) {
      FUN_0066396c(0,puVar3,puVar3,plVar8 + 7);
      plVar1 = (long *)plVar8[1];
      plVar7 = plVar8;
      if ((long *)plVar8[1] == (long *)0x0) {
        do {
          plVar8 = (long *)plVar7[2];
          bVar2 = plVar7 != (long *)*plVar8;
          plVar7 = plVar8;
        } while (bVar2);
      }
      else {
        do {
          plVar8 = plVar1;
          plVar1 = (long *)*plVar8;
        } while ((long *)*plVar8 != (long *)0x0);
      }
    }
  }
  return;
}


// ===== 00662644  FUN_00662644 =====

void FUN_00662644(undefined8 *param_1,long param_2)

{
  void *__src;
  undefined4 uVar1;
  undefined1 uVar2;
  ulong __n;
  void *__dest;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_00d28000;
  param_1[1] = 0;
  __src = *(void **)(param_2 + 8);
  __n = *(long *)(param_2 + 0x10) - (long)__src;
  if (__n != 0) {
    if ((long)__n < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005edb98();
    }
    __dest = operator_new(__n);
    param_1[1] = __dest;
    param_1[2] = __dest;
    param_1[3] = (long)__dest + __n;
    memcpy(__dest,__src,__n);
    param_1[2] = (long)__dest + __n;
  }
  if (*(char *)(param_2 + 0x37) < '\0') {
    FUN_005478d8(param_1 + 4,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28));
  }
  else {
    uVar8 = *(undefined8 *)(param_2 + 0x28);
    uVar7 = *(undefined8 *)(param_2 + 0x20);
    param_1[6] = *(undefined8 *)(param_2 + 0x30);
    param_1[5] = uVar8;
    param_1[4] = uVar7;
  }
  uVar2 = *(undefined1 *)(param_2 + 0x38);
  *param_1 = &PTR_FUN_00d28060;
  *(undefined1 *)(param_1 + 7) = uVar2;
  uVar1 = *(undefined4 *)(param_2 + 0x3c);
  plVar5 = param_1 + 9;
  *plVar5 = 0;
  puVar3 = param_1 + 8;
  *puVar3 = plVar5;
  *(undefined4 *)((long)param_1 + 0x3c) = uVar1;
  param_1[10] = 0;
  if (*(long *)(param_2 + 0x50) != 0) {
    lVar4 = FUN_00663598(puVar3,*(undefined8 *)(param_2 + 0x48),puVar3);
    *plVar5 = lVar4;
    *(long **)(lVar4 + 0x10) = plVar5;
    plVar5 = (long *)*plVar5;
    do {
      plVar6 = plVar5;
      plVar5 = (long *)*plVar6;
    } while (plVar5 != (long *)0x0);
    param_1[8] = plVar6;
    param_1[10] = *(undefined8 *)(param_2 + 0x50);
  }
  plVar5 = param_1 + 0xc;
  *plVar5 = 0;
  puVar3 = param_1 + 0xb;
  *puVar3 = plVar5;
  param_1[0xd] = 0;
  if (*(long *)(param_2 + 0x68) != 0) {
    lVar4 = FUN_00663714(puVar3,*(undefined8 *)(param_2 + 0x60),puVar3);
    *plVar5 = lVar4;
    *(long **)(lVar4 + 0x10) = plVar5;
    plVar5 = (long *)*plVar5;
    do {
      plVar6 = plVar5;
      plVar5 = (long *)*plVar6;
    } while (plVar5 != (long *)0x0);
    param_1[0xb] = plVar6;
    param_1[0xd] = *(undefined8 *)(param_2 + 0x68);
  }
  return;
}


// ===== 006627a0  FUN_006627a0 =====

void FUN_006627a0(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *local_8;
  
  *param_1 = &PTR_FUN_00d28060;
  local_8 = param_1 + 0xb;
  FUN_005fa1cc(&local_8,param_1[0xc]);
  local_8 = param_1 + 8;
  FUN_00663680(&local_8,param_1[9]);
  *param_1 = &PTR_FUN_00d28000;
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    operator_delete((void *)param_1[4]);
    pvVar1 = (void *)param_1[1];
  }
  else {
    pvVar1 = (void *)param_1[1];
  }
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[2];
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
    while (pvVar2 != pvVar1) {
      pvVar2 = (void *)((long)pvVar2 + -8);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    param_1[2] = pvVar1;
    operator_delete(pvVar1);
  }
  return;
}


// ===== 006628b8  FUN_006628b8 =====

void FUN_006628b8(void *param_1)

{
  FUN_006627a0();
  operator_delete(param_1);
  return;
}


// ===== 006628e8  FUN_006628e8 =====

undefined8 FUN_006628e8(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *__s2;
  size_t __n;
  byte bVar2;
  ulong uVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  
  if (*(char *)(param_2 + 3) != '\x01') {
    return 0;
  }
  bVar2 = *(byte *)((long)param_2 + 0x17);
  uVar6 = (ulong)bVar2;
  plVar7 = *(long **)(param_1 + 0x48);
  if (plVar7 != (long *)0x0) {
    puVar5 = (undefined8 *)*param_2;
    uVar1 = param_2[1];
    if (-1 < (char)bVar2) {
      puVar5 = param_2;
      uVar1 = uVar6;
    }
    do {
      while( true ) {
        __s2 = (long *)plVar7[4];
        uVar3 = plVar7[5];
        if (-1 < (char)*(byte *)((long)plVar7 + 0x37)) {
          __s2 = plVar7 + 4;
          uVar3 = (ulong)*(byte *)((long)plVar7 + 0x37);
        }
        __n = uVar3;
        if (uVar1 <= uVar3) {
          __n = uVar1;
        }
        iVar4 = memcmp(puVar5,__s2,__n);
        if (iVar4 != 0) break;
        if (uVar1 == uVar3) {
          if (plVar7 != (long *)(param_1 + 0x48)) {
            uVar6 = (ulong)*(uint *)(plVar7 + 7);
LAB_00662a14:
            *(int *)(param_1 + 0x3c) = (int)uVar6;
            return 1;
          }
          goto LAB_006629b8;
        }
        if (uVar3 <= uVar1) goto LAB_00662944;
LAB_00662994:
        plVar7 = (long *)*plVar7;
        if (plVar7 == (long *)0x0) goto LAB_006629b8;
      }
      if (iVar4 < 0) goto LAB_00662994;
LAB_00662944:
      plVar7 = (long *)plVar7[1];
    } while (plVar7 != (long *)0x0);
  }
LAB_006629b8:
  puVar5 = param_2;
  if ((char)bVar2 < '\0') {
    puVar5 = (undefined8 *)*param_2;
    uVar6 = param_2[1];
  }
  uVar6 = FUN_006614d4(puVar5,uVar6);
  if (uVar6 >> 0x20 != 0) {
    for (plVar7 = *(long **)(param_1 + 0x60); plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
      while (*(int *)((long)plVar7 + 0x1c) <= (int)uVar6) {
        if (*(int *)((long)plVar7 + 0x1c) == (int)uVar6) {
          if (plVar7 == (long *)(param_1 + 0x60)) {
            return 0;
          }
          goto LAB_00662a14;
        }
        plVar7 = (long *)plVar7[1];
        if (plVar7 == (long *)0x0) {
          return 0;
        }
      }
    }
  }
  return 0;
}


// ===== 00662a40  FUN_00662a40 =====

void FUN_00662a40(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  *param_1 = &PTR_FUN_00d28000;
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    operator_delete((void *)param_1[4]);
    pvVar1 = (void *)param_1[1];
  }
  else {
    pvVar1 = (void *)param_1[1];
  }
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[2];
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
    while (pvVar2 != pvVar1) {
      pvVar2 = (void *)((long)pvVar2 + -8);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    param_1[2] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00662b2c  FUN_00662b2c =====

void FUN_00662b2c(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  *param_1 = &PTR_FUN_00d28000;
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    operator_delete((void *)param_1[4]);
    pvVar1 = (void *)param_1[1];
  }
  else {
    pvVar1 = (void *)param_1[1];
  }
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[2];
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
    while (pvVar2 != pvVar1) {
      pvVar2 = (void *)((long)pvVar2 + -8);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    param_1[2] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00662c18  FUN_00662c18 =====

void FUN_00662c18(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  *param_1 = &PTR_FUN_00d28000;
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    operator_delete((void *)param_1[4]);
    pvVar1 = (void *)param_1[1];
  }
  else {
    pvVar1 = (void *)param_1[1];
  }
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[2];
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
    while (pvVar2 != pvVar1) {
      pvVar2 = (void *)((long)pvVar2 + -8);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    param_1[2] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00662d04  FUN_00662d04 =====

void FUN_00662d04(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  *param_1 = &PTR_FUN_00d28000;
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    operator_delete((void *)param_1[4]);
    pvVar1 = (void *)param_1[1];
  }
  else {
    pvVar1 = (void *)param_1[1];
  }
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[2];
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
    while (pvVar2 != pvVar1) {
      pvVar2 = (void *)((long)pvVar2 + -8);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    param_1[2] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00662df0  FUN_00662df0 =====

void FUN_00662df0(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  *param_1 = &PTR_FUN_00d28000;
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    operator_delete((void *)param_1[4]);
    pvVar1 = (void *)param_1[1];
  }
  else {
    pvVar1 = (void *)param_1[1];
  }
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[2];
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
    while (pvVar2 != pvVar1) {
      pvVar2 = (void *)((long)pvVar2 + -8);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    param_1[2] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00662edc  FUN_00662edc =====

void FUN_00662edc(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  *param_1 = &PTR_FUN_00d27f10;
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    operator_delete((void *)param_1[8]);
  }
  *param_1 = &PTR_FUN_00d28000;
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    operator_delete((void *)param_1[4]);
    pvVar1 = (void *)param_1[1];
  }
  else {
    pvVar1 = (void *)param_1[1];
  }
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[2];
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
        param_1[2] = pvVar1;
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
  return;
}


// ===== 00662fec  FUN_00662fec =====

void FUN_00662fec(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  *param_1 = &PTR_FUN_00d27f10;
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    operator_delete((void *)param_1[8]);
  }
  *param_1 = &PTR_FUN_00d28000;
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    operator_delete((void *)param_1[4]);
    pvVar1 = (void *)param_1[1];
  }
  else {
    pvVar1 = (void *)param_1[1];
  }
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[2];
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
    while (pvVar2 != pvVar1) {
      pvVar2 = (void *)((long)pvVar2 + -8);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    param_1[2] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 006630fc  FUN_006630fc =====

void FUN_006630fc(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  *param_1 = &PTR_FUN_00d28000;
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    operator_delete((void *)param_1[4]);
    pvVar1 = (void *)param_1[1];
  }
  else {
    pvVar1 = (void *)param_1[1];
  }
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[2];
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
    while (pvVar2 != pvVar1) {
      pvVar2 = (void *)((long)pvVar2 + -8);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    param_1[2] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 006631e8  FUN_006631e8 =====

void FUN_006631e8(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  *param_1 = &PTR_FUN_00d28000;
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    operator_delete((void *)param_1[4]);
    pvVar1 = (void *)param_1[1];
  }
  else {
    pvVar1 = (void *)param_1[1];
  }
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[2];
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
    while (pvVar2 != pvVar1) {
      pvVar2 = (void *)((long)pvVar2 + -8);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    param_1[2] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 006632d4  FUN_006632d4 =====

void FUN_006632d4(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  *param_1 = &PTR_FUN_00d28000;
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    operator_delete((void *)param_1[4]);
    pvVar1 = (void *)param_1[1];
  }
  else {
    pvVar1 = (void *)param_1[1];
  }
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[2];
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
    while (pvVar2 != pvVar1) {
      pvVar2 = (void *)((long)pvVar2 + -8);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    param_1[2] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 006633c0  FUN_006633c0 =====

void FUN_006633c0(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  *param_1 = &PTR_FUN_00d28000;
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    operator_delete((void *)param_1[4]);
    pvVar1 = (void *)param_1[1];
  }
  else {
    pvVar1 = (void *)param_1[1];
  }
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[2];
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
    while (pvVar2 != pvVar1) {
      pvVar2 = (void *)((long)pvVar2 + -8);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    param_1[2] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 006634ac  FUN_006634ac =====

void FUN_006634ac(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  *param_1 = &PTR_FUN_00d28000;
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    operator_delete((void *)param_1[4]);
    pvVar1 = (void *)param_1[1];
  }
  else {
    pvVar1 = (void *)param_1[1];
  }
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[2];
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
        param_1[2] = pvVar1;
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
  return;
}


// ===== 00663598  FUN_00663598 =====

long * FUN_00663598(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

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
      lVar6 = FUN_00663598(param_1,uVar5,param_3);
      lVar4 = FUN_00663598(param_1,param_2[1],param_3);
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


// ===== 00663680  FUN_00663680 =====

void FUN_00663680(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00663680(param_1,*param_2);
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


// ===== 00663714  FUN_00663714 =====

long * FUN_00663714(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (param_2 == (undefined8 *)0x0) {
    plVar2 = (long *)0x0;
  }
  else {
    plVar2 = (long *)operator_new(0x20);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    uVar5 = *param_2;
    *(undefined4 *)((long)plVar2 + 0x1c) = *(undefined4 *)((long)param_2 + 0x1c);
    lVar3 = FUN_00663714(param_1,uVar5,param_3);
    lVar4 = FUN_00663714(param_1,param_2[1],param_3);
    uVar1 = *(undefined1 *)(param_2 + 3);
    *plVar2 = lVar3;
    plVar2[1] = lVar4;
    *(undefined1 *)(plVar2 + 3) = uVar1;
    if (lVar3 != 0) {
      *(long **)(lVar3 + 0x10) = plVar2;
    }
    if (lVar4 != 0) {
      *(long **)(lVar4 + 0x10) = plVar2;
    }
  }
  return plVar2;
}


// ===== 006637cc  FUN_006637cc =====

void FUN_006637cc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_006637cc(param_1,*param_2);
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


// ===== 00663840  FUN_00663840 =====

undefined1  [16]
FUN_00663840(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  size_t __n;
  void *__s1;
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined1 auVar12 [16];
  
  plVar8 = (long *)*param_1;
  plVar6 = plVar8 + 1;
  plVar9 = plVar6;
  if ((long *)*plVar6 != (long *)0x0) {
    __s1 = (void *)*param_2;
    uVar1 = param_2[1];
    plVar3 = (long *)*plVar6;
    do {
      while( true ) {
        plVar5 = plVar3;
        uVar2 = plVar5[5];
        __n = uVar2;
        if (uVar1 <= uVar2) {
          __n = uVar1;
        }
        iVar4 = memcmp(__s1,(void *)plVar5[4],__n);
        plVar6 = plVar5;
        if (iVar4 != 0) break;
        if (uVar1 == uVar2) {
          uVar7 = 0;
          goto LAB_00663930;
        }
        if (uVar2 <= uVar1) goto LAB_00663874;
LAB_006638ac:
        plVar3 = (long *)*plVar5;
        plVar9 = plVar5;
        if ((long *)*plVar5 == (long *)0x0) goto LAB_006638c8;
      }
      if (iVar4 < 0) goto LAB_006638ac;
LAB_00663874:
      plVar3 = (long *)plVar5[1];
    } while ((long *)plVar5[1] != (long *)0x0);
    plVar9 = plVar5 + 1;
  }
LAB_006638c8:
  plVar5 = (long *)operator_new(0x38);
  if (plVar5 != (long *)0x0) {
    *plVar5 = 0;
    if (plVar5 + 4 != (long *)0x0) {
      lVar11 = ((long *)*param_4)[1];
      lVar10 = *(long *)*param_4;
      plVar5[6] = 0;
      *plVar5 = 0;
      plVar5[1] = 0;
      plVar5[2] = (long)plVar6;
      plVar5[5] = lVar11;
      plVar5[4] = lVar10;
      *plVar9 = (long)plVar5;
      plVar6 = plVar5;
      if (*(long *)*plVar8 != 0) {
        *plVar8 = *(long *)*plVar8;
        plVar6 = (long *)*plVar9;
      }
      FUN_005d5b94(plVar8[1],plVar6);
      uVar7 = 1;
      plVar8[2] = plVar8[2] + 1;
LAB_00663930:
      auVar12._8_8_ = uVar7;
      auVar12._0_8_ = plVar5;
      return auVar12;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0066396c  FUN_0066396c =====

undefined1  [16] FUN_0066396c(undefined8 param_1,long *param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  
  plVar4 = param_2 + 1;
  plVar6 = plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    plVar2 = (long *)*plVar4;
    do {
      while (plVar3 = plVar2, plVar4 = plVar3, *param_4 < *(int *)((long)plVar3 + 0x1c)) {
        plVar2 = (long *)*plVar3;
        plVar6 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_006639d4;
      }
      if (*param_4 == *(int *)((long)plVar3 + 0x1c)) {
        uVar5 = 0;
        goto LAB_00663a34;
      }
      plVar2 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar6 = plVar3 + 1;
  }
LAB_006639d4:
  plVar3 = (long *)operator_new(0x20);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  iVar1 = *param_4;
  *plVar3 = 0;
  plVar3[1] = 0;
  plVar3[2] = (long)plVar4;
  *(int *)((long)plVar3 + 0x1c) = iVar1;
  *plVar6 = (long)plVar3;
  plVar4 = plVar3;
  if (*(long *)*param_2 != 0) {
    *param_2 = *(long *)*param_2;
    plVar4 = (long *)*plVar6;
  }
  FUN_005d5b94(param_2[1],plVar4);
  uVar5 = 1;
  param_2[2] = param_2[2] + 1;
LAB_00663a34:
  auVar7._8_8_ = uVar5;
  auVar7._0_8_ = plVar3;
  return auVar7;
}


// ===== 00663a64  FUN_00663a64 =====

bool FUN_00663a64(long param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  if (*(char *)(param_2 + 3) != '\x01') {
    return false;
  }
  lVar3 = (long)*(char *)((long)param_2 + 0x17);
  puVar2 = param_2;
  if (lVar3 < 0) {
    puVar2 = (undefined8 *)*param_2;
    lVar3 = param_2[1];
  }
  auVar4 = FUN_00663ad0(puVar2,lVar3);
  bVar1 = (auVar4 & (undefined1  [16])0x1) != (undefined1  [16])0x0;
  if (bVar1) {
    *(long *)(param_1 + 0x40) = auVar4._0_8_;
  }
  return bVar1;
}


// ===== 00663ad0  FUN_00663ad0 =====

undefined1  [16] FUN_00663ad0(void)

{
  undefined1 *puVar1;
  int *****pppppiVar2;
  ulong uVar3;
  undefined4 uVar4;
  ulong unaff_x21;
  double dVar5;
  undefined1 auVar6 [16];
  double local_58;
  int ****local_50;
  undefined1 *puStack_48;
  undefined8 local_40;
  undefined1 *local_38;
  
  local_58 = -NAN;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = (int ****)&DAT_aaaaaaaaaaaaaaaa;
  local_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00664178(&local_58);
  if ((char)local_38 != '\x01') {
LAB_00663b4c:
    uVar4 = 0;
    uVar3 = 0;
    goto LAB_00663c34;
  }
  puVar1 = puStack_48;
  if (((ulong)local_40 & 0x8000000000000000) == 0) {
    puVar1 = (undefined1 *)(ulong)local_40._7_1_;
  }
  if (puVar1 == (undefined1 *)0x0) {
LAB_00663b8c:
    dVar5 = local_58 * 1000.0;
LAB_00663ba4:
    if (dVar5 == INFINITY) {
      uVar3 = 0x7fffffffffffffff;
    }
    else if (dVar5 == -INFINITY) {
      uVar3 = 0x8000000000000000;
    }
    else {
      uVar3 = (ulong)dVar5;
    }
    unaff_x21 = uVar3 >> 8;
    uVar4 = 1;
joined_r0x00663c00:
    if (-1 < (long)local_40) goto LAB_00663c34;
  }
  else {
    if (-1 < (long)local_40) {
      if (local_40._7_1_ == 3) {
        pppppiVar2 = &local_50;
        goto LAB_00663bdc;
      }
      if ((local_40._7_1_ != 4) || ((int)local_50 != 0x7370626b)) goto LAB_00663b4c;
      goto LAB_00663b8c;
    }
    pppppiVar2 = (int *****)local_50;
    if (puStack_48 == (undefined1 *)0x3) {
LAB_00663bdc:
      dVar5 = local_58;
      if (*(short *)pppppiVar2 == 0x7062 && *(char *)((long)pppppiVar2 + 2) == 's')
      goto LAB_00663ba4;
      uVar3 = 0;
      uVar4 = 0;
      goto joined_r0x00663c00;
    }
    if ((puStack_48 == (undefined1 *)0x4) && (*(int *)local_50 == 0x7370626b)) goto LAB_00663b8c;
    uVar4 = 0;
    uVar3 = 0;
  }
  operator_delete(local_50);
LAB_00663c34:
  auVar6._8_4_ = uVar4;
  auVar6._0_8_ = uVar3 & 0xff | unaff_x21 << 8;
  auVar6._12_4_ = 0;
  return auVar6;
}


// ===== 00663c58  FUN_00663c58 =====

bool FUN_00663c58(long param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  if (*(char *)(param_2 + 3) != '\x01') {
    return false;
  }
  lVar3 = (long)*(char *)((long)param_2 + 0x17);
  puVar2 = param_2;
  if (lVar3 < 0) {
    puVar2 = (undefined8 *)*param_2;
    lVar3 = param_2[1];
  }
  auVar4 = FUN_00663cc4(puVar2,lVar3);
  bVar1 = (auVar4 & (undefined1  [16])0x1) != (undefined1  [16])0x0;
  if (bVar1) {
    *(long *)(param_1 + 0x40) = auVar4._0_8_;
  }
  return bVar1;
}


// ===== 00663cc4  FUN_00663cc4 =====

undefined1  [16] FUN_00663cc4(void)

{
  undefined1 *puVar1;
  int *****pppppiVar2;
  ulong uVar3;
  undefined4 uVar4;
  ulong unaff_x21;
  undefined1 auVar5 [16];
  double local_58;
  int ****local_50;
  undefined1 *puStack_48;
  undefined8 local_40;
  undefined1 *local_38;
  
  local_58 = -NAN;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = (int ****)&DAT_aaaaaaaaaaaaaaaa;
  local_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00664178(&local_58);
  if ((char)local_38 != '\x01') {
LAB_00663d30:
    uVar3 = 0;
    uVar4 = 0;
    goto LAB_00663dd8;
  }
  puVar1 = puStack_48;
  if (-1 < (long)local_40) {
    puVar1 = (undefined1 *)(ulong)local_40._7_1_;
  }
  if (puVar1 == (undefined1 *)0x0) {
LAB_00663d78:
    if (local_58 == INFINITY) {
      uVar3 = 0x7fffffffffffffff;
    }
    else if (local_58 == -INFINITY) {
      uVar3 = 0x8000000000000000;
    }
    else {
      uVar3 = (ulong)local_58;
    }
    unaff_x21 = uVar3 >> 8;
    uVar4 = 1;
joined_r0x00663dc4:
    if (-1 < (long)local_40) goto LAB_00663dd8;
  }
  else {
    if (-1 < (long)local_40) {
      if (local_40._7_1_ != 5) goto LAB_00663d30;
      pppppiVar2 = &local_50;
LAB_00663d48:
      if (*(int *)pppppiVar2 == 0x65747962 && *(char *)((long)pppppiVar2 + 4) == 's')
      goto LAB_00663d78;
      uVar4 = 0;
      uVar3 = 0;
      goto joined_r0x00663dc4;
    }
    pppppiVar2 = (int *****)local_50;
    if (puStack_48 == (undefined1 *)0x5) goto LAB_00663d48;
    uVar3 = 0;
    uVar4 = 0;
  }
  operator_delete(local_50);
LAB_00663dd8:
  auVar5._8_4_ = uVar4;
  auVar5._0_8_ = uVar3 & 0xff | unaff_x21 << 8;
  auVar5._12_4_ = 0;
  return auVar5;
}


// ===== 00663dfc  FUN_00663dfc =====

undefined1  [16] FUN_00663dfc(void)

{
  int iVar1;
  double dVar2;
  int *piVar3;
  ulong uVar4;
  undefined4 uVar5;
  ulong unaff_x21;
  undefined1 auVar6 [16];
  double local_58;
  undefined8 local_50;
  undefined1 *puStack_48;
  undefined8 local_40;
  undefined1 *local_38;
  
  local_58 = -NAN;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = (int *)&DAT_aaaaaaaaaaaaaaaa;
  local_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00664178(&local_58);
  if ((char)local_38 == '\x01') {
    dVar2 = local_58;
    if ((long)local_40 < 0) {
      if (((puStack_48 == (undefined1 *)0x1) && ((char)*local_50 == 's')) ||
         ((puStack_48 == (undefined1 *)0x7 &&
          (*local_50 == 0x6f636573 && *(int *)((long)local_50 + 3) == 0x73646e6f)))) {
LAB_00663f40:
        dVar2 = 1000000.0;
LAB_00663f8c:
        dVar2 = local_58 * dVar2;
LAB_00663f98:
        if (dVar2 == INFINITY) {
          uVar4 = 0x7fffffffffffffff;
        }
        else if (dVar2 == -INFINITY) {
          uVar4 = 0x8000000000000000;
        }
        else {
          uVar4 = (ulong)dVar2;
        }
        unaff_x21 = uVar4 >> 8;
        uVar5 = 1;
LAB_00663fdc:
        if (-1 < (long)local_40) goto LAB_00663ff0;
      }
      else {
        if (puStack_48 == (undefined1 *)0x0) goto LAB_00663f80;
        if (puStack_48 == (undefined1 *)0x2) {
          piVar3 = local_50;
          if ((short)*local_50 != 0x7375) goto LAB_00663f64;
          goto LAB_00663f98;
        }
        uVar5 = 0;
        uVar4 = 0;
      }
      operator_delete(local_50);
      goto LAB_00663ff0;
    }
    uVar5 = 0;
    if (local_40._7_1_ < 2) {
      if (local_40._7_1_ == 0) {
LAB_00663f80:
        dVar2 = 1000.0;
        goto LAB_00663f8c;
      }
      uVar4 = 0;
      if (local_40._7_1_ != 1) goto LAB_00663ff0;
      if ((char)local_50 == 's') goto LAB_00663f40;
    }
    else {
      if (local_40._7_1_ == 2) {
        if ((short)local_50 == 0x7375) goto LAB_00663f98;
        piVar3 = (int *)&local_50;
LAB_00663f64:
        if ((short)*piVar3 == 0x736d) goto LAB_00663f80;
        uVar4 = 0;
        uVar5 = 0;
        goto LAB_00663fdc;
      }
      uVar4 = 0;
      if (local_40._7_1_ != 7) goto LAB_00663ff0;
      iVar1 = (int)local_50;
      if (iVar1 == 0x6f636573 && local_50._3_4_ == 0x73646e6f) goto LAB_00663f40;
    }
  }
  uVar5 = 0;
  uVar4 = 0;
LAB_00663ff0:
  auVar6._8_4_ = uVar5;
  auVar6._0_8_ = uVar4 & 0xff | unaff_x21 << 8;
  auVar6._12_4_ = 0;
  return auVar6;
}


// ===== 00664020  FUN_00664020 =====

undefined8 FUN_00664020(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  if (*(char *)(param_2 + 3) == '\x01') {
    lVar2 = (long)*(char *)((long)param_2 + 0x17);
    puVar1 = param_2;
    if (lVar2 < 0) {
      puVar1 = (undefined8 *)*param_2;
      lVar2 = param_2[1];
    }
    auVar3 = FUN_00663ad0(puVar1,lVar2);
    if ((auVar3 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
      return 0;
    }
    if (*(char *)(param_1 + 0x48) != '\x01') {
      if ((undefined8 *)(param_1 + 0x40) != (undefined8 *)0x0) {
        *(long *)(param_1 + 0x40) = auVar3._0_8_;
        *(undefined1 *)(param_1 + 0x48) = 1;
        return 1;
      }
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *(undefined8 *)(param_1 + 0x40) = auVar3._0_8_;
  }
  else if (*(char *)(param_1 + 0x48) == '\x01') {
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  return 1;
}


// ===== 006640cc  FUN_006640cc =====

undefined8 FUN_006640cc(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  if (*(char *)(param_2 + 3) == '\x01') {
    lVar2 = (long)*(char *)((long)param_2 + 0x17);
    puVar1 = param_2;
    if (lVar2 < 0) {
      puVar1 = (undefined8 *)*param_2;
      lVar2 = param_2[1];
    }
    auVar3 = FUN_00663dfc(puVar1,lVar2);
    if ((auVar3 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
      return 0;
    }
    if (*(char *)(param_1 + 0x48) != '\x01') {
      if ((undefined8 *)(param_1 + 0x40) != (undefined8 *)0x0) {
        *(long *)(param_1 + 0x40) = auVar3._0_8_;
        *(undefined1 *)(param_1 + 0x48) = 1;
        return 1;
      }
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *(undefined8 *)(param_1 + 0x40) = auVar3._0_8_;
  }
  else if (*(char *)(param_1 + 0x48) == '\x01') {
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  return 1;
}


// ===== 00664178  FUN_00664178 =====

void FUN_00664178(undefined8 *param_1,int *****param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  int ****ppppiVar4;
  int iVar5;
  int *****__dest;
  undefined *puVar6;
  int ****local_78;
  int ****local_70;
  ulong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined4 local_4f;
  undefined2 local_4b;
  undefined1 local_49;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (param_3 == 4) {
    if (*(int *)param_2 == 0x666e692d) {
      local_70 = (int ****)0xfff0000000000000;
      goto LAB_00664320;
    }
LAB_006641f4:
    local_50 = 0;
    local_49 = 0xaa;
    local_78 = (int ****)0xffffffffffffffff;
    local_4b = 0xaaaa;
    local_4f = 0xaaaaaaaa;
    if (0x7ffffffffffffff6 < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_005d45ec();
    }
    if (param_3 < 0x17) {
      uStack_60 = CONCAT17((char)param_3,(undefined7)uStack_60);
      __dest = &local_70;
    }
    else {
      uVar1 = (param_3 & 0x7ffffffffffffff8) + 8;
      uVar2 = 0x19;
      if (uVar1 != 0x18) {
        uVar2 = uVar1;
      }
      __dest = (int *****)operator_new(uVar2);
      uStack_60 = uVar2 | 0x8000000000000000;
      local_70 = (int ****)__dest;
      local_68 = param_3;
    }
    if ((int *****)((long)__dest + param_3) < __dest) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                );
    }
    if ((__dest <= param_2) && (param_2 < (int *****)((long)__dest + param_3))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
    memmove(__dest,param_2,param_3);
    *(undefined1 *)((long)__dest + param_3) = 0;
    ppppiVar4 = local_70;
    if ((long)uStack_60 < 0) {
      iVar5 = sscanf((char *)local_70,"%lf%7s",&local_78,&local_50);
      operator_delete(ppppiVar4);
    }
    else {
      iVar5 = sscanf((char *)&local_70,"%lf%7s",&local_78,&local_50);
    }
    if (iVar5 < 1) {
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 4) = 0;
      goto LAB_00664358;
    }
    puVar6 = &local_50;
    local_70 = local_78;
  }
  else {
    if ((param_3 != 3) || (*(short *)param_2 != 0x6e69 || *(char *)((long)param_2 + 2) != 'f'))
    goto LAB_006641f4;
    local_70 = (int ****)0x7ff0000000000000;
LAB_00664320:
    puVar6 = &DAT_001b3348;
  }
  FUN_005d3510(&local_68,puVar6);
  *(undefined1 *)(param_1 + 4) = 1;
  *param_1 = local_70;
  param_1[2] = uStack_60;
  param_1[1] = local_68;
  param_1[3] = local_58;
LAB_00664358:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 006643b4  FUN_006643b4 =====

void FUN_006643b4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [12];
  
  if (param_3 == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    *(undefined1 *)(param_1 + 2) = 1;
  }
  else {
    auVar1 = FUN_00663ad0();
    if ((auVar1 & (undefined1  [12])0x1) == (undefined1  [12])0x0) {
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 2) = 0;
    }
    else {
      *param_1 = auVar1._0_8_;
      *(char *)(param_1 + 1) = auVar1[8];
      *(undefined8 *)((long)param_1 + 9) = 0x1aaaaaaaaaaaaaa;
    }
  }
  return;
}


// ===== 00664418  FUN_00664418 =====

void FUN_00664418(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [12];
  
  if (param_3 == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    *(undefined1 *)(param_1 + 2) = 1;
  }
  else {
    auVar1 = FUN_00663cc4();
    if ((auVar1 & (undefined1  [12])0x1) == (undefined1  [12])0x0) {
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 2) = 0;
    }
    else {
      *param_1 = auVar1._0_8_;
      *(char *)(param_1 + 1) = auVar1[8];
      *(undefined8 *)((long)param_1 + 9) = 0x1aaaaaaaaaaaaaa;
    }
  }
  return;
}


// ===== 0066447c  FUN_0066447c =====

void FUN_0066447c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [12];
  
  if (param_3 == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    *(undefined1 *)(param_1 + 2) = 1;
  }
  else {
    auVar1 = FUN_00663dfc();
    if ((auVar1 & (undefined1  [12])0x1) == (undefined1  [12])0x0) {
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 2) = 0;
    }
    else {
      *param_1 = auVar1._0_8_;
      *(char *)(param_1 + 1) = auVar1[8];
      *(undefined8 *)((long)param_1 + 9) = 0x1aaaaaaaaaaaaaa;
    }
  }
  return;
}


// ===== 006644e0  FUN_006644e0 =====

void FUN_006644e0(void *param_1)

{
  FUN_006634ac();
  operator_delete(param_1);
  return;
}


// ===== 00664510  FUN_00664510 =====

void FUN_00664510(void *param_1)

{
  FUN_006634ac();
  operator_delete(param_1);
  return;
}


// ===== 00664540  FUN_00664540 =====

void FUN_00664540(void *param_1)

{
  FUN_006634ac();
  operator_delete(param_1);
  return;
}


// ===== 00664570  FUN_00664570 =====

void FUN_00664570(void *param_1)

{
  FUN_006634ac();
  operator_delete(param_1);
  return;
}


// ===== 006645a0  FUN_006645a0 =====

/* WARNING: Type propagation algorithm not settling */

uint FUN_006645a0(undefined8 *******param_1,ulong param_2,undefined1 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 *******pppppppuVar4;
  undefined8 *******local_58;
  ulong uStack_50;
  undefined8 local_48;
  
  if (0x7ffffffffffffff6 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (param_2 < 0x17) {
    local_48 = CONCAT17((char)param_2,(undefined7)local_48);
    pppppppuVar4 = &local_58;
  }
  else {
    uVar1 = (param_2 & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    pppppppuVar4 = (undefined8 *******)operator_new(uVar2);
    local_48 = uVar2 | 0x8000000000000000;
    local_58 = pppppppuVar4;
    uStack_50 = param_2;
  }
  if ((undefined8 *******)((long)pppppppuVar4 + param_2) < pppppppuVar4) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
  if ((pppppppuVar4 <= param_1) && (param_1 < (undefined8 *******)((long)pppppppuVar4 + param_2))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
  memmove(pppppppuVar4,param_1,param_2);
  *(undefined1 *)((long)pppppppuVar4 + param_2) = 0;
  uVar1 = uStack_50;
  pppppppuVar4 = local_58;
  if (-1 < (long)local_48) {
    uVar1 = local_48 >> 0x38;
    pppppppuVar4 = &local_58;
  }
  uVar3 = FUN_006611c4(pppppppuVar4,uVar1);
  if ((long)local_48 < 0) {
    operator_delete(local_58);
  }
  if ((uVar3 >> 8 & 1) != 0) {
    *param_3 = (char)uVar3;
  }
  return uVar3 >> 8 & 1;
}


// ===== 006646e0  FUN_006646e0 =====

void FUN_006646e0(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined8 ***pppuVar2;
  undefined8 **local_38;
  ulong uStack_30;
  byte bStack_21;
  
  pcVar1 = "true";
  if (*param_1 == '\0') {
    pcVar1 = "false";
  }
  FUN_005d3510(&local_38,pcVar1);
  pppuVar2 = (undefined8 ***)local_38;
  if (-1 < (char)bStack_21) {
    uStack_30 = (ulong)bStack_21;
    pppuVar2 = &local_38;
  }
  FUN_00547cac(param_2,pppuVar2,uStack_30);
  if ((char)bStack_21 < '\0') {
    operator_delete(local_38);
  }
  return;
}


// ===== 0066476c  FUN_0066476c =====

/* WARNING: Type propagation algorithm not settling */

uint FUN_0066476c(undefined8 *******param_1,ulong param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *******pppppppuVar3;
  undefined1 auVar4 [16];
  undefined8 *******local_58;
  ulong uStack_50;
  undefined8 local_48;
  
  if (0x7ffffffffffffff6 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (param_2 < 0x17) {
    local_48 = CONCAT17((char)param_2,(undefined7)local_48);
    pppppppuVar3 = &local_58;
  }
  else {
    uVar1 = (param_2 & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    pppppppuVar3 = (undefined8 *******)operator_new(uVar2);
    local_48 = uVar2 | 0x8000000000000000;
    local_58 = pppppppuVar3;
    uStack_50 = param_2;
  }
  if ((undefined8 *******)((long)pppppppuVar3 + param_2) < pppppppuVar3) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
  if ((pppppppuVar3 <= param_1) && (param_1 < (undefined8 *******)((long)pppppppuVar3 + param_2))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
  memmove(pppppppuVar3,param_1,param_2);
  *(undefined1 *)((long)pppppppuVar3 + param_2) = 0;
  uVar1 = uStack_50;
  pppppppuVar3 = local_58;
  if (-1 < (long)local_48) {
    uVar1 = local_48 >> 0x38;
    pppppppuVar3 = &local_58;
  }
  auVar4 = FUN_006612e4(pppppppuVar3,uVar1);
  if ((long)local_48 < 0) {
    operator_delete(local_58);
  }
  if ((auVar4 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
    *param_3 = auVar4._0_8_;
  }
  return auVar4._8_4_ & 1;
}


// ===== 006648b0  FUN_006648b0 =====

void FUN_006648b0(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 **local_38;
  ulong uStack_30;
  ulong local_28;
  
  local_38 = (undefined8 ***)0x0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_00624ab4(*param_1,&local_38,0x10);
  uVar1 = uStack_30;
  pppuVar2 = (undefined8 ***)local_38;
  if (-1 < (long)local_28) {
    uVar1 = local_28 >> 0x38;
    pppuVar2 = &local_38;
  }
  FUN_00547cac(param_2,pppuVar2,uVar1);
  if ((long)local_28 < 0) {
    operator_delete(local_38);
  }
  return;
}


// ===== 00664930  FUN_00664930 =====

/* WARNING: Type propagation algorithm not settling */

ulong FUN_00664930(undefined8 *******param_1,ulong param_2,undefined4 *param_3)

{
  ulong uVar1;
  undefined8 *******pppppppuVar2;
  ulong uVar3;
  undefined8 *******local_58;
  ulong uStack_50;
  undefined8 local_48;
  
  if (0x7ffffffffffffff6 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (param_2 < 0x17) {
    local_48 = CONCAT17((char)param_2,(undefined7)local_48);
    pppppppuVar2 = &local_58;
  }
  else {
    uVar3 = (param_2 & 0x7ffffffffffffff8) + 8;
    uVar1 = 0x19;
    if (uVar3 != 0x18) {
      uVar1 = uVar3;
    }
    pppppppuVar2 = (undefined8 *******)operator_new(uVar1);
    local_48 = uVar1 | 0x8000000000000000;
    local_58 = pppppppuVar2;
    uStack_50 = param_2;
  }
  if ((undefined8 *******)((long)pppppppuVar2 + param_2) < pppppppuVar2) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
  if ((pppppppuVar2 <= param_1) && (param_1 < (undefined8 *******)((long)pppppppuVar2 + param_2))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
  memmove(pppppppuVar2,param_1,param_2);
  *(undefined1 *)((long)pppppppuVar2 + param_2) = 0;
  uVar3 = uStack_50;
  pppppppuVar2 = local_58;
  if (-1 < (long)local_48) {
    uVar3 = local_48 >> 0x38;
    pppppppuVar2 = &local_58;
  }
  uVar3 = FUN_006614d4(pppppppuVar2,uVar3);
  if ((long)local_48 < 0) {
    operator_delete(local_58);
  }
  if ((uVar3 >> 0x20 & 1) != 0) {
    *param_3 = (int)uVar3;
  }
  return uVar3 >> 0x20 & 1;
}


// ===== 00664a70  FUN_00664a70 =====

void FUN_00664a70(undefined4 *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 **local_38;
  ulong uStack_30;
  ulong local_28;
  
  local_38 = (undefined8 ***)0x0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_005f55c4(&local_38,0x16,*param_1);
  uVar1 = uStack_30;
  pppuVar2 = (undefined8 ***)local_38;
  if (-1 < (long)local_28) {
    uVar1 = local_28 >> 0x38;
    pppuVar2 = &local_38;
  }
  FUN_00547cac(param_2,pppuVar2,uVar1);
  if ((long)local_28 < 0) {
    operator_delete(local_38);
  }
  return;
}


// ===== 00664af0  FUN_00664af0 =====

/* WARNING: Type propagation algorithm not settling */

ulong FUN_00664af0(undefined8 *******param_1,ulong param_2,undefined4 *param_3)

{
  ulong uVar1;
  undefined8 *******pppppppuVar2;
  ulong uVar3;
  undefined8 *******local_58;
  ulong uStack_50;
  undefined8 local_48;
  
  if (0x7ffffffffffffff6 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (param_2 < 0x17) {
    local_48 = CONCAT17((char)param_2,(undefined7)local_48);
    pppppppuVar2 = &local_58;
  }
  else {
    uVar3 = (param_2 & 0x7ffffffffffffff8) + 8;
    uVar1 = 0x19;
    if (uVar3 != 0x18) {
      uVar1 = uVar3;
    }
    pppppppuVar2 = (undefined8 *******)operator_new(uVar1);
    local_48 = uVar1 | 0x8000000000000000;
    local_58 = pppppppuVar2;
    uStack_50 = param_2;
  }
  if ((undefined8 *******)((long)pppppppuVar2 + param_2) < pppppppuVar2) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
  if ((pppppppuVar2 <= param_1) && (param_1 < (undefined8 *******)((long)pppppppuVar2 + param_2))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
  memmove(pppppppuVar2,param_1,param_2);
  *(undefined1 *)((long)pppppppuVar2 + param_2) = 0;
  uVar3 = uStack_50;
  pppppppuVar2 = local_58;
  if (-1 < (long)local_48) {
    uVar3 = local_48 >> 0x38;
    pppppppuVar2 = &local_58;
  }
  uVar3 = FUN_006616a8(pppppppuVar2,uVar3);
  if ((long)local_48 < 0) {
    operator_delete(local_58);
  }
  if ((uVar3 >> 0x20 & 1) != 0) {
    *param_3 = (int)uVar3;
  }
  return uVar3 >> 0x20 & 1;
}


// ===== 00664c30  FUN_00664c30 =====

void FUN_00664c30(undefined4 *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 **local_38;
  ulong uStack_30;
  ulong local_28;
  
  local_38 = (undefined8 ***)0x0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_005fa03c(&local_38,0x16,*param_1);
  uVar1 = uStack_30;
  pppuVar2 = (undefined8 ***)local_38;
  if (-1 < (long)local_28) {
    uVar1 = local_28 >> 0x38;
    pppuVar2 = &local_38;
  }
  FUN_00547cac(param_2,pppuVar2,uVar1);
  if ((long)local_28 < 0) {
    operator_delete(local_38);
  }
  return;
}


// ===== 00664cb0  FUN_00664cb0 =====

void FUN_00664cb0(undefined1 *param_1,ulong param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 **ppuVar3;
  undefined1 *local_70;
  ulong uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  
  ppuVar3 = &local_70;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  if (0x7ffffffffffffff6 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (param_2 < 0x17) {
    local_60 = CONCAT17((char)param_2,(undefined7)local_60);
  }
  else {
    uVar1 = (param_2 & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    ppuVar3 = (undefined1 **)operator_new(uVar2);
    local_60 = uVar2 | 0x8000000000000000;
    local_70 = (undefined1 *)ppuVar3;
    uStack_68 = param_2;
  }
  local_58 = 0xffffffffffffffff;
  if ((undefined1 *)((long)ppuVar3 + param_2) < ppuVar3) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
  if ((ppuVar3 <= param_1) && (param_1 < (undefined1 *)((long)ppuVar3 + param_2))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
  memmove(ppuVar3,param_1,param_2);
  *(undefined1 *)((long)ppuVar3 + param_2) = 0;
  uVar1 = uStack_68;
  ppuVar3 = (undefined1 **)local_70;
  if (-1 < (long)local_60) {
    uVar1 = local_60 >> 0x38;
    ppuVar3 = &local_70;
  }
  FUN_00662420(&local_58,ppuVar3,uVar1);
  if ((long)local_60 < 0) {
    operator_delete(local_70);
  }
  if ((char)puStack_48 == '\x01') {
    *param_3 = local_58;
    *(undefined1 *)(param_3 + 1) = local_50._0_1_;
  }
  return;
}


// ===== 00664e08  FUN_00664e08 =====

void FUN_00664e08(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 **local_38;
  ulong uStack_30;
  ulong local_28;
  
  if ((*(uint *)(param_1 + 1) & 1) != 0) {
    local_38 = (undefined8 ***)0x0;
    uStack_30 = 0;
    local_28 = 0;
    FUN_00624ab4(*param_1,&local_38,0x10);
    uVar1 = uStack_30;
    pppuVar2 = (undefined8 ***)local_38;
    if (-1 < (long)local_28) {
      uVar1 = local_28 >> 0x38;
      pppuVar2 = &local_38;
    }
    FUN_00547cac(param_2,pppuVar2,uVar1);
    if ((long)local_28 < 0) {
      operator_delete(local_38);
    }
  }
  return;
}


// ===== 00664e94  FUN_00664e94 =====

/* WARNING: Type propagation algorithm not settling */

uint FUN_00664e94(undefined8 *******param_1,ulong param_2,undefined4 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *******pppppppuVar3;
  undefined1 auVar4 [16];
  undefined8 *******local_58;
  ulong uStack_50;
  undefined8 local_48;
  
  if (0x7ffffffffffffff6 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (param_2 < 0x17) {
    local_48 = CONCAT17((char)param_2,(undefined7)local_48);
    pppppppuVar3 = &local_58;
  }
  else {
    uVar1 = (param_2 & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    pppppppuVar3 = (undefined8 *******)operator_new(uVar2);
    local_48 = uVar2 | 0x8000000000000000;
    local_58 = pppppppuVar3;
    uStack_50 = param_2;
  }
  if ((undefined8 *******)((long)pppppppuVar3 + param_2) < pppppppuVar3) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
  if ((pppppppuVar3 <= param_1) && (param_1 < (undefined8 *******)((long)pppppppuVar3 + param_2))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
  memmove(pppppppuVar3,param_1,param_2);
  *(undefined1 *)((long)pppppppuVar3 + param_2) = 0;
  uVar1 = uStack_50;
  pppppppuVar3 = local_58;
  if (-1 < (long)local_48) {
    uVar1 = local_48 >> 0x38;
    pppppppuVar3 = &local_58;
  }
  auVar4 = FUN_006623d8(pppppppuVar3,uVar1);
  if ((long)local_48 < 0) {
    operator_delete(local_58);
  }
  if ((auVar4 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
    *param_3 = auVar4._0_4_;
    *(char *)(param_3 + 1) = auVar4[4];
  }
  return auVar4._8_4_ & 1;
}


// ===== 00664fe0  FUN_00664fe0 =====

void FUN_00664fe0(ulong *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 **local_38;
  ulong uStack_30;
  ulong local_28;
  
  if ((*param_1 >> 0x20 & 1) != 0) {
    local_38 = (undefined8 ***)0x0;
    uStack_30 = 0;
    local_28 = 0;
    FUN_005f55c4(&local_38,0x16,*param_1 & 0xffffffff);
    uVar1 = uStack_30;
    pppuVar2 = (undefined8 ***)local_38;
    if (-1 < (long)local_28) {
      uVar1 = local_28 >> 0x38;
      pppuVar2 = &local_38;
    }
    FUN_00547cac(param_2,pppuVar2,uVar1);
    if ((long)local_28 < 0) {
      operator_delete(local_38);
    }
  }
  return;
}


// ===== 0066506c  FUN_0066506c =====

/* WARNING: Type propagation algorithm not settling */

uint FUN_0066506c(undefined8 *******param_1,ulong param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *******pppppppuVar3;
  undefined1 auVar4 [16];
  undefined8 *******local_58;
  ulong uStack_50;
  undefined8 local_48;
  
  if (0x7ffffffffffffff6 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (param_2 < 0x17) {
    local_48 = CONCAT17((char)param_2,(undefined7)local_48);
    pppppppuVar3 = &local_58;
  }
  else {
    uVar1 = (param_2 & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    pppppppuVar3 = (undefined8 *******)operator_new(uVar2);
    local_48 = uVar2 | 0x8000000000000000;
    local_58 = pppppppuVar3;
    uStack_50 = param_2;
  }
  if ((undefined8 *******)((long)pppppppuVar3 + param_2) < pppppppuVar3) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
  if ((pppppppuVar3 <= param_1) && (param_1 < (undefined8 *******)((long)pppppppuVar3 + param_2))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
  memmove(pppppppuVar3,param_1,param_2);
  *(undefined1 *)((long)pppppppuVar3 + param_2) = 0;
  uVar1 = uStack_50;
  pppppppuVar3 = local_58;
  if (-1 < (long)local_48) {
    uVar1 = local_48 >> 0x38;
    pppppppuVar3 = &local_58;
  }
  auVar4 = FUN_00663ad0(pppppppuVar3,uVar1);
  if ((long)local_48 < 0) {
    operator_delete(local_58);
  }
  if ((auVar4 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
    *param_3 = auVar4._0_8_;
  }
  return auVar4._8_4_ & 1;
}


// ===== 006651b0  FUN_006651b0 =====

void FUN_006651b0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 ***pppuVar1;
  undefined8 **local_38;
  ulong uStack_30;
  byte bStack_21;
  
  FUN_00665ccc(&local_38,*param_1);
  pppuVar1 = (undefined8 ***)local_38;
  if (-1 < (char)bStack_21) {
    uStack_30 = (ulong)bStack_21;
    pppuVar1 = &local_38;
  }
  FUN_00547cac(param_2,pppuVar1,uStack_30);
  if ((char)bStack_21 < '\0') {
    operator_delete(local_38);
  }
  return;
}


// ===== 00665224  FUN_00665224 =====

/* WARNING: Type propagation algorithm not settling */

uint FUN_00665224(undefined8 *******param_1,ulong param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *******pppppppuVar3;
  undefined1 auVar4 [16];
  undefined8 *******local_58;
  ulong uStack_50;
  undefined8 local_48;
  
  if (0x7ffffffffffffff6 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (param_2 < 0x17) {
    local_48 = CONCAT17((char)param_2,(undefined7)local_48);
    pppppppuVar3 = &local_58;
  }
  else {
    uVar1 = (param_2 & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    pppppppuVar3 = (undefined8 *******)operator_new(uVar2);
    local_48 = uVar2 | 0x8000000000000000;
    local_58 = pppppppuVar3;
    uStack_50 = param_2;
  }
  if ((undefined8 *******)((long)pppppppuVar3 + param_2) < pppppppuVar3) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
  if ((pppppppuVar3 <= param_1) && (param_1 < (undefined8 *******)((long)pppppppuVar3 + param_2))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
  memmove(pppppppuVar3,param_1,param_2);
  *(undefined1 *)((long)pppppppuVar3 + param_2) = 0;
  uVar1 = uStack_50;
  pppppppuVar3 = local_58;
  if (-1 < (long)local_48) {
    uVar1 = local_48 >> 0x38;
    pppppppuVar3 = &local_58;
  }
  auVar4 = FUN_00663dfc(pppppppuVar3,uVar1);
  if ((long)local_48 < 0) {
    operator_delete(local_58);
  }
  if ((auVar4 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
    *param_3 = auVar4._0_8_;
  }
  return auVar4._8_4_ & 1;
}


// ===== 00665368  FUN_00665368 =====

void FUN_00665368(undefined8 *param_1,undefined8 param_2)

{
  undefined8 ***pppuVar1;
  undefined8 **local_38;
  ulong uStack_30;
  byte bStack_21;
  
  FUN_006224f8(&local_38,*param_1);
  pppuVar1 = (undefined8 ***)local_38;
  if (-1 < (char)bStack_21) {
    uStack_30 = (ulong)bStack_21;
    pppuVar1 = &local_38;
  }
  FUN_00547cac(param_2,pppuVar1,uStack_30);
  if ((char)bStack_21 < '\0') {
    operator_delete(local_38);
  }
  return;
}


// ===== 006653dc  FUN_006653dc =====

byte FUN_006653dc(undefined8 *****param_1,ulong param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *****pppppuVar3;
  undefined8 ****local_78;
  ulong uStack_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  if (0x7ffffffffffffff6 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (param_2 < 0x17) {
    local_68 = CONCAT17((char)param_2,(undefined7)local_68);
    pppppuVar3 = &local_78;
  }
  else {
    uVar1 = (param_2 & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    pppppuVar3 = (undefined8 *****)operator_new(uVar2);
    local_68 = uVar2 | 0x8000000000000000;
    local_78 = pppppuVar3;
    uStack_70 = param_2;
  }
  if (pppppuVar3 <= (undefined8 *****)((long)pppppuVar3 + param_2)) {
    if ((pppppuVar3 <= param_1) && (param_1 < (undefined8 *****)((long)pppppuVar3 + param_2))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
    memmove(pppppuVar3,param_1,param_2);
    *(undefined1 *)((long)pppppuVar3 + param_2) = 0;
    uVar1 = uStack_70;
    pppppuVar3 = (undefined8 *****)local_78;
    if (-1 < (long)local_68) {
      uVar1 = local_68 >> 0x38;
      pppppuVar3 = &local_78;
    }
    FUN_006643b4(&local_60,pppppuVar3,uVar1);
    if ((long)local_68 < 0) {
      operator_delete(local_78);
    }
    else {
    }
    if (((ulong)local_50 & 1) != 0) {
      *param_3 = local_60;
      *(undefined1 *)(param_3 + 1) = puStack_58._0_1_;
    }
    return (byte)local_50 & 1;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
            );
}


// ===== 0066553c  FUN_0066553c =====

void FUN_0066553c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 ***pppuVar1;
  undefined8 **local_38;
  ulong uStack_30;
  byte bStack_21;
  
  if ((*(uint *)(param_1 + 1) & 1) != 0) {
    FUN_00665ccc(&local_38,*param_1);
    pppuVar1 = (undefined8 ***)local_38;
    if (-1 < (char)bStack_21) {
      uStack_30 = (ulong)bStack_21;
      pppuVar1 = &local_38;
    }
    FUN_00547cac(param_2,pppuVar1,uStack_30);
    if ((char)bStack_21 < '\0') {
      operator_delete(local_38);
    }
  }
  return;
}


// ===== 006655bc  FUN_006655bc =====

byte FUN_006655bc(undefined8 *****param_1,ulong param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *****pppppuVar3;
  undefined8 ****local_78;
  ulong uStack_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  if (0x7ffffffffffffff6 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (param_2 < 0x17) {
    local_68 = CONCAT17((char)param_2,(undefined7)local_68);
    pppppuVar3 = &local_78;
  }
  else {
    uVar1 = (param_2 & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    pppppuVar3 = (undefined8 *****)operator_new(uVar2);
    local_68 = uVar2 | 0x8000000000000000;
    local_78 = pppppuVar3;
    uStack_70 = param_2;
  }
  if (pppppuVar3 <= (undefined8 *****)((long)pppppuVar3 + param_2)) {
    if ((pppppuVar3 <= param_1) && (param_1 < (undefined8 *****)((long)pppppuVar3 + param_2))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
    memmove(pppppuVar3,param_1,param_2);
    *(undefined1 *)((long)pppppuVar3 + param_2) = 0;
    uVar1 = uStack_70;
    pppppuVar3 = (undefined8 *****)local_78;
    if (-1 < (long)local_68) {
      uVar1 = local_68 >> 0x38;
      pppppuVar3 = &local_78;
    }
    FUN_00664418(&local_60,pppppuVar3,uVar1);
    if ((long)local_68 < 0) {
      operator_delete(local_78);
    }
    else {
    }
    if (((ulong)local_50 & 1) != 0) {
      *param_3 = local_60;
      *(undefined1 *)(param_3 + 1) = puStack_58._0_1_;
    }
    return (byte)local_50 & 1;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
            );
}


// ===== 0066571c  FUN_0066571c =====

void FUN_0066571c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 ***pppuVar1;
  undefined8 **local_38;
  ulong uStack_30;
  byte bStack_21;
  
  if ((*(uint *)(param_1 + 1) & 1) != 0) {
    FUN_00665f28(&local_38,*param_1);
    pppuVar1 = (undefined8 ***)local_38;
    if (-1 < (char)bStack_21) {
      uStack_30 = (ulong)bStack_21;
      pppuVar1 = &local_38;
    }
    FUN_00547cac(param_2,pppuVar1,uStack_30);
    if ((char)bStack_21 < '\0') {
      operator_delete(local_38);
    }
  }
  return;
}


// ===== 0066579c  FUN_0066579c =====

byte FUN_0066579c(undefined8 *****param_1,ulong param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *****pppppuVar3;
  undefined8 ****local_78;
  ulong uStack_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  if (0x7ffffffffffffff6 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (param_2 < 0x17) {
    local_68 = CONCAT17((char)param_2,(undefined7)local_68);
    pppppuVar3 = &local_78;
  }
  else {
    uVar1 = (param_2 & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    pppppuVar3 = (undefined8 *****)operator_new(uVar2);
    local_68 = uVar2 | 0x8000000000000000;
    local_78 = pppppuVar3;
    uStack_70 = param_2;
  }
  if (pppppuVar3 <= (undefined8 *****)((long)pppppuVar3 + param_2)) {
    if ((pppppuVar3 <= param_1) && (param_1 < (undefined8 *****)((long)pppppuVar3 + param_2))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
    memmove(pppppuVar3,param_1,param_2);
    *(undefined1 *)((long)pppppuVar3 + param_2) = 0;
    uVar1 = uStack_70;
    pppppuVar3 = (undefined8 *****)local_78;
    if (-1 < (long)local_68) {
      uVar1 = local_68 >> 0x38;
      pppppuVar3 = &local_78;
    }
    FUN_0066447c(&local_60,pppppuVar3,uVar1);
    if ((long)local_68 < 0) {
      operator_delete(local_78);
    }
    else {
    }
    if (((ulong)local_50 & 1) != 0) {
      *param_3 = local_60;
      *(undefined1 *)(param_3 + 1) = puStack_58._0_1_;
    }
    return (byte)local_50 & 1;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
            );
}


// ===== 006658fc  FUN_006658fc =====

void FUN_006658fc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 ***pppuVar1;
  undefined8 **local_38;
  ulong uStack_30;
  byte bStack_21;
  
  if ((*(uint *)(param_1 + 1) & 1) != 0) {
    FUN_006224f8(&local_38,*param_1);
    pppuVar1 = (undefined8 ***)local_38;
    if (-1 < (char)bStack_21) {
      uStack_30 = (ulong)bStack_21;
      pppuVar1 = &local_38;
    }
    FUN_00547cac(param_2,pppuVar1,uStack_30);
    if ((char)bStack_21 < '\0') {
      operator_delete(local_38);
    }
  }
  return;
}


// ===== 0066597c  FUN_0066597c =====

void FUN_0066597c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}


// ===== 006659ac  FUN_006659ac =====

void FUN_006659ac(undefined8 *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int iVar6;
  void *pvVar7;
  size_t sVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined *puVar11;
  size_t __n;
  ulong uVar12;
  char *pcVar13;
  undefined8 *puVar14;
  long lVar15;
  char *local_80;
  size_t sStack_78;
  long local_70;
  ulong local_68;
  
  if (param_3 != 0) {
    uVar12 = 0;
    local_70 = param_2;
    local_68 = param_3;
    do {
      uVar5 = local_68;
      lVar15 = local_70;
      __n = local_68 - uVar12;
      pcVar10 = (char *)(local_70 + uVar12);
      pvVar7 = memchr((void *)(local_70 + uVar12),0x2c,local_68 - uVar12);
      uVar2 = uVar5;
      if ((long)pvVar7 - lVar15 != 0xffffffffffffffff && pvVar7 != (void *)0x0) {
        uVar2 = (long)pvVar7 - lVar15;
      }
      pvVar7 = memchr((void *)(lVar15 + uVar12),0x3a,uVar5 - uVar12);
      uVar3 = uVar5;
      if ((long)pvVar7 - lVar15 != 0xffffffffffffffff && pvVar7 != (void *)0x0) {
        uVar3 = (long)pvVar7 - lVar15;
      }
      if (uVar2 <= uVar3) {
        uVar3 = uVar2;
      }
      uVar1 = uVar3 + 1;
      if (uVar3 - uVar12 <= __n) {
        __n = uVar3 - uVar12;
      }
      local_80 = pcVar10;
      sStack_78 = __n;
      if (uVar2 < uVar1) {
        lVar15 = 0;
        uVar12 = 0;
      }
      else {
        if (uVar5 < uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_005f55a8("string_view::substr");
        }
        lVar15 = lVar15 + uVar1;
        uVar12 = uVar5 - uVar1;
        if (uVar2 - uVar1 <= uVar5 - uVar1) {
          uVar12 = uVar2 - uVar1;
        }
      }
      puVar4 = (undefined8 *)param_1[1];
      for (puVar14 = (undefined8 *)*param_1; puVar14 != puVar4; puVar14 = puVar14 + 4) {
        pcVar13 = (char *)*puVar14;
        if (pcVar13 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/string_view:278: libc++ Hardening assertion __s != nullptr failed: null pointer passed to non-null argument of char_traits<...>::length\n"
                    );
        }
        sVar8 = strlen(pcVar13);
        if ((__n == sVar8) && (iVar6 = memcmp(pcVar10,pcVar13,__n), iVar6 == 0)) {
          uVar12 = (*(code *)puVar14[2])(lVar15,uVar12,puVar14[1]);
          if (((uVar12 & 1) != 0) || (uVar12 = FUN_004022fc(), (uVar12 & 1) != 0))
          goto LAB_006659f4;
          uVar9 = 0x3aa;
          pcVar10 = "Failed to read field with key: \'";
          pcVar13 = "\' in trial: \"";
          puVar11 = &DAT_001d6255;
          goto LAB_006659f0;
        }
      }
      if (((__n == 0) || (*pcVar10 != '_')) && (uVar12 = FUN_00417e08(), (uVar12 & 1) == 0)) {
        uVar9 = 0x3f9;
        pcVar10 = "No field with key: \'";
        pcVar13 = "\' (found in trial: \"";
        puVar11 = &DAT_001cdf49;
LAB_006659f0:
        FUN_00623bb0(&DAT_001fef7c,"../../rtc_base/experiments/struct_parameters_parser.cc",uVar9,
                     pcVar10,&local_80,pcVar13,&local_70,puVar11);
      }
LAB_006659f4:
      uVar12 = uVar2 + 1;
    } while (uVar12 < local_68);
  }
  return;
}


// ===== 00665bb4  FUN_00665bb4 =====

void FUN_00665bb4(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  size_t sVar3;
  char *pcVar4;
  
  puVar1 = (undefined8 *)*param_2;
  puVar2 = (undefined8 *)param_2[1];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (puVar1 != puVar2) {
    pcVar4 = (char *)*puVar1;
    if (pcVar4 == (char *)0x0) {
LAB_00665cb8:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string:3112: libc++ Hardening assertion __s != nullptr failed: string::append received nullptr\n"
                );
    }
    sVar3 = strlen(pcVar4);
    FUN_00547cac(param_1,pcVar4,sVar3);
    FUN_00547cac(param_1,&DAT_001ca603,1);
    (*(code *)puVar1[3])(puVar1[1],param_1);
    while (puVar1 = puVar1 + 4, puVar1 != puVar2) {
      FUN_00547cac(param_1,&DAT_001ea264,1);
      pcVar4 = (char *)*puVar1;
      if (pcVar4 == (char *)0x0) goto LAB_00665cb8;
      sVar3 = strlen(pcVar4);
      FUN_00547cac(param_1,pcVar4,sVar3);
      FUN_00547cac(param_1,&DAT_001ca603,1);
      (*(code *)puVar1[3])(puVar1[1],param_1);
    }
  }
  return;
}


// ===== 00665ccc  FUN_00665ccc =====

void FUN_00665ccc(char *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  char **ppcVar3;
  size_t __n;
  char *__dest;
  char *pcVar4;
  undefined8 uVar5;
  ulong uVar6;
  char *local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  long local_48;
  
  ppcVar3 = &local_b0;
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00622830(&local_b0,&local_90,0x40);
  if (param_2 == 0x8000000000000000) {
    pcVar4 = "-inf bps";
LAB_00665d50:
    uVar5 = 8;
  }
  else {
    if (param_2 != 0) {
      if (param_2 == 0x7fffffffffffffff) {
        pcVar4 = "+inf bps";
        goto LAB_00665d50;
      }
      if ((param_2 * 0x1cac083126e978d5 + 0x10624dd2f1a9fb8 >> 3 |
          param_2 * 0x1cac083126e978d5 << 0x3d) < 0x4189374bc6a7ef) {
        uVar6 = param_2 / 1000;
        if (499 < param_2 % 1000) {
          uVar6 = uVar6 + 1;
        }
        if ((param_2 & 0x8000000000000000) != 0) {
          uVar6 = -(-param_2 / 1000) - (ulong)(500 < -param_2 % 1000);
        }
        ppcVar3 = (char **)FUN_00622a0c(&local_b0,uVar6);
        pcVar4 = " kbps";
        uVar5 = 5;
        goto LAB_00665db4;
      }
    }
    ppcVar3 = (char **)FUN_00622a0c(&local_b0,param_2);
    pcVar4 = " bps";
    uVar5 = 4;
  }
LAB_00665db4:
  FUN_006228b0(ppcVar3,pcVar4,uVar5);
  pcVar4 = local_b0;
  if (local_b0 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string:1063: libc++ Hardening assertion __s != nullptr failed: basic_string(const char*) detected nullptr\n"
              );
  }
  __n = strlen(local_b0);
  if (__n < 0x7ffffffffffffff7) {
    if (__n < 0x17) {
      param_1[0x17] = (char)__n;
      __dest = param_1;
    }
    else {
      uVar6 = (__n & 0x7ffffffffffffff8) + 8;
      uVar1 = 0x19;
      if (uVar6 != 0x18) {
        uVar1 = uVar6;
      }
      __dest = (char *)operator_new(uVar1);
      *(char **)param_1 = __dest;
      *(size_t *)(param_1 + 8) = __n;
      *(ulong *)(param_1 + 0x10) = uVar1 | 0x8000000000000000;
    }
    if (__dest <= __dest + __n) {
      if ((__dest <= pcVar4) && (pcVar4 < __dest + __n)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                  );
      }
      memmove(__dest,pcVar4,__n);
      __dest[__n] = '\0';
      if (*(long *)(lVar2 + 0x28) == local_48) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
                    /* WARNING: Subroutine does not return */
  FUN_005d45ec();
}


// ===== 00665f28  FUN_00665f28 =====

void FUN_00665f28(char *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  char **ppcVar4;
  size_t __n;
  char *__dest;
  char *pcVar5;
  undefined8 uVar6;
  char *local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  long local_48;
  
  ppcVar4 = &local_b0;
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00622830(&local_b0,&local_90,0x40);
  if (param_2 == -0x8000000000000000) {
    pcVar5 = "-inf bytes";
  }
  else {
    if (param_2 != 0x7fffffffffffffff) {
      ppcVar4 = (char **)FUN_00622a0c(&local_b0,param_2);
      pcVar5 = " bytes";
      uVar6 = 6;
      goto LAB_00665fcc;
    }
    pcVar5 = "+inf bytes";
  }
  uVar6 = 10;
LAB_00665fcc:
  FUN_006228b0(ppcVar4,pcVar5,uVar6);
  pcVar5 = local_b0;
  if (local_b0 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string:1063: libc++ Hardening assertion __s != nullptr failed: basic_string(const char*) detected nullptr\n"
              );
  }
  __n = strlen(local_b0);
  if (__n < 0x7ffffffffffffff7) {
    if (__n < 0x17) {
      param_1[0x17] = (char)__n;
      __dest = param_1;
    }
    else {
      uVar1 = (__n & 0x7ffffffffffffff8) + 8;
      uVar2 = 0x19;
      if (uVar1 != 0x18) {
        uVar2 = uVar1;
      }
      __dest = (char *)operator_new(uVar2);
      *(char **)param_1 = __dest;
      *(size_t *)(param_1 + 8) = __n;
      *(ulong *)(param_1 + 0x10) = uVar2 | 0x8000000000000000;
    }
    if (__dest <= __dest + __n) {
      if ((__dest <= pcVar5) && (pcVar5 < __dest + __n)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                  );
      }
      memmove(__dest,pcVar5,__n);
      __dest[__n] = '\0';
      if (*(long *)(lVar3 + 0x28) == local_48) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
                    /* WARNING: Subroutine does not return */
  FUN_005d45ec();
}


// ===== 006660d0  FUN_006660d0 =====

void FUN_006660d0(void)

{
  FUN_006660d8();
  return;
}


// ===== 006660d8  FUN_006660d8 =====

pthread_mutex_t *
FUN_006660d8(void *param_1,ulong param_2,int param_3,undefined4 param_4,int param_5)

{
  size_t sVar1;
  char cVar2;
  pthread_mutex_t *__mutex;
  int iVar3;
  pthread_mutex_t *__mutex_00;
  void *__dest;
  long *__s2;
  ulong uVar4;
  long *__s1;
  long *plVar5;
  ulong uVar6;
  void *pvStack_78;
  ulong local_70;
  pthread_mutex_t *local_68;
  
  __mutex = DAT_00d646f0;
  if (DAT_00d646f0 == (pthread_mutex_t *)0x0) {
    return (pthread_mutex_t *)0x0;
  }
  pvStack_78 = param_1;
  local_70 = param_2;
  pthread_mutex_lock(DAT_00d646f0);
  plVar5 = *(long **)((long)__mutex + 0x30);
joined_r0x00666134:
  if (plVar5 != (long *)0x0) {
    do {
      cVar2 = *(char *)((long)plVar5 + 0x37);
      uVar4 = (ulong)cVar2;
      __s1 = plVar5 + 4;
      if ((long)uVar4 < 0) {
        __s2 = (long *)plVar5[4];
        uVar6 = plVar5[5];
      }
      else {
        __s2 = plVar5 + 4;
        uVar6 = uVar4;
      }
      sVar1 = uVar6;
      if (param_2 <= uVar6) {
        sVar1 = param_2;
      }
      iVar3 = memcmp(param_1,__s2,sVar1);
      if (iVar3 == 0) {
        if (uVar6 <= param_2) goto LAB_00666184;
      }
      else if (-1 < iVar3) goto LAB_00666184;
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) break;
    } while( true );
  }
  goto LAB_006661d8;
LAB_00666184:
  if (cVar2 < '\0') {
    __s1 = (long *)plVar5[4];
    uVar4 = plVar5[5];
  }
  sVar1 = param_2;
  if (uVar4 <= param_2) {
    sVar1 = uVar4;
  }
  iVar3 = memcmp(__s1,param_1,sVar1);
  if (iVar3 == 0) {
    if (uVar4 < param_2) goto LAB_006661b4;
  }
  else if (iVar3 < 0) {
LAB_006661b4:
    plVar5 = (long *)plVar5[1];
    goto joined_r0x00666134;
  }
  if (plVar5 != (long *)((long)__mutex + 0x30)) {
    __mutex_00 = (pthread_mutex_t *)plVar5[7];
    goto LAB_006662c0;
  }
LAB_006661d8:
  __mutex_00 = (pthread_mutex_t *)operator_new(0x70);
  local_68 = (pthread_mutex_t *)&DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_68);
  pthread_mutex_init(__mutex_00,(pthread_mutexattr_t *)&local_68);
  iVar3 = pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_68);
  __mutex_00[1].__data.__lock = param_3;
  *(undefined4 *)((long)__mutex_00 + 0x2c) = param_4;
  if (0x7ffffffffffffff6 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec(iVar3);
  }
  if (param_2 < 0x17) {
    __dest = (void *)((long)__mutex_00 + 0x30);
    *(char *)((long)__mutex_00 + 0x47) = (char)param_2;
  }
  else {
    uVar4 = (param_2 & 0x7ffffffffffffff8) + 8;
    uVar6 = 0x19;
    if (uVar4 != 0x18) {
      uVar6 = uVar4;
    }
    __dest = operator_new(uVar6);
    *(void **)((long)__mutex_00 + 0x30) = __dest;
    *(ulong *)((long)__mutex_00 + 0x38) = param_2;
    *(ulong *)((long)__mutex_00 + 0x40) = uVar6 | 0x8000000000000000;
  }
  if ((void *)((long)__dest + param_2) < __dest) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
  if ((__dest <= param_1) && (param_1 < (void *)((long)__dest + param_2))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
  memmove(__dest,param_1,param_2);
  *(undefined1 *)((long)__dest + param_2) = 0;
  *(int *)((long)__mutex_00 + 0x48) = param_3;
  *(undefined4 *)((long)__mutex_00 + 0x4c) = param_4;
  *(undefined8 *)((long)__mutex_00 + 0x68) = 0;
  *(undefined8 *)((long)__mutex_00 + 0x60) = 0;
  *(long *)(__mutex_00 + 2) = (long)param_5;
  *(undefined8 **)((long)__mutex_00 + 0x58) = (undefined8 *)((long)__mutex_00 + 0x60);
  local_68 = __mutex_00;
  FUN_00666638(__mutex + 1,&pvStack_78,&local_68);
LAB_006662c0:
  pthread_mutex_unlock(__mutex);
  return __mutex_00;
}


// ===== 0066631c  FUN_0066631c =====

pthread_mutex_t * FUN_0066631c(void *param_1,ulong param_2,int param_3)

{
  size_t sVar1;
  char cVar2;
  pthread_mutex_t *__mutex;
  int iVar3;
  pthread_mutex_t *__mutex_00;
  void *__dest;
  long *__s2;
  long *__s1;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  void *local_70;
  ulong uStack_68;
  pthread_mutex_t *local_48;
  
  __mutex = DAT_00d646f0;
  if (DAT_00d646f0 == (pthread_mutex_t *)0x0) {
    return (pthread_mutex_t *)0x0;
  }
  local_70 = param_1;
  uStack_68 = param_2;
  pthread_mutex_lock(DAT_00d646f0);
  plVar4 = *(long **)((long)__mutex + 0x30);
joined_r0x00666370:
  if (plVar4 != (long *)0x0) {
    do {
      cVar2 = *(char *)((long)plVar4 + 0x37);
      uVar5 = (ulong)cVar2;
      __s1 = plVar4 + 4;
      if ((long)uVar5 < 0) {
        __s2 = (long *)plVar4[4];
        uVar6 = plVar4[5];
      }
      else {
        __s2 = plVar4 + 4;
        uVar6 = uVar5;
      }
      sVar1 = uVar6;
      if (param_2 <= uVar6) {
        sVar1 = param_2;
      }
      iVar3 = memcmp(param_1,__s2,sVar1);
      if (iVar3 == 0) {
        if (uVar6 <= param_2) goto LAB_006663c0;
      }
      else if (-1 < iVar3) goto LAB_006663c0;
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) break;
    } while( true );
  }
  goto LAB_00666414;
LAB_006663c0:
  if (cVar2 < '\0') {
    __s1 = (long *)plVar4[4];
    uVar5 = plVar4[5];
  }
  sVar1 = param_2;
  if (uVar5 <= param_2) {
    sVar1 = uVar5;
  }
  iVar3 = memcmp(__s1,param_1,sVar1);
  if (iVar3 == 0) {
    if (uVar5 < param_2) goto LAB_006663f0;
  }
  else if (iVar3 < 0) {
LAB_006663f0:
    plVar4 = (long *)plVar4[1];
    goto joined_r0x00666370;
  }
  if (plVar4 != (long *)((long)__mutex + 0x30)) {
    __mutex_00 = (pthread_mutex_t *)plVar4[7];
    goto LAB_00666504;
  }
LAB_00666414:
  __mutex_00 = (pthread_mutex_t *)operator_new(0x70);
  local_48 = (pthread_mutex_t *)&DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_48);
  pthread_mutex_init(__mutex_00,(pthread_mutexattr_t *)&local_48);
  iVar3 = pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_48);
  __mutex_00[1].__data.__lock = 1;
  *(int *)((long)__mutex_00 + 0x2c) = param_3;
  if (0x7ffffffffffffff6 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec(iVar3);
  }
  if (param_2 < 0x17) {
    __dest = (void *)((long)__mutex_00 + 0x30);
    *(char *)((long)__mutex_00 + 0x47) = (char)param_2;
  }
  else {
    uVar5 = (param_2 & 0x7ffffffffffffff8) + 8;
    uVar6 = 0x19;
    if (uVar5 != 0x18) {
      uVar6 = uVar5;
    }
    __dest = operator_new(uVar6);
    *(void **)((long)__mutex_00 + 0x30) = __dest;
    *(ulong *)((long)__mutex_00 + 0x38) = param_2;
    *(ulong *)((long)__mutex_00 + 0x40) = uVar6 | 0x8000000000000000;
  }
  if ((void *)((long)__dest + param_2) < __dest) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
  if ((__dest <= param_1) && (param_1 < (void *)((long)__dest + param_2))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
  memmove(__dest,param_1,param_2);
  *(undefined1 *)((long)__dest + param_2) = 0;
  *(undefined4 *)((long)__mutex_00 + 0x48) = 1;
  *(int *)((long)__mutex_00 + 0x4c) = param_3;
  *(undefined8 *)((long)__mutex_00 + 0x68) = 0;
  *(undefined8 *)((long)__mutex_00 + 0x60) = 0;
  *(long *)(__mutex_00 + 2) = (long)(param_3 + 1);
  *(undefined8 **)((long)__mutex_00 + 0x58) = (undefined8 *)((long)__mutex_00 + 0x60);
  local_48 = __mutex_00;
  FUN_00666638(__mutex + 1,&local_70,&local_48);
LAB_00666504:
  pthread_mutex_unlock(__mutex);
  return __mutex_00;
}


// ===== 00666560  thunk_FUN_0066631c =====

void thunk_FUN_0066631c(void)

{
  FUN_0066631c();
  return;
}


// ===== 00666568  FUN_00666568 =====

int FUN_00666568(pthread_mutex_t *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  int local_30;
  undefined1 uStack_29;
  undefined1 *local_28;
  
  iVar1 = param_1[1].__data.__lock + -1;
  iVar2 = *(int *)((long)param_1 + 0x2c);
  if (param_2 <= *(int *)((long)param_1 + 0x2c)) {
    iVar2 = param_2;
  }
  if (iVar2 <= iVar1) {
    iVar2 = iVar1;
  }
  local_30 = iVar2;
  pthread_mutex_lock(param_1);
  if (*(long *)((long)param_1 + 0x68) == 300) {
    for (plVar4 = *(long **)((long)param_1 + 0x60); plVar4 != (long *)0x0;
        plVar4 = (long *)plVar4[1]) {
      while (iVar2 < *(int *)((long)plVar4 + 0x1c)) {
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) goto LAB_0066661c;
      }
      if (iVar2 == *(int *)((long)plVar4 + 0x1c)) {
        if (plVar4 != (long *)((long)param_1 + 0x60)) goto LAB_006665e8;
        break;
      }
    }
  }
  else {
LAB_006665e8:
    local_28 = (undefined1 *)&local_30;
    lVar3 = FUN_0066693c(0,(long)param_1 + 0x58,(long)param_1 + 0x58,&DAT_001f94c3,&local_28,
                         &uStack_29);
    *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) + 1;
  }
LAB_0066661c:
  iVar2 = pthread_mutex_unlock(param_1);
  return iVar2;
}


// ===== 00666638  FUN_00666638 =====

void FUN_00666638(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  size_t sVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  
  puVar4 = (undefined8 *)operator_new(0x40);
  if (puVar4 != (undefined8 *)0x0) {
    puVar9 = puVar4 + 4;
    *puVar4 = 0;
    if (puVar9 != (undefined8 *)0x0) {
      uVar10 = param_2[1];
      if (0x7ffffffffffffff6 < uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_005d45ec();
      }
      param_2 = (undefined8 *)*param_2;
      if (uVar10 < 0x17) {
        *(char *)((long)puVar4 + 0x37) = (char)uVar10;
        puVar5 = puVar9;
      }
      else {
        uVar12 = (uVar10 & 0x7ffffffffffffff8) + 8;
        uVar13 = 0x19;
        if (uVar12 != 0x18) {
          uVar13 = uVar12;
        }
        puVar5 = (undefined8 *)operator_new(uVar13);
        puVar4[4] = puVar5;
        puVar4[5] = uVar10;
        puVar4[6] = uVar13 | 0x8000000000000000;
      }
      if ((undefined8 *)((long)puVar5 + uVar10) < puVar5) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                  );
      }
      if ((puVar5 <= param_2) && (param_2 < (undefined8 *)((long)puVar5 + uVar10))) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                  );
      }
      memmove(puVar5,param_2,uVar10);
      uVar8 = *param_3;
      *(undefined1 *)((long)puVar5 + uVar10) = 0;
      plVar6 = param_1 + 1;
      plVar7 = (long *)*plVar6;
      puVar4[7] = uVar8;
      plVar11 = plVar6;
      if (plVar7 != (long *)0x0) {
        puVar5 = (undefined8 *)puVar4[4];
        uVar10 = puVar4[5];
        if (-1 < (char)*(byte *)((long)puVar4 + 0x37)) {
          puVar5 = puVar9;
          uVar10 = (ulong)*(byte *)((long)puVar4 + 0x37);
        }
        do {
          while( true ) {
            plVar11 = plVar7;
            cVar2 = *(char *)((long)plVar11 + 0x37);
            uVar12 = (ulong)cVar2;
            plVar6 = plVar11 + 4;
            if ((long)uVar12 < 0) {
              plVar7 = (long *)plVar11[4];
              uVar13 = plVar11[5];
            }
            else {
              plVar7 = plVar11 + 4;
              uVar13 = uVar12;
            }
            sVar1 = uVar13;
            if (uVar10 <= uVar13) {
              sVar1 = uVar10;
            }
            iVar3 = memcmp(puVar5,plVar7,sVar1);
            if (iVar3 != 0) break;
            if (uVar10 < uVar13) goto LAB_00666738;
LAB_00666788:
            if (cVar2 < '\0') {
              plVar6 = (long *)plVar11[4];
              uVar12 = plVar11[5];
            }
            sVar1 = uVar10;
            if (uVar12 <= uVar10) {
              sVar1 = uVar12;
            }
            iVar3 = memcmp(plVar6,puVar5,sVar1);
            if (iVar3 == 0) {
              if (uVar10 <= uVar12) goto LAB_00666824;
            }
            else if (-1 < iVar3) {
LAB_00666824:
              FUN_00666894(puVar9);
              operator_delete(puVar4);
              return;
            }
            plVar7 = (long *)plVar11[1];
            if ((long *)plVar11[1] == (long *)0x0) {
              plVar6 = plVar11 + 1;
              goto LAB_006667cc;
            }
          }
          if (-1 < iVar3) goto LAB_00666788;
LAB_00666738:
          plVar6 = plVar11;
          plVar7 = (long *)*plVar11;
        } while ((long *)*plVar11 != (long *)0x0);
      }
LAB_006667cc:
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = plVar11;
      *plVar6 = (long)puVar4;
      if (*(long *)*param_1 != 0) {
        *param_1 = *(long *)*param_1;
        puVar4 = (undefined8 *)*plVar6;
      }
      FUN_005d5b94(param_1[1],puVar4);
      param_1[2] = param_1[2] + 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00666894  FUN_00666894 =====

void FUN_00666894(undefined8 *param_1)

{
  pthread_mutex_t *__mutex;
  long local_28;
  
  if (param_1 != (undefined8 *)0x0) {
    __mutex = (pthread_mutex_t *)param_1[3];
    param_1[3] = 0;
    if (__mutex != (pthread_mutex_t *)0x0) {
      local_28 = (long)__mutex + 0x58;
      FUN_005fa2f8(&local_28,*(undefined8 *)((long)__mutex + 0x60));
      if (*(char *)((long)__mutex + 0x47) < '\0') {
        operator_delete(*(void **)((long)__mutex + 0x30));
      }
      pthread_mutex_destroy(__mutex);
      operator_delete(__mutex);
    }
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      operator_delete((void *)*param_1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0066693c  FUN_0066693c =====

undefined1  [16]
FUN_0066693c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
        if ((long *)*plVar3 == (long *)0x0) goto LAB_006669a4;
      }
      if (iVar1 == *(int *)((long)plVar3 + 0x1c)) {
        uVar5 = 0;
        goto LAB_00666a04;
      }
      plVar2 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar7 = plVar3 + 1;
  }
LAB_006669a4:
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
LAB_00666a04:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = plVar3;
  return auVar8;
}


// ===== 00666a34  FUN_00666a34 =====

void FUN_00666a34(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[0x10] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x1c] = 0;
  param_1[0x20] = 0;
  param_1[0x24] = 0;
  param_1[0x28] = 0;
  param_1[0x2c] = 0;
  param_1[0x30] = 0;
  param_1[0x34] = 0;
  return;
}


// ===== 00666a74  FUN_00666a74 =====

void FUN_00666a74(void)

{
  return;
}


// ===== 00666a7c  FUN_00666a7c =====

void FUN_00666a7c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = param_2[3];
  uVar5 = param_2[2];
  uVar2 = param_2[5];
  uVar1 = param_2[4];
  uVar4 = param_2[1];
  uVar3 = *param_2;
  *(undefined8 *)((long)param_1 + 0x2d) = *(undefined8 *)((long)param_2 + 0x2d);
  param_1[3] = uVar6;
  param_1[2] = uVar5;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  param_1[1] = uVar4;
  *param_1 = uVar3;
  return;
}


// ===== 00666a9c  FUN_00666a9c =====

void FUN_00666a9c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0x100;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  return;
}


// ===== 00666ac0  FUN_00666ac0 =====

void FUN_00666ac0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_2[1];
  uVar2 = *param_2;
  uVar1 = param_2[2];
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[1] = uVar3;
  *param_1 = uVar2;
  param_1[2] = uVar1;
  param_1[3] = 0;
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  return;
}


// ===== 00666afc  FUN_00666afc =====

void FUN_00666afc(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = *(void **)(param_1 + 0x18);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  pvVar2 = *(void **)(param_1 + 0x20);
  uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2) * 0x1555555555555555) >> 3;
  uVar4 = (long)pvVar2 * -0x1555555555555555 - 8U >> 3;
  if (uVar4 <= uVar3) {
    uVar3 = uVar4;
  }
  if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 7U) == 0)) {
    uVar3 = uVar3 & 0x1ffffffffffffffe;
    pvVar2 = (void *)((long)pvVar2 + uVar3 * -0x18);
    do {
      uVar3 = uVar3 - 2;
    } while (uVar3 != 0);
  }
  do {
    if (pvVar2 == pvVar1) {
      *(void **)(param_1 + 0x20) = pvVar1;
      operator_delete(pvVar1);
      return;
    }
    pvVar2 = (void *)((long)pvVar2 + -0x18);
  } while (pvVar2 != (void *)0x0);
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00666bb4  FUN_00666bb4 =====

undefined8 * FUN_00666bb4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  if (param_1 != param_2) {
    FUN_0066710c(param_1 + 3,param_2[3],param_2[4],
                 ((long)(param_2[4] - param_2[3]) >> 3) * -0x5555555555555555);
  }
  return param_1;
}


// ===== 00666c18  FUN_00666c18 =====

undefined8 * FUN_00666c18(undefined8 *param_1,undefined8 *param_2)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = param_2[1];
  uVar5 = *param_2;
  pvVar1 = (void *)param_1[3];
  param_1[2] = param_2[2];
  param_1[1] = uVar6;
  *param_1 = uVar5;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[4];
    uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2) * 0x1555555555555555) >> 3;
    uVar4 = (long)pvVar2 * -0x1555555555555555 - 8U >> 3;
    if (uVar4 <= uVar3) {
      uVar3 = uVar4;
    }
    if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 7U) == 0)) {
      uVar3 = uVar3 & 0x1ffffffffffffffe;
      pvVar2 = (void *)((long)pvVar2 + uVar3 * -0x18);
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
    while (pvVar2 != pvVar1) {
      pvVar2 = (void *)((long)pvVar2 + -0x18);
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
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  return param_1;
}


// ===== 00666d28  FUN_00666d28 =====

void FUN_00666d28(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00666d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}


// ===== 00666d38  FUN_00666d38 =====

void FUN_00666d38(long *param_1,long *param_2,undefined4 param_3,undefined8 param_4,ulong param_5,
                 long *param_6)

{
  int iVar1;
  long lVar2;
  long lVar3;
  char **local_78;
  char *local_70;
  char *pcStack_68;
  
  if (((DAT_00d64700 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d64700), iVar1 != 0)) {
    DAT_00d646f8 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00d64700);
  }
  local_78 = (char **)0x0;
  pcStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00d646f8 != '\0') {
    local_78 = &local_70;
    FUN_0066d348(0x42,DAT_00d646f8,"AudioEncoder::Encode",0,0,0,0,0,0);
    local_70 = DAT_00d646f8;
    pcStack_68 = "AudioEncoder::Encode";
  }
  lVar2 = (**(code **)(*param_2 + 0x18))(param_2);
  iVar1 = (**(code **)(*param_2 + 0x10))(param_2);
  if (param_5 == (ulong)(lVar2 * iVar1) / 100) {
    lVar2 = *param_2;
    lVar3 = *param_6;
    param_1[1] = (long)&DAT_aaaaaaaaaaaaaaaa;
    *param_1 = (long)&DAT_aaaaaaaaaaaaaaaa;
    param_1[3] = (long)&DAT_aaaaaaaaaaaaaaaa;
    param_1[2] = (long)&DAT_aaaaaaaaaaaaaaaa;
    param_1[5] = (long)&DAT_aaaaaaaaaaaaaaaa;
    param_1[4] = (long)&DAT_aaaaaaaaaaaaaaaa;
    (**(code **)(lVar2 + 0xe8))(param_1,param_2,param_3,param_4,param_5,param_6);
    if (*param_6 - lVar3 == *param_1) {
      if ((local_78 != (char **)0x0) && (**local_78 != '\0')) {
        FUN_0066d348(0x45,*local_78,local_78[1],0,0,0,0,0,0);
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../api/audio_codecs/audio_encoder.cc",0x38,
                 "encoded->size() - old_size == info.encoded_bytes",&DAT_001fb920);
  }
  lVar2 = (**(code **)(*param_2 + 0x18))(param_2);
  iVar1 = (**(code **)(*param_2 + 0x10))(param_2);
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../api/audio_codecs/audio_encoder.cc",0x34,
               "audio.size() == static_cast<size_t>(NumChannels() * SampleRateHz() / 100)",
               &DAT_001fb920,param_5,(ulong)(lVar2 * iVar1) / 100);
}


// ===== 00666f7c  FUN_00666f7c =====

uint FUN_00666f7c(undefined8 param_1,uint param_2)

{
  return (param_2 ^ 0xffffffff) & 1;
}


// ===== 00666f8c  FUN_00666f8c =====

uint FUN_00666f8c(undefined8 param_1,uint param_2)

{
  return (param_2 ^ 0xffffffff) & 1;
}


// ===== 00666f9c  FUN_00666f9c =====

undefined8 FUN_00666f9c(void)

{
  return 0;
}


// ===== 00666fa8  FUN_00666fa8 =====

undefined8 FUN_00666fa8(void)

{
  return 0;
}


// ===== 00666fb4  FUN_00666fb4 =====

void FUN_00666fb4(void)

{
  return;
}


// ===== 00666fbc  FUN_00666fbc =====

void FUN_00666fbc(void)

{
  return;
}


// ===== 00666fc4  FUN_00666fc4 =====

undefined1  [16] FUN_00666fc4(void)

{
  return ZEXT816(0);
}


// ===== 00666fd4  FUN_00666fd4 =====

undefined8 FUN_00666fd4(void)

{
  return 0;
}


// ===== 00666fe0  FUN_00666fe0 =====

void FUN_00666fe0(void)

{
  return;
}


// ===== 00666fe8  FUN_00666fe8 =====

void FUN_00666fe8(void)

{
  return;
}


// ===== 00666ff0  FUN_00666ff0 =====

void FUN_00666ff0(void)

{
  return;
}


// ===== 00666ff8  FUN_00666ff8 =====

void FUN_00666ff8(long *param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0066700c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa8))(param_1,param_2,0,0);
  return;
}


// ===== 00667010  FUN_00667010 =====

void FUN_00667010(void)

{
  return;
}


// ===== 00667018  FUN_00667018 =====

void FUN_00667018(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_2[3];
  uVar2 = uVar1 / 1000;
  if (499 < uVar1 % 1000) {
    uVar2 = uVar2 + 1;
  }
  if ((uVar1 & 0x8000000000000000) != 0) {
    uVar2 = -(-uVar1 / 1000) - (ulong)(500 < -uVar1 % 1000);
  }
                    /* WARNING: Could not recover jumptable at 0x00667088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa8))(param_1,*param_2,uVar2,1);
  return;
}


// ===== 0066708c  FUN_0066708c =====

void FUN_0066708c(void)

{
  return;
}


// ===== 00667094  FUN_00667094 =====

void FUN_00667094(void)

{
  return;
}


// ===== 0066709c  FUN_0066709c =====

void FUN_0066709c(void)

{
  return;
}


// ===== 006670a4  FUN_006670a4 =====

void FUN_006670a4(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[0x10] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x1c] = 0;
  param_1[0x20] = 0;
  param_1[0x24] = 0;
  param_1[0x28] = 0;
  param_1[0x2c] = 0;
  param_1[0x30] = 0;
  param_1[0x34] = 0;
  return;
}


// ===== 006670e4  FUN_006670e4 =====

void FUN_006670e4(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x10] = 0;
  return;
}


// ===== 006670f4  FUN_006670f4 =====

void FUN_006670f4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 0066710c  FUN_0066710c =====

void FUN_0066710c(undefined8 *param_1,void *param_2,long param_3,ulong param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  size_t __n;
  long *plVar5;
  long *plVar6;
  long lVar7;
  void *pvVar8;
  ulong uVar9;
  ulong uVar10;
  size_t __n_00;
  void *pvVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  
  lVar7 = param_1[2];
  pvVar11 = (void *)*param_1;
  if ((ulong)((lVar7 - (long)pvVar11 >> 3) * -0x5555555555555555) < param_4) {
    if (pvVar11 == (void *)0x0) {
LAB_006672e8:
      if (param_4 < 0xaaaaaaaaaaaaaab) {
        uVar9 = (lVar7 >> 3) * 0x5555555555555556;
        if (uVar9 < param_4 || uVar9 - param_4 == 0) {
          uVar9 = param_4;
        }
        if (0x555555555555554 < (ulong)((lVar7 >> 3) * -0x5555555555555555)) {
          uVar9 = 0xaaaaaaaaaaaaaaa;
        }
        if (uVar9 < 0xaaaaaaaaaaaaaab) {
          pvVar11 = operator_new(uVar9 * 0x18);
          *param_1 = pvVar11;
          param_1[1] = pvVar11;
          param_1[2] = (void *)((long)pvVar11 + uVar9 * 0x18);
          memcpy(pvVar11,param_2,param_3 - (long)param_2);
          lVar7 = (long)pvVar11 + (param_3 - (long)param_2);
          goto LAB_00667360;
        }
      }
      auVar14 = FUN_006670f4();
      puVar4 = auVar14._8_8_;
      puVar2 = auVar14._0_8_;
      if (*(char *)((long)puVar4 + 0x17) < '\0') {
        FUN_005478d8(puVar2,*puVar4,puVar4[1]);
      }
      else {
        uVar13 = puVar4[1];
        uVar12 = *puVar4;
        puVar2[2] = puVar4[2];
        puVar2[1] = uVar13;
        *puVar2 = uVar12;
      }
      uVar13 = puVar4[4];
      uVar12 = puVar4[3];
      plVar6 = puVar2 + 6;
      *plVar6 = 0;
      puVar3 = puVar2 + 5;
      *puVar3 = plVar6;
      puVar2[4] = uVar13;
      puVar2[3] = uVar12;
      puVar2[7] = 0;
      if (puVar4[7] != 0) {
        lVar7 = FUN_0060b868(puVar3,puVar4[6],puVar3);
        *plVar6 = lVar7;
        *(long **)(lVar7 + 0x10) = plVar6;
        plVar6 = (long *)*plVar6;
        do {
          plVar5 = plVar6;
          plVar6 = (long *)*plVar5;
        } while (plVar6 != (long *)0x0);
        puVar2[5] = plVar5;
        puVar2[7] = puVar4[7];
      }
      return;
    }
    pvVar8 = (void *)param_1[1];
    uVar9 = (ulong)(((long)pvVar11 - (long)pvVar8) * 0x1555555555555555) >> 3;
    uVar10 = (long)pvVar8 * -0x1555555555555555 - 8U >> 3;
    if (uVar10 <= uVar9) {
      uVar9 = uVar10;
    }
    if ((1 < uVar9) && ((((int)pvVar11 - (int)pvVar8 | -(int)pvVar8) & 7U) == 0)) {
      uVar9 = uVar9 & 0x1ffffffffffffffe;
      pvVar8 = (void *)((long)pvVar8 + uVar9 * -0x18);
      do {
        uVar9 = uVar9 - 2;
      } while (uVar9 != 0);
    }
    do {
      if (pvVar8 == pvVar11) {
        param_1[1] = pvVar11;
        operator_delete(pvVar11);
        lVar7 = 0;
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        goto LAB_006672e8;
      }
      pvVar8 = (void *)((long)pvVar8 + -0x18);
    } while (pvVar8 != (void *)0x0);
  }
  else {
    __n = param_1[1] - (long)pvVar11;
    if ((ulong)(((long)__n >> 3) * -0x5555555555555555) < param_4) {
      memmove(pvVar11,param_2,__n);
      pvVar11 = (void *)param_1[1];
      __n_00 = param_3 - (long)((long)param_2 + __n);
      memmove(pvVar11,(void *)((long)param_2 + __n),__n_00);
      lVar7 = (long)pvVar11 + __n_00;
LAB_00667360:
      param_1[1] = lVar7;
      return;
    }
    memmove(pvVar11,param_2,param_3 - (long)param_2);
    lVar7 = param_1[1];
    uVar9 = (ulong)(((long)pvVar11 + (param_3 - (lVar7 + (long)param_2))) * 0x1555555555555555) >> 3
    ;
    uVar10 = lVar7 * -0x1555555555555555 - 8U >> 3;
    if (uVar10 <= uVar9) {
      uVar9 = uVar10;
    }
    lVar1 = (long)pvVar11 + (param_3 - (long)param_2);
    if ((1 < uVar9) &&
       (((((int)pvVar11 + (int)param_3) - ((int)lVar7 + (int)param_2) | -(int)lVar7) & 7U) == 0)) {
      uVar9 = uVar9 & 0x1ffffffffffffffe;
      lVar7 = lVar7 + uVar9 * -0x18;
      do {
        uVar9 = uVar9 - 2;
      } while (uVar9 != 0);
    }
    do {
      if (lVar7 == lVar1) {
        param_1[1] = lVar1;
        return;
      }
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != 0);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00667388  FUN_00667388 =====

void FUN_00667388(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
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
  uVar6 = param_2[4];
  uVar5 = param_2[3];
  plVar4 = param_1 + 6;
  *plVar4 = 0;
  puVar1 = param_1 + 5;
  *puVar1 = plVar4;
  param_1[4] = uVar6;
  param_1[3] = uVar5;
  param_1[7] = 0;
  if (param_2[7] != 0) {
    lVar2 = FUN_0060b868(puVar1,param_2[6],puVar1);
    *plVar4 = lVar2;
    *(long **)(lVar2 + 0x10) = plVar4;
    plVar4 = (long *)*plVar4;
    do {
      plVar3 = plVar4;
      plVar4 = (long *)*plVar3;
    } while (plVar4 != (long *)0x0);
    param_1[5] = plVar3;
    param_1[7] = param_2[7];
  }
  return;
}


// ===== 00667434  FUN_00667434 =====

void FUN_00667434(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = param_2[1];
  uVar5 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar6;
  *param_1 = uVar5;
  uVar5 = param_2[3];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  param_1[4] = param_2[4];
  param_1[3] = uVar5;
  param_1[5] = param_2[5];
  plVar1 = param_2 + 6;
  lVar3 = *plVar1;
  plVar2 = param_1 + 6;
  *plVar2 = lVar3;
  lVar4 = param_2[7];
  param_1[7] = lVar4;
  if (lVar4 != 0) {
    *(long **)(lVar3 + 0x10) = plVar2;
    param_2[5] = plVar1;
    *plVar1 = 0;
    param_2[7] = 0;
    return;
  }
  param_1[5] = plVar2;
  return;
}


// ===== 00667494  FUN_00667494 =====

void FUN_00667494(undefined8 *param_1,undefined8 *param_2,ulong param_3,undefined4 param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *__dest;
  
  if (0x7ffffffffffffff6 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (param_3 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)param_3;
    __dest = param_1;
  }
  else {
    uVar1 = (param_3 & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    __dest = (undefined8 *)operator_new(uVar2);
    *param_1 = __dest;
    param_1[1] = param_3;
    param_1[2] = uVar2 | 0x8000000000000000;
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
    param_1[6] = 0;
    *(undefined4 *)(param_1 + 3) = param_4;
    param_1[7] = 0;
    param_1[4] = param_5;
    param_1[5] = param_1 + 6;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
            );
}


// ===== 0066759c  FUN_0066759c =====

void FUN_0066759c(undefined8 *param_1,undefined8 *param_2,ulong param_3,undefined4 param_4,
                 undefined8 param_5,long param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *__dest;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  if (0x7ffffffffffffff6 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (param_3 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)param_3;
    __dest = param_1;
  }
  else {
    uVar1 = (param_3 & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    __dest = (undefined8 *)operator_new(uVar2);
    *param_1 = __dest;
    param_1[1] = param_3;
    param_1[2] = uVar2 | 0x8000000000000000;
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
    plVar5 = param_1 + 6;
    *plVar5 = 0;
    *(undefined4 *)(param_1 + 3) = param_4;
    param_1[4] = param_5;
    param_1[5] = plVar5;
    param_1[7] = 0;
    if (*(long *)(param_6 + 0x10) != 0) {
      lVar3 = FUN_0060b868(param_1 + 5,*(undefined8 *)(param_6 + 8),param_1 + 5);
      *plVar5 = lVar3;
      *(long **)(lVar3 + 0x10) = plVar5;
      plVar5 = (long *)*plVar5;
      do {
        plVar4 = plVar5;
        plVar5 = (long *)*plVar4;
      } while (plVar5 != (long *)0x0);
      param_1[5] = plVar4;
      param_1[7] = *(undefined8 *)(param_6 + 0x10);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
            );
}


// ===== 006676e8  FUN_006676e8 =====

void FUN_006676e8(undefined8 *param_1,undefined8 *param_2,ulong param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 *param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *__dest;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  if (0x7ffffffffffffff6 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (param_3 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)param_3;
    __dest = param_1;
  }
  else {
    uVar1 = (param_3 & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    __dest = (undefined8 *)operator_new(uVar2);
    *param_1 = __dest;
    param_1[1] = param_3;
    param_1[2] = uVar2 | 0x8000000000000000;
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
    *(undefined4 *)(param_1 + 3) = param_4;
    param_1[4] = param_5;
    param_1[5] = *param_6;
    plVar3 = param_6 + 1;
    lVar5 = *plVar3;
    plVar4 = param_1 + 6;
    *plVar4 = lVar5;
    lVar6 = param_6[2];
    param_1[7] = lVar6;
    if (lVar6 == 0) {
      param_1[5] = plVar4;
    }
    else {
      *(long **)(lVar5 + 0x10) = plVar4;
      *param_6 = plVar3;
      *plVar3 = 0;
      param_6[2] = 0;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
            );
}


// ===== 00667824  FUN_00667824 =====

bool FUN_00667824(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = (long)*(char *)((long)param_1 + 0x17);
  puVar3 = param_1;
  if (lVar5 < 0) {
    lVar5 = param_1[1];
    puVar3 = (undefined8 *)*param_1;
  }
  uVar4 = param_2[1];
  puVar1 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar4 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar1 = param_2;
  }
  uVar4 = FUN_0061ff84(puVar3,lVar5,puVar1,uVar4);
  if (((uVar4 & 1) == 0) || (*(int *)(param_1 + 3) != *(int *)(param_2 + 3))) {
    bVar2 = false;
  }
  else {
    bVar2 = param_1[4] == param_2[4];
  }
  return bVar2;
}


// ===== 006678ac  FUN_006678ac =====

void FUN_006678ac(undefined8 *param_1)

{
  undefined8 *local_8;
  
  local_8 = param_1 + 5;
  FUN_0060b2cc(&local_8,param_1[6]);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    operator_delete((void *)*param_1);
  }
  return;
}


// ===== 006678fc  FUN_006678fc =====

undefined8 * FUN_006678fc(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (param_1 == param_2) {
    uVar7 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = uVar7;
    return param_1;
  }
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
    uVar8 = param_2[1];
    uVar7 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar8;
    *param_1 = uVar7;
  }
  uVar7 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar7;
  if (param_1[7] == 0) {
    lVar5 = FUN_0060b868(param_1 + 5,param_2[6],param_1 + 5);
    plVar6 = param_1 + 6;
    *plVar6 = lVar5;
    if (lVar5 == 0) goto LAB_006679e8;
    *(long **)(lVar5 + 0x10) = plVar6;
    plVar4 = (long *)*plVar6;
  }
  else {
    plVar4 = (long *)FUN_00667af8(param_1 + 5,param_1[6],param_2[6],0,param_1 + 5);
    param_1[6] = plVar4;
  }
  if (plVar4 == (long *)0x0) {
    plVar6 = param_1 + 6;
  }
  else {
    do {
      plVar6 = plVar4;
      plVar4 = (long *)*plVar6;
    } while ((long *)*plVar6 != (long *)0x0);
  }
LAB_006679e8:
  param_1[5] = plVar6;
  param_1[7] = param_2[7];
  return param_1;
}


// ===== 00667a08  FUN_00667a08 =====

undefined8 FUN_00667a08(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)*param_1;
  uVar4 = param_1[1];
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    puVar1 = param_1;
    uVar4 = (ulong)*(byte *)((long)param_1 + 0x17);
  }
  uVar2 = param_2[1];
  puVar3 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar3 = param_2;
  }
  uVar4 = FUN_0061ff84(puVar1,uVar4,puVar3,uVar2);
  if (((((uVar4 & 1) != 0) && (*(int *)(param_1 + 3) == *(int *)(param_2 + 3))) &&
      (param_1[4] == param_2[4])) && (param_1[7] == param_2[7])) {
    uVar5 = FUN_00667cd4(param_1[5],param_1 + 6,param_2[5]);
    return uVar5;
  }
  return 0;
}


// ===== 00667ab8  FUN_00667ab8 =====

void FUN_00667ab8(undefined4 *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  param_1[4] = param_4;
  param_1[5] = param_4;
  param_1[6] = param_4;
  *(undefined2 *)(param_1 + 7) = 1;
  return;
}


// ===== 00667ad8  FUN_00667ad8 =====

void FUN_00667ad8(undefined4 *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  param_1[4] = param_4;
  param_1[5] = param_5;
  param_1[6] = param_6;
  *(undefined2 *)(param_1 + 7) = 1;
  return;
}


// ===== 00667af8  FUN_00667af8 =====

long * FUN_00667af8(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,
                   undefined8 param_5)

{
  long lVar1;
  undefined8 local_38;
  
  if (param_3 == (long *)0x0) {
    local_38 = param_1;
    FUN_0060b2cc(&local_38,param_2);
    param_2 = (long *)0x0;
  }
  else {
    FUN_00667bec(param_2 + 4,param_3 + 4);
    *(char *)(param_2 + 3) = (char)param_3[3];
    lVar1 = *param_3;
    if (*param_2 == 0) {
      if (lVar1 != 0) {
        lVar1 = FUN_0060b868(param_5,lVar1,param_5);
        *param_2 = lVar1;
        *(long **)(lVar1 + 0x10) = param_2;
      }
    }
    else {
      lVar1 = FUN_00667af8(param_1,*param_2,lVar1,0,param_5);
      *param_2 = lVar1;
    }
    lVar1 = param_3[1];
    if (param_2[1] == 0) {
      if (lVar1 != 0) {
        lVar1 = FUN_0060b868(param_5,lVar1,param_5);
        param_2[1] = lVar1;
        *(long **)(lVar1 + 0x10) = param_2;
      }
    }
    else {
      lVar1 = FUN_00667af8(param_1,param_2[1],lVar1,0,param_5);
      param_2[1] = lVar1;
    }
  }
  return param_2;
}


// ===== 00667bec  FUN_00667bec =====

void FUN_00667bec(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_1 != param_2) {
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
    bVar2 = *(byte *)((long)param_2 + 0x2f);
    if (*(char *)((long)param_1 + 0x2f) < '\0') {
      uVar1 = param_2[4];
      puVar3 = (undefined8 *)param_2[3];
      if (-1 < (char)bVar2) {
        uVar1 = (ulong)bVar2;
        puVar3 = param_2 + 3;
      }
      FUN_00547f08(param_1 + 3,puVar3,uVar1);
      return;
    }
    if ((char)bVar2 < '\0') {
      FUN_00547fc0(param_1 + 3,param_2[3],param_2[4]);
      return;
    }
    uVar5 = param_2[4];
    uVar4 = param_2[3];
    param_1[5] = param_2[5];
    param_1[4] = uVar5;
    param_1[3] = uVar4;
  }
  return;
}


// ===== 00667cd4  FUN_00667cd4 =====

undefined8 FUN_00667cd4(long *param_1,long *param_2,long *param_3)

{
  size_t sVar1;
  size_t sVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  
  if (param_1 == param_2) {
    return 1;
  }
  while( true ) {
    bVar4 = *(byte *)((long)param_1 + 0x37);
    bVar5 = *(byte *)((long)param_3 + 0x37);
    sVar1 = param_1[5];
    if (-1 < (char)bVar4) {
      sVar1 = (ulong)bVar4;
    }
    sVar2 = param_3[5];
    if (-1 < (char)bVar5) {
      sVar2 = (ulong)bVar5;
    }
    if (sVar1 != sVar2) {
      return 0;
    }
    plVar3 = (long *)param_1[4];
    if (-1 < (char)bVar4) {
      plVar3 = param_1 + 4;
    }
    plVar8 = (long *)param_3[4];
    if (-1 < (char)bVar5) {
      plVar8 = param_3 + 4;
    }
    iVar7 = memcmp(plVar3,plVar8,sVar1);
    if (iVar7 != 0) {
      return 0;
    }
    bVar4 = *(byte *)((long)param_1 + 0x4f);
    bVar5 = *(byte *)((long)param_3 + 0x4f);
    sVar1 = param_1[8];
    if (-1 < (char)bVar4) {
      sVar1 = (ulong)bVar4;
    }
    sVar2 = param_3[8];
    if (-1 < (char)bVar5) {
      sVar2 = (ulong)bVar5;
    }
    if (sVar1 != sVar2) break;
    plVar3 = (long *)param_1[7];
    if (-1 < (char)bVar4) {
      plVar3 = param_1 + 7;
    }
    plVar8 = (long *)param_3[7];
    if (-1 < (char)bVar5) {
      plVar8 = param_3 + 7;
    }
    iVar7 = memcmp(plVar3,plVar8,sVar1);
    if (iVar7 != 0) {
      return 0;
    }
    plVar3 = (long *)param_1[1];
    plVar8 = param_1;
    if ((long *)param_1[1] == (long *)0x0) {
      do {
        param_1 = (long *)plVar8[2];
        bVar6 = plVar8 != (long *)*param_1;
        plVar8 = param_1;
      } while (bVar6);
    }
    else {
      do {
        param_1 = plVar3;
        plVar3 = (long *)*param_1;
      } while ((long *)*param_1 != (long *)0x0);
    }
    plVar3 = (long *)param_3[1];
    plVar8 = param_3;
    if ((long *)param_3[1] == (long *)0x0) {
      do {
        param_3 = (long *)plVar8[2];
        bVar6 = plVar8 != (long *)*param_3;
        plVar8 = param_3;
      } while (bVar6);
    }
    else {
      do {
        param_3 = plVar3;
        plVar3 = (long *)*param_3;
      } while ((long *)*param_3 != (long *)0x0);
    }
    if (param_1 == param_2) {
      return 1;
    }
  }
  return 0;
}


// ===== 00667e40  FUN_00667e40 =====

void FUN_00667e40(undefined8 param_1,uint param_2)

{
  if (param_2 < 3) {
    FUN_005d3510(param_1,(&PTR_s_audio_00d28140)[param_2]);
    return;
  }
  FUN_005d3510(param_1,&DAT_001b3348);
  return;
}


// ===== 00667e70  FUN_00667e70 =====

uint FUN_00667e70(undefined8 *param_1,undefined8 param_2)

{
  undefined *__s;
  bool bVar1;
  int iVar2;
  size_t __n;
  size_t sVar3;
  long lVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  char *__s_00;
  long *plVar9;
  size_t sVar10;
  
  plVar6 = (long *)*param_1;
  if (plVar6 == param_1 + 1) {
    uVar5 = 0;
  }
  else {
    __n = strlen(PTR_s_ptime_00d52120);
    __s = PTR_s_maxptime_00d52128;
    __s_00 = "";
    uVar5 = 1;
    do {
      sVar10 = (size_t)*(char *)((long)plVar6 + 0x37);
      plVar9 = plVar6 + 4;
      if ((long)sVar10 < 0) {
        plVar7 = (long *)plVar6[4];
        sVar10 = plVar6[5];
        if (sVar10 == __n) goto LAB_00667efc;
LAB_00667f14:
        sVar3 = strlen(__s);
        if ((sVar10 != sVar3) || (iVar2 = memcmp(plVar7,__s,sVar10), iVar2 != 0)) {
          if (__s_00 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/string_view:278: libc++ Hardening assertion __s != nullptr failed: null pointer passed to non-null argument of char_traits<...>::length\n"
                      );
          }
          sVar10 = strlen(__s_00);
          FUN_00547cac(param_2,__s_00,sVar10);
          lVar4 = (long)*(char *)((long)plVar6 + 0x37);
          if (lVar4 < 0) {
            plVar9 = (long *)plVar6[4];
            lVar4 = plVar6[5];
            lVar8 = (long)*(char *)((long)plVar6 + 0x4f);
            if (lVar8 < 0) goto LAB_00667fe4;
LAB_00667f64:
            plVar7 = plVar6 + 7;
          }
          else {
            lVar8 = (long)*(char *)((long)plVar6 + 0x4f);
            if (-1 < lVar8) goto LAB_00667f64;
LAB_00667fe4:
            plVar7 = (long *)plVar6[7];
            lVar8 = plVar6[8];
          }
          if (lVar4 != 0) {
            FUN_00547cac(param_2,plVar9);
            FUN_00547cac(param_2,&DAT_001ff1a8,1);
          }
          FUN_00547cac(param_2,plVar7,lVar8);
          uVar5 = 0;
          __s_00 = ";";
        }
      }
      else {
        plVar7 = plVar6 + 4;
        if (sVar10 != __n) goto LAB_00667f14;
LAB_00667efc:
        iVar2 = memcmp(plVar7,PTR_s_ptime_00d52120,__n);
        if (iVar2 != 0) goto LAB_00667f14;
      }
      plVar9 = (long *)plVar6[1];
      plVar7 = plVar6;
      if ((long *)plVar6[1] == (long *)0x0) {
        do {
          plVar6 = (long *)plVar7[2];
          bVar1 = plVar7 != (long *)*plVar6;
          plVar7 = plVar6;
        } while (bVar1);
      }
      else {
        do {
          plVar6 = plVar9;
          plVar9 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
    } while (plVar6 != param_1 + 1);
    uVar5 = uVar5 ^ 1;
  }
  return uVar5;
}


// ===== 00668034  FUN_00668034 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00668034(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte *******param_4)

{
  byte *pbVar1;
  ulong __n;
  byte ******ppppppbVar2;
  byte ******__n_00;
  byte ******ppppppbVar3;
  undefined *puVar4;
  long *plVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 *******pppppppuVar11;
  ulong uVar12;
  byte *pbVar13;
  long *plVar14;
  byte *******pppppppbVar15;
  byte *******pppppppbVar16;
  byte *******local_d0;
  ulong uStack_c8;
  ulong local_c0;
  undefined8 *******local_b8;
  byte ******local_b0;
  ulong local_a8;
  long *local_a0;
  long *local_98;
  byte *******local_88;
  ulong uStack_80;
  undefined8 local_78;
  undefined1 uStack_69;
  undefined8 *******local_68;
  
  FUN_006252b4(&local_a0,param_2,param_3,0x3b);
  plVar5 = local_98;
  puVar4 = PTR_DAT_00d52040;
  if (local_a0 != local_98) {
    plVar14 = local_a0;
    do {
      pppppppbVar15 = (byte *******)*plVar14;
      uVar7 = plVar14[1];
      local_b8 = (undefined8 *******)0x0;
      local_b0 = (byte ******)0x0;
      local_a8 = 0;
      local_d0 = (byte *******)0x0;
      uStack_c8 = 0;
      local_c0 = 0;
      uVar12 = uVar7;
      pppppppbVar16 = pppppppbVar15;
      if (uVar7 != 0) {
        do {
          if (((byte)puVar4[*(byte *)pppppppbVar16] >> 3 & 1) == 0) goto LAB_006680e0;
          uVar12 = uVar12 - 1;
          pppppppbVar16 = (byte *******)((long)pppppppbVar16 + 1);
        } while (uVar12 != 0);
        pppppppbVar16 = (byte *******)((long)pppppppbVar15 + uVar7);
      }
LAB_006680e0:
      uVar12 = (long)pppppppbVar16 - (long)pppppppbVar15;
      if (uVar7 < uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_005f55a8("string_view::substr");
      }
      pbVar13 = (byte *)((long)pppppppbVar15 + (uVar7 - (long)pppppppbVar16));
      pbVar9 = (byte *)((long)pppppppbVar15 + uVar7 + 1);
      do {
        pbVar10 = (byte *)((long)pppppppbVar15 + uVar12);
        if (pbVar13 == (byte *)0x0) break;
        pbVar1 = pbVar9 + -2;
        pbVar10 = pbVar9 + -1;
        pbVar13 = pbVar13 + -1;
        pbVar9 = pbVar10;
      } while (((byte)puVar4[*pbVar1] >> 3 & 1) != 0);
      __n = uVar7 - uVar12;
      if ((ulong)((long)pbVar10 - (long)pppppppbVar16) <= uVar7 - uVar12) {
        __n = (long)pbVar10 - (long)pppppppbVar16;
      }
      uVar7 = FUN_00625060(pppppppbVar16,__n,0x3d,&local_b8,&local_d0);
      if ((uVar7 & 1) == 0) {
        if ((long)local_a8 < 0) {
          local_b0 = (byte ******)0x0;
          pppppppuVar11 = local_b8;
        }
        else {
          local_a8 = local_a8 & 0xffffffffffffff;
          pppppppuVar11 = &local_b8;
        }
        *(undefined1 *)pppppppuVar11 = 0;
        if (0x7ffffffffffffff6 < __n) {
                    /* WARNING: Subroutine does not return */
          FUN_005d45ec();
        }
        if (__n < 0x17) {
          local_78 = CONCAT17((char)__n,(undefined7)local_78);
          pppppppbVar15 = (byte *******)&local_88;
        }
        else {
          uVar7 = (__n & 0x7ffffffffffffff8) + 8;
          uVar12 = 0x19;
          if (uVar7 != 0x18) {
            uVar12 = uVar7;
          }
          pppppppbVar15 = (byte *******)operator_new(uVar12);
          local_78 = uVar12 | 0x8000000000000000;
          local_88 = pppppppbVar15;
          uStack_80 = __n;
        }
        if ((byte *******)((long)pppppppbVar15 + __n) < pppppppbVar15) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                    );
        }
        if ((pppppppbVar15 <= pppppppbVar16) &&
           (pppppppbVar16 < (byte *******)((long)pppppppbVar15 + __n))) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                    );
        }
        memmove(pppppppbVar15,pppppppbVar16,__n);
        *(byte *)((long)pppppppbVar15 + __n) = 0;
        if ((long)local_c0 < 0) {
          operator_delete(local_d0);
        }
        uStack_c8 = uStack_80;
        local_d0 = local_88;
        local_c0 = local_78;
      }
      pppppppbVar15 = (byte *******)param_4[1];
      if (pppppppbVar15 != (byte *******)0x0) {
        pppppppuVar11 = local_b8;
        ppppppbVar2 = local_b0;
        if (-1 < (long)local_a8) {
          pppppppuVar11 = &local_b8;
          ppppppbVar2 = (byte ******)(local_a8 >> 0x38);
        }
        do {
          while( true ) {
            pppppppbVar16 = (byte *******)pppppppbVar15[4];
            ppppppbVar3 = pppppppbVar15[5];
            if (-1 < (char)*(byte *)((long)pppppppbVar15 + 0x37)) {
              pppppppbVar16 = pppppppbVar15 + 4;
              ppppppbVar3 = (byte ******)(ulong)*(byte *)((long)pppppppbVar15 + 0x37);
            }
            __n_00 = ppppppbVar3;
            if (ppppppbVar2 <= ppppppbVar3) {
              __n_00 = ppppppbVar2;
            }
            iVar6 = memcmp(pppppppuVar11,pppppppbVar16,(size_t)__n_00);
            if (iVar6 != 0) break;
            if (ppppppbVar2 == ppppppbVar3) {
              if ((pppppppbVar15 != param_4 + 1) && (uVar7 = FUN_00417e08(), (uVar7 & 1) == 0)) {
                FUN_00623bb0(&DAT_001f4eff,"../../api/rtp_parameters.cc",0x3a1,
                             "Overwriting duplicate fmtp parameter with key \"",&local_b8,
                             &DAT_001e2244);
              }
              goto LAB_006682d0;
            }
            if (ppppppbVar3 <= ppppppbVar2) goto LAB_00668234;
LAB_00668284:
            pppppppbVar15 = (byte *******)*pppppppbVar15;
            if (pppppppbVar15 == (byte *******)0x0) goto LAB_006682d0;
          }
          if (iVar6 < 0) goto LAB_00668284;
LAB_00668234:
          pppppppbVar15 = (byte *******)pppppppbVar15[1];
        } while (pppppppbVar15 != (byte *******)0x0);
      }
LAB_006682d0:
      local_88 = param_4;
      local_68 = &local_b8;
      lVar8 = FUN_0066d1b4(&local_88,&local_b8,&DAT_001f94c3,&local_68,&uStack_69);
      pppppppbVar15 = (byte *******)(lVar8 + 0x38);
      if ((byte ********)pppppppbVar15 != &local_d0) {
        if (*(char *)(lVar8 + 0x4f) < '\0') {
          uVar7 = uStack_c8;
          pppppppbVar16 = local_d0;
          if (-1 < (long)local_c0) {
            uVar7 = local_c0 >> 0x38;
            pppppppbVar16 = (byte *******)&local_d0;
          }
          FUN_00547f08(pppppppbVar15,pppppppbVar16,uVar7);
        }
        else if ((long)local_c0 < 0) {
          FUN_00547fc0(pppppppbVar15,local_d0,uStack_c8);
        }
        else {
          *(ulong *)(lVar8 + 0x48) = local_c0;
          *(ulong *)(lVar8 + 0x40) = uStack_c8;
          *pppppppbVar15 = (byte ******)local_d0;
        }
      }
      if ((long)local_c0 < 0) {
        operator_delete(local_d0);
      }
      if ((long)local_a8 < 0) {
        operator_delete(local_b8);
      }
      plVar14 = plVar14 + 2;
    } while (plVar14 != plVar5);
  }
  if (local_a0 != (long *)0x0) {
    uVar12 = (ulong)((long)local_98 + (-0x10 - ((long)local_98 << 0x3c))) >> 4;
    uVar7 = (ulong)(((long)local_a0 - (long)local_98 << 0x3c) - ((long)local_a0 - (long)local_98))
            >> 4;
    if (uVar12 <= uVar7) {
      uVar7 = uVar12;
    }
    if ((1 < uVar7) && ((((int)local_a0 - (int)local_98 | -(int)local_98) & 0xfU) == 0)) {
      uVar7 = uVar7 & 0xffffffffffffffe;
      local_98 = local_98 + uVar7 * -2;
      do {
        uVar7 = uVar7 - 2;
      } while (uVar7 != 0);
    }
    while (local_98 != local_a0) {
      local_98 = local_98 + -2;
      if (local_98 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    operator_delete(local_a0);
  }
  FUN_005ecd48(param_1);
  return;
}


// ===== 00668494  FUN_00668494 =====

void FUN_00668494(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}


// ===== 006684a8  FUN_006684a8 =====

void FUN_006684a8(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}


// ===== 006684bc  FUN_006684bc =====

void FUN_006684bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  return;
}


// ===== 006684d4  FUN_006684d4 =====

void FUN_006684d4(void)

{
  return;
}


// ===== 006684dc  FUN_006684dc =====

void FUN_006684dc(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  void *pvVar7;
  long *plVar8;
  long *plVar9;
  void *pvVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 *puStack_48;
  
  *param_1 = &PTR_FUN_00d28168;
  if (*(char *)(param_2 + 0x1f) < '\0') {
    FUN_005478d8(param_1 + 1,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  }
  else {
    uVar15 = *(undefined8 *)(param_2 + 0x10);
    uVar11 = *(undefined8 *)(param_2 + 8);
    param_1[3] = *(undefined8 *)(param_2 + 0x18);
    param_1[2] = uVar15;
    param_1[1] = uVar11;
  }
  uVar2 = *(undefined1 *)(param_2 + 0x30);
  uVar15 = *(undefined8 *)(param_2 + 0x28);
  uVar11 = *(undefined8 *)(param_2 + 0x20);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 6) = uVar2;
  param_1[5] = uVar15;
  param_1[4] = uVar11;
  puVar6 = *(undefined8 **)(param_2 + 0x38);
  puVar1 = *(undefined8 **)(param_2 + 0x40);
  uVar12 = (long)puVar1 - (long)puVar6;
  if (uVar12 != 0) {
    if (0x1555555555555555 < (ulong)(((long)uVar12 >> 2) * -0x5555555555555555)) {
      puVar6 = (undefined8 *)FUN_0066a5a8();
      *puVar6 = &PTR_FUN_00d28168;
      puStack_48 = puVar6 + 10;
      FUN_0060b2cc(&puStack_48,puVar6[0xb]);
      pvVar7 = (void *)puVar6[7];
      if (pvVar7 != (void *)0x0) {
        pvVar10 = (void *)puVar6[8];
        uVar12 = (ulong)(((long)pvVar7 - (long)pvVar10) * 0x1555555555555555) >> 2;
        uVar13 = (long)pvVar10 * -0x1555555555555555 - 4U >> 2;
        if (uVar13 <= uVar12) {
          uVar12 = uVar13;
        }
        if ((1 < uVar12) && ((((int)pvVar7 - (int)pvVar10 | -(int)pvVar10) & 3U) == 0)) {
          uVar12 = uVar12 & 0x3ffffffffffffffe;
          pvVar10 = (void *)((long)pvVar10 + uVar12 * -0xc);
          do {
            uVar12 = uVar12 - 2;
          } while (uVar12 != 0);
        }
        while (pvVar10 != pvVar7) {
          pvVar10 = (void *)((long)pvVar10 + -0xc);
          if (pvVar10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
        }
        puVar6[8] = pvVar7;
        operator_delete(pvVar7);
      }
      if (*(char *)((long)puVar6 + 0x1f) < '\0') {
        operator_delete((void *)puVar6[1]);
      }
      return;
    }
    puVar3 = (undefined8 *)operator_new(uVar12);
    param_1[7] = puVar3;
    param_1[8] = puVar3;
    param_1[9] = (long)puVar3 + uVar12;
    do {
      if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar14 = (undefined8 *)((long)puVar6 + 0xc);
      uVar11 = *puVar6;
      *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar6 + 1);
      puVar4 = (undefined8 *)((long)puVar3 + 0xc);
      *puVar3 = uVar11;
      puVar3 = puVar4;
      puVar6 = puVar14;
    } while (puVar14 != puVar1);
    param_1[8] = puVar4;
  }
  plVar9 = param_1 + 0xb;
  *plVar9 = 0;
  puVar6 = param_1 + 10;
  *puVar6 = plVar9;
  param_1[0xc] = 0;
  if (*(long *)(param_2 + 0x60) != 0) {
    lVar5 = FUN_0060b868(puVar6,*(undefined8 *)(param_2 + 0x58),puVar6);
    *plVar9 = lVar5;
    *(long **)(lVar5 + 0x10) = plVar9;
    plVar9 = (long *)*plVar9;
    do {
      plVar8 = plVar9;
      plVar9 = (long *)*plVar8;
    } while (plVar9 != (long *)0x0);
    param_1[10] = plVar8;
    param_1[0xc] = *(undefined8 *)(param_2 + 0x60);
  }
  return;
}


// ===== 00668620  FUN_00668620 =====

void FUN_00668620(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *local_8;
  
  *param_1 = &PTR_FUN_00d28168;
  local_8 = param_1 + 10;
  FUN_0060b2cc(&local_8,param_1[0xb]);
  pvVar1 = (void *)param_1[7];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[8];
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
    while (pvVar2 != pvVar1) {
      pvVar2 = (void *)((long)pvVar2 + -0xc);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    param_1[8] = pvVar1;
    operator_delete(pvVar1);
  }
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    operator_delete((void *)param_1[1]);
  }
  return;
}


// ===== 0066871c  FUN_0066871c =====

void FUN_0066871c(void *param_1)

{
  FUN_00668620();
  operator_delete(param_1);
  return;
}


// ===== 0066874c  FUN_0066874c =====

bool FUN_0066874c(long param_1)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  void *pvVar4;
  undefined8 *__s1;
  size_t sVar5;
  
  __s1 = (undefined8 *)(param_1 + 8);
  sVar3 = strlen("rtx");
  cVar1 = *(char *)(param_1 + 0x1f);
  sVar5 = (size_t)cVar1;
  if ((long)sVar5 < 0) {
    if (sVar3 == *(size_t *)(param_1 + 0x10)) {
      if (sVar3 == 0xffffffffffffffff) goto LAB_006688c4;
      pvVar4 = (void *)*__s1;
      goto LAB_006687a8;
    }
  }
  else {
    pvVar4 = (void *)(param_1 + 8);
    if (sVar3 == sVar5) {
LAB_006687a8:
      iVar2 = memcmp(pvVar4,&DAT_001ff1e0,sVar3);
      if (iVar2 == 0) {
        return true;
      }
    }
  }
  sVar3 = strlen("red");
  if (cVar1 < '\0') {
    if (sVar3 == *(size_t *)(param_1 + 0x10)) {
      if (sVar3 == 0xffffffffffffffff) goto LAB_006688c4;
      pvVar4 = (void *)*__s1;
      goto LAB_006687f4;
    }
  }
  else {
    pvVar4 = (void *)(param_1 + 8);
    if (sVar3 == sVar5) {
LAB_006687f4:
      iVar2 = memcmp(pvVar4,&DAT_001ff1bc,sVar3);
      if (iVar2 == 0) {
        return true;
      }
    }
  }
  sVar3 = strlen("ulpfec");
  if (cVar1 < '\0') {
    if (sVar3 == *(size_t *)(param_1 + 0x10)) {
      if (sVar3 == 0xffffffffffffffff) goto LAB_006688c4;
      pvVar4 = (void *)*__s1;
      goto LAB_00668840;
    }
  }
  else {
    pvVar4 = (void *)(param_1 + 8);
    if (sVar3 == sVar5) {
LAB_00668840:
      iVar2 = memcmp(pvVar4,"ulpfec",sVar3);
      if (iVar2 == 0) {
        return true;
      }
    }
  }
  sVar3 = strlen("flexfec-03");
  if (cVar1 < '\0') {
    if (sVar3 == *(size_t *)(param_1 + 0x10)) {
      if (sVar3 == 0xffffffffffffffff) {
LAB_006688c4:
                    /* WARNING: Subroutine does not return */
        FUN_005f5590();
      }
      __s1 = (undefined8 *)*__s1;
      goto LAB_00668890;
    }
  }
  else if (sVar3 == sVar5) {
LAB_00668890:
    iVar2 = memcmp(__s1,PTR_s_flexfec_03_00d52140,sVar3);
    return iVar2 == 0;
  }
  return false;
}


// ===== 006688c8  FUN_006688c8 =====

bool FUN_006688c8(long param_1)

{
  int iVar1;
  ulong uVar2;
  size_t __n;
  undefined8 *__s1;
  
  uVar2 = FUN_0066874c();
  if ((uVar2 & 1) != 0) {
    return false;
  }
  __s1 = (undefined8 *)(param_1 + 8);
  __n = strlen(PTR_DAT_00d52148);
  if ((long)*(char *)(param_1 + 0x1f) < 0) {
    if (__n == *(size_t *)(param_1 + 0x10)) {
      if (__n == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_005f5590();
      }
      __s1 = (undefined8 *)*__s1;
      goto LAB_0066892c;
    }
  }
  else if (__n == (long)*(char *)(param_1 + 0x1f)) {
LAB_0066892c:
    iVar1 = memcmp(__s1,PTR_DAT_00d52148,__n);
    return iVar1 != 0;
  }
  return true;
}


// ===== 00668960  FUN_00668960 =====

void FUN_00668960(undefined8 *param_1)

{
  param_1[0xb] = 0;
  param_1[9] = 0;
  param_1[10] = param_1 + 0xb;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((long)param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((long)param_1 + 0x1d) = 0;
  *param_1 = &PTR_FUN_00d28188;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)((long)param_1 + 0x6c) = 0;
  param_1[0xe] = 0;
  return;
}


// ===== 006689a8  FUN_006689a8 =====

void FUN_006689a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d28188;
  if ((*(byte *)(param_1 + 0xe) & 1) != 0) {
    operator_delete((void *)param_1[0xf]);
  }
  FUN_00668620(param_1);
  return;
}


// ===== 006689ec  FUN_006689ec =====

void FUN_006689ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d28188;
  if ((*(byte *)(param_1 + 0xe) & 1) != 0) {
    operator_delete((void *)param_1[0xf]);
  }
  FUN_00668620(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00668a3c  FUN_00668a3c =====

void FUN_00668a3c(undefined8 *param_1,undefined8 *param_2,ulong param_3,undefined4 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *__dest;
  
  if (0x7ffffffffffffff6 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (param_3 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)param_3;
    __dest = param_1;
  }
  else {
    uVar1 = (param_3 & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    __dest = (undefined8 *)operator_new(uVar2);
    *param_1 = __dest;
    param_1[1] = param_3;
    param_1[2] = uVar2 | 0x8000000000000000;
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
    *(undefined4 *)(param_1 + 3) = param_4;
    *(undefined1 *)((long)param_1 + 0x1c) = 1;
    *(undefined1 *)(param_1 + 4) = 0;
    *(undefined4 *)((long)param_1 + 0x24) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
            );
}


// ===== 00668b3c  FUN_00668b3c =====

void FUN_00668b3c(undefined8 *param_1,undefined8 *param_2,ulong param_3,undefined4 param_4,
                 undefined4 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *__dest;
  
  if (0x7ffffffffffffff6 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (param_3 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)param_3;
    __dest = param_1;
  }
  else {
    uVar1 = (param_3 & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    __dest = (undefined8 *)operator_new(uVar2);
    *param_1 = __dest;
    param_1[1] = param_3;
    param_1[2] = uVar2 | 0x8000000000000000;
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
    *(undefined4 *)(param_1 + 3) = param_4;
    *(undefined1 *)((long)param_1 + 0x1c) = 1;
    *(undefined1 *)(param_1 + 4) = 0;
    *(undefined4 *)((long)param_1 + 0x24) = param_5;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
            );
}


// ===== 00668c48  FUN_00668c48 =====

void FUN_00668c48(undefined8 *param_1,undefined8 *param_2,ulong param_3,undefined4 param_4,
                 byte param_5,undefined4 param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *__dest;
  
  if (0x7ffffffffffffff6 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (param_3 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)param_3;
    __dest = param_1;
  }
  else {
    uVar1 = (param_3 & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    __dest = (undefined8 *)operator_new(uVar2);
    *param_1 = __dest;
    param_1[1] = param_3;
    param_1[2] = uVar2 | 0x8000000000000000;
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
    *(undefined4 *)(param_1 + 3) = param_4;
    *(undefined1 *)((long)param_1 + 0x1c) = 1;
    *(byte *)(param_1 + 4) = param_5 & 1;
    *(undefined4 *)((long)param_1 + 0x24) = param_6;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
            );
}


// ===== 00668d5c  FUN_00668d5c =====

void FUN_00668d5c(undefined8 *param_1)

{
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
  operator_delete((void *)*param_1);
  return;
}


// ===== 00668d80  FUN_00668d80 =====

void FUN_00668d80(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((long)param_1 + 0x15) = 0;
  param_1[2] = 0;
  return;
}


// ===== 00668d94  FUN_00668d94 =====

void FUN_00668d94(undefined8 *param_1,undefined8 *param_2,ulong param_3,undefined4 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *__dest;
  
  if (0x7ffffffffffffff6 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (param_3 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)param_3;
    __dest = param_1;
  }
  else {
    uVar1 = (param_3 & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    __dest = (undefined8 *)operator_new(uVar2);
    *param_1 = __dest;
    param_1[1] = param_3;
    param_1[2] = uVar2 | 0x8000000000000000;
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
    *(undefined4 *)(param_1 + 3) = param_4;
    *(undefined1 *)((long)param_1 + 0x1c) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
            );
}


// ===== 00668e88  FUN_00668e88 =====

void FUN_00668e88(undefined8 *param_1,undefined8 *param_2,ulong param_3,undefined4 param_4,
                 byte param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *__dest;
  
  if (0x7ffffffffffffff6 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (param_3 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)param_3;
    __dest = param_1;
  }
  else {
    uVar1 = (param_3 & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    __dest = (undefined8 *)operator_new(uVar2);
    *param_1 = __dest;
    param_1[1] = param_3;
    param_1[2] = uVar2 | 0x8000000000000000;
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
    *(undefined4 *)(param_1 + 3) = param_4;
    *(byte *)((long)param_1 + 0x1c) = param_5 & 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
            );
}


// ===== 00668f8c  FUN_00668f8c =====

void FUN_00668f8c(undefined8 *param_1)

{
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
  operator_delete((void *)*param_1);
  return;
}


// ===== 00668fb0  FUN_00668fb0 =====

void FUN_00668fb0(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x28) = 0x3ff0000000000000;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x30) = 1;
  param_1[0x34] = 0;
  param_1[0x38] = 0;
  param_1[0x3c] = 0;
  param_1[0x40] = 0;
  param_1[0x48] = 0;
  param_1[0x50] = 0;
  param_1[0x58] = 0;
  param_1[0x5c] = 0;
  param_1[0x60] = 0;
  param_1[0x68] = 0;
  param_1[0x70] = 0;
  param_1[0x88] = 0;
  param_1[0x90] = 0;
  param_1[0x98] = 0;
  param_1[0x9c] = 1;
  param_1[0xc0] = 0;
  param_1[0x128] = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined2 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  return;
}


// ===== 00669028  FUN_00669028 =====

void FUN_00669028(undefined8 *param_1,undefined8 *param_2)

{
  void *__src;
  undefined1 uVar1;
  undefined2 uVar2;
  ulong __n;
  void *__dest;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar4 = *param_2;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = uVar4;
  if (*(char *)(param_2 + 4) == '\x01') {
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    __src = (void *)param_2[1];
    __n = param_2[2] - (long)__src;
    if (__n != 0) {
      if ((long)__n < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005da79c();
      }
      __dest = operator_new(__n);
      param_1[1] = __dest;
      param_1[2] = __dest;
      param_1[3] = (long)__dest + __n;
      memcpy(__dest,__src,__n);
      param_1[2] = (long)__dest + __n;
    }
    *(undefined1 *)(param_1 + 4) = 1;
  }
  uVar1 = *(undefined1 *)(param_2 + 0xd);
  uVar5 = param_2[6];
  uVar4 = param_2[5];
  uVar7 = param_2[8];
  uVar6 = param_2[7];
  uVar9 = param_2[0xc];
  uVar8 = param_2[0xb];
  uVar11 = param_2[10];
  uVar10 = param_2[9];
  puVar3 = param_1 + 0xe;
  *(undefined1 *)puVar3 = 0;
  param_1[0xc] = uVar9;
  param_1[0xb] = uVar8;
  param_1[10] = uVar11;
  param_1[9] = uVar10;
  param_1[8] = uVar7;
  param_1[7] = uVar6;
  param_1[6] = uVar5;
  param_1[5] = uVar4;
  *(undefined1 *)(param_1 + 0xd) = uVar1;
  *(undefined1 *)(param_1 + 0x11) = 0;
  if (*(char *)(param_2 + 0x11) == '\x01') {
    if (*(char *)((long)param_2 + 0x87) < '\0') {
      FUN_005478d8(puVar3,param_2[0xe],param_2[0xf]);
    }
    else {
      uVar5 = param_2[0xf];
      uVar4 = param_2[0xe];
      param_1[0x10] = param_2[0x10];
      param_1[0xf] = uVar5;
      *puVar3 = uVar4;
    }
    *(undefined1 *)(param_1 + 0x11) = 1;
  }
  uVar4 = param_2[0x12];
  *(undefined8 *)((long)param_1 + 0x95) = *(undefined8 *)((long)param_2 + 0x95);
  param_1[0x12] = uVar4;
  if (*(char *)((long)param_2 + 0xb7) < '\0') {
    FUN_005478d8(param_1 + 0x14,param_2[0x14],param_2[0x15]);
  }
  else {
    uVar5 = param_2[0x15];
    uVar4 = param_2[0x14];
    param_1[0x16] = param_2[0x16];
    param_1[0x15] = uVar5;
    param_1[0x14] = uVar4;
  }
  uVar2 = *(undefined2 *)(param_2 + 0x17);
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined2 *)(param_1 + 0x17) = uVar2;
  *(undefined1 *)(param_1 + 0x25) = 0;
  if (*(char *)(param_2 + 0x25) == '\x01') {
    FUN_006684dc(param_1 + 0x18,param_2 + 0x18);
    *(undefined1 *)(param_1 + 0x25) = 1;
  }
  return;
}


// ===== 0066919c  FUN_0066919c =====

void FUN_0066919c(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (*(char *)(param_1 + 0x128) == '\x01') {
    FUN_00668620(param_1 + 0xc0);
  }
  if (*(char *)(param_1 + 0xb7) < '\0') {
    operator_delete(*(void **)(param_1 + 0xa0));
  }
  if ((*(char *)(param_1 + 0x88) == '\x01') && (*(char *)(param_1 + 0x87) < '\0')) {
    operator_delete(*(void **)(param_1 + 0x70));
  }
  if ((*(char *)(param_1 + 0x20) == '\x01') &&
     (pvVar1 = *(void **)(param_1 + 8), pvVar1 != (void *)0x0)) {
    pvVar2 = *(void **)(param_1 + 0x10);
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
        *(void **)(param_1 + 0x10) = pvVar1;
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
  return;
}


// ===== 006692b8  FUN_006692b8 =====

void FUN_006692b8(undefined8 *param_1)

{
  param_1[0xb] = 0;
  param_1[9] = 0;
  param_1[10] = param_1 + 0xb;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((long)param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((long)param_1 + 0x1d) = 0;
  *param_1 = &PTR_FUN_00d281a8;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  return;
}


// ===== 006692f8  FUN_006692f8 =====

void FUN_006692f8(undefined8 *param_1,long param_2)

{
  FUN_006684dc();
  *param_1 = &PTR_FUN_00d281a8;
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0x68);
  return;
}


// ===== 00669338  FUN_00669338 =====

void FUN_00669338(void *param_1)

{
  FUN_00668620();
  operator_delete(param_1);
  return;
}


// ===== 00669368  FUN_00669368 =====

void FUN_00669368(undefined8 *param_1)

{
  param_1[8] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  return;
}


// ===== 00669380  FUN_00669380 =====

void FUN_00669380(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  pvVar1 = (void *)param_1[6];
  if (pvVar1 == (void *)0x0) {
LAB_00669428:
    puVar7 = (undefined8 *)param_1[3];
    if (puVar7 != (undefined8 *)0x0) {
      puVar4 = (undefined8 *)param_1[4];
      puVar2 = puVar7;
      if (puVar7 != puVar4) {
        do {
          puVar2 = puVar4 + -5;
          if (puVar2 == (undefined8 *)0x0) goto LAB_00669404;
          if (*(char *)((long)puVar4 + -0x11) < '\0') {
            operator_delete((void *)*puVar2);
          }
          puVar4 = puVar2;
        } while (puVar2 != puVar7);
        puVar2 = (undefined8 *)param_1[3];
      }
      param_1[4] = puVar7;
      operator_delete(puVar2);
    }
    puVar7 = (undefined8 *)*param_1;
    if (puVar7 == (undefined8 *)0x0) {
      return;
    }
    puVar4 = (undefined8 *)param_1[1];
    puVar2 = puVar7;
    if (puVar7 != puVar4) {
      do {
        puVar4 = puVar4 + -0x14;
        if (puVar4 == (undefined8 *)0x0) goto LAB_00669404;
        (**(code **)*puVar4)(puVar4);
      } while (puVar4 != puVar7);
      puVar2 = (undefined8 *)*param_1;
    }
    param_1[1] = puVar7;
    operator_delete(puVar2);
    return;
  }
  pvVar3 = (void *)param_1[7];
  uVar6 = (ulong)((long)pvVar3 + (-4 - ((long)pvVar3 << 0x3e))) >> 2;
  uVar5 = (ulong)(((long)pvVar1 - (long)pvVar3 << 0x3e) - ((long)pvVar1 - (long)pvVar3)) >> 2;
  if (uVar6 <= uVar5) {
    uVar5 = uVar6;
  }
  if ((1 < uVar5) && ((((int)pvVar1 - (int)pvVar3 | -(int)pvVar3) & 3U) == 0)) {
    uVar5 = uVar5 & 0x3ffffffffffffffe;
    pvVar3 = (void *)((long)pvVar3 + uVar5 * -4);
    do {
      uVar5 = uVar5 - 2;
    } while (uVar5 != 0);
  }
  do {
    if (pvVar3 == pvVar1) {
      param_1[7] = pvVar1;
      operator_delete(pvVar1);
      goto LAB_00669428;
    }
    pvVar3 = (void *)((long)pvVar3 + -4);
  } while (pvVar3 != (void *)0x0);
LAB_00669404:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00669500  FUN_00669500 =====

void FUN_00669500(undefined8 *param_1)

{
  *(undefined1 *)((long)param_1 + 0x7c) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x13) = 0x100;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
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
  *(undefined8 *)((long)param_1 + 0x71) = 0;
  *(undefined8 *)((long)param_1 + 0x69) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)((long)param_1 + 0xa4) = 0;
  return;
}


// ===== 0066953c  FUN_0066953c =====

void FUN_0066953c(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  void *pvVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    FUN_005478d8(param_1,*param_2,param_2[1]);
    if (*(char *)((long)param_2 + 0x2f) < '\0') goto LAB_006695a8;
LAB_00669580:
    uVar8 = param_2[4];
    uVar7 = param_2[3];
    param_1[5] = param_2[5];
    param_1[4] = uVar8;
    param_1[3] = uVar7;
  }
  else {
    uVar8 = param_2[1];
    uVar7 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar8;
    *param_1 = uVar7;
    if (-1 < *(char *)((long)param_2 + 0x2f)) goto LAB_00669580;
LAB_006695a8:
    FUN_005478d8(param_1 + 3,param_2[3],param_2[4]);
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  lVar6 = param_2[6];
  lVar2 = param_2[7];
  uVar3 = lVar2 - lVar6;
  if (uVar3 != 0) {
    if (0x249249249249249 < (ulong)(((long)uVar3 >> 4) * 0x6db6db6db6db6db7)) {
      FUN_0066a5c0();
      goto LAB_00669748;
    }
    puVar4 = (undefined8 *)operator_new(uVar3);
    param_1[6] = puVar4;
    param_1[7] = puVar4;
    param_1[8] = (long)puVar4 + uVar3;
    do {
      if (puVar4 == (undefined8 *)0x0) goto LAB_00669730;
      FUN_006684dc(puVar4,lVar6);
      *puVar4 = &PTR_FUN_00d281a8;
      puVar1 = (undefined4 *)(lVar6 + 0x68);
      lVar6 = lVar6 + 0x70;
      *(undefined4 *)(puVar4 + 0xd) = *puVar1;
      puVar4 = puVar4 + 0xe;
    } while (lVar6 != lVar2);
    param_1[7] = puVar4;
  }
  FUN_0066974c(param_1 + 9,param_2 + 9);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  lVar6 = param_2[0xc];
  lVar2 = param_2[0xd];
  uVar3 = lVar2 - lVar6;
  if (uVar3 != 0) {
    if (0xd79435e50d7943 < (ulong)(((long)uVar3 >> 4) * -0x79435e50d79435e5)) {
LAB_00669748:
                    /* WARNING: Subroutine does not return */
      FUN_0066a5d8();
    }
    pvVar5 = operator_new(uVar3);
    param_1[0xc] = pvVar5;
    param_1[0xd] = pvVar5;
    param_1[0xe] = (long)pvVar5 + uVar3;
    do {
      if (pvVar5 == (void *)0x0) {
LAB_00669730:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      FUN_00669028(pvVar5,lVar6);
      lVar6 = lVar6 + 0x130;
      pvVar5 = (void *)((long)pvVar5 + 0x130);
    } while (lVar6 != lVar2);
    param_1[0xd] = pvVar5;
  }
  param_1[0xf] = param_2[0xf];
  if (*(char *)((long)param_2 + 0x97) < '\0') {
    FUN_005478d8(param_1 + 0x10,param_2[0x10],param_2[0x11]);
  }
  else {
    uVar8 = param_2[0x11];
    uVar7 = param_2[0x10];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar8;
    param_1[0x10] = uVar7;
  }
  *(undefined2 *)(param_1 + 0x13) = *(undefined2 *)(param_2 + 0x13);
  param_1[0x14] = param_2[0x14];
  return;
}


// ===== 0066974c  FUN_0066974c =====

void FUN_0066974c(undefined8 *param_1,long *param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar6 = (undefined8 *)*param_2;
  puVar2 = (undefined8 *)param_2[1];
  uVar4 = (long)puVar2 - (long)puVar6;
  if (uVar4 != 0) {
    if ((long)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005e28a4();
    }
    puVar5 = (undefined8 *)operator_new(uVar4);
    *param_1 = puVar5;
    param_1[1] = puVar5;
    param_1[2] = (long)puVar5 + uVar4;
    do {
      if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      if (*(char *)((long)puVar6 + 0x17) < '\0') {
        FUN_005478d8(puVar5,*puVar6,puVar6[1]);
      }
      else {
        uVar8 = puVar6[1];
        uVar7 = *puVar6;
        puVar5[2] = puVar6[2];
        puVar5[1] = uVar8;
        *puVar5 = uVar7;
      }
      puVar1 = (undefined1 *)((long)puVar6 + 0x1c);
      uVar3 = *(undefined4 *)(puVar6 + 3);
      puVar6 = puVar6 + 4;
      *(undefined1 *)((long)puVar5 + 0x1c) = *puVar1;
      *(undefined4 *)(puVar5 + 3) = uVar3;
      puVar5 = puVar5 + 4;
    } while (puVar6 != puVar2);
    param_1[1] = puVar5;
  }
  return;
}


// ===== 0066981c  FUN_0066981c =====

void FUN_0066981c(undefined8 *param_1)

{
  char cVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  void *pvVar7;
  
  if (*(char *)((long)param_1 + 0x97) < '\0') {
    operator_delete((void *)param_1[0x10]);
    pvVar7 = (void *)param_1[0xc];
  }
  else {
    pvVar7 = (void *)param_1[0xc];
  }
  if (pvVar7 == (void *)0x0) {
    puVar5 = (undefined8 *)param_1[9];
  }
  else {
    pvVar6 = (void *)param_1[0xd];
    pvVar2 = pvVar7;
    if (pvVar7 != pvVar6) {
      do {
        pvVar6 = (void *)((long)pvVar6 + -0x130);
        if (pvVar6 == (void *)0x0) goto LAB_006699c0;
        FUN_0066919c(pvVar6);
      } while (pvVar6 != pvVar7);
      pvVar2 = (void *)param_1[0xc];
    }
    param_1[0xd] = pvVar7;
    operator_delete(pvVar2);
    puVar5 = (undefined8 *)param_1[9];
  }
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)param_1[6];
  }
  else {
    puVar4 = (undefined8 *)param_1[10];
    puVar3 = puVar5;
    if (puVar5 != puVar4) {
      do {
        puVar3 = puVar4 + -4;
        if (puVar3 == (undefined8 *)0x0) goto LAB_006699c0;
        if (*(char *)((long)puVar4 + -9) < '\0') {
          operator_delete((void *)*puVar3);
        }
        puVar4 = puVar3;
      } while (puVar3 != puVar5);
      puVar3 = (undefined8 *)param_1[9];
    }
    param_1[10] = puVar5;
    operator_delete(puVar3);
    puVar5 = (undefined8 *)param_1[6];
  }
  if (puVar5 == (undefined8 *)0x0) {
    cVar1 = *(char *)((long)param_1 + 0x2f);
  }
  else {
    puVar4 = (undefined8 *)param_1[7];
    puVar3 = puVar5;
    if (puVar5 != puVar4) {
      do {
        puVar4 = puVar4 + -0xe;
        if (puVar4 == (undefined8 *)0x0) {
LAB_006699c0:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        (**(code **)*puVar4)(puVar4);
      } while (puVar4 != puVar5);
      puVar3 = (undefined8 *)param_1[6];
    }
    param_1[7] = puVar5;
    operator_delete(puVar3);
    cVar1 = *(char *)((long)param_1 + 0x2f);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[3]);
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


// ===== 006699d4  FUN_006699d4 =====

void FUN_006699d4(char *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  char *__src;
  undefined8 uVar4;
  size_t __n;
  char *__dest;
  undefined8 *puVar5;
  long lVar6;
  char *local_170;
  undefined1 *puStack_168;
  undefined1 *local_160;
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
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
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
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_160 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_168 = &DAT_aaaaaaaaaaaaaaaa;
  local_170 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00622830(&local_170,&local_150,0x100);
  uVar4 = FUN_006228b0(&local_170,"{uri: ",6);
  lVar6 = (long)*(char *)((long)param_2 + 0x17);
  puVar5 = param_2;
  if (lVar6 < 0) {
    lVar6 = param_2[1];
    puVar5 = (undefined8 *)*param_2;
  }
  FUN_006228b0(uVar4,puVar5,lVar6);
  uVar4 = FUN_006228b0(&local_170,", id: ",6);
  FUN_00622910(uVar4,*(undefined4 *)(param_2 + 3));
  if (*(char *)((long)param_2 + 0x1c) == '\x01') {
    FUN_006228b0(&local_170,", encrypt",9);
  }
  FUN_00622844(&local_170,0x7d);
  __src = local_170;
  if (local_170 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string:1063: libc++ Hardening assertion __s != nullptr failed: basic_string(const char*) detected nullptr\n"
              );
  }
  __n = strlen(local_170);
  if (0x7ffffffffffffff6 < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (__n < 0x17) {
    param_1[0x17] = (char)__n;
    __dest = param_1;
  }
  else {
    uVar1 = (__n & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    __dest = (char *)operator_new(uVar2);
    *(char **)param_1 = __dest;
    *(size_t *)(param_1 + 8) = __n;
    *(ulong *)(param_1 + 0x10) = uVar2 | 0x8000000000000000;
  }
  if (__dest + __n < __dest) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
  if ((__dest <= __src) && (__src < __dest + __n)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
  memmove(__dest,__src,__n);
  __dest[__n] = '\0';
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00669bb4  FUN_00669bb4 =====

bool FUN_00669bb4(long *param_1,size_t param_2)

{
  int iVar1;
  char *__s2;
  
  if ((long)param_2 < 0x3a) {
    if ((long)param_2 < 0x2d) {
      if (param_2 != 0x23) {
        if (param_2 != 0x2b) {
          return false;
        }
        return ((((*param_1 == 0x667465693a6e7275 && param_1[1] == 0x3a736d617261703a) &&
                 param_1[2] == 0x657264682d707472) && param_1[3] == 0x2d637273733a7478) &&
               param_1[4] == 0x656c2d6f69647561) &&
               *(long *)((long)param_1 + 0x23) == 0x6c6576656c2d6f69;
      }
      __s2 = "urn:ietf:params:rtp-hdrext:sdes:mid";
    }
    else if (param_2 == 0x2d) {
      __s2 = "urn:ietf:params:rtp-hdrext:sdes:rtp-stream-id";
    }
    else {
      if (param_2 != 0x36) {
        return false;
      }
      __s2 = "urn:ietf:params:rtp-hdrext:sdes:repaired-rtp-stream-id";
    }
  }
  else if ((long)param_2 < 0x41) {
    if (param_2 == 0x3a) {
      __s2 = "http://www.webrtc.org/experiments/rtp-hdrext/abs-send-time";
    }
    else {
      if (param_2 != 0x3d) {
        return false;
      }
      __s2 = "http://www.webrtc.org/experiments/rtp-hdrext/abs-capture-time";
    }
  }
  else if (param_2 == 0x41) {
    __s2 = "http://www.webrtc.org/experiments/rtp-hdrext/transport-wide-cc-02";
  }
  else {
    if (param_2 != 0x49) {
      return false;
    }
    __s2 = "http://www.ietf.org/id/draft-holmer-rmcat-transport-wide-cc-extensions-01";
  }
  iVar1 = memcmp(param_1,__s2,param_2);
  return iVar1 == 0;
}


// ===== 00669d18  FUN_00669d18 =====

bool FUN_00669d18(long *param_1,size_t param_2)

{
  bool bVar1;
  int iVar2;
  char *__s2;
  
  bVar1 = false;
  switch(param_2) {
  case 0x1a:
    __s2 = "urn:3gpp:video-orientation";
    break;
  default:
    goto code_r0x00669ef8;
  case 0x22:
    return (((*param_1 == 0x667465693a6e7275 && param_1[1] == 0x3a736d617261703a) &&
            param_1[2] == 0x657264682d707472) && param_1[3] == 0x7366666f743a7478) &&
           (short)param_1[4] == 0x7465;
  case 0x23:
    __s2 = "urn:ietf:params:rtp-hdrext:sdes:mid";
    break;
  case 0x2d:
    __s2 = "urn:ietf:params:rtp-hdrext:sdes:rtp-stream-id";
    break;
  case 0x36:
    __s2 = "urn:ietf:params:rtp-hdrext:sdes:repaired-rtp-stream-id";
    break;
  case 0x38:
    __s2 = "http://www.webrtc.org/experiments/rtp-hdrext/color-space";
    break;
  case 0x39:
    __s2 = "http://www.webrtc.org/experiments/rtp-hdrext/video-timing";
    break;
  case 0x3a:
    iVar2 = memcmp(param_1,"http://www.webrtc.org/experiments/rtp-hdrext/abs-send-time",param_2);
    if (iVar2 == 0) {
      return true;
    }
    __s2 = "http://www.webrtc.org/experiments/rtp-hdrext/playout-delay";
    break;
  case 0x3d:
    __s2 = "http://www.webrtc.org/experiments/rtp-hdrext/abs-capture-time";
    break;
  case 0x3f:
    __s2 = "http://www.webrtc.org/experiments/rtp-hdrext/video-content-type";
    break;
  case 0x41:
    iVar2 = memcmp(param_1,"http://www.webrtc.org/experiments/rtp-hdrext/transport-wide-cc-02",
                   param_2);
    if (iVar2 == 0) {
      return true;
    }
    __s2 = "http://www.webrtc.org/experiments/rtp-hdrext/corruption-detection";
    break;
  case 0x44:
    __s2 = "http://www.webrtc.org/experiments/rtp-hdrext/video-frame-tracking-id";
    break;
  case 0x46:
    __s2 = "http://www.webrtc.org/experiments/rtp-hdrext/video-layers-allocation00";
    break;
  case 0x48:
    __s2 = "http://www.webrtc.org/experiments/rtp-hdrext/generic-frame-descriptor-00";
    break;
  case 0x49:
    __s2 = "http://www.ietf.org/id/draft-holmer-rmcat-transport-wide-cc-extensions-01";
    break;
  case 0x57:
    __s2 = "https://aomediacodec.github.io/av1-rtp-spec/#dependency-descriptor-rtp-header-extension"
    ;
  }
  iVar2 = memcmp(param_1,__s2,param_2);
  bVar1 = iVar2 == 0;
code_r0x00669ef8:
  return bVar1;
}


// ===== 00669f10  FUN_00669f10 =====

bool FUN_00669f10(long *param_1,long param_2)

{
  if (param_2 == 0x22) {
    return (((*param_1 != 0x667465693a6e7275 || param_1[1] != 0x3a736d617261703a) ||
            param_1[2] != 0x657264682d707472) || param_1[3] != 0x7972636e653a7478) ||
           (short)param_1[4] != 0x7470;
  }
  return true;
}


// ===== 00669f90  FUN_00669f90 =====

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_00669f90(long *param_1,void *param_2,size_t param_3,int param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined8 *__s2;
  int iVar3;
  size_t sVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar6 == puVar1) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    puVar5 = (undefined8 *)0x0;
    do {
      sVar4 = (size_t)*(char *)((long)puVar6 + 0x17);
      __s2 = puVar6;
      if ((long)sVar4 < 0) {
        sVar4 = puVar6[1];
        __s2 = (undefined8 *)*puVar6;
      }
      if ((param_3 == sVar4) && (iVar3 = memcmp(param_2,__s2,param_3), iVar3 == 0)) {
        if (param_4 == 2) {
          bVar2 = *(byte *)((long)puVar6 + 0x1c);
        }
        else if (param_4 == 1) {
          bVar2 = *(byte *)((long)puVar6 + 0x1c);
          puVar5 = puVar6;
        }
        else {
          if (param_4 != 0) goto LAB_00669fd4;
          bVar2 = *(byte *)((long)puVar6 + 0x1c);
        }
        if ((bVar2 & 1) == 0) {
          return puVar6;
        }
      }
LAB_00669fd4:
      puVar6 = puVar6 + 4;
    } while (puVar6 != puVar1);
  }
  return puVar5;
}


// ===== 0066a064  FUN_0066a064 =====

undefined8 * FUN_0066a064(long *param_1,void *param_2,size_t param_3,byte param_4)

{
  undefined8 *puVar1;
  undefined8 *__s2;
  int iVar2;
  size_t sVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar4 != puVar1) {
    do {
      sVar3 = (size_t)*(char *)((long)puVar4 + 0x17);
      __s2 = puVar4;
      if ((long)sVar3 < 0) {
        sVar3 = puVar4[1];
        __s2 = (undefined8 *)*puVar4;
      }
      if (((param_3 == sVar3) && (iVar2 = memcmp(param_2,__s2,param_3), iVar2 == 0)) &&
         (*(byte *)((long)puVar4 + 0x1c) == (param_4 & 1))) {
        return puVar4;
      }
      puVar4 = puVar4 + 4;
    } while (puVar4 != puVar1);
  }
  return (undefined8 *)0x0;
}


// ===== 0066a108  FUN_0066a108 =====

void FUN_0066a108(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 *puVar3;
  int iVar4;
  size_t sVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  size_t sVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar7 = (undefined8 *)*param_2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_3 == 0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    puVar9 = (undefined8 *)param_2[1];
    if (puVar7 == puVar9) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      puVar6 = (undefined8 *)0x0;
      do {
        if (*(char *)((long)puVar7 + 0x1c) == '\x01') {
          cVar2 = *(char *)((long)puVar7 + 0x17);
          sVar10 = (size_t)cVar2;
          puVar8 = puVar7;
          if ((long)sVar10 < 0) {
            sVar10 = puVar7[1];
            puVar8 = (undefined8 *)*puVar7;
          }
          for (puVar11 = (undefined8 *)*param_1; puVar11 != puVar6; puVar11 = puVar11 + 4) {
            sVar5 = (size_t)*(char *)((long)puVar11 + 0x17);
            puVar3 = puVar11;
            if ((long)sVar5 < 0) {
              sVar5 = puVar11[1];
              puVar3 = (undefined8 *)*puVar11;
            }
            if ((sVar10 == sVar5) && (iVar4 = memcmp(puVar8,puVar3,sVar10), iVar4 == 0))
            goto LAB_0066a180;
          }
          if (puVar6 < (undefined8 *)param_1[2]) {
            if (puVar6 == (undefined8 *)0x0) goto LAB_0066a394;
            if (cVar2 < '\0') {
              FUN_005478d8(puVar6,*puVar7,puVar7[1]);
            }
            else {
              uVar13 = puVar7[1];
              uVar12 = *puVar7;
              puVar6[2] = puVar7[2];
              puVar6[1] = uVar13;
              *puVar6 = uVar12;
            }
            uVar1 = *(undefined4 *)(puVar7 + 3);
            *(undefined1 *)((long)puVar6 + 0x1c) = *(undefined1 *)((long)puVar7 + 0x1c);
            *(undefined4 *)(puVar6 + 3) = uVar1;
            puVar6 = puVar6 + 4;
          }
          else {
            puVar6 = (undefined8 *)FUN_0066a5f0(param_1,puVar7);
          }
          param_1[1] = puVar6;
        }
LAB_0066a180:
        puVar7 = puVar7 + 4;
      } while (puVar7 != puVar9);
    }
    if (param_3 == 2) goto LAB_0066a248;
    puVar7 = (undefined8 *)*param_2;
  }
  puVar9 = (undefined8 *)param_2[1];
  for (; puVar7 != puVar9; puVar7 = puVar7 + 4) {
    if ((*(byte *)((long)puVar7 + 0x1c) & 1) == 0) {
      cVar2 = *(char *)((long)puVar7 + 0x17);
      sVar10 = (size_t)cVar2;
      puVar8 = puVar7;
      if ((long)sVar10 < 0) {
        sVar10 = puVar7[1];
        puVar8 = (undefined8 *)*puVar7;
      }
      for (puVar11 = (undefined8 *)*param_1; puVar11 != puVar6; puVar11 = puVar11 + 4) {
        sVar5 = (size_t)*(char *)((long)puVar11 + 0x17);
        puVar3 = puVar11;
        if ((long)sVar5 < 0) {
          sVar5 = puVar11[1];
          puVar3 = (undefined8 *)*puVar11;
        }
        if ((sVar10 == sVar5) && (iVar4 = memcmp(puVar8,puVar3,sVar10), iVar4 == 0))
        goto LAB_0066a2e0;
      }
      if (puVar6 < (undefined8 *)param_1[2]) {
        if (puVar6 == (undefined8 *)0x0) {
LAB_0066a394:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        if (cVar2 < '\0') {
          FUN_005478d8(puVar6,*puVar7,puVar7[1]);
        }
        else {
          uVar13 = puVar7[1];
          uVar12 = *puVar7;
          puVar6[2] = puVar7[2];
          puVar6[1] = uVar13;
          *puVar6 = uVar12;
        }
        uVar1 = *(undefined4 *)(puVar7 + 3);
        *(undefined1 *)((long)puVar6 + 0x1c) = *(undefined1 *)((long)puVar7 + 0x1c);
        *(undefined4 *)(puVar6 + 3) = uVar1;
        puVar6 = puVar6 + 4;
      }
      else {
        puVar6 = (undefined8 *)FUN_0066a5f0(param_1,puVar7);
      }
      param_1[1] = puVar6;
    }
LAB_0066a2e0:
  }
LAB_0066a248:
  param_1 = (undefined8 *)*param_1;
  if (param_1 == puVar6) {
    return;
  }
  FUN_0066a7fc(param_1,puVar6,LZCOUNT((long)puVar6 - (long)param_1 >> 5) << 1 ^ 0x7e,1);
  return;
}


// ===== 0066a3a8  FUN_0066a3a8 =====

undefined4 FUN_0066a3a8(long param_1)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined **local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  ulong local_40;
  undefined1 **local_18;
  
  lVar7 = *(long *)(param_1 + 0x60);
  lVar1 = *(long *)(param_1 + 0x68);
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = (undefined **)0xaaaaaaaaaaaaaa00;
  local_40 = 0xaaaaaaaaaaaaaa00;
  if (lVar7 == lVar1) {
    uVar6 = 0;
  }
  else {
    do {
      if (*(char *)(lVar7 + 0x9c) == '\x01') {
        if ((local_40 & 1) == 0) {
          local_b0 = (undefined **)((ulong)local_b0 & 0xffffffffffffff00);
          local_48 = (undefined1 *)((ulong)local_48 & 0xffffffffffffff00);
          if (*(char *)(lVar7 + 0x128) == '\x01') {
            FUN_006684dc(&local_b0,lVar7 + 0xc0);
            local_48 = (undefined1 *)CONCAT71(local_48._1_7_,1);
          }
          local_40 = CONCAT71(local_40._1_7_,1);
        }
        else {
          bVar2 = *(byte *)(lVar7 + 0x128);
          if ((bVar2 & (byte)local_48) == 0) {
            if ((byte)local_48 != bVar2) goto LAB_0066a470;
          }
          else {
            if ((bVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                        );
            }
            uVar3 = FUN_0066cffc(&local_b0,lVar7 + 0xc0);
            if ((uVar3 & 1) == 0) {
LAB_0066a470:
              uVar6 = 1;
              if ((local_40 & 1) == 0) {
                return 1;
              }
              goto LAB_0066a48c;
            }
          }
        }
      }
      lVar7 = lVar7 + 0x130;
    } while (lVar7 != lVar1);
    uVar6 = 0;
    if ((local_40 & 1) != 0) {
LAB_0066a48c:
      if (((ulong)local_48 & 1) != 0) {
        local_b0 = &PTR_FUN_00d28168;
        local_18 = &local_60;
        FUN_0060b2cc(&local_18,puStack_58);
        if (puStack_78 != (undefined1 *)0x0) {
          uVar3 = (ulong)(((long)puStack_78 - (long)local_70) * 0x1555555555555555) >> 2;
          uVar5 = (long)local_70 * -0x1555555555555555 - 4U >> 2;
          if (uVar5 <= uVar3) {
            uVar3 = uVar5;
          }
          puVar4 = local_70;
          if ((1 < uVar3) && ((((int)puStack_78 - (int)local_70 | -(int)local_70) & 3U) == 0)) {
            uVar3 = uVar3 & 0x3ffffffffffffffe;
            puVar4 = local_70 + uVar3 * -0xc;
            do {
              uVar3 = uVar3 - 2;
            } while (uVar3 != 0);
          }
          while (puVar4 != puStack_78) {
            puVar4 = puVar4 + -0xc;
            if (puVar4 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                        );
            }
          }
          local_70 = puStack_78;
          operator_delete(puStack_78);
        }
        if ((long)puStack_98 < 0) {
          operator_delete(puStack_a8);
        }
      }
    }
  }
  return uVar6;
}


// ===== 0066a5a8  FUN_0066a5a8 =====

void FUN_0066a5a8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 0066a5c0  FUN_0066a5c0 =====

void FUN_0066a5c0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 0066a5d8  FUN_0066a5d8 =====

void FUN_0066a5d8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 0066a5f0  FUN_0066a5f0 =====

undefined8 * FUN_0066a5f0(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined4 uVar3;
  void *pvVar4;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar8 = (undefined8 *)(param_1[1] - *param_1);
  uVar1 = ((long)puVar8 >> 5) + 1;
  if (uVar1 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_005e28a4();
  }
  uVar6 = param_1[2] - *param_1;
  uVar7 = (long)uVar6 >> 4;
  if (uVar7 <= uVar1) {
    uVar7 = uVar1;
  }
  if (0x7fffffffffffffdf < uVar6) {
    uVar7 = 0x7ffffffffffffff;
  }
  if (uVar7 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if (uVar7 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    pvVar4 = operator_new(uVar7 << 5);
    puVar8 = (undefined8 *)((long)pvVar4 + (long)puVar8);
  }
  if (puVar8 != (undefined8 *)0x0) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      FUN_005478d8(puVar8,*param_2,param_2[1]);
    }
    else {
      uVar10 = param_2[1];
      uVar9 = *param_2;
      puVar8[2] = param_2[2];
      puVar8[1] = uVar10;
      *puVar8 = uVar9;
    }
    uVar3 = *(undefined4 *)(param_2 + 3);
    *(undefined1 *)((long)puVar8 + 0x1c) = *(undefined1 *)((long)param_2 + 0x1c);
    *(undefined4 *)(puVar8 + 3) = uVar3;
    lVar2 = (long)puVar8 + (*param_1 - param_1[1]);
    FUN_0066a718(param_1,*param_1,param_1[1],lVar2);
    pvVar5 = (void *)*param_1;
    *param_1 = lVar2;
    param_1[1] = (long)(puVar8 + 4);
    param_1[2] = (long)((long)pvVar4 + uVar7 * 0x20);
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


// ===== 0066a718  FUN_0066a718 =====

void FUN_0066a718(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar3 = param_2;
  if (param_2 != param_3) {
    do {
      if (param_4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      if (*(char *)((long)puVar3 + 0x17) < '\0') {
        FUN_005478d8(param_4,*puVar3,puVar3[1]);
      }
      else {
        uVar5 = puVar3[1];
        uVar4 = *puVar3;
        param_4[2] = puVar3[2];
        param_4[1] = uVar5;
        *param_4 = uVar4;
      }
      uVar2 = *(undefined4 *)(puVar3 + 3);
      puVar1 = puVar3 + 4;
      *(undefined1 *)((long)param_4 + 0x1c) = *(undefined1 *)((long)puVar3 + 0x1c);
      *(undefined4 *)(param_4 + 3) = uVar2;
      param_4 = param_4 + 4;
      puVar3 = puVar1;
    } while (puVar1 != param_3);
    do {
      if (param_2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        operator_delete((void *)*param_2);
      }
      param_2 = param_2 + 4;
    } while (param_2 != param_3);
  }
  return;
}


// ===== 0066a7fc  FUN_0066a7fc =====

/* WARNING: Removing unreachable block (ram,0x0066bfe8) */
/* WARNING: Removing unreachable block (ram,0x0066b49c) */
/* WARNING: Removing unreachable block (ram,0x0066b880) */
/* WARNING: Removing unreachable block (ram,0x0066b250) */
/* WARNING: Removing unreachable block (ram,0x0066b260) */
/* WARNING: Removing unreachable block (ram,0x0066b264) */
/* WARNING: Removing unreachable block (ram,0x0066ada8) */
/* WARNING: Removing unreachable block (ram,0x0066adb8) */
/* WARNING: Removing unreachable block (ram,0x0066adbc) */
/* WARNING: Removing unreachable block (ram,0x0066b294) */
/* WARNING: Removing unreachable block (ram,0x0066bcdc) */
/* WARNING: Removing unreachable block (ram,0x0066bcec) */
/* WARNING: Removing unreachable block (ram,0x0066bcf0) */
/* WARNING: Removing unreachable block (ram,0x0066c258) */
/* WARNING: Removing unreachable block (ram,0x0066adec) */
/* WARNING: Type propagation algorithm not settling */

void FUN_0066a7fc(ulong *******param_1,ulong *******param_2,long param_3,uint param_4)

{
  long *plVar1;
  ulong uVar2;
  ulong *******pppppppuVar3;
  ulong ******ppppppuVar4;
  ulong ******ppppppuVar5;
  undefined8 *puVar6;
  ulong ******__n;
  undefined4 uVar7;
  byte bVar8;
  byte bVar9;
  long *plVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long lVar19;
  ulong *******pppppppuVar20;
  ulong *******pppppppuVar21;
  ulong uVar22;
  long lVar23;
  ulong *******pppppppuVar24;
  ulong *******pppppppuVar25;
  ulong uVar26;
  ulong *******pppppppuVar27;
  ulong *******pppppppuVar28;
  ulong *******pppppppuVar29;
  ulong uVar30;
  ulong ******ppppppuVar31;
  ulong ******ppppppuVar32;
  long local_b8;
  ulong *******local_a0;
  ulong ******ppppppuStack_98;
  ulong ******local_90;
  undefined8 local_88;
  ulong *******local_80;
  ulong ******ppppppuStack_78;
  ulong ******local_70;
  undefined8 local_68;
  
LAB_0066a834:
  pppppppuVar25 = param_2 + -4;
  pppppppuVar24 = param_1;
LAB_0066a844:
  while( true ) {
    param_1 = pppppppuVar24;
    uVar26 = (long)param_2 - (long)param_1 >> 5;
    if (uVar26 - 2 == 0 || (long)uVar26 < 2) {
      if (uVar26 < 2) {
        return;
      }
      if (uVar26 == 2) {
        pppppppuVar25 = param_2 + -4;
        pppppppuVar24 = (ulong *******)*pppppppuVar25;
        ppppppuVar31 = param_2[-3];
        if (-1 < (char)*(byte *)((long)param_2 + -9)) {
          pppppppuVar24 = pppppppuVar25;
          ppppppuVar31 = (ulong ******)(ulong)*(byte *)((long)param_2 + -9);
        }
        pppppppuVar21 = (ulong *******)*param_1;
        ppppppuVar32 = param_1[1];
        if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
          pppppppuVar21 = param_1;
          ppppppuVar32 = (ulong ******)(ulong)*(byte *)((long)param_1 + 0x17);
        }
        ppppppuVar5 = ppppppuVar32;
        if (ppppppuVar31 <= ppppppuVar32) {
          ppppppuVar5 = ppppppuVar31;
        }
        iVar13 = memcmp(pppppppuVar24,pppppppuVar21,(size_t)ppppppuVar5);
        if (iVar13 == 0) {
          bVar11 = ppppppuVar32 <= ppppppuVar31;
          if ((ppppppuVar31 == ppppppuVar32) &&
             (bVar11 = *(byte *)((long)param_1 + 0x1c) <= *(byte *)((long)param_2 + -4),
             *(byte *)((long)param_2 + -4) == *(byte *)((long)param_1 + 0x1c))) {
            if (*(int *)(param_1 + 3) <= *(int *)(param_2 + -1)) {
              return;
            }
          }
          else if (bVar11) {
            return;
          }
        }
        else if (-1 < iVar13) {
          return;
        }
        FUN_0066ce88(param_1,pppppppuVar25);
        return;
      }
    }
    else {
      if (uVar26 == 3) {
        FUN_0066c358(param_1,param_1 + 4,pppppppuVar25);
        return;
      }
      if (uVar26 == 4) {
        FUN_0066c60c(param_1,param_1 + 4,param_1 + 8,pppppppuVar25);
        return;
      }
      if (uVar26 == 5) {
        FUN_0066c7ec(param_1,param_1 + 4,param_1 + 8,param_1 + 0xc,pppppppuVar25);
        return;
      }
    }
    if ((long)uVar26 < 0x18) break;
    if (param_3 == 0) {
      if (param_1 == param_2) {
        return;
      }
      uVar16 = uVar26 - 2 >> 1;
      uVar15 = uVar16;
      goto LAB_0066b3f8;
    }
    pppppppuVar24 = param_1 + (uVar26 >> 1) * 4;
    if (uVar26 < 0x81) {
      FUN_0066c358(pppppppuVar24,param_1,param_2 + -4);
    }
    else {
      FUN_0066c358(param_1,pppppppuVar24,param_2 + -4);
      FUN_0066c358(param_1 + 4,pppppppuVar24 + -4,param_2 + -8);
      FUN_0066c358(param_1 + 8,pppppppuVar24 + 4,param_2 + -0xc);
      FUN_0066c358(pppppppuVar24 + -4,pppppppuVar24,pppppppuVar24 + 4);
      FUN_0066ce88(param_1,pppppppuVar24);
    }
    if ((param_4 & 1) != 0) {
LAB_0066a994:
      param_3 = param_3 + -1;
      ppppppuStack_78 = (ulong ******)&DAT_aaaaaaaaaaaaaaaa;
      local_80 = (ulong *******)&DAT_aaaaaaaaaaaaaaaa;
      local_68 = &DAT_aaaaaaaaaaaaaaaa;
      local_70 = (ulong ******)&DAT_aaaaaaaaaaaaaaaa;
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        FUN_005478d8(&local_80,*param_1,param_1[1]);
      }
      else {
        local_70 = param_1[2];
        ppppppuStack_78 = param_1[1];
        local_80 = (ulong *******)*param_1;
      }
      iVar13 = *(int *)(param_1 + 3);
      bVar8 = *(byte *)((long)param_1 + 0x1c);
      local_68 = (undefined1 *)CONCAT44(CONCAT31(local_68._5_3_,bVar8),iVar13);
      if (param_1 + 4 == param_2) {
LAB_0066ba20:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__algorithm/sort.h:603: libc++ Hardening assertion __first != __end failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                  );
      }
      lVar19 = 0;
      pppppppuVar24 = local_80;
      ppppppuVar31 = ppppppuStack_78;
      if (-1 < (long)local_70) {
        pppppppuVar24 = (ulong *******)&local_80;
        ppppppuVar31 = (ulong ******)((ulong)local_70 >> 0x38);
      }
      do {
        bVar9 = *(byte *)((long)param_1 + lVar19 + 0x37);
        puVar18 = (undefined8 *)((long)param_1 + lVar19 + 0x20);
        puVar6 = (undefined8 *)*puVar18;
        ppppppuVar32 = *(ulong *******)((long)param_1 + lVar19 + 0x28);
        if (-1 < (char)bVar9) {
          puVar6 = puVar18;
          ppppppuVar32 = (ulong ******)(ulong)bVar9;
        }
        ppppppuVar5 = ppppppuVar31;
        if (ppppppuVar32 <= ppppppuVar31) {
          ppppppuVar5 = ppppppuVar32;
        }
        iVar12 = memcmp(puVar6,pppppppuVar24,(size_t)ppppppuVar5);
        if (iVar12 == 0) {
          bVar11 = ppppppuVar31 <= ppppppuVar32;
          if ((ppppppuVar32 == ppppppuVar31) &&
             (bVar9 = *(byte *)((long)param_1 + lVar19 + 0x3c), bVar11 = bVar8 <= bVar9,
             bVar9 == bVar8)) {
            if (iVar13 <= *(int *)((long)param_1 + lVar19 + 0x38)) goto LAB_0066aa8c;
          }
          else if (bVar11) goto LAB_0066aa8c;
        }
        else if (-1 < iVar12) goto LAB_0066aa8c;
        lVar23 = lVar19 + 0x40;
        lVar19 = lVar19 + 0x20;
        if ((ulong *******)((long)param_1 + lVar23) == param_2) goto LAB_0066ba20;
      } while( true );
    }
    ppppppuVar31 = param_1[-3];
    pppppppuVar24 = (ulong *******)param_1[-4];
    if (-1 < (char)*(byte *)((long)param_1 + -9)) {
      ppppppuVar31 = (ulong ******)(ulong)*(byte *)((long)param_1 + -9);
      pppppppuVar24 = param_1 + -4;
    }
    pppppppuVar21 = (ulong *******)*param_1;
    ppppppuVar32 = param_1[1];
    if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
      pppppppuVar21 = param_1;
      ppppppuVar32 = (ulong ******)(ulong)*(byte *)((long)param_1 + 0x17);
    }
    ppppppuVar5 = ppppppuVar32;
    if (ppppppuVar31 <= ppppppuVar32) {
      ppppppuVar5 = ppppppuVar31;
    }
    iVar13 = memcmp(pppppppuVar24,pppppppuVar21,(size_t)ppppppuVar5);
    if (iVar13 == 0) {
      bVar11 = ppppppuVar32 <= ppppppuVar31;
      if ((ppppppuVar31 == ppppppuVar32) &&
         (bVar11 = *(byte *)((long)param_1 + 0x1c) <= *(byte *)((long)param_1 + -4),
         *(byte *)((long)param_1 + -4) == *(byte *)((long)param_1 + 0x1c))) {
        if (*(int *)(param_1 + -1) < *(int *)(param_1 + 3)) goto LAB_0066a994;
      }
      else if (!bVar11) goto LAB_0066a994;
    }
    else if (iVar13 < 0) goto LAB_0066a994;
    ppppppuStack_78 = (ulong ******)&DAT_aaaaaaaaaaaaaaaa;
    local_80 = (ulong *******)&DAT_aaaaaaaaaaaaaaaa;
    local_68 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = (ulong ******)&DAT_aaaaaaaaaaaaaaaa;
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      FUN_005478d8(&local_80,*param_1,param_1[1]);
    }
    else {
      local_70 = param_1[2];
      ppppppuStack_78 = param_1[1];
      local_80 = (ulong *******)*param_1;
    }
    local_68 = (undefined1 *)
               CONCAT44(CONCAT31(local_68._5_3_,*(undefined1 *)((long)param_1 + 0x1c)),
                        *(undefined4 *)(param_1 + 3));
    pppppppuVar21 = local_80;
    ppppppuVar31 = ppppppuStack_78;
    if (-1 < (long)local_70) {
      pppppppuVar21 = (ulong *******)&local_80;
      ppppppuVar31 = (ulong ******)((ulong)local_70 >> 0x38);
    }
    pppppppuVar24 = (ulong *******)param_2[-4];
    ppppppuVar32 = param_2[-3];
    if (-1 < (char)*(byte *)((long)param_2 + -9)) {
      pppppppuVar24 = param_2 + -4;
      ppppppuVar32 = (ulong ******)(ulong)*(byte *)((long)param_2 + -9);
    }
    ppppppuVar5 = ppppppuVar32;
    if (ppppppuVar31 <= ppppppuVar32) {
      ppppppuVar5 = ppppppuVar31;
    }
    iVar12 = memcmp(pppppppuVar21,pppppppuVar24,(size_t)ppppppuVar5);
    bVar8 = local_68._4_1_;
    iVar13 = (int)local_68;
    pppppppuVar28 = param_1;
    if (iVar12 == 0) {
      bVar11 = ppppppuVar32 <= ppppppuVar31;
      if ((ppppppuVar31 != ppppppuVar32) ||
         (bVar11 = *(byte *)((long)param_2 + -4) <= local_68._4_1_,
         local_68._4_1_ != *(byte *)((long)param_2 + -4))) {
        if (!bVar11) goto joined_r0x0066aedc;
        goto joined_r0x0066af8c;
      }
      if (*(int *)(param_2 + -1) <= (int)local_68) goto joined_r0x0066af8c;
joined_r0x0066aedc:
      do {
        while( true ) {
          pppppppuVar24 = pppppppuVar28 + 4;
          if (pppppppuVar24 == param_2) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__algorithm/sort.h:669: libc++ Hardening assertion __first != __end failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                      );
          }
          pppppppuVar29 = (ulong *******)*pppppppuVar24;
          ppppppuVar32 = pppppppuVar24[1];
          if (-1 < (char)*(byte *)((long)pppppppuVar28 + 0x37)) {
            pppppppuVar29 = pppppppuVar24;
            ppppppuVar32 = (ulong ******)(ulong)*(byte *)((long)pppppppuVar28 + 0x37);
          }
          ppppppuVar5 = ppppppuVar32;
          if (ppppppuVar31 <= ppppppuVar32) {
            ppppppuVar5 = ppppppuVar31;
          }
          iVar12 = memcmp(pppppppuVar21,pppppppuVar29,(size_t)ppppppuVar5);
          if (iVar12 != 0) break;
          bVar11 = ppppppuVar32 <= ppppppuVar31;
          if ((ppppppuVar31 == ppppppuVar32) &&
             (bVar11 = *(byte *)((long)pppppppuVar28 + 0x3c) <= bVar8,
             bVar8 == *(byte *)((long)pppppppuVar28 + 0x3c))) {
            pppppppuVar28 = pppppppuVar24;
            if (iVar13 < *(int *)(pppppppuVar24 + 3)) goto LAB_0066b000;
          }
          else {
            pppppppuVar28 = pppppppuVar24;
            if (!bVar11) goto LAB_0066b000;
          }
        }
        pppppppuVar28 = pppppppuVar24;
      } while (-1 < iVar12);
    }
    else {
      if (iVar12 < 0) goto joined_r0x0066aedc;
joined_r0x0066af8c:
      do {
        while( true ) {
          pppppppuVar24 = pppppppuVar28 + 4;
          if (param_2 <= pppppppuVar24) goto LAB_0066b000;
          pppppppuVar29 = (ulong *******)*pppppppuVar24;
          ppppppuVar32 = pppppppuVar24[1];
          if (-1 < (char)*(byte *)((long)pppppppuVar28 + 0x37)) {
            pppppppuVar29 = pppppppuVar24;
            ppppppuVar32 = (ulong ******)(ulong)*(byte *)((long)pppppppuVar28 + 0x37);
          }
          ppppppuVar5 = ppppppuVar32;
          if (ppppppuVar31 <= ppppppuVar32) {
            ppppppuVar5 = ppppppuVar31;
          }
          iVar12 = memcmp(pppppppuVar21,pppppppuVar29,(size_t)ppppppuVar5);
          if (iVar12 != 0) break;
          bVar11 = ppppppuVar32 <= ppppppuVar31;
          if ((ppppppuVar31 == ppppppuVar32) &&
             (bVar11 = *(byte *)((long)pppppppuVar28 + 0x3c) <= bVar8,
             bVar8 == *(byte *)((long)pppppppuVar28 + 0x3c))) {
            pppppppuVar28 = pppppppuVar24;
            if (iVar13 < *(int *)(pppppppuVar24 + 3)) goto LAB_0066b000;
          }
          else {
            pppppppuVar28 = pppppppuVar24;
            if (!bVar11) goto LAB_0066b000;
          }
        }
        pppppppuVar28 = pppppppuVar24;
      } while (-1 < iVar12);
    }
LAB_0066b000:
    pppppppuVar28 = param_2;
    if (pppppppuVar24 < param_2) {
      if (param_2 == param_1) {
LAB_0066c344:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__algorithm/sort.h:682: libc++ Hardening assertion __last != __begin failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                  );
      }
      bVar8 = local_68._4_1_;
      iVar13 = (int)local_68;
      pppppppuVar29 = param_2;
      do {
        pppppppuVar28 = pppppppuVar29 + -4;
        pppppppuVar20 = (ulong *******)*pppppppuVar28;
        ppppppuVar32 = pppppppuVar29[-3];
        if (-1 < (char)*(byte *)((long)pppppppuVar29 + -9)) {
          pppppppuVar20 = pppppppuVar28;
          ppppppuVar32 = (ulong ******)(ulong)*(byte *)((long)pppppppuVar29 + -9);
        }
        ppppppuVar5 = ppppppuVar32;
        if (ppppppuVar31 <= ppppppuVar32) {
          ppppppuVar5 = ppppppuVar31;
        }
        iVar12 = memcmp(pppppppuVar21,pppppppuVar20,(size_t)ppppppuVar5);
        if (iVar12 == 0) {
          bVar11 = ppppppuVar32 <= ppppppuVar31;
          if ((ppppppuVar31 == ppppppuVar32) &&
             (bVar11 = *(byte *)((long)pppppppuVar29 + -4) <= bVar8,
             bVar8 == *(byte *)((long)pppppppuVar29 + -4))) {
            if (*(int *)(pppppppuVar29 + -1) <= iVar13) break;
          }
          else if (bVar11) break;
        }
        else if (-1 < iVar12) break;
        pppppppuVar29 = pppppppuVar28;
        if (pppppppuVar28 == param_1) goto LAB_0066c344;
      } while( true );
    }
LAB_0066b1ac:
    if (pppppppuVar24 < pppppppuVar28) {
      FUN_0066ce88(pppppppuVar24,pppppppuVar28);
      pppppppuVar24 = pppppppuVar24 + 4;
      if (pppppppuVar24 == param_2) {
LAB_0066c2f4:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__algorithm/sort.h:692: libc++ Hardening assertion __first != __end failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                  );
      }
      bVar8 = local_68._4_1_;
      iVar13 = (int)local_68;
      pppppppuVar21 = local_80;
      ppppppuVar31 = ppppppuStack_78;
      if (-1 < (long)local_70) {
        pppppppuVar21 = (ulong *******)&local_80;
        ppppppuVar31 = (ulong ******)((ulong)local_70 >> 0x38);
      }
      do {
        pppppppuVar29 = (ulong *******)*pppppppuVar24;
        ppppppuVar32 = pppppppuVar24[1];
        if (-1 < (char)*(byte *)((long)pppppppuVar24 + 0x17)) {
          pppppppuVar29 = pppppppuVar24;
          ppppppuVar32 = (ulong ******)(ulong)*(byte *)((long)pppppppuVar24 + 0x17);
        }
        ppppppuVar5 = ppppppuVar32;
        if (ppppppuVar31 <= ppppppuVar32) {
          ppppppuVar5 = ppppppuVar31;
        }
        iVar12 = memcmp(pppppppuVar21,pppppppuVar29,(size_t)ppppppuVar5);
        pppppppuVar29 = pppppppuVar28;
        if (iVar12 == 0) {
          bVar11 = ppppppuVar32 <= ppppppuVar31;
          if ((ppppppuVar31 == ppppppuVar32) &&
             (bVar11 = *(byte *)((long)pppppppuVar24 + 0x1c) <= bVar8,
             bVar8 == *(byte *)((long)pppppppuVar24 + 0x1c))) {
            if (iVar13 < *(int *)(pppppppuVar24 + 3)) goto joined_r0x0066b138;
          }
          else if (!bVar11) goto joined_r0x0066b138;
        }
        else if (iVar12 < 0) goto joined_r0x0066b138;
        pppppppuVar24 = pppppppuVar24 + 4;
        if (pppppppuVar24 == param_2) goto LAB_0066c2f4;
      } while( true );
    }
    pppppppuVar21 = pppppppuVar24 + -4;
    if (param_1 != pppppppuVar21) {
      bVar8 = *(byte *)((long)pppppppuVar24 + -9);
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        ppppppuVar31 = pppppppuVar24[-3];
        pppppppuVar28 = (ulong *******)pppppppuVar24[-4];
        if (-1 < (char)bVar8) {
          ppppppuVar31 = (ulong ******)(ulong)bVar8;
          pppppppuVar28 = pppppppuVar21;
        }
        FUN_00547f08(param_1,pppppppuVar28,ppppppuVar31);
      }
      else if ((char)bVar8 < '\0') {
        FUN_00547fc0(param_1,pppppppuVar24[-4],pppppppuVar24[-3]);
      }
      else {
        ppppppuVar32 = pppppppuVar24[-3];
        ppppppuVar31 = *pppppppuVar21;
        param_1[2] = pppppppuVar24[-2];
        param_1[1] = ppppppuVar32;
        *param_1 = ppppppuVar31;
      }
      uVar7 = *(undefined4 *)(pppppppuVar24 + -1);
      *(undefined1 *)((long)param_1 + 0x1c) = *(undefined1 *)((long)pppppppuVar24 + -4);
      *(undefined4 *)(param_1 + 3) = uVar7;
    }
    if ((ulong ********)pppppppuVar21 != &local_80) {
      if ((long)local_70 < 0) {
        FUN_00547fc0(pppppppuVar24 + -4,local_80,ppppppuStack_78);
      }
      else {
        pppppppuVar24[-2] = local_70;
        pppppppuVar24[-3] = ppppppuStack_78;
        *pppppppuVar21 = (ulong ******)local_80;
      }
    }
    *(byte *)((long)pppppppuVar24 + -4) = local_68._4_1_;
    *(int *)(pppppppuVar24 + -1) = (int)local_68;
    param_4 = 0;
    param_3 = param_3 + -1;
  }
  if ((param_4 & 1) == 0) {
    if (param_1 == param_2) {
      return;
    }
    if (param_1 + 4 == param_2) {
      return;
    }
    local_b8 = 0;
    pppppppuVar24 = param_1 + 4;
    pppppppuVar25 = param_1;
    goto LAB_0066c05c;
  }
  if (param_1 == param_2) {
    return;
  }
  if (param_1 + 4 == param_2) {
    return;
  }
  lVar19 = 0;
  pppppppuVar24 = param_1 + 4;
  pppppppuVar25 = param_1;
LAB_0066b7fc:
  pppppppuVar28 = pppppppuVar24;
  bVar8 = *(byte *)((long)pppppppuVar25 + 0x37);
  pppppppuVar24 = (ulong *******)pppppppuVar25[4];
  ppppppuVar32 = pppppppuVar25[5];
  ppppppuVar31 = ppppppuVar32;
  pppppppuVar21 = pppppppuVar24;
  if (-1 < (char)bVar8) {
    ppppppuVar31 = (ulong ******)(ulong)bVar8;
    pppppppuVar21 = pppppppuVar28;
  }
  pppppppuVar29 = (ulong *******)*pppppppuVar25;
  ppppppuVar5 = pppppppuVar25[1];
  if (-1 < (char)*(byte *)((long)pppppppuVar25 + 0x17)) {
    pppppppuVar29 = pppppppuVar25;
    ppppppuVar5 = (ulong ******)(ulong)*(byte *)((long)pppppppuVar25 + 0x17);
  }
  ppppppuVar4 = ppppppuVar5;
  if (ppppppuVar31 <= ppppppuVar5) {
    ppppppuVar4 = ppppppuVar31;
  }
  iVar13 = memcmp(pppppppuVar21,pppppppuVar29,(size_t)ppppppuVar4);
  if (iVar13 == 0) {
    bVar11 = ppppppuVar5 <= ppppppuVar31;
    if ((ppppppuVar31 == ppppppuVar5) &&
       (bVar11 = *(byte *)((long)pppppppuVar25 + 0x1c) <= *(byte *)((long)pppppppuVar25 + 0x3c),
       *(byte *)((long)pppppppuVar25 + 0x3c) == *(byte *)((long)pppppppuVar25 + 0x1c))) {
      if (*(int *)(pppppppuVar25 + 7) < *(int *)(pppppppuVar25 + 3)) {
LAB_0066b89c:
        ppppppuStack_78 = (ulong ******)&DAT_aaaaaaaaaaaaaaaa;
        local_80 = (ulong *******)&DAT_aaaaaaaaaaaaaaaa;
        local_68 = &DAT_aaaaaaaaaaaaaaaa;
        local_70 = (ulong ******)&DAT_aaaaaaaaaaaaaaaa;
        if ((char)bVar8 < '\0') {
          FUN_005478d8(&local_80,pppppppuVar24,ppppppuVar32);
        }
        else {
          local_70 = pppppppuVar28[2];
          ppppppuStack_78 = pppppppuVar28[1];
          local_80 = (ulong *******)*pppppppuVar28;
        }
        local_68 = (undefined1 *)
                   CONCAT44(CONCAT31(local_68._5_3_,*(undefined1 *)((long)pppppppuVar25 + 0x3c)),
                            *(undefined4 *)(pppppppuVar25 + 7));
        lVar23 = lVar19;
        do {
          plVar1 = (long *)((long)param_1 + lVar23);
          bVar8 = *(byte *)((long)plVar1 + 0x17);
          if (*(char *)((long)plVar1 + 0x37) < '\0') {
            uVar26 = plVar1[1];
            plVar10 = (long *)*plVar1;
            if (-1 < (char)bVar8) {
              uVar26 = (ulong)bVar8;
              plVar10 = plVar1;
            }
            FUN_00547f08(plVar1 + 4,plVar10,uVar26);
          }
          else if ((char)bVar8 < '\0') {
            FUN_00547fc0(plVar1 + 4,*(undefined8 *)((long)param_1 + lVar23),
                         ((undefined8 *)((long)param_1 + lVar23))[1]);
          }
          else {
            plVar1[5] = plVar1[1];
            plVar1[4] = *plVar1;
            plVar1[6] = plVar1[2];
          }
          *(undefined4 *)((long)param_1 + lVar23 + 0x38) =
               *(undefined4 *)((long)param_1 + lVar23 + 0x18);
          *(undefined1 *)((long)param_1 + lVar23 + 0x3c) =
               *(undefined1 *)((long)param_1 + lVar23 + 0x1c);
          pppppppuVar24 = param_1;
          if (lVar23 == 0) goto joined_r0x0066b9ec;
          bVar8 = *(byte *)((long)param_1 + lVar23 + -9);
          ppppppuVar31 = ppppppuStack_78;
          pppppppuVar24 = local_80;
          if (-1 < (long)local_70) {
            ppppppuVar31 = (ulong ******)((ulong)local_70 >> 0x38);
            pppppppuVar24 = (ulong *******)&local_80;
          }
          puVar18 = (undefined8 *)((long)param_1 + lVar23 + -0x20);
          puVar6 = (undefined8 *)*puVar18;
          ppppppuVar32 = *(ulong *******)((long)param_1 + lVar23 + -0x18);
          if (-1 < (char)bVar8) {
            puVar6 = puVar18;
            ppppppuVar32 = (ulong ******)(ulong)bVar8;
          }
          ppppppuVar5 = ppppppuVar32;
          if (ppppppuVar31 <= ppppppuVar32) {
            ppppppuVar5 = ppppppuVar31;
          }
          iVar13 = memcmp(pppppppuVar24,puVar6,(size_t)ppppppuVar5);
          if (iVar13 == 0) {
            bVar11 = ppppppuVar32 <= ppppppuVar31;
            if (ppppppuVar31 == ppppppuVar32) {
              bVar8 = *(byte *)((long)param_1 + lVar23 + -4);
              bVar11 = bVar8 <= local_68._4_1_;
              if (local_68._4_1_ == bVar8) {
                if ((int)local_68 < *(int *)((long)param_1 + lVar23 + -8)) goto LAB_0066b8e8;
                goto LAB_0066b9d4;
              }
            }
            if (bVar11) goto LAB_0066b9d4;
          }
          else if (-1 < iVar13) goto LAB_0066b9d4;
LAB_0066b8e8:
          lVar23 = lVar23 + -0x20;
        } while( true );
      }
    }
    else if (!bVar11) goto LAB_0066b89c;
  }
  else if (iVar13 < 0) goto LAB_0066b89c;
  goto LAB_0066b7ec;
LAB_0066b9d4:
  pppppppuVar24 = (ulong *******)((long)param_1 + lVar23);
joined_r0x0066b9ec:
  if ((ulong ********)pppppppuVar24 != &local_80) {
    if (*(char *)((long)pppppppuVar24 + 0x17) < '\0') {
      ppppppuVar31 = ppppppuStack_78;
      pppppppuVar25 = local_80;
      if (-1 < (long)local_70) {
        ppppppuVar31 = (ulong ******)((ulong)local_70 >> 0x38);
        pppppppuVar25 = (ulong *******)&local_80;
      }
      FUN_00547f08(pppppppuVar24,pppppppuVar25,ppppppuVar31);
    }
    else if ((long)local_70 < 0) {
      FUN_00547fc0(pppppppuVar24,local_80,ppppppuStack_78);
    }
    else {
      pppppppuVar24[2] = local_70;
      pppppppuVar24[1] = ppppppuStack_78;
      *pppppppuVar24 = (ulong ******)local_80;
    }
  }
  *(byte *)((long)param_1 + lVar23 + 0x1c) = local_68._4_1_;
  *(int *)((long)param_1 + lVar23 + 0x18) = (int)local_68;
LAB_0066b7ec:
  lVar19 = lVar19 + 0x20;
  pppppppuVar24 = pppppppuVar28 + 4;
  pppppppuVar25 = pppppppuVar28;
  if (pppppppuVar28 + 4 == param_2) {
    return;
  }
  goto LAB_0066b7fc;
LAB_0066c05c:
  pppppppuVar28 = pppppppuVar24;
  bVar8 = *(byte *)((long)pppppppuVar25 + 0x37);
  pppppppuVar24 = (ulong *******)pppppppuVar25[4];
  ppppppuVar32 = pppppppuVar25[5];
  ppppppuVar31 = ppppppuVar32;
  pppppppuVar21 = pppppppuVar24;
  if (-1 < (char)bVar8) {
    ppppppuVar31 = (ulong ******)(ulong)bVar8;
    pppppppuVar21 = pppppppuVar28;
  }
  pppppppuVar29 = (ulong *******)*pppppppuVar25;
  ppppppuVar5 = pppppppuVar25[1];
  if (-1 < (char)*(byte *)((long)pppppppuVar25 + 0x17)) {
    pppppppuVar29 = pppppppuVar25;
    ppppppuVar5 = (ulong ******)(ulong)*(byte *)((long)pppppppuVar25 + 0x17);
  }
  ppppppuVar4 = ppppppuVar5;
  if (ppppppuVar31 <= ppppppuVar5) {
    ppppppuVar4 = ppppppuVar31;
  }
  iVar13 = memcmp(pppppppuVar21,pppppppuVar29,(size_t)ppppppuVar4);
  if (iVar13 == 0) {
    bVar11 = ppppppuVar5 <= ppppppuVar31;
    if ((ppppppuVar31 == ppppppuVar5) &&
       (bVar11 = *(byte *)((long)pppppppuVar25 + 0x1c) <= *(byte *)((long)pppppppuVar25 + 0x3c),
       *(byte *)((long)pppppppuVar25 + 0x3c) == *(byte *)((long)pppppppuVar25 + 0x1c))) {
      if (*(int *)(pppppppuVar25 + 7) < *(int *)(pppppppuVar25 + 3)) {
LAB_0066c0dc:
        ppppppuStack_78 = (ulong ******)&DAT_aaaaaaaaaaaaaaaa;
        local_80 = (ulong *******)&DAT_aaaaaaaaaaaaaaaa;
        local_68 = &DAT_aaaaaaaaaaaaaaaa;
        local_70 = (ulong ******)&DAT_aaaaaaaaaaaaaaaa;
        if ((char)bVar8 < '\0') {
          FUN_005478d8(&local_80,pppppppuVar24,ppppppuVar32);
        }
        else {
          local_70 = pppppppuVar28[2];
          ppppppuStack_78 = pppppppuVar28[1];
          local_80 = (ulong *******)*pppppppuVar28;
        }
        local_68 = (undefined1 *)
                   CONCAT44(CONCAT31(local_68._5_3_,*(undefined1 *)((long)pppppppuVar25 + 0x3c)),
                            *(undefined4 *)(pppppppuVar25 + 7));
        lVar19 = local_b8;
        do {
          plVar1 = (long *)((long)param_1 + lVar19);
          bVar8 = *(byte *)((long)plVar1 + 0x17);
          if (*(char *)((long)plVar1 + 0x37) < '\0') {
            uVar26 = plVar1[1];
            plVar10 = (long *)*plVar1;
            if (-1 < (char)bVar8) {
              uVar26 = (ulong)bVar8;
              plVar10 = plVar1;
            }
            FUN_00547f08(plVar1 + 4,plVar10,uVar26);
          }
          else if ((char)bVar8 < '\0') {
            FUN_00547fc0(plVar1 + 4,*(undefined8 *)((long)param_1 + lVar19),
                         ((undefined8 *)((long)param_1 + lVar19))[1]);
          }
          else {
            plVar1[5] = plVar1[1];
            plVar1[4] = *plVar1;
            plVar1[6] = plVar1[2];
          }
          ppppppuVar32 = local_70;
          ppppppuVar31 = ppppppuStack_78;
          pppppppuVar24 = local_80;
          *(undefined4 *)((long)param_1 + lVar19 + 0x38) =
               *(undefined4 *)((long)param_1 + lVar19 + 0x18);
          *(undefined1 *)((long)param_1 + lVar19 + 0x3c) =
               *(undefined1 *)((long)param_1 + lVar19 + 0x1c);
          if (lVar19 == -0x20) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__algorithm/sort.h:293: libc++ Hardening assertion __k != __leftmost failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                      );
          }
          bVar8 = *(byte *)((long)param_1 + lVar19 + -9);
          ppppppuVar5 = ppppppuStack_78;
          pppppppuVar25 = local_80;
          if (-1 < (long)local_70) {
            ppppppuVar5 = (ulong ******)((ulong)local_70 >> 0x38);
            pppppppuVar25 = (ulong *******)&local_80;
          }
          puVar18 = (undefined8 *)((long)param_1 + lVar19 + -0x20);
          puVar6 = (undefined8 *)*puVar18;
          ppppppuVar4 = *(ulong *******)((long)param_1 + lVar19 + -0x18);
          if (-1 < (char)bVar8) {
            puVar6 = puVar18;
            ppppppuVar4 = (ulong ******)(ulong)bVar8;
          }
          __n = ppppppuVar4;
          if (ppppppuVar5 <= ppppppuVar4) {
            __n = ppppppuVar5;
          }
          iVar13 = memcmp(pppppppuVar25,puVar6,(size_t)__n);
          if (iVar13 == 0) {
            bVar11 = ppppppuVar4 <= ppppppuVar5;
            if (ppppppuVar5 == ppppppuVar4) {
              bVar8 = *(byte *)((long)param_1 + lVar19 + -4);
              bVar11 = bVar8 <= local_68._4_1_;
              if (local_68._4_1_ == bVar8) {
                if ((int)local_68 < *(int *)((long)param_1 + lVar19 + -8)) goto LAB_0066c130;
                goto LAB_0066c22c;
              }
            }
            if (bVar11) goto LAB_0066c22c;
          }
          else if (-1 < iVar13) goto LAB_0066c22c;
LAB_0066c130:
          lVar19 = lVar19 + -0x20;
        } while( true );
      }
    }
    else if (!bVar11) goto LAB_0066c0dc;
  }
  else if (iVar13 < 0) goto LAB_0066c0dc;
  goto LAB_0066c044;
LAB_0066c22c:
  pppppppuVar21 = (ulong *******)((long)param_1 + lVar19);
  if ((ulong ********)pppppppuVar21 != &local_80) {
    if (*(char *)((long)pppppppuVar21 + 0x17) < '\0') {
      FUN_00547f08(pppppppuVar21,pppppppuVar25,ppppppuVar5);
    }
    else if ((long)ppppppuVar32 < 0) {
      FUN_00547fc0(pppppppuVar21,pppppppuVar24,ppppppuVar31);
    }
    else {
      pppppppuVar21[2] = local_70;
      pppppppuVar21[1] = ppppppuStack_78;
      *pppppppuVar21 = (ulong ******)local_80;
    }
  }
  *(byte *)((long)pppppppuVar21 + 0x1c) = local_68._4_1_;
  *(int *)(pppppppuVar21 + 3) = (int)local_68;
LAB_0066c044:
  local_b8 = local_b8 + 0x20;
  pppppppuVar24 = pppppppuVar28 + 4;
  pppppppuVar25 = pppppppuVar28;
  if (pppppppuVar28 + 4 == param_2) {
    return;
  }
  goto LAB_0066c05c;
LAB_0066b3f8:
  do {
    if (uVar15 <= uVar16) {
      uVar2 = (uVar15 & 0x3fffffffffffffff) << 1 | 1;
      uVar17 = uVar15 * 2 + 2;
      uVar30 = uVar2;
      if (uVar17 < uVar26) {
        pppppppuVar24 = param_1 + uVar2 * 4;
        pppppppuVar25 = param_1 + uVar17 * 4;
        pppppppuVar21 = (ulong *******)*pppppppuVar24;
        ppppppuVar31 = pppppppuVar24[1];
        if (-1 < (char)*(byte *)((long)pppppppuVar24 + 0x17)) {
          pppppppuVar21 = pppppppuVar24;
          ppppppuVar31 = (ulong ******)(ulong)*(byte *)((long)pppppppuVar24 + 0x17);
        }
        pppppppuVar28 = (ulong *******)*pppppppuVar25;
        ppppppuVar32 = pppppppuVar25[1];
        if (-1 < (char)*(byte *)((long)pppppppuVar25 + 0x17)) {
          pppppppuVar28 = pppppppuVar25;
          ppppppuVar32 = (ulong ******)(ulong)*(byte *)((long)pppppppuVar25 + 0x17);
        }
        ppppppuVar5 = ppppppuVar32;
        if (ppppppuVar31 <= ppppppuVar32) {
          ppppppuVar5 = ppppppuVar31;
        }
        uVar14 = memcmp(pppppppuVar21,pppppppuVar28,(size_t)ppppppuVar5);
        if (uVar14 == 0) {
          if (ppppppuVar31 != ppppppuVar32) {
            uVar14 = 0;
            if (ppppppuVar31 < ppppppuVar32) {
              uVar14 = 0xffffffff;
            }
            goto LAB_0066b4b8;
          }
          uVar14 = (uint)(*(byte *)((long)pppppppuVar24 + 0x1c) <
                         *(byte *)((long)pppppppuVar25 + 0x1c));
          if (*(byte *)((long)pppppppuVar24 + 0x1c) == *(byte *)((long)pppppppuVar25 + 0x1c)) {
            uVar14 = (uint)(*(int *)(pppppppuVar24 + 3) < *(int *)(pppppppuVar25 + 3));
          }
        }
        else {
LAB_0066b4b8:
          uVar14 = uVar14 >> 0x1f;
        }
        uVar30 = uVar17;
        if (uVar14 == 0) {
          uVar30 = uVar2;
        }
      }
      pppppppuVar24 = param_1 + uVar30 * 4;
      pppppppuVar25 = param_1 + uVar15 * 4;
      bVar8 = *(byte *)((long)pppppppuVar25 + 0x17);
      pppppppuVar21 = (ulong *******)*pppppppuVar25;
      ppppppuVar32 = pppppppuVar25[1];
      ppppppuVar31 = pppppppuVar24[1];
      pppppppuVar28 = (ulong *******)*pppppppuVar24;
      if (-1 < (char)*(byte *)((long)pppppppuVar24 + 0x17)) {
        ppppppuVar31 = (ulong ******)(ulong)*(byte *)((long)pppppppuVar24 + 0x17);
        pppppppuVar28 = pppppppuVar24;
      }
      pppppppuVar29 = pppppppuVar21;
      ppppppuVar5 = ppppppuVar32;
      if (-1 < (char)bVar8) {
        pppppppuVar29 = pppppppuVar25;
        ppppppuVar5 = (ulong ******)(ulong)bVar8;
      }
      ppppppuVar4 = ppppppuVar5;
      if (ppppppuVar31 <= ppppppuVar5) {
        ppppppuVar4 = ppppppuVar31;
      }
      iVar13 = memcmp(pppppppuVar28,pppppppuVar29,(size_t)ppppppuVar4);
      if (iVar13 == 0) {
        bVar11 = ppppppuVar5 <= ppppppuVar31;
        if ((ppppppuVar31 == ppppppuVar5) &&
           (bVar11 = *(byte *)((long)pppppppuVar25 + 0x1c) <= *(byte *)((long)pppppppuVar24 + 0x1c),
           *(byte *)((long)pppppppuVar24 + 0x1c) == *(byte *)((long)pppppppuVar25 + 0x1c))) {
          if (*(int *)(pppppppuVar25 + 3) <= *(int *)(pppppppuVar24 + 3)) {
LAB_0066b558:
            ppppppuStack_78 = (ulong ******)&DAT_aaaaaaaaaaaaaaaa;
            local_80 = (ulong *******)&DAT_aaaaaaaaaaaaaaaa;
            local_68 = &DAT_aaaaaaaaaaaaaaaa;
            local_70 = (ulong ******)&DAT_aaaaaaaaaaaaaaaa;
            if ((char)bVar8 < '\0') {
              FUN_005478d8(&local_80,pppppppuVar21,ppppppuVar32);
            }
            else {
              local_70 = pppppppuVar25[2];
              ppppppuStack_78 = pppppppuVar25[1];
              local_80 = (ulong *******)*pppppppuVar25;
            }
            local_68 = (undefined1 *)
                       CONCAT44(CONCAT31(local_68._5_3_,*(undefined1 *)((long)pppppppuVar25 + 0x1c))
                                ,*(undefined4 *)(pppppppuVar25 + 3));
            uVar17 = uVar15;
LAB_0066b614:
            do {
              pppppppuVar24 = param_1 + uVar30 * 4;
              pppppppuVar25 = param_1 + uVar17 * 4;
              if (uVar17 * 0x20 + uVar30 * -0x20 != 0) {
                bVar8 = *(byte *)((long)pppppppuVar24 + 0x17);
                if (*(char *)((long)pppppppuVar25 + 0x17) < '\0') {
                  ppppppuVar31 = pppppppuVar24[1];
                  pppppppuVar21 = (ulong *******)*pppppppuVar24;
                  if (-1 < (char)bVar8) {
                    ppppppuVar31 = (ulong ******)(ulong)bVar8;
                    pppppppuVar21 = pppppppuVar24;
                  }
                  FUN_00547f08(pppppppuVar25,pppppppuVar21,ppppppuVar31);
                }
                else if ((char)bVar8 < '\0') {
                  FUN_00547fc0(pppppppuVar25,*pppppppuVar24,pppppppuVar24[1]);
                }
                else {
                  ppppppuVar32 = pppppppuVar24[1];
                  ppppppuVar31 = *pppppppuVar24;
                  pppppppuVar25[2] = pppppppuVar24[2];
                  pppppppuVar25[1] = ppppppuVar32;
                  *pppppppuVar25 = ppppppuVar31;
                }
              }
              pppppppuVar21 = pppppppuVar24 + 3;
              uVar7 = *(undefined4 *)pppppppuVar21;
              *(undefined1 *)((long)pppppppuVar25 + 0x1c) =
                   *(undefined1 *)((long)pppppppuVar24 + 0x1c);
              *(undefined4 *)(pppppppuVar25 + 3) = uVar7;
              if ((long)uVar16 < (long)uVar30) break;
              uVar2 = (uVar30 & 0x3fffffffffffffff) << 1 | 1;
              uVar17 = uVar30 * 2 + 2;
              uVar22 = uVar2;
              if ((long)uVar17 < (long)uVar26) {
                pppppppuVar25 = param_1 + uVar2 * 4;
                pppppppuVar28 = param_1 + uVar17 * 4;
                pppppppuVar29 = (ulong *******)*pppppppuVar25;
                ppppppuVar31 = pppppppuVar25[1];
                if (-1 < (char)*(byte *)((long)pppppppuVar25 + 0x17)) {
                  pppppppuVar29 = pppppppuVar25;
                  ppppppuVar31 = (ulong ******)(ulong)*(byte *)((long)pppppppuVar25 + 0x17);
                }
                pppppppuVar20 = (ulong *******)*pppppppuVar28;
                ppppppuVar32 = pppppppuVar28[1];
                if (-1 < (char)*(byte *)((long)pppppppuVar28 + 0x17)) {
                  pppppppuVar20 = pppppppuVar28;
                  ppppppuVar32 = (ulong ******)(ulong)*(byte *)((long)pppppppuVar28 + 0x17);
                }
                ppppppuVar5 = ppppppuVar32;
                if (ppppppuVar31 <= ppppppuVar32) {
                  ppppppuVar5 = ppppppuVar31;
                }
                uVar14 = memcmp(pppppppuVar29,pppppppuVar20,(size_t)ppppppuVar5);
                if (uVar14 == 0) {
                  if (ppppppuVar31 != ppppppuVar32) {
                    uVar14 = 0;
                    if (ppppppuVar31 < ppppppuVar32) {
                      uVar14 = 0xffffffff;
                    }
                    goto LAB_0066b5b0;
                  }
                  uVar14 = (uint)(*(byte *)((long)pppppppuVar25 + 0x1c) <
                                 *(byte *)((long)pppppppuVar28 + 0x1c));
                  if (*(byte *)((long)pppppppuVar25 + 0x1c) == *(byte *)((long)pppppppuVar28 + 0x1c)
                     ) {
                    uVar14 = (uint)(*(int *)(pppppppuVar25 + 3) < *(int *)(pppppppuVar28 + 3));
                  }
                }
                else {
LAB_0066b5b0:
                  uVar14 = uVar14 >> 0x1f;
                }
                uVar22 = uVar17;
                if (uVar14 == 0) {
                  uVar22 = uVar2;
                }
              }
              pppppppuVar25 = param_1 + uVar22 * 4;
              pppppppuVar28 = (ulong *******)*pppppppuVar25;
              ppppppuVar31 = pppppppuVar25[1];
              if (-1 < (char)*(byte *)((long)pppppppuVar25 + 0x17)) {
                pppppppuVar28 = pppppppuVar25;
                ppppppuVar31 = (ulong ******)(ulong)*(byte *)((long)pppppppuVar25 + 0x17);
              }
              pppppppuVar29 = local_80;
              ppppppuVar32 = ppppppuStack_78;
              if (-1 < (long)local_70) {
                pppppppuVar29 = (ulong *******)&local_80;
                ppppppuVar32 = (ulong ******)((ulong)local_70 >> 0x38);
              }
              ppppppuVar5 = ppppppuVar32;
              if (ppppppuVar31 <= ppppppuVar32) {
                ppppppuVar5 = ppppppuVar31;
              }
              iVar13 = memcmp(pppppppuVar28,pppppppuVar29,(size_t)ppppppuVar5);
              uVar17 = uVar30;
              uVar30 = uVar22;
              if (iVar13 == 0) {
                bVar11 = ppppppuVar32 <= ppppppuVar31;
                if (ppppppuVar31 == ppppppuVar32) {
                  bVar11 = local_68._4_1_ <= *(byte *)((long)pppppppuVar25 + 0x1c);
                  if (*(byte *)((long)pppppppuVar25 + 0x1c) == local_68._4_1_) {
                    if (*(int *)(pppppppuVar25 + 3) < (int)local_68) break;
                    goto LAB_0066b614;
                  }
                }
                if (!bVar11) break;
                goto LAB_0066b614;
              }
            } while (-1 < iVar13);
            if ((ulong ********)pppppppuVar24 != &local_80) {
              if (*(char *)((long)pppppppuVar24 + 0x17) < '\0') {
                ppppppuVar31 = ppppppuStack_78;
                pppppppuVar25 = local_80;
                if (-1 < (long)local_70) {
                  ppppppuVar31 = (ulong ******)((ulong)local_70 >> 0x38);
                  pppppppuVar25 = (ulong *******)&local_80;
                }
                FUN_00547f08(pppppppuVar24,pppppppuVar25,ppppppuVar31);
              }
              else {
                if (-1 < (long)local_70) {
                  pppppppuVar24[2] = local_70;
                  pppppppuVar24[1] = ppppppuStack_78;
                  *pppppppuVar24 = (ulong ******)local_80;
                  *(byte *)((long)pppppppuVar24 + 0x1c) = local_68._4_1_;
                  *(int *)pppppppuVar21 = (int)local_68;
                  goto LAB_0066b3f0;
                }
                FUN_00547fc0(pppppppuVar24,local_80,ppppppuStack_78);
              }
            }
            *(byte *)((long)pppppppuVar24 + 0x1c) = local_68._4_1_;
            *(int *)pppppppuVar21 = (int)local_68;
          }
        }
        else if (bVar11) goto LAB_0066b558;
      }
      else if (-1 < iVar13) goto LAB_0066b558;
    }
LAB_0066b3f0:
    bVar11 = uVar15 != 0;
    uVar15 = uVar15 - 1;
  } while (bVar11);
  do {
    ppppppuStack_98 = (ulong ******)&DAT_aaaaaaaaaaaaaaaa;
    local_a0 = (ulong *******)&DAT_aaaaaaaaaaaaaaaa;
    local_88 = &DAT_aaaaaaaaaaaaaaaa;
    local_90 = (ulong ******)&DAT_aaaaaaaaaaaaaaaa;
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      FUN_005478d8(&local_a0,*param_1,param_1[1]);
    }
    else {
      local_90 = param_1[2];
      ppppppuStack_98 = param_1[1];
      local_a0 = (ulong *******)*param_1;
    }
    local_88 = (undefined1 *)
               CONCAT44(CONCAT31(local_88._5_3_,*(undefined1 *)((long)param_1 + 0x1c)),
                        *(undefined4 *)(param_1 + 3));
    pppppppuVar24 = param_1;
    uVar15 = 0;
    do {
      uVar17 = uVar15 << 1 | 1;
      uVar16 = uVar15 * 2 + 2;
      pppppppuVar25 = pppppppuVar24 + uVar15 * 4 + 4;
      if ((long)uVar16 < (long)uVar26) {
        pppppppuVar28 = pppppppuVar24 + uVar15 * 4 + 8;
        bVar9 = *(byte *)((long)pppppppuVar24 + uVar15 * 0x20 + 0x37);
        bVar8 = *(byte *)((long)pppppppuVar24 + uVar15 * 0x20 + 0x57);
        pppppppuVar21 = (ulong *******)pppppppuVar24[uVar15 * 4 + 4];
        ppppppuVar31 = pppppppuVar24[uVar15 * 4 + 5];
        if (-1 < (char)bVar9) {
          pppppppuVar21 = pppppppuVar25;
          ppppppuVar31 = (ulong ******)(ulong)bVar9;
        }
        pppppppuVar29 = (ulong *******)*pppppppuVar28;
        ppppppuVar32 = pppppppuVar24[uVar15 * 4 + 9];
        if (-1 < (char)bVar8) {
          pppppppuVar29 = pppppppuVar28;
          ppppppuVar32 = (ulong ******)(ulong)bVar8;
        }
        ppppppuVar5 = ppppppuVar32;
        if (ppppppuVar31 <= ppppppuVar32) {
          ppppppuVar5 = ppppppuVar31;
        }
        iVar13 = memcmp(pppppppuVar21,pppppppuVar29,(size_t)ppppppuVar5);
        if (iVar13 == 0) {
          if (ppppppuVar31 == ppppppuVar32) {
            bVar8 = *(byte *)((long)pppppppuVar24 + uVar15 * 0x20 + 0x3c);
            bVar9 = *(byte *)((long)pppppppuVar24 + uVar15 * 0x20 + 0x5c);
            if (bVar8 == bVar9) {
              if (*(int *)(pppppppuVar24 + uVar15 * 4 + 7) <
                  *(int *)(pppppppuVar24 + uVar15 * 4 + 0xb)) {
LAB_0066bb68:
                pppppppuVar25 = pppppppuVar28;
                uVar17 = uVar16;
              }
            }
            else if (bVar8 < bVar9) goto LAB_0066bb68;
          }
          else if (ppppppuVar31 < ppppppuVar32) goto LAB_0066bb68;
        }
        else if (iVar13 < 0) goto LAB_0066bb68;
      }
      if (pppppppuVar24 != pppppppuVar25) {
        bVar8 = *(byte *)((long)pppppppuVar25 + 0x17);
        if (*(char *)((long)pppppppuVar24 + 0x17) < '\0') {
          ppppppuVar31 = pppppppuVar25[1];
          pppppppuVar21 = (ulong *******)*pppppppuVar25;
          if (-1 < (char)bVar8) {
            ppppppuVar31 = (ulong ******)(ulong)bVar8;
            pppppppuVar21 = pppppppuVar25;
          }
          FUN_00547f08(pppppppuVar24,pppppppuVar21,ppppppuVar31);
        }
        else if ((char)bVar8 < '\0') {
          FUN_00547fc0(pppppppuVar24,*pppppppuVar25,pppppppuVar25[1]);
        }
        else {
          ppppppuVar32 = pppppppuVar25[1];
          ppppppuVar31 = *pppppppuVar25;
          pppppppuVar24[2] = pppppppuVar25[2];
          pppppppuVar24[1] = ppppppuVar32;
          *pppppppuVar24 = ppppppuVar31;
        }
      }
      pppppppuVar21 = pppppppuVar25 + 3;
      iVar13 = *(int *)pppppppuVar21;
      *(undefined1 *)((long)pppppppuVar24 + 0x1c) = *(undefined1 *)((long)pppppppuVar25 + 0x1c);
      *(int *)(pppppppuVar24 + 3) = iVar13;
      pppppppuVar24 = pppppppuVar25;
      uVar15 = uVar17;
    } while ((long)uVar17 <= (long)(uVar26 - 2 >> 1));
    pppppppuVar24 = param_2 + -4;
    if (pppppppuVar25 == pppppppuVar24) {
      if ((ulong ********)pppppppuVar25 != &local_a0) {
        if (*(char *)((long)pppppppuVar25 + 0x17) < '\0') {
          ppppppuVar31 = ppppppuStack_98;
          pppppppuVar28 = local_a0;
          if (-1 < (long)local_90) {
            ppppppuVar31 = (ulong ******)((ulong)local_90 >> 0x38);
            pppppppuVar28 = (ulong *******)&local_a0;
          }
          FUN_00547f08(pppppppuVar25,pppppppuVar28,ppppppuVar31);
        }
        else if ((long)local_90 < 0) {
          FUN_00547fc0(pppppppuVar25,local_a0,ppppppuStack_98);
        }
        else {
          pppppppuVar25[2] = local_90;
          pppppppuVar25[1] = ppppppuStack_98;
          *pppppppuVar25 = (ulong ******)local_a0;
        }
      }
      *(undefined1 *)((long)pppppppuVar25 + 0x1c) = local_88._4_1_;
      *(int *)pppppppuVar21 = (int)local_88;
    }
    else {
      bVar8 = *(byte *)((long)param_2 + -9);
      if (*(char *)((long)pppppppuVar25 + 0x17) < '\0') {
        ppppppuVar31 = param_2[-3];
        pppppppuVar28 = (ulong *******)param_2[-4];
        if (-1 < (char)bVar8) {
          ppppppuVar31 = (ulong ******)(ulong)bVar8;
          pppppppuVar28 = pppppppuVar24;
        }
        FUN_00547f08(pppppppuVar25,pppppppuVar28,ppppppuVar31);
      }
      else if ((char)bVar8 < '\0') {
        FUN_00547fc0(pppppppuVar25,param_2[-4],param_2[-3]);
      }
      else {
        ppppppuVar32 = param_2[-3];
        ppppppuVar31 = *pppppppuVar24;
        pppppppuVar25[2] = param_2[-2];
        pppppppuVar25[1] = ppppppuVar32;
        *pppppppuVar25 = ppppppuVar31;
      }
      iVar13 = *(int *)(param_2 + -1);
      *(undefined1 *)((long)pppppppuVar25 + 0x1c) = *(undefined1 *)((long)param_2 + -4);
      *(int *)pppppppuVar21 = iVar13;
      if ((ulong ********)pppppppuVar24 != &local_a0) {
        if ((long)local_90 < 0) {
          FUN_00547fc0(pppppppuVar24,local_a0,ppppppuStack_98);
        }
        else {
          param_2[-2] = local_90;
          param_2[-3] = ppppppuStack_98;
          *pppppppuVar24 = (ulong ******)local_a0;
        }
      }
      lVar19 = (long)pppppppuVar25 + (0x20 - (long)param_1) >> 5;
      *(undefined1 *)((long)param_2 + -4) = local_88._4_1_;
      *(int *)(param_2 + -1) = (int)local_88;
      if (1 < lVar19) {
        uVar15 = lVar19 - 2U >> 1;
        bVar8 = *(byte *)((long)pppppppuVar25 + 0x17);
        pppppppuVar28 = param_1 + uVar15 * 4;
        pppppppuVar29 = (ulong *******)*pppppppuVar25;
        ppppppuVar32 = pppppppuVar25[1];
        ppppppuVar31 = pppppppuVar28[1];
        pppppppuVar20 = (ulong *******)*pppppppuVar28;
        if (-1 < (char)*(byte *)((long)pppppppuVar28 + 0x17)) {
          ppppppuVar31 = (ulong ******)(ulong)*(byte *)((long)pppppppuVar28 + 0x17);
          pppppppuVar20 = pppppppuVar28;
        }
        pppppppuVar3 = pppppppuVar29;
        ppppppuVar5 = ppppppuVar32;
        if (-1 < (char)bVar8) {
          pppppppuVar3 = pppppppuVar25;
          ppppppuVar5 = (ulong ******)(ulong)bVar8;
        }
        ppppppuVar4 = ppppppuVar5;
        if (ppppppuVar31 <= ppppppuVar5) {
          ppppppuVar4 = ppppppuVar31;
        }
        iVar13 = memcmp(pppppppuVar20,pppppppuVar3,(size_t)ppppppuVar4);
        if (iVar13 == 0) {
          if (ppppppuVar31 == ppppppuVar5) {
            if (*(byte *)((long)pppppppuVar28 + 0x1c) == *(byte *)((long)pppppppuVar25 + 0x1c)) {
              if (*(int *)(pppppppuVar28 + 3) < *(int *)pppppppuVar21) {
LAB_0066be20:
                ppppppuStack_78 = (ulong ******)&DAT_aaaaaaaaaaaaaaaa;
                local_80 = (ulong *******)&DAT_aaaaaaaaaaaaaaaa;
                local_68 = &DAT_aaaaaaaaaaaaaaaa;
                local_70 = (ulong ******)&DAT_aaaaaaaaaaaaaaaa;
                if ((char)bVar8 < '\0') {
                  FUN_005478d8(&local_80,pppppppuVar29,ppppppuVar32);
                }
                else {
                  local_70 = pppppppuVar25[2];
                  ppppppuStack_78 = pppppppuVar25[1];
                  local_80 = (ulong *******)*pppppppuVar25;
                }
                local_68 = (undefined1 *)
                           CONCAT44(CONCAT31(local_68._5_3_,
                                             *(undefined1 *)((long)pppppppuVar25 + 0x1c)),
                                    *(int *)pppppppuVar21);
                do {
                  while( true ) {
                    while( true ) {
                      pppppppuVar21 = pppppppuVar28;
                      if (pppppppuVar25 != pppppppuVar21) {
                        bVar8 = *(byte *)((long)pppppppuVar21 + 0x17);
                        if (*(char *)((long)pppppppuVar25 + 0x17) < '\0') {
                          ppppppuVar31 = pppppppuVar21[1];
                          pppppppuVar28 = (ulong *******)*pppppppuVar21;
                          if (-1 < (char)bVar8) {
                            ppppppuVar31 = (ulong ******)(ulong)bVar8;
                            pppppppuVar28 = pppppppuVar21;
                          }
                          FUN_00547f08(pppppppuVar25,pppppppuVar28,ppppppuVar31);
                        }
                        else if ((char)bVar8 < '\0') {
                          FUN_00547fc0(pppppppuVar25,*pppppppuVar21,pppppppuVar21[1]);
                        }
                        else {
                          ppppppuVar32 = pppppppuVar21[1];
                          ppppppuVar31 = *pppppppuVar21;
                          pppppppuVar25[2] = pppppppuVar21[2];
                          pppppppuVar25[1] = ppppppuVar32;
                          *pppppppuVar25 = ppppppuVar31;
                        }
                      }
                      pppppppuVar29 = pppppppuVar21 + 3;
                      uVar7 = *(undefined4 *)pppppppuVar29;
                      *(undefined1 *)((long)pppppppuVar25 + 0x1c) =
                           *(undefined1 *)((long)pppppppuVar21 + 0x1c);
                      *(undefined4 *)(pppppppuVar25 + 3) = uVar7;
                      if (uVar15 == 0) goto LAB_0066bf68;
                      uVar15 = uVar15 - 1 >> 1;
                      pppppppuVar28 = param_1 + uVar15 * 4;
                      pppppppuVar25 = (ulong *******)*pppppppuVar28;
                      ppppppuVar31 = pppppppuVar28[1];
                      if (-1 < (char)*(byte *)((long)pppppppuVar28 + 0x17)) {
                        pppppppuVar25 = pppppppuVar28;
                        ppppppuVar31 = (ulong ******)(ulong)*(byte *)((long)pppppppuVar28 + 0x17);
                      }
                      pppppppuVar20 = local_80;
                      ppppppuVar32 = ppppppuStack_78;
                      if (-1 < (long)local_70) {
                        pppppppuVar20 = (ulong *******)&local_80;
                        ppppppuVar32 = (ulong ******)((ulong)local_70 >> 0x38);
                      }
                      ppppppuVar5 = ppppppuVar32;
                      if (ppppppuVar31 <= ppppppuVar32) {
                        ppppppuVar5 = ppppppuVar31;
                      }
                      iVar13 = memcmp(pppppppuVar25,pppppppuVar20,(size_t)ppppppuVar5);
                      pppppppuVar25 = pppppppuVar21;
                      if (iVar13 == 0) break;
                      if (-1 < iVar13) goto LAB_0066bf68;
                    }
                    bVar11 = ppppppuVar32 <= ppppppuVar31;
                    if (ppppppuVar31 == ppppppuVar32) break;
LAB_0066bf60:
                    if (bVar11) goto LAB_0066bf68;
                  }
                  bVar11 = local_68._4_1_ <= *(byte *)((long)pppppppuVar28 + 0x1c);
                  if (*(byte *)((long)pppppppuVar28 + 0x1c) != local_68._4_1_) goto LAB_0066bf60;
                } while (*(int *)(pppppppuVar28 + 3) < (int)local_68);
LAB_0066bf68:
                if ((ulong ********)pppppppuVar21 != &local_80) {
                  if (*(char *)((long)pppppppuVar21 + 0x17) < '\0') {
                    ppppppuVar31 = ppppppuStack_78;
                    pppppppuVar25 = local_80;
                    if (-1 < (long)local_70) {
                      ppppppuVar31 = (ulong ******)((ulong)local_70 >> 0x38);
                      pppppppuVar25 = (ulong *******)&local_80;
                    }
                    FUN_00547f08(pppppppuVar21,pppppppuVar25,ppppppuVar31);
                  }
                  else {
                    if (-1 < (long)local_70) {
                      pppppppuVar21[2] = local_70;
                      pppppppuVar21[1] = ppppppuStack_78;
                      *pppppppuVar21 = (ulong ******)local_80;
                      *(byte *)((long)pppppppuVar21 + 0x1c) = local_68._4_1_;
                      *(int *)pppppppuVar29 = (int)local_68;
                      goto LAB_0066be00;
                    }
                    FUN_00547fc0(pppppppuVar21,local_80,ppppppuStack_78);
                  }
                }
                *(int *)pppppppuVar29 = (int)local_68;
                *(byte *)((long)pppppppuVar21 + 0x1c) = local_68._4_1_;
              }
            }
            else if (*(byte *)((long)pppppppuVar28 + 0x1c) < *(byte *)((long)pppppppuVar25 + 0x1c))
            goto LAB_0066be20;
          }
          else if (ppppppuVar31 < ppppppuVar5) goto LAB_0066be20;
        }
        else if (iVar13 < 0) goto LAB_0066be20;
      }
    }
LAB_0066be00:
    if ((long)local_90 < 0) {
      operator_delete(local_a0);
    }
    bVar11 = (long)uVar26 < 3;
    uVar26 = uVar26 - 1;
    param_2 = pppppppuVar24;
    if (bVar11) {
      return;
    }
  } while( true );
LAB_0066aa8c:
  pppppppuVar21 = (ulong *******)((long)param_1 + lVar19 + 0x20);
  pppppppuVar28 = param_2;
  if (lVar19 == 0) {
    pppppppuVar20 = param_2;
    if (pppppppuVar21 < param_2) {
      pppppppuVar28 = param_2 + -4;
      do {
        while( true ) {
          pppppppuVar20 = pppppppuVar28;
          pppppppuVar28 = (ulong *******)*pppppppuVar20;
          ppppppuVar32 = pppppppuVar20[1];
          if (-1 < (char)*(byte *)((long)pppppppuVar20 + 0x17)) {
            pppppppuVar28 = pppppppuVar20;
            ppppppuVar32 = (ulong ******)(ulong)*(byte *)((long)pppppppuVar20 + 0x17);
          }
          ppppppuVar5 = ppppppuVar31;
          if (ppppppuVar32 <= ppppppuVar31) {
            ppppppuVar5 = ppppppuVar32;
          }
          iVar12 = memcmp(pppppppuVar28,pppppppuVar24,(size_t)ppppppuVar5);
          pppppppuVar28 = pppppppuVar20 + -4;
          if (iVar12 == 0) break;
joined_r0x0066ab5c:
          if ((pppppppuVar20 <= pppppppuVar21) || (iVar12 < 0)) goto LAB_0066abb8;
        }
        if (ppppppuVar32 != ppppppuVar31) {
          if (ppppppuVar31 <= ppppppuVar32) {
            iVar12 = 1;
            goto joined_r0x0066ab5c;
          }
          break;
        }
        if (*(byte *)((long)pppppppuVar20 + 0x1c) == bVar8) {
          if ((pppppppuVar20 <= pppppppuVar21) || (*(int *)(pppppppuVar20 + 3) < iVar13)) break;
        }
        else if ((pppppppuVar20 <= pppppppuVar21) || (*(byte *)((long)pppppppuVar20 + 0x1c) < bVar8)
                ) break;
      } while( true );
    }
  }
  else {
    do {
      while( true ) {
        if (pppppppuVar28 == param_1) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__algorithm/sort.h:615: libc++ Hardening assertion __last != __begin failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                    );
        }
        pppppppuVar20 = pppppppuVar28 + -4;
        pppppppuVar29 = (ulong *******)*pppppppuVar20;
        ppppppuVar32 = pppppppuVar28[-3];
        if (-1 < (char)*(byte *)((long)pppppppuVar28 + -9)) {
          pppppppuVar29 = pppppppuVar20;
          ppppppuVar32 = (ulong ******)(ulong)*(byte *)((long)pppppppuVar28 + -9);
        }
        ppppppuVar5 = ppppppuVar31;
        if (ppppppuVar32 <= ppppppuVar31) {
          ppppppuVar5 = ppppppuVar32;
        }
        iVar12 = memcmp(pppppppuVar29,pppppppuVar24,(size_t)ppppppuVar5);
        if (iVar12 != 0) break;
        bVar11 = ppppppuVar31 <= ppppppuVar32;
        if ((ppppppuVar32 == ppppppuVar31) &&
           (bVar11 = bVar8 <= *(byte *)((long)pppppppuVar28 + -4),
           *(byte *)((long)pppppppuVar28 + -4) == bVar8)) {
          pppppppuVar29 = pppppppuVar28 + -1;
          pppppppuVar28 = pppppppuVar20;
          if (*(int *)pppppppuVar29 < iVar13) goto LAB_0066abb8;
        }
        else {
          pppppppuVar28 = pppppppuVar20;
          if (!bVar11) goto LAB_0066abb8;
        }
      }
      pppppppuVar28 = pppppppuVar20;
    } while (-1 < iVar12);
  }
LAB_0066abb8:
  pppppppuVar24 = pppppppuVar21;
  pppppppuVar28 = pppppppuVar20;
  if (pppppppuVar21 < pppppppuVar20) {
LAB_0066abdc:
    FUN_0066ce88(pppppppuVar24,pppppppuVar28);
    pppppppuVar24 = pppppppuVar24 + 4;
    if (pppppppuVar24 == param_2) {
LAB_0066b2b8:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__algorithm/sort.h:633: libc++ Hardening assertion __first != __end failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                );
    }
    bVar8 = local_68._4_1_;
    iVar13 = (int)local_68;
    pppppppuVar29 = local_80;
    ppppppuVar31 = ppppppuStack_78;
    if (-1 < (long)local_70) {
      pppppppuVar29 = (ulong *******)&local_80;
      ppppppuVar31 = (ulong ******)((ulong)local_70 >> 0x38);
    }
    do {
      pppppppuVar3 = (ulong *******)*pppppppuVar24;
      ppppppuVar32 = pppppppuVar24[1];
      if (-1 < (char)*(byte *)((long)pppppppuVar24 + 0x17)) {
        pppppppuVar3 = pppppppuVar24;
        ppppppuVar32 = (ulong ******)(ulong)*(byte *)((long)pppppppuVar24 + 0x17);
      }
      ppppppuVar5 = ppppppuVar31;
      if (ppppppuVar32 <= ppppppuVar31) {
        ppppppuVar5 = ppppppuVar32;
      }
      iVar12 = memcmp(pppppppuVar3,pppppppuVar29,(size_t)ppppppuVar5);
      if (iVar12 == 0) {
        bVar11 = ppppppuVar31 <= ppppppuVar32;
        if ((ppppppuVar32 == ppppppuVar31) &&
           (bVar11 = bVar8 <= *(byte *)((long)pppppppuVar24 + 0x1c),
           *(byte *)((long)pppppppuVar24 + 0x1c) == bVar8)) {
          if (iVar13 <= *(int *)(pppppppuVar24 + 3)) goto joined_r0x0066ac84;
        }
        else if (bVar11) goto joined_r0x0066ac84;
      }
      else if (-1 < iVar12) goto joined_r0x0066ac84;
      pppppppuVar24 = pppppppuVar24 + 4;
      if (pppppppuVar24 == param_2) goto LAB_0066b2b8;
    } while( true );
  }
LAB_0066acfc:
  pppppppuVar28 = pppppppuVar24 + -4;
  if (param_1 != pppppppuVar28) {
    bVar8 = *(byte *)((long)pppppppuVar24 + -9);
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      ppppppuVar31 = pppppppuVar24[-3];
      pppppppuVar29 = (ulong *******)pppppppuVar24[-4];
      if (-1 < (char)bVar8) {
        ppppppuVar31 = (ulong ******)(ulong)bVar8;
        pppppppuVar29 = pppppppuVar28;
      }
      FUN_00547f08(param_1,pppppppuVar29,ppppppuVar31);
    }
    else if ((char)bVar8 < '\0') {
      FUN_00547fc0(param_1,pppppppuVar24[-4],pppppppuVar24[-3]);
    }
    else {
      ppppppuVar32 = pppppppuVar24[-3];
      ppppppuVar31 = *pppppppuVar28;
      param_1[2] = pppppppuVar24[-2];
      param_1[1] = ppppppuVar32;
      *param_1 = ppppppuVar31;
    }
    iVar13 = *(int *)(pppppppuVar24 + -1);
    *(undefined1 *)((long)param_1 + 0x1c) = *(undefined1 *)((long)pppppppuVar24 + -4);
    *(int *)(param_1 + 3) = iVar13;
  }
  if ((ulong ********)pppppppuVar28 != &local_80) {
    if ((long)local_70 < 0) {
      FUN_00547fc0(pppppppuVar24 + -4,local_80,ppppppuStack_78);
    }
    else {
      pppppppuVar24[-2] = local_70;
      pppppppuVar24[-3] = ppppppuStack_78;
      *pppppppuVar28 = (ulong ******)local_80;
    }
  }
  *(byte *)((long)pppppppuVar24 + -4) = local_68._4_1_;
  *(int *)(pppppppuVar24 + -1) = (int)local_68;
  if (pppppppuVar20 <= pppppppuVar21) {
    uVar26 = FUN_0066ca60(param_1,pppppppuVar24 + -4);
    uVar15 = FUN_0066ca60(pppppppuVar24,param_2);
    if ((uVar15 & 1) != 0) goto LAB_0066b2ac;
    if ((uVar26 & 1) != 0) goto LAB_0066a844;
  }
  FUN_0066a7fc(param_1,pppppppuVar24 + -4,param_3,param_4 & 1);
  param_4 = 0;
  goto LAB_0066a844;
  while (pppppppuVar28 = pppppppuVar27, bVar11) {
joined_r0x0066ac84:
    if (pppppppuVar28 == param_1) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__algorithm/sort.h:638: libc++ Hardening assertion __last != __begin failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                );
    }
    pppppppuVar27 = pppppppuVar28 + -4;
    pppppppuVar3 = (ulong *******)*pppppppuVar27;
    ppppppuVar32 = pppppppuVar28[-3];
    if (-1 < (char)*(byte *)((long)pppppppuVar28 + -9)) {
      pppppppuVar3 = pppppppuVar27;
      ppppppuVar32 = (ulong ******)(ulong)*(byte *)((long)pppppppuVar28 + -9);
    }
    ppppppuVar5 = ppppppuVar31;
    if (ppppppuVar32 <= ppppppuVar31) {
      ppppppuVar5 = ppppppuVar32;
    }
    iVar12 = memcmp(pppppppuVar3,pppppppuVar29,(size_t)ppppppuVar5);
    if (iVar12 != 0) {
      pppppppuVar28 = pppppppuVar27;
      if (iVar12 < 0) break;
      goto joined_r0x0066ac84;
    }
    bVar11 = ppppppuVar31 <= ppppppuVar32;
    if ((ppppppuVar32 == ppppppuVar31) &&
       (bVar11 = bVar8 <= *(byte *)((long)pppppppuVar28 + -4),
       *(byte *)((long)pppppppuVar28 + -4) == bVar8)) {
      pppppppuVar3 = pppppppuVar28 + -1;
      pppppppuVar28 = pppppppuVar27;
      if (*(int *)pppppppuVar3 < iVar13) break;
      goto joined_r0x0066ac84;
    }
  }
  pppppppuVar28 = pppppppuVar27;
  if (pppppppuVar27 <= pppppppuVar24) goto LAB_0066acfc;
  goto LAB_0066abdc;
LAB_0066b2ac:
  param_2 = pppppppuVar28;
  if ((uVar26 & 1) != 0) {
    return;
  }
  goto LAB_0066a834;
  while (pppppppuVar29 = pppppppuVar28, !bVar11) {
joined_r0x0066b138:
    if (pppppppuVar29 == param_1) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__algorithm/sort.h:697: libc++ Hardening assertion __last != __begin failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                );
    }
    pppppppuVar28 = pppppppuVar29 + -4;
    pppppppuVar20 = (ulong *******)*pppppppuVar28;
    ppppppuVar32 = pppppppuVar29[-3];
    if (-1 < (char)*(byte *)((long)pppppppuVar29 + -9)) {
      pppppppuVar20 = pppppppuVar28;
      ppppppuVar32 = (ulong ******)(ulong)*(byte *)((long)pppppppuVar29 + -9);
    }
    ppppppuVar5 = ppppppuVar32;
    if (ppppppuVar31 <= ppppppuVar32) {
      ppppppuVar5 = ppppppuVar31;
    }
    iVar12 = memcmp(pppppppuVar21,pppppppuVar20,(size_t)ppppppuVar5);
    if (iVar12 != 0) {
      pppppppuVar29 = pppppppuVar28;
      if (-1 < iVar12) break;
      goto joined_r0x0066b138;
    }
    bVar11 = ppppppuVar32 <= ppppppuVar31;
    if ((ppppppuVar31 == ppppppuVar32) &&
       (bVar11 = *(byte *)((long)pppppppuVar29 + -4) <= bVar8,
       bVar8 == *(byte *)((long)pppppppuVar29 + -4))) {
      pppppppuVar20 = pppppppuVar29 + -1;
      pppppppuVar29 = pppppppuVar28;
      if (*(int *)pppppppuVar20 <= iVar13) break;
      goto joined_r0x0066b138;
    }
  }
  goto LAB_0066b1ac;
}


// ===== 0066c358  FUN_0066c358 =====

void FUN_0066c358(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  size_t sVar3;
  ulong uVar4;
  ulong uVar5;
  bool bVar6;
  int iVar7;
  
  puVar1 = (undefined8 *)*param_2;
  uVar4 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    puVar1 = param_2;
    uVar4 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  puVar2 = (undefined8 *)*param_1;
  uVar5 = param_1[1];
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    puVar2 = param_1;
    uVar5 = (ulong)*(byte *)((long)param_1 + 0x17);
  }
  sVar3 = uVar5;
  if (uVar4 <= uVar5) {
    sVar3 = uVar4;
  }
  iVar7 = memcmp(puVar1,puVar2,sVar3);
  if (iVar7 == 0) {
    bVar6 = uVar5 <= uVar4;
    if ((uVar4 != uVar5) ||
       (bVar6 = *(byte *)((long)param_1 + 0x1c) <= *(byte *)((long)param_2 + 0x1c),
       *(byte *)((long)param_2 + 0x1c) != *(byte *)((long)param_1 + 0x1c))) {
      if (bVar6) goto LAB_0066c42c;
      goto LAB_0066c3c4;
    }
    if (*(int *)(param_2 + 3) < *(int *)(param_1 + 3)) goto LAB_0066c3c4;
LAB_0066c42c:
    puVar2 = (undefined8 *)*param_3;
    uVar5 = param_3[1];
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      puVar2 = param_3;
      uVar5 = (ulong)*(byte *)((long)param_3 + 0x17);
    }
    sVar3 = uVar4;
    if (uVar5 <= uVar4) {
      sVar3 = uVar5;
    }
    iVar7 = memcmp(puVar2,puVar1,sVar3);
    if (iVar7 == 0) {
      bVar6 = uVar4 <= uVar5;
      if ((uVar5 == uVar4) &&
         (bVar6 = *(byte *)((long)param_2 + 0x1c) <= *(byte *)((long)param_3 + 0x1c),
         *(byte *)((long)param_3 + 0x1c) == *(byte *)((long)param_2 + 0x1c))) {
        if (*(int *)(param_2 + 3) <= *(int *)(param_3 + 3)) {
          return;
        }
      }
      else if (bVar6) {
        return;
      }
    }
    else if (-1 < iVar7) {
      return;
    }
    FUN_0066ce88(param_2,param_3);
    puVar1 = (undefined8 *)*param_2;
    uVar4 = param_2[1];
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      puVar1 = param_2;
      uVar4 = (ulong)*(byte *)((long)param_2 + 0x17);
    }
    puVar2 = (undefined8 *)*param_1;
    uVar5 = param_1[1];
    if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
      puVar2 = param_1;
      uVar5 = (ulong)*(byte *)((long)param_1 + 0x17);
    }
    sVar3 = uVar5;
    if (uVar4 <= uVar5) {
      sVar3 = uVar4;
    }
    iVar7 = memcmp(puVar1,puVar2,sVar3);
    param_3 = param_2;
    if (iVar7 == 0) {
      bVar6 = uVar5 <= uVar4;
      if ((uVar4 == uVar5) &&
         (bVar6 = *(byte *)((long)param_1 + 0x1c) <= *(byte *)((long)param_2 + 0x1c),
         *(byte *)((long)param_2 + 0x1c) == *(byte *)((long)param_1 + 0x1c))) {
        if (*(int *)(param_1 + 3) <= *(int *)(param_2 + 3)) {
          return;
        }
        goto LAB_0066c5dc;
      }
      goto joined_r0x0066c5d0;
    }
  }
  else {
    if (-1 < iVar7) goto LAB_0066c42c;
LAB_0066c3c4:
    puVar2 = (undefined8 *)*param_3;
    uVar5 = param_3[1];
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      puVar2 = param_3;
      uVar5 = (ulong)*(byte *)((long)param_3 + 0x17);
    }
    sVar3 = uVar4;
    if (uVar5 <= uVar4) {
      sVar3 = uVar5;
    }
    iVar7 = memcmp(puVar2,puVar1,sVar3);
    if (iVar7 == 0) {
      bVar6 = uVar4 <= uVar5;
      if ((uVar5 == uVar4) &&
         (bVar6 = *(byte *)((long)param_2 + 0x1c) <= *(byte *)((long)param_3 + 0x1c),
         *(byte *)((long)param_3 + 0x1c) == *(byte *)((long)param_2 + 0x1c))) {
        if (*(int *)(param_3 + 3) < *(int *)(param_2 + 3)) goto LAB_0066c5dc;
      }
      else if (!bVar6) goto LAB_0066c5dc;
    }
    else if (iVar7 < 0) goto LAB_0066c5dc;
    FUN_0066ce88(param_1,param_2);
    puVar1 = (undefined8 *)*param_3;
    uVar4 = param_3[1];
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      puVar1 = param_3;
      uVar4 = (ulong)*(byte *)((long)param_3 + 0x17);
    }
    puVar2 = (undefined8 *)*param_2;
    uVar5 = param_2[1];
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      puVar2 = param_2;
      uVar5 = (ulong)*(byte *)((long)param_2 + 0x17);
    }
    sVar3 = uVar5;
    if (uVar4 <= uVar5) {
      sVar3 = uVar4;
    }
    iVar7 = memcmp(puVar1,puVar2,sVar3);
    param_1 = param_2;
    if (iVar7 == 0) {
      bVar6 = uVar5 <= uVar4;
      if ((uVar4 == uVar5) &&
         (bVar6 = *(byte *)((long)param_2 + 0x1c) <= *(byte *)((long)param_3 + 0x1c),
         *(byte *)((long)param_3 + 0x1c) == *(byte *)((long)param_2 + 0x1c))) {
        if (*(int *)(param_2 + 3) <= *(int *)(param_3 + 3)) {
          return;
        }
        goto LAB_0066c5dc;
      }
joined_r0x0066c5d0:
      if (bVar6) {
        return;
      }
      goto LAB_0066c5dc;
    }
  }
  if (-1 < iVar7) {
    return;
  }
LAB_0066c5dc:
  FUN_0066ce88(param_1,param_3);
  return;
}


// ===== 0066c60c  FUN_0066c60c =====

void FUN_0066c60c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  size_t sVar3;
  ulong uVar4;
  ulong uVar5;
  bool bVar6;
  int iVar7;
  
  FUN_0066c358();
  puVar1 = (undefined8 *)*param_4;
  uVar4 = param_4[1];
  if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
    puVar1 = param_4;
    uVar4 = (ulong)*(byte *)((long)param_4 + 0x17);
  }
  puVar2 = (undefined8 *)*param_3;
  uVar5 = param_3[1];
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    puVar2 = param_3;
    uVar5 = (ulong)*(byte *)((long)param_3 + 0x17);
  }
  sVar3 = uVar5;
  if (uVar4 <= uVar5) {
    sVar3 = uVar4;
  }
  iVar7 = memcmp(puVar1,puVar2,sVar3);
  if (iVar7 == 0) {
    bVar6 = uVar5 <= uVar4;
    if ((uVar4 == uVar5) &&
       (bVar6 = *(byte *)((long)param_3 + 0x1c) <= *(byte *)((long)param_4 + 0x1c),
       *(byte *)((long)param_4 + 0x1c) == *(byte *)((long)param_3 + 0x1c))) {
      if (*(int *)(param_3 + 3) <= *(int *)(param_4 + 3)) {
        return;
      }
    }
    else if (bVar6) {
      return;
    }
  }
  else if (-1 < iVar7) {
    return;
  }
  FUN_0066ce88(param_3,param_4);
  puVar1 = (undefined8 *)*param_3;
  uVar4 = param_3[1];
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    puVar1 = param_3;
    uVar4 = (ulong)*(byte *)((long)param_3 + 0x17);
  }
  puVar2 = (undefined8 *)*param_2;
  uVar5 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    puVar2 = param_2;
    uVar5 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  sVar3 = uVar5;
  if (uVar4 <= uVar5) {
    sVar3 = uVar4;
  }
  iVar7 = memcmp(puVar1,puVar2,sVar3);
  if (iVar7 == 0) {
    bVar6 = uVar5 <= uVar4;
    if ((uVar4 == uVar5) &&
       (bVar6 = *(byte *)((long)param_2 + 0x1c) <= *(byte *)((long)param_3 + 0x1c),
       *(byte *)((long)param_3 + 0x1c) == *(byte *)((long)param_2 + 0x1c))) {
      if (*(int *)(param_2 + 3) <= *(int *)(param_3 + 3)) {
        return;
      }
    }
    else if (bVar6) {
      return;
    }
  }
  else if (-1 < iVar7) {
    return;
  }
  FUN_0066ce88(param_2,param_3);
  puVar1 = (undefined8 *)*param_2;
  uVar4 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    puVar1 = param_2;
    uVar4 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  puVar2 = (undefined8 *)*param_1;
  uVar5 = param_1[1];
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    puVar2 = param_1;
    uVar5 = (ulong)*(byte *)((long)param_1 + 0x17);
  }
  sVar3 = uVar5;
  if (uVar4 <= uVar5) {
    sVar3 = uVar4;
  }
  iVar7 = memcmp(puVar1,puVar2,sVar3);
  if (iVar7 == 0) {
    bVar6 = uVar5 <= uVar4;
    if ((uVar4 == uVar5) &&
       (bVar6 = *(byte *)((long)param_1 + 0x1c) <= *(byte *)((long)param_2 + 0x1c),
       *(byte *)((long)param_2 + 0x1c) == *(byte *)((long)param_1 + 0x1c))) {
      if (*(int *)(param_2 + 3) < *(int *)(param_1 + 3)) {
LAB_0066c784:
        FUN_0066ce88(param_1,param_2);
        return;
      }
    }
    else if (!bVar6) goto LAB_0066c784;
  }
  else if (iVar7 < 0) goto LAB_0066c784;
  return;
}


// ===== 0066c7ec  FUN_0066c7ec =====

void FUN_0066c7ec(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  size_t sVar3;
  ulong uVar4;
  ulong uVar5;
  bool bVar6;
  int iVar7;
  
  FUN_0066c60c();
  puVar1 = (undefined8 *)*param_5;
  uVar4 = param_5[1];
  if (-1 < (char)*(byte *)((long)param_5 + 0x17)) {
    puVar1 = param_5;
    uVar4 = (ulong)*(byte *)((long)param_5 + 0x17);
  }
  puVar2 = (undefined8 *)*param_4;
  uVar5 = param_4[1];
  if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
    puVar2 = param_4;
    uVar5 = (ulong)*(byte *)((long)param_4 + 0x17);
  }
  sVar3 = uVar5;
  if (uVar4 <= uVar5) {
    sVar3 = uVar4;
  }
  iVar7 = memcmp(puVar1,puVar2,sVar3);
  if (iVar7 == 0) {
    bVar6 = uVar5 <= uVar4;
    if ((uVar4 == uVar5) &&
       (bVar6 = *(byte *)((long)param_4 + 0x1c) <= *(byte *)((long)param_5 + 0x1c),
       *(byte *)((long)param_5 + 0x1c) == *(byte *)((long)param_4 + 0x1c))) {
      if (*(int *)(param_4 + 3) <= *(int *)(param_5 + 3)) {
        return;
      }
    }
    else if (bVar6) {
      return;
    }
  }
  else if (-1 < iVar7) {
    return;
  }
  FUN_0066ce88(param_4,param_5);
  puVar1 = (undefined8 *)*param_4;
  uVar4 = param_4[1];
  if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
    puVar1 = param_4;
    uVar4 = (ulong)*(byte *)((long)param_4 + 0x17);
  }
  puVar2 = (undefined8 *)*param_3;
  uVar5 = param_3[1];
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    puVar2 = param_3;
    uVar5 = (ulong)*(byte *)((long)param_3 + 0x17);
  }
  sVar3 = uVar5;
  if (uVar4 <= uVar5) {
    sVar3 = uVar4;
  }
  iVar7 = memcmp(puVar1,puVar2,sVar3);
  if (iVar7 == 0) {
    bVar6 = uVar5 <= uVar4;
    if ((uVar4 == uVar5) &&
       (bVar6 = *(byte *)((long)param_3 + 0x1c) <= *(byte *)((long)param_4 + 0x1c),
       *(byte *)((long)param_4 + 0x1c) == *(byte *)((long)param_3 + 0x1c))) {
      if (*(int *)(param_3 + 3) <= *(int *)(param_4 + 3)) {
        return;
      }
    }
    else if (bVar6) {
      return;
    }
  }
  else if (-1 < iVar7) {
    return;
  }
  FUN_0066ce88(param_3,param_4);
  puVar1 = (undefined8 *)*param_3;
  uVar4 = param_3[1];
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    puVar1 = param_3;
    uVar4 = (ulong)*(byte *)((long)param_3 + 0x17);
  }
  puVar2 = (undefined8 *)*param_2;
  uVar5 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    puVar2 = param_2;
    uVar5 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  sVar3 = uVar5;
  if (uVar4 <= uVar5) {
    sVar3 = uVar4;
  }
  iVar7 = memcmp(puVar1,puVar2,sVar3);
  if (iVar7 == 0) {
    bVar6 = uVar5 <= uVar4;
    if ((uVar4 == uVar5) &&
       (bVar6 = *(byte *)((long)param_2 + 0x1c) <= *(byte *)((long)param_3 + 0x1c),
       *(byte *)((long)param_3 + 0x1c) == *(byte *)((long)param_2 + 0x1c))) {
      if (*(int *)(param_2 + 3) <= *(int *)(param_3 + 3)) {
        return;
      }
    }
    else if (bVar6) {
      return;
    }
  }
  else if (-1 < iVar7) {
    return;
  }
  FUN_0066ce88(param_2,param_3);
  puVar1 = (undefined8 *)*param_2;
  uVar4 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    puVar1 = param_2;
    uVar4 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  puVar2 = (undefined8 *)*param_1;
  uVar5 = param_1[1];
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    puVar2 = param_1;
    uVar5 = (ulong)*(byte *)((long)param_1 + 0x17);
  }
  sVar3 = uVar5;
  if (uVar4 <= uVar5) {
    sVar3 = uVar4;
  }
  iVar7 = memcmp(puVar1,puVar2,sVar3);
  if (iVar7 == 0) {
    bVar6 = uVar5 <= uVar4;
    if ((uVar4 == uVar5) &&
       (bVar6 = *(byte *)((long)param_1 + 0x1c) <= *(byte *)((long)param_2 + 0x1c),
       *(byte *)((long)param_2 + 0x1c) == *(byte *)((long)param_1 + 0x1c))) {
      if (*(int *)(param_2 + 3) < *(int *)(param_1 + 3)) {
LAB_0066c9f0:
        FUN_0066ce88(param_1,param_2);
        return;
      }
    }
    else if (!bVar6) goto LAB_0066c9f0;
  }
  else if (iVar7 < 0) goto LAB_0066c9f0;
  return;
}


// ===== 0066ca60  FUN_0066ca60 =====

bool FUN_0066ca60(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *__s2;
  size_t sVar3;
  undefined1 *__n;
  byte bVar4;
  ulong uVar5;
  long *plVar6;
  undefined1 **ppuVar7;
  undefined1 *puVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined8 local_68;
  
  uVar13 = (long)param_2 - (long)param_1 >> 5;
  if ((long)uVar13 < 3) {
    if (uVar13 < 2) {
      return true;
    }
    if (uVar13 == 2) {
      puVar14 = param_2 + -4;
      puVar12 = (undefined8 *)*puVar14;
      uVar13 = param_2[-3];
      if (-1 < (char)*(byte *)((long)param_2 + -9)) {
        puVar12 = puVar14;
        uVar13 = (ulong)*(byte *)((long)param_2 + -9);
      }
      puVar15 = (undefined8 *)*param_1;
      uVar5 = param_1[1];
      if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
        puVar15 = param_1;
        uVar5 = (ulong)*(byte *)((long)param_1 + 0x17);
      }
      sVar3 = uVar5;
      if (uVar13 <= uVar5) {
        sVar3 = uVar13;
      }
      iVar10 = memcmp(puVar12,puVar15,sVar3);
      if (iVar10 == 0) {
        bVar9 = uVar5 <= uVar13;
        if ((uVar13 == uVar5) &&
           (bVar9 = *(byte *)((long)param_1 + 0x1c) <= *(byte *)((long)param_2 + -4),
           *(byte *)((long)param_2 + -4) == *(byte *)((long)param_1 + 0x1c))) {
          if (*(int *)(param_1 + 3) <= *(int *)(param_2 + -1)) {
            return true;
          }
        }
        else if (bVar9) {
          return true;
        }
      }
      else if (-1 < iVar10) {
        return true;
      }
      FUN_0066ce88(param_1,puVar14);
      return true;
    }
  }
  else {
    if (uVar13 == 3) {
      FUN_0066c358(param_1,param_1 + 4,param_2 + -4);
      return true;
    }
    if (uVar13 == 4) {
      FUN_0066c60c(param_1,param_1 + 4,param_1 + 8,param_2 + -4);
      return true;
    }
    if (uVar13 == 5) {
      FUN_0066c7ec(param_1,param_1 + 4,param_1 + 8,param_1 + 0xc,param_2 + -4);
      return true;
    }
  }
  FUN_0066c358(param_1,param_1 + 4,param_1 + 8);
  if (param_1 + 0xc == param_2) {
    return true;
  }
  lVar16 = 0;
  iVar10 = 0;
  puVar12 = param_1 + 0xc;
  puVar14 = param_1 + 8;
LAB_0066cbc8:
  puVar15 = puVar12;
  puVar12 = (undefined8 *)*puVar15;
  uVar13 = puVar15[1];
  if (-1 < (char)*(byte *)((long)puVar15 + 0x17)) {
    puVar12 = puVar15;
    uVar13 = (ulong)*(byte *)((long)puVar15 + 0x17);
  }
  __s2 = (undefined8 *)*puVar14;
  uVar5 = puVar14[1];
  if (-1 < (char)*(byte *)((long)puVar14 + 0x17)) {
    __s2 = puVar14;
    uVar5 = (ulong)*(byte *)((long)puVar14 + 0x17);
  }
  sVar3 = uVar5;
  if (uVar13 <= uVar5) {
    sVar3 = uVar13;
  }
  iVar11 = memcmp(puVar12,__s2,sVar3);
  if (iVar11 == 0) {
    bVar9 = uVar5 <= uVar13;
    if ((uVar13 == uVar5) &&
       (bVar9 = *(byte *)((long)puVar14 + 0x1c) <= *(byte *)((long)puVar15 + 0x1c),
       *(byte *)((long)puVar15 + 0x1c) == *(byte *)((long)puVar14 + 0x1c))) {
      if (*(int *)(puVar15 + 3) < *(int *)(puVar14 + 3)) {
LAB_0066cc40:
        puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
        local_80 = &DAT_aaaaaaaaaaaaaaaa;
        local_68 = &DAT_aaaaaaaaaaaaaaaa;
        local_70 = &DAT_aaaaaaaaaaaaaaaa;
        if (*(char *)((long)puVar15 + 0x17) < '\0') {
          FUN_005478d8(&local_80,*puVar15,puVar15[1]);
        }
        else {
          puStack_78 = (undefined1 *)puVar15[1];
          local_80 = (undefined1 *)*puVar15;
          local_70 = (undefined1 *)puVar15[2];
        }
        local_68 = (undefined1 *)CONCAT35(local_68._5_3_,*(undefined5 *)(puVar15 + 3));
        lVar17 = lVar16;
        do {
          puVar12 = (undefined8 *)((long)param_1 + lVar17 + 0x60);
          plVar1 = (long *)((long)param_1 + lVar17 + 0x40);
          if (plVar1 != puVar12) {
            bVar4 = *(byte *)((long)param_1 + lVar17 + 0x57);
            if (*(char *)((long)param_1 + lVar17 + 0x77) < '\0') {
              uVar13 = *(ulong *)((long)param_1 + lVar17 + 0x48);
              plVar6 = (long *)*plVar1;
              if (-1 < (char)bVar4) {
                uVar13 = (ulong)bVar4;
                plVar6 = plVar1;
              }
              FUN_00547f08((long)param_1 + lVar17 + 0x60,plVar6,uVar13);
            }
            else if ((char)bVar4 < '\0') {
              FUN_00547fc0((long)param_1 + lVar17 + 0x60,*plVar1,
                           *(undefined8 *)((long)param_1 + lVar17 + 0x48));
            }
            else {
              *(undefined8 *)((long)param_1 + lVar17 + 0x68) =
                   *(undefined8 *)((long)param_1 + lVar17 + 0x48);
              *puVar12 = *plVar1;
              *(undefined8 *)((long)param_1 + lVar17 + 0x70) =
                   *(undefined8 *)((long)param_1 + lVar17 + 0x50);
            }
          }
          *(undefined4 *)((long)param_1 + lVar17 + 0x78) =
               *(undefined4 *)((long)param_1 + lVar17 + 0x58);
          *(undefined1 *)((long)param_1 + lVar17 + 0x7c) =
               *(undefined1 *)((long)param_1 + lVar17 + 0x5c);
          if (lVar17 == -0x40) {
            puVar12 = param_1;
            if ((undefined1 **)param_1 != &local_80) goto LAB_0066cdcc;
            goto LAB_0066cb88;
          }
          bVar4 = *(byte *)((long)param_1 + lVar17 + 0x37);
          puVar2 = puStack_78;
          ppuVar7 = (undefined1 **)local_80;
          if (-1 < (long)local_70) {
            puVar2 = (undefined1 *)((ulong)local_70 >> 0x38);
            ppuVar7 = &local_80;
          }
          puVar14 = (undefined8 *)((long)param_1 + lVar17 + 0x20);
          puVar12 = (undefined8 *)*puVar14;
          puVar8 = *(undefined1 **)((long)param_1 + lVar17 + 0x28);
          if (-1 < (char)bVar4) {
            puVar12 = puVar14;
            puVar8 = (undefined1 *)(ulong)bVar4;
          }
          __n = puVar8;
          if (puVar2 <= puVar8) {
            __n = puVar2;
          }
          iVar11 = memcmp(ppuVar7,puVar12,(size_t)__n);
          if (iVar11 == 0) {
            bVar9 = puVar8 <= puVar2;
            if (puVar2 == puVar8) {
              bVar4 = *(byte *)((long)param_1 + lVar17 + 0x3c);
              bVar9 = bVar4 <= local_68._4_1_;
              if (local_68._4_1_ == bVar4) {
                if ((int)local_68 < *(int *)((long)param_1 + lVar17 + 0x38)) goto LAB_0066cca0;
                goto LAB_0066cdac;
              }
            }
            if (bVar9) goto LAB_0066cdac;
          }
          else if (-1 < iVar11) goto LAB_0066cdac;
LAB_0066cca0:
          lVar17 = lVar17 + -0x20;
        } while( true );
      }
    }
    else if (!bVar9) goto LAB_0066cc40;
  }
  else if (iVar11 < 0) goto LAB_0066cc40;
  goto LAB_0066cbb0;
LAB_0066cdac:
  puVar12 = (undefined8 *)((long)param_1 + lVar17 + 0x40);
  if ((undefined1 **)puVar12 != &local_80) {
LAB_0066cdcc:
    if (*(char *)((long)puVar12 + 0x17) < '\0') {
      puVar2 = puStack_78;
      ppuVar7 = (undefined1 **)local_80;
      if (-1 < (long)local_70) {
        puVar2 = (undefined1 *)((ulong)local_70 >> 0x38);
        ppuVar7 = &local_80;
      }
      FUN_00547f08(puVar12,ppuVar7,puVar2);
    }
    else if ((long)local_70 < 0) {
      FUN_00547fc0(puVar12,local_80,puStack_78);
    }
    else {
      puVar12[1] = puStack_78;
      *puVar12 = local_80;
      puVar12[2] = local_70;
    }
  }
LAB_0066cb88:
  *(int *)((long)param_1 + lVar17 + 0x58) = (int)local_68;
  *(byte *)((long)param_1 + lVar17 + 0x5c) = local_68._4_1_;
  if ((long)local_70 < 0) {
    operator_delete(local_80);
  }
  iVar10 = iVar10 + 1;
  if (iVar10 == 8) {
    return puVar15 + 4 == param_2;
  }
LAB_0066cbb0:
  lVar16 = lVar16 + 0x20;
  puVar12 = puVar15 + 4;
  puVar14 = puVar15;
  if (puVar15 + 4 == param_2) {
    return true;
  }
  goto LAB_0066cbc8;
}


// ===== 0066ce88  FUN_0066ce88 =====

void FUN_0066ce88(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined8 *puVar5;
  undefined1 **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined8 local_38;
  
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    FUN_005478d8(&local_50,*param_1,param_1[1]);
  }
  else {
    puStack_48 = (undefined1 *)param_1[1];
    local_50 = (undefined1 *)*param_1;
    local_40 = (undefined1 *)param_1[2];
  }
  local_38 = (undefined1 *)
             CONCAT44(CONCAT31(local_38._5_3_,*(undefined1 *)((long)param_1 + 0x1c)),
                      *(undefined4 *)(param_1 + 3));
  if (param_1 != param_2) {
    bVar4 = *(byte *)((long)param_2 + 0x17);
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      uVar1 = param_2[1];
      puVar5 = (undefined8 *)*param_2;
      if (-1 < (char)bVar4) {
        uVar1 = (ulong)bVar4;
        puVar5 = param_2;
      }
      FUN_00547f08(param_1,puVar5,uVar1);
    }
    else if ((char)bVar4 < '\0') {
      FUN_00547fc0(param_1,*param_2,param_2[1]);
    }
    else {
      uVar8 = param_2[1];
      uVar7 = *param_2;
      param_1[2] = param_2[2];
      param_1[1] = uVar8;
      *param_1 = uVar7;
    }
  }
  uVar3 = *(undefined4 *)(param_2 + 3);
  *(undefined1 *)((long)param_1 + 0x1c) = *(undefined1 *)((long)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 3) = uVar3;
  if ((undefined1 **)param_2 != &local_50) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      puVar2 = puStack_48;
      ppuVar6 = (undefined1 **)local_50;
      if (-1 < (long)local_40) {
        puVar2 = (undefined1 *)((ulong)local_40 >> 0x38);
        ppuVar6 = &local_50;
      }
      FUN_00547f08(param_2,ppuVar6,puVar2);
    }
    else if ((long)local_40 < 0) {
      FUN_00547fc0(param_2,local_50,puStack_48);
    }
    else {
      param_2[1] = puStack_48;
      *param_2 = local_50;
      param_2[2] = local_40;
    }
  }
  *(undefined4 *)(param_2 + 3) = (undefined4)local_38;
  *(undefined1 *)((long)param_2 + 0x1c) = local_38._4_1_;
  if ((long)local_40 < 0) {
    operator_delete(local_50);
  }
  return;
}


// ===== 0066cffc  FUN_0066cffc =====

undefined8 FUN_0066cffc(long param_1,long param_2)

{
  int *piVar1;
  size_t __n;
  size_t sVar2;
  undefined8 *__s1;
  undefined8 *__s2;
  int *piVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  undefined8 uVar7;
  int *piVar8;
  int *piVar9;
  
  bVar4 = *(byte *)(param_1 + 0x1f);
  bVar5 = *(byte *)(param_2 + 0x1f);
  __n = *(size_t *)(param_1 + 0x10);
  if (-1 < (char)bVar4) {
    __n = (ulong)bVar4;
  }
  sVar2 = *(size_t *)(param_2 + 0x10);
  if (-1 < (char)bVar5) {
    sVar2 = (ulong)bVar5;
  }
  if (__n == sVar2) {
    __s1 = (undefined8 *)*(void **)(param_1 + 8);
    if (-1 < (char)bVar4) {
      __s1 = (undefined8 *)(param_1 + 8);
    }
    __s2 = (undefined8 *)*(void **)(param_2 + 8);
    if (-1 < (char)bVar5) {
      __s2 = (undefined8 *)(param_2 + 8);
    }
    iVar6 = memcmp(__s1,__s2,__n);
    if (iVar6 != 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x20) != *(int *)(param_2 + 0x20)) {
      return 0;
    }
    bVar4 = *(byte *)(param_2 + 0x28);
    if ((bVar4 & *(byte *)(param_1 + 0x28)) == 0) {
      if (*(byte *)(param_1 + 0x28) != bVar4) {
        return 0;
      }
    }
    else {
      if ((bVar4 & 1) == 0) goto LAB_0066d1a0;
      if (*(int *)(param_1 + 0x24) != *(int *)(param_2 + 0x24)) {
        return 0;
      }
    }
    bVar4 = *(byte *)(param_2 + 0x30);
    if ((bVar4 & *(byte *)(param_1 + 0x30)) == 0) {
      if (*(byte *)(param_1 + 0x30) != bVar4) {
        return 0;
      }
    }
    else {
      if ((bVar4 & 1) == 0) {
LAB_0066d1a0:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                  );
      }
      if (*(int *)(param_1 + 0x2c) != *(int *)(param_2 + 0x2c)) {
        return 0;
      }
    }
    piVar8 = *(int **)(param_1 + 0x38);
    piVar3 = *(int **)(param_1 + 0x40);
    if ((long)piVar3 - (long)piVar8 == *(long *)(param_2 + 0x40) - *(long *)(param_2 + 0x38)) {
      if (piVar8 != piVar3) {
        piVar8 = piVar8 + 1;
        piVar9 = (int *)(*(long *)(param_2 + 0x38) + 4);
        do {
          if (piVar8[-1] != piVar9[-1]) {
            return 0;
          }
          bVar4 = *(byte *)(piVar9 + 1);
          if ((bVar4 & *(byte *)(piVar8 + 1)) == 0) {
            if (*(byte *)(piVar8 + 1) != bVar4) {
              return 0;
            }
          }
          else {
            if ((bVar4 & 1) == 0) goto LAB_0066d1a0;
            if (*piVar8 != *piVar9) {
              return 0;
            }
          }
          piVar1 = piVar8 + 2;
          piVar8 = piVar8 + 3;
          piVar9 = piVar9 + 3;
        } while (piVar1 != piVar3);
      }
      if (*(long *)(param_1 + 0x60) == *(long *)(param_2 + 0x60)) {
        uVar7 = FUN_00667cd4(*(undefined8 *)(param_1 + 0x50),param_1 + 0x58,
                             *(undefined8 *)(param_2 + 0x50));
        return uVar7;
      }
    }
  }
  return 0;
}


// ===== 0066d1b4  FUN_0066d1b4 =====

undefined1  [16]
FUN_0066d1b4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  size_t __n;
  undefined8 *__s1;
  ulong uVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined1 auVar13 [16];
  
  plVar8 = (long *)*param_1;
  plVar9 = plVar8 + 1;
  plVar6 = (long *)*plVar9;
  plVar10 = plVar9;
  if (plVar6 != (long *)0x0) {
    __s1 = (undefined8 *)*param_2;
    uVar1 = param_2[1];
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      __s1 = param_2;
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    }
    do {
      while( true ) {
        plVar4 = plVar6;
        plVar6 = (long *)plVar4[4];
        uVar2 = plVar4[5];
        if (-1 < (char)*(byte *)((long)plVar4 + 0x37)) {
          plVar6 = plVar4 + 4;
          uVar2 = (ulong)*(byte *)((long)plVar4 + 0x37);
        }
        __n = uVar2;
        if (uVar1 <= uVar2) {
          __n = uVar1;
        }
        iVar3 = memcmp(__s1,plVar6,__n);
        plVar9 = plVar4;
        if (iVar3 != 0) break;
        if (uVar1 == uVar2) {
          uVar5 = 0;
          goto LAB_0066d2ec;
        }
        if (uVar2 <= uVar1) goto LAB_0066d1fc;
LAB_0066d24c:
        plVar6 = (long *)*plVar4;
        plVar10 = plVar4;
        if ((long *)*plVar4 == (long *)0x0) goto LAB_0066d268;
      }
      if (iVar3 < 0) goto LAB_0066d24c;
LAB_0066d1fc:
      plVar6 = (long *)plVar4[1];
    } while ((long *)plVar4[1] != (long *)0x0);
    plVar10 = plVar4 + 1;
  }
LAB_0066d268:
  plVar4 = (long *)operator_new(0x50);
  if (plVar4 != (long *)0x0) {
    plVar6 = plVar4 + 4;
    *plVar4 = 0;
    if (plVar6 != (long *)0x0) {
      plVar7 = (long *)*param_4;
      if (*(char *)((long)plVar7 + 0x17) < '\0') {
        FUN_005478d8(plVar6,*plVar7,plVar7[1]);
      }
      else {
        lVar12 = plVar7[1];
        lVar11 = *plVar7;
        plVar4[6] = plVar7[2];
        plVar4[5] = lVar12;
        *plVar6 = lVar11;
      }
      plVar4[7] = 0;
      plVar4[8] = 0;
      plVar4[9] = 0;
      *plVar4 = 0;
      plVar4[1] = 0;
      plVar4[2] = (long)plVar9;
      *plVar10 = (long)plVar4;
      plVar6 = plVar4;
      if (*(long *)*plVar8 != 0) {
        *plVar8 = *(long *)*plVar8;
        plVar6 = (long *)*plVar10;
      }
      FUN_005d5b94(plVar8[1],plVar6);
      uVar5 = 1;
      plVar8[2] = plVar8[2] + 1;
LAB_0066d2ec:
      auVar13._8_8_ = uVar5;
      auVar13._0_8_ = plVar4;
      return auVar13;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0066d328  FUN_0066d328 =====

undefined * FUN_0066d328(void)

{
  undefined *puVar1;
  
  if (DAT_00d64708 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0066d338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar1 = (undefined *)(*DAT_00d64708)();
    return puVar1;
  }
  return &DAT_001ff3e8;
}


// ===== 0066d348  FUN_0066d348 =====

void FUN_0066d348(void)

{
  if (DAT_00d64710 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0066d360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_00d64710)();
    return;
  }
  return;
}


// ===== 0066d368  FUN_0066d368 =====

void FUN_0066d368(pthread_mutex_t *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 *local_28;
  
  local_28 = &DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_28);
  pthread_mutex_init(param_1,(pthread_mutexattr_t *)&local_28);
  uVar1 = pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_28);
  uVar2 = (ulong)uVar1;
  *(undefined1 *)((long)param_1 + 0x68) = 0;
  *(undefined8 *)((long)param_1 + 0x30) = 0;
  *(undefined8 *)((long)param_1 + 0x38) = 0;
  param_1[1].__align = 0;
  *(undefined1 *)((long)param_1 + 0x40) = 0;
  if ((char)param_2[5] == '\x01') {
    lVar3 = *param_2;
    *(long *)((long)param_1 + 0x40) = lVar3;
    if (lVar3 != 0) {
      uVar2 = FUN_00d0f740(1,lVar3 + 8);
    }
    lVar4 = param_2[4];
    lVar3 = param_2[3];
    lVar6 = param_2[2];
    lVar5 = param_2[1];
    *(undefined1 *)((long)param_1 + 0x68) = 1;
    *(long *)((long)param_1 + 0x60) = lVar4;
    *(long *)((long)param_1 + 0x58) = lVar3;
    param_1[2].__align = lVar6;
    *(long *)((long)param_1 + 0x48) = lVar5;
    if ((char)param_2[5] == '\x01') {
      lVar3 = param_2[2];
      goto LAB_0066d40c;
    }
  }
  lVar3 = FUN_00622394(uVar2);
LAB_0066d40c:
  *(long *)((long)param_1 + 0x70) = lVar3;
  param_1[3].__size[0] = '\0';
  *(undefined1 *)((long)param_1 + 0x80) = 0;
  *(undefined1 *)((long)param_1 + 0x88) = 0;
  FUN_0066f1ac((long)param_1 + 0x90);
  param_1[6].__align = 0;
  *(undefined1 *)((long)param_1 + 0xf8) = 0;
  return;
}


