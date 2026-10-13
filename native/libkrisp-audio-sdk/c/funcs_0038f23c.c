// ===== 0038f23c  FUN_0038f23c =====

undefined ** FUN_0038f23c(void)

{
  return &PTR_DAT_007656b8;
}


// ===== 0038f248  FUN_0038f248 =====

uint FUN_0038f248(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_1 >> 0x20;
  uVar3 = uVar5;
  if (uVar5 == 0) {
    uVar3 = param_1;
  }
  uVar6 = uVar3 >> 0x10;
  uVar1 = uVar6;
  if (uVar6 == 0) {
    uVar1 = uVar3;
  }
  uVar3 = uVar1 >> 8;
  if (uVar1 < 0x100) {
    uVar3 = uVar1;
  }
  uVar2 = uVar3 >> 4;
  if (uVar3 < 0x10) {
    uVar2 = uVar3;
  }
  uVar4 = (uint)(param_1 != 0) | (uint)(uVar5 != 0) << 5 | (uint)(uVar6 != 0) << 4 |
          (uint)(0xff < uVar1) << 3 | (uint)(0xf < uVar3) << 2 | (uint)(3 < uVar2) << 1;
  uVar3 = uVar2 >> 2;
  if (uVar2 < 4) {
    uVar3 = uVar2;
  }
  if (1 < uVar3) {
    uVar4 = uVar4 + 1;
  }
  return uVar4;
}


// ===== 0038f2c0  FUN_0038f2c0 =====

uint FUN_0038f2c0(long *param_1)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  
  iVar2 = (int)param_1[1];
  uVar4 = iVar2 - 1;
  if ((*(byte *)((long)param_1 + 0x14) >> 2 & 1) != 0) {
    if (0 < (int)*(uint *)((long)param_1 + 0xc)) {
      uVar10 = 0;
      uVar12 = 0;
      uVar11 = 0;
      do {
        uVar13 = *(ulong *)(*param_1 + uVar10 * 8);
        uVar7 = uVar13 >> 0x20;
        uVar6 = uVar7;
        if (uVar7 == 0) {
          uVar6 = uVar13;
        }
        uVar5 = uVar6 >> 0x10;
        uVar8 = uVar5;
        if (uVar5 == 0) {
          uVar8 = uVar6;
        }
        uVar6 = uVar8 >> 8;
        if (uVar8 < 0x100) {
          uVar6 = uVar8;
        }
        uVar9 = (uint)uVar10;
        uVar10 = uVar10 + 1;
        uVar1 = uVar6 >> 4;
        if (uVar6 < 0x10) {
          uVar1 = uVar6;
        }
        uVar9 = (int)((uVar4 ^ uVar9) - 1 & -iVar2) >> 0x1f;
        uVar3 = (uint)(uVar13 != 0) | (uint)(uVar7 != 0) << 5 | (uint)(uVar5 != 0) << 4 |
                (uint)(0xff < uVar8) << 3 | (uint)(0xf < uVar6) << 2 | (uint)(3 < uVar1) << 1;
        uVar6 = uVar1 >> 2;
        if (uVar1 < 4) {
          uVar6 = uVar1;
        }
        uVar12 = uVar9 | uVar12;
        if (1 < uVar6) {
          uVar3 = uVar3 + 1;
        }
        uVar11 = ((uVar12 ^ 0xffffffff) & 0x40) + uVar11 + (uVar3 & uVar9);
      } while (*(uint *)((long)param_1 + 0xc) != uVar10);
      uVar4 = 0;
      if (iVar2 != 0) {
        uVar4 = uVar11;
      }
      return uVar4;
    }
    return 0;
  }
  if (iVar2 != 0) {
    uVar6 = *(ulong *)(*param_1 + (long)(int)uVar4 * 8);
    uVar7 = uVar6 >> 0x20;
    uVar10 = uVar7;
    if (uVar7 == 0) {
      uVar10 = uVar6;
    }
    uVar8 = uVar10 >> 0x10;
    uVar13 = uVar8;
    if (uVar8 == 0) {
      uVar13 = uVar10;
    }
    uVar10 = uVar13 >> 8;
    if (uVar13 < 0x100) {
      uVar10 = uVar13;
    }
    uVar5 = uVar10 >> 4;
    if (uVar10 < 0x10) {
      uVar5 = uVar10;
    }
    uVar1 = uVar5 >> 2;
    if (uVar5 < 4) {
      uVar1 = uVar5;
    }
    uVar4 = (uint)(uVar6 != 0) | uVar4 * 0x40 | (uint)(uVar7 != 0) << 5 | (uint)(uVar8 != 0) << 4 |
            (uint)(0xff < uVar13) << 3 | (uint)(0xf < uVar10) << 2 | (uint)(3 < uVar5) << 1;
    if (1 < uVar1) {
      uVar4 = uVar4 + 1;
    }
    return uVar4;
  }
  return 0;
}


// ===== 0038f448  FUN_0038f448 =====

bool FUN_0038f448(long param_1)

{
  return *(int *)(param_1 + 8) == 0;
}


// ===== 0038f458  FUN_0038f458 =====

void FUN_0038f458(long *param_1)

{
  if (param_1 != (long *)0x0) {
    if ((*param_1 != 0) && ((*(uint *)((long)param_1 + 0x14) >> 1 & 1) == 0)) {
      if ((*(uint *)((long)param_1 + 0x14) >> 3 & 1) == 0) {
        FUN_003c893c();
      }
      else {
        FUN_003c9d0c(*param_1,(long)*(int *)((long)param_1 + 0xc) << 3,"crypto/bn/bn_lib.c",0xcd);
      }
    }
    if ((*(byte *)((long)param_1 + 0x14) & 1) != 0) {
      FUN_003c89b8(param_1,0x18);
      FUN_003c86b4(param_1,"crypto/bn/bn_lib.c",0xdd);
      return;
    }
  }
  return;
}


// ===== 0038f4e8  FUN_0038f4e8 =====

uint FUN_0038f4e8(long param_1,uint param_2)

{
  return *(uint *)(param_1 + 0x14) & param_2;
}


// ===== 0038f4f4  FUN_0038f4f4 =====

void FUN_0038f4f4(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    if ((*(uint *)((long)param_1 + 0x14) >> 1 & 1) == 0) {
      if ((*(uint *)((long)param_1 + 0x14) >> 3 & 1) == 0) {
        FUN_003c86b4(*param_1,"crypto/bn/bn_lib.c",0xd1);
      }
      else {
        FUN_003c9d0c(*param_1,(long)*(int *)((long)param_1 + 0xc) << 3,"crypto/bn/bn_lib.c",0xcd);
      }
    }
    if ((*(byte *)((long)param_1 + 0x14) & 1) != 0) {
      FUN_003c86b4(param_1,"crypto/bn/bn_lib.c",0xe8);
      return;
    }
  }
  return;
}


// ===== 0038f578  FUN_0038f578 =====

void FUN_0038f578(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ===== 0038f584  FUN_0038f584 =====

void FUN_0038f584(void)

{
  long lVar1;
  
  lVar1 = FUN_003c8474(0x18,"crypto/bn/bn_lib.c",0xf7);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x14) = 1;
  }
  return;
}


// ===== 0038f5b4  FUN_0038f5b4 =====

void FUN_0038f5b4(void)

{
  long lVar1;
  
  lVar1 = FUN_003c8474(0x18,"crypto/bn/bn_lib.c",0xf7);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x14) = 9;
  }
  return;
}


// ===== 0038f5e4  FUN_0038f5e4 =====

undefined8 * FUN_0038f5e4(undefined8 *param_1,uint param_2)

{
  ulong uVar1;
  void *__dest;
  undefined8 uVar2;
  void *__src;
  
  if ((int)param_2 <= *(int *)((long)param_1 + 0xc)) {
    return param_1;
  }
  if ((int)param_2 < 0x800000) {
    if ((*(uint *)((long)param_1 + 0x14) >> 1 & 1) == 0) {
      uVar1 = -(ulong)(param_2 >> 0x1f) & 0xfffffff800000000 | (ulong)param_2 << 3;
      if ((*(uint *)((long)param_1 + 0x14) >> 3 & 1) == 0) {
        __dest = (void *)FUN_003c8474(uVar1,"crypto/bn/bn_lib.c",0x117);
      }
      else {
        __dest = (void *)FUN_003c96b8(uVar1,"crypto/bn/bn_lib.c",0x115);
      }
      if (__dest == (void *)0x0) {
        return (undefined8 *)0x0;
      }
      __src = (void *)*param_1;
      if (0 < (int)*(uint *)(param_1 + 1)) {
        memcpy(__dest,__src,(ulong)*(uint *)(param_1 + 1) << 3);
      }
      if (__src != (void *)0x0) {
        if ((*(byte *)((long)param_1 + 0x14) >> 3 & 1) == 0) {
          FUN_003c893c();
        }
        else {
          FUN_003c9d0c(__src,(long)*(int *)((long)param_1 + 0xc) << 3,"crypto/bn/bn_lib.c",0xcd);
        }
      }
      *param_1 = __dest;
      *(uint *)((long)param_1 + 0xc) = param_2;
      return param_1;
    }
    FUN_00379868();
    FUN_0037995c("crypto/bn/bn_lib.c",0x111,"bn_expand_internal");
    uVar2 = 0x69;
  }
  else {
    FUN_00379868();
    FUN_0037995c("crypto/bn/bn_lib.c",0x10d,"bn_expand_internal");
    uVar2 = 0x72;
  }
  FUN_00379a5c(3,uVar2,0);
  return (undefined8 *)0x0;
}


// ===== 0038f720  FUN_0038f720 =====

undefined8 * FUN_0038f720(undefined8 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  int iVar8;
  
  puVar7 = param_1;
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = *(uint *)((long)param_1 + 0x14);
    puVar5 = (undefined8 *)FUN_003c8474(0x18,"crypto/bn/bn_lib.c",0xf7);
    puVar7 = puVar5;
    if (puVar5 != (undefined8 *)0x0) {
      bVar3 = *(byte *)((long)param_1 + 0x14);
      *(uint *)((long)puVar5 + 0x14) = uVar1 & 8 | 1;
      lVar6 = 8;
      if ((bVar3 & 4) != 0) {
        lVar6 = 0xc;
      }
      puVar7 = param_1;
      if (puVar5 != param_1) {
        iVar4 = *(int *)((long)param_1 + lVar6);
        if ((*(int *)((long)puVar5 + 0xc) < iVar4) &&
           (lVar6 = FUN_0038f5e4(puVar5,iVar4), lVar6 == 0)) {
          if ((*(uint *)((long)puVar5 + 0x14) >> 1 & 1) == 0) {
            if ((*(uint *)((long)puVar5 + 0x14) >> 3 & 1) == 0) {
              FUN_003c86b4(*puVar5,"crypto/bn/bn_lib.c",0xd1);
            }
            else {
              FUN_003c9d0c(*puVar5,(long)*(int *)((long)puVar5 + 0xc) << 3,"crypto/bn/bn_lib.c",0xcd
                          );
            }
          }
          if ((*(byte *)((long)puVar5 + 0x14) & 1) != 0) {
            FUN_003c86b4(puVar5,"crypto/bn/bn_lib.c",0xe8);
          }
          puVar7 = (undefined8 *)0x0;
        }
        else {
          iVar8 = *(int *)(param_1 + 1);
          if (0 < iVar8) {
            memcpy((void *)*puVar5,(void *)*param_1,(long)iVar4 << 3);
            iVar8 = *(int *)(param_1 + 1);
          }
          uVar2 = *(undefined4 *)(param_1 + 2);
          *(int *)(puVar5 + 1) = iVar8;
          *(undefined4 *)(puVar5 + 2) = uVar2;
          puVar7 = puVar5;
        }
      }
    }
  }
  return puVar7;
}


// ===== 0038f85c  FUN_0038f85c =====

undefined8 * FUN_0038f85c(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  lVar3 = 8;
  if ((*(byte *)((long)param_2 + 0x14) & 4) != 0) {
    lVar3 = 0xc;
  }
  if (param_1 != param_2) {
    iVar2 = *(int *)((long)param_2 + lVar3);
    if ((*(int *)((long)param_1 + 0xc) < iVar2) && (lVar3 = FUN_0038f5e4(param_1,iVar2), lVar3 == 0)
       ) {
      return (undefined8 *)0x0;
    }
    iVar4 = *(int *)(param_2 + 1);
    if (0 < iVar4) {
      memcpy((void *)*param_1,(void *)*param_2,(long)iVar2 << 3);
      iVar4 = *(int *)(param_2 + 1);
    }
    uVar1 = *(undefined4 *)(param_2 + 2);
    *(int *)(param_1 + 1) = iVar4;
    *(undefined4 *)(param_1 + 2) = uVar1;
    return param_1;
  }
  return param_2;
}


// ===== 0038f924  FUN_0038f924 =====

void FUN_0038f924(long param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) < param_2) {
    FUN_0038f5e4();
    return;
  }
  return;
}


// ===== 0038f938  FUN_0038f938 =====

void FUN_0038f938(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar4 = *param_2;
  uVar3 = *(uint *)((long)param_2 + 0x14);
  uVar6 = param_1[1];
  uVar5 = *param_1;
  uVar1 = *(undefined4 *)(param_1 + 2);
  uVar2 = *(uint *)((long)param_1 + 0x14);
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  *param_2 = uVar5;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  param_2[1] = uVar6;
  *(uint *)((long)param_1 + 0x14) = uVar3 & 0xe | uVar2 & 1;
  *(undefined4 *)(param_2 + 2) = uVar1;
  *(uint *)((long)param_2 + 0x14) = uVar2 & 0xe | uVar3 & 1;
  return;
}


// ===== 0038f984  FUN_0038f984 =====

void FUN_0038f984(long *param_1)

{
  if (param_1 != (long *)0x0) {
    if (*param_1 != 0) {
      FUN_003c89b8(*param_1,(long)*(int *)((long)param_1 + 0xc) << 3);
    }
    *(undefined4 *)(param_1 + 2) = 0;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}


// ===== 0038f9c0  FUN_0038f9c0 =====

undefined8 FUN_0038f9c0(undefined8 *param_1)

{
  if (1 < *(int *)(param_1 + 1)) {
    return 0xffffffffffffffff;
  }
  if (*(int *)(param_1 + 1) == 1) {
    return *(undefined8 *)*param_1;
  }
  return 0;
}


// ===== 0038f9ec  FUN_0038f9ec =====

long FUN_0038f9ec(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  if ((0 < *(int *)((long)param_1 + 0xc)) || (lVar1 = FUN_0038f5e4(param_1,1), lVar1 != 0)) {
    lVar1 = 1;
    *(undefined4 *)(param_1 + 2) = 0;
    *(long *)*param_1 = param_2;
    *(uint *)(param_1 + 1) = (uint)(param_2 != 0);
  }
  return lVar1;
}


// ===== 0038fa44  FUN_0038fa44 =====

void FUN_0038fa44(void)

{
  FUN_0038fa50();
  return;
}


// ===== 0038fa50  FUN_0038fa50 =====

long * FUN_0038fa50(byte *param_1,uint param_2,long *param_3,int param_4,int param_5)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  long *plVar16;
  byte *pbVar17;
  uint uVar18;
  uint uVar19;
  
  if (-1 < (int)param_2) {
    if (param_3 == (long *)0x0) {
      plVar16 = (long *)FUN_003c8474(0x18,"crypto/bn/bn_lib.c",0xf7);
      if (plVar16 == (long *)0x0) {
        return (long *)0x0;
      }
      *(undefined4 *)((long)plVar16 + 0x14) = 1;
      param_3 = plVar16;
    }
    else {
      plVar16 = (long *)0x0;
    }
    if (param_2 == 0) {
      if (*param_3 != 0) {
        FUN_003c89b8(*param_3,(long)*(int *)((long)param_3 + 0xc) << 3);
      }
      *(undefined4 *)(param_3 + 2) = 0;
      *(undefined4 *)(param_3 + 1) = 0;
      return param_3;
    }
    lVar2 = -1;
    if (param_4 == 1) {
      lVar2 = 1;
    }
    lVar8 = 1;
    pbVar17 = param_1 + ((ulong)param_2 - 1);
    if (param_4 == 1) {
      lVar8 = -1;
      pbVar17 = param_1;
      param_1 = param_1 + ((ulong)param_2 - 1);
    }
    if (param_5 == 0) {
      uVar19 = (uint)(*param_1 >> 7);
      uVar18 = -(uint)(*param_1 >> 7) & 0xff;
    }
    else {
      uVar18 = 0;
      uVar19 = 0;
    }
    do {
      if (uVar18 != *param_1) goto LAB_0038fb4c;
      uVar6 = param_2 - 1;
      param_1 = param_1 + lVar8;
      bVar1 = 0 < (int)param_2;
      param_2 = uVar6;
    } while (uVar6 != 0 && bVar1);
    param_2 = 0;
LAB_0038fb4c:
    if (uVar18 == 0xff) {
      if ((param_2 == 0) || (-1 < (char)*param_1)) {
        param_2 = param_2 + 1;
      }
    }
    else if (param_2 == 0) {
      *(undefined4 *)(param_3 + 1) = 0;
      return param_3;
    }
    uVar6 = param_2 - 1;
    uVar4 = uVar6 >> 3;
    iVar15 = uVar4 + 1;
    if (((int)uVar4 < *(int *)((long)param_3 + 0xc)) ||
       (lVar8 = FUN_0038f5e4(param_3,iVar15), lVar8 != 0)) {
      puVar9 = (ulong *)*param_3;
      *(int *)(param_3 + 1) = iVar15;
      *(uint *)(param_3 + 2) = uVar19;
      puVar10 = puVar9;
      do {
        if ((int)param_2 < 1) {
          uVar11 = 0;
          uVar4 = param_2;
        }
        else {
          bVar5 = *pbVar17;
          pbVar17 = pbVar17 + lVar2;
          uVar3 = uVar18 ^ bVar5;
          uVar11 = (ulong)(uVar3 + uVar19) & 0xff;
          uVar19 = (uint)(uVar11 < uVar3);
          uVar7 = param_2 - 1;
          uVar4 = uVar7;
          if (uVar7 != 0) {
            bVar5 = *pbVar17;
            pbVar17 = pbVar17 + lVar2;
            uVar19 = uVar18 ^ bVar5;
            uVar12 = (ulong)uVar19;
            if (uVar11 < uVar3) {
              uVar19 = uVar19 + 1;
            }
            uVar14 = (ulong)uVar19 & 0xff;
            uVar11 = uVar11 | ((ulong)uVar19 & 0xff) << 8;
            uVar19 = (uint)(uVar14 < uVar12);
            uVar4 = param_2 - 2;
            if (1 < uVar7) {
              bVar5 = *pbVar17;
              pbVar17 = pbVar17 + lVar2;
              uVar19 = uVar18 ^ bVar5;
              uVar13 = (ulong)uVar19;
              if (uVar14 < uVar12) {
                uVar19 = uVar19 + 1;
              }
              uVar12 = (ulong)uVar19 & 0xff;
              uVar11 = uVar11 | ((ulong)uVar19 & 0xff) << 0x10;
              uVar19 = (uint)(uVar12 < uVar13);
              uVar4 = param_2 - 3;
              if (1 < param_2 - 2) {
                bVar5 = *pbVar17;
                pbVar17 = pbVar17 + lVar2;
                uVar19 = uVar18 ^ bVar5;
                uVar14 = (ulong)uVar19;
                if (uVar12 < uVar13) {
                  uVar19 = uVar19 + 1;
                }
                uVar12 = (ulong)uVar19 & 0xff;
                uVar11 = uVar11 | ((ulong)uVar19 & 0xff) << 0x18;
                uVar19 = (uint)(uVar12 < uVar14);
                uVar4 = param_2 - 4;
                if (1 < param_2 - 3) {
                  bVar5 = *pbVar17;
                  pbVar17 = pbVar17 + lVar2;
                  uVar7 = uVar18 ^ bVar5;
                  uVar3 = uVar7;
                  if (uVar12 < uVar14) {
                    uVar3 = uVar7 + 1;
                  }
                  uVar11 = uVar11 | (ulong)(uVar3 & 0xff) << 0x20;
                  uVar19 = (uint)((uVar3 & 0xff) < uVar7);
                  uVar4 = param_2 - 5;
                  if (1 < param_2 - 4) {
                    bVar5 = *pbVar17;
                    pbVar17 = pbVar17 + lVar2;
                    uVar19 = uVar18 ^ bVar5;
                    uVar12 = (ulong)uVar19;
                    if ((uVar3 & 0xff) < uVar7) {
                      uVar19 = uVar19 + 1;
                    }
                    uVar14 = (ulong)uVar19 & 0xff;
                    uVar11 = uVar11 | ((ulong)uVar19 & 0xff) << 0x28;
                    uVar19 = (uint)(uVar14 < uVar12);
                    uVar4 = param_2 - 6;
                    if (1 < param_2 - 5) {
                      bVar5 = *pbVar17;
                      pbVar17 = pbVar17 + lVar2;
                      uVar19 = uVar18 ^ bVar5;
                      uVar13 = (ulong)uVar19;
                      if (uVar14 < uVar12) {
                        uVar19 = uVar19 + 1;
                      }
                      uVar12 = (ulong)uVar19 & 0xff;
                      uVar11 = uVar11 | ((ulong)uVar19 & 0xff) << 0x30;
                      uVar19 = (uint)(uVar12 < uVar13);
                      if (param_2 - 6 < 2) {
                        uVar4 = param_2 - 7;
                      }
                      else {
                        bVar5 = *pbVar17;
                        pbVar17 = pbVar17 + lVar2;
                        uVar4 = uVar18 ^ bVar5;
                        uVar19 = uVar4;
                        if (uVar12 < uVar13) {
                          uVar19 = uVar4 + 1;
                        }
                        uVar11 = uVar11 | (ulong)uVar19 << 0x38;
                        uVar19 = (uint)((uVar19 & 0xff) < uVar4);
                        uVar4 = param_2 - 8;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        param_2 = uVar4;
        iVar15 = iVar15 + -1;
        *puVar10 = uVar11;
        puVar10 = puVar10 + 1;
      } while (iVar15 != 0);
      uVar11 = (ulong)(uVar6 >> 3);
      do {
        if (puVar9[uVar11] != 0) {
          *(int *)(param_3 + 1) = (int)uVar11 + 1;
          if ((int)uVar11 != -1) {
            return param_3;
          }
          goto LAB_0038fd74;
        }
        uVar11 = uVar11 - 1;
      } while (1 < (int)uVar11 + 2);
      *(undefined4 *)(param_3 + 1) = 0;
LAB_0038fd74:
      *(undefined4 *)(param_3 + 2) = 0;
      return param_3;
    }
    if (plVar16 != (long *)0x0) {
      if ((*(uint *)((long)plVar16 + 0x14) >> 1 & 1) == 0) {
        if ((*(uint *)((long)plVar16 + 0x14) >> 3 & 1) == 0) {
          FUN_003c86b4(*plVar16,"crypto/bn/bn_lib.c",0xd1);
        }
        else {
          FUN_003c9d0c(*plVar16,(long)*(int *)((long)plVar16 + 0xc) << 3,"crypto/bn/bn_lib.c",0xcd);
        }
      }
      if ((*(byte *)((long)plVar16 + 0x14) & 1) != 0) {
        FUN_003c86b4(plVar16,"crypto/bn/bn_lib.c",0xe8);
      }
    }
  }
  return (long *)0x0;
}


// ===== 0038fe04  FUN_0038fe04 =====

void FUN_0038fe04(void)

{
  FUN_0038fa50();
  return;
}


// ===== 0038fe10  FUN_0038fe10 =====

undefined8 FUN_0038fe10(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (-1 < param_3) {
    uVar1 = FUN_0038fe28();
    return uVar1;
  }
  return 0xffffffff;
}


// ===== 0038fe28  FUN_0038fe28 =====

int FUN_0038fe28(long *param_1,undefined1 *param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  long local_70;
  undefined8 uStack_68;
  ulong local_60;
  
  iVar5 = FUN_0038f2c0();
  iVar11 = iVar5 + 0xe;
  if (iVar5 + 7 < 0 == SCARRY4(iVar5,7)) {
    iVar11 = iVar5 + 7;
  }
  iVar11 = iVar11 >> 3;
  if (param_5 == 0) {
    uVar13 = *(uint *)(param_1 + 2);
    uVar12 = -(uint)(uVar13 != 0);
    uVar14 = (uint)(uVar13 == 0);
    if (iVar5 != iVar11 * 8) {
      uVar14 = uVar13;
    }
    iVar11 = uVar14 + iVar11;
  }
  else {
    uVar12 = 0;
    uVar13 = 0;
    uVar14 = 0;
  }
  if ((param_3 != -1) && (bVar1 = param_3 < iVar11, iVar11 = param_3, bVar1)) {
    uStack_68 = param_1[1];
    local_70 = *param_1;
    local_60 = param_1[2];
    uVar7 = uStack_68 & 0xffffffff;
    if (0 < (int)uStack_68) {
      plVar8 = (long *)(local_70 + uVar7 * 8);
      do {
        plVar8 = plVar8 + -1;
        if (*plVar8 != 0) goto LAB_0038fecc;
        iVar5 = (int)uVar7;
        uVar3 = iVar5 - 1;
        uVar7 = (ulong)uVar3;
      } while (uVar3 != 0 && 0 < iVar5);
      uVar7 = 0;
LAB_0038fecc:
      uVar4 = uStack_68 >> 0x20;
      uStack_68 = CONCAT44((int)uVar4,(int)uVar7);
    }
    if ((int)uVar7 == 0) {
      local_60 = local_60 & 0xffffffff00000000;
    }
    iVar6 = FUN_0038f2c0(&local_70);
    iVar5 = iVar6 + 0xe;
    if (iVar6 + 7 < 0 == SCARRY4(iVar6,7)) {
      iVar5 = iVar6 + 7;
    }
    if (param_3 < (int)(uVar14 + (iVar5 >> 3))) {
      return -1;
    }
  }
  iVar5 = *(int *)((long)param_1 + 0xc);
  if (iVar5 == 0) {
    if (iVar11 != 0) {
      memset(param_2,0,(long)iVar11);
    }
  }
  else {
    lVar2 = -1;
    if (param_4 == 1) {
      lVar2 = 1;
    }
    if (iVar11 != 0) {
      lVar9 = (long)iVar11;
      uVar7 = 0;
      if (param_4 != 1) {
        param_2 = param_2 + lVar9 + -1;
      }
      lVar10 = -(long)((int)param_1[1] << 3);
      do {
        uVar14 = (uint)(lVar10 >> 0x3f) &
                 (uint)(*(ulong *)(*param_1 + (uVar7 & 0xfffffffffffffff8)) >> ((uVar7 & 7) << 3)) ^
                 uVar12;
        uVar13 = uVar14 + uVar13;
        *param_2 = (char)uVar13;
        uVar7 = uVar7 - ((long)(uVar7 + (long)iVar5 * -8 + 1) >> 0x3f);
        uVar13 = (uint)((uVar13 & 0xff) < (uVar14 & 0xff));
        lVar9 = lVar9 + -1;
        param_2 = param_2 + lVar2;
        lVar10 = lVar10 + 1;
      } while (lVar9 != 0);
    }
  }
  return iVar11;
}


// ===== 0038fffc  FUN_0038fffc =====

undefined8 FUN_0038fffc(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (-1 < param_3) {
    uVar1 = FUN_0038fe28();
    return uVar1;
  }
  return 0xffffffff;
}


// ===== 00390014  FUN_00390014 =====

int FUN_00390014(long *param_1,void *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  
  iVar3 = FUN_0038f2c0();
  uVar6 = iVar3 + 0xe;
  iVar2 = *(int *)((long)param_1 + 0xc);
  uVar1 = uVar6;
  if ((int)(iVar3 + 7U) < 0 == SCARRY4(iVar3,7)) {
    uVar1 = iVar3 + 7U;
  }
  iVar3 = (int)uVar1 >> 3;
  if (iVar2 == 0) {
    if (0xe < uVar6) {
      memset(param_2,0,(long)iVar3);
      return iVar3;
    }
    return 0;
  }
  if (0xe < uVar6) {
    uVar4 = 0;
    uVar6 = 0;
    lVar5 = (long)iVar3;
    lVar7 = -(long)((int)param_1[1] << 3);
    do {
      uVar1 = (uint)(lVar7 >> 0x3f) &
              (uint)(*(ulong *)(*param_1 + (uVar4 & 0xfffffffffffffff8)) >> ((uVar4 & 7) << 3));
      uVar6 = uVar1 + uVar6;
      *(char *)((long)param_2 + lVar5 + -1) = (char)uVar6;
      uVar4 = uVar4 - ((long)(uVar4 + (long)iVar2 * -8 + 1) >> 0x3f);
      uVar6 = (uint)((uVar6 & 0xff) < (uVar1 & 0xff));
      lVar5 = lVar5 + -1;
      lVar7 = lVar7 + 1;
    } while (lVar5 != 0);
  }
  else {
    iVar3 = 0;
  }
  return iVar3;
}


// ===== 0039011c  FUN_0039011c =====

void FUN_0039011c(void)

{
  FUN_0038fa50();
  return;
}


// ===== 00390128  FUN_00390128 =====

void FUN_00390128(void)

{
  FUN_0038fa50();
  return;
}


// ===== 00390134  FUN_00390134 =====

undefined8 FUN_00390134(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (-1 < param_3) {
    uVar1 = FUN_0038fe28();
    return uVar1;
  }
  return 0xffffffff;
}


// ===== 0039014c  FUN_0039014c =====

undefined8 FUN_0039014c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (-1 < param_3) {
    uVar1 = FUN_0038fe28();
    return uVar1;
  }
  return 0xffffffff;
}


// ===== 00390164  FUN_00390164 =====

void FUN_00390164(void)

{
  FUN_0038fa50();
  return;
}


// ===== 00390170  FUN_00390170 =====

void FUN_00390170(void)

{
  FUN_0038fa50();
  return;
}


// ===== 0039017c  FUN_0039017c =====

undefined8 FUN_0039017c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (-1 < param_3) {
    uVar1 = FUN_0038fe28();
    return uVar1;
  }
  return 0xffffffff;
}


// ===== 00390194  FUN_00390194 =====

undefined8 FUN_00390194(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (-1 < param_3) {
    uVar1 = FUN_0038fe28();
    return uVar1;
  }
  return 0xffffffff;
}


// ===== 003901ac  FUN_003901ac =====

int FUN_003901ac(long *param_1,long *param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar2 = (ulong)*(uint *)(param_1 + 1);
  iVar1 = *(uint *)(param_1 + 1) - (int)param_2[1];
  if (iVar1 != 0) {
    return iVar1;
  }
  do {
    if ((int)uVar2 < 1) {
      return 0;
    }
    lVar3 = uVar2 * 8;
    uVar2 = uVar2 - 1;
    uVar5 = *(ulong *)(*param_1 + -8 + lVar3);
    uVar4 = *(ulong *)(*param_2 + -8 + lVar3);
  } while (uVar5 == uVar4);
  iVar1 = -1;
  if (uVar4 < uVar5) {
    iVar1 = 1;
  }
  return iVar1;
}


// ===== 00390208  FUN_00390208 =====

uint FUN_00390208(long *param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if ((param_1 == (long *)0x0) || (param_2 == (long *)0x0)) {
    uVar4 = (uint)(param_2 != (long *)0x0);
    if (param_1 != (long *)0x0) {
      uVar4 = 0xffffffff;
    }
  }
  else {
    iVar2 = (int)param_1[2];
    uVar4 = 0xffffffff;
    if (iVar2 == 0) {
      uVar4 = 1;
    }
    if (iVar2 == (int)param_2[2]) {
      uVar3 = *(uint *)(param_1 + 1);
      uVar5 = (ulong)uVar3;
      uVar1 = 1;
      if (iVar2 == 0) {
        uVar1 = 0xffffffff;
      }
      if ((int)uVar3 <= (int)param_2[1]) {
        if ((int)uVar3 < (int)param_2[1]) {
          return uVar1;
        }
        while( true ) {
          uVar5 = uVar5 - 1;
          if ((int)uVar5 + 1 < 1) {
            return 0;
          }
          uVar6 = *(ulong *)(*param_1 + uVar5 * 8);
          uVar7 = *(ulong *)(*param_2 + uVar5 * 8);
          if (uVar7 < uVar6) break;
          if (uVar6 < uVar7) {
            return uVar1;
          }
        }
      }
    }
  }
  return uVar4;
}


// ===== 003902b8  FUN_003902b8 =====

undefined8 FUN_003902b8(long *param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  
  if ((int)param_2 < 0) {
    return 0;
  }
  uVar1 = param_2 >> 6;
  iVar3 = (int)param_1[1];
  if (iVar3 <= (int)uVar1) {
    if (*(int *)((long)param_1 + 0xc) <= (int)uVar1) {
      lVar2 = FUN_0038f5e4(param_1,uVar1 + 1);
      if (lVar2 == 0) {
        return 0;
      }
      iVar3 = (int)param_1[1];
    }
    if (iVar3 <= (int)uVar1) {
      memset((void *)(*param_1 + (long)iVar3 * 8),0,(ulong)(uVar1 - iVar3) * 8 + 8);
    }
    *(uint *)(param_1 + 1) = uVar1 + 1;
  }
  *(ulong *)(*param_1 + (ulong)uVar1 * 8) =
       *(ulong *)(*param_1 + (ulong)uVar1 * 8) | 1L << (param_2 & 0x3f);
  return 1;
}


// ===== 0039037c  FUN_0039037c =====

undefined8 FUN_0039037c(long *param_1,uint param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  
  if (-1 < (int)param_2) {
    uVar3 = (ulong)*(uint *)(param_1 + 1);
    if ((int)(param_2 >> 6) < (int)*(uint *)(param_1 + 1)) {
      lVar5 = *param_1;
      lVar1 = (ulong)(param_2 >> 6) * 8;
      plVar4 = (long *)(lVar5 + uVar3 * 8);
      *(ulong *)(lVar5 + lVar1) =
           *(ulong *)(lVar5 + lVar1) & (1L << ((ulong)param_2 & 0x3f) ^ 0xffffffffffffffffU);
      do {
        plVar4 = plVar4 + -1;
        iVar2 = (int)uVar3;
        if (*plVar4 != 0) {
          *(int *)(param_1 + 1) = iVar2;
          return 1;
        }
        uVar3 = (ulong)(iVar2 - 1U);
      } while (iVar2 - 1U != 0 && 0 < iVar2);
      *(undefined4 *)(param_1 + 1) = 0;
      *(undefined4 *)(param_1 + 2) = 0;
      return 1;
    }
  }
  return 0;
}


// ===== 003903e8  FUN_003903e8 =====

void FUN_003903e8(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar2 = (ulong)uVar1;
  if (0 < (int)uVar1) {
    plVar3 = (long *)(*param_1 + uVar2 * 8);
    do {
      uVar1 = (uint)uVar2;
      plVar3 = plVar3 + -1;
      if (*plVar3 != 0) goto LAB_00390414;
      uVar2 = (ulong)(uVar1 - 1);
    } while (uVar1 - 1 != 0 && 0 < (int)uVar1);
    uVar1 = 0;
LAB_00390414:
    *(uint *)(param_1 + 1) = uVar1;
  }
  if (uVar1 != 0) {
    return;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}


// ===== 00390428  FUN_00390428 =====

uint FUN_00390428(long *param_1,uint param_2)

{
  if ((-1 < (int)param_2) && ((int)(param_2 >> 6) < (int)param_1[1])) {
    return (uint)(*(ulong *)(*param_1 + (ulong)(param_2 >> 6) * 8) >> ((ulong)param_2 & 0x3f)) & 1;
  }
  return 0;
}


// ===== 00390458  FUN_00390458 =====

undefined8 FUN_00390458(long *param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  
  if ((int)param_2 < 0) {
    return 0;
  }
  uVar1 = param_2 >> 6;
  uVar4 = (ulong)uVar1;
  if ((int)param_1[1] <= (int)uVar1) {
    return 0;
  }
  if ((param_2 & 0x3f) == 0) {
    *(uint *)(param_1 + 1) = uVar1;
    if (param_2 < 0x40) goto LAB_003904cc;
  }
  else {
    lVar2 = uVar4 * 8;
    uVar4 = (ulong)(uVar1 + 1);
    *(ulong *)(*param_1 + lVar2) =
         *(ulong *)(*param_1 + lVar2) & (-1L << (param_2 & 0x3f) ^ 0xffffffffffffffffU);
  }
  plVar5 = (long *)(*param_1 + uVar4 * 8);
  do {
    plVar5 = plVar5 + -1;
    iVar3 = (int)uVar4;
    if (*plVar5 != 0) {
      *(int *)(param_1 + 1) = iVar3;
      return 1;
    }
    uVar4 = (ulong)(iVar3 - 1U);
  } while (iVar3 - 1U != 0 && 0 < iVar3);
  *(undefined4 *)(param_1 + 1) = 0;
LAB_003904cc:
  *(undefined4 *)(param_1 + 2) = 0;
  return 1;
}


// ===== 003904e4  FUN_003904e4 =====

void FUN_003904e4(long param_1,int param_2)

{
  if ((param_2 != 0) && (*(int *)(param_1 + 8) != 0)) {
    *(undefined4 *)(param_1 + 0x10) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


// ===== 00390504  FUN_00390504 =====

undefined4 FUN_00390504(long param_1,long param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  if (param_3 != 0) {
    lVar5 = (-(ulong)(param_3 >> 0x1f) & 0xfffffff800000000 | (ulong)param_3 << 3) - 8;
    uVar7 = *(ulong *)(param_1 + lVar5);
    uVar6 = *(ulong *)(param_2 + lVar5);
    bVar3 = uVar6 <= uVar7;
    bVar4 = uVar7 == uVar6;
    if (!bVar4) {
LAB_00390554:
      uVar1 = 0xffffffff;
      if (bVar3 && !bVar4) {
        uVar1 = 1;
      }
      return uVar1;
    }
    if (1 < (int)param_3) {
      uVar6 = (ulong)(param_3 - 1);
      do {
        uVar2 = (int)uVar6 - 1;
        uVar6 = (ulong)uVar2;
        uVar8 = *(ulong *)(param_1 + uVar6 * 8);
        uVar7 = *(ulong *)(param_2 + uVar6 * 8);
        bVar3 = uVar7 <= uVar8;
        bVar4 = uVar8 == uVar7;
        if (!bVar4) goto LAB_00390554;
      } while (0 < (int)uVar2);
    }
  }
  return 0;
}


// ===== 00390560  FUN_00390560 =====

undefined4 FUN_00390560(long param_1,long param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  
  iVar5 = (int)((long)param_3 + -1);
  if ((int)param_4 < 0) {
    lVar8 = -(long)(int)param_4;
    do {
      if (*(long *)(param_2 + (long)iVar5 * 8 + lVar8 * 8) != 0) {
        return 0xffffffff;
      }
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  if (0 < (int)param_4) {
    uVar6 = (ulong)param_4;
    do {
      if (*(long *)(param_1 + (long)iVar5 * 8 + uVar6 * 8) != 0) {
        return 1;
      }
      bVar4 = 1 < (long)uVar6;
      uVar6 = uVar6 - 1;
    } while (bVar4);
  }
  if (param_3 != 0) {
    lVar8 = ((long)param_3 + -1) * 8;
    uVar7 = *(ulong *)(param_1 + lVar8);
    uVar6 = *(ulong *)(param_2 + lVar8);
    bVar3 = uVar6 <= uVar7;
    bVar4 = uVar7 == uVar6;
    if (!bVar4) {
LAB_00390600:
      uVar1 = 0xffffffff;
      if (bVar3 && !bVar4) {
        uVar1 = 1;
      }
      return uVar1;
    }
    if (1 < param_3) {
      uVar6 = (ulong)(param_3 - 1);
      do {
        uVar2 = (int)uVar6 - 1;
        uVar6 = (ulong)uVar2;
        uVar9 = *(ulong *)(param_1 + uVar6 * 8);
        uVar7 = *(ulong *)(param_2 + uVar6 * 8);
        bVar3 = uVar7 <= uVar9;
        bVar4 = uVar9 == uVar7;
        if (!bVar4) goto LAB_00390600;
      } while (0 < (int)uVar2);
    }
  }
  return 0;
}


// ===== 00390614  FUN_00390614 =====

void FUN_00390614(ulong param_1,ulong *param_2,ulong *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  undefined8 uVar15;
  byte bVar22;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  undefined8 uVar23;
  byte bVar30;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  undefined8 uVar31;
  byte bVar38;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  undefined8 uVar39;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  
  uVar4 = 0xffffffffffffffff - ((long)(param_1 - 1 & (param_1 ^ 0xffffffffffffffff)) >> 0x3f);
  uVar3 = (uint)uVar4;
  uVar1 = ((uint)param_3[1] ^ (uint)param_2[1]) & uVar3;
  uVar2 = ((uint)param_3[2] ^ (uint)param_2[2]) & uVar3;
  uVar3 = uVar3 & (*(uint *)((long)param_3 + 0x14) ^ *(uint *)((long)param_2 + 0x14)) & 4;
  *(uint *)(param_2 + 1) = uVar1 ^ (uint)param_2[1];
  *(uint *)(param_2 + 2) = uVar2 ^ (uint)param_2[2];
  *(uint *)((long)param_2 + 0x14) = uVar3 ^ *(uint *)((long)param_2 + 0x14);
  *(uint *)(param_3 + 1) = (uint)param_3[1] ^ uVar1;
  *(uint *)(param_3 + 2) = (uint)param_3[2] ^ uVar2;
  *(uint *)((long)param_3 + 0x14) = uVar3 ^ *(uint *)((long)param_3 + 0x14);
  if (0 < (int)param_4) {
    puVar5 = (undefined8 *)*param_2;
    puVar7 = (undefined8 *)*param_3;
    uVar9 = (ulong)param_4;
    if ((param_4 < 4) || ((puVar5 < puVar7 + uVar9 && (puVar7 < puVar5 + uVar9)))) {
      uVar11 = 0;
    }
    else {
      uVar11 = uVar9 & 0x7ffffffe;
      uVar12 = uVar11;
      puVar13 = puVar7;
      puVar14 = puVar5;
      do {
        uVar23 = puVar14[1];
        uVar15 = *puVar14;
        uVar39 = puVar13[1];
        uVar31 = *puVar13;
        uVar12 = uVar12 - 2;
        bVar16 = (byte)((ulong)uVar15 >> 8);
        bVar32 = (byte)((ulong)uVar31 >> 8);
        bVar17 = (byte)((ulong)uVar15 >> 0x10);
        bVar33 = (byte)((ulong)uVar31 >> 0x10);
        bVar18 = (byte)((ulong)uVar15 >> 0x18);
        bVar34 = (byte)((ulong)uVar31 >> 0x18);
        bVar19 = (byte)((ulong)uVar15 >> 0x20);
        bVar35 = (byte)((ulong)uVar31 >> 0x20);
        bVar20 = (byte)((ulong)uVar15 >> 0x28);
        bVar36 = (byte)((ulong)uVar31 >> 0x28);
        bVar21 = (byte)((ulong)uVar15 >> 0x30);
        bVar37 = (byte)((ulong)uVar31 >> 0x30);
        bVar22 = (byte)((ulong)uVar15 >> 0x38);
        bVar38 = (byte)((ulong)uVar31 >> 0x38);
        bVar24 = (byte)((ulong)uVar23 >> 8);
        bVar40 = (byte)((ulong)uVar39 >> 8);
        bVar25 = (byte)((ulong)uVar23 >> 0x10);
        bVar41 = (byte)((ulong)uVar39 >> 0x10);
        bVar26 = (byte)((ulong)uVar23 >> 0x18);
        bVar42 = (byte)((ulong)uVar39 >> 0x18);
        bVar27 = (byte)((ulong)uVar23 >> 0x20);
        bVar43 = (byte)((ulong)uVar39 >> 0x20);
        bVar28 = (byte)((ulong)uVar23 >> 0x28);
        bVar44 = (byte)((ulong)uVar39 >> 0x28);
        bVar29 = (byte)((ulong)uVar23 >> 0x30);
        bVar45 = (byte)((ulong)uVar39 >> 0x30);
        bVar30 = (byte)((ulong)uVar23 >> 0x38);
        bVar46 = (byte)((ulong)uVar39 >> 0x38);
        bVar47 = ((byte)uVar31 ^ (byte)uVar15) & (byte)uVar4;
        bVar56 = (byte)(uVar4 >> 8);
        bVar48 = (bVar32 ^ bVar16) & bVar56;
        bVar57 = (byte)(uVar4 >> 0x10);
        bVar49 = (bVar33 ^ bVar17) & bVar57;
        bVar58 = (byte)(uVar4 >> 0x18);
        bVar50 = (bVar34 ^ bVar18) & bVar58;
        bVar59 = (byte)(uVar4 >> 0x20);
        bVar51 = (bVar35 ^ bVar19) & bVar59;
        bVar60 = (byte)(uVar4 >> 0x28);
        bVar52 = (bVar36 ^ bVar20) & bVar60;
        bVar61 = (byte)(uVar4 >> 0x30);
        bVar53 = (bVar37 ^ bVar21) & bVar61;
        bVar62 = (byte)(uVar4 >> 0x38);
        bVar54 = (bVar38 ^ bVar22) & bVar62;
        bVar55 = ((byte)uVar39 ^ (byte)uVar23) & (byte)uVar4;
        bVar56 = (bVar40 ^ bVar24) & bVar56;
        bVar57 = (bVar41 ^ bVar25) & bVar57;
        bVar58 = (bVar42 ^ bVar26) & bVar58;
        bVar59 = (bVar43 ^ bVar27) & bVar59;
        bVar60 = (bVar44 ^ bVar28) & bVar60;
        bVar61 = (bVar45 ^ bVar29) & bVar61;
        bVar62 = (bVar46 ^ bVar30) & bVar62;
        puVar14[1] = CONCAT17(bVar62 ^ bVar30,
                              CONCAT16(bVar61 ^ bVar29,
                                       CONCAT15(bVar60 ^ bVar28,
                                                CONCAT14(bVar59 ^ bVar27,
                                                         CONCAT13(bVar58 ^ bVar26,
                                                                  CONCAT12(bVar57 ^ bVar25,
                                                                           CONCAT11(bVar56 ^ bVar24,
                                                                                    bVar55 ^ (byte)
                                                  uVar23)))))));
        *puVar14 = CONCAT17(bVar54 ^ bVar22,
                            CONCAT16(bVar53 ^ bVar21,
                                     CONCAT15(bVar52 ^ bVar20,
                                              CONCAT14(bVar51 ^ bVar19,
                                                       CONCAT13(bVar50 ^ bVar18,
                                                                CONCAT12(bVar49 ^ bVar17,
                                                                         CONCAT11(bVar48 ^ bVar16,
                                                                                  bVar47 ^ (byte)
                                                  uVar15)))))));
        puVar13[1] = CONCAT17(bVar46 ^ bVar62,
                              CONCAT16(bVar45 ^ bVar61,
                                       CONCAT15(bVar44 ^ bVar60,
                                                CONCAT14(bVar43 ^ bVar59,
                                                         CONCAT13(bVar42 ^ bVar58,
                                                                  CONCAT12(bVar41 ^ bVar57,
                                                                           CONCAT11(bVar40 ^ bVar56,
                                                                                    (byte)uVar39 ^
                                                                                    bVar55)))))));
        *puVar13 = CONCAT17(bVar38 ^ bVar54,
                            CONCAT16(bVar37 ^ bVar53,
                                     CONCAT15(bVar36 ^ bVar52,
                                              CONCAT14(bVar35 ^ bVar51,
                                                       CONCAT13(bVar34 ^ bVar50,
                                                                CONCAT12(bVar33 ^ bVar49,
                                                                         CONCAT11(bVar32 ^ bVar48,
                                                                                  (byte)uVar31 ^
                                                                                  bVar47)))))));
        puVar13 = puVar13 + 2;
        puVar14 = puVar14 + 2;
      } while (uVar12 != 0);
      if (uVar11 == uVar9) {
        return;
      }
    }
    lVar10 = uVar9 - uVar11;
    puVar6 = puVar5 + uVar11;
    puVar8 = puVar7 + uVar11;
    do {
      lVar10 = lVar10 + -1;
      uVar9 = (*puVar8 ^ *puVar6) & uVar4;
      *puVar6 = uVar9 ^ *puVar6;
      *puVar8 = *puVar8 ^ uVar9;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    } while (lVar10 != 0);
  }
  return;
}


// ===== 00390744  FUN_00390744 =====

uint FUN_00390744(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 < 0x3c00) {
    if (param_1 < 0x1e00) {
      if (param_1 < 0xc00) {
        if (param_1 < 0x800) {
          if (param_1 < 0x400) {
            return 0;
          }
          uVar2 = 0x50;
        }
        else {
          uVar2 = 0x70;
        }
      }
      else {
        uVar2 = 0x80;
      }
    }
    else {
      uVar2 = 0xc0;
    }
  }
  else {
    uVar2 = 0x100;
  }
  if (param_2 != 0xffffffff) {
    if ((int)param_2 < 0xa0) {
      return 0;
    }
    uVar1 = param_2 >> 1;
    if (uVar2 <= param_2 >> 1) {
      uVar1 = uVar2;
    }
    return uVar1;
  }
  return uVar2;
}


// ===== 003907e0  FUN_003907e0 =====

void FUN_003907e0(long param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


// ===== 003907ec  FUN_003907ec =====

bool FUN_003907ec(undefined8 *param_1,long param_2)

{
  if ((*(int *)(param_1 + 1) == 1) && (*(long *)*param_1 == param_2)) {
    return true;
  }
  return param_2 == 0 && *(int *)(param_1 + 1) == 0;
}


// ===== 00390824  FUN_00390824 =====

bool FUN_00390824(undefined8 *param_1)

{
  if ((*(int *)(param_1 + 1) == 1) && (*(long *)*param_1 == 1)) {
    return *(int *)(param_1 + 2) == 0;
  }
  return false;
}


// ===== 00390858  FUN_00390858 =====

bool FUN_00390858(undefined8 *param_1,long param_2)

{
  if ((*(int *)(param_1 + 1) == 1) && (*(long *)*param_1 == param_2)) {
    if (param_2 != 0) {
      return *(int *)(param_1 + 2) == 0;
    }
    return true;
  }
  return param_2 == 0 && *(int *)(param_1 + 1) == 0;
}


// ===== 003908a0  FUN_003908a0 =====

uint FUN_003908a0(undefined8 *param_1)

{
  if (0 < *(int *)(param_1 + 1)) {
    return *(uint *)*param_1 & 1;
  }
  return 0;
}


// ===== 003908c4  FUN_003908c4 =====

bool FUN_003908c4(long param_1)

{
  return *(int *)(param_1 + 0x10) != 0;
}


// ===== 003908d4  FUN_003908d4 =====

void FUN_003908d4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  FUN_00390a1c(param_1,param_2,param_3 + 8,param_3,param_4);
  return;
}


// ===== 003908e4  FUN_003908e4 =====

void FUN_003908e4(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = *(undefined4 *)(param_2 + 2);
  uVar2 = *(uint *)((long)param_2 + 0x14);
  *param_1 = uVar3;
  *(undefined4 *)(param_1 + 2) = uVar1;
  *(uint *)((long)param_1 + 0x14) =
       *(uint *)((long)param_1 + 0x14) & 1 | param_3 | uVar2 & 0xfffffffc | 2;
  return;
}


// ===== 00390918  FUN_00390918 =====

void FUN_00390918(void)

{
  FUN_003c83a4(0x18,"crypto/bn/bn_lib.c",0x420);
  return;
}


// ===== 0039092c  FUN_0039092c =====

void FUN_0039092c(long param_1)

{
  if (param_1 != 0) {
    FUN_003c86b4(param_1,"crypto/bn/bn_lib.c",0x42a);
    return;
  }
  return;
}


// ===== 00390944  FUN_00390944 =====

void FUN_00390944(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | param_2;
  return;
}


// ===== 00390954  FUN_00390954 =====

void FUN_00390954(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 2) = param_3;
  *(undefined8 *)(param_1 + 4) = param_2;
  *param_1 = 1;
  return;
}


// ===== 00390964  FUN_00390964 =====

void FUN_00390964(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 2) = param_3;
  *(undefined8 *)(param_1 + 4) = param_2;
  *param_1 = 2;
  return;
}


// ===== 00390974  FUN_00390974 =====

undefined8 FUN_00390974(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


// ===== 0039097c  FUN_0039097c =====

void FUN_0039097c(long *param_1)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  
  if ((int)*(uint *)((long)param_1 + 0xc) < 1) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    uVar3 = 0;
    do {
      uVar1 = uVar3 + 1;
      uVar2 = -(uint)(*(long *)(*param_1 + uVar3 * 8) != 0 && (long)uVar3 < (long)(int)param_1[1]);
      uVar4 = ~uVar2 & uVar4 | uVar2 & (uint)uVar1;
      uVar3 = uVar1;
    } while (*(uint *)((long)param_1 + 0xc) != uVar1);
  }
  *(uint *)(param_1 + 1) = uVar4;
  *(uint *)(param_1 + 2) =
       ~((int)(uVar4 - 1 & (uVar4 ^ 0xffffffff)) >> 0x1f) & *(uint *)(param_1 + 2);
  return;
}


// ===== 00390a1c  FUN_00390a1c =====

undefined4 FUN_00390a1c(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00390a4c();
  FUN_003903e8(param_1);
  return uVar1;
}


// ===== 00390a4c  FUN_00390a4c =====

undefined4
FUN_00390a4c(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  
  iVar1 = *(int *)(param_3 + 8) + *(int *)(param_2 + 8);
  iVar2 = *(int *)(param_4 + 0x28) * 2;
  if (iVar1 != iVar2 && iVar1 + *(int *)(param_4 + 0x28) * -2 < 0 == SBORROW4(iVar1,iVar2)) {
    return 0;
  }
  FUN_003916e0(param_5);
  lVar4 = FUN_00391898(param_5);
  if (lVar4 != 0) {
    if (param_2 == param_3) {
      iVar2 = FUN_00395cac(lVar4,param_2,param_5);
    }
    else {
      iVar2 = FUN_00392ab0(lVar4,param_2,param_3,param_5);
    }
    if (iVar2 != 0) {
      uVar3 = FUN_00390b2c(param_1,lVar4,param_4);
      goto LAB_00390b0c;
    }
  }
  uVar3 = 0;
LAB_00390b0c:
  FUN_0039180c(param_5);
  return uVar3;
}


// ===== 00390b2c  FUN_00390b2c =====

undefined8 FUN_00390b2c(ulong *param_1,long *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined8 uVar18;
  long *plVar19;
  long lVar20;
  uint uVar21;
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
  int iVar38;
  undefined8 uVar39;
  int iVar40;
  int iVar42;
  undefined8 uVar41;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  long lVar48;
  
  uVar2 = *(uint *)(param_3 + 0x28);
  uVar17 = (ulong)uVar2;
  if (uVar2 == 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    return 1;
  }
  uVar21 = uVar2 * 2;
  lVar4 = FUN_0038f924(param_2,uVar21);
  if (lVar4 == 0) {
    return 0;
  }
  uVar18 = *(undefined8 *)(param_3 + 0x20);
  *(uint *)(param_2 + 2) = *(uint *)(param_2 + 2) ^ *(uint *)(param_3 + 0x30);
  if ((int)uVar2 < 1) {
    uVar5 = 0;
    *(uint *)(param_2 + 1) = uVar21;
    goto LAB_00390ca8;
  }
  plVar19 = (long *)*param_2;
  iVar6 = (int)param_2[1];
  uVar1 = uVar21;
  if ((int)uVar21 < 2) {
    uVar1 = 1;
  }
  uVar5 = (ulong)uVar1;
  if (uVar2 == 1) {
    uVar8 = 0;
LAB_00390c20:
    iVar6 = (int)uVar8 - iVar6;
    lVar4 = uVar5 - uVar8;
    plVar11 = plVar19 + uVar8;
    do {
      lVar9 = *plVar11;
      bVar3 = -1 < iVar6;
      iVar6 = iVar6 + 1;
      if (bVar3) {
        lVar9 = 0;
      }
      lVar4 = lVar4 + -1;
      *plVar11 = lVar9;
      plVar11 = plVar11 + 1;
    } while (lVar4 != 0);
  }
  else {
    uVar8 = uVar5 & 0x7ffffffc;
    plVar11 = plVar19 + 2;
    uVar14 = uVar8;
    uVar39 = DAT_001b7108;
    do {
      iVar40 = (int)uVar39 - iVar6;
      iVar38 = (int)((ulong)uVar39 >> 0x20);
      iVar42 = iVar38 - iVar6;
      lVar9 = plVar11[-1];
      lVar4 = plVar11[-2];
      lVar48 = plVar11[1];
      lVar20 = *plVar11;
      uVar39 = CONCAT44(iVar38 + 4,(int)uVar39 + 4);
      uVar14 = uVar14 - 4;
      uVar41 = NEON_cmlt(CONCAT44(iVar42,iVar40),0,4);
      uVar43 = NEON_cmlt(CONCAT44(iVar42 + 2,iVar40 + 2),0,4);
      bVar22 = (byte)((ulong)uVar41 >> 0x18);
      bVar26 = (char)bVar22 >> 7;
      bVar23 = (byte)((ulong)uVar41 >> 0x38);
      bVar27 = (char)bVar23 >> 7;
      bVar24 = (byte)((ulong)uVar43 >> 0x18);
      bVar28 = (char)bVar24 >> 7;
      bVar25 = (byte)((ulong)uVar43 >> 0x38);
      bVar29 = (char)bVar25 >> 7;
      plVar11[-1] = CONCAT17((byte)((ulong)lVar9 >> 0x38) & bVar27,
                             CONCAT16((byte)((ulong)lVar9 >> 0x30) & bVar27,
                                      CONCAT15((byte)((ulong)lVar9 >> 0x28) & bVar27,
                                               CONCAT14((byte)((ulong)lVar9 >> 0x20) & bVar27,
                                                        CONCAT13((byte)((ulong)lVar9 >> 0x18) &
                                                                 bVar23,CONCAT12((byte)((ulong)lVar9
                                                                                       >> 0x10) &
                                                                                 (byte)((ulong)
                                                  uVar41 >> 0x30),
                                                  CONCAT11((byte)((ulong)lVar9 >> 8) &
                                                           (byte)((ulong)uVar41 >> 0x28),
                                                           (byte)lVar9 &
                                                           (byte)((ulong)uVar41 >> 0x20))))))));
      plVar11[-2] = CONCAT17((byte)((ulong)lVar4 >> 0x38) & bVar26,
                             CONCAT16((byte)((ulong)lVar4 >> 0x30) & bVar26,
                                      CONCAT15((byte)((ulong)lVar4 >> 0x28) & bVar26,
                                               CONCAT14((byte)((ulong)lVar4 >> 0x20) & bVar26,
                                                        CONCAT13((byte)((ulong)lVar4 >> 0x18) &
                                                                 bVar22,CONCAT12((byte)((ulong)lVar4
                                                                                       >> 0x10) &
                                                                                 (byte)((ulong)
                                                  uVar41 >> 0x10),
                                                  CONCAT11((byte)((ulong)lVar4 >> 8) &
                                                           (byte)((ulong)uVar41 >> 8),
                                                           (byte)lVar4 & (byte)uVar41)))))));
      plVar11[1] = CONCAT17((byte)((ulong)lVar48 >> 0x38) & bVar29,
                            CONCAT16((byte)((ulong)lVar48 >> 0x30) & bVar29,
                                     CONCAT15((byte)((ulong)lVar48 >> 0x28) & bVar29,
                                              CONCAT14((byte)((ulong)lVar48 >> 0x20) & bVar29,
                                                       CONCAT13((byte)((ulong)lVar48 >> 0x18) &
                                                                bVar25,CONCAT12((byte)((ulong)lVar48
                                                                                      >> 0x10) &
                                                                                (byte)((ulong)uVar43
                                                                                      >> 0x30),
                                                                                CONCAT11((byte)((
                                                  ulong)lVar48 >> 8) & (byte)((ulong)uVar43 >> 0x28)
                                                  ,(byte)lVar48 & (byte)((ulong)uVar43 >> 0x20))))))
                                    ));
      *plVar11 = CONCAT17((byte)((ulong)lVar20 >> 0x38) & bVar28,
                          CONCAT16((byte)((ulong)lVar20 >> 0x30) & bVar28,
                                   CONCAT15((byte)((ulong)lVar20 >> 0x28) & bVar28,
                                            CONCAT14((byte)((ulong)lVar20 >> 0x20) & bVar28,
                                                     CONCAT13((byte)((ulong)lVar20 >> 0x18) & bVar24
                                                              ,CONCAT12((byte)((ulong)lVar20 >> 0x10
                                                                              ) & (byte)((ulong)
                                                  uVar43 >> 0x10),
                                                  CONCAT11((byte)((ulong)lVar20 >> 8) &
                                                           (byte)((ulong)uVar43 >> 8),
                                                           (byte)lVar20 & (byte)uVar43)))))));
      plVar11 = plVar11 + 4;
    } while (uVar14 != 0);
    if (uVar8 != uVar5) goto LAB_00390c20;
  }
  uVar5 = 0;
  *(uint *)(param_2 + 1) = uVar21;
  if (0 < (int)uVar2) {
    lVar4 = *(long *)(param_3 + 0x50);
    uVar21 = uVar2;
    do {
      lVar9 = FUN_00392d24(plVar19,uVar18,uVar2,*plVar19 * lVar4);
      uVar8 = plVar19[uVar17];
      uVar14 = lVar9 + uVar5 + uVar8;
      plVar19[uVar17] = uVar14;
      plVar19 = plVar19 + 1;
      uVar5 = (ulong)(uVar14 <= uVar8 && (lVar9 + uVar5 != 0 || uVar5 != 0));
      uVar21 = uVar21 - 1;
    } while (uVar21 != 0);
  }
LAB_00390ca8:
  lVar4 = FUN_0038f924(param_1,uVar2);
  if (lVar4 == 0) {
    return 0;
  }
  lVar9 = (long)(int)uVar2;
  lVar20 = *param_2;
  lVar4 = param_2[2];
  uVar8 = *param_1;
  uVar14 = lVar20 + lVar9 * 8;
  *(uint *)(param_1 + 1) = uVar2;
  *(int *)(param_1 + 2) = (int)lVar4;
  lVar4 = FUN_00393448(uVar8,uVar14,uVar18,uVar2);
  if (0 < (int)uVar2) {
    uVar5 = uVar5 - lVar4;
    uVar7 = ~uVar5;
    if ((uVar2 < 6) || ((uVar8 < lVar20 + (lVar9 + uVar17) * 8 && (uVar14 < uVar8 + uVar17 * 8)))) {
      uVar10 = 0;
    }
    else {
      uVar10 = uVar17 & 0x7ffffffc;
      puVar13 = (undefined8 *)(uVar14 + 0x10);
      puVar16 = (undefined8 *)(uVar8 + 0x10);
      uVar14 = uVar10;
      do {
        uVar39 = puVar16[-1];
        uVar18 = puVar16[-2];
        uVar47 = puVar16[1];
        uVar46 = *puVar16;
        uVar14 = uVar14 - 4;
        uVar43 = puVar13[-1];
        uVar41 = puVar13[-2];
        uVar45 = puVar13[1];
        uVar44 = *puVar13;
        puVar13[-1] = 0;
        puVar13[-2] = 0;
        puVar13[1] = 0;
        *puVar13 = 0;
        puVar13 = puVar13 + 4;
        bVar30 = (byte)uVar7;
        bVar31 = (byte)(uVar7 >> 8);
        bVar32 = (byte)(uVar7 >> 0x10);
        bVar33 = (byte)(uVar7 >> 0x18);
        bVar34 = (byte)(uVar7 >> 0x20);
        bVar35 = (byte)(uVar7 >> 0x28);
        bVar36 = (byte)(uVar7 >> 0x30);
        bVar37 = (byte)(uVar7 >> 0x38);
        bVar22 = (byte)uVar5;
        bVar23 = (byte)(uVar5 >> 8);
        bVar24 = (byte)(uVar5 >> 0x10);
        bVar25 = (byte)(uVar5 >> 0x18);
        bVar26 = (byte)(uVar5 >> 0x20);
        bVar27 = (byte)(uVar5 >> 0x28);
        bVar28 = (byte)(uVar5 >> 0x30);
        bVar29 = (byte)(uVar5 >> 0x38);
        puVar16[-1] = CONCAT17((byte)((ulong)uVar39 >> 0x38) & bVar37 |
                               (byte)((ulong)uVar43 >> 0x38) & bVar29,
                               CONCAT16((byte)((ulong)uVar39 >> 0x30) & bVar36 |
                                        (byte)((ulong)uVar43 >> 0x30) & bVar28,
                                        CONCAT15((byte)((ulong)uVar39 >> 0x28) & bVar35 |
                                                 (byte)((ulong)uVar43 >> 0x28) & bVar27,
                                                 CONCAT14((byte)((ulong)uVar39 >> 0x20) & bVar34 |
                                                          (byte)((ulong)uVar43 >> 0x20) & bVar26,
                                                          CONCAT13((byte)((ulong)uVar39 >> 0x18) &
                                                                   bVar33 | (byte)((ulong)uVar43 >>
                                                                                  0x18) & bVar25,
                                                                   CONCAT12((byte)((ulong)uVar39 >>
                                                                                  0x10) & bVar32 |
                                                                            (byte)((ulong)uVar43 >>
                                                                                  0x10) & bVar24,
                                                                            CONCAT11((byte)((ulong)
                                                  uVar39 >> 8) & bVar31 |
                                                  (byte)((ulong)uVar43 >> 8) & bVar23,
                                                  (byte)uVar39 & bVar30 | (byte)uVar43 & bVar22)))))
                                       ));
        puVar16[-2] = CONCAT17((byte)((ulong)uVar18 >> 0x38) & bVar37 |
                               (byte)((ulong)uVar41 >> 0x38) & bVar29,
                               CONCAT16((byte)((ulong)uVar18 >> 0x30) & bVar36 |
                                        (byte)((ulong)uVar41 >> 0x30) & bVar28,
                                        CONCAT15((byte)((ulong)uVar18 >> 0x28) & bVar35 |
                                                 (byte)((ulong)uVar41 >> 0x28) & bVar27,
                                                 CONCAT14((byte)((ulong)uVar18 >> 0x20) & bVar34 |
                                                          (byte)((ulong)uVar41 >> 0x20) & bVar26,
                                                          CONCAT13((byte)((ulong)uVar18 >> 0x18) &
                                                                   bVar33 | (byte)((ulong)uVar41 >>
                                                                                  0x18) & bVar25,
                                                                   CONCAT12((byte)((ulong)uVar18 >>
                                                                                  0x10) & bVar32 |
                                                                            (byte)((ulong)uVar41 >>
                                                                                  0x10) & bVar24,
                                                                            CONCAT11((byte)((ulong)
                                                  uVar18 >> 8) & bVar31 |
                                                  (byte)((ulong)uVar41 >> 8) & bVar23,
                                                  (byte)uVar18 & bVar30 | (byte)uVar41 & bVar22)))))
                                       ));
        puVar16[1] = CONCAT17((byte)((ulong)uVar47 >> 0x38) & bVar37 |
                              (byte)((ulong)uVar45 >> 0x38) & bVar29,
                              CONCAT16((byte)((ulong)uVar47 >> 0x30) & bVar36 |
                                       (byte)((ulong)uVar45 >> 0x30) & bVar28,
                                       CONCAT15((byte)((ulong)uVar47 >> 0x28) & bVar35 |
                                                (byte)((ulong)uVar45 >> 0x28) & bVar27,
                                                CONCAT14((byte)((ulong)uVar47 >> 0x20) & bVar34 |
                                                         (byte)((ulong)uVar45 >> 0x20) & bVar26,
                                                         CONCAT13((byte)((ulong)uVar47 >> 0x18) &
                                                                  bVar33 | (byte)((ulong)uVar45 >>
                                                                                 0x18) & bVar25,
                                                                  CONCAT12((byte)((ulong)uVar47 >>
                                                                                 0x10) & bVar32 |
                                                                           (byte)((ulong)uVar45 >>
                                                                                 0x10) & bVar24,
                                                                           CONCAT11((byte)((ulong)
                                                  uVar47 >> 8) & bVar31 |
                                                  (byte)((ulong)uVar45 >> 8) & bVar23,
                                                  (byte)uVar47 & bVar30 | (byte)uVar45 & bVar22)))))
                                      ));
        *puVar16 = CONCAT17((byte)((ulong)uVar46 >> 0x38) & bVar37 |
                            (byte)((ulong)uVar44 >> 0x38) & bVar29,
                            CONCAT16((byte)((ulong)uVar46 >> 0x30) & bVar36 |
                                     (byte)((ulong)uVar44 >> 0x30) & bVar28,
                                     CONCAT15((byte)((ulong)uVar46 >> 0x28) & bVar35 |
                                              (byte)((ulong)uVar44 >> 0x28) & bVar27,
                                              CONCAT14((byte)((ulong)uVar46 >> 0x20) & bVar34 |
                                                       (byte)((ulong)uVar44 >> 0x20) & bVar26,
                                                       CONCAT13((byte)((ulong)uVar46 >> 0x18) &
                                                                bVar33 | (byte)((ulong)uVar44 >>
                                                                               0x18) & bVar25,
                                                                CONCAT12((byte)((ulong)uVar46 >>
                                                                               0x10) & bVar32 |
                                                                         (byte)((ulong)uVar44 >>
                                                                               0x10) & bVar24,
                                                                         CONCAT11((byte)((ulong)
                                                  uVar46 >> 8) & bVar31 |
                                                  (byte)((ulong)uVar44 >> 8) & bVar23,
                                                  (byte)uVar46 & bVar30 | (byte)uVar44 & bVar22)))))
                                    ));
        puVar16 = puVar16 + 4;
      } while (uVar14 != 0);
      if (uVar10 == uVar17) {
        return 1;
      }
    }
    lVar4 = uVar17 - uVar10;
    puVar12 = (ulong *)(uVar8 + uVar10 * 8);
    puVar15 = (ulong *)(lVar20 + uVar10 * 8 + lVar9 * 8);
    do {
      lVar4 = lVar4 + -1;
      *puVar12 = *puVar12 & uVar7 | *puVar15 & uVar5;
      *puVar15 = 0;
      puVar12 = puVar12 + 1;
      puVar15 = puVar15 + 1;
    } while (lVar4 != 0);
  }
  return 1;
}


// ===== 00390dd8  FUN_00390dd8 =====

undefined4 FUN_00390dd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  FUN_003916e0(param_4);
  lVar2 = FUN_00391898(param_4);
  if ((lVar2 == 0) || (lVar3 = FUN_0038f85c(lVar2,param_2), lVar3 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00390b2c(param_1,lVar2,param_3);
  }
  FUN_0039180c(param_4);
  FUN_003903e8(param_1);
  return uVar1;
}


// ===== 00390e64  FUN_00390e64 =====

undefined4 FUN_00390e64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  FUN_003916e0(param_4);
  lVar2 = FUN_00391898(param_4);
  if ((lVar2 == 0) || (lVar3 = FUN_0038f85c(lVar2,param_2), lVar3 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00390b2c(param_1,lVar2,param_3);
  }
  FUN_0039180c(param_4);
  return uVar1;
}


// ===== 00390ee8  FUN_00390ee8 =====

void FUN_00390ee8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  FUN_00390a4c(param_1,param_2,param_3 + 8,param_3,param_4);
  return;
}


// ===== 00390ef8  FUN_00390ef8 =====

undefined4 * FUN_00390ef8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_003c83a4(0x68,"crypto/bn/bn_mont.c",0xe8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    FUN_0038f578(puVar1 + 2);
    FUN_0038f578(puVar1 + 8);
    FUN_0038f578(puVar1 + 0xe);
    *(undefined8 *)(puVar1 + 0x14) = 0;
    *(undefined8 *)(puVar1 + 0x16) = 0;
    puVar1[0x18] = 1;
  }
  return puVar1;
}


// ===== 00390f58  FUN_00390f58 =====

void FUN_00390f58(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_0038f578(param_1 + 2);
  FUN_0038f578(param_1 + 8);
  FUN_0038f578(param_1 + 0xe);
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  param_1[0x18] = 0;
  return;
}


// ===== 00390f94  FUN_00390f94 =====

void FUN_00390f94(long param_1)

{
  if (param_1 != 0) {
    FUN_0038f458(param_1 + 8);
    FUN_0038f458(param_1 + 0x20);
    FUN_0038f458(param_1 + 0x38);
    if ((*(byte *)(param_1 + 0x60) & 1) != 0) {
      FUN_003c86b4(param_1,"crypto/bn/bn_mont.c",0x102);
      return;
    }
  }
  return;
}


// ===== 00390ff0  FUN_00390ff0 =====

undefined4 FUN_00390ff0(uint *param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  long local_58;
  undefined8 uStack_50;
  long *local_48;
  uint local_40;
  undefined8 local_3c;
  
  iVar3 = FUN_0038f448(param_2);
  if (iVar3 != 0) {
    return 0;
  }
  FUN_003916e0(param_3);
  puVar4 = (undefined8 *)FUN_00391898(param_3);
  if ((puVar4 != (undefined8 *)0x0) && (lVar5 = FUN_0038f85c(param_1 + 8,param_2), lVar5 != 0)) {
    iVar3 = FUN_0038f4e8(param_2,4);
    if (iVar3 != 0) {
      FUN_00390944(param_1 + 8,4);
    }
    param_1[0xc] = 0;
    FUN_0038f578(&local_48);
    local_48 = &local_58;
    local_3c = DAT_001b70e0;
    iVar3 = FUN_0038f4e8(param_2,4);
    if (iVar3 != 0) {
      FUN_00390944(&local_48,4);
    }
    iVar3 = FUN_0038f2c0(param_2);
    uVar1 = iVar3 + 0x7e;
    if ((int)(iVar3 + 0x3fU) < 0 == SCARRY4(iVar3,0x3f)) {
      uVar1 = iVar3 + 0x3fU;
    }
    *param_1 = uVar1 & 0xffffffc0;
    FUN_003907e0(param_1 + 2);
    iVar3 = FUN_003902b8(param_1 + 2,0x40);
    if (iVar3 != 0) {
      local_58 = *(long *)*param_2;
      uStack_50 = 0;
      local_40 = (uint)(local_58 != 0);
      iVar3 = FUN_00390824(&local_48);
      if (iVar3 == 0) {
        lVar5 = FUN_00396a18(puVar4,param_1 + 2,&local_48,param_3);
        if (lVar5 == 0) goto LAB_00391228;
      }
      else {
        FUN_003907e0(puVar4);
      }
      iVar3 = FUN_0039844c(puVar4,puVar4,0x40);
      if (iVar3 != 0) {
        iVar3 = FUN_0038f448(puVar4);
        if (iVar3 == 0) {
          iVar3 = FUN_003993bc(puVar4,1);
        }
        else {
          iVar3 = FUN_0038f9ec(puVar4,0xffffffffffffffff);
        }
        if ((iVar3 != 0) && (iVar3 = FUN_00397cac(puVar4,0,puVar4,&local_48,param_3), iVar3 != 0)) {
          if (*(int *)(puVar4 + 1) < 1) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined8 *)*puVar4;
          }
          *(undefined8 *)(param_1 + 0x14) = uVar6;
          param_1[0x16] = 0;
          param_1[0x17] = 0;
          FUN_003907e0(param_1 + 2);
          iVar3 = FUN_003902b8(param_1 + 2,*param_1 << 1);
          if ((iVar3 != 0) &&
             (iVar3 = FUN_00397cac(0,param_1 + 2,param_1 + 2,param_1 + 8,param_3), iVar3 != 0)) {
            uVar2 = param_1[4];
            uVar1 = param_1[10];
            if ((int)uVar2 < (int)uVar1) {
              memset((void *)(*(long *)(param_1 + 2) + (long)(int)uVar2 * 8),0,
                     (ulong)(uVar1 + ~uVar2) * 8 + 8);
            }
            param_1[4] = uVar1;
            uVar7 = 1;
            goto LAB_0039122c;
          }
        }
      }
    }
  }
LAB_00391228:
  uVar7 = 0;
LAB_0039122c:
  FUN_0039180c(param_3);
  return uVar7;
}


// ===== 0039124c  FUN_0039124c =====

undefined4 * FUN_0039124c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_1 != param_2) {
    lVar2 = FUN_0038f85c(param_1 + 2,param_2 + 2);
    if (((lVar2 == 0) || (lVar2 = FUN_0038f85c(param_1 + 8,param_2 + 8), lVar2 == 0)) ||
       (lVar2 = FUN_0038f85c(param_1 + 0xe,param_2 + 0xe), lVar2 == 0)) {
      return (undefined4 *)0x0;
    }
    uVar1 = *param_2;
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
    uVar3 = *(undefined8 *)(param_2 + 0x16);
    *param_1 = uVar1;
    *(undefined8 *)(param_1 + 0x16) = uVar3;
  }
  return param_1;
}


// ===== 003912d4  FUN_003912d4 =====

undefined4 * FUN_003912d4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_003d517c(param_2);
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)*param_1;
    FUN_003d519c(param_2);
    if ((puVar2 != (undefined4 *)0x0) ||
       (puVar2 = (undefined4 *)FUN_003c83a4(0x68,"crypto/bn/bn_mont.c",0xe8),
       puVar2 == (undefined4 *)0x0)) {
      return puVar2;
    }
    *puVar2 = 0;
    FUN_0038f578(puVar2 + 2);
    FUN_0038f578(puVar2 + 8);
    FUN_0038f578(puVar2 + 0xe);
    *(undefined8 *)(puVar2 + 0x14) = 0;
    *(undefined8 *)(puVar2 + 0x16) = 0;
    puVar2[0x18] = 1;
    iVar1 = FUN_00390ff0(puVar2,param_3,param_4);
    if ((iVar1 != 0) && (iVar1 = FUN_003d518c(param_2), iVar1 != 0)) {
      if (*param_1 == 0) {
        *param_1 = (long)puVar2;
      }
      else {
        FUN_0038f458(puVar2 + 2);
        FUN_0038f458(puVar2 + 8);
        FUN_0038f458(puVar2 + 0xe);
        if ((*(byte *)(puVar2 + 0x18) & 1) != 0) {
          FUN_003c86b4(puVar2,"crypto/bn/bn_mont.c",0x102);
        }
        puVar2 = (undefined4 *)*param_1;
      }
      FUN_003d519c(param_2);
      return puVar2;
    }
    FUN_0038f458(puVar2 + 2);
    FUN_0038f458(puVar2 + 8);
    FUN_0038f458(puVar2 + 0xe);
    if ((*(byte *)(puVar2 + 0x18) & 1) != 0) {
      FUN_003c86b4(puVar2,"crypto/bn/bn_mont.c",0x102);
    }
  }
  return (undefined4 *)0x0;
}


// ===== 00391448  FUN_00391448 =====

void FUN_00391448(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_003c8474(0x48,"crypto/bn/bn_ctx.c",0x7a);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[8] = param_1;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  return;
}


// ===== 0039148c  FUN_0039148c =====

void FUN_0039148c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_003c8474(0x48,"crypto/bn/bn_ctx.c",0x7a);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[8] = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  return;
}


// ===== 003914c4  FUN_003914c4 =====

void FUN_003914c4(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_003c8474(0x48,"crypto/bn/bn_ctx.c",0x7a);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[8] = param_1;
    *(undefined4 *)((long)puVar1 + 0x3c) = 8;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  return;
}


// ===== 00391510  FUN_00391510 =====

void FUN_00391510(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_003c8474(0x48,"crypto/bn/bn_ctx.c",0x7a);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[8] = 0;
    *(undefined4 *)((long)puVar1 + 0x3c) = 8;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  return;
}


// ===== 00391550  FUN_00391550 =====

void FUN_00391550(long *param_1)

{
  long *plVar1;
  
  if (param_1 != (long *)0x0) {
    FUN_003c86b4(param_1[4],"crypto/bn/bn_ctx.c",0x100);
    plVar1 = (long *)*param_1;
    param_1[4] = 0;
    while (plVar1 != (long *)0x0) {
      if (*plVar1 != 0) {
        FUN_0038f458(plVar1);
      }
      if (plVar1[3] != 0) {
        FUN_0038f458();
      }
      if (plVar1[6] != 0) {
        FUN_0038f458();
      }
      if (plVar1[9] != 0) {
        FUN_0038f458();
      }
      if (plVar1[0xc] != 0) {
        FUN_0038f458();
      }
      if (plVar1[0xf] != 0) {
        FUN_0038f458();
      }
      if (plVar1[0x12] != 0) {
        FUN_0038f458();
      }
      if (plVar1[0x15] != 0) {
        FUN_0038f458();
      }
      if (plVar1[0x18] != 0) {
        FUN_0038f458();
      }
      if (plVar1[0x1b] != 0) {
        FUN_0038f458();
      }
      if (plVar1[0x1e] != 0) {
        FUN_0038f458();
      }
      if (plVar1[0x21] != 0) {
        FUN_0038f458(plVar1 + 0x21);
      }
      if (plVar1[0x24] != 0) {
        FUN_0038f458(plVar1 + 0x24);
      }
      if (plVar1[0x27] != 0) {
        FUN_0038f458(plVar1 + 0x27);
      }
      if (plVar1[0x2a] != 0) {
        FUN_0038f458(plVar1 + 0x2a);
      }
      if (plVar1[0x2d] != 0) {
        FUN_0038f458(plVar1 + 0x2d);
      }
      param_1[1] = *(long *)(*param_1 + 0x188);
      FUN_003c86b4(*param_1,"crypto/bn/bn_ctx.c",0x132);
      plVar1 = (long *)param_1[1];
      *param_1 = (long)plVar1;
    }
    FUN_003c86b4(param_1,"crypto/bn/bn_ctx.c",0xb0);
    return;
  }
  return;
}


// ===== 003916e0  FUN_003916e0 =====

void FUN_003916e0(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  void *__dest;
  uint uVar3;
  void *__src;
  
  if ((*(int *)(param_1 + 0x34) != 0) || (*(int *)(param_1 + 0x38) != 0)) {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    return;
  }
  uVar3 = *(uint *)(param_1 + 0x28);
  uVar2 = *(undefined4 *)(param_1 + 0x30);
  if (uVar3 == *(uint *)(param_1 + 0x2c)) {
    uVar1 = 0x20;
    if (uVar3 != 0) {
      uVar1 = uVar3 * 3 >> 1;
    }
    __dest = (void *)FUN_003c83a4((ulong)uVar1 << 2,"crypto/bn/bn_ctx.c",0x10d);
    if (__dest == (void *)0x0) {
      FUN_00379868();
      FUN_0037995c("crypto/bn/bn_ctx.c",0xbb,"BN_CTX_start");
      FUN_00379a5c(3,0x6d,0);
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
      return;
    }
    __src = *(void **)(param_1 + 0x20);
    if (*(uint *)(param_1 + 0x28) != 0) {
      memcpy(__dest,__src,(ulong)*(uint *)(param_1 + 0x28) << 2);
    }
    FUN_003c86b4(__src,"crypto/bn/bn_ctx.c",0x111);
    uVar3 = *(uint *)(param_1 + 0x28);
    *(void **)(param_1 + 0x20) = __dest;
    *(uint *)(param_1 + 0x2c) = uVar1;
  }
  else {
    __dest = *(void **)(param_1 + 0x20);
  }
  *(uint *)(param_1 + 0x28) = uVar3 + 1;
  *(undefined4 *)((long)__dest + (ulong)uVar3 * 4) = uVar2;
  return;
}


// ===== 0039180c  FUN_0039180c =====

void FUN_0039180c(long param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x34) != 0) {
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
      return;
    }
    uVar5 = *(uint *)(param_1 + 0x30);
    uVar2 = *(int *)(param_1 + 0x28) - 1;
    *(uint *)(param_1 + 0x28) = uVar2;
    uVar2 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar2 * 4);
    iVar4 = uVar2 - uVar5;
    if (uVar2 < uVar5) {
      iVar1 = *(int *)(param_1 + 0x18);
      *(uint *)(param_1 + 0x18) = iVar1 - (uVar5 - uVar2);
      if (uVar5 - uVar2 != 0) {
        uVar5 = iVar1 - 1U & 0xf;
        do {
          while (uVar5 == 0) {
            *(undefined8 *)(param_1 + 8) = *(undefined8 *)(*(long *)(param_1 + 8) + 0x180);
            uVar5 = 0xf;
            bVar3 = iVar4 == -1;
            iVar4 = iVar4 + 1;
            if (bVar3) goto LAB_0039188c;
          }
          uVar5 = uVar5 - 1;
          bVar3 = iVar4 != -1;
          iVar4 = iVar4 + 1;
        } while (bVar3);
      }
    }
LAB_0039188c:
    *(uint *)(param_1 + 0x30) = uVar2;
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  return;
}


// ===== 00391898  FUN_00391898 =====

long FUN_00391898(long *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if ((*(int *)((long)param_1 + 0x34) != 0) || ((int)param_1[7] != 0)) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 3);
  if (uVar1 == *(uint *)((long)param_1 + 0x1c)) {
    uVar1 = *(uint *)((long)param_1 + 0x3c);
    lVar3 = FUN_003c83a4(400,"crypto/bn/bn_ctx.c",0x141);
    if (lVar3 == 0) goto LAB_003919c4;
    FUN_0038f578(lVar3);
    if ((uVar1 >> 3 & 1) == 0) {
      FUN_0038f578(lVar3 + 0x18);
      FUN_0038f578(lVar3 + 0x30);
      FUN_0038f578(lVar3 + 0x48);
      FUN_0038f578(lVar3 + 0x60);
      FUN_0038f578(lVar3 + 0x78);
      FUN_0038f578(lVar3 + 0x90);
      FUN_0038f578(lVar3 + 0xa8);
      FUN_0038f578(lVar3 + 0xc0);
      FUN_0038f578(lVar3 + 0xd8);
      FUN_0038f578(lVar3 + 0xf0);
      FUN_0038f578(lVar3 + 0x108);
      FUN_0038f578(lVar3 + 0x120);
      FUN_0038f578(lVar3 + 0x138);
      FUN_0038f578(lVar3 + 0x150);
      FUN_0038f578(lVar3 + 0x168);
    }
    else {
      FUN_00390944(lVar3,8);
      FUN_0038f578(lVar3 + 0x18);
      FUN_00390944(lVar3 + 0x18,8);
      FUN_0038f578(lVar3 + 0x30);
      FUN_00390944(lVar3 + 0x30,8);
      FUN_0038f578(lVar3 + 0x48);
      FUN_00390944(lVar3 + 0x48,8);
      FUN_0038f578(lVar3 + 0x60);
      FUN_00390944(lVar3 + 0x60,8);
      FUN_0038f578(lVar3 + 0x78);
      FUN_00390944(lVar3 + 0x78,8);
      FUN_0038f578(lVar3 + 0x90);
      FUN_00390944(lVar3 + 0x90,8);
      FUN_0038f578(lVar3 + 0xa8);
      FUN_00390944(lVar3 + 0xa8,8);
      FUN_0038f578(lVar3 + 0xc0);
      FUN_00390944(lVar3 + 0xc0,8);
      FUN_0038f578(lVar3 + 0xd8);
      FUN_00390944(lVar3 + 0xd8,8);
      FUN_0038f578(lVar3 + 0xf0);
      FUN_00390944(lVar3 + 0xf0,8);
      FUN_0038f578(lVar3 + 0x108);
      FUN_00390944(lVar3 + 0x108,8);
      FUN_0038f578(lVar3 + 0x120);
      FUN_00390944(lVar3 + 0x120,8);
      FUN_0038f578(lVar3 + 0x138);
      FUN_00390944(lVar3 + 0x138,8);
      FUN_0038f578(lVar3 + 0x150);
      FUN_00390944(lVar3 + 0x150,8);
      FUN_0038f578(lVar3 + 0x168);
      FUN_00390944(lVar3 + 0x168,8);
    }
    uVar2 = DAT_001b7070;
    lVar8 = param_1[3];
    lVar6 = param_1[2];
    lVar7 = *param_1;
    *(long *)(lVar3 + 0x180) = lVar6;
    *(undefined8 *)(lVar3 + 0x188) = 0;
    plVar4 = param_1;
    if (lVar7 != 0) {
      plVar4 = (long *)(lVar6 + 0x188);
    }
    *plVar4 = lVar3;
    param_1[1] = lVar3;
    param_1[2] = lVar3;
    param_1[3] = CONCAT44((int)((ulong)lVar8 >> 0x20) + (int)((ulong)uVar2 >> 0x20),
                          (int)lVar8 + (int)uVar2);
    plVar4 = param_1;
    goto LAB_00391b84;
  }
  if (uVar1 == 0) {
    lVar3 = *param_1;
LAB_003919a0:
    uVar5 = 0;
    param_1[1] = lVar3;
  }
  else {
    lVar3 = param_1[1];
    uVar5 = (ulong)uVar1 & 0xf;
    if ((int)uVar5 == 0) {
      lVar3 = *(long *)(lVar3 + 0x188);
      goto LAB_003919a0;
    }
  }
  *(uint *)(param_1 + 3) = uVar1 + 1;
  if (lVar3 == 0) {
LAB_003919c4:
    *(undefined4 *)(param_1 + 7) = 1;
    FUN_00379868();
    FUN_0037995c("crypto/bn/bn_ctx.c",0xe1,"BN_CTX_get");
    FUN_00379a5c(3,0x6d,0);
    return 0;
  }
  plVar4 = (long *)&DAT_00000018;
  lVar3 = lVar3 + uVar5 * 0x18;
LAB_00391b84:
  FUN_003907e0(plVar4,lVar3);
  lVar6 = param_1[6];
  *(uint *)(lVar3 + 0x14) = *(uint *)(lVar3 + 0x14) & 0xfffffffb;
  *(int *)(param_1 + 6) = (int)lVar6 + 1;
  return lVar3;
}


// ===== 00391bb8  FUN_00391bb8 =====

long FUN_00391bb8(long param_1)

{
  if (param_1 != 0) {
    param_1 = *(long *)(param_1 + 0x40);
  }
  return param_1;
}


// ===== 00391bc4  FUN_00391bc4 =====

long FUN_00391bc4(long param_1,long param_2,long param_3,int param_4,uint param_5)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = FUN_00393448();
  if (param_5 != 0) {
    lVar3 = (long)param_4;
    plVar2 = (long *)(param_1 + (long)param_4 * 8);
    if ((int)param_5 < 0) {
      lVar6 = *(long *)(param_3 + lVar3 * 8);
      lVar5 = -lVar6 - lVar1;
      if (lVar6 != 0) {
        lVar1 = 1;
      }
      *plVar2 = lVar5;
      if (param_5 != 0xffffffff) {
        plVar2 = (long *)(lVar3 * 8 + param_1 + 0x10);
        plVar4 = (long *)(lVar3 * 8 + param_3);
        do {
          lVar3 = -plVar4[1] - lVar1;
          if (plVar4[1] != 0) {
            lVar1 = 1;
          }
          plVar2[-1] = lVar3;
          if (param_5 == 0xfffffffe) {
            return lVar1;
          }
          lVar3 = -lVar1;
          if (plVar4[2] != 0) {
            lVar1 = 1;
          }
          *plVar2 = lVar3 - plVar4[2];
          if (0xfffffffc < param_5) {
            return lVar1;
          }
          lVar3 = -lVar1;
          if (plVar4[3] != 0) {
            lVar1 = 1;
          }
          plVar2[1] = lVar3 - plVar4[3];
          if (param_5 == 0xfffffffc) {
            return lVar1;
          }
          lVar6 = plVar4[4];
          param_5 = param_5 + 4;
          lVar3 = -lVar1;
          if (lVar6 != 0) {
            lVar1 = 1;
          }
          plVar2[2] = lVar3 - lVar6;
          plVar2 = plVar2 + 4;
          plVar4 = plVar4 + 4;
        } while (param_5 != 0xffffffff);
      }
    }
    else {
      if (lVar1 == 0) {
        plVar4 = (long *)(param_2 + lVar3 * 8);
        *plVar2 = *plVar4;
        if (param_5 == 1) {
          return 0;
        }
      }
      else {
        lVar3 = lVar3 * 8;
        do {
          plVar2 = (long *)(param_2 + lVar3);
          plVar4 = (long *)(param_1 + lVar3);
          lVar6 = *plVar2 - lVar1;
          if (*plVar2 != 0) {
            lVar1 = 0;
          }
          *plVar4 = lVar6;
          if ((int)param_5 < 2) {
            return lVar1;
          }
          lVar6 = plVar2[1] - lVar1;
          if (plVar2[1] != 0) {
            lVar1 = 0;
          }
          plVar4[1] = lVar6;
          if (param_5 == 2) {
            return lVar1;
          }
          lVar6 = plVar2[2] - lVar1;
          if (plVar2[2] != 0) {
            lVar1 = 0;
          }
          plVar4[2] = lVar6;
          if (param_5 < 4) {
            return lVar1;
          }
          lVar6 = lVar1;
          if (plVar2[3] != 0) {
            lVar6 = 0;
          }
          param_5 = param_5 - 4;
          plVar4[3] = plVar2[3] - lVar1;
          if (param_5 == 0) {
            return lVar6;
          }
          param_2 = param_2 + 0x20;
          param_1 = param_1 + 0x20;
        } while (lVar6 != 0);
        plVar4 = (long *)(param_2 + lVar3);
        plVar2 = (long *)(param_1 + lVar3);
        *plVar2 = *plVar4;
        if (param_5 == 1) {
          return 0;
        }
      }
      plVar2 = plVar2 + 2;
      do {
        plVar2[-1] = plVar4[1];
        if (param_5 == 2) {
          return 0;
        }
        *plVar2 = plVar4[2];
        if (param_5 < 4) {
          return 0;
        }
        param_5 = param_5 - 4;
        lVar1 = 0;
        plVar2[1] = plVar4[3];
        if (param_5 == 0) {
          return 0;
        }
        plVar2[2] = plVar4[4];
        plVar2 = plVar2 + 4;
        plVar4 = plVar4 + 4;
      } while (1 < param_5);
    }
  }
  return lVar1;
}


// ===== 00391e10  FUN_00391e10 =====

void FUN_00391e10(long param_1,long param_2,long param_3,uint param_4,int param_5,int param_6,
                 long param_7)

{
  undefined8 *puVar1;
  void *__s;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong *puVar10;
  long lVar11;
  ulong uVar12;
  
  uVar2 = param_4;
  if ((int)param_4 < 0) {
    uVar2 = param_4 + 1;
  }
  if ((param_4 == 8) && (param_6 == 0 && param_5 == 0)) {
    FUN_00393544(param_1,param_2,param_3);
    return;
  }
  if ((int)param_4 < 0x10) {
    FUN_003922a8(param_1,param_2,param_5 + param_4,param_3,param_6 + param_4);
    if (-1 < param_6 + param_5) {
      return;
    }
    memset((void *)(param_1 + (long)(int)(param_5 + param_4 * 2 + param_6) * 8),0,
           (ulong)(uint)-(param_6 + param_5) << 3);
    return;
  }
  uVar2 = (int)uVar2 >> 1;
  uVar12 = (ulong)uVar2;
  lVar11 = uVar12 * 8;
  iVar5 = FUN_00390560(param_2,param_2 + lVar11,uVar2 + param_5);
  iVar6 = FUN_00390560(param_3 + lVar11,param_3,uVar2 + param_6,param_6);
  bVar4 = true;
  iVar6 = iVar5 * 3 + iVar6;
  if (iVar6 == -2 || iVar6 + 2 < 0 != SCARRY4(iVar6,2)) {
    if (iVar6 == -4) {
      FUN_00391bc4(param_7,param_2 + lVar11,param_2,uVar2 + param_5,param_5);
      FUN_00391bc4(param_7 + uVar12 * 8,param_3,param_3 + lVar11,uVar2 + param_6,-param_6);
      bVar4 = true;
LAB_0039208c:
      bVar3 = true;
      goto joined_r0x00392000;
    }
    if (iVar6 != -3) {
      bVar3 = true;
      if (iVar6 != -2) goto joined_r0x00392000;
      FUN_00391bc4(param_7,param_2 + lVar11,param_2,uVar2 + param_5,param_5);
      lVar8 = param_3 + lVar11;
      lVar9 = param_3;
      iVar6 = param_6;
      goto LAB_00392084;
    }
  }
  else if (1 < iVar6) {
    if (iVar6 == 2) {
      FUN_00391bc4(param_7,param_2,param_2 + lVar11,uVar2 + param_5,-param_5);
      lVar8 = param_3;
      lVar9 = param_3 + lVar11;
      iVar6 = -param_6;
LAB_00392084:
      FUN_00391bc4(param_7 + uVar12 * 8,lVar8,lVar9,uVar2 + param_6,iVar6);
      bVar4 = false;
      goto LAB_0039208c;
    }
    if (iVar6 != 3) {
      bVar3 = true;
      if (iVar6 != 4) goto joined_r0x00392000;
      FUN_00391bc4(param_7,param_2,param_2 + lVar11,uVar2 + param_5,-param_5);
      FUN_00391bc4(param_7 + uVar12 * 8,param_3 + lVar11,param_3,uVar2 + param_6,param_6);
      goto LAB_0039208c;
    }
  }
  bVar3 = false;
joined_r0x00392000:
  if (((param_4 & 0x7ffffffe) == 8) && (param_6 == 0 && param_5 == 0)) {
    puVar1 = (undefined8 *)(param_7 + (ulong)param_4 * 8);
    if (bVar3) {
      FUN_00394898(puVar1,param_7,param_7 + uVar12 * 8);
    }
    else {
      puVar1[1] = 0;
      *puVar1 = 0;
      puVar1[3] = 0;
      puVar1[2] = 0;
      puVar1[5] = 0;
      puVar1[4] = 0;
      puVar1[7] = 0;
      puVar1[6] = 0;
    }
    FUN_00394898(param_1,param_2,param_3);
    FUN_00394898(param_1 + (ulong)param_4 * 8,param_2 + lVar11,param_3 + lVar11);
  }
  else if (((param_4 & 0x7ffffffe) == 0x10) && (param_6 == 0 && param_5 == 0)) {
    puVar1 = (undefined8 *)(param_7 + (ulong)param_4 * 8);
    if (bVar3) {
      FUN_00393544(puVar1,param_7,param_7 + uVar12 * 8);
    }
    else {
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
    }
    FUN_00393544(param_1,param_2,param_3);
    FUN_00393544(param_1 + (ulong)param_4 * 8,param_2 + lVar11,param_3 + lVar11);
  }
  else {
    __s = (void *)(param_7 + (ulong)param_4 * 8);
    lVar8 = param_7 + (ulong)(param_4 << 1) * 8;
    if (bVar3) {
      FUN_00391e10(__s,param_7,param_7 + uVar12 * 8,uVar12,0,0,lVar8);
    }
    else {
      memset(__s,0,(ulong)param_4 << 3);
    }
    FUN_00391e10(param_1,param_2,param_3,uVar12,0,0,lVar8);
    FUN_00391e10(param_1 + (ulong)param_4 * 8,param_2 + lVar11,param_3 + lVar11,uVar12,param_5,
                 param_6,lVar8);
  }
  lVar11 = (ulong)param_4 * 8;
  iVar6 = FUN_00393354(param_7,param_1,param_1 + lVar11,param_4);
  if (bVar4) {
    iVar5 = FUN_00393354(param_7 + lVar11,param_7 + lVar11,param_7,param_4);
  }
  else {
    iVar5 = FUN_00393448(param_7 + lVar11,param_7,param_7 + lVar11,param_4);
    iVar5 = -iVar5;
  }
  lVar11 = param_1 + uVar12 * 8;
  iVar7 = FUN_00393354(lVar11,lVar11,param_7 + (ulong)param_4 * 8,param_4);
  iVar7 = iVar5 + iVar6 + iVar7;
  if (iVar7 != 0) {
    lVar11 = (ulong)(uVar2 + param_4) * 8;
    uVar12 = *(ulong *)(param_1 + lVar11);
    *(ulong *)(param_1 + lVar11) = uVar12 + (long)iVar7;
    if (CARRY8(uVar12,(long)iVar7)) {
      puVar10 = (ulong *)(param_1 + (ulong)(uVar2 + param_4) * 8);
      do {
        puVar10 = puVar10 + 1;
        uVar12 = *puVar10;
        *puVar10 = uVar12 + 1;
      } while (0xfffffffffffffffe < uVar12);
    }
  }
  return;
}


// ===== 003922a8  FUN_003922a8 =====

void FUN_003922a8(long param_1,undefined8 *param_2,uint param_3,undefined8 *param_4,uint param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar2 = param_2;
  uVar3 = param_3;
  if ((int)param_3 < (int)param_5) {
    puVar2 = param_4;
    uVar3 = param_5;
    param_5 = param_3;
    param_4 = param_2;
  }
  if ((int)param_5 < 1) {
    FUN_00392ee8(param_1,puVar2,uVar3,0);
    return;
  }
  puVar1 = (undefined8 *)(param_1 + (long)(int)uVar3 * 8);
  uVar4 = FUN_00392ee8(param_1,puVar2,uVar3,*param_4);
  *puVar1 = uVar4;
  if (param_5 != 1) {
    lVar5 = 0;
    do {
      uVar4 = FUN_00392d24(param_1 + lVar5 + 8,puVar2,uVar3,
                           *(undefined8 *)((long)param_4 + lVar5 + 8));
      *(undefined8 *)((long)puVar1 + lVar5 + 8) = uVar4;
      if (param_5 == 2) {
        return;
      }
      uVar4 = FUN_00392d24(param_1 + lVar5 + 0x10,puVar2,uVar3,
                           *(undefined8 *)((long)param_4 + lVar5 + 0x10));
      *(undefined8 *)((long)puVar1 + lVar5 + 0x10) = uVar4;
      if (param_5 < 4) {
        return;
      }
      uVar4 = FUN_00392d24(param_1 + lVar5 + 0x18,puVar2,uVar3,
                           *(undefined8 *)((long)param_4 + lVar5 + 0x18));
      param_5 = param_5 - 4;
      *(undefined8 *)((long)puVar1 + lVar5 + 0x18) = uVar4;
      if (param_5 == 0) {
        return;
      }
      uVar4 = FUN_00392d24(lVar5 + 0x20 + param_1,puVar2,uVar3,
                           *(undefined8 *)((long)param_4 + lVar5 + 0x20));
      *(undefined8 *)((long)puVar1 + lVar5 + 0x20) = uVar4;
      lVar5 = lVar5 + 0x20;
    } while (1 < param_5);
  }
  return;
}


// ===== 003923f8  FUN_003923f8 =====

void FUN_003923f8(long param_1,long param_2,long param_3,uint param_4,uint param_5,uint param_6,
                 long param_7)

{
  uint uVar1;
  void *__s;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong uVar15;
  long lVar16;
  
  if ((int)param_4 < 8) {
    FUN_003922a8(param_1,param_2,param_5 + param_4,param_3,param_6 + param_4);
    return;
  }
  uVar10 = param_4 * 2;
  uVar12 = (ulong)uVar10;
  lVar16 = (ulong)param_4 * 8;
  iVar6 = param_4 - param_5;
  uVar13 = (ulong)param_4;
  iVar4 = FUN_00390560(param_2,param_2 + lVar16,param_5,iVar6);
  iVar7 = param_6 - param_4;
  iVar5 = FUN_00390560(param_3 + lVar16,param_3,param_6,iVar7);
  bVar3 = true;
  iVar5 = iVar4 * 3 + iVar5;
  uVar1 = iVar5 + 3;
  if (uVar1 < 8) {
    if ((1 << (ulong)(uVar1 & 0x1f) & 0x3cU) == 0) {
      if ((1 << (ulong)(uVar1 & 0x1f) & 3U) == 0) {
        FUN_00391bc4(param_7,param_2,param_2 + lVar16,param_5,iVar6);
        lVar9 = param_3 + lVar16;
        lVar8 = param_3;
        goto LAB_003925b8;
      }
      FUN_00391bc4(param_7,param_2 + lVar16,param_2,param_5,param_5 - param_4);
      lVar8 = param_3 + lVar16;
      lVar9 = param_3;
    }
    else {
      FUN_00391bc4(param_7,param_2,param_2 + lVar16,param_5,iVar6);
      iVar7 = param_4 - param_6;
      lVar8 = param_3;
      lVar9 = param_3 + lVar16;
    }
    FUN_00391bc4(param_7 + uVar13 * 8,lVar8,lVar9,param_6,iVar7);
    bVar3 = false;
  }
  else if (iVar5 == -4) {
    FUN_00391bc4(param_7,param_2 + lVar16,param_2,param_5,param_5 - param_4);
    iVar7 = param_4 - param_6;
    lVar8 = param_3 + lVar16;
    lVar9 = param_3;
LAB_003925b8:
    FUN_00391bc4(param_7 + uVar13 * 8,lVar9,lVar8,param_6,iVar7);
    bVar3 = true;
  }
  if (param_4 == 8) {
    FUN_00393544(param_7 + uVar12 * 8,param_7,param_7 + uVar13 * 8);
    FUN_00393544(param_1,param_2,param_3);
    FUN_003922a8(param_1 + uVar12 * 8,param_2 + lVar16,param_5,param_3 + lVar16,param_6);
    uVar1 = 0x10 - (param_6 + param_5);
    memset((void *)(param_1 + (long)(int)(param_6 + param_5 + uVar10) * 8),0,
           -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3);
    uVar15 = 0x10;
  }
  else {
    lVar8 = param_7 + (ulong)(param_4 << 2) * 8;
    FUN_00391e10(param_7 + uVar12 * 8,param_7,param_7 + uVar13 * 8,param_4,0,0,lVar8);
    FUN_00391e10(param_1,param_2,param_3,param_4,0,0,lVar8);
    uVar2 = param_4 >> 1;
    uVar1 = param_5;
    if ((int)param_5 <= (int)param_6) {
      uVar1 = param_6;
    }
    uVar15 = uVar12;
    if (uVar1 == uVar2) {
      FUN_00391e10(param_1 + uVar12 * 8,param_2 + lVar16,param_3 + lVar16,uVar2,param_5 - uVar2,
                   param_6 - uVar2,lVar8);
      param_6 = param_4 & 0x7ffffffe;
      uVar11 = (ulong)(uVar10 + param_6);
    }
    else {
      __s = (void *)(param_1 + uVar12 * 8);
      if ((int)uVar1 <= (int)uVar2) {
        memset(__s,0,uVar12 << 3);
        if ((int)param_5 < 0x10) {
          uVar11 = (ulong)uVar2;
          if ((int)param_6 < 0x10) {
            FUN_003922a8(__s,param_2 + lVar16,param_5,param_3 + lVar16,param_6);
            goto LAB_003927d8;
          }
        }
        else {
          uVar11 = (ulong)uVar2;
        }
        do {
          uVar11 = uVar11 >> 1;
          uVar10 = (uint)uVar11;
          if ((int)uVar10 < (int)uVar1) {
            FUN_003923f8(__s,param_2 + lVar16,param_3 + lVar16,uVar11,param_5 - uVar10,
                         param_6 - uVar10,lVar8);
            goto LAB_003927d8;
          }
        } while ((param_5 - uVar10 != 0) && (param_6 != uVar10));
        FUN_00391e10(__s,param_2 + lVar16,param_3 + lVar16,uVar11,param_5 - uVar10,param_6 - uVar10)
        ;
        goto LAB_003927d8;
      }
      FUN_003923f8(__s,param_2 + lVar16,param_3 + lVar16,uVar2,param_5 - uVar2,param_6 - uVar2,lVar8
                  );
      param_6 = param_6 + param_5;
      uVar11 = (ulong)(int)(param_6 + uVar10);
    }
    memset((void *)(param_1 + uVar11 * 8),0,
           -(ulong)(uVar10 - param_6 >> 0x1f) & 0xfffffff800000000 | (ulong)(uVar10 - param_6) << 3)
    ;
  }
LAB_003927d8:
  lVar16 = uVar15 * 8;
  iVar5 = FUN_00393354(param_7,param_1,param_1 + lVar16,uVar12);
  if (bVar3) {
    iVar6 = FUN_00393354(param_7 + lVar16,param_7 + lVar16,param_7,uVar12);
  }
  else {
    iVar6 = FUN_00393448(param_7 + lVar16,param_7,param_7 + lVar16,uVar12);
    iVar6 = -iVar6;
  }
  lVar16 = param_1 + uVar13 * 8;
  iVar7 = FUN_00393354(lVar16,lVar16,param_7 + uVar15 * 8,uVar12);
  iVar7 = iVar6 + iVar5 + iVar7;
  if (iVar7 != 0) {
    lVar16 = (ulong)(param_4 * 3) * 8;
    uVar12 = *(ulong *)(param_1 + lVar16);
    *(ulong *)(param_1 + lVar16) = uVar12 + (long)iVar7;
    if (CARRY8(uVar12,(long)iVar7)) {
      puVar14 = (ulong *)(param_1 + (ulong)(param_4 * 3) * 8);
      do {
        puVar14 = puVar14 + 1;
        uVar12 = *puVar14;
        *puVar14 = uVar12 + 1;
      } while (0xfffffffffffffffe < uVar12);
    }
  }
  return;
}


// ===== 00392898  FUN_00392898 =====

void FUN_00392898(long param_1,long param_2,long param_3,uint param_4,long param_5)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = param_4;
  if ((int)param_4 < 0) {
    uVar2 = param_4 + 1;
  }
  uVar3 = (ulong)(uint)((int)uVar2 >> 1);
  FUN_00391e10();
  if ((int)param_4 < 0x40) {
    uVar4 = -(ulong)((uint)((int)uVar2 >> 1) >> 0x1f) & 0xfffffff800000000 | uVar3 << 3;
    FUN_003929b0(param_5,param_2,param_3 + uVar4,uVar3);
    FUN_003929b0(param_5 + uVar4,param_2 + uVar4,param_3,uVar3);
    FUN_00393354(param_1 + uVar4,param_1 + uVar4,param_5,uVar3);
    param_5 = param_5 + uVar4;
  }
  else {
    uVar4 = uVar3 * 8;
    lVar1 = param_5 + (ulong)param_4 * 8;
    FUN_00392898(param_5,param_2,param_3 + uVar4,uVar3,lVar1);
    FUN_00393354(param_1 + uVar4,param_1 + uVar4,param_5,uVar3);
    FUN_00392898(param_5,param_2 + uVar4,param_3,uVar3,lVar1);
  }
  FUN_00393354(param_1 + uVar4,param_1 + uVar4,param_5,uVar3);
  return;
}


// ===== 003929b0  FUN_003929b0 =====

void FUN_003929b0(long param_1,undefined8 param_2,undefined8 *param_3,int param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  FUN_00392ee8(param_1,param_2,param_4,*param_3);
  if (1 < param_4) {
    param_1 = param_1 + 0x20;
    puVar2 = param_3 + 4;
    uVar3 = param_4 + 4;
    do {
      FUN_00392d24(param_1 + -0x18,param_2,uVar3 - 5,puVar2[-3]);
      if (uVar3 - 6 == 0) {
        return;
      }
      uVar1 = uVar3 - 4;
      FUN_00392d24(param_1 + -0x10,param_2,uVar3 - 6,puVar2[-2]);
      if (uVar1 < 4) {
        return;
      }
      FUN_00392d24(param_1 + -8,param_2,uVar3 - 7,puVar2[-1]);
      if (uVar3 - 8 == 0) {
        return;
      }
      FUN_00392d24(param_1,param_2,uVar3 - 8,*puVar2);
      param_1 = param_1 + 0x20;
      puVar2 = puVar2 + 4;
      uVar3 = uVar1;
    } while (5 < uVar1);
  }
  return;
}


// ===== 00392a80  FUN_00392a80 =====

undefined4 FUN_00392a80(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00392ab0();
  FUN_003903e8(param_1);
  return uVar1;
}


// ===== 00392ab0  FUN_00392ab0 =====

undefined4
FUN_00392ab0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  
  iVar2 = *(int *)(param_2 + 1);
  if ((iVar2 == 0) || (iVar3 = *(int *)(param_3 + 1), iVar3 == 0)) {
    FUN_003907e0(param_1);
    return 1;
  }
  FUN_003916e0(param_4);
  if (((param_1 != param_2) && (puVar7 = param_1, param_1 != param_3)) ||
     (puVar7 = (undefined8 *)FUN_00391898(param_4), puVar7 != (undefined8 *)0x0)) {
    if ((iVar2 == 8) && (iVar3 == 8)) {
      lVar8 = FUN_0038f924(puVar7,0x10);
      if (lVar8 != 0) {
        uVar10 = *param_2;
        uVar11 = *param_3;
        *(undefined4 *)(puVar7 + 1) = 0x10;
        FUN_00393544(*puVar7,uVar10,uVar11);
        *(uint *)(puVar7 + 2) = *(uint *)(param_3 + 2) ^ *(uint *)(param_2 + 2);
joined_r0x00392c70:
        if ((puVar7 == param_1) || (lVar8 = FUN_0038f85c(param_1,puVar7), lVar8 != 0)) {
          uVar12 = 1;
          goto LAB_00392cf8;
        }
      }
    }
    else {
      iVar1 = iVar3 + iVar2;
      if ((iVar2 < 0x10) || ((iVar3 < 0x10 || (2 < (iVar2 - iVar3) + 1U)))) {
        lVar8 = FUN_0038f924(puVar7,iVar1);
        if (lVar8 != 0) {
          uVar10 = *param_2;
          uVar11 = *param_3;
          *(int *)(puVar7 + 1) = iVar1;
          FUN_003922a8(*puVar7,uVar10,iVar2,uVar11,iVar3);
          *(uint *)(puVar7 + 2) = *(uint *)(param_3 + 2) ^ *(uint *)(param_2 + 2);
          goto joined_r0x00392c70;
        }
      }
      else {
        iVar6 = iVar3;
        if (-1 < iVar2 - iVar3) {
          iVar6 = iVar2;
        }
        iVar6 = FUN_0038f248(iVar6);
        puVar9 = (undefined8 *)FUN_00391898(param_4);
        if (puVar9 != (undefined8 *)0x0) {
          uVar4 = iVar6 - 1;
          iVar6 = 1 << (ulong)(uVar4 & 0x1f);
          iVar5 = iVar2 - iVar6;
          if ((iVar5 == 0 || iVar2 < iVar6) && (iVar3 - iVar6 == 0 || iVar3 < iVar6)) {
            iVar2 = 4 << (ulong)(uVar4 & 0x1f);
            lVar8 = FUN_0038f924(puVar9,iVar2);
            if ((lVar8 != 0) && (lVar8 = FUN_0038f924(puVar7,iVar2), lVar8 != 0)) {
              FUN_00391e10(*puVar7,*param_2,*param_3,iVar6,iVar5,iVar3 - iVar6,*puVar9);
LAB_00392cc0:
              *(int *)(puVar7 + 1) = iVar1;
              *(uint *)(puVar7 + 2) = *(uint *)(param_3 + 2) ^ *(uint *)(param_2 + 2);
              goto joined_r0x00392c70;
            }
          }
          else {
            iVar2 = 8 << (ulong)(uVar4 & 0x1f);
            lVar8 = FUN_0038f924(puVar9,iVar2);
            if ((lVar8 != 0) && (lVar8 = FUN_0038f924(puVar7,iVar2), lVar8 != 0)) {
              FUN_003923f8(*puVar7,*param_2,*param_3,iVar6,iVar5,iVar3 - iVar6,*puVar9);
              goto LAB_00392cc0;
            }
          }
        }
      }
    }
  }
  uVar12 = 0;
LAB_00392cf8:
  FUN_0039180c(param_4);
  return uVar12;
}


// ===== 00392d24  FUN_00392d24 =====

ulong FUN_00392d24(ulong *param_1,ulong *param_2,uint param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  if ((int)param_3 < 1) {
    return 0;
  }
  uVar4 = param_4 >> 0x20;
  uVar5 = param_4 & 0xffffffff;
  uVar2 = 0;
  if (3 < param_3) {
    do {
      uVar6 = *param_2;
      param_3 = param_3 - 4;
      uVar7 = uVar6 * param_4;
      uVar8 = (uVar6 & 0xffffffff) * uVar4;
      uVar9 = (uVar6 >> 0x20) * uVar5;
      uVar3 = uVar8 + uVar9;
      lVar1 = 0x100000000;
      if (!CARRY8(uVar8,uVar9)) {
        lVar1 = 0;
      }
      uVar8 = *param_1;
      uVar9 = param_1[1];
      *param_1 = uVar7 + uVar2 + uVar8;
      uVar2 = (uVar3 >> 0x20) + (uVar6 >> 0x20) * uVar4 + (ulong)CARRY8(uVar7,uVar2) + lVar1 +
              (ulong)CARRY8(uVar7 + uVar2,uVar8);
      uVar6 = param_2[1];
      if (uVar7 < uVar3 << 0x20) {
        uVar2 = uVar2 + 1;
      }
      uVar8 = uVar6 * param_4;
      uVar10 = (uVar6 & 0xffffffff) * uVar4;
      uVar7 = (uVar6 >> 0x20) * uVar5;
      uVar3 = uVar10 + uVar7;
      lVar1 = 0x100000000;
      if (!CARRY8(uVar10,uVar7)) {
        lVar1 = 0;
      }
      lVar1 = (uVar3 >> 0x20) + (uVar6 >> 0x20) * uVar4 + lVar1;
      if (uVar8 < uVar3 << 0x20) {
        lVar1 = lVar1 + 1;
      }
      param_1[1] = uVar2 + uVar8 + uVar9;
      uVar3 = lVar1 + (ulong)CARRY8(uVar2,uVar8) + (ulong)CARRY8(uVar2 + uVar8,uVar9);
      uVar6 = param_2[2];
      uVar7 = uVar6 * param_4;
      uVar8 = (uVar6 & 0xffffffff) * uVar4;
      uVar9 = (uVar6 >> 0x20) * uVar5;
      uVar2 = uVar8 + uVar9;
      lVar1 = 0x100000000;
      if (!CARRY8(uVar8,uVar9)) {
        lVar1 = 0;
      }
      uVar8 = uVar3 + uVar7;
      uVar9 = param_1[2];
      lVar1 = (uVar2 >> 0x20) + (uVar6 >> 0x20) * uVar4 + lVar1;
      if (uVar7 < uVar2 << 0x20) {
        lVar1 = lVar1 + 1;
      }
      param_1[2] = uVar8 + uVar9;
      uVar7 = lVar1 + (ulong)CARRY8(uVar3,uVar7) + (ulong)CARRY8(uVar8,uVar9);
      uVar3 = param_2[3];
      param_2 = param_2 + 4;
      uVar6 = uVar3 * param_4;
      uVar8 = (uVar3 & 0xffffffff) * uVar4;
      uVar9 = (uVar3 >> 0x20) * uVar5;
      uVar2 = uVar8 + uVar9;
      lVar1 = 0x100000000;
      if (!CARRY8(uVar8,uVar9)) {
        lVar1 = 0;
      }
      uVar8 = uVar7 + uVar6;
      lVar1 = (uVar2 >> 0x20) + (uVar3 >> 0x20) * uVar4 + lVar1;
      if (uVar6 < uVar2 << 0x20) {
        lVar1 = lVar1 + 1;
      }
      uVar2 = lVar1 + (ulong)CARRY8(uVar7,uVar6) + (ulong)CARRY8(uVar8,param_1[3]);
      param_1[3] = uVar8 + param_1[3];
      param_1 = param_1 + 4;
    } while (3 < param_3);
    if (param_3 == 0) {
      return uVar2;
    }
  }
  do {
    uVar6 = *param_2;
    uVar7 = uVar6 * param_4;
    uVar8 = (uVar6 & 0xffffffff) * uVar4;
    uVar9 = (uVar6 >> 0x20) * uVar5;
    uVar3 = uVar8 + uVar9;
    lVar1 = 0x100000000;
    if (!CARRY8(uVar8,uVar9)) {
      lVar1 = 0;
    }
    uVar8 = uVar7 + uVar2;
    uVar2 = (uVar3 >> 0x20) + (uVar6 >> 0x20) * uVar4 + (ulong)CARRY8(uVar7,uVar2) + lVar1 +
            (ulong)CARRY8(uVar8,*param_1);
    if (uVar7 < uVar3 << 0x20) {
      uVar2 = uVar2 + 1;
    }
    param_3 = param_3 - 1;
    *param_1 = uVar8 + *param_1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  } while (param_3 != 0);
  return uVar2;
}


// ===== 00392ee8  FUN_00392ee8 =====

ulong FUN_00392ee8(long *param_1,ulong *param_2,uint param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  if ((int)param_3 < 1) {
    return 0;
  }
  uVar4 = param_4 >> 0x20;
  uVar5 = param_4 & 0xffffffff;
  uVar2 = 0;
  if (3 < param_3) {
    do {
      uVar6 = *param_2;
      param_3 = param_3 - 4;
      uVar7 = uVar6 * param_4;
      uVar8 = (uVar6 & 0xffffffff) * uVar4;
      uVar9 = (uVar6 >> 0x20) * uVar5;
      uVar3 = uVar8 + uVar9;
      lVar1 = 0x100000000;
      if (!CARRY8(uVar8,uVar9)) {
        lVar1 = 0;
      }
      *param_1 = uVar7 + uVar2;
      uVar8 = param_2[1];
      uVar2 = (uVar3 >> 0x20) + (uVar6 >> 0x20) * uVar4 + (ulong)CARRY8(uVar7,uVar2) + lVar1;
      uVar6 = uVar8 * param_4;
      if (uVar7 < uVar3 << 0x20) {
        uVar2 = uVar2 + 1;
      }
      uVar9 = (uVar8 & 0xffffffff) * uVar4;
      uVar7 = (uVar8 >> 0x20) * uVar5;
      uVar3 = uVar9 + uVar7;
      lVar1 = 0x100000000;
      if (!CARRY8(uVar9,uVar7)) {
        lVar1 = 0;
      }
      param_1[1] = uVar2 + uVar6;
      uVar7 = param_2[2];
      uVar9 = uVar7 * param_4;
      uVar3 = (uVar3 >> 0x20) + (uVar8 >> 0x20) * uVar4 + lVar1 + (ulong)(uVar6 < uVar3 << 0x20) +
              (ulong)CARRY8(uVar2,uVar6);
      uVar6 = (uVar7 & 0xffffffff) * uVar4;
      uVar8 = (uVar7 >> 0x20) * uVar5;
      uVar2 = uVar6 + uVar8;
      lVar1 = 0x100000000;
      if (!CARRY8(uVar6,uVar8)) {
        lVar1 = 0;
      }
      param_1[2] = uVar3 + uVar9;
      uVar6 = param_2[3];
      param_2 = param_2 + 4;
      uVar8 = uVar6 * param_4;
      uVar3 = (uVar2 >> 0x20) + (uVar7 >> 0x20) * uVar4 + lVar1 + (ulong)(uVar9 < uVar2 << 0x20) +
              (ulong)CARRY8(uVar3,uVar9);
      uVar7 = (uVar6 & 0xffffffff) * uVar4;
      uVar9 = (uVar6 >> 0x20) * uVar5;
      uVar2 = uVar7 + uVar9;
      lVar1 = 0x100000000;
      if (!CARRY8(uVar7,uVar9)) {
        lVar1 = 0;
      }
      param_1[3] = uVar3 + uVar8;
      param_1 = param_1 + 4;
      uVar2 = (uVar2 >> 0x20) + (uVar6 >> 0x20) * uVar4 + lVar1 + (ulong)(uVar8 < uVar2 << 0x20) +
              (ulong)CARRY8(uVar3,uVar8);
    } while (3 < param_3);
    if (param_3 == 0) {
      return uVar2;
    }
  }
  do {
    uVar6 = *param_2;
    uVar7 = uVar6 * param_4;
    uVar8 = (uVar6 & 0xffffffff) * uVar4;
    uVar9 = (uVar6 >> 0x20) * uVar5;
    uVar3 = uVar8 + uVar9;
    lVar1 = 0x100000000;
    if (!CARRY8(uVar8,uVar9)) {
      lVar1 = 0;
    }
    *param_1 = uVar7 + uVar2;
    uVar2 = (uVar3 >> 0x20) + (uVar6 >> 0x20) * uVar4 + (ulong)CARRY8(uVar7,uVar2) + lVar1;
    if (uVar7 < uVar3 << 0x20) {
      uVar2 = uVar2 + 1;
    }
    param_3 = param_3 - 1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  } while (param_3 != 0);
  return uVar2;
}


// ===== 00393080  FUN_00393080 =====

void FUN_00393080(long *param_1,ulong *param_2,uint param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (0 < (int)param_3) {
    if (3 < param_3) {
      do {
        uVar1 = *param_2;
        param_3 = param_3 - 4;
        uVar3 = uVar1 >> 0x20;
        uVar2 = (uVar1 & 0xffffffff) * (uVar1 & 0xffffffff);
        uVar4 = (uVar1 & 0xffffffff) * uVar3;
        uVar1 = uVar4 << 0x21;
        *param_1 = uVar2 + uVar1;
        param_1[1] = (uVar4 >> 0x1f) + uVar3 * uVar3 + (ulong)CARRY8(uVar2,uVar1);
        uVar1 = param_2[1];
        uVar3 = uVar1 >> 0x20;
        uVar2 = (uVar1 & 0xffffffff) * (uVar1 & 0xffffffff);
        uVar4 = (uVar1 & 0xffffffff) * uVar3;
        uVar1 = uVar4 << 0x21;
        param_1[2] = uVar2 + uVar1;
        param_1[3] = (uVar4 >> 0x1f) + uVar3 * uVar3 + (ulong)CARRY8(uVar2,uVar1);
        uVar1 = param_2[2];
        uVar3 = uVar1 >> 0x20;
        uVar2 = (uVar1 & 0xffffffff) * (uVar1 & 0xffffffff);
        uVar4 = (uVar1 & 0xffffffff) * uVar3;
        uVar1 = uVar4 << 0x21;
        param_1[4] = uVar2 + uVar1;
        param_1[5] = (uVar4 >> 0x1f) + uVar3 * uVar3 + (ulong)CARRY8(uVar2,uVar1);
        uVar1 = param_2[3];
        param_2 = param_2 + 4;
        uVar3 = uVar1 >> 0x20;
        uVar2 = (uVar1 & 0xffffffff) * (uVar1 & 0xffffffff);
        uVar4 = (uVar1 & 0xffffffff) * uVar3;
        uVar1 = uVar4 << 0x21;
        param_1[6] = uVar2 + uVar1;
        param_1[7] = (uVar4 >> 0x1f) + uVar3 * uVar3 + (ulong)CARRY8(uVar2,uVar1);
        param_1 = param_1 + 8;
      } while (3 < param_3);
      if (param_3 == 0) {
        return;
      }
    }
    do {
      uVar1 = *param_2;
      uVar3 = uVar1 >> 0x20;
      uVar2 = (uVar1 & 0xffffffff) * (uVar1 & 0xffffffff);
      uVar4 = (uVar1 & 0xffffffff) * uVar3;
      uVar1 = uVar4 << 0x21;
      param_3 = param_3 - 1;
      *param_1 = uVar2 + uVar1;
      param_1[1] = (uVar4 >> 0x1f) + uVar3 * uVar3 + (ulong)CARRY8(uVar2,uVar1);
      param_1 = param_1 + 2;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return;
}


// ===== 0039317c  FUN_0039317c =====

ulong FUN_0039317c(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  int iVar16;
  
  if (param_3 == 0) {
    return 0xffffffffffffffff;
  }
  uVar4 = FUN_0038f248(param_3);
  uVar9 = 0;
  if (param_3 <= param_1) {
    uVar9 = param_3;
  }
  uVar3 = (uint)uVar4;
  param_1 = param_1 - uVar9;
  if (uVar3 != 0x40) {
    uVar9 = param_2 >> (uVar4 & 0x3f);
    param_3 = param_3 << ((ulong)-uVar3 & 0x3f);
    param_2 = param_2 << ((ulong)-uVar3 & 0x3f);
    param_1 = param_1 * 2 << ((ulong)~uVar3 & 0x3f) | uVar9;
  }
  uVar9 = param_3 >> 0x20;
  uVar4 = param_3 & 0xffffffff;
  if (uVar9 == param_1 >> 0x20) {
    uVar10 = 0xffffffff;
    lVar11 = uVar9 * 0xffffffff;
    uVar12 = uVar4 * 0xffffffff;
    lVar13 = uVar9 * -0xffffffff;
  }
  else {
    uVar10 = 0;
    if (uVar9 != 0) {
      uVar10 = param_1 / uVar9;
    }
    lVar11 = uVar10 * uVar9;
    uVar12 = uVar10 * uVar4;
    lVar13 = -lVar11;
  }
  if ((param_1 + lVar13 >> 0x20 == 0) && ((param_2 >> 0x20 | param_1 + lVar13 << 0x20) < uVar12)) {
    lVar5 = uVar10 - 1;
    lVar13 = 0;
    lVar6 = 0;
    do {
      uVar1 = (param_1 - uVar9 * lVar5) + lVar13;
      uVar10 = uVar10 - 1;
      lVar7 = lVar6 - uVar4;
      lVar13 = lVar13 + uVar9;
      if (uVar1 >> 0x20 != 0) break;
      uVar8 = lVar5 * uVar4 + lVar6;
      lVar6 = lVar7;
    } while ((param_2 >> 0x20 | uVar1 << 0x20) < uVar8);
    uVar12 = uVar12 + lVar7;
    lVar11 = lVar11 - lVar13;
  }
  uVar1 = lVar11 + (uVar12 >> 0x20);
  if (param_2 < uVar12 << 0x20) {
    uVar1 = uVar1 + 1;
  }
  iVar16 = (int)param_3;
  if (param_1 >= uVar1) {
    iVar16 = 0;
  }
  uVar8 = (ulong)(uint)(((int)param_1 - (int)uVar1) + iVar16);
  uVar12 = param_2 - (uVar12 << 0x20) >> 0x20 | uVar8 << 0x20;
  if (uVar9 == uVar8) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = 0;
    if (uVar9 != 0) {
      uVar8 = uVar12 / uVar9;
    }
  }
  lVar13 = uVar8 * uVar9;
  uVar14 = uVar8 * uVar4;
  uVar15 = param_2 & 0xffffffff | uVar12 - lVar13 << 0x20;
  if (uVar12 - lVar13 >> 0x20 == 0 && (uVar15 <= uVar14 && uVar14 - uVar15 != 0)) {
    lVar5 = uVar8 - 1;
    lVar11 = 0;
    lVar6 = 0;
    do {
      uVar15 = (uVar12 - uVar9 * lVar5) + lVar11;
      uVar8 = uVar8 - 1;
      lVar7 = lVar6 - uVar4;
      lVar11 = lVar11 + uVar9;
      if (uVar15 >> 0x20 != 0) break;
      uVar2 = lVar5 * uVar4 + lVar6;
      lVar6 = lVar7;
    } while ((param_2 & 0xffffffff | uVar15 << 0x20) < uVar2);
    uVar14 = uVar14 + lVar7;
    lVar13 = lVar13 - lVar11;
  }
  uVar9 = lVar13 + (uVar14 >> 0x20);
  if (param_2 << 0x20 < uVar14 << 0x20) {
    uVar9 = uVar9 + 1;
  }
  return uVar8 - (uVar12 < uVar9) | (ulong)((int)uVar10 - (uint)(param_1 < uVar1)) << 0x20;
}


// ===== 00393354  FUN_00393354 =====

ulong FUN_00393354(long *param_1,ulong *param_2,ulong *param_3,uint param_4)

{
  ulong *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if ((int)param_4 < 1) {
    return 0;
  }
  if (param_4 < 4) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    do {
      uVar4 = *param_2;
      uVar5 = *param_3;
      param_4 = param_4 - 4;
      uVar6 = uVar4 + uVar3;
      *param_1 = uVar6 + uVar5;
      uVar7 = param_3[1];
      uVar3 = param_2[1] + (ulong)CARRY8(uVar6,uVar5) + (ulong)CARRY8(uVar4,uVar3);
      uVar2 = nzcv;
      param_1[1] = uVar3 + uVar7;
      uVar6 = param_3[2];
      nzcv = uVar2;
      uVar3 = param_2[2] + (ulong)CARRY8(uVar3,uVar7) + (ulong)CARRY8(uVar3,uVar7);
      uVar2 = nzcv;
      param_1[2] = uVar3 + uVar6;
      puVar1 = param_2 + 3;
      uVar7 = param_3[3];
      nzcv = uVar2;
      param_2 = param_2 + 4;
      param_3 = param_3 + 4;
      uVar6 = *puVar1 + (ulong)CARRY8(uVar3,uVar6) + (ulong)CARRY8(uVar3,uVar6);
      uVar2 = nzcv;
      uVar3 = (ulong)CARRY8(uVar6,uVar7);
      nzcv = uVar2;
      param_1[3] = uVar6 + uVar7;
      if (CARRY8(uVar6,uVar7)) {
        uVar3 = uVar3 + 1;
      }
      param_1 = param_1 + 4;
    } while (3 < param_4);
    if (param_4 == 0) {
      return uVar3;
    }
  }
  do {
    uVar6 = *param_2 + uVar3;
    uVar7 = (ulong)CARRY8(uVar6,*param_3);
    if (CARRY8(*param_2,uVar3)) {
      uVar7 = uVar7 + 1;
    }
    param_4 = param_4 - 1;
    *param_1 = uVar6 + *param_3;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    param_3 = param_3 + 1;
    uVar3 = uVar7;
  } while (param_4 != 0);
  return uVar7;
}


// ===== 00393448  FUN_00393448 =====

uint FUN_00393448(long *param_1,ulong *param_2,ulong *param_3,uint param_4)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if ((int)param_4 < 1) {
    return 0;
  }
  if (param_4 < 4) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    do {
      uVar2 = *param_2;
      uVar5 = *param_3;
      param_4 = param_4 - 4;
      uVar4 = uVar2 - uVar1;
      *param_1 = uVar4 - uVar5;
      uVar6 = param_2[1];
      uVar3 = param_3[1];
      uVar4 = (-(ulong)(uVar4 < uVar5) - (ulong)(uVar2 < uVar1)) + uVar6;
      param_1[1] = uVar4 - uVar3;
      uVar2 = param_2[2];
      uVar4 = (uVar2 - (uVar4 < uVar3)) - (ulong)(uVar6 < uVar4);
      uVar5 = param_3[2];
      param_1[2] = uVar4 - uVar5;
      uVar3 = param_2[3];
      uVar6 = param_3[3];
      param_2 = param_2 + 4;
      param_3 = param_3 + 4;
      uVar4 = (uVar3 - (uVar4 < uVar5)) - (ulong)(uVar2 < uVar4);
      param_1[3] = uVar4 - uVar6;
      uVar1 = (uint)(uVar4 < uVar6);
      if (uVar3 < uVar4) {
        uVar1 = uVar1 + 1;
      }
      param_1 = param_1 + 4;
    } while (3 < param_4);
    if (param_4 == 0) {
      return uVar1;
    }
  }
  do {
    uVar4 = *param_2 - (ulong)uVar1;
    uVar1 = (uint)(*param_2 < (ulong)uVar1);
    if (uVar4 < *param_3) {
      uVar1 = uVar1 + 1;
    }
    param_4 = param_4 - 1;
    *param_1 = uVar4 - *param_3;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    param_3 = param_3 + 1;
  } while (param_4 != 0);
  return uVar1;
}


// ===== 00393544  FUN_00393544 =====

void FUN_00393544(ulong *param_1,ulong *param_2,ulong *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
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
  ulong uVar23;
  ulong uVar24;
  
  uVar7 = *param_2;
  uVar11 = *param_3;
  uVar22 = (uVar11 >> 0x20) * (uVar7 & 0xffffffff);
  uVar12 = (uVar11 & 0xffffffff) * (uVar7 >> 0x20);
  *param_1 = uVar11 * uVar7;
  uVar3 = *param_3;
  uVar9 = param_3[1];
  uVar18 = uVar22 + uVar12;
  uVar14 = *param_2;
  uVar16 = param_2[1];
  uVar8 = uVar9 * uVar14;
  uVar15 = (uVar9 >> 0x20) * (uVar14 & 0xffffffff);
  uVar4 = uVar3 * uVar16;
  uVar13 = (uVar9 & 0xffffffff) * (uVar14 >> 0x20);
  uVar6 = (uVar3 >> 0x20) * (uVar16 & 0xffffffff);
  lVar1 = 0x100000000;
  if (!CARRY8(uVar22,uVar12)) {
    lVar1 = 0;
  }
  uVar22 = (uVar3 & 0xffffffff) * (uVar16 >> 0x20);
  uVar12 = uVar15 + uVar13;
  lVar2 = 0x100000000;
  if (!CARRY8(uVar15,uVar13)) {
    lVar2 = 0;
  }
  uVar13 = (uVar18 >> 0x20) + (uVar11 >> 0x20) * (uVar7 >> 0x20) + uVar8 + lVar1;
  if (uVar11 * uVar7 < uVar18 << 0x20) {
    uVar13 = uVar13 + 1;
  }
  uVar18 = uVar6 + uVar22;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar6,uVar22)) {
    lVar1 = 0;
  }
  param_1[1] = uVar13 + uVar4;
  uVar14 = (uVar12 >> 0x20) + (uVar9 >> 0x20) * (uVar14 >> 0x20) + lVar2;
  uVar7 = param_2[2];
  uVar9 = *param_3;
  uVar6 = param_3[1];
  uVar18 = (uVar18 >> 0x20) + (uVar3 >> 0x20) * (uVar16 >> 0x20) + lVar1 +
           (ulong)(uVar4 < uVar18 << 0x20) + (ulong)CARRY8(uVar13,uVar4);
  if (uVar8 < uVar12 << 0x20) {
    uVar14 = uVar14 + 1;
  }
  uVar3 = uVar9 * uVar7;
  if (uVar13 < uVar8) {
    uVar14 = uVar14 + 1;
  }
  uVar13 = (uVar9 >> 0x20) * (uVar7 & 0xffffffff);
  uVar12 = (uVar9 & 0xffffffff) * (uVar7 >> 0x20);
  uVar4 = *param_2;
  uVar8 = param_2[1];
  uVar16 = uVar13 + uVar12;
  uVar11 = uVar6 * uVar8;
  uVar15 = param_3[2];
  uVar22 = (uVar6 >> 0x20) * (uVar8 & 0xffffffff);
  lVar1 = 0x100000000;
  if (!CARRY8(uVar13,uVar12)) {
    lVar1 = 0;
  }
  uVar13 = (uVar6 & 0xffffffff) * (uVar8 >> 0x20);
  uVar12 = uVar14 + uVar18 + uVar3;
  uVar9 = (uVar16 >> 0x20) + (uVar9 >> 0x20) * (uVar7 >> 0x20) + lVar1 +
          (ulong)(uVar3 < uVar16 << 0x20) + (ulong)CARRY8(uVar14 + uVar18,uVar3);
  uVar16 = uVar9 + CARRY8(uVar14,uVar18);
  uVar7 = uVar15 * uVar4;
  uVar3 = uVar22 + uVar13;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar22,uVar13)) {
    lVar1 = 0;
  }
  uVar22 = (uVar15 >> 0x20) * (uVar4 & 0xffffffff);
  uVar20 = (uVar15 & 0xffffffff) * (uVar4 >> 0x20);
  uVar13 = uVar12 + uVar11;
  uVar8 = (uVar3 >> 0x20) + (uVar6 >> 0x20) * (uVar8 >> 0x20) + lVar1 +
          (ulong)(uVar11 < uVar3 << 0x20) + (ulong)CARRY8(uVar12,uVar11);
  uVar3 = uVar16 + uVar8;
  uVar6 = uVar22 + uVar20;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar22,uVar20)) {
    lVar1 = 0;
  }
  param_1[2] = uVar13 + uVar7;
  uVar11 = param_3[2];
  uVar22 = param_3[3];
  uVar12 = *param_2;
  uVar20 = param_2[1];
  uVar7 = (uVar6 >> 0x20) + (uVar15 >> 0x20) * (uVar4 >> 0x20) + lVar1 +
          (ulong)(uVar7 < uVar6 << 0x20) + (ulong)CARRY8(uVar13,uVar7);
  uVar6 = uVar22 * uVar12;
  uVar13 = (uVar22 >> 0x20) * (uVar12 & 0xffffffff);
  uVar4 = uVar3 + uVar7;
  uVar15 = (uVar22 & 0xffffffff) * (uVar12 >> 0x20);
  uVar3 = (ulong)CARRY8(uVar16,uVar8) + (ulong)CARRY8(uVar9,(ulong)CARRY8(uVar14,uVar18)) +
          (ulong)CARRY8(uVar3,uVar7);
  uVar14 = uVar11 * uVar20;
  uVar18 = uVar13 + uVar15;
  uVar16 = (uVar11 >> 0x20) * (uVar20 & 0xffffffff);
  uVar9 = (uVar11 & 0xffffffff) * (uVar20 >> 0x20);
  lVar1 = 0x100000000;
  if (!CARRY8(uVar13,uVar15)) {
    lVar1 = 0;
  }
  uVar7 = uVar4 + uVar6;
  uVar8 = param_2[2];
  uVar13 = param_2[3];
  uVar22 = (uVar18 >> 0x20) + (uVar22 >> 0x20) * (uVar12 >> 0x20) + lVar1 +
           (ulong)(uVar6 < uVar18 << 0x20) + (ulong)CARRY8(uVar4,uVar6);
  uVar6 = *param_3;
  uVar12 = param_3[1];
  uVar18 = uVar3 + uVar22;
  uVar4 = uVar16 + uVar9;
  uVar15 = uVar12 * uVar8;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar16,uVar9)) {
    lVar1 = 0;
  }
  uVar9 = uVar7 + uVar14;
  uVar19 = (uVar12 >> 0x20) * (uVar8 & 0xffffffff);
  uVar16 = (uVar4 >> 0x20) + (uVar11 >> 0x20) * (uVar20 >> 0x20) + lVar1 +
           (ulong)(uVar14 < uVar4 << 0x20) + (ulong)CARRY8(uVar7,uVar14);
  uVar4 = (uVar12 & 0xffffffff) * (uVar8 >> 0x20);
  uVar14 = uVar18 + uVar16;
  uVar18 = (ulong)CARRY8(uVar18,uVar16);
  uVar16 = uVar6 * uVar13;
  if (CARRY8(uVar3,uVar22)) {
    uVar18 = uVar18 + 1;
  }
  uVar3 = uVar19 + uVar4;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar19,uVar4)) {
    lVar1 = 0;
  }
  uVar11 = (uVar6 >> 0x20) * (uVar13 & 0xffffffff);
  uVar22 = (uVar6 & 0xffffffff) * (uVar13 >> 0x20);
  uVar4 = uVar9 + uVar15;
  uVar7 = (uVar3 >> 0x20) + (uVar12 >> 0x20) * (uVar8 >> 0x20) + lVar1 +
          (ulong)(uVar15 < uVar3 << 0x20) + (ulong)CARRY8(uVar9,uVar15);
  uVar3 = uVar14 + uVar7;
  uVar9 = uVar11 + uVar22;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar11,uVar22)) {
    lVar1 = 0;
  }
  param_1[3] = uVar4 + uVar16;
  uVar8 = *param_3;
  uVar11 = param_3[1];
  uVar22 = param_2[4];
  uVar13 = (uVar9 >> 0x20) + (uVar6 >> 0x20) * (uVar13 >> 0x20) + lVar1 +
           (ulong)(uVar16 < uVar9 << 0x20) + (ulong)CARRY8(uVar4,uVar16);
  uVar12 = uVar8 * uVar22;
  uVar9 = uVar13 + uVar3;
  uVar6 = (uVar8 >> 0x20) * (uVar22 & 0xffffffff);
  uVar16 = param_2[2];
  uVar4 = param_2[3];
  uVar15 = (uVar8 & 0xffffffff) * (uVar22 >> 0x20);
  uVar3 = uVar18 + CARRY8(uVar14,uVar7) + (ulong)CARRY8(uVar13,uVar3);
  uVar7 = uVar11 * uVar4;
  uVar18 = uVar6 + uVar15;
  uVar14 = (uVar11 >> 0x20) * (uVar4 & 0xffffffff);
  lVar1 = 0x100000000;
  if (!CARRY8(uVar6,uVar15)) {
    lVar1 = 0;
  }
  uVar20 = (uVar11 & 0xffffffff) * (uVar4 >> 0x20);
  uVar6 = uVar9 + uVar12;
  uVar13 = param_3[2];
  uVar15 = param_3[3];
  uVar12 = (uVar18 >> 0x20) + (uVar8 >> 0x20) * (uVar22 >> 0x20) + lVar1 +
           (ulong)(uVar12 < uVar18 << 0x20) + (ulong)CARRY8(uVar9,uVar12);
  uVar18 = uVar3 + uVar12;
  uVar9 = uVar14 + uVar20;
  uVar8 = uVar13 * uVar16;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar14,uVar20)) {
    lVar1 = 0;
  }
  uVar19 = (uVar13 >> 0x20) * (uVar16 & 0xffffffff);
  uVar10 = (uVar13 & 0xffffffff) * (uVar16 >> 0x20);
  uVar14 = uVar6 + uVar7;
  uVar22 = *param_2;
  uVar20 = param_2[1];
  uVar6 = (uVar9 >> 0x20) + (uVar11 >> 0x20) * (uVar4 >> 0x20) + lVar1 +
          (ulong)(uVar7 < uVar9 << 0x20) + (ulong)CARRY8(uVar6,uVar7);
  uVar9 = uVar18 + uVar6;
  uVar4 = uVar19 + uVar10;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar19,uVar10)) {
    lVar1 = 0;
  }
  uVar19 = uVar15 * uVar20;
  uVar11 = param_3[4];
  uVar10 = (uVar15 >> 0x20) * (uVar20 & 0xffffffff);
  uVar7 = uVar14 + uVar8;
  uVar23 = (uVar15 & 0xffffffff) * (uVar20 >> 0x20);
  uVar8 = (uVar4 >> 0x20) + (uVar13 >> 0x20) * (uVar16 >> 0x20) + lVar1 +
          (ulong)(uVar8 < uVar4 << 0x20) + (ulong)CARRY8(uVar14,uVar8);
  uVar4 = uVar11 * uVar22;
  uVar14 = uVar9 + uVar8;
  uVar16 = uVar10 + uVar23;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar10,uVar23)) {
    lVar1 = 0;
  }
  uVar10 = (uVar11 >> 0x20) * (uVar22 & 0xffffffff);
  uVar23 = (uVar11 & 0xffffffff) * (uVar22 >> 0x20);
  uVar13 = uVar7 + uVar19;
  uVar15 = (uVar16 >> 0x20) + (uVar15 >> 0x20) * (uVar20 >> 0x20) + lVar1 +
           (ulong)(uVar19 < uVar16 << 0x20) + (ulong)CARRY8(uVar7,uVar19);
  uVar16 = uVar15 + uVar14;
  uVar7 = uVar10 + uVar23;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar10,uVar23)) {
    lVar1 = 0;
  }
  param_1[4] = uVar13 + uVar4;
  uVar20 = *param_2;
  uVar10 = param_2[1];
  uVar19 = param_3[4];
  uVar23 = param_3[5];
  uVar11 = (uVar7 >> 0x20) + (uVar11 >> 0x20) * (uVar22 >> 0x20) + lVar1 +
           (ulong)(uVar4 < uVar7 << 0x20) + (ulong)CARRY8(uVar13,uVar4);
  uVar4 = uVar11 + uVar16;
  uVar7 = uVar23 * uVar20;
  uVar14 = (ulong)CARRY8(uVar18,uVar6) + (ulong)CARRY8(uVar3,uVar12) + (ulong)CARRY8(uVar9,uVar8) +
           (ulong)CARRY8(uVar15,uVar14) + (ulong)CARRY8(uVar11,uVar16);
  uVar3 = (uVar23 >> 0x20) * (uVar20 & 0xffffffff);
  uVar6 = (uVar23 & 0xffffffff) * (uVar20 >> 0x20);
  uVar9 = uVar19 * uVar10;
  uVar18 = uVar3 + uVar6;
  uVar16 = (uVar19 >> 0x20) * (uVar10 & 0xffffffff);
  lVar1 = 0x100000000;
  if (!CARRY8(uVar3,uVar6)) {
    lVar1 = 0;
  }
  uVar13 = (uVar19 & 0xffffffff) * (uVar10 >> 0x20);
  uVar3 = uVar4 + uVar7;
  uVar6 = param_3[2];
  uVar8 = param_3[3];
  uVar12 = (uVar18 >> 0x20) + (uVar23 >> 0x20) * (uVar20 >> 0x20) + lVar1 +
           (ulong)(uVar7 < uVar18 << 0x20) + (ulong)CARRY8(uVar4,uVar7);
  uVar7 = param_2[2];
  uVar11 = param_2[3];
  uVar18 = uVar14 + uVar12;
  uVar4 = uVar16 + uVar13;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar16,uVar13)) {
    lVar1 = 0;
  }
  uVar16 = uVar3 + uVar9;
  uVar15 = (uVar8 >> 0x20) * (uVar7 & 0xffffffff);
  uVar13 = (uVar8 & 0xffffffff) * (uVar7 >> 0x20);
  uVar9 = (uVar4 >> 0x20) + (uVar19 >> 0x20) * (uVar10 >> 0x20) + lVar1 +
          (ulong)(uVar9 < uVar4 << 0x20) + (ulong)CARRY8(uVar3,uVar9);
  uVar4 = uVar8 * uVar7;
  uVar3 = uVar18 + uVar9;
  uVar18 = (ulong)CARRY8(uVar18,uVar9);
  if (CARRY8(uVar14,uVar12)) {
    uVar18 = uVar18 + 1;
  }
  uVar14 = uVar15 + uVar13;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar15,uVar13)) {
    lVar1 = 0;
  }
  uVar13 = (uVar6 >> 0x20) * (uVar11 & 0xffffffff);
  uVar15 = (uVar6 & 0xffffffff) * (uVar11 >> 0x20);
  uVar9 = uVar16 + uVar4;
  uVar22 = uVar6 * uVar11;
  uVar20 = (uVar14 >> 0x20) + (uVar8 >> 0x20) * (uVar7 >> 0x20) + lVar1 +
           (ulong)(uVar4 < uVar14 << 0x20) + (ulong)CARRY8(uVar16,uVar4);
  uVar4 = param_2[4];
  uVar8 = param_2[5];
  uVar14 = uVar3 + uVar20;
  uVar7 = *param_3;
  uVar12 = param_3[1];
  uVar16 = uVar13 + uVar15;
  uVar19 = uVar12 * uVar4;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar13,uVar15)) {
    lVar1 = 0;
  }
  uVar15 = (uVar12 >> 0x20) * (uVar4 & 0xffffffff);
  uVar13 = uVar9 + uVar22;
  uVar10 = (uVar12 & 0xffffffff) * (uVar4 >> 0x20);
  uVar6 = (uVar16 >> 0x20) + (uVar6 >> 0x20) * (uVar11 >> 0x20) + lVar1 +
          (ulong)(uVar22 < uVar16 << 0x20) + (ulong)CARRY8(uVar9,uVar22);
  uVar11 = uVar7 * uVar8;
  uVar9 = uVar6 + uVar14;
  uVar16 = uVar15 + uVar10;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar15,uVar10)) {
    lVar1 = 0;
  }
  uVar22 = (uVar7 >> 0x20) * (uVar8 & 0xffffffff);
  uVar15 = uVar13 + uVar19;
  uVar10 = (uVar7 & 0xffffffff) * (uVar8 >> 0x20);
  uVar12 = (uVar16 >> 0x20) + (uVar12 >> 0x20) * (uVar4 >> 0x20) + lVar1 +
           (ulong)(uVar19 < uVar16 << 0x20) + (ulong)CARRY8(uVar13,uVar19);
  uVar16 = uVar12 + uVar9;
  uVar4 = uVar22 + uVar10;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar22,uVar10)) {
    lVar1 = 0;
  }
  param_1[5] = uVar15 + uVar11;
  uVar13 = param_2[5];
  uVar19 = param_2[6];
  uVar22 = *param_3;
  uVar10 = param_3[1];
  uVar7 = (uVar4 >> 0x20) + (uVar7 >> 0x20) * (uVar8 >> 0x20) + lVar1 + (ulong)CARRY8(uVar15,uVar11)
  ;
  uVar8 = param_2[4];
  if (uVar11 < uVar4 << 0x20) {
    uVar7 = uVar7 + 1;
  }
  uVar15 = uVar22 * uVar19;
  uVar4 = uVar7 + uVar16;
  uVar11 = (uVar22 >> 0x20) * (uVar19 & 0xffffffff);
  uVar9 = uVar18 + CARRY8(uVar3,uVar20) + (ulong)CARRY8(uVar6,uVar14) + (ulong)CARRY8(uVar12,uVar9)
          + (ulong)CARRY8(uVar7,uVar16);
  uVar16 = (uVar22 & 0xffffffff) * (uVar19 >> 0x20);
  uVar14 = uVar10 * uVar13;
  uVar18 = uVar11 + uVar16;
  uVar3 = (uVar10 >> 0x20) * (uVar13 & 0xffffffff);
  lVar1 = 0x100000000;
  if (!CARRY8(uVar11,uVar16)) {
    lVar1 = 0;
  }
  uVar16 = uVar4 + uVar15;
  uVar20 = (uVar10 & 0xffffffff) * (uVar13 >> 0x20);
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  uVar12 = (uVar18 >> 0x20) + (uVar22 >> 0x20) * (uVar19 >> 0x20) + lVar1 +
           (ulong)(uVar15 < uVar18 << 0x20) + (ulong)CARRY8(uVar4,uVar15);
  uVar11 = uVar6 * uVar8;
  uVar18 = uVar9 + uVar12;
  uVar4 = uVar3 + uVar20;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar3,uVar20)) {
    lVar1 = 0;
  }
  uVar20 = (uVar6 >> 0x20) * (uVar8 & 0xffffffff);
  uVar19 = (uVar6 & 0xffffffff) * (uVar8 >> 0x20);
  uVar3 = uVar16 + uVar14;
  uVar15 = param_2[2];
  uVar22 = param_2[3];
  uVar13 = (uVar4 >> 0x20) + (uVar10 >> 0x20) * (uVar13 >> 0x20) + lVar1 +
           (ulong)(uVar14 < uVar4 << 0x20) + (ulong)CARRY8(uVar16,uVar14);
  uVar14 = uVar18 + uVar13;
  uVar16 = uVar20 + uVar19;
  uVar4 = uVar7 * uVar22;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar20,uVar19)) {
    lVar1 = 0;
  }
  uVar21 = (uVar7 >> 0x20) * (uVar22 & 0xffffffff);
  uVar23 = (uVar7 & 0xffffffff) * (uVar22 >> 0x20);
  uVar20 = uVar3 + uVar11;
  uVar19 = param_3[4];
  uVar10 = param_3[5];
  uVar8 = (uVar16 >> 0x20) + (uVar6 >> 0x20) * (uVar8 >> 0x20) + lVar1 +
          (ulong)(uVar11 < uVar16 << 0x20) + (ulong)CARRY8(uVar3,uVar11);
  uVar3 = uVar14 + uVar8;
  uVar16 = uVar21 + uVar23;
  uVar6 = uVar19 * uVar15;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar21,uVar23)) {
    lVar1 = 0;
  }
  uVar5 = (uVar19 >> 0x20) * (uVar15 & 0xffffffff);
  uVar17 = (uVar19 & 0xffffffff) * (uVar15 >> 0x20);
  uVar11 = uVar20 + uVar4;
  uVar23 = *param_2;
  uVar21 = param_2[1];
  uVar22 = (uVar16 >> 0x20) + (uVar7 >> 0x20) * (uVar22 >> 0x20) + lVar1 +
           (ulong)(uVar4 < uVar16 << 0x20) + (ulong)CARRY8(uVar20,uVar4);
  uVar16 = uVar22 + uVar3;
  uVar4 = uVar5 + uVar17;
  uVar7 = uVar10 * uVar21;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar5,uVar17)) {
    lVar1 = 0;
  }
  uVar5 = (uVar10 >> 0x20) * (uVar21 & 0xffffffff);
  uVar20 = uVar11 + uVar6;
  uVar17 = param_3[6];
  uVar24 = (uVar10 & 0xffffffff) * (uVar21 >> 0x20);
  uVar15 = (uVar4 >> 0x20) + (uVar19 >> 0x20) * (uVar15 >> 0x20) + lVar1 +
           (ulong)(uVar6 < uVar4 << 0x20) + (ulong)CARRY8(uVar11,uVar6);
  uVar11 = uVar17 * uVar23;
  uVar4 = uVar15 + uVar16;
  uVar6 = uVar5 + uVar24;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar5,uVar24)) {
    lVar1 = 0;
  }
  uVar19 = uVar20 + uVar7;
  uVar24 = (uVar17 >> 0x20) * (uVar23 & 0xffffffff);
  uVar5 = (uVar17 & 0xffffffff) * (uVar23 >> 0x20);
  uVar20 = (uVar6 >> 0x20) + (uVar10 >> 0x20) * (uVar21 >> 0x20) + lVar1 +
           (ulong)CARRY8(uVar20,uVar7);
  if (uVar7 < uVar6 << 0x20) {
    uVar20 = uVar20 + 1;
  }
  uVar6 = uVar20 + uVar4;
  uVar7 = uVar24 + uVar5;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar24,uVar5)) {
    lVar1 = 0;
  }
  param_1[6] = uVar19 + uVar11;
  uVar10 = param_3[6];
  uVar5 = param_3[7];
  uVar21 = *param_2;
  uVar24 = param_2[1];
  uVar19 = (uVar7 >> 0x20) + (uVar17 >> 0x20) * (uVar23 >> 0x20) + (ulong)CARRY8(uVar19,uVar11) +
           lVar1;
  if (uVar11 < uVar7 << 0x20) {
    uVar19 = uVar19 + 1;
  }
  uVar23 = uVar5 * uVar21;
  uVar7 = uVar19 + uVar6;
  uVar11 = (uVar5 >> 0x20) * (uVar21 & 0xffffffff);
  uVar3 = (ulong)CARRY8(uVar18,uVar13) + (ulong)CARRY8(uVar9,uVar12) + (ulong)CARRY8(uVar14,uVar8) +
          (ulong)CARRY8(uVar22,uVar3) + (ulong)CARRY8(uVar15,uVar16) + (ulong)CARRY8(uVar20,uVar4) +
          (ulong)CARRY8(uVar19,uVar6);
  uVar9 = (uVar5 & 0xffffffff) * (uVar21 >> 0x20);
  uVar14 = uVar10 * uVar24;
  uVar18 = uVar11 + uVar9;
  uVar16 = (uVar10 >> 0x20) * (uVar24 & 0xffffffff);
  lVar1 = 0x100000000;
  if (!CARRY8(uVar11,uVar9)) {
    lVar1 = 0;
  }
  uVar13 = (uVar10 & 0xffffffff) * (uVar24 >> 0x20);
  uVar9 = uVar7 + uVar23;
  uVar6 = param_3[4];
  uVar8 = param_3[5];
  uVar12 = (uVar18 >> 0x20) + (uVar5 >> 0x20) * (uVar21 >> 0x20) + lVar1 +
           (ulong)(uVar23 < uVar18 << 0x20) + (ulong)CARRY8(uVar7,uVar23);
  uVar7 = param_2[2];
  uVar11 = param_2[3];
  uVar18 = uVar3 + uVar12;
  uVar4 = uVar16 + uVar13;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar16,uVar13)) {
    lVar1 = 0;
  }
  uVar16 = uVar9 + uVar14;
  uVar15 = (uVar8 >> 0x20) * (uVar7 & 0xffffffff);
  uVar13 = (uVar8 & 0xffffffff) * (uVar7 >> 0x20);
  uVar9 = (uVar4 >> 0x20) + (uVar10 >> 0x20) * (uVar24 >> 0x20) + lVar1 +
          (ulong)(uVar14 < uVar4 << 0x20) + (ulong)CARRY8(uVar9,uVar14);
  uVar4 = uVar8 * uVar7;
  uVar14 = uVar18 + uVar9;
  uVar18 = (ulong)CARRY8(uVar18,uVar9);
  if (CARRY8(uVar3,uVar12)) {
    uVar18 = uVar18 + 1;
  }
  uVar3 = uVar15 + uVar13;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar15,uVar13)) {
    lVar1 = 0;
  }
  uVar13 = (uVar6 >> 0x20) * (uVar11 & 0xffffffff);
  uVar15 = (uVar6 & 0xffffffff) * (uVar11 >> 0x20);
  uVar9 = uVar16 + uVar4;
  uVar20 = uVar6 * uVar11;
  uVar19 = (uVar3 >> 0x20) + (uVar8 >> 0x20) * (uVar7 >> 0x20) + lVar1 +
           (ulong)(uVar4 < uVar3 << 0x20) + (ulong)CARRY8(uVar16,uVar4);
  uVar4 = param_2[4];
  uVar8 = param_2[5];
  uVar3 = uVar14 + uVar19;
  uVar7 = param_3[2];
  uVar12 = param_3[3];
  uVar16 = uVar13 + uVar15;
  uVar22 = uVar12 * uVar4;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar13,uVar15)) {
    lVar1 = 0;
  }
  uVar15 = (uVar12 >> 0x20) * (uVar4 & 0xffffffff);
  uVar13 = uVar9 + uVar20;
  uVar10 = (uVar12 & 0xffffffff) * (uVar4 >> 0x20);
  uVar6 = (uVar16 >> 0x20) + (uVar6 >> 0x20) * (uVar11 >> 0x20) + lVar1 +
          (ulong)(uVar20 < uVar16 << 0x20) + (ulong)CARRY8(uVar9,uVar20);
  uVar11 = uVar7 * uVar8;
  uVar9 = uVar6 + uVar3;
  uVar16 = uVar15 + uVar10;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar15,uVar10)) {
    lVar1 = 0;
  }
  uVar23 = (uVar7 >> 0x20) * (uVar8 & 0xffffffff);
  uVar21 = (uVar7 & 0xffffffff) * (uVar8 >> 0x20);
  uVar15 = uVar13 + uVar22;
  uVar20 = param_2[6];
  uVar10 = param_2[7];
  uVar5 = (uVar16 >> 0x20) + (uVar12 >> 0x20) * (uVar4 >> 0x20) + lVar1 +
          (ulong)(uVar22 < uVar16 << 0x20) + (ulong)CARRY8(uVar13,uVar22);
  uVar12 = *param_3;
  uVar13 = param_3[1];
  uVar16 = uVar5 + uVar9;
  uVar4 = uVar23 + uVar21;
  uVar22 = uVar13 * uVar20;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar23,uVar21)) {
    lVar1 = 0;
  }
  uVar23 = uVar15 + uVar11;
  uVar21 = (uVar13 >> 0x20) * (uVar20 & 0xffffffff);
  uVar7 = (uVar4 >> 0x20) + (uVar7 >> 0x20) * (uVar8 >> 0x20) + lVar1 + (ulong)CARRY8(uVar15,uVar11)
  ;
  uVar8 = (uVar13 & 0xffffffff) * (uVar20 >> 0x20);
  if (uVar11 < uVar4 << 0x20) {
    uVar7 = uVar7 + 1;
  }
  uVar4 = uVar7 + uVar16;
  uVar15 = uVar12 * uVar10;
  uVar11 = uVar21 + uVar8;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar21,uVar8)) {
    lVar1 = 0;
  }
  uVar8 = uVar23 + uVar22;
  uVar21 = (uVar12 >> 0x20) * (uVar10 & 0xffffffff);
  uVar17 = (uVar12 & 0xffffffff) * (uVar10 >> 0x20);
  uVar13 = (uVar11 >> 0x20) + (uVar13 >> 0x20) * (uVar20 >> 0x20) + (ulong)CARRY8(uVar23,uVar22) +
           lVar1;
  if (uVar22 < uVar11 << 0x20) {
    uVar13 = uVar13 + 1;
  }
  uVar11 = uVar13 + uVar4;
  uVar22 = uVar21 + uVar17;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar21,uVar17)) {
    lVar1 = 0;
  }
  param_1[7] = uVar15 + uVar8;
  uVar20 = param_2[6];
  uVar21 = param_2[7];
  uVar23 = param_3[1];
  uVar17 = param_3[2];
  uVar8 = (uVar22 >> 0x20) + (uVar12 >> 0x20) * (uVar10 >> 0x20) + (ulong)CARRY8(uVar15,uVar8) +
          lVar1;
  uVar12 = param_2[5];
  if (uVar15 < uVar22 << 0x20) {
    uVar8 = uVar8 + 1;
  }
  uVar10 = uVar23 * uVar21;
  uVar15 = uVar8 + uVar11;
  uVar22 = (uVar23 >> 0x20) * (uVar21 & 0xffffffff);
  uVar14 = uVar18 + CARRY8(uVar14,uVar19) + (ulong)CARRY8(uVar6,uVar3) + (ulong)CARRY8(uVar5,uVar9)
           + (ulong)CARRY8(uVar7,uVar16) + (ulong)CARRY8(uVar13,uVar4) + (ulong)CARRY8(uVar8,uVar11)
  ;
  uVar16 = (uVar23 & 0xffffffff) * (uVar21 >> 0x20);
  uVar3 = uVar17 * uVar20;
  uVar18 = uVar22 + uVar16;
  uVar4 = (uVar17 >> 0x20) * (uVar20 & 0xffffffff);
  uVar9 = (uVar17 & 0xffffffff) * (uVar20 >> 0x20);
  lVar1 = 0x100000000;
  if (!CARRY8(uVar22,uVar16)) {
    lVar1 = 0;
  }
  uVar16 = uVar15 + uVar10;
  uVar7 = param_3[3];
  uVar8 = param_3[4];
  uVar13 = (uVar18 >> 0x20) + (uVar23 >> 0x20) * (uVar21 >> 0x20) + lVar1 +
           (ulong)(uVar10 < uVar18 << 0x20) + (ulong)CARRY8(uVar15,uVar10);
  uVar18 = uVar14 + uVar13;
  uVar11 = uVar7 * uVar12;
  uVar6 = uVar4 + uVar9;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar4,uVar9)) {
    lVar1 = 0;
  }
  uVar22 = (uVar7 >> 0x20) * (uVar12 & 0xffffffff);
  uVar19 = (uVar7 & 0xffffffff) * (uVar12 >> 0x20);
  uVar9 = uVar16 + uVar3;
  uVar4 = param_2[3];
  uVar15 = param_2[4];
  uVar20 = (uVar6 >> 0x20) + (uVar17 >> 0x20) * (uVar20 >> 0x20) + lVar1 +
           (ulong)(uVar3 < uVar6 << 0x20) + (ulong)CARRY8(uVar16,uVar3);
  uVar3 = uVar18 + uVar20;
  uVar16 = uVar22 + uVar19;
  uVar6 = uVar8 * uVar15;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar22,uVar19)) {
    lVar1 = 0;
  }
  uVar21 = (uVar8 >> 0x20) * (uVar15 & 0xffffffff);
  uVar23 = (uVar8 & 0xffffffff) * (uVar15 >> 0x20);
  uVar22 = uVar9 + uVar11;
  uVar19 = param_3[5];
  uVar10 = param_3[6];
  uVar11 = (uVar16 >> 0x20) + (uVar7 >> 0x20) * (uVar12 >> 0x20) + lVar1 +
           (ulong)(uVar11 < uVar16 << 0x20) + (ulong)CARRY8(uVar9,uVar11);
  uVar9 = uVar3 + uVar11;
  uVar16 = uVar21 + uVar23;
  uVar7 = uVar19 * uVar4;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar21,uVar23)) {
    lVar1 = 0;
  }
  uVar5 = (uVar19 >> 0x20) * (uVar4 & 0xffffffff);
  uVar17 = (uVar19 & 0xffffffff) * (uVar4 >> 0x20);
  uVar12 = uVar22 + uVar6;
  uVar23 = param_2[1];
  uVar21 = param_2[2];
  uVar15 = (uVar16 >> 0x20) + (uVar8 >> 0x20) * (uVar15 >> 0x20) + lVar1 +
           (ulong)(uVar6 < uVar16 << 0x20) + (ulong)CARRY8(uVar22,uVar6);
  uVar16 = uVar15 + uVar9;
  uVar6 = uVar5 + uVar17;
  uVar8 = uVar10 * uVar21;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar5,uVar17)) {
    lVar1 = 0;
  }
  uVar17 = (uVar10 >> 0x20) * (uVar21 & 0xffffffff);
  uVar22 = uVar12 + uVar7;
  uVar5 = param_3[7];
  uVar24 = (uVar10 & 0xffffffff) * (uVar21 >> 0x20);
  uVar12 = (uVar6 >> 0x20) + (uVar19 >> 0x20) * (uVar4 >> 0x20) + lVar1 +
           (ulong)(uVar7 < uVar6 << 0x20) + (ulong)CARRY8(uVar12,uVar7);
  uVar7 = uVar5 * uVar23;
  uVar4 = uVar12 + uVar16;
  uVar6 = uVar17 + uVar24;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar17,uVar24)) {
    lVar1 = 0;
  }
  uVar19 = uVar22 + uVar8;
  uVar24 = (uVar5 >> 0x20) * (uVar23 & 0xffffffff);
  uVar17 = (uVar5 & 0xffffffff) * (uVar23 >> 0x20);
  uVar22 = (uVar6 >> 0x20) + (uVar10 >> 0x20) * (uVar21 >> 0x20) + lVar1 +
           (ulong)CARRY8(uVar22,uVar8);
  if (uVar8 < uVar6 << 0x20) {
    uVar22 = uVar22 + 1;
  }
  uVar6 = uVar22 + uVar4;
  uVar8 = uVar24 + uVar17;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar24,uVar17)) {
    lVar1 = 0;
  }
  param_1[8] = uVar19 + uVar7;
  uVar10 = param_3[6];
  uVar17 = param_3[7];
  uVar21 = param_2[2];
  uVar24 = param_2[3];
  uVar19 = (uVar8 >> 0x20) + (uVar5 >> 0x20) * (uVar23 >> 0x20) + (ulong)CARRY8(uVar19,uVar7) +
           lVar1;
  if (uVar7 < uVar8 << 0x20) {
    uVar19 = uVar19 + 1;
  }
  uVar23 = uVar17 * uVar21;
  uVar7 = uVar19 + uVar6;
  uVar8 = (uVar17 >> 0x20) * (uVar21 & 0xffffffff);
  uVar3 = (ulong)CARRY8(uVar18,uVar20) + (ulong)CARRY8(uVar14,uVar13) + (ulong)CARRY8(uVar3,uVar11)
          + (ulong)CARRY8(uVar15,uVar9) + (ulong)CARRY8(uVar12,uVar16) + (ulong)CARRY8(uVar22,uVar4)
          + (ulong)CARRY8(uVar19,uVar6);
  uVar9 = (uVar17 & 0xffffffff) * (uVar21 >> 0x20);
  uVar16 = (uVar10 >> 0x20) * (uVar24 & 0xffffffff);
  uVar14 = uVar10 * uVar24;
  uVar18 = uVar8 + uVar9;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar8,uVar9)) {
    lVar1 = 0;
  }
  uVar13 = (uVar10 & 0xffffffff) * (uVar24 >> 0x20);
  uVar9 = uVar7 + uVar23;
  uVar6 = param_3[4];
  uVar8 = param_3[5];
  uVar12 = (uVar18 >> 0x20) + (uVar17 >> 0x20) * (uVar21 >> 0x20) + lVar1 +
           (ulong)(uVar23 < uVar18 << 0x20) + (ulong)CARRY8(uVar7,uVar23);
  uVar7 = param_2[4];
  uVar11 = param_2[5];
  uVar18 = uVar3 + uVar12;
  uVar4 = uVar16 + uVar13;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar16,uVar13)) {
    lVar1 = 0;
  }
  uVar16 = uVar9 + uVar14;
  uVar15 = (uVar8 >> 0x20) * (uVar7 & 0xffffffff);
  uVar13 = (uVar8 & 0xffffffff) * (uVar7 >> 0x20);
  uVar9 = (uVar4 >> 0x20) + (uVar10 >> 0x20) * (uVar24 >> 0x20) + lVar1 +
          (ulong)(uVar14 < uVar4 << 0x20) + (ulong)CARRY8(uVar9,uVar14);
  uVar4 = uVar8 * uVar7;
  uVar14 = uVar18 + uVar9;
  uVar18 = (ulong)CARRY8(uVar18,uVar9);
  if (CARRY8(uVar3,uVar12)) {
    uVar18 = uVar18 + 1;
  }
  uVar3 = uVar15 + uVar13;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar15,uVar13)) {
    lVar1 = 0;
  }
  uVar13 = (uVar6 >> 0x20) * (uVar11 & 0xffffffff);
  uVar15 = (uVar6 & 0xffffffff) * (uVar11 >> 0x20);
  uVar9 = uVar16 + uVar4;
  uVar22 = (uVar3 >> 0x20) + (uVar8 >> 0x20) * (uVar7 >> 0x20) + lVar1 +
           (ulong)(uVar4 < uVar3 << 0x20) + (ulong)CARRY8(uVar16,uVar4);
  uVar20 = uVar6 * uVar11;
  uVar3 = uVar14 + uVar22;
  uVar4 = param_2[6];
  uVar8 = param_2[7];
  uVar16 = uVar13 + uVar15;
  uVar7 = param_3[2];
  uVar12 = param_3[3];
  lVar1 = 0x100000000;
  if (!CARRY8(uVar13,uVar15)) {
    lVar1 = 0;
  }
  uVar15 = uVar12 * uVar4;
  uVar13 = uVar9 + uVar20;
  uVar19 = (uVar12 >> 0x20) * (uVar4 & 0xffffffff);
  uVar10 = (uVar12 & 0xffffffff) * (uVar4 >> 0x20);
  uVar11 = (uVar16 >> 0x20) + (uVar6 >> 0x20) * (uVar11 >> 0x20) + lVar1 +
           (ulong)(uVar20 < uVar16 << 0x20) + (ulong)CARRY8(uVar9,uVar20);
  uVar9 = uVar11 + uVar3;
  uVar20 = uVar7 * uVar8;
  uVar16 = uVar19 + uVar10;
  uVar6 = (uVar7 >> 0x20) * (uVar8 & 0xffffffff);
  lVar1 = 0x100000000;
  if (!CARRY8(uVar19,uVar10)) {
    lVar1 = 0;
  }
  uVar10 = (uVar7 & 0xffffffff) * (uVar8 >> 0x20);
  uVar19 = uVar13 + uVar15;
  uVar12 = (uVar16 >> 0x20) + (uVar12 >> 0x20) * (uVar4 >> 0x20) + lVar1 +
           (ulong)(uVar15 < uVar16 << 0x20) + (ulong)CARRY8(uVar13,uVar15);
  uVar16 = uVar12 + uVar9;
  uVar4 = uVar6 + uVar10;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar6,uVar10)) {
    lVar1 = 0;
  }
  param_1[9] = uVar19 + uVar20;
  uVar13 = param_3[3];
  uVar15 = param_3[4];
  uVar10 = param_2[7];
  uVar6 = (uVar4 >> 0x20) + (uVar7 >> 0x20) * (uVar8 >> 0x20) + lVar1 + (ulong)CARRY8(uVar19,uVar20)
  ;
  uVar7 = (uVar13 & 0xffffffff) * (uVar10 >> 0x20);
  if (uVar20 < uVar4 << 0x20) {
    uVar6 = uVar6 + 1;
  }
  uVar19 = (uVar13 >> 0x20) * (uVar10 & 0xffffffff);
  uVar8 = param_2[5];
  uVar20 = param_2[6];
  uVar23 = uVar13 * uVar10;
  uVar4 = uVar6 + uVar16;
  uVar3 = uVar18 + CARRY8(uVar14,uVar22) + (ulong)CARRY8(uVar11,uVar3) + (ulong)CARRY8(uVar12,uVar9)
          + (ulong)CARRY8(uVar6,uVar16);
  uVar18 = uVar19 + uVar7;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar19,uVar7)) {
    lVar1 = 0;
  }
  uVar11 = (uVar15 >> 0x20) * (uVar20 & 0xffffffff);
  uVar6 = (uVar15 & 0xffffffff) * (uVar20 >> 0x20);
  uVar14 = uVar4 + uVar23;
  uVar12 = uVar15 * uVar20;
  uVar7 = (uVar18 >> 0x20) + (uVar13 >> 0x20) * (uVar10 >> 0x20) + lVar1 +
          (ulong)(uVar23 < uVar18 << 0x20) + (ulong)CARRY8(uVar4,uVar23);
  uVar16 = param_3[5];
  uVar4 = param_3[6];
  uVar18 = uVar3 + uVar7;
  uVar9 = uVar11 + uVar6;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar11,uVar6)) {
    lVar1 = 0;
  }
  uVar19 = (uVar16 & 0xffffffff) * (uVar8 >> 0x20);
  uVar13 = (uVar16 >> 0x20) * (uVar8 & 0xffffffff);
  uVar6 = uVar14 + uVar12;
  uVar22 = uVar16 * uVar8;
  uVar15 = (uVar9 >> 0x20) + (uVar15 >> 0x20) * (uVar20 >> 0x20) + lVar1 +
           (ulong)(uVar12 < uVar9 << 0x20) + (ulong)CARRY8(uVar14,uVar12);
  uVar14 = uVar18 + uVar15;
  uVar11 = param_2[3];
  uVar12 = param_2[4];
  uVar9 = uVar13 + uVar19;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar13,uVar19)) {
    lVar1 = 0;
  }
  uVar10 = uVar4 * uVar12;
  uVar23 = (uVar4 >> 0x20) * (uVar12 & 0xffffffff);
  uVar13 = uVar6 + uVar22;
  uVar20 = (uVar4 & 0xffffffff) * (uVar12 >> 0x20);
  uVar19 = param_3[7];
  uVar22 = (uVar9 >> 0x20) + (uVar16 >> 0x20) * (uVar8 >> 0x20) + lVar1 +
           (ulong)(uVar22 < uVar9 << 0x20) + (ulong)CARRY8(uVar6,uVar22);
  uVar9 = uVar14 + uVar22;
  uVar8 = uVar19 * uVar11;
  uVar16 = uVar23 + uVar20;
  uVar6 = (uVar19 >> 0x20) * (uVar11 & 0xffffffff);
  lVar1 = 0x100000000;
  if (!CARRY8(uVar23,uVar20)) {
    lVar1 = 0;
  }
  uVar23 = (uVar19 & 0xffffffff) * (uVar11 >> 0x20);
  uVar20 = uVar13 + uVar10;
  uVar12 = (uVar16 >> 0x20) + (uVar4 >> 0x20) * (uVar12 >> 0x20) + lVar1 +
           (ulong)(uVar10 < uVar16 << 0x20) + (ulong)CARRY8(uVar13,uVar10);
  uVar16 = uVar12 + uVar9;
  uVar4 = uVar6 + uVar23;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar6,uVar23)) {
    lVar1 = 0;
  }
  param_1[10] = uVar20 + uVar8;
  uVar6 = param_2[4];
  uVar10 = param_2[5];
  uVar13 = param_3[6];
  uVar23 = param_3[7];
  uVar21 = uVar23 * uVar6;
  uVar5 = (uVar23 >> 0x20) * (uVar6 & 0xffffffff);
  uVar17 = (uVar23 & 0xffffffff) * (uVar6 >> 0x20);
  uVar8 = (uVar4 >> 0x20) + (uVar19 >> 0x20) * (uVar11 >> 0x20) + lVar1 +
          (ulong)(uVar8 < uVar4 << 0x20) + (ulong)CARRY8(uVar20,uVar8);
  uVar4 = uVar8 + uVar16;
  uVar11 = uVar13 * uVar10;
  uVar3 = (ulong)CARRY8(uVar18,uVar15) + (ulong)CARRY8(uVar3,uVar7) + (ulong)CARRY8(uVar14,uVar22) +
          (ulong)CARRY8(uVar12,uVar9) + (ulong)CARRY8(uVar8,uVar16);
  uVar18 = uVar5 + uVar17;
  uVar14 = (uVar13 >> 0x20) * (uVar10 & 0xffffffff);
  uVar9 = (uVar13 & 0xffffffff) * (uVar10 >> 0x20);
  lVar1 = 0x100000000;
  if (!CARRY8(uVar5,uVar17)) {
    lVar1 = 0;
  }
  uVar16 = uVar4 + uVar21;
  uVar7 = param_2[6];
  uVar8 = param_2[7];
  uVar15 = (uVar18 >> 0x20) + (uVar23 >> 0x20) * (uVar6 >> 0x20) + lVar1 +
           (ulong)(uVar21 < uVar18 << 0x20) + (ulong)CARRY8(uVar4,uVar21);
  uVar18 = uVar3 + uVar15;
  uVar4 = uVar14 + uVar9;
  uVar6 = param_3[4];
  uVar12 = param_3[5];
  lVar1 = 0x100000000;
  if (!CARRY8(uVar14,uVar9)) {
    lVar1 = 0;
  }
  uVar20 = uVar12 * uVar7;
  uVar14 = uVar16 + uVar11;
  uVar22 = (uVar12 >> 0x20) * (uVar7 & 0xffffffff);
  uVar19 = (uVar12 & 0xffffffff) * (uVar7 >> 0x20);
  uVar16 = (uVar4 >> 0x20) + (uVar13 >> 0x20) * (uVar10 >> 0x20) + lVar1 +
           (ulong)(uVar11 < uVar4 << 0x20) + (ulong)CARRY8(uVar16,uVar11);
  uVar9 = uVar18 + uVar16;
  uVar4 = uVar6 * uVar8;
  uVar18 = (ulong)CARRY8(uVar18,uVar16);
  if (CARRY8(uVar3,uVar15)) {
    uVar18 = uVar18 + 1;
  }
  uVar3 = uVar22 + uVar19;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar22,uVar19)) {
    lVar1 = 0;
  }
  uVar11 = (uVar6 >> 0x20) * (uVar8 & 0xffffffff);
  uVar13 = (uVar6 & 0xffffffff) * (uVar8 >> 0x20);
  uVar16 = uVar14 + uVar20;
  uVar7 = (uVar3 >> 0x20) + (uVar12 >> 0x20) * (uVar7 >> 0x20) + lVar1 +
          (ulong)(uVar20 < uVar3 << 0x20) + (ulong)CARRY8(uVar14,uVar20);
  uVar3 = uVar9 + uVar7;
  uVar14 = uVar11 + uVar13;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar11,uVar13)) {
    lVar1 = 0;
  }
  param_1[0xb] = uVar16 + uVar4;
  uVar11 = param_3[5];
  uVar12 = param_3[6];
  uVar13 = param_2[7];
  uVar6 = (uVar14 >> 0x20) + (uVar6 >> 0x20) * (uVar8 >> 0x20) + lVar1 +
          (ulong)(uVar4 < uVar14 << 0x20) + (ulong)CARRY8(uVar16,uVar4);
  uVar16 = uVar11 * uVar13;
  uVar14 = uVar6 + uVar3;
  uVar4 = (uVar11 >> 0x20) * (uVar13 & 0xffffffff);
  uVar6 = uVar18 + CARRY8(uVar9,uVar7) + (ulong)CARRY8(uVar6,uVar3);
  uVar8 = (uVar11 & 0xffffffff) * (uVar13 >> 0x20);
  uVar3 = param_2[5];
  uVar9 = param_2[6];
  uVar18 = uVar4 + uVar8;
  uVar7 = uVar12 * uVar9;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar4,uVar8)) {
    lVar1 = 0;
  }
  uVar15 = (uVar12 >> 0x20) * (uVar9 & 0xffffffff);
  uVar4 = uVar14 + uVar16;
  uVar20 = (uVar12 & 0xffffffff) * (uVar9 >> 0x20);
  uVar22 = param_3[7];
  uVar8 = (uVar18 >> 0x20) + (uVar11 >> 0x20) * (uVar13 >> 0x20) + lVar1 +
          (ulong)(uVar16 < uVar18 << 0x20) + (ulong)CARRY8(uVar14,uVar16);
  uVar18 = uVar6 + uVar8;
  uVar16 = uVar22 * uVar3;
  uVar14 = uVar15 + uVar20;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar15,uVar20)) {
    lVar1 = 0;
  }
  uVar13 = (uVar22 >> 0x20) * (uVar3 & 0xffffffff);
  uVar15 = (uVar22 & 0xffffffff) * (uVar3 >> 0x20);
  uVar11 = uVar4 + uVar7;
  uVar4 = (uVar14 >> 0x20) + (uVar12 >> 0x20) * (uVar9 >> 0x20) + lVar1 +
          (ulong)(uVar7 < uVar14 << 0x20) + (ulong)CARRY8(uVar4,uVar7);
  uVar14 = uVar18 + uVar4;
  uVar9 = uVar13 + uVar15;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar13,uVar15)) {
    lVar1 = 0;
  }
  param_1[0xc] = uVar11 + uVar16;
  uVar7 = param_3[6];
  uVar13 = param_3[7];
  uVar12 = param_2[6];
  uVar15 = param_2[7];
  uVar16 = (uVar9 >> 0x20) + (uVar22 >> 0x20) * (uVar3 >> 0x20) + lVar1 +
           (ulong)(uVar16 < uVar9 << 0x20) + (ulong)CARRY8(uVar11,uVar16);
  uVar3 = uVar14 + uVar16;
  uVar9 = uVar13 * uVar12;
  uVar16 = (ulong)CARRY8(uVar18,uVar4) + (ulong)CARRY8(uVar6,uVar8) + (ulong)CARRY8(uVar14,uVar16);
  uVar14 = (uVar13 >> 0x20) * (uVar12 & 0xffffffff);
  uVar6 = (uVar13 & 0xffffffff) * (uVar12 >> 0x20);
  uVar11 = uVar7 * uVar15;
  uVar4 = (uVar7 >> 0x20) * (uVar15 & 0xffffffff);
  uVar18 = uVar14 + uVar6;
  uVar8 = (uVar7 & 0xffffffff) * (uVar15 >> 0x20);
  lVar1 = 0x100000000;
  if (!CARRY8(uVar14,uVar6)) {
    lVar1 = 0;
  }
  uVar14 = uVar3 + uVar9;
  uVar3 = (uVar18 >> 0x20) + (uVar13 >> 0x20) * (uVar12 >> 0x20) + lVar1 +
          (ulong)(uVar9 < uVar18 << 0x20) + (ulong)CARRY8(uVar3,uVar9);
  uVar18 = uVar4 + uVar8;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar4,uVar8)) {
    lVar1 = 0;
  }
  param_1[0xd] = uVar14 + uVar11;
  uVar4 = param_3[7];
  uVar8 = param_2[7];
  uVar6 = uVar4 * uVar8;
  uVar9 = (uVar18 >> 0x20) + (uVar7 >> 0x20) * (uVar15 >> 0x20) + lVar1 +
          (ulong)(uVar11 < uVar18 << 0x20) + (ulong)CARRY8(uVar14,uVar11);
  uVar7 = (uVar4 >> 0x20) * (uVar8 & 0xffffffff);
  uVar14 = (uVar4 & 0xffffffff) * (uVar8 >> 0x20);
  uVar18 = uVar7 + uVar14;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar7,uVar14)) {
    lVar1 = 0;
  }
  uVar14 = uVar16 + uVar3;
  uVar7 = uVar14 + uVar9;
  param_1[0xe] = uVar7 + uVar6;
  param_1[0xf] = (uVar18 >> 0x20) + (uVar4 >> 0x20) * (uVar8 >> 0x20) + lVar1 +
                 (ulong)(uVar6 < uVar18 << 0x20) + (ulong)CARRY8(uVar16,uVar3) +
                 (ulong)CARRY8(uVar14,uVar9) + (ulong)CARRY8(uVar7,uVar6);
  return;
}


// ===== 00394898  FUN_00394898 =====

void FUN_00394898(ulong *param_1,ulong *param_2,ulong *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  
  uVar8 = *param_2;
  uVar11 = *param_3;
  uVar19 = (uVar11 >> 0x20) * (uVar8 & 0xffffffff);
  uVar12 = (uVar11 & 0xffffffff) * (uVar8 >> 0x20);
  *param_1 = uVar11 * uVar8;
  uVar3 = *param_3;
  uVar10 = param_3[1];
  uVar16 = uVar19 + uVar12;
  uVar18 = *param_2;
  uVar15 = param_2[1];
  uVar9 = uVar10 * uVar18;
  uVar14 = (uVar10 >> 0x20) * (uVar18 & 0xffffffff);
  uVar4 = uVar3 * uVar15;
  uVar13 = (uVar10 & 0xffffffff) * (uVar18 >> 0x20);
  uVar5 = (uVar3 >> 0x20) * (uVar15 & 0xffffffff);
  lVar1 = 0x100000000;
  if (!CARRY8(uVar19,uVar12)) {
    lVar1 = 0;
  }
  uVar19 = (uVar3 & 0xffffffff) * (uVar15 >> 0x20);
  uVar12 = uVar14 + uVar13;
  lVar2 = 0x100000000;
  if (!CARRY8(uVar14,uVar13)) {
    lVar2 = 0;
  }
  uVar13 = (uVar16 >> 0x20) + (uVar11 >> 0x20) * (uVar8 >> 0x20) + uVar9 + lVar1;
  if (uVar11 * uVar8 < uVar16 << 0x20) {
    uVar13 = uVar13 + 1;
  }
  uVar16 = uVar5 + uVar19;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar5,uVar19)) {
    lVar1 = 0;
  }
  param_1[1] = uVar13 + uVar4;
  uVar18 = (uVar12 >> 0x20) + (uVar10 >> 0x20) * (uVar18 >> 0x20) + lVar2;
  uVar8 = param_2[2];
  uVar10 = *param_3;
  uVar5 = param_3[1];
  uVar16 = (uVar16 >> 0x20) + (uVar3 >> 0x20) * (uVar15 >> 0x20) + lVar1 +
           (ulong)(uVar4 < uVar16 << 0x20) + (ulong)CARRY8(uVar13,uVar4);
  if (uVar9 < uVar12 << 0x20) {
    uVar18 = uVar18 + 1;
  }
  uVar3 = uVar10 * uVar8;
  if (uVar13 < uVar9) {
    uVar18 = uVar18 + 1;
  }
  uVar13 = (uVar10 >> 0x20) * (uVar8 & 0xffffffff);
  uVar12 = (uVar10 & 0xffffffff) * (uVar8 >> 0x20);
  uVar4 = *param_2;
  uVar9 = param_2[1];
  uVar15 = uVar13 + uVar12;
  uVar11 = uVar5 * uVar9;
  uVar14 = param_3[2];
  uVar19 = (uVar5 >> 0x20) * (uVar9 & 0xffffffff);
  lVar1 = 0x100000000;
  if (!CARRY8(uVar13,uVar12)) {
    lVar1 = 0;
  }
  uVar13 = (uVar5 & 0xffffffff) * (uVar9 >> 0x20);
  uVar12 = uVar18 + uVar16 + uVar3;
  uVar10 = (uVar15 >> 0x20) + (uVar10 >> 0x20) * (uVar8 >> 0x20) + lVar1 +
           (ulong)(uVar3 < uVar15 << 0x20) + (ulong)CARRY8(uVar18 + uVar16,uVar3);
  uVar8 = uVar10 + CARRY8(uVar18,uVar16);
  uVar15 = uVar14 * uVar4;
  uVar3 = uVar19 + uVar13;
  uVar20 = (uVar14 >> 0x20) * (uVar4 & 0xffffffff);
  lVar1 = 0x100000000;
  if (!CARRY8(uVar19,uVar13)) {
    lVar1 = 0;
  }
  uVar19 = (uVar14 & 0xffffffff) * (uVar4 >> 0x20);
  uVar13 = uVar12 + uVar11;
  uVar9 = (uVar3 >> 0x20) + (uVar5 >> 0x20) * (uVar9 >> 0x20) + lVar1 +
          (ulong)(uVar11 < uVar3 << 0x20) + (ulong)CARRY8(uVar12,uVar11);
  uVar3 = uVar8 + uVar9;
  uVar5 = uVar20 + uVar19;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar20,uVar19)) {
    lVar1 = 0;
  }
  param_1[2] = uVar13 + uVar15;
  uVar11 = param_3[2];
  uVar19 = param_3[3];
  uVar12 = *param_2;
  uVar20 = param_2[1];
  uVar6 = uVar19 * uVar12;
  uVar7 = (uVar19 >> 0x20) * (uVar12 & 0xffffffff);
  uVar17 = (uVar19 & 0xffffffff) * (uVar12 >> 0x20);
  uVar5 = (uVar5 >> 0x20) + (uVar14 >> 0x20) * (uVar4 >> 0x20) + lVar1 +
          (ulong)(uVar15 < uVar5 << 0x20) + (ulong)CARRY8(uVar13,uVar15);
  uVar15 = uVar3 + uVar5;
  uVar4 = uVar11 * uVar20;
  uVar3 = (ulong)CARRY8(uVar8,uVar9) + (ulong)CARRY8(uVar10,(ulong)CARRY8(uVar18,uVar16)) +
          (ulong)CARRY8(uVar3,uVar5);
  uVar16 = uVar7 + uVar17;
  uVar18 = (uVar11 >> 0x20) * (uVar20 & 0xffffffff);
  lVar1 = 0x100000000;
  if (!CARRY8(uVar7,uVar17)) {
    lVar1 = 0;
  }
  uVar14 = (uVar11 & 0xffffffff) * (uVar20 >> 0x20);
  uVar10 = uVar15 + uVar6;
  uVar5 = param_2[2];
  uVar9 = param_2[3];
  uVar13 = (uVar16 >> 0x20) + (uVar19 >> 0x20) * (uVar12 >> 0x20) + lVar1 +
           (ulong)(uVar6 < uVar16 << 0x20) + (ulong)CARRY8(uVar15,uVar6);
  uVar16 = uVar3 + uVar13;
  uVar15 = uVar18 + uVar14;
  uVar8 = *param_3;
  uVar12 = param_3[1];
  lVar1 = 0x100000000;
  if (!CARRY8(uVar18,uVar14)) {
    lVar1 = 0;
  }
  uVar19 = uVar12 * uVar5;
  uVar18 = uVar10 + uVar4;
  uVar14 = (uVar12 >> 0x20) * (uVar5 & 0xffffffff);
  uVar6 = (uVar12 & 0xffffffff) * (uVar5 >> 0x20);
  uVar15 = (uVar15 >> 0x20) + (uVar11 >> 0x20) * (uVar20 >> 0x20) + lVar1 +
           (ulong)(uVar4 < uVar15 << 0x20) + (ulong)CARRY8(uVar10,uVar4);
  uVar10 = uVar16 + uVar15;
  uVar4 = uVar8 * uVar9;
  uVar16 = (ulong)CARRY8(uVar16,uVar15);
  if (CARRY8(uVar3,uVar13)) {
    uVar16 = uVar16 + 1;
  }
  uVar3 = uVar14 + uVar6;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar14,uVar6)) {
    lVar1 = 0;
  }
  uVar11 = (uVar8 >> 0x20) * (uVar9 & 0xffffffff);
  uVar13 = (uVar8 & 0xffffffff) * (uVar9 >> 0x20);
  uVar15 = uVar18 + uVar19;
  uVar5 = (uVar3 >> 0x20) + (uVar12 >> 0x20) * (uVar5 >> 0x20) + lVar1 +
          (ulong)(uVar19 < uVar3 << 0x20) + (ulong)CARRY8(uVar18,uVar19);
  uVar3 = uVar10 + uVar5;
  uVar18 = uVar11 + uVar13;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar11,uVar13)) {
    lVar1 = 0;
  }
  param_1[3] = uVar15 + uVar4;
  uVar11 = param_3[1];
  uVar13 = param_3[2];
  uVar19 = param_2[3];
  uVar12 = param_2[1];
  uVar14 = param_2[2];
  uVar8 = (uVar18 >> 0x20) + (uVar8 >> 0x20) * (uVar9 >> 0x20) + lVar1 +
          (ulong)(uVar4 < uVar18 << 0x20) + (ulong)CARRY8(uVar15,uVar4);
  uVar15 = uVar11 * uVar19;
  uVar18 = uVar8 + uVar3;
  uVar4 = (uVar11 >> 0x20) * (uVar19 & 0xffffffff);
  uVar3 = uVar16 + CARRY8(uVar10,uVar5) + (ulong)CARRY8(uVar8,uVar3);
  uVar8 = (uVar11 & 0xffffffff) * (uVar19 >> 0x20);
  uVar5 = uVar13 * uVar14;
  uVar16 = uVar4 + uVar8;
  uVar10 = (uVar13 >> 0x20) * (uVar14 & 0xffffffff);
  lVar1 = 0x100000000;
  if (!CARRY8(uVar4,uVar8)) {
    lVar1 = 0;
  }
  uVar6 = (uVar13 & 0xffffffff) * (uVar14 >> 0x20);
  uVar20 = param_3[3];
  uVar4 = uVar18 + uVar15;
  uVar8 = uVar20 * uVar12;
  uVar15 = (uVar16 >> 0x20) + (uVar11 >> 0x20) * (uVar19 >> 0x20) + lVar1 +
           (ulong)(uVar15 < uVar16 << 0x20) + (ulong)CARRY8(uVar18,uVar15);
  uVar16 = uVar3 + uVar15;
  uVar9 = (uVar20 >> 0x20) * (uVar12 & 0xffffffff);
  uVar18 = uVar10 + uVar6;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar10,uVar6)) {
    lVar1 = 0;
  }
  uVar11 = (uVar20 & 0xffffffff) * (uVar12 >> 0x20);
  uVar10 = uVar4 + uVar5;
  uVar5 = (uVar18 >> 0x20) + (uVar13 >> 0x20) * (uVar14 >> 0x20) + lVar1 +
          (ulong)(uVar5 < uVar18 << 0x20) + (ulong)CARRY8(uVar4,uVar5);
  uVar18 = uVar16 + uVar5;
  uVar4 = uVar9 + uVar11;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar9,uVar11)) {
    lVar1 = 0;
  }
  param_1[4] = uVar10 + uVar8;
  uVar9 = param_3[2];
  uVar13 = param_3[3];
  uVar11 = param_2[2];
  uVar14 = param_2[3];
  uVar8 = (uVar4 >> 0x20) + (uVar20 >> 0x20) * (uVar12 >> 0x20) + lVar1 +
          (ulong)(uVar8 < uVar4 << 0x20) + (ulong)CARRY8(uVar10,uVar8);
  uVar10 = uVar18 + uVar8;
  uVar4 = uVar13 * uVar11;
  uVar18 = (ulong)CARRY8(uVar16,uVar5) + (ulong)CARRY8(uVar3,uVar15) + (ulong)CARRY8(uVar18,uVar8);
  uVar3 = (uVar13 >> 0x20) * (uVar11 & 0xffffffff);
  uVar5 = (uVar13 & 0xffffffff) * (uVar11 >> 0x20);
  uVar12 = uVar9 * uVar14;
  uVar15 = (uVar9 >> 0x20) * (uVar14 & 0xffffffff);
  uVar16 = uVar3 + uVar5;
  uVar8 = (uVar9 & 0xffffffff) * (uVar14 >> 0x20);
  lVar1 = 0x100000000;
  if (!CARRY8(uVar3,uVar5)) {
    lVar1 = 0;
  }
  uVar3 = uVar10 + uVar4;
  uVar10 = (uVar16 >> 0x20) + (uVar13 >> 0x20) * (uVar11 >> 0x20) + lVar1 +
           (ulong)(uVar4 < uVar16 << 0x20) + (ulong)CARRY8(uVar10,uVar4);
  uVar16 = uVar15 + uVar8;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar15,uVar8)) {
    lVar1 = 0;
  }
  param_1[5] = uVar3 + uVar12;
  uVar4 = param_3[3];
  uVar11 = param_2[3];
  uVar5 = uVar4 * uVar11;
  uVar15 = (uVar16 >> 0x20) + (uVar9 >> 0x20) * (uVar14 >> 0x20) + lVar1 +
           (ulong)(uVar12 < uVar16 << 0x20) + (ulong)CARRY8(uVar3,uVar12);
  uVar8 = (uVar4 >> 0x20) * (uVar11 & 0xffffffff);
  uVar3 = (uVar4 & 0xffffffff) * (uVar11 >> 0x20);
  uVar16 = uVar8 + uVar3;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar8,uVar3)) {
    lVar1 = 0;
  }
  uVar3 = uVar18 + uVar10;
  uVar8 = uVar3 + uVar15;
  param_1[6] = uVar8 + uVar5;
  param_1[7] = (uVar16 >> 0x20) + (uVar4 >> 0x20) * (uVar11 >> 0x20) + lVar1 +
               (ulong)(uVar5 < uVar16 << 0x20) + (ulong)CARRY8(uVar18,uVar10) +
               (ulong)CARRY8(uVar3,uVar15) + (ulong)CARRY8(uVar8,uVar5);
  return;
}


// ===== 00394d7c  FUN_00394d7c =====

void FUN_00394d7c(long *param_1,ulong *param_2)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
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
  
  uVar5 = *param_2;
  uVar7 = uVar5 >> 0x20;
  uVar6 = (uVar5 & 0xffffffff) * (uVar5 & 0xffffffff);
  uVar9 = (uVar5 & 0xffffffff) * uVar7;
  uVar5 = uVar9 << 0x21;
  *param_1 = uVar6 + uVar5;
  uVar4 = *param_2;
  uVar13 = param_2[1];
  uVar16 = uVar4 * uVar13;
  uVar10 = (uVar4 >> 0x20) * (uVar13 & 0xffffffff);
  uVar12 = (uVar4 & 0xffffffff) * (uVar13 >> 0x20);
  uVar6 = (uVar9 >> 0x1f) + uVar7 * uVar7 + uVar16 + (ulong)CARRY8(uVar6,uVar5);
  uVar5 = uVar10 + uVar12;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar10,uVar12)) {
    lVar1 = 0;
  }
  bVar2 = uVar16 < uVar5 << 0x20;
  uVar5 = (uVar5 >> 0x20) + (uVar4 >> 0x20) * (uVar13 >> 0x20) + lVar1;
  uVar4 = uVar5;
  if (bVar2) {
    uVar4 = uVar5 + 1;
  }
  if (uVar6 < uVar16) {
    uVar4 = uVar4 + 1;
  }
  param_1[1] = uVar6 + uVar16;
  uVar9 = uVar5 + bVar2 + (ulong)CARRY8(uVar6,uVar16);
  uVar7 = *param_2;
  uVar5 = param_2[1];
  uVar12 = param_2[2];
  uVar18 = uVar5 >> 0x20;
  uVar10 = (uVar5 & 0xffffffff) * (uVar5 & 0xffffffff);
  uVar16 = uVar7 * uVar12;
  uVar19 = (uVar5 & 0xffffffff) * uVar18;
  uVar22 = (uVar7 >> 0x20) * (uVar12 & 0xffffffff);
  uVar5 = uVar19 << 0x21;
  uVar13 = uVar10 + uVar5;
  uVar20 = (uVar7 & 0xffffffff) * (uVar12 >> 0x20);
  uVar6 = uVar4 + uVar9 + uVar13;
  uVar10 = (uVar19 >> 0x1f) + uVar18 * uVar18 + (ulong)CARRY8(uVar10,uVar5) +
           (ulong)CARRY8(uVar4 + uVar9,uVar13);
  uVar13 = uVar10 + CARRY8(uVar4,uVar9);
  uVar5 = uVar22 + uVar20;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar22,uVar20)) {
    lVar1 = 0;
  }
  uVar19 = (ulong)(uVar16 < uVar5 << 0x20);
  uVar18 = uVar6 + uVar16;
  lVar1 = (uVar5 >> 0x20) + (uVar7 >> 0x20) * (uVar12 >> 0x20) + lVar1;
  uVar21 = lVar1 + uVar19 + (ulong)CARRY8(uVar6,uVar16);
  uVar5 = uVar13 + uVar21;
  param_1[2] = uVar18 + uVar16;
  uVar22 = lVar1 + uVar19 + (ulong)CARRY8(uVar18,uVar16);
  uVar7 = *param_2;
  uVar16 = param_2[1];
  uVar12 = param_2[2];
  uVar18 = param_2[3];
  uVar20 = uVar7 * uVar18;
  uVar6 = uVar5 + uVar22;
  uVar19 = (uVar7 >> 0x20) * (uVar18 & 0xffffffff);
  uVar13 = (ulong)CARRY8(uVar13,uVar21) + (ulong)CARRY8(uVar10,(ulong)CARRY8(uVar4,uVar9)) +
           (ulong)CARRY8(uVar5,uVar22);
  uVar4 = (uVar7 & 0xffffffff) * (uVar18 >> 0x20);
  uVar5 = uVar19 + uVar4;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar19,uVar4)) {
    lVar1 = 0;
  }
  uVar9 = (ulong)(uVar20 < uVar5 << 0x20);
  uVar4 = uVar6 + uVar20;
  lVar1 = (uVar5 >> 0x20) + (uVar7 >> 0x20) * (uVar18 >> 0x20) + lVar1;
  uVar18 = lVar1 + uVar9 + (ulong)CARRY8(uVar6,uVar20);
  uVar5 = uVar13 + uVar18;
  uVar19 = (uVar16 >> 0x20) * (uVar12 & 0xffffffff);
  uVar6 = uVar4 + uVar20;
  uVar7 = (uVar16 & 0xffffffff) * (uVar12 >> 0x20);
  uVar9 = lVar1 + uVar9 + (ulong)CARRY8(uVar4,uVar20);
  uVar10 = uVar16 * uVar12;
  uVar4 = uVar5 + uVar9;
  uVar5 = (ulong)CARRY8(uVar5,uVar9);
  if (CARRY8(uVar13,uVar18)) {
    uVar5 = uVar5 + 1;
  }
  uVar13 = uVar19 + uVar7;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar19,uVar7)) {
    lVar1 = 0;
  }
  uVar9 = (ulong)(uVar10 < uVar13 << 0x20);
  uVar7 = uVar6 + uVar10;
  lVar1 = (uVar13 >> 0x20) + (uVar16 >> 0x20) * (uVar12 >> 0x20) + lVar1;
  uVar12 = lVar1 + uVar9 + (ulong)CARRY8(uVar6,uVar10);
  uVar13 = uVar4 + uVar12;
  param_1[3] = uVar7 + uVar10;
  uVar10 = lVar1 + uVar9 + (ulong)CARRY8(uVar7,uVar10);
  uVar7 = param_2[2];
  uVar9 = param_2[3];
  uVar6 = uVar13 + uVar10;
  uVar12 = uVar5 + CARRY8(uVar4,uVar12) + (ulong)CARRY8(uVar13,uVar10);
  uVar21 = uVar7 >> 0x20;
  uVar20 = (uVar7 & 0xffffffff) * (uVar7 & 0xffffffff);
  uVar18 = (uVar7 & 0xffffffff) * uVar21;
  uVar7 = *param_2;
  uVar10 = param_2[1];
  uVar5 = uVar18 << 0x21;
  uVar4 = uVar20 + uVar5;
  uVar16 = (uVar10 >> 0x20) * (uVar9 & 0xffffffff);
  uVar22 = (uVar10 & 0xffffffff) * (uVar9 >> 0x20);
  uVar13 = uVar6 + uVar4;
  uVar19 = uVar10 * uVar9;
  uVar6 = (uVar18 >> 0x1f) + uVar21 * uVar21 + (ulong)CARRY8(uVar20,uVar5) +
          (ulong)CARRY8(uVar6,uVar4);
  uVar18 = param_2[4];
  uVar5 = uVar12 + uVar6;
  uVar4 = uVar16 + uVar22;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar16,uVar22)) {
    lVar1 = 0;
  }
  uVar8 = (ulong)(uVar19 < uVar4 << 0x20);
  uVar16 = uVar13 + uVar19;
  lVar1 = (uVar4 >> 0x20) + (uVar10 >> 0x20) * (uVar9 >> 0x20) + lVar1;
  uVar22 = lVar1 + uVar8 + (ulong)CARRY8(uVar13,uVar19);
  uVar20 = (uVar7 >> 0x20) * (uVar18 & 0xffffffff);
  uVar4 = uVar5 + uVar22;
  uVar21 = (uVar7 & 0xffffffff) * (uVar18 >> 0x20);
  uVar13 = uVar16 + uVar19;
  uVar14 = uVar7 * uVar18;
  uVar16 = lVar1 + uVar8 + (ulong)CARRY8(uVar16,uVar19);
  uVar9 = uVar4 + uVar16;
  uVar10 = uVar20 + uVar21;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar20,uVar21)) {
    lVar1 = 0;
  }
  uVar20 = (ulong)(uVar14 < uVar10 << 0x20);
  uVar19 = uVar13 + uVar14;
  lVar1 = (uVar10 >> 0x20) + (uVar7 >> 0x20) * (uVar18 >> 0x20) + lVar1;
  uVar8 = lVar1 + uVar20 + (ulong)CARRY8(uVar13,uVar14);
  uVar13 = uVar9 + uVar8;
  param_1[4] = uVar19 + uVar14;
  uVar21 = lVar1 + uVar20 + (ulong)CARRY8(uVar19,uVar14);
  uVar10 = *param_2;
  uVar19 = param_2[1];
  uVar7 = uVar13 + uVar21;
  uVar18 = param_2[4];
  uVar20 = param_2[5];
  uVar6 = (ulong)CARRY8(uVar5,uVar22) + (ulong)CARRY8(uVar12,uVar6) + (ulong)CARRY8(uVar4,uVar16) +
          (ulong)CARRY8(uVar9,uVar8) + (ulong)CARRY8(uVar13,uVar21);
  uVar9 = uVar10 * uVar20;
  uVar4 = (uVar10 >> 0x20) * (uVar20 & 0xffffffff);
  uVar13 = (uVar10 & 0xffffffff) * (uVar20 >> 0x20);
  uVar5 = uVar4 + uVar13;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar4,uVar13)) {
    lVar1 = 0;
  }
  uVar12 = (ulong)(uVar9 < uVar5 << 0x20);
  uVar4 = uVar7 + uVar9;
  lVar1 = (uVar5 >> 0x20) + (uVar10 >> 0x20) * (uVar20 >> 0x20) + lVar1;
  uVar16 = lVar1 + uVar12 + (ulong)CARRY8(uVar7,uVar9);
  uVar5 = uVar6 + uVar16;
  uVar20 = (uVar19 >> 0x20) * (uVar18 & 0xffffffff);
  uVar13 = uVar4 + uVar9;
  uVar7 = (uVar19 & 0xffffffff) * (uVar18 >> 0x20);
  uVar9 = lVar1 + uVar12 + (ulong)CARRY8(uVar4,uVar9);
  uVar10 = uVar19 * uVar18;
  uVar4 = uVar5 + uVar9;
  uVar5 = (ulong)CARRY8(uVar5,uVar9);
  if (CARRY8(uVar6,uVar16)) {
    uVar5 = uVar5 + 1;
  }
  uVar6 = uVar20 + uVar7;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar20,uVar7)) {
    lVar1 = 0;
  }
  uVar12 = param_2[2];
  uVar16 = param_2[3];
  uVar9 = (ulong)(uVar10 < uVar6 << 0x20);
  uVar7 = uVar13 + uVar10;
  lVar1 = (uVar6 >> 0x20) + (uVar19 >> 0x20) * (uVar18 >> 0x20) + lVar1;
  uVar19 = lVar1 + uVar9 + (ulong)CARRY8(uVar13,uVar10);
  uVar13 = uVar4 + uVar19;
  uVar18 = (uVar12 >> 0x20) * (uVar16 & 0xffffffff);
  uVar20 = (uVar12 & 0xffffffff) * (uVar16 >> 0x20);
  uVar6 = uVar7 + uVar10;
  uVar10 = lVar1 + uVar9 + (ulong)CARRY8(uVar7,uVar10);
  uVar22 = uVar12 * uVar16;
  uVar7 = uVar13 + uVar10;
  uVar9 = uVar18 + uVar20;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar18,uVar20)) {
    lVar1 = 0;
  }
  uVar20 = (ulong)(uVar22 < uVar9 << 0x20);
  uVar18 = uVar6 + uVar22;
  lVar1 = (uVar9 >> 0x20) + (uVar12 >> 0x20) * (uVar16 >> 0x20) + lVar1;
  uVar21 = lVar1 + uVar20 + (ulong)CARRY8(uVar6,uVar22);
  uVar6 = uVar7 + uVar21;
  param_1[5] = uVar18 + uVar22;
  uVar18 = lVar1 + uVar20 + (ulong)CARRY8(uVar18,uVar22);
  uVar12 = param_2[2];
  uVar16 = param_2[3];
  uVar9 = uVar6 + uVar18;
  uVar18 = uVar5 + CARRY8(uVar4,uVar19) + (ulong)CARRY8(uVar13,uVar10) + (ulong)CARRY8(uVar7,uVar21)
           + (ulong)CARRY8(uVar6,uVar18);
  uVar19 = uVar16 >> 0x20;
  uVar20 = (uVar16 & 0xffffffff) * (uVar16 & 0xffffffff);
  uVar6 = param_2[4];
  uVar10 = param_2[5];
  uVar7 = (uVar16 & 0xffffffff) * uVar19;
  uVar5 = uVar7 << 0x21;
  uVar4 = uVar20 + uVar5;
  uVar16 = (uVar12 >> 0x20) * (uVar6 & 0xffffffff);
  uVar22 = (uVar12 & 0xffffffff) * (uVar6 >> 0x20);
  uVar13 = uVar9 + uVar4;
  uVar20 = (uVar7 >> 0x1f) + uVar19 * uVar19 + (ulong)CARRY8(uVar20,uVar5) +
           (ulong)CARRY8(uVar9,uVar4);
  uVar19 = uVar12 * uVar6;
  uVar5 = uVar18 + uVar20;
  uVar4 = uVar16 + uVar22;
  uVar7 = *param_2;
  uVar9 = param_2[1];
  lVar1 = 0x100000000;
  if (!CARRY8(uVar16,uVar22)) {
    lVar1 = 0;
  }
  uVar11 = (ulong)(uVar19 < uVar4 << 0x20);
  uVar16 = uVar13 + uVar19;
  lVar1 = (uVar4 >> 0x20) + (uVar12 >> 0x20) * (uVar6 >> 0x20) + lVar1;
  uVar21 = lVar1 + uVar11 + (ulong)CARRY8(uVar13,uVar19);
  uVar22 = (uVar9 >> 0x20) * (uVar10 & 0xffffffff);
  uVar4 = uVar5 + uVar21;
  uVar8 = (uVar9 & 0xffffffff) * (uVar10 >> 0x20);
  uVar13 = uVar16 + uVar19;
  uVar14 = uVar9 * uVar10;
  uVar16 = lVar1 + uVar11 + (ulong)CARRY8(uVar16,uVar19);
  uVar19 = param_2[6];
  uVar6 = uVar4 + uVar16;
  uVar12 = uVar22 + uVar8;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar22,uVar8)) {
    lVar1 = 0;
  }
  uVar17 = (ulong)(uVar14 < uVar12 << 0x20);
  uVar22 = uVar13 + uVar14;
  lVar1 = (uVar12 >> 0x20) + (uVar9 >> 0x20) * (uVar10 >> 0x20) + lVar1;
  uVar11 = lVar1 + uVar17 + (ulong)CARRY8(uVar13,uVar14);
  uVar8 = (uVar7 >> 0x20) * (uVar19 & 0xffffffff);
  uVar13 = uVar6 + uVar11;
  uVar3 = (uVar7 & 0xffffffff) * (uVar19 >> 0x20);
  uVar9 = uVar22 + uVar14;
  uVar15 = uVar7 * uVar19;
  uVar22 = lVar1 + uVar17 + (ulong)CARRY8(uVar22,uVar14);
  uVar10 = uVar13 + uVar22;
  uVar12 = uVar8 + uVar3;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar8,uVar3)) {
    lVar1 = 0;
  }
  uVar14 = (ulong)(uVar15 < uVar12 << 0x20);
  uVar8 = uVar9 + uVar15;
  lVar1 = (uVar12 >> 0x20) + (uVar7 >> 0x20) * (uVar19 >> 0x20) + lVar1;
  uVar17 = lVar1 + uVar14 + (ulong)CARRY8(uVar9,uVar15);
  uVar7 = uVar10 + uVar17;
  param_1[6] = uVar8 + uVar15;
  uVar3 = lVar1 + uVar14 + (ulong)CARRY8(uVar8,uVar15);
  uVar12 = *param_2;
  uVar8 = param_2[1];
  uVar9 = uVar7 + uVar3;
  uVar19 = param_2[6];
  uVar14 = param_2[7];
  uVar6 = (ulong)CARRY8(uVar5,uVar21) + (ulong)CARRY8(uVar18,uVar20) + (ulong)CARRY8(uVar4,uVar16) +
          (ulong)CARRY8(uVar6,uVar11) + (ulong)CARRY8(uVar13,uVar22) + (ulong)CARRY8(uVar10,uVar17)
          + (ulong)CARRY8(uVar7,uVar3);
  uVar7 = uVar12 * uVar14;
  uVar4 = (uVar12 >> 0x20) * (uVar14 & 0xffffffff);
  uVar13 = (uVar12 & 0xffffffff) * (uVar14 >> 0x20);
  uVar5 = uVar4 + uVar13;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar4,uVar13)) {
    lVar1 = 0;
  }
  uVar16 = (ulong)(uVar7 < uVar5 << 0x20);
  uVar4 = uVar9 + uVar7;
  uVar10 = (uVar8 & 0xffffffff) * (uVar19 >> 0x20);
  lVar1 = (uVar5 >> 0x20) + (uVar12 >> 0x20) * (uVar14 >> 0x20) + lVar1;
  uVar12 = lVar1 + uVar16 + (ulong)CARRY8(uVar9,uVar7);
  uVar5 = uVar6 + uVar12;
  uVar18 = (uVar8 >> 0x20) * (uVar19 & 0xffffffff);
  uVar13 = uVar4 + uVar7;
  uVar9 = uVar8 * uVar19;
  uVar7 = lVar1 + uVar16 + (ulong)CARRY8(uVar4,uVar7);
  uVar4 = uVar5 + uVar7;
  uVar5 = (ulong)CARRY8(uVar5,uVar7);
  if (CARRY8(uVar6,uVar12)) {
    uVar5 = uVar5 + 1;
  }
  uVar6 = uVar18 + uVar10;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar18,uVar10)) {
    lVar1 = 0;
  }
  uVar10 = param_2[2];
  uVar16 = param_2[3];
  uVar12 = param_2[4];
  uVar18 = param_2[5];
  uVar21 = (ulong)(uVar9 < uVar6 << 0x20);
  uVar7 = uVar13 + uVar9;
  lVar1 = (uVar6 >> 0x20) + (uVar8 >> 0x20) * (uVar19 >> 0x20) + lVar1;
  uVar20 = lVar1 + uVar21 + (ulong)CARRY8(uVar13,uVar9);
  uVar13 = uVar4 + uVar20;
  uVar19 = (uVar10 >> 0x20) * (uVar18 & 0xffffffff);
  uVar6 = uVar7 + uVar9;
  uVar22 = (uVar10 & 0xffffffff) * (uVar18 >> 0x20);
  uVar21 = lVar1 + uVar21 + (ulong)CARRY8(uVar7,uVar9);
  uVar8 = uVar10 * uVar18;
  uVar7 = uVar13 + uVar21;
  uVar9 = uVar19 + uVar22;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar19,uVar22)) {
    lVar1 = 0;
  }
  uVar11 = (ulong)(uVar8 < uVar9 << 0x20);
  uVar19 = uVar6 + uVar8;
  lVar1 = (uVar9 >> 0x20) + (uVar10 >> 0x20) * (uVar18 >> 0x20) + lVar1;
  uVar22 = lVar1 + uVar11 + (ulong)CARRY8(uVar6,uVar8);
  uVar15 = (uVar16 >> 0x20) * (uVar12 & 0xffffffff);
  uVar6 = uVar7 + uVar22;
  uVar14 = (uVar16 & 0xffffffff) * (uVar12 >> 0x20);
  uVar9 = uVar19 + uVar8;
  uVar3 = uVar16 * uVar12;
  uVar19 = lVar1 + uVar11 + (ulong)CARRY8(uVar19,uVar8);
  uVar10 = uVar6 + uVar19;
  uVar18 = uVar15 + uVar14;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar15,uVar14)) {
    lVar1 = 0;
  }
  uVar14 = (ulong)(uVar3 < uVar18 << 0x20);
  uVar8 = uVar9 + uVar3;
  lVar1 = (uVar18 >> 0x20) + (uVar16 >> 0x20) * (uVar12 >> 0x20) + lVar1;
  uVar11 = lVar1 + uVar14 + (ulong)CARRY8(uVar9,uVar3);
  uVar9 = uVar10 + uVar11;
  param_1[7] = uVar8 + uVar3;
  uVar8 = lVar1 + uVar14 + (ulong)CARRY8(uVar8,uVar3);
  uVar16 = param_2[3];
  uVar18 = param_2[4];
  uVar12 = uVar9 + uVar8;
  uVar19 = uVar5 + CARRY8(uVar4,uVar20) + (ulong)CARRY8(uVar13,uVar21) + (ulong)CARRY8(uVar7,uVar22)
           + (ulong)CARRY8(uVar6,uVar19) + (ulong)CARRY8(uVar10,uVar11) + (ulong)CARRY8(uVar9,uVar8)
  ;
  uVar10 = uVar18 >> 0x20;
  uVar22 = (uVar18 & 0xffffffff) * (uVar18 & 0xffffffff);
  uVar6 = param_2[5];
  uVar9 = param_2[6];
  uVar7 = (uVar18 & 0xffffffff) * uVar10;
  uVar5 = uVar7 << 0x21;
  uVar4 = uVar22 + uVar5;
  uVar18 = (uVar16 >> 0x20) * (uVar6 & 0xffffffff);
  uVar21 = (uVar16 & 0xffffffff) * (uVar6 >> 0x20);
  uVar13 = uVar12 + uVar4;
  uVar20 = uVar16 * uVar6;
  uVar12 = (uVar7 >> 0x1f) + uVar10 * uVar10 + (ulong)CARRY8(uVar22,uVar5) +
           (ulong)CARRY8(uVar12,uVar4);
  uVar5 = uVar19 + uVar12;
  uVar4 = uVar18 + uVar21;
  uVar7 = param_2[1];
  uVar10 = param_2[2];
  lVar1 = 0x100000000;
  if (!CARRY8(uVar18,uVar21)) {
    lVar1 = 0;
  }
  uVar14 = (ulong)(uVar20 < uVar4 << 0x20);
  uVar18 = uVar13 + uVar20;
  lVar1 = (uVar4 >> 0x20) + (uVar16 >> 0x20) * (uVar6 >> 0x20) + lVar1;
  uVar21 = lVar1 + uVar14 + (ulong)CARRY8(uVar13,uVar20);
  uVar22 = (uVar10 >> 0x20) * (uVar9 & 0xffffffff);
  uVar4 = uVar5 + uVar21;
  uVar8 = uVar10 * uVar9;
  uVar13 = uVar18 + uVar20;
  uVar11 = (uVar10 & 0xffffffff) * (uVar9 >> 0x20);
  uVar18 = lVar1 + uVar14 + (ulong)CARRY8(uVar18,uVar20);
  uVar20 = param_2[7];
  uVar6 = uVar4 + uVar18;
  uVar16 = uVar22 + uVar11;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar22,uVar11)) {
    lVar1 = 0;
  }
  uVar17 = (ulong)(uVar8 < uVar16 << 0x20);
  uVar22 = uVar13 + uVar8;
  lVar1 = (uVar16 >> 0x20) + (uVar10 >> 0x20) * (uVar9 >> 0x20) + lVar1;
  uVar11 = lVar1 + uVar17 + (ulong)CARRY8(uVar13,uVar8);
  uVar14 = (uVar7 >> 0x20) * (uVar20 & 0xffffffff);
  uVar13 = uVar6 + uVar11;
  uVar3 = (uVar7 & 0xffffffff) * (uVar20 >> 0x20);
  uVar9 = uVar22 + uVar8;
  uVar15 = uVar7 * uVar20;
  uVar22 = lVar1 + uVar17 + (ulong)CARRY8(uVar22,uVar8);
  uVar10 = uVar13 + uVar22;
  uVar16 = uVar14 + uVar3;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar14,uVar3)) {
    lVar1 = 0;
  }
  uVar14 = (ulong)(uVar15 < uVar16 << 0x20);
  uVar8 = uVar9 + uVar15;
  lVar1 = (uVar16 >> 0x20) + (uVar7 >> 0x20) * (uVar20 >> 0x20) + lVar1;
  uVar17 = lVar1 + uVar14 + (ulong)CARRY8(uVar9,uVar15);
  uVar7 = uVar10 + uVar17;
  param_1[8] = uVar8 + uVar15;
  uVar3 = lVar1 + uVar14 + (ulong)CARRY8(uVar8,uVar15);
  uVar16 = param_2[2];
  uVar8 = param_2[3];
  uVar9 = uVar7 + uVar3;
  uVar20 = param_2[6];
  uVar14 = param_2[7];
  uVar6 = (ulong)CARRY8(uVar5,uVar21) + (ulong)CARRY8(uVar19,uVar12) + (ulong)CARRY8(uVar4,uVar18) +
          (ulong)CARRY8(uVar6,uVar11) + (ulong)CARRY8(uVar13,uVar22) + (ulong)CARRY8(uVar10,uVar17)
          + (ulong)CARRY8(uVar7,uVar3);
  uVar7 = uVar16 * uVar14;
  uVar4 = (uVar16 >> 0x20) * (uVar14 & 0xffffffff);
  uVar13 = (uVar16 & 0xffffffff) * (uVar14 >> 0x20);
  uVar5 = uVar4 + uVar13;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar4,uVar13)) {
    lVar1 = 0;
  }
  uVar10 = (ulong)(uVar7 < uVar5 << 0x20);
  uVar4 = uVar9 + uVar7;
  lVar1 = (uVar5 >> 0x20) + (uVar16 >> 0x20) * (uVar14 >> 0x20) + lVar1;
  uVar12 = lVar1 + uVar10 + (ulong)CARRY8(uVar9,uVar7);
  uVar5 = uVar6 + uVar12;
  uVar16 = (uVar8 >> 0x20) * (uVar20 & 0xffffffff);
  uVar13 = uVar4 + uVar7;
  uVar9 = (uVar8 & 0xffffffff) * (uVar20 >> 0x20);
  uVar7 = lVar1 + uVar10 + (ulong)CARRY8(uVar4,uVar7);
  uVar10 = uVar8 * uVar20;
  uVar4 = uVar5 + uVar7;
  uVar5 = (ulong)CARRY8(uVar5,uVar7);
  if (CARRY8(uVar6,uVar12)) {
    uVar5 = uVar5 + 1;
  }
  uVar6 = uVar16 + uVar9;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar16,uVar9)) {
    lVar1 = 0;
  }
  uVar12 = param_2[4];
  uVar16 = param_2[5];
  uVar9 = (ulong)(uVar10 < uVar6 << 0x20);
  uVar7 = uVar13 + uVar10;
  lVar1 = (uVar6 >> 0x20) + (uVar8 >> 0x20) * (uVar20 >> 0x20) + lVar1;
  uVar19 = lVar1 + uVar9 + (ulong)CARRY8(uVar13,uVar10);
  uVar13 = uVar4 + uVar19;
  uVar18 = (uVar12 >> 0x20) * (uVar16 & 0xffffffff);
  uVar20 = (uVar12 & 0xffffffff) * (uVar16 >> 0x20);
  uVar6 = uVar7 + uVar10;
  uVar10 = lVar1 + uVar9 + (ulong)CARRY8(uVar7,uVar10);
  uVar22 = uVar12 * uVar16;
  uVar7 = uVar13 + uVar10;
  uVar9 = uVar18 + uVar20;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar18,uVar20)) {
    lVar1 = 0;
  }
  uVar21 = (ulong)(uVar22 < uVar9 << 0x20);
  uVar18 = uVar6 + uVar22;
  lVar1 = (uVar9 >> 0x20) + (uVar12 >> 0x20) * (uVar16 >> 0x20) + lVar1;
  uVar20 = lVar1 + uVar21 + (ulong)CARRY8(uVar6,uVar22);
  uVar6 = uVar7 + uVar20;
  param_1[9] = uVar18 + uVar22;
  uVar18 = lVar1 + uVar21 + (ulong)CARRY8(uVar18,uVar22);
  uVar12 = param_2[5];
  uVar16 = param_2[6];
  uVar9 = uVar6 + uVar18;
  uVar10 = uVar5 + CARRY8(uVar4,uVar19) + (ulong)CARRY8(uVar13,uVar10) + (ulong)CARRY8(uVar7,uVar20)
           + (ulong)CARRY8(uVar6,uVar18);
  uVar21 = uVar12 >> 0x20;
  uVar20 = (uVar12 & 0xffffffff) * (uVar12 & 0xffffffff);
  uVar18 = (uVar12 & 0xffffffff) * uVar21;
  uVar6 = param_2[3];
  uVar7 = param_2[4];
  uVar5 = uVar18 << 0x21;
  uVar4 = uVar20 + uVar5;
  uVar12 = (uVar7 >> 0x20) * (uVar16 & 0xffffffff);
  uVar22 = (uVar7 & 0xffffffff) * (uVar16 >> 0x20);
  uVar13 = uVar9 + uVar4;
  uVar19 = uVar7 * uVar16;
  uVar9 = (uVar18 >> 0x1f) + uVar21 * uVar21 + (ulong)CARRY8(uVar20,uVar5) +
          (ulong)CARRY8(uVar9,uVar4);
  uVar18 = param_2[7];
  uVar5 = uVar10 + uVar9;
  uVar4 = uVar12 + uVar22;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar12,uVar22)) {
    lVar1 = 0;
  }
  uVar21 = (ulong)(uVar19 < uVar4 << 0x20);
  uVar12 = uVar13 + uVar19;
  lVar1 = (uVar4 >> 0x20) + (uVar7 >> 0x20) * (uVar16 >> 0x20) + lVar1;
  uVar20 = lVar1 + uVar21 + (ulong)CARRY8(uVar13,uVar19);
  uVar16 = (uVar6 >> 0x20) * (uVar18 & 0xffffffff);
  uVar4 = uVar5 + uVar20;
  uVar22 = (uVar6 & 0xffffffff) * (uVar18 >> 0x20);
  uVar13 = uVar12 + uVar19;
  uVar8 = uVar6 * uVar18;
  uVar19 = lVar1 + uVar21 + (ulong)CARRY8(uVar12,uVar19);
  uVar7 = uVar4 + uVar19;
  uVar12 = uVar16 + uVar22;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar16,uVar22)) {
    lVar1 = 0;
  }
  uVar22 = (ulong)(uVar8 < uVar12 << 0x20);
  uVar16 = uVar13 + uVar8;
  lVar1 = (uVar12 >> 0x20) + (uVar6 >> 0x20) * (uVar18 >> 0x20) + lVar1;
  uVar14 = lVar1 + uVar22 + (ulong)CARRY8(uVar13,uVar8);
  uVar13 = uVar7 + uVar14;
  param_1[10] = uVar16 + uVar8;
  uVar21 = lVar1 + uVar22 + (ulong)CARRY8(uVar16,uVar8);
  uVar12 = param_2[4];
  uVar18 = param_2[5];
  uVar6 = uVar13 + uVar21;
  uVar16 = param_2[6];
  uVar22 = param_2[7];
  uVar7 = (ulong)CARRY8(uVar5,uVar20) + (ulong)CARRY8(uVar10,uVar9) + (ulong)CARRY8(uVar4,uVar19) +
          (ulong)CARRY8(uVar7,uVar14) + (ulong)CARRY8(uVar13,uVar21);
  uVar9 = uVar12 * uVar22;
  uVar4 = (uVar12 >> 0x20) * (uVar22 & 0xffffffff);
  uVar13 = (uVar12 & 0xffffffff) * (uVar22 >> 0x20);
  uVar5 = uVar4 + uVar13;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar4,uVar13)) {
    lVar1 = 0;
  }
  uVar10 = (ulong)(uVar9 < uVar5 << 0x20);
  uVar4 = uVar6 + uVar9;
  lVar1 = (uVar5 >> 0x20) + (uVar12 >> 0x20) * (uVar22 >> 0x20) + lVar1;
  uVar12 = lVar1 + uVar10 + (ulong)CARRY8(uVar6,uVar9);
  uVar5 = uVar7 + uVar12;
  uVar19 = (uVar18 >> 0x20) * (uVar16 & 0xffffffff);
  uVar13 = uVar4 + uVar9;
  uVar9 = lVar1 + uVar10 + (ulong)CARRY8(uVar4,uVar9);
  uVar6 = (uVar18 & 0xffffffff) * (uVar16 >> 0x20);
  uVar10 = uVar18 * uVar16;
  uVar4 = uVar5 + uVar9;
  uVar5 = (ulong)CARRY8(uVar5,uVar9);
  if (CARRY8(uVar7,uVar12)) {
    uVar5 = uVar5 + 1;
  }
  uVar7 = uVar19 + uVar6;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar19,uVar6)) {
    lVar1 = 0;
  }
  uVar9 = (ulong)(uVar10 < uVar7 << 0x20);
  uVar6 = uVar13 + uVar10;
  lVar1 = (uVar7 >> 0x20) + (uVar18 >> 0x20) * (uVar16 >> 0x20) + lVar1;
  uVar12 = lVar1 + uVar9 + (ulong)CARRY8(uVar13,uVar10);
  uVar13 = uVar4 + uVar12;
  param_1[0xb] = uVar6 + uVar10;
  uVar10 = lVar1 + uVar9 + (ulong)CARRY8(uVar6,uVar10);
  uVar7 = param_2[5];
  uVar9 = param_2[6];
  uVar6 = uVar13 + uVar10;
  uVar16 = param_2[7];
  uVar10 = uVar5 + CARRY8(uVar4,uVar12) + (ulong)CARRY8(uVar13,uVar10);
  uVar22 = uVar9 >> 0x20;
  uVar12 = (uVar9 & 0xffffffff) * (uVar9 & 0xffffffff);
  uVar18 = (uVar9 & 0xffffffff) * uVar22;
  uVar20 = (uVar7 >> 0x20) * (uVar16 & 0xffffffff);
  uVar5 = uVar18 << 0x21;
  uVar4 = uVar12 + uVar5;
  uVar19 = (uVar7 & 0xffffffff) * (uVar16 >> 0x20);
  uVar13 = uVar6 + uVar4;
  uVar9 = uVar7 * uVar16;
  uVar6 = (uVar18 >> 0x1f) + uVar22 * uVar22 + (ulong)CARRY8(uVar12,uVar5) +
          (ulong)CARRY8(uVar6,uVar4);
  uVar5 = uVar10 + uVar6;
  uVar4 = uVar20 + uVar19;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar20,uVar19)) {
    lVar1 = 0;
  }
  uVar18 = (ulong)(uVar9 < uVar4 << 0x20);
  uVar12 = uVar13 + uVar9;
  lVar1 = (uVar4 >> 0x20) + (uVar7 >> 0x20) * (uVar16 >> 0x20) + lVar1;
  uVar19 = lVar1 + uVar18 + (ulong)CARRY8(uVar13,uVar9);
  uVar4 = uVar5 + uVar19;
  param_1[0xc] = uVar12 + uVar9;
  uVar16 = lVar1 + uVar18 + (ulong)CARRY8(uVar12,uVar9);
  uVar7 = param_2[6];
  uVar9 = param_2[7];
  uVar13 = uVar4 + uVar16;
  uVar12 = uVar7 * uVar9;
  uVar6 = (ulong)CARRY8(uVar5,uVar19) + (ulong)CARRY8(uVar10,uVar6) + (ulong)CARRY8(uVar4,uVar16);
  uVar10 = (uVar7 >> 0x20) * (uVar9 & 0xffffffff);
  uVar4 = (uVar7 & 0xffffffff) * (uVar9 >> 0x20);
  uVar5 = uVar10 + uVar4;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar10,uVar4)) {
    lVar1 = 0;
  }
  uVar10 = (ulong)(uVar12 < uVar5 << 0x20);
  uVar4 = uVar13 + uVar12;
  lVar1 = (uVar5 >> 0x20) + (uVar7 >> 0x20) * (uVar9 >> 0x20) + lVar1;
  uVar16 = lVar1 + uVar10 + (ulong)CARRY8(uVar13,uVar12);
  param_1[0xd] = uVar4 + uVar12;
  uVar9 = lVar1 + uVar10 + (ulong)CARRY8(uVar4,uVar12);
  uVar5 = param_2[7];
  uVar12 = uVar5 >> 0x20;
  uVar10 = (uVar5 & 0xffffffff) * (uVar5 & 0xffffffff);
  uVar18 = (uVar5 & 0xffffffff) * uVar12;
  uVar5 = uVar18 << 0x21;
  uVar4 = uVar10 + uVar5;
  uVar13 = uVar6 + uVar16;
  uVar7 = uVar13 + uVar9;
  param_1[0xe] = uVar7 + uVar4;
  param_1[0xf] = (uVar18 >> 0x1f) + uVar12 * uVar12 + (ulong)CARRY8(uVar10,uVar5) +
                 (ulong)CARRY8(uVar6,uVar16) + (ulong)CARRY8(uVar13,uVar9) +
                 (ulong)CARRY8(uVar7,uVar4);
  return;
}


// ===== 00395970  FUN_00395970 =====

void FUN_00395970(long *param_1,ulong *param_2)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  
  uVar4 = *param_2;
  uVar6 = uVar4 >> 0x20;
  uVar5 = (uVar4 & 0xffffffff) * (uVar4 & 0xffffffff);
  uVar7 = (uVar4 & 0xffffffff) * uVar6;
  uVar4 = uVar7 << 0x21;
  *param_1 = uVar5 + uVar4;
  uVar3 = *param_2;
  uVar10 = param_2[1];
  uVar11 = uVar3 * uVar10;
  uVar8 = (uVar3 >> 0x20) * (uVar10 & 0xffffffff);
  uVar9 = (uVar3 & 0xffffffff) * (uVar10 >> 0x20);
  uVar5 = (uVar7 >> 0x1f) + uVar6 * uVar6 + uVar11 + (ulong)CARRY8(uVar5,uVar4);
  uVar4 = uVar8 + uVar9;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar8,uVar9)) {
    lVar1 = 0;
  }
  bVar2 = uVar11 < uVar4 << 0x20;
  uVar4 = (uVar4 >> 0x20) + (uVar3 >> 0x20) * (uVar10 >> 0x20) + lVar1;
  uVar3 = uVar4;
  if (bVar2) {
    uVar3 = uVar4 + 1;
  }
  if (uVar5 < uVar11) {
    uVar3 = uVar3 + 1;
  }
  param_1[1] = uVar5 + uVar11;
  uVar7 = uVar4 + bVar2 + (ulong)CARRY8(uVar5,uVar11);
  uVar6 = *param_2;
  uVar4 = param_2[1];
  uVar9 = param_2[2];
  uVar12 = uVar4 >> 0x20;
  uVar8 = (uVar4 & 0xffffffff) * (uVar4 & 0xffffffff);
  uVar11 = uVar6 * uVar9;
  uVar13 = (uVar4 & 0xffffffff) * uVar12;
  uVar16 = (uVar6 >> 0x20) * (uVar9 & 0xffffffff);
  uVar4 = uVar13 << 0x21;
  uVar10 = uVar8 + uVar4;
  uVar14 = (uVar6 & 0xffffffff) * (uVar9 >> 0x20);
  uVar5 = uVar3 + uVar7 + uVar10;
  uVar8 = (uVar13 >> 0x1f) + uVar12 * uVar12 + (ulong)CARRY8(uVar8,uVar4) +
          (ulong)CARRY8(uVar3 + uVar7,uVar10);
  uVar10 = uVar8 + CARRY8(uVar3,uVar7);
  uVar4 = uVar16 + uVar14;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar16,uVar14)) {
    lVar1 = 0;
  }
  uVar13 = (ulong)(uVar11 < uVar4 << 0x20);
  uVar12 = uVar5 + uVar11;
  lVar1 = (uVar4 >> 0x20) + (uVar6 >> 0x20) * (uVar9 >> 0x20) + lVar1;
  uVar15 = lVar1 + uVar13 + (ulong)CARRY8(uVar5,uVar11);
  uVar4 = uVar10 + uVar15;
  param_1[2] = uVar12 + uVar11;
  uVar16 = lVar1 + uVar13 + (ulong)CARRY8(uVar12,uVar11);
  uVar6 = *param_2;
  uVar11 = param_2[1];
  uVar9 = param_2[2];
  uVar12 = param_2[3];
  uVar14 = uVar6 * uVar12;
  uVar5 = uVar4 + uVar16;
  uVar13 = (uVar6 >> 0x20) * (uVar12 & 0xffffffff);
  uVar10 = (ulong)CARRY8(uVar10,uVar15) + (ulong)CARRY8(uVar8,(ulong)CARRY8(uVar3,uVar7)) +
           (ulong)CARRY8(uVar4,uVar16);
  uVar3 = (uVar6 & 0xffffffff) * (uVar12 >> 0x20);
  uVar4 = uVar13 + uVar3;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar13,uVar3)) {
    lVar1 = 0;
  }
  uVar7 = (ulong)(uVar14 < uVar4 << 0x20);
  uVar3 = uVar5 + uVar14;
  lVar1 = (uVar4 >> 0x20) + (uVar6 >> 0x20) * (uVar12 >> 0x20) + lVar1;
  uVar12 = lVar1 + uVar7 + (ulong)CARRY8(uVar5,uVar14);
  uVar4 = uVar10 + uVar12;
  uVar13 = (uVar11 >> 0x20) * (uVar9 & 0xffffffff);
  uVar5 = uVar3 + uVar14;
  uVar7 = lVar1 + uVar7 + (ulong)CARRY8(uVar3,uVar14);
  uVar6 = (uVar11 & 0xffffffff) * (uVar9 >> 0x20);
  uVar8 = uVar11 * uVar9;
  uVar3 = uVar4 + uVar7;
  uVar4 = (ulong)CARRY8(uVar4,uVar7);
  if (CARRY8(uVar10,uVar12)) {
    uVar4 = uVar4 + 1;
  }
  uVar10 = uVar13 + uVar6;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar13,uVar6)) {
    lVar1 = 0;
  }
  uVar7 = (ulong)(uVar8 < uVar10 << 0x20);
  uVar6 = uVar5 + uVar8;
  lVar1 = (uVar10 >> 0x20) + (uVar11 >> 0x20) * (uVar9 >> 0x20) + lVar1;
  uVar9 = lVar1 + uVar7 + (ulong)CARRY8(uVar5,uVar8);
  uVar10 = uVar3 + uVar9;
  param_1[3] = uVar6 + uVar8;
  uVar8 = lVar1 + uVar7 + (ulong)CARRY8(uVar6,uVar8);
  uVar6 = param_2[1];
  uVar7 = param_2[2];
  uVar5 = uVar10 + uVar8;
  uVar11 = param_2[3];
  uVar8 = uVar4 + CARRY8(uVar3,uVar9) + (ulong)CARRY8(uVar10,uVar8);
  uVar16 = uVar7 >> 0x20;
  uVar9 = (uVar7 & 0xffffffff) * (uVar7 & 0xffffffff);
  uVar12 = (uVar7 & 0xffffffff) * uVar16;
  uVar14 = (uVar6 >> 0x20) * (uVar11 & 0xffffffff);
  uVar4 = uVar12 << 0x21;
  uVar3 = uVar9 + uVar4;
  uVar13 = (uVar6 & 0xffffffff) * (uVar11 >> 0x20);
  uVar10 = uVar5 + uVar3;
  uVar7 = uVar6 * uVar11;
  uVar5 = (uVar12 >> 0x1f) + uVar16 * uVar16 + (ulong)CARRY8(uVar9,uVar4) +
          (ulong)CARRY8(uVar5,uVar3);
  uVar4 = uVar8 + uVar5;
  uVar3 = uVar14 + uVar13;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar14,uVar13)) {
    lVar1 = 0;
  }
  uVar12 = (ulong)(uVar7 < uVar3 << 0x20);
  uVar9 = uVar10 + uVar7;
  lVar1 = (uVar3 >> 0x20) + (uVar6 >> 0x20) * (uVar11 >> 0x20) + lVar1;
  uVar13 = lVar1 + uVar12 + (ulong)CARRY8(uVar10,uVar7);
  uVar3 = uVar4 + uVar13;
  param_1[4] = uVar9 + uVar7;
  uVar11 = lVar1 + uVar12 + (ulong)CARRY8(uVar9,uVar7);
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  uVar10 = uVar3 + uVar11;
  uVar9 = uVar6 * uVar7;
  uVar5 = (ulong)CARRY8(uVar4,uVar13) + (ulong)CARRY8(uVar8,uVar5) + (ulong)CARRY8(uVar3,uVar11);
  uVar8 = (uVar6 >> 0x20) * (uVar7 & 0xffffffff);
  uVar3 = (uVar6 & 0xffffffff) * (uVar7 >> 0x20);
  uVar4 = uVar8 + uVar3;
  lVar1 = 0x100000000;
  if (!CARRY8(uVar8,uVar3)) {
    lVar1 = 0;
  }
  uVar8 = (ulong)(uVar9 < uVar4 << 0x20);
  uVar3 = uVar10 + uVar9;
  lVar1 = (uVar4 >> 0x20) + (uVar6 >> 0x20) * (uVar7 >> 0x20) + lVar1;
  uVar11 = lVar1 + uVar8 + (ulong)CARRY8(uVar10,uVar9);
  param_1[5] = uVar3 + uVar9;
  uVar7 = lVar1 + uVar8 + (ulong)CARRY8(uVar3,uVar9);
  uVar4 = param_2[3];
  uVar9 = uVar4 >> 0x20;
  uVar8 = (uVar4 & 0xffffffff) * (uVar4 & 0xffffffff);
  uVar12 = (uVar4 & 0xffffffff) * uVar9;
  uVar4 = uVar12 << 0x21;
  uVar3 = uVar8 + uVar4;
  uVar10 = uVar5 + uVar11;
  uVar6 = uVar10 + uVar7;
  param_1[6] = uVar6 + uVar3;
  param_1[7] = (uVar12 >> 0x1f) + uVar9 * uVar9 + (ulong)CARRY8(uVar8,uVar4) +
               (ulong)CARRY8(uVar5,uVar11) + (ulong)CARRY8(uVar10,uVar7) +
               (ulong)CARRY8(uVar6,uVar3);
  return;
}


// ===== 00395c74  FUN_00395c74 =====

undefined8 FUN_00395c74(void)

{
  return 0;
}


// ===== 00395c7c  FUN_00395c7c =====

undefined4 FUN_00395c7c(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00395cac();
  FUN_003903e8(param_1);
  return uVar1;
}


// ===== 00395cac  FUN_00395cac =====

undefined4 FUN_00395cac(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  undefined1 auStack_150 [256];
  
  puVar9 = auStack_150;
  uVar1 = *(uint *)(param_2 + 1);
  if ((int)uVar1 < 1) {
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    return 1;
  }
  FUN_003916e0(param_3);
  puVar4 = param_1;
  if (param_2 == param_1) {
    puVar4 = (undefined8 *)FUN_00391898(param_3);
  }
  puVar5 = (undefined8 *)FUN_00391898(param_3);
  uVar10 = 0;
  if ((puVar4 == (undefined8 *)0x0) || (puVar5 == (undefined8 *)0x0)) goto LAB_00395e1c;
  iVar2 = uVar1 << 1;
  lVar6 = FUN_0038f924(puVar4,iVar2);
  if (lVar6 == 0) goto LAB_00395e18;
  if (uVar1 == 8) {
    FUN_00394d7c(*puVar4,*param_2);
LAB_00395df0:
    *(undefined4 *)(puVar4 + 2) = 0;
    *(int *)(puVar4 + 1) = iVar2;
    if ((puVar4 == param_1) || (lVar6 = FUN_0038f85c(param_1,puVar4), lVar6 != 0)) {
      uVar10 = 1;
      goto LAB_00395e1c;
    }
  }
  else {
    if (uVar1 == 4) {
      FUN_00395970(*puVar4,*param_2);
      goto LAB_00395df0;
    }
    if (uVar1 < 0x10) {
      uVar7 = *puVar4;
      uVar8 = *param_2;
LAB_00395de8:
      FUN_00395e44(uVar7,uVar8,uVar1,puVar9);
      goto LAB_00395df0;
    }
    iVar3 = FUN_0038f248(uVar1);
    if (uVar1 == 1 << (ulong)(iVar3 - 1U & 0x1f)) {
      lVar6 = FUN_0038f924(puVar5,4 << (ulong)(iVar3 - 1U & 0x1f));
      if (lVar6 != 0) {
        FUN_00395f38(*puVar4,*param_2,uVar1,*puVar5);
        goto LAB_00395df0;
      }
    }
    else {
      lVar6 = FUN_0038f924(puVar5,iVar2);
      if (lVar6 != 0) {
        uVar7 = *puVar4;
        uVar8 = *param_2;
        puVar9 = (undefined1 *)*puVar5;
        goto LAB_00395de8;
      }
    }
  }
LAB_00395e18:
  uVar10 = 0;
LAB_00395e1c:
  FUN_0039180c(param_3);
  return uVar10;
}


// ===== 00395e44  FUN_00395e44 =====

void FUN_00395e44(undefined8 *param_1,undefined8 *param_2,uint param_3,undefined8 param_4)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  iVar1 = param_3 << 1;
  *param_1 = 0;
  param_1[(long)iVar1 + -1] = 0;
  if (1 < (int)param_3) {
    uVar3 = FUN_00392ee8(param_1 + 1,param_2 + 1,param_3 - 1,*param_2);
    iVar4 = param_3 - 2;
    (param_1 + 1)[param_3 - 1] = uVar3;
    if (iVar4 != 0) {
      puVar7 = param_1 + param_3;
      puVar5 = param_1 + 3;
      puVar6 = param_2 + 2;
      do {
        puVar7 = puVar7 + 1;
        uVar3 = FUN_00392d24(puVar5,puVar6,iVar4,puVar6[-1]);
        bVar2 = iVar4 != 0;
        iVar4 = iVar4 + -1;
        puVar5 = puVar5 + 2;
        puVar6 = puVar6 + 1;
        *puVar7 = uVar3;
      } while (bVar2 && iVar4 != 0);
    }
  }
  FUN_00393354(param_1,param_1,param_1,iVar1);
  FUN_00393080(param_4,param_2,(ulong)param_3);
  FUN_00393354(param_1,param_1,param_4,iVar1);
  return;
}


// ===== 00395f38  FUN_00395f38 =====

void FUN_00395f38(long param_1,long param_2,uint param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  uVar2 = param_3;
  if ((int)param_3 < 0) {
    uVar2 = param_3 + 1;
  }
  if (param_3 == 8) {
    FUN_00394d7c();
    return;
  }
  if (param_3 == 4) {
    FUN_00395970();
    return;
  }
  if (0xf < (int)param_3) {
    uVar9 = (ulong)(uint)((int)uVar2 >> 1);
    lVar1 = param_2 + uVar9 * 8;
    iVar3 = FUN_00390504(param_2,lVar1,uVar9);
    lVar6 = param_2;
    lVar10 = lVar1;
    if ((iVar3 < 1) && (lVar6 = lVar1, lVar10 = param_2, -1 < iVar3)) {
      lVar6 = param_4 + (ulong)(param_3 << 1) * 8;
      memset((void *)(param_4 + (ulong)param_3 * 8),0,(ulong)param_3 * 8);
    }
    else {
      FUN_00393448(param_4,lVar6,lVar10,uVar9);
      lVar6 = param_4 + (ulong)(param_3 << 1) * 8;
      FUN_00395f38(param_4 + (ulong)param_3 * 8,param_4,uVar9,lVar6);
    }
    FUN_00395f38(param_1,param_2,uVar9,lVar6);
    lVar10 = (ulong)param_3 * 8;
    FUN_00395f38(param_1 + lVar10,lVar1,uVar9,lVar6);
    iVar4 = FUN_00393354(param_4,param_1,param_1 + lVar10,param_3);
    iVar5 = FUN_00393448(param_4 + lVar10,param_4,param_4 + lVar10,param_3);
    lVar1 = param_1 + uVar9 * 8;
    iVar3 = FUN_00393354(lVar1,lVar1,param_4 + lVar10,param_3);
    iVar3 = (iVar4 - iVar5) + iVar3;
    if (iVar3 != 0) {
      uVar9 = (ulong)(((int)uVar2 >> 1) + param_3);
      lVar1 = uVar9 * 8;
      uVar8 = *(ulong *)(param_1 + lVar1);
      *(ulong *)(param_1 + lVar1) = uVar8 + (long)iVar3;
      if (CARRY8(uVar8,(long)iVar3)) {
        puVar7 = (ulong *)(param_1 + uVar9 * 8);
        do {
          puVar7 = puVar7 + 1;
          uVar9 = *puVar7;
          *puVar7 = uVar9 + 1;
        } while (0xfffffffffffffffe < uVar9);
      }
    }
    return;
  }
  FUN_00395e44(param_1,param_2,param_3,param_4);
  return;
}


// ===== 00396118  FUN_00396118 =====

long FUN_00396118(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long extraout_x1;
  long lVar14;
  long local_98;
  long local_90;
  long local_80;
  undefined1 auStack_78 [24];
  
  iVar1 = FUN_003907ec(param_3,1);
  if ((iVar1 != 0) || (iVar1 = FUN_0038f448(param_3), iVar1 != 0)) {
    *param_5 = 1;
    return 0;
  }
  *param_5 = 0;
  iVar1 = FUN_0038f4e8(param_2,4);
  if ((iVar1 != 0) || (iVar1 = FUN_0038f4e8(param_3,4), iVar1 != 0)) {
    FUN_003916e0(param_4);
    lVar5 = FUN_00391898(param_4);
    lVar6 = FUN_00391898(param_4);
    lVar7 = FUN_00391898(param_4);
    uVar8 = FUN_00391898(param_4);
    lVar9 = FUN_00391898(param_4);
    lVar10 = FUN_00391898(param_4);
    lVar11 = FUN_00391898(param_4);
    if (lVar11 == 0) {
      if (param_1 == 0) {
        local_80 = 0;
        goto LAB_00396684;
      }
    }
    else {
      local_80 = param_1;
      if ((param_1 != 0) || (local_80 = FUN_0038f584(), local_80 != 0)) {
        iVar1 = FUN_0038f9ec(lVar7,1);
        if (iVar1 != 0) {
          FUN_003907e0(lVar10);
          lVar11 = FUN_0038f85c(lVar6,param_2);
          if ((lVar11 != 0) && (lVar11 = FUN_0038f85c(lVar5,param_3), lVar11 != 0)) {
            *(undefined4 *)(lVar5 + 0x10) = 0;
            if ((*(int *)(lVar6 + 0x10) != 0) || (iVar1 = FUN_003901ac(lVar6,lVar5), -1 < iVar1)) {
              FUN_0038f578(auStack_78);
              FUN_003908e4(auStack_78,lVar6,4);
              iVar1 = FUN_00397158(lVar6,auStack_78,lVar5,param_4);
              if (iVar1 == 0) goto joined_r0x00396680;
            }
            iVar1 = FUN_0038f448(lVar6);
            if (iVar1 == 0) {
              lVar11 = lVar5;
              iVar1 = -1;
              local_90 = lVar10;
              iVar2 = 1;
              do {
                iVar4 = iVar2;
                iVar2 = iVar1;
                lVar10 = lVar7;
                lVar5 = lVar6;
                lVar7 = lVar11;
                FUN_0038f578(auStack_78);
                FUN_003908e4(auStack_78,lVar7,4);
                iVar1 = FUN_00397cac(uVar8,lVar9,auStack_78,lVar5,param_4);
                if (((iVar1 == 0) || (iVar1 = FUN_00392a80(lVar7,uVar8,lVar10,param_4), iVar1 == 0))
                   || (iVar1 = FUN_00398c3c(lVar7,lVar7,local_90), iVar1 == 0))
                goto joined_r0x00396680;
                iVar3 = FUN_0038f448(lVar9);
                lVar11 = lVar5;
                lVar6 = lVar9;
                lVar9 = local_90;
                iVar1 = iVar4;
                local_90 = lVar10;
              } while (iVar3 == 0);
              if (iVar4 < 0) goto LAB_003962cc;
            }
            else {
LAB_003962cc:
              iVar1 = FUN_00398f34(lVar10,param_3,lVar10);
              if (iVar1 == 0) goto joined_r0x00396680;
            }
            iVar1 = FUN_00390824(lVar5);
            if (iVar1 != 0) {
              if ((*(int *)(lVar10 + 0x10) == 0) &&
                 (iVar1 = FUN_003901ac(lVar10,param_3), iVar1 < 0)) {
                lVar6 = FUN_0038f85c(local_80,lVar10);
                if (lVar6 == 0) goto joined_r0x00396680;
              }
              else {
                iVar1 = FUN_00397158(local_80,lVar10,param_3,param_4);
                if (iVar1 == 0) goto joined_r0x00396680;
              }
              *param_5 = 0;
              goto LAB_0039668c;
            }
            *param_5 = 1;
          }
        }
joined_r0x00396680:
        if (param_1 != 0) goto LAB_00396688;
      }
LAB_00396684:
      FUN_0038f4f4(local_80);
    }
LAB_00396688:
    local_80 = 0;
LAB_0039668c:
    FUN_0039180c(param_4);
    return local_80;
  }
  FUN_003916e0(param_4);
  lVar5 = FUN_00391898(param_4);
  lVar7 = FUN_00391898(param_4);
  lVar6 = FUN_00391898(param_4);
  puVar12 = (undefined8 *)FUN_00391898(param_4);
  local_98 = FUN_00391898(param_4);
  lVar9 = FUN_00391898(param_4);
  lVar10 = FUN_00391898(param_4);
  if (lVar10 == 0) {
    lVar11 = 0;
    goto LAB_003969ac;
  }
  lVar11 = param_1;
  if ((param_1 == 0) && (lVar11 = FUN_0038f584(), lVar11 == 0)) {
    lVar11 = 0;
LAB_003969b0:
    FUN_0038f4f4(lVar11);
  }
  else {
    iVar1 = FUN_0038f9ec(lVar6,1);
    if (iVar1 != 0) {
      FUN_003907e0(lVar9);
      lVar13 = FUN_0038f85c(lVar7,param_2);
      if (((lVar13 != 0) && (lVar13 = FUN_0038f85c(lVar5,param_3), lVar13 != 0)) &&
         (((*(undefined4 *)(lVar5 + 0x10) = 0, *(int *)(lVar7 + 0x10) == 0 &&
           (iVar1 = FUN_003901ac(lVar7,lVar5), iVar1 < 0)) ||
          (iVar1 = FUN_00397158(lVar7,lVar7,lVar5,param_4), iVar1 != 0)))) {
        iVar1 = FUN_003908a0(param_3);
        if ((iVar1 == 0) || (iVar1 = FUN_0038f2c0(param_3), 0x800 < iVar1)) {
          iVar1 = FUN_0038f448(lVar7);
          if (iVar1 != 0) goto LAB_003966c4;
          iVar1 = -1;
          iVar2 = 1;
          do {
            iVar3 = iVar2;
            iVar2 = iVar1;
            lVar13 = lVar7;
            lVar14 = lVar9;
            lVar9 = lVar6;
            iVar1 = FUN_0038f2c0(lVar5);
            iVar4 = FUN_0038f2c0(lVar13);
            if (iVar1 == iVar4) {
              iVar1 = FUN_0038f9ec(puVar12,1);
              if (iVar1 == 0) goto LAB_003969ac;
              iVar1 = FUN_00398f34(local_98,lVar5,lVar13);
            }
            else {
              iVar1 = FUN_0038f2c0(lVar5);
              iVar4 = FUN_0038f2c0(lVar13);
              if (iVar1 == iVar4 + 1) {
                iVar1 = FUN_00398238(lVar10,lVar13);
                if (iVar1 == 0) goto LAB_003969ac;
                iVar1 = FUN_003901ac(lVar5,lVar10);
                if (iVar1 < 0) {
                  iVar1 = FUN_0038f9ec(puVar12,1);
                  if (iVar1 == 0) goto LAB_003969ac;
                  iVar1 = FUN_00398f34(local_98,lVar5,lVar13);
                }
                else {
                  iVar1 = FUN_00398f34(local_98,lVar5,lVar10);
                  if ((iVar1 == 0) || (iVar1 = FUN_00398c3c(puVar12,lVar10,lVar13), iVar1 == 0))
                  goto LAB_003969ac;
                  iVar1 = FUN_003901ac(lVar5,puVar12);
                  if (iVar1 < 0) {
                    iVar1 = FUN_0038f9ec(puVar12,2);
                  }
                  else {
                    iVar1 = FUN_0038f9ec(puVar12,3);
                    if (iVar1 == 0) goto LAB_003969ac;
                    iVar1 = FUN_00398f34(local_98,local_98,lVar13);
                  }
                }
              }
              else {
                iVar1 = FUN_00397cac(puVar12,local_98,lVar5,lVar13,param_4);
              }
            }
            if (iVar1 == 0) goto LAB_003969ac;
            iVar1 = FUN_00390824(puVar12);
            if (iVar1 == 0) {
              iVar1 = FUN_00390858(puVar12,2);
              if (iVar1 == 0) {
                iVar1 = FUN_00390858(puVar12,4);
                if (iVar1 == 0) {
                  if (*(int *)(puVar12 + 1) == 1) {
                    lVar6 = FUN_0038f85c(lVar5,lVar9);
                    if (lVar6 == 0) goto LAB_003969ac;
                    iVar1 = FUN_003994ec(lVar5,*(undefined8 *)*puVar12);
                  }
                  else {
                    iVar1 = FUN_00392a80(lVar5,puVar12,lVar9,param_4);
                  }
                }
                else {
                  iVar1 = FUN_0039844c(lVar5,lVar9,2);
                }
              }
              else {
                iVar1 = FUN_00398238(lVar5,lVar9);
              }
              if (iVar1 == 0) goto LAB_003969ac;
              iVar1 = FUN_00398c3c(lVar5,lVar5,lVar14);
            }
            else {
              iVar1 = FUN_00398c3c(lVar5,lVar9,lVar14);
            }
            if (iVar1 == 0) goto LAB_003969ac;
            iVar4 = FUN_0038f448(local_98);
            lVar6 = lVar5;
            lVar7 = local_98;
            lVar5 = lVar13;
            local_98 = lVar14;
            iVar1 = iVar3;
          } while (iVar4 == 0);
          if (iVar3 < 0) goto LAB_003966c4;
        }
        else {
          iVar1 = FUN_0038f448(lVar7);
          if (iVar1 == 0) {
            iVar1 = 0;
            do {
              while (iVar2 = FUN_00390428(lVar7,iVar1), iVar2 == 0) {
                iVar2 = FUN_003908a0(lVar6);
                if ((iVar2 != 0) && (iVar2 = FUN_00398d74(lVar6,lVar6,param_3), iVar2 == 0))
                goto LAB_003969ac;
                iVar1 = iVar1 + 1;
                iVar2 = FUN_003982f0(lVar6,lVar6);
                if (iVar2 == 0) goto LAB_003969ac;
              }
              if ((iVar1 != 0) && (iVar1 = FUN_0039886c(lVar7,lVar7,iVar1), iVar1 == 0))
              goto LAB_003969ac;
              iVar1 = 0;
              while (iVar2 = FUN_00390428(lVar5,iVar1), iVar2 == 0) {
                iVar2 = FUN_003908a0(lVar9);
                if ((iVar2 != 0) && (iVar2 = FUN_00398d74(lVar9,lVar9,param_3), iVar2 == 0))
                goto LAB_003969ac;
                iVar2 = FUN_003982f0(lVar9,lVar9);
                iVar1 = iVar1 + 1;
                if (iVar2 == 0) goto LAB_003969ac;
              }
              if ((iVar1 != 0) && (iVar1 = FUN_0039886c(lVar5,lVar5,iVar1), iVar1 == 0))
              goto LAB_003969ac;
              iVar1 = FUN_003901ac(lVar7,lVar5);
              if (iVar1 < 0) {
                iVar1 = FUN_00398d74(lVar9,lVar9,lVar6);
                lVar10 = lVar5;
                lVar13 = lVar7;
              }
              else {
                iVar1 = FUN_00398d74(lVar6,lVar6,lVar9);
                lVar10 = lVar7;
                lVar13 = lVar5;
              }
              if ((iVar1 == 0) || (iVar1 = FUN_00398e30(lVar10,lVar10,lVar13), iVar1 == 0))
              goto LAB_003969ac;
              iVar2 = FUN_0038f448(lVar7);
              iVar1 = 0;
            } while (iVar2 == 0);
          }
LAB_003966c4:
          iVar1 = FUN_00398f34(lVar9,param_3,lVar9);
          lVar13 = extraout_x1;
          if (iVar1 == 0) goto LAB_003969ac;
        }
        iVar1 = FUN_00390824(lVar5,lVar13);
        if (iVar1 == 0) {
          *param_5 = 1;
        }
        else if ((*(int *)(lVar9 + 0x10) == 0) && (iVar1 = FUN_003901ac(lVar9,param_3), iVar1 < 0))
        {
          lVar6 = FUN_0038f85c(lVar11,lVar9);
          if (lVar6 != 0) goto LAB_003969bc;
        }
        else {
          iVar1 = FUN_00397158(lVar11,lVar9,param_3,param_4);
          if (iVar1 != 0) goto LAB_003969bc;
        }
      }
    }
LAB_003969ac:
    if (param_1 == 0) goto LAB_003969b0;
  }
  lVar11 = 0;
LAB_003969bc:
  FUN_0039180c(param_4);
  return lVar11;
}


// ===== 00396a18  FUN_00396a18 =====

/* WARNING: Removing unreachable block (ram,0x00396a78) */

undefined8 FUN_00396a18(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_4 == 0) {
    lVar2 = FUN_00391448(0);
    if (lVar2 == 0) {
      FUN_00379868(param_1,param_2,param_3);
      FUN_0037995c("crypto/bn/bn_gcd.c",0x20d,"BN_mod_inverse");
      FUN_00379a5c(3,0x80003,0);
      return 0;
    }
  }
  else {
    lVar2 = 0;
  }
  uVar1 = FUN_00396118();
  FUN_00391550(lVar2);
  return uVar1;
}


// ===== 00396b08  FUN_00396b08 =====

bool FUN_00396b08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  
  FUN_003916e0(param_3);
  lVar2 = FUN_00391898(param_3);
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    FUN_0037f6d4();
    FUN_00390944(param_1,4);
    lVar2 = FUN_00396a18(lVar2,param_1,param_2,param_3);
    bVar1 = lVar2 != 0;
    FUN_0037f71c();
  }
  FUN_0039180c(param_3);
  return bVar1;
}


// ===== 00396b90  FUN_00396b90 =====

bool FUN_00396b90(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  uint uVar63;
  uint uVar64;
  bool bVar65;
  int iVar66;
  int iVar67;
  int iVar68;
  int iVar69;
  long lVar70;
  undefined8 uVar71;
  long *plVar72;
  ulong uVar73;
  uint uVar74;
  uint uVar75;
  
  iVar66 = FUN_0038f448(param_3);
  uVar71 = param_2;
  if ((iVar66 != 0) || (iVar66 = FUN_0038f448(param_2), uVar71 = param_3, iVar66 != 0)) {
    lVar70 = FUN_0038f85c(param_1,uVar71);
    *(undefined4 *)(param_1 + 2) = 0;
    return lVar70 != 0;
  }
  FUN_003916e0(param_4);
  uVar71 = FUN_00391898(param_4);
  plVar72 = (long *)FUN_00391898(param_4);
  if (((plVar72 != (long *)0x0) && (iVar66 = FUN_00398238(plVar72,param_3), iVar66 != 0)) &&
     (iVar66 = FUN_00398238(param_1,param_2), iVar66 != 0)) {
    if ((int)*(uint *)((long)param_1 + 0xc) < 1) {
      iVar66 = 0;
    }
    else {
      lVar70 = 0;
      iVar66 = 0;
      uVar74 = 1;
      do {
        if ((ulong)(*(uint *)((long)plVar72 + 0xc) &
                   ((int)*(uint *)((long)plVar72 + 0xc) >> 0x1f ^ 0xffffffffU)) << 3 == lVar70)
        break;
        puVar1 = (ulong *)(*param_1 + lVar70);
        puVar2 = (ulong *)(*plVar72 + lVar70);
        lVar70 = lVar70 + 8;
        uVar73 = ~(*puVar2 | *puVar1);
        uVar75 = uVar74 & (uint)uVar73;
        uVar3 = uVar75 & (uint)(uVar73 >> 1);
        uVar4 = uVar3 & (uint)(uVar73 >> 2);
        uVar5 = uVar4 & (uint)(uVar73 >> 3);
        uVar6 = uVar5 & (uint)(uVar73 >> 4);
        uVar7 = uVar6 & (uint)(uVar73 >> 5);
        uVar8 = uVar7 & (uint)(uVar73 >> 6);
        uVar9 = uVar8 & (uint)(uVar73 >> 7);
        uVar10 = uVar9 & (uint)(uVar73 >> 8);
        uVar11 = uVar10 & (uint)(uVar73 >> 9);
        uVar12 = uVar11 & (uint)(uVar73 >> 10);
        uVar13 = uVar12 & (uint)(uVar73 >> 0xb);
        uVar14 = uVar13 & (uint)(uVar73 >> 0xc);
        uVar15 = uVar14 & (uint)(uVar73 >> 0xd);
        uVar16 = uVar15 & (uint)(uVar73 >> 0xe);
        uVar17 = uVar16 & (uint)(uVar73 >> 0xf);
        uVar18 = uVar17 & (uint)(uVar73 >> 0x10);
        uVar19 = uVar18 & (uint)(uVar73 >> 0x11);
        uVar20 = uVar19 & (uint)(uVar73 >> 0x12);
        uVar21 = uVar20 & (uint)(uVar73 >> 0x13);
        uVar22 = uVar21 & (uint)(uVar73 >> 0x14);
        uVar23 = uVar22 & (uint)(uVar73 >> 0x15);
        uVar24 = uVar23 & (uint)(uVar73 >> 0x16);
        uVar25 = uVar24 & (uint)(uVar73 >> 0x17);
        uVar26 = uVar25 & (uint)(uVar73 >> 0x18);
        uVar27 = uVar26 & (uint)(uVar73 >> 0x19);
        uVar28 = uVar27 & (uint)(uVar73 >> 0x1a);
        uVar29 = uVar28 & (uint)(uVar73 >> 0x1b);
        uVar30 = uVar29 & (uint)(uVar73 >> 0x1c);
        uVar31 = uVar30 & (uint)(uVar73 >> 0x1d);
        uVar32 = uVar31 & (uint)(uVar73 >> 0x1e);
        uVar33 = uVar32 & (uint)(uVar73 >> 0x1f);
        uVar74 = (uint)(uVar73 >> 0x20);
        uVar34 = uVar33 & uVar74;
        uVar35 = uVar34 & uVar74 >> 1;
        uVar36 = uVar35 & uVar74 >> 2;
        uVar37 = uVar36 & uVar74 >> 3;
        uVar38 = uVar37 & uVar74 >> 4;
        uVar39 = uVar38 & uVar74 >> 5;
        uVar40 = uVar39 & uVar74 >> 6;
        uVar41 = uVar40 & uVar74 >> 7;
        uVar42 = uVar41 & uVar74 >> 8;
        uVar43 = uVar42 & uVar74 >> 9;
        uVar44 = uVar43 & uVar74 >> 10;
        uVar45 = uVar44 & uVar74 >> 0xb;
        uVar46 = uVar45 & uVar74 >> 0xc;
        uVar47 = uVar46 & uVar74 >> 0xd;
        uVar48 = uVar47 & uVar74 >> 0xe;
        uVar49 = uVar48 & uVar74 >> 0xf;
        uVar50 = uVar49 & (ushort)(uVar73 >> 0x30);
        uVar51 = uVar50 & uVar74 >> 0x11;
        uVar52 = uVar51 & uVar74 >> 0x12;
        uVar53 = uVar52 & uVar74 >> 0x13;
        uVar54 = uVar53 & uVar74 >> 0x14;
        uVar55 = uVar54 & uVar74 >> 0x15;
        uVar56 = uVar55 & uVar74 >> 0x16;
        uVar57 = uVar56 & uVar74 >> 0x17;
        uVar58 = uVar57 & (byte)(uVar73 >> 0x38);
        uVar59 = uVar58 & uVar74 >> 0x19;
        uVar60 = uVar59 & uVar74 >> 0x1a;
        uVar61 = uVar60 & uVar74 >> 0x1b;
        uVar62 = uVar61 & uVar74 >> 0x1c;
        uVar63 = uVar62 & uVar74 >> 0x1d;
        uVar64 = uVar63 & uVar74 >> 0x1e;
        uVar74 = uVar64 & uVar74 >> 0x1f;
        iVar66 = iVar66 + uVar75 + uVar3 + uVar4 + uVar5 + uVar6 + uVar7 + uVar8 + uVar9 + uVar10 +
                 uVar11 + uVar12 + uVar13 + uVar14 + uVar15 + uVar16 + uVar17 + uVar18 + uVar19 +
                 uVar20 + uVar21 + uVar22 + uVar23 + uVar24 + uVar25 + uVar26 + uVar27 + uVar28 +
                 uVar29 + uVar30 + uVar31 + uVar32 + uVar33 + uVar34 + uVar35 + uVar36 + uVar37 +
                 uVar38 + uVar39 + uVar40 + uVar41 + uVar42 + uVar43 + uVar44 + uVar45 + uVar46 +
                 uVar47 + uVar48 + uVar49 + uVar50 + uVar51 + uVar52 + uVar53 + uVar54 + uVar55 +
                 uVar56 + uVar57 + uVar58 + uVar59 + uVar60 + uVar61 + uVar62 + uVar63 + uVar64 +
                 uVar74;
      } while ((ulong)*(uint *)((long)param_1 + 0xc) * 8 - lVar70 != 0);
    }
    iVar67 = FUN_0039886c(param_1,param_1,iVar66);
    if ((iVar67 != 0) && (iVar67 = FUN_0039886c(plVar72,plVar72,iVar66), iVar67 != 0)) {
      iVar67 = (int)param_1[1];
      if ((int)param_1[1] <= (int)plVar72[1]) {
        iVar67 = (int)plVar72[1];
      }
      lVar70 = FUN_0038f924(param_1,iVar67 + 1);
      if (((lVar70 != 0) && (lVar70 = FUN_0038f924(plVar72,iVar67 + 1), lVar70 != 0)) &&
         (lVar70 = FUN_0038f924(uVar71,iVar67 + 1), lVar70 != 0)) {
        FUN_00390614(~*(uint *)*param_1 & 1,param_1,plVar72,iVar67 + 1);
        iVar68 = FUN_0038f2c0(param_1);
        iVar69 = FUN_0038f2c0(plVar72);
        if (iVar68 <= iVar69) {
          iVar68 = iVar69;
        }
        if (iVar68 + 1 < 0 == SCARRY4(iVar68,1)) {
          uVar75 = 1;
          uVar74 = iVar68 * 3 + 3;
          iVar68 = (uVar74 & ((int)uVar74 >> 0x1f ^ 0xffffffffU)) + 1;
          do {
            uVar3 = -uVar75;
            uVar74 = *(uint *)*plVar72 & uVar3 >> 0x1f & ((int)plVar72[1] - 1U >> 0x1f ^ 0xffffffff)
            ;
            *(uint *)(param_1 + 2) = uVar74 ^ *(uint *)(param_1 + 2);
            FUN_00390614(uVar74,param_1,plVar72,iVar67 + 1);
            iVar69 = FUN_00398c3c(uVar71,plVar72,param_1);
            if (iVar69 == 0) goto LAB_00397144;
            FUN_00390614(*(uint *)*plVar72 & ((int)plVar72[1] - 1U >> 0x1f ^ 0xffffffff) & 1,plVar72
                         ,uVar71,iVar67 + 1);
            iVar69 = FUN_003982f0(plVar72,plVar72);
            if (iVar69 == 0) goto LAB_00397144;
            if (uVar74 != 0) {
              uVar75 = 0;
            }
            iVar68 = iVar68 + -1;
            uVar75 = (uVar75 | -uVar74 & uVar3) + 1;
          } while (iVar68 != 0);
        }
        *(undefined4 *)(param_1 + 2) = 0;
        iVar66 = FUN_0039844c(param_1,param_1,iVar66);
        if (iVar66 != 0) {
          iVar66 = FUN_003982f0(param_1,param_1);
          bVar65 = iVar66 != 0;
          goto LAB_00397148;
        }
      }
    }
  }
LAB_00397144:
  bVar65 = false;
LAB_00397148:
  FUN_0039180c(param_4);
  return bVar65;
}


// ===== 00397158  FUN_00397158 =====

undefined8 FUN_00397158(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (param_1 == param_3) {
    FUN_00379868();
    FUN_0037995c("crypto/bn/bn_mod.c",0x15,"BN_nnmod");
    FUN_00379a5c(3,0x80106,0);
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00397cac(0,param_1,param_2,param_3,param_4);
    if ((int)uVar1 != 0) {
      if (*(int *)(param_1 + 0x10) != 0) {
        UNRECOVERED_JUMPTABLE = (code *)PTR_FUN_007a1a38;
        if (*(int *)(param_3 + 0x10) != 0) {
          UNRECOVERED_JUMPTABLE = (code *)PTR_FUN_007a1a40;
        }
                    /* WARNING: Could not recover jumptable at 0x003971c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_1,param_3);
        return uVar1;
      }
      return 1;
    }
  }
  return uVar1;
}


// ===== 0039721c  FUN_0039721c =====

undefined8
FUN_0039721c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  uVar1 = FUN_00398c3c();
  if ((int)uVar1 != 0) {
    if (param_1 == param_4) {
      FUN_00379868();
      FUN_0037995c("crypto/bn/bn_mod.c",0x15,"BN_nnmod");
      FUN_00379a5c(3,0x80106,0);
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_00397cac(0,param_1,param_1,param_4,param_5);
      if ((int)uVar1 != 0) {
        if (*(int *)(param_1 + 0x10) != 0) {
          UNRECOVERED_JUMPTABLE = (code *)PTR_FUN_007a1a38;
          if (*(int *)(param_4 + 0x10) != 0) {
            UNRECOVERED_JUMPTABLE = (code *)PTR_FUN_007a1a40;
          }
                    /* WARNING: Could not recover jumptable at 0x003972a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_1,param_4);
          return uVar1;
        }
        return 1;
      }
    }
  }
  return uVar1;
}


// ===== 003972fc  FUN_003972fc =====

long FUN_003972fc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong *puVar17;
  long lVar18;
  ulong *puVar19;
  ulong uVar20;
  ulong auStack_d0 [16];
  
  puVar6 = auStack_d0;
  uVar4 = *(uint *)(param_4 + 1);
  lVar5 = FUN_0038f924(param_1,uVar4);
  if (lVar5 != 0) {
    lVar5 = (long)(int)uVar4;
    if ((uVar4 < 0x11) ||
       (puVar6 = (ulong *)FUN_003c83a4(lVar5 << 3,"crypto/bn/bn_mod.c",0x41), puVar6 != (ulong *)0x0
       )) {
      puVar19 = puVar6;
      if ((ulong *)*param_2 != (ulong *)0x0) {
        puVar19 = (ulong *)*param_2;
      }
      puVar11 = puVar6;
      if ((ulong *)*param_3 != (ulong *)0x0) {
        puVar11 = (ulong *)*param_3;
      }
      if (uVar4 == 0) {
        uVar9 = 0;
      }
      else {
        lVar10 = 0;
        lVar12 = 0;
        lVar14 = -(long)*(int *)(param_2 + 2);
        lVar16 = -(long)*(int *)(param_2 + 1);
        lVar13 = -(long)*(int *)(param_3 + 2);
        lVar15 = -(long)*(int *)(param_3 + 1);
        puVar17 = puVar6;
        lVar18 = lVar5;
        uVar20 = 0;
        do {
          lVar14 = lVar14 + 1;
          lVar13 = lVar13 + 1;
          puVar1 = puVar19 + lVar10;
          puVar2 = puVar11 + lVar12;
          lVar10 = lVar10 - (lVar14 >> 0x3f);
          lVar12 = lVar12 - (lVar13 >> 0x3f);
          uVar7 = *puVar1 & lVar16 >> 0x3f;
          uVar8 = *puVar2 & lVar15 >> 0x3f;
          lVar15 = lVar15 + 1;
          lVar16 = lVar16 + 1;
          uVar3 = uVar7 + uVar20;
          uVar9 = (ulong)CARRY8(uVar8,uVar3);
          if (CARRY8(uVar7,uVar20)) {
            uVar9 = uVar9 + 1;
          }
          lVar18 = lVar18 + -1;
          *puVar17 = uVar8 + uVar3;
          puVar17 = puVar17 + 1;
          uVar20 = uVar9;
        } while (lVar18 != 0);
      }
      puVar19 = (ulong *)*param_1;
      lVar15 = FUN_00393448(puVar19,puVar6,*param_4,uVar4);
      if (uVar4 != 0) {
        puVar11 = puVar6;
        do {
          lVar5 = lVar5 + -1;
          *puVar19 = *puVar19 & ~(uVar9 - lVar15) | *puVar11 & uVar9 - lVar15;
          *puVar11 = 0;
          puVar11 = puVar11 + 1;
          puVar19 = puVar19 + 1;
        } while (lVar5 != 0);
      }
      *(uint *)(param_1 + 1) = uVar4;
      *(undefined4 *)(param_1 + 2) = 0;
      if (puVar6 != auStack_d0) {
        FUN_003c86b4(puVar6,"crypto/bn/bn_mod.c",0x61);
      }
      lVar5 = 1;
    }
    else {
      lVar5 = 0;
    }
  }
  return lVar5;
}


// ===== 00397498  FUN_00397498 =====

ulong FUN_00397498(undefined8 param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_003972fc();
  if ((int)uVar1 != 0) {
    uVar1 = uVar1 & 0xffffffff;
    FUN_003903e8(param_1);
  }
  return uVar1;
}


// ===== 003974cc  FUN_003974cc =====

undefined8
FUN_003974cc(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  uVar1 = FUN_00398f34();
  if ((int)uVar1 != 0) {
    if (param_1 == param_4) {
      FUN_00379868();
      FUN_0037995c("crypto/bn/bn_mod.c",0x15,"BN_nnmod");
      FUN_00379a5c(3,0x80106,0);
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_00397cac(0,param_1,param_1,param_4,param_5);
      if ((int)uVar1 != 0) {
        if (*(int *)(param_1 + 0x10) != 0) {
          UNRECOVERED_JUMPTABLE = (code *)PTR_FUN_007a1a38;
          if (*(int *)(param_4 + 0x10) != 0) {
            UNRECOVERED_JUMPTABLE = (code *)PTR_FUN_007a1a40;
          }
                    /* WARNING: Could not recover jumptable at 0x00397550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_1,param_4);
          return uVar1;
        }
        return 1;
      }
    }
  }
  return uVar1;
}


// ===== 003975ac  FUN_003975ac =====

long FUN_003975ac(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,long *param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *puVar15;
  ulong uVar16;
  long lVar17;
  ulong *puVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  
  iVar3 = (int)param_4[1];
  lVar4 = FUN_0038f924(param_1,iVar3);
  if (lVar4 != 0) {
    puVar11 = (ulong *)*param_1;
    puVar15 = puVar11;
    if ((ulong *)*param_2 != (ulong *)0x0) {
      puVar15 = (ulong *)*param_2;
    }
    puVar18 = puVar11;
    if ((ulong *)*param_3 != (ulong *)0x0) {
      puVar18 = (ulong *)*param_3;
    }
    if (iVar3 != 0) {
      lVar12 = (long)iVar3;
      uVar14 = 0;
      lVar17 = 0;
      uVar13 = 0;
      lVar19 = 0;
      lVar20 = -(long)*(int *)(param_3 + 2);
      lVar21 = -(long)*(int *)(param_2 + 2);
      lVar4 = -(long)*(int *)(param_3 + 1);
      lVar5 = -(long)*(int *)(param_2 + 1);
      puVar7 = puVar11;
      lVar8 = lVar12;
      do {
        lVar21 = lVar21 + 1;
        lVar20 = lVar20 + 1;
        puVar1 = puVar15 + lVar17;
        puVar2 = puVar18 + lVar19;
        lVar17 = lVar17 - (lVar21 >> 0x3f);
        lVar19 = lVar19 - (lVar20 >> 0x3f);
        uVar9 = *puVar1 & lVar5 >> 0x3f;
        uVar10 = *puVar2 & lVar4 >> 0x3f;
        lVar4 = lVar4 + 1;
        lVar5 = lVar5 + 1;
        if (uVar9 != uVar10) {
          uVar13 = (ulong)(uVar9 < uVar10);
        }
        *puVar7 = (uVar9 + uVar14) - uVar10;
        lVar8 = lVar8 + -1;
        uVar14 = -uVar13;
        puVar7 = puVar7 + 1;
      } while (lVar8 != 0);
      if (iVar3 != 0) {
        puVar15 = (ulong *)*param_4;
        uVar9 = 0;
        puVar18 = puVar15;
        puVar7 = puVar11;
        lVar4 = lVar12;
        do {
          uVar10 = (*puVar18 & uVar14) + uVar9;
          uVar6 = (ulong)CARRY8(uVar10,*puVar7);
          if (CARRY8(*puVar18 & uVar14,uVar9)) {
            uVar6 = uVar6 + 1;
          }
          lVar4 = lVar4 + -1;
          *puVar7 = uVar10 + *puVar7;
          uVar9 = uVar6;
          puVar18 = puVar18 + 1;
          puVar7 = puVar7 + 1;
        } while (lVar4 != 0);
        if (iVar3 != 0) {
          uVar14 = 0;
          do {
            uVar16 = *puVar15 & uVar6 - uVar13;
            uVar9 = uVar16 + uVar14;
            uVar10 = (ulong)CARRY8(uVar9,*puVar11);
            if (CARRY8(uVar16,uVar14)) {
              uVar10 = uVar10 + 1;
            }
            lVar12 = lVar12 + -1;
            *puVar11 = uVar9 + *puVar11;
            puVar11 = puVar11 + 1;
            uVar14 = uVar10;
            puVar15 = puVar15 + 1;
          } while (lVar12 != 0);
        }
      }
    }
    lVar4 = 1;
    *(int *)(param_1 + 1) = iVar3;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return lVar4;
}


// ===== 00397720  FUN_00397720 =====

undefined8 FUN_00397720(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  if (param_1 == param_4) {
    FUN_00379868();
    FUN_0037995c("crypto/bn/bn_mod.c",0xc1,"BN_mod_sub_quick");
    FUN_00379a5c(3,0x80106,0);
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00398f34();
    if ((int)uVar1 != 0) {
      if (*(int *)(param_1 + 0x10) != 0) {
        uVar1 = FUN_00398c3c(param_1,param_1,param_4);
        return uVar1;
      }
      return 1;
    }
  }
  return uVar1;
}


// ===== 003977b4  FUN_003977b4 =====

undefined4 FUN_003977b4(long param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  
  FUN_003916e0(param_5);
  lVar3 = FUN_00391898(param_5);
  if (lVar3 != 0) {
    if (param_2 == param_3) {
      iVar2 = FUN_00395c7c(lVar3,param_2,param_5);
    }
    else {
      iVar2 = FUN_00392a80(lVar3,param_2,param_3,param_5);
    }
    if (iVar2 != 0) {
      if (param_1 == param_4) {
        FUN_00379868();
        FUN_0037995c("crypto/bn/bn_mod.c",0x15,"BN_nnmod");
        FUN_00379a5c(3,0x80106,0);
      }
      else {
        iVar2 = FUN_00397cac(0,param_1,lVar3,param_4,param_5);
        if (iVar2 != 0) {
          if (*(int *)(param_1 + 0x10) != 0) {
            pcVar1 = (code *)PTR_FUN_007a1a38;
            if (*(int *)(param_4 + 0x10) != 0) {
              pcVar1 = (code *)PTR_FUN_007a1a40;
            }
            iVar2 = (*pcVar1)(param_1,param_1,param_4);
            if (iVar2 == 0) goto LAB_003978b4;
          }
          uVar4 = 1;
          goto LAB_003978b8;
        }
      }
    }
  }
LAB_003978b4:
  uVar4 = 0;
LAB_003978b8:
  FUN_0039180c(param_5);
  return uVar4;
}


// ===== 003978d8  FUN_003978d8 =====

void FUN_003978d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00395c7c(param_1,param_2,param_4);
  if (iVar1 != 0) {
    FUN_00397cac(0,param_1,param_1,param_3,param_4);
    return;
  }
  return;
}


// ===== 00397934  FUN_00397934 =====

undefined8 FUN_00397934(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  uVar1 = FUN_00398238();
  if ((int)uVar1 != 0) {
    if (param_1 == param_3) {
      FUN_00379868();
      FUN_0037995c("crypto/bn/bn_mod.c",0x15,"BN_nnmod");
      FUN_00379a5c(3,0x80106,0);
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_00397cac(0,param_1,param_1,param_3,param_4);
      if ((int)uVar1 != 0) {
        if (*(int *)(param_1 + 0x10) != 0) {
          UNRECOVERED_JUMPTABLE = (code *)PTR_FUN_007a1a38;
          if (*(int *)(param_3 + 0x10) != 0) {
            UNRECOVERED_JUMPTABLE = (code *)PTR_FUN_007a1a40;
          }
                    /* WARNING: Could not recover jumptable at 0x003979b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_1,param_3);
          return uVar1;
        }
        return 1;
      }
    }
  }
  return uVar1;
}


// ===== 00397a14  FUN_00397a14 =====

undefined8 FUN_00397a14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_00398238();
  if ((int)uVar2 != 0) {
    iVar1 = FUN_00390208(param_1,param_3);
    if (-1 < iVar1) {
      uVar2 = FUN_00398f34(param_1,param_1,param_3);
      return uVar2;
    }
    uVar2 = 1;
  }
  return uVar2;
}


// ===== 00397a68  FUN_00397a68 =====

undefined4 FUN_00397a68(long param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  
  if (param_1 == param_4) {
    FUN_00379868();
    FUN_0037995c("crypto/bn/bn_mod.c",0x15,"BN_nnmod");
    FUN_00379a5c(3,0x80106,0);
  }
  else {
    iVar2 = FUN_00397cac(0,param_1,param_2);
    if (iVar2 != 0) {
      if (*(int *)(param_1 + 0x10) != 0) {
        pcVar1 = (code *)PTR_FUN_007a1a38;
        if (*(int *)(param_4 + 0x10) != 0) {
          pcVar1 = (code *)PTR_FUN_007a1a40;
        }
        iVar2 = (*pcVar1)(param_1,param_1,param_4);
        if (iVar2 == 0) {
          return 0;
        }
      }
      if (*(int *)(param_4 + 0x10) == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = FUN_0038f720(param_4);
        if (lVar4 == 0) {
          return 0;
        }
        *(undefined4 *)(lVar4 + 0x10) = 0;
      }
      if (lVar4 != 0) {
        param_4 = lVar4;
      }
      uVar3 = FUN_00397b78(param_1,param_1,param_3,param_4);
      FUN_0038f4f4(lVar4);
      return uVar3;
    }
  }
  return 0;
}


// ===== 00397b78  FUN_00397b78 =====

long FUN_00397b78(long param_1,long param_2,uint param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  if ((param_1 == param_2) || (lVar4 = FUN_0038f85c(param_1), lVar4 != 0)) {
    if (0 < (int)param_3) {
      do {
        iVar2 = FUN_0038f2c0(param_4);
        iVar3 = FUN_0038f2c0(param_1);
        uVar1 = iVar2 - iVar3;
        if ((int)uVar1 < 0) {
          FUN_00379868();
          FUN_0037995c("crypto/bn/bn_mod.c",0x132,"BN_mod_lshift_quick");
          FUN_00379a5c(3,0x6e,0);
          return 0;
        }
        if (param_3 <= uVar1) {
          uVar1 = param_3;
        }
        if (iVar2 == iVar3) {
          lVar4 = FUN_00398238(param_1,param_1);
          if ((int)lVar4 == 0) {
            return lVar4;
          }
          param_3 = param_3 - 1;
          iVar2 = FUN_00390208(param_1,param_4);
        }
        else {
          lVar4 = FUN_0039844c(param_1,param_1,uVar1);
          if ((int)lVar4 == 0) {
            return lVar4;
          }
          param_3 = param_3 - uVar1;
          iVar2 = FUN_00390208(param_1,param_4);
        }
        if ((-1 < iVar2) && (lVar4 = FUN_00398f34(param_1,param_1,param_4), (int)lVar4 == 0)) {
          return lVar4;
        }
      } while (0 < (int)param_3);
    }
    lVar4 = 1;
  }
  return lVar4;
}


// ===== 00397cac  FUN_00397cac =====

undefined8
FUN_00397cac(long param_1,long param_2,undefined8 param_3,long *param_4,undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_0038f448(param_4);
  if (iVar1 == 0) {
    if (*(long *)(*param_4 + (long)(int)param_4[1] * 8 + -8) != 0) {
      uVar2 = FUN_00397dac(param_1,param_2,param_3,param_4,param_5);
      if ((int)uVar2 == 0) {
        return uVar2;
      }
      if (param_1 != 0) {
        FUN_003903e8(param_1);
      }
      if (param_2 != 0) {
        FUN_003903e8(param_2);
      }
      return 1;
    }
    FUN_00379868();
    FUN_0037995c("crypto/bn/bn_div.c",0xe1,"BN_div");
    uVar2 = 0x6b;
  }
  else {
    FUN_00379868();
    FUN_0037995c("crypto/bn/bn_div.c",0xd7,"BN_div");
    uVar2 = 0x67;
  }
  FUN_00379a5c(3,uVar2,0);
  return 0;
}


// ===== 00397dac  FUN_00397dac =====

undefined4 FUN_00397dac(long *param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong *puVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 *puVar23;
  ulong *puVar24;
  ulong uVar25;
  int iVar26;
  ulong *puVar27;
  undefined4 uVar28;
  long lVar29;
  ulong uVar30;
  ulong uVar31;
  long *plVar32;
  ulong *puVar33;
  ulong uVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  ulong local_a0;
  
  FUN_003916e0(param_5);
  if (param_1 == (long *)0x0) {
    param_1 = (long *)FUN_00391898(param_5);
  }
  plVar8 = (long *)FUN_00391898(param_5);
  plVar9 = (long *)FUN_00391898(param_5);
  plVar10 = (long *)FUN_00391898(param_5);
  if ((plVar10 != (long *)0x0) && (lVar11 = FUN_0038f85c(plVar10,param_4), lVar11 != 0)) {
    puVar27 = (ulong *)*plVar10;
    lVar16 = plVar10[1];
    lVar11 = (long)(int)lVar16;
    uVar6 = FUN_0038f248(puVar27[lVar11 + -1]);
    uVar2 = uVar6 & 0x3f;
    uVar34 = (ulong)(0x40 - uVar6);
    if ((int)uVar6 < 1) {
      uVar2 = -(-uVar6 & 0x3f);
    }
    if (0 < (int)lVar16) {
      uVar18 = 0;
      do {
        uVar21 = *puVar27;
        lVar11 = lVar11 + -1;
        *puVar27 = uVar21 << (uVar34 & 0x3f) | uVar18;
        uVar18 = uVar21 >> ((ulong)uVar2 & 0x3f) &
                 ((long)(int)-uVar2 | (ulong)(long)(int)-uVar2 >> 8);
        puVar27 = puVar27 + 1;
      } while (lVar11 != 0);
    }
    *(undefined4 *)(plVar10 + 2) = 0;
    iVar7 = FUN_00398680(plVar9,param_3,uVar34);
    if (iVar7 != 0) {
      uVar2 = *(uint *)(plVar10 + 1);
      uVar18 = (ulong)uVar2;
      iVar4 = (int)plVar9[1];
      iVar7 = iVar4;
      if (iVar4 <= (int)uVar2) {
        iVar7 = uVar2 + 1;
        lVar11 = FUN_0038f924(plVar9,iVar7);
        if (lVar11 == 0) goto LAB_003981fc;
        memset((void *)(*plVar9 + (long)iVar4 * 8),0,
               -(ulong)((uint)(iVar7 - iVar4) >> 0x1f) & 0xfffffff800000000 |
               (ulong)(uint)(iVar7 - iVar4) << 3);
        *(int *)(plVar9 + 1) = iVar7;
      }
      iVar4 = iVar7 - uVar2;
      lVar11 = *plVar10 + (long)(int)uVar2 * 8;
      if (uVar2 == 1) {
        local_a0 = 0;
      }
      else {
        local_a0 = *(ulong *)(lVar11 + -0x10);
      }
      lVar16 = *plVar9;
      uVar21 = *(ulong *)(lVar11 + -8);
      lVar11 = FUN_0038f924(param_1,iVar4);
      if (lVar11 != 0) {
        uVar6 = *(uint *)(param_3 + 0x10);
        uVar3 = *(uint *)(param_4 + 0x10);
        lVar29 = *param_1;
        *(int *)(param_1 + 1) = iVar4;
        *(uint *)(param_1 + 2) = uVar3 ^ uVar6;
        lVar11 = FUN_0038f924(plVar8,uVar2 + 1);
        if (lVar11 != 0) {
          if (0 < iVar4) {
            iVar26 = 0;
            plVar32 = (long *)(lVar29 + (long)iVar4 * 8);
            puVar27 = (ulong *)(lVar16 + (long)iVar4 * 8);
            uVar13 = uVar18 & 0x7ffffffc;
            puVar33 = (ulong *)(lVar16 + (long)iVar7 * 8 + -8);
            do {
              uVar31 = puVar33[-1];
              if (*puVar33 == uVar21) {
                uVar30 = 0xffffffffffffffff;
              }
              else {
                if (puVar33 == puVar27) {
                  uVar15 = 0;
                }
                else {
                  uVar15 = puVar33[-2];
                }
                uVar30 = FUN_0039317c(*puVar33,uVar31,uVar21);
                uVar22 = (uVar30 >> 0x20) * (local_a0 & 0xffffffff);
                uVar25 = (uVar30 & 0xffffffff) * (local_a0 >> 0x20);
                uVar14 = uVar30 * local_a0;
                uVar1 = uVar22 + uVar25;
                lVar11 = 0x100000000;
                if (!CARRY8(uVar22,uVar25)) {
                  lVar11 = 0;
                }
                uVar22 = (uVar1 >> 0x20) + (uVar30 >> 0x20) * (local_a0 >> 0x20) + lVar11;
                if (uVar14 < uVar1 << 0x20) {
                  uVar22 = uVar22 + 1;
                }
                if (uVar31 - uVar30 * uVar21 <= uVar22) {
                  lVar11 = uVar21 * uVar30;
                  lVar16 = -uVar21 * uVar30;
                  uVar1 = uVar30;
                  do {
                    uVar30 = uVar1;
                    if ((lVar16 + uVar31 == uVar22) && (uVar14 <= uVar15)) goto LAB_00398104;
                    if ((uVar21 - lVar11) + uVar31 < uVar21) break;
                    bVar5 = uVar14 < local_a0;
                    uVar14 = uVar14 - local_a0;
                    uVar31 = uVar31 + uVar21;
                    uVar22 = uVar22 - bVar5;
                    uVar1 = uVar30 - 1;
                  } while (lVar16 + uVar31 <= uVar22);
                  uVar30 = uVar30 - 1;
                }
              }
LAB_00398104:
              uVar12 = FUN_00392ee8(*plVar8,*plVar10,uVar2,uVar30);
              lVar11 = *plVar8;
              puVar27 = puVar27 + -1;
              *(undefined8 *)(lVar11 + (long)(int)uVar2 * 8) = uVar12;
              lVar11 = FUN_00393448(puVar27,puVar27,lVar11,uVar2 + 1);
              lVar16 = *plVar8;
              if (0 < (int)uVar2) {
                lVar29 = *plVar10;
                uVar15 = -lVar11;
                uVar31 = 0;
                if ((3 < uVar2) && (0x1f < (ulong)(lVar16 - lVar29))) {
                  puVar19 = (undefined8 *)(lVar29 + 0x10);
                  puVar23 = (undefined8 *)(lVar16 + 0x10);
                  uVar31 = uVar13;
                  do {
                    uVar43 = puVar19[-1];
                    uVar12 = puVar19[-2];
                    uVar45 = puVar19[1];
                    uVar44 = *puVar19;
                    uVar31 = uVar31 - 4;
                    puVar19 = puVar19 + 4;
                    bVar35 = (byte)uVar15;
                    bVar36 = (byte)(uVar15 >> 8);
                    bVar37 = (byte)(uVar15 >> 0x10);
                    bVar38 = (byte)(uVar15 >> 0x18);
                    bVar39 = (byte)(uVar15 >> 0x20);
                    bVar40 = (byte)(uVar15 >> 0x28);
                    bVar41 = (byte)(uVar15 >> 0x30);
                    bVar42 = (byte)(uVar15 >> 0x38);
                    puVar23[-1] = CONCAT17((byte)((ulong)uVar43 >> 0x38) & bVar42,
                                           CONCAT16((byte)((ulong)uVar43 >> 0x30) & bVar41,
                                                    CONCAT15((byte)((ulong)uVar43 >> 0x28) & bVar40,
                                                             CONCAT14((byte)((ulong)uVar43 >> 0x20)
                                                                      & bVar39,CONCAT13((byte)((
                                                  ulong)uVar43 >> 0x18) & bVar38,
                                                  CONCAT12((byte)((ulong)uVar43 >> 0x10) & bVar37,
                                                           CONCAT11((byte)((ulong)uVar43 >> 8) &
                                                                    bVar36,(byte)uVar43 & bVar35))))
                                                  )));
                    puVar23[-2] = CONCAT17((byte)((ulong)uVar12 >> 0x38) & bVar42,
                                           CONCAT16((byte)((ulong)uVar12 >> 0x30) & bVar41,
                                                    CONCAT15((byte)((ulong)uVar12 >> 0x28) & bVar40,
                                                             CONCAT14((byte)((ulong)uVar12 >> 0x20)
                                                                      & bVar39,CONCAT13((byte)((
                                                  ulong)uVar12 >> 0x18) & bVar38,
                                                  CONCAT12((byte)((ulong)uVar12 >> 0x10) & bVar37,
                                                           CONCAT11((byte)((ulong)uVar12 >> 8) &
                                                                    bVar36,(byte)uVar12 & bVar35))))
                                                  )));
                    puVar23[1] = CONCAT17((byte)((ulong)uVar45 >> 0x38) & bVar42,
                                          CONCAT16((byte)((ulong)uVar45 >> 0x30) & bVar41,
                                                   CONCAT15((byte)((ulong)uVar45 >> 0x28) & bVar40,
                                                            CONCAT14((byte)((ulong)uVar45 >> 0x20) &
                                                                     bVar39,CONCAT13((byte)((ulong)
                                                  uVar45 >> 0x18) & bVar38,
                                                  CONCAT12((byte)((ulong)uVar45 >> 0x10) & bVar37,
                                                           CONCAT11((byte)((ulong)uVar45 >> 8) &
                                                                    bVar36,(byte)uVar45 & bVar35))))
                                                  )));
                    *puVar23 = CONCAT17((byte)((ulong)uVar44 >> 0x38) & bVar42,
                                        CONCAT16((byte)((ulong)uVar44 >> 0x30) & bVar41,
                                                 CONCAT15((byte)((ulong)uVar44 >> 0x28) & bVar40,
                                                          CONCAT14((byte)((ulong)uVar44 >> 0x20) &
                                                                   bVar39,CONCAT13((byte)((ulong)
                                                  uVar44 >> 0x18) & bVar38,
                                                  CONCAT12((byte)((ulong)uVar44 >> 0x10) & bVar37,
                                                           CONCAT11((byte)((ulong)uVar44 >> 8) &
                                                                    bVar36,(byte)uVar44 & bVar35))))
                                                  )));
                    puVar23 = puVar23 + 4;
                  } while (uVar31 != 0);
                  uVar31 = uVar13;
                  if (uVar13 == uVar18) goto LAB_00397fd8;
                }
                lVar20 = uVar18 - uVar31;
                puVar17 = (ulong *)(lVar29 + uVar31 * 8);
                puVar24 = (ulong *)(lVar16 + uVar31 * 8);
                do {
                  lVar20 = lVar20 + -1;
                  *puVar24 = *puVar17 & uVar15;
                  puVar17 = puVar17 + 1;
                  puVar24 = puVar24 + 1;
                } while (lVar20 != 0);
              }
LAB_00397fd8:
              lVar16 = FUN_00393354(puVar27,puVar27,lVar16,uVar2);
              iVar26 = iVar26 + 1;
              *puVar33 = *puVar33 + lVar16;
              plVar32 = plVar32 + -1;
              *plVar32 = uVar30 - lVar11;
              puVar33 = puVar33 + -1;
            } while (iVar26 != iVar4);
          }
          *(uint *)(plVar9 + 2) = uVar6;
          *(uint *)(plVar9 + 1) = uVar2;
          if (param_2 == 0) {
            uVar28 = 1;
            goto LAB_00398200;
          }
          iVar7 = FUN_00398a64(param_2,plVar9,uVar34);
          if (iVar7 != 0) {
            uVar28 = 1;
            goto LAB_00398200;
          }
        }
      }
    }
  }
LAB_003981fc:
  uVar28 = 0;
LAB_00398200:
  FUN_0039180c(param_5);
  return uVar28;
}


// ===== 00398238  FUN_00398238 =====

undefined8 FUN_00398238(long *param_1,long *param_2)

{
  long lVar1;
  ulong *puVar2;
  ulong *puVar3;
  int iVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_1 == param_2) {
    lVar1 = FUN_0038f924(param_1,(int)param_1[1] + 1);
    if (lVar1 == 0) {
      return 0;
    }
    iVar4 = (int)param_1[1];
    puVar2 = (ulong *)*param_1;
  }
  else {
    lVar1 = param_2[1];
    *(int *)(param_1 + 2) = (int)param_2[2];
    lVar1 = FUN_0038f924(param_1,(int)lVar1 + 1);
    if (lVar1 == 0) {
      return 0;
    }
    iVar4 = (int)param_2[1];
    *(int *)(param_1 + 1) = iVar4;
    puVar2 = (ulong *)*param_1;
  }
  if (iVar4 < 1) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    puVar3 = puVar2;
    puVar5 = (ulong *)*param_2;
    do {
      iVar4 = iVar4 + -1;
      uVar7 = uVar6 | *puVar5 << 1;
      uVar6 = *puVar5 >> 0x3f;
      puVar2 = puVar3 + 1;
      *puVar3 = uVar7;
      puVar3 = puVar2;
      puVar5 = puVar5 + 1;
    } while (iVar4 != 0);
  }
  lVar1 = param_1[1];
  *puVar2 = uVar6;
  *(int *)(param_1 + 1) = (int)lVar1 + (int)uVar6;
  return 1;
}


// ===== 003982f0  FUN_003982f0 =====

undefined8 FUN_003982f0(long *param_1,long *param_2)

{
  bool bVar1;
  undefined1 (*pauVar2) [16];
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 (*pauVar9) [16];
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  iVar5 = FUN_0038f448(param_2);
  if (iVar5 != 0) {
    FUN_003907e0(param_1);
    return 1;
  }
  uVar3 = *(uint *)(param_2 + 1);
  lVar15 = *param_2;
  if (param_2 != param_1) {
    lVar6 = FUN_0038f924(param_1,(ulong)uVar3);
    if (lVar6 == 0) {
      return 0;
    }
    *(int *)(param_1 + 2) = (int)param_2[2];
  }
  uVar4 = uVar3 - 1;
  uVar10 = (ulong)uVar4;
  lVar6 = *param_1;
  uVar7 = -(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | uVar10 << 3;
  uVar8 = *(ulong *)(lVar15 + uVar7);
  *(ulong *)(lVar6 + uVar7) = uVar8 >> 1;
  iVar5 = uVar3 - (uVar8 == 1);
  *(int *)(param_1 + 1) = iVar5;
  if (1 < (int)uVar3) {
    uVar7 = (ulong)uVar3 - (ulong)(uVar4 != 0);
    if ((3 < uVar7) && (0x1f < (ulong)(lVar15 - lVar6))) {
      lVar12 = uVar10 * 8;
      auVar16._8_8_ = uVar8;
      auVar16._0_8_ = uVar8;
      uVar11 = uVar7 & 0xfffffffffffffffc;
      uVar10 = uVar10 - uVar11;
      lVar12 = lVar12 + -0x10;
      pauVar9 = (undefined1 (*) [16])(lVar15 + lVar12);
      puVar13 = (undefined8 *)(lVar6 + lVar12);
      uVar14 = uVar11;
      do {
        pauVar2 = pauVar9 + -1;
        uVar8 = *(ulong *)*pauVar2;
        auVar18 = *pauVar9;
        uVar14 = uVar14 - 4;
        pauVar9 = pauVar9 + -2;
        auVar17 = NEON_ext(auVar18,auVar18,8,1);
        auVar19 = NEON_ext(*pauVar2,*pauVar2,8,1);
        auVar16 = NEON_ext(auVar16,auVar17,8,1);
        auVar20 = NEON_ext(auVar17,auVar19,8,1);
        auVar18._0_8_ = (auVar16._0_8_ << 0x3f) + (auVar17._0_8_ >> 1);
        auVar18._8_8_ = (auVar16._8_8_ << 0x3f) + (auVar17._8_8_ >> 1);
        auVar17._0_8_ = (auVar20._0_8_ << 0x3f) + (auVar19._0_8_ >> 1);
        auVar17._8_8_ = (auVar20._8_8_ << 0x3f) + (auVar19._8_8_ >> 1);
        auVar16 = NEON_ext(auVar18,auVar18,8,1);
        auVar18 = NEON_ext(auVar17,auVar17,8,1);
        puVar13[-1] = auVar18._8_8_;
        puVar13[-2] = auVar18._0_8_;
        puVar13[1] = auVar16._8_8_;
        *puVar13 = auVar16._0_8_;
        puVar13 = puVar13 + -4;
        auVar16 = auVar19;
      } while (uVar14 != 0);
      if (uVar7 == uVar11) goto LAB_00398430;
    }
    do {
      lVar12 = (uVar10 - 1) * 8;
      uVar7 = *(ulong *)(lVar15 + lVar12);
      *(ulong *)(lVar6 + lVar12) = uVar7 >> 1 | uVar8 << 0x3f;
      bVar1 = 1 < uVar10;
      uVar8 = uVar7;
      uVar10 = uVar10 - 1;
    } while (bVar1);
  }
LAB_00398430:
  if (iVar5 == 0) {
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return 1;
}


// ===== 0039844c  FUN_0039844c =====

undefined4 FUN_0039844c(undefined8 *param_1,long *param_2,uint param_3)

{
  bool bVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  long lVar7;
  void *__s;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 (*pauVar18) [16];
  ulong uVar19;
  ulong uVar20;
  undefined4 uVar21;
  ulong uVar22;
  undefined1 auVar23 [16];
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  
  if ((int)param_3 < 0) {
    FUN_00379868();
    FUN_0037995c("crypto/bn/bn_shift.c",0x56,"BN_lshift");
    FUN_00379a5c(3,0x77,0);
    return 0;
  }
  uVar5 = param_3 >> 6;
  uVar22 = (ulong)uVar5;
  lVar7 = FUN_0038f924(param_1,(int)param_2[1] + uVar5 + 1);
  if (lVar7 == 0) {
    uVar21 = 0;
    goto LAB_003985b0;
  }
  uVar11 = *(uint *)(param_2 + 1);
  uVar12 = (ulong)uVar11;
  if (uVar11 == 0) {
    __s = (void *)*param_1;
    *(undefined8 *)((long)__s + (ulong)uVar5 * 8) = 0;
  }
  else {
    lVar7 = *param_2;
    uVar3 = -param_3 & 0x3f;
    uVar14 = CONCAT44(0,uVar3);
    __s = (void *)*param_1;
    uVar17 = *(ulong *)(lVar7 + (long)(int)uVar11 * 8 + -8);
    uVar13 = -uVar14;
    uVar15 = uVar13 | uVar13 >> 8;
    plVar2 = (long *)((long)__s + (ulong)uVar5 * 8);
    uVar4 = param_3 & 0x3f;
    uVar16 = CONCAT44(0,uVar4);
    plVar2[(int)uVar11] = uVar17 >> ((ulong)-param_3 & 0x3f) & uVar15;
    if (1 < (int)uVar11) {
      if ((6 < uVar11) && (0x1f < ((lVar7 - (long)__s) + uVar22 * -8) - 8)) {
        auVar23._8_4_ = uVar3;
        auVar23._0_8_ = uVar14;
        auVar23._12_4_ = 0;
        lVar8 = uVar12 * 8;
        uVar19 = uVar12 - 1;
        auVar32._8_8_ = uVar17;
        auVar32._0_8_ = uVar17;
        uVar20 = uVar19 & 0xfffffffffffffffc;
        auVar23 = NEON_neg(auVar23,8);
        uVar12 = uVar12 - uVar20;
        puVar9 = (undefined8 *)((long)__s + uVar22 * 8 + lVar8 + -0x10);
        uVar10 = uVar20;
        pauVar18 = (undefined1 (*) [16])(lVar8 + lVar7 + -0x28);
        do {
          uVar17 = *(ulong *)*pauVar18;
          uVar10 = uVar10 - 4;
          auVar33 = NEON_ext(pauVar18[1],pauVar18[1],8,1);
          auVar35 = NEON_ext(*pauVar18,*pauVar18,8,1);
          auVar32 = NEON_ext(auVar32,auVar33,8,1);
          auVar36 = NEON_ushl(auVar33,auVar23,8);
          auVar34 = NEON_ext(auVar33,auVar35,8,1);
          auVar37 = NEON_ushl(auVar35,auVar23,8);
          bVar24 = (byte)uVar15;
          bVar25 = (byte)(uVar15 >> 8);
          bVar26 = (byte)(uVar15 >> 0x10);
          bVar27 = (byte)(uVar15 >> 0x18);
          bVar28 = (byte)(uVar15 >> 0x20);
          bVar29 = (byte)(uVar15 >> 0x28);
          bVar30 = (byte)(uVar15 >> 0x30);
          bVar31 = (byte)(uVar13 >> 0x38);
          auVar33._8_4_ = uVar4;
          auVar33._0_8_ = uVar16;
          auVar33._12_4_ = 0;
          auVar32 = NEON_ushl(auVar32,auVar33,8);
          auVar6._8_4_ = uVar4;
          auVar6._0_8_ = uVar16;
          auVar6._12_4_ = 0;
          auVar33 = NEON_ushl(auVar34,auVar6,8);
          auVar34[0] = auVar36[0] & bVar24 | auVar32[0];
          auVar34[1] = auVar36[1] & bVar25 | auVar32[1];
          auVar34[2] = auVar36[2] & bVar26 | auVar32[2];
          auVar34[3] = auVar36[3] & bVar27 | auVar32[3];
          auVar34[4] = auVar36[4] & bVar28 | auVar32[4];
          auVar34[5] = auVar36[5] & bVar29 | auVar32[5];
          auVar34[6] = auVar36[6] & bVar30 | auVar32[6];
          auVar34[7] = auVar36[7] & bVar31 | auVar32[7];
          auVar34[8] = auVar36[8] & bVar24 | auVar32[8];
          auVar34[9] = auVar36[9] & bVar25 | auVar32[9];
          auVar34[10] = auVar36[10] & bVar26 | auVar32[10];
          auVar34[0xb] = auVar36[0xb] & bVar27 | auVar32[0xb];
          auVar34[0xc] = auVar36[0xc] & bVar28 | auVar32[0xc];
          auVar34[0xd] = auVar36[0xd] & bVar29 | auVar32[0xd];
          auVar34[0xe] = auVar36[0xe] & bVar30 | auVar32[0xe];
          auVar34[0xf] = auVar36[0xf] & bVar31 | auVar32[0xf];
          auVar36[0] = auVar37[0] & bVar24 | auVar33[0];
          auVar36[1] = auVar37[1] & bVar25 | auVar33[1];
          auVar36[2] = auVar37[2] & bVar26 | auVar33[2];
          auVar36[3] = auVar37[3] & bVar27 | auVar33[3];
          auVar36[4] = auVar37[4] & bVar28 | auVar33[4];
          auVar36[5] = auVar37[5] & bVar29 | auVar33[5];
          auVar36[6] = auVar37[6] & bVar30 | auVar33[6];
          auVar36[7] = auVar37[7] & bVar31 | auVar33[7];
          auVar36[8] = auVar37[8] & bVar24 | auVar33[8];
          auVar36[9] = auVar37[9] & bVar25 | auVar33[9];
          auVar36[10] = auVar37[10] & bVar26 | auVar33[10];
          auVar36[0xb] = auVar37[0xb] & bVar27 | auVar33[0xb];
          auVar36[0xc] = auVar37[0xc] & bVar28 | auVar33[0xc];
          auVar36[0xd] = auVar37[0xd] & bVar29 | auVar33[0xd];
          auVar36[0xe] = auVar37[0xe] & bVar30 | auVar33[0xe];
          auVar36[0xf] = auVar37[0xf] & bVar31 | auVar33[0xf];
          auVar32 = NEON_ext(auVar34,auVar34,8,1);
          auVar33 = NEON_ext(auVar36,auVar36,8,1);
          puVar9[-1] = auVar33._8_8_;
          puVar9[-2] = auVar33._0_8_;
          puVar9[1] = auVar32._8_8_;
          *puVar9 = auVar32._0_8_;
          puVar9 = puVar9 + -4;
          pauVar18 = pauVar18 + -2;
          auVar32 = auVar35;
        } while (uVar10 != 0);
        if (uVar19 == uVar20) goto LAB_0039852c;
      }
      do {
        uVar13 = uVar17 << uVar16;
        uVar17 = *(ulong *)(lVar7 + -0x10 + uVar12 * 8);
        *(ulong *)((long)__s + uVar12 * 8 + uVar22 * 8 + -8) = uVar17 >> uVar14 & uVar15 | uVar13;
        bVar1 = 2 < uVar12;
        uVar12 = uVar12 - 1;
      } while (bVar1);
    }
LAB_0039852c:
    *plVar2 = uVar17 << uVar16;
  }
  if (0x3f < param_3) {
    memset(__s,0,(ulong)(uVar5 << 3));
    uVar11 = *(uint *)(param_2 + 1);
  }
  lVar7 = param_2[2];
  uVar21 = 1;
  *(uint *)(param_1 + 1) = uVar11 + uVar5 + 1;
  *(int *)(param_1 + 2) = (int)lVar7;
LAB_003985b0:
  FUN_003903e8(param_1);
  return uVar21;
}


// ===== 00398680  FUN_00398680 =====

undefined8 FUN_00398680(undefined8 *param_1,long *param_2,uint param_3)

{
  bool bVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  long lVar7;
  void *__s;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  undefined1 (*pauVar20) [16];
  ulong uVar21;
  undefined1 auVar22 [16];
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  
  uVar5 = param_3 + 0x3f;
  if (-1 < (int)param_3) {
    uVar5 = param_3;
  }
  uVar5 = (int)uVar5 >> 6;
  lVar7 = FUN_0038f924(param_1,uVar5 + 1 + (int)param_2[1]);
  if (lVar7 == 0) {
    return 0;
  }
  uVar12 = *(uint *)(param_2 + 1);
  uVar13 = (ulong)uVar12;
  if (uVar12 == 0) {
    __s = (void *)*param_1;
    *(undefined8 *)((long)__s + (long)(int)uVar5 * 8) = 0;
    goto joined_r0x003987c8;
  }
  lVar7 = *param_2;
  uVar3 = -param_3 & 0x3f;
  uVar15 = CONCAT44(0,uVar3);
  __s = (void *)*param_1;
  uVar19 = *(ulong *)(lVar7 + (long)(int)uVar12 * 8 + -8);
  uVar14 = -uVar15;
  uVar16 = uVar14 | uVar14 >> 8;
  plVar2 = (long *)((long)__s + (long)(int)uVar5 * 8);
  uVar4 = param_3 & 0x3f;
  uVar17 = CONCAT44(0,uVar4);
  plVar2[(int)uVar12] = uVar19 >> ((ulong)-param_3 & 0x3f) & uVar16;
  if (1 < (int)uVar12) {
    lVar18 = (long)(int)uVar5;
    if ((6 < uVar12) && (0x1f < ((lVar7 - (long)__s) + lVar18 * -8) - 8U)) {
      auVar22._8_4_ = uVar3;
      auVar22._0_8_ = uVar15;
      auVar22._12_4_ = 0;
      lVar10 = uVar13 * 8;
      uVar21 = uVar13 - 1;
      auVar31._8_8_ = uVar19;
      auVar31._0_8_ = uVar19;
      uVar8 = uVar21 & 0xfffffffffffffffc;
      auVar22 = NEON_neg(auVar22,8);
      uVar13 = uVar13 - uVar8;
      puVar9 = (undefined8 *)((long)__s + lVar18 * 8 + lVar10 + -0x10);
      uVar11 = uVar8;
      pauVar20 = (undefined1 (*) [16])(lVar10 + lVar7 + -0x28);
      do {
        uVar19 = *(ulong *)*pauVar20;
        uVar11 = uVar11 - 4;
        auVar32 = NEON_ext(pauVar20[1],pauVar20[1],8,1);
        auVar34 = NEON_ext(*pauVar20,*pauVar20,8,1);
        auVar31 = NEON_ext(auVar31,auVar32,8,1);
        auVar35 = NEON_ushl(auVar32,auVar22,8);
        auVar33 = NEON_ext(auVar32,auVar34,8,1);
        auVar36 = NEON_ushl(auVar34,auVar22,8);
        bVar23 = (byte)uVar16;
        bVar24 = (byte)(uVar16 >> 8);
        bVar25 = (byte)(uVar16 >> 0x10);
        bVar26 = (byte)(uVar16 >> 0x18);
        bVar27 = (byte)(uVar16 >> 0x20);
        bVar28 = (byte)(uVar16 >> 0x28);
        bVar29 = (byte)(uVar16 >> 0x30);
        bVar30 = (byte)(uVar14 >> 0x38);
        auVar32._8_4_ = uVar4;
        auVar32._0_8_ = uVar17;
        auVar32._12_4_ = 0;
        auVar31 = NEON_ushl(auVar31,auVar32,8);
        auVar6._8_4_ = uVar4;
        auVar6._0_8_ = uVar17;
        auVar6._12_4_ = 0;
        auVar32 = NEON_ushl(auVar33,auVar6,8);
        auVar33[0] = auVar35[0] & bVar23 | auVar31[0];
        auVar33[1] = auVar35[1] & bVar24 | auVar31[1];
        auVar33[2] = auVar35[2] & bVar25 | auVar31[2];
        auVar33[3] = auVar35[3] & bVar26 | auVar31[3];
        auVar33[4] = auVar35[4] & bVar27 | auVar31[4];
        auVar33[5] = auVar35[5] & bVar28 | auVar31[5];
        auVar33[6] = auVar35[6] & bVar29 | auVar31[6];
        auVar33[7] = auVar35[7] & bVar30 | auVar31[7];
        auVar33[8] = auVar35[8] & bVar23 | auVar31[8];
        auVar33[9] = auVar35[9] & bVar24 | auVar31[9];
        auVar33[10] = auVar35[10] & bVar25 | auVar31[10];
        auVar33[0xb] = auVar35[0xb] & bVar26 | auVar31[0xb];
        auVar33[0xc] = auVar35[0xc] & bVar27 | auVar31[0xc];
        auVar33[0xd] = auVar35[0xd] & bVar28 | auVar31[0xd];
        auVar33[0xe] = auVar35[0xe] & bVar29 | auVar31[0xe];
        auVar33[0xf] = auVar35[0xf] & bVar30 | auVar31[0xf];
        auVar35[0] = auVar36[0] & bVar23 | auVar32[0];
        auVar35[1] = auVar36[1] & bVar24 | auVar32[1];
        auVar35[2] = auVar36[2] & bVar25 | auVar32[2];
        auVar35[3] = auVar36[3] & bVar26 | auVar32[3];
        auVar35[4] = auVar36[4] & bVar27 | auVar32[4];
        auVar35[5] = auVar36[5] & bVar28 | auVar32[5];
        auVar35[6] = auVar36[6] & bVar29 | auVar32[6];
        auVar35[7] = auVar36[7] & bVar30 | auVar32[7];
        auVar35[8] = auVar36[8] & bVar23 | auVar32[8];
        auVar35[9] = auVar36[9] & bVar24 | auVar32[9];
        auVar35[10] = auVar36[10] & bVar25 | auVar32[10];
        auVar35[0xb] = auVar36[0xb] & bVar26 | auVar32[0xb];
        auVar35[0xc] = auVar36[0xc] & bVar27 | auVar32[0xc];
        auVar35[0xd] = auVar36[0xd] & bVar28 | auVar32[0xd];
        auVar35[0xe] = auVar36[0xe] & bVar29 | auVar32[0xe];
        auVar35[0xf] = auVar36[0xf] & bVar30 | auVar32[0xf];
        auVar31 = NEON_ext(auVar33,auVar33,8,1);
        auVar32 = NEON_ext(auVar35,auVar35,8,1);
        puVar9[-1] = auVar32._8_8_;
        puVar9[-2] = auVar32._0_8_;
        puVar9[1] = auVar31._8_8_;
        *puVar9 = auVar31._0_8_;
        puVar9 = puVar9 + -4;
        pauVar20 = pauVar20 + -2;
        auVar31 = auVar34;
      } while (uVar11 != 0);
      if (uVar21 == uVar8) goto LAB_0039876c;
    }
    do {
      uVar14 = uVar19 << uVar17;
      uVar19 = *(ulong *)(lVar7 + -0x10 + uVar13 * 8);
      *(ulong *)((long)__s + uVar13 * 8 + lVar18 * 8 + -8) = uVar19 >> uVar15 & uVar16 | uVar14;
      bVar1 = 2 < uVar13;
      uVar13 = uVar13 - 1;
    } while (bVar1);
  }
LAB_0039876c:
  *plVar2 = uVar19 << uVar17;
joined_r0x003987c8:
  if (0x7e < param_3 + 0x3f) {
    memset(__s,0,-(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar5 << 3);
    uVar12 = *(uint *)(param_2 + 1);
  }
  lVar7 = param_2[2];
  *(uint *)(param_1 + 1) = uVar5 + 1 + uVar12;
  *(int *)(param_1 + 2) = (int)lVar7;
  return 1;
}


// ===== 0039886c  FUN_0039886c =====

undefined8 FUN_0039886c(long *param_1,long *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong *puVar10;
  ulong uVar11;
  undefined1 (*pauVar12) [16];
  ulong uVar13;
  long lVar14;
  ulong *puVar15;
  byte *pbVar16;
  ulong uVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined1 auVar20 [16];
  ulong uVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  
  if ((int)param_3 < 0) {
    FUN_00379868();
    FUN_0037995c("crypto/bn/bn_shift.c",0x9b,"BN_rshift");
    FUN_00379a5c(3,0x77,0);
    return 0;
  }
  uVar1 = param_3 >> 6;
  uVar19 = (ulong)uVar1;
  uVar2 = (int)param_2[1] - uVar1;
  if (uVar2 == 0 || (int)param_2[1] < (int)uVar1) {
    FUN_003907e0();
  }
  else {
    if ((param_1 != param_2) && (lVar3 = FUN_0038f924(param_1,uVar2), lVar3 == 0)) {
      uVar18 = 0;
      goto LAB_003989c4;
    }
    lVar9 = *param_2;
    lVar3 = *param_1;
    uVar5 = (ulong)(uVar2 - 1);
    uVar4 = CONCAT44(0,param_3 & 0x3f);
    uVar11 = *(ulong *)(lVar9 + (ulong)uVar1 * 8);
    if (uVar2 - 1 == 0 || (int)uVar2 < 1) {
      uVar5 = 0;
    }
    else {
      uVar1 = -param_3 & 0x3f;
      uVar6 = CONCAT44(0,uVar1);
      uVar7 = -uVar6;
      uVar8 = uVar7 | uVar7 >> 8;
      if ((uVar2 < 7) || (((lVar3 - lVar9) + uVar19 * -8) - 8 < 0x20)) {
        uVar13 = 0;
      }
      else {
        auVar20._8_4_ = param_3 & 0x3f;
        auVar20._0_8_ = uVar4;
        auVar20._12_4_ = 0;
        uVar13 = uVar5 & 0x7ffffffc;
        pauVar12 = (undefined1 (*) [16])(uVar19 * 8 + lVar9 + 0x18);
        pbVar16 = (byte *)(lVar3 + 0x10);
        auVar20 = NEON_neg(auVar20,8);
        uVar17 = uVar13;
        uVar21 = uVar11;
        do {
          auVar31._8_8_ = uVar11;
          auVar31._0_8_ = uVar21;
          auVar32 = pauVar12[-1];
          uVar11 = *(ulong *)(*pauVar12 + 8);
          uVar21 = *(ulong *)*pauVar12;
          auVar34 = *pauVar12;
          auVar30 = *pauVar12;
          uVar17 = uVar17 - 4;
          pauVar12 = pauVar12 + 2;
          auVar31 = NEON_ext(auVar31,auVar32,8,1);
          auVar33 = NEON_ext(auVar32,auVar30,8,1);
          auVar30._8_4_ = uVar1;
          auVar30._0_8_ = uVar6;
          auVar30._12_4_ = 0;
          auVar30 = NEON_ushl(auVar32,auVar30,8);
          auVar32._8_4_ = uVar1;
          auVar32._0_8_ = uVar6;
          auVar32._12_4_ = 0;
          auVar35 = NEON_ushl(auVar34,auVar32,8);
          bVar22 = (byte)uVar8;
          bVar23 = (byte)(uVar8 >> 8);
          bVar24 = (byte)(uVar8 >> 0x10);
          bVar25 = (byte)(uVar8 >> 0x18);
          bVar26 = (byte)(uVar8 >> 0x20);
          bVar27 = (byte)(uVar8 >> 0x28);
          bVar28 = (byte)(uVar8 >> 0x30);
          bVar29 = (byte)(uVar7 >> 0x38);
          auVar32 = NEON_ushl(auVar31,auVar20,8);
          auVar34 = NEON_ushl(auVar33,auVar20,8);
          *pbVar16 = auVar30[8] & bVar22 | auVar32[8];
          pbVar16[1] = auVar30[9] & bVar23 | auVar32[9];
          pbVar16[2] = auVar30[10] & bVar24 | auVar32[10];
          pbVar16[3] = auVar30[0xb] & bVar25 | auVar32[0xb];
          pbVar16[4] = auVar30[0xc] & bVar26 | auVar32[0xc];
          pbVar16[5] = auVar30[0xd] & bVar27 | auVar32[0xd];
          pbVar16[6] = auVar30[0xe] & bVar28 | auVar32[0xe];
          pbVar16[7] = auVar30[0xf] & bVar29 | auVar32[0xf];
          pbVar16[-0x10] = auVar30[0] & bVar22 | auVar32[0];
          pbVar16[-0xf] = auVar30[1] & bVar23 | auVar32[1];
          pbVar16[-0xe] = auVar30[2] & bVar24 | auVar32[2];
          pbVar16[-0xd] = auVar30[3] & bVar25 | auVar32[3];
          pbVar16[-0xc] = auVar30[4] & bVar26 | auVar32[4];
          pbVar16[-0xb] = auVar30[5] & bVar27 | auVar32[5];
          pbVar16[-10] = auVar30[6] & bVar28 | auVar32[6];
          pbVar16[-9] = auVar30[7] & bVar29 | auVar32[7];
          pbVar16[0x10] = auVar35[8] & bVar22 | auVar34[8];
          pbVar16[0x11] = auVar35[9] & bVar23 | auVar34[9];
          pbVar16[0x12] = auVar35[10] & bVar24 | auVar34[10];
          pbVar16[0x13] = auVar35[0xb] & bVar25 | auVar34[0xb];
          pbVar16[0x14] = auVar35[0xc] & bVar26 | auVar34[0xc];
          pbVar16[0x15] = auVar35[0xd] & bVar27 | auVar34[0xd];
          pbVar16[0x16] = auVar35[0xe] & bVar28 | auVar34[0xe];
          pbVar16[0x17] = auVar35[0xf] & bVar29 | auVar34[0xf];
          *pbVar16 = auVar35[0] & bVar22 | auVar34[0];
          pbVar16[1] = auVar35[1] & bVar23 | auVar34[1];
          pbVar16[2] = auVar35[2] & bVar24 | auVar34[2];
          pbVar16[3] = auVar35[3] & bVar25 | auVar34[3];
          pbVar16[4] = auVar35[4] & bVar26 | auVar34[4];
          pbVar16[5] = auVar35[5] & bVar27 | auVar34[5];
          pbVar16[6] = auVar35[6] & bVar28 | auVar34[6];
          pbVar16[7] = auVar35[7] & bVar29 | auVar34[7];
          pbVar16 = pbVar16 + 0x20;
        } while (uVar17 != 0);
        if (uVar13 == uVar5) goto LAB_003989ac;
      }
      lVar14 = uVar5 - uVar13;
      puVar15 = (ulong *)(uVar13 * 8 + uVar19 * 8 + lVar9);
      puVar10 = (ulong *)(lVar3 + uVar13 * 8);
      uVar19 = uVar11;
      do {
        puVar15 = puVar15 + 1;
        uVar11 = *puVar15;
        lVar14 = lVar14 + -1;
        *puVar10 = uVar11 << uVar6 & uVar8 | uVar19 >> uVar4;
        puVar10 = puVar10 + 1;
        uVar19 = uVar11;
      } while (lVar14 != 0);
    }
LAB_003989ac:
    lVar9 = param_2[2];
    *(uint *)(param_1 + 1) = uVar2;
    *(ulong *)(lVar3 + uVar5 * 8) = uVar11 >> uVar4;
    *(int *)(param_1 + 2) = (int)lVar9;
  }
  uVar18 = 1;
LAB_003989c4:
  FUN_003903e8(param_1);
  return uVar18;
}


// ===== 00398a64  FUN_00398a64 =====

undefined8 FUN_00398a64(long *param_1,long *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong *puVar12;
  ulong uVar13;
  undefined1 (*pauVar14) [16];
  long lVar15;
  ulong uVar16;
  ulong *puVar17;
  byte *pbVar18;
  undefined1 auVar19 [16];
  ulong uVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  
  uVar3 = param_3 + 0x3f;
  if (-1 < (int)param_3) {
    uVar3 = param_3;
  }
  iVar2 = (int)uVar3 >> 6;
  uVar3 = (int)param_2[1] - iVar2;
  if (uVar3 == 0 || (int)param_2[1] < iVar2) {
    FUN_003907e0();
    return 1;
  }
  if ((param_1 != param_2) && (lVar4 = FUN_0038f924(param_1,uVar3), lVar4 == 0)) {
    return 0;
  }
  lVar11 = *param_2;
  lVar4 = *param_1;
  uVar7 = (ulong)(uVar3 - 1);
  uVar6 = CONCAT44(0,param_3 & 0x3f);
  uVar13 = *(ulong *)(lVar11 + (long)iVar2 * 8);
  if (uVar3 - 1 == 0 || (int)uVar3 < 1) {
    uVar7 = 0;
  }
  else {
    lVar15 = (long)iVar2;
    uVar1 = -param_3 & 0x3f;
    uVar8 = CONCAT44(0,uVar1);
    uVar9 = -uVar8;
    uVar10 = uVar9 | uVar9 >> 8;
    if ((uVar3 < 7) || (((lVar4 - lVar11) + lVar15 * -8) - 8U < 0x20)) {
      uVar16 = 0;
    }
    else {
      auVar19._8_4_ = param_3 & 0x3f;
      auVar19._0_8_ = uVar6;
      auVar19._12_4_ = 0;
      uVar16 = uVar7 & 0x7ffffffc;
      pauVar14 = (undefined1 (*) [16])(lVar15 * 8 + lVar11 + 0x18);
      pbVar18 = (byte *)(lVar4 + 0x10);
      auVar19 = NEON_neg(auVar19,8);
      uVar5 = uVar16;
      uVar20 = uVar13;
      do {
        auVar30._8_8_ = uVar13;
        auVar30._0_8_ = uVar20;
        auVar31 = pauVar14[-1];
        uVar13 = *(ulong *)(*pauVar14 + 8);
        uVar20 = *(ulong *)*pauVar14;
        auVar33 = *pauVar14;
        auVar29 = *pauVar14;
        uVar5 = uVar5 - 4;
        pauVar14 = pauVar14 + 2;
        auVar30 = NEON_ext(auVar30,auVar31,8,1);
        auVar32 = NEON_ext(auVar31,auVar29,8,1);
        auVar29._8_4_ = uVar1;
        auVar29._0_8_ = uVar8;
        auVar29._12_4_ = 0;
        auVar29 = NEON_ushl(auVar31,auVar29,8);
        auVar31._8_4_ = uVar1;
        auVar31._0_8_ = uVar8;
        auVar31._12_4_ = 0;
        auVar34 = NEON_ushl(auVar33,auVar31,8);
        bVar21 = (byte)uVar10;
        bVar22 = (byte)(uVar10 >> 8);
        bVar23 = (byte)(uVar10 >> 0x10);
        bVar24 = (byte)(uVar10 >> 0x18);
        bVar25 = (byte)(uVar10 >> 0x20);
        bVar26 = (byte)(uVar10 >> 0x28);
        bVar27 = (byte)(uVar10 >> 0x30);
        bVar28 = (byte)(uVar9 >> 0x38);
        auVar31 = NEON_ushl(auVar30,auVar19,8);
        auVar33 = NEON_ushl(auVar32,auVar19,8);
        *pbVar18 = auVar29[8] & bVar21 | auVar31[8];
        pbVar18[1] = auVar29[9] & bVar22 | auVar31[9];
        pbVar18[2] = auVar29[10] & bVar23 | auVar31[10];
        pbVar18[3] = auVar29[0xb] & bVar24 | auVar31[0xb];
        pbVar18[4] = auVar29[0xc] & bVar25 | auVar31[0xc];
        pbVar18[5] = auVar29[0xd] & bVar26 | auVar31[0xd];
        pbVar18[6] = auVar29[0xe] & bVar27 | auVar31[0xe];
        pbVar18[7] = auVar29[0xf] & bVar28 | auVar31[0xf];
        pbVar18[-0x10] = auVar29[0] & bVar21 | auVar31[0];
        pbVar18[-0xf] = auVar29[1] & bVar22 | auVar31[1];
        pbVar18[-0xe] = auVar29[2] & bVar23 | auVar31[2];
        pbVar18[-0xd] = auVar29[3] & bVar24 | auVar31[3];
        pbVar18[-0xc] = auVar29[4] & bVar25 | auVar31[4];
        pbVar18[-0xb] = auVar29[5] & bVar26 | auVar31[5];
        pbVar18[-10] = auVar29[6] & bVar27 | auVar31[6];
        pbVar18[-9] = auVar29[7] & bVar28 | auVar31[7];
        pbVar18[0x10] = auVar34[8] & bVar21 | auVar33[8];
        pbVar18[0x11] = auVar34[9] & bVar22 | auVar33[9];
        pbVar18[0x12] = auVar34[10] & bVar23 | auVar33[10];
        pbVar18[0x13] = auVar34[0xb] & bVar24 | auVar33[0xb];
        pbVar18[0x14] = auVar34[0xc] & bVar25 | auVar33[0xc];
        pbVar18[0x15] = auVar34[0xd] & bVar26 | auVar33[0xd];
        pbVar18[0x16] = auVar34[0xe] & bVar27 | auVar33[0xe];
        pbVar18[0x17] = auVar34[0xf] & bVar28 | auVar33[0xf];
        *pbVar18 = auVar34[0] & bVar21 | auVar33[0];
        pbVar18[1] = auVar34[1] & bVar22 | auVar33[1];
        pbVar18[2] = auVar34[2] & bVar23 | auVar33[2];
        pbVar18[3] = auVar34[3] & bVar24 | auVar33[3];
        pbVar18[4] = auVar34[4] & bVar25 | auVar33[4];
        pbVar18[5] = auVar34[5] & bVar26 | auVar33[5];
        pbVar18[6] = auVar34[6] & bVar27 | auVar33[6];
        pbVar18[7] = auVar34[7] & bVar28 | auVar33[7];
        pbVar18 = pbVar18 + 0x20;
      } while (uVar5 != 0);
      if (uVar16 == uVar7) goto LAB_00398b78;
    }
    puVar17 = (ulong *)(uVar16 * 8 + lVar15 * 8 + lVar11);
    lVar11 = uVar7 - uVar16;
    puVar12 = (ulong *)(lVar4 + uVar16 * 8);
    uVar9 = uVar13;
    do {
      puVar17 = puVar17 + 1;
      uVar13 = *puVar17;
      lVar11 = lVar11 + -1;
      *puVar12 = uVar13 << uVar8 & uVar10 | uVar9 >> uVar6;
      puVar12 = puVar12 + 1;
      uVar9 = uVar13;
    } while (lVar11 != 0);
  }
LAB_00398b78:
  lVar11 = param_2[2];
  *(uint *)(param_1 + 1) = uVar3;
  *(ulong *)(lVar4 + uVar7 * 8) = uVar13 >> uVar6;
  *(int *)(param_1 + 2) = (int)lVar11;
  return 1;
}


// ===== 00398c3c  FUN_00398c3c =====

long FUN_00398c3c(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *puVar8;
  long *plVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  
  iVar4 = (int)param_2[2];
  if (iVar4 == (int)param_3[2]) {
    plVar9 = param_2;
    if ((int)param_3[1] <= (int)param_2[1]) {
      plVar9 = param_3;
      param_3 = param_2;
    }
    iVar10 = (int)param_3[1];
    iVar2 = (int)plVar9[1];
    lVar5 = FUN_0038f924(param_1,iVar10 + 1);
    if (lVar5 == 0) goto LAB_00398d40;
    lVar12 = *param_3;
    lVar5 = *plVar9;
    lVar13 = *param_1;
    *(int *)(param_1 + 1) = iVar10;
    uVar6 = FUN_00393354(lVar13,lVar12,lVar5,iVar2);
    puVar8 = (ulong *)(lVar13 + (long)iVar2 * 8);
    if (iVar10 != iVar2) {
      iVar10 = iVar2 - iVar10;
      puVar7 = puVar8;
      plVar9 = (long *)(lVar12 + (long)iVar2 * 8);
      do {
        uVar11 = uVar6 & 1;
        uVar1 = *plVar9 + uVar6;
        uVar6 = 0;
        if (uVar1 == 0) {
          uVar6 = uVar11;
        }
        bVar3 = iVar10 != -1;
        iVar10 = iVar10 + 1;
        puVar8 = puVar7 + 1;
        *puVar7 = uVar1;
        puVar7 = puVar8;
        plVar9 = plVar9 + 1;
      } while (bVar3);
    }
    lVar5 = param_1[1];
    *puVar8 = uVar6;
    *(int *)(param_1 + 1) = (int)lVar5 + (int)uVar6;
  }
  else {
    iVar4 = FUN_003901ac(param_2,param_3);
    if (0 < iVar4) {
      iVar4 = (int)param_2[2];
      lVar5 = FUN_00398e30(param_1,param_2,param_3);
      goto LAB_00398d40;
    }
    if (iVar4 < 0) {
      iVar4 = (int)param_3[2];
      lVar5 = FUN_00398e30(param_1,param_3,param_2);
      goto LAB_00398d40;
    }
    FUN_003907e0(param_1);
    iVar4 = 0;
  }
  lVar5 = 1;
LAB_00398d40:
  *(int *)(param_1 + 2) = iVar4;
  return lVar5;
}


// ===== 00398d74  FUN_00398d74 =====

long FUN_00398d74(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  long *plVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  
  plVar8 = param_2;
  if ((int)param_3[1] <= (int)param_2[1]) {
    plVar8 = param_3;
    param_3 = param_2;
  }
  iVar9 = (int)param_3[1];
  iVar2 = (int)plVar8[1];
  lVar4 = FUN_0038f924(param_1,iVar9 + 1);
  if (lVar4 != 0) {
    lVar11 = *param_3;
    lVar4 = *plVar8;
    lVar12 = *param_1;
    *(int *)(param_1 + 1) = iVar9;
    uVar5 = FUN_00393354(lVar12,lVar11,lVar4,iVar2);
    puVar7 = (ulong *)(lVar12 + (long)iVar2 * 8);
    if (iVar9 != iVar2) {
      iVar9 = iVar2 - iVar9;
      puVar6 = puVar7;
      plVar8 = (long *)(lVar11 + (long)iVar2 * 8);
      do {
        uVar10 = uVar5 & 1;
        uVar1 = *plVar8 + uVar5;
        uVar5 = 0;
        if (uVar1 == 0) {
          uVar5 = uVar10;
        }
        bVar3 = iVar9 != -1;
        iVar9 = iVar9 + 1;
        puVar7 = puVar6 + 1;
        *puVar6 = uVar1;
        puVar6 = puVar7;
        plVar8 = plVar8 + 1;
      } while (bVar3);
    }
    lVar11 = param_1[1];
    *puVar7 = uVar5;
    *(undefined4 *)(param_1 + 2) = 0;
    lVar4 = 1;
    *(int *)(param_1 + 1) = (int)lVar11 + (int)uVar5;
  }
  return lVar4;
}


// ===== 00398e30  FUN_00398e30 =====

long FUN_00398e30(long *param_1,long *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  
  iVar2 = (int)param_2[1];
  iVar1 = *(int *)(param_3 + 1);
  if (iVar2 - iVar1 < 0) {
    FUN_00379868();
    FUN_0037995c("crypto/bn/bn_add.c",0x8b,"BN_usub");
    FUN_00379a5c(3,100,0);
    return 0;
  }
  lVar4 = FUN_0038f924(param_1,iVar2);
  if (lVar4 != 0) {
    lVar11 = *param_2;
    lVar4 = *param_1;
    uVar5 = FUN_00393448(lVar4,lVar11,*param_3,iVar1);
    plVar7 = (long *)(lVar4 + (long)iVar1 * 8);
    if (iVar2 != iVar1) {
      iVar9 = iVar1 - iVar2;
      plVar6 = plVar7;
      plVar8 = (long *)(lVar11 + (long)iVar1 * 8);
      do {
        uVar10 = uVar5 & 1;
        if (*plVar8 != 0) {
          uVar10 = 0;
        }
        bVar3 = iVar9 != -1;
        iVar9 = iVar9 + 1;
        plVar7 = plVar6 + 1;
        *plVar6 = *plVar8 - uVar5;
        uVar5 = uVar10;
        plVar6 = plVar7;
        plVar8 = plVar8 + 1;
      } while (bVar3);
    }
    while ((iVar2 != 0 && (plVar7 = plVar7 + -1, *plVar7 == 0))) {
      iVar2 = iVar2 + -1;
    }
    lVar4 = 1;
    *(int *)(param_1 + 1) = iVar2;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return lVar4;
}


// ===== 00398f34  FUN_00398f34 =====

long FUN_00398f34(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *puVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  
  uVar13 = *(uint *)(param_2 + 2);
  if (uVar13 == *(uint *)(param_3 + 2)) {
    iVar4 = FUN_003901ac(param_2,param_3);
    if (0 < iVar4) {
      uVar13 = *(uint *)(param_2 + 2);
      lVar5 = FUN_00398e30(param_1,param_2,param_3);
      goto LAB_00399038;
    }
    if (iVar4 < 0) {
      uVar13 = (uint)((int)param_3[2] == 0);
      lVar5 = FUN_00398e30(param_1,param_3,param_2);
      goto LAB_00399038;
    }
    FUN_003907e0(param_1);
    uVar13 = 0;
  }
  else {
    plVar9 = param_2;
    if ((int)param_3[1] <= (int)param_2[1]) {
      plVar9 = param_3;
      param_3 = param_2;
    }
    iVar4 = (int)param_3[1];
    iVar2 = (int)plVar9[1];
    lVar5 = FUN_0038f924(param_1,iVar4 + 1);
    if (lVar5 == 0) goto LAB_00399038;
    lVar11 = *param_3;
    lVar5 = *plVar9;
    lVar12 = *param_1;
    *(int *)(param_1 + 1) = iVar4;
    uVar6 = FUN_00393354(lVar12,lVar11,lVar5,iVar2);
    puVar8 = (ulong *)(lVar12 + (long)iVar2 * 8);
    if (iVar4 != iVar2) {
      iVar4 = iVar2 - iVar4;
      puVar7 = puVar8;
      plVar9 = (long *)(lVar11 + (long)iVar2 * 8);
      do {
        uVar10 = uVar6 & 1;
        uVar1 = *plVar9 + uVar6;
        uVar6 = 0;
        if (uVar1 == 0) {
          uVar6 = uVar10;
        }
        bVar3 = iVar4 != -1;
        iVar4 = iVar4 + 1;
        puVar8 = puVar7 + 1;
        *puVar7 = uVar1;
        puVar7 = puVar8;
        plVar9 = plVar9 + 1;
      } while (bVar3);
    }
    lVar5 = param_1[1];
    *puVar8 = uVar6;
    *(int *)(param_1 + 1) = (int)lVar5 + (int)uVar6;
  }
  lVar5 = 1;
LAB_00399038:
  *(uint *)(param_1 + 2) = uVar13;
  return lVar5;
}


// ===== 00399074  FUN_00399074 =====

long FUN_00399074(long *param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    lVar4 = -1;
  }
  else {
    if (0x100000000 < param_2) {
      lVar4 = FUN_0038f720();
      if (lVar4 == 0) {
        return -1;
      }
      lVar5 = FUN_00399138(lVar4,param_2);
      FUN_0038f4f4(lVar4);
      return lVar5;
    }
    uVar6 = (ulong)*(uint *)(param_1 + 1);
    if ((int)*(uint *)(param_1 + 1) < 1) {
      return 0;
    }
    lVar4 = 0;
    do {
      uVar7 = *(ulong *)(*param_1 + -8 + uVar6 * 8);
      bVar3 = uVar6 != 0;
      uVar6 = uVar6 - 1;
      iVar1 = 0;
      if (param_2 != 0) {
        iVar1 = (int)((uVar7 >> 0x20 | lVar4 << 0x20) / param_2);
      }
      uVar7 = uVar7 & 0xffffffff |
              (ulong)(uint)((int)(uVar7 >> 0x20) - iVar1 * (int)param_2) << 0x20;
      uVar2 = 0;
      if (param_2 != 0) {
        uVar2 = uVar7 / param_2;
      }
      lVar4 = uVar7 - uVar2 * param_2;
    } while (bVar3 && uVar6 != 0);
  }
  return lVar4;
}


// ===== 00399138  FUN_00399138 =====

ulong FUN_00399138(long *param_1,long param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
  if (param_2 == 0) {
    return 0xffffffffffffffff;
  }
  if ((int)param_1[1] == 0) {
    return 0;
  }
  iVar5 = FUN_0038f248(param_2);
  uVar10 = (ulong)(0x40 - iVar5);
  iVar6 = FUN_0039844c(param_1,param_1,uVar10);
  if (iVar6 == 0) {
    return 0xffffffffffffffff;
  }
  uVar2 = *(uint *)(param_1 + 1);
  if ((int)uVar2 < 1) {
    uVar7 = 0L >> (uVar10 & 0x3f);
  }
  else {
    uVar7 = 0;
    param_2 = param_2 << ((ulong)(uint)-iVar5 & 0x3f);
    lVar9 = *param_1;
    uVar4 = (ulong)uVar2;
    do {
      lVar11 = (uVar4 - 1) * 8;
      lVar9 = *(long *)(lVar9 + lVar11);
      lVar8 = FUN_0039317c(uVar7,lVar9,param_2);
      uVar7 = lVar9 - lVar8 * param_2;
      lVar9 = *param_1;
      *(long *)(lVar9 + lVar11) = lVar8;
      bVar1 = 1 < uVar4;
      uVar4 = uVar4 - 1;
    } while (bVar1);
    uVar3 = *(uint *)(param_1 + 1);
    uVar2 = uVar3 - 1;
    if ((int)uVar3 < 1) {
      uVar7 = uVar7 >> (uVar10 & 0x3f);
      uVar2 = uVar3;
    }
    else {
      if (*(long *)(*param_1 + (ulong)uVar3 * 8 + -8) != 0) {
        return uVar7 >> (uVar10 & 0x3f);
      }
      *(uint *)(param_1 + 1) = uVar2;
      uVar7 = uVar7 >> (uVar10 & 0x3f);
    }
  }
  if (uVar2 != 0) {
    return uVar7;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  return uVar7;
}


// ===== 0039928c  FUN_0039928c =====

ulong FUN_0039928c(long *param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  if (param_2 != 0) {
    iVar2 = FUN_0038f448();
    if (iVar2 != 0) {
      uVar3 = FUN_0038f9ec(param_1,param_2);
      return uVar3;
    }
    if ((int)param_1[2] != 0) {
      *(undefined4 *)(param_1 + 2) = 0;
      uVar3 = FUN_003993bc(param_1,param_2);
      iVar2 = FUN_0038f448(param_1);
      if (iVar2 == 0) {
        *(uint *)(param_1 + 2) = (uint)((int)param_1[2] == 0);
        return uVar3 & 0xffffffff;
      }
      return uVar3 & 0xffffffff;
    }
    uVar1 = *(uint *)(param_1 + 1);
    if (0 < (int)uVar1) {
      uVar3 = *(ulong *)*param_1;
      *(ulong *)*param_1 = uVar3 + param_2;
      if (!CARRY8(uVar3,param_2)) {
        return 1;
      }
      lVar4 = 8;
      param_2 = 1;
      while ((ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) * 8 - lVar4 != 0) {
        lVar5 = *(long *)(*param_1 + lVar4);
        *(long *)(*param_1 + lVar4) = lVar5 + 1;
        lVar4 = lVar4 + 8;
        if (lVar5 != -1) {
          return 1;
        }
      }
    }
    if (-1 < (int)uVar1) {
      lVar4 = FUN_0038f924(param_1,uVar1 + 1);
      if (lVar4 == 0) {
        return 0;
      }
      lVar4 = param_1[1];
      *(ulong *)(*param_1 + (ulong)uVar1 * 8) = param_2;
      *(int *)(param_1 + 1) = (int)lVar4 + 1;
    }
  }
  return 1;
}


// ===== 003993bc  FUN_003993bc =====

ulong FUN_003993bc(undefined8 *param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  int iVar5;
  
  if (param_2 == 0) {
    uVar2 = 1;
  }
  else {
    iVar1 = FUN_0038f448();
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 2) != 0) {
        *(undefined4 *)(param_1 + 2) = 0;
        uVar2 = FUN_0039928c(param_1,param_2);
        *(undefined4 *)(param_1 + 2) = 1;
        return uVar2;
      }
      puVar3 = (ulong *)*param_1;
      iVar1 = *(int *)(param_1 + 1);
      uVar4 = *puVar3;
      if ((iVar1 == 1) && (uVar4 < param_2)) {
        *puVar3 = param_2 - uVar4;
        *(undefined4 *)(param_1 + 2) = 1;
        return 1;
      }
      if (uVar4 < param_2) {
        *puVar3 = uVar4 - param_2;
        puVar3 = puVar3 + 1;
        uVar4 = *puVar3;
        if (uVar4 == 0) {
          param_2 = 1;
          iVar5 = 1;
          do {
            *puVar3 = 0xffffffffffffffff;
            puVar3 = puVar3 + 1;
            uVar4 = *puVar3;
            iVar5 = iVar5 + 1;
          } while (uVar4 == 0);
        }
        else {
          param_2 = 1;
          iVar5 = 1;
        }
      }
      else {
        iVar5 = 0;
      }
      uVar2 = 1;
      *puVar3 = uVar4 - param_2;
      if ((uVar4 - param_2 == 0) && (iVar5 == iVar1 + -1)) {
        *(int *)(param_1 + 1) = iVar5;
        return uVar2;
      }
    }
    else {
      uVar2 = FUN_0038f9ec(param_1,param_2);
      if ((int)uVar2 != 0) {
        FUN_003904e4(param_1,1);
        return uVar2 & 0xffffffff;
      }
    }
  }
  return uVar2;
}


// ===== 003994ec  FUN_003994ec =====

undefined8 FUN_003994ec(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if ((int)param_1[1] == 0) {
    return 1;
  }
  if (param_2 == 0) {
    FUN_003907e0(param_1,0,(int)param_1[1],0);
  }
  else {
    lVar1 = FUN_00392ee8(*param_1,*param_1);
    if (lVar1 != 0) {
      lVar2 = FUN_0038f924(param_1,(int)param_1[1] + 1);
      if (lVar2 == 0) {
        return 0;
      }
      lVar2 = param_1[1];
      *(long *)(*param_1 + (long)(int)lVar2 * 8) = lVar1;
      *(int *)(param_1 + 1) = (int)lVar2 + 1;
    }
  }
  return 1;
}


// ===== 0039956c  FUN_0039956c =====

int FUN_0039956c(long param_1,long *param_2)

{
  int iVar1;
  void *pvVar2;
  void *local_38;
  
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x18) == 0) {
      return 0;
    }
    iVar1 = FUN_0038eadc(0,*(undefined4 *)(param_1 + 0x14),6);
    if ((param_2 != (long *)0x0) && (iVar1 != -1)) {
      if ((void *)*param_2 == (void *)0x0) {
        pvVar2 = (void *)FUN_003c83a4((long)iVar1,"crypto/asn1/a_object.c",0x22);
        local_38 = pvVar2;
        if (pvVar2 == (void *)0x0) {
          return 0;
        }
      }
      else {
        pvVar2 = (void *)0x0;
        local_38 = (void *)*param_2;
      }
      FUN_0038e9b8(&local_38,0,*(undefined4 *)(param_1 + 0x14),6,0);
      memcpy(local_38,*(void **)(param_1 + 0x18),(long)*(int *)(param_1 + 0x14));
      if (pvVar2 == (void *)0x0) {
        pvVar2 = (void *)((long)local_38 + (long)*(int *)(param_1 + 0x14));
      }
      *param_2 = (long)pvVar2;
      return iVar1;
    }
  }
  return iVar1;
}


// ===== 00399674  FUN_00399674 =====

ulong FUN_00399674(long param_1,int param_2,byte *param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  size_t sVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined8 uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined1 (*pauVar19) [16];
  long lVar20;
  uint uVar21;
  undefined8 uVar22;
  ulong uVar23;
  int iVar24;
  ulong uVar25;
  ulong uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 local_78 [24];
  
  if (param_4 == 0) {
    return (ulong)param_4;
  }
  if (param_4 == 0xffffffff) {
    sVar9 = strlen((char *)param_3);
    param_4 = (uint)sVar9;
  }
  bVar3 = *param_3;
  if (bVar3 - 0x30 < 3) {
    if ((int)param_4 < 2) {
      FUN_00379868();
      FUN_0037995c("crypto/asn1/a_object.c",0x4c,"a2d_ASN1_OBJECT");
      uVar12 = 0x8a;
      goto LAB_00399728;
    }
    iVar6 = param_4 - 2;
    if (iVar6 != 0) {
      uVar14 = (ulong)((uint)bVar3 * 0x28 - 0x780);
      uVar23 = (ulong)param_3[1];
      lVar20 = 0;
      uVar25 = 0;
      param_3 = param_3 + 2;
      puVar10 = local_78;
      iVar2 = 0x18;
      do {
        if (((int)uVar23 != 0x2e) && ((int)uVar23 != 0x20)) {
          uVar12 = 0x83;
          uVar22 = 0x55;
LAB_00399ac0:
          FUN_00379868();
          FUN_0037995c("crypto/asn1/a_object.c",uVar22,"a2d_ASN1_OBJECT");
          FUN_00379a5c(0xd,uVar12,0);
LAB_00399aec:
          if (puVar10 != local_78) {
LAB_00399af8:
            FUN_003c86b4(puVar10,"crypto/asn1/a_object.c",0xac);
          }
          goto LAB_00399734;
        }
        uVar26 = 0;
        bVar1 = false;
        uVar21 = iVar6 + 1;
        pbVar5 = param_3 + 1;
        do {
          while( true ) {
            param_3 = pbVar5;
            bVar4 = param_3[-1];
            uVar23 = (ulong)bVar4;
            if ((bVar4 == 0x20) || (bVar4 == 0x2e)) {
              iVar6 = uVar21 - 2;
              goto LAB_0039989c;
            }
            iVar6 = FUN_003c4784(uVar23);
            if (iVar6 == 0) {
              uVar12 = 0x82;
              uVar22 = 0x62;
              goto LAB_00399ac0;
            }
            if ((bVar1) || (uVar26 < 0x1999999999999991)) break;
            if (((lVar20 == 0) && (lVar20 = FUN_0038f584(), lVar20 == 0)) ||
               (iVar6 = FUN_0038f9ec(lVar20,uVar26), iVar6 == 0)) goto LAB_00399aec;
            bVar1 = true;
LAB_00399838:
            iVar6 = FUN_003994ec(lVar20,10);
            if ((iVar6 == 0) || (iVar6 = FUN_0039928c(lVar20,uVar23 - 0x30), iVar6 == 0))
            goto LAB_00399aec;
            uVar21 = uVar21 - 1;
            pbVar5 = param_3 + 1;
            if (uVar21 < 2) goto LAB_00399890;
          }
          if (bVar1) goto LAB_00399838;
          uVar26 = (uVar23 + uVar26 * 10) - 0x30;
          uVar21 = uVar21 - 1;
          pbVar5 = param_3 + 1;
        } while (1 < uVar21);
LAB_00399890:
        iVar6 = 0;
LAB_0039989c:
        iVar24 = (int)uVar25;
        if (iVar24 == 0) {
          if ((bVar3 < 0x32) && (0x27 < uVar26)) {
            uVar12 = 0x93;
            uVar22 = 0x75;
            goto LAB_00399ac0;
          }
          if (!bVar1) {
            uVar26 = uVar26 + uVar14;
            goto LAB_0039999c;
          }
          iVar7 = FUN_0039928c(lVar20,uVar14);
          if (iVar7 != 0) goto LAB_003998cc;
          goto LAB_00399aec;
        }
        if (bVar1) {
LAB_003998cc:
          iVar8 = FUN_0038f2c0(lVar20);
          iVar7 = (iVar8 + 6) / 7;
          if (iVar7 <= iVar2) {
LAB_00399948:
            if (iVar8 + 0xcU < 0xd) {
              uVar15 = 0;
            }
            else {
              uVar26 = 0;
              do {
                lVar11 = FUN_00399138(lVar20,0x80);
                if (lVar11 == -1) goto LAB_00399aec;
                uVar15 = uVar26 + 1;
                puVar10[uVar26] = (char)lVar11;
                uVar26 = uVar15;
              } while (iVar7 != (int)uVar15);
            }
            goto LAB_003999bc;
          }
          if (puVar10 != local_78) {
            FUN_003c86b4(puVar10,"crypto/asn1/a_object.c",0x85);
          }
          iVar2 = iVar7 + 0x20;
          puVar10 = (undefined1 *)FUN_003c83a4(iVar2,"crypto/asn1/a_object.c",0x87);
          if (puVar10 != (undefined1 *)0x0) goto LAB_00399948;
          goto LAB_00399af8;
        }
LAB_0039999c:
        uVar15 = 0;
        do {
          puVar10[uVar15] = (byte)uVar26 & 0x7f;
          uVar15 = uVar15 + 1;
          bVar1 = 0x7f < uVar26;
          uVar26 = uVar26 >> 7;
        } while (bVar1);
LAB_003999bc:
        uVar13 = (uint)uVar15;
        uVar21 = uVar13 + iVar24;
        if (param_1 != 0) {
          if (param_2 < (int)uVar21) {
            uVar12 = 0x6b;
            uVar22 = 0x9d;
            goto LAB_00399ac0;
          }
          if (1 < (int)uVar13) {
            uVar26 = (ulong)iVar24;
            uVar15 = uVar15 & 0xffffffff;
            uVar25 = uVar26;
            if ((0x20 < uVar13) &&
               ((puVar10 + uVar15 <= (undefined1 *)(param_1 + uVar26) ||
                ((undefined1 *)(param_1 + uVar26 + uVar15 + -1) <= puVar10 + 1)))) {
              uVar16 = uVar15 - 1;
              pauVar19 = (undefined1 (*) [16])(puVar10 + uVar15 + -0x10);
              uVar17 = uVar16 & 0xffffffffffffffe0;
              uVar15 = uVar15 - uVar17;
              uVar25 = uVar17 + uVar26;
              puVar18 = (undefined8 *)(param_1 + 0x10 + uVar26);
              uVar26 = uVar17;
              do {
                auVar30 = pauVar19[-1];
                auVar28 = *pauVar19;
                uVar26 = uVar26 - 0x20;
                pauVar19 = pauVar19 + -2;
                auVar27._0_8_ = auVar28._0_8_ | 0x8080808080808080;
                auVar27[8] = auVar28[8] | 0x80;
                auVar27[9] = auVar28[9] | 0x80;
                auVar27[10] = auVar28[10] | 0x80;
                auVar27[0xb] = auVar28[0xb] | 0x80;
                auVar27[0xc] = auVar28[0xc] | 0x80;
                auVar27[0xd] = auVar28[0xd] | 0x80;
                auVar27[0xe] = auVar28[0xe] | 0x80;
                auVar27[0xf] = auVar28[0xf] | 0x80;
                auVar29._0_8_ = auVar30._0_8_ | 0x8080808080808080;
                auVar29[8] = auVar30[8] | 0x80;
                auVar29[9] = auVar30[9] | 0x80;
                auVar29[10] = auVar30[10] | 0x80;
                auVar29[0xb] = auVar30[0xb] | 0x80;
                auVar29[0xc] = auVar30[0xc] | 0x80;
                auVar29[0xd] = auVar30[0xd] | 0x80;
                auVar29[0xe] = auVar30[0xe] | 0x80;
                auVar29[0xf] = auVar30[0xf] | 0x80;
                auVar28 = NEON_rev64(auVar27,1);
                auVar30 = NEON_rev64(auVar29,1);
                auVar28 = NEON_ext(auVar28,auVar28,8,1);
                auVar30 = NEON_ext(auVar30,auVar30,8,1);
                puVar18[-1] = auVar28._8_8_;
                puVar18[-2] = auVar28._0_8_;
                puVar18[1] = auVar30._8_8_;
                *puVar18 = auVar30._0_8_;
                puVar18 = puVar18 + 4;
              } while (uVar26 != 0);
              if (uVar16 == uVar17) goto LAB_00399a40;
            }
            do {
              uVar26 = uVar25 + 1;
              *(byte *)(param_1 + uVar25) = puVar10[uVar15 - 1] | 0x80;
              bVar1 = 2 < uVar15;
              uVar15 = uVar15 - 1;
              uVar25 = uVar26;
            } while (bVar1);
          }
LAB_00399a40:
          uVar21 = (int)uVar25 + 1;
          *(undefined1 *)(param_1 + (int)uVar25) = *puVar10;
        }
        uVar25 = (ulong)uVar21;
      } while (0 < iVar6);
      if (puVar10 != local_78) {
        FUN_003c86b4(puVar10,"crypto/asn1/a_object.c",0xa7);
      }
      goto LAB_00399738;
    }
  }
  else {
    FUN_00379868();
    FUN_0037995c("crypto/asn1/a_object.c",0x47,"a2d_ASN1_OBJECT");
    uVar12 = 0x7a;
LAB_00399728:
    FUN_00379a5c(0xd,uVar12,0);
  }
  lVar20 = 0;
LAB_00399734:
  uVar25 = 0;
LAB_00399738:
  FUN_0038f4f4(lVar20);
  return uVar25;
}


// ===== 00399b58  FUN_00399b58 =====

void FUN_00399b58(void)

{
  FUN_003dd260();
  return;
}


// ===== 00399b60  FUN_00399b60 =====

ulong FUN_00399b60(undefined8 param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auStack_90 [80];
  
  if ((param_2 != 0) && (*(long *)(param_2 + 0x18) != 0)) {
    uVar1 = FUN_003dd260(auStack_90,0x50,param_2,0);
    uVar5 = (ulong)uVar1;
    if ((int)uVar1 < 0x50) {
      if ((int)uVar1 < 1) {
        iVar2 = FUN_0037df4c(param_1,"<INVALID>",9);
        iVar3 = FUN_0039a448(param_1,*(undefined8 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x14)
                            );
        uVar5 = (ulong)(uint)(iVar3 + iVar2);
      }
      else {
        FUN_0037df4c(param_1,auStack_90,uVar5);
      }
    }
    else {
      if (uVar1 == 0x7fffffff) {
        FUN_00379868();
        FUN_0037995c("crypto/asn1/a_object.c",0xc0,"i2a_ASN1_OBJECT");
        FUN_00379a5c(0xd,0xe7,0);
      }
      else {
        lVar4 = FUN_003c83a4(uVar1 + 1,"crypto/asn1/a_object.c",0xc3);
        if (lVar4 != 0) {
          FUN_003dd260(lVar4,uVar1 + 1,param_2,0);
          FUN_0037df4c(param_1,lVar4,uVar5);
          FUN_003c86b4(lVar4,"crypto/asn1/a_object.c",0xce);
          return uVar5;
        }
      }
      uVar5 = 0xffffffff;
    }
    return uVar5;
  }
  uVar5 = FUN_0037df4c(param_1,&DAT_001b77b8,4);
  return uVar5;
}


// ===== 00399cd0  FUN_00399cd0 =====

long FUN_00399cd0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [4];
  int local_34;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = *param_2;
  uVar1 = FUN_0038e758(&local_28,&local_30,&local_34,auStack_38,param_3);
  if ((uVar1 >> 7 & 1) == 0) {
    if (local_34 == 6) {
      lVar2 = FUN_00399d90(param_1,&local_28,local_30);
      if (lVar2 != 0) {
        *param_2 = local_28;
      }
      return lVar2;
    }
    uVar3 = 0x74;
  }
  else {
    uVar3 = 0x66;
  }
  FUN_00379868();
  FUN_0037995c("crypto/asn1/a_object.c",0xea,"d2i_ASN1_OBJECT");
  FUN_00379a5c(0xd,uVar3,0);
  return 0;
}


// ===== 00399d90  FUN_00399d90 =====

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_00399d90(undefined8 *param_1,long *param_2,ulong param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  char *pcVar7;
  undefined8 *puVar8;
  void *__src;
  void *__dest;
  undefined1 auStack_78 [16];
  undefined4 local_68;
  int iStack_64;
  char *local_60;
  undefined4 local_58;
  
  if (((param_2 == (long *)0x0) || (param_3 - 0x80000000 < 0xffffffff80000001)) ||
     (pcVar7 = (char *)*param_2, pcVar7 == (char *)0x0)) {
    FUN_00379868();
    uVar5 = 0xfd;
  }
  else {
    iVar6 = (int)param_3;
    local_68 = 0;
    local_58 = 0;
    iStack_64 = iVar6;
    local_60 = pcVar7;
    iVar3 = FUN_003dd5b4(auStack_78);
    if (iVar3 != 0) {
      puVar4 = (undefined8 *)FUN_003dcce8();
      if (param_1 != (undefined8 *)0x0) {
        puVar8 = (undefined8 *)*param_1;
        if (puVar8 != (undefined8 *)0x0) {
          uVar1 = *(uint *)(puVar8 + 4);
          if ((uVar1 >> 2 & 1) != 0) {
            FUN_003c86b4(*puVar8,"crypto/asn1/a_object.c",0x164);
            FUN_003c86b4(puVar8[1],"crypto/asn1/a_object.c",0x165);
            uVar1 = *(uint *)(puVar8 + 4);
            *puVar8 = 0;
            puVar8[1] = 0;
          }
          if ((uVar1 >> 3 & 1) != 0) {
            FUN_003c86b4(puVar8[3],"crypto/asn1/a_object.c",0x16a);
            uVar1 = *(uint *)(puVar8 + 4);
            puVar8[3] = 0;
            *(undefined4 *)((long)puVar8 + 0x14) = 0;
          }
          if ((uVar1 & 1) != 0) {
            FUN_003c86b4(puVar8,"crypto/asn1/a_object.c",0x16f);
          }
        }
        *param_1 = puVar4;
      }
      *param_2 = *param_2 + param_3;
      return puVar4;
    }
    cVar2 = *pcVar7;
    iVar3 = iVar6;
    while (cVar2 != -0x80) {
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) {
        if (((param_1 == (undefined8 *)0x0) ||
            (puVar4 = (undefined8 *)*param_1, puVar4 == (undefined8 *)0x0)) ||
           ((*(byte *)(puVar4 + 4) & 1) == 0)) {
          puVar4 = (undefined8 *)FUN_003c8474(0x28,"crypto/asn1/a_object.c",0x153);
          if (puVar4 == (undefined8 *)0x0) {
            return (undefined8 *)0x0;
          }
          *(undefined4 *)(puVar4 + 4) = 1;
        }
        __dest = (void *)puVar4[3];
        __src = (void *)*param_2;
        puVar4[3] = 0;
        if ((__dest == (void *)0x0) || (*(int *)((long)puVar4 + 0x14) < iVar6)) {
          *(undefined4 *)((long)puVar4 + 0x14) = 0;
          FUN_003c86b4(__dest,"crypto/asn1/a_object.c",0x12f);
          __dest = (void *)FUN_003c83a4(param_3,"crypto/asn1/a_object.c",0x130);
          if (__dest == (void *)0x0) {
            FUN_00379868();
            FUN_0037995c("crypto/asn1/a_object.c",0x149,"ossl_c2i_ASN1_OBJECT");
            FUN_00379a5c(0xd,param_3 & 0xffffffff,0);
            if ((param_1 != (undefined8 *)0x0) && ((undefined8 *)*param_1 == puVar4)) {
              return (undefined8 *)0x0;
            }
            FUN_0039a0f4();
            return (undefined8 *)0x0;
          }
          *(uint *)(puVar4 + 4) = *(uint *)(puVar4 + 4) | 8;
        }
        memcpy(__dest,__src,param_3);
        if ((*(byte *)(puVar4 + 4) >> 2 & 1) != 0) {
          FUN_003c86b4(*puVar4,"crypto/asn1/a_object.c",0x138);
          FUN_003c86b4(puVar4[1],"crypto/asn1/a_object.c",0x139);
          *(uint *)(puVar4 + 4) = *(uint *)(puVar4 + 4) & 0xfffffffb;
        }
        puVar4[3] = __dest;
        *(int *)((long)puVar4 + 0x14) = iVar6;
        *puVar4 = 0;
        puVar4[1] = 0;
        if (param_1 != (undefined8 *)0x0) {
          *param_1 = puVar4;
        }
        *param_2 = (long)__src + param_3;
        return puVar4;
      }
      pcVar7 = pcVar7 + 1;
      cVar2 = *pcVar7;
    }
    FUN_00379868();
    uVar5 = 0x11b;
  }
  FUN_0037995c("crypto/asn1/a_object.c",uVar5,"ossl_c2i_ASN1_OBJECT");
  FUN_00379a5c(0xd,0xd8,0);
  return (undefined8 *)0x0;
}


// ===== 0039a0f4  FUN_0039a0f4 =====

void FUN_0039a0f4(undefined8 *param_1)

{
  uint uVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = *(uint *)(param_1 + 4);
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_003c86b4(*param_1,"crypto/asn1/a_object.c",0x164);
      FUN_003c86b4(param_1[1],"crypto/asn1/a_object.c",0x165);
      uVar1 = *(uint *)(param_1 + 4);
      *param_1 = 0;
      param_1[1] = 0;
    }
    if ((uVar1 >> 3 & 1) != 0) {
      FUN_003c86b4(param_1[3],"crypto/asn1/a_object.c",0x16a);
      uVar1 = *(uint *)(param_1 + 4);
      param_1[3] = 0;
      *(undefined4 *)((long)param_1 + 0x14) = 0;
    }
    if ((uVar1 & 1) != 0) {
      FUN_003c86b4(param_1,"crypto/asn1/a_object.c",0x16f);
      return;
    }
  }
  return;
}


// ===== 0039a198  FUN_0039a198 =====

void FUN_0039a198(void)

{
  long lVar1;
  
  lVar1 = FUN_003c8474(0x28,"crypto/asn1/a_object.c",0x153);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x20) = 1;
  }
  return;
}


// ===== 0039a1c8  FUN_0039a1c8 =====

void FUN_0039a1c8(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 local_20;
  undefined4 local_18;
  
  local_18 = 0xd;
  local_38 = param_4;
  uStack_30 = param_5;
  local_28 = param_1;
  uStack_24 = param_3;
  local_20 = param_2;
  FUN_003de510(&local_38);
  return;
}


// ===== 0039a1fc  FUN_0039a1fc =====

void FUN_0039a1fc(void)

{
  FUN_0039a204();
  return;
}


// ===== 0039a204  FUN_0039a204 =====

ulong FUN_0039a204(code *param_1,undefined8 param_2,long param_3,int param_4,uint param_5)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  undefined4 uVar10;
  ulong uVar11;
  byte bVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  byte abStack_189 [297];
  
  uVar8 = param_5;
  if (0x3f < param_5) {
    uVar8 = 0x40;
  }
  uVar2 = 0;
  if (-1 < (int)param_5) {
    uVar2 = uVar8;
  }
  iVar3 = 0;
  if (5 < uVar2) {
    iVar3 = uVar2 - 6;
  }
  uVar5 = 0x10 - (iVar3 + 3U >> 2);
  uVar8 = uVar5 & 0xff;
  uVar4 = 0;
  if (uVar8 != 0) {
    uVar4 = param_4 / (int)uVar8;
  }
  if ((int)(uVar4 * uVar8) < param_4) {
    uVar4 = uVar4 + 1;
  }
  if ((int)uVar4 < 1) {
    uVar6 = 0;
  }
  else {
    lVar13 = (long)param_4;
    lVar17 = 0;
    uVar14 = 0;
    uVar6 = 0;
    uVar15 = (ulong)uVar5 & 0xff;
    lVar16 = param_3;
    do {
      uVar7 = FUN_0037cd5c(abStack_189,0x121,"%*s%04x - ",uVar2,&DAT_001c717f,
                           uVar14 * uVar15 & 0xffffffff);
      uVar7 = uVar7 & 0xffffffff;
      uVar18 = 0;
      do {
        lVar9 = (long)(int)uVar7;
        if (lVar9 - 0x122U < 0xfffffffffffffffc) {
          if ((long)(lVar17 + uVar18) < lVar13) {
            uVar10 = 0x2d;
            if (uVar18 != 7) {
              uVar10 = 0x20;
            }
            FUN_0037cd5c(abStack_189 + lVar9,4,"%02x%c",*(undefined1 *)(param_3 + lVar17 + uVar18),
                         uVar10);
          }
          else {
            pbVar1 = abStack_189 + lVar9;
            pbVar1[0] = 0x20;
            pbVar1[1] = 0x20;
            pbVar1[2] = 0x20;
            pbVar1[3] = 0;
          }
          uVar7 = (ulong)((int)uVar7 + 3);
        }
        uVar8 = (uint)uVar7;
        uVar18 = uVar18 + 1;
      } while (uVar15 != uVar18);
      lVar9 = (long)(int)uVar8;
      if (lVar9 - 0x122U < 0xfffffffffffffffd) {
        uVar8 = uVar8 + 2;
        uVar7 = (ulong)uVar8;
        abStack_189[lVar9 + 2] = 0;
        (abStack_189 + lVar9)[0] = 0x20;
        (abStack_189 + lVar9)[1] = 0x20;
      }
      if ((long)(uVar14 * uVar15) < lVar13) {
        uVar18 = 0;
        do {
          uVar11 = (ulong)(int)uVar7;
          if ((uVar11 & 0xfffffffffffffffe) != 0x120) {
            bVar12 = *(byte *)(lVar16 + uVar18);
            uVar7 = uVar11 + 1;
            abStack_189[uVar11 + 1] = 0;
            if (0x5e < bVar12 - 0x20) {
              bVar12 = 0x2e;
            }
            abStack_189[uVar11] = bVar12;
          }
          uVar8 = (uint)uVar7;
          uVar18 = uVar18 + 1;
        } while ((uVar18 < uVar15) && ((long)(uVar18 + lVar17) < lVar13));
      }
      uVar7 = (ulong)(int)uVar8;
      uVar18 = uVar7;
      if ((uVar7 & 0xfffffffffffffffe) != 0x120) {
        uVar18 = uVar7 + 1;
        (abStack_189 + uVar7)[0] = 10;
        (abStack_189 + uVar7)[1] = 0;
      }
      uVar18 = (*param_1)(abStack_189,uVar18,param_2);
      if ((int)uVar18 < 0) {
        return uVar18;
      }
      uVar14 = uVar14 + 1;
      lVar17 = lVar17 + uVar15;
      lVar16 = lVar16 + uVar15;
      uVar6 = (ulong)(uint)((int)uVar18 + (int)uVar6);
    } while (uVar14 != uVar4);
  }
  return uVar6;
}


// ===== 0039a448  FUN_0039a448 =====

void FUN_0039a448(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_0039a204(FUN_0039a468,param_1,param_2,param_3,0);
  return;
}


// ===== 0039a468  FUN_0039a468 =====

void FUN_0039a468(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_0037df4c(param_3,param_1,param_2);
  return;
}


// ===== 0039a47c  FUN_0039a47c =====

void FUN_0039a47c(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0039a204(FUN_0039a468,param_1,param_2,param_3,param_4);
  return;
}


// ===== 0039a49c  FUN_0039a49c =====

undefined8
FUN_0039a49c(undefined8 param_1,undefined4 param_2,int param_3,undefined1 *param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  long lVar4;
  int iVar5;
  
  uVar2 = param_5 - 1;
  if (0 < param_5) {
    if (uVar2 != 0) {
      FUN_0037b9f8(param_1,"%02X:",*param_4);
      iVar5 = 0;
      if (param_3 != 0) {
        iVar5 = 1 / param_3;
      }
      iVar5 = 1 - iVar5 * param_3;
      if (iVar5 == 0) {
        FUN_0037b9f8(param_1,&DAT_001e2980);
      }
      if (uVar2 != 1) {
        puVar3 = param_4 + 1;
        lVar4 = (ulong)uVar2 - 1;
        do {
          if (iVar5 == 0) {
            FUN_0037b9f8(param_1,&DAT_001d8020,param_2,&DAT_001c717f);
          }
          FUN_0037b9f8(param_1,"%02X:",*puVar3);
          iVar1 = 0;
          if (param_3 != 0) {
            iVar1 = (iVar5 + 1) / param_3;
          }
          iVar5 = (iVar5 + 1) - iVar1 * param_3;
          if (iVar5 == 0) {
            FUN_0037b9f8(param_1,&DAT_001e2980);
          }
          lVar4 = lVar4 + -1;
          puVar3 = puVar3 + 1;
        } while (lVar4 != 0);
      }
      if ((param_5 != 1) && (iVar5 == 0)) {
        FUN_0037b9f8(param_1,&DAT_001d8020,param_2,&DAT_001c717f);
      }
    }
    FUN_0037b9f8(param_1,&DAT_001e4bda,param_4[uVar2]);
  }
  return 1;
}


// ===== 0039a5f4  FUN_0039a5f4 =====

undefined8 FUN_0039a5f4(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 local_18;
  
  local_18 = 0;
  iVar2 = FUN_0039a684(&local_18,param_1,0,0,0);
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar1 = local_18;
  }
  return uVar1;
}


// ===== 0039a634  FUN_0039a634 =====

void FUN_0039a634(undefined8 param_1,undefined8 param_2)

{
  FUN_0039a684(param_1,param_2,0,0,0);
  return;
}


// ===== 0039a644  FUN_0039a644 =====

undefined8 FUN_0039a644(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 local_18;
  
  local_18 = 0;
  iVar2 = FUN_0039a684(&local_18,param_1,0,param_2,param_3);
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar1 = local_18;
  }
  return uVar1;
}


// ===== 0039a684  FUN_0039a684 =====

undefined8
FUN_0039a684(long *param_1,byte *param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  long lVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long lVar6;
  code *pcVar7;
  
  lVar2 = *(long *)(param_2 + 0x20);
  if ((lVar2 == 0) || (pcVar7 = *(code **)(lVar2 + 0x18), pcVar7 == (code *)0x0)) {
    pcVar7 = (code *)0x0;
    bVar3 = *param_2;
    if (bVar3 < 4) goto LAB_0039a6cc;
LAB_0039a73c:
    if (bVar3 == 6) goto LAB_0039a77c;
    if (bVar3 == 5) {
      iVar1 = FUN_0039ac08(param_1,param_2);
    }
    else {
      if (bVar3 != 4) {
        return 1;
      }
      if (lVar2 == 0) {
        return 1;
      }
      if (*(code **)(lVar2 + 0x38) == (code *)0x0) {
        if (*(code **)(lVar2 + 8) == (code *)0x0) {
          return 1;
        }
        iVar1 = (**(code **)(lVar2 + 8))(param_1,param_2);
      }
      else {
        iVar1 = (**(code **)(lVar2 + 0x38))(param_1,param_2,param_4,param_5);
      }
    }
    if (iVar1 != 0) {
      return 1;
    }
LAB_0039a810:
    uVar4 = 0xa3;
    uVar5 = 0x8000d;
    goto LAB_0039a994;
  }
  bVar3 = *param_2;
  if (3 < bVar3) goto LAB_0039a73c;
LAB_0039a6cc:
  if (bVar3 == 0) {
    uVar5 = 0x8000d;
    if (*(long *)(param_2 + 0x10) == 0) {
      iVar1 = FUN_0039ac08(param_1,param_2);
    }
    else {
      iVar1 = FUN_0039aa34(param_1,*(long *)(param_2 + 0x10),param_4,param_5);
    }
    if (iVar1 != 0) {
      return 1;
    }
    uVar4 = 0xa3;
    goto LAB_0039a994;
  }
  if (bVar3 == 1) {
LAB_0039a77c:
    if (pcVar7 != (code *)0x0) {
      iVar1 = (*pcVar7)(0,param_1,param_2,0);
      if (iVar1 == 0) goto LAB_0039a98c;
      if (iVar1 == 2) {
        return 1;
      }
    }
    if (param_3 == 0) {
      lVar2 = FUN_003c8474(*(undefined8 *)(param_2 + 0x28),"crypto/asn1/tasn_new.c",0x88);
      *param_1 = lVar2;
      if (lVar2 == 0) {
        return 0;
      }
      iVar1 = FUN_0038cc78(param_1,0,param_2);
      if (iVar1 < 0) {
        uVar5 = 0x8000d;
        FUN_003c86b4(*param_1,"crypto/asn1/tasn_new.c",0x8f);
        *param_1 = 0;
        uVar4 = 0xa3;
        goto LAB_0039a994;
      }
    }
    else {
      memset((void *)*param_1,0,*(size_t *)(param_2 + 0x28));
      iVar1 = FUN_0038cc78(param_1,0,param_2);
      if (iVar1 < 0) goto LAB_0039a810;
    }
    FUN_0038cd8c(param_1,param_2);
    if (0 < *(long *)(param_2 + 0x18)) {
      lVar6 = *(long *)(param_2 + 0x10);
      lVar2 = 0;
      do {
        uVar4 = FUN_0038cfac(param_1,lVar6);
        iVar1 = FUN_0039aa34(uVar4,lVar6,param_4,param_5);
        if (iVar1 == 0) {
          uVar5 = 0x8000d;
          FUN_0038c784(param_1,param_2,param_3);
          uVar4 = 0xa3;
          goto LAB_0039a994;
        }
        lVar2 = lVar2 + 1;
        lVar6 = lVar6 + 0x28;
      } while (lVar2 < *(long *)(param_2 + 0x18));
    }
joined_r0x0039a8c0:
    if (pcVar7 == (code *)0x0) {
      return 1;
    }
    iVar1 = (*pcVar7)(1,param_1,param_2,0);
    if (iVar1 != 0) {
      return 1;
    }
    FUN_0038c784(param_1,param_2,param_3);
  }
  else {
    if (bVar3 != 2) {
      return 1;
    }
    if (pcVar7 == (code *)0x0) {
LAB_0039a820:
      if (param_3 == 0) {
        lVar2 = FUN_003c8474(*(undefined8 *)(param_2 + 0x28),"crypto/asn1/tasn_new.c",0x72);
        *param_1 = lVar2;
        if (lVar2 == 0) {
          return 0;
        }
      }
      else {
        memset((void *)*param_1,0,*(size_t *)(param_2 + 0x28));
      }
      FUN_0038cc64(param_1,0xffffffff,param_2);
      goto joined_r0x0039a8c0;
    }
    iVar1 = (*pcVar7)(0,param_1,param_2,0);
    if (iVar1 != 0) {
      if (iVar1 == 2) {
        return 1;
      }
      goto LAB_0039a820;
    }
  }
LAB_0039a98c:
  uVar5 = 100;
  uVar4 = 0xa9;
LAB_0039a994:
  FUN_00379868();
  FUN_0037995c("crypto/asn1/tasn_new.c",uVar4,"asn1_item_embed_new");
  FUN_00379a5c(0xd,uVar5,0);
  return 0;
}


// ===== 0039aa24  FUN_0039aa24 =====

void FUN_0039aa24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_0039a684(param_1,param_2,0,param_3,param_4);
  return;
}


// ===== 0039aa34  FUN_0039aa34 =====

undefined8 FUN_0039aa34(long *******param_1,ulong *param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  byte *pbVar2;
  long ******pppppplVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  long *******ppppppplVar9;
  long ******local_38;
  
  pbVar2 = (byte *)(*(code *)param_2[4])();
  uVar6 = *param_2;
  ppppppplVar9 = param_1;
  if (((uint)uVar6 >> 0xc & 1) != 0) {
    ppppppplVar9 = &local_38;
    local_38 = (long ******)param_1;
  }
  if ((uVar6 & 1) == 0) {
    if ((uVar6 & 0x300) == 0) {
      if ((uVar6 & 6) == 0) {
        uVar4 = FUN_0039a684(ppppppplVar9,pbVar2,(uint)uVar6 & 0x1000,param_3,param_4);
        return uVar4;
      }
      pppppplVar3 = (long ******)FUN_0040bf0c();
      if (pppppplVar3 != (long ******)0x0) {
        *ppppppplVar9 = pppppplVar3;
        return 1;
      }
      FUN_00379868();
      FUN_0037995c("crypto/asn1/tasn_new.c",0xe9,"asn1_template_new");
      FUN_00379a5c(0xd,0x8000f,0);
      return 0;
    }
  }
  else {
    do {
      if ((*param_2 & 0x306) != 0) goto LAB_0039ab4c;
      pbVar2 = (byte *)(*(code *)param_2[4])(pbVar2,pbVar2);
      bVar1 = *pbVar2;
      if (bVar1 != 0) {
        uVar5 = (uint)bVar1;
        if (uVar5 < 4) {
          if (1 < uVar5 - 1) {
            return 1;
          }
          goto LAB_0039ab4c;
        }
        if (uVar5 == 6) goto LAB_0039ab4c;
        if (uVar5 == 5) {
          lVar7 = *(long *)(pbVar2 + 0x20);
          if (lVar7 != 0) goto LAB_0039ab98;
          goto LAB_0039ab4c;
        }
        if (bVar1 != 4) {
          return 1;
        }
        if ((*(long *)(pbVar2 + 0x20) == 0) ||
           (pcVar8 = *(code **)(*(long *)(pbVar2 + 0x20) + 0x18), pcVar8 == (code *)0x0))
        goto LAB_0039ab4c;
        goto LAB_0039aba0;
      }
      param_2 = *(ulong **)(pbVar2 + 0x10);
    } while (param_2 != (ulong *)0x0);
    lVar7 = *(long *)(pbVar2 + 0x20);
    if (lVar7 == 0) {
      if (*(int *)(pbVar2 + 8) == 1) {
        *(int *)ppppppplVar9 = (int)*(undefined8 *)(pbVar2 + 0x28);
        return 1;
      }
    }
    else {
LAB_0039ab98:
      pcVar8 = *(code **)(lVar7 + 0x20);
      if (pcVar8 != (code *)0x0) {
LAB_0039aba0:
        (*pcVar8)(ppppppplVar9);
        return 1;
      }
    }
  }
LAB_0039ab4c:
  *ppppppplVar9 = (long ******)0x0;
  return 1;
}


// ===== 0039ac08  FUN_0039ac08 =====

ulong FUN_0039ac08(long *param_1,char *param_2,int param_3)

{
  char cVar1;
  ulong uVar2;
  undefined4 *puVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  lVar5 = *(long *)(param_2 + 0x20);
  if (lVar5 != 0) {
    if (param_3 == 0) {
      if (*(code **)(lVar5 + 0x10) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0039ac54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(lVar5 + 0x10))();
        return uVar2;
      }
    }
    else if (*(code **)(lVar5 + 0x20) != (code *)0x0) {
      (**(code **)(lVar5 + 0x20))();
      return 1;
    }
  }
  if (*param_2 == '\x05') {
    iVar4 = -1;
  }
  else {
    iVar4 = *(int *)(param_2 + 8);
    if (iVar4 < 5) {
      if (iVar4 == -4) {
        puVar3 = (undefined4 *)FUN_003c83a4(0x10,"crypto/asn1/tasn_new.c",0x12d);
        if (puVar3 == (undefined4 *)0x0) {
          return 0;
        }
        *(undefined8 *)(puVar3 + 2) = 0;
        *puVar3 = 0xffffffff;
        *param_1 = (long)puVar3;
        goto LAB_0039ad38;
      }
      if (iVar4 == 1) {
        *(int *)param_1 = (int)*(undefined8 *)(param_2 + 0x28);
        return 1;
      }
    }
    else {
      if (iVar4 == 5) {
        *param_1 = 1;
        return 1;
      }
      if (iVar4 == 6) {
        lVar5 = FUN_003dcce8(0);
        *param_1 = lVar5;
        return 1;
      }
    }
  }
  if (param_3 == 0) {
    puVar6 = (undefined8 *)FUN_0038ee84(iVar4);
    *param_1 = (long)puVar6;
    cVar1 = *param_2;
  }
  else {
    puVar6 = (undefined8 *)*param_1;
    *puVar6 = 0;
    puVar6[1] = 0;
    *(int *)((long)puVar6 + 4) = iVar4;
    puVar6[2] = 0x80;
    cVar1 = *param_2;
  }
  if ((cVar1 == '\x05') && (puVar6 != (undefined8 *)0x0)) {
    puVar6[2] = puVar6[2] | 0x40;
  }
LAB_0039ad38:
  return (ulong)(*param_1 != 0);
}


// ===== 0039adb8  FUN_0039adb8 =====

uint FUN_0039adb8(uint *param_1)

{
  if (((*param_1 | 4) != 5) && (*(long *)(param_1 + 2) == 0)) {
    return 0;
  }
  return *param_1;
}


// ===== 0039ade0  FUN_0039ade0 =====

void FUN_0039ade0(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint *local_28;
  
  if (((*param_1 | 4) != 5) && (*(long *)(param_1 + 2) != 0)) {
    local_28 = param_1;
    FUN_0038cb0c(&local_28,0,0);
    param_1 = local_28;
  }
  *param_1 = param_2;
  if (param_2 == 1) {
    uVar1 = 0;
    if (param_3 != 0) {
      uVar1 = 0xff;
    }
    param_1[2] = uVar1;
    return;
  }
  *(long *)(param_1 + 2) = param_3;
  return;
}


// ===== 0039ae70  FUN_0039ae70 =====

undefined8 FUN_0039ae70(uint *param_1,uint param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  uint *local_28;
  
  local_28 = param_1;
  if ((param_2 == 1) || (param_3 == 0)) {
    if (((*param_1 | 4) != 5) && (*(long *)(param_1 + 2) != 0)) {
      FUN_0038cb0c(&local_28,0,0);
      param_1 = local_28;
    }
    *param_1 = param_2;
    if (param_2 == 1) {
      uVar2 = 0;
      if (param_3 != 0) {
        uVar2 = 0xff;
      }
      param_1[2] = uVar2;
    }
    else {
      *(long *)(param_1 + 2) = param_3;
    }
  }
  else {
    if (param_2 == 6) {
      lVar1 = FUN_003de510(param_3);
      if (lVar1 == 0) {
        return 0;
      }
      if (((*param_1 | 4) != 5) && (*(long *)(param_1 + 2) != 0)) {
        FUN_0038cb0c(&local_28,0,0);
        param_1 = local_28;
      }
      param_2 = 6;
    }
    else {
      lVar1 = FUN_0038ed00(param_3);
      if (lVar1 == 0) {
        return 0;
      }
      if (((*param_1 | 4) != 5) && (*(long *)(param_1 + 2) != 0)) {
        FUN_0038cb0c(&local_28,0,0);
        param_1 = local_28;
      }
    }
    *param_1 = param_2;
    *(long *)(param_1 + 2) = lVar1;
  }
  return 1;
}


// ===== 0039afb8  FUN_0039afb8 =====

ulong FUN_0039afb8(int *param_1,int *param_2)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar3 = 0xffffffff;
  if ((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) {
    iVar1 = *param_1;
    if (iVar1 != *param_2) {
      return 0xffffffff;
    }
    if (iVar1 != 1) {
      if (iVar1 == 5) {
        return 0;
      }
      if (iVar1 == 6) {
        uVar2 = FUN_003de61c(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
        return uVar2;
      }
      uVar2 = FUN_0038ef94(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
      return uVar2;
    }
    uVar3 = param_1[2] - param_2[2];
  }
  return (ulong)uVar3;
}


// ===== 0039b028  FUN_0039b028 =====

uint * FUN_0039b028(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *local_28;
  
  puVar1 = (uint *)FUN_0039b120(param_2,param_1,0);
  puVar2 = puVar1;
  if (puVar1 != (uint *)0x0) {
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (uint *)FUN_0038a64c();
      if (puVar2 == (uint *)0x0) {
LAB_0039b0d8:
        thunk_FUN_0038eddc(puVar1);
        return (uint *)0x0;
      }
    }
    else {
      puVar2 = (uint *)*param_3;
      if (puVar2 == (uint *)0x0) {
        puVar2 = (uint *)FUN_0038a64c();
        if (puVar2 == (uint *)0x0) goto LAB_0039b0d8;
        *param_3 = puVar2;
      }
    }
    local_28 = puVar2;
    if (((*puVar2 | 4) != 5) && (*(long *)(puVar2 + 2) != 0)) {
      FUN_0038cb0c(&local_28,0,0);
    }
    *(uint **)(local_28 + 2) = puVar1;
    *local_28 = 0x10;
  }
  return puVar2;
}


// ===== 0039b0f4  FUN_0039b0f4 =====

undefined8 FUN_0039b0f4(undefined8 param_1,int *param_2)

{
  undefined8 uVar1;
  
  if (((param_2 != (int *)0x0) && (*param_2 == 0x10)) && (*(long *)(param_2 + 2) != 0)) {
    uVar1 = FUN_0039b28c(*(long *)(param_2 + 2),param_1);
    return uVar1;
  }
  return 0;
}


// ===== 0039b120  FUN_0039b120 =====

int * FUN_0039b120(undefined8 param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  if (((param_3 == (long *)0x0) || (piVar2 = (int *)*param_3, piVar2 == (int *)0x0)) &&
     (piVar2 = (int *)FUN_0038edac(), piVar2 == (int *)0x0)) {
    FUN_00379868();
    FUN_0037995c("crypto/asn1/asn_pack.c",0x16,"ASN1_item_pack");
    FUN_00379a5c(0xd,0x8000d,0);
    return (int *)0x0;
  }
  FUN_0038ee3c(piVar2,0,0);
  iVar1 = FUN_0039b478(param_1,piVar2 + 2,param_2);
  *piVar2 = iVar1;
  if (iVar1 < 1) {
    uVar3 = 0x70;
    uVar4 = 0x20;
  }
  else {
    if (*(long *)(piVar2 + 2) != 0) {
      if ((param_3 != (long *)0x0) && (*param_3 == 0)) {
        *param_3 = (long)piVar2;
        return piVar2;
      }
      return piVar2;
    }
    uVar4 = 0x24;
    uVar3 = 0x8000d;
  }
  FUN_00379868();
  FUN_0037995c("crypto/asn1/asn_pack.c",uVar4,"ASN1_item_pack");
  FUN_00379a5c(0xd,uVar3,0);
  if ((param_3 != (long *)0x0) && (*param_3 != 0)) {
    return (int *)0x0;
  }
  FUN_0038eddc(piVar2);
  return (int *)0x0;
}


// ===== 0039b28c  FUN_0039b28c =====

long FUN_0039b28c(int *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_8;
  
  local_8 = *(undefined8 *)(param_1 + 2);
  lVar1 = FUN_0038a93c(0,&local_8,(long)*param_1,param_2);
  if (lVar1 != 0) {
    return lVar1;
  }
  FUN_00379868();
  FUN_0037995c("crypto/asn1/asn_pack.c",0x3b,"ASN1_item_unpack");
  FUN_00379a5c(0xd,0x6e,0);
  return 0;
}


// ===== 0039b304  FUN_0039b304 =====

long FUN_0039b304(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 local_8;
  
  local_8 = *(undefined8 *)(param_1 + 2);
  lVar1 = FUN_0038a86c(0,&local_8,(long)*param_1,param_2,param_3,param_4);
  if (lVar1 != 0) {
    return lVar1;
  }
  FUN_00379868();
  FUN_0037995c("crypto/asn1/asn_pack.c",0x48,"ASN1_item_unpack_ex");
  FUN_00379a5c(0xd,0x6e,0);
  return 0;
}


// ===== 0039b384  FUN_0039b384 =====

void FUN_0039b384(void)

{
  FUN_0039b38c();
  return;
}


// ===== 0039b38c  FUN_0039b38c =====

ulong FUN_0039b38c(undefined8 param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  ulong uVar1;
  long lVar2;
  long local_48;
  undefined8 local_28;
  
  local_28 = param_1;
  if ((param_2 == (long *)0x0) || (*param_2 != 0)) {
    uVar1 = FUN_0039b480(&local_28,param_2,param_3,0xffffffff,param_4);
  }
  else {
    uVar1 = FUN_0039b480(&local_28,0,param_3,0xffffffff,param_4);
    if (0 < (int)uVar1) {
      lVar2 = FUN_003c83a4(uVar1 & 0xffffffff,"crypto/asn1/tasn_enc.c",0x41);
      if (lVar2 != 0) {
        local_48 = lVar2;
        FUN_0039b480(&local_28,&local_48,param_3,0xffffffff,param_4);
        *param_2 = lVar2;
        return uVar1 & 0xffffffff;
      }
      return 0xffffffff;
    }
  }
  return uVar1;
}


// ===== 0039b478  FUN_0039b478 =====

void FUN_0039b478(void)

{
  FUN_0039b38c();
  return;
}


// ===== 0039b480  FUN_0039b480 =====

ulong FUN_0039b480(long *param_1,long param_2,byte *param_3,undefined8 param_4,ulong param_5)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  uint uVar14;
  uint local_64;
  
  bVar2 = *param_3;
  lVar11 = *(long *)(param_3 + 0x20);
  if ((bVar2 == 0) || (*param_1 != 0)) {
    iVar4 = (int)param_4;
    uVar5 = (uint)param_5;
    if (lVar11 == 0) {
      pcVar13 = (code *)0x0;
    }
    else {
      lVar12 = 0x18;
      if ((*(byte *)(lVar11 + 8) & 8) != 0) {
        lVar12 = 0x28;
      }
      pcVar13 = *(code **)(lVar11 + lVar12);
    }
    if (bVar2 < 4) {
      if (bVar2 == 0) {
        lVar11 = *(long *)(param_3 + 0x10);
        if (lVar11 == 0) goto LAB_0039b63c;
LAB_0039b584:
        uVar7 = FUN_0039b8a4(param_1,param_2,lVar11,param_4,param_5);
        return uVar7;
      }
      if (bVar2 != 1) {
        if (bVar2 != 2) {
          return 0;
        }
        if (iVar4 != -1) {
          FUN_00379868(0);
          uVar9 = 0x7b;
          goto LAB_0039b620;
        }
        param_5 = param_5 & 0xffffffff;
        if ((pcVar13 != (code *)0x0) && (uVar7 = (*pcVar13)(6,param_1,param_3,0), (int)uVar7 == 0))
        {
          return uVar7;
        }
        uVar5 = FUN_0038cc54(param_1,param_3);
        if (((int)uVar5 < 0) || (*(long *)(param_3 + 0x18) <= (long)(ulong)uVar5)) {
          if (pcVar13 == (code *)0x0) {
            return 0;
          }
          (*pcVar13)(7,param_1,param_3,0);
          return 0;
        }
        lVar11 = *(long *)(param_3 + 0x10) + (ulong)uVar5 * 0x28;
        param_1 = (long *)FUN_0038cfbc(param_1,lVar11);
        param_4 = 0xffffffff;
        goto LAB_0039b584;
      }
      uVar14 = 0;
      iVar3 = FUN_0038ceec(&local_64,param_2,param_1,param_3);
      uVar10 = 1;
    }
    else {
      if (bVar2 == 4) {
                    /* WARNING: Could not recover jumptable at 0x0039b5cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar7 = (**(code **)(lVar11 + 0x28))(param_1,param_2,param_3);
        return uVar7;
      }
      if (bVar2 == 5) {
        if (iVar4 != -1) {
          FUN_00379868();
          uVar9 = 0x70;
LAB_0039b620:
          FUN_0037995c("crypto/asn1/tasn_enc.c",uVar9,"ASN1_item_ex_i2d");
          FUN_00379a5c(0xd,0xe6,0);
          return 0xffffffff;
        }
LAB_0039b63c:
        uVar7 = FUN_0039be00(param_1,param_2,param_3);
        return uVar7;
      }
      if (bVar2 != 6) {
        return 0;
      }
      uVar14 = (uVar5 & 0x800) >> 0xb;
      uVar10 = 1;
      if ((param_5 & 0x800) != 0) {
        uVar10 = 2;
      }
      iVar3 = FUN_0038ceec(&local_64,param_2,param_1,param_3);
    }
    if (-1 < iVar3) {
      if (iVar3 != 0) {
        return (ulong)local_64;
      }
      uVar1 = uVar5 & 0xffffff3f;
      if (iVar4 != -1) {
        uVar1 = uVar5;
      }
      local_64 = 0;
      iVar3 = 0x10;
      if (iVar4 != -1) {
        iVar3 = iVar4;
      }
      if ((pcVar13 != (code *)0x0) &&
         (uVar7 = (*pcVar13)(uVar5 & 0xffffff3f,6,param_1,param_3,0), (int)uVar7 == 0)) {
        return uVar7;
      }
      if (0 < *(long *)(param_3 + 0x18)) {
        lVar12 = *(long *)(param_3 + 0x10);
        lVar11 = 0;
        do {
          lVar6 = FUN_0038cfcc(*param_1,lVar12,1);
          if (lVar6 == 0) {
            return 0;
          }
          uVar9 = FUN_0038cfbc(param_1,lVar6);
          uVar7 = FUN_0039b8a4(uVar9,0,lVar6,0xffffffff,uVar1);
          iVar4 = (int)uVar7;
          if (iVar4 == -1) {
            return uVar7;
          }
          if ((int)(local_64 ^ 0x7fffffff) < iVar4) {
            return 0xffffffff;
          }
          lVar11 = lVar11 + 1;
          local_64 = local_64 + iVar4;
          lVar12 = lVar12 + 0x28;
        } while (lVar11 < *(long *)(param_3 + 0x18));
      }
      uVar7 = FUN_0038eadc(uVar10,local_64,iVar3);
      if (param_2 == 0) {
        return uVar7;
      }
      if ((int)uVar7 != -1) {
        FUN_0038e9b8(param_2,uVar10,local_64,iVar3,uVar1);
        if (0 < *(long *)(param_3 + 0x18)) {
          lVar12 = *(long *)(param_3 + 0x10);
          lVar11 = 0;
          do {
            lVar6 = FUN_0038cfcc(*param_1,lVar12,1);
            if (lVar6 == 0) {
              return 0;
            }
            uVar9 = FUN_0038cfbc(param_1,lVar6);
            FUN_0039b8a4(uVar9,param_2,lVar6,0xffffffff,uVar1);
            lVar11 = lVar11 + 1;
            lVar12 = lVar12 + 0x28;
          } while (lVar11 < *(long *)(param_3 + 0x18));
        }
        if (uVar14 != 0) {
          FUN_0038eac4(param_2);
        }
        if ((pcVar13 != (code *)0x0) && (uVar8 = (*pcVar13)(7,param_1,param_3,0), (int)uVar8 == 0))
        {
          return uVar8;
        }
        return uVar7 & 0xffffffff;
      }
      return uVar7;
    }
  }
  return 0;
}


// ===== 0039b8a4  FUN_0039b8a4 =====

/* WARNING: Type propagation algorithm not settling */

int FUN_0039b8a4(long *******param_1,long *param_2,uint *param_3,uint param_4,uint param_5)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  long *__base;
  void *pvVar13;
  long ******pppppplVar14;
  uint uVar15;
  long *plVar16;
  undefined8 local_80;
  long *******local_78;
  void *local_70;
  long local_68;
  
  uVar5 = *param_3;
  if ((uVar5 >> 0xc & 1) != 0) {
    local_78 = param_1;
    param_1 = (long *******)&local_78;
  }
  if ((uVar5 & 0x18) == 0) {
    uVar15 = 0;
    if (param_4 != 0xffffffff) {
      uVar15 = param_5 & 0xc0;
    }
  }
  else {
    if (param_4 != 0xffffffff) {
      return -1;
    }
    param_4 = param_3[2];
    uVar15 = uVar5 & 0xc0;
  }
  uVar2 = param_5 & 0xffffff3f;
  uVar3 = param_5 & uVar5 & 0x800;
  uVar11 = 1;
  if (uVar3 != 0) {
    uVar11 = 2;
  }
  if ((uVar5 & 6) != 0) {
    pppppplVar14 = *param_1;
    if (pppppplVar14 == (long ******)0x0) {
      return 0;
    }
    uVar9 = 0x10;
    if ((uVar5 & 2) != 0) {
      uVar9 = 0x11;
    }
    uVar4 = uVar15;
    uVar6 = param_4;
    if ((uVar5 & 0x10) != 0 || param_4 == 0xffffffff) {
      uVar4 = 0;
      uVar6 = uVar9;
    }
    iVar7 = FUN_0040caf8(pppppplVar14);
    if (iVar7 < 1) {
      iVar7 = 0;
    }
    else {
      iVar7 = 0;
      iVar10 = 0;
      do {
        local_80 = FUN_0040cb0c(pppppplVar14,iVar10);
        uVar12 = (**(code **)(param_3 + 8))();
        uVar9 = FUN_0039b480(&local_80,0,uVar12,0xffffffff,uVar2);
        if (uVar9 == 0xffffffff) {
          return -1;
        }
        if ((int)(uVar9 ^ 0x7fffffff) < iVar7) {
          return -1;
        }
        if ((uVar9 == 0) && ((*param_3 & 1) == 0)) {
          FUN_00379868();
          uVar12 = 0x136;
          goto LAB_0039bbf8;
        }
        iVar7 = uVar9 + iVar7;
        iVar10 = iVar10 + 1;
        iVar8 = FUN_0040caf8(pppppplVar14);
      } while (iVar10 < iVar8);
    }
    iVar8 = FUN_0038eadc(uVar11,iVar7,uVar6);
    if (iVar8 == -1) {
      return -1;
    }
    if ((uVar5 >> 4 & 1) == 0) {
      iVar10 = iVar8;
      if (param_2 == (long *)0x0) {
        return iVar8;
      }
    }
    else {
      iVar10 = FUN_0038eadc(uVar11,iVar8,param_4);
      if (param_2 == (long *)0x0) {
        return iVar10;
      }
      if (iVar10 == -1) {
        return -1;
      }
      FUN_0038e9b8(param_2,uVar11,iVar8,param_4,uVar15);
    }
    FUN_0038e9b8(param_2,uVar11,iVar7,uVar6,uVar4);
    uVar12 = (**(code **)(param_3 + 8))();
    local_70 = (void *)0x0;
    if (((uVar5 >> 1 & 1) == 0) || (iVar8 = FUN_0040caf8(pppppplVar14), iVar8 < 2)) {
      iVar7 = FUN_0040caf8(pppppplVar14);
      if (0 < iVar7) {
        iVar7 = 0;
        do {
          local_68 = FUN_0040cb0c(pppppplVar14,iVar7);
          FUN_0039b480(&local_68,param_2,uVar12,0xffffffff,uVar2);
          iVar7 = iVar7 + 1;
          iVar8 = FUN_0040caf8(pppppplVar14);
        } while (iVar7 < iVar8);
      }
    }
    else {
      iVar8 = FUN_0040caf8(pppppplVar14);
      __base = (long *)FUN_003c83a4((long)iVar8 * 0x18,"crypto/asn1/tasn_enc.c",0x19f);
      if (__base != (long *)0x0) {
        pvVar13 = (void *)FUN_003c83a4((long)iVar7,"crypto/asn1/tasn_enc.c",0x1a2);
        if (pvVar13 != (void *)0x0) {
          local_70 = pvVar13;
          iVar7 = FUN_0040caf8(pppppplVar14);
          if (0 < iVar7) {
            iVar7 = 0;
            plVar16 = __base;
            do {
              local_68 = FUN_0040cb0c(pppppplVar14,iVar7);
              *plVar16 = (long)local_70;
              uVar11 = FUN_0039b480(&local_68,&local_70,uVar12,0xffffffff,uVar2);
              *(undefined4 *)(plVar16 + 1) = uVar11;
              iVar7 = iVar7 + 1;
              plVar16[2] = local_68;
              plVar16 = plVar16 + 3;
              iVar8 = FUN_0040caf8(pppppplVar14);
            } while (iVar7 < iVar8);
          }
          iVar7 = FUN_0040caf8(pppppplVar14);
          qsort(__base,(long)iVar7,0x18,FUN_0039bf50);
          local_70 = (void *)*param_2;
          iVar7 = FUN_0040caf8(pppppplVar14);
          if (0 < iVar7) {
            iVar7 = 0;
            plVar16 = __base;
            do {
              memcpy(local_70,(void *)*plVar16,(long)(int)plVar16[1]);
              plVar1 = plVar16 + 1;
              iVar7 = iVar7 + 1;
              plVar16 = plVar16 + 3;
              local_70 = (void *)((long)local_70 + (long)(int)*plVar1);
              iVar8 = FUN_0040caf8(pppppplVar14);
            } while (iVar7 < iVar8);
          }
          *param_2 = (long)local_70;
          if (((uVar5 >> 2 & 1) != 0) && (iVar7 = FUN_0040caf8(pppppplVar14), 0 < iVar7)) {
            iVar7 = 0;
            plVar16 = __base + 2;
            do {
              FUN_0040cb3c(pppppplVar14,iVar7,*plVar16);
              iVar7 = iVar7 + 1;
              iVar8 = FUN_0040caf8(pppppplVar14);
              plVar16 = plVar16 + 3;
            } while (iVar7 < iVar8);
          }
        }
        FUN_003c86b4(__base,"crypto/asn1/tasn_enc.c",0x1c9);
        FUN_003c86b4(pvVar13,"crypto/asn1/tasn_enc.c",0x1ca);
      }
    }
    if (uVar3 == 0) {
      return iVar10;
    }
    FUN_0038eac4(param_2);
    uVar3 = uVar5 >> 4 & 1;
joined_r0x0039bdf0:
    if (uVar3 != 0) {
      FUN_0038eac4(param_2);
      return iVar10;
    }
    return iVar10;
  }
  uVar12 = (**(code **)(param_3 + 8))();
  if ((uVar5 >> 4 & 1) == 0) {
    iVar7 = FUN_0039b480(param_1,param_2,uVar12,param_4,uVar15 | uVar2);
    if (iVar7 != 0) {
      return iVar7;
    }
    if ((*param_3 & 1) != 0) {
      return 0;
    }
    FUN_00379868();
    uVar12 = 0x174;
  }
  else {
    iVar7 = FUN_0039b480(param_1,0,uVar12,0xffffffff,uVar2);
    if (iVar7 != 0) {
      iVar10 = FUN_0038eadc(uVar11,iVar7,param_4);
      if (param_2 == (long *)0x0) {
        return iVar10;
      }
      if (iVar10 == -1) {
        return -1;
      }
      FUN_0038e9b8(param_2,uVar11,iVar7,param_4,uVar15);
      uVar12 = (**(code **)(param_3 + 8))();
      FUN_0039b480(param_1,param_2,uVar12,0xffffffff,uVar2);
      goto joined_r0x0039bdf0;
    }
    if ((*param_3 & 1) != 0) {
      return 0;
    }
    FUN_00379868();
    uVar12 = 0x15f;
  }
LAB_0039bbf8:
  FUN_0037995c("crypto/asn1/tasn_enc.c",uVar12,"asn1_template_ex_i2d");
  FUN_00379a5c(0xd,0xde,0);
  return -1;
}


// ===== 0039be00  FUN_0039be00 =====

int FUN_0039be00(undefined8 param_1,long *param_2,long param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int local_44;
  
  local_44 = (int)*(undefined8 *)(param_3 + 8);
  iVar4 = FUN_0039bf90(param_1,0,&local_44,param_3);
  iVar2 = local_44;
  if (iVar4 == -1) {
    iVar5 = 0;
  }
  else {
    bVar3 = iVar4 == -2;
    iVar5 = 0;
    if (!bVar3) {
      iVar5 = iVar4;
    }
    iVar1 = local_44;
    if (param_4 != -1) {
      iVar1 = param_4;
    }
    if (param_2 != (long *)0x0) {
      if ((0x14 < local_44 + 3U) || ((1 << (ulong)(local_44 + 3U & 0x1f) & 0x180001U) == 0)) {
        FUN_0038e9b8(param_2,(ulong)bVar3 << 1,iVar5,iVar1,param_5);
      }
      FUN_0039bf90(param_1,*param_2,&local_44,param_3);
      if (iVar4 == -2) {
        FUN_0038eac4(param_2);
      }
      else {
        *param_2 = *param_2 + (long)iVar4;
      }
    }
    if ((0x14 < iVar2 + 3U) || ((1 << (ulong)(iVar2 + 3U & 0x1f) & 0x180001U) == 0)) {
      iVar5 = FUN_0038eadc((ulong)bVar3 << 1,iVar5,iVar1);
    }
  }
  return iVar5;
}


// ===== 0039bf50  FUN_0039bf50 =====

int FUN_0039bf50(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 1);
  iVar3 = *(int *)(param_2 + 1);
  iVar1 = iVar2;
  if (iVar3 <= iVar2) {
    iVar1 = iVar3;
  }
  iVar4 = memcmp((void *)*param_1,(void *)*param_2,(long)iVar1);
  iVar1 = iVar2 - iVar3;
  if (iVar4 != 0) {
    iVar1 = iVar4;
  }
  return iVar1;
}


// ===== 0039bf90  FUN_0039bf90 =====

ulong FUN_0039bf90(long *param_1,void *param_2,int *param_3,char *param_4)

{
  void **ppvVar1;
  ulong uVar2;
  int *piVar3;
  code *UNRECOVERED_JUMPTABLE;
  int iVar4;
  undefined1 *__src;
  uint *puVar5;
  uint uVar6;
  undefined1 local_24 [4];
  void *local_8;
  
  local_8 = param_2;
  if ((*(long *)(param_4 + 0x20) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_4 + 0x20) + 0x30),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0039bfc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)();
    return uVar2;
  }
  if (*param_4 == '\0') {
    if (*(long *)(param_4 + 8) != 1) {
      if (*param_1 == 0) {
        return 0xffffffff;
      }
      if (*(long *)(param_4 + 8) == -4) goto LAB_0039c03c;
    }
LAB_0039c074:
    iVar4 = *param_3;
    if (4 < iVar4) goto LAB_0039bfec;
LAB_0039c080:
    if (iVar4 == 1) {
      iVar4 = (int)*param_1;
      if (iVar4 == -1) {
        return 0xffffffff;
      }
      if (*(long *)(param_4 + 8) != -4) {
        if (iVar4 == 0) {
          if (*(long *)(param_4 + 0x28) == 0) {
            return 0xffffffff;
          }
        }
        else if (0 < *(long *)(param_4 + 0x28)) {
          return 0xffffffff;
        }
      }
      local_24[0] = (undefined1)iVar4;
      uVar6 = 1;
      __src = local_24;
      goto LAB_0039c13c;
    }
    if (iVar4 == 2) {
LAB_0039c0bc:
      ppvVar1 = (void **)0x0;
      if (param_2 != (void *)0x0) {
        ppvVar1 = &local_8;
      }
      uVar2 = FUN_0038d164(*param_1,ppvVar1);
      return uVar2;
    }
    if (iVar4 == 3) {
      ppvVar1 = (void **)0x0;
      if (param_2 != (void *)0x0) {
        ppvVar1 = &local_8;
      }
      uVar2 = FUN_0039c1cc(*param_1,ppvVar1);
      return uVar2;
    }
  }
  else {
    if (*param_1 == 0) {
      return 0xffffffff;
    }
    if (*param_4 == '\x05') {
      iVar4 = *(int *)(*param_1 + 4);
      *param_3 = iVar4;
    }
    else {
      if (*(long *)(param_4 + 8) != -4) goto LAB_0039c074;
LAB_0039c03c:
      piVar3 = (int *)*param_1;
      param_1 = (long *)(piVar3 + 2);
      iVar4 = *piVar3;
      *param_3 = iVar4;
    }
    if (iVar4 < 5) goto LAB_0039c080;
LAB_0039bfec:
    if (iVar4 == 5) {
      return 0;
    }
    if (iVar4 == 10) goto LAB_0039c0bc;
    if (iVar4 == 6) {
      __src = *(undefined1 **)(*param_1 + 0x18);
      if ((__src == (undefined1 *)0x0) || (uVar6 = *(uint *)(*param_1 + 0x14), uVar6 == 0)) {
        return 0xffffffff;
      }
      goto LAB_0039c13c;
    }
  }
  puVar5 = (uint *)*param_1;
  if ((*(long *)(param_4 + 0x28) == 0x800) && (((byte)puVar5[4] >> 4 & 1) != 0)) {
    if (param_2 == (void *)0x0) {
      return 0xfffffffe;
    }
    *(void **)(puVar5 + 2) = param_2;
    *puVar5 = 0;
    return 0xfffffffe;
  }
  __src = *(undefined1 **)(puVar5 + 2);
  uVar6 = *puVar5;
LAB_0039c13c:
  if ((param_2 != (void *)0x0) && (uVar6 != 0)) {
    memcpy(param_2,__src,(long)(int)uVar6);
  }
  return (ulong)uVar6;
}


// ===== 0039c1c8  thunk_FUN_0038ebe0 =====

undefined8 thunk_FUN_0038ebe0(int *param_1,char *param_2,uint param_3)

{
  void *__dest;
  ulong __n;
  void *pvVar1;
  
  if ((int)param_3 < 0) {
    if (param_2 == (char *)0x0) {
      return 0;
    }
    __n = strlen(param_2);
  }
  else {
    __n = (ulong)param_3;
  }
  if (0x7ffffffe < __n) {
    FUN_00379868();
    FUN_0037995c("crypto/asn1/asn1_lib.c",0x131,"ASN1_STRING_set");
    FUN_00379a5c(0xd,0xdf,0);
    return 0;
  }
  __dest = *(void **)(param_1 + 2);
  pvVar1 = __dest;
  if (__n < (ulong)(long)*param_1) {
    if (__dest != (void *)0x0) goto LAB_0038eca8;
    pvVar1 = (void *)0x0;
  }
  __dest = (void *)FUN_003c8558(pvVar1,__n + 1,"crypto/asn1/asn1_lib.c",0x13a);
  *(void **)(param_1 + 2) = __dest;
  if (__dest == (void *)0x0) {
    *(void **)(param_1 + 2) = pvVar1;
    return 0;
  }
LAB_0038eca8:
  *param_1 = (int)__n;
  if (param_2 != (char *)0x0) {
    memcpy(__dest,param_2,__n);
    *(undefined1 *)(*(long *)(param_1 + 2) + __n) = 0;
  }
  return 1;
}


// ===== 0039c1cc  FUN_0039c1cc =====

int FUN_0039c1cc(uint *param_1,long *param_2)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *__dest;
  
  if (param_1 == (uint *)0x0) {
    return 0;
  }
  uVar4 = *param_1;
  if (0 < (int)uVar4) {
    if (((uint)*(undefined8 *)(param_1 + 4) >> 3 & 1) != 0) {
      uVar3 = (uint)*(undefined8 *)(param_1 + 4) & 7;
      goto LAB_0039c25c;
    }
    do {
      if (*(char *)(*(long *)(param_1 + 2) + -1 + (ulong)uVar4) != '\0') goto LAB_0039c214;
      uVar3 = uVar4 - 1;
      bVar1 = 0 < (int)uVar4;
      uVar4 = uVar3;
    } while (uVar3 != 0 && bVar1);
    uVar4 = 0;
LAB_0039c214:
    bVar2 = *(byte *)(*(long *)(param_1 + 2) + (ulong)uVar4 + -1);
    if ((bVar2 & 1) == 0) {
      if ((bVar2 >> 1 & 1) == 0) {
        if ((bVar2 >> 2 & 1) == 0) {
          if ((bVar2 >> 3 & 1) == 0) {
            if ((bVar2 >> 4 & 1) == 0) {
              if ((bVar2 >> 5 & 1) == 0) {
                if ((bVar2 >> 6 & 1) == 0) {
                  uVar3 = 0;
                  if (bVar2 != 0) {
                    uVar3 = 7;
                  }
                }
                else {
                  uVar3 = 6;
                }
              }
              else {
                uVar3 = 5;
              }
            }
            else {
              uVar3 = 4;
            }
          }
          else {
            uVar3 = 3;
          }
        }
        else {
          uVar3 = 2;
        }
      }
      else {
        uVar3 = 1;
      }
      goto LAB_0039c25c;
    }
  }
  uVar3 = 0;
LAB_0039c25c:
  if (param_2 == (long *)0x0) {
    return uVar4 + 1;
  }
  __dest = (undefined1 *)*param_2 + 1;
  *(undefined1 *)*param_2 = (char)uVar3;
  if (0 < (int)uVar4) {
    memcpy(__dest,*(void **)(param_1 + 2),(ulong)uVar4);
    __dest = __dest + uVar4;
    __dest[-1] = __dest[-1] & (byte)(0xff << (ulong)uVar3);
  }
  *param_2 = (long)__dest;
  return uVar4 + 1;
}


// ===== 0039c310  FUN_0039c310 =====

long FUN_0039c310(long *param_1,long *param_2,ulong param_3)

{
  ulong __n;
  long lVar1;
  byte bVar2;
  byte *__src;
  void *__dest;
  byte *pbVar3;
  
  if ((long)param_3 < 1) {
    lVar1 = 0;
    bVar2 = 0x98;
  }
  else if (param_3 >> 0x1f == 0) {
    if (((param_1 == (long *)0x0) || (lVar1 = *param_1, lVar1 == 0)) &&
       (lVar1 = FUN_0038a3e8(), lVar1 == 0)) {
      return 0;
    }
    pbVar3 = (byte *)*param_2;
    __src = pbVar3 + 1;
    bVar2 = *pbVar3;
    if (bVar2 < 8) {
      FUN_0038eb60(lVar1,bVar2);
      __n = param_3 - 1;
      if (__n == 0) {
        __dest = (void *)0x0;
LAB_0039c46c:
        FUN_0038ee3c(lVar1,__dest,__n & 0xffffffff);
        *(undefined4 *)(lVar1 + 4) = 3;
        if (param_1 != (long *)0x0) {
          *param_1 = lVar1;
        }
        *param_2 = (long)__src;
        return lVar1;
      }
      __dest = (void *)FUN_003c83a4(param_3,__n,"crypto/asn1/a_bitstr.c",0x74);
      if (__dest != (void *)0x0) {
        memcpy(__dest,__src,__n);
        __src = pbVar3 + param_3;
        *(byte *)((long)__dest + (param_3 - 2)) =
             *(byte *)((long)__dest + (param_3 - 2)) & (byte)(0xff << (ulong)(bVar2 & 0x1f));
        goto LAB_0039c46c;
      }
      if (bVar2 == 0) goto LAB_0039c3c4;
    }
    else {
      bVar2 = 0xdc;
    }
  }
  else {
    lVar1 = 0;
    bVar2 = 0x97;
  }
  FUN_00379868();
  FUN_0037995c("crypto/asn1/a_bitstr.c",0x86,"ossl_c2i_ASN1_BIT_STRING");
  FUN_00379a5c(0xd,bVar2,0);
LAB_0039c3c4:
  if ((param_1 == (long *)0x0) || (*param_1 != lVar1)) {
    thunk_FUN_0038eddc(lVar1);
  }
  return 0;
}


// ===== 0039c49c  FUN_0039c49c =====

undefined8 FUN_0039c49c(uint *param_1,uint param_2,int param_3)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  
  if ((int)param_2 < 0) {
    return 0;
  }
  bVar3 = (byte)(1 << (ulong)((param_2 ^ 0xffffffff) & 7));
  bVar2 = 0;
  if (param_3 != 0) {
    bVar2 = bVar3;
  }
  if (param_1 == (uint *)0x0) {
    return 0;
  }
  param_2 = param_2 >> 3;
  *(ulong *)(param_1 + 4) = *(ulong *)(param_1 + 4) & 0xfffffffffffffff0;
  if (((int)*param_1 <= (int)param_2) || (lVar6 = *(long *)(param_1 + 2), lVar6 == 0)) {
    if (param_3 == 0) {
      return 1;
    }
    uVar5 = param_2 + 1;
    lVar6 = FUN_003c86d4(*(undefined8 *)(param_1 + 2),(long)(int)*param_1,uVar5,
                         "crypto/asn1/a_bitstr.c",0xa5);
    if (lVar6 == 0) {
      return 0;
    }
    uVar4 = uVar5 - *param_1;
    if (0 < (int)uVar4) {
      memset((void *)(lVar6 + (int)*param_1),0,(ulong)uVar4);
    }
    *(long *)(param_1 + 2) = lVar6;
    *param_1 = uVar5;
  }
  *(byte *)(lVar6 + (ulong)param_2) = *(byte *)(lVar6 + (ulong)param_2) & ~bVar3 | bVar2;
  if (0 < (int)*param_1) {
    uVar5 = *param_1;
    do {
      if (*(char *)(*(long *)(param_1 + 2) + -1 + (ulong)uVar5) != '\0') {
        return 1;
      }
      uVar4 = uVar5 - 1;
      *param_1 = uVar4;
      bVar1 = 0 < (int)uVar5;
      uVar5 = uVar4;
    } while (uVar4 != 0 && bVar1);
  }
  return 1;
}


// ===== 0039c5ac  FUN_0039c5ac =====

byte FUN_0039c5ac(int *param_1,uint param_2)

{
  if (-1 < (int)param_2) {
    if (param_1 == (int *)0x0) {
      return 0;
    }
    if (((int)(param_2 >> 3) < *param_1) && (*(long *)(param_1 + 2) != 0)) {
      return *(byte *)(*(long *)(param_1 + 2) + (ulong)(param_2 >> 3)) >>
             (ulong)((param_2 ^ 0xffffffff) & 7) & 1;
    }
  }
  return 0;
}


// ===== 0039c5f0  FUN_0039c5f0 =====

bool FUN_0039c5f0(uint *param_1,long param_2,int param_3)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  
  if (((param_1 != (uint *)0x0) && (lVar2 = *(long *)(param_1 + 2), lVar2 != 0)) &&
     (0 < (int)*param_1)) {
    lVar3 = 0;
    do {
      if (lVar3 < param_3) {
        bVar1 = *(byte *)(lVar2 + lVar3) & (*(byte *)(param_2 + lVar3) ^ 0xff);
      }
      else {
        bVar1 = *(byte *)(lVar2 + lVar3);
      }
    } while ((lVar3 + 1U < (ulong)*param_1) && (lVar3 = lVar3 + 1, bVar1 == 0));
    return bVar1 == 0;
  }
  return true;
}


// ===== 0039c668  FUN_0039c668 =====

long FUN_0039c668(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_0038a358();
  if (lVar2 != 0) {
    iVar1 = thunk_FUN_0038ebe0(lVar2,param_2,param_3);
    if (iVar1 == 0) {
      thunk_FUN_0038eddc(lVar2);
      return 0;
    }
    FUN_0039ade0(param_1,4,lVar2);
    lVar2 = 1;
  }
  return lVar2;
}


// ===== 0039c6e0  FUN_0039c6e0 =====

ulong FUN_0039c6e0(int *param_1,void *param_2,uint param_3)

{
  uint uVar1;
  void *__src;
  ulong uVar2;
  
  if ((*param_1 == 4) && (*(long *)(param_1 + 2) != 0)) {
    __src = (void *)FUN_0038f014(*(long *)(param_1 + 2));
    uVar2 = FUN_0038f004(*(undefined8 *)(param_1 + 2));
    uVar1 = (uint)uVar2;
    if ((int)param_3 <= (int)(uint)uVar2) {
      uVar1 = param_3;
    }
    if ((param_2 != (void *)0x0) && (0 < (int)uVar1)) {
      uVar2 = uVar2 & 0xffffffff;
      memcpy(param_2,__src,(ulong)uVar1);
    }
    return uVar2;
  }
  FUN_00379868();
  FUN_0037995c("crypto/asn1/evp_asn1.c",0x28,"ASN1_TYPE_get_octetstring");
  FUN_00379a5c(0xd,0x6d,0);
  return 0xffffffff;
}


// ===== 0039c7a4  FUN_0039c7a4 =====

bool FUN_0039c7a4(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28 [2];
  undefined1 *local_20;
  undefined8 local_18;
  
  local_20 = (undefined1 *)&local_40;
  uStack_30 = 0;
  uStack_3c = 4;
  local_40 = param_4;
  local_38 = param_3;
  local_28[0] = param_2;
  local_18 = param_1;
  lVar1 = FUN_0039b028(&DAT_007656d0,local_28,&local_18);
  return lVar1 != 0;
}


// ===== 0039c7f4  FUN_0039c7f4 =====

int FUN_0039c7f4(int *param_1,long *param_2,void *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  void *__src;
  undefined8 uVar4;
  
  if ((*param_1 == 0x10) && (*(long *)(param_1 + 2) != 0)) {
    piVar3 = (int *)FUN_0039b0f4(&DAT_007656d0,param_1);
    if (piVar3 != (int *)0x0) {
      uVar4 = *(undefined8 *)(piVar3 + 2);
      iVar1 = *piVar3;
      iVar2 = FUN_0038f004(uVar4);
      if (param_2 != (long *)0x0) {
        *param_2 = (long)iVar1;
      }
      if (param_3 != (void *)0x0) {
        iVar1 = iVar2;
        if (param_4 <= iVar2) {
          iVar1 = param_4;
        }
        __src = (void *)FUN_0038f014(uVar4);
        memcpy(param_3,__src,(long)iVar1);
      }
      if (iVar2 != -1) goto LAB_0039c8c8;
    }
  }
  else {
    piVar3 = (int *)0x0;
  }
  FUN_00379868();
  FUN_0037995c("crypto/asn1/evp_asn1.c",0x80,"ASN1_TYPE_get_int_octetstring");
  FUN_00379a5c(0xd,0x6d,0);
  iVar2 = -1;
LAB_0039c8c8:
  FUN_0038c75c(piVar3,&DAT_007656d0);
  return iVar2;
}


// ===== 0039c8f4  FUN_0039c8f4 =====

bool FUN_0039c8f4(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 *puStack_28;
  undefined4 local_20;
  undefined8 local_18;
  
  puStack_28 = (undefined1 *)&local_40;
  local_30 = 0;
  uStack_3c = 4;
  local_40 = param_4;
  local_38 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  lVar1 = FUN_0039b028(&DAT_00765758,&puStack_28,&local_18);
  return lVar1 != 0;
}


// ===== 0039c944  FUN_0039c944 =====

int FUN_0039c944(int *param_1,long *param_2,void *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  void *__src;
  undefined8 uVar4;
  
  if ((*param_1 == 0x10) && (*(long *)(param_1 + 2) != 0)) {
    puVar3 = (undefined8 *)FUN_0039b0f4(&DAT_00765758,param_1);
    if (puVar3 != (undefined8 *)0x0) {
      uVar4 = *puVar3;
      iVar1 = *(int *)(puVar3 + 1);
      iVar2 = FUN_0038f004(uVar4);
      if (param_2 != (long *)0x0) {
        *param_2 = (long)iVar1;
      }
      if (param_3 != (void *)0x0) {
        iVar1 = iVar2;
        if (param_4 <= iVar2) {
          iVar1 = param_4;
        }
        __src = (void *)FUN_0038f014(uVar4);
        memcpy(param_3,__src,(long)iVar1);
      }
      if (iVar2 != -1) goto LAB_0039ca18;
    }
  }
  else {
    puVar3 = (undefined8 *)0x0;
  }
  FUN_00379868();
  FUN_0037995c("crypto/asn1/evp_asn1.c",0xb7,"ossl_asn1_type_get_octetstring_int");
  FUN_00379a5c(0xd,0x6d,0);
  iVar2 = -1;
LAB_0039ca18:
  FUN_0038c75c(puVar3,&DAT_00765758);
  return iVar2;
}


// ===== 0039ca44  thunk_FUN_0038ed00 =====

undefined4 * thunk_FUN_0038ed00(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  
  puVar3 = param_1;
  if ((param_1 != (undefined4 *)0x0) &&
     (puVar3 = (undefined4 *)FUN_003c8474(0x18,"crypto/asn1/asn1_lib.c",0x163),
     puVar3 != (undefined4 *)0x0)) {
    uVar1 = *param_1;
    uVar4 = *(undefined8 *)(param_1 + 2);
    puVar3[1] = param_1[1];
    iVar2 = FUN_0038ebe0(puVar3,uVar4,uVar1);
    if (iVar2 == 0) {
      uVar5 = (uint)*(ulong *)(puVar3 + 4);
      if ((uVar5 >> 4 & 1) == 0) {
        FUN_003c86b4(*(undefined8 *)(puVar3 + 2),"crypto/asn1/asn1_lib.c",0x16f);
      }
      if ((uVar5 >> 7 & 1) == 0) {
        FUN_003c86b4(puVar3,"crypto/asn1/asn1_lib.c",0x171);
      }
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *(ulong *)(puVar3 + 4) =
           *(ulong *)(param_1 + 4) & 0xffffffffffffff00 |
           *(ulong *)(param_1 + 4) & 0x7f | (*(ulong *)(puVar3 + 4) >> 7 & 1) << 7;
    }
  }
  return puVar3;
}


// ===== 0039ca48  thunk_FUN_0038ef94 =====

int thunk_FUN_0038ef94(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 - *param_2 != 0) {
    return iVar1 - *param_2;
  }
  if ((iVar1 != 0) &&
     (iVar1 = memcmp(*(void **)(param_1 + 2),*(void **)(param_2 + 2),(long)iVar1), iVar1 != 0)) {
    return iVar1;
  }
  return param_1[1] - param_2[1];
}


// ===== 0039ca4c  thunk_FUN_0038ebe0 =====

undefined8 thunk_FUN_0038ebe0(int *param_1,char *param_2,uint param_3)

{
  void *__dest;
  ulong __n;
  void *pvVar1;
  
  if ((int)param_3 < 0) {
    if (param_2 == (char *)0x0) {
      return 0;
    }
    __n = strlen(param_2);
  }
  else {
    __n = (ulong)param_3;
  }
  if (0x7ffffffe < __n) {
    FUN_00379868();
    FUN_0037995c("crypto/asn1/asn1_lib.c",0x131,"ASN1_STRING_set");
    FUN_00379a5c(0xd,0xdf,0);
    return 0;
  }
  __dest = *(void **)(param_1 + 2);
  pvVar1 = __dest;
  if (__n < (ulong)(long)*param_1) {
    if (__dest != (void *)0x0) goto LAB_0038eca8;
    pvVar1 = (void *)0x0;
  }
  __dest = (void *)FUN_003c8558(pvVar1,__n + 1,"crypto/asn1/asn1_lib.c",0x13a);
  *(void **)(param_1 + 2) = __dest;
  if (__dest == (void *)0x0) {
    *(void **)(param_1 + 2) = pvVar1;
    return 0;
  }
LAB_0038eca8:
  *param_1 = (int)__n;
  if (param_2 != (char *)0x0) {
    memcpy(__dest,param_2,__n);
    *(undefined1 *)(*(long *)(param_1 + 2) + __n) = 0;
  }
  return 1;
}


// ===== 0039ca50  FUN_0039ca50 =====

undefined * FUN_0039ca50(void)

{
  return &DAT_007657e0;
}


// ===== 0039ca5c  FUN_0039ca5c =====

undefined * FUN_0039ca5c(void)

{
  return &DAT_00765818;
}


// ===== 0039ca68  FUN_0039ca68 =====

undefined * FUN_0039ca68(void)

{
  return &DAT_00765850;
}


// ===== 0039ca74  FUN_0039ca74 =====

undefined * FUN_0039ca74(void)

{
  return &DAT_00765888;
}


// ===== 0039ca80  FUN_0039ca80 =====

undefined * FUN_0039ca80(void)

{
  return &DAT_007658c0;
}


// ===== 0039ca8c  FUN_0039ca8c =====

undefined * FUN_0039ca8c(void)

{
  return &DAT_007658f8;
}


// ===== 0039ca98  FUN_0039ca98 =====

undefined * FUN_0039ca98(void)

{
  return &DAT_00765930;
}


// ===== 0039caa4  FUN_0039caa4 =====

undefined * FUN_0039caa4(void)

{
  return &DAT_00765968;
}


// ===== 0039cab0  FUN_0039cab0 =====

bool FUN_0039cab0(long *param_1)

{
  long lVar1;
  
  lVar1 = FUN_003c8474(4,"crypto/asn1/x_int64.c",0x7c);
  *param_1 = lVar1;
  return lVar1 != 0;
}


// ===== 0039caf0  FUN_0039caf0 =====

void FUN_0039caf0(undefined8 *param_1)

{
  FUN_003c86b4(*param_1,"crypto/asn1/x_int64.c",0x83);
  *param_1 = 0;
  return;
}


// ===== 0039cb24  FUN_0039cb24 =====

void FUN_0039cb24(undefined8 *param_1)

{
  *(undefined4 *)*param_1 = 0;
  return;
}


// ===== 0039cb30  FUN_0039cb30 =====

undefined8
FUN_0039cb30(long *param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5,
            long param_6)

{
  undefined8 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int local_44;
  ulong local_40;
  undefined8 local_38;
  
  puVar3 = (undefined4 *)*param_1;
  local_40 = 0;
  local_44 = 0;
  local_38 = param_2;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)FUN_003c8474(8,"crypto/asn1/x_int64.c",0x1f);
    *param_1 = (long)puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      return 0;
    }
  }
  if (param_3 == 0) {
    local_40 = 0;
    goto LAB_0039cbdc;
  }
  uVar1 = FUN_0038e2ac(&local_40,&local_44,&local_38,(long)param_3);
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  uVar2 = (uint)*(ulong *)(param_6 + 0x28);
  if (((uVar2 >> 1 & 1) == 0) && (local_44 != 0)) {
    FUN_00379868();
    FUN_0037995c("crypto/asn1/x_int64.c",0xc4,"uint32_c2i");
    uVar1 = 0xe2;
LAB_0039cc80:
    FUN_00379a5c(0xd,uVar1,0);
    return 0;
  }
  if (local_44 == 0) {
    if ((((uint)((local_40 & 0xffffffff80000000) != 0) & uVar2 >> 1) != 0) ||
       ((*(ulong *)(param_6 + 0x28) & 2) == 0 && local_40 >> 0x20 != 0)) {
      FUN_00379868();
      FUN_0037995c("crypto/asn1/x_int64.c",0xd0,"uint32_c2i");
      uVar1 = 0xdf;
      goto LAB_0039cc80;
    }
  }
  else {
    if (0x80000000 < local_40) {
      FUN_00379868();
      FUN_0037995c("crypto/asn1/x_int64.c",0xc9,"uint32_c2i");
      uVar1 = 0xe0;
      goto LAB_0039cc80;
    }
    local_40 = -local_40;
  }
LAB_0039cbdc:
  *puVar3 = (int)local_40;
  return 1;
}


// ===== 0039cca8  FUN_0039cca8 =====

undefined8 FUN_0039cca8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar3 = *(int *)*param_1;
  if (((*(ulong *)(param_4 + 0x28) & 1) != 0) && (iVar3 == 0)) {
    return 0xffffffff;
  }
  uVar1 = (uint)(iVar3 < 0) & (uint)*(ulong *)(param_4 + 0x28) >> 1;
  iVar2 = -iVar3;
  if (uVar1 == 0) {
    iVar2 = iVar3;
  }
  uVar4 = FUN_0038e3dc(param_2,iVar2,uVar1);
  return uVar4;
}


// ===== 0039cce0  FUN_0039cce0 =====

void FUN_0039cce0(undefined8 param_1,undefined8 *param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = &UNK_001e4bdf;
  if ((*(ulong *)(param_3 + 0x28) & 2) != 0) {
    puVar1 = &DAT_001c74eb;
  }
  FUN_0037b9f8(param_1,puVar1,*(undefined4 *)*param_2);
  return;
}


// ===== 0039cd08  FUN_0039cd08 =====

bool FUN_0039cd08(long *param_1)

{
  long lVar1;
  
  lVar1 = FUN_003c8474(8,"crypto/asn1/x_int64.c",0x1f);
  *param_1 = lVar1;
  return lVar1 != 0;
}


// ===== 0039cd48  FUN_0039cd48 =====

void FUN_0039cd48(undefined8 *param_1)

{
  FUN_003c86b4(*param_1,"crypto/asn1/x_int64.c",0x26);
  *param_1 = 0;
  return;
}


// ===== 0039cd7c  FUN_0039cd7c =====

void FUN_0039cd7c(undefined8 *param_1)

{
  *(undefined8 *)*param_1 = 0;
  return;
}


// ===== 0039cd88  FUN_0039cd88 =====

undefined8
FUN_0039cd88(undefined8 *param_1,undefined8 param_2,int param_3,undefined8 param_4,
            undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  int local_44;
  long local_40;
  undefined8 local_38;
  
  plVar4 = (long *)*param_1;
  local_40 = 0;
  local_44 = 0;
  local_38 = param_2;
  if (plVar4 == (long *)0x0) {
    plVar4 = (long *)FUN_003c8474(8,"crypto/asn1/x_int64.c",0x1f);
    *param_1 = plVar4;
    if (plVar4 == (long *)0x0) {
      return 0;
    }
  }
  if (param_3 != 0) {
    uVar1 = FUN_0038e2ac(&local_40,&local_44,&local_38,(long)param_3);
    if ((int)uVar1 != 0) {
      uVar3 = (uint)*(undefined8 *)(param_6 + 0x28);
      if (((uVar3 >> 1 & 1) == 0) && (local_44 != 0)) {
        FUN_00379868();
        FUN_0037995c("crypto/asn1/x_int64.c",0x5f,"uint64_c2i");
        uVar1 = 0xe2;
      }
      else {
        if (((uVar3 >> 1 & 1) == 0) || ((local_44 != 0 || (-1 < local_40)))) {
          lVar2 = -local_40;
          if (local_44 == 0) {
            lVar2 = local_40;
          }
          goto LAB_0039ce94;
        }
        FUN_00379868();
        FUN_0037995c("crypto/asn1/x_int64.c",100,"uint64_c2i");
        uVar1 = 0xdf;
      }
      FUN_00379a5c(0xd,uVar1,0);
      uVar1 = 0;
    }
    return uVar1;
  }
  lVar2 = 0;
LAB_0039ce94:
  *plVar4 = lVar2;
  return 1;
}


// ===== 0039ceb0  FUN_0039ceb0 =====

undefined8 FUN_0039ceb0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)*param_1;
  if (((*(ulong *)(param_4 + 0x28) & 1) != 0) && (lVar4 == 0)) {
    return 0xffffffff;
  }
  uVar1 = (uint)(lVar4 < 0) & (uint)*(ulong *)(param_4 + 0x28) >> 1;
  lVar2 = -lVar4;
  if (uVar1 == 0) {
    lVar2 = lVar4;
  }
  uVar3 = FUN_0038e3dc(param_2,lVar2,uVar1);
  return uVar3;
}


// ===== 0039cee8  FUN_0039cee8 =====

void FUN_0039cee8(undefined8 param_1,undefined8 *param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = &UNK_001c9830;
  if ((*(ulong *)(param_3 + 0x28) & 2) != 0) {
    puVar1 = &DAT_001cdc58;
  }
  FUN_0037b9f8(param_1,puVar1,*(undefined8 *)*param_2);
  return;
}


// ===== 0039cf10  FUN_0039cf10 =====

void FUN_0039cf10(undefined8 *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  long lVar4;
  
  if (param_1[7] != 0) {
    if ((param_1[1] != 0) && (pcVar3 = *(code **)(param_1[1] + 0xa8), pcVar3 != (code *)0x0)) {
      (*pcVar3)();
    }
    param_1[7] = 0;
    FUN_00389e24(param_1,2);
  }
  if (param_1[1] != 0) {
    if ((*(long *)(param_1[1] + 0x40) == 0) || (iVar2 = FUN_00389e18(param_1,2), iVar2 != 0)) {
      lVar4 = param_1[4];
    }
    else {
      (**(code **)(param_1[1] + 0x40))(param_1);
      lVar4 = param_1[4];
    }
    if ((lVar4 != 0) && (0 < *(int *)(param_1[1] + 0x4c))) {
      iVar2 = FUN_00389e18(param_1,4);
      if ((param_2 == 0) && (iVar2 != 0)) goto LAB_0039cfe8;
      FUN_003c893c(param_1[4],(long)*(int *)(param_1[1] + 0x4c),"crypto/evp/digest.c",0x25);
      param_1[4] = 0;
    }
  }
  if (param_2 != 0) {
    param_1[1] = 0;
  }
LAB_0039cfe8:
  if (param_3 != 0) {
    return;
  }
  lVar4 = param_1[8];
  if (((lVar4 != 0) && (*(int *)(lVar4 + 0x18) == 0)) &&
     (iVar2 = *(int *)(lVar4 + 0x78), iVar1 = iVar2 + -1, *(int *)(lVar4 + 0x78) = iVar1,
     iVar1 == 0 || iVar2 < 1)) {
    FUN_00389b64();
    param_1[8] = 0;
    *param_1 = 0;
    return;
  }
  param_1[8] = 0;
  *param_1 = 0;
  return;
}


// ===== 0039d050  FUN_0039d050 =====

void FUN_0039d050(long param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x18) == 0)) {
    iVar1 = *(int *)(param_1 + 0x78);
    iVar2 = iVar1 + -1;
    *(int *)(param_1 + 0x78) = iVar2;
    if (iVar2 == 0 || iVar1 < 1) {
      FUN_00389b64();
      return;
    }
  }
  return;
}


// ===== 0039d074  FUN_0039d074 =====

undefined8 FUN_0039d074(long param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = FUN_00389e18(param_1,0x400);
    if (iVar1 == 0) {
      FUN_003b1f78(*(undefined8 *)(param_1 + 0x28));
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    FUN_0039cf10(param_1,0,0);
    FUN_003c89b8(param_1,0x48);
  }
  return 1;
}


// ===== 0039d0cc  FUN_0039d0cc =====

long FUN_0039d0cc(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = FUN_003c8474(0x48,"crypto/evp/digest.c",0x84);
  if (lVar2 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/evp/digest.c",0x71,"evp_md_ctx_new_ex");
    FUN_00379a5c(0xd,0x80006,0);
    FUN_003b1f78(0);
    return 0;
  }
  lVar3 = FUN_003b1de8(param_3,param_1,param_4);
  if (lVar3 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/evp/digest.c",0x71,"evp_md_ctx_new_ex");
    FUN_00379a5c(0xd,0x80006,0);
    FUN_003b1f78(0);
    iVar1 = FUN_00389e18(lVar2,0x400);
  }
  else {
    if ((param_2 == (undefined4 *)0x0) ||
       (iVar1 = FUN_003b3858(lVar3,*(undefined8 *)(param_2 + 2),*param_2), 0 < iVar1)) {
      FUN_00389dd0(lVar2,lVar3);
      return lVar2;
    }
    FUN_003b1f78(lVar3);
    iVar1 = FUN_00389e18(lVar2,0x400);
  }
  if (iVar1 == 0) {
    FUN_003b1f78(*(undefined8 *)(lVar2 + 0x28));
    *(undefined8 *)(lVar2 + 0x28) = 0;
  }
  FUN_0039cf10(lVar2,0,0);
  FUN_003c89b8(lVar2,0x48);
  FUN_003c86b4(lVar2,"crypto/evp/digest.c",0x8d);
  return 0;
}


// ===== 0039d270  FUN_0039d270 =====

void FUN_0039d270(void)

{
  FUN_003c8474(0x48,"crypto/evp/digest.c",0x84);
  return;
}


// ===== 0039d284  FUN_0039d284 =====

void FUN_0039d284(long param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = FUN_00389e18(param_1,0x400);
    if (iVar1 == 0) {
      FUN_003b1f78(*(undefined8 *)(param_1 + 0x28));
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    FUN_0039cf10(param_1,0,0);
    FUN_003c89b8(param_1,0x48);
    FUN_003c86b4(param_1,"crypto/evp/digest.c",0x8d);
    return;
  }
  return;
}


// ===== 0039d2ec  FUN_0039d2ec =====

undefined8 FUN_0039d2ec(long param_1)

{
  code *pcVar1;
  
  if (*(long *)(param_1 + 0x38) == 0) {
    return 1;
  }
  if (*(long *)(param_1 + 8) != 0) {
    pcVar1 = *(code **)(*(long *)(param_1 + 8) + 0xa8);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(*(long *)(param_1 + 0x38));
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
    return 1;
  }
  FUN_00379868();
  FUN_0037995c("crypto/evp/digest.c",0x94,"evp_md_ctx_free_algctx");
  FUN_00379a5c(6,0x86,0);
  return 0;
}


// ===== 0039d378  FUN_0039d378 =====

void FUN_0039d378(void)

{
  FUN_0039d380();
  return;
}


// ===== 0039d380  FUN_0039d380 =====

undefined8 FUN_0039d380(undefined8 *param_1,int *param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  char *pcVar6;
  code *pcVar7;
  int *piVar8;
  int *piVar9;
  long *plVar10;
  
  piVar9 = (int *)param_1[5];
  if (((piVar9 != (int *)0x0) &&
      (((iVar2 = *piVar9,
        iVar2 - 0x10U < 0x31 && (1L << ((ulong)(iVar2 - 0x10U) & 0x3f) & 0x1000000010001U) != 0 ||
        (iVar2 == 0x100)) || (iVar2 == 0x80)))) && (*(long *)(piVar9 + 0xc) != 0)) {
    if (iVar2 == 0x100) {
      uVar3 = FUN_003a12e8(param_1,0,param_2,param_4,0);
      return uVar3;
    }
    if (iVar2 == 0x80) {
      uVar3 = FUN_003a126c(param_1,0,param_2,param_4,0);
      return uVar3;
    }
    FUN_00379868();
    FUN_0037995c("crypto/evp/digest.c",0xb3,"evp_md_init_internal");
    uVar3 = 0xbd;
    goto LAB_0039d748;
  }
  FUN_00389e38(param_1,0x802);
  if (param_2 == (int *)0x0) {
    param_2 = (int *)param_1[1];
    if (param_2 == (int *)0x0) {
      FUN_00379868();
      FUN_0037995c("crypto/evp/digest.c",0xbf,"evp_md_init_internal");
      uVar3 = 0x8b;
      goto LAB_0039d748;
    }
  }
  else {
    *param_1 = param_2;
  }
  if (((param_4 == 0) && ((*(byte *)((long)param_1 + 0x19) & 1) == 0)) && (param_2[6] != 2)) {
    piVar9 = (int *)param_1[1];
    if (piVar9 != (int *)0x0) {
      if (*(long *)(piVar9 + 0x10) != 0) {
        iVar2 = FUN_00389e18(param_1,2);
        piVar9 = (int *)param_1[1];
        if (iVar2 == 0) {
          (**(code **)(piVar9 + 0x10))(param_1);
          piVar9 = (int *)param_1[1];
        }
      }
      if ((param_1[4] != 0) && (0 < piVar9[0x13])) {
        FUN_00389e18(param_1,4);
        FUN_003c893c(param_1[4],(long)*(int *)(param_1[1] + 0x4c),"crypto/evp/digest.c",0x25);
        piVar9 = (int *)param_1[1];
        param_1[4] = 0;
      }
    }
    if (piVar9 == param_2) {
      if (*(long *)(param_2 + 0x1c) == 0) {
        FUN_00379868();
        pcVar6 = "evp_md_init_internal";
        uVar3 = 0xfc;
        goto LAB_0039d73c;
      }
    }
    else if (param_1[7] != 0) {
      if (piVar9 == (int *)0x0) goto LAB_0039d724;
      if (*(code **)(piVar9 + 0x2a) != (code *)0x0) {
        (**(code **)(piVar9 + 0x2a))();
      }
      param_1[7] = 0;
    }
    if (*(long *)(param_2 + 0x1c) == 0) {
      if (*param_2 == 0) {
        puVar5 = &DAT_001b77b8;
      }
      else {
        puVar5 = (undefined *)FUN_003dce44();
      }
      param_2 = (int *)FUN_00382990(0,1,puVar5,&DAT_001c717f,FUN_0039eb30,FUN_0039efc0,FUN_0039efe4)
      ;
      if (param_2 == (int *)0x0) {
        FUN_00379868();
        pcVar6 = "evp_md_init_internal";
        uVar3 = 0x110;
        goto LAB_0039d73c;
      }
      FUN_0039d050(param_1[8]);
      param_1[8] = param_2;
      plVar10 = (long *)(param_2 + 0x1c);
      if (*plVar10 != 0) goto LAB_0039d778;
    }
    else {
      plVar10 = (long *)(param_2 + 0x1c);
LAB_0039d778:
      if ((int *)param_1[8] != param_2) {
        if (param_2[6] == 0) {
          param_2[0x1e] = param_2[0x1e] + 1;
        }
        FUN_0039d050();
        param_1[8] = param_2;
      }
    }
    lVar4 = param_1[7];
    param_1[1] = param_2;
    if (lVar4 == 0) {
      pcVar7 = *(code **)(param_2 + 0x20);
      FUN_003d3bf8(*plVar10);
      lVar4 = (*pcVar7)();
      param_1[7] = lVar4;
      if (lVar4 == 0) {
        FUN_00379868();
        pcVar6 = "evp_md_init_internal";
        uVar3 = 0x125;
        goto LAB_0039d73c;
      }
      param_2 = (int *)param_1[1];
    }
    if (*(code **)(param_2 + 0x22) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0039d7e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(param_2 + 0x22))(lVar4,param_3);
      return uVar3;
    }
    FUN_00379868();
    pcVar6 = "evp_md_init_internal";
    uVar3 = 299;
  }
  else {
    if (param_1[7] == 0) {
LAB_0039d474:
      piVar8 = (int *)param_1[1];
      piVar9 = (int *)param_1[8];
      if (piVar8 == piVar9) {
        piVar8 = (int *)0x0;
        param_1[1] = 0;
      }
      if (((piVar9 != (int *)0x0) && (piVar9[6] == 0)) &&
         (iVar2 = piVar9[0x1e], iVar1 = iVar2 + -1, piVar9[0x1e] = iVar1, iVar1 == 0 || iVar2 < 1))
      {
        FUN_00389b64();
        piVar8 = (int *)param_1[1];
      }
      param_1[8] = 0;
      if (piVar8 != param_2) {
        if (piVar8 != (int *)0x0) {
          if ((*(long *)(piVar8 + 0x10) != 0) && (iVar2 = FUN_00389e18(param_1,2), iVar2 == 0)) {
            (**(code **)(param_1[1] + 0x40))(param_1);
          }
          if ((param_1[4] != 0) && (0 < *(int *)(param_1[1] + 0x4c))) {
            FUN_00389e18(param_1,4);
            FUN_003c893c(param_1[4],(long)*(int *)(param_1[1] + 0x4c),"crypto/evp/digest.c",0x25);
            param_1[4] = 0;
          }
        }
        param_1[1] = param_2;
        if (((*(byte *)((long)param_1 + 0x19) & 1) == 0) && (iVar2 = param_2[0x13], iVar2 != 0)) {
          param_1[6] = *(undefined8 *)(param_2 + 10);
          lVar4 = FUN_003c8474((long)iVar2,"crypto/evp/digest.c",0x159);
          param_1[4] = lVar4;
          if (lVar4 == 0) {
            return 0;
          }
        }
      }
      piVar9 = (int *)param_1[5];
      if (piVar9 != (int *)0x0) {
        iVar2 = *piVar9;
        if ((((((0x30 < iVar2 - 0x10U) ||
               ((1L << ((ulong)(iVar2 - 0x10U) & 0x3f) & 0x1000000010001U) == 0)) &&
              (iVar2 != 0x100)) && (iVar2 != 0x80)) || (*(long *)(piVar9 + 10) == 0)) &&
           ((iVar2 = FUN_003b2e6c(piVar9,0xffffffff,0x1f0,7,0,param_1), iVar2 < 1 && (iVar2 != -2)))
           ) {
          return 0;
        }
      }
      if ((*(byte *)((long)param_1 + 0x19) & 1) != 0) {
        return 1;
      }
                    /* WARNING: Could not recover jumptable at 0x0039d5c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(param_1[1] + 0x20))(param_1);
      return uVar3;
    }
    if (param_1[1] != 0) {
      pcVar7 = *(code **)(param_1[1] + 0xa8);
      if (pcVar7 != (code *)0x0) {
        (*pcVar7)();
      }
      param_1[7] = 0;
      goto LAB_0039d474;
    }
LAB_0039d724:
    FUN_00379868();
    pcVar6 = "evp_md_ctx_free_algctx";
    uVar3 = 0x94;
  }
LAB_0039d73c:
  FUN_0037995c("crypto/evp/digest.c",uVar3,pcVar6);
  uVar3 = 0x86;
LAB_0039d748:
  FUN_00379a5c(6,uVar3,0);
  return 0;
}


// ===== 0039d8c0  FUN_0039d8c0 =====

void FUN_0039d8c0(long param_1,undefined8 param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = FUN_00389e18(param_1,0x400);
    if (iVar1 == 0) {
      FUN_003b1f78(*(undefined8 *)(param_1 + 0x28));
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    FUN_0039cf10(param_1,0,0);
    FUN_003c89b8(param_1,0x48);
  }
  FUN_0039d380(param_1,param_2,0,0);
  return;
}


// ===== 0039d92c  FUN_0039d92c =====

void FUN_0039d92c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0039d380(param_1,param_2,0,param_3);
  return;
}


// ===== 0039d938  FUN_0039d938 =====

undefined8 FUN_0039d938(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  int *piVar5;
  
  if (param_3 == 0) {
    return 1;
  }
  uVar3 = (uint)*(undefined8 *)(param_1 + 0x18);
  if ((uVar3 >> 0xb & 1) == 0) {
    piVar5 = *(int **)(param_1 + 0x28);
    if (piVar5 != (int *)0x0) {
      iVar1 = *piVar5;
      if (((((iVar1 - 0x10U < 0x31) &&
            ((1L << ((ulong)(iVar1 - 0x10U) & 0x3f) & 0x1000000010001U) != 0)) || (iVar1 == 0x100))
          || (iVar1 == 0x80)) && (*(long *)(piVar5 + 0xc) != 0)) {
        if (iVar1 == 0x100) {
          uVar2 = FUN_003a143c();
          return uVar2;
        }
        if (iVar1 == 0x80) {
          uVar2 = FUN_003a1324();
          return uVar2;
        }
        FUN_00379868();
        uVar2 = 0x19b;
        goto LAB_0039d9d0;
      }
    }
    lVar4 = *(long *)(param_1 + 8);
    if (((lVar4 == 0) || ((uVar3 >> 8 & 1) != 0)) || (*(long *)(lVar4 + 0x70) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0039da20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(param_1 + 0x30))();
      return uVar2;
    }
    if (*(code **)(lVar4 + 0x90) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0039da14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(lVar4 + 0x90))(*(undefined8 *)(param_1 + 0x38));
      return uVar2;
    }
    FUN_00379868();
    uVar2 = 0x1a5;
  }
  else {
    FUN_00379868();
    uVar2 = 0x188;
  }
LAB_0039d9d0:
  FUN_0037995c("crypto/evp/digest.c",uVar2,"EVP_DigestUpdate");
  FUN_00379a5c(6,0xbd,0);
  return 0;
}


// ===== 0039da64  FUN_0039da64 =====

ulong FUN_0039da64(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = FUN_0039dac8();
  if (param_1 != 0) {
    uVar2 = uVar2 & 0xffffffff;
    iVar1 = FUN_00389e18(param_1,0x400);
    if (iVar1 == 0) {
      FUN_003b1f78(*(undefined8 *)(param_1 + 0x28));
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    FUN_0039cf10(param_1,0,0);
    FUN_003c89b8(param_1,0x48);
  }
  return uVar2;
}


// ===== 0039dac8  FUN_0039dac8 =====

ulong FUN_0039dac8(long param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  code *pcVar6;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong local_40;
  ulong local_38;
  
  uVar2 = *(ulong *)(param_1 + 8);
  local_38 = 0;
  if (uVar2 != 0) {
    uVar1 = FUN_00389a38();
    if (-1 < (int)uVar1) {
      lVar4 = *(long *)(param_1 + 8);
      local_40 = (ulong)uVar1;
      if (*(long *)(lVar4 + 0x70) == 0) {
        if (0x40 < uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_003c4750("assertion failed: mdsize <= EVP_MAX_MD_SIZE","crypto/evp/digest.c",0x1ed);
        }
        uVar2 = (**(code **)(lVar4 + 0x30))(param_1,param_2);
        if (param_3 != (uint *)0x0) {
          *param_3 = uVar1;
        }
        lVar4 = *(long *)(param_1 + 8);
        if (*(code **)(lVar4 + 0x40) != (code *)0x0) {
          (**(code **)(lVar4 + 0x40))(param_1);
          FUN_00389e24(param_1,2);
          lVar4 = *(long *)(param_1 + 8);
        }
        FUN_003c89b8(*(undefined8 *)(param_1 + 0x20),(long)*(int *)(lVar4 + 0x4c));
        return uVar2 & 0xffffffff;
      }
      if (*(long *)(lVar4 + 0xe0) != 0) {
        uStack_78 = 0;
        local_80 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_58 = 0;
        local_60 = 0;
        uStack_48 = 0;
        uStack_50 = 0;
        uStack_88 = 0;
        local_90 = 0;
        FUN_003ccbb0(&local_90,&DAT_001f543b,&local_40);
        piVar5 = *(int **)(param_1 + 0x28);
        if (((piVar5 == (int *)0x0) ||
            (((*piVar5 != 0x100 && (*piVar5 != 0x80)) ||
             (lVar4 = *(long *)(piVar5 + 0xc), lVar4 == 0)))) ||
           (pcVar6 = *(code **)(*(long *)(piVar5 + 10) + 0xd0), pcVar6 == (code *)0x0)) {
          if ((*(long *)(param_1 + 8) == 0) ||
             (pcVar6 = *(code **)(*(long *)(param_1 + 8) + 200), pcVar6 == (code *)0x0)) {
            return 0;
          }
          lVar4 = *(long *)(param_1 + 0x38);
        }
        uVar2 = (*pcVar6)(lVar4,&local_90);
        if ((int)uVar2 == 0) {
          return uVar2;
        }
        lVar4 = *(long *)(param_1 + 8);
      }
      if (*(code **)(lVar4 + 0x98) == (code *)0x0) {
        FUN_00379868();
        uVar3 = 0x1d3;
      }
      else if ((*(byte *)(param_1 + 0x19) >> 3 & 1) == 0) {
        uVar2 = (**(code **)(lVar4 + 0x98))
                          (*(undefined8 *)(param_1 + 0x38),param_2,&local_38,local_40);
        *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) | 0x800;
        if (param_3 == (uint *)0x0) {
          return uVar2;
        }
        if (local_38 >> 0x20 == 0) {
          *param_3 = (uint)local_38;
          return uVar2;
        }
        FUN_00379868();
        uVar3 = 0x1e4;
      }
      else {
        FUN_00379868();
        uVar3 = 0x1d8;
      }
      FUN_0037995c("crypto/evp/digest.c",uVar3,"EVP_DigestFinal_ex");
      FUN_00379a5c(6,0xbc,0);
      return 0;
    }
    uVar2 = 0;
  }
  return uVar2;
}


// ===== 0039dd1c  FUN_0039dd1c =====

undefined8 FUN_0039dd1c(long param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x28);
  if (((piVar2 != (int *)0x0) &&
      (((*piVar2 == 0x100 || (*piVar2 == 0x80)) && (*(long *)(piVar2 + 0xc) != 0)))) &&
     (*(code **)(*(long *)(piVar2 + 10) + 0xd0) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0039dd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(long *)(piVar2 + 10) + 0xd0))(*(long *)(piVar2 + 0xc));
    return uVar1;
  }
  if ((*(long *)(param_1 + 8) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 8) + 200),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0039dd68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(param_1 + 0x38));
    return uVar1;
  }
  return 0;
}


// ===== 0039dd74  FUN_0039dd74 =====

ulong FUN_0039dd74(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  code *pcVar6;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulong local_28;
  
  lVar4 = *(long *)(param_1 + 8);
  local_28 = param_3;
  if (lVar4 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/evp/digest.c",0x200,"EVP_DigestFinalXOF");
    uVar3 = 0xda;
    goto LAB_0039df68;
  }
  if (*(long *)(lVar4 + 0x70) == 0) {
    if (((param_3 >> 0x1f == 0) && (((uint)*(undefined8 *)(lVar4 + 0x10) >> 1 & 1) != 0)) &&
       (iVar1 = (**(code **)(lVar4 + 0x50))(param_1,3,param_3,0), iVar1 != 0)) {
      uVar2 = (**(code **)(*(long *)(param_1 + 8) + 0x30))(param_1,param_2);
      lVar4 = *(long *)(param_1 + 8);
      if (*(code **)(lVar4 + 0x40) != (code *)0x0) {
        (**(code **)(lVar4 + 0x40))(param_1);
        FUN_00389e24(param_1,2);
        lVar4 = *(long *)(param_1 + 8);
      }
      FUN_003c89b8(*(undefined8 *)(param_1 + 0x20),(long)*(int *)(lVar4 + 0x4c));
      return uVar2 & 0xffffffff;
    }
    FUN_00379868();
    FUN_0037995c("crypto/evp/digest.c",0x226,"EVP_DigestFinalXOF");
    uVar3 = 0xb2;
    goto LAB_0039df68;
  }
  if (*(long *)(lVar4 + 0x98) == 0) {
    FUN_00379868();
    uVar3 = 0x208;
  }
  else {
    if ((*(byte *)(param_1 + 0x19) >> 3 & 1) == 0) {
      FUN_003ccbb0(auStack_78,"xoflen",&local_28);
      FUN_003cdfcc(&local_a0);
      piVar5 = *(int **)(param_1 + 0x28);
      local_30 = local_80;
      uStack_48 = uStack_98;
      local_50 = local_a0;
      uStack_38 = uStack_88;
      uStack_40 = uStack_90;
      if ((((piVar5 == (int *)0x0) || ((*piVar5 != 0x100 && (*piVar5 != 0x80)))) ||
          (lVar4 = *(long *)(piVar5 + 0xc), lVar4 == 0)) ||
         (pcVar6 = *(code **)(*(long *)(piVar5 + 10) + 0xe0), pcVar6 == (code *)0x0)) {
        if ((*(long *)(param_1 + 8) != 0) &&
           (pcVar6 = *(code **)(*(long *)(param_1 + 8) + 0xc0), pcVar6 != (code *)0x0)) {
          lVar4 = *(long *)(param_1 + 0x38);
          goto LAB_0039de20;
        }
      }
      else {
LAB_0039de20:
        iVar1 = (*pcVar6)(lVar4,auStack_78);
        if (0 < iVar1) {
          uVar2 = (**(code **)(*(long *)(param_1 + 8) + 0x98))
                            (*(undefined8 *)(param_1 + 0x38),param_2,&local_28,local_28);
          goto LAB_0039df88;
        }
      }
      uVar2 = 0;
LAB_0039df88:
      *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) | 0x800;
      return uVar2;
    }
    FUN_00379868();
    uVar3 = 0x20d;
  }
  FUN_0037995c("crypto/evp/digest.c",uVar3,"EVP_DigestFinalXOF");
  uVar3 = 0xbc;
LAB_0039df68:
  FUN_00379a5c(6,uVar3,0);
  return 0;
}


// ===== 0039dfa4  FUN_0039dfa4 =====

undefined8 FUN_0039dfa4(long param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x28);
  if (((piVar2 != (int *)0x0) &&
      (((*piVar2 == 0x100 || (*piVar2 == 0x80)) && (*(long *)(piVar2 + 0xc) != 0)))) &&
     (*(code **)(*(long *)(piVar2 + 10) + 0xe0) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0039dfd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(long *)(piVar2 + 10) + 0xe0))(*(long *)(piVar2 + 0xc));
    return uVar1;
  }
  if ((*(long *)(param_1 + 8) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 8) + 0xc0),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0039dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(param_1 + 0x38));
    return uVar1;
  }
  return 0;
}


// ===== 0039dffc  FUN_0039dffc =====

long FUN_0039dffc(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_003c8474(0x48,"crypto/evp/digest.c",0x84);
  if ((lVar2 != 0) && (iVar1 = FUN_0039e0a8(lVar2,param_1), iVar1 == 0)) {
    iVar1 = FUN_00389e18(lVar2,0x400);
    if (iVar1 == 0) {
      FUN_003b1f78(*(undefined8 *)(lVar2 + 0x28));
      *(undefined8 *)(lVar2 + 0x28) = 0;
    }
    FUN_0039cf10(lVar2,0,0);
    FUN_003c89b8(lVar2,0x48);
    FUN_003c86b4(lVar2,"crypto/evp/digest.c",0x8d);
    return 0;
  }
  return lVar2;
}


// ===== 0039e0a8  FUN_0039e0a8 =====

undefined8 FUN_0039e0a8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  void *__dest;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if (param_2 == (undefined8 *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/evp/digest.c",0x243,"EVP_MD_CTX_copy_ex");
    uVar4 = 0xc0102;
    goto LAB_0039e1ec;
  }
  lVar3 = param_2[1];
  if (lVar3 == 0) {
    if (param_1 != (undefined8 *)0x0) {
      iVar2 = FUN_00389e18(param_1,0x400);
      if (iVar2 == 0) {
        FUN_003b1f78(param_1[5]);
        param_1[5] = 0;
      }
      FUN_0039cf10(param_1,0,0);
      FUN_003c89b8(param_1,0x48);
    }
    lVar3 = param_1[8];
    if (((lVar3 != 0) && (*(int *)(lVar3 + 0x18) == 0)) &&
       (iVar2 = *(int *)(lVar3 + 0x78), iVar1 = iVar2 + -1, *(int *)(lVar3 + 0x78) = iVar1,
       iVar1 == 0 || iVar2 < 1)) {
      FUN_00389b64();
    }
    uVar4 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar4;
    uVar10 = param_2[5];
    uVar9 = param_2[4];
    uVar6 = param_2[7];
    uVar4 = param_2[6];
    uVar8 = param_2[3];
    uVar7 = param_2[2];
    param_1[8] = param_2[8];
    param_1[5] = uVar10;
    param_1[4] = uVar9;
    param_1[7] = uVar6;
    param_1[6] = uVar4;
    param_1[3] = uVar8;
    param_1[2] = uVar7;
    goto LAB_0039e320;
  }
  if ((*(long *)(lVar3 + 0x70) == 0) || ((*(byte *)((long)param_2 + 0x19) & 1) != 0)) {
    if (param_1[1] == lVar3) {
      __dest = (void *)param_1[4];
      FUN_00389e24(param_1,4);
      iVar2 = FUN_00389e18(param_1,0x400);
    }
    else {
      __dest = (void *)0x0;
      iVar2 = FUN_00389e18(param_1,0x400);
    }
    if (iVar2 == 0) {
      FUN_003b1f78(param_1[5]);
      param_1[5] = 0;
    }
    FUN_0039cf10(param_1,0,0);
    FUN_003c89b8(param_1,0x48);
    uVar4 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar4;
    uVar10 = param_2[5];
    uVar9 = param_2[4];
    uVar6 = param_2[7];
    uVar4 = param_2[6];
    uVar8 = param_2[3];
    uVar7 = param_2[2];
    param_1[8] = param_2[8];
    param_1[5] = uVar10;
    param_1[4] = uVar9;
    param_1[7] = uVar6;
    param_1[6] = uVar4;
    param_1[3] = uVar8;
    param_1[2] = uVar7;
    FUN_00389e38(param_1,0x400);
    param_1[4] = 0;
    param_1[5] = 0;
    if ((param_2[4] != 0) && (iVar2 = *(int *)(param_1[1] + 0x4c), iVar2 != 0)) {
      if (__dest == (void *)0x0) {
        __dest = (void *)FUN_003c83a4((long)iVar2,"crypto/evp/digest.c",0x29d);
        param_1[4] = __dest;
        if (__dest == (void *)0x0) {
          return 0;
        }
        iVar2 = *(int *)(param_1[1] + 0x4c);
      }
      else {
        param_1[4] = __dest;
      }
      memcpy(__dest,(void *)param_2[4],(long)iVar2);
    }
    lVar3 = param_2[5];
    param_1[6] = param_2[6];
    if (lVar3 == 0) {
LAB_0039e40c:
      if (*(code **)(param_1[1] + 0x38) == (code *)0x0) {
        return 1;
      }
                    /* WARNING: Could not recover jumptable at 0x0039e42c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(param_1[1] + 0x38))(param_1,param_2);
      return uVar4;
    }
    lVar3 = FUN_003b20e8();
    param_1[5] = lVar3;
    if (lVar3 != 0) goto LAB_0039e40c;
    goto LAB_0039e444;
  }
  if (*(long *)(lVar3 + 0xb0) == 0) {
    FUN_00379868();
    uVar4 = 0x255;
LAB_0039e3ac:
    FUN_0037995c("crypto/evp/digest.c",uVar4,"EVP_MD_CTX_copy_ex");
    uVar4 = 0xbe;
LAB_0039e1ec:
    FUN_00379a5c(6,uVar4,0);
    return 0;
  }
  if (param_1 != (undefined8 *)0x0) {
    iVar2 = FUN_00389e18(param_1,0x400);
    if (iVar2 == 0) {
      FUN_003b1f78(param_1[5]);
      param_1[5] = 0;
    }
    FUN_0039cf10(param_1,0,1);
  }
  lVar3 = param_1[8];
  lVar5 = param_2[8];
  if ((((lVar3 != 0) && (lVar3 != lVar5)) && (*(int *)(lVar3 + 0x18) == 0)) &&
     (iVar2 = *(int *)(lVar3 + 0x78), iVar1 = iVar2 + -1, *(int *)(lVar3 + 0x78) = iVar1,
     iVar1 == 0 || iVar2 < 1)) {
    FUN_00389b64(lVar3);
  }
  uVar6 = param_2[4];
  uVar8 = param_2[7];
  uVar7 = param_2[6];
  uVar10 = param_2[3];
  uVar9 = param_2[2];
  uVar4 = param_2[8];
  param_1[5] = param_2[5];
  param_1[4] = uVar6;
  param_1[7] = uVar8;
  param_1[6] = uVar7;
  uVar7 = param_2[1];
  uVar6 = *param_2;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = uVar4;
  param_1[1] = uVar7;
  *param_1 = uVar6;
  param_1[3] = uVar10;
  param_1[2] = uVar9;
  if (((lVar3 != lVar5) && (lVar3 = param_2[8], lVar3 != 0)) && (*(int *)(lVar3 + 0x18) == 0)) {
    *(int *)(lVar3 + 0x78) = *(int *)(lVar3 + 0x78) + 1;
  }
  if (param_2[7] != 0) {
    lVar3 = (**(code **)(param_2[1] + 0xb0))();
    param_1[7] = lVar3;
    if (lVar3 == 0) {
      FUN_00379868();
      uVar4 = 0x268;
      goto LAB_0039e3ac;
    }
  }
LAB_0039e320:
  FUN_00389e38(param_1,0x400);
  if (param_2[5] != 0) {
    lVar3 = FUN_003b20e8();
    param_1[5] = lVar3;
    if (lVar3 == 0) {
      FUN_00379868();
      FUN_0037995c("crypto/evp/digest.c",0x274,"EVP_MD_CTX_copy_ex");
      FUN_00379a5c(6,0xbe,0);
LAB_0039e444:
      iVar2 = FUN_00389e18(param_1,0x400);
      if (iVar2 == 0) {
        FUN_003b1f78(param_1[5]);
        param_1[5] = 0;
      }
      FUN_0039cf10(param_1,0,0);
      FUN_003c89b8(param_1,0x48);
      return 0;
    }
  }
  return 1;
}


// ===== 0039e490  FUN_0039e490 =====

void FUN_0039e490(long param_1,undefined8 param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = FUN_00389e18(param_1,0x400);
    if (iVar1 == 0) {
      FUN_003b1f78(*(undefined8 *)(param_1 + 0x28));
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    FUN_0039cf10(param_1,0,0);
    FUN_003c89b8(param_1,0x48);
  }
  FUN_0039e0a8(param_1,param_2);
  return;
}


// ===== 0039e4f4  FUN_0039e4f4 =====

undefined8 FUN_0039e4f4(long param_1)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    return 1;
  }
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
  return 1;
}


// ===== 0039e518  FUN_0039e518 =====

bool FUN_0039e518(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = FUN_003c8474(0x48,"crypto/evp/digest.c",0x84);
  if (lVar3 == 0) {
    bVar1 = false;
  }
  else {
    FUN_00389e24(lVar3,1);
    iVar2 = FUN_0039d380(lVar3,param_5,0,param_6);
    if ((iVar2 == 0) || (iVar2 = FUN_0039d938(lVar3,param_1,param_2), iVar2 == 0)) {
      bVar1 = false;
      iVar2 = FUN_00389e18(lVar3,0x400);
    }
    else {
      iVar2 = FUN_0039dac8(lVar3,param_3,param_4);
      bVar1 = iVar2 != 0;
      iVar2 = FUN_00389e18(lVar3,0x400);
    }
    if (iVar2 == 0) {
      FUN_003b1f78(*(undefined8 *)(lVar3 + 0x28));
      *(undefined8 *)(lVar3 + 0x28) = 0;
    }
    FUN_0039cf10(lVar3,0,0);
    FUN_003c89b8(lVar3,0x48);
    FUN_003c86b4(lVar3,"crypto/evp/digest.c",0x8d);
  }
  return bVar1;
}


// ===== 0039e638  FUN_0039e638 =====

ulong FUN_0039e638(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulong *param_7)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  uint local_24;
  
  uVar3 = FUN_00382990(param_1,1,param_2,param_3,FUN_0039eb30,FUN_0039efc0,FUN_0039efe4);
  local_24 = 0;
  uVar4 = uVar3;
  if ((uVar3 != 0) &&
     (uVar4 = FUN_0039e518(param_4,param_5,param_6,&local_24,uVar3,0), *(int *)(uVar3 + 0x18) == 0))
  {
    iVar1 = *(int *)(uVar3 + 0x78);
    iVar2 = iVar1 + -1;
    *(int *)(uVar3 + 0x78) = iVar2;
    if (iVar2 == 0 || iVar1 < 1) {
      uVar4 = uVar4 & 0xffffffff;
      FUN_00389b64(uVar3);
    }
  }
  if (param_7 != (ulong *)0x0) {
    *param_7 = (ulong)local_24;
  }
  return uVar4;
}


// ===== 0039e6f4  FUN_0039e6f4 =====

void FUN_0039e6f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00382990(param_1,1,param_2,param_3,FUN_0039eb30,FUN_0039efc0,FUN_0039efe4);
  return;
}


// ===== 0039e71c  FUN_0039e71c =====

undefined8 FUN_0039e71c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (*(code **)(param_1 + 0xb8) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0039e72c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0xb8))(param_2);
    return uVar1;
  }
  return 0;
}


// ===== 0039e738  FUN_0039e738 =====

undefined8 FUN_0039e738(long param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((param_1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0xd0), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    FUN_003899dc();
    FUN_003d3bf8();
                    /* WARNING: Could not recover jumptable at 0x0039e768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}


// ===== 0039e774  FUN_0039e774 =====

undefined8 FUN_0039e774(long param_1)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0xd8) != 0)) {
    FUN_003899dc();
    uVar1 = FUN_003d3bf8();
                    /* WARNING: Could not recover jumptable at 0x0039e7ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0xd8))(0,uVar1);
    return uVar1;
  }
  return 0;
}


// ===== 0039e7b8  FUN_0039e7b8 =====

undefined8 FUN_0039e7b8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  int *piVar3;
  
  if (param_1 != 0) {
    piVar3 = *(int **)(param_1 + 0x28);
    if (((piVar3 != (int *)0x0) &&
        (((*piVar3 == 0x100 || (*piVar3 == 0x80)) && (*(long *)(piVar3 + 0xc) != 0)))) &&
       (*(code **)(*(long *)(piVar3 + 10) + 0xe8) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0039e7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*(long *)(piVar3 + 10) + 0xe8))(*(long *)(piVar3 + 0xc));
      return uVar1;
    }
    lVar2 = *(long *)(param_1 + 8);
    if ((lVar2 != 0) && (*(long *)(lVar2 + 0xd8) != 0)) {
      FUN_003899dc(lVar2);
      uVar1 = FUN_003d3bf8();
                    /* WARNING: Could not recover jumptable at 0x0039e838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*(long *)(param_1 + 8) + 0xd8))(*(undefined8 *)(param_1 + 0x38),uVar1);
      return uVar1;
    }
  }
  return 0;
}


// ===== 0039e844  FUN_0039e844 =====

undefined8 FUN_0039e844(long param_1)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0xe0) != 0)) {
    FUN_003899dc();
    uVar1 = FUN_003d3bf8();
                    /* WARNING: Could not recover jumptable at 0x0039e87c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0xe0))(0,uVar1);
    return uVar1;
  }
  return 0;
}


// ===== 0039e888  FUN_0039e888 =====

undefined8 FUN_0039e888(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  int *piVar3;
  
  if (param_1 != 0) {
    piVar3 = *(int **)(param_1 + 0x28);
    if (((piVar3 != (int *)0x0) &&
        (((*piVar3 == 0x100 || (*piVar3 == 0x80)) && (*(long *)(piVar3 + 0xc) != 0)))) &&
       (*(code **)(*(long *)(piVar3 + 10) + 0xd8) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0039e8c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*(long *)(piVar3 + 10) + 0xd8))(*(long *)(piVar3 + 0xc));
      return uVar1;
    }
    lVar2 = *(long *)(param_1 + 8);
    if ((lVar2 != 0) && (*(long *)(lVar2 + 0xe0) != 0)) {
      FUN_003899dc(lVar2);
      uVar1 = FUN_003d3bf8();
                    /* WARNING: Could not recover jumptable at 0x0039e908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*(long *)(param_1 + 8) + 0xe0))(*(undefined8 *)(param_1 + 0x38),uVar1);
      return uVar1;
    }
  }
  return 0;
}


// ===== 0039e914  FUN_0039e914 =====

undefined8 FUN_0039e914(long param_1,int param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int *piVar4;
  code *pcVar5;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long local_8;
  
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  local_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_68 = 0;
  local_70 = 0;
  if (param_1 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/evp/digest.c",0x35f,"EVP_MD_CTX_ctrl");
    uVar2 = 0xc0102;
LAB_0039e9b8:
    FUN_00379a5c(6,uVar2,0);
  }
  else {
    lVar3 = *(long *)(param_1 + 8);
    if ((lVar3 == 0) || (*(long *)(lVar3 + 0x70) != 0)) {
      if (param_2 == 2) {
        iVar1 = 9999;
        if (param_3 != 0) {
          iVar1 = param_3;
        }
        FUN_003cd8cc(&local_70,"micalg",param_4,(long)iVar1);
        piVar4 = *(int **)(param_1 + 0x28);
        if (((piVar4 == (int *)0x0) ||
            (((*piVar4 != 0x100 && (*piVar4 != 0x80)) ||
             (lVar3 = *(long *)(piVar4 + 0xc), lVar3 == 0)))) ||
           (pcVar5 = *(code **)(*(long *)(piVar4 + 10) + 0xd0), pcVar5 == (code *)0x0)) {
          if (*(long *)(param_1 + 8) == 0) {
            return 0;
          }
          pcVar5 = *(code **)(*(long *)(param_1 + 8) + 200);
          goto joined_r0x0039eabc;
        }
      }
      else {
        if (param_2 == 0x1d) {
          FUN_003cd924(&local_70,"ssl3-ms",param_4,(long)param_3);
          piVar4 = *(int **)(param_1 + 0x28);
        }
        else {
          if (param_2 != 3) {
            return 0;
          }
          local_8 = (long)param_3;
          FUN_003ccbb0(&local_70,"xoflen",&local_8);
          piVar4 = *(int **)(param_1 + 0x28);
        }
        if (((piVar4 == (int *)0x0) || ((*piVar4 != 0x100 && (*piVar4 != 0x80)))) ||
           ((lVar3 = *(long *)(piVar4 + 0xc), lVar3 == 0 ||
            (pcVar5 = *(code **)(*(long *)(piVar4 + 10) + 0xe0), pcVar5 == (code *)0x0)))) {
          if (*(long *)(param_1 + 8) == 0) {
            return 0;
          }
          pcVar5 = *(code **)(*(long *)(param_1 + 8) + 0xc0);
joined_r0x0039eabc:
          if (pcVar5 == (code *)0x0) {
            return 0;
          }
          lVar3 = *(long *)(param_1 + 0x38);
        }
      }
      uVar2 = (*pcVar5)(lVar3,&local_70);
      iVar1 = (int)uVar2;
    }
    else {
      if (*(code **)(lVar3 + 0x50) == (code *)0x0) {
        FUN_00379868();
        FUN_0037995c("crypto/evp/digest.c",0x382,"EVP_MD_CTX_ctrl");
        uVar2 = 0x84;
        goto LAB_0039e9b8;
      }
      uVar2 = (**(code **)(lVar3 + 0x50))();
      iVar1 = (int)uVar2;
    }
    if (0 < iVar1) {
      return uVar2;
    }
  }
  return 0;
}


// ===== 0039eb00  FUN_0039eb00 =====

void FUN_0039eb00(void)

{
  long lVar1;
  
  lVar1 = FUN_003c8474(0xe8,"crypto/evp/digest.c",0x38f);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x78) = 1;
  }
  return;
}


// ===== 0039eb30  FUN_0039eb30 =====

int * FUN_0039eb30(int param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined1 auStack_120 [40];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  ulong local_58;
  ulong local_50;
  undefined8 local_48;
  
  lVar7 = *(long *)(param_2 + 0x10);
  piVar3 = (int *)FUN_003c8474(0xe8,"crypto/evp/digest.c",0x38f);
  if (piVar3 != (int *)0x0) {
    *piVar3 = 0;
    piVar3[0x1e] = 1;
    iVar2 = FUN_00383588(param_3,param_1,FUN_0039f030,piVar3);
    if ((iVar2 == 0) || (*piVar3 == -1)) {
      FUN_00379868();
      FUN_0037995c("crypto/evp/digest.c",0x3e4,"evp_md_from_algorithm");
      FUN_00379a5c(6,0xc0103,0);
      if (piVar3[6] != 0) {
        return (int *)0x0;
      }
    }
    else {
      piVar3[0x16] = param_1;
      lVar4 = FUN_003c34fc(param_2);
      *(long *)(piVar3 + 0x18) = lVar4;
      if (lVar4 != 0) {
        iVar2 = 0;
        *(undefined8 *)(piVar3 + 0x1a) = *(undefined8 *)(param_2 + 0x18);
        puVar6 = (undefined8 *)(lVar7 + 8);
LAB_0039ebe8:
        switch(*(undefined4 *)(puVar6 + -1)) {
        case 0:
          goto switchD_0039ec00_caseD_0;
        case 1:
          if (*(long *)(piVar3 + 0x20) == 0) {
            iVar2 = iVar2 + 1;
            *(undefined8 *)(piVar3 + 0x20) = *puVar6;
            puVar6 = puVar6 + 2;
            goto LAB_0039ebe8;
          }
          break;
        case 2:
          if (*(long *)(piVar3 + 0x22) == 0) {
            iVar2 = iVar2 + 1;
            *(undefined8 *)(piVar3 + 0x22) = *puVar6;
            puVar6 = puVar6 + 2;
            goto LAB_0039ebe8;
          }
          break;
        case 3:
          if (*(long *)(piVar3 + 0x24) == 0) {
            iVar2 = iVar2 + 1;
            *(undefined8 *)(piVar3 + 0x24) = *puVar6;
            puVar6 = puVar6 + 2;
            goto LAB_0039ebe8;
          }
          break;
        case 4:
          if (*(long *)(piVar3 + 0x26) == 0) {
            iVar2 = iVar2 + 1;
            *(undefined8 *)(piVar3 + 0x26) = *puVar6;
            puVar6 = puVar6 + 2;
            goto LAB_0039ebe8;
          }
          break;
        case 5:
          if (*(long *)(piVar3 + 0x28) == 0) {
            *(undefined8 *)(piVar3 + 0x28) = *puVar6;
            puVar6 = puVar6 + 2;
            goto LAB_0039ebe8;
          }
          break;
        case 6:
          if (*(long *)(piVar3 + 0x2a) == 0) {
            iVar2 = iVar2 + 1;
            *(undefined8 *)(piVar3 + 0x2a) = *puVar6;
            puVar6 = puVar6 + 2;
            goto LAB_0039ebe8;
          }
          break;
        case 7:
          if (*(long *)(piVar3 + 0x2c) == 0) {
            *(undefined8 *)(piVar3 + 0x2c) = *puVar6;
            puVar6 = puVar6 + 2;
            goto LAB_0039ebe8;
          }
          break;
        case 8:
          if (*(long *)(piVar3 + 0x2e) == 0) {
            *(undefined8 *)(piVar3 + 0x2e) = *puVar6;
            puVar6 = puVar6 + 2;
            goto LAB_0039ebe8;
          }
          break;
        case 9:
          if (*(long *)(piVar3 + 0x30) == 0) {
            *(undefined8 *)(piVar3 + 0x30) = *puVar6;
            puVar6 = puVar6 + 2;
            goto LAB_0039ebe8;
          }
          break;
        case 10:
          if (*(long *)(piVar3 + 0x32) == 0) {
            *(undefined8 *)(piVar3 + 0x32) = *puVar6;
            puVar6 = puVar6 + 2;
            goto LAB_0039ebe8;
          }
          break;
        case 0xb:
          if (*(long *)(piVar3 + 0x34) == 0) {
            *(undefined8 *)(piVar3 + 0x34) = *puVar6;
            puVar6 = puVar6 + 2;
            goto LAB_0039ebe8;
          }
          break;
        case 0xc:
          if (*(long *)(piVar3 + 0x36) != 0) break;
          *(undefined8 *)(piVar3 + 0x36) = *puVar6;
          puVar6 = puVar6 + 2;
          goto LAB_0039ebe8;
        case 0xd:
          if (*(long *)(piVar3 + 0x38) == 0) {
            *(undefined8 *)(piVar3 + 0x38) = *puVar6;
          }
        }
        puVar6 = puVar6 + 2;
        goto LAB_0039ebe8;
      }
      if (piVar3[6] != 0) {
        return (int *)0x0;
      }
    }
    iVar2 = piVar3[0x1e];
    iVar1 = iVar2 + -1;
    piVar3[0x1e] = iVar1;
    if (iVar1 != 0 && 0 < iVar2) {
      return (int *)0x0;
    }
    FUN_00389b64(piVar3);
    return (int *)0x0;
  }
  FUN_00379868();
  FUN_0037995c("crypto/evp/digest.c",0x3dc,"evp_md_from_algorithm");
  uVar5 = 0x80006;
LAB_0039ed90:
  FUN_00379a5c(6,uVar5,0);
  return (int *)0x0;
switchD_0039ec00_caseD_0:
  if ((iVar2 == 5) || ((iVar2 == 0 && (*(long *)(piVar3 + 0x28) != 0)))) {
    *(long *)(piVar3 + 0x1c) = param_3;
    if (param_3 != 0) {
      FUN_003d2754(param_3);
    }
    local_50 = 0;
    local_48 = 0;
    local_58 = 0;
    FUN_003ccbb0(auStack_120,"blocksize",&local_50);
    FUN_003ccbb0(&local_148,&DAT_001f543b,&local_58);
    local_d8 = local_128;
    uStack_f0 = uStack_140;
    local_f8 = local_148;
    uStack_e0 = uStack_130;
    local_e8 = local_138;
    FUN_003cb668(&local_148,&DAT_001f95c2,(long)&local_48 + 4);
    local_b0 = local_128;
    uStack_c8 = uStack_140;
    local_d0 = local_148;
    uStack_b8 = uStack_130;
    local_c0 = local_138;
    FUN_003cb668(&local_148,"algid-absent",&local_48);
    local_88 = local_128;
    uStack_a0 = uStack_140;
    local_a8 = local_148;
    uStack_90 = uStack_130;
    local_98 = local_138;
    FUN_003cdfcc(&local_148);
    uStack_78 = uStack_140;
    local_80 = local_148;
    uStack_68 = uStack_130;
    uStack_70 = local_138;
    local_60 = local_128;
    iVar2 = FUN_0039f1b0(piVar3,auStack_120);
    if (((local_58 >> 0x1f == 0) && (local_50 >> 0x1f == 0)) && (0 < iVar2)) {
      piVar3[0x12] = (int)local_50;
      piVar3[2] = (int)local_58;
      if (local_48._4_4_ != 0) {
        *(ulong *)(piVar3 + 4) = *(ulong *)(piVar3 + 4) | 2;
      }
      if ((int)local_48 != 0) {
        *(ulong *)(piVar3 + 4) = *(ulong *)(piVar3 + 4) | 8;
      }
      return piVar3;
    }
    if ((piVar3[6] == 0) &&
       (iVar2 = piVar3[0x1e], iVar1 = iVar2 + -1, piVar3[0x1e] = iVar1, iVar1 == 0 || iVar2 < 1)) {
      FUN_00389b64(piVar3);
    }
    FUN_00379868();
    FUN_0037995c("crypto/evp/digest.c",0x448,"evp_md_from_algorithm");
    uVar5 = 0xe1;
  }
  else {
    if ((piVar3[6] == 0) &&
       (iVar2 = piVar3[0x1e], iVar1 = iVar2 + -1, piVar3[0x1e] = iVar1, iVar1 == 0 || iVar2 < 1)) {
      FUN_00389b64(piVar3);
    }
    FUN_00379868();
    FUN_0037995c("crypto/evp/digest.c",0x43f,"evp_md_from_algorithm");
    uVar5 = 0xc1;
  }
  goto LAB_0039ed90;
}


// ===== 0039efc0  FUN_0039efc0 =====

undefined8 FUN_0039efc0(long param_1)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    return 1;
  }
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
  return 1;
}


// ===== 0039efe4  FUN_0039efe4 =====

void FUN_0039efe4(long param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x18) == 0)) {
    iVar1 = *(int *)(param_1 + 0x78);
    iVar2 = iVar1 + -1;
    *(int *)(param_1 + 0x78) = iVar2;
    if (iVar2 == 0 || iVar1 < 1) {
      FUN_00389b64();
      return;
    }
  }
  return;
}


// ===== 0039f008  FUN_0039f008 =====

void FUN_0039f008(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0038345c(param_1,1,param_2,param_3,FUN_0039eb30,FUN_0039efc0,FUN_0039efe4);
  return;
}


// ===== 0039f030  FUN_0039f030 =====

void FUN_0039f030(undefined4 param_1,int *param_2)

{
  long lVar1;
  int iVar2;
  
  lVar1 = FUN_003dc410(param_1,1);
  if ((*param_2 != -1) && (lVar1 != 0)) {
    iVar2 = FUN_003899b0();
    if (*param_2 != iVar2 && *param_2 != 0) {
      iVar2 = -1;
    }
    *param_2 = iVar2;
  }
  return;
}


// ===== 0039f07c  FUN_0039f07c =====

long FUN_0039f07c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x78) == 0) {
      return 0xffffffff;
    }
    if (*(code **)(param_1 + 200) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0039f094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar1 = (**(code **)(param_1 + 200))(param_2);
      return lVar1;
    }
    FUN_00379868();
    FUN_0037995c("crypto/evp/evp_utils.c",0x41,"geterr");
    FUN_00379a5c(6,0xc5,0);
    param_1 = 0;
  }
  return param_1;
}


// ===== 0039f0e0  FUN_0039f0e0 =====

long FUN_0039f0e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x78) == 0) {
      return 0xffffffff;
    }
    if (*(code **)(param_1 + 0xd0) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0039f0fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar1 = (**(code **)(param_1 + 0xd0))(param_2,param_3);
      return lVar1;
    }
    FUN_00379868();
    FUN_0037995c("crypto/evp/evp_utils.c",0x41,"geterr");
    FUN_00379a5c(6,0xc5,0);
    param_1 = 0;
  }
  return param_1;
}


// ===== 0039f148  FUN_0039f148 =====

long FUN_0039f148(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x78) == 0) {
      return 0xffffffff;
    }
    if (*(code **)(param_1 + 0xd8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0039f164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar1 = (**(code **)(param_1 + 0xd8))(param_2,param_3);
      return lVar1;
    }
    FUN_00379868();
    FUN_0037995c("crypto/evp/evp_utils.c",0x46,"seterr");
    FUN_00379a5c(6,0xc6,0);
    param_1 = 0;
  }
  return param_1;
}


// ===== 0039f1b0  FUN_0039f1b0 =====

long FUN_0039f1b0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x70) == 0) {
      return 0xffffffff;
    }
    if (*(code **)(param_1 + 0xb8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0039f1c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar1 = (**(code **)(param_1 + 0xb8))(param_2);
      return lVar1;
    }
    FUN_00379868();
    FUN_0037995c("crypto/evp/evp_utils.c",0x41,"geterr");
    FUN_00379a5c(6,0xc5,0);
    param_1 = 0;
  }
  return param_1;
}


// ===== 0039f214  FUN_0039f214 =====

long FUN_0039f214(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x70) == 0) {
      return 0xffffffff;
    }
    if (*(code **)(param_1 + 200) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0039f230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar1 = (**(code **)(param_1 + 200))(param_2,param_3);
      return lVar1;
    }
    FUN_00379868();
    FUN_0037995c("crypto/evp/evp_utils.c",0x41,"geterr");
    FUN_00379a5c(6,0xc5,0);
    param_1 = 0;
  }
  return param_1;
}


// ===== 0039f27c  FUN_0039f27c =====

long FUN_0039f27c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x70) == 0) {
      return 0xffffffff;
    }
    if (*(code **)(param_1 + 0xc0) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0039f298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar1 = (**(code **)(param_1 + 0xc0))(param_2,param_3);
      return lVar1;
    }
    FUN_00379868();
    FUN_0037995c("crypto/evp/evp_utils.c",0x46,"seterr");
    FUN_00379a5c(6,0xc6,0);
    param_1 = 0;
  }
  return param_1;
}


// ===== 0039f2e4  FUN_0039f2e4 =====

bool FUN_0039f2e4(long *param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = param_2[1];
  lVar3 = lVar4;
  if (lVar4 == 0) {
    lVar3 = FUN_003a06c8(*param_2,0);
    param_2[1] = lVar3;
    if (lVar3 == 0) {
      FUN_00379868(0,0);
      FUN_0037995c("crypto/evp/keymgmt_lib.c",0x25,"evp_keymgmt_util_try_import");
      FUN_00379a5c(6,0x80006,0);
      return false;
    }
  }
  if (*param_1 != 0) {
    iVar2 = FUN_003a094c(*param_2,lVar3,*(undefined4 *)(param_2 + 2),param_1);
    bVar1 = iVar2 != 0;
    if ((lVar4 == 0) && (iVar2 == 0)) {
      FUN_003a0704(*param_2,param_2[1]);
      bVar1 = false;
      param_2[1] = 0;
    }
    return bVar1;
  }
  return true;
}


// ===== 0039f3c0  FUN_0039f3c0 =====

undefined8 FUN_0039f3c0(long param_1,long param_2,long param_3)

{
  int iVar1;
  
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) && (iVar1 = FUN_003a67bc(), iVar1 != 0)
     ) {
    *(long *)(param_1 + 0x68) = param_3;
    FUN_0039f444(param_1);
    return 1;
  }
  FUN_00379868();
  FUN_0037995c("crypto/evp/keymgmt_lib.c",0x41,"evp_keymgmt_util_assign_pkey");
  FUN_00379a5c(6,0xc0103,0);
  return 0;
}


// ===== 0039f444  FUN_0039f444 =====

void FUN_0039f444(long param_1)

{
  int iVar1;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined1 auStack_d0 [40];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
  
  if (*(long *)(param_1 + 0x68) != 0) {
    local_28 = 0;
    local_2c = 0;
    FUN_003cb668(auStack_d0,&DAT_001c97b2,(long)&local_28 + 4);
    FUN_003cb668(&local_f8,"security-bits",&local_28);
    local_88 = local_d8;
    uStack_a0 = uStack_f0;
    local_a8 = local_f8;
    uStack_90 = uStack_e0;
    local_98 = local_e8;
    FUN_003cb668(&local_f8,"max-size",&local_2c);
    local_60 = local_d8;
    uStack_78 = uStack_f0;
    local_80 = local_f8;
    uStack_68 = uStack_e0;
    local_70 = local_e8;
    FUN_003cdfcc(&local_f8);
    uStack_50 = uStack_f0;
    local_58 = local_f8;
    uStack_40 = uStack_e0;
    local_48 = local_e8;
    local_38 = local_d8;
    iVar1 = FUN_003a084c(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),auStack_d0)
    ;
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x8c) = (undefined4)local_28;
      *(undefined4 *)(param_1 + 0x90) = local_2c;
      *(undefined4 *)(param_1 + 0x88) = local_28._4_4_;
    }
  }
  return;
}


// ===== 0039f528  FUN_0039f528 =====

long FUN_0039f528(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = 0;
  if (((param_1 != 0) && (param_2 != 0)) && (lVar2 = FUN_003a8a70(0), lVar2 != 0)) {
    iVar1 = FUN_003a67bc(lVar2,param_1);
    if (iVar1 != 0) {
      *(long *)(lVar2 + 0x68) = param_2;
      FUN_0039f444(lVar2);
      return lVar2;
    }
    FUN_00379868();
    FUN_0037995c("crypto/evp/keymgmt_lib.c",0x41,"evp_keymgmt_util_assign_pkey");
    FUN_00379a5c(6,0xc0103,0);
  }
  FUN_003a6c04(lVar2);
  return 0;
}


// ===== 0039f5d0  FUN_0039f5d0 =====

undefined8 FUN_0039f5d0(long param_1,undefined4 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (param_3 != 0)) {
    uVar1 = FUN_003a09c8(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),param_2,
                         param_3,param_4);
    return uVar1;
  }
  return 0;
}


// ===== 0039f5f8  FUN_0039f5f8 =====

long FUN_0039f5f8(long param_1,long param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  long local_58;
  long local_50;
  uint local_48;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x68);
  if (((lVar2 != 0) && (lVar5 = *(long *)(param_1 + 0x60), lVar5 != param_2)) &&
     ((*(int *)(lVar5 + 4) != *(int *)(param_2 + 4) ||
      (*(long *)(lVar5 + 0x18) != *(long *)(param_2 + 0x18))))) {
    iVar1 = FUN_003d517c(*(undefined8 *)(param_1 + 0x38));
    if (iVar1 != 0) {
      if ((*(long *)(param_1 + 0x70) == *(long *)(param_1 + 0x80)) &&
         (iVar1 = FUN_0040caf8(*(undefined8 *)(param_1 + 0x78)), 0 < iVar1)) {
        iVar6 = 0;
        do {
          plVar3 = (long *)FUN_0040cb0c(*(undefined8 *)(param_1 + 0x78),iVar6);
          if ((*plVar3 == param_2) && ((param_3 & (*(uint *)(plVar3 + 2) ^ 0xffffffff)) == 0)) {
            lVar2 = plVar3[1];
            FUN_003d519c(*(undefined8 *)(param_1 + 0x38));
            return lVar2;
          }
          iVar6 = iVar6 + 1;
        } while (iVar1 != iVar6);
      }
      FUN_003d519c(*(undefined8 *)(param_1 + 0x38));
      lVar2 = *(long *)(param_1 + 0x60);
      if (*(long *)(lVar2 + 200) != 0) {
        uVar4 = FUN_003a0640(param_2);
        iVar1 = FUN_003a0648(lVar2,uVar4);
        if (iVar1 != 0) {
          local_50 = 0;
          local_58 = param_2;
          local_48 = param_3;
          iVar1 = FUN_003a09c8(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),
                               param_3,PTR_FUN_007a1b08,&local_58);
          if (iVar1 != 0) {
            iVar1 = FUN_003d518c(*(undefined8 *)(param_1 + 0x38));
            if (iVar1 != 0) {
              lVar2 = FUN_0039f84c(param_1,param_2,param_3);
              if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 8), lVar2 != 0)) {
                FUN_003d519c(*(undefined8 *)(param_1 + 0x38));
                FUN_003a0704(param_2,local_50);
                return lVar2;
              }
              if (*(long *)(param_1 + 0x70) != *(long *)(param_1 + 0x80)) {
                FUN_0040ca6c(*(undefined8 *)(param_1 + 0x78),FUN_0039f9f8);
                *(undefined8 *)(param_1 + 0x78) = 0;
              }
              iVar1 = FUN_0039f920(param_1,param_2,local_50,param_3);
              if (iVar1 != 0) {
                *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x70);
                FUN_003d519c(*(undefined8 *)(param_1 + 0x38));
                return local_50;
              }
              FUN_003d519c(*(undefined8 *)(param_1 + 0x38));
            }
            FUN_003a0704(param_2,local_50);
          }
        }
      }
      return 0;
    }
    lVar2 = 0;
  }
  return lVar2;
}


// ===== 0039f84c  FUN_0039f84c =====

long * FUN_0039f84c(long param_1,long param_2,uint param_3)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  
  iVar1 = FUN_0040caf8(*(undefined8 *)(param_1 + 0x78));
  if (0 < iVar1) {
    iVar3 = 0;
    do {
      plVar2 = (long *)FUN_0040cb0c(*(undefined8 *)(param_1 + 0x78),iVar3);
      if ((*plVar2 == param_2) && ((param_3 & (*(uint *)(plVar2 + 2) ^ 0xffffffff)) == 0)) {
        return plVar2;
      }
      iVar3 = iVar3 + 1;
    } while (iVar1 != iVar3);
  }
  return (long *)0x0;
}


// ===== 0039f8e4  FUN_0039f8e4 =====

undefined8 FUN_0039f8e4(long param_1)

{
  if (param_1 != 0) {
    FUN_0040ca6c(*(undefined8 *)(param_1 + 0x78),FUN_0039f9f8);
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  return 1;
}


// ===== 0039f920  FUN_0039f920 =====

undefined8 FUN_0039f920(long param_1,undefined8 param_2,long param_3,undefined4 param_4)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if (param_3 == 0) {
    return 1;
  }
  if (*(long *)(param_1 + 0x78) == 0) {
    lVar2 = FUN_0040bf0c();
    *(long *)(param_1 + 0x78) = lVar2;
    if (lVar2 == 0) {
      return 0;
    }
  }
  puVar3 = (undefined8 *)FUN_003c83a4(0x18,"crypto/evp/keymgmt_lib.c",0x107);
  if (puVar3 == (undefined8 *)0x0) {
    return 0;
  }
  *puVar3 = param_2;
  puVar3[1] = param_3;
  *(undefined4 *)(puVar3 + 2) = param_4;
  iVar1 = FUN_003a0584(param_2);
  if (iVar1 == 0) {
    uVar4 = 0x10f;
  }
  else {
    iVar1 = FUN_0040c89c(*(undefined8 *)(param_1 + 0x78),puVar3);
    if (iVar1 != 0) {
      return 1;
    }
    FUN_003a059c(param_2);
    uVar4 = 0x115;
  }
  FUN_003c86b4(puVar3,"crypto/evp/keymgmt_lib.c",uVar4);
  return 0;
}


// ===== 0039f9f8  FUN_0039f9f8 =====

void FUN_0039f9f8(undefined8 *param_1)

{
  FUN_003a0704(*param_1,param_1[1]);
  FUN_003a059c(*param_1);
  FUN_003c86b4(param_1,"crypto/evp/keymgmt_lib.c",0xdb);
  return;
}


// ===== 0039fa38  FUN_0039fa38 =====

long FUN_0039fa38(long param_1,long param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_003a06c8(param_2);
  if ((lVar2 != 0) && (iVar1 = FUN_003a094c(param_2,lVar2,param_3,param_4), iVar1 != 0)) {
    if ((param_1 != 0) && ((param_2 != 0 && (iVar1 = FUN_003a67bc(param_1,param_2), iVar1 != 0)))) {
      *(long *)(param_1 + 0x68) = lVar2;
      FUN_0039f444(param_1);
      return lVar2;
    }
    FUN_00379868();
    FUN_0037995c("crypto/evp/keymgmt_lib.c",0x41,"evp_keymgmt_util_assign_pkey");
    FUN_00379a5c(6,0xc0103,0);
  }
  FUN_003a0704(param_2,lVar2);
  return 0;
}


// ===== 0039fb18  FUN_0039fb18 =====

void FUN_0039fb18(long param_1,undefined4 param_2)

{
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_003a08fc(*(long *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),param_2);
    return;
  }
  return;
}


// ===== 0039fb34  FUN_0039fb34 =====

ulong FUN_0039fb34(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    return (ulong)(param_1 == 0 && param_2 == 0);
  }
  lVar9 = *(long *)(param_2 + 0x60);
  lVar7 = *(long *)(param_2 + 0x68);
  lVar1 = *(long *)(param_1 + 0x60);
  lVar8 = *(long *)(param_1 + 0x68);
  lVar5 = lVar1;
  if (lVar1 == lVar9) goto LAB_0039fc98;
  if ((lVar1 == 0) || (lVar9 == 0)) {
    if (lVar9 != 0) goto LAB_0039fbfc;
LAB_0039fc38:
    bVar2 = true;
  }
  else {
    param_3 = param_3 & 0xffffffff;
    uVar4 = FUN_003a0640(lVar9);
    iVar3 = FUN_003a0648(lVar1,uVar4);
    if (iVar3 == 0) {
      FUN_00379868();
      FUN_0037995c("crypto/evp/keymgmt_lib.c",0x17b,"evp_keymgmt_util_match");
      FUN_00379a5c(6,0x65,0);
      return 0xffffffff;
    }
LAB_0039fbfc:
    if (*(long *)(lVar9 + 0xa8) == 0) goto LAB_0039fc38;
    lVar5 = lVar9;
    if (lVar8 == 0) goto LAB_0039fc98;
    uVar10 = param_3 & 0xffffffff;
    lVar5 = FUN_0039f5f8(param_1,lVar9,param_3);
    bVar2 = lVar5 == 0;
    param_3 = uVar10;
    if (!bVar2) {
      lVar1 = lVar9;
      lVar8 = lVar5;
    }
  }
  uVar10 = param_3;
  lVar5 = lVar1;
  if (((lVar1 != 0) && (bVar2)) && (*(long *)(lVar1 + 0xa8) != 0)) {
    if (lVar7 == 0) goto LAB_0039fc98;
    uVar10 = param_3 & 0xffffffff;
    lVar6 = FUN_0039f5f8(param_2,lVar1,param_3);
    if (lVar6 != 0) {
      lVar7 = lVar6;
      lVar9 = lVar1;
    }
  }
  param_3 = uVar10;
  if (lVar1 != lVar9) {
    return 0xfffffffe;
  }
LAB_0039fc98:
  if (lVar8 == 0 && lVar7 == 0) {
    return 1;
  }
  if ((lVar8 != 0) && (lVar7 != 0)) {
    uVar10 = FUN_003a092c(lVar5,lVar8,lVar7,param_3 & 0xffffffff);
    return uVar10;
  }
  return 0;
}


// ===== 0039fd08  FUN_0039fd08 =====

undefined8 FUN_0039fd08(long param_1,long param_2,undefined4 param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long local_58;
  long local_50;
  undefined4 local_48;
  
  if ((param_2 == 0) || (*(long *)(param_2 + 0x68) == 0)) {
    return 0;
  }
  lVar3 = *(long *)(param_2 + 0x60);
  lVar6 = *(long *)(param_1 + 0x60);
  lVar1 = *(long *)(param_1 + 0x68);
  lVar5 = lVar3;
  if ((lVar6 == 0) || (lVar5 = lVar6, lVar6 == lVar3)) {
    if ((*(long *)(lVar3 + 0xe0) != 0) && (lVar1 == 0)) {
      lVar3 = FUN_003a0a48(lVar3,*(long *)(param_2 + 0x68),param_3);
      lVar6 = lVar3;
      if (lVar3 == 0) {
        return 0;
      }
      goto LAB_0039fdd0;
    }
    uVar4 = FUN_003a0640();
    iVar2 = FUN_003a0648(lVar5,uVar4);
  }
  else {
    uVar4 = FUN_003a0640();
    iVar2 = FUN_003a0648(lVar6,uVar4);
  }
  if (iVar2 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/evp/keymgmt_lib.c",0x1e4,"evp_keymgmt_util_copy");
    FUN_00379a5c(6,0x65,0);
    return 0;
  }
  local_58 = lVar5;
  local_50 = lVar1;
  local_48 = param_3;
  uVar4 = FUN_003a09c8(*(undefined8 *)(param_2 + 0x60),*(undefined8 *)(param_2 + 0x68),param_3,
                       PTR_FUN_007a1b08,&local_58);
  lVar6 = local_50;
  lVar3 = local_50;
  if (lVar1 != 0) {
    lVar6 = 0;
    lVar3 = lVar1;
  }
  if ((int)uVar4 == 0) {
    return uVar4;
  }
LAB_0039fdd0:
  if ((*(long *)(param_1 + 0x60) == 0) && (iVar2 = FUN_003a67bc(param_1,lVar5), iVar2 == 0)) {
    FUN_003a0704(lVar5,lVar6);
    return 0;
  }
  *(long *)(param_1 + 0x68) = lVar3;
  FUN_0039f444();
  return 1;
}


// ===== 0039fe8c  FUN_0039fe8c =====

long FUN_0039fe8c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 )

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_003a07e4(param_2,param_3,param_4,param_5);
  if (lVar2 != 0) {
    if (((param_1 != 0) && (param_2 != 0)) && (iVar1 = FUN_003a67bc(param_1,param_2), iVar1 != 0)) {
      *(long *)(param_1 + 0x68) = lVar2;
      FUN_0039f444(param_1);
      return lVar2;
    }
    FUN_00379868();
    FUN_0037995c("crypto/evp/keymgmt_lib.c",0x41,"evp_keymgmt_util_assign_pkey");
    FUN_00379a5c(6,0xc0103,0);
  }
  FUN_003a0704(param_2,lVar2);
  return 0;
}


// ===== 0039ff4c  FUN_0039ff4c =====

undefined4 FUN_0039ff4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  int iVar2;
  ulong *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  ulong local_1a8;
  char local_1a0 [112];
  char local_130 [104];
  undefined1 auStack_c8 [32];
  ulong uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulong local_58;
  
  local_130[0x60] = '\0';
  local_130[0x61] = '\0';
  local_130[0x62] = '\0';
  local_130[99] = '\0';
  local_130[8] = '\0';
  local_130[9] = '\0';
  local_130[10] = '\0';
  local_130[0xb] = '\0';
  local_130[0xc] = '\0';
  local_130[0xd] = '\0';
  local_130[0xe] = '\0';
  local_130[0xf] = '\0';
  local_130[0] = '\0';
  local_130[1] = '\0';
  local_130[2] = '\0';
  local_130[3] = '\0';
  local_130[4] = '\0';
  local_130[5] = '\0';
  local_130[6] = '\0';
  local_130[7] = '\0';
  local_130[0x18] = '\0';
  local_130[0x19] = '\0';
  local_130[0x1a] = '\0';
  local_130[0x1b] = '\0';
  local_130[0x1c] = '\0';
  local_130[0x1d] = '\0';
  local_130[0x1e] = '\0';
  local_130[0x1f] = '\0';
  local_130[0x10] = '\0';
  local_130[0x11] = '\0';
  local_130[0x12] = '\0';
  local_130[0x13] = '\0';
  local_130[0x14] = '\0';
  local_130[0x15] = '\0';
  local_130[0x16] = '\0';
  local_130[0x17] = '\0';
  local_130[0x28] = '\0';
  local_130[0x29] = '\0';
  local_130[0x2a] = '\0';
  local_130[0x2b] = '\0';
  local_130[0x2c] = '\0';
  local_130[0x2d] = '\0';
  local_130[0x2e] = '\0';
  local_130[0x2f] = '\0';
  local_130[0x20] = '\0';
  local_130[0x21] = '\0';
  local_130[0x22] = '\0';
  local_130[0x23] = '\0';
  local_130[0x24] = '\0';
  local_130[0x25] = '\0';
  local_130[0x26] = '\0';
  local_130[0x27] = '\0';
  local_130[0x38] = '\0';
  local_130[0x39] = '\0';
  local_130[0x3a] = '\0';
  local_130[0x3b] = '\0';
  local_130[0x3c] = '\0';
  local_130[0x3d] = '\0';
  local_130[0x3e] = '\0';
  local_130[0x3f] = '\0';
  local_130[0x30] = '\0';
  local_130[0x31] = '\0';
  local_130[0x32] = '\0';
  local_130[0x33] = '\0';
  local_130[0x34] = '\0';
  local_130[0x35] = '\0';
  local_130[0x36] = '\0';
  local_130[0x37] = '\0';
  local_130[0x48] = '\0';
  local_130[0x49] = '\0';
  local_130[0x4a] = '\0';
  local_130[0x4b] = '\0';
  local_130[0x4c] = '\0';
  local_130[0x4d] = '\0';
  local_130[0x4e] = '\0';
  local_130[0x4f] = '\0';
  local_130[0x40] = '\0';
  local_130[0x41] = '\0';
  local_130[0x42] = '\0';
  local_130[0x43] = '\0';
  local_130[0x44] = '\0';
  local_130[0x45] = '\0';
  local_130[0x46] = '\0';
  local_130[0x47] = '\0';
  local_130[0x58] = '\0';
  local_130[0x59] = '\0';
  local_130[0x5a] = '\0';
  local_130[0x5b] = '\0';
  local_130[0x5c] = '\0';
  local_130[0x5d] = '\0';
  local_130[0x5e] = '\0';
  local_130[0x5f] = '\0';
  local_130[0x50] = '\0';
  local_130[0x51] = '\0';
  local_130[0x52] = '\0';
  local_130[0x53] = '\0';
  local_130[0x54] = '\0';
  local_130[0x55] = '\0';
  local_130[0x56] = '\0';
  local_130[0x57] = '\0';
  local_1a0[0x60] = '\0';
  local_1a0[0x61] = '\0';
  local_1a0[0x62] = '\0';
  local_1a0[99] = '\0';
  local_1a0[8] = '\0';
  local_1a0[9] = '\0';
  local_1a0[10] = '\0';
  local_1a0[0xb] = '\0';
  local_1a0[0xc] = '\0';
  local_1a0[0xd] = '\0';
  local_1a0[0xe] = '\0';
  local_1a0[0xf] = '\0';
  local_1a0[0] = '\0';
  local_1a0[1] = '\0';
  local_1a0[2] = '\0';
  local_1a0[3] = '\0';
  local_1a0[4] = '\0';
  local_1a0[5] = '\0';
  local_1a0[6] = '\0';
  local_1a0[7] = '\0';
  local_1a0[0x18] = '\0';
  local_1a0[0x19] = '\0';
  local_1a0[0x1a] = '\0';
  local_1a0[0x1b] = '\0';
  local_1a0[0x1c] = '\0';
  local_1a0[0x1d] = '\0';
  local_1a0[0x1e] = '\0';
  local_1a0[0x1f] = '\0';
  local_1a0[0x10] = '\0';
  local_1a0[0x11] = '\0';
  local_1a0[0x12] = '\0';
  local_1a0[0x13] = '\0';
  local_1a0[0x14] = '\0';
  local_1a0[0x15] = '\0';
  local_1a0[0x16] = '\0';
  local_1a0[0x17] = '\0';
  local_1a0[0x28] = '\0';
  local_1a0[0x29] = '\0';
  local_1a0[0x2a] = '\0';
  local_1a0[0x2b] = '\0';
  local_1a0[0x2c] = '\0';
  local_1a0[0x2d] = '\0';
  local_1a0[0x2e] = '\0';
  local_1a0[0x2f] = '\0';
  local_1a0[0x20] = '\0';
  local_1a0[0x21] = '\0';
  local_1a0[0x22] = '\0';
  local_1a0[0x23] = '\0';
  local_1a0[0x24] = '\0';
  local_1a0[0x25] = '\0';
  local_1a0[0x26] = '\0';
  local_1a0[0x27] = '\0';
  local_1a0[0x38] = '\0';
  local_1a0[0x39] = '\0';
  local_1a0[0x3a] = '\0';
  local_1a0[0x3b] = '\0';
  local_1a0[0x3c] = '\0';
  local_1a0[0x3d] = '\0';
  local_1a0[0x3e] = '\0';
  local_1a0[0x3f] = '\0';
  local_1a0[0x30] = '\0';
  local_1a0[0x31] = '\0';
  local_1a0[0x32] = '\0';
  local_1a0[0x33] = '\0';
  local_1a0[0x34] = '\0';
  local_1a0[0x35] = '\0';
  local_1a0[0x36] = '\0';
  local_1a0[0x37] = '\0';
  local_1a0[0x48] = '\0';
  local_1a0[0x49] = '\0';
  local_1a0[0x4a] = '\0';
  local_1a0[0x4b] = '\0';
  local_1a0[0x4c] = '\0';
  local_1a0[0x4d] = '\0';
  local_1a0[0x4e] = '\0';
  local_1a0[0x4f] = '\0';
  local_1a0[0x40] = '\0';
  local_1a0[0x41] = '\0';
  local_1a0[0x42] = '\0';
  local_1a0[0x43] = '\0';
  local_1a0[0x44] = '\0';
  local_1a0[0x45] = '\0';
  local_1a0[0x46] = '\0';
  local_1a0[0x47] = '\0';
  local_1a0[0x58] = '\0';
  local_1a0[0x59] = '\0';
  local_1a0[0x5a] = '\0';
  local_1a0[0x5b] = '\0';
  local_1a0[0x5c] = '\0';
  local_1a0[0x5d] = '\0';
  local_1a0[0x5e] = '\0';
  local_1a0[0x5f] = '\0';
  local_1a0[0x50] = '\0';
  local_1a0[0x51] = '\0';
  local_1a0[0x52] = '\0';
  local_1a0[0x53] = '\0';
  local_1a0[0x54] = '\0';
  local_1a0[0x55] = '\0';
  local_1a0[0x56] = '\0';
  local_1a0[0x57] = '\0';
  FUN_003cd8cc(auStack_c8,"default-digest",local_130,100);
  FUN_003cd8cc(&local_1c8,"mandatory-digest",local_1a0,100);
  local_80 = local_1a8;
  uStack_98 = uStack_1c0;
  local_a0 = local_1c8;
  uStack_88 = uStack_1b0;
  uStack_90 = local_1b8;
  FUN_003cdfcc(&local_1c8);
  uStack_70 = uStack_1c0;
  local_78 = local_1c8;
  uStack_60 = uStack_1b0;
  local_68 = local_1b8;
  local_58 = local_1a8;
  iVar2 = FUN_003a084c(param_1,param_2,auStack_c8);
  if (iVar2 == 0) {
    uVar5 = 0;
  }
  else {
    iVar2 = FUN_003cb1f8(&local_a0);
    if (iVar2 == 0) {
      iVar2 = FUN_003cb1f8(auStack_c8);
      if (iVar2 == 0) {
        return 0xfffffffe;
      }
      puVar3 = &uStack_a8;
      uVar5 = 1;
      pcVar4 = local_130;
    }
    else {
      puVar3 = &local_80;
      uVar5 = 2;
      pcVar4 = local_1a0;
    }
    pcVar1 = "UNDEF";
    if (1 < *puVar3) {
      pcVar1 = pcVar4;
    }
    FUN_003ca460(param_3,pcVar1,param_4);
  }
  return uVar5;
}


// ===== 003a00a0  FUN_003a00a0 =====

long FUN_003a00a0(long param_1,undefined4 param_2)

{
  long lVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(code **)(param_1 + 0x90) != (code *)0x0) {
    lVar1 = (**(code **)(param_1 + 0x90))(param_2);
    if (lVar1 != 0) {
      return lVar1;
    }
  }
  lVar1 = FUN_003a0640(param_1);
  return lVar1;
}


// ===== 003a00ec  FUN_003a00ec =====

void FUN_003a00ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00382d14(param_1,10,param_2,param_3,FUN_003a0114,PTR_FUN_007a1b00,PTR_FUN_007a1af8);
  return;
}


// ===== 003a0114  FUN_003a0114 =====

/* WARNING: Type propagation algorithm not settling */

long FUN_003a0114(undefined4 param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  long *plVar18;
  long lVar19;
  uint local_64;
  
  lVar19 = *(long *)(param_2 + 0x10);
  lVar9 = FUN_003c8474(0xe8,"crypto/evp/keymgmt_meth.c",0x18);
  if (lVar9 == 0) {
    return 0;
  }
  *(undefined4 *)(lVar9 + 4) = param_1;
  *(undefined4 *)(lVar9 + 0x20) = 1;
  lVar10 = FUN_003c34fc(param_2);
  *(long *)(lVar9 + 8) = lVar10;
  if (lVar10 == 0) {
    iVar17 = *(int *)(lVar9 + 0x20);
    iVar16 = iVar17 + -1;
    *(int *)(lVar9 + 0x20) = iVar16;
    if (iVar16 == 0 || iVar17 < 1) {
      FUN_003c86b4(0,"crypto/evp/keymgmt_meth.c",0x106);
      FUN_003d27b0(*(undefined8 *)(lVar9 + 0x18));
      FUN_003c86b4(lVar9,"crypto/evp/keymgmt_meth.c",0x109);
    }
    return 0;
  }
  uVar14 = 0;
  uVar15 = 0;
  uVar13 = 0;
  uVar12 = 0;
  iVar16 = 0;
  iVar17 = 0;
  *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)(param_2 + 0x18);
  plVar1 = (long *)(lVar9 + 0x98);
  plVar2 = (long *)(lVar9 + 0x88);
  plVar3 = (long *)(lVar9 + 0x30);
  plVar4 = (long *)(lVar9 + 0x80);
  plVar5 = (long *)(lVar9 + 0x78);
  plVar6 = (long *)(lVar9 + 0x58);
  plVar11 = (long *)(lVar19 + 8);
  plVar7 = (long *)(lVar9 + 0x28);
  local_64 = 0;
  do {
    switch((int)plVar11[-1]) {
    case 0:
      if (((*plVar3 != 0) &&
          ((((*plVar7 != 0 || (*plVar5 != 0)) || (*plVar2 != 0)) &&
           ((*plVar1 != 0 && ((uVar15 & 0xfffffffd) == 0)))))) &&
         (((uVar14 & 0xfffffffd) == 0 &&
          (((((local_64 & 0xfffffffd) == 0 && ((uVar13 & 0xfffffffd) == 0)) &&
            ((uVar12 & 0xfffffffd) == 0)) && ((*plVar5 == 0 || ((*plVar6 != 0 && (*plVar4 != 0))))))
          )))) {
        *(long *)(lVar9 + 0x18) = param_3;
        if (param_3 != 0) {
          FUN_003d2754(param_3);
          return lVar9;
        }
        return lVar9;
      }
      iVar17 = *(int *)(lVar9 + 0x20);
      iVar16 = iVar17 + -1;
      *(int *)(lVar9 + 0x20) = iVar16;
      if (iVar16 == 0 || iVar17 < 1) {
        FUN_003c86b4(lVar10,"crypto/evp/keymgmt_meth.c",0x106);
        FUN_003d27b0(*(undefined8 *)(lVar9 + 0x18));
        FUN_003c86b4(lVar9,"crypto/evp/keymgmt_meth.c",0x109);
      }
      FUN_00379868();
      FUN_0037995c("crypto/evp/keymgmt_meth.c",0xd6,"keymgmt_from_algorithm");
      FUN_00379a5c(6,0xc1,0);
      return 0;
    case 1:
      lVar19 = *plVar7;
      plVar18 = plVar7;
      goto joined_r0x003a0384;
    case 2:
      lVar19 = *plVar6;
      plVar18 = plVar6;
joined_r0x003a0384:
      if (lVar19 != 0) goto switchD_003a0264_caseD_9;
      goto LAB_003a0240;
    case 3:
      lVar19 = *(long *)(lVar9 + 0x60);
      plVar18 = (long *)(lVar9 + 0x60);
      break;
    case 4:
      lVar19 = *(long *)(lVar9 + 0x68);
      plVar18 = (long *)(lVar9 + 0x68);
      goto joined_r0x003a03d4;
    case 5:
      lVar19 = *(long *)(lVar9 + 0x70);
      plVar18 = (long *)(lVar9 + 0x70);
joined_r0x003a03d4:
      if (lVar19 != 0) goto switchD_003a0264_caseD_9;
      local_64 = local_64 + 1;
      goto LAB_003a0240;
    case 6:
      lVar19 = *plVar5;
      plVar18 = plVar5;
      break;
    case 7:
      lVar19 = *plVar4;
      plVar18 = plVar4;
      break;
    case 8:
      lVar19 = *plVar2;
      plVar18 = plVar2;
      break;
    default:
      goto switchD_003a0264_caseD_9;
    case 10:
      lVar19 = *plVar3;
      plVar18 = plVar3;
      break;
    case 0xb:
      if (*(long *)(lVar9 + 0x38) != 0) goto switchD_003a0264_caseD_9;
      uVar15 = uVar15 + 1;
      plVar18 = (long *)(lVar9 + 0x38);
      goto LAB_003a0240;
    case 0xc:
      if (*(long *)(lVar9 + 0x40) == 0) {
        uVar15 = uVar15 + 1;
        plVar18 = (long *)(lVar9 + 0x40);
        goto LAB_003a0240;
      }
      goto switchD_003a0264_caseD_9;
    case 0xd:
      if (*(long *)(lVar9 + 0x48) == 0) {
        uVar14 = uVar14 + 1;
        plVar18 = (long *)(lVar9 + 0x48);
        goto LAB_003a0240;
      }
      goto switchD_003a0264_caseD_9;
    case 0xe:
      if (*(long *)(lVar9 + 0x50) == 0) {
        uVar14 = uVar14 + 1;
        plVar18 = (long *)(lVar9 + 0x50);
        goto LAB_003a0240;
      }
      goto switchD_003a0264_caseD_9;
    case 0x14:
      lVar19 = *(long *)(lVar9 + 0x90);
      plVar18 = (long *)(lVar9 + 0x90);
      break;
    case 0x15:
      lVar19 = *plVar1;
      plVar18 = plVar1;
      break;
    case 0x16:
      lVar19 = *(long *)(lVar9 + 0xa0);
      plVar18 = (long *)(lVar9 + 0xa0);
      break;
    case 0x17:
      lVar19 = *(long *)(lVar9 + 0xa8);
      plVar18 = (long *)(lVar9 + 0xa8);
      break;
    case 0x28:
      if (*(long *)(lVar9 + 0xb0) == 0) {
        uVar13 = uVar13 + 1;
        plVar18 = (long *)(lVar9 + 0xb0);
        goto LAB_003a0240;
      }
      goto switchD_003a0264_caseD_9;
    case 0x29:
      lVar19 = *(long *)(lVar9 + 0xb8);
      plVar18 = (long *)(lVar9 + 0xb8);
      goto joined_r0x003a02fc;
    case 0x2a:
      if (*(long *)(lVar9 + 200) == 0) {
        uVar12 = uVar12 + 1;
        plVar18 = (long *)(lVar9 + 200);
        goto LAB_003a0240;
      }
      goto switchD_003a0264_caseD_9;
    case 0x2b:
      lVar19 = *(long *)(lVar9 + 0xd0);
      plVar18 = (long *)(lVar9 + 0xd0);
      goto joined_r0x003a0280;
    case 0x2c:
      lVar19 = *(long *)(lVar9 + 0xe0);
      plVar18 = (long *)(lVar9 + 0xe0);
      break;
    case 0x2d:
      lVar19 = *(long *)(lVar9 + 0xc0);
      plVar18 = (long *)(lVar9 + 0xc0);
joined_r0x003a02fc:
      if (lVar19 != 0) goto switchD_003a0264_caseD_9;
      bVar8 = iVar16 == 0;
      iVar16 = iVar16 + 1;
      if (bVar8) {
        uVar13 = uVar13 + 1;
      }
      goto LAB_003a0240;
    case 0x2e:
      lVar19 = *(long *)(lVar9 + 0xd8);
      plVar18 = (long *)(lVar9 + 0xd8);
joined_r0x003a0280:
      if (lVar19 != 0) goto switchD_003a0264_caseD_9;
      bVar8 = iVar17 == 0;
      iVar17 = iVar17 + 1;
      if (bVar8) {
        uVar12 = uVar12 + 1;
      }
      goto LAB_003a0240;
    }
    if (lVar19 == 0) {
LAB_003a0240:
      *plVar18 = *plVar11;
    }
switchD_003a0264_caseD_9:
    plVar11 = plVar11 + 2;
  } while( true );
}


// ===== 003a0584  FUN_003a0584 =====

undefined8 FUN_003a0584(long param_1)

{
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  return 1;
}


// ===== 003a059c  FUN_003a059c =====

void FUN_003a059c(long param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != 0) &&
     (iVar1 = *(int *)(param_1 + 0x20), iVar2 = iVar1 + -1, *(int *)(param_1 + 0x20) = iVar2,
     iVar2 == 0 || iVar1 < 1)) {
    FUN_003c86b4(*(undefined8 *)(param_1 + 8),"crypto/evp/keymgmt_meth.c",0x106);
    FUN_003d27b0(*(undefined8 *)(param_1 + 0x18));
    FUN_003c86b4(param_1,"crypto/evp/keymgmt_meth.c",0x109);
    return;
  }
  return;
}


// ===== 003a0600  FUN_003a0600 =====

void FUN_003a0600(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00382990(param_1,10,param_2,param_3,FUN_003a0114,PTR_FUN_007a1b00,PTR_FUN_007a1af8);
  return;
}


// ===== 003a0628  FUN_003a0628 =====

undefined8 FUN_003a0628(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


// ===== 003a0630  FUN_003a0630 =====

undefined4 FUN_003a0630(long param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


// ===== 003a0638  FUN_003a0638 =====

undefined8 FUN_003a0638(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


// ===== 003a0640  FUN_003a0640 =====

undefined8 FUN_003a0640(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


// ===== 003a0648  FUN_003a0648 =====

ulong FUN_003a0648(ulong param_1,undefined8 param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = FUN_00383528(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 4),0,param_2);
    param_1 = (ulong)(iVar1 != 0);
  }
  return param_1;
}


// ===== 003a067c  FUN_003a067c =====

void FUN_003a067c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0038345c(param_1,10,param_2,param_3,FUN_003a0114,PTR_FUN_007a1b00,PTR_FUN_007a1af8);
  return;
}


// ===== 003a06a4  FUN_003a06a4 =====

undefined8 FUN_003a06a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = FUN_00383588(*(long *)(param_1 + 0x18),*(undefined4 *)(param_1 + 4),param_2,param_3);
    return uVar1;
  }
  return 1;
}


// ===== 003a06c8  FUN_003a06c8 =====

undefined8 FUN_003a06c8(long param_1)

{
  undefined8 uVar1;
  
  FUN_003d3bf8(*(undefined8 *)(param_1 + 0x18));
  if (*(code **)(param_1 + 0x28) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003a06f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x28))();
    return uVar1;
  }
  return 0;
}


// ===== 003a0704  FUN_003a0704 =====

void FUN_003a0704(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x003a070c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x30))(param_2);
  return;
}


// ===== 003a0710  FUN_003a0710 =====

undefined8 FUN_003a0710(long param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_003d3bf8(*(undefined8 *)(param_1 + 0x18));
  if (*(code **)(param_1 + 0x58) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003a0750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x58))(uVar1,param_2,param_3);
    return uVar1;
  }
  return 0;
}


// ===== 003a0768  FUN_003a0768 =====

undefined8 FUN_003a0768(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(code **)(param_1 + 0x60) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003a0778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x60))(param_2,param_3);
    return uVar1;
  }
  return 1;
}


// ===== 003a0784  FUN_003a0784 =====

undefined8 FUN_003a0784(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(code **)(param_1 + 0x68) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003a0794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x68))(param_2,param_3);
    return uVar1;
  }
  return 0;
}


// ===== 003a07a0  FUN_003a07a0 =====

undefined8 FUN_003a07a0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_003d3bf8(*(undefined8 *)(param_1 + 0x18));
  if (*(code **)(param_1 + 0x70) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003a07d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x70))(0,uVar1);
    return uVar1;
  }
  return 0;
}


// ===== 003a07e4  FUN_003a07e4 =====

undefined8 FUN_003a07e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (*(code **)(param_1 + 0x78) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003a07f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x78))(param_2,param_3,param_4);
    return uVar1;
  }
  return 0;
}


// ===== 003a0804  FUN_003a0804 =====

void FUN_003a0804(long param_1,undefined8 param_2)

{
  if (*(code **)(param_1 + 0x80) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003a0810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x80))(param_2);
    return;
  }
  return;
}


// ===== 003a0818  FUN_003a0818 =====

ulong FUN_003a0818(ulong param_1)

{
  if (param_1 != 0) {
    param_1 = (ulong)(*(long *)(param_1 + 0x88) != 0);
  }
  return param_1;
}


// ===== 003a082c  FUN_003a082c =====

undefined8 FUN_003a082c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (*(code **)(param_1 + 0x88) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x003a0840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x88))(param_2,param_3);
    return uVar1;
  }
  return 0;
}


// ===== 003a084c  FUN_003a084c =====

undefined8 FUN_003a084c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(code **)(param_1 + 0x38) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003a085c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x38))(param_2,param_3);
    return uVar1;
  }
  return 1;
}


// ===== 003a0868  FUN_003a0868 =====

undefined8 FUN_003a0868(long param_1)

{
  undefined8 uVar1;
  
  FUN_003d3bf8(*(undefined8 *)(param_1 + 0x18));
  if (*(code **)(param_1 + 0x40) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003a0890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x40))();
    return uVar1;
  }
  return 0;
}


// ===== 003a08a4  FUN_003a08a4 =====

undefined8 FUN_003a08a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(code **)(param_1 + 0x48) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003a08b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x48))(param_2,param_3);
    return uVar1;
  }
  return 1;
}


// ===== 003a08c0  FUN_003a08c0 =====

undefined8 FUN_003a08c0(long param_1)

{
  undefined8 uVar1;
  
  FUN_003d3bf8(*(undefined8 *)(param_1 + 0x18));
  if (*(code **)(param_1 + 0x50) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003a08e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x50))();
    return uVar1;
  }
  return 0;
}


// ===== 003a08fc  FUN_003a08fc =====

void FUN_003a08fc(long param_1,undefined8 param_2,undefined4 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x003a0908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x98))(param_2,param_3);
  return;
}


// ===== 003a090c  FUN_003a090c =====

undefined8 FUN_003a090c(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  if (*(code **)(param_1 + 0xa0) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003a0920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0xa0))(param_2,param_3,param_4);
    return uVar1;
  }
  return 1;
}


// ===== 003a092c  FUN_003a092c =====

undefined8 FUN_003a092c(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  if (*(code **)(param_1 + 0xa8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003a0940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0xa8))(param_2,param_3,param_4);
    return uVar1;
  }
  return 0;
}


// ===== 003a094c  FUN_003a094c =====

undefined8 FUN_003a094c(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (*(code **)(param_1 + 0xb0) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003a0960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0xb0))(param_2,param_3,param_4);
    return uVar1;
  }
  return 0;
}


// ===== 003a096c  FUN_003a096c =====

undefined8 FUN_003a096c(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_003d3bf8(*(undefined8 *)(param_1 + 0x18));
  if (*(code **)(param_1 + 0xc0) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003a099c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0xc0))(uVar1,param_2);
    return uVar1;
  }
  if (*(code **)(param_1 + 0xb8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003a09b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0xb8))(param_2);
    return uVar1;
  }
  return 0;
}


// ===== 003a09c8  FUN_003a09c8 =====

undefined8
FUN_003a09c8(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 uVar1;
  
  if (*(code **)(param_1 + 200) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003a09e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 200))(param_2,param_3,param_4,param_5);
    return uVar1;
  }
  return 0;
}


// ===== 003a09ec  FUN_003a09ec =====

undefined8 FUN_003a09ec(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_003d3bf8(*(undefined8 *)(param_1 + 0x18));
  if (*(code **)(param_1 + 0xd8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003a0a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0xd8))(uVar1,param_2);
    return uVar1;
  }
  if (*(code **)(param_1 + 0xd0) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003a0a34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0xd0))(param_2);
    return uVar1;
  }
  return 0;
}


// ===== 003a0a48  FUN_003a0a48 =====

undefined8 FUN_003a0a48(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  if (*(code **)(param_1 + 0xe0) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003a0a58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0xe0))(param_2,param_3);
    return uVar1;
  }
  return 0;
}


// ===== 003a0a64  FUN_003a0a64 =====

void FUN_003a0a64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_003a0aa4(param_1,param_2,0,param_3,param_4,param_5,0,param_6,0,param_7);
  return;
}


// ===== 003a0aa4  FUN_003a0aa4 =====

ulong FUN_003a0aa4(long *param_1,long *param_2,long param_3,char *param_4,undefined8 param_5,
                  long param_6,long param_7,long param_8,int param_9,undefined8 param_10)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined4 uVar10;
  uint uVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long local_68;
  
  local_68 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uVar3 = FUN_0039d2ec();
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  lVar13 = param_1[5];
  if (lVar13 == 0) {
    if (param_7 == 0) {
      lVar6 = FUN_003b1de8(param_5,param_8,param_6);
      param_1[5] = lVar6;
      if (lVar6 == 0) {
        return 0;
      }
    }
    else {
      lVar6 = FUN_003b20b0(param_8,param_7);
      param_1[5] = lVar6;
      if (lVar6 == 0) {
        return 0;
      }
    }
  }
  FUN_00389e38(param_1,0x800);
  piVar12 = (int *)param_1[5];
  FUN_0037f6d4();
  if (*(long *)(piVar12 + 8) == 0) {
LAB_003a0f60:
    FUN_0037f71c();
    FUN_003a059c(local_68);
    local_68 = 0;
    if ((param_3 == 0) && (param_4 != (char *)0x0)) {
      param_3 = FUN_003a21e0(*(undefined8 *)(piVar12 + 2),param_4);
    }
    if (*(long *)(param_1[5] + 0x78) == 0) {
      FUN_00379868();
      FUN_0037995c("crypto/evp/m_sigver.c",300,"do_sigver_init");
      uVar8 = 0x96;
      goto LAB_003a1018;
    }
    if (((*(byte *)(*(long *)(param_1[5] + 0x78) + 4) >> 2 & 1) == 0) && (param_3 == 0)) {
      iVar2 = FUN_003a8444(param_8,&local_c4);
      if (0 < iVar2) {
        FUN_003dce44(local_c4);
        param_3 = FUN_003a213c();
        if (param_3 != 0) goto LAB_003a1028;
      }
      FUN_00379868();
      FUN_0037995c("crypto/evp/m_sigver.c",0x139,"do_sigver_init");
      uVar8 = 0x9e;
LAB_003a1018:
      FUN_00379a5c(6,uVar8,0);
      return 0;
    }
LAB_003a1028:
    puVar7 = (undefined4 *)param_1[5];
    lVar13 = *(long *)(puVar7 + 0x1e);
    if (param_9 == 0) {
      if (*(code **)(lVar13 + 0x70) != (code *)0x0) {
        iVar2 = (**(code **)(lVar13 + 0x70))(puVar7,param_1);
        if (iVar2 < 1) {
          return 0;
        }
        puVar7 = (undefined4 *)param_1[5];
        uVar10 = 0x80;
        goto LAB_003a107c;
      }
      if (*(long *)(lVar13 + 0xd0) != 0) {
        uVar10 = 0x10;
        goto LAB_003a10a0;
      }
      iVar2 = FUN_003b7c34();
joined_r0x003a115c:
      if (iVar2 < 1) {
        return 0;
      }
    }
    else if (*(code **)(lVar13 + 0x80) == (code *)0x0) {
      if (*(long *)(lVar13 + 0xd8) == 0) {
        iVar2 = FUN_003b8364();
        goto joined_r0x003a115c;
      }
      uVar10 = 0x20;
LAB_003a10a0:
      *puVar7 = uVar10;
      param_1[6] = (long)FUN_003a1e88;
    }
    else {
      iVar2 = (**(code **)(lVar13 + 0x80))(puVar7,param_1);
      if (iVar2 < 1) {
        return 0;
      }
      puVar7 = (undefined4 *)param_1[5];
      uVar10 = 0x100;
LAB_003a107c:
      *puVar7 = uVar10;
    }
    iVar2 = FUN_003b2f9c(param_1[5],param_3);
    if (iVar2 < 1) {
      return 0;
    }
    lVar13 = param_1[5];
    if (param_2 != (long *)0x0) {
      *param_2 = lVar13;
    }
    if ((*(byte *)(*(long *)(lVar13 + 0x78) + 4) >> 2 & 1) != 0) {
      return 1;
    }
    uVar3 = FUN_0039d92c(param_1,param_3,param_7);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    *(byte *)(param_1[5] + 0xa0) = *(byte *)(param_1[5] + 0xa0) & 0xfe;
    lVar13 = param_1[5];
    if (*(long *)(*(long *)(lVar13 + 0x78) + 0xf8) != 0) {
      *(byte *)(lVar13 + 0xa0) = *(byte *)(lVar13 + 0xa0) | 1;
    }
LAB_003a111c:
    iVar2 = FUN_003b4048(piVar12);
    uVar11 = (uint)(0 < iVar2);
LAB_003a112c:
    FUN_003a059c(local_68);
    return (ulong)uVar11;
  }
  if ((param_8 == 0) && (lVar13 != 0)) {
    iVar2 = 0x80;
    if (param_9 != 0) {
      iVar2 = 0x100;
    }
    if (*piVar12 != iVar2) goto LAB_003a0bf0;
    lVar13 = *(long *)(piVar12 + 10);
    if (lVar13 != 0) {
      bVar1 = *(long *)(piVar12 + 0xc) != 0;
      goto joined_r0x003a0bf0;
    }
    bVar1 = false;
    if (param_6 != 0) goto LAB_003a0bf4;
LAB_003a0b78:
    param_6 = *(long *)(piVar12 + 4);
    if (*(long *)(piVar12 + 0x22) == 0) goto LAB_003a0b84;
LAB_003a0bfc:
    if (bVar1) {
      if (((param_3 == 0 && param_4 == (char *)0x0) &&
          (param_4 = (char *)FUN_0038996c(*param_1), param_4 != (char *)0x0)) &&
         (iVar2 = strcmp(param_4,"UNDEF"), iVar2 == 0)) {
        param_4 = (char *)0x0;
      }
      lVar14 = 0;
LAB_003a0c34:
      if (param_2 != (long *)0x0) {
        *param_2 = (long)piVar12;
      }
      if (param_3 == 0) {
        if (param_4 != (char *)0x0) {
          bVar1 = true;
        }
        if (!bVar1) {
          iVar2 = FUN_0039ff4c(local_68,lVar14,&local_c0,0x50);
          if (0 < iVar2) {
            if ((int)local_c0 != 0x45444e55 || local_c0._4_2_ != 0x46) {
              param_4 = (char *)&local_c0;
              goto LAB_003a0db4;
            }
          }
          goto LAB_003a0e08;
        }
        if (param_4 != (char *)0x0) {
LAB_003a0db4:
          FUN_0039cf10(param_1,1,0);
          FUN_0037f6d4();
          lVar6 = FUN_0039e6f4(*(undefined8 *)(piVar12 + 2),param_4,param_6);
          param_1[8] = lVar6;
          if (lVar6 == 0) {
            lVar6 = FUN_003a213c(param_4);
            *param_1 = lVar6;
            param_1[1] = lVar6;
            if (lVar6 == 0) {
              FUN_0037f8c4();
              FUN_00379868();
              uVar8 = 0xf8;
              goto LAB_003a1220;
            }
          }
          else {
            *param_1 = lVar6;
            param_1[1] = lVar6;
          }
          FUN_0037f71c();
        }
      }
      else {
        *param_1 = param_3;
        if (((param_4 == (char *)0x0) &&
            (param_4 = (char *)FUN_0038996c(param_3), param_4 != (char *)0x0)) &&
           (iVar2 = strcmp(param_4,"UNDEF"), iVar2 == 0)) {
LAB_003a0e08:
          param_4 = (char *)0x0;
        }
      }
      if (param_9 == 0) {
        pcVar9 = *(code **)(lVar13 + 0x60);
        if (pcVar9 == (code *)0x0) {
          FUN_00379868();
          uVar8 = 0x109;
          goto LAB_003a1220;
        }
      }
      else {
        pcVar9 = *(code **)(lVar13 + 0x80);
        if (pcVar9 == (code *)0x0) {
          FUN_00379868();
          uVar8 = 0x102;
LAB_003a1220:
          FUN_0037995c("crypto/evp/m_sigver.c",uVar8,"do_sigver_init");
          uVar8 = 0x86;
          goto LAB_003a122c;
        }
      }
      iVar2 = (*pcVar9)(*(undefined8 *)(piVar12 + 0xc),param_4,lVar14,param_10);
      if ((param_4 != (char *)0x0) || (0 < iVar2)) {
        if (iVar2 < 1) {
          uVar11 = 0;
          goto LAB_003a112c;
        }
        goto LAB_003a111c;
      }
      if (param_3 != 0) goto LAB_003a1234;
      FUN_00379868();
      FUN_0037995c("crypto/evp/m_sigver.c",0x117,"do_sigver_init");
      uVar8 = 0x9e;
    }
    else {
      FUN_003b1dfc(piVar12);
      if ((*(long *)(*(long *)(piVar12 + 0x22) + 0x60) == 0) ||
         (*(long *)(*(long *)(piVar12 + 0x22) + 0x60) == *(long *)(piVar12 + 8))) {
        lVar6 = FUN_003a00a0(*(long *)(piVar12 + 8),0xc);
        if (lVar6 == 0) {
          FUN_0037f8c4();
          FUN_00379868();
          uVar8 = 0x72;
        }
        else {
          FUN_003b7590(lVar13);
          FUN_003a059c(local_68);
          lVar13 = FUN_003b7614(*(undefined8 *)(piVar12 + 2),lVar6,*(undefined8 *)(piVar12 + 4));
          if (lVar13 == 0) {
            lVar14 = 0;
          }
          else {
            uVar8 = FUN_003b760c(lVar13);
            uVar4 = FUN_003a0640(*(undefined8 *)(piVar12 + 8));
            lVar5 = FUN_003a00ec(uVar8,uVar4,*(undefined8 *)(piVar12 + 4));
            local_68 = lVar5;
            if (lVar5 == 0) {
              lVar14 = 0;
            }
            else {
              lVar14 = FUN_003a6930(*(undefined8 *)(piVar12 + 0x22),*(undefined8 *)(piVar12 + 2),
                                    &local_68,*(undefined8 *)(piVar12 + 4));
              if (local_68 != 0) goto LAB_003a0ee0;
            }
            FUN_003a059c(lVar5);
          }
LAB_003a0ee0:
          if (lVar14 == 0) {
            FUN_003b7590(lVar13);
            FUN_003a059c(local_68);
            uVar8 = FUN_003a0628(*(undefined8 *)(piVar12 + 8));
            lVar13 = FUN_003b7ae4(uVar8,lVar6,*(undefined8 *)(piVar12 + 4));
            if (lVar13 == 0) goto LAB_003a0f60;
            uVar4 = FUN_003a0640(*(undefined8 *)(piVar12 + 8));
            lVar6 = FUN_003a00ec(uVar8,uVar4,*(undefined8 *)(piVar12 + 4));
            local_68 = lVar6;
            if (lVar6 == 0) {
              lVar14 = 0;
            }
            else {
              lVar14 = FUN_003a6930(*(undefined8 *)(piVar12 + 0x22),*(undefined8 *)(piVar12 + 2),
                                    &local_68,*(undefined8 *)(piVar12 + 4));
              if (local_68 != 0) goto LAB_003a1198;
            }
            FUN_003a059c(lVar6);
          }
LAB_003a1198:
          if (lVar14 == 0) {
            FUN_003b7590(lVar13);
            FUN_0037f8c4();
            FUN_00379868();
            uVar8 = 0xbd;
          }
          else {
            FUN_0037f71c();
            *(long *)(piVar12 + 10) = lVar13;
            uVar8 = *(undefined8 *)(lVar13 + 0x18);
            pcVar9 = *(code **)(lVar13 + 0x28);
            iVar2 = 0x80;
            if (param_9 != 0) {
              iVar2 = 0x100;
            }
            *piVar12 = iVar2;
            uVar8 = FUN_003d3bf8(uVar8);
            lVar6 = (*pcVar9)(uVar8,param_6);
            *(long *)(piVar12 + 0xc) = lVar6;
            if (lVar6 != 0) goto LAB_003a0c34;
            FUN_00379868();
            uVar8 = 0xcb;
          }
        }
        goto LAB_003a1220;
      }
      FUN_0037f8c4();
      FUN_00379868();
      FUN_0037995c("crypto/evp/m_sigver.c",0x6b,"do_sigver_init");
      uVar8 = 0xc0103;
    }
  }
  else {
LAB_003a0bf0:
    bVar1 = false;
    lVar13 = 0;
joined_r0x003a0bf0:
    if (param_6 == 0) goto LAB_003a0b78;
LAB_003a0bf4:
    if (*(long *)(piVar12 + 0x22) != 0) goto LAB_003a0bfc;
LAB_003a0b84:
    FUN_0037f8c4();
    FUN_00379868();
    FUN_0037995c("crypto/evp/m_sigver.c",0x59,"do_sigver_init");
    uVar8 = 0x9a;
  }
LAB_003a122c:
  FUN_00379a5c(6,uVar8,0);
LAB_003a1234:
  FUN_003b1dfc(piVar12);
  *piVar12 = 0;
  FUN_003a059c(local_68);
  return 0;
}


// ===== 003a126c  FUN_003a126c =====

void FUN_003a126c(void)

{
  FUN_003a0aa4();
  return;
}


// ===== 003a12a4  FUN_003a12a4 =====

void FUN_003a12a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_003a0aa4(param_1,param_2,0,param_3,param_4,param_5,0,param_6,1,param_7);
  return;
}


// ===== 003a12e8  FUN_003a12e8 =====

void FUN_003a12e8(void)

{
  FUN_003a0aa4();
  return;
}


// ===== 003a1324  FUN_003a1324 =====

undefined8 FUN_003a1324(long param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  int *piVar4;
  
  if ((*(byte *)(param_1 + 0x19) >> 3 & 1) != 0) {
    FUN_00379868();
    FUN_0037995c("crypto/evp/m_sigver.c",0x197,"EVP_DigestSignUpdate");
    uVar3 = 0xbd;
LAB_003a13a0:
    FUN_00379a5c(6,uVar3,0);
    return 0;
  }
  piVar4 = *(int **)(param_1 + 0x28);
  if (piVar4 != (int *)0x0) {
    if (((*piVar4 == 0x80) && (*(long *)(piVar4 + 0xc) != 0)) && (*(long *)(piVar4 + 10) != 0)) {
      UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(piVar4 + 10) + 0x68);
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003a1378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*UNRECOVERED_JUMPTABLE)(*(long *)(piVar4 + 0xc));
        return uVar3;
      }
      FUN_00379868();
      FUN_0037995c("crypto/evp/m_sigver.c",0x1a2,"EVP_DigestSignUpdate");
      uVar3 = 0xc0101;
      goto LAB_003a13a0;
    }
    bVar1 = *(byte *)(piVar4 + 0x28);
    if ((bVar1 & 1) != 0) {
      iVar2 = (**(code **)(*(long *)(piVar4 + 0x1e) + 0xf8))(piVar4);
      if (iVar2 == 0) {
        return 0;
      }
      bVar1 = *(byte *)(piVar4 + 0x28);
    }
    *(byte *)(piVar4 + 0x28) = bVar1 & 0xfe;
  }
  uVar3 = FUN_0039d938(param_1,param_2,param_3);
  return uVar3;
}


// ===== 003a143c  FUN_003a143c =====

undefined8 FUN_003a143c(long param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  int *piVar4;
  
  if ((*(byte *)(param_1 + 0x19) >> 3 & 1) != 0) {
    FUN_00379868();
    FUN_0037995c("crypto/evp/m_sigver.c",0x1ba,"EVP_DigestVerifyUpdate");
    uVar3 = 0xbd;
LAB_003a14b8:
    FUN_00379a5c(6,uVar3,0);
    return 0;
  }
  piVar4 = *(int **)(param_1 + 0x28);
  if (piVar4 != (int *)0x0) {
    if (((*piVar4 == 0x100) && (*(long *)(piVar4 + 0xc) != 0)) && (*(long *)(piVar4 + 10) != 0)) {
      UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(piVar4 + 10) + 0x88);
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003a1490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*UNRECOVERED_JUMPTABLE)(*(long *)(piVar4 + 0xc));
        return uVar3;
      }
      FUN_00379868();
      FUN_0037995c("crypto/evp/m_sigver.c",0x1c5,"EVP_DigestVerifyUpdate");
      uVar3 = 0xc0101;
      goto LAB_003a14b8;
    }
    bVar1 = *(byte *)(piVar4 + 0x28);
    if ((bVar1 & 1) != 0) {
      iVar2 = (**(code **)(*(long *)(piVar4 + 0x1e) + 0xf8))(piVar4);
      if (iVar2 == 0) {
        return 0;
      }
      bVar1 = *(byte *)(piVar4 + 0x28);
    }
    *(byte *)(piVar4 + 0x28) = bVar1 & 0xfe;
  }
  uVar3 = FUN_0039d938(param_1,param_2,param_3);
  return uVar3;
}


// ===== 003a1554  FUN_003a1554 =====

ulong FUN_003a1554(long param_1,long param_2,undefined8 *param_3)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  code *pcVar8;
  int *piVar9;
  undefined4 local_84;
  undefined1 auStack_80 [64];
  
  uVar7 = (uint)*(undefined8 *)(param_1 + 0x18);
  if ((uVar7 >> 0xb & 1) == 0) {
    piVar9 = *(int **)(param_1 + 0x28);
    if (piVar9 != (int *)0x0) {
      if (((*piVar9 == 0x80) && (lVar6 = *(long *)(piVar9 + 0xc), lVar6 != 0)) &&
         (*(long *)(piVar9 + 10) != 0)) {
        if ((param_2 == 0) || ((uVar7 >> 9 & 1) != 0)) {
          pcVar8 = *(code **)(*(long *)(piVar9 + 10) + 0x70);
          if (param_2 == 0) {
            uVar4 = (*pcVar8)(lVar6,0,param_3,0);
            piVar3 = (int *)0x0;
            goto LAB_003a1878;
          }
          piVar3 = (int *)0x0;
          uVar4 = (*pcVar8)(lVar6,param_2,param_3,*param_3);
        }
        else {
          piVar3 = (int *)FUN_003b20e8(piVar9);
          if (piVar3 != (int *)0x0) {
            piVar9 = piVar3;
          }
          uVar4 = (**(code **)(*(long *)(piVar9 + 10) + 0x70))
                            (*(undefined8 *)(piVar9 + 0xc),param_2,param_3,*param_3);
        }
        if ((param_2 != 0) && (piVar3 == (int *)0x0)) {
          *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) | 0x800;
          return uVar4;
        }
LAB_003a1878:
        FUN_003b1f78(piVar3);
        return uVar4 & 0xffffffff;
      }
      lVar6 = *(long *)(piVar9 + 0x1e);
      if (lVar6 != 0) {
        bVar1 = *(byte *)(piVar9 + 0x28);
        if ((bVar1 & 1) != 0) {
          uVar4 = (**(code **)(lVar6 + 0xf8))(piVar9);
          if ((int)uVar4 == 0) {
            return uVar4;
          }
          bVar1 = *(byte *)(piVar9 + 0x28);
          lVar6 = *(long *)(piVar9 + 0x1e);
        }
        *(byte *)(piVar9 + 0x28) = bVar1 & 0xfe;
        if ((*(byte *)(lVar6 + 4) >> 2 & 1) != 0) {
          if (param_2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x003a1804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar4 = (**(code **)(lVar6 + 0x78))(piVar9,0,param_3,param_1);
            return uVar4;
          }
          if ((*(byte *)(param_1 + 0x19) >> 1 & 1) == 0) {
            lVar6 = FUN_003b20e8(piVar9);
            if (lVar6 == 0) {
              return 0;
            }
            uVar4 = (**(code **)(*(long *)(lVar6 + 0x78) + 0x78))(lVar6,param_2,param_3,param_1);
            FUN_003b1f78(lVar6);
            return uVar4 & 0xffffffff;
          }
          uVar4 = (**(code **)(lVar6 + 0x78))(piVar9,param_2,param_3,param_1);
          *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) | 0x800;
          return uVar4;
        }
        pcVar8 = *(code **)(lVar6 + 0x78);
        if (param_2 == 0) {
          if (pcVar8 == (code *)0x0) {
            iVar2 = FUN_00389a38(*(undefined8 *)(param_1 + 8));
            if (iVar2 < 0) {
              return 0;
            }
            iVar2 = FUN_003b8140(piVar9,0,param_3,0,iVar2);
          }
          else {
            iVar2 = (*pcVar8)(piVar9,0,param_3,param_1);
          }
        }
        else {
          local_84 = 0;
          if ((*(byte *)(param_1 + 0x19) >> 1 & 1) == 0) {
            lVar6 = FUN_0039d270();
            if (lVar6 == 0) {
              return 0;
            }
            iVar2 = FUN_0039e0a8(lVar6,param_1);
            if (iVar2 == 0) {
              FUN_0039d284(lVar6);
              return 0;
            }
            if (pcVar8 == (code *)0x0) {
              uVar4 = FUN_0039dac8(lVar6,auStack_80,&local_84);
            }
            else {
              uVar4 = (**(code **)(*(long *)(*(long *)(lVar6 + 0x28) + 0x78) + 0x78))
                                (*(long *)(lVar6 + 0x28),param_2,param_3,lVar6);
            }
            uVar4 = uVar4 & 0xffffffff;
            FUN_0039d284(lVar6);
          }
          else {
            if (pcVar8 != (code *)0x0) {
              uVar4 = (*pcVar8)(piVar9,param_2,param_3,param_1);
              return uVar4;
            }
            uVar4 = FUN_0039dac8(param_1,auStack_80,&local_84);
          }
          if (pcVar8 != (code *)0x0) {
            return uVar4;
          }
          if ((int)uVar4 == 0) {
            return uVar4;
          }
          iVar2 = FUN_003b8140(piVar9,param_2,param_3,auStack_80,local_84);
        }
        if (iVar2 < 1) {
          return 0;
        }
        return 1;
      }
    }
    FUN_00379868();
    FUN_0037995c("crypto/evp/m_sigver.c",0x1fb,"EVP_DigestSignFinal");
    uVar5 = 0x86;
  }
  else {
    FUN_00379868();
    FUN_0037995c("crypto/evp/m_sigver.c",0x1e0,"EVP_DigestSignFinal");
    uVar5 = 0xbc;
  }
  FUN_00379a5c(6,uVar5,0);
  return 0;
}


// ===== 003a1974  FUN_003a1974 =====

undefined8
FUN_003a1974(long param_1,long param_2,undefined8 *param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE_00;
  int *piVar3;
  
  if (((uint)*(ulong *)(param_1 + 0x18) >> 0xb & 1) == 0) {
    piVar3 = *(int **)(param_1 + 0x28);
    if ((((piVar3 == (int *)0x0) || (*piVar3 != 0x80)) || (*(long *)(piVar3 + 0xc) == 0)) ||
       (*(long *)(piVar3 + 10) == 0)) {
      if ((*(long *)(piVar3 + 0x1e) != 0) &&
         (UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)(piVar3 + 0x1e) + 0xd0),
         UNRECOVERED_JUMPTABLE_00 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x003a1a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*UNRECOVERED_JUMPTABLE_00)();
        return uVar2;
      }
    }
    else {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)(piVar3 + 10) + 0x78);
      if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
        if (param_2 != 0) {
          *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) | 0x800;
                    /* WARNING: Could not recover jumptable at 0x003a19e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar2 = (**(code **)(*(long *)(piVar3 + 10) + 0x78))
                            (*(undefined8 *)(piVar3 + 0xc),param_2,param_3,*param_3);
          return uVar2;
        }
                    /* WARNING: Could not recover jumptable at 0x003a1ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*UNRECOVERED_JUMPTABLE_00)(*(long *)(piVar3 + 0xc),0,param_3,0);
        return uVar2;
      }
    }
    if (param_2 == 0) {
      uVar2 = FUN_003a1554();
      return uVar2;
    }
    iVar1 = FUN_003a1324(param_1,param_4,param_5);
    if (0 < iVar1) {
      uVar2 = FUN_003a1554(param_1,param_2,param_3);
      return uVar2;
    }
  }
  else {
    FUN_00379868();
    FUN_0037995c("crypto/evp/m_sigver.c",0x249,"EVP_DigestSign");
    FUN_00379a5c(6,0xbc,0);
  }
  return 0;
}


// ===== 003a1abc  FUN_003a1abc =====

ulong FUN_003a1abc(long param_1,undefined8 param_2,ulong param_3)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  int *piVar8;
  code *pcVar9;
  undefined4 local_84;
  undefined1 auStack_80 [64];
  
  local_84 = 0;
  uVar7 = (uint)*(undefined8 *)(param_1 + 0x18);
  if ((uVar7 >> 0xb & 1) == 0) {
    piVar8 = *(int **)(param_1 + 0x28);
    if (piVar8 != (int *)0x0) {
      if (((*piVar8 == 0x100) && (*(long *)(piVar8 + 0xc) != 0)) && (*(long *)(piVar8 + 10) != 0)) {
        if ((uVar7 >> 9 & 1) == 0) {
          piVar3 = (int *)FUN_003b20e8(piVar8);
          if (piVar3 != (int *)0x0) {
            piVar8 = piVar3;
          }
          uVar4 = (**(code **)(*(long *)(piVar8 + 10) + 0x90))
                            (*(undefined8 *)(piVar8 + 0xc),param_2,param_3);
          if (piVar3 != (int *)0x0) {
            FUN_003b1f78(piVar3);
            return uVar4 & 0xffffffff;
          }
        }
        else {
          uVar4 = (**(code **)(*(long *)(piVar8 + 10) + 0x90))(*(long *)(piVar8 + 0xc));
        }
        *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) | 0x800;
        return uVar4;
      }
      lVar6 = *(long *)(piVar8 + 0x1e);
      if (lVar6 != 0) {
        bVar1 = *(byte *)(piVar8 + 0x28);
        if ((bVar1 & 1) != 0) {
          uVar4 = (**(code **)(lVar6 + 0xf8))(piVar8);
          if ((int)uVar4 == 0) {
            return uVar4;
          }
          bVar1 = *(byte *)(piVar8 + 0x28);
          lVar6 = *(long *)(piVar8 + 0x1e);
        }
        *(byte *)(piVar8 + 0x28) = bVar1 & 0xfe;
        pcVar9 = *(code **)(lVar6 + 0x88);
        if ((*(byte *)(param_1 + 0x19) >> 1 & 1) == 0) {
          lVar6 = FUN_0039d270();
          if (lVar6 == 0) {
            return 0xffffffff;
          }
          iVar2 = FUN_0039e0a8(lVar6,param_1);
          if (iVar2 == 0) {
            FUN_0039d284(lVar6);
            return 0xffffffff;
          }
          if (pcVar9 == (code *)0x0) {
            uVar4 = FUN_0039dac8(lVar6,auStack_80,&local_84);
          }
          else {
            uVar4 = (**(code **)(*(long *)(*(long *)(lVar6 + 0x28) + 0x78) + 0x88))
                              (*(long *)(lVar6 + 0x28),param_2,param_3 & 0xffffffff,lVar6);
          }
          uVar4 = uVar4 & 0xffffffff;
          FUN_0039d284(lVar6);
        }
        else {
          if (pcVar9 != (code *)0x0) {
            uVar4 = (*pcVar9)(piVar8,param_2,param_3,param_1);
            *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) | 0x800;
            return uVar4;
          }
          uVar4 = FUN_0039dac8(param_1,auStack_80,&local_84);
        }
        if (pcVar9 != (code *)0x0) {
          return uVar4;
        }
        if ((int)uVar4 == 0) {
          return uVar4;
        }
        uVar4 = FUN_003b837c(piVar8,param_2,param_3,auStack_80,local_84);
        return uVar4;
      }
    }
    FUN_00379868();
    FUN_0037995c("crypto/evp/m_sigver.c",0x288,"EVP_DigestVerifyFinal");
    uVar5 = 0x86;
  }
  else {
    FUN_00379868();
    FUN_0037995c("crypto/evp/m_sigver.c",0x26e,"EVP_DigestVerifyFinal");
    uVar5 = 0xbc;
  }
  FUN_00379a5c(6,uVar5,0);
  return 0;
}


// ===== 003a1d74  FUN_003a1d74 =====

undefined8
FUN_003a1d74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  int *piVar3;
  
  if (((uint)*(ulong *)(param_1 + 0x18) >> 0xb & 1) != 0) {
    FUN_00379868();
    FUN_0037995c("crypto/evp/m_sigver.c",0x2b6,"EVP_DigestVerify");
    FUN_00379a5c(6,0xbc,0);
    return 0;
  }
  piVar3 = *(int **)(param_1 + 0x28);
  if ((((piVar3 == (int *)0x0) || (*piVar3 != 0x100)) || (*(long *)(piVar3 + 0xc) == 0)) ||
     (*(long *)(piVar3 + 10) == 0)) {
    if ((*(long *)(piVar3 + 0x1e) != 0) &&
       (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(piVar3 + 0x1e) + 0xd8),
       UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x003a1e34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)();
      return uVar2;
    }
  }
  else if (*(long *)(*(long *)(piVar3 + 10) + 0x98) != 0) {
    *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) | 0x800;
                    /* WARNING: Could not recover jumptable at 0x003a1dd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(long *)(piVar3 + 10) + 0x98))(*(undefined8 *)(piVar3 + 0xc));
    return uVar2;
  }
  iVar1 = FUN_003a143c(param_1,param_4,param_5);
  if (0 < iVar1) {
    uVar2 = FUN_003a1abc(param_1,param_2,param_3);
    return uVar2;
  }
  return 0xffffffff;
}


// ===== 003a1e88  FUN_003a1e88 =====

undefined8 FUN_003a1e88(void)

{
  FUN_00379868();
  FUN_0037995c("crypto/evp/m_sigver.c",0x17,"update");
  FUN_00379a5c(6,0xb1,0);
  return 0;
}


// ===== 003a1ec8  FUN_003a1ec8 =====

undefined8 FUN_003a1ec8(undefined4 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    uVar2 = FUN_003dce44(*param_1);
    iVar1 = FUN_003dc60c(uVar2,2,param_1);
    if (iVar1 != 0) {
      uVar2 = FUN_003dce60(*param_1);
      uVar2 = FUN_003dc60c(uVar2,2,param_1);
      return uVar2;
    }
  }
  return 0;
}


// ===== 003a1f20  FUN_003a1f20 =====

void FUN_003a1f20(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_003dce44(*param_1);
  iVar1 = FUN_003dc60c(uVar2,1,param_1);
  if (iVar1 != 0) {
    uVar3 = FUN_003dce60(*param_1);
    iVar1 = FUN_003dc60c(uVar3,1,param_1);
    if (iVar1 != 0) {
      iVar1 = param_1[1];
      if ((iVar1 != 0) && (*param_1 != iVar1)) {
        uVar3 = FUN_003dce44(iVar1);
        iVar1 = FUN_003dc60c(uVar3,0x8001,uVar2);
        if (iVar1 != 0) {
          uVar3 = FUN_003dce60(param_1[1]);
          FUN_003dc60c(uVar3,0x8001,uVar2);
          return;
        }
      }
    }
  }
  return;
}


// ===== 003a1fb8  FUN_003a1fb8 =====

long FUN_003a1fb8(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long local_28;
  
  iVar2 = FUN_003c575c(4,0);
  if (iVar2 != 0) {
    local_28 = FUN_003dc410(param_1,2);
    if (local_28 != 0) {
      return local_28;
    }
    uVar3 = FUN_003c3bb8();
    iVar2 = FUN_003c3b2c(uVar3,param_1);
    if (iVar2 != 0) {
      iVar2 = FUN_003c3a08(uVar3,iVar2,FUN_003a2108,&local_28);
      lVar1 = 0;
      if (iVar2 != 0) {
        lVar1 = local_28;
      }
      return lVar1;
    }
  }
  return 0;
}


// ===== 003a205c  FUN_003a205c =====

long FUN_003a205c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long local_28;
  
  iVar2 = FUN_003c575c(4,0);
  if (iVar2 != 0) {
    local_28 = FUN_003dc410(param_2,2);
    if (local_28 != 0) {
      return local_28;
    }
    uVar3 = FUN_003c3bb8(param_1);
    iVar2 = FUN_003c3b2c(uVar3,param_2);
    if (iVar2 != 0) {
      iVar2 = FUN_003c3a08(uVar3,iVar2,FUN_003a2108,&local_28);
      lVar1 = 0;
      if (iVar2 != 0) {
        lVar1 = local_28;
      }
      return lVar1;
    }
  }
  return 0;
}


// ===== 003a2108  FUN_003a2108 =====

void FUN_003a2108(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = FUN_003dc410(param_1,2);
  *param_2 = lVar1;
  return;
}


// ===== 003a213c  FUN_003a213c =====

long FUN_003a213c(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long local_28;
  
  iVar2 = FUN_003c575c(8,0);
  if (iVar2 != 0) {
    local_28 = FUN_003dc410(param_1,1);
    if (local_28 != 0) {
      return local_28;
    }
    uVar3 = FUN_003c3bb8();
    iVar2 = FUN_003c3b2c(uVar3,param_1);
    if (iVar2 != 0) {
      iVar2 = FUN_003c3a08(uVar3,iVar2,FUN_003a228c,&local_28);
      lVar1 = 0;
      if (iVar2 != 0) {
        lVar1 = local_28;
      }
      return lVar1;
    }
  }
  return 0;
}


// ===== 003a21e0  FUN_003a21e0 =====

long FUN_003a21e0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long local_28;
  
  iVar2 = FUN_003c575c(8,0);
  if (iVar2 != 0) {
    local_28 = FUN_003dc410(param_2,1);
    if (local_28 != 0) {
      return local_28;
    }
    uVar3 = FUN_003c3bb8(param_1);
    iVar2 = FUN_003c3b2c(uVar3,param_2);
    if (iVar2 != 0) {
      iVar2 = FUN_003c3a08(uVar3,iVar2,FUN_003a228c,&local_28);
      lVar1 = 0;
      if (iVar2 != 0) {
        lVar1 = local_28;
      }
      return lVar1;
    }
  }
  return 0;
}


// ===== 003a228c  FUN_003a228c =====

void FUN_003a228c(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = FUN_003dc410(param_1,1);
  *param_2 = lVar1;
  return;
}


// ===== 003a22c0  FUN_003a22c0 =====

void FUN_003a22c0(void)

{
  FUN_003dc9cc(6);
  FUN_003dc9cc(2);
  FUN_003dc9cc(1);
  FUN_003dc9cc(0xffffffff);
  FUN_003a2ab8();
  FUN_003deb70();
  FUN_003b24d0();
  return;
}


// ===== 003a22f8  FUN_003a22f8 =====

void FUN_003a22f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_30;
  undefined8 uStack_28;
  
  FUN_003c575c(4,0);
  local_30 = param_2;
  uStack_28 = param_1;
  FUN_003dc850(2,FUN_003a2344,&local_30);
  return;
}


// ===== 003a2344  FUN_003a2344 =====

void FUN_003a2344(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  
  bVar3 = *(int *)(param_1 + 4) != 0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  if (bVar3) {
    uVar1 = 0;
  }
  uVar2 = 0;
  if (bVar3) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x003a2360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_2[1])(uVar1,*(undefined8 *)(param_1 + 8),uVar2,*param_2);
  return;
}


// ===== 003a2364  FUN_003a2364 =====

void FUN_003a2364(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_30;
  undefined8 uStack_28;
  
  FUN_003c575c(4,0);
  local_30 = param_2;
  uStack_28 = param_1;
  FUN_003dc8a8(2,FUN_003a2344,&local_30);
  return;
}


// ===== 003a23b0  FUN_003a23b0 =====

void FUN_003a23b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_30;
  undefined8 uStack_28;
  
  FUN_003c575c(8,0);
  local_30 = param_2;
  uStack_28 = param_1;
  FUN_003dc850(1,FUN_003a23fc,&local_30);
  return;
}


// ===== 003a23fc  FUN_003a23fc =====

void FUN_003a23fc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  
  bVar3 = *(int *)(param_1 + 4) != 0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  if (bVar3) {
    uVar1 = 0;
  }
  uVar2 = 0;
  if (bVar3) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x003a2418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_2[1])(uVar1,*(undefined8 *)(param_1 + 8),uVar2,*param_2);
  return;
}


// ===== 003a241c  FUN_003a241c =====

void FUN_003a241c(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_30;
  undefined8 uStack_28;
  
  FUN_003c575c(8,0);
  local_30 = param_2;
  uStack_28 = param_1;
  FUN_003dc8a8(1,FUN_003a23fc,&local_30);
  return;
}


// ===== 003a2468  FUN_003a2468 =====

undefined4
FUN_003a2468(long param_1,char *param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
            undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  code *pcVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long local_b8;
  undefined4 local_b0;
  int iStack_ac;
  
  uVar10 = param_3 & 0xffffffff;
  iVar4 = FUN_003dd5b4();
  if (iVar4 == 0) {
LAB_003a25f8:
    if (param_1 == 0) {
      FUN_003ca460(&local_b0,&DAT_001b77b8,0x50);
    }
    else {
      FUN_00399b58(&local_b0,0x50,param_1);
    }
    FUN_00379868();
    FUN_0037995c("crypto/evp/evp_pbe.c",0x74,"EVP_PBE_CipherInit_ex");
    FUN_00379a5c(6,0x79,"TYPE=%s",&local_b0);
LAB_003a2658:
    local_b8 = 0;
    lVar8 = 0;
    uVar5 = 0;
    goto LAB_003a26c0;
  }
  local_b0 = 0;
  iStack_ac = iVar4;
  if (DAT_007ab7e8 == 0) {
LAB_003a24e8:
    lVar6 = FUN_003dd608(&local_b0,&DAT_007659a0,0x21,0x20,FUN_003a2b34);
    if (lVar6 == 0) goto LAB_003a25f8;
  }
  else {
    FUN_0040cc10(DAT_007ab7e8);
    uVar5 = FUN_0040c48c(DAT_007ab7e8,&local_b0);
    lVar6 = FUN_0040cb0c(DAT_007ab7e8,uVar5);
    if (lVar6 == 0) goto LAB_003a24e8;
  }
  pcVar2 = *(code **)(lVar6 + 0x10);
  pcVar3 = *(code **)(lVar6 + 0x18);
  iVar4 = *(int *)(lVar6 + 8);
  iVar1 = *(int *)(lVar6 + 0xc);
  if (param_2 == (char *)0x0) {
    uVar10 = 0;
    if (iVar4 != -1) goto LAB_003a253c;
LAB_003a2678:
    lVar6 = 0;
    local_b8 = 0;
    if (iVar1 != -1) goto LAB_003a2588;
LAB_003a268c:
    lVar9 = 0;
    lVar8 = 0;
  }
  else {
    if ((int)param_3 == -1) {
      uVar10 = strlen(param_2);
    }
    if (iVar4 == -1) goto LAB_003a2678;
LAB_003a253c:
    FUN_0037f6d4();
    uVar7 = FUN_003dce44(iVar4);
    local_b8 = FUN_003823dc(param_7,uVar7,param_8);
    lVar6 = local_b8;
    if (local_b8 == 0) {
      FUN_003dce44(iVar4);
      lVar6 = FUN_003a1fb8();
      if (lVar6 == 0) {
        FUN_0037f8c4();
        FUN_00379868();
        FUN_0037995c("crypto/evp/evp_pbe.c",0x86,"EVP_PBE_CipherInit_ex");
        uVar7 = FUN_003dce44(iVar4);
        FUN_00379a5c(6,0xa0,uVar7);
        goto LAB_003a2658;
      }
    }
    FUN_0037f71c();
    if (iVar1 == -1) goto LAB_003a268c;
LAB_003a2588:
    FUN_0037f6d4();
    uVar7 = FUN_003dce44(iVar1);
    lVar8 = FUN_0039e6f4(param_7,uVar7,param_8);
    lVar9 = lVar8;
    if (lVar8 == 0) {
      FUN_003dce44(iVar1);
      lVar9 = FUN_003a213c();
      if (lVar9 == 0) {
        FUN_0037f8c4();
        FUN_00379868();
        FUN_0037995c("crypto/evp/evp_pbe.c",0x96,"EVP_PBE_CipherInit_ex");
        FUN_00379a5c(6,0xa1,0);
        lVar8 = 0;
        uVar5 = 0;
        goto LAB_003a26c0;
      }
    }
    FUN_0037f71c();
  }
  if (pcVar3 == (code *)0x0) {
    uVar5 = (*pcVar2)(param_5,param_2,uVar10 & 0xffffffff,param_4,lVar6,lVar9,param_6);
  }
  else {
    uVar5 = (*pcVar3)();
  }
LAB_003a26c0:
  FUN_0037fa4c(local_b8);
  FUN_0039d050(lVar8);
  return uVar5;
}


// ===== 003a2764  FUN_003a2764 =====

undefined8
FUN_003a2764(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 *param_4,
            undefined8 *param_5,undefined8 *param_6)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 local_60;
  int iStack_5c;
  
  if (param_2 == 0) {
    return 0;
  }
  local_60 = param_1;
  iStack_5c = param_2;
  if (DAT_007ab7e8 != 0) {
    FUN_0040cc10();
    uVar1 = FUN_0040c48c(DAT_007ab7e8,&local_60);
    lVar2 = FUN_0040cb0c(DAT_007ab7e8,uVar1);
    if (lVar2 != 0) goto LAB_003a27ec;
  }
  lVar2 = FUN_003dd608(&local_60,&DAT_007659a0,0x21,0x20,FUN_003a2b34);
  if (lVar2 == 0) {
    return 0;
  }
LAB_003a27ec:
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(lVar2 + 8);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(lVar2 + 0xc);
  }
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = *(undefined8 *)(lVar2 + 0x10);
  }
  if (param_6 != (undefined8 *)0x0) {
    *param_6 = *(undefined8 *)(lVar2 + 0x18);
  }
  return 1;
}


// ===== 003a2840  FUN_003a2840 =====

void FUN_003a2840(void)

{
  FUN_003a2468();
  return;
}


// ===== 003a284c  FUN_003a284c =====

undefined8
FUN_003a284c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined8 param_5)

{
  long lVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  if (DAT_007ab7e8 == 0) {
    DAT_007ab7e8 = FUN_0040bfd0(FUN_003a295c);
    if (DAT_007ab7e8 != 0) goto LAB_003a2898;
    puVar3 = (undefined4 *)0x0;
    uVar4 = 0xcf;
  }
  else {
LAB_003a2898:
    puVar3 = (undefined4 *)FUN_003c8474(0x20,"crypto/evp/evp_pbe.c",0xd4);
    lVar1 = DAT_007ab7e8;
    if (puVar3 == (undefined4 *)0x0) goto LAB_003a292c;
    *puVar3 = param_1;
    puVar3[1] = param_2;
    puVar3[2] = param_3;
    puVar3[3] = param_4;
    *(undefined8 *)(puVar3 + 4) = param_5;
    iVar2 = FUN_0040c89c(lVar1,puVar3);
    if (iVar2 != 0) {
      return 1;
    }
    uVar4 = 0xde;
  }
  FUN_00379868();
  FUN_0037995c("crypto/evp/evp_pbe.c",uVar4,"EVP_PBE_alg_add_type");
  FUN_00379a5c(6,0x8000f,0);
LAB_003a292c:
  FUN_003c86b4(puVar3,"crypto/evp/evp_pbe.c",0xe4);
  return 0;
}


// ===== 003a295c  FUN_003a295c =====

int FUN_003a295c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)*param_1 - *(int *)*param_2;
  if (iVar1 != 0) {
    return iVar1;
  }
  return ((int *)*param_1)[1] - ((int *)*param_2)[1];
}


// ===== 003a2988  FUN_003a2988 =====

void FUN_003a2988(undefined4 param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = FUN_003890fc(param_2);
  }
  if (param_3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = FUN_003899b0(param_3);
  }
  FUN_003a284c(0,param_1,uVar1,uVar2,param_4);
  return;
}


// ===== 003a29f4  FUN_003a29f4 =====

undefined8
FUN_003a29f4(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 *param_4,
            undefined8 *param_5)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 local_50;
  int iStack_4c;
  
  if (param_2 == 0) {
    return 0;
  }
  local_50 = param_1;
  iStack_4c = param_2;
  if (DAT_007ab7e8 != 0) {
    FUN_0040cc10();
    uVar1 = FUN_0040c48c(DAT_007ab7e8,&local_50);
    lVar2 = FUN_0040cb0c(DAT_007ab7e8,uVar1);
    if (lVar2 != 0) goto LAB_003a2a74;
  }
  lVar2 = FUN_003dd608(&local_50,&DAT_007659a0,0x21,0x20,FUN_003a2b34);
  if (lVar2 == 0) {
    return 0;
  }
LAB_003a2a74:
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(lVar2 + 8);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(lVar2 + 0xc);
  }
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = *(undefined8 *)(lVar2 + 0x10);
  }
  return 1;
}


// ===== 003a2ab8  FUN_003a2ab8 =====

void FUN_003a2ab8(void)

{
  FUN_0040ca6c(DAT_007ab7e8,FUN_003a2ae8);
  DAT_007ab7e8 = 0;
  return;
}


// ===== 003a2ae8  FUN_003a2ae8 =====

void FUN_003a2ae8(undefined8 param_1)

{
  FUN_003c86b4(param_1,"crypto/evp/evp_pbe.c",0x123);
  return;
}


// ===== 003a2af8  FUN_003a2af8 =====

undefined8 FUN_003a2af8(undefined4 *param_1,undefined4 *param_2,ulong param_3)

{
  if (0x20 < param_3) {
    return 0;
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *(undefined4 *)(&DAT_007659a0 + param_3 * 0x20);
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(&DAT_007659a4 + param_3 * 0x20);
  }
  return 1;
}


// ===== 003a2b34  FUN_003a2b34 =====

int FUN_003a2b34(int *param_1,int *param_2)

{
  if (*param_1 - *param_2 != 0) {
    return *param_1 - *param_2;
  }
  return param_1[1] - param_2[1];
}


// ===== 003a2b5c  FUN_003a2b5c =====

undefined * FUN_003a2b5c(void)

{
  return &DAT_00765dc0;
}


// ===== 003a2b68  FUN_003a2b68 =====

void FUN_003a2b68(void)

{
  FUN_0038a93c();
  return;
}


// ===== 003a2b74  FUN_003a2b74 =====

void FUN_003a2b74(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_00765dc0);
  return;
}


// ===== 003a2b80  FUN_003a2b80 =====

void FUN_003a2b80(void)

{
  FUN_0039a5f4(&DAT_00765dc0);
  return;
}


// ===== 003a2b8c  FUN_003a2b8c =====

void FUN_003a2b8c(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_00765dc0);
  return;
}


// ===== 003a2b98  FUN_003a2b98 =====

undefined8 *
FUN_003a2b98(long param_1,long param_2,int param_3,void *param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined1 auStack_70 [16];
  
  if (param_1 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/asn1/p5_scrypt.c",0x36,"PKCS5_pbe2_set_scrypt");
    FUN_00379a5c(0xd,0xc0102,0);
  }
  else {
    iVar1 = FUN_003b0d5c(0,0,0,0);
    if (iVar1 == 0) {
      FUN_00379868();
      FUN_0037995c("crypto/asn1/p5_scrypt.c",0x3b,"PKCS5_pbe2_set_scrypt");
      uVar4 = 0xe3;
    }
    else {
      iVar1 = FUN_00388f94(param_1);
      if (iVar1 == 0) {
        FUN_00379868();
        FUN_0037995c("crypto/asn1/p5_scrypt.c",0x41,"PKCS5_pbe2_set_scrypt");
        uVar4 = 0x6c;
      }
      else {
        plVar3 = (long *)FUN_003a33c0();
        if (plVar3 != (long *)0x0) {
          puVar8 = (undefined8 *)plVar3[1];
          uVar4 = FUN_003dcce8(iVar1);
          *puVar8 = uVar4;
          lVar5 = FUN_0038a64c();
          puVar8[1] = lVar5;
          if (lVar5 == 0) {
            FUN_00379868();
            FUN_0037995c("crypto/asn1/p5_scrypt.c",0x51,"PKCS5_pbe2_set_scrypt");
            FUN_00379a5c(0xd,0x8000d,0);
LAB_003a2d8c:
            puVar8 = (undefined8 *)0x0;
LAB_003a2d90:
            lVar5 = 0;
            goto LAB_003a2d20;
          }
          iVar2 = FUN_003894b8(param_1);
          if (iVar2 != 0) {
            iVar2 = FUN_003894b8(param_1);
            if (param_4 == (void *)0x0) {
              iVar2 = FUN_003edd58(auStack_70,iVar2);
              if (iVar2 < 1) goto LAB_003a2d8c;
            }
            else {
              memcpy(auStack_70,param_4,(long)iVar2);
            }
          }
          lVar5 = FUN_0037fab8();
          if (lVar5 == 0) {
            FUN_00379868();
            FUN_0037995c("crypto/asn1/p5_scrypt.c",0x5f,"PKCS5_pbe2_set_scrypt");
            uVar4 = 0x80006;
LAB_003a2e64:
            FUN_00379a5c(0xd,uVar4,0);
          }
          else {
            iVar2 = FUN_003803c8(lVar5,param_1,0,0,auStack_70,0);
            if (iVar2 != 0) {
              iVar2 = FUN_003885b0(lVar5,puVar8[1]);
              if (iVar2 < 1) {
                FUN_00379868();
                FUN_0037995c("crypto/asn1/p5_scrypt.c",0x67,"PKCS5_pbe2_set_scrypt");
                uVar4 = 0x72;
                goto LAB_003a2e64;
              }
              FUN_0037fae8(lVar5);
              if (iVar1 == 0x25) {
                iVar1 = FUN_003897a4(param_1);
                lVar5 = (long)iVar1;
              }
              else {
                lVar5 = 0;
              }
              FUN_003a3a50(*plVar3);
              plVar6 = (long *)FUN_0039a5f4(&DAT_00765dc0);
              if (plVar6 == (long *)0x0) {
                puVar8 = (undefined8 *)0x0;
                uVar4 = 0xa4;
LAB_003a3008:
                FUN_00379868();
                FUN_0037995c("crypto/asn1/p5_scrypt.c",uVar4,"pkcs5_scrypt_set");
                FUN_00379a5c(0xd,0x8000d,0);
              }
              else {
                iVar1 = 0x10;
                if (param_3 != 0) {
                  iVar1 = param_3;
                }
                iVar2 = FUN_0038ebe0(*plVar6,param_2,iVar1);
                if (iVar2 == 0) {
                  puVar8 = (undefined8 *)0x0;
                  uVar4 = 0xad;
                  goto LAB_003a3008;
                }
                if ((param_2 != 0) ||
                   (iVar1 = FUN_003edd58(*(undefined8 *)(*plVar6 + 8),iVar1), 0 < iVar1)) {
                  iVar1 = FUN_0038ddcc(plVar6[1],param_5);
                  if (iVar1 == 0) {
                    puVar8 = (undefined8 *)0x0;
                    uVar4 = 0xb5;
                  }
                  else {
                    iVar1 = FUN_0038ddcc(plVar6[2],param_6);
                    if (iVar1 == 0) {
                      puVar8 = (undefined8 *)0x0;
                      uVar4 = 0xba;
                    }
                    else {
                      iVar1 = FUN_0038ddcc(plVar6[3],param_7);
                      if (iVar1 == 0) {
                        puVar8 = (undefined8 *)0x0;
                        uVar4 = 0xbf;
                      }
                      else if (lVar5 == 0) {
LAB_003a2f20:
                        puVar8 = (undefined8 *)FUN_003a3a44();
                        if (puVar8 == (undefined8 *)0x0) {
                          uVar4 = 0xd5;
                        }
                        else {
                          uVar4 = FUN_003dcce8(0x3cd);
                          *puVar8 = uVar4;
                          lVar5 = FUN_0039b028(&DAT_00765dc0,plVar6,puVar8 + 1);
                          if (lVar5 != 0) {
                            FUN_0038c75c(plVar6,&DAT_00765dc0);
                            *plVar3 = (long)puVar8;
                            puVar8 = (undefined8 *)FUN_003a3a44();
                            if (puVar8 == (undefined8 *)0x0) {
                              FUN_00379868();
                              uVar4 = 0x81;
                            }
                            else {
                              uVar4 = FUN_003dcce8(0xa1);
                              *puVar8 = uVar4;
                              uVar4 = FUN_003a339c();
                              lVar5 = FUN_0039b028(uVar4,plVar3,puVar8 + 1);
                              if (lVar5 != 0) {
                                FUN_003a33cc(plVar3);
                                return puVar8;
                              }
                              FUN_00379868();
                              uVar4 = 0x8b;
                            }
                            FUN_0037995c("crypto/asn1/p5_scrypt.c",uVar4,"PKCS5_pbe2_set_scrypt");
                            FUN_00379a5c(0xd,0x8000d,0);
                            goto LAB_003a2d90;
                          }
                          uVar4 = 0xdf;
                        }
                      }
                      else {
                        lVar7 = FUN_0038a388();
                        plVar6[4] = lVar7;
                        if (lVar7 == 0) {
                          puVar8 = (undefined8 *)0x0;
                          uVar4 = 200;
                        }
                        else {
                          iVar1 = FUN_0038db7c(lVar7,lVar5);
                          if (iVar1 != 0) goto LAB_003a2f20;
                          puVar8 = (undefined8 *)0x0;
                          uVar4 = 0xcc;
                        }
                      }
                    }
                  }
                  goto LAB_003a3008;
                }
                puVar8 = (undefined8 *)0x0;
              }
              FUN_0038c75c(plVar6,&DAT_00765dc0);
              FUN_003a3a50(puVar8);
              *plVar3 = 0;
              FUN_00379868();
              FUN_0037995c("crypto/asn1/p5_scrypt.c",0x79,"PKCS5_pbe2_set_scrypt");
              FUN_00379a5c(0xd,0x8000d,0);
              puVar8 = (undefined8 *)0x0;
              lVar5 = 0;
              goto LAB_003a2d20;
            }
          }
          puVar8 = (undefined8 *)0x0;
          goto LAB_003a2d20;
        }
        FUN_00379868();
        FUN_0037995c("crypto/asn1/p5_scrypt.c",0x47,"PKCS5_pbe2_set_scrypt");
        uVar4 = 0x8000d;
      }
    }
    FUN_00379a5c(0xd,uVar4,0);
  }
  puVar8 = (undefined8 *)0x0;
  lVar5 = 0;
  plVar3 = (long *)0x0;
LAB_003a2d20:
  FUN_003a33cc(plVar3);
  FUN_003a3a50(puVar8);
  FUN_0037fae8(lVar5);
  return (undefined8 *)0x0;
}


// ===== 003a30e4  FUN_003a30e4 =====

undefined4
FUN_003a30e4(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5
            ,undefined8 param_6,undefined4 param_7,undefined8 param_8,undefined8 param_9)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 local_b0;
  undefined8 uStack_a8;
  ulong local_a0 [8];
  undefined8 local_48;
  
  lVar4 = FUN_0038944c();
  if (lVar4 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/asn1/p5_scrypt.c",0xf9,"PKCS5_v2_scrypt_keyivgen_ex");
    FUN_00379a5c(6,0x83,0);
    puVar5 = (undefined8 *)0x0;
    uVar3 = 0;
    goto LAB_003a3338;
  }
  puVar5 = (undefined8 *)FUN_0039b0f4(&DAT_00765dc0,param_4);
  if (puVar5 == (undefined8 *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/asn1/p5_scrypt.c",0x102,"PKCS5_v2_scrypt_keyivgen_ex");
    uVar6 = 0x72;
  }
  else {
    uVar1 = FUN_003897ac(param_1);
    if (-1 < (int)uVar1) {
      uVar7 = (ulong)uVar1;
      if ((puVar5[4] == 0) ||
         ((iVar2 = FUN_0038dc08(local_a0), iVar2 != 0 && (local_a0[0] == uVar7)))) {
        iVar2 = FUN_0038dc08(&local_b0,puVar5[1]);
        if ((iVar2 == 0) ||
           (((iVar2 = FUN_0038dc08(&uStack_a8,puVar5[2]), iVar2 == 0 ||
             (iVar2 = FUN_0038dc08(&local_48,puVar5[3]), iVar2 == 0)) ||
            (iVar2 = FUN_003b0b54(0,0,0,0,local_b0,uStack_a8,local_48,0,0,0,param_8,param_9),
            iVar2 == 0)))) {
          FUN_00379868();
          FUN_0037995c("crypto/asn1/p5_scrypt.c",0x11d,"PKCS5_v2_scrypt_keyivgen_ex");
          FUN_00379a5c(6,0xab,0);
          goto joined_r0x003a3328;
        }
        iVar2 = FUN_003b0b54(param_2,(long)param_3,*(undefined8 *)((int *)*puVar5 + 2),
                             (long)*(int *)*puVar5,local_b0,uStack_a8,local_48,0,local_a0,uVar7,
                             param_8,param_9);
        if (iVar2 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = FUN_003803c8(param_1,0,0,local_a0,0,param_7);
        }
      }
      else {
        FUN_00379868();
        FUN_0037995c("crypto/asn1/p5_scrypt.c",0x113,"PKCS5_v2_scrypt_keyivgen_ex");
        FUN_00379a5c(6,0x7b,0);
joined_r0x003a3328:
        uVar3 = 0;
      }
      if (uVar1 != 0) {
        FUN_003c89b8(local_a0,uVar7);
      }
      goto LAB_003a3338;
    }
    FUN_00379868();
    FUN_0037995c("crypto/asn1/p5_scrypt.c",0x108,"PKCS5_v2_scrypt_keyivgen_ex");
    uVar6 = 0x82;
  }
  FUN_00379a5c(6,uVar6,0);
  uVar3 = 0;
LAB_003a3338:
  FUN_0038c75c(puVar5,&DAT_00765dc0);
  return uVar3;
}


// ===== 003a3378  FUN_003a3378 =====

void FUN_003a3378(void)

{
  FUN_003a30e4();
  return;
}


// ===== 003a339c  FUN_003a339c =====

undefined * FUN_003a339c(void)

{
  return &DAT_00765ec0;
}


// ===== 003a33a8  FUN_003a33a8 =====

void FUN_003a33a8(void)

{
  FUN_0038a93c();
  return;
}


// ===== 003a33b4  FUN_003a33b4 =====

void FUN_003a33b4(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_00765ec0);
  return;
}


// ===== 003a33c0  FUN_003a33c0 =====

void FUN_003a33c0(void)

{
  FUN_0039a5f4(&DAT_00765ec0);
  return;
}


// ===== 003a33cc  FUN_003a33cc =====

void FUN_003a33cc(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_00765ec0);
  return;
}


// ===== 003a33d8  FUN_003a33d8 =====

undefined * FUN_003a33d8(void)

{
  return &DAT_00765f48;
}


// ===== 003a33e4  FUN_003a33e4 =====

void FUN_003a33e4(void)

{
  FUN_0038a93c();
  return;
}


// ===== 003a33f0  FUN_003a33f0 =====

void FUN_003a33f0(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_00765f48);
  return;
}


// ===== 003a33fc  FUN_003a33fc =====

void FUN_003a33fc(void)

{
  FUN_0039a5f4(&DAT_00765f48);
  return;
}


// ===== 003a3408  FUN_003a3408 =====

void FUN_003a3408(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_00765f48);
  return;
}


// ===== 003a3414  FUN_003a3414 =====

undefined8 *
FUN_003a3414(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
            void *param_5,int param_6,undefined8 param_7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined1 auStack_74 [16];
  int local_64;
  
  local_64 = param_6;
  iVar1 = FUN_00388f94();
  if (iVar1 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/asn1/p5_pbev2.c",0x39,"PKCS5_pbe2_set_iv_ex");
    FUN_00379a5c(0xd,0x6c,0);
    puVar8 = (undefined8 *)0x0;
    lVar7 = 0;
    plVar5 = (long *)0x0;
    goto LAB_003a3548;
  }
  plVar5 = (long *)FUN_0039a5f4(&DAT_00765ec0);
  if (plVar5 == (long *)0x0) {
    FUN_00379868();
    uVar6 = 0x3e;
LAB_003a3528:
    FUN_0037995c("crypto/asn1/p5_pbev2.c",uVar6,"PKCS5_pbe2_set_iv_ex");
    uVar4 = 0x8000d;
LAB_003a3538:
    FUN_00379a5c(0xd,uVar4,0);
LAB_003a3540:
    puVar8 = (undefined8 *)0x0;
  }
  else {
    puVar8 = (undefined8 *)plVar5[1];
    uVar6 = FUN_003dcce8(iVar1);
    *puVar8 = uVar6;
    lVar7 = FUN_0038a64c();
    puVar8[1] = lVar7;
    if (lVar7 == 0) {
      FUN_00379868();
      uVar6 = 0x46;
      goto LAB_003a3528;
    }
    uVar2 = FUN_003894b8(param_1);
    if (0 < (int)uVar2) {
      if (param_5 != (void *)0x0) {
        memcpy(auStack_74,param_5,(ulong)uVar2);
        goto LAB_003a35a4;
      }
      iVar3 = FUN_003edc30(param_7,auStack_74,(ulong)uVar2,0);
      if (0 < iVar3) goto LAB_003a35a4;
      goto LAB_003a3540;
    }
LAB_003a35a4:
    lVar7 = FUN_0037fab8();
    if (lVar7 == 0) {
      FUN_00379868();
      FUN_0037995c("crypto/asn1/p5_pbev2.c",0x55,"PKCS5_pbe2_set_iv_ex");
      uVar4 = 0x80006;
      goto LAB_003a3538;
    }
    iVar3 = FUN_003803c8(lVar7,param_1,0,0,auStack_74,0);
    if (iVar3 == 0) {
LAB_003a3690:
      puVar8 = (undefined8 *)0x0;
      goto LAB_003a3548;
    }
    iVar3 = FUN_003885b0(lVar7,puVar8[1]);
    if (iVar3 < 1) {
      FUN_00379868();
      FUN_0037995c("crypto/asn1/p5_pbev2.c",0x5d,"PKCS5_pbe2_set_iv_ex");
      FUN_00379a5c(0xd,0x72,0);
      goto LAB_003a3690;
    }
    FUN_0037f6d4();
    if ((param_6 == -1) && (iVar3 = FUN_00381710(lVar7,7,0,&local_64), iVar3 < 1)) {
      local_64 = 799;
    }
    FUN_0037f71c();
    FUN_0037fae8(lVar7);
    if (iVar1 == 0x25) {
      uVar4 = FUN_003897a4(param_1);
    }
    else {
      uVar4 = 0xffffffff;
    }
    FUN_003a3a50(*plVar5);
    lVar7 = FUN_003a3790(param_2,param_3,param_4,local_64,uVar4,param_7);
    *plVar5 = lVar7;
    if (lVar7 == 0) {
      FUN_00379868();
      uVar6 = 0x7c;
      goto LAB_003a3528;
    }
    puVar8 = (undefined8 *)FUN_003a3a44();
    if (puVar8 == (undefined8 *)0x0) {
      FUN_00379868();
      FUN_0037995c("crypto/asn1/p5_pbev2.c",0x83,"PKCS5_pbe2_set_iv_ex");
      uVar4 = 0x8000b;
    }
    else {
      uVar6 = FUN_003dcce8(0xa1);
      *puVar8 = uVar6;
      lVar7 = FUN_0039b028(&DAT_00765ec0,plVar5,puVar8 + 1);
      if (lVar7 != 0) {
        FUN_0038c75c(plVar5,&DAT_00765ec0);
        return puVar8;
      }
      FUN_00379868();
      FUN_0037995c("crypto/asn1/p5_pbev2.c",0x8d,"PKCS5_pbe2_set_iv_ex");
      uVar4 = 0x8000d;
    }
    FUN_00379a5c(0xd,uVar4,0);
  }
  lVar7 = 0;
LAB_003a3548:
  FUN_0037fae8(lVar7);
  FUN_0038c75c(plVar5,&DAT_00765ec0);
  FUN_003a3a50(puVar8);
  return (undefined8 *)0x0;
}


// ===== 003a3790  FUN_003a3790 =====

undefined8 *
FUN_003a3790(int param_1,void *param_2,uint param_3,int param_4,int param_5,undefined8 param_6)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  uint *puVar4;
  void *__dest;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  ulong __n;
  
  uVar8 = 0x8000d;
  plVar3 = (long *)FUN_0039a5f4(&DAT_00765f48);
  if (plVar3 == (long *)0x0) {
    puVar6 = (undefined8 *)0x0;
    uVar7 = 0xb8;
  }
  else {
    puVar4 = (uint *)FUN_0038a358();
    if (puVar4 == (uint *)0x0) {
      puVar6 = (undefined8 *)0x0;
      uVar7 = 0xbc;
    }
    else {
      *(uint **)(*plVar3 + 8) = puVar4;
      *(undefined4 *)*plVar3 = 4;
      if ((int)param_3 < 0) {
        puVar6 = (undefined8 *)0x0;
        uVar8 = 0x80106;
        uVar7 = 0xc4;
      }
      else {
        uVar1 = 0x10;
        if (param_3 != 0) {
          uVar1 = param_3;
        }
        __n = (ulong)uVar1;
        __dest = (void *)FUN_003c83a4(__n,"crypto/asn1/p5_pbev2.c",0xc9);
        *(void **)(puVar4 + 2) = __dest;
        if (__dest == (void *)0x0) {
          puVar6 = (undefined8 *)0x0;
          goto LAB_003a39b8;
        }
        *puVar4 = uVar1;
        if (param_2 == (void *)0x0) {
          iVar2 = FUN_003edc30(param_6,__dest,__n,0);
          if (iVar2 < 1) {
            puVar6 = (undefined8 *)0x0;
            uVar8 = 0x80024;
            uVar7 = 0xd2;
            goto LAB_003a398c;
          }
        }
        else {
          memcpy(__dest,param_2,__n);
        }
        iVar2 = 0x800;
        if (0 < param_1) {
          iVar2 = param_1;
        }
        iVar2 = FUN_0038de18(plVar3[1],iVar2);
        if (iVar2 == 0) {
          puVar6 = (undefined8 *)0x0;
          uVar7 = 0xda;
        }
        else if (param_5 < 1) {
LAB_003a38cc:
          if ((0 < param_4) && (param_4 != 0xa3)) {
            lVar5 = FUN_003a3b14(param_4,5,0);
            plVar3[3] = lVar5;
            if (lVar5 == 0) {
              puVar6 = (undefined8 *)0x0;
              uVar8 = 0x8000b;
              uVar7 = 0xef;
              goto LAB_003a398c;
            }
          }
          puVar6 = (undefined8 *)FUN_003a3a44();
          if (puVar6 == (undefined8 *)0x0) {
            uVar8 = 0x8000b;
            uVar7 = 0xf8;
          }
          else {
            uVar7 = FUN_003dcce8(0x45);
            *puVar6 = uVar7;
            lVar5 = FUN_0039b028(&DAT_00765f48,plVar3,puVar6 + 1);
            if (lVar5 != 0) {
              FUN_0038c75c(plVar3,&DAT_00765f48);
              return puVar6;
            }
            uVar7 = 0x102;
            uVar8 = 0x8000d;
          }
        }
        else {
          lVar5 = FUN_0038a388();
          plVar3[2] = lVar5;
          if (lVar5 == 0) {
            puVar6 = (undefined8 *)0x0;
            uVar7 = 0xe2;
          }
          else {
            iVar2 = FUN_0038de18(lVar5,param_5);
            if (iVar2 != 0) goto LAB_003a38cc;
            puVar6 = (undefined8 *)0x0;
            uVar7 = 0xe6;
          }
        }
      }
    }
  }
LAB_003a398c:
  FUN_00379868();
  FUN_0037995c("crypto/asn1/p5_pbev2.c",uVar7,"PKCS5_pbkdf2_set_ex");
  FUN_00379a5c(0xd,uVar8,0);
LAB_003a39b8:
  FUN_0038c75c(plVar3,&DAT_00765f48);
  FUN_003a3a50(puVar6);
  return (undefined8 *)0x0;
}


// ===== 003a39f4  FUN_003a39f4 =====

void FUN_003a39f4(void)

{
  FUN_003a3414();
  return;
}


// ===== 003a39fc  FUN_003a39fc =====

void FUN_003a39fc(void)

{
  FUN_003a3414();
  return;
}


// ===== 003a3a0c  FUN_003a3a0c =====

void FUN_003a3a0c(void)

{
  FUN_003a3790();
  return;
}


// ===== 003a3a14  FUN_003a3a14 =====

undefined * FUN_003a3a14(void)

{
  return &DAT_00766020;
}


// ===== 003a3a20  FUN_003a3a20 =====

undefined * FUN_003a3a20(void)

{
  return &DAT_007660a8;
}


// ===== 003a3a2c  FUN_003a3a2c =====

void FUN_003a3a2c(void)

{
  FUN_0038a93c();
  return;
}


// ===== 003a3a38  FUN_003a3a38 =====

void FUN_003a3a38(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_00766020);
  return;
}


// ===== 003a3a44  FUN_003a3a44 =====

void FUN_003a3a44(void)

{
  FUN_0039a5f4(&DAT_00766020);
  return;
}


// ===== 003a3a50  FUN_003a3a50 =====

void FUN_003a3a50(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_00766020);
  return;
}


// ===== 003a3a5c  FUN_003a3a5c =====

void FUN_003a3a5c(void)

{
  FUN_0038a93c();
  return;
}


// ===== 003a3a68  FUN_003a3a68 =====

void FUN_003a3a68(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_007660a8);
  return;
}


// ===== 003a3a74  FUN_003a3a74 =====

void FUN_003a3a74(undefined8 param_1)

{
  FUN_003a4098(&DAT_00766020,param_1);
  return;
}


// ===== 003a3a84  FUN_003a3a84 =====

undefined8 * FUN_003a3a84(undefined8 *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  long lVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    if (param_3 == -1) {
      FUN_0039a0f4(*param_1);
      *param_1 = param_2;
      FUN_0038a658(param_1[1]);
      param_1[1] = 0;
    }
    else {
      if (param_1[1] == 0) {
        lVar1 = FUN_0038a64c();
        param_1[1] = lVar1;
        if (lVar1 == 0) {
          return (undefined8 *)0x0;
        }
      }
      FUN_0039a0f4(*param_1);
      *param_1 = param_2;
      if (param_3 != 0) {
        FUN_0039ade0(param_1[1],param_3,param_4);
      }
    }
    param_1 = (undefined8 *)0x1;
  }
  return param_1;
}


// ===== 003a3b14  FUN_003a3b14 =====

undefined8 * FUN_003a3b14(undefined8 param_1,int param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar1 = (undefined8 *)FUN_003dcce8();
  puVar2 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_0039a5f4(&DAT_00766020);
    if (puVar2 == (undefined8 *)0x0) {
LAB_003a3bd8:
      FUN_0038c75c(puVar2,&DAT_00766020);
      return (undefined8 *)0x0;
    }
    if (param_2 == -1) {
      FUN_0039a0f4(*puVar2);
      *puVar2 = puVar1;
      FUN_0038a658(puVar2[1]);
      puVar2[1] = 0;
      return puVar2;
    }
    if (puVar2[1] == 0) {
      lVar3 = FUN_0038a64c();
      puVar2[1] = lVar3;
      if (lVar3 == 0) {
        *puVar2 = 0;
        goto LAB_003a3bd8;
      }
    }
    FUN_0039a0f4(*puVar2);
    *puVar2 = puVar1;
    if (param_2 != 0) {
      FUN_0039ade0(puVar2[1],param_2,param_3);
    }
  }
  return puVar2;
}


// ===== 003a3bf8  FUN_003a3bf8 =====

void FUN_003a3bf8(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = *param_4;
  }
  if (param_2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)param_4[1];
    if (puVar1 == (undefined4 *)0x0) {
      *param_2 = 0xffffffff;
    }
    else {
      *param_2 = *puVar1;
      if (param_3 != (undefined8 *)0x0) {
        *param_3 = *(undefined8 *)(puVar1 + 2);
        return;
      }
    }
  }
  return;
}


// ===== 003a3c34  FUN_003a3c34 =====

void FUN_003a3c34(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  FUN_003899b0(param_2);
  uVar1 = FUN_003dcce8();
  if (param_1 != (undefined8 *)0x0) {
    if (((uint)uVar3 >> 3 & 1) == 0) {
      if (param_1[1] == 0) {
        lVar2 = FUN_0038a64c();
        param_1[1] = lVar2;
        if (lVar2 == 0) {
          return;
        }
      }
      FUN_0039a0f4(*param_1);
      *param_1 = uVar1;
      FUN_0039ade0(param_1[1],5,0);
      return;
    }
    FUN_0039a0f4(*param_1);
    *param_1 = uVar1;
    FUN_0038a658(param_1[1]);
    param_1[1] = 0;
  }
  return;
}


// ===== 003a3cc8  FUN_003a3cc8 =====

undefined8 FUN_003a3cc8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_003de61c(*param_1,*param_2);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  if (param_1[1] == 0 && param_2[1] == 0) {
    return 0;
  }
  uVar1 = FUN_0039afb8();
  return uVar1;
}


// ===== 003a3d24  FUN_003a3d24 =====

undefined8 FUN_003a3d24(long *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_1 == (long *)0x0) {
    return 0;
  }
  if (param_2 == (long *)0x0) {
    return 0;
  }
  if (*param_1 != 0) {
    FUN_0039a0f4();
  }
  *param_1 = 0;
  if (param_1[1] != 0) {
    FUN_0038a658();
  }
  lVar1 = *param_2;
  param_1[1] = 0;
  if (lVar1 != 0) {
    lVar1 = FUN_003de510();
    *param_1 = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
  }
  if (param_2[1] != 0) {
    lVar1 = FUN_0038a64c();
    param_1[1] = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
    uVar2 = FUN_0039ae70(lVar1,*(undefined4 *)param_2[1],
                         *(undefined8 *)((undefined4 *)param_2[1] + 2));
    if ((int)uVar2 == 0) {
      return uVar2;
    }
  }
  return 1;
}


// ===== 003a3db0  FUN_003a3db0 =====

undefined8 FUN_003a3db0(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  if (param_2 == 0) {
    return 1;
  }
  iVar1 = FUN_003898e4(param_2,&DAT_001eef82);
  if (iVar1 == 0) {
    lVar2 = FUN_0039a5f4(&DAT_00766020);
    if (lVar2 == 0) {
      return 0;
    }
    FUN_003a3c34(lVar2,param_2);
    *param_1 = lVar2;
  }
  return 1;
}


// ===== 003a3e20  FUN_003a3e20 =====

long FUN_003a3e20(undefined8 *param_1)

{
  long lVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    lVar1 = FUN_003a4268();
    return lVar1;
  }
  FUN_003dd5b4(*param_1);
  FUN_003dce44();
  lVar1 = FUN_003a213c();
  if (lVar1 != 0) {
    return lVar1;
  }
  FUN_00379868();
  FUN_0037995c("crypto/asn1/x_algor.c",0xa5,"ossl_x509_algor_get_md");
  FUN_00379a5c(0xd,0xe5,0);
  return 0;
}


// ===== 003a3e84  FUN_003a3e84 =====

undefined8 FUN_003a3e84(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_003dd5b4(*param_1);
  if (iVar1 == 0x38f) {
    uVar2 = FUN_0039b0f4(&DAT_00766020,param_1[1]);
    return uVar2;
  }
  return 0;
}


// ===== 003a3ecc  FUN_003a3ecc =====

bool FUN_003a3ecc(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_18;
  
  local_18 = 0;
  *param_1 = 0;
  if ((param_2 == 0) || (iVar1 = FUN_003898e4(param_2,&DAT_001eef82), iVar1 != 0)) {
    return true;
  }
  iVar1 = FUN_003898e4(param_2,&DAT_001eef82);
  if (iVar1 == 0) {
    lVar4 = FUN_0039a5f4(&DAT_00766020);
    if (lVar4 == 0) {
      uVar3 = 0;
      goto LAB_003a3f9c;
    }
    FUN_003a3c34(lVar4,param_2);
  }
  else {
    lVar4 = 0;
  }
  lVar2 = FUN_0039b120(lVar4,&DAT_00766020,&local_18);
  uVar3 = local_18;
  if (lVar2 != 0) {
    lVar2 = FUN_003a3b14(0x38f,0x10);
    *param_1 = lVar2;
    uVar3 = local_18;
    if (lVar2 != 0) {
      local_18 = 0;
      uVar3 = 0;
    }
  }
LAB_003a3f9c:
  FUN_0038eddc(uVar3);
  FUN_0038c75c(lVar4,&DAT_00766020);
  return *param_1 != 0;
}


// ===== 003a3fd0  FUN_003a3fd0 =====

long FUN_003a3fd0(code *param_1,code *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long local_40;
  long local_38;
  
  if (param_3 == 0) {
    return 0;
  }
  iVar1 = (*param_1)(param_3,0);
  if (0 < iVar1) {
    lVar2 = FUN_003c83a4(iVar1 + 10,"crypto/asn1/a_dup.c",0x1e);
    lVar3 = lVar2;
    if (lVar2 != 0) {
      local_38 = lVar2;
      iVar1 = (*param_1)(param_3,&local_38);
      local_40 = lVar2;
      lVar3 = (*param_2)(0,&local_40,(long)iVar1);
      FUN_003c86b4(lVar2,"crypto/asn1/a_dup.c",0x25);
    }
    return lVar3;
  }
  return 0;
}


// ===== 003a4098  FUN_003a4098 =====

undefined8 FUN_003a4098(byte *param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  long local_38;
  
  local_40 = 0;
  local_60 = 0;
  uStack_58 = 0;
  if (param_2 == 0) {
    return 0;
  }
  pcVar4 = (code *)0x0;
  bVar1 = true;
  local_38 = param_2;
  if ((*param_1 < 7) && ((1 << (ulong)(*param_1 & 0x1f) & 0x46U) != 0)) {
    if (*(long *)(param_1 + 0x20) == 0) {
      pcVar4 = (code *)0x0;
    }
    else {
      pcVar4 = *(code **)(*(long *)(param_1 + 0x20) + 0x18);
      if (pcVar4 != (code *)0x0) {
        iVar2 = (*pcVar4)(0xe,&local_38,param_1,0);
        if (((iVar2 == 0) || (iVar2 = (*pcVar4)(0x10,&local_38,param_1,&uStack_58), iVar2 == 0)) ||
           (iVar2 = (*pcVar4)(0x11,&local_38,param_1,&local_60), iVar2 == 0)) goto LAB_003a41d4;
        bVar1 = false;
      }
    }
  }
  iVar2 = FUN_0039b478(local_38,&local_40,param_1);
  if (local_40 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/asn1/a_dup.c",0x4f,"ASN1_item_dup");
    FUN_00379a5c(0xd,0x8000d,0);
    return 0;
  }
  local_48 = local_40;
  uVar3 = FUN_0038a86c(0,&local_48,(long)iVar2,param_1,uStack_58,local_60);
  local_50 = uVar3;
  FUN_003c86b4(local_40,"crypto/asn1/a_dup.c",0x54);
  if ((bVar1) || (iVar2 = (*pcVar4)(0xf,&local_50,param_1,local_38), uVar3 = local_50, iVar2 != 0))
  {
    return uVar3;
  }
LAB_003a41d4:
  FUN_00379868();
  FUN_0037995c("crypto/asn1/a_dup.c",0x5d,"ASN1_item_dup");
  FUN_00379a5c(0xd,100,"Type=%s",*(undefined8 *)(param_1 + 0x30));
  return 0;
}


// ===== 003a4268  FUN_003a4268 =====

undefined * FUN_003a4268(void)

{
  return &DAT_00766108;
}


// ===== 003a4274  FUN_003a4274 =====

undefined * FUN_003a4274(void)

{
  return &DAT_007661f0;
}


// ===== 003a4280  FUN_003a4280 =====

undefined * FUN_003a4280(void)

{
  return &DAT_007662d8;
}


// ===== 003a428c  FUN_003a428c =====

undefined * FUN_003a428c(void)

{
  return &DAT_007663c0;
}


// ===== 003a4298  FUN_003a4298 =====

undefined * FUN_003a4298(void)

{
  return &DAT_007664a8;
}


// ===== 003a42a4  FUN_003a42a4 =====

undefined * FUN_003a42a4(void)

{
  return &DAT_00766590;
}


// ===== 003a42b0  FUN_003a42b0 =====

undefined * FUN_003a42b0(void)

{
  return &DAT_00766678;
}


// ===== 003a42bc  FUN_003a42bc =====

undefined * FUN_003a42bc(void)

{
  return &DAT_00766760;
}


// ===== 003a42c8  FUN_003a42c8 =====

void FUN_003a42c8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00389e50();
  FUN_00409f1c(uVar1,6,(long)*(int *)(*(long *)(param_1 + 8) + 8) << 3);
  return;
}


// ===== 003a42f8  FUN_003a42f8 =====

void FUN_003a42f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00389e50();
  FUN_00409fc8(uVar1,param_2,param_3);
  return;
}


// ===== 003a4324  FUN_003a4324 =====

void FUN_003a4324(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00389e50();
  FUN_0040a0ac(param_2,uVar1);
  return;
}


// ===== 003a434c  FUN_003a434c =====

undefined * FUN_003a434c(void)

{
  return &DAT_00766848;
}


