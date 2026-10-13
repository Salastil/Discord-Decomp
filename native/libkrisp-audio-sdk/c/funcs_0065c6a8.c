// ===== 0065c6a8  FUN_0065c6a8 =====

void FUN_0065c6a8(long param_1)

{
  byte bVar1;
  byte *pbVar2;
  long lVar3;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) goto LAB_0065c6fc;
  lVar3 = *(long *)(param_1 + 0x18);
  if ((*(byte *)(lVar3 + 0x10) & 1) == 0) {
LAB_0065c6e0:
    FUN_0065de80(lVar3);
    bVar1 = *(byte *)(lVar3 + 8);
    *(undefined4 *)(lVar3 + 0x10) = 0;
  }
  else {
    pbVar2 = (byte *)(*(ulong *)(lVar3 + 0x18) & 0xfffffffffffffffc);
    if ((*pbVar2 & 1) == 0) {
      pbVar2[0] = 0;
      pbVar2[1] = 0;
      goto LAB_0065c6e0;
    }
    **(undefined1 **)(pbVar2 + 0x10) = 0;
    pbVar2[8] = 0;
    pbVar2[9] = 0;
    pbVar2[10] = 0;
    pbVar2[0xb] = 0;
    pbVar2[0xc] = 0;
    pbVar2[0xd] = 0;
    pbVar2[0xe] = 0;
    pbVar2[0xf] = 0;
    FUN_0065de80(lVar3);
    bVar1 = *(byte *)(lVar3 + 8);
    *(undefined4 *)(lVar3 + 0x10) = 0;
  }
  if ((bVar1 & 1) != 0) {
    FUN_006622b8(lVar3 + 8);
  }
LAB_0065c6fc:
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006622b8((byte *)(param_1 + 8));
  return;
}


// ===== 0065c74c  FUN_0065c74c =====

byte * FUN_0065c74c(long param_1,byte *param_2,undefined8 *param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined1 auVar4 [16];
  ulong *puVar5;
  undefined8 uVar6;
  long lVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  
  uVar10 = 0;
  if (param_2 < (byte *)*param_3) goto LAB_0065c7cc;
LAB_0065c7a8:
  do {
    iVar3 = (int)param_2 - *(int *)(param_3 + 1);
    if (*(int *)((long)param_3 + 0x1c) == iVar3) {
      pbVar8 = (byte *)0x0;
      if (param_3[2] != 0 || iVar3 < 1) {
        pbVar8 = param_2;
      }
LAB_0065c94c:
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar10;
      return pbVar8;
    }
    auVar11 = FUN_0066f53c(param_3,iVar3,*(undefined4 *)((long)param_3 + 0x5c));
    param_2 = auVar11._0_8_;
    pbVar8 = param_2;
    if ((auVar11 & (undefined1  [16])0x1) != (undefined1  [16])0x0) goto LAB_0065c94c;
LAB_0065c7cc:
    do {
      while( true ) {
        pbVar8 = param_2 + 1;
        uVar9 = (uint)*param_2;
        if (-1 < (char)*param_2) break;
        uVar9 = (uVar9 + (uint)*pbVar8 * 0x80) - 0x80;
        if (-1 < (char)*pbVar8) {
          pbVar8 = param_2 + 2;
          break;
        }
        auVar11 = FUN_0066fe50();
        uVar9 = (uint)(auVar11._8_8_ >> 3) & 0x1fffffff;
        auVar4 = auVar11;
        if (uVar9 != 2) goto LAB_0065c800;
LAB_0065c850:
        if ((auVar11._8_4_ & 0xff) == 0x12) {
          lVar7 = *(long *)(param_1 + 0x18);
          *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
          if (lVar7 == 0) {
            puVar5 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
            if ((*(ulong *)(param_1 + 8) & 1) != 0) {
              puVar5 = (ulong *)*puVar5;
            }
            lVar7 = FUN_00661d68(puVar5);
            *(long *)(param_1 + 0x18) = lVar7;
          }
          param_2 = (byte *)FUN_0066fa8c(param_3,lVar7,auVar11._0_8_);
        }
        else {
LAB_0065c888:
          pbVar8 = auVar11._0_8_;
          uVar9 = auVar11._8_4_;
          if ((uVar9 == 0) || ((uVar9 & 7) == 4)) {
            if (pbVar8 != (byte *)0x0) {
              *(uint *)(param_3 + 10) = uVar9 - 1;
            }
            goto LAB_0065c94c;
          }
          if ((*(ulong *)(param_1 + 8) & 1) == 0) {
            uVar6 = FUN_00661fa4(param_1 + 8);
            param_2 = (byte *)FUN_006fbab8(auVar11._8_8_ & 0xffffffff,uVar6,pbVar8,param_3);
          }
          else {
            param_2 = (byte *)FUN_006fbab8(auVar11._8_8_ & 0xffffffff,
                                           (*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,pbVar8
                                           ,param_3);
          }
        }
joined_r0x0065c8b8:
        if (param_2 == (byte *)0x0) {
          pbVar8 = (byte *)0x0;
          goto LAB_0065c94c;
        }
        if ((byte *)*param_3 <= param_2) goto LAB_0065c7a8;
      }
      auVar4._8_4_ = uVar9;
      auVar4._0_8_ = pbVar8;
      auVar4._12_4_ = 0;
      auVar11._8_4_ = uVar9;
      auVar11._0_8_ = pbVar8;
      auVar11._12_4_ = 0;
      uVar9 = uVar9 >> 3;
      if (uVar9 == 2) goto LAB_0065c850;
LAB_0065c800:
      auVar11 = auVar4;
      pbVar8 = auVar11._0_8_;
      if ((uVar9 != 1) || ((auVar11._8_4_ & 0xff) != 8)) goto LAB_0065c888;
      param_2 = pbVar8 + 1;
      bVar2 = *pbVar8;
      if ((char)bVar2 < '\0') {
        bVar1 = *param_2;
        if ((char)bVar1 < '\0') {
          auVar12 = FUN_0066fc04(pbVar8);
          param_2 = auVar12._0_8_;
          uVar10 = 2;
          *(int *)(param_1 + 0x20) = auVar12._8_4_;
          goto joined_r0x0065c8b8;
        }
        param_2 = pbVar8 + 2;
        *(uint *)(param_1 + 0x20) = (uint)bVar2 + (uint)bVar1 * 0x80 + -0x80;
        uVar10 = 2;
        if ((byte *)*param_3 <= param_2) break;
        goto LAB_0065c7cc;
      }
      *(uint *)(param_1 + 0x20) = (uint)bVar2;
      uVar10 = 2;
    } while (param_2 < (byte *)*param_3);
  } while( true );
}


// ===== 0065c98c  FUN_0065c98c =====

undefined1 * FUN_0065c98c(long param_1,undefined1 *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 >> 1 & 1) != 0) {
    if (param_2 < (undefined1 *)*param_3) {
      uVar2 = *(uint *)(param_1 + 0x20);
      *param_2 = 8;
      param_2[1] = (char)uVar2;
    }
    else {
      param_2 = (undefined1 *)FUN_0066d3f8(param_3,param_2);
      uVar2 = *(uint *)(param_1 + 0x20);
      *param_2 = 8;
      param_2[1] = (char)uVar2;
    }
    if (uVar2 < 0x80) {
      param_2 = param_2 + 2;
    }
    else {
      uVar4 = (ulong)(long)(int)uVar2 >> 7;
      param_2[1] = (byte)uVar2 | 0x80;
      param_2[2] = (char)uVar4;
      param_2 = param_2 + 3;
      puVar3 = param_2;
      if (0x3fff < uVar2) {
        do {
          uVar5 = uVar4 >> 0xe;
          uVar4 = uVar4 >> 7;
          puVar3[-1] = puVar3[-1] | 0x80;
          param_2 = puVar3 + 1;
          *puVar3 = (char)uVar4;
          puVar3 = param_2;
        } while (uVar5 != 0);
      }
    }
  }
  if ((uVar1 & 1) != 0) {
    param_2 = (undefined1 *)
              FUN_00678d18(2,*(long *)(param_1 + 0x18),
                           *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x14),param_2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    puVar3 = (undefined1 *)
             FUN_006fc418((*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,param_2,param_3);
    return puVar3;
  }
  return param_2;
}


// ===== 0065ca94  FUN_0065ca94 =====

void FUN_0065ca94(long param_1)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) == 0) {
    FUN_006e5694(param_1,0,param_1 + 0x14);
    return;
  }
  if ((uVar1 & 1) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_0065ea34(*(undefined8 *)(param_1 + 0x18));
    lVar2 = lVar2 + (ulong)(((uint)LZCOUNT((uint)lVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    FUN_006e5694(param_1,lVar2 + ((LZCOUNT((long)*(int *)(param_1 + 0x20) | 1) ^ 0x3fU) * 9 + 0x89
                                 >> 6),param_1 + 0x14);
    return;
  }
  FUN_006e5694(param_1,lVar2,param_1 + 0x14);
  return;
}


// ===== 0065cb44  FUN_0065cb44 =====

void FUN_0065cb44(long param_1,long param_2)

{
  undefined **ppuVar1;
  uint uVar2;
  long lVar3;
  ulong *puVar4;
  
  uVar2 = *(uint *)(param_2 + 0x10);
  if ((uVar2 & 3) != 0) {
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 0x18);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      if (lVar3 == 0) {
        puVar4 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar4 = (ulong *)*puVar4;
        }
        lVar3 = FUN_00661d68(puVar4);
        *(long *)(param_1 + 0x18) = lVar3;
      }
      ppuVar1 = &PTR_PTR_FUN_007a9f68;
      if (*(undefined ***)(param_2 + 0x18) != (undefined **)0x0) {
        ppuVar1 = *(undefined ***)(param_2 + 0x18);
      }
      FUN_0065ec98(lVar3,ppuVar1);
    }
    if ((uVar2 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    }
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar2;
  }
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  FUN_006621e0(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffc) + 8);
  return;
}


// ===== 0065cc00  FUN_0065cc00 =====

undefined ** FUN_0065cc00(void)

{
  return &PTR_FUN_00798c80;
}


// ===== 0065cc0c  FUN_0065cc0c =====

undefined8 FUN_0065cc0c(void)

{
  return 1;
}


// ===== 0065cc14  FUN_0065cc14 =====

void FUN_0065cc14(void)

{
  FUN_00684dd0(FUN_0064dd54,&DAT_007ae908,&DAT_007aea00);
  return;
}


// ===== 0065cc2c  FUN_0065cc2c =====

void FUN_0065cc2c(long *param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_007a3018;
  uVar1 = param_2 | 2;
  if ((param_3 & 1) == 0) {
    uVar1 = param_2;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = uVar1;
  return;
}


// ===== 0065cc50  FUN_0065cc50 =====

void FUN_0065cc50(undefined **param_1)

{
  ulong uVar1;
  undefined *puVar2;
  
  if (((ulong)param_1[1] & 1) == 0) {
    uVar1 = (ulong)param_1[1] & 0xfffffffffffffffc;
  }
  else {
                    /* try { // try from 0065cc70 to 0065cc73 has its CatchHandler @ 0065cce4 */
    uVar1 = FUN_00662218();
  }
  if (((param_1 != &PTR_PTR_FUN_007a9ef8) && (uVar1 == 0)) &&
     (puVar2 = param_1[3], puVar2 != (undefined *)0x0)) {
    FUN_0065e3c8(puVar2);
    free(puVar2);
  }
  *param_1 = (undefined *)&PTR_FUN_00799110;
  if ((((uint)param_1[1] >> 1 & 1) != 0) && (puVar2 = param_1[1] + -2, puVar2 != (undefined *)0x0))
  {
    FUN_00662da0(puVar2);
    free(puVar2);
    return;
  }
  return;
}


// ===== 0065cce8  FUN_0065cce8 =====

void FUN_0065cce8(void *param_1)

{
  FUN_0065cc50();
  free(param_1);
  return;
}


// ===== 0065cd0c  FUN_0065cd0c =====

void FUN_0065cd0c(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}


// ===== 0065cd14  FUN_0065cd14 =====

void FUN_0065cd14(long param_1)

{
  byte bVar1;
  byte *pbVar2;
  long lVar3;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) goto LAB_0065cd68;
  lVar3 = *(long *)(param_1 + 0x18);
  if ((*(byte *)(lVar3 + 0x10) & 1) == 0) {
LAB_0065cd4c:
    FUN_0065de80(lVar3);
    bVar1 = *(byte *)(lVar3 + 8);
    *(undefined4 *)(lVar3 + 0x10) = 0;
  }
  else {
    pbVar2 = (byte *)(*(ulong *)(lVar3 + 0x18) & 0xfffffffffffffffc);
    if ((*pbVar2 & 1) == 0) {
      pbVar2[0] = 0;
      pbVar2[1] = 0;
      goto LAB_0065cd4c;
    }
    **(undefined1 **)(pbVar2 + 0x10) = 0;
    pbVar2[8] = 0;
    pbVar2[9] = 0;
    pbVar2[10] = 0;
    pbVar2[0xb] = 0;
    pbVar2[0xc] = 0;
    pbVar2[0xd] = 0;
    pbVar2[0xe] = 0;
    pbVar2[0xf] = 0;
    FUN_0065de80(lVar3);
    bVar1 = *(byte *)(lVar3 + 8);
    *(undefined4 *)(lVar3 + 0x10) = 0;
  }
  if ((bVar1 & 1) != 0) {
    FUN_006622b8(lVar3 + 8);
  }
LAB_0065cd68:
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006622b8((byte *)(param_1 + 8));
  return;
}


// ===== 0065cdb4  FUN_0065cdb4 =====

byte * FUN_0065cdb4(long param_1,byte *param_2,undefined8 *param_3)

{
  int iVar1;
  ulong *puVar2;
  undefined8 uVar3;
  byte *pbVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [12];
  
  do {
    while( true ) {
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
      uVar5 = (uint)*param_2;
      if (-1 < (char)*param_2) break;
      uVar5 = (uVar5 + (uint)*pbVar4 * 0x80) - 0x80;
      if (-1 < (char)*pbVar4) {
        pbVar4 = param_2 + 2;
        break;
      }
      auVar7 = FUN_0066fe50(param_2,uVar5);
      pbVar4 = auVar7._0_8_;
      if (auVar7._8_4_ != 10) goto LAB_0065ce30;
LAB_0065cdd4:
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      if (*(long *)(param_1 + 0x18) == 0) {
        puVar2 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar2 = (ulong *)*puVar2;
        }
        uVar3 = FUN_00661d68(puVar2);
        *(undefined8 *)(param_1 + 0x18) = uVar3;
        param_2 = (byte *)FUN_0066fa8c(param_3,uVar3,pbVar4);
        if (param_2 == (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        param_2 = (byte *)FUN_0066fa8c(param_3);
        if (param_2 == (byte *)0x0) {
          return (byte *)0x0;
        }
      }
    }
    auVar7._8_4_ = uVar5;
    auVar7._0_8_ = pbVar4;
    if (uVar5 == 10) goto LAB_0065cdd4;
LAB_0065ce30:
    uVar5 = auVar7._8_4_;
    pbVar4 = auVar7._0_8_;
    if ((uVar5 == 0) || ((uVar5 & 7) == 4)) {
      if (pbVar4 != (byte *)0x0) {
        *(uint *)(param_3 + 10) = uVar5 - 1;
        return pbVar4;
      }
      return (byte *)0x0;
    }
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      uVar3 = FUN_00661fa4(param_1 + 8);
      param_2 = (byte *)FUN_006fbab8(uVar5,uVar3,pbVar4,param_3);
      if (param_2 == (byte *)0x0) {
        return (byte *)0x0;
      }
    }
    else {
      param_2 = (byte *)FUN_006fbab8(uVar5,(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,pbVar4
                                     ,param_3);
      if (param_2 == (byte *)0x0) {
        return (byte *)0x0;
      }
    }
  } while( true );
}


// ===== 0065cf5c  FUN_0065cf5c =====

undefined8 FUN_0065cf5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    param_2 = FUN_00678d18(1,*(long *)(param_1 + 0x18),
                           *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x14),param_2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar1 = FUN_006fc418((*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,param_2,param_3);
  return uVar1;
}


// ===== 0065cfc8  FUN_0065cfc8 =====

void FUN_0065cfc8(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    FUN_006e5694(param_1,0,param_1 + 0x14);
    return;
  }
  lVar1 = FUN_0065ea34(*(undefined8 *)(param_1 + 0x18));
  FUN_006e5694(param_1,lVar1 + (ulong)(((uint)LZCOUNT((uint)lVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1,
               param_1 + 0x14);
  return;
}


// ===== 0065d030  FUN_0065d030 =====

void FUN_0065d030(long param_1,long param_2)

{
  undefined **ppuVar1;
  long lVar2;
  ulong *puVar3;
  
  if ((*(byte *)(param_2 + 0x10) & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x18);
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
    if (lVar2 == 0) {
      puVar3 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar3 = (ulong *)*puVar3;
      }
      lVar2 = FUN_00661d68(puVar3);
      *(long *)(param_1 + 0x18) = lVar2;
    }
    ppuVar1 = &PTR_PTR_FUN_007a9f68;
    if (*(undefined ***)(param_2 + 0x18) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(param_2 + 0x18);
    }
    FUN_0065ec98(lVar2,ppuVar1);
  }
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  FUN_006621e0(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffc) + 8);
  return;
}


// ===== 0065d0c0  FUN_0065d0c0 =====

undefined ** FUN_0065d0c0(void)

{
  return &PTR_FUN_00798c90;
}


// ===== 0065d0cc  FUN_0065d0cc =====

undefined8 FUN_0065d0cc(void)

{
  return 1;
}


// ===== 0065d0d4  FUN_0065d0d4 =====

void FUN_0065d0d4(void)

{
  FUN_00684dd0(FUN_0064dd54,&DAT_007ae908,&DAT_007aea10);
  return;
}


// ===== 0065d0ec  FUN_0065d0ec =====

void FUN_0065d0ec(long *param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_007a3028;
  uVar1 = param_2 | 2;
  if ((param_3 & 1) == 0) {
    uVar1 = param_2;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = uVar1;
  return;
}


// ===== 0065d114  FUN_0065d114 =====

void FUN_0065d114(undefined **param_1)

{
  ulong uVar1;
  undefined *puVar2;
  
  if (((ulong)param_1[1] & 1) == 0) {
    uVar1 = (ulong)param_1[1] & 0xfffffffffffffffc;
  }
  else {
                    /* try { // try from 0065d134 to 0065d137 has its CatchHandler @ 0065d1a8 */
    uVar1 = FUN_00662218();
  }
  if (((param_1 != &PTR_PTR_FUN_007a9f18) && (uVar1 == 0)) &&
     (puVar2 = param_1[3], puVar2 != (undefined *)0x0)) {
    FUN_0065b448(puVar2);
    free(puVar2);
  }
  *param_1 = (undefined *)&PTR_FUN_00799110;
  if ((((uint)param_1[1] >> 1 & 1) != 0) && (puVar2 = param_1[1] + -2, puVar2 != (undefined *)0x0))
  {
    FUN_00662da0(puVar2);
    free(puVar2);
    return;
  }
  return;
}


// ===== 0065d1ac  FUN_0065d1ac =====

void FUN_0065d1ac(void *param_1)

{
  FUN_0065d114();
  free(param_1);
  return;
}


// ===== 0065d1d0  FUN_0065d1d0 =====

void FUN_0065d1d0(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}


// ===== 0065d1d8  FUN_0065d1d8 =====

void FUN_0065d1d8(long param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_0065b500(*(undefined8 *)(param_1 + 0x18));
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006622b8();
  return;
}


// ===== 0065d220  FUN_0065d220 =====

byte * FUN_0065d220(long param_1,byte *param_2,undefined8 *param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined1 auVar4 [16];
  ulong *puVar5;
  undefined8 uVar6;
  long lVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  
  uVar10 = 0;
  if (param_2 < (byte *)*param_3) goto LAB_0065d2a0;
LAB_0065d27c:
  do {
    iVar3 = (int)param_2 - *(int *)(param_3 + 1);
    if (*(int *)((long)param_3 + 0x1c) == iVar3) {
      pbVar8 = (byte *)0x0;
      if (param_3[2] != 0 || iVar3 < 1) {
        pbVar8 = param_2;
      }
LAB_0065d420:
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar10;
      return pbVar8;
    }
    auVar11 = FUN_0066f53c(param_3,iVar3,*(undefined4 *)((long)param_3 + 0x5c));
    param_2 = auVar11._0_8_;
    pbVar8 = param_2;
    if ((auVar11 & (undefined1  [16])0x1) != (undefined1  [16])0x0) goto LAB_0065d420;
LAB_0065d2a0:
    do {
      while( true ) {
        pbVar8 = param_2 + 1;
        uVar9 = (uint)*param_2;
        if (-1 < (char)*param_2) break;
        uVar9 = (uVar9 + (uint)*pbVar8 * 0x80) - 0x80;
        if (-1 < (char)*pbVar8) {
          pbVar8 = param_2 + 2;
          break;
        }
        auVar11 = FUN_0066fe50();
        uVar9 = (uint)(auVar11._8_8_ >> 3) & 0x1fffffff;
        auVar4 = auVar11;
        if (uVar9 != 2) goto LAB_0065d2d4;
LAB_0065d324:
        if ((auVar11._8_4_ & 0xff) == 0x12) {
          lVar7 = *(long *)(param_1 + 0x18);
          *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
          if (lVar7 == 0) {
            puVar5 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
            if ((*(ulong *)(param_1 + 8) & 1) != 0) {
              puVar5 = (ulong *)*puVar5;
            }
            lVar7 = FUN_006619e8(puVar5);
            *(long *)(param_1 + 0x18) = lVar7;
          }
          param_2 = (byte *)FUN_0066fa8c(param_3,lVar7,auVar11._0_8_);
        }
        else {
LAB_0065d35c:
          pbVar8 = auVar11._0_8_;
          uVar9 = auVar11._8_4_;
          if ((uVar9 == 0) || ((uVar9 & 7) == 4)) {
            if (pbVar8 != (byte *)0x0) {
              *(uint *)(param_3 + 10) = uVar9 - 1;
            }
            goto LAB_0065d420;
          }
          if ((*(ulong *)(param_1 + 8) & 1) == 0) {
            uVar6 = FUN_00661fa4(param_1 + 8);
            param_2 = (byte *)FUN_006fbab8(auVar11._8_8_ & 0xffffffff,uVar6,pbVar8,param_3);
          }
          else {
            param_2 = (byte *)FUN_006fbab8(auVar11._8_8_ & 0xffffffff,
                                           (*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,pbVar8
                                           ,param_3);
          }
        }
joined_r0x0065d38c:
        if (param_2 == (byte *)0x0) {
          pbVar8 = (byte *)0x0;
          goto LAB_0065d420;
        }
        if ((byte *)*param_3 <= param_2) goto LAB_0065d27c;
      }
      auVar4._8_4_ = uVar9;
      auVar4._0_8_ = pbVar8;
      auVar4._12_4_ = 0;
      auVar11._8_4_ = uVar9;
      auVar11._0_8_ = pbVar8;
      auVar11._12_4_ = 0;
      uVar9 = uVar9 >> 3;
      if (uVar9 == 2) goto LAB_0065d324;
LAB_0065d2d4:
      auVar11 = auVar4;
      pbVar8 = auVar11._0_8_;
      if ((uVar9 != 1) || ((auVar11._8_4_ & 0xff) != 8)) goto LAB_0065d35c;
      param_2 = pbVar8 + 1;
      bVar2 = *pbVar8;
      if ((char)bVar2 < '\0') {
        bVar1 = *param_2;
        if ((char)bVar1 < '\0') {
          auVar12 = FUN_0066fc04(pbVar8);
          param_2 = auVar12._0_8_;
          uVar10 = 2;
          *(int *)(param_1 + 0x20) = auVar12._8_4_;
          goto joined_r0x0065d38c;
        }
        param_2 = pbVar8 + 2;
        *(uint *)(param_1 + 0x20) = (uint)bVar2 + (uint)bVar1 * 0x80 + -0x80;
        uVar10 = 2;
        if ((byte *)*param_3 <= param_2) break;
        goto LAB_0065d2a0;
      }
      *(uint *)(param_1 + 0x20) = (uint)bVar2;
      uVar10 = 2;
    } while (param_2 < (byte *)*param_3);
  } while( true );
}


// ===== 0065d460  FUN_0065d460 =====

undefined1 * FUN_0065d460(long param_1,undefined1 *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 >> 1 & 1) != 0) {
    if (param_2 < (undefined1 *)*param_3) {
      uVar2 = *(uint *)(param_1 + 0x20);
      *param_2 = 8;
      param_2[1] = (char)uVar2;
    }
    else {
      param_2 = (undefined1 *)FUN_0066d3f8(param_3,param_2);
      uVar2 = *(uint *)(param_1 + 0x20);
      *param_2 = 8;
      param_2[1] = (char)uVar2;
    }
    if (uVar2 < 0x80) {
      param_2 = param_2 + 2;
    }
    else {
      uVar4 = (ulong)(long)(int)uVar2 >> 7;
      param_2[1] = (byte)uVar2 | 0x80;
      param_2[2] = (char)uVar4;
      param_2 = param_2 + 3;
      puVar3 = param_2;
      if (0x3fff < uVar2) {
        do {
          uVar5 = uVar4 >> 0xe;
          uVar4 = uVar4 >> 7;
          puVar3[-1] = puVar3[-1] | 0x80;
          param_2 = puVar3 + 1;
          *puVar3 = (char)uVar4;
          puVar3 = param_2;
        } while (uVar5 != 0);
      }
    }
  }
  if ((uVar1 & 1) != 0) {
    param_2 = (undefined1 *)
              FUN_00678d18(2,*(long *)(param_1 + 0x18),
                           *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x28),param_2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    puVar3 = (undefined1 *)
             FUN_006fc418((*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,param_2,param_3);
    return puVar3;
  }
  return param_2;
}


// ===== 0065d568  FUN_0065d568 =====

void FUN_0065d568(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) == 0) {
    FUN_006e5694(param_1,0,param_1 + 0x14);
    return;
  }
  if ((uVar1 & 1) == 0) {
    lVar3 = 0;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x18);
    lVar3 = (long)*(int *)(lVar4 + 0x18);
    puVar5 = (undefined8 *)0x0;
    if (*(long *)(lVar4 + 0x20) != 0) {
      puVar5 = (undefined8 *)(*(long *)(lVar4 + 0x20) + 8);
    }
    if (*(int *)(lVar4 + 0x18) == 0) {
      lVar3 = 0;
    }
    else {
      lVar6 = lVar3 << 3;
      do {
        lVar2 = FUN_0065b1f8(*puVar5);
        lVar6 = lVar6 + -8;
        lVar3 = lVar2 + lVar3 + (ulong)(((uint)LZCOUNT((uint)lVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
        puVar5 = puVar5 + 1;
      } while (lVar6 != 0);
    }
    lVar3 = FUN_006e5694(lVar4,lVar3,lVar4 + 0x28);
    lVar3 = lVar3 + (ulong)(((uint)LZCOUNT((uint)lVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    FUN_006e5694(param_1,lVar3 + ((LZCOUNT((long)*(int *)(param_1 + 0x20) | 1) ^ 0x3fU) * 9 + 0x89
                                 >> 6),param_1 + 0x14);
    return;
  }
  FUN_006e5694(param_1,lVar3,param_1 + 0x14);
  return;
}


// ===== 0065d690  FUN_0065d690 =====

void FUN_0065d690(long param_1,long param_2)

{
  undefined **ppuVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  
  uVar2 = *(uint *)(param_2 + 0x10);
  if ((uVar2 & 3) != 0) {
    if ((uVar2 & 1) != 0) {
      lVar7 = *(long *)(param_1 + 0x18);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      if (lVar7 == 0) {
        puVar5 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar5 = (ulong *)*puVar5;
        }
        lVar7 = FUN_006619e8(puVar5);
        *(long *)(param_1 + 0x18) = lVar7;
      }
      ppuVar1 = &PTR_PTR_FUN_007a9e58;
      if (*(undefined ***)(param_2 + 0x18) != (undefined **)0x0) {
        ppuVar1 = *(undefined ***)(param_2 + 0x18);
      }
      iVar3 = *(int *)(ppuVar1 + 3);
      if (iVar3 != 0) {
        puVar8 = ppuVar1[4];
        uVar6 = FUN_00675710(lVar7 + 0x10,iVar3);
        FUN_006629f8(lVar7 + 0x10,uVar6,puVar8 + 8,iVar3,
                     **(int **)(lVar7 + 0x20) - *(int *)(lVar7 + 0x18));
        iVar4 = **(int **)(lVar7 + 0x20);
        iVar3 = *(int *)(lVar7 + 0x18) + iVar3;
        *(int *)(lVar7 + 0x18) = iVar3;
        if (iVar4 < iVar3) {
          **(int **)(lVar7 + 0x20) = iVar3;
        }
      }
      if (((ulong)ppuVar1[1] & 1) != 0) {
        FUN_006621e0(lVar7 + 8,((ulong)ppuVar1[1] & 0xfffffffffffffffc) + 8);
      }
    }
    if ((uVar2 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    }
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar2;
  }
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  FUN_006621e0(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffc) + 8);
  return;
}


// ===== 0065d7d8  FUN_0065d7d8 =====

undefined ** FUN_0065d7d8(void)

{
  return &PTR_FUN_00798ca0;
}


// ===== 0065d7e4  FUN_0065d7e4 =====

undefined8 FUN_0065d7e4(void)

{
  return 1;
}


// ===== 0065d7ec  FUN_0065d7ec =====

void FUN_0065d7ec(void)

{
  FUN_00684dd0(FUN_0064dd54,&DAT_007ae908,&DAT_007aea20);
  return;
}


// ===== 0065d804  FUN_0065d804 =====

void FUN_0065d804(long *param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  
  uVar1 = param_2 | 2;
  if ((param_3 & 1) == 0) {
    uVar1 = param_2;
  }
  *param_1 = (long)(PTR_DAT_007a3038 + 0x10);
  param_1[1] = uVar1;
  param_1[2] = 0;
  param_1[3] = (long)&DAT_007aea80;
  param_1[4] = (long)&DAT_007aea80;
  return;
}


// ===== 0065d834  FUN_0065d834 =====

void FUN_0065d834(undefined8 *param_1)

{
  void *__ptr;
  ulong uVar1;
  
  if ((param_1[1] & 1) == 0) {
    uVar1 = param_1[1] & 0xfffffffffffffffc;
  }
  else {
                    /* try { // try from 0065d854 to 0065d86b has its CatchHandler @ 0065d8b0 */
    uVar1 = FUN_00662218();
  }
  if (uVar1 == 0) {
    FUN_00663a20(param_1 + 3);
    FUN_00663a20(param_1 + 4);
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


// ===== 0065d8b4  FUN_0065d8b4 =====

void FUN_0065d8b4(void *param_1)

{
  FUN_0065d834();
  free(param_1);
  return;
}


// ===== 0065d8d8  FUN_0065d8d8 =====

void FUN_0065d8d8(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}


// ===== 0065d8e0  FUN_0065d8e0 =====

void FUN_0065d8e0(long param_1)

{
  uint uVar1;
  byte bVar2;
  byte *pbVar3;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      pbVar3 = (byte *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
      if ((*pbVar3 & 1) == 0) {
        pbVar3[0] = 0;
        pbVar3[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar3 + 0x10) = 0;
        pbVar3[8] = 0;
        pbVar3[9] = 0;
        pbVar3[10] = 0;
        pbVar3[0xb] = 0;
        pbVar3[0xc] = 0;
        pbVar3[0xd] = 0;
        pbVar3[0xe] = 0;
        pbVar3[0xf] = 0;
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      pbVar3 = (byte *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
      if ((*pbVar3 & 1) == 0) {
        pbVar3[0] = 0;
        pbVar3[1] = 0;
        bVar2 = *(byte *)(param_1 + 8);
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
      else {
        **(undefined1 **)(pbVar3 + 0x10) = 0;
        pbVar3[8] = 0;
        pbVar3[9] = 0;
        pbVar3[10] = 0;
        pbVar3[0xb] = 0;
        pbVar3[0xc] = 0;
        pbVar3[0xd] = 0;
        pbVar3[0xe] = 0;
        pbVar3[0xf] = 0;
        bVar2 = *(byte *)(param_1 + 8);
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
      goto joined_r0x0065d924;
    }
  }
  bVar2 = *(byte *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
joined_r0x0065d924:
  if ((bVar2 & 1) == 0) {
    return;
  }
  FUN_006622b8();
  return;
}


// ===== 0065d968  FUN_0065d968 =====

byte * FUN_0065d968(long param_1,byte *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  ulong *puVar4;
  uint uVar5;
  byte *pbVar6;
  undefined1 auVar7 [16];
  
  do {
    while( true ) {
      if ((byte *)*param_3 <= param_2) {
        iVar1 = (int)param_2 - *(int *)(param_3 + 1);
        if (*(int *)((long)param_3 + 0x1c) == iVar1) {
          pbVar6 = (byte *)0x0;
          if (param_3[2] != 0 || iVar1 < 1) {
            pbVar6 = param_2;
          }
          return pbVar6;
        }
        auVar7 = FUN_0066f53c(param_3,iVar1,*(undefined4 *)((long)param_3 + 0x5c));
        param_2 = auVar7._0_8_;
        if ((auVar7 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
          return param_2;
        }
      }
      pbVar6 = param_2 + 1;
      uVar5 = (uint)*param_2;
      if (-1 < (char)*param_2) break;
      uVar5 = (uVar5 + (uint)*pbVar6 * 0x80) - 0x80;
      if (-1 < (char)*pbVar6) {
        pbVar6 = param_2 + 2;
        break;
      }
      auVar7 = FUN_0066fe50();
      uVar5 = (uint)(auVar7._8_8_ >> 3) & 0x1fffffff;
      auVar2 = auVar7;
      if (uVar5 == 2) goto LAB_0065da28;
LAB_0065d9e0:
      auVar7 = auVar2;
      if ((uVar5 == 1) && ((auVar7._8_4_ & 0xff) == 10)) {
        puVar4 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar4 = (ulong *)*puVar4;
        }
        uVar3 = FUN_0066399c(param_1 + 0x18,puVar4);
        param_2 = (byte *)FUN_0066ff90(uVar3,auVar7._0_8_,param_3);
        if (param_2 == (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
LAB_0065da68:
        pbVar6 = auVar7._0_8_;
        uVar5 = auVar7._8_4_;
        if ((uVar5 == 0) || ((uVar5 & 7) == 4)) {
          if (pbVar6 != (byte *)0x0) {
            *(uint *)(param_3 + 10) = uVar5 - 1;
            return pbVar6;
          }
          return (byte *)0x0;
        }
        if ((*(ulong *)(param_1 + 8) & 1) == 0) {
          uVar3 = FUN_00661fa4(param_1 + 8);
          param_2 = (byte *)FUN_006fbab8(auVar7._8_8_ & 0xffffffff,uVar3,pbVar6,param_3);
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
        }
        else {
          param_2 = (byte *)FUN_006fbab8(auVar7._8_8_ & 0xffffffff,
                                         (*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,pbVar6,
                                         param_3);
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
        }
      }
    }
    auVar2._8_4_ = uVar5;
    auVar2._0_8_ = pbVar6;
    auVar2._12_4_ = 0;
    auVar7._8_4_ = uVar5;
    auVar7._0_8_ = pbVar6;
    auVar7._12_4_ = 0;
    uVar5 = uVar5 >> 3;
    if (uVar5 != 2) goto LAB_0065d9e0;
LAB_0065da28:
    if ((auVar7._8_4_ & 0xff) != 0x12) goto LAB_0065da68;
    puVar4 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar4 = (ulong *)*puVar4;
    }
    uVar3 = FUN_0066399c(param_1 + 0x20,puVar4);
    param_2 = (byte *)FUN_0066ff90(uVar3,auVar7._0_8_,param_3);
    if (param_2 == (byte *)0x0) {
      return (byte *)0x0;
    }
  } while( true );
}


// ===== 0065db58  FUN_0065db58 =====

undefined1 * FUN_0065db58(long param_1,undefined1 *param_2,long *param_3)

{
  size_t sVar1;
  void *pvVar2;
  uint uVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  ulong uVar6;
  
  uVar3 = *(uint *)(param_1 + 0x10);
  if ((uVar3 & 1) != 0) {
    pbVar5 = (byte *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    sVar1 = (ulong)(*pbVar5 >> 1);
    if ((*pbVar5 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar5 + 8);
    }
    if (((long)sVar1 < 0x80) && ((long)sVar1 <= (*param_3 - (long)param_2) + 0xe)) {
      param_2[1] = (char)sVar1;
      *param_2 = 10;
      pvVar2 = (void *)((ulong)pbVar5 | 1);
      if ((*pbVar5 & 1) != 0) {
        pvVar2 = *(void **)(pbVar5 + 0x10);
      }
      memcpy(param_2 + 2,pvVar2,sVar1);
      param_2 = param_2 + 2 + sVar1;
    }
    else {
      param_2 = (undefined1 *)FUN_0066d778(param_3,1);
    }
  }
  if ((uVar3 >> 1 & 1) == 0) {
    uVar6 = *(ulong *)(param_1 + 8);
  }
  else {
    pbVar5 = (byte *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
    sVar1 = (ulong)(*pbVar5 >> 1);
    if ((*pbVar5 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar5 + 8);
    }
    if (((long)sVar1 < 0x80) && ((long)sVar1 <= (*param_3 - (long)param_2) + 0xe)) {
      param_2[1] = (char)sVar1;
      *param_2 = 0x12;
      pvVar2 = (void *)((ulong)pbVar5 | 1);
      if ((*pbVar5 & 1) != 0) {
        pvVar2 = *(void **)(pbVar5 + 0x10);
      }
      memcpy(param_2 + 2,pvVar2,sVar1);
      param_2 = param_2 + 2 + sVar1;
      uVar6 = *(ulong *)(param_1 + 8);
    }
    else {
      param_2 = (undefined1 *)FUN_0066d778(param_3,2);
      uVar6 = *(ulong *)(param_1 + 8);
    }
  }
  if ((uVar6 & 1) != 0) {
    puVar4 = (undefined1 *)FUN_006fc418((uVar6 & 0xfffffffffffffffc) + 8,param_2,param_3);
    return puVar4;
  }
  return param_2;
}


// ===== 0065dce0  FUN_0065dce0 =====

void FUN_0065dce0(long param_1)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  byte *pbVar5;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 3) == 0) {
    FUN_006e5694(param_1,0,param_1 + 0x14);
    return;
  }
  if ((uVar2 & 1) == 0) {
    lVar4 = 0;
  }
  else {
    pbVar5 = (byte *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    bVar3 = *pbVar5;
    uVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      uVar1 = *(ulong *)(pbVar5 + 8);
    }
    lVar4 = uVar1 + (((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  }
  if ((uVar2 >> 1 & 1) == 0) {
    FUN_006e5694(param_1,lVar4,param_1 + 0x14);
    return;
  }
  pbVar5 = (byte *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
  bVar3 = *pbVar5;
  uVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    uVar1 = *(ulong *)(pbVar5 + 8);
  }
  FUN_006e5694(param_1,lVar4 + uVar1 +
                       (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1,
               param_1 + 0x14);
  return;
}


// ===== 0065dd94  FUN_0065dd94 =====

void FUN_0065dd94(long param_1,long param_2)

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
      uVar3 = *(ulong *)(param_2 + 0x20);
      puVar2 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar2 = (ulong *)*puVar2;
      }
      FUN_006636d4(param_1 + 0x20,uVar3 & 0xfffffffffffffffc,puVar2);
    }
  }
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  FUN_006621e0(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffc) + 8);
  return;
}


// ===== 0065de54  FUN_0065de54 =====

undefined ** FUN_0065de54(void)

{
  return &PTR_FUN_00798cb0;
}


// ===== 0065de60  FUN_0065de60 =====

undefined8 FUN_0065de60(void)

{
  return 1;
}


// ===== 0065de68  FUN_0065de68 =====

void FUN_0065de68(void)

{
  FUN_00684dd0(FUN_0064dd54,&DAT_007ae908,&DAT_007aea30);
  return;
}


// ===== 0065de80  FUN_0065de80 =====

void FUN_0065de80(long param_1)

{
  int iVar1;
  ulong *puVar2;
  void *__ptr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 < 7) {
    if (iVar1 == 1) {
      puVar2 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar2 = (ulong *)*puVar2;
      }
      if ((puVar2 == (ulong *)0x0) && (__ptr = *(void **)(param_1 + 0x20), __ptr != (void *)0x0)) {
        FUN_0065ba04(__ptr);
LAB_0065dfe4:
        free(__ptr);
        *(undefined4 *)(param_1 + 0x28) = 0;
        return;
      }
    }
    else if (iVar1 == 4) {
      puVar2 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar2 = (ulong *)*puVar2;
      }
      if ((puVar2 == (ulong *)0x0) && (__ptr = *(void **)(param_1 + 0x20), __ptr != (void *)0x0)) {
        FUN_0065c120(__ptr);
        goto LAB_0065dfe4;
      }
    }
    else if (iVar1 == 5) {
      puVar2 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar2 = (ulong *)*puVar2;
      }
      if ((puVar2 == (ulong *)0x0) && (__ptr = *(void **)(param_1 + 0x20), __ptr != (void *)0x0)) {
        FUN_0065c5e4(__ptr);
        goto LAB_0065dfe4;
      }
    }
  }
  else if (iVar1 == 7) {
    puVar2 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar2 = (ulong *)*puVar2;
    }
    if ((puVar2 == (ulong *)0x0) && (__ptr = *(void **)(param_1 + 0x20), __ptr != (void *)0x0)) {
      FUN_0065d834(__ptr);
      goto LAB_0065dfe4;
    }
  }
  else if (iVar1 == 8) {
    puVar2 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar2 = (ulong *)*puVar2;
    }
    if ((puVar2 == (ulong *)0x0) && (__ptr = *(void **)(param_1 + 0x20), __ptr != (void *)0x0)) {
      FUN_0065d114(__ptr);
      goto LAB_0065dfe4;
    }
  }
  else if (iVar1 == 9) {
    puVar2 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar2 = (ulong *)*puVar2;
    }
    if ((puVar2 == (ulong *)0x0) && (__ptr = *(void **)(param_1 + 0x20), __ptr != (void *)0x0)) {
      FUN_0065cc50(__ptr);
      goto LAB_0065dfe4;
    }
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}


// ===== 0065e020  FUN_0065e020 =====

void FUN_0065e020(long *param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  
  uVar1 = param_2 | 2;
  if ((param_3 & 1) == 0) {
    uVar1 = param_2;
  }
  *param_1 = (long)(PTR_DAT_007a3048 + 0x10);
  param_1[1] = uVar1;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[2] = 0;
  param_1[3] = (long)&DAT_007aea80;
  return;
}


// ===== 0065e050  FUN_0065e050 =====

void FUN_0065e050(long *param_1,long param_2)

{
  undefined **ppuVar1;
  undefined4 uVar2;
  int iVar3;
  ulong *puVar4;
  long lVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  undefined *puVar9;
  long *plVar10;
  
  puVar4 = (ulong *)(param_1 + 1);
  *puVar4 = 0;
  puVar9 = PTR_DAT_007a3048;
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  plVar10 = param_1 + 3;
  *plVar10 = 0;
  *(undefined4 *)(param_1 + 2) = uVar2;
  *param_1 = (long)(puVar9 + 0x10);
  uVar8 = *(ulong *)(param_2 + 8);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((uVar8 & 1) != 0) {
                    /* try { // try from 0065e0a4 to 0065e35b has its CatchHandler @ 0065e3b4 */
    FUN_006621e0(puVar4,(uVar8 & 0xfffffffffffffffc) + 8);
  }
  *plVar10 = (long)&DAT_007aea80;
  if ((*(byte *)(param_2 + 0x10) & 1) != 0) {
    puVar7 = (ulong *)(*puVar4 & 0xfffffffffffffffc);
    if ((*puVar4 & 1) != 0) {
      puVar7 = (ulong *)*puVar7;
    }
    FUN_006636d4(plVar10,*(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc,puVar7);
  }
  *(undefined4 *)(param_1 + 5) = 0;
  iVar3 = *(int *)(param_2 + 0x28);
  if (iVar3 < 7) {
    if (iVar3 == 1) {
      FUN_0065de80(param_1);
      *(undefined4 *)(param_1 + 5) = 1;
      puVar4 = (ulong *)(param_1[1] & 0xfffffffffffffffc);
      if ((param_1[1] & 1U) != 0) {
        puVar4 = (ulong *)*puVar4;
      }
      lVar5 = FUN_00661a68(puVar4);
      param_1[4] = lVar5;
      puVar9 = *(undefined **)(param_2 + 0x20);
      if (*(int *)(param_2 + 0x28) != 1) {
        puVar9 = PTR_PTR_007a2690;
      }
      FUN_0065bf88(lVar5,puVar9);
      return;
    }
    if (iVar3 != 4) {
      if (iVar3 != 5) {
        return;
      }
      FUN_0065de80(param_1);
      *(undefined4 *)(param_1 + 5) = 5;
      puVar4 = (ulong *)(param_1[1] & 0xfffffffffffffffc);
      if ((param_1[1] & 1U) != 0) {
        puVar4 = (ulong *)*puVar4;
      }
      lVar5 = FUN_00661b68(puVar4);
      param_1[4] = lVar5;
      puVar9 = *(undefined **)(param_2 + 0x20);
      if (*(int *)(param_2 + 0x28) != 5) {
        puVar9 = PTR_PTR_007a2ec8;
      }
      FUN_0065cb44(lVar5,puVar9);
      return;
    }
    FUN_0065de80(param_1);
    *(undefined4 *)(param_1 + 5) = 4;
    puVar4 = (ulong *)(param_1[1] & 0xfffffffffffffffc);
    if ((param_1[1] & 1U) != 0) {
      puVar4 = (ulong *)*puVar4;
    }
    lVar5 = FUN_00661ae8(puVar4);
    param_1[4] = lVar5;
    puVar9 = *(undefined **)(param_2 + 0x20);
    if (*(int *)(param_2 + 0x28) != 4) {
      puVar9 = PTR_PTR_007a2ad0;
    }
    if ((puVar9[0x10] & 1) != 0) {
      lVar6 = *(long *)(lVar5 + 0x18);
      *(uint *)(lVar5 + 0x10) = *(uint *)(lVar5 + 0x10) | 1;
      if (lVar6 == 0) {
        puVar4 = (ulong *)(*(ulong *)(lVar5 + 8) & 0xfffffffffffffffc);
        if ((*(ulong *)(lVar5 + 8) & 1) != 0) {
          puVar4 = (ulong *)*puVar4;
        }
        lVar6 = FUN_00661d68(puVar4);
        *(long *)(lVar5 + 0x18) = lVar6;
      }
      ppuVar1 = &PTR_PTR_FUN_007a9f68;
      if (*(undefined ***)(puVar9 + 0x18) != (undefined **)0x0) {
        ppuVar1 = *(undefined ***)(puVar9 + 0x18);
      }
      FUN_0065ec98(lVar6,ppuVar1);
    }
  }
  else {
    if (iVar3 == 7) {
      FUN_0065de80(param_1);
      *(undefined4 *)(param_1 + 5) = 7;
      puVar4 = (ulong *)(param_1[1] & 0xfffffffffffffffc);
      if ((param_1[1] & 1U) != 0) {
        puVar4 = (ulong *)*puVar4;
      }
      lVar5 = FUN_00661ce8(puVar4);
      param_1[4] = lVar5;
      puVar9 = *(undefined **)(param_2 + 0x20);
      if (*(int *)(param_2 + 0x28) != 7) {
        puVar9 = PTR_PTR_007a2ed0;
      }
      FUN_0065dd94(lVar5,puVar9);
      return;
    }
    if (iVar3 == 8) {
      FUN_0065de80(param_1);
      *(undefined4 *)(param_1 + 5) = 8;
      puVar4 = (ulong *)(param_1[1] & 0xfffffffffffffffc);
      if ((param_1[1] & 1U) != 0) {
        puVar4 = (ulong *)*puVar4;
      }
      lVar5 = FUN_00661c68(puVar4);
      param_1[4] = lVar5;
      puVar9 = *(undefined **)(param_2 + 0x20);
      if (*(int *)(param_2 + 0x28) != 8) {
        puVar9 = PTR_PTR_007a2ca0;
      }
      FUN_0065d690(lVar5,puVar9);
      return;
    }
    if (iVar3 != 9) {
      return;
    }
    FUN_0065de80(param_1);
    *(undefined4 *)(param_1 + 5) = 9;
    puVar4 = (ulong *)(param_1[1] & 0xfffffffffffffffc);
    if ((param_1[1] & 1U) != 0) {
      puVar4 = (ulong *)*puVar4;
    }
    lVar5 = FUN_00661be8(puVar4);
    param_1[4] = lVar5;
    puVar9 = *(undefined **)(param_2 + 0x20);
    if (*(int *)(param_2 + 0x28) != 9) {
      puVar9 = PTR_PTR_007a2ad8;
    }
    if ((puVar9[0x10] & 1) != 0) {
      lVar6 = *(long *)(lVar5 + 0x18);
      *(uint *)(lVar5 + 0x10) = *(uint *)(lVar5 + 0x10) | 1;
      if (lVar6 == 0) {
        puVar4 = (ulong *)(*(ulong *)(lVar5 + 8) & 0xfffffffffffffffc);
        if ((*(ulong *)(lVar5 + 8) & 1) != 0) {
          puVar4 = (ulong *)*puVar4;
        }
        lVar6 = FUN_00661d68(puVar4);
        *(long *)(lVar5 + 0x18) = lVar6;
      }
      ppuVar1 = &PTR_PTR_FUN_007a9f68;
      if (*(undefined ***)(puVar9 + 0x18) != (undefined **)0x0) {
        ppuVar1 = *(undefined ***)(puVar9 + 0x18);
      }
      FUN_0065ec98(lVar6,ppuVar1);
    }
  }
  if ((*(ulong *)(puVar9 + 8) & 1) != 0) {
    FUN_006621e0(lVar5 + 8,(*(ulong *)(puVar9 + 8) & 0xfffffffffffffffc) + 8);
  }
  return;
}


// ===== 0065e3c8  FUN_0065e3c8 =====

void FUN_0065e3c8(undefined8 *param_1)

{
  void *__ptr;
  ulong uVar1;
  
  if ((param_1[1] & 1) == 0) {
    uVar1 = param_1[1] & 0xfffffffffffffffc;
  }
  else {
                    /* try { // try from 0065e3e8 to 0065e407 has its CatchHandler @ 0065e44c */
    uVar1 = FUN_00662218();
  }
  if (uVar1 == 0) {
    FUN_00663a20(param_1 + 3);
    if (*(int *)(param_1 + 5) != 0) {
      FUN_0065de80(param_1);
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


// ===== 0065e450  FUN_0065e450 =====

void FUN_0065e450(void *param_1)

{
  FUN_0065e3c8();
  free(param_1);
  return;
}


// ===== 0065e474  FUN_0065e474 =====

void FUN_0065e474(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}


// ===== 0065e47c  FUN_0065e47c =====

byte * FUN_0065e47c(long param_1,byte *param_2,undefined8 *param_3)

{
  byte bVar1;
  int iVar2;
  undefined1 auVar3 [16];
  ulong *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  undefined1 auVar10 [16];
  
  do {
    while( true ) {
      if ((byte *)*param_3 <= param_2) {
        iVar2 = (int)param_2 - *(int *)(param_3 + 1);
        if (*(int *)((long)param_3 + 0x1c) == iVar2) {
          if (param_3[2] == 0 && 0 < iVar2) {
            return (byte *)0x0;
          }
          return param_2;
        }
        auVar10 = FUN_0066f53c(param_3,iVar2,*(undefined4 *)((long)param_3 + 0x5c));
        param_2 = auVar10._0_8_;
        if ((auVar10 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
          return param_2;
        }
      }
      pbVar9 = param_2 + 1;
      bVar1 = *param_2;
      auVar3[8] = bVar1;
      auVar3._0_8_ = pbVar9;
      auVar3._9_7_ = 0;
      auVar10[8] = bVar1;
      auVar10._0_8_ = pbVar9;
      auVar10._9_7_ = 0;
      if ((char)bVar1 < '\0') break;
      uVar8 = (uint)(bVar1 >> 3);
joined_r0x0065e65c:
      if (uVar8 < 6) goto LAB_0065e5b4;
LAB_0065e540:
      uVar6 = auVar10._0_8_;
      uVar7 = auVar10._8_4_;
      if (7 < uVar8) {
        if (uVar8 != 8) {
          if ((uVar8 != 9) || ((uVar7 & 0xff) != 0x4a)) goto LAB_0065e730;
          if (*(int *)(param_1 + 0x28) == 9) goto LAB_0065e4c0;
          FUN_0065de80(param_1);
          *(undefined4 *)(param_1 + 0x28) = 9;
          puVar4 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
          if ((*(ulong *)(param_1 + 8) & 1) != 0) {
            puVar4 = (ulong *)*puVar4;
          }
          uVar5 = FUN_00661be8(puVar4);
          goto LAB_0065e500;
        }
        if ((uVar7 & 0xff) != 0x42) goto LAB_0065e730;
        if (*(int *)(param_1 + 0x28) != 8) {
          FUN_0065de80(param_1);
          *(undefined4 *)(param_1 + 0x28) = 8;
          puVar4 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
          if ((*(ulong *)(param_1 + 8) & 1) != 0) {
            puVar4 = (ulong *)*puVar4;
          }
          uVar5 = FUN_00661c68(puVar4);
          goto LAB_0065e500;
        }
        goto LAB_0065e4c0;
      }
      if (uVar8 != 6) {
        if ((uVar8 == 7) && ((uVar7 & 0xff) == 0x3a)) {
          if (*(int *)(param_1 + 0x28) != 7) {
            FUN_0065de80(param_1);
            *(undefined4 *)(param_1 + 0x28) = 7;
            puVar4 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
            if ((*(ulong *)(param_1 + 8) & 1) != 0) {
              puVar4 = (ulong *)*puVar4;
            }
            uVar5 = FUN_00661ce8(puVar4);
            goto LAB_0065e500;
          }
          goto LAB_0065e4c0;
        }
        goto LAB_0065e730;
      }
      if ((uVar7 & 0xff) != 0x32) goto LAB_0065e730;
      puVar4 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar4 = (ulong *)*puVar4;
      }
      uVar5 = FUN_0066399c(param_1 + 0x18,puVar4);
      param_2 = (byte *)FUN_0066ff90(uVar5,uVar6,param_3);
joined_r0x0065e6b8:
      if (param_2 == (byte *)0x0) {
        return (byte *)0x0;
      }
    }
    uVar8 = ((uint)bVar1 + (uint)*pbVar9 * 0x80) - 0x80;
    if ((char)*pbVar9 < '\0') {
      auVar10 = FUN_0066fe50();
      uVar8 = (uint)(auVar10._8_8_ >> 3) & 0x1fffffff;
      auVar3 = auVar10;
      goto joined_r0x0065e65c;
    }
    auVar3._8_4_ = uVar8;
    auVar3._0_8_ = param_2 + 2;
    auVar3._12_4_ = 0;
    auVar10._8_4_ = uVar8;
    auVar10._0_8_ = param_2 + 2;
    auVar10._12_4_ = 0;
    uVar8 = uVar8 >> 3;
    if (5 < uVar8) goto LAB_0065e540;
LAB_0065e5b4:
    auVar10 = auVar3;
    uVar6 = auVar10._0_8_;
    uVar7 = auVar10._8_4_;
    if (uVar8 == 1) {
      if ((uVar7 & 0xff) == 10) {
        if (*(int *)(param_1 + 0x28) != 1) {
          FUN_0065de80(param_1);
          *(undefined4 *)(param_1 + 0x28) = 1;
          puVar4 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
          if ((*(ulong *)(param_1 + 8) & 1) != 0) {
            puVar4 = (ulong *)*puVar4;
          }
          uVar5 = FUN_00661a68(puVar4);
          goto LAB_0065e500;
        }
        goto LAB_0065e4c0;
      }
LAB_0065e730:
      pbVar9 = auVar10._0_8_;
      uVar8 = auVar10._8_4_;
      if ((uVar8 == 0) || ((uVar8 & 7) == 4)) {
        if (pbVar9 != (byte *)0x0) {
          *(uint *)(param_3 + 10) = uVar8 - 1;
          return pbVar9;
        }
        return (byte *)0x0;
      }
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        uVar6 = FUN_00661fa4(param_1 + 8);
        param_2 = (byte *)FUN_006fbab8(auVar10._8_8_ & 0xffffffff,uVar6,pbVar9,param_3);
      }
      else {
        param_2 = (byte *)FUN_006fbab8(auVar10._8_8_ & 0xffffffff,
                                       (*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,pbVar9,
                                       param_3);
      }
    }
    else {
      if (uVar8 != 4) {
        if ((uVar8 == 5) && ((uVar7 & 0xff) == 0x2a)) {
          if (*(int *)(param_1 + 0x28) != 5) {
            FUN_0065de80(param_1);
            *(undefined4 *)(param_1 + 0x28) = 5;
            puVar4 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
            if ((*(ulong *)(param_1 + 8) & 1) != 0) {
              puVar4 = (ulong *)*puVar4;
            }
            uVar5 = FUN_00661b68(puVar4);
            goto LAB_0065e500;
          }
          goto LAB_0065e4c0;
        }
        goto LAB_0065e730;
      }
      if ((uVar7 & 0xff) != 0x22) goto LAB_0065e730;
      if (*(int *)(param_1 + 0x28) != 4) {
        FUN_0065de80(param_1);
        *(undefined4 *)(param_1 + 0x28) = 4;
        puVar4 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar4 = (ulong *)*puVar4;
        }
        uVar5 = FUN_00661ae8(puVar4);
LAB_0065e500:
        *(undefined8 *)(param_1 + 0x20) = uVar5;
        param_2 = (byte *)FUN_0066fa8c(param_3,uVar5,uVar6);
        goto joined_r0x0065e6b8;
      }
LAB_0065e4c0:
      param_2 = (byte *)FUN_0066fa8c(param_3,*(undefined8 *)(param_1 + 0x20),uVar6);
    }
    if (param_2 == (byte *)0x0) {
      return (byte *)0x0;
    }
  } while( true );
}


// ===== 0065e83c  FUN_0065e83c =====

undefined1 * FUN_0065e83c(long param_1,undefined1 *param_2,long *param_3)

{
  size_t __n;
  void *__src;
  byte bVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  byte *pbVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 0x28);
  if (iVar6 == 5) {
    param_2 = (undefined1 *)
              FUN_00678d18(5,*(long *)(param_1 + 0x20),
                           *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x14),param_2,param_3);
    bVar1 = *(byte *)(param_1 + 0x10);
joined_r0x0065e9bc:
    if ((bVar1 & 1) == 0) goto LAB_0065e8a0;
LAB_0065e8e8:
    pbVar5 = (byte *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    __n = (ulong)(*pbVar5 >> 1);
    if ((*pbVar5 & 1) != 0) {
      __n = *(size_t *)(pbVar5 + 8);
    }
    if (((long)__n < 0x80) && ((long)__n <= (*param_3 - (long)param_2) + 0xe)) {
      param_2[1] = (char)__n;
      *param_2 = 0x32;
      __src = (void *)((ulong)pbVar5 | 1);
      if ((*pbVar5 & 1) != 0) {
        __src = *(void **)(pbVar5 + 0x10);
      }
      memcpy(param_2 + 2,__src,__n);
      param_2 = param_2 + 2 + __n;
      iVar6 = *(int *)(param_1 + 0x28);
      goto joined_r0x0065e95c;
    }
    param_2 = (undefined1 *)FUN_0066d778(param_3,6);
    iVar6 = *(int *)(param_1 + 0x28);
    if (iVar6 == 9) goto LAB_0065e960;
LAB_0065e8ac:
    if (iVar6 == 8) {
      lVar4 = *(long *)(param_1 + 0x20);
      uVar2 = 8;
    }
    else {
      if (iVar6 != 7) goto LAB_0065e984;
      lVar4 = *(long *)(param_1 + 0x20);
      uVar2 = 7;
    }
  }
  else {
    if (iVar6 == 4) {
      param_2 = (undefined1 *)
                FUN_00678d18(4,*(long *)(param_1 + 0x20),
                             *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x14),param_2,param_3);
      bVar1 = *(byte *)(param_1 + 0x10);
    }
    else {
      if (iVar6 == 1) {
        param_2 = (undefined1 *)
                  FUN_00678d18(1,*(long *)(param_1 + 0x20),
                               *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x14),param_2,param_3);
        bVar1 = *(byte *)(param_1 + 0x10);
        goto joined_r0x0065e9bc;
      }
      bVar1 = *(byte *)(param_1 + 0x10);
    }
    if ((bVar1 & 1) != 0) goto LAB_0065e8e8;
LAB_0065e8a0:
    iVar6 = *(int *)(param_1 + 0x28);
joined_r0x0065e95c:
    if (iVar6 != 9) goto LAB_0065e8ac;
LAB_0065e960:
    lVar4 = *(long *)(param_1 + 0x20);
    uVar2 = 9;
  }
  param_2 = (undefined1 *)FUN_00678d18(uVar2,lVar4,*(undefined4 *)(lVar4 + 0x14),param_2,param_3);
LAB_0065e984:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  puVar3 = (undefined1 *)
           FUN_006fc418((*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,param_2,param_3);
  return puVar3;
}


// ===== 0065ea04  FUN_0065ea04 =====

undefined4 FUN_0065ea04(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}


// ===== 0065ea0c  FUN_0065ea0c =====

undefined4 FUN_0065ea0c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}


// ===== 0065ea14  FUN_0065ea14 =====

undefined4 FUN_0065ea14(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}


// ===== 0065ea1c  FUN_0065ea1c =====

undefined4 FUN_0065ea1c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}


// ===== 0065ea24  FUN_0065ea24 =====

undefined4 FUN_0065ea24(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}


// ===== 0065ea2c  FUN_0065ea2c =====

undefined4 FUN_0065ea2c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}


// ===== 0065ea34  FUN_0065ea34 =====

void FUN_0065ea34(long param_1)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  byte *pbVar6;
  long lVar7;
  long lVar8;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    lVar7 = 0;
    iVar5 = *(int *)(param_1 + 0x28);
    if (iVar5 < 7) goto LAB_0065eac4;
LAB_0065ea60:
    if (iVar5 == 7) {
      lVar8 = *(long *)(param_1 + 0x20);
      uVar2 = *(uint *)(lVar8 + 0x10);
      if ((uVar2 & 3) == 0) {
        lVar4 = 0;
      }
      else {
        if ((uVar2 & 1) == 0) {
          lVar4 = 0;
        }
        else {
          pbVar6 = (byte *)(*(ulong *)(lVar8 + 0x18) & 0xfffffffffffffffc);
          bVar3 = *pbVar6;
          uVar1 = (ulong)(bVar3 >> 1);
          if ((bVar3 & 1) != 0) {
            uVar1 = *(ulong *)(pbVar6 + 8);
          }
          lVar4 = uVar1 + (((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
        }
        if ((uVar2 >> 1 & 1) != 0) {
          pbVar6 = (byte *)(*(ulong *)(lVar8 + 0x20) & 0xfffffffffffffffc);
          bVar3 = *pbVar6;
          uVar1 = (ulong)(bVar3 >> 1);
          if ((bVar3 & 1) != 0) {
            uVar1 = *(ulong *)(pbVar6 + 8);
          }
          lVar4 = lVar4 + uVar1 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) +
                  1;
        }
      }
      goto LAB_0065ec54;
    }
    if (iVar5 != 8) {
      if (iVar5 != 9) goto LAB_0065ec7c;
      goto LAB_0065eafc;
    }
    lVar8 = FUN_0065d568(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    pbVar6 = (byte *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    bVar3 = *pbVar6;
    uVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      uVar1 = *(ulong *)(pbVar6 + 8);
    }
    lVar7 = uVar1 + (((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    iVar5 = *(int *)(param_1 + 0x28);
    if (6 < iVar5) goto LAB_0065ea60;
LAB_0065eac4:
    if (iVar5 == 1) {
      lVar8 = FUN_0065be60(*(undefined8 *)(param_1 + 0x20));
    }
    else {
      if (iVar5 == 4) {
LAB_0065eafc:
        lVar8 = *(long *)(param_1 + 0x20);
        if ((*(byte *)(lVar8 + 0x10) & 1) != 0) {
          lVar4 = FUN_0065ea34(*(undefined8 *)(lVar8 + 0x18));
          lVar4 = lVar4 + (ulong)(((uint)LZCOUNT((uint)lVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
          goto LAB_0065ec54;
        }
      }
      else {
        if (iVar5 != 5) goto LAB_0065ec7c;
        lVar8 = *(long *)(param_1 + 0x20);
        uVar2 = *(uint *)(lVar8 + 0x10);
        if ((uVar2 & 3) != 0) {
          if ((uVar2 & 1) == 0) {
            lVar4 = 0;
          }
          else {
            lVar4 = FUN_0065ea34(*(undefined8 *)(lVar8 + 0x18));
            lVar4 = lVar4 + (ulong)(((uint)LZCOUNT((uint)lVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
          }
          if ((uVar2 >> 1 & 1) != 0) {
            lVar4 = lVar4 + ((LZCOUNT((long)*(int *)(lVar8 + 0x20) | 1) ^ 0x3fU) * 9 + 0x89 >> 6);
          }
          goto LAB_0065ec54;
        }
      }
      lVar4 = 0;
LAB_0065ec54:
      lVar8 = FUN_006e5694(lVar8,lVar4,lVar8 + 0x14);
    }
  }
  lVar7 = lVar7 + lVar8 + (ulong)(((uint)LZCOUNT((uint)lVar8 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
LAB_0065ec7c:
  FUN_006e5694(param_1,lVar7,param_1 + 0x14);
  return;
}


// ===== 0065ec98  FUN_0065ec98 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0065ec98(long param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined **ppuVar6;
  ulong *puVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  
  if ((*(byte *)(param_2 + 0x10) & 1) != 0) {
    uVar8 = *(ulong *)(param_2 + 0x18);
    puVar7 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar7 = (ulong *)*puVar7;
    }
    FUN_006636d4(param_1 + 0x18,uVar8 & 0xfffffffffffffffc,puVar7);
  }
  iVar1 = *(int *)(param_2 + 0x28);
  if (iVar1 < 7) {
    if (iVar1 == 1) {
      if (*(int *)(param_1 + 0x28) == 1) {
        FUN_0065bf88(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_2 + 0x20));
        uVar8 = *(ulong *)(param_2 + 8);
      }
      else {
        FUN_0065de80(param_1);
        *(undefined4 *)(param_1 + 0x28) = 1;
        puVar7 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar7 = (ulong *)*puVar7;
        }
        uVar4 = FUN_00661a68(puVar7);
        *(undefined8 *)(param_1 + 0x20) = uVar4;
        ppuVar6 = *(undefined ***)(param_2 + 0x20);
        if (*(int *)(param_2 + 0x28) != 1) {
          ppuVar6 = &PTR_PTR_FUN_007a9e88;
        }
        FUN_0065bf88(uVar4,ppuVar6);
        uVar8 = *(ulong *)(param_2 + 8);
      }
      goto joined_r0x0065ee50;
    }
    if (iVar1 == 4) {
      if (*(int *)(param_1 + 0x28) == 4) {
LAB_0065edd4:
        lVar10 = *(long *)(param_1 + 0x20);
        puVar11 = *(undefined **)(param_2 + 0x20);
        bVar2 = puVar11[0x10];
      }
      else {
        FUN_0065de80(param_1);
        *(undefined4 *)(param_1 + 0x28) = 4;
        puVar7 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar7 = (ulong *)*puVar7;
        }
        lVar10 = FUN_00661ae8(puVar7);
        puVar9 = PTR_PTR_007a2ad0;
        *(long *)(param_1 + 0x20) = lVar10;
        puVar11 = *(undefined **)(param_2 + 0x20);
        bVar3 = *(int *)(param_2 + 0x28) == 4;
LAB_0065ef2c:
        if (!bVar3) {
          puVar11 = puVar9;
        }
        bVar2 = puVar11[0x10];
      }
      if ((bVar2 & 1) != 0) {
        lVar5 = *(long *)(lVar10 + 0x18);
        *(uint *)(lVar10 + 0x10) = *(uint *)(lVar10 + 0x10) | 1;
        if (lVar5 == 0) {
          puVar7 = (ulong *)(*(ulong *)(lVar10 + 8) & 0xfffffffffffffffc);
          if ((*(ulong *)(lVar10 + 8) & 1) != 0) {
            puVar7 = (ulong *)*puVar7;
          }
          lVar5 = FUN_00661d68(puVar7);
          *(long *)(lVar10 + 0x18) = lVar5;
        }
        ppuVar6 = &PTR_PTR_FUN_007a9f68;
        if (*(undefined ***)(puVar11 + 0x18) != (undefined **)0x0) {
          ppuVar6 = *(undefined ***)(puVar11 + 0x18);
        }
        FUN_0065ec98(lVar5,ppuVar6);
      }
      if ((*(ulong *)(puVar11 + 8) & 1) != 0) {
        FUN_006621e0(lVar10 + 8,(*(ulong *)(puVar11 + 8) & 0xfffffffffffffffc) + 8);
      }
    }
    else if (iVar1 == 5) {
      if (*(int *)(param_1 + 0x28) == 5) {
        FUN_0065cb44(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_2 + 0x20));
        uVar8 = *(ulong *)(param_2 + 8);
      }
      else {
        FUN_0065de80(param_1);
        *(undefined4 *)(param_1 + 0x28) = 5;
        puVar7 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar7 = (ulong *)*puVar7;
        }
        uVar4 = FUN_00661b68(puVar7);
        *(undefined8 *)(param_1 + 0x20) = uVar4;
        ppuVar6 = *(undefined ***)(param_2 + 0x20);
        if (*(int *)(param_2 + 0x28) != 5) {
          ppuVar6 = &PTR_PTR_FUN_007a9ed0;
        }
        FUN_0065cb44(uVar4,ppuVar6);
        uVar8 = *(ulong *)(param_2 + 8);
      }
      goto joined_r0x0065ee50;
    }
  }
  else {
    if (iVar1 == 7) {
      if (*(int *)(param_1 + 0x28) == 7) {
        uVar4 = *(undefined8 *)(param_1 + 0x20);
        ppuVar6 = *(undefined ***)(param_2 + 0x20);
      }
      else {
        FUN_0065de80(param_1);
        *(undefined4 *)(param_1 + 0x28) = 7;
        puVar7 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar7 = (ulong *)*puVar7;
        }
        uVar4 = FUN_00661ce8(puVar7);
        *(undefined8 *)(param_1 + 0x20) = uVar4;
        ppuVar6 = *(undefined ***)(param_2 + 0x20);
        if (*(int *)(param_2 + 0x28) != 7) {
          ppuVar6 = &PTR_PTR_FUN_007a9f40;
        }
      }
      FUN_0065dd94(uVar4,ppuVar6);
      uVar8 = *(ulong *)(param_2 + 8);
      goto joined_r0x0065ee50;
    }
    if (iVar1 == 8) {
      if (*(int *)(param_1 + 0x28) == 8) {
        FUN_0065d690(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_2 + 0x20));
        uVar8 = *(ulong *)(param_2 + 8);
      }
      else {
        FUN_0065de80(param_1);
        *(undefined4 *)(param_1 + 0x28) = 8;
        puVar7 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar7 = (ulong *)*puVar7;
        }
        uVar4 = FUN_00661c68(puVar7);
        *(undefined8 *)(param_1 + 0x20) = uVar4;
        ppuVar6 = *(undefined ***)(param_2 + 0x20);
        if (*(int *)(param_2 + 0x28) != 8) {
          ppuVar6 = &PTR_PTR_FUN_007a9f18;
        }
        FUN_0065d690(uVar4,ppuVar6);
        uVar8 = *(ulong *)(param_2 + 8);
      }
      goto joined_r0x0065ee50;
    }
    if (iVar1 == 9) {
      if (*(int *)(param_1 + 0x28) != 9) {
        FUN_0065de80(param_1);
        *(undefined4 *)(param_1 + 0x28) = 9;
        puVar7 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar7 = (ulong *)*puVar7;
        }
        lVar10 = FUN_00661be8(puVar7);
        puVar9 = PTR_PTR_007a2ad8;
        *(long *)(param_1 + 0x20) = lVar10;
        puVar11 = *(undefined **)(param_2 + 0x20);
        bVar3 = *(int *)(param_2 + 0x28) == 9;
        goto LAB_0065ef2c;
      }
      goto LAB_0065edd4;
    }
  }
  uVar8 = *(ulong *)(param_2 + 8);
joined_r0x0065ee50:
  if ((uVar8 & 1) == 0) {
    return;
  }
  FUN_006621e0(param_1 + 8,(uVar8 & 0xfffffffffffffffc) + 8);
  return;
}


// ===== 0065f04c  FUN_0065f04c =====

undefined ** FUN_0065f04c(void)

{
  return &PTR_FUN_00798cc0;
}


// ===== 0065f058  FUN_0065f058 =====

void FUN_0065f058(long param_1,long param_2)

{
  byte bVar1;
  byte *pbVar2;
  
  if (param_2 == param_1) {
    return;
  }
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    FUN_0065de80(param_1);
    bVar1 = *(byte *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  else {
    pbVar2 = (byte *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    if ((*pbVar2 & 1) == 0) {
      pbVar2[0] = 0;
      pbVar2[1] = 0;
      FUN_0065de80(param_1);
      bVar1 = *(byte *)(param_1 + 8);
      *(undefined4 *)(param_1 + 0x10) = 0;
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
      FUN_0065de80(param_1);
      bVar1 = *(byte *)(param_1 + 8);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
  }
  if ((bVar1 & 1) != 0) {
    FUN_006622b8();
    FUN_0065ec98(param_1,param_2);
    return;
  }
  FUN_0065ec98(param_1,param_2);
  return;
}


// ===== 0065f118  FUN_0065f118 =====

undefined8 FUN_0065f118(void)

{
  return 1;
}


// ===== 0065f120  FUN_0065f120 =====

void FUN_0065f120(void)

{
  FUN_00684dd0(FUN_0064dd54,&DAT_007ae908,&DAT_007aea40);
  return;
}


// ===== 0065f138  FUN_0065f138 =====

void FUN_0065f138(long *param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_007a3058;
  uVar1 = param_2 | 2;
  if ((param_3 & 1) == 0) {
    uVar1 = param_2;
  }
  param_1[4] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = uVar1;
  param_1[2] = 0;
  param_1[3] = (long)&DAT_007aea80;
  return;
}


// ===== 0065f168  FUN_0065f168 =====

void FUN_0065f168(undefined8 *param_1)

{
  void *__ptr;
  ulong uVar1;
  
  if ((param_1[1] & 1) == 0) {
    uVar1 = param_1[1] & 0xfffffffffffffffc;
  }
  else {
                    /* try { // try from 0065f188 to 0065f197 has its CatchHandler @ 0065f1dc */
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


// ===== 0065f1e0  FUN_0065f1e0 =====

void FUN_0065f1e0(void *param_1)

{
  FUN_0065f168();
  free(param_1);
  return;
}


// ===== 0065f204  FUN_0065f204 =====

void FUN_0065f204(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}


// ===== 0065f20c  FUN_0065f20c =====

void FUN_0065f20c(long param_1)

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
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      goto joined_r0x0065f254;
    }
    pbVar2[0] = 0;
    pbVar2[1] = 0;
  }
  bVar1 = *(byte *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
joined_r0x0065f254:
  if ((bVar1 & 1) == 0) {
    return;
  }
  FUN_006622b8();
  return;
}


// ===== 0065f25c  FUN_0065f25c =====

byte * FUN_0065f25c(long param_1,byte *param_2,undefined8 *param_3)

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
          goto LAB_0065f420;
        }
        auVar9 = FUN_0066f53c(param_3,iVar1,*(undefined4 *)((long)param_3 + 0x5c));
        param_2 = auVar9._0_8_;
        pbVar7 = param_2;
        if ((auVar9 & (undefined1  [16])0x1) != (undefined1  [16])0x0) goto LAB_0065f420;
      }
      pbVar7 = param_2 + 1;
      uVar6 = (uint)*param_2;
      if ((char)*param_2 < '\0') break;
LAB_0065f2c4:
      auVar2._8_4_ = uVar6;
      auVar2._0_8_ = pbVar7;
      auVar2._12_4_ = 0;
      auVar9._8_4_ = uVar6;
      auVar9._0_8_ = pbVar7;
      auVar9._12_4_ = 0;
      uVar6 = uVar6 >> 3;
      if (uVar6 == 2) goto LAB_0065f32c;
LAB_0065f2d0:
      auVar9 = auVar2;
      if ((uVar6 != 1) || ((auVar9._8_4_ & 0xff) != 10)) goto LAB_0065f374;
      puVar4 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar4 = (ulong *)*puVar4;
      }
      uVar3 = FUN_0066399c(param_1 + 0x18,puVar4);
      param_2 = (byte *)FUN_0066ff90(uVar3,auVar9._0_8_,param_3);
joined_r0x0065f36c:
      if (param_2 == (byte *)0x0) {
        pbVar7 = (byte *)0x0;
LAB_0065f420:
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar8;
        return pbVar7;
      }
    }
    uVar6 = (uVar6 + (uint)*pbVar7 * 0x80) - 0x80;
    if (-1 < (char)*pbVar7) {
      pbVar7 = param_2 + 2;
      goto LAB_0065f2c4;
    }
    auVar9 = FUN_0066fe50();
    uVar6 = (uint)(auVar9._8_8_ >> 3) & 0x1fffffff;
    auVar2 = auVar9;
    if (uVar6 != 2) goto LAB_0065f2d0;
LAB_0065f32c:
    pbVar7 = auVar9._0_8_;
    if ((auVar9._8_4_ & 0xff) != 0x10) {
LAB_0065f374:
      pbVar7 = auVar9._0_8_;
      uVar6 = auVar9._8_4_;
      if ((uVar6 == 0) || ((uVar6 & 7) == 4)) {
        if (pbVar7 != (byte *)0x0) {
          *(uint *)(param_3 + 10) = uVar6 - 1;
        }
        goto LAB_0065f420;
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
      goto joined_r0x0065f36c;
    }
    param_2 = pbVar7 + 1;
    uVar5 = (ulong)(char)*pbVar7;
    if ((long)uVar5 < 0) {
      uVar5 = (ulong)(((uint)*param_2 * 0x80 + (uint)*pbVar7) - 0x80);
      if ((char)*param_2 < '\0') {
        auVar9 = FUN_0066fd14(pbVar7);
        param_2 = auVar9._0_8_;
        uVar8 = 2;
        *(long *)(param_1 + 0x20) = auVar9._8_8_;
        goto joined_r0x0065f36c;
      }
      param_2 = pbVar7 + 2;
    }
    *(ulong *)(param_1 + 0x20) = uVar5;
    uVar8 = 2;
  } while( true );
}


// ===== 0065f460  FUN_0065f460 =====

undefined1 * FUN_0065f460(long param_1,undefined1 *param_2,long *param_3)

{
  size_t __n;
  void *__src;
  uint uVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    pbVar3 = (byte *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    __n = (ulong)(*pbVar3 >> 1);
    if ((*pbVar3 & 1) != 0) {
      __n = *(size_t *)(pbVar3 + 8);
    }
    if (((long)__n < 0x80) && ((long)__n <= (*param_3 - (long)param_2) + 0xe)) {
      param_2[1] = (char)__n;
      *param_2 = 10;
      __src = (void *)((ulong)pbVar3 | 1);
      if ((*pbVar3 & 1) != 0) {
        __src = *(void **)(pbVar3 + 0x10);
      }
      memcpy(param_2 + 2,__src,__n);
      param_2 = param_2 + 2 + __n;
    }
    else {
      param_2 = (undefined1 *)FUN_0066d778(param_3,1);
    }
  }
  if ((uVar1 >> 1 & 1) != 0) {
    if (param_2 < (undefined1 *)*param_3) {
      uVar5 = *(ulong *)(param_1 + 0x20);
      *param_2 = 0x10;
      param_2[1] = (char)uVar5;
    }
    else {
      param_2 = (undefined1 *)FUN_0066d3f8(param_3,param_2);
      uVar5 = *(ulong *)(param_1 + 0x20);
      *param_2 = 0x10;
      param_2[1] = (char)uVar5;
    }
    if (uVar5 < 0x80) {
      param_2 = param_2 + 2;
    }
    else {
      uVar4 = uVar5 >> 7;
      param_2[1] = (byte)uVar5 | 0x80;
      param_2[2] = (char)uVar4;
      param_2 = param_2 + 3;
      puVar2 = param_2;
      if (0x3fff < uVar5) {
        do {
          uVar5 = uVar4 >> 0xe;
          uVar4 = uVar4 >> 7;
          puVar2[-1] = puVar2[-1] | 0x80;
          param_2 = puVar2 + 1;
          *puVar2 = (char)uVar4;
          puVar2 = param_2;
        } while (uVar5 != 0);
      }
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  puVar2 = (undefined1 *)
           FUN_006fc418((*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,param_2,param_3);
  return puVar2;
}


// ===== 0065f5e0  FUN_0065f5e0 =====

void FUN_0065f5e0(long param_1)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  byte *pbVar5;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 3) == 0) {
    FUN_006e5694(param_1,0,param_1 + 0x14);
    return;
  }
  if ((uVar2 & 1) == 0) {
    lVar4 = 0;
  }
  else {
    pbVar5 = (byte *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    bVar3 = *pbVar5;
    uVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      uVar1 = *(ulong *)(pbVar5 + 8);
    }
    lVar4 = uVar1 + (((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  }
  if ((uVar2 >> 1 & 1) == 0) {
    FUN_006e5694(param_1,lVar4,param_1 + 0x14);
    return;
  }
  FUN_006e5694(param_1,lVar4 + ((LZCOUNT(*(ulong *)(param_1 + 0x20) | 1) ^ 0x3fU) * 9 + 0x89 >> 6),
               param_1 + 0x14);
  return;
}


// ===== 0065f670  FUN_0065f670 =====

void FUN_0065f670(long param_1,long param_2)

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
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    }
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  }
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  FUN_006621e0(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffc) + 8);
  return;
}


// ===== 0065f71c  FUN_0065f71c =====

undefined ** FUN_0065f71c(void)

{
  return &PTR_FUN_00798cd0;
}


// ===== 0065f728  FUN_0065f728 =====

undefined8 FUN_0065f728(void)

{
  return 1;
}


// ===== 0065f730  FUN_0065f730 =====

void FUN_0065f730(void)

{
  FUN_00684dd0(FUN_0064dd54,&DAT_007ae908,&DAT_007aea50);
  return;
}


// ===== 0065f748  FUN_0065f748 =====

void FUN_0065f748(long *param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_007a3068;
  uVar1 = param_2 | 2;
  if ((param_3 & 1) == 0) {
    uVar1 = param_2;
  }
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = param_2;
  param_1[7] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = uVar1;
  param_1[8] = 0;
  param_1[9] = param_2;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = param_2;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = param_2;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = param_2;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = param_2;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = param_2;
  puVar2 = PTR_DAT_007a2ea0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = (long)puVar2;
  param_1[0x1c] = (long)puVar2;
  param_1[0x1d] = (long)puVar2;
  param_1[0x1e] = (long)puVar2;
  return;
}


// ===== 0065f7ac  FUN_0065f7ac =====

void FUN_0065f7ac(undefined8 *param_1)

{
  void *__ptr;
  ulong uVar1;
  
  if ((param_1[1] & 1) == 0) {
    uVar1 = param_1[1] & 0xfffffffffffffffc;
  }
  else {
                    /* try { // try from 0065f7cc to 0065f7db has its CatchHandler @ 0065f820 */
    uVar1 = FUN_00662218();
  }
  if (uVar1 == 0) {
    FUN_0065f824(param_1);
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


// ===== 0065f824  FUN_0065f824 =====

void FUN_0065f824(long param_1)

{
  FUN_00675290(param_1 + 0x18);
  FUN_00675290(param_1 + 0x30);
  FUN_00675290(param_1 + 0x48);
  if ((*(long *)(param_1 + 0x70) != 0) && (*(long *)(param_1 + 0x60) == 0)) {
                    /* try { // try from 0065f860 to 0065f863 has its CatchHandler @ 0065f8fc */
    FUN_00675910();
  }
  if ((*(long *)(param_1 + 0x88) != 0) && (*(long *)(param_1 + 0x78) == 0)) {
                    /* try { // try from 0065f878 to 0065f87b has its CatchHandler @ 0065f8f8 */
    FUN_00675910();
  }
  if ((*(long *)(param_1 + 0xa0) != 0) && (*(long *)(param_1 + 0x90) == 0)) {
                    /* try { // try from 0065f890 to 0065f893 has its CatchHandler @ 0065f8f4 */
    FUN_00675910();
  }
  if ((*(long *)(param_1 + 0xb8) != 0) && (*(long *)(param_1 + 0xa8) == 0)) {
                    /* try { // try from 0065f8a8 to 0065f8ab has its CatchHandler @ 0065f8f0 */
    FUN_00675910();
  }
  if ((*(long *)(param_1 + 0xd0) != 0) && (*(long *)(param_1 + 0xc0) == 0)) {
                    /* try { // try from 0065f8c0 to 0065f8c3 has its CatchHandler @ 0065f8ec */
    FUN_00675910();
  }
  FUN_00663a20(param_1 + 0xd8);
  FUN_00663a20(param_1 + 0xe0);
  FUN_00663a20(param_1 + 0xe8);
  FUN_00663a20(param_1 + 0xf0);
  return;
}


// ===== 0065f900  FUN_0065f900 =====

void FUN_0065f900(void *param_1)

{
  FUN_0065f7ac();
  free(param_1);
  return;
}


// ===== 0065f924  FUN_0065f924 =====

void FUN_0065f924(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}


// ===== 0065f92c  FUN_0065f92c =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0065f92c(long param_1)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  byte *pbVar7;
  
  uVar4 = (ulong)*(uint *)(param_1 + 0x20);
  if (0 < (int)*(uint *)(param_1 + 0x20)) {
    puVar5 = (undefined8 *)(*(long *)(param_1 + 0x28) + 8);
    do {
      while (pbVar7 = (byte *)*puVar5, (*pbVar7 & 1) != 0) {
        **(undefined1 **)(pbVar7 + 0x10) = 0;
        pbVar7[8] = 0;
        pbVar7[9] = 0;
        pbVar7[10] = 0;
        pbVar7[0xb] = 0;
        pbVar7[0xc] = 0;
        pbVar7[0xd] = 0;
        pbVar7[0xe] = 0;
        pbVar7[0xf] = 0;
        uVar4 = uVar4 - 1;
        puVar5 = puVar5 + 1;
        if (uVar4 == 0) goto LAB_0065f98c;
      }
      pbVar7[0] = 0;
      pbVar7[1] = 0;
      uVar4 = uVar4 - 1;
      puVar5 = puVar5 + 1;
    } while (uVar4 != 0);
LAB_0065f98c:
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  uVar4 = (ulong)*(uint *)(param_1 + 0x38);
  if (0 < (int)*(uint *)(param_1 + 0x38)) {
    puVar5 = (undefined8 *)(*(long *)(param_1 + 0x40) + 8);
    do {
      while (pbVar7 = (byte *)*puVar5, (*pbVar7 & 1) != 0) {
        **(undefined1 **)(pbVar7 + 0x10) = 0;
        pbVar7[8] = 0;
        pbVar7[9] = 0;
        pbVar7[10] = 0;
        pbVar7[0xb] = 0;
        pbVar7[0xc] = 0;
        pbVar7[0xd] = 0;
        pbVar7[0xe] = 0;
        pbVar7[0xf] = 0;
        uVar4 = uVar4 - 1;
        puVar5 = puVar5 + 1;
        if (uVar4 == 0) goto LAB_0065f9dc;
      }
      pbVar7[0] = 0;
      pbVar7[1] = 0;
      uVar4 = uVar4 - 1;
      puVar5 = puVar5 + 1;
    } while (uVar4 != 0);
LAB_0065f9dc:
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  uVar4 = (ulong)*(uint *)(param_1 + 0x50);
  if (0 < (int)*(uint *)(param_1 + 0x50)) {
    puVar5 = (undefined8 *)(*(long *)(param_1 + 0x58) + 8);
    do {
      while (pbVar7 = (byte *)*puVar5, (*pbVar7 & 1) != 0) {
        **(undefined1 **)(pbVar7 + 0x10) = 0;
        pbVar7[8] = 0;
        pbVar7[9] = 0;
        pbVar7[10] = 0;
        pbVar7[0xb] = 0;
        pbVar7[0xc] = 0;
        pbVar7[0xd] = 0;
        pbVar7[0xe] = 0;
        pbVar7[0xf] = 0;
        uVar4 = uVar4 - 1;
        puVar5 = puVar5 + 1;
        if (uVar4 == 0) goto LAB_0065fa2c;
      }
      pbVar7[0] = 0;
      pbVar7[1] = 0;
      uVar4 = uVar4 - 1;
      puVar5 = puVar5 + 1;
    } while (uVar4 != 0);
LAB_0065fa2c:
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  uVar4 = (ulong)*(uint *)(param_1 + 0x68);
  if (0 < (int)*(uint *)(param_1 + 0x68)) {
    puVar5 = *(undefined8 **)(param_1 + 0x70);
    do {
      puVar5 = puVar5 + 1;
      FUN_00651754(*puVar5);
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  uVar4 = (ulong)*(uint *)(param_1 + 0x80);
  if (0 < (int)*(uint *)(param_1 + 0x80)) {
    plVar6 = *(long **)(param_1 + 0x88);
    do {
      plVar6 = plVar6 + 1;
      lVar3 = *plVar6;
      if ((*(byte *)(lVar3 + 0x10) & 1) == 0) {
        bVar2 = *(byte *)(lVar3 + 8);
        *(undefined8 *)(lVar3 + 0x20) = 0;
        *(undefined4 *)(lVar3 + 0x10) = 0;
      }
      else {
        pbVar7 = (byte *)(*(ulong *)(lVar3 + 0x18) & 0xfffffffffffffffc);
        if ((*pbVar7 & 1) == 0) {
          pbVar7[0] = 0;
          pbVar7[1] = 0;
          bVar2 = *(byte *)(lVar3 + 8);
          *(undefined8 *)(lVar3 + 0x20) = 0;
          *(undefined4 *)(lVar3 + 0x10) = 0;
        }
        else {
          **(undefined1 **)(pbVar7 + 0x10) = 0;
          pbVar7[8] = 0;
          pbVar7[9] = 0;
          pbVar7[10] = 0;
          pbVar7[0xb] = 0;
          pbVar7[0xc] = 0;
          pbVar7[0xd] = 0;
          pbVar7[0xe] = 0;
          pbVar7[0xf] = 0;
          bVar2 = *(byte *)(lVar3 + 8);
          *(undefined8 *)(lVar3 + 0x20) = 0;
          *(undefined4 *)(lVar3 + 0x10) = 0;
        }
      }
      if ((bVar2 & 1) != 0) {
        FUN_006622b8();
      }
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  uVar4 = (ulong)*(uint *)(param_1 + 0x98);
  if (0 < (int)*(uint *)(param_1 + 0x98)) {
    puVar5 = *(undefined8 **)(param_1 + 0xa0);
    do {
      puVar5 = puVar5 + 1;
      FUN_0064e5d8(*puVar5);
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  uVar4 = (ulong)*(uint *)(param_1 + 0xb0);
  if (0 < (int)*(uint *)(param_1 + 0xb0)) {
    puVar5 = *(undefined8 **)(param_1 + 0xb8);
    do {
      puVar5 = puVar5 + 1;
      FUN_00650b80(*puVar5);
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  FUN_0066211c(param_1 + 0xc0);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      pbVar7 = (byte *)(*(ulong *)(param_1 + 0xd8) & 0xfffffffffffffffc);
      if ((*pbVar7 & 1) == 0) {
        pbVar7[0] = 0;
        pbVar7[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar7 + 0x10) = 0;
        pbVar7[8] = 0;
        pbVar7[9] = 0;
        pbVar7[10] = 0;
        pbVar7[0xb] = 0;
        pbVar7[0xc] = 0;
        pbVar7[0xd] = 0;
        pbVar7[0xe] = 0;
        pbVar7[0xf] = 0;
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      pbVar7 = (byte *)(*(ulong *)(param_1 + 0xe0) & 0xfffffffffffffffc);
      if ((*pbVar7 & 1) == 0) {
        pbVar7[0] = 0;
        pbVar7[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar7 + 0x10) = 0;
        pbVar7[8] = 0;
        pbVar7[9] = 0;
        pbVar7[10] = 0;
        pbVar7[0xb] = 0;
        pbVar7[0xc] = 0;
        pbVar7[0xd] = 0;
        pbVar7[0xe] = 0;
        pbVar7[0xf] = 0;
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      pbVar7 = (byte *)(*(ulong *)(param_1 + 0xe8) & 0xfffffffffffffffc);
      if ((*pbVar7 & 1) == 0) {
        pbVar7[0] = 0;
        pbVar7[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar7 + 0x10) = 0;
        pbVar7[8] = 0;
        pbVar7[9] = 0;
        pbVar7[10] = 0;
        pbVar7[0xb] = 0;
        pbVar7[0xc] = 0;
        pbVar7[0xd] = 0;
        pbVar7[0xe] = 0;
        pbVar7[0xf] = 0;
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      pbVar7 = (byte *)(*(ulong *)(param_1 + 0xf0) & 0xfffffffffffffffc);
      if ((*pbVar7 & 1) == 0) {
        pbVar7[0] = 0;
        pbVar7[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar7 + 0x10) = 0;
        pbVar7[8] = 0;
        pbVar7[9] = 0;
        pbVar7[10] = 0;
        pbVar7[0xb] = 0;
        pbVar7[0xc] = 0;
        pbVar7[0xd] = 0;
        pbVar7[0xe] = 0;
        pbVar7[0xf] = 0;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006622b8((byte *)(param_1 + 8));
  return;
}


// ===== 0065fc3c  FUN_0065fc3c =====

byte * FUN_0065fc3c(long param_1,byte *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  ulong *puVar9;
  uint uVar10;
  int *piVar11;
  byte *pbVar12;
  undefined1 auVar13 [16];
  
  puVar3 = PTR_PTR_007a2ea8;
LAB_0065fc8c:
  if ((byte *)*param_3 <= param_2) {
    iVar1 = (int)param_2 - *(int *)(param_3 + 1);
    if (*(int *)((long)param_3 + 0x1c) == iVar1) {
      pbVar12 = (byte *)0x0;
      if (param_3[2] != 0 || iVar1 < 1) {
        pbVar12 = param_2;
      }
      return pbVar12;
    }
    auVar13 = FUN_0066f53c(param_3,iVar1,*(undefined4 *)((long)param_3 + 0x5c));
    param_2 = auVar13._0_8_;
    if ((auVar13 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
      return param_2;
    }
  }
  pbVar12 = param_2 + 1;
  uVar10 = (uint)*param_2;
  if ((char)*param_2 < '\0') {
    uVar10 = (uVar10 + (uint)*pbVar12 * 0x80) - 0x80;
    if (-1 < (char)*pbVar12) {
      pbVar12 = param_2 + 2;
      goto LAB_0065fcc0;
    }
    auVar13 = FUN_0066fe50(param_2);
    uVar10 = (uint)(auVar13._8_8_ >> 3) & 0x1fffffff;
    auVar2 = auVar13;
    if (8 < uVar10) goto LAB_0065fe08;
LAB_0065fccc:
    auVar13 = auVar2;
    lVar7 = auVar13._0_8_;
    uVar8 = auVar13._8_4_;
    if (uVar10 < 6) {
      if (uVar10 == 1) {
        if ((uVar8 & 0xff) == 10) {
          puVar9 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
          *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
          if ((*(ulong *)(param_1 + 8) & 1) != 0) {
            puVar9 = (ulong *)*puVar9;
          }
          lVar4 = param_1 + 0xd8;
          goto LAB_0065fc74;
        }
      }
      else if (uVar10 == 4) {
        if ((uVar8 & 0xff) == 0x22) {
          param_2 = (byte *)(lVar7 + -1);
          do {
            piVar11 = *(int **)(param_1 + 0x28);
            if (piVar11 == (int *)0x0) {
LAB_006601dc:
              if (*(long *)(param_1 + 0x18) == 0) {
                puVar5 = (undefined8 *)FUN_00759c3c(0x18);
              }
              else {
                auVar13 = FUN_00663600(*(long *)(param_1 + 0x18),0x18,puVar3);
                puVar5 = auVar13._0_8_;
                *auVar13._8_8_ = puVar5;
                auVar13._8_8_[1] = FUN_005d5b40;
              }
              *puVar5 = 0;
              puVar5[1] = 0;
              puVar5[2] = 0;
              uVar6 = FUN_00675990(param_1 + 0x18,puVar5);
              param_2 = (byte *)FUN_0066ff90(uVar6,param_2 + 1,param_3);
              if (param_2 == (byte *)0x0) {
                return (byte *)0x0;
              }
            }
            else {
              iVar1 = *(int *)(param_1 + 0x20);
              if (*piVar11 <= iVar1) goto LAB_006601dc;
              *(int *)(param_1 + 0x20) = iVar1 + 1;
              param_2 = (byte *)FUN_0066ff90(*(undefined8 *)(piVar11 + (long)iVar1 * 2 + 2),
                                             param_2 + 1,param_3);
              if (param_2 == (byte *)0x0) {
                return (byte *)0x0;
              }
            }
          } while ((param_2 < (byte *)*param_3) && (*param_2 == 0x22));
          goto LAB_0065fc8c;
        }
      }
      else if ((uVar10 == 5) && ((uVar8 & 0xff) == 0x2a)) {
        param_2 = (byte *)(lVar7 + -1);
        do {
          piVar11 = *(int **)(param_1 + 0x40);
          if (piVar11 == (int *)0x0) {
LAB_0065fd3c:
            if (*(long *)(param_1 + 0x30) == 0) {
              puVar5 = (undefined8 *)FUN_00759c3c(0x18);
            }
            else {
              auVar13 = FUN_00663600(*(long *)(param_1 + 0x30),0x18,puVar3);
              puVar5 = auVar13._0_8_;
              *auVar13._8_8_ = puVar5;
              auVar13._8_8_[1] = FUN_005d5b40;
            }
            *puVar5 = 0;
            puVar5[1] = 0;
            puVar5[2] = 0;
            uVar6 = FUN_00675990(param_1 + 0x30,puVar5);
            param_2 = (byte *)FUN_0066ff90(uVar6,param_2 + 1,param_3);
            if (param_2 == (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            iVar1 = *(int *)(param_1 + 0x38);
            if (*piVar11 <= iVar1) goto LAB_0065fd3c;
            *(int *)(param_1 + 0x38) = iVar1 + 1;
            param_2 = (byte *)FUN_0066ff90(*(undefined8 *)(piVar11 + (long)iVar1 * 2 + 2),
                                           param_2 + 1,param_3);
            if (param_2 == (byte *)0x0) {
              return (byte *)0x0;
            }
          }
        } while ((param_2 < (byte *)*param_3) && (*param_2 == 0x2a));
        goto LAB_0065fc8c;
      }
    }
    else if (uVar10 == 6) {
      if ((uVar8 & 0xff) == 0x32) {
        param_2 = (byte *)(lVar7 + -1);
        do {
          piVar11 = *(int **)(param_1 + 0x58);
          if (piVar11 == (int *)0x0) {
LAB_0065ffec:
            if (*(long *)(param_1 + 0x48) == 0) {
              puVar5 = (undefined8 *)FUN_00759c3c(0x18);
            }
            else {
              auVar13 = FUN_00663600(*(long *)(param_1 + 0x48),0x18,puVar3);
              puVar5 = auVar13._0_8_;
              *auVar13._8_8_ = puVar5;
              auVar13._8_8_[1] = FUN_005d5b40;
            }
            *puVar5 = 0;
            puVar5[1] = 0;
            puVar5[2] = 0;
            uVar6 = FUN_00675990(param_1 + 0x48,puVar5);
            param_2 = (byte *)FUN_0066ff90(uVar6,param_2 + 1,param_3);
            if (param_2 == (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            iVar1 = *(int *)(param_1 + 0x50);
            if (*piVar11 <= iVar1) goto LAB_0065ffec;
            *(int *)(param_1 + 0x50) = iVar1 + 1;
            param_2 = (byte *)FUN_0066ff90(*(undefined8 *)(piVar11 + (long)iVar1 * 2 + 2),
                                           param_2 + 1,param_3);
            if (param_2 == (byte *)0x0) {
              return (byte *)0x0;
            }
          }
        } while ((param_2 < (byte *)*param_3) && (*param_2 == 0x32));
        goto LAB_0065fc8c;
      }
    }
    else if (uVar10 == 7) {
      if ((uVar8 & 0xff) == 0x3a) {
        param_2 = (byte *)(lVar7 + -1);
        do {
          piVar11 = *(int **)(param_1 + 0x70);
          if (piVar11 == (int *)0x0) {
LAB_0066029c:
            uVar6 = FUN_006614e8(*(undefined8 *)(param_1 + 0x60));
            uVar6 = FUN_00675990(param_1 + 0x60,uVar6);
            param_2 = (byte *)FUN_0066fa8c(param_3,uVar6,param_2 + 1);
            if (param_2 == (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            iVar1 = *(int *)(param_1 + 0x68);
            if (*piVar11 <= iVar1) goto LAB_0066029c;
            *(int *)(param_1 + 0x68) = iVar1 + 1;
            param_2 = (byte *)FUN_0066fa8c(param_3,*(undefined8 *)(piVar11 + (long)iVar1 * 2 + 2),
                                           param_2 + 1);
            if (param_2 == (byte *)0x0) {
              return (byte *)0x0;
            }
          }
        } while ((param_2 < (byte *)*param_3) && (*param_2 == 0x3a));
        goto LAB_0065fc8c;
      }
    }
    else if ((uVar10 == 8) && ((uVar8 & 0xff) == 0x42)) {
      puVar9 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar9 = (ulong *)*puVar9;
      }
      lVar4 = param_1 + 0xe0;
      goto LAB_0065fc74;
    }
  }
  else {
LAB_0065fcc0:
    auVar2._8_4_ = uVar10;
    auVar2._0_8_ = pbVar12;
    auVar2._12_4_ = 0;
    auVar13._8_4_ = uVar10;
    auVar13._0_8_ = pbVar12;
    auVar13._12_4_ = 0;
    uVar10 = uVar10 >> 3;
    if (uVar10 < 9) goto LAB_0065fccc;
LAB_0065fe08:
    lVar7 = auVar13._0_8_;
    uVar8 = auVar13._8_4_;
    if (0xb < uVar10) {
      if (uVar10 == 0xc) {
        if ((uVar8 & 0xff) != 0x62) goto LAB_0066033c;
        param_2 = (byte *)(lVar7 + -1);
        do {
          piVar11 = *(int **)(param_1 + 0xb8);
          if (piVar11 == (int *)0x0) {
LAB_00660144:
            uVar6 = FUN_00661468(*(undefined8 *)(param_1 + 0xa8));
            uVar6 = FUN_00675990(param_1 + 0xa8,uVar6);
            param_2 = (byte *)FUN_0066fa8c(param_3,uVar6,param_2 + 1);
            if (param_2 == (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            iVar1 = *(int *)(param_1 + 0xb0);
            if (*piVar11 <= iVar1) goto LAB_00660144;
            *(int *)(param_1 + 0xb0) = iVar1 + 1;
            param_2 = (byte *)FUN_0066fa8c(param_3,*(undefined8 *)(piVar11 + (long)iVar1 * 2 + 2),
                                           param_2 + 1);
            if (param_2 == (byte *)0x0) {
              return (byte *)0x0;
            }
          }
        } while ((param_2 < (byte *)*param_3) && (*param_2 == 0x62));
      }
      else if (uVar10 == 0xd) {
        if ((uVar8 & 0xff) != 0x6a) goto LAB_0066033c;
        puVar9 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar9 = (ulong *)*puVar9;
        }
        lVar4 = param_1 + 0xf0;
LAB_0065fc74:
        uVar6 = FUN_0066399c(lVar4,puVar9);
        param_2 = (byte *)FUN_0066ff90(uVar6,lVar7,param_3);
        if (param_2 == (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if ((uVar10 != 0xe) || ((uVar8 & 0xff) != 0x72)) goto LAB_0066033c;
        param_2 = (byte *)(lVar7 + -1);
        do {
          piVar11 = *(int **)(param_1 + 0xd0);
          if (piVar11 == (int *)0x0) {
LAB_0065ff28:
            uVar6 = FUN_00661668(*(undefined8 *)(param_1 + 0xc0));
            uVar6 = FUN_00675990(param_1 + 0xc0,uVar6);
            param_2 = (byte *)FUN_0066fa8c(param_3,uVar6,param_2 + 1);
            if (param_2 == (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            iVar1 = *(int *)(param_1 + 200);
            if (*piVar11 <= iVar1) goto LAB_0065ff28;
            *(int *)(param_1 + 200) = iVar1 + 1;
            param_2 = (byte *)FUN_0066fa8c(param_3,*(undefined8 *)(piVar11 + (long)iVar1 * 2 + 2),
                                           param_2 + 1);
            if (param_2 == (byte *)0x0) {
              return (byte *)0x0;
            }
          }
        } while ((param_2 < (byte *)*param_3) && (*param_2 == 0x72));
      }
      goto LAB_0065fc8c;
    }
    if (uVar10 == 9) {
      if ((uVar8 & 0xff) == 0x4a) {
        param_2 = (byte *)(lVar7 + -1);
        do {
          piVar11 = *(int **)(param_1 + 0x88);
          if (piVar11 == (int *)0x0) {
LAB_006600ac:
            uVar6 = FUN_00661de8(*(undefined8 *)(param_1 + 0x78));
            uVar6 = FUN_00675990(param_1 + 0x78,uVar6);
            param_2 = (byte *)FUN_0066fa8c(param_3,uVar6,param_2 + 1);
            if (param_2 == (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            iVar1 = *(int *)(param_1 + 0x80);
            if (*piVar11 <= iVar1) goto LAB_006600ac;
            *(int *)(param_1 + 0x80) = iVar1 + 1;
            param_2 = (byte *)FUN_0066fa8c(param_3,*(undefined8 *)(piVar11 + (long)iVar1 * 2 + 2),
                                           param_2 + 1);
            if (param_2 == (byte *)0x0) {
              return (byte *)0x0;
            }
          }
        } while ((param_2 < (byte *)*param_3) && (*param_2 == 0x4a));
        goto LAB_0065fc8c;
      }
    }
    else {
      if (uVar10 == 10) {
        if ((uVar8 & 0xff) == 0x52) {
          puVar9 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
          *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
          if ((*(ulong *)(param_1 + 8) & 1) != 0) {
            puVar9 = (ulong *)*puVar9;
          }
          lVar4 = param_1 + 0xe8;
          goto LAB_0065fc74;
        }
        goto LAB_0066033c;
      }
      if ((uVar10 == 0xb) && ((uVar8 & 0xff) == 0x5a)) {
        param_2 = (byte *)(lVar7 + -1);
        do {
          piVar11 = *(int **)(param_1 + 0xa0);
          if (piVar11 == (int *)0x0) {
LAB_0065fe78:
            uVar6 = FUN_006613e8(*(undefined8 *)(param_1 + 0x90));
            uVar6 = FUN_00675990(param_1 + 0x90,uVar6);
            param_2 = (byte *)FUN_0066fa8c(param_3,uVar6,param_2 + 1);
            if (param_2 == (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            iVar1 = *(int *)(param_1 + 0x98);
            if (*piVar11 <= iVar1) goto LAB_0065fe78;
            *(int *)(param_1 + 0x98) = iVar1 + 1;
            param_2 = (byte *)FUN_0066fa8c(param_3,*(undefined8 *)(piVar11 + (long)iVar1 * 2 + 2),
                                           param_2 + 1);
            if (param_2 == (byte *)0x0) {
              return (byte *)0x0;
            }
          }
        } while ((param_2 < (byte *)*param_3) && (*param_2 == 0x5a));
        goto LAB_0065fc8c;
      }
    }
  }
LAB_0066033c:
  pbVar12 = auVar13._0_8_;
  uVar10 = auVar13._8_4_;
  if ((uVar10 == 0) || ((uVar10 & 7) == 4)) {
    if (pbVar12 != (byte *)0x0) {
      *(uint *)(param_3 + 10) = uVar10 - 1;
      return pbVar12;
    }
    return (byte *)0x0;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    lVar7 = FUN_00661fa4(param_1 + 8);
  }
  else {
    lVar7 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8;
  }
  param_2 = (byte *)FUN_006fbab8(auVar13._8_8_ & 0xffffffff,lVar7,pbVar12,param_3);
  if (param_2 == (byte *)0x0) {
    return (byte *)0x0;
  }
  goto LAB_0065fc8c;
}


// ===== 00660444  FUN_00660444 =====

undefined1 * FUN_00660444(long param_1,undefined1 *param_2,long *param_3)

{
  byte *pbVar1;
  size_t sVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  
  uVar4 = *(uint *)(param_1 + 0x10);
  if ((uVar4 & 1) == 0) {
LAB_006604dc:
    uVar5 = *(uint *)(param_1 + 0x20);
  }
  else {
    pbVar8 = (byte *)(*(ulong *)(param_1 + 0xd8) & 0xfffffffffffffffc);
    sVar2 = (ulong)(*pbVar8 >> 1);
    if ((*pbVar8 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar8 + 8);
    }
    if (((long)sVar2 < 0x80) && ((long)sVar2 <= (*param_3 - (long)param_2) + 0xe)) {
      param_2[1] = (char)sVar2;
      *param_2 = 10;
      pvVar3 = (void *)((ulong)pbVar8 | 1);
      if ((*pbVar8 & 1) != 0) {
        pvVar3 = *(void **)(pbVar8 + 0x10);
      }
      memcpy(param_2 + 2,pvVar3,sVar2);
      param_2 = param_2 + 2 + sVar2;
      goto LAB_006604dc;
    }
    param_2 = (undefined1 *)FUN_0066d778(param_3,1);
    uVar5 = *(uint *)(param_1 + 0x20);
  }
  if (0 < (int)uVar5) {
    lVar10 = 0;
    do {
      while( true ) {
        pbVar8 = *(byte **)(*(long *)(param_1 + 0x28) + lVar10 + 8);
        sVar2 = (ulong)(*pbVar8 >> 1);
        if ((*pbVar8 & 1) != 0) {
          sVar2 = *(size_t *)(pbVar8 + 8);
        }
        if ((0x7f < (long)sVar2) || ((*param_3 - (long)param_2) + 0xe < (long)sVar2)) break;
        *param_2 = 0x22;
        param_2[1] = (char)sVar2;
        pbVar1 = pbVar8 + 1;
        if ((*pbVar8 & 1) != 0) {
          pbVar1 = *(byte **)(pbVar8 + 0x10);
        }
        memcpy(param_2 + 2,pbVar1,sVar2);
        param_2 = param_2 + 2 + sVar2;
        lVar10 = lVar10 + 8;
        if ((ulong)uVar5 * 8 - lVar10 == 0) goto LAB_006605ac;
      }
      param_2 = (undefined1 *)FUN_0066d8d0(param_3,4);
      lVar10 = lVar10 + 8;
    } while ((ulong)uVar5 * 8 - lVar10 != 0);
  }
LAB_006605ac:
  if (0 < (int)*(uint *)(param_1 + 0x38)) {
    lVar11 = (ulong)*(uint *)(param_1 + 0x38) * 8;
    lVar10 = 0;
    do {
      while( true ) {
        pbVar8 = *(byte **)(*(long *)(param_1 + 0x40) + lVar10 + 8);
        sVar2 = (ulong)(*pbVar8 >> 1);
        if ((*pbVar8 & 1) != 0) {
          sVar2 = *(size_t *)(pbVar8 + 8);
        }
        if ((0x7f < (long)sVar2) || ((*param_3 - (long)param_2) + 0xe < (long)sVar2)) break;
        *param_2 = 0x2a;
        param_2[1] = (char)sVar2;
        pbVar1 = pbVar8 + 1;
        if ((*pbVar8 & 1) != 0) {
          pbVar1 = *(byte **)(pbVar8 + 0x10);
        }
        memcpy(param_2 + 2,pbVar1,sVar2);
        param_2 = param_2 + 2 + sVar2;
        lVar10 = lVar10 + 8;
        if (lVar11 - lVar10 == 0) goto LAB_0066065c;
      }
      param_2 = (undefined1 *)FUN_0066d8d0(param_3,5);
      lVar10 = lVar10 + 8;
    } while (lVar11 - lVar10 != 0);
  }
LAB_0066065c:
  if (0 < (int)*(uint *)(param_1 + 0x50)) {
    lVar11 = (ulong)*(uint *)(param_1 + 0x50) * 8;
    lVar10 = 0;
    do {
      while( true ) {
        pbVar8 = *(byte **)(*(long *)(param_1 + 0x58) + lVar10 + 8);
        sVar2 = (ulong)(*pbVar8 >> 1);
        if ((*pbVar8 & 1) != 0) {
          sVar2 = *(size_t *)(pbVar8 + 8);
        }
        if ((0x7f < (long)sVar2) || ((*param_3 - (long)param_2) + 0xe < (long)sVar2)) break;
        *param_2 = 0x32;
        param_2[1] = (char)sVar2;
        pbVar1 = pbVar8 + 1;
        if ((*pbVar8 & 1) != 0) {
          pbVar1 = *(byte **)(pbVar8 + 0x10);
        }
        memcpy(param_2 + 2,pbVar1,sVar2);
        param_2 = param_2 + 2 + sVar2;
        lVar10 = lVar10 + 8;
        if (lVar11 - lVar10 == 0) goto LAB_0066070c;
      }
      param_2 = (undefined1 *)FUN_0066d8d0(param_3,6);
      lVar10 = lVar10 + 8;
    } while (lVar11 - lVar10 != 0);
  }
LAB_0066070c:
  iVar6 = *(int *)(param_1 + 0x68);
  if (iVar6 != 0) {
    iVar9 = 0;
    do {
      lVar10 = *(long *)(*(long *)(param_1 + 0x70) + (long)iVar9 * 8 + 8);
      param_2 = (undefined1 *)FUN_00678d18(7,lVar10,*(undefined4 *)(lVar10 + 0x14),param_2,param_3);
      iVar9 = iVar9 + 1;
    } while (iVar6 != iVar9);
  }
  if ((uVar4 >> 1 & 1) == 0) {
LAB_006607b4:
    iVar6 = *(int *)(param_1 + 0x80);
  }
  else {
    pbVar8 = (byte *)(*(ulong *)(param_1 + 0xe0) & 0xfffffffffffffffc);
    sVar2 = (ulong)(*pbVar8 >> 1);
    if ((*pbVar8 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar8 + 8);
    }
    if (((long)sVar2 < 0x80) && ((long)sVar2 <= (*param_3 - (long)param_2) + 0xe)) {
      param_2[1] = (char)sVar2;
      *param_2 = 0x42;
      pvVar3 = (void *)((ulong)pbVar8 | 1);
      if ((*pbVar8 & 1) != 0) {
        pvVar3 = *(void **)(pbVar8 + 0x10);
      }
      memcpy(param_2 + 2,pvVar3,sVar2);
      param_2 = param_2 + 2 + sVar2;
      goto LAB_006607b4;
    }
    param_2 = (undefined1 *)FUN_0066d778(param_3,8);
    iVar6 = *(int *)(param_1 + 0x80);
  }
  if (iVar6 != 0) {
    iVar9 = 0;
    do {
      lVar10 = *(long *)(*(long *)(param_1 + 0x88) + (long)iVar9 * 8 + 8);
      param_2 = (undefined1 *)FUN_00678d18(9,lVar10,*(undefined4 *)(lVar10 + 0x14),param_2,param_3);
      iVar9 = iVar9 + 1;
    } while (iVar6 != iVar9);
  }
  if ((uVar4 >> 2 & 1) == 0) {
LAB_0066085c:
    iVar6 = *(int *)(param_1 + 0x98);
  }
  else {
    pbVar8 = (byte *)(*(ulong *)(param_1 + 0xe8) & 0xfffffffffffffffc);
    sVar2 = (ulong)(*pbVar8 >> 1);
    if ((*pbVar8 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar8 + 8);
    }
    if (((long)sVar2 < 0x80) && ((long)sVar2 <= (*param_3 - (long)param_2) + 0xe)) {
      param_2[1] = (char)sVar2;
      *param_2 = 0x52;
      pvVar3 = (void *)((ulong)pbVar8 | 1);
      if ((*pbVar8 & 1) != 0) {
        pvVar3 = *(void **)(pbVar8 + 0x10);
      }
      memcpy(param_2 + 2,pvVar3,sVar2);
      param_2 = param_2 + 2 + sVar2;
      goto LAB_0066085c;
    }
    param_2 = (undefined1 *)FUN_0066d778(param_3,10);
    iVar6 = *(int *)(param_1 + 0x98);
  }
  if (iVar6 != 0) {
    iVar9 = 0;
    do {
      lVar10 = *(long *)(*(long *)(param_1 + 0xa0) + (long)iVar9 * 8 + 8);
      param_2 = (undefined1 *)
                FUN_00678d18(0xb,lVar10,*(undefined4 *)(lVar10 + 0x14),param_2,param_3);
      iVar9 = iVar9 + 1;
    } while (iVar6 != iVar9);
  }
  iVar6 = *(int *)(param_1 + 0xb0);
  if (iVar6 != 0) {
    iVar9 = 0;
    do {
      lVar10 = *(long *)(*(long *)(param_1 + 0xb8) + (long)iVar9 * 8 + 8);
      param_2 = (undefined1 *)
                FUN_00678d18(0xc,lVar10,*(undefined4 *)(lVar10 + 0x14),param_2,param_3);
      iVar9 = iVar9 + 1;
    } while (iVar6 != iVar9);
  }
  if ((uVar4 >> 3 & 1) != 0) {
    pbVar8 = (byte *)(*(ulong *)(param_1 + 0xf0) & 0xfffffffffffffffc);
    sVar2 = (ulong)(*pbVar8 >> 1);
    if ((*pbVar8 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar8 + 8);
    }
    if ((0x7f < (long)sVar2) || ((*param_3 - (long)param_2) + 0xe < (long)sVar2)) {
      param_2 = (undefined1 *)FUN_0066d778(param_3,0xd);
      iVar6 = *(int *)(param_1 + 200);
      goto joined_r0x00660940;
    }
    param_2[1] = (char)sVar2;
    *param_2 = 0x6a;
    pvVar3 = (void *)((ulong)pbVar8 | 1);
    if ((*pbVar8 & 1) != 0) {
      pvVar3 = *(void **)(pbVar8 + 0x10);
    }
    memcpy(param_2 + 2,pvVar3,sVar2);
    param_2 = param_2 + 2 + sVar2;
  }
  iVar6 = *(int *)(param_1 + 200);
joined_r0x00660940:
  if (iVar6 != 0) {
    iVar9 = 0;
    do {
      lVar10 = *(long *)(*(long *)(param_1 + 0xd0) + (long)iVar9 * 8 + 8);
      param_2 = (undefined1 *)
                FUN_00678d18(0xe,lVar10,*(undefined4 *)(lVar10 + 0x14),param_2,param_3);
      iVar9 = iVar9 + 1;
    } while (iVar6 != iVar9);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    puVar7 = (undefined1 *)
             FUN_006fc418((*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,param_2,param_3);
    return puVar7;
  }
  return param_2;
}


// ===== 00660a14  FUN_00660a14 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00660a14(long param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  
  uVar6 = (ulong)*(uint *)(param_1 + 0x20);
  if ((int)*(uint *)(param_1 + 0x20) < 1) {
    uVar1 = *(uint *)(param_1 + 0x38);
    uVar10 = (ulong)uVar1;
    lVar7 = uVar6 + uVar10;
  }
  else {
    puVar9 = *(undefined8 **)(param_1 + 0x28);
    uVar11 = uVar6;
    do {
      puVar9 = puVar9 + 1;
      bVar2 = *(byte *)*puVar9;
      uVar10 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar10 = *(ulong *)((byte *)*puVar9 + 8);
      }
      uVar6 = uVar6 - 1;
      uVar11 = uVar10 + uVar11 + (ulong)(((uint)LZCOUNT((uint)uVar10 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    } while (uVar6 != 0);
    uVar1 = *(uint *)(param_1 + 0x38);
    uVar10 = (ulong)uVar1;
    lVar7 = uVar11 + uVar10;
  }
  if (0 < (int)uVar1) {
    puVar9 = *(undefined8 **)(param_1 + 0x40);
    do {
      puVar9 = puVar9 + 1;
      bVar2 = *(byte *)*puVar9;
      uVar6 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar6 = *(ulong *)((byte *)*puVar9 + 8);
      }
      uVar10 = uVar10 - 1;
      lVar7 = uVar6 + lVar7 + (ulong)(((uint)LZCOUNT((uint)uVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    } while (uVar10 != 0);
  }
  uVar6 = (ulong)*(uint *)(param_1 + 0x50);
  lVar7 = lVar7 + uVar6;
  if (0 < (int)*(uint *)(param_1 + 0x50)) {
    puVar9 = *(undefined8 **)(param_1 + 0x58);
    do {
      puVar9 = puVar9 + 1;
      bVar2 = *(byte *)*puVar9;
      uVar10 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar10 = *(ulong *)((byte *)*puVar9 + 8);
      }
      uVar6 = uVar6 - 1;
      lVar7 = uVar10 + lVar7 + (ulong)(((uint)LZCOUNT((uint)uVar10 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    } while (uVar6 != 0);
  }
  iVar3 = *(int *)(param_1 + 0x68);
  lVar7 = lVar7 + iVar3;
  puVar9 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x70) != 0) {
    puVar9 = (undefined8 *)(*(long *)(param_1 + 0x70) + 8);
  }
  if (iVar3 != 0) {
    lVar13 = (long)iVar3 << 3;
    do {
      lVar4 = FUN_0065241c(*puVar9);
      lVar13 = lVar13 + -8;
      lVar7 = lVar4 + lVar7 + (ulong)(((uint)LZCOUNT((uint)lVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      puVar9 = puVar9 + 1;
    } while (lVar13 != 0);
  }
  iVar3 = *(int *)(param_1 + 0x80);
  lVar7 = lVar7 + iVar3;
  plVar12 = (long *)0x0;
  if (*(long *)(param_1 + 0x88) != 0) {
    plVar12 = (long *)(*(long *)(param_1 + 0x88) + 8);
  }
  if (iVar3 != 0) {
    lVar13 = (long)iVar3 << 3;
    do {
      lVar4 = *plVar12;
      uVar1 = *(uint *)(lVar4 + 0x10);
      if ((uVar1 & 3) == 0) {
        lVar5 = 0;
      }
      else {
        if ((uVar1 & 1) == 0) {
          lVar5 = 0;
        }
        else {
          pbVar8 = (byte *)(*(ulong *)(lVar4 + 0x18) & 0xfffffffffffffffc);
          bVar2 = *pbVar8;
          uVar6 = (ulong)(bVar2 >> 1);
          if ((bVar2 & 1) != 0) {
            uVar6 = *(ulong *)(pbVar8 + 8);
          }
          lVar5 = uVar6 + (((uint)LZCOUNT((uint)uVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
        }
        if ((uVar1 >> 1 & 1) != 0) {
          lVar5 = lVar5 + ((LZCOUNT(*(ulong *)(lVar4 + 0x20) | 1) ^ 0x3fU) * 9 + 0x89 >> 6);
        }
      }
      lVar4 = FUN_006e5694(lVar4,lVar5,lVar4 + 0x14);
      lVar13 = lVar13 + -8;
      plVar12 = plVar12 + 1;
      lVar7 = lVar4 + lVar7 + (ulong)(((uint)LZCOUNT((uint)lVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    } while (lVar13 != 0);
  }
  iVar3 = *(int *)(param_1 + 0x98);
  lVar7 = lVar7 + iVar3;
  puVar9 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0xa0) != 0) {
    puVar9 = (undefined8 *)(*(long *)(param_1 + 0xa0) + 8);
  }
  if (iVar3 != 0) {
    lVar13 = (long)iVar3 << 3;
    do {
      lVar4 = FUN_0064feb4(*puVar9);
      lVar13 = lVar13 + -8;
      lVar7 = lVar4 + lVar7 + (ulong)(((uint)LZCOUNT((uint)lVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      puVar9 = puVar9 + 1;
    } while (lVar13 != 0);
  }
  iVar3 = *(int *)(param_1 + 0xb0);
  lVar7 = lVar7 + iVar3;
  puVar9 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0xb8) != 0) {
    puVar9 = (undefined8 *)(*(long *)(param_1 + 0xb8) + 8);
  }
  if (iVar3 != 0) {
    lVar13 = (long)iVar3 << 3;
    do {
      lVar4 = FUN_00651158(*puVar9);
      lVar13 = lVar13 + -8;
      lVar7 = lVar4 + lVar7 + (ulong)(((uint)LZCOUNT((uint)lVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      puVar9 = puVar9 + 1;
    } while (lVar13 != 0);
  }
  iVar3 = *(int *)(param_1 + 200);
  lVar7 = lVar7 + iVar3;
  plVar12 = (long *)0x0;
  if (*(long *)(param_1 + 0xd0) != 0) {
    plVar12 = (long *)(*(long *)(param_1 + 0xd0) + 8);
  }
  if (iVar3 != 0) {
    lVar13 = (long)iVar3 << 3;
    do {
      lVar4 = *plVar12;
      uVar1 = *(uint *)(lVar4 + 0x10);
      if ((uVar1 & 3) == 0) {
        lVar5 = 0;
      }
      else {
        if ((uVar1 & 1) == 0) {
          lVar5 = 0;
        }
        else {
          pbVar8 = (byte *)(*(ulong *)(lVar4 + 0x18) & 0xfffffffffffffffc);
          bVar2 = *pbVar8;
          uVar6 = (ulong)(bVar2 >> 1);
          if ((bVar2 & 1) != 0) {
            uVar6 = *(ulong *)(pbVar8 + 8);
          }
          lVar5 = uVar6 + (((uint)LZCOUNT((uint)uVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
        }
        if ((uVar1 >> 1 & 1) != 0) {
          pbVar8 = (byte *)(*(ulong *)(lVar4 + 0x20) & 0xfffffffffffffffc);
          bVar2 = *pbVar8;
          uVar6 = (ulong)(bVar2 >> 1);
          if ((bVar2 & 1) != 0) {
            uVar6 = *(ulong *)(pbVar8 + 8);
          }
          lVar5 = lVar5 + uVar6 + (ulong)(((uint)LZCOUNT((uint)uVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6) +
                  1;
        }
      }
      lVar4 = FUN_006e5694(lVar4,lVar5,lVar4 + 0x14);
      lVar13 = lVar13 + -8;
      plVar12 = plVar12 + 1;
      lVar7 = lVar4 + lVar7 + (ulong)(((uint)LZCOUNT((uint)lVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    } while (lVar13 != 0);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      pbVar8 = (byte *)(*(ulong *)(param_1 + 0xd8) & 0xfffffffffffffffc);
      bVar2 = *pbVar8;
      uVar6 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar6 = *(ulong *)(pbVar8 + 8);
      }
      lVar7 = lVar7 + uVar6 + (ulong)(((uint)LZCOUNT((uint)uVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      pbVar8 = (byte *)(*(ulong *)(param_1 + 0xe0) & 0xfffffffffffffffc);
      bVar2 = *pbVar8;
      uVar6 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar6 = *(ulong *)(pbVar8 + 8);
      }
      lVar7 = lVar7 + uVar6 + (ulong)(((uint)LZCOUNT((uint)uVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      pbVar8 = (byte *)(*(ulong *)(param_1 + 0xe8) & 0xfffffffffffffffc);
      bVar2 = *pbVar8;
      uVar6 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar6 = *(ulong *)(pbVar8 + 8);
      }
      lVar7 = lVar7 + uVar6 + (ulong)(((uint)LZCOUNT((uint)uVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar1 >> 3 & 1) != 0) {
      pbVar8 = (byte *)(*(ulong *)(param_1 + 0xf0) & 0xfffffffffffffffc);
      bVar2 = *pbVar8;
      uVar6 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar6 = *(ulong *)(pbVar8 + 8);
      }
      lVar7 = lVar7 + uVar6 + (ulong)(((uint)LZCOUNT((uint)uVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
  }
  FUN_006e5694(param_1,lVar7,param_1 + 0x14);
  return;
}


// ===== 00660f5c  FUN_00660f5c =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00660f5c(long param_1,long param_2)

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
    FUN_005d663c(param_1 + 0x18,uVar4,lVar6 + 8,iVar1,
                 **(int **)(param_1 + 0x28) - *(int *)(param_1 + 0x20));
    iVar2 = **(int **)(param_1 + 0x28);
    iVar1 = *(int *)(param_1 + 0x20) + iVar1;
    *(int *)(param_1 + 0x20) = iVar1;
    if (iVar2 < iVar1) {
      **(int **)(param_1 + 0x28) = iVar1;
    }
  }
  iVar1 = *(int *)(param_2 + 0x38);
  if (iVar1 != 0) {
    lVar6 = *(long *)(param_2 + 0x40);
    uVar4 = FUN_00675710(param_1 + 0x30,iVar1);
    FUN_005d663c(param_1 + 0x30,uVar4,lVar6 + 8,iVar1,
                 **(int **)(param_1 + 0x40) - *(int *)(param_1 + 0x38));
    iVar2 = **(int **)(param_1 + 0x40);
    iVar1 = *(int *)(param_1 + 0x38) + iVar1;
    *(int *)(param_1 + 0x38) = iVar1;
    if (iVar2 < iVar1) {
      **(int **)(param_1 + 0x40) = iVar1;
    }
  }
  iVar1 = *(int *)(param_2 + 0x50);
  if (iVar1 != 0) {
    lVar6 = *(long *)(param_2 + 0x58);
    uVar4 = FUN_00675710(param_1 + 0x48,iVar1);
    FUN_005d663c(param_1 + 0x48,uVar4,lVar6 + 8,iVar1,
                 **(int **)(param_1 + 0x58) - *(int *)(param_1 + 0x50));
    iVar2 = **(int **)(param_1 + 0x58);
    iVar1 = *(int *)(param_1 + 0x50) + iVar1;
    *(int *)(param_1 + 0x50) = iVar1;
    if (iVar2 < iVar1) {
      **(int **)(param_1 + 0x58) = iVar1;
    }
  }
  iVar1 = *(int *)(param_2 + 0x68);
  if (iVar1 != 0) {
    lVar6 = *(long *)(param_2 + 0x70);
    uVar4 = FUN_00675710(param_1 + 0x60,iVar1);
    FUN_00662860(param_1 + 0x60,uVar4,lVar6 + 8,iVar1,
                 **(int **)(param_1 + 0x70) - *(int *)(param_1 + 0x68));
    iVar2 = **(int **)(param_1 + 0x70);
    iVar1 = *(int *)(param_1 + 0x68) + iVar1;
    *(int *)(param_1 + 0x68) = iVar1;
    if (iVar2 < iVar1) {
      **(int **)(param_1 + 0x70) = iVar1;
    }
  }
  iVar1 = *(int *)(param_2 + 0x80);
  if (iVar1 != 0) {
    lVar6 = *(long *)(param_2 + 0x88);
    uVar4 = FUN_00675710(param_1 + 0x78,iVar1);
    FUN_0066262c(param_1 + 0x78,uVar4,lVar6 + 8,iVar1,
                 **(int **)(param_1 + 0x88) - *(int *)(param_1 + 0x80));
    iVar2 = **(int **)(param_1 + 0x88);
    iVar1 = *(int *)(param_1 + 0x80) + iVar1;
    *(int *)(param_1 + 0x80) = iVar1;
    if (iVar2 < iVar1) {
      **(int **)(param_1 + 0x88) = iVar1;
    }
  }
  iVar1 = *(int *)(param_2 + 0x98);
  if (iVar1 != 0) {
    lVar6 = *(long *)(param_2 + 0xa0);
    uVar4 = FUN_00675710(param_1 + 0x90,iVar1);
    FUN_006625a4(param_1 + 0x90,uVar4,lVar6 + 8,iVar1,
                 **(int **)(param_1 + 0xa0) - *(int *)(param_1 + 0x98));
    iVar2 = **(int **)(param_1 + 0xa0);
    iVar1 = *(int *)(param_1 + 0x98) + iVar1;
    *(int *)(param_1 + 0x98) = iVar1;
    if (iVar2 < iVar1) {
      **(int **)(param_1 + 0xa0) = iVar1;
    }
  }
  iVar1 = *(int *)(param_2 + 0xb0);
  if (iVar1 != 0) {
    lVar6 = *(long *)(param_2 + 0xb8);
    uVar4 = FUN_00675710(param_1 + 0xa8,iVar1);
    FUN_006628e8(param_1 + 0xa8,uVar4,lVar6 + 8,iVar1,
                 **(int **)(param_1 + 0xb8) - *(int *)(param_1 + 0xb0));
    iVar2 = **(int **)(param_1 + 0xb8);
    iVar1 = *(int *)(param_1 + 0xb0) + iVar1;
    *(int *)(param_1 + 0xb0) = iVar1;
    if (iVar2 < iVar1) {
      **(int **)(param_1 + 0xb8) = iVar1;
    }
  }
  iVar1 = *(int *)(param_2 + 200);
  if (iVar1 != 0) {
    lVar6 = *(long *)(param_2 + 0xd0);
    uVar4 = FUN_00675710(param_1 + 0xc0,iVar1);
    FUN_0066251c(param_1 + 0xc0,uVar4,lVar6 + 8,iVar1,
                 **(int **)(param_1 + 0xd0) - *(int *)(param_1 + 200));
    iVar2 = **(int **)(param_1 + 0xd0);
    iVar1 = *(int *)(param_1 + 200) + iVar1;
    *(int *)(param_1 + 200) = iVar1;
    if (iVar2 < iVar1) {
      **(int **)(param_1 + 0xd0) = iVar1;
    }
  }
  uVar3 = *(uint *)(param_2 + 0x10);
  if ((uVar3 & 0xf) != 0) {
    if ((uVar3 & 1) != 0) {
      uVar5 = *(ulong *)(param_2 + 0xd8);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        FUN_006636d4(param_1 + 0xd8,uVar5 & 0xfffffffffffffffc);
      }
      else {
        FUN_006636d4(param_1 + 0xd8,uVar5 & 0xfffffffffffffffc,
                     *(undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc));
      }
    }
    if ((uVar3 >> 1 & 1) != 0) {
      uVar5 = *(ulong *)(param_2 + 0xe0);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        FUN_006636d4(param_1 + 0xe0,uVar5 & 0xfffffffffffffffc);
      }
      else {
        FUN_006636d4(param_1 + 0xe0,uVar5 & 0xfffffffffffffffc,
                     *(undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc));
      }
    }
    if ((uVar3 >> 2 & 1) != 0) {
      uVar5 = *(ulong *)(param_2 + 0xe8);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        FUN_006636d4(param_1 + 0xe8,uVar5 & 0xfffffffffffffffc);
      }
      else {
        FUN_006636d4(param_1 + 0xe8,uVar5 & 0xfffffffffffffffc,
                     *(undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc));
      }
    }
    if ((uVar3 >> 3 & 1) != 0) {
      uVar5 = *(ulong *)(param_2 + 0xf0);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        FUN_006636d4(param_1 + 0xf0,uVar5 & 0xfffffffffffffffc);
        uVar5 = *(ulong *)(param_2 + 8);
      }
      else {
        FUN_006636d4(param_1 + 0xf0,uVar5 & 0xfffffffffffffffc,
                     *(undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc));
        uVar5 = *(ulong *)(param_2 + 8);
      }
      goto joined_r0x006613b4;
    }
  }
  uVar5 = *(ulong *)(param_2 + 8);
joined_r0x006613b4:
  if ((uVar5 & 1) != 0) {
    FUN_006621e0(param_1 + 8,(uVar5 & 0xfffffffffffffffc) + 8);
    return;
  }
  return;
}


// ===== 006613bc  FUN_006613bc =====

undefined ** FUN_006613bc(void)

{
  return &PTR_FUN_00798ce0;
}


// ===== 006613c8  FUN_006613c8 =====

undefined8 FUN_006613c8(void)

{
  return 1;
}


// ===== 006613d0  FUN_006613d0 =====

void FUN_006613d0(void)

{
  FUN_00684dd0(FUN_0064dd54,&DAT_007ae908,&DAT_007aea60);
  return;
}


// ===== 006613e8  FUN_006613e8 =====

undefined8 FUN_006613e8(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00663420(param_1,0x100,PTR_PTR_007a3078);
    FUN_0064dd88(uVar1,param_1,0);
    return uVar1;
  }
  uVar1 = FUN_00759c3c(0x100);
                    /* try { // try from 00661438 to 00661443 has its CatchHandler @ 00661454 */
  FUN_0064dd88(uVar1,0,0);
  return uVar1;
}


// ===== 00661468  FUN_00661468 =====

undefined8 FUN_00661468(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00663420(param_1,0x48,PTR_PTR_007a3080);
    FUN_00650a50(uVar1,param_1,0);
    return uVar1;
  }
  uVar1 = FUN_00759c3c(0x48);
                    /* try { // try from 006614b8 to 006614c3 has its CatchHandler @ 006614d4 */
  FUN_00650a50(uVar1,0,0);
  return uVar1;
}


// ===== 006614e8  FUN_006614e8 =====

undefined8 FUN_006614e8(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00663420(param_1,0xa0,PTR_PTR_007a3088);
    FUN_006515d8(uVar1,param_1,0);
    return uVar1;
  }
  uVar1 = FUN_00759c3c(0xa0);
                    /* try { // try from 00661538 to 00661543 has its CatchHandler @ 00661554 */
  FUN_006515d8(uVar1,0,0);
  return uVar1;
}


// ===== 00661568  FUN_00661568 =====

undefined8 FUN_00661568(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00663420(param_1,0x58,PTR_PTR_007a3090);
    FUN_00652b3c(uVar1,param_1,0);
    return uVar1;
  }
  uVar1 = FUN_00759c3c(0x58);
                    /* try { // try from 006615b8 to 006615c3 has its CatchHandler @ 006615d4 */
  FUN_00652b3c(uVar1,0,0);
  return uVar1;
}


// ===== 006615e8  FUN_006615e8 =====

undefined8 FUN_006615e8(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00663420(param_1,0xb0,PTR_PTR_007a3098);
    FUN_006535ec(uVar1,param_1,0);
    return uVar1;
  }
  uVar1 = FUN_00759c3c(0xb0);
                    /* try { // try from 00661638 to 00661643 has its CatchHandler @ 00661654 */
  FUN_006535ec(uVar1,0,0);
  return uVar1;
}


// ===== 00661668  FUN_00661668 =====

undefined8 FUN_00661668(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00663420(param_1,0x28,PTR_PTR_007a30a0);
    FUN_00654c8c(uVar1,param_1,0);
    return uVar1;
  }
  uVar1 = FUN_00759c3c(0x28);
                    /* try { // try from 006616b8 to 006616c3 has its CatchHandler @ 006616d4 */
  FUN_00654c8c(uVar1,0,0);
  return uVar1;
}


// ===== 006616e8  FUN_006616e8 =====

undefined8 FUN_006616e8(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00663420(param_1,0x38,PTR_PTR_007a30a8);
    FUN_006553f0(uVar1,param_1,0);
    return uVar1;
  }
  uVar1 = FUN_00759c3c(0x38);
                    /* try { // try from 00661738 to 00661743 has its CatchHandler @ 00661754 */
  FUN_006553f0(uVar1,0,0);
  return uVar1;
}


// ===== 00661768  FUN_00661768 =====

undefined8 FUN_00661768(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00663420(param_1,0xe8,PTR_PTR_007a30b0);
    FUN_00655b40(uVar1,param_1,0);
    return uVar1;
  }
  uVar1 = FUN_00759c3c(0xe8);
                    /* try { // try from 006617b8 to 006617c3 has its CatchHandler @ 006617d4 */
  FUN_00655b40(uVar1,0,0);
  return uVar1;
}


// ===== 006617e8  FUN_006617e8 =====

undefined8 FUN_006617e8(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00663420(param_1,0x28,PTR_PTR_007a30b8);
    FUN_006576e4(uVar1,param_1,0);
    return uVar1;
  }
  uVar1 = FUN_00759c3c(0x28);
                    /* try { // try from 00661838 to 00661843 has its CatchHandler @ 00661854 */
  FUN_006576e4(uVar1,0,0);
  return uVar1;
}


// ===== 00661868  FUN_00661868 =====

undefined8 FUN_00661868(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00663420(param_1,0x100,PTR_PTR_007a30c0);
    FUN_00657cb0(uVar1,param_1,0);
    return uVar1;
  }
  uVar1 = FUN_00759c3c(0x100);
                    /* try { // try from 006618b8 to 006618c3 has its CatchHandler @ 006618d4 */
  FUN_00657cb0(uVar1,0,0);
  return uVar1;
}


// ===== 006618e8  FUN_006618e8 =====

undefined8 FUN_006618e8(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00663420(param_1,0x38,PTR_PTR_007a30c8);
    FUN_0065a280(uVar1,param_1,0);
    return uVar1;
  }
  uVar1 = FUN_00759c3c(0x38);
                    /* try { // try from 00661938 to 00661943 has its CatchHandler @ 00661954 */
  FUN_0065a280(uVar1,0,0);
  return uVar1;
}


// ===== 00661968  FUN_00661968 =====

undefined8 FUN_00661968(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00663420(param_1,0x30,PTR_PTR_007a30d0);
    FUN_0065ab70(uVar1,param_1,0);
    return uVar1;
  }
  uVar1 = FUN_00759c3c(0x30);
                    /* try { // try from 006619b8 to 006619c3 has its CatchHandler @ 006619d4 */
  FUN_0065ab70(uVar1,0,0);
  return uVar1;
}


// ===== 006619e8  FUN_006619e8 =====

undefined8 FUN_006619e8(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00663420(param_1,0x30,PTR_PTR_007a30d8);
    FUN_0065b41c(uVar1,param_1,0);
    return uVar1;
  }
  uVar1 = FUN_00759c3c(0x30);
                    /* try { // try from 00661a38 to 00661a43 has its CatchHandler @ 00661a54 */
  FUN_0065b41c(uVar1,0,0);
  return uVar1;
}


// ===== 00661a68  FUN_00661a68 =====

undefined8 FUN_00661a68(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00663420(param_1,0x28,PTR_PTR_007a30e0);
    FUN_0065b9dc(uVar1,param_1,0);
    return uVar1;
  }
  uVar1 = FUN_00759c3c(0x28);
                    /* try { // try from 00661ab8 to 00661ac3 has its CatchHandler @ 00661ad4 */
  FUN_0065b9dc(uVar1,0,0);
  return uVar1;
}


// ===== 00661ae8  FUN_00661ae8 =====

undefined8 FUN_00661ae8(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00663420(param_1,0x20,PTR_PTR_007a30e8);
    FUN_0065c0fc(uVar1,param_1,0);
    return uVar1;
  }
  uVar1 = FUN_00759c3c(0x20);
                    /* try { // try from 00661b38 to 00661b43 has its CatchHandler @ 00661b54 */
  FUN_0065c0fc(uVar1,0,0);
  return uVar1;
}


// ===== 00661b68  FUN_00661b68 =====

undefined8 FUN_00661b68(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00663420(param_1,0x28,PTR_PTR_007a30f0);
    FUN_0065c5bc(uVar1,param_1,0);
    return uVar1;
  }
  uVar1 = FUN_00759c3c(0x28);
                    /* try { // try from 00661bb8 to 00661bc3 has its CatchHandler @ 00661bd4 */
  FUN_0065c5bc(uVar1,0,0);
  return uVar1;
}


// ===== 00661be8  FUN_00661be8 =====

undefined8 FUN_00661be8(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00663420(param_1,0x20,PTR_PTR_007a30f8);
    FUN_0065cc2c(uVar1,param_1,0);
    return uVar1;
  }
  uVar1 = FUN_00759c3c(0x20);
                    /* try { // try from 00661c38 to 00661c43 has its CatchHandler @ 00661c54 */
  FUN_0065cc2c(uVar1,0,0);
  return uVar1;
}


// ===== 00661c68  FUN_00661c68 =====

undefined8 FUN_00661c68(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00663420(param_1,0x28,PTR_PTR_007a3100);
    FUN_0065d0ec(uVar1,param_1,0);
    return uVar1;
  }
  uVar1 = FUN_00759c3c(0x28);
                    /* try { // try from 00661cb8 to 00661cc3 has its CatchHandler @ 00661cd4 */
  FUN_0065d0ec(uVar1,0,0);
  return uVar1;
}


// ===== 00661ce8  FUN_00661ce8 =====

undefined8 FUN_00661ce8(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00663420(param_1,0x28,PTR_PTR_007a3108);
    FUN_0065d804(uVar1,param_1,0);
    return uVar1;
  }
  uVar1 = FUN_00759c3c(0x28);
                    /* try { // try from 00661d38 to 00661d43 has its CatchHandler @ 00661d54 */
  FUN_0065d804(uVar1,0,0);
  return uVar1;
}


// ===== 00661d68  FUN_00661d68 =====

undefined8 FUN_00661d68(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00663420(param_1,0x30,PTR_PTR_007a3110);
    FUN_0065e020(uVar1,param_1,0);
    return uVar1;
  }
  uVar1 = FUN_00759c3c(0x30);
                    /* try { // try from 00661db8 to 00661dc3 has its CatchHandler @ 00661dd4 */
  FUN_0065e020(uVar1,0,0);
  return uVar1;
}


// ===== 00661de8  FUN_00661de8 =====

undefined8 FUN_00661de8(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00663420(param_1,0x28,PTR_PTR_007a3118);
    FUN_0065f138(uVar1,param_1,0);
    return uVar1;
  }
  uVar1 = FUN_00759c3c(0x28);
                    /* try { // try from 00661e38 to 00661e43 has its CatchHandler @ 00661e54 */
  FUN_0065f138(uVar1,0,0);
  return uVar1;
}


// ===== 00661e68  FUN_00661e68 =====

undefined8 FUN_00661e68(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00663420(param_1,0xf8,PTR_PTR_007a3120);
    FUN_0065f748(uVar1,param_1,0);
    return uVar1;
  }
  uVar1 = FUN_00759c3c(0xf8);
                    /* try { // try from 00661eb8 to 00661ec3 has its CatchHandler @ 00661ed4 */
  FUN_0065f748(uVar1,0,0);
  return uVar1;
}


// ===== 00661ee8  FUN_00661ee8 =====

void FUN_00661ee8(undefined8 param_1,undefined8 param_2)

{
  FUN_006613e8(param_2);
  return;
}


// ===== 00661ef0  FUN_00661ef0 =====

void FUN_00661ef0(void)

{
  return;
}


// ===== 00661ef4  FUN_00661ef4 =====

void FUN_00661ef4(undefined8 param_1,undefined8 param_2)

{
  FUN_00661468(param_2);
  return;
}


// ===== 00661efc  FUN_00661efc =====

void FUN_00661efc(undefined8 param_1,undefined8 param_2)

{
  FUN_006614e8(param_2);
  return;
}


// ===== 00661f04  FUN_00661f04 =====

void FUN_00661f04(undefined8 param_1,undefined8 param_2)

{
  FUN_00661568(param_2);
  return;
}


// ===== 00661f0c  FUN_00661f0c =====

void FUN_00661f0c(undefined8 param_1,undefined8 param_2)

{
  FUN_006615e8(param_2);
  return;
}


// ===== 00661f14  FUN_00661f14 =====

undefined4 FUN_00661f14(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}


// ===== 00661f1c  FUN_00661f1c =====

void FUN_00661f1c(undefined8 param_1,undefined8 param_2)

{
  FUN_00661668(param_2);
  return;
}


// ===== 00661f24  FUN_00661f24 =====

void FUN_00661f24(undefined8 param_1,undefined8 param_2)

{
  FUN_006616e8(param_2);
  return;
}


// ===== 00661f2c  FUN_00661f2c =====

void FUN_00661f2c(undefined8 param_1,undefined8 param_2)

{
  FUN_00661768(param_2);
  return;
}


// ===== 00661f34  FUN_00661f34 =====

void FUN_00661f34(undefined8 param_1,undefined8 param_2)

{
  FUN_006617e8(param_2);
  return;
}


// ===== 00661f3c  FUN_00661f3c =====

void FUN_00661f3c(undefined8 param_1,undefined8 param_2)

{
  FUN_00661868(param_2);
  return;
}


// ===== 00661f44  FUN_00661f44 =====

void FUN_00661f44(undefined8 param_1,undefined8 param_2)

{
  FUN_006618e8(param_2);
  return;
}


// ===== 00661f4c  FUN_00661f4c =====

void FUN_00661f4c(undefined8 param_1,undefined8 param_2)

{
  FUN_00661968(param_2);
  return;
}


// ===== 00661f54  FUN_00661f54 =====

void FUN_00661f54(undefined8 param_1,undefined8 param_2)

{
  FUN_006619e8(param_2);
  return;
}


// ===== 00661f5c  FUN_00661f5c =====

void FUN_00661f5c(undefined8 param_1,undefined8 param_2)

{
  FUN_00661a68(param_2);
  return;
}


// ===== 00661f64  FUN_00661f64 =====

void FUN_00661f64(undefined8 param_1,undefined8 param_2)

{
  FUN_00661ae8(param_2);
  return;
}


// ===== 00661f6c  FUN_00661f6c =====

void FUN_00661f6c(undefined8 param_1,undefined8 param_2)

{
  FUN_00661b68(param_2);
  return;
}


// ===== 00661f74  FUN_00661f74 =====

void FUN_00661f74(undefined8 param_1,undefined8 param_2)

{
  FUN_00661be8(param_2);
  return;
}


// ===== 00661f7c  FUN_00661f7c =====

void FUN_00661f7c(undefined8 param_1,undefined8 param_2)

{
  FUN_00661c68(param_2);
  return;
}


// ===== 00661f84  FUN_00661f84 =====

void FUN_00661f84(undefined8 param_1,undefined8 param_2)

{
  FUN_00661ce8(param_2);
  return;
}


// ===== 00661f8c  FUN_00661f8c =====

void FUN_00661f8c(undefined8 param_1,undefined8 param_2)

{
  FUN_00661d68(param_2);
  return;
}


// ===== 00661f94  FUN_00661f94 =====

void FUN_00661f94(undefined8 param_1,undefined8 param_2)

{
  FUN_00661de8(param_2);
  return;
}


// ===== 00661f9c  FUN_00661f9c =====

void FUN_00661f9c(undefined8 param_1,undefined8 param_2)

{
  FUN_00661e68(param_2);
  return;
}


// ===== 00661fa4  FUN_00661fa4 =====

long * FUN_00661fa4(ulong *param_1)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  uVar3 = *param_1;
  plVar2 = (long *)(uVar3 & 0xfffffffffffffffc);
  if ((uVar3 & 1) != 0) {
    plVar2 = (long *)*plVar2;
  }
  if (plVar2 == (long *)0x0) {
    plVar1 = (long *)FUN_00759c3c(0x20);
    plVar1[1] = 0;
    *plVar1 = 0;
    plVar1[3] = 0;
    plVar1[2] = 0;
  }
  else {
    auVar4 = FUN_00663600(plVar2,0x20,&PTR_PTR_thunk_FUN_0073a404_00798f20);
    plVar1 = auVar4._0_8_;
    *auVar4._8_8_ = plVar1;
    auVar4._8_8_[1] = FUN_00662034;
    plVar1[1] = 0;
    *plVar1 = 0;
    plVar1[3] = 0;
    plVar1[2] = 0;
    uVar3 = *param_1;
  }
  *plVar1 = (long)plVar2;
  *param_1 = uVar3 & 2 | (ulong)plVar1 | 1;
  return plVar1 + 1;
}


// ===== 00662034  FUN_00662034 =====

void FUN_00662034(long param_1)

{
  void *__ptr;
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 8);
  __ptr = (void *)*plVar1;
  if (__ptr != *(void **)(param_1 + 0x10)) {
                    /* try { // try from 00662054 to 0066205b has its CatchHandler @ 00662080 */
    FUN_006fa9f8(plVar1);
    __ptr = (void *)*plVar1;
  }
  if (__ptr != (void *)0x0) {
    *(void **)(param_1 + 0x10) = __ptr;
    free(__ptr);
    return;
  }
  return;
}


// ===== 00662084  FUN_00662084 =====

void FUN_00662084(long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  
  uVar4 = (ulong)*(uint *)(param_1 + 8);
  if (0 < (int)*(uint *)(param_1 + 8)) {
    plVar2 = *(long **)(param_1 + 0x10);
    do {
      plVar2 = plVar2 + 1;
      lVar3 = *plVar2;
      uVar1 = *(uint *)(lVar3 + 0x10);
      *(undefined4 *)(lVar3 + 0x18) = 0;
      if ((uVar1 & 3) != 0) {
        if ((uVar1 & 1) != 0) {
          FUN_0064e914(*(undefined8 *)(lVar3 + 0x28));
        }
        if ((uVar1 >> 1 & 1) != 0) {
          FUN_0064e914(*(undefined8 *)(lVar3 + 0x30));
        }
      }
      *(undefined4 *)(lVar3 + 0x10) = 0;
      if ((*(byte *)(lVar3 + 8) & 1) != 0) {
        FUN_006622b8((byte *)(lVar3 + 8));
      }
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


// ===== 0066211c  FUN_0066211c =====

void FUN_0066211c(long param_1)

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
      if ((uVar1 & 3) != 0) {
        if ((uVar1 & 1) != 0) {
          pbVar4 = (byte *)(*(ulong *)(lVar2 + 0x18) & 0xfffffffffffffffc);
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
        if ((uVar1 >> 1 & 1) != 0) {
          pbVar4 = (byte *)(*(ulong *)(lVar2 + 0x20) & 0xfffffffffffffffc);
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


// ===== 006621e0  FUN_006621e0 =====

void FUN_006621e0(ulong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((*param_1 & 1) != 0) {
    FUN_006facf4((*param_1 & 0xfffffffffffffffc) + 8);
    return;
  }
  uVar1 = FUN_00661fa4();
  FUN_006facf4(uVar1,param_2);
  return;
}


// ===== 00662218  FUN_00662218 =====

ulong FUN_00662218(ulong *param_1)

{
  void *__ptr;
  void *__ptr_00;
  ulong uVar1;
  ulong *puVar2;
  long *plVar3;
  
  uVar1 = *param_1;
  puVar2 = (ulong *)(uVar1 & 0xfffffffffffffffc);
  if ((uVar1 & 1) != 0) {
    puVar2 = (ulong *)*puVar2;
  }
  if (puVar2 == (ulong *)0x0) {
    __ptr = (void *)(uVar1 & 0xfffffffffffffffc);
    if (__ptr != (void *)0x0) {
      plVar3 = (long *)((long)__ptr + 8);
      __ptr_00 = (void *)*plVar3;
      if (__ptr_00 != *(void **)((long)__ptr + 0x10)) {
                    /* try { // try from 0066227c to 00662283 has its CatchHandler @ 006622b4 */
        FUN_006fa9f8(plVar3);
        __ptr_00 = (void *)*plVar3;
      }
      if (__ptr_00 != (void *)0x0) {
        *(void **)((long)__ptr + 0x10) = __ptr_00;
        free(__ptr_00);
      }
      free(__ptr);
    }
    *param_1 = 0;
    return 0;
  }
  *param_1 = uVar1 & 2 | (ulong)puVar2;
  return (ulong)puVar2;
}


// ===== 006622b8  FUN_006622b8 =====

void FUN_006622b8(ulong *param_1)

{
  long *plVar1;
  ulong uVar2;
  
  if ((*param_1 & 1) == 0) {
    plVar1 = (long *)FUN_00661fa4();
    if (*plVar1 == plVar1[1]) {
      return;
    }
  }
  else {
    uVar2 = *param_1 & 0xfffffffffffffffc;
    if (*(long *)(uVar2 + 8) == *(long *)(uVar2 + 0x10)) {
      return;
    }
  }
  FUN_006fa9f8();
  return;
}


// ===== 006622fc  FUN_006622fc =====

void FUN_006622fc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,
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
      uVar1 = FUN_00661868(uVar3);
      iVar4 = iVar4 + -1;
      *puVar5 = uVar1;
      puVar5 = puVar5 + 1;
    } while (iVar4 != 0);
  }
  if (0 < (int)param_4) {
    uVar2 = (ulong)param_4;
    do {
      FUN_00662374(*param_3,*param_2);
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
    } while (uVar2 != 0);
  }
  return;
}


// ===== 00662374  FUN_00662374 =====

void FUN_00662374(undefined8 param_1,undefined8 param_2)

{
  FUN_00659dc0(param_2,param_1);
  return;
}


// ===== 00662384  FUN_00662384 =====

void FUN_00662384(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,
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
      uVar1 = FUN_00661768(uVar3);
      iVar4 = iVar4 + -1;
      *puVar5 = uVar1;
      puVar5 = puVar5 + 1;
    } while (iVar4 != 0);
  }
  if (0 < (int)param_4) {
    uVar2 = (ulong)param_4;
    do {
      FUN_006623fc(*param_3,*param_2);
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
    } while (uVar2 != 0);
  }
  return;
}


// ===== 006623fc  FUN_006623fc =====

void FUN_006623fc(undefined8 param_1,undefined8 param_2)

{
  FUN_0065711c(param_2,param_1);
  return;
}


// ===== 0066240c  FUN_0066240c =====

void FUN_0066240c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,
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
      uVar1 = FUN_00661d68(uVar3);
      iVar4 = iVar4 + -1;
      *puVar5 = uVar1;
      puVar5 = puVar5 + 1;
    } while (iVar4 != 0);
  }
  if (0 < (int)param_4) {
    uVar2 = (ulong)param_4;
    do {
      FUN_00662484(*param_3,*param_2);
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
    } while (uVar2 != 0);
  }
  return;
}


// ===== 00662484  FUN_00662484 =====

void FUN_00662484(undefined8 param_1,undefined8 param_2)

{
  FUN_0065ec98(param_2,param_1);
  return;
}


// ===== 00662494  FUN_00662494 =====

void FUN_00662494(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,
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
      uVar1 = FUN_006618e8(uVar3);
      iVar4 = iVar4 + -1;
      *puVar5 = uVar1;
      puVar5 = puVar5 + 1;
    } while (iVar4 != 0);
  }
  if (0 < (int)param_4) {
    uVar2 = (ulong)param_4;
    do {
      FUN_0066250c(*param_3,*param_2);
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
    } while (uVar2 != 0);
  }
  return;
}


// ===== 0066250c  FUN_0066250c =====

void FUN_0066250c(undefined8 param_1,undefined8 param_2)

{
  FUN_0065a9d4(param_2,param_1);
  return;
}


// ===== 0066251c  FUN_0066251c =====

void FUN_0066251c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,
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
      uVar1 = FUN_00661668(uVar3);
      iVar4 = iVar4 + -1;
      *puVar5 = uVar1;
      puVar5 = puVar5 + 1;
    } while (iVar4 != 0);
  }
  if (0 < (int)param_4) {
    uVar2 = (ulong)param_4;
    do {
      FUN_00662594(*param_3,*param_2);
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
    } while (uVar2 != 0);
  }
  return;
}


// ===== 00662594  FUN_00662594 =====

void FUN_00662594(undefined8 param_1,undefined8 param_2)

{
  FUN_00655304(param_2,param_1);
  return;
}


// ===== 006625a4  FUN_006625a4 =====

void FUN_006625a4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,
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
      uVar1 = FUN_006613e8(uVar3);
      iVar4 = iVar4 + -1;
      *puVar5 = uVar1;
      puVar5 = puVar5 + 1;
    } while (iVar4 != 0);
  }
  if (0 < (int)param_4) {
    uVar2 = (ulong)param_4;
    do {
      FUN_0066261c(*param_3,*param_2);
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
    } while (uVar2 != 0);
  }
  return;
}


// ===== 0066261c  FUN_0066261c =====

void FUN_0066261c(undefined8 param_1,undefined8 param_2)

{
  FUN_006502ec(param_2,param_1);
  return;
}


// ===== 0066262c  FUN_0066262c =====

void FUN_0066262c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,
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
      uVar1 = FUN_00661de8(uVar3);
      iVar4 = iVar4 + -1;
      *puVar5 = uVar1;
      puVar5 = puVar5 + 1;
    } while (iVar4 != 0);
  }
  if (0 < (int)param_4) {
    uVar2 = (ulong)param_4;
    do {
      FUN_006626a4(*param_3,*param_2);
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
    } while (uVar2 != 0);
  }
  return;
}


// ===== 006626a4  FUN_006626a4 =====

void FUN_006626a4(long param_1,long param_2)

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
      *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
    }
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | uVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006621e0(param_2 + 8,(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8);
  return;
}


// ===== 00662750  FUN_00662750 =====

void FUN_00662750(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,
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
      uVar1 = FUN_00661568(uVar3);
      iVar4 = iVar4 + -1;
      *puVar5 = uVar1;
      puVar5 = puVar5 + 1;
    } while (iVar4 != 0);
  }
  if (0 < (int)param_4) {
    uVar2 = (ulong)param_4;
    do {
      FUN_006627c8(*param_3,*param_2);
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
    } while (uVar2 != 0);
  }
  return;
}


// ===== 006627c8  FUN_006627c8 =====

void FUN_006627c8(undefined8 param_1,undefined8 param_2)

{
  FUN_00653420(param_2,param_1);
  return;
}


// ===== 006627d8  FUN_006627d8 =====

void FUN_006627d8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,
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
      uVar1 = FUN_00661e68(uVar3);
      iVar4 = iVar4 + -1;
      *puVar5 = uVar1;
      puVar5 = puVar5 + 1;
    } while (iVar4 != 0);
  }
  if (0 < (int)param_4) {
    uVar2 = (ulong)param_4;
    do {
      FUN_00662850(*param_3,*param_2);
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
    } while (uVar2 != 0);
  }
  return;
}


// ===== 00662850  FUN_00662850 =====

void FUN_00662850(undefined8 param_1,undefined8 param_2)

{
  FUN_00660f5c(param_2,param_1);
  return;
}


// ===== 00662860  FUN_00662860 =====

void FUN_00662860(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,
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
      uVar1 = FUN_006614e8(uVar3);
      iVar4 = iVar4 + -1;
      *puVar5 = uVar1;
      puVar5 = puVar5 + 1;
    } while (iVar4 != 0);
  }
  if (0 < (int)param_4) {
    uVar2 = (ulong)param_4;
    do {
      FUN_006628d8(*param_3,*param_2);
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
    } while (uVar2 != 0);
  }
  return;
}


// ===== 006628d8  FUN_006628d8 =====

void FUN_006628d8(undefined8 param_1,undefined8 param_2)

{
  FUN_006527d8(param_2,param_1);
  return;
}


// ===== 006628e8  FUN_006628e8 =====

void FUN_006628e8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,
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
      uVar1 = FUN_00661468(uVar3);
      iVar4 = iVar4 + -1;
      *puVar5 = uVar1;
      puVar5 = puVar5 + 1;
    } while (iVar4 != 0);
  }
  if (0 < (int)param_4) {
    uVar2 = (ulong)param_4;
    do {
      FUN_00662960(*param_3,*param_2);
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
    } while (uVar2 != 0);
  }
  return;
}


// ===== 00662960  FUN_00662960 =====

void FUN_00662960(undefined8 param_1,undefined8 param_2)

{
  FUN_00651358(param_2,param_1);
  return;
}


// ===== 00662970  FUN_00662970 =====

void FUN_00662970(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,
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
      uVar1 = FUN_006616e8(uVar3);
      iVar4 = iVar4 + -1;
      *puVar5 = uVar1;
      puVar5 = puVar5 + 1;
    } while (iVar4 != 0);
  }
  if (0 < (int)param_4) {
    uVar2 = (ulong)param_4;
    do {
      FUN_006629e8(*param_3,*param_2);
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
    } while (uVar2 != 0);
  }
  return;
}


// ===== 006629e8  FUN_006629e8 =====

void FUN_006629e8(undefined8 param_1,undefined8 param_2)

{
  FUN_00655a34(param_2,param_1);
  return;
}


// ===== 006629f8  FUN_006629f8 =====

void FUN_006629f8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,
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
      uVar1 = FUN_00661968(uVar3);
      iVar4 = iVar4 + -1;
      *puVar5 = uVar1;
      puVar5 = puVar5 + 1;
    } while (iVar4 != 0);
  }
  if (0 < (int)param_4) {
    uVar2 = (ulong)param_4;
    do {
      FUN_00662a70(*param_3,*param_2);
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
    } while (uVar2 != 0);
  }
  return;
}


// ===== 00662a70  FUN_00662a70 =====

void FUN_00662a70(undefined8 param_1,undefined8 param_2)

{
  FUN_0065b2cc(param_2,param_1);
  return;
}


// ===== 00662a80  _INIT_4 =====

void _INIT_4(void)

{
  FUN_006853b0(&DAT_007ae900,PTR_DAT_007a2ee0);
  return;
}


// ===== 00662a94  FUN_00662a94 =====

undefined8 * FUN_00662a94(long param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  lVar3 = *(long *)(param_1 + 0x28);
  lVar4 = *(long *)(param_1 + 8);
  lVar5 = *(long *)(param_1 + 0x18);
  *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(lVar4 + 8);
  *(long *)(param_1 + 0x18) = (lVar3 - lVar4) + lVar5 + -0x18;
  auVar6 = FUN_00662b9c(param_3,uVar2,param_2 + 0x10);
  lVar3 = auVar6._8_8_;
  puVar1 = auVar6._0_8_;
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + lVar3;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = 0;
  *(undefined8 **)(param_1 + 8) = puVar1;
  *puVar1 = uVar2;
  puVar1[1] = lVar3;
  *(long *)(param_1 + 0x28) = (long)(puVar1 + 3) + param_2;
  *(long *)(param_1 + 0x30) = (long)puVar1 + lVar3 + -0x10;
  return puVar1 + 3;
}


// ===== 00662b1c  FUN_00662b1c =====

undefined8 * FUN_00662b1c(long param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  lVar3 = *(long *)(param_1 + 0x28);
  lVar4 = *(long *)(param_1 + 8);
  lVar5 = *(long *)(param_1 + 0x18);
  *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(lVar4 + 8);
  *(long *)(param_1 + 0x18) = (lVar3 - lVar4) + lVar5 + -0x18;
  auVar6 = FUN_00662b9c(param_3,uVar2,param_2);
  lVar3 = auVar6._8_8_;
  puVar1 = auVar6._0_8_;
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + lVar3;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[1] = lVar3;
  puVar1[2] = 0;
  *(undefined8 **)(param_1 + 8) = puVar1;
  *puVar1 = uVar2;
  *(long *)(param_1 + 0x28) = (long)(puVar1 + 3) + param_2;
  *(long *)(param_1 + 0x30) = (long)puVar1 + lVar3;
  return puVar1 + 3;
}


// ===== 00662b9c  FUN_00662b9c =====

void FUN_00662b9c(ulong *param_1,long param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  undefined1 uStack_69;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 == (ulong *)0x0) {
    pcVar5 = (code *)0x0;
    uVar4 = 0x2000;
    uVar3 = 0x100;
  }
  else {
    uVar3 = *param_1;
    uVar4 = param_1[1];
    pcVar5 = (code *)param_1[2];
  }
  if ((ulong)(param_2 << 1) <= uVar4) {
    uVar4 = param_2 << 1;
  }
  if (param_2 != 0) {
    uVar3 = uVar4;
  }
  if (0xffffffffffffffe7 < param_3) {
    FUN_00675e64(auStack_68,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/arena.cc"
                 ,0x46);
                    /* try { // try from 00662c10 to 00662c23 has its CatchHandler @ 00662c90 */
    uVar2 = FUN_00675a58(auStack_68,
                         "CHECK failed: (min_bytes) <= (std::numeric_limits<size_t>::max() - SerialArena::kBlockHeaderSize): "
                        );
                    /* try { // try from 00662c24 to 00662c2b has its CatchHandler @ 00662c8c */
    FUN_00675ac0(&uStack_69,uVar2);
    FUN_00675e7c(auStack_68);
  }
  if (uVar3 <= param_3 + 0x18) {
    uVar3 = param_3 + 0x18;
  }
  if (pcVar5 == (code *)0x0) {
    FUN_00759c3c(uVar3);
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
  else {
    (*pcVar5)();
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00662cb8  FUN_00662cb8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_00662cb8(void)

{
  pthread_key_t __key;
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  pthread_key_t *ppVar5;
  
  if (((DAT_007aea78 & 1) == 0) && (iVar3 = FUN_00739c1c(&DAT_007aea78), iVar3 != 0)) {
                    /* try { // try from 00662d3c to 00662d43 has its CatchHandler @ 00662d88 */
    ppVar5 = (pthread_key_t *)FUN_00759c3c(4);
                    /* try { // try from 00662d44 to 00662d53 has its CatchHandler @ 00662d68 */
    pthread_key_create(ppVar5,(__destr_function *)PTR_FUN_007a3140);
    DAT_007aea70 = ppVar5;
    FUN_00739d60(&DAT_007aea78);
  }
  ppVar5 = DAT_007aea70;
  puVar4 = (undefined8 *)pthread_getspecific(*DAT_007aea70);
  if (puVar4 != (undefined8 *)0x0) {
    return puVar4;
  }
  puVar4 = (undefined8 *)FUN_00759c3c(0x20);
  uVar2 = _UNK_00200138;
  uVar1 = _DAT_00200130;
  __key = *ppVar5;
  puVar4[2] = 0;
  puVar4[1] = uVar2;
  *puVar4 = uVar1;
  pthread_setspecific(__key,puVar4);
  return puVar4;
}


// ===== 00662da0  FUN_00662da0 =====

void FUN_00662da0(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  long local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  for (lVar6 = *(long *)(param_1 + 0x10); lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x10)) {
    plVar7 = *(long **)(lVar6 + 8);
    plVar7[2] = *(long *)(lVar6 + 0x30);
    do {
      puVar5 = (undefined8 *)plVar7[2];
      puVar1 = (undefined8 *)((long)plVar7 + (plVar7[1] & 0xfffffffffffffff8U));
      if (puVar5 < puVar1 && 0 < (long)puVar1 - (long)puVar5) {
        do {
                    /* try { // try from 00662e58 to 00662e5b has its CatchHandler @ 00662ec8 */
          (*(code *)puVar5[1])(*puVar5);
          puVar5 = puVar5 + 2;
        } while (puVar5 < puVar1);
      }
      plVar7 = (long *)*plVar7;
    } while (plVar7 != (long *)0x0);
  }
  local_50 = 0;
                    /* try { // try from 00662dd4 to 00662e07 has its CatchHandler @ 00662ec4 */
  auVar8 = FUN_00662ecc(param_1,&local_50);
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4 & 0xfffffffffffffff8;
  if (uVar2 == 0) {
    if ((uVar4 & 1) != 0) goto LAB_00662e98;
    puVar5 = (undefined8 *)0x0;
LAB_00662e74:
    free(auVar8._0_8_);
  }
  else {
    puVar5 = *(undefined8 **)(uVar2 + 0x20);
    if ((uVar4 & 1) == 0) {
      if (*(code **)(uVar2 + 0x18) == (code *)0x0) goto LAB_00662e74;
      (**(code **)(uVar2 + 0x18))(auVar8._0_8_,auVar8._8_8_);
    }
  }
  local_50 = local_50 + auVar8._8_8_;
  if (puVar5 != (undefined8 *)0x0) {
                    /* try { // try from 00662e90 to 00662e97 has its CatchHandler @ 00662ec4 */
    (**(code **)*puVar5)(puVar5);
  }
LAB_00662e98:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00662ecc  FUN_00662ecc =====

undefined1  [16] FUN_00662ecc(long param_1,long *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *__ptr;
  long lVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  
  uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffff8;
  if (uVar1 == 0) {
    lVar4 = *(long *)(param_1 + 0x10);
    if (lVar4 == 0) goto LAB_00662fd0;
  }
  else {
    pcVar5 = *(code **)(uVar1 + 0x18);
    lVar4 = *(long *)(param_1 + 0x10);
    if (lVar4 == 0) {
LAB_00662fd0:
      __ptr = (undefined8 *)0x0;
      lVar3 = 0;
      goto LAB_00662fd8;
    }
    if (pcVar5 != (code *)0x0) {
      __ptr = (undefined8 *)0x0;
      lVar3 = 0;
      do {
        if (__ptr != (undefined8 *)0x0) {
          (*pcVar5)(__ptr,lVar3);
          *param_2 = *param_2 + lVar3;
        }
        __ptr = *(undefined8 **)(lVar4 + 8);
        lVar3 = __ptr[1];
        for (puVar2 = (undefined8 *)*__ptr; puVar2 != (undefined8 *)0x0;
            puVar2 = (undefined8 *)*puVar2) {
          (*pcVar5)(__ptr,lVar3);
          *param_2 = *param_2 + lVar3;
          lVar3 = puVar2[1];
          __ptr = puVar2;
        }
        lVar4 = *(long *)(lVar4 + 0x10);
      } while (lVar4 != 0);
      goto LAB_00662fd8;
    }
  }
  __ptr = (undefined8 *)0x0;
  lVar3 = 0;
  do {
    if (__ptr != (undefined8 *)0x0) {
      free(__ptr);
      *param_2 = *param_2 + lVar3;
    }
    __ptr = *(undefined8 **)(lVar4 + 8);
    lVar3 = __ptr[1];
    for (puVar2 = (undefined8 *)*__ptr; puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)*puVar2)
    {
      free(__ptr);
      *param_2 = *param_2 + lVar3;
      lVar3 = puVar2[1];
      __ptr = puVar2;
    }
    lVar4 = *(long *)(lVar4 + 0x10);
  } while (lVar4 != 0);
LAB_00662fd8:
  auVar6._8_8_ = lVar3;
  auVar6._0_8_ = __ptr;
  return auVar6;
}


// ===== 00662ff4  FUN_00662ff4 =====

void FUN_00662ff4(long *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  if (((uint)param_1[1] >> 1 & 1) == 0) {
LAB_00663010:
    uVar1 = FUN_00662cb8();
    plVar2 = (long *)FUN_00663184(param_1,uVar1);
    lVar3 = plVar2[5];
    lVar4 = plVar2[6];
  }
  else {
    plVar2 = *(long **)((param_1[1] & 0xfffffffffffffff8U) + 0x20);
    (**(code **)(*plVar2 + 0x10))(plVar2,param_3,param_2);
    lVar3 = FUN_00662cb8();
    if (*(long *)(lVar3 + 8) == *param_1) {
      plVar2 = *(long **)(lVar3 + 0x10);
    }
    else {
      lVar3 = FUN_00662cb8();
      plVar2 = (long *)param_1[3];
      if ((plVar2 == (long *)0x0) || (*plVar2 != lVar3)) goto LAB_00663010;
    }
    lVar3 = plVar2[5];
    lVar4 = plVar2[6];
  }
  if ((ulong)(lVar4 - lVar3) < param_2 + 0x10U) {
    FUN_00662a94(plVar2,param_2,param_1[1] & 0xfffffffffffffff8);
    return;
  }
  plVar2[5] = lVar3 + param_2;
  plVar2[6] = lVar4 + -0x10;
  return;
}


// ===== 006630c8  FUN_006630c8 =====

void FUN_006630c8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *extraout_x1;
  long *plVar3;
  
  lVar1 = FUN_00662cb8();
  if (*(long *)(lVar1 + 8) == *param_1) {
    plVar3 = *(long **)(lVar1 + 0x10);
  }
  else {
    lVar1 = FUN_00662cb8();
    plVar3 = (long *)param_1[3];
    if ((plVar3 == (long *)0x0) || (*plVar3 != lVar1)) {
      uVar2 = FUN_00662cb8();
      plVar3 = (long *)FUN_00663184(param_1,uVar2);
    }
  }
  lVar1 = plVar3[6];
  if (0xf < (ulong)(lVar1 - plVar3[5])) {
    plVar3[6] = lVar1 + -0x10;
    *(undefined8 *)(lVar1 + -0x10) = param_2;
    *(undefined8 *)(lVar1 + -8) = param_3;
    return;
  }
  FUN_00662a94(plVar3,0,param_1[1] & 0xfffffffffffffff8);
  *extraout_x1 = param_2;
  extraout_x1[1] = param_3;
  return;
}


// ===== 00663184  FUN_00663184 =====

long * FUN_00663184(undefined8 *param_1,long param_2)

{
  ulong *puVar1;
  bool bVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  
  for (plVar6 = (long *)param_1[2]; plVar6 != (long *)0x0; plVar6 = (long *)plVar6[2]) {
    if (*plVar6 == param_2) goto LAB_00663278;
  }
  puVar1 = (ulong *)(param_1[1] & 0xfffffffffffffff8);
  if (puVar1 == (ulong *)0x0) {
    uVar5 = 0x100;
  }
  else {
    uVar5 = *puVar1;
    if (uVar5 < 0x69) {
      uVar5 = 0x68;
    }
    if ((code *)puVar1[2] != (code *)0x0) {
      puVar3 = (undefined8 *)(*(code *)puVar1[2])(uVar5);
      goto LAB_006631fc;
    }
  }
  puVar3 = (undefined8 *)FUN_00759c3c(uVar5);
LAB_006631fc:
  *puVar3 = 0;
  puVar3[1] = uVar5;
  puVar3[2] = 0;
  plVar6 = puVar3 + 3;
  *plVar6 = param_2;
  puVar3[6] = 0;
  puVar3[7] = uVar5;
  *(undefined1 *)(puVar3 + 0xb) = 0;
  puVar3[0xc] = 0;
  puVar3[4] = puVar3;
  puVar3[8] = puVar3 + 0xd;
  puVar3[9] = (long)puVar3 + (uVar5 & 0xfffffffffffffff8);
  puVar3[10] = 0;
  lVar8 = param_1[2];
  puVar3[5] = lVar8;
  lVar4 = FUN_00755b40(lVar8,plVar6,param_1 + 2);
  if (lVar4 != lVar8) {
    do {
      puVar3[5] = lVar4;
      lVar8 = FUN_00755b40(lVar4,plVar6,param_1 + 2);
      bVar2 = lVar8 != lVar4;
      lVar4 = lVar8;
    } while (bVar2);
  }
LAB_00663278:
  lVar4 = FUN_00662cb8();
  uVar7 = *param_1;
  *(long **)(lVar4 + 0x10) = plVar6;
  lVar4 = FUN_00662cb8();
  *(undefined8 *)(lVar4 + 8) = uVar7;
  param_1[3] = plVar6;
  return plVar6;
}


// ===== 006632ac  FUN_006632ac =====

void FUN_006632ac(long *param_1,ulong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  if (((uint)param_1[1] >> 1 & 1) == 0) {
LAB_006632c8:
    uVar1 = FUN_00662cb8();
    plVar2 = (long *)FUN_00663184(param_1,uVar1);
    lVar3 = plVar2[5];
    lVar4 = plVar2[6];
  }
  else {
    plVar2 = *(long **)((param_1[1] & 0xfffffffffffffff8U) + 0x20);
    (**(code **)(*plVar2 + 0x10))(plVar2,param_3,param_2);
    lVar3 = FUN_00662cb8();
    if (*(long *)(lVar3 + 8) == *param_1) {
      plVar2 = *(long **)(lVar3 + 0x10);
    }
    else {
      lVar3 = FUN_00662cb8();
      plVar2 = (long *)param_1[3];
      if ((plVar2 == (long *)0x0) || (*plVar2 != lVar3)) goto LAB_006632c8;
    }
    lVar3 = plVar2[5];
    lVar4 = plVar2[6];
  }
  if ((ulong)(lVar4 - lVar3) < param_2) {
    FUN_00662b1c(plVar2,param_2,param_1[1] & 0xfffffffffffffff8);
    return;
  }
  plVar2[5] = lVar3 + param_2;
  return;
}


// ===== 00663378  FUN_00663378 =====

long FUN_00663378(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != 0) {
    lVar2 = 0;
    do {
      plVar1 = (long *)(lVar3 + 0x20);
      lVar3 = *(long *)(lVar3 + 0x10);
      lVar2 = *plVar1 + lVar2;
    } while (lVar3 != 0);
    return lVar2;
  }
  return 0;
}


// ===== 006633a4  FUN_006633a4 =====

long FUN_006633a4(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 != 0) {
    lVar5 = 0;
    do {
      plVar1 = (long *)(lVar4 + 0x28);
      plVar2 = (long *)(lVar4 + 0x18);
      plVar3 = (long *)(lVar4 + 8);
      lVar4 = *(long *)(lVar4 + 0x10);
      lVar5 = ((lVar5 + *plVar1 + *plVar2) - *plVar3) + -0x68;
    } while (lVar4 != 0);
    lVar4 = 0;
    if (7 < *(ulong *)(param_1 + 8)) {
      lVar4 = -0x28;
    }
    return lVar4 + lVar5;
  }
  lVar4 = 0;
  if (7 < *(ulong *)(param_1 + 8)) {
    lVar4 = -0x28;
  }
  return lVar4;
}


// ===== 00663420  FUN_00663420 =====

void FUN_00663420(long *param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  
  if ((*(byte *)(param_1 + 1) >> 1 & 1) == 0) {
    lVar1 = FUN_00662cb8();
    if (*(long *)(lVar1 + 8) == *param_1) {
      plVar2 = *(long **)(lVar1 + 0x10);
    }
    else {
      lVar1 = FUN_00662cb8();
      plVar2 = (long *)param_1[3];
      if ((plVar2 == (long *)0x0) || (*plVar2 != lVar1)) goto LAB_006634a0;
    }
    if (param_2 <= (ulong)(plVar2[6] - plVar2[5])) {
      plVar2[5] = plVar2[5] + param_2;
      return;
    }
    FUN_00662b1c(plVar2,param_2,param_1[1] & 0xfffffffffffffff8);
    return;
  }
LAB_006634a0:
  FUN_006632ac(param_1,param_2,param_3);
  return;
}


// ===== 006634e0  thunk_FUN_006634e4 =====

void thunk_FUN_006634e4(long *param_1,ulong param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  
  if ((*(byte *)(param_1 + 1) >> 1 & 1) == 0) {
    lVar2 = FUN_00662cb8();
    if (*(long *)(lVar2 + 8) == *param_1) {
      plVar4 = *(long **)(lVar2 + 0x10);
    }
    else {
      lVar2 = FUN_00662cb8();
      plVar4 = (long *)param_1[3];
      if ((plVar4 == (long *)0x0) || (*plVar4 != lVar2)) goto LAB_006635b0;
    }
    if ((0xf < param_2) &&
       (uVar1 = ((uint)LZCOUNT(param_2 - 1) ^ 0x3f) - 3, uVar1 < *(byte *)(plVar4 + 8))) {
      puVar3 = *(undefined8 **)(plVar4[9] + (ulong)uVar1 * 8);
      if (puVar3 != (undefined8 *)0x0) {
        *(undefined8 *)(plVar4[9] + (ulong)uVar1 * 8) = *puVar3;
        return;
      }
    }
    if (param_2 <= (ulong)(plVar4[6] - plVar4[5])) {
      plVar4[5] = plVar4[5] + param_2;
      return;
    }
    FUN_00662b1c(plVar4,param_2,param_1[1] & 0xfffffffffffffff8);
    return;
  }
LAB_006635b0:
  FUN_006632ac(param_1,param_2,param_3);
  return;
}


// ===== 006634e4  FUN_006634e4 =====

void FUN_006634e4(long *param_1,ulong param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  
  if ((*(byte *)(param_1 + 1) >> 1 & 1) == 0) {
    lVar2 = FUN_00662cb8();
    if (*(long *)(lVar2 + 8) == *param_1) {
      plVar4 = *(long **)(lVar2 + 0x10);
    }
    else {
      lVar2 = FUN_00662cb8();
      plVar4 = (long *)param_1[3];
      if ((plVar4 == (long *)0x0) || (*plVar4 != lVar2)) goto LAB_006635b0;
    }
    if ((0xf < param_2) &&
       (uVar1 = ((uint)LZCOUNT(param_2 - 1) ^ 0x3f) - 3, uVar1 < *(byte *)(plVar4 + 8))) {
      puVar3 = *(undefined8 **)(plVar4[9] + (ulong)uVar1 * 8);
      if (puVar3 != (undefined8 *)0x0) {
        *(undefined8 *)(plVar4[9] + (ulong)uVar1 * 8) = *puVar3;
        return;
      }
    }
    if (param_2 <= (ulong)(plVar4[6] - plVar4[5])) {
      plVar4[5] = plVar4[5] + param_2;
      return;
    }
    FUN_00662b1c(plVar4,param_2,param_1[1] & 0xfffffffffffffff8);
    return;
  }
LAB_006635b0:
  FUN_006632ac(param_1,param_2,param_3);
  return;
}


// ===== 00663600  FUN_00663600 =====

void FUN_00663600(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  
  if ((*(byte *)(param_1 + 1) >> 1 & 1) == 0) {
    lVar1 = FUN_00662cb8();
    if (*(long *)(lVar1 + 8) == *param_1) {
      plVar2 = *(long **)(lVar1 + 0x10);
    }
    else {
      lVar1 = FUN_00662cb8();
      plVar2 = (long *)param_1[3];
      if ((plVar2 == (long *)0x0) || (*plVar2 != lVar1)) goto LAB_00663688;
    }
    if (param_2 + 0x10U <= (ulong)(plVar2[6] - plVar2[5])) {
      plVar2[5] = plVar2[5] + param_2;
      plVar2[6] = plVar2[6] + -0x10;
      return;
    }
    FUN_00662a94(plVar2,param_2,param_1[1] & 0xfffffffffffffff8);
    return;
  }
LAB_00663688:
  FUN_00662ff4(param_1,param_2,param_3);
  return;
}


// ===== 006636c4  FUN_006636c4 =====

void FUN_006636c4(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(param_1);
    return;
  }
  return;
}


// ===== 006636d0  thunk_FUN_00715bac =====

int thunk_FUN_00715bac(pthread_mutex_t *param_1)

{
  int iVar1;
  
  iVar1 = pthread_mutex_destroy(param_1);
  return iVar1;
}


// ===== 006636d4  FUN_006636d4 =====

void FUN_006636d4(ulong *param_1,byte *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte *pbVar3;
  undefined *puVar4;
  ulong *puVar5;
  undefined1 *puVar6;
  undefined1 auVar7 [16];
  
  if ((*param_1 & 3) != 0) {
    uVar2 = *(ulong *)(param_2 + 8);
    pbVar3 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      pbVar3 = param_2 + 1;
      uVar2 = (ulong)(*param_2 >> 1);
    }
    FUN_00712d54(*param_1 & 0xfffffffffffffffc,pbVar3,uVar2);
    return;
  }
  if (param_3 == 0) {
    puVar5 = (ulong *)FUN_00759c3c(0x18);
    uVar2 = *(ulong *)(param_2 + 8);
    pbVar3 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      pbVar3 = param_2 + 1;
      uVar2 = (ulong)(*param_2 >> 1);
    }
    if (0xfffffffffffffff7 < uVar2) {
                    /* try { // try from 006638a4 to 006638ab has its CatchHandler @ 006638ac */
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(puVar5);
    }
    if (uVar2 < 0x17) {
      puVar6 = (undefined1 *)((long)puVar5 + 1);
      *(char *)puVar5 = (char)((int)uVar2 << 1);
      if (uVar2 == 0) goto LAB_0066387c;
    }
    else {
      uVar1 = (uVar2 & 0xfffffffffffffff8) + 8;
      if ((uVar2 | 7) != 0x17) {
        uVar1 = uVar2 | 7;
      }
                    /* try { // try from 00663854 to 0066385b has its CatchHandler @ 006638ac */
      puVar6 = (undefined1 *)FUN_00759c3c(uVar1 + 1);
      puVar5[1] = uVar2;
      puVar5[2] = (ulong)puVar6;
      *puVar5 = uVar1 + 1 | 1;
    }
    memmove(puVar6,pbVar3,uVar2);
LAB_0066387c:
    puVar6[uVar2] = 0;
    *param_1 = (ulong)puVar5 | 2;
    return;
  }
  uVar2 = *(ulong *)(param_2 + 8);
  pbVar3 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar3 = param_2 + 1;
    uVar2 = (ulong)(*param_2 >> 1);
  }
  auVar7 = FUN_00663600(param_3,0x18,&PTR_PTR_thunk_FUN_0073a404_00798f00);
  puVar4 = PTR_FUN_007a2ca8;
  puVar5 = auVar7._0_8_;
  *auVar7._8_8_ = puVar5;
  auVar7._8_8_[1] = puVar4;
  if (0xfffffffffffffff7 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_002fb400(puVar5);
  }
  if (uVar2 < 0x17) {
    puVar6 = (undefined1 *)((long)puVar5 + 1);
    *(char *)puVar5 = (char)((int)uVar2 << 1);
    if (uVar2 == 0) goto LAB_0066381c;
  }
  else {
    uVar1 = (uVar2 & 0xfffffffffffffff8) + 8;
    if ((uVar2 | 7) != 0x17) {
      uVar1 = uVar2 | 7;
    }
    puVar6 = (undefined1 *)FUN_00759c3c(uVar1 + 1);
    puVar5[1] = uVar2;
    puVar5[2] = (ulong)puVar6;
    *puVar5 = uVar1 + 1 | 1;
  }
  memmove(puVar6,pbVar3,uVar2);
LAB_0066381c:
  puVar6[uVar2] = 0;
  *param_1 = (ulong)puVar5 | 3;
  return;
}


// ===== 006638c0  FUN_006638c0 =====

void FUN_006638c0(ulong *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  byte *pbVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  if ((*param_1 & 3) != 0) {
    pbVar3 = (byte *)(*param_1 & 0xfffffffffffffffc);
    if ((*pbVar3 & 1) != 0) {
      free(*(void **)(pbVar3 + 0x10));
    }
    uVar4 = param_2[1];
    uVar2 = *param_2;
    *(undefined8 *)(pbVar3 + 0x10) = param_2[2];
    *(undefined8 *)(pbVar3 + 8) = uVar4;
    *(undefined8 *)pbVar3 = uVar2;
    *(undefined2 *)param_2 = 0;
    return;
  }
  if (param_3 != 0) {
    auVar6 = FUN_00663600(param_3,0x18,PTR_PTR_007a2ea8);
    puVar1 = auVar6._0_8_;
    *auVar6._8_8_ = (ulong)puVar1;
    auVar6._8_8_[1] = (ulong)FUN_005d5b40;
    uVar4 = param_2[1];
    uVar2 = *param_2;
    puVar1[2] = param_2[2];
    puVar1[1] = uVar4;
    *puVar1 = uVar2;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    *param_1 = (ulong)puVar1 | 3;
    return;
  }
  puVar1 = (undefined8 *)FUN_00759c3c(0x18);
  uVar2 = param_2[2];
  uVar5 = param_2[1];
  uVar4 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  puVar1[2] = uVar2;
  puVar1[1] = uVar5;
  *puVar1 = uVar4;
  *param_1 = (ulong)puVar1 | 2;
  return;
}


// ===== 0066399c  FUN_0066399c =====

undefined8 * FUN_0066399c(ulong *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  
  if (((uint)*param_1 >> 1 & 1) != 0) {
    return (undefined8 *)(*param_1 & 0xfffffffffffffffc);
  }
  if (param_2 != 0) {
    auVar2 = FUN_00663600(param_2,0x18,PTR_PTR_007a2ea8);
    puVar1 = auVar2._0_8_;
    *auVar2._8_8_ = puVar1;
    auVar2._8_8_[1] = FUN_005d5b40;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0;
    *param_1 = (ulong)puVar1 | 3;
    return puVar1;
  }
  puVar1 = (undefined8 *)FUN_00759c3c(0x18);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  *param_1 = (ulong)puVar1 | 2;
  return puVar1;
}


// ===== 00663a20  FUN_00663a20 =====

void FUN_00663a20(ulong *param_1)

{
  byte *__ptr;
  
  __ptr = (byte *)(*param_1 ^ 2);
  if ((__ptr != (byte *)0x0) && (((ulong)__ptr & 3) == 0)) {
    if ((*__ptr & 1) != 0) {
      free(*(void **)(__ptr + 0x10));
    }
    free(__ptr);
    return;
  }
  return;
}


// ===== 00663a6c  FUN_00663a6c =====

void FUN_00663a6c(byte *param_1)

{
  if (param_1 != (byte *)0x0) {
    if ((*param_1 & 1) != 0) {
      free(*(void **)(param_1 + 0x10));
    }
    free(param_1);
    return;
  }
  return;
}


// ===== 00663aa8  FUN_00663aa8 =====

void FUN_00663aa8(byte *param_1)

{
  if ((*param_1 & 1) == 0) {
    return;
  }
  free(*(void **)(param_1 + 0x10));
  return;
}


// ===== 00663abc  FUN_00663abc =====

void FUN_00663abc(void)

{
  undefined *puVar1;
  int iVar2;
  
  if (((DAT_007aeaa0 & 1) == 0) &&
     (iVar2 = FUN_00739c1c(&DAT_007aeaa0), puVar1 = PTR_DAT_007a2ea0, iVar2 != 0)) {
    *(undefined8 *)PTR_DAT_007a2ea0 = 0;
    *(undefined8 *)(puVar1 + 8) = 0;
    *(undefined8 *)(puVar1 + 0x10) = 0;
                    /* try { // try from 00663b04 to 00663b0f has its CatchHandler @ 00663b34 */
    FUN_0066ee94(PTR_FUN_007a3208);
    *(undefined4 *)PTR_DAT_007a3210 = 1;
    FUN_00739d60(&DAT_007aeaa0);
    return;
  }
  return;
}


// ===== 00663b4c  FUN_00663b4c =====

long FUN_00663b4c(ulong *param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  ulong *puVar4;
  
  puVar4 = (ulong *)param_1[2];
  bVar3 = (*param_1 & 1) == 0;
  if (bVar3) {
    puVar4 = (ulong *)((long)param_1 + 1);
  }
  lVar1 = 0x16;
  if (!bVar3) {
    lVar1 = (*param_1 & 0xfffffffffffffffe) - 1;
  }
  lVar2 = 0;
  if (param_1 + 3 <= puVar4 || puVar4 < param_1) {
    lVar2 = lVar1;
  }
  return lVar2;
}


// ===== 00663b84  FUN_00663b84 =====

void FUN_00663b84(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00663b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))();
    return;
  }
  return;
}


// ===== 00663b98  _INIT_3 =====

void _INIT_3(void)

{
  undefined *puVar1;
  int iVar2;
  
  if (((DAT_007aeaa0 & 1) == 0) &&
     (iVar2 = FUN_00739c1c(&DAT_007aeaa0), puVar1 = PTR_DAT_007a2ea0, iVar2 != 0)) {
    *(undefined8 *)PTR_DAT_007a2ea0 = 0;
    *(undefined8 *)(puVar1 + 8) = 0;
    *(undefined8 *)(puVar1 + 0x10) = 0;
                    /* try { // try from 00663be0 to 00663beb has its CatchHandler @ 00663c10 */
    FUN_0066ee94(PTR_FUN_007a3208);
    *(undefined4 *)PTR_DAT_007a3210 = 1;
    FUN_00739d60(&DAT_007aeaa0);
    return;
  }
  return;
}


// ===== 00663c28  FUN_00663c28 =====

bool FUN_00663c28(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = (undefined8 *)FUN_00663c68(*param_1);
  if (puVar1 != (undefined8 *)0x0) {
    uVar5 = puVar1[3];
    uVar4 = puVar1[2];
    uVar3 = puVar1[5];
    uVar2 = puVar1[4];
    uVar6 = *puVar1;
    param_3[1] = puVar1[1];
    *param_3 = uVar6;
    param_3[3] = uVar5;
    param_3[2] = uVar4;
    param_3[5] = uVar3;
    param_3[4] = uVar2;
  }
  return puVar1 != (undefined8 *)0x0;
}


// ===== 00663c68  FUN_00663c68 =====

long * FUN_00663c68(ulong param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  undefined2 uVar7;
  undefined8 uVar8;
  
  if ((DAT_007aeac8 != (long *)0x0) && (uVar2 = DAT_007aeac8[1], uVar2 != 0)) {
    uVar3 = ((ulong)(uint)((int)param_1 << 3) + 8 ^ param_1 >> 0x20) * -0x622015f714c7d297;
    uVar8 = NEON_cnt(uVar2,1);
    uVar7 = NEON_uaddlv(uVar8,1);
    uVar3 = (param_1 >> 0x20 ^ uVar3 >> 0x2f ^ uVar3) * -0x622015f714c7d297;
    uVar6 = CONCAT62((int6)((ulong)uVar8 >> 0x10),uVar7) & 0xffffffff;
    uVar3 = (uVar3 ^ uVar3 >> 0x2f) * -0x622015f714c7d297 ^ (long)param_2;
    if (uVar6 < 2) {
      uVar4 = uVar2 - 1 & uVar3;
    }
    else {
      uVar4 = uVar3;
      if (uVar2 <= uVar3) {
        uVar4 = 0;
        if (uVar2 != 0) {
          uVar4 = uVar3 / uVar2;
        }
        uVar4 = uVar3 - uVar4 * uVar2;
      }
    }
    plVar5 = *(long **)(*DAT_007aeac8 + uVar4 * 8);
    if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
      if (uVar6 < 2) {
        do {
          if (uVar3 == plVar5[1]) {
            if ((plVar5[2] == param_1) && ((int)plVar5[3] == param_2)) {
LAB_00663d50:
              return plVar5 + 2;
            }
          }
          else if ((plVar5[1] & uVar2 - 1) != uVar4) {
            return (long *)0x0;
          }
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
      else {
        do {
          uVar6 = plVar5[1];
          if (uVar3 == uVar6) {
            if ((plVar5[2] == param_1) && ((int)plVar5[3] == param_2)) goto LAB_00663d50;
          }
          else {
            if (uVar2 <= uVar6) {
              uVar1 = 0;
              if (uVar2 != 0) {
                uVar1 = uVar6 / uVar2;
              }
              uVar6 = uVar6 - uVar1 * uVar2;
            }
            if (uVar6 != uVar4) {
              return (long *)0x0;
            }
          }
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
    }
  }
  return (long *)0x0;
}


// ===== 00663dac  FUN_00663dac =====

void FUN_00663dac(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  return;
}


// ===== 00663dbc  FUN_00663dbc =====

void FUN_00663dbc(long *param_1)

{
  short sVar1;
  void *__ptr;
  undefined8 *puVar2;
  long lVar3;
  
  if (*param_1 == 0) {
    sVar1 = *(short *)((long)param_1 + 10);
    puVar2 = (undefined8 *)param_1[2];
    if ((long)sVar1 < 0) {
                    /* try { // try from 00663e34 to 00663e37 has its CatchHandler @ 00663e60 */
      FUN_0066bc94(*puVar2,puVar2 + 1);
    }
    else if (sVar1 != 0) {
      lVar3 = (long)sVar1 << 5;
      puVar2 = puVar2 + 1;
      do {
                    /* try { // try from 00663e00 to 00663e07 has its CatchHandler @ 00663e64 */
        FUN_00667a60(puVar2);
        lVar3 = lVar3 + -0x20;
        puVar2 = puVar2 + 4;
      } while (lVar3 != 0);
    }
    __ptr = (void *)param_1[2];
    if (-1 < *(short *)((long)param_1 + 10)) {
      free(__ptr);
      return;
    }
    if (__ptr != (void *)0x0) {
      FUN_0066bd04(__ptr,*(undefined8 *)((long)__ptr + 8));
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 00663e68  FUN_00663e68 =====

bool FUN_00663e68(long param_1,int param_2)

{
  ushort uVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = *(ushort *)(param_1 + 10);
  if ((ulong)uVar1 == 0) {
    return false;
  }
  if ((short)uVar1 < 0) {
    piVar3 = (int *)FUN_0066ba30();
    if (piVar3 == (int *)0x0) {
      return false;
    }
  }
  else {
    piVar2 = *(int **)(param_1 + 0x10);
    lVar4 = (ulong)uVar1 * 0x20 + -0x20;
    if (lVar4 != 0) {
      uVar5 = lVar4 >> 5;
      piVar3 = piVar2;
      do {
        uVar6 = uVar5 >> 1;
        piVar2 = piVar3 + uVar6 * 8 + 8;
        uVar5 = uVar5 + ~uVar6;
        if (param_2 <= piVar3[uVar6 * 8]) {
          piVar2 = piVar3;
          uVar5 = uVar6;
        }
        piVar3 = piVar2;
      } while (uVar5 != 0);
    }
    piVar3 = piVar2 + 2;
    if (*piVar2 != param_2) {
      return false;
    }
  }
  return (*(byte *)((long)piVar3 + 10) & 1) == 0;
}


// ===== 00663ef8  FUN_00663ef8 =====

int * FUN_00663ef8(long param_1,int param_2)

{
  ushort uVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = *(ushort *)(param_1 + 10);
  if ((ulong)uVar1 == 0) {
    return (int *)0x0;
  }
  if ((short)uVar1 < 0) {
    piVar2 = (int *)FUN_0066ba30();
    return piVar2;
  }
  piVar2 = *(int **)(param_1 + 0x10);
  lVar4 = (ulong)uVar1 * 0x20 + -0x20;
  if (lVar4 != 0) {
    uVar5 = lVar4 >> 5;
    piVar3 = piVar2;
    do {
      uVar6 = uVar5 >> 1;
      piVar2 = piVar3 + uVar6 * 8 + 8;
      uVar5 = uVar5 + ~uVar6;
      if (param_2 <= piVar3[uVar6 * 8]) {
        piVar2 = piVar3;
        uVar5 = uVar6;
      }
      piVar3 = piVar2;
    } while (uVar5 != 0);
  }
  piVar3 = piVar2 + 2;
  if (*piVar2 != param_2) {
    piVar3 = (int *)0x0;
  }
  return piVar3;
}


// ===== 00663f5c  FUN_00663f5c =====

undefined8 FUN_00663f5c(long param_1,int param_2)

{
  ushort uVar1;
  int *piVar2;
  int *piVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar1 = *(ushort *)(param_1 + 10);
  if ((ulong)uVar1 != 0) {
    if ((short)uVar1 < 0) {
      piVar3 = (int *)FUN_0066ba30();
      if (piVar3 != (int *)0x0) goto LAB_00663fcc;
    }
    else {
      piVar2 = *(int **)(param_1 + 0x10);
      lVar5 = (ulong)uVar1 * 0x20 + -0x20;
      if (lVar5 != 0) {
        uVar6 = lVar5 >> 5;
        piVar3 = piVar2;
        do {
          uVar7 = uVar6 >> 1;
          piVar2 = piVar3 + uVar7 * 8 + 8;
          uVar6 = uVar6 + ~uVar7;
          if (param_2 <= piVar3[uVar7 * 8]) {
            piVar2 = piVar3;
            uVar6 = uVar7;
          }
          piVar3 = piVar2;
        } while (uVar6 != 0);
      }
      piVar3 = piVar2 + 2;
      if (*piVar2 == param_2) {
LAB_00663fcc:
        uVar4 = FUN_00663fd4(piVar3);
        return uVar4;
      }
    }
  }
  return 0;
}


// ===== 00663fd4  FUN_00663fd4 =====

void FUN_00663fd4(long *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 uStack_59;
  undefined1 auStack_58 [48];
  long local_28;
  
  lVar4 = tpidr_el0;
  local_28 = *(long *)(lVar4 + 0x28);
  iVar1 = *(int *)(PTR_DAT_007a3220 + (ulong)*(byte *)(param_1 + 1) * 4);
  if (iVar1 < 6) {
    if (iVar1 < 3) {
      if ((iVar1 == 1) || (iVar1 == 2)) goto LAB_0066408c;
    }
    else if ((iVar1 == 3) || ((iVar1 == 4 || (iVar1 == 5)))) goto LAB_0066408c;
LAB_006640b4:
    FUN_00675e64(auStack_58,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/extension_set.cc"
                 ,0x5ee);
                    /* try { // try from 006640cc to 006640df has its CatchHandler @ 0066410c */
    uVar3 = FUN_00675a58(auStack_58,"Can\'t get here.");
                    /* try { // try from 006640e0 to 006640e7 has its CatchHandler @ 00664108 */
    FUN_00675ac0(&uStack_59,uVar3);
    FUN_00675e7c(auStack_58);
    uVar2 = 0;
    if (*(long *)(lVar4 + 0x28) == local_28) {
      return;
    }
    goto LAB_00664104;
  }
  if (iVar1 < 8) {
    if ((iVar1 != 6) && (iVar1 != 7)) goto LAB_006640b4;
LAB_0066408c:
    uVar2 = *(undefined4 *)*param_1;
    lVar4 = *(long *)(lVar4 + 0x28);
  }
  else {
    if (iVar1 == 8) goto LAB_0066408c;
    if ((iVar1 != 9) && (iVar1 != 10)) goto LAB_006640b4;
    uVar2 = *(undefined4 *)(*param_1 + 8);
    lVar4 = *(long *)(lVar4 + 0x28);
  }
  if (lVar4 == local_28) {
    return;
  }
LAB_00664104:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 00664130  FUN_00664130 =====

void FUN_00664130(long param_1,int param_2)

{
  ushort uVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = *(ushort *)(param_1 + 10);
  if ((ulong)uVar1 != 0) {
    if ((short)uVar1 < 0) {
      piVar3 = (int *)FUN_0066ba30();
      if (piVar3 != (int *)0x0) goto LAB_0066419c;
    }
    else {
      piVar2 = *(int **)(param_1 + 0x10);
      lVar4 = (ulong)uVar1 * 0x20 + -0x20;
      if (lVar4 != 0) {
        uVar5 = lVar4 >> 5;
        piVar3 = piVar2;
        do {
          uVar6 = uVar5 >> 1;
          piVar2 = piVar3 + uVar6 * 8 + 8;
          uVar5 = uVar5 + ~uVar6;
          if (param_2 <= piVar3[uVar6 * 8]) {
            piVar2 = piVar3;
            uVar5 = uVar6;
          }
          piVar3 = piVar2;
        } while (uVar5 != 0);
      }
      piVar3 = piVar2 + 2;
      if (*piVar2 == param_2) {
LAB_0066419c:
        FUN_00664208(piVar3);
        return;
      }
    }
  }
  return;
}


// ===== 006641a4  FUN_006641a4 =====

int * FUN_006641a4(long param_1,int param_2)

{
  ushort uVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = *(ushort *)(param_1 + 10);
  if ((ulong)uVar1 == 0) {
    return (int *)0x0;
  }
  if ((short)uVar1 < 0) {
    piVar2 = (int *)FUN_0066ba30();
    return piVar2;
  }
  piVar2 = *(int **)(param_1 + 0x10);
  lVar4 = (ulong)uVar1 * 0x20 + -0x20;
  if (lVar4 != 0) {
    uVar5 = lVar4 >> 5;
    piVar3 = piVar2;
    do {
      uVar6 = uVar5 >> 1;
      piVar2 = piVar3 + uVar6 * 8 + 8;
      uVar5 = uVar5 + ~uVar6;
      if (param_2 <= piVar3[uVar6 * 8]) {
        piVar2 = piVar3;
        uVar5 = uVar6;
      }
      piVar3 = piVar2;
    } while (uVar5 != 0);
  }
  piVar3 = piVar2 + 2;
  if (*piVar2 != param_2) {
    piVar3 = (int *)0x0;
  }
  return piVar3;
}


// ===== 00664208  FUN_00664208 =====

void FUN_00664208(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  byte *pbVar4;
  long lVar5;
  ulong uVar6;
  
  if (*(char *)((long)param_1 + 9) == '\0') {
    if ((*(byte *)((long)param_1 + 10) & 1) != 0) {
      return;
    }
    if (*(int *)(PTR_DAT_007a3220 + (ulong)*(byte *)(param_1 + 1) * 4) == 10) {
      if ((*(byte *)((long)param_1 + 10) >> 4 & 1) == 0) {
        pcVar3 = *(code **)(*(long *)*param_1 + 0x20);
      }
      else {
        pcVar3 = *(code **)(*(long *)*param_1 + 0x78);
      }
      (*pcVar3)();
    }
    else if (*(int *)(PTR_DAT_007a3220 + (ulong)*(byte *)(param_1 + 1) * 4) == 9) {
      pbVar4 = (byte *)*param_1;
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
    *(byte *)((long)param_1 + 10) = *(byte *)((long)param_1 + 10) & 0xf0 | 1;
    return;
  }
  iVar1 = *(int *)(PTR_DAT_007a3220 + (ulong)*(byte *)(param_1 + 1) * 4);
  if (iVar1 < 6) {
    if (iVar1 < 3) {
      if ((iVar1 == 1) || (iVar1 == 2)) goto LAB_00664320;
    }
    else if ((iVar1 == 3) || ((iVar1 == 4 || (iVar1 == 5)))) {
LAB_00664320:
      *(undefined4 *)*param_1 = 0;
      return;
    }
  }
  else if (iVar1 < 8) {
    if ((iVar1 == 6) || (iVar1 == 7)) goto LAB_00664320;
  }
  else {
    if (iVar1 == 8) goto LAB_00664320;
    if (iVar1 == 9) {
      lVar5 = *param_1;
      uVar6 = (ulong)*(uint *)(lVar5 + 8);
      if (0 < (int)*(uint *)(lVar5 + 8)) {
        puVar2 = (undefined8 *)(*(long *)(lVar5 + 0x10) + 8);
        do {
          while (pbVar4 = (byte *)*puVar2, (*pbVar4 & 1) != 0) {
            **(undefined1 **)(pbVar4 + 0x10) = 0;
            pbVar4[8] = 0;
            pbVar4[9] = 0;
            pbVar4[10] = 0;
            pbVar4[0xb] = 0;
            pbVar4[0xc] = 0;
            pbVar4[0xd] = 0;
            pbVar4[0xe] = 0;
            pbVar4[0xf] = 0;
            uVar6 = uVar6 - 1;
            puVar2 = puVar2 + 1;
            if (uVar6 == 0) goto LAB_006643a0;
          }
          pbVar4[0] = 0;
          pbVar4[1] = 0;
          uVar6 = uVar6 - 1;
          puVar2 = puVar2 + 1;
        } while (uVar6 != 0);
LAB_006643a0:
        *(undefined4 *)(lVar5 + 8) = 0;
        return;
      }
    }
    else if (iVar1 == 10) {
      lVar5 = *param_1;
      uVar6 = (ulong)*(uint *)(lVar5 + 8);
      if (0 < (int)*(uint *)(lVar5 + 8)) {
        puVar2 = *(undefined8 **)(lVar5 + 0x10);
        do {
          puVar2 = puVar2 + 1;
          (**(code **)(*(long *)*puVar2 + 0x20))();
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
        *(undefined4 *)(lVar5 + 8) = 0;
      }
    }
  }
  return;
}


// ===== 006643f0  FUN_006643f0 =====

int FUN_006643f0(long param_1,int param_2,int param_3)

{
  ushort uVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = *(ushort *)(param_1 + 10);
  if ((ulong)uVar1 != 0) {
    if ((short)uVar1 < 0) {
      piVar3 = (int *)FUN_0066ba30();
      if (piVar3 == (int *)0x0) {
        return param_3;
      }
    }
    else {
      piVar2 = *(int **)(param_1 + 0x10);
      lVar4 = (ulong)uVar1 * 0x20 + -0x20;
      if (lVar4 != 0) {
        uVar5 = lVar4 >> 5;
        piVar3 = piVar2;
        do {
          uVar6 = uVar5 >> 1;
          piVar2 = piVar3 + uVar6 * 8 + 8;
          uVar5 = uVar5 + ~uVar6;
          if (param_2 <= piVar3[uVar6 * 8]) {
            piVar2 = piVar3;
            uVar5 = uVar6;
          }
          piVar3 = piVar2;
        } while (uVar5 != 0);
      }
      piVar3 = piVar2 + 2;
      if (*piVar2 != param_2) {
        return param_3;
      }
    }
    if ((*(byte *)((long)piVar3 + 10) & 1) == 0) {
      param_3 = *piVar3;
    }
  }
  return param_3;
}


// ===== 0066447c  FUN_0066447c =====

void FUN_0066447c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  undefined4 *puVar1;
  undefined1 auVar2 [16];
  
  auVar2 = FUN_00667c84();
  puVar1 = auVar2._0_8_;
  *(undefined8 *)(puVar1 + 4) = param_5;
  if ((auVar2 & (undefined1  [16])0xff) != (undefined1  [16])0x0) {
    *(undefined1 *)(puVar1 + 2) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = 0;
  }
  *(byte *)((long)puVar1 + 10) = *(byte *)((long)puVar1 + 10) & 0xf0;
  *puVar1 = param_4;
  return;
}


// ===== 006644d0  FUN_006644d0 =====

bool FUN_006644d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined1 auVar1 [16];
  
  auVar1 = FUN_00667c84();
  *param_4 = auVar1._0_8_;
  *(undefined8 *)(auVar1._0_8_ + 0x10) = param_3;
  return (auVar1 & (undefined1  [16])0xff) != (undefined1  [16])0x0;
}


// ===== 00664508  FUN_00664508 =====

void FUN_00664508(long param_1,int param_2,int param_3)

{
  ushort uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  int *piVar5;
  int *piVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 uStack_59;
  undefined1 auStack_58 [48];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar1 = *(ushort *)(param_1 + 10);
  if ((ulong)uVar1 == 0) {
LAB_006645b8:
    FUN_00675e64(auStack_58,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/extension_set.cc"
                 ,0x16f);
                    /* try { // try from 006645d4 to 006645f3 has its CatchHandler @ 00664608 */
    uVar4 = FUN_00675a58(auStack_58,"CHECK failed: extension != nullptr: ");
    uVar4 = FUN_00675a58(uVar4,"Index out-of-bounds (field is empty).");
                    /* try { // try from 006645f4 to 006645fb has its CatchHandler @ 00664604 */
    FUN_00675ac0(&uStack_59,uVar4);
    uVar4 = FUN_00675e7c(auStack_58);
                    /* catch() { ... } // from try @ 006645f4 with catch @ 00664604 */
                    /* catch() { ... } // from try @ 006645d4 with catch @ 00664608 */
    uVar8 = FUN_00675e7c(auStack_58);
    if (*(long *)(lVar2 + 0x28) == local_28) {
                    /* WARNING: Subroutine does not return */
      FUN_00755eac(uVar4);
    }
  }
  else {
    if ((short)uVar1 < 0) {
      plVar3 = (long *)FUN_0066ba30();
      if (plVar3 == (long *)0x0) goto LAB_006645b8;
    }
    else {
      piVar5 = *(int **)(param_1 + 0x10);
      lVar7 = (ulong)uVar1 * 0x20 + -0x20;
      if (lVar7 != 0) {
        uVar8 = lVar7 >> 5;
        piVar6 = piVar5;
        do {
          uVar9 = uVar8 >> 1;
          piVar5 = piVar6 + uVar9 * 8 + 8;
          uVar8 = uVar8 + ~uVar9;
          if (param_2 <= piVar6[uVar9 * 8]) {
            piVar5 = piVar6;
            uVar8 = uVar9;
          }
          piVar6 = piVar5;
        } while (uVar8 != 0);
      }
      if (*piVar5 != param_2) goto LAB_006645b8;
      plVar3 = (long *)(piVar5 + 2);
    }
    uVar8 = (ulong)*(uint *)(*(long *)(*plVar3 + 8) + (long)param_3 * 4);
    if (*(long *)(lVar2 + 0x28) == local_28) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}


// ===== 00664634  FUN_00664634 =====

void FUN_00664634(long *param_1,undefined8 param_2,undefined1 param_3,byte param_4,
                 undefined4 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 *puVar2;
  uint *puVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  auVar7 = FUN_00667c84();
  puVar2 = auVar7._0_8_;
  puVar2[2] = param_6;
  if ((auVar7 & (undefined1  [16])0xff) == (undefined1  [16])0x0) {
    puVar3 = (uint *)*puVar2;
    uVar6 = (ulong)*puVar3;
    if (*puVar3 != puVar3[1]) goto LAB_006646ec;
  }
  else {
    lVar5 = *param_1;
    *(undefined1 *)(puVar2 + 1) = param_3;
    *(undefined1 *)((long)puVar2 + 9) = 1;
    *(byte *)((long)puVar2 + 0xb) = param_4 & 1;
    if (lVar5 == 0) {
      puVar3 = (uint *)FUN_00759c3c(0x10);
      puVar3[0] = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *puVar2 = puVar3;
      uVar6 = (ulong)*puVar3;
      if (*puVar3 != puVar3[1]) goto LAB_006646ec;
    }
    else {
      auVar7 = FUN_00663600(lVar5,0x10,PTR_PTR_007a3158);
      puVar1 = PTR_thunk_FUN_00673a60_007a3160;
      puVar3 = auVar7._0_8_;
      *auVar7._8_8_ = puVar3;
      auVar7._8_8_[1] = puVar1;
      puVar3[0] = 0;
      puVar3[1] = 0;
      *(long *)(puVar3 + 2) = lVar5;
      *puVar2 = puVar3;
      uVar6 = (ulong)*puVar3;
      if (*puVar3 != puVar3[1]) {
LAB_006646ec:
        lVar5 = *(long *)(puVar3 + 2);
        uVar4 = (int)uVar6 + 1;
        goto LAB_006646f4;
      }
    }
  }
  uVar4 = (int)uVar6 + 1;
  FUN_00673968(puVar3,uVar4);
  lVar5 = *(long *)(puVar3 + 2);
LAB_006646f4:
  *(undefined4 *)(lVar5 + uVar6 * 4) = param_5;
  *puVar3 = uVar4;
  return;
}


// ===== 00664734  FUN_00664734 =====

undefined8 FUN_00664734(long param_1,int param_2,undefined8 param_3)

{
  ushort uVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = *(ushort *)(param_1 + 10);
  if ((ulong)uVar1 != 0) {
    if ((short)uVar1 < 0) {
      piVar3 = (int *)FUN_0066ba30();
      if (piVar3 == (int *)0x0) {
        return param_3;
      }
    }
    else {
      piVar2 = *(int **)(param_1 + 0x10);
      lVar4 = (ulong)uVar1 * 0x20 + -0x20;
      if (lVar4 != 0) {
        uVar5 = lVar4 >> 5;
        piVar3 = piVar2;
        do {
          uVar6 = uVar5 >> 1;
          piVar2 = piVar3 + uVar6 * 8 + 8;
          uVar5 = uVar5 + ~uVar6;
          if (param_2 <= piVar3[uVar6 * 8]) {
            piVar2 = piVar3;
            uVar5 = uVar6;
          }
          piVar3 = piVar2;
        } while (uVar5 != 0);
      }
      piVar3 = piVar2 + 2;
      if (*piVar2 != param_2) {
        return param_3;
      }
    }
    if ((*(byte *)((long)piVar3 + 10) & 1) == 0) {
      param_3 = *(undefined8 *)piVar3;
    }
  }
  return param_3;
}


// ===== 006647c0  FUN_006647c0 =====

void FUN_006647c0(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  
  auVar2 = FUN_00667c84();
  puVar1 = auVar2._0_8_;
  puVar1[2] = param_5;
  if ((auVar2 & (undefined1  [16])0xff) != (undefined1  [16])0x0) {
    *(undefined1 *)(puVar1 + 1) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = 0;
  }
  *(byte *)((long)puVar1 + 10) = *(byte *)((long)puVar1 + 10) & 0xf0;
  *puVar1 = param_4;
  return;
}


// ===== 00664814  FUN_00664814 =====

void FUN_00664814(long param_1,int param_2,int param_3)

{
  ushort uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  int *piVar6;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 uStack_59;
  undefined1 auStack_58 [48];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar1 = *(ushort *)(param_1 + 10);
  if ((ulong)uVar1 == 0) {
LAB_006648c4:
    FUN_00675e64(auStack_58,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/extension_set.cc"
                 ,0x170);
                    /* try { // try from 006648e0 to 006648ff has its CatchHandler @ 00664914 */
    uVar5 = FUN_00675a58(auStack_58,"CHECK failed: extension != nullptr: ");
    uVar5 = FUN_00675a58(uVar5,"Index out-of-bounds (field is empty).");
                    /* try { // try from 00664900 to 00664907 has its CatchHandler @ 00664910 */
    FUN_00675ac0(&uStack_59,uVar5);
    uVar5 = FUN_00675e7c(auStack_58);
                    /* catch() { ... } // from try @ 00664900 with catch @ 00664910 */
                    /* catch() { ... } // from try @ 006648e0 with catch @ 00664914 */
    uVar3 = FUN_00675e7c(auStack_58);
    if (*(long *)(lVar2 + 0x28) == local_28) {
                    /* WARNING: Subroutine does not return */
      FUN_00755eac(uVar5);
    }
  }
  else {
    if ((short)uVar1 < 0) {
      plVar4 = (long *)FUN_0066ba30();
      if (plVar4 == (long *)0x0) goto LAB_006648c4;
    }
    else {
      piVar6 = *(int **)(param_1 + 0x10);
      lVar8 = (ulong)uVar1 * 0x20 + -0x20;
      if (lVar8 != 0) {
        uVar9 = lVar8 >> 5;
        piVar7 = piVar6;
        do {
          uVar10 = uVar9 >> 1;
          piVar6 = piVar7 + uVar10 * 8 + 8;
          uVar9 = uVar9 + ~uVar10;
          if (param_2 <= piVar7[uVar10 * 8]) {
            piVar6 = piVar7;
            uVar9 = uVar10;
          }
          piVar7 = piVar6;
        } while (uVar9 != 0);
      }
      if (*piVar6 != param_2) goto LAB_006648c4;
      plVar4 = (long *)(piVar6 + 2);
    }
    uVar3 = *(undefined8 *)(*(long *)(*plVar4 + 8) + (long)param_3 * 8);
    if (*(long *)(lVar2 + 0x28) == local_28) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 00664940  FUN_00664940 =====

void FUN_00664940(long *param_1,undefined8 param_2,undefined1 param_3,byte param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 *puVar2;
  uint *puVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  auVar7 = FUN_00667c84();
  puVar2 = auVar7._0_8_;
  puVar2[2] = param_6;
  if ((auVar7 & (undefined1  [16])0xff) == (undefined1  [16])0x0) {
    puVar3 = (uint *)*puVar2;
    uVar6 = (ulong)*puVar3;
    if (*puVar3 != puVar3[1]) goto LAB_006649f8;
  }
  else {
    lVar5 = *param_1;
    *(undefined1 *)(puVar2 + 1) = param_3;
    *(undefined1 *)((long)puVar2 + 9) = 1;
    *(byte *)((long)puVar2 + 0xb) = param_4 & 1;
    if (lVar5 == 0) {
      puVar3 = (uint *)FUN_00759c3c(0x10);
      puVar3[0] = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *puVar2 = puVar3;
      uVar6 = (ulong)*puVar3;
      if (*puVar3 != puVar3[1]) goto LAB_006649f8;
    }
    else {
      auVar7 = FUN_00663600(lVar5,0x10,PTR_PTR_007a3168);
      puVar1 = PTR_thunk_FUN_006742e4_007a3170;
      puVar3 = auVar7._0_8_;
      *auVar7._8_8_ = puVar3;
      auVar7._8_8_[1] = puVar1;
      puVar3[0] = 0;
      puVar3[1] = 0;
      *(long *)(puVar3 + 2) = lVar5;
      *puVar2 = puVar3;
      uVar6 = (ulong)*puVar3;
      if (*puVar3 != puVar3[1]) {
LAB_006649f8:
        lVar5 = *(long *)(puVar3 + 2);
        uVar4 = (int)uVar6 + 1;
        goto LAB_00664a00;
      }
    }
  }
  uVar4 = (int)uVar6 + 1;
  FUN_006741e8(puVar3,uVar4);
  lVar5 = *(long *)(puVar3 + 2);
LAB_00664a00:
  *(undefined8 *)(lVar5 + uVar6 * 8) = param_5;
  *puVar3 = uVar4;
  return;
}


// ===== 00664a40  FUN_00664a40 =====

int FUN_00664a40(long param_1,int param_2,int param_3)

{
  ushort uVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = *(ushort *)(param_1 + 10);
  if ((ulong)uVar1 != 0) {
    if ((short)uVar1 < 0) {
      piVar3 = (int *)FUN_0066ba30();
      if (piVar3 == (int *)0x0) {
        return param_3;
      }
    }
    else {
      piVar2 = *(int **)(param_1 + 0x10);
      lVar4 = (ulong)uVar1 * 0x20 + -0x20;
      if (lVar4 != 0) {
        uVar5 = lVar4 >> 5;
        piVar3 = piVar2;
        do {
          uVar6 = uVar5 >> 1;
          piVar2 = piVar3 + uVar6 * 8 + 8;
          uVar5 = uVar5 + ~uVar6;
          if (param_2 <= piVar3[uVar6 * 8]) {
            piVar2 = piVar3;
            uVar5 = uVar6;
          }
          piVar3 = piVar2;
        } while (uVar5 != 0);
      }
      piVar3 = piVar2 + 2;
      if (*piVar2 != param_2) {
        return param_3;
      }
    }
    if ((*(byte *)((long)piVar3 + 10) & 1) == 0) {
      param_3 = *piVar3;
    }
  }
  return param_3;
}


// ===== 00664acc  FUN_00664acc =====

void FUN_00664acc(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  undefined4 *puVar1;
  undefined1 auVar2 [16];
  
  auVar2 = FUN_00667c84();
  puVar1 = auVar2._0_8_;
  *(undefined8 *)(puVar1 + 4) = param_5;
  if ((auVar2 & (undefined1  [16])0xff) != (undefined1  [16])0x0) {
    *(undefined1 *)(puVar1 + 2) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = 0;
  }
  *(byte *)((long)puVar1 + 10) = *(byte *)((long)puVar1 + 10) & 0xf0;
  *puVar1 = param_4;
  return;
}


// ===== 00664b20  FUN_00664b20 =====

void FUN_00664b20(long param_1,int param_2,int param_3)

{
  ushort uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  int *piVar5;
  int *piVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 uStack_59;
  undefined1 auStack_58 [48];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar1 = *(ushort *)(param_1 + 10);
  if ((ulong)uVar1 == 0) {
LAB_00664bd0:
    FUN_00675e64(auStack_58,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/extension_set.cc"
                 ,0x171);
                    /* try { // try from 00664bec to 00664c0b has its CatchHandler @ 00664c20 */
    uVar4 = FUN_00675a58(auStack_58,"CHECK failed: extension != nullptr: ");
    uVar4 = FUN_00675a58(uVar4,"Index out-of-bounds (field is empty).");
                    /* try { // try from 00664c0c to 00664c13 has its CatchHandler @ 00664c1c */
    FUN_00675ac0(&uStack_59,uVar4);
    uVar4 = FUN_00675e7c(auStack_58);
                    /* catch() { ... } // from try @ 00664c0c with catch @ 00664c1c */
                    /* catch() { ... } // from try @ 00664bec with catch @ 00664c20 */
    uVar8 = FUN_00675e7c(auStack_58);
    if (*(long *)(lVar2 + 0x28) == local_28) {
                    /* WARNING: Subroutine does not return */
      FUN_00755eac(uVar4);
    }
  }
  else {
    if ((short)uVar1 < 0) {
      plVar3 = (long *)FUN_0066ba30();
      if (plVar3 == (long *)0x0) goto LAB_00664bd0;
    }
    else {
      piVar5 = *(int **)(param_1 + 0x10);
      lVar7 = (ulong)uVar1 * 0x20 + -0x20;
      if (lVar7 != 0) {
        uVar8 = lVar7 >> 5;
        piVar6 = piVar5;
        do {
          uVar9 = uVar8 >> 1;
          piVar5 = piVar6 + uVar9 * 8 + 8;
          uVar8 = uVar8 + ~uVar9;
          if (param_2 <= piVar6[uVar9 * 8]) {
            piVar5 = piVar6;
            uVar8 = uVar9;
          }
          piVar6 = piVar5;
        } while (uVar8 != 0);
      }
      if (*piVar5 != param_2) goto LAB_00664bd0;
      plVar3 = (long *)(piVar5 + 2);
    }
    uVar8 = (ulong)*(uint *)(*(long *)(*plVar3 + 8) + (long)param_3 * 4);
    if (*(long *)(lVar2 + 0x28) == local_28) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}


// ===== 00664c4c  FUN_00664c4c =====

void FUN_00664c4c(long *param_1,undefined8 param_2,undefined1 param_3,byte param_4,
                 undefined4 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 *puVar2;
  uint *puVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  auVar7 = FUN_00667c84();
  puVar2 = auVar7._0_8_;
  puVar2[2] = param_6;
  if ((auVar7 & (undefined1  [16])0xff) == (undefined1  [16])0x0) {
    puVar3 = (uint *)*puVar2;
    uVar6 = (ulong)*puVar3;
    if (*puVar3 != puVar3[1]) goto LAB_00664d04;
  }
  else {
    lVar5 = *param_1;
    *(undefined1 *)(puVar2 + 1) = param_3;
    *(undefined1 *)((long)puVar2 + 9) = 1;
    *(byte *)((long)puVar2 + 0xb) = param_4 & 1;
    if (lVar5 == 0) {
      puVar3 = (uint *)FUN_00759c3c(0x10);
      puVar3[0] = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *puVar2 = puVar3;
      uVar6 = (ulong)*puVar3;
      if (*puVar3 != puVar3[1]) goto LAB_00664d04;
    }
    else {
      auVar7 = FUN_00663600(lVar5,0x10,PTR_PTR_007a3178);
      puVar1 = PTR_thunk_FUN_00673ea0_007a3180;
      puVar3 = auVar7._0_8_;
      *auVar7._8_8_ = puVar3;
      auVar7._8_8_[1] = puVar1;
      puVar3[0] = 0;
      puVar3[1] = 0;
      *(long *)(puVar3 + 2) = lVar5;
      *puVar2 = puVar3;
      uVar6 = (ulong)*puVar3;
      if (*puVar3 != puVar3[1]) {
LAB_00664d04:
        lVar5 = *(long *)(puVar3 + 2);
        uVar4 = (int)uVar6 + 1;
        goto LAB_00664d0c;
      }
    }
  }
  uVar4 = (int)uVar6 + 1;
  FUN_00673da8(puVar3,uVar4);
  lVar5 = *(long *)(puVar3 + 2);
LAB_00664d0c:
  *(undefined4 *)(lVar5 + uVar6 * 4) = param_5;
  *puVar3 = uVar4;
  return;
}


// ===== 00664d4c  FUN_00664d4c =====

undefined8 FUN_00664d4c(long param_1,int param_2,undefined8 param_3)

{
  ushort uVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = *(ushort *)(param_1 + 10);
  if ((ulong)uVar1 != 0) {
    if ((short)uVar1 < 0) {
      piVar3 = (int *)FUN_0066ba30();
      if (piVar3 == (int *)0x0) {
        return param_3;
      }
    }
    else {
      piVar2 = *(int **)(param_1 + 0x10);
      lVar4 = (ulong)uVar1 * 0x20 + -0x20;
      if (lVar4 != 0) {
        uVar5 = lVar4 >> 5;
        piVar3 = piVar2;
        do {
          uVar6 = uVar5 >> 1;
          piVar2 = piVar3 + uVar6 * 8 + 8;
          uVar5 = uVar5 + ~uVar6;
          if (param_2 <= piVar3[uVar6 * 8]) {
            piVar2 = piVar3;
            uVar5 = uVar6;
          }
          piVar3 = piVar2;
        } while (uVar5 != 0);
      }
      piVar3 = piVar2 + 2;
      if (*piVar2 != param_2) {
        return param_3;
      }
    }
    if ((*(byte *)((long)piVar3 + 10) & 1) == 0) {
      param_3 = *(undefined8 *)piVar3;
    }
  }
  return param_3;
}


// ===== 00664dd8  FUN_00664dd8 =====

void FUN_00664dd8(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  
  auVar2 = FUN_00667c84();
  puVar1 = auVar2._0_8_;
  puVar1[2] = param_5;
  if ((auVar2 & (undefined1  [16])0xff) != (undefined1  [16])0x0) {
    *(undefined1 *)(puVar1 + 1) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = 0;
  }
  *(byte *)((long)puVar1 + 10) = *(byte *)((long)puVar1 + 10) & 0xf0;
  *puVar1 = param_4;
  return;
}


// ===== 00664e2c  FUN_00664e2c =====

void FUN_00664e2c(long param_1,int param_2,int param_3)

{
  ushort uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  int *piVar6;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 uStack_59;
  undefined1 auStack_58 [48];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar1 = *(ushort *)(param_1 + 10);
  if ((ulong)uVar1 == 0) {
LAB_00664edc:
    FUN_00675e64(auStack_58,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/extension_set.cc"
                 ,0x172);
                    /* try { // try from 00664ef8 to 00664f17 has its CatchHandler @ 00664f2c */
    uVar5 = FUN_00675a58(auStack_58,"CHECK failed: extension != nullptr: ");
    uVar5 = FUN_00675a58(uVar5,"Index out-of-bounds (field is empty).");
                    /* try { // try from 00664f18 to 00664f1f has its CatchHandler @ 00664f28 */
    FUN_00675ac0(&uStack_59,uVar5);
    uVar5 = FUN_00675e7c(auStack_58);
                    /* catch() { ... } // from try @ 00664f18 with catch @ 00664f28 */
                    /* catch() { ... } // from try @ 00664ef8 with catch @ 00664f2c */
    uVar3 = FUN_00675e7c(auStack_58);
    if (*(long *)(lVar2 + 0x28) == local_28) {
                    /* WARNING: Subroutine does not return */
      FUN_00755eac(uVar5);
    }
  }
  else {
    if ((short)uVar1 < 0) {
      plVar4 = (long *)FUN_0066ba30();
      if (plVar4 == (long *)0x0) goto LAB_00664edc;
    }
    else {
      piVar6 = *(int **)(param_1 + 0x10);
      lVar8 = (ulong)uVar1 * 0x20 + -0x20;
      if (lVar8 != 0) {
        uVar9 = lVar8 >> 5;
        piVar7 = piVar6;
        do {
          uVar10 = uVar9 >> 1;
          piVar6 = piVar7 + uVar10 * 8 + 8;
          uVar9 = uVar9 + ~uVar10;
          if (param_2 <= piVar7[uVar10 * 8]) {
            piVar6 = piVar7;
            uVar9 = uVar10;
          }
          piVar7 = piVar6;
        } while (uVar9 != 0);
      }
      if (*piVar6 != param_2) goto LAB_00664edc;
      plVar4 = (long *)(piVar6 + 2);
    }
    uVar3 = *(undefined8 *)(*(long *)(*plVar4 + 8) + (long)param_3 * 8);
    if (*(long *)(lVar2 + 0x28) == local_28) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 00664f58  FUN_00664f58 =====

void FUN_00664f58(long *param_1,undefined8 param_2,undefined1 param_3,byte param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 *puVar2;
  uint *puVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  auVar7 = FUN_00667c84();
  puVar2 = auVar7._0_8_;
  puVar2[2] = param_6;
  if ((auVar7 & (undefined1  [16])0xff) == (undefined1  [16])0x0) {
    puVar3 = (uint *)*puVar2;
    uVar6 = (ulong)*puVar3;
    if (*puVar3 != puVar3[1]) goto LAB_00665010;
  }
  else {
    lVar5 = *param_1;
    *(undefined1 *)(puVar2 + 1) = param_3;
    *(undefined1 *)((long)puVar2 + 9) = 1;
    *(byte *)((long)puVar2 + 0xb) = param_4 & 1;
    if (lVar5 == 0) {
      puVar3 = (uint *)FUN_00759c3c(0x10);
      puVar3[0] = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *puVar2 = puVar3;
      uVar6 = (ulong)*puVar3;
      if (*puVar3 != puVar3[1]) goto LAB_00665010;
    }
    else {
      auVar7 = FUN_00663600(lVar5,0x10,PTR_PTR_007a3188);
      puVar1 = PTR_thunk_FUN_00674728_007a3190;
      puVar3 = auVar7._0_8_;
      *auVar7._8_8_ = puVar3;
      auVar7._8_8_[1] = puVar1;
      puVar3[0] = 0;
      puVar3[1] = 0;
      *(long *)(puVar3 + 2) = lVar5;
      *puVar2 = puVar3;
      uVar6 = (ulong)*puVar3;
      if (*puVar3 != puVar3[1]) {
LAB_00665010:
        lVar5 = *(long *)(puVar3 + 2);
        uVar4 = (int)uVar6 + 1;
        goto LAB_00665018;
      }
    }
  }
  uVar4 = (int)uVar6 + 1;
  FUN_0067462c(puVar3,uVar4);
  lVar5 = *(long *)(puVar3 + 2);
LAB_00665018:
  *(undefined8 *)(lVar5 + uVar6 * 8) = param_5;
  *puVar3 = uVar4;
  return;
}


// ===== 00665058  FUN_00665058 =====

int FUN_00665058(int param_1,long param_2,int param_3)

{
  ushort uVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = *(ushort *)(param_2 + 10);
  if ((ulong)uVar1 != 0) {
    if ((short)uVar1 < 0) {
      piVar3 = (int *)FUN_0066ba30();
      if (piVar3 == (int *)0x0) {
        return param_1;
      }
    }
    else {
      piVar2 = *(int **)(param_2 + 0x10);
      lVar4 = (ulong)uVar1 * 0x20 + -0x20;
      if (lVar4 != 0) {
        uVar5 = lVar4 >> 5;
        piVar3 = piVar2;
        do {
          uVar6 = uVar5 >> 1;
          piVar2 = piVar3 + uVar6 * 8 + 8;
          uVar5 = uVar5 + ~uVar6;
          if (param_3 <= piVar3[uVar6 * 8]) {
            piVar2 = piVar3;
            uVar5 = uVar6;
          }
          piVar3 = piVar2;
        } while (uVar5 != 0);
      }
      piVar3 = piVar2 + 2;
      if (*piVar2 != param_3) {
        return param_1;
      }
    }
    if ((*(byte *)((long)piVar3 + 10) & 1) == 0) {
      param_1 = *piVar3;
    }
  }
  return param_1;
}


// ===== 006650e4  FUN_006650e4 =====

void FUN_006650e4(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                 undefined8 param_5)

{
  undefined4 *puVar1;
  undefined1 auVar2 [16];
  
  auVar2 = FUN_00667c84();
  puVar1 = auVar2._0_8_;
  *(undefined8 *)(puVar1 + 4) = param_5;
  if ((auVar2 & (undefined1  [16])0xff) != (undefined1  [16])0x0) {
    *(undefined1 *)(puVar1 + 2) = param_4;
    *(undefined1 *)((long)puVar1 + 9) = 0;
  }
  *(byte *)((long)puVar1 + 10) = *(byte *)((long)puVar1 + 10) & 0xf0;
  *puVar1 = param_1;
  return;
}


// ===== 00665138  FUN_00665138 =====

void FUN_00665138(long param_1,int param_2,int param_3)

{
  ushort uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  int *piVar5;
  int *piVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 uVar10;
  undefined1 uStack_59;
  undefined1 auStack_58 [48];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar1 = *(ushort *)(param_1 + 10);
  if ((ulong)uVar1 == 0) {
LAB_006651e8:
    FUN_00675e64(auStack_58,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/extension_set.cc"
                 ,0x173);
                    /* try { // try from 00665204 to 00665223 has its CatchHandler @ 00665238 */
    uVar4 = FUN_00675a58(auStack_58,"CHECK failed: extension != nullptr: ");
    uVar4 = FUN_00675a58(uVar4,"Index out-of-bounds (field is empty).");
                    /* try { // try from 00665224 to 0066522b has its CatchHandler @ 00665234 */
    FUN_00675ac0(&uStack_59,uVar4);
    uVar4 = FUN_00675e7c(auStack_58);
                    /* catch() { ... } // from try @ 00665224 with catch @ 00665234 */
                    /* catch() { ... } // from try @ 00665204 with catch @ 00665238 */
    uVar10 = FUN_00675e7c(auStack_58);
    if (*(long *)(lVar2 + 0x28) == local_28) {
                    /* WARNING: Subroutine does not return */
      FUN_00755eac(uVar4);
    }
  }
  else {
    if ((short)uVar1 < 0) {
      plVar3 = (long *)FUN_0066ba30();
      if (plVar3 == (long *)0x0) goto LAB_006651e8;
    }
    else {
      piVar5 = *(int **)(param_1 + 0x10);
      lVar7 = (ulong)uVar1 * 0x20 + -0x20;
      if (lVar7 != 0) {
        uVar8 = lVar7 >> 5;
        piVar6 = piVar5;
        do {
          uVar9 = uVar8 >> 1;
          piVar5 = piVar6 + uVar9 * 8 + 8;
          uVar8 = uVar8 + ~uVar9;
          if (param_2 <= piVar6[uVar9 * 8]) {
            piVar5 = piVar6;
            uVar8 = uVar9;
          }
          piVar6 = piVar5;
        } while (uVar8 != 0);
      }
      if (*piVar5 != param_2) goto LAB_006651e8;
      plVar3 = (long *)(piVar5 + 2);
    }
    uVar10 = *(undefined4 *)(*(long *)(*plVar3 + 8) + (long)param_3 * 4);
    if (*(long *)(lVar2 + 0x28) == local_28) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar10);
}


// ===== 00665264  FUN_00665264 =====

void FUN_00665264(undefined4 param_1,long *param_2,undefined8 param_3,undefined1 param_4,
                 byte param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 *puVar2;
  uint *puVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  auVar7 = FUN_00667c84();
  puVar2 = auVar7._0_8_;
  puVar2[2] = param_6;
  if ((auVar7 & (undefined1  [16])0xff) == (undefined1  [16])0x0) {
    puVar3 = (uint *)*puVar2;
    uVar6 = (ulong)*puVar3;
    if (*puVar3 != puVar3[1]) goto LAB_00665320;
  }
  else {
    lVar5 = *param_2;
    *(undefined1 *)(puVar2 + 1) = param_4;
    *(undefined1 *)((long)puVar2 + 9) = 1;
    *(byte *)((long)puVar2 + 0xb) = param_5 & 1;
    if (lVar5 == 0) {
      puVar3 = (uint *)FUN_00759c3c(0x10);
      puVar3[0] = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *puVar2 = puVar3;
      uVar6 = (ulong)*puVar3;
      if (*puVar3 != puVar3[1]) goto LAB_00665320;
    }
    else {
      auVar7 = FUN_00663600(lVar5,0x10,PTR_PTR_007a3198);
      puVar1 = PTR_thunk_FUN_00674b68_007a31a0;
      puVar3 = auVar7._0_8_;
      *auVar7._8_8_ = puVar3;
      auVar7._8_8_[1] = puVar1;
      puVar3[0] = 0;
      puVar3[1] = 0;
      *(long *)(puVar3 + 2) = lVar5;
      *puVar2 = puVar3;
      uVar6 = (ulong)*puVar3;
      if (*puVar3 != puVar3[1]) {
LAB_00665320:
        lVar5 = *(long *)(puVar3 + 2);
        uVar4 = (int)uVar6 + 1;
        goto LAB_00665328;
      }
    }
  }
  uVar4 = (int)uVar6 + 1;
  FUN_00674a70(puVar3,uVar4);
  lVar5 = *(long *)(puVar3 + 2);
LAB_00665328:
  *(undefined4 *)(lVar5 + uVar6 * 4) = param_1;
  *puVar3 = uVar4;
  return;
}


// ===== 0066536c  FUN_0066536c =====

undefined8 FUN_0066536c(undefined8 param_1,long param_2,int param_3)

{
  ushort uVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = *(ushort *)(param_2 + 10);
  if ((ulong)uVar1 != 0) {
    if ((short)uVar1 < 0) {
      piVar3 = (int *)FUN_0066ba30();
      if (piVar3 == (int *)0x0) {
        return param_1;
      }
    }
    else {
      piVar2 = *(int **)(param_2 + 0x10);
      lVar4 = (ulong)uVar1 * 0x20 + -0x20;
      if (lVar4 != 0) {
        uVar5 = lVar4 >> 5;
        piVar3 = piVar2;
        do {
          uVar6 = uVar5 >> 1;
          piVar2 = piVar3 + uVar6 * 8 + 8;
          uVar5 = uVar5 + ~uVar6;
          if (param_3 <= piVar3[uVar6 * 8]) {
            piVar2 = piVar3;
            uVar5 = uVar6;
          }
          piVar3 = piVar2;
        } while (uVar5 != 0);
      }
      piVar3 = piVar2 + 2;
      if (*piVar2 != param_3) {
        return param_1;
      }
    }
    if ((*(byte *)((long)piVar3 + 10) & 1) == 0) {
      param_1 = *(undefined8 *)piVar3;
    }
  }
  return param_1;
}


// ===== 006653f8  FUN_006653f8 =====

void FUN_006653f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                 undefined8 param_5)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  
  auVar2 = FUN_00667c84();
  puVar1 = auVar2._0_8_;
  puVar1[2] = param_5;
  if ((auVar2 & (undefined1  [16])0xff) != (undefined1  [16])0x0) {
    *(undefined1 *)(puVar1 + 1) = param_4;
    *(undefined1 *)((long)puVar1 + 9) = 0;
  }
  *(byte *)((long)puVar1 + 10) = *(byte *)((long)puVar1 + 10) & 0xf0;
  *puVar1 = param_1;
  return;
}


// ===== 0066544c  FUN_0066544c =====

void FUN_0066544c(long param_1,int param_2,int param_3)

{
  ushort uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  int *piVar5;
  int *piVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined1 uStack_59;
  undefined1 auStack_58 [48];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar1 = *(ushort *)(param_1 + 10);
  if ((ulong)uVar1 == 0) {
LAB_006654fc:
    FUN_00675e64(auStack_58,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/extension_set.cc"
                 ,0x174);
                    /* try { // try from 00665518 to 00665537 has its CatchHandler @ 0066554c */
    uVar4 = FUN_00675a58(auStack_58,"CHECK failed: extension != nullptr: ");
    uVar4 = FUN_00675a58(uVar4,"Index out-of-bounds (field is empty).");
                    /* try { // try from 00665538 to 0066553f has its CatchHandler @ 00665548 */
    FUN_00675ac0(&uStack_59,uVar4);
    uVar4 = FUN_00675e7c(auStack_58);
                    /* catch() { ... } // from try @ 00665538 with catch @ 00665548 */
                    /* catch() { ... } // from try @ 00665518 with catch @ 0066554c */
    uVar10 = FUN_00675e7c(auStack_58);
    if (*(long *)(lVar2 + 0x28) == local_28) {
                    /* WARNING: Subroutine does not return */
      FUN_00755eac(uVar4);
    }
  }
  else {
    if ((short)uVar1 < 0) {
      plVar3 = (long *)FUN_0066ba30();
      if (plVar3 == (long *)0x0) goto LAB_006654fc;
    }
    else {
      piVar5 = *(int **)(param_1 + 0x10);
      lVar7 = (ulong)uVar1 * 0x20 + -0x20;
      if (lVar7 != 0) {
        uVar8 = lVar7 >> 5;
        piVar6 = piVar5;
        do {
          uVar9 = uVar8 >> 1;
          piVar5 = piVar6 + uVar9 * 8 + 8;
          uVar8 = uVar8 + ~uVar9;
          if (param_2 <= piVar6[uVar9 * 8]) {
            piVar5 = piVar6;
            uVar8 = uVar9;
          }
          piVar6 = piVar5;
        } while (uVar8 != 0);
      }
      if (*piVar5 != param_2) goto LAB_006654fc;
      plVar3 = (long *)(piVar5 + 2);
    }
    uVar10 = *(undefined8 *)(*(long *)(*plVar3 + 8) + (long)param_3 * 8);
    if (*(long *)(lVar2 + 0x28) == local_28) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar10);
}


// ===== 00665578  FUN_00665578 =====

void FUN_00665578(undefined8 param_1,long *param_2,undefined8 param_3,undefined1 param_4,
                 byte param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 *puVar2;
  uint *puVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  auVar7 = FUN_00667c84();
  puVar2 = auVar7._0_8_;
  puVar2[2] = param_6;
  if ((auVar7 & (undefined1  [16])0xff) == (undefined1  [16])0x0) {
    puVar3 = (uint *)*puVar2;
    uVar6 = (ulong)*puVar3;
    if (*puVar3 != puVar3[1]) goto LAB_00665634;
  }
  else {
    lVar5 = *param_2;
    *(undefined1 *)(puVar2 + 1) = param_4;
    *(undefined1 *)((long)puVar2 + 9) = 1;
    *(byte *)((long)puVar2 + 0xb) = param_5 & 1;
    if (lVar5 == 0) {
      puVar3 = (uint *)FUN_00759c3c(0x10);
      puVar3[0] = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *puVar2 = puVar3;
      uVar6 = (ulong)*puVar3;
      if (*puVar3 != puVar3[1]) goto LAB_00665634;
    }
    else {
      auVar7 = FUN_00663600(lVar5,0x10,PTR_PTR_007a31a8);
      puVar1 = PTR_thunk_FUN_00674fac_007a31b0;
      puVar3 = auVar7._0_8_;
      *auVar7._8_8_ = puVar3;
      auVar7._8_8_[1] = puVar1;
      puVar3[0] = 0;
      puVar3[1] = 0;
      *(long *)(puVar3 + 2) = lVar5;
      *puVar2 = puVar3;
      uVar6 = (ulong)*puVar3;
      if (*puVar3 != puVar3[1]) {
LAB_00665634:
        lVar5 = *(long *)(puVar3 + 2);
        uVar4 = (int)uVar6 + 1;
        goto LAB_0066563c;
      }
    }
  }
  uVar4 = (int)uVar6 + 1;
  FUN_00674eb0(puVar3,uVar4);
  lVar5 = *(long *)(puVar3 + 2);
LAB_0066563c:
  *(undefined8 *)(lVar5 + uVar6 * 8) = param_1;
  *puVar3 = uVar4;
  return;
}


// ===== 00665680  FUN_00665680 =====

byte FUN_00665680(long param_1,int param_2,byte param_3)

{
  ushort uVar1;
  int *piVar2;
  int *piVar3;
  byte *pbVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar1 = *(ushort *)(param_1 + 10);
  if ((ulong)uVar1 != 0) {
    if ((short)uVar1 < 0) {
      pbVar4 = (byte *)FUN_0066ba30();
      if (pbVar4 == (byte *)0x0) goto LAB_006656f4;
    }
    else {
      piVar2 = *(int **)(param_1 + 0x10);
      lVar5 = (ulong)uVar1 * 0x20 + -0x20;
      if (lVar5 != 0) {
        uVar6 = lVar5 >> 5;
        piVar3 = piVar2;
        do {
          uVar7 = uVar6 >> 1;
          piVar2 = piVar3 + uVar7 * 8 + 8;
          uVar6 = uVar6 + ~uVar7;
          if (param_2 <= piVar3[uVar7 * 8]) {
            piVar2 = piVar3;
            uVar6 = uVar7;
          }
          piVar3 = piVar2;
        } while (uVar6 != 0);
      }
      pbVar4 = (byte *)(piVar2 + 2);
      if (*piVar2 != param_2) goto LAB_006656f4;
    }
    if ((pbVar4[10] & 1) == 0) {
      param_3 = *pbVar4;
    }
  }
LAB_006656f4:
  return param_3 & 1;
}


// ===== 00665710  FUN_00665710 =====

void FUN_00665710(undefined8 param_1,undefined8 param_2,byte param_3,byte param_4,undefined8 param_5
                 )

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  
  auVar2 = FUN_00667c84();
  pbVar1 = auVar2._0_8_;
  *(undefined8 *)(pbVar1 + 0x10) = param_5;
  if ((auVar2 & (undefined1  [16])0xff) != (undefined1  [16])0x0) {
    pbVar1[8] = param_3;
    pbVar1[9] = 0;
  }
  pbVar1[10] = pbVar1[10] & 0xf0;
  *pbVar1 = param_4 & 1;
  return;
}


// ===== 00665768  FUN_00665768 =====

void FUN_00665768(long param_1,int param_2,int param_3)

{
  ushort uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  int *piVar5;
  int *piVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 uStack_59;
  undefined1 auStack_58 [48];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar1 = *(ushort *)(param_1 + 10);
  if ((ulong)uVar1 == 0) {
LAB_00665818:
    FUN_00675e64(auStack_58,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/extension_set.cc"
                 ,0x175);
                    /* try { // try from 00665834 to 00665853 has its CatchHandler @ 00665868 */
    uVar4 = FUN_00675a58(auStack_58,"CHECK failed: extension != nullptr: ");
    uVar4 = FUN_00675a58(uVar4,"Index out-of-bounds (field is empty).");
                    /* try { // try from 00665854 to 0066585b has its CatchHandler @ 00665864 */
    FUN_00675ac0(&uStack_59,uVar4);
    uVar4 = FUN_00675e7c(auStack_58);
                    /* catch() { ... } // from try @ 00665854 with catch @ 00665864 */
                    /* catch() { ... } // from try @ 00665834 with catch @ 00665868 */
    uVar8 = FUN_00675e7c(auStack_58);
    if (*(long *)(lVar2 + 0x28) == local_28) {
                    /* WARNING: Subroutine does not return */
      FUN_00755eac(uVar4);
    }
  }
  else {
    if ((short)uVar1 < 0) {
      plVar3 = (long *)FUN_0066ba30();
      if (plVar3 == (long *)0x0) goto LAB_00665818;
    }
    else {
      piVar5 = *(int **)(param_1 + 0x10);
      lVar7 = (ulong)uVar1 * 0x20 + -0x20;
      if (lVar7 != 0) {
        uVar8 = lVar7 >> 5;
        piVar6 = piVar5;
        do {
          uVar9 = uVar8 >> 1;
          piVar5 = piVar6 + uVar9 * 8 + 8;
          uVar8 = uVar8 + ~uVar9;
          if (param_2 <= piVar6[uVar9 * 8]) {
            piVar5 = piVar6;
            uVar8 = uVar9;
          }
          piVar6 = piVar5;
        } while (uVar8 != 0);
      }
      if (*piVar5 != param_2) goto LAB_00665818;
      plVar3 = (long *)(piVar5 + 2);
    }
    uVar8 = (ulong)*(byte *)(*(long *)(*plVar3 + 8) + (long)param_3);
    if (*(long *)(lVar2 + 0x28) == local_28) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}


// ===== 00665894  FUN_00665894 =====

void FUN_00665894(long *param_1,undefined8 param_2,undefined1 param_3,byte param_4,byte param_5,
                 undefined8 param_6)

{
  undefined *puVar1;
  undefined8 *puVar2;
  uint *puVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  auVar7 = FUN_00667c84();
  puVar2 = auVar7._0_8_;
  puVar2[2] = param_6;
  if ((auVar7 & (undefined1  [16])0xff) == (undefined1  [16])0x0) {
    puVar3 = (uint *)*puVar2;
    uVar6 = (ulong)*puVar3;
    if (*puVar3 != puVar3[1]) goto LAB_0066594c;
  }
  else {
    lVar5 = *param_1;
    *(undefined1 *)(puVar2 + 1) = param_3;
    *(undefined1 *)((long)puVar2 + 9) = 1;
    *(byte *)((long)puVar2 + 0xb) = param_4 & 1;
    if (lVar5 == 0) {
      puVar3 = (uint *)FUN_00759c3c(0x10);
      puVar3[0] = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *puVar2 = puVar3;
      uVar6 = (ulong)*puVar3;
      if (*puVar3 != puVar3[1]) goto LAB_0066594c;
    }
    else {
      auVar7 = FUN_00663600(lVar5,0x10,PTR_PTR_007a31b8);
      puVar1 = PTR_thunk_FUN_00673630_007a31c0;
      puVar3 = auVar7._0_8_;
      *auVar7._8_8_ = puVar3;
      auVar7._8_8_[1] = puVar1;
      puVar3[0] = 0;
      puVar3[1] = 0;
      *(long *)(puVar3 + 2) = lVar5;
      *puVar2 = puVar3;
      uVar6 = (ulong)*puVar3;
      if (*puVar3 != puVar3[1]) {
LAB_0066594c:
        lVar5 = *(long *)(puVar3 + 2);
        uVar4 = (int)uVar6 + 1;
        goto LAB_00665954;
      }
    }
  }
  uVar4 = (int)uVar6 + 1;
  FUN_0067353c(puVar3,uVar4);
  lVar5 = *(long *)(puVar3 + 2);
LAB_00665954:
  *(byte *)(lVar5 + uVar6) = param_5 & 1;
  *puVar3 = uVar4;
  return;
}


// ===== 00665994  FUN_00665994 =====

undefined8
FUN_00665994(long *param_1,undefined8 param_2,byte param_3,byte param_4,undefined8 param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  auVar7 = FUN_00667c84();
  puVar3 = auVar7._0_8_;
  puVar3[2] = param_5;
  puVar2 = PTR_DAT_007a3220;
  if ((auVar7 & (undefined1  [16])0xff) == (undefined1  [16])0x0) goto LAB_00665bf8;
  *(undefined1 *)((long)puVar3 + 9) = 1;
  *(byte *)(puVar3 + 1) = param_3;
  iVar1 = *(int *)(puVar2 + (ulong)param_3 * 4);
  *(byte *)((long)puVar3 + 0xb) = param_4 & 1;
  if (iVar1 < 6) {
    if (iVar1 < 3) {
      if (iVar1 == 1) {
LAB_00665af8:
        lVar6 = *param_1;
        if (lVar6 == 0) goto LAB_00665ba0;
        auVar7 = FUN_00663600(lVar6,0x10,PTR_PTR_007a3158);
        pcVar5 = thunk_FUN_00673a60;
      }
      else {
        if (iVar1 != 2) goto LAB_00665bf8;
        lVar6 = *param_1;
        if (lVar6 == 0) goto LAB_00665ba0;
        auVar7 = FUN_00663600(lVar6,0x10,PTR_PTR_007a3168);
        pcVar5 = thunk_FUN_006742e4;
      }
    }
    else if (iVar1 == 3) {
      lVar6 = *param_1;
      if (lVar6 == 0) {
LAB_00665ba0:
        plVar4 = (long *)FUN_00759c3c(0x10);
        *plVar4 = 0;
        plVar4[1] = 0;
        goto LAB_00665bf4;
      }
      auVar7 = FUN_00663600(lVar6,0x10,PTR_PTR_007a3178);
      pcVar5 = thunk_FUN_00673ea0;
    }
    else if (iVar1 == 4) {
      lVar6 = *param_1;
      if (lVar6 == 0) goto LAB_00665ba0;
      auVar7 = FUN_00663600(lVar6,0x10,PTR_PTR_007a3188);
      pcVar5 = thunk_FUN_00674728;
    }
    else {
      if (iVar1 != 5) goto LAB_00665bf8;
      lVar6 = *param_1;
      if (lVar6 == 0) goto LAB_00665ba0;
      auVar7 = FUN_00663600(lVar6,0x10,PTR_PTR_007a31a8);
      pcVar5 = thunk_FUN_00674fac;
    }
LAB_00665b94:
    plVar4 = auVar7._0_8_;
    *auVar7._8_8_ = plVar4;
    auVar7._8_8_[1] = pcVar5;
    *plVar4 = 0;
    plVar4[1] = lVar6;
  }
  else {
    if (iVar1 < 8) {
      if (iVar1 == 6) {
        lVar6 = *param_1;
        if (lVar6 == 0) goto LAB_00665ba0;
        auVar7 = FUN_00663600(lVar6,0x10,PTR_PTR_007a3198);
        pcVar5 = thunk_FUN_00674b68;
      }
      else {
        if (iVar1 != 7) goto LAB_00665bf8;
        lVar6 = *param_1;
        if (lVar6 == 0) goto LAB_00665ba0;
        auVar7 = FUN_00663600(lVar6,0x10,PTR_PTR_007a31b8);
        pcVar5 = thunk_FUN_00673630;
      }
      goto LAB_00665b94;
    }
    if (iVar1 == 8) goto LAB_00665af8;
    if (iVar1 == 9) {
      lVar6 = *param_1;
      if (lVar6 == 0) {
LAB_00665be4:
        plVar4 = (long *)FUN_00759c3c(0x18);
        plVar4[1] = 0;
        plVar4[2] = 0;
        *plVar4 = 0;
        goto LAB_00665bf4;
      }
      auVar7 = FUN_00663600(lVar6,0x18,PTR_PTR_007a31d8);
      pcVar5 = thunk_FUN_00675290;
    }
    else {
      if (iVar1 != 10) goto LAB_00665bf8;
      lVar6 = *param_1;
      if (lVar6 == 0) goto LAB_00665be4;
      auVar7 = FUN_00663600(lVar6,0x18,PTR_PTR_007a31c8);
      pcVar5 = FUN_0066bd68;
    }
    plVar4 = auVar7._0_8_;
    *auVar7._8_8_ = plVar4;
    auVar7._8_8_[1] = pcVar5;
    *plVar4 = lVar6;
    plVar4[1] = 0;
    plVar4[2] = 0;
  }
LAB_00665bf4:
  *puVar3 = plVar4;
LAB_00665bf8:
  return *puVar3;
}


// ===== 00665c10  FUN_00665c10 =====

int FUN_00665c10(long param_1,int param_2,int param_3)

{
  ushort uVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = *(ushort *)(param_1 + 10);
  if ((ulong)uVar1 != 0) {
    if ((short)uVar1 < 0) {
      piVar3 = (int *)FUN_0066ba30();
      if (piVar3 == (int *)0x0) {
        return param_3;
      }
    }
    else {
      piVar2 = *(int **)(param_1 + 0x10);
      lVar4 = (ulong)uVar1 * 0x20 + -0x20;
      if (lVar4 != 0) {
        uVar5 = lVar4 >> 5;
        piVar3 = piVar2;
        do {
          uVar6 = uVar5 >> 1;
          piVar2 = piVar3 + uVar6 * 8 + 8;
          uVar5 = uVar5 + ~uVar6;
          if (param_2 <= piVar3[uVar6 * 8]) {
            piVar2 = piVar3;
            uVar5 = uVar6;
          }
          piVar3 = piVar2;
        } while (uVar5 != 0);
      }
      piVar3 = piVar2 + 2;
      if (*piVar2 != param_2) {
        return param_3;
      }
    }
    if ((*(byte *)((long)piVar3 + 10) & 1) == 0) {
      param_3 = *piVar3;
    }
  }
  return param_3;
}


// ===== 00665c9c  FUN_00665c9c =====

void FUN_00665c9c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  undefined4 *puVar1;
  undefined1 auVar2 [16];
  
  auVar2 = FUN_00667c84();
  puVar1 = auVar2._0_8_;
  *(undefined8 *)(puVar1 + 4) = param_5;
  if ((auVar2 & (undefined1  [16])0xff) != (undefined1  [16])0x0) {
    *(undefined1 *)(puVar1 + 2) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = 0;
  }
  *(byte *)((long)puVar1 + 10) = *(byte *)((long)puVar1 + 10) & 0xf0;
  *puVar1 = param_4;
  return;
}


// ===== 00665cf0  FUN_00665cf0 =====

void FUN_00665cf0(long param_1,int param_2,int param_3)

{
  ushort uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  int *piVar5;
  int *piVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 uStack_59;
  undefined1 auStack_58 [48];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar1 = *(ushort *)(param_1 + 10);
  if ((ulong)uVar1 == 0) {
LAB_00665da0:
    FUN_00675e64(auStack_58,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/extension_set.cc"
                 ,0x1f6);
                    /* try { // try from 00665dbc to 00665ddb has its CatchHandler @ 00665df0 */
    uVar4 = FUN_00675a58(auStack_58,"CHECK failed: extension != nullptr: ");
    uVar4 = FUN_00675a58(uVar4,"Index out-of-bounds (field is empty).");
                    /* try { // try from 00665ddc to 00665de3 has its CatchHandler @ 00665dec */
    FUN_00675ac0(&uStack_59,uVar4);
    uVar4 = FUN_00675e7c(auStack_58);
                    /* catch() { ... } // from try @ 00665ddc with catch @ 00665dec */
                    /* catch() { ... } // from try @ 00665dbc with catch @ 00665df0 */
    uVar8 = FUN_00675e7c(auStack_58);
    if (*(long *)(lVar2 + 0x28) == local_28) {
                    /* WARNING: Subroutine does not return */
      FUN_00755eac(uVar4);
    }
  }
  else {
    if ((short)uVar1 < 0) {
      plVar3 = (long *)FUN_0066ba30();
      if (plVar3 == (long *)0x0) goto LAB_00665da0;
    }
    else {
      piVar5 = *(int **)(param_1 + 0x10);
      lVar7 = (ulong)uVar1 * 0x20 + -0x20;
      if (lVar7 != 0) {
        uVar8 = lVar7 >> 5;
        piVar6 = piVar5;
        do {
          uVar9 = uVar8 >> 1;
          piVar5 = piVar6 + uVar9 * 8 + 8;
          uVar8 = uVar8 + ~uVar9;
          if (param_2 <= piVar6[uVar9 * 8]) {
            piVar5 = piVar6;
            uVar8 = uVar9;
          }
          piVar6 = piVar5;
        } while (uVar8 != 0);
      }
      if (*piVar5 != param_2) goto LAB_00665da0;
      plVar3 = (long *)(piVar5 + 2);
    }
    uVar8 = (ulong)*(uint *)(*(long *)(*plVar3 + 8) + (long)param_3 * 4);
    if (*(long *)(lVar2 + 0x28) == local_28) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}


// ===== 00665e1c  FUN_00665e1c =====

void FUN_00665e1c(long *param_1,undefined8 param_2,undefined1 param_3,byte param_4,
                 undefined4 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 *puVar2;
  uint *puVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  auVar7 = FUN_00667c84();
  puVar2 = auVar7._0_8_;
  puVar2[2] = param_6;
  if ((auVar7 & (undefined1  [16])0xff) == (undefined1  [16])0x0) {
    puVar3 = (uint *)*puVar2;
    uVar6 = (ulong)*puVar3;
    if (*puVar3 != puVar3[1]) goto LAB_00665ed4;
  }
  else {
    lVar5 = *param_1;
    *(undefined1 *)(puVar2 + 1) = param_3;
    *(undefined1 *)((long)puVar2 + 9) = 1;
    *(byte *)((long)puVar2 + 0xb) = param_4 & 1;
    if (lVar5 == 0) {
      puVar3 = (uint *)FUN_00759c3c(0x10);
      puVar3[0] = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *puVar2 = puVar3;
      uVar6 = (ulong)*puVar3;
      if (*puVar3 != puVar3[1]) goto LAB_00665ed4;
    }
    else {
      auVar7 = FUN_00663600(lVar5,0x10,PTR_PTR_007a3158);
      puVar1 = PTR_thunk_FUN_00673a60_007a3160;
      puVar3 = auVar7._0_8_;
      *auVar7._8_8_ = puVar3;
      auVar7._8_8_[1] = puVar1;
      puVar3[0] = 0;
      puVar3[1] = 0;
      *(long *)(puVar3 + 2) = lVar5;
      *puVar2 = puVar3;
      uVar6 = (ulong)*puVar3;
      if (*puVar3 != puVar3[1]) {
LAB_00665ed4:
        lVar5 = *(long *)(puVar3 + 2);
        uVar4 = (int)uVar6 + 1;
        goto LAB_00665edc;
      }
    }
  }
  uVar4 = (int)uVar6 + 1;
  FUN_00673968(puVar3,uVar4);
  lVar5 = *(long *)(puVar3 + 2);
LAB_00665edc:
  *(undefined4 *)(lVar5 + uVar6 * 4) = param_5;
  *puVar3 = uVar4;
  return;
}


// ===== 00665f1c  FUN_00665f1c =====

undefined8 FUN_00665f1c(long param_1,int param_2,undefined8 param_3)

{
  ushort uVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = *(ushort *)(param_1 + 10);
  if ((ulong)uVar1 != 0) {
    if ((short)uVar1 < 0) {
      piVar3 = (int *)FUN_0066ba30();
      if (piVar3 == (int *)0x0) {
        return param_3;
      }
    }
    else {
      piVar2 = *(int **)(param_1 + 0x10);
      lVar4 = (ulong)uVar1 * 0x20 + -0x20;
      if (lVar4 != 0) {
        uVar5 = lVar4 >> 5;
        piVar3 = piVar2;
        do {
          uVar6 = uVar5 >> 1;
          piVar2 = piVar3 + uVar6 * 8 + 8;
          uVar5 = uVar5 + ~uVar6;
          if (param_2 <= piVar3[uVar6 * 8]) {
            piVar2 = piVar3;
            uVar5 = uVar6;
          }
          piVar3 = piVar2;
        } while (uVar5 != 0);
      }
      piVar3 = piVar2 + 2;
      if (*piVar2 != param_2) {
        return param_3;
      }
    }
    if ((*(byte *)((long)piVar3 + 10) & 1) == 0) {
      param_3 = *(undefined8 *)piVar3;
    }
  }
  return param_3;
}


// ===== 00665fa8  FUN_00665fa8 =====

undefined8 * FUN_00665fa8(long *param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  
  auVar4 = FUN_00667c84();
  puVar1 = auVar4._0_8_;
  puVar1[2] = param_4;
  if ((auVar4 & (undefined1  [16])0xff) == (undefined1  [16])0x0) {
    puVar3 = (undefined8 *)*puVar1;
  }
  else {
    lVar2 = *param_1;
    *(undefined1 *)(puVar1 + 1) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = 0;
    if (lVar2 == 0) {
      puVar3 = (undefined8 *)FUN_00759c3c(0x18);
    }
    else {
      auVar4 = FUN_00663600(lVar2,0x18,PTR_PTR_007a2ea8);
      puVar3 = auVar4._0_8_;
      *auVar4._8_8_ = puVar3;
      auVar4._8_8_[1] = FUN_005d5b40;
    }
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar1 = puVar3;
  }
  *(byte *)((long)puVar1 + 10) = *(byte *)((long)puVar1 + 10) & 0xf0;
  return puVar3;
}


// ===== 00666040  FUN_00666040 =====

void FUN_00666040(long param_1,int param_2,int param_3)

{
  ushort uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  int *piVar6;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 uStack_59;
  undefined1 auStack_58 [48];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar1 = *(ushort *)(param_1 + 10);
  if ((ulong)uVar1 == 0) {
LAB_006660f4:
    FUN_00675e64(auStack_58,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/extension_set.cc"
                 ,0x23b);
                    /* try { // try from 00666110 to 0066612f has its CatchHandler @ 00666144 */
    uVar5 = FUN_00675a58(auStack_58,"CHECK failed: extension != nullptr: ");
    uVar5 = FUN_00675a58(uVar5,"Index out-of-bounds (field is empty).");
                    /* try { // try from 00666130 to 00666137 has its CatchHandler @ 00666140 */
    FUN_00675ac0(&uStack_59,uVar5);
    uVar5 = FUN_00675e7c(auStack_58);
                    /* catch() { ... } // from try @ 00666130 with catch @ 00666140 */
                    /* catch() { ... } // from try @ 00666110 with catch @ 00666144 */
    uVar3 = FUN_00675e7c(auStack_58);
    if (*(long *)(lVar2 + 0x28) == local_28) {
                    /* WARNING: Subroutine does not return */
      FUN_00755eac(uVar5);
    }
  }
  else {
    if ((short)uVar1 < 0) {
      plVar4 = (long *)FUN_0066ba30();
      if (plVar4 == (long *)0x0) goto LAB_006660f4;
    }
    else {
      piVar6 = *(int **)(param_1 + 0x10);
      lVar8 = (ulong)uVar1 * 0x20 + -0x20;
      if (lVar8 != 0) {
        uVar9 = lVar8 >> 5;
        piVar7 = piVar6;
        do {
          uVar10 = uVar9 >> 1;
          piVar6 = piVar7 + uVar10 * 8 + 8;
          uVar9 = uVar9 + ~uVar10;
          if (param_2 <= piVar7[uVar10 * 8]) {
            piVar6 = piVar7;
            uVar9 = uVar10;
          }
          piVar7 = piVar6;
        } while (uVar9 != 0);
      }
      if (*piVar6 != param_2) goto LAB_006660f4;
      plVar4 = (long *)(piVar6 + 2);
    }
    uVar3 = *(undefined8 *)(*(long *)(*plVar4 + 0x10) + (long)param_3 * 8 + 8);
    if (*(long *)(lVar2 + 0x28) == local_28) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 00666170  FUN_00666170 =====

undefined8 FUN_00666170(long *param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int *piVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  auVar8 = FUN_00667c84();
  puVar5 = auVar8._0_8_;
  puVar5[2] = param_4;
  if ((auVar8 & (undefined1  [16])0xff) == (undefined1  [16])0x0) {
    plVar3 = (long *)*puVar5;
    piVar6 = (int *)plVar3[2];
  }
  else {
    *(undefined1 *)(puVar5 + 1) = param_3;
    lVar7 = *param_1;
    *(undefined1 *)((long)puVar5 + 9) = 1;
    *(undefined1 *)((long)puVar5 + 0xb) = 0;
    if (lVar7 == 0) {
      plVar3 = (long *)FUN_00759c3c(0x18);
      plVar3[1] = 0;
      plVar3[2] = 0;
      *plVar3 = 0;
    }
    else {
      auVar8 = FUN_00663600(lVar7,0x18,PTR_PTR_007a31d8);
      puVar2 = PTR_thunk_FUN_00675290_007a31e0;
      plVar3 = auVar8._0_8_;
      *auVar8._8_8_ = plVar3;
      auVar8._8_8_[1] = puVar2;
      *plVar3 = lVar7;
      plVar3[1] = 0;
      plVar3[2] = 0;
    }
    *puVar5 = plVar3;
    piVar6 = (int *)plVar3[2];
  }
  if (piVar6 != (int *)0x0) {
    iVar1 = (int)plVar3[1];
    if (iVar1 < *piVar6) {
      uVar4 = *(undefined8 *)(piVar6 + (long)iVar1 * 2 + 2);
      *(int *)(plVar3 + 1) = iVar1 + 1;
      return uVar4;
    }
  }
  if (*plVar3 == 0) {
    puVar5 = (undefined8 *)FUN_00759c3c(0x18);
  }
  else {
    auVar8 = FUN_00663600(*plVar3,0x18,PTR_PTR_007a2ea8);
    puVar2 = PTR_FUN_007a2ca8;
    puVar5 = auVar8._0_8_;
    *auVar8._8_8_ = puVar5;
    auVar8._8_8_[1] = puVar2;
  }
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  uVar4 = FUN_00675990(plVar3,puVar5);
  return uVar4;
}


// ===== 006662a0  FUN_006662a0 =====

long * FUN_006662a0(undefined8 *param_1,undefined8 param_2,undefined1 param_3,long *param_4,
                   undefined8 param_5)

{
  byte bVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  
  auVar4 = FUN_00667c84();
  puVar2 = auVar4._0_8_;
  puVar2[2] = param_5;
  if ((auVar4 & (undefined1  [16])0xff) != (undefined1  [16])0x0) {
    *(undefined1 *)(puVar2 + 1) = param_3;
    *(undefined1 *)((long)puVar2 + 9) = 0;
    *(byte *)((long)puVar2 + 10) = *(byte *)((long)puVar2 + 10) & 0xf;
    plVar3 = (long *)(**(code **)(*param_4 + 0x18))(param_4,*param_1);
    *puVar2 = plVar3;
    *(byte *)((long)puVar2 + 10) = *(byte *)((long)puVar2 + 10) & 0xf0;
    return plVar3;
  }
  bVar1 = *(byte *)((long)puVar2 + 10);
  plVar3 = (long *)*puVar2;
  *(byte *)((long)puVar2 + 10) = bVar1 & 0xf0;
  if ((bVar1 >> 4 & 1) == 0) {
    return plVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00666364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar3 = (long *)(**(code **)(*plVar3 + 0x20))(plVar3,param_4,*param_1);
  return plVar3;
}


// ===== 00666368  FUN_00666368 =====

void FUN_00666368(long *param_1,int param_2,undefined1 param_3,long param_4,long param_5)

{
  ushort uVar1;
  long *plVar2;
  int *piVar3;
  int *piVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  
  if (param_5 == 0) {
    uVar1 = *(ushort *)((long)param_1 + 10);
    if ((ulong)uVar1 == 0) {
      return;
    }
    if ((short)uVar1 < 0) {
      piVar4 = (int *)FUN_0066ba30(param_1);
      if (piVar4 == (int *)0x0) {
        return;
      }
    }
    else {
      piVar3 = (int *)param_1[2];
      lVar5 = (ulong)uVar1 * 0x20 + -0x20;
      if (lVar5 != 0) {
        uVar6 = lVar5 >> 5;
        piVar4 = piVar3;
        do {
          uVar8 = uVar6 >> 1;
          piVar3 = piVar4 + uVar8 * 8 + 8;
          uVar6 = uVar6 + ~uVar8;
          if (param_2 <= piVar4[uVar8 * 8]) {
            piVar3 = piVar4;
            uVar6 = uVar8;
          }
          piVar4 = piVar3;
        } while (uVar6 != 0);
      }
      piVar4 = piVar3 + 2;
      if (*piVar3 != param_2) {
        return;
      }
    }
    FUN_00664208(piVar4);
    return;
  }
  auVar9 = FUN_00667c84(param_1);
  plVar2 = auVar9._0_8_;
  plVar2[2] = param_4;
  if ((auVar9 & (undefined1  [16])0xff) == (undefined1  [16])0x0) {
    if ((*(byte *)((long)plVar2 + 10) >> 4 & 1) != 0) {
      (**(code **)(*(long *)*plVar2 + 0x30))((long *)*plVar2,param_5,*param_1);
      goto LAB_006663b8;
    }
    if ((*param_1 == 0) && (plVar7 = (long *)*plVar2, plVar7 != (long *)0x0)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
  }
  else {
    *(undefined1 *)(plVar2 + 1) = param_3;
    *(undefined1 *)((long)plVar2 + 9) = 0;
    *(byte *)((long)plVar2 + 10) = *(byte *)((long)plVar2 + 10) & 0xf;
  }
  *plVar2 = param_5;
LAB_006663b8:
  *(byte *)((long)plVar2 + 10) = *(byte *)((long)plVar2 + 10) & 0xf0;
  return;
}


// ===== 006664a4  FUN_006664a4 =====

void FUN_006664a4(long param_1,int param_2)

{
  int *__dest;
  size_t __n;
  long lVar1;
  long lVar2;
  int *piVar3;
  int *piVar4;
  short sVar5;
  ulong uVar6;
  ulong uVar7;
  int local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  sVar5 = *(short *)(param_1 + 10);
  uVar6 = (ulong)sVar5;
  piVar3 = *(int **)(param_1 + 0x10);
  local_2c = param_2;
  if ((long)uVar6 < 0) {
    FUN_0066bb74(piVar3,&local_2c);
    if (*(long *)(lVar1 + 0x28) != local_28) goto LAB_00666578;
  }
  else {
    if (sVar5 != 0) {
      lVar2 = uVar6 * 8;
      piVar4 = piVar3;
      do {
        uVar7 = uVar6 >> 1;
        __dest = piVar4 + uVar7 * 8 + 8;
        uVar6 = uVar6 + ~uVar7;
        if (param_2 <= piVar4[uVar7 * 8]) {
          __dest = piVar4;
          uVar6 = uVar7;
        }
        piVar4 = __dest;
      } while (uVar6 != 0);
      if ((__dest != piVar3 + lVar2) && (*__dest == param_2)) {
        __n = (long)(piVar3 + lVar2) - (long)(__dest + 8);
        if (__n != 0) {
          memmove(__dest,__dest + 8,__n);
          sVar5 = *(short *)(param_1 + 10);
        }
        *(short *)(param_1 + 10) = sVar5 + -1;
      }
    }
    if (*(long *)(lVar1 + 0x28) != local_28) {
LAB_00666578:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  return;
}


// ===== 0066657c  FUN_0066657c =====

void FUN_0066657c(long param_1,int param_2,int param_3)

{
  ushort uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  int *piVar6;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 uStack_59;
  undefined1 auStack_58 [48];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar1 = *(ushort *)(param_1 + 10);
  if ((ulong)uVar1 == 0) {
LAB_00666630:
    FUN_00675e64(auStack_58,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/extension_set.cc"
                 ,0x312);
                    /* try { // try from 0066664c to 0066666b has its CatchHandler @ 00666680 */
    uVar5 = FUN_00675a58(auStack_58,"CHECK failed: extension != nullptr: ");
    uVar5 = FUN_00675a58(uVar5,"Index out-of-bounds (field is empty).");
                    /* try { // try from 0066666c to 00666673 has its CatchHandler @ 0066667c */
    FUN_00675ac0(&uStack_59,uVar5);
    uVar5 = FUN_00675e7c(auStack_58);
                    /* catch() { ... } // from try @ 0066666c with catch @ 0066667c */
                    /* catch() { ... } // from try @ 0066664c with catch @ 00666680 */
    uVar3 = FUN_00675e7c(auStack_58);
    if (*(long *)(lVar2 + 0x28) == local_28) {
                    /* WARNING: Subroutine does not return */
      FUN_00755eac(uVar5);
    }
  }
  else {
    if ((short)uVar1 < 0) {
      plVar4 = (long *)FUN_0066ba30();
      if (plVar4 == (long *)0x0) goto LAB_00666630;
    }
    else {
      piVar6 = *(int **)(param_1 + 0x10);
      lVar8 = (ulong)uVar1 * 0x20 + -0x20;
      if (lVar8 != 0) {
        uVar9 = lVar8 >> 5;
        piVar7 = piVar6;
        do {
          uVar10 = uVar9 >> 1;
          piVar6 = piVar7 + uVar10 * 8 + 8;
          uVar9 = uVar9 + ~uVar10;
          if (param_2 <= piVar7[uVar10 * 8]) {
            piVar6 = piVar7;
            uVar9 = uVar10;
          }
          piVar7 = piVar6;
        } while (uVar9 != 0);
      }
      if (*piVar6 != param_2) goto LAB_00666630;
      plVar4 = (long *)(piVar6 + 2);
    }
    uVar3 = *(undefined8 *)(*(long *)(*plVar4 + 0x10) + (long)param_3 * 8 + 8);
    if (*(long *)(lVar2 + 0x28) == local_28) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 006666ac  FUN_006666ac =====

long FUN_006666ac(long *param_1,undefined8 param_2,undefined1 param_3,long *param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  int *piVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  auVar6 = FUN_00667c84();
  puVar2 = auVar6._0_8_;
  puVar2[2] = param_5;
  if ((auVar6 & (undefined1  [16])0xff) == (undefined1  [16])0x0) {
    plVar3 = (long *)*puVar2;
    piVar4 = (int *)plVar3[2];
  }
  else {
    lVar5 = *param_1;
    *(undefined1 *)(puVar2 + 1) = param_3;
    *(undefined1 *)((long)puVar2 + 9) = 1;
    if (lVar5 == 0) {
      plVar3 = (long *)FUN_00759c3c(0x18);
      plVar3[1] = 0;
      plVar3[2] = 0;
      *plVar3 = 0;
    }
    else {
      auVar6 = FUN_00663600(lVar5,0x18,PTR_PTR_007a31c8);
      plVar3 = auVar6._0_8_;
      *auVar6._8_8_ = plVar3;
      auVar6._8_8_[1] = FUN_0066bd68;
      *plVar3 = lVar5;
      plVar3[1] = 0;
      plVar3[2] = 0;
    }
    *puVar2 = plVar3;
    piVar4 = (int *)plVar3[2];
  }
  if (piVar4 != (int *)0x0) {
    iVar1 = (int)plVar3[1];
    if (iVar1 < *piVar4) {
      lVar5 = *(long *)(piVar4 + (long)iVar1 * 2 + 2);
      *(int *)(plVar3 + 1) = iVar1 + 1;
      if (lVar5 != 0) {
        return lVar5;
      }
    }
  }
  lVar5 = (**(code **)(*param_4 + 0x18))(param_4,*param_1);
  FUN_0066bd90(*puVar2,lVar5);
  return lVar5;
}


// ===== 006667cc  FUN_006667cc =====

void FUN_006667cc(long param_1)

{
  short sVar1;
  undefined8 *puVar2;
  long lVar3;
  
  sVar1 = *(short *)(param_1 + 10);
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  if ((long)sVar1 < 0) {
    FUN_0066be9c(*puVar2,puVar2 + 1);
    return;
  }
  if (sVar1 != 0) {
    lVar3 = (long)sVar1 << 5;
    puVar2 = puVar2 + 1;
    do {
      FUN_00664208(puVar2);
      lVar3 = lVar3 + -0x20;
      puVar2 = puVar2 + 4;
    } while (lVar3 != 0);
  }
  return;
}


// ===== 00666818  FUN_00666818 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00666818(long param_1,undefined8 param_2,undefined8 *param_3)

{
  byte *pbVar1;
  ulong uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  int *piVar7;
  int *piVar8;
  short sVar9;
  short sVar10;
  long lVar11;
  int *piVar12;
  undefined8 *puVar13;
  int *piVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  byte *pbVar18;
  ulong uVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte *pbVar24;
  byte *pbVar25;
  byte *pbVar26;
  byte *pbVar27;
  byte *pbVar28;
  byte *pbVar29;
  undefined8 *puVar30;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  byte bVar44;
  undefined1 auVar43 [16];
  long lVar45;
  long lVar46;
  undefined1 auVar47 [16];
  long lVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auStack_78 [24];
  undefined8 local_60;
  long lStack_58;
  undefined8 *local_50;
  long local_48;
  undefined8 *puVar31;
  
  lVar11 = tpidr_el0;
  local_48 = *(long *)(lVar11 + 0x28);
  sVar9 = *(short *)(param_1 + 10);
  if (-1 < (long)sVar9) {
    piVar12 = *(int **)(param_1 + 0x10);
    sVar10 = *(short *)((long)param_3 + 10);
    piVar14 = (int *)param_3[2];
    piVar7 = piVar12 + (long)sVar9 * 8;
    if ((long)sVar10 < 0) {
      lVar15 = FUN_00666df0(piVar12,piVar7,*(undefined8 *)piVar14,piVar14 + 2);
    }
    else {
      piVar8 = piVar14 + (long)sVar10 * 8;
      lVar15 = 0;
      if ((sVar9 != 0) && (sVar10 != 0)) {
        lVar15 = 0;
        do {
          if (*piVar12 < *piVar14) {
            lVar15 = lVar15 + 1;
            piVar12 = piVar12 + 8;
          }
          else if (*piVar12 == *piVar14) {
            lVar15 = lVar15 + 1;
            piVar12 = piVar12 + 8;
            piVar14 = piVar14 + 8;
          }
          else {
            pbVar18 = (byte *)((long)piVar14 + 0x12);
            piVar14 = piVar14 + 8;
            lVar15 = lVar15 + ((ulong)~(uint)*pbVar18 & 1);
          }
        } while ((piVar12 != piVar7) && (piVar14 != piVar8));
      }
      lVar15 = lVar15 + ((long)piVar7 - (long)piVar12 >> 5);
      if (piVar14 != piVar8) {
        uVar16 = (long)piVar8 + (-0x20 - (long)piVar14);
        piVar12 = piVar14;
        if (0xdf < uVar16) {
          uVar2 = (uVar16 >> 5) + 1;
          if (uVar16 < 0x1e0) {
            uVar19 = 0;
          }
          else {
            lVar33 = 0;
            lVar17 = 0;
            lVar32 = 0;
            lVar36 = 0;
            lVar37 = 0;
            lVar34 = 0;
            lVar35 = 0;
            lVar40 = 0;
            lVar41 = 0;
            lVar38 = 0;
            lVar39 = 0;
            lVar46 = 0;
            lVar48 = 0;
            uVar19 = uVar2 & 0xffffffffffffff0;
            lVar42 = 0;
            lVar45 = 0;
            pbVar18 = (byte *)((long)piVar14 + 0x112);
            uVar16 = uVar19;
            do {
              pbVar1 = pbVar18 + -0x100;
              pbVar29 = pbVar18 + -0xe0;
              uVar16 = uVar16 - 0x10;
              pbVar23 = pbVar18 + -0xc0;
              pbVar24 = pbVar18 + -0xa0;
              pbVar25 = pbVar18 + -0x80;
              pbVar26 = pbVar18 + -0x60;
              pbVar27 = pbVar18 + -0x40;
              pbVar28 = pbVar18 + -0x20;
              pbVar3 = pbVar18 + 0x20;
              bVar44 = *pbVar18;
              pbVar4 = pbVar18 + 0x40;
              pbVar5 = pbVar18 + 0x60;
              pbVar20 = pbVar18 + 0x80;
              pbVar21 = pbVar18 + 0xa0;
              pbVar22 = pbVar18 + 0xc0;
              pbVar6 = pbVar18 + 0xe0;
              pbVar18 = pbVar18 + 0x200;
              auVar43._0_8_ =
                   CONCAT17(~*pbVar28,
                            CONCAT16(~*pbVar27,
                                     CONCAT15(~*pbVar26,
                                              CONCAT14(~*pbVar25,
                                                       CONCAT13(~*pbVar24,
                                                                CONCAT12(~*pbVar23,
                                                                         CONCAT11(~*pbVar29,~*pbVar1
                                                                                 ))))))) &
                   0x101010101010101;
              auVar43[8] = ~bVar44 & 1;
              auVar43[9] = ~*pbVar3 & 1;
              auVar43[10] = ~*pbVar4 & 1;
              auVar43[0xb] = ~*pbVar5 & 1;
              auVar43[0xc] = ~*pbVar20 & 1;
              auVar43[0xd] = ~*pbVar21 & 1;
              auVar43[0xe] = ~*pbVar22 & 1;
              auVar43[0xf] = ~*pbVar6 & 1;
              auVar49 = a64_TBL(ZEXT816(0),auVar43,_DAT_002000f0);
              auVar47 = a64_TBL(ZEXT816(0),auVar43,_DAT_002007c0);
              auVar50 = a64_TBL(ZEXT816(0),auVar43,_DAT_00200ab0);
              auVar43 = a64_TBL(ZEXT816(0),auVar43,_DAT_00200580);
              lVar42 = lVar42 + (auVar49._8_8_ & 0xffffffff);
              lVar45 = lVar45 + (auVar49._8_8_ >> 0x20);
              lVar38 = lVar38 + (auVar47._8_8_ & 0xffffffff);
              lVar39 = lVar39 + (auVar47._8_8_ >> 0x20);
              lVar34 = lVar34 + (auVar50._8_8_ & 0xffffffff);
              lVar35 = lVar35 + (auVar50._8_8_ >> 0x20);
              lVar17 = lVar17 + (auVar43._8_8_ & 0xffffffff);
              lVar32 = lVar32 + (auVar43._8_8_ >> 0x20);
              lVar46 = lVar46 + (ulong)auVar49._0_4_;
              lVar48 = lVar48 + (ulong)auVar49._4_4_;
              lVar40 = lVar40 + (ulong)auVar47._0_4_;
              lVar41 = lVar41 + (ulong)auVar47._4_4_;
              lVar36 = lVar36 + (ulong)auVar50._0_4_;
              lVar37 = lVar37 + (ulong)auVar50._4_4_;
              lVar15 = lVar15 + (ulong)auVar43._0_4_;
              lVar33 = lVar33 + (ulong)auVar43._4_4_;
            } while (uVar16 != 0);
            lVar15 = lVar15 + lVar40 + lVar36 + lVar46 + lVar17 + lVar38 + lVar34 + lVar42 +
                     lVar33 + lVar41 + lVar37 + lVar48 + lVar32 + lVar39 + lVar35 + lVar45;
            if (uVar2 == uVar19) goto LAB_00666b28;
            if (((uint)uVar2 >> 3 & 1) == 0) {
              piVar12 = piVar14 + uVar19 * 8;
              goto LAB_00666b0c;
            }
          }
          lVar32 = 0;
          lVar33 = 0;
          lVar34 = 0;
          uVar16 = uVar2 & 0xffffffffffffff8;
          lVar35 = 0;
          lVar36 = 0;
          lVar37 = 0;
          lVar38 = 0;
          piVar12 = piVar14 + uVar16 * 8;
          lVar17 = uVar19 - uVar16;
          pbVar18 = (byte *)((long)piVar14 + uVar19 * 0x20 + 0x92);
          do {
            pbVar1 = pbVar18 + -0x80;
            pbVar22 = pbVar18 + -0x60;
            lVar17 = lVar17 + 8;
            pbVar20 = pbVar18 + -0x40;
            pbVar21 = pbVar18 + -0x20;
            pbVar3 = pbVar18 + 0x20;
            bVar44 = *pbVar18;
            pbVar4 = pbVar18 + 0x40;
            pbVar5 = pbVar18 + 0x60;
            pbVar18 = pbVar18 + 0x100;
            auVar49._0_8_ =
                 CONCAT17(~*pbVar5,CONCAT16(~*pbVar4,CONCAT15(~*pbVar3,CONCAT14(~bVar44,CONCAT13(~*
                                                  pbVar21,CONCAT12(~*pbVar20,
                                                                   CONCAT11(~*pbVar22,~*pbVar1))))))
                         ) & 0x101010101010101;
            auVar49._8_8_ = 0;
            auVar47 = a64_TBL(ZEXT816(0),auVar49,_DAT_00200ab0);
            auVar43 = a64_TBL(ZEXT816(0),auVar49,_DAT_00200580);
            lVar37 = lVar37 + (auVar47._8_8_ & 0xffffffff);
            lVar38 = lVar38 + (auVar47._8_8_ >> 0x20);
            lVar33 = lVar33 + (auVar43._8_8_ & 0xffffffff);
            lVar34 = lVar34 + (auVar43._8_8_ >> 0x20);
            lVar35 = lVar35 + (ulong)auVar47._0_4_;
            lVar36 = lVar36 + (ulong)auVar47._4_4_;
            lVar15 = lVar15 + (ulong)auVar43._0_4_;
            lVar32 = lVar32 + (ulong)auVar43._4_4_;
          } while (lVar17 != 0);
          lVar15 = lVar15 + lVar35 + lVar33 + lVar37 + lVar32 + lVar36 + lVar34 + lVar38;
          if (uVar2 == uVar16) goto LAB_00666b28;
        }
LAB_00666b0c:
        do {
          pbVar18 = (byte *)((long)piVar12 + 0x12);
          piVar12 = piVar12 + 8;
          lVar15 = lVar15 + ((ulong)~(uint)*pbVar18 & 1);
        } while (piVar12 != piVar8);
      }
    }
LAB_00666b28:
    FUN_00666bd4(param_1,lVar15);
  }
  sVar9 = *(short *)((long)param_3 + 10);
  puVar13 = (undefined8 *)param_3[2];
  if ((long)sVar9 < 0) {
    local_60 = param_2;
    lStack_58 = param_1;
    local_50 = param_3;
    FUN_0066bf0c(auStack_78,*puVar13,puVar13 + 1,&local_60);
    if (*(long *)(lVar11 + 0x28) != local_48) goto LAB_00666bc0;
  }
  else {
    if (sVar9 != 0) {
      puVar30 = puVar13;
      do {
        puVar31 = puVar30 + 4;
        FUN_00666f10(param_1,param_2,*(undefined4 *)puVar30,puVar30 + 1,*param_3);
        puVar30 = puVar31;
      } while (puVar31 != puVar13 + (long)sVar9 * 4);
    }
    if (*(long *)(lVar11 + 0x28) != local_48) {
LAB_00666bc0:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  return;
}


// ===== 00666bd4  FUN_00666bd4 =====

void FUN_00666bd4(long *param_1,ulong param_2)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long *__dest;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  undefined4 *__src;
  long *plVar9;
  ulong uVar10;
  undefined4 *puVar11;
  undefined1 auVar12 [16];
  undefined4 local_98;
  undefined4 uStack_94;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [8];
  long local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar1 = *(ushort *)((long)param_1 + 10);
  if ((-1 < (short)uVar1) && (uVar10 = (ulong)*(ushort *)(param_1 + 1), uVar10 < param_2)) {
    do {
      uVar2 = (int)uVar10 << 2;
      if ((uVar10 & 0xffff) == 0) {
        uVar2 = 1;
      }
      uVar10 = (ulong)uVar2;
    } while ((uVar10 & 0xffff) < param_2);
    __src = (undefined4 *)param_1[2];
    lVar5 = *param_1;
    if ((uVar2 & 0xffff) < 0x101) {
      lVar7 = (uVar10 & 0xffff) << 5;
      if (lVar5 == 0) {
        __dest = (long *)thunk_FUN_00759c3c(lVar7);
      }
      else {
        __dest = (long *)thunk_FUN_006634e4(lVar5,lVar7,&PTR_PTR_thunk_FUN_0073a404_00798f38);
      }
      if (uVar1 != 0) {
        memmove(__dest,__src,(ulong)uVar1 << 5);
      }
    }
    else {
      if (lVar5 == 0) {
        __dest = (long *)FUN_00759c3c(0x18);
        __dest[2] = 0;
        plVar9 = __dest + 1;
        *plVar9 = 0;
        *__dest = (long)plVar9;
      }
      else {
        auVar12 = FUN_00663600(lVar5,0x18,PTR_PTR_007a31f0);
        puVar4 = PTR_FUN_007a31f8;
        __dest = auVar12._0_8_;
        *auVar12._8_8_ = __dest;
        auVar12._8_8_[1] = puVar4;
        plVar9 = __dest + 1;
        *plVar9 = 0;
        __dest[2] = 0;
        *__dest = (long)plVar9;
      }
      if (uVar1 != 0) {
        puVar11 = __src;
        do {
          local_98 = *puVar11;
          lStack_88 = *(long *)(puVar11 + 4);
          lStack_90 = *(long *)(puVar11 + 2);
          lStack_80 = *(long *)(puVar11 + 6);
          puVar6 = (undefined8 *)FUN_0066c044(__dest,plVar9,&local_70,auStack_78,&local_98);
          plVar9 = (long *)*puVar6;
          if (plVar9 == (long *)0x0) {
            plVar9 = (long *)FUN_00759c3c(0x40);
            *plVar9 = 0;
            plVar9[1] = 0;
            plVar9[5] = lStack_90;
            plVar9[4] = CONCAT44(uStack_94,local_98);
            plVar9[7] = lStack_80;
            plVar9[6] = lStack_88;
            plVar9[2] = local_70;
            *puVar6 = plVar9;
            plVar8 = plVar9;
            if (*(long *)*__dest != 0) {
              *__dest = *(long *)*__dest;
              plVar8 = (long *)*puVar6;
            }
            FUN_00328410(__dest[1],plVar8);
            __dest[2] = __dest[2] + 1;
          }
          puVar11 = puVar11 + 8;
        } while (puVar11 != __src + (ulong)uVar1 * 8);
      }
      *(undefined2 *)((long)param_1 + 10) = 0xffff;
    }
    if (*param_1 == 0) {
      free(__src);
    }
    *(short *)(param_1 + 1) = (short)uVar2;
    param_1[2] = (long)__dest;
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00666df0  FUN_00666df0 =====

long FUN_00666df0(int *param_1,int *param_2,long *param_3,long *param_4)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  lVar3 = 0;
  if ((param_1 != param_2) && (param_3 != param_4)) {
    lVar3 = 0;
    do {
      if (*param_1 < (int)param_3[4]) {
        lVar3 = lVar3 + 1;
        param_1 = param_1 + 8;
      }
      else if (*param_1 == (int)param_3[4]) {
        lVar3 = lVar3 + 1;
        param_1 = param_1 + 8;
        plVar2 = param_3;
        plVar5 = (long *)param_3[1];
        if ((long *)param_3[1] == (long *)0x0) {
          do {
            param_3 = (long *)plVar2[2];
            bVar1 = (long *)*param_3 != plVar2;
            plVar2 = param_3;
          } while (bVar1);
        }
        else {
          do {
            param_3 = plVar5;
            plVar5 = (long *)*param_3;
          } while ((long *)*param_3 != (long *)0x0);
        }
      }
      else {
        lVar3 = lVar3 + ((ulong)~(uint)*(byte *)((long)param_3 + 0x32) & 1);
        plVar2 = param_3;
        plVar5 = (long *)param_3[1];
        if ((long *)param_3[1] == (long *)0x0) {
          do {
            param_3 = (long *)plVar2[2];
            bVar1 = (long *)*param_3 != plVar2;
            plVar2 = param_3;
          } while (bVar1);
        }
        else {
          do {
            param_3 = plVar5;
            plVar5 = (long *)*param_3;
          } while ((long *)*param_3 != (long *)0x0);
        }
      }
    } while ((param_1 != param_2) && (param_3 != param_4));
  }
  lVar3 = lVar3 + ((long)param_2 - (long)param_1 >> 5);
  while (param_3 != param_4) {
    plVar2 = (long *)param_3[1];
    plVar5 = param_3;
    if ((long *)param_3[1] == (long *)0x0) {
      do {
        plVar4 = (long *)plVar5[2];
        bVar1 = (long *)*plVar4 != plVar5;
        plVar5 = plVar4;
      } while (bVar1);
    }
    else {
      do {
        plVar4 = plVar2;
        plVar2 = (long *)*plVar4;
      } while ((long *)*plVar4 != (long *)0x0);
    }
    lVar3 = lVar3 + ((ulong)~(uint)*(byte *)((long)param_3 + 0x32) & 1);
    param_3 = plVar4;
  }
  return lVar3;
}


// ===== 00666f10  FUN_00666f10 =====

void FUN_00666f10(long *param_1,undefined8 param_2,undefined4 param_3,long *param_4,
                 undefined8 param_5)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined1 uVar4;
  long lVar5;
  long *plVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  void *__dest;
  undefined8 uVar10;
  void *__src;
  size_t __n;
  ulong *puVar11;
  long lVar12;
  code *pcVar13;
  int *piVar14;
  long *plVar15;
  int *piVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  undefined1 auVar20 [16];
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  if (*(char *)((long)param_4 + 9) == '\0') {
    if ((*(byte *)((long)param_4 + 10) & 1) == 0) {
      bVar3 = *(byte *)(param_4 + 1);
      iVar2 = *(int *)(PTR_DAT_007a3220 + (ulong)bVar3 * 4);
      if (iVar2 < 6) {
        if (iVar2 < 3) {
          if (iVar2 == 1) goto LAB_00667330;
          if (iVar2 == 2) goto LAB_006672f4;
        }
        else if (iVar2 == 3) {
LAB_00667330:
          lVar17 = *param_4;
          lVar19 = param_4[2];
          auVar20 = FUN_00667c84(param_1,param_3);
          puVar8 = auVar20._0_8_;
          *(long *)(puVar8 + 4) = lVar19;
          if ((auVar20 & (undefined1  [16])0xff) != (undefined1  [16])0x0) {
            *(byte *)(puVar8 + 2) = bVar3;
            *(undefined1 *)((long)puVar8 + 9) = 0;
          }
          *puVar8 = (int)lVar17;
          *(byte *)((long)puVar8 + 10) = *(byte *)((long)puVar8 + 10) & 0xf0;
        }
        else if (iVar2 == 4) {
LAB_006672f4:
          lVar19 = *param_4;
          lVar17 = param_4[2];
          auVar20 = FUN_00667c84(param_1,param_3);
          plVar6 = auVar20._0_8_;
          plVar6[2] = lVar17;
          if ((auVar20 & (undefined1  [16])0xff) != (undefined1  [16])0x0) {
            *(byte *)(plVar6 + 1) = bVar3;
            *(undefined1 *)((long)plVar6 + 9) = 0;
          }
          *plVar6 = lVar19;
          *(byte *)((long)plVar6 + 10) = *(byte *)((long)plVar6 + 10) & 0xf0;
        }
        else if (iVar2 == 5) {
          lVar19 = *param_4;
          lVar17 = param_4[2];
          auVar20 = FUN_00667c84(param_1,param_3);
          plVar6 = auVar20._0_8_;
          plVar6[2] = lVar17;
          if ((auVar20 & (undefined1  [16])0xff) != (undefined1  [16])0x0) {
            *(byte *)(plVar6 + 1) = bVar3;
            *(undefined1 *)((long)plVar6 + 9) = 0;
          }
          *plVar6 = lVar19;
          *(byte *)((long)plVar6 + 10) = *(byte *)((long)plVar6 + 10) & 0xf0;
        }
      }
      else if (iVar2 < 8) {
        if (iVar2 == 6) {
          lVar17 = *param_4;
          lVar19 = param_4[2];
          auVar20 = FUN_00667c84(param_1,param_3);
          puVar8 = auVar20._0_8_;
          *(long *)(puVar8 + 4) = lVar19;
          if ((auVar20 & (undefined1  [16])0xff) != (undefined1  [16])0x0) {
            *(byte *)(puVar8 + 2) = bVar3;
            *(undefined1 *)((long)puVar8 + 9) = 0;
          }
          *puVar8 = (int)lVar17;
          *(byte *)((long)puVar8 + 10) = *(byte *)((long)puVar8 + 10) & 0xf0;
        }
        else if (iVar2 == 7) {
          lVar17 = *param_4;
          lVar19 = param_4[2];
          auVar20 = FUN_00667c84(param_1,param_3);
          puVar7 = auVar20._0_8_;
          *(long *)(puVar7 + 0x10) = lVar19;
          if ((auVar20 & (undefined1  [16])0xff) != (undefined1  [16])0x0) {
            puVar7[8] = bVar3;
            puVar7[9] = 0;
          }
          *puVar7 = (char)lVar17;
          puVar7[10] = puVar7[10] & 0xf0;
        }
      }
      else {
        if (iVar2 == 8) goto LAB_00667330;
        if (iVar2 == 9) {
          puVar11 = (ulong *)*param_4;
          if ((*puVar11 & 1) == 0) {
            local_70 = (void *)puVar11[2];
            uStack_78 = puVar11[1];
            local_80 = *puVar11;
          }
          else {
            FUN_002fb36c(&local_80,puVar11[2],puVar11[1]);
          }
                    /* try { // try from 00667784 to 00667797 has its CatchHandler @ 006678b0 */
          FUN_006678e0(param_1,param_3,(ulong)bVar3,&local_80,param_4[2]);
          if ((local_80 & 1) != 0) {
            free(local_70);
          }
        }
        else if (iVar2 == 10) {
          lVar17 = param_4[2];
          auVar20 = FUN_00667c84(param_1,param_3);
          plVar6 = auVar20._0_8_;
          plVar6[2] = lVar17;
          if ((auVar20 & (undefined1  [16])0xff) == (undefined1  [16])0x0) {
            plVar15 = (long *)*plVar6;
            if ((*(byte *)((long)param_4 + 10) >> 4 & 1) == 0) {
              lVar17 = *param_4;
              if ((*(byte *)((long)plVar6 + 10) >> 4 & 1) != 0) {
                plVar15 = (long *)(**(code **)(*plVar15 + 0x20))(plVar15,lVar17,*param_1);
                lVar19 = *plVar15;
                goto LAB_00667868;
              }
              lVar19 = *plVar15;
            }
            else {
              plVar18 = plVar6;
              if ((*(byte *)((long)plVar6 + 10) >> 4 & 1) != 0) goto LAB_00667824;
              lVar17 = (**(code **)(*(long *)*param_4 + 0x18))((long *)*param_4,plVar15,param_5);
              lVar19 = *plVar15;
            }
            pcVar13 = *(code **)(lVar19 + 0x38);
LAB_00667870:
            (*pcVar13)(plVar15,lVar17);
          }
          else {
            lVar17 = param_4[1];
            uVar4 = *(undefined1 *)((long)param_4 + 0xb);
            *(undefined1 *)((long)plVar6 + 9) = 0;
            *(char *)(plVar6 + 1) = (char)lVar17;
            *(undefined1 *)((long)plVar6 + 0xb) = uVar4;
            bVar3 = *(byte *)((long)plVar6 + 10) & 0xf;
            if ((*(byte *)((long)param_4 + 10) >> 4 & 1) == 0) {
              *(byte *)((long)plVar6 + 10) = bVar3;
              plVar15 = (long *)(**(code **)(*(long *)*param_4 + 0x18))((long *)*param_4,*param_1);
              lVar19 = *plVar15;
              *plVar6 = (long)plVar15;
LAB_00667868:
              lVar17 = *param_4;
              pcVar13 = *(code **)(lVar19 + 0x38);
              goto LAB_00667870;
            }
            *(byte *)((long)plVar6 + 10) = bVar3 | 0x10;
            plVar15 = (long *)(**(code **)(*(long *)*param_4 + 0x10))((long *)*param_4,*param_1);
            *plVar6 = (long)plVar15;
            plVar18 = plVar15;
LAB_00667824:
            uVar10 = FUN_006679c4(plVar18,param_2,param_3);
            (**(code **)(*plVar15 + 0x68))(plVar15,uVar10,*param_4,*param_1);
          }
          *(byte *)((long)plVar6 + 10) = *(byte *)((long)plVar6 + 10) & 0xf0;
        }
      }
    }
  }
  else {
    lVar17 = param_4[2];
    auVar20 = FUN_00667c84(param_1,param_3);
    plVar6 = auVar20._0_8_;
    bVar3 = *(byte *)(param_4 + 1);
    plVar6[2] = lVar17;
    if ((auVar20 & (undefined1  [16])0xff) != (undefined1  [16])0x0) {
      uVar4 = *(undefined1 *)((long)param_4 + 0xb);
      *(byte *)(plVar6 + 1) = bVar3;
      *(undefined1 *)((long)plVar6 + 9) = 1;
      *(undefined1 *)((long)plVar6 + 0xb) = uVar4;
    }
    iVar2 = *(int *)(&DAT_002107e0 + (ulong)bVar3 * 4);
    if (iVar2 < 6) {
      if (iVar2 < 3) {
        if (iVar2 == 1) {
LAB_00667148:
          if ((auVar20 & (undefined1  [16])0xff) != (undefined1  [16])0x0) {
            lVar17 = *param_1;
            if (lVar17 == 0) {
              puVar9 = (undefined8 *)FUN_00759c3c(0x10);
              *puVar9 = 0;
              puVar9[1] = 0;
            }
            else {
              auVar20 = FUN_00663600(lVar17,0x10,PTR_PTR_007a3158);
              puVar9 = auVar20._0_8_;
              *auVar20._8_8_ = puVar9;
              auVar20._8_8_[1] = thunk_FUN_00673a60;
              *puVar9 = 0;
              puVar9[1] = lVar17;
            }
            *plVar6 = (long)puVar9;
          }
          piVar16 = (int *)*param_4;
          if (*piVar16 != 0) {
            piVar14 = (int *)*plVar6;
            lVar17 = (long)*piVar14;
            FUN_00673968(piVar14,*piVar14 + *piVar16);
            goto LAB_00667544;
          }
        }
        else if (iVar2 == 2) {
          if ((auVar20 & (undefined1  [16])0xff) != (undefined1  [16])0x0) {
            lVar17 = *param_1;
            if (lVar17 == 0) {
              puVar9 = (undefined8 *)FUN_00759c3c(0x10);
              *puVar9 = 0;
              puVar9[1] = 0;
            }
            else {
              auVar20 = FUN_00663600(lVar17,0x10,PTR_PTR_007a3168);
              puVar9 = auVar20._0_8_;
              *auVar20._8_8_ = puVar9;
              auVar20._8_8_[1] = thunk_FUN_006742e4;
              *puVar9 = 0;
              puVar9[1] = lVar17;
            }
            *plVar6 = (long)puVar9;
          }
          piVar16 = (int *)*param_4;
          if (*piVar16 != 0) {
            piVar14 = (int *)*plVar6;
            lVar17 = (long)*piVar14;
            FUN_006741e8(piVar14,*piVar14 + *piVar16);
            goto LAB_00667698;
          }
        }
      }
      else if (iVar2 == 3) {
        if ((auVar20 & (undefined1  [16])0xff) != (undefined1  [16])0x0) {
          lVar17 = *param_1;
          if (lVar17 == 0) {
            puVar9 = (undefined8 *)FUN_00759c3c(0x10);
            *puVar9 = 0;
            puVar9[1] = 0;
          }
          else {
            auVar20 = FUN_00663600(lVar17,0x10,PTR_PTR_007a3178);
            puVar9 = auVar20._0_8_;
            *auVar20._8_8_ = puVar9;
            auVar20._8_8_[1] = thunk_FUN_00673ea0;
            *puVar9 = 0;
            puVar9[1] = lVar17;
          }
          *plVar6 = (long)puVar9;
        }
        piVar16 = (int *)*param_4;
        if (*piVar16 != 0) {
          piVar14 = (int *)*plVar6;
          lVar17 = (long)*piVar14;
          FUN_00673da8(piVar14,*piVar14 + *piVar16);
LAB_00667544:
          __src = *(void **)(piVar16 + 2);
          *piVar14 = *piVar14 + *piVar16;
          if (*(long *)(lVar5 + 0x28) == local_68) {
            __dest = (void *)(*(long *)(piVar14 + 2) + lVar17 * 4);
            __n = (long)*piVar16 << 2;
            goto LAB_006676cc;
          }
          goto LAB_006678dc;
        }
      }
      else if (iVar2 == 4) {
        if ((auVar20 & (undefined1  [16])0xff) != (undefined1  [16])0x0) {
          lVar17 = *param_1;
          if (lVar17 == 0) {
            puVar9 = (undefined8 *)FUN_00759c3c(0x10);
            *puVar9 = 0;
            puVar9[1] = 0;
          }
          else {
            auVar20 = FUN_00663600(lVar17,0x10,PTR_PTR_007a3188);
            puVar9 = auVar20._0_8_;
            *auVar20._8_8_ = puVar9;
            auVar20._8_8_[1] = thunk_FUN_00674728;
            *puVar9 = 0;
            puVar9[1] = lVar17;
          }
          *plVar6 = (long)puVar9;
        }
        piVar16 = (int *)*param_4;
        if (*piVar16 != 0) {
          piVar14 = (int *)*plVar6;
          lVar17 = (long)*piVar14;
          FUN_0067462c(piVar14,*piVar14 + *piVar16);
LAB_00667698:
          __src = *(void **)(piVar16 + 2);
          *piVar14 = *piVar14 + *piVar16;
          if (*(long *)(lVar5 + 0x28) == local_68) {
            __dest = (void *)(*(long *)(piVar14 + 2) + lVar17 * 8);
            __n = (long)*piVar16 << 3;
LAB_006676cc:
            memcpy(__dest,__src,__n);
            return;
          }
          goto LAB_006678dc;
        }
      }
      else if (iVar2 == 5) {
        if ((auVar20 & (undefined1  [16])0xff) != (undefined1  [16])0x0) {
          lVar17 = *param_1;
          if (lVar17 == 0) {
            puVar9 = (undefined8 *)FUN_00759c3c(0x10);
            *puVar9 = 0;
            puVar9[1] = 0;
          }
          else {
            auVar20 = FUN_00663600(lVar17,0x10,PTR_PTR_007a31a8);
            puVar9 = auVar20._0_8_;
            *auVar20._8_8_ = puVar9;
            auVar20._8_8_[1] = thunk_FUN_00674fac;
            *puVar9 = 0;
            puVar9[1] = lVar17;
          }
          *plVar6 = (long)puVar9;
        }
        piVar16 = (int *)*param_4;
        if (*piVar16 != 0) {
          piVar14 = (int *)*plVar6;
          lVar17 = (long)*piVar14;
          FUN_00674eb0(piVar14,*piVar14 + *piVar16);
          goto LAB_00667698;
        }
      }
    }
    else if (iVar2 < 8) {
      if (iVar2 == 6) {
        if ((auVar20 & (undefined1  [16])0xff) != (undefined1  [16])0x0) {
          lVar17 = *param_1;
          if (lVar17 == 0) {
            puVar9 = (undefined8 *)FUN_00759c3c(0x10);
            *puVar9 = 0;
            puVar9[1] = 0;
          }
          else {
            auVar20 = FUN_00663600(lVar17,0x10,PTR_PTR_007a3198);
            puVar9 = auVar20._0_8_;
            *auVar20._8_8_ = puVar9;
            auVar20._8_8_[1] = thunk_FUN_00674b68;
            *puVar9 = 0;
            puVar9[1] = lVar17;
          }
          *plVar6 = (long)puVar9;
        }
        piVar16 = (int *)*param_4;
        if (*piVar16 != 0) {
          piVar14 = (int *)*plVar6;
          lVar17 = (long)*piVar14;
          FUN_00674a70(piVar14,*piVar14 + *piVar16);
          goto LAB_00667544;
        }
      }
      else if (iVar2 == 7) {
        if ((auVar20 & (undefined1  [16])0xff) != (undefined1  [16])0x0) {
          lVar17 = *param_1;
          if (lVar17 == 0) {
            puVar9 = (undefined8 *)FUN_00759c3c(0x10);
            *puVar9 = 0;
            puVar9[1] = 0;
          }
          else {
            auVar20 = FUN_00663600(lVar17,0x10,PTR_PTR_007a31b8);
            puVar9 = auVar20._0_8_;
            *auVar20._8_8_ = puVar9;
            auVar20._8_8_[1] = thunk_FUN_00673630;
            *puVar9 = 0;
            puVar9[1] = lVar17;
          }
          *plVar6 = (long)puVar9;
        }
        piVar16 = (int *)*param_4;
        if (*piVar16 != 0) {
          piVar14 = (int *)*plVar6;
          iVar2 = *piVar14;
          FUN_0067353c(piVar14,iVar2 + *piVar16);
          __src = *(void **)(piVar16 + 2);
          *piVar14 = *piVar14 + *piVar16;
          __n = (size_t)*piVar16;
          if (*(long *)(lVar5 + 0x28) == local_68) {
            __dest = (void *)(*(long *)(piVar14 + 2) + (long)iVar2);
            goto LAB_006676cc;
          }
          goto LAB_006678dc;
        }
      }
    }
    else {
      if (iVar2 == 8) goto LAB_00667148;
      if (iVar2 == 9) {
        if ((auVar20 & (undefined1  [16])0xff) != (undefined1  [16])0x0) {
          lVar17 = *param_1;
          if (lVar17 == 0) {
            plVar15 = (long *)FUN_00759c3c(0x18);
            plVar15[1] = 0;
            plVar15[2] = 0;
            *plVar15 = 0;
          }
          else {
            auVar20 = FUN_00663600(lVar17,0x18,PTR_PTR_007a31d8);
            plVar15 = auVar20._0_8_;
            *auVar20._8_8_ = plVar15;
            auVar20._8_8_[1] = thunk_FUN_00675290;
            *plVar15 = lVar17;
            plVar15[1] = 0;
            plVar15[2] = 0;
          }
          *plVar6 = (long)plVar15;
        }
        iVar2 = *(int *)(*param_4 + 8);
        if (iVar2 != 0) {
          lVar17 = *plVar6;
          lVar19 = *(long *)(*param_4 + 0x10);
          uVar10 = FUN_00675710(lVar17,iVar2);
          FUN_005d663c(lVar17,uVar10,lVar19 + 8,iVar2,
                       **(int **)(lVar17 + 0x10) - *(int *)(lVar17 + 8));
          iVar1 = **(int **)(lVar17 + 0x10);
          iVar2 = *(int *)(lVar17 + 8) + iVar2;
          *(int *)(lVar17 + 8) = iVar2;
          if (iVar1 < iVar2) {
            **(int **)(lVar17 + 0x10) = iVar2;
          }
        }
      }
      else if (iVar2 == 10) {
        if ((auVar20 & (undefined1  [16])0xff) != (undefined1  [16])0x0) {
          lVar17 = *param_1;
          if (lVar17 == 0) {
            plVar15 = (long *)FUN_00759c3c(0x18);
            plVar15[1] = 0;
            plVar15[2] = 0;
            *plVar15 = 0;
          }
          else {
            auVar20 = FUN_00663600(lVar17,0x18,PTR_PTR_007a31c8);
            plVar15 = auVar20._0_8_;
            *auVar20._8_8_ = plVar15;
            auVar20._8_8_[1] = FUN_0066bd68;
            *plVar15 = lVar17;
            plVar15[1] = 0;
            plVar15[2] = 0;
          }
          *plVar6 = (long)plVar15;
        }
        lVar17 = *param_4;
        if (0 < *(int *)(lVar17 + 8)) {
          lVar19 = 0;
          do {
            lVar12 = *plVar6;
            piVar16 = *(int **)(lVar12 + 0x10);
            plVar15 = *(long **)(*(long *)(lVar17 + 0x10) + lVar19 * 8 + 8);
            if (piVar16 == (int *)0x0) {
LAB_006675dc:
              plVar18 = (long *)(**(code **)(*plVar15 + 0x18))(plVar15,*param_1);
              FUN_0066bd90(*plVar6,plVar18);
            }
            else {
              iVar2 = *(int *)(lVar12 + 8);
              if (*piVar16 <= iVar2) goto LAB_006675dc;
              plVar18 = *(long **)(piVar16 + (long)iVar2 * 2 + 2);
              *(int *)(lVar12 + 8) = iVar2 + 1;
              if (plVar18 == (long *)0x0) goto LAB_006675dc;
            }
            (**(code **)(*plVar18 + 0x38))(plVar18,plVar15);
            lVar19 = lVar19 + 1;
          } while (lVar19 < *(int *)(lVar17 + 8));
        }
      }
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
LAB_006678dc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006678e0  FUN_006678e0 =====

void FUN_006678e0(long *param_1,undefined8 param_2,undefined1 param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  byte *pbVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  auVar8 = FUN_00667c84();
  puVar3 = auVar8._0_8_;
  puVar3[2] = param_5;
  if ((auVar8 & (undefined1  [16])0xff) == (undefined1  [16])0x0) {
    pbVar5 = (byte *)*puVar3;
    *(byte *)((long)puVar3 + 10) = *(byte *)((long)puVar3 + 10) & 0xf0;
    bVar1 = *pbVar5;
  }
  else {
    lVar4 = *param_1;
    *(undefined1 *)(puVar3 + 1) = param_3;
    *(undefined1 *)((long)puVar3 + 9) = 0;
    if (lVar4 == 0) {
      pbVar5 = (byte *)FUN_00759c3c(0x18);
    }
    else {
      auVar8 = FUN_00663600(lVar4,0x18,PTR_PTR_007a2ea8);
      puVar2 = PTR_FUN_007a2ca8;
      pbVar5 = auVar8._0_8_;
      *auVar8._8_8_ = pbVar5;
      auVar8._8_8_[1] = puVar2;
    }
    pbVar5[0] = 0;
    pbVar5[1] = 0;
    pbVar5[2] = 0;
    pbVar5[3] = 0;
    pbVar5[4] = 0;
    pbVar5[5] = 0;
    pbVar5[6] = 0;
    pbVar5[7] = 0;
    pbVar5[8] = 0;
    pbVar5[9] = 0;
    pbVar5[10] = 0;
    pbVar5[0xb] = 0;
    pbVar5[0xc] = 0;
    pbVar5[0xd] = 0;
    pbVar5[0xe] = 0;
    pbVar5[0xf] = 0;
    pbVar5[0x10] = 0;
    pbVar5[0x11] = 0;
    pbVar5[0x12] = 0;
    pbVar5[0x13] = 0;
    pbVar5[0x14] = 0;
    pbVar5[0x15] = 0;
    pbVar5[0x16] = 0;
    pbVar5[0x17] = 0;
    *puVar3 = pbVar5;
    *(byte *)((long)puVar3 + 10) = *(byte *)((long)puVar3 + 10) & 0xf0;
    bVar1 = *pbVar5;
  }
  if ((bVar1 & 1) != 0) {
    free(*(void **)(pbVar5 + 0x10));
  }
  uVar7 = param_4[1];
  uVar6 = *param_4;
  *(undefined8 *)(pbVar5 + 0x10) = param_4[2];
  *(undefined8 *)(pbVar5 + 8) = uVar7;
  *(undefined8 *)pbVar5 = uVar6;
  *(undefined2 *)param_4 = 0;
  return;
}


// ===== 006679c4  FUN_006679c4 =====

long FUN_006679c4(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  byte *pbVar1;
  char *pcVar2;
  long lVar3;
  
  lVar3 = FUN_00663c68(param_2,param_3);
  if (lVar3 != 0) {
    pbVar1 = (byte *)(lVar3 + 0xc);
    pcVar2 = (char *)(lVar3 + 0xd);
    lVar3 = *(long *)(lVar3 + 0x10);
    if ((*pcVar2 == '\0') || (0xfffffffc < *(int *)(PTR_DAT_007a3228 + (ulong)*pbVar1 * 4) - 5U)) {
      if (*(int *)(PTR_DAT_007a3228 + (ulong)*pbVar1 * 4) != 2) {
        lVar3 = 0;
      }
      return lVar3;
    }
  }
  return lVar3;
}


// ===== 00667a1c  FUN_00667a1c =====

void FUN_00667a1c(undefined8 *param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined2 *)(param_2 + 1);
  uVar3 = *param_1;
  *param_1 = *param_2;
  uVar2 = *(undefined2 *)(param_1 + 1);
  *(undefined2 *)(param_1 + 1) = uVar1;
  *(undefined2 *)(param_2 + 1) = uVar2;
  uVar1 = *(undefined2 *)((long)param_1 + 10);
  *param_2 = uVar3;
  *(undefined2 *)((long)param_1 + 10) = *(undefined2 *)((long)param_2 + 10);
  *(undefined2 *)((long)param_2 + 10) = uVar1;
  uVar3 = param_1[2];
  param_1[2] = param_2[2];
  param_2[2] = uVar3;
  return;
}


// ===== 00667a60  FUN_00667a60 =====

void FUN_00667a60(long *param_1)

{
  int iVar1;
  void *pvVar2;
  byte *__ptr;
  
  iVar1 = *(int *)(&DAT_002107e0 + (ulong)*(byte *)(param_1 + 1) * 4);
  if (*(char *)((long)param_1 + 9) == '\0') {
    if (iVar1 == 10) {
      if ((long *)*param_1 == (long *)0x0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00667bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)*param_1 + 8))();
      return;
    }
    if (iVar1 != 9) {
      return;
    }
    __ptr = (byte *)*param_1;
    if (__ptr == (byte *)0x0) {
      return;
    }
    if ((*__ptr & 1) != 0) {
      free(*(void **)(__ptr + 0x10));
      free(__ptr);
      return;
    }
LAB_00667b44:
    free(__ptr);
    return;
  }
  if (iVar1 < 6) {
    if (2 < iVar1) {
      if (iVar1 == 3) {
        pvVar2 = (void *)*param_1;
        if (pvVar2 == (void *)0x0) {
          return;
        }
        FUN_00673ea0(pvVar2);
        free(pvVar2);
        return;
      }
      if (iVar1 == 4) {
        pvVar2 = (void *)*param_1;
        if (pvVar2 == (void *)0x0) {
          return;
        }
        FUN_00674728(pvVar2);
        free(pvVar2);
        return;
      }
      if (iVar1 != 5) {
        return;
      }
      pvVar2 = (void *)*param_1;
      if (pvVar2 == (void *)0x0) {
        return;
      }
      FUN_00674fac(pvVar2);
      free(pvVar2);
      return;
    }
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        return;
      }
      pvVar2 = (void *)*param_1;
      if (pvVar2 == (void *)0x0) {
        return;
      }
      FUN_006742e4(pvVar2);
      free(pvVar2);
      return;
    }
  }
  else {
    if (iVar1 < 8) {
      if (iVar1 == 6) {
        pvVar2 = (void *)*param_1;
        if (pvVar2 == (void *)0x0) {
          return;
        }
        FUN_00674b68(pvVar2);
        free(pvVar2);
        return;
      }
      if (iVar1 != 7) {
        return;
      }
      pvVar2 = (void *)*param_1;
      if (pvVar2 == (void *)0x0) {
        return;
      }
      FUN_00673630(pvVar2);
      free(pvVar2);
      return;
    }
    if (iVar1 != 8) {
      if (iVar1 == 9) {
        pvVar2 = (void *)*param_1;
        if (pvVar2 == (void *)0x0) {
          return;
        }
        FUN_00675290(pvVar2);
        free(pvVar2);
        return;
      }
      if (iVar1 != 10) {
        return;
      }
      __ptr = (byte *)*param_1;
      if (__ptr == (byte *)0x0) {
        return;
      }
      if ((*(long *)(__ptr + 0x10) != 0) && (*(long *)__ptr == 0)) {
                    /* try { // try from 00667b3c to 00667b43 has its CatchHandler @ 00667c80 */
        FUN_00675910(__ptr);
      }
      goto LAB_00667b44;
    }
  }
  pvVar2 = (void *)*param_1;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  FUN_00673a60(pvVar2);
  free(pvVar2);
  return;
}


// ===== 00667c84  FUN_00667c84 =====

void FUN_00667c84(long param_1,int param_2)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  int *piVar4;
  ulong uVar5;
  ushort uVar6;
  ulong uVar7;
  ulong uVar8;
  int *piVar9;
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar6 = *(ushort *)(param_1 + 10);
  uVar5 = (ulong)(short)uVar6;
  piVar9 = *(int **)(param_1 + 0x10);
  if ((long)uVar5 < 0) {
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    local_58[0] = param_2;
    lVar3 = FUN_0066ba84(piVar9,local_58);
    piVar2 = (int *)(lVar3 + 0x28);
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
    goto LAB_00667e20;
  }
  piVar4 = piVar9 + uVar5 * 8;
  uVar7 = uVar5;
  if (uVar6 == 0) {
    if (*(short *)(param_1 + 8) == 0) {
LAB_00667da4:
      FUN_00666bd4(param_1,uVar5 + 1);
      piVar2 = (int *)FUN_00667c84(param_1,param_2);
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
      goto LAB_00667e20;
    }
    uVar6 = 0;
  }
  else {
    do {
      uVar8 = uVar7 >> 1;
      piVar2 = piVar9 + uVar8 * 8 + 8;
      uVar7 = uVar7 + ~uVar8;
      if (param_2 <= piVar9[uVar8 * 8]) {
        piVar2 = piVar9;
        uVar7 = uVar8;
      }
      piVar9 = piVar2;
    } while (uVar7 != 0);
    if (piVar2 == piVar4) {
      if (*(ushort *)(param_1 + 8) <= uVar6) goto LAB_00667da4;
    }
    else {
      if (*piVar2 == param_2) {
        piVar2 = piVar2 + 2;
        if (*(long *)(lVar1 + 0x28) == local_38) {
          return;
        }
        goto LAB_00667e20;
      }
      if (*(ushort *)(param_1 + 8) <= uVar6) goto LAB_00667da4;
      memmove(piVar2 + 8,piVar2,(long)piVar4 - (long)piVar2);
      uVar6 = *(ushort *)(param_1 + 10);
      piVar4 = piVar2;
    }
  }
  *piVar4 = param_2;
  *(ushort *)(param_1 + 10) = uVar6 + 1;
  piVar2 = piVar4 + 2;
  piVar2[0] = 0;
  piVar2[1] = 0;
  piVar4[4] = 0;
  piVar4[5] = 0;
  piVar4[6] = 0;
  piVar4[7] = 0;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_00667e20:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(piVar2);
}


// ===== 00667e24  FUN_00667e24 =====

uint FUN_00667e24(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  
  puVar1 = PTR_DAT_007a3220;
  if (*(short *)(param_1 + 10) < 0) {
    plVar7 = *(undefined8 **)(param_1 + 0x10) + 1;
    plVar9 = (long *)**(undefined8 **)(param_1 + 0x10);
    if (plVar9 != plVar7) {
      do {
        uVar4 = FUN_00667f94(plVar9 + 5);
        if ((uVar4 & 1) == 0) {
          return 0;
        }
        plVar2 = (long *)plVar9[1];
        plVar10 = plVar9;
        if ((long *)plVar9[1] == (long *)0x0) {
          do {
            plVar9 = (long *)plVar10[2];
            bVar3 = (long *)*plVar9 != plVar10;
            plVar10 = plVar9;
          } while (bVar3);
        }
        else {
          do {
            plVar9 = plVar2;
            plVar2 = (long *)*plVar9;
          } while ((long *)*plVar9 != (long *)0x0);
        }
      } while (plVar9 != plVar7);
LAB_00667f10:
      return uVar4 & 1;
    }
  }
  else if (*(short *)(param_1 + 10) != 0) {
    lVar8 = *(long *)(param_1 + 0x10);
    do {
      if (*(int *)(puVar1 + (ulong)*(byte *)(lVar8 + 0x10) * 4) == 10) {
        if (*(char *)(lVar8 + 0x11) == '\0') {
          if ((*(byte *)(lVar8 + 0x12) & 1) == 0) {
            if ((*(byte *)(lVar8 + 0x12) >> 4 & 1) == 0) {
              uVar5 = (**(code **)(**(long **)(lVar8 + 8) + 0x28))();
            }
            else {
              uVar5 = (**(code **)(**(long **)(lVar8 + 8) + 0x48))();
            }
            if ((uVar5 & 1) == 0) {
              return 0;
            }
          }
        }
        else {
          lVar6 = *(long *)(lVar8 + 8);
          if (0 < *(int *)(lVar6 + 8)) {
            lVar11 = 0;
            do {
              uVar5 = (**(code **)(**(long **)(*(long *)(lVar6 + 0x10) + lVar11 * 8 + 8) + 0x28))();
              if ((uVar5 & 1) == 0) {
                uVar4 = 0;
                goto LAB_00667f10;
              }
              lVar6 = *(long *)(lVar8 + 8);
              lVar11 = lVar11 + 1;
            } while (lVar11 < *(int *)(lVar6 + 8));
          }
        }
      }
      lVar8 = lVar8 + 0x20;
    } while (lVar8 != *(long *)(param_1 + 0x10) + (ulong)*(ushort *)(param_1 + 10) * 0x20);
  }
  return 1;
}


// ===== 00667f94  FUN_00667f94 =====

undefined8 FUN_00667f94(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  if (*(int *)(&DAT_002107e0 + (ulong)*(byte *)(param_1 + 1) * 4) == 10) {
    if (*(char *)((long)param_1 + 9) == '\0') {
      if ((*(byte *)((long)param_1 + 10) & 1) == 0) {
        if ((*(byte *)((long)param_1 + 10) >> 4 & 1) == 0) {
          uVar1 = (**(code **)(*(long *)*param_1 + 0x28))();
        }
        else {
          uVar1 = (**(code **)(*(long *)*param_1 + 0x48))();
        }
        if ((uVar1 & 1) == 0) {
          return 0;
        }
      }
    }
    else {
      lVar2 = *param_1;
      if (0 < *(int *)(lVar2 + 8)) {
        lVar3 = 0;
        do {
          uVar1 = (**(code **)(**(long **)(*(long *)(lVar2 + 0x10) + lVar3 * 8 + 8) + 0x28))();
          if ((uVar1 & 1) == 0) {
            return 0;
          }
          lVar2 = *param_1;
          lVar3 = lVar3 + 1;
        } while (lVar3 < *(int *)(lVar2 + 8));
      }
    }
  }
  return 1;
}


// ===== 00668058  FUN_00668058 =====

undefined8 FUN_00668058(long param_1,undefined8 param_2,int param_3,int param_4,undefined8 param_5)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  int *piVar4;
  int *piVar5;
  ulong uVar6;
  int *piVar7;
  int *piVar8;
  
  uVar3 = (ulong)*(short *)(param_1 + 10);
  piVar7 = *(int **)(param_1 + 0x10);
  if ((long)uVar3 < 0) {
    piVar7 = piVar7 + 2;
    piVar4 = *(int **)piVar7;
    piVar5 = piVar7;
    if (piVar4 != (int *)0x0) {
      do {
        lVar1 = 8;
        if (param_3 <= piVar4[8]) {
          lVar1 = 0;
          piVar5 = piVar4;
        }
        piVar4 = *(int **)((long)piVar4 + lVar1);
      } while (piVar4 != (int *)0x0);
      while ((piVar5 != piVar7 && (piVar5[8] < param_4))) {
        param_5 = FUN_0066818c(piVar5 + 10,param_2);
        piVar4 = *(int **)(piVar5 + 2);
        piVar8 = piVar5;
        if (*(int **)(piVar5 + 2) == (int *)0x0) {
          do {
            piVar5 = *(int **)(piVar8 + 4);
            bVar2 = *(int **)piVar5 != piVar8;
            piVar8 = piVar5;
          } while (bVar2);
        }
        else {
          do {
            piVar5 = piVar4;
            piVar4 = *(int **)piVar5;
          } while (*(int **)piVar5 != (int *)0x0);
        }
      }
    }
  }
  else if (*(short *)(param_1 + 10) != 0) {
    lVar1 = uVar3 * 8;
    piVar5 = piVar7;
    do {
      uVar6 = uVar3 >> 1;
      piVar4 = piVar5 + uVar6 * 8 + 8;
      uVar3 = uVar3 + ~uVar6;
      if (param_3 <= piVar5[uVar6 * 8]) {
        piVar4 = piVar5;
        uVar3 = uVar6;
      }
      piVar5 = piVar4;
    } while (uVar3 != 0);
    for (; (piVar4 != piVar7 + lVar1 && (*piVar4 < param_4)); piVar4 = piVar4 + 8) {
      param_5 = FUN_0066818c(piVar4 + 2,param_2);
    }
  }
  return param_5;
}


// ===== 0066818c  FUN_0066818c =====

ulong * FUN_0066818c(ulong *param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                    ulong *param_5,long *param_6)

{
  long lVar1;
  size_t sVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  byte bVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  ulong *puVar9;
  byte bVar10;
  uint uVar11;
  byte *pbVar12;
  int *piVar13;
  long lVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  byte *pbVar18;
  ulong uVar19;
  ulong uVar20;
  uint *puVar21;
  ulong *puVar22;
  uint *puVar23;
  long lVar24;
  long *plVar25;
  byte *pbVar26;
  long lVar27;
  undefined1 uStack_99;
  undefined1 auStack_98 [48];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (*(byte *)((long)param_1 + 9) != 0) {
    if (*(byte *)((long)param_1 + 0xb) == 0) {
      switch((byte)param_1[1]) {
      case 1:
        piVar13 = (int *)*param_1;
        if (0 < *piVar13) {
          lVar24 = 0;
          uVar11 = param_4 << 3 | 1;
          do {
            if (param_5 < (ulong *)*param_6) {
              uVar8 = *(undefined8 *)(*(long *)(piVar13 + 2) + lVar24 * 8);
              *(byte *)param_5 = (byte)uVar11;
              if (uVar11 < 0x80) goto LAB_006682f8;
LAB_00668334:
              *(byte *)param_5 = (byte)(param_4 << 3) | 0x81;
              *(byte *)((long)param_5 + 1) = (byte)((param_4 << 3) >> 7);
              pbVar12 = (byte *)((long)param_5 + 2);
              if (0x3fff < uVar11) {
                uVar19 = (ulong)(param_4 >> 4 & 0x1ffffff);
                pbVar26 = pbVar12;
                do {
                  uVar20 = uVar19 >> 0xe;
                  uVar19 = uVar19 >> 7;
                  pbVar26[-1] = pbVar26[-1] | 0x80;
                  pbVar12 = pbVar26 + 1;
                  *pbVar26 = (byte)uVar19;
                  pbVar26 = pbVar12;
                } while (uVar20 != 0);
              }
            }
            else {
              param_5 = (ulong *)FUN_0066d3f8(param_6,param_5);
              uVar8 = *(undefined8 *)(*(long *)(*param_1 + 8) + lVar24 * 8);
              *(byte *)param_5 = (byte)uVar11;
              if (0x7f < uVar11) goto LAB_00668334;
LAB_006682f8:
              pbVar12 = (byte *)((long)param_5 + 1);
            }
            param_5 = (ulong *)(pbVar12 + 8);
            *(undefined8 *)pbVar12 = uVar8;
            lVar24 = lVar24 + 1;
            piVar13 = (int *)*param_1;
          } while (lVar24 < *piVar13);
        }
        break;
      case 2:
        piVar13 = (int *)*param_1;
        if (0 < *piVar13) {
          uVar11 = param_4 << 3 | 5;
          lVar24 = 0;
          do {
            if (param_5 < (ulong *)*param_6) {
              uVar7 = *(undefined4 *)(*(long *)(piVar13 + 2) + lVar24 * 4);
              *(byte *)param_5 = (byte)uVar11;
              if (uVar11 < 0x80) goto LAB_00668d68;
LAB_00668da4:
              *(byte *)param_5 = (byte)(param_4 << 3) | 0x85;
              *(byte *)((long)param_5 + 1) = (byte)((param_4 << 3) >> 7);
              pbVar12 = (byte *)((long)param_5 + 2);
              if (0x3fff < uVar11) {
                uVar19 = (ulong)(param_4 >> 4 & 0x1ffffff);
                pbVar26 = pbVar12;
                do {
                  uVar20 = uVar19 >> 0xe;
                  uVar19 = uVar19 >> 7;
                  pbVar26[-1] = pbVar26[-1] | 0x80;
                  pbVar12 = pbVar26 + 1;
                  *pbVar26 = (byte)uVar19;
                  pbVar26 = pbVar12;
                } while (uVar20 != 0);
              }
            }
            else {
              param_5 = (ulong *)FUN_0066d3f8(param_6,param_5);
              uVar7 = *(undefined4 *)(*(long *)(*param_1 + 8) + lVar24 * 4);
              *(byte *)param_5 = (byte)uVar11;
              if (0x7f < uVar11) goto LAB_00668da4;
LAB_00668d68:
              pbVar12 = (byte *)((long)param_5 + 1);
            }
            param_5 = (ulong *)(pbVar12 + 4);
            *(undefined4 *)pbVar12 = uVar7;
            lVar24 = lVar24 + 1;
            piVar13 = (int *)*param_1;
          } while (lVar24 < *piVar13);
        }
        break;
      case 3:
        piVar13 = (int *)*param_1;
        if (0 < *piVar13) {
          uVar11 = param_4 << 3;
          lVar24 = 0;
          bVar6 = (byte)uVar11;
          do {
            if (param_5 < (ulong *)*param_6) {
              uVar19 = *(ulong *)(*(long *)(piVar13 + 2) + lVar24 * 8);
              *(byte *)param_5 = bVar6;
              if (0x7f < uVar11) goto LAB_00668a10;
LAB_006689e0:
              pbVar12 = (byte *)((long)param_5 + 1);
            }
            else {
              param_5 = (ulong *)FUN_0066d3f8(param_6,param_5);
              uVar19 = *(ulong *)(*(long *)(*param_1 + 8) + lVar24 * 8);
              *(byte *)param_5 = bVar6;
              if (uVar11 < 0x80) goto LAB_006689e0;
LAB_00668a10:
              *(byte *)param_5 = bVar6 | 0x80;
              *(byte *)((long)param_5 + 1) = (byte)(uVar11 >> 7);
              pbVar12 = (byte *)((long)param_5 + 2);
              if (0x3fff < uVar11) {
                uVar20 = (ulong)(param_4 >> 4 & 0x1ffffff);
                pbVar26 = pbVar12;
                do {
                  uVar5 = uVar20 >> 0xe;
                  uVar20 = uVar20 >> 7;
                  pbVar26[-1] = pbVar26[-1] | 0x80;
                  pbVar12 = pbVar26 + 1;
                  *pbVar26 = (byte)uVar20;
                  pbVar26 = pbVar12;
                } while (uVar5 != 0);
              }
            }
            *pbVar12 = (byte)uVar19;
            if (uVar19 < 0x80) {
              param_5 = (ulong *)(pbVar12 + 1);
            }
            else {
              uVar20 = uVar19 >> 7;
              param_5 = (ulong *)(pbVar12 + 2);
              *pbVar12 = (byte)uVar19 | 0x80;
              pbVar12[1] = (byte)uVar20;
              puVar9 = param_5;
              if (0x3fff < uVar19) {
                do {
                  uVar19 = uVar20 >> 0xe;
                  uVar20 = uVar20 >> 7;
                  *(byte *)((long)puVar9 + -1) = *(byte *)((long)puVar9 + -1) | 0x80;
                  param_5 = (ulong *)((long)puVar9 + 1);
                  *(byte *)puVar9 = (byte)uVar20;
                  puVar9 = param_5;
                } while (uVar19 != 0);
              }
            }
            piVar13 = (int *)*param_1;
            lVar24 = lVar24 + 1;
          } while (lVar24 < *piVar13);
        }
        break;
      case 4:
        piVar13 = (int *)*param_1;
        if (0 < *piVar13) {
          uVar11 = param_4 << 3;
          lVar24 = 0;
          bVar6 = (byte)uVar11;
          do {
            if (param_5 < (ulong *)*param_6) {
              uVar19 = *(ulong *)(*(long *)(piVar13 + 2) + lVar24 * 8);
              *(byte *)param_5 = bVar6;
              if (0x7f < uVar11) goto LAB_00668bec;
LAB_00668bbc:
              pbVar12 = (byte *)((long)param_5 + 1);
            }
            else {
              param_5 = (ulong *)FUN_0066d3f8(param_6,param_5);
              uVar19 = *(ulong *)(*(long *)(*param_1 + 8) + lVar24 * 8);
              *(byte *)param_5 = bVar6;
              if (uVar11 < 0x80) goto LAB_00668bbc;
LAB_00668bec:
              *(byte *)param_5 = bVar6 | 0x80;
              *(byte *)((long)param_5 + 1) = (byte)(uVar11 >> 7);
              pbVar12 = (byte *)((long)param_5 + 2);
              if (0x3fff < uVar11) {
                uVar20 = (ulong)(param_4 >> 4 & 0x1ffffff);
                pbVar26 = pbVar12;
                do {
                  uVar5 = uVar20 >> 0xe;
                  uVar20 = uVar20 >> 7;
                  pbVar26[-1] = pbVar26[-1] | 0x80;
                  pbVar12 = pbVar26 + 1;
                  *pbVar26 = (byte)uVar20;
                  pbVar26 = pbVar12;
                } while (uVar5 != 0);
              }
            }
            *pbVar12 = (byte)uVar19;
            if (uVar19 < 0x80) {
              param_5 = (ulong *)(pbVar12 + 1);
            }
            else {
              uVar20 = uVar19 >> 7;
              param_5 = (ulong *)(pbVar12 + 2);
              *pbVar12 = (byte)uVar19 | 0x80;
              pbVar12[1] = (byte)uVar20;
              puVar9 = param_5;
              if (0x3fff < uVar19) {
                do {
                  uVar19 = uVar20 >> 0xe;
                  uVar20 = uVar20 >> 7;
                  *(byte *)((long)puVar9 + -1) = *(byte *)((long)puVar9 + -1) | 0x80;
                  param_5 = (ulong *)((long)puVar9 + 1);
                  *(byte *)puVar9 = (byte)uVar20;
                  puVar9 = param_5;
                } while (uVar19 != 0);
              }
            }
            piVar13 = (int *)*param_1;
            lVar24 = lVar24 + 1;
          } while (lVar24 < *piVar13);
        }
        break;
      case 5:
        piVar13 = (int *)*param_1;
        if (0 < *piVar13) {
          uVar11 = param_4 << 3;
          lVar24 = 0;
          bVar6 = (byte)uVar11;
          do {
            if (param_5 < (ulong *)*param_6) {
              uVar19 = (ulong)*(int *)(*(long *)(piVar13 + 2) + lVar24 * 4);
              *(byte *)param_5 = bVar6;
              if (0x7f < uVar11) goto LAB_00668788;
LAB_00668758:
              pbVar12 = (byte *)((long)param_5 + 1);
            }
            else {
              param_5 = (ulong *)FUN_0066d3f8(param_6,param_5);
              uVar19 = (ulong)*(int *)(*(long *)(*param_1 + 8) + lVar24 * 4);
              *(byte *)param_5 = bVar6;
              if (uVar11 < 0x80) goto LAB_00668758;
LAB_00668788:
              *(byte *)param_5 = bVar6 | 0x80;
              *(byte *)((long)param_5 + 1) = (byte)(uVar11 >> 7);
              pbVar12 = (byte *)((long)param_5 + 2);
              if (0x3fff < uVar11) {
                uVar20 = (ulong)(param_4 >> 4 & 0x1ffffff);
                pbVar26 = pbVar12;
                do {
                  uVar5 = uVar20 >> 0xe;
                  uVar20 = uVar20 >> 7;
                  pbVar26[-1] = pbVar26[-1] | 0x80;
                  pbVar12 = pbVar26 + 1;
                  *pbVar26 = (byte)uVar20;
                  pbVar26 = pbVar12;
                } while (uVar5 != 0);
              }
            }
            *pbVar12 = (byte)uVar19;
            if ((uint)uVar19 < 0x80) {
              param_5 = (ulong *)(pbVar12 + 1);
            }
            else {
              uVar20 = uVar19 >> 7;
              param_5 = (ulong *)(pbVar12 + 2);
              *pbVar12 = (byte)uVar19 | 0x80;
              pbVar12[1] = (byte)uVar20;
              puVar9 = param_5;
              if (0x3fff < (uint)uVar19) {
                do {
                  uVar19 = uVar20 >> 0xe;
                  uVar20 = uVar20 >> 7;
                  *(byte *)((long)puVar9 + -1) = *(byte *)((long)puVar9 + -1) | 0x80;
                  param_5 = (ulong *)((long)puVar9 + 1);
                  *(byte *)puVar9 = (byte)uVar20;
                  puVar9 = param_5;
                } while (uVar19 != 0);
              }
            }
            piVar13 = (int *)*param_1;
            lVar24 = lVar24 + 1;
          } while (lVar24 < *piVar13);
        }
        break;
      case 6:
        piVar13 = (int *)*param_1;
        if (0 < *piVar13) {
          lVar24 = 0;
          uVar11 = param_4 << 3 | 1;
          do {
            if (param_5 < (ulong *)*param_6) {
              uVar8 = *(undefined8 *)(*(long *)(piVar13 + 2) + lVar24 * 8);
              *(byte *)param_5 = (byte)uVar11;
              if (uVar11 < 0x80) goto LAB_00668f4c;
LAB_00668f88:
              *(byte *)param_5 = (byte)(param_4 << 3) | 0x81;
              *(byte *)((long)param_5 + 1) = (byte)((param_4 << 3) >> 7);
              pbVar12 = (byte *)((long)param_5 + 2);
              if (0x3fff < uVar11) {
                uVar19 = (ulong)(param_4 >> 4 & 0x1ffffff);
                pbVar26 = pbVar12;
                do {
                  uVar20 = uVar19 >> 0xe;
                  uVar19 = uVar19 >> 7;
                  pbVar26[-1] = pbVar26[-1] | 0x80;
                  pbVar12 = pbVar26 + 1;
                  *pbVar26 = (byte)uVar19;
                  pbVar26 = pbVar12;
                } while (uVar20 != 0);
              }
            }
            else {
              param_5 = (ulong *)FUN_0066d3f8(param_6,param_5);
              uVar8 = *(undefined8 *)(*(long *)(*param_1 + 8) + lVar24 * 8);
              *(byte *)param_5 = (byte)uVar11;
              if (0x7f < uVar11) goto LAB_00668f88;
LAB_00668f4c:
              pbVar12 = (byte *)((long)param_5 + 1);
            }
            param_5 = (ulong *)(pbVar12 + 8);
            *(undefined8 *)pbVar12 = uVar8;
            lVar24 = lVar24 + 1;
            piVar13 = (int *)*param_1;
          } while (lVar24 < *piVar13);
        }
        break;
      case 7:
        piVar13 = (int *)*param_1;
        if (0 < *piVar13) {
          uVar11 = param_4 << 3 | 5;
          lVar24 = 0;
          do {
            if (param_5 < (ulong *)*param_6) {
              uVar7 = *(undefined4 *)(*(long *)(piVar13 + 2) + lVar24 * 4);
              *(byte *)param_5 = (byte)uVar11;
              if (uVar11 < 0x80) goto LAB_0066912c;
LAB_00669168:
              *(byte *)param_5 = (byte)(param_4 << 3) | 0x85;
              *(byte *)((long)param_5 + 1) = (byte)((param_4 << 3) >> 7);
              pbVar12 = (byte *)((long)param_5 + 2);
              if (0x3fff < uVar11) {
                uVar19 = (ulong)(param_4 >> 4 & 0x1ffffff);
                pbVar26 = pbVar12;
                do {
                  uVar20 = uVar19 >> 0xe;
                  uVar19 = uVar19 >> 7;
                  pbVar26[-1] = pbVar26[-1] | 0x80;
                  pbVar12 = pbVar26 + 1;
                  *pbVar26 = (byte)uVar19;
                  pbVar26 = pbVar12;
                } while (uVar20 != 0);
              }
            }
            else {
              param_5 = (ulong *)FUN_0066d3f8(param_6,param_5);
              uVar7 = *(undefined4 *)(*(long *)(*param_1 + 8) + lVar24 * 4);
              *(byte *)param_5 = (byte)uVar11;
              if (0x7f < uVar11) goto LAB_00669168;
LAB_0066912c:
              pbVar12 = (byte *)((long)param_5 + 1);
            }
            param_5 = (ulong *)(pbVar12 + 4);
            *(undefined4 *)pbVar12 = uVar7;
            lVar24 = lVar24 + 1;
            piVar13 = (int *)*param_1;
          } while (lVar24 < *piVar13);
        }
        break;
      case 8:
        piVar13 = (int *)*param_1;
        if (0 < *piVar13) {
          uVar11 = param_4 << 3;
          lVar24 = 0;
          bVar6 = (byte)uVar11;
          do {
            if (param_5 < (ulong *)*param_6) {
              bVar10 = *(byte *)(*(long *)(piVar13 + 2) + lVar24);
              *(byte *)param_5 = bVar6;
              if (uVar11 < 0x80) goto LAB_00668c94;
LAB_00668cd0:
              *(byte *)param_5 = bVar6 | 0x80;
              *(byte *)((long)param_5 + 1) = (byte)(uVar11 >> 7);
              pbVar12 = (byte *)((long)param_5 + 2);
              if (0x3fff < uVar11) {
                uVar19 = (ulong)(param_4 >> 4 & 0x1ffffff);
                pbVar26 = pbVar12;
                do {
                  uVar20 = uVar19 >> 0xe;
                  uVar19 = uVar19 >> 7;
                  pbVar26[-1] = pbVar26[-1] | 0x80;
                  pbVar12 = pbVar26 + 1;
                  *pbVar26 = (byte)uVar19;
                  pbVar26 = pbVar12;
                } while (uVar20 != 0);
              }
            }
            else {
              param_5 = (ulong *)FUN_0066d3f8(param_6,param_5);
              bVar10 = *(byte *)(*(long *)(*param_1 + 8) + lVar24);
              *(byte *)param_5 = bVar6;
              if (0x7f < uVar11) goto LAB_00668cd0;
LAB_00668c94:
              pbVar12 = (byte *)((long)param_5 + 1);
            }
            param_5 = (ulong *)(pbVar12 + 1);
            *pbVar12 = bVar10;
            lVar24 = lVar24 + 1;
            piVar13 = (int *)*param_1;
          } while (lVar24 < *piVar13);
        }
        break;
      case 9:
        uVar19 = *param_1;
        if (0 < *(int *)(uVar19 + 8)) {
          uVar15 = param_4 << 3;
          uVar11 = param_4 << 3 | 2;
          lVar24 = -3;
          if (uVar15 < 0x80) {
            lVar24 = -2;
          }
          lVar14 = -6;
          if ((param_4 >> 0x19 & 0xf) == 0) {
            lVar14 = -5;
          }
          lVar27 = 0;
          lVar1 = -4;
          if (0x1fffff < uVar15) {
            lVar1 = lVar14;
          }
          if (0x3fff < uVar15) {
            lVar24 = lVar1;
          }
          do {
            while( true ) {
              if ((ulong *)*param_6 <= param_5) {
                param_5 = (ulong *)FUN_0066d3f8(param_6,param_5);
                uVar19 = *param_1;
              }
              pbVar12 = *(byte **)(*(long *)(uVar19 + 0x10) + lVar27 * 8 + 8);
              sVar2 = (ulong)(*pbVar12 >> 1);
              if ((*pbVar12 & 1) != 0) {
                sVar2 = *(size_t *)(pbVar12 + 8);
              }
              if ((0x7f < (long)sVar2) || (*param_6 + (lVar24 - (long)param_5) + 0x10 < (long)sVar2)
                 ) break;
              *(byte *)param_5 = (byte)uVar11;
              if (uVar11 < 0x80) {
                pbVar26 = (byte *)((long)param_5 + 1);
              }
              else {
                pbVar18 = (byte *)((long)param_5 + 2);
                *(byte *)param_5 = (byte)uVar15 | 0x82;
                *(byte *)((long)param_5 + 1) = (byte)(uVar15 >> 7);
                pbVar26 = pbVar18;
                uVar17 = param_4 >> 4 & 0x1ffffff;
                if (0x3fff < uVar11) {
                  do {
                    uVar3 = uVar17 >> 0xe;
                    pbVar18[-1] = pbVar18[-1] | 0x80;
                    pbVar26 = pbVar18 + 1;
                    *pbVar18 = (byte)(uVar17 >> 7);
                    pbVar18 = pbVar26;
                    uVar17 = uVar17 >> 7;
                  } while (uVar3 != 0);
                }
              }
              *pbVar26 = (byte)sVar2;
              pbVar18 = *(byte **)(pbVar12 + 0x10);
              if ((*pbVar12 & 1) == 0) {
                pbVar18 = pbVar12 + 1;
              }
              memcpy(pbVar26 + 1,pbVar18,sVar2);
              param_5 = (ulong *)(pbVar26 + 1 + sVar2);
              uVar19 = *param_1;
              lVar27 = lVar27 + 1;
              if (*(int *)(uVar19 + 8) <= lVar27) goto switchD_00669a40_default;
            }
            param_5 = (ulong *)FUN_0066d8d0(param_6,param_4,pbVar12,param_5);
            uVar19 = *param_1;
            lVar27 = lVar27 + 1;
          } while (lVar27 < *(int *)(uVar19 + 8));
        }
        break;
      case 10:
        uVar19 = *param_1;
        if (0 < *(int *)(uVar19 + 8)) {
          lVar24 = 0;
          do {
            if ((ulong *)*param_6 <= param_5) {
              param_5 = (ulong *)FUN_0066d3f8(param_6,param_5);
              uVar19 = *param_1;
            }
            param_5 = (ulong *)FUN_00678bd4(param_4,*(undefined8 *)
                                                     (*(long *)(uVar19 + 0x10) + lVar24 * 8 + 8),
                                            param_5,param_6);
            uVar19 = *param_1;
            lVar24 = lVar24 + 1;
          } while (lVar24 < *(int *)(uVar19 + 8));
        }
        break;
      case 0xb:
        uVar19 = *param_1;
        if (0 < *(int *)(uVar19 + 8)) {
          lVar24 = 0;
          do {
            plVar25 = *(long **)(*(long *)(uVar19 + 0x10) + lVar24 * 8 + 8);
            uVar7 = (**(code **)(*plVar25 + 0x48))(plVar25);
            param_5 = (ulong *)FUN_00678d18(param_4,plVar25,uVar7,param_5,param_6);
            uVar19 = *param_1;
            lVar24 = lVar24 + 1;
          } while (lVar24 < *(int *)(uVar19 + 8));
        }
        break;
      case 0xc:
        uVar19 = *param_1;
        if (0 < *(int *)(uVar19 + 8)) {
          uVar15 = param_4 << 3;
          uVar11 = param_4 << 3 | 2;
          lVar24 = -3;
          if (uVar15 < 0x80) {
            lVar24 = -2;
          }
          lVar14 = -6;
          if ((param_4 >> 0x19 & 0xf) == 0) {
            lVar14 = -5;
          }
          lVar27 = 0;
          lVar1 = -4;
          if (0x1fffff < uVar15) {
            lVar1 = lVar14;
          }
          if (0x3fff < uVar15) {
            lVar24 = lVar1;
          }
          do {
            while( true ) {
              if ((ulong *)*param_6 <= param_5) {
                param_5 = (ulong *)FUN_0066d3f8(param_6,param_5);
                uVar19 = *param_1;
              }
              pbVar12 = *(byte **)(*(long *)(uVar19 + 0x10) + lVar27 * 8 + 8);
              sVar2 = (ulong)(*pbVar12 >> 1);
              if ((*pbVar12 & 1) != 0) {
                sVar2 = *(size_t *)(pbVar12 + 8);
              }
              if ((0x7f < (long)sVar2) || (*param_6 + (lVar24 - (long)param_5) + 0x10 < (long)sVar2)
                 ) break;
              *(byte *)param_5 = (byte)uVar11;
              if (uVar11 < 0x80) {
                pbVar26 = (byte *)((long)param_5 + 1);
              }
              else {
                pbVar18 = (byte *)((long)param_5 + 2);
                *(byte *)param_5 = (byte)uVar15 | 0x82;
                *(byte *)((long)param_5 + 1) = (byte)(uVar15 >> 7);
                pbVar26 = pbVar18;
                uVar17 = param_4 >> 4 & 0x1ffffff;
                if (0x3fff < uVar11) {
                  do {
                    uVar3 = uVar17 >> 0xe;
                    pbVar18[-1] = pbVar18[-1] | 0x80;
                    pbVar26 = pbVar18 + 1;
                    *pbVar18 = (byte)(uVar17 >> 7);
                    pbVar18 = pbVar26;
                    uVar17 = uVar17 >> 7;
                  } while (uVar3 != 0);
                }
              }
              *pbVar26 = (byte)sVar2;
              pbVar18 = *(byte **)(pbVar12 + 0x10);
              if ((*pbVar12 & 1) == 0) {
                pbVar18 = pbVar12 + 1;
              }
              memcpy(pbVar26 + 1,pbVar18,sVar2);
              param_5 = (ulong *)(pbVar26 + 1 + sVar2);
              uVar19 = *param_1;
              lVar27 = lVar27 + 1;
              if (*(int *)(uVar19 + 8) <= lVar27) goto switchD_00669a40_default;
            }
            param_5 = (ulong *)FUN_0066d8d0(param_6,param_4,pbVar12,param_5);
            uVar19 = *param_1;
            lVar27 = lVar27 + 1;
          } while (lVar27 < *(int *)(uVar19 + 8));
        }
        break;
      case 0xd:
        piVar13 = (int *)*param_1;
        if (0 < *piVar13) {
          uVar11 = param_4 << 3;
          lVar24 = 0;
          bVar6 = (byte)uVar11;
          do {
            if (param_5 < (ulong *)*param_6) {
              uVar15 = *(uint *)(*(long *)(piVar13 + 2) + lVar24 * 4);
              *(byte *)param_5 = bVar6;
              if (0x7f < uVar11) goto LAB_00668894;
LAB_00668864:
              pbVar12 = (byte *)((long)param_5 + 1);
            }
            else {
              param_5 = (ulong *)FUN_0066d3f8(param_6,param_5);
              uVar15 = *(uint *)(*(long *)(*param_1 + 8) + lVar24 * 4);
              *(byte *)param_5 = bVar6;
              if (uVar11 < 0x80) goto LAB_00668864;
LAB_00668894:
              *(byte *)param_5 = bVar6 | 0x80;
              *(byte *)((long)param_5 + 1) = (byte)(uVar11 >> 7);
              pbVar12 = (byte *)((long)param_5 + 2);
              if (0x3fff < uVar11) {
                uVar19 = (ulong)(param_4 >> 4 & 0x1ffffff);
                pbVar26 = pbVar12;
                do {
                  uVar20 = uVar19 >> 0xe;
                  uVar19 = uVar19 >> 7;
                  pbVar26[-1] = pbVar26[-1] | 0x80;
                  pbVar12 = pbVar26 + 1;
                  *pbVar26 = (byte)uVar19;
                  pbVar26 = pbVar12;
                } while (uVar20 != 0);
              }
            }
            *pbVar12 = (byte)uVar15;
            if (uVar15 < 0x80) {
              param_5 = (ulong *)(pbVar12 + 1);
            }
            else {
              uVar17 = uVar15 >> 7;
              param_5 = (ulong *)(pbVar12 + 2);
              *pbVar12 = (byte)uVar15 | 0x80;
              pbVar12[1] = (byte)uVar17;
              puVar9 = param_5;
              if (0x3fff < uVar15) {
                do {
                  uVar15 = uVar17 >> 0xe;
                  uVar17 = uVar17 >> 7;
                  *(byte *)((long)puVar9 + -1) = *(byte *)((long)puVar9 + -1) | 0x80;
                  param_5 = (ulong *)((long)puVar9 + 1);
                  *(byte *)puVar9 = (byte)uVar17;
                  puVar9 = param_5;
                } while (uVar15 != 0);
              }
            }
            piVar13 = (int *)*param_1;
            lVar24 = lVar24 + 1;
          } while (lVar24 < *piVar13);
        }
        break;
      case 0xe:
        piVar13 = (int *)*param_1;
        if (0 < *piVar13) {
          uVar11 = param_4 << 3;
          lVar24 = 0;
          bVar6 = (byte)uVar11;
          do {
            if (param_5 < (ulong *)*param_6) {
              uVar19 = (ulong)*(int *)(*(long *)(piVar13 + 2) + lVar24 * 4);
              *(byte *)param_5 = bVar6;
              if (0x7f < uVar11) goto LAB_00669078;
LAB_00669048:
              pbVar12 = (byte *)((long)param_5 + 1);
            }
            else {
              param_5 = (ulong *)FUN_0066d3f8(param_6,param_5);
              uVar19 = (ulong)*(int *)(*(long *)(*param_1 + 8) + lVar24 * 4);
              *(byte *)param_5 = bVar6;
              if (uVar11 < 0x80) goto LAB_00669048;
LAB_00669078:
              *(byte *)param_5 = bVar6 | 0x80;
              *(byte *)((long)param_5 + 1) = (byte)(uVar11 >> 7);
              pbVar12 = (byte *)((long)param_5 + 2);
              if (0x3fff < uVar11) {
                uVar20 = (ulong)(param_4 >> 4 & 0x1ffffff);
                pbVar26 = pbVar12;
                do {
                  uVar5 = uVar20 >> 0xe;
                  uVar20 = uVar20 >> 7;
                  pbVar26[-1] = pbVar26[-1] | 0x80;
                  pbVar12 = pbVar26 + 1;
                  *pbVar26 = (byte)uVar20;
                  pbVar26 = pbVar12;
                } while (uVar5 != 0);
              }
            }
            *pbVar12 = (byte)uVar19;
            if ((uint)uVar19 < 0x80) {
              param_5 = (ulong *)(pbVar12 + 1);
            }
            else {
              uVar20 = uVar19 >> 7;
              param_5 = (ulong *)(pbVar12 + 2);
              *pbVar12 = (byte)uVar19 | 0x80;
              pbVar12[1] = (byte)uVar20;
              puVar9 = param_5;
              if (0x3fff < (uint)uVar19) {
                do {
                  uVar19 = uVar20 >> 0xe;
                  uVar20 = uVar20 >> 7;
                  *(byte *)((long)puVar9 + -1) = *(byte *)((long)puVar9 + -1) | 0x80;
                  param_5 = (ulong *)((long)puVar9 + 1);
                  *(byte *)puVar9 = (byte)uVar20;
                  puVar9 = param_5;
                } while (uVar19 != 0);
              }
            }
            piVar13 = (int *)*param_1;
            lVar24 = lVar24 + 1;
          } while (lVar24 < *piVar13);
        }
        break;
      case 0xf:
        piVar13 = (int *)*param_1;
        if (0 < *piVar13) {
          uVar11 = param_4 << 3 | 5;
          lVar24 = 0;
          do {
            if (param_5 < (ulong *)*param_6) {
              uVar7 = *(undefined4 *)(*(long *)(piVar13 + 2) + lVar24 * 4);
              *(byte *)param_5 = (byte)uVar11;
              if (uVar11 < 0x80) goto LAB_006684e0;
LAB_0066851c:
              *(byte *)param_5 = (byte)(param_4 << 3) | 0x85;
              *(byte *)((long)param_5 + 1) = (byte)((param_4 << 3) >> 7);
              pbVar12 = (byte *)((long)param_5 + 2);
              if (0x3fff < uVar11) {
                uVar19 = (ulong)(param_4 >> 4 & 0x1ffffff);
                pbVar26 = pbVar12;
                do {
                  uVar20 = uVar19 >> 0xe;
                  uVar19 = uVar19 >> 7;
                  pbVar26[-1] = pbVar26[-1] | 0x80;
                  pbVar12 = pbVar26 + 1;
                  *pbVar26 = (byte)uVar19;
                  pbVar26 = pbVar12;
                } while (uVar20 != 0);
              }
            }
            else {
              param_5 = (ulong *)FUN_0066d3f8(param_6,param_5);
              uVar7 = *(undefined4 *)(*(long *)(*param_1 + 8) + lVar24 * 4);
              *(byte *)param_5 = (byte)uVar11;
              if (0x7f < uVar11) goto LAB_0066851c;
LAB_006684e0:
              pbVar12 = (byte *)((long)param_5 + 1);
            }
            param_5 = (ulong *)(pbVar12 + 4);
            *(undefined4 *)pbVar12 = uVar7;
            lVar24 = lVar24 + 1;
            piVar13 = (int *)*param_1;
          } while (lVar24 < *piVar13);
        }
        break;
      case 0x10:
        piVar13 = (int *)*param_1;
        if (0 < *piVar13) {
          lVar24 = 0;
          uVar11 = param_4 << 3 | 1;
          do {
            if (param_5 < (ulong *)*param_6) {
              uVar8 = *(undefined8 *)(*(long *)(piVar13 + 2) + lVar24 * 8);
              *(byte *)param_5 = (byte)uVar11;
              if (uVar11 < 0x80) goto LAB_00668ac0;
LAB_00668afc:
              *(byte *)param_5 = (byte)(param_4 << 3) | 0x81;
              *(byte *)((long)param_5 + 1) = (byte)((param_4 << 3) >> 7);
              pbVar12 = (byte *)((long)param_5 + 2);
              if (0x3fff < uVar11) {
                uVar19 = (ulong)(param_4 >> 4 & 0x1ffffff);
                pbVar26 = pbVar12;
                do {
                  uVar20 = uVar19 >> 0xe;
                  uVar19 = uVar19 >> 7;
                  pbVar26[-1] = pbVar26[-1] | 0x80;
                  pbVar12 = pbVar26 + 1;
                  *pbVar26 = (byte)uVar19;
                  pbVar26 = pbVar12;
                } while (uVar20 != 0);
              }
            }
            else {
              param_5 = (ulong *)FUN_0066d3f8(param_6,param_5);
              uVar8 = *(undefined8 *)(*(long *)(*param_1 + 8) + lVar24 * 8);
              *(byte *)param_5 = (byte)uVar11;
              if (0x7f < uVar11) goto LAB_00668afc;
LAB_00668ac0:
              pbVar12 = (byte *)((long)param_5 + 1);
            }
            param_5 = (ulong *)(pbVar12 + 8);
            *(undefined8 *)pbVar12 = uVar8;
            lVar24 = lVar24 + 1;
            piVar13 = (int *)*param_1;
          } while (lVar24 < *piVar13);
        }
        break;
      case 0x11:
        piVar13 = (int *)*param_1;
        if (0 < *piVar13) {
          uVar11 = param_4 << 3;
          lVar24 = 0;
          bVar6 = (byte)uVar11;
          do {
            if (param_5 < (ulong *)*param_6) {
              iVar16 = *(int *)(*(long *)(piVar13 + 2) + lVar24 * 4);
              *(byte *)param_5 = bVar6;
              if (0x7f < uVar11) goto LAB_00668424;
LAB_006683f4:
              pbVar12 = (byte *)((long)param_5 + 1);
            }
            else {
              param_5 = (ulong *)FUN_0066d3f8(param_6,param_5);
              iVar16 = *(int *)(*(long *)(*param_1 + 8) + lVar24 * 4);
              *(byte *)param_5 = bVar6;
              if (uVar11 < 0x80) goto LAB_006683f4;
LAB_00668424:
              *(byte *)param_5 = bVar6 | 0x80;
              *(byte *)((long)param_5 + 1) = (byte)(uVar11 >> 7);
              pbVar12 = (byte *)((long)param_5 + 2);
              if (0x3fff < uVar11) {
                uVar19 = (ulong)(param_4 >> 4 & 0x1ffffff);
                pbVar26 = pbVar12;
                do {
                  uVar20 = uVar19 >> 0xe;
                  uVar19 = uVar19 >> 7;
                  pbVar26[-1] = pbVar26[-1] | 0x80;
                  pbVar12 = pbVar26 + 1;
                  *pbVar26 = (byte)uVar19;
                  pbVar26 = pbVar12;
                } while (uVar20 != 0);
              }
            }
            uVar15 = iVar16 << 1 ^ iVar16 >> 0x1f;
            *pbVar12 = (byte)uVar15;
            if (uVar15 < 0x80) {
              param_5 = (ulong *)(pbVar12 + 1);
            }
            else {
              uVar17 = uVar15 >> 7;
              param_5 = (ulong *)(pbVar12 + 2);
              *pbVar12 = (byte)uVar15 | 0x80;
              pbVar12[1] = (byte)uVar17;
              puVar9 = param_5;
              if (0x3fff < uVar15) {
                do {
                  uVar15 = uVar17 >> 0xe;
                  uVar17 = uVar17 >> 7;
                  *(byte *)((long)puVar9 + -1) = *(byte *)((long)puVar9 + -1) | 0x80;
                  param_5 = (ulong *)((long)puVar9 + 1);
                  *(byte *)puVar9 = (byte)uVar17;
                  puVar9 = param_5;
                } while (uVar15 != 0);
              }
            }
            piVar13 = (int *)*param_1;
            lVar24 = lVar24 + 1;
          } while (lVar24 < *piVar13);
        }
        break;
      case 0x12:
        piVar13 = (int *)*param_1;
        if (0 < *piVar13) {
          uVar11 = param_4 << 3;
          lVar24 = 0;
          bVar6 = (byte)uVar11;
          do {
            if (param_5 < (ulong *)*param_6) {
              lVar14 = *(long *)(*(long *)(piVar13 + 2) + lVar24 * 8);
              *(byte *)param_5 = bVar6;
              if (0x7f < uVar11) goto LAB_00668e94;
LAB_00668e64:
              pbVar12 = (byte *)((long)param_5 + 1);
            }
            else {
              param_5 = (ulong *)FUN_0066d3f8(param_6,param_5);
              lVar14 = *(long *)(*(long *)(*param_1 + 8) + lVar24 * 8);
              *(byte *)param_5 = bVar6;
              if (uVar11 < 0x80) goto LAB_00668e64;
LAB_00668e94:
              *(byte *)param_5 = bVar6 | 0x80;
              *(byte *)((long)param_5 + 1) = (byte)(uVar11 >> 7);
              pbVar12 = (byte *)((long)param_5 + 2);
              if (0x3fff < uVar11) {
                uVar19 = (ulong)(param_4 >> 4 & 0x1ffffff);
                pbVar26 = pbVar12;
                do {
                  uVar20 = uVar19 >> 0xe;
                  uVar19 = uVar19 >> 7;
                  pbVar26[-1] = pbVar26[-1] | 0x80;
                  pbVar12 = pbVar26 + 1;
                  *pbVar26 = (byte)uVar19;
                  pbVar26 = pbVar12;
                } while (uVar20 != 0);
              }
            }
            uVar19 = lVar14 << 1 ^ lVar14 >> 0x3f;
            *pbVar12 = (byte)uVar19;
            if (uVar19 < 0x80) {
              param_5 = (ulong *)(pbVar12 + 1);
            }
            else {
              uVar20 = uVar19 >> 7;
              param_5 = (ulong *)(pbVar12 + 2);
              *pbVar12 = (byte)uVar19 | 0x80;
              pbVar12[1] = (byte)uVar20;
              puVar9 = param_5;
              if (0x3fff < uVar19) {
                do {
                  uVar19 = uVar20 >> 0xe;
                  uVar20 = uVar20 >> 7;
                  *(byte *)((long)puVar9 + -1) = *(byte *)((long)puVar9 + -1) | 0x80;
                  param_5 = (ulong *)((long)puVar9 + 1);
                  *(byte *)puVar9 = (byte)uVar20;
                  puVar9 = param_5;
                } while (uVar19 != 0);
              }
            }
            piVar13 = (int *)*param_1;
            lVar24 = lVar24 + 1;
          } while (lVar24 < *piVar13);
        }
      }
    }
    else if (*(uint *)((long)param_1 + 0xc) != 0) {
      if (param_5 < (ulong *)*param_6) {
        uVar11 = param_4 << 3 | 2;
        *(byte *)param_5 = (byte)uVar11;
        if (0x7f < uVar11) goto LAB_00669990;
LAB_00668204:
        pbVar12 = (byte *)((long)param_5 + 1);
      }
      else {
        param_5 = (ulong *)FUN_0066d3f8(param_6,param_5);
        uVar11 = param_4 << 3 | 2;
        *(byte *)param_5 = (byte)uVar11;
        if (uVar11 < 0x80) goto LAB_00668204;
LAB_00669990:
        pbVar12 = (byte *)((long)param_5 + 2);
        *(byte *)param_5 = (byte)uVar11 | 0x80;
        uVar15 = (param_4 << 3) >> 7;
        *(byte *)((long)param_5 + 1) = (byte)uVar15;
        pbVar26 = pbVar12;
        if (0x3fff < uVar11) {
          do {
            uVar11 = uVar15 >> 0xe;
            uVar15 = uVar15 >> 7;
            pbVar26[-1] = pbVar26[-1] | 0x80;
            pbVar12 = pbVar26 + 1;
            *pbVar26 = (byte)uVar15;
            pbVar26 = pbVar12;
          } while (uVar11 != 0);
        }
      }
      uVar11 = *(uint *)((long)param_1 + 0xc);
      *pbVar12 = (byte)uVar11;
      if (uVar11 < 0x80) {
        param_5 = (ulong *)(pbVar12 + 1);
      }
      else {
        uVar19 = (ulong)(long)(int)uVar11 >> 7;
        param_5 = (ulong *)(pbVar12 + 2);
        *pbVar12 = (byte)uVar11 | 0x80;
        pbVar12[1] = (byte)uVar19;
        puVar9 = param_5;
        if (0x3fff < uVar11) {
          do {
            uVar20 = uVar19 >> 0xe;
            uVar19 = uVar19 >> 7;
            *(byte *)((long)puVar9 + -1) = *(byte *)((long)puVar9 + -1) | 0x80;
            param_5 = (ulong *)((long)puVar9 + 1);
            *(byte *)puVar9 = (byte)uVar19;
            puVar9 = param_5;
          } while (uVar20 != 0);
        }
      }
      switch((byte)param_1[1]) {
      case 1:
        piVar13 = (int *)*param_1;
        if (0 < *piVar13) {
          lVar24 = 0;
          puVar9 = param_5;
          do {
            if ((ulong *)*param_6 <= puVar9) {
              puVar9 = (ulong *)FUN_0066d3f8(param_6,puVar9);
              piVar13 = (int *)*param_1;
            }
            lVar14 = lVar24 * 8;
            lVar24 = lVar24 + 1;
            param_5 = puVar9 + 1;
            *puVar9 = *(ulong *)(*(long *)(piVar13 + 2) + lVar14);
            piVar13 = (int *)*param_1;
            puVar9 = param_5;
          } while (lVar24 < *piVar13);
        }
        break;
      case 2:
        piVar13 = (int *)*param_1;
        if (0 < *piVar13) {
          lVar24 = 0;
          puVar9 = param_5;
          do {
            if ((ulong *)*param_6 <= puVar9) {
              puVar9 = (ulong *)FUN_0066d3f8(param_6,puVar9);
              piVar13 = (int *)*param_1;
            }
            lVar14 = lVar24 * 4;
            lVar24 = lVar24 + 1;
            param_5 = (ulong *)((long)puVar9 + 4);
            *(uint *)puVar9 = *(uint *)(*(long *)(piVar13 + 2) + lVar14);
            piVar13 = (int *)*param_1;
            puVar9 = param_5;
          } while (lVar24 < *piVar13);
        }
        break;
      case 3:
        piVar13 = (int *)*param_1;
        if (0 < *piVar13) {
          lVar24 = 0;
          do {
            if (param_5 < (ulong *)*param_6) {
              uVar19 = *(ulong *)(*(long *)(piVar13 + 2) + lVar24 * 8);
              *(byte *)param_5 = (byte)uVar19;
              if (uVar19 < 0x80) goto LAB_00669d14;
LAB_00669d4c:
              uVar20 = uVar19 >> 7;
              *(byte *)param_5 = (byte)uVar19 | 0x80;
              *(byte *)((long)param_5 + 1) = (byte)uVar20;
              param_5 = (ulong *)((long)param_5 + 2);
              puVar9 = param_5;
              if (0x3fff < uVar19) {
                do {
                  uVar19 = uVar20 >> 0xe;
                  uVar20 = uVar20 >> 7;
                  *(byte *)((long)puVar9 + -1) = *(byte *)((long)puVar9 + -1) | 0x80;
                  param_5 = (ulong *)((long)puVar9 + 1);
                  *(byte *)puVar9 = (byte)uVar20;
                  puVar9 = param_5;
                } while (uVar19 != 0);
              }
            }
            else {
              param_5 = (ulong *)FUN_0066d3f8(param_6,param_5);
              uVar19 = *(ulong *)(*(long *)(*param_1 + 8) + lVar24 * 8);
              *(byte *)param_5 = (byte)uVar19;
              if (0x7f < uVar19) goto LAB_00669d4c;
LAB_00669d14:
              param_5 = (ulong *)((long)param_5 + 1);
            }
            piVar13 = (int *)*param_1;
            lVar24 = lVar24 + 1;
          } while (lVar24 < *piVar13);
        }
        break;
      case 4:
        piVar13 = (int *)*param_1;
        if (0 < *piVar13) {
          lVar24 = 0;
          do {
            if (param_5 < (ulong *)*param_6) {
              uVar19 = *(ulong *)(*(long *)(piVar13 + 2) + lVar24 * 8);
              *(byte *)param_5 = (byte)uVar19;
              if (uVar19 < 0x80) goto LAB_00669e28;
LAB_00669e60:
              uVar20 = uVar19 >> 7;
              *(byte *)param_5 = (byte)uVar19 | 0x80;
              *(byte *)((long)param_5 + 1) = (byte)uVar20;
              param_5 = (ulong *)((long)param_5 + 2);
              puVar9 = param_5;
              if (0x3fff < uVar19) {
                do {
                  uVar19 = uVar20 >> 0xe;
                  uVar20 = uVar20 >> 7;
                  *(byte *)((long)puVar9 + -1) = *(byte *)((long)puVar9 + -1) | 0x80;
                  param_5 = (ulong *)((long)puVar9 + 1);
                  *(byte *)puVar9 = (byte)uVar20;
                  puVar9 = param_5;
                } while (uVar19 != 0);
              }
            }
            else {
              param_5 = (ulong *)FUN_0066d3f8(param_6,param_5);
              uVar19 = *(ulong *)(*(long *)(*param_1 + 8) + lVar24 * 8);
              *(byte *)param_5 = (byte)uVar19;
              if (0x7f < uVar19) goto LAB_00669e60;
LAB_00669e28:
              param_5 = (ulong *)((long)param_5 + 1);
            }
            piVar13 = (int *)*param_1;
            lVar24 = lVar24 + 1;
          } while (lVar24 < *piVar13);
        }
        break;
      case 5:
        piVar13 = (int *)*param_1;
        if (0 < *piVar13) {
          lVar24 = 0;
          do {
            if (param_5 < (ulong *)*param_6) {
              uVar11 = *(uint *)(*(long *)(piVar13 + 2) + lVar24 * 4);
              *(byte *)param_5 = (byte)uVar11;
              if (uVar11 < 0x80) goto LAB_00669ba4;
LAB_00669bdc:
              uVar19 = (ulong)(long)(int)uVar11 >> 7;
              *(byte *)param_5 = (byte)uVar11 | 0x80;
              *(byte *)((long)param_5 + 1) = (byte)uVar19;
              param_5 = (ulong *)((long)param_5 + 2);
              puVar9 = param_5;
              if (0x3fff < uVar11) {
                do {
                  uVar20 = uVar19 >> 0xe;
                  uVar19 = uVar19 >> 7;
                  *(byte *)((long)puVar9 + -1) = *(byte *)((long)puVar9 + -1) | 0x80;
                  param_5 = (ulong *)((long)puVar9 + 1);
                  *(byte *)puVar9 = (byte)uVar19;
                  puVar9 = param_5;
                } while (uVar20 != 0);
              }
            }
            else {
              param_5 = (ulong *)FUN_0066d3f8(param_6,param_5);
              uVar11 = *(uint *)(*(long *)(*param_1 + 8) + lVar24 * 4);
              *(byte *)param_5 = (byte)uVar11;
              if (0x7f < uVar11) goto LAB_00669bdc;
LAB_00669ba4:
              param_5 = (ulong *)((long)param_5 + 1);
            }
            piVar13 = (int *)*param_1;
            lVar24 = lVar24 + 1;
          } while (lVar24 < *piVar13);
        }
        break;
      case 6:
        piVar13 = (int *)*param_1;
        if (0 < *piVar13) {
          lVar24 = 0;
          puVar9 = param_5;
          do {
            if ((ulong *)*param_6 <= puVar9) {
              puVar9 = (ulong *)FUN_0066d3f8(param_6,puVar9);
              piVar13 = (int *)*param_1;
            }
            lVar14 = lVar24 * 8;
            lVar24 = lVar24 + 1;
            param_5 = puVar9 + 1;
            *puVar9 = *(ulong *)(*(long *)(piVar13 + 2) + lVar14);
            piVar13 = (int *)*param_1;
            puVar9 = param_5;
          } while (lVar24 < *piVar13);
        }
        break;
      case 7:
        piVar13 = (int *)*param_1;
        if (0 < *piVar13) {
          lVar24 = 0;
          puVar9 = param_5;
          do {
            if ((ulong *)*param_6 <= puVar9) {
              puVar9 = (ulong *)FUN_0066d3f8(param_6,puVar9);
              piVar13 = (int *)*param_1;
            }
            lVar14 = lVar24 * 4;
            lVar24 = lVar24 + 1;
            param_5 = (ulong *)((long)puVar9 + 4);
            *(uint *)puVar9 = *(uint *)(*(long *)(piVar13 + 2) + lVar14);
            piVar13 = (int *)*param_1;
            puVar9 = param_5;
          } while (lVar24 < *piVar13);
        }
        break;
      case 8:
        piVar13 = (int *)*param_1;
        if (0 < *piVar13) {
          lVar24 = 0;
          puVar9 = param_5;
          do {
            if ((ulong *)*param_6 <= puVar9) {
              puVar9 = (ulong *)FUN_0066d3f8(param_6,puVar9);
              piVar13 = (int *)*param_1;
            }
            pbVar12 = (byte *)(*(long *)(piVar13 + 2) + lVar24);
            lVar24 = lVar24 + 1;
            param_5 = (ulong *)((long)puVar9 + 1);
            *(byte *)puVar9 = *pbVar12;
            piVar13 = (int *)*param_1;
            puVar9 = param_5;
          } while (lVar24 < *piVar13);
        }
        break;
      case 9:
      case 10:
      case 0xb:
      case 0xc:
        FUN_00675e64(auStack_98,3,
                     "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/extension_set.cc"
                     ,0x6dd);
                    /* try { // try from 00669a5c to 00669a6f has its CatchHandler @ 0066a918 */
        uVar8 = FUN_00675a58(auStack_98,"Non-primitive types can\'t be packed.");
                    /* try { // try from 00669a70 to 00669a77 has its CatchHandler @ 0066a914 */
        FUN_00675ac0(&uStack_99,uVar8);
        FUN_00675e7c(auStack_98);
        break;
      case 0xd:
        piVar13 = (int *)*param_1;
        if (0 < *piVar13) {
          lVar24 = 0;
          do {
            if (param_5 < (ulong *)*param_6) {
              uVar11 = *(uint *)(*(long *)(piVar13 + 2) + lVar24 * 4);
              *(byte *)param_5 = (byte)uVar11;
              if (uVar11 < 0x80) goto LAB_00669c5c;
LAB_00669c94:
              uVar15 = uVar11 >> 7;
              *(byte *)param_5 = (byte)uVar11 | 0x80;
              *(byte *)((long)param_5 + 1) = (byte)uVar15;
              param_5 = (ulong *)((long)param_5 + 2);
              puVar9 = param_5;
              if (0x3fff < uVar11) {
                do {
                  uVar11 = uVar15 >> 0xe;
                  uVar15 = uVar15 >> 7;
                  *(byte *)((long)puVar9 + -1) = *(byte *)((long)puVar9 + -1) | 0x80;
                  param_5 = (ulong *)((long)puVar9 + 1);
                  *(byte *)puVar9 = (byte)uVar15;
                  puVar9 = param_5;
                } while (uVar11 != 0);
              }
            }
            else {
              param_5 = (ulong *)FUN_0066d3f8(param_6,param_5);
              uVar11 = *(uint *)(*(long *)(*param_1 + 8) + lVar24 * 4);
              *(byte *)param_5 = (byte)uVar11;
              if (0x7f < uVar11) goto LAB_00669c94;
LAB_00669c5c:
              param_5 = (ulong *)((long)param_5 + 1);
            }
            piVar13 = (int *)*param_1;
            lVar24 = lVar24 + 1;
          } while (lVar24 < *piVar13);
        }
        break;
      case 0xe:
        piVar13 = (int *)*param_1;
        if (0 < *piVar13) {
          lVar24 = 0;
          do {
            if (param_5 < (ulong *)*param_6) {
              uVar11 = *(uint *)(*(long *)(piVar13 + 2) + lVar24 * 4);
              *(byte *)param_5 = (byte)uVar11;
              if (uVar11 < 0x80) goto LAB_0066a0a0;
LAB_0066a0d8:
              uVar19 = (ulong)(long)(int)uVar11 >> 7;
              *(byte *)param_5 = (byte)uVar11 | 0x80;
              *(byte *)((long)param_5 + 1) = (byte)uVar19;
              param_5 = (ulong *)((long)param_5 + 2);
              puVar9 = param_5;
              if (0x3fff < uVar11) {
                do {
                  uVar20 = uVar19 >> 0xe;
                  uVar19 = uVar19 >> 7;
                  *(byte *)((long)puVar9 + -1) = *(byte *)((long)puVar9 + -1) | 0x80;
                  param_5 = (ulong *)((long)puVar9 + 1);
                  *(byte *)puVar9 = (byte)uVar19;
                  puVar9 = param_5;
                } while (uVar20 != 0);
              }
            }
            else {
              param_5 = (ulong *)FUN_0066d3f8(param_6,param_5);
              uVar11 = *(uint *)(*(long *)(*param_1 + 8) + lVar24 * 4);
              *(byte *)param_5 = (byte)uVar11;
              if (0x7f < uVar11) goto LAB_0066a0d8;
LAB_0066a0a0:
              param_5 = (ulong *)((long)param_5 + 1);
            }
            piVar13 = (int *)*param_1;
            lVar24 = lVar24 + 1;
          } while (lVar24 < *piVar13);
        }
        break;
      case 0xf:
        piVar13 = (int *)*param_1;
        if (0 < *piVar13) {
          lVar24 = 0;
          puVar9 = param_5;
          do {
            if ((ulong *)*param_6 <= puVar9) {
              puVar9 = (ulong *)FUN_0066d3f8(param_6,puVar9);
              piVar13 = (int *)*param_1;
            }
            lVar14 = lVar24 * 4;
            lVar24 = lVar24 + 1;
            param_5 = (ulong *)((long)puVar9 + 4);
            *(uint *)puVar9 = *(uint *)(*(long *)(piVar13 + 2) + lVar14);
            piVar13 = (int *)*param_1;
            puVar9 = param_5;
          } while (lVar24 < *piVar13);
        }
        break;
      case 0x10:
        piVar13 = (int *)*param_1;
        if (0 < *piVar13) {
          lVar24 = 0;
          puVar9 = param_5;
          do {
            if ((ulong *)*param_6 <= puVar9) {
              puVar9 = (ulong *)FUN_0066d3f8(param_6,puVar9);
              piVar13 = (int *)*param_1;
            }
            lVar14 = lVar24 * 8;
            lVar24 = lVar24 + 1;
            param_5 = puVar9 + 1;
            *puVar9 = *(ulong *)(*(long *)(piVar13 + 2) + lVar14);
            piVar13 = (int *)*param_1;
            puVar9 = param_5;
          } while (lVar24 < *piVar13);
        }
        break;
      case 0x11:
        piVar13 = (int *)*param_1;
        if (0 < *piVar13) {
          lVar24 = 0;
          do {
            if ((ulong *)*param_6 <= param_5) {
              param_5 = (ulong *)FUN_0066d3f8(param_6,param_5);
              piVar13 = (int *)*param_1;
            }
            iVar16 = *(int *)(*(long *)(piVar13 + 2) + lVar24 * 4);
            uVar11 = iVar16 << 1 ^ iVar16 >> 0x1f;
            *(byte *)param_5 = (byte)uVar11;
            if (uVar11 < 0x80) {
              param_5 = (ulong *)((long)param_5 + 1);
            }
            else {
              uVar15 = uVar11 >> 7;
              *(byte *)param_5 = (byte)uVar11 | 0x80;
              *(byte *)((long)param_5 + 1) = (byte)uVar15;
              param_5 = (ulong *)((long)param_5 + 2);
              puVar9 = param_5;
              if (0x3fff < uVar11) {
                do {
                  uVar11 = uVar15 >> 0xe;
                  uVar15 = uVar15 >> 7;
                  *(byte *)((long)puVar9 + -1) = *(byte *)((long)puVar9 + -1) | 0x80;
                  param_5 = (ulong *)((long)puVar9 + 1);
                  *(byte *)puVar9 = (byte)uVar15;
                  puVar9 = param_5;
                } while (uVar11 != 0);
              }
            }
            piVar13 = (int *)*param_1;
            lVar24 = lVar24 + 1;
          } while (lVar24 < *piVar13);
        }
        break;
      case 0x12:
        piVar13 = (int *)*param_1;
        if (0 < *piVar13) {
          lVar24 = 0;
          do {
            if ((ulong *)*param_6 <= param_5) {
              param_5 = (ulong *)FUN_0066d3f8(param_6,param_5);
              piVar13 = (int *)*param_1;
            }
            lVar14 = *(long *)(*(long *)(piVar13 + 2) + lVar24 * 8);
            uVar19 = lVar14 << 1 ^ lVar14 >> 0x3f;
            *(byte *)param_5 = (byte)uVar19;
            if (uVar19 < 0x80) {
              param_5 = (ulong *)((long)param_5 + 1);
            }
            else {
              uVar20 = uVar19 >> 7;
              *(byte *)param_5 = (byte)uVar19 | 0x80;
              *(byte *)((long)param_5 + 1) = (byte)uVar20;
              param_5 = (ulong *)((long)param_5 + 2);
              puVar9 = param_5;
              if (0x3fff < uVar19) {
                do {
                  uVar19 = uVar20 >> 0xe;
                  uVar20 = uVar20 >> 7;
                  *(byte *)((long)puVar9 + -1) = *(byte *)((long)puVar9 + -1) | 0x80;
                  param_5 = (ulong *)((long)puVar9 + 1);
                  *(byte *)puVar9 = (byte)uVar20;
                  puVar9 = param_5;
                } while (uVar19 != 0);
              }
            }
            piVar13 = (int *)*param_1;
            lVar24 = lVar24 + 1;
          } while (lVar24 < *piVar13);
        }
      }
    }
    goto switchD_00669a40_default;
  }
  if ((*(byte *)((long)param_1 + 10) & 1) != 0) goto switchD_00669a40_default;
  switch((byte)param_1[1]) {
  case 1:
    if (param_5 < (ulong *)*param_6) {
      uVar19 = *param_1;
      uVar11 = param_4 << 3 | 1;
      *(byte *)param_5 = (byte)uVar11;
    }
    else {
      param_5 = (ulong *)FUN_0066d3f8(param_6,param_5);
      uVar19 = *param_1;
      uVar11 = param_4 << 3 | 1;
      *(byte *)param_5 = (byte)uVar11;
    }
    if (0x7f < uVar11) {
      *(byte *)param_5 = (byte)uVar11 | 0x80;
      uVar15 = (param_4 << 3) >> 7;
      *(byte *)((long)param_5 + 1) = (byte)uVar15;
      puVar9 = (ulong *)((long)param_5 + 2);
      puVar22 = puVar9;
      if (0x3fff < uVar11) {
        do {
          uVar11 = uVar15 >> 0xe;
          uVar15 = uVar15 >> 7;
          *(byte *)((long)puVar22 + -1) = *(byte *)((long)puVar22 + -1) | 0x80;
          puVar9 = (ulong *)((long)puVar22 + 1);
          *(byte *)puVar22 = (byte)uVar15;
          puVar22 = puVar9;
        } while (uVar11 != 0);
      }
      goto LAB_0066a7c0;
    }
LAB_006696b0:
    puVar9 = (ulong *)((long)param_5 + 1);
    param_5 = (ulong *)((long)param_5 + 9);
    *puVar9 = uVar19;
    break;
  case 2:
    if (param_5 < (ulong *)*param_6) {
      uVar15 = (uint)*param_1;
      uVar11 = param_4 << 3 | 5;
      *(byte *)param_5 = (byte)uVar11;
    }
    else {
      param_5 = (ulong *)FUN_0066d3f8(param_6,param_5);
      uVar15 = (uint)*param_1;
      uVar11 = param_4 << 3 | 5;
      *(byte *)param_5 = (byte)uVar11;
    }
    if (0x7f < uVar11) {
      *(byte *)param_5 = (byte)uVar11 | 0x80;
      uVar17 = (param_4 << 3) >> 7;
      *(byte *)((long)param_5 + 1) = (byte)uVar17;
      puVar21 = (uint *)((long)param_5 + 2);
      puVar23 = puVar21;
      if (0x3fff < uVar11) {
        do {
          uVar11 = uVar17 >> 0xe;
          uVar17 = uVar17 >> 7;
          *(byte *)((long)puVar23 + -1) = *(byte *)((long)puVar23 + -1) | 0x80;
          puVar21 = (uint *)((long)puVar23 + 1);
          *(byte *)puVar23 = (byte)uVar17;
          puVar23 = puVar21;
        } while (uVar11 != 0);
      }
      goto LAB_0066a8c4;
    }
LAB_0066970c:
    puVar21 = (uint *)((long)param_5 + 1);
    param_5 = (ulong *)((long)param_5 + 5);
    *puVar21 = uVar15;
    break;
  case 3:
    if (param_5 < (ulong *)*param_6) {
      uVar19 = *param_1;
      *(byte *)param_5 = (byte)(param_4 << 3);
      if (0x7f < param_4 << 3) goto LAB_0066a494;
LAB_00669540:
      pbVar12 = (byte *)((long)param_5 + 1);
    }
    else {
      param_5 = (ulong *)FUN_0066d3f8(param_6,param_5);
      uVar19 = *param_1;
      *(byte *)param_5 = (byte)(param_4 << 3);
      if (param_4 << 3 < 0x80) goto LAB_00669540;
LAB_0066a494:
      param_4 = param_4 << 3;
      uVar11 = param_4 >> 7;
      pbVar12 = (byte *)((long)param_5 + 2);
      *(byte *)param_5 = (byte)param_4 | 0x80;
      *(byte *)((long)param_5 + 1) = (byte)uVar11;
      pbVar26 = pbVar12;
      if (0x3fff < param_4) {
        do {
          uVar15 = uVar11 >> 0xe;
          uVar11 = uVar11 >> 7;
          pbVar26[-1] = pbVar26[-1] | 0x80;
          pbVar12 = pbVar26 + 1;
          *pbVar26 = (byte)uVar11;
          pbVar26 = pbVar12;
        } while (uVar15 != 0);
      }
    }
    *pbVar12 = (byte)uVar19;
    if (uVar19 < 0x80) {
LAB_0066a5a8:
      param_5 = (ulong *)(pbVar12 + 1);
    }
    else {
      uVar20 = uVar19 >> 7;
      param_5 = (ulong *)(pbVar12 + 2);
      *pbVar12 = (byte)uVar19 | 0x80;
      pbVar12[1] = (byte)uVar20;
      puVar9 = param_5;
      if (0x3fff < uVar19) {
        do {
          uVar19 = uVar20 >> 0xe;
          uVar20 = uVar20 >> 7;
          *(byte *)((long)puVar9 + -1) = *(byte *)((long)puVar9 + -1) | 0x80;
          param_5 = (ulong *)((long)puVar9 + 1);
          *(byte *)puVar9 = (byte)uVar20;
          puVar9 = param_5;
        } while (uVar19 != 0);
      }
    }
    break;
  case 4:
    if (param_5 < (ulong *)*param_6) {
      uVar19 = *param_1;
      *(byte *)param_5 = (byte)(param_4 << 3);
      if (0x7f < param_4 << 3) goto LAB_0066a564;
LAB_006695cc:
      pbVar12 = (byte *)((long)param_5 + 1);
    }
    else {
      param_5 = (ulong *)FUN_0066d3f8(param_6,param_5);
      uVar19 = *param_1;
      *(byte *)param_5 = (byte)(param_4 << 3);
      if (param_4 << 3 < 0x80) goto LAB_006695cc;
LAB_0066a564:
      param_4 = param_4 << 3;
      uVar11 = param_4 >> 7;
      pbVar12 = (byte *)((long)param_5 + 2);
      *(byte *)param_5 = (byte)param_4 | 0x80;
      *(byte *)((long)param_5 + 1) = (byte)uVar11;
      pbVar26 = pbVar12;
      if (0x3fff < param_4) {
        do {
          uVar15 = uVar11 >> 0xe;
          uVar11 = uVar11 >> 7;
          pbVar26[-1] = pbVar26[-1] | 0x80;
          pbVar12 = pbVar26 + 1;
          *pbVar26 = (byte)uVar11;
          pbVar26 = pbVar12;
        } while (uVar15 != 0);
      }
    }
    *pbVar12 = (byte)uVar19;
    if (uVar19 < 0x80) goto LAB_0066a5a8;
    uVar20 = uVar19 >> 7;
    param_5 = (ulong *)(pbVar12 + 2);
    *pbVar12 = (byte)uVar19 | 0x80;
    pbVar12[1] = (byte)uVar20;
    puVar9 = param_5;
    if (0x3fff < uVar19) {
      do {
        uVar19 = uVar20 >> 0xe;
        uVar20 = uVar20 >> 7;
        *(byte *)((long)puVar9 + -1) = *(byte *)((long)puVar9 + -1) | 0x80;
        param_5 = (ulong *)((long)puVar9 + 1);
        *(byte *)puVar9 = (byte)uVar20;
        puVar9 = param_5;
      } while (uVar19 != 0);
    }
    break;
  case 5:
    if (param_5 < (ulong *)*param_6) {
      uVar11 = (uint)*param_1;
      *(byte *)param_5 = (byte)(param_4 << 3);
      if (0x7f < param_4 << 3) goto LAB_0066a348;
LAB_0066949c:
      pbVar12 = (byte *)((long)param_5 + 1);
    }
    else {
      param_5 = (ulong *)FUN_0066d3f8(param_6,param_5);
      uVar11 = (uint)*param_1;
      *(byte *)param_5 = (byte)(param_4 << 3);
      if (param_4 << 3 < 0x80) goto LAB_0066949c;
LAB_0066a348:
      param_4 = param_4 << 3;
      uVar15 = param_4 >> 7;
      pbVar12 = (byte *)((long)param_5 + 2);
      *(byte *)param_5 = (byte)param_4 | 0x80;
      *(byte *)((long)param_5 + 1) = (byte)uVar15;
      pbVar26 = pbVar12;
      if (0x3fff < param_4) {
        do {
          uVar17 = uVar15 >> 0xe;
          uVar15 = uVar15 >> 7;
          pbVar26[-1] = pbVar26[-1] | 0x80;
          pbVar12 = pbVar26 + 1;
          *pbVar26 = (byte)uVar15;
          pbVar26 = pbVar12;
        } while (uVar17 != 0);
      }
    }
    if (*(long *)(lVar4 + 0x28) == local_68) {
LAB_0066a840:
      puVar9 = (ulong *)FUN_0066bc40(uVar11,pbVar12);
      return puVar9;
    }
    goto LAB_0066a940;
  case 6:
    if (param_5 < (ulong *)*param_6) {
      uVar19 = *param_1;
      uVar11 = param_4 << 3 | 1;
      *(byte *)param_5 = (byte)uVar11;
    }
    else {
      param_5 = (ulong *)FUN_0066d3f8(param_6,param_5);
      uVar19 = *param_1;
      uVar11 = param_4 << 3 | 1;
      *(byte *)param_5 = (byte)uVar11;
    }
    if (uVar11 < 0x80) goto LAB_006696b0;
    *(byte *)param_5 = (byte)uVar11 | 0x80;
    uVar15 = (param_4 << 3) >> 7;
    *(byte *)((long)param_5 + 1) = (byte)uVar15;
    puVar9 = (ulong *)((long)param_5 + 2);
    puVar22 = puVar9;
    if (0x3fff < uVar11) {
      do {
        uVar11 = uVar15 >> 0xe;
        uVar15 = uVar15 >> 7;
        *(byte *)((long)puVar22 + -1) = *(byte *)((long)puVar22 + -1) | 0x80;
        puVar9 = (ulong *)((long)puVar22 + 1);
        *(byte *)puVar22 = (byte)uVar15;
        puVar22 = puVar9;
      } while (uVar11 != 0);
    }
    goto LAB_0066a7c0;
  case 7:
    if (param_5 < (ulong *)*param_6) {
      uVar15 = (uint)*param_1;
      uVar11 = param_4 << 3 | 5;
      *(byte *)param_5 = (byte)uVar11;
    }
    else {
      param_5 = (ulong *)FUN_0066d3f8(param_6,param_5);
      uVar15 = (uint)*param_1;
      uVar11 = param_4 << 3 | 5;
      *(byte *)param_5 = (byte)uVar11;
    }
    if (uVar11 < 0x80) goto LAB_0066970c;
    *(byte *)param_5 = (byte)uVar11 | 0x80;
    uVar17 = (param_4 << 3) >> 7;
    *(byte *)((long)param_5 + 1) = (byte)uVar17;
    puVar21 = (uint *)((long)param_5 + 2);
    puVar23 = puVar21;
    if (0x3fff < uVar11) {
      do {
        uVar11 = uVar17 >> 0xe;
        uVar17 = uVar17 >> 7;
        *(byte *)((long)puVar23 + -1) = *(byte *)((long)puVar23 + -1) | 0x80;
        puVar21 = (uint *)((long)puVar23 + 1);
        *(byte *)puVar23 = (byte)uVar17;
        puVar23 = puVar21;
      } while (uVar11 != 0);
    }
    goto LAB_0066a8c4;
  case 8:
    if (param_5 < (ulong *)*param_6) {
      bVar6 = (byte)*param_1;
      *(byte *)param_5 = (byte)(param_4 << 3);
    }
    else {
      param_5 = (ulong *)FUN_0066d3f8(param_6,param_5);
      bVar6 = (byte)*param_1;
      *(byte *)param_5 = (byte)(param_4 << 3);
    }
    if (param_4 << 3 < 0x80) {
      pbVar12 = (byte *)((long)param_5 + 1);
      param_5 = (ulong *)((long)param_5 + 2);
      *pbVar12 = bVar6;
    }
    else {
      param_4 = param_4 << 3;
      uVar11 = param_4 >> 7;
      *(byte *)param_5 = (byte)param_4 | 0x80;
      *(byte *)((long)param_5 + 1) = (byte)uVar11;
      pbVar12 = (byte *)((long)param_5 + 2);
      pbVar26 = pbVar12;
      if (0x3fff < param_4) {
        do {
          uVar15 = uVar11 >> 0xe;
          uVar11 = uVar11 >> 7;
          pbVar26[-1] = pbVar26[-1] | 0x80;
          pbVar12 = pbVar26 + 1;
          *pbVar26 = (byte)uVar11;
          pbVar26 = pbVar12;
        } while (uVar15 != 0);
      }
      param_5 = (ulong *)(pbVar12 + 1);
      *pbVar12 = bVar6;
    }
    break;
  case 9:
    if ((ulong *)*param_6 <= param_5) {
      param_5 = (ulong *)FUN_0066d3f8(param_6,param_5);
    }
    pbVar12 = (byte *)*param_1;
    uVar19 = (ulong)(*pbVar12 >> 1);
    if ((*pbVar12 & 1) != 0) {
      uVar19 = *(ulong *)(pbVar12 + 8);
    }
    if ((long)uVar19 < 0x80) {
      uVar11 = param_4 << 3;
      if (uVar11 < 0x80) {
        lVar24 = 1;
      }
      else if (uVar11 < 0x4000) {
        lVar24 = 2;
      }
      else if (uVar11 < 0x200000) {
        lVar24 = 3;
      }
      else {
        lVar24 = 4;
        if (uVar11 >> 0x1c != 0) {
          lVar24 = 5;
        }
      }
      if ((long)uVar19 <= (long)(*param_6 + ~(ulong)(lVar24 + (long)param_5) + 0x10)) {
        uVar15 = uVar11 | 2;
        *(byte *)param_5 = (byte)uVar15;
        if (uVar15 < 0x80) {
LAB_00669904:
          pbVar26 = (byte *)((long)param_5 + 1);
        }
        else {
          uVar17 = uVar11 >> 7;
          *(byte *)param_5 = (byte)uVar11 | 0x82;
          *(byte *)((long)param_5 + 1) = (byte)uVar17;
          pbVar26 = (byte *)((long)param_5 + 2);
          pbVar18 = pbVar26;
          if (0x3fff < uVar15) {
            do {
              uVar11 = uVar17 >> 0xe;
              uVar17 = uVar17 >> 7;
              pbVar18[-1] = pbVar18[-1] | 0x80;
              pbVar26 = pbVar18 + 1;
              *pbVar18 = (byte)uVar17;
              pbVar18 = pbVar26;
            } while (uVar11 != 0);
          }
        }
LAB_00669908:
        *pbVar26 = (byte)uVar19;
        pbVar18 = *(byte **)(pbVar12 + 0x10);
        if ((*pbVar12 & 1) == 0) {
          pbVar18 = pbVar12 + 1;
        }
        memcpy(pbVar26 + 1,pbVar18,uVar19);
        param_5 = (ulong *)(pbVar26 + 1 + uVar19);
        break;
      }
    }
    goto LAB_0066a1f8;
  case 10:
    if (param_5 < (ulong *)*param_6) {
      uVar19 = *param_1;
      if (*(long *)(lVar4 + 0x28) == local_68) {
LAB_006694f4:
        puVar9 = (ulong *)FUN_00678bd4(param_4,uVar19,param_5,param_6);
        return puVar9;
      }
    }
    else {
      param_5 = (ulong *)FUN_0066d3f8(param_6,param_5);
      uVar19 = *param_1;
      if (*(long *)(lVar4 + 0x28) == local_68) goto LAB_006694f4;
    }
    goto LAB_0066a940;
  case 0xb:
    if ((*(byte *)((long)param_1 + 10) >> 4 & 1) == 0) {
      plVar25 = (long *)*param_1;
      uVar7 = (**(code **)(*plVar25 + 0x48))(plVar25);
      if (*(long *)(lVar4 + 0x28) == local_68) {
        puVar9 = (ulong *)FUN_00678d18(param_4,plVar25,uVar7,param_5,param_6);
        return puVar9;
      }
    }
    else {
      uVar8 = FUN_006679c4(param_1,param_2,param_4);
      if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Could not recover jumptable at 0x00669814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar9 = (ulong *)(**(code **)(*(long *)*param_1 + 0x88))
                                    ((long *)*param_1,uVar8,param_4,param_5,param_6);
        return puVar9;
      }
    }
    goto LAB_0066a940;
  case 0xc:
    if ((ulong *)*param_6 <= param_5) {
      param_5 = (ulong *)FUN_0066d3f8(param_6,param_5);
    }
    pbVar12 = (byte *)*param_1;
    uVar19 = (ulong)(*pbVar12 >> 1);
    if ((*pbVar12 & 1) != 0) {
      uVar19 = *(ulong *)(pbVar12 + 8);
    }
    if ((long)uVar19 < 0x80) {
      uVar11 = param_4 << 3;
      if (uVar11 < 0x80) {
        lVar24 = 1;
      }
      else if (uVar11 < 0x4000) {
        lVar24 = 2;
      }
      else if (uVar11 < 0x200000) {
        lVar24 = 3;
      }
      else {
        lVar24 = 4;
        if (uVar11 >> 0x1c != 0) {
          lVar24 = 5;
        }
      }
      if ((long)uVar19 <= (long)(*param_6 + ~(ulong)(lVar24 + (long)param_5) + 0x10)) {
        uVar15 = uVar11 | 2;
        *(byte *)param_5 = (byte)uVar15;
        if (uVar15 < 0x80) goto LAB_00669904;
        uVar17 = uVar11 >> 7;
        *(byte *)param_5 = (byte)uVar11 | 0x82;
        *(byte *)((long)param_5 + 1) = (byte)uVar17;
        pbVar26 = (byte *)((long)param_5 + 2);
        pbVar18 = pbVar26;
        if (0x3fff < uVar15) {
          do {
            uVar11 = uVar17 >> 0xe;
            uVar17 = uVar17 >> 7;
            pbVar18[-1] = pbVar18[-1] | 0x80;
            pbVar26 = pbVar18 + 1;
            *pbVar18 = (byte)uVar17;
            pbVar18 = pbVar26;
          } while (uVar11 != 0);
        }
        goto LAB_00669908;
      }
    }
LAB_0066a1f8:
    if (*(long *)(lVar4 + 0x28) == local_68) {
      puVar9 = (ulong *)FUN_0066d8d0(param_6,param_4,pbVar12,param_5);
      return puVar9;
    }
    goto LAB_0066a940;
  case 0xd:
    if (param_5 < (ulong *)*param_6) {
      uVar11 = (uint)*param_1;
      *(byte *)param_5 = (byte)(param_4 << 3);
      if (0x7f < param_4 << 3) goto LAB_0066a3c4;
LAB_006694c8:
      pbVar12 = (byte *)((long)param_5 + 1);
    }
    else {
      param_5 = (ulong *)FUN_0066d3f8(param_6,param_5);
      uVar11 = (uint)*param_1;
      *(byte *)param_5 = (byte)(param_4 << 3);
      if (param_4 << 3 < 0x80) goto LAB_006694c8;
LAB_0066a3c4:
      param_4 = param_4 << 3;
      uVar15 = param_4 >> 7;
      pbVar12 = (byte *)((long)param_5 + 2);
      *(byte *)param_5 = (byte)param_4 | 0x80;
      *(byte *)((long)param_5 + 1) = (byte)uVar15;
      pbVar26 = pbVar12;
      if (0x3fff < param_4) {
        do {
          uVar17 = uVar15 >> 0xe;
          uVar15 = uVar15 >> 7;
          pbVar26[-1] = pbVar26[-1] | 0x80;
          pbVar12 = pbVar26 + 1;
          *pbVar26 = (byte)uVar15;
          pbVar26 = pbVar12;
        } while (uVar17 != 0);
      }
    }
    *pbVar12 = (byte)uVar11;
    if (uVar11 < 0x80) goto LAB_0066a5a8;
    uVar15 = uVar11 >> 7;
    param_5 = (ulong *)(pbVar12 + 2);
    *pbVar12 = (byte)uVar11 | 0x80;
    pbVar12[1] = (byte)uVar15;
    puVar9 = param_5;
    if (0x3fff < uVar11) {
      do {
        uVar11 = uVar15 >> 0xe;
        uVar15 = uVar15 >> 7;
        *(byte *)((long)puVar9 + -1) = *(byte *)((long)puVar9 + -1) | 0x80;
        param_5 = (ulong *)((long)puVar9 + 1);
        *(byte *)puVar9 = (byte)uVar15;
        puVar9 = param_5;
      } while (uVar11 != 0);
    }
    break;
  case 0xe:
    if (param_5 < (ulong *)*param_6) {
      uVar11 = (uint)*param_1;
      *(byte *)param_5 = (byte)(param_4 << 3);
      if (0x7f < param_4 << 3) goto LAB_0066a7ec;
LAB_006696dc:
      pbVar12 = (byte *)((long)param_5 + 1);
    }
    else {
      param_5 = (ulong *)FUN_0066d3f8(param_6,param_5);
      uVar11 = (uint)*param_1;
      *(byte *)param_5 = (byte)(param_4 << 3);
      if (param_4 << 3 < 0x80) goto LAB_006696dc;
LAB_0066a7ec:
      param_4 = param_4 << 3;
      uVar15 = param_4 >> 7;
      pbVar12 = (byte *)((long)param_5 + 2);
      *(byte *)param_5 = (byte)param_4 | 0x80;
      *(byte *)((long)param_5 + 1) = (byte)uVar15;
      pbVar26 = pbVar12;
      if (0x3fff < param_4) {
        do {
          uVar17 = uVar15 >> 0xe;
          uVar15 = uVar15 >> 7;
          pbVar26[-1] = pbVar26[-1] | 0x80;
          pbVar12 = pbVar26 + 1;
          *pbVar26 = (byte)uVar15;
          pbVar26 = pbVar12;
        } while (uVar17 != 0);
      }
    }
    if (*(long *)(lVar4 + 0x28) != local_68) goto LAB_0066a940;
    goto LAB_0066a840;
  case 0xf:
    if (param_5 < (ulong *)*param_6) {
      uVar15 = (uint)*param_1;
      uVar11 = param_4 << 3 | 5;
      *(byte *)param_5 = (byte)uVar11;
    }
    else {
      param_5 = (ulong *)FUN_0066d3f8(param_6,param_5);
      uVar15 = (uint)*param_1;
      uVar11 = param_4 << 3 | 5;
      *(byte *)param_5 = (byte)uVar11;
    }
    if (uVar11 < 0x80) goto LAB_0066970c;
    *(byte *)param_5 = (byte)uVar11 | 0x80;
    uVar17 = (param_4 << 3) >> 7;
    *(byte *)((long)param_5 + 1) = (byte)uVar17;
    puVar21 = (uint *)((long)param_5 + 2);
    puVar23 = puVar21;
    if (0x3fff < uVar11) {
      do {
        uVar11 = uVar17 >> 0xe;
        uVar17 = uVar17 >> 7;
        *(byte *)((long)puVar23 + -1) = *(byte *)((long)puVar23 + -1) | 0x80;
        puVar21 = (uint *)((long)puVar23 + 1);
        *(byte *)puVar23 = (byte)uVar17;
        puVar23 = puVar21;
      } while (uVar11 != 0);
    }
LAB_0066a8c4:
    param_5 = (ulong *)(puVar21 + 1);
    *puVar21 = uVar15;
    break;
  case 0x10:
    if (param_5 < (ulong *)*param_6) {
      uVar19 = *param_1;
      uVar11 = param_4 << 3 | 1;
      *(byte *)param_5 = (byte)uVar11;
    }
    else {
      param_5 = (ulong *)FUN_0066d3f8(param_6,param_5);
      uVar19 = *param_1;
      uVar11 = param_4 << 3 | 1;
      *(byte *)param_5 = (byte)uVar11;
    }
    if (uVar11 < 0x80) goto LAB_006696b0;
    *(byte *)param_5 = (byte)uVar11 | 0x80;
    uVar15 = (param_4 << 3) >> 7;
    *(byte *)((long)param_5 + 1) = (byte)uVar15;
    puVar9 = (ulong *)((long)param_5 + 2);
    puVar22 = puVar9;
    if (0x3fff < uVar11) {
      do {
        uVar11 = uVar15 >> 0xe;
        uVar15 = uVar15 >> 7;
        *(byte *)((long)puVar22 + -1) = *(byte *)((long)puVar22 + -1) | 0x80;
        puVar9 = (ulong *)((long)puVar22 + 1);
        *(byte *)puVar22 = (byte)uVar15;
        puVar22 = puVar9;
      } while (uVar11 != 0);
    }
LAB_0066a7c0:
    param_5 = puVar9 + 1;
    *puVar9 = uVar19;
    break;
  case 0x11:
    if (param_5 < (ulong *)*param_6) {
      uVar11 = (uint)*param_1;
      *(byte *)param_5 = (byte)(param_4 << 3);
      if (0x7f < param_4 << 3) goto LAB_0066a25c;
LAB_006693cc:
      pbVar12 = (byte *)((long)param_5 + 1);
    }
    else {
      param_5 = (ulong *)FUN_0066d3f8(param_6,param_5);
      uVar11 = (uint)*param_1;
      *(byte *)param_5 = (byte)(param_4 << 3);
      if (param_4 << 3 < 0x80) goto LAB_006693cc;
LAB_0066a25c:
      param_4 = param_4 << 3;
      uVar15 = param_4 >> 7;
      pbVar12 = (byte *)((long)param_5 + 2);
      *(byte *)param_5 = (byte)param_4 | 0x80;
      *(byte *)((long)param_5 + 1) = (byte)uVar15;
      pbVar26 = pbVar12;
      if (0x3fff < param_4) {
        do {
          uVar17 = uVar15 >> 0xe;
          uVar15 = uVar15 >> 7;
          pbVar26[-1] = pbVar26[-1] | 0x80;
          pbVar12 = pbVar26 + 1;
          *pbVar26 = (byte)uVar15;
          pbVar26 = pbVar12;
        } while (uVar17 != 0);
      }
    }
    uVar11 = uVar11 << 1 ^ (int)uVar11 >> 0x1f;
    *pbVar12 = (byte)uVar11;
    if (uVar11 < 0x80) goto LAB_0066a5a8;
    uVar15 = uVar11 >> 7;
    param_5 = (ulong *)(pbVar12 + 2);
    *pbVar12 = (byte)uVar11 | 0x80;
    pbVar12[1] = (byte)uVar15;
    puVar9 = param_5;
    if (0x3fff < uVar11) {
      do {
        uVar11 = uVar15 >> 0xe;
        uVar15 = uVar15 >> 7;
        *(byte *)((long)puVar9 + -1) = *(byte *)((long)puVar9 + -1) | 0x80;
        param_5 = (ulong *)((long)puVar9 + 1);
        *(byte *)puVar9 = (byte)uVar15;
        puVar9 = param_5;
      } while (uVar11 != 0);
    }
    break;
  case 0x12:
    if (param_5 < (ulong *)*param_6) {
      uVar19 = *param_1;
      *(byte *)param_5 = (byte)(param_4 << 3);
      if (0x7f < param_4 << 3) goto LAB_0066a6cc;
LAB_00669684:
      pbVar12 = (byte *)((long)param_5 + 1);
    }
    else {
      param_5 = (ulong *)FUN_0066d3f8(param_6,param_5);
      uVar19 = *param_1;
      *(byte *)param_5 = (byte)(param_4 << 3);
      if (param_4 << 3 < 0x80) goto LAB_00669684;
LAB_0066a6cc:
      param_4 = param_4 << 3;
      uVar11 = param_4 >> 7;
      pbVar12 = (byte *)((long)param_5 + 2);
      *(byte *)param_5 = (byte)param_4 | 0x80;
      *(byte *)((long)param_5 + 1) = (byte)uVar11;
      pbVar26 = pbVar12;
      if (0x3fff < param_4) {
        do {
          uVar15 = uVar11 >> 0xe;
          uVar11 = uVar11 >> 7;
          pbVar26[-1] = pbVar26[-1] | 0x80;
          pbVar12 = pbVar26 + 1;
          *pbVar26 = (byte)uVar11;
          pbVar26 = pbVar12;
        } while (uVar15 != 0);
      }
    }
    uVar19 = uVar19 << 1 ^ (long)uVar19 >> 0x3f;
    *pbVar12 = (byte)uVar19;
    if (uVar19 < 0x80) {
      param_5 = (ulong *)(pbVar12 + 1);
    }
    else {
      uVar20 = uVar19 >> 7;
      param_5 = (ulong *)(pbVar12 + 2);
      *pbVar12 = (byte)uVar19 | 0x80;
      pbVar12[1] = (byte)uVar20;
      puVar9 = param_5;
      if (0x3fff < uVar19) {
        do {
          uVar19 = uVar20 >> 0xe;
          uVar20 = uVar20 >> 7;
          *(byte *)((long)puVar9 + -1) = *(byte *)((long)puVar9 + -1) | 0x80;
          param_5 = (ulong *)((long)puVar9 + 1);
          *(byte *)puVar9 = (byte)uVar20;
          puVar9 = param_5;
        } while (uVar19 != 0);
      }
    }
  }
switchD_00669a40_default:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return param_5;
  }
LAB_0066a940:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0066a944  FUN_0066a944 =====

long FUN_0066a944(long param_1)

{
  short sVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long local_40;
  long local_38;
  undefined8 *puVar7;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  sVar1 = *(short *)(param_1 + 10);
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  local_40 = 0;
  if ((long)sVar1 < 0) {
    FUN_0066bfac(*puVar4,puVar4 + 1,&local_40);
    lVar5 = local_40;
    if (*(long *)(lVar2 + 0x28) != local_38) goto LAB_0066a9ec;
  }
  else {
    lVar5 = 0;
    if (sVar1 != 0) {
      puVar6 = puVar4;
      do {
        puVar7 = puVar6 + 4;
        lVar3 = FUN_0066a9f0(puVar6 + 1,*(undefined4 *)puVar6);
        lVar5 = lVar5 + lVar3;
        puVar6 = puVar7;
      } while (puVar7 != puVar4 + (long)sVar1 * 4);
    }
    if (*(long *)(lVar2 + 0x28) != local_38) {
LAB_0066a9ec:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  return lVar5;
}


// ===== 0066a9f0  FUN_0066a9f0 =====

long FUN_0066a9f0(ulong *param_1,int param_2)

{
  long *plVar1;
  ulong *puVar2;
  ulong uVar3;
  int *piVar4;
  byte bVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  uint uVar16;
  ulong uVar17;
  code *pcVar18;
  undefined1 (*pauVar19) [16];
  ulong uVar20;
  undefined8 *puVar21;
  long lVar22;
  uint *puVar23;
  int *piVar24;
  long *plVar25;
  ulong *puVar26;
  ulong uVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  undefined4 uVar36;
  undefined1 auVar38 [12];
  undefined1 auVar39 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined4 uVar44;
  uint uVar45;
  undefined1 auVar47 [12];
  undefined1 auVar48 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar54 [16];
  undefined1 uStack_69;
  undefined1 auStack_68 [48];
  long local_38;
  undefined1 auVar37 [12];
  undefined1 auVar40 [16];
  undefined1 auVar46 [12];
  undefined1 auVar49 [16];
  undefined1 auVar53 [16];
  
  lVar6 = tpidr_el0;
  local_38 = *(long *)(lVar6 + 0x28);
  if (*(char *)((long)param_1 + 9) != '\0') {
    if (*(char *)((long)param_1 + 0xb) == '\0') {
      uVar16 = (uint)(byte)param_1[1];
      if (uVar16 - 1 < 0x12) {
        uVar20 = (ulong)(((uint)LZCOUNT(param_2 << 3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) << (uVar16 == 10)
        ;
        switch(uVar16) {
        default:
          lVar29 = (uVar20 + 8 & 0xffffffff) * (ulong)*(uint *)*param_1;
          break;
        case 2:
        case 7:
        case 0xf:
          lVar29 = (uVar20 + 4 & 0xffffffff) * (ulong)*(uint *)*param_1;
          break;
        case 3:
          uVar16 = *(uint *)*param_1;
          uVar17 = (ulong)uVar16;
          lVar29 = (uVar20 & 0xffffffff) * uVar17;
          if (0 < (int)uVar16) {
            lVar22 = *(long *)((uint *)*param_1 + 2);
            if (uVar16 == 1) {
              uVar27 = 0;
            }
            else {
              uVar27 = uVar17 & 0x7ffffffe;
              lVar28 = 0;
              puVar26 = (ulong *)(lVar22 + 8);
              uVar20 = uVar27;
              do {
                puVar2 = puVar26 + -1;
                uVar3 = *puVar26;
                uVar20 = uVar20 - 2;
                puVar26 = puVar26 + 2;
                lVar29 = lVar29 + ((LZCOUNT(*puVar2 | 1) ^ 0x3fU) * 9 + 0x49 >> 6);
                lVar28 = lVar28 + ((LZCOUNT(uVar3 | 1) ^ 0x3fU) * 9 + 0x49 >> 6);
              } while (uVar20 != 0);
              lVar29 = lVar28 + lVar29;
              if (uVar27 == uVar17) break;
            }
            lVar28 = uVar17 - uVar27;
            puVar26 = (ulong *)(lVar22 + uVar27 * 8);
            do {
              lVar28 = lVar28 + -1;
              lVar29 = lVar29 + ((LZCOUNT(*puVar26 | 1) ^ 0x3fU) * 9 + 0x49 >> 6);
              puVar26 = puVar26 + 1;
            } while (lVar28 != 0);
          }
          break;
        case 4:
          uVar16 = *(uint *)*param_1;
          uVar17 = (ulong)uVar16;
          lVar29 = (uVar20 & 0xffffffff) * uVar17;
          if (0 < (int)uVar16) {
            lVar22 = *(long *)((uint *)*param_1 + 2);
            if (uVar16 == 1) {
              uVar27 = 0;
            }
            else {
              uVar27 = uVar17 & 0x7ffffffe;
              lVar28 = 0;
              puVar26 = (ulong *)(lVar22 + 8);
              uVar20 = uVar27;
              do {
                puVar2 = puVar26 + -1;
                uVar3 = *puVar26;
                uVar20 = uVar20 - 2;
                puVar26 = puVar26 + 2;
                lVar29 = lVar29 + ((LZCOUNT(*puVar2 | 1) ^ 0x3fU) * 9 + 0x49 >> 6);
                lVar28 = lVar28 + ((LZCOUNT(uVar3 | 1) ^ 0x3fU) * 9 + 0x49 >> 6);
              } while (uVar20 != 0);
              lVar29 = lVar28 + lVar29;
              if (uVar27 == uVar17) break;
            }
            lVar28 = uVar17 - uVar27;
            puVar26 = (ulong *)(lVar22 + uVar27 * 8);
            do {
              lVar28 = lVar28 + -1;
              lVar29 = lVar29 + ((LZCOUNT(*puVar26 | 1) ^ 0x3fU) * 9 + 0x49 >> 6);
              puVar26 = puVar26 + 1;
            } while (lVar28 != 0);
          }
          break;
        case 5:
          uVar16 = *(uint *)*param_1;
          uVar17 = (ulong)uVar16;
          lVar29 = (uVar20 & 0xffffffff) * uVar17;
          if (0 < (int)uVar16) {
            lVar22 = *(long *)((uint *)*param_1 + 2);
            if (uVar16 == 1) {
              uVar27 = 0;
            }
            else {
              uVar27 = uVar17 & 0x7ffffffe;
              lVar30 = 0;
              lVar28 = lVar22 + 4;
              uVar20 = uVar27;
              do {
                piVar24 = (int *)(lVar28 + -4);
                piVar4 = (int *)(lVar28 + 4);
                uVar20 = uVar20 - 2;
                lVar28 = lVar28 + 8;
                lVar29 = lVar29 + ((LZCOUNT((long)*piVar24 | 1) ^ 0x3fU) * 9 + 0x49 >> 6);
                lVar30 = lVar30 + ((LZCOUNT((long)*piVar4 | 1) ^ 0x3fU) * 9 + 0x49 >> 6);
              } while (uVar20 != 0);
              lVar29 = lVar30 + lVar29;
              if (uVar27 == uVar17) break;
            }
            lVar28 = uVar17 - uVar27;
            piVar24 = (int *)(lVar22 + uVar27 * 4);
            do {
              lVar28 = lVar28 + -1;
              lVar29 = lVar29 + ((LZCOUNT((long)*piVar24 | 1) ^ 0x3fU) * 9 + 0x49 >> 6);
              piVar24 = piVar24 + 1;
            } while (lVar28 != 0);
          }
          break;
        case 8:
          lVar29 = (ulong)*(uint *)*param_1 + (ulong)*(uint *)*param_1 * (uVar20 & 0xffffffff);
          break;
        case 9:
          uVar16 = *(uint *)(*param_1 + 8);
          uVar17 = (ulong)uVar16;
          lVar29 = (uVar20 & 0xffffffff) * uVar17;
          if (0 < (int)uVar16) {
            puVar21 = *(undefined8 **)(*param_1 + 0x10);
            do {
              puVar21 = puVar21 + 1;
              bVar5 = *(byte *)*puVar21;
              uVar20 = (ulong)(bVar5 >> 1);
              if ((bVar5 & 1) != 0) {
                uVar20 = *(ulong *)((byte *)*puVar21 + 8);
              }
              uVar17 = uVar17 - 1;
              lVar29 = uVar20 + lVar29 +
                       (ulong)(((uint)LZCOUNT((uint)uVar20 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
            } while (uVar17 != 0);
          }
          break;
        case 10:
          uVar17 = *param_1;
          lVar29 = (uVar20 & 0xffffffff) * (ulong)*(uint *)(uVar17 + 8);
          if (0 < (int)*(uint *)(uVar17 + 8)) {
            lVar22 = 0;
            do {
              lVar28 = (**(code **)(**(long **)(*(long *)(uVar17 + 0x10) + lVar22 * 8 + 8) + 0x40))
                                 ();
              uVar17 = *param_1;
              lVar22 = lVar22 + 1;
              lVar29 = lVar28 + lVar29;
            } while (lVar22 < *(int *)(uVar17 + 8));
          }
          break;
        case 0xb:
          uVar17 = *param_1;
          lVar29 = (uVar20 & 0xffffffff) * (ulong)*(uint *)(uVar17 + 8);
          if (0 < (int)*(uint *)(uVar17 + 8)) {
            lVar22 = 0;
            do {
              lVar28 = (**(code **)(**(long **)(*(long *)(uVar17 + 0x10) + lVar22 * 8 + 8) + 0x40))
                                 ();
              uVar17 = *param_1;
              lVar22 = lVar22 + 1;
              lVar29 = lVar28 + lVar29 +
                       (ulong)(((uint)LZCOUNT((uint)lVar28 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
            } while (lVar22 < *(int *)(uVar17 + 8));
          }
          break;
        case 0xc:
          uVar16 = *(uint *)(*param_1 + 8);
          uVar17 = (ulong)uVar16;
          lVar29 = (uVar20 & 0xffffffff) * uVar17;
          if (0 < (int)uVar16) {
            puVar21 = *(undefined8 **)(*param_1 + 0x10);
            do {
              puVar21 = puVar21 + 1;
              bVar5 = *(byte *)*puVar21;
              uVar20 = (ulong)(bVar5 >> 1);
              if ((bVar5 & 1) != 0) {
                uVar20 = *(ulong *)((byte *)*puVar21 + 8);
              }
              uVar17 = uVar17 - 1;
              lVar29 = uVar20 + lVar29 +
                       (ulong)(((uint)LZCOUNT((uint)uVar20 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
            } while (uVar17 != 0);
          }
          break;
        case 0xd:
          uVar16 = *(uint *)*param_1;
          uVar17 = (ulong)uVar16;
          lVar29 = (uVar20 & 0xffffffff) * uVar17;
          if (0 < (int)uVar16) {
            lVar22 = *(long *)((uint *)*param_1 + 2);
            if (uVar16 < 8) {
              uVar27 = 0;
            }
            else {
              lVar28 = 0;
              lVar30 = 0;
              lVar31 = 0;
              uVar27 = uVar17 & 0x7ffffff8;
              pauVar19 = (undefined1 (*) [16])(lVar22 + 0x10);
              lVar32 = 0;
              lVar33 = 0;
              lVar34 = 0;
              lVar35 = 0;
              uVar20 = uVar27;
              do {
                auVar39 = pauVar19[-1];
                auVar48 = *pauVar19;
                uVar20 = uVar20 - 8;
                pauVar19 = pauVar19 + 2;
                auVar43._0_8_ = auVar39._0_8_ | 0x100000001;
                auVar43._8_4_ = auVar39._8_4_ | 1;
                auVar43._12_4_ = auVar39._12_4_ | 1;
                auVar54._0_8_ = auVar48._0_8_ | 0x100000001;
                auVar54._8_4_ = auVar48._8_4_ | 1;
                auVar54._12_4_ = auVar48._12_4_ | 1;
                auVar39 = NEON_clz(auVar43,4);
                auVar48 = NEON_clz(auVar54,4);
                uVar16 = (uint)(ushort)(auVar39._0_2_ ^ 0x1f);
                uVar45 = (uint)(ushort)(auVar48._0_2_ ^ 0x1f);
                lVar30 = lVar30 + (ulong)((uint)(ushort)(auVar39._8_2_ ^ 0x1f) * 9 + 0x49 >> 6);
                lVar31 = lVar31 + (ulong)((uint)(ushort)(auVar39._12_2_ ^ 0x1f) * 9 + 0x49 >> 6);
                lVar29 = lVar29 + (ulong)(uVar16 * 9 + 0x49 >> 6);
                lVar28 = lVar28 + (ulong)((uint)(ushort)((ushort)(CONCAT15(auVar39[5],
                                                                           CONCAT14(auVar39[4],
                                                                                    uVar16)) >> 0x20
                                                                 ) ^ 0x1f) * 9 + 0x49 >> 6);
                lVar34 = lVar34 + (ulong)((uint)(ushort)(auVar48._8_2_ ^ 0x1f) * 9 + 0x49 >> 6);
                lVar35 = lVar35 + (ulong)((uint)(ushort)(auVar48._12_2_ ^ 0x1f) * 9 + 0x49 >> 6);
                lVar32 = lVar32 + (ulong)(uVar45 * 9 + 0x49 >> 6);
                lVar33 = lVar33 + (ulong)((uint)(ushort)((ushort)(CONCAT15(auVar48[5],
                                                                           CONCAT14(auVar48[4],
                                                                                    uVar45)) >> 0x20
                                                                 ) ^ 0x1f) * 9 + 0x49 >> 6);
              } while (uVar20 != 0);
              lVar29 = lVar32 + lVar29 + lVar34 + lVar30 + lVar33 + lVar28 + lVar35 + lVar31;
              if (uVar27 == uVar17) break;
            }
            lVar28 = uVar17 - uVar27;
            puVar23 = (uint *)(lVar22 + uVar27 * 4);
            do {
              lVar28 = lVar28 + -1;
              lVar29 = lVar29 + (ulong)(((uint)LZCOUNT(*puVar23 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
              puVar23 = puVar23 + 1;
            } while (lVar28 != 0);
          }
          break;
        case 0xe:
          uVar16 = *(uint *)*param_1;
          uVar17 = (ulong)uVar16;
          lVar29 = (uVar20 & 0xffffffff) * uVar17;
          if (0 < (int)uVar16) {
            lVar22 = *(long *)((uint *)*param_1 + 2);
            if (uVar16 == 1) {
              uVar27 = 0;
            }
            else {
              uVar27 = uVar17 & 0x7ffffffe;
              lVar30 = 0;
              lVar28 = lVar22 + 4;
              uVar20 = uVar27;
              do {
                piVar24 = (int *)(lVar28 + -4);
                piVar4 = (int *)(lVar28 + 4);
                uVar20 = uVar20 - 2;
                lVar28 = lVar28 + 8;
                lVar29 = lVar29 + ((LZCOUNT((long)*piVar24 | 1) ^ 0x3fU) * 9 + 0x49 >> 6);
                lVar30 = lVar30 + ((LZCOUNT((long)*piVar4 | 1) ^ 0x3fU) * 9 + 0x49 >> 6);
              } while (uVar20 != 0);
              lVar29 = lVar30 + lVar29;
              if (uVar27 == uVar17) break;
            }
            lVar28 = uVar17 - uVar27;
            piVar24 = (int *)(lVar22 + uVar27 * 4);
            do {
              lVar28 = lVar28 + -1;
              lVar29 = lVar29 + ((LZCOUNT((long)*piVar24 | 1) ^ 0x3fU) * 9 + 0x49 >> 6);
              piVar24 = piVar24 + 1;
            } while (lVar28 != 0);
          }
          break;
        case 0x11:
          uVar16 = *(uint *)*param_1;
          uVar17 = (ulong)uVar16;
          lVar29 = (uVar20 & 0xffffffff) * uVar17;
          if (0 < (int)uVar16) {
            lVar22 = *(long *)((uint *)*param_1 + 2);
            if (uVar16 < 8) {
              uVar27 = 0;
            }
            else {
              lVar28 = 0;
              lVar30 = 0;
              lVar31 = 0;
              uVar27 = uVar17 & 0x7ffffff8;
              pauVar19 = (undefined1 (*) [16])(lVar22 + 0x10);
              lVar32 = 0;
              lVar33 = 0;
              lVar34 = 0;
              lVar35 = 0;
              uVar20 = uVar27;
              do {
                auVar39 = pauVar19[-1];
                auVar48 = *pauVar19;
                uVar20 = uVar20 - 8;
                pauVar19 = pauVar19 + 2;
                iVar7 = auVar39._0_4_ * 2;
                iVar8 = auVar39._4_4_ * 2;
                iVar9 = auVar39._8_4_ * 2;
                iVar10 = auVar39._12_4_ * 2;
                iVar11 = auVar48._0_4_ * 2;
                iVar12 = auVar48._4_4_ * 2;
                iVar13 = auVar48._8_4_ * 2;
                iVar14 = auVar48._12_4_ * 2;
                auVar39 = NEON_cmlt(auVar39,0,4);
                auVar52 = NEON_cmlt(auVar48,0,4);
                uVar36 = CONCAT13((byte)((uint)iVar7 >> 0x18) ^ auVar39[3],
                                  CONCAT12((byte)((uint)iVar7 >> 0x10) ^ auVar39[2],
                                           CONCAT11((byte)((uint)iVar7 >> 8) ^ auVar39[1],
                                                    (byte)iVar7 ^ auVar39[0])));
                auVar38._0_8_ =
                     CONCAT17((byte)((uint)iVar8 >> 0x18) ^ auVar39[7],
                              CONCAT16((byte)((uint)iVar8 >> 0x10) ^ auVar39[6],
                                       CONCAT15((byte)((uint)iVar8 >> 8) ^ auVar39[5],
                                                CONCAT14((byte)iVar8 ^ auVar39[4],uVar36))));
                auVar38[8] = (byte)iVar9 ^ auVar39[8];
                auVar38[9] = (byte)((uint)iVar9 >> 8) ^ auVar39[9];
                auVar38[10] = (byte)((uint)iVar9 >> 0x10) ^ auVar39[10];
                auVar38[0xb] = (byte)((uint)iVar9 >> 0x18) ^ auVar39[0xb];
                auVar48[0xc] = (byte)iVar10 ^ auVar39[0xc];
                auVar48._0_12_ = auVar38;
                auVar48[0xd] = (byte)((uint)iVar10 >> 8) ^ auVar39[0xd];
                auVar48[0xe] = (byte)((uint)iVar10 >> 0x10) ^ auVar39[0xe];
                auVar48[0xf] = (byte)((uint)iVar10 >> 0x18) ^ auVar39[0xf];
                uVar44 = CONCAT13((byte)((uint)iVar11 >> 0x18) ^ auVar52[3],
                                  CONCAT12((byte)((uint)iVar11 >> 0x10) ^ auVar52[2],
                                           CONCAT11((byte)((uint)iVar11 >> 8) ^ auVar52[1],
                                                    (byte)iVar11 ^ auVar52[0])));
                auVar47._0_8_ =
                     CONCAT17((byte)((uint)iVar12 >> 0x18) ^ auVar52[7],
                              CONCAT16((byte)((uint)iVar12 >> 0x10) ^ auVar52[6],
                                       CONCAT15((byte)((uint)iVar12 >> 8) ^ auVar52[5],
                                                CONCAT14((byte)iVar12 ^ auVar52[4],uVar44))));
                auVar47[8] = (byte)iVar13 ^ auVar52[8];
                auVar47[9] = (byte)((uint)iVar13 >> 8) ^ auVar52[9];
                auVar47[10] = (byte)((uint)iVar13 >> 0x10) ^ auVar52[10];
                auVar47[0xb] = (byte)((uint)iVar13 >> 0x18) ^ auVar52[0xb];
                auVar53[0xc] = (byte)iVar14 ^ auVar52[0xc];
                auVar53._0_12_ = auVar47;
                auVar53[0xd] = (byte)((uint)iVar14 >> 8) ^ auVar52[0xd];
                auVar53[0xe] = (byte)((uint)iVar14 >> 0x10) ^ auVar52[0xe];
                auVar53[0xf] = (byte)((uint)iVar14 >> 0x18) ^ auVar52[0xf];
                auVar39._0_8_ = CONCAT44((int)((ulong)auVar38._0_8_ >> 0x20),uVar36) | 0x100000001;
                auVar39._8_4_ = auVar38._8_4_ | 1;
                auVar39._12_4_ = auVar48._12_4_ | 1;
                auVar52._0_8_ = CONCAT44((int)((ulong)auVar47._0_8_ >> 0x20),uVar44) | 0x100000001;
                auVar52._8_4_ = auVar47._8_4_ | 1;
                auVar52._12_4_ = auVar53._12_4_ | 1;
                auVar39 = NEON_clz(auVar39,4);
                auVar48 = NEON_clz(auVar52,4);
                uVar16 = (uint)(ushort)(auVar39._0_2_ ^ 0x1f);
                uVar45 = (uint)(ushort)(auVar48._0_2_ ^ 0x1f);
                lVar30 = lVar30 + (ulong)((uint)(ushort)(auVar39._8_2_ ^ 0x1f) * 9 + 0x49 >> 6);
                lVar31 = lVar31 + (ulong)((uint)(ushort)(auVar39._12_2_ ^ 0x1f) * 9 + 0x49 >> 6);
                lVar29 = lVar29 + (ulong)(uVar16 * 9 + 0x49 >> 6);
                lVar28 = lVar28 + (ulong)((uint)(ushort)((ushort)(CONCAT15(auVar39[5],
                                                                           CONCAT14(auVar39[4],
                                                                                    uVar16)) >> 0x20
                                                                 ) ^ 0x1f) * 9 + 0x49 >> 6);
                lVar34 = lVar34 + (ulong)((uint)(ushort)(auVar48._8_2_ ^ 0x1f) * 9 + 0x49 >> 6);
                lVar35 = lVar35 + (ulong)((uint)(ushort)(auVar48._12_2_ ^ 0x1f) * 9 + 0x49 >> 6);
                lVar32 = lVar32 + (ulong)(uVar45 * 9 + 0x49 >> 6);
                lVar33 = lVar33 + (ulong)((uint)(ushort)((ushort)(CONCAT15(auVar48[5],
                                                                           CONCAT14(auVar48[4],
                                                                                    uVar45)) >> 0x20
                                                                 ) ^ 0x1f) * 9 + 0x49 >> 6);
              } while (uVar20 != 0);
              lVar29 = lVar32 + lVar29 + lVar34 + lVar30 + lVar33 + lVar28 + lVar35 + lVar31;
              if (uVar27 == uVar17) break;
            }
            lVar28 = uVar17 - uVar27;
            piVar24 = (int *)(lVar22 + uVar27 * 4);
            do {
              lVar28 = lVar28 + -1;
              lVar29 = lVar29 + (ulong)(((uint)LZCOUNT(*piVar24 << 1 ^ *piVar24 >> 0x1f | 1) ^ 0x1f)
                                        * 9 + 0x49 >> 6);
              piVar24 = piVar24 + 1;
            } while (lVar28 != 0);
          }
          break;
        case 0x12:
          uVar16 = *(uint *)*param_1;
          uVar17 = (ulong)uVar16;
          lVar29 = (uVar20 & 0xffffffff) * uVar17;
          if (0 < (int)uVar16) {
            lVar22 = *(long *)((uint *)*param_1 + 2);
            if (uVar16 == 1) {
              uVar27 = 0;
            }
            else {
              uVar27 = uVar17 & 0x7ffffffe;
              lVar28 = 0;
              plVar25 = (long *)(lVar22 + 8);
              uVar20 = uVar27;
              do {
                plVar1 = plVar25 + -1;
                lVar30 = *plVar25;
                uVar20 = uVar20 - 2;
                plVar25 = plVar25 + 2;
                lVar29 = lVar29 + ((LZCOUNT(*plVar1 << 1 ^ *plVar1 >> 0x3f | 1) ^ 0x3fU) * 9 + 0x49
                                  >> 6);
                lVar28 = lVar28 + ((LZCOUNT(lVar30 << 1 ^ lVar30 >> 0x3f | 1) ^ 0x3fU) * 9 + 0x49 >>
                                  6);
              } while (uVar20 != 0);
              lVar29 = lVar28 + lVar29;
              if (uVar27 == uVar17) break;
            }
            lVar28 = uVar17 - uVar27;
            plVar25 = (long *)(lVar22 + uVar27 * 8);
            do {
              lVar28 = lVar28 + -1;
              lVar29 = lVar29 + ((LZCOUNT(*plVar25 << 1 ^ *plVar25 >> 0x3f | 1) ^ 0x3fU) * 9 + 0x49
                                >> 6);
              plVar25 = plVar25 + 1;
            } while (lVar28 != 0);
          }
        }
        goto switchD_0066aae8_default;
      }
      goto LAB_0066ab54;
    }
    switch((byte)param_1[1]) {
    case 1:
    case 6:
    case 0x10:
      uVar17 = (ulong)*(uint *)*param_1 << 3;
      break;
    case 2:
    case 7:
    case 0xf:
      uVar17 = (ulong)*(uint *)*param_1 << 2;
      break;
    case 3:
      uVar16 = *(uint *)*param_1;
      uVar20 = (ulong)uVar16;
      if ((int)uVar16 < 1) goto switchD_0066aa48_default;
      lVar29 = *(long *)((uint *)*param_1 + 2);
      if (uVar16 == 1) {
        uVar27 = 0;
        uVar17 = 0;
      }
      else {
        uVar27 = uVar20 & 0x7ffffffe;
        lVar22 = 0;
        lVar28 = 0;
        puVar26 = (ulong *)(lVar29 + 8);
        uVar17 = uVar27;
        do {
          puVar2 = puVar26 + -1;
          uVar3 = *puVar26;
          uVar17 = uVar17 - 2;
          puVar26 = puVar26 + 2;
          lVar22 = lVar22 + ((LZCOUNT(*puVar2 | 1) ^ 0x3fU) * 9 + 0x49 >> 6);
          lVar28 = lVar28 + ((LZCOUNT(uVar3 | 1) ^ 0x3fU) * 9 + 0x49 >> 6);
        } while (uVar17 != 0);
        uVar17 = lVar28 + lVar22;
        if (uVar27 == uVar20) break;
      }
      lVar22 = uVar20 - uVar27;
      puVar26 = (ulong *)(lVar29 + uVar27 * 8);
      do {
        lVar22 = lVar22 + -1;
        uVar17 = uVar17 + ((LZCOUNT(*puVar26 | 1) ^ 0x3fU) * 9 + 0x49 >> 6);
        puVar26 = puVar26 + 1;
      } while (lVar22 != 0);
      break;
    case 4:
      uVar16 = *(uint *)*param_1;
      uVar20 = (ulong)uVar16;
      if ((int)uVar16 < 1) goto switchD_0066aa48_default;
      lVar29 = *(long *)((uint *)*param_1 + 2);
      if (uVar16 == 1) {
        uVar27 = 0;
        uVar17 = 0;
      }
      else {
        uVar27 = uVar20 & 0x7ffffffe;
        lVar22 = 0;
        lVar28 = 0;
        puVar26 = (ulong *)(lVar29 + 8);
        uVar17 = uVar27;
        do {
          puVar2 = puVar26 + -1;
          uVar3 = *puVar26;
          uVar17 = uVar17 - 2;
          puVar26 = puVar26 + 2;
          lVar22 = lVar22 + ((LZCOUNT(*puVar2 | 1) ^ 0x3fU) * 9 + 0x49 >> 6);
          lVar28 = lVar28 + ((LZCOUNT(uVar3 | 1) ^ 0x3fU) * 9 + 0x49 >> 6);
        } while (uVar17 != 0);
        uVar17 = lVar28 + lVar22;
        if (uVar27 == uVar20) break;
      }
      lVar22 = uVar20 - uVar27;
      puVar26 = (ulong *)(lVar29 + uVar27 * 8);
      do {
        lVar22 = lVar22 + -1;
        uVar17 = uVar17 + ((LZCOUNT(*puVar26 | 1) ^ 0x3fU) * 9 + 0x49 >> 6);
        puVar26 = puVar26 + 1;
      } while (lVar22 != 0);
      break;
    case 5:
      uVar16 = *(uint *)*param_1;
      uVar20 = (ulong)uVar16;
      if ((int)uVar16 < 1) goto switchD_0066aa48_default;
      lVar29 = *(long *)((uint *)*param_1 + 2);
      if (uVar16 == 1) {
        uVar27 = 0;
        uVar17 = 0;
      }
      else {
        uVar27 = uVar20 & 0x7ffffffe;
        lVar28 = 0;
        lVar30 = 0;
        lVar22 = lVar29 + 4;
        uVar17 = uVar27;
        do {
          piVar24 = (int *)(lVar22 + -4);
          piVar4 = (int *)(lVar22 + 4);
          uVar17 = uVar17 - 2;
          lVar22 = lVar22 + 8;
          lVar28 = lVar28 + ((LZCOUNT((long)*piVar24 | 1) ^ 0x3fU) * 9 + 0x49 >> 6);
          lVar30 = lVar30 + ((LZCOUNT((long)*piVar4 | 1) ^ 0x3fU) * 9 + 0x49 >> 6);
        } while (uVar17 != 0);
        uVar17 = lVar30 + lVar28;
        if (uVar27 == uVar20) break;
      }
      lVar22 = uVar20 - uVar27;
      piVar24 = (int *)(lVar29 + uVar27 * 4);
      do {
        lVar22 = lVar22 + -1;
        uVar17 = uVar17 + ((LZCOUNT((long)*piVar24 | 1) ^ 0x3fU) * 9 + 0x49 >> 6);
        piVar24 = piVar24 + 1;
      } while (lVar22 != 0);
      break;
    case 8:
      uVar17 = (ulong)*(uint *)*param_1;
      break;
    case 9:
    case 10:
    case 0xb:
    case 0xc:
      FUN_00675e64(auStack_68,3,
                   "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/extension_set.cc"
                   ,0x576);
                    /* try { // try from 0066aa64 to 0066aa77 has its CatchHandler @ 0066ba08 */
      uVar15 = FUN_00675a58(auStack_68,"Non-primitive types can\'t be packed.");
                    /* try { // try from 0066aa78 to 0066aa7f has its CatchHandler @ 0066ba04 */
      FUN_00675ac0(&uStack_69,uVar15);
      FUN_00675e7c(auStack_68);
    default:
switchD_0066aa48_default:
      *(uint *)((long)param_1 + 0xc) = 0;
      lVar29 = 0;
      goto switchD_0066aae8_default;
    case 0xd:
      uVar16 = *(uint *)*param_1;
      uVar20 = (ulong)uVar16;
      if ((int)uVar16 < 1) goto switchD_0066aa48_default;
      lVar29 = *(long *)((uint *)*param_1 + 2);
      if (uVar16 < 8) {
        uVar27 = 0;
        uVar17 = 0;
      }
      else {
        lVar22 = 0;
        lVar28 = 0;
        uVar27 = uVar20 & 0x7ffffff8;
        lVar30 = 0;
        lVar31 = 0;
        pauVar19 = (undefined1 (*) [16])(lVar29 + 0x10);
        lVar32 = 0;
        lVar33 = 0;
        lVar34 = 0;
        lVar35 = 0;
        uVar17 = uVar27;
        do {
          auVar39 = pauVar19[-1];
          auVar48 = *pauVar19;
          uVar17 = uVar17 - 8;
          pauVar19 = pauVar19 + 2;
          auVar42._0_8_ = auVar39._0_8_ | 0x100000001;
          auVar42._8_4_ = auVar39._8_4_ | 1;
          auVar42._12_4_ = auVar39._12_4_ | 1;
          auVar51._0_8_ = auVar48._0_8_ | 0x100000001;
          auVar51._8_4_ = auVar48._8_4_ | 1;
          auVar51._12_4_ = auVar48._12_4_ | 1;
          auVar39 = NEON_clz(auVar42,4);
          auVar48 = NEON_clz(auVar51,4);
          uVar16 = (uint)(ushort)(auVar39._0_2_ ^ 0x1f);
          uVar45 = (uint)(ushort)(auVar48._0_2_ ^ 0x1f);
          lVar30 = lVar30 + (ulong)((uint)(ushort)(auVar39._8_2_ ^ 0x1f) * 9 + 0x49 >> 6);
          lVar31 = lVar31 + (ulong)((uint)(ushort)(auVar39._12_2_ ^ 0x1f) * 9 + 0x49 >> 6);
          lVar22 = lVar22 + (ulong)(uVar16 * 9 + 0x49 >> 6);
          lVar28 = lVar28 + (ulong)((uint)(ushort)((ushort)(CONCAT15(auVar39[5],
                                                                     CONCAT14(auVar39[4],uVar16)) >>
                                                           0x20) ^ 0x1f) * 9 + 0x49 >> 6);
          lVar34 = lVar34 + (ulong)((uint)(ushort)(auVar48._8_2_ ^ 0x1f) * 9 + 0x49 >> 6);
          lVar35 = lVar35 + (ulong)((uint)(ushort)(auVar48._12_2_ ^ 0x1f) * 9 + 0x49 >> 6);
          lVar32 = lVar32 + (ulong)(uVar45 * 9 + 0x49 >> 6);
          lVar33 = lVar33 + (ulong)((uint)(ushort)((ushort)(CONCAT15(auVar48[5],
                                                                     CONCAT14(auVar48[4],uVar45)) >>
                                                           0x20) ^ 0x1f) * 9 + 0x49 >> 6);
        } while (uVar17 != 0);
        uVar17 = lVar32 + lVar22 + lVar34 + lVar30 + lVar33 + lVar28 + lVar35 + lVar31;
        if (uVar27 == uVar20) break;
      }
      lVar22 = uVar20 - uVar27;
      puVar23 = (uint *)(lVar29 + uVar27 * 4);
      do {
        lVar22 = lVar22 + -1;
        uVar17 = uVar17 + (((uint)LZCOUNT(*puVar23 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
        puVar23 = puVar23 + 1;
      } while (lVar22 != 0);
      break;
    case 0xe:
      uVar16 = *(uint *)*param_1;
      uVar20 = (ulong)uVar16;
      if ((int)uVar16 < 1) goto switchD_0066aa48_default;
      lVar29 = *(long *)((uint *)*param_1 + 2);
      if (uVar16 == 1) {
        uVar27 = 0;
        uVar17 = 0;
      }
      else {
        uVar27 = uVar20 & 0x7ffffffe;
        lVar28 = 0;
        lVar30 = 0;
        lVar22 = lVar29 + 4;
        uVar17 = uVar27;
        do {
          piVar24 = (int *)(lVar22 + -4);
          piVar4 = (int *)(lVar22 + 4);
          uVar17 = uVar17 - 2;
          lVar22 = lVar22 + 8;
          lVar28 = lVar28 + ((LZCOUNT((long)*piVar24 | 1) ^ 0x3fU) * 9 + 0x49 >> 6);
          lVar30 = lVar30 + ((LZCOUNT((long)*piVar4 | 1) ^ 0x3fU) * 9 + 0x49 >> 6);
        } while (uVar17 != 0);
        uVar17 = lVar30 + lVar28;
        if (uVar27 == uVar20) break;
      }
      lVar22 = uVar20 - uVar27;
      piVar24 = (int *)(lVar29 + uVar27 * 4);
      do {
        lVar22 = lVar22 + -1;
        uVar17 = uVar17 + ((LZCOUNT((long)*piVar24 | 1) ^ 0x3fU) * 9 + 0x49 >> 6);
        piVar24 = piVar24 + 1;
      } while (lVar22 != 0);
      break;
    case 0x11:
      uVar16 = *(uint *)*param_1;
      uVar20 = (ulong)uVar16;
      if ((int)uVar16 < 1) goto switchD_0066aa48_default;
      lVar29 = *(long *)((uint *)*param_1 + 2);
      if (uVar16 < 8) {
        uVar27 = 0;
        uVar17 = 0;
      }
      else {
        lVar22 = 0;
        lVar28 = 0;
        uVar27 = uVar20 & 0x7ffffff8;
        lVar30 = 0;
        lVar31 = 0;
        pauVar19 = (undefined1 (*) [16])(lVar29 + 0x10);
        lVar32 = 0;
        lVar33 = 0;
        lVar34 = 0;
        lVar35 = 0;
        uVar17 = uVar27;
        do {
          auVar39 = pauVar19[-1];
          auVar48 = *pauVar19;
          uVar17 = uVar17 - 8;
          pauVar19 = pauVar19 + 2;
          iVar7 = auVar39._0_4_ * 2;
          iVar8 = auVar39._4_4_ * 2;
          iVar9 = auVar39._8_4_ * 2;
          iVar10 = auVar39._12_4_ * 2;
          iVar11 = auVar48._0_4_ * 2;
          iVar12 = auVar48._4_4_ * 2;
          iVar13 = auVar48._8_4_ * 2;
          iVar14 = auVar48._12_4_ * 2;
          auVar39 = NEON_cmlt(auVar39,0,4);
          auVar48 = NEON_cmlt(auVar48,0,4);
          uVar36 = CONCAT13((byte)((uint)iVar7 >> 0x18) ^ auVar39[3],
                            CONCAT12((byte)((uint)iVar7 >> 0x10) ^ auVar39[2],
                                     CONCAT11((byte)((uint)iVar7 >> 8) ^ auVar39[1],
                                              (byte)iVar7 ^ auVar39[0])));
          auVar37._0_8_ =
               CONCAT17((byte)((uint)iVar8 >> 0x18) ^ auVar39[7],
                        CONCAT16((byte)((uint)iVar8 >> 0x10) ^ auVar39[6],
                                 CONCAT15((byte)((uint)iVar8 >> 8) ^ auVar39[5],
                                          CONCAT14((byte)iVar8 ^ auVar39[4],uVar36))));
          auVar37[8] = (byte)iVar9 ^ auVar39[8];
          auVar37[9] = (byte)((uint)iVar9 >> 8) ^ auVar39[9];
          auVar37[10] = (byte)((uint)iVar9 >> 0x10) ^ auVar39[10];
          auVar37[0xb] = (byte)((uint)iVar9 >> 0x18) ^ auVar39[0xb];
          auVar40[0xc] = (byte)iVar10 ^ auVar39[0xc];
          auVar40._0_12_ = auVar37;
          auVar40[0xd] = (byte)((uint)iVar10 >> 8) ^ auVar39[0xd];
          auVar40[0xe] = (byte)((uint)iVar10 >> 0x10) ^ auVar39[0xe];
          auVar40[0xf] = (byte)((uint)iVar10 >> 0x18) ^ auVar39[0xf];
          uVar44 = CONCAT13((byte)((uint)iVar11 >> 0x18) ^ auVar48[3],
                            CONCAT12((byte)((uint)iVar11 >> 0x10) ^ auVar48[2],
                                     CONCAT11((byte)((uint)iVar11 >> 8) ^ auVar48[1],
                                              (byte)iVar11 ^ auVar48[0])));
          auVar46._0_8_ =
               CONCAT17((byte)((uint)iVar12 >> 0x18) ^ auVar48[7],
                        CONCAT16((byte)((uint)iVar12 >> 0x10) ^ auVar48[6],
                                 CONCAT15((byte)((uint)iVar12 >> 8) ^ auVar48[5],
                                          CONCAT14((byte)iVar12 ^ auVar48[4],uVar44))));
          auVar46[8] = (byte)iVar13 ^ auVar48[8];
          auVar46[9] = (byte)((uint)iVar13 >> 8) ^ auVar48[9];
          auVar46[10] = (byte)((uint)iVar13 >> 0x10) ^ auVar48[10];
          auVar46[0xb] = (byte)((uint)iVar13 >> 0x18) ^ auVar48[0xb];
          auVar49[0xc] = (byte)iVar14 ^ auVar48[0xc];
          auVar49._0_12_ = auVar46;
          auVar49[0xd] = (byte)((uint)iVar14 >> 8) ^ auVar48[0xd];
          auVar49[0xe] = (byte)((uint)iVar14 >> 0x10) ^ auVar48[0xe];
          auVar49[0xf] = (byte)((uint)iVar14 >> 0x18) ^ auVar48[0xf];
          auVar41._0_8_ = CONCAT44((int)((ulong)auVar37._0_8_ >> 0x20),uVar36) | 0x100000001;
          auVar41._8_4_ = auVar37._8_4_ | 1;
          auVar41._12_4_ = auVar40._12_4_ | 1;
          auVar50._0_8_ = CONCAT44((int)((ulong)auVar46._0_8_ >> 0x20),uVar44) | 0x100000001;
          auVar50._8_4_ = auVar46._8_4_ | 1;
          auVar50._12_4_ = auVar49._12_4_ | 1;
          auVar39 = NEON_clz(auVar41,4);
          auVar48 = NEON_clz(auVar50,4);
          uVar16 = (uint)(ushort)(auVar39._0_2_ ^ 0x1f);
          uVar45 = (uint)(ushort)(auVar48._0_2_ ^ 0x1f);
          lVar30 = lVar30 + (ulong)((uint)(ushort)(auVar39._8_2_ ^ 0x1f) * 9 + 0x49 >> 6);
          lVar31 = lVar31 + (ulong)((uint)(ushort)(auVar39._12_2_ ^ 0x1f) * 9 + 0x49 >> 6);
          lVar22 = lVar22 + (ulong)(uVar16 * 9 + 0x49 >> 6);
          lVar28 = lVar28 + (ulong)((uint)(ushort)((ushort)(CONCAT15(auVar39[5],
                                                                     CONCAT14(auVar39[4],uVar16)) >>
                                                           0x20) ^ 0x1f) * 9 + 0x49 >> 6);
          lVar34 = lVar34 + (ulong)((uint)(ushort)(auVar48._8_2_ ^ 0x1f) * 9 + 0x49 >> 6);
          lVar35 = lVar35 + (ulong)((uint)(ushort)(auVar48._12_2_ ^ 0x1f) * 9 + 0x49 >> 6);
          lVar32 = lVar32 + (ulong)(uVar45 * 9 + 0x49 >> 6);
          lVar33 = lVar33 + (ulong)((uint)(ushort)((ushort)(CONCAT15(auVar48[5],
                                                                     CONCAT14(auVar48[4],uVar45)) >>
                                                           0x20) ^ 0x1f) * 9 + 0x49 >> 6);
        } while (uVar17 != 0);
        uVar17 = lVar32 + lVar22 + lVar34 + lVar30 + lVar33 + lVar28 + lVar35 + lVar31;
        if (uVar27 == uVar20) break;
      }
      lVar22 = uVar20 - uVar27;
      piVar24 = (int *)(lVar29 + uVar27 * 4);
      do {
        lVar22 = lVar22 + -1;
        uVar17 = uVar17 + (((uint)LZCOUNT(*piVar24 << 1 ^ *piVar24 >> 0x1f | 1) ^ 0x1f) * 9 + 0x49
                          >> 6);
        piVar24 = piVar24 + 1;
      } while (lVar22 != 0);
      break;
    case 0x12:
      uVar16 = *(uint *)*param_1;
      uVar20 = (ulong)uVar16;
      if ((int)uVar16 < 1) goto switchD_0066aa48_default;
      lVar29 = *(long *)((uint *)*param_1 + 2);
      if (uVar16 == 1) {
        uVar27 = 0;
        uVar17 = 0;
      }
      else {
        uVar27 = uVar20 & 0x7ffffffe;
        lVar22 = 0;
        lVar28 = 0;
        plVar25 = (long *)(lVar29 + 8);
        uVar17 = uVar27;
        do {
          plVar1 = plVar25 + -1;
          lVar30 = *plVar25;
          uVar17 = uVar17 - 2;
          plVar25 = plVar25 + 2;
          lVar22 = lVar22 + ((LZCOUNT(*plVar1 << 1 ^ *plVar1 >> 0x3f | 1) ^ 0x3fU) * 9 + 0x49 >> 6);
          lVar28 = lVar28 + ((LZCOUNT(lVar30 << 1 ^ lVar30 >> 0x3f | 1) ^ 0x3fU) * 9 + 0x49 >> 6);
        } while (uVar17 != 0);
        uVar17 = lVar28 + lVar22;
        if (uVar27 == uVar20) break;
      }
      lVar22 = uVar20 - uVar27;
      plVar25 = (long *)(lVar29 + uVar27 * 8);
      do {
        lVar22 = lVar22 + -1;
        uVar17 = uVar17 + ((LZCOUNT(*plVar25 << 1 ^ *plVar25 >> 0x3f | 1) ^ 0x3fU) * 9 + 0x49 >> 6);
        plVar25 = plVar25 + 1;
      } while (lVar22 != 0);
    }
    *(uint *)((long)param_1 + 0xc) = (uint)uVar17;
    lVar29 = 0;
    if (uVar17 != 0) {
      lVar29 = uVar17 + (((uint)LZCOUNT(param_2 << 3 | 3) ^ 0x1f) * 9 + 0x49 >> 6) +
               (ulong)(((uint)LZCOUNT((uint)uVar17 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    }
    goto switchD_0066aae8_default;
  }
  if ((*(byte *)((long)param_1 + 10) & 1) != 0) {
LAB_0066ab54:
    lVar29 = 0;
    goto switchD_0066aae8_default;
  }
  lVar29 = (ulong)(((uint)LZCOUNT(param_2 << 3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) <<
           ((char)param_1[1] == '\n');
  switch((char)param_1[1]) {
  case '\x01':
  case '\x06':
  case '\x10':
    lVar29 = lVar29 + 8;
    break;
  case '\x02':
  case '\a':
  case '\x0f':
    lVar29 = lVar29 + 4;
    break;
  case '\x03':
  case '\x04':
    uVar20 = *param_1;
    goto LAB_0066afdc;
  case '\x05':
  case '\x0e':
    uVar20 = (ulong)(int)(uint)*param_1;
    goto LAB_0066afdc;
  case '\b':
    lVar29 = lVar29 + 1;
    break;
  case '\t':
  case '\f':
    bVar5 = *(byte *)*param_1;
    uVar20 = (ulong)(bVar5 >> 1);
    if ((bVar5 & 1) != 0) {
      uVar20 = *(ulong *)((byte *)*param_1 + 8);
    }
    lVar29 = uVar20 + lVar29 + (ulong)(((uint)LZCOUNT((uint)uVar20 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    break;
  case '\n':
    lVar22 = (**(code **)(*(long *)*param_1 + 0x40))();
    lVar29 = lVar22 + lVar29;
    break;
  case '\v':
    if ((*(byte *)((long)param_1 + 10) >> 4 & 1) == 0) {
      pcVar18 = *(code **)(*(long *)*param_1 + 0x40);
    }
    else {
      pcVar18 = *(code **)(*(long *)*param_1 + 0x58);
    }
    lVar22 = (*pcVar18)();
    lVar29 = lVar22 + lVar29 + (ulong)(((uint)LZCOUNT((uint)lVar22 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    break;
  case '\r':
    uVar16 = (uint)*param_1;
    goto LAB_0066affc;
  case '\x11':
    uVar16 = (uint)*param_1 << 1 ^ (int)(uint)*param_1 >> 0x1f;
LAB_0066affc:
    lVar29 = lVar29 + (ulong)(((uint)LZCOUNT(uVar16 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    break;
  case '\x12':
    uVar20 = *param_1 << 1 ^ (long)*param_1 >> 0x3f;
LAB_0066afdc:
    lVar29 = lVar29 + ((LZCOUNT(uVar20 | 1) ^ 0x3fU) * 9 + 0x49 >> 6);
  }
switchD_0066aae8_default:
  if (*(long *)(lVar6 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar29;
}


// ===== 0066ba30  FUN_0066ba30 =====

long * FUN_0066ba30(long param_1,int param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar2 = (long *)(*(long *)(param_1 + 0x10) + 8);
  plVar5 = (long *)*plVar2;
  plVar3 = plVar2;
  plVar4 = plVar2;
  if (plVar5 != (long *)0x0) {
    do {
      lVar1 = 8;
      if (param_2 <= (int)plVar5[4]) {
        lVar1 = 0;
        plVar4 = plVar5;
      }
      plVar5 = *(long **)((long)plVar5 + lVar1);
    } while (plVar5 != (long *)0x0);
    if ((plVar4 != plVar2) && ((int)plVar4[4] <= param_2)) {
      plVar3 = plVar4;
    }
  }
  plVar4 = (long *)0x0;
  if (plVar3 != plVar2) {
    plVar4 = plVar3 + 5;
  }
  return plVar4;
}


// ===== 0066ba84  FUN_0066ba84 =====

undefined1  [16] FUN_0066ba84(long *param_1,int *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  plVar3 = param_1 + 1;
  plVar4 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    plVar1 = (long *)*plVar3;
    do {
      while (plVar3 = plVar1, *param_2 < (int)plVar3[4]) {
        plVar1 = (long *)*plVar3;
        plVar4 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_0066baec;
      }
      if (*param_2 <= (int)plVar3[4]) {
        auVar10._8_8_ = 0;
        auVar10._0_8_ = plVar3;
        return auVar10;
      }
      plVar1 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar4 = plVar3 + 1;
  }
LAB_0066baec:
  auVar9._0_8_ = (undefined8 *)FUN_00759c3c(0x40);
  uVar6 = *(undefined8 *)(param_2 + 2);
  uVar5 = *(undefined8 *)param_2;
  uVar8 = *(undefined8 *)(param_2 + 6);
  uVar7 = *(undefined8 *)(param_2 + 4);
  *auVar9._0_8_ = 0;
  auVar9._0_8_[1] = 0;
  auVar9._0_8_[2] = plVar3;
  auVar9._0_8_[5] = uVar6;
  auVar9._0_8_[4] = uVar5;
  auVar9._0_8_[7] = uVar8;
  auVar9._0_8_[6] = uVar7;
  *plVar4 = (long)auVar9._0_8_;
  puVar2 = auVar9._0_8_;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    puVar2 = (undefined8 *)*plVar4;
  }
  FUN_00328410(param_1[1],puVar2);
  param_1[2] = param_1[2] + 1;
  auVar9._8_8_ = 1;
  return auVar9;
}


// ===== 0066bb74  FUN_0066bb74 =====

undefined8 * FUN_0066bb74(undefined8 *param_1,int *param_2)

{
  long lVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *__ptr;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar4 = param_1 + 1;
  puVar3 = (undefined8 *)*puVar4;
  if (puVar3 != (undefined8 *)0x0) {
    __ptr = puVar4;
    puVar6 = puVar3;
    do {
      lVar1 = 8;
      if (*param_2 <= *(int *)(puVar6 + 4)) {
        lVar1 = 0;
        __ptr = puVar6;
      }
      puVar6 = *(undefined8 **)((long)puVar6 + lVar1);
    } while (puVar6 != (undefined8 *)0x0);
    if ((__ptr == puVar4) || (*param_2 < *(int *)(__ptr + 4))) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      puVar4 = __ptr;
      puVar6 = (undefined8 *)__ptr[1];
      if ((undefined8 *)__ptr[1] == (undefined8 *)0x0) {
        do {
          puVar5 = (undefined8 *)puVar4[2];
          bVar2 = (undefined8 *)*puVar5 != puVar4;
          puVar4 = puVar5;
        } while (bVar2);
      }
      else {
        do {
          puVar5 = puVar6;
          puVar6 = (undefined8 *)*puVar5;
        } while ((undefined8 *)*puVar5 != (undefined8 *)0x0);
      }
      if ((undefined8 *)*param_1 == __ptr) {
        *param_1 = puVar5;
      }
      param_1[2] = param_1[2] + -1;
      FUN_00328dd0(puVar3,__ptr);
      free(__ptr);
      puVar3 = (undefined8 *)0x1;
    }
  }
  return puVar3;
}


// ===== 0066bc40  FUN_0066bc40 =====

byte * FUN_0066bc40(uint param_1,byte *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  ulong uVar3;
  ulong uVar4;
  
  *param_2 = (byte)param_1;
  if (param_1 < 0x80) {
    return param_2 + 1;
  }
  pbVar2 = param_2 + 2;
  *param_2 = (byte)param_1 | 0x80;
  uVar3 = (ulong)(long)(int)param_1 >> 7;
  param_2[1] = (byte)uVar3;
  pbVar1 = pbVar2;
  if (0x3fff < param_1) {
    do {
      uVar4 = uVar3 >> 0xe;
      uVar3 = uVar3 >> 7;
      pbVar1[-1] = pbVar1[-1] | 0x80;
      pbVar2 = pbVar1 + 1;
      *pbVar1 = (byte)uVar3;
      pbVar1 = pbVar2;
    } while (uVar4 != 0);
  }
  return pbVar2;
}


// ===== 0066bc94  FUN_0066bc94 =====

void FUN_0066bc94(long *param_1,long *param_2)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  
  if (param_1 != param_2) {
    do {
      FUN_00667a60(param_1 + 5);
      plVar1 = (long *)param_1[1];
      plVar3 = param_1;
      if ((long *)param_1[1] == (long *)0x0) {
        do {
          param_1 = (long *)plVar3[2];
          bVar2 = (long *)*param_1 != plVar3;
          plVar3 = param_1;
        } while (bVar2);
      }
      else {
        do {
          param_1 = plVar1;
          plVar1 = (long *)*param_1;
        } while ((long *)*param_1 != (long *)0x0);
      }
    } while (param_1 != param_2);
  }
  return;
}


// ===== 0066bd04  FUN_0066bd04 =====

void FUN_0066bd04(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_0066bd04(param_1,*param_2);
    FUN_0066bd04(param_1,param_2[1]);
    free(param_2);
    return;
  }
  return;
}


// ===== 0066bd48  thunk_FUN_00673a60 =====

void thunk_FUN_00673a60(long param_1)

{
  long *__ptr;
  
  if ((0 < *(int *)(param_1 + 4)) && (__ptr = (long *)(*(long *)(param_1 + 8) + -8), *__ptr == 0)) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 0066bd4c  thunk_FUN_006742e4 =====

void thunk_FUN_006742e4(long param_1)

{
  long *__ptr;
  
  if ((0 < *(int *)(param_1 + 4)) && (__ptr = (long *)(*(long *)(param_1 + 8) + -8), *__ptr == 0)) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 0066bd50  thunk_FUN_00673ea0 =====

void thunk_FUN_00673ea0(long param_1)

{
  long *__ptr;
  
  if ((0 < *(int *)(param_1 + 4)) && (__ptr = (long *)(*(long *)(param_1 + 8) + -8), *__ptr == 0)) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 0066bd54  thunk_FUN_00674728 =====

void thunk_FUN_00674728(long param_1)

{
  long *__ptr;
  
  if ((0 < *(int *)(param_1 + 4)) && (__ptr = (long *)(*(long *)(param_1 + 8) + -8), *__ptr == 0)) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 0066bd58  thunk_FUN_00674b68 =====

void thunk_FUN_00674b68(long param_1)

{
  long *__ptr;
  
  if ((0 < *(int *)(param_1 + 4)) && (__ptr = (long *)(*(long *)(param_1 + 8) + -8), *__ptr == 0)) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 0066bd5c  thunk_FUN_00674fac =====

void thunk_FUN_00674fac(long param_1)

{
  long *__ptr;
  
  if ((0 < *(int *)(param_1 + 4)) && (__ptr = (long *)(*(long *)(param_1 + 8) + -8), *__ptr == 0)) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 0066bd60  thunk_FUN_00673630 =====

void thunk_FUN_00673630(long param_1)

{
  long *__ptr;
  
  if ((0 < *(int *)(param_1 + 4)) && (__ptr = (long *)(*(long *)(param_1 + 8) + -8), *__ptr == 0)) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 0066bd64  thunk_FUN_00675290 =====

void thunk_FUN_00675290(long *param_1)

{
  uint *__ptr;
  byte *__ptr_00;
  ulong uVar1;
  
  __ptr = (uint *)param_1[2];
  if ((__ptr != (uint *)0x0) && (*param_1 == 0)) {
    uVar1 = (ulong)*__ptr;
    if (0 < (int)*__ptr) {
      do {
        __ptr = __ptr + 2;
        __ptr_00 = *(byte **)__ptr;
        if (__ptr_00 != (byte *)0x0) {
          if ((*__ptr_00 & 1) != 0) {
            free(*(void **)(__ptr_00 + 0x10));
          }
          free(__ptr_00);
        }
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
      __ptr = (uint *)param_1[2];
    }
    free(__ptr);
  }
  param_1[2] = 0;
  return;
}


// ===== 0066bd68  FUN_0066bd68 =====

void FUN_0066bd68(long *param_1)

{
  if ((param_1[2] != 0) && (*param_1 == 0)) {
                    /* try { // try from 0066bd80 to 0066bd83 has its CatchHandler @ 0066bd8c */
    FUN_00675910();
  }
  return;
}


// ===== 0066bd90  FUN_0066bd90 =====

void FUN_0066bd90(long *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  
  piVar4 = (int *)param_1[2];
  if (piVar4 == (int *)0x0) {
    iVar5 = *(int *)((long)param_1 + 0xc);
LAB_0066be10:
    FUN_006758fc(param_1,iVar5 + 1);
LAB_0066be1c:
    piVar4 = (int *)param_1[2];
    iVar1 = *piVar4;
  }
  else {
    iVar1 = *piVar4;
    iVar5 = *(int *)((long)param_1 + 0xc);
    if (iVar1 < iVar5) {
      iVar5 = (int)param_1[1];
      if (iVar5 < iVar1) {
        *(undefined8 *)(piVar4 + (long)iVar1 * 2 + 2) =
             *(undefined8 *)(piVar4 + (long)iVar5 * 2 + 2);
      }
      *(undefined8 *)(piVar4 + (long)iVar5 * 2 + 2) = param_2;
      *(int *)(param_1 + 1) = iVar5 + 1;
      *(int *)param_1[2] = *(int *)param_1[2] + 1;
      return;
    }
    iVar2 = (int)param_1[1];
    if (iVar2 == iVar5) goto LAB_0066be10;
    if (iVar1 == iVar5) {
      if ((*(long **)(piVar4 + (long)iVar2 * 2 + 2) != (long *)0x0) && (*param_1 == 0)) {
        (**(code **)(**(long **)(piVar4 + (long)iVar2 * 2 + 2) + 8))();
        piVar4 = (int *)param_1[2];
      }
      goto LAB_0066be2c;
    }
    if (iVar2 < iVar1) {
      *(undefined8 *)(piVar4 + (long)iVar1 * 2 + 2) = *(undefined8 *)(piVar4 + (long)iVar2 * 2 + 2);
      goto LAB_0066be1c;
    }
  }
  *piVar4 = iVar1 + 1;
LAB_0066be2c:
  lVar3 = param_1[1];
  *(int *)(param_1 + 1) = (int)lVar3 + 1;
  *(undefined8 *)(piVar4 + (long)(int)lVar3 * 2 + 2) = param_2;
  return;
}


// ===== 0066be9c  FUN_0066be9c =====

void FUN_0066be9c(long *param_1,long *param_2)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  
  if (param_1 != param_2) {
    do {
      FUN_00664208(param_1 + 5);
      plVar1 = (long *)param_1[1];
      plVar3 = param_1;
      if ((long *)param_1[1] == (long *)0x0) {
        do {
          param_1 = (long *)plVar3[2];
          bVar2 = (long *)*param_1 != plVar3;
          plVar3 = param_1;
        } while (bVar2);
      }
      else {
        do {
          param_1 = plVar1;
          plVar1 = (long *)*param_1;
        } while ((long *)*param_1 != (long *)0x0);
      }
    } while (param_1 != param_2);
  }
  return;
}


// ===== 0066bf0c  FUN_0066bf0c =====

void FUN_0066bf0c(undefined8 *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  long *plVar1;
  bool bVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  
  if (param_2 != param_3) {
    do {
      FUN_00666f10(param_4[1],*param_4,(int)param_2[4],param_2 + 5,*(undefined8 *)param_4[2]);
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


// ===== 0066bfac  FUN_0066bfac =====

long * FUN_0066bfac(long *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  if (param_1 != param_2) {
    do {
      lVar2 = FUN_0066a9f0(param_1 + 5,(int)param_1[4]);
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


// ===== 0066c03c  FUN_0066c03c =====

void FUN_0066c03c(long param_1)

{
  FUN_0066bd04(param_1,*(undefined8 *)(param_1 + 8));
  return;
}


// ===== 0066c044  FUN_0066c044 =====

long * FUN_0066c044(undefined8 *param_1,long *param_2,long *param_3,long *param_4,int *param_5)

{
  int iVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar4 = param_1 + 1;
  if (plVar4 != param_2) {
    iVar1 = *param_5;
    if ((int)param_2[4] <= iVar1) {
      if (iVar1 <= (int)param_2[4]) {
        *param_3 = (long)param_2;
        *param_4 = (long)param_2;
        return param_4;
      }
      plVar6 = (long *)param_2[1];
      plVar7 = param_2;
      plVar5 = plVar6;
      if (plVar6 == (long *)0x0) {
        do {
          plVar3 = (long *)plVar7[2];
          bVar2 = (long *)*plVar3 != plVar7;
          plVar7 = plVar3;
        } while (bVar2);
      }
      else {
        do {
          plVar3 = plVar5;
          plVar5 = (long *)*plVar3;
        } while ((long *)*plVar3 != (long *)0x0);
      }
      if ((plVar3 == plVar4) || (iVar1 < (int)plVar3[4])) {
        if (plVar6 == (long *)0x0) {
          *param_3 = (long)param_2;
          return param_2 + 1;
        }
        *param_3 = (long)plVar3;
        return plVar3;
      }
      plVar7 = (long *)*plVar4;
      if ((long *)*plVar4 == (long *)0x0) {
        *param_3 = (long)plVar4;
        return plVar4;
      }
      do {
        while (plVar5 = plVar7, iVar1 < (int)plVar5[4]) {
          plVar4 = plVar5;
          plVar7 = (long *)*plVar5;
          if ((long *)*plVar5 == (long *)0x0) goto LAB_0066c1dc;
        }
        if (iVar1 <= (int)plVar5[4]) break;
        plVar4 = plVar5 + 1;
        plVar7 = (long *)*plVar4;
      } while ((long *)*plVar4 != (long *)0x0);
LAB_0066c1dc:
      *param_3 = (long)plVar5;
      return plVar4;
    }
  }
  plVar5 = (long *)*param_2;
  plVar7 = param_2;
  if ((long *)*param_1 != param_2) {
    plVar6 = param_2;
    plVar3 = plVar5;
    if (plVar5 == (long *)0x0) {
      do {
        plVar7 = (long *)plVar6[2];
        bVar2 = (long *)*plVar7 == plVar6;
        plVar6 = plVar7;
      } while (bVar2);
    }
    else {
      do {
        plVar7 = plVar3;
        plVar3 = (long *)plVar7[1];
      } while ((long *)plVar7[1] != (long *)0x0);
    }
    iVar1 = *param_5;
    if (iVar1 <= (int)plVar7[4]) {
      plVar7 = (long *)*plVar4;
      if ((long *)*plVar4 == (long *)0x0) {
        *param_3 = (long)plVar4;
        return plVar4;
      }
      do {
        while (plVar5 = plVar7, iVar1 < (int)plVar5[4]) {
          plVar4 = plVar5;
          plVar7 = (long *)*plVar5;
          if ((long *)*plVar5 == (long *)0x0) goto LAB_0066c134;
        }
        if (iVar1 <= (int)plVar5[4]) break;
        plVar4 = plVar5 + 1;
        plVar7 = (long *)*plVar4;
      } while ((long *)*plVar4 != (long *)0x0);
LAB_0066c134:
      *param_3 = (long)plVar5;
      return plVar4;
    }
  }
  if (plVar5 == (long *)0x0) {
    *param_3 = (long)param_2;
    return param_2;
  }
  *param_3 = (long)plVar7;
  return plVar7 + 1;
}


// ===== 0066c1f4  FUN_0066c1f4 =====

void FUN_0066c1f4(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*(long **)(param_1 + 4) != (long *)0x0) &&
     (0 < param_1[7] + param_1[0xb] + (param_1[2] - *param_1))) {
                    /* try { // try from 0066c238 to 0066c23b has its CatchHandler @ 0066c270 */
    (**(code **)(**(long **)(param_1 + 4) + 0x18))();
    iVar1 = param_1[2];
    iVar2 = param_1[0xb];
    param_1[0xb] = 0;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)param_1;
    param_1[6] = (param_1[6] - iVar2) + ((int)*(undefined8 *)param_1 - iVar1);
    param_1[7] = 0;
  }
  return;
}


// ===== 0066c274  FUN_0066c274 =====

void FUN_0066c274(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 uStack_59;
  undefined1 auStack_58 [48];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00675e64(auStack_58,2,
               "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/io/coded_stream.cc"
               ,0xc2);
                    /* try { // try from 0066c2ac to 0066c2d3 has its CatchHandler @ 0066c308 */
  uVar2 = FUN_00675a58(auStack_58,
                       "A protocol message was rejected because it was too big (more than ");
  uVar2 = FUN_00675d6c(uVar2,*(undefined4 *)(param_1 + 0x30));
  uVar2 = FUN_00675a58(uVar2,
                       " bytes).  To increase the limit (or to disable these warnings), see CodedInputStream::SetTotalBytesLimit() in third_party/protobuf/io/coded_stream.h."
                      );
                    /* try { // try from 0066c2d4 to 0066c2db has its CatchHandler @ 0066c304 */
  FUN_00675ac0(&uStack_59,uVar2);
  FUN_00675e7c(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0066c330  FUN_0066c330 =====

undefined8 FUN_0066c330(long *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  
  if (0 < *(int *)((long)param_1 + 0x2c)) {
    *param_1 = *param_1 + (long)param_3;
    return 0;
  }
  param_2 = param_2 - param_3;
  *param_1 = 0;
  param_1[1] = 0;
  iVar1 = (int)param_1[6];
  if ((int)param_1[5] <= (int)param_1[6]) {
    iVar1 = (int)param_1[5];
  }
  iVar2 = iVar1 - (int)param_1[3];
  if (iVar2 < param_2) {
    if (0 < iVar2) {
      *(int *)(param_1 + 3) = iVar1;
      (**(code **)(*(long *)param_1[2] + 0x20))((long *)param_1[2]);
    }
    return 0;
  }
  uVar4 = (**(code **)(*(long *)param_1[2] + 0x20))((long *)param_1[2],param_2);
  if ((uVar4 & 1) != 0) {
    *(int *)(param_1 + 3) = (int)param_1[3] + param_2;
    return 1;
  }
  uVar3 = (**(code **)(*(long *)param_1[2] + 0x28))();
  *(undefined4 *)(param_1 + 3) = uVar3;
  return 0;
}


// ===== 0066c41c  FUN_0066c41c =====

undefined8 FUN_0066c41c(int *param_1,undefined8 *param_2,int *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)param_1;
  if (param_1[2] == (int)uVar2) {
    uVar1 = FUN_0066c49c();
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    uVar2 = *(undefined8 *)param_1;
  }
  *param_2 = uVar2;
  *param_3 = param_1[2] - *param_1;
  return 1;
}


// ===== 0066c49c  FUN_0066c49c =====

uint FUN_0066c49c(long *param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  undefined1 uStack_79;
  undefined1 auStack_78 [52];
  uint local_44;
  long local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (((0 < *(int *)((long)param_1 + 0x2c)) || (0 < *(int *)((long)param_1 + 0x1c))) ||
     ((int)param_1[3] == (int)param_1[5])) {
    uVar3 = 0;
    if (((int)param_1[6] <= (int)param_1[3] - *(int *)((long)param_1 + 0x2c)) &&
       ((int)param_1[6] != (int)param_1[5])) {
      FUN_0066c274(param_1);
      uVar3 = 0;
    }
    goto LAB_0066c518;
  }
  plVar8 = (long *)param_1[2];
  do {
    uVar3 = (**(code **)(*plVar8 + 0x10))(plVar8,&local_40,&local_44);
    if ((uVar3 & 1) == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      goto LAB_0066c518;
    }
  } while (local_44 == 0);
  *param_1 = local_40;
  param_1[1] = local_40 + (int)local_44;
  if ((int)local_44 < 0) {
    FUN_00675e64(auStack_78,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/io/coded_stream.cc"
                 ,0x27f);
                    /* try { // try from 0066c5d0 to 0066c5e3 has its CatchHandler @ 0066c660 */
    uVar4 = FUN_00675a58(auStack_78,"CHECK failed: (buffer_size) >= (0): ");
                    /* try { // try from 0066c5e4 to 0066c5eb has its CatchHandler @ 0066c65c */
    FUN_00675ac0(&uStack_79,uVar4);
    FUN_00675e7c(auStack_78);
    iVar6 = (int)param_1[3];
    iVar7 = iVar6 - (local_44 ^ 0x7fffffff);
    if (iVar7 == 0 || iVar6 < (int)(local_44 ^ 0x7fffffff)) goto LAB_0066c610;
LAB_0066c594:
    *(int *)((long)param_1 + 0x1c) = iVar7;
    lVar5 = param_1[1] - (long)iVar7;
    iVar6 = 0x7fffffff;
    param_1[1] = lVar5;
  }
  else {
    iVar6 = (int)param_1[3];
    iVar7 = iVar6 - (local_44 ^ 0x7fffffff);
    if (iVar7 != 0 && (int)(local_44 ^ 0x7fffffff) <= iVar6) goto LAB_0066c594;
LAB_0066c610:
    lVar5 = param_1[1];
    iVar6 = local_44 + iVar6;
  }
  *(int *)(param_1 + 3) = iVar6;
  iVar7 = (int)param_1[6];
  if ((int)param_1[5] <= (int)param_1[6]) {
    iVar7 = (int)param_1[5];
  }
  lVar5 = lVar5 + *(int *)((long)param_1 + 0x2c);
  iVar1 = iVar6 - iVar7;
  param_1[1] = lVar5;
  if (iVar1 == 0 || iVar6 < iVar7) {
    *(undefined4 *)((long)param_1 + 0x2c) = 0;
  }
  else {
    *(int *)((long)param_1 + 0x2c) = iVar1;
    param_1[1] = lVar5 - iVar1;
  }
LAB_0066c518:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0066c688  FUN_0066c688 =====

undefined8 FUN_0066c688(long *param_1,byte *param_2,uint param_3)

{
  undefined8 uVar1;
  byte *__dest;
  ulong __n;
  
  if ((int)param_3 < 0) {
    return 0;
  }
  if ((int)param_1[1] - (int)*param_1 < (int)param_3) {
    uVar1 = FUN_0066c714();
    return uVar1;
  }
  __n = (ulong)param_3;
  FUN_00713cc0(param_2,__n,0);
  __dest = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    __dest = param_2 + 1;
  }
  memcpy(__dest,(void *)*param_1,__n);
  *param_1 = *param_1 + __n;
  return 1;
}


// ===== 0066c714  FUN_0066c714 =====

bool FUN_0066c714(long *param_1,byte *param_2,int param_3)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  
  bVar2 = *param_2;
  uVar3 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar3 = *(ulong *)(param_2 + 8);
  }
  if (uVar3 != 0) {
    if ((bVar2 & 1) == 0) {
      param_2[0] = 0;
      param_2[1] = 0;
    }
    else {
      **(undefined1 **)(param_2 + 0x10) = 0;
      param_2[8] = 0;
      param_2[9] = 0;
      param_2[10] = 0;
      param_2[0xb] = 0;
      param_2[0xc] = 0;
      param_2[0xd] = 0;
      param_2[0xe] = 0;
      param_2[0xf] = 0;
    }
  }
  iVar4 = (int)param_1[6];
  if ((int)param_1[5] <= (int)param_1[6]) {
    iVar4 = (int)param_1[5];
  }
  if (iVar4 != 0x7fffffff) {
    iVar4 = (iVar4 - (int)param_1[3]) +
            *(int *)((long)param_1 + 0x2c) + ((int)param_1[1] - (int)*param_1);
    if (((param_3 <= iVar4) && (0 < param_3)) && (0 < iVar4)) {
      FUN_00712ea8(param_2,param_3);
    }
  }
  do {
    iVar4 = param_3;
    lVar1 = *param_1;
    iVar5 = (int)param_1[1] - (int)lVar1;
    if (iVar4 - iVar5 == 0 || iVar4 < iVar5) {
      FUN_0071302c(param_2,lVar1,(long)iVar4);
      *param_1 = *param_1 + (long)iVar4;
      break;
    }
    param_3 = iVar4;
    if (iVar5 != 0) {
      FUN_0071302c(param_2,lVar1,(long)iVar5);
      *param_1 = *param_1 + (long)iVar5;
      param_3 = iVar4 - iVar5;
    }
    uVar3 = FUN_0066c49c(param_1);
  } while ((uVar3 & 1) != 0);
  return iVar4 <= iVar5;
}


// ===== 0066c84c  FUN_0066c84c =====

void FUN_0066c84c(long *param_1,undefined4 *param_2)

{
  void *__src;
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  size_t __n;
  undefined4 local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  puVar5 = (undefined4 *)*param_1;
  if ((int)param_1[1] - (int)puVar5 < 4) {
    puVar5 = &local_5c;
    iVar4 = 4;
    do {
      __src = (void *)*param_1;
      iVar6 = (int)param_1[1] - (int)__src;
      if (iVar4 - iVar6 == 0 || iVar4 < iVar6) {
        memcpy(puVar5,__src,(long)iVar4);
        puVar7 = (undefined4 *)((long)__src + (long)iVar4);
        puVar5 = &local_5c;
        goto LAB_0066c904;
      }
      __n = (size_t)iVar6;
      memcpy(puVar5,__src,__n);
      puVar5 = (undefined4 *)((long)puVar5 + __n);
      *param_1 = (long)__src + __n;
      uVar2 = FUN_0066c49c(param_1);
      iVar4 = iVar4 - iVar6;
    } while ((uVar2 & 1) != 0);
    uVar3 = 0;
  }
  else {
    puVar7 = puVar5 + 1;
LAB_0066c904:
    *param_1 = (long)puVar7;
    uVar3 = 1;
    *param_2 = *puVar5;
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 0066c944  FUN_0066c944 =====

void FUN_0066c944(long *param_1,undefined8 *param_2)

{
  void *__src;
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  size_t __n;
  undefined8 local_60;
  long local_58;
  
  puVar8 = &local_60;
  puVar6 = &local_60;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  puVar5 = (undefined8 *)*param_1;
  if ((int)param_1[1] - (int)puVar5 < 8) {
    iVar4 = 8;
    do {
      __src = (void *)*param_1;
      iVar7 = (int)param_1[1] - (int)__src;
      if (iVar4 - iVar7 == 0 || iVar4 < iVar7) {
        memcpy(puVar8,__src,(long)iVar4);
        puVar8 = (undefined8 *)((long)__src + (long)iVar4);
        goto LAB_0066c9fc;
      }
      __n = (size_t)iVar7;
      memcpy(puVar8,__src,__n);
      puVar8 = (undefined8 *)((long)puVar8 + __n);
      *param_1 = (long)__src + __n;
      uVar2 = FUN_0066c49c(param_1);
      iVar4 = iVar4 - iVar7;
    } while ((uVar2 & 1) != 0);
    uVar3 = 0;
  }
  else {
    puVar8 = puVar5 + 1;
    puVar6 = puVar5;
LAB_0066c9fc:
    *param_1 = (long)puVar8;
    uVar3 = 1;
    *param_2 = *puVar6;
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 0066ca3c  FUN_0066ca3c =====

long FUN_0066ca3c(ulong *param_1)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  pbVar4 = (byte *)*param_1;
  if (((int)(byte *)param_1[1] - (int)pbVar4 < 10) && ((byte *)param_1[1] <= pbVar4)) {
    pbVar4 = (byte *)FUN_0066d02c(param_1,&local_30);
    uVar5 = (ulong)pbVar4 & 1;
    if (*(long *)(lVar2 + 0x28) == local_28) {
      return local_30;
    }
    goto LAB_0066cabc;
  }
  uVar5 = (ulong)pbVar4[1];
  if ((char)pbVar4[1] < '\0') {
    uVar6 = (ulong)pbVar4[2];
    if ((char)pbVar4[2] < '\0') {
      bVar1 = pbVar4[3];
      if ((long)(char)bVar1 < 0) {
        if ((long)(char)pbVar4[4] < 0) {
          if ((char)pbVar4[5] < '\0') {
            if ((char)pbVar4[6] < '\0') {
              if ((char)pbVar4[7] < '\0') {
                if ((char)pbVar4[8] < '\0') {
                  if ((char)pbVar4[9] < '\0') {
                    uVar5 = 0;
                    if (*(long *)(lVar2 + 0x28) == local_28) {
                      return 0;
                    }
                    goto LAB_0066cabc;
                  }
                  pbVar3 = (byte *)FUN_0066dbf8(pbVar4,&local_30);
                }
                else {
                  pbVar3 = (byte *)FUN_0066db70(pbVar4,&local_30);
                }
              }
              else {
                pbVar3 = (byte *)FUN_0066daec(pbVar4,&local_30);
              }
            }
            else {
              pbVar3 = (byte *)FUN_0066da78(pbVar4,&local_30);
            }
          }
          else {
            pbVar3 = (byte *)FUN_0066da0c(pbVar4,&local_30);
          }
          goto LAB_0066cb3c;
        }
        pbVar3 = pbVar4 + 5;
        local_30 = uVar5 * 0x80 + uVar6 * 0x4000 + (ulong)bVar1 * 0x200000 +
                   (long)(char)pbVar4[4] * 0x10000000;
        lVar7 = (ulong)*pbVar4 - 0x10204080;
      }
      else {
        pbVar3 = pbVar4 + 4;
        lVar7 = (ulong)*pbVar4 - 0x204080;
        local_30 = uVar5 * 0x80 + uVar6 * 0x4000 + (long)(char)bVar1 * 0x200000;
      }
    }
    else {
      pbVar3 = pbVar4 + 3;
      local_30 = uVar5 * 0x80 + uVar6 * 0x4000;
      lVar7 = (ulong)*pbVar4 - 0x4080;
    }
    local_30 = local_30 + lVar7;
  }
  else {
    pbVar3 = pbVar4 + 2;
    local_30 = (ulong)*pbVar4 + uVar5 * 0x80 + -0x80;
  }
LAB_0066cb3c:
  *param_1 = (ulong)pbVar3;
  uVar5 = 1;
  pbVar4 = pbVar3;
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return local_30;
  }
LAB_0066cabc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pbVar4,uVar5);
}


// ===== 0066cc04  FUN_0066cc04 =====

ulong FUN_0066cc04(ulong *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined1 auVar3 [12];
  
  uVar2 = *param_1;
  if (((int)param_1[1] - (int)uVar2 < 10) && (param_1[1] <= uVar2)) {
    auVar3 = FUN_0066ca3c();
    uVar2 = auVar3._0_8_ & 0xffffffff;
    if ((auVar3 & (undefined1  [12])0x1) == (undefined1  [12])0x0) {
      uVar2 = 0xffffffffffffffff;
    }
    return uVar2;
  }
  uVar1 = (param_2 + (uint)*(byte *)(uVar2 + 1) * 0x80) - 0x80;
  if (-1 < (char)*(byte *)(uVar2 + 1)) {
    *param_1 = uVar2 + 2;
    return (ulong)uVar1;
  }
  uVar1 = (uVar1 + (uint)*(byte *)(uVar2 + 2) * 0x4000) - 0x4000;
  if (-1 < (char)*(byte *)(uVar2 + 2)) {
    *param_1 = uVar2 + 3;
    return (ulong)uVar1;
  }
  uVar1 = (uVar1 + (uint)*(byte *)(uVar2 + 3) * 0x200000) - 0x200000;
  if (-1 < (char)*(byte *)(uVar2 + 3)) {
    *param_1 = uVar2 + 4;
    return (ulong)uVar1;
  }
  uVar1 = uVar1 + *(char *)(uVar2 + 4) * 0x10000000 + 0xf0000000;
  if (-1 < *(char *)(uVar2 + 4)) {
    *param_1 = uVar2 + 5;
    return (ulong)uVar1;
  }
  if (-1 < *(char *)(uVar2 + 5)) {
    *param_1 = uVar2 + 6;
    return (ulong)uVar1;
  }
  if (*(char *)(uVar2 + 6) < '\0') {
    if (-1 < *(char *)(uVar2 + 7)) {
      *param_1 = uVar2 + 8;
      return (ulong)uVar1;
    }
    if (*(char *)(uVar2 + 8) < '\0') {
      if (-1 < *(char *)(uVar2 + 9)) {
        *param_1 = uVar2 + 10;
        return (ulong)uVar1;
      }
      return 0xffffffffffffffff;
    }
    *param_1 = uVar2 + 9;
    return (ulong)uVar1;
  }
  *param_1 = uVar2 + 7;
  return (ulong)uVar1;
}


// ===== 0066cd78  FUN_0066cd78 =====

int FUN_0066cd78(long *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  uint extraout_w1;
  char *pcVar5;
  char *pcVar6;
  
  pcVar6 = (char *)*param_1;
  pcVar5 = (char *)param_1[1];
  iVar2 = (int)pcVar5 - (int)pcVar6;
  if ((iVar2 < 10) && (iVar2 < 1)) {
    if ((int)pcVar5 == (int)pcVar6) {
      if (((0 < *(int *)((long)param_1 + 0x2c)) || ((int)param_1[3] == (int)param_1[5])) &&
         ((int)param_1[3] - *(int *)((long)param_1 + 0x2c) < (int)param_1[6])) {
        *(undefined1 *)((long)param_1 + 0x24) = 1;
        return 0;
      }
    }
    if (pcVar6 == pcVar5) {
      uVar4 = FUN_0066c49c();
      if ((uVar4 & 1) == 0) {
        if ((int)param_1[3] - *(int *)((long)param_1 + 0x2c) < (int)param_1[6]) {
          *(undefined1 *)((long)param_1 + 0x24) = 1;
          return 0;
        }
        *(bool *)((long)param_1 + 0x24) = (int)param_1[5] == (int)param_1[6];
        return 0;
      }
      pcVar6 = (char *)*param_1;
      pcVar5 = (char *)param_1[1];
    }
    if ((pcVar6 < pcVar5) && (cVar1 = *pcVar6, -1 < cVar1)) {
      *param_1 = (long)(pcVar6 + 1);
      return (int)cVar1;
    }
    iVar3 = FUN_0066ca3c();
    iVar2 = 0;
    if ((extraout_w1 & 1) != 0) {
      iVar2 = iVar3;
    }
    return iVar2;
  }
  if (param_2 == 0) {
    *param_1 = (long)(pcVar6 + 1);
    return 0;
  }
  iVar2 = param_2 + (uint)(byte)pcVar6[1] * 0x80 + -0x80;
  if (-1 < pcVar6[1]) {
    *param_1 = (long)(pcVar6 + 2);
    return iVar2;
  }
  iVar2 = iVar2 + (uint)(byte)pcVar6[2] * 0x4000 + -0x4000;
  if (-1 < pcVar6[2]) {
    *param_1 = (long)(pcVar6 + 3);
    return iVar2;
  }
  iVar2 = iVar2 + (uint)(byte)pcVar6[3] * 0x200000 + -0x200000;
  if (-1 < pcVar6[3]) {
    *param_1 = (long)(pcVar6 + 4);
    return iVar2;
  }
  iVar2 = iVar2 + pcVar6[4] * 0x10000000 + -0x10000000;
  if (-1 < pcVar6[4]) {
    *param_1 = (long)(pcVar6 + 5);
    return iVar2;
  }
  if (-1 < pcVar6[5]) {
    *param_1 = (long)(pcVar6 + 6);
    return iVar2;
  }
  if (-1 < pcVar6[6]) {
    *param_1 = (long)(pcVar6 + 7);
    return iVar2;
  }
  if (-1 < pcVar6[7]) {
    *param_1 = (long)(pcVar6 + 8);
    return iVar2;
  }
  if (-1 < pcVar6[8]) {
    *param_1 = (long)(pcVar6 + 9);
    return iVar2;
  }
  if (-1 < pcVar6[9]) {
    *param_1 = (long)(pcVar6 + 10);
    return iVar2;
  }
  return 0;
}


// ===== 0066d02c  FUN_0066d02c =====

bool FUN_0066d02c(long *param_1,ulong *param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  char cVar4;
  ulong uVar5;
  ulong uVar6;
  
  do {
    pbVar1 = (byte *)*param_1;
    if (pbVar1 != (byte *)param_1[1]) {
      bVar3 = *pbVar1;
      *param_1 = (long)(pbVar1 + 1);
      uVar5 = (ulong)bVar3 & 0x7f;
      if (-1 < (char)bVar3) {
        *param_2 = uVar5;
        return true;
      }
      goto LAB_0066d0ac;
    }
    uVar5 = FUN_0066c49c(param_1);
  } while ((uVar5 & 1) != 0);
  goto LAB_0066d064;
  while (uVar6 = FUN_0066c49c(param_1), (uVar6 & 1) != 0) {
LAB_0066d0ac:
    pcVar2 = (char *)*param_1;
    if (pcVar2 != (char *)param_1[1]) {
      cVar4 = *pcVar2;
      *param_1 = (long)(pcVar2 + 1);
      uVar5 = uVar5 | (ulong)((int)cVar4 & 0x7f) << 7;
      if (cVar4 < 0) goto LAB_0066d0fc;
      goto LAB_0066d0cc;
    }
  }
  goto LAB_0066d064;
  while (uVar6 = FUN_0066c49c(param_1), (uVar6 & 1) != 0) {
LAB_0066d0fc:
    pcVar2 = (char *)*param_1;
    if (pcVar2 != (char *)param_1[1]) {
      cVar4 = *pcVar2;
      *param_1 = (long)(pcVar2 + 1);
      uVar5 = uVar5 | (ulong)((int)cVar4 & 0x7f) << 0xe;
      if (cVar4 < 0) goto LAB_0066d138;
      goto LAB_0066d0cc;
    }
  }
  goto LAB_0066d064;
  while (uVar6 = FUN_0066c49c(param_1), (uVar6 & 1) != 0) {
LAB_0066d138:
    pcVar2 = (char *)*param_1;
    if (pcVar2 != (char *)param_1[1]) {
      cVar4 = *pcVar2;
      *param_1 = (long)(pcVar2 + 1);
      uVar5 = uVar5 | (ulong)((int)cVar4 & 0x7f) << 0x15;
      if (cVar4 < 0) goto LAB_0066d174;
      goto LAB_0066d0cc;
    }
  }
  goto LAB_0066d064;
  while (uVar6 = FUN_0066c49c(param_1), (uVar6 & 1) != 0) {
LAB_0066d174:
    pcVar2 = (char *)*param_1;
    if (pcVar2 != (char *)param_1[1]) {
      cVar4 = *pcVar2;
      *param_1 = (long)(pcVar2 + 1);
      uVar5 = uVar5 | (ulong)((int)cVar4 & 0x7f) << 0x1c;
      if (cVar4 < 0) goto LAB_0066d1b0;
      goto LAB_0066d0cc;
    }
  }
  goto LAB_0066d064;
  while (uVar6 = FUN_0066c49c(param_1), (uVar6 & 1) != 0) {
LAB_0066d1b0:
    pcVar2 = (char *)*param_1;
    if (pcVar2 != (char *)param_1[1]) {
      cVar4 = *pcVar2;
      *param_1 = (long)(pcVar2 + 1);
      uVar5 = uVar5 | (ulong)((int)cVar4 & 0x7f) << 0x23;
      if (cVar4 < 0) goto LAB_0066d1ec;
      goto LAB_0066d0cc;
    }
  }
  goto LAB_0066d064;
  while (uVar6 = FUN_0066c49c(param_1), (uVar6 & 1) != 0) {
LAB_0066d1ec:
    pcVar2 = (char *)*param_1;
    if (pcVar2 != (char *)param_1[1]) {
      cVar4 = *pcVar2;
      *param_1 = (long)(pcVar2 + 1);
      uVar5 = uVar5 | (ulong)((int)cVar4 & 0x7f) << 0x2a;
      if (cVar4 < 0) goto LAB_0066d228;
      goto LAB_0066d0cc;
    }
  }
  goto LAB_0066d064;
  while (uVar6 = FUN_0066c49c(param_1), (uVar6 & 1) != 0) {
LAB_0066d228:
    pcVar2 = (char *)*param_1;
    if (pcVar2 != (char *)param_1[1]) {
      cVar4 = *pcVar2;
      *param_1 = (long)(pcVar2 + 1);
      uVar5 = uVar5 | (ulong)((int)cVar4 & 0x7f) << 0x31;
      if (cVar4 < 0) goto LAB_0066d264;
      goto LAB_0066d0cc;
    }
  }
  goto LAB_0066d064;
  while (uVar6 = FUN_0066c49c(param_1), (uVar6 & 1) != 0) {
LAB_0066d264:
    pcVar2 = (char *)*param_1;
    if (pcVar2 != (char *)param_1[1]) {
      cVar4 = *pcVar2;
      *param_1 = (long)(pcVar2 + 1);
      uVar5 = uVar5 | (ulong)((int)cVar4 & 0x7f) << 0x38;
      if (-1 < cVar4) {
LAB_0066d0cc:
        *param_2 = uVar5;
        return true;
      }
      do {
        pbVar1 = (byte *)*param_1;
        if (pbVar1 != (byte *)param_1[1]) {
          bVar3 = *pbVar1;
          *param_1 = (long)(pbVar1 + 1);
          uVar5 = uVar5 | (ulong)bVar3 << 0x3f;
          if (-1 >= (char)bVar3) {
            uVar5 = 0;
          }
          *param_2 = uVar5;
          return -1 < (char)bVar3;
        }
        uVar6 = FUN_0066c49c(param_1);
      } while ((uVar6 & 1) != 0);
      break;
    }
  }
LAB_0066d064:
  *param_2 = 0;
  return false;
}


// ===== 0066d2dc  FUN_0066d2dc =====

long * FUN_0066d2dc(long *param_1)

{
  long *__src;
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *local_48;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1[6] == 0) {
    plVar4 = param_1 + 4;
    *(undefined1 *)(param_1 + 7) = 1;
  }
  else {
    plVar3 = (long *)*param_1;
    __src = param_1 + 2;
    if ((void *)param_1[1] == (void *)0x0) {
      lVar5 = *plVar3;
      plVar4 = param_1 + 4;
      param_1[3] = plVar3[1];
      *__src = lVar5;
    }
    else {
      memcpy((void *)param_1[1],__src,(long)plVar3 - (long)__src);
      do {
        uVar2 = (**(code **)(*(long *)param_1[6] + 0x10))((long *)param_1[6],&local_48,&local_3c);
        if ((uVar2 & 1) == 0) {
          plVar4 = param_1 + 4;
          *(undefined1 *)(param_1 + 7) = 1;
          goto LAB_0066d3a8;
        }
      } while (local_3c == 0);
      plVar4 = (long *)*param_1;
      if (0x10 < local_3c) {
        lVar5 = *plVar4;
        local_48[1] = plVar4[1];
        *local_48 = lVar5;
        *param_1 = (long)local_48 + (long)local_3c + -0x10;
        param_1[1] = 0;
        if (*(long *)(lVar1 + 0x28) == local_38) {
          return local_48;
        }
        goto LAB_0066d3bc;
      }
      lVar5 = *plVar4;
      param_1[3] = plVar4[1];
      *__src = lVar5;
      plVar4 = (long *)((long)__src + (long)local_3c);
      plVar3 = local_48;
    }
    param_1[1] = (long)plVar3;
  }
LAB_0066d3a8:
  *param_1 = (long)plVar4;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return param_1 + 2;
  }
LAB_0066d3bc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0066d3f8  FUN_0066d3f8 =====

ulong * FUN_0066d3f8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  long lVar2;
  
  do {
    if ((char)param_1[7] != '\0') {
      return param_1 + 2;
    }
    uVar1 = *param_1;
    lVar2 = FUN_0066d2dc(param_1);
    param_2 = (ulong *)(lVar2 + ((int)param_2 - (int)uVar1));
  } while ((ulong *)*param_1 <= param_2);
  return param_2;
}


// ===== 0066d454  FUN_0066d454 =====

long FUN_0066d454(long *param_1,void *param_2,int param_3,long *param_4)

{
  long *__src;
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  size_t __n;
  int iVar7;
  long lVar8;
  long lVar9;
  long *local_78;
  int local_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar8 = (*param_1 - (long)param_4) + 0x10;
  if ((int)lVar8 < param_3) {
    __src = param_1 + 2;
    plVar1 = param_1 + 4;
    do {
      __n = (size_t)(int)lVar8;
      memcpy(param_4,param_2,__n);
      param_3 = param_3 - (int)lVar8;
      param_2 = (void *)((long)param_2 + __n);
      param_4 = (long *)((long)param_4 + __n);
      plVar4 = (long *)*param_1;
      do {
        if ((*(byte *)(param_1 + 7) & 1) != 0) {
          lVar8 = (long)plVar4 + (0x10 - (long)__src);
          iVar7 = (int)lVar8;
          param_4 = __src;
          goto joined_r0x0066d5c8;
        }
        plVar5 = plVar1;
        plVar6 = __src;
        if (param_1[6] == 0) {
LAB_0066d4d8:
          *(undefined1 *)(param_1 + 7) = 1;
          *param_1 = (long)plVar1;
        }
        else if ((void *)param_1[1] == (void *)0x0) {
          lVar9 = plVar4[1];
          lVar8 = *plVar4;
          *param_1 = (long)plVar1;
          param_1[1] = (long)plVar4;
          param_1[3] = lVar9;
          *__src = lVar8;
        }
        else {
          memcpy((void *)param_1[1],__src,(long)plVar4 - (long)__src);
          do {
            uVar3 = (**(code **)(*(long *)param_1[6] + 0x10))
                              ((long *)param_1[6],&local_78,&local_6c);
            if ((uVar3 & 1) == 0) goto LAB_0066d4d8;
          } while (local_6c == 0);
          plVar5 = (long *)*param_1;
          if (local_6c < 0x11) {
            lVar8 = *plVar5;
            param_1[3] = plVar5[1];
            *__src = lVar8;
            *param_1 = (long)__src + (long)local_6c;
            param_1[1] = (long)local_78;
            plVar5 = (long *)((long)__src + (long)local_6c);
          }
          else {
            lVar8 = *plVar5;
            local_78[1] = plVar5[1];
            *local_78 = lVar8;
            plVar5 = (long *)((long)local_78 + (long)local_6c + -0x10);
            *param_1 = (long)plVar5;
            param_1[1] = 0;
            plVar6 = local_78;
          }
        }
        param_4 = (long *)((long)plVar6 + (long)((int)param_4 - (int)plVar4));
        plVar4 = plVar5;
      } while (plVar5 <= param_4);
      lVar8 = (long)plVar5 + (0x10 - (long)param_4);
      iVar7 = (int)lVar8;
joined_r0x0066d5c8:
    } while (iVar7 < param_3);
  }
  memcpy(param_4,param_2,(long)param_3);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return (long)param_4 + (long)param_3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0066d618  FUN_0066d618 =====

long * FUN_0066d618(long *param_1,void *param_2,int param_3,long *param_4)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  size_t sVar4;
  
  sVar4 = (size_t)param_3;
  if ((long)sVar4 < (*param_1 - (long)param_4) + 0x10) {
    if (*param_1 - (long)param_4 < (long)sVar4) {
      plVar3 = (long *)FUN_0066d454(param_1,param_2,param_3,param_4);
      return plVar3;
    }
    memcpy(param_4,param_2,sVar4);
    param_4 = (long *)((long)param_4 + sVar4);
  }
  else {
    if ((*(byte *)(param_1 + 7) & 1) == 0) {
      do {
        plVar3 = (long *)*param_1;
        if ((void *)param_1[1] == (void *)0x0) {
          param_1[1] = (long)param_4;
          lVar1 = (long)plVar3 + (0x10 - (long)param_4);
          goto LAB_0066d6f4;
        }
        if (param_4 <= plVar3) {
          sVar4 = (long)param_4 - (long)(param_1 + 2);
          memcpy((void *)param_1[1],param_1 + 2,sVar4);
          lVar1 = *param_1 - (long)param_4;
          param_1[1] = param_1[1] + sVar4;
          goto LAB_0066d6f4;
        }
        lVar1 = FUN_0066d2dc(param_1);
        param_4 = (long *)(lVar1 + ((int)param_4 - (int)plVar3));
      } while ((char)param_1[7] == '\0');
      lVar1 = 0;
LAB_0066d6f4:
      (**(code **)(*(long *)param_1[6] + 0x18))((long *)param_1[6],lVar1);
      param_4 = param_1 + 2;
      *param_1 = (long)param_4;
      param_1[1] = (long)param_4;
    }
    uVar2 = (**(code **)(*(long *)param_1[6] + 0x28))((long *)param_1[6],param_2,param_3);
    if ((uVar2 & 1) == 0) {
      *(undefined1 *)(param_1 + 7) = 1;
      *param_1 = (long)(param_1 + 4);
      return param_1 + 2;
    }
  }
  return param_4;
}


// ===== 0066d778  FUN_0066d778 =====

byte * FUN_0066d778(long *param_1,int param_2,byte *param_3,byte *param_4)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  byte *__dest;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  byte *pbVar7;
  size_t __n;
  
  if ((byte *)*param_1 <= param_4) {
    param_4 = (byte *)FUN_0066d3f8(param_1,param_4);
  }
  bVar4 = *param_3;
  uVar6 = *(ulong *)(param_3 + 8);
  uVar1 = param_2 << 3 | 2;
  *param_4 = (byte)uVar1;
  uVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar2 = uVar6;
  }
  if (uVar1 < 0x80) {
    param_4 = param_4 + 1;
  }
  else {
    *param_4 = (byte)uVar1 | 0x80;
    uVar5 = (uint)(param_2 << 3) >> 7;
    param_4[1] = (byte)uVar5;
    param_4 = param_4 + 2;
    pbVar7 = param_4;
    if (0x3fff < uVar1) {
      do {
        uVar1 = uVar5 >> 0xe;
        uVar5 = uVar5 >> 7;
        pbVar7[-1] = pbVar7[-1] | 0x80;
        param_4 = pbVar7 + 1;
        *pbVar7 = (byte)uVar5;
        pbVar7 = param_4;
      } while (uVar1 != 0);
    }
  }
  if ((uint)uVar2 < 0x80) {
    bVar4 = (byte)uVar2;
  }
  else {
    pbVar7 = param_4;
    uVar6 = uVar2 & 0xffffffff;
    do {
      uVar3 = uVar6 >> 0xe;
      param_4 = pbVar7 + 1;
      *pbVar7 = (byte)uVar6 | 0x80;
      bVar4 = (byte)(uVar6 >> 7);
      pbVar7 = param_4;
      uVar6 = uVar6 >> 7;
    } while (uVar3 != 0);
  }
  __dest = param_4 + 1;
  *param_4 = bVar4;
  pbVar7 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar7 = param_3 + 1;
  }
  if (*(char *)((long)param_1 + 0x39) == '\0') {
    __n = (size_t)(int)(uint)uVar2;
    if (*param_1 - (long)__dest < (long)__n) {
      pbVar7 = (byte *)FUN_0066d454(param_1,pbVar7,uVar2 & 0xffffffff);
      return pbVar7;
    }
    memcpy(__dest,pbVar7,__n);
    return __dest + __n;
  }
  pbVar7 = (byte *)FUN_0066d618(param_1,pbVar7,uVar2 & 0xffffffff);
  return pbVar7;
}


// ===== 0066d8d0  FUN_0066d8d0 =====

byte * FUN_0066d8d0(long *param_1,int param_2,byte *param_3,byte *param_4)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  size_t __n;
  
  if ((byte *)*param_1 <= param_4) {
    param_4 = (byte *)FUN_0066d3f8(param_1,param_4);
  }
  bVar4 = *param_3;
  uVar6 = *(ulong *)(param_3 + 8);
  uVar1 = param_2 << 3 | 2;
  *param_4 = (byte)uVar1;
  uVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar2 = uVar6;
  }
  if (uVar1 < 0x80) {
    pbVar7 = param_4 + 1;
  }
  else {
    pbVar7 = param_4 + 2;
    *param_4 = (byte)uVar1 | 0x80;
    uVar5 = (uint)(param_2 << 3) >> 7;
    param_4[1] = (byte)uVar5;
    pbVar8 = pbVar7;
    if (0x3fff < uVar1) {
      do {
        uVar1 = uVar5 >> 0xe;
        uVar5 = uVar5 >> 7;
        pbVar8[-1] = pbVar8[-1] | 0x80;
        pbVar7 = pbVar8 + 1;
        *pbVar8 = (byte)uVar5;
        pbVar8 = pbVar7;
      } while (uVar1 != 0);
    }
  }
  if ((uint)uVar2 < 0x80) {
    bVar4 = (byte)uVar2;
  }
  else {
    uVar6 = uVar2 & 0xffffffff;
    pbVar8 = pbVar7;
    do {
      uVar3 = uVar6 >> 0xe;
      pbVar7 = pbVar8 + 1;
      *pbVar8 = (byte)uVar6 | 0x80;
      bVar4 = (byte)(uVar6 >> 7);
      uVar6 = uVar6 >> 7;
      pbVar8 = pbVar7;
    } while (uVar3 != 0);
  }
  pbVar8 = pbVar7 + 1;
  *pbVar7 = bVar4;
  __n = (size_t)(int)(uint)uVar2;
  pbVar7 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar7 = param_3 + 1;
  }
  if (*param_1 - (long)pbVar8 < (long)__n) {
    pbVar7 = (byte *)FUN_0066d454(param_1,pbVar7,uVar2 & 0xffffffff,pbVar8);
    return pbVar7;
  }
  memcpy(pbVar8,pbVar7,__n);
  return pbVar8 + __n;
}


// ===== 0066da0c  FUN_0066da0c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_0066da0c(byte *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined1 auVar3 [16];
  
  uVar2 = *(undefined4 *)(param_1 + 1);
  auVar1._1_7_ = 0;
  auVar1[0] = (byte)((uint)uVar2 >> 0x10);
  auVar1[8] = (char)((uint)uVar2 >> 0x18);
  auVar1._9_7_ = 0;
  auVar1 = NEON_ushl(auVar1,_DAT_00200940,8);
  auVar3._1_7_ = 0;
  auVar3[0] = (byte)uVar2;
  auVar3[8] = (char)((uint)uVar2 >> 8);
  auVar3._9_7_ = 0;
  auVar3 = NEON_ushl(auVar3,_DAT_002006a0,8);
  *param_2 = auVar3._0_8_ + auVar1._0_8_ + auVar3._8_8_ + auVar1._8_8_ + ((ulong)param_1[5] << 0x23)
             + ((ulong)*param_1 - 0x810204080);
  return param_1 + 6;
}


// ===== 0066da78  FUN_0066da78 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_0066da78(byte *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined1 auVar3 [16];
  
  uVar2 = *(undefined4 *)(param_1 + 1);
  auVar1._1_7_ = 0;
  auVar1[0] = (byte)((uint)uVar2 >> 0x10);
  auVar1[8] = (char)((uint)uVar2 >> 0x18);
  auVar1._9_7_ = 0;
  auVar1 = NEON_ushl(auVar1,_DAT_00200940,8);
  auVar3._1_7_ = 0;
  auVar3[0] = (byte)uVar2;
  auVar3[8] = (char)((uint)uVar2 >> 8);
  auVar3._9_7_ = 0;
  auVar3 = NEON_ushl(auVar3,_DAT_002006a0,8);
  *param_2 = auVar3._0_8_ + auVar1._0_8_ + auVar3._8_8_ + auVar1._8_8_ + ((ulong)param_1[6] << 0x2a)
             + (((ulong)*param_1 | (ulong)param_1[5] << 0x23) - 0x40810204080);
  return param_1 + 7;
}


// ===== 0066daec  FUN_0066daec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_0066daec(byte *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined1 auVar3 [16];
  
  uVar2 = *(undefined4 *)(param_1 + 1);
  auVar1._1_7_ = 0;
  auVar1[0] = (byte)((uint)uVar2 >> 0x10);
  auVar1[8] = (char)((uint)uVar2 >> 0x18);
  auVar1._9_7_ = 0;
  auVar1 = NEON_ushl(auVar1,_DAT_00200940,8);
  auVar3._1_7_ = 0;
  auVar3[0] = (byte)uVar2;
  auVar3[8] = (char)((uint)uVar2 >> 8);
  auVar3._9_7_ = 0;
  auVar3 = NEON_ushl(auVar3,_DAT_002006a0,8);
  *param_2 = auVar3._0_8_ + auVar1._0_8_ + auVar3._8_8_ + auVar1._8_8_ + ((ulong)param_1[7] << 0x31)
             + ((ulong)param_1[5] << 0x23) + ((ulong)param_1[6] << 0x2a) + (ulong)*param_1 +
               -0x2040810204080;
  return param_1 + 8;
}


// ===== 0066db70  FUN_0066db70 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_0066db70(byte *param_1,long *param_2)

{
  undefined1 auVar1 [13];
  undefined1 auVar2 [13];
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  uVar5 = *(undefined8 *)(param_1 + 1);
  uVar3 = (undefined1)((ulong)uVar5 >> 8);
  uVar4 = (undefined1)((ulong)uVar5 >> 0x28);
  uVar9 = CONCAT35(0,CONCAT14(uVar4,(uint)(byte)((ulong)uVar5 >> 0x20)));
  auVar1[8] = (char)((ulong)uVar5 >> 0x30);
  auVar1._0_8_ = uVar9;
  auVar1._9_3_ = 0;
  auVar1[0xc] = (char)((ulong)uVar5 >> 0x38);
  uVar6 = CONCAT26(0,(uint6)CONCAT14(uVar3,(uint)CONCAT12(uVar3,(ushort)(byte)uVar5)) &
                     0xffff0000ffff);
  auVar2[8] = (char)((ulong)uVar5 >> 0x10);
  auVar2._0_8_ = uVar6;
  auVar2._9_3_ = 0;
  auVar2[0xc] = (char)((ulong)uVar5 >> 0x18);
  auVar12._0_8_ = uVar9 & 0xffffffff;
  auVar12[8] = uVar4;
  auVar12._9_7_ = 0;
  auVar13._0_8_ = (ulong)auVar1._8_5_ & 0xffffffff;
  auVar13._8_5_ = auVar1._8_5_ >> 0x20;
  auVar13._13_3_ = 0;
  auVar7._0_8_ = uVar6 & 0xffffffff;
  auVar7[8] = uVar3;
  auVar7._9_7_ = 0;
  auVar12 = NEON_ushl(auVar12,_DAT_00200650,8);
  auVar10 = NEON_ushl(auVar13,_DAT_00200b60,8);
  auVar8._8_5_ = auVar2._8_5_ >> 0x20;
  auVar8._0_8_ = (ulong)auVar2._8_5_ & 0xffffffff;
  auVar8._13_3_ = 0;
  auVar13 = NEON_ushl(auVar8,_DAT_00200940,8);
  auVar8 = NEON_ushl(auVar7,_DAT_002006a0,8);
  auVar11._0_8_ =
       CONCAT17(auVar13[7] | auVar10[7],
                CONCAT16(auVar13[6] | auVar10[6],
                         CONCAT15(auVar13[5] | auVar10[5],
                                  CONCAT14(auVar13[4] | auVar10[4],
                                           CONCAT13(auVar13[3] | auVar10[3],
                                                    CONCAT12(auVar13[2] | auVar10[2],
                                                             CONCAT11(auVar13[1] | auVar10[1],
                                                                      auVar13[0] | auVar10[0])))))))
  ;
  auVar11[8] = auVar13[8] | auVar10[8];
  auVar11[9] = auVar13[9] | auVar10[9];
  auVar11[10] = auVar13[10] | auVar10[10];
  auVar11[0xb] = auVar13[0xb] | auVar10[0xb];
  auVar11[0xc] = auVar13[0xc] | auVar10[0xc];
  auVar11[0xd] = auVar13[0xd] | auVar10[0xd];
  auVar11[0xe] = auVar13[0xe] | auVar10[0xe];
  auVar11[0xf] = auVar13[0xf] | auVar10[0xf];
  auVar10._0_8_ =
       CONCAT17(auVar8[7] | auVar12[7],
                CONCAT16(auVar8[6] | auVar12[6],
                         CONCAT15(auVar8[5] | auVar12[5],
                                  CONCAT14(auVar8[4] | auVar12[4],
                                           CONCAT13(auVar8[3] | auVar12[3],
                                                    CONCAT12(auVar8[2] | auVar12[2],
                                                             CONCAT11(auVar8[1] | auVar12[1],
                                                                      auVar8[0] | auVar12[0])))))));
  auVar10[8] = auVar8[8] | auVar12[8];
  auVar10[9] = auVar8[9] | auVar12[9];
  auVar10[10] = auVar8[10] | auVar12[10];
  auVar10[0xb] = auVar8[0xb] | auVar12[0xb];
  auVar10[0xc] = auVar8[0xc] | auVar12[0xc];
  auVar10[0xd] = auVar8[0xd] | auVar12[0xd];
  auVar10[0xe] = auVar8[0xe] | auVar12[0xe];
  auVar10[0xf] = auVar8[0xf] | auVar12[0xf];
  *param_2 = auVar10._0_8_ + auVar11._0_8_ + auVar10._8_8_ + auVar11._8_8_ + (ulong)*param_1 +
             -0x102040810204080;
  return param_1 + 9;
}


// ===== 0066dbf8  FUN_0066dbf8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_0066dbf8(byte *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined1 auVar3 [16];
  
  uVar2 = *(undefined4 *)(param_1 + 1);
  auVar1._1_7_ = 0;
  auVar1[0] = (byte)((uint)uVar2 >> 0x10);
  auVar1[8] = (char)((uint)uVar2 >> 0x18);
  auVar1._9_7_ = 0;
  auVar1 = NEON_ushl(auVar1,_DAT_00200940,8);
  auVar3._1_7_ = 0;
  auVar3[0] = (byte)uVar2;
  auVar3[8] = (char)((uint)uVar2 >> 8);
  auVar3._9_7_ = 0;
  auVar3 = NEON_ushl(auVar3,_DAT_002006a0,8);
  *param_2 = auVar3._0_8_ + auVar1._0_8_ + auVar3._8_8_ + auVar1._8_8_ + ((ulong)param_1[9] << 0x3f)
             + ((ulong)param_1[5] << 0x23) + ((ulong)param_1[6] << 0x2a) +
               (((ulong)param_1[7] << 0x31) + ((ulong)param_1[8] << 0x38) | (ulong)*param_1) +
               0x7efdfbf7efdfbf80;
  return param_1 + 10;
}


// ===== 0066dc94  FUN_0066dc94 =====

void FUN_0066dc94(long *param_1,long param_2,int param_3,int param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_007a3240;
  param_1[3] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = param_2;
  if (param_4 < 1) {
    param_4 = param_3;
  }
  *(int *)(param_1 + 2) = param_3;
  *(int *)((long)param_1 + 0x14) = param_4;
  return;
}


// ===== 0066dcb8  FUN_0066dcb8 =====

bool FUN_0066dcb8(long param_1,long *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  
  iVar4 = *(int *)(param_1 + 0x18);
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar4 < iVar3) {
    iVar1 = iVar3 - iVar4;
    if (*(int *)(param_1 + 0x14) <= iVar3 - iVar4) {
      iVar1 = *(int *)(param_1 + 0x14);
    }
    lVar5 = *(long *)(param_1 + 8);
    *(int *)(param_1 + 0x1c) = iVar1;
    *param_3 = iVar1;
    iVar1 = *(int *)(param_1 + 0x18);
    iVar2 = *(int *)(param_1 + 0x1c);
    *param_2 = lVar5 + iVar4;
    *(int *)(param_1 + 0x18) = iVar1 + iVar2;
    return iVar4 < iVar3;
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return iVar4 < iVar3;
}


// ===== 0066dd14  FUN_0066dd14 =====

void FUN_0066dd14(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 uStack_69;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 < 1) {
    FUN_00675e64(auStack_68,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/io/zero_copy_stream_impl_lite.cc"
                 ,0x50);
                    /* try { // try from 0066dd70 to 0066dd8f has its CatchHandler @ 0066de6c */
    uVar3 = FUN_00675a58(auStack_68,"CHECK failed: (last_returned_size_) > (0): ");
    uVar3 = FUN_00675a58(uVar3,"BackUp() can only be called after a successful Next().");
                    /* try { // try from 0066dd90 to 0066dd97 has its CatchHandler @ 0066de60 */
    FUN_00675ac0(&uStack_69,uVar3);
    FUN_00675e7c(auStack_68);
    iVar1 = *(int *)(param_1 + 0x1c);
  }
  if (iVar1 < param_2) {
    FUN_00675e64(auStack_68,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/io/zero_copy_stream_impl_lite.cc"
                 ,0x52);
                    /* try { // try from 0066ddc4 to 0066ddd7 has its CatchHandler @ 0066de68 */
    uVar3 = FUN_00675a58(auStack_68,"CHECK failed: (count) <= (last_returned_size_): ");
                    /* try { // try from 0066ddd8 to 0066dddf has its CatchHandler @ 0066de64 */
    FUN_00675ac0(&uStack_69,uVar3);
    FUN_00675e7c(auStack_68);
  }
  if (param_2 < 0) {
    FUN_00675e64(auStack_68,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/io/zero_copy_stream_impl_lite.cc"
                 ,0x53);
                    /* try { // try from 0066de04 to 0066de17 has its CatchHandler @ 0066de5c */
    uVar3 = FUN_00675a58(auStack_68,"CHECK failed: (count) >= (0): ");
                    /* try { // try from 0066de18 to 0066de1f has its CatchHandler @ 0066de58 */
    FUN_00675ac0(&uStack_69,uVar3);
    FUN_00675e7c(auStack_68);
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - param_2;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0066de94  FUN_0066de94 =====

void FUN_0066de94(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 uStack_69;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (param_2 < 0) {
    FUN_00675e64(auStack_68,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/io/zero_copy_stream_impl_lite.cc"
                 ,0x59);
                    /* try { // try from 0066ded8 to 0066deeb has its CatchHandler @ 0066df4c */
    uVar4 = FUN_00675a58(auStack_68,"CHECK failed: (count) >= (0): ");
                    /* try { // try from 0066deec to 0066def3 has its CatchHandler @ 0066df48 */
    FUN_00675ac0(&uStack_69,uVar4);
    FUN_00675e7c(auStack_68);
  }
  iVar2 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x18);
  iVar1 = *(int *)(param_1 + 0x18) + param_2;
  if (iVar2 < param_2) {
    iVar1 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x18) = iVar1;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_2 <= iVar2);
}


// ===== 0066df74  FUN_0066df74 =====

long FUN_0066df74(long param_1)

{
  return (long)*(int *)(param_1 + 0x18);
}


// ===== 0066df7c  FUN_0066df7c =====

void FUN_0066df7c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_00799078;
  param_1[1] = param_2;
  return;
}


// ===== 0066df90  FUN_0066df90 =====

undefined8 FUN_0066df90(long param_1,long *param_2,int *param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  long lVar6;
  bool bVar7;
  ulong *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined1 uStack_79;
  undefined1 auStack_78 [48];
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  puVar8 = *(ulong **)(param_1 + 8);
  if (puVar8 == (ulong *)0x0) {
    FUN_00675e64(auStack_78,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/io/zero_copy_stream_impl_lite.cc"
                 ,0x8d);
                    /* try { // try from 0066dfe0 to 0066dff3 has its CatchHandler @ 0066e0d0 */
    uVar9 = FUN_00675a58(auStack_78,"CHECK failed: target_ != NULL: ");
                    /* try { // try from 0066dff4 to 0066dffb has its CatchHandler @ 0066e0cc */
    FUN_00675ac0(&uStack_79,uVar9);
    FUN_00675e7c(auStack_78);
    puVar8 = *(ulong **)(param_1 + 8);
  }
  bVar7 = ((byte)*puVar8 & 1) != 0;
  uVar10 = (*puVar8 & 0xfffffffffffffffe) - 1;
  uVar2 = (ulong)(byte)((byte)*puVar8 >> 1);
  if (bVar7) {
    uVar2 = puVar8[1];
  }
  uVar3 = 0x16;
  if (bVar7) {
    uVar3 = uVar10;
  }
  uVar4 = 0x16;
  if ((*puVar8 & 1) != 0) {
    uVar4 = uVar10;
  }
  if (uVar3 <= uVar2) {
    uVar4 = uVar2 << 1;
  }
  uVar10 = uVar2 + 0x7fffffff;
  if (uVar4 <= uVar2 + 0x7fffffff) {
    uVar10 = uVar4;
  }
  if (uVar10 < 0x11) {
    uVar10 = 0x10;
  }
  FUN_00713cc0(puVar8,uVar10,0);
  pbVar11 = *(byte **)(param_1 + 8);
  pbVar12 = *(byte **)(pbVar11 + 0x10);
  if ((*pbVar11 & 1) == 0) {
    pbVar12 = pbVar11 + 1;
  }
  *param_2 = (long)(pbVar12 + uVar2);
  bVar5 = **(byte **)(param_1 + 8);
  uVar1 = (uint)(bVar5 >> 1);
  if ((bVar5 & 1) != 0) {
    uVar1 = *(uint *)(*(byte **)(param_1 + 8) + 8);
  }
  *param_3 = uVar1 - (int)uVar2;
  if (*(long *)(lVar6 + 0x28) == local_48) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0066e0f8  FUN_0066e0f8 =====

void FUN_0066e0f8(long param_1,int param_2)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  byte *pbVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 uStack_69;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (param_2 < 0) {
    FUN_00675e64(auStack_68,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/io/zero_copy_stream_impl_lite.cc"
                 ,0xa8);
                    /* try { // try from 0066e148 to 0066e15b has its CatchHandler @ 0066e268 */
    uVar5 = FUN_00675a58(auStack_68,"CHECK failed: (count) >= (0): ");
                    /* try { // try from 0066e15c to 0066e163 has its CatchHandler @ 0066e260 */
    FUN_00675ac0(&uStack_69,uVar5);
    FUN_00675e7c(auStack_68);
    pbVar4 = *(byte **)(param_1 + 8);
  }
  else {
    pbVar4 = *(byte **)(param_1 + 8);
  }
  if (pbVar4 == (byte *)0x0) {
    FUN_00675e64(auStack_68,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/io/zero_copy_stream_impl_lite.cc"
                 ,0xa9);
                    /* try { // try from 0066e18c to 0066e19f has its CatchHandler @ 0066e264 */
    uVar5 = FUN_00675a58(auStack_68,"CHECK failed: target_ != NULL: ");
                    /* try { // try from 0066e1a0 to 0066e1a7 has its CatchHandler @ 0066e25c */
    FUN_00675ac0(&uStack_69,uVar5);
    FUN_00675e7c(auStack_68);
    pbVar4 = *(byte **)(param_1 + 8);
  }
  bVar2 = *pbVar4;
  uVar6 = *(ulong *)(pbVar4 + 8);
  uVar7 = (ulong)(bVar2 >> 1);
  uVar1 = uVar7;
  if ((bVar2 & 1) != 0) {
    uVar1 = uVar6;
  }
  if (uVar1 < (ulong)(long)param_2) {
    FUN_00675e64(auStack_68,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/io/zero_copy_stream_impl_lite.cc"
                 ,0xaa);
                    /* try { // try from 0066e1ec to 0066e1ff has its CatchHandler @ 0066e270 */
    uVar5 = FUN_00675a58(auStack_68,
                         "CHECK failed: (static_cast<size_t>(count)) <= (target_->size()): ");
                    /* try { // try from 0066e200 to 0066e207 has its CatchHandler @ 0066e26c */
    FUN_00675ac0(&uStack_69,uVar5);
    FUN_00675e7c(auStack_68);
    pbVar4 = *(byte **)(param_1 + 8);
    bVar2 = *pbVar4;
    uVar6 = *(ulong *)(pbVar4 + 8);
    uVar7 = (ulong)(bVar2 >> 1);
  }
  if ((bVar2 & 1) != 0) {
    uVar7 = uVar6;
  }
  FUN_00713cc0(pbVar4,uVar7 - (long)param_2,0);
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0066e298  FUN_0066e298 =====

void FUN_0066e298(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  byte *pbVar4;
  undefined1 uStack_59;
  undefined1 auStack_58 [48];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  pbVar4 = *(byte **)(param_1 + 8);
  if (pbVar4 == (byte *)0x0) {
    FUN_00675e64(auStack_58,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/io/zero_copy_stream_impl_lite.cc"
                 ,0xaf);
                    /* try { // try from 0066e2d8 to 0066e2eb has its CatchHandler @ 0066e338 */
    uVar3 = FUN_00675a58(auStack_58,"CHECK failed: target_ != NULL: ");
                    /* try { // try from 0066e2ec to 0066e2f3 has its CatchHandler @ 0066e334 */
    FUN_00675ac0(&uStack_59,uVar3);
    FUN_00675e7c(auStack_58);
    pbVar4 = *(byte **)(param_1 + 8);
  }
  uVar1 = (ulong)(*pbVar4 >> 1);
  if ((*pbVar4 & 1) != 0) {
    uVar1 = *(ulong *)(pbVar4 + 8);
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


// ===== 0066e360  FUN_0066e360 =====

void FUN_0066e360(void)

{
  return;
}


// ===== 0066e364  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0066e368  FUN_0066e368 =====

undefined8 FUN_0066e368(void)

{
  return 0;
}


// ===== 0066e370  FUN_0066e370 =====

void FUN_0066e370(void)

{
  return;
}


// ===== 0066e374  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0066e378  FUN_0066e378 =====

undefined8 FUN_0066e378(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 uStack_59;
  undefined1 auStack_58 [48];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00675e64(auStack_58,3,
               "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/io/zero_copy_stream.cc"
               ,0x2f);
                    /* try { // try from 0066e3ac to 0066e3bf has its CatchHandler @ 0066e3f8 */
  uVar2 = FUN_00675a58(auStack_58,
                       "This ZeroCopyOutputStream doesn\'t support aliasing. Reaching here usually means a ZeroCopyOutputStream implementation bug."
                      );
                    /* try { // try from 0066e3c0 to 0066e3c7 has its CatchHandler @ 0066e3f4 */
  FUN_00675ac0(&uStack_59,uVar2);
  FUN_00675e7c(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0066e420  FUN_0066e420 =====

void FUN_0066e420(ulong *param_1)

{
  ulong uVar1;
  size_t __n;
  undefined1 *__dest;
  
  __n = strlen("(cannot determine missing fields for lite message)");
  if (0xfffffffffffffff7 < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_002fb400(param_1);
  }
  if (__n < 0x17) {
    __dest = (undefined1 *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n == 0) {
      *__dest = 0;
      return;
    }
  }
  else {
    uVar1 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar1 = __n | 7;
    }
    __dest = (undefined1 *)FUN_00759c3c(uVar1 + 1);
    param_1[1] = __n;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar1 + 1 | 1;
  }
  memcpy(__dest,"(cannot determine missing fields for lite message)",__n);
  __dest[__n] = 0;
  return;
}


// ===== 0066e4d4  FUN_0066e4d4 =====

void FUN_0066e4d4(long *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  ulong local_98 [2];
  void *local_88;
  undefined1 auStack_80 [48];
  byte local_50;
  undefined1 auStack_4f [7];
  ulong local_48;
  undefined1 *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00675e64(auStack_80,2,
               "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/message_lite.cc"
               ,0x85);
  local_98[0] = 0;
  local_98[1] = 0;
  local_88 = (void *)0x0;
                    /* try { // try from 0066e518 to 0066e547 has its CatchHandler @ 0066e698 */
  FUN_00713bdc(local_98,"Can\'t ");
  FUN_00713bdc(local_98,"parse");
  FUN_00713bdc(local_98," message of type \"");
                    /* try { // try from 0066e550 to 0066e55f has its CatchHandler @ 0066e694 */
  (**(code **)(*param_1 + 0x10))(&local_50,param_1);
  uVar1 = local_48;
  puVar3 = local_40;
  if ((local_50 & 1) == 0) {
    uVar1 = (ulong)(local_50 >> 1);
    puVar3 = auStack_4f;
  }
                    /* try { // try from 0066e578 to 0066e57f has its CatchHandler @ 0066e64c */
  FUN_0071302c(local_98,puVar3,uVar1);
  if ((local_50 & 1) != 0) {
    free(local_40);
  }
                    /* try { // try from 0066e590 to 0066e59f has its CatchHandler @ 0066e698 */
  FUN_00713bdc(local_98,"\" because it is missing required fields: ");
                    /* try { // try from 0066e5a8 to 0066e5b7 has its CatchHandler @ 0066e648 */
  (**(code **)(*param_1 + 0x30))(&local_50,param_1);
  puVar3 = local_40;
  if ((local_50 & 1) == 0) {
    local_48 = (ulong)(local_50 >> 1);
    puVar3 = auStack_4f;
  }
                    /* try { // try from 0066e5d0 to 0066e5d7 has its CatchHandler @ 0066e644 */
  FUN_0071302c(local_98,puVar3,local_48);
  if ((local_50 & 1) != 0) {
    free(local_40);
  }
                    /* try { // try from 0066e5e8 to 0066e5f7 has its CatchHandler @ 0066e640 */
  uVar4 = FUN_00675a80(auStack_80,local_98);
                    /* try { // try from 0066e5f8 to 0066e5ff has its CatchHandler @ 0066e63c */
  FUN_00675ac0(&local_50,uVar4);
  if ((local_98[0] & 1) != 0) {
    free(local_88);
  }
  FUN_00675e7c(auStack_80);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0066e6c8  FUN_0066e6c8 =====

void FUN_0066e6c8(long *param_1,long param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *local_d0;
  long lStack_c8;
  ulong local_c0;
  int local_b8;
  undefined4 uStack_b4;
  undefined8 *local_b0;
  int local_a8;
  int local_a4;
  long *local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  ulong uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uStack_98 = 0;
  local_a0 = (long *)0x0;
  uStack_88 = 0;
  uStack_90 = 0;
  local_d0 = PTR_DAT_007a3258 + 0x10;
  uStack_78 = (ulong)*(byte *)(param_2 + 0x25);
  local_68 = *(undefined4 *)(param_2 + 0x34);
  uStack_58 = 0;
  uStack_50 = 0;
  local_80 = 0;
  local_70 = 0x7ff8000000000000;
  local_64 = 0x80000000;
  local_60 = 0;
  lStack_c8 = param_2;
  uVar3 = FUN_0066f964(&local_c0,&local_d0);
  uStack_58 = *(undefined8 *)(param_2 + 0x48);
  local_60 = *(undefined8 *)(param_2 + 0x40);
  local_64 = 0;
  uVar4 = (**(code **)(*param_1 + 0x50))(param_1,uVar3,&local_c0);
  if (uVar4 == 0) goto LAB_0066e830;
  if (local_b0 == &uStack_98) {
    iVar1 = (local_b8 - (int)uVar4) + 0x10;
  }
  else {
    iVar1 = local_a8 + (local_b8 - (int)uVar4);
  }
  if (0 < iVar1) {
    (**(code **)(*local_a0 + 0x18))(local_a0,iVar1);
    local_70 = CONCAT44(local_70._4_4_ + iVar1,(int)local_70);
  }
  if ((int)local_70 == 1) {
    *(undefined1 *)(param_2 + 0x24) = 1;
joined_r0x0066e804:
    if (((param_3 >> 1 & 1) != 0) ||
       (uVar4 = (**(code **)(*param_1 + 0x28))(param_1), (uVar4 & 1) != 0)) {
      uVar4 = 1;
      goto LAB_0066e830;
    }
    FUN_0066e4d4(param_1);
  }
  else if ((uVar4 <= local_c0) ||
          ((local_b0 != (undefined8 *)0x0 &&
           ((long)(uVar4 - CONCAT44(uStack_b4,local_b8)) <= (long)local_a4)))) {
    *(int *)(param_2 + 0x20) = (int)local_70 + 1;
    goto joined_r0x0066e804;
  }
  uVar4 = 0;
LAB_0066e830:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


// ===== 0066e874  FUN_0066e874 =====

void FUN_0066e874(long *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x20))();
  FUN_0066e6c8(param_1,param_2,1);
  return;
}


// ===== 0066e8ac  thunk_FUN_0066e8b0 =====

void thunk_FUN_0066e8b0(long *param_1,byte *param_2)

{
  byte *pbVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *pbStack_c0;
  byte *pbStack_b8;
  byte *pbStack_b0;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  byte abStack_98 [32];
  long lStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lVar2 = tpidr_el0;
  lStack_48 = *(long *)(lVar2 + 0x28);
  (**(code **)(*param_1 + 0x20))();
  uVar5 = *(ulong *)(param_2 + 8);
  pbVar1 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar1 = param_2 + 1;
    uVar5 = (ulong)(*param_2 >> 1);
  }
  if ((long)uVar5 < 0) {
    FUN_00676318(uVar5,"string length exceeds max size");
  }
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_68 = *(undefined4 *)PTR_DAT_007a3238;
  uStack_60 = 0;
  abStack_98[0] = 0;
  abStack_98[1] = 0;
  abStack_98[2] = 0;
  abStack_98[3] = 0;
  abStack_98[4] = 0;
  abStack_98[5] = 0;
  abStack_98[6] = 0;
  abStack_98[7] = 0;
  uStack_a0 = 0;
  abStack_98[0x10] = 0;
  abStack_98[0x11] = 0;
  abStack_98[0x12] = 0;
  abStack_98[0x13] = 0;
  abStack_98[0x14] = 0;
  abStack_98[0x15] = 0;
  abStack_98[0x16] = 0;
  abStack_98[0x17] = 0;
  abStack_98[8] = 0;
  abStack_98[9] = 0;
  abStack_98[10] = 0;
  abStack_98[0xb] = 0;
  abStack_98[0xc] = 0;
  abStack_98[0xd] = 0;
  abStack_98[0xe] = 0;
  abStack_98[0xf] = 0;
  lStack_78 = 0;
  abStack_98[0x18] = 0;
  abStack_98[0x19] = 0;
  abStack_98[0x1a] = 0;
  abStack_98[0x1b] = 0;
  abStack_98[0x1c] = 0;
  abStack_98[0x1d] = 0;
  abStack_98[0x1e] = 0;
  abStack_98[0x1f] = 0;
  uStack_64 = 0x80000000;
  if (uVar5 < 0x11) {
    pbVar6 = abStack_98;
    __memcpy_chk(pbVar6,pbVar1,uVar5,0x50);
    pbStack_b8 = pbVar6 + uVar5;
    uStack_a4 = 0;
    pbStack_b0 = (byte *)0x0;
    if (lStack_78 == 1) {
      lStack_78 = (long)pbVar1 - (long)pbVar6;
    }
  }
  else {
    uStack_a4 = 0x10;
    pbStack_b8 = pbVar1 + (uVar5 - 0x10);
    pbStack_b0 = abStack_98;
    pbVar6 = pbVar1;
  }
  pbStack_c0 = pbStack_b8;
  lVar3 = (**(code **)(*param_1 + 0x50))(param_1,pbVar6,&pbStack_c0);
  uVar4 = 0;
  if ((lVar3 != 0) && ((int)uStack_70 == 0)) {
    uVar5 = (**(code **)(*param_1 + 0x28))(param_1);
    if ((uVar5 & 1) == 0) {
      FUN_0066e4d4(param_1);
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
  }
  if (*(long *)(lVar2 + 0x28) == lStack_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


// ===== 0066e8b0  FUN_0066e8b0 =====

void FUN_0066e8b0(long *param_1,byte *param_2)

{
  byte *pbVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *local_c0;
  byte *pbStack_b8;
  byte *local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  byte abStack_98 [32];
  long lStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  (**(code **)(*param_1 + 0x20))();
  uVar5 = *(ulong *)(param_2 + 8);
  pbVar1 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar1 = param_2 + 1;
    uVar5 = (ulong)(*param_2 >> 1);
  }
  if ((long)uVar5 < 0) {
    FUN_00676318(uVar5,"string length exceeds max size");
  }
  local_70 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = *(undefined4 *)PTR_DAT_007a3238;
  local_60 = 0;
  abStack_98[0] = 0;
  abStack_98[1] = 0;
  abStack_98[2] = 0;
  abStack_98[3] = 0;
  abStack_98[4] = 0;
  abStack_98[5] = 0;
  abStack_98[6] = 0;
  abStack_98[7] = 0;
  local_a0 = 0;
  abStack_98[0x10] = 0;
  abStack_98[0x11] = 0;
  abStack_98[0x12] = 0;
  abStack_98[0x13] = 0;
  abStack_98[0x14] = 0;
  abStack_98[0x15] = 0;
  abStack_98[0x16] = 0;
  abStack_98[0x17] = 0;
  abStack_98[8] = 0;
  abStack_98[9] = 0;
  abStack_98[10] = 0;
  abStack_98[0xb] = 0;
  abStack_98[0xc] = 0;
  abStack_98[0xd] = 0;
  abStack_98[0xe] = 0;
  abStack_98[0xf] = 0;
  lStack_78 = 0;
  abStack_98[0x18] = 0;
  abStack_98[0x19] = 0;
  abStack_98[0x1a] = 0;
  abStack_98[0x1b] = 0;
  abStack_98[0x1c] = 0;
  abStack_98[0x1d] = 0;
  abStack_98[0x1e] = 0;
  abStack_98[0x1f] = 0;
  uStack_64 = 0x80000000;
  if (uVar5 < 0x11) {
    pbVar6 = abStack_98;
    __memcpy_chk(pbVar6,pbVar1,uVar5,0x50);
    pbStack_b8 = pbVar6 + uVar5;
    local_a4 = 0;
    local_b0 = (byte *)0x0;
    if (lStack_78 == 1) {
      lStack_78 = (long)pbVar1 - (long)pbVar6;
    }
  }
  else {
    local_a4 = 0x10;
    pbStack_b8 = pbVar1 + (uVar5 - 0x10);
    local_b0 = abStack_98;
    pbVar6 = pbVar1;
  }
  local_c0 = pbStack_b8;
  lVar3 = (**(code **)(*param_1 + 0x50))(param_1,pbVar6,&local_c0);
  uVar4 = 0;
  if ((lVar3 != 0) && ((int)local_70 == 0)) {
    uVar5 = (**(code **)(*param_1 + 0x28))(param_1);
    if ((uVar5 & 1) == 0) {
      FUN_0066e4d4(param_1);
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


// ===== 0066ea3c  FUN_0066ea3c =====

uint FUN_0066ea3c(undefined8 param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  undefined8 local_48;
  long lStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_3 < 0) {
    FUN_00676318((long)param_3,"string length exceeds max size");
  }
  local_48 = param_2;
  lStack_40 = (long)param_3;
  uVar2 = FUN_0066eac4(param_1,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0066eac4  FUN_0066eac4 =====

void FUN_0066eac4(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  long local_c0;
  long lStack_b8;
  long *local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  long alStack_98 [5];
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  (**(code **)(*param_1 + 0x20))();
  plVar1 = (long *)*param_2;
  uVar5 = param_2[1];
  local_70 = 0;
  local_68 = *(undefined4 *)PTR_DAT_007a3238;
  local_58 = 0;
  uStack_50 = 0;
  alStack_98[0] = 0;
  local_a0 = 0;
  alStack_98[2] = 0;
  alStack_98[1] = 0;
  alStack_98[4] = 0;
  alStack_98[3] = 0;
  uStack_64 = 0x80000000;
  local_60 = 0;
  if (uVar5 < 0x11) {
    plVar6 = alStack_98;
    __memcpy_chk(plVar6,plVar1,uVar5,0x50);
    lStack_b8 = (long)plVar6 + uVar5;
    local_a4 = 0;
    local_b0 = (long *)0x0;
    if (alStack_98[4] == 1) {
      alStack_98[4] = (long)plVar1 - (long)plVar6;
    }
  }
  else {
    local_a4 = 0x10;
    lStack_b8 = (long)plVar1 + (uVar5 - 0x10);
    local_b0 = alStack_98;
    plVar6 = plVar1;
  }
  local_c0 = lStack_b8;
  lVar3 = (**(code **)(*param_1 + 0x50))(param_1,plVar6,&local_c0);
  uVar4 = 0;
  if ((lVar3 != 0) && ((int)local_70 == 0)) {
    uVar5 = (**(code **)(*param_1 + 0x28))(param_1);
    if ((uVar5 & 1) == 0) {
      FUN_0066e4d4(param_1);
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


// ===== 0066ec1c  thunk_FUN_0066ec20 =====

void thunk_FUN_0066ec20(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  byte *pbVar7;
  undefined1 uStack_b1;
  byte abStack_b0 [16];
  void *pvStack_a0;
  byte *pbStack_98;
  undefined8 uStack_90;
  undefined8 uStack_68;
  undefined2 uStack_60;
  byte bStack_5e;
  undefined1 uStack_5d;
  long lStack_58;
  
  lVar3 = tpidr_el0;
  lStack_58 = *(long *)(lVar3 + 0x28);
  uVar2 = (ulong)(byte)((byte)*param_2 >> 1);
  if (((byte)*param_2 & 1) != 0) {
    uVar2 = param_2[1];
  }
  uVar4 = (**(code **)(*param_1 + 0x40))();
  if (uVar4 >> 0x1f == 0) {
    uVar1 = uVar4 + uVar2;
    uVar6 = 0x16;
    if ((*param_2 & 1) != 0) {
      uVar6 = (*param_2 & 0xfffffffffffffffe) - 1;
    }
    if (uVar6 < uVar1) {
      uVar6 = uVar6 * 2;
      if (uVar6 < uVar1 || uVar6 - uVar1 == 0) {
        uVar6 = uVar1;
      }
      FUN_00712ea8(param_2,uVar6);
    }
    FUN_00713cc0(param_2,uVar1,0);
    pbVar7 = (byte *)param_2[2];
    if ((*param_2 & 1) == 0) {
      pbVar7 = (byte *)((long)param_2 + 1);
    }
    uStack_68 = 0;
    uStack_60 = 0;
    bStack_5e = *PTR_DAT_007a3218 & 1;
    pbStack_98 = pbVar7 + uVar2 + uVar4;
    uStack_5d = 0;
    uStack_90 = 0;
    (**(code **)(*param_1 + 0x60))(param_1,pbVar7 + uVar2,&pbStack_98);
  }
  else {
    FUN_00675e64(&pbStack_98,2,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/message_lite.cc"
                 ,0x1c1);
    (**(code **)(*param_1 + 0x10))(abStack_b0,param_1);
    uVar5 = FUN_00675a80(&pbStack_98,abStack_b0);
    uVar5 = FUN_00675a58(uVar5," exceeded maximum protobuf size of 2GB: ");
    uVar5 = FUN_00675de8(uVar5,uVar4);
    FUN_00675ac0(&uStack_b1,uVar5);
    if ((abStack_b0[0] & 1) != 0) {
      free(pvStack_a0);
    }
    FUN_00675e7c(&pbStack_98);
  }
  if (*(long *)(lVar3 + 0x28) == lStack_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4 >> 0x1f == 0);
}


// ===== 0066ec20  FUN_0066ec20 =====

void FUN_0066ec20(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  byte *pbVar7;
  undefined1 uStack_b1;
  byte local_b0 [16];
  void *local_a0;
  byte *local_98;
  undefined8 uStack_90;
  undefined8 local_68;
  undefined2 local_60;
  byte local_5e;
  undefined1 local_5d;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar2 = (ulong)(byte)((byte)*param_2 >> 1);
  if (((byte)*param_2 & 1) != 0) {
    uVar2 = param_2[1];
  }
  uVar4 = (**(code **)(*param_1 + 0x40))();
  if (uVar4 >> 0x1f == 0) {
    uVar1 = uVar4 + uVar2;
    uVar6 = 0x16;
    if ((*param_2 & 1) != 0) {
      uVar6 = (*param_2 & 0xfffffffffffffffe) - 1;
    }
    if (uVar6 < uVar1) {
      uVar6 = uVar6 * 2;
      if (uVar6 < uVar1 || uVar6 - uVar1 == 0) {
        uVar6 = uVar1;
      }
      FUN_00712ea8(param_2,uVar6);
    }
    FUN_00713cc0(param_2,uVar1,0);
    pbVar7 = (byte *)param_2[2];
    if ((*param_2 & 1) == 0) {
      pbVar7 = (byte *)((long)param_2 + 1);
    }
    local_68 = 0;
    local_60 = 0;
    local_5e = *PTR_DAT_007a3218 & 1;
    local_98 = pbVar7 + uVar2 + uVar4;
    local_5d = 0;
    uStack_90 = 0;
    (**(code **)(*param_1 + 0x60))(param_1,pbVar7 + uVar2,&local_98);
  }
  else {
    FUN_00675e64(&local_98,2,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/message_lite.cc"
                 ,0x1c1);
                    /* try { // try from 0066ed3c to 0066ed47 has its CatchHandler @ 0066edc4 */
    (**(code **)(*param_1 + 0x10))(local_b0,param_1);
                    /* try { // try from 0066ed48 to 0066ed6b has its CatchHandler @ 0066edcc */
    uVar5 = FUN_00675a80(&local_98,local_b0);
    uVar5 = FUN_00675a58(uVar5," exceeded maximum protobuf size of 2GB: ");
    uVar5 = FUN_00675de8(uVar5,uVar4);
                    /* try { // try from 0066ed6c to 0066ed73 has its CatchHandler @ 0066edc0 */
    FUN_00675ac0(&uStack_b1,uVar5);
    if ((local_b0[0] & 1) != 0) {
      free(local_a0);
    }
    FUN_00675e7c(&local_98);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4 >> 0x1f == 0);
}


// ===== 0066ee04  FUN_0066ee04 =====

void FUN_0066ee04(undefined8 param_1,byte *param_2)

{
  if ((*param_2 & 1) == 0) {
    param_2[0] = 0;
    param_2[1] = 0;
    FUN_0066ec20();
    return;
  }
  **(undefined1 **)(param_2 + 0x10) = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  FUN_0066ec20();
  return;
}


// ===== 0066ee24  FUN_0066ee24 =====

void FUN_0066ee24(byte *param_1,undefined4 param_2)

{
  uint uVar1;
  
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
                    /* try { // try from 0066ee3c to 0066ee43 has its CatchHandler @ 0066ee78 */
  uVar1 = FUN_0066ec20(param_2,param_1);
  if ((uVar1 & 1) == 0) {
    if ((*param_1 & 1) != 0) {
      **(undefined1 **)(param_1 + 0x10) = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      return;
    }
    param_1[0] = 0;
    param_1[1] = 0;
  }
  return;
}


// ===== 0066ee94  FUN_0066ee94 =====

void FUN_0066ee94(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  int iVar3;
  void *__dest;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  void *__src;
  long lVar9;
  
  puVar2 = PTR_DAT_007a3268;
  if (((*PTR_DAT_007a3260 & 1) == 0) && (iVar3 = FUN_00739c1c(PTR_DAT_007a3260), iVar3 != 0)) {
                    /* try { // try from 0066efac to 0066efb3 has its CatchHandler @ 0066efe0 */
    puVar4 = (undefined8 *)FUN_00759c3c(0x40);
    *(undefined8 **)puVar2 = puVar4;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[7] = 0;
    puVar4[6] = 0;
    FUN_00739d60(PTR_DAT_007a3260);
  }
  puVar7 = *(undefined8 **)puVar2;
  FUN_00715bcc(puVar7 + 3);
  puVar4 = (undefined8 *)puVar7[1];
  if (puVar4 < (undefined8 *)puVar7[2]) {
    *puVar4 = param_1;
    puVar4[1] = param_2;
    puVar8 = puVar4 + 2;
  }
  else {
    __src = (void *)*puVar7;
    lVar9 = (long)puVar4 - (long)__src >> 4;
    uVar1 = lVar9 + 1;
    if (uVar1 >> 0x3c != 0) {
                    /* try { // try from 0066efd4 to 0066efdf has its CatchHandler @ 0066eff8 */
      FUN_0066f0ec(puVar7);
LAB_0066efdc:
                    /* WARNING: Subroutine does not return */
      FUN_002f9ee0();
    }
    uVar5 = (long)puVar7[2] - (long)__src;
    uVar6 = (long)uVar5 >> 3;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7fffffffffffffef < uVar5) {
      uVar6 = 0xfffffffffffffff;
    }
    if (uVar6 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar6 >> 0x3c != 0) goto LAB_0066efdc;
                    /* try { // try from 0066ef38 to 0066ef3b has its CatchHandler @ 0066eff8 */
      __dest = (void *)FUN_00759c3c(uVar6 << 4);
    }
    puVar8 = (undefined8 *)((long)__dest + lVar9 * 0x10);
    *puVar8 = param_1;
    puVar8[1] = param_2;
    puVar8 = puVar8 + 2;
    memcpy(__dest,__src,(long)puVar4 - (long)__src);
    *puVar7 = __dest;
    puVar7[1] = puVar8;
    puVar7[2] = (void *)((long)__dest + uVar6 * 0x10);
    if (__src != (void *)0x0) {
      free(__src);
    }
  }
  puVar7[1] = puVar8;
  FUN_00715bf8(puVar7 + 3);
  return;
}


// ===== 0066f00c  FUN_0066f00c =====

void FUN_0066f00c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x66f010);
  (*pcVar1)();
}


// ===== 0066f010  FUN_0066f010 =====

undefined8 FUN_0066f010(void)

{
  return 0;
}


// ===== 0066f018  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0066f01c  FUN_0066f01c =====

uint FUN_0066f01c(long param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  
  uVar2 = FUN_0066c41c(*(undefined8 *)(param_1 + 8));
  if ((uVar2 & 1) != 0) {
    uVar1 = *param_3;
    if (-1 < (int)uVar1) {
      plVar3 = *(long **)(param_1 + 8);
      if ((int)uVar1 <= (int)plVar3[1] - (int)*plVar3) {
        *plVar3 = *plVar3 + (ulong)uVar1;
        return uVar2 & 1;
      }
      FUN_0066c330(plVar3);
    }
  }
  return uVar2 & 1;
}


// ===== 0066f094  FUN_0066f094 =====

void FUN_0066f094(long param_1,int param_2)

{
  **(long **)(param_1 + 8) = **(long **)(param_1 + 8) + (long)-param_2;
  return;
}


// ===== 0066f0ac  FUN_0066f0ac =====

undefined8 FUN_0066f0ac(long param_1,uint param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  if ((int)param_2 < 0) {
    return 0;
  }
  plVar1 = *(long **)(param_1 + 8);
  if ((int)plVar1[1] - (int)*plVar1 < (int)param_2) {
    uVar2 = FUN_0066c330();
    return uVar2;
  }
  *plVar1 = *plVar1 + (ulong)param_2;
  return 1;
}


// ===== 0066f0e4  FUN_0066f0e4 =====

undefined8 FUN_0066f0e4(void)

{
  return 0;
}


// ===== 0066f0ec  FUN_0066f0ec =====

void FUN_0066f0ec(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("vector");
}


// ===== 0066f100  FUN_0066f100 =====

void FUN_0066f100(long *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = FUN_0066f164((int)param_1,0,0xffffffff);
  lVar3 = param_1[1];
  if (lVar2 != 0) {
    uVar1 = *(int *)((long)param_1 + 0x1c) + ((int)lVar2 - (int)lVar3);
    *(uint *)((long)param_1 + 0x1c) = uVar1;
    *param_1 = lVar3 + (int)(uVar1 & (int)uVar1 >> 0x1f);
    return;
  }
  *(undefined4 *)(param_1 + 10) = 1;
  *param_1 = lVar3;
  return;
}


// ===== 0066f164  FUN_0066f164 =====

undefined8 * FUN_0066f164(long param_1,int param_2,int param_3)

{
  bool bVar1;
  byte *pbVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  puVar8 = *(undefined8 **)(param_1 + 0x10);
  if (puVar8 != (undefined8 *)0x0) {
    if (puVar8 == (undefined8 *)(param_1 + 0x28)) {
      uVar9 = **(undefined8 **)(param_1 + 8);
      puVar8[1] = (*(undefined8 **)(param_1 + 8))[1];
      *puVar8 = uVar9;
      if (*(int *)(param_1 + 0x54) < 1) {
LAB_0066f498:
        if (*(long *)(param_1 + 0x48) == 2) {
          *(long *)(param_1 + 0x48) = *(long *)(param_1 + 8) - (long)puVar8;
        }
        *(undefined4 *)(param_1 + 0x18) = 0;
        *(long *)(param_1 + 8) = param_1 + 0x38;
        *(undefined8 *)(param_1 + 0x10) = 0;
      }
      else {
        if ((param_2 < 0x10) && (-1 < param_3)) {
          lVar5 = (long)param_2;
          do {
            pbVar2 = (byte *)((long)puVar8 + lVar5);
            uVar6 = (uint)*pbVar2;
            if ((char)*pbVar2 < '\0') {
              uVar6 = (uVar6 + (uint)pbVar2[1] * 0x80) - 0x80;
              if ((char)pbVar2[1] < '\0') {
                uVar6 = (uVar6 + (uint)pbVar2[2] * 0x4000) - 0x4000;
                if ((char)pbVar2[2] < '\0') {
                  uVar6 = (uVar6 + (uint)pbVar2[3] * 0x200000) - 0x200000;
                  if ((char)pbVar2[3] < '\0') {
                    if ((char)pbVar2[4] < 0) break;
                    lVar7 = 4;
                    uVar6 = uVar6 + (char)pbVar2[4] * 0x10000000 + 0xf0000000;
                  }
                  else {
                    lVar7 = 3;
                  }
                }
                else {
                  lVar7 = 2;
                }
                lVar5 = lVar5 + lVar7 + 1;
              }
              else {
                lVar5 = lVar5 + 2;
              }
              if (0x10 < lVar5) break;
            }
            else {
              lVar5 = lVar5 + 1;
            }
            if (uVar6 == 0) goto LAB_0066f498;
            uVar6 = uVar6 & 7;
            if (uVar6 < 3) {
              pbVar2 = (byte *)((long)puVar8 + lVar5);
              if (uVar6 == 0) {
                if ((char)*pbVar2 < '\0') {
                  if ((char)pbVar2[1] < '\0') {
                    if ((char)pbVar2[2] < '\0') {
                      if ((char)pbVar2[3] < '\0') {
                        if ((char)pbVar2[4] < '\0') {
                          if ((char)pbVar2[5] < '\0') {
                            if ((char)pbVar2[6] < '\0') {
                              if ((char)pbVar2[7] < '\0') {
                                if ((char)pbVar2[8] < '\0') {
                                  if ((char)pbVar2[9] < '\0') break;
                                  lVar7 = 9;
                                }
                                else {
                                  lVar7 = 8;
                                }
                              }
                              else {
                                lVar7 = 7;
                              }
                            }
                            else {
                              lVar7 = 6;
                            }
                          }
                          else {
                            lVar7 = 5;
                          }
                        }
                        else {
                          lVar7 = 4;
                        }
                      }
                      else {
                        lVar7 = 3;
                      }
                    }
                    else {
                      lVar7 = 2;
                    }
                    lVar5 = lVar5 + lVar7 + 1;
                  }
                  else {
                    lVar5 = lVar5 + 2;
                  }
                }
                else {
                  lVar5 = lVar5 + 1;
                }
              }
              else if (uVar6 == 1) {
                lVar5 = lVar5 + 8;
              }
              else {
                if (uVar6 != 2) break;
                lVar7 = lVar5 + 1;
                uVar6 = (uint)*pbVar2;
                if ((char)*pbVar2 < '\0') {
                  uVar6 = (uVar6 + (uint)*(byte *)((long)puVar8 + lVar7) * 0x80) - 0x80;
                  if (-1 < (char)*(byte *)((long)puVar8 + lVar7)) {
                    lVar5 = 1;
LAB_0066f2c0:
                    lVar7 = lVar5 + lVar7;
                    goto LAB_0066f2c4;
                  }
                  uVar6 = (uVar6 + (uint)pbVar2[2] * 0x4000) - 0x4000;
                  if (-1 < (char)pbVar2[2]) {
                    lVar5 = 2;
                    goto LAB_0066f2c0;
                  }
                  uVar6 = (uVar6 + (uint)pbVar2[3] * 0x200000) - 0x200000;
                  if (-1 < (char)pbVar2[3]) {
                    lVar5 = 3;
                    goto LAB_0066f2c0;
                  }
                  if ((7 < pbVar2[4]) ||
                     (uVar6 = uVar6 + (uint)pbVar2[4] * 0x10000000 + 0xf0000000, 0x7fffffef < uVar6)
                     ) break;
                  lVar7 = lVar5 + 5;
                  lVar5 = (long)(int)uVar6;
                  if (0x10 - lVar7 < lVar5) break;
                }
                else {
LAB_0066f2c4:
                  lVar5 = (long)(int)uVar6;
                  if (0x10 - lVar7 < lVar5) break;
                }
                lVar5 = lVar7 + lVar5;
              }
            }
            else if (uVar6 == 3) {
              param_3 = param_3 + 1;
            }
            else if (uVar6 == 4) {
              bVar1 = param_3 < 1;
              param_3 = param_3 + -1;
              if (bVar1) goto LAB_0066f498;
            }
            else {
              if (uVar6 != 5) break;
              lVar5 = lVar5 + 4;
            }
            if (0xf < lVar5) break;
          } while( true );
        }
        do {
          uVar4 = (**(code **)(**(long **)(param_1 + 0x20) + 0x10))
                            (*(long **)(param_1 + 0x20),&local_40,param_1 + 0x18);
          if ((uVar4 & 1) == 0) {
            *(undefined4 *)(param_1 + 0x54) = 0;
            goto LAB_0066f498;
          }
          uVar6 = *(uint *)(param_1 + 0x18);
          *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - uVar6;
          if (0x10 < (int)uVar6) {
            uVar10 = local_40[1];
            uVar9 = *local_40;
            *(long *)(param_1 + 8) = param_1 + 0x38;
            *(undefined8 **)(param_1 + 0x10) = local_40;
            *(undefined8 *)(param_1 + 0x40) = uVar10;
            *(undefined8 *)(param_1 + 0x38) = uVar9;
            if (*(ulong *)(param_1 + 0x48) < 2) goto LAB_0066f4bc;
            goto LAB_0066f52c;
          }
        } while ((int)uVar6 < 1);
        memcpy((void *)(param_1 + 0x38),local_40,(ulong)uVar6);
        *(ulong *)(param_1 + 8) = (long)puVar8 + (ulong)uVar6;
        *(undefined8 **)(param_1 + 0x10) = puVar8;
        if (1 < *(ulong *)(param_1 + 0x48)) {
LAB_0066f52c:
          *(undefined8 *)(param_1 + 0x48) = 1;
        }
      }
    }
    else {
      *(long *)(param_1 + 8) = (long)puVar8 + (long)*(int *)(param_1 + 0x18) + -0x10;
      *(undefined8 **)(param_1 + 0x10) = (undefined8 *)(param_1 + 0x28);
      if (*(long *)(param_1 + 0x48) == 1) {
        *(undefined8 *)(param_1 + 0x48) = 2;
      }
    }
  }
LAB_0066f4bc:
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return puVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0066f53c  FUN_0066f53c =====

undefined1  [16] FUN_0066f53c(long *param_1,int param_2,undefined4 param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (*(int *)((long)param_1 + 0x1c) < param_2) {
    return ZEXT816(1) << 0x40;
  }
  do {
    lVar3 = FUN_0066f164(param_1,param_2,param_3);
    if (lVar3 == 0) {
      if (param_2 != 0) {
        return ZEXT816(1) << 0x40;
      }
      auVar5._0_8_ = param_1[1];
      *(undefined4 *)(param_1 + 10) = 1;
      *param_1 = auVar5._0_8_;
      auVar5._8_8_ = 1;
      return auVar5;
    }
    lVar1 = (long)param_2;
    param_2 = (int)param_1[1];
    uVar2 = *(int *)((long)param_1 + 0x1c) + ((int)lVar3 - param_2);
    param_2 = (int)(lVar3 + lVar1) - param_2;
    *(uint *)((long)param_1 + 0x1c) = uVar2;
  } while (-1 < param_2);
  *param_1 = param_1[1] + (long)(int)(uVar2 & (int)uVar2 >> 0x1f);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = lVar3 + lVar1;
  return auVar4;
}


// ===== 0066f600  FUN_0066f600 =====

long FUN_0066f600(long *param_1,int param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = ((int)param_1[1] - param_2) + 0x10;
  do {
    if ((param_1[2] == 0) || (*(int *)((long)param_1 + 0x1c) < 0x11)) {
      return 0;
    }
    lVar2 = FUN_0066f164(param_1,0,0xffffffff);
    lVar3 = param_1[1];
    if (lVar2 == 0) {
      *param_1 = lVar3;
      *(undefined4 *)(param_1 + 10) = 1;
      return 0;
    }
    param_3 = param_3 - iVar4;
    uVar1 = *(int *)((long)param_1 + 0x1c) + ((int)lVar2 - (int)lVar3);
    *(uint *)((long)param_1 + 0x1c) = uVar1;
    iVar4 = ((int)lVar3 - (int)(lVar2 + 0x10)) + 0x10;
    *param_1 = lVar3 + (int)(uVar1 & (int)uVar1 >> 0x1f);
  } while (iVar4 < param_3);
  return lVar2 + 0x10 + (long)param_3;
}


// ===== 0066f6c8  FUN_0066f6c8 =====

long FUN_0066f6c8(long *param_1,long param_2,int param_3,byte *param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  if ((*param_4 & 1) == 0) {
    param_4[0] = 0;
    param_4[1] = 0;
  }
  else {
    **(undefined1 **)(param_4 + 0x10) = 0;
    param_4[8] = 0;
    param_4[9] = 0;
    param_4[10] = 0;
    param_4[0xb] = 0;
    param_4[0xc] = 0;
    param_4[0xd] = 0;
    param_4[0xe] = 0;
    param_4[0xf] = 0;
  }
  lVar3 = param_1[1];
  if ((long)param_3 <= (lVar3 - param_2) + (long)*(int *)((long)param_1 + 0x1c)) {
    uVar2 = (ulong)(*param_4 >> 1);
    if ((*param_4 & 1) != 0) {
      uVar2 = *(ulong *)(param_4 + 8);
    }
    iVar5 = param_3;
    if (49999999 < param_3) {
      iVar5 = 50000000;
    }
    FUN_00712ea8(param_4,uVar2 + (long)iVar5);
    lVar3 = param_1[1];
  }
  iVar5 = ((int)lVar3 - (int)param_2) + 0x10;
  do {
    if (param_1[2] == 0) {
      return 0;
    }
    FUN_0071302c(param_4,param_2,(long)iVar5);
    if (*(int *)((long)param_1 + 0x1c) < 0x11) {
      return 0;
    }
    lVar3 = FUN_0066f164(param_1,0,0xffffffff);
    lVar4 = param_1[1];
    if (lVar3 == 0) {
      *param_1 = lVar4;
      *(undefined4 *)(param_1 + 10) = 1;
      return 0;
    }
    param_2 = lVar3 + 0x10;
    param_3 = param_3 - iVar5;
    uVar1 = *(int *)((long)param_1 + 0x1c) + ((int)lVar3 - (int)lVar4);
    iVar5 = ((int)lVar4 - (int)param_2) + 0x10;
    *(uint *)((long)param_1 + 0x1c) = uVar1;
    *param_1 = lVar4 + (int)(uVar1 & (int)uVar1 >> 0x1f);
  } while (iVar5 < param_3);
  FUN_0071302c(param_4,param_2,(long)param_3);
  return param_2 + param_3;
}


// ===== 0066f824  FUN_0066f824 =====

long FUN_0066f824(long *param_1,long param_2,int param_3,byte *param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  lVar3 = param_1[1];
  if ((long)param_3 <= (lVar3 - param_2) + (long)*(int *)((long)param_1 + 0x1c)) {
    uVar2 = (ulong)(*param_4 >> 1);
    if ((*param_4 & 1) != 0) {
      uVar2 = *(ulong *)(param_4 + 8);
    }
    iVar5 = param_3;
    if (49999999 < param_3) {
      iVar5 = 50000000;
    }
    FUN_00712ea8(param_4,uVar2 + (long)iVar5);
    lVar3 = param_1[1];
  }
  iVar5 = ((int)lVar3 - (int)param_2) + 0x10;
  do {
    if (param_1[2] == 0) {
      return 0;
    }
    FUN_0071302c(param_4,param_2,(long)iVar5);
    if (*(int *)((long)param_1 + 0x1c) < 0x11) {
      return 0;
    }
    lVar3 = FUN_0066f164(param_1,0,0xffffffff);
    lVar4 = param_1[1];
    if (lVar3 == 0) {
      *param_1 = lVar4;
      *(undefined4 *)(param_1 + 10) = 1;
      return 0;
    }
    param_2 = lVar3 + 0x10;
    param_3 = param_3 - iVar5;
    uVar1 = *(int *)((long)param_1 + 0x1c) + ((int)lVar3 - (int)lVar4);
    iVar5 = ((int)lVar4 - (int)param_2) + 0x10;
    *(uint *)((long)param_1 + 0x1c) = uVar1;
    *param_1 = lVar4 + (int)(uVar1 & (int)uVar1 >> 0x1f);
  } while (iVar5 < param_3);
  FUN_0071302c(param_4,param_2,(long)param_3);
  return param_2 + param_3;
}


// ===== 0066f964  FUN_0066f964 =====

void FUN_0066f964(long *param_1,long *param_2)

{
  void *__dest;
  long lVar1;
  ulong uVar2;
  long lVar3;
  uint local_34;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar3 = *param_2;
  param_1[4] = (long)param_2;
  *(undefined4 *)((long)param_1 + 0x1c) = 0x7fffffff;
  uVar2 = (**(code **)(lVar3 + 0x10))(param_2,&local_30,&local_34);
  if ((uVar2 & 1) == 0) {
    local_30 = param_1 + 5;
    *(undefined4 *)((long)param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    param_1[1] = (long)local_30;
    param_1[2] = 0;
    *param_1 = (long)local_30;
  }
  else {
    *(uint *)((long)param_1 + 0x54) = *(int *)((long)param_1 + 0x54) - local_34;
    if ((int)local_34 < 0x11) {
      *param_1 = (long)(param_1 + 7);
      param_1[1] = (long)(param_1 + 7);
      param_1[2] = (long)(param_1 + 5);
      __dest = (void *)((long)param_1 + (0x48 - (long)(int)local_34));
      memcpy(__dest,local_30,(long)(int)local_34);
      local_30 = __dest;
      if (*(long *)(lVar1 + 0x28) == local_28) {
        return;
      }
      goto LAB_0066fa88;
    }
    lVar3 = (long)local_30 + ((ulong)local_34 - 0x10);
    *(uint *)((long)param_1 + 0x1c) = (*(int *)((long)param_1 + 0x1c) - local_34) + 0x10;
    *param_1 = lVar3;
    param_1[1] = lVar3;
    param_1[2] = (long)(param_1 + 5);
    if (param_1[9] == 1) {
      param_1[9] = 2;
      if (*(long *)(lVar1 + 0x28) == local_28) {
        return;
      }
      goto LAB_0066fa88;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
LAB_0066fa88:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_30);
}


// ===== 0066fa8c  FUN_0066fa8c =====

undefined8 FUN_0066fa8c(long *param_1,long *param_2,byte *param_3)

{
  int iVar1;
  undefined8 uVar2;
  byte *pbVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  
  pbVar3 = param_3 + 1;
  uVar5 = (uint)*param_3;
  if ((char)*param_3 < '\0') {
    uVar5 = (uVar5 + (uint)*pbVar3 * 0x80) - 0x80;
    if (-1 < (char)*pbVar3) {
      lVar4 = 1;
LAB_0066fac4:
      pbVar3 = param_3 + lVar4 + 1;
      goto LAB_0066facc;
    }
    uVar5 = (uVar5 + (uint)param_3[2] * 0x4000) - 0x4000;
    if (-1 < (char)param_3[2]) {
      lVar4 = 2;
      goto LAB_0066fac4;
    }
    uVar5 = (uVar5 + (uint)param_3[3] * 0x200000) - 0x200000;
    if (-1 < (char)param_3[3]) {
      lVar4 = 3;
      goto LAB_0066fac4;
    }
    if ((param_3[4] < 8) &&
       (uVar5 = uVar5 + (uint)param_3[4] * 0x10000000 + 0xf0000000, uVar5 < 0x7ffffff0)) {
      pbVar3 = param_3 + 5;
      goto LAB_0066facc;
    }
    iVar6 = 0;
    iVar1 = (int)param_1[10];
    *(int *)(param_1 + 0xb) = (int)param_1[0xb] + 1;
  }
  else {
LAB_0066facc:
    lVar4 = param_1[0xb];
    uVar5 = uVar5 + ((int)pbVar3 - (int)param_1[1]);
    *(int *)(param_1 + 0xb) = (int)lVar4 + -1;
    iVar6 = *(int *)((long)param_1 + 0x1c);
    *(uint *)((long)param_1 + 0x1c) = uVar5;
    iVar6 = iVar6 - uVar5;
    *param_1 = param_1[1] + (long)(int)(uVar5 & (int)uVar5 >> 0x1f);
    if (0 < (int)lVar4) {
      uVar2 = (**(code **)(*param_2 + 0x50))(param_2,pbVar3,param_1);
      iVar1 = (int)param_1[10];
      *(int *)(param_1 + 0xb) = (int)param_1[0xb] + 1;
      goto joined_r0x0066fb28;
    }
    iVar1 = (int)param_1[10];
    *(int *)(param_1 + 0xb) = (int)param_1[0xb] + 1;
  }
  uVar2 = 0;
joined_r0x0066fb28:
  if (iVar1 != 0) {
    return 0;
  }
  uVar5 = *(int *)((long)param_1 + 0x1c) + iVar6;
  *(uint *)((long)param_1 + 0x1c) = uVar5;
  *param_1 = param_1[1] + (long)(int)(uVar5 & (int)uVar5 >> 0x1f);
  return uVar2;
}


// ===== 0066fc04  FUN_0066fc04 =====

undefined1  [16] FUN_0066fc04(long param_1,int param_2)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  iVar1 = param_2 + (uint)*(byte *)(param_1 + 2) * 0x4000 + -0x4000;
  if (-1 < (char)*(byte *)(param_1 + 2)) {
    auVar2._8_4_ = iVar1;
    auVar2._0_8_ = param_1 + 3;
    auVar2._12_4_ = 0;
    return auVar2;
  }
  iVar1 = iVar1 + (uint)*(byte *)(param_1 + 3) * 0x200000 + -0x200000;
  if (-1 < (char)*(byte *)(param_1 + 3)) {
    auVar3._8_4_ = iVar1;
    auVar3._0_8_ = param_1 + 4;
    auVar3._12_4_ = 0;
    return auVar3;
  }
  iVar1 = iVar1 + *(char *)(param_1 + 4) * 0x10000000 + -0x10000000;
  if (-1 < *(char *)(param_1 + 4)) {
    auVar4._8_4_ = iVar1;
    auVar4._0_8_ = param_1 + 5;
    auVar4._12_4_ = 0;
    return auVar4;
  }
  if (-1 < *(char *)(param_1 + 5)) {
    auVar5._8_4_ = iVar1;
    auVar5._0_8_ = param_1 + 6;
    auVar5._12_4_ = 0;
    return auVar5;
  }
  if (-1 < *(char *)(param_1 + 6)) {
    auVar6._8_4_ = iVar1;
    auVar6._0_8_ = param_1 + 7;
    auVar6._12_4_ = 0;
    return auVar6;
  }
  if (-1 < *(char *)(param_1 + 7)) {
    auVar7._8_4_ = iVar1;
    auVar7._0_8_ = param_1 + 8;
    auVar7._12_4_ = 0;
    return auVar7;
  }
  if (-1 < *(char *)(param_1 + 8)) {
    auVar8._8_4_ = iVar1;
    auVar8._0_8_ = param_1 + 9;
    auVar8._12_4_ = 0;
    return auVar8;
  }
  if (-1 < *(char *)(param_1 + 9)) {
    auVar9._8_4_ = iVar1;
    auVar9._0_8_ = param_1 + 10;
    auVar9._12_4_ = 0;
    return auVar9;
  }
  return ZEXT816(0) << 0x40;
}


// ===== 0066fd14  FUN_0066fd14 =====

undefined1  [16] FUN_0066fd14(long param_1,ulong param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  auVar2._8_8_ = (ulong)*(byte *)(param_1 + 2) * 0x4000 + (param_2 & 0xffffffff) + -0x4000;
  if (-1 < (char)*(byte *)(param_1 + 2)) {
    auVar2._0_8_ = param_1 + 3;
    return auVar2;
  }
  auVar3._8_8_ = auVar2._8_8_ + (ulong)*(byte *)(param_1 + 3) * 0x200000 + -0x200000;
  if (-1 < (char)*(byte *)(param_1 + 3)) {
    auVar3._0_8_ = param_1 + 4;
    return auVar3;
  }
  lVar1 = auVar3._8_8_ + (ulong)*(byte *)(param_1 + 4) * 0x10000000 + -0x10000000;
  if (-1 < (char)*(byte *)(param_1 + 4)) {
    auVar4._8_8_ = lVar1;
    auVar4._0_8_ = param_1 + 5;
    return auVar4;
  }
  lVar1 = lVar1 + ((ulong)*(byte *)(param_1 + 5) << 0x23) + -0x800000000;
  if (-1 < (char)*(byte *)(param_1 + 5)) {
    auVar5._8_8_ = lVar1;
    auVar5._0_8_ = param_1 + 6;
    return auVar5;
  }
  lVar1 = lVar1 + ((ulong)*(byte *)(param_1 + 6) << 0x2a) + -0x40000000000;
  if (-1 < (char)*(byte *)(param_1 + 6)) {
    auVar6._8_8_ = lVar1;
    auVar6._0_8_ = param_1 + 7;
    return auVar6;
  }
  lVar1 = lVar1 + ((ulong)*(byte *)(param_1 + 7) << 0x31) + -0x2000000000000;
  if (-1 < (char)*(byte *)(param_1 + 7)) {
    auVar7._8_8_ = lVar1;
    auVar7._0_8_ = param_1 + 8;
    return auVar7;
  }
  lVar1 = lVar1 + ((ulong)*(byte *)(param_1 + 8) << 0x38) + -0x100000000000000;
  if (-1 < (char)*(byte *)(param_1 + 8)) {
    auVar8._8_8_ = lVar1;
    auVar8._0_8_ = param_1 + 9;
    return auVar8;
  }
  if (-1 < *(char *)(param_1 + 9)) {
    auVar9._8_8_ = lVar1 + ((ulong)(uint)~(int)*(char *)(param_1 + 9) << 0x3f);
    auVar9._0_8_ = param_1 + 10;
    return auVar9;
  }
  return ZEXT816(0);
}


// ===== 0066fe50  FUN_0066fe50 =====

undefined1  [16] FUN_0066fe50(long param_1,int param_2)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  iVar1 = param_2 + (uint)*(byte *)(param_1 + 2) * 0x4000 + -0x4000;
  if (-1 < (char)*(byte *)(param_1 + 2)) {
    auVar2._8_4_ = iVar1;
    auVar2._0_8_ = param_1 + 3;
    auVar2._12_4_ = 0;
    return auVar2;
  }
  iVar1 = iVar1 + (uint)*(byte *)(param_1 + 3) * 0x200000 + -0x200000;
  if (-1 < (char)*(byte *)(param_1 + 3)) {
    auVar3._8_4_ = iVar1;
    auVar3._0_8_ = param_1 + 4;
    auVar3._12_4_ = 0;
    return auVar3;
  }
  if (-1 < *(char *)(param_1 + 4)) {
    auVar4._8_4_ = iVar1 + *(char *)(param_1 + 4) * 0x10000000 + -0x10000000;
    auVar4._0_8_ = param_1 + 5;
    auVar4._12_4_ = 0;
    return auVar4;
  }
  return ZEXT816(0);
}


// ===== 0066fed4  FUN_0066fed4 =====

undefined1  [16] FUN_0066fed4(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  iVar4 = param_2 + (uint)*(byte *)(param_1 + 1) * 0x80 + -0x80;
  if (-1 < (char)*(byte *)(param_1 + 1)) {
    auVar5._8_4_ = iVar4;
    auVar5._0_8_ = param_1 + 2;
    auVar5._12_4_ = 0;
    return auVar5;
  }
  iVar4 = iVar4 + (uint)*(byte *)(param_1 + 2) * 0x4000 + -0x4000;
  if (-1 < (char)*(byte *)(param_1 + 2)) {
    auVar6._8_4_ = iVar4;
    auVar6._0_8_ = param_1 + 3;
    auVar6._12_4_ = 0;
    return auVar6;
  }
  iVar4 = iVar4 + (uint)*(byte *)(param_1 + 3) * 0x200000 + -0x200000;
  if (-1 < (char)*(byte *)(param_1 + 3)) {
    auVar7._8_4_ = iVar4;
    auVar7._0_8_ = param_1 + 4;
    auVar7._12_4_ = 0;
    return auVar7;
  }
  if (*(byte *)(param_1 + 4) < 8) {
    uVar1 = iVar4 + (uint)*(byte *)(param_1 + 4) * 0x10000000 + 0xf0000000;
    uVar2 = 0;
    if (uVar1 < 0x7ffffff0) {
      uVar2 = uVar1;
    }
    lVar3 = 0;
    if (uVar1 < 0x7ffffff0) {
      lVar3 = param_1 + 5;
    }
    auVar8._8_4_ = uVar2;
    auVar8._0_8_ = lVar3;
    auVar8._12_4_ = 0;
    return auVar8;
  }
  return ZEXT816(0) << 0x40;
}


// ===== 0066ff90  FUN_0066ff90 =====

byte * FUN_0066ff90(undefined8 param_1,byte *param_2,long param_3)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  byte *pbVar5;
  ulong uVar6;
  
  pbVar5 = param_2 + 1;
  bVar2 = *param_2;
  if ((char)bVar2 < '\0') {
    iVar3 = (uint)bVar2 + (uint)*pbVar5 * 0x80 + -0x80;
    if ((char)*pbVar5 < '\0') {
      iVar3 = iVar3 + (uint)param_2[2] * 0x4000 + -0x4000;
      if ((char)param_2[2] < '\0') {
        iVar3 = iVar3 + (uint)param_2[3] * 0x200000 + -0x200000;
        if ((char)param_2[3] < '\0') {
          if ((7 < param_2[4]) ||
             (uVar1 = iVar3 + (uint)param_2[4] * 0x10000000 + 0xf0000000, 0x7fffffef < uVar1)) {
            return (byte *)0x0;
          }
          pbVar5 = param_2 + 5;
          uVar6 = (ulong)(int)uVar1;
          if ((long)uVar6 <= (*(long *)(param_3 + 8) - (long)pbVar5) + 0x10) goto LAB_00670018;
          goto LAB_0066ffc8;
        }
        lVar4 = 3;
      }
      else {
        lVar4 = 2;
      }
    }
    else {
      lVar4 = 1;
    }
    pbVar5 = param_2 + lVar4 + 1;
    uVar6 = (ulong)iVar3;
    if ((long)uVar6 <= (*(long *)(param_3 + 8) - (long)pbVar5) + 0x10) goto LAB_00670018;
  }
  else {
    uVar6 = (ulong)(int)(uint)bVar2;
    if ((long)uVar6 <= (*(long *)(param_3 + 8) - (long)pbVar5) + 0x10) {
LAB_00670018:
      FUN_00712d54(param_1,pbVar5,uVar6);
      return pbVar5 + uVar6;
    }
  }
LAB_0066ffc8:
  pbVar5 = (byte *)FUN_0066f6c8(param_3,pbVar5,uVar6 & 0xffffffff);
  return pbVar5;
}


// ===== 006700c8  FUN_006700c8 =====

void FUN_006700c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00670c94(param_3,param_2,param_1);
  return;
}


// ===== 006700d8  FUN_006700d8 =====

void FUN_006700d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00671060(param_3,param_2,param_1);
  return;
}


// ===== 006700e8  FUN_006700e8 =====

void FUN_006700e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0067142c(param_3,param_2,param_1);
  return;
}


// ===== 006700f8  FUN_006700f8 =====

void FUN_006700f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00671810(param_3,param_2,param_1);
  return;
}


// ===== 00670108  FUN_00670108 =====

void FUN_00670108(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00671bf4(param_3,param_2,param_1);
  return;
}


// ===== 00670118  FUN_00670118 =====

void FUN_00670118(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00671fe4(param_3,param_2,param_1);
  return;
}


// ===== 00670128  FUN_00670128 =====

void FUN_00670128(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00670c94(param_3,param_2,param_1);
  return;
}


// ===== 00670138  FUN_00670138 =====

void FUN_00670138(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_006723ec(param_3,param_2,param_1);
  return;
}


// ===== 00670148  FUN_00670148 =====

void FUN_00670148(undefined8 param_1,byte *param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  
  bVar5 = *param_2;
  if (-1 < (char)bVar5) {
    FUN_006727e8(param_3,param_2 + 1,(uint)bVar5,param_1);
    return;
  }
  bVar4 = param_2[1];
  iVar6 = (uint)bVar5 + (uint)bVar4 * 0x80 + -0x80;
  if (-1 < (char)bVar4) {
    FUN_006727e8(param_3,param_2 + 2,iVar6,param_1);
    return;
  }
  iVar6 = iVar6 + (uint)param_2[2] * 0x4000 + -0x4000;
  if (-1 < (char)param_2[2]) {
    FUN_006727e8(param_3,param_2 + 3,iVar6,param_1);
    return;
  }
  iVar6 = iVar6 + (uint)param_2[3] * 0x200000 + -0x200000;
  if (-1 < (char)param_2[3]) {
    FUN_006727e8(param_3,param_2 + 4,iVar6,param_1);
    return;
  }
  if (param_2[4] < 8) {
    uVar1 = iVar6 + (uint)param_2[4] * 0x10000000 + 0xf0000000;
    pbVar3 = (byte *)0x0;
    if (uVar1 < 0x7ffffff0) {
      pbVar3 = param_2 + 5;
    }
    uVar2 = 0;
    if (uVar1 < 0x7ffffff0) {
      uVar2 = uVar1;
    }
    FUN_006727e8(param_3,pbVar3,uVar2,param_1);
    return;
  }
  FUN_006727e8(param_3,0,0,param_1);
  return;
}


// ===== 00670240  FUN_00670240 =====

void FUN_00670240(undefined8 param_1,byte *param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  
  bVar5 = *param_2;
  if (-1 < (char)bVar5) {
    FUN_00672968(param_3,param_2 + 1,(uint)bVar5,param_1);
    return;
  }
  bVar4 = param_2[1];
  iVar6 = (uint)bVar5 + (uint)bVar4 * 0x80 + -0x80;
  if (-1 < (char)bVar4) {
    FUN_00672968(param_3,param_2 + 2,iVar6,param_1);
    return;
  }
  iVar6 = iVar6 + (uint)param_2[2] * 0x4000 + -0x4000;
  if (-1 < (char)param_2[2]) {
    FUN_00672968(param_3,param_2 + 3,iVar6,param_1);
    return;
  }
  iVar6 = iVar6 + (uint)param_2[3] * 0x200000 + -0x200000;
  if (-1 < (char)param_2[3]) {
    FUN_00672968(param_3,param_2 + 4,iVar6,param_1);
    return;
  }
  if (param_2[4] < 8) {
    uVar1 = iVar6 + (uint)param_2[4] * 0x10000000 + 0xf0000000;
    pbVar3 = (byte *)0x0;
    if (uVar1 < 0x7ffffff0) {
      pbVar3 = param_2 + 5;
    }
    uVar2 = 0;
    if (uVar1 < 0x7ffffff0) {
      uVar2 = uVar1;
    }
    FUN_00672968(param_3,pbVar3,uVar2,param_1);
    return;
  }
  FUN_00672968(param_3,0,0,param_1);
  return;
}


// ===== 00670338  FUN_00670338 =====

void FUN_00670338(undefined8 param_1,byte *param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  
  bVar5 = *param_2;
  if (-1 < (char)bVar5) {
    FUN_00672ae8(param_3,param_2 + 1,(uint)bVar5,param_1);
    return;
  }
  bVar4 = param_2[1];
  iVar6 = (uint)bVar5 + (uint)bVar4 * 0x80 + -0x80;
  if (-1 < (char)bVar4) {
    FUN_00672ae8(param_3,param_2 + 2,iVar6,param_1);
    return;
  }
  iVar6 = iVar6 + (uint)param_2[2] * 0x4000 + -0x4000;
  if (-1 < (char)param_2[2]) {
    FUN_00672ae8(param_3,param_2 + 3,iVar6,param_1);
    return;
  }
  iVar6 = iVar6 + (uint)param_2[3] * 0x200000 + -0x200000;
  if (-1 < (char)param_2[3]) {
    FUN_00672ae8(param_3,param_2 + 4,iVar6,param_1);
    return;
  }
  if (param_2[4] < 8) {
    uVar1 = iVar6 + (uint)param_2[4] * 0x10000000 + 0xf0000000;
    pbVar3 = (byte *)0x0;
    if (uVar1 < 0x7ffffff0) {
      pbVar3 = param_2 + 5;
    }
    uVar2 = 0;
    if (uVar1 < 0x7ffffff0) {
      uVar2 = uVar1;
    }
    FUN_00672ae8(param_3,pbVar3,uVar2,param_1);
    return;
  }
  FUN_00672ae8(param_3,0,0,param_1);
  return;
}


// ===== 00670430  FUN_00670430 =====

void FUN_00670430(undefined8 param_1,byte *param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  
  bVar5 = *param_2;
  if (-1 < (char)bVar5) {
    FUN_00672c68(param_3,param_2 + 1,(uint)bVar5,param_1);
    return;
  }
  bVar4 = param_2[1];
  iVar6 = (uint)bVar5 + (uint)bVar4 * 0x80 + -0x80;
  if (-1 < (char)bVar4) {
    FUN_00672c68(param_3,param_2 + 2,iVar6,param_1);
    return;
  }
  iVar6 = iVar6 + (uint)param_2[2] * 0x4000 + -0x4000;
  if (-1 < (char)param_2[2]) {
    FUN_00672c68(param_3,param_2 + 3,iVar6,param_1);
    return;
  }
  iVar6 = iVar6 + (uint)param_2[3] * 0x200000 + -0x200000;
  if (-1 < (char)param_2[3]) {
    FUN_00672c68(param_3,param_2 + 4,iVar6,param_1);
    return;
  }
  if (param_2[4] < 8) {
    uVar1 = iVar6 + (uint)param_2[4] * 0x10000000 + 0xf0000000;
    pbVar3 = (byte *)0x0;
    if (uVar1 < 0x7ffffff0) {
      pbVar3 = param_2 + 5;
    }
    uVar2 = 0;
    if (uVar1 < 0x7ffffff0) {
      uVar2 = uVar1;
    }
    FUN_00672c68(param_3,pbVar3,uVar2,param_1);
    return;
  }
  FUN_00672c68(param_3,0,0,param_1);
  return;
}


// ===== 00670528  FUN_00670528 =====

void FUN_00670528(undefined8 param_1,byte *param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  
  bVar5 = *param_2;
  if (-1 < (char)bVar5) {
    FUN_00672de8(param_3,param_2 + 1,(uint)bVar5,param_1);
    return;
  }
  bVar4 = param_2[1];
  iVar6 = (uint)bVar5 + (uint)bVar4 * 0x80 + -0x80;
  if (-1 < (char)bVar4) {
    FUN_00672de8(param_3,param_2 + 2,iVar6,param_1);
    return;
  }
  iVar6 = iVar6 + (uint)param_2[2] * 0x4000 + -0x4000;
  if (-1 < (char)param_2[2]) {
    FUN_00672de8(param_3,param_2 + 3,iVar6,param_1);
    return;
  }
  iVar6 = iVar6 + (uint)param_2[3] * 0x200000 + -0x200000;
  if (-1 < (char)param_2[3]) {
    FUN_00672de8(param_3,param_2 + 4,iVar6,param_1);
    return;
  }
  if (param_2[4] < 8) {
    uVar1 = iVar6 + (uint)param_2[4] * 0x10000000 + 0xf0000000;
    pbVar3 = (byte *)0x0;
    if (uVar1 < 0x7ffffff0) {
      pbVar3 = param_2 + 5;
    }
    uVar2 = 0;
    if (uVar1 < 0x7ffffff0) {
      uVar2 = uVar1;
    }
    FUN_00672de8(param_3,pbVar3,uVar2,param_1);
    return;
  }
  FUN_00672de8(param_3,0,0,param_1);
  return;
}


// ===== 00670620  FUN_00670620 =====

void FUN_00670620(undefined8 param_1,byte *param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  
  bVar5 = *param_2;
  if (-1 < (char)bVar5) {
    FUN_00672f68(param_3,param_2 + 1,(uint)bVar5,param_1);
    return;
  }
  bVar4 = param_2[1];
  iVar6 = (uint)bVar5 + (uint)bVar4 * 0x80 + -0x80;
  if (-1 < (char)bVar4) {
    FUN_00672f68(param_3,param_2 + 2,iVar6,param_1);
    return;
  }
  iVar6 = iVar6 + (uint)param_2[2] * 0x4000 + -0x4000;
  if (-1 < (char)param_2[2]) {
    FUN_00672f68(param_3,param_2 + 3,iVar6,param_1);
    return;
  }
  iVar6 = iVar6 + (uint)param_2[3] * 0x200000 + -0x200000;
  if (-1 < (char)param_2[3]) {
    FUN_00672f68(param_3,param_2 + 4,iVar6,param_1);
    return;
  }
  if (param_2[4] < 8) {
    uVar1 = iVar6 + (uint)param_2[4] * 0x10000000 + 0xf0000000;
    pbVar3 = (byte *)0x0;
    if (uVar1 < 0x7ffffff0) {
      pbVar3 = param_2 + 5;
    }
    uVar2 = 0;
    if (uVar1 < 0x7ffffff0) {
      uVar2 = uVar1;
    }
    FUN_00672f68(param_3,pbVar3,uVar2,param_1);
    return;
  }
  FUN_00672f68(param_3,0,0,param_1);
  return;
}


// ===== 00670718  FUN_00670718 =====

byte * FUN_00670718(undefined8 param_1,byte *param_2,undefined8 *param_3)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  while( true ) {
    if ((byte *)*param_3 <= param_2) {
      iVar1 = (int)param_2 - *(int *)(param_3 + 1);
      if (*(int *)((long)param_3 + 0x1c) == iVar1) {
        pbVar2 = (byte *)0x0;
        if (param_3[2] != 0 || iVar1 < 1) {
          pbVar2 = param_2;
        }
        return pbVar2;
      }
      auVar5 = FUN_0066f53c(param_3,iVar1,*(undefined4 *)((long)param_3 + 0x5c));
      param_2 = auVar5._0_8_;
      if ((auVar5 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
        return param_2;
      }
    }
    pbVar2 = param_2 + 1;
    uVar3 = (uint)*param_2;
    if ((char)*param_2 < '\0') {
      pbVar2 = param_2 + 2;
      uVar3 = (uVar3 + (uint)param_2[1] * 0x80) - 0x80;
      if ((char)param_2[1] < '\0') {
        uVar3 = (uVar3 + (uint)*pbVar2 * 0x4000) - 0x4000;
        if ((char)*pbVar2 < '\0') {
          uVar3 = (uVar3 + (uint)param_2[3] * 0x200000) - 0x200000;
          if ((char)param_2[3] < '\0') {
            if ((char)param_2[4] < 0) {
              return (byte *)0x0;
            }
            lVar4 = 4;
            uVar3 = uVar3 + (char)param_2[4] * 0x10000000 + 0xf0000000;
          }
          else {
            lVar4 = 3;
          }
        }
        else {
          lVar4 = 2;
        }
        pbVar2 = param_2 + lVar4 + 1;
      }
    }
    if ((uVar3 == 0) || ((uVar3 & 7) == 4)) break;
    param_2 = (byte *)FUN_006708b4(uVar3,param_1,pbVar2,param_3);
    if (param_2 == (byte *)0x0) {
      return (byte *)0x0;
    }
  }
  *(uint *)(param_3 + 10) = uVar3 - 1;
  return pbVar2;
}


// ===== 00670864  FUN_00670864 =====

void FUN_00670864(undefined4 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_2;
  FUN_006708b4(param_1,&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006708b4  FUN_006708b4 =====

void FUN_006708b4(ulong param_1,long *param_2,byte *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  byte *pbVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined1 uStack_79;
  undefined8 local_78 [6];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  iVar5 = (int)(param_1 >> 3);
  if (iVar5 == 0) {
LAB_00670c3c:
    pbVar4 = (byte *)0x0;
    if (*(long *)(lVar3 + 0x28) == local_48) {
      return;
    }
  }
  else {
    param_1 = param_1 & 7;
    pbVar4 = (byte *)0x0;
    if (param_1 < 3) {
      if (param_1 == 0) {
        uVar8 = (ulong)(char)*param_3;
        if ((long)uVar8 < 0) {
          pbVar4 = param_3 + 2;
          uVar8 = uVar8 & 0x7f | (ulong)param_3[1] << 7;
          if ((char)param_3[1] < '\0') {
            uVar8 = (uVar8 + (ulong)*pbVar4 * 0x4000) - 0x4000;
            if ((char)*pbVar4 < '\0') {
              uVar8 = (uVar8 + (ulong)param_3[3] * 0x200000) - 0x200000;
              if ((char)param_3[3] < '\0') {
                uVar8 = (uVar8 + (ulong)param_3[4] * 0x10000000) - 0x10000000;
                if ((char)param_3[4] < '\0') {
                  uVar8 = (uVar8 + ((ulong)param_3[5] << 0x23)) - 0x800000000;
                  if ((char)param_3[5] < '\0') {
                    uVar8 = (uVar8 + ((ulong)param_3[6] << 0x2a)) - 0x40000000000;
                    if ((char)param_3[6] < '\0') {
                      uVar8 = uVar8 + ((ulong)param_3[7] << 0x31) + 0xfffe000000000000;
                      if ((char)param_3[7] < '\0') {
                        uVar8 = uVar8 + ((ulong)param_3[8] << 0x38) + 0xff00000000000000;
                        if ((char)param_3[8] < '\0') {
                          if ((char)param_3[9] < 0) goto LAB_00670c3c;
                          uVar8 = uVar8 + ((ulong)(uint)~(int)(char)param_3[9] << 0x3f);
                          lVar7 = 9;
                        }
                        else {
                          lVar7 = 8;
                        }
                      }
                      else {
                        lVar7 = 7;
                      }
                    }
                    else {
                      lVar7 = 6;
                    }
                  }
                  else {
                    lVar7 = 5;
                  }
                }
                else {
                  lVar7 = 4;
                }
              }
              else {
                lVar7 = 3;
              }
            }
            else {
              lVar7 = 2;
            }
            pbVar4 = param_3 + lVar7 + 1;
          }
        }
        else {
          pbVar4 = param_3 + 1;
        }
        lVar7 = *param_2;
        if (lVar7 != 0) {
          uVar2 = iVar5 << 3;
          uVar10 = (ulong)uVar2;
          if (uVar2 < 0x80) {
            FUN_007132e8(lVar7,(ulong)uVar2);
            lVar7 = *param_2;
          }
          else {
            do {
              FUN_007132e8(lVar7,(uint)uVar10 | 0xffffff80);
              uVar6 = uVar10 >> 0xe;
              uVar10 = uVar10 >> 7;
            } while (uVar6 != 0);
            FUN_007132e8(lVar7);
            lVar7 = *param_2;
          }
          uVar10 = uVar8;
          if (0x7f < uVar8) {
            do {
              FUN_007132e8(lVar7,(uint)uVar10 | 0xffffff80);
              uVar8 = uVar10 >> 7;
              uVar6 = uVar10 >> 0xe;
              uVar10 = uVar8;
            } while (uVar6 != 0);
          }
          FUN_007132e8(lVar7,uVar8);
        }
      }
      else if (param_1 == 1) {
        lVar7 = *param_2;
        pbVar4 = param_3 + 8;
        uVar9 = *(undefined8 *)param_3;
        if (lVar7 != 0) {
          uVar10 = (ulong)(iVar5 << 3 | 1);
          uVar8 = uVar10;
          if (0x7e < (uint)(iVar5 << 3)) {
            do {
              FUN_007132e8(lVar7,(uint)uVar8 | 0xffffff80);
              uVar10 = uVar8 >> 7;
              uVar6 = uVar8 >> 0xe;
              uVar8 = uVar10;
            } while (uVar6 != 0);
          }
          FUN_007132e8(lVar7,uVar10);
          local_78[0] = uVar9;
          FUN_0071302c(*param_2,local_78,8);
        }
      }
      else if (param_1 == 2) {
        pbVar4 = (byte *)FUN_006730e8(param_2);
      }
    }
    else if (param_1 == 3) {
      pbVar4 = (byte *)FUN_0067338c(param_2);
    }
    else if (param_1 == 4) {
      FUN_00675e64(local_78,3,
                   "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/parse_context.h"
                   ,0x390);
                    /* try { // try from 00670a00 to 00670a13 has its CatchHandler @ 00670c6c */
      uVar9 = FUN_00675a58(local_78,"Can\'t happen");
                    /* try { // try from 00670a14 to 00670a1b has its CatchHandler @ 00670c68 */
      FUN_00675ac0(&uStack_79,uVar9);
      FUN_00675e7c(local_78);
      pbVar4 = param_3;
    }
    else if (param_1 == 5) {
      lVar7 = *param_2;
      uVar1 = *(undefined4 *)param_3;
      pbVar4 = param_3 + 4;
      if (lVar7 != 0) {
        uVar2 = iVar5 << 3 | 5;
        uVar10 = (ulong)uVar2;
        uVar8 = uVar10;
        if (0x7f < uVar2) {
          do {
            FUN_007132e8(lVar7,(uint)uVar8 | 0xffffff80);
            uVar10 = uVar8 >> 7;
            uVar6 = uVar8 >> 0xe;
            uVar8 = uVar10;
          } while (uVar6 != 0);
        }
        FUN_007132e8(lVar7,uVar10);
        local_78[0] = CONCAT44(local_78[0]._4_4_,uVar1);
        FUN_0071302c(*param_2,local_78,4);
      }
    }
    if (*(long *)(lVar3 + 0x28) == local_48) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pbVar4);
}


// ===== 00670c94  FUN_00670c94 =====

void FUN_00670c94(long *param_1,byte *param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined2 local_58;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pbVar3 = param_2 + 1;
  uVar8 = (uint)*param_2;
  if ((char)*param_2 < '\0') {
    uVar8 = (uVar8 + (uint)*pbVar3 * 0x80) - 0x80;
    if ((char)*pbVar3 < '\0') {
      uVar8 = (uVar8 + (uint)param_2[2] * 0x4000) - 0x4000;
      if ((char)param_2[2] < '\0') {
        uVar8 = (uVar8 + (uint)param_2[3] * 0x200000) - 0x200000;
        if ((char)param_2[3] < '\0') {
          if ((7 < param_2[4]) ||
             (uVar8 = uVar8 + (uint)param_2[4] * 0x10000000 + 0xf0000000, 0x7fffffef < uVar8)) {
LAB_00670e98:
            pbVar4 = (byte *)0x0;
            goto LAB_00670da4;
          }
          pbVar3 = param_2 + 5;
          lVar6 = param_1[1];
          iVar9 = (int)lVar6 - (int)pbVar3;
          if (iVar9 < (int)uVar8) goto LAB_00670ce0;
          goto LAB_00670d8c;
        }
        lVar6 = 3;
      }
      else {
        lVar6 = 2;
      }
    }
    else {
      lVar6 = 1;
    }
    pbVar3 = param_2 + lVar6 + 1;
    lVar6 = param_1[1];
    iVar9 = (int)lVar6 - (int)pbVar3;
    if (iVar9 < (int)uVar8) goto LAB_00670ce0;
  }
  else {
    lVar6 = param_1[1];
    iVar9 = (int)lVar6 - (int)pbVar3;
    if (iVar9 < (int)uVar8) {
LAB_00670ce0:
      do {
        pbVar4 = (byte *)FUN_00670ea0(pbVar3,lVar6,param_3);
        if (pbVar4 == (byte *)0x0) goto LAB_00670da4;
        puVar7 = (undefined8 *)param_1[1];
        iVar10 = (int)pbVar4 - (int)puVar7;
        if ((int)(uVar8 - iVar9) < 0x11) {
          local_58 = 0;
          local_60 = 0;
          lVar6 = (long)&local_70 + (long)(int)(uVar8 - iVar9);
          uStack_68 = puVar7[1];
          local_70 = *puVar7;
          lVar5 = FUN_00670ea0((long)&local_70 + (long)iVar10,lVar6,param_3);
          pbVar4 = (byte *)(param_1[1] + (lVar5 - (long)&local_70));
          if (lVar5 != lVar6) {
            pbVar4 = (byte *)0x0;
          }
          goto LAB_00670da4;
        }
        if (*(int *)((long)param_1 + 0x1c) < 0x11) goto LAB_00670e98;
        lVar5 = FUN_0066f164(param_1,0,0xffffffff);
        lVar6 = param_1[1];
        if (lVar5 == 0) {
          *param_1 = lVar6;
          *(undefined4 *)(param_1 + 10) = 1;
          pbVar4 = (byte *)0x0;
          goto LAB_00670da4;
        }
        pbVar3 = (byte *)(lVar5 + iVar10);
        uVar1 = *(int *)((long)param_1 + 0x1c) + ((int)lVar5 - (int)lVar6);
        uVar8 = (uVar8 - iVar9) - iVar10;
        iVar9 = (int)lVar6 - (int)pbVar3;
        *(uint *)((long)param_1 + 0x1c) = uVar1;
        *param_1 = lVar6 + (int)(uVar1 & (int)uVar1 >> 0x1f);
      } while (iVar9 < (int)uVar8);
    }
  }
LAB_00670d8c:
  pbVar4 = (byte *)FUN_00670ea0(pbVar3,pbVar3 + (int)uVar8,param_3);
  if (pbVar3 + (int)uVar8 != pbVar4) {
    pbVar4 = (byte *)0x0;
  }
LAB_00670da4:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pbVar4);
  }
  return;
}


// ===== 00670ea0  FUN_00670ea0 =====

byte * FUN_00670ea0(byte *param_1,byte *param_2,uint *param_3)

{
  uint uVar1;
  long lVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  
  pbVar3 = param_1;
  if (param_1 < param_2) {
    do {
      while (uVar5 = (ulong)(char)*pbVar3, (long)uVar5 < 0) {
        param_1 = pbVar3 + 2;
        uVar5 = uVar5 & 0x7f | (ulong)pbVar3[1] << 7;
        if ((char)pbVar3[1] < '\0') {
          uVar5 = (uVar5 + (ulong)*param_1 * 0x4000) - 0x4000;
          if ((char)*param_1 < '\0') {
            uVar5 = (uVar5 + (ulong)pbVar3[3] * 0x200000) - 0x200000;
            if ((char)pbVar3[3] < '\0') {
              lVar2 = uVar5 + (ulong)pbVar3[4] * 0x10000000;
              uVar5 = lVar2 - 0x10000000;
              if ((char)pbVar3[4] < '\0') {
                if ((char)pbVar3[5] < '\0') {
                  if ((char)pbVar3[6] < '\0') {
                    if ((char)pbVar3[7] < '\0') {
                      uVar5 = lVar2 + 0xfefcfffff0000000;
                      if ((char)pbVar3[8] < '\0') {
                        if ((char)pbVar3[9] < '\0') {
                          return (byte *)0x0;
                        }
                        lVar2 = 9;
                      }
                      else {
                        lVar2 = 8;
                      }
                    }
                    else {
                      uVar5 = lVar2 + 0xfffcfffff0000000;
                      lVar2 = 7;
                    }
                  }
                  else {
                    uVar5 = lVar2 + 0xfffefffff0000000;
                    lVar2 = 6;
                  }
                }
                else {
                  uVar5 = lVar2 - 0x810000000;
                  lVar2 = 5;
                }
              }
              else {
                lVar2 = 4;
              }
            }
            else {
              lVar2 = 3;
            }
          }
          else {
            lVar2 = 2;
          }
          param_1 = pbVar3 + lVar2 + 1;
          uVar4 = (ulong)*param_3;
          if (*param_3 != param_3[1]) goto LAB_00670ef0;
          goto LAB_00670f78;
        }
        uVar4 = (ulong)*param_3;
        if (*param_3 == param_3[1]) goto LAB_00670f78;
LAB_00670ef0:
        *(int *)(*(long *)(param_3 + 2) + uVar4 * 4) = (int)uVar5;
        *param_3 = (int)uVar4 + 1;
        pbVar3 = param_1;
        if (param_2 <= param_1) {
          return param_1;
        }
      }
      param_1 = pbVar3 + 1;
      uVar4 = (ulong)*param_3;
      if (*param_3 != param_3[1]) goto LAB_00670ef0;
LAB_00670f78:
      uVar1 = (int)uVar4 + 1;
      FUN_00673968(param_3,uVar1);
      *(int *)(*(long *)(param_3 + 2) + uVar4 * 4) = (int)uVar5;
      *param_3 = uVar1;
      pbVar3 = param_1;
    } while (param_1 < param_2);
  }
  return param_1;
}


// ===== 00671060  FUN_00671060 =====

void FUN_00671060(long *param_1,byte *param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined2 local_58;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pbVar3 = param_2 + 1;
  uVar8 = (uint)*param_2;
  if ((char)*param_2 < '\0') {
    uVar8 = (uVar8 + (uint)*pbVar3 * 0x80) - 0x80;
    if ((char)*pbVar3 < '\0') {
      uVar8 = (uVar8 + (uint)param_2[2] * 0x4000) - 0x4000;
      if ((char)param_2[2] < '\0') {
        uVar8 = (uVar8 + (uint)param_2[3] * 0x200000) - 0x200000;
        if ((char)param_2[3] < '\0') {
          if ((7 < param_2[4]) ||
             (uVar8 = uVar8 + (uint)param_2[4] * 0x10000000 + 0xf0000000, 0x7fffffef < uVar8)) {
LAB_00671264:
            pbVar4 = (byte *)0x0;
            goto LAB_00671170;
          }
          pbVar3 = param_2 + 5;
          lVar6 = param_1[1];
          iVar9 = (int)lVar6 - (int)pbVar3;
          if (iVar9 < (int)uVar8) goto LAB_006710ac;
          goto LAB_00671158;
        }
        lVar6 = 3;
      }
      else {
        lVar6 = 2;
      }
    }
    else {
      lVar6 = 1;
    }
    pbVar3 = param_2 + lVar6 + 1;
    lVar6 = param_1[1];
    iVar9 = (int)lVar6 - (int)pbVar3;
    if (iVar9 < (int)uVar8) goto LAB_006710ac;
  }
  else {
    lVar6 = param_1[1];
    iVar9 = (int)lVar6 - (int)pbVar3;
    if (iVar9 < (int)uVar8) {
LAB_006710ac:
      do {
        pbVar4 = (byte *)FUN_0067126c(pbVar3,lVar6,param_3);
        if (pbVar4 == (byte *)0x0) goto LAB_00671170;
        puVar7 = (undefined8 *)param_1[1];
        iVar10 = (int)pbVar4 - (int)puVar7;
        if ((int)(uVar8 - iVar9) < 0x11) {
          local_58 = 0;
          local_60 = 0;
          lVar6 = (long)&local_70 + (long)(int)(uVar8 - iVar9);
          uStack_68 = puVar7[1];
          local_70 = *puVar7;
          lVar5 = FUN_0067126c((long)&local_70 + (long)iVar10,lVar6,param_3);
          pbVar4 = (byte *)(param_1[1] + (lVar5 - (long)&local_70));
          if (lVar5 != lVar6) {
            pbVar4 = (byte *)0x0;
          }
          goto LAB_00671170;
        }
        if (*(int *)((long)param_1 + 0x1c) < 0x11) goto LAB_00671264;
        lVar5 = FUN_0066f164(param_1,0,0xffffffff);
        lVar6 = param_1[1];
        if (lVar5 == 0) {
          *param_1 = lVar6;
          *(undefined4 *)(param_1 + 10) = 1;
          pbVar4 = (byte *)0x0;
          goto LAB_00671170;
        }
        pbVar3 = (byte *)(lVar5 + iVar10);
        uVar1 = *(int *)((long)param_1 + 0x1c) + ((int)lVar5 - (int)lVar6);
        uVar8 = (uVar8 - iVar9) - iVar10;
        iVar9 = (int)lVar6 - (int)pbVar3;
        *(uint *)((long)param_1 + 0x1c) = uVar1;
        *param_1 = lVar6 + (int)(uVar1 & (int)uVar1 >> 0x1f);
      } while (iVar9 < (int)uVar8);
    }
  }
LAB_00671158:
  pbVar4 = (byte *)FUN_0067126c(pbVar3,pbVar3 + (int)uVar8,param_3);
  if (pbVar3 + (int)uVar8 != pbVar4) {
    pbVar4 = (byte *)0x0;
  }
LAB_00671170:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pbVar4);
  }
  return;
}


// ===== 0067126c  FUN_0067126c =====

byte * FUN_0067126c(byte *param_1,byte *param_2,uint *param_3)

{
  uint uVar1;
  long lVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  
  pbVar3 = param_1;
  if (param_1 < param_2) {
    do {
      while (uVar5 = (ulong)(char)*pbVar3, (long)uVar5 < 0) {
        param_1 = pbVar3 + 2;
        uVar5 = uVar5 & 0x7f | (ulong)pbVar3[1] << 7;
        if ((char)pbVar3[1] < '\0') {
          uVar5 = (uVar5 + (ulong)*param_1 * 0x4000) - 0x4000;
          if ((char)*param_1 < '\0') {
            uVar5 = (uVar5 + (ulong)pbVar3[3] * 0x200000) - 0x200000;
            if ((char)pbVar3[3] < '\0') {
              lVar2 = uVar5 + (ulong)pbVar3[4] * 0x10000000;
              uVar5 = lVar2 - 0x10000000;
              if ((char)pbVar3[4] < '\0') {
                if ((char)pbVar3[5] < '\0') {
                  if ((char)pbVar3[6] < '\0') {
                    if ((char)pbVar3[7] < '\0') {
                      uVar5 = lVar2 + 0xfefcfffff0000000;
                      if ((char)pbVar3[8] < '\0') {
                        if ((char)pbVar3[9] < '\0') {
                          return (byte *)0x0;
                        }
                        lVar2 = 9;
                      }
                      else {
                        lVar2 = 8;
                      }
                    }
                    else {
                      uVar5 = lVar2 + 0xfffcfffff0000000;
                      lVar2 = 7;
                    }
                  }
                  else {
                    uVar5 = lVar2 + 0xfffefffff0000000;
                    lVar2 = 6;
                  }
                }
                else {
                  uVar5 = lVar2 - 0x810000000;
                  lVar2 = 5;
                }
              }
              else {
                lVar2 = 4;
              }
            }
            else {
              lVar2 = 3;
            }
          }
          else {
            lVar2 = 2;
          }
          param_1 = pbVar3 + lVar2 + 1;
          uVar4 = (ulong)*param_3;
          if (*param_3 != param_3[1]) goto LAB_006712bc;
          goto LAB_00671344;
        }
        uVar4 = (ulong)*param_3;
        if (*param_3 == param_3[1]) goto LAB_00671344;
LAB_006712bc:
        *(int *)(*(long *)(param_3 + 2) + uVar4 * 4) = (int)uVar5;
        *param_3 = (int)uVar4 + 1;
        pbVar3 = param_1;
        if (param_2 <= param_1) {
          return param_1;
        }
      }
      param_1 = pbVar3 + 1;
      uVar4 = (ulong)*param_3;
      if (*param_3 != param_3[1]) goto LAB_006712bc;
LAB_00671344:
      uVar1 = (int)uVar4 + 1;
      FUN_00673da8(param_3,uVar1);
      *(int *)(*(long *)(param_3 + 2) + uVar4 * 4) = (int)uVar5;
      *param_3 = uVar1;
      pbVar3 = param_1;
    } while (param_1 < param_2);
  }
  return param_1;
}


// ===== 0067142c  FUN_0067142c =====

void FUN_0067142c(long *param_1,byte *param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined2 local_58;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pbVar3 = param_2 + 1;
  uVar8 = (uint)*param_2;
  if ((char)*param_2 < '\0') {
    uVar8 = (uVar8 + (uint)*pbVar3 * 0x80) - 0x80;
    if ((char)*pbVar3 < '\0') {
      uVar8 = (uVar8 + (uint)param_2[2] * 0x4000) - 0x4000;
      if ((char)param_2[2] < '\0') {
        uVar8 = (uVar8 + (uint)param_2[3] * 0x200000) - 0x200000;
        if ((char)param_2[3] < '\0') {
          if ((7 < param_2[4]) ||
             (uVar8 = uVar8 + (uint)param_2[4] * 0x10000000 + 0xf0000000, 0x7fffffef < uVar8)) {
LAB_00671630:
            pbVar4 = (byte *)0x0;
            goto LAB_0067153c;
          }
          pbVar3 = param_2 + 5;
          lVar6 = param_1[1];
          iVar9 = (int)lVar6 - (int)pbVar3;
          if (iVar9 < (int)uVar8) goto LAB_00671478;
          goto LAB_00671524;
        }
        lVar6 = 3;
      }
      else {
        lVar6 = 2;
      }
    }
    else {
      lVar6 = 1;
    }
    pbVar3 = param_2 + lVar6 + 1;
    lVar6 = param_1[1];
    iVar9 = (int)lVar6 - (int)pbVar3;
    if (iVar9 < (int)uVar8) goto LAB_00671478;
  }
  else {
    lVar6 = param_1[1];
    iVar9 = (int)lVar6 - (int)pbVar3;
    if (iVar9 < (int)uVar8) {
LAB_00671478:
      do {
        pbVar4 = (byte *)FUN_00671638(pbVar3,lVar6,param_3);
        if (pbVar4 == (byte *)0x0) goto LAB_0067153c;
        puVar7 = (undefined8 *)param_1[1];
        iVar10 = (int)pbVar4 - (int)puVar7;
        if ((int)(uVar8 - iVar9) < 0x11) {
          local_58 = 0;
          local_60 = 0;
          lVar6 = (long)&local_70 + (long)(int)(uVar8 - iVar9);
          uStack_68 = puVar7[1];
          local_70 = *puVar7;
          lVar5 = FUN_00671638((long)&local_70 + (long)iVar10,lVar6,param_3);
          pbVar4 = (byte *)(param_1[1] + (lVar5 - (long)&local_70));
          if (lVar5 != lVar6) {
            pbVar4 = (byte *)0x0;
          }
          goto LAB_0067153c;
        }
        if (*(int *)((long)param_1 + 0x1c) < 0x11) goto LAB_00671630;
        lVar5 = FUN_0066f164(param_1,0,0xffffffff);
        lVar6 = param_1[1];
        if (lVar5 == 0) {
          *param_1 = lVar6;
          *(undefined4 *)(param_1 + 10) = 1;
          pbVar4 = (byte *)0x0;
          goto LAB_0067153c;
        }
        pbVar3 = (byte *)(lVar5 + iVar10);
        uVar1 = *(int *)((long)param_1 + 0x1c) + ((int)lVar5 - (int)lVar6);
        uVar8 = (uVar8 - iVar9) - iVar10;
        iVar9 = (int)lVar6 - (int)pbVar3;
        *(uint *)((long)param_1 + 0x1c) = uVar1;
        *param_1 = lVar6 + (int)(uVar1 & (int)uVar1 >> 0x1f);
      } while (iVar9 < (int)uVar8);
    }
  }
LAB_00671524:
  pbVar4 = (byte *)FUN_00671638(pbVar3,pbVar3 + (int)uVar8,param_3);
  if (pbVar3 + (int)uVar8 != pbVar4) {
    pbVar4 = (byte *)0x0;
  }
LAB_0067153c:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pbVar4);
  }
  return;
}


// ===== 00671638  FUN_00671638 =====

byte * FUN_00671638(byte *param_1,byte *param_2,uint *param_3)

{
  uint uVar1;
  long lVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  
  pbVar3 = param_1;
  if (param_1 < param_2) {
    do {
      while (uVar5 = (ulong)(char)*pbVar3, (long)uVar5 < 0) {
        param_1 = pbVar3 + 2;
        uVar5 = uVar5 & 0x7f | (ulong)pbVar3[1] << 7;
        if ((char)pbVar3[1] < '\0') {
          uVar5 = (uVar5 + (ulong)*param_1 * 0x4000) - 0x4000;
          if ((char)*param_1 < '\0') {
            uVar5 = (uVar5 + (ulong)pbVar3[3] * 0x200000) - 0x200000;
            if ((char)pbVar3[3] < '\0') {
              uVar5 = (uVar5 + (ulong)pbVar3[4] * 0x10000000) - 0x10000000;
              if ((char)pbVar3[4] < '\0') {
                uVar5 = (uVar5 + ((ulong)pbVar3[5] << 0x23)) - 0x800000000;
                if ((char)pbVar3[5] < '\0') {
                  uVar5 = (uVar5 + ((ulong)pbVar3[6] << 0x2a)) - 0x40000000000;
                  if ((char)pbVar3[6] < '\0') {
                    uVar5 = uVar5 + ((ulong)pbVar3[7] << 0x31) + 0xfffe000000000000;
                    if ((char)pbVar3[7] < '\0') {
                      uVar5 = uVar5 + ((ulong)pbVar3[8] << 0x38) + 0xff00000000000000;
                      if ((char)pbVar3[8] < '\0') {
                        if ((char)pbVar3[9] < 0) {
                          return (byte *)0x0;
                        }
                        uVar5 = uVar5 + ((ulong)(uint)~(int)(char)pbVar3[9] << 0x3f);
                        lVar2 = 9;
                      }
                      else {
                        lVar2 = 8;
                      }
                    }
                    else {
                      lVar2 = 7;
                    }
                  }
                  else {
                    lVar2 = 6;
                  }
                }
                else {
                  lVar2 = 5;
                }
              }
              else {
                lVar2 = 4;
              }
            }
            else {
              lVar2 = 3;
            }
          }
          else {
            lVar2 = 2;
          }
          param_1 = pbVar3 + lVar2 + 1;
          uVar4 = (ulong)*param_3;
          if (*param_3 != param_3[1]) goto LAB_0067167c;
          goto LAB_00671704;
        }
        uVar4 = (ulong)*param_3;
        if (*param_3 == param_3[1]) goto LAB_00671704;
LAB_0067167c:
        *(ulong *)(*(long *)(param_3 + 2) + uVar4 * 8) = uVar5;
        *param_3 = (int)uVar4 + 1;
        pbVar3 = param_1;
        if (param_2 <= param_1) {
          return param_1;
        }
      }
      param_1 = pbVar3 + 1;
      uVar4 = (ulong)*param_3;
      if (*param_3 != param_3[1]) goto LAB_0067167c;
LAB_00671704:
      uVar1 = (int)uVar4 + 1;
      FUN_006741e8(param_3,uVar1);
      *(ulong *)(*(long *)(param_3 + 2) + uVar4 * 8) = uVar5;
      *param_3 = uVar1;
      pbVar3 = param_1;
    } while (param_1 < param_2);
  }
  return param_1;
}


// ===== 00671810  FUN_00671810 =====

void FUN_00671810(long *param_1,byte *param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined2 local_58;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pbVar3 = param_2 + 1;
  uVar8 = (uint)*param_2;
  if ((char)*param_2 < '\0') {
    uVar8 = (uVar8 + (uint)*pbVar3 * 0x80) - 0x80;
    if ((char)*pbVar3 < '\0') {
      uVar8 = (uVar8 + (uint)param_2[2] * 0x4000) - 0x4000;
      if ((char)param_2[2] < '\0') {
        uVar8 = (uVar8 + (uint)param_2[3] * 0x200000) - 0x200000;
        if ((char)param_2[3] < '\0') {
          if ((7 < param_2[4]) ||
             (uVar8 = uVar8 + (uint)param_2[4] * 0x10000000 + 0xf0000000, 0x7fffffef < uVar8)) {
LAB_00671a14:
            pbVar4 = (byte *)0x0;
            goto LAB_00671920;
          }
          pbVar3 = param_2 + 5;
          lVar6 = param_1[1];
          iVar9 = (int)lVar6 - (int)pbVar3;
          if (iVar9 < (int)uVar8) goto LAB_0067185c;
          goto LAB_00671908;
        }
        lVar6 = 3;
      }
      else {
        lVar6 = 2;
      }
    }
    else {
      lVar6 = 1;
    }
    pbVar3 = param_2 + lVar6 + 1;
    lVar6 = param_1[1];
    iVar9 = (int)lVar6 - (int)pbVar3;
    if (iVar9 < (int)uVar8) goto LAB_0067185c;
  }
  else {
    lVar6 = param_1[1];
    iVar9 = (int)lVar6 - (int)pbVar3;
    if (iVar9 < (int)uVar8) {
LAB_0067185c:
      do {
        pbVar4 = (byte *)FUN_00671a1c(pbVar3,lVar6,param_3);
        if (pbVar4 == (byte *)0x0) goto LAB_00671920;
        puVar7 = (undefined8 *)param_1[1];
        iVar10 = (int)pbVar4 - (int)puVar7;
        if ((int)(uVar8 - iVar9) < 0x11) {
          local_58 = 0;
          local_60 = 0;
          lVar6 = (long)&local_70 + (long)(int)(uVar8 - iVar9);
          uStack_68 = puVar7[1];
          local_70 = *puVar7;
          lVar5 = FUN_00671a1c((long)&local_70 + (long)iVar10,lVar6,param_3);
          pbVar4 = (byte *)(param_1[1] + (lVar5 - (long)&local_70));
          if (lVar5 != lVar6) {
            pbVar4 = (byte *)0x0;
          }
          goto LAB_00671920;
        }
        if (*(int *)((long)param_1 + 0x1c) < 0x11) goto LAB_00671a14;
        lVar5 = FUN_0066f164(param_1,0,0xffffffff);
        lVar6 = param_1[1];
        if (lVar5 == 0) {
          *param_1 = lVar6;
          *(undefined4 *)(param_1 + 10) = 1;
          pbVar4 = (byte *)0x0;
          goto LAB_00671920;
        }
        pbVar3 = (byte *)(lVar5 + iVar10);
        uVar1 = *(int *)((long)param_1 + 0x1c) + ((int)lVar5 - (int)lVar6);
        uVar8 = (uVar8 - iVar9) - iVar10;
        iVar9 = (int)lVar6 - (int)pbVar3;
        *(uint *)((long)param_1 + 0x1c) = uVar1;
        *param_1 = lVar6 + (int)(uVar1 & (int)uVar1 >> 0x1f);
      } while (iVar9 < (int)uVar8);
    }
  }
LAB_00671908:
  pbVar4 = (byte *)FUN_00671a1c(pbVar3,pbVar3 + (int)uVar8,param_3);
  if (pbVar3 + (int)uVar8 != pbVar4) {
    pbVar4 = (byte *)0x0;
  }
LAB_00671920:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pbVar4);
  }
  return;
}


// ===== 00671a1c  FUN_00671a1c =====

byte * FUN_00671a1c(byte *param_1,byte *param_2,uint *param_3)

{
  uint uVar1;
  long lVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  
  pbVar3 = param_1;
  if (param_1 < param_2) {
    do {
      while (uVar5 = (ulong)(char)*pbVar3, (long)uVar5 < 0) {
        param_1 = pbVar3 + 2;
        uVar5 = uVar5 & 0x7f | (ulong)pbVar3[1] << 7;
        if ((char)pbVar3[1] < '\0') {
          uVar5 = (uVar5 + (ulong)*param_1 * 0x4000) - 0x4000;
          if ((char)*param_1 < '\0') {
            uVar5 = (uVar5 + (ulong)pbVar3[3] * 0x200000) - 0x200000;
            if ((char)pbVar3[3] < '\0') {
              uVar5 = (uVar5 + (ulong)pbVar3[4] * 0x10000000) - 0x10000000;
              if ((char)pbVar3[4] < '\0') {
                uVar5 = (uVar5 + ((ulong)pbVar3[5] << 0x23)) - 0x800000000;
                if ((char)pbVar3[5] < '\0') {
                  uVar5 = (uVar5 + ((ulong)pbVar3[6] << 0x2a)) - 0x40000000000;
                  if ((char)pbVar3[6] < '\0') {
                    uVar5 = uVar5 + ((ulong)pbVar3[7] << 0x31) + 0xfffe000000000000;
                    if ((char)pbVar3[7] < '\0') {
                      uVar5 = uVar5 + ((ulong)pbVar3[8] << 0x38) + 0xff00000000000000;
                      if ((char)pbVar3[8] < '\0') {
                        if ((char)pbVar3[9] < 0) {
                          return (byte *)0x0;
                        }
                        uVar5 = uVar5 + ((ulong)(uint)~(int)(char)pbVar3[9] << 0x3f);
                        lVar2 = 9;
                      }
                      else {
                        lVar2 = 8;
                      }
                    }
                    else {
                      lVar2 = 7;
                    }
                  }
                  else {
                    lVar2 = 6;
                  }
                }
                else {
                  lVar2 = 5;
                }
              }
              else {
                lVar2 = 4;
              }
            }
            else {
              lVar2 = 3;
            }
          }
          else {
            lVar2 = 2;
          }
          param_1 = pbVar3 + lVar2 + 1;
          uVar4 = (ulong)*param_3;
          if (*param_3 != param_3[1]) goto LAB_00671a60;
          goto LAB_00671ae8;
        }
        uVar4 = (ulong)*param_3;
        if (*param_3 == param_3[1]) goto LAB_00671ae8;
LAB_00671a60:
        *(ulong *)(*(long *)(param_3 + 2) + uVar4 * 8) = uVar5;
        *param_3 = (int)uVar4 + 1;
        pbVar3 = param_1;
        if (param_2 <= param_1) {
          return param_1;
        }
      }
      param_1 = pbVar3 + 1;
      uVar4 = (ulong)*param_3;
      if (*param_3 != param_3[1]) goto LAB_00671a60;
LAB_00671ae8:
      uVar1 = (int)uVar4 + 1;
      FUN_0067462c(param_3,uVar1);
      *(ulong *)(*(long *)(param_3 + 2) + uVar4 * 8) = uVar5;
      *param_3 = uVar1;
      pbVar3 = param_1;
    } while (param_1 < param_2);
  }
  return param_1;
}


// ===== 00671bf4  FUN_00671bf4 =====

void FUN_00671bf4(long *param_1,byte *param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined2 local_58;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pbVar3 = param_2 + 1;
  uVar8 = (uint)*param_2;
  if ((char)*param_2 < '\0') {
    uVar8 = (uVar8 + (uint)*pbVar3 * 0x80) - 0x80;
    if ((char)*pbVar3 < '\0') {
      uVar8 = (uVar8 + (uint)param_2[2] * 0x4000) - 0x4000;
      if ((char)param_2[2] < '\0') {
        uVar8 = (uVar8 + (uint)param_2[3] * 0x200000) - 0x200000;
        if ((char)param_2[3] < '\0') {
          if ((7 < param_2[4]) ||
             (uVar8 = uVar8 + (uint)param_2[4] * 0x10000000 + 0xf0000000, 0x7fffffef < uVar8)) {
LAB_00671df8:
            pbVar4 = (byte *)0x0;
            goto LAB_00671d04;
          }
          pbVar3 = param_2 + 5;
          lVar6 = param_1[1];
          iVar9 = (int)lVar6 - (int)pbVar3;
          if (iVar9 < (int)uVar8) goto LAB_00671c40;
          goto LAB_00671cec;
        }
        lVar6 = 3;
      }
      else {
        lVar6 = 2;
      }
    }
    else {
      lVar6 = 1;
    }
    pbVar3 = param_2 + lVar6 + 1;
    lVar6 = param_1[1];
    iVar9 = (int)lVar6 - (int)pbVar3;
    if (iVar9 < (int)uVar8) goto LAB_00671c40;
  }
  else {
    lVar6 = param_1[1];
    iVar9 = (int)lVar6 - (int)pbVar3;
    if (iVar9 < (int)uVar8) {
LAB_00671c40:
      do {
        pbVar4 = (byte *)FUN_00671e00(pbVar3,lVar6,param_3);
        if (pbVar4 == (byte *)0x0) goto LAB_00671d04;
        puVar7 = (undefined8 *)param_1[1];
        iVar10 = (int)pbVar4 - (int)puVar7;
        if ((int)(uVar8 - iVar9) < 0x11) {
          local_58 = 0;
          local_60 = 0;
          lVar6 = (long)&local_70 + (long)(int)(uVar8 - iVar9);
          uStack_68 = puVar7[1];
          local_70 = *puVar7;
          lVar5 = FUN_00671e00((long)&local_70 + (long)iVar10,lVar6,param_3);
          pbVar4 = (byte *)(param_1[1] + (lVar5 - (long)&local_70));
          if (lVar5 != lVar6) {
            pbVar4 = (byte *)0x0;
          }
          goto LAB_00671d04;
        }
        if (*(int *)((long)param_1 + 0x1c) < 0x11) goto LAB_00671df8;
        lVar5 = FUN_0066f164(param_1,0,0xffffffff);
        lVar6 = param_1[1];
        if (lVar5 == 0) {
          *param_1 = lVar6;
          *(undefined4 *)(param_1 + 10) = 1;
          pbVar4 = (byte *)0x0;
          goto LAB_00671d04;
        }
        pbVar3 = (byte *)(lVar5 + iVar10);
        uVar1 = *(int *)((long)param_1 + 0x1c) + ((int)lVar5 - (int)lVar6);
        uVar8 = (uVar8 - iVar9) - iVar10;
        iVar9 = (int)lVar6 - (int)pbVar3;
        *(uint *)((long)param_1 + 0x1c) = uVar1;
        *param_1 = lVar6 + (int)(uVar1 & (int)uVar1 >> 0x1f);
      } while (iVar9 < (int)uVar8);
    }
  }
LAB_00671cec:
  pbVar4 = (byte *)FUN_00671e00(pbVar3,pbVar3 + (int)uVar8,param_3);
  if (pbVar3 + (int)uVar8 != pbVar4) {
    pbVar4 = (byte *)0x0;
  }
LAB_00671d04:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pbVar4);
  }
  return;
}


// ===== 00671e00  FUN_00671e00 =====

byte * FUN_00671e00(byte *param_1,byte *param_2,uint *param_3)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  byte *pbVar6;
  ulong uVar7;
  
  pbVar6 = param_1;
  if (param_1 < param_2) {
    do {
      while (bVar2 = *pbVar6, (char)bVar2 < '\0') {
        param_1 = pbVar6 + 2;
        uVar4 = (int)(char)bVar2 & 0x7fU | (uint)pbVar6[1] << 7;
        if ((char)pbVar6[1] < '\0') {
          uVar4 = (uVar4 + (uint)*param_1 * 0x4000) - 0x4000;
          if ((char)*param_1 < '\0') {
            uVar4 = (uVar4 + (uint)pbVar6[3] * 0x200000) - 0x200000;
            if ((char)pbVar6[3] < '\0') {
              iVar3 = uVar4 + (uint)pbVar6[4] * 0x10000000;
              uVar4 = iVar3 + 0xf0000000;
              if ((char)pbVar6[4] < '\0') {
                if ((char)pbVar6[5] < '\0') {
                  if ((char)pbVar6[6] < '\0') {
                    if ((char)pbVar6[7] < '\0') {
                      uVar4 = iVar3 + 0xf0000000;
                      if ((char)pbVar6[8] < '\0') {
                        if ((char)pbVar6[9] < '\0') {
                          return (byte *)0x0;
                        }
                        lVar5 = 9;
                      }
                      else {
                        lVar5 = 8;
                      }
                    }
                    else {
                      uVar4 = iVar3 + 0xf0000000;
                      lVar5 = 7;
                    }
                  }
                  else {
                    uVar4 = iVar3 + 0xf0000000;
                    lVar5 = 6;
                  }
                }
                else {
                  uVar4 = iVar3 + 0xf0000000;
                  lVar5 = 5;
                }
              }
              else {
                lVar5 = 4;
              }
            }
            else {
              lVar5 = 3;
            }
          }
          else {
            lVar5 = 2;
          }
          param_1 = pbVar6 + lVar5 + 1;
          uVar7 = (ulong)*param_3;
          uVar4 = -(uVar4 & 1) ^ uVar4 >> 1;
          if (*param_3 == param_3[1]) goto LAB_00671efc;
          goto LAB_00671e50;
        }
        uVar7 = (ulong)*param_3;
        uVar4 = -((int)(char)bVar2 & 1U) ^ uVar4 >> 1;
        if (*param_3 != param_3[1]) goto LAB_00671e50;
LAB_00671efc:
        uVar1 = (int)uVar7 + 1;
        FUN_00673968(param_3,uVar1);
        *(uint *)(*(long *)(param_3 + 2) + uVar7 * 4) = uVar4;
        *param_3 = uVar1;
        pbVar6 = param_1;
        if (param_2 <= param_1) {
          return param_1;
        }
      }
      param_1 = pbVar6 + 1;
      uVar7 = (ulong)*param_3;
      uVar4 = -((int)(char)bVar2 & 1U) ^ (uint)(int)(char)bVar2 >> 1;
      if (*param_3 == param_3[1]) goto LAB_00671efc;
LAB_00671e50:
      *(uint *)(*(long *)(param_3 + 2) + uVar7 * 4) = uVar4;
      *param_3 = (int)uVar7 + 1;
      pbVar6 = param_1;
    } while (param_1 < param_2);
  }
  return param_1;
}


// ===== 00671fe4  FUN_00671fe4 =====

void FUN_00671fe4(long *param_1,byte *param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined2 local_58;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pbVar3 = param_2 + 1;
  uVar8 = (uint)*param_2;
  if ((char)*param_2 < '\0') {
    uVar8 = (uVar8 + (uint)*pbVar3 * 0x80) - 0x80;
    if ((char)*pbVar3 < '\0') {
      uVar8 = (uVar8 + (uint)param_2[2] * 0x4000) - 0x4000;
      if ((char)param_2[2] < '\0') {
        uVar8 = (uVar8 + (uint)param_2[3] * 0x200000) - 0x200000;
        if ((char)param_2[3] < '\0') {
          if ((7 < param_2[4]) ||
             (uVar8 = uVar8 + (uint)param_2[4] * 0x10000000 + 0xf0000000, 0x7fffffef < uVar8)) {
LAB_006721e8:
            pbVar4 = (byte *)0x0;
            goto LAB_006720f4;
          }
          pbVar3 = param_2 + 5;
          lVar6 = param_1[1];
          iVar9 = (int)lVar6 - (int)pbVar3;
          if (iVar9 < (int)uVar8) goto LAB_00672030;
          goto LAB_006720dc;
        }
        lVar6 = 3;
      }
      else {
        lVar6 = 2;
      }
    }
    else {
      lVar6 = 1;
    }
    pbVar3 = param_2 + lVar6 + 1;
    lVar6 = param_1[1];
    iVar9 = (int)lVar6 - (int)pbVar3;
    if (iVar9 < (int)uVar8) goto LAB_00672030;
  }
  else {
    lVar6 = param_1[1];
    iVar9 = (int)lVar6 - (int)pbVar3;
    if (iVar9 < (int)uVar8) {
LAB_00672030:
      do {
        pbVar4 = (byte *)FUN_006721f0(pbVar3,lVar6,param_3);
        if (pbVar4 == (byte *)0x0) goto LAB_006720f4;
        puVar7 = (undefined8 *)param_1[1];
        iVar10 = (int)pbVar4 - (int)puVar7;
        if ((int)(uVar8 - iVar9) < 0x11) {
          local_58 = 0;
          local_60 = 0;
          lVar6 = (long)&local_70 + (long)(int)(uVar8 - iVar9);
          uStack_68 = puVar7[1];
          local_70 = *puVar7;
          lVar5 = FUN_006721f0((long)&local_70 + (long)iVar10,lVar6,param_3);
          pbVar4 = (byte *)(param_1[1] + (lVar5 - (long)&local_70));
          if (lVar5 != lVar6) {
            pbVar4 = (byte *)0x0;
          }
          goto LAB_006720f4;
        }
        if (*(int *)((long)param_1 + 0x1c) < 0x11) goto LAB_006721e8;
        lVar5 = FUN_0066f164(param_1,0,0xffffffff);
        lVar6 = param_1[1];
        if (lVar5 == 0) {
          *param_1 = lVar6;
          *(undefined4 *)(param_1 + 10) = 1;
          pbVar4 = (byte *)0x0;
          goto LAB_006720f4;
        }
        pbVar3 = (byte *)(lVar5 + iVar10);
        uVar1 = *(int *)((long)param_1 + 0x1c) + ((int)lVar5 - (int)lVar6);
        uVar8 = (uVar8 - iVar9) - iVar10;
        iVar9 = (int)lVar6 - (int)pbVar3;
        *(uint *)((long)param_1 + 0x1c) = uVar1;
        *param_1 = lVar6 + (int)(uVar1 & (int)uVar1 >> 0x1f);
      } while (iVar9 < (int)uVar8);
    }
  }
LAB_006720dc:
  pbVar4 = (byte *)FUN_006721f0(pbVar3,pbVar3 + (int)uVar8,param_3);
  if (pbVar3 + (int)uVar8 != pbVar4) {
    pbVar4 = (byte *)0x0;
  }
LAB_006720f4:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pbVar4);
  }
  return;
}


// ===== 006721f0  FUN_006721f0 =====

byte * FUN_006721f0(byte *param_1,byte *param_2,uint *param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  byte *pbVar5;
  ulong uVar6;
  
  pbVar5 = param_1;
  if (param_1 < param_2) {
    do {
      while (uVar3 = (ulong)(char)*pbVar5, (long)uVar3 < 0) {
        param_1 = pbVar5 + 2;
        uVar2 = uVar3 & 0x7f | (ulong)pbVar5[1] << 7;
        if ((char)pbVar5[1] < '\0') {
          uVar3 = (uVar2 + (ulong)*param_1 * 0x4000) - 0x4000;
          if ((char)*param_1 < '\0') {
            uVar3 = (uVar3 + (ulong)pbVar5[3] * 0x200000) - 0x200000;
            if ((char)pbVar5[3] < '\0') {
              uVar3 = (uVar3 + (ulong)pbVar5[4] * 0x10000000) - 0x10000000;
              if ((char)pbVar5[4] < '\0') {
                uVar3 = (uVar3 + ((ulong)pbVar5[5] << 0x23)) - 0x800000000;
                if ((char)pbVar5[5] < '\0') {
                  uVar3 = (uVar3 + ((ulong)pbVar5[6] << 0x2a)) - 0x40000000000;
                  if ((char)pbVar5[6] < '\0') {
                    uVar3 = uVar3 + ((ulong)pbVar5[7] << 0x31) + 0xfffe000000000000;
                    if ((char)pbVar5[7] < '\0') {
                      uVar3 = uVar3 + ((ulong)pbVar5[8] << 0x38) + 0xff00000000000000;
                      if ((char)pbVar5[8] < '\0') {
                        if ((char)pbVar5[9] < 0) {
                          return (byte *)0x0;
                        }
                        uVar3 = uVar3 + ((ulong)(uint)~(int)(char)pbVar5[9] << 0x3f);
                        lVar4 = 9;
                      }
                      else {
                        lVar4 = 8;
                      }
                    }
                    else {
                      lVar4 = 7;
                    }
                  }
                  else {
                    lVar4 = 6;
                  }
                }
                else {
                  lVar4 = 5;
                }
              }
              else {
                lVar4 = 4;
              }
            }
            else {
              lVar4 = 3;
            }
          }
          else {
            lVar4 = 2;
          }
          param_1 = pbVar5 + lVar4 + 1;
          uVar6 = (ulong)*param_3;
          uVar3 = -(uVar3 & 1) ^ uVar3 >> 1;
          if (*param_3 != param_3[1]) goto LAB_00672234;
          goto LAB_006722e0;
        }
        uVar6 = (ulong)*param_3;
        uVar3 = -(uVar3 & 1) ^ uVar2 >> 1;
        if (*param_3 == param_3[1]) goto LAB_006722e0;
LAB_00672234:
        *(ulong *)(*(long *)(param_3 + 2) + uVar6 * 8) = uVar3;
        *param_3 = (int)uVar6 + 1;
        pbVar5 = param_1;
        if (param_2 <= param_1) {
          return param_1;
        }
      }
      param_1 = pbVar5 + 1;
      uVar6 = (ulong)*param_3;
      uVar3 = -(uVar3 & 1) ^ uVar3 >> 1;
      if (*param_3 != param_3[1]) goto LAB_00672234;
LAB_006722e0:
      uVar1 = (int)uVar6 + 1;
      FUN_006741e8(param_3,uVar1);
      *(ulong *)(*(long *)(param_3 + 2) + uVar6 * 8) = uVar3;
      *param_3 = uVar1;
      pbVar5 = param_1;
    } while (param_1 < param_2);
  }
  return param_1;
}


// ===== 006723ec  FUN_006723ec =====

void FUN_006723ec(long *param_1,byte *param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined2 local_58;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pbVar3 = param_2 + 1;
  uVar8 = (uint)*param_2;
  if ((char)*param_2 < '\0') {
    uVar8 = (uVar8 + (uint)*pbVar3 * 0x80) - 0x80;
    if ((char)*pbVar3 < '\0') {
      uVar8 = (uVar8 + (uint)param_2[2] * 0x4000) - 0x4000;
      if ((char)param_2[2] < '\0') {
        uVar8 = (uVar8 + (uint)param_2[3] * 0x200000) - 0x200000;
        if ((char)param_2[3] < '\0') {
          if ((7 < param_2[4]) ||
             (uVar8 = uVar8 + (uint)param_2[4] * 0x10000000 + 0xf0000000, 0x7fffffef < uVar8)) {
LAB_006725f0:
            pbVar4 = (byte *)0x0;
            goto LAB_006724fc;
          }
          pbVar3 = param_2 + 5;
          lVar6 = param_1[1];
          iVar9 = (int)lVar6 - (int)pbVar3;
          if (iVar9 < (int)uVar8) goto LAB_00672438;
          goto LAB_006724e4;
        }
        lVar6 = 3;
      }
      else {
        lVar6 = 2;
      }
    }
    else {
      lVar6 = 1;
    }
    pbVar3 = param_2 + lVar6 + 1;
    lVar6 = param_1[1];
    iVar9 = (int)lVar6 - (int)pbVar3;
    if (iVar9 < (int)uVar8) goto LAB_00672438;
  }
  else {
    lVar6 = param_1[1];
    iVar9 = (int)lVar6 - (int)pbVar3;
    if (iVar9 < (int)uVar8) {
LAB_00672438:
      do {
        pbVar4 = (byte *)FUN_006725f8(pbVar3,lVar6,param_3);
        if (pbVar4 == (byte *)0x0) goto LAB_006724fc;
        puVar7 = (undefined8 *)param_1[1];
        iVar10 = (int)pbVar4 - (int)puVar7;
        if ((int)(uVar8 - iVar9) < 0x11) {
          local_58 = 0;
          local_60 = 0;
          lVar6 = (long)&local_70 + (long)(int)(uVar8 - iVar9);
          uStack_68 = puVar7[1];
          local_70 = *puVar7;
          lVar5 = FUN_006725f8((long)&local_70 + (long)iVar10,lVar6,param_3);
          pbVar4 = (byte *)(param_1[1] + (lVar5 - (long)&local_70));
          if (lVar5 != lVar6) {
            pbVar4 = (byte *)0x0;
          }
          goto LAB_006724fc;
        }
        if (*(int *)((long)param_1 + 0x1c) < 0x11) goto LAB_006725f0;
        lVar5 = FUN_0066f164(param_1,0,0xffffffff);
        lVar6 = param_1[1];
        if (lVar5 == 0) {
          *param_1 = lVar6;
          *(undefined4 *)(param_1 + 10) = 1;
          pbVar4 = (byte *)0x0;
          goto LAB_006724fc;
        }
        pbVar3 = (byte *)(lVar5 + iVar10);
        uVar1 = *(int *)((long)param_1 + 0x1c) + ((int)lVar5 - (int)lVar6);
        uVar8 = (uVar8 - iVar9) - iVar10;
        iVar9 = (int)lVar6 - (int)pbVar3;
        *(uint *)((long)param_1 + 0x1c) = uVar1;
        *param_1 = lVar6 + (int)(uVar1 & (int)uVar1 >> 0x1f);
      } while (iVar9 < (int)uVar8);
    }
  }
LAB_006724e4:
  pbVar4 = (byte *)FUN_006725f8(pbVar3,pbVar3 + (int)uVar8,param_3);
  if (pbVar3 + (int)uVar8 != pbVar4) {
    pbVar4 = (byte *)0x0;
  }
LAB_006724fc:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pbVar4);
  }
  return;
}


// ===== 006725f8  FUN_006725f8 =====

byte * FUN_006725f8(byte *param_1,byte *param_2,uint *param_3)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  byte *pbVar6;
  ulong uVar7;
  
  pbVar6 = param_1;
  if (param_1 < param_2) {
    do {
      while (uVar3 = (ulong)(char)*pbVar6, (long)uVar3 < 0) {
        param_1 = pbVar6 + 2;
        uVar3 = uVar3 & 0x7f | (ulong)pbVar6[1] << 7;
        if ((char)pbVar6[1] < '\0') {
          lVar4 = uVar3 + (ulong)*param_1 * 0x4000 + -0x4000;
          if ((char)*param_1 < '\0') {
            lVar4 = lVar4 + (ulong)pbVar6[3] * 0x200000 + -0x200000;
            if ((char)pbVar6[3] < '\0') {
              lVar4 = lVar4 + (ulong)pbVar6[4] * 0x10000000 + -0x10000000;
              if ((char)pbVar6[4] < '\0') {
                lVar4 = lVar4 + ((ulong)pbVar6[5] << 0x23) + -0x800000000;
                if ((char)pbVar6[5] < '\0') {
                  lVar4 = lVar4 + ((ulong)pbVar6[6] << 0x2a) + -0x40000000000;
                  if ((char)pbVar6[6] < '\0') {
                    lVar4 = lVar4 + ((ulong)pbVar6[7] << 0x31) + -0x2000000000000;
                    if ((char)pbVar6[7] < '\0') {
                      lVar4 = lVar4 + ((ulong)pbVar6[8] << 0x38) + -0x100000000000000;
                      if ((char)pbVar6[8] < '\0') {
                        if ((char)pbVar6[9] < 0) {
                          return (byte *)0x0;
                        }
                        lVar4 = lVar4 + ((ulong)(uint)~(int)(char)pbVar6[9] << 0x3f);
                        lVar5 = 9;
                      }
                      else {
                        lVar5 = 8;
                      }
                    }
                    else {
                      lVar5 = 7;
                    }
                  }
                  else {
                    lVar5 = 6;
                  }
                }
                else {
                  lVar5 = 5;
                }
              }
              else {
                lVar5 = 4;
              }
            }
            else {
              lVar5 = 3;
            }
          }
          else {
            lVar5 = 2;
          }
          param_1 = pbVar6 + lVar5 + 1;
          uVar7 = (ulong)*param_3;
          bVar2 = lVar4 != 0;
          if (*param_3 != param_3[1]) goto LAB_0067263c;
          goto LAB_006726dc;
        }
        uVar7 = (ulong)*param_3;
        bVar2 = uVar3 != 0;
        if (*param_3 == param_3[1]) goto LAB_006726dc;
LAB_0067263c:
        *(bool *)(*(long *)(param_3 + 2) + uVar7) = bVar2;
        *param_3 = (int)uVar7 + 1;
        pbVar6 = param_1;
        if (param_2 <= param_1) {
          return param_1;
        }
      }
      param_1 = pbVar6 + 1;
      uVar7 = (ulong)*param_3;
      bVar2 = uVar3 != 0;
      if (*param_3 != param_3[1]) goto LAB_0067263c;
LAB_006726dc:
      uVar1 = (int)uVar7 + 1;
      FUN_0067353c(param_3,uVar1);
      *(bool *)(*(long *)(param_3 + 2) + uVar7) = bVar2;
      *param_3 = uVar1;
      pbVar6 = param_1;
    } while (param_1 < param_2);
  }
  return param_1;
}


// ===== 006727e8  FUN_006727e8 =====

long FUN_006727e8(long *param_1,void *param_2,uint param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  if (param_2 == (void *)0x0) {
    return 0;
  }
  uVar6 = (param_1[1] - (long)param_2) + 0x10;
  if ((int)uVar6 < (int)param_3) {
    do {
      iVar2 = (int)(uint)uVar6 >> 2;
      FUN_00673da8(param_4,*param_4 + iVar2);
      iVar3 = *param_4;
      uVar1 = (uint)uVar6 & 0xfffffffc;
      *param_4 = iVar3 + iVar2;
      memcpy((void *)(*(long *)(param_4 + 2) + (long)iVar3 * 4),param_2,(long)(int)uVar1);
      if (*(int *)((long)param_1 + 0x1c) < 0x11) {
        return 0;
      }
      lVar4 = FUN_0066f164(param_1,0,0xffffffff);
      lVar5 = param_1[1];
      if (lVar4 == 0) {
        *param_1 = lVar5;
        *(undefined4 *)(param_1 + 10) = 1;
        return 0;
      }
      param_3 = param_3 - uVar1;
      uVar1 = *(int *)((long)param_1 + 0x1c) + ((int)lVar4 - (int)lVar5);
      param_2 = (void *)((lVar4 - (uVar6 & 3)) + 0x10);
      *(uint *)((long)param_1 + 0x1c) = uVar1;
      uVar6 = (lVar5 - (long)param_2) + 0x10;
      *param_1 = lVar5 + (int)(uVar1 & (int)uVar1 >> 0x1f);
    } while ((int)uVar6 < (int)param_3);
  }
  FUN_00673da8(param_4,*param_4 + ((int)param_3 >> 2));
  iVar2 = *param_4;
  uVar1 = param_3 & 0xfffffffc;
  *param_4 = iVar2 + ((int)param_3 >> 2);
  memcpy((void *)(*(long *)(param_4 + 2) + (long)iVar2 * 4),param_2,(long)(int)uVar1);
  lVar4 = (long)param_2 + (long)(int)uVar1;
  if (param_3 != uVar1) {
    lVar4 = 0;
  }
  return lVar4;
}


// ===== 00672968  FUN_00672968 =====

long FUN_00672968(long *param_1,void *param_2,uint param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  if (param_2 == (void *)0x0) {
    return 0;
  }
  uVar6 = (param_1[1] - (long)param_2) + 0x10;
  if ((int)uVar6 < (int)param_3) {
    do {
      iVar2 = (int)(uint)uVar6 >> 2;
      FUN_00673968(param_4,*param_4 + iVar2);
      iVar3 = *param_4;
      uVar1 = (uint)uVar6 & 0xfffffffc;
      *param_4 = iVar3 + iVar2;
      memcpy((void *)(*(long *)(param_4 + 2) + (long)iVar3 * 4),param_2,(long)(int)uVar1);
      if (*(int *)((long)param_1 + 0x1c) < 0x11) {
        return 0;
      }
      lVar4 = FUN_0066f164(param_1,0,0xffffffff);
      lVar5 = param_1[1];
      if (lVar4 == 0) {
        *param_1 = lVar5;
        *(undefined4 *)(param_1 + 10) = 1;
        return 0;
      }
      param_3 = param_3 - uVar1;
      uVar1 = *(int *)((long)param_1 + 0x1c) + ((int)lVar4 - (int)lVar5);
      param_2 = (void *)((lVar4 - (uVar6 & 3)) + 0x10);
      *(uint *)((long)param_1 + 0x1c) = uVar1;
      uVar6 = (lVar5 - (long)param_2) + 0x10;
      *param_1 = lVar5 + (int)(uVar1 & (int)uVar1 >> 0x1f);
    } while ((int)uVar6 < (int)param_3);
  }
  FUN_00673968(param_4,*param_4 + ((int)param_3 >> 2));
  iVar2 = *param_4;
  uVar1 = param_3 & 0xfffffffc;
  *param_4 = iVar2 + ((int)param_3 >> 2);
  memcpy((void *)(*(long *)(param_4 + 2) + (long)iVar2 * 4),param_2,(long)(int)uVar1);
  lVar4 = (long)param_2 + (long)(int)uVar1;
  if (param_3 != uVar1) {
    lVar4 = 0;
  }
  return lVar4;
}


// ===== 00672ae8  FUN_00672ae8 =====

long FUN_00672ae8(long *param_1,void *param_2,uint param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  if (param_2 == (void *)0x0) {
    return 0;
  }
  uVar6 = (param_1[1] - (long)param_2) + 0x10;
  if ((int)uVar6 < (int)param_3) {
    do {
      iVar2 = (int)(uint)uVar6 >> 3;
      FUN_0067462c(param_4,*param_4 + iVar2);
      iVar3 = *param_4;
      uVar1 = (uint)uVar6 & 0xfffffff8;
      *param_4 = iVar3 + iVar2;
      memcpy((void *)(*(long *)(param_4 + 2) + (long)iVar3 * 8),param_2,(long)(int)uVar1);
      if (*(int *)((long)param_1 + 0x1c) < 0x11) {
        return 0;
      }
      lVar4 = FUN_0066f164(param_1,0,0xffffffff);
      lVar5 = param_1[1];
      if (lVar4 == 0) {
        *param_1 = lVar5;
        *(undefined4 *)(param_1 + 10) = 1;
        return 0;
      }
      param_3 = param_3 - uVar1;
      uVar1 = *(int *)((long)param_1 + 0x1c) + ((int)lVar4 - (int)lVar5);
      param_2 = (void *)((lVar4 - (uVar6 & 7)) + 0x10);
      *(uint *)((long)param_1 + 0x1c) = uVar1;
      uVar6 = (lVar5 - (long)param_2) + 0x10;
      *param_1 = lVar5 + (int)(uVar1 & (int)uVar1 >> 0x1f);
    } while ((int)uVar6 < (int)param_3);
  }
  FUN_0067462c(param_4,*param_4 + ((int)param_3 >> 3));
  iVar2 = *param_4;
  uVar1 = param_3 & 0xfffffff8;
  *param_4 = iVar2 + ((int)param_3 >> 3);
  memcpy((void *)(*(long *)(param_4 + 2) + (long)iVar2 * 8),param_2,(long)(int)uVar1);
  lVar4 = (long)param_2 + (long)(int)uVar1;
  if (param_3 != uVar1) {
    lVar4 = 0;
  }
  return lVar4;
}


// ===== 00672c68  FUN_00672c68 =====

long FUN_00672c68(long *param_1,void *param_2,uint param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  if (param_2 == (void *)0x0) {
    return 0;
  }
  uVar6 = (param_1[1] - (long)param_2) + 0x10;
  if ((int)uVar6 < (int)param_3) {
    do {
      iVar2 = (int)(uint)uVar6 >> 3;
      FUN_006741e8(param_4,*param_4 + iVar2);
      iVar3 = *param_4;
      uVar1 = (uint)uVar6 & 0xfffffff8;
      *param_4 = iVar3 + iVar2;
      memcpy((void *)(*(long *)(param_4 + 2) + (long)iVar3 * 8),param_2,(long)(int)uVar1);
      if (*(int *)((long)param_1 + 0x1c) < 0x11) {
        return 0;
      }
      lVar4 = FUN_0066f164(param_1,0,0xffffffff);
      lVar5 = param_1[1];
      if (lVar4 == 0) {
        *param_1 = lVar5;
        *(undefined4 *)(param_1 + 10) = 1;
        return 0;
      }
      param_3 = param_3 - uVar1;
      uVar1 = *(int *)((long)param_1 + 0x1c) + ((int)lVar4 - (int)lVar5);
      param_2 = (void *)((lVar4 - (uVar6 & 7)) + 0x10);
      *(uint *)((long)param_1 + 0x1c) = uVar1;
      uVar6 = (lVar5 - (long)param_2) + 0x10;
      *param_1 = lVar5 + (int)(uVar1 & (int)uVar1 >> 0x1f);
    } while ((int)uVar6 < (int)param_3);
  }
  FUN_006741e8(param_4,*param_4 + ((int)param_3 >> 3));
  iVar2 = *param_4;
  uVar1 = param_3 & 0xfffffff8;
  *param_4 = iVar2 + ((int)param_3 >> 3);
  memcpy((void *)(*(long *)(param_4 + 2) + (long)iVar2 * 8),param_2,(long)(int)uVar1);
  lVar4 = (long)param_2 + (long)(int)uVar1;
  if (param_3 != uVar1) {
    lVar4 = 0;
  }
  return lVar4;
}


// ===== 00672de8  FUN_00672de8 =====

long FUN_00672de8(long *param_1,void *param_2,uint param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  if (param_2 == (void *)0x0) {
    return 0;
  }
  uVar6 = (param_1[1] - (long)param_2) + 0x10;
  if ((int)uVar6 < (int)param_3) {
    do {
      iVar2 = (int)(uint)uVar6 >> 2;
      FUN_00674a70(param_4,*param_4 + iVar2);
      iVar3 = *param_4;
      uVar1 = (uint)uVar6 & 0xfffffffc;
      *param_4 = iVar3 + iVar2;
      memcpy((void *)(*(long *)(param_4 + 2) + (long)iVar3 * 4),param_2,(long)(int)uVar1);
      if (*(int *)((long)param_1 + 0x1c) < 0x11) {
        return 0;
      }
      lVar4 = FUN_0066f164(param_1,0,0xffffffff);
      lVar5 = param_1[1];
      if (lVar4 == 0) {
        *param_1 = lVar5;
        *(undefined4 *)(param_1 + 10) = 1;
        return 0;
      }
      param_3 = param_3 - uVar1;
      uVar1 = *(int *)((long)param_1 + 0x1c) + ((int)lVar4 - (int)lVar5);
      param_2 = (void *)((lVar4 - (uVar6 & 3)) + 0x10);
      *(uint *)((long)param_1 + 0x1c) = uVar1;
      uVar6 = (lVar5 - (long)param_2) + 0x10;
      *param_1 = lVar5 + (int)(uVar1 & (int)uVar1 >> 0x1f);
    } while ((int)uVar6 < (int)param_3);
  }
  FUN_00674a70(param_4,*param_4 + ((int)param_3 >> 2));
  iVar2 = *param_4;
  uVar1 = param_3 & 0xfffffffc;
  *param_4 = iVar2 + ((int)param_3 >> 2);
  memcpy((void *)(*(long *)(param_4 + 2) + (long)iVar2 * 4),param_2,(long)(int)uVar1);
  lVar4 = (long)param_2 + (long)(int)uVar1;
  if (param_3 != uVar1) {
    lVar4 = 0;
  }
  return lVar4;
}


// ===== 00672f68  FUN_00672f68 =====

long FUN_00672f68(long *param_1,void *param_2,uint param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  if (param_2 == (void *)0x0) {
    return 0;
  }
  uVar6 = (param_1[1] - (long)param_2) + 0x10;
  if ((int)uVar6 < (int)param_3) {
    do {
      iVar2 = (int)(uint)uVar6 >> 3;
      FUN_00674eb0(param_4,*param_4 + iVar2);
      iVar3 = *param_4;
      uVar1 = (uint)uVar6 & 0xfffffff8;
      *param_4 = iVar3 + iVar2;
      memcpy((void *)(*(long *)(param_4 + 2) + (long)iVar3 * 8),param_2,(long)(int)uVar1);
      if (*(int *)((long)param_1 + 0x1c) < 0x11) {
        return 0;
      }
      lVar4 = FUN_0066f164(param_1,0,0xffffffff);
      lVar5 = param_1[1];
      if (lVar4 == 0) {
        *param_1 = lVar5;
        *(undefined4 *)(param_1 + 10) = 1;
        return 0;
      }
      param_3 = param_3 - uVar1;
      uVar1 = *(int *)((long)param_1 + 0x1c) + ((int)lVar4 - (int)lVar5);
      param_2 = (void *)((lVar4 - (uVar6 & 7)) + 0x10);
      *(uint *)((long)param_1 + 0x1c) = uVar1;
      uVar6 = (lVar5 - (long)param_2) + 0x10;
      *param_1 = lVar5 + (int)(uVar1 & (int)uVar1 >> 0x1f);
    } while ((int)uVar6 < (int)param_3);
  }
  FUN_00674eb0(param_4,*param_4 + ((int)param_3 >> 3));
  iVar2 = *param_4;
  uVar1 = param_3 & 0xfffffff8;
  *param_4 = iVar2 + ((int)param_3 >> 3);
  memcpy((void *)(*(long *)(param_4 + 2) + (long)iVar2 * 8),param_2,(long)(int)uVar1);
  lVar4 = (long)param_2 + (long)(int)uVar1;
  if (param_3 != uVar1) {
    lVar4 = 0;
  }
  return lVar4;
}


// ===== 006730e8  FUN_006730e8 =====

byte * FUN_006730e8(long *param_1,int param_2,byte *param_3,long *param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  byte *pbVar8;
  long lVar9;
  ulong uVar10;
  
  pbVar8 = param_3 + 1;
  uVar7 = (uint)*param_3;
  if ((char)*param_3 < '\0') {
    uVar7 = (uVar7 + (uint)*pbVar8 * 0x80) - 0x80;
    if ((char)*pbVar8 < '\0') {
      uVar7 = (uVar7 + (uint)param_3[2] * 0x4000) - 0x4000;
      if ((char)param_3[2] < '\0') {
        uVar7 = (uVar7 + (uint)param_3[3] * 0x200000) - 0x200000;
        if ((char)param_3[3] < '\0') {
          if (7 < param_3[4]) {
            return (byte *)0x0;
          }
          uVar7 = uVar7 + (uint)param_3[4] * 0x10000000 + 0xf0000000;
          if (0x7fffffef < uVar7) {
            return (byte *)0x0;
          }
          pbVar8 = param_3 + 5;
          lVar9 = *param_1;
          goto joined_r0x00673368;
        }
        lVar9 = 3;
      }
      else {
        lVar9 = 2;
      }
    }
    else {
      lVar9 = 1;
    }
    pbVar8 = param_3 + lVar9 + 1;
    lVar9 = *param_1;
  }
  else {
    lVar9 = *param_1;
  }
joined_r0x00673368:
  if (lVar9 == 0) {
    uVar3 = (param_4[1] - (long)pbVar8) + 0x10;
    if ((long)(int)uVar7 <= (long)uVar3) {
      return pbVar8 + (int)uVar7;
    }
    do {
      if ((param_4[2] == 0) || (*(int *)((long)param_4 + 0x1c) < 0x11)) {
        return (byte *)0x0;
      }
      lVar9 = FUN_0066f164(param_4,0,0xffffffff);
      lVar5 = param_4[1];
      if (lVar9 == 0) {
        *param_4 = lVar5;
        *(undefined4 *)(param_4 + 10) = 1;
        return (byte *)0x0;
      }
      uVar7 = uVar7 - (int)uVar3;
      uVar1 = *(int *)((long)param_4 + 0x1c) + ((int)lVar9 - (int)lVar5);
      *(uint *)((long)param_4 + 0x1c) = uVar1;
      uVar2 = ((int)lVar5 - (int)(lVar9 + 0x10)) + 0x10;
      uVar3 = (ulong)uVar2;
      *param_4 = lVar5 + (int)(uVar1 & (int)uVar1 >> 0x1f);
    } while ((int)uVar2 < (int)uVar7);
    return (byte *)(lVar9 + 0x10 + (long)(int)uVar7);
  }
  uVar2 = param_2 << 3 | 2;
  uVar10 = (ulong)uVar2;
  uVar3 = uVar10;
  if (0x7f < uVar2) {
    do {
      FUN_007132e8(lVar9,(uint)uVar3 | 0xffffff80);
      uVar10 = uVar3 >> 7;
      uVar4 = uVar3 >> 0xe;
      uVar3 = uVar10;
    } while (uVar4 != 0);
  }
  FUN_007132e8(lVar9,uVar10);
  uVar4 = (ulong)(int)uVar7;
  lVar9 = *param_1;
  uVar3 = uVar4;
  uVar10 = uVar4;
  if (0x7f < uVar7) {
    do {
      FUN_007132e8(lVar9,(uint)uVar10 | 0xffffff80);
      uVar3 = uVar10 >> 7;
      uVar6 = uVar10 >> 0xe;
      uVar10 = uVar3;
    } while (uVar6 != 0);
  }
  FUN_007132e8(lVar9,uVar3);
  if ((long)uVar4 <= (param_4[1] - (long)pbVar8) + 0x10) {
    FUN_0071302c(*param_1,pbVar8,uVar4);
    return pbVar8 + uVar4;
  }
  pbVar8 = (byte *)FUN_0066f824(param_4,pbVar8,uVar7);
  return pbVar8;
}


// ===== 0067338c  FUN_0067338c =====

long FUN_0067338c(long *param_1,int param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  
  lVar8 = *param_1;
  uVar3 = param_2 << 3;
  if (lVar8 != 0) {
    uVar9 = (ulong)(uVar3 | 3);
    uVar7 = uVar9;
    if (0x7f < (uVar3 | 3)) {
      do {
        FUN_007132e8(lVar8,(uint)uVar7 | 0xffffff80);
        uVar9 = uVar7 >> 7;
        uVar5 = uVar7 >> 0xe;
        uVar7 = uVar9;
      } while (uVar5 != 0);
    }
    FUN_007132e8(lVar8,uVar9);
  }
  iVar1 = *(int *)(param_4 + 0x58);
  *(int *)(param_4 + 0x58) = iVar1 + -1;
  if (0 < iVar1) {
    *(int *)(param_4 + 0x5c) = *(int *)(param_4 + 0x5c) + 1;
    lVar8 = FUN_00670718(param_1,param_3,param_4);
    uVar4 = DAT_001b7178;
    uVar2 = *(uint *)(param_4 + 0x50);
    *(undefined4 *)(param_4 + 0x50) = 0;
    *(ulong *)(param_4 + 0x58) =
         CONCAT44((int)((ulong)*(undefined8 *)(param_4 + 0x58) >> 0x20) +
                  (int)((ulong)uVar4 >> 0x20),(int)*(undefined8 *)(param_4 + 0x58) + (int)uVar4);
    if ((lVar8 != 0) && (uVar2 == (uVar3 | 3))) {
      lVar6 = *param_1;
      if (lVar6 == 0) {
        return lVar8;
      }
      uVar9 = (ulong)(uVar3 | 4);
      uVar7 = uVar9;
      if (0x7f < (uVar3 | 4)) {
        do {
          FUN_007132e8(lVar6,(uint)uVar7 | 0xffffff80);
          uVar9 = uVar7 >> 7;
          uVar5 = uVar7 >> 0xe;
          uVar7 = uVar9;
        } while (uVar5 != 0);
      }
      FUN_007132e8(lVar6,uVar9);
      return lVar8;
    }
  }
  return 0;
}


