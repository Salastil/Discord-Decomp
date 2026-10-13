// ===== 00510698  FUN_00510698 =====

ulong FUN_00510698(byte *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  
  if (0xb < param_2) {
    lVar2 = ((ulong)*param_1 & 0xf) * 4;
    if (lVar2 + 0xcU <= param_2) {
      if ((*param_1 >> 4 & 1) == 0) {
        return lVar2 + 0xcU;
      }
      if ((lVar2 + 0x10U <= param_2) &&
         (uVar1 = lVar2 + 0x10U +
                  (ulong)((uint)(*(ushort *)(param_1 + lVar2 + 0xe) >> 8) |
                         (*(ushort *)(param_1 + lVar2 + 0xe) & 0xff00ff) << 8) * 4, uVar1 <= param_2
         )) {
        return uVar1;
      }
    }
  }
  return 0xffffffffffffffff;
}


// ===== 005106ec  FUN_005106ec =====

long FUN_005106ec(ulong param_1)

{
  return (param_1 & 0x3ffff) << (param_1 >> 0x12 & 0x3f);
}


// ===== 005106fc  FUN_005106fc =====

byte * FUN_005106fc(byte *param_1,ulong param_2)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  
  if (0xb < param_2) {
    bVar1 = *param_1;
    if ((bVar1 & 0xc0) == 0x80) {
      pbVar3 = (byte *)0x0;
      if ((0x1d < (byte)(param_1[1] + 0x3e)) && ((bVar1 >> 4 & 1) != 0)) {
        lVar2 = ((ulong)bVar1 & 0xf) * 4;
        if (param_2 < lVar2 + 0x10U) {
          return (byte *)0x0;
        }
        pbVar3 = (byte *)0x0;
        if (((ulong)param_1[lVar2 + 0xe] << 10 | (ulong)param_1[lVar2 + 0xf] << 2) + lVar2 + 0x10U
            <= param_2) {
          pbVar3 = param_1 + lVar2 + 0xc;
        }
      }
      return pbVar3;
    }
  }
  return (byte *)0x0;
}


// ===== 00510774  FUN_00510774 =====

void FUN_00510774(long *param_1,ushort *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  undefined4 uVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  if (param_2 != (ushort *)0x0) {
    *param_1 = (long)(param_2 + 2);
    uVar4 = param_2[1];
    bVar1 = *(byte *)((long)param_2 + 3);
    *(undefined4 *)(param_1 + 2) = 0;
    param_1[1] = (long)(param_2 + 2) + ((ulong)(byte)uVar4 << 10 | (ulong)bVar1 << 2);
    if (param_2[1] >> 8 != 0 || (param_2[1] & 0xff) != 0) {
      uVar2 = (uint)(*param_2 >> 8);
      uVar3 = (*param_2 & 0xff00ff) << 8;
      if ((uVar2 | uVar3) == 0xbede) {
        uVar5 = 1;
      }
      else {
        if ((uVar2 & 0xfff0 | uVar3) != 0x1000) {
          return;
        }
        uVar5 = 2;
      }
      *(undefined4 *)(param_1 + 2) = uVar5;
    }
  }
  return;
}


// ===== 005107e4  FUN_005107e4 =====

byte FUN_005107e4(undefined8 *param_1)

{
  if (*(int *)(param_1 + 2) == 2) {
    return *(byte *)*param_1;
  }
  if (*(int *)(param_1 + 2) == 1) {
    return *(byte *)*param_1 >> 4;
  }
  return 0;
}


// ===== 0051081c  FUN_0051081c =====

char FUN_0051081c(long *param_1)

{
  if ((int)param_1[2] == 2) {
    return *(char *)(*param_1 + 1);
  }
  if ((int)param_1[2] == 1) {
    return (*(byte *)*param_1 & 0xf) + 1;
  }
  return '\0';
}


// ===== 00510860  FUN_00510860 =====

long FUN_00510860(long *param_1)

{
  if ((int)param_1[2] == 2) {
    return *param_1 + 2;
  }
  if ((int)param_1[2] == 1) {
    return *param_1 + 1;
  }
  return 0;
}


// ===== 00510894  FUN_00510894 =====

bool FUN_00510894(undefined8 *param_1)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 2);
  if (iVar1 == 2) {
    pbVar2 = (byte *)*param_1;
    pbVar3 = pbVar2 + 2;
  }
  else {
    if (iVar1 != 1) {
      return false;
    }
    pbVar2 = (byte *)*param_1;
    pbVar3 = pbVar2 + 1;
  }
  if ((byte *)param_1[1] < pbVar3) {
    return false;
  }
  if (iVar1 == 2) {
    pbVar3 = pbVar2 + 2;
    uVar4 = (uint)pbVar2[1];
  }
  else if (iVar1 == 1) {
    pbVar3 = pbVar2 + 1;
    uVar4 = (*pbVar2 & 0xf) + 1;
  }
  else {
    pbVar3 = (byte *)0x0;
    uVar4 = 0;
  }
  return pbVar3 + uVar4 <= (byte *)param_1[1];
}


// ===== 00510918  FUN_00510918 =====

void FUN_00510918(long *param_1)

{
  uint uVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  ulong uVar5;
  byte *pbVar6;
  
  uVar1 = *(uint *)(param_1 + 2);
  if (uVar1 == 2) {
    pbVar3 = (byte *)(*param_1 + 2);
    uVar4 = (uint)*(byte *)(*param_1 + 1);
  }
  else if (uVar1 == 1) {
    pbVar3 = (byte *)*param_1 + 1;
    uVar4 = (*(byte *)*param_1 & 0xf) + 1;
  }
  else {
    pbVar3 = (byte *)0x0;
    uVar4 = 0;
  }
  pbVar3 = pbVar3 + uVar4;
  while( true ) {
    *param_1 = (long)pbVar3;
    uVar5 = (ulong)uVar1;
    if (uVar1 != 1) {
      if (uVar1 != 2) {
        return;
      }
      uVar5 = 2;
    }
    if ((byte *)param_1[1] < pbVar3 + uVar5) break;
    if (uVar1 == 2) {
      pbVar6 = pbVar3 + 2;
      uVar5 = (ulong)pbVar3[1];
    }
    else if (uVar1 == 1) {
      pbVar6 = pbVar3 + 1;
      uVar5 = ((ulong)*pbVar3 & 0xf) + 1;
    }
    else {
      pbVar6 = (byte *)0x0;
      uVar5 = 0;
    }
    if ((byte *)param_1[1] < pbVar6 + uVar5) {
      return;
    }
    bVar2 = *pbVar3;
    pbVar3 = pbVar3 + 1;
    if (bVar2 != 0) {
      return;
    }
  }
  return;
}


// ===== 005109d8  FUN_005109d8 =====

void FUN_005109d8(undefined2 *param_1)

{
  memset(param_1 + 1,0,0x646);
  *param_1 = 0xdebe;
  return;
}


// ===== 00510a0c  FUN_00510a0c =====

void FUN_00510a0c(long param_1,int param_2,ulong param_3,void *param_4)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x640);
  if ((param_3 < 0x640) && (uVar1 + 5 <= 0x640 - param_3)) {
    *(byte *)(uVar1 + param_1 + 4) = (char)param_3 - 1U | (byte)(param_2 << 4);
    memcpy((void *)(param_1 + *(long *)(param_1 + 0x640) + 5),param_4,param_3);
    uVar1 = param_3 + *(long *)(param_1 + 0x640) + 1;
    *(ulong *)(param_1 + 0x640) = uVar1;
  }
  *(ushort *)(param_1 + 2) =
       (ushort)((uint)(int)((double)uVar1 * 0.25) >> 8) & 0xff |
       (ushort)(((int)((double)uVar1 * 0.25) & 0xff00ffU) << 8);
  return;
}


// ===== 00510a9c  FUN_00510a9c =====

bool FUN_00510a9c(byte *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = ((ulong)*param_1 & 0xf) * 4;
  lVar2 = lVar1 + 0xc;
  if ((*param_1 >> 4 & 1) != 0) {
    lVar2 = lVar1 + (ulong)((uint)(*(ushort *)(param_1 + lVar1 + 0xe) >> 8) |
                           (*(ushort *)(param_1 + lVar1 + 0xe) & 0xff00ff) << 8) * 4 + 0x10;
  }
  if (lVar2 + 3 == param_2) {
    return *(short *)(param_1 + lVar2) == -8 && (param_1 + lVar2)[2] == 0xfe;
  }
  return false;
}


// ===== 00510af8  FUN_00510af8 =====

void FUN_00510af8(long *param_1,byte *param_2,byte param_3)

{
  byte *pbVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  
  lVar2 = ((ulong)*param_2 & 0xf) * 4;
  lVar4 = lVar2 + 0xc;
  if ((*param_2 >> 4 & 1) != 0) {
    lVar4 = lVar2 + (ulong)((uint)(*(ushort *)(param_2 + lVar2 + 0xe) >> 8) |
                           (*(ushort *)(param_2 + lVar2 + 0xe) & 0xff00ff) << 8) * 4 + 0x10;
  }
  pvVar3 = operator_new(lVar4 + 3U);
  *param_1 = (long)pvVar3;
  param_1[1] = (long)pvVar3;
  param_1[2] = (long)pvVar3 + lVar4 + 3U;
  FUN_00510bf4(param_1,pvVar3,param_2,param_2 + lVar4);
  pbVar1 = (byte *)*param_1;
  if ((byte *)param_1[1] != pbVar1) {
    *pbVar1 = *pbVar1 & 0xdf;
    lVar4 = *param_1;
    if (1 < (ulong)(param_1[1] - lVar4)) {
      *(byte *)(lVar4 + 1) = *(byte *)(lVar4 + 1) & 0x80 | param_3;
      FUN_00510bf4(param_1,param_1[1],&DAT_001f7423,
                   "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/");
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x587,
             "__n < size()","vector[] index out of bounds");
}


// ===== 00510bf4  FUN_00510bf4 =====

undefined1 * FUN_00510bf4(long *param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  long lVar1;
  undefined1 *__dest;
  undefined8 *puVar2;
  void *pvVar3;
  size_t sVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  void *__src;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  lVar16 = (long)param_4 - (long)param_3;
  puVar15 = param_2;
  if (0 < lVar16) {
    __dest = (undefined1 *)param_1[1];
    if (param_1[2] - (long)__dest < lVar16) {
      __src = (void *)*param_1;
      puVar15 = __dest + (lVar16 - (long)__src);
      if ((long)puVar15 < 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar5 = param_1[2] - (long)__src;
      puVar8 = (undefined1 *)(uVar5 * 2);
      if (puVar8 < puVar15 || (long)puVar8 - (long)puVar15 == 0) {
        puVar8 = puVar15;
      }
      if (0x3ffffffffffffffe < uVar5) {
        puVar8 = (undefined1 *)0x7fffffffffffffff;
      }
      if (puVar8 == (undefined1 *)0x0) {
        pvVar3 = (void *)0x0;
      }
      else {
        pvVar3 = operator_new((ulong)puVar8);
      }
      puVar15 = (undefined1 *)((long)pvVar3 + ((long)param_2 - (long)__src));
      puVar10 = puVar15;
      if (param_4 != param_3) {
        puVar10 = (undefined1 *)((long)__src - ((long)pvVar3 + (long)param_2));
        if (param_4 + ~(ulong)param_3 <= puVar10) {
          puVar10 = param_4 + ~(ulong)param_3;
        }
        puVar10 = puVar10 + 1;
        puVar6 = puVar15;
        if (((undefined1 *)0x20 < puVar10) &&
           ((undefined1 *)0x1f <
            (undefined1 *)((long)pvVar3 + (long)param_2) + (-(long)__src - (long)param_3))) {
          uVar5 = 0x20;
          if (((ulong)puVar10 & 0x1f) != 0) {
            uVar5 = (ulong)puVar10 & 0x1f;
          }
          lVar12 = (long)puVar10 - uVar5;
          puVar13 = (undefined8 *)((long)pvVar3 + ((long)param_2 - (long)__src) + 0x10);
          puVar10 = param_3 + lVar12;
          puVar6 = puVar15 + lVar12;
          puVar14 = (undefined8 *)(param_3 + 0x10);
          do {
            puVar2 = puVar14 + -1;
            uVar17 = puVar14[-2];
            uVar19 = puVar14[1];
            uVar18 = *puVar14;
            lVar12 = lVar12 + -0x20;
            puVar14 = puVar14 + 4;
            puVar13[-1] = *puVar2;
            puVar13[-2] = uVar17;
            puVar13[1] = uVar19;
            *puVar13 = uVar18;
            puVar13 = puVar13 + 4;
            param_3 = puVar10;
          } while (lVar12 != 0);
        }
        do {
          if (puVar6 == (undefined1 *)0x0) {
LAB_00510ee8:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                       ,0x23,"__location != nullptr","null pointer given to construct_at");
          }
          puVar10 = puVar6 + 1;
          *puVar6 = *param_3;
          puVar6 = puVar10;
          param_3 = param_3 + 1;
        } while (puVar10 != puVar15 + lVar16);
        __src = (void *)*param_1;
        puVar10 = puVar15 + lVar16;
      }
      memmove(puVar15 + ((long)__src - (long)param_2),__src,(long)param_2 - (long)__src);
      memmove(puVar10,param_2,(long)__dest - (long)param_2);
      param_1[2] = (long)((long)pvVar3 + (long)puVar8);
      *param_1 = (long)(puVar15 + ((long)__src - (long)param_2));
      param_1[1] = (long)(puVar10 + ((long)__dest - (long)param_2));
      if (__src != (void *)0x0) {
        operator_delete(__src);
      }
    }
    else {
      lVar12 = (long)__dest - (long)param_2;
      puVar10 = __dest;
      puVar8 = param_4;
      if (lVar12 < lVar16) {
        puVar8 = param_3 + lVar12;
        sVar4 = (long)param_4 - (long)puVar8;
        if (sVar4 != 0) {
          memmove(__dest,puVar8,sVar4);
        }
        param_1[1] = (long)(__dest + sVar4);
        puVar10 = __dest + sVar4;
        if (lVar12 < 1) {
          return param_2;
        }
      }
      puVar6 = puVar10 + -lVar16;
      puVar9 = puVar10;
      if (puVar6 < __dest) {
        lVar1 = lVar12;
        if (lVar12 <= lVar16) {
          lVar1 = lVar16;
        }
        puVar9 = __dest + (long)param_4 + ((~(ulong)param_2 - (long)param_3) - lVar1);
        if ((undefined1 *)-(long)puVar10 < puVar9) {
          puVar9 = (undefined1 *)-(long)puVar10;
        }
        puVar9 = puVar9 + 1;
        puVar11 = puVar10;
        if ((undefined1 *)0x20 < puVar9) {
          if (lVar12 <= lVar16) {
            lVar12 = lVar16;
          }
          if ((undefined1 *)0x1f <
              puVar10 + (long)(param_4 + (-lVar12 - (long)(param_2 + (long)param_3)))) {
            uVar5 = 0x20;
            if (((ulong)puVar9 & 0x1f) != 0) {
              uVar5 = (ulong)puVar9 & 0x1f;
            }
            lVar12 = (long)puVar9 - uVar5;
            puVar6 = puVar6 + lVar12;
            puVar11 = puVar10 + lVar12;
            puVar13 = (undefined8 *)(param_2 + lVar1 + 0x10);
            puVar14 = (undefined8 *)(param_2 + lVar1 + (long)param_3 + (0x10 - (long)param_4));
            do {
              puVar2 = puVar14 + -1;
              uVar17 = puVar14[-2];
              uVar19 = puVar14[1];
              uVar18 = *puVar14;
              lVar12 = lVar12 + -0x20;
              puVar14 = puVar14 + 4;
              puVar13[-1] = *puVar2;
              puVar13[-2] = uVar17;
              puVar13[1] = uVar19;
              *puVar13 = uVar18;
              puVar13 = puVar13 + 4;
            } while (lVar12 != 0);
          }
        }
        do {
          if (puVar11 == (undefined1 *)0x0) goto LAB_00510ee8;
          puVar7 = puVar6 + 1;
          puVar9 = puVar11 + 1;
          *puVar11 = *puVar6;
          puVar6 = puVar7;
          puVar11 = puVar9;
        } while (puVar7 < __dest);
      }
      param_1[1] = (long)puVar9;
      if (puVar10 != param_2 + lVar16) {
        sVar4 = (long)puVar10 - (long)(param_2 + lVar16);
        memmove(puVar10 + -sVar4,param_2,sVar4);
      }
      if ((long)puVar8 - (long)param_3 != 0) {
        memmove(param_2,param_3,(long)puVar8 - (long)param_3);
      }
    }
  }
  return puVar15;
}


// ===== 00510f14  FUN_00510f14 =====

undefined8 FUN_00510f14(void *param_1,byte *param_2,ulong param_3,byte *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  if (param_3 < 0xc) {
    if (param_3 == 0) {
      return 1;
    }
  }
  else if (((*param_2 & 0xc0) == 0x80) && ((byte)(param_2[1] + 0x20) < 0xe2)) {
    uVar3 = ((ulong)*param_2 & 0xf) * 4 + 0xc;
    if (param_3 < uVar3) {
      return 0;
    }
    lVar2 = *(long *)(param_4 + 0x640);
    if ((lVar2 + uVar3 < 0x641) && ((lVar2 == 0 || (uVar3 < lVar2 + uVar3)))) {
      memcpy(param_4 + lVar2,param_2,uVar3);
      lVar2 = *(long *)(param_4 + 0x640) + uVar3;
      *(long *)(param_4 + 0x640) = lVar2;
    }
    if (*(long *)((long)param_1 + 0x640) == 0) {
      *param_4 = *param_4 & 0xef;
    }
    else {
      *param_4 = *param_4 | 0x10;
      if (*(ulong *)((long)param_1 + 0x640) != 0) {
        uVar3 = (ulong)(uint)(int)((double)*(ulong *)((long)param_1 + 0x640) * 0.25) * 4 + 4;
        if ((lVar2 + uVar3 < 0x641) && ((lVar2 == 0 || (uVar3 < lVar2 + uVar3)))) {
          memcpy(param_4 + lVar2,param_1,uVar3);
          lVar2 = *(long *)(param_4 + 0x640) + uVar3;
          *(long *)(param_4 + 0x640) = lVar2;
        }
      }
    }
    lVar1 = ((ulong)*param_2 & 0xf) * 4;
    uVar3 = lVar1 + 0xc;
    if ((*param_2 >> 4 & 1) != 0) {
      uVar3 = lVar1 + (ulong)((uint)(*(ushort *)(param_2 + lVar1 + 0xe) >> 8) |
                             (*(ushort *)(param_2 + lVar1 + 0xe) & 0xff00ff) << 8) * 4 + 0x10;
    }
    if (param_3 < uVar3) {
      return 0;
    }
    param_3 = param_3 - uVar3;
    if (param_3 == 0) {
      return 1;
    }
    if (0x640 < lVar2 + param_3) {
      return 1;
    }
    if ((lVar2 != 0) && (lVar2 + param_3 <= param_3)) {
      return 1;
    }
    param_2 = param_2 + uVar3;
    goto LAB_00511060;
  }
  lVar2 = *(long *)(param_4 + 0x640);
  if ((0x640 < lVar2 + param_3) || ((lVar2 != 0 && (lVar2 + param_3 <= param_3)))) {
    return 1;
  }
LAB_00511060:
  memcpy(param_4 + lVar2,param_2,param_3);
  *(ulong *)(param_4 + 0x640) = *(long *)(param_4 + 0x640) + param_3;
  return 1;
}


// ===== 005110ec  _INIT_11 =====

void _INIT_11(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_0053ce34(auStack_30);
  uVar2 = FUN_0053cfd4(auStack_30,PTR_DAT_00d51b28);
  FUN_0053ceec(auStack_30);
  DAT_00d61168 = uVar2;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00511158  FUN_00511158 =====

undefined1  [16] FUN_00511158(void)

{
  long lVar1;
  ulong uVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  FUN_005467a4(&DAT_00d61170);
  lVar1 = FUN_005183d8();
  uVar2 = lVar1 - DAT_00d61198;
  if (999999999 < (long)uVar2) {
    DAT_00d61198 = lVar1;
    dVar3 = (double)FUN_005125a4();
    if (((dVar3 < 0.0) || (DAT_00d595a8 < 0.0)) || (3000000000 < uVar2)) {
      DAT_00d595b0 = -1.0;
      DAT_00d595a8 = dVar3;
    }
    else {
      DAT_00d595b0 = ((dVar3 - DAT_00d595a8) * 100.0) / ((double)(long)uVar2 / 1000000000.0);
      DAT_00d595a8 = dVar3;
    }
  }
  dVar3 = DAT_00d595b0;
  FUN_005467c8(&DAT_00d61170);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = dVar3;
  return auVar4;
}


// ===== 00511238  thunk_FUN_00546ab0 =====

int thunk_FUN_00546ab0(pthread_mutex_t *param_1)

{
  int iVar1;
  
  iVar1 = pthread_mutex_destroy(param_1);
  return iVar1;
}


// ===== 0051123c  FUN_0051123c =====

void FUN_0051123c(long param_1)

{
  FUN_00511244(param_1,*(undefined8 *)(param_1 + 8));
  return;
}


// ===== 00511244  FUN_00511244 =====

void FUN_00511244(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    FUN_00511244(param_1,*param_2);
    FUN_00511244(param_1,param_2[1]);
    if (*(char *)((long)param_2 + 0x4f) < '\0') {
      operator_delete((void *)param_2[7]);
      cVar1 = *(char *)((long)param_2 + 0x37);
    }
    else {
      cVar1 = *(char *)((long)param_2 + 0x37);
    }
    if (cVar1 < '\0') {
      operator_delete((void *)param_2[4]);
    }
    operator_delete(param_2);
    return;
  }
  return;
}


// ===== 005112b0  _INIT_12 =====

void _INIT_12(void)

{
  __cxa_atexit(PTR_FUN_00d51ac8,&DAT_00d61170,&PTR_LOOP_00d19390);
  __cxa_atexit(thunk_FUN_00546ab0,&DAT_00d611a0,&PTR_LOOP_00d19390);
  DAT_00d611d8 = 0;
  DAT_00d611d0 = 0;
  DAT_00d611c8 = &DAT_00d611d0;
  __cxa_atexit(FUN_0051123c,&DAT_00d611c8,&PTR_LOOP_00d19390);
  return;
}


// ===== 00511324  FUN_00511324 =====

void FUN_00511324(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_0051133c(param_1,param_2,param_3);
  return;
}


// ===== 0051133c  FUN_0051133c =====

void FUN_0051133c(long *param_1,byte *param_2,ulong param_3)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  long lVar4;
  char *pcVar5;
  long *plVar6;
  ulong uVar7;
  char *pcVar8;
  byte *pbVar9;
  ulong uVar10;
  
  bVar2 = *(byte *)((long)param_1 + 0x17);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_3 + 2;
  uVar7 = param_1[1];
  if (-1 < (char)bVar2) {
    uVar7 = (ulong)bVar2;
  }
  lVar4 = (SUB168(auVar3 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0x7ffffffffffffffe) * 2;
  uVar10 = uVar7 + lVar4;
  if (uVar7 < uVar10) {
    FUN_0054809c(param_1,lVar4,0);
  }
  else {
    if ((char)bVar2 < '\0') {
      plVar6 = (long *)*param_1;
      param_1[1] = uVar10;
    }
    else {
      if (0x16 < uVar10) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                   "__s < __min_cap",
                   "__s should never be greater than or equal to the short string capacity");
      }
      *(char *)((long)param_1 + 0x17) = (char)uVar10;
      plVar6 = param_1;
    }
    *(undefined1 *)((long)plVar6 + uVar10) = 0;
  }
  bVar2 = *(byte *)((long)param_1 + 0x17);
  uVar10 = param_1[1];
  if (-1 < (char)bVar2) {
    uVar10 = (ulong)bVar2;
  }
  if (uVar10 < uVar7) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/string",0xd57,
               "__pos <= size()","string index out of bounds");
  }
  plVar6 = (long *)*param_1;
  if (-1 < (char)bVar2) {
    plVar6 = param_1;
  }
  pcVar8 = (char *)((long)plVar6 + uVar7);
  if (0 < (long)param_3) {
    pbVar1 = param_2 + param_3;
    pcVar5 = pcVar8;
    do {
      pbVar9 = param_2 + 1;
      bVar2 = *param_2;
      if (pbVar9 < pbVar1) {
        pbVar9 = param_2 + 2;
        uVar7 = (ulong)param_2[1] << 8;
        if (pbVar9 < pbVar1) goto LAB_00511408;
LAB_00511494:
        uVar10 = 0;
        param_2 = pbVar9;
      }
      else {
        uVar7 = 0;
        if (pbVar1 <= pbVar9) goto LAB_00511494;
LAB_00511408:
        param_2 = pbVar9 + 1;
        uVar10 = (ulong)*pbVar9;
      }
      *pcVar5 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                [((ulong)bVar2 << 0x10) >> 0x12];
      pcVar5[1] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                  [(uVar7 | (ulong)bVar2 << 0x10) >> 0xc & 0x3f];
      pcVar5[2] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                  [(ulong)(((uint)uVar10 | (uint)uVar7) >> 6) & 0x3f];
      pcVar8 = pcVar5 + 4;
      pcVar5[3] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[uVar10 & 0x3f];
      pcVar5 = pcVar8;
    } while (param_2 < pbVar1);
  }
  if ((param_3 % 3 != 0) && (uVar7 = param_3 % 3 ^ 3, uVar7 != 0)) {
    pcVar8[-1] = '=';
    if ((1 < uVar7) && (pcVar8[-2] = '=', uVar7 != 2)) {
      pcVar8[-3] = '=';
    }
  }
  return;
}


// ===== 00511544  FUN_00511544 =====

void FUN_00511544(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  byte *pbVar5;
  void *pvVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  void *pvVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  uint uVar17;
  size_t sVar18;
  byte bVar19;
  undefined2 uVar20;
  uint uVar21;
  
  bVar19 = *(byte *)((long)param_2 + 0x17);
  uVar16 = param_2[1];
  if (-1 < (char)bVar19) {
    uVar16 = (ulong)bVar19;
  }
  if (uVar16 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  uVar8 = uVar16 & 3;
  uVar7 = (uint)uVar16;
  if (uVar8 == 0) {
    plVar1 = (long *)*param_2;
    if (-1 < (char)bVar19) {
      plVar1 = param_2;
    }
    if (*(char *)((long)plVar1 + (uVar16 - 1)) == '=') goto LAB_005115d0;
    uVar17 = 0;
    bVar4 = false;
    bVar3 = false;
    uVar7 = uVar7 & 0xfffffffc;
LAB_0051162c:
    uVar16 = (uVar16 * 3 >> 2) - (ulong)uVar17;
  }
  else {
    if (uVar8 == 3) {
      bVar4 = true;
      uVar7 = uVar7 - 2 & 0xfffffffc;
      uVar17 = 2;
    }
    else {
LAB_005115d0:
      if (uVar16 < 2) goto LAB_00511b6c;
      bVar3 = true;
      plVar1 = (long *)*param_2;
      if (-1 < (char)bVar19) {
        plVar1 = param_2;
      }
      bVar4 = *(char *)((long)plVar1 + (uVar16 - 2)) == '=';
      uVar17 = 1;
      if (bVar4) {
        uVar17 = 2;
      }
      uVar7 = uVar7 - uVar17 & 0xfffffffc;
      if (uVar8 == 0) goto LAB_0051162c;
    }
    bVar3 = true;
    uVar16 = (ulong)((uVar17 ^ 3) + (uVar7 * 3 >> 2));
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (uVar16 == 0) {
    pbVar15 = (byte *)0x0;
    pbVar5 = (byte *)0x0;
  }
  else {
    if ((long)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pbVar5 = (byte *)operator_new(uVar16);
    pbVar15 = pbVar5 + uVar16;
    *param_1 = pbVar5;
    param_1[1] = pbVar5;
    param_1[2] = pbVar15;
  }
  if (uVar7 != 0) {
    uVar16 = 0;
    pbVar14 = pbVar5;
    do {
      bVar19 = *(byte *)((long)param_2 + 0x17);
      uVar8 = param_2[1];
      if (-1 < (char)bVar19) {
        uVar8 = (ulong)bVar19;
      }
      if (uVar8 < uVar16) goto LAB_00511b6c;
      plVar1 = (long *)*param_2;
      if (-1 < (char)bVar19) {
        plVar1 = param_2;
      }
      if ((ulong)*(byte *)((long)plVar1 + uVar16) < 0x7b) {
        uVar17 = (uint)(byte)"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                             [(ulong)*(byte *)((long)plVar1 + uVar16) + 0x40];
      }
      else {
        uVar17 = 0;
      }
      if (uVar8 < uVar16 + 1) goto LAB_00511b6c;
      uVar11 = (ulong)*(byte *)((long)plVar1 + uVar16 + 1);
      if (uVar11 < 0x7b) {
        uVar10 = (uint)(byte)"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                             [uVar11 + 0x40];
      }
      else {
        uVar10 = 0;
      }
      if (uVar8 < uVar16 + 2) goto LAB_00511b6c;
      uVar11 = (ulong)*(byte *)((long)plVar1 + uVar16 + 2);
      if (uVar11 < 0x7b) {
        uVar21 = (uint)(byte)"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                             [uVar11 + 0x40];
      }
      else {
        uVar21 = 0;
      }
      if (uVar8 < uVar16 + 3) goto LAB_00511b6c;
      uVar8 = (ulong)*(byte *)((long)plVar1 + uVar16 + 3);
      if (uVar8 < 0x7b) {
        bVar19 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[uVar8 + 0x40];
      }
      else {
        bVar19 = 0;
      }
      bVar2 = (byte)((uVar10 << 0xc) >> 0x10) | (byte)((uVar17 << 0x12) >> 0x10);
      if (pbVar5 < pbVar15) {
        if (pbVar5 == (byte *)0x0) goto LAB_00511b94;
        pbVar13 = pbVar5 + 1;
        *pbVar5 = bVar2;
        param_1[1] = pbVar13;
        pbVar5 = pbVar14;
      }
      else {
        sVar18 = (long)pbVar5 - (long)pbVar14;
        uVar8 = sVar18 + 1;
        if ((long)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar11 = ((long)pbVar15 - (long)pbVar14) * 2;
        if (uVar11 < uVar8 || uVar11 - uVar8 == 0) {
          uVar11 = uVar8;
        }
        if (0x3ffffffffffffffe < (ulong)((long)pbVar15 - (long)pbVar14)) {
          uVar11 = 0x7fffffffffffffff;
        }
        if (uVar11 == 0) goto LAB_00511b94;
        pbVar5 = (byte *)operator_new(uVar11);
        pbVar15 = pbVar5 + uVar11;
        pbVar13 = pbVar5 + sVar18 + 1;
        pbVar5[sVar18] = bVar2;
        memmove(pbVar5,pbVar14,sVar18);
        *param_1 = pbVar5;
        param_1[1] = pbVar13;
        param_1[2] = pbVar15;
        if (pbVar14 != (byte *)0x0) {
          operator_delete(pbVar14);
        }
      }
      bVar2 = (byte)((uVar21 << 6) >> 8) | (byte)((uVar10 << 0xc) >> 8);
      if (pbVar13 < pbVar15) {
        pbVar14 = pbVar13 + 1;
        *pbVar13 = bVar2;
        param_1[1] = pbVar14;
        pbVar13 = pbVar5;
      }
      else {
        sVar18 = (long)pbVar13 - (long)pbVar5;
        uVar8 = sVar18 + 1;
        if ((long)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar11 = ((long)pbVar15 - (long)pbVar5) * 2;
        if (uVar11 < uVar8 || uVar11 - uVar8 == 0) {
          uVar11 = uVar8;
        }
        if (0x3ffffffffffffffe < (ulong)((long)pbVar15 - (long)pbVar5)) {
          uVar11 = 0x7fffffffffffffff;
        }
        if (uVar11 == 0) goto LAB_00511b94;
        pbVar13 = (byte *)operator_new(uVar11);
        pbVar15 = pbVar13 + uVar11;
        pbVar14 = pbVar13 + sVar18 + 1;
        pbVar13[sVar18] = bVar2;
        memmove(pbVar13,pbVar5,sVar18);
        *param_1 = pbVar13;
        param_1[1] = pbVar14;
        param_1[2] = pbVar15;
        if (pbVar5 != (byte *)0x0) {
          operator_delete(pbVar5);
        }
      }
      bVar19 = bVar19 | (byte)(uVar21 << 6);
      if (pbVar14 < pbVar15) {
        pbVar5 = pbVar14 + 1;
        *pbVar14 = bVar19;
        param_1[1] = pbVar5;
        pbVar14 = pbVar13;
      }
      else {
        sVar18 = (long)pbVar14 - (long)pbVar13;
        uVar8 = sVar18 + 1;
        if ((long)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar11 = ((long)pbVar15 - (long)pbVar13) * 2;
        if (uVar11 < uVar8 || uVar11 - uVar8 == 0) {
          uVar11 = uVar8;
        }
        if (0x3ffffffffffffffe < (ulong)((long)pbVar15 - (long)pbVar13)) {
          uVar11 = 0x7fffffffffffffff;
        }
        if (uVar11 == 0) goto LAB_00511b94;
        pbVar14 = (byte *)operator_new(uVar11);
        pbVar15 = pbVar14 + uVar11;
        pbVar5 = pbVar14 + sVar18 + 1;
        pbVar14[sVar18] = bVar19;
        memmove(pbVar14,pbVar13,sVar18);
        *param_1 = pbVar14;
        param_1[1] = pbVar5;
        param_1[2] = pbVar15;
        if (pbVar13 != (byte *)0x0) {
          operator_delete(pbVar13);
        }
      }
      uVar16 = uVar16 + 4;
    } while ((uint)uVar16 < uVar7);
  }
  if (bVar3) {
    bVar19 = *(byte *)((long)param_2 + 0x17);
    uVar8 = (ulong)uVar7;
    uVar16 = param_2[1];
    if (-1 < (char)bVar19) {
      uVar16 = (ulong)bVar19;
    }
    if (uVar16 < uVar8) {
LAB_00511b6c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/string",0xd4e,
                 "__pos <= size()","string index out of bounds");
    }
    plVar1 = (long *)*param_2;
    if (-1 < (char)bVar19) {
      plVar1 = param_2;
    }
    if ((ulong)*(byte *)((long)plVar1 + uVar8) < 0x7b) {
      bVar19 = (byte)(((uint)(byte)"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                                   [(ulong)*(byte *)((long)plVar1 + uVar8) + 0x40] << 0x12) >> 0x10)
      ;
    }
    else {
      bVar19 = 0;
    }
    if (uVar16 < (uVar8 | 1)) goto LAB_00511b6c;
    uVar16 = (ulong)*(byte *)((long)plVar1 + (uVar8 | 1));
    if (uVar16 < 0x7b) {
      uVar20 = (undefined2)
               (((uint)(byte)"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                             [uVar16 + 0x40] << 0xc) >> 8);
    }
    else {
      uVar20 = 0;
    }
    bVar19 = (byte)((ushort)uVar20 >> 8) | bVar19;
    if (pbVar5 < (byte *)param_1[2]) {
      if (pbVar5 == (byte *)0x0) goto LAB_00511b94;
      pbVar15 = pbVar5 + 1;
      *pbVar5 = bVar19;
      param_1[1] = pbVar15;
    }
    else {
      pvVar12 = (void *)*param_1;
      sVar18 = (long)pbVar5 - (long)pvVar12;
      uVar16 = sVar18 + 1;
      if ((long)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar9 = (long)param_1[2] - (long)pvVar12;
      uVar11 = uVar9 * 2;
      if (uVar11 < uVar16 || uVar11 - uVar16 == 0) {
        uVar11 = uVar16;
      }
      if (0x3ffffffffffffffe < uVar9) {
        uVar11 = 0x7fffffffffffffff;
      }
      if (uVar11 == 0) goto LAB_00511b94;
      pvVar6 = operator_new(uVar11);
      pbVar15 = (byte *)((long)pvVar6 + sVar18) + 1;
      *(byte *)((long)pvVar6 + sVar18) = bVar19;
      memmove(pvVar6,pvVar12,sVar18);
      *param_1 = pvVar6;
      param_1[1] = pbVar15;
      param_1[2] = (long)pvVar6 + uVar11;
      if (pvVar12 != (void *)0x0) {
        operator_delete(pvVar12);
      }
    }
    if (!bVar4) {
      bVar19 = *(byte *)((long)param_2 + 0x17);
      uVar16 = param_2[1];
      if (-1 < (char)bVar19) {
        uVar16 = (ulong)bVar19;
      }
      if (uVar16 < (uVar8 | 2)) goto LAB_00511b6c;
      plVar1 = (long *)*param_2;
      if (-1 < (char)bVar19) {
        plVar1 = param_2;
      }
      uVar16 = (ulong)*(byte *)((long)plVar1 + (uVar8 | 2));
      if (uVar16 < 0x7b) {
        bVar19 = (byte)(((uint)(byte)"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                                     [uVar16 + 0x40] << 6) >> 8);
      }
      else {
        bVar19 = 0;
      }
      bVar19 = bVar19 | (byte)uVar20;
      if (pbVar15 < (byte *)param_1[2]) {
        *pbVar15 = bVar19;
        param_1[1] = pbVar15 + 1;
      }
      else {
        pvVar12 = (void *)*param_1;
        sVar18 = (long)pbVar15 - (long)pvVar12;
        uVar16 = sVar18 + 1;
        if ((long)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar11 = (long)param_1[2] - (long)pvVar12;
        uVar8 = uVar11 * 2;
        if (uVar8 < uVar16 || uVar8 - uVar16 == 0) {
          uVar8 = uVar16;
        }
        if (0x3ffffffffffffffe < uVar11) {
          uVar8 = 0x7fffffffffffffff;
        }
        if (uVar8 == 0) {
LAB_00511b94:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                     ,0x23,"__location != nullptr","null pointer given to construct_at");
        }
        pvVar6 = operator_new(uVar8);
        *(byte *)((long)pvVar6 + sVar18) = bVar19;
        memmove(pvVar6,pvVar12,sVar18);
        *param_1 = pvVar6;
        param_1[1] = (byte *)((long)pvVar6 + sVar18) + 1;
        param_1[2] = (long)pvVar6 + uVar8;
        if (pvVar12 != (void *)0x0) {
          operator_delete(pvVar12);
          return;
        }
      }
    }
  }
  return;
}


// ===== 00511bd4  FUN_00511bd4 =====

void FUN_00511bd4(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *__src;
  ulong uVar2;
  undefined8 *__dest;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    uVar4 = param_2[1];
    uVar3 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar4;
    *param_1 = uVar3;
    return;
  }
  __src = (undefined8 *)*param_2;
  uVar2 = param_2[1];
  if (uVar2 < 5) {
    *(char *)((long)param_1 + 0x17) = (char)uVar2;
    __dest = param_1;
  }
  else {
    if (0x3fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (0x3ffffffffffffffe < (uVar2 | 3)) {
                    /* WARNING: Subroutine does not return */
      FUN_00401ad4();
    }
    uVar1 = (uVar2 | 3) + 1;
    __dest = (undefined8 *)operator_new(uVar1 * 4);
    *param_1 = __dest;
    param_1[1] = uVar2;
    param_1[2] = uVar1 | 0x8000000000000000;
  }
  if ((__dest <= __src) && (__src < (undefined8 *)((long)__dest + (uVar2 + 1) * 4))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0x154,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  memmove(__dest,__src,(uVar2 + 1) * 4);
  return;
}


// ===== 00511cc0  FUN_00511cc0 =====

void FUN_00511cc0(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  
  plVar1 = (long *)*param_2;
  uVar2 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    plVar1 = param_2;
    uVar2 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  if (uVar2 != 0) {
    do {
      uVar3 = uVar2;
      if (uVar3 == 0) goto LAB_00511d14;
      uVar2 = uVar3 - 1;
    } while (*(char *)((long)plVar1 + (uVar3 - 1)) != '/');
    if (uVar3 - 1 != 0xffffffffffffffff) {
      FUN_00547e10(param_1,param_2,uVar3,0xffffffffffffffff,param_2);
      return;
    }
  }
LAB_00511d14:
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ===== 00511d20  _INIT_13 =====

void _INIT_13(void)

{
  FUN_0053ce34(&DAT_00d611e0);
  __cxa_atexit(PTR_FUN_00d51b30,&DAT_00d611e0,&PTR_LOOP_00d19390);
  DAT_00d611e8 = FUN_0053cfd4(&DAT_00d611e0,PTR_DAT_00d51b28);
  DAT_00d611f0 = FUN_0053cfd4(&DAT_00d611e0,PTR_DAT_00d51d48);
  return;
}


// ===== 00511d90  FUN_00511d90 =====

void FUN_00511d90(undefined8 *param_1)

{
  char cVar1;
  
  if ((long *)param_1[6] != (long *)0x0) {
    (**(code **)(*(long *)param_1[6] + 8))();
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
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


// ===== 00511df0  FUN_00511df0 =====

void FUN_00511df0(undefined8 *param_1)

{
  char cVar1;
  
  if ((long *)param_1[6] != (long *)0x0) {
    (**(code **)(*(long *)param_1[6] + 8))();
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
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


// ===== 00511e50  FUN_00511e50 =====

void FUN_00511e50(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  uVar1 = param_1[1];
  puVar2 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar2 = param_1;
  }
  FUN_00511ec0(&DAT_00d61240,puVar2,(long)puVar2 + uVar1);
  return;
}


// ===== 00511e78  FUN_00511e78 =====

void FUN_00511e78(void *param_1)

{
  FUN_00544dd4();
  operator_delete(param_1);
  return;
}


// ===== 00511e9c  FUN_00511e9c =====

void FUN_00511e9c(void *param_1)

{
  FUN_00544dd4();
  operator_delete(param_1);
  return;
}


// ===== 00511ec0  FUN_00511ec0 =====

void FUN_00511ec0(long *param_1,long param_2,ulong param_3,ulong param_4)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long local_80;
  ulong local_78;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(long *)(param_2 + 0x30) != 0) {
    lVar11 = param_4 - param_3;
    uVar10 = lVar11 * 2;
    if (0x3fffffffffffffef < uVar10) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (uVar10 < 5) {
      *(char *)((long)param_1 + 0x17) = (char)uVar10;
      plVar6 = param_1;
      if (param_4 != param_3) goto LAB_00511f64;
    }
    else {
      if (0x3ffffffffffffffe < (uVar10 | 3)) {
                    /* WARNING: Subroutine does not return */
        FUN_00401ad4();
      }
      uVar9 = (uVar10 | 3) + 1;
      plVar6 = (long *)operator_new(uVar9 * 4);
      *param_1 = (long)plVar6;
      param_1[1] = uVar10;
      param_1[2] = uVar9 | 0x8000000000000000;
LAB_00511f64:
      memset(plVar6,0,lVar11 * 8);
    }
    *(undefined4 *)(plVar6 + lVar11) = 0;
    if (param_3 == param_4) goto LAB_00512158;
    bVar1 = *(byte *)((long)param_1 + 0x17);
    uVar10 = (param_1[2] & 0x7fffffffffffffffU) - 1;
    uVar9 = param_1[1];
    if (-1 < (char)bVar1) {
      uVar10 = 4;
      uVar9 = (ulong)bVar1;
    }
    if (uVar10 < uVar9 || uVar10 - uVar9 == 0) {
      if ((char)bVar1 < '\0') {
        plVar6 = (long *)*param_1;
        param_1[1] = uVar10;
      }
      else {
        if (4 < uVar10) {
LAB_00512228:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                     "__s < __min_cap",
                     "__s should never be greater than or equal to the short string capacity");
        }
        *(char *)((long)param_1 + 0x17) = (char)uVar10;
        plVar6 = param_1;
      }
      *(undefined4 *)((long)plVar6 + uVar10 * 4) = 0;
    }
    else {
      FUN_00548adc(param_1,uVar10 - uVar9,0);
    }
    uVar10 = param_1[1];
    plVar6 = (long *)*param_1;
    if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
      uVar10 = (ulong)*(byte *)((long)param_1 + 0x17);
      plVar6 = param_1;
    }
    local_70 = *(undefined8 *)(param_2 + 0x38);
    lVar11 = (long)plVar6 + uVar10 * 4;
    do {
      iVar3 = (**(code **)(**(long **)(param_2 + 0x30) + 0x20))
                        (*(long **)(param_2 + 0x30),&local_70,param_3,param_4,&local_78,plVar6,
                         lVar11,&local_80);
      *(ulong *)(param_2 + 0x40) = (local_78 - param_3) + *(long *)(param_2 + 0x40);
      if (local_78 - param_3 == 0) {
LAB_00512124:
        uVar4 = (uint)*(byte *)((long)param_1 + 0x17);
        break;
      }
      if (iVar3 != 1) {
        if (iVar3 == 0) {
          bVar1 = *(byte *)((long)param_1 + 0x17);
          plVar6 = (long *)*param_1;
          if (-1 < (char)bVar1) {
            plVar6 = param_1;
          }
          uVar9 = local_80 - (long)plVar6;
          uVar10 = param_1[1];
          if (-1 < (char)bVar1) {
            uVar10 = (ulong)bVar1;
          }
          uVar5 = (long)uVar9 >> 2;
          if (uVar10 <= uVar5 && uVar5 - uVar10 != 0) {
            FUN_00548adc(param_1,uVar5 - uVar10,0);
            goto LAB_00512158;
          }
          if ((char)bVar1 < '\0') {
            param_1[1] = uVar5;
            *(undefined4 *)(*param_1 + uVar5 * 4) = 0;
          }
          else {
            if (0x13 < uVar9) goto LAB_00512228;
            *(char *)((long)param_1 + 0x17) = (char)(uVar9 >> 2);
            *(undefined4 *)((long)param_1 + uVar5 * 4) = 0;
          }
          goto LAB_00512158;
        }
        if (iVar3 != 3) goto LAB_00512124;
        bVar1 = *(byte *)((long)param_1 + 0x17);
        plVar8 = (long *)*param_1;
        plVar7 = plVar8;
        if (-1 < (char)bVar1) {
          plVar7 = param_1;
        }
        uVar9 = (long)plVar6 - (long)plVar7;
        uVar10 = param_1[1];
        if (-1 < (char)bVar1) {
          uVar10 = (ulong)bVar1;
        }
        uVar5 = (long)uVar9 >> 2;
        if (uVar5 < uVar10 || uVar5 - uVar10 == 0) {
          if ((char)bVar1 < '\0') {
            param_1[1] = uVar5;
          }
          else {
            if (0x13 < uVar9) goto LAB_00512228;
            *(char *)((long)param_1 + 0x17) = (char)(uVar9 >> 2);
            plVar8 = param_1;
          }
          *(undefined4 *)((long)plVar8 + uVar5 * 4) = 0;
        }
        else {
          FUN_00548adc(param_1,uVar5 - uVar10,0);
        }
        FUN_00512260(param_1,param_3,param_4);
        goto LAB_00512158;
      }
      bVar1 = *(byte *)((long)param_1 + 0x17);
      plVar7 = (long *)*param_1;
      plVar6 = plVar7;
      if (-1 < (char)bVar1) {
        plVar6 = param_1;
      }
      uVar9 = local_80 - (long)plVar6;
      uVar10 = param_1[1];
      if (-1 < (char)bVar1) {
        uVar10 = (ulong)bVar1;
      }
      uVar5 = (long)uVar9 >> 1;
      if (uVar5 < uVar10 || uVar5 - uVar10 == 0) {
        if ((char)bVar1 < '\0') {
          param_1[1] = uVar5;
        }
        else {
          if (9 < uVar9) goto LAB_00512228;
          *(char *)((long)param_1 + 0x17) = (char)(uVar9 >> 1);
          plVar7 = param_1;
        }
        *(undefined4 *)((long)plVar7 + uVar5 * 4) = 0;
      }
      else {
        FUN_00548adc(param_1,uVar5 - uVar10,0);
      }
      uVar4 = (uint)(char)*(byte *)((long)param_1 + 0x17);
      plVar7 = (long *)*param_1;
      uVar10 = param_1[1];
      if (-1 < (int)uVar4) {
        plVar7 = param_1;
        uVar10 = (ulong)*(byte *)((long)param_1 + 0x17);
      }
      plVar6 = (long *)((long)plVar7 + ((long)uVar9 >> 2) * 4);
      lVar11 = (long)plVar7 + uVar10 * 4;
      param_3 = local_78;
    } while (local_78 < param_4);
    if ((uVar4 >> 7 & 1) != 0) {
      operator_delete((void *)*param_1);
    }
  }
  uVar10 = *(ulong *)(param_2 + 0x20);
  if (-1 < (char)*(byte *)(param_2 + 0x2f)) {
    uVar10 = (ulong)*(byte *)(param_2 + 0x2f);
  }
  if (uVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_00511bd4(param_1,param_2 + 0x18);
LAB_00512158:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00512260  FUN_00512260 =====

ulong * FUN_00512260(ulong *param_1,undefined4 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  size_t __n;
  ulong *puVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 **ppuVar7;
  ulong *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  char cVar11;
  undefined4 *puVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 *local_70;
  ulong local_68;
  undefined8 uStack_60;
  long local_58;
  
  ppuVar7 = &local_70;
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  bVar3 = *(byte *)((long)param_1 + 0x17);
  uVar1 = param_1[1];
  if (-1 < (char)bVar3) {
    uVar1 = (ulong)bVar3;
  }
  lVar13 = (param_1[2] & 0x7fffffffffffffff) - 1;
  if (-1 < (char)bVar3) {
    lVar13 = 4;
  }
  uVar4 = (long)param_3 - (long)param_2;
  if (uVar4 == 0) goto LAB_0051246c;
  puVar8 = (ulong *)*param_1;
  uVar18 = (long)uVar4 >> 2;
  puVar2 = puVar8;
  if (-1 < (char)bVar3) {
    puVar2 = param_1;
  }
  if ((puVar2 <= param_2) && (param_2 <= (undefined4 *)((long)puVar2 + uVar1 * 4))) {
    if ((long)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (uVar4 < 0x14) {
      uStack_60 = CONCAT17((char)(uVar4 >> 2),(undefined7)uStack_60);
    }
    else {
      uVar1 = (uVar18 | 3) + 1;
      ppuVar7 = (undefined1 **)operator_new(uVar1 * 4);
      uStack_60 = uVar1 | 0x8000000000000000;
      local_70 = (undefined1 *)ppuVar7;
      local_68 = uVar18;
    }
    __n = (uVar4 - 4 & 0xfffffffffffffffc) + 4;
    memcpy(ppuVar7,param_2,__n);
    *(undefined4 *)((long)ppuVar7 + __n) = 0;
    uVar1 = local_68;
    ppuVar7 = (undefined1 **)local_70;
    if (-1 < (long)uStack_60) {
      uVar1 = uStack_60 >> 0x38;
      ppuVar7 = &local_70;
    }
    FUN_00548978(param_1,ppuVar7,uVar1);
    if ((long)uStack_60 < 0) {
      operator_delete(local_70);
    }
    goto LAB_0051246c;
  }
  if (lVar13 - uVar1 < uVar18) {
    FUN_00548618(param_1,lVar13,(uVar1 + uVar18) - lVar13,uVar1,uVar1,0,0);
    cVar11 = *(char *)((long)param_1 + 0x17);
    puVar8 = (ulong *)*param_1;
  }
  else {
    cVar11 = (char)(param_1[2] >> 0x38);
  }
  if (-1 < cVar11) {
    puVar8 = param_1;
  }
  puVar9 = (undefined4 *)((long)puVar8 + uVar1 * 4);
  if ((uVar4 - 4 < 0x1c) || ((long)puVar8 + (uVar1 * 4 - (long)param_2) < 0x20)) {
LAB_00512438:
    do {
      puVar12 = param_2 + 1;
      puVar10 = puVar9 + 1;
      *puVar9 = *param_2;
      puVar9 = puVar10;
      param_2 = puVar12;
    } while (puVar12 != param_3);
  }
  else {
    puVar15 = (undefined8 *)(param_2 + 4);
    uVar4 = (uVar4 - 4 >> 2) + 1;
    puVar16 = (undefined8 *)((long)puVar8 + uVar1 * 4 + 0x10);
    uVar14 = uVar4 & 0x7ffffffffffffff8;
    puVar9 = puVar9 + uVar14;
    param_2 = param_2 + uVar14;
    uVar17 = uVar14;
    do {
      puVar6 = puVar15 + -1;
      uVar19 = puVar15[-2];
      uVar21 = puVar15[1];
      uVar20 = *puVar15;
      puVar15 = puVar15 + 4;
      uVar17 = uVar17 - 8;
      puVar16[-1] = *puVar6;
      puVar16[-2] = uVar19;
      puVar16[1] = uVar21;
      *puVar16 = uVar20;
      puVar16 = puVar16 + 4;
    } while (uVar17 != 0);
    if (uVar4 != uVar14) goto LAB_00512438;
  }
  *puVar9 = 0;
  uVar1 = uVar1 + uVar18;
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    param_1[1] = uVar1;
  }
  else {
    if (4 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                 "__s < __min_cap",
                 "__s should never be greater than or equal to the short string capacity");
    }
    *(char *)((long)param_1 + 0x17) = (char)uVar1;
  }
LAB_0051246c:
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005124cc  _INIT_14 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_14(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  FUN_0053f0ac(puVar1,0);
  *(undefined4 *)(puVar1 + 4) = 0;
  puVar1[3] = 0x10ffff;
  *puVar1 = &PTR_FUN_00d1fe10;
  uRam0000000000d61200 = 0;
  _DAT_00d611f8 = 0;
  uRam0000000000d61210 = 0;
  _DAT_00d61208 = 0;
  uRam0000000000d61220 = 0;
  _DAT_00d61218 = 0;
  DAT_00d61230 = 0;
  DAT_00d61238 = 0;
  DAT_00d61228 = puVar1;
  __cxa_atexit(FUN_00511d90,&DAT_00d611f8,&PTR_LOOP_00d19390);
  puVar1 = (undefined8 *)operator_new(0x28);
  FUN_0053f0ac(puVar1,0);
  puVar1[3] = 0x10ffff;
  *(undefined4 *)(puVar1 + 4) = 0;
  *puVar1 = &PTR_FUN_00d1fe70;
  uRam0000000000d61248 = 0;
  _DAT_00d61240 = 0;
  uRam0000000000d61258 = 0;
  _DAT_00d61250 = 0;
  uRam0000000000d61268 = 0;
  _DAT_00d61260 = 0;
  DAT_00d61278 = 0;
  DAT_00d61280 = 0;
  DAT_00d61270 = puVar1;
  __cxa_atexit(FUN_00511df0,&DAT_00d61240,&PTR_LOOP_00d19390);
  return;
}


// ===== 0051259c  FUN_0051259c =====

undefined8 FUN_0051259c(void)

{
  return 0;
}


// ===== 005125a4  FUN_005125a4 =====

undefined1  [16] FUN_005125a4(void)

{
  return ZEXT816(0xbff0000000000000);
}


// ===== 005125ac  FUN_005125ac =====

undefined8 FUN_005125ac(void)

{
  return 0;
}


// ===== 005125b4  FUN_005125b4 =====

void FUN_005125b4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ===== 005125c0  FUN_005125c0 =====

int FUN_005125c0(char *param_1)

{
  int iVar1;
  pthread_t __target_thread;
  
  __target_thread = pthread_self();
  iVar1 = pthread_setname_np(__target_thread,param_1);
  return iVar1;
}


// ===== 005125e4  FUN_005125e4 =====

long * FUN_005125e4(long *param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  plVar2 = DAT_00d61288;
  plVar1 = DAT_00d61288 + 9;
  FUN_005467a4(plVar1);
  if (plVar2[1] == *plVar2) {
    plVar7 = (long *)malloc(0x528);
  }
  else {
    puVar4 = (undefined8 *)(plVar2[1] + -8);
    plVar7 = (long *)*puVar4;
    plVar2[1] = (long)puVar4;
  }
  FUN_005467c8(plVar1);
  plVar1 = DAT_00d61288;
  if ((param_1 == (long *)0x0) || (*param_1 != 0)) {
    *plVar7 = 0;
  }
  else {
    if (param_2 < 0x1001) {
      plVar2 = DAT_00d61288 + 9;
      param_1[1] = 0x1000;
      FUN_005467a4(plVar2);
      if (plVar1[4] == plVar1[3]) {
        puVar3 = (undefined4 *)malloc(0x1000);
      }
      else {
        plVar6 = (long *)(plVar1[4] + -8);
        puVar3 = (undefined4 *)*plVar6;
        plVar1[4] = (long)plVar6;
      }
      FUN_005467c8(plVar2);
      *param_1 = (long)puVar3;
    }
    else {
      param_1[1] = param_2 + 4;
      puVar3 = (undefined4 *)malloc(param_2 + 4);
      *param_1 = (long)puVar3;
    }
    if (puVar3 == (undefined4 *)0x0) {
      *plVar7 = 0;
      param_1[1] = 0;
    }
    else {
      lVar5 = param_1[1];
      *plVar7 = (long)puVar3;
      *puVar3 = (int)lVar5;
      *param_1 = (long)(puVar3 + 1);
      param_1[1] = lVar5 + -4;
    }
  }
  return plVar7;
}


// ===== 005126f8  FUN_005126f8 =====

void FUN_005126f8(int *param_1)

{
  long lVar1;
  long lVar2;
  int *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_1 != (int *)0x0) {
    lVar1 = DAT_00d61288 + 0x48;
    FUN_005467a4(lVar1);
    local_40 = *(int **)param_1;
    if (local_40 != (int *)0x0) {
      if (*local_40 == 0x1000) {
        FUN_005127ac(DAT_00d61288 + 0x18,&local_40);
      }
      else {
        free(local_40);
      }
      param_1[0] = 0;
      param_1[1] = 0;
    }
    local_40 = param_1;
    FUN_005128cc(DAT_00d61288,&local_40);
    FUN_005467c8(lVar1);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005127ac  FUN_005127ac =====

void FUN_005127ac(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *__dest;
  ulong uVar4;
  ulong uVar5;
  void *__src;
  long lVar6;
  
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 < (undefined8 *)param_1[2]) {
    if (puVar3 == (undefined8 *)0x0) {
LAB_0051289c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                 ,0x23,"__location != nullptr","null pointer given to construct_at");
    }
    *puVar3 = *param_2;
    param_1[1] = puVar3 + 1;
  }
  else {
    __src = (void *)*param_1;
    lVar6 = (long)puVar3 - (long)__src >> 3;
    uVar1 = lVar6 + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar4 = (long)param_1[2] - (long)__src;
    uVar5 = uVar4 >> 2;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar5 = 0x1fffffffffffffff;
    }
    if (uVar5 == 0) goto LAB_0051289c;
    if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00401ad4();
    }
    __dest = operator_new(uVar5 * 8);
    puVar2 = (undefined8 *)((long)__dest + lVar6 * 8);
    *puVar2 = *param_2;
    memmove(__dest,__src,(long)puVar3 - (long)__src);
    *param_1 = __dest;
    param_1[1] = puVar2 + 1;
    param_1[2] = (void *)((long)__dest + uVar5 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  return;
}


// ===== 005128cc  FUN_005128cc =====

void FUN_005128cc(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *__dest;
  ulong uVar4;
  ulong uVar5;
  void *__src;
  long lVar6;
  
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 < (undefined8 *)param_1[2]) {
    if (puVar3 == (undefined8 *)0x0) {
LAB_005129bc:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                 ,0x23,"__location != nullptr","null pointer given to construct_at");
    }
    *puVar3 = *param_2;
    param_1[1] = puVar3 + 1;
  }
  else {
    __src = (void *)*param_1;
    lVar6 = (long)puVar3 - (long)__src >> 3;
    uVar1 = lVar6 + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar4 = (long)param_1[2] - (long)__src;
    uVar5 = uVar4 >> 2;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar5 = 0x1fffffffffffffff;
    }
    if (uVar5 == 0) goto LAB_005129bc;
    if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00401ad4();
    }
    __dest = operator_new(uVar5 * 8);
    puVar2 = (undefined8 *)((long)__dest + lVar6 * 8);
    *puVar2 = *param_2;
    memmove(__dest,__src,(long)puVar3 - (long)__src);
    *param_1 = __dest;
    param_1[1] = puVar2 + 1;
    param_1[2] = (void *)((long)__dest + uVar5 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  return;
}


// ===== 005129ec  FUN_005129ec =====

void FUN_005129ec(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  
  lVar2 = DAT_00d61288;
  lVar1 = DAT_00d61288 + 0x48;
  FUN_005467a4(lVar1);
  if (*(long *)(lVar2 + 0x38) == *(long *)(lVar2 + 0x30)) {
    pvVar4 = malloc(0x8000);
  }
  else {
    puVar3 = (undefined8 *)(*(long *)(lVar2 + 0x38) + -8);
    pvVar4 = (void *)*puVar3;
    *(undefined8 **)(lVar2 + 0x38) = puVar3;
  }
  FUN_005467c8(lVar1);
  *param_3 = pvVar4;
  param_3[1] = 0x8000;
  return;
}


// ===== 00512a58  FUN_00512a58 =====

void FUN_00512a58(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  if (param_3 < 1) {
    param_3 = 0;
  }
  *param_1 = *param_2;
  param_1[1] = param_3;
  param_1[2] = uVar1;
  return;
}


// ===== 00512a70  FUN_00512a70 =====

void FUN_00512a70(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[2];
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[2] = uVar2;
  param_1[1] = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}


// ===== 00512a8c  FUN_00512a8c =====

void FUN_00512a8c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar1 = DAT_00d61288 + 0x48;
    FUN_005467a4(lVar1);
    local_50 = lVar3;
    FUN_005127ac(DAT_00d61288 + 0x30,&local_50);
    FUN_005467c8(lVar1);
    *param_1 = 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00512b1c  _INIT_15 =====

void _INIT_15(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x70);
  DAT_00d61288 = puVar1;
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
  return;
}


// ===== 00512b50  FUN_00512b50 =====

void FUN_00512b50(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
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
  puVar2 = (undefined8 *)operator_new(0x80);
  *param_1 = puVar2;
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2[9] = 0;
  puVar2[8] = 0;
  puVar2[0xb] = 0;
  puVar2[10] = 0;
  puVar2[0xd] = 0;
  puVar2[0xc] = 0;
  puVar2[0xf] = 0;
  puVar2[0xe] = 0;
  iVar1 = FUN_005cdda4(param_2,puVar2,FUN_00513128);
  if (iVar1 == 0) {
    *(undefined8 **)*param_1 = param_1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004d7934("../../discord_common/native/uv/executor.cpp",0x27,"rc == 0",&DAT_001f74e1,iVar1,0);
}


// ===== 00512bf4  FUN_00512bf4 =====

void FUN_00512bf4(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  void *pvVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  long *plVar8;
  void *pvVar9;
  
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    *(undefined8 *)*param_1 = 0;
    FUN_005ce374(*param_1,FUN_00513308);
    *param_1 = 0;
  }
  pvVar7 = (void *)param_1[9];
  if (pvVar7 != (void *)0x0) {
    pvVar9 = (void *)param_1[10];
    pvVar3 = pvVar7;
    if (pvVar9 != pvVar7) {
      do {
        plVar6 = *(long **)((long)pvVar9 + -8);
        pvVar9 = (void *)((long)pvVar9 + -0x10);
        if (plVar6 != (long *)0x0) {
          plVar4 = plVar6 + 1;
          do {
            lVar5 = *plVar4;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar2) {
              *plVar4 = lVar5 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar5 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
            FUN_005466cc(plVar6);
          }
        }
      } while (pvVar9 != pvVar7);
      pvVar3 = (void *)param_1[9];
    }
    param_1[10] = pvVar7;
    operator_delete(pvVar3);
  }
  plVar6 = (long *)param_1[6];
  if (plVar6 != (long *)0x0) {
    plVar8 = (long *)param_1[7];
    plVar4 = plVar6;
    if (plVar8 != plVar6) {
      do {
        plVar8 = plVar8 + -1;
        plVar4 = (long *)*plVar8;
        *plVar8 = 0;
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 8))();
        }
      } while (plVar8 != plVar6);
      plVar4 = (long *)param_1[6];
    }
    param_1[7] = plVar6;
    operator_delete(plVar4);
  }
  FUN_00546ab0(param_1 + 1);
  return;
}


// ===== 00512cf8  FUN_00512cf8 =====

void FUN_00512cf8(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_50 = param_2;
  FUN_005467a4(param_1 + 1);
  puVar1 = (undefined8 *)param_1[7];
  if (puVar1 < (undefined8 *)param_1[8]) {
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                 ,0x23,"__location != nullptr","null pointer given to construct_at");
    }
    local_50 = (long *)0x0;
    puVar4 = puVar1 + 1;
    *puVar1 = param_2;
    param_1[7] = (long)puVar4;
  }
  else {
    FUN_00513138(param_1 + 6,&local_50);
    puVar4 = (undefined8 *)param_1[7];
  }
  if ((undefined8 *)param_1[6] != puVar4) {
    FUN_005467c8(param_1 + 1);
    if (*param_1 != 0) {
      FUN_005ce108();
    }
    plVar3 = local_50;
    local_50 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    if (*(long *)(lVar2 + 0x28) == local_48) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,"!empty()",
             "back() called on an empty vector");
}


// ===== 00512e1c  FUN_00512e1c =====

long FUN_00512e1c(long param_1)

{
  long lVar1;
  long lVar2;
  
  FUN_005467a4(param_1 + 8);
  lVar1 = *(long *)(param_1 + 0x30);
  lVar2 = *(long *)(param_1 + 0x38);
  FUN_005467c8(param_1 + 8);
  return lVar2 - lVar1 >> 3;
}


// ===== 00512e5c  FUN_00512e5c =====

void FUN_00512e5c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  
  FUN_005467a4(param_1 + 8);
  plVar4 = *(long **)(param_1 + 0x48);
  plVar8 = *(long **)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x40) = 0;
  plVar1 = *(long **)(param_1 + 0x30);
  plVar11 = *(long **)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  plVar9 = plVar4;
  do {
    plVar10 = plVar9;
    if (plVar4 == plVar8) {
LAB_00512f54:
      FUN_00512ffc((undefined8 *)(param_1 + 0x48),plVar10,plVar9);
      FUN_005467c8(param_1 + 8);
      plVar4 = plVar1;
      if (plVar1 != plVar11) {
        do {
          plVar8 = plVar4 + 1;
          (**(code **)(*(long *)*plVar4 + 0x10))();
          plVar4 = plVar8;
        } while (plVar8 != plVar11);
        while (plVar1 != plVar11) {
          plVar11 = plVar11 + -1;
          plVar4 = (long *)*plVar11;
          *plVar11 = 0;
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 8))();
          }
        }
      }
      if (plVar1 == (long *)0x0) {
        return;
      }
      operator_delete(plVar1);
      return;
    }
    plVar9 = plVar8;
    if (*plVar4 == 0) {
      plVar10 = plVar4;
      if ((plVar4 != plVar8) && (plVar6 = plVar4 + 2, plVar6 != plVar8)) {
        do {
          lVar7 = *plVar6;
          if (lVar7 != 0) {
            lVar5 = plVar4[3];
            *plVar6 = 0;
            plVar6[1] = 0;
            plVar4 = (long *)plVar10[1];
            *plVar10 = lVar7;
            plVar10[1] = lVar5;
            if (plVar4 != (long *)0x0) {
              plVar9 = plVar4 + 1;
              do {
                lVar7 = *plVar9;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                if (bVar3) {
                  *plVar9 = lVar7 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar7 == 0) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
                FUN_005466cc(plVar4);
              }
            }
            plVar10 = plVar10 + 2;
          }
          plVar9 = plVar6 + 2;
          plVar4 = plVar6;
          plVar6 = plVar9;
        } while (plVar9 != plVar8);
        plVar9 = *(long **)(param_1 + 0x50);
      }
      goto LAB_00512f54;
    }
    plVar4 = plVar4 + 2;
  } while( true );
}


// ===== 00512ffc  FUN_00512ffc =====

undefined8 * FUN_00512ffc(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (param_3 < param_2) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x644,
               "__first <= __last","vector::erase(first, last) called with invalid range");
  }
  if (param_2 != param_3) {
    puVar7 = *(undefined8 **)(param_1 + 8);
    puVar6 = param_2;
    if (param_3 != puVar7) {
      do {
        uVar9 = param_3[1];
        uVar8 = *param_3;
        *param_3 = 0;
        param_3[1] = 0;
        plVar5 = (long *)puVar6[1];
        puVar6[1] = uVar9;
        *puVar6 = uVar8;
        if (plVar5 != (long *)0x0) {
          plVar1 = plVar5 + 1;
          do {
            lVar4 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar4 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar4 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
            FUN_005466cc(plVar5);
          }
        }
        param_3 = param_3 + 2;
        puVar6 = puVar6 + 2;
      } while (param_3 != puVar7);
      param_3 = *(undefined8 **)(param_1 + 8);
    }
    while (param_3 != puVar6) {
      plVar5 = (long *)param_3[-1];
      param_3 = param_3 + -2;
      if (plVar5 != (long *)0x0) {
        plVar1 = plVar5 + 1;
        do {
          lVar4 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar4 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          FUN_005466cc(plVar5);
        }
      }
    }
    *(undefined8 **)(param_1 + 8) = puVar6;
  }
  return param_2;
}


// ===== 00513128  FUN_00513128 =====

void FUN_00513128(long *param_1)

{
  if (*param_1 != 0) {
    FUN_00512e5c();
    return;
  }
  return;
}


// ===== 00513138  FUN_00513138 =====

void FUN_00513138(ulong *param_1,long *param_2)

{
  void *pvVar1;
  void *pvVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  lVar14 = param_1[1] - *param_1;
  lVar13 = lVar14 >> 3;
  uVar7 = lVar13 + 1;
  if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar4 = param_1[2] - *param_1;
  uVar5 = uVar4 >> 2;
  if (uVar5 <= uVar7) {
    uVar5 = uVar7;
  }
  if (0x7ffffffffffffff7 < uVar4) {
    uVar5 = 0x1fffffffffffffff;
  }
  if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x23,"__location != nullptr","null pointer given to construct_at");
  }
  if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00401ad4();
  }
  pvVar2 = operator_new(uVar5 * 8);
  lVar8 = *param_2;
  *param_2 = 0;
  plVar12 = (long *)*param_1;
  plVar11 = (long *)param_1[1];
  plVar3 = (long *)((long)pvVar2 + lVar13 * 8);
  pvVar1 = (void *)((long)pvVar2 + uVar5 * 8);
  lVar15 = (long)plVar11 - (long)plVar12;
  plVar6 = plVar3 + 1;
  *plVar3 = lVar8;
  if (lVar15 == 0) {
    *param_1 = (ulong)plVar3;
    param_1[1] = (ulong)plVar6;
    param_1[2] = (ulong)pvVar1;
    goto joined_r0x005132c0;
  }
  uVar7 = lVar15 - 8;
  if ((uVar7 < 0x78) ||
     (((long *)((long)plVar11 + (-8 - (uVar7 & 0xfffffffffffffff8))) < plVar3 &&
      ((long *)((long)pvVar2 + (lVar14 - (uVar7 & 0xfffffffffffffff8)) + -8) < plVar11)))) {
LAB_00513250:
    do {
      plVar11 = plVar11 + -1;
      lVar13 = *plVar11;
      *plVar11 = 0;
      plVar3 = plVar3 + -1;
      *plVar3 = lVar13;
    } while (plVar11 != plVar12);
  }
  else {
    uVar7 = (uVar7 >> 3) + 1;
    plVar9 = plVar11 + -2;
    uVar4 = uVar7 & 0x3ffffffffffffffc;
    plVar10 = (long *)((long)pvVar2 + lVar13 * 8 + -0x10);
    plVar3 = plVar3 + -uVar4;
    plVar11 = plVar11 + -uVar4;
    uVar5 = uVar4;
    do {
      lVar8 = plVar9[-1];
      lVar15 = plVar9[-2];
      lVar14 = plVar9[1];
      lVar13 = *plVar9;
      plVar9[-1] = 0;
      plVar9[-2] = 0;
      plVar9[1] = 0;
      *plVar9 = 0;
      plVar9 = plVar9 + -4;
      uVar5 = uVar5 - 4;
      plVar10[-1] = lVar8;
      plVar10[-2] = lVar15;
      plVar10[1] = lVar14;
      *plVar10 = lVar13;
      plVar10 = plVar10 + -4;
    } while (uVar5 != 0);
    if (uVar7 != uVar4) goto LAB_00513250;
  }
  plVar11 = (long *)*param_1;
  plVar12 = (long *)param_1[1];
  *param_1 = (ulong)plVar3;
  param_1[1] = (ulong)plVar6;
  param_1[2] = (ulong)pvVar1;
  while (plVar12 != plVar11) {
    plVar12 = plVar12 + -1;
    plVar3 = (long *)*plVar12;
    *plVar12 = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
joined_r0x005132c0:
  if (plVar11 == (long *)0x0) {
    return;
  }
  operator_delete(plVar11);
  return;
}


// ===== 00513308  FUN_00513308 =====

void FUN_00513308(void *param_1)

{
  if (param_1 != (void *)0x0) {
    operator_delete(param_1);
    return;
  }
  return;
}


// ===== 00513314  FUN_00513314 =====

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00513314(undefined8 param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  int local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((param_2 & 1) == 0) {
    local_30[1] = 0;
  }
  else {
    local_30[0] = 0;
    local_30[1] = 0xa0;
    uVar3 = FUN_005ceb20(param_1,local_30);
    if (-1 < (int)uVar3) {
      uVar2 = setsockopt(local_30[0],0,1,local_30 + 1,4);
      uVar3 = (ulong)uVar2;
    }
    if ((int)uVar3 == 0) goto LAB_005133a8;
    local_30[1] = 0x60;
  }
  local_30[0] = 0;
  uVar3 = FUN_005ceb20(param_1,local_30);
  if (-1 < (int)uVar3) {
    uVar2 = setsockopt(local_30[0],0,1,local_30 + 1,4);
    uVar3 = (ulong)uVar2;
  }
LAB_005133a8:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 005133d0  FUN_005133d0 =====

void FUN_005133d0(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auStack_58 [8];
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  uVar4 = param_4 - param_3;
  uVar5 = param_5 - param_4;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_0051348c(param_1,param_2,uVar4,uVar5);
  local_50 = param_2;
  lVar3 = FUN_00513830(param_1,param_2,&DAT_001f74e5,&local_50,auStack_58);
  uVar1 = *(ulong *)(lVar3 + 0x28);
  if (*(ulong *)(lVar3 + 0x28) <= uVar4) {
    uVar1 = uVar4;
  }
  uVar4 = *(ulong *)(lVar3 + 0x30);
  if (*(ulong *)(lVar3 + 0x30) <= uVar5) {
    uVar4 = uVar5;
  }
  *(ulong *)(lVar3 + 0x28) = uVar1;
  *(ulong *)(lVar3 + 0x30) = uVar4;
  *(long *)(lVar3 + 0x40) = *(long *)(lVar3 + 0x40) + 1;
  *(ulong *)(lVar3 + 0x38) = *(long *)(lVar3 + 0x38) + uVar5;
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0051348c  FUN_0051348c =====

/* WARNING: Removing unreachable block (ram,0x00513694) */

void FUN_0051348c(long param_1,undefined8 *param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 *****pppppuVar2;
  undefined1 *__src;
  ulong uVar3;
  long lVar4;
  undefined8 *****pppppuVar5;
  undefined1 **__dest;
  undefined1 *local_d0;
  ulong uStack_c8;
  undefined8 local_c0;
  undefined8 ****local_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  undefined8 ****local_90;
  ulong uStack_88;
  undefined8 local_80;
  undefined8 ****local_70;
  ulong uStack_68;
  undefined8 local_60;
  long local_58;
  
  __dest = &local_d0;
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  if (*(char *)(*(long *)(param_1 + 0x68) + 0x10) == '\0' && *(ulong *)(param_1 + 0x28) < param_3) {
    if (*(char *)(param_1 + 0x4f) < '\0') {
      pppppuVar2 = *(undefined8 ******)(param_1 + 0x38);
      uVar3 = *(ulong *)(param_1 + 0x40);
      if (uVar3 < 0x17) {
        pppppuVar5 = &local_70;
        local_60 = CONCAT17((char)uVar3,(undefined7)local_60);
      }
      else {
        if (0x7fffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar1 = (uVar3 | 0xf) + 1;
        pppppuVar5 = (undefined8 *****)operator_new(uVar1);
        local_60 = uVar1 | 0x8000000000000000;
        local_70 = pppppuVar5;
        uStack_68 = uVar3;
      }
      if ((pppppuVar5 <= pppppuVar2) &&
         (pppppuVar2 < (undefined8 *****)((long)pppppuVar5 + uVar3 + 1))) goto LAB_005137d8;
      memmove(pppppuVar5,pppppuVar2,uVar3 + 1);
      if (*(char *)((long)param_2 + 0x17) < '\0') goto LAB_00513580;
LAB_00513500:
      uStack_88 = param_2[1];
      local_90 = (undefined8 ****)*param_2;
      local_80 = param_2[2];
    }
    else {
      uStack_68 = *(ulong *)(param_1 + 0x40);
      local_70 = *(undefined8 *****)(param_1 + 0x38);
      local_60 = *(ulong *)(param_1 + 0x48);
      if (-1 < *(char *)((long)param_2 + 0x17)) goto LAB_00513500;
LAB_00513580:
      pppppuVar2 = (undefined8 *****)*param_2;
      uVar3 = param_2[1];
      if (uVar3 < 0x17) {
        pppppuVar5 = &local_90;
        local_80 = CONCAT17((char)uVar3,(undefined7)local_80);
      }
      else {
        if (0x7fffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar1 = (uVar3 | 0xf) + 1;
        pppppuVar5 = (undefined8 *****)operator_new(uVar1);
        local_80 = uVar1 | 0x8000000000000000;
        local_90 = pppppuVar5;
        uStack_88 = uVar3;
      }
      if ((pppppuVar5 <= pppppuVar2) &&
         (pppppuVar2 < (undefined8 *****)((long)pppppuVar5 + uVar3 + 1))) goto LAB_005137d8;
      memmove(pppppuVar5,pppppuVar2,uVar3 + 1);
    }
    (**(code **)(param_1 + 0x60))((double)param_3 / 1000000.0,param_1 + 0x50,&local_70,&local_90);
    if ((long)local_80 < 0) {
      operator_delete(local_90);
    }
  }
  if ((*(char *)(*(long *)(param_1 + 0x88) + 0x10) != '\0') ||
     (param_4 <= *(ulong *)(param_1 + 0x30))) goto LAB_00513790;
  if (*(char *)(param_1 + 0x4f) < '\0') {
    pppppuVar2 = *(undefined8 ******)(param_1 + 0x38);
    uVar3 = *(ulong *)(param_1 + 0x40);
    if (uVar3 < 0x17) {
      pppppuVar5 = &local_b0;
      local_a0 = CONCAT17((char)uVar3,(undefined7)local_a0);
    }
    else {
      if (0x7fffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar3 | 0xf) + 1;
      pppppuVar5 = (undefined8 *****)operator_new(uVar1);
      local_a0 = uVar1 | 0x8000000000000000;
      local_b0 = pppppuVar5;
      uStack_a8 = uVar3;
    }
    if ((pppppuVar5 <= pppppuVar2) &&
       (pppppuVar2 < (undefined8 *****)((long)pppppuVar5 + uVar3 + 1))) goto LAB_005137d8;
    memmove(pppppuVar5,pppppuVar2,uVar3 + 1);
    if (*(char *)((long)param_2 + 0x17) < '\0') goto LAB_005136f4;
LAB_00513658:
    uStack_c8 = param_2[1];
    local_d0 = (undefined1 *)*param_2;
    local_c0 = param_2[2];
  }
  else {
    uStack_a8 = *(ulong *)(param_1 + 0x40);
    local_b0 = *(undefined8 *****)(param_1 + 0x38);
    local_a0 = *(ulong *)(param_1 + 0x48);
    if (-1 < *(char *)((long)param_2 + 0x17)) goto LAB_00513658;
LAB_005136f4:
    __src = (undefined1 *)*param_2;
    uVar3 = param_2[1];
    if (uVar3 < 0x17) {
      local_c0 = CONCAT17((char)uVar3,(undefined7)local_c0);
    }
    else {
      if (0x7fffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar3 | 0xf) + 1;
      __dest = (undefined1 **)operator_new(uVar1);
      local_c0 = uVar1 | 0x8000000000000000;
      local_d0 = (undefined1 *)__dest;
      uStack_c8 = uVar3;
    }
    if ((__dest <= __src) && (__src < (undefined1 *)((long)__dest + uVar3 + 1))) {
LAB_005137d8:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar3 + 1);
  }
  (**(code **)(param_1 + 0x80))((double)param_4 / 1000000.0,param_1 + 0x70,&local_b0,&local_d0);
  if ((long)local_c0 < 0) {
    operator_delete(local_d0);
  }
  if ((long)local_a0 < 0) {
    operator_delete(local_b0);
  }
LAB_00513790:
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00513814  FUN_00513814 =====

void FUN_00513814(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  FUN_00513ddc(param_1,param_2);
  return;
}


// ===== 00513830  FUN_00513830 =====

long * FUN_00513830(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *unaff_x27;
  undefined2 uVar16;
  undefined8 uVar17;
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar10 = param_2[1];
  puVar6 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar10 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar6 = param_2;
  }
  plVar5 = (long *)FUN_00427058(auStack_70,puVar6,uVar10);
  plVar15 = (long *)param_1[1];
  if (plVar15 != (long *)0x0) {
    uVar17 = NEON_cnt(plVar15,1);
    uVar16 = NEON_uaddlv(uVar17,1);
    uVar10 = CONCAT62((int6)((ulong)uVar17 >> 0x10),uVar16) & 0xffffffff;
    if (uVar10 < 2) {
      unaff_x27 = (long *)((long)plVar15 - 1U & (ulong)plVar5);
    }
    else {
      unaff_x27 = plVar5;
      if (plVar15 <= plVar5) {
        uVar9 = 0;
        if (plVar15 != (long *)0x0) {
          uVar9 = (ulong)plVar5 / (ulong)plVar15;
        }
        unaff_x27 = (long *)((long)plVar5 - uVar9 * (long)plVar15);
      }
    }
    puVar6 = *(undefined8 **)(*param_1 + (long)unaff_x27 * 8);
    if ((puVar6 != (undefined8 *)0x0) && (plVar14 = (long *)*puVar6, plVar14 != (long *)0x0)) {
      puVar6 = (undefined8 *)*param_2;
      __n = param_2[1];
      if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
        puVar6 = param_2;
        __n = (ulong)*(byte *)((long)param_2 + 0x17);
      }
      do {
        plVar7 = (long *)plVar14[1];
        if (plVar7 != plVar5) {
          if (uVar10 < 2) {
            plVar7 = (long *)((ulong)plVar7 & (long)plVar15 - 1U);
          }
          else if (plVar15 <= plVar7) {
            uVar9 = 0;
            if (plVar15 != (long *)0x0) {
              uVar9 = (ulong)plVar7 / (ulong)plVar15;
            }
            plVar7 = (long *)((long)plVar7 - uVar9 * (long)plVar15);
          }
          if (plVar7 != unaff_x27) break;
        }
        bVar2 = *(byte *)((long)plVar14 + 0x27);
        sVar1 = plVar14[3];
        if (-1 < (char)bVar2) {
          sVar1 = (ulong)bVar2;
        }
        if (sVar1 == __n) {
          plVar7 = plVar14 + 2;
          plVar11 = (long *)*plVar7;
          if ((char)bVar2 < '\0') {
            plVar7 = plVar11;
            if (__n != 0) {
              uVar4 = memcmp(plVar11,puVar6,__n);
              plVar7 = (long *)(ulong)uVar4;
              if (uVar4 != 0) goto LAB_00513908;
            }
          }
          else if (bVar2 != 0) {
            uVar9 = 0;
            while (*(char *)((long)plVar14 + uVar9 + 0x10) == *(char *)((long)puVar6 + uVar9)) {
              uVar9 = uVar9 + 1;
              if (bVar2 == uVar9) goto LAB_005139c8;
            }
            goto LAB_00513908;
          }
LAB_005139c8:
          uVar17 = 0;
          goto LAB_00513c1c;
        }
LAB_00513908:
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
    }
  }
  plVar14 = (long *)operator_new(0x48);
  plVar11 = (long *)*param_4;
  plVar7 = plVar14 + 2;
  if (*(char *)((long)plVar11 + 0x17) < '\0') {
    plVar12 = (long *)*plVar11;
    uVar10 = plVar11[1];
    if (uVar10 < 0x17) {
      *(char *)((long)plVar14 + 0x27) = (char)uVar10;
    }
    else {
      if (0x7fffffffffffffef < uVar10) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar9 = (uVar10 | 0xf) + 1;
      plVar7 = (long *)operator_new(uVar9);
      plVar14[2] = (long)plVar7;
      plVar14[3] = uVar10;
      plVar14[4] = uVar9 | 0x8000000000000000;
    }
    if ((plVar7 <= plVar12) && (plVar12 < (long *)((long)plVar7 + uVar10 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    plVar7 = (long *)memmove(plVar7,plVar12,uVar10 + 1);
  }
  else {
    lVar13 = plVar11[1];
    lVar8 = *plVar11;
    plVar14[4] = plVar11[2];
    plVar14[3] = lVar13;
    *plVar7 = lVar8;
  }
  lVar8 = param_1[3];
  *plVar14 = 0;
  plVar14[1] = (long)plVar5;
  plVar14[8] = 0;
  plVar14[7] = 0;
  plVar14[6] = 0;
  plVar14[5] = 0;
  if ((plVar15 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar15 < (float)(lVar8 + 1))) {
    if (plVar15 < (long *)0x3) {
      uVar10 = 1;
    }
    else {
      uVar10 = (ulong)(((ulong)plVar15 & (long)plVar15 - 1U) != 0);
    }
    plVar11 = (long *)(uVar10 | (long)plVar15 << 1);
    plVar12 = (long *)(long)((float)(lVar8 + 1) / *(float *)(param_1 + 4));
    if (plVar11 <= plVar12) {
      plVar11 = plVar12;
    }
    if ((long)plVar11 - 1U == 0) {
      plVar11 = (long *)0x2;
    }
    else if (((ulong)plVar11 & (long)plVar11 - 1U) != 0) {
      plVar7 = (long *)FUN_005204f8(plVar11);
      plVar15 = (long *)param_1[1];
      plVar11 = plVar7;
    }
    if (plVar15 < plVar11) {
LAB_00513af8:
      plVar7 = (long *)FUN_00513c80(param_1,plVar11);
    }
    else if (plVar11 < plVar15) {
      plVar7 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (plVar15 < (long *)0x3) {
LAB_00513b60:
        plVar7 = (long *)FUN_005204f8();
      }
      else {
        uVar17 = NEON_cnt(plVar15,1);
        uVar16 = NEON_uaddlv(uVar17,1);
        if (1 < (CONCAT62((int6)((ulong)uVar17 >> 0x10),uVar16) & 0xffffffff)) goto LAB_00513b60;
        if ((long *)0x1 < plVar7) {
          plVar7 = (long *)(1L << (-LZCOUNT((long)plVar7 + -1) & 0x3fU));
        }
      }
      if (plVar11 <= plVar7) {
        plVar11 = plVar7;
      }
      if (plVar11 < plVar15) goto LAB_00513af8;
    }
    plVar15 = (long *)param_1[1];
    if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
      unaff_x27 = (long *)((long)plVar15 - 1U & (ulong)plVar5);
    }
    else {
      unaff_x27 = plVar5;
      if (plVar15 <= plVar5) {
        uVar10 = 0;
        if (plVar15 != (long *)0x0) {
          uVar10 = (ulong)plVar5 / (ulong)plVar15;
        }
        unaff_x27 = (long *)((long)plVar5 - uVar10 * (long)plVar15);
      }
    }
  }
  lVar8 = *param_1;
  plVar5 = *(long **)(lVar8 + (long)unaff_x27 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    lVar13 = *plVar5;
    *plVar5 = (long)plVar14;
    *plVar14 = lVar13;
    *(long **)(lVar8 + (long)unaff_x27 * 8) = plVar5;
    if (*plVar14 == 0) goto LAB_00513c0c;
    plVar5 = *(long **)(*plVar14 + 8);
    if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
      plVar5 = (long *)((ulong)plVar5 & (long)plVar15 - 1U);
    }
    else if (plVar15 <= plVar5) {
      uVar10 = 0;
      if (plVar15 != (long *)0x0) {
        uVar10 = (ulong)plVar5 / (ulong)plVar15;
      }
      plVar5 = (long *)((long)plVar5 - uVar10 * (long)plVar15);
    }
    plVar5 = (long *)(*param_1 + (long)plVar5 * 8);
  }
  else {
    *plVar14 = *plVar5;
  }
  *plVar5 = (long)plVar14;
LAB_00513c0c:
  uVar17 = 1;
  param_1[3] = param_1[3] + 1;
LAB_00513c1c:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(plVar7,uVar17);
  }
  return plVar14;
}


// ===== 00513c80  FUN_00513c80 =====

void FUN_00513c80(long *param_1,ulong param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  
  if (param_2 == 0) {
    pvVar2 = (void *)*param_1;
    *param_1 = 0;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00401ad4();
    }
    pvVar2 = operator_new(param_2 << 3);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)pvVar2;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    uVar4 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (param_2 != uVar4);
    plVar5 = (long *)param_1[2];
    if (plVar5 != (long *)0x0) {
      uVar4 = plVar5[1];
      uVar10 = NEON_cnt(param_2,1);
      uVar9 = NEON_uaddlv(uVar10,1);
      uVar6 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
      if (uVar6 < 2) {
        uVar4 = uVar4 & param_2 - 1;
      }
      else if (param_2 <= uVar4) {
        uVar8 = 0;
        if (param_2 != 0) {
          uVar8 = uVar4 / param_2;
        }
        uVar4 = uVar4 - uVar8 * param_2;
      }
      *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
      plVar7 = (long *)*plVar5;
      if (plVar7 != (long *)0x0) {
        do {
          uVar8 = plVar7[1];
          if (uVar6 < 2) {
            uVar8 = uVar8 & param_2 - 1;
          }
          else if (param_2 <= uVar8) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar8 / param_2;
            }
            uVar8 = uVar8 - uVar1 * param_2;
          }
          if (uVar8 != uVar4) {
            if (*(long *)(*param_1 + uVar8 * 8) == 0) {
              *(long **)(*param_1 + uVar8 * 8) = plVar5;
              uVar4 = uVar8;
            }
            else {
              *plVar5 = *plVar7;
              *plVar7 = **(long **)(*param_1 + uVar8 * 8);
              **(undefined8 **)(*param_1 + uVar8 * 8) = plVar7;
              plVar7 = plVar5;
            }
          }
          plVar5 = plVar7;
          plVar7 = (long *)*plVar5;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
  return;
}


// ===== 00513ddc  FUN_00513ddc =====

void FUN_00513ddc(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  lVar10 = *param_1;
  *param_1 = 0;
  lVar4 = *param_2;
  *param_2 = 0;
  pvVar3 = (void *)*param_1;
  *param_1 = lVar4;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  pvVar3 = (void *)*param_2;
  *param_2 = lVar10;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  plVar6 = param_1 + 2;
  lVar7 = *plVar6;
  plVar5 = param_2 + 2;
  lVar10 = param_2[1];
  lVar9 = param_1[1];
  lVar4 = param_1[4];
  *plVar6 = *plVar5;
  param_1[1] = lVar10;
  param_2[1] = lVar9;
  lVar9 = param_2[3];
  lVar10 = param_1[3];
  *plVar5 = lVar7;
  *(int *)(param_1 + 4) = (int)param_2[4];
  param_1[3] = lVar9;
  param_2[3] = lVar10;
  lVar7 = param_1[3];
  *(int *)(param_2 + 4) = (int)lVar4;
  if (lVar7 != 0) {
    uVar1 = param_1[1];
    uVar8 = *(ulong *)(param_1[2] + 8);
    if ((uVar1 & uVar1 - 1) == 0) {
      uVar8 = uVar1 - 1 & uVar8;
    }
    else if (uVar1 <= uVar8) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar8 / uVar1;
      }
      uVar8 = uVar8 - uVar2 * uVar1;
    }
    *(long **)(*param_1 + uVar8 * 8) = plVar6;
  }
  if (lVar10 != 0) {
    uVar1 = param_2[1];
    uVar8 = *(ulong *)(param_2[2] + 8);
    if ((uVar1 & uVar1 - 1) == 0) {
      uVar8 = uVar1 - 1 & uVar8;
    }
    else if (uVar1 <= uVar8) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar8 / uVar1;
      }
      uVar8 = uVar8 - uVar2 * uVar1;
    }
    *(long **)(*param_2 + uVar8 * 8) = plVar5;
  }
  return;
}


// ===== 00513ef0  FUN_00513ef0 =====

void FUN_00513ef0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined1 local_90;
  undefined1 local_88;
  undefined1 local_80;
  undefined8 local_78;
  code *local_68;
  undefined8 *local_60;
  undefined8 local_58;
  code *local_48;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_c0 = param_3[2];
  local_b8 = (undefined8 *)param_3[3];
  uStack_c8 = param_3[1];
  local_d0 = *param_3;
  local_d8 = param_2;
  if ((code *)*local_b8 != (code *)0x0) {
    local_d0 = (*(code *)*local_b8)(*param_3);
  }
  local_a0 = param_4[2];
  local_98 = (undefined8 *)param_4[3];
  uStack_a8 = param_4[1];
  local_b0 = *param_4;
  if ((code *)*local_98 != (code *)0x0) {
    local_b0 = (*(code *)*local_98)(*param_4);
  }
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_68 = FUN_005150b8;
  local_60 = &DAT_001f1910;
  local_48 = FUN_005150b8;
  local_40 = &DAT_001f1910;
  FUN_00514014(param_1,&local_d8);
  if ((code *)local_40[1] != (code *)0x0) {
    (*(code *)local_40[1])(local_58);
  }
  if ((code *)local_60[1] != (code *)0x0) {
    (*(code *)local_60[1])(local_78);
  }
  if ((code *)local_98[1] != (code *)0x0) {
    (*(code *)local_98[1])(local_b0);
  }
  if ((code *)local_b8[1] != (code *)0x0) {
    (*(code *)local_b8[1])(local_d0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00514014  FUN_00514014 =====

void FUN_00514014(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  pthread_t pVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  void *pvVar6;
  long lVar7;
  undefined8 *puVar8;
  code *pcVar9;
  undefined8 uVar10;
  long *plVar11;
  pthread_t local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar4 = param_2[1];
  param_1[1] = param_2[2];
  *param_1 = uVar4;
  param_1[2] = param_2[3];
  puVar8 = (undefined8 *)param_2[4];
  param_1[3] = puVar8;
  pcVar9 = (code *)*puVar8;
  if (pcVar9 != (code *)0x0) {
    uVar4 = (*pcVar9)(param_2[1]);
    *param_1 = uVar4;
  }
  uVar4 = param_2[5];
  param_1[5] = param_2[6];
  param_1[4] = uVar4;
  param_1[6] = param_2[7];
  puVar8 = (undefined8 *)param_2[8];
  param_1[7] = puVar8;
  pcVar9 = (code *)*puVar8;
  if (pcVar9 != (code *)0x0) {
    uVar4 = (*pcVar9)(param_2[5]);
    param_1[4] = uVar4;
  }
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  FUN_004a3cf4(param_1 + 0xc,*param_2);
  plVar11 = param_1 + 0xf;
  *plVar11 = 0;
  if (*(char *)(param_2 + 0xb) != '\0') {
    lVar5 = FUN_005141bc(param_2,param_2 + 0xc,param_2 + 0x10);
    lVar7 = *plVar11;
    *plVar11 = lVar5;
    if (lVar7 != 0) {
      FUN_005150c4(plVar11);
    }
  }
  FUN_00520194(&local_40);
  FUN_005203e8(&local_48,&local_40);
  pvVar6 = operator_new(8);
  FUN_0054a384();
  puVar8 = (undefined8 *)operator_new(0x30);
  uVar4 = local_40;
  uVar10 = *param_2;
  puVar8[2] = 0;
  puVar8[3] = param_1;
  *puVar8 = pvVar6;
  puVar8[1] = FUN_005142d0;
  local_40 = 0;
  puVar8[4] = uVar10;
  puVar8[5] = uVar4;
  iVar3 = pthread_create(&local_50,(pthread_attr_t *)0x0,FUN_005152c8,puVar8);
  pVar2 = local_50;
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0054a0b0(iVar3,"thread constructor failed");
  }
  if (param_1[9] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00550060();
  }
  local_50 = 0;
  param_1[9] = pVar2;
  FUN_0054a158(&local_50);
  FUN_0052007c(local_48);
  FUN_00520164(&local_48);
  FUN_005201dc(&local_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005141bc  FUN_005141bc =====

void * FUN_005141bc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  void *pvVar2;
  void *local_a8 [2];
  char local_91;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pvVar2 = operator_new(0x90);
  FUN_004a3cf4(local_a8,*param_1);
  local_60 = param_2[2];
  local_58 = param_2[3];
  uStack_68 = param_2[1];
  local_70 = *param_2;
  if (*(long *)(local_58 + 8) != 0) {
    param_2[2] = FUN_005150b8;
    param_2[3] = &DAT_001f1910;
  }
  local_80 = param_3[2];
  local_78 = param_3[3];
  uStack_88 = param_3[1];
  local_90 = *param_3;
  if (*(long *)(local_78 + 8) != 0) {
    param_3[2] = FUN_005150b8;
    param_3[3] = &DAT_001f1910;
  }
  FUN_00515178(pvVar2,local_a8,&local_70,&local_90);
  if (*(code **)(local_78 + 8) != (code *)0x0) {
    (**(code **)(local_78 + 8))(local_90);
  }
  if (*(code **)(local_58 + 8) != (code *)0x0) {
    (**(code **)(local_58 + 8))(local_70);
  }
  if (local_91 < '\0') {
    operator_delete(local_a8[0]);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return pvVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005142d0  FUN_005142d0 =====

void FUN_005142d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  void *pvVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 uVar5;
  
  FUN_005125c0(param_2);
  pvVar2 = malloc(0x350);
  param_1[10] = pvVar2;
  FUN_005cf594();
  plVar4 = (long *)param_1[10];
  *plVar4 = (long)param_1;
  pvVar2 = malloc(0x80);
  param_1[8] = pvVar2;
  FUN_005cdda4(plVar4,pvVar2,FUN_00514b3c);
  uVar5 = param_1[10];
  *(undefined8 *)param_1[8] = uVar5;
  pvVar2 = operator_new(0x60);
  FUN_00512b50(pvVar2,uVar5);
  param_1[0xb] = pvVar2;
  FUN_00520464(param_3);
  if (*(char *)(param_1[3] + 0x10) == '\0') {
    (*(code *)param_1[2])(param_1,param_1[10]);
    param_1[2] = FUN_0040df64;
    pcVar3 = *(code **)(param_1[3] + 8);
    param_1[3] = &DAT_001f1910;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(*param_1);
    }
  }
  FUN_005ce494(param_1[10],0);
  FUN_005ce374(param_1[8],PTR_free_00d51ac0);
  param_1[8] = 0;
  if (*(char *)(param_1[7] + 0x10) == '\0') {
    (*(code *)param_1[6])(param_1 + 4);
    param_1[6] = FUN_0040dec4;
    pcVar3 = *(code **)(param_1[7] + 8);
    param_1[7] = &DAT_001f1910;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(param_1[4]);
    }
  }
  pvVar2 = (void *)param_1[0xb];
  if (pvVar2 != (void *)0x0) {
    FUN_00512bf4(pvVar2);
    operator_delete(pvVar2);
  }
  param_1[0xb] = 0;
  do {
    iVar1 = FUN_005ce494(param_1[10],1);
  } while (iVar1 != 0);
  FUN_005cdd2c(param_1[10]);
  free((void *)param_1[10]);
  param_1[10] = 0;
  return;
}


// ===== 00514454  FUN_00514454 =====

void FUN_00514454(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  if (param_1[8] != 0) {
    FUN_005ce108();
  }
  plVar2 = param_1 + 9;
  if (*plVar2 != 0) {
    FUN_0054a174(plVar2);
  }
  lVar1 = param_1[0xf];
  param_1[0xf] = 0;
  if (lVar1 != 0) {
    FUN_005150c4();
  }
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    operator_delete((void *)param_1[0xc]);
  }
  FUN_0054a158(plVar2);
  if (*(code **)(param_1[7] + 8) != (code *)0x0) {
    (**(code **)(param_1[7] + 8))(param_1[4]);
  }
  if (*(code **)(param_1[3] + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005144dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[3] + 8))(*param_1);
    return;
  }
  return;
}


// ===== 005144ec  FUN_005144ec =====

void FUN_005144ec(long param_1)

{
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_005ce108();
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_0054a174((long *)(param_1 + 0x48));
    return;
  }
  return;
}


// ===== 0051452c  FUN_0051452c =====

undefined8 FUN_0051452c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}


// ===== 00514534  FUN_00514534 =====

bool FUN_00514534(long param_1)

{
  bool bVar1;
  pthread_t pVar2;
  pthread_t pVar3;
  
  pVar3 = *(pthread_t *)(param_1 + 0x48);
  pVar2 = pthread_self();
  bVar1 = pVar2 != 0 && pVar3 == pVar2;
  if (pVar3 == 0) {
    bVar1 = pVar2 == 0;
  }
  return bVar1;
}


// ===== 00514570  FUN_00514570 =====

void FUN_00514570(void)

{
  return;
}


// ===== 00514574  FUN_00514574 =====

void FUN_00514574(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  pthread_t pVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  pthread_t pVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  long local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  code *local_e0;
  undefined8 *local_d8;
  long local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  code *local_b8;
  undefined8 *local_b0;
  undefined7 local_a8;
  undefined4 uStack_a1;
  char cStack_9d;
  undefined4 uStack_9c;
  undefined8 local_98;
  long local_90;
  undefined8 uStack_88;
  code *local_80;
  undefined *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (*(long *)(param_1 + 0x78) == 0) goto LAB_005147d8;
  pcVar1 = (code *)param_2[2];
  puVar11 = (undefined8 *)param_2[3];
  uStack_e8 = param_2[1];
  local_f0 = *param_2;
  if (puVar11[1] != 0) {
    param_2[2] = FUN_0041eb94;
    param_2[3] = &DAT_001f1910;
  }
  pVar9 = *(pthread_t *)(param_1 + 0x48);
  local_f8 = param_1;
  local_e0 = pcVar1;
  local_d8 = puVar11;
  pVar5 = pthread_self();
  if (pVar9 == 0) {
    if (pVar5 == 0) goto LAB_005145f8;
LAB_0051460c:
    lVar10 = *(long *)(param_1 + 0x58);
    if (lVar10 != 0) {
      lVar12 = *(long *)(param_1 + 0x78);
      if (lVar12 == 0) {
        puVar8 = (undefined8 *)operator_new(0x30);
        uVar13 = param_2[1];
        uVar6 = *param_2;
        puVar8[4] = pcVar1;
        puVar8[5] = puVar11;
        puVar8[3] = uVar13;
        puVar8[2] = uVar6;
        *puVar8 = &PTR_FUN_00d1fef8;
        puVar8[1] = param_1;
        if (puVar11[1] != 0) {
          puVar11 = &DAT_001f1910;
          local_e0 = FUN_0041eb94;
          local_d8 = &DAT_001f1910;
        }
        FUN_00512cf8(lVar10,puVar8);
      }
      else {
        uVar6 = FUN_005ce36c();
        uStack_c0 = uStack_e8;
        local_c8 = local_f0;
        puVar8 = puVar11;
        if (puVar11[1] != 0) {
          puVar8 = &DAT_001f1910;
          local_e0 = FUN_0041eb94;
          local_d8 = &DAT_001f1910;
        }
        local_98 = CONCAT17(0xb,(undefined7)local_98);
        local_d0 = param_1;
        local_b8 = pcVar1;
        local_b0 = puVar11;
        if ((&local_a8 < "ollMetrics") && ("PollMetrics" < &cStack_9d)) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                     ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
        }
        cStack_9d = '\0';
        local_a8 = (undefined7)s_PollMetrics_001c221d._0_8_;
        uStack_a1._0_1_ = SUB81(s_PollMetrics_001c221d._0_8_,7);
        uStack_a1._1_3_ = 0x736369;
        local_80 = FUN_0040e7ec;
        local_78 = &DAT_001f4e70;
        local_90 = lVar12;
        local_70 = uVar6;
        puVar7 = (undefined8 *)operator_new(0x70);
        uVar13 = local_98;
        puVar7[4] = pcVar1;
        puVar7[5] = puVar11;
        puVar7[3] = uStack_e8;
        puVar7[2] = local_f0;
        *puVar7 = &PTR_FUN_00d1fed0;
        puVar7[1] = param_1;
        if (puVar11[1] != 0) {
          local_b8 = FUN_0041eb94;
          local_b0 = &DAT_001f1910;
        }
        uVar4 = CONCAT44(uStack_9c,CONCAT13(cStack_9d,uStack_a1._1_3_));
        uVar3 = CONCAT17((char)uStack_a1,local_a8);
        cStack_9d = '\0';
        uStack_9c = 0;
        local_98 = 0;
        local_a8 = 0;
        uStack_a1 = 0;
        puVar7[8] = uVar13;
        puVar7[7] = uVar4;
        puVar7[6] = uVar3;
        puVar7[0xd] = uVar6;
        puVar7[10] = uStack_88;
        puVar7[9] = local_90;
        puVar7[0xb] = FUN_0040e7ec;
        puVar7[0xc] = &DAT_001f4e70;
        FUN_00512cf8(lVar10);
        if (*(code **)(local_78 + 8) != (code *)0x0) {
          (**(code **)(local_78 + 8))(local_90);
        }
        if (local_98 < 0) {
          operator_delete((void *)CONCAT17((char)uStack_a1,local_a8));
        }
        puVar11 = puVar8;
        if ((code *)local_b0[1] != (code *)0x0) {
          (*(code *)local_b0[1])(local_c8);
        }
      }
    }
  }
  else {
    if ((pVar5 == 0) || (pVar9 != pVar5)) goto LAB_0051460c;
LAB_005145f8:
    FUN_00514834(&local_f8);
    puVar11 = local_d8;
  }
  if ((code *)puVar11[1] != (code *)0x0) {
    (*(code *)puVar11[1])(local_f0);
  }
LAB_005147d8:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00514834  FUN_00514834 =====

void FUN_00514834(long *param_1)

{
  size_t __n;
  undefined8 ****__src;
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 ***__src_00;
  undefined8 ****ppppuVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  void *pvVar9;
  void *pvVar10;
  void *local_f0 [2];
  undefined8 *local_e0;
  undefined8 ***local_c8;
  ulong uStack_c0;
  undefined8 local_b8;
  void *local_b0;
  ulong uStack_a8;
  undefined8 *local_a0;
  long lStack_98;
  undefined4 local_90;
  undefined8 ***local_88;
  ulong uStack_80;
  undefined8 local_78;
  void *local_70;
  ulong uStack_68;
  undefined8 *local_60;
  long lStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar7 = *param_1;
  FUN_00513814(&local_70,*(undefined8 *)(lVar7 + 0x78));
  uVar1 = uStack_68;
  pvVar10 = local_70;
  puVar4 = local_60;
  if (*(char *)(param_1[4] + 0x10) == '\0') {
    local_70 = (void *)0x0;
    uStack_68 = 0;
    local_b0 = pvVar10;
    uStack_a8 = uVar1;
    local_a0 = local_60;
    lStack_98 = lStack_58;
    local_90 = local_50;
    if (lStack_58 != 0) {
      uVar6 = local_60[1];
      if ((uVar1 & uVar1 - 1) == 0) {
        uVar6 = uVar6 & uVar1 - 1;
      }
      else if (uVar1 <= uVar6) {
        uVar2 = 0;
        if (uVar1 != 0) {
          uVar2 = uVar6 / uVar1;
        }
        uVar6 = uVar6 - uVar2 * uVar1;
      }
      *(undefined8 ***)((long)pvVar10 + uVar6 * 8) = &local_a0;
      local_60 = (undefined8 *)0x0;
      lStack_58 = 0;
    }
    ppppuVar5 = &local_88;
    if (*(char *)(lVar7 + 0x77) < '\0') {
      __src = *(undefined8 *****)(lVar7 + 0x60);
      uVar1 = *(ulong *)(lVar7 + 0x68);
      if (uVar1 < 0x17) {
        local_78 = CONCAT17((char)uVar1,(undefined7)local_78);
      }
      else {
        if (0x7fffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar6 = (uVar1 | 0xf) + 1;
        ppppuVar5 = (undefined8 ****)operator_new(uVar6);
        local_78 = uVar6 | 0x8000000000000000;
        local_88 = ppppuVar5;
        uStack_80 = uVar1;
      }
      if ((ppppuVar5 <= __src) && (__src < (undefined8 ****)((long)ppppuVar5 + uVar1 + 1)))
      goto LAB_00514b08;
      memmove(ppppuVar5,__src,uVar1 + 1);
    }
    else {
      uStack_80 = *(ulong *)(lVar7 + 0x68);
      local_88 = *(undefined8 ****)(lVar7 + 0x60);
      local_78 = *(ulong *)(lVar7 + 0x70);
    }
    FUN_00514b44(local_f0,&local_b0);
    uVar1 = uStack_80;
    __src_00 = local_88;
    ppppuVar5 = &local_c8;
    if ((long)local_78 < 0) {
      if (uStack_80 < 0x17) {
        local_b8 = CONCAT17((char)uStack_80,(undefined7)local_b8);
      }
      else {
        if (0x7fffffffffffffef < uStack_80) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar6 = (uStack_80 | 0xf) + 1;
        ppppuVar5 = (undefined8 ****)operator_new(uVar6);
        local_b8 = uVar6 | 0x8000000000000000;
        uStack_c0 = uVar1;
        local_c8 = ppppuVar5;
      }
      __n = uVar1 + 1;
      if ((ppppuVar5 <= __src_00) && (__src_00 < (undefined8 ****)((long)ppppuVar5 + __n))) {
LAB_00514b08:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                   ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
      }
      memmove(ppppuVar5,__src_00,__n);
    }
    else {
      uStack_c0 = uStack_80;
      local_c8 = local_88;
      local_b8 = local_78;
    }
    (*(code *)param_1[3])(param_1 + 1,local_f0);
    pvVar10 = local_f0[0];
    puVar4 = local_e0;
    if ((long)local_b8 < 0) {
      operator_delete(local_c8);
      pvVar10 = local_f0[0];
      puVar4 = local_e0;
    }
    while (puVar4 != (undefined8 *)0x0) {
      pvVar9 = (void *)*puVar4;
      local_f0[0] = pvVar10;
      if (*(char *)((long)puVar4 + 0x27) < '\0') {
        operator_delete((void *)puVar4[2]);
      }
      operator_delete(puVar4);
      pvVar10 = local_f0[0];
      puVar4 = (undefined8 *)pvVar9;
    }
    local_f0[0] = (void *)0x0;
    if (pvVar10 != (void *)0x0) {
      operator_delete(pvVar10);
    }
    pvVar9 = local_b0;
    puVar4 = local_a0;
    if ((long)local_78 < 0) {
      operator_delete(local_88);
      pvVar9 = local_b0;
      puVar4 = local_a0;
    }
    while (puVar4 != (undefined8 *)0x0) {
      pvVar10 = (void *)*puVar4;
      local_b0 = pvVar9;
      if (*(char *)((long)puVar4 + 0x27) < '\0') {
        operator_delete((void *)puVar4[2]);
      }
      operator_delete(puVar4);
      pvVar9 = local_b0;
      puVar4 = (undefined8 *)pvVar10;
    }
    local_b0 = (void *)0x0;
    pvVar10 = local_70;
    puVar4 = local_60;
    if (pvVar9 != (void *)0x0) {
      operator_delete(pvVar9);
      pvVar10 = local_70;
      puVar4 = local_60;
    }
  }
  while (puVar4 != (undefined8 *)0x0) {
    puVar8 = (undefined8 *)*puVar4;
    local_70 = pvVar10;
    if (*(char *)((long)puVar4 + 0x27) < '\0') {
      operator_delete((void *)puVar4[2]);
    }
    operator_delete(puVar4);
    pvVar10 = local_70;
    puVar4 = puVar8;
  }
  local_70 = (void *)0x0;
  if (pvVar10 != (void *)0x0) {
    operator_delete(pvVar10);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00514b3c  FUN_00514b3c =====

void FUN_00514b3c(undefined8 *param_1)

{
  FUN_005cdc84(*param_1);
  return;
}


// ===== 00514b44  FUN_00514b44 =====

void FUN_00514b44(undefined8 *param_1,long param_2)

{
  bool bVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  undefined2 uVar6;
  undefined8 uVar7;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  uVar4 = *(ulong *)(param_2 + 8);
  if (uVar4 - 1 == 0) {
    uVar4 = 2;
  }
  else if ((uVar4 & uVar4 - 1) == 0) {
    uVar5 = 0;
    bVar1 = true;
    if (uVar4 == 0) {
LAB_00514bb0:
      if (bVar1) goto LAB_00514c28;
      uVar2 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar5 < 3) {
LAB_00514c08:
        uVar2 = FUN_005204f8();
      }
      else {
        uVar7 = NEON_cnt(uVar5,1);
        uVar6 = NEON_uaddlv(uVar7,1);
        if (1 < (CONCAT62((int6)((ulong)uVar7 >> 0x10),uVar6) & 0xffffffff)) goto LAB_00514c08;
        if (1 < uVar2) {
          uVar2 = 1L << (-LZCOUNT(uVar2 - 1) & 0x3fU);
        }
      }
      if (uVar4 <= uVar2) {
        uVar4 = uVar2;
      }
      if (uVar5 <= uVar4) goto LAB_00514c28;
    }
  }
  else {
    uVar4 = FUN_005204f8(uVar4);
    uVar5 = param_1[1];
    bVar1 = uVar5 <= uVar4;
    if (uVar4 <= uVar5) goto LAB_00514bb0;
  }
  FUN_00513c80(param_1,uVar4);
LAB_00514c28:
  for (plVar3 = *(long **)(param_2 + 0x10); plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
    FUN_00514c58(param_1,plVar3 + 2,plVar3 + 2);
  }
  return;
}


// ===== 00514c58  FUN_00514c58 =====

long * FUN_00514c58(long *param_1,undefined8 *param_2,long *param_3)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *unaff_x27;
  undefined2 uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar10 = param_2[1];
  puVar6 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar10 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar6 = param_2;
  }
  plVar5 = (long *)FUN_00427058(auStack_70,puVar6,uVar10);
  plVar15 = (long *)param_1[1];
  if (plVar15 != (long *)0x0) {
    uVar17 = NEON_cnt(plVar15,1);
    uVar16 = NEON_uaddlv(uVar17,1);
    uVar10 = CONCAT62((int6)((ulong)uVar17 >> 0x10),uVar16) & 0xffffffff;
    if (uVar10 < 2) {
      unaff_x27 = (long *)((long)plVar15 - 1U & (ulong)plVar5);
    }
    else {
      unaff_x27 = plVar5;
      if (plVar15 <= plVar5) {
        uVar9 = 0;
        if (plVar15 != (long *)0x0) {
          uVar9 = (ulong)plVar5 / (ulong)plVar15;
        }
        unaff_x27 = (long *)((long)plVar5 - uVar9 * (long)plVar15);
      }
    }
    puVar6 = *(undefined8 **)(*param_1 + (long)unaff_x27 * 8);
    if ((puVar6 != (undefined8 *)0x0) && (plVar14 = (long *)*puVar6, plVar14 != (long *)0x0)) {
      puVar6 = (undefined8 *)*param_2;
      __n = param_2[1];
      if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
        puVar6 = param_2;
        __n = (ulong)*(byte *)((long)param_2 + 0x17);
      }
      do {
        plVar7 = (long *)plVar14[1];
        if (plVar7 != plVar5) {
          if (uVar10 < 2) {
            plVar7 = (long *)((ulong)plVar7 & (long)plVar15 - 1U);
          }
          else if (plVar15 <= plVar7) {
            uVar9 = 0;
            if (plVar15 != (long *)0x0) {
              uVar9 = (ulong)plVar7 / (ulong)plVar15;
            }
            plVar7 = (long *)((long)plVar7 - uVar9 * (long)plVar15);
          }
          if (plVar7 != unaff_x27) break;
        }
        bVar2 = *(byte *)((long)plVar14 + 0x27);
        sVar1 = plVar14[3];
        if (-1 < (char)bVar2) {
          sVar1 = (ulong)bVar2;
        }
        if (sVar1 == __n) {
          plVar7 = plVar14 + 2;
          plVar11 = (long *)*plVar7;
          if ((char)bVar2 < '\0') {
            plVar7 = plVar11;
            if (__n != 0) {
              uVar4 = memcmp(plVar11,puVar6,__n);
              plVar7 = (long *)(ulong)uVar4;
              if (uVar4 != 0) goto LAB_00514d2c;
            }
          }
          else if (bVar2 != 0) {
            uVar9 = 0;
            while (*(char *)((long)plVar14 + uVar9 + 0x10) == *(char *)((long)puVar6 + uVar9)) {
              uVar9 = uVar9 + 1;
              if (bVar2 == uVar9) goto LAB_00514e04;
            }
            goto LAB_00514d2c;
          }
LAB_00514e04:
          uVar17 = 0;
          goto LAB_00515054;
        }
LAB_00514d2c:
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
    }
  }
  plVar14 = (long *)operator_new(0x48);
  plVar7 = plVar14 + 2;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    plVar11 = (long *)*param_3;
    uVar10 = param_3[1];
    if (uVar10 < 0x17) {
      *(char *)((long)plVar14 + 0x27) = (char)uVar10;
    }
    else {
      if (0x7fffffffffffffef < uVar10) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar9 = (uVar10 | 0xf) + 1;
      plVar7 = (long *)operator_new(uVar9);
      plVar14[2] = (long)plVar7;
      plVar14[3] = uVar10;
      plVar14[4] = uVar9 | 0x8000000000000000;
    }
    if ((plVar7 <= plVar11) && (plVar11 < (long *)((long)plVar7 + uVar10 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    plVar7 = (long *)memmove(plVar7,plVar11,uVar10 + 1);
  }
  else {
    lVar13 = *param_3;
    lVar8 = param_3[2];
    plVar14[3] = param_3[1];
    *plVar7 = lVar13;
    plVar14[4] = lVar8;
  }
  lVar8 = param_1[3];
  *plVar14 = 0;
  plVar14[1] = (long)plVar5;
  lVar13 = param_3[3];
  lVar19 = param_3[6];
  lVar18 = param_3[5];
  plVar14[6] = param_3[4];
  plVar14[5] = lVar13;
  plVar14[8] = lVar19;
  plVar14[7] = lVar18;
  if ((plVar15 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar15 < (float)(lVar8 + 1))) {
    if (plVar15 < (long *)0x3) {
      uVar10 = 1;
    }
    else {
      uVar10 = (ulong)(((ulong)plVar15 & (long)plVar15 - 1U) != 0);
    }
    plVar11 = (long *)(uVar10 | (long)plVar15 << 1);
    plVar12 = (long *)(long)((float)(lVar8 + 1) / *(float *)(param_1 + 4));
    if (plVar11 <= plVar12) {
      plVar11 = plVar12;
    }
    if ((long)plVar11 - 1U == 0) {
      plVar11 = (long *)0x2;
    }
    else if (((ulong)plVar11 & (long)plVar11 - 1U) != 0) {
      plVar7 = (long *)FUN_005204f8(plVar11);
      plVar15 = (long *)param_1[1];
      plVar11 = plVar7;
    }
    if (plVar15 < plVar11) {
LAB_00514f30:
      plVar7 = (long *)FUN_00513c80(param_1,plVar11);
    }
    else if (plVar11 < plVar15) {
      plVar7 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (plVar15 < (long *)0x3) {
LAB_00514f98:
        plVar7 = (long *)FUN_005204f8();
      }
      else {
        uVar17 = NEON_cnt(plVar15,1);
        uVar16 = NEON_uaddlv(uVar17,1);
        if (1 < (CONCAT62((int6)((ulong)uVar17 >> 0x10),uVar16) & 0xffffffff)) goto LAB_00514f98;
        if ((long *)0x1 < plVar7) {
          plVar7 = (long *)(1L << (-LZCOUNT((long)plVar7 + -1) & 0x3fU));
        }
      }
      if (plVar11 <= plVar7) {
        plVar11 = plVar7;
      }
      if (plVar11 < plVar15) goto LAB_00514f30;
    }
    plVar15 = (long *)param_1[1];
    if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
      unaff_x27 = (long *)((long)plVar15 - 1U & (ulong)plVar5);
    }
    else {
      unaff_x27 = plVar5;
      if (plVar15 <= plVar5) {
        uVar10 = 0;
        if (plVar15 != (long *)0x0) {
          uVar10 = (ulong)plVar5 / (ulong)plVar15;
        }
        unaff_x27 = (long *)((long)plVar5 - uVar10 * (long)plVar15);
      }
    }
  }
  lVar8 = *param_1;
  plVar5 = *(long **)(lVar8 + (long)unaff_x27 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    lVar13 = *plVar5;
    *plVar5 = (long)plVar14;
    *plVar14 = lVar13;
    *(long **)(lVar8 + (long)unaff_x27 * 8) = plVar5;
    if (*plVar14 == 0) goto LAB_00515044;
    plVar5 = *(long **)(*plVar14 + 8);
    if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
      plVar5 = (long *)((ulong)plVar5 & (long)plVar15 - 1U);
    }
    else if (plVar15 <= plVar5) {
      uVar10 = 0;
      if (plVar15 != (long *)0x0) {
        uVar10 = (ulong)plVar5 / (ulong)plVar15;
      }
      plVar5 = (long *)((long)plVar5 - uVar10 * (long)plVar15);
    }
    plVar5 = (long *)(*param_1 + (long)plVar5 * 8);
  }
  else {
    *plVar14 = *plVar5;
  }
  *plVar5 = (long)plVar14;
LAB_00515044:
  uVar17 = 1;
  param_1[3] = param_1[3] + 1;
LAB_00515054:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(plVar7,uVar17);
  }
  return plVar14;
}


// ===== 005150b8  FUN_005150b8 =====

void FUN_005150b8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0040298c();
}


// ===== 005150c4  FUN_005150c4 =====

void FUN_005150c4(undefined8 param_1,undefined8 *param_2)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  if (param_2 != (undefined8 *)0x0) {
    if (*(code **)(param_2[0x11] + 8) != (code *)0x0) {
      (**(code **)(param_2[0x11] + 8))(param_2[0xe]);
    }
    if (*(code **)(param_2[0xd] + 8) != (code *)0x0) {
      (**(code **)(param_2[0xd] + 8))(param_2[10]);
    }
    if (*(char *)((long)param_2 + 0x4f) < '\0') {
      operator_delete((void *)param_2[7]);
      puVar2 = (undefined8 *)param_2[2];
    }
    else {
      puVar2 = (undefined8 *)param_2[2];
    }
    while (puVar2 != (undefined8 *)0x0) {
      pvVar1 = (void *)*puVar2;
      if (*(char *)((long)puVar2 + 0x27) < '\0') {
        operator_delete((void *)puVar2[2]);
      }
      operator_delete(puVar2);
      puVar2 = (undefined8 *)pvVar1;
    }
    pvVar1 = (void *)*param_2;
    *param_2 = 0;
    if (pvVar1 != (void *)0x0) {
      operator_delete(pvVar1);
    }
    operator_delete(param_2);
    return;
  }
  return;
}


// ===== 00515178  FUN_00515178 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00515178(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 *__src;
  ulong uVar2;
  undefined8 *__dest;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = _UNK_001f45e8;
  uVar4 = _DAT_001f45e0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[6] = uVar5;
  param_1[5] = uVar4;
  __dest = param_1 + 7;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    __src = (undefined8 *)*param_2;
    uVar2 = param_2[1];
    if (uVar2 < 0x17) {
      *(char *)((long)param_1 + 0x4f) = (char)uVar2;
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      __dest = (undefined8 *)operator_new(uVar1);
      param_1[7] = __dest;
      param_1[8] = uVar2;
      param_1[9] = uVar1 | 0x8000000000000000;
    }
    if ((__dest <= __src) && (__src < (undefined8 *)((long)__dest + uVar2 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar2 + 1);
  }
  else {
    uVar5 = param_2[1];
    uVar4 = *param_2;
    param_1[9] = param_2[2];
    param_1[8] = uVar5;
    *__dest = uVar4;
  }
  uVar4 = *param_3;
  param_1[0xb] = param_3[1];
  param_1[10] = uVar4;
  param_1[0xc] = param_3[2];
  lVar3 = *(long *)(param_3[3] + 8);
  param_1[0xd] = param_3[3];
  if (lVar3 != 0) {
    param_3[2] = FUN_005150b8;
    param_3[3] = &DAT_001f1910;
  }
  uVar4 = *param_4;
  param_1[0xf] = param_4[1];
  param_1[0xe] = uVar4;
  param_1[0x10] = param_4[2];
  lVar3 = *(long *)(param_4[3] + 8);
  param_1[0x11] = param_4[3];
  if (lVar3 != 0) {
    param_4[2] = FUN_005150b8;
    param_4[3] = &DAT_001f1910;
  }
  return;
}


// ===== 005152c8  FUN_005152c8 =====

undefined8 FUN_005152c8(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  pthread_key_t *ppVar3;
  void *pvVar4;
  code *pcVar5;
  void *__pointer;
  undefined8 *puVar6;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  ppVar3 = (pthread_key_t *)FUN_0054a21c();
  __pointer = (void *)*param_1;
  *param_1 = 0;
  pvVar4 = pthread_getspecific(*ppVar3);
  if (pvVar4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/thread",0xc9,
               "get() == nullptr","Attempting to overwrite thread local data");
  }
  pthread_setspecific(*ppVar3,__pointer);
  pcVar5 = (code *)param_1[1];
  plVar1 = (long *)(param_1[3] + ((long)param_1[2] >> 1));
  if ((param_1[2] & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *plVar1);
  }
  puVar6 = param_1 + 5;
  local_40 = *puVar6;
  *puVar6 = 0;
  (*pcVar5)(plVar1,param_1[4],&local_40);
  FUN_005201dc(&local_40);
  FUN_005201dc(puVar6);
  pvVar4 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar4 != (void *)0x0) {
    FUN_0054a3b8(pvVar4);
    operator_delete(pvVar4);
  }
  operator_delete(param_1);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005153d0  FUN_005153d0 =====

void FUN_005153d0(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d1fed0;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00515428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[5] + 8))(param_1[2]);
    return;
  }
  return;
}


// ===== 00515438  FUN_00515438 =====

void FUN_00515438(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d1fed0;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
    (**(code **)(param_1[5] + 8))(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0051549c  FUN_0051549c =====

void FUN_0051549c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_005ce36c();
  FUN_00514834(param_1 + 8);
  uVar2 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x005154f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x58))
            (param_1 + 0x48,param_1 + 0x30,*(undefined8 *)(param_1 + 0x68),uVar1,uVar2);
  return;
}


// ===== 005154f4  FUN_005154f4 =====

void FUN_005154f4(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1[5] + 8);
  *param_1 = &PTR_FUN_00d1fef8;
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00515510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1[2]);
    return;
  }
  return;
}


// ===== 00515518  FUN_00515518 =====

void FUN_00515518(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[5] + 8);
  *param_1 = &PTR_FUN_00d1fef8;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00515558  FUN_00515558 =====

void FUN_00515558(long param_1)

{
  FUN_00514834(param_1 + 8);
  return;
}


// ===== 00515560  FUN_00515560 =====

void FUN_00515560(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)((long)param_1 + 0x14) = param_3;
  *param_1 = &PTR_FUN_00d1ff20;
  param_1[1] = param_2;
  return;
}


// ===== 00515578  FUN_00515578 =====

void FUN_00515578(undefined8 *param_1)

{
  if ((*(char *)((long)param_1 + 0x14) != '\0') && (param_1[1] != 0)) {
    FUN_005cdc6c();
  }
  *param_1 = &PTR_FUN_00d1ff60;
  if (param_1[1] != 0) {
    FUN_005ce374(param_1[1],PTR_free_00d51ac0);
    param_1[1] = 0;
  }
  return;
}


// ===== 005155cc  FUN_005155cc =====

void FUN_005155cc(undefined8 *param_1)

{
  if ((*(char *)((long)param_1 + 0x14) != '\0') && (param_1[1] != 0)) {
    FUN_005cdc6c();
  }
  *param_1 = &PTR_FUN_00d1ff60;
  if (param_1[1] != 0) {
    FUN_005ce374(param_1[1],PTR_free_00d51ac0);
  }
  operator_delete(param_1);
  return;
}


// ===== 00515620  FUN_00515620 =====

void FUN_00515620(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)malloc(0x80);
  *puVar2 = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_00d1ff40;
  param_1[1] = puVar2;
  uVar1 = FUN_005cdda4(param_2,puVar2,param_3);
  *(undefined4 *)(param_1 + 2) = uVar1;
  return;
}


// ===== 0051567c  FUN_0051567c =====

void FUN_0051567c(long param_1)

{
  undefined4 uVar1;
  
  if (-1 < *(int *)(param_1 + 0x10)) {
    uVar1 = FUN_005ce108(*(undefined8 *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0x10) = uVar1;
  }
  return;
}


// ===== 005156ac  FUN_005156ac =====

void FUN_005156ac(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  void *pvVar2;
  
  pvVar2 = malloc(0x98);
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_00d1c7a8;
  param_1[1] = pvVar2;
  uVar1 = FUN_005d089c(param_2,pvVar2);
  *(undefined4 *)(param_1 + 2) = uVar1;
  *(undefined8 *)param_1[1] = param_3;
  return;
}


// ===== 00515708  FUN_00515708 =====

void FUN_00515708(long param_1)

{
  undefined4 uVar1;
  
  if (-1 < *(int *)(param_1 + 0x10)) {
    uVar1 = FUN_005d08e0(*(undefined8 *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0x10) = uVar1;
  }
  return;
}


// ===== 00515738  FUN_00515738 =====

void FUN_00515738(long param_1)

{
  undefined4 uVar1;
  
  if (-1 < *(int *)(param_1 + 0x10)) {
    uVar1 = FUN_005d0af4(*(undefined8 *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0x10) = uVar1;
  }
  return;
}


// ===== 00515768  FUN_00515768 =====

void FUN_00515768(long param_1)

{
  undefined4 uVar1;
  
  if (-1 < *(int *)(param_1 + 0x10)) {
    uVar1 = FUN_005d0df4(*(undefined8 *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0x10) = uVar1;
  }
  return;
}


// ===== 00515798  FUN_00515798 =====

void FUN_00515798(long param_1)

{
  if (-1 < *(int *)(param_1 + 0x10)) {
    FUN_005d0e48(*(undefined8 *)(param_1 + 8));
    return;
  }
  return;
}


// ===== 005157ac  FUN_005157ac =====

undefined8 FUN_005157ac(long param_1)

{
  undefined8 uVar1;
  
  if (-1 < *(int *)(param_1 + 0x10)) {
    uVar1 = FUN_005d0e50(*(undefined8 *)(param_1 + 8));
    return uVar1;
  }
  return 0;
}


// ===== 005157c4  FUN_005157c4 =====

void FUN_005157c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1db90;
  if (param_1[1] != 0) {
    FUN_005ce374(param_1[1],PTR_free_00d51ac0);
  }
  operator_delete(param_1);
  return;
}


// ===== 00515804  FUN_00515804 =====

void FUN_00515804(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1ff60;
  if (param_1[1] != 0) {
    FUN_005ce374(param_1[1],PTR_free_00d51ac0);
    param_1[1] = 0;
  }
  return;
}


// ===== 00515844  FUN_00515844 =====

void FUN_00515844(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1ff60;
  if (param_1[1] != 0) {
    FUN_005ce374(param_1[1],PTR_free_00d51ac0);
  }
  operator_delete(param_1);
  return;
}


// ===== 00515884  FUN_00515884 =====

void FUN_00515884(void)

{
  return;
}


// ===== 00515888  FUN_00515888 =====

undefined8 FUN_00515888(void)

{
  return 0;
}


// ===== 00515890  FUN_00515890 =====

void FUN_00515890(void)

{
  FUN_005158b0();
  return;
}


// ===== 005158b0  FUN_005158b0 =====

void FUN_005158b0(ushort *param_1,ushort *param_2,undefined8 param_3,long param_4)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  long lVar6;
  int iVar7;
  ushort uVar8;
  ulong uVar9;
  ushort *puVar10;
  ulong uVar11;
  ushort *puVar12;
  long lVar13;
  ushort *puVar14;
  long lVar15;
  ushort *puVar16;
  ushort *puVar17;
  
LAB_005158d8:
  puVar16 = param_2 + -1;
  puVar14 = param_1;
LAB_005158e0:
  param_1 = puVar14;
  uVar11 = (long)param_2 - (long)param_1;
  uVar9 = (long)uVar11 >> 1;
  switch(uVar9) {
  case 0:
  case 1:
    goto switchD_00515b88_caseD_0;
  case 2:
    uVar3 = *param_1;
    if (uVar3 <= param_2[-1]) {
      return;
    }
    *param_1 = param_2[-1];
    param_2[-1] = uVar3;
    return;
  case 3:
    uVar8 = param_1[1];
    uVar2 = param_2[-1];
    uVar3 = uVar8;
    if (uVar8 <= uVar2) {
      uVar3 = uVar2;
    }
    if (uVar2 <= uVar8) {
      uVar8 = uVar2;
    }
    param_2[-1] = uVar3;
    param_1[1] = uVar8;
    uVar2 = *param_1;
    uVar8 = param_2[-1];
    uVar3 = uVar8;
    if (uVar8 <= uVar2) {
      uVar3 = uVar2;
    }
    if (uVar2 <= uVar8) {
      uVar8 = uVar2;
    }
    param_2[-1] = uVar3;
    uVar2 = param_1[1];
    uVar3 = *param_1;
    if (uVar2 <= uVar8) {
      uVar3 = uVar2;
    }
    if (uVar8 <= uVar2) {
      uVar8 = uVar2;
    }
    *param_1 = uVar3;
    break;
  case 4:
    uVar8 = *param_1;
    uVar2 = param_1[2];
    uVar3 = uVar8;
    if (uVar8 <= uVar2) {
      uVar3 = uVar2;
    }
    if (uVar2 <= uVar8) {
      uVar8 = uVar2;
    }
    uVar2 = param_1[1];
    param_1[2] = uVar3;
    *param_1 = uVar8;
    uVar8 = param_2[-1];
    uVar3 = uVar2;
    if (uVar2 <= uVar8) {
      uVar3 = uVar8;
    }
    if (uVar8 <= uVar2) {
      uVar2 = uVar8;
    }
    param_2[-1] = uVar3;
    uVar8 = *param_1;
    uVar3 = uVar8;
    if (uVar8 <= uVar2) {
      uVar3 = uVar2;
    }
    if (uVar2 <= uVar8) {
      uVar8 = uVar2;
    }
    param_1[1] = uVar3;
    uVar2 = param_1[2];
    *param_1 = uVar8;
    uVar8 = param_2[-1];
    uVar3 = uVar2;
    if (uVar2 <= uVar8) {
      uVar3 = uVar8;
    }
    if (uVar8 <= uVar2) {
      uVar2 = uVar8;
    }
    param_2[-1] = uVar3;
    uVar8 = param_1[1];
    uVar3 = uVar8;
    if (uVar8 <= uVar2) {
      uVar3 = uVar2;
    }
    if (uVar2 <= uVar8) {
      uVar8 = uVar2;
    }
    param_1[2] = uVar3;
    break;
  case 5:
    uVar8 = *param_1;
    uVar2 = param_1[1];
    uVar3 = uVar8;
    if (uVar8 <= uVar2) {
      uVar3 = uVar2;
    }
    if (uVar2 <= uVar8) {
      uVar8 = uVar2;
    }
    uVar2 = param_1[3];
    param_1[1] = uVar3;
    *param_1 = uVar8;
    uVar8 = param_2[-1];
    uVar3 = uVar2;
    if (uVar2 <= uVar8) {
      uVar3 = uVar8;
    }
    if (uVar8 <= uVar2) {
      uVar2 = uVar8;
    }
    param_2[-1] = uVar3;
    param_1[3] = uVar2;
    uVar2 = param_1[2];
    uVar8 = param_2[-1];
    uVar3 = uVar8;
    if (uVar8 <= uVar2) {
      uVar3 = uVar2;
    }
    if (uVar2 <= uVar8) {
      uVar8 = uVar2;
    }
    param_2[-1] = uVar3;
    uVar2 = param_1[3];
    uVar3 = param_1[2];
    if (uVar2 <= uVar8) {
      uVar3 = uVar2;
    }
    if (uVar8 <= uVar2) {
      uVar8 = uVar2;
    }
    param_1[2] = uVar3;
    uVar2 = param_1[1];
    param_1[3] = uVar8;
    uVar8 = param_2[-1];
    uVar3 = uVar2;
    if (uVar2 <= uVar8) {
      uVar3 = uVar8;
    }
    if (uVar8 <= uVar2) {
      uVar2 = uVar8;
    }
    param_2[-1] = uVar3;
    uVar5 = param_1[3];
    uVar3 = *param_1;
    uVar4 = param_1[2];
    uVar8 = uVar5;
    if (uVar3 <= uVar5) {
      uVar8 = uVar3;
    }
    if (uVar5 <= uVar3) {
      uVar5 = uVar3;
    }
    if (uVar4 <= uVar8) {
      uVar3 = uVar4;
    }
    if (uVar8 <= uVar4) {
      uVar8 = uVar4;
    }
    uVar4 = uVar5;
    if (uVar2 <= uVar5) {
      uVar4 = uVar2;
    }
    if (uVar5 <= uVar2) {
      uVar5 = uVar2;
    }
    *param_1 = uVar3;
    if (uVar8 <= uVar4) {
      uVar2 = uVar8;
    }
    if (uVar4 <= uVar8) {
      uVar4 = uVar8;
    }
    param_1[3] = uVar5;
    param_1[1] = uVar2;
    param_1[2] = uVar4;
    return;
  default:
    if (0x3d < (long)uVar11) {
      if (param_4 == 0) {
        if (param_1 == param_2) {
          return;
        }
        FUN_0051719c(param_1,param_2,param_2,param_3);
        return;
      }
      param_4 = param_4 + -1;
      puVar14 = (ushort *)((long)param_1 + (uVar9 & 0xfffffffffffffffe));
      if (uVar11 < 1999) {
        uVar3 = *puVar14;
        uVar8 = *param_1;
        uVar2 = *puVar16;
        if (uVar3 < uVar8) {
          if (uVar2 < uVar3) {
            iVar7 = 1;
            *param_1 = uVar2;
          }
          else {
            *param_1 = uVar3;
            *puVar14 = uVar8;
            if (uVar8 <= *puVar16) {
LAB_005159c0:
              iVar7 = 1;
              goto LAB_005159c4;
            }
            iVar7 = 2;
            *puVar14 = *puVar16;
          }
          *puVar16 = uVar8;
        }
        else if (uVar2 < uVar3) {
          *puVar14 = uVar2;
          *puVar16 = uVar3;
          uVar3 = *param_1;
          if (uVar3 <= *puVar14) goto LAB_005159c0;
          iVar7 = 2;
          *param_1 = *puVar14;
          *puVar14 = uVar3;
        }
        else {
          iVar7 = 0;
        }
      }
      else {
        uVar9 = uVar9 >> 1 & 0x7ffffffffffffffe;
        iVar7 = FUN_005174c0(param_1,(long)param_1 + uVar9,puVar14,(long)puVar14 + uVar9,puVar16,
                             param_3);
      }
LAB_005159c4:
      uVar3 = *param_1;
      puVar10 = puVar16;
      if (*puVar14 <= uVar3) goto LAB_005159d8;
      goto LAB_005159fc;
    }
    uVar3 = param_1[1];
    uVar2 = *param_1;
    puVar14 = param_1 + 2;
    uVar5 = *puVar14;
    uVar8 = uVar3;
    if (uVar3 <= uVar5) {
      uVar8 = uVar5;
    }
    if (uVar5 <= uVar3) {
      uVar3 = uVar5;
    }
    uVar5 = uVar8;
    if (uVar2 <= uVar8) {
      uVar5 = uVar2;
    }
    if (uVar8 <= uVar2) {
      uVar8 = uVar2;
    }
    if (uVar3 <= uVar5) {
      uVar2 = uVar3;
    }
    if (uVar5 <= uVar3) {
      uVar5 = uVar3;
    }
    *puVar14 = uVar8;
    *param_1 = uVar2;
    param_1[1] = uVar5;
    if (param_1 + 3 == param_2) {
      return;
    }
    lVar13 = 6;
    puVar16 = param_1 + 3;
    goto LAB_00515dc0;
  }
  param_1[1] = uVar8;
  return;
LAB_00515dc0:
  puVar10 = puVar16;
  uVar3 = *puVar10;
  uVar8 = *puVar14;
  lVar15 = lVar13;
  if (uVar3 < uVar8) {
    do {
      lVar6 = lVar15 + -2;
      *(ushort *)((long)param_1 + lVar15) = uVar8;
      puVar14 = param_1;
      if (lVar6 == 0) goto LAB_00515da4;
      uVar8 = *(ushort *)((long)param_1 + lVar15 + -4);
      lVar15 = lVar6;
    } while (uVar3 < uVar8);
    puVar14 = (ushort *)((long)param_1 + lVar6);
LAB_00515da4:
    *puVar14 = uVar3;
  }
  lVar13 = lVar13 + 2;
  puVar16 = puVar10 + 1;
  puVar14 = puVar10;
  if (puVar10 + 1 == param_2) {
switchD_00515b88_caseD_0:
    return;
  }
  goto LAB_00515dc0;
LAB_005159d8:
  while (puVar10 = puVar10 + -1, puVar10 != param_1) {
    if (*puVar10 < *puVar14) goto code_r0x005159f0;
  }
  puVar10 = param_1 + 1;
  puVar14 = puVar10;
  if (*puVar16 <= uVar3) {
    while( true ) {
      if (puVar14 == puVar16) {
        return;
      }
      uVar8 = *puVar14;
      if (uVar3 < uVar8) break;
      puVar14 = puVar14 + 1;
    }
    puVar10 = puVar14 + 1;
    *puVar14 = *puVar16;
    *puVar16 = uVar8;
  }
  puVar12 = puVar16;
  if (puVar10 == puVar16) {
    return;
  }
  while( true ) {
    do {
      puVar14 = puVar10;
      puVar10 = puVar14 + 1;
      uVar3 = *puVar14;
    } while (uVar3 <= *param_1);
    do {
      puVar12 = puVar12 + -1;
    } while (*param_1 < *puVar12);
    if (puVar12 <= puVar14) break;
    *puVar14 = *puVar12;
    *puVar12 = uVar3;
  }
  goto LAB_005158e0;
code_r0x005159f0:
  iVar7 = iVar7 + 1;
  *param_1 = *puVar10;
  *puVar10 = uVar3;
LAB_005159fc:
  puVar12 = param_1 + 1;
  puVar17 = puVar12;
  if (puVar12 < puVar10) {
    while( true ) {
      do {
        puVar12 = puVar17;
        puVar17 = puVar12 + 1;
        uVar3 = *puVar12;
      } while (uVar3 < *puVar14);
      do {
        puVar10 = puVar10 + -1;
      } while (*puVar14 <= *puVar10);
      if (puVar10 < puVar12) break;
      iVar7 = iVar7 + 1;
      puVar1 = puVar10;
      if (puVar12 != puVar14) {
        puVar1 = puVar14;
      }
      *puVar12 = *puVar10;
      *puVar10 = uVar3;
      puVar14 = puVar1;
    }
  }
  if (puVar12 != puVar14) {
    uVar3 = *puVar12;
    if (*puVar14 < uVar3) {
      iVar7 = iVar7 + 1;
      *puVar12 = *puVar14;
      *puVar14 = uVar3;
    }
  }
  if (iVar7 == 0) {
    uVar9 = FUN_00516944(param_1,puVar12,param_3);
    uVar11 = FUN_00516944(puVar12 + 1,param_2,param_3);
    if ((uVar11 & 1) != 0) goto LAB_00515b68;
    puVar14 = puVar12 + 1;
    if ((uVar9 & 1) != 0) goto LAB_005158e0;
  }
  if ((long)param_2 - (long)puVar12 <= (long)puVar12 - (long)param_1) {
    FUN_005158b0(puVar12 + 1,param_2,param_3,param_4);
    param_2 = puVar12;
    goto LAB_005158d8;
  }
  FUN_005158b0(param_1,puVar12,param_3,param_4);
  puVar14 = puVar12 + 1;
  goto LAB_005158e0;
LAB_00515b68:
  param_2 = puVar12;
  if ((uVar9 & 1) != 0) {
    return;
  }
  goto LAB_005158d8;
}


// ===== 00515e44  FUN_00515e44 =====

void FUN_00515e44(void)

{
  FUN_00515e64();
  return;
}


// ===== 00515e64  FUN_00515e64 =====

void FUN_00515e64(int *param_1,int *param_2,undefined8 param_3,long param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  int *piVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  int *piVar13;
  long lVar14;
  int *piVar15;
  int *piVar16;
  
LAB_00515e8c:
  piVar15 = param_2 + -1;
  piVar13 = param_1;
LAB_00515e94:
  param_1 = piVar13;
  uVar10 = (long)param_2 - (long)param_1;
  uVar8 = (long)uVar10 >> 2;
  switch(uVar8) {
  case 0:
  case 1:
    goto switchD_00516138_caseD_0;
  case 2:
    iVar6 = *param_1;
    if (iVar6 <= param_2[-1]) {
      return;
    }
    *param_1 = param_2[-1];
    param_2[-1] = iVar6;
    return;
  case 3:
    iVar7 = param_1[1];
    iVar3 = param_2[-1];
    iVar6 = iVar7;
    if (iVar7 <= iVar3) {
      iVar6 = iVar3;
    }
    if (iVar3 <= iVar7) {
      iVar7 = iVar3;
    }
    param_2[-1] = iVar6;
    param_1[1] = iVar7;
    iVar3 = *param_1;
    iVar7 = param_2[-1];
    iVar6 = iVar7;
    if (iVar7 <= iVar3) {
      iVar6 = iVar3;
    }
    if (iVar3 <= iVar7) {
      iVar7 = iVar3;
    }
    param_2[-1] = iVar6;
    iVar3 = param_1[1];
    iVar6 = *param_1;
    if (iVar3 <= iVar7) {
      iVar6 = iVar3;
    }
    if (iVar7 <= iVar3) {
      iVar7 = iVar3;
    }
    *param_1 = iVar6;
    break;
  case 4:
    iVar3 = param_1[1];
    iVar4 = param_1[2];
    iVar7 = *param_1;
    iVar6 = iVar7;
    if (iVar7 <= iVar4) {
      iVar6 = iVar4;
    }
    if (iVar4 <= iVar7) {
      iVar7 = iVar4;
    }
    param_1[2] = iVar6;
    *param_1 = iVar7;
    iVar7 = param_2[-1];
    iVar6 = iVar3;
    if (iVar3 <= iVar7) {
      iVar6 = iVar7;
    }
    if (iVar7 <= iVar3) {
      iVar3 = iVar7;
    }
    param_2[-1] = iVar6;
    iVar7 = *param_1;
    iVar6 = iVar7;
    if (iVar7 <= iVar3) {
      iVar6 = iVar3;
    }
    if (iVar3 <= iVar7) {
      iVar7 = iVar3;
    }
    iVar3 = param_1[2];
    *param_1 = iVar7;
    param_1[1] = iVar6;
    iVar7 = param_2[-1];
    iVar6 = iVar3;
    if (iVar3 <= iVar7) {
      iVar6 = iVar7;
    }
    if (iVar7 <= iVar3) {
      iVar3 = iVar7;
    }
    param_2[-1] = iVar6;
    iVar7 = param_1[1];
    iVar6 = iVar7;
    if (iVar7 <= iVar3) {
      iVar6 = iVar3;
    }
    if (iVar3 <= iVar7) {
      iVar7 = iVar3;
    }
    param_1[2] = iVar6;
    break;
  case 5:
    iVar7 = *param_1;
    iVar3 = param_1[1];
    iVar6 = iVar7;
    if (iVar7 <= iVar3) {
      iVar6 = iVar3;
    }
    if (iVar3 <= iVar7) {
      iVar7 = iVar3;
    }
    iVar3 = param_1[3];
    *param_1 = iVar7;
    param_1[1] = iVar6;
    iVar7 = param_2[-1];
    iVar6 = iVar3;
    if (iVar3 <= iVar7) {
      iVar6 = iVar7;
    }
    if (iVar7 <= iVar3) {
      iVar3 = iVar7;
    }
    param_2[-1] = iVar6;
    param_1[3] = iVar3;
    iVar3 = param_1[2];
    iVar7 = param_2[-1];
    iVar6 = iVar7;
    if (iVar7 <= iVar3) {
      iVar6 = iVar3;
    }
    if (iVar3 <= iVar7) {
      iVar7 = iVar3;
    }
    param_2[-1] = iVar6;
    iVar4 = param_1[3];
    iVar3 = param_1[1];
    iVar6 = param_1[2];
    if (iVar4 <= iVar7) {
      iVar6 = iVar4;
    }
    if (iVar7 <= iVar4) {
      iVar7 = iVar4;
    }
    param_1[2] = iVar6;
    param_1[3] = iVar7;
    iVar7 = param_2[-1];
    iVar6 = iVar3;
    if (iVar3 <= iVar7) {
      iVar6 = iVar7;
    }
    if (iVar7 <= iVar3) {
      iVar3 = iVar7;
    }
    param_2[-1] = iVar6;
    iVar2 = param_1[2];
    iVar4 = param_1[3];
    iVar6 = *param_1;
    iVar7 = iVar4;
    if (iVar6 <= iVar4) {
      iVar7 = iVar6;
    }
    if (iVar4 <= iVar6) {
      iVar4 = iVar6;
    }
    if (iVar2 <= iVar7) {
      iVar6 = iVar2;
    }
    if (iVar7 <= iVar2) {
      iVar7 = iVar2;
    }
    iVar2 = iVar4;
    if (iVar3 <= iVar4) {
      iVar2 = iVar3;
    }
    if (iVar4 <= iVar3) {
      iVar4 = iVar3;
    }
    if (iVar7 <= iVar2) {
      iVar3 = iVar7;
    }
    if (iVar2 <= iVar7) {
      iVar2 = iVar7;
    }
    *param_1 = iVar6;
    param_1[1] = iVar3;
    param_1[2] = iVar2;
    param_1[3] = iVar4;
    return;
  default:
    if (0x7b < (long)uVar10) {
      if (param_4 == 0) {
        if (param_1 == param_2) {
          return;
        }
        FUN_00517638(param_1,param_2,param_2,param_3);
        return;
      }
      param_4 = param_4 + -1;
      piVar13 = param_1 + (uVar8 >> 1);
      if (uVar10 < 0xf9d) {
        iVar6 = *piVar13;
        iVar7 = *param_1;
        iVar3 = *piVar15;
        if (iVar6 < iVar7) {
          if (iVar3 < iVar6) {
            iVar6 = 1;
            *param_1 = iVar3;
          }
          else {
            *param_1 = iVar6;
            *piVar13 = iVar7;
            if (iVar7 <= *piVar15) {
LAB_00515f70:
              iVar6 = 1;
              goto LAB_00515f74;
            }
            iVar6 = 2;
            *piVar13 = *piVar15;
          }
          *piVar15 = iVar7;
        }
        else if (iVar3 < iVar6) {
          *piVar13 = iVar3;
          *piVar15 = iVar6;
          iVar7 = *param_1;
          if (iVar7 <= *piVar13) goto LAB_00515f70;
          iVar6 = 2;
          *param_1 = *piVar13;
          *piVar13 = iVar7;
        }
        else {
          iVar6 = 0;
        }
      }
      else {
        iVar6 = FUN_00517960(param_1,(long)param_1 + (uVar8 & 0xfffffffffffffffc),piVar13,
                             (long)piVar13 + (uVar8 & 0xfffffffffffffffc),piVar15,param_3);
      }
LAB_00515f74:
      iVar7 = *param_1;
      piVar9 = piVar15;
      if (*piVar13 <= iVar7) goto LAB_00515f88;
      goto LAB_00515fac;
    }
    iVar3 = *param_1;
    iVar6 = param_1[1];
    piVar13 = param_1 + 2;
    iVar4 = *piVar13;
    iVar7 = iVar6;
    if (iVar6 <= iVar4) {
      iVar7 = iVar4;
    }
    if (iVar4 <= iVar6) {
      iVar6 = iVar4;
    }
    iVar4 = iVar7;
    if (iVar3 <= iVar7) {
      iVar4 = iVar3;
    }
    if (iVar7 <= iVar3) {
      iVar7 = iVar3;
    }
    if (iVar6 <= iVar4) {
      iVar3 = iVar6;
    }
    if (iVar4 <= iVar6) {
      iVar4 = iVar6;
    }
    *piVar13 = iVar7;
    *param_1 = iVar3;
    param_1[1] = iVar4;
    if (param_1 + 3 == param_2) {
      return;
    }
    lVar12 = 0xc;
    piVar15 = param_1 + 3;
    goto LAB_00516340;
  }
  param_1[1] = iVar7;
  return;
LAB_00516340:
  piVar9 = piVar15;
  iVar6 = *piVar9;
  iVar7 = *piVar13;
  lVar14 = lVar12;
  if (iVar6 < iVar7) {
    do {
      lVar5 = lVar14 + -4;
      *(int *)((long)param_1 + lVar14) = iVar7;
      piVar13 = param_1;
      if (lVar5 == 0) goto LAB_00516324;
      iVar7 = *(int *)((long)param_1 + lVar14 + -8);
      lVar14 = lVar5;
    } while (iVar6 < iVar7);
    piVar13 = (int *)((long)param_1 + lVar5);
LAB_00516324:
    *piVar13 = iVar6;
  }
  lVar12 = lVar12 + 4;
  piVar15 = piVar9 + 1;
  piVar13 = piVar9;
  if (piVar9 + 1 == param_2) {
switchD_00516138_caseD_0:
    return;
  }
  goto LAB_00516340;
LAB_00515f88:
  while (piVar9 = piVar9 + -1, piVar9 != param_1) {
    if (*piVar9 < *piVar13) goto code_r0x00515fa0;
  }
  piVar9 = param_1 + 1;
  piVar13 = piVar9;
  if (*piVar15 <= iVar7) {
    while( true ) {
      if (piVar13 == piVar15) {
        return;
      }
      iVar6 = *piVar13;
      if (iVar7 < iVar6) break;
      piVar13 = piVar13 + 1;
    }
    piVar9 = piVar13 + 1;
    *piVar13 = *piVar15;
    *piVar15 = iVar6;
  }
  piVar11 = piVar15;
  if (piVar9 == piVar15) {
    return;
  }
  while( true ) {
    do {
      piVar13 = piVar9;
      piVar9 = piVar13 + 1;
      iVar6 = *piVar13;
    } while (iVar6 <= *param_1);
    do {
      piVar11 = piVar11 + -1;
    } while (*param_1 < *piVar11);
    if (piVar11 <= piVar13) break;
    *piVar13 = *piVar11;
    *piVar11 = iVar6;
  }
  goto LAB_00515e94;
code_r0x00515fa0:
  iVar6 = iVar6 + 1;
  *param_1 = *piVar9;
  *piVar9 = iVar7;
LAB_00515fac:
  piVar11 = param_1 + 1;
  piVar16 = piVar11;
  if (piVar11 < piVar9) {
    while( true ) {
      do {
        piVar11 = piVar16;
        piVar16 = piVar11 + 1;
        iVar7 = *piVar11;
      } while (iVar7 < *piVar13);
      do {
        piVar9 = piVar9 + -1;
      } while (*piVar13 <= *piVar9);
      if (piVar9 < piVar11) break;
      iVar6 = iVar6 + 1;
      piVar1 = piVar9;
      if (piVar11 != piVar13) {
        piVar1 = piVar13;
      }
      *piVar11 = *piVar9;
      *piVar9 = iVar7;
      piVar13 = piVar1;
    }
  }
  if (piVar11 != piVar13) {
    iVar7 = *piVar11;
    if (*piVar13 < iVar7) {
      iVar6 = iVar6 + 1;
      *piVar11 = *piVar13;
      *piVar13 = iVar7;
    }
  }
  if (iVar6 == 0) {
    uVar8 = FUN_00516c2c(param_1,piVar11,param_3);
    uVar10 = FUN_00516c2c(piVar11 + 1,param_2,param_3);
    if ((uVar10 & 1) != 0) goto LAB_00516118;
    piVar13 = piVar11 + 1;
    if ((uVar8 & 1) != 0) goto LAB_00515e94;
  }
  if ((long)param_2 - (long)piVar11 <= (long)piVar11 - (long)param_1) {
    FUN_00515e64(piVar11 + 1,param_2,param_3,param_4);
    param_2 = piVar11;
    goto LAB_00515e8c;
  }
  FUN_00515e64(param_1,piVar11,param_3,param_4);
  piVar13 = piVar11 + 1;
  goto LAB_00515e94;
LAB_00516118:
  param_2 = piVar11;
  if ((uVar8 & 1) != 0) {
    return;
  }
  goto LAB_00515e8c;
}


// ===== 005163c4  FUN_005163c4 =====

void FUN_005163c4(void)

{
  FUN_005163e4();
  return;
}


// ===== 005163e4  FUN_005163e4 =====

void FUN_005163e4(uint *param_1,uint *param_2,undefined8 param_3,long param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  uint *puVar10;
  ulong uVar11;
  uint *puVar12;
  long lVar13;
  uint *puVar14;
  long lVar15;
  uint *puVar16;
  uint *puVar17;
  
LAB_0051640c:
  puVar16 = param_2 + -1;
  puVar14 = param_1;
LAB_00516414:
  param_1 = puVar14;
  uVar11 = (long)param_2 - (long)param_1;
  uVar9 = (long)uVar11 >> 2;
  switch(uVar9) {
  case 0:
  case 1:
    goto switchD_005166b8_caseD_0;
  case 2:
    uVar4 = *param_1;
    if (uVar4 <= param_2[-1]) {
      return;
    }
    *param_1 = param_2[-1];
    param_2[-1] = uVar4;
    return;
  case 3:
    uVar8 = param_1[1];
    uVar3 = param_2[-1];
    uVar4 = uVar8;
    if (uVar8 <= uVar3) {
      uVar4 = uVar3;
    }
    if (uVar3 <= uVar8) {
      uVar8 = uVar3;
    }
    param_2[-1] = uVar4;
    param_1[1] = uVar8;
    uVar3 = *param_1;
    uVar8 = param_2[-1];
    uVar4 = uVar8;
    if (uVar8 <= uVar3) {
      uVar4 = uVar3;
    }
    if (uVar3 <= uVar8) {
      uVar8 = uVar3;
    }
    param_2[-1] = uVar4;
    uVar3 = param_1[1];
    uVar4 = *param_1;
    if (uVar3 <= uVar8) {
      uVar4 = uVar3;
    }
    if (uVar8 <= uVar3) {
      uVar8 = uVar3;
    }
    *param_1 = uVar4;
    break;
  case 4:
    uVar3 = param_1[1];
    uVar5 = param_1[2];
    uVar8 = *param_1;
    uVar4 = uVar8;
    if (uVar8 <= uVar5) {
      uVar4 = uVar5;
    }
    if (uVar5 <= uVar8) {
      uVar8 = uVar5;
    }
    param_1[2] = uVar4;
    *param_1 = uVar8;
    uVar8 = param_2[-1];
    uVar4 = uVar3;
    if (uVar3 <= uVar8) {
      uVar4 = uVar8;
    }
    if (uVar8 <= uVar3) {
      uVar3 = uVar8;
    }
    param_2[-1] = uVar4;
    uVar8 = *param_1;
    uVar4 = uVar8;
    if (uVar8 <= uVar3) {
      uVar4 = uVar3;
    }
    if (uVar3 <= uVar8) {
      uVar8 = uVar3;
    }
    uVar3 = param_1[2];
    *param_1 = uVar8;
    param_1[1] = uVar4;
    uVar8 = param_2[-1];
    uVar4 = uVar3;
    if (uVar3 <= uVar8) {
      uVar4 = uVar8;
    }
    if (uVar8 <= uVar3) {
      uVar3 = uVar8;
    }
    param_2[-1] = uVar4;
    uVar8 = param_1[1];
    uVar4 = uVar8;
    if (uVar8 <= uVar3) {
      uVar4 = uVar3;
    }
    if (uVar3 <= uVar8) {
      uVar8 = uVar3;
    }
    param_1[2] = uVar4;
    break;
  case 5:
    uVar8 = *param_1;
    uVar3 = param_1[1];
    uVar4 = uVar8;
    if (uVar8 <= uVar3) {
      uVar4 = uVar3;
    }
    if (uVar3 <= uVar8) {
      uVar8 = uVar3;
    }
    uVar3 = param_1[3];
    *param_1 = uVar8;
    param_1[1] = uVar4;
    uVar8 = param_2[-1];
    uVar4 = uVar3;
    if (uVar3 <= uVar8) {
      uVar4 = uVar8;
    }
    if (uVar8 <= uVar3) {
      uVar3 = uVar8;
    }
    param_2[-1] = uVar4;
    param_1[3] = uVar3;
    uVar3 = param_1[2];
    uVar8 = param_2[-1];
    uVar4 = uVar8;
    if (uVar8 <= uVar3) {
      uVar4 = uVar3;
    }
    if (uVar3 <= uVar8) {
      uVar8 = uVar3;
    }
    param_2[-1] = uVar4;
    uVar5 = param_1[3];
    uVar3 = param_1[1];
    uVar4 = param_1[2];
    if (uVar5 <= uVar8) {
      uVar4 = uVar5;
    }
    if (uVar8 <= uVar5) {
      uVar8 = uVar5;
    }
    param_1[2] = uVar4;
    param_1[3] = uVar8;
    uVar8 = param_2[-1];
    uVar4 = uVar3;
    if (uVar3 <= uVar8) {
      uVar4 = uVar8;
    }
    if (uVar8 <= uVar3) {
      uVar3 = uVar8;
    }
    param_2[-1] = uVar4;
    uVar2 = param_1[2];
    uVar5 = param_1[3];
    uVar4 = *param_1;
    uVar8 = uVar5;
    if (uVar4 <= uVar5) {
      uVar8 = uVar4;
    }
    if (uVar5 <= uVar4) {
      uVar5 = uVar4;
    }
    if (uVar2 <= uVar8) {
      uVar4 = uVar2;
    }
    if (uVar8 <= uVar2) {
      uVar8 = uVar2;
    }
    uVar2 = uVar5;
    if (uVar3 <= uVar5) {
      uVar2 = uVar3;
    }
    if (uVar5 <= uVar3) {
      uVar5 = uVar3;
    }
    if (uVar8 <= uVar2) {
      uVar3 = uVar8;
    }
    if (uVar2 <= uVar8) {
      uVar2 = uVar8;
    }
    *param_1 = uVar4;
    param_1[1] = uVar3;
    param_1[2] = uVar2;
    param_1[3] = uVar5;
    return;
  default:
    if (0x7b < (long)uVar11) {
      if (param_4 == 0) {
        if (param_1 == param_2) {
          return;
        }
        FUN_00517ad8(param_1,param_2,param_2,param_3);
        return;
      }
      param_4 = param_4 + -1;
      puVar14 = param_1 + (uVar9 >> 1);
      if (uVar11 < 0xf9d) {
        uVar4 = *puVar14;
        uVar8 = *param_1;
        uVar3 = *puVar16;
        if (uVar4 < uVar8) {
          if (uVar3 < uVar4) {
            iVar7 = 1;
            *param_1 = uVar3;
          }
          else {
            *param_1 = uVar4;
            *puVar14 = uVar8;
            if (uVar8 <= *puVar16) {
LAB_005164f0:
              iVar7 = 1;
              goto LAB_005164f4;
            }
            iVar7 = 2;
            *puVar14 = *puVar16;
          }
          *puVar16 = uVar8;
        }
        else if (uVar3 < uVar4) {
          *puVar14 = uVar3;
          *puVar16 = uVar4;
          uVar4 = *param_1;
          if (uVar4 <= *puVar14) goto LAB_005164f0;
          iVar7 = 2;
          *param_1 = *puVar14;
          *puVar14 = uVar4;
        }
        else {
          iVar7 = 0;
        }
      }
      else {
        iVar7 = FUN_00517e00(param_1,(long)param_1 + (uVar9 & 0xfffffffffffffffc),puVar14,
                             (long)puVar14 + (uVar9 & 0xfffffffffffffffc),puVar16,param_3);
      }
LAB_005164f4:
      uVar4 = *param_1;
      puVar10 = puVar16;
      if (*puVar14 <= uVar4) goto LAB_00516508;
      goto LAB_0051652c;
    }
    uVar3 = *param_1;
    uVar4 = param_1[1];
    puVar14 = param_1 + 2;
    uVar5 = *puVar14;
    uVar8 = uVar4;
    if (uVar4 <= uVar5) {
      uVar8 = uVar5;
    }
    if (uVar5 <= uVar4) {
      uVar4 = uVar5;
    }
    uVar5 = uVar8;
    if (uVar3 <= uVar8) {
      uVar5 = uVar3;
    }
    if (uVar8 <= uVar3) {
      uVar8 = uVar3;
    }
    if (uVar4 <= uVar5) {
      uVar3 = uVar4;
    }
    if (uVar5 <= uVar4) {
      uVar5 = uVar4;
    }
    *puVar14 = uVar8;
    *param_1 = uVar3;
    param_1[1] = uVar5;
    if (param_1 + 3 == param_2) {
      return;
    }
    lVar13 = 0xc;
    puVar16 = param_1 + 3;
    goto LAB_005168c0;
  }
  param_1[1] = uVar8;
  return;
LAB_005168c0:
  puVar10 = puVar16;
  uVar4 = *puVar10;
  uVar8 = *puVar14;
  lVar15 = lVar13;
  if (uVar4 < uVar8) {
    do {
      lVar6 = lVar15 + -4;
      *(uint *)((long)param_1 + lVar15) = uVar8;
      puVar14 = param_1;
      if (lVar6 == 0) goto LAB_005168a4;
      uVar8 = *(uint *)((long)param_1 + lVar15 + -8);
      lVar15 = lVar6;
    } while (uVar4 < uVar8);
    puVar14 = (uint *)((long)param_1 + lVar6);
LAB_005168a4:
    *puVar14 = uVar4;
  }
  lVar13 = lVar13 + 4;
  puVar16 = puVar10 + 1;
  puVar14 = puVar10;
  if (puVar10 + 1 == param_2) {
switchD_005166b8_caseD_0:
    return;
  }
  goto LAB_005168c0;
LAB_00516508:
  while (puVar10 = puVar10 + -1, puVar10 != param_1) {
    if (*puVar10 < *puVar14) goto code_r0x00516520;
  }
  puVar10 = param_1 + 1;
  puVar14 = puVar10;
  if (*puVar16 <= uVar4) {
    while( true ) {
      if (puVar14 == puVar16) {
        return;
      }
      uVar8 = *puVar14;
      if (uVar4 < uVar8) break;
      puVar14 = puVar14 + 1;
    }
    puVar10 = puVar14 + 1;
    *puVar14 = *puVar16;
    *puVar16 = uVar8;
  }
  puVar12 = puVar16;
  if (puVar10 == puVar16) {
    return;
  }
  while( true ) {
    do {
      puVar14 = puVar10;
      puVar10 = puVar14 + 1;
      uVar4 = *puVar14;
    } while (uVar4 <= *param_1);
    do {
      puVar12 = puVar12 + -1;
    } while (*param_1 < *puVar12);
    if (puVar12 <= puVar14) break;
    *puVar14 = *puVar12;
    *puVar12 = uVar4;
  }
  goto LAB_00516414;
code_r0x00516520:
  iVar7 = iVar7 + 1;
  *param_1 = *puVar10;
  *puVar10 = uVar4;
LAB_0051652c:
  puVar12 = param_1 + 1;
  puVar17 = puVar12;
  if (puVar12 < puVar10) {
    while( true ) {
      do {
        puVar12 = puVar17;
        puVar17 = puVar12 + 1;
        uVar4 = *puVar12;
      } while (uVar4 < *puVar14);
      do {
        puVar10 = puVar10 + -1;
      } while (*puVar14 <= *puVar10);
      if (puVar10 < puVar12) break;
      iVar7 = iVar7 + 1;
      puVar1 = puVar10;
      if (puVar12 != puVar14) {
        puVar1 = puVar14;
      }
      *puVar12 = *puVar10;
      *puVar10 = uVar4;
      puVar14 = puVar1;
    }
  }
  if (puVar12 != puVar14) {
    uVar4 = *puVar12;
    if (*puVar14 < uVar4) {
      iVar7 = iVar7 + 1;
      *puVar12 = *puVar14;
      *puVar14 = uVar4;
    }
  }
  if (iVar7 == 0) {
    uVar9 = FUN_00516ee4(param_1,puVar12,param_3);
    uVar11 = FUN_00516ee4(puVar12 + 1,param_2,param_3);
    if ((uVar11 & 1) != 0) goto LAB_00516698;
    puVar14 = puVar12 + 1;
    if ((uVar9 & 1) != 0) goto LAB_00516414;
  }
  if ((long)param_2 - (long)puVar12 <= (long)puVar12 - (long)param_1) {
    FUN_005163e4(puVar12 + 1,param_2,param_3,param_4);
    param_2 = puVar12;
    goto LAB_0051640c;
  }
  FUN_005163e4(param_1,puVar12,param_3,param_4);
  puVar14 = puVar12 + 1;
  goto LAB_00516414;
LAB_00516698:
  param_2 = puVar12;
  if ((uVar9 & 1) != 0) {
    return;
  }
  goto LAB_0051640c;
}


// ===== 00516944  FUN_00516944 =====

bool FUN_00516944(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  long lVar5;
  ushort *puVar6;
  ushort *puVar7;
  int iVar8;
  ushort uVar9;
  long lVar10;
  ushort *puVar11;
  long lVar12;
  
  switch((long)param_2 - (long)param_1 >> 1) {
  case 0:
  case 1:
    return true;
  case 2:
    uVar1 = *param_1;
    if (uVar1 <= param_2[-1]) {
      return true;
    }
    *param_1 = param_2[-1];
    param_2[-1] = uVar1;
    return true;
  case 3:
    uVar9 = param_1[1];
    uVar2 = param_2[-1];
    uVar1 = uVar9;
    if (uVar9 <= uVar2) {
      uVar1 = uVar2;
    }
    if (uVar2 <= uVar9) {
      uVar9 = uVar2;
    }
    param_2[-1] = uVar1;
    param_1[1] = uVar9;
    uVar2 = *param_1;
    uVar9 = param_2[-1];
    uVar1 = uVar9;
    if (uVar9 <= uVar2) {
      uVar1 = uVar2;
    }
    if (uVar2 <= uVar9) {
      uVar9 = uVar2;
    }
    param_2[-1] = uVar1;
    uVar2 = param_1[1];
    uVar1 = *param_1;
    if (uVar2 <= uVar9) {
      uVar1 = uVar2;
    }
    if (uVar9 <= uVar2) {
      uVar9 = uVar2;
    }
    *param_1 = uVar1;
    break;
  case 4:
    uVar9 = *param_1;
    uVar2 = param_1[2];
    uVar1 = uVar9;
    if (uVar9 <= uVar2) {
      uVar1 = uVar2;
    }
    if (uVar2 <= uVar9) {
      uVar9 = uVar2;
    }
    uVar2 = param_1[1];
    param_1[2] = uVar1;
    *param_1 = uVar9;
    uVar9 = param_2[-1];
    uVar1 = uVar2;
    if (uVar2 <= uVar9) {
      uVar1 = uVar9;
    }
    if (uVar9 <= uVar2) {
      uVar2 = uVar9;
    }
    param_2[-1] = uVar1;
    uVar9 = *param_1;
    uVar1 = uVar9;
    if (uVar9 <= uVar2) {
      uVar1 = uVar2;
    }
    if (uVar2 <= uVar9) {
      uVar9 = uVar2;
    }
    param_1[1] = uVar1;
    uVar2 = param_1[2];
    *param_1 = uVar9;
    uVar9 = param_2[-1];
    uVar1 = uVar2;
    if (uVar2 <= uVar9) {
      uVar1 = uVar9;
    }
    if (uVar9 <= uVar2) {
      uVar2 = uVar9;
    }
    param_2[-1] = uVar1;
    uVar9 = param_1[1];
    uVar1 = uVar9;
    if (uVar9 <= uVar2) {
      uVar1 = uVar2;
    }
    if (uVar2 <= uVar9) {
      uVar9 = uVar2;
    }
    param_1[2] = uVar1;
    break;
  case 5:
    uVar9 = *param_1;
    uVar2 = param_1[1];
    uVar1 = uVar9;
    if (uVar9 <= uVar2) {
      uVar1 = uVar2;
    }
    if (uVar2 <= uVar9) {
      uVar9 = uVar2;
    }
    uVar2 = param_1[3];
    param_1[1] = uVar1;
    *param_1 = uVar9;
    uVar9 = param_2[-1];
    uVar1 = uVar2;
    if (uVar2 <= uVar9) {
      uVar1 = uVar9;
    }
    if (uVar9 <= uVar2) {
      uVar2 = uVar9;
    }
    param_2[-1] = uVar1;
    param_1[3] = uVar2;
    uVar2 = param_1[2];
    uVar9 = param_2[-1];
    uVar1 = uVar9;
    if (uVar9 <= uVar2) {
      uVar1 = uVar2;
    }
    if (uVar2 <= uVar9) {
      uVar9 = uVar2;
    }
    param_2[-1] = uVar1;
    uVar2 = param_1[3];
    uVar1 = param_1[2];
    if (uVar2 <= uVar9) {
      uVar1 = uVar2;
    }
    if (uVar9 <= uVar2) {
      uVar9 = uVar2;
    }
    param_1[2] = uVar1;
    uVar2 = param_1[1];
    param_1[3] = uVar9;
    uVar9 = param_2[-1];
    uVar1 = uVar2;
    if (uVar2 <= uVar9) {
      uVar1 = uVar9;
    }
    if (uVar9 <= uVar2) {
      uVar2 = uVar9;
    }
    param_2[-1] = uVar1;
    uVar4 = param_1[3];
    uVar1 = *param_1;
    uVar3 = param_1[2];
    uVar9 = uVar4;
    if (uVar1 <= uVar4) {
      uVar9 = uVar1;
    }
    if (uVar4 <= uVar1) {
      uVar4 = uVar1;
    }
    if (uVar3 <= uVar9) {
      uVar1 = uVar3;
    }
    if (uVar9 <= uVar3) {
      uVar9 = uVar3;
    }
    uVar3 = uVar4;
    if (uVar2 <= uVar4) {
      uVar3 = uVar2;
    }
    if (uVar4 <= uVar2) {
      uVar4 = uVar2;
    }
    *param_1 = uVar1;
    if (uVar9 <= uVar3) {
      uVar2 = uVar9;
    }
    if (uVar3 <= uVar9) {
      uVar3 = uVar9;
    }
    param_1[3] = uVar4;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    return true;
  default:
    uVar1 = param_1[1];
    uVar2 = *param_1;
    puVar11 = param_1 + 2;
    uVar4 = *puVar11;
    uVar9 = uVar1;
    if (uVar1 <= uVar4) {
      uVar9 = uVar4;
    }
    if (uVar4 <= uVar1) {
      uVar1 = uVar4;
    }
    uVar4 = uVar9;
    if (uVar2 <= uVar9) {
      uVar4 = uVar2;
    }
    if (uVar9 <= uVar2) {
      uVar9 = uVar2;
    }
    if (uVar1 <= uVar4) {
      uVar2 = uVar1;
    }
    if (uVar4 <= uVar1) {
      uVar4 = uVar1;
    }
    *puVar11 = uVar9;
    *param_1 = uVar2;
    param_1[1] = uVar4;
    if (param_1 + 3 != param_2) {
      iVar8 = 0;
      lVar10 = 6;
      puVar6 = param_1 + 3;
      do {
        puVar7 = puVar6;
        uVar1 = *puVar7;
        uVar9 = *puVar11;
        lVar12 = lVar10;
        if (uVar1 < uVar9) {
          do {
            lVar5 = lVar12 + -2;
            *(ushort *)((long)param_1 + lVar12) = uVar9;
            puVar11 = param_1;
            if (lVar5 == 0) goto LAB_005169f4;
            uVar9 = *(ushort *)((long)param_1 + lVar12 + -4);
            lVar12 = lVar5;
          } while (uVar1 < uVar9);
          puVar11 = (ushort *)((long)param_1 + lVar5);
LAB_005169f4:
          iVar8 = iVar8 + 1;
          *puVar11 = uVar1;
          if (iVar8 == 8) {
            return puVar7 + 1 == param_2;
          }
        }
        lVar10 = lVar10 + 2;
        puVar6 = puVar7 + 1;
        puVar11 = puVar7;
      } while (puVar7 + 1 != param_2);
    }
    return true;
  }
  param_1[1] = uVar9;
  return true;
}


// ===== 00516c2c  FUN_00516c2c =====

bool FUN_00516c2c(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  int *piVar10;
  long lVar11;
  
  switch((long)param_2 - (long)param_1 >> 2) {
  case 0:
  case 1:
    return true;
  case 2:
    iVar7 = *param_1;
    if (iVar7 <= param_2[-1]) {
      return true;
    }
    *param_1 = param_2[-1];
    param_2[-1] = iVar7;
    return true;
  case 3:
    iVar2 = param_1[1];
    iVar9 = param_2[-1];
    iVar7 = iVar2;
    if (iVar2 <= iVar9) {
      iVar7 = iVar9;
    }
    if (iVar9 <= iVar2) {
      iVar2 = iVar9;
    }
    param_2[-1] = iVar7;
    param_1[1] = iVar2;
    iVar9 = *param_1;
    iVar2 = param_2[-1];
    iVar7 = iVar2;
    if (iVar2 <= iVar9) {
      iVar7 = iVar9;
    }
    if (iVar9 <= iVar2) {
      iVar2 = iVar9;
    }
    param_2[-1] = iVar7;
    iVar9 = param_1[1];
    iVar7 = *param_1;
    if (iVar9 <= iVar2) {
      iVar7 = iVar9;
    }
    if (iVar2 <= iVar9) {
      iVar2 = iVar9;
    }
    *param_1 = iVar7;
    param_1[1] = iVar2;
    return true;
  case 4:
    iVar9 = param_1[1];
    iVar3 = param_1[2];
    iVar2 = *param_1;
    iVar7 = iVar2;
    if (iVar2 <= iVar3) {
      iVar7 = iVar3;
    }
    if (iVar3 <= iVar2) {
      iVar2 = iVar3;
    }
    param_1[2] = iVar7;
    *param_1 = iVar2;
    iVar2 = param_2[-1];
    iVar7 = iVar9;
    if (iVar9 <= iVar2) {
      iVar7 = iVar2;
    }
    if (iVar2 <= iVar9) {
      iVar9 = iVar2;
    }
    param_2[-1] = iVar7;
    iVar2 = *param_1;
    iVar7 = iVar2;
    if (iVar2 <= iVar9) {
      iVar7 = iVar9;
    }
    if (iVar9 <= iVar2) {
      iVar2 = iVar9;
    }
    iVar9 = param_1[2];
    *param_1 = iVar2;
    param_1[1] = iVar7;
    iVar2 = param_2[-1];
    iVar7 = iVar9;
    if (iVar9 <= iVar2) {
      iVar7 = iVar2;
    }
    if (iVar2 <= iVar9) {
      iVar9 = iVar2;
    }
    param_2[-1] = iVar7;
    iVar2 = param_1[1];
    iVar7 = iVar2;
    if (iVar2 <= iVar9) {
      iVar7 = iVar9;
    }
    if (iVar9 <= iVar2) {
      iVar2 = iVar9;
    }
    param_1[1] = iVar2;
    param_1[2] = iVar7;
    return true;
  case 5:
    iVar2 = *param_1;
    iVar9 = param_1[1];
    iVar7 = iVar2;
    if (iVar2 <= iVar9) {
      iVar7 = iVar9;
    }
    if (iVar9 <= iVar2) {
      iVar2 = iVar9;
    }
    iVar9 = param_1[3];
    *param_1 = iVar2;
    param_1[1] = iVar7;
    iVar2 = param_2[-1];
    iVar7 = iVar9;
    if (iVar9 <= iVar2) {
      iVar7 = iVar2;
    }
    if (iVar2 <= iVar9) {
      iVar9 = iVar2;
    }
    param_2[-1] = iVar7;
    param_1[3] = iVar9;
    iVar9 = param_1[2];
    iVar2 = param_2[-1];
    iVar7 = iVar2;
    if (iVar2 <= iVar9) {
      iVar7 = iVar9;
    }
    if (iVar9 <= iVar2) {
      iVar2 = iVar9;
    }
    param_2[-1] = iVar7;
    iVar3 = param_1[3];
    iVar9 = param_1[1];
    iVar7 = param_1[2];
    if (iVar3 <= iVar2) {
      iVar7 = iVar3;
    }
    if (iVar2 <= iVar3) {
      iVar2 = iVar3;
    }
    param_1[2] = iVar7;
    param_1[3] = iVar2;
    iVar2 = param_2[-1];
    iVar7 = iVar9;
    if (iVar9 <= iVar2) {
      iVar7 = iVar2;
    }
    if (iVar2 <= iVar9) {
      iVar9 = iVar2;
    }
    param_2[-1] = iVar7;
    iVar1 = param_1[2];
    iVar3 = param_1[3];
    iVar7 = *param_1;
    iVar2 = iVar3;
    if (iVar7 <= iVar3) {
      iVar2 = iVar7;
    }
    if (iVar3 <= iVar7) {
      iVar3 = iVar7;
    }
    if (iVar1 <= iVar2) {
      iVar7 = iVar1;
    }
    if (iVar2 <= iVar1) {
      iVar2 = iVar1;
    }
    iVar1 = iVar3;
    if (iVar9 <= iVar3) {
      iVar1 = iVar9;
    }
    if (iVar3 <= iVar9) {
      iVar3 = iVar9;
    }
    if (iVar2 <= iVar1) {
      iVar9 = iVar2;
    }
    if (iVar1 <= iVar2) {
      iVar1 = iVar2;
    }
    *param_1 = iVar7;
    param_1[1] = iVar9;
    param_1[2] = iVar1;
    param_1[3] = iVar3;
    return true;
  }
  iVar9 = *param_1;
  iVar7 = param_1[1];
  piVar10 = param_1 + 2;
  iVar3 = *piVar10;
  iVar2 = iVar7;
  if (iVar7 <= iVar3) {
    iVar2 = iVar3;
  }
  if (iVar3 <= iVar7) {
    iVar7 = iVar3;
  }
  iVar3 = iVar2;
  if (iVar9 <= iVar2) {
    iVar3 = iVar9;
  }
  if (iVar2 <= iVar9) {
    iVar2 = iVar9;
  }
  if (iVar7 <= iVar3) {
    iVar9 = iVar7;
  }
  if (iVar3 <= iVar7) {
    iVar3 = iVar7;
  }
  *piVar10 = iVar2;
  *param_1 = iVar9;
  param_1[1] = iVar3;
  if (param_1 + 3 != param_2) {
    iVar7 = 0;
    lVar8 = 0xc;
    piVar5 = param_1 + 3;
    do {
      piVar6 = piVar5;
      iVar2 = *piVar6;
      iVar9 = *piVar10;
      lVar11 = lVar8;
      if (iVar2 < iVar9) {
        do {
          lVar4 = lVar11 + -4;
          *(int *)((long)param_1 + lVar11) = iVar9;
          piVar10 = param_1;
          if (lVar4 == 0) goto LAB_00516cb4;
          iVar9 = *(int *)((long)param_1 + lVar11 + -8);
          lVar11 = lVar4;
        } while (iVar2 < iVar9);
        piVar10 = (int *)((long)param_1 + lVar4);
LAB_00516cb4:
        iVar7 = iVar7 + 1;
        *piVar10 = iVar2;
        if (iVar7 == 8) {
          return piVar6 + 1 == param_2;
        }
      }
      lVar8 = lVar8 + 4;
      piVar5 = piVar6 + 1;
      piVar10 = piVar6;
    } while (piVar6 + 1 != param_2);
  }
  return true;
}


// ===== 00516ee4  FUN_00516ee4 =====

bool FUN_00516ee4(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  uint *puVar11;
  long lVar12;
  
  switch((long)param_2 - (long)param_1 >> 2) {
  case 0:
  case 1:
    return true;
  case 2:
    uVar3 = *param_1;
    if (uVar3 <= param_2[-1]) {
      return true;
    }
    *param_1 = param_2[-1];
    param_2[-1] = uVar3;
    return true;
  case 3:
    uVar10 = param_1[1];
    uVar1 = param_2[-1];
    uVar3 = uVar10;
    if (uVar10 <= uVar1) {
      uVar3 = uVar1;
    }
    if (uVar1 <= uVar10) {
      uVar10 = uVar1;
    }
    param_2[-1] = uVar3;
    param_1[1] = uVar10;
    uVar1 = *param_1;
    uVar10 = param_2[-1];
    uVar3 = uVar10;
    if (uVar10 <= uVar1) {
      uVar3 = uVar1;
    }
    if (uVar1 <= uVar10) {
      uVar10 = uVar1;
    }
    param_2[-1] = uVar3;
    uVar1 = param_1[1];
    uVar3 = *param_1;
    if (uVar1 <= uVar10) {
      uVar3 = uVar1;
    }
    if (uVar10 <= uVar1) {
      uVar10 = uVar1;
    }
    *param_1 = uVar3;
    param_1[1] = uVar10;
    return true;
  case 4:
    uVar1 = param_1[1];
    uVar4 = param_1[2];
    uVar10 = *param_1;
    uVar3 = uVar10;
    if (uVar10 <= uVar4) {
      uVar3 = uVar4;
    }
    if (uVar4 <= uVar10) {
      uVar10 = uVar4;
    }
    param_1[2] = uVar3;
    *param_1 = uVar10;
    uVar10 = param_2[-1];
    uVar3 = uVar1;
    if (uVar1 <= uVar10) {
      uVar3 = uVar10;
    }
    if (uVar10 <= uVar1) {
      uVar1 = uVar10;
    }
    param_2[-1] = uVar3;
    uVar10 = *param_1;
    uVar3 = uVar10;
    if (uVar10 <= uVar1) {
      uVar3 = uVar1;
    }
    if (uVar1 <= uVar10) {
      uVar10 = uVar1;
    }
    uVar1 = param_1[2];
    *param_1 = uVar10;
    param_1[1] = uVar3;
    uVar10 = param_2[-1];
    uVar3 = uVar1;
    if (uVar1 <= uVar10) {
      uVar3 = uVar10;
    }
    if (uVar10 <= uVar1) {
      uVar1 = uVar10;
    }
    param_2[-1] = uVar3;
    uVar10 = param_1[1];
    uVar3 = uVar10;
    if (uVar10 <= uVar1) {
      uVar3 = uVar1;
    }
    if (uVar1 <= uVar10) {
      uVar10 = uVar1;
    }
    param_1[1] = uVar10;
    param_1[2] = uVar3;
    return true;
  case 5:
    uVar10 = *param_1;
    uVar1 = param_1[1];
    uVar3 = uVar10;
    if (uVar10 <= uVar1) {
      uVar3 = uVar1;
    }
    if (uVar1 <= uVar10) {
      uVar10 = uVar1;
    }
    uVar1 = param_1[3];
    *param_1 = uVar10;
    param_1[1] = uVar3;
    uVar10 = param_2[-1];
    uVar3 = uVar1;
    if (uVar1 <= uVar10) {
      uVar3 = uVar10;
    }
    if (uVar10 <= uVar1) {
      uVar1 = uVar10;
    }
    param_2[-1] = uVar3;
    param_1[3] = uVar1;
    uVar1 = param_1[2];
    uVar10 = param_2[-1];
    uVar3 = uVar10;
    if (uVar10 <= uVar1) {
      uVar3 = uVar1;
    }
    if (uVar1 <= uVar10) {
      uVar10 = uVar1;
    }
    param_2[-1] = uVar3;
    uVar4 = param_1[3];
    uVar1 = param_1[1];
    uVar3 = param_1[2];
    if (uVar4 <= uVar10) {
      uVar3 = uVar4;
    }
    if (uVar10 <= uVar4) {
      uVar10 = uVar4;
    }
    param_1[2] = uVar3;
    param_1[3] = uVar10;
    uVar10 = param_2[-1];
    uVar3 = uVar1;
    if (uVar1 <= uVar10) {
      uVar3 = uVar10;
    }
    if (uVar10 <= uVar1) {
      uVar1 = uVar10;
    }
    param_2[-1] = uVar3;
    uVar2 = param_1[2];
    uVar4 = param_1[3];
    uVar3 = *param_1;
    uVar10 = uVar4;
    if (uVar3 <= uVar4) {
      uVar10 = uVar3;
    }
    if (uVar4 <= uVar3) {
      uVar4 = uVar3;
    }
    if (uVar2 <= uVar10) {
      uVar3 = uVar2;
    }
    if (uVar10 <= uVar2) {
      uVar10 = uVar2;
    }
    uVar2 = uVar4;
    if (uVar1 <= uVar4) {
      uVar2 = uVar1;
    }
    if (uVar4 <= uVar1) {
      uVar4 = uVar1;
    }
    if (uVar10 <= uVar2) {
      uVar1 = uVar10;
    }
    if (uVar2 <= uVar10) {
      uVar2 = uVar10;
    }
    *param_1 = uVar3;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar4;
    return true;
  }
  uVar1 = *param_1;
  uVar3 = param_1[1];
  puVar11 = param_1 + 2;
  uVar4 = *puVar11;
  uVar10 = uVar3;
  if (uVar3 <= uVar4) {
    uVar10 = uVar4;
  }
  if (uVar4 <= uVar3) {
    uVar3 = uVar4;
  }
  uVar4 = uVar10;
  if (uVar1 <= uVar10) {
    uVar4 = uVar1;
  }
  if (uVar10 <= uVar1) {
    uVar10 = uVar1;
  }
  if (uVar3 <= uVar4) {
    uVar1 = uVar3;
  }
  if (uVar4 <= uVar3) {
    uVar4 = uVar3;
  }
  *puVar11 = uVar10;
  *param_1 = uVar1;
  param_1[1] = uVar4;
  if (param_1 + 3 != param_2) {
    iVar8 = 0;
    lVar9 = 0xc;
    puVar6 = param_1 + 3;
    do {
      puVar7 = puVar6;
      uVar3 = *puVar7;
      uVar10 = *puVar11;
      lVar12 = lVar9;
      if (uVar3 < uVar10) {
        do {
          lVar5 = lVar12 + -4;
          *(uint *)((long)param_1 + lVar12) = uVar10;
          puVar11 = param_1;
          if (lVar5 == 0) goto LAB_00516f6c;
          uVar10 = *(uint *)((long)param_1 + lVar12 + -8);
          lVar12 = lVar5;
        } while (uVar3 < uVar10);
        puVar11 = (uint *)((long)param_1 + lVar5);
LAB_00516f6c:
        iVar8 = iVar8 + 1;
        *puVar11 = uVar3;
        if (iVar8 == 8) {
          return puVar7 + 1 == param_2;
        }
      }
      lVar9 = lVar9 + 4;
      puVar6 = puVar7 + 1;
      puVar11 = puVar7;
    } while (puVar7 + 1 != param_2);
  }
  return true;
}


// ===== 0051719c  FUN_0051719c =====

ushort * FUN_0051719c(ushort *param_1,ushort *param_2,ushort *param_3)

{
  ushort *puVar1;
  ulong uVar2;
  ushort uVar3;
  bool bVar4;
  ushort *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ushort *puVar9;
  ulong uVar10;
  ushort *puVar11;
  ushort *puVar12;
  ulong uVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  ushort *puVar17;
  
  if (param_1 != param_2) {
    uVar7 = (long)param_2 - (long)param_1;
    lVar8 = (long)uVar7 >> 1;
    if (2 < (long)uVar7) {
      uVar10 = lVar8 - 2U >> 1;
      uVar6 = uVar10;
      do {
        if ((uVar7 != 3) && ((long)uVar6 <= (long)uVar10)) {
          uVar2 = uVar6 << 1 | 1;
          uVar13 = uVar6 * 2 + 2;
          puVar12 = param_1 + uVar2;
          if ((long)uVar13 < lVar8) {
            uVar16 = *puVar12;
            uVar14 = puVar12[1];
            uVar15 = uVar16;
            if (uVar16 <= uVar14) {
              uVar15 = uVar14;
            }
            puVar11 = puVar12 + 1;
            if (uVar14 <= uVar16) {
              puVar11 = puVar12;
              uVar13 = uVar2;
            }
          }
          else {
            uVar15 = *puVar12;
            puVar11 = puVar12;
            uVar13 = uVar2;
          }
          uVar16 = param_1[uVar6];
          puVar12 = param_1 + uVar6;
          if (uVar16 <= uVar15) {
            do {
              while( true ) {
                puVar9 = puVar11;
                *puVar12 = uVar15;
                if ((long)uVar10 < (long)uVar13) goto LAB_005171c4;
                uVar2 = uVar13 << 1 | 1;
                uVar13 = uVar13 * 2 + 2;
                puVar5 = param_1 + uVar2;
                puVar12 = puVar9;
                if ((long)uVar13 < lVar8) break;
                uVar15 = *puVar5;
                puVar11 = puVar5;
                uVar13 = uVar2;
                if (uVar15 < uVar16) goto LAB_005171c4;
              }
              uVar14 = *puVar5;
              uVar3 = puVar5[1];
              uVar15 = uVar14;
              if (uVar14 <= uVar3) {
                uVar15 = uVar3;
              }
              puVar11 = puVar5 + 1;
              if (uVar3 <= uVar14) {
                uVar13 = uVar2;
                puVar11 = puVar5;
              }
            } while (uVar16 <= uVar15);
LAB_005171c4:
            *puVar9 = uVar16;
          }
        }
        bVar4 = 0 < (long)uVar6;
        uVar6 = uVar6 - 1;
      } while (bVar4);
    }
    puVar12 = param_2;
    if (param_2 != param_3) {
      puVar11 = param_1 + 1;
      puVar9 = param_2;
      do {
        uVar15 = *puVar9;
        if (uVar15 < *param_1) {
          *puVar9 = *param_1;
          *param_1 = uVar15;
          if (3 < (long)uVar7) {
            uVar16 = *puVar11;
            if (uVar7 == 4) {
              uVar6 = 1;
              puVar12 = puVar11;
            }
            else {
              uVar14 = param_1[2];
              bVar4 = uVar14 <= uVar16;
              if (uVar16 <= uVar14) {
                uVar16 = uVar14;
              }
              puVar12 = param_1 + 2;
              if (bVar4) {
                puVar12 = puVar11;
              }
              uVar6 = 1;
              if (!bVar4) {
                uVar6 = 2;
              }
            }
            puVar5 = param_1;
            if (uVar15 <= uVar16) {
              do {
                while( true ) {
                  puVar17 = puVar12;
                  *puVar5 = uVar16;
                  if ((long)(lVar8 - 2U >> 1) < (long)uVar6) goto LAB_005172cc;
                  uVar10 = uVar6 << 1 | 1;
                  uVar6 = uVar6 * 2 + 2;
                  puVar1 = param_1 + uVar10;
                  puVar5 = puVar17;
                  if ((long)uVar6 < lVar8) break;
                  uVar16 = *puVar1;
                  uVar6 = uVar10;
                  puVar12 = puVar1;
                  if (uVar16 < uVar15) goto LAB_005172cc;
                }
                uVar14 = *puVar1;
                uVar3 = puVar1[1];
                uVar16 = uVar14;
                if (uVar14 <= uVar3) {
                  uVar16 = uVar3;
                }
                puVar12 = puVar1 + 1;
                if (uVar3 <= uVar14) {
                  uVar6 = uVar10;
                  puVar12 = puVar1;
                }
              } while (uVar15 <= uVar16);
LAB_005172cc:
              *puVar17 = uVar15;
            }
          }
        }
        puVar9 = puVar9 + 1;
        puVar12 = param_3;
      } while (puVar9 != param_3);
    }
    param_3 = puVar12;
    if (2 < (long)uVar7) {
      uVar7 = uVar7 >> 1;
      do {
        uVar6 = 0;
        uVar15 = *param_1;
        puVar12 = param_1;
        do {
          uVar10 = uVar6 * 2 + 2;
          uVar13 = uVar6 << 1 | 1;
          puVar11 = puVar12 + uVar6 + 1;
          if ((long)uVar10 < (long)uVar7) {
            uVar16 = *puVar11;
            uVar3 = puVar11[1];
            uVar14 = uVar16;
            if (uVar16 <= uVar3) {
              uVar14 = uVar3;
            }
            puVar9 = puVar11 + 1;
            uVar6 = uVar10;
            if (uVar3 <= uVar16) {
              puVar9 = puVar11;
              uVar6 = uVar13;
            }
          }
          else {
            uVar14 = *puVar11;
            puVar9 = puVar11;
            uVar6 = uVar13;
          }
          *puVar12 = uVar14;
          puVar12 = puVar9;
        } while ((long)uVar6 <= (long)(uVar7 - 2 >> 1));
        param_2 = param_2 + -1;
        if (puVar9 == param_2) {
          *puVar9 = uVar15;
        }
        else {
          uVar6 = (long)puVar9 + (2 - (long)param_1);
          *puVar9 = *param_2;
          *param_2 = uVar15;
          if (2 < (long)uVar6) {
            uVar15 = *puVar9;
            uVar6 = (uVar6 >> 1) - 2 >> 1;
            uVar16 = param_1[uVar6];
            puVar12 = param_1 + uVar6;
            if (uVar16 < uVar15) {
              do {
                puVar11 = puVar12;
                *puVar9 = uVar16;
                if (uVar6 == 0) break;
                uVar6 = uVar6 - 1 >> 1;
                uVar16 = param_1[uVar6];
                puVar9 = puVar11;
                puVar12 = param_1 + uVar6;
              } while (uVar16 < uVar15);
              *puVar11 = uVar15;
            }
          }
        }
        bVar4 = 2 < (long)uVar7;
        uVar7 = uVar7 - 1;
      } while (bVar4);
    }
  }
  return param_3;
}


// ===== 005174c0  FUN_005174c0 =====

int FUN_005174c0(ushort *param_1,ushort *param_2,ushort *param_3,ushort *param_4,ushort *param_5)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  ushort uVar4;
  
  uVar1 = *param_2;
  uVar2 = *param_1;
  uVar4 = *param_3;
  if (uVar1 < uVar2) {
    if (uVar4 < uVar1) {
      *param_1 = uVar4;
      iVar3 = 1;
    }
    else {
      *param_1 = uVar1;
      *param_2 = uVar2;
      uVar4 = *param_3;
      if (uVar2 <= uVar4) {
        iVar3 = 1;
        goto LAB_0051755c;
      }
      iVar3 = 2;
      *param_2 = uVar4;
    }
    *param_3 = uVar2;
    uVar4 = uVar2;
  }
  else if (uVar4 < uVar1) {
    *param_2 = uVar4;
    *param_3 = uVar1;
    uVar2 = *param_1;
    if (*param_2 < uVar2) {
      *param_1 = *param_2;
      iVar3 = 2;
      *param_2 = uVar2;
      uVar4 = *param_3;
    }
    else {
      iVar3 = 1;
      uVar4 = uVar1;
    }
  }
  else {
    iVar3 = 0;
  }
LAB_0051755c:
  if (*param_4 < uVar4) {
    *param_3 = *param_4;
    *param_4 = uVar4;
    uVar1 = *param_2;
    if (*param_3 < uVar1) {
      *param_2 = *param_3;
      *param_3 = uVar1;
      uVar1 = *param_1;
      if (*param_2 < uVar1) {
        iVar3 = iVar3 + 3;
        *param_1 = *param_2;
        *param_2 = uVar1;
      }
      else {
        iVar3 = iVar3 + 2;
      }
    }
    else {
      iVar3 = iVar3 + 1;
    }
  }
  uVar1 = *param_4;
  if (*param_5 < uVar1) {
    *param_4 = *param_5;
    *param_5 = uVar1;
    uVar1 = *param_3;
    if (uVar1 <= *param_4) {
      return iVar3 + 1;
    }
    *param_3 = *param_4;
    *param_4 = uVar1;
    uVar1 = *param_2;
    if (uVar1 <= *param_3) {
      return iVar3 + 2;
    }
    *param_2 = *param_3;
    *param_3 = uVar1;
    uVar1 = *param_1;
    if (uVar1 <= *param_2) {
      return iVar3 + 3;
    }
    iVar3 = iVar3 + 4;
    *param_1 = *param_2;
    *param_2 = uVar1;
  }
  return iVar3;
}


// ===== 00517638  FUN_00517638 =====

int * FUN_00517638(int *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  int *piVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  ulong uVar11;
  int *piVar12;
  int *piVar13;
  ulong uVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  
  if (param_1 != param_2) {
    uVar8 = (long)param_2 - (long)param_1;
    lVar9 = (long)uVar8 >> 2;
    if (4 < (long)uVar8) {
      uVar11 = lVar9 - 2U >> 1;
      uVar7 = uVar11;
      do {
        if ((7 < uVar8) && ((long)uVar7 <= (long)uVar11)) {
          uVar3 = uVar7 << 1 | 1;
          uVar14 = uVar7 * 2 + 2;
          piVar13 = param_1 + uVar3;
          if ((long)uVar14 < lVar9) {
            iVar16 = *piVar13;
            iVar4 = piVar13[1];
            iVar15 = iVar16;
            if (iVar16 <= iVar4) {
              iVar15 = iVar4;
            }
            piVar12 = piVar13 + 1;
            if (iVar4 <= iVar16) {
              piVar12 = piVar13;
              uVar14 = uVar3;
            }
          }
          else {
            iVar15 = *piVar13;
            piVar12 = piVar13;
            uVar14 = uVar3;
          }
          iVar16 = param_1[uVar7];
          piVar13 = param_1 + uVar7;
          if (iVar16 <= iVar15) {
            do {
              while( true ) {
                piVar10 = piVar12;
                *piVar13 = iVar15;
                if ((long)uVar11 < (long)uVar14) goto LAB_00517660;
                uVar3 = uVar14 << 1 | 1;
                uVar14 = uVar14 * 2 + 2;
                piVar6 = param_1 + uVar3;
                piVar13 = piVar10;
                if ((long)uVar14 < lVar9) break;
                iVar15 = *piVar6;
                piVar12 = piVar6;
                uVar14 = uVar3;
                if (iVar15 < iVar16) goto LAB_00517660;
              }
              iVar4 = *piVar6;
              iVar5 = piVar6[1];
              iVar15 = iVar4;
              if (iVar4 <= iVar5) {
                iVar15 = iVar5;
              }
              piVar12 = piVar6 + 1;
              if (iVar5 <= iVar4) {
                uVar14 = uVar3;
                piVar12 = piVar6;
              }
            } while (iVar16 <= iVar15);
LAB_00517660:
            *piVar10 = iVar16;
          }
        }
        bVar1 = 0 < (long)uVar7;
        uVar7 = uVar7 - 1;
      } while (bVar1);
    }
    piVar13 = param_2;
    if (param_2 != param_3) {
      piVar12 = param_1 + 1;
      piVar10 = param_2;
      do {
        iVar15 = *piVar10;
        if (iVar15 < *param_1) {
          *piVar10 = *param_1;
          *param_1 = iVar15;
          if (7 < (long)uVar8) {
            iVar4 = *piVar12;
            iVar16 = iVar4;
            if (uVar8 == 8) {
              uVar7 = 1;
              piVar13 = piVar12;
            }
            else {
              iVar5 = param_1[2];
              if (iVar4 <= iVar5) {
                iVar16 = iVar5;
              }
              piVar13 = param_1 + 2;
              if (iVar5 <= iVar4) {
                piVar13 = piVar12;
              }
              uVar7 = 1;
              if (iVar4 < iVar5) {
                uVar7 = 2;
              }
            }
            piVar6 = param_1;
            if (iVar15 <= iVar16) {
              do {
                while( true ) {
                  piVar17 = piVar13;
                  *piVar6 = iVar16;
                  if ((long)(lVar9 - 2U >> 1) < (long)uVar7) goto LAB_00517768;
                  uVar11 = uVar7 << 1 | 1;
                  uVar7 = uVar7 * 2 + 2;
                  piVar2 = param_1 + uVar11;
                  piVar6 = piVar17;
                  if ((long)uVar7 < lVar9) break;
                  iVar16 = *piVar2;
                  uVar7 = uVar11;
                  piVar13 = piVar2;
                  if (iVar16 < iVar15) goto LAB_00517768;
                }
                iVar4 = *piVar2;
                iVar5 = piVar2[1];
                iVar16 = iVar4;
                if (iVar4 <= iVar5) {
                  iVar16 = iVar5;
                }
                piVar13 = piVar2 + 1;
                if (iVar5 <= iVar4) {
                  uVar7 = uVar11;
                  piVar13 = piVar2;
                }
              } while (iVar15 <= iVar16);
LAB_00517768:
              *piVar17 = iVar15;
            }
          }
        }
        piVar10 = piVar10 + 1;
        piVar13 = param_3;
      } while (piVar10 != param_3);
    }
    param_3 = piVar13;
    if (4 < (long)uVar8) {
      uVar8 = uVar8 >> 2;
      do {
        uVar7 = 0;
        iVar15 = *param_1;
        piVar13 = param_1;
        do {
          piVar12 = piVar13 + uVar7 + 1;
          uVar14 = uVar7 << 1 | 1;
          uVar11 = uVar7 * 2 + 2;
          if ((long)uVar11 < (long)uVar8) {
            iVar4 = *piVar12;
            iVar5 = piVar13[uVar7 + 2];
            iVar16 = iVar4;
            if (iVar4 <= iVar5) {
              iVar16 = iVar5;
            }
            piVar10 = piVar13 + uVar7 + 2;
            uVar7 = uVar11;
            if (iVar5 <= iVar4) {
              piVar10 = piVar12;
              uVar7 = uVar14;
            }
          }
          else {
            iVar16 = *piVar12;
            piVar10 = piVar12;
            uVar7 = uVar14;
          }
          *piVar13 = iVar16;
          piVar13 = piVar10;
        } while ((long)uVar7 <= (long)(uVar8 - 2 >> 1));
        param_2 = param_2 + -1;
        if (piVar10 == param_2) {
          *piVar10 = iVar15;
        }
        else {
          uVar7 = (long)piVar10 + (4 - (long)param_1);
          *piVar10 = *param_2;
          *param_2 = iVar15;
          if (4 < (long)uVar7) {
            iVar15 = *piVar10;
            uVar7 = (uVar7 >> 2) - 2 >> 1;
            iVar16 = param_1[uVar7];
            piVar13 = param_1 + uVar7;
            if (iVar16 < iVar15) {
              do {
                piVar12 = piVar13;
                *piVar10 = iVar16;
                if (uVar7 == 0) break;
                uVar7 = uVar7 - 1 >> 1;
                iVar16 = param_1[uVar7];
                piVar10 = piVar12;
                piVar13 = param_1 + uVar7;
              } while (iVar16 < iVar15);
              *piVar12 = iVar15;
            }
          }
        }
        bVar1 = 2 < (long)uVar8;
        uVar8 = uVar8 - 1;
      } while (bVar1);
    }
  }
  return param_3;
}


// ===== 00517960  FUN_00517960 =====

int FUN_00517960(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *param_2;
  iVar2 = *param_1;
  iVar4 = *param_3;
  if (iVar1 < iVar2) {
    if (iVar4 < iVar1) {
      *param_1 = iVar4;
      iVar3 = 1;
    }
    else {
      *param_1 = iVar1;
      *param_2 = iVar2;
      iVar4 = *param_3;
      if (iVar2 <= iVar4) {
        iVar3 = 1;
        goto LAB_005179fc;
      }
      iVar3 = 2;
      *param_2 = iVar4;
    }
    *param_3 = iVar2;
    iVar4 = iVar2;
  }
  else if (iVar4 < iVar1) {
    *param_2 = iVar4;
    *param_3 = iVar1;
    iVar2 = *param_1;
    if (*param_2 < iVar2) {
      *param_1 = *param_2;
      iVar3 = 2;
      *param_2 = iVar2;
      iVar4 = *param_3;
    }
    else {
      iVar3 = 1;
      iVar4 = iVar1;
    }
  }
  else {
    iVar3 = 0;
  }
LAB_005179fc:
  if (*param_4 < iVar4) {
    *param_3 = *param_4;
    *param_4 = iVar4;
    iVar1 = *param_2;
    if (*param_3 < iVar1) {
      *param_2 = *param_3;
      *param_3 = iVar1;
      iVar1 = *param_1;
      if (*param_2 < iVar1) {
        iVar3 = iVar3 + 3;
        *param_1 = *param_2;
        *param_2 = iVar1;
      }
      else {
        iVar3 = iVar3 + 2;
      }
    }
    else {
      iVar3 = iVar3 + 1;
    }
  }
  iVar1 = *param_4;
  if (*param_5 < iVar1) {
    *param_4 = *param_5;
    *param_5 = iVar1;
    iVar1 = *param_3;
    if (iVar1 <= *param_4) {
      return iVar3 + 1;
    }
    *param_3 = *param_4;
    *param_4 = iVar1;
    iVar1 = *param_2;
    if (iVar1 <= *param_3) {
      return iVar3 + 2;
    }
    *param_2 = *param_3;
    *param_3 = iVar1;
    iVar1 = *param_1;
    if (iVar1 <= *param_2) {
      return iVar3 + 3;
    }
    iVar3 = iVar3 + 4;
    *param_1 = *param_2;
    *param_2 = iVar1;
  }
  return iVar3;
}


// ===== 00517ad8  FUN_00517ad8 =====

uint * FUN_00517ad8(uint *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  uint *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  uint *puVar10;
  ulong uVar11;
  uint *puVar12;
  uint *puVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  
  if (param_1 != param_2) {
    uVar8 = (long)param_2 - (long)param_1;
    lVar9 = (long)uVar8 >> 2;
    if (4 < (long)uVar8) {
      uVar11 = lVar9 - 2U >> 1;
      uVar7 = uVar11;
      do {
        if ((7 < uVar8) && ((long)uVar7 <= (long)uVar11)) {
          uVar2 = uVar7 << 1 | 1;
          uVar14 = uVar7 * 2 + 2;
          puVar13 = param_1 + uVar2;
          if ((long)uVar14 < lVar9) {
            uVar16 = *puVar13;
            uVar3 = puVar13[1];
            uVar15 = uVar16;
            if (uVar16 <= uVar3) {
              uVar15 = uVar3;
            }
            puVar12 = puVar13 + 1;
            if (uVar3 <= uVar16) {
              puVar12 = puVar13;
              uVar14 = uVar2;
            }
          }
          else {
            uVar15 = *puVar13;
            puVar12 = puVar13;
            uVar14 = uVar2;
          }
          uVar16 = param_1[uVar7];
          puVar13 = param_1 + uVar7;
          if (uVar16 <= uVar15) {
            do {
              while( true ) {
                puVar10 = puVar12;
                *puVar13 = uVar15;
                if ((long)uVar11 < (long)uVar14) goto LAB_00517b00;
                uVar2 = uVar14 << 1 | 1;
                uVar14 = uVar14 * 2 + 2;
                puVar6 = param_1 + uVar2;
                puVar13 = puVar10;
                if ((long)uVar14 < lVar9) break;
                uVar15 = *puVar6;
                puVar12 = puVar6;
                uVar14 = uVar2;
                if (uVar15 < uVar16) goto LAB_00517b00;
              }
              uVar3 = *puVar6;
              uVar4 = puVar6[1];
              uVar15 = uVar3;
              if (uVar3 <= uVar4) {
                uVar15 = uVar4;
              }
              puVar12 = puVar6 + 1;
              if (uVar4 <= uVar3) {
                uVar14 = uVar2;
                puVar12 = puVar6;
              }
            } while (uVar16 <= uVar15);
LAB_00517b00:
            *puVar10 = uVar16;
          }
        }
        bVar5 = 0 < (long)uVar7;
        uVar7 = uVar7 - 1;
      } while (bVar5);
    }
    puVar13 = param_2;
    if (param_2 != param_3) {
      puVar12 = param_1 + 1;
      puVar10 = param_2;
      do {
        uVar15 = *puVar10;
        if (uVar15 < *param_1) {
          *puVar10 = *param_1;
          *param_1 = uVar15;
          if (7 < (long)uVar8) {
            uVar16 = *puVar12;
            if (uVar8 == 8) {
              uVar7 = 1;
              puVar13 = puVar12;
            }
            else {
              uVar3 = param_1[2];
              bVar5 = uVar3 <= uVar16;
              if (uVar16 <= uVar3) {
                uVar16 = uVar3;
              }
              puVar13 = param_1 + 2;
              if (bVar5) {
                puVar13 = puVar12;
              }
              uVar7 = 1;
              if (!bVar5) {
                uVar7 = 2;
              }
            }
            puVar6 = param_1;
            if (uVar15 <= uVar16) {
              do {
                while( true ) {
                  puVar17 = puVar13;
                  *puVar6 = uVar16;
                  if ((long)(lVar9 - 2U >> 1) < (long)uVar7) goto LAB_00517c08;
                  uVar11 = uVar7 << 1 | 1;
                  uVar7 = uVar7 * 2 + 2;
                  puVar1 = param_1 + uVar11;
                  puVar6 = puVar17;
                  if ((long)uVar7 < lVar9) break;
                  uVar16 = *puVar1;
                  uVar7 = uVar11;
                  puVar13 = puVar1;
                  if (uVar16 < uVar15) goto LAB_00517c08;
                }
                uVar3 = *puVar1;
                uVar4 = puVar1[1];
                uVar16 = uVar3;
                if (uVar3 <= uVar4) {
                  uVar16 = uVar4;
                }
                puVar13 = puVar1 + 1;
                if (uVar4 <= uVar3) {
                  uVar7 = uVar11;
                  puVar13 = puVar1;
                }
              } while (uVar15 <= uVar16);
LAB_00517c08:
              *puVar17 = uVar15;
            }
          }
        }
        puVar10 = puVar10 + 1;
        puVar13 = param_3;
      } while (puVar10 != param_3);
    }
    param_3 = puVar13;
    if (4 < (long)uVar8) {
      uVar8 = uVar8 >> 2;
      do {
        uVar7 = 0;
        uVar15 = *param_1;
        puVar13 = param_1;
        do {
          puVar12 = puVar13 + uVar7 + 1;
          uVar14 = uVar7 << 1 | 1;
          uVar11 = uVar7 * 2 + 2;
          if ((long)uVar11 < (long)uVar8) {
            uVar3 = *puVar12;
            uVar4 = puVar13[uVar7 + 2];
            uVar16 = uVar3;
            if (uVar3 <= uVar4) {
              uVar16 = uVar4;
            }
            puVar10 = puVar13 + uVar7 + 2;
            uVar7 = uVar11;
            if (uVar4 <= uVar3) {
              puVar10 = puVar12;
              uVar7 = uVar14;
            }
          }
          else {
            uVar16 = *puVar12;
            puVar10 = puVar12;
            uVar7 = uVar14;
          }
          *puVar13 = uVar16;
          puVar13 = puVar10;
        } while ((long)uVar7 <= (long)(uVar8 - 2 >> 1));
        param_2 = param_2 + -1;
        if (puVar10 == param_2) {
          *puVar10 = uVar15;
        }
        else {
          uVar7 = (long)puVar10 + (4 - (long)param_1);
          *puVar10 = *param_2;
          *param_2 = uVar15;
          if (4 < (long)uVar7) {
            uVar15 = *puVar10;
            uVar7 = (uVar7 >> 2) - 2 >> 1;
            uVar16 = param_1[uVar7];
            puVar13 = param_1 + uVar7;
            if (uVar16 < uVar15) {
              do {
                puVar12 = puVar13;
                *puVar10 = uVar16;
                if (uVar7 == 0) break;
                uVar7 = uVar7 - 1 >> 1;
                uVar16 = param_1[uVar7];
                puVar10 = puVar12;
                puVar13 = param_1 + uVar7;
              } while (uVar16 < uVar15);
              *puVar12 = uVar15;
            }
          }
        }
        bVar5 = 2 < (long)uVar8;
        uVar8 = uVar8 - 1;
      } while (bVar5);
    }
  }
  return param_3;
}


// ===== 00517e00  FUN_00517e00 =====

int FUN_00517e00(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *param_2;
  uVar2 = *param_1;
  uVar4 = *param_3;
  if (uVar1 < uVar2) {
    if (uVar4 < uVar1) {
      *param_1 = uVar4;
      iVar3 = 1;
    }
    else {
      *param_1 = uVar1;
      *param_2 = uVar2;
      uVar4 = *param_3;
      if (uVar2 <= uVar4) {
        iVar3 = 1;
        goto LAB_00517e9c;
      }
      iVar3 = 2;
      *param_2 = uVar4;
    }
    *param_3 = uVar2;
    uVar4 = uVar2;
  }
  else if (uVar4 < uVar1) {
    *param_2 = uVar4;
    *param_3 = uVar1;
    uVar2 = *param_1;
    if (*param_2 < uVar2) {
      *param_1 = *param_2;
      iVar3 = 2;
      *param_2 = uVar2;
      uVar4 = *param_3;
    }
    else {
      iVar3 = 1;
      uVar4 = uVar1;
    }
  }
  else {
    iVar3 = 0;
  }
LAB_00517e9c:
  if (*param_4 < uVar4) {
    *param_3 = *param_4;
    *param_4 = uVar4;
    uVar1 = *param_2;
    if (*param_3 < uVar1) {
      *param_2 = *param_3;
      *param_3 = uVar1;
      uVar1 = *param_1;
      if (*param_2 < uVar1) {
        iVar3 = iVar3 + 3;
        *param_1 = *param_2;
        *param_2 = uVar1;
      }
      else {
        iVar3 = iVar3 + 2;
      }
    }
    else {
      iVar3 = iVar3 + 1;
    }
  }
  uVar1 = *param_4;
  if (*param_5 < uVar1) {
    *param_4 = *param_5;
    *param_5 = uVar1;
    uVar1 = *param_3;
    if (uVar1 <= *param_4) {
      return iVar3 + 1;
    }
    *param_3 = *param_4;
    *param_4 = uVar1;
    uVar1 = *param_2;
    if (uVar1 <= *param_3) {
      return iVar3 + 2;
    }
    *param_2 = *param_3;
    *param_3 = uVar1;
    uVar1 = *param_1;
    if (uVar1 <= *param_2) {
      return iVar3 + 3;
    }
    iVar3 = iVar3 + 4;
    *param_1 = *param_2;
    *param_2 = uVar1;
  }
  return iVar3;
}


// ===== 00517f78  FUN_00517f78 =====

char * FUN_00517f78(char *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 1000000) {
    if (0x270 < param_2 >> 4) {
      if (0xc34 < param_2 >> 5) {
        *(undefined2 *)param_1 =
             *(undefined2 *)
              (
              ";00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899NSt4__Cr20__shared_ptr_emplaceINS_4__fs10filesystem16filesystem_error8_StorageENS_9allocatorIS4_EEEE"
              + (ulong)(param_2 / 10000) * 2 + 1);
        *(undefined2 *)(param_1 + 2) =
             *(undefined2 *)
              (
              ";00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899NSt4__Cr20__shared_ptr_emplaceINS_4__fs10filesystem16filesystem_error8_StorageENS_9allocatorIS4_EEEE"
              + (ulong)((param_2 % 10000) / 100) * 2 + 1);
        *(undefined2 *)(param_1 + 4) =
             *(undefined2 *)
              (
              ";00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899NSt4__Cr20__shared_ptr_emplaceINS_4__fs10filesystem16filesystem_error8_StorageENS_9allocatorIS4_EEEE"
              + (ulong)((param_2 % 10000) % 100) * 2 + 1);
        return param_1 + 6;
      }
      *param_1 = (char)(param_2 / 10000) + '0';
      *(undefined2 *)(param_1 + 1) =
           *(undefined2 *)
            (
            ";00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899NSt4__Cr20__shared_ptr_emplaceINS_4__fs10filesystem16filesystem_error8_StorageENS_9allocatorIS4_EEEE"
            + (ulong)((param_2 % 10000) / 100) * 2 + 1);
      *(undefined2 *)(param_1 + 3) =
           *(undefined2 *)
            (
            ";00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899NSt4__Cr20__shared_ptr_emplaceINS_4__fs10filesystem16filesystem_error8_StorageENS_9allocatorIS4_EEEE"
            + (ulong)((param_2 % 10000) % 100) * 2 + 1);
      return param_1 + 5;
    }
    if (99 < param_2) {
      uVar1 = (param_2 >> 2 & 0x3fff) / 0x19;
      if (999 < param_2) {
        *(undefined2 *)param_1 =
             *(undefined2 *)
              (
              ";00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899NSt4__Cr20__shared_ptr_emplaceINS_4__fs10filesystem16filesystem_error8_StorageENS_9allocatorIS4_EEEE"
              + (ulong)uVar1 * 2 + 1);
        *(undefined2 *)(param_1 + 2) =
             *(undefined2 *)
              (
              ";00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899NSt4__Cr20__shared_ptr_emplaceINS_4__fs10filesystem16filesystem_error8_StorageENS_9allocatorIS4_EEEE"
              + ((ulong)(param_2 + uVar1 * -100) & 0xffff) * 2 + 1);
        return param_1 + 4;
      }
      *param_1 = (char)uVar1 + '0';
      *(undefined2 *)(param_1 + 1) =
           *(undefined2 *)
            (
            ";00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899NSt4__Cr20__shared_ptr_emplaceINS_4__fs10filesystem16filesystem_error8_StorageENS_9allocatorIS4_EEEE"
            + ((ulong)(param_2 + uVar1 * -100) & 0xffff) * 2 + 1);
      return param_1 + 3;
    }
    if (9 < param_2) {
      *(undefined2 *)param_1 =
           *(undefined2 *)
            (
            ";00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899NSt4__Cr20__shared_ptr_emplaceINS_4__fs10filesystem16filesystem_error8_StorageENS_9allocatorIS4_EEEE"
            + (ulong)param_2 * 2 + 1);
      return param_1 + 2;
    }
    *param_1 = (char)param_2 + '0';
    return param_1 + 1;
  }
  if (99999999 < param_2) {
    uVar1 = param_2 % 100000000;
    if (999999999 < param_2) {
      *(undefined2 *)param_1 =
           *(undefined2 *)
            (
            ";00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899NSt4__Cr20__shared_ptr_emplaceINS_4__fs10filesystem16filesystem_error8_StorageENS_9allocatorIS4_EEEE"
            + (ulong)(param_2 / 100000000) * 2 + 1);
      *(undefined2 *)(param_1 + 2) =
           *(undefined2 *)
            (
            ";00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899NSt4__Cr20__shared_ptr_emplaceINS_4__fs10filesystem16filesystem_error8_StorageENS_9allocatorIS4_EEEE"
            + (ulong)(uVar1 / 1000000) * 2 + 1);
      uVar2 = (uVar1 % 1000000) % 10000;
      *(undefined2 *)(param_1 + 4) =
           *(undefined2 *)
            (
            ";00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899NSt4__Cr20__shared_ptr_emplaceINS_4__fs10filesystem16filesystem_error8_StorageENS_9allocatorIS4_EEEE"
            + ((ulong)(uVar1 % 1000000) / 10000) * 2 + 1);
      *(undefined2 *)(param_1 + 6) =
           *(undefined2 *)
            (
            ";00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899NSt4__Cr20__shared_ptr_emplaceINS_4__fs10filesystem16filesystem_error8_StorageENS_9allocatorIS4_EEEE"
            + (ulong)(uVar2 / 100) * 2 + 1);
      *(undefined2 *)(param_1 + 8) =
           *(undefined2 *)
            (
            ";00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899NSt4__Cr20__shared_ptr_emplaceINS_4__fs10filesystem16filesystem_error8_StorageENS_9allocatorIS4_EEEE"
            + (ulong)(uVar2 % 100) * 2 + 1);
      return param_1 + 10;
    }
    *param_1 = (char)(param_2 / 100000000) + '0';
    *(undefined2 *)(param_1 + 1) =
         *(undefined2 *)
          (
          ";00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899NSt4__Cr20__shared_ptr_emplaceINS_4__fs10filesystem16filesystem_error8_StorageENS_9allocatorIS4_EEEE"
          + (ulong)(uVar1 / 1000000) * 2 + 1);
    uVar2 = (uVar1 % 1000000) % 10000;
    *(undefined2 *)(param_1 + 3) =
         *(undefined2 *)
          (
          ";00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899NSt4__Cr20__shared_ptr_emplaceINS_4__fs10filesystem16filesystem_error8_StorageENS_9allocatorIS4_EEEE"
          + ((ulong)(uVar1 % 1000000) / 10000) * 2 + 1);
    *(undefined2 *)(param_1 + 5) =
         *(undefined2 *)
          (
          ";00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899NSt4__Cr20__shared_ptr_emplaceINS_4__fs10filesystem16filesystem_error8_StorageENS_9allocatorIS4_EEEE"
          + (ulong)(uVar2 / 100) * 2 + 1);
    *(undefined2 *)(param_1 + 7) =
         *(undefined2 *)
          (
          ";00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899NSt4__Cr20__shared_ptr_emplaceINS_4__fs10filesystem16filesystem_error8_StorageENS_9allocatorIS4_EEEE"
          + (ulong)(uVar2 % 100) * 2 + 1);
    return param_1 + 9;
  }
  uVar1 = param_2 % 1000000;
  if (9999999 < param_2) {
    *(undefined2 *)param_1 =
         *(undefined2 *)
          (
          ";00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899NSt4__Cr20__shared_ptr_emplaceINS_4__fs10filesystem16filesystem_error8_StorageENS_9allocatorIS4_EEEE"
          + (ulong)(param_2 / 1000000) * 2 + 1);
    *(undefined2 *)(param_1 + 2) =
         *(undefined2 *)
          (
          ";00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899NSt4__Cr20__shared_ptr_emplaceINS_4__fs10filesystem16filesystem_error8_StorageENS_9allocatorIS4_EEEE"
          + ((ulong)uVar1 / 10000) * 2 + 1);
    *(undefined2 *)(param_1 + 4) =
         *(undefined2 *)
          (
          ";00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899NSt4__Cr20__shared_ptr_emplaceINS_4__fs10filesystem16filesystem_error8_StorageENS_9allocatorIS4_EEEE"
          + (ulong)((uVar1 % 10000) / 100) * 2 + 1);
    *(undefined2 *)(param_1 + 6) =
         *(undefined2 *)
          (
          ";00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899NSt4__Cr20__shared_ptr_emplaceINS_4__fs10filesystem16filesystem_error8_StorageENS_9allocatorIS4_EEEE"
          + (ulong)((uVar1 % 10000) % 100) * 2 + 1);
    return param_1 + 8;
  }
  *param_1 = (char)(param_2 / 1000000) + '0';
  *(undefined2 *)(param_1 + 1) =
       *(undefined2 *)
        (
        ";00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899NSt4__Cr20__shared_ptr_emplaceINS_4__fs10filesystem16filesystem_error8_StorageENS_9allocatorIS4_EEEE"
        + ((ulong)uVar1 / 10000) * 2 + 1);
  *(undefined2 *)(param_1 + 3) =
       *(undefined2 *)
        (
        ";00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899NSt4__Cr20__shared_ptr_emplaceINS_4__fs10filesystem16filesystem_error8_StorageENS_9allocatorIS4_EEEE"
        + (ulong)((uVar1 % 10000) / 100) * 2 + 1);
  *(undefined2 *)(param_1 + 5) =
       *(undefined2 *)
        (
        ";00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899NSt4__Cr20__shared_ptr_emplaceINS_4__fs10filesystem16filesystem_error8_StorageENS_9allocatorIS4_EEEE"
        + (ulong)((uVar1 % 10000) % 100) * 2 + 1);
  return param_1 + 7;
}


// ===== 00518300  FUN_00518300 =====

long FUN_00518300(void)

{
  long lVar1;
  int iVar2;
  undefined4 *puVar3;
  timespec local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0051831c to 0051839b has its CatchHandler @ 005183a0 */
  iVar2 = clock_gettime(0,&local_38);
  if (iVar2 == 0) {
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return local_38.tv_nsec / 1000 + local_38.tv_sec * 1000000;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_28) {
    puVar3 = (undefined4 *)__errno();
                    /* WARNING: Subroutine does not return */
    FUN_0054a0b0(*puVar3,"clock_gettime(CLOCK_REALTIME) failed");
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005183a4  FUN_005183a4 =====

long FUN_005183a4(long *param_1)

{
  return *param_1 / 1000000;
}


// ===== 005183c8  FUN_005183c8 =====

long FUN_005183c8(long param_1)

{
  return param_1 * 1000000;
}


// ===== 005183d8  FUN_005183d8 =====

long FUN_005183d8(void)

{
  long lVar1;
  int iVar2;
  undefined4 *puVar3;
  timespec local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 005183f4 to 00518457 has its CatchHandler @ 0051845c */
  iVar2 = clock_gettime(1,&local_38);
  if (iVar2 == 0) {
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return local_38.tv_nsec + local_38.tv_sec * 1000000000;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_28) {
    puVar3 = (undefined4 *)__errno();
                    /* WARNING: Subroutine does not return */
    FUN_0054a0b0(*puVar3,"clock_gettime(CLOCK_MONOTONIC) failed");
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00518460  FUN_00518460 =====

int FUN_00518460(pthread_cond_t *param_1)

{
  int iVar1;
  
                    /* try { // try from 00518468 to 0051846b has its CatchHandler @ 00518474 */
  iVar1 = pthread_cond_signal(param_1);
  return iVar1;
}


// ===== 00518478  FUN_00518478 =====

int FUN_00518478(pthread_cond_t *param_1)

{
  int iVar1;
  
                    /* try { // try from 00518480 to 00518483 has its CatchHandler @ 0051848c */
  iVar1 = pthread_cond_broadcast(param_1);
  return iVar1;
}


// ===== 00518490  FUN_00518490 =====

void FUN_00518490(pthread_cond_t *param_1,undefined8 *param_2)

{
  int iVar1;
  char *pcVar2;
  
  if (*(char *)(param_2 + 1) == '\0') {
    iVar1 = 1;
    pcVar2 = "condition_variable::wait: mutex not locked";
  }
  else {
                    /* try { // try from 005184a4 to 005184cf has its CatchHandler @ 005184d0 */
    iVar1 = pthread_cond_wait(param_1,(pthread_mutex_t *)*param_2);
    if (iVar1 == 0) {
      return;
    }
    pcVar2 = "condition_variable wait failed";
  }
                    /* WARNING: Subroutine does not return */
  FUN_0054a0b0(iVar1,pcVar2);
}


// ===== 005184d4  FUN_005184d4 =====

int FUN_005184d4(pthread_cond_t *param_1)

{
  int iVar1;
  
                    /* try { // try from 005184dc to 005184df has its CatchHandler @ 005184e8 */
  iVar1 = pthread_cond_destroy(param_1);
  return iVar1;
}


// ===== 005184ec  FUN_005184ec =====

bool FUN_005184ec(void)

{
  int iVar1;
  
  iVar1 = FUN_0054fc80();
  return 0 < iVar1;
}


// ===== 00518508  FUN_00518508 =====

void FUN_00518508(undefined8 *param_1)

{
  FUN_0054f92c(*param_1);
  return;
}


// ===== 00518510  FUN_00518510 =====

void FUN_00518510(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  FUN_0054fa60(uVar1);
  return;
}


// ===== 00518524  FUN_00518524 =====

long * FUN_00518524(long *param_1,long *param_2)

{
  if (*param_1 != *param_2) {
    FUN_0054fa60();
    FUN_0054f92c(*param_1);
    *param_1 = *param_2;
  }
  return param_1;
}


// ===== 0051856c  FUN_0051856c =====

void FUN_0051856c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0054fa7c();
  *param_1 = uVar1;
  return;
}


// ===== 00518590  FUN_00518590 =====

void FUN_00518590(undefined8 *param_1)

{
  FUN_0054faf4(*param_1);
                    /* WARNING: Subroutine does not return */
  FUN_00550060();
}


// ===== 005185a4  FUN_005185a4 =====

/* WARNING: Removing unreachable block (ram,0x005186ac) */

void FUN_005185a4(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  void *local_58 [2];
  char local_41;
  undefined1 local_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  puVar4 = (undefined8 *)param_1[1];
  if (puVar4 != (undefined8 *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_28) {
      uVar3 = *param_2;
      puVar4[1] = param_2[1];
      *puVar4 = uVar3;
      return;
    }
    goto LAB_005186e4;
  }
  FUN_004a3cf4(local_58,&DAT_001a8e55);
                    /* try { // try from 00518610 to 0051861b has its CatchHandler @ 005186b4 */
  FUN_00519840(local_40,local_58,*param_1);
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  cVar2 = param_1[2] != 0;
  if (param_1[3] != 0) {
    cVar2 = cVar2 + '\x01';
  }
  if (cVar2 == '\0') {
LAB_00518668:
    if (*(long *)(lVar1 + 0x28) != local_28) goto LAB_005186e4;
    FUN_005198c8(local_40,param_2);
  }
  else if (cVar2 == '\x01') {
    if (*(long *)(lVar1 + 0x28) != local_28) goto LAB_005186e4;
                    /* try { // try from 00518660 to 0051869f has its CatchHandler @ 005186a0 */
    FUN_00519924(local_40,param_1[2],param_2);
    goto LAB_00518668;
  }
                    /* catch() { ... } // from try @ 00518660 with catch @ 005186a0 */
  if ((*(long *)(lVar1 + 0x28) == local_28) &&
     (uVar3 = FUN_00519988(local_40), *(long *)(lVar1 + 0x28) == local_28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00d0fa5c(uVar3);
  }
LAB_005186e4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005186e8  FUN_005186e8 =====

void FUN_005186e8(undefined8 *param_1,ulong *param_2)

{
  char *__s;
  uint uVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  uint *puVar6;
  ulong uVar7;
  dirent *pdVar8;
  size_t sVar9;
  undefined8 uVar10;
  DIR *pDVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  void *local_98;
  undefined8 uStack_90;
  long local_88;
  undefined1 local_80;
  undefined7 uStack_7f;
  undefined8 uStack_78;
  undefined7 local_70;
  undefined1 uStack_69;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  puVar6 = (uint *)__errno();
  pDVar11 = (DIR *)*param_1;
  *puVar6 = 0;
  *(int *)param_2 = 0;
  uVar7 = FUN_00549d28();
  param_2[1] = uVar7;
  pdVar8 = readdir(pDVar11);
  do {
    if (pdVar8 == (dirent *)0x0) {
      uVar1 = *puVar6;
      if (uVar1 != 0) {
        uVar7 = FUN_00549b1c();
        *param_2 = (ulong)uVar1;
        param_2[1] = uVar7;
      }
LAB_00518804:
      FUN_005197b0(param_1);
      uVar10 = 0;
LAB_00518810:
      if (*(long *)(lVar3 + 0x28) == local_68) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar10);
    }
    uVar1 = pdVar8->d_type - 1;
    if (uVar1 < 0xc) {
      cVar2 = (char)uVar1;
      uVar12 = (&DAT_001f76d8)[cVar2];
      uVar13 = (&DAT_001f76e4)[cVar2];
    }
    else {
      uVar12 = 0;
      uVar13 = 0;
    }
    __s = pdVar8->d_name;
    sVar9 = strlen(__s);
    if (sVar9 != 2) {
      if (sVar9 == 1) {
        if (*__s == '.') goto LAB_00518770;
        sVar9 = 1;
      }
      if ((int)*param_2 != 0) goto LAB_00518804;
LAB_0051884c:
      if (sVar9 == 0) goto LAB_00518804;
      local_98 = (void *)0x0;
      uStack_90 = 0;
      local_88 = 0;
                    /* try { // try from 0051885c to 00518867 has its CatchHandler @ 0051892c */
      FUN_004b2050(&local_98,__s,__s + sVar9);
                    /* try { // try from 0051886c to 00518873 has its CatchHandler @ 005188fc */
      FUN_004c55b4(&local_80,param_1 + 1);
                    /* try { // try from 00518874 to 0051887f has its CatchHandler @ 005188e4 */
      FUN_004b1f38(&local_80,&local_98);
      if (*(char *)((long)param_1 + 0x37) < '\0') {
        operator_delete((void *)param_1[4]);
      }
      uVar4 = CONCAT17(uStack_69,local_70);
      uVar10 = CONCAT71(uStack_7f,local_80);
      uStack_69 = 0;
      local_80 = 0;
      param_1[6] = uVar4;
      param_1[5] = uStack_78;
      param_1[4] = uVar10;
      param_1[10] = 0;
      param_1[0xb] = 0x8000000000000000;
      param_1[8] = 0xffffffffffffffff;
      param_1[9] = 0xffffffffffffffff;
      *(undefined1 *)(param_1 + 0xd) = uVar13;
      param_1[0xc] = 0xffff0000ffff;
      *(undefined1 *)((long)param_1 + 0x69) = uVar12;
      if (local_88 < 0) {
        operator_delete(local_98);
      }
      uVar10 = 1;
      goto LAB_00518810;
    }
    iVar5 = memcmp(__s,&DAT_0019a381,2);
    if (iVar5 != 0) {
      sVar9 = 2;
      if ((int)*param_2 == 0) goto LAB_0051884c;
      goto LAB_00518804;
    }
LAB_00518770:
    pDVar11 = (DIR *)*param_1;
    *puVar6 = 0;
    *(int *)param_2 = 0;
    uVar7 = FUN_00549d28();
    param_2[1] = uVar7;
    pdVar8 = readdir(pDVar11);
  } while( true );
}


// ===== 0051893c  FUN_0051893c =====

/* WARNING: Removing unreachable block (ram,0x00518ae8) */
/* WARNING: Removing unreachable block (ram,0x00518af8) */
/* WARNING: Removing unreachable block (ram,0x00518a94) */
/* WARNING: Removing unreachable block (ram,0x00518b08) */
/* WARNING: Removing unreachable block (ram,0x00518b50) */

void FUN_0051893c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_150 [8];
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined1 *local_120;
  undefined1 **ppuStack_118;
  undefined1 *puStack_110;
  undefined8 uStack_108;
  undefined1 *local_e0;
  undefined1 **ppuStack_d8;
  undefined1 *puStack_d0;
  undefined8 uStack_c8;
  void *local_c0 [2];
  undefined1 local_a9;
  undefined1 local_a8 [24];
  undefined1 local_90 [24];
  undefined1 local_78 [24];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  ppuStack_118 = &local_120;
  puStack_110 = auStack_150;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar4 = (undefined8 *)param_1[1];
  uStack_108 = 0xffffff80ffffffd8;
  local_148 = param_4;
  uStack_140 = param_5;
  local_138 = param_6;
  uStack_130 = param_7;
  local_128 = param_8;
  local_120 = (undefined1 *)register0x00000008;
  if (puVar4 == (undefined8 *)0x0) {
                    /* try { // try from 005189e4 to 005189fb has its CatchHandler @ 00518bf0 */
    FUN_004a3cf4(local_a8,&DAT_001a8e55);
                    /* try { // try from 00518a00 to 00518a0b has its CatchHandler @ 00518bd8 */
    FUN_00519840(local_90,local_a8,*param_1);
                    /* try { // try from 00518a0c to 00518a1f has its CatchHandler @ 00518bb8 */
    FUN_00519840(local_78,local_90,&DAT_001c4dc3);
    ppuStack_d8 = ppuStack_118;
    local_e0 = local_120;
    uStack_c8 = uStack_108;
    puStack_d0 = puStack_110;
                    /* try { // try from 00518a28 to 00518a3b has its CatchHandler @ 00518b98 */
    FUN_00519fd0(local_c0,param_3,&local_e0);
                    /* try { // try from 00518a54 to 00518a5b has its CatchHandler @ 00518b5c */
    puVar4 = (undefined8 *)FUN_00547cac(local_78,local_c0,local_a9);
    local_50 = puVar4[2];
    uStack_58 = puVar4[1];
    local_60 = *puVar4;
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    while( true ) {
      cVar2 = param_1[2] != 0;
      if (param_1[3] != 0) {
        cVar2 = cVar2 + '\x01';
      }
      if (cVar2 == '\0') break;
      if (cVar2 != '\x01') goto LAB_00518b28;
      if (*(long *)(lVar1 + 0x28) != local_48) goto LAB_00518c30;
                    /* try { // try from 00518acc to 00518b43 has its CatchHandler @ 00518b44 */
      FUN_00519924(&local_60,param_1[2],param_2);
      operator_delete(local_c0[0]);
    }
    if (*(long *)(lVar1 + 0x28) == local_48) {
      FUN_005198c8(&local_60,param_2);
LAB_00518b28:
      if (*(long *)(lVar1 + 0x28) == local_48) {
        uVar3 = FUN_00519988(&local_60);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00518acc with catch @ 00518b44
                        */
        FUN_0054f698(uVar3);
        if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 00518c0c to 00518c0f has its CatchHandler @ 00518c10 */
          uVar3 = FUN_0054f980();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00518c0c with catch @ 00518c10
                        */
                    /* try { // try from 00518c14 to 00518c17 has its CatchHandler @ 00518c34 */
          FUN_0054f84c();
          if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
            FUN_00d0fa5c(uVar3);
          }
        }
      }
    }
  }
  else {
    uVar3 = *param_2;
    puVar4[1] = param_2[1];
    *puVar4 = uVar3;
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
LAB_00518c30:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00518c38  FUN_00518c38 =====

void FUN_00518c38(long *param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int *piVar8;
  long lVar9;
  long *plVar10;
  int local_f0 [2];
  undefined8 local_e8;
  char *local_e0;
  undefined4 *puStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  DIR *local_c0;
  void *local_b8;
  char local_a1;
  void *local_a0;
  char local_89;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  *param_1 = 0;
  param_1[1] = 0;
  uStack_c8 = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  local_e0 = "recursive_directory_iterator";
  puStack_d8 = param_4;
  local_d0 = param_2;
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
    uVar6 = FUN_00549d28();
    *(undefined8 *)(param_4 + 2) = uVar6;
  }
  local_f0[0] = 0;
  local_e8 = FUN_00549d28();
                    /* try { // try from 00518ca4 to 00518cb7 has its CatchHandler @ 00518e18 */
  FUN_00518e54(&local_c0,param_2,param_3,local_f0);
                    /* try { // try from 00518cc0 to 00518ccb has its CatchHandler @ 00518e20 */
  if ((local_f0[0] == 0) || (FUN_005185a4(&local_e0,local_f0), local_f0[0] == 0)) {
    if (local_c0 != (DIR *)0x0) {
                    /* try { // try from 00518cdc to 00518ce3 has its CatchHandler @ 00518e14 */
      puVar7 = (undefined8 *)operator_new(0x50);
      plVar10 = (long *)param_1[1];
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = &PTR_FUN_00d1ffd0;
      puVar7[9] = 0;
      puVar7[6] = 0;
      puVar7[5] = 0;
      puVar7[8] = 0;
      puVar7[7] = 0;
      puVar7[4] = 0;
      puVar7[3] = 0;
      *param_1 = (long)(puVar7 + 3);
      param_1[1] = (long)puVar7;
      if (plVar10 != (long *)0x0) {
        plVar1 = plVar10 + 1;
        do {
          lVar9 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
          FUN_005466cc(plVar10);
        }
      }
      lVar9 = *param_1;
      *(char *)(lVar9 + 0x30) = (char)param_3;
                    /* try { // try from 00518d50 to 00518d57 has its CatchHandler @ 00518e20 */
      FUN_0051a4d0(lVar9,&local_c0);
      goto LAB_00518d58;
    }
  }
  else {
LAB_00518d58:
    if (local_c0 != (DIR *)0x0) {
      FUN_00549d28();
      iVar5 = closedir(local_c0);
      if (iVar5 == -1) {
        piVar8 = (int *)__errno();
        if (*piVar8 == 0) {
          if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* try { // try from 00518dec to 00518e13 has its CatchHandler @ 00518e50 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/src/filesystem/filesystem_common.h"
                       ,0x72,"errno != 0","Expected errno to be non-zero");
          }
          goto LAB_00518e4c;
        }
        FUN_00549b1c();
      }
      local_c0 = (DIR *)0x0;
    }
  }
  if (local_89 < '\0') {
    operator_delete(local_a0);
  }
  if (local_a1 < '\0') {
    operator_delete(local_b8);
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
LAB_00518e4c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00518e54  FUN_00518e54 =====

void FUN_00518e54(undefined8 *param_1,char *param_2,uint param_3,ulong *param_4)

{
  char *__name;
  uint uVar1;
  DIR *pDVar2;
  uint *puVar3;
  ulong uVar4;
  
  *param_1 = 0;
  FUN_004c55b4(param_1 + 1);
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined2 *)(param_1 + 0xd) = 0;
  param_1[4] = 0;
  param_1[0xc] = 0xffff0000ffff;
  param_1[8] = 0xffffffffffffffff;
  param_1[9] = 0xffffffffffffffff;
  param_1[10] = 0;
  param_1[0xb] = 0x8000000000000000;
  __name = *(char **)param_2;
  if (-1 < param_2[0x17]) {
    __name = param_2;
  }
  pDVar2 = opendir(__name);
  *param_1 = pDVar2;
  if (pDVar2 == (DIR *)0x0) {
    puVar3 = (uint *)__errno();
    uVar1 = *puVar3;
    if (uVar1 == 0) {
                    /* try { // try from 00518f1c to 00518f43 has its CatchHandler @ 00518f48 */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/src/filesystem/filesystem_common.h"
                 ,0x72,"errno != 0","Expected errno to be non-zero");
    }
    uVar4 = FUN_00549b1c();
    *param_4 = (ulong)uVar1;
    param_4[1] = uVar4;
    if (((param_3 >> 1 & 1) != 0) && (uVar1 == 0xd)) {
      *(undefined4 *)param_4 = 0;
      uVar4 = FUN_00549d28();
      param_4[1] = uVar4;
    }
  }
  else {
                    /* try { // try from 00518ecc to 00518ed7 has its CatchHandler @ 00518f44 */
    FUN_005186e8(param_1,param_4);
  }
  return;
}


// ===== 00518f84  FUN_00518f84 =====

void FUN_00518f84(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_005466cc(plVar5);
      return;
    }
  }
  return;
}


// ===== 00518fdc  FUN_00518fdc =====

void FUN_00518fdc(long *param_1)

{
  char cVar1;
  
  if (*param_1 != 0) {
    FUN_005197b0(param_1);
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    operator_delete((void *)param_1[4]);
    cVar1 = *(char *)((long)param_1 + 0x1f);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x1f);
  }
  if (-1 < cVar1) {
    return;
  }
  operator_delete((void *)param_1[1]);
  return;
}


// ===== 00519038  FUN_00519038 =====

void FUN_00519038(long *param_1,undefined4 *param_2)

{
  long *plVar1;
  undefined1 **ppuVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined1 *local_a0;
  undefined8 uStack_98;
  long local_90;
  int local_88 [2];
  undefined8 local_80;
  undefined8 local_78;
  long *local_70;
  char *local_68;
  undefined4 *puStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  local_68 = "recursive_directory_iterator::operator++()";
  local_58 = 0;
  uStack_50 = 0;
  puStack_60 = param_2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
    uVar6 = FUN_00549d28();
    *(undefined8 *)(param_2 + 2) = uVar6;
  }
  lVar9 = *param_1;
  local_78 = 0;
  local_70 = (long *)0x0;
  local_88[0] = 0;
  local_80 = FUN_00549d28();
  do {
    if (*(long *)(lVar9 + 0x28) == 0) {
      if (local_88[0] == 0) {
        plVar10 = (long *)param_1[1];
        *param_1 = 0;
        param_1[1] = 0;
        if (plVar10 != (long *)0x0) {
          plVar1 = plVar10 + 1;
          do {
            lVar9 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
            FUN_005466cc(plVar10);
          }
        }
      }
      else {
        lVar8 = -1;
LAB_00519118:
        uVar7 = lVar8 + *(long *)(lVar9 + 0x20);
        lVar9 = *(long *)(*(long *)(lVar9 + 8) + (uVar7 / 0x24) * 8) + (uVar7 % 0x24) * 0x70;
        uStack_98 = *(undefined8 *)(lVar9 + 0x10);
        local_a0 = *(undefined1 **)(lVar9 + 8);
        local_90 = *(long *)(lVar9 + 0x18);
        *(undefined8 *)(lVar9 + 0x10) = 0;
        *(undefined8 *)(lVar9 + 0x18) = 0;
        *(undefined8 *)(lVar9 + 8) = 0;
        plVar10 = (long *)param_1[1];
        *param_1 = 0;
        param_1[1] = 0;
        if (plVar10 != (long *)0x0) {
          plVar1 = plVar10 + 1;
          do {
            lVar9 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
            FUN_005466cc(plVar10);
          }
        }
        ppuVar2 = (undefined1 **)local_a0;
        if (-1 < local_90) {
          ppuVar2 = &local_a0;
        }
                    /* try { // try from 005191b8 to 005191cb has its CatchHandler @ 0051927c */
        FUN_0051893c(&local_68,local_88,"at root \"%s\"",ppuVar2);
        if (local_90 < 0) {
          operator_delete(local_a0);
        }
      }
LAB_005191dc:
      plVar10 = local_70;
      if (local_70 != (long *)0x0) {
        plVar1 = local_70 + 1;
        do {
          lVar9 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*local_70 + 0x10))(local_70);
          FUN_005466cc(plVar10);
        }
      }
      if (*(long *)(lVar5 + 0x28) == local_48) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    uVar7 = (*(long *)(lVar9 + 0x28) + *(long *)(lVar9 + 0x20)) - 1;
                    /* try { // try from 005190e0 to 005190fb has its CatchHandler @ 00519294 */
    uVar7 = FUN_005186e8(*(long *)(*(long *)(lVar9 + 8) + (uVar7 / 0x24) * 8) +
                         (uVar7 % 0x24) * 0x70,local_88);
    if ((uVar7 & 1) != 0) goto LAB_005191dc;
    if (local_88[0] != 0) {
      lVar8 = *(long *)(lVar9 + 0x28) + -1;
      goto LAB_00519118;
    }
    FUN_0051b048(lVar9);
  } while( true );
}


// ===== 005192bc  FUN_005192bc =====

long FUN_005192bc(long *param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *param_1;
  uVar2 = (*(long *)(lVar1 + 0x28) + *(long *)(lVar1 + 0x20)) - 1;
  return *(long *)(*(long *)(lVar1 + 8) + (uVar2 / 0x24) * 8) + (uVar2 % 0x24) * 0x70 + 0x20;
}


// ===== 00519308  FUN_00519308 =====

long FUN_00519308(long param_1,int *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if (param_2 != (int *)0x0) {
    *param_2 = 0;
    uVar1 = FUN_00549d28();
    *(undefined8 *)(param_2 + 2) = uVar1;
  }
  if ((*(char *)(param_1 + 0x10) == '\0') ||
     ((uVar2 = FUN_00519374(param_1,param_2), (uVar2 & 1) == 0 &&
      ((param_2 == (int *)0x0 || (*param_2 == 0)))))) {
    *(undefined1 *)(param_1 + 0x10) = 1;
    FUN_00519038(param_1,param_2);
  }
  return param_1;
}


// ===== 00519374  FUN_00519374 =====

void FUN_00519374(long *param_1,undefined4 *param_2)

{
  long *plVar1;
  byte bVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  int *piVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  DIR DVar14;
  DIR *pDVar15;
  int local_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  char *local_e0;
  undefined4 *puStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  DIR *local_c0;
  void *pvStack_b8;
  long local_b0;
  char local_a1;
  void *local_a0;
  char local_89;
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  local_e0 = "recursive_directory_iterator::operator++()";
  local_d0 = 0;
  uStack_c8 = 0;
  puStack_d8 = param_2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
    uVar8 = FUN_00549d28();
    *(undefined8 *)(param_2 + 2) = uVar8;
  }
  lVar10 = *param_1;
  bVar2 = *(byte *)(lVar10 + 0x30);
  uVar11 = (*(long *)(lVar10 + 0x28) + *(long *)(lVar10 + 0x20)) - 1;
  uVar13 = uVar11 % 0x24;
  lVar10 = *(long *)(*(long *)(lVar10 + 8) + (uVar11 / 0x24) * 8);
  local_f0 = 0;
  local_e8 = FUN_00549d28();
  uVar3 = 1 << (ulong)(*(byte *)(lVar10 + uVar13 * 0x70 + 0x69) & 0x1f);
  if ((bVar2 & 1) == 0) {
    if ((uVar3 & 0x1a) == 0) {
      if ((uVar3 & 0x24) == 0) {
        FUN_0051c558(&local_c0,lVar10 + uVar13 * 0x70 + 0x20,&local_f0);
        goto LAB_005194f8;
      }
      pDVar15 = (DIR *)(lVar10 + uVar13 * 0x70 + 0x68);
      if (1 < (byte)((char)*pDVar15 + 1U)) goto LAB_005194c4;
      local_e8 = FUN_00549b1c();
      iVar7 = 2;
      local_f0 = 2;
      uStack_ec = 0;
LAB_005194d0:
      DVar14 = *pDVar15;
      if (iVar7 == 0) goto LAB_0051951c;
LAB_00519504:
      if (DVar14 != (DIR)0x0) {
        local_f0 = 0;
        local_e8 = FUN_00549d28();
        iVar7 = local_f0;
        if (local_f0 == 0) goto LAB_0051951c;
      }
LAB_005195ec:
      if ((iVar7 == 0xd) && ((*(byte *)(*param_1 + 0x30) >> 1 & 1) != 0)) {
        if (param_2 != (undefined4 *)0x0) {
          *param_2 = 0;
          uVar8 = FUN_00549d28();
          piVar9 = (int *)0x0;
          *(undefined8 *)(param_2 + 2) = uVar8;
          goto LAB_005196b4;
        }
      }
      else {
        lVar10 = lVar10 + uVar13 * 0x70;
        local_b0 = *(long *)(lVar10 + 0x30);
        pvStack_b8 = *(void **)(lVar10 + 0x28);
        local_c0 = *(DIR **)(lVar10 + 0x20);
        *(undefined8 *)(lVar10 + 0x28) = 0;
        *(undefined8 *)(lVar10 + 0x30) = 0;
        *(undefined8 *)(lVar10 + 0x20) = 0;
        plVar12 = (long *)param_1[1];
        *param_1 = 0;
        param_1[1] = 0;
        if (plVar12 != (long *)0x0) {
          plVar1 = plVar12 + 1;
          do {
            lVar10 = *plVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = lVar10 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
            FUN_005466cc(plVar12);
          }
        }
        pDVar15 = local_c0;
        if (-1 < local_b0) {
          pDVar15 = (DIR *)&local_c0;
        }
                    /* try { // try from 0051968c to 0051969f has its CatchHandler @ 00519724 */
        FUN_0051893c(&local_e0,&local_f0,"attempting recursion into \"%s\"",pDVar15);
        if (local_b0 < 0) {
          operator_delete(local_c0);
        }
      }
    }
    else {
      FUN_00549d28();
    }
LAB_005196b0:
    piVar9 = (int *)0x0;
  }
  else {
    if ((uVar3 & 0x13) == 0) {
      pDVar15 = (DIR *)(lVar10 + uVar13 * 0x70 + 0x68);
      if ((byte)((char)*pDVar15 + 1U) < 2) {
        local_e8 = FUN_00549b1c();
        iVar7 = 2;
        local_f0 = 2;
        uStack_ec = 0;
      }
      else {
LAB_005194c4:
        local_f0 = 0;
        local_e8 = FUN_00549d28();
        iVar7 = 0;
      }
      goto LAB_005194d0;
    }
    FUN_0051c50c(&local_c0,lVar10 + uVar13 * 0x70 + 0x20,&local_f0);
LAB_005194f8:
    iVar7 = local_f0;
    DVar14 = local_c0._0_1_;
    if (local_f0 != 0) goto LAB_00519504;
LAB_0051951c:
    if (DVar14 != (DIR)0x2) goto LAB_005196b0;
    FUN_00518e54(&local_c0,lVar10 + uVar13 * 0x70 + 0x20,*(undefined1 *)(*param_1 + 0x30),&local_f0)
    ;
    if (local_c0 == (DIR *)0x0) {
      if (local_89 < '\0') {
        operator_delete(local_a0);
      }
      if (local_a1 < '\0') {
        operator_delete(pvStack_b8);
      }
      iVar7 = local_f0;
      if (local_f0 != 0) goto LAB_005195ec;
      goto LAB_005196b0;
    }
                    /* try { // try from 00519550 to 00519557 has its CatchHandler @ 00519714 */
    FUN_0051a4d0(*param_1,&local_c0);
    if (local_c0 != (DIR *)0x0) {
      FUN_00549d28();
      iVar7 = closedir(local_c0);
      if (iVar7 == -1) {
        piVar9 = (int *)__errno();
        if (*piVar9 == 0) {
          if (*(long *)(lVar6 + 0x28) == local_48) {
                    /* try { // try from 005196ec to 00519713 has its CatchHandler @ 00519754 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/src/filesystem/filesystem_common.h"
                       ,0x72,"errno != 0","Expected errno to be non-zero");
          }
          goto LAB_00519750;
        }
        FUN_00549b1c();
      }
      local_c0 = (DIR *)0x0;
    }
    if (local_89 < '\0') {
      operator_delete(local_a0);
    }
    if (local_a1 < '\0') {
      operator_delete(pvStack_b8);
    }
    piVar9 = (int *)0x1;
  }
LAB_005196b4:
  if (*(long *)(lVar6 + 0x28) == local_48) {
    return;
  }
LAB_00519750:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(piVar9);
}


// ===== 00519758  FUN_00519758 =====

void FUN_00519758(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_005466cc(plVar5);
      return;
    }
  }
  return;
}


// ===== 005197b0  FUN_005197b0 =====

undefined1  [16] FUN_005197b0(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  uint *puVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  uVar2 = FUN_00549d28();
  iVar1 = closedir((DIR *)*param_1);
  if (iVar1 == -1) {
    puVar3 = (uint *)__errno();
    uVar4 = (ulong)*puVar3;
    if (*puVar3 == 0) {
                    /* try { // try from 00519814 to 0051983b has its CatchHandler @ 0051983c */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/src/filesystem/filesystem_common.h"
                 ,0x72,"errno != 0","Expected errno to be non-zero");
    }
    uVar2 = FUN_00549b1c();
  }
  else {
    uVar4 = 0;
  }
  *param_1 = 0;
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = uVar4;
  return auVar5;
}


// ===== 00519840  FUN_00519840 =====

void FUN_00519840(undefined8 *param_1,undefined8 param_2,char *param_3)

{
  size_t sVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_3 != (char *)0x0) {
    sVar1 = strlen(param_3);
    puVar2 = (undefined8 *)FUN_00547cac(param_2,param_3,sVar1);
    uVar5 = puVar2[1];
    uVar4 = *puVar2;
    *puVar2 = 0;
    puVar2[1] = 0;
    uVar3 = puVar2[2];
    param_1[1] = uVar5;
    *param_1 = uVar4;
    param_1[2] = uVar3;
    puVar2[2] = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/string",0xad0,
             "__s != nullptr","string::append received nullptr");
}


// ===== 005198c8  FUN_005198c8 =====

void FUN_005198c8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0054f64c(0x30);
                    /* try { // try from 005198f0 to 005198f7 has its CatchHandler @ 00519910 */
  FUN_005199f8(uVar1,param_1,*param_2,param_2[1]);
                    /* WARNING: Subroutine does not return */
  FUN_0054f748(uVar1,PTR_PTR_00d51d58,PTR_FUN_00d51d60);
}


// ===== 00519924  FUN_00519924 =====

void FUN_00519924(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0054f64c(0x30);
                    /* try { // try from 00519950 to 0051995b has its CatchHandler @ 00519974 */
  FUN_00519cc0(uVar1,param_1,param_2,*param_3,param_3[1]);
                    /* WARNING: Subroutine does not return */
  FUN_0054f748(uVar1,PTR_PTR_00d51d58,PTR_FUN_00d51d60);
}


// ===== 00519988  FUN_00519988 =====

void FUN_00519988(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0054f64c(0x30);
                    /* try { // try from 005199bc to 005199cb has its CatchHandler @ 005199e4 */
  FUN_00519e58(uVar1,param_1,param_2,param_3,*param_4,param_4[1]);
                    /* WARNING: Subroutine does not return */
  FUN_0054f748(uVar1,PTR_PTR_00d51d58,PTR_FUN_00d51d60);
}


// ===== 005199f8  FUN_005199f8 =====

void FUN_005199f8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 auVar2 [16];
  void *local_70;
  undefined8 uStack_68;
  long local_60;
  void *local_58;
  undefined8 uStack_50;
  long local_48;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00549ea0(param_1,param_3,param_4,param_2);
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  local_70 = (void *)0x0;
  uStack_68 = 0;
  local_60 = 0;
  *param_1 = (long)(PTR_DAT_00d51d68 + 0x10);
                    /* try { // try from 00519a54 to 00519a63 has its CatchHandler @ 00519ad4 */
  auVar2 = FUN_00519b74(auStack_40,&local_58,&local_70);
  *(undefined1 (*) [16])(param_1 + 4) = auVar2;
  if (local_60 < 0) {
    operator_delete(local_70);
  }
  if (local_48 < 0) {
    operator_delete(local_58);
  }
                    /* try { // try from 00519a78 to 00519a83 has its CatchHandler @ 00519ac4 */
  FUN_0051b274(param_1,0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00519b1c  FUN_00519b1c =====

void FUN_00519b1c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_005466cc(plVar5);
      return;
    }
  }
  return;
}


// ===== 00519b74  FUN_00519b74 =====

undefined1  [16] FUN_00519b74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = (undefined8 *)operator_new(0x60);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_00d1ff80;
                    /* try { // try from 00519bac to 00519bb7 has its CatchHandler @ 00519bfc */
  FUN_004c55b4(puVar1 + 3,param_2);
                    /* try { // try from 00519bbc to 00519bc3 has its CatchHandler @ 00519be4 */
  FUN_004c55b4(puVar1 + 6,param_3);
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  auVar2._8_8_ = puVar1;
  auVar2._0_8_ = puVar1 + 3;
  return auVar2;
}


// ===== 00519c18  FUN_00519c18 =====

void FUN_00519c18(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1ff80;
  FUN_005466c0();
  return;
}


// ===== 00519c28  FUN_00519c28 =====

void FUN_00519c28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1ff80;
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 00519c58  FUN_00519c58 =====

void FUN_00519c58(long param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x5f) < '\0') {
    operator_delete(*(void **)(param_1 + 0x48));
    cVar1 = *(char *)(param_1 + 0x47);
  }
  else {
    cVar1 = *(char *)(param_1 + 0x47);
  }
  if (cVar1 < '\0') {
    operator_delete(*(void **)(param_1 + 0x30));
    cVar1 = *(char *)(param_1 + 0x2f);
  }
  else {
    cVar1 = *(char *)(param_1 + 0x2f);
  }
  if (-1 < cVar1) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 00519cbc  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 00519cc0  FUN_00519cc0 =====

void FUN_00519cc0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined1 auVar2 [16];
  void *local_58;
  undefined8 uStack_50;
  long local_48;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00549ea0(param_1,param_4,param_5,param_2);
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  *param_1 = (long)(PTR_DAT_00d51d68 + 0x10);
                    /* try { // try from 00519d18 to 00519d27 has its CatchHandler @ 00519d7c */
  auVar2 = FUN_00519db4(auStack_40,param_3,&local_58);
  *(undefined1 (*) [16])(param_1 + 4) = auVar2;
  if (local_48 < 0) {
    operator_delete(local_58);
  }
                    /* try { // try from 00519d3c to 00519d47 has its CatchHandler @ 00519d6c */
  FUN_0051b274(param_1,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00519db4  FUN_00519db4 =====

undefined1  [16] FUN_00519db4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = (undefined8 *)operator_new(0x60);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_00d1ff80;
                    /* try { // try from 00519dec to 00519df7 has its CatchHandler @ 00519e3c */
  FUN_004c55b4(puVar1 + 3,param_2);
                    /* try { // try from 00519dfc to 00519e03 has its CatchHandler @ 00519e24 */
  FUN_004c55b4(puVar1 + 6,param_3);
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  auVar2._8_8_ = puVar1;
  auVar2._0_8_ = puVar1 + 3;
  return auVar2;
}


// ===== 00519e58  FUN_00519e58 =====

void FUN_00519e58(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00549ea0(param_1,param_5,param_6,param_2);
  *param_1 = (long)(PTR_DAT_00d51d68 + 0x10);
                    /* try { // try from 00519eac to 00519ebb has its CatchHandler @ 00519f04 */
  auVar2 = FUN_00519f2c(auStack_50,param_3,param_4);
  *(undefined1 (*) [16])(param_1 + 4) = auVar2;
                    /* try { // try from 00519ec0 to 00519ecb has its CatchHandler @ 00519ef4 */
  FUN_0051b274(param_1,2);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00519f2c  FUN_00519f2c =====

undefined1  [16] FUN_00519f2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = (undefined8 *)operator_new(0x60);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_00d1ff80;
                    /* try { // try from 00519f64 to 00519f6f has its CatchHandler @ 00519fb4 */
  FUN_004c55b4(puVar1 + 3,param_2);
                    /* try { // try from 00519f74 to 00519f7b has its CatchHandler @ 00519f9c */
  FUN_004c55b4(puVar1 + 6,param_3);
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  auVar2._8_8_ = puVar1;
  auVar2._0_8_ = puVar1 + 3;
  return auVar2;
}


// ===== 00519fd0  FUN_00519fd0 =====

void FUN_00519fd0(char *param_1,char *param_2,undefined8 *param_3)

{
  char *__s;
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
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
  char acStack_148 [256];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uStack_188 = param_3[1];
  local_190 = *param_3;
  uStack_178 = param_3[3];
  uStack_180 = param_3[2];
  local_170 = local_190;
  uStack_168 = uStack_188;
  uStack_160 = uStack_180;
  uStack_158 = uStack_178;
  uVar2 = vsnprintf(acStack_148,0x100,param_2,&local_190);
  lVar4 = (long)(int)uVar2;
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  if (uVar2 < 0x100) {
                    /* try { // try from 0051a034 to 0051a043 has its CatchHandler @ 0051a0e4 */
    FUN_00547b08(param_1,acStack_148,lVar4);
  }
  else {
                    /* try { // try from 0051a048 to 0051a0e3 has its CatchHandler @ 0051a0e8 */
    FUN_0051a118(param_1,lVar4);
    uStack_1a8 = param_3[1];
    local_1b0 = *param_3;
    uStack_198 = param_3[3];
    uStack_1a0 = param_3[2];
    __s = *(char **)param_1;
    if (-1 < param_1[0x17]) {
      __s = param_1;
    }
    uVar3 = vsnprintf(__s,lVar4 + 1,param_2,&local_1b0);
    if (uVar3 != uVar2) {
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/src/filesystem/filesystem_common.h"
                   ,0x59,"static_cast<size_t>(ret) == (size_with_null - 1)",&DAT_001d06b4);
      }
      goto LAB_0051a114;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_0051a114:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0051a118  FUN_0051a118 =====

void FUN_0051a118(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  byte bVar2;
  char cVar3;
  undefined8 *puVar4;
  long lVar5;
  
  bVar2 = *(byte *)((long)param_1 + 0x17);
  uVar1 = param_1[1];
  if (-1 < (char)bVar2) {
    uVar1 = (ulong)bVar2;
  }
  if (uVar1 < param_2) {
    lVar5 = (param_1[2] & 0x7fffffffffffffff) - 1;
    if (-1 < (char)bVar2) {
      lVar5 = 0x16;
    }
    if (lVar5 - uVar1 < param_2 - uVar1) {
      FUN_0054774c(param_1,lVar5,param_2 - lVar5,uVar1,uVar1,0,0);
      cVar3 = *(char *)((long)param_1 + 0x17);
    }
    else {
      cVar3 = (char)((ulong)param_1[2] >> 0x38);
    }
    puVar4 = (undefined8 *)*param_1;
    if (-1 < cVar3) {
      if (0x16 < param_2) {
                    /* try { // try from 0051a20c to 0051a233 has its CatchHandler @ 0051a234 */
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                   "__s < __min_cap",
                   "__s should never be greater than or equal to the short string capacity");
      }
LAB_0051a1c4:
      *(char *)((long)param_1 + 0x17) = (char)param_2;
      puVar4 = param_1;
      goto LAB_0051a1d4;
    }
  }
  else {
    if (-1 < (char)bVar2) {
      if (0x16 < param_2) {
                    /* try { // try from 0051a1e4 to 0051a20b has its CatchHandler @ 0051a238 */
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                   "__s < __min_cap",
                   "__s should never be greater than or equal to the short string capacity");
      }
      goto LAB_0051a1c4;
    }
    puVar4 = (undefined8 *)*param_1;
  }
  param_1[1] = param_2;
LAB_0051a1d4:
  *(undefined1 *)((long)puVar4 + param_2) = 0;
  return;
}


// ===== 0051a23c  FUN_0051a23c =====

void FUN_0051a23c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1ffd0;
  FUN_005466c0();
  return;
}


// ===== 0051a24c  FUN_0051a24c =====

void FUN_0051a24c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1ffd0;
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 0051a27c  FUN_0051a27c =====

void FUN_0051a27c(long param_1)

{
                    /* try { // try from 0051a288 to 0051a28b has its CatchHandler @ 0051a294 */
  FUN_0051a29c(param_1 + 0x18);
  return;
}


// ===== 0051a298  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0051a29c  FUN_0051a29c =====

void FUN_0051a29c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x3f,"__loc != nullptr","null pointer given to destroy_at");
  }
  FUN_0051a344();
  puVar1 = (undefined8 *)param_1[2];
  puVar3 = (undefined8 *)param_1[1];
  if ((undefined8 *)param_1[1] != puVar1) {
    do {
      puVar4 = puVar3 + 1;
      operator_delete((void *)*puVar3);
      puVar3 = puVar4;
    } while (puVar4 != puVar1);
    lVar2 = param_1[2];
    if (lVar2 != param_1[1]) {
      param_1[2] = lVar2 + ((param_1[1] - lVar2) + 7U & 0xfffffffffffffff8);
    }
  }
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    return;
  }
  return;
}


// ===== 0051a344  FUN_0051a344 =====

void FUN_0051a344(long param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar5;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  if (puVar5 != puVar2) {
    uVar6 = *(ulong *)(param_1 + 0x20);
    uVar4 = *(long *)(param_1 + 0x28) + uVar6;
    plVar8 = puVar2 + uVar6 / 0x24;
    plVar7 = (long *)(*plVar8 + (uVar6 % 0x24) * 0x70);
    plVar9 = (long *)(puVar2[uVar4 / 0x24] + (uVar4 % 0x24) * 0x70);
    if (plVar7 != plVar9) {
      do {
        if (plVar7 == (long *)0x0) {
                    /* try { // try from 0051a4a4 to 0051a4cb has its CatchHandler @ 0051a4cc */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                     ,0x3f,"__loc != nullptr","null pointer given to destroy_at");
        }
        if (*plVar7 != 0) {
          FUN_005197b0(plVar7);
        }
        if (*(char *)((long)plVar7 + 0x37) < '\0') {
          operator_delete((void *)plVar7[4]);
          cVar1 = *(char *)((long)plVar7 + 0x1f);
        }
        else {
          cVar1 = *(char *)((long)plVar7 + 0x1f);
        }
        if (cVar1 < '\0') {
          operator_delete((void *)plVar7[1]);
        }
        plVar7 = plVar7 + 0xe;
        if ((long)plVar7 - *plVar8 == 0xfc0) {
          plVar8 = plVar8 + 1;
          plVar7 = (long *)*plVar8;
        }
      } while (plVar7 != plVar9);
      puVar2 = *(undefined8 **)(param_1 + 8);
      puVar5 = *(undefined8 **)(param_1 + 0x10);
    }
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  uVar4 = (long)puVar5 - (long)puVar2;
  while (0x10 < uVar4) {
    operator_delete((void *)*puVar2);
    puVar2 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
    *(undefined8 **)(param_1 + 8) = puVar2;
    uVar4 = *(long *)(param_1 + 0x10) - (long)puVar2;
  }
  if (uVar4 >> 3 == 1) {
    uVar3 = 0x12;
  }
  else {
    if (uVar4 >> 3 != 2) {
      return;
    }
    uVar3 = 0x24;
  }
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  return;
}


// ===== 0051a4d0  FUN_0051a4d0 =====

void FUN_0051a4d0(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar2 = *(long *)(param_1 + 8);
  lVar5 = *(long *)(param_1 + 0x10);
  lVar3 = 0;
  if (lVar5 != lVar2) {
    lVar3 = (lVar5 - lVar2 >> 3) * 0x24 + -1;
  }
  if (lVar3 == *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) {
    FUN_0051a5ec(param_1);
    lVar2 = *(long *)(param_1 + 8);
    lVar5 = *(long *)(param_1 + 0x10);
  }
  if (lVar5 != lVar2) {
    uVar1 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
    lVar3 = *(long *)(lVar2 + (uVar1 / 0x24) * 8);
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)(lVar3 + (uVar1 % 0x24) * 0x70);
      *puVar4 = *param_2;
      uVar7 = param_2[2];
      uVar6 = param_2[1];
      puVar4[3] = param_2[3];
      puVar4[2] = uVar7;
      puVar4[1] = uVar6;
      uVar7 = param_2[4];
      param_2[2] = 0;
      param_2[3] = 0;
      uVar6 = param_2[6];
      param_2[1] = 0;
      puVar4[5] = param_2[5];
      puVar4[4] = uVar7;
      puVar4[6] = uVar6;
      uVar8 = param_2[10];
      uVar7 = param_2[0xd];
      uVar6 = param_2[0xc];
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[4] = 0;
      uVar10 = param_2[9];
      uVar9 = param_2[8];
      puVar4[0xb] = param_2[0xb];
      puVar4[10] = uVar8;
      puVar4[0xd] = uVar7;
      puVar4[0xc] = uVar6;
      puVar4[9] = uVar10;
      puVar4[8] = uVar9;
      lVar3 = *(long *)(param_1 + 0x28);
      *param_2 = 0;
      *(long *)(param_1 + 0x28) = lVar3 + 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h",
             0x23,"__location != nullptr","null pointer given to construct_at");
}


// ===== 0051a5ec  FUN_0051a5ec =====

void FUN_0051a5ec(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  void *local_68;
  void *local_60;
  void *pvStack_58;
  void *local_50;
  void *pvStack_48;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((ulong)param_1[4] < 0x24) {
    plVar3 = param_1 + 3;
    lVar4 = *plVar3;
    lVar6 = lVar4 - *param_1;
    uVar7 = param_1[2] - param_1[1] >> 3;
    if (uVar7 < (ulong)(lVar6 >> 3)) {
      if (lVar4 == param_1[2]) {
        local_60 = operator_new(0xfc0);
        FUN_0051ab68(param_1,&local_60);
        local_60 = *(void **)param_1[1];
        param_1[1] = (long)((undefined8 *)param_1[1] + 1);
        goto LAB_0051a630;
      }
      local_60 = operator_new(0xfc0);
      FUN_0051a9b8(param_1,&local_60);
    }
    else {
      uVar5 = lVar6 >> 2;
      if (lVar4 == *param_1) {
        uVar5 = 1;
      }
      local_40 = plVar3;
      if (uVar5 >> 0x3d != 0) {
        if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
          FUN_00401ad4();
        }
        goto LAB_0051a804;
      }
      local_60 = operator_new(uVar5 * 8);
      pvStack_58 = (void *)((long)local_60 + uVar7 * 8);
      pvStack_48 = (void *)((long)local_60 + uVar5 * 8);
      local_50 = pvStack_58;
                    /* try { // try from 0051a6bc to 0051a6c3 has its CatchHandler @ 0051a7b8 */
      local_68 = operator_new(0xfc0);
                    /* try { // try from 0051a6cc to 0051a6d7 has its CatchHandler @ 0051a7a8 */
      FUN_0051ad00(&local_60,&local_68);
      lVar6 = param_1[2];
      lVar4 = -7 - lVar6;
      while (lVar6 != param_1[1]) {
        lVar6 = lVar6 + -8;
        lVar4 = lVar4 + 8;
                    /* try { // try from 0051a6f8 to 0051a703 has its CatchHandler @ 0051a7bc */
        FUN_0051aeb0(&local_60,lVar6);
      }
      lVar9 = param_1[3];
      lVar8 = param_1[2];
      pvVar2 = (void *)*param_1;
      param_1[1] = (long)pvStack_58;
      *param_1 = (long)local_60;
      param_1[3] = (long)pvStack_48;
      param_1[2] = (long)local_50;
      local_50 = (void *)lVar8;
      if (lVar6 != lVar8) {
        local_50 = (void *)(lVar8 + (-(lVar8 + lVar4) & 0xfffffffffffffff8U));
      }
      local_60 = pvVar2;
      pvStack_58 = (void *)lVar6;
      pvStack_48 = (void *)lVar9;
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2);
      }
    }
  }
  else {
    param_1[4] = param_1[4] - 0x24;
    local_60 = *(void **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
LAB_0051a630:
    FUN_0051a808(param_1,&local_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_0051a804:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0051a808  FUN_0051a808 =====

void FUN_0051a808(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *__src;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar11 = (undefined8 *)param_1[2];
  if (puVar11 != (undefined8 *)param_1[3]) goto LAB_0051a95c;
  puVar2 = (undefined8 *)*param_1;
  __src = (undefined8 *)param_1[1];
  if (puVar2 <= __src && (long)__src - (long)puVar2 != 0) {
    lVar6 = (long)__src - (long)puVar2 >> 3;
    uVar7 = lVar6 + 2;
    if (-1 < lVar6 + 1) {
      uVar7 = lVar6 + 1;
    }
    uVar7 = uVar7 >> 1;
    memmove(__src + -uVar7,__src,(long)puVar11 - (long)__src);
    puVar11 = puVar11 + -uVar7;
    param_1[1] = param_1[1] + uVar7 * -8;
    param_1[2] = puVar11;
    goto LAB_0051a95c;
  }
  uVar7 = (long)puVar11 - (long)puVar2 >> 2;
  if ((long)puVar11 - (long)puVar2 == 0) {
    uVar7 = 1;
  }
  if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00401ad4();
  }
  uVar12 = uVar7 >> 2;
  pvVar5 = operator_new(uVar7 * 8);
  puVar1 = (undefined8 *)((long)pvVar5 + uVar12 * 8);
  uVar3 = (long)puVar11 - (long)__src;
  puVar11 = puVar1;
  if (uVar3 != 0) {
    puVar11 = (undefined8 *)((long)puVar1 + (uVar3 & 0xfffffffffffffff8));
    puVar8 = puVar1;
    if ((0x37 < uVar3 - 8) && (0x1f < (long)pvVar5 + (uVar12 * 8 - (long)__src))) {
      puVar8 = __src + 2;
      uVar3 = (uVar3 - 8 >> 3) + 1;
      puVar10 = (undefined8 *)((long)pvVar5 + uVar12 * 8 + 0x10);
      uVar9 = uVar3 & 0x3ffffffffffffffc;
      __src = __src + uVar9;
      uVar12 = uVar9;
      do {
        puVar4 = puVar8 + -1;
        uVar13 = puVar8[-2];
        uVar15 = puVar8[1];
        uVar14 = *puVar8;
        puVar8 = puVar8 + 4;
        uVar12 = uVar12 - 4;
        puVar10[-1] = *puVar4;
        puVar10[-2] = uVar13;
        puVar10[1] = uVar15;
        *puVar10 = uVar14;
        puVar10 = puVar10 + 4;
      } while (uVar12 != 0);
      puVar8 = puVar1 + uVar9;
      if (uVar3 == uVar9) goto LAB_0051a944;
    }
    do {
      puVar10 = puVar8 + 1;
      *puVar8 = *__src;
      puVar8 = puVar10;
      __src = __src + 1;
    } while (puVar10 != puVar11);
  }
LAB_0051a944:
  *param_1 = pvVar5;
  param_1[1] = puVar1;
  param_1[2] = puVar11;
  param_1[3] = (void *)((long)pvVar5 + uVar7 * 8);
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2);
    puVar11 = (undefined8 *)param_1[2];
  }
LAB_0051a95c:
  if (puVar11 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x23,"__location != nullptr","null pointer given to construct_at");
  }
  *puVar11 = *param_2;
  param_1[2] = param_1[2] + 8;
  return;
}


// ===== 0051a9b8  FUN_0051a9b8 =====

void FUN_0051a9b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *__src;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar11 = (undefined8 *)param_1[2];
  if (puVar11 != (undefined8 *)param_1[3]) goto LAB_0051ab0c;
  puVar2 = (undefined8 *)*param_1;
  __src = (undefined8 *)param_1[1];
  if (puVar2 <= __src && (long)__src - (long)puVar2 != 0) {
    lVar6 = (long)__src - (long)puVar2 >> 3;
    uVar7 = lVar6 + 2;
    if (-1 < lVar6 + 1) {
      uVar7 = lVar6 + 1;
    }
    uVar7 = uVar7 >> 1;
    memmove(__src + -uVar7,__src,(long)puVar11 - (long)__src);
    puVar11 = puVar11 + -uVar7;
    param_1[1] = param_1[1] + uVar7 * -8;
    param_1[2] = puVar11;
    goto LAB_0051ab0c;
  }
  uVar7 = (long)puVar11 - (long)puVar2 >> 2;
  if ((long)puVar11 - (long)puVar2 == 0) {
    uVar7 = 1;
  }
  if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00401ad4();
  }
  uVar12 = uVar7 >> 2;
  pvVar5 = operator_new(uVar7 * 8);
  puVar1 = (undefined8 *)((long)pvVar5 + uVar12 * 8);
  uVar3 = (long)puVar11 - (long)__src;
  puVar11 = puVar1;
  if (uVar3 != 0) {
    puVar11 = (undefined8 *)((long)puVar1 + (uVar3 & 0xfffffffffffffff8));
    puVar8 = puVar1;
    if ((0x37 < uVar3 - 8) && (0x1f < (long)pvVar5 + (uVar12 * 8 - (long)__src))) {
      puVar8 = __src + 2;
      uVar3 = (uVar3 - 8 >> 3) + 1;
      puVar10 = (undefined8 *)((long)pvVar5 + uVar12 * 8 + 0x10);
      uVar9 = uVar3 & 0x3ffffffffffffffc;
      __src = __src + uVar9;
      uVar12 = uVar9;
      do {
        puVar4 = puVar8 + -1;
        uVar13 = puVar8[-2];
        uVar15 = puVar8[1];
        uVar14 = *puVar8;
        puVar8 = puVar8 + 4;
        uVar12 = uVar12 - 4;
        puVar10[-1] = *puVar4;
        puVar10[-2] = uVar13;
        puVar10[1] = uVar15;
        *puVar10 = uVar14;
        puVar10 = puVar10 + 4;
      } while (uVar12 != 0);
      puVar8 = puVar1 + uVar9;
      if (uVar3 == uVar9) goto LAB_0051aaf4;
    }
    do {
      puVar10 = puVar8 + 1;
      *puVar8 = *__src;
      puVar8 = puVar10;
      __src = __src + 1;
    } while (puVar10 != puVar11);
  }
LAB_0051aaf4:
  *param_1 = pvVar5;
  param_1[1] = puVar1;
  param_1[2] = puVar11;
  param_1[3] = (void *)((long)pvVar5 + uVar7 * 8);
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2);
    puVar11 = (undefined8 *)param_1[2];
  }
LAB_0051ab0c:
  if (puVar11 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x23,"__location != nullptr","null pointer given to construct_at");
  }
  *puVar11 = *param_2;
  param_1[2] = param_1[2] + 8;
  return;
}


// ===== 0051ab68  FUN_0051ab68 =====

void FUN_0051ab68(long *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  size_t __n;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *__src;
  undefined8 *__dest;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  __src = (undefined8 *)param_1[1];
  __dest = __src;
  if (__src != (undefined8 *)*param_1) goto LAB_0051acd0;
  uVar2 = param_1[2];
  uVar11 = param_1[3];
  if (uVar2 < uVar11) {
    lVar4 = (long)(uVar11 - uVar2) >> 3;
    lVar1 = lVar4 + 2;
    if (-1 < lVar4 + 1) {
      lVar1 = lVar4 + 1;
    }
    __n = uVar2 - (long)__src;
    __dest = (undefined8 *)(uVar2 + (lVar1 >> 1) * 8);
    if (__n != 0) {
      __dest = (undefined8 *)((long)__dest - __n);
      memmove(__dest,__src,__n);
      __src = (undefined8 *)param_1[2];
    }
    param_1[1] = (long)__dest;
    param_1[2] = (long)(__src + (lVar1 >> 1));
    goto LAB_0051acd0;
  }
  uVar5 = (long)(uVar11 - (long)__src) >> 2;
  if (uVar11 - (long)__src == 0) {
    uVar5 = 1;
  }
  if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00401ad4();
  }
  uVar11 = uVar5 + 3 >> 2;
  pvVar3 = operator_new(uVar5 * 8);
  __dest = (undefined8 *)((long)pvVar3 + uVar11 * 8);
  uVar2 = uVar2 - (long)__src;
  puVar6 = __dest;
  if (uVar2 != 0) {
    puVar6 = (undefined8 *)((long)__dest + (uVar2 & 0xfffffffffffffff8));
    puVar7 = __dest;
    puVar9 = __src;
    if ((0x37 < uVar2 - 8) && (0x1f < (long)pvVar3 + (uVar11 * 8 - (long)__src))) {
      puVar7 = __src + 2;
      uVar2 = (uVar2 - 8 >> 3) + 1;
      puVar9 = (undefined8 *)((long)pvVar3 + uVar11 * 8 + 0x10);
      uVar10 = uVar2 & 0x3ffffffffffffffc;
      uVar11 = uVar10;
      do {
        puVar8 = puVar7 + -1;
        uVar12 = puVar7[-2];
        uVar14 = puVar7[1];
        uVar13 = *puVar7;
        puVar7 = puVar7 + 4;
        uVar11 = uVar11 - 4;
        puVar9[-1] = *puVar8;
        puVar9[-2] = uVar12;
        puVar9[1] = uVar14;
        *puVar9 = uVar13;
        puVar9 = puVar9 + 4;
      } while (uVar11 != 0);
      puVar7 = __dest + uVar10;
      puVar9 = __src + uVar10;
      if (uVar2 == uVar10) goto LAB_0051acb8;
    }
    do {
      puVar8 = puVar7 + 1;
      *puVar7 = *puVar9;
      puVar7 = puVar8;
      puVar9 = puVar9 + 1;
    } while (puVar8 != puVar6);
  }
LAB_0051acb8:
  *param_1 = (long)pvVar3;
  param_1[1] = (long)__dest;
  param_1[2] = (long)puVar6;
  param_1[3] = (long)((long)pvVar3 + uVar5 * 8);
  if (__src != (undefined8 *)0x0) {
    operator_delete(__src);
    __dest = (undefined8 *)param_1[1];
  }
LAB_0051acd0:
  __dest[-1] = *param_2;
  param_1[1] = param_1[1] + -8;
  return;
}


// ===== 0051ad00  FUN_0051ad00 =====

void FUN_0051ad00(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *__src;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar11 = (undefined8 *)param_1[2];
  if (puVar11 != (undefined8 *)param_1[3]) goto LAB_0051ae54;
  puVar2 = (undefined8 *)*param_1;
  __src = (undefined8 *)param_1[1];
  if (puVar2 <= __src && (long)__src - (long)puVar2 != 0) {
    lVar6 = (long)__src - (long)puVar2 >> 3;
    uVar7 = lVar6 + 2;
    if (-1 < lVar6 + 1) {
      uVar7 = lVar6 + 1;
    }
    uVar7 = uVar7 >> 1;
    memmove(__src + -uVar7,__src,(long)puVar11 - (long)__src);
    puVar11 = puVar11 + -uVar7;
    param_1[1] = param_1[1] + uVar7 * -8;
    param_1[2] = puVar11;
    goto LAB_0051ae54;
  }
  uVar7 = (long)puVar11 - (long)puVar2 >> 2;
  if ((long)puVar11 - (long)puVar2 == 0) {
    uVar7 = 1;
  }
  if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00401ad4();
  }
  uVar12 = uVar7 >> 2;
  pvVar5 = operator_new(uVar7 * 8);
  puVar1 = (undefined8 *)((long)pvVar5 + uVar12 * 8);
  uVar3 = (long)puVar11 - (long)__src;
  puVar11 = puVar1;
  if (uVar3 != 0) {
    puVar11 = (undefined8 *)((long)puVar1 + (uVar3 & 0xfffffffffffffff8));
    puVar8 = puVar1;
    if ((0x37 < uVar3 - 8) && (0x1f < (long)pvVar5 + (uVar12 * 8 - (long)__src))) {
      puVar8 = __src + 2;
      uVar3 = (uVar3 - 8 >> 3) + 1;
      puVar10 = (undefined8 *)((long)pvVar5 + uVar12 * 8 + 0x10);
      uVar9 = uVar3 & 0x3ffffffffffffffc;
      __src = __src + uVar9;
      uVar12 = uVar9;
      do {
        puVar4 = puVar8 + -1;
        uVar13 = puVar8[-2];
        uVar15 = puVar8[1];
        uVar14 = *puVar8;
        puVar8 = puVar8 + 4;
        uVar12 = uVar12 - 4;
        puVar10[-1] = *puVar4;
        puVar10[-2] = uVar13;
        puVar10[1] = uVar15;
        *puVar10 = uVar14;
        puVar10 = puVar10 + 4;
      } while (uVar12 != 0);
      puVar8 = puVar1 + uVar9;
      if (uVar3 == uVar9) goto LAB_0051ae3c;
    }
    do {
      puVar10 = puVar8 + 1;
      *puVar8 = *__src;
      puVar8 = puVar10;
      __src = __src + 1;
    } while (puVar10 != puVar11);
  }
LAB_0051ae3c:
  *param_1 = pvVar5;
  param_1[1] = puVar1;
  param_1[2] = puVar11;
  param_1[3] = (void *)((long)pvVar5 + uVar7 * 8);
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2);
    puVar11 = (undefined8 *)param_1[2];
  }
LAB_0051ae54:
  if (puVar11 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x23,"__location != nullptr","null pointer given to construct_at");
  }
  *puVar11 = *param_2;
  param_1[2] = param_1[2] + 8;
  return;
}


// ===== 0051aeb0  FUN_0051aeb0 =====

void FUN_0051aeb0(long *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  size_t __n;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *__src;
  undefined8 *__dest;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  __src = (undefined8 *)param_1[1];
  __dest = __src;
  if (__src != (undefined8 *)*param_1) goto LAB_0051b018;
  uVar2 = param_1[2];
  uVar11 = param_1[3];
  if (uVar2 < uVar11) {
    lVar4 = (long)(uVar11 - uVar2) >> 3;
    lVar1 = lVar4 + 2;
    if (-1 < lVar4 + 1) {
      lVar1 = lVar4 + 1;
    }
    __n = uVar2 - (long)__src;
    __dest = (undefined8 *)(uVar2 + (lVar1 >> 1) * 8);
    if (__n != 0) {
      __dest = (undefined8 *)((long)__dest - __n);
      memmove(__dest,__src,__n);
      __src = (undefined8 *)param_1[2];
    }
    param_1[1] = (long)__dest;
    param_1[2] = (long)(__src + (lVar1 >> 1));
    goto LAB_0051b018;
  }
  uVar5 = (long)(uVar11 - (long)__src) >> 2;
  if (uVar11 - (long)__src == 0) {
    uVar5 = 1;
  }
  if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00401ad4();
  }
  uVar11 = uVar5 + 3 >> 2;
  pvVar3 = operator_new(uVar5 * 8);
  __dest = (undefined8 *)((long)pvVar3 + uVar11 * 8);
  uVar2 = uVar2 - (long)__src;
  puVar6 = __dest;
  if (uVar2 != 0) {
    puVar6 = (undefined8 *)((long)__dest + (uVar2 & 0xfffffffffffffff8));
    puVar7 = __dest;
    puVar9 = __src;
    if ((0x37 < uVar2 - 8) && (0x1f < (long)pvVar3 + (uVar11 * 8 - (long)__src))) {
      puVar7 = __src + 2;
      uVar2 = (uVar2 - 8 >> 3) + 1;
      puVar9 = (undefined8 *)((long)pvVar3 + uVar11 * 8 + 0x10);
      uVar10 = uVar2 & 0x3ffffffffffffffc;
      uVar11 = uVar10;
      do {
        puVar8 = puVar7 + -1;
        uVar12 = puVar7[-2];
        uVar14 = puVar7[1];
        uVar13 = *puVar7;
        puVar7 = puVar7 + 4;
        uVar11 = uVar11 - 4;
        puVar9[-1] = *puVar8;
        puVar9[-2] = uVar12;
        puVar9[1] = uVar14;
        *puVar9 = uVar13;
        puVar9 = puVar9 + 4;
      } while (uVar11 != 0);
      puVar7 = __dest + uVar10;
      puVar9 = __src + uVar10;
      if (uVar2 == uVar10) goto LAB_0051b000;
    }
    do {
      puVar8 = puVar7 + 1;
      *puVar7 = *puVar9;
      puVar7 = puVar8;
      puVar9 = puVar9 + 1;
    } while (puVar8 != puVar6);
  }
LAB_0051b000:
  *param_1 = (long)pvVar3;
  param_1[1] = (long)__dest;
  param_1[2] = (long)puVar6;
  param_1[3] = (long)((long)pvVar3 + uVar5 * 8);
  if (__src != (undefined8 *)0x0) {
    operator_delete(__src);
    __dest = (undefined8 *)param_1[1];
  }
LAB_0051b018:
  __dest[-1] = *param_2;
  param_1[1] = param_1[1] + -8;
  return;
}


// ===== 0051b048  FUN_0051b048 =====

void FUN_0051b048(long param_1)

{
  long lVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/deque",0xa18,"!empty()",
               "deque::pop_back called on an empty deque");
  }
  uVar4 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
  lVar6 = *(long *)(*(long *)(param_1 + 8) + (uVar4 / 0x24) * 8);
  if (lVar6 != 0) {
    uVar4 = uVar4 % 0x24;
    plVar5 = (long *)(lVar6 + uVar4 * 0x70);
    if (*plVar5 != 0) {
      FUN_005197b0(plVar5);
    }
    if (*(char *)((long)plVar5 + 0x37) < '\0') {
      operator_delete(*(void **)(lVar6 + uVar4 * 0x70 + 0x20));
      cVar3 = *(char *)((long)plVar5 + 0x1f);
    }
    else {
      cVar3 = *(char *)((long)plVar5 + 0x1f);
    }
    if (cVar3 < '\0') {
      operator_delete(*(void **)(lVar6 + uVar4 * 0x70 + 8));
    }
    lVar1 = *(long *)(param_1 + 0x10);
    lVar2 = *(long *)(param_1 + 0x28);
    lVar6 = 0;
    if (lVar1 != *(long *)(param_1 + 8)) {
      lVar6 = (lVar1 - *(long *)(param_1 + 8) >> 3) * 0x24 + -1;
    }
    *(long *)(param_1 + 0x28) = lVar2 + -1;
    if (0x47 < (lVar6 - (lVar2 + *(long *)(param_1 + 0x20))) + 1U) {
      operator_delete(*(void **)(lVar1 + -8));
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -8;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h",
             0x3f,"__loc != nullptr","null pointer given to destroy_at");
}


// ===== 0051b1a4  FUN_0051b1a4 =====

void FUN_0051b1a4(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)param_1[5];
  *param_1 = &PTR_FUN_00d20020;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_005466cc(plVar5);
    }
  }
  thunk_FUN_00552450(param_1);
  return;
}


// ===== 0051b208  FUN_0051b208 =====

void FUN_0051b208(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)param_1[5];
  *param_1 = &PTR_FUN_00d20020;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_005466cc(plVar5);
    }
  }
  thunk_FUN_00552450(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0051b274  FUN_0051b274 =====

void FUN_0051b274(long param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar4 = FUN_005524f8();
  if (param_2 == 2) {
    plVar5 = *(long **)(param_1 + 0x20);
    plVar1 = (long *)*plVar5;
    if (-1 < *(char *)((long)plVar5 + 0x17)) {
      plVar1 = plVar5;
    }
    plVar2 = (long *)plVar5[3];
    if (-1 < *(char *)((long)plVar5 + 0x2f)) {
      plVar2 = plVar5 + 3;
    }
    FUN_0051e8b8(&local_50,"filesystem error: %s [\"%s\"] [\"%s\"]",uVar4,plVar1,plVar2);
  }
  else if (param_2 == 1) {
    plVar5 = *(long **)(param_1 + 0x20);
    plVar1 = (long *)*plVar5;
    if (-1 < *(char *)((long)plVar5 + 0x17)) {
      plVar1 = plVar5;
    }
    FUN_0051e8b8(&local_50,"filesystem error: %s [\"%s\"]",uVar4,plVar1);
  }
  else {
    FUN_0051e8b8(&local_50,"filesystem error: %s",uVar4);
  }
  lVar6 = *(long *)(param_1 + 0x20);
  if (*(char *)(lVar6 + 0x47) < '\0') {
    operator_delete(*(void **)(lVar6 + 0x30));
  }
  *(undefined8 *)(lVar6 + 0x38) = uStack_48;
  *(undefined8 *)(lVar6 + 0x30) = local_50;
  *(undefined8 *)(lVar6 + 0x40) = local_40;
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0051b374  FUN_0051b374 =====

void FUN_0051b374(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x1;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_4 != (int *)0x0) {
    *param_4 = 0;
    uVar2 = FUN_00549d28();
    *(undefined8 *)(param_4 + 2) = uVar2;
  }
  FUN_0051d5a4(param_2);
  if (extraout_x1 == 0) {
    FUN_0051c188(&local_60,param_4);
    if (*(char *)((long)param_3 + 0x17) < '\0') {
      operator_delete((void *)*param_3);
    }
    param_3[1] = uStack_58;
    *param_3 = local_60;
    param_3[2] = local_50;
    if ((param_4 == (int *)0x0) || (*param_4 == 0)) {
      FUN_004c55b4(param_1,param_3);
                    /* try { // try from 0051b444 to 0051b44f has its CatchHandler @ 0051b478 */
      FUN_004b1f38(param_1,param_2);
    }
    else {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_48) {
    FUN_004c55b4(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0051b4a8  FUN_0051b4a8 =====

/* WARNING: Removing unreachable block (ram,0x0051b5cc) */

void FUN_0051b4a8(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  char ***__name;
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  char *__ptr;
  uint *puVar4;
  char *pcVar5;
  ulong local_98;
  undefined8 uStack_90;
  char **local_88 [2];
  char local_71;
  char *local_70;
  undefined4 *puStack_68;
  undefined8 local_60;
  undefined8 *puStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  puStack_58 = &local_50;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_70 = "canonical";
  puStack_68 = param_3;
  local_60 = param_2;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
    uVar3 = FUN_00549d28();
    *(undefined8 *)(param_3 + 2) = uVar3;
  }
                    /* try { // try from 0051b500 to 0051b517 has its CatchHandler @ 0051b630 */
  FUN_0051b374(local_88,param_2,&local_50,param_3);
  __name = (char ***)local_88[0];
  if (-1 < local_71) {
    __name = local_88;
  }
  __ptr = realpath((char *)__name,(char *)0x0);
  if (__ptr == (char *)0x0) {
    puVar4 = (uint *)__errno();
    uVar1 = *puVar4;
    if (uVar1 == 0) {
      if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/src/filesystem/filesystem_common.h"
                   ,0x72,"errno != 0","Expected errno to be non-zero");
      }
      goto LAB_0051b674;
    }
    uStack_90 = FUN_00549b1c();
                    /* try { // try from 0051b578 to 0051b60f has its CatchHandler @ 0051b638 */
    local_98 = (ulong)uVar1;
    FUN_0051b678(param_1,&local_70,&local_98);
  }
  else {
    pcVar5 = __ptr + -1;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    do {
      pcVar5 = pcVar5 + 1;
    } while (*pcVar5 != '\0');
                    /* try { // try from 0051b54c to 0051b557 has its CatchHandler @ 0051b610 */
    FUN_004b2050(param_1,__ptr);
    free(__ptr);
  }
  if (local_71 < '\0') {
    operator_delete(local_88[0]);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_0051b674:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0051b678  FUN_0051b678 =====

/* WARNING: Removing unreachable block (ram,0x0051b794) */

void FUN_0051b678(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  void *local_58 [2];
  char local_41;
  undefined1 local_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  puVar4 = (undefined8 *)param_2[1];
  if (puVar4 != (undefined8 *)0x0) {
    uVar3 = *param_3;
    puVar4[1] = param_3[1];
    *puVar4 = uVar3;
    if (*(long *)(lVar1 + 0x28) == local_28) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      return;
    }
    goto LAB_0051b7cc;
  }
  FUN_004a3cf4(local_58,&DAT_001a8e55);
                    /* try { // try from 0051b6ec to 0051b6f7 has its CatchHandler @ 0051b79c */
  FUN_00519840(local_40,local_58,*param_2);
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  cVar2 = param_2[2] != 0;
  if (param_2[3] != 0) {
    cVar2 = cVar2 + '\x01';
  }
  if (cVar2 == '\0') {
LAB_0051b748:
    if (*(long *)(lVar1 + 0x28) != local_28) goto LAB_0051b7cc;
    FUN_005198c8(local_40,param_3);
  }
  else if (cVar2 == '\x01') {
    if (*(long *)(lVar1 + 0x28) != local_28) goto LAB_0051b7cc;
                    /* try { // try from 0051b73c to 0051b787 has its CatchHandler @ 0051b788 */
    FUN_00519924(local_40,param_2[2],param_3);
    goto LAB_0051b748;
  }
                    /* catch() { ... } // from try @ 0051b73c with catch @ 0051b788 */
  if ((*(long *)(lVar1 + 0x28) == local_28) &&
     (uVar3 = FUN_00519988(local_40), *(long *)(lVar1 + 0x28) == local_28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00d0fa5c(uVar3);
  }
LAB_0051b7cc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0051b7d0  FUN_0051b7d0 =====

void FUN_0051b7d0(undefined8 param_1,char *param_2,stat *param_3,undefined8 param_4)

{
  char *__file;
  uint uVar1;
  long lVar2;
  int iVar3;
  uint *puVar4;
  ulong local_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_58 = local_58 & 0xffffffff00000000;
  local_50 = FUN_00549d28();
  __file = *(char **)param_2;
  if (-1 < param_2[0x17]) {
    __file = param_2;
  }
  iVar3 = lstat(__file,param_3);
  if (iVar3 == -1) {
    puVar4 = (uint *)__errno();
    uVar1 = *puVar4;
    if (uVar1 == 0) {
      if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/src/filesystem/filesystem_common.h"
                   ,0x72,"errno != 0","Expected errno to be non-zero");
      }
      goto LAB_0051b8c0;
    }
    local_50 = FUN_00549b1c();
    local_58 = (ulong)uVar1;
  }
  FUN_0051eafc(param_1,&local_58,param_2,param_3,param_4);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_0051b8c0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0051b8c4  FUN_0051b8c4 =====

void FUN_0051b8c4(undefined8 param_1,char *param_2,stat *param_3,undefined8 param_4)

{
  char *__file;
  uint uVar1;
  long lVar2;
  int iVar3;
  uint *puVar4;
  ulong local_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_58 = local_58 & 0xffffffff00000000;
  local_50 = FUN_00549d28();
  __file = *(char **)param_2;
  if (-1 < param_2[0x17]) {
    __file = param_2;
  }
  iVar3 = stat(__file,param_3);
  if (iVar3 == -1) {
    puVar4 = (uint *)__errno();
    uVar1 = *puVar4;
    if (uVar1 == 0) {
      if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/src/filesystem/filesystem_common.h"
                   ,0x72,"errno != 0","Expected errno to be non-zero");
      }
      goto LAB_0051b9b4;
    }
    local_50 = FUN_00549b1c();
    local_58 = (ulong)uVar1;
  }
  FUN_0051eafc(param_1,&local_58,param_2,param_3,param_4);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_0051b9b4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0051b9b8  FUN_0051b9b8 =====

/* WARNING: Removing unreachable block (ram,0x0051bac0) */

void FUN_0051b9b8(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  void *local_58 [2];
  char local_41;
  undefined1 local_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  puVar4 = (undefined8 *)param_1[1];
  if (puVar4 != (undefined8 *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_28) {
      uVar3 = *param_2;
      puVar4[1] = param_2[1];
      *puVar4 = uVar3;
      return;
    }
    goto LAB_0051baf8;
  }
  FUN_004a3cf4(local_58,&DAT_001a8e55);
                    /* try { // try from 0051ba24 to 0051ba2f has its CatchHandler @ 0051bac8 */
  FUN_00519840(local_40,local_58,*param_1);
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  cVar2 = param_1[2] != 0;
  if (param_1[3] != 0) {
    cVar2 = cVar2 + '\x01';
  }
  if (cVar2 == '\0') {
LAB_0051ba7c:
    if (*(long *)(lVar1 + 0x28) != local_28) goto LAB_0051baf8;
    FUN_005198c8(local_40,param_2);
  }
  else if (cVar2 == '\x01') {
    if (*(long *)(lVar1 + 0x28) != local_28) goto LAB_0051baf8;
                    /* try { // try from 0051ba74 to 0051bab3 has its CatchHandler @ 0051bab4 */
    FUN_00519924(local_40,param_1[2],param_2);
    goto LAB_0051ba7c;
  }
                    /* catch() { ... } // from try @ 0051ba74 with catch @ 0051bab4 */
  if ((*(long *)(lVar1 + 0x28) == local_28) &&
     (uVar3 = FUN_00519988(local_40), *(long *)(lVar1 + 0x28) == local_28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00d0fa5c(uVar3);
  }
LAB_0051baf8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0051bafc  FUN_0051bafc =====

/* WARNING: Removing unreachable block (ram,0x0051bc04) */

void FUN_0051bafc(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  void *local_58 [2];
  char local_41;
  undefined1 local_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  puVar4 = (undefined8 *)param_1[1];
  if (puVar4 != (undefined8 *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_28) {
      uVar3 = *param_2;
      puVar4[1] = param_2[1];
      *puVar4 = uVar3;
      return;
    }
    goto LAB_0051bc3c;
  }
  FUN_004a3cf4(local_58,&DAT_001a8e55);
                    /* try { // try from 0051bb68 to 0051bb73 has its CatchHandler @ 0051bc0c */
  FUN_00519840(local_40,local_58,*param_1);
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  cVar2 = param_1[2] != 0;
  if (param_1[3] != 0) {
    cVar2 = cVar2 + '\x01';
  }
  if (cVar2 == '\0') {
LAB_0051bbc0:
    if (*(long *)(lVar1 + 0x28) != local_28) goto LAB_0051bc3c;
    FUN_005198c8(local_40,param_2);
  }
  else if (cVar2 == '\x01') {
    if (*(long *)(lVar1 + 0x28) != local_28) goto LAB_0051bc3c;
                    /* try { // try from 0051bbb8 to 0051bbf7 has its CatchHandler @ 0051bbf8 */
    FUN_00519924(local_40,param_1[2],param_2);
    goto LAB_0051bbc0;
  }
                    /* catch() { ... } // from try @ 0051bbb8 with catch @ 0051bbf8 */
  if ((*(long *)(lVar1 + 0x28) == local_28) &&
     (uVar3 = FUN_00519988(local_40), *(long *)(lVar1 + 0x28) == local_28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00d0fa5c(uVar3);
  }
LAB_0051bc3c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0051bc40  FUN_0051bc40 =====

void FUN_0051bc40(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  ulong local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar1 = *param_2;
  uStack_40 = FUN_00549b1c();
  local_48 = (ulong)uVar1;
  FUN_0051bafc(param_1,&local_48);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0051bca4  FUN_0051bca4 =====

uint FUN_0051bca4(undefined8 param_1,int *param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  char local_110 [8];
  void *local_108;
  ulong local_100;
  byte local_f1;
  char local_f0 [8];
  int local_e8 [2];
  undefined8 local_e0;
  char *local_d8;
  int *piStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_d8 = "create_directories";
  uStack_c0 = 0;
  piStack_d0 = param_2;
  local_c8 = param_1;
  if (param_2 != (int *)0x0) {
    *param_2 = 0;
    uVar3 = FUN_00549d28();
    *(undefined8 *)(param_2 + 2) = uVar3;
  }
  local_e8[0] = 0;
  local_e0 = FUN_00549d28();
  FUN_0051b8c4(local_f0,param_1,&local_b8,local_e8);
  if (local_f0[0] != -1) {
    if (local_f0[0] != '\x02') {
      if (local_f0[0] == '\0') {
        piVar5 = local_e8;
      }
      else {
        uStack_b0 = FUN_00549b1c();
        piVar5 = (int *)&local_b8;
        local_b8 = 0x11;
      }
      FUN_0051bafc(&local_d8,piVar5);
    }
    uVar2 = 0;
    goto LAB_0051bdac;
  }
  FUN_0051beb4(&local_108,param_1);
  if (-1 < (char)local_f1) {
    local_100 = (ulong)local_f1;
  }
  if (local_100 == 0) {
LAB_0051be2c:
                    /* try { // try from 0051be2c to 0051be4b has its CatchHandler @ 0051be84 */
    uVar2 = FUN_0051c048(param_1,local_e8);
    if (local_e8[0] != 0) {
      FUN_0051bafc(&local_d8,local_e8);
      goto LAB_0051be4c;
    }
  }
  else {
                    /* try { // try from 0051bd54 to 0051bd67 has its CatchHandler @ 0051be80 */
    FUN_0051b8c4(local_110,&local_108,&local_b8,local_e8);
    if (local_110[0] == -1) {
      uVar4 = FUN_0051bfdc(&local_108,param_1);
      if ((uVar4 & 1) == 0) {
                    /* try { // try from 0051be14 to 0051be1f has its CatchHandler @ 0051be7c */
        FUN_0051bca4(&local_108,param_2);
        if ((param_2 == (int *)0x0) || (*param_2 == 0)) goto LAB_0051be2c;
      }
      else {
        local_b8 = CONCAT44(local_b8._4_4_,0x16);
                    /* try { // try from 0051bdec to 0051bdf7 has its CatchHandler @ 0051be74 */
        FUN_0051bc40(&local_d8,&local_b8);
      }
    }
    else {
      if (local_110[0] == '\x02') goto LAB_0051be2c;
      if (local_110[0] == '\0') {
                    /* try { // try from 0051bd80 to 0051bd8b has its CatchHandler @ 0051be7c */
        FUN_0051bafc(&local_d8,local_e8);
      }
      else {
        local_b8 = CONCAT44(local_b8._4_4_,0x14);
                    /* try { // try from 0051be04 to 0051be0f has its CatchHandler @ 0051be78 */
        FUN_0051bc40(&local_d8,&local_b8);
      }
    }
LAB_0051be4c:
    uVar2 = 0;
  }
  if ((char)local_f1 < '\0') {
    operator_delete(local_108);
  }
LAB_0051bdac:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2 & 1;
}


// ===== 0051beb4  FUN_0051beb4 =====

void FUN_0051beb4(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined1 *__src;
  undefined1 **__dest;
  ulong __n;
  undefined1 auVar3 [16];
  undefined1 *local_60;
  ulong uStack_58;
  undefined8 local_50;
  long local_48;
  
  __dest = &local_60;
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  auVar3 = FUN_0051d6f0();
  __n = auVar3._8_8_;
  __src = auVar3._0_8_;
  if (__n < 0x7ffffffffffffff0) {
    if (__n < 0x17) {
      local_50 = CONCAT17(auVar3[8],(undefined7)local_50);
    }
    else {
      uVar1 = (__n | 0xf) + 1;
      __dest = (undefined1 **)operator_new(uVar1);
      local_50 = uVar1 | 0x8000000000000000;
      local_60 = (undefined1 *)__dest;
      uStack_58 = __n;
    }
    if ((__src < __dest) || ((undefined1 *)((long)__dest + __n) <= __src)) {
      if (__n != 0) {
        memmove(__dest,__src,__n);
      }
      *(undefined1 *)((long)__dest + __n) = 0;
      param_1[1] = uStack_58;
      *param_1 = local_60;
      param_1[2] = local_50;
      if (*(long *)(lVar2 + 0x28) == local_48) {
        return;
      }
    }
    else if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* try { // try from 0051bf94 to 0051bfbb has its CatchHandler @ 0051bfd8 */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
  }
  else if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_004e823c(&local_60);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0051bfdc  FUN_0051bfdc =====

bool FUN_0051bfdc(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  if (puVar2 == (undefined8 *)0x0 && uVar1 != 0) {
                    /* try { // try from 0051c01c to 0051c043 has its CatchHandler @ 0051c044 */
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0x131,
               "__len == 0 || __s != nullptr",
               "string_view::string_view(_CharT *, size_t): received nullptr");
  }
  iVar3 = FUN_0051e4d4();
  return iVar3 == 0;
}


// ===== 0051c048  FUN_0051c048 =====

void FUN_0051c048(char *param_1,undefined4 *param_2)

{
  char *__path;
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  uint *puVar5;
  ulong *puVar6;
  char local_100 [8];
  undefined4 local_f8 [2];
  undefined8 local_f0;
  ulong local_e8;
  undefined8 uStack_e0;
  char *local_d8;
  undefined4 *puStack_d0;
  char *local_c8;
  undefined8 uStack_c0;
  ulong local_b8;
  undefined8 uStack_b0;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_d8 = "create_directory";
  uStack_c0 = 0;
  puStack_d0 = param_2;
  local_c8 = param_1;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
    uVar4 = FUN_00549d28();
    *(undefined8 *)(param_2 + 2) = uVar4;
  }
  __path = *(char **)param_1;
  if (-1 < param_1[0x17]) {
    __path = param_1;
  }
  iVar3 = mkdir(__path,0x1ff);
  if (iVar3 != 0) {
    puVar5 = (uint *)__errno();
    uVar1 = *puVar5;
    if (uVar1 == 0x11) {
      uStack_e0 = FUN_00549b1c();
      local_f8[0] = 0;
      local_e8 = 0x11;
      local_f0 = FUN_00549d28();
                    /* try { // try from 0051c0d8 to 0051c0eb has its CatchHandler @ 0051c184 */
      FUN_0051b8c4(local_100,param_1,&local_b8,local_f8);
      if (local_100[0] == '\x02') goto LAB_0051c11c;
      puVar6 = &local_e8;
    }
    else {
      if (uVar1 == 0) {
        if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/src/filesystem/filesystem_common.h"
                     ,0x72,"errno != 0","Expected errno to be non-zero");
        }
        goto LAB_0051c180;
      }
      uStack_b0 = FUN_00549b1c();
      puVar6 = &local_b8;
      local_b8 = (ulong)uVar1;
    }
    FUN_0051bafc(&local_d8,puVar6);
  }
LAB_0051c11c:
  puVar5 = (uint *)(ulong)(iVar3 == 0);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_0051c180:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar5);
}


// ===== 0051c188  FUN_0051c188 =====

void FUN_0051c188(undefined8 *param_1,undefined4 *param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  size_t __size;
  char *__buf;
  char *pcVar4;
  uint *puVar5;
  ulong local_68;
  undefined8 uStack_60;
  char *local_58;
  undefined4 *puStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_58 = "current_path";
  local_48 = 0;
  uStack_40 = 0;
  puStack_50 = param_2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
    uVar3 = FUN_00549d28();
    *(undefined8 *)(param_2 + 2) = uVar3;
  }
  __size = pathconf(".",5);
  if ((long)__size < 0) {
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/src/filesystem/operations.cpp"
                 ,0x453,"size >= 0","pathconf returned a 0 as max size");
    }
  }
  else {
    __buf = (char *)operator_new__(__size + 1);
                    /* try { // try from 0051c1f4 to 0051c1ff has its CatchHandler @ 0051c304 */
    pcVar4 = getcwd(__buf,__size);
    if (pcVar4 == (char *)0x0) {
      puVar5 = (uint *)__errno();
      uVar1 = *puVar5;
      if (uVar1 == 0) {
        if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* try { // try from 0051c2c4 to 0051c2eb has its CatchHandler @ 0051c308 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/src/filesystem/filesystem_common.h"
                     ,0x72,"errno != 0","Expected errno to be non-zero");
        }
        goto LAB_0051c32c;
      }
      uStack_60 = FUN_00549b1c();
                    /* try { // try from 0051c238 to 0051c24f has its CatchHandler @ 0051c308 */
      local_68 = (ulong)uVar1;
      FUN_0051c330(param_1,&local_58,&local_68,"call to getcwd failed");
    }
    else {
      pcVar4 = pcVar4 + -1;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      do {
        pcVar4 = pcVar4 + 1;
      } while (*pcVar4 != '\0');
                    /* try { // try from 0051c218 to 0051c21f has its CatchHandler @ 0051c2ec */
      FUN_004b2050(param_1);
    }
    operator_delete__(__buf);
    if (*(long *)(lVar2 + 0x28) == local_38) {
      return;
    }
  }
LAB_0051c32c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0051c330  FUN_0051c330 =====

void FUN_0051c330(undefined8 *param_1)

{
  long lVar1;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar2;
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 *local_80;
  undefined1 **ppuStack_78;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  
  ppuStack_78 = &local_80;
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  puStack_70 = auStack_b0;
  uStack_68 = 0xffffff80ffffffd8;
  local_a8 = in_x3;
  uStack_a0 = in_x4;
  local_98 = in_x5;
  uStack_90 = in_x6;
  local_88 = in_x7;
  local_80 = (undefined1 *)register0x00000008;
                    /* try { // try from 0051c3a0 to 0051c3a7 has its CatchHandler @ 0051c3d4 */
  FUN_0051f614();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0051c414  FUN_0051c414 =====

void FUN_0051c414(char *param_1,char *param_2,undefined4 *param_3)

{
  char *__old;
  char *__new;
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  uint *puVar5;
  ulong local_68;
  undefined8 uStack_60;
  char *local_58;
  undefined4 *puStack_50;
  char *local_48;
  char *pcStack_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_58 = "rename";
  puStack_50 = param_3;
  local_48 = param_1;
  pcStack_40 = param_2;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
    uVar4 = FUN_00549d28();
    *(undefined8 *)(param_3 + 2) = uVar4;
  }
  __old = *(char **)param_1;
  if (-1 < param_1[0x17]) {
    __old = param_1;
  }
  __new = *(char **)param_2;
  if (-1 < param_2[0x17]) {
    __new = param_2;
  }
  iVar3 = rename(__old,__new);
  if (iVar3 == -1) {
    puVar5 = (uint *)__errno();
    uVar1 = *puVar5;
    if (uVar1 == 0) {
      if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/src/filesystem/filesystem_common.h"
                   ,0x72,"errno != 0","Expected errno to be non-zero");
      }
      goto LAB_0051c508;
    }
    uStack_60 = FUN_00549b1c();
    local_68 = (ulong)uVar1;
    FUN_0051b9b8(&local_58,&local_68);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_0051c508:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0051c50c  FUN_0051c50c =====

void FUN_0051c50c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_a8 [128];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_0051b8c4(param_1,auStack_a8,param_2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0051c558  FUN_0051c558 =====

void FUN_0051c558(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_a8 [128];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_0051b7d0(param_1,auStack_a8,param_2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0051c5a4  FUN_0051c5a4 =====

void FUN_0051c5a4(undefined8 *param_1,long *param_2,undefined4 *param_3)

{
  ulong uVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  char *pcVar9;
  byte bVar10;
  void *pvVar11;
  void *local_1a0;
  undefined8 local_198;
  long local_190;
  char local_188 [8];
  void *local_180;
  void *local_178;
  undefined8 local_170;
  undefined1 *local_168;
  undefined8 local_160;
  ulong local_158;
  char *local_150;
  long lStack_148;
  ulong local_140;
  char *local_138;
  undefined4 *puStack_130;
  long *local_128;
  undefined8 uStack_120;
  char *local_118;
  long lStack_110;
  ulong local_108;
  long local_98;
  ulong uStack_90;
  char *local_88;
  long local_80;
  byte local_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  local_138 = "weakly_canonical";
  uStack_120 = 0;
  puStack_130 = param_3;
  local_128 = param_2;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
    uVar5 = FUN_00549d28();
    *(undefined8 *)(param_3 + 2) = uVar5;
  }
  bVar10 = *(byte *)((long)param_2 + 0x17);
  uVar6 = (ulong)bVar10;
  uVar8 = param_2[1];
  uVar1 = uVar8;
  if (-1 < (char)bVar10) {
    uVar1 = uVar6;
  }
  if (uVar1 == 0) {
    local_118 = (char *)0x0;
    lStack_110 = 0;
    local_108 = 0;
                    /* try { // try from 0051c7c8 to 0051c7db has its CatchHandler @ 0051ca90 */
    FUN_004b2050(&local_118,&DAT_001b3348,&DAT_001b3348);
                    /* try { // try from 0051c7dc to 0051c7eb has its CatchHandler @ 0051ca8c */
    FUN_0051b4a8(param_1,&local_118,param_3);
    pcVar9 = local_118;
    uVar1 = local_108;
  }
  else {
    local_150 = (char *)0x0;
    lStack_148 = 0;
    local_140 = 0;
    local_168 = (undefined1 *)0x0;
    local_160 = 0;
    local_158 = 0;
    if (0x7fffffffffffffef < uVar1) {
      if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* try { // try from 0051ca78 to 0051ca7f has its CatchHandler @ 0051cae4 */
                    /* WARNING: Subroutine does not return */
        FUN_004e823c(&local_168);
      }
      goto LAB_0051cb4c;
    }
    if (0x16 < uVar1) {
                    /* try { // try from 0051c63c to 0051c643 has its CatchHandler @ 0051cae4 */
      FUN_0051f494(&local_168,uVar1 | 0xf);
      bVar10 = *(byte *)((long)param_2 + 0x17);
      uVar6 = (ulong)bVar10;
      uVar8 = param_2[1];
    }
    plVar2 = (long *)*param_2;
    if (-1 < (char)bVar10) {
      plVar2 = param_2;
      uVar8 = uVar6;
    }
    if ((plVar2 == (long *)0x0) && (uVar8 != 0)) {
      if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* try { // try from 0051ca40 to 0051ca67 has its CatchHandler @ 0051cb50 */
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0x131,
                   "__len == 0 || __s != nullptr",
                   "string_view::string_view(_CharT *, size_t): received nullptr");
      }
      goto LAB_0051cb4c;
    }
    local_88 = (char *)0x0;
    local_80 = 0;
    local_78 = 6;
    local_98 = (long)plVar2;
    uStack_90 = uVar8;
    FUN_0051cb60(&local_98);
    local_180 = (void *)0x0;
    local_178 = (void *)0x0;
    local_170 = 0;
    if (local_78 != 1) {
      do {
        plVar2 = (long *)*param_2;
        if (-1 < *(char *)((long)param_2 + 0x17)) {
          plVar2 = param_2;
        }
        if (local_80 == 0) {
          if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* try { // try from 0051c998 to 0051c9bf has its CatchHandler @ 0051cb5c */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string_view",
                       0x197,"!empty()","string_view::back(): string is empty");
          }
          goto LAB_0051cb4c;
        }
        if ((plVar2 == (long *)0x0) &&
           (local_88 + ~(ulong)plVar2 + local_80 != (char *)0xffffffffffffffff)) {
          if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* try { // try from 0051c9d0 to 0051c9f7 has its CatchHandler @ 0051cb58 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string_view",
                       0x131,"__len == 0 || __s != nullptr",
                       "string_view::string_view(_CharT *, size_t): received nullptr");
          }
          goto LAB_0051cb4c;
        }
        if ((long)local_158 < 0) {
          *local_168 = 0;
          local_160 = 0;
        }
        else {
          local_168 = (undefined1 *)((ulong)local_168 & 0xffffffffffffff00);
          local_158 = local_158 & 0xffffffffffffff;
        }
                    /* try { // try from 0051c718 to 0051c71f has its CatchHandler @ 0051cafc */
        FUN_004b2050(&local_168,plVar2,
                     (char *)((long)plVar2 + (long)(local_88 + ~(ulong)plVar2 + local_80 + 1)));
        local_1a0 = (void *)((ulong)local_1a0 & 0xffffffff00000000);
        local_198 = FUN_00549d28();
                    /* try { // try from 0051c72c to 0051c73f has its CatchHandler @ 0051caf8 */
        FUN_0051b8c4(local_188,&local_168,&local_118,&local_1a0);
        if (local_188[0] == '\0') {
                    /* try { // try from 0051c7fc to 0051c80b has its CatchHandler @ 0051ca84 */
          FUN_0051b678(param_1,&local_138,&local_1a0);
          goto joined_r0x0051c980;
        }
        if ((local_188[0] != '\0') && (local_188[0] != -1)) {
                    /* try { // try from 0051c810 to 0051c81f has its CatchHandler @ 0051ca80 */
          FUN_0051b4a8(&local_118,&local_168,param_3);
          if ((long)local_140 < 0) {
            operator_delete(local_150);
          }
          lStack_148 = lStack_110;
          local_150 = local_118;
          local_140 = local_108;
          if (local_78 != 1) goto LAB_0051c8b0;
          break;
        }
        uVar3 = 1 << (ulong)(local_78 & 0x1f);
        lVar7 = 0;
        pcVar9 = "";
        if (((uVar3 & 0x62) == 0) && (lVar7 = local_80, pcVar9 = local_88, (uVar3 & 0x14) == 0)) {
          if (local_80 == 0) {
            if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* try { // try from 0051ca08 to 0051ca2f has its CatchHandler @ 0051cb54 */
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s:%d: assertion %s failed: %s",
                         "../../discord_common/native/third_party/llvm/libcxx/include/string_view",
                         0x183,"__pos < size()","string_view[] index out of bounds");
            }
            goto LAB_0051cb4c;
          }
          lVar7 = 1;
          pcVar9 = "\\";
          if (*local_88 != '\\') {
            pcVar9 = "/";
          }
        }
                    /* try { // try from 0051c79c to 0051c7a7 has its CatchHandler @ 0051caf4 */
        local_118 = pcVar9;
        lStack_110 = lVar7;
        FUN_0051ce98(&local_180,&local_118);
        FUN_0051cb60(&local_98);
      } while (local_78 != 1);
    }
    local_1a0 = (void *)0x0;
    local_198 = 0;
    local_190 = 0;
                    /* try { // try from 0051c854 to 0051c867 has its CatchHandler @ 0051caa8 */
    FUN_004b2050(&local_1a0,&DAT_001b3348,&DAT_001b3348);
                    /* try { // try from 0051c868 to 0051c877 has its CatchHandler @ 0051caa4 */
    FUN_0051b4a8(&local_118,&local_1a0,param_3);
    if ((long)local_140 < 0) {
      operator_delete(local_150);
    }
    local_140 = local_108;
    local_150 = local_118;
    local_118 = (char *)((ulong)local_118 & 0xffffffffffffff00);
    local_108 = local_108 & 0xffffffffffffff;
    lStack_148 = lStack_110;
    if (local_190 < 0) {
      operator_delete(local_1a0);
    }
LAB_0051c8b0:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
      uVar5 = FUN_00549d28();
      *(undefined8 *)(param_3 + 2) = uVar5;
    }
    uVar1 = local_140;
    lVar7 = lStack_148;
    pcVar9 = local_150;
    pvVar11 = local_178;
    if (local_180 == local_178) {
      local_150 = (char *)0x0;
      lStack_148 = 0;
      local_140 = 0;
      param_1[1] = lVar7;
      *param_1 = pcVar9;
      param_1[2] = uVar1;
    }
    else {
      while (pvVar11 != local_180) {
        pvVar11 = (void *)((long)pvVar11 + -0x10);
                    /* try { // try from 0051c8dc to 0051c8e7 has its CatchHandler @ 0051cb00 */
        FUN_0051f8a4(&local_150,pvVar11);
      }
                    /* try { // try from 0051c8ec to 0051c8f7 has its CatchHandler @ 0051ca88 */
      FUN_0051cff4(param_1,&local_150);
    }
joined_r0x0051c980:
    if (local_180 != (void *)0x0) {
      local_178 = local_180;
      operator_delete(local_180);
    }
    pcVar9 = local_150;
    uVar1 = local_140;
    if ((long)local_158 < 0) {
      operator_delete(local_168);
      pcVar9 = local_150;
      uVar1 = local_140;
    }
  }
  if ((long)uVar1 < 0) {
    operator_delete(pcVar9);
  }
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return;
  }
LAB_0051cb4c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0051cb60  FUN_0051cb60 =====

void FUN_0051cb60(ulong *param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 uVar6;
  ulong uVar7;
  char *pcVar8;
  char *pcVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar7 = *param_1;
  uVar2 = (byte)param_1[4] - 3;
  if (uVar2 < 3) {
    if (param_1[3] == 0) {
                    /* try { // try from 0051cdb8 to 0051cddf has its CatchHandler @ 0051ce94 */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0x191,
                 "!empty()","string_view::front(): string is empty");
    }
    uVar3 = param_1[2];
    uVar11 = uVar3 - uVar7;
  }
  else {
    if ((byte)param_1[4] - 1 < 2) {
      if (param_1[1] == 0) {
                    /* try { // try from 0051cde0 to 0051ce07 has its CatchHandler @ 0051ce90 */
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0x191,
                   "!empty()","string_view::front(): string is empty");
      }
      goto LAB_0051cba8;
    }
    if (param_1[1] == 0) {
                    /* try { // try from 0051ce08 to 0051ce2f has its CatchHandler @ 0051ce8c */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0x197,
                 "!empty()","string_view::back(): string is empty");
    }
    uVar3 = param_1[1] + uVar7;
    uVar11 = uVar3 - uVar7;
  }
  if (uVar11 == 0) {
LAB_0051cba8:
    *(undefined1 *)(param_1 + 4) = 1;
    param_1[2] = 0;
    param_1[3] = 0;
    return;
  }
  if (3 < uVar2) {
    return;
  }
  pcVar8 = (char *)(uVar7 - 1);
  pcVar9 = (char *)(uVar3 - 1);
  switch(uVar2) {
  case 0:
    *(undefined1 *)(param_1 + 4) = 2;
    if ((uVar7 == 0) && (uVar3 != 0)) {
                    /* try { // try from 0051cc08 to 0051cc2f has its CatchHandler @ 0051ce88 */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0x131,
                 "__len == 0 || __s != nullptr",
                 "string_view::string_view(_CharT *, size_t): received nullptr");
    }
LAB_0051cd90:
    param_1[2] = uVar7;
    param_1[3] = uVar11;
    return;
  case 1:
    if (*pcVar9 == '/') {
      lVar1 = -1;
      if (uVar3 < uVar7) {
        lVar1 = 1;
      }
      do {
        pcVar9 = pcVar9 + lVar1;
        if (pcVar9 == pcVar8) {
          *(undefined1 *)(param_1 + 4) = 3;
          if ((uVar7 == 0) && (uVar3 != 0)) {
                    /* try { // try from 0051ce58 to 0051ce7f has its CatchHandler @ 0051ce80 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string_view",
                       0x131,"__len == 0 || __s != nullptr",
                       "string_view::string_view(_CharT *, size_t): received nullptr");
          }
          param_1[2] = uVar7;
          param_1[3] = uVar3 - uVar7;
          return;
        }
      } while (*pcVar9 == '/');
      lVar1 = -1;
      pcVar4 = pcVar9;
      if (pcVar9 < pcVar8) {
        lVar1 = 1;
      }
      do {
        pcVar4 = pcVar4 + lVar1;
        pcVar5 = pcVar8;
        if (pcVar4 == pcVar8) break;
        pcVar5 = pcVar4;
      } while (*pcVar4 != '/');
    }
    else {
      pcVar9 = (char *)0x0;
      pcVar5 = (char *)0x0;
    }
    pcVar5 = pcVar5 + 1;
    uVar6 = 4;
    pcVar9 = pcVar9 + (1 - (long)pcVar5);
    break;
  case 2:
    if (*pcVar9 == '/') {
      pcVar5 = (char *)0x0;
    }
    else {
      lVar1 = -1;
      if (uVar3 < uVar7) {
        lVar1 = 1;
      }
      do {
        pcVar9 = pcVar9 + lVar1;
        pcVar5 = pcVar8;
        if (pcVar9 == pcVar8) break;
        pcVar5 = pcVar9;
      } while (*pcVar9 != '/');
    }
LAB_0051cd3c:
    *(undefined1 *)(param_1 + 4) = 4;
    param_1[2] = (ulong)(pcVar5 + 1);
    param_1[3] = uVar3 - (long)(pcVar5 + 1);
    return;
  case 3:
    uVar11 = uVar3 - uVar7;
    lVar1 = -1;
    if (uVar3 < uVar7) {
      lVar1 = 1;
    }
    if (*(char *)(uVar3 - 1) != '/') {
      do {
        pcVar9 = pcVar9 + lVar1;
        pcVar5 = pcVar8;
        if (pcVar9 == pcVar8) break;
        pcVar5 = pcVar9;
      } while (*pcVar9 != '/');
      goto LAB_0051cd3c;
    }
    lVar10 = 0;
    lVar12 = lVar1 + uVar3 + -1;
    do {
      if ((char *)(lVar12 + lVar10) == pcVar8) {
        *(undefined1 *)(param_1 + 4) = 3;
        if ((uVar7 == 0) && (uVar3 != 0)) {
                    /* try { // try from 0051ce30 to 0051ce57 has its CatchHandler @ 0051ce84 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0x131
                     ,"__len == 0 || __s != nullptr",
                     "string_view::string_view(_CharT *, size_t): received nullptr");
        }
        goto LAB_0051cd90;
      }
      pcVar9 = (char *)(lVar12 + lVar10);
      lVar10 = lVar10 + lVar1;
    } while (*pcVar9 == '/');
    uVar6 = 5;
    pcVar5 = (char *)(uVar3 + lVar10);
    pcVar9 = (char *)-lVar10;
  }
  *(undefined1 *)(param_1 + 4) = uVar6;
  param_1[2] = (ulong)pcVar5;
  param_1[3] = (ulong)pcVar9;
  return;
}


// ===== 0051ce98  FUN_0051ce98 =====

void FUN_0051ce98(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *__dest;
  ulong uVar4;
  ulong uVar5;
  void *__src;
  long lVar6;
  undefined8 uVar7;
  
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 < (undefined8 *)param_1[2]) {
    if (puVar3 != (undefined8 *)0x0) {
      uVar7 = *param_2;
      puVar3[1] = param_2[1];
      *puVar3 = uVar7;
      param_1[1] = puVar3 + 2;
      return;
    }
                    /* try { // try from 0051cf90 to 0051cfb7 has its CatchHandler @ 0051cfec */
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x23,"__location != nullptr","null pointer given to construct_at");
  }
  __src = (void *)*param_1;
  lVar6 = (long)puVar3 - (long)__src >> 4;
  uVar1 = lVar6 + 1;
  if (uVar1 >> 0x3c == 0) {
    uVar4 = (long)param_1[2] - (long)__src;
    uVar5 = uVar4 >> 3;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7fffffffffffffef < uVar4) {
      uVar5 = 0xfffffffffffffff;
    }
    if (uVar5 != 0) {
      if (uVar5 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00401ad4();
      }
      __dest = operator_new(uVar5 * 0x10);
      uVar7 = *param_2;
      puVar2 = (undefined8 *)((long)__dest + lVar6 * 0x10);
      puVar2[1] = param_2[1];
      *puVar2 = uVar7;
      memmove(__dest,__src,(long)puVar3 - (long)__src);
      *param_1 = __dest;
      param_1[1] = puVar2 + 2;
      param_1[2] = (void *)((long)__dest + uVar5 * 0x10);
      if (__src == (void *)0x0) {
        return;
      }
      operator_delete(__src);
      return;
    }
  }
  else {
    FUN_0051eef8(param_1);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h",
             0x23,"__location != nullptr","null pointer given to construct_at");
}


// ===== 0051cff4  FUN_0051cff4 =====

void FUN_0051cff4(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  long local_90;
  ulong uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  byte local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  bVar2 = *(byte *)((long)param_2 + 0x17);
  uVar1 = param_2[1];
  if (-1 < (char)bVar2) {
    uVar1 = (ulong)bVar2;
  }
  if (uVar1 == 0) {
    if (*(long *)(lVar3 + 0x28) == local_68) {
      FUN_004c55b4(param_1,param_2);
      return;
    }
  }
  else {
                    /* try { // try from 0051d048 to 0051d04f has its CatchHandler @ 0051d528 */
    operator_new(0x300);
    local_90 = *param_2;
    if (-1 < (char)bVar2) {
      local_90 = (long)param_2;
    }
    if (local_90 != 0) {
      local_80 = 0;
      uStack_78 = 0;
      local_70 = 1;
      uStack_88 = uVar1;
      FUN_0051efa0(&local_90);
                    /* WARNING: Could not recover jumptable at 0x0051d0d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_0051d0b4 + (ulong)(byte)(&DAT_001f76f4)[local_70 - 1] * 4))();
      return;
    }
    if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 0051d4d8 to 0051d4ff has its CatchHandler @ 0051d560 */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0x131,
                 "__len == 0 || __s != nullptr",
                 "string_view::string_view(_CharT *, size_t): received nullptr");
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0051d5a4  FUN_0051d5a4 =====

void FUN_0051d5a4(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined8 *local_50;
  ulong uStack_48;
  char *local_40;
  long local_38;
  char local_30;
  long local_28;
  
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = param_1;
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar1 = param_1[1];
  puVar3 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar3 = param_1;
  }
  if (puVar3 == (undefined8 *)0x0 && uVar1 != 0) {
    if (*(long *)(lVar2 + 0x28) == local_28) {
                    /* try { // try from 0051d684 to 0051d6ab has its CatchHandler @ 0051d6ec */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0x131,
                 "__len == 0 || __s != nullptr",
                 "string_view::string_view(_CharT *, size_t): received nullptr");
    }
  }
  else {
    local_40 = (char *)0x0;
    local_38 = 0;
    local_30 = '\x01';
    local_50 = puVar3;
    uStack_48 = uVar1;
    auVar6 = FUN_0051efa0(&local_50);
    if (local_30 == '\x02') {
      auVar6 = FUN_0051efa0(&local_50);
    }
    if (local_30 == '\x03') {
      if (local_38 == 0) {
        if (*(long *)(lVar2 + 0x28) == local_28) {
                    /* try { // try from 0051d6bc to 0051d6e3 has its CatchHandler @ 0051d6e8 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0x183
                     ,"__pos < size()","string_view[] index out of bounds");
        }
        goto LAB_0051d6e4;
      }
      uVar5 = 1;
      puVar4 = &UNK_001de9f2;
      if (*local_40 != '\\') {
        puVar4 = &DAT_001c7bbb;
      }
    }
    else {
      uVar5 = 0;
      puVar4 = (undefined *)0x0;
    }
    auVar6._8_8_ = uVar5;
    auVar6._0_8_ = puVar4;
    if (*(long *)(lVar2 + 0x28) == local_28) {
      return;
    }
  }
LAB_0051d6e4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(auVar6._0_8_,auVar6._8_8_);
}


// ===== 0051d6f0  FUN_0051d6f0 =====

void FUN_0051d6f0(long *param_1,undefined8 param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  long *local_50;
  ulong uStack_48;
  long *local_40;
  long local_38;
  byte local_30;
  long local_28;
  
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = param_1;
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  bVar2 = *(byte *)((long)param_1 + 0x17);
  uVar5 = param_1[1];
  if (-1 < (char)bVar2) {
    uVar5 = (ulong)bVar2;
  }
  if (uVar5 == 0) {
LAB_0051d89c:
    plVar4 = (long *)0x0;
    uVar5 = 0;
  }
  else {
    plVar4 = (long *)*param_1;
    if (-1 < (char)bVar2) {
      plVar4 = param_1;
    }
    if (plVar4 == (long *)0x0) {
      if (*(long *)(lVar3 + 0x28) == local_28) {
                    /* try { // try from 0051d8d4 to 0051d8fb has its CatchHandler @ 0051d980 */
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0x131,
                   "__len == 0 || __s != nullptr",
                   "string_view::string_view(_CharT *, size_t): received nullptr");
      }
      goto LAB_0051d96c;
    }
    local_40 = (long *)0x0;
    local_38 = 0;
    local_30 = 1;
    local_50 = plVar4;
    uStack_48 = uVar5;
    auVar6 = FUN_0051efa0(&local_50);
    while (local_30 < 4) {
      auVar6 = FUN_0051efa0(&local_50);
    }
    if (local_30 == 6) {
      uVar5 = param_1[1];
      plVar4 = (long *)*param_1;
      if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
        uVar5 = (ulong)*(byte *)((long)param_1 + 0x17);
        plVar4 = param_1;
      }
      auVar6._8_8_ = uVar5;
      auVar6._0_8_ = plVar4;
      if ((plVar4 == (long *)0x0) && (uVar5 != 0)) {
        if (*(long *)(lVar3 + 0x28) == local_28) {
                    /* try { // try from 0051d7a8 to 0051d7cf has its CatchHandler @ 0051d97c */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0x131
                     ,"__len == 0 || __s != nullptr",
                     "string_view::string_view(_CharT *, size_t): received nullptr");
        }
        goto LAB_0051d96c;
      }
    }
    else {
      uVar5 = param_1[1];
      plVar4 = (long *)*param_1;
      if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
        uVar5 = (ulong)*(byte *)((long)param_1 + 0x17);
        plVar4 = param_1;
      }
      if ((plVar4 == (long *)0x0) && (uVar5 != 0)) {
        if (*(long *)(lVar3 + 0x28) == local_28) {
                    /* try { // try from 0051d90c to 0051d933 has its CatchHandler @ 0051d978 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0x131
                     ,"__len == 0 || __s != nullptr",
                     "string_view::string_view(_CharT *, size_t): received nullptr");
        }
        goto LAB_0051d96c;
      }
      local_40 = (long *)0x0;
      local_38 = 0;
      local_30 = 6;
      local_50 = plVar4;
      uStack_48 = uVar5;
      FUN_0051cb60(&local_50);
      plVar4 = (long *)*param_1;
      if (-1 < *(char *)((long)param_1 + 0x17)) {
        plVar4 = param_1;
      }
      if (local_40 == plVar4) goto LAB_0051d89c;
      auVar6 = FUN_0051cb60(&local_50);
      if (local_38 == 0) {
        if (*(long *)(lVar3 + 0x28) == local_28) {
                    /* try { // try from 0051d944 to 0051d96b has its CatchHandler @ 0051d974 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0x197
                     ,"!empty()","string_view::back(): string is empty");
        }
        goto LAB_0051d96c;
      }
      plVar4 = (long *)*param_1;
      if (-1 < *(char *)((long)param_1 + 0x17)) {
        plVar4 = param_1;
      }
      lVar1 = (long)local_40 + ~(ulong)plVar4 + local_38;
      uVar5 = lVar1 + 1;
      auVar6._8_8_ = uVar5;
      auVar6._0_8_ = plVar4;
      if ((plVar4 == (long *)0x0) && (lVar1 != -1)) {
        if (*(long *)(lVar3 + 0x28) == local_28) {
                    /* try { // try from 0051d874 to 0051d89b has its CatchHandler @ 0051d970 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0x131
                     ,"__len == 0 || __s != nullptr",
                     "string_view::string_view(_CharT *, size_t): received nullptr");
        }
        goto LAB_0051d96c;
      }
    }
  }
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = plVar4;
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return;
  }
LAB_0051d96c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(auVar6._0_8_,auVar6._8_8_);
}


// ===== 0051d984  FUN_0051d984 =====

void FUN_0051d984(long *param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  undefined1 auVar8 [16];
  long *local_50;
  ulong uStack_48;
  char *local_40;
  long local_38;
  byte local_30;
  long local_28;
  
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = param_1;
  lVar5 = tpidr_el0;
  local_28 = *(long *)(lVar5 + 0x28);
  bVar3 = *(byte *)((long)param_1 + 0x17);
  uVar2 = param_1[1];
  if (-1 < (char)bVar3) {
    uVar2 = (ulong)bVar3;
  }
  if (uVar2 == 0) {
LAB_0051da0c:
    pcVar6 = (char *)0x0;
    lVar7 = 0;
  }
  else {
    plVar1 = (long *)*param_1;
    if (-1 < (char)bVar3) {
      plVar1 = param_1;
    }
    if (plVar1 == (long *)0x0) {
      if (*(long *)(lVar5 + 0x28) == local_28) {
                    /* try { // try from 0051dae4 to 0051db0b has its CatchHandler @ 0051db88 */
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0x131,
                   "__len == 0 || __s != nullptr",
                   "string_view::string_view(_CharT *, size_t): received nullptr");
      }
      goto LAB_0051db7c;
    }
    local_40 = (char *)0x0;
    local_38 = 0;
    local_30 = 1;
    local_50 = plVar1;
    uStack_48 = uVar2;
    auVar8 = FUN_0051efa0(&local_50);
    while (local_30 < 4) {
      auVar8 = FUN_0051efa0(&local_50);
    }
    if (local_30 == 6) goto LAB_0051da0c;
    uVar2 = param_1[1];
    plVar1 = (long *)*param_1;
    if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
      uVar2 = (ulong)*(byte *)((long)param_1 + 0x17);
      plVar1 = param_1;
    }
    if ((plVar1 == (long *)0x0) && (uVar2 != 0)) {
      if (*(long *)(lVar5 + 0x28) == local_28) {
                    /* try { // try from 0051db1c to 0051db43 has its CatchHandler @ 0051db84 */
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0x131,
                   "__len == 0 || __s != nullptr",
                   "string_view::string_view(_CharT *, size_t): received nullptr");
      }
      goto LAB_0051db7c;
    }
    local_40 = (char *)0x0;
    local_38 = 0;
    local_30 = 6;
    local_50 = plVar1;
    uStack_48 = uVar2;
    FUN_0051cb60(&local_50);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = &DAT_001b3348;
    uVar4 = 1 << (ulong)(local_30 & 0x1f);
    pcVar6 = "";
    lVar7 = 0;
    if (((uVar4 & 0x62) == 0) && (pcVar6 = local_40, lVar7 = local_38, (uVar4 & 0x14) == 0)) {
      if (local_38 == 0) {
        if (*(long *)(lVar5 + 0x28) == local_28) {
                    /* try { // try from 0051db54 to 0051db7b has its CatchHandler @ 0051db80 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0x183
                     ,"__pos < size()","string_view[] index out of bounds");
        }
        goto LAB_0051db7c;
      }
      pcVar6 = "\\";
      lVar7 = 1;
      if (*local_40 != '\\') {
        pcVar6 = "/";
      }
    }
  }
  auVar8._8_8_ = lVar7;
  auVar8._0_8_ = pcVar6;
  if (*(long *)(lVar5 + 0x28) == local_28) {
    return;
  }
LAB_0051db7c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(auVar8._0_8_,auVar8._8_8_);
}


// ===== 0051db8c  FUN_0051db8c =====

void FUN_0051db8c(void)

{
  long lVar1;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_58 = FUN_0051d984();
  FUN_0051dbe4(&local_48,local_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_48,uStack_40);
}


// ===== 0051dbe4  FUN_0051dbe4 =====

void FUN_0051dbe4(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  char *__s1;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar6 = param_2[1];
  if (uVar6 != 0) {
    __s1 = (char *)*param_2;
    if (uVar6 == 2) {
      iVar4 = memcmp(__s1,&DAT_0019a381,2);
      if (iVar4 != 0) goto LAB_0051dc54;
    }
    else if ((uVar6 != 1) || (*__s1 != '.')) {
LAB_0051dc54:
      lVar5 = 0;
      do {
        if (-lVar5 == uVar6) goto LAB_0051dc8c;
        lVar3 = lVar5 + (uVar6 - 1);
        lVar5 = lVar5 + -1;
      } while (__s1[lVar3] != '.');
      uVar1 = uVar6 + lVar5;
      if (1 < uVar1 + 1) {
        uVar2 = uVar6;
        if (uVar1 <= uVar6) {
          uVar2 = uVar1;
        }
        if ((__s1 == (char *)0x0) && (uVar2 != 0)) {
                    /* try { // try from 0051dce4 to 0051dd0b has its CatchHandler @ 0051dd44 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0x131
                     ,"__len == 0 || __s != nullptr",
                     "string_view::string_view(_CharT *, size_t): received nullptr");
        }
        if (uVar6 < uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_0051ef20("string_view::substr");
        }
        if ((__s1 == (char *)0x0) && (lVar5 != 0)) {
                    /* try { // try from 0051dd0c to 0051dd33 has its CatchHandler @ 0051dd40 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0x131
                     ,"__len == 0 || __s != nullptr",
                     "string_view::string_view(_CharT *, size_t): received nullptr");
        }
        *param_1 = __s1;
        param_1[1] = uVar2;
        param_1[2] = __s1 + lVar5 + uVar6;
        param_1[3] = -lVar5;
        return;
      }
LAB_0051dc8c:
      uVar8 = param_2[1];
      uVar7 = *param_2;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = uVar8;
      *param_1 = uVar7;
      return;
    }
  }
  uVar7 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[2] = &DAT_001b3348;
  param_1[3] = 0;
  return;
}


// ===== 0051dd48  FUN_0051dd48 =====

void FUN_0051dd48(void)

{
  long lVar1;
  undefined1 local_58 [16];
  undefined1 auStack_48 [16];
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_58 = FUN_0051d984();
  FUN_0051dbe4(auStack_48,local_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_38,uStack_30);
}


// ===== 0051dda0  FUN_0051dda0 =====

void FUN_0051dda0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  int iVar5;
  undefined8 extraout_x1;
  undefined8 *local_a8;
  ulong uStack_a0;
  void *local_98;
  size_t sStack_90;
  byte local_88;
  undefined8 *local_80;
  ulong uStack_78;
  void *local_70;
  size_t local_68;
  byte local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar1 = param_2[1];
  puVar3 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar3 = param_2;
  }
  if (puVar3 == (undefined8 *)0x0 && uVar1 != 0) {
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 0051e2f0 to 0051e317 has its CatchHandler @ 0051e4cc */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0x131,
                 "__len == 0 || __s != nullptr",
                 "string_view::string_view(_CharT *, size_t): received nullptr");
    }
    goto LAB_0051e4ac;
  }
  local_70 = (void *)0x0;
  local_68 = 0;
  local_60 = 1;
  local_80 = puVar3;
  uStack_78 = uVar1;
  FUN_0051efa0(&local_80);
  uVar1 = param_3[1];
  puVar3 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar3 = param_3;
  }
  if ((puVar3 == (undefined8 *)0x0) && (uVar1 != 0)) {
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 0051e328 to 0051e34f has its CatchHandler @ 0051e4c8 */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0x131,
                 "__len == 0 || __s != nullptr",
                 "string_view::string_view(_CharT *, size_t): received nullptr");
    }
    goto LAB_0051e4ac;
  }
  local_98 = (void *)0x0;
  sStack_90 = 0;
  local_88 = 1;
  local_a8 = puVar3;
  uStack_a0 = uVar1;
  FUN_0051efa0(&local_a8);
  bVar4 = local_88;
  if ((local_60 == 2) && (local_88 == 2)) {
    if ((local_68 != sStack_90) ||
       ((local_68 != 0 && (iVar5 = memcmp(local_70,local_98,local_68), iVar5 != 0))))
    goto LAB_0051e160;
LAB_0051deac:
    FUN_0051efa0(&local_80);
LAB_0051deb4:
    if ((bVar4 & 0xfe) == 2) {
      FUN_0051efa0(&local_a8);
      bVar4 = local_88;
    }
    if ((local_60 != bVar4) && (((local_60 & 0xfe) == 2 || ((bVar4 & 0xfe) == 2))))
    goto LAB_0051e160;
    uVar1 = param_2[1];
    puVar3 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
      puVar3 = param_2;
    }
    if ((puVar3 == (undefined8 *)0x0) && (uVar1 != 0)) {
      if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 0051e408 to 0051e42f has its CatchHandler @ 0051e4b8 */
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0x131,
                   "__len == 0 || __s != nullptr",
                   "string_view::string_view(_CharT *, size_t): received nullptr");
      }
      goto LAB_0051e4ac;
    }
    local_70 = (void *)0x0;
    local_68 = 0;
    local_60 = 1;
    local_80 = puVar3;
    uStack_78 = uVar1;
    FUN_0051efa0(&local_80);
    uVar1 = param_3[1];
    puVar3 = (undefined8 *)*param_3;
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
      puVar3 = param_3;
    }
    if ((puVar3 == (undefined8 *)0x0) && (uVar1 != 0)) {
      if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 0051e440 to 0051e467 has its CatchHandler @ 0051e4b4 */
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0x131,
                   "__len == 0 || __s != nullptr",
                   "string_view::string_view(_CharT *, size_t): received nullptr");
      }
      goto LAB_0051e4ac;
    }
    local_98 = (void *)0x0;
    sStack_90 = 0;
    local_88 = 1;
    local_a8 = puVar3;
    uStack_a0 = uVar1;
    FUN_0051efa0(&local_a8);
    if (local_60 != 1 && local_60 != 6) {
      if (((local_88 != 1) && (local_88 != 6)) && ((uint)local_60 == (uint)local_88)) {
                    /* WARNING: Could not recover jumptable at 0x0051dfdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK_0051dfe0 + (ulong)(byte)(&UNK_001f76fa)[local_60 - 2] * 4))
                  (&DAT_001b3348,extraout_x1,0);
        return;
      }
LAB_0051e0bc:
                    /* WARNING: Could not recover jumptable at 0x0051e0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_0051e0b4 + (ulong)(byte)(&DAT_001f7702)[local_88 - 1] * 4))();
      return;
    }
    if ((local_88 != 6) && (local_88 != 1)) goto LAB_0051e0bc;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
                    /* try { // try from 0051e070 to 0051e083 has its CatchHandler @ 0051e46c */
    FUN_004b2050(param_1,&DAT_001ea377,&DAT_001ea378);
  }
  else {
    if ((local_60 == local_88) || (((local_60 & 0xfe) != 2 && ((local_88 & 0xfe) != 2)))) {
      if ((local_60 & 0xfe) == 2) goto LAB_0051deac;
      goto LAB_0051deb4;
    }
LAB_0051e160:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
LAB_0051e4ac:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0051e4d4  FUN_0051e4d4 =====

ulong FUN_0051e4d4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  size_t __n;
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  uint uVar4;
  undefined *__s1;
  ulong uVar5;
  undefined *__s2;
  ulong uVar6;
  uint uVar7;
  byte bVar8;
  ulong uVar9;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined *local_a8;
  ulong uStack_a0;
  byte local_98;
  undefined8 *local_90;
  ulong uStack_88;
  undefined *local_80;
  ulong uStack_78;
  byte local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar5 = param_1[1];
  puVar2 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar5 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar2 = param_1;
  }
  if (puVar2 == (undefined8 *)0x0 && uVar5 != 0) {
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* try { // try from 0051e7f8 to 0051e81f has its CatchHandler @ 0051e89c */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0x131,
                 "__len == 0 || __s != nullptr",
                 "string_view::string_view(_CharT *, size_t): received nullptr");
    }
    goto LAB_0051e890;
  }
  local_80 = (undefined *)0x0;
  uStack_78 = 0;
  local_70 = 1;
  local_90 = puVar2;
  uStack_88 = uVar5;
  FUN_0051efa0(&local_90);
  local_a8 = (undefined *)0x0;
  uStack_a0 = 0;
  local_98 = 1;
  local_b8 = param_2;
  uStack_b0 = param_3;
  FUN_0051efa0(&local_b8);
  bVar3 = local_70;
  uVar7 = (uint)local_70;
  bVar8 = local_98;
  if (local_70 == 2) {
    __s1 = local_80;
    uVar5 = uStack_78;
    if (local_98 == 2) {
LAB_0051e59c:
      bVar8 = 2;
      __s2 = local_a8;
      uVar9 = uStack_a0;
    }
    else {
      __s2 = &DAT_001b3348;
      uVar9 = 0;
    }
    __n = uVar9;
    if (uVar5 <= uVar9) {
      __n = uVar5;
    }
    if (__n == 0) {
LAB_0051e5bc:
      if (uVar5 == uVar9) {
        uVar6 = 0;
      }
      else {
        uVar4 = 1;
        if (uVar5 < uVar9) {
          uVar4 = 0xffffffff;
        }
        uVar6 = (ulong)uVar4;
      }
    }
    else {
      uVar4 = memcmp(__s1,__s2,__n);
      uVar6 = (ulong)uVar4;
      if (uVar4 == 0) goto LAB_0051e5bc;
    }
    while (bVar3 < 3) {
      FUN_0051efa0(&local_90);
      uVar7 = (uint)local_70;
      bVar3 = local_70;
    }
    while (bVar8 < 3) {
      FUN_0051efa0(&local_b8);
      bVar8 = local_98;
    }
    if ((int)uVar6 == 0) goto LAB_0051e604;
  }
  else {
    if (local_98 == 2) {
      uVar5 = 0;
      __s1 = &DAT_001b3348;
      goto LAB_0051e59c;
    }
LAB_0051e604:
    if (uVar7 == 3) {
      if (bVar8 == 3) {
        do {
          FUN_0051efa0(&local_90);
          uVar7 = (uint)local_70;
joined_r0x0051e624:
        } while (uVar7 < 4);
        while (bVar8 < 4) {
          FUN_0051efa0(&local_b8);
          bVar8 = local_98;
        }
        if ((((uVar7 != 1) && (uVar7 != 6)) && (local_98 != 1)) && (local_98 != 6)) {
                    /* WARNING: Could not recover jumptable at 0x0051e6bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (*(code *)(&UNK_0051e6c0 + (ulong)(byte)(&UNK_001f770c)[uVar7 - 2] * 4))
                            (&DAT_001b3348);
          return uVar5;
        }
        if (uVar7 == 6) {
          if (local_98 != 6) goto LAB_0051e770;
        }
        else if (local_98 == 6) goto LAB_0051e794;
        uVar6 = 0;
      }
      else {
LAB_0051e794:
        uVar6 = 1;
      }
    }
    else {
      if (bVar8 != 3) goto joined_r0x0051e624;
LAB_0051e770:
      uVar6 = 0xffffffff;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return uVar6;
  }
LAB_0051e890:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0051e8a0  FUN_0051e8a0 =====

long FUN_0051e8a0(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)(*(long *)(param_1 + 0x20) + 0x30);
  plVar1 = (long *)*plVar2;
  if (-1 < *(char *)(*(long *)(param_1 + 0x20) + 0x47)) {
    plVar1 = plVar2;
  }
  return (long)plVar1;
}


// ===== 0051e8b8  FUN_0051e8b8 =====

void FUN_0051e8b8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_d0 [8];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 *local_90;
  undefined1 **ppuStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  puStack_80 = auStack_d0;
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  ppuStack_88 = &local_90;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uStack_78 = 0xffffff80ffffffc8;
                    /* try { // try from 0051e934 to 0051e93f has its CatchHandler @ 0051e974 */
  local_c8 = param_3;
  uStack_c0 = param_4;
  local_b8 = param_5;
  uStack_b0 = param_6;
  local_a8 = param_7;
  uStack_a0 = param_8;
  local_98 = param_9;
  local_90 = (undefined1 *)register0x00000008;
  FUN_0051e9b4(&local_70,param_2,&local_90);
  param_1[1] = uStack_68;
  *param_1 = local_70;
  param_1[2] = local_60;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0051e9b4  FUN_0051e9b4 =====

void FUN_0051e9b4(char *param_1,char *param_2,undefined8 *param_3)

{
  char *__s;
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
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
  char acStack_148 [256];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uStack_188 = param_3[1];
  local_190 = *param_3;
  uStack_178 = param_3[3];
  uStack_180 = param_3[2];
  local_170 = local_190;
  uStack_168 = uStack_188;
  uStack_160 = uStack_180;
  uStack_158 = uStack_178;
  uVar2 = vsnprintf(acStack_148,0x100,param_2,&local_190);
  lVar4 = (long)(int)uVar2;
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  if (uVar2 < 0x100) {
                    /* try { // try from 0051ea18 to 0051ea27 has its CatchHandler @ 0051eac8 */
    FUN_00547b08(param_1,acStack_148,lVar4);
  }
  else {
                    /* try { // try from 0051ea2c to 0051eac7 has its CatchHandler @ 0051eacc */
    FUN_0051a118(param_1,lVar4);
    uStack_1a8 = param_3[1];
    local_1b0 = *param_3;
    uStack_198 = param_3[3];
    uStack_1a0 = param_3[2];
    __s = *(char **)param_1;
    if (-1 < param_1[0x17]) {
      __s = param_1;
    }
    uVar3 = vsnprintf(__s,lVar4 + 1,param_2,&local_1b0);
    if (uVar3 != uVar2) {
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/src/filesystem/filesystem_common.h"
                   ,0x59,"static_cast<size_t>(ret) == (size_with_null - 1)",&DAT_001d06b4);
      }
      goto LAB_0051eaf8;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_0051eaf8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0051eafc  FUN_0051eafc =====

void FUN_0051eafc(undefined1 *param_1,int *param_2,undefined8 param_3,long param_4,
                 undefined8 *param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 uVar5;
  char *local_58;
  undefined8 *puStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_5 != (undefined8 *)0x0) {
    uVar3 = *(undefined8 *)param_2;
    param_5[1] = *(undefined8 *)(param_2 + 2);
    *param_5 = uVar3;
  }
  iVar1 = *param_2;
  if (iVar1 == 0) {
    uVar4 = (*(uint *)(param_4 + 0x10) & 0xf000) - 0x1000;
    if (uVar4 >> 0xe < 3) {
      uVar5 = (&DAT_001f7748)[uVar4 >> 0xc];
    }
    else {
      uVar5 = 8;
    }
    uVar4 = *(uint *)(param_4 + 0x10) & 0xfff;
    *param_1 = uVar5;
  }
  else {
    if ((iVar1 == 0x14) || (iVar1 == 2)) {
      *param_1 = 0xff;
      *(undefined4 *)(param_1 + 4) = 0xffff;
      goto LAB_0051ebd4;
    }
    uStack_40 = 0;
    local_58 = "posix_stat";
    puStack_50 = param_5;
    local_48 = param_3;
    if (param_5 != (undefined8 *)0x0) {
      *(undefined4 *)param_5 = 0;
      uVar3 = FUN_00549d28();
      param_5[1] = uVar3;
    }
    FUN_0051ebfc(&local_58,param_2);
    uVar4 = 0xffff;
    *param_1 = 0;
  }
  *(uint *)(param_1 + 4) = uVar4;
LAB_0051ebd4:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0051ebfc  FUN_0051ebfc =====

/* WARNING: Removing unreachable block (ram,0x0051eda8) */
/* WARNING: Removing unreachable block (ram,0x0051edb8) */
/* WARNING: Removing unreachable block (ram,0x0051ed54) */
/* WARNING: Removing unreachable block (ram,0x0051edc8) */
/* WARNING: Removing unreachable block (ram,0x0051ee10) */

void FUN_0051ebfc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_150 [8];
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined1 *local_120;
  undefined1 **ppuStack_118;
  undefined1 *puStack_110;
  undefined8 uStack_108;
  undefined1 *local_e0;
  undefined1 **ppuStack_d8;
  undefined1 *puStack_d0;
  undefined8 uStack_c8;
  void *local_c0 [2];
  undefined1 local_a9;
  undefined1 local_a8 [24];
  undefined1 local_90 [24];
  undefined1 local_78 [24];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  ppuStack_118 = &local_120;
  puStack_110 = auStack_150;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar4 = (undefined8 *)param_1[1];
  uStack_108 = 0xffffff80ffffffd8;
  local_148 = param_4;
  uStack_140 = param_5;
  local_138 = param_6;
  uStack_130 = param_7;
  local_128 = param_8;
  local_120 = (undefined1 *)register0x00000008;
  if (puVar4 == (undefined8 *)0x0) {
                    /* try { // try from 0051eca4 to 0051ecb7 has its CatchHandler @ 0051eeb0 */
    FUN_004a3cf4(local_a8,&DAT_001a8e55);
                    /* try { // try from 0051ecbc to 0051ecc7 has its CatchHandler @ 0051ee98 */
    FUN_00519840(local_90,local_a8,*param_1);
                    /* try { // try from 0051ecc8 to 0051ecdb has its CatchHandler @ 0051ee78 */
    FUN_00519840(local_78,local_90,&DAT_001c4dc3);
    ppuStack_d8 = ppuStack_118;
    local_e0 = local_120;
    uStack_c8 = uStack_108;
    puStack_d0 = puStack_110;
                    /* try { // try from 0051ece4 to 0051ecfb has its CatchHandler @ 0051ee58 */
    FUN_0051e9b4(local_c0,"failed to determine attributes for the specified path",&local_e0);
                    /* try { // try from 0051ed14 to 0051ed1b has its CatchHandler @ 0051ee1c */
    puVar4 = (undefined8 *)FUN_00547cac(local_78,local_c0,local_a9);
    local_50 = puVar4[2];
    uStack_58 = puVar4[1];
    local_60 = *puVar4;
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    while( true ) {
      cVar2 = param_1[2] != 0;
      if (param_1[3] != 0) {
        cVar2 = cVar2 + '\x01';
      }
      if (cVar2 == '\0') break;
      if (cVar2 != '\x01') goto LAB_0051ede8;
      if (*(long *)(lVar1 + 0x28) != local_48) goto LAB_0051eef0;
                    /* try { // try from 0051ed8c to 0051ee03 has its CatchHandler @ 0051ee04 */
      FUN_00519924(&local_60,param_1[2],param_2);
      operator_delete(local_c0[0]);
    }
    if (*(long *)(lVar1 + 0x28) == local_48) {
      FUN_005198c8(&local_60,param_2);
LAB_0051ede8:
      if (*(long *)(lVar1 + 0x28) == local_48) {
        uVar3 = FUN_00519988(&local_60);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0051ed8c with catch @ 0051ee04
                        */
        FUN_0054f698(uVar3);
        if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 0051eecc to 0051eecf has its CatchHandler @ 0051eed0 */
          uVar3 = FUN_0054f980();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0051eecc with catch @ 0051eed0
                        */
                    /* try { // try from 0051eed4 to 0051eed7 has its CatchHandler @ 0051eef4 */
          FUN_0054f84c();
          if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
            FUN_00d0fa5c(uVar3);
          }
        }
      }
    }
  }
  else {
    uVar3 = *param_2;
    puVar4[1] = param_2[1];
    *puVar4 = uVar3;
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
LAB_0051eef0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0051eef8  FUN_0051eef8 =====

void FUN_0051eef8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_004e8250("vector");
}


// ===== 0051ef0c  FUN_0051ef0c =====

void FUN_0051ef0c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0051ef20("basic_string");
}


// ===== 0051ef20  FUN_0051ef20 =====

void FUN_0051ef20(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0054f64c(0x10);
                    /* try { // try from 0051ef3c to 0051ef43 has its CatchHandler @ 0051ef5c */
  FUN_0051ef70(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_0054f748(uVar1,PTR_PTR_00d51d70,PTR_FUN_00d51d78);
}


// ===== 0051ef70  FUN_0051ef70 =====

void FUN_0051ef70(undefined8 *param_1)

{
  FUN_00547104();
  *param_1 = &PTR_FUN_00d23c20;
  return;
}


// ===== 0051efa0  FUN_0051efa0 =====

void FUN_0051efa0(ulong *param_1)

{
  char *pcVar1;
  long lVar2;
  byte bVar3;
  char *pcVar4;
  undefined1 uVar5;
  char *pcVar6;
  ulong uVar7;
  char *pcVar8;
  uint uVar9;
  char *pcVar10;
  
  bVar3 = (byte)param_1[4];
  pcVar8 = (char *)*param_1;
  if (bVar3 - 2 < 3) {
    if (param_1[3] == 0) {
                    /* try { // try from 0051f1f8 to 0051f21f has its CatchHandler @ 0051f224 */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0x197,
                 "!empty()","string_view::back(): string is empty");
    }
    pcVar4 = (char *)(param_1[3] + param_1[2]);
  }
  else {
    pcVar4 = pcVar8;
    if (bVar3 - 5 < 2) goto LAB_0051f044;
  }
  pcVar1 = pcVar8 + param_1[1];
  if (pcVar4 == pcVar1) {
LAB_0051f044:
    *(undefined1 *)(param_1 + 4) = 6;
    param_1[2] = 0;
    param_1[3] = 0;
    return;
  }
  uVar9 = (uint)bVar3;
  if (uVar9 - 1 < 2) {
    if (pcVar4 == (char *)0x0) {
LAB_0051f0a4:
      pcVar8 = (char *)0x0;
    }
    else {
      lVar2 = -1;
      if (pcVar4 < pcVar1) {
        lVar2 = 1;
      }
      pcVar6 = pcVar4;
      if (*pcVar4 == '/') {
        do {
          pcVar6 = pcVar6 + lVar2;
          if (pcVar6 == pcVar1) {
            pcVar6 = pcVar1;
            if (pcVar8 == (char *)0x0) goto LAB_0051f178;
            break;
          }
        } while (*pcVar6 == '/');
        uVar5 = 3;
        uVar7 = (long)pcVar6 - (long)pcVar4;
        goto LAB_0051f180;
      }
      do {
        pcVar6 = pcVar6 + lVar2;
        pcVar8 = pcVar1;
        if (pcVar6 == pcVar1) break;
        pcVar8 = pcVar6;
      } while (*pcVar6 != '/');
    }
  }
  else {
    if (uVar9 != 3) {
      if (uVar9 != 4) {
        return;
      }
      pcVar6 = pcVar1;
      if (pcVar4 == (char *)0x0) {
        pcVar10 = (char *)0x0;
LAB_0051f0d0:
        if (pcVar10 == pcVar1) goto LAB_0051f110;
LAB_0051f0fc:
        pcVar6 = pcVar10;
        if (pcVar6 != (char *)0x0) {
          if (*pcVar6 != '/') {
            lVar2 = -1;
            pcVar10 = pcVar6;
            if (pcVar6 < pcVar1) {
              lVar2 = 1;
            }
            do {
              pcVar10 = pcVar10 + lVar2;
              if (pcVar10 == pcVar1) {
                pcVar10 = pcVar1;
                if (pcVar8 == (char *)0x0) goto LAB_0051f110;
                break;
              }
            } while (*pcVar10 != '/');
            uVar7 = (long)pcVar10 - (long)pcVar6;
            param_1[2] = (ulong)pcVar6;
            *(undefined1 *)(param_1 + 4) = 4;
            goto LAB_0051f1a4;
          }
          goto LAB_0051f110;
        }
        pcVar6 = (char *)0x0;
        *(undefined1 *)(param_1 + 4) = 5;
      }
      else {
        if (*pcVar4 == '/') {
          lVar2 = -1;
          pcVar10 = pcVar4;
          if (pcVar4 < pcVar1) {
            lVar2 = 1;
          }
          do {
            pcVar10 = pcVar10 + lVar2;
            if (pcVar10 == pcVar1) goto LAB_0051f110;
          } while (*pcVar10 == '/');
          goto LAB_0051f0d0;
        }
        pcVar10 = (char *)0x0;
        if (pcVar1 != (char *)0x0) goto LAB_0051f0fc;
LAB_0051f110:
        *(undefined1 *)(param_1 + 4) = 5;
        if ((pcVar4 == (char *)0x0) && (pcVar6 != (char *)0x0)) {
                    /* try { // try from 0051f120 to 0051f147 has its CatchHandler @ 0051f220 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0x131
                     ,"__len == 0 || __s != nullptr",
                     "string_view::string_view(_CharT *, size_t): received nullptr");
        }
      }
      uVar7 = (long)pcVar6 - (long)pcVar4;
      param_1[2] = (ulong)pcVar4;
LAB_0051f1a4:
      param_1[3] = uVar7;
      return;
    }
    if ((pcVar4 == (char *)0x0) || (*pcVar4 == '/')) goto LAB_0051f0a4;
    lVar2 = -1;
    pcVar6 = pcVar4;
    if (pcVar4 < pcVar1) {
      lVar2 = 1;
    }
    do {
      pcVar6 = pcVar6 + lVar2;
      pcVar8 = pcVar1;
      if (pcVar6 == pcVar1) break;
      pcVar8 = pcVar6;
    } while (*pcVar6 != '/');
  }
LAB_0051f178:
  uVar5 = 4;
  uVar7 = (long)pcVar8 - (long)pcVar4;
LAB_0051f180:
  *(undefined1 *)(param_1 + 4) = uVar5;
  param_1[2] = (ulong)pcVar4;
  param_1[3] = uVar7;
  return;
}


// ===== 0051f228  FUN_0051f228 =====

void FUN_0051f228(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_004e8250("vector");
}


// ===== 0051f23c  FUN_0051f23c =====

void FUN_0051f23c(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2] - param_1[1];
  if (lVar1 != 0) {
    param_1[2] = ((lVar1 - 0x18U) / 0x18) * -0x18 + param_1[2] + -0x18;
  }
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    return;
  }
  return;
}


// ===== 0051f284  FUN_0051f284 =====

void FUN_0051f284(long *param_1,undefined8 *param_2,undefined1 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined1 uVar4;
  long lVar5;
  void *pvVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  void *pvVar11;
  long lVar12;
  ulong uVar13;
  void *pvVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  lVar5 = tpidr_el0;
  lVar7 = *(long *)(lVar5 + 0x28);
  pvVar3 = (void *)*param_1;
  pvVar14 = (void *)param_1[1];
  lVar8 = (long)pvVar14 - (long)pvVar3 >> 3;
  uVar1 = lVar8 * -0x5555555555555555 + 1;
  if (uVar1 < 0xaaaaaaaaaaaaaab) {
    lVar12 = param_1[2] - (long)pvVar3 >> 3;
    uVar13 = lVar12 * 0x5555555555555556;
    if (uVar13 < uVar1 || uVar13 - uVar1 == 0) {
      uVar13 = uVar1;
    }
    if (0x555555555555554 < (ulong)(lVar12 * -0x5555555555555555)) {
      uVar13 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar13 == 0) {
      pvVar6 = (void *)0x0;
    }
    else {
      if (0xaaaaaaaaaaaaaaa < uVar13) goto LAB_0051f458;
      pvVar6 = operator_new(uVar13 * 0x18);
    }
    puVar9 = (undefined8 *)((long)pvVar6 + lVar8 * 8);
    if (pvVar6 == (void *)0x0) {
      if (*(long *)(lVar5 + 0x28) == lVar7) {
                    /* try { // try from 0051f418 to 0051f43f has its CatchHandler @ 0051f46c */
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                   ,0x23,"__location != nullptr","null pointer given to construct_at");
      }
    }
    else {
      uVar15 = *param_2;
      uVar4 = *param_3;
      puVar2 = puVar9 + 3;
      puVar9[1] = param_2[1];
      *puVar9 = uVar15;
      *(undefined1 *)((long)pvVar6 + lVar8 * 8 + 0x10) = uVar4;
      puVar10 = puVar9;
      if (pvVar14 != pvVar3) {
        do {
          pvVar11 = (void *)((long)pvVar14 + -0x18);
          uVar16 = *(undefined8 *)((long)pvVar14 + -0x10);
          uVar15 = *(undefined8 *)((long)pvVar14 + -0x18);
          puVar9 = puVar10 + -3;
          puVar10[-1] = *(undefined8 *)((long)pvVar14 + -8);
          puVar10[-2] = uVar16;
          puVar10[-3] = uVar15;
          puVar10 = puVar9;
          pvVar14 = pvVar11;
        } while (pvVar11 != pvVar3);
        pvVar14 = (void *)*param_1;
      }
      *param_1 = (long)puVar9;
      param_1[1] = (long)puVar2;
      param_1[2] = (long)((long)pvVar6 + uVar13 * 0x18);
      if (pvVar14 == (void *)0x0) {
        if (*(long *)(lVar5 + 0x28) == lVar7) {
          return;
        }
      }
      else if (*(long *)(lVar5 + 0x28) == lVar7) {
        operator_delete(pvVar14);
        return;
      }
    }
  }
  else {
    if (*(long *)(lVar5 + 0x28) != lVar7) goto LAB_0051f490;
    FUN_0051f228(param_1);
LAB_0051f458:
    if (*(long *)(lVar5 + 0x28) == lVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_00401ad4();
    }
  }
LAB_0051f490:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0051f494  FUN_0051f494 =====

void FUN_0051f494(undefined8 *param_1,ulong param_2)

{
  size_t __n;
  ulong uVar1;
  byte bVar2;
  undefined8 *__dest;
  ulong uVar3;
  uint uVar4;
  undefined8 *__src;
  uint uVar5;
  
  bVar2 = *(byte *)((long)param_1 + 0x17);
  uVar1 = param_1[1];
  if (-1 < (char)bVar2) {
    uVar1 = (ulong)bVar2;
  }
  if (param_2 < 0x17) {
    uVar5 = 1;
    __dest = param_1;
    __src = (undefined8 *)*param_1;
  }
  else {
    uVar4 = (uint)(char)bVar2;
    uVar3 = (param_1[2] & 0x7fffffffffffffff) - 1;
    if (-1 < (int)uVar4) {
      uVar3 = 0x16;
    }
    if (uVar3 < param_2) {
      __dest = (undefined8 *)operator_new(param_2 + 1);
    }
    else {
                    /* try { // try from 0051f514 to 0051f51b has its CatchHandler @ 0051f5f0 */
      __dest = (undefined8 *)operator_new(param_2 + 1);
    }
    uVar5 = uVar4 >> 0x1f;
    __src = (undefined8 *)*param_1;
    if (-1 < (int)uVar4) {
      __src = param_1;
    }
  }
  __n = uVar1 + 1;
  if ((__dest <= __src) && (__src < (undefined8 *)((long)__dest + __n))) {
                    /* try { // try from 0051f5a0 to 0051f5c7 has its CatchHandler @ 0051f610 */
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  if (__n != 0) {
    memmove(__dest,__src,__n);
  }
  if (uVar5 != 0) {
    operator_delete(__src);
  }
  if (param_2 < 0x17) {
    if (0x16 < uVar1) {
                    /* try { // try from 0051f5c8 to 0051f5ef has its CatchHandler @ 0051f60c */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                 "__s < __min_cap",
                 "__s should never be greater than or equal to the short string capacity");
    }
    *(char *)((long)param_1 + 0x17) = (char)uVar1;
  }
  else {
    *param_1 = __dest;
    param_1[1] = uVar1;
    param_1[2] = param_2 + 1 | 0x8000000000000000;
  }
  return;
}


// ===== 0051f614  FUN_0051f614 =====

/* WARNING: Removing unreachable block (ram,0x0051f77c) */
/* WARNING: Removing unreachable block (ram,0x0051f78c) */
/* WARNING: Removing unreachable block (ram,0x0051f79c) */
/* WARNING: Removing unreachable block (ram,0x0051f7ec) */

void FUN_0051f614(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 ***pppuVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 **local_a0;
  ulong uStack_98;
  byte local_89;
  void *local_88 [2];
  char local_71;
  undefined1 local_70 [24];
  undefined1 local_58 [24];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  puVar5 = (undefined8 *)param_1[1];
  if (puVar5 == (undefined8 *)0x0) {
    FUN_004a3cf4(local_88,&DAT_001a8e55);
                    /* try { // try from 0051f688 to 0051f693 has its CatchHandler @ 0051f870 */
    FUN_00519840(local_70,local_88,*param_1);
                    /* try { // try from 0051f694 to 0051f6a7 has its CatchHandler @ 0051f850 */
    FUN_00519840(local_58,local_70,&DAT_001c4dc3);
    uStack_b8 = param_4[1];
    local_c0 = *param_4;
    uStack_a8 = param_4[3];
    uStack_b0 = param_4[2];
                    /* try { // try from 0051f6b4 to 0051f6c7 has its CatchHandler @ 0051f830 */
    FUN_0051e9b4(&local_a0,param_3,&local_c0);
    pppuVar2 = (undefined8 ***)local_a0;
    if (-1 < (char)local_89) {
      uStack_98 = (ulong)local_89;
      pppuVar2 = &local_a0;
    }
                    /* try { // try from 0051f6e0 to 0051f6e7 has its CatchHandler @ 0051f7f4 */
    puVar5 = (undefined8 *)FUN_00547cac(local_58,pppuVar2,uStack_98);
    local_30 = puVar5[2];
    uStack_38 = puVar5[1];
    local_40 = *puVar5;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    if ((char)local_89 < '\0') goto LAB_0051f76c;
    while( true ) {
      if (local_71 < '\0') {
        operator_delete(local_88[0]);
      }
      cVar3 = param_1[2] != 0;
      if (param_1[3] != 0) {
        cVar3 = cVar3 + '\x01';
      }
      if (cVar3 == '\0') break;
      if (cVar3 != '\x01') goto LAB_0051f7c0;
      if (*(long *)(lVar1 + 0x28) != local_28) goto LAB_0051f8a0;
                    /* try { // try from 0051f764 to 0051f7df has its CatchHandler @ 0051f7e0 */
      FUN_00519924(&local_40,param_1[2],param_2);
LAB_0051f76c:
      operator_delete(local_a0);
    }
    if (*(long *)(lVar1 + 0x28) == local_28) {
      FUN_005198c8(&local_40,param_2);
LAB_0051f7c0:
                    /* catch() { ... } // from try @ 0051f764 with catch @ 0051f7e0 */
      if ((*(long *)(lVar1 + 0x28) == local_28) &&
         (uVar4 = FUN_00519988(&local_40), *(long *)(lVar1 + 0x28) == local_28)) {
                    /* WARNING: Subroutine does not return */
        FUN_00d0fa5c(uVar4);
      }
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_28) {
    uVar4 = *param_2;
    puVar5[1] = param_2[1];
    *puVar5 = uVar4;
    return;
  }
LAB_0051f8a0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0051f8a4  FUN_0051f8a4 =====

undefined8 * FUN_0051f8a4(undefined8 *param_1,long *param_2)

{
  byte bVar1;
  long extraout_x1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  if ((param_2[1] != 0) && (*(char *)*param_2 == '/')) {
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      *(undefined1 *)*param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)((long)param_1 + 0x17) = 0;
    }
    goto LAB_0051f984;
  }
  FUN_0051d984(param_1);
  if (extraout_x1 == 0) goto LAB_0051f984;
  bVar1 = *(byte *)((long)param_1 + 0x17);
  if ((char)bVar1 < '\0') {
    uVar2 = param_1[1];
    uVar4 = (param_1[2] & 0x7fffffffffffffff) - 1;
    if (uVar2 == uVar4) goto LAB_0051f924;
LAB_0051f948:
    param_1[1] = uVar2 + 1;
    puVar3 = (undefined8 *)*param_1;
  }
  else {
    if (bVar1 == 0x16) {
      uVar4 = 0x16;
LAB_0051f924:
      uVar2 = uVar4;
      FUN_0054774c(param_1,uVar2,1,uVar2,uVar2,0,0);
      goto LAB_0051f948;
    }
    if (0x15 < bVar1) {
                    /* try { // try from 0051f9a8 to 0051f9cf has its CatchHandler @ 0051f9d0 */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                 "__s < __min_cap",
                 "__s should never be greater than or equal to the short string capacity");
    }
    uVar2 = (ulong)bVar1;
    *(byte *)((long)param_1 + 0x17) = bVar1 + 1;
    puVar3 = param_1;
  }
  *(undefined2 *)((long)puVar3 + uVar2) = 0x2f;
LAB_0051f984:
  FUN_004b2050(param_1,*param_2,*param_2 + param_2[1]);
  return param_1;
}


// ===== 0051f9d4  FUN_0051f9d4 =====

undefined8 * FUN_0051f9d4(undefined8 *param_1,char *param_2)

{
  byte bVar1;
  long extraout_x1;
  char *pcVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  if (*param_2 == '/') {
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      *(undefined1 *)*param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)((long)param_1 + 0x17) = 0;
    }
    goto LAB_0051faa8;
  }
  FUN_0051d984(param_1);
  if (extraout_x1 == 0) goto LAB_0051faa8;
  bVar1 = *(byte *)((long)param_1 + 0x17);
  if ((char)bVar1 < '\0') {
    uVar3 = param_1[1];
    uVar5 = (param_1[2] & 0x7fffffffffffffff) - 1;
    if (uVar3 == uVar5) goto LAB_0051fa58;
LAB_0051fa7c:
    param_1[1] = uVar3 + 1;
    puVar4 = (undefined8 *)*param_1;
  }
  else {
    if (bVar1 == 0x16) {
      uVar5 = 0x16;
LAB_0051fa58:
      uVar3 = uVar5;
      FUN_0054774c(param_1,uVar3,1,uVar3,uVar3,0,0);
      goto LAB_0051fa7c;
    }
    if (0x15 < bVar1) {
                    /* try { // try from 0051fad4 to 0051fafb has its CatchHandler @ 0051fafc */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                 "__s < __min_cap",
                 "__s should never be greater than or equal to the short string capacity");
    }
    uVar3 = (ulong)bVar1;
    *(byte *)((long)param_1 + 0x17) = bVar1 + 1;
    puVar4 = param_1;
  }
  *(undefined2 *)((long)puVar4 + uVar3) = 0x2f;
LAB_0051faa8:
  pcVar2 = param_2 + -1;
  do {
    pcVar2 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  FUN_004b2050(param_1,param_2);
  return param_1;
}


// ===== 0051fb00  FUN_0051fb00 =====

undefined8 * FUN_0051fb00(undefined8 *param_1,char *param_2)

{
  byte bVar1;
  long extraout_x1;
  char *pcVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  if (*param_2 == '/') {
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      *(undefined1 *)*param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)((long)param_1 + 0x17) = 0;
    }
    goto LAB_0051fbd4;
  }
  FUN_0051d984(param_1);
  if (extraout_x1 == 0) goto LAB_0051fbd4;
  bVar1 = *(byte *)((long)param_1 + 0x17);
  if ((char)bVar1 < '\0') {
    uVar3 = param_1[1];
    uVar5 = (param_1[2] & 0x7fffffffffffffff) - 1;
    if (uVar3 == uVar5) goto LAB_0051fb84;
LAB_0051fba8:
    param_1[1] = uVar3 + 1;
    puVar4 = (undefined8 *)*param_1;
  }
  else {
    if (bVar1 == 0x16) {
      uVar5 = 0x16;
LAB_0051fb84:
      uVar3 = uVar5;
      FUN_0054774c(param_1,uVar3,1,uVar3,uVar3,0,0);
      goto LAB_0051fba8;
    }
    if (0x15 < bVar1) {
                    /* try { // try from 0051fc00 to 0051fc27 has its CatchHandler @ 0051fc28 */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                 "__s < __min_cap",
                 "__s should never be greater than or equal to the short string capacity");
    }
    uVar3 = (ulong)bVar1;
    *(byte *)((long)param_1 + 0x17) = bVar1 + 1;
    puVar4 = param_1;
  }
  *(undefined2 *)((long)puVar4 + uVar3) = 0x2f;
LAB_0051fbd4:
  pcVar2 = param_2 + -1;
  do {
    pcVar2 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  FUN_004b2050(param_1,param_2);
  return param_1;
}


// ===== 0051fc2c  FUN_0051fc2c =====

char * FUN_0051fc2c(void)

{
  return "future";
}


// ===== 0051fc38  FUN_0051fc38 =====

void FUN_0051fc38(undefined8 param_1,undefined8 param_2,uint param_3)

{
  if (param_3 < 5) {
    FUN_004a3cf4(param_1,&DAT_001f7810 + *(int *)(&DAT_001f7810 + (long)(int)param_3 * 4));
    return;
  }
  FUN_004a3cf4(param_1,"unspecified future_errc value\n");
  return;
}


// ===== 0051fc64  FUN_0051fc64 =====

void FUN_0051fc64(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  void *local_50 [2];
  char local_39;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = param_2;
  uStack_30 = param_3;
  FUN_00549d70(local_50,&local_38);
                    /* try { // try from 0051fc94 to 0051fc9f has its CatchHandler @ 0051fce4 */
  FUN_00547078(param_1,local_50);
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  param_1[3] = uStack_30;
  param_1[2] = local_38;
  *param_1 = &PTR_thunk_FUN_005523a0_00d200a8;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0051fd14  thunk_FUN_005523a0 =====

void thunk_FUN_005523a0(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  
  lVar4 = param_1[1];
  piVar5 = (int *)(lVar4 + -8);
  *param_1 = &PTR_FUN_00d23af8;
  do {
    iVar1 = *piVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
    if (bVar3) {
      *piVar5 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 < 0) {
    operator_delete((void *)(lVar4 + -0x18));
  }
  FUN_0055234c(param_1);
  return;
}


// ===== 0051fd18  FUN_0051fd18 =====

void FUN_0051fd18(void *param_1)

{
  FUN_005523a0();
  operator_delete(param_1);
  return;
}


// ===== 0051fd3c  FUN_0051fd3c =====

void FUN_0051fd3c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0051fd44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}


// ===== 0051fd48  FUN_0051fd48 =====

void FUN_0051fd48(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_005467a4(param_1 + 0x18);
  if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0x10);
    local_40 = 0;
    FUN_00518508(&local_40);
    if (lVar2 == 0) {
      *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 5;
      FUN_00518478(param_1 + 0x40);
      FUN_005467c8(param_1 + 0x18);
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
      goto LAB_0051fe14;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 0051fde8 to 0051fdef has its CatchHandler @ 0051fdf0 */
                    /* WARNING: Subroutine does not return */
    FUN_0051fe18(2);
  }
LAB_0051fe14:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0051fe18  FUN_0051fe18 =====

void FUN_0051fe18(undefined4 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_0054f64c(0x20);
  if (((DAT_00d61290 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d61290), iVar1 != 0)) {
    __cxa_atexit(PTR_FUN_00d51d88,&PTR_PTR_FUN_00d595b8,&PTR_LOOP_00d19390);
    FUN_0054ff1c(&DAT_00d61290);
  }
                    /* try { // try from 0051fe50 to 0051fe57 has its CatchHandler @ 0051feac */
  FUN_0051fc64(uVar2,param_1,&PTR_PTR_FUN_00d595b8);
                    /* WARNING: Subroutine does not return */
  FUN_0054f748(uVar2,&PTR_PTR_thunk_FUN_00552768_00d200c0,thunk_FUN_005523a0);
}


// ===== 0051fec0  FUN_0051fec0 =====

void FUN_0051fec0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_005467a4(param_1 + 0x18);
  if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
    local_50 = 0;
    lVar2 = *(long *)(param_1 + 0x10);
    FUN_00518508(&local_50);
    if (lVar2 == 0) {
      FUN_00518524((long *)(param_1 + 0x10),param_2);
      *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 4;
      FUN_00518478(param_1 + 0x40);
      FUN_005467c8(param_1 + 0x18);
      if (*(long *)(lVar1 + 0x28) == local_48) {
        return;
      }
      goto LAB_0051ffa4;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 0051ff78 to 0051ff7f has its CatchHandler @ 0051ff80 */
                    /* WARNING: Subroutine does not return */
    FUN_0051fe18(2);
  }
LAB_0051ffa4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0051ffa8  FUN_0051ffa8 =====

void FUN_0051ffa8(long param_1)

{
  FUN_005467a4(param_1 + 0x18);
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 4;
  FUN_00518478(param_1 + 0x40);
  FUN_005467c8(param_1 + 0x18);
  return;
}


// ===== 0051ffe8  FUN_0051ffe8 =====

void FUN_0051ffe8(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  
  uVar1 = *(uint *)(param_1 + 0xe);
  if ((uVar1 >> 2 & 1) == 0) {
    if ((uVar1 >> 3 & 1) != 0) {
      cVar2 = *(char *)(param_2 + 1);
      *(uint *)(param_1 + 0xe) = uVar1 & 0xfffffff7;
      if (cVar2 != '\0') {
        FUN_005467c8(*param_2);
        lVar3 = *param_1;
        *(undefined1 *)(param_2 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00520068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar3 + 0x18))(param_1);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_0054a0b0(1,"unique_lock::unlock: not locked");
    }
    do {
      FUN_00518490(param_1 + 8,param_2);
    } while ((*(byte *)(param_1 + 0xe) >> 2 & 1) == 0);
  }
  return;
}


// ===== 0052007c  FUN_0052007c =====

void FUN_0052007c(long *param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long *local_48;
  char local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  plVar1 = param_1 + 3;
  local_38 = *(long *)(lVar3 + 0x28);
  local_40 = '\x01';
  local_48 = plVar1;
  FUN_005467a4(plVar1);
  uVar2 = *(uint *)(param_1 + 0xe);
  if ((uVar2 >> 2 & 1) == 0) {
    if ((uVar2 >> 3 & 1) != 0) {
      *(uint *)(param_1 + 0xe) = uVar2 & 0xfffffff7;
      FUN_005467c8(plVar1);
      if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Could not recover jumptable at 0x0052014c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x18))(param_1);
        return;
      }
      goto LAB_00520150;
    }
    do {
      FUN_00518490(param_1 + 8,&local_48);
    } while ((*(byte *)(param_1 + 0xe) >> 2 & 1) == 0);
    if (local_40 != '\0') goto LAB_005200e4;
  }
  else {
LAB_005200e4:
    FUN_005467c8(local_48);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
LAB_00520150:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00520154  FUN_00520154 =====

void FUN_00520154(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0051fe18(3);
}


// ===== 00520164  FUN_00520164 =====

void FUN_00520164(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  param_1 = (long *)*param_1;
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00520190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}


// ===== 00520194  FUN_00520194 =====

void FUN_00520194(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x78);
  *(undefined4 *)(puVar1 + 0xe) = 0;
  *puVar1 = &PTR_FUN_00d200e8;
  puVar1[1] = 0;
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
  *param_1 = puVar1;
  return;
}


// ===== 005201dc  FUN_005201dc =====

void FUN_005201dc(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  undefined **local_88 [2];
  undefined8 local_78;
  undefined **ppuStack_70;
  undefined1 auStack_68 [8];
  void *local_60 [2];
  char local_49;
  undefined8 local_48;
  undefined **ppuStack_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  lVar6 = *param_1;
  if (lVar6 != 0) {
    if ((*(byte *)(lVar6 + 0x70) & 1) == 0) {
      lVar6 = *(long *)(lVar6 + 0x10);
      local_60[0] = (void *)0x0;
      FUN_00518508(local_60);
      if ((lVar6 == 0) && (lVar6 = *param_1, 0 < *(long *)(lVar6 + 8))) {
        if (((DAT_00d61290 & 1) == 0) && (iVar5 = FUN_0054fdd4(&DAT_00d61290), iVar5 != 0)) {
          __cxa_atexit(PTR_FUN_00d51d88,&PTR_PTR_FUN_00d595b8,&PTR_LOOP_00d19390);
          FUN_0054ff1c(&DAT_00d61290);
        }
        local_48 = 4;
        ppuStack_40 = &PTR_PTR_FUN_00d595b8;
                    /* try { // try from 00520254 to 0052025f has its CatchHandler @ 00520360 */
        FUN_00549d70(local_60,&local_48);
                    /* try { // try from 00520260 to 0052026b has its CatchHandler @ 00520344 */
        FUN_00547078(local_88,local_60);
        if (local_49 < '\0') {
          operator_delete(local_60[0]);
        }
        local_88[0] = &PTR_thunk_FUN_005523a0_00d200a8;
        ppuStack_70 = ppuStack_40;
        local_78 = local_48;
        FUN_0052036c(auStack_68,local_88);
                    /* try { // try from 0052029c to 005202a7 has its CatchHandler @ 00520360 */
        FUN_0051fec0(lVar6,auStack_68);
        FUN_00518508(auStack_68);
        FUN_005523a0(local_88);
      }
    }
    param_1 = (long *)*param_1;
    plVar1 = param_1 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*param_1 + 0x10))();
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0052036c  FUN_0052036c =====

void FUN_0052036c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_0054f64c(0x20);
  FUN_00547184(puVar1,param_1);
  *puVar1 = &PTR_thunk_FUN_005523a0_00d200a8;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[2] = uVar2;
                    /* try { // try from 005203ac to 005203c3 has its CatchHandler @ 005203c4 */
                    /* WARNING: Subroutine does not return */
  FUN_0054f748(puVar1,&PTR_PTR_thunk_FUN_00552768_00d200c0,thunk_FUN_005523a0);
}


// ===== 005203e8  FUN_005203e8 =====

void FUN_005203e8(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *param_2;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0051fe18(3);
  }
  *param_1 = lVar4;
  FUN_005467a4(lVar4 + 0x18);
  if ((*(uint *)(lVar4 + 0x70) >> 1 & 1) == 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(uint *)(lVar4 + 0x70) = *(uint *)(lVar4 + 0x70) | 2;
    FUN_005467c8(lVar4 + 0x18);
    return;
  }
                    /* try { // try from 00520448 to 0052044f has its CatchHandler @ 00520450 */
                    /* WARNING: Subroutine does not return */
  FUN_0051fe18(1);
}


// ===== 00520464  FUN_00520464 =====

void FUN_00520464(long *param_1)

{
  if (*param_1 != 0) {
    FUN_0051fd48();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0051fe18(3);
}


// ===== 00520484  FUN_00520484 =====

void FUN_00520484(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d200e8;
  FUN_005184d4(param_1 + 8);
  FUN_00546ab0(param_1 + 3);
  FUN_00518508(param_1 + 2);
  FUN_005466c0(param_1);
  operator_delete(param_1);
  return;
}


// ===== 005204d4  FUN_005204d4 =====

void FUN_005204d4(void *param_1)

{
  FUN_0054a148();
  operator_delete(param_1);
  return;
}


// ===== 005204f8  FUN_005204f8 =====

ulong FUN_005204f8(ulong param_1)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  if (param_1 < 0xd4) {
    uVar5 = 0x30;
    puVar4 = (uint *)&UNK_001f7824;
    do {
      uVar6 = uVar5 >> 1;
      puVar1 = puVar4 + uVar6 + 1;
      uVar5 = uVar5 + ~uVar6;
      if (param_1 <= puVar4[uVar6]) {
        puVar1 = puVar4;
        uVar5 = uVar6;
      }
      puVar4 = puVar1;
    } while (uVar5 != 0);
    return (ulong)*puVar1;
  }
  if (0xffffffffffffffc5 < param_1) {
    uVar2 = FUN_00520c10("__next_prime overflow");
    uVar3 = FUN_0054f64c(0x10);
    FUN_00520c60(uVar3,uVar2);
                    /* WARNING: Subroutine does not return */
    FUN_0054f748(uVar3,PTR_PTR_00d51d90,PTR_FUN_00d51d98);
  }
  uVar6 = 0x30;
  uVar5 = param_1 / 0xd2;
  puVar4 = (uint *)&DAT_001f78e4;
  do {
    uVar9 = uVar6 >> 1;
    puVar1 = puVar4 + uVar9 + 1;
    uVar6 = uVar6 + ~uVar9;
    if (param_1 % 0xd2 <= (ulong)puVar4[uVar9]) {
      puVar1 = puVar4;
      uVar6 = uVar9;
    }
    puVar4 = puVar1;
  } while (uVar6 != 0);
  lVar8 = (long)(puVar1 + -0x7de39) >> 2;
  do {
    lVar7 = lVar8;
    uVar6 = uVar5 * 0xd2 + (ulong)*(uint *)(&DAT_001f78e4 + lVar7 * 4);
    lVar8 = 0x14;
    do {
      uVar10 = (ulong)*(uint *)(&UNK_001f7824 + lVar8);
      uVar9 = 0;
      if (uVar10 != 0) {
        uVar9 = uVar6 / uVar10;
      }
      if (uVar9 < uVar10) {
        return uVar6;
      }
      if (uVar6 == uVar9 * uVar10) goto LAB_00520bec;
      lVar8 = lVar8 + 4;
    } while (lVar8 != 0xbc);
    uVar9 = 0x1a3;
    do {
      uVar11 = uVar9 - 0xd0;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar11) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0xc6;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0xc6) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0xc4;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0xc4) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0xc0;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0xc0) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0xbe;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0xbe) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0xba;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0xba) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0xb4;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0xb4) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0xb2;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0xb2) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0xac;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0xac) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0xa8;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0xa8) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0xa6;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0xa6) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0xa2;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0xa2) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x9c;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x9c) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x96;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x96) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x94;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x94) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x8e;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x8e) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x8a;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x8a) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x88;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x88) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x82;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x82) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x7e;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x7e) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x78;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x78) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x70;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x70) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x6c;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x6c) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x6a;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x6a) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x66;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x66) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 100;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 100) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x60;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x60) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x58;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x58) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x52;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x52) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x4e;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x4e) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x48;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x48) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x46;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x46) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x42;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x42) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x3c;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x3c) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x3a;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x3a) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x34;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x34) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x2e;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x2e) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x2a;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x2a) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x28;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x28) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x24;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x24) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x1e;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x1e) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x1c;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x1c) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x16;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x16) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x12;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x12) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0x10;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0x10) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 0xc;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 0xc) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar11 = uVar9 - 10;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      if (uVar10 < uVar9 - 10) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar11) break;
      uVar10 = 0;
      if (uVar9 != 0) {
        uVar10 = uVar6 / uVar9;
      }
      if (uVar10 < uVar9) {
        return uVar6;
      }
      uVar10 = uVar10 * uVar9;
      uVar9 = uVar9 + 0xd2;
    } while (uVar6 != uVar10);
LAB_00520bec:
    if (lVar7 == 0x2f) {
      uVar5 = uVar5 + 1;
    }
    lVar8 = 0;
    if (lVar7 != 0x2f) {
      lVar8 = lVar7 + 1;
    }
  } while( true );
}


// ===== 00520c10  FUN_00520c10 =====

void FUN_00520c10(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0054f64c(0x10);
                    /* try { // try from 00520c2c to 00520c33 has its CatchHandler @ 00520c4c */
  FUN_00520c60(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_0054f748(uVar1,PTR_PTR_00d51d90,PTR_FUN_00d51d98);
}


// ===== 00520c60  FUN_00520c60 =====

void FUN_00520c60(undefined8 *param_1)

{
  FUN_0054723c();
  *param_1 = &PTR_FUN_00d23cb8;
  return;
}


// ===== 00520c90  FUN_00520c90 =====

char * FUN_00520c90(void)

{
  return "iostream";
}


// ===== 00520c9c  FUN_00520c9c =====

void FUN_00520c9c(undefined8 param_1,undefined8 param_2,int param_3)

{
  if ((param_3 != 1) && (param_3 < 0x1000)) {
    FUN_00549968();
    return;
  }
  FUN_004a3cf4(param_1,"unspecified iostream_category error");
  return;
}


// ===== 00520cc0  thunk_FUN_00552450 =====

void thunk_FUN_00552450(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  
  lVar4 = param_1[1];
  piVar5 = (int *)(lVar4 + -8);
  *param_1 = &PTR_FUN_00d23b20;
  do {
    iVar1 = *piVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
    if (bVar3) {
      *piVar5 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 < 0) {
    operator_delete((void *)(lVar4 + -0x18));
  }
  FUN_0055234c(param_1);
  return;
}


// ===== 00520cc4  FUN_00520cc4 =====

void FUN_00520cc4(void *param_1)

{
  thunk_FUN_00552450();
  operator_delete(param_1);
  return;
}


// ===== 00520ce8  FUN_00520ce8 =====

void FUN_00520ce8(undefined8 param_1,long param_2)

{
  FUN_0053cecc(param_1,param_2 + 0x30);
  return;
}


// ===== 00520cf4  FUN_00520cf4 =====

void FUN_00520cf4(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_00d201b8;
  if (param_1[9] != 0) {
    lVar1 = param_1[9] + -1;
    do {
                    /* try { // try from 00520d28 to 00520d33 has its CatchHandler @ 00520d70 */
      (**(code **)(param_1[7] + lVar1 * 8))(0,param_1,*(undefined4 *)(param_1[8] + lVar1 * 4));
      lVar1 = lVar1 + -1;
    } while (lVar1 != -1);
  }
  FUN_0053ceec(param_1 + 6);
  free((void *)param_1[7]);
  free((void *)param_1[8]);
  free((void *)param_1[0xb]);
  free((void *)param_1[0xe]);
  return;
}


// ===== 00520d74  FUN_00520d74 =====

void FUN_00520d74(void *param_1)

{
  FUN_00520cf4();
  operator_delete(param_1);
  return;
}


// ===== 00520d98  FUN_00520d98 =====

void FUN_00520d98(long param_1,uint param_2)

{
  param_2 = *(long *)(param_1 + 0x28) == 0 | param_2;
  *(uint *)(param_1 + 0x20) = param_2;
  if ((*(uint *)(param_1 + 0x24) & param_2) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00520dd4("ios_base::clear");
}


// ===== 00520dd4  FUN_00520dd4 =====

void FUN_00520dd4(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_0054f64c(0x20);
  if (((DAT_00d61298 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d61298), iVar1 != 0)) {
    __cxa_atexit(PTR_FUN_00d51d88,&PTR_PTR_FUN_00d595c0,&PTR_LOOP_00d19390);
    FUN_0054ff1c(&DAT_00d61298);
  }
                    /* try { // try from 00520e00 to 00520e17 has its CatchHandler @ 00520e78 */
  FUN_00549f94(puVar2,1,&PTR_PTR_FUN_00d595c0,param_1);
  *puVar2 = &PTR_thunk_FUN_00552450_00d20190;
                    /* WARNING: Subroutine does not return */
  FUN_0054f748(puVar2,&PTR_PTR_thunk_FUN_00552768_00d201d8,thunk_FUN_00552450);
}


// ===== 00520e8c  FUN_00520e8c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00520e8c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(long *)(param_1 + 0x28) = param_2;
  uVar2 = _UNK_001f40e8;
  uVar1 = _DAT_001f40e0;
  *(uint *)(param_1 + 0x20) = (uint)(param_2 == 0);
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0x1002;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  FUN_0053ce34(param_1 + 0x30);
  return;
}


// ===== 00520ed4  FUN_00520ed4 =====

void FUN_00520ed4(long param_1)

{
  long lVar1;
  void *pvVar2;
  
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 1;
  if ((*(byte *)(param_1 + 0x24) & 1) == 0) {
    return;
  }
  lVar1 = FUN_0054f980();
  *(uint *)(lVar1 + 0x20) = *(uint *)(lVar1 + 0x20) | 4;
  if ((*(byte *)(lVar1 + 0x24) >> 2 & 1) == 0) {
    return;
  }
  pvVar2 = (void *)FUN_0054f980();
  FUN_0054a148();
  operator_delete(pvVar2);
  return;
}


// ===== 00520efc  FUN_00520efc =====

void FUN_00520efc(long param_1)

{
  void *pvVar1;
  
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 4;
  if ((*(byte *)(param_1 + 0x24) >> 2 & 1) == 0) {
    return;
  }
  pvVar1 = (void *)FUN_0054f980();
  FUN_0054a148();
  operator_delete(pvVar1);
  return;
}


// ===== 00520f24  FUN_00520f24 =====

void FUN_00520f24(void *param_1)

{
  FUN_0054a148();
  operator_delete(param_1);
  return;
}


// ===== 00520f48  FUN_00520f48 =====

void FUN_00520f48(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar7 = *(undefined8 *)PTR_stdin_00d51db0;
  FUN_0054a4c8(&DAT_00d617d0);
  DAT_00d617d0 = &PTR_FUN_00d20218;
  DAT_00d61820 = &DAT_00d61838;
  DAT_00d6182c = 0xffffffff;
  DAT_00d61830 = 0;
  DAT_00d61810 = uVar7;
  FUN_0053cecc(auStack_70,&DAT_00d617d8);
                    /* try { // try from 00520fcc to 00520fdb has its CatchHandler @ 005213dc */
  (*(code *)DAT_00d617d0[2])(&DAT_00d617d0,auStack_70);
  FUN_0053ceec(auStack_70);
  DAT_00d612c8 = PTR_DAT_00d51db8 + 0x40;
  DAT_00d612b8 = PTR_DAT_00d51db8 + 0x18;
  lVar6 = *(long *)PTR_DAT_00d51db8;
  DAT_00d612c0 = 0;
                    /* try { // try from 00521008 to 00521017 has its CatchHandler @ 005213c8 */
  FUN_00520e8c((long)&DAT_00d612b8 + lVar6,&DAT_00d617d0);
  puVar1 = PTR_stdout_00d51cb0;
  *(undefined8 *)(lVar6 + 0xd61340) = 0;
  *(undefined4 *)(lVar6 + 0xd61348) = 0xffffffff;
  FUN_00521414(&DAT_00d61840,*(undefined8 *)puVar1,&DAT_00d618a0);
  puVar5 = PTR_DAT_00d51dc0;
  puVar1 = PTR_DAT_00d51dc0 + 0x40;
  DAT_00d61408 = PTR_DAT_00d51dc0 + 0x18;
  lVar6 = *(long *)PTR_DAT_00d51dc0;
  DAT_00d61410 = puVar1;
                    /* try { // try from 0052106c to 00521077 has its CatchHandler @ 005213b4 */
  FUN_00520e8c((long)&DAT_00d61408 + lVar6,&DAT_00d61840);
  puVar4 = PTR_stderr_00d51cb8;
  *(undefined8 *)(lVar6 + 0xd61490) = 0;
  *(undefined4 *)((long)&DAT_00d61498 + lVar6) = 0xffffffff;
  FUN_00521414(&DAT_00d618a8,*(undefined8 *)puVar4,&DAT_00d61908);
  puVar2 = puVar5 + 0x18;
  DAT_00d61548 = puVar2;
  DAT_00d61550 = puVar1;
                    /* try { // try from 005210b8 to 005210c3 has its CatchHandler @ 005213a0 */
  FUN_00520e8c((long)&DAT_00d61548 + lVar6,&DAT_00d618a8);
  puVar1 = DAT_00d61548;
  *(undefined8 *)(lVar6 + 0xd615d0) = 0;
  DAT_00d61690 = puVar5 + 0x40;
  *(undefined4 *)((long)&DAT_00d615d8 + lVar6) = 0xffffffff;
  DAT_00d61688 = puVar2;
                    /* try { // try from 005210f4 to 005210fb has its CatchHandler @ 0052138c */
  FUN_00520e8c((long)&DAT_00d61688 + lVar6,*(undefined8 *)(*(long *)(puVar1 + -0x18) + 0xd61570));
  puVar1 = DAT_00d612b8;
  *(undefined8 *)(lVar6 + 0xd61710) = 0;
  *(undefined4 *)((long)&DAT_00d61718 + lVar6) = 0xffffffff;
  puVar2 = DAT_00d61548;
  *(undefined ***)(*(long *)(puVar1 + -0x18) + 0xd61340) = &DAT_00d61408;
  lVar6 = *(long *)(puVar2 + -0x18);
  *(uint *)((long)&DAT_00d61550 + lVar6) = *(uint *)((long)&DAT_00d61550 + lVar6) | 0x2000;
  uVar7 = *(undefined8 *)PTR_stdin_00d51db0;
  *(undefined ***)(*(long *)(puVar2 + -0x18) + 0xd615d0) = &DAT_00d61408;
  FUN_0054cf68(&DAT_00d61910);
  DAT_00d61910 = &PTR_FUN_00d20348;
  DAT_00d6196c = 0xffffffff;
  DAT_00d61970 = 0;
  DAT_00d61960 = &DAT_00d61978;
  DAT_00d61950 = uVar7;
  FUN_0053cecc(auStack_70,&DAT_00d61918);
                    /* try { // try from 0052118c to 00521197 has its CatchHandler @ 00521370 */
  (*(code *)DAT_00d61910[2])(&DAT_00d61910,auStack_70);
  FUN_0053ceec(auStack_70);
  DAT_00d61370 = PTR_DAT_00d51dc8 + 0x40;
  DAT_00d61360 = PTR_DAT_00d51dc8 + 0x18;
  lVar6 = *(long *)PTR_DAT_00d51dc8;
  DAT_00d61368 = 0;
                    /* try { // try from 005211c4 to 005211d3 has its CatchHandler @ 0052135c */
  FUN_00520e8c((long)&DAT_00d61360 + lVar6,&DAT_00d61910);
  puVar1 = PTR_stdout_00d51cb0;
  *(undefined8 *)(lVar6 + 0xd613e8) = 0;
  *(undefined4 *)(lVar6 + 0xd613f0) = 0xffffffff;
  FUN_005214ec(&DAT_00d61980,*(undefined8 *)puVar1,&DAT_00d619e0);
  puVar5 = PTR_DAT_00d51dd0;
  puVar1 = PTR_DAT_00d51dd0 + 0x40;
  DAT_00d614a8 = PTR_DAT_00d51dd0 + 0x18;
  lVar6 = *(long *)PTR_DAT_00d51dd0;
  DAT_00d614b0 = puVar1;
                    /* try { // try from 00521228 to 00521233 has its CatchHandler @ 00521348 */
  FUN_00520e8c((long)&DAT_00d614a8 + lVar6,&DAT_00d61980);
  uVar7 = *(undefined8 *)puVar4;
  *(undefined8 *)(lVar6 + 0xd61530) = 0;
  *(undefined4 *)((long)&DAT_00d61538 + lVar6) = 0xffffffff;
  FUN_005214ec(&DAT_00d619e8,uVar7,&DAT_00d61a48);
  puVar2 = puVar5 + 0x18;
  DAT_00d615e8 = puVar2;
  DAT_00d615f0 = puVar1;
                    /* try { // try from 0052126c to 00521277 has its CatchHandler @ 00521334 */
  FUN_00520e8c((long)&DAT_00d615e8 + lVar6,&DAT_00d619e8);
  puVar1 = DAT_00d615e8;
  *(undefined8 *)(lVar6 + 0xd61670) = 0;
  DAT_00d61730 = puVar5 + 0x40;
  *(undefined4 *)((long)&DAT_00d61678 + lVar6) = 0xffffffff;
  DAT_00d61728 = puVar2;
                    /* try { // try from 005212a8 to 005212af has its CatchHandler @ 00521320 */
  FUN_00520e8c((long)&DAT_00d61728 + lVar6,*(undefined8 *)(*(long *)(puVar1 + -0x18) + 0xd61610));
  puVar1 = DAT_00d61360;
  *(undefined4 *)((long)&DAT_00d617b8 + lVar6) = 0xffffffff;
  *(undefined8 *)(lVar6 + 0xd617b0) = 0;
  puVar2 = DAT_00d615e8;
  *(undefined ***)(*(long *)(puVar1 + -0x18) + 0xd613e8) = &DAT_00d614a8;
  lVar6 = *(long *)(puVar2 + -0x18);
  *(uint *)((long)&DAT_00d615f0 + lVar6) = *(uint *)((long)&DAT_00d615f0 + lVar6) | 0x2000;
  *(undefined ***)(*(long *)(puVar2 + -0x18) + 0xd61670) = &DAT_00d614a8;
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00521414  FUN_00521414 =====

void FUN_00521414(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  byte bVar2;
  long *plVar3;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_0054a4c8();
  param_1[8] = param_2;
  *param_1 = &PTR_FUN_00d202b0;
  FUN_0053cecc(auStack_40,param_1 + 1);
                    /* try { // try from 00521460 to 0052146f has its CatchHandler @ 005214bc */
  plVar3 = (long *)FUN_0053cfd4(auStack_40,PTR_DAT_00d51dd8);
  FUN_0053ceec(auStack_40);
  param_1[9] = plVar3;
  param_1[10] = param_3;
  bVar2 = (**(code **)(*plVar3 + 0x38))(plVar3);
  *(byte *)(param_1 + 0xb) = bVar2 & 1;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005214ec  FUN_005214ec =====

void FUN_005214ec(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  byte bVar2;
  long *plVar3;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_0054cf68();
  param_1[8] = param_2;
  *param_1 = &PTR_FUN_00d203e0;
  FUN_0053cecc(auStack_40,param_1 + 1);
                    /* try { // try from 00521538 to 00521547 has its CatchHandler @ 00521594 */
  plVar3 = (long *)FUN_0053cfd4(auStack_40,PTR_DAT_00d51de0);
  FUN_0053ceec(auStack_40);
  param_1[9] = plVar3;
  param_1[10] = param_3;
  bVar2 = (**(code **)(*plVar3 + 0x38))(plVar3);
  *(byte *)(param_1 + 0xb) = bVar2 & 1;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005215c4  FUN_005215c4 =====

void FUN_005215c4(void)

{
                    /* try { // try from 005215cc to 005215fb has its CatchHandler @ 00521604 */
  FUN_0054aa28(&DAT_00d61408);
  FUN_0054aa28(&DAT_00d61688);
  FUN_0054d2c4(&DAT_00d614a8);
  FUN_0054d2c4(&DAT_00d61728);
  return;
}


// ===== 00521608  FUN_00521608 =====

void FUN_00521608(void *param_1)

{
  FUN_0054a488();
  operator_delete(param_1);
  return;
}


// ===== 0052162c  FUN_0052162c =====

void FUN_0052162c(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  
  plVar3 = (long *)FUN_0053cfd4(param_2,PTR_DAT_00d51dd8);
  lVar5 = *plVar3;
  *(long **)(param_1 + 0x48) = plVar3;
  uVar2 = (**(code **)(lVar5 + 0x30))();
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  bVar1 = (**(code **)(**(long **)(param_1 + 0x48) + 0x38))(*(long **)(param_1 + 0x48));
  *(byte *)(param_1 + 0x61) = bVar1 & 1;
  if (*(int *)(param_1 + 0x58) < 9) {
    return;
  }
  uVar4 = FUN_00536bb4("unsupported locale for standard input");
  FUN_005217d0(uVar4,0);
  return;
}


// ===== 005216a4  FUN_005216a4 =====

void FUN_005216a4(undefined8 param_1)

{
  FUN_005217d0(param_1,0);
  return;
}


// ===== 005216ac  FUN_005216ac =====

void FUN_005216ac(undefined8 param_1)

{
  FUN_005217d0(param_1,1);
  return;
}


// ===== 005216b4  FUN_005216b4 =====

int FUN_005216b4(long param_1,int param_2)

{
  byte *pbVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  undefined1 auStack_58 [12];
  undefined1 local_4c [4];
  undefined1 *local_48;
  undefined1 local_40 [8];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_2 == -1) {
    if (*(char *)(param_1 + 0x60) == '\0') {
      param_2 = *(int *)(param_1 + 0x5c);
      bVar3 = param_2 != -1;
      goto LAB_005217a0;
    }
  }
  else {
    if (*(char *)(param_1 + 0x60) == '\0') {
LAB_00521788:
      bVar3 = true;
      *(int *)(param_1 + 0x5c) = param_2;
LAB_005217a0:
      *(bool *)(param_1 + 0x60) = bVar3;
      goto LAB_005217a4;
    }
    local_4c[0] = (undefined1)*(undefined4 *)(param_1 + 0x5c);
    iVar4 = (**(code **)(**(long **)(param_1 + 0x48) + 0x18))
                      (*(long **)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),local_4c,
                       (ulong)local_4c | 1,auStack_58,local_40,&local_38,&local_48);
    if (1 < iVar4 - 1U) {
      if (iVar4 == 3) {
        local_48 = (undefined1 *)((ulong)local_40 | 1);
        local_40[0] = (undefined1)*(undefined4 *)(param_1 + 0x5c);
      }
      do {
        if (local_48 <= local_40) goto LAB_00521788;
        pbVar1 = local_48 + -1;
        local_48 = local_48 + -1;
        iVar4 = ungetc((uint)*pbVar1,*(FILE **)(param_1 + 0x40));
      } while (iVar4 != -1);
    }
  }
  param_2 = -1;
LAB_005217a4:
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_2;
}


// ===== 005217d0  FUN_005217d0 =====

void FUN_005217d0(long param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [12];
  byte local_64 [4];
  byte local_60 [8];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_1 + 0x60) != '\0') {
    uVar2 = *(uint *)(param_1 + 0x5c);
    if ((param_2 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
    }
    goto LAB_0052181c;
  }
  uVar2 = *(uint *)(param_1 + 0x58);
  uVar4 = 0;
  if ((int)uVar2 < 2) {
    uVar2 = 1;
  }
  uVar5 = (ulong)uVar2;
  do {
    uVar2 = getc(*(FILE **)(param_1 + 0x40));
    if (uVar2 == 0xffffffff) goto LAB_0052181c;
    local_60[uVar4] = (byte)uVar2;
    uVar4 = uVar4 + 1;
  } while (uVar5 != uVar4);
  if (*(char *)(param_1 + 0x61) == '\0') {
    while( true ) {
      uVar6 = **(undefined8 **)(param_1 + 0x50);
      iVar3 = (**(code **)(**(long **)(param_1 + 0x48) + 0x20))
                        (*(long **)(param_1 + 0x48),*(undefined8 **)(param_1 + 0x50),local_60,
                         local_60 + uVar5,auStack_70,local_64,(ulong)local_64 | 1,auStack_78);
      if (iVar3 != 1) break;
      **(undefined8 **)(param_1 + 0x50) = uVar6;
      if ((uVar5 == 8) || (iVar3 = getc(*(FILE **)(param_1 + 0x40)), iVar3 == -1))
      goto LAB_00521944;
      local_60[uVar5] = (byte)iVar3;
      uVar5 = uVar5 + 1;
    }
    if (iVar3 == 2) {
LAB_00521944:
      uVar2 = 0xffffffff;
      goto LAB_0052181c;
    }
    if (iVar3 == 3) goto LAB_00521884;
  }
  else {
LAB_00521884:
    local_64[0] = local_60[0];
  }
  if ((param_2 & 1) == 0) {
    uVar4 = uVar5 & 0xffffffff;
    do {
      if ((long)uVar4 < 1) {
        uVar2 = (uint)local_64[0];
        goto LAB_0052181c;
      }
      iVar3 = ungetc((uint)local_60[uVar4 - 1 & 0xffffffff],*(FILE **)(param_1 + 0x40));
      uVar4 = uVar4 - 1;
    } while (iVar3 != -1);
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)local_64[0];
    *(uint *)(param_1 + 0x5c) = (uint)local_64[0];
  }
LAB_0052181c:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


// ===== 00521958  FUN_00521958 =====

void FUN_00521958(void *param_1)

{
  FUN_0054a488();
  operator_delete(param_1);
  return;
}


// ===== 0052197c  FUN_0052197c =====

void FUN_0052197c(long *param_1,undefined8 param_2)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  
  (**(code **)(*param_1 + 0x30))();
  plVar2 = (long *)FUN_0053cfd4(param_2,PTR_DAT_00d51dd8);
  lVar3 = *plVar2;
  param_1[9] = (long)plVar2;
  bVar1 = (**(code **)(lVar3 + 0x38))();
  *(byte *)(param_1 + 0xb) = bVar1 & 1;
  return;
}


// ===== 005219d0  FUN_005219d0 =====

void FUN_005219d0(long param_1)

{
  long lVar1;
  int iVar2;
  size_t sVar3;
  size_t __n;
  long local_58;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  do {
    iVar2 = (**(code **)(**(long **)(param_1 + 0x48) + 0x28))
                      (*(long **)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),auStack_50,
                       &local_48,&local_58);
    __n = local_58 - (long)auStack_50;
    sVar3 = fwrite(auStack_50,1,__n,*(FILE **)(param_1 + 0x40));
    if (sVar3 != __n) goto LAB_00521a54;
  } while (iVar2 == 1);
  if (iVar2 == 2) {
LAB_00521a54:
    iVar2 = -1;
  }
  else {
    iVar2 = fflush(*(FILE **)(param_1 + 0x40));
    iVar2 = -(uint)(iVar2 != 0);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


// ===== 00521a98  FUN_00521a98 =====

size_t FUN_00521a98(long *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  size_t sVar2;
  
  if ((char)param_1[0xb] != '\0') {
    sVar2 = fwrite(param_2,1,param_3,(FILE *)param_1[8]);
    return sVar2;
  }
  if ((long)param_3 < 1) {
    param_3 = 0;
  }
  else {
    sVar2 = 0;
    do {
      iVar1 = (**(code **)(*param_1 + 0x68))(param_1,*(undefined1 *)((long)param_2 + sVar2));
      if (iVar1 == -1) {
        return sVar2;
      }
      sVar2 = sVar2 + 1;
    } while (param_3 != sVar2);
  }
  return param_3;
}


// ===== 00521b30  FUN_00521b30 =====

int FUN_00521b30(long param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  undefined1 *__ptr;
  size_t sVar3;
  FILE *__s;
  size_t __n;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 local_64 [4];
  undefined1 auStack_60 [8];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_2 == -1) {
    param_2 = 0;
  }
  else {
    local_64[0] = (undefined1)param_2;
    if (*(char *)(param_1 + 0x58) == '\0') {
      __ptr = local_64;
      local_70 = auStack_60;
      do {
        uVar2 = (**(code **)(**(long **)(param_1 + 0x48) + 0x18))
                          (*(long **)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),__ptr,
                           (ulong)local_64 | 1,&local_78,auStack_60,&local_58,&local_70);
        if (local_78 == __ptr) goto LAB_00521b90;
        if (uVar2 == 3) {
          __s = *(FILE **)(param_1 + 0x40);
          goto LAB_00521b7c;
        }
        if ((1 < uVar2) ||
           (__n = (long)local_70 - (long)auStack_60,
           sVar3 = fwrite(auStack_60,1,__n,*(FILE **)(param_1 + 0x40)), sVar3 != __n))
        goto LAB_00521b90;
        __ptr = local_78;
      } while (uVar2 == 1);
    }
    else {
      __s = *(FILE **)(param_1 + 0x40);
      __ptr = local_64;
LAB_00521b7c:
      sVar3 = fwrite(__ptr,1,1,__s);
      if (sVar3 != 1) {
LAB_00521b90:
        param_2 = -1;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_2;
}


// ===== 00521c6c  FUN_00521c6c =====

void FUN_00521c6c(void *param_1)

{
  FUN_0054cf28();
  operator_delete(param_1);
  return;
}


// ===== 00521c90  FUN_00521c90 =====

void FUN_00521c90(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  
  plVar3 = (long *)FUN_0053cfd4(param_2,PTR_DAT_00d51de0);
  lVar5 = *plVar3;
  *(long **)(param_1 + 0x48) = plVar3;
  uVar2 = (**(code **)(lVar5 + 0x30))();
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  bVar1 = (**(code **)(**(long **)(param_1 + 0x48) + 0x38))(*(long **)(param_1 + 0x48));
  *(byte *)(param_1 + 0x61) = bVar1 & 1;
  if (*(int *)(param_1 + 0x58) < 9) {
    return;
  }
  uVar4 = FUN_00536bb4("unsupported locale for standard input");
  FUN_00521e34(uVar4,0);
  return;
}


// ===== 00521d08  FUN_00521d08 =====

void FUN_00521d08(undefined8 param_1)

{
  FUN_00521e34(param_1,0);
  return;
}


// ===== 00521d10  FUN_00521d10 =====

void FUN_00521d10(undefined8 param_1)

{
  FUN_00521e34(param_1,1);
  return;
}


// ===== 00521d18  FUN_00521d18 =====

int FUN_00521d18(long param_1,int param_2)

{
  byte *pbVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  undefined1 auStack_58 [12];
  undefined4 local_4c;
  undefined1 *local_48;
  undefined1 local_40 [8];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_2 == -1) {
    if (*(char *)(param_1 + 0x60) == '\0') {
      param_2 = *(int *)(param_1 + 0x5c);
      bVar3 = param_2 != -1;
      goto LAB_00521e04;
    }
  }
  else {
    if (*(char *)(param_1 + 0x60) == '\0') {
LAB_00521dec:
      bVar3 = true;
      *(int *)(param_1 + 0x5c) = param_2;
LAB_00521e04:
      *(bool *)(param_1 + 0x60) = bVar3;
      goto LAB_00521e08;
    }
    local_4c = *(undefined4 *)(param_1 + 0x5c);
    iVar4 = (**(code **)(**(long **)(param_1 + 0x48) + 0x18))
                      (*(long **)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),&local_4c,
                       &local_48,auStack_58,local_40,&local_38,&local_48);
    if (1 < iVar4 - 1U) {
      if (iVar4 == 3) {
        local_48 = (undefined1 *)((ulong)local_40 | 1);
        local_40[0] = (undefined1)*(undefined4 *)(param_1 + 0x5c);
      }
      do {
        if (local_48 <= local_40) goto LAB_00521dec;
        pbVar1 = local_48 + -1;
        local_48 = local_48 + -1;
        iVar4 = ungetc((uint)*pbVar1,*(FILE **)(param_1 + 0x40));
      } while (iVar4 != -1);
    }
  }
  param_2 = -1;
LAB_00521e08:
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_2;
}


// ===== 00521e34  FUN_00521e34 =====

void FUN_00521e34(long param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [12];
  uint local_64;
  byte local_60 [8];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_1 + 0x60) != '\0') {
    uVar2 = *(uint *)(param_1 + 0x5c);
    if ((param_2 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
    }
    goto LAB_00521e80;
  }
  uVar2 = *(uint *)(param_1 + 0x58);
  uVar4 = 0;
  if ((int)uVar2 < 2) {
    uVar2 = 1;
  }
  uVar5 = (ulong)uVar2;
  do {
    uVar2 = getc(*(FILE **)(param_1 + 0x40));
    if (uVar2 == 0xffffffff) goto LAB_00521e80;
    local_60[uVar4] = (byte)uVar2;
    uVar4 = uVar4 + 1;
  } while (uVar5 != uVar4);
  if (*(char *)(param_1 + 0x61) == '\0') {
    while( true ) {
      uVar6 = **(undefined8 **)(param_1 + 0x50);
      iVar3 = (**(code **)(**(long **)(param_1 + 0x48) + 0x20))
                        (*(long **)(param_1 + 0x48),*(undefined8 **)(param_1 + 0x50),local_60,
                         local_60 + uVar5,auStack_70,&local_64,local_60,auStack_78);
      if (iVar3 != 1) break;
      **(undefined8 **)(param_1 + 0x50) = uVar6;
      if ((uVar5 == 8) || (iVar3 = getc(*(FILE **)(param_1 + 0x40)), iVar3 == -1))
      goto LAB_00521fa8;
      local_60[uVar5] = (byte)iVar3;
      uVar5 = uVar5 + 1;
    }
    if (iVar3 == 2) {
LAB_00521fa8:
      uVar2 = 0xffffffff;
      goto LAB_00521e80;
    }
    if (iVar3 == 3) goto LAB_00521ee8;
  }
  else {
LAB_00521ee8:
    local_64 = (uint)local_60[0];
  }
  if ((param_2 & 1) == 0) {
    uVar4 = uVar5 & 0xffffffff;
    do {
      uVar2 = local_64;
      if ((long)uVar4 < 1) goto LAB_00521e80;
      iVar3 = ungetc((uint)local_60[uVar4 - 1 & 0xffffffff],*(FILE **)(param_1 + 0x40));
      uVar4 = uVar4 - 1;
    } while (iVar3 != -1);
    uVar2 = 0xffffffff;
  }
  else {
    *(uint *)(param_1 + 0x5c) = local_64;
    uVar2 = local_64;
  }
LAB_00521e80:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


// ===== 00521fbc  FUN_00521fbc =====

void FUN_00521fbc(void *param_1)

{
  FUN_0054cf28();
  operator_delete(param_1);
  return;
}


// ===== 00521fe0  FUN_00521fe0 =====

void FUN_00521fe0(long *param_1,undefined8 param_2)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  
  (**(code **)(*param_1 + 0x30))();
  plVar2 = (long *)FUN_0053cfd4(param_2,PTR_DAT_00d51de0);
  lVar3 = *plVar2;
  param_1[9] = (long)plVar2;
  bVar1 = (**(code **)(lVar3 + 0x38))();
  *(byte *)(param_1 + 0xb) = bVar1 & 1;
  return;
}


// ===== 00522034  FUN_00522034 =====

void FUN_00522034(long param_1)

{
  long lVar1;
  int iVar2;
  size_t sVar3;
  size_t __n;
  long local_58;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  do {
    iVar2 = (**(code **)(**(long **)(param_1 + 0x48) + 0x28))
                      (*(long **)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),auStack_50,
                       &local_48,&local_58);
    __n = local_58 - (long)auStack_50;
    sVar3 = fwrite(auStack_50,1,__n,*(FILE **)(param_1 + 0x40));
    if (sVar3 != __n) goto LAB_005220b8;
  } while (iVar2 == 1);
  if (iVar2 == 2) {
LAB_005220b8:
    iVar2 = -1;
  }
  else {
    iVar2 = fflush(*(FILE **)(param_1 + 0x40));
    iVar2 = -(uint)(iVar2 != 0);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


// ===== 005220fc  FUN_005220fc =====

size_t FUN_005220fc(long *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  size_t sVar2;
  
  if ((char)param_1[0xb] != '\0') {
    sVar2 = fwrite(param_2,4,param_3,(FILE *)param_1[8]);
    return sVar2;
  }
  if ((long)param_3 < 1) {
    param_3 = 0;
  }
  else {
    sVar2 = 0;
    do {
      iVar1 = (**(code **)(*param_1 + 0x68))(param_1,*(undefined4 *)((long)param_2 + sVar2 * 4));
      if (iVar1 == -1) {
        return sVar2;
      }
      sVar2 = sVar2 + 1;
    } while (param_3 != sVar2);
  }
  return param_3;
}


// ===== 00522194  FUN_00522194 =====

int FUN_00522194(long param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  int *__ptr;
  size_t sVar3;
  FILE *__s;
  size_t __n;
  int *local_78;
  undefined1 *local_70;
  int local_64;
  undefined1 auStack_60 [8];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_2 == -1) {
    param_2 = 0;
  }
  else {
    local_64 = param_2;
    if (*(char *)(param_1 + 0x58) == '\0') {
      __ptr = &local_64;
      local_70 = auStack_60;
      do {
        uVar2 = (**(code **)(**(long **)(param_1 + 0x48) + 0x18))
                          (*(long **)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),__ptr,
                           auStack_60,&local_78,auStack_60,&local_58,&local_70);
        if (local_78 == __ptr) goto LAB_005221f4;
        if (uVar2 == 3) {
          __s = *(FILE **)(param_1 + 0x40);
          sVar3 = 1;
          goto LAB_005221e4;
        }
        if ((1 < uVar2) ||
           (__n = (long)local_70 - (long)auStack_60,
           sVar3 = fwrite(auStack_60,1,__n,*(FILE **)(param_1 + 0x40)), sVar3 != __n))
        goto LAB_005221f4;
        __ptr = local_78;
      } while (uVar2 == 1);
    }
    else {
      __s = *(FILE **)(param_1 + 0x40);
      __ptr = &local_64;
      sVar3 = 4;
LAB_005221e4:
      sVar3 = fwrite(__ptr,sVar3,1,__s);
      if (sVar3 != 1) {
LAB_005221f4:
        param_2 = -1;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_2;
}


// ===== 005222d4  _INIT_0 =====

void _INIT_0(void)

{
  int iVar1;
  
  if (((DAT_00d61a58 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d61a58), iVar1 != 0)) {
                    /* try { // try from 0052230c to 0052230f has its CatchHandler @ 00522340 */
    FUN_00520f48();
    __cxa_atexit(FUN_005215c4,&DAT_00d61a50,&PTR_LOOP_00d19390);
    FUN_0054ff1c(&DAT_00d61a58);
    return;
  }
  return;
}


// ===== 00522358  thunk_FUN_005466c0 =====

void thunk_FUN_005466c0(void)

{
  return;
}


// ===== 0052235c  FUN_0052235c =====

void FUN_0052235c(void *param_1)

{
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 00522380  FUN_00522380 =====

ulong FUN_00522380(undefined8 param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5)

{
  byte *pbVar1;
  
  pbVar1 = param_2;
  if (param_4 != param_5) {
    pbVar1 = param_2 + ((long)param_5 - (long)param_4);
    do {
      if (param_2 == param_3) {
        return 0xffffffff;
      }
      if (*param_2 < *param_4) {
        return 0xffffffff;
      }
      if (*param_4 < *param_2) {
        return 1;
      }
      param_2 = param_2 + 1;
      param_4 = param_4 + 1;
    } while (param_4 != param_5);
  }
  return (ulong)(pbVar1 != param_3);
}


// ===== 005223e0  FUN_005223e0 =====

void FUN_005223e0(undefined8 *param_1,undefined8 param_2,void *param_3,void *param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong __n;
  
  __n = (long)param_4 - (long)param_3;
  if (__n < 0x7ffffffffffffff0) {
    if (__n < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)__n;
    }
    else {
      uVar1 = (__n | 0xf) + 1;
      puVar2 = (undefined8 *)operator_new(uVar1);
      *param_1 = puVar2;
      param_1[1] = __n;
      param_1[2] = uVar1 | 0x8000000000000000;
      param_1 = puVar2;
    }
    if (param_3 != param_4) {
      memcpy(param_1,param_3,__n);
      param_1 = (undefined8 *)((long)param_1 + __n);
    }
    *(undefined1 *)param_1 = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004e823c(param_1);
}


// ===== 00522484  FUN_00522484 =====

ulong FUN_00522484(undefined8 param_1,byte *param_2,byte *param_3)

{
  ulong uVar1;
  byte *pbVar2;
  ulong uVar3;
  
  if (param_2 != param_3) {
    uVar1 = 0;
    do {
      pbVar2 = param_2 + 1;
      uVar1 = (ulong)*param_2 + uVar1 * 0x10;
      uVar3 = uVar1 & 0xf000000000000000;
      uVar1 = (uVar3 | uVar3 >> 0x38) ^ uVar1;
      param_2 = pbVar2;
    } while (pbVar2 != param_3);
    return uVar1;
  }
  return 0;
}


// ===== 005224b8  thunk_FUN_005466c0 =====

void thunk_FUN_005466c0(void)

{
  return;
}


// ===== 005224bc  FUN_005224bc =====

void FUN_005224bc(void *param_1)

{
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 005224e0  FUN_005224e0 =====

ulong FUN_005224e0(undefined8 param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  if (param_4 != param_5) {
    do {
      if (param_2 == param_3) {
        return 0xffffffff;
      }
      if (*param_2 < *param_4) {
        return 0xffffffff;
      }
      if (*param_4 < *param_2) {
        return 1;
      }
      param_2 = param_2 + 1;
      param_4 = param_4 + 1;
    } while (param_4 != param_5);
  }
  return (ulong)(param_2 != param_3);
}


// ===== 00522534  FUN_00522534 =====

undefined8 * FUN_00522534(undefined8 *param_1,undefined8 *param_2,uint *param_3,uint *param_4)

{
  size_t __n;
  ulong uVar1;
  undefined8 *puVar2;
  uint *extraout_x1;
  uint *puVar3;
  ulong uVar5;
  uint *puVar4;
  
  uVar1 = (long)param_4 - (long)param_3;
  if (-1 < (long)uVar1) {
    if (uVar1 < 0x14) {
      *(char *)((long)param_1 + 0x17) = (char)(uVar1 >> 2);
    }
    else {
      uVar5 = ((long)uVar1 >> 2 | 3U) + 1;
      param_2 = (undefined8 *)operator_new(uVar5 * 4);
      *param_1 = param_2;
      param_1[1] = (long)uVar1 >> 2;
      param_1[2] = uVar5 | 0x8000000000000000;
      param_1 = param_2;
    }
    if (param_3 != param_4) {
      __n = (uVar1 - 4 & 0xfffffffffffffffc) + 4;
      param_2 = (undefined8 *)memcpy(param_1,param_3,__n);
      param_1 = (undefined8 *)((long)param_1 + __n);
    }
    *(undefined4 *)param_1 = 0;
    return param_2;
  }
  FUN_00545334(param_1);
  if (extraout_x1 != param_4) {
    puVar2 = (undefined8 *)0x0;
    puVar3 = extraout_x1;
    do {
      puVar4 = puVar3 + 1;
      uVar1 = (ulong)*puVar3 + (long)puVar2 * 0x10;
      uVar5 = uVar1 & 0xf000000000000000;
      puVar2 = (undefined8 *)((uVar5 | uVar5 >> 0x38) ^ uVar1);
      puVar3 = puVar4;
    } while (puVar4 != param_4);
    return puVar2;
  }
  return (undefined8 *)0x0;
}


// ===== 005225e4  FUN_005225e4 =====

ulong FUN_005225e4(undefined8 param_1,uint *param_2,uint *param_3)

{
  ulong uVar1;
  uint *puVar2;
  ulong uVar3;
  
  if (param_2 != param_3) {
    uVar1 = 0;
    do {
      puVar2 = param_2 + 1;
      uVar1 = (ulong)*param_2 + uVar1 * 0x10;
      uVar3 = uVar1 & 0xf000000000000000;
      uVar1 = (uVar3 | uVar3 >> 0x38) ^ uVar1;
      param_2 = puVar2;
    } while (puVar2 != param_3);
    return uVar1;
  }
  return 0;
}


// ===== 00522618  FUN_00522618 =====

undefined8
FUN_00522618(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined4 *param_5,
            undefined1 *param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 **ppuVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *local_a8;
  undefined8 local_a0;
  undefined8 ***local_98;
  undefined8 **local_90;
  undefined8 *local_88;
  code *pcStack_80;
  long local_78;
  void *local_70 [2];
  char local_59;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  local_a0 = param_2;
  if ((*(byte *)(param_4 + 8) & 1) == 0) {
    local_88 = (undefined8 *)0xffffffffffffffff;
    uVar5 = (**(code **)(*param_1 + 0x20))(param_1,param_2,param_3,param_4,param_5,&local_88);
    if (local_88 == (undefined8 *)0x1) {
      *param_6 = 1;
    }
    else if (local_88 == (undefined8 *)0x0) {
      *param_6 = 0;
    }
    else {
      *param_6 = 1;
      *param_5 = 4;
    }
LAB_00522884:
    if (*(long *)(lVar4 + 0x28) == local_58) {
      return uVar5;
    }
  }
  else {
    FUN_00520ce8(&local_a8,param_4);
    plVar9 = local_a8;
    local_78 = 0;
    local_88 = &DAT_00d61bf8;
    pcStack_80 = FUN_0053d0c8;
    if (DAT_00d61bf8 != -1) {
      local_90 = &local_88;
      local_98 = &local_90;
                    /* try { // try from 005226dc to 005226f3 has its CatchHandler @ 0052293c */
      FUN_0054698c(&DAT_00d61bf8,&local_98,FUN_005459e0);
    }
    lVar8 = plVar9[2];
    if (((long)DAT_00d61c00 - 1U < (ulong)(plVar9[3] - lVar8 >> 3)) &&
       (lVar8 = *(long *)(lVar8 + ((long)DAT_00d61c00 - 1U) * 8), lVar8 != 0)) {
      plVar9 = local_a8 + 1;
      do {
        lVar7 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*local_a8 + 0x10))();
      }
      FUN_00520ce8(&local_a8,param_4);
      plVar9 = local_a8;
      local_78 = 0;
      local_88 = &DAT_00d61c68;
      pcStack_80 = FUN_0053d0c8;
      if (DAT_00d61c68 != -1) {
        local_90 = &local_88;
        local_98 = &local_90;
                    /* try { // try from 00522778 to 0052278f has its CatchHandler @ 0052291c */
        FUN_0054698c(&DAT_00d61c68,&local_98,FUN_005459e0);
      }
      lVar7 = plVar9[2];
      if (((long)DAT_00d61c70 - 1U < (ulong)(plVar9[3] - lVar7 >> 3)) &&
         (plVar9 = *(long **)(lVar7 + ((long)DAT_00d61c70 - 1U) * 8), plVar9 != (long *)0x0)) {
        plVar1 = local_a8 + 1;
        do {
          lVar7 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*local_a8 + 0x10))();
        }
                    /* try { // try from 005227e4 to 005227f3 has its CatchHandler @ 00522914 */
        (**(code **)(*plVar9 + 0x30))(&local_88,plVar9);
                    /* try { // try from 00522800 to 00522807 has its CatchHandler @ 005228fc */
        (**(code **)(*plVar9 + 0x38))(local_70,plVar9);
                    /* try { // try from 00522810 to 0052282b has its CatchHandler @ 005228dc */
        ppuVar6 = (undefined8 **)FUN_00522984(&local_a0,param_3,&local_88,&local_58,lVar8,param_5,1)
        ;
        uVar5 = local_a0;
        *param_6 = ppuVar6 == &local_88;
        if (local_59 < '\0') {
          operator_delete(local_70[0]);
        }
        if (local_78 < 0) {
          operator_delete(local_88);
        }
        goto LAB_00522884;
      }
    }
    else {
      if (*(long *)(lVar4 + 0x28) != local_58) goto LAB_00522980;
                    /* try { // try from 005228c4 to 005228c7 has its CatchHandler @ 0052293c */
      FUN_0053cd4c();
    }
    if (*(long *)(lVar4 + 0x28) == local_58) {
                    /* try { // try from 005228d8 to 005228db has its CatchHandler @ 0052291c */
      uVar5 = FUN_0053cd4c();
                    /* catch() { ... } // from try @ 00522810 with catch @ 005228dc */
      if (local_59 < '\0') {
        operator_delete(local_70[0]);
      }
      if (local_78 < 0) {
        operator_delete(local_88);
      }
      if (*(long *)(lVar4 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00d0fa5c(uVar5);
      }
    }
  }
LAB_00522980:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00522984  FUN_00522984 =====

long * FUN_00522984(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5,
                   uint *param_6,uint param_7)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  bool bVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  long *__ptr;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  undefined1 uVar16;
  long lVar17;
  undefined1 *puVar18;
  byte *pbVar19;
  long lVar20;
  ulong __size;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  undefined1 auVar42 [16];
  byte bVar45;
  undefined8 uVar43;
  byte bVar46;
  undefined1 auVar44 [16];
  undefined1 auVar47 [16];
  undefined8 uVar48;
  undefined1 auVar49 [16];
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  long *local_128;
  long local_114 [12];
  long local_b0;
  
  lVar4 = tpidr_el0;
  __size = ((long)param_4 - (long)param_3 >> 3) * -0x5555555555555555;
  local_b0 = *(long *)(lVar4 + 0x28);
  if (100 < __size) {
    __ptr = (long *)malloc(__size);
    local_128 = __ptr;
    if (__ptr != (long *)0x0) goto LAB_00522a28;
    if (*(long *)(lVar4 + 0x28) != local_b0) goto LAB_00523148;
    FUN_00546ac8();
  }
  __ptr = (long *)0x0;
  local_128 = local_114;
LAB_00522a28:
  if (param_3 == param_4) {
    lVar20 = 0;
  }
  else {
    uVar14 = ((long)param_4 - (long)param_3) - 0x18;
    plVar15 = param_3;
    plVar13 = local_128;
    if (uVar14 < 0x120) {
      lVar20 = 0;
    }
    else {
      uVar14 = uVar14 / 0x18;
      if ((local_128 < param_3 + uVar14 * 3 + 3) &&
         (param_3 + 1 < (long *)((long)local_128 + uVar14 + 1))) {
        lVar20 = 0;
      }
      else {
        lVar20 = 0;
        uVar1 = uVar14 + 1 & 7;
        uVar2 = 8;
        if (uVar1 != 0) {
          uVar2 = uVar1;
        }
        lVar17 = (uVar14 + 1) - uVar2;
        lVar21 = 0;
        lVar22 = 0;
        plVar15 = param_3 + lVar17 * 3;
        plVar13 = (long *)((long)local_128 + lVar17);
        lVar23 = 0;
        lVar24 = 0;
        puVar18 = (undefined1 *)((long)local_128 + 4);
        lVar25 = 0;
        lVar26 = 0;
        lVar27 = 0;
        lVar28 = 0;
        lVar36 = 0;
        lVar37 = 0;
        lVar38 = 0;
        lVar39 = 0;
        lVar40 = 0;
        lVar41 = 0;
        pbVar19 = (byte *)((long)param_3 + 0x5f);
        do {
          lVar17 = lVar17 + -8;
          uVar52 = *(undefined8 *)(pbVar19 + -0x27);
          uVar53 = *(undefined8 *)(pbVar19 + -0xf);
          uVar29 = *(undefined8 *)(pbVar19 + 9);
          uVar30 = *(undefined8 *)(pbVar19 + 0x21);
          uVar50 = *(undefined8 *)(pbVar19 + -0x57);
          uVar51 = *(undefined8 *)(pbVar19 + -0x3f);
          uVar43 = NEON_cmlt(CONCAT26((short)(char)*pbVar19,
                                      CONCAT24((short)(char)pbVar19[-0x18],
                                               CONCAT22((short)(char)pbVar19[-0x30],
                                                        (short)(char)pbVar19[-0x48]))),0,2);
          uVar48 = NEON_cmlt(CONCAT26((short)(char)pbVar19[0x60],
                                      CONCAT24((short)(char)pbVar19[0x48],
                                               CONCAT22((short)(char)pbVar19[0x30],
                                                        (short)(char)pbVar19[0x18]))),0,2);
          bVar7 = (byte)uVar43;
          bVar10 = (byte)((ulong)uVar43 >> 0x20);
          uVar34 = *(undefined8 *)(pbVar19 + 0x39);
          uVar35 = *(undefined8 *)(pbVar19 + 0x51);
          bVar6 = (byte)uVar48;
          bVar5 = (byte)((ulong)uVar48 >> 0x20);
          bVar46 = (byte)((ulong)uVar43 >> 0x30);
          bVar31 = (char)bVar6 >> 7;
          bVar32 = (byte)((ulong)uVar48 >> 0x10);
          bVar33 = (char)bVar32 >> 7;
          bVar45 = (char)bVar10 >> 7;
          auVar44[1] = (byte)((ulong)uVar52 >> 8) & bVar45;
          auVar44[2] = (byte)((ulong)uVar52 >> 0x10) & bVar45;
          auVar44[3] = (byte)((ulong)uVar52 >> 0x18) & bVar45;
          auVar44[4] = (byte)((ulong)uVar52 >> 0x20) & bVar45;
          auVar44[5] = (byte)((ulong)uVar52 >> 0x28) & bVar45;
          auVar44[6] = (byte)((ulong)uVar52 >> 0x30) & bVar45;
          auVar44[7] = (byte)((ulong)uVar52 >> 0x38) & bVar45;
          bVar45 = (char)bVar46 >> 7;
          auVar44[9] = (byte)((ulong)uVar53 >> 8) & bVar45;
          auVar44[10] = (byte)((ulong)uVar53 >> 0x10) & bVar45;
          auVar44[0xb] = (byte)((ulong)uVar53 >> 0x18) & bVar45;
          auVar44[0xc] = (byte)((ulong)uVar53 >> 0x20) & bVar45;
          auVar44[0xd] = (byte)((ulong)uVar53 >> 0x28) & bVar45;
          auVar44[0xe] = (byte)((ulong)uVar53 >> 0x30) & bVar45;
          auVar44[0xf] = (byte)((ulong)uVar53 >> 0x38) & bVar45;
          bVar54 = (char)bVar7 >> 7;
          bVar55 = (byte)((ulong)uVar43 >> 0x10);
          bVar56 = (char)bVar55 >> 7;
          bVar45 = (byte)((ulong)uVar48 >> 0x30);
          auVar44[0] = (byte)uVar52 & bVar10 | pbVar19[-0x18] & ~bVar10;
          auVar44[8] = (byte)uVar53 & bVar46 | *pbVar19 & ~bVar46;
          auVar47[0] = (byte)uVar29 & bVar6 | pbVar19[0x18] & ~bVar6;
          auVar47[1] = (byte)((ulong)uVar29 >> 8) & bVar31;
          auVar47[2] = (byte)((ulong)uVar29 >> 0x10) & bVar31;
          auVar47[3] = (byte)((ulong)uVar29 >> 0x18) & bVar31;
          auVar47[4] = (byte)((ulong)uVar29 >> 0x20) & bVar31;
          auVar47[5] = (byte)((ulong)uVar29 >> 0x28) & bVar31;
          auVar47[6] = (byte)((ulong)uVar29 >> 0x30) & bVar31;
          auVar47[7] = (byte)((ulong)uVar29 >> 0x38) & bVar31;
          auVar47[8] = (byte)uVar30 & bVar32 | pbVar19[0x30] & ~bVar32;
          auVar47[9] = (byte)((ulong)uVar30 >> 8) & bVar33;
          auVar47[10] = (byte)((ulong)uVar30 >> 0x10) & bVar33;
          auVar47[0xb] = (byte)((ulong)uVar30 >> 0x18) & bVar33;
          auVar47[0xc] = (byte)((ulong)uVar30 >> 0x20) & bVar33;
          auVar47[0xd] = (byte)((ulong)uVar30 >> 0x28) & bVar33;
          auVar47[0xe] = (byte)((ulong)uVar30 >> 0x30) & bVar33;
          auVar47[0xf] = (byte)((ulong)uVar30 >> 0x38) & bVar33;
          bVar10 = (char)bVar5 >> 7;
          auVar49[1] = (byte)((ulong)uVar34 >> 8) & bVar10;
          auVar49[2] = (byte)((ulong)uVar34 >> 0x10) & bVar10;
          auVar49[3] = (byte)((ulong)uVar34 >> 0x18) & bVar10;
          auVar49[4] = (byte)((ulong)uVar34 >> 0x20) & bVar10;
          auVar49[5] = (byte)((ulong)uVar34 >> 0x28) & bVar10;
          auVar49[6] = (byte)((ulong)uVar34 >> 0x30) & bVar10;
          auVar49[7] = (byte)((ulong)uVar34 >> 0x38) & bVar10;
          bVar10 = (char)bVar45 >> 7;
          auVar49[9] = (byte)((ulong)uVar35 >> 8) & bVar10;
          auVar49[10] = (byte)((ulong)uVar35 >> 0x10) & bVar10;
          auVar49[0xb] = (byte)((ulong)uVar35 >> 0x18) & bVar10;
          auVar49[0xc] = (byte)((ulong)uVar35 >> 0x20) & bVar10;
          auVar49[0xd] = (byte)((ulong)uVar35 >> 0x28) & bVar10;
          auVar49[0xe] = (byte)((ulong)uVar35 >> 0x30) & bVar10;
          auVar49[0xf] = (byte)((ulong)uVar35 >> 0x38) & bVar10;
          auVar42[0] = (byte)uVar50 & bVar7 | pbVar19[-0x48] & ~bVar7;
          auVar42[1] = (byte)((ulong)uVar50 >> 8) & bVar54;
          auVar42[2] = (byte)((ulong)uVar50 >> 0x10) & bVar54;
          auVar42[3] = (byte)((ulong)uVar50 >> 0x18) & bVar54;
          auVar42[4] = (byte)((ulong)uVar50 >> 0x20) & bVar54;
          auVar42[5] = (byte)((ulong)uVar50 >> 0x28) & bVar54;
          auVar42[6] = (byte)((ulong)uVar50 >> 0x30) & bVar54;
          auVar42[7] = (byte)((ulong)uVar50 >> 0x38) & bVar54;
          auVar42[8] = (byte)uVar51 & bVar55 | pbVar19[-0x30] & ~bVar55;
          auVar42[9] = (byte)((ulong)uVar51 >> 8) & bVar56;
          auVar42[10] = (byte)((ulong)uVar51 >> 0x10) & bVar56;
          auVar42[0xb] = (byte)((ulong)uVar51 >> 0x18) & bVar56;
          auVar42[0xc] = (byte)((ulong)uVar51 >> 0x20) & bVar56;
          auVar42[0xd] = (byte)((ulong)uVar51 >> 0x28) & bVar56;
          auVar42[0xe] = (byte)((ulong)uVar51 >> 0x30) & bVar56;
          auVar42[0xf] = (byte)((ulong)uVar51 >> 0x38) & bVar56;
          auVar49[0] = (byte)uVar34 & bVar5 | pbVar19[0x48] & ~bVar5;
          auVar49[8] = (byte)uVar35 & bVar45 | pbVar19[0x60] & ~bVar45;
          auVar44 = NEON_cmeq(auVar44,0,8);
          auVar42 = NEON_cmeq(auVar42,0,8);
          auVar49 = NEON_cmeq(auVar49,0,8);
          auVar47 = NEON_cmeq(auVar47,0,8);
          lVar36 = lVar36 + auVar44._0_8_;
          lVar37 = lVar37 + auVar44._8_8_;
          __size = __size + auVar42._0_8_;
          lVar20 = lVar20 + auVar42._8_8_;
          uVar29 = NEON_bsl(CONCAT26(auVar44._8_2_,
                                     CONCAT24(auVar44._0_2_,CONCAT22(auVar42._8_2_,auVar42._0_2_))),
                            0x2000200020002,0x1000100010001,1);
          uVar30 = NEON_bsl(CONCAT26(auVar49._8_2_,
                                     CONCAT24(auVar49._0_2_,CONCAT22(auVar47._8_2_,auVar47._0_2_))),
                            0x2000200020002,0x1000100010001,1);
          lVar40 = lVar40 + auVar49._0_8_;
          lVar41 = lVar41 + auVar49._8_8_;
          lVar38 = lVar38 + auVar47._0_8_;
          lVar39 = lVar39 + auVar47._8_8_;
          lVar23 = lVar23 - auVar44._0_8_;
          lVar24 = lVar24 - auVar44._8_8_;
          lVar21 = lVar21 - auVar42._0_8_;
          lVar22 = lVar22 - auVar42._8_8_;
          lVar27 = lVar27 - auVar49._0_8_;
          lVar28 = lVar28 - auVar49._8_8_;
          lVar25 = lVar25 - auVar47._0_8_;
          lVar26 = lVar26 - auVar47._8_8_;
          *(ulong *)(puVar18 + -4) =
               CONCAT44(CONCAT13((char)((ulong)uVar30 >> 0x30),
                                 CONCAT12((char)((ulong)uVar30 >> 0x20),
                                          CONCAT11((char)((ulong)uVar30 >> 0x10),(char)uVar30))),
                        CONCAT13((char)((ulong)uVar29 >> 0x30),
                                 CONCAT12((char)((ulong)uVar29 >> 0x20),
                                          CONCAT11((char)((ulong)uVar29 >> 0x10),(char)uVar29))));
          puVar18 = puVar18 + 8;
          pbVar19 = pbVar19 + 0xc0;
        } while (lVar17 != 0);
        __size = lVar38 + __size + lVar40 + lVar36 + lVar39 + lVar20 + lVar41 + lVar37;
        lVar20 = lVar25 + lVar21 + lVar27 + lVar23 + lVar26 + lVar22 + lVar28 + lVar24;
      }
    }
    do {
      plVar3 = plVar15 + 3;
      uVar14 = plVar15[1];
      if (-1 < (char)*(byte *)((long)plVar15 + 0x17)) {
        uVar14 = (ulong)*(byte *)((long)plVar15 + 0x17);
      }
      uVar16 = 1;
      if (uVar14 == 0) {
        uVar16 = 2;
        lVar20 = lVar20 + 1;
      }
      __size = __size - (uVar14 == 0);
      *(undefined1 *)plVar13 = uVar16;
      plVar15 = plVar3;
      plVar13 = (long *)((long)plVar13 + 1);
    } while (plVar3 != param_4);
  }
  uVar14 = 0;
  plVar13 = (long *)*param_1;
  if (plVar13 != (long *)0x0) goto LAB_00522d10;
  do {
    bVar8 = true;
    plVar15 = param_2;
LAB_00522d58:
    param_2 = plVar15;
    if (plVar15 == (long *)0x0) {
      bVar9 = true;
    }
    else if (plVar15[3] == plVar15[4]) {
      iVar11 = (**(code **)(*plVar15 + 0x48))(plVar15);
      bVar9 = iVar11 == -1;
      param_2 = (long *)0x0;
      if (!bVar9) {
        param_2 = plVar15;
      }
    }
    else {
      bVar9 = false;
    }
    plVar13 = (long *)*param_1;
    if ((bVar8 == bVar9) || (__size == 0)) {
      if (plVar13 == (long *)0x0) {
joined_r0x00522fb8:
        bVar8 = true;
        if (param_2 != (long *)0x0) goto LAB_00522fe8;
joined_r0x00522ff8:
        if (bVar8 == false) {
LAB_00522ffc:
          *param_6 = *param_6 | 2;
        }
      }
      else {
        if (plVar13[3] == plVar13[4]) {
                    /* try { // try from 00522fc8 to 005230a7 has its CatchHandler @ 00523110 */
          iVar11 = (**(code **)(*plVar13 + 0x48))();
          if (iVar11 == -1) {
            *param_1 = 0;
            goto joined_r0x00522fb8;
          }
          bVar8 = *param_1 == 0;
        }
        else {
          bVar8 = false;
        }
        if (param_2 == (long *)0x0) goto joined_r0x00522ff8;
LAB_00522fe8:
        if (param_2[3] != param_2[4]) goto joined_r0x00522ff8;
        iVar11 = (**(code **)(*param_2 + 0x48))();
        if (bVar8 == (iVar11 == -1)) goto LAB_00522ffc;
      }
      if (param_3 != param_4) goto LAB_00523010;
      goto LAB_00523034;
    }
    if ((byte *)plVar13[3] == (byte *)plVar13[4]) {
                    /* try { // try from 00522dc8 to 00522deb has its CatchHandler @ 0052311c */
      uVar12 = (**(code **)(*plVar13 + 0x48))();
    }
    else {
      uVar12 = (uint)*(byte *)plVar13[3];
    }
    if ((param_7 & 1) == 0) {
      uVar12 = (**(code **)(*param_5 + 0x18))(param_5,uVar12);
    }
    if (param_3 == param_4) {
LAB_00522d04:
      plVar13 = (long *)*param_1;
    }
    else {
      bVar8 = false;
      plVar13 = param_3;
      plVar15 = local_128;
      do {
        if ((char)*plVar15 == '\x01') {
          bVar10 = *(byte *)((long)plVar13 + 0x17);
          uVar1 = plVar13[1];
          if (-1 < (char)bVar10) {
            uVar1 = (ulong)bVar10;
          }
          if (uVar1 < uVar14) {
            if (*(long *)(lVar4 + 0x28) == local_b0) {
                    /* try { // try from 005230d0 to 005230f7 has its CatchHandler @ 0052314c */
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s:%d: assertion %s failed: %s",
                         "../../discord_common/native/third_party/llvm/libcxx/include/string",0xd4e,
                         "__pos <= size()","string index out of bounds");
            }
            goto LAB_00523148;
          }
          plVar3 = (long *)*plVar13;
          if (-1 < (char)bVar10) {
            plVar3 = plVar13;
          }
          bVar10 = *(byte *)((long)plVar3 + uVar14);
          if ((param_7 & 1) == 0) {
                    /* try { // try from 00522e70 to 00522e7b has its CatchHandler @ 00523120 */
            bVar10 = (**(code **)(*param_5 + 0x18))(param_5);
          }
          if ((uVar12 & 0xff) == (uint)bVar10) {
            uVar1 = plVar13[1];
            if (-1 < (char)*(byte *)((long)plVar13 + 0x17)) {
              uVar1 = (ulong)*(byte *)((long)plVar13 + 0x17);
            }
            if (uVar1 == uVar14 + 1) {
              __size = __size - 1;
              lVar20 = lVar20 + 1;
              bVar8 = true;
              *(undefined1 *)plVar15 = 2;
            }
            else {
              bVar8 = true;
            }
          }
          else {
            __size = __size - 1;
            *(undefined1 *)plVar15 = 0;
          }
        }
        plVar13 = plVar13 + 3;
        plVar15 = (long *)((long)plVar15 + 1);
      } while (plVar13 != param_4);
      if (bVar8) {
        plVar13 = (long *)*param_1;
        if (plVar13[3] == plVar13[4]) {
                    /* try { // try from 00522f08 to 00522f0b has its CatchHandler @ 00523114 */
          (**(code **)(*plVar13 + 0x50))();
        }
        else {
          plVar13[3] = plVar13[3] + 1;
        }
        if ((1 < lVar20 + __size) && (param_3 != param_4)) {
          plVar13 = param_3;
          plVar15 = local_128;
          do {
            if ((char)*plVar15 == '\x02') {
              uVar1 = plVar13[1];
              if (-1 < (char)*(byte *)((long)plVar13 + 0x17)) {
                uVar1 = (ulong)*(byte *)((long)plVar13 + 0x17);
              }
              if (uVar1 != uVar14 + 1) {
                lVar20 = lVar20 + -1;
                *(undefined1 *)plVar15 = 0;
              }
            }
            plVar13 = plVar13 + 3;
            plVar15 = (long *)((long)plVar15 + 1);
          } while (plVar13 != param_4);
        }
        goto LAB_00522d04;
      }
      plVar13 = (long *)*param_1;
    }
    uVar14 = uVar14 + 1;
  } while (plVar13 == (long *)0x0);
LAB_00522d10:
  plVar15 = param_2;
  if (plVar13[3] == plVar13[4]) {
                    /* try { // try from 00522d2c to 00522d87 has its CatchHandler @ 00523118 */
    iVar11 = (**(code **)(*plVar13 + 0x48))();
    if (iVar11 == -1) {
      bVar8 = true;
      *param_1 = 0;
    }
    else {
      bVar8 = *param_1 == 0;
    }
  }
  else {
    bVar8 = false;
  }
  goto LAB_00522d58;
  while( true ) {
    local_128 = (long *)((long)local_128 + 1);
    param_3 = param_3 + 3;
    if (param_3 == param_4) break;
LAB_00523010:
    if ((char)*local_128 == '\x02') goto joined_r0x00523094;
  }
LAB_00523034:
  *param_6 = *param_6 | 4;
  param_3 = param_4;
joined_r0x00523094:
  if (__ptr != (long *)0x0) {
    free(__ptr);
  }
  if (*(long *)(lVar4 + 0x28) == local_b0) {
    return param_3;
  }
LAB_00523148:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00523150  thunk_FUN_00523154 =====

long * thunk_FUN_00523154(undefined8 param_1,long *param_2,long *param_3,long param_4,uint *param_5,
                         undefined8 *param_6)

{
  uint uVar1;
  byte *******pppppppbVar2;
  byte bVar3;
  long lVar4;
  long *plVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  uint *puVar11;
  undefined8 *******pppppppuVar12;
  byte *******pppppppbVar13;
  ulong uVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  long *plVar18;
  undefined4 uVar19;
  uint uStack_15c;
  uint *puStack_158;
  undefined8 ******ppppppuStack_150;
  undefined8 ******ppppppuStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  byte ******ppppppbStack_130;
  ulong uStack_128;
  byte bStack_119;
  undefined1 auStack_114 [4];
  uint auStack_110 [40];
  long lStack_70;
  
  lVar4 = tpidr_el0;
  lStack_70 = *(long *)(lVar4 + 0x28);
  uVar1 = *(uint *)(param_4 + 8) & 0x4a;
  if (uVar1 == 0) {
    uVar19 = 0;
  }
  else if (uVar1 == 0x40) {
    uVar19 = 8;
  }
  else if (uVar1 == 8) {
    uVar19 = 0x10;
  }
  else {
    uVar19 = 10;
  }
  FUN_0052bee0(&ppppppbStack_130,param_4,auStack_114);
  ppppppuStack_148 = (undefined8 *******)0x0;
  uStack_140 = 0;
  uStack_138 = 0;
  FUN_0054809c(&ppppppuStack_148,0x16,0);
  puStack_158 = auStack_110;
  pppppppuVar12 = (undefined8 *******)ppppppuStack_148;
  if (-1 < (long)uStack_138) {
    pppppppuVar12 = &ppppppuStack_148;
  }
  uStack_15c = 0;
  ppppppuStack_150 = pppppppuVar12;
LAB_00523234:
  plVar18 = param_3;
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    plVar5 = param_2;
joined_r0x00523288:
    param_2 = plVar5;
    if (param_3 != (long *)0x0) goto LAB_00523258;
LAB_0052328c:
    if (bVar6 != false) goto LAB_00523400;
  }
  else {
    if (param_2[3] == param_2[4]) {
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
      bVar6 = iVar7 == -1;
      plVar5 = (long *)0x0;
      if (!bVar6) {
        plVar5 = param_2;
      }
      goto joined_r0x00523288;
    }
    bVar6 = false;
    if (param_3 == (long *)0x0) goto LAB_0052328c;
LAB_00523258:
    if (param_3[3] == param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
      plVar18 = (long *)0x0;
      if (iVar7 != -1) {
        plVar18 = param_3;
      }
      param_3 = plVar18;
      if (bVar6 == (iVar7 == -1)) goto LAB_00523400;
    }
    else if (bVar6 == false) goto LAB_00523400;
  }
  uVar8 = uStack_140;
  if (-1 < (long)uStack_138) {
    uVar8 = uStack_138 >> 0x38;
  }
  if ((undefined8 *******)ppppppuStack_150 == (undefined8 *******)((long)pppppppuVar12 + uVar8)) {
    if ((long)uVar8 < 1) {
      uVar10 = uVar8 * 2;
      pppppppuVar12 = (undefined8 *******)ppppppuStack_148;
      uVar14 = uVar10;
      if (-1 < (long)uStack_138) {
        if (0x16 < uVar10) {
          if (*(long *)(lVar4 + 0x28) == lStack_70) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_00523718;
        }
        uStack_138 = CONCAT17((char)uVar10,(undefined7)uStack_138);
        pppppppuVar12 = &ppppppuStack_148;
        uVar14 = uStack_140;
      }
      uStack_140 = uVar14;
      *(undefined1 *)((long)pppppppuVar12 + uVar10) = 0;
    }
    else {
      FUN_0054809c(&ppppppuStack_148,uVar8,0);
    }
    uVar14 = (uStack_138 & 0x7fffffffffffffff) - 1;
    uVar10 = uStack_140;
    if (-1 < (long)uStack_138) {
      uVar14 = 0x16;
      uVar10 = uStack_138 >> 0x38;
    }
    if (uVar14 < uVar10 || uVar14 - uVar10 == 0) {
      pppppppuVar12 = (undefined8 *******)ppppppuStack_148;
      uVar10 = uVar14;
      if (-1 < (long)uStack_138) {
        if (0x16 < uVar14) {
          if (*(long *)(lVar4 + 0x28) == lStack_70) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_00523718;
        }
        uStack_138 = CONCAT17((char)uVar14,(undefined7)uStack_138);
        pppppppuVar12 = &ppppppuStack_148;
        uVar10 = uStack_140;
      }
      uStack_140 = uVar10;
      *(undefined1 *)((long)pppppppuVar12 + uVar14) = 0;
    }
    else {
      FUN_0054809c(&ppppppuStack_148,uVar14 - uVar10,0);
    }
    pppppppuVar12 = (undefined8 *******)ppppppuStack_148;
    if (-1 < (long)uStack_138) {
      pppppppuVar12 = &ppppppuStack_148;
    }
    ppppppuStack_150 = (undefined8 ******)((long)pppppppuVar12 + uVar8);
  }
  if ((byte *)param_2[3] == (byte *)param_2[4]) {
    uVar8 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    uVar8 = (ulong)*(byte *)param_2[3];
  }
  iVar7 = FUN_00526be0(uVar8,uVar19,pppppppuVar12,&ppppppuStack_150,&uStack_15c,auStack_114[0],
                       &ppppppbStack_130,auStack_110,&puStack_158,"0123456789abcdefABCDEFxX+-pPiInN"
                      );
  param_3 = plVar18;
  if (iVar7 != 0) goto LAB_00523400;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 1;
  }
  goto LAB_00523234;
LAB_00523400:
  uVar8 = uStack_128;
  if (-1 < (char)bStack_119) {
    uVar8 = (ulong)bStack_119;
  }
  if ((uVar8 != 0) && ((long)puStack_158 - (long)auStack_110 < 0xa0)) {
    *puStack_158 = uStack_15c;
    puStack_158 = puStack_158 + 1;
  }
  uVar9 = FUN_00545a04(pppppppuVar12,ppppppuStack_150,param_5,uVar19);
  uVar14 = (ulong)(uint)(int)(char)bStack_119;
  uVar8 = uStack_128;
  if (-1 < (char)bStack_119) {
    uVar8 = (ulong)bStack_119;
  }
  *param_6 = uVar9;
  if ((4 < (long)puStack_158 - (long)auStack_110) && (uVar8 != 0)) {
    puVar11 = puStack_158 + -1;
    if ((auStack_110 != puStack_158) && (auStack_110 < puVar11)) {
      puVar17 = auStack_110;
      puVar15 = puVar11;
      do {
        puVar17 = puVar17 + 1;
        uVar1 = puVar17[-1];
        puVar17[-1] = *puVar15;
        puVar16 = puVar15 + -1;
        *puVar15 = uVar1;
        puVar15 = puVar16;
      } while (puVar17 < puVar16);
      uVar14 = (ulong)bStack_119;
    }
    pppppppbVar2 = (byte *******)ppppppbStack_130;
    if (-1 < (char)uVar14) {
      pppppppbVar2 = &ppppppbStack_130;
    }
    pppppppbVar13 = pppppppbVar2;
    if (auStack_110 < puVar11) {
      if (-1 < (char)uVar14) {
        uStack_128 = uVar14 & 0xff;
      }
      puVar17 = auStack_110;
      do {
        bVar3 = *(byte *)pppppppbVar13;
        if (((bVar3 != 0) && (bVar3 != 0xff)) && (*puVar17 != (uint)bVar3)) goto LAB_0052355c;
        puVar17 = puVar17 + 1;
        if (1 < (long)((long)pppppppbVar2 + (uStack_128 - (long)pppppppbVar13))) {
          pppppppbVar13 = (byte *******)((long)pppppppbVar13 + 1);
        }
      } while (puVar17 < puVar11);
    }
    bVar3 = *(byte *)pppppppbVar13;
    if (((bVar3 != 0) && (bVar3 != 0xff)) && ((uint)bVar3 <= *puVar11 - 1)) {
LAB_0052355c:
      *param_5 = 4;
    }
  }
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    plVar18 = param_2;
joined_r0x00523584:
    param_2 = plVar18;
    if (param_3 == (long *)0x0) goto LAB_00523628;
LAB_00523588:
    if (param_3[3] == param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
      if (bVar6 != (iVar7 == -1)) goto LAB_005235a4;
    }
    else if (bVar6 != false) goto LAB_005235a4;
  }
  else {
    if (param_2[3] == param_2[4]) {
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
      bVar6 = iVar7 == -1;
      plVar18 = (long *)0x0;
      if (!bVar6) {
        plVar18 = param_2;
      }
      goto joined_r0x00523584;
    }
    bVar6 = false;
    if (param_3 != (long *)0x0) goto LAB_00523588;
LAB_00523628:
    if (bVar6 == false) goto LAB_005235a4;
  }
  *param_5 = *param_5 | 2;
LAB_005235a4:
  if ((long)uStack_138 < 0) {
    operator_delete(ppppppuStack_148);
  }
  if ((char)bStack_119 < '\0') {
    operator_delete(ppppppbStack_130);
  }
  if (*(long *)(lVar4 + 0x28) == lStack_70) {
    return param_2;
  }
LAB_00523718:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00523154  FUN_00523154 =====

long * FUN_00523154(undefined8 param_1,long *param_2,long *param_3,long param_4,uint *param_5,
                   undefined8 *param_6)

{
  uint uVar1;
  byte *******pppppppbVar2;
  byte bVar3;
  long lVar4;
  long *plVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  uint *puVar11;
  undefined8 *******pppppppuVar12;
  byte *******pppppppbVar13;
  ulong uVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  long *plVar18;
  undefined4 uVar19;
  uint local_15c;
  uint *local_158;
  undefined8 ******local_150;
  undefined8 ******local_148;
  ulong local_140;
  undefined8 local_138;
  byte ******local_130;
  ulong local_128;
  byte local_119;
  undefined1 local_114 [4];
  uint local_110 [40];
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  uVar1 = *(uint *)(param_4 + 8) & 0x4a;
  if (uVar1 == 0) {
    uVar19 = 0;
  }
  else if (uVar1 == 0x40) {
    uVar19 = 8;
  }
  else if (uVar1 == 8) {
    uVar19 = 0x10;
  }
  else {
    uVar19 = 10;
  }
  FUN_0052bee0(&local_130,param_4,local_114);
  local_148 = (undefined8 *******)0x0;
  local_140 = 0;
  local_138 = 0;
                    /* try { // try from 005231e8 to 005231fb has its CatchHandler @ 005236cc */
  FUN_0054809c(&local_148,0x16,0);
  local_158 = local_110;
  pppppppuVar12 = (undefined8 *******)local_148;
  if (-1 < (long)local_138) {
    pppppppuVar12 = &local_148;
  }
  local_15c = 0;
  local_150 = pppppppuVar12;
LAB_00523234:
  plVar18 = param_3;
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    plVar5 = param_2;
joined_r0x00523288:
    param_2 = plVar5;
    if (param_3 != (long *)0x0) goto LAB_00523258;
LAB_0052328c:
    if (bVar6 != false) goto LAB_00523400;
  }
  else {
    if (param_2[3] == param_2[4]) {
                    /* try { // try from 00523274 to 005232a3 has its CatchHandler @ 005236d8 */
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
      bVar6 = iVar7 == -1;
      plVar5 = (long *)0x0;
      if (!bVar6) {
        plVar5 = param_2;
      }
      goto joined_r0x00523288;
    }
    bVar6 = false;
    if (param_3 == (long *)0x0) goto LAB_0052328c;
LAB_00523258:
    if (param_3[3] == param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
      plVar18 = (long *)0x0;
      if (iVar7 != -1) {
        plVar18 = param_3;
      }
      param_3 = plVar18;
      if (bVar6 == (iVar7 == -1)) goto LAB_00523400;
    }
    else if (bVar6 == false) goto LAB_00523400;
  }
  uVar8 = local_140;
  if (-1 < (long)local_138) {
    uVar8 = local_138 >> 0x38;
  }
  if ((undefined8 *******)local_150 == (undefined8 *******)((long)pppppppuVar12 + uVar8)) {
    if ((long)uVar8 < 1) {
      uVar10 = uVar8 * 2;
      pppppppuVar12 = (undefined8 *******)local_148;
      uVar14 = uVar10;
      if (-1 < (long)local_138) {
        if (0x16 < uVar10) {
          if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* try { // try from 005236a4 to 005236cb has its CatchHandler @ 0052371c */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_00523718;
        }
        local_138 = CONCAT17((char)uVar10,(undefined7)local_138);
        pppppppuVar12 = &local_148;
        uVar14 = local_140;
      }
      local_140 = uVar14;
      *(undefined1 *)((long)pppppppuVar12 + uVar10) = 0;
    }
    else {
                    /* try { // try from 005232e4 to 00523353 has its CatchHandler @ 005236d4 */
      FUN_0054809c(&local_148,uVar8,0);
    }
    uVar14 = (local_138 & 0x7fffffffffffffff) - 1;
    uVar10 = local_140;
    if (-1 < (long)local_138) {
      uVar14 = 0x16;
      uVar10 = local_138 >> 0x38;
    }
    if (uVar14 < uVar10 || uVar14 - uVar10 == 0) {
      pppppppuVar12 = (undefined8 *******)local_148;
      uVar10 = uVar14;
      if (-1 < (long)local_138) {
        if (0x16 < uVar14) {
          if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* try { // try from 00523668 to 0052368f has its CatchHandler @ 00523720 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_00523718;
        }
        local_138 = CONCAT17((char)uVar14,(undefined7)local_138);
        pppppppuVar12 = &local_148;
        uVar10 = local_140;
      }
      local_140 = uVar10;
      *(undefined1 *)((long)pppppppuVar12 + uVar14) = 0;
    }
    else {
      FUN_0054809c(&local_148,uVar14 - uVar10,0);
    }
    pppppppuVar12 = (undefined8 *******)local_148;
    if (-1 < (long)local_138) {
      pppppppuVar12 = &local_148;
    }
    local_150 = (undefined8 ******)((long)pppppppuVar12 + uVar8);
  }
  if ((byte *)param_2[3] == (byte *)param_2[4]) {
                    /* try { // try from 005233b0 to 005233fb has its CatchHandler @ 005236d8 */
    uVar8 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    uVar8 = (ulong)*(byte *)param_2[3];
  }
  iVar7 = FUN_00526be0(uVar8,uVar19,pppppppuVar12,&local_150,&local_15c,local_114[0],&local_130,
                       local_110,&local_158,"0123456789abcdefABCDEFxX+-pPiInN");
  param_3 = plVar18;
  if (iVar7 != 0) goto LAB_00523400;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 1;
  }
  goto LAB_00523234;
LAB_00523400:
  uVar8 = local_128;
  if (-1 < (char)local_119) {
    uVar8 = (ulong)local_119;
  }
  if ((uVar8 != 0) && ((long)local_158 - (long)local_110 < 0xa0)) {
    *local_158 = local_15c;
    local_158 = local_158 + 1;
  }
                    /* try { // try from 0052343c to 0052363f has its CatchHandler @ 005236d0 */
  uVar9 = FUN_00545a04(pppppppuVar12,local_150,param_5,uVar19);
  uVar14 = (ulong)(uint)(int)(char)local_119;
  uVar8 = local_128;
  if (-1 < (char)local_119) {
    uVar8 = (ulong)local_119;
  }
  *param_6 = uVar9;
  if ((4 < (long)local_158 - (long)local_110) && (uVar8 != 0)) {
    puVar11 = local_158 + -1;
    if ((local_110 != local_158) && (local_110 < puVar11)) {
      puVar17 = local_110;
      puVar15 = puVar11;
      do {
        puVar17 = puVar17 + 1;
        uVar1 = puVar17[-1];
        puVar17[-1] = *puVar15;
        puVar16 = puVar15 + -1;
        *puVar15 = uVar1;
        puVar15 = puVar16;
      } while (puVar17 < puVar16);
      uVar14 = (ulong)local_119;
    }
    pppppppbVar2 = (byte *******)local_130;
    if (-1 < (char)uVar14) {
      pppppppbVar2 = &local_130;
    }
    pppppppbVar13 = pppppppbVar2;
    if (local_110 < puVar11) {
      if (-1 < (char)uVar14) {
        local_128 = uVar14 & 0xff;
      }
      puVar17 = local_110;
      do {
        bVar3 = *(byte *)pppppppbVar13;
        if (((bVar3 != 0) && (bVar3 != 0xff)) && (*puVar17 != (uint)bVar3)) goto LAB_0052355c;
        puVar17 = puVar17 + 1;
        if (1 < (long)((long)pppppppbVar2 + (local_128 - (long)pppppppbVar13))) {
          pppppppbVar13 = (byte *******)((long)pppppppbVar13 + 1);
        }
      } while (puVar17 < puVar11);
    }
    bVar3 = *(byte *)pppppppbVar13;
    if (((bVar3 != 0) && (bVar3 != 0xff)) && ((uint)bVar3 <= *puVar11 - 1)) {
LAB_0052355c:
      *param_5 = 4;
    }
  }
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    plVar18 = param_2;
joined_r0x00523584:
    param_2 = plVar18;
    if (param_3 == (long *)0x0) goto LAB_00523628;
LAB_00523588:
    if (param_3[3] == param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
      if (bVar6 != (iVar7 == -1)) goto LAB_005235a4;
    }
    else if (bVar6 != false) goto LAB_005235a4;
  }
  else {
    if (param_2[3] == param_2[4]) {
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
      bVar6 = iVar7 == -1;
      plVar18 = (long *)0x0;
      if (!bVar6) {
        plVar18 = param_2;
      }
      goto joined_r0x00523584;
    }
    bVar6 = false;
    if (param_3 != (long *)0x0) goto LAB_00523588;
LAB_00523628:
    if (bVar6 == false) goto LAB_005235a4;
  }
  *param_5 = *param_5 | 2;
LAB_005235a4:
  if ((long)local_138 < 0) {
    operator_delete(local_148);
  }
  if ((char)local_119 < '\0') {
    operator_delete(local_130);
  }
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return param_2;
  }
LAB_00523718:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00523724  thunk_FUN_00523728 =====

long * thunk_FUN_00523728(undefined8 param_1,long *param_2,long *param_3,long param_4,uint *param_5,
                         undefined8 *param_6)

{
  uint uVar1;
  byte *******pppppppbVar2;
  byte bVar3;
  long lVar4;
  long *plVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  uint *puVar11;
  undefined8 *******pppppppuVar12;
  byte *******pppppppbVar13;
  ulong uVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  long *plVar18;
  undefined4 uVar19;
  uint uStack_15c;
  uint *puStack_158;
  undefined8 ******ppppppuStack_150;
  undefined8 ******ppppppuStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  byte ******ppppppbStack_130;
  ulong uStack_128;
  byte bStack_119;
  undefined1 auStack_114 [4];
  uint auStack_110 [40];
  long lStack_70;
  
  lVar4 = tpidr_el0;
  lStack_70 = *(long *)(lVar4 + 0x28);
  uVar1 = *(uint *)(param_4 + 8) & 0x4a;
  if (uVar1 == 0) {
    uVar19 = 0;
  }
  else if (uVar1 == 0x40) {
    uVar19 = 8;
  }
  else if (uVar1 == 8) {
    uVar19 = 0x10;
  }
  else {
    uVar19 = 10;
  }
  FUN_0052bee0(&ppppppbStack_130,param_4,auStack_114);
  ppppppuStack_148 = (undefined8 *******)0x0;
  uStack_140 = 0;
  uStack_138 = 0;
  FUN_0054809c(&ppppppuStack_148,0x16,0);
  puStack_158 = auStack_110;
  pppppppuVar12 = (undefined8 *******)ppppppuStack_148;
  if (-1 < (long)uStack_138) {
    pppppppuVar12 = &ppppppuStack_148;
  }
  uStack_15c = 0;
  ppppppuStack_150 = pppppppuVar12;
LAB_00523808:
  plVar18 = param_3;
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    plVar5 = param_2;
joined_r0x0052385c:
    param_2 = plVar5;
    if (param_3 != (long *)0x0) goto LAB_0052382c;
LAB_00523860:
    if (bVar6 != false) goto LAB_005239d4;
  }
  else {
    if (param_2[3] == param_2[4]) {
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
      bVar6 = iVar7 == -1;
      plVar5 = (long *)0x0;
      if (!bVar6) {
        plVar5 = param_2;
      }
      goto joined_r0x0052385c;
    }
    bVar6 = false;
    if (param_3 == (long *)0x0) goto LAB_00523860;
LAB_0052382c:
    if (param_3[3] == param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
      plVar18 = (long *)0x0;
      if (iVar7 != -1) {
        plVar18 = param_3;
      }
      param_3 = plVar18;
      if (bVar6 == (iVar7 == -1)) goto LAB_005239d4;
    }
    else if (bVar6 == false) goto LAB_005239d4;
  }
  uVar8 = uStack_140;
  if (-1 < (long)uStack_138) {
    uVar8 = uStack_138 >> 0x38;
  }
  if ((undefined8 *******)ppppppuStack_150 == (undefined8 *******)((long)pppppppuVar12 + uVar8)) {
    if ((long)uVar8 < 1) {
      uVar10 = uVar8 * 2;
      pppppppuVar12 = (undefined8 *******)ppppppuStack_148;
      uVar14 = uVar10;
      if (-1 < (long)uStack_138) {
        if (0x16 < uVar10) {
          if (*(long *)(lVar4 + 0x28) == lStack_70) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_00523cec;
        }
        uStack_138 = CONCAT17((char)uVar10,(undefined7)uStack_138);
        pppppppuVar12 = &ppppppuStack_148;
        uVar14 = uStack_140;
      }
      uStack_140 = uVar14;
      *(undefined1 *)((long)pppppppuVar12 + uVar10) = 0;
    }
    else {
      FUN_0054809c(&ppppppuStack_148,uVar8,0);
    }
    uVar14 = (uStack_138 & 0x7fffffffffffffff) - 1;
    uVar10 = uStack_140;
    if (-1 < (long)uStack_138) {
      uVar14 = 0x16;
      uVar10 = uStack_138 >> 0x38;
    }
    if (uVar14 < uVar10 || uVar14 - uVar10 == 0) {
      pppppppuVar12 = (undefined8 *******)ppppppuStack_148;
      uVar10 = uVar14;
      if (-1 < (long)uStack_138) {
        if (0x16 < uVar14) {
          if (*(long *)(lVar4 + 0x28) == lStack_70) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_00523cec;
        }
        uStack_138 = CONCAT17((char)uVar14,(undefined7)uStack_138);
        pppppppuVar12 = &ppppppuStack_148;
        uVar10 = uStack_140;
      }
      uStack_140 = uVar10;
      *(undefined1 *)((long)pppppppuVar12 + uVar14) = 0;
    }
    else {
      FUN_0054809c(&ppppppuStack_148,uVar14 - uVar10,0);
    }
    pppppppuVar12 = (undefined8 *******)ppppppuStack_148;
    if (-1 < (long)uStack_138) {
      pppppppuVar12 = &ppppppuStack_148;
    }
    ppppppuStack_150 = (undefined8 ******)((long)pppppppuVar12 + uVar8);
  }
  if ((byte *)param_2[3] == (byte *)param_2[4]) {
    uVar8 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    uVar8 = (ulong)*(byte *)param_2[3];
  }
  iVar7 = FUN_00526be0(uVar8,uVar19,pppppppuVar12,&ppppppuStack_150,&uStack_15c,auStack_114[0],
                       &ppppppbStack_130,auStack_110,&puStack_158,"0123456789abcdefABCDEFxX+-pPiInN"
                      );
  param_3 = plVar18;
  if (iVar7 != 0) goto LAB_005239d4;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 1;
  }
  goto LAB_00523808;
LAB_005239d4:
  uVar8 = uStack_128;
  if (-1 < (char)bStack_119) {
    uVar8 = (ulong)bStack_119;
  }
  if ((uVar8 != 0) && ((long)puStack_158 - (long)auStack_110 < 0xa0)) {
    *puStack_158 = uStack_15c;
    puStack_158 = puStack_158 + 1;
  }
  uVar9 = FUN_00545b58(pppppppuVar12,ppppppuStack_150,param_5,uVar19);
  uVar14 = (ulong)(uint)(int)(char)bStack_119;
  uVar8 = uStack_128;
  if (-1 < (char)bStack_119) {
    uVar8 = (ulong)bStack_119;
  }
  *param_6 = uVar9;
  if ((4 < (long)puStack_158 - (long)auStack_110) && (uVar8 != 0)) {
    puVar11 = puStack_158 + -1;
    if ((auStack_110 != puStack_158) && (auStack_110 < puVar11)) {
      puVar17 = auStack_110;
      puVar15 = puVar11;
      do {
        puVar17 = puVar17 + 1;
        uVar1 = puVar17[-1];
        puVar17[-1] = *puVar15;
        puVar16 = puVar15 + -1;
        *puVar15 = uVar1;
        puVar15 = puVar16;
      } while (puVar17 < puVar16);
      uVar14 = (ulong)bStack_119;
    }
    pppppppbVar2 = (byte *******)ppppppbStack_130;
    if (-1 < (char)uVar14) {
      pppppppbVar2 = &ppppppbStack_130;
    }
    pppppppbVar13 = pppppppbVar2;
    if (auStack_110 < puVar11) {
      if (-1 < (char)uVar14) {
        uStack_128 = uVar14 & 0xff;
      }
      puVar17 = auStack_110;
      do {
        bVar3 = *(byte *)pppppppbVar13;
        if (((bVar3 != 0) && (bVar3 != 0xff)) && (*puVar17 != (uint)bVar3)) goto LAB_00523b30;
        puVar17 = puVar17 + 1;
        if (1 < (long)((long)pppppppbVar2 + (uStack_128 - (long)pppppppbVar13))) {
          pppppppbVar13 = (byte *******)((long)pppppppbVar13 + 1);
        }
      } while (puVar17 < puVar11);
    }
    bVar3 = *(byte *)pppppppbVar13;
    if (((bVar3 != 0) && (bVar3 != 0xff)) && ((uint)bVar3 <= *puVar11 - 1)) {
LAB_00523b30:
      *param_5 = 4;
    }
  }
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    plVar18 = param_2;
joined_r0x00523b58:
    param_2 = plVar18;
    if (param_3 == (long *)0x0) goto LAB_00523bfc;
LAB_00523b5c:
    if (param_3[3] == param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
      if (bVar6 != (iVar7 == -1)) goto LAB_00523b78;
    }
    else if (bVar6 != false) goto LAB_00523b78;
  }
  else {
    if (param_2[3] == param_2[4]) {
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
      bVar6 = iVar7 == -1;
      plVar18 = (long *)0x0;
      if (!bVar6) {
        plVar18 = param_2;
      }
      goto joined_r0x00523b58;
    }
    bVar6 = false;
    if (param_3 != (long *)0x0) goto LAB_00523b5c;
LAB_00523bfc:
    if (bVar6 == false) goto LAB_00523b78;
  }
  *param_5 = *param_5 | 2;
LAB_00523b78:
  if ((long)uStack_138 < 0) {
    operator_delete(ppppppuStack_148);
  }
  if ((char)bStack_119 < '\0') {
    operator_delete(ppppppbStack_130);
  }
  if (*(long *)(lVar4 + 0x28) == lStack_70) {
    return param_2;
  }
LAB_00523cec:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00523728  FUN_00523728 =====

long * FUN_00523728(undefined8 param_1,long *param_2,long *param_3,long param_4,uint *param_5,
                   undefined8 *param_6)

{
  uint uVar1;
  byte *******pppppppbVar2;
  byte bVar3;
  long lVar4;
  long *plVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  uint *puVar11;
  undefined8 *******pppppppuVar12;
  byte *******pppppppbVar13;
  ulong uVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  long *plVar18;
  undefined4 uVar19;
  uint local_15c;
  uint *local_158;
  undefined8 ******local_150;
  undefined8 ******local_148;
  ulong local_140;
  undefined8 local_138;
  byte ******local_130;
  ulong local_128;
  byte local_119;
  undefined1 local_114 [4];
  uint local_110 [40];
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  uVar1 = *(uint *)(param_4 + 8) & 0x4a;
  if (uVar1 == 0) {
    uVar19 = 0;
  }
  else if (uVar1 == 0x40) {
    uVar19 = 8;
  }
  else if (uVar1 == 8) {
    uVar19 = 0x10;
  }
  else {
    uVar19 = 10;
  }
  FUN_0052bee0(&local_130,param_4,local_114);
  local_148 = (undefined8 *******)0x0;
  local_140 = 0;
  local_138 = 0;
                    /* try { // try from 005237bc to 005237cf has its CatchHandler @ 00523ca0 */
  FUN_0054809c(&local_148,0x16,0);
  local_158 = local_110;
  pppppppuVar12 = (undefined8 *******)local_148;
  if (-1 < (long)local_138) {
    pppppppuVar12 = &local_148;
  }
  local_15c = 0;
  local_150 = pppppppuVar12;
LAB_00523808:
  plVar18 = param_3;
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    plVar5 = param_2;
joined_r0x0052385c:
    param_2 = plVar5;
    if (param_3 != (long *)0x0) goto LAB_0052382c;
LAB_00523860:
    if (bVar6 != false) goto LAB_005239d4;
  }
  else {
    if (param_2[3] == param_2[4]) {
                    /* try { // try from 00523848 to 00523877 has its CatchHandler @ 00523cac */
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
      bVar6 = iVar7 == -1;
      plVar5 = (long *)0x0;
      if (!bVar6) {
        plVar5 = param_2;
      }
      goto joined_r0x0052385c;
    }
    bVar6 = false;
    if (param_3 == (long *)0x0) goto LAB_00523860;
LAB_0052382c:
    if (param_3[3] == param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
      plVar18 = (long *)0x0;
      if (iVar7 != -1) {
        plVar18 = param_3;
      }
      param_3 = plVar18;
      if (bVar6 == (iVar7 == -1)) goto LAB_005239d4;
    }
    else if (bVar6 == false) goto LAB_005239d4;
  }
  uVar8 = local_140;
  if (-1 < (long)local_138) {
    uVar8 = local_138 >> 0x38;
  }
  if ((undefined8 *******)local_150 == (undefined8 *******)((long)pppppppuVar12 + uVar8)) {
    if ((long)uVar8 < 1) {
      uVar10 = uVar8 * 2;
      pppppppuVar12 = (undefined8 *******)local_148;
      uVar14 = uVar10;
      if (-1 < (long)local_138) {
        if (0x16 < uVar10) {
          if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* try { // try from 00523c78 to 00523c9f has its CatchHandler @ 00523cf0 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_00523cec;
        }
        local_138 = CONCAT17((char)uVar10,(undefined7)local_138);
        pppppppuVar12 = &local_148;
        uVar14 = local_140;
      }
      local_140 = uVar14;
      *(undefined1 *)((long)pppppppuVar12 + uVar10) = 0;
    }
    else {
                    /* try { // try from 005238b8 to 00523927 has its CatchHandler @ 00523ca8 */
      FUN_0054809c(&local_148,uVar8,0);
    }
    uVar14 = (local_138 & 0x7fffffffffffffff) - 1;
    uVar10 = local_140;
    if (-1 < (long)local_138) {
      uVar14 = 0x16;
      uVar10 = local_138 >> 0x38;
    }
    if (uVar14 < uVar10 || uVar14 - uVar10 == 0) {
      pppppppuVar12 = (undefined8 *******)local_148;
      uVar10 = uVar14;
      if (-1 < (long)local_138) {
        if (0x16 < uVar14) {
          if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* try { // try from 00523c3c to 00523c63 has its CatchHandler @ 00523cf4 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_00523cec;
        }
        local_138 = CONCAT17((char)uVar14,(undefined7)local_138);
        pppppppuVar12 = &local_148;
        uVar10 = local_140;
      }
      local_140 = uVar10;
      *(undefined1 *)((long)pppppppuVar12 + uVar14) = 0;
    }
    else {
      FUN_0054809c(&local_148,uVar14 - uVar10,0);
    }
    pppppppuVar12 = (undefined8 *******)local_148;
    if (-1 < (long)local_138) {
      pppppppuVar12 = &local_148;
    }
    local_150 = (undefined8 ******)((long)pppppppuVar12 + uVar8);
  }
  if ((byte *)param_2[3] == (byte *)param_2[4]) {
                    /* try { // try from 00523984 to 005239cf has its CatchHandler @ 00523cac */
    uVar8 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    uVar8 = (ulong)*(byte *)param_2[3];
  }
  iVar7 = FUN_00526be0(uVar8,uVar19,pppppppuVar12,&local_150,&local_15c,local_114[0],&local_130,
                       local_110,&local_158,"0123456789abcdefABCDEFxX+-pPiInN");
  param_3 = plVar18;
  if (iVar7 != 0) goto LAB_005239d4;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 1;
  }
  goto LAB_00523808;
LAB_005239d4:
  uVar8 = local_128;
  if (-1 < (char)local_119) {
    uVar8 = (ulong)local_119;
  }
  if ((uVar8 != 0) && ((long)local_158 - (long)local_110 < 0xa0)) {
    *local_158 = local_15c;
    local_158 = local_158 + 1;
  }
                    /* try { // try from 00523a10 to 00523c13 has its CatchHandler @ 00523ca4 */
  uVar9 = FUN_00545b58(pppppppuVar12,local_150,param_5,uVar19);
  uVar14 = (ulong)(uint)(int)(char)local_119;
  uVar8 = local_128;
  if (-1 < (char)local_119) {
    uVar8 = (ulong)local_119;
  }
  *param_6 = uVar9;
  if ((4 < (long)local_158 - (long)local_110) && (uVar8 != 0)) {
    puVar11 = local_158 + -1;
    if ((local_110 != local_158) && (local_110 < puVar11)) {
      puVar17 = local_110;
      puVar15 = puVar11;
      do {
        puVar17 = puVar17 + 1;
        uVar1 = puVar17[-1];
        puVar17[-1] = *puVar15;
        puVar16 = puVar15 + -1;
        *puVar15 = uVar1;
        puVar15 = puVar16;
      } while (puVar17 < puVar16);
      uVar14 = (ulong)local_119;
    }
    pppppppbVar2 = (byte *******)local_130;
    if (-1 < (char)uVar14) {
      pppppppbVar2 = &local_130;
    }
    pppppppbVar13 = pppppppbVar2;
    if (local_110 < puVar11) {
      if (-1 < (char)uVar14) {
        local_128 = uVar14 & 0xff;
      }
      puVar17 = local_110;
      do {
        bVar3 = *(byte *)pppppppbVar13;
        if (((bVar3 != 0) && (bVar3 != 0xff)) && (*puVar17 != (uint)bVar3)) goto LAB_00523b30;
        puVar17 = puVar17 + 1;
        if (1 < (long)((long)pppppppbVar2 + (local_128 - (long)pppppppbVar13))) {
          pppppppbVar13 = (byte *******)((long)pppppppbVar13 + 1);
        }
      } while (puVar17 < puVar11);
    }
    bVar3 = *(byte *)pppppppbVar13;
    if (((bVar3 != 0) && (bVar3 != 0xff)) && ((uint)bVar3 <= *puVar11 - 1)) {
LAB_00523b30:
      *param_5 = 4;
    }
  }
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    plVar18 = param_2;
joined_r0x00523b58:
    param_2 = plVar18;
    if (param_3 == (long *)0x0) goto LAB_00523bfc;
LAB_00523b5c:
    if (param_3[3] == param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
      if (bVar6 != (iVar7 == -1)) goto LAB_00523b78;
    }
    else if (bVar6 != false) goto LAB_00523b78;
  }
  else {
    if (param_2[3] == param_2[4]) {
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
      bVar6 = iVar7 == -1;
      plVar18 = (long *)0x0;
      if (!bVar6) {
        plVar18 = param_2;
      }
      goto joined_r0x00523b58;
    }
    bVar6 = false;
    if (param_3 != (long *)0x0) goto LAB_00523b5c;
LAB_00523bfc:
    if (bVar6 == false) goto LAB_00523b78;
  }
  *param_5 = *param_5 | 2;
LAB_00523b78:
  if ((long)local_138 < 0) {
    operator_delete(local_148);
  }
  if ((char)local_119 < '\0') {
    operator_delete(local_130);
  }
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return param_2;
  }
LAB_00523cec:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00523cf8  thunk_FUN_00523cfc =====

long * thunk_FUN_00523cfc(undefined8 param_1,long *param_2,long *param_3,long param_4,uint *param_5,
                         undefined2 *param_6)

{
  uint uVar1;
  byte *******pppppppbVar2;
  byte bVar3;
  long lVar4;
  long *plVar5;
  bool bVar6;
  undefined2 uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  uint *puVar11;
  undefined8 *******pppppppuVar12;
  byte *******pppppppbVar13;
  ulong uVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  long *plVar18;
  undefined4 uVar19;
  uint uStack_15c;
  uint *puStack_158;
  undefined8 ******ppppppuStack_150;
  undefined8 ******ppppppuStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  byte ******ppppppbStack_130;
  ulong uStack_128;
  byte bStack_119;
  undefined1 auStack_114 [4];
  uint auStack_110 [40];
  long lStack_70;
  
  lVar4 = tpidr_el0;
  lStack_70 = *(long *)(lVar4 + 0x28);
  uVar1 = *(uint *)(param_4 + 8) & 0x4a;
  if (uVar1 == 0) {
    uVar19 = 0;
  }
  else if (uVar1 == 0x40) {
    uVar19 = 8;
  }
  else if (uVar1 == 8) {
    uVar19 = 0x10;
  }
  else {
    uVar19 = 10;
  }
  FUN_0052bee0(&ppppppbStack_130,param_4,auStack_114);
  ppppppuStack_148 = (undefined8 *******)0x0;
  uStack_140 = 0;
  uStack_138 = 0;
  FUN_0054809c(&ppppppuStack_148,0x16,0);
  puStack_158 = auStack_110;
  pppppppuVar12 = (undefined8 *******)ppppppuStack_148;
  if (-1 < (long)uStack_138) {
    pppppppuVar12 = &ppppppuStack_148;
  }
  uStack_15c = 0;
  ppppppuStack_150 = pppppppuVar12;
LAB_00523ddc:
  plVar18 = param_3;
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    plVar5 = param_2;
joined_r0x00523e30:
    param_2 = plVar5;
    if (param_3 != (long *)0x0) goto LAB_00523e00;
LAB_00523e34:
    if (bVar6 != false) goto LAB_00523fa8;
  }
  else {
    if (param_2[3] == param_2[4]) {
      iVar8 = (**(code **)(*param_2 + 0x48))(param_2);
      bVar6 = iVar8 == -1;
      plVar5 = (long *)0x0;
      if (!bVar6) {
        plVar5 = param_2;
      }
      goto joined_r0x00523e30;
    }
    bVar6 = false;
    if (param_3 == (long *)0x0) goto LAB_00523e34;
LAB_00523e00:
    if (param_3[3] == param_3[4]) {
      iVar8 = (**(code **)(*param_3 + 0x48))(param_3);
      plVar18 = (long *)0x0;
      if (iVar8 != -1) {
        plVar18 = param_3;
      }
      param_3 = plVar18;
      if (bVar6 == (iVar8 == -1)) goto LAB_00523fa8;
    }
    else if (bVar6 == false) goto LAB_00523fa8;
  }
  uVar9 = uStack_140;
  if (-1 < (long)uStack_138) {
    uVar9 = uStack_138 >> 0x38;
  }
  if ((undefined8 *******)ppppppuStack_150 == (undefined8 *******)((long)pppppppuVar12 + uVar9)) {
    if ((long)uVar9 < 1) {
      uVar10 = uVar9 * 2;
      pppppppuVar12 = (undefined8 *******)ppppppuStack_148;
      uVar14 = uVar10;
      if (-1 < (long)uStack_138) {
        if (0x16 < uVar10) {
          if (*(long *)(lVar4 + 0x28) == lStack_70) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_005242c0;
        }
        uStack_138 = CONCAT17((char)uVar10,(undefined7)uStack_138);
        pppppppuVar12 = &ppppppuStack_148;
        uVar14 = uStack_140;
      }
      uStack_140 = uVar14;
      *(undefined1 *)((long)pppppppuVar12 + uVar10) = 0;
    }
    else {
      FUN_0054809c(&ppppppuStack_148,uVar9,0);
    }
    uVar14 = (uStack_138 & 0x7fffffffffffffff) - 1;
    uVar10 = uStack_140;
    if (-1 < (long)uStack_138) {
      uVar14 = 0x16;
      uVar10 = uStack_138 >> 0x38;
    }
    if (uVar14 < uVar10 || uVar14 - uVar10 == 0) {
      pppppppuVar12 = (undefined8 *******)ppppppuStack_148;
      uVar10 = uVar14;
      if (-1 < (long)uStack_138) {
        if (0x16 < uVar14) {
          if (*(long *)(lVar4 + 0x28) == lStack_70) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_005242c0;
        }
        uStack_138 = CONCAT17((char)uVar14,(undefined7)uStack_138);
        pppppppuVar12 = &ppppppuStack_148;
        uVar10 = uStack_140;
      }
      uStack_140 = uVar10;
      *(undefined1 *)((long)pppppppuVar12 + uVar14) = 0;
    }
    else {
      FUN_0054809c(&ppppppuStack_148,uVar14 - uVar10,0);
    }
    pppppppuVar12 = (undefined8 *******)ppppppuStack_148;
    if (-1 < (long)uStack_138) {
      pppppppuVar12 = &ppppppuStack_148;
    }
    ppppppuStack_150 = (undefined8 ******)((long)pppppppuVar12 + uVar9);
  }
  if ((byte *)param_2[3] == (byte *)param_2[4]) {
    uVar9 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    uVar9 = (ulong)*(byte *)param_2[3];
  }
  iVar8 = FUN_00526be0(uVar9,uVar19,pppppppuVar12,&ppppppuStack_150,&uStack_15c,auStack_114[0],
                       &ppppppbStack_130,auStack_110,&puStack_158,"0123456789abcdefABCDEFxX+-pPiInN"
                      );
  param_3 = plVar18;
  if (iVar8 != 0) goto LAB_00523fa8;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 1;
  }
  goto LAB_00523ddc;
LAB_00523fa8:
  uVar9 = uStack_128;
  if (-1 < (char)bStack_119) {
    uVar9 = (ulong)bStack_119;
  }
  if ((uVar9 != 0) && ((long)puStack_158 - (long)auStack_110 < 0xa0)) {
    *puStack_158 = uStack_15c;
    puStack_158 = puStack_158 + 1;
  }
  uVar7 = FUN_00545cac(pppppppuVar12,ppppppuStack_150,param_5,uVar19);
  uVar14 = (ulong)(uint)(int)(char)bStack_119;
  uVar9 = uStack_128;
  if (-1 < (char)bStack_119) {
    uVar9 = (ulong)bStack_119;
  }
  *param_6 = uVar7;
  if ((4 < (long)puStack_158 - (long)auStack_110) && (uVar9 != 0)) {
    puVar11 = puStack_158 + -1;
    if ((auStack_110 != puStack_158) && (auStack_110 < puVar11)) {
      puVar17 = auStack_110;
      puVar15 = puVar11;
      do {
        puVar17 = puVar17 + 1;
        uVar1 = puVar17[-1];
        puVar17[-1] = *puVar15;
        puVar16 = puVar15 + -1;
        *puVar15 = uVar1;
        puVar15 = puVar16;
      } while (puVar17 < puVar16);
      uVar14 = (ulong)bStack_119;
    }
    pppppppbVar2 = (byte *******)ppppppbStack_130;
    if (-1 < (char)uVar14) {
      pppppppbVar2 = &ppppppbStack_130;
    }
    pppppppbVar13 = pppppppbVar2;
    if (auStack_110 < puVar11) {
      if (-1 < (char)uVar14) {
        uStack_128 = uVar14 & 0xff;
      }
      puVar17 = auStack_110;
      do {
        bVar3 = *(byte *)pppppppbVar13;
        if (((bVar3 != 0) && (bVar3 != 0xff)) && (*puVar17 != (uint)bVar3)) goto LAB_00524104;
        puVar17 = puVar17 + 1;
        if (1 < (long)((long)pppppppbVar2 + (uStack_128 - (long)pppppppbVar13))) {
          pppppppbVar13 = (byte *******)((long)pppppppbVar13 + 1);
        }
      } while (puVar17 < puVar11);
    }
    bVar3 = *(byte *)pppppppbVar13;
    if (((bVar3 != 0) && (bVar3 != 0xff)) && ((uint)bVar3 <= *puVar11 - 1)) {
LAB_00524104:
      *param_5 = 4;
    }
  }
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    plVar18 = param_2;
joined_r0x0052412c:
    param_2 = plVar18;
    if (param_3 == (long *)0x0) goto LAB_005241d0;
LAB_00524130:
    if (param_3[3] == param_3[4]) {
      iVar8 = (**(code **)(*param_3 + 0x48))(param_3);
      if (bVar6 != (iVar8 == -1)) goto LAB_0052414c;
    }
    else if (bVar6 != false) goto LAB_0052414c;
  }
  else {
    if (param_2[3] == param_2[4]) {
      iVar8 = (**(code **)(*param_2 + 0x48))(param_2);
      bVar6 = iVar8 == -1;
      plVar18 = (long *)0x0;
      if (!bVar6) {
        plVar18 = param_2;
      }
      goto joined_r0x0052412c;
    }
    bVar6 = false;
    if (param_3 != (long *)0x0) goto LAB_00524130;
LAB_005241d0:
    if (bVar6 == false) goto LAB_0052414c;
  }
  *param_5 = *param_5 | 2;
LAB_0052414c:
  if ((long)uStack_138 < 0) {
    operator_delete(ppppppuStack_148);
  }
  if ((char)bStack_119 < '\0') {
    operator_delete(ppppppbStack_130);
  }
  if (*(long *)(lVar4 + 0x28) == lStack_70) {
    return param_2;
  }
LAB_005242c0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00523cfc  FUN_00523cfc =====

long * FUN_00523cfc(undefined8 param_1,long *param_2,long *param_3,long param_4,uint *param_5,
                   undefined2 *param_6)

{
  uint uVar1;
  byte *******pppppppbVar2;
  byte bVar3;
  long lVar4;
  long *plVar5;
  bool bVar6;
  undefined2 uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  uint *puVar11;
  undefined8 *******pppppppuVar12;
  byte *******pppppppbVar13;
  ulong uVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  long *plVar18;
  undefined4 uVar19;
  uint local_15c;
  uint *local_158;
  undefined8 ******local_150;
  undefined8 ******local_148;
  ulong local_140;
  undefined8 local_138;
  byte ******local_130;
  ulong local_128;
  byte local_119;
  undefined1 local_114 [4];
  uint local_110 [40];
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  uVar1 = *(uint *)(param_4 + 8) & 0x4a;
  if (uVar1 == 0) {
    uVar19 = 0;
  }
  else if (uVar1 == 0x40) {
    uVar19 = 8;
  }
  else if (uVar1 == 8) {
    uVar19 = 0x10;
  }
  else {
    uVar19 = 10;
  }
  FUN_0052bee0(&local_130,param_4,local_114);
  local_148 = (undefined8 *******)0x0;
  local_140 = 0;
  local_138 = 0;
                    /* try { // try from 00523d90 to 00523da3 has its CatchHandler @ 00524274 */
  FUN_0054809c(&local_148,0x16,0);
  local_158 = local_110;
  pppppppuVar12 = (undefined8 *******)local_148;
  if (-1 < (long)local_138) {
    pppppppuVar12 = &local_148;
  }
  local_15c = 0;
  local_150 = pppppppuVar12;
LAB_00523ddc:
  plVar18 = param_3;
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    plVar5 = param_2;
joined_r0x00523e30:
    param_2 = plVar5;
    if (param_3 != (long *)0x0) goto LAB_00523e00;
LAB_00523e34:
    if (bVar6 != false) goto LAB_00523fa8;
  }
  else {
    if (param_2[3] == param_2[4]) {
                    /* try { // try from 00523e1c to 00523e4b has its CatchHandler @ 00524280 */
      iVar8 = (**(code **)(*param_2 + 0x48))(param_2);
      bVar6 = iVar8 == -1;
      plVar5 = (long *)0x0;
      if (!bVar6) {
        plVar5 = param_2;
      }
      goto joined_r0x00523e30;
    }
    bVar6 = false;
    if (param_3 == (long *)0x0) goto LAB_00523e34;
LAB_00523e00:
    if (param_3[3] == param_3[4]) {
      iVar8 = (**(code **)(*param_3 + 0x48))(param_3);
      plVar18 = (long *)0x0;
      if (iVar8 != -1) {
        plVar18 = param_3;
      }
      param_3 = plVar18;
      if (bVar6 == (iVar8 == -1)) goto LAB_00523fa8;
    }
    else if (bVar6 == false) goto LAB_00523fa8;
  }
  uVar9 = local_140;
  if (-1 < (long)local_138) {
    uVar9 = local_138 >> 0x38;
  }
  if ((undefined8 *******)local_150 == (undefined8 *******)((long)pppppppuVar12 + uVar9)) {
    if ((long)uVar9 < 1) {
      uVar10 = uVar9 * 2;
      pppppppuVar12 = (undefined8 *******)local_148;
      uVar14 = uVar10;
      if (-1 < (long)local_138) {
        if (0x16 < uVar10) {
          if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* try { // try from 0052424c to 00524273 has its CatchHandler @ 005242c4 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_005242c0;
        }
        local_138 = CONCAT17((char)uVar10,(undefined7)local_138);
        pppppppuVar12 = &local_148;
        uVar14 = local_140;
      }
      local_140 = uVar14;
      *(undefined1 *)((long)pppppppuVar12 + uVar10) = 0;
    }
    else {
                    /* try { // try from 00523e8c to 00523efb has its CatchHandler @ 0052427c */
      FUN_0054809c(&local_148,uVar9,0);
    }
    uVar14 = (local_138 & 0x7fffffffffffffff) - 1;
    uVar10 = local_140;
    if (-1 < (long)local_138) {
      uVar14 = 0x16;
      uVar10 = local_138 >> 0x38;
    }
    if (uVar14 < uVar10 || uVar14 - uVar10 == 0) {
      pppppppuVar12 = (undefined8 *******)local_148;
      uVar10 = uVar14;
      if (-1 < (long)local_138) {
        if (0x16 < uVar14) {
          if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* try { // try from 00524210 to 00524237 has its CatchHandler @ 005242c8 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_005242c0;
        }
        local_138 = CONCAT17((char)uVar14,(undefined7)local_138);
        pppppppuVar12 = &local_148;
        uVar10 = local_140;
      }
      local_140 = uVar10;
      *(undefined1 *)((long)pppppppuVar12 + uVar14) = 0;
    }
    else {
      FUN_0054809c(&local_148,uVar14 - uVar10,0);
    }
    pppppppuVar12 = (undefined8 *******)local_148;
    if (-1 < (long)local_138) {
      pppppppuVar12 = &local_148;
    }
    local_150 = (undefined8 ******)((long)pppppppuVar12 + uVar9);
  }
  if ((byte *)param_2[3] == (byte *)param_2[4]) {
                    /* try { // try from 00523f58 to 00523fa3 has its CatchHandler @ 00524280 */
    uVar9 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    uVar9 = (ulong)*(byte *)param_2[3];
  }
  iVar8 = FUN_00526be0(uVar9,uVar19,pppppppuVar12,&local_150,&local_15c,local_114[0],&local_130,
                       local_110,&local_158,"0123456789abcdefABCDEFxX+-pPiInN");
  param_3 = plVar18;
  if (iVar8 != 0) goto LAB_00523fa8;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 1;
  }
  goto LAB_00523ddc;
LAB_00523fa8:
  uVar9 = local_128;
  if (-1 < (char)local_119) {
    uVar9 = (ulong)local_119;
  }
  if ((uVar9 != 0) && ((long)local_158 - (long)local_110 < 0xa0)) {
    *local_158 = local_15c;
    local_158 = local_158 + 1;
  }
                    /* try { // try from 00523fe4 to 005241e7 has its CatchHandler @ 00524278 */
  uVar7 = FUN_00545cac(pppppppuVar12,local_150,param_5,uVar19);
  uVar14 = (ulong)(uint)(int)(char)local_119;
  uVar9 = local_128;
  if (-1 < (char)local_119) {
    uVar9 = (ulong)local_119;
  }
  *param_6 = uVar7;
  if ((4 < (long)local_158 - (long)local_110) && (uVar9 != 0)) {
    puVar11 = local_158 + -1;
    if ((local_110 != local_158) && (local_110 < puVar11)) {
      puVar17 = local_110;
      puVar15 = puVar11;
      do {
        puVar17 = puVar17 + 1;
        uVar1 = puVar17[-1];
        puVar17[-1] = *puVar15;
        puVar16 = puVar15 + -1;
        *puVar15 = uVar1;
        puVar15 = puVar16;
      } while (puVar17 < puVar16);
      uVar14 = (ulong)local_119;
    }
    pppppppbVar2 = (byte *******)local_130;
    if (-1 < (char)uVar14) {
      pppppppbVar2 = &local_130;
    }
    pppppppbVar13 = pppppppbVar2;
    if (local_110 < puVar11) {
      if (-1 < (char)uVar14) {
        local_128 = uVar14 & 0xff;
      }
      puVar17 = local_110;
      do {
        bVar3 = *(byte *)pppppppbVar13;
        if (((bVar3 != 0) && (bVar3 != 0xff)) && (*puVar17 != (uint)bVar3)) goto LAB_00524104;
        puVar17 = puVar17 + 1;
        if (1 < (long)((long)pppppppbVar2 + (local_128 - (long)pppppppbVar13))) {
          pppppppbVar13 = (byte *******)((long)pppppppbVar13 + 1);
        }
      } while (puVar17 < puVar11);
    }
    bVar3 = *(byte *)pppppppbVar13;
    if (((bVar3 != 0) && (bVar3 != 0xff)) && ((uint)bVar3 <= *puVar11 - 1)) {
LAB_00524104:
      *param_5 = 4;
    }
  }
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    plVar18 = param_2;
joined_r0x0052412c:
    param_2 = plVar18;
    if (param_3 == (long *)0x0) goto LAB_005241d0;
LAB_00524130:
    if (param_3[3] == param_3[4]) {
      iVar8 = (**(code **)(*param_3 + 0x48))(param_3);
      if (bVar6 != (iVar8 == -1)) goto LAB_0052414c;
    }
    else if (bVar6 != false) goto LAB_0052414c;
  }
  else {
    if (param_2[3] == param_2[4]) {
      iVar8 = (**(code **)(*param_2 + 0x48))(param_2);
      bVar6 = iVar8 == -1;
      plVar18 = (long *)0x0;
      if (!bVar6) {
        plVar18 = param_2;
      }
      goto joined_r0x0052412c;
    }
    bVar6 = false;
    if (param_3 != (long *)0x0) goto LAB_00524130;
LAB_005241d0:
    if (bVar6 == false) goto LAB_0052414c;
  }
  *param_5 = *param_5 | 2;
LAB_0052414c:
  if ((long)local_138 < 0) {
    operator_delete(local_148);
  }
  if ((char)local_119 < '\0') {
    operator_delete(local_130);
  }
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return param_2;
  }
LAB_005242c0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005242cc  thunk_FUN_005242d0 =====

long * thunk_FUN_005242d0(undefined8 param_1,long *param_2,long *param_3,long param_4,uint *param_5,
                         undefined4 *param_6)

{
  uint uVar1;
  byte *******pppppppbVar2;
  byte bVar3;
  long lVar4;
  long *plVar5;
  bool bVar6;
  undefined4 uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  uint *puVar11;
  undefined8 *******pppppppuVar12;
  byte *******pppppppbVar13;
  ulong uVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  long *plVar18;
  uint uStack_15c;
  uint *puStack_158;
  undefined8 ******ppppppuStack_150;
  undefined8 ******ppppppuStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  byte ******ppppppbStack_130;
  ulong uStack_128;
  byte bStack_119;
  undefined1 auStack_114 [4];
  uint auStack_110 [40];
  long lStack_70;
  
  lVar4 = tpidr_el0;
  lStack_70 = *(long *)(lVar4 + 0x28);
  uVar1 = *(uint *)(param_4 + 8) & 0x4a;
  if (uVar1 == 0) {
    uVar7 = 0;
  }
  else if (uVar1 == 0x40) {
    uVar7 = 8;
  }
  else if (uVar1 == 8) {
    uVar7 = 0x10;
  }
  else {
    uVar7 = 10;
  }
  FUN_0052bee0(&ppppppbStack_130,param_4,auStack_114);
  ppppppuStack_148 = (undefined8 *******)0x0;
  uStack_140 = 0;
  uStack_138 = 0;
  FUN_0054809c(&ppppppuStack_148,0x16,0);
  puStack_158 = auStack_110;
  pppppppuVar12 = (undefined8 *******)ppppppuStack_148;
  if (-1 < (long)uStack_138) {
    pppppppuVar12 = &ppppppuStack_148;
  }
  uStack_15c = 0;
  ppppppuStack_150 = pppppppuVar12;
LAB_005243b0:
  plVar18 = param_3;
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    plVar5 = param_2;
joined_r0x00524404:
    param_2 = plVar5;
    if (param_3 != (long *)0x0) goto LAB_005243d4;
LAB_00524408:
    if (bVar6 != false) goto LAB_0052457c;
  }
  else {
    if (param_2[3] == param_2[4]) {
      iVar8 = (**(code **)(*param_2 + 0x48))(param_2);
      bVar6 = iVar8 == -1;
      plVar5 = (long *)0x0;
      if (!bVar6) {
        plVar5 = param_2;
      }
      goto joined_r0x00524404;
    }
    bVar6 = false;
    if (param_3 == (long *)0x0) goto LAB_00524408;
LAB_005243d4:
    if (param_3[3] == param_3[4]) {
      iVar8 = (**(code **)(*param_3 + 0x48))(param_3);
      plVar18 = (long *)0x0;
      if (iVar8 != -1) {
        plVar18 = param_3;
      }
      param_3 = plVar18;
      if (bVar6 == (iVar8 == -1)) goto LAB_0052457c;
    }
    else if (bVar6 == false) goto LAB_0052457c;
  }
  uVar9 = uStack_140;
  if (-1 < (long)uStack_138) {
    uVar9 = uStack_138 >> 0x38;
  }
  if ((undefined8 *******)ppppppuStack_150 == (undefined8 *******)((long)pppppppuVar12 + uVar9)) {
    if ((long)uVar9 < 1) {
      uVar10 = uVar9 * 2;
      pppppppuVar12 = (undefined8 *******)ppppppuStack_148;
      uVar14 = uVar10;
      if (-1 < (long)uStack_138) {
        if (0x16 < uVar10) {
          if (*(long *)(lVar4 + 0x28) == lStack_70) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_00524894;
        }
        uStack_138 = CONCAT17((char)uVar10,(undefined7)uStack_138);
        pppppppuVar12 = &ppppppuStack_148;
        uVar14 = uStack_140;
      }
      uStack_140 = uVar14;
      *(undefined1 *)((long)pppppppuVar12 + uVar10) = 0;
    }
    else {
      FUN_0054809c(&ppppppuStack_148,uVar9,0);
    }
    uVar14 = (uStack_138 & 0x7fffffffffffffff) - 1;
    uVar10 = uStack_140;
    if (-1 < (long)uStack_138) {
      uVar14 = 0x16;
      uVar10 = uStack_138 >> 0x38;
    }
    if (uVar14 < uVar10 || uVar14 - uVar10 == 0) {
      pppppppuVar12 = (undefined8 *******)ppppppuStack_148;
      uVar10 = uVar14;
      if (-1 < (long)uStack_138) {
        if (0x16 < uVar14) {
          if (*(long *)(lVar4 + 0x28) == lStack_70) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_00524894;
        }
        uStack_138 = CONCAT17((char)uVar14,(undefined7)uStack_138);
        pppppppuVar12 = &ppppppuStack_148;
        uVar10 = uStack_140;
      }
      uStack_140 = uVar10;
      *(undefined1 *)((long)pppppppuVar12 + uVar14) = 0;
    }
    else {
      FUN_0054809c(&ppppppuStack_148,uVar14 - uVar10,0);
    }
    pppppppuVar12 = (undefined8 *******)ppppppuStack_148;
    if (-1 < (long)uStack_138) {
      pppppppuVar12 = &ppppppuStack_148;
    }
    ppppppuStack_150 = (undefined8 ******)((long)pppppppuVar12 + uVar9);
  }
  if ((byte *)param_2[3] == (byte *)param_2[4]) {
    uVar9 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    uVar9 = (ulong)*(byte *)param_2[3];
  }
  iVar8 = FUN_00526be0(uVar9,uVar7,pppppppuVar12,&ppppppuStack_150,&uStack_15c,auStack_114[0],
                       &ppppppbStack_130,auStack_110,&puStack_158,"0123456789abcdefABCDEFxX+-pPiInN"
                      );
  param_3 = plVar18;
  if (iVar8 != 0) goto LAB_0052457c;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 1;
  }
  goto LAB_005243b0;
LAB_0052457c:
  uVar9 = uStack_128;
  if (-1 < (char)bStack_119) {
    uVar9 = (ulong)bStack_119;
  }
  if ((uVar9 != 0) && ((long)puStack_158 - (long)auStack_110 < 0xa0)) {
    *puStack_158 = uStack_15c;
    puStack_158 = puStack_158 + 1;
  }
  uVar7 = FUN_00545e34(pppppppuVar12,ppppppuStack_150,param_5,uVar7);
  uVar14 = (ulong)(uint)(int)(char)bStack_119;
  uVar9 = uStack_128;
  if (-1 < (char)bStack_119) {
    uVar9 = (ulong)bStack_119;
  }
  *param_6 = uVar7;
  if ((4 < (long)puStack_158 - (long)auStack_110) && (uVar9 != 0)) {
    puVar11 = puStack_158 + -1;
    if ((auStack_110 != puStack_158) && (auStack_110 < puVar11)) {
      puVar17 = auStack_110;
      puVar15 = puVar11;
      do {
        puVar17 = puVar17 + 1;
        uVar1 = puVar17[-1];
        puVar17[-1] = *puVar15;
        puVar16 = puVar15 + -1;
        *puVar15 = uVar1;
        puVar15 = puVar16;
      } while (puVar17 < puVar16);
      uVar14 = (ulong)bStack_119;
    }
    pppppppbVar2 = (byte *******)ppppppbStack_130;
    if (-1 < (char)uVar14) {
      pppppppbVar2 = &ppppppbStack_130;
    }
    pppppppbVar13 = pppppppbVar2;
    if (auStack_110 < puVar11) {
      if (-1 < (char)uVar14) {
        uStack_128 = uVar14 & 0xff;
      }
      puVar17 = auStack_110;
      do {
        bVar3 = *(byte *)pppppppbVar13;
        if (((bVar3 != 0) && (bVar3 != 0xff)) && (*puVar17 != (uint)bVar3)) goto LAB_005246d8;
        puVar17 = puVar17 + 1;
        if (1 < (long)((long)pppppppbVar2 + (uStack_128 - (long)pppppppbVar13))) {
          pppppppbVar13 = (byte *******)((long)pppppppbVar13 + 1);
        }
      } while (puVar17 < puVar11);
    }
    bVar3 = *(byte *)pppppppbVar13;
    if (((bVar3 != 0) && (bVar3 != 0xff)) && ((uint)bVar3 <= *puVar11 - 1)) {
LAB_005246d8:
      *param_5 = 4;
    }
  }
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    plVar18 = param_2;
joined_r0x00524700:
    param_2 = plVar18;
    if (param_3 == (long *)0x0) goto LAB_005247a4;
LAB_00524704:
    if (param_3[3] == param_3[4]) {
      iVar8 = (**(code **)(*param_3 + 0x48))(param_3);
      if (bVar6 != (iVar8 == -1)) goto LAB_00524720;
    }
    else if (bVar6 != false) goto LAB_00524720;
  }
  else {
    if (param_2[3] == param_2[4]) {
      iVar8 = (**(code **)(*param_2 + 0x48))(param_2);
      bVar6 = iVar8 == -1;
      plVar18 = (long *)0x0;
      if (!bVar6) {
        plVar18 = param_2;
      }
      goto joined_r0x00524700;
    }
    bVar6 = false;
    if (param_3 != (long *)0x0) goto LAB_00524704;
LAB_005247a4:
    if (bVar6 == false) goto LAB_00524720;
  }
  *param_5 = *param_5 | 2;
LAB_00524720:
  if ((long)uStack_138 < 0) {
    operator_delete(ppppppuStack_148);
  }
  if ((char)bStack_119 < '\0') {
    operator_delete(ppppppbStack_130);
  }
  if (*(long *)(lVar4 + 0x28) == lStack_70) {
    return param_2;
  }
LAB_00524894:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005242d0  FUN_005242d0 =====

long * FUN_005242d0(undefined8 param_1,long *param_2,long *param_3,long param_4,uint *param_5,
                   undefined4 *param_6)

{
  uint uVar1;
  byte *******pppppppbVar2;
  byte bVar3;
  long lVar4;
  long *plVar5;
  bool bVar6;
  undefined4 uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  uint *puVar11;
  undefined8 *******pppppppuVar12;
  byte *******pppppppbVar13;
  ulong uVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  long *plVar18;
  uint local_15c;
  uint *local_158;
  undefined8 ******local_150;
  undefined8 ******local_148;
  ulong local_140;
  undefined8 local_138;
  byte ******local_130;
  ulong local_128;
  byte local_119;
  undefined1 local_114 [4];
  uint local_110 [40];
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  uVar1 = *(uint *)(param_4 + 8) & 0x4a;
  if (uVar1 == 0) {
    uVar7 = 0;
  }
  else if (uVar1 == 0x40) {
    uVar7 = 8;
  }
  else if (uVar1 == 8) {
    uVar7 = 0x10;
  }
  else {
    uVar7 = 10;
  }
  FUN_0052bee0(&local_130,param_4,local_114);
  local_148 = (undefined8 *******)0x0;
  local_140 = 0;
  local_138 = 0;
                    /* try { // try from 00524364 to 00524377 has its CatchHandler @ 00524848 */
  FUN_0054809c(&local_148,0x16,0);
  local_158 = local_110;
  pppppppuVar12 = (undefined8 *******)local_148;
  if (-1 < (long)local_138) {
    pppppppuVar12 = &local_148;
  }
  local_15c = 0;
  local_150 = pppppppuVar12;
LAB_005243b0:
  plVar18 = param_3;
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    plVar5 = param_2;
joined_r0x00524404:
    param_2 = plVar5;
    if (param_3 != (long *)0x0) goto LAB_005243d4;
LAB_00524408:
    if (bVar6 != false) goto LAB_0052457c;
  }
  else {
    if (param_2[3] == param_2[4]) {
                    /* try { // try from 005243f0 to 0052441f has its CatchHandler @ 00524854 */
      iVar8 = (**(code **)(*param_2 + 0x48))(param_2);
      bVar6 = iVar8 == -1;
      plVar5 = (long *)0x0;
      if (!bVar6) {
        plVar5 = param_2;
      }
      goto joined_r0x00524404;
    }
    bVar6 = false;
    if (param_3 == (long *)0x0) goto LAB_00524408;
LAB_005243d4:
    if (param_3[3] == param_3[4]) {
      iVar8 = (**(code **)(*param_3 + 0x48))(param_3);
      plVar18 = (long *)0x0;
      if (iVar8 != -1) {
        plVar18 = param_3;
      }
      param_3 = plVar18;
      if (bVar6 == (iVar8 == -1)) goto LAB_0052457c;
    }
    else if (bVar6 == false) goto LAB_0052457c;
  }
  uVar9 = local_140;
  if (-1 < (long)local_138) {
    uVar9 = local_138 >> 0x38;
  }
  if ((undefined8 *******)local_150 == (undefined8 *******)((long)pppppppuVar12 + uVar9)) {
    if ((long)uVar9 < 1) {
      uVar10 = uVar9 * 2;
      pppppppuVar12 = (undefined8 *******)local_148;
      uVar14 = uVar10;
      if (-1 < (long)local_138) {
        if (0x16 < uVar10) {
          if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* try { // try from 00524820 to 00524847 has its CatchHandler @ 00524898 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_00524894;
        }
        local_138 = CONCAT17((char)uVar10,(undefined7)local_138);
        pppppppuVar12 = &local_148;
        uVar14 = local_140;
      }
      local_140 = uVar14;
      *(undefined1 *)((long)pppppppuVar12 + uVar10) = 0;
    }
    else {
                    /* try { // try from 00524460 to 005244cf has its CatchHandler @ 00524850 */
      FUN_0054809c(&local_148,uVar9,0);
    }
    uVar14 = (local_138 & 0x7fffffffffffffff) - 1;
    uVar10 = local_140;
    if (-1 < (long)local_138) {
      uVar14 = 0x16;
      uVar10 = local_138 >> 0x38;
    }
    if (uVar14 < uVar10 || uVar14 - uVar10 == 0) {
      pppppppuVar12 = (undefined8 *******)local_148;
      uVar10 = uVar14;
      if (-1 < (long)local_138) {
        if (0x16 < uVar14) {
          if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* try { // try from 005247e4 to 0052480b has its CatchHandler @ 0052489c */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_00524894;
        }
        local_138 = CONCAT17((char)uVar14,(undefined7)local_138);
        pppppppuVar12 = &local_148;
        uVar10 = local_140;
      }
      local_140 = uVar10;
      *(undefined1 *)((long)pppppppuVar12 + uVar14) = 0;
    }
    else {
      FUN_0054809c(&local_148,uVar14 - uVar10,0);
    }
    pppppppuVar12 = (undefined8 *******)local_148;
    if (-1 < (long)local_138) {
      pppppppuVar12 = &local_148;
    }
    local_150 = (undefined8 ******)((long)pppppppuVar12 + uVar9);
  }
  if ((byte *)param_2[3] == (byte *)param_2[4]) {
                    /* try { // try from 0052452c to 00524577 has its CatchHandler @ 00524854 */
    uVar9 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    uVar9 = (ulong)*(byte *)param_2[3];
  }
  iVar8 = FUN_00526be0(uVar9,uVar7,pppppppuVar12,&local_150,&local_15c,local_114[0],&local_130,
                       local_110,&local_158,"0123456789abcdefABCDEFxX+-pPiInN");
  param_3 = plVar18;
  if (iVar8 != 0) goto LAB_0052457c;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 1;
  }
  goto LAB_005243b0;
LAB_0052457c:
  uVar9 = local_128;
  if (-1 < (char)local_119) {
    uVar9 = (ulong)local_119;
  }
  if ((uVar9 != 0) && ((long)local_158 - (long)local_110 < 0xa0)) {
    *local_158 = local_15c;
    local_158 = local_158 + 1;
  }
                    /* try { // try from 005245b8 to 005247bb has its CatchHandler @ 0052484c */
  uVar7 = FUN_00545e34(pppppppuVar12,local_150,param_5,uVar7);
  uVar14 = (ulong)(uint)(int)(char)local_119;
  uVar9 = local_128;
  if (-1 < (char)local_119) {
    uVar9 = (ulong)local_119;
  }
  *param_6 = uVar7;
  if ((4 < (long)local_158 - (long)local_110) && (uVar9 != 0)) {
    puVar11 = local_158 + -1;
    if ((local_110 != local_158) && (local_110 < puVar11)) {
      puVar17 = local_110;
      puVar15 = puVar11;
      do {
        puVar17 = puVar17 + 1;
        uVar1 = puVar17[-1];
        puVar17[-1] = *puVar15;
        puVar16 = puVar15 + -1;
        *puVar15 = uVar1;
        puVar15 = puVar16;
      } while (puVar17 < puVar16);
      uVar14 = (ulong)local_119;
    }
    pppppppbVar2 = (byte *******)local_130;
    if (-1 < (char)uVar14) {
      pppppppbVar2 = &local_130;
    }
    pppppppbVar13 = pppppppbVar2;
    if (local_110 < puVar11) {
      if (-1 < (char)uVar14) {
        local_128 = uVar14 & 0xff;
      }
      puVar17 = local_110;
      do {
        bVar3 = *(byte *)pppppppbVar13;
        if (((bVar3 != 0) && (bVar3 != 0xff)) && (*puVar17 != (uint)bVar3)) goto LAB_005246d8;
        puVar17 = puVar17 + 1;
        if (1 < (long)((long)pppppppbVar2 + (local_128 - (long)pppppppbVar13))) {
          pppppppbVar13 = (byte *******)((long)pppppppbVar13 + 1);
        }
      } while (puVar17 < puVar11);
    }
    bVar3 = *(byte *)pppppppbVar13;
    if (((bVar3 != 0) && (bVar3 != 0xff)) && ((uint)bVar3 <= *puVar11 - 1)) {
LAB_005246d8:
      *param_5 = 4;
    }
  }
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    plVar18 = param_2;
joined_r0x00524700:
    param_2 = plVar18;
    if (param_3 == (long *)0x0) goto LAB_005247a4;
LAB_00524704:
    if (param_3[3] == param_3[4]) {
      iVar8 = (**(code **)(*param_3 + 0x48))(param_3);
      if (bVar6 != (iVar8 == -1)) goto LAB_00524720;
    }
    else if (bVar6 != false) goto LAB_00524720;
  }
  else {
    if (param_2[3] == param_2[4]) {
      iVar8 = (**(code **)(*param_2 + 0x48))(param_2);
      bVar6 = iVar8 == -1;
      plVar18 = (long *)0x0;
      if (!bVar6) {
        plVar18 = param_2;
      }
      goto joined_r0x00524700;
    }
    bVar6 = false;
    if (param_3 != (long *)0x0) goto LAB_00524704;
LAB_005247a4:
    if (bVar6 == false) goto LAB_00524720;
  }
  *param_5 = *param_5 | 2;
LAB_00524720:
  if ((long)local_138 < 0) {
    operator_delete(local_148);
  }
  if ((char)local_119 < '\0') {
    operator_delete(local_130);
  }
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return param_2;
  }
LAB_00524894:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005248a0  thunk_FUN_005248a4 =====

long * thunk_FUN_005248a4(undefined8 param_1,long *param_2,long *param_3,long param_4,uint *param_5,
                         undefined8 *param_6)

{
  uint uVar1;
  byte *******pppppppbVar2;
  byte bVar3;
  long lVar4;
  long *plVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  uint *puVar11;
  undefined8 *******pppppppuVar12;
  byte *******pppppppbVar13;
  ulong uVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  long *plVar18;
  undefined4 uVar19;
  uint uStack_15c;
  uint *puStack_158;
  undefined8 ******ppppppuStack_150;
  undefined8 ******ppppppuStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  byte ******ppppppbStack_130;
  ulong uStack_128;
  byte bStack_119;
  undefined1 auStack_114 [4];
  uint auStack_110 [40];
  long lStack_70;
  
  lVar4 = tpidr_el0;
  lStack_70 = *(long *)(lVar4 + 0x28);
  uVar1 = *(uint *)(param_4 + 8) & 0x4a;
  if (uVar1 == 0) {
    uVar19 = 0;
  }
  else if (uVar1 == 0x40) {
    uVar19 = 8;
  }
  else if (uVar1 == 8) {
    uVar19 = 0x10;
  }
  else {
    uVar19 = 10;
  }
  FUN_0052bee0(&ppppppbStack_130,param_4,auStack_114);
  ppppppuStack_148 = (undefined8 *******)0x0;
  uStack_140 = 0;
  uStack_138 = 0;
  FUN_0054809c(&ppppppuStack_148,0x16,0);
  puStack_158 = auStack_110;
  pppppppuVar12 = (undefined8 *******)ppppppuStack_148;
  if (-1 < (long)uStack_138) {
    pppppppuVar12 = &ppppppuStack_148;
  }
  uStack_15c = 0;
  ppppppuStack_150 = pppppppuVar12;
LAB_00524984:
  plVar18 = param_3;
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    plVar5 = param_2;
joined_r0x005249d8:
    param_2 = plVar5;
    if (param_3 != (long *)0x0) goto LAB_005249a8;
LAB_005249dc:
    if (bVar6 != false) goto LAB_00524b50;
  }
  else {
    if (param_2[3] == param_2[4]) {
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
      bVar6 = iVar7 == -1;
      plVar5 = (long *)0x0;
      if (!bVar6) {
        plVar5 = param_2;
      }
      goto joined_r0x005249d8;
    }
    bVar6 = false;
    if (param_3 == (long *)0x0) goto LAB_005249dc;
LAB_005249a8:
    if (param_3[3] == param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
      plVar18 = (long *)0x0;
      if (iVar7 != -1) {
        plVar18 = param_3;
      }
      param_3 = plVar18;
      if (bVar6 == (iVar7 == -1)) goto LAB_00524b50;
    }
    else if (bVar6 == false) goto LAB_00524b50;
  }
  uVar8 = uStack_140;
  if (-1 < (long)uStack_138) {
    uVar8 = uStack_138 >> 0x38;
  }
  if ((undefined8 *******)ppppppuStack_150 == (undefined8 *******)((long)pppppppuVar12 + uVar8)) {
    if ((long)uVar8 < 1) {
      uVar10 = uVar8 * 2;
      pppppppuVar12 = (undefined8 *******)ppppppuStack_148;
      uVar14 = uVar10;
      if (-1 < (long)uStack_138) {
        if (0x16 < uVar10) {
          if (*(long *)(lVar4 + 0x28) == lStack_70) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_00524e68;
        }
        uStack_138 = CONCAT17((char)uVar10,(undefined7)uStack_138);
        pppppppuVar12 = &ppppppuStack_148;
        uVar14 = uStack_140;
      }
      uStack_140 = uVar14;
      *(undefined1 *)((long)pppppppuVar12 + uVar10) = 0;
    }
    else {
      FUN_0054809c(&ppppppuStack_148,uVar8,0);
    }
    uVar14 = (uStack_138 & 0x7fffffffffffffff) - 1;
    uVar10 = uStack_140;
    if (-1 < (long)uStack_138) {
      uVar14 = 0x16;
      uVar10 = uStack_138 >> 0x38;
    }
    if (uVar14 < uVar10 || uVar14 - uVar10 == 0) {
      pppppppuVar12 = (undefined8 *******)ppppppuStack_148;
      uVar10 = uVar14;
      if (-1 < (long)uStack_138) {
        if (0x16 < uVar14) {
          if (*(long *)(lVar4 + 0x28) == lStack_70) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_00524e68;
        }
        uStack_138 = CONCAT17((char)uVar14,(undefined7)uStack_138);
        pppppppuVar12 = &ppppppuStack_148;
        uVar10 = uStack_140;
      }
      uStack_140 = uVar10;
      *(undefined1 *)((long)pppppppuVar12 + uVar14) = 0;
    }
    else {
      FUN_0054809c(&ppppppuStack_148,uVar14 - uVar10,0);
    }
    pppppppuVar12 = (undefined8 *******)ppppppuStack_148;
    if (-1 < (long)uStack_138) {
      pppppppuVar12 = &ppppppuStack_148;
    }
    ppppppuStack_150 = (undefined8 ******)((long)pppppppuVar12 + uVar8);
  }
  if ((byte *)param_2[3] == (byte *)param_2[4]) {
    uVar8 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    uVar8 = (ulong)*(byte *)param_2[3];
  }
  iVar7 = FUN_00526be0(uVar8,uVar19,pppppppuVar12,&ppppppuStack_150,&uStack_15c,auStack_114[0],
                       &ppppppbStack_130,auStack_110,&puStack_158,"0123456789abcdefABCDEFxX+-pPiInN"
                      );
  param_3 = plVar18;
  if (iVar7 != 0) goto LAB_00524b50;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 1;
  }
  goto LAB_00524984;
LAB_00524b50:
  uVar8 = uStack_128;
  if (-1 < (char)bStack_119) {
    uVar8 = (ulong)bStack_119;
  }
  if ((uVar8 != 0) && ((long)puStack_158 - (long)auStack_110 < 0xa0)) {
    *puStack_158 = uStack_15c;
    puStack_158 = puStack_158 + 1;
  }
  uVar9 = FUN_00545fb8(pppppppuVar12,ppppppuStack_150,param_5,uVar19);
  uVar14 = (ulong)(uint)(int)(char)bStack_119;
  uVar8 = uStack_128;
  if (-1 < (char)bStack_119) {
    uVar8 = (ulong)bStack_119;
  }
  *param_6 = uVar9;
  if ((4 < (long)puStack_158 - (long)auStack_110) && (uVar8 != 0)) {
    puVar11 = puStack_158 + -1;
    if ((auStack_110 != puStack_158) && (auStack_110 < puVar11)) {
      puVar17 = auStack_110;
      puVar15 = puVar11;
      do {
        puVar17 = puVar17 + 1;
        uVar1 = puVar17[-1];
        puVar17[-1] = *puVar15;
        puVar16 = puVar15 + -1;
        *puVar15 = uVar1;
        puVar15 = puVar16;
      } while (puVar17 < puVar16);
      uVar14 = (ulong)bStack_119;
    }
    pppppppbVar2 = (byte *******)ppppppbStack_130;
    if (-1 < (char)uVar14) {
      pppppppbVar2 = &ppppppbStack_130;
    }
    pppppppbVar13 = pppppppbVar2;
    if (auStack_110 < puVar11) {
      if (-1 < (char)uVar14) {
        uStack_128 = uVar14 & 0xff;
      }
      puVar17 = auStack_110;
      do {
        bVar3 = *(byte *)pppppppbVar13;
        if (((bVar3 != 0) && (bVar3 != 0xff)) && (*puVar17 != (uint)bVar3)) goto LAB_00524cac;
        puVar17 = puVar17 + 1;
        if (1 < (long)((long)pppppppbVar2 + (uStack_128 - (long)pppppppbVar13))) {
          pppppppbVar13 = (byte *******)((long)pppppppbVar13 + 1);
        }
      } while (puVar17 < puVar11);
    }
    bVar3 = *(byte *)pppppppbVar13;
    if (((bVar3 != 0) && (bVar3 != 0xff)) && ((uint)bVar3 <= *puVar11 - 1)) {
LAB_00524cac:
      *param_5 = 4;
    }
  }
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    plVar18 = param_2;
joined_r0x00524cd4:
    param_2 = plVar18;
    if (param_3 == (long *)0x0) goto LAB_00524d78;
LAB_00524cd8:
    if (param_3[3] == param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
      if (bVar6 != (iVar7 == -1)) goto LAB_00524cf4;
    }
    else if (bVar6 != false) goto LAB_00524cf4;
  }
  else {
    if (param_2[3] == param_2[4]) {
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
      bVar6 = iVar7 == -1;
      plVar18 = (long *)0x0;
      if (!bVar6) {
        plVar18 = param_2;
      }
      goto joined_r0x00524cd4;
    }
    bVar6 = false;
    if (param_3 != (long *)0x0) goto LAB_00524cd8;
LAB_00524d78:
    if (bVar6 == false) goto LAB_00524cf4;
  }
  *param_5 = *param_5 | 2;
LAB_00524cf4:
  if ((long)uStack_138 < 0) {
    operator_delete(ppppppuStack_148);
  }
  if ((char)bStack_119 < '\0') {
    operator_delete(ppppppbStack_130);
  }
  if (*(long *)(lVar4 + 0x28) == lStack_70) {
    return param_2;
  }
LAB_00524e68:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005248a4  FUN_005248a4 =====

long * FUN_005248a4(undefined8 param_1,long *param_2,long *param_3,long param_4,uint *param_5,
                   undefined8 *param_6)

{
  uint uVar1;
  byte *******pppppppbVar2;
  byte bVar3;
  long lVar4;
  long *plVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  uint *puVar11;
  undefined8 *******pppppppuVar12;
  byte *******pppppppbVar13;
  ulong uVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  long *plVar18;
  undefined4 uVar19;
  uint local_15c;
  uint *local_158;
  undefined8 ******local_150;
  undefined8 ******local_148;
  ulong local_140;
  undefined8 local_138;
  byte ******local_130;
  ulong local_128;
  byte local_119;
  undefined1 local_114 [4];
  uint local_110 [40];
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  uVar1 = *(uint *)(param_4 + 8) & 0x4a;
  if (uVar1 == 0) {
    uVar19 = 0;
  }
  else if (uVar1 == 0x40) {
    uVar19 = 8;
  }
  else if (uVar1 == 8) {
    uVar19 = 0x10;
  }
  else {
    uVar19 = 10;
  }
  FUN_0052bee0(&local_130,param_4,local_114);
  local_148 = (undefined8 *******)0x0;
  local_140 = 0;
  local_138 = 0;
                    /* try { // try from 00524938 to 0052494b has its CatchHandler @ 00524e1c */
  FUN_0054809c(&local_148,0x16,0);
  local_158 = local_110;
  pppppppuVar12 = (undefined8 *******)local_148;
  if (-1 < (long)local_138) {
    pppppppuVar12 = &local_148;
  }
  local_15c = 0;
  local_150 = pppppppuVar12;
LAB_00524984:
  plVar18 = param_3;
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    plVar5 = param_2;
joined_r0x005249d8:
    param_2 = plVar5;
    if (param_3 != (long *)0x0) goto LAB_005249a8;
LAB_005249dc:
    if (bVar6 != false) goto LAB_00524b50;
  }
  else {
    if (param_2[3] == param_2[4]) {
                    /* try { // try from 005249c4 to 005249f3 has its CatchHandler @ 00524e28 */
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
      bVar6 = iVar7 == -1;
      plVar5 = (long *)0x0;
      if (!bVar6) {
        plVar5 = param_2;
      }
      goto joined_r0x005249d8;
    }
    bVar6 = false;
    if (param_3 == (long *)0x0) goto LAB_005249dc;
LAB_005249a8:
    if (param_3[3] == param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
      plVar18 = (long *)0x0;
      if (iVar7 != -1) {
        plVar18 = param_3;
      }
      param_3 = plVar18;
      if (bVar6 == (iVar7 == -1)) goto LAB_00524b50;
    }
    else if (bVar6 == false) goto LAB_00524b50;
  }
  uVar8 = local_140;
  if (-1 < (long)local_138) {
    uVar8 = local_138 >> 0x38;
  }
  if ((undefined8 *******)local_150 == (undefined8 *******)((long)pppppppuVar12 + uVar8)) {
    if ((long)uVar8 < 1) {
      uVar10 = uVar8 * 2;
      pppppppuVar12 = (undefined8 *******)local_148;
      uVar14 = uVar10;
      if (-1 < (long)local_138) {
        if (0x16 < uVar10) {
          if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* try { // try from 00524df4 to 00524e1b has its CatchHandler @ 00524e6c */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_00524e68;
        }
        local_138 = CONCAT17((char)uVar10,(undefined7)local_138);
        pppppppuVar12 = &local_148;
        uVar14 = local_140;
      }
      local_140 = uVar14;
      *(undefined1 *)((long)pppppppuVar12 + uVar10) = 0;
    }
    else {
                    /* try { // try from 00524a34 to 00524aa3 has its CatchHandler @ 00524e24 */
      FUN_0054809c(&local_148,uVar8,0);
    }
    uVar14 = (local_138 & 0x7fffffffffffffff) - 1;
    uVar10 = local_140;
    if (-1 < (long)local_138) {
      uVar14 = 0x16;
      uVar10 = local_138 >> 0x38;
    }
    if (uVar14 < uVar10 || uVar14 - uVar10 == 0) {
      pppppppuVar12 = (undefined8 *******)local_148;
      uVar10 = uVar14;
      if (-1 < (long)local_138) {
        if (0x16 < uVar14) {
          if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* try { // try from 00524db8 to 00524ddf has its CatchHandler @ 00524e70 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_00524e68;
        }
        local_138 = CONCAT17((char)uVar14,(undefined7)local_138);
        pppppppuVar12 = &local_148;
        uVar10 = local_140;
      }
      local_140 = uVar10;
      *(undefined1 *)((long)pppppppuVar12 + uVar14) = 0;
    }
    else {
      FUN_0054809c(&local_148,uVar14 - uVar10,0);
    }
    pppppppuVar12 = (undefined8 *******)local_148;
    if (-1 < (long)local_138) {
      pppppppuVar12 = &local_148;
    }
    local_150 = (undefined8 ******)((long)pppppppuVar12 + uVar8);
  }
  if ((byte *)param_2[3] == (byte *)param_2[4]) {
                    /* try { // try from 00524b00 to 00524b4b has its CatchHandler @ 00524e28 */
    uVar8 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    uVar8 = (ulong)*(byte *)param_2[3];
  }
  iVar7 = FUN_00526be0(uVar8,uVar19,pppppppuVar12,&local_150,&local_15c,local_114[0],&local_130,
                       local_110,&local_158,"0123456789abcdefABCDEFxX+-pPiInN");
  param_3 = plVar18;
  if (iVar7 != 0) goto LAB_00524b50;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 1;
  }
  goto LAB_00524984;
LAB_00524b50:
  uVar8 = local_128;
  if (-1 < (char)local_119) {
    uVar8 = (ulong)local_119;
  }
  if ((uVar8 != 0) && ((long)local_158 - (long)local_110 < 0xa0)) {
    *local_158 = local_15c;
    local_158 = local_158 + 1;
  }
                    /* try { // try from 00524b8c to 00524d8f has its CatchHandler @ 00524e20 */
  uVar9 = FUN_00545fb8(pppppppuVar12,local_150,param_5,uVar19);
  uVar14 = (ulong)(uint)(int)(char)local_119;
  uVar8 = local_128;
  if (-1 < (char)local_119) {
    uVar8 = (ulong)local_119;
  }
  *param_6 = uVar9;
  if ((4 < (long)local_158 - (long)local_110) && (uVar8 != 0)) {
    puVar11 = local_158 + -1;
    if ((local_110 != local_158) && (local_110 < puVar11)) {
      puVar17 = local_110;
      puVar15 = puVar11;
      do {
        puVar17 = puVar17 + 1;
        uVar1 = puVar17[-1];
        puVar17[-1] = *puVar15;
        puVar16 = puVar15 + -1;
        *puVar15 = uVar1;
        puVar15 = puVar16;
      } while (puVar17 < puVar16);
      uVar14 = (ulong)local_119;
    }
    pppppppbVar2 = (byte *******)local_130;
    if (-1 < (char)uVar14) {
      pppppppbVar2 = &local_130;
    }
    pppppppbVar13 = pppppppbVar2;
    if (local_110 < puVar11) {
      if (-1 < (char)uVar14) {
        local_128 = uVar14 & 0xff;
      }
      puVar17 = local_110;
      do {
        bVar3 = *(byte *)pppppppbVar13;
        if (((bVar3 != 0) && (bVar3 != 0xff)) && (*puVar17 != (uint)bVar3)) goto LAB_00524cac;
        puVar17 = puVar17 + 1;
        if (1 < (long)((long)pppppppbVar2 + (local_128 - (long)pppppppbVar13))) {
          pppppppbVar13 = (byte *******)((long)pppppppbVar13 + 1);
        }
      } while (puVar17 < puVar11);
    }
    bVar3 = *(byte *)pppppppbVar13;
    if (((bVar3 != 0) && (bVar3 != 0xff)) && ((uint)bVar3 <= *puVar11 - 1)) {
LAB_00524cac:
      *param_5 = 4;
    }
  }
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    plVar18 = param_2;
joined_r0x00524cd4:
    param_2 = plVar18;
    if (param_3 == (long *)0x0) goto LAB_00524d78;
LAB_00524cd8:
    if (param_3[3] == param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
      if (bVar6 != (iVar7 == -1)) goto LAB_00524cf4;
    }
    else if (bVar6 != false) goto LAB_00524cf4;
  }
  else {
    if (param_2[3] == param_2[4]) {
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
      bVar6 = iVar7 == -1;
      plVar18 = (long *)0x0;
      if (!bVar6) {
        plVar18 = param_2;
      }
      goto joined_r0x00524cd4;
    }
    bVar6 = false;
    if (param_3 != (long *)0x0) goto LAB_00524cd8;
LAB_00524d78:
    if (bVar6 == false) goto LAB_00524cf4;
  }
  *param_5 = *param_5 | 2;
LAB_00524cf4:
  if ((long)local_138 < 0) {
    operator_delete(local_148);
  }
  if ((char)local_119 < '\0') {
    operator_delete(local_130);
  }
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return param_2;
  }
LAB_00524e68:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00524e74  thunk_FUN_00524e78 =====

long * thunk_FUN_00524e78(undefined8 param_1,long *param_2,long *param_3,long param_4,uint *param_5,
                         undefined8 *param_6)

{
  uint uVar1;
  byte *******pppppppbVar2;
  byte bVar3;
  long lVar4;
  long *plVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  uint *puVar11;
  undefined8 *******pppppppuVar12;
  byte *******pppppppbVar13;
  ulong uVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  long *plVar18;
  undefined4 uVar19;
  uint uStack_15c;
  uint *puStack_158;
  undefined8 ******ppppppuStack_150;
  undefined8 ******ppppppuStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  byte ******ppppppbStack_130;
  ulong uStack_128;
  byte bStack_119;
  undefined1 auStack_114 [4];
  uint auStack_110 [40];
  long lStack_70;
  
  lVar4 = tpidr_el0;
  lStack_70 = *(long *)(lVar4 + 0x28);
  uVar1 = *(uint *)(param_4 + 8) & 0x4a;
  if (uVar1 == 0) {
    uVar19 = 0;
  }
  else if (uVar1 == 0x40) {
    uVar19 = 8;
  }
  else if (uVar1 == 8) {
    uVar19 = 0x10;
  }
  else {
    uVar19 = 10;
  }
  FUN_0052bee0(&ppppppbStack_130,param_4,auStack_114);
  ppppppuStack_148 = (undefined8 *******)0x0;
  uStack_140 = 0;
  uStack_138 = 0;
  FUN_0054809c(&ppppppuStack_148,0x16,0);
  puStack_158 = auStack_110;
  pppppppuVar12 = (undefined8 *******)ppppppuStack_148;
  if (-1 < (long)uStack_138) {
    pppppppuVar12 = &ppppppuStack_148;
  }
  uStack_15c = 0;
  ppppppuStack_150 = pppppppuVar12;
LAB_00524f58:
  plVar18 = param_3;
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    plVar5 = param_2;
joined_r0x00524fac:
    param_2 = plVar5;
    if (param_3 != (long *)0x0) goto LAB_00524f7c;
LAB_00524fb0:
    if (bVar6 != false) goto LAB_00525124;
  }
  else {
    if (param_2[3] == param_2[4]) {
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
      bVar6 = iVar7 == -1;
      plVar5 = (long *)0x0;
      if (!bVar6) {
        plVar5 = param_2;
      }
      goto joined_r0x00524fac;
    }
    bVar6 = false;
    if (param_3 == (long *)0x0) goto LAB_00524fb0;
LAB_00524f7c:
    if (param_3[3] == param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
      plVar18 = (long *)0x0;
      if (iVar7 != -1) {
        plVar18 = param_3;
      }
      param_3 = plVar18;
      if (bVar6 == (iVar7 == -1)) goto LAB_00525124;
    }
    else if (bVar6 == false) goto LAB_00525124;
  }
  uVar8 = uStack_140;
  if (-1 < (long)uStack_138) {
    uVar8 = uStack_138 >> 0x38;
  }
  if ((undefined8 *******)ppppppuStack_150 == (undefined8 *******)((long)pppppppuVar12 + uVar8)) {
    if ((long)uVar8 < 1) {
      uVar10 = uVar8 * 2;
      pppppppuVar12 = (undefined8 *******)ppppppuStack_148;
      uVar14 = uVar10;
      if (-1 < (long)uStack_138) {
        if (0x16 < uVar10) {
          if (*(long *)(lVar4 + 0x28) == lStack_70) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_0052543c;
        }
        uStack_138 = CONCAT17((char)uVar10,(undefined7)uStack_138);
        pppppppuVar12 = &ppppppuStack_148;
        uVar14 = uStack_140;
      }
      uStack_140 = uVar14;
      *(undefined1 *)((long)pppppppuVar12 + uVar10) = 0;
    }
    else {
      FUN_0054809c(&ppppppuStack_148,uVar8,0);
    }
    uVar14 = (uStack_138 & 0x7fffffffffffffff) - 1;
    uVar10 = uStack_140;
    if (-1 < (long)uStack_138) {
      uVar14 = 0x16;
      uVar10 = uStack_138 >> 0x38;
    }
    if (uVar14 < uVar10 || uVar14 - uVar10 == 0) {
      pppppppuVar12 = (undefined8 *******)ppppppuStack_148;
      uVar10 = uVar14;
      if (-1 < (long)uStack_138) {
        if (0x16 < uVar14) {
          if (*(long *)(lVar4 + 0x28) == lStack_70) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_0052543c;
        }
        uStack_138 = CONCAT17((char)uVar14,(undefined7)uStack_138);
        pppppppuVar12 = &ppppppuStack_148;
        uVar10 = uStack_140;
      }
      uStack_140 = uVar10;
      *(undefined1 *)((long)pppppppuVar12 + uVar14) = 0;
    }
    else {
      FUN_0054809c(&ppppppuStack_148,uVar14 - uVar10,0);
    }
    pppppppuVar12 = (undefined8 *******)ppppppuStack_148;
    if (-1 < (long)uStack_138) {
      pppppppuVar12 = &ppppppuStack_148;
    }
    ppppppuStack_150 = (undefined8 ******)((long)pppppppuVar12 + uVar8);
  }
  if ((byte *)param_2[3] == (byte *)param_2[4]) {
    uVar8 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    uVar8 = (ulong)*(byte *)param_2[3];
  }
  iVar7 = FUN_00526be0(uVar8,uVar19,pppppppuVar12,&ppppppuStack_150,&uStack_15c,auStack_114[0],
                       &ppppppbStack_130,auStack_110,&puStack_158,"0123456789abcdefABCDEFxX+-pPiInN"
                      );
  param_3 = plVar18;
  if (iVar7 != 0) goto LAB_00525124;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 1;
  }
  goto LAB_00524f58;
LAB_00525124:
  uVar8 = uStack_128;
  if (-1 < (char)bStack_119) {
    uVar8 = (ulong)bStack_119;
  }
  if ((uVar8 != 0) && ((long)puStack_158 - (long)auStack_110 < 0xa0)) {
    *puStack_158 = uStack_15c;
    puStack_158 = puStack_158 + 1;
  }
  uVar9 = FUN_00546130(pppppppuVar12,ppppppuStack_150,param_5,uVar19);
  uVar14 = (ulong)(uint)(int)(char)bStack_119;
  uVar8 = uStack_128;
  if (-1 < (char)bStack_119) {
    uVar8 = (ulong)bStack_119;
  }
  *param_6 = uVar9;
  if ((4 < (long)puStack_158 - (long)auStack_110) && (uVar8 != 0)) {
    puVar11 = puStack_158 + -1;
    if ((auStack_110 != puStack_158) && (auStack_110 < puVar11)) {
      puVar17 = auStack_110;
      puVar15 = puVar11;
      do {
        puVar17 = puVar17 + 1;
        uVar1 = puVar17[-1];
        puVar17[-1] = *puVar15;
        puVar16 = puVar15 + -1;
        *puVar15 = uVar1;
        puVar15 = puVar16;
      } while (puVar17 < puVar16);
      uVar14 = (ulong)bStack_119;
    }
    pppppppbVar2 = (byte *******)ppppppbStack_130;
    if (-1 < (char)uVar14) {
      pppppppbVar2 = &ppppppbStack_130;
    }
    pppppppbVar13 = pppppppbVar2;
    if (auStack_110 < puVar11) {
      if (-1 < (char)uVar14) {
        uStack_128 = uVar14 & 0xff;
      }
      puVar17 = auStack_110;
      do {
        bVar3 = *(byte *)pppppppbVar13;
        if (((bVar3 != 0) && (bVar3 != 0xff)) && (*puVar17 != (uint)bVar3)) goto LAB_00525280;
        puVar17 = puVar17 + 1;
        if (1 < (long)((long)pppppppbVar2 + (uStack_128 - (long)pppppppbVar13))) {
          pppppppbVar13 = (byte *******)((long)pppppppbVar13 + 1);
        }
      } while (puVar17 < puVar11);
    }
    bVar3 = *(byte *)pppppppbVar13;
    if (((bVar3 != 0) && (bVar3 != 0xff)) && ((uint)bVar3 <= *puVar11 - 1)) {
LAB_00525280:
      *param_5 = 4;
    }
  }
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    plVar18 = param_2;
joined_r0x005252a8:
    param_2 = plVar18;
    if (param_3 == (long *)0x0) goto LAB_0052534c;
LAB_005252ac:
    if (param_3[3] == param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
      if (bVar6 != (iVar7 == -1)) goto LAB_005252c8;
    }
    else if (bVar6 != false) goto LAB_005252c8;
  }
  else {
    if (param_2[3] == param_2[4]) {
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
      bVar6 = iVar7 == -1;
      plVar18 = (long *)0x0;
      if (!bVar6) {
        plVar18 = param_2;
      }
      goto joined_r0x005252a8;
    }
    bVar6 = false;
    if (param_3 != (long *)0x0) goto LAB_005252ac;
LAB_0052534c:
    if (bVar6 == false) goto LAB_005252c8;
  }
  *param_5 = *param_5 | 2;
LAB_005252c8:
  if ((long)uStack_138 < 0) {
    operator_delete(ppppppuStack_148);
  }
  if ((char)bStack_119 < '\0') {
    operator_delete(ppppppbStack_130);
  }
  if (*(long *)(lVar4 + 0x28) == lStack_70) {
    return param_2;
  }
LAB_0052543c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00524e78  FUN_00524e78 =====

long * FUN_00524e78(undefined8 param_1,long *param_2,long *param_3,long param_4,uint *param_5,
                   undefined8 *param_6)

{
  uint uVar1;
  byte *******pppppppbVar2;
  byte bVar3;
  long lVar4;
  long *plVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  uint *puVar11;
  undefined8 *******pppppppuVar12;
  byte *******pppppppbVar13;
  ulong uVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  long *plVar18;
  undefined4 uVar19;
  uint local_15c;
  uint *local_158;
  undefined8 ******local_150;
  undefined8 ******local_148;
  ulong local_140;
  undefined8 local_138;
  byte ******local_130;
  ulong local_128;
  byte local_119;
  undefined1 local_114 [4];
  uint local_110 [40];
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  uVar1 = *(uint *)(param_4 + 8) & 0x4a;
  if (uVar1 == 0) {
    uVar19 = 0;
  }
  else if (uVar1 == 0x40) {
    uVar19 = 8;
  }
  else if (uVar1 == 8) {
    uVar19 = 0x10;
  }
  else {
    uVar19 = 10;
  }
  FUN_0052bee0(&local_130,param_4,local_114);
  local_148 = (undefined8 *******)0x0;
  local_140 = 0;
  local_138 = 0;
                    /* try { // try from 00524f0c to 00524f1f has its CatchHandler @ 005253f0 */
  FUN_0054809c(&local_148,0x16,0);
  local_158 = local_110;
  pppppppuVar12 = (undefined8 *******)local_148;
  if (-1 < (long)local_138) {
    pppppppuVar12 = &local_148;
  }
  local_15c = 0;
  local_150 = pppppppuVar12;
LAB_00524f58:
  plVar18 = param_3;
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    plVar5 = param_2;
joined_r0x00524fac:
    param_2 = plVar5;
    if (param_3 != (long *)0x0) goto LAB_00524f7c;
LAB_00524fb0:
    if (bVar6 != false) goto LAB_00525124;
  }
  else {
    if (param_2[3] == param_2[4]) {
                    /* try { // try from 00524f98 to 00524fc7 has its CatchHandler @ 005253fc */
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
      bVar6 = iVar7 == -1;
      plVar5 = (long *)0x0;
      if (!bVar6) {
        plVar5 = param_2;
      }
      goto joined_r0x00524fac;
    }
    bVar6 = false;
    if (param_3 == (long *)0x0) goto LAB_00524fb0;
LAB_00524f7c:
    if (param_3[3] == param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
      plVar18 = (long *)0x0;
      if (iVar7 != -1) {
        plVar18 = param_3;
      }
      param_3 = plVar18;
      if (bVar6 == (iVar7 == -1)) goto LAB_00525124;
    }
    else if (bVar6 == false) goto LAB_00525124;
  }
  uVar8 = local_140;
  if (-1 < (long)local_138) {
    uVar8 = local_138 >> 0x38;
  }
  if ((undefined8 *******)local_150 == (undefined8 *******)((long)pppppppuVar12 + uVar8)) {
    if ((long)uVar8 < 1) {
      uVar10 = uVar8 * 2;
      pppppppuVar12 = (undefined8 *******)local_148;
      uVar14 = uVar10;
      if (-1 < (long)local_138) {
        if (0x16 < uVar10) {
          if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* try { // try from 005253c8 to 005253ef has its CatchHandler @ 00525440 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_0052543c;
        }
        local_138 = CONCAT17((char)uVar10,(undefined7)local_138);
        pppppppuVar12 = &local_148;
        uVar14 = local_140;
      }
      local_140 = uVar14;
      *(undefined1 *)((long)pppppppuVar12 + uVar10) = 0;
    }
    else {
                    /* try { // try from 00525008 to 00525077 has its CatchHandler @ 005253f8 */
      FUN_0054809c(&local_148,uVar8,0);
    }
    uVar14 = (local_138 & 0x7fffffffffffffff) - 1;
    uVar10 = local_140;
    if (-1 < (long)local_138) {
      uVar14 = 0x16;
      uVar10 = local_138 >> 0x38;
    }
    if (uVar14 < uVar10 || uVar14 - uVar10 == 0) {
      pppppppuVar12 = (undefined8 *******)local_148;
      uVar10 = uVar14;
      if (-1 < (long)local_138) {
        if (0x16 < uVar14) {
          if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* try { // try from 0052538c to 005253b3 has its CatchHandler @ 00525444 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_0052543c;
        }
        local_138 = CONCAT17((char)uVar14,(undefined7)local_138);
        pppppppuVar12 = &local_148;
        uVar10 = local_140;
      }
      local_140 = uVar10;
      *(undefined1 *)((long)pppppppuVar12 + uVar14) = 0;
    }
    else {
      FUN_0054809c(&local_148,uVar14 - uVar10,0);
    }
    pppppppuVar12 = (undefined8 *******)local_148;
    if (-1 < (long)local_138) {
      pppppppuVar12 = &local_148;
    }
    local_150 = (undefined8 ******)((long)pppppppuVar12 + uVar8);
  }
  if ((byte *)param_2[3] == (byte *)param_2[4]) {
                    /* try { // try from 005250d4 to 0052511f has its CatchHandler @ 005253fc */
    uVar8 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    uVar8 = (ulong)*(byte *)param_2[3];
  }
  iVar7 = FUN_00526be0(uVar8,uVar19,pppppppuVar12,&local_150,&local_15c,local_114[0],&local_130,
                       local_110,&local_158,"0123456789abcdefABCDEFxX+-pPiInN");
  param_3 = plVar18;
  if (iVar7 != 0) goto LAB_00525124;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 1;
  }
  goto LAB_00524f58;
LAB_00525124:
  uVar8 = local_128;
  if (-1 < (char)local_119) {
    uVar8 = (ulong)local_119;
  }
  if ((uVar8 != 0) && ((long)local_158 - (long)local_110 < 0xa0)) {
    *local_158 = local_15c;
    local_158 = local_158 + 1;
  }
                    /* try { // try from 00525160 to 00525363 has its CatchHandler @ 005253f4 */
  uVar9 = FUN_00546130(pppppppuVar12,local_150,param_5,uVar19);
  uVar14 = (ulong)(uint)(int)(char)local_119;
  uVar8 = local_128;
  if (-1 < (char)local_119) {
    uVar8 = (ulong)local_119;
  }
  *param_6 = uVar9;
  if ((4 < (long)local_158 - (long)local_110) && (uVar8 != 0)) {
    puVar11 = local_158 + -1;
    if ((local_110 != local_158) && (local_110 < puVar11)) {
      puVar17 = local_110;
      puVar15 = puVar11;
      do {
        puVar17 = puVar17 + 1;
        uVar1 = puVar17[-1];
        puVar17[-1] = *puVar15;
        puVar16 = puVar15 + -1;
        *puVar15 = uVar1;
        puVar15 = puVar16;
      } while (puVar17 < puVar16);
      uVar14 = (ulong)local_119;
    }
    pppppppbVar2 = (byte *******)local_130;
    if (-1 < (char)uVar14) {
      pppppppbVar2 = &local_130;
    }
    pppppppbVar13 = pppppppbVar2;
    if (local_110 < puVar11) {
      if (-1 < (char)uVar14) {
        local_128 = uVar14 & 0xff;
      }
      puVar17 = local_110;
      do {
        bVar3 = *(byte *)pppppppbVar13;
        if (((bVar3 != 0) && (bVar3 != 0xff)) && (*puVar17 != (uint)bVar3)) goto LAB_00525280;
        puVar17 = puVar17 + 1;
        if (1 < (long)((long)pppppppbVar2 + (local_128 - (long)pppppppbVar13))) {
          pppppppbVar13 = (byte *******)((long)pppppppbVar13 + 1);
        }
      } while (puVar17 < puVar11);
    }
    bVar3 = *(byte *)pppppppbVar13;
    if (((bVar3 != 0) && (bVar3 != 0xff)) && ((uint)bVar3 <= *puVar11 - 1)) {
LAB_00525280:
      *param_5 = 4;
    }
  }
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    plVar18 = param_2;
joined_r0x005252a8:
    param_2 = plVar18;
    if (param_3 == (long *)0x0) goto LAB_0052534c;
LAB_005252ac:
    if (param_3[3] == param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
      if (bVar6 != (iVar7 == -1)) goto LAB_005252c8;
    }
    else if (bVar6 != false) goto LAB_005252c8;
  }
  else {
    if (param_2[3] == param_2[4]) {
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
      bVar6 = iVar7 == -1;
      plVar18 = (long *)0x0;
      if (!bVar6) {
        plVar18 = param_2;
      }
      goto joined_r0x005252a8;
    }
    bVar6 = false;
    if (param_3 != (long *)0x0) goto LAB_005252ac;
LAB_0052534c:
    if (bVar6 == false) goto LAB_005252c8;
  }
  *param_5 = *param_5 | 2;
LAB_005252c8:
  if ((long)local_138 < 0) {
    operator_delete(local_148);
  }
  if ((char)local_119 < '\0') {
    operator_delete(local_130);
  }
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return param_2;
  }
LAB_0052543c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00525448  thunk_FUN_0052544c =====

long * thunk_FUN_0052544c(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,
                         uint *param_5,undefined4 *param_6)

{
  byte *******pppppppbVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  long *plVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  uint *puVar10;
  undefined8 *******pppppppuVar11;
  byte *******pppppppbVar12;
  ulong uVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  long *plVar17;
  undefined4 uVar18;
  undefined1 auStack_184 [4];
  char acStack_180 [4];
  uint uStack_17c;
  uint *puStack_178;
  undefined8 ******ppppppuStack_170;
  undefined8 ******ppppppuStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  byte ******ppppppbStack_150;
  ulong uStack_148;
  byte bStack_139;
  undefined1 auStack_138 [4];
  undefined1 auStack_134 [4];
  uint auStack_130 [40];
  undefined1 auStack_90 [32];
  long lStack_70;
  
  lVar4 = tpidr_el0;
  lStack_70 = *(long *)(lVar4 + 0x28);
  FUN_0052b8c8(&ppppppbStack_150,param_4,auStack_90,auStack_134,auStack_138);
  ppppppuStack_168 = (undefined8 *******)0x0;
  uStack_160 = 0;
  uStack_158 = 0;
  FUN_0054809c(&ppppppuStack_168,0x16,0);
  pppppppuVar11 = (undefined8 *******)ppppppuStack_168;
  if (-1 < (long)uStack_158) {
    pppppppuVar11 = &ppppppuStack_168;
  }
  acStack_180[0] = '\x01';
  auStack_184[0] = 0x45;
  uStack_17c = 0;
  puStack_178 = auStack_130;
  ppppppuStack_170 = pppppppuVar11;
LAB_00525504:
  plVar17 = param_3;
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    plVar5 = param_2;
joined_r0x00525558:
    param_2 = plVar5;
    if (param_3 != (long *)0x0) goto LAB_00525528;
LAB_0052555c:
    if (bVar6 != false) goto LAB_005256d4;
  }
  else {
    if (param_2[3] == param_2[4]) {
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
      bVar6 = iVar7 == -1;
      plVar5 = (long *)0x0;
      if (!bVar6) {
        plVar5 = param_2;
      }
      goto joined_r0x00525558;
    }
    bVar6 = false;
    if (param_3 == (long *)0x0) goto LAB_0052555c;
LAB_00525528:
    if (param_3[3] == param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
      plVar17 = (long *)0x0;
      if (iVar7 != -1) {
        plVar17 = param_3;
      }
      param_3 = plVar17;
      if (bVar6 == (iVar7 == -1)) goto LAB_005256d4;
    }
    else if (bVar6 == false) goto LAB_005256d4;
  }
  uVar8 = uStack_160;
  if (-1 < (long)uStack_158) {
    uVar8 = uStack_158 >> 0x38;
  }
  if ((undefined8 *******)ppppppuStack_170 == (undefined8 *******)((long)pppppppuVar11 + uVar8)) {
    if ((long)uVar8 < 1) {
      uVar9 = uVar8 * 2;
      pppppppuVar11 = (undefined8 *******)ppppppuStack_168;
      uVar13 = uVar9;
      if (-1 < (long)uStack_158) {
        if (0x16 < uVar9) {
          if (*(long *)(lVar4 + 0x28) == lStack_70) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_005259f4;
        }
        uStack_158 = CONCAT17((char)uVar9,(undefined7)uStack_158);
        pppppppuVar11 = &ppppppuStack_168;
        uVar13 = uStack_160;
      }
      uStack_160 = uVar13;
      *(undefined1 *)((long)pppppppuVar11 + uVar9) = 0;
    }
    else {
      FUN_0054809c(&ppppppuStack_168,uVar8,0);
    }
    uVar13 = (uStack_158 & 0x7fffffffffffffff) - 1;
    uVar9 = uStack_160;
    if (-1 < (long)uStack_158) {
      uVar13 = 0x16;
      uVar9 = uStack_158 >> 0x38;
    }
    if (uVar13 < uVar9 || uVar13 - uVar9 == 0) {
      pppppppuVar11 = (undefined8 *******)ppppppuStack_168;
      uVar9 = uVar13;
      if (-1 < (long)uStack_158) {
        if (0x16 < uVar13) {
          if (*(long *)(lVar4 + 0x28) == lStack_70) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_005259f4;
        }
        uStack_158 = CONCAT17((char)uVar13,(undefined7)uStack_158);
        pppppppuVar11 = &ppppppuStack_168;
        uVar9 = uStack_160;
      }
      uStack_160 = uVar9;
      *(undefined1 *)((long)pppppppuVar11 + uVar13) = 0;
    }
    else {
      FUN_0054809c(&ppppppuStack_168,uVar13 - uVar9,0);
    }
    pppppppuVar11 = (undefined8 *******)ppppppuStack_168;
    if (-1 < (long)uStack_158) {
      pppppppuVar11 = &ppppppuStack_168;
    }
    ppppppuStack_170 = (undefined8 ******)((long)pppppppuVar11 + uVar8);
  }
  if ((byte *)param_2[3] == (byte *)param_2[4]) {
    uVar8 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    uVar8 = (ulong)*(byte *)param_2[3];
  }
  iVar7 = FUN_0052bb00(uVar8,acStack_180,auStack_184,pppppppuVar11,&ppppppuStack_170,auStack_134[0],
                       auStack_138[0],&ppppppbStack_150,auStack_130,&puStack_178,&uStack_17c,
                       auStack_90);
  param_3 = plVar17;
  if (iVar7 != 0) goto LAB_005256d4;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 1;
  }
  goto LAB_00525504;
LAB_005256d4:
  uVar8 = uStack_148;
  if (-1 < (char)bStack_139) {
    uVar8 = (ulong)bStack_139;
  }
  if (((uVar8 != 0) && (acStack_180[0] != '\0')) && ((long)puStack_178 - (long)auStack_130 < 0xa0))
  {
    *puStack_178 = uStack_17c;
    puStack_178 = puStack_178 + 1;
  }
  uVar18 = FUN_005462a8(pppppppuVar11,ppppppuStack_170,param_5);
  uVar13 = (ulong)(uint)(int)(char)bStack_139;
  uVar8 = uStack_148;
  if (-1 < (char)bStack_139) {
    uVar8 = (ulong)bStack_139;
  }
  *param_6 = uVar18;
  if ((4 < (long)puStack_178 - (long)auStack_130) && (uVar8 != 0)) {
    puVar10 = puStack_178 + -1;
    if ((auStack_130 != puStack_178) && (auStack_130 < puVar10)) {
      puVar16 = auStack_130;
      puVar14 = puVar10;
      do {
        puVar16 = puVar16 + 1;
        uVar2 = puVar16[-1];
        puVar16[-1] = *puVar14;
        puVar15 = puVar14 + -1;
        *puVar14 = uVar2;
        puVar14 = puVar15;
      } while (puVar16 < puVar15);
      uVar13 = (ulong)bStack_139;
    }
    pppppppbVar1 = (byte *******)ppppppbStack_150;
    if (-1 < (char)uVar13) {
      pppppppbVar1 = &ppppppbStack_150;
    }
    pppppppbVar12 = pppppppbVar1;
    if (auStack_130 < puVar10) {
      if (-1 < (char)uVar13) {
        uStack_148 = uVar13 & 0xff;
      }
      puVar16 = auStack_130;
      do {
        bVar3 = *(byte *)pppppppbVar12;
        if (((bVar3 != 0) && (bVar3 != 0xff)) && (*puVar16 != (uint)bVar3)) goto LAB_00525838;
        puVar16 = puVar16 + 1;
        if (1 < (long)((long)pppppppbVar1 + (uStack_148 - (long)pppppppbVar12))) {
          pppppppbVar12 = (byte *******)((long)pppppppbVar12 + 1);
        }
      } while (puVar16 < puVar10);
    }
    bVar3 = *(byte *)pppppppbVar12;
    if (((bVar3 != 0) && (bVar3 != 0xff)) && ((uint)bVar3 <= *puVar10 - 1)) {
LAB_00525838:
      *param_5 = 4;
    }
  }
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    plVar17 = param_2;
joined_r0x00525860:
    param_2 = plVar17;
    if (param_3 == (long *)0x0) goto LAB_00525904;
LAB_00525864:
    if (param_3[3] == param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
      if (bVar6 != (iVar7 == -1)) goto LAB_00525880;
    }
    else if (bVar6 != false) goto LAB_00525880;
  }
  else {
    if (param_2[3] == param_2[4]) {
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
      bVar6 = iVar7 == -1;
      plVar17 = (long *)0x0;
      if (!bVar6) {
        plVar17 = param_2;
      }
      goto joined_r0x00525860;
    }
    bVar6 = false;
    if (param_3 != (long *)0x0) goto LAB_00525864;
LAB_00525904:
    if (bVar6 == false) goto LAB_00525880;
  }
  *param_5 = *param_5 | 2;
LAB_00525880:
  if ((long)uStack_158 < 0) {
    operator_delete(ppppppuStack_168);
  }
  if ((char)bStack_139 < '\0') {
    operator_delete(ppppppbStack_150);
  }
  if (*(long *)(lVar4 + 0x28) == lStack_70) {
    return param_2;
  }
LAB_005259f4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0052544c  FUN_0052544c =====

long * FUN_0052544c(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,uint *param_5,
                   undefined4 *param_6)

{
  byte *******pppppppbVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  long *plVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  uint *puVar10;
  undefined8 *******pppppppuVar11;
  byte *******pppppppbVar12;
  ulong uVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  long *plVar17;
  undefined4 uVar18;
  undefined1 local_184 [4];
  char local_180 [4];
  uint local_17c;
  uint *local_178;
  undefined8 ******local_170;
  undefined8 ******local_168;
  ulong local_160;
  undefined8 local_158;
  byte ******local_150;
  ulong local_148;
  byte local_139;
  undefined1 local_138 [4];
  undefined1 local_134 [4];
  uint local_130 [40];
  undefined1 auStack_90 [32];
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  FUN_0052b8c8(&local_150,param_4,auStack_90,local_134,local_138);
  local_168 = (undefined8 *******)0x0;
  local_160 = 0;
  local_158 = 0;
                    /* try { // try from 005254ac to 005254bf has its CatchHandler @ 005259a8 */
  FUN_0054809c(&local_168,0x16,0);
  pppppppuVar11 = (undefined8 *******)local_168;
  if (-1 < (long)local_158) {
    pppppppuVar11 = &local_168;
  }
  local_180[0] = '\x01';
  local_184[0] = 0x45;
  local_17c = 0;
  local_178 = local_130;
  local_170 = pppppppuVar11;
LAB_00525504:
  plVar17 = param_3;
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    plVar5 = param_2;
joined_r0x00525558:
    param_2 = plVar5;
    if (param_3 != (long *)0x0) goto LAB_00525528;
LAB_0052555c:
    if (bVar6 != false) goto LAB_005256d4;
  }
  else {
    if (param_2[3] == param_2[4]) {
                    /* try { // try from 00525544 to 00525573 has its CatchHandler @ 005259b4 */
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
      bVar6 = iVar7 == -1;
      plVar5 = (long *)0x0;
      if (!bVar6) {
        plVar5 = param_2;
      }
      goto joined_r0x00525558;
    }
    bVar6 = false;
    if (param_3 == (long *)0x0) goto LAB_0052555c;
LAB_00525528:
    if (param_3[3] == param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
      plVar17 = (long *)0x0;
      if (iVar7 != -1) {
        plVar17 = param_3;
      }
      param_3 = plVar17;
      if (bVar6 == (iVar7 == -1)) goto LAB_005256d4;
    }
    else if (bVar6 == false) goto LAB_005256d4;
  }
  uVar8 = local_160;
  if (-1 < (long)local_158) {
    uVar8 = local_158 >> 0x38;
  }
  if ((undefined8 *******)local_170 == (undefined8 *******)((long)pppppppuVar11 + uVar8)) {
    if ((long)uVar8 < 1) {
      uVar9 = uVar8 * 2;
      pppppppuVar11 = (undefined8 *******)local_168;
      uVar13 = uVar9;
      if (-1 < (long)local_158) {
        if (0x16 < uVar9) {
          if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* try { // try from 00525980 to 005259a7 has its CatchHandler @ 005259f8 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_005259f4;
        }
        local_158 = CONCAT17((char)uVar9,(undefined7)local_158);
        pppppppuVar11 = &local_168;
        uVar13 = local_160;
      }
      local_160 = uVar13;
      *(undefined1 *)((long)pppppppuVar11 + uVar9) = 0;
    }
    else {
                    /* try { // try from 005255b4 to 00525623 has its CatchHandler @ 005259b0 */
      FUN_0054809c(&local_168,uVar8,0);
    }
    uVar13 = (local_158 & 0x7fffffffffffffff) - 1;
    uVar9 = local_160;
    if (-1 < (long)local_158) {
      uVar13 = 0x16;
      uVar9 = local_158 >> 0x38;
    }
    if (uVar13 < uVar9 || uVar13 - uVar9 == 0) {
      pppppppuVar11 = (undefined8 *******)local_168;
      uVar9 = uVar13;
      if (-1 < (long)local_158) {
        if (0x16 < uVar13) {
          if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* try { // try from 00525944 to 0052596b has its CatchHandler @ 005259fc */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_005259f4;
        }
        local_158 = CONCAT17((char)uVar13,(undefined7)local_158);
        pppppppuVar11 = &local_168;
        uVar9 = local_160;
      }
      local_160 = uVar9;
      *(undefined1 *)((long)pppppppuVar11 + uVar13) = 0;
    }
    else {
      FUN_0054809c(&local_168,uVar13 - uVar9,0);
    }
    pppppppuVar11 = (undefined8 *******)local_168;
    if (-1 < (long)local_158) {
      pppppppuVar11 = &local_168;
    }
    local_170 = (undefined8 ******)((long)pppppppuVar11 + uVar8);
  }
  if ((byte *)param_2[3] == (byte *)param_2[4]) {
                    /* try { // try from 00525680 to 005256cf has its CatchHandler @ 005259b4 */
    uVar8 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    uVar8 = (ulong)*(byte *)param_2[3];
  }
  iVar7 = FUN_0052bb00(uVar8,local_180,local_184,pppppppuVar11,&local_170,local_134[0],local_138[0],
                       &local_150,local_130,&local_178,&local_17c,auStack_90);
  param_3 = plVar17;
  if (iVar7 != 0) goto LAB_005256d4;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 1;
  }
  goto LAB_00525504;
LAB_005256d4:
  uVar8 = local_148;
  if (-1 < (char)local_139) {
    uVar8 = (ulong)local_139;
  }
  if (((uVar8 != 0) && (local_180[0] != '\0')) && ((long)local_178 - (long)local_130 < 0xa0)) {
    *local_178 = local_17c;
    local_178 = local_178 + 1;
  }
                    /* try { // try from 0052571c to 0052591b has its CatchHandler @ 005259ac */
  uVar18 = FUN_005462a8(pppppppuVar11,local_170,param_5);
  uVar13 = (ulong)(uint)(int)(char)local_139;
  uVar8 = local_148;
  if (-1 < (char)local_139) {
    uVar8 = (ulong)local_139;
  }
  *param_6 = uVar18;
  if ((4 < (long)local_178 - (long)local_130) && (uVar8 != 0)) {
    puVar10 = local_178 + -1;
    if ((local_130 != local_178) && (local_130 < puVar10)) {
      puVar16 = local_130;
      puVar14 = puVar10;
      do {
        puVar16 = puVar16 + 1;
        uVar2 = puVar16[-1];
        puVar16[-1] = *puVar14;
        puVar15 = puVar14 + -1;
        *puVar14 = uVar2;
        puVar14 = puVar15;
      } while (puVar16 < puVar15);
      uVar13 = (ulong)local_139;
    }
    pppppppbVar1 = (byte *******)local_150;
    if (-1 < (char)uVar13) {
      pppppppbVar1 = &local_150;
    }
    pppppppbVar12 = pppppppbVar1;
    if (local_130 < puVar10) {
      if (-1 < (char)uVar13) {
        local_148 = uVar13 & 0xff;
      }
      puVar16 = local_130;
      do {
        bVar3 = *(byte *)pppppppbVar12;
        if (((bVar3 != 0) && (bVar3 != 0xff)) && (*puVar16 != (uint)bVar3)) goto LAB_00525838;
        puVar16 = puVar16 + 1;
        if (1 < (long)((long)pppppppbVar1 + (local_148 - (long)pppppppbVar12))) {
          pppppppbVar12 = (byte *******)((long)pppppppbVar12 + 1);
        }
      } while (puVar16 < puVar10);
    }
    bVar3 = *(byte *)pppppppbVar12;
    if (((bVar3 != 0) && (bVar3 != 0xff)) && ((uint)bVar3 <= *puVar10 - 1)) {
LAB_00525838:
      *param_5 = 4;
    }
  }
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    plVar17 = param_2;
joined_r0x00525860:
    param_2 = plVar17;
    if (param_3 == (long *)0x0) goto LAB_00525904;
LAB_00525864:
    if (param_3[3] == param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
      if (bVar6 != (iVar7 == -1)) goto LAB_00525880;
    }
    else if (bVar6 != false) goto LAB_00525880;
  }
  else {
    if (param_2[3] == param_2[4]) {
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
      bVar6 = iVar7 == -1;
      plVar17 = (long *)0x0;
      if (!bVar6) {
        plVar17 = param_2;
      }
      goto joined_r0x00525860;
    }
    bVar6 = false;
    if (param_3 != (long *)0x0) goto LAB_00525864;
LAB_00525904:
    if (bVar6 == false) goto LAB_00525880;
  }
  *param_5 = *param_5 | 2;
LAB_00525880:
  if ((long)local_158 < 0) {
    operator_delete(local_168);
  }
  if ((char)local_139 < '\0') {
    operator_delete(local_150);
  }
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return param_2;
  }
LAB_005259f4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00525a00  thunk_FUN_00525a04 =====

long * thunk_FUN_00525a04(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,
                         uint *param_5,undefined8 *param_6)

{
  byte *******pppppppbVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  long *plVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  uint *puVar10;
  undefined8 *******pppppppuVar11;
  byte *******pppppppbVar12;
  ulong uVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined1 auStack_184 [4];
  char acStack_180 [4];
  uint uStack_17c;
  uint *puStack_178;
  undefined8 ******ppppppuStack_170;
  undefined8 ******ppppppuStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  byte ******ppppppbStack_150;
  ulong uStack_148;
  byte bStack_139;
  undefined1 auStack_138 [4];
  undefined1 auStack_134 [4];
  uint auStack_130 [40];
  undefined1 auStack_90 [32];
  long lStack_70;
  
  lVar4 = tpidr_el0;
  lStack_70 = *(long *)(lVar4 + 0x28);
  FUN_0052b8c8(&ppppppbStack_150,param_4,auStack_90,auStack_134,auStack_138);
  ppppppuStack_168 = (undefined8 *******)0x0;
  uStack_160 = 0;
  uStack_158 = 0;
  FUN_0054809c(&ppppppuStack_168,0x16,0);
  pppppppuVar11 = (undefined8 *******)ppppppuStack_168;
  if (-1 < (long)uStack_158) {
    pppppppuVar11 = &ppppppuStack_168;
  }
  acStack_180[0] = '\x01';
  auStack_184[0] = 0x45;
  uStack_17c = 0;
  puStack_178 = auStack_130;
  ppppppuStack_170 = pppppppuVar11;
LAB_00525abc:
  plVar17 = param_3;
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    plVar5 = param_2;
joined_r0x00525b10:
    param_2 = plVar5;
    if (param_3 != (long *)0x0) goto LAB_00525ae0;
LAB_00525b14:
    if (bVar6 != false) goto LAB_00525c8c;
  }
  else {
    if (param_2[3] == param_2[4]) {
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
      bVar6 = iVar7 == -1;
      plVar5 = (long *)0x0;
      if (!bVar6) {
        plVar5 = param_2;
      }
      goto joined_r0x00525b10;
    }
    bVar6 = false;
    if (param_3 == (long *)0x0) goto LAB_00525b14;
LAB_00525ae0:
    if (param_3[3] == param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
      plVar17 = (long *)0x0;
      if (iVar7 != -1) {
        plVar17 = param_3;
      }
      param_3 = plVar17;
      if (bVar6 == (iVar7 == -1)) goto LAB_00525c8c;
    }
    else if (bVar6 == false) goto LAB_00525c8c;
  }
  uVar8 = uStack_160;
  if (-1 < (long)uStack_158) {
    uVar8 = uStack_158 >> 0x38;
  }
  if ((undefined8 *******)ppppppuStack_170 == (undefined8 *******)((long)pppppppuVar11 + uVar8)) {
    if ((long)uVar8 < 1) {
      uVar9 = uVar8 * 2;
      pppppppuVar11 = (undefined8 *******)ppppppuStack_168;
      uVar13 = uVar9;
      if (-1 < (long)uStack_158) {
        if (0x16 < uVar9) {
          if (*(long *)(lVar4 + 0x28) == lStack_70) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_00525fac;
        }
        uStack_158 = CONCAT17((char)uVar9,(undefined7)uStack_158);
        pppppppuVar11 = &ppppppuStack_168;
        uVar13 = uStack_160;
      }
      uStack_160 = uVar13;
      *(undefined1 *)((long)pppppppuVar11 + uVar9) = 0;
    }
    else {
      FUN_0054809c(&ppppppuStack_168,uVar8,0);
    }
    uVar13 = (uStack_158 & 0x7fffffffffffffff) - 1;
    uVar9 = uStack_160;
    if (-1 < (long)uStack_158) {
      uVar13 = 0x16;
      uVar9 = uStack_158 >> 0x38;
    }
    if (uVar13 < uVar9 || uVar13 - uVar9 == 0) {
      pppppppuVar11 = (undefined8 *******)ppppppuStack_168;
      uVar9 = uVar13;
      if (-1 < (long)uStack_158) {
        if (0x16 < uVar13) {
          if (*(long *)(lVar4 + 0x28) == lStack_70) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_00525fac;
        }
        uStack_158 = CONCAT17((char)uVar13,(undefined7)uStack_158);
        pppppppuVar11 = &ppppppuStack_168;
        uVar9 = uStack_160;
      }
      uStack_160 = uVar9;
      *(undefined1 *)((long)pppppppuVar11 + uVar13) = 0;
    }
    else {
      FUN_0054809c(&ppppppuStack_168,uVar13 - uVar9,0);
    }
    pppppppuVar11 = (undefined8 *******)ppppppuStack_168;
    if (-1 < (long)uStack_158) {
      pppppppuVar11 = &ppppppuStack_168;
    }
    ppppppuStack_170 = (undefined8 ******)((long)pppppppuVar11 + uVar8);
  }
  if ((byte *)param_2[3] == (byte *)param_2[4]) {
    uVar8 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    uVar8 = (ulong)*(byte *)param_2[3];
  }
  iVar7 = FUN_0052bb00(uVar8,acStack_180,auStack_184,pppppppuVar11,&ppppppuStack_170,auStack_134[0],
                       auStack_138[0],&ppppppbStack_150,auStack_130,&puStack_178,&uStack_17c,
                       auStack_90);
  param_3 = plVar17;
  if (iVar7 != 0) goto LAB_00525c8c;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 1;
  }
  goto LAB_00525abc;
LAB_00525c8c:
  uVar8 = uStack_148;
  if (-1 < (char)bStack_139) {
    uVar8 = (ulong)bStack_139;
  }
  if (((uVar8 != 0) && (acStack_180[0] != '\0')) && ((long)puStack_178 - (long)auStack_130 < 0xa0))
  {
    *puStack_178 = uStack_17c;
    puStack_178 = puStack_178 + 1;
  }
  uVar18 = FUN_005463f0(pppppppuVar11,ppppppuStack_170,param_5);
  uVar13 = (ulong)(uint)(int)(char)bStack_139;
  uVar8 = uStack_148;
  if (-1 < (char)bStack_139) {
    uVar8 = (ulong)bStack_139;
  }
  *param_6 = uVar18;
  if ((4 < (long)puStack_178 - (long)auStack_130) && (uVar8 != 0)) {
    puVar10 = puStack_178 + -1;
    if ((auStack_130 != puStack_178) && (auStack_130 < puVar10)) {
      puVar16 = auStack_130;
      puVar14 = puVar10;
      do {
        puVar16 = puVar16 + 1;
        uVar2 = puVar16[-1];
        puVar16[-1] = *puVar14;
        puVar15 = puVar14 + -1;
        *puVar14 = uVar2;
        puVar14 = puVar15;
      } while (puVar16 < puVar15);
      uVar13 = (ulong)bStack_139;
    }
    pppppppbVar1 = (byte *******)ppppppbStack_150;
    if (-1 < (char)uVar13) {
      pppppppbVar1 = &ppppppbStack_150;
    }
    pppppppbVar12 = pppppppbVar1;
    if (auStack_130 < puVar10) {
      if (-1 < (char)uVar13) {
        uStack_148 = uVar13 & 0xff;
      }
      puVar16 = auStack_130;
      do {
        bVar3 = *(byte *)pppppppbVar12;
        if (((bVar3 != 0) && (bVar3 != 0xff)) && (*puVar16 != (uint)bVar3)) goto LAB_00525df0;
        puVar16 = puVar16 + 1;
        if (1 < (long)((long)pppppppbVar1 + (uStack_148 - (long)pppppppbVar12))) {
          pppppppbVar12 = (byte *******)((long)pppppppbVar12 + 1);
        }
      } while (puVar16 < puVar10);
    }
    bVar3 = *(byte *)pppppppbVar12;
    if (((bVar3 != 0) && (bVar3 != 0xff)) && ((uint)bVar3 <= *puVar10 - 1)) {
LAB_00525df0:
      *param_5 = 4;
    }
  }
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    plVar17 = param_2;
joined_r0x00525e18:
    param_2 = plVar17;
    if (param_3 == (long *)0x0) goto LAB_00525ebc;
LAB_00525e1c:
    if (param_3[3] == param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
      if (bVar6 != (iVar7 == -1)) goto LAB_00525e38;
    }
    else if (bVar6 != false) goto LAB_00525e38;
  }
  else {
    if (param_2[3] == param_2[4]) {
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
      bVar6 = iVar7 == -1;
      plVar17 = (long *)0x0;
      if (!bVar6) {
        plVar17 = param_2;
      }
      goto joined_r0x00525e18;
    }
    bVar6 = false;
    if (param_3 != (long *)0x0) goto LAB_00525e1c;
LAB_00525ebc:
    if (bVar6 == false) goto LAB_00525e38;
  }
  *param_5 = *param_5 | 2;
LAB_00525e38:
  if ((long)uStack_158 < 0) {
    operator_delete(ppppppuStack_168);
  }
  if ((char)bStack_139 < '\0') {
    operator_delete(ppppppbStack_150);
  }
  if (*(long *)(lVar4 + 0x28) == lStack_70) {
    return param_2;
  }
LAB_00525fac:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00525a04  FUN_00525a04 =====

long * FUN_00525a04(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,uint *param_5,
                   undefined8 *param_6)

{
  byte *******pppppppbVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  long *plVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  uint *puVar10;
  undefined8 *******pppppppuVar11;
  byte *******pppppppbVar12;
  ulong uVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined1 local_184 [4];
  char local_180 [4];
  uint local_17c;
  uint *local_178;
  undefined8 ******local_170;
  undefined8 ******local_168;
  ulong local_160;
  undefined8 local_158;
  byte ******local_150;
  ulong local_148;
  byte local_139;
  undefined1 local_138 [4];
  undefined1 local_134 [4];
  uint local_130 [40];
  undefined1 auStack_90 [32];
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  FUN_0052b8c8(&local_150,param_4,auStack_90,local_134,local_138);
  local_168 = (undefined8 *******)0x0;
  local_160 = 0;
  local_158 = 0;
                    /* try { // try from 00525a64 to 00525a77 has its CatchHandler @ 00525f60 */
  FUN_0054809c(&local_168,0x16,0);
  pppppppuVar11 = (undefined8 *******)local_168;
  if (-1 < (long)local_158) {
    pppppppuVar11 = &local_168;
  }
  local_180[0] = '\x01';
  local_184[0] = 0x45;
  local_17c = 0;
  local_178 = local_130;
  local_170 = pppppppuVar11;
LAB_00525abc:
  plVar17 = param_3;
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    plVar5 = param_2;
joined_r0x00525b10:
    param_2 = plVar5;
    if (param_3 != (long *)0x0) goto LAB_00525ae0;
LAB_00525b14:
    if (bVar6 != false) goto LAB_00525c8c;
  }
  else {
    if (param_2[3] == param_2[4]) {
                    /* try { // try from 00525afc to 00525b2b has its CatchHandler @ 00525f6c */
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
      bVar6 = iVar7 == -1;
      plVar5 = (long *)0x0;
      if (!bVar6) {
        plVar5 = param_2;
      }
      goto joined_r0x00525b10;
    }
    bVar6 = false;
    if (param_3 == (long *)0x0) goto LAB_00525b14;
LAB_00525ae0:
    if (param_3[3] == param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
      plVar17 = (long *)0x0;
      if (iVar7 != -1) {
        plVar17 = param_3;
      }
      param_3 = plVar17;
      if (bVar6 == (iVar7 == -1)) goto LAB_00525c8c;
    }
    else if (bVar6 == false) goto LAB_00525c8c;
  }
  uVar8 = local_160;
  if (-1 < (long)local_158) {
    uVar8 = local_158 >> 0x38;
  }
  if ((undefined8 *******)local_170 == (undefined8 *******)((long)pppppppuVar11 + uVar8)) {
    if ((long)uVar8 < 1) {
      uVar9 = uVar8 * 2;
      pppppppuVar11 = (undefined8 *******)local_168;
      uVar13 = uVar9;
      if (-1 < (long)local_158) {
        if (0x16 < uVar9) {
          if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* try { // try from 00525f38 to 00525f5f has its CatchHandler @ 00525fb0 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_00525fac;
        }
        local_158 = CONCAT17((char)uVar9,(undefined7)local_158);
        pppppppuVar11 = &local_168;
        uVar13 = local_160;
      }
      local_160 = uVar13;
      *(undefined1 *)((long)pppppppuVar11 + uVar9) = 0;
    }
    else {
                    /* try { // try from 00525b6c to 00525bdb has its CatchHandler @ 00525f68 */
      FUN_0054809c(&local_168,uVar8,0);
    }
    uVar13 = (local_158 & 0x7fffffffffffffff) - 1;
    uVar9 = local_160;
    if (-1 < (long)local_158) {
      uVar13 = 0x16;
      uVar9 = local_158 >> 0x38;
    }
    if (uVar13 < uVar9 || uVar13 - uVar9 == 0) {
      pppppppuVar11 = (undefined8 *******)local_168;
      uVar9 = uVar13;
      if (-1 < (long)local_158) {
        if (0x16 < uVar13) {
          if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* try { // try from 00525efc to 00525f23 has its CatchHandler @ 00525fb4 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_00525fac;
        }
        local_158 = CONCAT17((char)uVar13,(undefined7)local_158);
        pppppppuVar11 = &local_168;
        uVar9 = local_160;
      }
      local_160 = uVar9;
      *(undefined1 *)((long)pppppppuVar11 + uVar13) = 0;
    }
    else {
      FUN_0054809c(&local_168,uVar13 - uVar9,0);
    }
    pppppppuVar11 = (undefined8 *******)local_168;
    if (-1 < (long)local_158) {
      pppppppuVar11 = &local_168;
    }
    local_170 = (undefined8 ******)((long)pppppppuVar11 + uVar8);
  }
  if ((byte *)param_2[3] == (byte *)param_2[4]) {
                    /* try { // try from 00525c38 to 00525c87 has its CatchHandler @ 00525f6c */
    uVar8 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    uVar8 = (ulong)*(byte *)param_2[3];
  }
  iVar7 = FUN_0052bb00(uVar8,local_180,local_184,pppppppuVar11,&local_170,local_134[0],local_138[0],
                       &local_150,local_130,&local_178,&local_17c,auStack_90);
  param_3 = plVar17;
  if (iVar7 != 0) goto LAB_00525c8c;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 1;
  }
  goto LAB_00525abc;
LAB_00525c8c:
  uVar8 = local_148;
  if (-1 < (char)local_139) {
    uVar8 = (ulong)local_139;
  }
  if (((uVar8 != 0) && (local_180[0] != '\0')) && ((long)local_178 - (long)local_130 < 0xa0)) {
    *local_178 = local_17c;
    local_178 = local_178 + 1;
  }
                    /* try { // try from 00525cd4 to 00525ed3 has its CatchHandler @ 00525f64 */
  uVar18 = FUN_005463f0(pppppppuVar11,local_170,param_5);
  uVar13 = (ulong)(uint)(int)(char)local_139;
  uVar8 = local_148;
  if (-1 < (char)local_139) {
    uVar8 = (ulong)local_139;
  }
  *param_6 = uVar18;
  if ((4 < (long)local_178 - (long)local_130) && (uVar8 != 0)) {
    puVar10 = local_178 + -1;
    if ((local_130 != local_178) && (local_130 < puVar10)) {
      puVar16 = local_130;
      puVar14 = puVar10;
      do {
        puVar16 = puVar16 + 1;
        uVar2 = puVar16[-1];
        puVar16[-1] = *puVar14;
        puVar15 = puVar14 + -1;
        *puVar14 = uVar2;
        puVar14 = puVar15;
      } while (puVar16 < puVar15);
      uVar13 = (ulong)local_139;
    }
    pppppppbVar1 = (byte *******)local_150;
    if (-1 < (char)uVar13) {
      pppppppbVar1 = &local_150;
    }
    pppppppbVar12 = pppppppbVar1;
    if (local_130 < puVar10) {
      if (-1 < (char)uVar13) {
        local_148 = uVar13 & 0xff;
      }
      puVar16 = local_130;
      do {
        bVar3 = *(byte *)pppppppbVar12;
        if (((bVar3 != 0) && (bVar3 != 0xff)) && (*puVar16 != (uint)bVar3)) goto LAB_00525df0;
        puVar16 = puVar16 + 1;
        if (1 < (long)((long)pppppppbVar1 + (local_148 - (long)pppppppbVar12))) {
          pppppppbVar12 = (byte *******)((long)pppppppbVar12 + 1);
        }
      } while (puVar16 < puVar10);
    }
    bVar3 = *(byte *)pppppppbVar12;
    if (((bVar3 != 0) && (bVar3 != 0xff)) && ((uint)bVar3 <= *puVar10 - 1)) {
LAB_00525df0:
      *param_5 = 4;
    }
  }
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    plVar17 = param_2;
joined_r0x00525e18:
    param_2 = plVar17;
    if (param_3 == (long *)0x0) goto LAB_00525ebc;
LAB_00525e1c:
    if (param_3[3] == param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
      if (bVar6 != (iVar7 == -1)) goto LAB_00525e38;
    }
    else if (bVar6 != false) goto LAB_00525e38;
  }
  else {
    if (param_2[3] == param_2[4]) {
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
      bVar6 = iVar7 == -1;
      plVar17 = (long *)0x0;
      if (!bVar6) {
        plVar17 = param_2;
      }
      goto joined_r0x00525e18;
    }
    bVar6 = false;
    if (param_3 != (long *)0x0) goto LAB_00525e1c;
LAB_00525ebc:
    if (bVar6 == false) goto LAB_00525e38;
  }
  *param_5 = *param_5 | 2;
LAB_00525e38:
  if ((long)local_158 < 0) {
    operator_delete(local_168);
  }
  if ((char)local_139 < '\0') {
    operator_delete(local_150);
  }
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return param_2;
  }
LAB_00525fac:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00525fb8  thunk_FUN_00525fbc =====

long * thunk_FUN_00525fbc(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,
                         uint *param_5,undefined1 (*param_6) [16])

{
  byte *******pppppppbVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  long *plVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  uint *puVar10;
  undefined8 *******pppppppuVar11;
  byte *******pppppppbVar12;
  ulong uVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  long *plVar17;
  undefined1 auVar18 [16];
  undefined1 auStack_184 [4];
  char acStack_180 [4];
  uint uStack_17c;
  uint *puStack_178;
  undefined8 ******ppppppuStack_170;
  undefined8 ******ppppppuStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  byte ******ppppppbStack_150;
  ulong uStack_148;
  byte bStack_139;
  undefined1 auStack_138 [4];
  undefined1 auStack_134 [4];
  uint auStack_130 [40];
  undefined1 auStack_90 [32];
  long lStack_70;
  
  lVar4 = tpidr_el0;
  lStack_70 = *(long *)(lVar4 + 0x28);
  FUN_0052b8c8(&ppppppbStack_150,param_4,auStack_90,auStack_134,auStack_138);
  ppppppuStack_168 = (undefined8 *******)0x0;
  uStack_160 = 0;
  uStack_158 = 0;
  FUN_0054809c(&ppppppuStack_168,0x16,0);
  pppppppuVar11 = (undefined8 *******)ppppppuStack_168;
  if (-1 < (long)uStack_158) {
    pppppppuVar11 = &ppppppuStack_168;
  }
  acStack_180[0] = '\x01';
  auStack_184[0] = 0x45;
  uStack_17c = 0;
  puStack_178 = auStack_130;
  ppppppuStack_170 = pppppppuVar11;
LAB_00526074:
  plVar17 = param_3;
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    plVar5 = param_2;
joined_r0x005260c8:
    param_2 = plVar5;
    if (param_3 != (long *)0x0) goto LAB_00526098;
LAB_005260cc:
    if (bVar6 != false) goto LAB_00526244;
  }
  else {
    if (param_2[3] == param_2[4]) {
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
      bVar6 = iVar7 == -1;
      plVar5 = (long *)0x0;
      if (!bVar6) {
        plVar5 = param_2;
      }
      goto joined_r0x005260c8;
    }
    bVar6 = false;
    if (param_3 == (long *)0x0) goto LAB_005260cc;
LAB_00526098:
    if (param_3[3] == param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
      plVar17 = (long *)0x0;
      if (iVar7 != -1) {
        plVar17 = param_3;
      }
      param_3 = plVar17;
      if (bVar6 == (iVar7 == -1)) goto LAB_00526244;
    }
    else if (bVar6 == false) goto LAB_00526244;
  }
  uVar8 = uStack_160;
  if (-1 < (long)uStack_158) {
    uVar8 = uStack_158 >> 0x38;
  }
  if ((undefined8 *******)ppppppuStack_170 == (undefined8 *******)((long)pppppppuVar11 + uVar8)) {
    if ((long)uVar8 < 1) {
      uVar9 = uVar8 * 2;
      pppppppuVar11 = (undefined8 *******)ppppppuStack_168;
      uVar13 = uVar9;
      if (-1 < (long)uStack_158) {
        if (0x16 < uVar9) {
          if (*(long *)(lVar4 + 0x28) == lStack_70) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_00526564;
        }
        uStack_158 = CONCAT17((char)uVar9,(undefined7)uStack_158);
        pppppppuVar11 = &ppppppuStack_168;
        uVar13 = uStack_160;
      }
      uStack_160 = uVar13;
      *(undefined1 *)((long)pppppppuVar11 + uVar9) = 0;
    }
    else {
      FUN_0054809c(&ppppppuStack_168,uVar8,0);
    }
    uVar13 = (uStack_158 & 0x7fffffffffffffff) - 1;
    uVar9 = uStack_160;
    if (-1 < (long)uStack_158) {
      uVar13 = 0x16;
      uVar9 = uStack_158 >> 0x38;
    }
    if (uVar13 < uVar9 || uVar13 - uVar9 == 0) {
      pppppppuVar11 = (undefined8 *******)ppppppuStack_168;
      uVar9 = uVar13;
      if (-1 < (long)uStack_158) {
        if (0x16 < uVar13) {
          if (*(long *)(lVar4 + 0x28) == lStack_70) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_00526564;
        }
        uStack_158 = CONCAT17((char)uVar13,(undefined7)uStack_158);
        pppppppuVar11 = &ppppppuStack_168;
        uVar9 = uStack_160;
      }
      uStack_160 = uVar9;
      *(undefined1 *)((long)pppppppuVar11 + uVar13) = 0;
    }
    else {
      FUN_0054809c(&ppppppuStack_168,uVar13 - uVar9,0);
    }
    pppppppuVar11 = (undefined8 *******)ppppppuStack_168;
    if (-1 < (long)uStack_158) {
      pppppppuVar11 = &ppppppuStack_168;
    }
    ppppppuStack_170 = (undefined8 ******)((long)pppppppuVar11 + uVar8);
  }
  if ((byte *)param_2[3] == (byte *)param_2[4]) {
    uVar8 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    uVar8 = (ulong)*(byte *)param_2[3];
  }
  iVar7 = FUN_0052bb00(uVar8,acStack_180,auStack_184,pppppppuVar11,&ppppppuStack_170,auStack_134[0],
                       auStack_138[0],&ppppppbStack_150,auStack_130,&puStack_178,&uStack_17c,
                       auStack_90);
  param_3 = plVar17;
  if (iVar7 != 0) goto LAB_00526244;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 1;
  }
  goto LAB_00526074;
LAB_00526244:
  uVar8 = uStack_148;
  if (-1 < (char)bStack_139) {
    uVar8 = (ulong)bStack_139;
  }
  if (((uVar8 != 0) && (acStack_180[0] != '\0')) && ((long)puStack_178 - (long)auStack_130 < 0xa0))
  {
    *puStack_178 = uStack_17c;
    puStack_178 = puStack_178 + 1;
  }
  auVar18 = FUN_00546538(pppppppuVar11,ppppppuStack_170,param_5);
  uVar13 = (ulong)(uint)(int)(char)bStack_139;
  uVar8 = uStack_148;
  if (-1 < (char)bStack_139) {
    uVar8 = (ulong)bStack_139;
  }
  *param_6 = auVar18;
  if ((4 < (long)puStack_178 - (long)auStack_130) && (uVar8 != 0)) {
    puVar10 = puStack_178 + -1;
    if ((auStack_130 != puStack_178) && (auStack_130 < puVar10)) {
      puVar16 = auStack_130;
      puVar14 = puVar10;
      do {
        puVar16 = puVar16 + 1;
        uVar2 = puVar16[-1];
        puVar16[-1] = *puVar14;
        puVar15 = puVar14 + -1;
        *puVar14 = uVar2;
        puVar14 = puVar15;
      } while (puVar16 < puVar15);
      uVar13 = (ulong)bStack_139;
    }
    pppppppbVar1 = (byte *******)ppppppbStack_150;
    if (-1 < (char)uVar13) {
      pppppppbVar1 = &ppppppbStack_150;
    }
    pppppppbVar12 = pppppppbVar1;
    if (auStack_130 < puVar10) {
      if (-1 < (char)uVar13) {
        uStack_148 = uVar13 & 0xff;
      }
      puVar16 = auStack_130;
      do {
        bVar3 = *(byte *)pppppppbVar12;
        if (((bVar3 != 0) && (bVar3 != 0xff)) && (*puVar16 != (uint)bVar3)) goto LAB_005263a8;
        puVar16 = puVar16 + 1;
        if (1 < (long)((long)pppppppbVar1 + (uStack_148 - (long)pppppppbVar12))) {
          pppppppbVar12 = (byte *******)((long)pppppppbVar12 + 1);
        }
      } while (puVar16 < puVar10);
    }
    bVar3 = *(byte *)pppppppbVar12;
    if (((bVar3 != 0) && (bVar3 != 0xff)) && ((uint)bVar3 <= *puVar10 - 1)) {
LAB_005263a8:
      *param_5 = 4;
    }
  }
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    plVar17 = param_2;
joined_r0x005263d0:
    param_2 = plVar17;
    if (param_3 == (long *)0x0) goto LAB_00526474;
LAB_005263d4:
    if (param_3[3] == param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
      if (bVar6 != (iVar7 == -1)) goto LAB_005263f0;
    }
    else if (bVar6 != false) goto LAB_005263f0;
  }
  else {
    if (param_2[3] == param_2[4]) {
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
      bVar6 = iVar7 == -1;
      plVar17 = (long *)0x0;
      if (!bVar6) {
        plVar17 = param_2;
      }
      goto joined_r0x005263d0;
    }
    bVar6 = false;
    if (param_3 != (long *)0x0) goto LAB_005263d4;
LAB_00526474:
    if (bVar6 == false) goto LAB_005263f0;
  }
  *param_5 = *param_5 | 2;
LAB_005263f0:
  if ((long)uStack_158 < 0) {
    operator_delete(ppppppuStack_168);
  }
  if ((char)bStack_139 < '\0') {
    operator_delete(ppppppbStack_150);
  }
  if (*(long *)(lVar4 + 0x28) == lStack_70) {
    return param_2;
  }
LAB_00526564:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00525fbc  FUN_00525fbc =====

long * FUN_00525fbc(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,uint *param_5,
                   undefined1 (*param_6) [16])

{
  byte *******pppppppbVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  long *plVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  uint *puVar10;
  undefined8 *******pppppppuVar11;
  byte *******pppppppbVar12;
  ulong uVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  long *plVar17;
  undefined1 auVar18 [16];
  undefined1 local_184 [4];
  char local_180 [4];
  uint local_17c;
  uint *local_178;
  undefined8 ******local_170;
  undefined8 ******local_168;
  ulong local_160;
  undefined8 local_158;
  byte ******local_150;
  ulong local_148;
  byte local_139;
  undefined1 local_138 [4];
  undefined1 local_134 [4];
  uint local_130 [40];
  undefined1 auStack_90 [32];
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  FUN_0052b8c8(&local_150,param_4,auStack_90,local_134,local_138);
  local_168 = (undefined8 *******)0x0;
  local_160 = 0;
  local_158 = 0;
                    /* try { // try from 0052601c to 0052602f has its CatchHandler @ 00526518 */
  FUN_0054809c(&local_168,0x16,0);
  pppppppuVar11 = (undefined8 *******)local_168;
  if (-1 < (long)local_158) {
    pppppppuVar11 = &local_168;
  }
  local_180[0] = '\x01';
  local_184[0] = 0x45;
  local_17c = 0;
  local_178 = local_130;
  local_170 = pppppppuVar11;
LAB_00526074:
  plVar17 = param_3;
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    plVar5 = param_2;
joined_r0x005260c8:
    param_2 = plVar5;
    if (param_3 != (long *)0x0) goto LAB_00526098;
LAB_005260cc:
    if (bVar6 != false) goto LAB_00526244;
  }
  else {
    if (param_2[3] == param_2[4]) {
                    /* try { // try from 005260b4 to 005260e3 has its CatchHandler @ 00526524 */
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
      bVar6 = iVar7 == -1;
      plVar5 = (long *)0x0;
      if (!bVar6) {
        plVar5 = param_2;
      }
      goto joined_r0x005260c8;
    }
    bVar6 = false;
    if (param_3 == (long *)0x0) goto LAB_005260cc;
LAB_00526098:
    if (param_3[3] == param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
      plVar17 = (long *)0x0;
      if (iVar7 != -1) {
        plVar17 = param_3;
      }
      param_3 = plVar17;
      if (bVar6 == (iVar7 == -1)) goto LAB_00526244;
    }
    else if (bVar6 == false) goto LAB_00526244;
  }
  uVar8 = local_160;
  if (-1 < (long)local_158) {
    uVar8 = local_158 >> 0x38;
  }
  if ((undefined8 *******)local_170 == (undefined8 *******)((long)pppppppuVar11 + uVar8)) {
    if ((long)uVar8 < 1) {
      uVar9 = uVar8 * 2;
      pppppppuVar11 = (undefined8 *******)local_168;
      uVar13 = uVar9;
      if (-1 < (long)local_158) {
        if (0x16 < uVar9) {
          if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* try { // try from 005264f0 to 00526517 has its CatchHandler @ 00526568 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_00526564;
        }
        local_158 = CONCAT17((char)uVar9,(undefined7)local_158);
        pppppppuVar11 = &local_168;
        uVar13 = local_160;
      }
      local_160 = uVar13;
      *(undefined1 *)((long)pppppppuVar11 + uVar9) = 0;
    }
    else {
                    /* try { // try from 00526124 to 00526193 has its CatchHandler @ 00526520 */
      FUN_0054809c(&local_168,uVar8,0);
    }
    uVar13 = (local_158 & 0x7fffffffffffffff) - 1;
    uVar9 = local_160;
    if (-1 < (long)local_158) {
      uVar13 = 0x16;
      uVar9 = local_158 >> 0x38;
    }
    if (uVar13 < uVar9 || uVar13 - uVar9 == 0) {
      pppppppuVar11 = (undefined8 *******)local_168;
      uVar9 = uVar13;
      if (-1 < (long)local_158) {
        if (0x16 < uVar13) {
          if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* try { // try from 005264b4 to 005264db has its CatchHandler @ 0052656c */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_00526564;
        }
        local_158 = CONCAT17((char)uVar13,(undefined7)local_158);
        pppppppuVar11 = &local_168;
        uVar9 = local_160;
      }
      local_160 = uVar9;
      *(undefined1 *)((long)pppppppuVar11 + uVar13) = 0;
    }
    else {
      FUN_0054809c(&local_168,uVar13 - uVar9,0);
    }
    pppppppuVar11 = (undefined8 *******)local_168;
    if (-1 < (long)local_158) {
      pppppppuVar11 = &local_168;
    }
    local_170 = (undefined8 ******)((long)pppppppuVar11 + uVar8);
  }
  if ((byte *)param_2[3] == (byte *)param_2[4]) {
                    /* try { // try from 005261f0 to 0052623f has its CatchHandler @ 00526524 */
    uVar8 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    uVar8 = (ulong)*(byte *)param_2[3];
  }
  iVar7 = FUN_0052bb00(uVar8,local_180,local_184,pppppppuVar11,&local_170,local_134[0],local_138[0],
                       &local_150,local_130,&local_178,&local_17c,auStack_90);
  param_3 = plVar17;
  if (iVar7 != 0) goto LAB_00526244;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 1;
  }
  goto LAB_00526074;
LAB_00526244:
  uVar8 = local_148;
  if (-1 < (char)local_139) {
    uVar8 = (ulong)local_139;
  }
  if (((uVar8 != 0) && (local_180[0] != '\0')) && ((long)local_178 - (long)local_130 < 0xa0)) {
    *local_178 = local_17c;
    local_178 = local_178 + 1;
  }
                    /* try { // try from 0052628c to 0052648b has its CatchHandler @ 0052651c */
  auVar18 = FUN_00546538(pppppppuVar11,local_170,param_5);
  uVar13 = (ulong)(uint)(int)(char)local_139;
  uVar8 = local_148;
  if (-1 < (char)local_139) {
    uVar8 = (ulong)local_139;
  }
  *param_6 = auVar18;
  if ((4 < (long)local_178 - (long)local_130) && (uVar8 != 0)) {
    puVar10 = local_178 + -1;
    if ((local_130 != local_178) && (local_130 < puVar10)) {
      puVar16 = local_130;
      puVar14 = puVar10;
      do {
        puVar16 = puVar16 + 1;
        uVar2 = puVar16[-1];
        puVar16[-1] = *puVar14;
        puVar15 = puVar14 + -1;
        *puVar14 = uVar2;
        puVar14 = puVar15;
      } while (puVar16 < puVar15);
      uVar13 = (ulong)local_139;
    }
    pppppppbVar1 = (byte *******)local_150;
    if (-1 < (char)uVar13) {
      pppppppbVar1 = &local_150;
    }
    pppppppbVar12 = pppppppbVar1;
    if (local_130 < puVar10) {
      if (-1 < (char)uVar13) {
        local_148 = uVar13 & 0xff;
      }
      puVar16 = local_130;
      do {
        bVar3 = *(byte *)pppppppbVar12;
        if (((bVar3 != 0) && (bVar3 != 0xff)) && (*puVar16 != (uint)bVar3)) goto LAB_005263a8;
        puVar16 = puVar16 + 1;
        if (1 < (long)((long)pppppppbVar1 + (local_148 - (long)pppppppbVar12))) {
          pppppppbVar12 = (byte *******)((long)pppppppbVar12 + 1);
        }
      } while (puVar16 < puVar10);
    }
    bVar3 = *(byte *)pppppppbVar12;
    if (((bVar3 != 0) && (bVar3 != 0xff)) && ((uint)bVar3 <= *puVar10 - 1)) {
LAB_005263a8:
      *param_5 = 4;
    }
  }
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    plVar17 = param_2;
joined_r0x005263d0:
    param_2 = plVar17;
    if (param_3 == (long *)0x0) goto LAB_00526474;
LAB_005263d4:
    if (param_3[3] == param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
      if (bVar6 != (iVar7 == -1)) goto LAB_005263f0;
    }
    else if (bVar6 != false) goto LAB_005263f0;
  }
  else {
    if (param_2[3] == param_2[4]) {
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
      bVar6 = iVar7 == -1;
      plVar17 = (long *)0x0;
      if (!bVar6) {
        plVar17 = param_2;
      }
      goto joined_r0x005263d0;
    }
    bVar6 = false;
    if (param_3 != (long *)0x0) goto LAB_005263d4;
LAB_00526474:
    if (bVar6 == false) goto LAB_005263f0;
  }
  *param_5 = *param_5 | 2;
LAB_005263f0:
  if ((long)local_158 < 0) {
    operator_delete(local_168);
  }
  if ((char)local_139 < '\0') {
    operator_delete(local_150);
  }
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return param_2;
  }
LAB_00526564:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00526570  FUN_00526570 =====

long * FUN_00526570(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,uint *param_5,
                   undefined8 param_6)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  __locale_t p_Var8;
  ulong uVar9;
  ulong uVar10;
  undefined8 **ppuVar11;
  undefined8 ****ppppuVar12;
  undefined8 ***pppuVar13;
  undefined8 ****unaff_x23;
  undefined4 local_174;
  undefined8 ***local_170;
  ulong local_168;
  undefined8 local_160;
  undefined8 **local_158;
  void *local_150;
  undefined8 uStack_148;
  long local_140;
  undefined8 ***local_138;
  undefined8 **local_130;
  code *pcStack_128;
  undefined8 local_120;
  undefined1 auStack_8c [28];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  local_150 = (void *)0x0;
  uStack_148 = 0;
  local_140 = 0;
                    /* try { // try from 005265bc to 005265c3 has its CatchHandler @ 00526b50 */
  FUN_00520ce8(&local_158,param_4);
  pppuVar13 = (undefined8 ***)local_158;
  local_120 = 0;
  local_130 = (undefined8 **)&DAT_00d61bf8;
  pcStack_128 = FUN_0053d0c8;
  if (DAT_00d61bf8 != -1) {
    local_170 = &local_130;
    local_138 = &local_170;
                    /* try { // try from 005265fc to 00526653 has its CatchHandler @ 00526b5c */
    FUN_0054698c(&DAT_00d61bf8,&local_138,FUN_005459e0);
  }
  if (((long)DAT_00d61c00 - 1U < (ulong)((long)pppuVar13[3] - (long)pppuVar13[2] >> 3)) &&
     (plVar6 = pppuVar13[2][(long)DAT_00d61c00 - 1U], plVar6 != (long *)0x0)) {
    (**(code **)(*plVar6 + 0x40))(plVar6,"0123456789abcdefABCDEFxX+-pPiInN","pPiInN",auStack_8c);
    pppuVar13 = (undefined8 ***)(local_158 + 1);
    do {
      ppuVar11 = *pppuVar13;
      cVar1 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppuVar13,0x10);
      if (bVar4) {
        *pppuVar13 = (undefined8 **)((long)ppuVar11 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (ppuVar11 == (undefined8 **)0x0) {
      (*(code *)(*local_158)[2])();
    }
    local_170 = (undefined8 ****)0x0;
    local_168 = 0;
    local_160 = 0;
                    /* try { // try from 00526684 to 00526697 has its CatchHandler @ 00526b4c */
    FUN_0054809c(&local_170,0x16,0);
    local_158 = &local_130;
    ppppuVar12 = (undefined8 ****)local_170;
    if (-1 < (long)local_160) {
      ppppuVar12 = &local_170;
    }
    local_174 = 0;
    local_138 = ppppuVar12;
LAB_005266d0:
    plVar6 = param_3;
    if (param_2 == (long *)0x0) {
      bVar4 = true;
      plVar3 = param_2;
joined_r0x00526724:
      param_2 = plVar3;
      if (param_3 != (long *)0x0) goto LAB_005266f4;
LAB_00526728:
      if (bVar4 != false) goto LAB_0052689c;
    }
    else {
      if (param_2[3] == param_2[4]) {
                    /* try { // try from 00526710 to 0052673f has its CatchHandler @ 00526b90 */
        iVar5 = (**(code **)(*param_2 + 0x48))(param_2);
        bVar4 = iVar5 == -1;
        plVar3 = (long *)0x0;
        if (!bVar4) {
          plVar3 = param_2;
        }
        goto joined_r0x00526724;
      }
      bVar4 = false;
      if (param_3 == (long *)0x0) goto LAB_00526728;
LAB_005266f4:
      if (param_3[3] == param_3[4]) {
        iVar5 = (**(code **)(*param_3 + 0x48))(param_3);
        plVar6 = (long *)0x0;
        if (iVar5 != -1) {
          plVar6 = param_3;
        }
        param_3 = plVar6;
        if (bVar4 == (iVar5 == -1)) goto LAB_0052689c;
      }
      else if (bVar4 == false) goto LAB_0052689c;
    }
    uVar7 = local_168;
    if (-1 < (long)local_160) {
      uVar7 = local_160 >> 0x38;
    }
    if ((undefined8 ****)local_138 == (undefined8 ****)((long)ppppuVar12 + uVar7)) {
      if ((long)uVar7 < 1) {
        uVar9 = uVar7 * 2;
        ppppuVar12 = (undefined8 ****)local_170;
        uVar10 = uVar9;
        if (-1 < (long)local_160) {
          if (0x16 < uVar9) {
            if (*(long *)(lVar2 + 0x28) == local_70) {
                    /* try { // try from 00526a84 to 00526aab has its CatchHandler @ 00526bd8 */
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s:%d: assertion %s failed: %s",
                         "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                         "__s < __min_cap",
                         "__s should never be greater than or equal to the short string capacity");
            }
            goto LAB_00526bd0;
          }
          local_160 = CONCAT17((char)uVar9,(undefined7)local_160);
          ppppuVar12 = &local_170;
          uVar10 = local_168;
        }
        local_168 = uVar10;
        *(undefined1 *)((long)ppppuVar12 + uVar9) = 0;
      }
      else {
                    /* try { // try from 00526780 to 005267ef has its CatchHandler @ 00526b8c */
        FUN_0054809c(&local_170,uVar7,0);
      }
      uVar10 = (local_160 & 0x7fffffffffffffff) - 1;
      uVar9 = local_168;
      if (-1 < (long)local_160) {
        uVar10 = 0x16;
        uVar9 = local_160 >> 0x38;
      }
      if (uVar10 < uVar9 || uVar10 - uVar9 == 0) {
        ppppuVar12 = (undefined8 ****)local_170;
        uVar9 = uVar10;
        if (-1 < (long)local_160) {
          if (0x16 < uVar10) {
            if (*(long *)(lVar2 + 0x28) == local_70) {
                    /* try { // try from 00526a48 to 00526a6f has its CatchHandler @ 00526bdc */
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s:%d: assertion %s failed: %s",
                         "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                         "__s < __min_cap",
                         "__s should never be greater than or equal to the short string capacity");
            }
            goto LAB_00526bd0;
          }
          local_160 = CONCAT17((char)uVar10,(undefined7)local_160);
          ppppuVar12 = &local_170;
          uVar9 = local_168;
        }
        local_168 = uVar9;
        *(undefined1 *)((long)ppppuVar12 + uVar10) = 0;
      }
      else {
        FUN_0054809c(&local_170,uVar10 - uVar9,0);
      }
      ppppuVar12 = (undefined8 ****)local_170;
      if (-1 < (long)local_160) {
        ppppuVar12 = &local_170;
      }
      local_138 = (undefined8 ***)((long)ppppuVar12 + uVar7);
    }
    if ((byte *)param_2[3] == (byte *)param_2[4]) {
                    /* try { // try from 0052684c to 00526897 has its CatchHandler @ 00526b90 */
      uVar7 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      uVar7 = (ulong)*(byte *)param_2[3];
    }
    iVar5 = FUN_00526be0(uVar7,0x10,ppppuVar12,&local_138,&local_174,0,&local_150,&local_130,
                         &local_158,auStack_8c);
    param_3 = plVar6;
    if (iVar5 != 0) goto LAB_0052689c;
    if (param_2[3] == param_2[4]) {
      (**(code **)(*param_2 + 0x50))(param_2);
    }
    else {
      param_2[3] = param_2[3] + 1;
    }
    goto LAB_005266d0;
  }
  if (*(long *)(lVar2 + 0x28) != local_70) goto LAB_00526bd0;
                    /* try { // try from 00526afc to 00526aff has its CatchHandler @ 00526b5c */
  FUN_0053cd4c();
LAB_00526b00:
  iVar5 = FUN_0054fdd4(&DAT_00d61ba8);
  if (iVar5 != 0) {
                    /* try { // try from 00526b10 to 00526b23 has its CatchHandler @ 00526b38 */
    p_Var8 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    pppuVar13[0x174] = (undefined8 **)p_Var8;
    FUN_0054ff1c(&DAT_00d61ba8);
  }
LAB_0052691c:
  iVar5 = FUN_00526ee4(unaff_x23,pppuVar13[0x174],&DAT_001e770a,param_6);
  if (iVar5 != 1) {
    *param_5 = 4;
  }
  if (param_2 == (long *)0x0) {
    bVar4 = true;
    plVar6 = param_2;
joined_r0x00526964:
    param_2 = plVar6;
    if (param_3 == (long *)0x0) goto LAB_00526a08;
LAB_00526968:
    if (param_3[3] == param_3[4]) {
      iVar5 = (**(code **)(*param_3 + 0x48))(param_3);
      if (bVar4 != (iVar5 == -1)) goto LAB_00526984;
      goto LAB_00526978;
    }
    if (bVar4 == false) goto LAB_00526978;
  }
  else {
    if (param_2[3] == param_2[4]) {
      iVar5 = (**(code **)(*param_2 + 0x48))(param_2);
      bVar4 = iVar5 == -1;
      plVar6 = (long *)0x0;
      if (!bVar4) {
        plVar6 = param_2;
      }
      goto joined_r0x00526964;
    }
    bVar4 = false;
    if (param_3 != (long *)0x0) goto LAB_00526968;
LAB_00526a08:
    if (bVar4 != false) {
LAB_00526978:
      *param_5 = *param_5 | 2;
    }
  }
LAB_00526984:
  if ((long)local_160 < 0) {
    operator_delete(local_170);
  }
  if (local_140 < 0) {
    operator_delete(local_150);
  }
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return param_2;
  }
LAB_00526bd0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0052689c:
  uVar10 = (long)local_138 - (long)ppppuVar12;
  uVar7 = local_168;
  if (-1 < (long)local_160) {
    uVar7 = local_160 >> 0x38;
  }
  if (uVar10 < uVar7 || uVar10 - uVar7 == 0) {
    ppppuVar12 = (undefined8 ****)local_170;
    uVar7 = uVar10;
    if (-1 < (long)local_160) {
      if (0x16 < uVar10) {
        if (*(long *)(lVar2 + 0x28) == local_70) {
                    /* try { // try from 00526ac0 to 00526ae7 has its CatchHandler @ 00526bd4 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                     "__s < __min_cap",
                     "__s should never be greater than or equal to the short string capacity");
        }
        goto LAB_00526bd0;
      }
      local_160 = CONCAT17((char)uVar10,(undefined7)local_160);
      ppppuVar12 = &local_170;
      uVar7 = local_168;
    }
    local_168 = uVar7;
    *(undefined1 *)((long)ppppuVar12 + uVar10) = 0;
  }
  else {
                    /* try { // try from 005268c0 to 00526a1f has its CatchHandler @ 00526b58 */
    FUN_0054809c(&local_170,uVar10 - uVar7,0);
  }
  pppuVar13 = (undefined8 ***)&DAT_00d61000;
  unaff_x23 = (undefined8 ****)local_170;
  if (-1 < (long)local_160) {
    unaff_x23 = &local_170;
  }
  if ((DAT_00d61ba8 & 1) == 0) goto LAB_00526b00;
  goto LAB_0052691c;
}


// ===== 00526be0  FUN_00526be0 =====

undefined8
FUN_00526be0(char param_1,uint param_2,char *param_3,long *param_4,int *param_5,char param_6,
            long param_7,long param_8,undefined8 *param_9,char *param_10)

{
  ulong uVar1;
  char cVar2;
  char *pcVar3;
  int *piVar4;
  long lVar5;
  char *pcVar6;
  
  pcVar3 = (char *)*param_4;
  if (pcVar3 == param_3) {
    if (param_10[0x18] == param_1) {
      cVar2 = '+';
LAB_00526c80:
      *param_4 = (long)(param_3 + 1);
      *param_3 = cVar2;
      *param_5 = 0;
      return 0;
    }
    if (param_10[0x19] == param_1) {
      cVar2 = '-';
      goto LAB_00526c80;
    }
  }
  uVar1 = *(ulong *)(param_7 + 8);
  if (-1 < (char)*(byte *)(param_7 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_7 + 0x17);
  }
  if ((param_1 == param_6) && (uVar1 != 0)) {
    piVar4 = (int *)*param_9;
    if ((long)piVar4 - param_8 < 0xa0) {
      *piVar4 = *param_5;
      *param_9 = piVar4 + 1;
      *param_5 = 0;
      return 0;
    }
    return 0;
  }
  pcVar6 = param_10;
  if (((((((((*param_10 != param_1) && (pcVar6 = param_10 + 1, param_10[1] != param_1)) &&
           (pcVar6 = param_10 + 2, param_10[2] != param_1)) &&
          ((pcVar6 = param_10 + 3, param_10[3] != param_1 &&
           (pcVar6 = param_10 + 4, param_10[4] != param_1)))) &&
         (pcVar6 = param_10 + 5, param_10[5] != param_1)) &&
        (((pcVar6 = param_10 + 6, param_10[6] != param_1 &&
          (pcVar6 = param_10 + 7, param_10[7] != param_1)) &&
         ((pcVar6 = param_10 + 8, param_10[8] != param_1 &&
          (((pcVar6 = param_10 + 9, param_10[9] != param_1 &&
            (pcVar6 = param_10 + 10, param_10[10] != param_1)) &&
           (pcVar6 = param_10 + 0xb, param_10[0xb] != param_1)))))))) &&
       ((pcVar6 = param_10 + 0xc, param_10[0xc] != param_1 &&
        (pcVar6 = param_10 + 0xd, param_10[0xd] != param_1)))) &&
      (((pcVar6 = param_10 + 0xe, param_10[0xe] != param_1 &&
        (((pcVar6 = param_10 + 0xf, param_10[0xf] != param_1 &&
          (pcVar6 = param_10 + 0x10, param_10[0x10] != param_1)) &&
         ((pcVar6 = param_10 + 0x11, param_10[0x11] != param_1 &&
          (((pcVar6 = param_10 + 0x12, param_10[0x12] != param_1 &&
            (pcVar6 = param_10 + 0x13, param_10[0x13] != param_1)) &&
           (pcVar6 = param_10 + 0x14, param_10[0x14] != param_1)))))))) &&
       (((pcVar6 = param_10 + 0x15, param_10[0x15] != param_1 &&
         (pcVar6 = param_10 + 0x16, param_10[0x16] != param_1)) &&
        (pcVar6 = param_10 + 0x17, param_10[0x17] != param_1)))))) &&
     ((pcVar6 = param_10 + 0x18, param_10[0x18] != param_1 &&
      (pcVar6 = param_10 + 0x19, param_10[0x19] != param_1)))) {
    pcVar6 = param_10 + 0x1a;
  }
  lVar5 = (long)pcVar6 - (long)param_10;
  if (0x17 < lVar5) {
    return 0xffffffff;
  }
  if (param_2 != 8) {
    if (param_2 == 0x10) {
      if (0x15 < lVar5) {
        if (pcVar3 == param_3) {
          return 0xffffffff;
        }
        if (2 < (long)pcVar3 - (long)param_3) {
          return 0xffffffff;
        }
        if (pcVar3[-1] != '0') {
          return 0xffffffff;
        }
        *param_5 = 0;
        cVar2 = "0123456789abcdefABCDEFxX+-pPiInN"[lVar5];
        *param_4 = (long)(pcVar3 + 1);
        *pcVar3 = cVar2;
        return 0;
      }
      goto LAB_00526e74;
    }
    if (param_2 != 10) goto LAB_00526e74;
  }
  if ((long)(ulong)param_2 <= lVar5) {
    return 0xffffffff;
  }
LAB_00526e74:
  cVar2 = "0123456789abcdefABCDEFxX+-pPiInN"[lVar5];
  *param_4 = (long)(pcVar3 + 1);
  *pcVar3 = cVar2;
  *param_5 = *param_5 + 1;
  return 0;
}


// ===== 00526ee4  FUN_00526ee4 =====

int FUN_00526ee4(char *param_1,__locale_t param_2,char *param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  int iVar2;
  __locale_t __dataset;
  long lVar3;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 *local_90;
  undefined1 **ppuStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  local_b8 = param_4;
  uStack_b0 = param_5;
  local_a8 = param_6;
  uStack_a0 = param_7;
  local_98 = param_8;
  __dataset = uselocale(param_2);
  uStack_78 = 0xffffff80ffffffd8;
  local_90 = (undefined1 *)register0x00000008;
  ppuStack_88 = &local_90;
  puStack_80 = auStack_c0;
  iVar2 = vsscanf(param_1,param_3,&local_90);
  if (__dataset != (__locale_t)0x0) {
                    /* try { // try from 00526f80 to 00526f87 has its CatchHandler @ 00526fb8 */
    uselocale(__dataset);
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00526fbc  FUN_00526fbc =====

undefined8
FUN_00526fbc(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined4 *param_5,
            undefined1 *param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 **ppuVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *local_a8;
  undefined8 local_a0;
  undefined8 ***local_98;
  undefined8 **local_90;
  undefined8 *local_88;
  code *pcStack_80;
  long local_78;
  void *local_70 [2];
  char local_59;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  local_a0 = param_2;
  if ((*(byte *)(param_4 + 8) & 1) == 0) {
    local_88 = (undefined8 *)0xffffffffffffffff;
    uVar5 = (**(code **)(*param_1 + 0x20))(param_1,param_2,param_3,param_4,param_5,&local_88);
    if (local_88 == (undefined8 *)0x1) {
      *param_6 = 1;
    }
    else if (local_88 == (undefined8 *)0x0) {
      *param_6 = 0;
    }
    else {
      *param_6 = 1;
      *param_5 = 4;
    }
LAB_00527228:
    if (*(long *)(lVar4 + 0x28) == local_58) {
      return uVar5;
    }
  }
  else {
    FUN_00520ce8(&local_a8,param_4);
    plVar9 = local_a8;
    local_78 = 0;
    local_88 = &DAT_00d61be8;
    pcStack_80 = FUN_0053d0c8;
    if (DAT_00d61be8 != -1) {
      local_90 = &local_88;
      local_98 = &local_90;
                    /* try { // try from 00527080 to 00527097 has its CatchHandler @ 005272e0 */
      FUN_0054698c(&DAT_00d61be8,&local_98,FUN_005459e0);
    }
    lVar8 = plVar9[2];
    if (((long)DAT_00d61bf0 - 1U < (ulong)(plVar9[3] - lVar8 >> 3)) &&
       (lVar8 = *(long *)(lVar8 + ((long)DAT_00d61bf0 - 1U) * 8), lVar8 != 0)) {
      plVar9 = local_a8 + 1;
      do {
        lVar7 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*local_a8 + 0x10))();
      }
      FUN_00520ce8(&local_a8,param_4);
      plVar9 = local_a8;
      local_78 = 0;
      local_88 = &DAT_00d61c78;
      pcStack_80 = FUN_0053d0c8;
      if (DAT_00d61c78 != -1) {
        local_90 = &local_88;
        local_98 = &local_90;
                    /* try { // try from 0052711c to 00527133 has its CatchHandler @ 005272c0 */
        FUN_0054698c(&DAT_00d61c78,&local_98,FUN_005459e0);
      }
      lVar7 = plVar9[2];
      if (((long)DAT_00d61c80 - 1U < (ulong)(plVar9[3] - lVar7 >> 3)) &&
         (plVar9 = *(long **)(lVar7 + ((long)DAT_00d61c80 - 1U) * 8), plVar9 != (long *)0x0)) {
        plVar1 = local_a8 + 1;
        do {
          lVar7 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*local_a8 + 0x10))();
        }
                    /* try { // try from 00527188 to 00527197 has its CatchHandler @ 005272b8 */
        (**(code **)(*plVar9 + 0x30))(&local_88,plVar9);
                    /* try { // try from 005271a4 to 005271ab has its CatchHandler @ 005272a0 */
        (**(code **)(*plVar9 + 0x38))(local_70,plVar9);
                    /* try { // try from 005271b4 to 005271cf has its CatchHandler @ 00527280 */
        ppuVar6 = (undefined8 **)FUN_00527328(&local_a0,param_3,&local_88,&local_58,lVar8,param_5,1)
        ;
        uVar5 = local_a0;
        *param_6 = ppuVar6 == &local_88;
        if (local_59 < '\0') {
          operator_delete(local_70[0]);
        }
        if (local_78 < 0) {
          operator_delete(local_88);
        }
        goto LAB_00527228;
      }
    }
    else {
      if (*(long *)(lVar4 + 0x28) != local_58) goto LAB_00527324;
                    /* try { // try from 00527268 to 0052726b has its CatchHandler @ 005272e0 */
      FUN_0053cd4c();
    }
    if (*(long *)(lVar4 + 0x28) == local_58) {
                    /* try { // try from 0052727c to 0052727f has its CatchHandler @ 005272c0 */
      uVar5 = FUN_0053cd4c();
                    /* catch() { ... } // from try @ 005271b4 with catch @ 00527280 */
      if (local_59 < '\0') {
        operator_delete(local_70[0]);
      }
      if (local_78 < 0) {
        operator_delete(local_88);
      }
      if (*(long *)(lVar4 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00d0fa5c(uVar5);
      }
    }
  }
LAB_00527324:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00527328  FUN_00527328 =====

long * FUN_00527328(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5,
                   uint *param_6,uint param_7)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  undefined1 uVar15;
  long lVar16;
  undefined1 *puVar17;
  byte *pbVar18;
  long lVar19;
  ulong __size;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  undefined1 auVar41 [16];
  byte bVar44;
  undefined8 uVar42;
  byte bVar45;
  undefined1 auVar43 [16];
  undefined1 auVar46 [16];
  byte bVar49;
  undefined8 uVar47;
  undefined1 auVar48 [16];
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  long *local_148;
  long *local_128;
  long local_114 [12];
  long local_b0;
  
  lVar4 = tpidr_el0;
  __size = ((long)param_4 - (long)param_3 >> 3) * -0x5555555555555555;
  local_b0 = *(long *)(lVar4 + 0x28);
  if (100 < __size) {
    local_148 = (long *)malloc(__size);
    local_128 = local_148;
    if (local_148 != (long *)0x0) goto LAB_005273d0;
    if (*(long *)(lVar4 + 0x28) != local_b0) goto LAB_00527ae0;
    FUN_00546ac8();
  }
  local_128 = local_114;
  local_148 = (long *)0x0;
LAB_005273d0:
  if (param_3 == param_4) {
    lVar19 = 0;
  }
  else {
    uVar13 = ((long)param_4 - (long)param_3) - 0x18;
    plVar14 = param_3;
    plVar12 = local_128;
    if (uVar13 < 0x120) {
      lVar19 = 0;
    }
    else {
      uVar13 = uVar13 / 0x18;
      if ((local_128 < param_3 + uVar13 * 3 + 3) &&
         (param_3 + 1 < (long *)((long)local_128 + uVar13 + 1))) {
        lVar19 = 0;
      }
      else {
        lVar19 = 0;
        uVar1 = uVar13 + 1 & 7;
        uVar2 = 8;
        if (uVar1 != 0) {
          uVar2 = uVar1;
        }
        lVar16 = (uVar13 + 1) - uVar2;
        lVar20 = 0;
        lVar21 = 0;
        plVar14 = param_3 + lVar16 * 3;
        plVar12 = (long *)((long)local_128 + lVar16);
        lVar22 = 0;
        lVar23 = 0;
        puVar17 = (undefined1 *)((long)local_128 + 4);
        lVar24 = 0;
        lVar25 = 0;
        lVar26 = 0;
        lVar27 = 0;
        lVar35 = 0;
        lVar36 = 0;
        lVar37 = 0;
        lVar38 = 0;
        lVar39 = 0;
        lVar40 = 0;
        pbVar18 = (byte *)((long)param_3 + 0x5f);
        do {
          lVar16 = lVar16 + -8;
          uVar52 = *(undefined8 *)(pbVar18 + -0x27);
          uVar53 = *(undefined8 *)(pbVar18 + -0xf);
          uVar28 = *(undefined8 *)(pbVar18 + 9);
          uVar29 = *(undefined8 *)(pbVar18 + 0x21);
          uVar50 = *(undefined8 *)(pbVar18 + -0x57);
          uVar51 = *(undefined8 *)(pbVar18 + -0x3f);
          uVar42 = NEON_cmlt(CONCAT26((short)(char)*pbVar18,
                                      CONCAT24((short)(char)pbVar18[-0x18],
                                               CONCAT22((short)(char)pbVar18[-0x30],
                                                        (short)(char)pbVar18[-0x48]))),0,2);
          uVar47 = NEON_cmlt(CONCAT26((short)(char)pbVar18[0x60],
                                      CONCAT24((short)(char)pbVar18[0x48],
                                               CONCAT22((short)(char)pbVar18[0x30],
                                                        (short)(char)pbVar18[0x18]))),0,2);
          bVar7 = (byte)uVar42;
          bVar49 = (byte)((ulong)uVar42 >> 0x20);
          uVar33 = *(undefined8 *)(pbVar18 + 0x39);
          uVar34 = *(undefined8 *)(pbVar18 + 0x51);
          bVar6 = (byte)uVar47;
          bVar5 = (byte)((ulong)uVar47 >> 0x20);
          bVar45 = (byte)((ulong)uVar42 >> 0x30);
          bVar30 = (char)bVar6 >> 7;
          bVar31 = (byte)((ulong)uVar47 >> 0x10);
          bVar32 = (char)bVar31 >> 7;
          bVar44 = (char)bVar49 >> 7;
          auVar43[1] = (byte)((ulong)uVar52 >> 8) & bVar44;
          auVar43[2] = (byte)((ulong)uVar52 >> 0x10) & bVar44;
          auVar43[3] = (byte)((ulong)uVar52 >> 0x18) & bVar44;
          auVar43[4] = (byte)((ulong)uVar52 >> 0x20) & bVar44;
          auVar43[5] = (byte)((ulong)uVar52 >> 0x28) & bVar44;
          auVar43[6] = (byte)((ulong)uVar52 >> 0x30) & bVar44;
          auVar43[7] = (byte)((ulong)uVar52 >> 0x38) & bVar44;
          bVar44 = (char)bVar45 >> 7;
          auVar43[9] = (byte)((ulong)uVar53 >> 8) & bVar44;
          auVar43[10] = (byte)((ulong)uVar53 >> 0x10) & bVar44;
          auVar43[0xb] = (byte)((ulong)uVar53 >> 0x18) & bVar44;
          auVar43[0xc] = (byte)((ulong)uVar53 >> 0x20) & bVar44;
          auVar43[0xd] = (byte)((ulong)uVar53 >> 0x28) & bVar44;
          auVar43[0xe] = (byte)((ulong)uVar53 >> 0x30) & bVar44;
          auVar43[0xf] = (byte)((ulong)uVar53 >> 0x38) & bVar44;
          bVar54 = (char)bVar7 >> 7;
          bVar55 = (byte)((ulong)uVar42 >> 0x10);
          bVar56 = (char)bVar55 >> 7;
          bVar44 = (byte)((ulong)uVar47 >> 0x30);
          auVar43[0] = (byte)uVar52 & bVar49 | pbVar18[-0x18] & ~bVar49;
          auVar43[8] = (byte)uVar53 & bVar45 | *pbVar18 & ~bVar45;
          auVar46[0] = (byte)uVar28 & bVar6 | pbVar18[0x18] & ~bVar6;
          auVar46[1] = (byte)((ulong)uVar28 >> 8) & bVar30;
          auVar46[2] = (byte)((ulong)uVar28 >> 0x10) & bVar30;
          auVar46[3] = (byte)((ulong)uVar28 >> 0x18) & bVar30;
          auVar46[4] = (byte)((ulong)uVar28 >> 0x20) & bVar30;
          auVar46[5] = (byte)((ulong)uVar28 >> 0x28) & bVar30;
          auVar46[6] = (byte)((ulong)uVar28 >> 0x30) & bVar30;
          auVar46[7] = (byte)((ulong)uVar28 >> 0x38) & bVar30;
          auVar46[8] = (byte)uVar29 & bVar31 | pbVar18[0x30] & ~bVar31;
          auVar46[9] = (byte)((ulong)uVar29 >> 8) & bVar32;
          auVar46[10] = (byte)((ulong)uVar29 >> 0x10) & bVar32;
          auVar46[0xb] = (byte)((ulong)uVar29 >> 0x18) & bVar32;
          auVar46[0xc] = (byte)((ulong)uVar29 >> 0x20) & bVar32;
          auVar46[0xd] = (byte)((ulong)uVar29 >> 0x28) & bVar32;
          auVar46[0xe] = (byte)((ulong)uVar29 >> 0x30) & bVar32;
          auVar46[0xf] = (byte)((ulong)uVar29 >> 0x38) & bVar32;
          bVar49 = (char)bVar5 >> 7;
          auVar48[1] = (byte)((ulong)uVar33 >> 8) & bVar49;
          auVar48[2] = (byte)((ulong)uVar33 >> 0x10) & bVar49;
          auVar48[3] = (byte)((ulong)uVar33 >> 0x18) & bVar49;
          auVar48[4] = (byte)((ulong)uVar33 >> 0x20) & bVar49;
          auVar48[5] = (byte)((ulong)uVar33 >> 0x28) & bVar49;
          auVar48[6] = (byte)((ulong)uVar33 >> 0x30) & bVar49;
          auVar48[7] = (byte)((ulong)uVar33 >> 0x38) & bVar49;
          bVar49 = (char)bVar44 >> 7;
          auVar48[9] = (byte)((ulong)uVar34 >> 8) & bVar49;
          auVar48[10] = (byte)((ulong)uVar34 >> 0x10) & bVar49;
          auVar48[0xb] = (byte)((ulong)uVar34 >> 0x18) & bVar49;
          auVar48[0xc] = (byte)((ulong)uVar34 >> 0x20) & bVar49;
          auVar48[0xd] = (byte)((ulong)uVar34 >> 0x28) & bVar49;
          auVar48[0xe] = (byte)((ulong)uVar34 >> 0x30) & bVar49;
          auVar48[0xf] = (byte)((ulong)uVar34 >> 0x38) & bVar49;
          auVar41[0] = (byte)uVar50 & bVar7 | pbVar18[-0x48] & ~bVar7;
          auVar41[1] = (byte)((ulong)uVar50 >> 8) & bVar54;
          auVar41[2] = (byte)((ulong)uVar50 >> 0x10) & bVar54;
          auVar41[3] = (byte)((ulong)uVar50 >> 0x18) & bVar54;
          auVar41[4] = (byte)((ulong)uVar50 >> 0x20) & bVar54;
          auVar41[5] = (byte)((ulong)uVar50 >> 0x28) & bVar54;
          auVar41[6] = (byte)((ulong)uVar50 >> 0x30) & bVar54;
          auVar41[7] = (byte)((ulong)uVar50 >> 0x38) & bVar54;
          auVar41[8] = (byte)uVar51 & bVar55 | pbVar18[-0x30] & ~bVar55;
          auVar41[9] = (byte)((ulong)uVar51 >> 8) & bVar56;
          auVar41[10] = (byte)((ulong)uVar51 >> 0x10) & bVar56;
          auVar41[0xb] = (byte)((ulong)uVar51 >> 0x18) & bVar56;
          auVar41[0xc] = (byte)((ulong)uVar51 >> 0x20) & bVar56;
          auVar41[0xd] = (byte)((ulong)uVar51 >> 0x28) & bVar56;
          auVar41[0xe] = (byte)((ulong)uVar51 >> 0x30) & bVar56;
          auVar41[0xf] = (byte)((ulong)uVar51 >> 0x38) & bVar56;
          auVar48[0] = (byte)uVar33 & bVar5 | pbVar18[0x48] & ~bVar5;
          auVar48[8] = (byte)uVar34 & bVar44 | pbVar18[0x60] & ~bVar44;
          auVar43 = NEON_cmeq(auVar43,0,8);
          auVar41 = NEON_cmeq(auVar41,0,8);
          auVar48 = NEON_cmeq(auVar48,0,8);
          auVar46 = NEON_cmeq(auVar46,0,8);
          lVar35 = lVar35 + auVar43._0_8_;
          lVar36 = lVar36 + auVar43._8_8_;
          __size = __size + auVar41._0_8_;
          lVar19 = lVar19 + auVar41._8_8_;
          uVar28 = NEON_bsl(CONCAT26(auVar43._8_2_,
                                     CONCAT24(auVar43._0_2_,CONCAT22(auVar41._8_2_,auVar41._0_2_))),
                            0x2000200020002,0x1000100010001,1);
          uVar29 = NEON_bsl(CONCAT26(auVar48._8_2_,
                                     CONCAT24(auVar48._0_2_,CONCAT22(auVar46._8_2_,auVar46._0_2_))),
                            0x2000200020002,0x1000100010001,1);
          lVar39 = lVar39 + auVar48._0_8_;
          lVar40 = lVar40 + auVar48._8_8_;
          lVar37 = lVar37 + auVar46._0_8_;
          lVar38 = lVar38 + auVar46._8_8_;
          lVar22 = lVar22 - auVar43._0_8_;
          lVar23 = lVar23 - auVar43._8_8_;
          lVar20 = lVar20 - auVar41._0_8_;
          lVar21 = lVar21 - auVar41._8_8_;
          lVar26 = lVar26 - auVar48._0_8_;
          lVar27 = lVar27 - auVar48._8_8_;
          lVar24 = lVar24 - auVar46._0_8_;
          lVar25 = lVar25 - auVar46._8_8_;
          *(ulong *)(puVar17 + -4) =
               CONCAT44(CONCAT13((char)((ulong)uVar29 >> 0x30),
                                 CONCAT12((char)((ulong)uVar29 >> 0x20),
                                          CONCAT11((char)((ulong)uVar29 >> 0x10),(char)uVar29))),
                        CONCAT13((char)((ulong)uVar28 >> 0x30),
                                 CONCAT12((char)((ulong)uVar28 >> 0x20),
                                          CONCAT11((char)((ulong)uVar28 >> 0x10),(char)uVar28))));
          puVar17 = puVar17 + 8;
          pbVar18 = pbVar18 + 0xc0;
        } while (lVar16 != 0);
        __size = lVar37 + __size + lVar39 + lVar35 + lVar38 + lVar19 + lVar40 + lVar36;
        lVar19 = lVar24 + lVar20 + lVar26 + lVar22 + lVar25 + lVar21 + lVar27 + lVar23;
      }
    }
    do {
      plVar3 = plVar14 + 3;
      uVar13 = plVar14[1];
      if (-1 < (char)*(byte *)((long)plVar14 + 0x17)) {
        uVar13 = (ulong)*(byte *)((long)plVar14 + 0x17);
      }
      uVar15 = 1;
      if (uVar13 == 0) {
        uVar15 = 2;
        lVar19 = lVar19 + 1;
      }
      __size = __size - (uVar13 == 0);
      *(undefined1 *)plVar12 = uVar15;
      plVar14 = plVar3;
      plVar12 = (long *)((long)plVar12 + 1);
    } while (plVar3 != param_4);
  }
  uVar13 = 0;
  plVar12 = (long *)*param_1;
  if (plVar12 != (long *)0x0) goto LAB_005276b0;
LAB_00527700:
  bVar8 = true;
  plVar12 = param_2;
  if (param_2 == (long *)0x0) goto LAB_005276f8;
LAB_00527708:
  if ((int *)plVar12[3] == (int *)plVar12[4]) {
    iVar10 = (**(code **)(*plVar12 + 0x48))(plVar12);
  }
  else {
    iVar10 = *(int *)plVar12[3];
  }
  bVar9 = iVar10 == -1;
  param_2 = (long *)0x0;
  if (!bVar9) {
    param_2 = plVar12;
  }
  do {
    plVar12 = (long *)*param_1;
    if ((bVar8 == bVar9) || (__size == 0)) {
      if (plVar12 == (long *)0x0) {
joined_r0x00527948:
        bVar8 = true;
        bVar9 = true;
        if (param_2 != (long *)0x0) goto LAB_00527978;
LAB_00527a64:
        if (bVar9) goto LAB_005279b0;
      }
      else {
        if ((int *)plVar12[3] == (int *)plVar12[4]) {
                    /* try { // try from 00527958 to 0052799b has its CatchHandler @ 00527aa8 */
          iVar10 = (**(code **)(*plVar12 + 0x48))();
        }
        else {
          iVar10 = *(int *)plVar12[3];
        }
        if (iVar10 == -1) {
          *param_1 = 0;
          goto joined_r0x00527948;
        }
        bVar8 = *param_1 == 0;
        bVar9 = bVar8;
        if (param_2 == (long *)0x0) goto LAB_00527a64;
LAB_00527978:
        if ((int *)param_2[3] == (int *)param_2[4]) {
          iVar10 = (**(code **)(*param_2 + 0x48))(param_2);
        }
        else {
          iVar10 = *(int *)param_2[3];
        }
        if (!(bool)(bVar8 ^ iVar10 == -1)) {
LAB_005279b0:
          *param_6 = *param_6 | 2;
        }
      }
      if (param_3 == param_4) goto LAB_005279ec;
      break;
    }
    if ((int *)plVar12[3] == (int *)plVar12[4]) {
                    /* try { // try from 0052776c to 0052778f has its CatchHandler @ 00527ab4 */
      iVar10 = (**(code **)(*plVar12 + 0x48))();
    }
    else {
      iVar10 = *(int *)plVar12[3];
    }
    if ((param_7 & 1) == 0) {
      iVar10 = (**(code **)(*param_5 + 0x38))(param_5,iVar10);
    }
    if (param_3 == param_4) {
LAB_005276a4:
      plVar12 = (long *)*param_1;
    }
    else {
      bVar8 = false;
      plVar12 = param_3;
      plVar14 = local_128;
      do {
        if ((char)*plVar14 == '\x01') {
          bVar49 = *(byte *)((long)plVar12 + 0x17);
          uVar1 = plVar12[1];
          if (-1 < (char)bVar49) {
            uVar1 = (ulong)bVar49;
          }
          if (uVar1 < uVar13) {
            if (*(long *)(lVar4 + 0x28) == local_b0) {
                    /* try { // try from 00527a80 to 00527aa7 has its CatchHandler @ 00527ae4 */
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s:%d: assertion %s failed: %s",
                         "../../discord_common/native/third_party/llvm/libcxx/include/string",0xd4e,
                         "__pos <= size()","string index out of bounds");
            }
            goto LAB_00527ae0;
          }
          plVar3 = (long *)*plVar12;
          if (-1 < (char)bVar49) {
            plVar3 = plVar12;
          }
          iVar11 = *(int *)((long)plVar3 + uVar13 * 4);
          if ((param_7 & 1) == 0) {
                    /* try { // try from 00527814 to 0052781f has its CatchHandler @ 00527ab8 */
            iVar11 = (**(code **)(*param_5 + 0x38))(param_5);
          }
          if (iVar10 == iVar11) {
            uVar1 = plVar12[1];
            if (-1 < (char)*(byte *)((long)plVar12 + 0x17)) {
              uVar1 = (ulong)*(byte *)((long)plVar12 + 0x17);
            }
            if (uVar1 == uVar13 + 1) {
              __size = __size - 1;
              lVar19 = lVar19 + 1;
              bVar8 = true;
              *(undefined1 *)plVar14 = 2;
            }
            else {
              bVar8 = true;
            }
          }
          else {
            __size = __size - 1;
            *(undefined1 *)plVar14 = 0;
          }
        }
        plVar12 = plVar12 + 3;
        plVar14 = (long *)((long)plVar14 + 1);
      } while (plVar12 != param_4);
      if (bVar8) {
        plVar12 = (long *)*param_1;
        if (plVar12[3] == plVar12[4]) {
                    /* try { // try from 005278a8 to 005278ab has its CatchHandler @ 00527aac */
          (**(code **)(*plVar12 + 0x50))();
        }
        else {
          plVar12[3] = plVar12[3] + 4;
        }
        if ((1 < lVar19 + __size) && (param_3 != param_4)) {
          plVar12 = param_3;
          plVar14 = local_128;
          do {
            if ((char)*plVar14 == '\x02') {
              uVar1 = plVar12[1];
              if (-1 < (char)*(byte *)((long)plVar12 + 0x17)) {
                uVar1 = (ulong)*(byte *)((long)plVar12 + 0x17);
              }
              if (uVar1 != uVar13 + 1) {
                lVar19 = lVar19 + -1;
                *(undefined1 *)plVar14 = 0;
              }
            }
            plVar12 = plVar12 + 3;
            plVar14 = (long *)((long)plVar14 + 1);
          } while (plVar12 != param_4);
        }
        goto LAB_005276a4;
      }
      plVar12 = (long *)*param_1;
    }
    uVar13 = uVar13 + 1;
    if (plVar12 == (long *)0x0) goto LAB_00527700;
LAB_005276b0:
    if ((int *)plVar12[3] == (int *)plVar12[4]) {
                    /* try { // try from 005276cc to 0052772b has its CatchHandler @ 00527ab0 */
      iVar10 = (**(code **)(*plVar12 + 0x48))();
    }
    else {
      iVar10 = *(int *)plVar12[3];
    }
    if (iVar10 == -1) {
      bVar8 = true;
      *param_1 = 0;
    }
    else {
      bVar8 = *param_1 == 0;
    }
    plVar12 = param_2;
    if (param_2 != (long *)0x0) goto LAB_00527708;
LAB_005276f8:
    bVar9 = true;
  } while( true );
  while( true ) {
    local_128 = (long *)((long)local_128 + 1);
    param_3 = param_3 + 3;
    if (param_3 == param_4) break;
    if ((char)*local_128 == '\x02') goto joined_r0x00527a4c;
  }
LAB_005279ec:
  *param_6 = *param_6 | 4;
  param_3 = param_4;
joined_r0x00527a4c:
  if (local_148 != (long *)0x0) {
    free(local_148);
  }
  if (*(long *)(lVar4 + 0x28) == local_b0) {
    return param_3;
  }
LAB_00527ae0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00527ae8  thunk_FUN_00527aec =====

long * thunk_FUN_00527aec(undefined8 param_1,long *param_2,long *param_3,long param_4,uint *param_5,
                         undefined8 *param_6)

{
  uint uVar1;
  byte *******pppppppbVar2;
  long *plVar3;
  byte bVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint *puVar12;
  undefined8 *******pppppppuVar13;
  byte *******pppppppbVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  undefined4 uVar18;
  uint uStack_1c4;
  uint *puStack_1c0;
  undefined8 ******ppppppuStack_1b8;
  undefined8 ******ppppppuStack_1b0;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  byte ******ppppppbStack_198;
  ulong uStack_190;
  byte bStack_181;
  undefined4 uStack_17c;
  uint auStack_178 [40];
  undefined1 auStack_d8 [104];
  long lStack_70;
  
  lVar5 = tpidr_el0;
  lStack_70 = *(long *)(lVar5 + 0x28);
  uVar1 = *(uint *)(param_4 + 8) & 0x4a;
  if (uVar1 == 0) {
    uVar18 = 0;
  }
  else if (uVar1 == 0x40) {
    uVar18 = 8;
  }
  else if (uVar1 == 8) {
    uVar18 = 0x10;
  }
  else {
    uVar18 = 10;
  }
  uVar8 = FUN_0052c850(param_1,param_4,auStack_d8);
  FUN_0052c6e0(&ppppppbStack_198,param_4,&uStack_17c);
  ppppppuStack_1b0 = (undefined8 *******)0x0;
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  FUN_0054809c(&ppppppuStack_1b0,0x16,0);
  puStack_1c0 = auStack_178;
  uStack_1c4 = 0;
  pppppppuVar13 = (undefined8 *******)ppppppuStack_1b0;
  ppppppuStack_1b8 = ppppppuStack_1b0;
  if (-1 < (long)uStack_1a0) {
    pppppppuVar13 = &ppppppuStack_1b0;
    ppppppuStack_1b8 = &ppppppuStack_1b0;
  }
LAB_00527bd8:
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    if (param_3 != (long *)0x0) goto LAB_00527c20;
LAB_00527bf8:
    if (bVar6 != false) goto LAB_00527da0;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar7 = *(int *)param_2[3];
    }
    bVar6 = iVar7 == -1;
    plVar3 = (long *)0x0;
    if (!bVar6) {
      plVar3 = param_2;
    }
    param_2 = plVar3;
    if (param_3 == (long *)0x0) goto LAB_00527bf8;
LAB_00527c20:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar7 = *(int *)param_3[3];
    }
    plVar3 = (long *)0x0;
    if (iVar7 != -1) {
      plVar3 = param_3;
    }
    param_3 = plVar3;
    if (bVar6 == (iVar7 == -1)) goto LAB_00527da0;
  }
  uVar9 = uStack_1a8;
  if (-1 < (long)uStack_1a0) {
    uVar9 = uStack_1a0 >> 0x38;
  }
  if ((undefined8 *******)ppppppuStack_1b8 == (undefined8 *******)((long)pppppppuVar13 + uVar9)) {
    if ((long)uVar9 < 1) {
      uVar10 = uVar9 * 2;
      pppppppuVar13 = (undefined8 *******)ppppppuStack_1b0;
      uVar11 = uVar10;
      if (-1 < (long)uStack_1a0) {
        if (0x16 < uVar10) {
          if (*(long *)(lVar5 + 0x28) == lStack_70) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_005280b4;
        }
        uStack_1a0 = CONCAT17((char)uVar10,(undefined7)uStack_1a0);
        pppppppuVar13 = &ppppppuStack_1b0;
        uVar11 = uStack_1a8;
      }
      uStack_1a8 = uVar11;
      *(undefined1 *)((long)pppppppuVar13 + uVar10) = 0;
    }
    else {
      FUN_0054809c(&ppppppuStack_1b0,uVar9,0);
    }
    uVar11 = (uStack_1a0 & 0x7fffffffffffffff) - 1;
    uVar10 = uStack_1a8;
    if (-1 < (long)uStack_1a0) {
      uVar11 = 0x16;
      uVar10 = uStack_1a0 >> 0x38;
    }
    if (uVar11 < uVar10 || uVar11 - uVar10 == 0) {
      pppppppuVar13 = (undefined8 *******)ppppppuStack_1b0;
      uVar10 = uVar11;
      if (-1 < (long)uStack_1a0) {
        if (0x16 < uVar11) {
          if (*(long *)(lVar5 + 0x28) == lStack_70) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_005280b4;
        }
        uStack_1a0 = CONCAT17((char)uVar11,(undefined7)uStack_1a0);
        pppppppuVar13 = &ppppppuStack_1b0;
        uVar10 = uStack_1a8;
      }
      uStack_1a8 = uVar10;
      *(undefined1 *)((long)pppppppuVar13 + uVar11) = 0;
    }
    else {
      FUN_0054809c(&ppppppuStack_1b0,uVar11 - uVar10,0);
    }
    pppppppuVar13 = (undefined8 *******)ppppppuStack_1b0;
    if (-1 < (long)uStack_1a0) {
      pppppppuVar13 = &ppppppuStack_1b0;
    }
    ppppppuStack_1b8 = (undefined8 ******)((long)pppppppuVar13 + uVar9);
  }
  if ((uint *)param_2[3] == (uint *)param_2[4]) {
    uVar9 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    uVar9 = (ulong)*(uint *)param_2[3];
  }
  iVar7 = FUN_0052b564(uVar9,uVar18,pppppppuVar13,&ppppppuStack_1b8,&uStack_1c4,uStack_17c,
                       &ppppppbStack_198,auStack_178,&puStack_1c0,uVar8);
  if (iVar7 != 0) goto LAB_00527da0;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 4;
  }
  goto LAB_00527bd8;
LAB_00527da0:
  uVar9 = uStack_190;
  if (-1 < (char)bStack_181) {
    uVar9 = (ulong)bStack_181;
  }
  if ((uVar9 != 0) && ((long)puStack_1c0 - (long)auStack_178 < 0xa0)) {
    *puStack_1c0 = uStack_1c4;
    puStack_1c0 = puStack_1c0 + 1;
  }
  uVar8 = FUN_00545a04(pppppppuVar13,ppppppuStack_1b8,param_5,uVar18);
  uVar11 = (ulong)(uint)(int)(char)bStack_181;
  uVar9 = uStack_190;
  if (-1 < (char)bStack_181) {
    uVar9 = (ulong)bStack_181;
  }
  *param_6 = uVar8;
  if ((4 < (long)puStack_1c0 - (long)auStack_178) && (uVar9 != 0)) {
    puVar12 = puStack_1c0 + -1;
    if ((auStack_178 != puStack_1c0) && (auStack_178 < puVar12)) {
      puVar17 = auStack_178;
      puVar15 = puVar12;
      do {
        puVar17 = puVar17 + 1;
        uVar1 = puVar17[-1];
        puVar17[-1] = *puVar15;
        puVar16 = puVar15 + -1;
        *puVar15 = uVar1;
        puVar15 = puVar16;
      } while (puVar17 < puVar16);
      uVar11 = (ulong)bStack_181;
    }
    pppppppbVar2 = (byte *******)ppppppbStack_198;
    if (-1 < (char)uVar11) {
      pppppppbVar2 = &ppppppbStack_198;
    }
    pppppppbVar14 = pppppppbVar2;
    if (auStack_178 < puVar12) {
      if (-1 < (char)uVar11) {
        uStack_190 = uVar11 & 0xff;
      }
      puVar17 = auStack_178;
      do {
        bVar4 = *(byte *)pppppppbVar14;
        if (((bVar4 != 0) && (bVar4 != 0xff)) && (*puVar17 != (uint)bVar4)) goto LAB_00527efc;
        puVar17 = puVar17 + 1;
        if (1 < (long)((long)pppppppbVar2 + (uStack_190 - (long)pppppppbVar14))) {
          pppppppbVar14 = (byte *******)((long)pppppppbVar14 + 1);
        }
      } while (puVar17 < puVar12);
    }
    bVar4 = *(byte *)pppppppbVar14;
    if (((bVar4 != 0) && (bVar4 != 0xff)) && ((uint)bVar4 <= *puVar12 - 1)) {
LAB_00527efc:
      *param_5 = 4;
    }
  }
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    if (param_3 != (long *)0x0) goto LAB_00527f4c;
LAB_00527f24:
    if (!bVar6) goto LAB_00527f8c;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar7 = *(int *)param_2[3];
    }
    bVar6 = iVar7 == -1;
    plVar3 = (long *)0x0;
    if (!bVar6) {
      plVar3 = param_2;
    }
    param_2 = plVar3;
    if (param_3 == (long *)0x0) goto LAB_00527f24;
LAB_00527f4c:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar7 = *(int *)param_3[3];
    }
    if (bVar6 != (iVar7 == -1)) goto LAB_00527f8c;
  }
  *param_5 = *param_5 | 2;
LAB_00527f8c:
  if ((long)uStack_1a0 < 0) {
    operator_delete(ppppppuStack_1b0);
  }
  if ((char)bStack_181 < '\0') {
    operator_delete(ppppppbStack_198);
  }
  if (*(long *)(lVar5 + 0x28) == lStack_70) {
    return param_2;
  }
LAB_005280b4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00527aec  FUN_00527aec =====

long * FUN_00527aec(undefined8 param_1,long *param_2,long *param_3,long param_4,uint *param_5,
                   undefined8 *param_6)

{
  uint uVar1;
  byte *******pppppppbVar2;
  long *plVar3;
  byte bVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint *puVar12;
  undefined8 *******pppppppuVar13;
  byte *******pppppppbVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  undefined4 uVar18;
  uint local_1c4;
  uint *local_1c0;
  undefined8 ******local_1b8;
  undefined8 ******local_1b0;
  ulong local_1a8;
  undefined8 local_1a0;
  byte ******local_198;
  ulong local_190;
  byte local_181;
  undefined4 local_17c;
  uint local_178 [40];
  undefined1 auStack_d8 [104];
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  uVar1 = *(uint *)(param_4 + 8) & 0x4a;
  if (uVar1 == 0) {
    uVar18 = 0;
  }
  else if (uVar1 == 0x40) {
    uVar18 = 8;
  }
  else if (uVar1 == 8) {
    uVar18 = 0x10;
  }
  else {
    uVar18 = 10;
  }
  uVar8 = FUN_0052c850(param_1,param_4,auStack_d8);
  FUN_0052c6e0(&local_198,param_4,&local_17c);
  local_1b0 = (undefined8 *******)0x0;
  local_1a8 = 0;
  local_1a0 = 0;
                    /* try { // try from 00527b94 to 00527ba7 has its CatchHandler @ 00528068 */
  FUN_0054809c(&local_1b0,0x16,0);
  local_1c0 = local_178;
  local_1c4 = 0;
  pppppppuVar13 = (undefined8 *******)local_1b0;
  local_1b8 = local_1b0;
  if (-1 < (long)local_1a0) {
    pppppppuVar13 = &local_1b0;
    local_1b8 = &local_1b0;
  }
LAB_00527bd8:
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    if (param_3 != (long *)0x0) goto LAB_00527c20;
LAB_00527bf8:
    if (bVar6 != false) goto LAB_00527da0;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
                    /* try { // try from 00527c08 to 00527c43 has its CatchHandler @ 00528074 */
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar7 = *(int *)param_2[3];
    }
    bVar6 = iVar7 == -1;
    plVar3 = (long *)0x0;
    if (!bVar6) {
      plVar3 = param_2;
    }
    param_2 = plVar3;
    if (param_3 == (long *)0x0) goto LAB_00527bf8;
LAB_00527c20:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar7 = *(int *)param_3[3];
    }
    plVar3 = (long *)0x0;
    if (iVar7 != -1) {
      plVar3 = param_3;
    }
    param_3 = plVar3;
    if (bVar6 == (iVar7 == -1)) goto LAB_00527da0;
  }
  uVar9 = local_1a8;
  if (-1 < (long)local_1a0) {
    uVar9 = local_1a0 >> 0x38;
  }
  if ((undefined8 *******)local_1b8 == (undefined8 *******)((long)pppppppuVar13 + uVar9)) {
    if ((long)uVar9 < 1) {
      uVar10 = uVar9 * 2;
      pppppppuVar13 = (undefined8 *******)local_1b0;
      uVar11 = uVar10;
      if (-1 < (long)local_1a0) {
        if (0x16 < uVar10) {
          if (*(long *)(lVar5 + 0x28) == local_70) {
                    /* try { // try from 00528040 to 00528067 has its CatchHandler @ 005280b8 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_005280b4;
        }
        local_1a0 = CONCAT17((char)uVar10,(undefined7)local_1a0);
        pppppppuVar13 = &local_1b0;
        uVar11 = local_1a8;
      }
      local_1a8 = uVar11;
      *(undefined1 *)((long)pppppppuVar13 + uVar10) = 0;
    }
    else {
                    /* try { // try from 00527c84 to 00527cf3 has its CatchHandler @ 00528070 */
      FUN_0054809c(&local_1b0,uVar9,0);
    }
    uVar11 = (local_1a0 & 0x7fffffffffffffff) - 1;
    uVar10 = local_1a8;
    if (-1 < (long)local_1a0) {
      uVar11 = 0x16;
      uVar10 = local_1a0 >> 0x38;
    }
    if (uVar11 < uVar10 || uVar11 - uVar10 == 0) {
      pppppppuVar13 = (undefined8 *******)local_1b0;
      uVar10 = uVar11;
      if (-1 < (long)local_1a0) {
        if (0x16 < uVar11) {
          if (*(long *)(lVar5 + 0x28) == local_70) {
                    /* try { // try from 00528004 to 0052802b has its CatchHandler @ 005280bc */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_005280b4;
        }
        local_1a0 = CONCAT17((char)uVar11,(undefined7)local_1a0);
        pppppppuVar13 = &local_1b0;
        uVar10 = local_1a8;
      }
      local_1a8 = uVar10;
      *(undefined1 *)((long)pppppppuVar13 + uVar11) = 0;
    }
    else {
      FUN_0054809c(&local_1b0,uVar11 - uVar10,0);
    }
    pppppppuVar13 = (undefined8 *******)local_1b0;
    if (-1 < (long)local_1a0) {
      pppppppuVar13 = &local_1b0;
    }
    local_1b8 = (undefined8 ******)((long)pppppppuVar13 + uVar9);
  }
  if ((uint *)param_2[3] == (uint *)param_2[4]) {
                    /* try { // try from 00527d50 to 00527d9b has its CatchHandler @ 00528074 */
    uVar9 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    uVar9 = (ulong)*(uint *)param_2[3];
  }
  iVar7 = FUN_0052b564(uVar9,uVar18,pppppppuVar13,&local_1b8,&local_1c4,local_17c,&local_198,
                       local_178,&local_1c0,uVar8);
  if (iVar7 != 0) goto LAB_00527da0;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 4;
  }
  goto LAB_00527bd8;
LAB_00527da0:
  uVar9 = local_190;
  if (-1 < (char)local_181) {
    uVar9 = (ulong)local_181;
  }
  if ((uVar9 != 0) && ((long)local_1c0 - (long)local_178 < 0xa0)) {
    *local_1c0 = local_1c4;
    local_1c0 = local_1c0 + 1;
  }
                    /* try { // try from 00527ddc to 00527f6f has its CatchHandler @ 0052806c */
  uVar8 = FUN_00545a04(pppppppuVar13,local_1b8,param_5,uVar18);
  uVar11 = (ulong)(uint)(int)(char)local_181;
  uVar9 = local_190;
  if (-1 < (char)local_181) {
    uVar9 = (ulong)local_181;
  }
  *param_6 = uVar8;
  if ((4 < (long)local_1c0 - (long)local_178) && (uVar9 != 0)) {
    puVar12 = local_1c0 + -1;
    if ((local_178 != local_1c0) && (local_178 < puVar12)) {
      puVar17 = local_178;
      puVar15 = puVar12;
      do {
        puVar17 = puVar17 + 1;
        uVar1 = puVar17[-1];
        puVar17[-1] = *puVar15;
        puVar16 = puVar15 + -1;
        *puVar15 = uVar1;
        puVar15 = puVar16;
      } while (puVar17 < puVar16);
      uVar11 = (ulong)local_181;
    }
    pppppppbVar2 = (byte *******)local_198;
    if (-1 < (char)uVar11) {
      pppppppbVar2 = &local_198;
    }
    pppppppbVar14 = pppppppbVar2;
    if (local_178 < puVar12) {
      if (-1 < (char)uVar11) {
        local_190 = uVar11 & 0xff;
      }
      puVar17 = local_178;
      do {
        bVar4 = *(byte *)pppppppbVar14;
        if (((bVar4 != 0) && (bVar4 != 0xff)) && (*puVar17 != (uint)bVar4)) goto LAB_00527efc;
        puVar17 = puVar17 + 1;
        if (1 < (long)((long)pppppppbVar2 + (local_190 - (long)pppppppbVar14))) {
          pppppppbVar14 = (byte *******)((long)pppppppbVar14 + 1);
        }
      } while (puVar17 < puVar12);
    }
    bVar4 = *(byte *)pppppppbVar14;
    if (((bVar4 != 0) && (bVar4 != 0xff)) && ((uint)bVar4 <= *puVar12 - 1)) {
LAB_00527efc:
      *param_5 = 4;
    }
  }
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    if (param_3 != (long *)0x0) goto LAB_00527f4c;
LAB_00527f24:
    if (!bVar6) goto LAB_00527f8c;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar7 = *(int *)param_2[3];
    }
    bVar6 = iVar7 == -1;
    plVar3 = (long *)0x0;
    if (!bVar6) {
      plVar3 = param_2;
    }
    param_2 = plVar3;
    if (param_3 == (long *)0x0) goto LAB_00527f24;
LAB_00527f4c:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar7 = *(int *)param_3[3];
    }
    if (bVar6 != (iVar7 == -1)) goto LAB_00527f8c;
  }
  *param_5 = *param_5 | 2;
LAB_00527f8c:
  if ((long)local_1a0 < 0) {
    operator_delete(local_1b0);
  }
  if ((char)local_181 < '\0') {
    operator_delete(local_198);
  }
  if (*(long *)(lVar5 + 0x28) == local_70) {
    return param_2;
  }
LAB_005280b4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005280c0  thunk_FUN_005280c4 =====

long * thunk_FUN_005280c4(undefined8 param_1,long *param_2,long *param_3,long param_4,uint *param_5,
                         undefined8 *param_6)

{
  uint uVar1;
  byte *******pppppppbVar2;
  long *plVar3;
  byte bVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint *puVar12;
  undefined8 *******pppppppuVar13;
  byte *******pppppppbVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  undefined4 uVar18;
  uint uStack_1c4;
  uint *puStack_1c0;
  undefined8 ******ppppppuStack_1b8;
  undefined8 ******ppppppuStack_1b0;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  byte ******ppppppbStack_198;
  ulong uStack_190;
  byte bStack_181;
  undefined4 uStack_17c;
  uint auStack_178 [40];
  undefined1 auStack_d8 [104];
  long lStack_70;
  
  lVar5 = tpidr_el0;
  lStack_70 = *(long *)(lVar5 + 0x28);
  uVar1 = *(uint *)(param_4 + 8) & 0x4a;
  if (uVar1 == 0) {
    uVar18 = 0;
  }
  else if (uVar1 == 0x40) {
    uVar18 = 8;
  }
  else if (uVar1 == 8) {
    uVar18 = 0x10;
  }
  else {
    uVar18 = 10;
  }
  uVar8 = FUN_0052c850(param_1,param_4,auStack_d8);
  FUN_0052c6e0(&ppppppbStack_198,param_4,&uStack_17c);
  ppppppuStack_1b0 = (undefined8 *******)0x0;
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  FUN_0054809c(&ppppppuStack_1b0,0x16,0);
  puStack_1c0 = auStack_178;
  uStack_1c4 = 0;
  pppppppuVar13 = (undefined8 *******)ppppppuStack_1b0;
  ppppppuStack_1b8 = ppppppuStack_1b0;
  if (-1 < (long)uStack_1a0) {
    pppppppuVar13 = &ppppppuStack_1b0;
    ppppppuStack_1b8 = &ppppppuStack_1b0;
  }
LAB_005281b0:
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    if (param_3 != (long *)0x0) goto LAB_005281f8;
LAB_005281d0:
    if (bVar6 != false) goto LAB_00528378;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar7 = *(int *)param_2[3];
    }
    bVar6 = iVar7 == -1;
    plVar3 = (long *)0x0;
    if (!bVar6) {
      plVar3 = param_2;
    }
    param_2 = plVar3;
    if (param_3 == (long *)0x0) goto LAB_005281d0;
LAB_005281f8:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar7 = *(int *)param_3[3];
    }
    plVar3 = (long *)0x0;
    if (iVar7 != -1) {
      plVar3 = param_3;
    }
    param_3 = plVar3;
    if (bVar6 == (iVar7 == -1)) goto LAB_00528378;
  }
  uVar9 = uStack_1a8;
  if (-1 < (long)uStack_1a0) {
    uVar9 = uStack_1a0 >> 0x38;
  }
  if ((undefined8 *******)ppppppuStack_1b8 == (undefined8 *******)((long)pppppppuVar13 + uVar9)) {
    if ((long)uVar9 < 1) {
      uVar10 = uVar9 * 2;
      pppppppuVar13 = (undefined8 *******)ppppppuStack_1b0;
      uVar11 = uVar10;
      if (-1 < (long)uStack_1a0) {
        if (0x16 < uVar10) {
          if (*(long *)(lVar5 + 0x28) == lStack_70) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_0052868c;
        }
        uStack_1a0 = CONCAT17((char)uVar10,(undefined7)uStack_1a0);
        pppppppuVar13 = &ppppppuStack_1b0;
        uVar11 = uStack_1a8;
      }
      uStack_1a8 = uVar11;
      *(undefined1 *)((long)pppppppuVar13 + uVar10) = 0;
    }
    else {
      FUN_0054809c(&ppppppuStack_1b0,uVar9,0);
    }
    uVar11 = (uStack_1a0 & 0x7fffffffffffffff) - 1;
    uVar10 = uStack_1a8;
    if (-1 < (long)uStack_1a0) {
      uVar11 = 0x16;
      uVar10 = uStack_1a0 >> 0x38;
    }
    if (uVar11 < uVar10 || uVar11 - uVar10 == 0) {
      pppppppuVar13 = (undefined8 *******)ppppppuStack_1b0;
      uVar10 = uVar11;
      if (-1 < (long)uStack_1a0) {
        if (0x16 < uVar11) {
          if (*(long *)(lVar5 + 0x28) == lStack_70) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_0052868c;
        }
        uStack_1a0 = CONCAT17((char)uVar11,(undefined7)uStack_1a0);
        pppppppuVar13 = &ppppppuStack_1b0;
        uVar10 = uStack_1a8;
      }
      uStack_1a8 = uVar10;
      *(undefined1 *)((long)pppppppuVar13 + uVar11) = 0;
    }
    else {
      FUN_0054809c(&ppppppuStack_1b0,uVar11 - uVar10,0);
    }
    pppppppuVar13 = (undefined8 *******)ppppppuStack_1b0;
    if (-1 < (long)uStack_1a0) {
      pppppppuVar13 = &ppppppuStack_1b0;
    }
    ppppppuStack_1b8 = (undefined8 ******)((long)pppppppuVar13 + uVar9);
  }
  if ((uint *)param_2[3] == (uint *)param_2[4]) {
    uVar9 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    uVar9 = (ulong)*(uint *)param_2[3];
  }
  iVar7 = FUN_0052b564(uVar9,uVar18,pppppppuVar13,&ppppppuStack_1b8,&uStack_1c4,uStack_17c,
                       &ppppppbStack_198,auStack_178,&puStack_1c0,uVar8);
  if (iVar7 != 0) goto LAB_00528378;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 4;
  }
  goto LAB_005281b0;
LAB_00528378:
  uVar9 = uStack_190;
  if (-1 < (char)bStack_181) {
    uVar9 = (ulong)bStack_181;
  }
  if ((uVar9 != 0) && ((long)puStack_1c0 - (long)auStack_178 < 0xa0)) {
    *puStack_1c0 = uStack_1c4;
    puStack_1c0 = puStack_1c0 + 1;
  }
  uVar8 = FUN_00545b58(pppppppuVar13,ppppppuStack_1b8,param_5,uVar18);
  uVar11 = (ulong)(uint)(int)(char)bStack_181;
  uVar9 = uStack_190;
  if (-1 < (char)bStack_181) {
    uVar9 = (ulong)bStack_181;
  }
  *param_6 = uVar8;
  if ((4 < (long)puStack_1c0 - (long)auStack_178) && (uVar9 != 0)) {
    puVar12 = puStack_1c0 + -1;
    if ((auStack_178 != puStack_1c0) && (auStack_178 < puVar12)) {
      puVar17 = auStack_178;
      puVar15 = puVar12;
      do {
        puVar17 = puVar17 + 1;
        uVar1 = puVar17[-1];
        puVar17[-1] = *puVar15;
        puVar16 = puVar15 + -1;
        *puVar15 = uVar1;
        puVar15 = puVar16;
      } while (puVar17 < puVar16);
      uVar11 = (ulong)bStack_181;
    }
    pppppppbVar2 = (byte *******)ppppppbStack_198;
    if (-1 < (char)uVar11) {
      pppppppbVar2 = &ppppppbStack_198;
    }
    pppppppbVar14 = pppppppbVar2;
    if (auStack_178 < puVar12) {
      if (-1 < (char)uVar11) {
        uStack_190 = uVar11 & 0xff;
      }
      puVar17 = auStack_178;
      do {
        bVar4 = *(byte *)pppppppbVar14;
        if (((bVar4 != 0) && (bVar4 != 0xff)) && (*puVar17 != (uint)bVar4)) goto LAB_005284d4;
        puVar17 = puVar17 + 1;
        if (1 < (long)((long)pppppppbVar2 + (uStack_190 - (long)pppppppbVar14))) {
          pppppppbVar14 = (byte *******)((long)pppppppbVar14 + 1);
        }
      } while (puVar17 < puVar12);
    }
    bVar4 = *(byte *)pppppppbVar14;
    if (((bVar4 != 0) && (bVar4 != 0xff)) && ((uint)bVar4 <= *puVar12 - 1)) {
LAB_005284d4:
      *param_5 = 4;
    }
  }
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    if (param_3 != (long *)0x0) goto LAB_00528524;
LAB_005284fc:
    if (!bVar6) goto LAB_00528564;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar7 = *(int *)param_2[3];
    }
    bVar6 = iVar7 == -1;
    plVar3 = (long *)0x0;
    if (!bVar6) {
      plVar3 = param_2;
    }
    param_2 = plVar3;
    if (param_3 == (long *)0x0) goto LAB_005284fc;
LAB_00528524:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar7 = *(int *)param_3[3];
    }
    if (bVar6 != (iVar7 == -1)) goto LAB_00528564;
  }
  *param_5 = *param_5 | 2;
LAB_00528564:
  if ((long)uStack_1a0 < 0) {
    operator_delete(ppppppuStack_1b0);
  }
  if ((char)bStack_181 < '\0') {
    operator_delete(ppppppbStack_198);
  }
  if (*(long *)(lVar5 + 0x28) == lStack_70) {
    return param_2;
  }
LAB_0052868c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005280c4  FUN_005280c4 =====

long * FUN_005280c4(undefined8 param_1,long *param_2,long *param_3,long param_4,uint *param_5,
                   undefined8 *param_6)

{
  uint uVar1;
  byte *******pppppppbVar2;
  long *plVar3;
  byte bVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint *puVar12;
  undefined8 *******pppppppuVar13;
  byte *******pppppppbVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  undefined4 uVar18;
  uint local_1c4;
  uint *local_1c0;
  undefined8 ******local_1b8;
  undefined8 ******local_1b0;
  ulong local_1a8;
  undefined8 local_1a0;
  byte ******local_198;
  ulong local_190;
  byte local_181;
  undefined4 local_17c;
  uint local_178 [40];
  undefined1 auStack_d8 [104];
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  uVar1 = *(uint *)(param_4 + 8) & 0x4a;
  if (uVar1 == 0) {
    uVar18 = 0;
  }
  else if (uVar1 == 0x40) {
    uVar18 = 8;
  }
  else if (uVar1 == 8) {
    uVar18 = 0x10;
  }
  else {
    uVar18 = 10;
  }
  uVar8 = FUN_0052c850(param_1,param_4,auStack_d8);
  FUN_0052c6e0(&local_198,param_4,&local_17c);
  local_1b0 = (undefined8 *******)0x0;
  local_1a8 = 0;
  local_1a0 = 0;
                    /* try { // try from 0052816c to 0052817f has its CatchHandler @ 00528640 */
  FUN_0054809c(&local_1b0,0x16,0);
  local_1c0 = local_178;
  local_1c4 = 0;
  pppppppuVar13 = (undefined8 *******)local_1b0;
  local_1b8 = local_1b0;
  if (-1 < (long)local_1a0) {
    pppppppuVar13 = &local_1b0;
    local_1b8 = &local_1b0;
  }
LAB_005281b0:
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    if (param_3 != (long *)0x0) goto LAB_005281f8;
LAB_005281d0:
    if (bVar6 != false) goto LAB_00528378;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
                    /* try { // try from 005281e0 to 0052821b has its CatchHandler @ 0052864c */
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar7 = *(int *)param_2[3];
    }
    bVar6 = iVar7 == -1;
    plVar3 = (long *)0x0;
    if (!bVar6) {
      plVar3 = param_2;
    }
    param_2 = plVar3;
    if (param_3 == (long *)0x0) goto LAB_005281d0;
LAB_005281f8:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar7 = *(int *)param_3[3];
    }
    plVar3 = (long *)0x0;
    if (iVar7 != -1) {
      plVar3 = param_3;
    }
    param_3 = plVar3;
    if (bVar6 == (iVar7 == -1)) goto LAB_00528378;
  }
  uVar9 = local_1a8;
  if (-1 < (long)local_1a0) {
    uVar9 = local_1a0 >> 0x38;
  }
  if ((undefined8 *******)local_1b8 == (undefined8 *******)((long)pppppppuVar13 + uVar9)) {
    if ((long)uVar9 < 1) {
      uVar10 = uVar9 * 2;
      pppppppuVar13 = (undefined8 *******)local_1b0;
      uVar11 = uVar10;
      if (-1 < (long)local_1a0) {
        if (0x16 < uVar10) {
          if (*(long *)(lVar5 + 0x28) == local_70) {
                    /* try { // try from 00528618 to 0052863f has its CatchHandler @ 00528690 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_0052868c;
        }
        local_1a0 = CONCAT17((char)uVar10,(undefined7)local_1a0);
        pppppppuVar13 = &local_1b0;
        uVar11 = local_1a8;
      }
      local_1a8 = uVar11;
      *(undefined1 *)((long)pppppppuVar13 + uVar10) = 0;
    }
    else {
                    /* try { // try from 0052825c to 005282cb has its CatchHandler @ 00528648 */
      FUN_0054809c(&local_1b0,uVar9,0);
    }
    uVar11 = (local_1a0 & 0x7fffffffffffffff) - 1;
    uVar10 = local_1a8;
    if (-1 < (long)local_1a0) {
      uVar11 = 0x16;
      uVar10 = local_1a0 >> 0x38;
    }
    if (uVar11 < uVar10 || uVar11 - uVar10 == 0) {
      pppppppuVar13 = (undefined8 *******)local_1b0;
      uVar10 = uVar11;
      if (-1 < (long)local_1a0) {
        if (0x16 < uVar11) {
          if (*(long *)(lVar5 + 0x28) == local_70) {
                    /* try { // try from 005285dc to 00528603 has its CatchHandler @ 00528694 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_0052868c;
        }
        local_1a0 = CONCAT17((char)uVar11,(undefined7)local_1a0);
        pppppppuVar13 = &local_1b0;
        uVar10 = local_1a8;
      }
      local_1a8 = uVar10;
      *(undefined1 *)((long)pppppppuVar13 + uVar11) = 0;
    }
    else {
      FUN_0054809c(&local_1b0,uVar11 - uVar10,0);
    }
    pppppppuVar13 = (undefined8 *******)local_1b0;
    if (-1 < (long)local_1a0) {
      pppppppuVar13 = &local_1b0;
    }
    local_1b8 = (undefined8 ******)((long)pppppppuVar13 + uVar9);
  }
  if ((uint *)param_2[3] == (uint *)param_2[4]) {
                    /* try { // try from 00528328 to 00528373 has its CatchHandler @ 0052864c */
    uVar9 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    uVar9 = (ulong)*(uint *)param_2[3];
  }
  iVar7 = FUN_0052b564(uVar9,uVar18,pppppppuVar13,&local_1b8,&local_1c4,local_17c,&local_198,
                       local_178,&local_1c0,uVar8);
  if (iVar7 != 0) goto LAB_00528378;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 4;
  }
  goto LAB_005281b0;
LAB_00528378:
  uVar9 = local_190;
  if (-1 < (char)local_181) {
    uVar9 = (ulong)local_181;
  }
  if ((uVar9 != 0) && ((long)local_1c0 - (long)local_178 < 0xa0)) {
    *local_1c0 = local_1c4;
    local_1c0 = local_1c0 + 1;
  }
                    /* try { // try from 005283b4 to 00528547 has its CatchHandler @ 00528644 */
  uVar8 = FUN_00545b58(pppppppuVar13,local_1b8,param_5,uVar18);
  uVar11 = (ulong)(uint)(int)(char)local_181;
  uVar9 = local_190;
  if (-1 < (char)local_181) {
    uVar9 = (ulong)local_181;
  }
  *param_6 = uVar8;
  if ((4 < (long)local_1c0 - (long)local_178) && (uVar9 != 0)) {
    puVar12 = local_1c0 + -1;
    if ((local_178 != local_1c0) && (local_178 < puVar12)) {
      puVar17 = local_178;
      puVar15 = puVar12;
      do {
        puVar17 = puVar17 + 1;
        uVar1 = puVar17[-1];
        puVar17[-1] = *puVar15;
        puVar16 = puVar15 + -1;
        *puVar15 = uVar1;
        puVar15 = puVar16;
      } while (puVar17 < puVar16);
      uVar11 = (ulong)local_181;
    }
    pppppppbVar2 = (byte *******)local_198;
    if (-1 < (char)uVar11) {
      pppppppbVar2 = &local_198;
    }
    pppppppbVar14 = pppppppbVar2;
    if (local_178 < puVar12) {
      if (-1 < (char)uVar11) {
        local_190 = uVar11 & 0xff;
      }
      puVar17 = local_178;
      do {
        bVar4 = *(byte *)pppppppbVar14;
        if (((bVar4 != 0) && (bVar4 != 0xff)) && (*puVar17 != (uint)bVar4)) goto LAB_005284d4;
        puVar17 = puVar17 + 1;
        if (1 < (long)((long)pppppppbVar2 + (local_190 - (long)pppppppbVar14))) {
          pppppppbVar14 = (byte *******)((long)pppppppbVar14 + 1);
        }
      } while (puVar17 < puVar12);
    }
    bVar4 = *(byte *)pppppppbVar14;
    if (((bVar4 != 0) && (bVar4 != 0xff)) && ((uint)bVar4 <= *puVar12 - 1)) {
LAB_005284d4:
      *param_5 = 4;
    }
  }
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    if (param_3 != (long *)0x0) goto LAB_00528524;
LAB_005284fc:
    if (!bVar6) goto LAB_00528564;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar7 = *(int *)param_2[3];
    }
    bVar6 = iVar7 == -1;
    plVar3 = (long *)0x0;
    if (!bVar6) {
      plVar3 = param_2;
    }
    param_2 = plVar3;
    if (param_3 == (long *)0x0) goto LAB_005284fc;
LAB_00528524:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar7 = *(int *)param_3[3];
    }
    if (bVar6 != (iVar7 == -1)) goto LAB_00528564;
  }
  *param_5 = *param_5 | 2;
LAB_00528564:
  if ((long)local_1a0 < 0) {
    operator_delete(local_1b0);
  }
  if ((char)local_181 < '\0') {
    operator_delete(local_198);
  }
  if (*(long *)(lVar5 + 0x28) == local_70) {
    return param_2;
  }
LAB_0052868c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00528698  thunk_FUN_0052869c =====

long * thunk_FUN_0052869c(undefined8 param_1,long *param_2,long *param_3,long param_4,uint *param_5,
                         undefined2 *param_6)

{
  uint uVar1;
  byte *******pppppppbVar2;
  long *plVar3;
  byte bVar4;
  long lVar5;
  bool bVar6;
  undefined2 uVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  uint *puVar13;
  undefined8 *******pppppppuVar14;
  byte *******pppppppbVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  undefined4 uVar19;
  uint uStack_1c4;
  uint *puStack_1c0;
  undefined8 ******ppppppuStack_1b8;
  undefined8 ******ppppppuStack_1b0;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  byte ******ppppppbStack_198;
  ulong uStack_190;
  byte bStack_181;
  undefined4 uStack_17c;
  uint auStack_178 [40];
  undefined1 auStack_d8 [104];
  long lStack_70;
  
  lVar5 = tpidr_el0;
  lStack_70 = *(long *)(lVar5 + 0x28);
  uVar1 = *(uint *)(param_4 + 8) & 0x4a;
  if (uVar1 == 0) {
    uVar19 = 0;
  }
  else if (uVar1 == 0x40) {
    uVar19 = 8;
  }
  else if (uVar1 == 8) {
    uVar19 = 0x10;
  }
  else {
    uVar19 = 10;
  }
  uVar9 = FUN_0052c850(param_1,param_4,auStack_d8);
  FUN_0052c6e0(&ppppppbStack_198,param_4,&uStack_17c);
  ppppppuStack_1b0 = (undefined8 *******)0x0;
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  FUN_0054809c(&ppppppuStack_1b0,0x16,0);
  puStack_1c0 = auStack_178;
  uStack_1c4 = 0;
  pppppppuVar14 = (undefined8 *******)ppppppuStack_1b0;
  ppppppuStack_1b8 = ppppppuStack_1b0;
  if (-1 < (long)uStack_1a0) {
    pppppppuVar14 = &ppppppuStack_1b0;
    ppppppuStack_1b8 = &ppppppuStack_1b0;
  }
LAB_00528788:
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    if (param_3 != (long *)0x0) goto LAB_005287d0;
LAB_005287a8:
    if (bVar6 != false) goto LAB_00528950;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar8 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar8 = *(int *)param_2[3];
    }
    bVar6 = iVar8 == -1;
    plVar3 = (long *)0x0;
    if (!bVar6) {
      plVar3 = param_2;
    }
    param_2 = plVar3;
    if (param_3 == (long *)0x0) goto LAB_005287a8;
LAB_005287d0:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar8 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar8 = *(int *)param_3[3];
    }
    plVar3 = (long *)0x0;
    if (iVar8 != -1) {
      plVar3 = param_3;
    }
    param_3 = plVar3;
    if (bVar6 == (iVar8 == -1)) goto LAB_00528950;
  }
  uVar10 = uStack_1a8;
  if (-1 < (long)uStack_1a0) {
    uVar10 = uStack_1a0 >> 0x38;
  }
  if ((undefined8 *******)ppppppuStack_1b8 == (undefined8 *******)((long)pppppppuVar14 + uVar10)) {
    if ((long)uVar10 < 1) {
      uVar11 = uVar10 * 2;
      pppppppuVar14 = (undefined8 *******)ppppppuStack_1b0;
      uVar12 = uVar11;
      if (-1 < (long)uStack_1a0) {
        if (0x16 < uVar11) {
          if (*(long *)(lVar5 + 0x28) == lStack_70) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_00528c64;
        }
        uStack_1a0 = CONCAT17((char)uVar11,(undefined7)uStack_1a0);
        pppppppuVar14 = &ppppppuStack_1b0;
        uVar12 = uStack_1a8;
      }
      uStack_1a8 = uVar12;
      *(undefined1 *)((long)pppppppuVar14 + uVar11) = 0;
    }
    else {
      FUN_0054809c(&ppppppuStack_1b0,uVar10,0);
    }
    uVar12 = (uStack_1a0 & 0x7fffffffffffffff) - 1;
    uVar11 = uStack_1a8;
    if (-1 < (long)uStack_1a0) {
      uVar12 = 0x16;
      uVar11 = uStack_1a0 >> 0x38;
    }
    if (uVar12 < uVar11 || uVar12 - uVar11 == 0) {
      pppppppuVar14 = (undefined8 *******)ppppppuStack_1b0;
      uVar11 = uVar12;
      if (-1 < (long)uStack_1a0) {
        if (0x16 < uVar12) {
          if (*(long *)(lVar5 + 0x28) == lStack_70) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_00528c64;
        }
        uStack_1a0 = CONCAT17((char)uVar12,(undefined7)uStack_1a0);
        pppppppuVar14 = &ppppppuStack_1b0;
        uVar11 = uStack_1a8;
      }
      uStack_1a8 = uVar11;
      *(undefined1 *)((long)pppppppuVar14 + uVar12) = 0;
    }
    else {
      FUN_0054809c(&ppppppuStack_1b0,uVar12 - uVar11,0);
    }
    pppppppuVar14 = (undefined8 *******)ppppppuStack_1b0;
    if (-1 < (long)uStack_1a0) {
      pppppppuVar14 = &ppppppuStack_1b0;
    }
    ppppppuStack_1b8 = (undefined8 ******)((long)pppppppuVar14 + uVar10);
  }
  if ((uint *)param_2[3] == (uint *)param_2[4]) {
    uVar10 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    uVar10 = (ulong)*(uint *)param_2[3];
  }
  iVar8 = FUN_0052b564(uVar10,uVar19,pppppppuVar14,&ppppppuStack_1b8,&uStack_1c4,uStack_17c,
                       &ppppppbStack_198,auStack_178,&puStack_1c0,uVar9);
  if (iVar8 != 0) goto LAB_00528950;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 4;
  }
  goto LAB_00528788;
LAB_00528950:
  uVar10 = uStack_190;
  if (-1 < (char)bStack_181) {
    uVar10 = (ulong)bStack_181;
  }
  if ((uVar10 != 0) && ((long)puStack_1c0 - (long)auStack_178 < 0xa0)) {
    *puStack_1c0 = uStack_1c4;
    puStack_1c0 = puStack_1c0 + 1;
  }
  uVar7 = FUN_00545cac(pppppppuVar14,ppppppuStack_1b8,param_5,uVar19);
  uVar12 = (ulong)(uint)(int)(char)bStack_181;
  uVar10 = uStack_190;
  if (-1 < (char)bStack_181) {
    uVar10 = (ulong)bStack_181;
  }
  *param_6 = uVar7;
  if ((4 < (long)puStack_1c0 - (long)auStack_178) && (uVar10 != 0)) {
    puVar13 = puStack_1c0 + -1;
    if ((auStack_178 != puStack_1c0) && (auStack_178 < puVar13)) {
      puVar18 = auStack_178;
      puVar16 = puVar13;
      do {
        puVar18 = puVar18 + 1;
        uVar1 = puVar18[-1];
        puVar18[-1] = *puVar16;
        puVar17 = puVar16 + -1;
        *puVar16 = uVar1;
        puVar16 = puVar17;
      } while (puVar18 < puVar17);
      uVar12 = (ulong)bStack_181;
    }
    pppppppbVar2 = (byte *******)ppppppbStack_198;
    if (-1 < (char)uVar12) {
      pppppppbVar2 = &ppppppbStack_198;
    }
    pppppppbVar15 = pppppppbVar2;
    if (auStack_178 < puVar13) {
      if (-1 < (char)uVar12) {
        uStack_190 = uVar12 & 0xff;
      }
      puVar18 = auStack_178;
      do {
        bVar4 = *(byte *)pppppppbVar15;
        if (((bVar4 != 0) && (bVar4 != 0xff)) && (*puVar18 != (uint)bVar4)) goto LAB_00528aac;
        puVar18 = puVar18 + 1;
        if (1 < (long)((long)pppppppbVar2 + (uStack_190 - (long)pppppppbVar15))) {
          pppppppbVar15 = (byte *******)((long)pppppppbVar15 + 1);
        }
      } while (puVar18 < puVar13);
    }
    bVar4 = *(byte *)pppppppbVar15;
    if (((bVar4 != 0) && (bVar4 != 0xff)) && ((uint)bVar4 <= *puVar13 - 1)) {
LAB_00528aac:
      *param_5 = 4;
    }
  }
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    if (param_3 != (long *)0x0) goto LAB_00528afc;
LAB_00528ad4:
    if (!bVar6) goto LAB_00528b3c;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar8 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar8 = *(int *)param_2[3];
    }
    bVar6 = iVar8 == -1;
    plVar3 = (long *)0x0;
    if (!bVar6) {
      plVar3 = param_2;
    }
    param_2 = plVar3;
    if (param_3 == (long *)0x0) goto LAB_00528ad4;
LAB_00528afc:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar8 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar8 = *(int *)param_3[3];
    }
    if (bVar6 != (iVar8 == -1)) goto LAB_00528b3c;
  }
  *param_5 = *param_5 | 2;
LAB_00528b3c:
  if ((long)uStack_1a0 < 0) {
    operator_delete(ppppppuStack_1b0);
  }
  if ((char)bStack_181 < '\0') {
    operator_delete(ppppppbStack_198);
  }
  if (*(long *)(lVar5 + 0x28) == lStack_70) {
    return param_2;
  }
LAB_00528c64:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0052869c  FUN_0052869c =====

long * FUN_0052869c(undefined8 param_1,long *param_2,long *param_3,long param_4,uint *param_5,
                   undefined2 *param_6)

{
  uint uVar1;
  byte *******pppppppbVar2;
  long *plVar3;
  byte bVar4;
  long lVar5;
  bool bVar6;
  undefined2 uVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  uint *puVar13;
  undefined8 *******pppppppuVar14;
  byte *******pppppppbVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  undefined4 uVar19;
  uint local_1c4;
  uint *local_1c0;
  undefined8 ******local_1b8;
  undefined8 ******local_1b0;
  ulong local_1a8;
  undefined8 local_1a0;
  byte ******local_198;
  ulong local_190;
  byte local_181;
  undefined4 local_17c;
  uint local_178 [40];
  undefined1 auStack_d8 [104];
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  uVar1 = *(uint *)(param_4 + 8) & 0x4a;
  if (uVar1 == 0) {
    uVar19 = 0;
  }
  else if (uVar1 == 0x40) {
    uVar19 = 8;
  }
  else if (uVar1 == 8) {
    uVar19 = 0x10;
  }
  else {
    uVar19 = 10;
  }
  uVar9 = FUN_0052c850(param_1,param_4,auStack_d8);
  FUN_0052c6e0(&local_198,param_4,&local_17c);
  local_1b0 = (undefined8 *******)0x0;
  local_1a8 = 0;
  local_1a0 = 0;
                    /* try { // try from 00528744 to 00528757 has its CatchHandler @ 00528c18 */
  FUN_0054809c(&local_1b0,0x16,0);
  local_1c0 = local_178;
  local_1c4 = 0;
  pppppppuVar14 = (undefined8 *******)local_1b0;
  local_1b8 = local_1b0;
  if (-1 < (long)local_1a0) {
    pppppppuVar14 = &local_1b0;
    local_1b8 = &local_1b0;
  }
LAB_00528788:
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    if (param_3 != (long *)0x0) goto LAB_005287d0;
LAB_005287a8:
    if (bVar6 != false) goto LAB_00528950;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
                    /* try { // try from 005287b8 to 005287f3 has its CatchHandler @ 00528c24 */
      iVar8 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar8 = *(int *)param_2[3];
    }
    bVar6 = iVar8 == -1;
    plVar3 = (long *)0x0;
    if (!bVar6) {
      plVar3 = param_2;
    }
    param_2 = plVar3;
    if (param_3 == (long *)0x0) goto LAB_005287a8;
LAB_005287d0:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar8 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar8 = *(int *)param_3[3];
    }
    plVar3 = (long *)0x0;
    if (iVar8 != -1) {
      plVar3 = param_3;
    }
    param_3 = plVar3;
    if (bVar6 == (iVar8 == -1)) goto LAB_00528950;
  }
  uVar10 = local_1a8;
  if (-1 < (long)local_1a0) {
    uVar10 = local_1a0 >> 0x38;
  }
  if ((undefined8 *******)local_1b8 == (undefined8 *******)((long)pppppppuVar14 + uVar10)) {
    if ((long)uVar10 < 1) {
      uVar11 = uVar10 * 2;
      pppppppuVar14 = (undefined8 *******)local_1b0;
      uVar12 = uVar11;
      if (-1 < (long)local_1a0) {
        if (0x16 < uVar11) {
          if (*(long *)(lVar5 + 0x28) == local_70) {
                    /* try { // try from 00528bf0 to 00528c17 has its CatchHandler @ 00528c68 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_00528c64;
        }
        local_1a0 = CONCAT17((char)uVar11,(undefined7)local_1a0);
        pppppppuVar14 = &local_1b0;
        uVar12 = local_1a8;
      }
      local_1a8 = uVar12;
      *(undefined1 *)((long)pppppppuVar14 + uVar11) = 0;
    }
    else {
                    /* try { // try from 00528834 to 005288a3 has its CatchHandler @ 00528c20 */
      FUN_0054809c(&local_1b0,uVar10,0);
    }
    uVar12 = (local_1a0 & 0x7fffffffffffffff) - 1;
    uVar11 = local_1a8;
    if (-1 < (long)local_1a0) {
      uVar12 = 0x16;
      uVar11 = local_1a0 >> 0x38;
    }
    if (uVar12 < uVar11 || uVar12 - uVar11 == 0) {
      pppppppuVar14 = (undefined8 *******)local_1b0;
      uVar11 = uVar12;
      if (-1 < (long)local_1a0) {
        if (0x16 < uVar12) {
          if (*(long *)(lVar5 + 0x28) == local_70) {
                    /* try { // try from 00528bb4 to 00528bdb has its CatchHandler @ 00528c6c */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_00528c64;
        }
        local_1a0 = CONCAT17((char)uVar12,(undefined7)local_1a0);
        pppppppuVar14 = &local_1b0;
        uVar11 = local_1a8;
      }
      local_1a8 = uVar11;
      *(undefined1 *)((long)pppppppuVar14 + uVar12) = 0;
    }
    else {
      FUN_0054809c(&local_1b0,uVar12 - uVar11,0);
    }
    pppppppuVar14 = (undefined8 *******)local_1b0;
    if (-1 < (long)local_1a0) {
      pppppppuVar14 = &local_1b0;
    }
    local_1b8 = (undefined8 ******)((long)pppppppuVar14 + uVar10);
  }
  if ((uint *)param_2[3] == (uint *)param_2[4]) {
                    /* try { // try from 00528900 to 0052894b has its CatchHandler @ 00528c24 */
    uVar10 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    uVar10 = (ulong)*(uint *)param_2[3];
  }
  iVar8 = FUN_0052b564(uVar10,uVar19,pppppppuVar14,&local_1b8,&local_1c4,local_17c,&local_198,
                       local_178,&local_1c0,uVar9);
  if (iVar8 != 0) goto LAB_00528950;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 4;
  }
  goto LAB_00528788;
LAB_00528950:
  uVar10 = local_190;
  if (-1 < (char)local_181) {
    uVar10 = (ulong)local_181;
  }
  if ((uVar10 != 0) && ((long)local_1c0 - (long)local_178 < 0xa0)) {
    *local_1c0 = local_1c4;
    local_1c0 = local_1c0 + 1;
  }
                    /* try { // try from 0052898c to 00528b1f has its CatchHandler @ 00528c1c */
  uVar7 = FUN_00545cac(pppppppuVar14,local_1b8,param_5,uVar19);
  uVar12 = (ulong)(uint)(int)(char)local_181;
  uVar10 = local_190;
  if (-1 < (char)local_181) {
    uVar10 = (ulong)local_181;
  }
  *param_6 = uVar7;
  if ((4 < (long)local_1c0 - (long)local_178) && (uVar10 != 0)) {
    puVar13 = local_1c0 + -1;
    if ((local_178 != local_1c0) && (local_178 < puVar13)) {
      puVar18 = local_178;
      puVar16 = puVar13;
      do {
        puVar18 = puVar18 + 1;
        uVar1 = puVar18[-1];
        puVar18[-1] = *puVar16;
        puVar17 = puVar16 + -1;
        *puVar16 = uVar1;
        puVar16 = puVar17;
      } while (puVar18 < puVar17);
      uVar12 = (ulong)local_181;
    }
    pppppppbVar2 = (byte *******)local_198;
    if (-1 < (char)uVar12) {
      pppppppbVar2 = &local_198;
    }
    pppppppbVar15 = pppppppbVar2;
    if (local_178 < puVar13) {
      if (-1 < (char)uVar12) {
        local_190 = uVar12 & 0xff;
      }
      puVar18 = local_178;
      do {
        bVar4 = *(byte *)pppppppbVar15;
        if (((bVar4 != 0) && (bVar4 != 0xff)) && (*puVar18 != (uint)bVar4)) goto LAB_00528aac;
        puVar18 = puVar18 + 1;
        if (1 < (long)((long)pppppppbVar2 + (local_190 - (long)pppppppbVar15))) {
          pppppppbVar15 = (byte *******)((long)pppppppbVar15 + 1);
        }
      } while (puVar18 < puVar13);
    }
    bVar4 = *(byte *)pppppppbVar15;
    if (((bVar4 != 0) && (bVar4 != 0xff)) && ((uint)bVar4 <= *puVar13 - 1)) {
LAB_00528aac:
      *param_5 = 4;
    }
  }
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    if (param_3 != (long *)0x0) goto LAB_00528afc;
LAB_00528ad4:
    if (!bVar6) goto LAB_00528b3c;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar8 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar8 = *(int *)param_2[3];
    }
    bVar6 = iVar8 == -1;
    plVar3 = (long *)0x0;
    if (!bVar6) {
      plVar3 = param_2;
    }
    param_2 = plVar3;
    if (param_3 == (long *)0x0) goto LAB_00528ad4;
LAB_00528afc:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar8 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar8 = *(int *)param_3[3];
    }
    if (bVar6 != (iVar8 == -1)) goto LAB_00528b3c;
  }
  *param_5 = *param_5 | 2;
LAB_00528b3c:
  if ((long)local_1a0 < 0) {
    operator_delete(local_1b0);
  }
  if ((char)local_181 < '\0') {
    operator_delete(local_198);
  }
  if (*(long *)(lVar5 + 0x28) == local_70) {
    return param_2;
  }
LAB_00528c64:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00528c70  thunk_FUN_00528c74 =====

long * thunk_FUN_00528c74(undefined8 param_1,long *param_2,long *param_3,long param_4,uint *param_5,
                         undefined4 *param_6)

{
  uint uVar1;
  byte *******pppppppbVar2;
  long *plVar3;
  byte bVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  uint *puVar13;
  undefined8 *******pppppppuVar14;
  byte *******pppppppbVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  uint uStack_1c4;
  uint *puStack_1c0;
  undefined8 ******ppppppuStack_1b8;
  undefined8 ******ppppppuStack_1b0;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  byte ******ppppppbStack_198;
  ulong uStack_190;
  byte bStack_181;
  undefined4 uStack_17c;
  uint auStack_178 [40];
  undefined1 auStack_d8 [104];
  long lStack_70;
  
  lVar5 = tpidr_el0;
  lStack_70 = *(long *)(lVar5 + 0x28);
  uVar1 = *(uint *)(param_4 + 8) & 0x4a;
  if (uVar1 == 0) {
    uVar8 = 0;
  }
  else if (uVar1 == 0x40) {
    uVar8 = 8;
  }
  else if (uVar1 == 8) {
    uVar8 = 0x10;
  }
  else {
    uVar8 = 10;
  }
  uVar9 = FUN_0052c850(param_1,param_4,auStack_d8);
  FUN_0052c6e0(&ppppppbStack_198,param_4,&uStack_17c);
  ppppppuStack_1b0 = (undefined8 *******)0x0;
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  FUN_0054809c(&ppppppuStack_1b0,0x16,0);
  puStack_1c0 = auStack_178;
  uStack_1c4 = 0;
  pppppppuVar14 = (undefined8 *******)ppppppuStack_1b0;
  ppppppuStack_1b8 = ppppppuStack_1b0;
  if (-1 < (long)uStack_1a0) {
    pppppppuVar14 = &ppppppuStack_1b0;
    ppppppuStack_1b8 = &ppppppuStack_1b0;
  }
LAB_00528d60:
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    if (param_3 != (long *)0x0) goto LAB_00528da8;
LAB_00528d80:
    if (bVar6 != false) goto LAB_00528f28;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar7 = *(int *)param_2[3];
    }
    bVar6 = iVar7 == -1;
    plVar3 = (long *)0x0;
    if (!bVar6) {
      plVar3 = param_2;
    }
    param_2 = plVar3;
    if (param_3 == (long *)0x0) goto LAB_00528d80;
LAB_00528da8:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar7 = *(int *)param_3[3];
    }
    plVar3 = (long *)0x0;
    if (iVar7 != -1) {
      plVar3 = param_3;
    }
    param_3 = plVar3;
    if (bVar6 == (iVar7 == -1)) goto LAB_00528f28;
  }
  uVar10 = uStack_1a8;
  if (-1 < (long)uStack_1a0) {
    uVar10 = uStack_1a0 >> 0x38;
  }
  if ((undefined8 *******)ppppppuStack_1b8 == (undefined8 *******)((long)pppppppuVar14 + uVar10)) {
    if ((long)uVar10 < 1) {
      uVar11 = uVar10 * 2;
      pppppppuVar14 = (undefined8 *******)ppppppuStack_1b0;
      uVar12 = uVar11;
      if (-1 < (long)uStack_1a0) {
        if (0x16 < uVar11) {
          if (*(long *)(lVar5 + 0x28) == lStack_70) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_0052923c;
        }
        uStack_1a0 = CONCAT17((char)uVar11,(undefined7)uStack_1a0);
        pppppppuVar14 = &ppppppuStack_1b0;
        uVar12 = uStack_1a8;
      }
      uStack_1a8 = uVar12;
      *(undefined1 *)((long)pppppppuVar14 + uVar11) = 0;
    }
    else {
      FUN_0054809c(&ppppppuStack_1b0,uVar10,0);
    }
    uVar12 = (uStack_1a0 & 0x7fffffffffffffff) - 1;
    uVar11 = uStack_1a8;
    if (-1 < (long)uStack_1a0) {
      uVar12 = 0x16;
      uVar11 = uStack_1a0 >> 0x38;
    }
    if (uVar12 < uVar11 || uVar12 - uVar11 == 0) {
      pppppppuVar14 = (undefined8 *******)ppppppuStack_1b0;
      uVar11 = uVar12;
      if (-1 < (long)uStack_1a0) {
        if (0x16 < uVar12) {
          if (*(long *)(lVar5 + 0x28) == lStack_70) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_0052923c;
        }
        uStack_1a0 = CONCAT17((char)uVar12,(undefined7)uStack_1a0);
        pppppppuVar14 = &ppppppuStack_1b0;
        uVar11 = uStack_1a8;
      }
      uStack_1a8 = uVar11;
      *(undefined1 *)((long)pppppppuVar14 + uVar12) = 0;
    }
    else {
      FUN_0054809c(&ppppppuStack_1b0,uVar12 - uVar11,0);
    }
    pppppppuVar14 = (undefined8 *******)ppppppuStack_1b0;
    if (-1 < (long)uStack_1a0) {
      pppppppuVar14 = &ppppppuStack_1b0;
    }
    ppppppuStack_1b8 = (undefined8 ******)((long)pppppppuVar14 + uVar10);
  }
  if ((uint *)param_2[3] == (uint *)param_2[4]) {
    uVar10 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    uVar10 = (ulong)*(uint *)param_2[3];
  }
  iVar7 = FUN_0052b564(uVar10,uVar8,pppppppuVar14,&ppppppuStack_1b8,&uStack_1c4,uStack_17c,
                       &ppppppbStack_198,auStack_178,&puStack_1c0,uVar9);
  if (iVar7 != 0) goto LAB_00528f28;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 4;
  }
  goto LAB_00528d60;
LAB_00528f28:
  uVar10 = uStack_190;
  if (-1 < (char)bStack_181) {
    uVar10 = (ulong)bStack_181;
  }
  if ((uVar10 != 0) && ((long)puStack_1c0 - (long)auStack_178 < 0xa0)) {
    *puStack_1c0 = uStack_1c4;
    puStack_1c0 = puStack_1c0 + 1;
  }
  uVar8 = FUN_00545e34(pppppppuVar14,ppppppuStack_1b8,param_5,uVar8);
  uVar12 = (ulong)(uint)(int)(char)bStack_181;
  uVar10 = uStack_190;
  if (-1 < (char)bStack_181) {
    uVar10 = (ulong)bStack_181;
  }
  *param_6 = uVar8;
  if ((4 < (long)puStack_1c0 - (long)auStack_178) && (uVar10 != 0)) {
    puVar13 = puStack_1c0 + -1;
    if ((auStack_178 != puStack_1c0) && (auStack_178 < puVar13)) {
      puVar18 = auStack_178;
      puVar16 = puVar13;
      do {
        puVar18 = puVar18 + 1;
        uVar1 = puVar18[-1];
        puVar18[-1] = *puVar16;
        puVar17 = puVar16 + -1;
        *puVar16 = uVar1;
        puVar16 = puVar17;
      } while (puVar18 < puVar17);
      uVar12 = (ulong)bStack_181;
    }
    pppppppbVar2 = (byte *******)ppppppbStack_198;
    if (-1 < (char)uVar12) {
      pppppppbVar2 = &ppppppbStack_198;
    }
    pppppppbVar15 = pppppppbVar2;
    if (auStack_178 < puVar13) {
      if (-1 < (char)uVar12) {
        uStack_190 = uVar12 & 0xff;
      }
      puVar18 = auStack_178;
      do {
        bVar4 = *(byte *)pppppppbVar15;
        if (((bVar4 != 0) && (bVar4 != 0xff)) && (*puVar18 != (uint)bVar4)) goto LAB_00529084;
        puVar18 = puVar18 + 1;
        if (1 < (long)((long)pppppppbVar2 + (uStack_190 - (long)pppppppbVar15))) {
          pppppppbVar15 = (byte *******)((long)pppppppbVar15 + 1);
        }
      } while (puVar18 < puVar13);
    }
    bVar4 = *(byte *)pppppppbVar15;
    if (((bVar4 != 0) && (bVar4 != 0xff)) && ((uint)bVar4 <= *puVar13 - 1)) {
LAB_00529084:
      *param_5 = 4;
    }
  }
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    if (param_3 != (long *)0x0) goto LAB_005290d4;
LAB_005290ac:
    if (!bVar6) goto LAB_00529114;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar7 = *(int *)param_2[3];
    }
    bVar6 = iVar7 == -1;
    plVar3 = (long *)0x0;
    if (!bVar6) {
      plVar3 = param_2;
    }
    param_2 = plVar3;
    if (param_3 == (long *)0x0) goto LAB_005290ac;
LAB_005290d4:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar7 = *(int *)param_3[3];
    }
    if (bVar6 != (iVar7 == -1)) goto LAB_00529114;
  }
  *param_5 = *param_5 | 2;
LAB_00529114:
  if ((long)uStack_1a0 < 0) {
    operator_delete(ppppppuStack_1b0);
  }
  if ((char)bStack_181 < '\0') {
    operator_delete(ppppppbStack_198);
  }
  if (*(long *)(lVar5 + 0x28) == lStack_70) {
    return param_2;
  }
LAB_0052923c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00528c74  FUN_00528c74 =====

long * FUN_00528c74(undefined8 param_1,long *param_2,long *param_3,long param_4,uint *param_5,
                   undefined4 *param_6)

{
  uint uVar1;
  byte *******pppppppbVar2;
  long *plVar3;
  byte bVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  uint *puVar13;
  undefined8 *******pppppppuVar14;
  byte *******pppppppbVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  uint local_1c4;
  uint *local_1c0;
  undefined8 ******local_1b8;
  undefined8 ******local_1b0;
  ulong local_1a8;
  undefined8 local_1a0;
  byte ******local_198;
  ulong local_190;
  byte local_181;
  undefined4 local_17c;
  uint local_178 [40];
  undefined1 auStack_d8 [104];
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  uVar1 = *(uint *)(param_4 + 8) & 0x4a;
  if (uVar1 == 0) {
    uVar8 = 0;
  }
  else if (uVar1 == 0x40) {
    uVar8 = 8;
  }
  else if (uVar1 == 8) {
    uVar8 = 0x10;
  }
  else {
    uVar8 = 10;
  }
  uVar9 = FUN_0052c850(param_1,param_4,auStack_d8);
  FUN_0052c6e0(&local_198,param_4,&local_17c);
  local_1b0 = (undefined8 *******)0x0;
  local_1a8 = 0;
  local_1a0 = 0;
                    /* try { // try from 00528d1c to 00528d2f has its CatchHandler @ 005291f0 */
  FUN_0054809c(&local_1b0,0x16,0);
  local_1c0 = local_178;
  local_1c4 = 0;
  pppppppuVar14 = (undefined8 *******)local_1b0;
  local_1b8 = local_1b0;
  if (-1 < (long)local_1a0) {
    pppppppuVar14 = &local_1b0;
    local_1b8 = &local_1b0;
  }
LAB_00528d60:
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    if (param_3 != (long *)0x0) goto LAB_00528da8;
LAB_00528d80:
    if (bVar6 != false) goto LAB_00528f28;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
                    /* try { // try from 00528d90 to 00528dcb has its CatchHandler @ 005291fc */
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar7 = *(int *)param_2[3];
    }
    bVar6 = iVar7 == -1;
    plVar3 = (long *)0x0;
    if (!bVar6) {
      plVar3 = param_2;
    }
    param_2 = plVar3;
    if (param_3 == (long *)0x0) goto LAB_00528d80;
LAB_00528da8:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar7 = *(int *)param_3[3];
    }
    plVar3 = (long *)0x0;
    if (iVar7 != -1) {
      plVar3 = param_3;
    }
    param_3 = plVar3;
    if (bVar6 == (iVar7 == -1)) goto LAB_00528f28;
  }
  uVar10 = local_1a8;
  if (-1 < (long)local_1a0) {
    uVar10 = local_1a0 >> 0x38;
  }
  if ((undefined8 *******)local_1b8 == (undefined8 *******)((long)pppppppuVar14 + uVar10)) {
    if ((long)uVar10 < 1) {
      uVar11 = uVar10 * 2;
      pppppppuVar14 = (undefined8 *******)local_1b0;
      uVar12 = uVar11;
      if (-1 < (long)local_1a0) {
        if (0x16 < uVar11) {
          if (*(long *)(lVar5 + 0x28) == local_70) {
                    /* try { // try from 005291c8 to 005291ef has its CatchHandler @ 00529240 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_0052923c;
        }
        local_1a0 = CONCAT17((char)uVar11,(undefined7)local_1a0);
        pppppppuVar14 = &local_1b0;
        uVar12 = local_1a8;
      }
      local_1a8 = uVar12;
      *(undefined1 *)((long)pppppppuVar14 + uVar11) = 0;
    }
    else {
                    /* try { // try from 00528e0c to 00528e7b has its CatchHandler @ 005291f8 */
      FUN_0054809c(&local_1b0,uVar10,0);
    }
    uVar12 = (local_1a0 & 0x7fffffffffffffff) - 1;
    uVar11 = local_1a8;
    if (-1 < (long)local_1a0) {
      uVar12 = 0x16;
      uVar11 = local_1a0 >> 0x38;
    }
    if (uVar12 < uVar11 || uVar12 - uVar11 == 0) {
      pppppppuVar14 = (undefined8 *******)local_1b0;
      uVar11 = uVar12;
      if (-1 < (long)local_1a0) {
        if (0x16 < uVar12) {
          if (*(long *)(lVar5 + 0x28) == local_70) {
                    /* try { // try from 0052918c to 005291b3 has its CatchHandler @ 00529244 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_0052923c;
        }
        local_1a0 = CONCAT17((char)uVar12,(undefined7)local_1a0);
        pppppppuVar14 = &local_1b0;
        uVar11 = local_1a8;
      }
      local_1a8 = uVar11;
      *(undefined1 *)((long)pppppppuVar14 + uVar12) = 0;
    }
    else {
      FUN_0054809c(&local_1b0,uVar12 - uVar11,0);
    }
    pppppppuVar14 = (undefined8 *******)local_1b0;
    if (-1 < (long)local_1a0) {
      pppppppuVar14 = &local_1b0;
    }
    local_1b8 = (undefined8 ******)((long)pppppppuVar14 + uVar10);
  }
  if ((uint *)param_2[3] == (uint *)param_2[4]) {
                    /* try { // try from 00528ed8 to 00528f23 has its CatchHandler @ 005291fc */
    uVar10 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    uVar10 = (ulong)*(uint *)param_2[3];
  }
  iVar7 = FUN_0052b564(uVar10,uVar8,pppppppuVar14,&local_1b8,&local_1c4,local_17c,&local_198,
                       local_178,&local_1c0,uVar9);
  if (iVar7 != 0) goto LAB_00528f28;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 4;
  }
  goto LAB_00528d60;
LAB_00528f28:
  uVar10 = local_190;
  if (-1 < (char)local_181) {
    uVar10 = (ulong)local_181;
  }
  if ((uVar10 != 0) && ((long)local_1c0 - (long)local_178 < 0xa0)) {
    *local_1c0 = local_1c4;
    local_1c0 = local_1c0 + 1;
  }
                    /* try { // try from 00528f64 to 005290f7 has its CatchHandler @ 005291f4 */
  uVar8 = FUN_00545e34(pppppppuVar14,local_1b8,param_5,uVar8);
  uVar12 = (ulong)(uint)(int)(char)local_181;
  uVar10 = local_190;
  if (-1 < (char)local_181) {
    uVar10 = (ulong)local_181;
  }
  *param_6 = uVar8;
  if ((4 < (long)local_1c0 - (long)local_178) && (uVar10 != 0)) {
    puVar13 = local_1c0 + -1;
    if ((local_178 != local_1c0) && (local_178 < puVar13)) {
      puVar18 = local_178;
      puVar16 = puVar13;
      do {
        puVar18 = puVar18 + 1;
        uVar1 = puVar18[-1];
        puVar18[-1] = *puVar16;
        puVar17 = puVar16 + -1;
        *puVar16 = uVar1;
        puVar16 = puVar17;
      } while (puVar18 < puVar17);
      uVar12 = (ulong)local_181;
    }
    pppppppbVar2 = (byte *******)local_198;
    if (-1 < (char)uVar12) {
      pppppppbVar2 = &local_198;
    }
    pppppppbVar15 = pppppppbVar2;
    if (local_178 < puVar13) {
      if (-1 < (char)uVar12) {
        local_190 = uVar12 & 0xff;
      }
      puVar18 = local_178;
      do {
        bVar4 = *(byte *)pppppppbVar15;
        if (((bVar4 != 0) && (bVar4 != 0xff)) && (*puVar18 != (uint)bVar4)) goto LAB_00529084;
        puVar18 = puVar18 + 1;
        if (1 < (long)((long)pppppppbVar2 + (local_190 - (long)pppppppbVar15))) {
          pppppppbVar15 = (byte *******)((long)pppppppbVar15 + 1);
        }
      } while (puVar18 < puVar13);
    }
    bVar4 = *(byte *)pppppppbVar15;
    if (((bVar4 != 0) && (bVar4 != 0xff)) && ((uint)bVar4 <= *puVar13 - 1)) {
LAB_00529084:
      *param_5 = 4;
    }
  }
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    if (param_3 != (long *)0x0) goto LAB_005290d4;
LAB_005290ac:
    if (!bVar6) goto LAB_00529114;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar7 = *(int *)param_2[3];
    }
    bVar6 = iVar7 == -1;
    plVar3 = (long *)0x0;
    if (!bVar6) {
      plVar3 = param_2;
    }
    param_2 = plVar3;
    if (param_3 == (long *)0x0) goto LAB_005290ac;
LAB_005290d4:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar7 = *(int *)param_3[3];
    }
    if (bVar6 != (iVar7 == -1)) goto LAB_00529114;
  }
  *param_5 = *param_5 | 2;
LAB_00529114:
  if ((long)local_1a0 < 0) {
    operator_delete(local_1b0);
  }
  if ((char)local_181 < '\0') {
    operator_delete(local_198);
  }
  if (*(long *)(lVar5 + 0x28) == local_70) {
    return param_2;
  }
LAB_0052923c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00529248  thunk_FUN_0052924c =====

long * thunk_FUN_0052924c(undefined8 param_1,long *param_2,long *param_3,long param_4,uint *param_5,
                         undefined8 *param_6)

{
  uint uVar1;
  byte *******pppppppbVar2;
  long *plVar3;
  byte bVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint *puVar12;
  undefined8 *******pppppppuVar13;
  byte *******pppppppbVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  undefined4 uVar18;
  uint uStack_1c4;
  uint *puStack_1c0;
  undefined8 ******ppppppuStack_1b8;
  undefined8 ******ppppppuStack_1b0;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  byte ******ppppppbStack_198;
  ulong uStack_190;
  byte bStack_181;
  undefined4 uStack_17c;
  uint auStack_178 [40];
  undefined1 auStack_d8 [104];
  long lStack_70;
  
  lVar5 = tpidr_el0;
  lStack_70 = *(long *)(lVar5 + 0x28);
  uVar1 = *(uint *)(param_4 + 8) & 0x4a;
  if (uVar1 == 0) {
    uVar18 = 0;
  }
  else if (uVar1 == 0x40) {
    uVar18 = 8;
  }
  else if (uVar1 == 8) {
    uVar18 = 0x10;
  }
  else {
    uVar18 = 10;
  }
  uVar8 = FUN_0052c850(param_1,param_4,auStack_d8);
  FUN_0052c6e0(&ppppppbStack_198,param_4,&uStack_17c);
  ppppppuStack_1b0 = (undefined8 *******)0x0;
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  FUN_0054809c(&ppppppuStack_1b0,0x16,0);
  puStack_1c0 = auStack_178;
  uStack_1c4 = 0;
  pppppppuVar13 = (undefined8 *******)ppppppuStack_1b0;
  ppppppuStack_1b8 = ppppppuStack_1b0;
  if (-1 < (long)uStack_1a0) {
    pppppppuVar13 = &ppppppuStack_1b0;
    ppppppuStack_1b8 = &ppppppuStack_1b0;
  }
LAB_00529338:
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    if (param_3 != (long *)0x0) goto LAB_00529380;
LAB_00529358:
    if (bVar6 != false) goto LAB_00529500;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar7 = *(int *)param_2[3];
    }
    bVar6 = iVar7 == -1;
    plVar3 = (long *)0x0;
    if (!bVar6) {
      plVar3 = param_2;
    }
    param_2 = plVar3;
    if (param_3 == (long *)0x0) goto LAB_00529358;
LAB_00529380:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar7 = *(int *)param_3[3];
    }
    plVar3 = (long *)0x0;
    if (iVar7 != -1) {
      plVar3 = param_3;
    }
    param_3 = plVar3;
    if (bVar6 == (iVar7 == -1)) goto LAB_00529500;
  }
  uVar9 = uStack_1a8;
  if (-1 < (long)uStack_1a0) {
    uVar9 = uStack_1a0 >> 0x38;
  }
  if ((undefined8 *******)ppppppuStack_1b8 == (undefined8 *******)((long)pppppppuVar13 + uVar9)) {
    if ((long)uVar9 < 1) {
      uVar10 = uVar9 * 2;
      pppppppuVar13 = (undefined8 *******)ppppppuStack_1b0;
      uVar11 = uVar10;
      if (-1 < (long)uStack_1a0) {
        if (0x16 < uVar10) {
          if (*(long *)(lVar5 + 0x28) == lStack_70) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_00529814;
        }
        uStack_1a0 = CONCAT17((char)uVar10,(undefined7)uStack_1a0);
        pppppppuVar13 = &ppppppuStack_1b0;
        uVar11 = uStack_1a8;
      }
      uStack_1a8 = uVar11;
      *(undefined1 *)((long)pppppppuVar13 + uVar10) = 0;
    }
    else {
      FUN_0054809c(&ppppppuStack_1b0,uVar9,0);
    }
    uVar11 = (uStack_1a0 & 0x7fffffffffffffff) - 1;
    uVar10 = uStack_1a8;
    if (-1 < (long)uStack_1a0) {
      uVar11 = 0x16;
      uVar10 = uStack_1a0 >> 0x38;
    }
    if (uVar11 < uVar10 || uVar11 - uVar10 == 0) {
      pppppppuVar13 = (undefined8 *******)ppppppuStack_1b0;
      uVar10 = uVar11;
      if (-1 < (long)uStack_1a0) {
        if (0x16 < uVar11) {
          if (*(long *)(lVar5 + 0x28) == lStack_70) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_00529814;
        }
        uStack_1a0 = CONCAT17((char)uVar11,(undefined7)uStack_1a0);
        pppppppuVar13 = &ppppppuStack_1b0;
        uVar10 = uStack_1a8;
      }
      uStack_1a8 = uVar10;
      *(undefined1 *)((long)pppppppuVar13 + uVar11) = 0;
    }
    else {
      FUN_0054809c(&ppppppuStack_1b0,uVar11 - uVar10,0);
    }
    pppppppuVar13 = (undefined8 *******)ppppppuStack_1b0;
    if (-1 < (long)uStack_1a0) {
      pppppppuVar13 = &ppppppuStack_1b0;
    }
    ppppppuStack_1b8 = (undefined8 ******)((long)pppppppuVar13 + uVar9);
  }
  if ((uint *)param_2[3] == (uint *)param_2[4]) {
    uVar9 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    uVar9 = (ulong)*(uint *)param_2[3];
  }
  iVar7 = FUN_0052b564(uVar9,uVar18,pppppppuVar13,&ppppppuStack_1b8,&uStack_1c4,uStack_17c,
                       &ppppppbStack_198,auStack_178,&puStack_1c0,uVar8);
  if (iVar7 != 0) goto LAB_00529500;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 4;
  }
  goto LAB_00529338;
LAB_00529500:
  uVar9 = uStack_190;
  if (-1 < (char)bStack_181) {
    uVar9 = (ulong)bStack_181;
  }
  if ((uVar9 != 0) && ((long)puStack_1c0 - (long)auStack_178 < 0xa0)) {
    *puStack_1c0 = uStack_1c4;
    puStack_1c0 = puStack_1c0 + 1;
  }
  uVar8 = FUN_00545fb8(pppppppuVar13,ppppppuStack_1b8,param_5,uVar18);
  uVar11 = (ulong)(uint)(int)(char)bStack_181;
  uVar9 = uStack_190;
  if (-1 < (char)bStack_181) {
    uVar9 = (ulong)bStack_181;
  }
  *param_6 = uVar8;
  if ((4 < (long)puStack_1c0 - (long)auStack_178) && (uVar9 != 0)) {
    puVar12 = puStack_1c0 + -1;
    if ((auStack_178 != puStack_1c0) && (auStack_178 < puVar12)) {
      puVar17 = auStack_178;
      puVar15 = puVar12;
      do {
        puVar17 = puVar17 + 1;
        uVar1 = puVar17[-1];
        puVar17[-1] = *puVar15;
        puVar16 = puVar15 + -1;
        *puVar15 = uVar1;
        puVar15 = puVar16;
      } while (puVar17 < puVar16);
      uVar11 = (ulong)bStack_181;
    }
    pppppppbVar2 = (byte *******)ppppppbStack_198;
    if (-1 < (char)uVar11) {
      pppppppbVar2 = &ppppppbStack_198;
    }
    pppppppbVar14 = pppppppbVar2;
    if (auStack_178 < puVar12) {
      if (-1 < (char)uVar11) {
        uStack_190 = uVar11 & 0xff;
      }
      puVar17 = auStack_178;
      do {
        bVar4 = *(byte *)pppppppbVar14;
        if (((bVar4 != 0) && (bVar4 != 0xff)) && (*puVar17 != (uint)bVar4)) goto LAB_0052965c;
        puVar17 = puVar17 + 1;
        if (1 < (long)((long)pppppppbVar2 + (uStack_190 - (long)pppppppbVar14))) {
          pppppppbVar14 = (byte *******)((long)pppppppbVar14 + 1);
        }
      } while (puVar17 < puVar12);
    }
    bVar4 = *(byte *)pppppppbVar14;
    if (((bVar4 != 0) && (bVar4 != 0xff)) && ((uint)bVar4 <= *puVar12 - 1)) {
LAB_0052965c:
      *param_5 = 4;
    }
  }
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    if (param_3 != (long *)0x0) goto LAB_005296ac;
LAB_00529684:
    if (!bVar6) goto LAB_005296ec;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar7 = *(int *)param_2[3];
    }
    bVar6 = iVar7 == -1;
    plVar3 = (long *)0x0;
    if (!bVar6) {
      plVar3 = param_2;
    }
    param_2 = plVar3;
    if (param_3 == (long *)0x0) goto LAB_00529684;
LAB_005296ac:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar7 = *(int *)param_3[3];
    }
    if (bVar6 != (iVar7 == -1)) goto LAB_005296ec;
  }
  *param_5 = *param_5 | 2;
LAB_005296ec:
  if ((long)uStack_1a0 < 0) {
    operator_delete(ppppppuStack_1b0);
  }
  if ((char)bStack_181 < '\0') {
    operator_delete(ppppppbStack_198);
  }
  if (*(long *)(lVar5 + 0x28) == lStack_70) {
    return param_2;
  }
LAB_00529814:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0052924c  FUN_0052924c =====

long * FUN_0052924c(undefined8 param_1,long *param_2,long *param_3,long param_4,uint *param_5,
                   undefined8 *param_6)

{
  uint uVar1;
  byte *******pppppppbVar2;
  long *plVar3;
  byte bVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint *puVar12;
  undefined8 *******pppppppuVar13;
  byte *******pppppppbVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  undefined4 uVar18;
  uint local_1c4;
  uint *local_1c0;
  undefined8 ******local_1b8;
  undefined8 ******local_1b0;
  ulong local_1a8;
  undefined8 local_1a0;
  byte ******local_198;
  ulong local_190;
  byte local_181;
  undefined4 local_17c;
  uint local_178 [40];
  undefined1 auStack_d8 [104];
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  uVar1 = *(uint *)(param_4 + 8) & 0x4a;
  if (uVar1 == 0) {
    uVar18 = 0;
  }
  else if (uVar1 == 0x40) {
    uVar18 = 8;
  }
  else if (uVar1 == 8) {
    uVar18 = 0x10;
  }
  else {
    uVar18 = 10;
  }
  uVar8 = FUN_0052c850(param_1,param_4,auStack_d8);
  FUN_0052c6e0(&local_198,param_4,&local_17c);
  local_1b0 = (undefined8 *******)0x0;
  local_1a8 = 0;
  local_1a0 = 0;
                    /* try { // try from 005292f4 to 00529307 has its CatchHandler @ 005297c8 */
  FUN_0054809c(&local_1b0,0x16,0);
  local_1c0 = local_178;
  local_1c4 = 0;
  pppppppuVar13 = (undefined8 *******)local_1b0;
  local_1b8 = local_1b0;
  if (-1 < (long)local_1a0) {
    pppppppuVar13 = &local_1b0;
    local_1b8 = &local_1b0;
  }
LAB_00529338:
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    if (param_3 != (long *)0x0) goto LAB_00529380;
LAB_00529358:
    if (bVar6 != false) goto LAB_00529500;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
                    /* try { // try from 00529368 to 005293a3 has its CatchHandler @ 005297d4 */
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar7 = *(int *)param_2[3];
    }
    bVar6 = iVar7 == -1;
    plVar3 = (long *)0x0;
    if (!bVar6) {
      plVar3 = param_2;
    }
    param_2 = plVar3;
    if (param_3 == (long *)0x0) goto LAB_00529358;
LAB_00529380:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar7 = *(int *)param_3[3];
    }
    plVar3 = (long *)0x0;
    if (iVar7 != -1) {
      plVar3 = param_3;
    }
    param_3 = plVar3;
    if (bVar6 == (iVar7 == -1)) goto LAB_00529500;
  }
  uVar9 = local_1a8;
  if (-1 < (long)local_1a0) {
    uVar9 = local_1a0 >> 0x38;
  }
  if ((undefined8 *******)local_1b8 == (undefined8 *******)((long)pppppppuVar13 + uVar9)) {
    if ((long)uVar9 < 1) {
      uVar10 = uVar9 * 2;
      pppppppuVar13 = (undefined8 *******)local_1b0;
      uVar11 = uVar10;
      if (-1 < (long)local_1a0) {
        if (0x16 < uVar10) {
          if (*(long *)(lVar5 + 0x28) == local_70) {
                    /* try { // try from 005297a0 to 005297c7 has its CatchHandler @ 00529818 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_00529814;
        }
        local_1a0 = CONCAT17((char)uVar10,(undefined7)local_1a0);
        pppppppuVar13 = &local_1b0;
        uVar11 = local_1a8;
      }
      local_1a8 = uVar11;
      *(undefined1 *)((long)pppppppuVar13 + uVar10) = 0;
    }
    else {
                    /* try { // try from 005293e4 to 00529453 has its CatchHandler @ 005297d0 */
      FUN_0054809c(&local_1b0,uVar9,0);
    }
    uVar11 = (local_1a0 & 0x7fffffffffffffff) - 1;
    uVar10 = local_1a8;
    if (-1 < (long)local_1a0) {
      uVar11 = 0x16;
      uVar10 = local_1a0 >> 0x38;
    }
    if (uVar11 < uVar10 || uVar11 - uVar10 == 0) {
      pppppppuVar13 = (undefined8 *******)local_1b0;
      uVar10 = uVar11;
      if (-1 < (long)local_1a0) {
        if (0x16 < uVar11) {
          if (*(long *)(lVar5 + 0x28) == local_70) {
                    /* try { // try from 00529764 to 0052978b has its CatchHandler @ 0052981c */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_00529814;
        }
        local_1a0 = CONCAT17((char)uVar11,(undefined7)local_1a0);
        pppppppuVar13 = &local_1b0;
        uVar10 = local_1a8;
      }
      local_1a8 = uVar10;
      *(undefined1 *)((long)pppppppuVar13 + uVar11) = 0;
    }
    else {
      FUN_0054809c(&local_1b0,uVar11 - uVar10,0);
    }
    pppppppuVar13 = (undefined8 *******)local_1b0;
    if (-1 < (long)local_1a0) {
      pppppppuVar13 = &local_1b0;
    }
    local_1b8 = (undefined8 ******)((long)pppppppuVar13 + uVar9);
  }
  if ((uint *)param_2[3] == (uint *)param_2[4]) {
                    /* try { // try from 005294b0 to 005294fb has its CatchHandler @ 005297d4 */
    uVar9 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    uVar9 = (ulong)*(uint *)param_2[3];
  }
  iVar7 = FUN_0052b564(uVar9,uVar18,pppppppuVar13,&local_1b8,&local_1c4,local_17c,&local_198,
                       local_178,&local_1c0,uVar8);
  if (iVar7 != 0) goto LAB_00529500;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 4;
  }
  goto LAB_00529338;
LAB_00529500:
  uVar9 = local_190;
  if (-1 < (char)local_181) {
    uVar9 = (ulong)local_181;
  }
  if ((uVar9 != 0) && ((long)local_1c0 - (long)local_178 < 0xa0)) {
    *local_1c0 = local_1c4;
    local_1c0 = local_1c0 + 1;
  }
                    /* try { // try from 0052953c to 005296cf has its CatchHandler @ 005297cc */
  uVar8 = FUN_00545fb8(pppppppuVar13,local_1b8,param_5,uVar18);
  uVar11 = (ulong)(uint)(int)(char)local_181;
  uVar9 = local_190;
  if (-1 < (char)local_181) {
    uVar9 = (ulong)local_181;
  }
  *param_6 = uVar8;
  if ((4 < (long)local_1c0 - (long)local_178) && (uVar9 != 0)) {
    puVar12 = local_1c0 + -1;
    if ((local_178 != local_1c0) && (local_178 < puVar12)) {
      puVar17 = local_178;
      puVar15 = puVar12;
      do {
        puVar17 = puVar17 + 1;
        uVar1 = puVar17[-1];
        puVar17[-1] = *puVar15;
        puVar16 = puVar15 + -1;
        *puVar15 = uVar1;
        puVar15 = puVar16;
      } while (puVar17 < puVar16);
      uVar11 = (ulong)local_181;
    }
    pppppppbVar2 = (byte *******)local_198;
    if (-1 < (char)uVar11) {
      pppppppbVar2 = &local_198;
    }
    pppppppbVar14 = pppppppbVar2;
    if (local_178 < puVar12) {
      if (-1 < (char)uVar11) {
        local_190 = uVar11 & 0xff;
      }
      puVar17 = local_178;
      do {
        bVar4 = *(byte *)pppppppbVar14;
        if (((bVar4 != 0) && (bVar4 != 0xff)) && (*puVar17 != (uint)bVar4)) goto LAB_0052965c;
        puVar17 = puVar17 + 1;
        if (1 < (long)((long)pppppppbVar2 + (local_190 - (long)pppppppbVar14))) {
          pppppppbVar14 = (byte *******)((long)pppppppbVar14 + 1);
        }
      } while (puVar17 < puVar12);
    }
    bVar4 = *(byte *)pppppppbVar14;
    if (((bVar4 != 0) && (bVar4 != 0xff)) && ((uint)bVar4 <= *puVar12 - 1)) {
LAB_0052965c:
      *param_5 = 4;
    }
  }
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    if (param_3 != (long *)0x0) goto LAB_005296ac;
LAB_00529684:
    if (!bVar6) goto LAB_005296ec;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar7 = *(int *)param_2[3];
    }
    bVar6 = iVar7 == -1;
    plVar3 = (long *)0x0;
    if (!bVar6) {
      plVar3 = param_2;
    }
    param_2 = plVar3;
    if (param_3 == (long *)0x0) goto LAB_00529684;
LAB_005296ac:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar7 = *(int *)param_3[3];
    }
    if (bVar6 != (iVar7 == -1)) goto LAB_005296ec;
  }
  *param_5 = *param_5 | 2;
LAB_005296ec:
  if ((long)local_1a0 < 0) {
    operator_delete(local_1b0);
  }
  if ((char)local_181 < '\0') {
    operator_delete(local_198);
  }
  if (*(long *)(lVar5 + 0x28) == local_70) {
    return param_2;
  }
LAB_00529814:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00529820  thunk_FUN_00529824 =====

long * thunk_FUN_00529824(undefined8 param_1,long *param_2,long *param_3,long param_4,uint *param_5,
                         undefined8 *param_6)

{
  uint uVar1;
  byte *******pppppppbVar2;
  long *plVar3;
  byte bVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint *puVar12;
  undefined8 *******pppppppuVar13;
  byte *******pppppppbVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  undefined4 uVar18;
  uint uStack_1c4;
  uint *puStack_1c0;
  undefined8 ******ppppppuStack_1b8;
  undefined8 ******ppppppuStack_1b0;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  byte ******ppppppbStack_198;
  ulong uStack_190;
  byte bStack_181;
  undefined4 uStack_17c;
  uint auStack_178 [40];
  undefined1 auStack_d8 [104];
  long lStack_70;
  
  lVar5 = tpidr_el0;
  lStack_70 = *(long *)(lVar5 + 0x28);
  uVar1 = *(uint *)(param_4 + 8) & 0x4a;
  if (uVar1 == 0) {
    uVar18 = 0;
  }
  else if (uVar1 == 0x40) {
    uVar18 = 8;
  }
  else if (uVar1 == 8) {
    uVar18 = 0x10;
  }
  else {
    uVar18 = 10;
  }
  uVar8 = FUN_0052c850(param_1,param_4,auStack_d8);
  FUN_0052c6e0(&ppppppbStack_198,param_4,&uStack_17c);
  ppppppuStack_1b0 = (undefined8 *******)0x0;
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  FUN_0054809c(&ppppppuStack_1b0,0x16,0);
  puStack_1c0 = auStack_178;
  uStack_1c4 = 0;
  pppppppuVar13 = (undefined8 *******)ppppppuStack_1b0;
  ppppppuStack_1b8 = ppppppuStack_1b0;
  if (-1 < (long)uStack_1a0) {
    pppppppuVar13 = &ppppppuStack_1b0;
    ppppppuStack_1b8 = &ppppppuStack_1b0;
  }
LAB_00529910:
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    if (param_3 != (long *)0x0) goto LAB_00529958;
LAB_00529930:
    if (bVar6 != false) goto LAB_00529ad8;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar7 = *(int *)param_2[3];
    }
    bVar6 = iVar7 == -1;
    plVar3 = (long *)0x0;
    if (!bVar6) {
      plVar3 = param_2;
    }
    param_2 = plVar3;
    if (param_3 == (long *)0x0) goto LAB_00529930;
LAB_00529958:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar7 = *(int *)param_3[3];
    }
    plVar3 = (long *)0x0;
    if (iVar7 != -1) {
      plVar3 = param_3;
    }
    param_3 = plVar3;
    if (bVar6 == (iVar7 == -1)) goto LAB_00529ad8;
  }
  uVar9 = uStack_1a8;
  if (-1 < (long)uStack_1a0) {
    uVar9 = uStack_1a0 >> 0x38;
  }
  if ((undefined8 *******)ppppppuStack_1b8 == (undefined8 *******)((long)pppppppuVar13 + uVar9)) {
    if ((long)uVar9 < 1) {
      uVar10 = uVar9 * 2;
      pppppppuVar13 = (undefined8 *******)ppppppuStack_1b0;
      uVar11 = uVar10;
      if (-1 < (long)uStack_1a0) {
        if (0x16 < uVar10) {
          if (*(long *)(lVar5 + 0x28) == lStack_70) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_00529dec;
        }
        uStack_1a0 = CONCAT17((char)uVar10,(undefined7)uStack_1a0);
        pppppppuVar13 = &ppppppuStack_1b0;
        uVar11 = uStack_1a8;
      }
      uStack_1a8 = uVar11;
      *(undefined1 *)((long)pppppppuVar13 + uVar10) = 0;
    }
    else {
      FUN_0054809c(&ppppppuStack_1b0,uVar9,0);
    }
    uVar11 = (uStack_1a0 & 0x7fffffffffffffff) - 1;
    uVar10 = uStack_1a8;
    if (-1 < (long)uStack_1a0) {
      uVar11 = 0x16;
      uVar10 = uStack_1a0 >> 0x38;
    }
    if (uVar11 < uVar10 || uVar11 - uVar10 == 0) {
      pppppppuVar13 = (undefined8 *******)ppppppuStack_1b0;
      uVar10 = uVar11;
      if (-1 < (long)uStack_1a0) {
        if (0x16 < uVar11) {
          if (*(long *)(lVar5 + 0x28) == lStack_70) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_00529dec;
        }
        uStack_1a0 = CONCAT17((char)uVar11,(undefined7)uStack_1a0);
        pppppppuVar13 = &ppppppuStack_1b0;
        uVar10 = uStack_1a8;
      }
      uStack_1a8 = uVar10;
      *(undefined1 *)((long)pppppppuVar13 + uVar11) = 0;
    }
    else {
      FUN_0054809c(&ppppppuStack_1b0,uVar11 - uVar10,0);
    }
    pppppppuVar13 = (undefined8 *******)ppppppuStack_1b0;
    if (-1 < (long)uStack_1a0) {
      pppppppuVar13 = &ppppppuStack_1b0;
    }
    ppppppuStack_1b8 = (undefined8 ******)((long)pppppppuVar13 + uVar9);
  }
  if ((uint *)param_2[3] == (uint *)param_2[4]) {
    uVar9 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    uVar9 = (ulong)*(uint *)param_2[3];
  }
  iVar7 = FUN_0052b564(uVar9,uVar18,pppppppuVar13,&ppppppuStack_1b8,&uStack_1c4,uStack_17c,
                       &ppppppbStack_198,auStack_178,&puStack_1c0,uVar8);
  if (iVar7 != 0) goto LAB_00529ad8;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 4;
  }
  goto LAB_00529910;
LAB_00529ad8:
  uVar9 = uStack_190;
  if (-1 < (char)bStack_181) {
    uVar9 = (ulong)bStack_181;
  }
  if ((uVar9 != 0) && ((long)puStack_1c0 - (long)auStack_178 < 0xa0)) {
    *puStack_1c0 = uStack_1c4;
    puStack_1c0 = puStack_1c0 + 1;
  }
  uVar8 = FUN_00546130(pppppppuVar13,ppppppuStack_1b8,param_5,uVar18);
  uVar11 = (ulong)(uint)(int)(char)bStack_181;
  uVar9 = uStack_190;
  if (-1 < (char)bStack_181) {
    uVar9 = (ulong)bStack_181;
  }
  *param_6 = uVar8;
  if ((4 < (long)puStack_1c0 - (long)auStack_178) && (uVar9 != 0)) {
    puVar12 = puStack_1c0 + -1;
    if ((auStack_178 != puStack_1c0) && (auStack_178 < puVar12)) {
      puVar17 = auStack_178;
      puVar15 = puVar12;
      do {
        puVar17 = puVar17 + 1;
        uVar1 = puVar17[-1];
        puVar17[-1] = *puVar15;
        puVar16 = puVar15 + -1;
        *puVar15 = uVar1;
        puVar15 = puVar16;
      } while (puVar17 < puVar16);
      uVar11 = (ulong)bStack_181;
    }
    pppppppbVar2 = (byte *******)ppppppbStack_198;
    if (-1 < (char)uVar11) {
      pppppppbVar2 = &ppppppbStack_198;
    }
    pppppppbVar14 = pppppppbVar2;
    if (auStack_178 < puVar12) {
      if (-1 < (char)uVar11) {
        uStack_190 = uVar11 & 0xff;
      }
      puVar17 = auStack_178;
      do {
        bVar4 = *(byte *)pppppppbVar14;
        if (((bVar4 != 0) && (bVar4 != 0xff)) && (*puVar17 != (uint)bVar4)) goto LAB_00529c34;
        puVar17 = puVar17 + 1;
        if (1 < (long)((long)pppppppbVar2 + (uStack_190 - (long)pppppppbVar14))) {
          pppppppbVar14 = (byte *******)((long)pppppppbVar14 + 1);
        }
      } while (puVar17 < puVar12);
    }
    bVar4 = *(byte *)pppppppbVar14;
    if (((bVar4 != 0) && (bVar4 != 0xff)) && ((uint)bVar4 <= *puVar12 - 1)) {
LAB_00529c34:
      *param_5 = 4;
    }
  }
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    if (param_3 != (long *)0x0) goto LAB_00529c84;
LAB_00529c5c:
    if (!bVar6) goto LAB_00529cc4;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar7 = *(int *)param_2[3];
    }
    bVar6 = iVar7 == -1;
    plVar3 = (long *)0x0;
    if (!bVar6) {
      plVar3 = param_2;
    }
    param_2 = plVar3;
    if (param_3 == (long *)0x0) goto LAB_00529c5c;
LAB_00529c84:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar7 = *(int *)param_3[3];
    }
    if (bVar6 != (iVar7 == -1)) goto LAB_00529cc4;
  }
  *param_5 = *param_5 | 2;
LAB_00529cc4:
  if ((long)uStack_1a0 < 0) {
    operator_delete(ppppppuStack_1b0);
  }
  if ((char)bStack_181 < '\0') {
    operator_delete(ppppppbStack_198);
  }
  if (*(long *)(lVar5 + 0x28) == lStack_70) {
    return param_2;
  }
LAB_00529dec:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00529824  FUN_00529824 =====

long * FUN_00529824(undefined8 param_1,long *param_2,long *param_3,long param_4,uint *param_5,
                   undefined8 *param_6)

{
  uint uVar1;
  byte *******pppppppbVar2;
  long *plVar3;
  byte bVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint *puVar12;
  undefined8 *******pppppppuVar13;
  byte *******pppppppbVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  undefined4 uVar18;
  uint local_1c4;
  uint *local_1c0;
  undefined8 ******local_1b8;
  undefined8 ******local_1b0;
  ulong local_1a8;
  undefined8 local_1a0;
  byte ******local_198;
  ulong local_190;
  byte local_181;
  undefined4 local_17c;
  uint local_178 [40];
  undefined1 auStack_d8 [104];
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  uVar1 = *(uint *)(param_4 + 8) & 0x4a;
  if (uVar1 == 0) {
    uVar18 = 0;
  }
  else if (uVar1 == 0x40) {
    uVar18 = 8;
  }
  else if (uVar1 == 8) {
    uVar18 = 0x10;
  }
  else {
    uVar18 = 10;
  }
  uVar8 = FUN_0052c850(param_1,param_4,auStack_d8);
  FUN_0052c6e0(&local_198,param_4,&local_17c);
  local_1b0 = (undefined8 *******)0x0;
  local_1a8 = 0;
  local_1a0 = 0;
                    /* try { // try from 005298cc to 005298df has its CatchHandler @ 00529da0 */
  FUN_0054809c(&local_1b0,0x16,0);
  local_1c0 = local_178;
  local_1c4 = 0;
  pppppppuVar13 = (undefined8 *******)local_1b0;
  local_1b8 = local_1b0;
  if (-1 < (long)local_1a0) {
    pppppppuVar13 = &local_1b0;
    local_1b8 = &local_1b0;
  }
LAB_00529910:
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    if (param_3 != (long *)0x0) goto LAB_00529958;
LAB_00529930:
    if (bVar6 != false) goto LAB_00529ad8;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
                    /* try { // try from 00529940 to 0052997b has its CatchHandler @ 00529dac */
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar7 = *(int *)param_2[3];
    }
    bVar6 = iVar7 == -1;
    plVar3 = (long *)0x0;
    if (!bVar6) {
      plVar3 = param_2;
    }
    param_2 = plVar3;
    if (param_3 == (long *)0x0) goto LAB_00529930;
LAB_00529958:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar7 = *(int *)param_3[3];
    }
    plVar3 = (long *)0x0;
    if (iVar7 != -1) {
      plVar3 = param_3;
    }
    param_3 = plVar3;
    if (bVar6 == (iVar7 == -1)) goto LAB_00529ad8;
  }
  uVar9 = local_1a8;
  if (-1 < (long)local_1a0) {
    uVar9 = local_1a0 >> 0x38;
  }
  if ((undefined8 *******)local_1b8 == (undefined8 *******)((long)pppppppuVar13 + uVar9)) {
    if ((long)uVar9 < 1) {
      uVar10 = uVar9 * 2;
      pppppppuVar13 = (undefined8 *******)local_1b0;
      uVar11 = uVar10;
      if (-1 < (long)local_1a0) {
        if (0x16 < uVar10) {
          if (*(long *)(lVar5 + 0x28) == local_70) {
                    /* try { // try from 00529d78 to 00529d9f has its CatchHandler @ 00529df0 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_00529dec;
        }
        local_1a0 = CONCAT17((char)uVar10,(undefined7)local_1a0);
        pppppppuVar13 = &local_1b0;
        uVar11 = local_1a8;
      }
      local_1a8 = uVar11;
      *(undefined1 *)((long)pppppppuVar13 + uVar10) = 0;
    }
    else {
                    /* try { // try from 005299bc to 00529a2b has its CatchHandler @ 00529da8 */
      FUN_0054809c(&local_1b0,uVar9,0);
    }
    uVar11 = (local_1a0 & 0x7fffffffffffffff) - 1;
    uVar10 = local_1a8;
    if (-1 < (long)local_1a0) {
      uVar11 = 0x16;
      uVar10 = local_1a0 >> 0x38;
    }
    if (uVar11 < uVar10 || uVar11 - uVar10 == 0) {
      pppppppuVar13 = (undefined8 *******)local_1b0;
      uVar10 = uVar11;
      if (-1 < (long)local_1a0) {
        if (0x16 < uVar11) {
          if (*(long *)(lVar5 + 0x28) == local_70) {
                    /* try { // try from 00529d3c to 00529d63 has its CatchHandler @ 00529df4 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_00529dec;
        }
        local_1a0 = CONCAT17((char)uVar11,(undefined7)local_1a0);
        pppppppuVar13 = &local_1b0;
        uVar10 = local_1a8;
      }
      local_1a8 = uVar10;
      *(undefined1 *)((long)pppppppuVar13 + uVar11) = 0;
    }
    else {
      FUN_0054809c(&local_1b0,uVar11 - uVar10,0);
    }
    pppppppuVar13 = (undefined8 *******)local_1b0;
    if (-1 < (long)local_1a0) {
      pppppppuVar13 = &local_1b0;
    }
    local_1b8 = (undefined8 ******)((long)pppppppuVar13 + uVar9);
  }
  if ((uint *)param_2[3] == (uint *)param_2[4]) {
                    /* try { // try from 00529a88 to 00529ad3 has its CatchHandler @ 00529dac */
    uVar9 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    uVar9 = (ulong)*(uint *)param_2[3];
  }
  iVar7 = FUN_0052b564(uVar9,uVar18,pppppppuVar13,&local_1b8,&local_1c4,local_17c,&local_198,
                       local_178,&local_1c0,uVar8);
  if (iVar7 != 0) goto LAB_00529ad8;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 4;
  }
  goto LAB_00529910;
LAB_00529ad8:
  uVar9 = local_190;
  if (-1 < (char)local_181) {
    uVar9 = (ulong)local_181;
  }
  if ((uVar9 != 0) && ((long)local_1c0 - (long)local_178 < 0xa0)) {
    *local_1c0 = local_1c4;
    local_1c0 = local_1c0 + 1;
  }
                    /* try { // try from 00529b14 to 00529ca7 has its CatchHandler @ 00529da4 */
  uVar8 = FUN_00546130(pppppppuVar13,local_1b8,param_5,uVar18);
  uVar11 = (ulong)(uint)(int)(char)local_181;
  uVar9 = local_190;
  if (-1 < (char)local_181) {
    uVar9 = (ulong)local_181;
  }
  *param_6 = uVar8;
  if ((4 < (long)local_1c0 - (long)local_178) && (uVar9 != 0)) {
    puVar12 = local_1c0 + -1;
    if ((local_178 != local_1c0) && (local_178 < puVar12)) {
      puVar17 = local_178;
      puVar15 = puVar12;
      do {
        puVar17 = puVar17 + 1;
        uVar1 = puVar17[-1];
        puVar17[-1] = *puVar15;
        puVar16 = puVar15 + -1;
        *puVar15 = uVar1;
        puVar15 = puVar16;
      } while (puVar17 < puVar16);
      uVar11 = (ulong)local_181;
    }
    pppppppbVar2 = (byte *******)local_198;
    if (-1 < (char)uVar11) {
      pppppppbVar2 = &local_198;
    }
    pppppppbVar14 = pppppppbVar2;
    if (local_178 < puVar12) {
      if (-1 < (char)uVar11) {
        local_190 = uVar11 & 0xff;
      }
      puVar17 = local_178;
      do {
        bVar4 = *(byte *)pppppppbVar14;
        if (((bVar4 != 0) && (bVar4 != 0xff)) && (*puVar17 != (uint)bVar4)) goto LAB_00529c34;
        puVar17 = puVar17 + 1;
        if (1 < (long)((long)pppppppbVar2 + (local_190 - (long)pppppppbVar14))) {
          pppppppbVar14 = (byte *******)((long)pppppppbVar14 + 1);
        }
      } while (puVar17 < puVar12);
    }
    bVar4 = *(byte *)pppppppbVar14;
    if (((bVar4 != 0) && (bVar4 != 0xff)) && ((uint)bVar4 <= *puVar12 - 1)) {
LAB_00529c34:
      *param_5 = 4;
    }
  }
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    if (param_3 != (long *)0x0) goto LAB_00529c84;
LAB_00529c5c:
    if (!bVar6) goto LAB_00529cc4;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar7 = *(int *)param_2[3];
    }
    bVar6 = iVar7 == -1;
    plVar3 = (long *)0x0;
    if (!bVar6) {
      plVar3 = param_2;
    }
    param_2 = plVar3;
    if (param_3 == (long *)0x0) goto LAB_00529c5c;
LAB_00529c84:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar7 = *(int *)param_3[3];
    }
    if (bVar6 != (iVar7 == -1)) goto LAB_00529cc4;
  }
  *param_5 = *param_5 | 2;
LAB_00529cc4:
  if ((long)local_1a0 < 0) {
    operator_delete(local_1b0);
  }
  if ((char)local_181 < '\0') {
    operator_delete(local_198);
  }
  if (*(long *)(lVar5 + 0x28) == local_70) {
    return param_2;
  }
LAB_00529dec:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00529df8  thunk_FUN_00529dfc =====

long * thunk_FUN_00529dfc(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,
                         uint *param_5,undefined4 *param_6)

{
  byte *******pppppppbVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint *puVar11;
  undefined8 *******pppppppuVar12;
  byte *******pppppppbVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  undefined4 uVar17;
  undefined1 auStack_1e4 [4];
  char acStack_1e0 [4];
  uint uStack_1dc;
  uint *puStack_1d8;
  undefined8 ******ppppppuStack_1d0;
  undefined8 ******ppppppuStack_1c8;
  ulong uStack_1c0;
  undefined8 uStack_1b8;
  byte ******ppppppbStack_1b0;
  ulong uStack_1a8;
  byte bStack_199;
  undefined4 uStack_198;
  undefined4 uStack_194;
  uint auStack_190 [40];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lVar5 = tpidr_el0;
  lStack_70 = *(long *)(lVar5 + 0x28);
  FUN_0052c050(&ppppppbStack_1b0,param_4,auStack_f0,&uStack_194,&uStack_198);
  ppppppuStack_1c8 = (undefined8 *******)0x0;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  FUN_0054809c(&ppppppuStack_1c8,0x16,0);
  pppppppuVar12 = (undefined8 *******)ppppppuStack_1c8;
  if (-1 < (long)uStack_1b8) {
    pppppppuVar12 = &ppppppuStack_1c8;
  }
  acStack_1e0[0] = '\x01';
  auStack_1e4[0] = 0x45;
  uStack_1dc = 0;
  puStack_1d8 = auStack_190;
  ppppppuStack_1d0 = pppppppuVar12;
LAB_00529eb4:
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    if (param_3 != (long *)0x0) goto LAB_00529efc;
LAB_00529ed4:
    if (bVar6 != false) goto LAB_0052a07c;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar7 = *(int *)param_2[3];
    }
    bVar6 = iVar7 == -1;
    plVar2 = (long *)0x0;
    if (!bVar6) {
      plVar2 = param_2;
    }
    param_2 = plVar2;
    if (param_3 == (long *)0x0) goto LAB_00529ed4;
LAB_00529efc:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar7 = *(int *)param_3[3];
    }
    plVar2 = (long *)0x0;
    if (iVar7 != -1) {
      plVar2 = param_3;
    }
    param_3 = plVar2;
    if (bVar6 == (iVar7 == -1)) goto LAB_0052a07c;
  }
  uVar8 = uStack_1c0;
  if (-1 < (long)uStack_1b8) {
    uVar8 = uStack_1b8 >> 0x38;
  }
  if ((undefined8 *******)ppppppuStack_1d0 == (undefined8 *******)((long)pppppppuVar12 + uVar8)) {
    if ((long)uVar8 < 1) {
      uVar9 = uVar8 * 2;
      pppppppuVar12 = (undefined8 *******)ppppppuStack_1c8;
      uVar10 = uVar9;
      if (-1 < (long)uStack_1b8) {
        if (0x16 < uVar9) {
          if (*(long *)(lVar5 + 0x28) == lStack_70) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_0052a398;
        }
        uStack_1b8 = CONCAT17((char)uVar9,(undefined7)uStack_1b8);
        pppppppuVar12 = &ppppppuStack_1c8;
        uVar10 = uStack_1c0;
      }
      uStack_1c0 = uVar10;
      *(undefined1 *)((long)pppppppuVar12 + uVar9) = 0;
    }
    else {
      FUN_0054809c(&ppppppuStack_1c8,uVar8,0);
    }
    uVar10 = (uStack_1b8 & 0x7fffffffffffffff) - 1;
    uVar9 = uStack_1c0;
    if (-1 < (long)uStack_1b8) {
      uVar10 = 0x16;
      uVar9 = uStack_1b8 >> 0x38;
    }
    if (uVar10 < uVar9 || uVar10 - uVar9 == 0) {
      pppppppuVar12 = (undefined8 *******)ppppppuStack_1c8;
      uVar9 = uVar10;
      if (-1 < (long)uStack_1b8) {
        if (0x16 < uVar10) {
          if (*(long *)(lVar5 + 0x28) == lStack_70) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_0052a398;
        }
        uStack_1b8 = CONCAT17((char)uVar10,(undefined7)uStack_1b8);
        pppppppuVar12 = &ppppppuStack_1c8;
        uVar9 = uStack_1c0;
      }
      uStack_1c0 = uVar9;
      *(undefined1 *)((long)pppppppuVar12 + uVar10) = 0;
    }
    else {
      FUN_0054809c(&ppppppuStack_1c8,uVar10 - uVar9,0);
    }
    pppppppuVar12 = (undefined8 *******)ppppppuStack_1c8;
    if (-1 < (long)uStack_1b8) {
      pppppppuVar12 = &ppppppuStack_1c8;
    }
    ppppppuStack_1d0 = (undefined8 ******)((long)pppppppuVar12 + uVar8);
  }
  if ((uint *)param_2[3] == (uint *)param_2[4]) {
    uVar8 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    uVar8 = (ulong)*(uint *)param_2[3];
  }
  iVar7 = FUN_0052c288(uVar8,acStack_1e0,auStack_1e4,pppppppuVar12,&ppppppuStack_1d0,uStack_194,
                       uStack_198,&ppppppbStack_1b0,auStack_190,&puStack_1d8,&uStack_1dc,auStack_f0)
  ;
  if (iVar7 != 0) goto LAB_0052a07c;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 4;
  }
  goto LAB_00529eb4;
LAB_0052a07c:
  uVar8 = uStack_1a8;
  if (-1 < (char)bStack_199) {
    uVar8 = (ulong)bStack_199;
  }
  if (((uVar8 != 0) && (acStack_1e0[0] != '\0')) && ((long)puStack_1d8 - (long)auStack_190 < 0xa0))
  {
    *puStack_1d8 = uStack_1dc;
    puStack_1d8 = puStack_1d8 + 1;
  }
  uVar17 = FUN_005462a8(pppppppuVar12,ppppppuStack_1d0,param_5);
  uVar10 = (ulong)(uint)(int)(char)bStack_199;
  uVar8 = uStack_1a8;
  if (-1 < (char)bStack_199) {
    uVar8 = (ulong)bStack_199;
  }
  *param_6 = uVar17;
  if ((4 < (long)puStack_1d8 - (long)auStack_190) && (uVar8 != 0)) {
    puVar11 = puStack_1d8 + -1;
    if ((auStack_190 != puStack_1d8) && (auStack_190 < puVar11)) {
      puVar16 = auStack_190;
      puVar14 = puVar11;
      do {
        puVar16 = puVar16 + 1;
        uVar3 = puVar16[-1];
        puVar16[-1] = *puVar14;
        puVar15 = puVar14 + -1;
        *puVar14 = uVar3;
        puVar14 = puVar15;
      } while (puVar16 < puVar15);
      uVar10 = (ulong)bStack_199;
    }
    pppppppbVar1 = (byte *******)ppppppbStack_1b0;
    if (-1 < (char)uVar10) {
      pppppppbVar1 = &ppppppbStack_1b0;
    }
    pppppppbVar13 = pppppppbVar1;
    if (auStack_190 < puVar11) {
      if (-1 < (char)uVar10) {
        uStack_1a8 = uVar10 & 0xff;
      }
      puVar16 = auStack_190;
      do {
        bVar4 = *(byte *)pppppppbVar13;
        if (((bVar4 != 0) && (bVar4 != 0xff)) && (*puVar16 != (uint)bVar4)) goto LAB_0052a1e0;
        puVar16 = puVar16 + 1;
        if (1 < (long)((long)pppppppbVar1 + (uStack_1a8 - (long)pppppppbVar13))) {
          pppppppbVar13 = (byte *******)((long)pppppppbVar13 + 1);
        }
      } while (puVar16 < puVar11);
    }
    bVar4 = *(byte *)pppppppbVar13;
    if (((bVar4 != 0) && (bVar4 != 0xff)) && ((uint)bVar4 <= *puVar11 - 1)) {
LAB_0052a1e0:
      *param_5 = 4;
    }
  }
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    if (param_3 != (long *)0x0) goto LAB_0052a230;
LAB_0052a208:
    if (!bVar6) goto LAB_0052a270;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar7 = *(int *)param_2[3];
    }
    bVar6 = iVar7 == -1;
    plVar2 = (long *)0x0;
    if (!bVar6) {
      plVar2 = param_2;
    }
    param_2 = plVar2;
    if (param_3 == (long *)0x0) goto LAB_0052a208;
LAB_0052a230:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar7 = *(int *)param_3[3];
    }
    if (bVar6 != (iVar7 == -1)) goto LAB_0052a270;
  }
  *param_5 = *param_5 | 2;
LAB_0052a270:
  if ((long)uStack_1b8 < 0) {
    operator_delete(ppppppuStack_1c8);
  }
  if ((char)bStack_199 < '\0') {
    operator_delete(ppppppbStack_1b0);
  }
  if (*(long *)(lVar5 + 0x28) == lStack_70) {
    return param_2;
  }
LAB_0052a398:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00529dfc  FUN_00529dfc =====

long * FUN_00529dfc(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,uint *param_5,
                   undefined4 *param_6)

{
  byte *******pppppppbVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint *puVar11;
  undefined8 *******pppppppuVar12;
  byte *******pppppppbVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  undefined4 uVar17;
  undefined1 local_1e4 [4];
  char local_1e0 [4];
  uint local_1dc;
  uint *local_1d8;
  undefined8 ******local_1d0;
  undefined8 ******local_1c8;
  ulong local_1c0;
  undefined8 local_1b8;
  byte ******local_1b0;
  ulong local_1a8;
  byte local_199;
  undefined4 local_198;
  undefined4 uStack_194;
  uint local_190 [40];
  undefined1 auStack_f0 [128];
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  FUN_0052c050(&local_1b0,param_4,auStack_f0,&uStack_194,&local_198);
  local_1c8 = (undefined8 *******)0x0;
  local_1c0 = 0;
  local_1b8 = 0;
                    /* try { // try from 00529e5c to 00529e6f has its CatchHandler @ 0052a34c */
  FUN_0054809c(&local_1c8,0x16,0);
  pppppppuVar12 = (undefined8 *******)local_1c8;
  if (-1 < (long)local_1b8) {
    pppppppuVar12 = &local_1c8;
  }
  local_1e0[0] = '\x01';
  local_1e4[0] = 0x45;
  local_1dc = 0;
  local_1d8 = local_190;
  local_1d0 = pppppppuVar12;
LAB_00529eb4:
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    if (param_3 != (long *)0x0) goto LAB_00529efc;
LAB_00529ed4:
    if (bVar6 != false) goto LAB_0052a07c;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
                    /* try { // try from 00529ee4 to 00529f1f has its CatchHandler @ 0052a358 */
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar7 = *(int *)param_2[3];
    }
    bVar6 = iVar7 == -1;
    plVar2 = (long *)0x0;
    if (!bVar6) {
      plVar2 = param_2;
    }
    param_2 = plVar2;
    if (param_3 == (long *)0x0) goto LAB_00529ed4;
LAB_00529efc:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar7 = *(int *)param_3[3];
    }
    plVar2 = (long *)0x0;
    if (iVar7 != -1) {
      plVar2 = param_3;
    }
    param_3 = plVar2;
    if (bVar6 == (iVar7 == -1)) goto LAB_0052a07c;
  }
  uVar8 = local_1c0;
  if (-1 < (long)local_1b8) {
    uVar8 = local_1b8 >> 0x38;
  }
  if ((undefined8 *******)local_1d0 == (undefined8 *******)((long)pppppppuVar12 + uVar8)) {
    if ((long)uVar8 < 1) {
      uVar9 = uVar8 * 2;
      pppppppuVar12 = (undefined8 *******)local_1c8;
      uVar10 = uVar9;
      if (-1 < (long)local_1b8) {
        if (0x16 < uVar9) {
          if (*(long *)(lVar5 + 0x28) == local_70) {
                    /* try { // try from 0052a324 to 0052a34b has its CatchHandler @ 0052a39c */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_0052a398;
        }
        local_1b8 = CONCAT17((char)uVar9,(undefined7)local_1b8);
        pppppppuVar12 = &local_1c8;
        uVar10 = local_1c0;
      }
      local_1c0 = uVar10;
      *(undefined1 *)((long)pppppppuVar12 + uVar9) = 0;
    }
    else {
                    /* try { // try from 00529f60 to 00529fcf has its CatchHandler @ 0052a354 */
      FUN_0054809c(&local_1c8,uVar8,0);
    }
    uVar10 = (local_1b8 & 0x7fffffffffffffff) - 1;
    uVar9 = local_1c0;
    if (-1 < (long)local_1b8) {
      uVar10 = 0x16;
      uVar9 = local_1b8 >> 0x38;
    }
    if (uVar10 < uVar9 || uVar10 - uVar9 == 0) {
      pppppppuVar12 = (undefined8 *******)local_1c8;
      uVar9 = uVar10;
      if (-1 < (long)local_1b8) {
        if (0x16 < uVar10) {
          if (*(long *)(lVar5 + 0x28) == local_70) {
                    /* try { // try from 0052a2e8 to 0052a30f has its CatchHandler @ 0052a3a0 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_0052a398;
        }
        local_1b8 = CONCAT17((char)uVar10,(undefined7)local_1b8);
        pppppppuVar12 = &local_1c8;
        uVar9 = local_1c0;
      }
      local_1c0 = uVar9;
      *(undefined1 *)((long)pppppppuVar12 + uVar10) = 0;
    }
    else {
      FUN_0054809c(&local_1c8,uVar10 - uVar9,0);
    }
    pppppppuVar12 = (undefined8 *******)local_1c8;
    if (-1 < (long)local_1b8) {
      pppppppuVar12 = &local_1c8;
    }
    local_1d0 = (undefined8 ******)((long)pppppppuVar12 + uVar8);
  }
  if ((uint *)param_2[3] == (uint *)param_2[4]) {
                    /* try { // try from 0052a02c to 0052a077 has its CatchHandler @ 0052a358 */
    uVar8 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    uVar8 = (ulong)*(uint *)param_2[3];
  }
  iVar7 = FUN_0052c288(uVar8,local_1e0,local_1e4,pppppppuVar12,&local_1d0,uStack_194,local_198,
                       &local_1b0,local_190,&local_1d8,&local_1dc,auStack_f0);
  if (iVar7 != 0) goto LAB_0052a07c;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 4;
  }
  goto LAB_00529eb4;
LAB_0052a07c:
  uVar8 = local_1a8;
  if (-1 < (char)local_199) {
    uVar8 = (ulong)local_199;
  }
  if (((uVar8 != 0) && (local_1e0[0] != '\0')) && ((long)local_1d8 - (long)local_190 < 0xa0)) {
    *local_1d8 = local_1dc;
    local_1d8 = local_1d8 + 1;
  }
                    /* try { // try from 0052a0c4 to 0052a253 has its CatchHandler @ 0052a350 */
  uVar17 = FUN_005462a8(pppppppuVar12,local_1d0,param_5);
  uVar10 = (ulong)(uint)(int)(char)local_199;
  uVar8 = local_1a8;
  if (-1 < (char)local_199) {
    uVar8 = (ulong)local_199;
  }
  *param_6 = uVar17;
  if ((4 < (long)local_1d8 - (long)local_190) && (uVar8 != 0)) {
    puVar11 = local_1d8 + -1;
    if ((local_190 != local_1d8) && (local_190 < puVar11)) {
      puVar16 = local_190;
      puVar14 = puVar11;
      do {
        puVar16 = puVar16 + 1;
        uVar3 = puVar16[-1];
        puVar16[-1] = *puVar14;
        puVar15 = puVar14 + -1;
        *puVar14 = uVar3;
        puVar14 = puVar15;
      } while (puVar16 < puVar15);
      uVar10 = (ulong)local_199;
    }
    pppppppbVar1 = (byte *******)local_1b0;
    if (-1 < (char)uVar10) {
      pppppppbVar1 = &local_1b0;
    }
    pppppppbVar13 = pppppppbVar1;
    if (local_190 < puVar11) {
      if (-1 < (char)uVar10) {
        local_1a8 = uVar10 & 0xff;
      }
      puVar16 = local_190;
      do {
        bVar4 = *(byte *)pppppppbVar13;
        if (((bVar4 != 0) && (bVar4 != 0xff)) && (*puVar16 != (uint)bVar4)) goto LAB_0052a1e0;
        puVar16 = puVar16 + 1;
        if (1 < (long)((long)pppppppbVar1 + (local_1a8 - (long)pppppppbVar13))) {
          pppppppbVar13 = (byte *******)((long)pppppppbVar13 + 1);
        }
      } while (puVar16 < puVar11);
    }
    bVar4 = *(byte *)pppppppbVar13;
    if (((bVar4 != 0) && (bVar4 != 0xff)) && ((uint)bVar4 <= *puVar11 - 1)) {
LAB_0052a1e0:
      *param_5 = 4;
    }
  }
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    if (param_3 != (long *)0x0) goto LAB_0052a230;
LAB_0052a208:
    if (!bVar6) goto LAB_0052a270;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar7 = *(int *)param_2[3];
    }
    bVar6 = iVar7 == -1;
    plVar2 = (long *)0x0;
    if (!bVar6) {
      plVar2 = param_2;
    }
    param_2 = plVar2;
    if (param_3 == (long *)0x0) goto LAB_0052a208;
LAB_0052a230:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar7 = *(int *)param_3[3];
    }
    if (bVar6 != (iVar7 == -1)) goto LAB_0052a270;
  }
  *param_5 = *param_5 | 2;
LAB_0052a270:
  if ((long)local_1b8 < 0) {
    operator_delete(local_1c8);
  }
  if ((char)local_199 < '\0') {
    operator_delete(local_1b0);
  }
  if (*(long *)(lVar5 + 0x28) == local_70) {
    return param_2;
  }
LAB_0052a398:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0052a3a4  thunk_FUN_0052a3a8 =====

long * thunk_FUN_0052a3a8(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,
                         uint *param_5,undefined8 *param_6)

{
  byte *******pppppppbVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint *puVar11;
  undefined8 *******pppppppuVar12;
  byte *******pppppppbVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  undefined8 uVar17;
  undefined1 auStack_1e4 [4];
  char acStack_1e0 [4];
  uint uStack_1dc;
  uint *puStack_1d8;
  undefined8 ******ppppppuStack_1d0;
  undefined8 ******ppppppuStack_1c8;
  ulong uStack_1c0;
  undefined8 uStack_1b8;
  byte ******ppppppbStack_1b0;
  ulong uStack_1a8;
  byte bStack_199;
  undefined4 uStack_198;
  undefined4 uStack_194;
  uint auStack_190 [40];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lVar5 = tpidr_el0;
  lStack_70 = *(long *)(lVar5 + 0x28);
  FUN_0052c050(&ppppppbStack_1b0,param_4,auStack_f0,&uStack_194,&uStack_198);
  ppppppuStack_1c8 = (undefined8 *******)0x0;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  FUN_0054809c(&ppppppuStack_1c8,0x16,0);
  pppppppuVar12 = (undefined8 *******)ppppppuStack_1c8;
  if (-1 < (long)uStack_1b8) {
    pppppppuVar12 = &ppppppuStack_1c8;
  }
  acStack_1e0[0] = '\x01';
  auStack_1e4[0] = 0x45;
  uStack_1dc = 0;
  puStack_1d8 = auStack_190;
  ppppppuStack_1d0 = pppppppuVar12;
LAB_0052a460:
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    if (param_3 != (long *)0x0) goto LAB_0052a4a8;
LAB_0052a480:
    if (bVar6 != false) goto LAB_0052a628;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar7 = *(int *)param_2[3];
    }
    bVar6 = iVar7 == -1;
    plVar2 = (long *)0x0;
    if (!bVar6) {
      plVar2 = param_2;
    }
    param_2 = plVar2;
    if (param_3 == (long *)0x0) goto LAB_0052a480;
LAB_0052a4a8:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar7 = *(int *)param_3[3];
    }
    plVar2 = (long *)0x0;
    if (iVar7 != -1) {
      plVar2 = param_3;
    }
    param_3 = plVar2;
    if (bVar6 == (iVar7 == -1)) goto LAB_0052a628;
  }
  uVar8 = uStack_1c0;
  if (-1 < (long)uStack_1b8) {
    uVar8 = uStack_1b8 >> 0x38;
  }
  if ((undefined8 *******)ppppppuStack_1d0 == (undefined8 *******)((long)pppppppuVar12 + uVar8)) {
    if ((long)uVar8 < 1) {
      uVar9 = uVar8 * 2;
      pppppppuVar12 = (undefined8 *******)ppppppuStack_1c8;
      uVar10 = uVar9;
      if (-1 < (long)uStack_1b8) {
        if (0x16 < uVar9) {
          if (*(long *)(lVar5 + 0x28) == lStack_70) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_0052a944;
        }
        uStack_1b8 = CONCAT17((char)uVar9,(undefined7)uStack_1b8);
        pppppppuVar12 = &ppppppuStack_1c8;
        uVar10 = uStack_1c0;
      }
      uStack_1c0 = uVar10;
      *(undefined1 *)((long)pppppppuVar12 + uVar9) = 0;
    }
    else {
      FUN_0054809c(&ppppppuStack_1c8,uVar8,0);
    }
    uVar10 = (uStack_1b8 & 0x7fffffffffffffff) - 1;
    uVar9 = uStack_1c0;
    if (-1 < (long)uStack_1b8) {
      uVar10 = 0x16;
      uVar9 = uStack_1b8 >> 0x38;
    }
    if (uVar10 < uVar9 || uVar10 - uVar9 == 0) {
      pppppppuVar12 = (undefined8 *******)ppppppuStack_1c8;
      uVar9 = uVar10;
      if (-1 < (long)uStack_1b8) {
        if (0x16 < uVar10) {
          if (*(long *)(lVar5 + 0x28) == lStack_70) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_0052a944;
        }
        uStack_1b8 = CONCAT17((char)uVar10,(undefined7)uStack_1b8);
        pppppppuVar12 = &ppppppuStack_1c8;
        uVar9 = uStack_1c0;
      }
      uStack_1c0 = uVar9;
      *(undefined1 *)((long)pppppppuVar12 + uVar10) = 0;
    }
    else {
      FUN_0054809c(&ppppppuStack_1c8,uVar10 - uVar9,0);
    }
    pppppppuVar12 = (undefined8 *******)ppppppuStack_1c8;
    if (-1 < (long)uStack_1b8) {
      pppppppuVar12 = &ppppppuStack_1c8;
    }
    ppppppuStack_1d0 = (undefined8 ******)((long)pppppppuVar12 + uVar8);
  }
  if ((uint *)param_2[3] == (uint *)param_2[4]) {
    uVar8 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    uVar8 = (ulong)*(uint *)param_2[3];
  }
  iVar7 = FUN_0052c288(uVar8,acStack_1e0,auStack_1e4,pppppppuVar12,&ppppppuStack_1d0,uStack_194,
                       uStack_198,&ppppppbStack_1b0,auStack_190,&puStack_1d8,&uStack_1dc,auStack_f0)
  ;
  if (iVar7 != 0) goto LAB_0052a628;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 4;
  }
  goto LAB_0052a460;
LAB_0052a628:
  uVar8 = uStack_1a8;
  if (-1 < (char)bStack_199) {
    uVar8 = (ulong)bStack_199;
  }
  if (((uVar8 != 0) && (acStack_1e0[0] != '\0')) && ((long)puStack_1d8 - (long)auStack_190 < 0xa0))
  {
    *puStack_1d8 = uStack_1dc;
    puStack_1d8 = puStack_1d8 + 1;
  }
  uVar17 = FUN_005463f0(pppppppuVar12,ppppppuStack_1d0,param_5);
  uVar10 = (ulong)(uint)(int)(char)bStack_199;
  uVar8 = uStack_1a8;
  if (-1 < (char)bStack_199) {
    uVar8 = (ulong)bStack_199;
  }
  *param_6 = uVar17;
  if ((4 < (long)puStack_1d8 - (long)auStack_190) && (uVar8 != 0)) {
    puVar11 = puStack_1d8 + -1;
    if ((auStack_190 != puStack_1d8) && (auStack_190 < puVar11)) {
      puVar16 = auStack_190;
      puVar14 = puVar11;
      do {
        puVar16 = puVar16 + 1;
        uVar3 = puVar16[-1];
        puVar16[-1] = *puVar14;
        puVar15 = puVar14 + -1;
        *puVar14 = uVar3;
        puVar14 = puVar15;
      } while (puVar16 < puVar15);
      uVar10 = (ulong)bStack_199;
    }
    pppppppbVar1 = (byte *******)ppppppbStack_1b0;
    if (-1 < (char)uVar10) {
      pppppppbVar1 = &ppppppbStack_1b0;
    }
    pppppppbVar13 = pppppppbVar1;
    if (auStack_190 < puVar11) {
      if (-1 < (char)uVar10) {
        uStack_1a8 = uVar10 & 0xff;
      }
      puVar16 = auStack_190;
      do {
        bVar4 = *(byte *)pppppppbVar13;
        if (((bVar4 != 0) && (bVar4 != 0xff)) && (*puVar16 != (uint)bVar4)) goto LAB_0052a78c;
        puVar16 = puVar16 + 1;
        if (1 < (long)((long)pppppppbVar1 + (uStack_1a8 - (long)pppppppbVar13))) {
          pppppppbVar13 = (byte *******)((long)pppppppbVar13 + 1);
        }
      } while (puVar16 < puVar11);
    }
    bVar4 = *(byte *)pppppppbVar13;
    if (((bVar4 != 0) && (bVar4 != 0xff)) && ((uint)bVar4 <= *puVar11 - 1)) {
LAB_0052a78c:
      *param_5 = 4;
    }
  }
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    if (param_3 != (long *)0x0) goto LAB_0052a7dc;
LAB_0052a7b4:
    if (!bVar6) goto LAB_0052a81c;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar7 = *(int *)param_2[3];
    }
    bVar6 = iVar7 == -1;
    plVar2 = (long *)0x0;
    if (!bVar6) {
      plVar2 = param_2;
    }
    param_2 = plVar2;
    if (param_3 == (long *)0x0) goto LAB_0052a7b4;
LAB_0052a7dc:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar7 = *(int *)param_3[3];
    }
    if (bVar6 != (iVar7 == -1)) goto LAB_0052a81c;
  }
  *param_5 = *param_5 | 2;
LAB_0052a81c:
  if ((long)uStack_1b8 < 0) {
    operator_delete(ppppppuStack_1c8);
  }
  if ((char)bStack_199 < '\0') {
    operator_delete(ppppppbStack_1b0);
  }
  if (*(long *)(lVar5 + 0x28) == lStack_70) {
    return param_2;
  }
LAB_0052a944:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0052a3a8  FUN_0052a3a8 =====

long * FUN_0052a3a8(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,uint *param_5,
                   undefined8 *param_6)

{
  byte *******pppppppbVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint *puVar11;
  undefined8 *******pppppppuVar12;
  byte *******pppppppbVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  undefined8 uVar17;
  undefined1 local_1e4 [4];
  char local_1e0 [4];
  uint local_1dc;
  uint *local_1d8;
  undefined8 ******local_1d0;
  undefined8 ******local_1c8;
  ulong local_1c0;
  undefined8 local_1b8;
  byte ******local_1b0;
  ulong local_1a8;
  byte local_199;
  undefined4 local_198;
  undefined4 uStack_194;
  uint local_190 [40];
  undefined1 auStack_f0 [128];
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  FUN_0052c050(&local_1b0,param_4,auStack_f0,&uStack_194,&local_198);
  local_1c8 = (undefined8 *******)0x0;
  local_1c0 = 0;
  local_1b8 = 0;
                    /* try { // try from 0052a408 to 0052a41b has its CatchHandler @ 0052a8f8 */
  FUN_0054809c(&local_1c8,0x16,0);
  pppppppuVar12 = (undefined8 *******)local_1c8;
  if (-1 < (long)local_1b8) {
    pppppppuVar12 = &local_1c8;
  }
  local_1e0[0] = '\x01';
  local_1e4[0] = 0x45;
  local_1dc = 0;
  local_1d8 = local_190;
  local_1d0 = pppppppuVar12;
LAB_0052a460:
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    if (param_3 != (long *)0x0) goto LAB_0052a4a8;
LAB_0052a480:
    if (bVar6 != false) goto LAB_0052a628;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
                    /* try { // try from 0052a490 to 0052a4cb has its CatchHandler @ 0052a904 */
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar7 = *(int *)param_2[3];
    }
    bVar6 = iVar7 == -1;
    plVar2 = (long *)0x0;
    if (!bVar6) {
      plVar2 = param_2;
    }
    param_2 = plVar2;
    if (param_3 == (long *)0x0) goto LAB_0052a480;
LAB_0052a4a8:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar7 = *(int *)param_3[3];
    }
    plVar2 = (long *)0x0;
    if (iVar7 != -1) {
      plVar2 = param_3;
    }
    param_3 = plVar2;
    if (bVar6 == (iVar7 == -1)) goto LAB_0052a628;
  }
  uVar8 = local_1c0;
  if (-1 < (long)local_1b8) {
    uVar8 = local_1b8 >> 0x38;
  }
  if ((undefined8 *******)local_1d0 == (undefined8 *******)((long)pppppppuVar12 + uVar8)) {
    if ((long)uVar8 < 1) {
      uVar9 = uVar8 * 2;
      pppppppuVar12 = (undefined8 *******)local_1c8;
      uVar10 = uVar9;
      if (-1 < (long)local_1b8) {
        if (0x16 < uVar9) {
          if (*(long *)(lVar5 + 0x28) == local_70) {
                    /* try { // try from 0052a8d0 to 0052a8f7 has its CatchHandler @ 0052a948 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_0052a944;
        }
        local_1b8 = CONCAT17((char)uVar9,(undefined7)local_1b8);
        pppppppuVar12 = &local_1c8;
        uVar10 = local_1c0;
      }
      local_1c0 = uVar10;
      *(undefined1 *)((long)pppppppuVar12 + uVar9) = 0;
    }
    else {
                    /* try { // try from 0052a50c to 0052a57b has its CatchHandler @ 0052a900 */
      FUN_0054809c(&local_1c8,uVar8,0);
    }
    uVar10 = (local_1b8 & 0x7fffffffffffffff) - 1;
    uVar9 = local_1c0;
    if (-1 < (long)local_1b8) {
      uVar10 = 0x16;
      uVar9 = local_1b8 >> 0x38;
    }
    if (uVar10 < uVar9 || uVar10 - uVar9 == 0) {
      pppppppuVar12 = (undefined8 *******)local_1c8;
      uVar9 = uVar10;
      if (-1 < (long)local_1b8) {
        if (0x16 < uVar10) {
          if (*(long *)(lVar5 + 0x28) == local_70) {
                    /* try { // try from 0052a894 to 0052a8bb has its CatchHandler @ 0052a94c */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_0052a944;
        }
        local_1b8 = CONCAT17((char)uVar10,(undefined7)local_1b8);
        pppppppuVar12 = &local_1c8;
        uVar9 = local_1c0;
      }
      local_1c0 = uVar9;
      *(undefined1 *)((long)pppppppuVar12 + uVar10) = 0;
    }
    else {
      FUN_0054809c(&local_1c8,uVar10 - uVar9,0);
    }
    pppppppuVar12 = (undefined8 *******)local_1c8;
    if (-1 < (long)local_1b8) {
      pppppppuVar12 = &local_1c8;
    }
    local_1d0 = (undefined8 ******)((long)pppppppuVar12 + uVar8);
  }
  if ((uint *)param_2[3] == (uint *)param_2[4]) {
                    /* try { // try from 0052a5d8 to 0052a623 has its CatchHandler @ 0052a904 */
    uVar8 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    uVar8 = (ulong)*(uint *)param_2[3];
  }
  iVar7 = FUN_0052c288(uVar8,local_1e0,local_1e4,pppppppuVar12,&local_1d0,uStack_194,local_198,
                       &local_1b0,local_190,&local_1d8,&local_1dc,auStack_f0);
  if (iVar7 != 0) goto LAB_0052a628;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 4;
  }
  goto LAB_0052a460;
LAB_0052a628:
  uVar8 = local_1a8;
  if (-1 < (char)local_199) {
    uVar8 = (ulong)local_199;
  }
  if (((uVar8 != 0) && (local_1e0[0] != '\0')) && ((long)local_1d8 - (long)local_190 < 0xa0)) {
    *local_1d8 = local_1dc;
    local_1d8 = local_1d8 + 1;
  }
                    /* try { // try from 0052a670 to 0052a7ff has its CatchHandler @ 0052a8fc */
  uVar17 = FUN_005463f0(pppppppuVar12,local_1d0,param_5);
  uVar10 = (ulong)(uint)(int)(char)local_199;
  uVar8 = local_1a8;
  if (-1 < (char)local_199) {
    uVar8 = (ulong)local_199;
  }
  *param_6 = uVar17;
  if ((4 < (long)local_1d8 - (long)local_190) && (uVar8 != 0)) {
    puVar11 = local_1d8 + -1;
    if ((local_190 != local_1d8) && (local_190 < puVar11)) {
      puVar16 = local_190;
      puVar14 = puVar11;
      do {
        puVar16 = puVar16 + 1;
        uVar3 = puVar16[-1];
        puVar16[-1] = *puVar14;
        puVar15 = puVar14 + -1;
        *puVar14 = uVar3;
        puVar14 = puVar15;
      } while (puVar16 < puVar15);
      uVar10 = (ulong)local_199;
    }
    pppppppbVar1 = (byte *******)local_1b0;
    if (-1 < (char)uVar10) {
      pppppppbVar1 = &local_1b0;
    }
    pppppppbVar13 = pppppppbVar1;
    if (local_190 < puVar11) {
      if (-1 < (char)uVar10) {
        local_1a8 = uVar10 & 0xff;
      }
      puVar16 = local_190;
      do {
        bVar4 = *(byte *)pppppppbVar13;
        if (((bVar4 != 0) && (bVar4 != 0xff)) && (*puVar16 != (uint)bVar4)) goto LAB_0052a78c;
        puVar16 = puVar16 + 1;
        if (1 < (long)((long)pppppppbVar1 + (local_1a8 - (long)pppppppbVar13))) {
          pppppppbVar13 = (byte *******)((long)pppppppbVar13 + 1);
        }
      } while (puVar16 < puVar11);
    }
    bVar4 = *(byte *)pppppppbVar13;
    if (((bVar4 != 0) && (bVar4 != 0xff)) && ((uint)bVar4 <= *puVar11 - 1)) {
LAB_0052a78c:
      *param_5 = 4;
    }
  }
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    if (param_3 != (long *)0x0) goto LAB_0052a7dc;
LAB_0052a7b4:
    if (!bVar6) goto LAB_0052a81c;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar7 = *(int *)param_2[3];
    }
    bVar6 = iVar7 == -1;
    plVar2 = (long *)0x0;
    if (!bVar6) {
      plVar2 = param_2;
    }
    param_2 = plVar2;
    if (param_3 == (long *)0x0) goto LAB_0052a7b4;
LAB_0052a7dc:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar7 = *(int *)param_3[3];
    }
    if (bVar6 != (iVar7 == -1)) goto LAB_0052a81c;
  }
  *param_5 = *param_5 | 2;
LAB_0052a81c:
  if ((long)local_1b8 < 0) {
    operator_delete(local_1c8);
  }
  if ((char)local_199 < '\0') {
    operator_delete(local_1b0);
  }
  if (*(long *)(lVar5 + 0x28) == local_70) {
    return param_2;
  }
LAB_0052a944:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0052a950  thunk_FUN_0052a954 =====

long * thunk_FUN_0052a954(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,
                         uint *param_5,undefined1 (*param_6) [16])

{
  byte *******pppppppbVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint *puVar11;
  undefined8 *******pppppppuVar12;
  byte *******pppppppbVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  undefined1 auVar17 [16];
  undefined1 auStack_1e4 [4];
  char acStack_1e0 [4];
  uint uStack_1dc;
  uint *puStack_1d8;
  undefined8 ******ppppppuStack_1d0;
  undefined8 ******ppppppuStack_1c8;
  ulong uStack_1c0;
  undefined8 uStack_1b8;
  byte ******ppppppbStack_1b0;
  ulong uStack_1a8;
  byte bStack_199;
  undefined4 uStack_198;
  undefined4 uStack_194;
  uint auStack_190 [40];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lVar5 = tpidr_el0;
  lStack_70 = *(long *)(lVar5 + 0x28);
  FUN_0052c050(&ppppppbStack_1b0,param_4,auStack_f0,&uStack_194,&uStack_198);
  ppppppuStack_1c8 = (undefined8 *******)0x0;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  FUN_0054809c(&ppppppuStack_1c8,0x16,0);
  pppppppuVar12 = (undefined8 *******)ppppppuStack_1c8;
  if (-1 < (long)uStack_1b8) {
    pppppppuVar12 = &ppppppuStack_1c8;
  }
  acStack_1e0[0] = '\x01';
  auStack_1e4[0] = 0x45;
  uStack_1dc = 0;
  puStack_1d8 = auStack_190;
  ppppppuStack_1d0 = pppppppuVar12;
LAB_0052aa0c:
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    if (param_3 != (long *)0x0) goto LAB_0052aa54;
LAB_0052aa2c:
    if (bVar6 != false) goto LAB_0052abd4;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar7 = *(int *)param_2[3];
    }
    bVar6 = iVar7 == -1;
    plVar2 = (long *)0x0;
    if (!bVar6) {
      plVar2 = param_2;
    }
    param_2 = plVar2;
    if (param_3 == (long *)0x0) goto LAB_0052aa2c;
LAB_0052aa54:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar7 = *(int *)param_3[3];
    }
    plVar2 = (long *)0x0;
    if (iVar7 != -1) {
      plVar2 = param_3;
    }
    param_3 = plVar2;
    if (bVar6 == (iVar7 == -1)) goto LAB_0052abd4;
  }
  uVar8 = uStack_1c0;
  if (-1 < (long)uStack_1b8) {
    uVar8 = uStack_1b8 >> 0x38;
  }
  if ((undefined8 *******)ppppppuStack_1d0 == (undefined8 *******)((long)pppppppuVar12 + uVar8)) {
    if ((long)uVar8 < 1) {
      uVar9 = uVar8 * 2;
      pppppppuVar12 = (undefined8 *******)ppppppuStack_1c8;
      uVar10 = uVar9;
      if (-1 < (long)uStack_1b8) {
        if (0x16 < uVar9) {
          if (*(long *)(lVar5 + 0x28) == lStack_70) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_0052aef0;
        }
        uStack_1b8 = CONCAT17((char)uVar9,(undefined7)uStack_1b8);
        pppppppuVar12 = &ppppppuStack_1c8;
        uVar10 = uStack_1c0;
      }
      uStack_1c0 = uVar10;
      *(undefined1 *)((long)pppppppuVar12 + uVar9) = 0;
    }
    else {
      FUN_0054809c(&ppppppuStack_1c8,uVar8,0);
    }
    uVar10 = (uStack_1b8 & 0x7fffffffffffffff) - 1;
    uVar9 = uStack_1c0;
    if (-1 < (long)uStack_1b8) {
      uVar10 = 0x16;
      uVar9 = uStack_1b8 >> 0x38;
    }
    if (uVar10 < uVar9 || uVar10 - uVar9 == 0) {
      pppppppuVar12 = (undefined8 *******)ppppppuStack_1c8;
      uVar9 = uVar10;
      if (-1 < (long)uStack_1b8) {
        if (0x16 < uVar10) {
          if (*(long *)(lVar5 + 0x28) == lStack_70) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_0052aef0;
        }
        uStack_1b8 = CONCAT17((char)uVar10,(undefined7)uStack_1b8);
        pppppppuVar12 = &ppppppuStack_1c8;
        uVar9 = uStack_1c0;
      }
      uStack_1c0 = uVar9;
      *(undefined1 *)((long)pppppppuVar12 + uVar10) = 0;
    }
    else {
      FUN_0054809c(&ppppppuStack_1c8,uVar10 - uVar9,0);
    }
    pppppppuVar12 = (undefined8 *******)ppppppuStack_1c8;
    if (-1 < (long)uStack_1b8) {
      pppppppuVar12 = &ppppppuStack_1c8;
    }
    ppppppuStack_1d0 = (undefined8 ******)((long)pppppppuVar12 + uVar8);
  }
  if ((uint *)param_2[3] == (uint *)param_2[4]) {
    uVar8 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    uVar8 = (ulong)*(uint *)param_2[3];
  }
  iVar7 = FUN_0052c288(uVar8,acStack_1e0,auStack_1e4,pppppppuVar12,&ppppppuStack_1d0,uStack_194,
                       uStack_198,&ppppppbStack_1b0,auStack_190,&puStack_1d8,&uStack_1dc,auStack_f0)
  ;
  if (iVar7 != 0) goto LAB_0052abd4;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 4;
  }
  goto LAB_0052aa0c;
LAB_0052abd4:
  uVar8 = uStack_1a8;
  if (-1 < (char)bStack_199) {
    uVar8 = (ulong)bStack_199;
  }
  if (((uVar8 != 0) && (acStack_1e0[0] != '\0')) && ((long)puStack_1d8 - (long)auStack_190 < 0xa0))
  {
    *puStack_1d8 = uStack_1dc;
    puStack_1d8 = puStack_1d8 + 1;
  }
  auVar17 = FUN_00546538(pppppppuVar12,ppppppuStack_1d0,param_5);
  uVar10 = (ulong)(uint)(int)(char)bStack_199;
  uVar8 = uStack_1a8;
  if (-1 < (char)bStack_199) {
    uVar8 = (ulong)bStack_199;
  }
  *param_6 = auVar17;
  if ((4 < (long)puStack_1d8 - (long)auStack_190) && (uVar8 != 0)) {
    puVar11 = puStack_1d8 + -1;
    if ((auStack_190 != puStack_1d8) && (auStack_190 < puVar11)) {
      puVar16 = auStack_190;
      puVar14 = puVar11;
      do {
        puVar16 = puVar16 + 1;
        uVar3 = puVar16[-1];
        puVar16[-1] = *puVar14;
        puVar15 = puVar14 + -1;
        *puVar14 = uVar3;
        puVar14 = puVar15;
      } while (puVar16 < puVar15);
      uVar10 = (ulong)bStack_199;
    }
    pppppppbVar1 = (byte *******)ppppppbStack_1b0;
    if (-1 < (char)uVar10) {
      pppppppbVar1 = &ppppppbStack_1b0;
    }
    pppppppbVar13 = pppppppbVar1;
    if (auStack_190 < puVar11) {
      if (-1 < (char)uVar10) {
        uStack_1a8 = uVar10 & 0xff;
      }
      puVar16 = auStack_190;
      do {
        bVar4 = *(byte *)pppppppbVar13;
        if (((bVar4 != 0) && (bVar4 != 0xff)) && (*puVar16 != (uint)bVar4)) goto LAB_0052ad38;
        puVar16 = puVar16 + 1;
        if (1 < (long)((long)pppppppbVar1 + (uStack_1a8 - (long)pppppppbVar13))) {
          pppppppbVar13 = (byte *******)((long)pppppppbVar13 + 1);
        }
      } while (puVar16 < puVar11);
    }
    bVar4 = *(byte *)pppppppbVar13;
    if (((bVar4 != 0) && (bVar4 != 0xff)) && ((uint)bVar4 <= *puVar11 - 1)) {
LAB_0052ad38:
      *param_5 = 4;
    }
  }
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    if (param_3 != (long *)0x0) goto LAB_0052ad88;
LAB_0052ad60:
    if (!bVar6) goto LAB_0052adc8;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar7 = *(int *)param_2[3];
    }
    bVar6 = iVar7 == -1;
    plVar2 = (long *)0x0;
    if (!bVar6) {
      plVar2 = param_2;
    }
    param_2 = plVar2;
    if (param_3 == (long *)0x0) goto LAB_0052ad60;
LAB_0052ad88:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar7 = *(int *)param_3[3];
    }
    if (bVar6 != (iVar7 == -1)) goto LAB_0052adc8;
  }
  *param_5 = *param_5 | 2;
LAB_0052adc8:
  if ((long)uStack_1b8 < 0) {
    operator_delete(ppppppuStack_1c8);
  }
  if ((char)bStack_199 < '\0') {
    operator_delete(ppppppbStack_1b0);
  }
  if (*(long *)(lVar5 + 0x28) == lStack_70) {
    return param_2;
  }
LAB_0052aef0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0052a954  FUN_0052a954 =====

long * FUN_0052a954(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,uint *param_5,
                   undefined1 (*param_6) [16])

{
  byte *******pppppppbVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint *puVar11;
  undefined8 *******pppppppuVar12;
  byte *******pppppppbVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  undefined1 auVar17 [16];
  undefined1 local_1e4 [4];
  char local_1e0 [4];
  uint local_1dc;
  uint *local_1d8;
  undefined8 ******local_1d0;
  undefined8 ******local_1c8;
  ulong local_1c0;
  undefined8 local_1b8;
  byte ******local_1b0;
  ulong local_1a8;
  byte local_199;
  undefined4 local_198;
  undefined4 uStack_194;
  uint local_190 [40];
  undefined1 auStack_f0 [128];
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  FUN_0052c050(&local_1b0,param_4,auStack_f0,&uStack_194,&local_198);
  local_1c8 = (undefined8 *******)0x0;
  local_1c0 = 0;
  local_1b8 = 0;
                    /* try { // try from 0052a9b4 to 0052a9c7 has its CatchHandler @ 0052aea4 */
  FUN_0054809c(&local_1c8,0x16,0);
  pppppppuVar12 = (undefined8 *******)local_1c8;
  if (-1 < (long)local_1b8) {
    pppppppuVar12 = &local_1c8;
  }
  local_1e0[0] = '\x01';
  local_1e4[0] = 0x45;
  local_1dc = 0;
  local_1d8 = local_190;
  local_1d0 = pppppppuVar12;
LAB_0052aa0c:
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    if (param_3 != (long *)0x0) goto LAB_0052aa54;
LAB_0052aa2c:
    if (bVar6 != false) goto LAB_0052abd4;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
                    /* try { // try from 0052aa3c to 0052aa77 has its CatchHandler @ 0052aeb0 */
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar7 = *(int *)param_2[3];
    }
    bVar6 = iVar7 == -1;
    plVar2 = (long *)0x0;
    if (!bVar6) {
      plVar2 = param_2;
    }
    param_2 = plVar2;
    if (param_3 == (long *)0x0) goto LAB_0052aa2c;
LAB_0052aa54:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar7 = *(int *)param_3[3];
    }
    plVar2 = (long *)0x0;
    if (iVar7 != -1) {
      plVar2 = param_3;
    }
    param_3 = plVar2;
    if (bVar6 == (iVar7 == -1)) goto LAB_0052abd4;
  }
  uVar8 = local_1c0;
  if (-1 < (long)local_1b8) {
    uVar8 = local_1b8 >> 0x38;
  }
  if ((undefined8 *******)local_1d0 == (undefined8 *******)((long)pppppppuVar12 + uVar8)) {
    if ((long)uVar8 < 1) {
      uVar9 = uVar8 * 2;
      pppppppuVar12 = (undefined8 *******)local_1c8;
      uVar10 = uVar9;
      if (-1 < (long)local_1b8) {
        if (0x16 < uVar9) {
          if (*(long *)(lVar5 + 0x28) == local_70) {
                    /* try { // try from 0052ae7c to 0052aea3 has its CatchHandler @ 0052aef4 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_0052aef0;
        }
        local_1b8 = CONCAT17((char)uVar9,(undefined7)local_1b8);
        pppppppuVar12 = &local_1c8;
        uVar10 = local_1c0;
      }
      local_1c0 = uVar10;
      *(undefined1 *)((long)pppppppuVar12 + uVar9) = 0;
    }
    else {
                    /* try { // try from 0052aab8 to 0052ab27 has its CatchHandler @ 0052aeac */
      FUN_0054809c(&local_1c8,uVar8,0);
    }
    uVar10 = (local_1b8 & 0x7fffffffffffffff) - 1;
    uVar9 = local_1c0;
    if (-1 < (long)local_1b8) {
      uVar10 = 0x16;
      uVar9 = local_1b8 >> 0x38;
    }
    if (uVar10 < uVar9 || uVar10 - uVar9 == 0) {
      pppppppuVar12 = (undefined8 *******)local_1c8;
      uVar9 = uVar10;
      if (-1 < (long)local_1b8) {
        if (0x16 < uVar10) {
          if (*(long *)(lVar5 + 0x28) == local_70) {
                    /* try { // try from 0052ae40 to 0052ae67 has its CatchHandler @ 0052aef8 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_0052aef0;
        }
        local_1b8 = CONCAT17((char)uVar10,(undefined7)local_1b8);
        pppppppuVar12 = &local_1c8;
        uVar9 = local_1c0;
      }
      local_1c0 = uVar9;
      *(undefined1 *)((long)pppppppuVar12 + uVar10) = 0;
    }
    else {
      FUN_0054809c(&local_1c8,uVar10 - uVar9,0);
    }
    pppppppuVar12 = (undefined8 *******)local_1c8;
    if (-1 < (long)local_1b8) {
      pppppppuVar12 = &local_1c8;
    }
    local_1d0 = (undefined8 ******)((long)pppppppuVar12 + uVar8);
  }
  if ((uint *)param_2[3] == (uint *)param_2[4]) {
                    /* try { // try from 0052ab84 to 0052abcf has its CatchHandler @ 0052aeb0 */
    uVar8 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    uVar8 = (ulong)*(uint *)param_2[3];
  }
  iVar7 = FUN_0052c288(uVar8,local_1e0,local_1e4,pppppppuVar12,&local_1d0,uStack_194,local_198,
                       &local_1b0,local_190,&local_1d8,&local_1dc,auStack_f0);
  if (iVar7 != 0) goto LAB_0052abd4;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 4;
  }
  goto LAB_0052aa0c;
LAB_0052abd4:
  uVar8 = local_1a8;
  if (-1 < (char)local_199) {
    uVar8 = (ulong)local_199;
  }
  if (((uVar8 != 0) && (local_1e0[0] != '\0')) && ((long)local_1d8 - (long)local_190 < 0xa0)) {
    *local_1d8 = local_1dc;
    local_1d8 = local_1d8 + 1;
  }
                    /* try { // try from 0052ac1c to 0052adab has its CatchHandler @ 0052aea8 */
  auVar17 = FUN_00546538(pppppppuVar12,local_1d0,param_5);
  uVar10 = (ulong)(uint)(int)(char)local_199;
  uVar8 = local_1a8;
  if (-1 < (char)local_199) {
    uVar8 = (ulong)local_199;
  }
  *param_6 = auVar17;
  if ((4 < (long)local_1d8 - (long)local_190) && (uVar8 != 0)) {
    puVar11 = local_1d8 + -1;
    if ((local_190 != local_1d8) && (local_190 < puVar11)) {
      puVar16 = local_190;
      puVar14 = puVar11;
      do {
        puVar16 = puVar16 + 1;
        uVar3 = puVar16[-1];
        puVar16[-1] = *puVar14;
        puVar15 = puVar14 + -1;
        *puVar14 = uVar3;
        puVar14 = puVar15;
      } while (puVar16 < puVar15);
      uVar10 = (ulong)local_199;
    }
    pppppppbVar1 = (byte *******)local_1b0;
    if (-1 < (char)uVar10) {
      pppppppbVar1 = &local_1b0;
    }
    pppppppbVar13 = pppppppbVar1;
    if (local_190 < puVar11) {
      if (-1 < (char)uVar10) {
        local_1a8 = uVar10 & 0xff;
      }
      puVar16 = local_190;
      do {
        bVar4 = *(byte *)pppppppbVar13;
        if (((bVar4 != 0) && (bVar4 != 0xff)) && (*puVar16 != (uint)bVar4)) goto LAB_0052ad38;
        puVar16 = puVar16 + 1;
        if (1 < (long)((long)pppppppbVar1 + (local_1a8 - (long)pppppppbVar13))) {
          pppppppbVar13 = (byte *******)((long)pppppppbVar13 + 1);
        }
      } while (puVar16 < puVar11);
    }
    bVar4 = *(byte *)pppppppbVar13;
    if (((bVar4 != 0) && (bVar4 != 0xff)) && ((uint)bVar4 <= *puVar11 - 1)) {
LAB_0052ad38:
      *param_5 = 4;
    }
  }
  if (param_2 == (long *)0x0) {
    bVar6 = true;
    if (param_3 != (long *)0x0) goto LAB_0052ad88;
LAB_0052ad60:
    if (!bVar6) goto LAB_0052adc8;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar7 = *(int *)param_2[3];
    }
    bVar6 = iVar7 == -1;
    plVar2 = (long *)0x0;
    if (!bVar6) {
      plVar2 = param_2;
    }
    param_2 = plVar2;
    if (param_3 == (long *)0x0) goto LAB_0052ad60;
LAB_0052ad88:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar7 = *(int *)param_3[3];
    }
    if (bVar6 != (iVar7 == -1)) goto LAB_0052adc8;
  }
  *param_5 = *param_5 | 2;
LAB_0052adc8:
  if ((long)local_1b8 < 0) {
    operator_delete(local_1c8);
  }
  if ((char)local_199 < '\0') {
    operator_delete(local_1b0);
  }
  if (*(long *)(lVar5 + 0x28) == local_70) {
    return param_2;
  }
LAB_0052aef0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0052aefc  FUN_0052aefc =====

long * FUN_0052aefc(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,uint *param_5,
                   undefined8 param_6)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  __locale_t p_Var7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **ppuVar10;
  undefined8 ****ppppuVar11;
  undefined8 ***pppuVar12;
  undefined8 ****unaff_x23;
  undefined4 local_1bc;
  undefined8 ***local_1b8;
  ulong local_1b0;
  undefined8 local_1a8;
  undefined8 **local_1a0;
  void *local_198;
  undefined8 uStack_190;
  long local_188;
  undefined8 ***local_180;
  undefined8 **local_178;
  code *pcStack_170;
  undefined8 local_168;
  undefined1 auStack_d8 [104];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  local_198 = (void *)0x0;
  uStack_190 = 0;
  local_188 = 0;
                    /* try { // try from 0052af48 to 0052af4f has its CatchHandler @ 0052b4d4 */
  FUN_00520ce8(&local_1a0,param_4);
  pppuVar12 = (undefined8 ***)local_1a0;
  local_168 = 0;
  local_178 = (undefined8 **)&DAT_00d61be8;
  pcStack_170 = FUN_0053d0c8;
  if (DAT_00d61be8 != -1) {
    local_1b8 = &local_178;
    local_180 = &local_1b8;
                    /* try { // try from 0052af88 to 0052afdf has its CatchHandler @ 0052b4e0 */
    FUN_0054698c(&DAT_00d61be8,&local_180,FUN_005459e0);
  }
  if (((long)DAT_00d61bf0 - 1U < (ulong)((long)pppuVar12[3] - (long)pppuVar12[2] >> 3)) &&
     (plVar5 = pppuVar12[2][(long)DAT_00d61bf0 - 1U], plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x60))(plVar5,"0123456789abcdefABCDEFxX+-pPiInN","pPiInN",auStack_d8);
    pppuVar12 = (undefined8 ***)(local_1a0 + 1);
    do {
      ppuVar10 = *pppuVar12;
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar12,0x10);
      if (bVar3) {
        *pppuVar12 = (undefined8 **)((long)ppuVar10 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (ppuVar10 == (undefined8 **)0x0) {
      (*(code *)(*local_1a0)[2])();
    }
    local_1b8 = (undefined8 ****)0x0;
    local_1b0 = 0;
    local_1a8 = 0;
                    /* try { // try from 0052b010 to 0052b023 has its CatchHandler @ 0052b4d0 */
    FUN_0054809c(&local_1b8,0x16,0);
    local_1a0 = &local_178;
    ppppuVar11 = (undefined8 ****)local_1b8;
    if (-1 < (long)local_1a8) {
      ppppuVar11 = &local_1b8;
    }
    local_1bc = 0;
    local_180 = ppppuVar11;
LAB_0052b05c:
    if (param_2 == (long *)0x0) {
      bVar3 = true;
      if (param_3 != (long *)0x0) goto LAB_0052b0a4;
LAB_0052b07c:
      if (bVar3 != false) goto LAB_0052b224;
    }
    else {
      if ((int *)param_2[3] == (int *)param_2[4]) {
                    /* try { // try from 0052b08c to 0052b0c7 has its CatchHandler @ 0052b514 */
        iVar4 = (**(code **)(*param_2 + 0x48))(param_2);
      }
      else {
        iVar4 = *(int *)param_2[3];
      }
      bVar3 = iVar4 == -1;
      plVar5 = (long *)0x0;
      if (!bVar3) {
        plVar5 = param_2;
      }
      param_2 = plVar5;
      if (param_3 == (long *)0x0) goto LAB_0052b07c;
LAB_0052b0a4:
      if ((int *)param_3[3] == (int *)param_3[4]) {
        iVar4 = (**(code **)(*param_3 + 0x48))(param_3);
      }
      else {
        iVar4 = *(int *)param_3[3];
      }
      plVar5 = (long *)0x0;
      if (iVar4 != -1) {
        plVar5 = param_3;
      }
      param_3 = plVar5;
      if (bVar3 == (iVar4 == -1)) goto LAB_0052b224;
    }
    uVar6 = local_1b0;
    if (-1 < (long)local_1a8) {
      uVar6 = local_1a8 >> 0x38;
    }
    if ((undefined8 ****)local_180 == (undefined8 ****)((long)ppppuVar11 + uVar6)) {
      if ((long)uVar6 < 1) {
        uVar8 = uVar6 * 2;
        ppppuVar11 = (undefined8 ****)local_1b8;
        uVar9 = uVar8;
        if (-1 < (long)local_1a8) {
          if (0x16 < uVar8) {
            if (*(long *)(lVar2 + 0x28) == local_70) {
                    /* try { // try from 0052b408 to 0052b42f has its CatchHandler @ 0052b55c */
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s:%d: assertion %s failed: %s",
                         "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                         "__s < __min_cap",
                         "__s should never be greater than or equal to the short string capacity");
            }
            goto LAB_0052b554;
          }
          local_1a8 = CONCAT17((char)uVar8,(undefined7)local_1a8);
          ppppuVar11 = &local_1b8;
          uVar9 = local_1b0;
        }
        local_1b0 = uVar9;
        *(undefined1 *)((long)ppppuVar11 + uVar8) = 0;
      }
      else {
                    /* try { // try from 0052b108 to 0052b177 has its CatchHandler @ 0052b510 */
        FUN_0054809c(&local_1b8,uVar6,0);
      }
      uVar9 = (local_1a8 & 0x7fffffffffffffff) - 1;
      uVar8 = local_1b0;
      if (-1 < (long)local_1a8) {
        uVar9 = 0x16;
        uVar8 = local_1a8 >> 0x38;
      }
      if (uVar9 < uVar8 || uVar9 - uVar8 == 0) {
        ppppuVar11 = (undefined8 ****)local_1b8;
        uVar8 = uVar9;
        if (-1 < (long)local_1a8) {
          if (0x16 < uVar9) {
            if (*(long *)(lVar2 + 0x28) == local_70) {
                    /* try { // try from 0052b3cc to 0052b3f3 has its CatchHandler @ 0052b560 */
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s:%d: assertion %s failed: %s",
                         "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                         "__s < __min_cap",
                         "__s should never be greater than or equal to the short string capacity");
            }
            goto LAB_0052b554;
          }
          local_1a8 = CONCAT17((char)uVar9,(undefined7)local_1a8);
          ppppuVar11 = &local_1b8;
          uVar8 = local_1b0;
        }
        local_1b0 = uVar8;
        *(undefined1 *)((long)ppppuVar11 + uVar9) = 0;
      }
      else {
        FUN_0054809c(&local_1b8,uVar9 - uVar8,0);
      }
      ppppuVar11 = (undefined8 ****)local_1b8;
      if (-1 < (long)local_1a8) {
        ppppuVar11 = &local_1b8;
      }
      local_180 = (undefined8 ***)((long)ppppuVar11 + uVar6);
    }
    if ((uint *)param_2[3] == (uint *)param_2[4]) {
                    /* try { // try from 0052b1d4 to 0052b21f has its CatchHandler @ 0052b514 */
      uVar6 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      uVar6 = (ulong)*(uint *)param_2[3];
    }
    iVar4 = FUN_0052b564(uVar6,0x10,ppppuVar11,&local_180,&local_1bc,0,&local_198,&local_178,
                         &local_1a0,auStack_d8);
    if (iVar4 != 0) goto LAB_0052b224;
    if (param_2[3] == param_2[4]) {
      (**(code **)(*param_2 + 0x50))(param_2);
    }
    else {
      param_2[3] = param_2[3] + 4;
    }
    goto LAB_0052b05c;
  }
  if (*(long *)(lVar2 + 0x28) != local_70) goto LAB_0052b554;
                    /* try { // try from 0052b480 to 0052b483 has its CatchHandler @ 0052b4e0 */
  FUN_0053cd4c();
LAB_0052b484:
  iVar4 = FUN_0054fdd4(&DAT_00d61ba8);
  if (iVar4 != 0) {
                    /* try { // try from 0052b494 to 0052b4a7 has its CatchHandler @ 0052b4bc */
    p_Var7 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    pppuVar12[0x174] = (undefined8 **)p_Var7;
    FUN_0054ff1c(&DAT_00d61ba8);
  }
LAB_0052b2a4:
  iVar4 = FUN_00526ee4(unaff_x23,pppuVar12[0x174],&DAT_001e770a,param_6);
  if (iVar4 != 1) {
    *param_5 = 4;
  }
  if (param_2 == (long *)0x0) {
    bVar3 = true;
    if (param_3 != (long *)0x0) goto LAB_0052b314;
LAB_0052b2ec:
    if (bVar3) {
LAB_0052b348:
      *param_5 = *param_5 | 2;
    }
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar4 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar4 = *(int *)param_2[3];
    }
    bVar3 = iVar4 == -1;
    plVar5 = (long *)0x0;
    if (!bVar3) {
      plVar5 = param_2;
    }
    param_2 = plVar5;
    if (param_3 == (long *)0x0) goto LAB_0052b2ec;
LAB_0052b314:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar4 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar4 = *(int *)param_3[3];
    }
    if (bVar3 == (iVar4 == -1)) goto LAB_0052b348;
  }
  if ((long)local_1a8 < 0) {
    operator_delete(local_1b8);
  }
  if (local_188 < 0) {
    operator_delete(local_198);
  }
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return param_2;
  }
LAB_0052b554:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0052b224:
  uVar9 = (long)local_180 - (long)ppppuVar11;
  uVar6 = local_1b0;
  if (-1 < (long)local_1a8) {
    uVar6 = local_1a8 >> 0x38;
  }
  if (uVar9 < uVar6 || uVar9 - uVar6 == 0) {
    ppppuVar11 = (undefined8 ****)local_1b8;
    uVar6 = uVar9;
    if (-1 < (long)local_1a8) {
      if (0x16 < uVar9) {
        if (*(long *)(lVar2 + 0x28) == local_70) {
                    /* try { // try from 0052b444 to 0052b46b has its CatchHandler @ 0052b558 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                     "__s < __min_cap",
                     "__s should never be greater than or equal to the short string capacity");
        }
        goto LAB_0052b554;
      }
      local_1a8 = CONCAT17((char)uVar9,(undefined7)local_1a8);
      ppppuVar11 = &local_1b8;
      uVar6 = local_1b0;
    }
    local_1b0 = uVar6;
    *(undefined1 *)((long)ppppuVar11 + uVar9) = 0;
  }
  else {
                    /* try { // try from 0052b248 to 0052b337 has its CatchHandler @ 0052b4dc */
    FUN_0054809c(&local_1b8,uVar9 - uVar6,0);
  }
  pppuVar12 = (undefined8 ***)&DAT_00d61000;
  unaff_x23 = (undefined8 ****)local_1b8;
  if (-1 < (long)local_1a8) {
    unaff_x23 = &local_1b8;
  }
  if ((DAT_00d61ba8 & 1) == 0) goto LAB_0052b484;
  goto LAB_0052b2a4;
}


// ===== 0052b564  FUN_0052b564 =====

undefined8
FUN_0052b564(int param_1,uint param_2,char *param_3,long *param_4,int *param_5,int param_6,
            long param_7,long param_8,undefined8 *param_9,int *param_10)

{
  ulong uVar1;
  char cVar2;
  char *pcVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  
  pcVar3 = (char *)*param_4;
  if (pcVar3 == param_3) {
    if (param_10[0x18] == param_1) {
      cVar2 = '+';
LAB_0052b5fc:
      *param_4 = (long)(param_3 + 1);
      *param_3 = cVar2;
      *param_5 = 0;
      return 0;
    }
    if (param_10[0x19] == param_1) {
      cVar2 = '-';
      goto LAB_0052b5fc;
    }
  }
  uVar1 = *(ulong *)(param_7 + 8);
  if (-1 < (char)*(byte *)(param_7 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_7 + 0x17);
  }
  if ((param_1 == param_6) && (uVar1 != 0)) {
    piVar4 = (int *)*param_9;
    if (0x9f < (long)piVar4 - param_8) {
      return 0;
    }
    *piVar4 = *param_5;
    *param_9 = piVar4 + 1;
    *param_5 = 0;
    return 0;
  }
  piVar4 = param_10 + 0x1a;
  if (*param_10 == param_1) {
    lVar6 = 0;
LAB_0052b80c:
    piVar4 = param_10 + lVar6;
  }
  else {
    if (param_10[1] == param_1) {
      lVar6 = 1;
      goto LAB_0052b80c;
    }
    if (param_10[2] == param_1) {
      lVar6 = 2;
      goto LAB_0052b80c;
    }
    if (param_10[3] == param_1) {
      lVar6 = 3;
      goto LAB_0052b80c;
    }
    if (param_10[4] == param_1) {
      lVar6 = 4;
      goto LAB_0052b80c;
    }
    if (param_10[5] == param_1) {
      lVar6 = 5;
      goto LAB_0052b80c;
    }
    if (param_10[6] == param_1) {
      lVar6 = 6;
      goto LAB_0052b80c;
    }
    if (param_10[7] == param_1) {
      lVar6 = 7;
      goto LAB_0052b80c;
    }
    if (param_10[8] == param_1) {
      lVar6 = 8;
      goto LAB_0052b80c;
    }
    if (param_10[9] == param_1) {
      lVar6 = 9;
      goto LAB_0052b80c;
    }
    if (param_10[10] == param_1) {
      lVar6 = 10;
      goto LAB_0052b80c;
    }
    if (param_10[0xb] == param_1) {
      lVar6 = 0xb;
      goto LAB_0052b80c;
    }
    if (param_10[0xc] == param_1) {
      lVar6 = 0xc;
      goto LAB_0052b80c;
    }
    if (param_10[0xd] == param_1) {
      lVar6 = 0xd;
      goto LAB_0052b80c;
    }
    if (param_10[0xe] == param_1) {
      lVar6 = 0xe;
      goto LAB_0052b80c;
    }
    if (param_10[0xf] == param_1) {
      lVar6 = 0xf;
      goto LAB_0052b80c;
    }
    if (param_10[0x10] == param_1) {
      lVar6 = 0x10;
      goto LAB_0052b80c;
    }
    if (param_10[0x11] == param_1) {
      lVar6 = 0x11;
      goto LAB_0052b80c;
    }
    if (param_10[0x12] == param_1) {
      lVar6 = 0x12;
      goto LAB_0052b80c;
    }
    if (param_10[0x13] == param_1) {
      lVar6 = 0x13;
      goto LAB_0052b80c;
    }
    if (param_10[0x14] == param_1) {
      lVar6 = 0x14;
      goto LAB_0052b80c;
    }
    if (param_10[0x15] == param_1) {
      lVar6 = 0x15;
      goto LAB_0052b80c;
    }
    if (param_10[0x16] == param_1) {
      lVar6 = 0x16;
      goto LAB_0052b80c;
    }
    if (param_10[0x17] == param_1) {
      lVar6 = 0x17;
      goto LAB_0052b80c;
    }
    if (param_10[0x18] == param_1) {
      lVar6 = 0x18;
      goto LAB_0052b80c;
    }
    if (param_10[0x19] == param_1) {
      lVar6 = 0x19;
      goto LAB_0052b80c;
    }
  }
  lVar6 = (long)piVar4 - (long)param_10;
  if (0x5c < lVar6) {
    return 0xffffffff;
  }
  lVar5 = lVar6 >> 2;
  if (param_2 != 8) {
    if (param_2 == 0x10) {
      if (0x57 < lVar6) {
        if (pcVar3 == param_3) {
          return 0xffffffff;
        }
        if (2 < (long)pcVar3 - (long)param_3) {
          return 0xffffffff;
        }
        if (pcVar3[-1] != '0') {
          return 0xffffffff;
        }
        *param_5 = 0;
        cVar2 = "0123456789abcdefABCDEFxX+-pPiInN"[lVar5];
        *param_4 = (long)(pcVar3 + 1);
        *pcVar3 = cVar2;
        return 0;
      }
      goto LAB_0052b858;
    }
    if (param_2 != 10) goto LAB_0052b858;
  }
  if ((long)(ulong)param_2 <= lVar5) {
    return 0xffffffff;
  }
LAB_0052b858:
  cVar2 = "0123456789abcdefABCDEFxX+-pPiInN"[lVar5];
  *param_4 = (long)(pcVar3 + 1);
  *pcVar3 = cVar2;
  *param_5 = *param_5 + 1;
  return 0;
}


// ===== 0052b8c8  FUN_0052b8c8 =====

void FUN_0052b8c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
                 undefined1 *param_5)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined1 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long *local_88;
  undefined8 *local_80;
  code *pcStack_78;
  undefined8 local_70;
  undefined8 ***local_68;
  undefined8 **local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_00520ce8(&local_88);
  plVar5 = local_88;
  local_70 = 0;
  local_80 = &DAT_00d61bf8;
  pcStack_78 = FUN_0053d0c8;
  if (DAT_00d61bf8 != -1) {
    local_60 = &local_80;
    local_68 = &local_60;
                    /* try { // try from 0052b93c to 0052b993 has its CatchHandler @ 0052bab4 */
    FUN_0054698c(&DAT_00d61bf8,&local_68,FUN_005459e0);
  }
  lVar7 = plVar5[2];
  if (((long)DAT_00d61c00 - 1U < (ulong)(plVar5[3] - lVar7 >> 3)) &&
     (plVar5 = *(long **)(lVar7 + ((long)DAT_00d61c00 - 1U) * 8), plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x40))(plVar5,"0123456789abcdefABCDEFxX+-pPiInN","",param_3);
    plVar5 = local_88;
    local_70 = 0;
    local_80 = &DAT_00d61c68;
    pcStack_78 = FUN_0053d0c8;
    if (DAT_00d61c68 != -1) {
      local_60 = &local_80;
      local_68 = &local_60;
                    /* try { // try from 0052b9c0 to 0052ba37 has its CatchHandler @ 0052bab8 */
      FUN_0054698c(&DAT_00d61c68,&local_68,FUN_005459e0);
    }
    lVar7 = plVar5[2];
    if (((long)DAT_00d61c70 - 1U < (ulong)(plVar5[3] - lVar7 >> 3)) &&
       (plVar5 = *(long **)(lVar7 + ((long)DAT_00d61c70 - 1U) * 8), plVar5 != (long *)0x0)) {
      uVar4 = (**(code **)(*plVar5 + 0x18))(plVar5);
      *param_4 = uVar4;
      uVar4 = (**(code **)(*plVar5 + 0x20))(plVar5);
      *param_5 = uVar4;
      (**(code **)(*plVar5 + 0x28))(param_1,plVar5);
      plVar5 = local_88 + 1;
      do {
        lVar7 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*local_88 + 0x10))();
      }
      if (*(long *)(lVar3 + 0x28) == local_58) {
        return;
      }
      goto LAB_0052bafc;
    }
  }
  else {
    if (*(long *)(lVar3 + 0x28) != local_58) goto LAB_0052bafc;
                    /* try { // try from 0052ba9c to 0052ba9f has its CatchHandler @ 0052bab4 */
    FUN_0053cd4c();
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 0052bab0 to 0052bab3 has its CatchHandler @ 0052bab8 */
    uVar6 = FUN_0053cd4c();
                    /* catch() { ... } // from try @ 0052b93c with catch @ 0052bab4
                       catch() { ... } // from try @ 0052ba9c with catch @ 0052bab4 */
                    /* catch() { ... } // from try @ 0052b9c0 with catch @ 0052bab8
                       catch() { ... } // from try @ 0052bab0 with catch @ 0052bab8 */
    plVar5 = local_88 + 1;
    do {
      lVar7 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*local_88 + 0x10))();
    }
    if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00d0fa5c(uVar6);
    }
  }
LAB_0052bafc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0052bb00  FUN_0052bb00 =====

undefined8
FUN_0052bb00(char param_1,char *param_2,byte *param_3,byte *param_4,long *param_5,char param_6,
            char param_7,long param_8,long param_9,undefined8 *param_10,int *param_11,char *param_12
            )

{
  ulong uVar1;
  byte bVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  int *piVar5;
  ulong uVar6;
  char *pcVar7;
  
  if (param_1 == param_6) {
    if (*param_2 != '\0') {
      puVar4 = (undefined1 *)*param_5;
      *param_2 = '\0';
      *param_5 = (long)(puVar4 + 1);
      *puVar4 = 0x2e;
      uVar6 = *(ulong *)(param_8 + 8);
      if (-1 < (char)*(byte *)(param_8 + 0x17)) {
        uVar6 = (ulong)*(byte *)(param_8 + 0x17);
      }
      if ((uVar6 != 0) && (piVar5 = (int *)*param_10, (long)piVar5 - param_9 < 0xa0)) {
        *piVar5 = *param_11;
        *param_10 = piVar5 + 1;
        return 0;
      }
      return 0;
    }
  }
  else {
    if (param_1 == param_7) {
      uVar6 = *(ulong *)(param_8 + 8);
      if (-1 < (char)*(byte *)(param_8 + 0x17)) {
        uVar6 = (ulong)*(byte *)(param_8 + 0x17);
      }
      if (uVar6 != 0) {
        if (*param_2 == '\0') {
          return 0xffffffff;
        }
        piVar5 = (int *)*param_10;
        if (0x9f < (long)piVar5 - param_9) {
          return 0;
        }
        *piVar5 = *param_11;
        *param_10 = piVar5 + 1;
        *param_11 = 0;
        return 0;
      }
    }
    pcVar7 = param_12;
    if (((((((*param_12 != param_1) && (pcVar7 = param_12 + 1, param_12[1] != param_1)) &&
           (pcVar7 = param_12 + 2, param_12[2] != param_1)) &&
          ((pcVar7 = param_12 + 3, param_12[3] != param_1 &&
           (pcVar7 = param_12 + 4, param_12[4] != param_1)))) &&
         ((pcVar7 = param_12 + 5, param_12[5] != param_1 &&
          ((pcVar7 = param_12 + 6, param_12[6] != param_1 &&
           (pcVar7 = param_12 + 7, param_12[7] != param_1)))))) &&
        (((pcVar7 = param_12 + 8, param_12[8] != param_1 &&
          ((((pcVar7 = param_12 + 9, param_12[9] != param_1 &&
             (pcVar7 = param_12 + 10, param_12[10] != param_1)) &&
            (pcVar7 = param_12 + 0xb, param_12[0xb] != param_1)) &&
           (((pcVar7 = param_12 + 0xc, param_12[0xc] != param_1 &&
             (pcVar7 = param_12 + 0xd, param_12[0xd] != param_1)) &&
            ((pcVar7 = param_12 + 0xe, param_12[0xe] != param_1 &&
             ((pcVar7 = param_12 + 0xf, param_12[0xf] != param_1 &&
              (pcVar7 = param_12 + 0x10, param_12[0x10] != param_1)))))))))) &&
         (pcVar7 = param_12 + 0x11, param_12[0x11] != param_1)))) &&
       ((((pcVar7 = param_12 + 0x12, param_12[0x12] != param_1 &&
          (pcVar7 = param_12 + 0x13, param_12[0x13] != param_1)) &&
         (pcVar7 = param_12 + 0x14, param_12[0x14] != param_1)) &&
        (((pcVar7 = param_12 + 0x15, param_12[0x15] != param_1 &&
          (pcVar7 = param_12 + 0x16, param_12[0x16] != param_1)) &&
         ((((pcVar7 = param_12 + 0x17, param_12[0x17] != param_1 &&
            ((pcVar7 = param_12 + 0x18, param_12[0x18] != param_1 &&
             (pcVar7 = param_12 + 0x19, param_12[0x19] != param_1)))) &&
           (pcVar7 = param_12 + 0x1a, param_12[0x1a] != param_1)) &&
          ((((pcVar7 = param_12 + 0x1b, param_12[0x1b] != param_1 &&
             (pcVar7 = param_12 + 0x1c, param_12[0x1c] != param_1)) &&
            (pcVar7 = param_12 + 0x1d, param_12[0x1d] != param_1)) &&
           ((pcVar7 = param_12 + 0x1e, param_12[0x1e] != param_1 &&
            (pcVar7 = param_12 + 0x1f, param_12[0x1f] != param_1)))))))))))) {
      pcVar7 = param_12 + 0x20;
    }
    uVar6 = (long)pcVar7 - (long)param_12;
    if ((long)uVar6 < 0x20) {
      bVar2 = "0123456789abcdefABCDEFxX+-pPiInN"[uVar6];
      if ((uVar6 & 0xfffffffffffffffe) == 0x16) {
        *param_3 = 0x50;
        pbVar3 = (byte *)*param_5;
      }
      else {
        if ((uVar6 & 0xfffffffffffffffe) != 0x18) {
          if (((bVar2 & 0x5f) == *param_3) && (*param_3 = bVar2 & 0x5f | 0x80, *param_2 != '\0')) {
            *param_2 = '\0';
            uVar1 = *(ulong *)(param_8 + 8);
            if (-1 < (char)*(byte *)(param_8 + 0x17)) {
              uVar1 = (ulong)*(byte *)(param_8 + 0x17);
            }
            if ((uVar1 != 0) && (piVar5 = (int *)*param_10, (long)piVar5 - param_9 < 0xa0)) {
              *piVar5 = *param_11;
              *param_10 = piVar5 + 1;
            }
          }
          pbVar3 = (byte *)*param_5;
          *param_5 = (long)(pbVar3 + 1);
          *pbVar3 = bVar2;
          if (0x15 < (long)uVar6) {
            return 0;
          }
          *param_11 = *param_11 + 1;
          return 0;
        }
        pbVar3 = (byte *)*param_5;
        if ((pbVar3 != param_4) && ((pbVar3[-1] & 0x5f) != (*param_3 & 0x7f))) {
          return 0xffffffff;
        }
      }
      *param_5 = (long)(pbVar3 + 1);
      *pbVar3 = bVar2;
      return 0;
    }
  }
  return 0xffffffff;
}


// ===== 0052bee0  FUN_0052bee0 =====

void FUN_0052bee0(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long *local_68;
  undefined8 *local_60;
  code *pcStack_58;
  undefined8 local_50;
  undefined8 **local_48;
  undefined8 **local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  FUN_00520ce8(&local_68);
  plVar7 = local_68;
  local_50 = 0;
  local_60 = &DAT_00d61c68;
  pcStack_58 = FUN_0053d0c8;
  if (DAT_00d61c68 != -1) {
    local_40 = &local_60;
    local_48 = &local_40;
                    /* try { // try from 0052bf44 to 0052bfa7 has its CatchHandler @ 0052c008 */
    FUN_0054698c(&DAT_00d61c68,&local_48,FUN_005459e0);
  }
  lVar6 = plVar7[2];
  if (((long)DAT_00d61c70 - 1U < (ulong)(plVar7[3] - lVar6 >> 3)) &&
     (plVar7 = *(long **)(lVar6 + ((long)DAT_00d61c70 - 1U) * 8), plVar7 != (long *)0x0)) {
    uVar4 = (**(code **)(*plVar7 + 0x20))(plVar7);
    *param_3 = uVar4;
    (**(code **)(*plVar7 + 0x28))(param_1,plVar7);
    plVar7 = local_68 + 1;
    do {
      lVar6 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
    if (*(long *)(lVar3 + 0x28) == local_38) {
      return;
    }
  }
  else if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 0052c004 to 0052c007 has its CatchHandler @ 0052c008 */
    uVar5 = FUN_0053cd4c();
                    /* catch() { ... } // from try @ 0052bf44 with catch @ 0052c008
                       catch() { ... } // from try @ 0052c004 with catch @ 0052c008 */
    plVar7 = local_68 + 1;
    do {
      lVar6 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
    if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00d0fa5c(uVar5);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0052c050  FUN_0052c050 =====

void FUN_0052c050(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long *local_88;
  undefined8 *local_80;
  code *pcStack_78;
  undefined8 local_70;
  undefined8 ***local_68;
  undefined8 **local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_00520ce8(&local_88);
  plVar5 = local_88;
  local_70 = 0;
  local_80 = &DAT_00d61be8;
  pcStack_78 = FUN_0053d0c8;
  if (DAT_00d61be8 != -1) {
    local_60 = &local_80;
    local_68 = &local_60;
                    /* try { // try from 0052c0c4 to 0052c11b has its CatchHandler @ 0052c23c */
    FUN_0054698c(&DAT_00d61be8,&local_68,FUN_005459e0);
  }
  lVar7 = plVar5[2];
  if (((long)DAT_00d61bf0 - 1U < (ulong)(plVar5[3] - lVar7 >> 3)) &&
     (plVar5 = *(long **)(lVar7 + ((long)DAT_00d61bf0 - 1U) * 8), plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x60))(plVar5,"0123456789abcdefABCDEFxX+-pPiInN","",param_3);
    plVar5 = local_88;
    local_70 = 0;
    local_80 = &DAT_00d61c78;
    pcStack_78 = FUN_0053d0c8;
    if (DAT_00d61c78 != -1) {
      local_60 = &local_80;
      local_68 = &local_60;
                    /* try { // try from 0052c148 to 0052c1bf has its CatchHandler @ 0052c240 */
      FUN_0054698c(&DAT_00d61c78,&local_68,FUN_005459e0);
    }
    lVar7 = plVar5[2];
    if (((long)DAT_00d61c80 - 1U < (ulong)(plVar5[3] - lVar7 >> 3)) &&
       (plVar5 = *(long **)(lVar7 + ((long)DAT_00d61c80 - 1U) * 8), plVar5 != (long *)0x0)) {
      uVar4 = (**(code **)(*plVar5 + 0x18))(plVar5);
      *param_4 = uVar4;
      uVar4 = (**(code **)(*plVar5 + 0x20))(plVar5);
      *param_5 = uVar4;
      (**(code **)(*plVar5 + 0x28))(param_1,plVar5);
      plVar5 = local_88 + 1;
      do {
        lVar7 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*local_88 + 0x10))();
      }
      if (*(long *)(lVar3 + 0x28) == local_58) {
        return;
      }
      goto LAB_0052c284;
    }
  }
  else {
    if (*(long *)(lVar3 + 0x28) != local_58) goto LAB_0052c284;
                    /* try { // try from 0052c224 to 0052c227 has its CatchHandler @ 0052c23c */
    FUN_0053cd4c();
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 0052c238 to 0052c23b has its CatchHandler @ 0052c240 */
    uVar6 = FUN_0053cd4c();
                    /* catch() { ... } // from try @ 0052c0c4 with catch @ 0052c23c
                       catch() { ... } // from try @ 0052c224 with catch @ 0052c23c */
                    /* catch() { ... } // from try @ 0052c148 with catch @ 0052c240
                       catch() { ... } // from try @ 0052c238 with catch @ 0052c240 */
    plVar5 = local_88 + 1;
    do {
      lVar7 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*local_88 + 0x10))();
    }
    if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00d0fa5c(uVar6);
    }
  }
LAB_0052c284:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0052c288  FUN_0052c288 =====

undefined8
FUN_0052c288(int param_1,char *param_2,byte *param_3,byte *param_4,long *param_5,int param_6,
            int param_7,long param_8,long param_9,undefined8 *param_10,int *param_11,int *param_12)

{
  ulong uVar1;
  byte bVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  int *piVar5;
  long lVar6;
  ulong uVar7;
  
  if (param_1 == param_6) {
    if (*param_2 == '\0') {
      return 0xffffffff;
    }
    puVar4 = (undefined1 *)*param_5;
    *param_2 = '\0';
    *param_5 = (long)(puVar4 + 1);
    *puVar4 = 0x2e;
    uVar7 = *(ulong *)(param_8 + 8);
    if (-1 < (char)*(byte *)(param_8 + 0x17)) {
      uVar7 = (ulong)*(byte *)(param_8 + 0x17);
    }
    if (uVar7 == 0) {
      return 0;
    }
    piVar5 = (int *)*param_10;
    if (0x9f < (long)piVar5 - param_9) {
      return 0;
    }
    *piVar5 = *param_11;
    *param_10 = piVar5 + 1;
    return 0;
  }
  if (param_1 == param_7) {
    uVar7 = *(ulong *)(param_8 + 8);
    if (-1 < (char)*(byte *)(param_8 + 0x17)) {
      uVar7 = (ulong)*(byte *)(param_8 + 0x17);
    }
    if (uVar7 != 0) {
      if (*param_2 == '\0') {
        return 0xffffffff;
      }
      piVar5 = (int *)*param_10;
      if (0x9f < (long)piVar5 - param_9) {
        return 0;
      }
      *piVar5 = *param_11;
      *param_10 = piVar5 + 1;
      *param_11 = 0;
      return 0;
    }
  }
  piVar5 = param_12 + 0x20;
  if (*param_12 == param_1) {
    lVar6 = 0;
  }
  else if (param_12[1] == param_1) {
    lVar6 = 1;
  }
  else if (param_12[2] == param_1) {
    lVar6 = 2;
  }
  else if (param_12[3] == param_1) {
    lVar6 = 3;
  }
  else if (param_12[4] == param_1) {
    lVar6 = 4;
  }
  else if (param_12[5] == param_1) {
    lVar6 = 5;
  }
  else if (param_12[6] == param_1) {
    lVar6 = 6;
  }
  else if (param_12[7] == param_1) {
    lVar6 = 7;
  }
  else if (param_12[8] == param_1) {
    lVar6 = 8;
  }
  else if (param_12[9] == param_1) {
    lVar6 = 9;
  }
  else if (param_12[10] == param_1) {
    lVar6 = 10;
  }
  else if (param_12[0xb] == param_1) {
    lVar6 = 0xb;
  }
  else if (param_12[0xc] == param_1) {
    lVar6 = 0xc;
  }
  else if (param_12[0xd] == param_1) {
    lVar6 = 0xd;
  }
  else if (param_12[0xe] == param_1) {
    lVar6 = 0xe;
  }
  else if (param_12[0xf] == param_1) {
    lVar6 = 0xf;
  }
  else if (param_12[0x10] == param_1) {
    lVar6 = 0x10;
  }
  else if (param_12[0x11] == param_1) {
    lVar6 = 0x11;
  }
  else if (param_12[0x12] == param_1) {
    lVar6 = 0x12;
  }
  else if (param_12[0x13] == param_1) {
    lVar6 = 0x13;
  }
  else if (param_12[0x14] == param_1) {
    lVar6 = 0x14;
  }
  else if (param_12[0x15] == param_1) {
    lVar6 = 0x15;
  }
  else if (param_12[0x16] == param_1) {
    lVar6 = 0x16;
  }
  else if (param_12[0x17] == param_1) {
    lVar6 = 0x17;
  }
  else if (param_12[0x18] == param_1) {
    lVar6 = 0x18;
  }
  else if (param_12[0x19] == param_1) {
    lVar6 = 0x19;
  }
  else if (param_12[0x1a] == param_1) {
    lVar6 = 0x1a;
  }
  else if (param_12[0x1b] == param_1) {
    lVar6 = 0x1b;
  }
  else if (param_12[0x1c] == param_1) {
    lVar6 = 0x1c;
  }
  else if (param_12[0x1d] == param_1) {
    lVar6 = 0x1d;
  }
  else if (param_12[0x1e] == param_1) {
    lVar6 = 0x1e;
  }
  else {
    if (param_12[0x1f] != param_1) goto LAB_0052c5cc;
    lVar6 = 0x1f;
  }
  piVar5 = param_12 + lVar6;
LAB_0052c5cc:
  uVar7 = (long)piVar5 - (long)param_12;
  if (0x7c < (long)uVar7) {
    return 0xffffffff;
  }
  bVar2 = "0123456789abcdefABCDEFxX+-pPiInN"[(long)uVar7 >> 2];
  if ((uVar7 & 0xfffffffffffffffb) == 0x58) {
    *param_3 = 0x50;
    pbVar3 = (byte *)*param_5;
  }
  else {
    if ((uVar7 & 0xfffffffffffffffb) != 0x60) {
      if (((bVar2 & 0x5f) == *param_3) && (*param_3 = bVar2 & 0x5f | 0x80, *param_2 != '\0')) {
        *param_2 = '\0';
        uVar1 = *(ulong *)(param_8 + 8);
        if (-1 < (char)*(byte *)(param_8 + 0x17)) {
          uVar1 = (ulong)*(byte *)(param_8 + 0x17);
        }
        if ((uVar1 != 0) && (piVar5 = (int *)*param_10, (long)piVar5 - param_9 < 0xa0)) {
          *piVar5 = *param_11;
          *param_10 = piVar5 + 1;
        }
      }
      pbVar3 = (byte *)*param_5;
      *param_5 = (long)(pbVar3 + 1);
      *pbVar3 = bVar2;
      if (0x54 < (long)uVar7) {
        return 0;
      }
      *param_11 = *param_11 + 1;
      return 0;
    }
    pbVar3 = (byte *)*param_5;
    if ((pbVar3 != param_4) && ((pbVar3[-1] & 0x5f) != (*param_3 & 0x7f))) {
      return 0xffffffff;
    }
  }
  *param_5 = (long)(pbVar3 + 1);
  *pbVar3 = bVar2;
  return 0;
}


// ===== 0052c6e0  FUN_0052c6e0 =====

void FUN_0052c6e0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long *local_68;
  undefined8 *local_60;
  code *pcStack_58;
  undefined8 local_50;
  undefined8 **local_48;
  undefined8 **local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  FUN_00520ce8(&local_68);
  plVar7 = local_68;
  local_50 = 0;
  local_60 = &DAT_00d61c78;
  pcStack_58 = FUN_0053d0c8;
  if (DAT_00d61c78 != -1) {
    local_40 = &local_60;
    local_48 = &local_40;
                    /* try { // try from 0052c744 to 0052c7a7 has its CatchHandler @ 0052c808 */
    FUN_0054698c(&DAT_00d61c78,&local_48,FUN_005459e0);
  }
  lVar6 = plVar7[2];
  if (((long)DAT_00d61c80 - 1U < (ulong)(plVar7[3] - lVar6 >> 3)) &&
     (plVar7 = *(long **)(lVar6 + ((long)DAT_00d61c80 - 1U) * 8), plVar7 != (long *)0x0)) {
    uVar4 = (**(code **)(*plVar7 + 0x20))(plVar7);
    *param_3 = uVar4;
    (**(code **)(*plVar7 + 0x28))(param_1,plVar7);
    plVar7 = local_68 + 1;
    do {
      lVar6 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
    if (*(long *)(lVar3 + 0x28) == local_38) {
      return;
    }
  }
  else if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 0052c804 to 0052c807 has its CatchHandler @ 0052c808 */
    uVar5 = FUN_0053cd4c();
                    /* catch() { ... } // from try @ 0052c744 with catch @ 0052c808
                       catch() { ... } // from try @ 0052c804 with catch @ 0052c808 */
    plVar7 = local_68 + 1;
    do {
      lVar6 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
    if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00d0fa5c(uVar5);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0052c850  FUN_0052c850 =====

undefined8 FUN_0052c850(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long *local_68;
  undefined8 *local_60;
  code *pcStack_58;
  undefined8 local_50;
  undefined8 ***local_48;
  undefined8 **local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  FUN_00520ce8(&local_68,param_2);
  plVar4 = local_68;
  local_50 = 0;
  local_60 = &DAT_00d61be8;
  pcStack_58 = FUN_0053d0c8;
  if (DAT_00d61be8 != -1) {
    local_40 = &local_60;
    local_48 = &local_40;
                    /* try { // try from 0052c8b4 to 0052c90b has its CatchHandler @ 0052c970 */
    FUN_0054698c(&DAT_00d61be8,&local_48,FUN_005459e0);
  }
  lVar6 = plVar4[2];
  if (((long)DAT_00d61bf0 - 1U < (ulong)(plVar4[3] - lVar6 >> 3)) &&
     (plVar4 = *(long **)(lVar6 + ((long)DAT_00d61bf0 - 1U) * 8), plVar4 != (long *)0x0)) {
    (**(code **)(*plVar4 + 0x60))(plVar4,"0123456789abcdefABCDEFxX+-pPiInN","pPiInN",param_3);
    plVar4 = local_68 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
    if (*(long *)(lVar3 + 0x28) == local_38) {
      return param_3;
    }
  }
  else if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 0052c96c to 0052c96f has its CatchHandler @ 0052c970 */
    uVar5 = FUN_0053cd4c();
                    /* catch() { ... } // from try @ 0052c8b4 with catch @ 0052c970
                       catch() { ... } // from try @ 0052c96c with catch @ 0052c970 */
    plVar4 = local_68 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
    if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00d0fa5c(uVar5);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0052c9b8  FUN_0052c9b8 =====

long * FUN_0052c9b8(long *param_1,long *param_2,long param_3,undefined8 param_4,ulong param_5)

{
  long *plVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined8 ***pppuVar8;
  int iVar9;
  long *plVar10;
  undefined8 uVar11;
  uint uVar12;
  long lVar13;
  undefined8 ***pppuVar14;
  long *local_68;
  undefined8 **local_60;
  code *pcStack_58;
  undefined8 local_50;
  undefined8 **local_48;
  undefined8 **local_40;
  long local_38;
  
  lVar7 = tpidr_el0;
  local_38 = *(long *)(lVar7 + 0x28);
  if ((*(byte *)(param_3 + 8) & 1) == 0) {
    if (*(long *)(lVar7 + 0x28) == local_38) {
                    /* WARNING: Could not recover jumptable at 0x0052ca18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar10 = (long *)(**(code **)(*param_1 + 0x30))(param_1,param_2,param_3,param_4,param_5 & 1);
      return plVar10;
    }
  }
  else {
    FUN_00520ce8(&local_68,param_3);
    plVar10 = local_68;
    local_50 = 0;
    local_60 = (undefined8 **)&DAT_00d61c68;
    pcStack_58 = FUN_0053d0c8;
    if (DAT_00d61c68 != -1) {
      local_40 = &local_60;
      local_48 = &local_40;
                    /* try { // try from 0052ca5c to 0052ca73 has its CatchHandler @ 0052cbb8 */
      FUN_0054698c(&DAT_00d61c68,&local_48,FUN_005459e0);
    }
    lVar13 = plVar10[2];
    if (((long)DAT_00d61c70 - 1U < (ulong)(plVar10[3] - lVar13 >> 3)) &&
       (plVar10 = *(long **)(lVar13 + ((long)DAT_00d61c70 - 1U) * 8), plVar10 != (long *)0x0)) {
      plVar1 = local_68 + 1;
      do {
        lVar13 = *plVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*local_68 + 0x10))();
      }
      lVar13 = 0x30;
      if ((param_5 & 1) == 0) {
        lVar13 = 0x38;
      }
      (**(code **)(*plVar10 + lVar13))(&local_60,plVar10);
      uVar12 = (uint)(char)local_50._7_1_;
      pcVar2 = pcStack_58;
      if (-1 < (int)uVar12) {
        pcVar2 = (code *)(ulong)local_50._7_1_;
      }
      if (pcVar2 == (code *)0x0) {
        uVar12 = uVar12 >> 0x1f;
      }
      else {
        plVar10 = param_2;
        pppuVar14 = (undefined8 ***)local_60;
        if (-1 < (int)uVar12) {
          pppuVar14 = &local_60;
        }
        do {
          param_2 = plVar10;
          if (plVar10 != (long *)0x0) {
            puVar3 = (undefined1 *)plVar10[6];
            uVar4 = *(undefined1 *)pppuVar14;
            if (puVar3 == (undefined1 *)plVar10[7]) {
                    /* try { // try from 0052cb5c to 0052cb63 has its CatchHandler @ 0052cbe8 */
              iVar9 = (**(code **)(*plVar10 + 0x68))(plVar10);
              param_2 = (long *)0x0;
              if (iVar9 != -1) {
                param_2 = plVar10;
              }
            }
            else {
              plVar10[6] = (long)(puVar3 + 1);
              *puVar3 = uVar4;
            }
          }
          pppuVar14 = (undefined8 ***)((long)pppuVar14 + 1);
          pcVar2 = pcStack_58;
          pppuVar8 = (undefined8 ***)local_60;
          if ((long)local_50 >= 0) {
            pcVar2 = (code *)(local_50 >> 0x38);
            pppuVar8 = &local_60;
          }
          uVar12 = (uint)((long)local_50 < 0);
          plVar10 = param_2;
        } while (pppuVar14 != (undefined8 ***)((long)pppuVar8 + (long)pcVar2));
      }
      if (uVar12 != 0) {
        operator_delete(local_60);
      }
      if (*(long *)(lVar7 + 0x28) == local_38) {
        return param_2;
      }
    }
    else if (*(long *)(lVar7 + 0x28) == local_38) {
                    /* try { // try from 0052cbb4 to 0052cbb7 has its CatchHandler @ 0052cbb8 */
      uVar11 = FUN_0053cd4c();
                    /* catch() { ... } // from try @ 0052ca5c with catch @ 0052cbb8
                       catch() { ... } // from try @ 0052cbb4 with catch @ 0052cbb8 */
      plVar10 = local_68 + 1;
      do {
        lVar13 = *plVar10;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar6) {
          *plVar10 = lVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*local_68 + 0x10))();
      }
      if (*(long *)(lVar7 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00d0fa5c(uVar11);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0052cc18  FUN_0052cc18 =====

void FUN_0052cc18(void)

{
  FUN_0052cc24();
  return;
}


// ===== 0052cc24  FUN_0052cc24 =====

void FUN_0052cc24(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,
                 undefined8 param_5,char *param_6)

{
  long *plVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char cVar8;
  long lVar9;
  char *pcVar10;
  long *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [48];
  char local_68 [24];
  undefined8 local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  uVar2 = *(uint *)(param_3 + 8);
  pcVar6 = (char *)((ulong)&local_50 | 1);
  local_50 = 0x25;
  if ((((uVar2 >> 0xb & 1) != 0) && ((uVar2 & 0x4a) != 8)) && ((uVar2 & 0x4a) != 0x40)) {
    pcVar6 = (char *)((ulong)&local_50 | 2);
    local_50 = 0x2b25;
  }
  pcVar7 = pcVar6;
  if ((uVar2 >> 9 & 1) != 0) {
    pcVar7 = pcVar6 + 1;
    *pcVar6 = '#';
  }
  cVar8 = *param_6;
  if (cVar8 != '\0') {
    pcVar6 = pcVar7;
    pcVar10 = param_6 + 1;
    do {
      pcVar7 = pcVar6 + 1;
      *pcVar6 = cVar8;
      cVar8 = *pcVar10;
      pcVar6 = pcVar7;
      pcVar10 = pcVar10 + 1;
    } while (cVar8 != '\0');
  }
  if ((uVar2 & 0x4a) == 0x40) {
    cVar8 = 'o';
  }
  else if ((uVar2 & 0x4a) == 8) {
    cVar8 = 'x';
    if ((uVar2 & 0x4000) != 0) {
      cVar8 = 'X';
    }
  }
  else {
    cVar8 = 'd';
  }
  *pcVar7 = cVar8;
  if (((DAT_00d61ba8 & 1) == 0) && (iVar5 = FUN_0054fdd4(&DAT_00d61ba8), iVar5 != 0)) {
                    /* try { // try from 0052ce40 to 0052ce53 has its CatchHandler @ 0052ce68 */
    DAT_00d61ba0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    FUN_0054ff1c(&DAT_00d61ba8);
  }
  iVar5 = FUN_0052e348(local_68,0x18,DAT_00d61ba0,&local_50,param_5);
  uVar2 = *(uint *)(param_3 + 8) & 0xb0;
  pcVar6 = local_68 + iVar5;
  if (uVar2 == 0x20) goto LAB_0052cd9c;
  if (uVar2 == 0x10) {
    if ((local_68[0] == '-') || (local_68[0] == '+')) {
      pcVar6 = (char *)((ulong)local_68 | 1);
      goto LAB_0052cd9c;
    }
    if (((1 < iVar5) && (local_68[0] == '0')) && ((byte)(local_68[1] | 0x20U) == 0x78)) {
      pcVar6 = (char *)((ulong)local_68 | 2);
      goto LAB_0052cd9c;
    }
  }
  pcVar6 = local_68;
LAB_0052cd9c:
  FUN_00520ce8(&local_b0,param_3);
                    /* try { // try from 0052cda8 to 0052cdc7 has its CatchHandler @ 0052ce7c */
  FUN_00530020(local_68,pcVar6,local_68 + iVar5,auStack_98,&uStack_a0,&local_a8,&local_b0);
  plVar1 = local_b0 + 1;
  do {
    lVar9 = *plVar1;
    cVar8 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar9 + -1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if (lVar9 == 0) {
    (**(code **)(*local_b0 + 0x10))();
  }
  FUN_00428a94(param_2,auStack_98,uStack_a0,local_a8,param_3,param_4);
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0052cec4  FUN_0052cec4 =====

void FUN_0052cec4(void)

{
  FUN_0052ced0();
  return;
}


// ===== 0052ced0  FUN_0052ced0 =====

void FUN_0052ced0(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,
                 undefined8 param_5,char *param_6)

{
  long *plVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char cVar8;
  long lVar9;
  char *pcVar10;
  long *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [48];
  char local_68 [24];
  undefined8 local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  uVar2 = *(uint *)(param_3 + 8);
  pcVar6 = (char *)((ulong)&local_50 | 1);
  local_50 = 0x25;
  if ((((uVar2 >> 0xb & 1) != 0) && ((uVar2 & 0x4a) != 8)) && ((uVar2 & 0x4a) != 0x40)) {
    pcVar6 = (char *)((ulong)&local_50 | 2);
    local_50 = 0x2b25;
  }
  pcVar7 = pcVar6;
  if ((uVar2 >> 9 & 1) != 0) {
    pcVar7 = pcVar6 + 1;
    *pcVar6 = '#';
  }
  cVar8 = *param_6;
  if (cVar8 != '\0') {
    pcVar6 = pcVar7;
    pcVar10 = param_6 + 1;
    do {
      pcVar7 = pcVar6 + 1;
      *pcVar6 = cVar8;
      cVar8 = *pcVar10;
      pcVar6 = pcVar7;
      pcVar10 = pcVar10 + 1;
    } while (cVar8 != '\0');
  }
  if ((uVar2 & 0x4a) == 0x40) {
    cVar8 = 'o';
  }
  else if ((uVar2 & 0x4a) == 8) {
    cVar8 = 'x';
    if ((uVar2 & 0x4000) != 0) {
      cVar8 = 'X';
    }
  }
  else {
    cVar8 = 'd';
  }
  *pcVar7 = cVar8;
  if (((DAT_00d61ba8 & 1) == 0) && (iVar5 = FUN_0054fdd4(&DAT_00d61ba8), iVar5 != 0)) {
                    /* try { // try from 0052d0ec to 0052d0ff has its CatchHandler @ 0052d114 */
    DAT_00d61ba0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    FUN_0054ff1c(&DAT_00d61ba8);
  }
  iVar5 = FUN_0052e348(local_68,0x18,DAT_00d61ba0,&local_50,param_5);
  uVar2 = *(uint *)(param_3 + 8) & 0xb0;
  pcVar6 = local_68 + iVar5;
  if (uVar2 == 0x20) goto LAB_0052d048;
  if (uVar2 == 0x10) {
    if ((local_68[0] == '-') || (local_68[0] == '+')) {
      pcVar6 = (char *)((ulong)local_68 | 1);
      goto LAB_0052d048;
    }
    if (((1 < iVar5) && (local_68[0] == '0')) && ((byte)(local_68[1] | 0x20U) == 0x78)) {
      pcVar6 = (char *)((ulong)local_68 | 2);
      goto LAB_0052d048;
    }
  }
  pcVar6 = local_68;
LAB_0052d048:
  FUN_00520ce8(&local_b0,param_3);
                    /* try { // try from 0052d054 to 0052d073 has its CatchHandler @ 0052d128 */
  FUN_00530020(local_68,pcVar6,local_68 + iVar5,auStack_98,&uStack_a0,&local_a8,&local_b0);
  plVar1 = local_b0 + 1;
  do {
    lVar9 = *plVar1;
    cVar8 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar9 + -1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if (lVar9 == 0) {
    (**(code **)(*local_b0 + 0x10))();
  }
  FUN_00428a94(param_2,auStack_98,uStack_a0,local_a8,param_3,param_4);
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0052d170  FUN_0052d170 =====

void FUN_0052d170(void)

{
  FUN_0052d17c();
  return;
}


// ===== 0052d17c  FUN_0052d17c =====

void FUN_0052d17c(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,
                 undefined8 param_5,char *param_6)

{
  long *plVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char cVar8;
  long lVar9;
  char *pcVar10;
  long *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [48];
  char local_68 [24];
  undefined8 local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  uVar2 = *(uint *)(param_3 + 8);
  local_50 = 0x25;
  if ((uVar2 >> 9 & 1) == 0) {
    pcVar6 = (char *)((ulong)&local_50 | 1);
    cVar8 = *param_6;
  }
  else {
    pcVar6 = (char *)((ulong)&local_50 | 2);
    local_50 = 0x2325;
    cVar8 = *param_6;
  }
  if (cVar8 != '\0') {
    pcVar7 = pcVar6;
    pcVar10 = param_6 + 1;
    do {
      pcVar6 = pcVar7 + 1;
      *pcVar7 = cVar8;
      cVar8 = *pcVar10;
      pcVar7 = pcVar6;
      pcVar10 = pcVar10 + 1;
    } while (cVar8 != '\0');
  }
  if ((uVar2 & 0x4a) == 0x40) {
    cVar8 = 'o';
  }
  else if ((uVar2 & 0x4a) == 8) {
    cVar8 = 'x';
    if ((uVar2 & 0x4000) != 0) {
      cVar8 = 'X';
    }
  }
  else {
    cVar8 = 'u';
  }
  *pcVar6 = cVar8;
  if (((DAT_00d61ba8 & 1) == 0) && (iVar5 = FUN_0054fdd4(&DAT_00d61ba8), iVar5 != 0)) {
                    /* try { // try from 0052d37c to 0052d38f has its CatchHandler @ 0052d3a4 */
    DAT_00d61ba0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    FUN_0054ff1c(&DAT_00d61ba8);
  }
  iVar5 = FUN_0052e348(local_68,0x18,DAT_00d61ba0,&local_50,param_5);
  uVar2 = *(uint *)(param_3 + 8) & 0xb0;
  pcVar6 = local_68 + iVar5;
  if (uVar2 == 0x20) goto LAB_0052d2d8;
  if (uVar2 == 0x10) {
    if ((local_68[0] == '-') || (local_68[0] == '+')) {
      pcVar6 = (char *)((ulong)local_68 | 1);
      goto LAB_0052d2d8;
    }
    if (((1 < iVar5) && (local_68[0] == '0')) && ((byte)(local_68[1] | 0x20U) == 0x78)) {
      pcVar6 = (char *)((ulong)local_68 | 2);
      goto LAB_0052d2d8;
    }
  }
  pcVar6 = local_68;
LAB_0052d2d8:
  FUN_00520ce8(&local_b0,param_3);
                    /* try { // try from 0052d2e4 to 0052d303 has its CatchHandler @ 0052d3b8 */
  FUN_00530020(local_68,pcVar6,local_68 + iVar5,auStack_98,&uStack_a0,&local_a8,&local_b0);
  plVar1 = local_b0 + 1;
  do {
    lVar9 = *plVar1;
    cVar8 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar9 + -1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if (lVar9 == 0) {
    (**(code **)(*local_b0 + 0x10))();
  }
  FUN_00428a94(param_2,auStack_98,uStack_a0,local_a8,param_3,param_4);
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0052d400  FUN_0052d400 =====

void FUN_0052d400(void)

{
  FUN_0052d40c();
  return;
}


// ===== 0052d40c  FUN_0052d40c =====

void FUN_0052d40c(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,
                 undefined8 param_5,char *param_6)

{
  long *plVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char cVar8;
  long lVar9;
  char *pcVar10;
  long *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [48];
  char local_68 [24];
  undefined8 local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  uVar2 = *(uint *)(param_3 + 8);
  local_50 = 0x25;
  if ((uVar2 >> 9 & 1) == 0) {
    pcVar6 = (char *)((ulong)&local_50 | 1);
    cVar8 = *param_6;
  }
  else {
    pcVar6 = (char *)((ulong)&local_50 | 2);
    local_50 = 0x2325;
    cVar8 = *param_6;
  }
  if (cVar8 != '\0') {
    pcVar7 = pcVar6;
    pcVar10 = param_6 + 1;
    do {
      pcVar6 = pcVar7 + 1;
      *pcVar7 = cVar8;
      cVar8 = *pcVar10;
      pcVar7 = pcVar6;
      pcVar10 = pcVar10 + 1;
    } while (cVar8 != '\0');
  }
  if ((uVar2 & 0x4a) == 0x40) {
    cVar8 = 'o';
  }
  else if ((uVar2 & 0x4a) == 8) {
    cVar8 = 'x';
    if ((uVar2 & 0x4000) != 0) {
      cVar8 = 'X';
    }
  }
  else {
    cVar8 = 'u';
  }
  *pcVar6 = cVar8;
  if (((DAT_00d61ba8 & 1) == 0) && (iVar5 = FUN_0054fdd4(&DAT_00d61ba8), iVar5 != 0)) {
                    /* try { // try from 0052d60c to 0052d61f has its CatchHandler @ 0052d634 */
    DAT_00d61ba0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    FUN_0054ff1c(&DAT_00d61ba8);
  }
  iVar5 = FUN_0052e348(local_68,0x18,DAT_00d61ba0,&local_50,param_5);
  uVar2 = *(uint *)(param_3 + 8) & 0xb0;
  pcVar6 = local_68 + iVar5;
  if (uVar2 == 0x20) goto LAB_0052d568;
  if (uVar2 == 0x10) {
    if ((local_68[0] == '-') || (local_68[0] == '+')) {
      pcVar6 = (char *)((ulong)local_68 | 1);
      goto LAB_0052d568;
    }
    if (((1 < iVar5) && (local_68[0] == '0')) && ((byte)(local_68[1] | 0x20U) == 0x78)) {
      pcVar6 = (char *)((ulong)local_68 | 2);
      goto LAB_0052d568;
    }
  }
  pcVar6 = local_68;
LAB_0052d568:
  FUN_00520ce8(&local_b0,param_3);
                    /* try { // try from 0052d574 to 0052d593 has its CatchHandler @ 0052d648 */
  FUN_00530020(local_68,pcVar6,local_68 + iVar5,auStack_98,&uStack_a0,&local_a8,&local_b0);
  plVar1 = local_b0 + 1;
  do {
    lVar9 = *plVar1;
    cVar8 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar9 + -1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if (lVar9 == 0) {
    (**(code **)(*local_b0 + 0x10))();
  }
  FUN_00428a94(param_2,auStack_98,uStack_a0,local_a8,param_3,param_4);
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0052d690  FUN_0052d690 =====

void FUN_0052d690(void)

{
  FUN_0052d69c();
  return;
}


// ===== 0052d69c  FUN_0052d69c =====

undefined8
FUN_0052d69c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
            undefined4 param_5,char *param_6)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  undefined1 *__ptr;
  undefined8 uVar7;
  char *pcVar8;
  char *pcVar9;
  char cVar10;
  long lVar11;
  char cVar12;
  char *pcVar13;
  undefined1 *puVar14;
  char *pcVar15;
  long *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  char *local_e8;
  undefined1 auStack_dc [60];
  char local_a0 [32];
  undefined8 local_80;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  uVar3 = *(uint *)(param_4 + 8);
  local_80 = 0x25;
  if ((uVar3 >> 0xb & 1) == 0) {
    pcVar8 = (char *)((ulong)&local_80 | 1);
  }
  else {
    pcVar8 = (char *)((ulong)&local_80 | 2);
    local_80 = 0x2b25;
  }
  if ((uVar3 >> 10 & 1) != 0) {
    *pcVar8 = '#';
    pcVar8 = pcVar8 + 1;
  }
  uVar2 = uVar3 & 0x104;
  pcVar9 = pcVar8;
  if (uVar2 != 0x104) {
    pcVar9 = pcVar8 + 2;
    pcVar8[0] = '.';
    pcVar8[1] = '*';
  }
  cVar12 = *param_6;
  if (cVar12 != '\0') {
    pcVar8 = pcVar9;
    pcVar13 = param_6 + 1;
    do {
      pcVar9 = pcVar8 + 1;
      *pcVar8 = cVar12;
      cVar12 = *pcVar13;
      pcVar8 = pcVar9;
      pcVar13 = pcVar13 + 1;
    } while (cVar12 != '\0');
  }
  if (uVar2 == 0x100) {
    bVar5 = (uVar3 & 0x4000) == 0;
    cVar10 = 'E';
    cVar12 = 'e';
LAB_0052d7dc:
    if (!bVar5) {
      cVar12 = cVar10;
    }
    local_e8 = local_a0;
    *pcVar9 = cVar12;
    if (((DAT_00d61ba8 & 1) == 0) && (iVar6 = FUN_0054fdd4(&DAT_00d61ba8), iVar6 != 0)) {
                    /* try { // try from 0052d9fc to 0052da0f has its CatchHandler @ 0052daf4 */
      DAT_00d61ba0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      FUN_0054ff1c(&DAT_00d61ba8);
    }
    iVar6 = FUN_0052e348(param_1,local_a0,0x1e,DAT_00d61ba0,&local_80,
                         *(undefined4 *)(param_4 + 0x10));
    if (iVar6 < 0x1e) {
LAB_0052d848:
      pcVar8 = (char *)0x0;
LAB_0052d87c:
      pcVar13 = local_e8;
      pcVar9 = local_e8 + iVar6;
      uVar3 = *(uint *)(param_4 + 8) & 0xb0;
      pcVar15 = pcVar9;
      if ((uVar3 != 0x20) && (pcVar15 = local_e8, uVar3 == 0x10)) {
        cVar12 = *local_e8;
        if ((cVar12 == '-') || (cVar12 == '+')) {
          pcVar15 = local_e8 + 1;
        }
        else if (((1 < iVar6) && (cVar12 == '0')) && ((byte)(local_e8[1] | 0x20U) == 0x78)) {
          pcVar15 = local_e8 + 2;
        }
      }
      if (local_e8 == local_a0) {
LAB_0052d924:
        __ptr = (undefined1 *)0x0;
        puVar14 = auStack_dc;
      }
      else {
        __ptr = (undefined1 *)malloc((long)iVar6 << 1);
        puVar14 = __ptr;
        if (__ptr == (undefined1 *)0x0) {
          if (*(long *)(lVar4 + 0x28) != local_78) goto LAB_0052db94;
                    /* try { // try from 0052d920 to 0052d923 has its CatchHandler @ 0052db08 */
          FUN_00546ac8();
          goto LAB_0052d924;
        }
      }
                    /* try { // try from 0052d92c to 0052d937 has its CatchHandler @ 0052db58 */
      FUN_00520ce8(&local_100,param_4);
                    /* try { // try from 0052d938 to 0052d957 has its CatchHandler @ 0052db18 */
      FUN_005304cc(pcVar13,pcVar15,pcVar9,puVar14,&uStack_f0,&local_f8,&local_100);
      plVar1 = local_100 + 1;
      do {
        lVar11 = *plVar1;
        cVar12 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar11 + -1;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*local_100 + 0x10))();
      }
                    /* try { // try from 0052d984 to 0052d997 has its CatchHandler @ 0052db14 */
      uVar7 = FUN_00428a94(param_3,puVar14,uStack_f0,local_f8,param_4,param_5);
      if (__ptr != (undefined1 *)0x0) {
        free(__ptr);
      }
      if (pcVar8 != (char *)0x0) {
        free(pcVar8);
      }
      if (*(long *)(lVar4 + 0x28) == local_78) {
        return uVar7;
      }
      goto LAB_0052db94;
    }
    if (uVar2 != 0x104) {
      if (((DAT_00d61ba8 & 1) == 0) && (iVar6 = FUN_0054fdd4(&DAT_00d61ba8), iVar6 != 0)) {
                    /* try { // try from 0052da88 to 0052da9b has its CatchHandler @ 0052daec */
        DAT_00d61ba0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
        FUN_0054ff1c(&DAT_00d61ba8);
      }
      iVar6 = FUN_00539db0(param_1,&local_e8,DAT_00d61ba0,&local_80,*(undefined4 *)(param_4 + 0x10))
      ;
      goto LAB_0052d870;
    }
  }
  else {
    if (uVar2 == 4) {
      bVar5 = (uVar3 & 0x4000) == 0;
      cVar10 = 'F';
      cVar12 = 'f';
      goto LAB_0052d7dc;
    }
    if (uVar2 != 0x104) {
      bVar5 = (uVar3 & 0x4000) == 0;
      cVar10 = 'G';
      cVar12 = 'g';
      goto LAB_0052d7dc;
    }
    cVar12 = 'a';
    if ((uVar3 & 0x4000) != 0) {
      cVar12 = 'A';
    }
    local_e8 = local_a0;
    *pcVar9 = cVar12;
    if (((DAT_00d61ba8 & 1) == 0) && (iVar6 = FUN_0054fdd4(&DAT_00d61ba8), iVar6 != 0)) {
                    /* try { // try from 0052dac0 to 0052dad3 has its CatchHandler @ 0052dae8 */
      DAT_00d61ba0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      FUN_0054ff1c(&DAT_00d61ba8);
    }
    iVar6 = FUN_0052e348(param_1,local_a0,0x1e,DAT_00d61ba0,&local_80);
    if (iVar6 < 0x1e) goto LAB_0052d848;
  }
  if ((DAT_00d61ba8 & 1) == 0) goto LAB_0052da3c;
  while( true ) {
                    /* try { // try from 0052d834 to 0052d86f has its CatchHandler @ 0052db78 */
    iVar6 = FUN_00539db0(param_1,&local_e8,DAT_00d61ba0,&local_80);
LAB_0052d870:
    pcVar8 = local_e8;
    if (iVar6 != -1) goto LAB_0052d87c;
    if (*(long *)(lVar4 + 0x28) != local_78) break;
                    /* try { // try from 0052da38 to 0052da3b has its CatchHandler @ 0052db78 */
    FUN_00546ac8();
LAB_0052da3c:
    iVar6 = FUN_0054fdd4(&DAT_00d61ba8);
    if (iVar6 != 0) {
                    /* try { // try from 0052da4c to 0052da5f has its CatchHandler @ 0052daf0 */
      DAT_00d61ba0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      FUN_0054ff1c(&DAT_00d61ba8);
    }
  }
LAB_0052db94:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0052db98  FUN_0052db98 =====

void FUN_0052db98(void)

{
  FUN_0052dba4();
  return;
}


// ===== 0052dba4  FUN_0052dba4 =====

undefined8
FUN_0052dba4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
            undefined4 param_5,char *param_6)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  undefined1 *__ptr;
  undefined8 uVar7;
  char *pcVar8;
  char *pcVar9;
  char cVar10;
  long lVar11;
  char cVar12;
  char *pcVar13;
  undefined1 *puVar14;
  char *pcVar15;
  long *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  char *local_d8;
  undefined1 auStack_cc [60];
  char local_90 [32];
  undefined8 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar3 = *(uint *)(param_4 + 8);
  local_70 = 0x25;
  if ((uVar3 >> 0xb & 1) == 0) {
    pcVar8 = (char *)((ulong)&local_70 | 1);
  }
  else {
    pcVar8 = (char *)((ulong)&local_70 | 2);
    local_70 = 0x2b25;
  }
  if ((uVar3 >> 10 & 1) != 0) {
    *pcVar8 = '#';
    pcVar8 = pcVar8 + 1;
  }
  uVar2 = uVar3 & 0x104;
  pcVar9 = pcVar8;
  if (uVar2 != 0x104) {
    pcVar9 = pcVar8 + 2;
    pcVar8[0] = '.';
    pcVar8[1] = '*';
  }
  cVar12 = *param_6;
  if (cVar12 != '\0') {
    pcVar8 = pcVar9;
    pcVar13 = param_6 + 1;
    do {
      pcVar9 = pcVar8 + 1;
      *pcVar8 = cVar12;
      cVar12 = *pcVar13;
      pcVar8 = pcVar9;
      pcVar13 = pcVar13 + 1;
    } while (cVar12 != '\0');
  }
  if (uVar2 == 0x100) {
    bVar5 = (uVar3 & 0x4000) == 0;
    cVar10 = 'E';
    cVar12 = 'e';
LAB_0052dce0:
    if (!bVar5) {
      cVar12 = cVar10;
    }
    local_d8 = local_90;
    *pcVar9 = cVar12;
    if (((DAT_00d61ba8 & 1) == 0) && (iVar6 = FUN_0054fdd4(&DAT_00d61ba8), iVar6 != 0)) {
                    /* try { // try from 0052defc to 0052df0f has its CatchHandler @ 0052dff4 */
      DAT_00d61ba0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      FUN_0054ff1c(&DAT_00d61ba8);
    }
    iVar6 = FUN_0052e348(param_1,local_90,0x1e,DAT_00d61ba0,&local_70,
                         *(undefined4 *)(param_4 + 0x10));
    if (iVar6 < 0x1e) {
LAB_0052dd4c:
      pcVar8 = (char *)0x0;
LAB_0052dd80:
      pcVar13 = local_d8;
      pcVar9 = local_d8 + iVar6;
      uVar3 = *(uint *)(param_4 + 8) & 0xb0;
      pcVar15 = pcVar9;
      if ((uVar3 != 0x20) && (pcVar15 = local_d8, uVar3 == 0x10)) {
        cVar12 = *local_d8;
        if ((cVar12 == '-') || (cVar12 == '+')) {
          pcVar15 = local_d8 + 1;
        }
        else if (((1 < iVar6) && (cVar12 == '0')) && ((byte)(local_d8[1] | 0x20U) == 0x78)) {
          pcVar15 = local_d8 + 2;
        }
      }
      if (local_d8 == local_90) {
LAB_0052de28:
        __ptr = (undefined1 *)0x0;
        puVar14 = auStack_cc;
      }
      else {
        __ptr = (undefined1 *)malloc((long)iVar6 << 1);
        puVar14 = __ptr;
        if (__ptr == (undefined1 *)0x0) {
          if (*(long *)(lVar4 + 0x28) != local_68) goto LAB_0052e094;
                    /* try { // try from 0052de24 to 0052de27 has its CatchHandler @ 0052e008 */
          FUN_00546ac8();
          goto LAB_0052de28;
        }
      }
                    /* try { // try from 0052de30 to 0052de3b has its CatchHandler @ 0052e058 */
      FUN_00520ce8(&local_f0,param_4);
                    /* try { // try from 0052de3c to 0052de5b has its CatchHandler @ 0052e018 */
      FUN_005304cc(pcVar13,pcVar15,pcVar9,puVar14,&uStack_e0,&local_e8,&local_f0);
      plVar1 = local_f0 + 1;
      do {
        lVar11 = *plVar1;
        cVar12 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar11 + -1;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*local_f0 + 0x10))();
      }
                    /* try { // try from 0052de88 to 0052de9b has its CatchHandler @ 0052e014 */
      uVar7 = FUN_00428a94(param_3,puVar14,uStack_e0,local_e8,param_4,param_5);
      if (__ptr != (undefined1 *)0x0) {
        free(__ptr);
      }
      if (pcVar8 != (char *)0x0) {
        free(pcVar8);
      }
      if (*(long *)(lVar4 + 0x28) == local_68) {
        return uVar7;
      }
      goto LAB_0052e094;
    }
    if (uVar2 != 0x104) {
      if (((DAT_00d61ba8 & 1) == 0) && (iVar6 = FUN_0054fdd4(&DAT_00d61ba8), iVar6 != 0)) {
                    /* try { // try from 0052df88 to 0052df9b has its CatchHandler @ 0052dfec */
        DAT_00d61ba0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
        FUN_0054ff1c(&DAT_00d61ba8);
      }
      iVar6 = FUN_00539db0(param_1,&local_d8,DAT_00d61ba0,&local_70,*(undefined4 *)(param_4 + 0x10))
      ;
      goto LAB_0052dd74;
    }
  }
  else {
    if (uVar2 == 4) {
      bVar5 = (uVar3 & 0x4000) == 0;
      cVar10 = 'F';
      cVar12 = 'f';
      goto LAB_0052dce0;
    }
    if (uVar2 != 0x104) {
      bVar5 = (uVar3 & 0x4000) == 0;
      cVar10 = 'G';
      cVar12 = 'g';
      goto LAB_0052dce0;
    }
    cVar12 = 'a';
    if ((uVar3 & 0x4000) != 0) {
      cVar12 = 'A';
    }
    local_d8 = local_90;
    *pcVar9 = cVar12;
    if (((DAT_00d61ba8 & 1) == 0) && (iVar6 = FUN_0054fdd4(&DAT_00d61ba8), iVar6 != 0)) {
                    /* try { // try from 0052dfc0 to 0052dfd3 has its CatchHandler @ 0052dfe8 */
      DAT_00d61ba0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      FUN_0054ff1c(&DAT_00d61ba8);
    }
    iVar6 = FUN_0052e348(param_1,local_90,0x1e,DAT_00d61ba0,&local_70);
    if (iVar6 < 0x1e) goto LAB_0052dd4c;
  }
  if ((DAT_00d61ba8 & 1) == 0) goto LAB_0052df3c;
  while( true ) {
                    /* try { // try from 0052dd38 to 0052dd73 has its CatchHandler @ 0052e078 */
    iVar6 = FUN_00539db0(param_1,&local_d8,DAT_00d61ba0,&local_70);
LAB_0052dd74:
    pcVar8 = local_d8;
    if (iVar6 != -1) goto LAB_0052dd80;
    if (*(long *)(lVar4 + 0x28) != local_68) break;
                    /* try { // try from 0052df38 to 0052df3b has its CatchHandler @ 0052e078 */
    FUN_00546ac8();
LAB_0052df3c:
    iVar6 = FUN_0054fdd4(&DAT_00d61ba8);
    if (iVar6 != 0) {
                    /* try { // try from 0052df4c to 0052df5f has its CatchHandler @ 0052dff0 */
      DAT_00d61ba0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      FUN_0054ff1c(&DAT_00d61ba8);
    }
  }
LAB_0052e094:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0052e098  FUN_0052e098 =====

void FUN_0052e098(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,
                 char *param_5)

{
  long *plVar1;
  uint uVar2;
  char *pcVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  int iVar7;
  __locale_t p_Var8;
  long lVar9;
  long *plVar10;
  char *pcVar11;
  long *local_d8;
  undefined8 *local_d0;
  code *pcStack_c8;
  undefined8 local_c0;
  undefined8 ***local_b8;
  undefined8 **local_b0;
  char acStack_a4 [40];
  char local_7c [20];
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  plVar10 = (long *)&DAT_00d61000;
  if ((DAT_00d61ba8 & 1) == 0) goto LAB_0052e2b4;
LAB_0052e0e8:
  iVar7 = FUN_0052e348(local_7c,0x14,plVar10[0x174],&DAT_001e770a,param_5);
  param_5 = local_7c + iVar7;
  uVar2 = *(uint *)(param_3 + 8) & 0xb0;
  pcVar11 = param_5;
  if (uVar2 != 0x20) {
    if (uVar2 == 0x10) {
      if ((local_7c[0] == '-') || (local_7c[0] == '+')) {
        pcVar11 = (char *)((ulong)local_7c | 1);
      }
      else {
        if ((iVar7 < 2) || ((local_7c[0] != '0' || ((byte)(local_7c[1] | 0x20U) != 0x78))))
        goto LAB_0052e17c;
        pcVar11 = (char *)((ulong)local_7c | 2);
      }
    }
    else {
LAB_0052e17c:
      pcVar11 = local_7c;
    }
  }
  FUN_00520ce8(&local_d8,param_3);
  plVar10 = local_d8;
  local_c0 = 0;
  local_d0 = &DAT_00d61bf8;
  pcStack_c8 = FUN_0053d0c8;
  if (DAT_00d61bf8 != -1) {
    local_b0 = &local_d0;
    local_b8 = &local_b0;
                    /* try { // try from 0052e1c0 to 0052e1d7 has its CatchHandler @ 0052e300 */
    FUN_0054698c(&DAT_00d61bf8,&local_b8,FUN_005459e0);
  }
  if (((long)DAT_00d61c00 - 1U < (ulong)(plVar10[3] - plVar10[2] >> 3)) &&
     (plVar10 = *(long **)(plVar10[2] + ((long)DAT_00d61c00 - 1U) * 8), plVar10 != (long *)0x0)) {
    plVar1 = local_d8 + 1;
    do {
      lVar9 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*local_d8 + 0x10))();
    }
    (**(code **)(*plVar10 + 0x40))(plVar10,local_7c,param_5,acStack_a4);
    pcVar3 = acStack_a4 + iVar7;
    if (pcVar11 != param_5) {
      pcVar3 = pcVar11 + (long)(acStack_a4 + -(long)local_7c);
    }
    FUN_00428a94(param_2,acStack_a4,pcVar3,acStack_a4 + iVar7,param_3,param_4);
    if (*(long *)(lVar6 + 0x28) == local_68) {
      return;
    }
  }
  else if (*(long *)(lVar6 + 0x28) == local_68) {
                    /* try { // try from 0052e2b0 to 0052e2b3 has its CatchHandler @ 0052e300 */
    FUN_0053cd4c();
LAB_0052e2b4:
    iVar7 = FUN_0054fdd4(&DAT_00d61ba8);
    if (iVar7 != 0) {
                    /* try { // try from 0052e2c4 to 0052e2d7 has its CatchHandler @ 0052e2ec */
      p_Var8 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      plVar10[0x174] = (long)p_Var8;
      FUN_0054ff1c(&DAT_00d61ba8);
    }
    goto LAB_0052e0e8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0052e348  FUN_0052e348 =====

int FUN_0052e348(char *param_1,size_t param_2,__locale_t param_3,char *param_4,undefined8 param_5,
                undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  int iVar2;
  __locale_t __dataset;
  long lVar3;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 *local_a0;
  undefined1 **ppuStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  local_c0 = param_5;
  uStack_b8 = param_6;
  local_b0 = param_7;
  uStack_a8 = param_8;
  __dataset = uselocale(param_3);
  uStack_88 = 0xffffff80ffffffe0;
  local_a0 = (undefined1 *)register0x00000008;
  ppuStack_98 = &local_a0;
  puStack_90 = &local_c0;
  iVar2 = vsnprintf(param_1,param_2,param_4,&local_a0);
  if (__dataset != (__locale_t)0x0) {
                    /* try { // try from 0052e3ec to 0052e3f3 has its CatchHandler @ 0052e428 */
    uselocale(__dataset);
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0052e42c  FUN_0052e42c =====

long * FUN_0052e42c(long *param_1,long *param_2,long param_3,undefined8 param_4,ulong param_5)

{
  long *plVar1;
  int ****ppppiVar2;
  int *piVar3;
  char cVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  int ****ppppiVar11;
  long lVar12;
  code *pcVar13;
  code *pcVar14;
  uint uVar15;
  int ****ppppiVar16;
  long *local_68;
  int ***local_60;
  code *pcStack_58;
  undefined8 local_50;
  int ***local_48;
  int ***local_40;
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  if ((*(byte *)(param_3 + 8) & 1) == 0) {
    if (*(long *)(lVar5 + 0x28) == local_38) {
                    /* WARNING: Could not recover jumptable at 0x0052e48c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar9 = (long *)(**(code **)(*param_1 + 0x30))(param_1,param_2,param_3,param_4,param_5 & 1);
      return plVar9;
    }
  }
  else {
    FUN_00520ce8(&local_68,param_3);
    plVar9 = local_68;
    local_50 = 0;
    local_60 = (int ***)&DAT_00d61c78;
    pcStack_58 = FUN_0053d0c8;
    if (DAT_00d61c78 != -1) {
      local_40 = (int ***)&local_60;
      local_48 = (int ***)&local_40;
                    /* try { // try from 0052e4d0 to 0052e4e7 has its CatchHandler @ 0052e630 */
      FUN_0054698c(&DAT_00d61c78,&local_48,FUN_005459e0);
    }
    lVar12 = plVar9[2];
    if (((long)DAT_00d61c80 - 1U < (ulong)(plVar9[3] - lVar12 >> 3)) &&
       (plVar9 = *(long **)(lVar12 + ((long)DAT_00d61c80 - 1U) * 8), plVar9 != (long *)0x0)) {
      plVar1 = local_68 + 1;
      do {
        lVar12 = *plVar1;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*local_68 + 0x10))();
      }
      lVar12 = 0x30;
      if ((param_5 & 1) == 0) {
        lVar12 = 0x38;
      }
      (**(code **)(*plVar9 + lVar12))(&local_60,plVar9);
      pcVar13 = (code *)(ulong)local_50._7_1_;
      uVar15 = (uint)(char)local_50._7_1_;
      pcVar14 = pcStack_58;
      if (-1 < (int)uVar15) {
        pcVar14 = pcVar13;
      }
      ppppiVar11 = (int ****)local_60;
      if (pcVar14 == (code *)0x0) {
        uVar15 = uVar15 >> 0x1f;
      }
      else {
        pcVar14 = pcStack_58;
        plVar9 = param_2;
        ppppiVar16 = (int ****)local_60;
        if (-1 < (int)uVar15) {
          ppppiVar16 = &local_60;
        }
        do {
          param_2 = plVar9;
          if (plVar9 != (long *)0x0) {
            piVar3 = (int *)plVar9[6];
            iVar8 = *(int *)ppppiVar16;
            if (piVar3 == (int *)plVar9[7]) {
                    /* try { // try from 0052e5d4 to 0052e5df has its CatchHandler @ 0052e660 */
              iVar8 = (**(code **)(*plVar9 + 0x68))(plVar9);
            }
            else {
              *piVar3 = iVar8;
              plVar9[6] = (long)(piVar3 + 1);
            }
            pcVar13 = (code *)(local_50 >> 0x38);
            ppppiVar11 = (int ****)local_60;
            pcVar14 = pcStack_58;
            param_2 = (long *)0x0;
            if (iVar8 != -1) {
              param_2 = plVar9;
            }
          }
          ppppiVar16 = (int ****)((long)ppppiVar16 + 4);
          bVar7 = (char)pcVar13 < '\0';
          ppppiVar2 = ppppiVar11;
          pcVar6 = pcVar14;
          if (!bVar7) {
            ppppiVar2 = &local_60;
            pcVar6 = pcVar13;
          }
          uVar15 = (uint)bVar7;
          plVar9 = param_2;
        } while (ppppiVar16 != (int ****)((long)ppppiVar2 + (long)pcVar6 * 4));
      }
      if (uVar15 != 0) {
        operator_delete(ppppiVar11);
      }
      if (*(long *)(lVar5 + 0x28) == local_38) {
        return param_2;
      }
    }
    else if (*(long *)(lVar5 + 0x28) == local_38) {
                    /* try { // try from 0052e62c to 0052e62f has its CatchHandler @ 0052e630 */
      uVar10 = FUN_0053cd4c();
                    /* catch() { ... } // from try @ 0052e4d0 with catch @ 0052e630
                       catch() { ... } // from try @ 0052e62c with catch @ 0052e630 */
      plVar9 = local_68 + 1;
      do {
        lVar12 = *plVar9;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar7) {
          *plVar9 = lVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*local_68 + 0x10))();
      }
      if (*(long *)(lVar5 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00d0fa5c(uVar10);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0052e690  FUN_0052e690 =====

void FUN_0052e690(void)

{
  FUN_0052e69c();
  return;
}


// ===== 0052e69c  FUN_0052e69c =====

void FUN_0052e69c(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,
                 undefined8 param_5,char *param_6)

{
  long *plVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char cVar8;
  long lVar9;
  char *pcVar10;
  long *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 auStack_12c [180];
  char local_78 [24];
  undefined8 local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  uVar2 = *(uint *)(param_3 + 8);
  pcVar6 = (char *)((ulong)&local_60 | 1);
  local_60 = 0x25;
  if ((((uVar2 >> 0xb & 1) != 0) && ((uVar2 & 0x4a) != 8)) && ((uVar2 & 0x4a) != 0x40)) {
    pcVar6 = (char *)((ulong)&local_60 | 2);
    local_60 = 0x2b25;
  }
  pcVar7 = pcVar6;
  if ((uVar2 >> 9 & 1) != 0) {
    pcVar7 = pcVar6 + 1;
    *pcVar6 = '#';
  }
  cVar8 = *param_6;
  if (cVar8 != '\0') {
    pcVar6 = pcVar7;
    pcVar10 = param_6 + 1;
    do {
      pcVar7 = pcVar6 + 1;
      *pcVar6 = cVar8;
      cVar8 = *pcVar10;
      pcVar6 = pcVar7;
      pcVar10 = pcVar10 + 1;
    } while (cVar8 != '\0');
  }
  if ((uVar2 & 0x4a) == 0x40) {
    cVar8 = 'o';
  }
  else if ((uVar2 & 0x4a) == 8) {
    cVar8 = 'x';
    if ((uVar2 & 0x4000) != 0) {
      cVar8 = 'X';
    }
  }
  else {
    cVar8 = 'd';
  }
  *pcVar7 = cVar8;
  if (((DAT_00d61ba8 & 1) == 0) && (iVar5 = FUN_0054fdd4(&DAT_00d61ba8), iVar5 != 0)) {
                    /* try { // try from 0052e8c0 to 0052e8d3 has its CatchHandler @ 0052e8e8 */
    DAT_00d61ba0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    FUN_0054ff1c(&DAT_00d61ba8);
  }
  iVar5 = FUN_0052e348(local_78,0x18,DAT_00d61ba0,&local_60,param_5);
  uVar2 = *(uint *)(param_3 + 8) & 0xb0;
  pcVar6 = local_78 + iVar5;
  if (uVar2 == 0x20) goto LAB_0052e818;
  if (uVar2 == 0x10) {
    if ((local_78[0] == '-') || (local_78[0] == '+')) {
      pcVar6 = (char *)((ulong)local_78 | 1);
      goto LAB_0052e818;
    }
    if (((1 < iVar5) && (local_78[0] == '0')) && ((byte)(local_78[1] | 0x20U) == 0x78)) {
      pcVar6 = (char *)((ulong)local_78 | 2);
      goto LAB_0052e818;
    }
  }
  pcVar6 = local_78;
LAB_0052e818:
  FUN_00520ce8(&local_148,param_3);
                    /* try { // try from 0052e824 to 0052e843 has its CatchHandler @ 0052e8fc */
  FUN_00530b68(local_78,pcVar6,local_78 + iVar5,auStack_12c,&uStack_138,&local_140,&local_148);
  plVar1 = local_148 + 1;
  do {
    lVar9 = *plVar1;
    cVar8 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar9 + -1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if (lVar9 == 0) {
    (**(code **)(*local_148 + 0x10))();
  }
  FUN_0052fde0(param_2,auStack_12c,uStack_138,local_140,param_3,param_4);
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0052e944  FUN_0052e944 =====

void FUN_0052e944(void)

{
  FUN_0052e950();
  return;
}


// ===== 0052e950  FUN_0052e950 =====

void FUN_0052e950(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,
                 undefined8 param_5,char *param_6)

{
  long *plVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char cVar8;
  long lVar9;
  char *pcVar10;
  long *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 auStack_12c [180];
  char local_78 [24];
  undefined8 local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  uVar2 = *(uint *)(param_3 + 8);
  pcVar6 = (char *)((ulong)&local_60 | 1);
  local_60 = 0x25;
  if ((((uVar2 >> 0xb & 1) != 0) && ((uVar2 & 0x4a) != 8)) && ((uVar2 & 0x4a) != 0x40)) {
    pcVar6 = (char *)((ulong)&local_60 | 2);
    local_60 = 0x2b25;
  }
  pcVar7 = pcVar6;
  if ((uVar2 >> 9 & 1) != 0) {
    pcVar7 = pcVar6 + 1;
    *pcVar6 = '#';
  }
  cVar8 = *param_6;
  if (cVar8 != '\0') {
    pcVar6 = pcVar7;
    pcVar10 = param_6 + 1;
    do {
      pcVar7 = pcVar6 + 1;
      *pcVar6 = cVar8;
      cVar8 = *pcVar10;
      pcVar6 = pcVar7;
      pcVar10 = pcVar10 + 1;
    } while (cVar8 != '\0');
  }
  if ((uVar2 & 0x4a) == 0x40) {
    cVar8 = 'o';
  }
  else if ((uVar2 & 0x4a) == 8) {
    cVar8 = 'x';
    if ((uVar2 & 0x4000) != 0) {
      cVar8 = 'X';
    }
  }
  else {
    cVar8 = 'd';
  }
  *pcVar7 = cVar8;
  if (((DAT_00d61ba8 & 1) == 0) && (iVar5 = FUN_0054fdd4(&DAT_00d61ba8), iVar5 != 0)) {
                    /* try { // try from 0052eb74 to 0052eb87 has its CatchHandler @ 0052eb9c */
    DAT_00d61ba0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    FUN_0054ff1c(&DAT_00d61ba8);
  }
  iVar5 = FUN_0052e348(local_78,0x18,DAT_00d61ba0,&local_60,param_5);
  uVar2 = *(uint *)(param_3 + 8) & 0xb0;
  pcVar6 = local_78 + iVar5;
  if (uVar2 == 0x20) goto LAB_0052eacc;
  if (uVar2 == 0x10) {
    if ((local_78[0] == '-') || (local_78[0] == '+')) {
      pcVar6 = (char *)((ulong)local_78 | 1);
      goto LAB_0052eacc;
    }
    if (((1 < iVar5) && (local_78[0] == '0')) && ((byte)(local_78[1] | 0x20U) == 0x78)) {
      pcVar6 = (char *)((ulong)local_78 | 2);
      goto LAB_0052eacc;
    }
  }
  pcVar6 = local_78;
LAB_0052eacc:
  FUN_00520ce8(&local_148,param_3);
                    /* try { // try from 0052ead8 to 0052eaf7 has its CatchHandler @ 0052ebb0 */
  FUN_00530b68(local_78,pcVar6,local_78 + iVar5,auStack_12c,&uStack_138,&local_140,&local_148);
  plVar1 = local_148 + 1;
  do {
    lVar9 = *plVar1;
    cVar8 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar9 + -1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if (lVar9 == 0) {
    (**(code **)(*local_148 + 0x10))();
  }
  FUN_0052fde0(param_2,auStack_12c,uStack_138,local_140,param_3,param_4);
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0052ebf8  FUN_0052ebf8 =====

void FUN_0052ebf8(void)

{
  FUN_0052ec04();
  return;
}


// ===== 0052ec04  FUN_0052ec04 =====

void FUN_0052ec04(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,
                 undefined8 param_5,char *param_6)

{
  long *plVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char cVar8;
  long lVar9;
  char *pcVar10;
  long *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 auStack_12c [180];
  char local_78 [24];
  undefined8 local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  uVar2 = *(uint *)(param_3 + 8);
  local_60 = 0x25;
  if ((uVar2 >> 9 & 1) == 0) {
    pcVar6 = (char *)((ulong)&local_60 | 1);
    cVar8 = *param_6;
  }
  else {
    pcVar6 = (char *)((ulong)&local_60 | 2);
    local_60 = 0x2325;
    cVar8 = *param_6;
  }
  if (cVar8 != '\0') {
    pcVar7 = pcVar6;
    pcVar10 = param_6 + 1;
    do {
      pcVar6 = pcVar7 + 1;
      *pcVar7 = cVar8;
      cVar8 = *pcVar10;
      pcVar7 = pcVar6;
      pcVar10 = pcVar10 + 1;
    } while (cVar8 != '\0');
  }
  if ((uVar2 & 0x4a) == 0x40) {
    cVar8 = 'o';
  }
  else if ((uVar2 & 0x4a) == 8) {
    cVar8 = 'x';
    if ((uVar2 & 0x4000) != 0) {
      cVar8 = 'X';
    }
  }
  else {
    cVar8 = 'u';
  }
  *pcVar6 = cVar8;
  if (((DAT_00d61ba8 & 1) == 0) && (iVar5 = FUN_0054fdd4(&DAT_00d61ba8), iVar5 != 0)) {
                    /* try { // try from 0052ee0c to 0052ee1f has its CatchHandler @ 0052ee34 */
    DAT_00d61ba0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    FUN_0054ff1c(&DAT_00d61ba8);
  }
  iVar5 = FUN_0052e348(local_78,0x18,DAT_00d61ba0,&local_60,param_5);
  uVar2 = *(uint *)(param_3 + 8) & 0xb0;
  pcVar6 = local_78 + iVar5;
  if (uVar2 == 0x20) goto LAB_0052ed64;
  if (uVar2 == 0x10) {
    if ((local_78[0] == '-') || (local_78[0] == '+')) {
      pcVar6 = (char *)((ulong)local_78 | 1);
      goto LAB_0052ed64;
    }
    if (((1 < iVar5) && (local_78[0] == '0')) && ((byte)(local_78[1] | 0x20U) == 0x78)) {
      pcVar6 = (char *)((ulong)local_78 | 2);
      goto LAB_0052ed64;
    }
  }
  pcVar6 = local_78;
LAB_0052ed64:
  FUN_00520ce8(&local_148,param_3);
                    /* try { // try from 0052ed70 to 0052ed8f has its CatchHandler @ 0052ee48 */
  FUN_00530b68(local_78,pcVar6,local_78 + iVar5,auStack_12c,&uStack_138,&local_140,&local_148);
  plVar1 = local_148 + 1;
  do {
    lVar9 = *plVar1;
    cVar8 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar9 + -1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if (lVar9 == 0) {
    (**(code **)(*local_148 + 0x10))();
  }
  FUN_0052fde0(param_2,auStack_12c,uStack_138,local_140,param_3,param_4);
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0052ee90  FUN_0052ee90 =====

void FUN_0052ee90(void)

{
  FUN_0052ee9c();
  return;
}


// ===== 0052ee9c  FUN_0052ee9c =====

void FUN_0052ee9c(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,
                 undefined8 param_5,char *param_6)

{
  long *plVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char cVar8;
  long lVar9;
  char *pcVar10;
  long *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 auStack_12c [180];
  char local_78 [24];
  undefined8 local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  uVar2 = *(uint *)(param_3 + 8);
  local_60 = 0x25;
  if ((uVar2 >> 9 & 1) == 0) {
    pcVar6 = (char *)((ulong)&local_60 | 1);
    cVar8 = *param_6;
  }
  else {
    pcVar6 = (char *)((ulong)&local_60 | 2);
    local_60 = 0x2325;
    cVar8 = *param_6;
  }
  if (cVar8 != '\0') {
    pcVar7 = pcVar6;
    pcVar10 = param_6 + 1;
    do {
      pcVar6 = pcVar7 + 1;
      *pcVar7 = cVar8;
      cVar8 = *pcVar10;
      pcVar7 = pcVar6;
      pcVar10 = pcVar10 + 1;
    } while (cVar8 != '\0');
  }
  if ((uVar2 & 0x4a) == 0x40) {
    cVar8 = 'o';
  }
  else if ((uVar2 & 0x4a) == 8) {
    cVar8 = 'x';
    if ((uVar2 & 0x4000) != 0) {
      cVar8 = 'X';
    }
  }
  else {
    cVar8 = 'u';
  }
  *pcVar6 = cVar8;
  if (((DAT_00d61ba8 & 1) == 0) && (iVar5 = FUN_0054fdd4(&DAT_00d61ba8), iVar5 != 0)) {
                    /* try { // try from 0052f0a4 to 0052f0b7 has its CatchHandler @ 0052f0cc */
    DAT_00d61ba0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    FUN_0054ff1c(&DAT_00d61ba8);
  }
  iVar5 = FUN_0052e348(local_78,0x18,DAT_00d61ba0,&local_60,param_5);
  uVar2 = *(uint *)(param_3 + 8) & 0xb0;
  pcVar6 = local_78 + iVar5;
  if (uVar2 == 0x20) goto LAB_0052effc;
  if (uVar2 == 0x10) {
    if ((local_78[0] == '-') || (local_78[0] == '+')) {
      pcVar6 = (char *)((ulong)local_78 | 1);
      goto LAB_0052effc;
    }
    if (((1 < iVar5) && (local_78[0] == '0')) && ((byte)(local_78[1] | 0x20U) == 0x78)) {
      pcVar6 = (char *)((ulong)local_78 | 2);
      goto LAB_0052effc;
    }
  }
  pcVar6 = local_78;
LAB_0052effc:
  FUN_00520ce8(&local_148,param_3);
                    /* try { // try from 0052f008 to 0052f027 has its CatchHandler @ 0052f0e0 */
  FUN_00530b68(local_78,pcVar6,local_78 + iVar5,auStack_12c,&uStack_138,&local_140,&local_148);
  plVar1 = local_148 + 1;
  do {
    lVar9 = *plVar1;
    cVar8 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar9 + -1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if (lVar9 == 0) {
    (**(code **)(*local_148 + 0x10))();
  }
  FUN_0052fde0(param_2,auStack_12c,uStack_138,local_140,param_3,param_4);
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0052f128  FUN_0052f128 =====

void FUN_0052f128(void)

{
  FUN_0052f134();
  return;
}


// ===== 0052f134  FUN_0052f134 =====

undefined8
FUN_0052f134(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
            undefined4 param_5,char *param_6)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  undefined1 *__ptr;
  undefined8 uVar7;
  char *pcVar8;
  char *pcVar9;
  char cVar10;
  long lVar11;
  char cVar12;
  char *pcVar13;
  undefined1 *puVar14;
  char *pcVar15;
  long *local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  char *local_198;
  undefined1 auStack_18c [228];
  char local_a8 [32];
  undefined8 local_88;
  long local_80;
  
  lVar4 = tpidr_el0;
  local_80 = *(long *)(lVar4 + 0x28);
  uVar3 = *(uint *)(param_4 + 8);
  local_88 = 0x25;
  if ((uVar3 >> 0xb & 1) == 0) {
    pcVar8 = (char *)((ulong)&local_88 | 1);
  }
  else {
    pcVar8 = (char *)((ulong)&local_88 | 2);
    local_88 = 0x2b25;
  }
  if ((uVar3 >> 10 & 1) != 0) {
    *pcVar8 = '#';
    pcVar8 = pcVar8 + 1;
  }
  uVar2 = uVar3 & 0x104;
  pcVar9 = pcVar8;
  if (uVar2 != 0x104) {
    pcVar9 = pcVar8 + 2;
    pcVar8[0] = '.';
    pcVar8[1] = '*';
  }
  cVar12 = *param_6;
  if (cVar12 != '\0') {
    pcVar8 = pcVar9;
    pcVar13 = param_6 + 1;
    do {
      pcVar9 = pcVar8 + 1;
      *pcVar8 = cVar12;
      cVar12 = *pcVar13;
      pcVar8 = pcVar9;
      pcVar13 = pcVar13 + 1;
    } while (cVar12 != '\0');
  }
  if (uVar2 == 0x100) {
    bVar5 = (uVar3 & 0x4000) == 0;
    cVar10 = 'E';
    cVar12 = 'e';
LAB_0052f274:
    if (!bVar5) {
      cVar12 = cVar10;
    }
    local_198 = local_a8;
    *pcVar9 = cVar12;
    if (((DAT_00d61ba8 & 1) == 0) && (iVar6 = FUN_0054fdd4(&DAT_00d61ba8), iVar6 != 0)) {
                    /* try { // try from 0052f494 to 0052f4a7 has its CatchHandler @ 0052f58c */
      DAT_00d61ba0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      FUN_0054ff1c(&DAT_00d61ba8);
    }
    iVar6 = FUN_0052e348(param_1,local_a8,0x1e,DAT_00d61ba0,&local_88,
                         *(undefined4 *)(param_4 + 0x10));
    if (iVar6 < 0x1e) {
LAB_0052f2e0:
      pcVar8 = (char *)0x0;
LAB_0052f314:
      pcVar13 = local_198;
      pcVar9 = local_198 + iVar6;
      uVar3 = *(uint *)(param_4 + 8) & 0xb0;
      pcVar15 = pcVar9;
      if ((uVar3 != 0x20) && (pcVar15 = local_198, uVar3 == 0x10)) {
        cVar12 = *local_198;
        if ((cVar12 == '-') || (cVar12 == '+')) {
          pcVar15 = local_198 + 1;
        }
        else if (((1 < iVar6) && (cVar12 == '0')) && ((byte)(local_198[1] | 0x20U) == 0x78)) {
          pcVar15 = local_198 + 2;
        }
      }
      if (local_198 == local_a8) {
LAB_0052f3bc:
        __ptr = (undefined1 *)0x0;
        puVar14 = auStack_18c;
      }
      else {
        __ptr = (undefined1 *)malloc((long)iVar6 << 3);
        puVar14 = __ptr;
        if (__ptr == (undefined1 *)0x0) {
          if (*(long *)(lVar4 + 0x28) != local_80) goto LAB_0052f62c;
                    /* try { // try from 0052f3b8 to 0052f3bb has its CatchHandler @ 0052f5a0 */
          FUN_00546ac8();
          goto LAB_0052f3bc;
        }
      }
                    /* try { // try from 0052f3c4 to 0052f3cf has its CatchHandler @ 0052f5f0 */
      FUN_00520ce8(&local_1b0,param_4);
                    /* try { // try from 0052f3d0 to 0052f3ef has its CatchHandler @ 0052f5b0 */
      FUN_00531008(pcVar13,pcVar15,pcVar9,puVar14,&uStack_1a0,&local_1a8,&local_1b0);
      plVar1 = local_1b0 + 1;
      do {
        lVar11 = *plVar1;
        cVar12 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar11 + -1;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*local_1b0 + 0x10))();
      }
                    /* try { // try from 0052f41c to 0052f42f has its CatchHandler @ 0052f5ac */
      uVar7 = FUN_0052fde0(param_3,puVar14,uStack_1a0,local_1a8,param_4,param_5);
      if (__ptr != (undefined1 *)0x0) {
        free(__ptr);
      }
      if (pcVar8 != (char *)0x0) {
        free(pcVar8);
      }
      if (*(long *)(lVar4 + 0x28) == local_80) {
        return uVar7;
      }
      goto LAB_0052f62c;
    }
    if (uVar2 != 0x104) {
      if (((DAT_00d61ba8 & 1) == 0) && (iVar6 = FUN_0054fdd4(&DAT_00d61ba8), iVar6 != 0)) {
                    /* try { // try from 0052f520 to 0052f533 has its CatchHandler @ 0052f584 */
        DAT_00d61ba0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
        FUN_0054ff1c(&DAT_00d61ba8);
      }
      iVar6 = FUN_00539db0(param_1,&local_198,DAT_00d61ba0,&local_88,*(undefined4 *)(param_4 + 0x10)
                          );
      goto LAB_0052f308;
    }
  }
  else {
    if (uVar2 == 4) {
      bVar5 = (uVar3 & 0x4000) == 0;
      cVar10 = 'F';
      cVar12 = 'f';
      goto LAB_0052f274;
    }
    if (uVar2 != 0x104) {
      bVar5 = (uVar3 & 0x4000) == 0;
      cVar10 = 'G';
      cVar12 = 'g';
      goto LAB_0052f274;
    }
    cVar12 = 'a';
    if ((uVar3 & 0x4000) != 0) {
      cVar12 = 'A';
    }
    local_198 = local_a8;
    *pcVar9 = cVar12;
    if (((DAT_00d61ba8 & 1) == 0) && (iVar6 = FUN_0054fdd4(&DAT_00d61ba8), iVar6 != 0)) {
                    /* try { // try from 0052f558 to 0052f56b has its CatchHandler @ 0052f580 */
      DAT_00d61ba0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      FUN_0054ff1c(&DAT_00d61ba8);
    }
    iVar6 = FUN_0052e348(param_1,local_a8,0x1e,DAT_00d61ba0,&local_88);
    if (iVar6 < 0x1e) goto LAB_0052f2e0;
  }
  if ((DAT_00d61ba8 & 1) == 0) goto LAB_0052f4d4;
  while( true ) {
                    /* try { // try from 0052f2cc to 0052f307 has its CatchHandler @ 0052f610 */
    iVar6 = FUN_00539db0(param_1,&local_198,DAT_00d61ba0,&local_88);
LAB_0052f308:
    pcVar8 = local_198;
    if (iVar6 != -1) goto LAB_0052f314;
    if (*(long *)(lVar4 + 0x28) != local_80) break;
                    /* try { // try from 0052f4d0 to 0052f4d3 has its CatchHandler @ 0052f610 */
    FUN_00546ac8();
LAB_0052f4d4:
    iVar6 = FUN_0054fdd4(&DAT_00d61ba8);
    if (iVar6 != 0) {
                    /* try { // try from 0052f4e4 to 0052f4f7 has its CatchHandler @ 0052f588 */
      DAT_00d61ba0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      FUN_0054ff1c(&DAT_00d61ba8);
    }
  }
LAB_0052f62c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0052f630  FUN_0052f630 =====

void FUN_0052f630(void)

{
  FUN_0052f63c();
  return;
}


// ===== 0052f63c  FUN_0052f63c =====

undefined8
FUN_0052f63c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
            undefined4 param_5,char *param_6)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  undefined1 *__ptr;
  undefined8 uVar7;
  char *pcVar8;
  char *pcVar9;
  char cVar10;
  long lVar11;
  char cVar12;
  char *pcVar13;
  undefined1 *puVar14;
  char *pcVar15;
  long *local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  char *local_188;
  undefined1 auStack_17c [228];
  char local_98 [32];
  undefined8 local_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  uVar3 = *(uint *)(param_4 + 8);
  local_78 = 0x25;
  if ((uVar3 >> 0xb & 1) == 0) {
    pcVar8 = (char *)((ulong)&local_78 | 1);
  }
  else {
    pcVar8 = (char *)((ulong)&local_78 | 2);
    local_78 = 0x2b25;
  }
  if ((uVar3 >> 10 & 1) != 0) {
    *pcVar8 = '#';
    pcVar8 = pcVar8 + 1;
  }
  uVar2 = uVar3 & 0x104;
  pcVar9 = pcVar8;
  if (uVar2 != 0x104) {
    pcVar9 = pcVar8 + 2;
    pcVar8[0] = '.';
    pcVar8[1] = '*';
  }
  cVar12 = *param_6;
  if (cVar12 != '\0') {
    pcVar8 = pcVar9;
    pcVar13 = param_6 + 1;
    do {
      pcVar9 = pcVar8 + 1;
      *pcVar8 = cVar12;
      cVar12 = *pcVar13;
      pcVar8 = pcVar9;
      pcVar13 = pcVar13 + 1;
    } while (cVar12 != '\0');
  }
  if (uVar2 == 0x100) {
    bVar5 = (uVar3 & 0x4000) == 0;
    cVar10 = 'E';
    cVar12 = 'e';
LAB_0052f778:
    if (!bVar5) {
      cVar12 = cVar10;
    }
    local_188 = local_98;
    *pcVar9 = cVar12;
    if (((DAT_00d61ba8 & 1) == 0) && (iVar6 = FUN_0054fdd4(&DAT_00d61ba8), iVar6 != 0)) {
                    /* try { // try from 0052f994 to 0052f9a7 has its CatchHandler @ 0052fa8c */
      DAT_00d61ba0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      FUN_0054ff1c(&DAT_00d61ba8);
    }
    iVar6 = FUN_0052e348(param_1,local_98,0x1e,DAT_00d61ba0,&local_78,
                         *(undefined4 *)(param_4 + 0x10));
    if (iVar6 < 0x1e) {
LAB_0052f7e4:
      pcVar8 = (char *)0x0;
LAB_0052f818:
      pcVar13 = local_188;
      pcVar9 = local_188 + iVar6;
      uVar3 = *(uint *)(param_4 + 8) & 0xb0;
      pcVar15 = pcVar9;
      if ((uVar3 != 0x20) && (pcVar15 = local_188, uVar3 == 0x10)) {
        cVar12 = *local_188;
        if ((cVar12 == '-') || (cVar12 == '+')) {
          pcVar15 = local_188 + 1;
        }
        else if (((1 < iVar6) && (cVar12 == '0')) && ((byte)(local_188[1] | 0x20U) == 0x78)) {
          pcVar15 = local_188 + 2;
        }
      }
      if (local_188 == local_98) {
LAB_0052f8c0:
        __ptr = (undefined1 *)0x0;
        puVar14 = auStack_17c;
      }
      else {
        __ptr = (undefined1 *)malloc((long)iVar6 << 3);
        puVar14 = __ptr;
        if (__ptr == (undefined1 *)0x0) {
          if (*(long *)(lVar4 + 0x28) != local_70) goto LAB_0052fb2c;
                    /* try { // try from 0052f8bc to 0052f8bf has its CatchHandler @ 0052faa0 */
          FUN_00546ac8();
          goto LAB_0052f8c0;
        }
      }
                    /* try { // try from 0052f8c8 to 0052f8d3 has its CatchHandler @ 0052faf0 */
      FUN_00520ce8(&local_1a0,param_4);
                    /* try { // try from 0052f8d4 to 0052f8f3 has its CatchHandler @ 0052fab0 */
      FUN_00531008(pcVar13,pcVar15,pcVar9,puVar14,&uStack_190,&local_198,&local_1a0);
      plVar1 = local_1a0 + 1;
      do {
        lVar11 = *plVar1;
        cVar12 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar11 + -1;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*local_1a0 + 0x10))();
      }
                    /* try { // try from 0052f920 to 0052f933 has its CatchHandler @ 0052faac */
      uVar7 = FUN_0052fde0(param_3,puVar14,uStack_190,local_198,param_4,param_5);
      if (__ptr != (undefined1 *)0x0) {
        free(__ptr);
      }
      if (pcVar8 != (char *)0x0) {
        free(pcVar8);
      }
      if (*(long *)(lVar4 + 0x28) == local_70) {
        return uVar7;
      }
      goto LAB_0052fb2c;
    }
    if (uVar2 != 0x104) {
      if (((DAT_00d61ba8 & 1) == 0) && (iVar6 = FUN_0054fdd4(&DAT_00d61ba8), iVar6 != 0)) {
                    /* try { // try from 0052fa20 to 0052fa33 has its CatchHandler @ 0052fa84 */
        DAT_00d61ba0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
        FUN_0054ff1c(&DAT_00d61ba8);
      }
      iVar6 = FUN_00539db0(param_1,&local_188,DAT_00d61ba0,&local_78,*(undefined4 *)(param_4 + 0x10)
                          );
      goto LAB_0052f80c;
    }
  }
  else {
    if (uVar2 == 4) {
      bVar5 = (uVar3 & 0x4000) == 0;
      cVar10 = 'F';
      cVar12 = 'f';
      goto LAB_0052f778;
    }
    if (uVar2 != 0x104) {
      bVar5 = (uVar3 & 0x4000) == 0;
      cVar10 = 'G';
      cVar12 = 'g';
      goto LAB_0052f778;
    }
    cVar12 = 'a';
    if ((uVar3 & 0x4000) != 0) {
      cVar12 = 'A';
    }
    local_188 = local_98;
    *pcVar9 = cVar12;
    if (((DAT_00d61ba8 & 1) == 0) && (iVar6 = FUN_0054fdd4(&DAT_00d61ba8), iVar6 != 0)) {
                    /* try { // try from 0052fa58 to 0052fa6b has its CatchHandler @ 0052fa80 */
      DAT_00d61ba0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      FUN_0054ff1c(&DAT_00d61ba8);
    }
    iVar6 = FUN_0052e348(param_1,local_98,0x1e,DAT_00d61ba0,&local_78);
    if (iVar6 < 0x1e) goto LAB_0052f7e4;
  }
  if ((DAT_00d61ba8 & 1) == 0) goto LAB_0052f9d4;
  while( true ) {
                    /* try { // try from 0052f7d0 to 0052f80b has its CatchHandler @ 0052fb10 */
    iVar6 = FUN_00539db0(param_1,&local_188,DAT_00d61ba0,&local_78);
LAB_0052f80c:
    pcVar8 = local_188;
    if (iVar6 != -1) goto LAB_0052f818;
    if (*(long *)(lVar4 + 0x28) != local_70) break;
                    /* try { // try from 0052f9d0 to 0052f9d3 has its CatchHandler @ 0052fb10 */
    FUN_00546ac8();
LAB_0052f9d4:
    iVar6 = FUN_0054fdd4(&DAT_00d61ba8);
    if (iVar6 != 0) {
                    /* try { // try from 0052f9e4 to 0052f9f7 has its CatchHandler @ 0052fa88 */
      DAT_00d61ba0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      FUN_0054ff1c(&DAT_00d61ba8);
    }
  }
LAB_0052fb2c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0052fb30  FUN_0052fb30 =====

void FUN_0052fb30(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,
                 char *param_5)

{
  long *plVar1;
  uint uVar2;
  undefined1 *puVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  int iVar7;
  __locale_t p_Var8;
  long lVar9;
  long *plVar10;
  char *pcVar11;
  long *local_140;
  undefined8 *local_138;
  code *pcStack_130;
  undefined8 local_128;
  undefined8 ***local_120;
  undefined8 **local_118;
  undefined1 auStack_110 [148];
  char local_7c [20];
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  plVar10 = (long *)&DAT_00d61000;
  if ((DAT_00d61ba8 & 1) == 0) goto LAB_0052fd4c;
LAB_0052fb80:
  iVar7 = FUN_0052e348(local_7c,0x14,plVar10[0x174],&DAT_001e770a,param_5);
  param_5 = local_7c + iVar7;
  uVar2 = *(uint *)(param_3 + 8) & 0xb0;
  pcVar11 = param_5;
  if (uVar2 != 0x20) {
    if (uVar2 == 0x10) {
      if ((local_7c[0] == '-') || (local_7c[0] == '+')) {
        pcVar11 = (char *)((ulong)local_7c | 1);
      }
      else {
        if ((iVar7 < 2) || ((local_7c[0] != '0' || ((byte)(local_7c[1] | 0x20U) != 0x78))))
        goto LAB_0052fc14;
        pcVar11 = (char *)((ulong)local_7c | 2);
      }
    }
    else {
LAB_0052fc14:
      pcVar11 = local_7c;
    }
  }
  FUN_00520ce8(&local_140,param_3);
  plVar10 = local_140;
  local_128 = 0;
  local_138 = &DAT_00d61be8;
  pcStack_130 = FUN_0053d0c8;
  if (DAT_00d61be8 != -1) {
    local_118 = &local_138;
    local_120 = &local_118;
                    /* try { // try from 0052fc58 to 0052fc6f has its CatchHandler @ 0052fd98 */
    FUN_0054698c(&DAT_00d61be8,&local_120,FUN_005459e0);
  }
  if (((long)DAT_00d61bf0 - 1U < (ulong)(plVar10[3] - plVar10[2] >> 3)) &&
     (plVar10 = *(long **)(plVar10[2] + ((long)DAT_00d61bf0 - 1U) * 8), plVar10 != (long *)0x0)) {
    plVar1 = local_140 + 1;
    do {
      lVar9 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*local_140 + 0x10))();
    }
    (**(code **)(*plVar10 + 0x60))(plVar10,local_7c,param_5,auStack_110);
    puVar3 = auStack_110 + (long)iVar7 * 4;
    if (pcVar11 != param_5) {
      puVar3 = auStack_110 + ((long)pcVar11 - (long)local_7c) * 4;
    }
    FUN_0052fde0(param_2,auStack_110,puVar3,auStack_110 + (long)iVar7 * 4,param_3,param_4);
    if (*(long *)(lVar6 + 0x28) == local_68) {
      return;
    }
  }
  else if (*(long *)(lVar6 + 0x28) == local_68) {
                    /* try { // try from 0052fd48 to 0052fd4b has its CatchHandler @ 0052fd98 */
    FUN_0053cd4c();
LAB_0052fd4c:
    iVar7 = FUN_0054fdd4(&DAT_00d61ba8);
    if (iVar7 != 0) {
                    /* try { // try from 0052fd5c to 0052fd6f has its CatchHandler @ 0052fd84 */
      p_Var8 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      plVar10[0x174] = (long)p_Var8;
      FUN_0054ff1c(&DAT_00d61ba8);
    }
    goto LAB_0052fb80;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0052fde0  FUN_0052fde0 =====

long * FUN_0052fde0(long *param_1,long param_2,long param_3,long param_4,long param_5,
                   undefined4 param_6)

{
  long lVar1;
  ulong uVar2;
  undefined4 **ppuVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined4 *local_80;
  ulong uStack_78;
  undefined8 uStack_70;
  long local_68;
  
  ppuVar3 = &local_80;
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (param_1 != (long *)0x0) {
    lVar7 = param_4 - param_2 >> 2;
    uVar4 = *(long *)(param_5 + 0x18) - lVar7;
    uVar5 = uVar4;
    if (uVar4 == 0 || *(long *)(param_5 + 0x18) < lVar7) {
      uVar5 = 0;
    }
    if ((param_3 - param_2 < 1) ||
       (uVar10 = (ulong)(param_3 - param_2) >> 2,
       uVar2 = (**(code **)(*param_1 + 0x60))(param_1,param_2,uVar10), uVar2 == uVar10)) {
      if (0 < (long)uVar5) {
        if (0x3fffffffffffffef < uVar5) {
          if (*(long *)(lVar1 + 0x28) != local_68) goto LAB_0053001c;
          FUN_00545334(&local_80);
LAB_0052ffdc:
          if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_00401ad4();
          }
          goto LAB_0053001c;
        }
        if (uVar5 < 5) {
          uStack_70 = CONCAT17((char)uVar5,(undefined7)uStack_70);
        }
        else {
          if (0x3ffffffffffffffe < (uVar5 | 3)) goto LAB_0052ffdc;
          uVar2 = (uVar5 | 3) + 1;
          ppuVar3 = (undefined4 **)operator_new(uVar2 * 4);
          uStack_70 = uVar2 | 0x8000000000000000;
          local_80 = (undefined4 *)ppuVar3;
          uStack_78 = uVar5;
        }
        puVar6 = (undefined4 *)ppuVar3;
        uVar2 = uVar4;
        if (uVar4 < 8) {
LAB_0052fef4:
          do {
            uVar2 = uVar2 - 1;
            *puVar6 = param_6;
            puVar6 = puVar6 + 1;
          } while (uVar2 != 0);
        }
        else {
          uVar8 = uVar4 & 0xfffffffffffffff8;
          uVar2 = uVar4 & 7;
          puVar9 = (undefined8 *)((long)ppuVar3 + 0x10);
          uVar10 = uVar8;
          do {
            puVar9[-1] = CONCAT44(param_6,param_6);
            puVar9[-2] = CONCAT44(param_6,param_6);
            puVar9[1] = CONCAT44(param_6,param_6);
            *puVar9 = CONCAT44(param_6,param_6);
            puVar9 = puVar9 + 4;
            uVar10 = uVar10 - 8;
          } while (uVar10 != 0);
          puVar6 = (undefined4 *)((long)ppuVar3 + uVar8 * 4);
          if (uVar4 != uVar8) goto LAB_0052fef4;
        }
        *(undefined4 *)((long)ppuVar3 + uVar5 * 4) = 0;
        ppuVar3 = (undefined4 **)local_80;
        if (-1 < (long)uStack_70) {
          ppuVar3 = &local_80;
        }
                    /* try { // try from 0052ff20 to 0052ff2b has its CatchHandler @ 0052fff0 */
        uVar4 = (**(code **)(*param_1 + 0x60))(param_1,ppuVar3,uVar5);
        if ((long)uStack_70 < 0) {
          operator_delete(local_80);
        }
        if (uVar4 != uVar5) goto LAB_0052ff8c;
      }
      if ((param_4 - param_3 < 1) ||
         (uVar4 = (ulong)(param_4 - param_3) >> 2,
         uVar5 = (**(code **)(*param_1 + 0x60))(param_1,param_3,uVar4), uVar5 == uVar4)) {
        *(undefined8 *)(param_5 + 0x18) = 0;
        goto LAB_0052ff90;
      }
    }
LAB_0052ff8c:
    param_1 = (long *)0x0;
  }
LAB_0052ff90:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return param_1;
  }
LAB_0053001c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00530020  FUN_00530020 =====

void FUN_00530020(char *param_1,char *param_2,char *param_3,ulong param_4,ulong *param_5,
                 ulong *param_6,long *param_7)

{
  undefined8 ****ppppuVar1;
  code *pcVar2;
  long lVar3;
  char cVar4;
  long lVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  char *pcVar10;
  char *pcVar11;
  code *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  long lVar16;
  uint uVar17;
  long *plVar18;
  long *plVar19;
  uint uVar20;
  undefined8 ***local_90;
  code *local_88;
  undefined8 local_80;
  undefined8 ***local_78;
  undefined8 ***local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  local_80 = 0;
  lVar16 = *param_7;
  local_90 = (undefined8 ***)&DAT_00d61bf8;
  local_88 = FUN_0053d0c8;
  if (DAT_00d61bf8 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    FUN_0054698c(&DAT_00d61bf8,&local_78,FUN_005459e0);
  }
  lVar3 = *(long *)(lVar16 + 0x10);
  if (((long)DAT_00d61c00 - 1U < (ulong)(*(long *)(lVar16 + 0x18) - lVar3 >> 3)) &&
     (plVar18 = *(long **)(lVar3 + ((long)DAT_00d61c00 - 1U) * 8), plVar18 != (long *)0x0)) {
    local_80 = 0;
    local_90 = (undefined8 ***)&DAT_00d61c68;
    local_88 = FUN_0053d0c8;
    lVar16 = *param_7;
    if (DAT_00d61c68 != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      FUN_0054698c(&DAT_00d61c68,&local_78,FUN_005459e0);
    }
    lVar3 = *(long *)(lVar16 + 0x10);
    if (((long)DAT_00d61c70 - 1U < (ulong)(*(long *)(lVar16 + 0x18) - lVar3 >> 3)) &&
       (plVar19 = *(long **)(lVar3 + ((long)DAT_00d61c70 - 1U) * 8), plVar19 != (long *)0x0)) {
      (**(code **)(*plVar19 + 0x28))(&local_90,plVar19);
      pcVar2 = local_88;
      if (-1 < (long)local_80) {
        pcVar2 = (code *)(local_80 >> 0x38);
      }
      if (pcVar2 == (code *)0x0) {
                    /* try { // try from 005303ac to 005303bf has its CatchHandler @ 00530484 */
        (**(code **)(*plVar18 + 0x40))(plVar18,param_1,param_3,param_4);
        pcVar15 = param_3 + (param_4 - (long)param_1);
        *param_6 = (ulong)pcVar15;
      }
      else {
        *param_6 = param_4;
        if ((*param_1 == '-') || (pcVar13 = param_1, *param_1 == '+')) {
                    /* try { // try from 00530194 to 0053020f has its CatchHandler @ 00530490 */
          uVar6 = (**(code **)(*plVar18 + 0x38))(plVar18);
          puVar9 = (undefined1 *)*param_6;
          pcVar13 = param_1 + 1;
          *param_6 = (ulong)(puVar9 + 1);
          *puVar9 = uVar6;
        }
        if (((1 < (long)param_3 - (long)pcVar13) && (*pcVar13 == '0')) &&
           ((byte)(pcVar13[1] | 0x20U) == 0x78)) {
          uVar6 = (**(code **)(*plVar18 + 0x38))(plVar18,0x30);
          puVar9 = (undefined1 *)*param_6;
          *param_6 = (ulong)(puVar9 + 1);
          *puVar9 = uVar6;
          uVar6 = (**(code **)(*plVar18 + 0x38))(plVar18,pcVar13[1]);
          puVar9 = (undefined1 *)*param_6;
          pcVar13 = pcVar13 + 2;
          *param_6 = (ulong)(puVar9 + 1);
          *puVar9 = uVar6;
        }
        if ((pcVar13 != param_3) && (pcVar10 = param_3 + -1, pcVar15 = pcVar13, pcVar13 < pcVar10))
        {
          do {
            pcVar14 = pcVar15 + 1;
            cVar4 = *pcVar15;
            *pcVar15 = *pcVar10;
            pcVar11 = pcVar10 + -1;
            *pcVar10 = cVar4;
            pcVar10 = pcVar11;
            pcVar15 = pcVar14;
          } while (pcVar14 < pcVar11);
        }
                    /* try { // try from 00530274 to 0053027b has its CatchHandler @ 0053048c */
        uVar6 = (**(code **)(*plVar19 + 0x20))(plVar19);
        if (pcVar13 < param_3) {
          uVar20 = 0;
          uVar17 = 0;
          lVar16 = (long)param_3 - (long)pcVar13;
          pcVar15 = pcVar13;
          do {
            pcVar12 = (code *)(ulong)uVar20;
            pcVar2 = local_88;
            if (-1 < (long)local_80) {
              pcVar2 = (code *)(ulong)local_80._7_1_;
            }
            if (pcVar2 < pcVar12) {
              if (*(long *)(lVar5 + 0x28) == local_68) {
                    /* try { // try from 00530448 to 0053046f has its CatchHandler @ 005304c8 */
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s:%d: assertion %s failed: %s",
                           "../../discord_common/native/third_party/llvm/libcxx/include/string",
                           0xd57,"__pos <= size()","string index out of bounds");
              }
              goto LAB_005304c4;
            }
            ppppuVar1 = (undefined8 ****)local_90;
            if (-1 < (long)local_80) {
              ppppuVar1 = &local_90;
            }
            if ((byte)*(code *)((long)ppppuVar1 + (long)pcVar12) != 0 &&
                uVar17 == (byte)*(code *)((long)ppppuVar1 + (long)pcVar12)) {
              puVar9 = (undefined1 *)*param_6;
              uVar17 = 0;
              *param_6 = (ulong)(puVar9 + 1);
              *puVar9 = uVar6;
              pcVar2 = local_88;
              if (-1 < (long)local_80) {
                pcVar2 = (code *)(ulong)local_80._7_1_;
              }
              if (pcVar12 < pcVar2 + -1) {
                uVar20 = uVar20 + 1;
              }
            }
                    /* try { // try from 00530318 to 0053031f has its CatchHandler @ 00530494 */
            uVar7 = (**(code **)(*plVar18 + 0x38))(plVar18,*pcVar15);
            puVar9 = (undefined1 *)*param_6;
            uVar17 = uVar17 + 1;
            pcVar15 = pcVar15 + 1;
            lVar16 = lVar16 + -1;
            *param_6 = (ulong)(puVar9 + 1);
            *puVar9 = uVar7;
          } while (lVar16 != 0);
        }
        pcVar15 = (char *)*param_6;
        if ((pcVar13 + (param_4 - (long)param_1) != pcVar15) &&
           (pcVar13 + (param_4 - (long)param_1) < pcVar15 + -1)) {
          pcVar10 = pcVar15 + -1;
          pcVar15 = pcVar13 + (param_4 - (long)param_1);
          do {
            pcVar11 = pcVar15 + 1;
            cVar4 = *pcVar15;
            *pcVar15 = *pcVar10;
            pcVar13 = pcVar10 + -1;
            *pcVar10 = cVar4;
            pcVar10 = pcVar13;
            pcVar15 = pcVar11;
          } while (pcVar11 < pcVar13);
          pcVar15 = (char *)*param_6;
        }
      }
      if (param_2 != param_3) {
        pcVar15 = param_2 + (param_4 - (long)param_1);
      }
      *param_5 = (ulong)pcVar15;
      if ((long)local_80 < 0) {
        operator_delete(local_90);
      }
      if (*(long *)(lVar5 + 0x28) == local_68) {
        return;
      }
      goto LAB_005304c4;
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    uVar8 = FUN_0053cd4c();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005303ac with catch @ 00530484
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00530318 with catch @ 00530494
                        */
    if ((long)local_80 < 0) {
      operator_delete(local_90);
    }
    if (*(long *)(lVar5 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00d0fa5c(uVar8);
    }
  }
LAB_005304c4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005304cc  FUN_005304cc =====

/* WARNING: Removing unreachable block (ram,0x00530a74) */
/* WARNING: Removing unreachable block (ram,0x00530b3c) */

void FUN_005304cc(byte *param_1,byte *param_2,byte *param_3,ulong param_4,ulong *param_5,
                 ulong *param_6,long *param_7)

{
  undefined8 ******ppppppuVar1;
  code *pcVar2;
  byte bVar3;
  long lVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  code *pcVar12;
  byte *pbVar13;
  byte *pbVar14;
  long *plVar15;
  byte *pbVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  long *plVar21;
  byte *pbVar22;
  long local_b8;
  undefined8 *****local_90;
  code *local_88;
  undefined8 local_80;
  undefined8 *****local_78;
  undefined8 *****local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  local_80 = 0;
  lVar18 = *param_7;
  local_90 = (undefined8 *****)&DAT_00d61bf8;
  local_88 = FUN_0053d0c8;
  if (DAT_00d61bf8 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    FUN_0054698c(&DAT_00d61bf8,&local_78,FUN_005459e0);
  }
  lVar19 = *(long *)(lVar18 + 0x10);
  if (((long)DAT_00d61c00 - 1U < (ulong)(*(long *)(lVar18 + 0x18) - lVar19 >> 3)) &&
     (plVar21 = *(long **)(lVar19 + ((long)DAT_00d61c00 - 1U) * 8), plVar21 != (long *)0x0)) {
    local_80 = 0;
    lVar18 = *param_7;
    local_90 = (undefined8 *****)&DAT_00d61c68;
    local_88 = FUN_0053d0c8;
    if (DAT_00d61c68 != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      FUN_0054698c(&DAT_00d61c68,&local_78,FUN_005459e0);
    }
    lVar19 = *(long *)(lVar18 + 0x10);
    if (((long)DAT_00d61c70 - 1U < (ulong)(*(long *)(lVar18 + 0x18) - lVar19 >> 3)) &&
       (plVar15 = *(long **)(lVar19 + ((long)DAT_00d61c70 - 1U) * 8), plVar15 != (long *)0x0)) {
      (**(code **)(*plVar15 + 0x28))(&local_90,plVar15);
      *param_6 = param_4;
      if ((*param_1 == 0x2d) || (pbVar13 = param_1, *param_1 == 0x2b)) {
                    /* try { // try from 0053062c to 00530633 has its CatchHandler @ 00530b1c */
        uVar5 = (**(code **)(*plVar21 + 0x38))(plVar21);
        puVar9 = (undefined1 *)*param_6;
        pbVar13 = param_1 + 1;
        *param_6 = (ulong)(puVar9 + 1);
        *puVar9 = uVar5;
      }
      lVar19 = (long)param_3 - (long)pbVar13;
      lVar18 = lVar19 + -2;
      if (((lVar19 < 2) || (*pbVar13 != 0x30)) || ((pbVar13[1] | 0x20) != 0x78)) {
        pbVar16 = pbVar13;
        pbVar22 = pbVar13;
        if (pbVar13 < param_3) {
          lVar18 = 0;
          do {
            bVar3 = pbVar13[lVar18];
            if (((DAT_00d61ba8 & 1) == 0) && (iVar7 = FUN_0054fdd4(&DAT_00d61ba8), iVar7 != 0)) {
                    /* try { // try from 0053079c to 005307b3 has its CatchHandler @ 00530b04 */
              DAT_00d61ba0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
              FUN_0054ff1c(&DAT_00d61ba8);
            }
                    /* try { // try from 00530774 to 0053077b has its CatchHandler @ 00530b28 */
            iVar7 = isdigit_l((uint)bVar3,DAT_00d61ba0);
            if (iVar7 == 0) {
              pbVar22 = pbVar13 + lVar18;
              break;
            }
            lVar18 = lVar18 + 1;
            pbVar22 = pbVar13 + lVar19;
          } while (lVar19 != lVar18);
        }
      }
      else {
                    /* try { // try from 00530688 to 005306b7 has its CatchHandler @ 00530b24 */
        uVar5 = (**(code **)(*plVar21 + 0x38))(plVar21,0x30);
        puVar9 = (undefined1 *)*param_6;
        *param_6 = (ulong)(puVar9 + 1);
        *puVar9 = uVar5;
        uVar5 = (**(code **)(*plVar21 + 0x38))(plVar21,pbVar13[1]);
        puVar9 = (undefined1 *)*param_6;
        pbVar16 = pbVar13 + 2;
        *param_6 = (ulong)(puVar9 + 1);
        *puVar9 = uVar5;
        pbVar22 = pbVar16;
        if (pbVar16 < param_3) {
          pbVar10 = pbVar16;
          do {
            bVar3 = *pbVar10;
            if (((DAT_00d61ba8 & 1) == 0) && (iVar7 = FUN_0054fdd4(&DAT_00d61ba8), iVar7 != 0)) {
                    /* try { // try from 00530724 to 00530737 has its CatchHandler @ 00530b00 */
              DAT_00d61ba0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
              FUN_0054ff1c(&DAT_00d61ba8);
            }
                    /* try { // try from 005306fc to 00530703 has its CatchHandler @ 00530b20 */
            iVar7 = isxdigit_l((uint)bVar3,DAT_00d61ba0);
            pbVar22 = pbVar10;
            if (iVar7 == 0) break;
            pbVar10 = pbVar10 + 1;
            lVar18 = lVar18 + -1;
            pbVar22 = pbVar13 + lVar19;
          } while (lVar18 != 0);
        }
      }
      pcVar2 = local_88;
      if (-1 < (long)local_80) {
        pcVar2 = (code *)(local_80 >> 0x38);
      }
      if (pcVar2 == (code *)0x0) {
                    /* try { // try from 0053098c to 0053099b has its CatchHandler @ 00530b24 */
        (**(code **)(*plVar21 + 0x40))(plVar21,pbVar16,pbVar22,*param_6);
        *param_6 = (ulong)(pbVar22 + (*param_6 - (long)pbVar16));
      }
      else {
        if ((pbVar16 != pbVar22) && (pbVar10 = pbVar22 + -1, pbVar13 = pbVar16, pbVar16 < pbVar10))
        {
          do {
            pbVar14 = pbVar13 + 1;
            bVar3 = *pbVar13;
            *pbVar13 = *pbVar10;
            pbVar11 = pbVar10 + -1;
            *pbVar10 = bVar3;
            pbVar10 = pbVar11;
            pbVar13 = pbVar14;
          } while (pbVar14 < pbVar11);
        }
                    /* try { // try from 00530850 to 00530857 has its CatchHandler @ 00530b18 */
        uVar5 = (**(code **)(*plVar15 + 0x20))(plVar15);
        if (pbVar16 < pbVar22) {
          uVar17 = 0;
          uVar20 = 0;
          lVar18 = (long)pbVar22 - (long)pbVar16;
          pbVar13 = pbVar16;
          do {
            pcVar12 = (code *)(ulong)uVar17;
            pcVar2 = local_88;
            if (-1 < (long)local_80) {
              pcVar2 = (code *)(ulong)local_80._7_1_;
            }
            if (pcVar2 < pcVar12) {
              if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* try { // try from 00530ac4 to 00530aeb has its CatchHandler @ 00530b64 */
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s:%d: assertion %s failed: %s",
                           "../../discord_common/native/third_party/llvm/libcxx/include/string",
                           0xd57,"__pos <= size()","string index out of bounds");
              }
              goto LAB_00530b60;
            }
            ppppppuVar1 = (undefined8 ******)local_90;
            if (-1 < (long)local_80) {
              ppppppuVar1 = &local_90;
            }
            if ((byte)*(code *)((long)ppppppuVar1 + (long)pcVar12) != 0 &&
                uVar20 == (byte)*(code *)((long)ppppppuVar1 + (long)pcVar12)) {
              puVar9 = (undefined1 *)*param_6;
              uVar20 = 0;
              *param_6 = (ulong)(puVar9 + 1);
              *puVar9 = uVar5;
              pcVar2 = local_88;
              if (-1 < (long)local_80) {
                pcVar2 = (code *)(ulong)local_80._7_1_;
              }
              if (pcVar12 < pcVar2 + -1) {
                uVar17 = uVar17 + 1;
              }
            }
                    /* try { // try from 005308f4 to 005308fb has its CatchHandler @ 00530b30 */
            uVar6 = (**(code **)(*plVar21 + 0x38))(plVar21,*pbVar13);
            puVar9 = (undefined1 *)*param_6;
            uVar20 = uVar20 + 1;
            pbVar13 = pbVar13 + 1;
            lVar18 = lVar18 + -1;
            *param_6 = (ulong)(puVar9 + 1);
            *puVar9 = uVar6;
          } while (lVar18 != 0);
        }
        if ((pbVar16 + (param_4 - (long)param_1) != (byte *)*param_6) &&
           (pbVar13 = (byte *)*param_6 + -1, pbVar16 + (param_4 - (long)param_1) < pbVar13)) {
          pbVar16 = pbVar16 + (param_4 - (long)param_1);
          do {
            pbVar11 = pbVar16 + 1;
            bVar3 = *pbVar16;
            *pbVar16 = *pbVar13;
            pbVar10 = pbVar13 + -1;
            *pbVar13 = bVar3;
            pbVar13 = pbVar10;
            pbVar16 = pbVar11;
          } while (pbVar11 < pbVar10);
        }
      }
      if (pbVar22 < param_3) {
        lVar18 = (long)param_3 - (long)pbVar22;
        pbVar13 = pbVar22;
        do {
          if (*pbVar13 == 0x2e) {
                    /* try { // try from 00530a0c to 00530a3b has its CatchHandler @ 00530b24 */
            uVar5 = (**(code **)(*plVar15 + 0x18))(plVar15);
            puVar9 = (undefined1 *)*param_6;
            *param_6 = (ulong)(puVar9 + 1);
            *puVar9 = uVar5;
            pbVar22 = pbVar13 + 1;
            break;
          }
                    /* try { // try from 005309d4 to 005309db has its CatchHandler @ 00530b2c */
          uVar5 = (**(code **)(*plVar21 + 0x38))(plVar21);
          puVar9 = (undefined1 *)*param_6;
          lVar18 = lVar18 + -1;
          *param_6 = (ulong)(puVar9 + 1);
          *puVar9 = uVar5;
          pbVar22 = param_3;
          pbVar13 = pbVar13 + 1;
        } while (lVar18 != 0);
      }
      (**(code **)(*plVar21 + 0x40))(plVar21,pbVar22,param_3,*param_6);
      pbVar13 = param_3 + (*param_6 - (long)pbVar22);
      if (param_2 != param_3) {
        pbVar13 = param_2 + (param_4 - (long)param_1);
      }
      *param_6 = (ulong)(param_3 + (*param_6 - (long)pbVar22));
      *param_5 = (ulong)pbVar13;
      if (*(long *)(lVar4 + 0x28) == local_68) {
        return;
      }
      goto LAB_00530b60;
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    uVar8 = FUN_0053cd4c();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00530724 with catch @ 00530b00
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0053079c with catch @ 00530b04
                        */
    FUN_0054ffbc(&DAT_00d61ba8);
    if (*(long *)(local_b8 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00d0fa5c(uVar8);
    }
  }
LAB_00530b60:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00530b68  FUN_00530b68 =====

void FUN_00530b68(char *param_1,char *param_2,char *param_3,ulong param_4,ulong *param_5,
                 ulong *param_6,long *param_7)

{
  undefined8 *******pppppppuVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  char *pcVar11;
  char *pcVar12;
  code *pcVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  char *pcVar16;
  undefined4 *puVar17;
  long lVar18;
  uint uVar19;
  long *plVar20;
  long *plVar21;
  uint uVar22;
  char *pcVar23;
  char *pcVar24;
  undefined8 ******local_90;
  code *local_88;
  undefined8 local_80;
  undefined8 ******local_78;
  undefined8 ******local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  local_80 = 0;
  lVar18 = *param_7;
  local_90 = (undefined8 ******)&DAT_00d61be8;
  local_88 = FUN_0053d0c8;
  if (DAT_00d61be8 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    FUN_0054698c(&DAT_00d61be8,&local_78,FUN_005459e0);
  }
  lVar4 = *(long *)(lVar18 + 0x10);
  if (((long)DAT_00d61bf0 - 1U < (ulong)(*(long *)(lVar18 + 0x18) - lVar4 >> 3)) &&
     (plVar20 = *(long **)(lVar4 + ((long)DAT_00d61bf0 - 1U) * 8), plVar20 != (long *)0x0)) {
    local_80 = 0;
    local_90 = (undefined8 ******)&DAT_00d61c78;
    local_88 = FUN_0053d0c8;
    lVar18 = *param_7;
    if (DAT_00d61c78 != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      FUN_0054698c(&DAT_00d61c78,&local_78,FUN_005459e0);
    }
    lVar4 = *(long *)(lVar18 + 0x10);
    if (((long)DAT_00d61c80 - 1U < (ulong)(*(long *)(lVar18 + 0x18) - lVar4 >> 3)) &&
       (plVar21 = *(long **)(lVar4 + ((long)DAT_00d61c80 - 1U) * 8), plVar21 != (long *)0x0)) {
      (**(code **)(*plVar21 + 0x28))(&local_90,plVar21);
      pcVar2 = local_88;
      if (-1 < (long)local_80) {
        pcVar2 = (code *)(local_80 >> 0x38);
      }
      if (pcVar2 == (code *)0x0) {
                    /* try { // try from 00530e98 to 00530eab has its CatchHandler @ 00530fb8 */
        (**(code **)(*plVar20 + 0x60))(plVar20,param_1,param_3,param_4);
        *param_6 = param_4 + ((long)param_3 - (long)param_1) * 4;
      }
      else {
        *param_6 = param_4;
        if ((*param_1 == '-') || (pcVar23 = param_1, *param_1 == '+')) {
                    /* try { // try from 00530cdc to 00530d4f has its CatchHandler @ 00530fc8 */
          uVar7 = (**(code **)(*plVar20 + 0x58))(plVar20);
          puVar10 = (undefined4 *)*param_6;
          pcVar23 = param_1 + 1;
          *puVar10 = uVar7;
          *param_6 = (ulong)(puVar10 + 1);
        }
        if (((1 < (long)param_3 - (long)pcVar23) && (*pcVar23 == '0')) &&
           ((byte)(pcVar23[1] | 0x20U) == 0x78)) {
          uVar7 = (**(code **)(*plVar20 + 0x58))(plVar20,0x30);
          puVar10 = (undefined4 *)*param_6;
          *puVar10 = uVar7;
          *param_6 = (ulong)(puVar10 + 1);
          uVar7 = (**(code **)(*plVar20 + 0x58))(plVar20,pcVar23[1]);
          pcVar23 = pcVar23 + 2;
          puVar10 = (undefined4 *)*param_6;
          *puVar10 = uVar7;
          *param_6 = (ulong)(puVar10 + 1);
        }
        if ((pcVar23 != param_3) && (pcVar11 = param_3 + -1, pcVar24 = pcVar23, pcVar23 < pcVar11))
        {
          do {
            pcVar16 = pcVar24 + 1;
            cVar5 = *pcVar24;
            *pcVar24 = *pcVar11;
            pcVar12 = pcVar11 + -1;
            *pcVar11 = cVar5;
            pcVar11 = pcVar12;
            pcVar24 = pcVar16;
          } while (pcVar16 < pcVar12);
        }
                    /* try { // try from 00530db4 to 00530dbb has its CatchHandler @ 00530fc0 */
        uVar7 = (**(code **)(*plVar21 + 0x20))(plVar21);
        if (pcVar23 < param_3) {
          uVar22 = 0;
          uVar19 = 0;
          lVar18 = (long)param_3 - (long)pcVar23;
          pcVar24 = pcVar23;
          do {
            pcVar13 = (code *)(ulong)uVar22;
            pcVar2 = local_88;
            if (-1 < (long)local_80) {
              pcVar2 = (code *)(ulong)local_80._7_1_;
            }
            if (pcVar2 < pcVar13) {
              if (*(long *)(lVar6 + 0x28) == local_68) {
                    /* try { // try from 00530f7c to 00530fa3 has its CatchHandler @ 00531004 */
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s:%d: assertion %s failed: %s",
                           "../../discord_common/native/third_party/llvm/libcxx/include/string",
                           0xd57,"__pos <= size()","string index out of bounds");
              }
              goto LAB_00531000;
            }
            pppppppuVar1 = (undefined8 *******)local_90;
            if (-1 < (long)local_80) {
              pppppppuVar1 = &local_90;
            }
            if ((byte)*(code *)((long)pppppppuVar1 + (long)pcVar13) != 0 &&
                uVar19 == (byte)*(code *)((long)pppppppuVar1 + (long)pcVar13)) {
              puVar10 = (undefined4 *)*param_6;
              uVar19 = 0;
              *puVar10 = uVar7;
              *param_6 = (ulong)(puVar10 + 1);
              pcVar2 = local_88;
              if (-1 < (long)local_80) {
                pcVar2 = (code *)(ulong)local_80._7_1_;
              }
              if (pcVar13 < pcVar2 + -1) {
                uVar22 = uVar22 + 1;
              }
            }
                    /* try { // try from 00530e58 to 00530e5f has its CatchHandler @ 00530fd0 */
            uVar8 = (**(code **)(*plVar20 + 0x58))(plVar20,*pcVar24);
            puVar10 = (undefined4 *)*param_6;
            uVar19 = uVar19 + 1;
            pcVar24 = pcVar24 + 1;
            lVar18 = lVar18 + -1;
            *puVar10 = uVar8;
            *param_6 = (ulong)(puVar10 + 1);
          } while (lVar18 != 0);
          puVar10 = puVar10 + 1;
        }
        else {
          puVar10 = (undefined4 *)*param_6;
        }
        puVar14 = (undefined4 *)(param_4 + ((long)pcVar23 - (long)param_1) * 4);
        if ((puVar14 != puVar10) && (puVar14 < puVar10 + -1)) {
          puVar14 = puVar10 + -1;
          puVar10 = (undefined4 *)(param_4 + (long)param_1 * -4 + (long)pcVar23 * 4);
          do {
            puVar17 = puVar10 + 1;
            uVar7 = *puVar10;
            *puVar10 = *puVar14;
            puVar15 = puVar14 + -1;
            *puVar14 = uVar7;
            puVar14 = puVar15;
            puVar10 = puVar17;
          } while (puVar17 < puVar15);
        }
      }
      uVar3 = *param_6;
      if (param_2 != param_3) {
        uVar3 = param_4 + ((long)param_2 - (long)param_1) * 4;
      }
      *param_5 = uVar3;
      if ((long)local_80 < 0) {
        operator_delete(local_90);
      }
      if (*(long *)(lVar6 + 0x28) == local_68) {
        return;
      }
      goto LAB_00531000;
    }
  }
  if (*(long *)(lVar6 + 0x28) == local_68) {
    uVar9 = FUN_0053cd4c();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00530e98 with catch @ 00530fb8
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00530e58 with catch @ 00530fd0
                        */
    if ((long)local_80 < 0) {
      operator_delete(local_90);
    }
    if (*(long *)(lVar6 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00d0fa5c(uVar9);
    }
  }
LAB_00531000:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00531008  FUN_00531008 =====

/* WARNING: Removing unreachable block (ram,0x00531580) */
/* WARNING: Removing unreachable block (ram,0x00531670) */

void FUN_00531008(byte *param_1,byte *param_2,byte *param_3,ulong param_4,ulong *param_5,
                 ulong *param_6,long *param_7)

{
  undefined4 *puVar1;
  ulong uVar2;
  undefined8 ****ppppuVar3;
  code *pcVar4;
  ulong uVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  byte *pbVar14;
  byte *pbVar15;
  code *pcVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  byte *pbVar19;
  undefined4 *puVar20;
  long *plVar21;
  byte *pbVar22;
  byte *pbVar23;
  uint uVar24;
  long lVar25;
  long lVar26;
  uint uVar27;
  long *plVar28;
  byte *pbVar29;
  undefined8 ***local_90;
  code *local_88;
  undefined8 local_80;
  undefined8 ***local_78;
  undefined8 ***local_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  local_80 = 0;
  lVar25 = *param_7;
  local_90 = (undefined8 ***)&DAT_00d61be8;
  local_88 = FUN_0053d0c8;
  if (DAT_00d61be8 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    FUN_0054698c(&DAT_00d61be8,&local_78,FUN_005459e0);
  }
  lVar26 = *(long *)(lVar25 + 0x10);
  if (((long)DAT_00d61bf0 - 1U < (ulong)(*(long *)(lVar25 + 0x18) - lVar26 >> 3)) &&
     (plVar28 = *(long **)(lVar26 + ((long)DAT_00d61bf0 - 1U) * 8), plVar28 != (long *)0x0)) {
    local_80 = 0;
    lVar25 = *param_7;
    local_90 = (undefined8 ***)&DAT_00d61c78;
    local_88 = FUN_0053d0c8;
    if (DAT_00d61c78 != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      FUN_0054698c(&DAT_00d61c78,&local_78,FUN_005459e0);
    }
    lVar26 = *(long *)(lVar25 + 0x10);
    if (((long)DAT_00d61c80 - 1U < (ulong)(*(long *)(lVar25 + 0x18) - lVar26 >> 3)) &&
       (plVar21 = *(long **)(lVar26 + ((long)DAT_00d61c80 - 1U) * 8), plVar21 != (long *)0x0)) {
      (**(code **)(*plVar21 + 0x28))(&local_90,plVar21);
      *param_6 = param_4;
      if ((*param_1 == 0x2d) || (pbVar22 = param_1, *param_1 == 0x2b)) {
                    /* try { // try from 00531164 to 0053116b has its CatchHandler @ 00531650 */
        uVar9 = (**(code **)(*plVar28 + 0x58))(plVar28);
        puVar13 = (undefined4 *)*param_6;
        pbVar22 = param_1 + 1;
        *puVar13 = uVar9;
        *param_6 = (ulong)(puVar13 + 1);
      }
      lVar26 = (long)param_3 - (long)pbVar22;
      lVar25 = lVar26 + -2;
      if (((lVar26 < 2) || (*pbVar22 != 0x30)) || ((pbVar22[1] | 0x20) != 0x78)) {
        pbVar23 = pbVar22;
        pbVar29 = pbVar22;
        if (pbVar22 < param_3) {
          lVar25 = 0;
          do {
            bVar6 = pbVar22[lVar25];
            if (((DAT_00d61ba8 & 1) == 0) && (iVar10 = FUN_0054fdd4(&DAT_00d61ba8), iVar10 != 0)) {
                    /* try { // try from 005312cc to 005312df has its CatchHandler @ 00531638 */
              DAT_00d61ba0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
              FUN_0054ff1c(&DAT_00d61ba8);
            }
                    /* try { // try from 005312a4 to 005312ab has its CatchHandler @ 0053165c */
            iVar10 = isdigit_l((uint)bVar6,DAT_00d61ba0);
            lVar8 = lVar25;
          } while ((iVar10 != 0) && (lVar25 = lVar25 + 1, lVar8 = lVar26, lVar26 != lVar25));
          pbVar29 = pbVar22 + lVar8;
        }
      }
      else {
                    /* try { // try from 005311b4 to 005311df has its CatchHandler @ 00531658 */
        uVar9 = (**(code **)(*plVar28 + 0x58))(plVar28,0x30);
        puVar13 = (undefined4 *)*param_6;
        *puVar13 = uVar9;
        *param_6 = (ulong)(puVar13 + 1);
        uVar9 = (**(code **)(*plVar28 + 0x58))(plVar28,pbVar22[1]);
        puVar13 = (undefined4 *)*param_6;
        pbVar23 = pbVar22 + 2;
        *puVar13 = uVar9;
        *param_6 = (ulong)(puVar13 + 1);
        pbVar29 = pbVar23;
        if (pbVar23 < param_3) {
          pbVar14 = pbVar23;
          do {
            bVar6 = *pbVar14;
            if (((DAT_00d61ba8 & 1) == 0) && (iVar10 = FUN_0054fdd4(&DAT_00d61ba8), iVar10 != 0)) {
                    /* try { // try from 0053124c to 0053125f has its CatchHandler @ 00531634 */
              DAT_00d61ba0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
              FUN_0054ff1c(&DAT_00d61ba8);
            }
                    /* try { // try from 00531224 to 0053122b has its CatchHandler @ 00531654 */
            iVar10 = isxdigit_l((uint)bVar6,DAT_00d61ba0);
            pbVar29 = pbVar14;
            if (iVar10 == 0) break;
            pbVar14 = pbVar14 + 1;
            lVar25 = lVar25 + -1;
            pbVar29 = pbVar22 + lVar26;
          } while (lVar25 != 0);
        }
      }
      pcVar4 = local_88;
      if (-1 < (long)local_80) {
        pcVar4 = (code *)(local_80 >> 0x38);
      }
      if (pcVar4 == (code *)0x0) {
                    /* try { // try from 0053144c to 0053145b has its CatchHandler @ 00531658 */
        (**(code **)(*plVar28 + 0x60))(plVar28,pbVar23,pbVar29,*param_6);
        puVar13 = (undefined4 *)(*param_6 + ((long)pbVar29 - (long)pbVar23) * 4);
        *param_6 = (ulong)puVar13;
      }
      else {
        if ((pbVar23 != pbVar29) && (pbVar14 = pbVar29 + -1, pbVar22 = pbVar23, pbVar23 < pbVar14))
        {
          do {
            pbVar19 = pbVar22 + 1;
            bVar6 = *pbVar22;
            *pbVar22 = *pbVar14;
            pbVar15 = pbVar14 + -1;
            *pbVar14 = bVar6;
            pbVar14 = pbVar15;
            pbVar22 = pbVar19;
          } while (pbVar19 < pbVar15);
        }
                    /* try { // try from 00531360 to 00531367 has its CatchHandler @ 0053164c */
        uVar9 = (**(code **)(*plVar21 + 0x20))(plVar21);
        if (pbVar23 < pbVar29) {
          uVar24 = 0;
          uVar27 = 0;
          lVar25 = (long)pbVar29 - (long)pbVar23;
          pbVar22 = pbVar23;
          do {
            pcVar16 = (code *)(ulong)uVar24;
            pcVar4 = local_88;
            if (-1 < (long)local_80) {
              pcVar4 = (code *)(ulong)local_80._7_1_;
            }
            if (pcVar4 < pcVar16) {
              if (*(long *)(lVar7 + 0x28) == local_68) {
                    /* try { // try from 005315f4 to 0053161b has its CatchHandler @ 00531698 */
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s:%d: assertion %s failed: %s",
                           "../../discord_common/native/third_party/llvm/libcxx/include/string",
                           0xd57,"__pos <= size()","string index out of bounds");
              }
              goto LAB_00531694;
            }
            ppppuVar3 = (undefined8 ****)local_90;
            if (-1 < (long)local_80) {
              ppppuVar3 = &local_90;
            }
            if ((byte)*(code *)((long)ppppuVar3 + (long)pcVar16) != 0 &&
                uVar27 == (byte)*(code *)((long)ppppuVar3 + (long)pcVar16)) {
              puVar13 = (undefined4 *)*param_6;
              uVar27 = 0;
              *puVar13 = uVar9;
              *param_6 = (ulong)(puVar13 + 1);
              pcVar4 = local_88;
              if (-1 < (long)local_80) {
                pcVar4 = (code *)(ulong)local_80._7_1_;
              }
              if (pcVar16 < pcVar4 + -1) {
                uVar24 = uVar24 + 1;
              }
            }
                    /* try { // try from 00531408 to 0053140f has its CatchHandler @ 00531664 */
            uVar11 = (**(code **)(*plVar28 + 0x58))(plVar28,*pbVar22);
            puVar13 = (undefined4 *)*param_6;
            uVar27 = uVar27 + 1;
            pbVar22 = pbVar22 + 1;
            lVar25 = lVar25 + -1;
            *puVar13 = uVar11;
            *param_6 = (ulong)(puVar13 + 1);
          } while (lVar25 != 0);
          puVar13 = puVar13 + 1;
        }
        else {
          puVar13 = (undefined4 *)*param_6;
        }
        puVar1 = (undefined4 *)(param_4 + ((long)pbVar23 - (long)param_1) * 4);
        if ((puVar1 != puVar13) && (puVar1 < puVar13 + -1)) {
          puVar17 = puVar13 + -1;
          puVar1 = (undefined4 *)(param_4 + (long)param_1 * -4 + (long)pbVar23 * 4);
          do {
            puVar20 = puVar1 + 1;
            uVar9 = *puVar1;
            *puVar1 = *puVar17;
            puVar18 = puVar17 + -1;
            *puVar17 = uVar9;
            puVar17 = puVar18;
            puVar1 = puVar20;
          } while (puVar20 < puVar18);
        }
      }
      if (pbVar29 < param_3) {
        lVar25 = (long)param_3 - (long)pbVar29;
        pbVar22 = pbVar29;
        do {
          pbVar29 = pbVar22 + 1;
          if (*pbVar22 == 0x2e) {
                    /* try { // try from 00531524 to 0053154b has its CatchHandler @ 00531658 */
            uVar9 = (**(code **)(*plVar21 + 0x18))(plVar21);
            puVar13 = (undefined4 *)*param_6 + 1;
            *(undefined4 *)*param_6 = uVar9;
            *param_6 = (ulong)puVar13;
            goto LAB_00531534;
          }
                    /* try { // try from 005314e8 to 005314ef has its CatchHandler @ 00531660 */
          uVar9 = (**(code **)(*plVar28 + 0x58))(plVar28);
          puVar13 = (undefined4 *)*param_6;
          lVar25 = lVar25 + -1;
          *puVar13 = uVar9;
          *param_6 = (ulong)(puVar13 + 1);
          pbVar22 = pbVar29;
        } while (lVar25 != 0);
        puVar13 = puVar13 + 1;
        pbVar29 = param_3;
      }
LAB_00531534:
      (**(code **)(*plVar28 + 0x60))(plVar28,pbVar29,param_3,puVar13);
      uVar2 = *param_6 + ((long)param_3 - (long)pbVar29) * 4;
      uVar5 = uVar2;
      if (param_2 != param_3) {
        uVar5 = param_4 + ((long)param_2 - (long)param_1) * 4;
      }
      *param_6 = uVar2;
      *param_5 = uVar5;
      if (*(long *)(lVar7 + 0x28) == local_68) {
        return;
      }
      goto LAB_00531694;
    }
  }
  if (*(long *)(lVar7 + 0x28) == local_68) {
    uVar12 = FUN_0053cd4c();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0053124c with catch @ 00531634
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005312cc with catch @ 00531638
                        */
    FUN_0054ffbc(&DAT_00d61ba8);
    if (*(long *)(lVar7 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00d0fa5c(uVar12);
    }
  }
LAB_00531694:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0053169c  FUN_0053169c =====

long * FUN_0053169c(long *param_1,long *param_2,long *param_3,undefined8 param_4,uint *param_5,
                   undefined8 param_6,byte *param_7,byte *param_8)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  byte *pbVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  byte *pbVar15;
  long *plVar16;
  long *plVar17;
  long *local_98;
  undefined8 *local_90;
  code *pcStack_88;
  undefined8 local_80;
  undefined8 ***local_78;
  undefined8 **local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  FUN_00520ce8(&local_98,param_4);
  plVar17 = local_98;
  local_80 = 0;
  local_90 = &DAT_00d61bf8;
  pcStack_88 = FUN_0053d0c8;
  if (DAT_00d61bf8 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
                    /* try { // try from 0053172c to 00531743 has its CatchHandler @ 00531bc4 */
    FUN_0054698c(&DAT_00d61bf8,&local_78,FUN_005459e0);
  }
  lVar14 = plVar17[2];
  if (((ulong)(plVar17[3] - lVar14 >> 3) <= (long)DAT_00d61c00 - 1U) ||
     (plVar17 = *(long **)(lVar14 + ((long)DAT_00d61c00 - 1U) * 8), plVar17 == (long *)0x0)) {
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00531bc0 to 00531bc3 has its CatchHandler @ 00531bc4 */
      uVar11 = FUN_0053cd4c();
                    /* catch() { ... } // from try @ 0053172c with catch @ 00531bc4
                       catch() { ... } // from try @ 00531bc0 with catch @ 00531bc4 */
      plVar17 = local_98 + 1;
      do {
        lVar14 = *plVar17;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar5) {
          *plVar17 = lVar14 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*local_98 + 0x10))();
      }
      if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_00d0fa5c(uVar11);
      }
    }
    goto LAB_00531c0c;
  }
  plVar16 = local_98 + 1;
  do {
    lVar14 = *plVar16;
    cVar6 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar5) {
      *plVar16 = lVar14 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (lVar14 == 0) {
    (**(code **)(*local_98 + 0x10))();
  }
  *param_5 = 0;
  plVar16 = param_3;
  if (param_7 != param_8) {
    while (param_2 != (long *)0x0) {
      if (param_2[3] == param_2[4]) {
        iVar10 = (**(code **)(*param_2 + 0x48))(param_2);
        bVar5 = iVar10 == -1;
        plVar3 = (long *)0x0;
        if (!bVar5) {
          plVar3 = param_2;
        }
        goto joined_r0x005317f4;
      }
      bVar5 = false;
      if (plVar16 != (long *)0x0) goto LAB_005317b4;
joined_r0x005317c0:
      param_3 = plVar16;
      if (bVar5 == false) goto LAB_00531ae0;
LAB_00531820:
      cVar6 = (**(code **)(*plVar17 + 0x48))(plVar17,*param_7,0);
      if (cVar6 == '%') {
        plVar16 = param_3;
        if (param_7 + 1 == param_8) goto LAB_00531ae0;
        uVar8 = (**(code **)(*plVar17 + 0x48))(plVar17,param_7[1],0);
        if (((uVar8 & 0xff) == 0x45) || ((uVar8 & 0xff) == 0x30)) {
          if (param_7 + 2 == param_8) goto LAB_00531ae0;
          uVar9 = (**(code **)(*plVar17 + 0x48))(plVar17,param_7[2],0);
          lVar14 = 2;
          uVar12 = uVar8;
        }
        else {
          uVar12 = 0;
          lVar14 = 1;
          uVar9 = uVar8;
        }
        param_7 = param_7 + lVar14;
        param_2 = (long *)(**(code **)(*param_1 + 0x48))
                                    (param_1,param_2,param_3,param_4,param_5,param_6,uVar9,uVar12);
LAB_00531918:
        param_7 = param_7 + 1;
      }
      else {
        if ((-1 < (char)*param_7) &&
           (pbVar15 = param_7, (*(ulong *)(plVar17[2] + (ulong)*param_7 * 8) & 1) != 0)) {
          do {
            pbVar15 = pbVar15 + 1;
            pbVar4 = param_8;
            if (pbVar15 == param_8) goto joined_r0x005319ec;
            pbVar4 = pbVar15;
            if ((char)*pbVar15 < '\0') goto joined_r0x005319ec;
            param_7 = param_7 + 1;
          } while ((*(ulong *)(plVar17[2] + (ulong)*pbVar15 * 8) & 1) != 0);
LAB_00531a04:
          if (param_2 == (long *)0x0) goto LAB_00531ad4;
LAB_00531a08:
          if (param_2[3] == param_2[4]) {
            iVar10 = (**(code **)(*param_2 + 0x48))(param_2);
            bVar5 = iVar10 == -1;
            plVar16 = (long *)0x0;
            if (!bVar5) {
              plVar16 = param_2;
            }
          }
          else {
            bVar5 = false;
            plVar16 = param_2;
          }
          param_2 = plVar16;
          plVar16 = param_3;
          if (param_3 == (long *)0x0) goto LAB_00531a7c;
          do {
            param_3 = plVar16;
            if (plVar16[3] == plVar16[4]) {
              iVar10 = (**(code **)(*plVar16 + 0x48))(plVar16);
              param_3 = (long *)0x0;
              if (iVar10 != -1) {
                param_3 = plVar16;
              }
              if (bVar5 == (iVar10 == -1)) goto LAB_005319b4;
            }
            else if (bVar5 == false) goto LAB_005319b4;
            while( true ) {
              if ((byte *)param_2[3] == (byte *)param_2[4]) {
                uVar13 = (**(code **)(*param_2 + 0x48))(param_2);
                uVar13 = uVar13 & 0xff;
                if ((uint)uVar13 >> 7 != 0) goto LAB_005319b4;
              }
              else {
                bVar1 = *(byte *)param_2[3];
                uVar13 = (ulong)bVar1;
                if ((char)bVar1 < '\0') goto LAB_005319b4;
              }
              if ((*(ulong *)(plVar17[2] + uVar13 * 8) & 1) == 0) goto LAB_005319b4;
              if (param_2[3] == param_2[4]) {
                (**(code **)(*param_2 + 0x50))(param_2);
                goto LAB_00531a04;
              }
              param_2[3] = param_2[3] + 1;
              pbVar4 = param_7;
joined_r0x005319ec:
              param_7 = pbVar4;
              if (param_2 != (long *)0x0) goto LAB_00531a08;
LAB_00531ad4:
              bVar5 = true;
              plVar16 = param_3;
              if (param_3 != (long *)0x0) break;
LAB_00531a7c:
              if (bVar5 != false) goto LAB_005319b4;
            }
          } while( true );
        }
        if ((byte *)param_2[3] == (byte *)param_2[4]) {
          uVar8 = (**(code **)(*param_2 + 0x48))(param_2);
        }
        else {
          uVar8 = (uint)*(byte *)param_2[3];
        }
        cVar6 = (**(code **)(*plVar17 + 0x18))(plVar17,uVar8);
        cVar7 = (**(code **)(*plVar17 + 0x18))(plVar17,*param_7);
        if (cVar6 == cVar7) {
          if (param_2[3] == param_2[4]) {
            (**(code **)(*param_2 + 0x50))(param_2);
            goto LAB_00531918;
          }
          param_7 = param_7 + 1;
          param_2[3] = param_2[3] + 1;
        }
        else {
          *param_5 = 4;
        }
      }
LAB_005319b4:
      if ((param_7 == param_8) || (plVar16 = param_3, *param_5 != 0)) goto LAB_00531ae8;
    }
    bVar5 = true;
    plVar3 = param_2;
joined_r0x005317f4:
    param_2 = plVar3;
    if (plVar16 == (long *)0x0) goto joined_r0x005317c0;
LAB_005317b4:
    if (plVar16[3] != plVar16[4]) goto joined_r0x005317c0;
    iVar10 = (**(code **)(*plVar16 + 0x48))(plVar16);
    param_3 = (long *)0x0;
    if (iVar10 != -1) {
      param_3 = plVar16;
    }
    plVar16 = param_3;
    if (bVar5 != (iVar10 == -1)) goto LAB_00531820;
LAB_00531ae0:
    *param_5 = 4;
    param_3 = plVar16;
  }
LAB_00531ae8:
  if (param_2 == (long *)0x0) {
    bVar5 = true;
    plVar17 = param_2;
joined_r0x00531b58:
    param_2 = plVar17;
    if (param_3 != (long *)0x0) goto LAB_00531b00;
LAB_00531b5c:
    if (bVar5 != false) goto LAB_00531b10;
  }
  else {
    if (param_2[3] == param_2[4]) {
      iVar10 = (**(code **)(*param_2 + 0x48))(param_2);
      bVar5 = iVar10 == -1;
      plVar17 = (long *)0x0;
      if (!bVar5) {
        plVar17 = param_2;
      }
      goto joined_r0x00531b58;
    }
    bVar5 = false;
    if (param_3 == (long *)0x0) goto LAB_00531b5c;
LAB_00531b00:
    if (param_3[3] == param_3[4]) {
      iVar10 = (**(code **)(*param_3 + 0x48))(param_3);
      if (bVar5 == (iVar10 == -1)) goto LAB_00531b10;
    }
    else if (bVar5 == false) {
LAB_00531b10:
      *param_5 = *param_5 | 2;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return param_2;
  }
LAB_00531c0c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00531c10  FUN_00531c10 =====

undefined8 FUN_00531c10(void)

{
  return 2;
}


// ===== 00531c18  FUN_00531c18 =====

void FUN_00531c18(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_0053169c();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00531c7c  FUN_00531c7c =====

void FUN_00531c7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)(**(code **)(*(long *)(param_1 + 0x10) + 0x28))();
  uVar1 = puVar3[1];
  puVar2 = (undefined8 *)*puVar3;
  if (-1 < (char)*(byte *)((long)puVar3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)puVar3 + 0x17);
    puVar2 = puVar3;
  }
  FUN_0053169c(param_1,param_2,param_3,param_4,param_5,param_6,puVar2,(long)puVar2 + uVar1);
  return;
}


// ===== 00531d00  FUN_00531d00 =====

void FUN_00531d00(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6)

{
  long *plVar1;
  undefined1 auVar2 [16];
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long *local_80;
  long *local_78;
  undefined8 *local_70;
  code *pcStack_68;
  undefined8 local_60;
  undefined8 **local_58;
  undefined8 **local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  local_78 = param_2;
  plVar6 = (long *)FUN_00520ce8(&local_80,param_4);
  plVar1 = local_80;
  local_60 = 0;
  local_70 = &DAT_00d61bf8;
  pcStack_68 = FUN_0053d0c8;
  if (DAT_00d61bf8 != -1) {
    local_50 = &local_70;
    local_58 = &local_50;
                    /* try { // try from 00531d78 to 00531d8f has its CatchHandler @ 00531e98 */
    plVar6 = (long *)FUN_0054698c(&DAT_00d61bf8,&local_58,FUN_005459e0);
  }
  lVar9 = plVar1[2];
  if (((long)DAT_00d61c00 - 1U < (ulong)(plVar1[3] - lVar9 >> 3)) &&
     (lVar9 = *(long *)(lVar9 + ((long)DAT_00d61c00 - 1U) * 8), lVar9 != 0)) {
    plVar1 = local_80 + 1;
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*local_80 + 0x10))();
    }
    lVar8 = (*(code *)**(undefined8 **)(param_1 + 0x10))((undefined8 *)(param_1 + 0x10));
    lVar9 = FUN_00522984(&local_78,param_3,lVar8,lVar8 + 0x150,lVar9,param_5,0);
    if (lVar9 - lVar8 < 0x150) {
      lVar9 = (lVar9 - lVar8 >> 3) * -0x5555555555555555;
      auVar2 = SEXT816(lVar9) * SEXT816(0x4924924924924925);
      *(int *)(param_6 + 0x18) =
           (int)lVar9 + ((int)(auVar2._8_8_ >> 1) - (auVar2._12_4_ >> 0x1f)) * -7;
    }
    plVar6 = local_78;
    if (*(long *)(lVar5 + 0x28) == local_48) {
      return;
    }
  }
  else if (*(long *)(lVar5 + 0x28) == local_48) {
                    /* try { // try from 00531e94 to 00531e97 has its CatchHandler @ 00531e98 */
    uVar7 = FUN_0053cd4c();
                    /* catch() { ... } // from try @ 00531d78 with catch @ 00531e98
                       catch() { ... } // from try @ 00531e94 with catch @ 00531e98 */
    plVar1 = local_80 + 1;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar6 = local_80;
    if (lVar9 == 0) {
      plVar6 = (long *)(**(code **)(*local_80 + 0x10))();
    }
    if (*(long *)(lVar5 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00d0fa5c(uVar7);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar6);
}


// ===== 00531ee0  FUN_00531ee0 =====

void FUN_00531ee0(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *local_80;
  long *local_78;
  undefined8 *local_70;
  code *pcStack_68;
  undefined8 local_60;
  undefined8 **local_58;
  undefined8 **local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  local_78 = param_2;
  plVar5 = (long *)FUN_00520ce8(&local_80,param_4);
  plVar1 = local_80;
  local_60 = 0;
  local_70 = &DAT_00d61bf8;
  pcStack_68 = FUN_0053d0c8;
  if (DAT_00d61bf8 != -1) {
    local_50 = &local_70;
    local_58 = &local_50;
                    /* try { // try from 00531f58 to 00531f6f has its CatchHandler @ 00532074 */
    plVar5 = (long *)FUN_0054698c(&DAT_00d61bf8,&local_58,FUN_005459e0);
  }
  lVar8 = plVar1[2];
  if (((long)DAT_00d61c00 - 1U < (ulong)(plVar1[3] - lVar8 >> 3)) &&
     (lVar8 = *(long *)(lVar8 + ((long)DAT_00d61c00 - 1U) * 8), lVar8 != 0)) {
    plVar1 = local_80 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*local_80 + 0x10))();
    }
    lVar7 = (**(code **)(*(long *)(param_1 + 0x10) + 8))((long *)(param_1 + 0x10));
    lVar8 = FUN_00522984(&local_78,param_3,lVar7,lVar7 + 0x240,lVar8,param_5,0);
    if (lVar8 - lVar7 < 0x240) {
      lVar8 = (lVar8 - lVar7 >> 3) * -0x5555555555555555;
      *(int *)(param_6 + 0x10) =
           (int)lVar8 +
           ((int)((ulong)(lVar8 / 6 + (lVar8 >> 0x3f)) >> 1) -
           (SUB164(SEXT816(lVar8) * SEXT816(0x2aaaaaaaaaaaaaab),0xc) >> 0x1f)) * -0xc;
    }
    plVar5 = local_78;
    if (*(long *)(lVar4 + 0x28) == local_48) {
      return;
    }
  }
  else if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* try { // try from 00532070 to 00532073 has its CatchHandler @ 00532074 */
    uVar6 = FUN_0053cd4c();
                    /* catch() { ... } // from try @ 00531f58 with catch @ 00532074
                       catch() { ... } // from try @ 00532070 with catch @ 00532074 */
    plVar1 = local_80 + 1;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar5 = local_80;
    if (lVar8 == 0) {
      plVar5 = (long *)(**(code **)(*local_80 + 0x10))();
    }
    if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00d0fa5c(uVar6);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar5);
}


// ===== 005320bc  FUN_005320bc =====

void FUN_005320bc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 byte *param_5,long param_6)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *local_80;
  long *local_78;
  undefined8 *local_70;
  code *pcStack_68;
  undefined8 local_60;
  undefined8 **local_58;
  undefined8 **local_50;
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  local_78 = param_2;
  plVar8 = (long *)FUN_00520ce8(&local_80,param_4);
  plVar1 = local_80;
  local_60 = 0;
  local_70 = &DAT_00d61bf8;
  pcStack_68 = FUN_0053d0c8;
  if (DAT_00d61bf8 != -1) {
    local_50 = &local_70;
    local_58 = &local_50;
                    /* try { // try from 00532130 to 00532147 has its CatchHandler @ 00532214 */
    plVar8 = (long *)FUN_0054698c(&DAT_00d61bf8,&local_58,FUN_005459e0);
  }
  lVar11 = plVar1[2];
  if (((long)DAT_00d61c00 - 1U < (ulong)(plVar1[3] - lVar11 >> 3)) &&
     (lVar11 = *(long *)(lVar11 + ((long)DAT_00d61c00 - 1U) * 8), lVar11 != 0)) {
    plVar1 = local_80 + 1;
    do {
      lVar10 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*local_80 + 0x10))();
    }
    iVar7 = FUN_00532ce4(&local_78,param_3,param_5,lVar11,4);
    if ((*param_5 >> 2 & 1) == 0) {
      iVar2 = iVar7 + 0x76c;
      if (99 < iVar7) {
        iVar2 = iVar7;
      }
      iVar3 = iVar7 + 2000;
      if (0x44 < iVar7) {
        iVar3 = iVar2;
      }
      *(int *)(param_6 + 0x14) = iVar3 + -0x76c;
    }
    plVar8 = local_78;
    if (*(long *)(lVar6 + 0x28) == local_48) {
      return;
    }
  }
  else if (*(long *)(lVar6 + 0x28) == local_48) {
                    /* try { // try from 00532210 to 00532213 has its CatchHandler @ 00532214 */
    uVar9 = FUN_0053cd4c();
                    /* catch() { ... } // from try @ 00532130 with catch @ 00532214
                       catch() { ... } // from try @ 00532210 with catch @ 00532214 */
    plVar1 = local_80 + 1;
    do {
      lVar11 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar8 = local_80;
    if (lVar11 == 0) {
      plVar8 = (long *)(**(code **)(*local_80 + 0x10))();
    }
    if (*(long *)(lVar6 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00d0fa5c(uVar9);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar8);
}


// ===== 0053225c  FUN_0053225c =====

void FUN_0053225c(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,uint *param_5,
                 int *param_6,undefined1 param_7)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  char cVar7;
  bool bVar8;
  long lVar9;
  int iVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined5 *puVar15;
  uint uVar16;
  code *pcVar17;
  long lVar18;
  long lVar19;
  long *local_90;
  long *local_88;
  undefined4 **local_80;
  undefined4 *local_78;
  undefined1 local_70 [7];
  undefined1 auStack_69 [4];
  undefined5 uStack_65;
  undefined8 local_60;
  long local_58;
  
  lVar9 = tpidr_el0;
  local_58 = *(long *)(lVar9 + 0x28);
  *param_5 = 0;
  local_88 = param_2;
  plVar11 = (long *)FUN_00520ce8(&local_90,param_4);
  plVar1 = local_90;
  local_60 = 0;
  local_70._0_4_ = 0xd61bf8;
  local_70[4] = '\0';
  local_70._5_2_ = 0;
  auStack_69 = (undefined1  [4])0x53d0c800;
  uStack_65 = 0;
  if (DAT_00d61bf8 != -1) {
    local_78 = (undefined4 *)local_70;
    local_80 = &local_78;
                    /* try { // try from 005322e4 to 005322fb has its CatchHandler @ 005328b4 */
    plVar11 = (long *)FUN_0054698c(&DAT_00d61bf8,&local_80,FUN_005459e0);
  }
  lVar19 = plVar1[2];
  if (((ulong)(plVar1[3] - lVar19 >> 3) <= (long)DAT_00d61c00 - 1U) ||
     (lVar19 = *(long *)(lVar19 + ((long)DAT_00d61c00 - 1U) * 8), lVar19 == 0)) {
    if (*(long *)(lVar9 + 0x28) == local_58) {
                    /* try { // try from 005328b0 to 005328b3 has its CatchHandler @ 005328b4 */
      uVar13 = FUN_0053cd4c();
                    /* catch() { ... } // from try @ 005322e4 with catch @ 005328b4
                       catch() { ... } // from try @ 005328b0 with catch @ 005328b4 */
      plVar1 = local_90 + 1;
      do {
        lVar19 = *plVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = lVar19 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      plVar11 = local_90;
      if (lVar19 == 0) {
        plVar11 = (long *)(**(code **)(*local_90 + 0x10))();
      }
      if (*(long *)(lVar9 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00d0fa5c(uVar13);
      }
    }
    goto LAB_005328f8;
  }
  plVar1 = local_90 + 1;
  do {
    lVar18 = *plVar1;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar18 + -1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (lVar18 == 0) {
    (**(code **)(*local_90 + 0x10))();
  }
  switch(param_7) {
  case 0x25:
    FUN_00532ae4(param_1,&local_88,param_3,param_5,lVar19);
    plVar11 = local_88;
    break;
  default:
switchD_0053236c_caseD_26:
    uVar16 = *param_5;
    goto LAB_005327d8;
  case 0x41:
  case 0x61:
    lVar18 = (**(code **)param_1[2])(param_1 + 2);
    lVar19 = FUN_00522984(&local_88,param_3,lVar18,lVar18 + 0x150,lVar19,param_5,0);
    plVar11 = local_88;
    if (lVar19 - lVar18 < 0x150) {
      lVar19 = (lVar19 - lVar18 >> 3) * -0x5555555555555555;
      auVar6 = SEXT816(lVar19) * SEXT816(0x4924924924924925);
      param_6[6] = (int)lVar19 + ((int)(auVar6._8_8_ >> 1) - (auVar6._12_4_ >> 0x1f)) * -7;
    }
    break;
  case 0x42:
  case 0x62:
  case 0x68:
    lVar18 = (**(code **)(param_1[2] + 8))(param_1 + 2);
    lVar19 = FUN_00522984(&local_88,param_3,lVar18,lVar18 + 0x240,lVar19,param_5,0);
    plVar11 = local_88;
    if (lVar19 - lVar18 < 0x240) {
      lVar19 = (lVar19 - lVar18 >> 3) * -0x5555555555555555;
      param_6[4] = (int)lVar19 +
                   ((int)((ulong)(lVar19 / 6 + (lVar19 >> 0x3f)) >> 1) -
                   (SUB164(SEXT816(lVar19) * SEXT816(0x2aaaaaaaaaaaaaab),0xc) >> 0x1f)) * -0xc;
    }
    break;
  case 0x44:
    uVar13 = 0x79252f64252f6d25;
    goto LAB_005326c0;
  case 0x46:
    uVar13 = 0x64252d6d252d5925;
    goto LAB_005326c0;
  case 0x48:
    iVar10 = FUN_00532ce4(&local_88,param_3,param_5,lVar19,2);
    uVar16 = *param_5;
    if (iVar10 < 0x18) {
LAB_00532658:
      if ((uVar16 >> 2 & 1) == 0) {
        param_6[2] = iVar10;
        plVar11 = local_88;
        break;
      }
    }
    goto LAB_005327d8;
  case 0x49:
    iVar10 = FUN_00532ce4(&local_88,param_3,param_5,lVar19,2);
    uVar16 = *param_5;
    if (iVar10 - 1U < 0xc) goto LAB_00532658;
LAB_005327d8:
    *param_5 = uVar16 | 4;
    plVar11 = local_88;
    break;
  case 0x4d:
    iVar10 = FUN_00532ce4(&local_88,param_3,param_5,lVar19,2);
    uVar16 = *param_5;
    if ((0x3b < iVar10) || ((uVar16 >> 2 & 1) != 0)) goto LAB_005327d8;
    param_6[1] = iVar10;
    plVar11 = local_88;
    break;
  case 0x52:
    puVar15 = (undefined5 *)(local_70 + 5);
    local_70[4] = 'M';
    local_70._0_4_ = 0x253a4825;
    goto LAB_005326d0;
  case 0x53:
    iVar10 = FUN_00532ce4(&local_88,param_3,param_5,lVar19,2);
    uVar16 = *param_5;
    if ((0x3c < iVar10) || ((uVar16 >> 2 & 1) != 0)) goto LAB_005327d8;
    *param_6 = iVar10;
    plVar11 = local_88;
    break;
  case 0x54:
    uVar13 = 0x53253a4d253a4825;
LAB_005326c0:
    puVar15 = (undefined5 *)(auStack_69 + 1);
    local_70._0_4_ = (undefined4)uVar13;
    local_70[4] = (char)((ulong)uVar13 >> 0x20);
    local_70._5_2_ = (undefined2)((ulong)uVar13 >> 0x28);
    auStack_69[0] = (char)((ulong)uVar13 >> 0x38);
LAB_005326d0:
    puVar14 = (undefined8 *)local_70;
LAB_005326d4:
    local_88 = (long *)FUN_0053169c(param_1,local_88,param_3,param_4,param_5,param_6,puVar14,puVar15
                                   );
    plVar11 = local_88;
    break;
  case 0x58:
    pcVar17 = *(code **)(param_1[2] + 0x30);
    goto LAB_00532560;
  case 0x59:
    iVar10 = FUN_00532ce4(&local_88,param_3,param_5,lVar19,4);
    plVar11 = local_88;
    if (((byte)*param_5 >> 2 & 1) == 0) {
      param_6[5] = iVar10 + -0x76c;
    }
    break;
  case 99:
    pcVar17 = *(code **)(param_1[2] + 0x18);
LAB_00532560:
    puVar12 = (undefined8 *)(*pcVar17)();
    uVar4 = puVar12[1];
    puVar14 = (undefined8 *)*puVar12;
    if (-1 < (char)*(byte *)((long)puVar12 + 0x17)) {
      uVar4 = (ulong)*(byte *)((long)puVar12 + 0x17);
      puVar14 = puVar12;
    }
    puVar15 = (undefined5 *)((long)puVar14 + uVar4);
    goto LAB_005326d4;
  case 100:
  case 0x65:
    iVar10 = FUN_00532ce4(&local_88,param_3,param_5,lVar19,2);
    uVar16 = *param_5;
    if ((0x1e < iVar10 - 1U) || ((uVar16 >> 2 & 1) != 0)) goto LAB_005327d8;
    param_6[3] = iVar10;
    plVar11 = local_88;
    break;
  case 0x6a:
    iVar10 = FUN_00532ce4(&local_88,param_3,param_5,lVar19,3);
    uVar16 = *param_5;
    if ((0x16d < iVar10) || ((uVar16 >> 2 & 1) != 0)) goto LAB_005327d8;
    param_6[7] = iVar10;
    plVar11 = local_88;
    break;
  case 0x6d:
    iVar10 = FUN_00532ce4(&local_88,param_3,param_5,lVar19,2);
    uVar16 = *param_5;
    if ((0xb < iVar10 - 1U) || ((uVar16 >> 2 & 1) != 0)) goto LAB_005327d8;
    param_6[4] = iVar10 - 1U;
    plVar11 = local_88;
    break;
  case 0x6e:
  case 0x74:
    FUN_005328fc(param_1,&local_88,param_3,param_5,lVar19);
    plVar11 = local_88;
    break;
  case 0x70:
    lVar18 = (**(code **)(param_1[2] + 0x10))(param_1 + 2);
    uVar4 = *(ulong *)(lVar18 + 8);
    if (-1 < (char)*(byte *)(lVar18 + 0x17)) {
      uVar4 = (ulong)*(byte *)(lVar18 + 0x17);
    }
    uVar5 = *(ulong *)(lVar18 + 0x20);
    if (-1 < (char)*(byte *)(lVar18 + 0x2f)) {
      uVar5 = (ulong)*(byte *)(lVar18 + 0x2f);
    }
    if (uVar4 + uVar5 == 0) goto switchD_0053236c_caseD_26;
    lVar19 = FUN_00522984(&local_88,param_3,lVar18,lVar18 + 0x30,lVar19,param_5,0);
    iVar10 = param_6[2];
    plVar11 = local_88;
    if ((lVar19 == lVar18) && (iVar10 == 0xc)) {
      param_6[2] = 0;
    }
    else if ((lVar19 - lVar18 == 0x18) && (iVar10 < 0xc)) {
      param_6[2] = iVar10 + 0xc;
    }
    break;
  case 0x72:
    puVar15 = &uStack_65;
    local_70._0_4_ = (undefined4)s__I__M__S__p_H__M_001f7c51._0_8_;
    local_70[4] = SUB81(s__I__M__S__p_H__M_001f7c51._0_8_,4);
    local_70._5_2_ = SUB82(s__I__M__S__p_H__M_001f7c51._0_8_,5);
    auStack_69[0] = SUB81(s__I__M__S__p_H__M_001f7c51._0_8_,7);
    auStack_69._1_3_ = 0x702520;
    goto LAB_005326d0;
  case 0x77:
    iVar10 = FUN_00532ce4(&local_88,param_3,param_5,lVar19,1);
    uVar16 = *param_5;
    if ((6 < iVar10) || ((uVar16 >> 2 & 1) != 0)) goto LAB_005327d8;
    param_6[6] = iVar10;
    plVar11 = local_88;
    break;
  case 0x78:
    plVar11 = (long *)(**(code **)(*param_1 + 0x28))
                                (param_1,local_88,param_3,param_4,param_5,param_6);
    break;
  case 0x79:
    iVar10 = FUN_00532ce4(&local_88,param_3,param_5,lVar19,4);
    plVar11 = local_88;
    if (((byte)*param_5 >> 2 & 1) == 0) {
      iVar2 = iVar10 + 0x76c;
      if (99 < iVar10) {
        iVar2 = iVar10;
      }
      iVar3 = iVar10 + 2000;
      if (0x44 < iVar10) {
        iVar3 = iVar2;
      }
      param_6[5] = iVar3 + -0x76c;
    }
  }
  if (*(long *)(lVar9 + 0x28) == local_58) {
    return;
  }
LAB_005328f8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar11);
}


// ===== 005328fc  FUN_005328fc =====

void FUN_005328fc(undefined8 param_1,long *param_2,long *param_3,uint *param_4,long param_5)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  
  plVar4 = (long *)*param_2;
  if (plVar4 != (long *)0x0) goto LAB_0053293c;
  do {
    bVar2 = true;
    plVar6 = param_3;
LAB_00532984:
    param_3 = plVar6;
    if ((plVar6 == (long *)0x0) || (plVar6[3] != plVar6[4])) {
      if (bVar2 != false) goto LAB_00532a2c;
    }
    else {
      iVar3 = (**(code **)(*plVar6 + 0x48))(plVar6);
      param_3 = (long *)0x0;
      if (iVar3 != -1) {
        param_3 = plVar6;
      }
      if (bVar2 == (iVar3 == -1)) goto LAB_00532a2c;
    }
    plVar4 = (long *)*param_2;
    if ((byte *)plVar4[3] == (byte *)plVar4[4]) {
      uVar5 = (**(code **)(*plVar4 + 0x48))();
      uVar5 = uVar5 & 0xff;
      if ((uint)uVar5 >> 7 != 0) goto LAB_00532a2c;
    }
    else {
      bVar1 = *(byte *)plVar4[3];
      uVar5 = (ulong)bVar1;
      if ((char)bVar1 < '\0') goto LAB_00532a2c;
    }
    if ((*(ulong *)(*(long *)(param_5 + 0x10) + uVar5 * 8) & 1) == 0) {
LAB_00532a2c:
      plVar4 = (long *)*param_2;
      if (plVar4 == (long *)0x0) {
        bVar2 = true;
      }
      else if (plVar4[3] == plVar4[4]) {
        iVar3 = (**(code **)(*plVar4 + 0x48))();
        if (iVar3 == -1) {
          bVar2 = true;
          *param_2 = 0;
        }
        else {
          bVar2 = *param_2 == 0;
        }
      }
      else {
        bVar2 = false;
      }
      if (param_3 == (long *)0x0) {
        if (bVar2 == false) {
          return;
        }
      }
      else if (param_3[3] == param_3[4]) {
        iVar3 = (**(code **)(*param_3 + 0x48))(param_3);
        if (bVar2 != (iVar3 == -1)) {
          return;
        }
      }
      else if (bVar2 != false) {
        return;
      }
      *param_4 = *param_4 | 2;
      return;
    }
    plVar4 = (long *)*param_2;
    if (plVar4[3] == plVar4[4]) {
      (**(code **)(*plVar4 + 0x50))();
      plVar4 = (long *)*param_2;
    }
    else {
      plVar4[3] = plVar4[3] + 1;
      plVar4 = (long *)*param_2;
    }
  } while (plVar4 == (long *)0x0);
LAB_0053293c:
  plVar6 = param_3;
  if (plVar4[3] == plVar4[4]) {
    iVar3 = (**(code **)(*plVar4 + 0x48))();
    if (iVar3 == -1) {
      bVar2 = true;
      *param_2 = 0;
    }
    else {
      bVar2 = *param_2 == 0;
    }
  }
  else {
    bVar2 = false;
  }
  goto LAB_00532984;
}


// ===== 00532ae4  FUN_00532ae4 =====

void FUN_00532ae4(undefined8 param_1,long *param_2,long *param_3,uint *param_4,long *param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  uint uVar5;
  
  plVar4 = (long *)*param_2;
  if (plVar4 == (long *)0x0) {
    bVar1 = true;
joined_r0x00532b3c:
    if (param_3 == (long *)0x0) goto LAB_00532b40;
LAB_00532b24:
    if (param_3[3] == param_3[4]) {
      iVar3 = (**(code **)(*param_3 + 0x48))(param_3);
      plVar4 = (long *)0x0;
      if (iVar3 != -1) {
        plVar4 = param_3;
      }
      param_3 = plVar4;
      if (bVar1 == (iVar3 == -1)) goto LAB_00532bb0;
      goto LAB_00532b98;
    }
    if (bVar1 != false) goto LAB_00532b98;
  }
  else {
    if (plVar4[3] != plVar4[4]) {
      bVar1 = false;
      goto joined_r0x00532b3c;
    }
    iVar3 = (**(code **)(*plVar4 + 0x48))();
    if (iVar3 == -1) {
      bVar1 = true;
      *param_2 = 0;
      goto joined_r0x00532b3c;
    }
    bVar1 = *param_2 == 0;
    if (param_3 != (long *)0x0) goto LAB_00532b24;
LAB_00532b40:
    if (bVar1 == false) {
      param_3 = (long *)0x0;
LAB_00532b98:
      plVar4 = (long *)*param_2;
      if ((byte *)plVar4[3] == (byte *)plVar4[4]) {
        uVar5 = (**(code **)(*plVar4 + 0x48))();
      }
      else {
        uVar5 = (uint)*(byte *)plVar4[3];
      }
      cVar2 = (**(code **)(*param_5 + 0x48))(param_5,uVar5,0);
      if (cVar2 != '%') {
        uVar5 = 4;
        goto LAB_00532ca8;
      }
      plVar4 = (long *)*param_2;
      if (plVar4[3] == plVar4[4]) {
        (**(code **)(*plVar4 + 0x50))();
        plVar4 = (long *)*param_2;
        if (plVar4 != (long *)0x0) goto LAB_00532c20;
        bVar1 = true;
joined_r0x00532ccc:
        if (param_3 == (long *)0x0) goto LAB_00532c7c;
LAB_00532c34:
        if (param_3[3] == param_3[4]) {
          iVar3 = (**(code **)(*param_3 + 0x48))(param_3);
          if (bVar1 != (iVar3 == -1)) {
            return;
          }
        }
        else if (bVar1 != false) {
          return;
        }
      }
      else {
        plVar4[3] = plVar4[3] + 1;
LAB_00532c20:
        if (plVar4[3] != plVar4[4]) {
          bVar1 = false;
          goto joined_r0x00532ccc;
        }
        iVar3 = (**(code **)(*plVar4 + 0x48))();
        if (iVar3 != -1) {
          bVar1 = *param_2 == 0;
          goto joined_r0x00532ccc;
        }
        bVar1 = true;
        *param_2 = 0;
        if (param_3 != (long *)0x0) goto LAB_00532c34;
LAB_00532c7c:
        if (bVar1 == false) {
          return;
        }
      }
      uVar5 = 2;
      goto LAB_00532ca8;
    }
  }
LAB_00532bb0:
  uVar5 = 6;
LAB_00532ca8:
  *param_4 = *param_4 | uVar5;
  return;
}


// ===== 00532ce4  FUN_00532ce4 =====

int FUN_00532ce4(long *param_1,long *param_2,uint *param_3,long *param_4,int param_5)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  
  plVar7 = (long *)*param_1;
  if (plVar7 == (long *)0x0) {
joined_r0x00532d34:
    bVar3 = true;
    if (param_2 != (long *)0x0) goto LAB_00532d60;
LAB_00532da8:
    if (bVar3 == false) {
      plVar7 = (long *)0x0;
LAB_00532dbc:
      plVar8 = (long *)*param_1;
      if ((byte *)plVar8[3] == (byte *)plVar8[4]) {
        uVar10 = (**(code **)(*plVar8 + 0x48))();
        uVar11 = uVar10 & 0xffffffff;
        if (((uint)uVar10 >> 7 & 1) == 0) goto LAB_00532dec;
      }
      else {
        bVar1 = *(byte *)plVar8[3];
        uVar11 = (ulong)bVar1;
        if (-1 < (char)bVar1) {
LAB_00532dec:
          if (((uint)*(undefined8 *)(param_4[2] + (uVar11 & 0xff) * 8) >> 6 & 1) != 0) {
            uVar4 = (**(code **)(*param_4 + 0x48))(param_4,uVar11,0);
            plVar8 = (long *)*param_1;
            uVar4 = uVar4 & 0xff;
            if (plVar8[3] == plVar8[4]) {
              (**(code **)(*plVar8 + 0x50))(plVar8);
            }
            else {
              plVar8[3] = plVar8[3] + 1;
            }
            do {
              plVar9 = (long *)*param_1;
              plVar8 = plVar7;
              if (plVar9 == (long *)0x0) {
joined_r0x00532ec0:
                bVar3 = true;
                if (plVar7 != (long *)0x0) goto LAB_00532ef0;
LAB_00532f34:
                bVar2 = true;
              }
              else {
                if (plVar9[3] == plVar9[4]) {
                  iVar5 = (**(code **)(*plVar9 + 0x48))();
                  if (iVar5 == -1) {
                    *param_1 = 0;
                    goto joined_r0x00532ec0;
                  }
                  bVar3 = *param_1 == 0;
                }
                else {
                  bVar3 = false;
                }
                if (plVar7 == (long *)0x0) goto LAB_00532f34;
LAB_00532ef0:
                if (plVar7[3] == plVar7[4]) {
                  iVar5 = (**(code **)(*plVar7 + 0x48))(plVar7);
                  bVar2 = iVar5 == -1;
                  plVar8 = (long *)0x0;
                  if (!bVar2) {
                    plVar8 = plVar7;
                  }
                }
                else {
                  bVar2 = false;
                }
              }
              iVar5 = uVar4 - 0x30;
              plVar7 = (long *)*param_1;
              if ((bVar3 == bVar2) || (param_5 < 2)) {
                if (plVar7 == (long *)0x0) {
                  bVar3 = true;
                }
                else if (plVar7[3] == plVar7[4]) {
                  iVar6 = (**(code **)(*plVar7 + 0x48))();
                  if (iVar6 == -1) {
                    bVar3 = true;
                    *param_1 = 0;
                  }
                  else {
                    bVar3 = *param_1 == 0;
                  }
                }
                else {
                  bVar3 = false;
                }
                if (plVar8 == (long *)0x0) {
                  if (bVar3 == false) {
                    return iVar5;
                  }
                }
                else if (plVar8[3] == plVar8[4]) {
                  iVar6 = (**(code **)(*plVar8 + 0x48))(plVar8);
                  if (bVar3 != (iVar6 == -1)) {
                    return iVar5;
                  }
                }
                else if (bVar3 != false) {
                  return iVar5;
                }
                uVar4 = 2;
                goto LAB_00532e04;
              }
              if ((byte *)plVar7[3] == (byte *)plVar7[4]) {
                uVar10 = (**(code **)(*plVar7 + 0x48))();
                uVar11 = uVar10 & 0xffffffff;
                if (((uint)uVar10 >> 7 & 1) != 0) {
                  return iVar5;
                }
              }
              else {
                bVar1 = *(byte *)plVar7[3];
                uVar11 = (ulong)bVar1;
                if ((char)bVar1 < '\0') {
                  return iVar5;
                }
              }
              if (((uint)*(undefined8 *)(param_4[2] + (uVar11 & 0xff) * 8) >> 6 & 1) == 0) {
                return iVar5;
              }
              uVar4 = (**(code **)(*param_4 + 0x48))(param_4,uVar11,0);
              plVar7 = (long *)*param_1;
              if (plVar7[3] == plVar7[4]) {
                (**(code **)(*plVar7 + 0x50))(plVar7);
              }
              else {
                plVar7[3] = plVar7[3] + 1;
              }
              param_5 = param_5 + -1;
              uVar4 = iVar5 * 10 + (uVar4 & 0xff);
              plVar7 = plVar8;
            } while( true );
          }
        }
      }
      iVar5 = 0;
      uVar4 = 4;
      goto LAB_00532e04;
    }
  }
  else {
    if (plVar7[3] == plVar7[4]) {
      iVar5 = (**(code **)(*plVar7 + 0x48))();
      if (iVar5 == -1) {
        *param_1 = 0;
        goto joined_r0x00532d34;
      }
      bVar3 = *param_1 == 0;
    }
    else {
      bVar3 = false;
    }
    if (param_2 == (long *)0x0) goto LAB_00532da8;
LAB_00532d60:
    if (param_2[3] == param_2[4]) {
      iVar5 = (**(code **)(*param_2 + 0x48))(param_2);
      plVar7 = (long *)0x0;
      if (iVar5 != -1) {
        plVar7 = param_2;
      }
      if (bVar3 == (iVar5 == -1)) goto LAB_00532dac;
      goto LAB_00532dbc;
    }
    plVar7 = param_2;
    if (bVar3 != false) goto LAB_00532dbc;
  }
LAB_00532dac:
  iVar5 = 0;
  uVar4 = 6;
LAB_00532e04:
  *param_3 = *param_3 | uVar4;
  return iVar5;
}


