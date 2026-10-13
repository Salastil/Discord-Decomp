// ===== 001537ac  WebPDemuxNextChunk =====

void WebPDemuxNextChunk(int *param_1)

{
  if (param_1 != (int *)0x0) {
    FUN_001536ec(*(long *)(param_1 + 2) + -8,*param_1 + 1,param_1);
    return;
  }
  return;
}


// ===== 001537cc  WebPDemuxPrevChunk =====

undefined8 WebPDemuxPrevChunk(int *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (int *)0x0) {
    if (1 < *param_1) {
      uVar1 = FUN_001536ec(*(long *)(param_1 + 2) + -8,*param_1 + -1);
      return uVar1;
    }
  }
  return 0;
}


// ===== 001537f8  WebPDemuxReleaseChunkIterator =====

void WebPDemuxReleaseChunkIterator(void)

{
  return;
}


// ===== 001537fc  FUN_001537fc =====

undefined8 FUN_001537fc(long *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  void *__ptr;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_1[9] != 0) || ((ulong)(param_1[2] - *param_1) < 8)) {
    return 2;
  }
  if ((ulong)(param_1[1] - *param_1) < 8) {
    return 1;
  }
  __ptr = (void *)WebPSafeCalloc(1,0x50);
  if (__ptr != (void *)0x0) {
    uVar4 = FUN_00153bf4(1,0,param_1,__ptr);
    if ((int)uVar4 != 2) {
      uVar1 = *(uint *)(param_1 + 6);
      if (((uVar1 >> 4 & 1) == 0) && (*(long *)((long)__ptr + 0x40) != 0)) {
        *(undefined4 *)((long)__ptr + 0x10) = 0;
        *(undefined8 *)((long)__ptr + 0x38) = 0;
        *(undefined8 *)((long)__ptr + 0x40) = 0;
      }
      if (((*(int *)((long)param_1 + 0x2c) == 0) && (0 < *(int *)((long)__ptr + 8))) &&
         (iVar2 = *(int *)((long)__ptr + 0xc), 0 < iVar2)) {
        iVar3 = *(int *)((long)__ptr + 0x10);
        *(int *)((long)param_1 + 0x34) = *(int *)((long)__ptr + 8);
        *(int *)(param_1 + 7) = iVar2;
        *(undefined4 *)(param_1 + 5) = 1;
        *(uint *)(param_1 + 6) = uVar1 | (uint)(iVar3 != 0) << 4;
      }
      lVar5 = *(long *)param_1[10];
      if ((lVar5 == 0) || (*(int *)(lVar5 + 0x24) != 0)) {
        *(long *)param_1[10] = (long)__ptr;
        *(undefined8 *)((long)__ptr + 0x48) = 0;
        param_1[10] = (long)__ptr + 0x48;
        *(undefined4 *)((long)param_1 + 0x44) = 1;
        return uVar4;
      }
    }
    WebPSafeFree(__ptr);
  }
  return 2;
}


// ===== 00153918  FUN_00153918 =====

bool FUN_00153918(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    return true;
  }
  if ((((0 < *(int *)(param_1 + 0x34)) && (0 < *(int *)(param_1 + 0x38))) &&
      ((lVar1 = *(long *)(param_1 + 0x48), *(int *)(param_1 + 0x28) != 2 || (lVar1 != 0)))) &&
     (0 < *(int *)(lVar1 + 8))) {
    return 0 < *(int *)(lVar1 + 0xc);
  }
  return false;
}


// ===== 00153974  FUN_00153974 =====

undefined8 FUN_00153974(long *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  byte bVar7;
  uint3 uVar8;
  undefined8 uVar9;
  long lVar10;
  
  lVar4 = *param_1;
  lVar5 = param_1[1];
  if ((ulong)(lVar5 - lVar4) < 8) {
    return 1;
  }
  *(undefined4 *)((long)param_1 + 0x2c) = 1;
  lVar10 = param_1[4];
  *param_1 = lVar4 + 4;
  lVar2 = lVar4 + 8;
  uVar6 = *(uint *)(lVar10 + lVar4 + 4);
  *param_1 = lVar2;
  if (0x12 < uVar6 + 9) {
    uVar3 = ((ulong)uVar6 & 1) + (ulong)uVar6;
    if (uVar3 <= (ulong)(param_1[2] - lVar2)) {
      if ((ulong)(lVar5 - lVar2) < uVar3) {
        return 1;
      }
      bVar7 = *(byte *)(lVar10 + lVar2);
      *param_1 = lVar4 + 0xc;
      *(uint *)(param_1 + 6) = (uint)bVar7;
      uVar8 = *(uint3 *)(lVar10 + lVar4 + 0xc);
      *param_1 = lVar4 + 0xf;
      uVar6 = uVar8 + 1;
      *(uint *)((long)param_1 + 0x34) = uVar6;
      uVar8 = *(uint3 *)(lVar10 + lVar4 + 0xf);
      *param_1 = lVar4 + 0x12;
      uVar1 = uVar8 + 1;
      *(uint *)(param_1 + 7) = uVar1;
      if (((ulong)uVar6 * (ulong)uVar1 & 0xffffffff00000000) == 0) {
        lVar4 = lVar4 + 0x12 + (ulong)((int)uVar3 - 10);
        *param_1 = lVar4;
        *(undefined4 *)(param_1 + 5) = 1;
        if (7 < (ulong)(param_1[2] - lVar4)) {
          if ((ulong)(lVar5 - lVar4) < 8) {
            return 1;
          }
          uVar9 = FUN_00153e0c();
          return uVar9;
        }
      }
    }
  }
  return 2;
}


// ===== 00153a7c  FUN_00153a7c =====

undefined8 FUN_00153a7c(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  int *piVar9;
  int iVar10;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x34);
    if (((iVar2 < 1) || (iVar3 = *(int *)(param_1 + 0x38), iVar3 < 1)) ||
       (*(int *)(param_1 + 0x3c) < 0)) {
      return 0;
    }
    piVar9 = *(int **)(param_1 + 0x48);
    if (piVar9 == (int *)0x0 && iVar1 == 2) {
      return 0;
    }
    uVar4 = *(uint *)(param_1 + 0x30);
    if ((uVar4 & 0xffffffc1) != 0) {
      return 0;
    }
    if (piVar9 != (int *)0x0) {
      do {
        iVar5 = piVar9[8];
        bVar8 = (uVar4 & 2) != 0;
        while (piVar9[8] == iVar5) {
          if ((!bVar8 && iVar5 != 1) && (bVar8 || 0 < iVar5)) {
            return 0;
          }
          if (piVar9[9] == 0) {
            if (iVar1 == 2) {
              return 0;
            }
            if (((*(long *)(piVar9 + 0x10) != 0) && (*(long *)(piVar9 + 0xc) != 0)) &&
               (*(ulong *)(piVar9 + 10) < *(ulong *)(piVar9 + 0xe))) {
              return 0;
            }
            if (*(long *)(piVar9 + 0x12) != 0) {
              return 0;
            }
            iVar10 = piVar9[2];
            if (0 < iVar10) goto LAB_00153b80;
          }
          else {
            if (*(long *)(piVar9 + 0x10) == 0) {
              if (*(long *)(piVar9 + 0xc) == 0) {
                return 0;
              }
            }
            else if (*(ulong *)(piVar9 + 10) < *(ulong *)(piVar9 + 0xe)) {
              return 0;
            }
            iVar10 = piVar9[2];
            if (iVar10 < 1) {
              return 0;
            }
            if (piVar9[3] < 1) {
              return 0;
            }
LAB_00153b80:
            iVar6 = piVar9[3];
            if (0 < iVar6) {
              iVar7 = *piVar9;
              if ((uVar4 >> 1 & 1) == 0) {
                if (iVar7 != 0) {
                  return 0;
                }
                if (iVar6 != iVar3) {
                  return 0;
                }
                if (iVar10 != iVar2) {
                  return 0;
                }
                if (piVar9[1] != 0) {
                  return 0;
                }
              }
              else {
                if (iVar7 < 0) {
                  return 0;
                }
                if (piVar9[1] < 0) {
                  return 0;
                }
                if (iVar2 < iVar7 + iVar10) {
                  return 0;
                }
                if (iVar3 < piVar9[1] + iVar6) {
                  return 0;
                }
              }
            }
          }
          piVar9 = *(int **)(piVar9 + 0x12);
          if (piVar9 == (int *)0x0) {
            return 1;
          }
        }
      } while( true );
    }
  }
  return 1;
}


// ===== 00153bf4  FUN_00153bf4 =====

undefined1 FUN_00153bf4(undefined4 param_1,ulong param_2,long *param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  bool bVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  bool bVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined1 uVar17;
  ulong uVar18;
  undefined8 local_90;
  uint local_88;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  lVar14 = *param_3;
  lVar15 = param_3[1];
  uVar17 = 1;
  if ((7 < (ulong)(lVar15 - lVar14)) && ((param_2 & 0xffffffff) <= (ulong)(lVar15 - lVar14))) {
    bVar12 = false;
    bVar8 = false;
    do {
      lVar16 = param_3[4];
      lVar1 = lVar14 + 8;
      iVar11 = *(int *)(lVar16 + lVar14);
      *param_3 = lVar14 + 4;
      uVar5 = *(uint *)(lVar16 + lVar14 + 4);
      *param_3 = lVar1;
      if (0xfffffff6 < uVar5) {
LAB_00153dc4:
        uVar17 = 2;
        break;
      }
      lVar13 = param_3[2];
      uVar18 = lVar15 - lVar1;
      uVar2 = ((ulong)uVar5 & 1) + (ulong)uVar5;
      uVar4 = uVar18;
      if (uVar2 <= uVar18) {
        uVar4 = uVar2;
      }
      if ((ulong)(lVar13 - lVar1) < uVar2) goto LAB_00153dc4;
      bVar9 = uVar18 < uVar2;
      lVar15 = uVar4 + 8;
      uVar17 = bVar9;
      if (iVar11 == 0x20385056) {
LAB_00153d04:
        if (bVar12) {
LAB_00153d08:
          bVar7 = false;
          goto LAB_00153d0c;
        }
        iVar11 = WebPGetFeaturesInternal(lVar16 + lVar14,lVar15,&local_90,0x209);
        if ((uVar18 < uVar2) && (iVar11 == 7)) {
          uVar17 = 1;
          break;
        }
        if (iVar11 != 0) goto LAB_00153dc4;
        *(long *)(param_4 + 0x28) = lVar14;
        *(long *)(param_4 + 0x30) = lVar15;
        lVar14 = *param_3;
        *(uint *)(param_4 + 0x10) = *(uint *)(param_4 + 0x10) | local_88;
        lVar14 = lVar14 + uVar4;
        lVar15 = param_3[2];
        *(undefined8 *)(param_4 + 8) = local_90;
        *(undefined4 *)(param_4 + 0x20) = param_1;
        *(uint *)(param_4 + 0x24) = (uint)(uVar2 <= uVar18);
        bVar7 = true;
        bVar12 = true;
        *param_3 = lVar14;
        if (lVar14 == lVar15) break;
      }
      else {
        if (iVar11 == 0x4c385056) {
          if (bVar8) goto LAB_00153dc4;
          goto LAB_00153d04;
        }
        if ((iVar11 != 0x48504c41) || (bVar8)) goto LAB_00153d08;
        bVar7 = true;
        *(long *)(param_4 + 0x38) = lVar14;
        *(long *)(param_4 + 0x40) = lVar15;
        lVar14 = uVar4 + lVar1;
        *(undefined4 *)(param_4 + 0x10) = 1;
        bVar8 = true;
        *(undefined4 *)(param_4 + 0x20) = param_1;
LAB_00153d0c:
        *param_3 = lVar14;
        if (lVar14 == lVar13) break;
      }
      lVar15 = param_3[1];
      bVar10 = (ulong)(lVar15 - lVar14) < 8;
      uVar17 = bVar10 || bVar9;
      bVar3 = false;
      if (!bVar10 && !bVar9) {
        bVar3 = bVar7;
      }
    } while (bVar3);
  }
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return uVar17;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00153e0c  FUN_00153e0c =====

ulong FUN_00153e0c(long *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  ushort uVar12;
  uint3 uVar13;
  bool bVar14;
  uint uVar15;
  long *plVar16;
  uint *puVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  
  uVar5 = *(uint *)(param_1 + 6);
  lVar21 = *param_1;
  bVar14 = false;
  do {
    lVar20 = param_1[4];
    iVar7 = *(int *)(lVar20 + lVar21);
    *param_1 = lVar21 + 4;
    uVar15 = *(uint *)(lVar20 + lVar21 + 4);
    uVar22 = (ulong)uVar15;
    lVar18 = lVar21 + 8;
    *param_1 = lVar18;
    if (0xfffffff6 < uVar15) {
      return 2;
    }
    uVar3 = (uVar22 & 1) + uVar22;
    if ((ulong)(param_1[2] - lVar18) < uVar3) {
      return 2;
    }
    uVar15 = (uint)uVar3;
    if (iVar7 < 0x48504c41) {
      if (iVar7 < 0x46495845) {
        if (iVar7 == 0x20385056) {
LAB_00153f18:
          if (bVar14) {
            return 2;
          }
          if ((uVar5 & 2) != 0) {
            return 2;
          }
          *param_1 = lVar21;
          uVar22 = FUN_001537fc(param_1);
          bVar14 = false;
          goto LAB_00154044;
        }
        if (iVar7 != 0x20504d58) goto LAB_00153ff4;
        lVar20 = 2;
LAB_00153f78:
        if ((ulong)(param_1[1] - lVar18) < uVar3) goto LAB_00154004;
        if ((*(uint *)(param_1 + 6) >> lVar20 & 1) != 0) goto LAB_0015400c;
        goto LAB_00154038;
      }
      if (iVar7 == 0x46495845) {
        lVar20 = 3;
        goto LAB_00153f78;
      }
      if (iVar7 != 0x464d4e41) goto LAB_00153ff4;
      if (!bVar14) {
        return 2;
      }
      if (uVar15 < 0x10) {
LAB_00153f68:
        bVar14 = true;
        uVar22 = 2;
      }
      else if ((ulong)(param_1[1] - lVar18) < 0x10) {
        uVar22 = 1;
        bVar14 = true;
      }
      else {
        uVar6 = *(uint *)(param_1 + 6);
        bVar14 = true;
        puVar17 = (uint *)WebPSafeCalloc(1,0x50);
        if (puVar17 == (uint *)0x0) {
          uVar22 = 2;
        }
        else {
          lVar21 = param_1[4];
          lVar18 = *param_1;
          pbVar4 = (byte *)(lVar21 + lVar18);
          bVar9 = *pbVar4;
          bVar10 = pbVar4[1];
          bVar11 = pbVar4[2];
          *param_1 = lVar18 + 3;
          *puVar17 = (uint)bVar9 << 1 | (uint)bVar10 << 9 | (uint)bVar11 << 0x11;
          pbVar4 = (byte *)(lVar21 + lVar18 + 3);
          bVar9 = *pbVar4;
          bVar10 = pbVar4[1];
          bVar11 = pbVar4[2];
          *param_1 = lVar18 + 6;
          puVar17[1] = (uint)bVar9 << 1 | (uint)bVar10 << 9 | (uint)bVar11 << 0x11;
          uVar13 = *(uint3 *)(lVar21 + lVar18 + 6);
          *param_1 = lVar18 + 9;
          uVar1 = uVar13 + 1;
          puVar17[2] = uVar1;
          uVar13 = *(uint3 *)(lVar21 + lVar18 + 9);
          *param_1 = lVar18 + 0xc;
          uVar2 = uVar13 + 1;
          puVar17[3] = uVar2;
          uVar13 = *(uint3 *)(lVar21 + lVar18 + 0xc);
          *param_1 = lVar18 + 0xf;
          puVar17[5] = (uint)uVar13;
          bVar9 = *(byte *)(lVar21 + lVar18 + 0xf);
          *param_1 = lVar18 + 0x10;
          puVar17[6] = bVar9 & 1;
          puVar17[7] = bVar9 >> 1 & 1;
          if (((ulong)uVar1 * (ulong)uVar2 & 0xffffffff00000000) != 0) {
            WebPSafeFree(puVar17);
            goto LAB_00153f68;
          }
          uVar22 = FUN_00153bf4(*(int *)((long)param_1 + 0x44) + 1,uVar15 - 0x10,param_1,puVar17);
          if ((uint)uVar22 == 2) {
LAB_001541c4:
            uVar3 = 2;
          }
          else {
            uVar1 = 2;
            if ((ulong)(*param_1 - (lVar18 + 0x10)) <= (ulong)(uVar15 - 0x10)) {
              uVar1 = (uint)uVar22;
            }
            uVar3 = (ulong)uVar1;
            if ((uVar1 != 2) && ((uVar6 >> 1 & 1) != 0)) {
              if (0 < (int)puVar17[8]) {
                lVar21 = *(long *)param_1[10];
                if ((lVar21 == 0) || (*(int *)(lVar21 + 0x24) != 0)) {
                  *(long *)param_1[10] = (long)puVar17;
                  iVar7 = *(int *)((long)param_1 + 0x44);
                  bVar14 = true;
                  puVar17 = puVar17 + 0x12;
                  puVar17[0] = 0;
                  puVar17[1] = 0;
                  param_1[10] = (long)puVar17;
                  *(int *)((long)param_1 + 0x44) = iVar7 + 1;
                  goto LAB_00154044;
                }
                goto LAB_001541c4;
              }
              uVar3 = uVar22 & 0xffffffff;
            }
          }
          uVar22 = uVar3;
          WebPSafeFree(puVar17);
          bVar14 = true;
        }
      }
    }
    else {
      if (iVar7 < 0x4d494e41) {
        if ((iVar7 == 0x48504c41) || (iVar7 == 0x4c385056)) goto LAB_00153f18;
      }
      else {
        if (iVar7 == 0x4d494e41) {
          if (uVar15 < 6) {
            return 2;
          }
          if (uVar3 <= (ulong)(param_1[1] - lVar18)) {
            if (!bVar14) {
              uVar8 = *(undefined4 *)(lVar20 + lVar18);
              *param_1 = lVar21 + 0xc;
              uVar22 = 0;
              *(undefined4 *)(param_1 + 8) = uVar8;
              bVar14 = true;
              uVar12 = *(ushort *)(lVar20 + lVar21 + 0xc);
              *param_1 = lVar21 + (ulong)(uVar15 - 6) + 0xe;
              *(uint *)((long)param_1 + 0x3c) = (uint)uVar12;
              goto LAB_00154044;
            }
            if ((ulong)(param_1[1] - lVar18) < uVar3) goto LAB_00154004;
            goto LAB_00154038;
          }
          goto LAB_00154004;
        }
        if (iVar7 == 0x50434349) {
          lVar20 = 5;
          goto LAB_00153f78;
        }
        if (iVar7 == 0x58385056) {
          return 2;
        }
      }
LAB_00153ff4:
      if ((ulong)(param_1[1] - lVar18) < uVar3) {
LAB_00154004:
        uVar22 = 1;
      }
      else {
LAB_0015400c:
        plVar16 = (long *)WebPSafeCalloc(1,0x18);
        if (plVar16 == (long *)0x0) {
          return 2;
        }
        plVar19 = (long *)param_1[0xc];
        *plVar16 = lVar21;
        plVar16[1] = uVar22 + 8;
        lVar18 = *param_1;
        *plVar19 = (long)plVar16;
        plVar16[2] = 0;
        param_1[0xc] = (long)(plVar16 + 2);
LAB_00154038:
        uVar22 = 0;
        *param_1 = lVar18 + uVar3;
      }
    }
LAB_00154044:
    lVar21 = *param_1;
    if (lVar21 == param_1[2]) {
      return uVar22;
    }
    uVar15 = (uint)uVar22;
    if ((ulong)(param_1[1] - lVar21) < 8) {
      uVar15 = 1;
    }
    if (uVar15 != 0) {
      return (ulong)uVar15;
    }
  } while( true );
}


// ===== 00154264  FUN_00154264 =====

void FUN_00154264(void)

{
  return;
}


// ===== 0015426c  FUN_0015426c =====

void FUN_0015426c(long *param_1)

{
  long lVar1;
  
  if ((param_1[2] != 0) && (lVar1 = FUN_00171300(0xffffffffffffffff), lVar1 != 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001542c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1);
  return;
}


// ===== 001542c4  FUN_001542c4 =====

void FUN_001542c4(void)

{
  __cxa_begin_catch();
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


// ===== 001542d8  FUN_001542d8 =====

undefined8 FUN_001542d8(void)

{
  return 0;
}


// ===== 001542e4  FUN_001542e4 =====

void FUN_001542e4(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  vfprintf((FILE *)(PTR___sF_0017d7f0 + 0x130),param_1,&local_80);
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


// ===== 001543c0  __cxa_guard_acquire =====

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
    iVar4 = pthread_mutex_lock((pthread_mutex_t *)&DAT_001826c8);
    if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00154b08("%s failed to acquire mutex","__cxa_guard_acquire");
    }
    bVar1 = param_1[1];
                    /* try { // try from 00154418 to 0015441f has its CatchHandler @ 001544d4 */
    if (((bVar1 >> 1 & 1) != 0) &&
       (iVar4 = *(int *)(param_1 + 4), unaff_x21 = syscall(0xb2), iVar4 == (int)unaff_x21)) {
                    /* try { // try from 001544c8 to 001544d3 has its CatchHandler @ 001544d4 */
                    /* WARNING: Subroutine does not return */
      FUN_00154b08(
                  "__cxa_guard_acquire detected recursive initialization: do you have a function-local static variable whose initialization depends on that function?"
                  );
    }
    while( true ) {
      uVar6 = (undefined4)unaff_x21;
      bVar2 = param_1[1];
      if ((bVar2 >> 1 & 1) == 0) break;
      param_1[1] = bVar2 | 4;
                    /* try { // try from 0015443c to 00154447 has its CatchHandler @ 001544dc */
      pthread_cond_wait((pthread_cond_t *)&DAT_001826f0,(pthread_mutex_t *)&DAT_001826c8);
    }
    if (bVar2 != 1) {
      if ((bVar1 >> 1 & 1) == 0) {
                    /* try { // try from 00154458 to 0015445f has its CatchHandler @ 001544d4 */
        lVar5 = syscall(0xb2);
        uVar6 = (undefined4)lVar5;
      }
      *(undefined4 *)(param_1 + 4) = uVar6;
      param_1[1] = '\x02';
    }
    iVar4 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_001826c8);
    if (iVar4 != 0) {
                    /* try { // try from 001544b4 to 001544c7 has its CatchHandler @ 001544d8 */
                    /* WARNING: Subroutine does not return */
      FUN_00154b08("%s failed to release mutex","__cxa_guard_acquire");
    }
    bVar3 = bVar2 != 1;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}


// ===== 001544f0  __cxa_guard_release =====

void __cxa_guard_release(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  
  *param_1 = 1;
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)&DAT_001826c8);
  if (iVar2 == 0) {
    bVar1 = *(byte *)((long)param_1 + 1);
    *(undefined1 *)((long)param_1 + 1) = 1;
                    /* try { // try from 00154528 to 00154533 has its CatchHandler @ 00154594 */
    iVar2 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_001826c8);
    if (iVar2 != 0) {
                    /* try { // try from 0015456c to 0015457f has its CatchHandler @ 00154594 */
                    /* WARNING: Subroutine does not return */
      FUN_00154b08("%s failed to release mutex","__cxa_guard_release");
    }
    if (((bVar1 >> 2 & 1) == 0) ||
       (iVar2 = pthread_cond_broadcast((pthread_cond_t *)&DAT_001826f0), iVar2 == 0)) {
      return;
    }
    pcVar3 = "%s failed to broadcast";
  }
  else {
    pcVar3 = "%s failed to acquire mutex";
  }
                    /* WARNING: Subroutine does not return */
  FUN_00154b08(pcVar3,"__cxa_guard_release");
}


// ===== 00154598  __cxa_guard_abort =====

void __cxa_guard_abort(long param_1)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)&DAT_001826c8);
  if (iVar2 == 0) {
    bVar1 = *(byte *)(param_1 + 1);
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined1 *)(param_1 + 1) = 0;
                    /* try { // try from 001545c8 to 001545d3 has its CatchHandler @ 00154630 */
    iVar2 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_001826c8);
    if (iVar2 != 0) {
                    /* try { // try from 00154608 to 0015461b has its CatchHandler @ 00154630 */
                    /* WARNING: Subroutine does not return */
      FUN_00154b08("%s failed to release mutex","__cxa_guard_abort");
    }
    if (((bVar1 >> 2 & 1) == 0) ||
       (iVar2 = pthread_cond_broadcast((pthread_cond_t *)&DAT_001826f0), iVar2 == 0)) {
      return;
    }
    pcVar3 = "%s failed to broadcast";
  }
  else {
    pcVar3 = "%s failed to acquire mutex";
  }
                    /* WARNING: Subroutine does not return */
  FUN_00154b08(pcVar3,"__cxa_guard_abort");
}


// ===== 00154634  FUN_00154634 =====

void FUN_00154634(undefined8 *param_1)

{
  int iVar1;
  
                    /* try { // try from 00154648 to 00154677 has its CatchHandler @ 00154678 */
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_001826c8);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00154b08("%s failed to release mutex",*param_1);
}


// ===== 0015467c  std::get_unexpected =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::get_unexpected() */

undefined8 std::get_unexpected(void)

{
  return *(undefined8 *)PTR___cxa_unexpected_handler_0017d800;
}


// ===== 00154690  std::terminate =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::terminate() */

void std::terminate(void)

{
  long *plVar1;
  ulong uVar2;
  long unaff_x19;
  
                    /* try { // try from 00154698 to 001546bf has its CatchHandler @ 001546cc */
  plVar1 = (long *)__cxa_get_globals_fast();
  if ((plVar1 != (long *)0x0) && (unaff_x19 = *plVar1, unaff_x19 != 0)) goto LAB_001546b8;
  do {
    FUN_0015471c(*(undefined8 *)PTR___cxa_terminate_handler_0017d808);
LAB_001546b8:
    uVar2 = FUN_0016f0f8(unaff_x19 + 0x60);
  } while ((uVar2 & 1) == 0);
  FUN_0015471c(*(undefined8 *)(unaff_x19 + 0x28));
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00154698 with catch @ 001546cc
                        */
  FUN_001542c4();
}


// ===== 001546d0  FUN_001546d0 =====

void FUN_001546d0(code *param_1)

{
  (*param_1)();
                    /* WARNING: Subroutine does not return */
  FUN_00154b08("unexpected_handler unexpectedly returned");
}


// ===== 001546ec  std::unexpected =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::unexpected() */

undefined8 std::unexpected(void)

{
  FUN_001546d0(*(undefined8 *)PTR___cxa_unexpected_handler_0017d800);
  return *(undefined8 *)PTR___cxa_terminate_handler_0017d808;
}


// ===== 00154708  std::get_terminate =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::get_terminate() */

undefined8 std::get_terminate(void)

{
  return *(undefined8 *)PTR___cxa_terminate_handler_0017d808;
}


// ===== 0015471c  FUN_0015471c =====

void FUN_0015471c(code *param_1)

{
                    /* try { // try from 00154728 to 00154737 has its CatchHandler @ 00154738 */
  (*param_1)();
                    /* WARNING: Subroutine does not return */
  FUN_00154b08("terminate_handler unexpectedly returned");
}


// ===== 0015474c  std::get_new_handler =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::get_new_handler() */

undefined8 std::get_new_handler(void)

{
  return *(undefined8 *)PTR___cxa_new_handler_0017d810;
}


// ===== 00154760  FUN_00154760 =====

void FUN_00154760(void)

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
    FUN_00154b08("terminating");
  }
  uVar3 = FUN_0016f0f8(lVar6 + 0x60);
  if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00154b08("terminating due to %s foreign exception",PTR_s_uncaught_00181f40);
  }
  lVar4 = FUN_0016f0ec(lVar6 + 0x60);
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
                    /* try { // try from 00154828 to 00154837 has its CatchHandler @ 00154890 */
  uVar3 = (**(code **)(*(long *)PTR_PTR_0017d7f8 + 0x20))(PTR_PTR_0017d7f8,lVar7,&local_18);
  puVar1 = PTR_s_uncaught_00181f40;
  if ((uVar3 & 1) != 0) {
    uVar5 = (**(code **)(*local_18 + 0x10))();
                    /* try { // try from 00154858 to 0015486b has its CatchHandler @ 00154884 */
                    /* WARNING: Subroutine does not return */
    FUN_00154b08("terminating due to %s exception of type %s: %s",puVar1,lVar6,uVar5);
  }
                    /* try { // try from 00154874 to 00154883 has its CatchHandler @ 00154890 */
                    /* WARNING: Subroutine does not return */
  FUN_00154b08("terminating due to %s exception of type %s",PTR_s_uncaught_00181f40,lVar6);
}


// ===== 001548ac  FUN_001548ac =====

void FUN_001548ac(void)

{
  PTR_s_uncaught_00181f40 = s_unexpected_001120fd;
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


// ===== 001548cc  std::set_unexpected =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::set_unexpected(void (*)()) */

void std::set_unexpected(_func_void *param_1)

{
  code *pcVar1;
  
  pcVar1 = FUN_001548ac;
  if (param_1 != (_func_void *)0x0) {
    pcVar1 = param_1;
  }
  FUN_001712a0(pcVar1,PTR___cxa_unexpected_handler_0017d800);
  return;
}


// ===== 00154900  std::set_terminate =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::set_terminate(void (*)()) */

void std::set_terminate(_func_void *param_1)

{
  code *pcVar1;
  
  pcVar1 = FUN_00154760;
  if (param_1 != (_func_void *)0x0) {
    pcVar1 = param_1;
  }
  FUN_001712a0(pcVar1,PTR___cxa_terminate_handler_0017d808);
  return;
}


// ===== 00154934  std::set_new_handler =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::set_new_handler(void (*)()) */

void std::set_new_handler(_func_void *param_1)

{
  FUN_001712a0(param_1,PTR___cxa_new_handler_0017d810);
  return;
}


// ===== 00154958  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00154960  FUN_00154960 =====

void FUN_00154960(void)

{
  return;
}


// ===== 00154968  __cxa_get_globals =====

void __cxa_get_globals(void)

{
  __emutls_get_address(&DAT_00181f48);
  return;
}


// ===== 0015498c  __cxa_get_globals_fast =====

void __cxa_get_globals_fast(void)

{
  __emutls_get_address(&DAT_00181f48);
  return;
}


// ===== 001549b0  __cxa_pure_virtual =====

void __cxa_pure_virtual(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00154b08("Pure virtual function called!");
}


// ===== 001549c8  __cxa_deleted_virtual =====

void __cxa_deleted_virtual(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00154b08("Deleted virtual function called!");
}


// ===== 001549e0  std::exception::~exception =====

/* std::exception::~exception() */

void __thiscall std::exception::~exception(exception *this)

{
  return;
}


// ===== 001549e8  std::exception::~exception =====

/* std::exception::~exception() */

void __thiscall std::exception::~exception(exception *this)

{
  ~exception(this);
  operator_delete(this);
  return;
}


// ===== 00154a14  std::exception::what =====

/* std::exception::what() const */

char * std::exception::what(void)

{
  return "std::exception";
}


// ===== 00154a24  std::bad_exception::~bad_exception =====

/* std::bad_exception::~bad_exception() */

void __thiscall std::bad_exception::~bad_exception(bad_exception *this)

{
  exception::~exception((exception *)this);
  operator_delete(this);
  return;
}


// ===== 00154a50  std::bad_exception::what =====

/* std::bad_exception::what() const */

char * std::bad_exception::what(void)

{
  return "std::bad_exception";
}


// ===== 00154a60  std::bad_alloc::bad_alloc =====

/* std::bad_alloc::bad_alloc() */

void __thiscall std::bad_alloc::bad_alloc(bad_alloc *this)

{
  *(undefined **)this = PTR_vtable_0017d820 + 0x10;
  return;
}


// ===== 00154a78  std::bad_alloc::~bad_alloc =====

/* std::bad_alloc::~bad_alloc() */

void __thiscall std::bad_alloc::~bad_alloc(bad_alloc *this)

{
  exception::~exception((exception *)this);
  operator_delete(this);
  return;
}


// ===== 00154aa4  std::bad_alloc::what =====

/* std::bad_alloc::what() const */

char * std::bad_alloc::what(void)

{
  return "std::bad_alloc";
}


// ===== 00154ab4  std::bad_array_new_length::bad_array_new_length =====

/* std::bad_array_new_length::bad_array_new_length() */

void __thiscall std::bad_array_new_length::bad_array_new_length(bad_array_new_length *this)

{
  *(undefined **)this = PTR_vtable_0017d830 + 0x10;
  return;
}


// ===== 00154acc  std::bad_array_new_length::~bad_array_new_length =====

/* std::bad_array_new_length::~bad_array_new_length() */

void __thiscall std::bad_array_new_length::~bad_array_new_length(bad_array_new_length *this)

{
  exception::~exception((exception *)this);
  operator_delete(this);
  return;
}


// ===== 00154af8  std::bad_array_new_length::what =====

/* std::bad_array_new_length::what() const */

char * std::bad_array_new_length::what(void)

{
  return "bad_array_new_length";
}


// ===== 00154b08  FUN_00154b08 =====

void FUN_00154b08(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  
  puVar1 = PTR___sF_0017d7f0;
  local_e8 = param_2;
  uStack_e0 = param_3;
  local_d8 = param_4;
  uStack_d0 = param_5;
  local_c8 = param_6;
  uStack_c0 = param_7;
  local_b8 = param_8;
  fwrite("libc++abi: ",0xb,1,(FILE *)(PTR___sF_0017d7f0 + 0x130));
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


// ===== 00154c0c  std::type_info::~type_info =====

void __thiscall std::type_info::~type_info(type_info *this)

{
  ~type_info(this);
  return;
}


// ===== 00154c14  FUN_00154c14 =====

void FUN_00154c14(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x154c1c);
  (*pcVar1)();
}


// ===== 00154c1c  FUN_00154c1c =====

void FUN_00154c1c(void)

{
  return;
}


// ===== 00154c24  FUN_00154c24 =====

void FUN_00154c24(void)

{
  return;
}


// ===== 00154c2c  FUN_00154c2c =====

void FUN_00154c2c(type_info *param_1)

{
  std::type_info::~type_info(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00154c58  FUN_00154c58 =====

void FUN_00154c58(type_info *param_1)

{
  std::type_info::~type_info(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00154c84  FUN_00154c84 =====

void FUN_00154c84(type_info *param_1)

{
  std::type_info::~type_info(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00154cb0  FUN_00154cb0 =====

void FUN_00154cb0(type_info *param_1)

{
  std::type_info::~type_info(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00154cdc  FUN_00154cdc =====

void FUN_00154cdc(type_info *param_1)

{
  std::type_info::~type_info(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00154d08  FUN_00154d08 =====

void FUN_00154d08(type_info *param_1)

{
  std::type_info::~type_info(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00154d34  FUN_00154d34 =====

void FUN_00154d34(type_info *param_1)

{
  std::type_info::~type_info(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00154d60  FUN_00154d60 =====

void FUN_00154d60(type_info *param_1)

{
  std::type_info::~type_info(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00154d8c  FUN_00154d8c =====

void FUN_00154d8c(type_info *param_1)

{
  std::type_info::~type_info(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00154db8  FUN_00154db8 =====

void FUN_00154db8(type_info *param_1)

{
  std::type_info::~type_info(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00154de4  FUN_00154de4 =====

bool FUN_00154de4(long param_1,long param_2)

{
  return *(long *)(param_1 + 8) == *(long *)(param_2 + 8);
}


// ===== 00154dfc  FUN_00154dfc =====

undefined8 FUN_00154dfc(void)

{
  return 0;
}


// ===== 00154e08  FUN_00154e08 =====

undefined8 FUN_00154e08(void)

{
  return 0;
}


// ===== 00154e14  FUN_00154e14 =====

bool FUN_00154e14(long param_1,long param_2)

{
  return *(long *)(param_1 + 8) == *(long *)(param_2 + 8);
}


// ===== 00154e2c  FUN_00154e2c =====

long * FUN_00154e2c(long param_1,long param_2,undefined8 *param_3)

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
    local_70 = (long *)__dynamic_cast(param_2,PTR_PTR_0017d860,PTR_PTR_0017d868,0);
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


// ===== 00154eec  __dynamic_cast =====

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
      if (param_4 == -2) goto LAB_00155058;
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
LAB_00155058:
    lVar4 = 0;
  }
  return lVar4;
}


// ===== 001550d4  FUN_001550d4 =====

void FUN_001550d4(long param_1,long param_2,long param_3,undefined4 param_4)

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


// ===== 00155148  FUN_00155148 =====

void FUN_00155148(long param_1,long param_2,long param_3,undefined4 param_4)

{
  if (*(long *)(param_1 + 8) != *(long *)(*(long *)(param_2 + 0x10) + 8)) {
                    /* WARNING: Could not recover jumptable at 0x0015516c. Too many branches */
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


// ===== 001551c8  FUN_001551c8 =====

void FUN_001551c8(long param_1,long param_2,long *param_3,undefined4 param_4)

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


// ===== 00155388  FUN_00155388 =====

bool FUN_00155388(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x10) & 0x18) == 0) {
    if (param_2 == 0) {
      return false;
    }
    lVar2 = __dynamic_cast(param_2,PTR_PTR_0017d860,PTR_PTR_0017d870,0);
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


// ===== 0015544c  FUN_0015544c =====

/* WARNING: Type propagation algorithm not settling */

ulong FUN_0015544c(long param_1,long param_2,long *param_3)

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
  if (__s2 == PTR_typeinfo_name_0017d878) {
    *param_3 = 0;
    return 1;
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 0x18) == 0) {
    lVar5 = __dynamic_cast(param_2,PTR_PTR_0017d860,PTR_PTR_0017d870,0);
    if (lVar5 == 0) goto LAB_00155508;
    if ((*(byte *)(lVar5 + 0x10) & 0x18) == 0) {
      if (*(char **)(param_1 + 8) != __s2) goto LAB_00155508;
      goto LAB_001554ac;
    }
  }
  if ((param_1 == param_2) || (iVar4 = strcmp(*(char **)(param_1 + 8),__s2), iVar4 == 0)) {
LAB_001554ac:
    if ((long *)*param_3 == (long *)0x0) {
      return 1;
    }
    *param_3 = *(long *)*param_3;
    return 1;
  }
LAB_00155508:
  lVar5 = __dynamic_cast(param_2,PTR_PTR_0017d860,PTR_PTR_0017d880,0);
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
    if (*(undefined **)(lVar9 + 8) == PTR_typeinfo_name_0017d888) {
      lVar5 = __dynamic_cast(lVar5,PTR_PTR_0017d860,PTR_PTR_0017d890,0);
      return (ulong)(lVar5 == 0);
    }
    lVar6 = __dynamic_cast(lVar9,PTR_PTR_0017d860,PTR_PTR_0017d880,0);
    if (lVar6 == 0) {
      lVar6 = __dynamic_cast(lVar9,PTR_PTR_0017d860,PTR_PTR_0017d898,0);
      if (lVar6 == 0) {
        local_80 = __dynamic_cast(lVar9,PTR_PTR_0017d860,PTR_PTR_0017d868,0);
        if (local_80 == 0) {
          return 0;
        }
        local_90 = (long *)__dynamic_cast(lVar5,PTR_PTR_0017d860,PTR_PTR_0017d868,0);
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
        uVar7 = FUN_00155828(lVar6,lVar5);
        return uVar7;
      }
    }
    else if ((uVar2 & 1) != 0) {
      uVar7 = FUN_00155704(lVar6,lVar5);
      return uVar7;
    }
  }
  return 0;
}


// ===== 00155704  FUN_00155704 =====

undefined8 FUN_00155704(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar2 = PTR_PTR_0017d880;
  puVar1 = PTR_PTR_0017d860;
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
      lVar3 = __dynamic_cast(lVar5,PTR_PTR_0017d860,PTR_PTR_0017d898,0);
      if (lVar3 == 0) {
        return 0;
      }
      uVar4 = FUN_00155828(lVar3,param_2);
      return uVar4;
    }
  }
  return 1;
}


// ===== 00155828  FUN_00155828 =====

ulong FUN_00155828(long param_1,long param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar1 = __dynamic_cast(param_2,PTR_PTR_0017d860,PTR_PTR_0017d898,0);
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


// ===== 001558e8  FUN_001558e8 =====

bool FUN_001558e8(long param_1,long param_2,undefined8 *param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  char *__s2;
  
  __s2 = *(char **)(param_2 + 8);
  if (__s2 == PTR_typeinfo_name_0017d878) {
    if ((*(long *)(param_1 + 0x18) == 0) ||
       (lVar3 = __dynamic_cast(*(long *)(param_1 + 0x18),PTR_PTR_0017d860,PTR_PTR_0017d890,0),
       lVar3 == 0)) {
      puVar4 = &DAT_00114ad8;
    }
    else {
      puVar4 = &DAT_00114ac8;
    }
    *param_3 = puVar4;
    return true;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x18) == 0) {
    lVar3 = __dynamic_cast(param_2,PTR_PTR_0017d860,PTR_PTR_0017d870,0);
    if (lVar3 == 0) goto LAB_001559b8;
    if ((*(byte *)(lVar3 + 0x10) & 0x18) == 0) {
      if (*(char **)(param_1 + 8) == __s2) {
        return true;
      }
      goto LAB_001559b8;
    }
  }
  if (param_1 == param_2) {
    return true;
  }
  iVar2 = strcmp(*(char **)(param_1 + 8),__s2);
  if (iVar2 == 0) {
    return true;
  }
LAB_001559b8:
  lVar3 = __dynamic_cast(param_2,PTR_PTR_0017d860,PTR_PTR_0017d898,0);
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


// ===== 00155a88  FUN_00155a88 =====

void FUN_00155a88(long param_1,long *param_2,long *param_3,int param_4,uint param_5)

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
LAB_00155b68:
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
LAB_00155afc:
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
                  goto LAB_00155dd0;
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
LAB_00155dd0:
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
      goto LAB_00155b68;
      goto LAB_00155afc;
    }
  }
  if (((long *)param_2[1] == param_3) && (*(int *)((long)param_2 + 0x34) != 1)) {
    *(int *)((long)param_2 + 0x34) = param_4;
  }
  return;
}


// ===== 00155e38  FUN_00155e38 =====

void FUN_00155e38(long param_1,long *param_2,long param_3,ulong param_4,uint param_5)

{
  int iVar1;
  long lVar2;
  char *__s1;
  
  lVar2 = param_2[2];
  if ((param_5 & 1) == 0) {
    if (*(long *)(param_1 + 8) != *(long *)(lVar2 + 8)) {
      if (*(long *)(param_1 + 8) != *(long *)(*param_2 + 8)) {
LAB_00155f38:
                    /* WARNING: Could not recover jumptable at 0x00155f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(param_1 + 0x10) + 0x30))
                  (*(long **)(param_1 + 0x10),param_2,param_3,param_4,param_5 & 1);
        return;
      }
LAB_00155eac:
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
      goto LAB_00155f38;
      goto LAB_00155eac;
    }
  }
  if ((param_2[1] == param_3) && (*(int *)((long)param_2 + 0x34) != 1)) {
    *(int *)((long)param_2 + 0x34) = (int)param_4;
    return;
  }
  return;
}


// ===== 00156028  FUN_00156028 =====

void FUN_00156028(long param_1,long *param_2,long param_3,int param_4,uint param_5)

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
LAB_001560c8:
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
      goto LAB_001560c8;
    }
  }
  if ((param_2[1] == param_3) && (*(int *)((long)param_2 + 0x34) != 1)) {
    *(int *)((long)param_2 + 0x34) = param_4;
    return;
  }
  return;
}


// ===== 0015618c  FUN_0015618c =====

void FUN_0015618c(long param_1,long param_2,long param_3,long *param_4,int param_5,uint param_6)

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
    if (*(long *)(param_1 + 8) != *(long *)(lVar10 + 8)) goto LAB_0015622c;
  }
  else if ((lVar10 != param_1) &&
          (iVar9 = strcmp(*(char **)(param_1 + 8),*(char **)(lVar10 + 8)), iVar9 != 0)) {
LAB_0015622c:
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
            goto joined_r0x00156344;
          }
        }
        else {
          if (*(int *)(param_2 + 0x30) == 1) break;
          bVar6 = *(byte *)(param_1 + 0x10) >> 1;
joined_r0x00156344:
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
      goto LAB_001563b8;
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
LAB_001563b8:
  *(undefined1 *)(param_2 + 0x4e) = 1;
  return;
}


// ===== 001563e0  FUN_001563e0 =====

void FUN_001563e0(long param_1,long param_2,long param_3,long param_4,int param_5,ulong param_6)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0x10);
  if ((param_6 & 1) == 0) {
    if (*(long *)(param_1 + 8) != *(long *)(lVar2 + 8)) goto LAB_00156490;
  }
  else if ((lVar2 != param_1) &&
          (iVar1 = strcmp(*(char **)(param_1 + 8),*(char **)(lVar2 + 8)), iVar1 != 0)) {
LAB_00156490:
                    /* WARNING: Could not recover jumptable at 0x001564b4. Too many branches */
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
        goto LAB_0015651c;
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
LAB_0015651c:
      *(undefined1 *)(param_2 + 0x4e) = 1;
      return;
    }
  }
  return;
}


// ===== 0015653c  FUN_0015653c =====

void FUN_0015653c(long param_1,long param_2,long param_3,long param_4,int param_5,uint param_6)

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


// ===== 00156648  std::type_info::~type_info =====

/* std::type_info::~type_info() */

void __thiscall std::type_info::~type_info(type_info *this)

{
  return;
}


// ===== 00156650  std::type_info::~type_info =====

/* std::type_info::~type_info() */

void __thiscall std::type_info::~type_info(type_info *this)

{
  ~type_info(this);
  operator_delete(this);
  return;
}


// ===== 0015667c  std::bad_cast::bad_cast =====

/* std::bad_cast::bad_cast() */

void __thiscall std::bad_cast::bad_cast(bad_cast *this)

{
  *(undefined **)this = PTR_vtable_0017d850 + 0x10;
  return;
}


// ===== 00156694  std::bad_cast::~bad_cast =====

/* std::bad_cast::~bad_cast() */

void __thiscall std::bad_cast::~bad_cast(bad_cast *this)

{
  exception::~exception((exception *)this);
  return;
}


// ===== 0015669c  std::bad_cast::~bad_cast =====

/* std::bad_cast::~bad_cast() */

void __thiscall std::bad_cast::~bad_cast(bad_cast *this)

{
  ~bad_cast(this);
  operator_delete(this);
  return;
}


// ===== 001566c8  std::bad_cast::what =====

/* std::bad_cast::what() const */

char * std::bad_cast::what(void)

{
  return "std::bad_cast";
}


// ===== 001566d8  std::bad_typeid::bad_typeid =====

/* std::bad_typeid::bad_typeid() */

void __thiscall std::bad_typeid::bad_typeid(bad_typeid *this)

{
  *(undefined **)this = PTR_vtable_0017d858 + 0x10;
  return;
}


// ===== 001566f0  std::bad_typeid::~bad_typeid =====

/* std::bad_typeid::~bad_typeid() */

void __thiscall std::bad_typeid::~bad_typeid(bad_typeid *this)

{
  exception::~exception((exception *)this);
  return;
}


// ===== 001566f8  std::bad_typeid::~bad_typeid =====

/* std::bad_typeid::~bad_typeid() */

void __thiscall std::bad_typeid::~bad_typeid(bad_typeid *this)

{
  ~bad_typeid(this);
  operator_delete(this);
  return;
}


// ===== 00156724  std::bad_typeid::what =====

/* std::bad_typeid::what() const */

char * std::bad_typeid::what(void)

{
  return "std::bad_typeid";
}


// ===== 00156734  __cxa_demangle =====

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
LAB_00156928:
                    /* try { // try from 00156928 to 00156adf has its CatchHandler @ 00156d18 */
    local_13b0 = param_1;
    plVar5 = (long *)FUN_00157a9c(&local_13b0);
    if (local_13a8 == local_13b0) {
LAB_00156bf4:
      if (plVar5 != (long *)0x0) goto LAB_00156bf8;
    }
LAB_0015693c:
    plVar5 = (long *)0x0;
    uVar7 = 0xfffffffe;
  }
  else {
    if (*(short *)param_1 != 0x5a5f) {
      if (sVar4 == 2) goto LAB_00156928;
      if (*(short *)param_1 == 0x5f5f && param_1[2] == 0x5a) {
        lVar9 = 3;
        goto LAB_00156a0c;
      }
      if (sVar4 < 4) goto LAB_00156928;
      if (*(int *)param_1 == 0x5a5f5f5f) {
        lVar9 = 4;
      }
      else {
        if ((sVar4 == 4) || (*(int *)param_1 != 0x5f5f5f5f || param_1[4] != 0x5a))
        goto LAB_00156928;
        lVar9 = 5;
      }
      local_13b0 = param_1 + lVar9;
      plVar5 = (long *)FUN_00156e84(&local_13b0);
      local_13d8 = plVar5;
      if (plVar5 != (long *)0x0) {
        if (((ulong)((long)local_13a8 - (long)local_13b0) < 0xd) ||
           (*(long *)local_13b0 != 0x695f6b636f6c625f ||
            *(long *)(local_13b0 + 5) != 0x656b6f766e695f6b)) goto LAB_0015693c;
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
          if ((bVar1 == 0x5f) && (bVar3)) goto LAB_0015693c;
          pbVar10 = local_13b0;
          if (local_13a8 != pbVar11) {
            if (*pbVar11 != 0x2e) goto LAB_0015693c;
            local_13b0 = local_13a8;
            pbVar10 = local_13b0;
          }
        }
        local_13b0 = pbVar10;
        plVar5 = (long *)FUN_001579e8(&local_13b0,"invocation function for block in ",&local_13d8);
      }
      goto LAB_00156bf4;
    }
    lVar9 = 2;
LAB_00156a0c:
    local_13b0 = param_1 + lVar9;
    plVar6 = (long *)FUN_00156e84(&local_13b0);
    plVar2 = local_80;
    pbVar10 = local_13b0;
    if (plVar6 == (long *)0x0) goto LAB_0015693c;
    lVar9 = (long)local_13a8 - (long)local_13b0;
    plVar5 = plVar6;
    if (lVar9 != 0) {
      if (*local_13b0 != 0x2e) goto LAB_0015693c;
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
      *plVar5 = (long)&PTR_FUN_0017cbe0;
      *(long **)((long)local_80 + lVar8 + 0x20) = plVar6;
      *(byte **)((long)local_80 + lVar8 + 0x28) = pbVar10;
      *(undefined1 *)((long)local_80 + lVar8 + 0x18) = 1;
      *(long *)((long)local_80 + lVar8 + 0x30) = lVar9;
      *(ushort *)((long)local_80 + lVar8 + 0x19) =
           *(ushort *)((long)local_80 + lVar8 + 0x19) & 0xf000 | 0x540;
      local_13b0 = local_13a8;
    }
LAB_00156bf8:
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
                    /* try { // try from 00156cc8 to 00156ce7 has its CatchHandler @ 00156cf0 */
                    /* WARNING: Subroutine does not return */
      FUN_00154b08("%s:%d: %s","out/llvm-project/libcxxabi/src/cxa_demangle.cpp",400,&DAT_00111743);
    }
                    /* try { // try from 00156c38 to 00156c67 has its CatchHandler @ 00156d04 */
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
                    /* try { // try from 00156ce8 to 00156ceb has its CatchHandler @ 00156d04 */
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
      if (local_80 == (long *)0x0) goto LAB_0015697c;
    }
  }
LAB_0015697c:
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


// ===== 00156d2c  FUN_00156d2c =====

void FUN_00156d2c(long param_1)

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
      if (puVar2 == (undefined8 *)0x0) goto LAB_00156d74;
    }
    free(__ptr);
    __ptr = *(undefined8 **)(param_1 + 0x1330);
  }
LAB_00156d74:
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


// ===== 00156dfc  FUN_00156dfc =====

undefined8 FUN_00156dfc(long *param_1,void *param_2,size_t param_3)

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


// ===== 00156e84  FUN_00156e84 =====

undefined8 * FUN_00156e84(long *param_1)

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
  
  FUN_00158e20(auStack_100,param_1);
  auVar7._8_8_ = local_140._8_8_;
  auVar7._0_8_ = local_140._0_8_;
  auVar30._8_8_ = local_140._8_8_;
  auVar30._0_8_ = local_140._0_8_;
  pcVar21 = (char *)*param_1;
  pcVar19 = (char *)param_1[1];
  if (pcVar19 == pcVar21) {
LAB_00156f4c:
    local_120 = (local_120 >> 0x10 & 0xffff) << 0x10;
    local_110 = param_1[0x5b] - param_1[0x5a] >> 3;
    local_118[0] = 0;
    local_108 = '\0';
                    /* try { // try from 00156f74 to 00156f7f has its CatchHandler @ 00157948 */
    puVar13 = (undefined8 *)FUN_00158fd4(param_1,&local_120);
    auVar30._8_8_ = local_140._8_8_;
    auVar30._0_8_ = local_140._0_8_;
    auVar4._8_8_ = local_140._8_8_;
    auVar4._0_8_ = local_140._0_8_;
    local_128 = puVar13;
    if (puVar13 == (undefined8 *)0x0) goto LAB_001577f4;
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
            if (uVar12 == uVar27) goto LAB_001570ec;
            plVar25 = (long *)*puVar22;
            if (plVar25 == (long *)0x0) break;
            lVar24 = *(long *)(lVar16 + uVar27 * 8);
            lVar18 = *plVar25;
            uVar26 = *(ulong *)(lVar24 + 0x10);
          } while (uVar26 < (ulong)(plVar25[1] - lVar18 >> 3));
          if (uVar12 <= uVar27) goto LAB_001570f0;
        }
      }
    }
    else {
      if (uVar12 < local_110) {
                    /* try { // try from 0015785c to 0015787b has its CatchHandler @ 00157948 */
                    /* WARNING: Subroutine does not return */
        FUN_00154b08("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h",0x88,
                     "shrinkToSize() can\'t expand!");
      }
      plVar23 = (long *)(lVar16 + local_110 * 8);
LAB_001570ec:
      param_1[0x5b] = (long)plVar23;
LAB_001570f0:
      pbVar17 = (byte *)*param_1;
      pbVar20 = (byte *)param_1[1];
      local_140 = auVar4;
      if ((pbVar20 == pbVar17) ||
         ((local_140 = auVar30, *pbVar17 - 0x2e < 0x32 &&
          ((1L << ((ulong)(*pbVar17 - 0x2e) & 0x3f) & 0x2000000800001U) != 0)))) goto LAB_001577f4;
      local_130 = 0;
      if (((ulong)((long)pbVar20 - (long)pbVar17) < 0xd) ||
         (*(long *)pbVar17 != 0x6c62616e65396155 || *(long *)(pbVar17 + 5) != 0x4966695f656c6261)) {
        uVar12 = local_120;
joined_r0x00157854:
        local_148 = 0;
        bVar10 = (char)local_120 == '\0';
        local_120 = uVar12;
        if (bVar10) {
          local_148 = 0;
          local_120._1_1_ = (char)(uVar12 >> 8);
          bVar10 = local_120._1_1_ != '\0';
          if (bVar10) {
                    /* try { // try from 0015717c to 00157183 has its CatchHandler @ 001578d0 */
            local_148 = FUN_00157a9c(param_1);
            auVar30 = local_140;
            if (local_148 == 0) goto LAB_001577f0;
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
                    /* try { // try from 0015749c to 001574a3 has its CatchHandler @ 0015790c */
            puVar22 = (undefined8 *)FUN_00157a9c(param_1);
            auVar30._8_8_ = local_140._8_8_;
            auVar30._0_8_ = local_140._0_8_;
            if (puVar22 == (undefined8 *)0x0) goto LAB_001577f0;
            plVar25 = (long *)param_1[3];
            puVar13 = puVar22;
            if ((local_108 != '\0') && (lVar16 == (long)plVar25 - param_1[2] >> 3)) {
              pvVar28 = (void *)param_1[0x266];
              lVar18 = *(long *)((long)pvVar28 + 8);
              puVar14 = (undefined8 *)pvVar28;
              if (lVar18 - 0xfd0U < 0xfffffffffffff010) {
                puVar14 = (undefined8 *)malloc(0x1000);
                if (puVar14 == (undefined8 *)0x0) goto LAB_0015787c;
                lVar18 = 0;
                *puVar14 = pvVar28;
                puVar14[1] = 0;
                param_1[0x266] = (long)puVar14;
              }
              *(long *)((long)puVar14 + 8) = lVar18 + 0x20;
              puVar13 = (undefined8 *)((long)puVar14 + lVar18 + 0x10);
              *puVar13 = &PTR_FUN_0017cb00;
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
                    /* try { // try from 0015788c to 0015788f has its CatchHandler @ 001578e4 */
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
                    /* try { // try from 00157884 to 00157887 has its CatchHandler @ 001578e4 */
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
                    /* try { // try from 001575d8 to 001575e3 has its CatchHandler @ 001578bc */
          auVar30 = FUN_00159c04(param_1,lVar16);
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
                    /* try { // try from 00157618 to 0015761f has its CatchHandler @ 001578a4 */
          local_150 = FUN_0015cce8(param_1);
          *(undefined1 *)((long)param_1 + 0x30a) = uVar3;
          auVar30 = local_140;
          if (local_150 == 0) goto LAB_001577f0;
        }
        puVar13 = (undefined8 *)
                  FUN_00159d60(param_1,&local_148,&local_128,local_140,&local_130,&local_150,
                               (ulong)&local_120 | 4,local_118);
        goto LAB_001577f4;
      }
      lVar16 = param_1[2];
      lVar18 = param_1[3];
      pbVar17 = pbVar17 + 0xd;
      plVar23 = param_1 + 5;
      *param_1 = (long)pbVar17;
      while( true ) {
        if ((pbVar17 != pbVar20) && (*pbVar17 == 0x45)) {
          *param_1 = (long)(pbVar17 + 1);
                    /* try { // try from 0015782c to 00157837 has its CatchHandler @ 00157890 */
          local_140 = FUN_00159c04(param_1,lVar18 - lVar16 >> 3);
          local_130 = FUN_00159b64(param_1,local_140);
          uVar12 = local_120;
          goto joined_r0x00157854;
        }
                    /* try { // try from 00157790 to 00157797 has its CatchHandler @ 00157920 */
        lVar24 = FUN_00159718(param_1);
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
                    /* try { // try from 00157888 to 0015788b has its CatchHandler @ 001578f8 */
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
                    /* try { // try from 00157880 to 00157883 has its CatchHandler @ 001578f8 */
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
        uVar11 = FUN_0015a96c(param_1,&local_120);
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
LAB_0015787c:
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
          *puVar13 = &PTR_FUN_0017a950;
          *(ulong *)((long)puVar22 + lVar16 + 0x30) = uVar12;
          *(undefined1 *)((long)puVar22 + lVar16 + 0x18) = 0x15;
          *(char **)((long)puVar22 + lVar16 + 0x20) = "initializer for module ";
          *(undefined8 *)((long)puVar22 + lVar16 + 0x28) = 0x17;
          *(ushort *)((long)puVar22 + lVar16 + 0x19) =
               *(ushort *)((long)puVar22 + lVar16 + 0x19) & 0xf000 | 0x540;
          goto LAB_001577f4;
        }
      }
      else if (cVar2 == 'R') {
        *param_1 = (long)(pcVar21 + 2);
        local_120 = FUN_00158fd4(param_1,0);
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
joined_r0x001572dc:
            if ((pbVar17 == pbVar20) || (*pbVar17 != 0x5f)) {
              auVar30 = auVar8;
              if (!bVar10) goto LAB_001577f0;
            }
            else {
              *param_1 = (long)(pbVar17 + 1);
            }
            puVar13 = (undefined8 *)FUN_0015a8bc(param_1,&local_120);
            goto LAB_001577f4;
          }
          do {
            bVar1 = *pbVar17;
            if ((bVar1 < 0x30) || ((0x39 < bVar1 && (0x19 < bVar1 - 0x41)))) {
              bVar10 = false;
              goto joined_r0x001572dc;
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
                    /* try { // try from 00157050 to 0015705b has its CatchHandler @ 00157934 */
          lVar16 = FUN_00158fd4(param_1,0);
          auVar30._8_8_ = local_140._8_8_;
          auVar30._0_8_ = local_140._0_8_;
          if (lVar16 != 0) {
            pvVar28 = (void *)param_1[0x266];
            lVar18 = *(long *)((long)pvVar28 + 8);
            puVar22 = (undefined8 *)pvVar28;
            if (lVar18 - 0xfc0U < 0xfffffffffffff010) {
              puVar22 = (undefined8 *)malloc(0x1000);
              if (puVar22 == (undefined8 *)0x0) goto LAB_0015787c;
              lVar18 = 0;
              *puVar22 = pvVar28;
              puVar22[1] = 0;
              param_1[0x266] = (long)puVar22;
            }
            *(long *)((long)puVar22 + 8) = lVar18 + 0x30;
            puVar13 = (undefined8 *)((long)puVar22 + lVar18 + 0x10);
            *puVar13 = &PTR_FUN_0017a950;
            *(long *)((long)puVar22 + lVar18 + 0x30) = lVar16;
            *(undefined1 *)((long)puVar22 + lVar18 + 0x18) = 0x15;
            *(char **)((long)puVar22 + lVar18 + 0x20) = "guard variable for ";
            *(undefined8 *)((long)puVar22 + lVar18 + 0x28) = 0x13;
            *(ushort *)((long)puVar22 + lVar18 + 0x19) =
                 *(ushort *)((long)puVar22 + lVar18 + 0x19) & 0xf000 | 0x540;
            goto LAB_001577f4;
          }
        }
      }
    }
  }
  else {
    if (*pcVar21 != 'T') goto LAB_00156f4c;
    if ((ulong)((long)pcVar19 - (long)pcVar21) < 2) {
LAB_0015740c:
      pcVar21 = pcVar21 + 1;
      *param_1 = (long)pcVar21;
      if (pcVar19 == pcVar21) {
        bVar10 = false;
        uVar12 = FUN_0015a3a8(param_1);
        auVar30._8_8_ = local_140._8_8_;
        auVar30._0_8_ = local_140._0_8_;
      }
      else {
        bVar10 = *pcVar21 == 'v';
        uVar12 = FUN_0015a3a8(param_1);
        auVar30._8_8_ = local_140._8_8_;
        auVar30._0_8_ = local_140._0_8_;
      }
      if ((uVar12 & 1) == 0) {
        local_120 = FUN_00156e84(param_1);
        auVar30._8_8_ = local_140._8_8_;
        auVar30._0_8_ = local_140._0_8_;
        if (local_120 != 0) {
          if (bVar10) {
            puVar13 = (undefined8 *)FUN_0015a760();
          }
          else {
            puVar13 = (undefined8 *)FUN_0015a810(param_1,&local_120);
          }
          goto LAB_001577f4;
        }
      }
    }
    else {
      bVar1 = pcVar21[1];
      if (bVar1 < 0x53) {
        if (bVar1 < 0x48) {
          if (bVar1 == 0x41) {
            *param_1 = (long)(pcVar21 + 2);
                    /* try { // try from 0015765c to 0015770b has its CatchHandler @ 00157934 */
            local_120 = FUN_00159718(param_1);
            auVar30._8_8_ = local_140._8_8_;
            auVar30._0_8_ = local_140._0_8_;
            if (local_120 != 0) {
              puVar13 = (undefined8 *)FUN_0015a038(param_1,&local_120);
              goto LAB_001577f4;
            }
          }
          else {
            if (bVar1 != 0x43) goto LAB_0015740c;
            *param_1 = (long)(pcVar21 + 2);
                    /* try { // try from 001571d4 to 0015744f has its CatchHandler @ 00157934 */
            local_120 = FUN_00157a9c(param_1);
            auVar30._8_8_ = local_140._8_8_;
            auVar30._0_8_ = local_140._0_8_;
            if (local_120 != 0) {
              FUN_0015795c(param_1,1);
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
                local_140._0_8_ = FUN_00157a9c(param_1);
                auVar30._8_8_ = local_140._8_8_;
                auVar30._0_8_ = local_140._0_8_;
                if (local_140._0_8_ != 0) {
                  puVar13 = (undefined8 *)FUN_0015a608(param_1,local_140,&local_120);
                  goto LAB_001577f4;
                }
              }
            }
          }
        }
        else if (bVar1 == 0x48) {
          *param_1 = (long)(pcVar21 + 2);
          local_120 = FUN_00158fd4(param_1,0);
          auVar30._8_8_ = local_140._8_8_;
          auVar30._0_8_ = local_140._0_8_;
          if (local_120 != 0) {
            puVar13 = (undefined8 *)FUN_0015a6b0(param_1,&local_120);
            goto LAB_001577f4;
          }
        }
        else {
          if (bVar1 != 0x49) goto LAB_0015740c;
          *param_1 = (long)(pcVar21 + 2);
          local_120 = FUN_00157a9c(param_1);
          auVar30._8_8_ = local_140._8_8_;
          auVar30._0_8_ = local_140._0_8_;
          if (local_120 != 0) {
            puVar13 = (undefined8 *)FUN_0015a248(param_1,&local_120);
            goto LAB_001577f4;
          }
        }
      }
      else if (bVar1 < 0x56) {
        if (bVar1 == 0x53) {
          *param_1 = (long)(pcVar21 + 2);
          local_120 = FUN_00157a9c(param_1);
          auVar30._8_8_ = local_140._8_8_;
          auVar30._0_8_ = local_140._0_8_;
          if (local_120 != 0) {
            puVar13 = (undefined8 *)FUN_0015a2f8(param_1,&local_120);
            goto LAB_001577f4;
          }
        }
        else {
          if (bVar1 != 0x54) goto LAB_0015740c;
          *param_1 = (long)(pcVar21 + 2);
          local_120 = FUN_00157a9c(param_1);
          auVar30._8_8_ = local_140._8_8_;
          auVar30._0_8_ = local_140._0_8_;
          if (local_120 != 0) {
            puVar13 = (undefined8 *)FUN_0015a198(param_1,&local_120);
            goto LAB_001577f4;
          }
        }
      }
      else if (bVar1 == 0x56) {
        *param_1 = (long)(pcVar21 + 2);
        local_120 = FUN_00157a9c(param_1);
        auVar30._8_8_ = local_140._8_8_;
        auVar30._0_8_ = local_140._0_8_;
        if (local_120 != 0) {
          puVar13 = (undefined8 *)FUN_0015a0e8(param_1,&local_120);
          goto LAB_001577f4;
        }
      }
      else if (bVar1 == 0x57) {
        *param_1 = (long)(pcVar21 + 2);
        local_120 = FUN_00158fd4(param_1,0);
        auVar30._8_8_ = local_140._8_8_;
        auVar30._0_8_ = local_140._0_8_;
        if (local_120 != 0) {
          puVar13 = (undefined8 *)
                    FUN_001579e8(param_1,"thread-local wrapper routine for ",&local_120);
          goto LAB_001577f4;
        }
      }
      else {
        if (bVar1 != 99) goto LAB_0015740c;
        *param_1 = (long)(pcVar21 + 2);
        uVar12 = FUN_0015a3a8(param_1);
        auVar30._8_8_ = local_140._8_8_;
        auVar30._0_8_ = local_140._0_8_;
        if ((uVar12 & 1) == 0) {
          uVar12 = FUN_0015a3a8(param_1);
          auVar30._8_8_ = local_140._8_8_;
          auVar30._0_8_ = local_140._0_8_;
          if ((uVar12 & 1) == 0) {
                    /* try { // try from 00156f2c to 00156f33 has its CatchHandler @ 00157934 */
            local_120 = FUN_00156e84(param_1);
            auVar30._8_8_ = local_140._8_8_;
            auVar30._0_8_ = local_140._0_8_;
            if (local_120 != 0) {
              puVar13 = (undefined8 *)FUN_0015a558(param_1,&local_120);
              goto LAB_001577f4;
            }
          }
        }
      }
    }
  }
LAB_001577f0:
  puVar13 = (undefined8 *)0x0;
  local_140 = auVar30;
LAB_001577f4:
  FUN_00159e54(auStack_100);
  return puVar13;
}


// ===== 0015795c  FUN_0015795c =====

undefined1  [16] FUN_0015795c(long *param_1,ulong param_2)

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


// ===== 001579e8  FUN_001579e8 =====

undefined8 * FUN_001579e8(long param_1,char *param_2,undefined8 *param_3)

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
  *puVar5 = &PTR_FUN_0017a950;
  *(char **)((long)puVar1 + lVar3 + 0x20) = param_2;
  *(size_t *)((long)puVar1 + lVar3 + 0x28) = sVar2;
  *(undefined1 *)((long)puVar1 + lVar3 + 0x18) = 0x15;
  *(ushort *)((long)puVar1 + lVar3 + 0x19) =
       *(ushort *)((long)puVar1 + lVar3 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar3 + 0x30) = uVar4;
  return puVar5;
}


// ===== 00157a9c  FUN_00157a9c =====

byte * FUN_00157a9c(long *param_1)

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
  if (pbVar6 == pbVar5) goto code_r0x001586b8;
  bVar1 = *pbVar5;
  uVar15 = 0;
  switch(bVar1) {
  case 0x41:
    pbVar4 = pbVar5 + 1;
    local_28 = (byte *)0x0;
    *param_1 = (long)pbVar4;
    if (pbVar6 == pbVar4) {
LAB_001589a0:
      pbVar6 = (byte *)FUN_0015cce8(param_1);
      if (pbVar6 == (byte *)0x0) goto joined_r0x00158188;
      pcVar12 = (char *)*param_1;
      if ((pcVar12 == (char *)param_1[1]) || (*pcVar12 != '_')) {
        return (byte *)0x0;
      }
      pbVar5 = (byte *)(pcVar12 + 1);
      local_28 = pbVar6;
    }
    else if (*pbVar4 - 0x3a < 0xfffffff6) {
      if (*pbVar4 != 0x5f) goto LAB_001589a0;
      pbVar5 = pbVar5 + 2;
    }
    else {
      local_50 = FUN_0015795c(param_1,0);
      local_28 = (byte *)FUN_0015c7bc(param_1,local_50);
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
    pbVar6 = (byte *)FUN_00157a9c(param_1);
    local_50._0_8_ = pbVar6;
    if (pbVar6 != (byte *)0x0) {
      pbVar6 = (byte *)FUN_0016dd24(param_1,local_50,&local_28);
    }
    goto joined_r0x00158188;
  default:
    goto code_r0x001586b8;
  case 0x43:
    *param_1 = (long)(pbVar5 + 1);
    local_50._0_8_ = FUN_00157a9c(param_1);
    if ((byte *)local_50._0_8_ == (byte *)0x0) {
      return (byte *)0x0;
    }
    pbVar6 = (byte *)FUN_0016c584(param_1,local_50);
    goto LAB_001586c4;
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
        local_50._0_8_ = FUN_0015cce8(param_1);
        if (local_50._0_8_ == 0) {
          return (byte *)0x0;
        }
      }
      else {
        local_50 = FUN_0015795c(param_1,0);
        lVar10 = FUN_0015c7bc(param_1,local_50);
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
      pbVar5 = (byte *)FUN_0016be1c(param_1,local_50,bVar1 == 0x42);
      return pbVar5;
    default:
      goto code_r0x00158888;
    case 0x46:
      *param_1 = (long)(pbVar5 + 2);
      local_50 = FUN_0015795c(param_1,0);
      uVar11 = FUN_0015c7bc(param_1,local_50);
      pcVar12 = (char *)*param_1;
      if ((pcVar12 != (char *)param_1[1]) && (*pcVar12 == '_')) {
        *param_1 = (long)(pcVar12 + 1);
        local_50._0_8_ = uVar11;
        pbVar5 = (byte *)FUN_0016bd7c(param_1,local_50);
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
      local_28 = (byte *)FUN_00158fd4(param_1,0);
      if (local_28 != (byte *)0x0) {
        pbVar5 = (byte *)FUN_0016becc(param_1,&local_28,local_50);
        return pbVar5;
      }
      return (byte *)0x0;
    case 0x4f:
    case 0x6f:
    case 0x77:
    case 0x78:
      goto code_r0x0015842c;
    case 0x54:
    case 0x74:
      pbVar6 = (byte *)FUN_0015bdbc(param_1);
      break;
    case 0x61:
      puVar8 = &DAT_00111321;
      goto LAB_00158d1c;
    case 99:
      pcVar12 = "decltype(auto)";
      goto LAB_00158d94;
    case 100:
      pcVar12 = "decimal64";
      goto LAB_00158ce8;
    case 0x65:
      *param_1 = (long)(pbVar5 + 2);
      pbVar5 = (byte *)FUN_0016bc28(param_1,"decimal128");
      return pbVar5;
    case 0x66:
      pcVar12 = "decimal32";
LAB_00158ce8:
      *param_1 = (long)(pbVar5 + 2);
      pbVar5 = (byte *)FUN_0016bad8(param_1,pcVar12);
      return pbVar5;
    case 0x68:
      puVar8 = &DAT_001129b0;
LAB_00158d1c:
      *param_1 = (long)(pbVar5 + 2);
      pbVar5 = (byte *)FUN_0015c934(param_1,puVar8);
      return pbVar5;
    case 0x69:
      pcVar12 = "char32_t";
      goto LAB_00158d50;
    case 0x6e:
      pcVar12 = "std::nullptr_t";
LAB_00158d94:
      *param_1 = (long)(pbVar5 + 2);
      pbVar5 = (byte *)FUN_00169dd0(param_1,pcVar12);
      return pbVar5;
    case 0x70:
      *param_1 = (long)(pbVar5 + 2);
      local_50._0_8_ = FUN_00157a9c(param_1);
      if ((byte *)local_50._0_8_ == (byte *)0x0) {
        return (byte *)0x0;
      }
      pbVar6 = (byte *)FUN_001607d4(param_1,local_50);
      goto LAB_001586c4;
    case 0x73:
      pcVar12 = "char16_t";
LAB_00158d50:
      *param_1 = (long)(pbVar5 + 2);
      pbVar5 = (byte *)FUN_0016bb80(param_1,pcVar12);
      return pbVar5;
    case 0x75:
      *param_1 = (long)(pbVar5 + 2);
      pbVar5 = (byte *)FUN_00162e28(param_1,"char8_t");
      return pbVar5;
    case 0x76:
      pbVar6 = (byte *)FUN_0016bf78(param_1);
    }
    goto joined_r0x00158188;
  case 0x46:
    goto code_r0x0015842c;
  case 0x47:
    *param_1 = (long)(pbVar5 + 1);
    local_50._0_8_ = FUN_00157a9c(param_1);
    if ((byte *)local_50._0_8_ == (byte *)0x0) {
      return (byte *)0x0;
    }
    pbVar6 = (byte *)FUN_0016c634(param_1,local_50);
    goto LAB_001586c4;
  case 0x4b:
  case 0x56:
code_r0x001580fc:
    if (bVar1 == 0x56) {
      uVar15 = uVar15 + 1;
    }
    uVar13 = (ulong)uVar15;
    if (uVar13 < uVar2) {
LAB_00158114:
      if (pbVar5[uVar13] == 0x4b) {
        uVar15 = uVar15 + 1;
      }
      uVar13 = (ulong)uVar15;
    }
    goto LAB_00158128;
  case 0x4d:
    *param_1 = (long)(pbVar5 + 1);
    local_50._0_8_ = FUN_00157a9c(param_1);
    pbVar6 = (byte *)local_50._0_8_;
    if (((byte *)local_50._0_8_ != (byte *)0x0) &&
       (local_28 = (byte *)FUN_00157a9c(param_1), pbVar6 = local_28, local_28 != (byte *)0x0)) {
      pbVar6 = (byte *)FUN_0016dfa0(param_1,local_50,&local_28);
    }
    goto joined_r0x00158188;
  case 0x4f:
    *param_1 = (long)(pbVar5 + 1);
    local_50._0_8_ = FUN_00157a9c(param_1);
    if ((byte *)local_50._0_8_ == (byte *)0x0) {
      return (byte *)0x0;
    }
    local_28 = (byte *)CONCAT44(local_28._4_4_,1);
    goto LAB_00158770;
  case 0x50:
    *param_1 = (long)(pbVar5 + 1);
    local_50._0_8_ = FUN_00157a9c(param_1);
    if ((byte *)local_50._0_8_ == (byte *)0x0) {
      return (byte *)0x0;
    }
    pbVar6 = (byte *)FUN_0016c41c(param_1,local_50);
    goto LAB_001586c4;
  case 0x52:
    *param_1 = (long)(pbVar5 + 1);
    local_50._0_8_ = FUN_00157a9c(param_1);
    if ((byte *)local_50._0_8_ == (byte *)0x0) {
      return (byte *)0x0;
    }
    local_28 = (byte *)((ulong)local_28 & 0xffffffff00000000);
LAB_00158770:
    pbVar6 = (byte *)FUN_0016c4c8(param_1,local_50,&local_28);
    goto LAB_001586c4;
  case 0x53:
    if ((uVar2 < 2) || (pbVar5[1] != 0x74)) {
      local_28 = (byte *)((ulong)local_28 & 0xffffffffffffff00);
      pbVar6 = (byte *)FUN_0015b228(param_1,0,&local_28);
      if (pbVar6 == (byte *)0x0) {
        return (byte *)0x0;
      }
      local_58 = pbVar6;
      if (((char *)param_1[1] == (char *)*param_1) || (*(char *)*param_1 != 'I')) {
        if (((ulong)local_28 & 0xff) != 0) {
          return pbVar6;
        }
        goto LAB_001586c4;
      }
      if (((char)local_28 != '\0') && ((char)param_1[0x61] == '\0')) {
        return pbVar6;
      }
      if ((char)local_28 == '\0') {
        FUN_00159a8c(param_1 + 0x25,&local_58);
      }
      local_50._0_8_ = FUN_0015b3a8(param_1,0);
      if ((byte *)local_50._0_8_ == (byte *)0x0) {
        return (byte *)0x0;
      }
LAB_0015898c:
      pbVar6 = (byte *)FUN_0015b944(param_1,&local_58,local_50);
      goto LAB_001586c4;
    }
    goto code_r0x001586b8;
  case 0x54:
    if (((uVar2 < 2) || (0x10 < pbVar5[1] - 0x65)) ||
       ((1 << (ulong)(pbVar5[1] - 0x65 & 0x1f) & 0x14001U) == 0)) {
      pbVar6 = (byte *)FUN_0015b9ec(param_1);
      if (pbVar6 == (byte *)0x0) {
        return (byte *)0x0;
      }
      local_58 = pbVar6;
      if ((((char)param_1[0x61] == '\0') || ((char *)param_1[1] == (char *)*param_1)) ||
         (*(char *)*param_1 != 'I')) goto LAB_001586c4;
      local_50._0_8_ = FUN_0015b3a8(param_1,0);
      if ((byte *)local_50._0_8_ == (byte *)0x0) {
        return (byte *)0x0;
      }
      goto LAB_0015898c;
    }
code_r0x001586b8:
    pbVar6 = (byte *)FUN_0016c288(param_1);
    goto joined_r0x00158188;
  case 0x55:
    goto code_r0x00158180;
  case 0x61:
    pvVar7 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar5 + 1);
    lVar10 = *(long *)((long)pvVar7 + 8);
    puVar3 = (undefined8 *)pvVar7;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = (undefined8 *)malloc(0x1000);
      if (puVar3 == (undefined8 *)0x0) {
LAB_00158e18:
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
    *(undefined ***)pbVar4 = &PTR_FUN_0017aa40;
    uVar9 = *(ushort *)((long)puVar3 + lVar10 + 0x19);
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "signed char";
    goto LAB_00157fe0;
  case 0x62:
    pvVar7 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar5 + 1);
    lVar10 = *(long *)((long)pvVar7 + 8);
    puVar3 = (undefined8 *)pvVar7;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = (undefined8 *)malloc(0x1000);
      if (puVar3 == (undefined8 *)0x0) goto LAB_00158e18;
      lVar10 = 0;
      *puVar3 = pvVar7;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    pbVar4 = (byte *)((long)puVar3 + lVar10 + 0x10);
    *(undefined ***)pbVar4 = &PTR_FUN_0017aa40;
    uVar9 = *(ushort *)((long)puVar3 + lVar10 + 0x19);
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "bool";
    goto LAB_00158870;
  case 99:
    pvVar7 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar5 + 1);
    lVar10 = *(long *)((long)pvVar7 + 8);
    puVar3 = (undefined8 *)pvVar7;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = (undefined8 *)malloc(0x1000);
      if (puVar3 == (undefined8 *)0x0) goto LAB_00158e18;
      lVar10 = 0;
      *puVar3 = pvVar7;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    pbVar4 = (byte *)((long)puVar3 + lVar10 + 0x10);
    *(undefined ***)pbVar4 = &PTR_FUN_0017aa40;
    uVar9 = *(ushort *)((long)puVar3 + lVar10 + 0x19);
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "char";
    goto LAB_00158870;
  case 100:
    pvVar7 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar5 + 1);
    lVar10 = *(long *)((long)pvVar7 + 8);
    puVar3 = (undefined8 *)pvVar7;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = (undefined8 *)malloc(0x1000);
      if (puVar3 == (undefined8 *)0x0) goto LAB_00158e18;
      lVar10 = 0;
      *puVar3 = pvVar7;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    pbVar4 = (byte *)((long)puVar3 + lVar10 + 0x10);
    *(undefined ***)pbVar4 = &PTR_FUN_0017aa40;
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
      if (puVar3 == (undefined8 *)0x0) goto LAB_00158e18;
      lVar10 = 0;
      *puVar3 = pvVar7;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    pbVar4 = (byte *)((long)puVar3 + lVar10 + 0x10);
    *(undefined ***)pbVar4 = &PTR_FUN_0017aa40;
    uVar9 = *(ushort *)((long)puVar3 + lVar10 + 0x19);
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "long double";
LAB_00157fe0:
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
      if (puVar3 == (undefined8 *)0x0) goto LAB_00158e18;
      lVar10 = 0;
      *puVar3 = pvVar7;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    pbVar4 = (byte *)((long)puVar3 + lVar10 + 0x10);
    *(undefined ***)pbVar4 = &PTR_FUN_0017aa40;
    uVar9 = *(ushort *)((long)puVar3 + lVar10 + 0x19);
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "float";
    goto LAB_00158598;
  case 0x67:
    pvVar7 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar5 + 1);
    lVar10 = *(long *)((long)pvVar7 + 8);
    puVar3 = (undefined8 *)pvVar7;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = (undefined8 *)malloc(0x1000);
      if (puVar3 == (undefined8 *)0x0) goto LAB_00158e18;
      lVar10 = 0;
      *puVar3 = pvVar7;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    pbVar4 = (byte *)((long)puVar3 + lVar10 + 0x10);
    *(undefined ***)pbVar4 = &PTR_FUN_0017aa40;
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
      if (puVar3 == (undefined8 *)0x0) goto LAB_00158e18;
      lVar10 = 0;
      *puVar3 = pvVar7;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    pbVar4 = (byte *)((long)puVar3 + lVar10 + 0x10);
    *(undefined ***)pbVar4 = &PTR_FUN_0017aa40;
    uVar9 = *(ushort *)((long)puVar3 + lVar10 + 0x19);
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "unsigned char";
    goto LAB_001580d0;
  case 0x69:
    pvVar7 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar5 + 1);
    lVar10 = *(long *)((long)pvVar7 + 8);
    puVar3 = (undefined8 *)pvVar7;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = (undefined8 *)malloc(0x1000);
      if (puVar3 == (undefined8 *)0x0) goto LAB_00158e18;
      lVar10 = 0;
      *puVar3 = pvVar7;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    pbVar4 = (byte *)((long)puVar3 + lVar10 + 0x10);
    *(undefined ***)pbVar4 = &PTR_FUN_0017aa40;
    uVar9 = *(ushort *)((long)puVar3 + lVar10 + 0x19);
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "int";
    goto LAB_001584a8;
  case 0x6a:
    pvVar7 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar5 + 1);
    lVar10 = *(long *)((long)pvVar7 + 8);
    puVar3 = (undefined8 *)pvVar7;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = (undefined8 *)malloc(0x1000);
      if (puVar3 == (undefined8 *)0x0) goto LAB_00158e18;
      lVar10 = 0;
      *puVar3 = pvVar7;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    pbVar4 = (byte *)((long)puVar3 + lVar10 + 0x10);
    *(undefined ***)pbVar4 = &PTR_FUN_0017aa40;
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
      if (puVar3 == (undefined8 *)0x0) goto LAB_00158e18;
      lVar10 = 0;
      *puVar3 = pvVar7;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    pbVar4 = (byte *)((long)puVar3 + lVar10 + 0x10);
    *(undefined ***)pbVar4 = &PTR_FUN_0017aa40;
    uVar9 = *(ushort *)((long)puVar3 + lVar10 + 0x19);
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "long";
    goto LAB_00158870;
  case 0x6d:
    pvVar7 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar5 + 1);
    lVar10 = *(long *)((long)pvVar7 + 8);
    puVar3 = (undefined8 *)pvVar7;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = (undefined8 *)malloc(0x1000);
      if (puVar3 == (undefined8 *)0x0) goto LAB_00158e18;
      lVar10 = 0;
      *puVar3 = pvVar7;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    pbVar4 = (byte *)((long)puVar3 + lVar10 + 0x10);
    *(undefined ***)pbVar4 = &PTR_FUN_0017aa40;
    uVar9 = *(ushort *)((long)puVar3 + lVar10 + 0x19);
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "unsigned long";
LAB_001580d0:
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
      if (puVar3 == (undefined8 *)0x0) goto LAB_00158e18;
      lVar10 = 0;
      *puVar3 = pvVar7;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    pbVar5 = (byte *)((long)puVar3 + lVar10 + 0x10);
    *(undefined ***)pbVar5 = &PTR_FUN_0017aa40;
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
      if (puVar3 == (undefined8 *)0x0) goto LAB_00158e18;
      lVar10 = 0;
      *puVar3 = pvVar7;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    pbVar4 = (byte *)((long)puVar3 + lVar10 + 0x10);
    *(undefined ***)pbVar4 = &PTR_FUN_0017aa40;
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
      goto code_r0x001580fc;
    }
    uVar15 = 1;
    uVar13 = 1;
    if (1 < uVar2) goto LAB_00158114;
LAB_00158128:
    if ((uVar13 < uVar2) &&
       ((pbVar5[uVar13] == 0x46 ||
        ((((pbVar5[uVar13] == 0x44 && ((ulong)uVar15 + 1 < uVar2)) &&
          (pbVar5[(ulong)uVar15 + 1] - 0x4f < 0x2a)) &&
         ((1L << ((ulong)(pbVar5[(ulong)uVar15 + 1] - 0x4f) & 0x3f) & 0x30100000001U) != 0)))))) {
code_r0x0015842c:
      pbVar6 = (byte *)FUN_0016b08c(param_1);
    }
    else {
code_r0x00158180:
      pbVar6 = (byte *)FUN_0016b67c(param_1);
    }
joined_r0x00158188:
    if (pbVar6 == (byte *)0x0) {
      return (byte *)0x0;
    }
LAB_001586c4:
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
      if (puVar3 == (undefined8 *)0x0) goto LAB_00158e18;
      lVar10 = 0;
      *puVar3 = pvVar7;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    pbVar4 = (byte *)((long)puVar3 + lVar10 + 0x10);
    *(undefined ***)pbVar4 = &PTR_FUN_0017aa40;
    uVar9 = *(ushort *)((long)puVar3 + lVar10 + 0x19);
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "short";
LAB_00158598:
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
      if (puVar3 == (undefined8 *)0x0) goto LAB_00158e18;
      lVar10 = 0;
      *puVar3 = pvVar7;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    pbVar4 = (byte *)((long)puVar3 + lVar10 + 0x10);
    *(undefined ***)pbVar4 = &PTR_FUN_0017aa40;
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
      pbVar6 = (byte *)FUN_0015afb0(param_1,local_50);
    }
    else {
      *param_1 = (long)(pbVar14 + 1);
      local_28 = (byte *)FUN_00157a9c(param_1);
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
      pbVar6 = (byte *)FUN_0016bcd0(param_1,local_50,&local_28);
    }
    goto LAB_001586c4;
  case 0x76:
    pvVar7 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar5 + 1);
    lVar10 = *(long *)((long)pvVar7 + 8);
    puVar3 = (undefined8 *)pvVar7;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = (undefined8 *)malloc(0x1000);
      if (puVar3 == (undefined8 *)0x0) goto LAB_00158e18;
      lVar10 = 0;
      *puVar3 = pvVar7;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    pbVar4 = (byte *)((long)puVar3 + lVar10 + 0x10);
    *(undefined ***)pbVar4 = &PTR_FUN_0017aa40;
    uVar9 = *(ushort *)((long)puVar3 + lVar10 + 0x19);
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "void";
LAB_00158870:
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
      if (puVar3 == (undefined8 *)0x0) goto LAB_00158e18;
      lVar10 = 0;
      *puVar3 = pvVar7;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    pbVar4 = (byte *)((long)puVar3 + lVar10 + 0x10);
    *(undefined ***)pbVar4 = &PTR_FUN_0017aa40;
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
      if (puVar3 == (undefined8 *)0x0) goto LAB_00158e18;
      lVar10 = 0;
      *puVar3 = pvVar7;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    pbVar4 = (byte *)((long)puVar3 + lVar10 + 0x10);
    *(undefined ***)pbVar4 = &PTR_FUN_0017aa40;
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
      if (puVar3 == (undefined8 *)0x0) goto LAB_00158e18;
      lVar10 = 0;
      *puVar3 = pvVar7;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    pbVar4 = (byte *)((long)puVar3 + lVar10 + 0x10);
    *(undefined ***)pbVar4 = &PTR_FUN_0017aa40;
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
      if (puVar3 == (undefined8 *)0x0) goto LAB_00158e18;
      lVar10 = 0;
      *puVar3 = pvVar7;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    pbVar4 = (byte *)((long)puVar3 + lVar10 + 0x10);
    *(undefined ***)pbVar4 = &PTR_FUN_0017aa40;
    uVar9 = *(ushort *)((long)puVar3 + lVar10 + 0x19);
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "...";
LAB_001584a8:
    *(ushort *)(pbVar4 + 9) = uVar9 & 0xf000 | 0x540;
    uVar11 = 3;
  }
  *(char **)(pbVar4 + 0x10) = pcVar12;
  *(undefined8 *)(pbVar4 + 0x18) = uVar11;
code_r0x00158888:
  return pbVar4;
}


// ===== 00158e20  FUN_00158e20 =====

void FUN_00158e20(long *param_1,long param_2)

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
    if (pvVar4 != (void *)(param_2 + 600)) goto LAB_00158ebc;
LAB_00158f5c:
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
    if (pvVar4 == (void *)(param_2 + 600)) goto LAB_00158f5c;
LAB_00158ebc:
    *plVar6 = (long)pvVar4;
    if (plVar2 == __dest) {
      lVar5 = *(long *)(param_2 + 0x248);
      param_1[10] = *(long *)(param_2 + 0x250);
      param_1[9] = lVar5;
      *(long *)(param_2 + 0x240) = param_2 + 600;
      *(long *)(param_2 + 0x248) = param_2 + 600;
      *(long *)(param_2 + 0x250) = param_2 + 0x298;
      goto LAB_00158fa8;
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
LAB_00158fa8:
  lVar5 = *param_1;
  *(undefined8 *)(lVar5 + 0x2a0) = *(undefined8 *)(lVar5 + 0x298);
  *(undefined8 *)(lVar5 + 0x248) = *(undefined8 *)(lVar5 + 0x240);
  return;
}


// ===== 00158fd4  FUN_00158fd4 =====

undefined8 * FUN_00158fd4(long *param_1,long param_2)

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
LAB_00159054:
    local_108[0] = local_108[0] & 0xffffffffffffff00;
    puVar5 = (undefined8 *)FUN_0015b228(param_1,param_2,local_108);
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
    lVar6 = FUN_0015b3a8(param_1,param_2 != 0);
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
LAB_001596e8:
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
    *puVar7 = &PTR_FUN_0017c940;
    *(undefined8 **)((long)puVar9 + lVar11 + 0x20) = puVar5;
    *(long *)((long)puVar9 + lVar11 + 0x28) = lVar6;
    *(undefined1 *)((long)puVar9 + lVar11 + 0x18) = 0x2d;
    *(ushort *)((long)puVar9 + lVar11 + 0x19) =
         *(ushort *)((long)puVar9 + lVar11 + 0x19) & 0xf000 | 0x540;
    return puVar7;
  }
  if (*pbVar2 != 0x5a) {
    if (*pbVar2 != 0x4e) goto LAB_00159054;
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
        goto LAB_001591e8;
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
        goto LAB_001591e8;
      }
      if (*pbVar10 == 0x52) {
        pbVar10 = pbVar10 + 1;
        *param_1 = (long)pbVar10;
        if (param_2 != 0) {
          *(undefined1 *)(param_2 + 8) = 1;
        }
        goto LAB_001591e8;
      }
    }
    if (param_2 != 0) {
      *(undefined1 *)(param_2 + 8) = 0;
    }
LAB_001591e8:
    plVar16 = param_1 + 0x28;
    puVar5 = (undefined8 *)0x0;
LAB_00159204:
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
LAB_00159320:
        puVar9 = (undefined8 *)0x0;
        goto LAB_00159324;
      }
      bVar4 = *pbVar10;
      puVar9 = (undefined8 *)0x0;
      if (bVar4 < 0x53) {
        if (bVar4 == 0x44) {
          if (((ulong)((long)pbVar13 - (long)pbVar10) < 2) || ((pbVar10[1] | 0x20) != 0x74))
          goto LAB_00159320;
          if (puVar5 != (undefined8 *)0x0) {
            return (undefined8 *)0x0;
          }
          puVar9 = (undefined8 *)FUN_0015bdbc(param_1);
LAB_00159334:
          if (puVar9 == (undefined8 *)0x0) {
            return (undefined8 *)0x0;
          }
        }
        else {
          if (bVar4 != 0x49) goto LAB_00159324;
          if (puVar5 == (undefined8 *)0x0) {
            return (undefined8 *)0x0;
          }
          lVar6 = FUN_0015b3a8(param_1,param_2 != 0);
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
            if (puVar7 == (undefined8 *)0x0) goto LAB_001596e8;
            lVar11 = 0;
            *puVar7 = pvVar17;
            puVar7[1] = 0;
            param_1[0x266] = (long)puVar7;
          }
          *(long *)((long)puVar7 + 8) = lVar11 + 0x20;
          puVar9 = (undefined8 *)((long)puVar7 + lVar11 + 0x10);
          *puVar9 = &PTR_FUN_0017c940;
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
        goto LAB_00159204;
      }
      if (bVar4 != 0x53) {
        if (bVar4 == 0x54) {
          if (puVar5 != (undefined8 *)0x0) {
            return (undefined8 *)0x0;
          }
          puVar9 = (undefined8 *)FUN_0015b9ec(param_1);
          goto LAB_00159334;
        }
LAB_00159324:
        puVar9 = (undefined8 *)FUN_0015c1dc(param_1,param_2,puVar5,puVar9);
        goto LAB_00159334;
      }
      if (((ulong)((long)pbVar13 - (long)pbVar10) < 2) || (pbVar10[1] != 0x74)) {
        puVar9 = (undefined8 *)FUN_0015bf00(param_1);
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
          if (puVar7 == (undefined8 *)0x0) goto LAB_001596e8;
          lVar6 = 0;
          *puVar7 = pvVar17;
          puVar7[1] = 0;
          param_1[0x266] = (long)puVar7;
        }
        *(long *)((long)puVar7 + 8) = lVar6 + 0x20;
        puVar9 = (undefined8 *)((long)puVar7 + lVar6 + 0x10);
        *puVar9 = &PTR_FUN_0017aa40;
        *(undefined1 *)((long)puVar7 + lVar6 + 0x18) = 8;
        *(ushort *)((long)puVar7 + lVar6 + 0x19) =
             *(ushort *)((long)puVar7 + lVar6 + 0x19) & 0xf000 | 0x540;
        *(undefined **)((long)puVar7 + lVar6 + 0x20) = &DAT_00112874;
        *(undefined8 *)((long)puVar7 + lVar6 + 0x28) = 3;
      }
      if (*(char *)(puVar9 + 1) == '\x1b') goto LAB_00159324;
      if (puVar5 != (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      pbVar10 = (byte *)*param_1;
      pbVar13 = (byte *)param_1[1];
      puVar5 = puVar9;
    } while( true );
  }
  *param_1 = (long)(pbVar2 + 1);
  local_70[0] = FUN_00156e84(param_1);
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
    lVar6 = FUN_00169d20();
    *param_1 = lVar6;
    local_108[0] = FUN_00169dd0(param_1,"string literal");
    puVar5 = (undefined8 *)FUN_00169e78(param_1,local_70,local_108);
    return puVar5;
  }
  FUN_00158e20(local_108,param_1);
  pcVar3 = (char *)*param_1;
  if ((pcVar3 == (char *)param_1[1]) || (*pcVar3 != 'd')) {
                    /* try { // try from 0015957c to 00159587 has its CatchHandler @ 00159704 */
    local_110 = FUN_00158fd4(param_1,param_2);
    if (local_110 != 0) {
      lVar6 = FUN_00169d20(*param_1,param_1[1]);
      *param_1 = lVar6;
LAB_0015959c:
      puVar5 = (undefined8 *)FUN_00169e78(param_1,local_70,&local_110);
      goto LAB_001595b8;
    }
  }
  else {
    *param_1 = (long)(pcVar3 + 1);
    FUN_0015795c(param_1,1);
    pcVar3 = (char *)*param_1;
    if ((pcVar3 != (char *)param_1[1]) && (*pcVar3 == '_')) {
      *param_1 = (long)(pcVar3 + 1);
                    /* try { // try from 00159564 to 0015956f has its CatchHandler @ 001596f0 */
      local_110 = FUN_00158fd4(param_1,param_2);
      if (local_110 != 0) goto LAB_0015959c;
    }
  }
  puVar5 = (undefined8 *)0x0;
LAB_001595b8:
  FUN_00159e54(local_108);
  return puVar5;
}


// ===== 00159718  FUN_00159718 =====

undefined8 * FUN_00159718(long *param_1)

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
          lVar3 = FUN_00159718(param_1);
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
        auVar14 = FUN_00159c04(param_1,lVar6 - lVar8 >> 3);
        pvVar4 = (void *)param_1[0x266];
        lVar8 = *(long *)((long)pvVar4 + 8);
        puVar2 = (undefined8 *)pvVar4;
        if (lVar8 - 0xfd0U < 0xfffffffffffff010) {
          puVar2 = (undefined8 *)malloc(0x1000);
          if (puVar2 == (undefined8 *)0x0) goto LAB_00159a88;
          lVar8 = 0;
          *puVar2 = pvVar4;
          puVar2[1] = 0;
          param_1[0x266] = (long)puVar2;
        }
        lVar6 = (long)puVar2 + lVar8;
        ppuVar9 = &PTR_FUN_0017c9b0;
        *(long *)((long)puVar2 + 8) = lVar8 + 0x20;
        uVar10 = 0x29;
        goto LAB_00159994;
      }
      if (iVar12 != 1) goto LAB_00159a64;
      if (((ulong)((long)pbVar11 - (long)pbVar7) < 2) || (pbVar7[1] != 0x5a)) {
        puVar2 = (undefined8 *)FUN_0015e744(param_1);
        return puVar2;
      }
      *param_1 = (long)(pbVar7 + 2);
      puVar2 = (undefined8 *)FUN_00156e84(param_1);
      if (puVar2 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      pcVar5 = (char *)*param_1;
      if (pcVar5 == (char *)param_1[1]) {
        return (undefined8 *)0x0;
      }
      cVar1 = *pcVar5;
      goto joined_r0x001597f0;
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
        lVar8 = FUN_001643e8(param_1,0);
        if (lVar8 == 0) {
          return (undefined8 *)0x0;
        }
        lVar6 = FUN_00159718(param_1);
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
LAB_00159a88:
                    /* WARNING: Subroutine does not return */
            std::terminate();
          }
          lVar8 = 0;
          *puVar2 = pvVar4;
          puVar2[1] = 0;
          param_1[0x266] = (long)puVar2;
        }
        lVar6 = (long)puVar2 + lVar8;
        ppuVar9 = &PTR_FUN_0017ca20;
        *(long *)((long)puVar2 + 8) = lVar8 + 0x20;
        uVar10 = 0x22;
LAB_00159994:
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
    puVar2 = (undefined8 *)FUN_0015cce8(param_1);
    if (puVar2 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    pcVar5 = (char *)*param_1;
    if (pcVar5 == (char *)param_1[1]) {
      return (undefined8 *)0x0;
    }
    cVar1 = *pcVar5;
joined_r0x001597f0:
    if (cVar1 == 'E') {
      *param_1 = (long)(pcVar5 + 1);
      return puVar2;
    }
    return (undefined8 *)0x0;
  }
LAB_00159a64:
  puVar2 = (undefined8 *)FUN_00157a9c(param_1);
  return puVar2;
}


// ===== 00159a8c  FUN_00159a8c =====

void FUN_00159a8c(undefined8 *param_1,undefined8 *param_2)

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


// ===== 00159b64  FUN_00159b64 =====

void FUN_00159b64(long param_1,undefined8 *param_2)

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
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0017ca90;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 10;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = uVar5;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar4;
  return;
}


// ===== 00159c04  FUN_00159c04 =====

undefined1  [16] FUN_00159c04(long param_1,ulong param_2)

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
    FUN_00154b08("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h",0xaa1,
                 &DAT_00111743);
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
LAB_00159d5c:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      *puVar2 = *puVar4;
      puVar2[1] = 0;
      *puVar4 = puVar2;
      puVar2 = puVar2 + 2;
      goto joined_r0x00159cc4;
    }
    puVar2 = (undefined8 *)malloc(0x1000);
    if (puVar2 == (undefined8 *)0x0) goto LAB_00159d5c;
    lVar3 = 0;
    *puVar2 = puVar4;
    puVar2[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar2;
  }
  puVar2[1] = lVar3 + uVar7;
  puVar2 = (undefined8 *)((long)puVar2 + lVar3 + 0x10);
joined_r0x00159cc4:
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
  FUN_00154b08("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h",0x88,
               "shrinkToSize() can\'t expand!");
}


// ===== 00159d60  FUN_00159d60 =====

void FUN_00159d60(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
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
  *(undefined ***)((long)puVar3 + lVar4 + 0x10) = &PTR_FUN_0017cb70;
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


// ===== 00159e54  FUN_00159e54 =====

void FUN_00159e54(long *param_1)

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
LAB_00159f24:
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
      goto LAB_00159f24;
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
      goto LAB_00159ffc;
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
LAB_00159ffc:
  if ((long *)param_1[1] != plVar1) {
    free((long *)param_1[1]);
    return;
  }
  return;
}


// ===== 0015a038  FUN_0015a038 =====

void FUN_0015a038(long param_1,undefined8 *param_2)

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
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0017a950;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x15;
  *(char **)((long)puVar1 + lVar2 + 0x20) = "template parameter object for ";
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = 0x1e;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x30) = uVar3;
  return;
}


// ===== 0015a0e8  FUN_0015a0e8 =====

void FUN_0015a0e8(long param_1,undefined8 *param_2)

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
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0017a950;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x15;
  *(char **)((long)puVar1 + lVar2 + 0x20) = "vtable for ";
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = 0xb;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x30) = uVar3;
  return;
}


// ===== 0015a198  FUN_0015a198 =====

void FUN_0015a198(long param_1,undefined8 *param_2)

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
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0017a950;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x15;
  *(char **)((long)puVar1 + lVar2 + 0x20) = "VTT for ";
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = 8;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x30) = uVar3;
  return;
}


// ===== 0015a248  FUN_0015a248 =====

void FUN_0015a248(long param_1,undefined8 *param_2)

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
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0017a950;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x15;
  *(char **)((long)puVar1 + lVar2 + 0x20) = "typeinfo for ";
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = 0xd;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x30) = uVar3;
  return;
}


// ===== 0015a2f8  FUN_0015a2f8 =====

void FUN_0015a2f8(long param_1,undefined8 *param_2)

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
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0017a950;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x15;
  *(char **)((long)puVar1 + lVar2 + 0x20) = "typeinfo name for ";
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = 0x12;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x30) = uVar3;
  return;
}


// ===== 0015a3a8  FUN_0015a3a8 =====

undefined8 FUN_0015a3a8(long *param_1)

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


// ===== 0015a558  FUN_0015a558 =====

void FUN_0015a558(long param_1,undefined8 *param_2)

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
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0017a950;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x15;
  *(char **)((long)puVar1 + lVar2 + 0x20) = "covariant return thunk to ";
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = 0x1a;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x30) = uVar3;
  return;
}


// ===== 0015a608  FUN_0015a608 =====

void FUN_0015a608(long param_1,undefined8 *param_2,undefined8 *param_3)

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
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0017a9d0;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x16;
  uVar3 = *param_2;
  uVar4 = *param_3;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = uVar4;
  return;
}


// ===== 0015a6b0  FUN_0015a6b0 =====

void FUN_0015a6b0(long param_1,undefined8 *param_2)

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
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0017a950;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x15;
  *(char **)((long)puVar1 + lVar2 + 0x20) = "thread-local initialization routine for ";
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = 0x28;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x30) = uVar3;
  return;
}


// ===== 0015a760  FUN_0015a760 =====

void FUN_0015a760(long param_1,undefined8 *param_2)

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
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0017a950;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x15;
  *(char **)((long)puVar1 + lVar2 + 0x20) = "virtual thunk to ";
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = 0x11;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x30) = uVar3;
  return;
}


// ===== 0015a810  FUN_0015a810 =====

void FUN_0015a810(long param_1,undefined8 *param_2)

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
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0017a950;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x15;
  *(char **)((long)puVar1 + lVar2 + 0x20) = "non-virtual thunk to ";
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = 0x15;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x30) = uVar3;
  return;
}


// ===== 0015a8bc  FUN_0015a8bc =====

void FUN_0015a8bc(long param_1,undefined8 *param_2)

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
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0017a950;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x15;
  *(char **)((long)puVar1 + lVar2 + 0x20) = "reference temporary for ";
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = 0x18;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x30) = uVar3;
  return;
}


// ===== 0015a96c  FUN_0015a96c =====

undefined8 FUN_0015a96c(long *param_1,undefined8 *param_2)

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
          lVar3 = FUN_0015adf4(param_1);
        }
        else {
          uVar9 = 1;
          *param_1 = (long)(pcVar6 + 2);
          lVar3 = FUN_0015adf4(param_1);
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
        *puVar10 = &PTR_FUN_0017aab0;
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


// ===== 0015ab48  FUN_0015ab48 =====

undefined8 FUN_0015ab48(void)

{
  return 0;
}


// ===== 0015ab54  FUN_0015ab54 =====

undefined8 FUN_0015ab54(void)

{
  return 0;
}


// ===== 0015ab60  FUN_0015ab60 =====

undefined8 FUN_0015ab60(void)

{
  return 0;
}


// ===== 0015ab6c  FUN_0015ab6c =====

void FUN_0015ab6c(void)

{
  return;
}


// ===== 0015ab74  FUN_0015ab74 =====

void FUN_0015ab74(long param_1,undefined8 *param_2)

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
                    /* WARNING: Could not recover jumptable at 0x0015ac4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
  return;
}


// ===== 0015ac54  FUN_0015ac54 =====

void FUN_0015ac54(void)

{
  return;
}


// ===== 0015ac5c  FUN_0015ac5c =====

undefined1  [16] FUN_0015ac5c(void)

{
  return ZEXT816(0);
}


// ===== 0015ac6c  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0015ac74  FUN_0015ac74 =====

void FUN_0015ac74(long param_1,undefined8 *param_2)

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
  uVar4 = s_construction_vtable_for_00112a66._16_8_;
  uVar3 = s_construction_vtable_for_00112a66._0_8_;
  pcVar2 = (char *)((long)pvVar5 + lVar6);
  *(undefined8 *)(pcVar2 + 8) = s_construction_vtable_for_00112a66._8_8_;
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
                    /* WARNING: Could not recover jumptable at 0x0015ade0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar8 + 0x28))(plVar8,param_2);
  return;
}


// ===== 0015adec  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0015adf4  FUN_0015adf4 =====

undefined8 * FUN_0015adf4(undefined8 *param_1)

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
    if (0xfffffffffffff00f < lVar6 - 0xfd0U) goto LAB_0015aefc;
    puVar4 = (undefined8 *)malloc(0x1000);
    if (puVar4 == (undefined8 *)0x0) goto LAB_0015afac;
    *puVar4 = puVar10;
    puVar4[1] = 0;
  }
  else {
    puVar10 = (undefined8 *)param_1[0x266];
    lVar6 = puVar10[1];
    if (0xfffffffffffff00f < lVar6 - 0xfd0U) {
      pcVar9 = "(anonymous namespace)";
      uVar8 = 0x15;
      goto LAB_0015aefc;
    }
    puVar4 = (undefined8 *)malloc(0x1000);
    if (puVar4 == (undefined8 *)0x0) {
LAB_0015afac:
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
LAB_0015aefc:
  puVar10[1] = lVar6 + 0x20;
  puVar4 = (undefined8 *)((long)puVar10 + lVar6 + 0x10);
  *puVar4 = &PTR_FUN_0017aa40;
  *(char **)((long)puVar10 + lVar6 + 0x20) = pcVar9;
  *(ulong *)((long)puVar10 + lVar6 + 0x28) = uVar8;
  *(undefined1 *)((long)puVar10 + lVar6 + 0x18) = 8;
  *(ushort *)((long)puVar10 + lVar6 + 0x19) =
       *(ushort *)((long)puVar10 + lVar6 + 0x19) & 0xf000 | 0x540;
  return puVar4;
}


// ===== 0015afb0  FUN_0015afb0 =====

void FUN_0015afb0(long param_1,undefined8 *param_2)

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
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0017aa40;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 8;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = uVar5;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar4;
  return;
}


// ===== 0015b050  FUN_0015b050 =====

void FUN_0015b050(long param_1,undefined8 *param_2)

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


// ===== 0015b0e4  FUN_0015b0e4 =====

undefined1  [16] FUN_0015b0e4(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x10);
}


// ===== 0015b0f4  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0015b0fc  FUN_0015b0fc =====

void FUN_0015b0fc(long param_1,undefined8 *param_2)

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
                    /* WARNING: Could not recover jumptable at 0x0015b218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  return;
}


// ===== 0015b220  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0015b228  FUN_0015b228 =====

long FUN_0015b228(long *param_1,undefined8 param_2,undefined1 *param_3)

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
    if ((short *)param_1[1] == psVar4) goto LAB_0015b35c;
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
    *puVar5 = &PTR_FUN_0017aa40;
    *(undefined1 *)((long)puVar3 + lVar2 + 0x18) = 8;
    *(ushort *)((long)puVar3 + lVar2 + 0x19) =
         *(ushort *)((long)puVar3 + lVar2 + 0x19) & 0xf000 | 0x540;
    *(undefined **)((long)puVar3 + lVar2 + 0x20) = &DAT_00112874;
    *(undefined8 *)((long)puVar3 + lVar2 + 0x28) = 3;
    psVar4 = (short *)*param_1;
    if ((short *)param_1[1] == psVar4) goto LAB_0015b35c;
  }
  if ((char)*psVar4 == 'S') {
    lVar1 = FUN_0015bf00();
    lVar2 = lVar1;
    if (lVar1 != 0) {
      if (*(char *)(lVar1 + 8) == '\x1b') {
        lVar2 = FUN_0015c1dc(param_1,param_2,puVar5);
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
LAB_0015b35c:
  lVar2 = FUN_0015c1dc(param_1,param_2,puVar5,0);
  return lVar2;
}


// ===== 0015b3a8  FUN_0015b3a8 =====

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_0015b3a8(long *param_1,ulong param_2)

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
LAB_0015b58c:
      if ((pcVar18 != pcVar20) && (*pcVar18 == 'E')) goto LAB_0015b820;
      puVar11 = (undefined8 *)FUN_00159718(param_1);
      if (puVar11 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      plVar9 = (long *)param_1[3];
      if (plVar9 != (long *)param_1[4]) {
        cVar15 = *(char *)(puVar11 + 1);
        param_1[3] = (long)(plVar9 + 1);
        *plVar9 = (long)puVar11;
        if (cVar15 != '\"') goto LAB_0015b5d4;
LAB_0015b788:
        puVar11 = (undefined8 *)puVar11[3];
        plVar9 = (long *)param_1[0x49];
        if (plVar9 == (long *)param_1[0x4a]) goto LAB_0015b79c;
        goto LAB_0015b6f4;
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
      if (cVar15 == '\"') goto LAB_0015b788;
LAB_0015b5d4:
      if (cVar15 != ')') goto LAB_0015b6e4;
      pvVar23 = (void *)param_1[0x266];
      plVar9 = (long *)puVar11[2];
      lVar14 = puVar11[3];
      lVar19 = *(long *)((long)pvVar23 + 8);
      puVar12 = (undefined8 *)pvVar23;
      if (lVar19 - 0xfd0U < 0xfffffffffffff010) {
        puVar12 = (undefined8 *)malloc(0x1000);
        if (puVar12 == (undefined8 *)0x0) goto LAB_0015b928;
        lVar19 = 0;
        *puVar12 = pvVar23;
        puVar12[1] = 0;
        param_1[0x266] = (long)puVar12;
      }
      *(long *)((long)puVar12 + 8) = lVar19 + 0x20;
      lVar21 = lVar14 << 3;
      puVar11 = (undefined8 *)((long)puVar12 + lVar19 + 0x10);
      *puVar11 = &PTR_FUN_0017c860;
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
        if ((*(ushort *)(*plVar13 + 9) & 0x300) != 0x100) goto joined_r0x0015b67c;
        plVar13 = plVar13 + 1;
        lVar4 = lVar4 + -8;
        lVar6 = lVar4;
      }
      uVar16 = uVar1 | 0x980;
      *(ushort *)((long)puVar12 + lVar19 + 0x19) = uVar16;
joined_r0x0015b67c:
      do {
        if (lVar8 == 0) goto LAB_0015b6a8;
        if ((*(ushort *)(*plVar7 + 9) & 0xc00) != 0x400) goto joined_r0x0015b6b4;
        lVar5 = lVar5 + -8;
        plVar7 = plVar7 + 1;
        lVar8 = lVar5;
      } while( true );
    }
    plVar9 = param_1 + 5;
    lVar17 = param_1[3] - param_1[2] >> 3;
    pcVar18 = (char *)*param_1;
    pcVar20 = (char *)param_1[1];
LAB_0015b454:
    do {
      if ((pcVar18 != pcVar20) && (*pcVar18 == 'E')) goto LAB_0015b820;
      lVar14 = FUN_00159718(param_1);
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
        if (pcVar18 == pcVar20) goto LAB_0015b454;
      }
      else {
        param_1[3] = (long)(plVar2 + 1);
        *plVar2 = lVar14;
        pcVar18 = (char *)*param_1;
        pcVar20 = (char *)param_1[1];
        if (pcVar18 == pcVar20) goto LAB_0015b454;
      }
    } while (*pcVar18 != 'Q');
LAB_0015b8b4:
    uVar3 = *(undefined1 *)((long)param_1 + 0x30a);
    *param_1 = (long)(pcVar18 + 1);
    *(undefined1 *)((long)param_1 + 0x30a) = 1;
                    /* try { // try from 0015b8c8 to 0015b8cf has its CatchHandler @ 0015b93c */
    lVar14 = FUN_0015cce8(param_1);
    *(undefined1 *)((long)param_1 + 0x30a) = uVar3;
    if (((lVar14 != 0) && (pcVar18 = (char *)*param_1, pcVar18 != (char *)param_1[1])) &&
       (*pcVar18 == 'E')) goto LAB_0015b824;
  }
  return (undefined8 *)0x0;
LAB_0015b6a8:
  uVar16 = uVar16 & 0xf3ff | 0x400;
  *(ushort *)((long)puVar12 + lVar19 + 0x19) = uVar16;
joined_r0x0015b6b4:
  do {
    if (lVar14 == 0) break;
    if ((*(ushort *)(*plVar9 + 9) & 0xc0) != 0x40) goto LAB_0015b6e4;
    lVar21 = lVar21 + -8;
    plVar9 = plVar9 + 1;
    lVar14 = lVar21;
  } while( true );
  *(ushort *)((long)puVar12 + lVar19 + 0x19) = uVar16 & 0xff7f | 0x40;
LAB_0015b6e4:
  plVar9 = (long *)param_1[0x49];
  if (plVar9 == (long *)param_1[0x4a]) {
LAB_0015b79c:
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
    if (pcVar18 == pcVar20) goto LAB_0015b58c;
  }
  else {
LAB_0015b6f4:
    param_1[0x49] = (long)(plVar9 + 1);
    *plVar9 = (long)puVar11;
    pcVar18 = (char *)*param_1;
    pcVar20 = (char *)param_1[1];
    if (pcVar18 == pcVar20) goto LAB_0015b58c;
  }
  if (*pcVar18 == 'Q') goto LAB_0015b8b4;
  goto LAB_0015b58c;
LAB_0015b820:
  lVar14 = 0;
LAB_0015b824:
  *param_1 = (long)(pcVar18 + 1);
  auVar24 = FUN_00159c04(param_1,lVar17);
  pvVar23 = (void *)param_1[0x266];
  lVar17 = *(long *)((long)pvVar23 + 8);
  puVar11 = (undefined8 *)pvVar23;
  if (lVar17 - 0xfc0U < 0xfffffffffffff010) {
    puVar11 = (undefined8 *)malloc(0x1000);
    if (puVar11 == (undefined8 *)0x0) {
LAB_0015b928:
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
  *puVar12 = &PTR_FUN_0017c8d0;
  *(undefined1 *)((long)puVar11 + lVar17 + 0x18) = 0x2b;
  *(undefined1 (*) [16])((long)puVar11 + lVar17 + 0x20) = auVar24;
  *(long *)((long)puVar11 + lVar17 + 0x30) = lVar14;
  *(ushort *)((long)puVar11 + lVar17 + 0x19) =
       *(ushort *)((long)puVar11 + lVar17 + 0x19) & 0xf000 | 0x540;
  return puVar12;
}


// ===== 0015b944  FUN_0015b944 =====

void FUN_0015b944(long param_1,undefined8 *param_2,undefined8 *param_3)

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
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0017c940;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x2d;
  uVar3 = *param_2;
  uVar4 = *param_3;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = uVar4;
  return;
}


// ===== 0015b9ec  FUN_0015b9ec =====

undefined8 * FUN_0015b9ec(long *param_1)

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
                FUN_0015c85c(param_1 + 0x53,&local_48);
              }
              puVar5 = (undefined8 *)FUN_0015c934(param_1,&DAT_00111321);
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
LAB_0015bdb4:
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
          *puVar13 = &PTR_FUN_0017ab20;
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
          if (puVar5 == (undefined8 *)0x0) goto LAB_0015bdb4;
          lVar8 = 0;
          *puVar5 = pvVar15;
          puVar5[1] = 0;
          param_1[0x266] = (long)puVar5;
        }
        *(long *)((long)puVar5 + 8) = lVar8 + 0x20;
        puVar13 = (undefined8 *)((long)puVar5 + lVar8 + 0x10);
        *puVar13 = &PTR_FUN_0017aa40;
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


// ===== 0015bdbc  FUN_0015bdbc =====

undefined8 * FUN_0015bdbc(long *param_1)

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
      puVar3 = (undefined8 *)FUN_0015cce8();
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
        *puVar6 = &PTR_FUN_0017b440;
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


// ===== 0015bf00  FUN_0015bf00 =====

undefined8 * FUN_0015bf00(long *param_1)

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
        *puVar4 = &PTR_FUN_0017c470;
        puVar5 = (undefined8 *)FUN_00168e04(param_1,puVar4);
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


// ===== 0015c1dc  FUN_0015c1dc =====

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_0015c1dc(long *param_1,undefined1 *param_2,undefined8 *param_3,long param_4)

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
  uVar5 = FUN_0015a96c(param_1,&local_60);
  if ((uVar5 & 1) != 0) goto LAB_0015c218;
  pbVar12 = (byte *)*param_1;
  pbVar16 = (byte *)param_1[1];
  if (param_3 == (undefined8 *)0x0) {
LAB_0015c254:
    bVar1 = true;
    if (pbVar12 == pbVar16) goto LAB_0015c3e4;
LAB_0015c260:
    if (*pbVar12 == 0x4c) {
      pbVar12 = pbVar12 + 1;
      *param_1 = (long)pbVar12;
    }
    if ((pbVar16 != pbVar12) && (bVar3 = *pbVar12, 0x30 < bVar3)) {
      if (bVar3 < 0x3a) {
        puVar7 = (undefined8 *)FUN_0015adf4(param_1);
        lVar14 = local_60;
      }
      else {
        if (bVar3 != 0x55) goto LAB_0015c2e0;
        puVar7 = (undefined8 *)FUN_00162ed0(param_1,param_2);
        lVar14 = local_60;
      }
      goto joined_r0x0015c5c4;
    }
LAB_0015c2e0:
    if ((1 < (ulong)((long)pbVar16 - (long)pbVar12)) && (*(short *)pbVar12 == 0x4344)) {
      lVar14 = param_1[2];
      lVar13 = param_1[3];
      *param_1 = (long)(pbVar12 + 2);
      lVar9 = FUN_0015adf4(param_1);
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
        lVar9 = FUN_0015adf4(param_1);
        if (lVar9 == 0) {
          return (undefined8 *)0x0;
        }
      }
      *param_1 = (long)(pcVar2 + 1);
      auVar21 = FUN_00159c04(param_1,lVar13 - lVar14 >> 3);
      pvVar19 = (void *)param_1[0x266];
      lVar14 = *(long *)((long)pvVar19 + 8);
      puVar8 = (undefined8 *)pvVar19;
      if (lVar14 - 0xfd0U < 0xfffffffffffff010) {
        puVar8 = (undefined8 *)malloc(0x1000);
        if (puVar8 == (undefined8 *)0x0) goto LAB_0015c7b0;
        lVar14 = 0;
        *puVar8 = pvVar19;
        puVar8[1] = 0;
        param_1[0x266] = (long)puVar8;
      }
      *(long *)((long)puVar8 + 8) = lVar14 + 0x20;
      puVar7 = (undefined8 *)((long)puVar8 + lVar14 + 0x10);
      *puVar7 = &PTR_FUN_0017c5c0;
      *(undefined1 (*) [16])((long)puVar8 + lVar14 + 0x20) = auVar21;
      *(undefined1 *)((long)puVar8 + lVar14 + 0x18) = 0x35;
      *(ushort *)((long)puVar8 + lVar14 + 0x19) =
           *(ushort *)((long)puVar8 + lVar14 + 0x19) & 0xf000 | 0x540;
      lVar14 = local_60;
      goto joined_r0x0015c5c4;
    }
    if ((pbVar16 == pbVar12) || (1 < *pbVar12 - 0x43)) goto LAB_0015c3e4;
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
        if (puVar8 == (undefined8 *)0x0) goto LAB_0015c7b0;
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
      *puVar8 = &PTR_FUN_0017c4f8;
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
        if ((pbVar16 == pbVar18) || (uVar15 = (uint)*pbVar18, 4 < uVar15 - 0x31)) goto LAB_0015c218;
        *param_1 = (long)(pbVar18 + 1);
        if (param_2 != (undefined1 *)0x0) {
          *param_2 = 1;
        }
        if ((bVar11) && (lVar14 = FUN_00158fd4(param_1,param_2), lVar14 == 0)) {
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
      puVar7 = (undefined8 *)FUN_001697e4(param_1,&local_58,uVar10,uVar15 - 0x30);
      param_3 = puVar8;
      lVar14 = local_60;
      goto joined_r0x0015c5c4;
    }
LAB_0015c218:
    puVar6 = (undefined8 *)0x0;
  }
  else {
    if (pbVar12 == pbVar16) {
      bVar1 = true;
      puVar7 = (undefined8 *)FUN_00168700(param_1,param_2);
      lVar14 = local_60;
      goto joined_r0x0015c5c4;
    }
    if (*pbVar12 != 0x46) goto LAB_0015c254;
    bVar1 = false;
    pbVar12 = pbVar12 + 1;
    *param_1 = (long)pbVar12;
    if (pbVar12 != pbVar16) goto LAB_0015c260;
LAB_0015c3e4:
    puVar7 = (undefined8 *)FUN_00168700(param_1,param_2);
    lVar14 = local_60;
joined_r0x0015c5c4:
    local_60 = lVar14;
    if ((puVar7 == (undefined8 *)0x0) || (lVar14 == 0)) {
      if (puVar7 == (undefined8 *)0x0) goto LAB_0015c218;
    }
    else {
      pvVar19 = (void *)param_1[0x266];
      lVar13 = *(long *)((long)pvVar19 + 8);
      puVar8 = (undefined8 *)pvVar19;
      if (lVar13 - 0xfd0U < 0xfffffffffffff010) {
        puVar8 = (undefined8 *)malloc(0x1000);
        if (puVar8 == (undefined8 *)0x0) goto LAB_0015c7b0;
        lVar13 = 0;
        *puVar8 = pvVar19;
        puVar8[1] = 0;
        param_1[0x266] = (long)puVar8;
      }
      *(long *)((long)puVar8 + 8) = lVar13 + 0x20;
      puVar6 = (undefined8 *)((long)puVar8 + lVar13 + 0x10);
      *puVar6 = &PTR_FUN_0017c6a0;
      *(long *)((long)puVar8 + lVar13 + 0x20) = lVar14;
      *(undefined8 **)((long)puVar8 + lVar13 + 0x28) = puVar7;
      *(undefined1 *)((long)puVar8 + lVar13 + 0x18) = 0x1c;
      *(ushort *)((long)puVar8 + lVar13 + 0x19) =
           *(ushort *)((long)puVar8 + lVar13 + 0x19) & 0xf000 | 0x540;
      puVar7 = puVar6;
    }
    puVar7 = (undefined8 *)FUN_00168e04(param_1,puVar7);
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
LAB_0015c7b0:
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
      *puVar6 = &PTR_FUN_0017c780;
      uVar4 = *(ushort *)((long)puVar8 + lVar14 + 0x19);
      uVar17 = 0x18;
    }
    else {
      pvVar19 = (void *)param_1[0x266];
      lVar14 = *(long *)((long)pvVar19 + 8);
      puVar8 = (undefined8 *)pvVar19;
      if (lVar14 - 0xfd0U < 0xfffffffffffff010) {
        puVar8 = (undefined8 *)malloc(0x1000);
        if (puVar8 == (undefined8 *)0x0) goto LAB_0015c7b0;
        lVar14 = 0;
        *puVar8 = pvVar19;
        puVar8[1] = 0;
        param_1[0x266] = (long)puVar8;
      }
      *(long *)((long)puVar8 + 8) = lVar14 + 0x20;
      puVar6 = (undefined8 *)((long)puVar8 + lVar14 + 0x10);
      *puVar6 = &PTR_FUN_0017c710;
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


// ===== 0015c7bc  FUN_0015c7bc =====

void FUN_0015c7bc(long param_1,undefined8 *param_2)

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
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0017aa40;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 8;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = uVar5;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar4;
  return;
}


// ===== 0015c85c  FUN_0015c85c =====

void FUN_0015c85c(undefined8 *param_1,undefined8 *param_2)

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


// ===== 0015c934  FUN_0015c934 =====

undefined8 * FUN_0015c934(long param_1,char *param_2)

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
  *puVar4 = &PTR_FUN_0017aa40;
  *(undefined1 *)((long)puVar1 + lVar3 + 0x18) = 8;
  *(char **)((long)puVar1 + lVar3 + 0x20) = param_2;
  *(size_t *)((long)puVar1 + lVar3 + 0x28) = sVar2;
  *(ushort *)((long)puVar1 + lVar3 + 0x19) =
       *(ushort *)((long)puVar1 + lVar3 + 0x19) & 0xf000 | 0x540;
  return puVar4;
}


// ===== 0015c9dc  FUN_0015c9dc =====

bool FUN_0015c9dc(long param_1)

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
                    /* try { // try from 0015ca30 to 0015ca37 has its CatchHandler @ 0015ca74 */
    bVar1 = (**(code **)*puVar2)(puVar2);
    *(undefined1 *)(param_1 + 0x20) = 0;
    return (bool)(bVar1 & 1);
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  return bVar1 < 0x40;
}


// ===== 0015ca7c  FUN_0015ca7c =====

bool FUN_0015ca7c(long param_1)

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
                    /* try { // try from 0015cad0 to 0015cad7 has its CatchHandler @ 0015cb14 */
    bVar1 = (**(code **)(*plVar2 + 8))(plVar2);
    *(undefined1 *)(param_1 + 0x20) = 0;
    return (bool)(bVar1 & 1);
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  return (bVar1 & 3) == 0;
}


// ===== 0015cb1c  FUN_0015cb1c =====

bool FUN_0015cb1c(long param_1)

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
                    /* try { // try from 0015cb70 to 0015cb77 has its CatchHandler @ 0015cbb4 */
    bVar2 = (**(code **)(*plVar3 + 0x10))(plVar3);
    *(undefined1 *)(param_1 + 0x20) = 0;
    return (bool)(bVar2 & 1);
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  return uVar1 == 0;
}


// ===== 0015cbbc  FUN_0015cbbc =====

void FUN_0015cbbc(long param_1)

{
  if (*(char *)(param_1 + 0x20) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x20) = 1;
                    /* try { // try from 0015cbfc to 0015cc03 has its CatchHandler @ 0015cc18 */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))(*(long **)(param_1 + 0x18));
  *(undefined1 *)(param_1 + 0x20) = 0;
  return;
}


// ===== 0015cc20  FUN_0015cc20 =====

void FUN_0015cc20(long param_1)

{
  if (*(char *)(param_1 + 0x20) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x20) = 1;
                    /* try { // try from 0015cc60 to 0015cc63 has its CatchHandler @ 0015cc78 */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
  *(undefined1 *)(param_1 + 0x20) = 0;
  return;
}


// ===== 0015cc80  FUN_0015cc80 =====

void FUN_0015cc80(long param_1)

{
  if (*(char *)(param_1 + 0x20) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x20) = 1;
                    /* try { // try from 0015ccc0 to 0015ccc3 has its CatchHandler @ 0015ccd8 */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x28))();
  *(undefined1 *)(param_1 + 0x20) = 0;
  return;
}


// ===== 0015cce0  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0015cce8  FUN_0015cce8 =====

undefined8 * FUN_0015cce8(long *param_1)

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
    if (((byte)(&DAT_0017ab80)[uVar22 * 0x10] < bVar1) ||
       ((bVar1 == (&DAT_0017ab80)[uVar22 * 0x10] &&
        ((byte)(&DAT_0017ab81)[uVar22 * 0x10] < *pbVar16)))) {
      uVar19 = uVar22 + 1;
      uVar22 = uVar21;
    }
    uVar21 = uVar22;
  } while (uVar21 != uVar19);
  lVar9 = uVar19 * 0x10;
  if ((bVar1 == (&DAT_0017ab80)[lVar9]) && (*pbVar16 == (&DAT_0017ab81)[lVar9])) {
    plVar25 = (long *)(&PTR_s_operator___0017ab88)[uVar19 * 2];
    pbVar16 = pbVar13 + 2;
    bVar1 = (&DAT_0017ab82)[lVar9];
    *param_1 = (long)pbVar16;
    sVar4 = strlen((char *)plVar25);
    plVar26 = plVar25;
    sVar27 = sVar4;
    if (bVar1 < 0xb) {
      if ((sVar4 < 8) || (*plVar25 != 0x726f74617265706f)) goto LAB_0015e0a4;
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
      bVar1 = (&DAT_0017ab83)[lVar9];
      lVar9 = FUN_0015cce8(param_1);
      if (lVar9 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar8 = (void *)param_1[0x266];
      lVar14 = *(long *)((long)pvVar8 + 8);
      puVar5 = (undefined8 *)pvVar8;
      if (lVar14 - 0xfc0U < 0xfffffffffffff010) {
        puVar5 = (undefined8 *)malloc(0x1000);
        if (puVar5 == (undefined8 *)0x0) {
LAB_0015e0dc:
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
      *puVar10 = &PTR_FUN_0017afe0;
      *(undefined1 *)((long)puVar5 + lVar14 + 0x18) = 0x42;
      *(long **)((long)puVar5 + lVar14 + 0x20) = plVar26;
      *(size_t *)((long)puVar5 + lVar14 + 0x28) = sVar27;
      *(long *)((long)puVar5 + lVar14 + 0x30) = lVar9;
      *(ushort *)((long)puVar5 + lVar14 + 0x19) =
           *(ushort *)((long)puVar5 + lVar14 + 0x19) & 0xf000 | bVar1 >> 1 | 0x540;
      return puVar10;
    case 1:
      if ((pbVar16 != pbVar28) && (*pbVar16 == 0x5f)) {
        cVar2 = (&DAT_0017ab83)[lVar9];
        *param_1 = (long)(pbVar13 + 3);
        local_80 = (long *)CONCAT44(local_80._4_4_,(int)cVar2 >> 1);
        local_a0._0_8_ = FUN_0015cce8(param_1);
        if ((long *)local_a0._0_8_ != (long *)0x0) {
          puVar5 = (undefined8 *)FUN_00161714(param_1,local_70,local_a0,&local_80);
          return puVar5;
        }
        return (undefined8 *)0x0;
      }
      local_70._0_8_ = FUN_0015cce8(param_1);
      if (local_70._0_8_ != 0) {
        local_a0._0_4_ = (int)(char)(&DAT_0017ab83)[lVar9] >> 1;
        puVar5 = (undefined8 *)FUN_0015e0f8(param_1,local_70,&local_90,local_a0);
        return puVar5;
      }
      return (undefined8 *)0x0;
    case 2:
      local_74 = (int)(char)(&DAT_0017ab83)[lVar9] >> 1;
      local_a0._0_8_ = FUN_0015cce8(param_1);
      if ((long *)local_a0._0_8_ == (long *)0x0) {
        return (undefined8 *)0x0;
      }
      local_80 = (long *)FUN_0015cce8(param_1);
      if (local_80 != (long *)0x0) {
        puVar5 = (undefined8 *)FUN_00161204(param_1,local_a0,local_70,&local_80,&local_74);
        return puVar5;
      }
      return (undefined8 *)0x0;
    case 3:
      local_70._0_8_ = FUN_0015cce8(param_1);
      if (local_70._0_8_ == 0) {
        return (undefined8 *)0x0;
      }
      local_a0._0_8_ = FUN_0015cce8(param_1);
      if ((long *)local_a0._0_8_ != (long *)0x0) {
        local_80 = (long *)CONCAT44(local_80._4_4_,(int)(char)(&DAT_0017ab83)[lVar9] >> 1);
        puVar5 = (undefined8 *)FUN_0015e1b8(param_1,local_70,local_a0,&local_80);
        return puVar5;
      }
      return (undefined8 *)0x0;
    case 4:
      local_70._0_8_ = FUN_0015cce8(param_1);
      if (local_70._0_8_ == 0) {
        return (undefined8 *)0x0;
      }
      local_a0._0_8_ = FUN_0015cce8(param_1);
      if ((long *)local_a0._0_8_ != (long *)0x0) {
        local_80 = (long *)CONCAT44(local_80._4_4_,(int)(char)(&DAT_0017ab83)[lVar9] >> 1);
        puVar5 = (undefined8 *)FUN_0015e274(param_1,local_70,&local_90,local_a0,&local_80);
        return puVar5;
      }
      return (undefined8 *)0x0;
    case 5:
      lVar14 = param_1[2];
      lVar6 = param_1[3];
      plVar26 = param_1 + 5;
      while ((pbVar16 == pbVar28 || (*pbVar16 != 0x5f))) {
        lVar15 = FUN_0015cce8(param_1);
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
      local_70 = FUN_00159c04(param_1,lVar6 - lVar14 >> 3);
      local_80 = (long *)FUN_00157a9c(param_1);
      if (local_80 == (long *)0x0) {
        return (undefined8 *)0x0;
      }
      uVar18 = FUN_00156dfc(param_1,&DAT_00112114,2);
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
          lVar15 = FUN_0015cce8(param_1);
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
      local_a0 = FUN_00159c04(param_1,lVar6 - lVar14 >> 3);
      local_74 = (int)(char)(&DAT_0017ab83)[lVar9] >> 1;
      puVar5 = (undefined8 *)
               FUN_0015e340(param_1,local_70,&local_80,local_a0,uVar23,
                            (int)(char)(&DAT_0017ab83)[lVar9] & 1,&local_74);
      return puVar5;
    case 6:
      lVar14 = FUN_0015cce8(param_1);
      if (lVar14 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar8 = (void *)param_1[0x266];
      bVar1 = (&DAT_0017ab83)[lVar9];
      lVar9 = *(long *)((long)pvVar8 + 8);
      puVar5 = (undefined8 *)pvVar8;
      if (lVar9 - 0xfd0U < 0xfffffffffffff010) {
        puVar5 = (undefined8 *)malloc(0x1000);
        if (puVar5 == (undefined8 *)0x0) goto LAB_0015e0dc;
        lVar9 = 0;
        *puVar5 = pvVar8;
        puVar5[1] = 0;
        param_1[0x266] = (long)puVar5;
      }
      *(long *)((long)puVar5 + 8) = lVar9 + 0x20;
      puVar10 = (undefined8 *)((long)puVar5 + lVar9 + 0x10);
      *puVar10 = &PTR_FUN_0017b210;
      *(undefined1 *)((long)puVar5 + lVar9 + 0x18) = 0x41;
      *(long *)((long)puVar5 + lVar9 + 0x20) = lVar14;
      *(undefined1 *)((long)puVar5 + lVar9 + 0x28) = uVar23;
      *(ushort *)((long)puVar5 + lVar9 + 0x19) =
           *(ushort *)((long)puVar5 + lVar9 + 0x19) & 0xf000 | bVar1 >> 1 | 0x540;
      *(byte *)((long)puVar5 + lVar9 + 0x29) = bVar1 & 1;
      return puVar10;
    case 7:
      local_a0._0_8_ = FUN_0015cce8(param_1);
      if ((long *)local_a0._0_8_ == (long *)0x0) {
        return (undefined8 *)0x0;
      }
      lVar14 = param_1[2];
      lVar6 = param_1[3];
      plVar26 = param_1 + 5;
      while( true ) {
        pcVar24 = (char *)*param_1;
        if ((pcVar24 != (char *)param_1[1]) && (*pcVar24 == 'E')) break;
        lVar15 = FUN_0015cce8(param_1);
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
      local_70 = FUN_00159c04(param_1,lVar6 - lVar14 >> 3);
      iVar12 = (int)(char)(&DAT_0017ab83)[lVar9] >> 1;
      goto LAB_0015dbe4;
    case 8:
      goto code_r0x0015d390;
    case 9:
      local_70._0_8_ = FUN_0015cce8(param_1);
      if (local_70._0_8_ == 0) {
        return (undefined8 *)0x0;
      }
      local_a0._0_8_ = FUN_0015cce8(param_1);
      if ((long *)local_a0._0_8_ != (long *)0x0) {
        local_80 = (long *)FUN_0015cce8(param_1);
        if (local_80 != (long *)0x0) {
          local_74 = (int)(char)(&DAT_0017ab83)[lVar9] >> 1;
          puVar5 = (undefined8 *)FUN_0015e5b4(param_1,local_70,local_a0,&local_80,&local_74);
          return puVar5;
        }
        return (undefined8 *)0x0;
      }
      return (undefined8 *)0x0;
    case 10:
      return (undefined8 *)0x0;
    case 0xb:
      local_70._0_8_ = FUN_00157a9c(param_1);
      if (local_70._0_8_ == 0) {
        return (undefined8 *)0x0;
      }
      local_a0._0_8_ = FUN_0015cce8(param_1);
      if ((long *)local_a0._0_8_ != (long *)0x0) {
        local_80 = (long *)CONCAT44(local_80._4_4_,(int)(char)(&DAT_0017ab83)[lVar9] >> 1);
        puVar5 = (undefined8 *)FUN_0015e67c(param_1,&local_90,local_70,local_a0,&local_80);
        return puVar5;
      }
      return (undefined8 *)0x0;
    case 0xc:
      bVar1 = (&DAT_0017ab83)[lVar9];
      if ((bVar1 & 1) == 0) {
        lVar9 = FUN_0015cce8(param_1);
      }
      else {
        lVar9 = FUN_00157a9c(param_1);
      }
      if (lVar9 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar8 = (void *)param_1[0x266];
      lVar14 = *(long *)((long)pvVar8 + 8);
      puVar5 = (undefined8 *)pvVar8;
      if (lVar14 - 0xfb0U < 0xfffffffffffff010) {
        puVar5 = (undefined8 *)malloc(0x1000);
        if (puVar5 == (undefined8 *)0x0) goto LAB_0015e0dc;
        lVar14 = 0;
        *puVar5 = pvVar8;
        puVar5[1] = 0;
        param_1[0x266] = (long)puVar5;
      }
      *(long *)((long)puVar5 + 8) = lVar14 + 0x40;
      puVar10 = (undefined8 *)((long)puVar5 + lVar14 + 0x10);
      *puVar10 = &PTR_FUN_0017b440;
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
                    /* catch() { ... } // from try @ 0015d398 with catch @ 0015e0f0 */
      *(undefined1 *)(param_1 + 0x61) = uVar23;
                    /* WARNING: Subroutine does not return */
      FUN_0017155c();
    }
  }
  if (bVar1 == 0x66) {
    if ((*pbVar16 == 0x70) ||
       (((uVar18 != 2 && (*pbVar16 == 0x4c)) && (0xfffffff5 < pbVar13[2] - 0x3a)))) {
      puVar5 = (undefined8 *)FUN_0015f62c(param_1);
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
      if (((byte)(&DAT_0017ab80)[uVar20 * 0x10] < bVar1) ||
         ((bVar1 == (&DAT_0017ab80)[uVar20 * 0x10] &&
          ((byte)(&DAT_0017ab81)[uVar20 * 0x10] < pbVar13[3])))) {
        uVar19 = uVar20 + 1;
        uVar20 = uVar21;
      }
      uVar21 = uVar20;
    } while (uVar21 != uVar19);
    lVar9 = uVar19 * 0x10;
    if (bVar1 != (&DAT_0017ab80)[lVar9]) {
      return (undefined8 *)0x0;
    }
    if (pbVar13[3] != (&DAT_0017ab81)[lVar9]) {
      return (undefined8 *)0x0;
    }
    cVar2 = (&DAT_0017ab82)[lVar9];
    *param_1 = (long)(pbVar13 + 4);
    if (cVar2 != '\x02') {
      if (cVar2 != '\x04') {
        return (undefined8 *)0x0;
      }
      pcVar24 = (&PTR_s_operator___0017ab88)[uVar19 * 2];
      sVar27 = strlen(pcVar24);
      if (pcVar24[sVar27 - 1] != '*') {
        return (undefined8 *)0x0;
      }
    }
    lVar9 = FUN_0015cce8(param_1);
    if (lVar9 == 0) {
      return (undefined8 *)0x0;
    }
    lVar14 = lVar9;
    if ((0x3effffffffU >> (uVar18 & 0x3f) & 1) == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = FUN_0015cce8(param_1);
      if (lVar6 == 0) {
        return (undefined8 *)0x0;
      }
      if (uVar22 != 0) {
        lVar14 = lVar6;
        lVar6 = lVar9;
      }
    }
    plVar26 = (long *)(&PTR_s_operator___0017ab88)[uVar19 * 2];
    sVar27 = strlen((char *)plVar26);
    if ((sVar27 < 8) || (*plVar26 != 0x726f74617265706f)) {
LAB_0015e0a4:
                    /* WARNING: Subroutine does not return */
      FUN_00154b08("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h",0xb4a,
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
      if (puVar5 == (undefined8 *)0x0) goto LAB_0015e0dc;
      lVar15 = 0;
      *puVar5 = pvVar8;
      puVar5[1] = 0;
      param_1[0x266] = (long)puVar5;
    }
    *(long *)((long)puVar5 + 8) = lVar15 + 0x40;
    puVar10 = (undefined8 *)((long)puVar5 + lVar15 + 0x10);
    *puVar10 = &PTR_FUN_0017bc20;
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
    puVar5 = (undefined8 *)FUN_0015b9ec(param_1);
    return puVar5;
  }
  if (bVar1 == 0x4c) {
    puVar5 = (undefined8 *)FUN_0015e744(param_1);
    return puVar5;
  }
  if (*(short *)pbVar13 == 0x6c69) {
    lVar9 = param_1[2];
    lVar14 = param_1[3];
    plVar26 = param_1 + 5;
    pbVar13 = pbVar13 + 2;
    *param_1 = (long)pbVar13;
    while ((pbVar13 == pbVar28 || (*pbVar13 != 0x45))) {
      lVar6 = FUN_0015f9e8(param_1);
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
    local_70 = FUN_00159c04(param_1,lVar14 - lVar9 >> 3);
    puVar5 = (undefined8 *)FUN_0015fc7c(param_1,local_70);
    return puVar5;
  }
  uVar18 = (long)pbVar28 - (long)pbVar13;
  if (1 < uVar18) {
    if (*(short *)pbVar13 == 0x636d) {
      *param_1 = (long)(pbVar13 + 2);
      puVar5 = (undefined8 *)FUN_0015fd20(param_1);
      return puVar5;
    }
    if (*(short *)pbVar13 == 0x786e) {
      *param_1 = (long)(pbVar13 + 2);
      local_70._0_8_ = FUN_0015cce8(param_1);
      if (local_70._0_8_ != 0) {
        local_90 = (long *)CONCAT44(local_90._4_4_,2);
        puVar5 = (undefined8 *)FUN_0015fe9c(param_1,local_70,&local_90);
        return puVar5;
      }
      return (undefined8 *)0x0;
    }
  }
  if (((pbVar28 == pbVar13) || (uVar18 < 2)) || (bVar1 != 0x72)) {
    if (1 < uVar18) goto LAB_0015d1f0;
  }
  else {
    if ((*pbVar16 | 0x20) == 0x71) {
      puVar5 = (undefined8 *)FUN_0015ff5c(param_1);
      return puVar5;
    }
LAB_0015d1f0:
    if (*(short *)pbVar13 == 0x6f73) {
      *param_1 = (long)(pbVar13 + 2);
      puVar5 = (undefined8 *)FUN_00160464(param_1);
      return puVar5;
    }
  }
  uVar18 = FUN_00156dfc(param_1,&DAT_00112346,2);
  if ((uVar18 & 1) != 0) {
    local_70._0_8_ = FUN_0015cce8(param_1);
    if (local_70._0_8_ != 0) {
      puVar5 = (undefined8 *)FUN_001607d4(param_1,local_70);
      return puVar5;
    }
    return (undefined8 *)0x0;
  }
  uVar18 = FUN_00156dfc(param_1,&DAT_001113ae,2);
  if ((uVar18 & 1) != 0) {
    if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'T')) {
      local_70._0_8_ = FUN_0015b9ec(param_1);
      if (local_70._0_8_ != 0) {
        puVar5 = (undefined8 *)FUN_00160874(param_1,local_70);
        return puVar5;
      }
      return (undefined8 *)0x0;
    }
    local_70._0_8_ = FUN_0015f62c(param_1);
    if (local_70._0_8_ == 0) {
      return (undefined8 *)0x0;
    }
LAB_0015dd58:
    puVar5 = (undefined8 *)FUN_00160914(param_1,local_70);
    return puVar5;
  }
  uVar18 = FUN_00156dfc(param_1,&DAT_00111744,2);
  if ((uVar18 & 1) != 0) {
    lVar9 = param_1[2];
    lVar14 = param_1[3];
    plVar26 = param_1 + 5;
    while ((pcVar24 = (char *)*param_1, pcVar24 == (char *)param_1[1] || (*pcVar24 != 'E'))) {
      lVar6 = FUN_00159718(param_1);
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
    local_70 = FUN_00159c04(param_1,lVar14 - lVar9 >> 3);
    lVar9 = FUN_001609c8(param_1,local_70);
    local_70._0_8_ = lVar9;
    goto LAB_0015dd58;
  }
  uVar18 = FUN_00156dfc(param_1,&DAT_00112b2c,2);
  if ((uVar18 & 1) != 0) {
    local_90 = (long *)FUN_00157a9c(param_1);
    if (local_90 == (long *)0x0) {
      return (undefined8 *)0x0;
    }
    lVar9 = param_1[2];
    lVar14 = param_1[3];
    pcVar24 = (char *)*param_1;
    if (pcVar24 == (char *)param_1[1]) goto LAB_0015db94;
    do {
      if (*pcVar24 == 'E') {
        *param_1 = (long)(pcVar24 + 1);
        local_70 = FUN_00159c04(param_1,lVar14 - lVar9 >> 3);
        puVar5 = (undefined8 *)FUN_00160a64(param_1,&local_90,local_70);
        return puVar5;
      }
LAB_0015db94:
      do {
        local_70._0_8_ = FUN_0015f9e8(param_1);
        if (local_70._0_8_ == 0) {
          return (undefined8 *)0x0;
        }
        FUN_00159a8c(param_1 + 2,local_70);
        pcVar24 = (char *)*param_1;
      } while (pcVar24 == (char *)param_1[1]);
    } while( true );
  }
  uVar18 = FUN_00156dfc(param_1,&DAT_00112983,2);
  if ((uVar18 & 1) != 0) {
    puVar5 = (undefined8 *)FUN_00160b10(param_1,"throw");
    return puVar5;
  }
  uVar18 = FUN_00156dfc(param_1,&DAT_00112b35,2);
  if ((uVar18 & 1) != 0) {
    local_70._0_8_ = FUN_0015cce8(param_1);
    if (local_70._0_8_ != 0) {
      puVar5 = (undefined8 *)FUN_00160bb8(param_1,local_70);
      return puVar5;
    }
    return (undefined8 *)0x0;
  }
  pcVar24 = (char *)*param_1;
  if ((pcVar24 == (char *)param_1[1]) || (*pcVar24 != 'u')) {
    puVar5 = (undefined8 *)FUN_00160c58(param_1,sVar3 == 0x7367);
    return puVar5;
  }
  *param_1 = (long)(pcVar24 + 1);
  local_90 = (long *)FUN_0015adf4(param_1);
  if (local_90 == (long *)0x0) {
    return (undefined8 *)0x0;
  }
  auVar29 = (**(code **)(*local_90 + 0x30))();
  if (((auVar29._8_8_ == 8) && (*auVar29._0_8_ == 0x666f646975755f5f)) &&
     (pcVar24 = (char *)*param_1, pcVar24 != (char *)param_1[1])) {
    if (*pcVar24 == 'z') {
      *param_1 = (long)(pcVar24 + 1);
      local_a0._0_8_ = FUN_0015cce8(param_1);
    }
    else {
      if (*pcVar24 != 't') goto LAB_0015de00;
      *param_1 = (long)(pcVar24 + 1);
      local_a0._0_8_ = FUN_00157a9c(param_1);
    }
    if ((long *)local_a0._0_8_ == (long *)0x0) {
      return (undefined8 *)0x0;
    }
    lVar9 = param_1[3] - param_1[2];
    FUN_00159a8c(param_1 + 2,local_a0);
  }
  else {
LAB_0015de00:
    lVar9 = param_1[3] - param_1[2];
    pcVar24 = (char *)*param_1;
    if (pcVar24 == (char *)param_1[1]) goto LAB_0015de24;
    while (*pcVar24 != 'E') {
LAB_0015de24:
      do {
        local_70._0_8_ = FUN_00159718(param_1);
        if (local_70._0_8_ == 0) {
          return (undefined8 *)0x0;
        }
        FUN_00159a8c(param_1 + 2,local_70);
        pcVar24 = (char *)*param_1;
      } while (pcVar24 == (char *)param_1[1]);
    }
    *param_1 = (long)(pcVar24 + 1);
  }
  local_70 = FUN_00159c04(param_1,lVar9 >> 3);
  iVar12 = 1;
  pplVar11 = &local_90;
LAB_0015dbe4:
  local_80 = (long *)CONCAT44(local_80._4_4_,iVar12);
  puVar5 = (undefined8 *)FUN_0015e434(param_1,pplVar11,local_70,&local_80);
  return puVar5;
code_r0x0015d390:
  lVar14 = param_1[0x61];
  *(undefined1 *)(param_1 + 0x61) = 0;
                    /* try { // try from 0015d398 to 0015d39f has its CatchHandler @ 0015e0f0 */
  local_a0._0_8_ = FUN_00157a9c(param_1);
  *(char *)(param_1 + 0x61) = (char)lVar14;
  if ((long *)local_a0._0_8_ == (long *)0x0) {
    return (undefined8 *)0x0;
  }
  pcVar24 = (char *)*param_1;
  pcVar17 = (char *)param_1[1];
  lVar14 = param_1[3] - param_1[2] >> 3;
  if (pcVar24 == pcVar17) {
LAB_0015dc28:
    lVar6 = FUN_0015cce8(param_1);
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
LAB_0015e0e4:
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
LAB_0015dc70:
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
    local_70 = FUN_00159c04(param_1,lVar14);
  }
  else {
    cVar2 = *pcVar24;
    if (cVar2 == '_') {
      pcVar24 = pcVar24 + 1;
      plVar26 = param_1 + 5;
      *param_1 = (long)pcVar24;
      do {
        if ((pcVar24 != pcVar17) && (*pcVar24 == 'E')) goto LAB_0015dc04;
        lVar6 = FUN_0015cce8(param_1);
        if (lVar6 == 0) {
          return (undefined8 *)0x0;
        }
        plVar25 = (long *)param_1[3];
        if (plVar25 == (long *)param_1[4]) {
          plVar7 = (long *)param_1[2];
          sVar27 = (long)plVar25 - (long)plVar7;
          if (plVar7 == plVar26) {
            pvVar8 = malloc(sVar27 * 2);
            if (pvVar8 == (void *)0x0) goto LAB_0015e0e4;
            if (plVar25 != plVar26) {
              memcpy(pvVar8,plVar26,sVar27);
            }
            param_1[2] = (long)pvVar8;
          }
          else {
            pvVar8 = realloc(plVar7,sVar27 * 2);
            param_1[2] = (long)pvVar8;
            if (pvVar8 == (void *)0x0) goto LAB_0015dc70;
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
    if (cVar2 != 'E') goto LAB_0015dc28;
LAB_0015dc04:
    *param_1 = (long)(pcVar24 + 1);
    local_70 = FUN_00159c04(param_1,lVar14);
    if (cVar2 == '_') goto LAB_0015dee8;
  }
  if (local_70._8_8_ != 1) {
    return (undefined8 *)0x0;
  }
LAB_0015dee8:
  local_80 = (long *)CONCAT44(local_80._4_4_,(int)(char)(&DAT_0017ab83)[lVar9] >> 1);
  puVar5 = (undefined8 *)FUN_0015e4f4(param_1,local_a0,local_70,&local_80);
  return puVar5;
}


// ===== 0015e0f8  FUN_0015e0f8 =====

void FUN_0015e0f8(long param_1,undefined8 *param_2,undefined8 *param_3,ushort *param_4)

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
  *(undefined ***)((long)puVar2 + lVar3 + 0x10) = &PTR_FUN_0017b050;
  uVar1 = *param_4;
  *(undefined1 *)((long)puVar2 + lVar3 + 0x18) = 0x38;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x20) = uVar4;
  *(ushort *)((long)puVar2 + lVar3 + 0x19) =
       *(ushort *)((long)puVar2 + lVar3 + 0x19) & 0xf000 | uVar1 & 0x3f | 0x540;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x30) = uVar7;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x28) = uVar6;
  return;
}


// ===== 0015e1b8  FUN_0015e1b8 =====

void FUN_0015e1b8(long param_1,undefined8 *param_2,undefined8 *param_3,ushort *param_4)

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
  *(undefined ***)((long)puVar2 + lVar3 + 0x10) = &PTR_FUN_0017b0c0;
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


// ===== 0015e274  FUN_0015e274 =====

void FUN_0015e274(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
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
  *(undefined ***)((long)puVar2 + lVar3 + 0x10) = &PTR_FUN_0017b130;
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


// ===== 0015e340  FUN_0015e340 =====

void FUN_0015e340(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
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
  *(undefined ***)((long)puVar2 + lVar3 + 0x10) = &PTR_FUN_0017b1a0;
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


// ===== 0015e434  FUN_0015e434 =====

void FUN_0015e434(long param_1,undefined8 *param_2,undefined8 *param_3,ushort *param_4)

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
  *(undefined ***)((long)puVar2 + lVar3 + 0x10) = &PTR_FUN_0017b280;
  uVar1 = *param_4;
  *(undefined1 *)((long)puVar2 + lVar3 + 0x18) = 0x3f;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x20) = uVar4;
  *(ushort *)((long)puVar2 + lVar3 + 0x19) =
       *(ushort *)((long)puVar2 + lVar3 + 0x19) & 0xf000 | uVar1 & 0x3f | 0x540;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x30) = uVar7;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x28) = uVar6;
  return;
}


// ===== 0015e4f4  FUN_0015e4f4 =====

void FUN_0015e4f4(long param_1,undefined8 *param_2,undefined8 *param_3,ushort *param_4)

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
  *(undefined ***)((long)puVar2 + lVar3 + 0x10) = &PTR_FUN_0017b2f0;
  uVar1 = *param_4;
  *(undefined1 *)((long)puVar2 + lVar3 + 0x18) = 0x44;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x20) = uVar4;
  *(ushort *)((long)puVar2 + lVar3 + 0x19) =
       *(ushort *)((long)puVar2 + lVar3 + 0x19) & 0xf000 | uVar1 & 0x3f | 0x540;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x30) = uVar7;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x28) = uVar6;
  return;
}


// ===== 0015e5b4  FUN_0015e5b4 =====

void FUN_0015e5b4(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
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
  *(undefined ***)((long)puVar2 + lVar3 + 0x10) = &PTR_FUN_0017b360;
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


// ===== 0015e67c  FUN_0015e67c =====

void FUN_0015e67c(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
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
  *(undefined ***)((long)puVar2 + lVar3 + 0x10) = &PTR_FUN_0017b3d0;
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


// ===== 0015e744  FUN_0015e744 =====

undefined8 * FUN_0015e744(long *param_1)

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
code_r0x0015e814:
    local_28 = FUN_00157a9c();
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
      puVar5 = (undefined8 *)FUN_001636cc(param_1,&local_28,&local_38);
      return puVar5;
    }
    return (undefined8 *)0x0;
  }
  switch(*(char *)psVar10) {
  case 'A':
    local_38 = (byte *)FUN_00157a9c();
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
    puVar5 = (undefined8 *)FUN_00162d88(param_1,&local_38);
    return puVar5;
  default:
    goto code_r0x0015e814;
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
          puVar5 = (undefined8 *)FUN_00162e28(param_1,"nullptr");
          return puVar5;
        }
      }
    }
    break;
  case 'T':
    return (undefined8 *)0x0;
  case 'U':
    if ((((1 < uVar6) && ((char)psVar1[1] == 'l')) &&
        (local_38 = (byte *)FUN_00162ed0(param_1,0), local_38 != (byte *)0x0)) &&
       ((pcVar2 = (char *)*param_1, pcVar2 != (char *)param_1[1] && (*pcVar2 == 'E')))) {
      *param_1 = (long)(pcVar2 + 1);
      puVar5 = (undefined8 *)FUN_0016362c(param_1,&local_38);
      return puVar5;
    }
    break;
  case '_':
    if ((1 < uVar6) && (*psVar10 == 0x5a5f)) {
      *param_1 = (long)((long)psVar1 + 3);
      puVar5 = (undefined8 *)FUN_00156e84();
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
    puVar5 = (undefined8 *)FUN_00162b98(param_1,"signed char",0xb);
    return puVar5;
  case 'b':
    if ((2 < uVar6) && (*psVar10 == 0x3062 && *(char *)((long)psVar1 + 3) == 'E')) {
      *param_1 = (long)(psVar1 + 2);
      puVar5 = (undefined8 *)FUN_00162ce4(param_1,0);
      return puVar5;
    }
    uVar6 = FUN_00156dfc(param_1,&DAT_00111f9d,3);
    if ((uVar6 & 1) != 0) {
      puVar5 = (undefined8 *)FUN_00162ce4(param_1,1);
      return puVar5;
    }
    break;
  case 'c':
    *param_1 = (long)(psVar1 + 1);
    puVar5 = (undefined8 *)FUN_00162b98(param_1,&DAT_00112122,4);
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
LAB_0015f628:
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
        *puVar9 = &PTR_FUN_0017b600;
        *(undefined1 *)((long)puVar5 + lVar8 + 0x18) = 0x4f;
        *(ushort *)((long)puVar5 + lVar8 + 0x19) =
             *(ushort *)((long)puVar5 + lVar8 + 0x19) & 0xf000 | 0x540;
        uVar13 = 0x10;
LAB_0015eafc:
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
          if (puVar5 == (undefined8 *)0x0) goto LAB_0015f628;
          lVar8 = 0;
          *puVar5 = pvVar14;
          puVar5[1] = 0;
          param_1[0x266] = (long)puVar5;
        }
        *(long *)((long)puVar5 + 8) = lVar8 + 0x20;
        puVar9 = (undefined8 *)((long)puVar5 + lVar8 + 0x10);
        *puVar9 = &PTR_FUN_0017b670;
        *(undefined1 *)((long)puVar5 + lVar8 + 0x18) = 0x50;
        *(ushort *)((long)puVar5 + lVar8 + 0x19) =
             *(ushort *)((long)puVar5 + lVar8 + 0x19) & 0xf000 | 0x540;
        uVar13 = 0x20;
        goto LAB_0015eafc;
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
          if (puVar5 == (undefined8 *)0x0) goto LAB_0015f628;
          lVar8 = 0;
          *puVar5 = pvVar14;
          puVar5[1] = 0;
          param_1[0x266] = (long)puVar5;
        }
        *(long *)((long)puVar5 + 8) = lVar8 + 0x20;
        puVar9 = (undefined8 *)((long)puVar5 + lVar8 + 0x10);
        *puVar9 = &PTR_FUN_0017b590;
        *(undefined1 *)((long)puVar5 + lVar8 + 0x18) = 0x4e;
        *(ushort *)((long)puVar5 + lVar8 + 0x19) =
             *(ushort *)((long)puVar5 + lVar8 + 0x19) & 0xf000 | 0x540;
        uVar13 = 8;
        goto LAB_0015eafc;
      }
    }
    break;
  case 'h':
    *param_1 = (long)(psVar1 + 1);
    puVar5 = (undefined8 *)FUN_00162b98(param_1,"unsigned char",0xd);
    return puVar5;
  case 'i':
    *param_1 = (long)(psVar1 + 1);
    puVar5 = (undefined8 *)FUN_00162b98(param_1,&DAT_00111743,0);
    return puVar5;
  case 'j':
    puVar7 = &DAT_00113011;
    goto LAB_0015edcc;
  case 'l':
    puVar7 = &DAT_00111c2b;
LAB_0015edcc:
    *param_1 = (long)(psVar1 + 1);
    puVar5 = (undefined8 *)FUN_00162b98(param_1,puVar7,1);
    return puVar5;
  case 'm':
    puVar7 = &DAT_00112e66;
    goto LAB_0015edf8;
  case 'n':
    *param_1 = (long)(psVar1 + 1);
    puVar5 = (undefined8 *)FUN_00162b98(param_1,"__int128",8);
    return puVar5;
  case 'o':
    *param_1 = (long)(psVar1 + 1);
    puVar5 = (undefined8 *)FUN_00162b98(param_1,"unsigned __int128",0x11);
    return puVar5;
  case 's':
    *param_1 = (long)(psVar1 + 1);
    puVar5 = (undefined8 *)FUN_00162b98(param_1,"short",5);
    return puVar5;
  case 't':
    *param_1 = (long)(psVar1 + 1);
    puVar5 = (undefined8 *)FUN_00162b98(param_1,"unsigned short",0xe);
    return puVar5;
  case 'w':
    *param_1 = (long)(psVar1 + 1);
    puVar5 = (undefined8 *)FUN_00162b98(param_1,"wchar_t",7);
    return puVar5;
  case 'x':
    puVar7 = &DAT_00111c2d;
LAB_0015edf8:
    *param_1 = (long)(psVar1 + 1);
    puVar5 = (undefined8 *)FUN_00162b98(param_1,puVar7,2);
    return puVar5;
  case 'y':
    *param_1 = (long)(psVar1 + 1);
    puVar5 = (undefined8 *)FUN_00162b98(param_1,&DAT_00112577,3);
    return puVar5;
  }
  return (undefined8 *)0x0;
}


// ===== 0015f62c  FUN_0015f62c =====

undefined8 * FUN_0015f62c(long *param_1)

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
LAB_0015f840:
      *(long *)((long)puVar3 + 8) = lVar11 + 0x20;
      puVar6 = (undefined8 *)((long)puVar3 + lVar11 + 0x10);
      *puVar6 = &PTR_FUN_0017aa40;
      *(undefined1 *)((long)puVar3 + lVar11 + 0x18) = 8;
      *(ushort *)((long)puVar3 + lVar11 + 0x19) =
           *(ushort *)((long)puVar3 + lVar11 + 0x19) & 0xf000 | 0x540;
      *(undefined **)((long)puVar3 + lVar11 + 0x20) = &DAT_0011301e;
      *(undefined8 *)((long)puVar3 + lVar11 + 0x28) = 4;
      return puVar6;
    }
    puVar3 = (undefined8 *)malloc(0x1000);
    if (puVar3 != (undefined8 *)0x0) {
      lVar11 = 0;
      *puVar3 = pvVar12;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
      goto LAB_0015f840;
    }
    goto LAB_0015f9e4;
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
LAB_0015f9e4:
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
              *puVar6 = &PTR_FUN_0017bbb0;
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
                  puVar3 = (undefined8 *)FUN_00166064(param_1,&local_40);
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


// ===== 0015f9e8  FUN_0015f9e8 =====

void FUN_0015f9e8(long *param_1)

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
      lVar3 = FUN_0015cce8();
      if (((lVar3 != 0) && (lVar4 = FUN_0015cce8(param_1), lVar4 != 0)) &&
         (lVar6 = FUN_0015f9e8(param_1), lVar6 != 0)) {
        pvVar8 = (void *)param_1[0x266];
        lVar7 = *(long *)((long)pvVar8 + 8);
        puVar5 = (undefined8 *)pvVar8;
        if (lVar7 - 0xfc0U < 0xfffffffffffff010) {
          puVar5 = (undefined8 *)malloc(0x1000);
          if (puVar5 == (undefined8 *)0x0) {
LAB_0015fc78:
                    /* WARNING: Subroutine does not return */
            std::terminate();
          }
          lVar7 = 0;
          *puVar5 = pvVar8;
          puVar5[1] = 0;
          param_1[0x266] = (long)puVar5;
        }
        *(long *)((long)puVar5 + 8) = lVar7 + 0x30;
        *(undefined ***)((long)puVar5 + lVar7 + 0x10) = &PTR_FUN_0017bd70;
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
      lVar3 = FUN_0015cce8();
      if ((lVar3 != 0) && (lVar4 = FUN_0015f9e8(param_1), lVar4 != 0)) {
        pvVar8 = (void *)param_1[0x266];
        lVar6 = *(long *)((long)pvVar8 + 8);
        puVar5 = (undefined8 *)pvVar8;
        if (lVar6 - 0xfc0U < 0xfffffffffffff010) {
          puVar5 = (undefined8 *)malloc(0x1000);
          if (puVar5 == (undefined8 *)0x0) goto LAB_0015fc78;
          lVar6 = 0;
          *puVar5 = pvVar8;
          puVar5[1] = 0;
          param_1[0x266] = (long)puVar5;
        }
        *(long *)((long)puVar5 + 8) = lVar6 + 0x30;
        *(undefined ***)((long)puVar5 + lVar6 + 0x10) = &PTR_FUN_0017bd00;
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
      if (cVar2 != 'i') goto LAB_0015faec;
      *param_1 = (long)(pcVar1 + 2);
      lVar3 = FUN_0015adf4();
      if ((lVar3 != 0) && (lVar4 = FUN_0015f9e8(param_1), lVar4 != 0)) {
        pvVar8 = (void *)param_1[0x266];
        lVar6 = *(long *)((long)pvVar8 + 8);
        puVar5 = (undefined8 *)pvVar8;
        if (lVar6 - 0xfc0U < 0xfffffffffffff010) {
          puVar5 = (undefined8 *)malloc(0x1000);
          if (puVar5 == (undefined8 *)0x0) goto LAB_0015fc78;
          lVar6 = 0;
          *puVar5 = pvVar8;
          puVar5[1] = 0;
          param_1[0x266] = (long)puVar5;
        }
        *(long *)((long)puVar5 + 8) = lVar6 + 0x30;
        *(undefined ***)((long)puVar5 + lVar6 + 0x10) = &PTR_FUN_0017bd00;
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
LAB_0015faec:
  FUN_0015cce8();
  return;
}


// ===== 0015fc7c  FUN_0015fc7c =====

void FUN_0015fc7c(long param_1,undefined8 *param_2)

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
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0017bde0;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = 0;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x46;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x30) = uVar5;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = uVar4;
  return;
}


// ===== 0015fd20  FUN_0015fd20 =====

undefined8 * FUN_0015fd20(long *param_1)

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
  
  puVar2 = (undefined8 *)FUN_00157a9c();
  puVar3 = puVar2;
  if ((puVar2 == (undefined8 *)0x0) ||
     (puVar3 = (undefined8 *)FUN_0015cce8(param_1), puVar3 == (undefined8 *)0x0)) {
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
      *puVar8 = &PTR_FUN_0017be50;
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


// ===== 0015fe9c  FUN_0015fe9c =====

void FUN_0015fe9c(long param_1,undefined8 *param_2,ushort *param_3)

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
  *(undefined ***)((long)puVar2 + lVar3 + 0x10) = &PTR_FUN_0017b440;
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


// ===== 0015ff5c  FUN_0015ff5c =====

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_0015ff5c(long *param_1)

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
      lVar4 = FUN_00157a9c(param_1);
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
    auVar19 = FUN_00159c04(param_1,lVar2 - lVar10 >> 3);
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
      lVar4 = FUN_0015cce8(param_1);
      if (lVar4 == 0) {
        return (undefined8 *)0x0;
      }
      pcVar7 = (char *)*param_1;
      pcVar3 = (char *)param_1[1];
      if ((pcVar7 == pcVar3) || (*pcVar7 != 'N')) {
        uVar11 = 0;
        if (pcVar7 != pcVar3) goto LAB_001601e0;
LAB_0016015c:
        lVar18 = 0;
LAB_00160208:
        puVar13 = (undefined8 *)param_1[0x266];
        lVar8 = puVar13[1];
      }
      else {
        pcVar7 = pcVar7 + 1;
        uVar11 = 1;
        *param_1 = (long)pcVar7;
        if (pcVar7 == pcVar3) goto LAB_0016015c;
LAB_001601e0:
        if (*pcVar7 == 'R') {
          *param_1 = (long)(pcVar7 + 1);
          lVar18 = FUN_00158fd4(param_1,0);
          if (lVar18 == 0) {
            return (undefined8 *)0x0;
          }
          goto LAB_00160208;
        }
        lVar18 = 0;
        puVar13 = (undefined8 *)param_1[0x266];
        lVar8 = puVar13[1];
      }
      if (lVar8 - 0xfc0U < 0xfffffffffffff010) {
        puVar16 = (undefined8 *)malloc(0x1000);
        if (puVar16 == (undefined8 *)0x0) goto LAB_00160454;
        lVar8 = 0;
        *puVar16 = puVar13;
        puVar16[1] = 0;
        param_1[0x266] = (long)puVar16;
        puVar13 = puVar16;
      }
      puVar13[1] = lVar8 + 0x30;
      puVar16 = (undefined8 *)((long)puVar13 + lVar8 + 0x10);
      *puVar16 = &PTR_FUN_0017bec0;
      *(undefined1 *)((long)puVar13 + lVar8 + 0x18) = 0x54;
      *(long *)((long)puVar13 + lVar8 + 0x20) = lVar4;
      *(undefined1 *)((long)puVar13 + lVar8 + 0x28) = uVar11;
      *(ushort *)((long)puVar13 + lVar8 + 0x19) =
           *(ushort *)((long)puVar13 + lVar8 + 0x19) & 0xf000 | 0x540;
      *(long *)((long)puVar13 + lVar8 + 0x30) = lVar18;
      plVar14 = (long *)param_1[3];
      if (plVar14 != (long *)param_1[4]) goto LAB_00160348;
LAB_001602b4:
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
      if (psVar6 != psVar12) goto LAB_001603b4;
    }
    else {
      if ((char)*psVar6 == 'T') {
        *param_1 = (long)((long)psVar6 + 1);
        lVar4 = FUN_00157a9c(param_1);
        if (lVar4 == 0) {
          return (undefined8 *)0x0;
        }
        pvVar15 = (void *)param_1[0x266];
        lVar18 = *(long *)((long)pvVar15 + 8);
        puVar16 = (undefined8 *)pvVar15;
        if (lVar18 - 0xfd0U < 0xfffffffffffff010) {
          puVar16 = (undefined8 *)malloc(0x1000);
          if (puVar16 == (undefined8 *)0x0) goto LAB_00160454;
          lVar18 = 0;
          *puVar16 = pvVar15;
          puVar16[1] = 0;
          param_1[0x266] = (long)puVar16;
        }
        lVar8 = (long)puVar16 + lVar18;
        ppuVar9 = &PTR_FUN_0017bf30;
        *(long *)((long)puVar16 + 8) = lVar18 + 0x20;
        uVar11 = 0x55;
      }
      else {
        if ((char)*psVar6 != 'Q') {
          return (undefined8 *)0x0;
        }
        *param_1 = (long)((long)psVar6 + 1);
        lVar4 = FUN_0015cce8(param_1);
        if (lVar4 == 0) {
          return (undefined8 *)0x0;
        }
        pvVar15 = (void *)param_1[0x266];
        lVar18 = *(long *)((long)pvVar15 + 8);
        puVar16 = (undefined8 *)pvVar15;
        if (lVar18 - 0xfd0U < 0xfffffffffffff010) {
          puVar16 = (undefined8 *)malloc(0x1000);
          if (puVar16 == (undefined8 *)0x0) goto LAB_00160454;
          lVar18 = 0;
          *puVar16 = pvVar15;
          puVar16[1] = 0;
          param_1[0x266] = (long)puVar16;
        }
        lVar8 = (long)puVar16 + lVar18;
        ppuVar9 = &PTR_FUN_0017bfa0;
        *(long *)((long)puVar16 + 8) = lVar18 + 0x20;
        uVar11 = 0x56;
      }
      puVar16 = (undefined8 *)(lVar8 + 0x10);
      *puVar16 = ppuVar9;
      *(undefined1 *)(lVar8 + 0x18) = uVar11;
      *(ushort *)(lVar8 + 0x19) = *(ushort *)(lVar8 + 0x19) & 0xf000 | 0x540;
      *(long *)(lVar8 + 0x20) = lVar4;
      plVar14 = (long *)param_1[3];
      if (plVar14 == (long *)param_1[4]) goto LAB_001602b4;
LAB_00160348:
      param_1[3] = (long)(plVar14 + 1);
      *plVar14 = (long)puVar16;
      psVar6 = (short *)*param_1;
      psVar12 = (short *)param_1[1];
      if (psVar6 != psVar12) {
LAB_001603b4:
        if ((char)*psVar6 == 'E') {
          *param_1 = (long)((long)psVar6 + 1);
          auVar20 = FUN_00159c04(param_1,lVar2 - lVar10 >> 3);
          pvVar15 = (void *)param_1[0x266];
          lVar10 = *(long *)((long)pvVar15 + 8);
          puVar16 = (undefined8 *)pvVar15;
          if (lVar10 - 0xfc0U < 0xfffffffffffff010) {
            puVar16 = (undefined8 *)malloc(0x1000);
            if (puVar16 == (undefined8 *)0x0) {
LAB_00160454:
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
          *puVar13 = &PTR_FUN_0017c010;
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


// ===== 00160464  FUN_00160464 =====

undefined8 * FUN_00160464(long *param_1)

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
  
  puVar3 = (undefined8 *)FUN_00157a9c();
  puVar4 = puVar3;
  if ((puVar3 != (undefined8 *)0x0) &&
     (puVar4 = (undefined8 *)FUN_0015cce8(param_1), puVar4 != (undefined8 *)0x0)) {
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
LAB_0016056c:
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
              auVar18 = FUN_00159c04(param_1,lVar2 - lVar9 >> 3);
              pvVar6 = (void *)param_1[0x266];
              lVar9 = *(long *)((long)pvVar6 + 8);
              puVar13 = (undefined8 *)pvVar6;
              if (lVar9 - 4000U < 0xfffffffffffff010) {
                puVar13 = (undefined8 *)malloc(0x1000);
                if (puVar13 == (undefined8 *)0x0) goto LAB_001607c8;
                lVar9 = 0;
                *puVar13 = pvVar6;
                puVar13[1] = 0;
                param_1[0x266] = (long)puVar13;
              }
              *(long *)((long)puVar13 + 8) = lVar9 + 0x50;
              puVar5 = (undefined8 *)((long)puVar13 + lVar9 + 0x10);
              *puVar5 = &PTR_FUN_0017c080;
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
LAB_001607c8:
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
          *puVar13 = &PTR_FUN_0017aa40;
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
            goto LAB_0016056c;
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


// ===== 001607d4  FUN_001607d4 =====

void FUN_001607d4(long param_1,undefined8 *param_2)

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
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0017bc90;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x2a;
  uVar3 = *param_2;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  return;
}


// ===== 00160874  FUN_00160874 =====

void FUN_00160874(long param_1,undefined8 *param_2)

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
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0017c0f0;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x3e;
  uVar3 = *param_2;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  return;
}


// ===== 00160914  FUN_00160914 =====

void FUN_00160914(long param_1,undefined8 *param_2)

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
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0017b440;
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


// ===== 001609c8  FUN_001609c8 =====

void FUN_001609c8(long param_1,undefined8 *param_2)

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
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0017c160;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = uVar5;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar4;
  return;
}


// ===== 00160a64  FUN_00160a64 =====

void FUN_00160a64(long param_1,undefined8 *param_2,undefined8 *param_3)

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
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0017bde0;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x46;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x30) = uVar6;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = uVar5;
  return;
}


// ===== 00160b10  FUN_00160b10 =====

undefined8 * FUN_00160b10(long param_1,char *param_2)

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
  *puVar4 = &PTR_FUN_0017aa40;
  *(undefined1 *)((long)puVar1 + lVar3 + 0x18) = 8;
  *(char **)((long)puVar1 + lVar3 + 0x20) = param_2;
  *(size_t *)((long)puVar1 + lVar3 + 0x28) = sVar2;
  *(ushort *)((long)puVar1 + lVar3 + 0x19) =
       *(ushort *)((long)puVar1 + lVar3 + 0x19) & 0xf000 | 0x540;
  return puVar4;
}


// ===== 00160bb8  FUN_00160bb8 =====

void FUN_00160bb8(long param_1,undefined8 *param_2)

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
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0017c1d0;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x48;
  uVar3 = *param_2;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  return;
}


// ===== 00160c58  FUN_00160c58 =====

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_00160c58(long *param_1,ulong param_2)

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
    if (uVar10 == 2) goto LAB_00160cbc;
  }
  else {
    if (*psVar2 == 0x7273 && (char)psVar2[1] == 'N') {
      *param_1 = (long)psVar2 + 3;
      puVar4 = (undefined8 *)FUN_00168150(param_1);
      if (puVar4 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      puVar3 = puVar4;
      if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'I')) {
        lVar6 = FUN_0015b3a8(param_1,0);
        if (lVar6 == 0) {
          return (undefined8 *)0x0;
        }
        pvVar11 = (void *)param_1[0x266];
        lVar9 = *(long *)((long)pvVar11 + 8);
        puVar7 = (undefined8 *)pvVar11;
        if (lVar9 - 0xfd0U < 0xfffffffffffff010) {
          puVar7 = (undefined8 *)malloc(0x1000);
          if (puVar7 == (undefined8 *)0x0) goto LAB_00161200;
          lVar9 = 0;
          *puVar7 = pvVar11;
          puVar7[1] = 0;
          param_1[0x266] = (long)puVar7;
        }
        *(long *)((long)puVar7 + 8) = lVar9 + 0x20;
        puVar3 = (undefined8 *)((long)puVar7 + lVar9 + 0x10);
        *puVar3 = &PTR_FUN_0017c940;
        *(undefined8 **)((long)puVar7 + lVar9 + 0x20) = puVar4;
        *(long *)((long)puVar7 + lVar9 + 0x28) = lVar6;
        *(undefined1 *)((long)puVar7 + lVar9 + 0x18) = 0x2d;
        *(ushort *)((long)puVar7 + lVar9 + 0x19) =
             *(ushort *)((long)puVar7 + lVar9 + 0x19) & 0xf000 | 0x540;
      }
      while ((pcVar8 = (char *)*param_1, pcVar8 == (char *)param_1[1] || (*pcVar8 != 'E'))) {
        lVar6 = FUN_001682d4(param_1);
        if (lVar6 == 0) {
          return (undefined8 *)0x0;
        }
        pvVar11 = (void *)param_1[0x266];
        lVar9 = *(long *)((long)pvVar11 + 8);
        puVar4 = (undefined8 *)pvVar11;
        if (lVar9 - 0xfd0U < 0xfffffffffffff010) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_00161200;
          lVar9 = 0;
          *puVar4 = pvVar11;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        *(long *)((long)puVar4 + 8) = lVar9 + 0x20;
        puVar7 = (undefined8 *)((long)puVar4 + lVar9 + 0x10);
        *puVar7 = &PTR_FUN_0017c240;
        *(undefined1 *)((long)puVar4 + lVar9 + 0x18) = 0x17;
        *(undefined8 **)((long)puVar4 + lVar9 + 0x20) = puVar3;
        *(long *)((long)puVar4 + lVar9 + 0x28) = lVar6;
        *(ushort *)((long)puVar4 + lVar9 + 0x19) =
             *(ushort *)((long)puVar4 + lVar9 + 0x19) & 0xf000 | 0x540;
        puVar3 = puVar7;
      }
      *param_1 = (long)(pcVar8 + 1);
      lVar6 = FUN_001683ac(param_1);
      if (lVar6 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar11 = (void *)param_1[0x266];
      lVar9 = *(long *)((long)pvVar11 + 8);
      puVar4 = (undefined8 *)pvVar11;
      if (lVar9 - 0xfd0U < 0xfffffffffffff010) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) goto LAB_00161200;
        lVar9 = 0;
        *puVar4 = pvVar11;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      *(long *)((long)puVar4 + 8) = lVar9 + 0x20;
      puVar4 = (undefined8 *)((long)puVar4 + lVar9 + 0x10);
      *puVar4 = &PTR_FUN_0017c240;
      goto LAB_001611bc;
    }
LAB_00160cbc:
    if (*psVar2 == 0x7273) {
      pbVar1 = (byte *)(psVar2 + 1);
      *param_1 = (long)pbVar1;
      if (((byte *)param_1[1] != pbVar1) && (0xfffffff5 < *pbVar1 - 0x3a)) {
        puVar3 = (undefined8 *)FUN_001682d4(param_1);
        if (puVar3 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        if ((param_2 & 1) == 0) {
          puVar4 = (undefined8 *)0x0;
          do {
            if (puVar4 == (undefined8 *)0x0) {
              pcVar8 = (char *)*param_1;
              puVar7 = puVar3;
              if (pcVar8 != (char *)param_1[1]) goto LAB_00161150;
            }
            else {
              pvVar11 = (void *)param_1[0x266];
              lVar6 = *(long *)((long)pvVar11 + 8);
              puVar5 = (undefined8 *)pvVar11;
              if (lVar6 - 0xfd0U < 0xfffffffffffff010) {
                puVar5 = (undefined8 *)malloc(0x1000);
                if (puVar5 == (undefined8 *)0x0) goto LAB_00161200;
                lVar6 = 0;
                *puVar5 = pvVar11;
                puVar5[1] = 0;
                param_1[0x266] = (long)puVar5;
              }
              *(long *)((long)puVar5 + 8) = lVar6 + 0x20;
              puVar7 = (undefined8 *)((long)puVar5 + lVar6 + 0x10);
              *puVar7 = &PTR_FUN_0017c240;
              *(undefined8 **)((long)puVar5 + lVar6 + 0x20) = puVar4;
              *(undefined8 **)((long)puVar5 + lVar6 + 0x28) = puVar3;
              *(undefined1 *)((long)puVar5 + lVar6 + 0x18) = 0x17;
              *(ushort *)((long)puVar5 + lVar6 + 0x19) =
                   *(ushort *)((long)puVar5 + lVar6 + 0x19) & 0xf000 | 0x540;
              pcVar8 = (char *)*param_1;
              puVar3 = puVar7;
              if (pcVar8 != (char *)param_1[1]) {
LAB_00161150:
                puVar7 = puVar3;
                if (*pcVar8 == 'E') goto LAB_0016115c;
              }
            }
            puVar3 = (undefined8 *)FUN_001682d4(param_1);
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
              if (puVar4 == (undefined8 *)0x0) goto LAB_00161200;
              lVar6 = 0;
              *puVar4 = puVar3;
              puVar4[1] = 0;
              param_1[0x266] = (long)puVar4;
            }
            puVar4[1] = lVar6 + 0x20;
            puVar3 = (undefined8 *)((long)puVar4 + lVar6 + 0x10);
            *puVar3 = &PTR_FUN_0017c400;
            *(undefined1 *)((long)puVar4 + lVar6 + 0x18) = 0x2e;
            *(ushort *)((long)puVar4 + lVar6 + 0x19) =
                 *(ushort *)((long)puVar4 + lVar6 + 0x19) & 0xf000 | 0x540;
            *(undefined8 **)((long)puVar4 + lVar6 + 0x20) = puVar7;
            pcVar8 = (char *)*param_1;
            if (pcVar8 != (char *)param_1[1]) {
LAB_00161038:
              if (*pcVar8 == 'E') goto LAB_0016115c;
            }
          }
          else {
            puVar5 = puVar3;
            if (lVar6 - 0xfd0U < 0xfffffffffffff010) {
              puVar5 = (undefined8 *)malloc(0x1000);
              if (puVar5 == (undefined8 *)0x0) goto LAB_00161200;
              lVar6 = 0;
              *puVar5 = puVar3;
              puVar5[1] = 0;
              param_1[0x266] = (long)puVar5;
            }
            puVar5[1] = lVar6 + 0x20;
            puVar3 = (undefined8 *)((long)puVar5 + lVar6 + 0x10);
            *puVar3 = &PTR_FUN_0017c240;
            *(undefined1 *)((long)puVar5 + lVar6 + 0x18) = 0x17;
            *(undefined8 **)((long)puVar5 + lVar6 + 0x20) = puVar4;
            *(ushort *)((long)puVar5 + lVar6 + 0x19) =
                 *(ushort *)((long)puVar5 + lVar6 + 0x19) & 0xf000 | 0x540;
            *(undefined8 **)((long)puVar5 + lVar6 + 0x28) = puVar7;
            pcVar8 = (char *)*param_1;
            if (pcVar8 != (char *)param_1[1]) goto LAB_00161038;
          }
          puVar7 = (undefined8 *)FUN_001682d4(param_1);
          puVar4 = puVar3;
          if (puVar7 == (undefined8 *)0x0) {
            return (undefined8 *)0x0;
          }
        } while( true );
      }
      puVar3 = (undefined8 *)FUN_00168150(param_1);
      if (puVar3 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      local_48 = puVar3;
      if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'I')) {
        local_68 = (undefined8 *)FUN_0015b3a8(param_1,0);
        if (local_68 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        puVar3 = (undefined8 *)FUN_0015b944(param_1,&local_48,&local_68);
      }
      goto LAB_00161164;
    }
  }
  puVar3 = (undefined8 *)FUN_001683ac(param_1);
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
LAB_00161200:
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
  *puVar7 = &PTR_FUN_0017c400;
  *(undefined8 **)((long)puVar4 + lVar6 + 0x20) = puVar3;
  *(undefined1 *)((long)puVar4 + lVar6 + 0x18) = 0x2e;
  *(ushort *)((long)puVar4 + lVar6 + 0x19) =
       *(ushort *)((long)puVar4 + lVar6 + 0x19) & 0xf000 | 0x540;
  return puVar7;
LAB_0016115c:
  *param_1 = (long)(pcVar8 + 1);
LAB_00161164:
  lVar6 = FUN_001683ac(param_1);
  if (lVar6 == 0) {
    return (undefined8 *)0x0;
  }
  pvVar11 = (void *)param_1[0x266];
  lVar9 = *(long *)((long)pvVar11 + 8);
  puVar4 = (undefined8 *)pvVar11;
  if (lVar9 - 0xfd0U < 0xfffffffffffff010) {
    puVar4 = (undefined8 *)malloc(0x1000);
    if (puVar4 == (undefined8 *)0x0) goto LAB_00161200;
    lVar9 = 0;
    *puVar4 = pvVar11;
    puVar4[1] = 0;
    param_1[0x266] = (long)puVar4;
  }
  *(long *)((long)puVar4 + 8) = lVar9 + 0x20;
  puVar4 = (undefined8 *)((long)puVar4 + lVar9 + 0x10);
  *puVar4 = &PTR_FUN_0017c240;
LAB_001611bc:
  *(undefined1 *)(puVar4 + 1) = 0x17;
  puVar4[2] = puVar3;
  puVar4[3] = lVar6;
  *(ushort *)((long)puVar4 + 9) = *(ushort *)((long)puVar4 + 9) & 0xf000 | 0x540;
  return puVar4;
}


// ===== 00161204  FUN_00161204 =====

void FUN_00161204(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
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
  *(undefined ***)((long)puVar2 + lVar3 + 0x10) = &PTR_FUN_0017af70;
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


// ===== 001612d0  FUN_001612d0 =====

void FUN_001612d0(long param_1,undefined8 *param_2)

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
      if (**(short **)(param_1 + 0x18) == 0x3e3e) goto LAB_00161534;
      goto LAB_001612f8;
    }
    if ((*(long *)(param_1 + 0x20) != 1) || ((char)**(short **)(param_1 + 0x18) != '>'))
    goto LAB_001612f8;
LAB_00161534:
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
LAB_001612f8:
    bVar3 = false;
  }
  uVar2 = (uint)*(ushort *)(param_1 + 9) << 10;
  bVar4 = (uVar2 & 0xfc00) != 0x4400;
  iVar1 = 0xf;
  if (bVar4) {
    iVar1 = (int)((uint)*(ushort *)(param_1 + 9) << 0x1a) >> 0x1a;
  }
  FUN_001615a8(*(undefined8 *)(param_1 + 0x10),param_2,iVar1,bVar4);
  if ((*(long *)(param_1 + 0x20) == 1) && (__src = *(char **)(param_1 + 0x18), *__src == ',')) {
    sVar10 = 1;
    lVar7 = param_2[1];
    uVar8 = param_2[2];
    pvVar5 = (void *)*param_2;
    uVar9 = lVar7 + 1;
    if (uVar8 < uVar9) {
LAB_001613d0:
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
LAB_001613f4:
    memcpy((void *)((long)pvVar5 + lVar7),__src,sVar10);
    uVar9 = param_2[2];
    lVar7 = param_2[1] + sVar10;
    param_2[1] = lVar7;
    pvVar5 = (void *)*param_2;
    if (lVar7 + 1U <= uVar9) goto LAB_00161480;
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
      if (uVar8 < uVar9) goto LAB_001613d0;
      goto LAB_001613f4;
    }
    lVar7 = param_2[1];
    uVar9 = param_2[2];
    pvVar5 = (void *)*param_2;
    if (lVar7 + 1U <= uVar9) goto LAB_00161480;
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
LAB_00161480:
  *(undefined1 *)((long)pvVar5 + lVar7) = 0x20;
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  param_2[1] = param_2[1] + 1;
  FUN_001615a8(uVar6,param_2,(int)((uint)*(ushort *)(param_1 + 9) << 0x1a) >> 0x1a,
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


// ===== 001615a0  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 001615a8  FUN_001615a8 =====

void FUN_001615a8(long *param_1,undefined8 *param_2,int param_3,uint param_4)

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
                    /* WARNING: Could not recover jumptable at 0x00161618. Too many branches */
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


// ===== 00161714  FUN_00161714 =====

void FUN_00161714(long param_1,undefined8 *param_2,undefined8 *param_3,ushort *param_4)

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
  *(undefined ***)((long)puVar2 + lVar3 + 0x10) = &PTR_FUN_0017afe0;
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


// ===== 001617d4  FUN_001617d4 =====

void FUN_001617d4(long param_1,undefined8 *param_2)

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
  FUN_001615a8(*(undefined8 *)(param_1 + 0x20),param_2,
               (int)((uint)*(ushort *)(param_1 + 9) << 0x1a) >> 0x1a,0);
  return;
}


// ===== 0016187c  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00161884  FUN_00161884 =====

void FUN_00161884(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *__ptr;
  size_t __size;
  long lVar2;
  size_t __n;
  void *__src;
  
  FUN_001615a8(*(undefined8 *)(param_1 + 0x10),param_2,
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


// ===== 0016192c  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00161934  FUN_00161934 =====

void FUN_00161934(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  long lVar2;
  size_t sVar3;
  ulong uVar4;
  
  FUN_001615a8(*(undefined8 *)(param_1 + 0x10),param_2,
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
  FUN_001615a8(*(undefined8 *)(param_1 + 0x18),param_2,0x13,0);
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


// ===== 00161a34  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00161a3c  FUN_00161a3c =====

void FUN_00161a3c(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *__ptr;
  size_t __size;
  long lVar2;
  size_t __n;
  void *__src;
  
  FUN_001615a8(*(undefined8 *)(param_1 + 0x10),param_2,
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
  FUN_001615a8(*(undefined8 *)(param_1 + 0x28),param_2,
               (int)((uint)*(ushort *)(param_1 + 9) << 0x1a) >> 0x1a,0);
  return;
}


// ===== 00161af8  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00161b00  FUN_00161b00 =====

void FUN_00161b00(long param_1,undefined8 *param_2)

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
          FUN_001615a8(*(undefined8 *)(*(long *)(param_1 + 0x10) + lVar8 * 8),param_2,0x12,0);
          lVar4 = param_2[1];
          if (lVar5 == lVar4) break;
          bVar10 = false;
          lVar8 = lVar8 + 1;
          lVar3 = lVar4;
          if (lVar8 == *(long *)(param_1 + 0x18)) goto LAB_00161d48;
        }
        param_2[1] = lVar3;
        lVar8 = lVar8 + 1;
      } while (lVar8 != *(long *)(param_1 + 0x18));
    }
LAB_00161d48:
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
          FUN_001615a8(*(undefined8 *)(*(long *)(param_1 + 0x28) + lVar8 * 8),param_2,0x12,0);
          lVar4 = param_2[1];
          if (lVar5 == lVar4) break;
          bVar10 = false;
          lVar8 = lVar8 + 1;
          lVar3 = lVar4;
          if (lVar8 == *(long *)(param_1 + 0x30)) goto LAB_00161f48;
        }
        param_2[1] = lVar3;
        lVar8 = lVar8 + 1;
      } while (lVar8 != *(long *)(param_1 + 0x30));
    }
LAB_00161f48:
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


// ===== 00161fe0  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00161fe8  FUN_00161fe8 =====

void FUN_00161fe8(long param_1,undefined8 *param_2)

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
                    /* WARNING: Could not recover jumptable at 0x001621a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar7 + 0x28))(plVar7,param_2);
  return;
}


// ===== 001621b8  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 001621c0  FUN_001621c0 =====

void FUN_001621c0(long param_1,undefined8 *param_2)

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
        FUN_001615a8(*(undefined8 *)(*(long *)(param_1 + 0x18) + lVar8 * 8),param_2,0x12,0);
        lVar4 = param_2[1];
        if (lVar3 == lVar4) break;
        bVar9 = false;
        lVar8 = lVar8 + 1;
        lVar2 = lVar4;
        if (lVar8 == *(long *)(param_1 + 0x20)) goto LAB_00162334;
      }
      param_2[1] = lVar2;
      lVar8 = lVar8 + 1;
    } while (lVar8 != *(long *)(param_1 + 0x20));
  }
LAB_00162334:
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


// ===== 001623b0  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 001623b8  FUN_001623b8 =====

void FUN_001623b8(long param_1,undefined8 *param_2)

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
        FUN_001615a8(*(undefined8 *)(*(long *)(param_1 + 0x18) + lVar8 * 8),param_2,0x12,0);
        lVar4 = param_2[1];
        if (lVar3 == lVar4) break;
        bVar9 = false;
        lVar8 = lVar8 + 1;
        lVar2 = lVar4;
        if (lVar8 == *(long *)(param_1 + 0x20)) goto LAB_001625d8;
      }
      param_2[1] = lVar2;
      lVar8 = lVar8 + 1;
    } while (lVar8 != *(long *)(param_1 + 0x20));
  }
LAB_001625d8:
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


// ===== 0016265c  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00162664  FUN_00162664 =====

void FUN_00162664(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 uVar3;
  long lVar4;
  size_t sVar5;
  
  FUN_001615a8(*(undefined8 *)(param_1 + 0x10),param_2,
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
  FUN_001615a8(uVar3,param_2,0x13,0);
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
  FUN_001615a8(uVar3,param_2,0x11,1);
  return;
}


// ===== 00162780  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00162788  FUN_00162788 =====

void FUN_00162788(long param_1,undefined8 *param_2)

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
                    /* try { // try from 00162984 to 0016298b has its CatchHandler @ 00162998 */
      abort();
    }
    lVar5 = param_2[1];
  }
  *(undefined1 *)((long)pvVar3 + lVar5) = 0x3c;
  plVar4 = *(long **)(param_1 + 0x20);
  lVar5 = *plVar4;
  param_2[1] = param_2[1] + 1;
                    /* try { // try from 00162868 to 0016286f has its CatchHandler @ 00162998 */
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
  FUN_001615a8(*(undefined8 *)(param_1 + 0x28),param_2,0x13,0);
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


// ===== 001629a0  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 001629a8  FUN_001629a8 =====

void FUN_001629a8(long param_1,undefined8 *param_2)

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


// ===== 00162b90  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00162b98  FUN_00162b98 =====

undefined8 * FUN_00162b98(long *param_1,undefined8 param_2,undefined8 param_3)

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
      *puVar5 = &PTR_FUN_0017b4b0;
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


// ===== 00162ce4  FUN_00162ce4 =====

void FUN_00162ce4(long param_1,int param_2)

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
  *puVar1 = &PTR_FUN_0017b520;
  *(ushort *)((long)puVar1 + 9) = *(ushort *)((long)puVar1 + 9) & 0xf000 | 0x540;
  *(bool *)((long)puVar1 + 0xb) = param_2 != 0;
  return;
}


// ===== 00162d88  FUN_00162d88 =====

void FUN_00162d88(long param_1,undefined8 *param_2)

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
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0017b6e0;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x4a;
  uVar3 = *param_2;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  return;
}


// ===== 00162e28  FUN_00162e28 =====

undefined8 * FUN_00162e28(long param_1,char *param_2)

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
  *puVar4 = &PTR_FUN_0017aa40;
  *(undefined1 *)((long)puVar1 + lVar3 + 0x18) = 8;
  *(char **)((long)puVar1 + lVar3 + 0x20) = param_2;
  *(size_t *)((long)puVar1 + lVar3 + 0x28) = sVar2;
  *(ushort *)((long)puVar1 + lVar3 + 0x19) =
       *(ushort *)((long)puVar1 + lVar3 + 0x19) & 0xf000 | 0x540;
  return puVar4;
}


// ===== 00162ed0  FUN_00162ed0 =====

undefined8 * FUN_00162ed0(long *param_1,long param_2)

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
LAB_0016356c:
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
    *puVar5 = &PTR_FUN_0017b750;
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
      if (puVar4 == (undefined8 *)0x0) goto LAB_0016356c;
      lVar9 = 0;
      *puVar4 = pvVar18;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar9 + 0x20;
    puVar5 = (undefined8 *)((long)puVar4 + lVar9 + 0x10);
    *puVar5 = &PTR_FUN_0017aa40;
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
                    /* try { // try from 0016309c to 001630a7 has its CatchHandler @ 001635ac */
  FUN_001642c0(&local_d0,param_1);
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
                    /* try { // try from 00163140 to 0016314b has its CatchHandler @ 001635fc */
      puVar4 = (undefined8 *)FUN_001643e8(param_1,local_c0);
      if (puVar4 == (undefined8 *)0x0) goto LAB_001634d0;
      plVar21 = (long *)param_1[3];
      if (plVar21 == (long *)param_1[4]) {
        plVar7 = (long *)param_1[2];
        sVar20 = (long)plVar21 - (long)plVar7;
        if (plVar7 == plVar1) {
          pvVar18 = malloc(sVar20 * 2);
          if (pvVar18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00163548 to 0016354b has its CatchHandler @ 001635cc */
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
                    /* try { // try from 00163520 to 00163523 has its CatchHandler @ 001635cc */
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
                    /* try { // try from 001631a4 to 001631b7 has its CatchHandler @ 001635b4 */
  lVar9 = lVar11 - lVar9 >> 3;
  local_e0 = FUN_00159c04(param_1,lVar9);
  if (local_e0._8_8_ == 0) {
    if (param_1[0x54] == param_1[0x53]) {
                    /* try { // try from 0016354c to 0016356b has its CatchHandler @ 001635b4 */
                    /* WARNING: Subroutine does not return */
      FUN_00154b08("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h",0x83,
                   "Popping empty vector!");
    }
    param_1[0x54] = param_1[0x54] + -8;
  }
  pcVar6 = (char *)*param_1;
  pcVar13 = (char *)param_1[1];
  local_e8 = (undefined8 *)0x0;
  if (pcVar6 == pcVar13) {
LAB_00163240:
    plVar1 = param_1 + 5;
    do {
                    /* try { // try from 00163254 to 0016325b has its CatchHandler @ 00163614 */
      puVar4 = (undefined8 *)FUN_00157a9c(param_1);
      if (puVar4 == (undefined8 *)0x0) goto LAB_001634d0;
      plVar21 = (long *)param_1[3];
      if (plVar21 == (long *)param_1[4]) {
        plVar7 = (long *)param_1[2];
        sVar20 = (long)plVar21 - (long)plVar7;
        if (plVar7 == plVar1) {
          pvVar18 = malloc(sVar20 * 2);
          if (pvVar18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00163524 to 00163527 has its CatchHandler @ 001635e4 */
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
                    /* try { // try from 0016351c to 0016351f has its CatchHandler @ 001635e4 */
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
                    /* try { // try from 00163208 to 0016320f has its CatchHandler @ 00163574 */
      puVar4 = (undefined8 *)FUN_0015cce8(param_1);
      *(undefined1 *)((long)param_1 + 0x30a) = uVar3;
      local_e8 = puVar4;
      if (puVar4 == (undefined8 *)0x0) goto LAB_001634d0;
      pcVar6 = (char *)*param_1;
      pcVar13 = (char *)param_1[1];
    }
    if ((pcVar13 == pcVar6) || (*pcVar6 != 'v')) goto LAB_00163240;
    *param_1 = (long)(pcVar6 + 1);
  }
                    /* try { // try from 001632f8 to 00163303 has its CatchHandler @ 00163590 */
  local_f8 = FUN_00159c04(param_1,lVar9);
  pbVar14 = (byte *)*param_1;
  pbVar10 = (byte *)param_1[1];
  local_100 = (undefined8 *)0x0;
  if (pbVar14 != pbVar10) {
    if (*pbVar14 == 0x51) {
      uVar3 = *(undefined1 *)((long)param_1 + 0x30a);
      *param_1 = (long)(pbVar14 + 1);
      *(undefined1 *)((long)param_1 + 0x30a) = 1;
                    /* try { // try from 00163338 to 0016333f has its CatchHandler @ 00163570 */
      puVar4 = (undefined8 *)FUN_0015cce8(param_1);
      *(undefined1 *)((long)param_1 + 0x30a) = uVar3;
      local_100 = puVar4;
      if (puVar4 == (undefined8 *)0x0) goto LAB_001634d0;
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
                   FUN_001648e8(param_1,local_e0,&local_e8,local_f8,&local_100,&local_110);
          goto LAB_001634d0;
        }
      }
    }
  }
  puVar4 = (undefined8 *)0x0;
LAB_001634d0:
  if ((ulong)(*(long *)(local_d0 + 0x2a0) - *(long *)(local_d0 + 0x298) >> 3) < uStack_c8) {
                    /* try { // try from 00163528 to 00163547 has its CatchHandler @ 001635a8 */
                    /* WARNING: Subroutine does not return */
    FUN_00154b08("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h",0xa50,
                 &DAT_00111743);
  }
  *(ulong *)(local_d0 + 0x2a0) = *(long *)(local_d0 + 0x298) + uStack_c8 * 8;
  if (local_c0[0] != auStack_a8) {
    free(local_c0[0]);
  }
  param_1[0x62] = lVar22;
  return puVar4;
}


// ===== 0016362c  FUN_0016362c =====

void FUN_0016362c(long param_1,undefined8 *param_2)

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
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0017bad0;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x4b;
  uVar3 = *param_2;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  return;
}


// ===== 001636cc  FUN_001636cc =====

void FUN_001636cc(long param_1,undefined8 *param_2,undefined8 *param_3)

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
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0017bb40;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x4c;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x30) = uVar6;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = uVar5;
  return;
}


// ===== 00163778  FUN_00163778 =====

void FUN_00163778(long param_1,undefined8 *param_2)

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
    if (sVar6 == 0) goto LAB_001639c8;
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
    if (sVar6 == 0) goto LAB_001639c8;
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
LAB_001639c8:
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


// ===== 00163a64  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00163a6c  FUN_00163a6c =====

void FUN_00163a6c(long param_1,undefined8 *param_2)

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


// ===== 00163b14  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00163b1c  FUN_00163b1c =====

void FUN_00163b1c(long param_1,undefined8 *param_2)

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


// ===== 00163cd0  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00163cd8  FUN_00163cd8 =====

void FUN_00163cd8(long param_1,undefined8 *param_2)

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


// ===== 00163e9c  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00163ea4  FUN_00163ea4 =====

void FUN_00163ea4(long param_1,undefined8 *param_2)

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


// ===== 001641a4  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 001641ac  FUN_001641ac =====

void FUN_001641ac(long param_1,undefined8 *param_2)

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


// ===== 001642b8  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 001642c0  FUN_001642c0 =====

void FUN_001642c0(long *param_1,long param_2)

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
                    /* try { // try from 001643c4 to 001643c7 has its CatchHandler @ 001643c8 */
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
                    /* try { // try from 00164358 to 0016435b has its CatchHandler @ 001643c8 */
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


// ===== 001643e8  FUN_001643e8 =====

undefined8 * FUN_001643e8(long *param_1,undefined8 param_2)

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
LAB_00164424:
    puVar3 = (undefined8 *)0x0;
  }
  else {
    local_68 = param_1;
    local_58 = param_2;
    if (*psVar1 == 0x7954) {
      *param_1 = (long)(psVar1 + 1);
      uVar7 = FUN_00164b94(&local_68,0);
      pvVar8 = (void *)param_1[0x266];
      lVar12 = *(long *)((long)pvVar8 + 8);
      puVar4 = (undefined8 *)pvVar8;
      if (lVar12 - 0xfd0U < 0xfffffffffffff010) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) {
LAB_00164864:
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
      *puVar3 = &PTR_FUN_0017b830;
      uVar2 = *(ushort *)((long)puVar4 + lVar12 + 0x19);
      *(undefined8 *)((long)puVar4 + lVar12 + 0x20) = uVar7;
      *(undefined1 *)((long)puVar4 + lVar12 + 0x18) = 0x23;
    }
    else {
      if (*psVar1 == 0x6b54) {
        *param_1 = (long)(psVar1 + 1);
        lVar12 = FUN_00158fd4(param_1,0);
        if (lVar12 == 0) {
          return (undefined8 *)0x0;
        }
        lVar5 = FUN_00164b94(&local_68,0);
        pvVar8 = (void *)param_1[0x266];
        lVar9 = *(long *)((long)pvVar8 + 8);
        puVar4 = (undefined8 *)pvVar8;
        if (lVar9 - 0xfd0U < 0xfffffffffffff010) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_00164864;
          lVar9 = 0;
          *puVar4 = pvVar8;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        lVar6 = (long)puVar4 + lVar9;
        ppuVar10 = &PTR_FUN_0017b8a0;
        *(long *)((long)puVar4 + 8) = lVar9 + 0x20;
        uVar13 = 0x24;
      }
      else {
        if (*psVar1 != 0x6e54) {
          if (*psVar1 == 0x7454) {
            *param_1 = (long)(psVar1 + 1);
            uVar7 = FUN_00164b94(&local_68,2);
            lVar12 = param_1[2];
            lVar5 = param_1[3];
            FUN_001642c0(&local_d0,param_1);
            pcVar11 = (char *)*param_1;
            pcVar14 = (char *)param_1[1];
            __src = param_1 + 5;
            do {
              if ((pcVar11 != pcVar14) && (*pcVar11 == 'E')) {
                lVar9 = 0;
                goto LAB_00164794;
              }
                    /* try { // try from 001646a0 to 001646ab has its CatchHandler @ 001648d4 */
              puVar4 = (undefined8 *)FUN_001643e8(param_1,local_c0);
              if (puVar4 == (undefined8 *)0x0) goto LAB_0016481c;
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
                    /* try { // try from 00164868 to 0016486f has its CatchHandler @ 001648c0 */
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
                    /* try { // try from 0016475c to 00164763 has its CatchHandler @ 00164890 */
            lVar9 = FUN_0015cce8(param_1);
            *(undefined1 *)((long)param_1 + 0x30a) = uVar13;
            if ((lVar9 == 0) ||
               ((pcVar11 = (char *)*param_1, pcVar11 == (char *)param_1[1] || (*pcVar11 != 'E')))) {
              puVar4 = (undefined8 *)0x0;
            }
            else {
LAB_00164794:
              *param_1 = (long)(pcVar11 + 1);
                    /* try { // try from 0016479c to 001647a7 has its CatchHandler @ 001648a8 */
              auVar16 = FUN_00159c04(param_1,lVar5 - lVar12 >> 3);
              pvVar8 = (void *)param_1[0x266];
              lVar12 = *(long *)((long)pvVar8 + 8);
              puVar3 = (undefined8 *)pvVar8;
              if (lVar12 - 0xfc0U < 0xfffffffffffff010) {
                puVar3 = (undefined8 *)malloc(0x1000);
                if (puVar3 == (undefined8 *)0x0) goto LAB_00164864;
                lVar12 = 0;
                *puVar3 = pvVar8;
                puVar3[1] = 0;
                param_1[0x266] = (long)puVar3;
              }
              *(long *)((long)puVar3 + 8) = lVar12 + 0x30;
              puVar4 = (undefined8 *)((long)puVar3 + lVar12 + 0x10);
              *puVar4 = &PTR_FUN_0017b980;
              *(undefined1 *)((long)puVar3 + lVar12 + 0x18) = 0x26;
              *(undefined8 *)((long)puVar3 + lVar12 + 0x20) = uVar7;
              *(undefined1 (*) [16])((long)puVar3 + lVar12 + 0x28) = auVar16;
              *(long *)((long)puVar3 + lVar12 + 0x38) = lVar9;
              *(ushort *)((long)puVar3 + lVar12 + 0x19) =
                   *(ushort *)((long)puVar3 + lVar12 + 0x19) & 0xf000 | 0x500;
            }
LAB_0016481c:
            if ((ulong)((long)(local_d0[0x54] - local_d0[0x53]) >> 3) < uStack_c8) {
                    /* try { // try from 00164870 to 0016488f has its CatchHandler @ 001648bc */
                    /* WARNING: Subroutine does not return */
              FUN_00154b08("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h",
                           0xa50,&DAT_00111743);
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
            local_d0 = (undefined8 *)FUN_001643e8(param_1);
            if (local_d0 == (undefined8 *)0x0) {
              return (undefined8 *)0x0;
            }
            puVar4 = (undefined8 *)FUN_00164ce4(param_1,&local_d0);
            return puVar4;
          }
          goto LAB_00164424;
        }
        *param_1 = (long)(psVar1 + 1);
        lVar12 = FUN_00164b94(&local_68,1);
        lVar5 = FUN_00157a9c(param_1);
        if (lVar5 == 0) {
          return (undefined8 *)0x0;
        }
        pvVar8 = (void *)param_1[0x266];
        lVar9 = *(long *)((long)pvVar8 + 8);
        puVar4 = (undefined8 *)pvVar8;
        if (lVar9 - 0xfd0U < 0xfffffffffffff010) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_00164864;
          lVar9 = 0;
          *puVar4 = pvVar8;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        lVar6 = (long)puVar4 + lVar9;
        ppuVar10 = &PTR_FUN_0017b910;
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


// ===== 001648e8  FUN_001648e8 =====

void FUN_001648e8(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
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
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0017ba60;
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


// ===== 001649c8  FUN_001649c8 =====

void FUN_001649c8(long *param_1)

{
  long lVar1;
  long *__ptr;
  
  lVar1 = *param_1;
  if ((ulong)(*(long *)(lVar1 + 0x2a0) - *(long *)(lVar1 + 0x298) >> 3) < (ulong)param_1[1]) {
                    /* try { // try from 00164a20 to 00164a3f has its CatchHandler @ 00164a40 */
                    /* WARNING: Subroutine does not return */
    FUN_00154b08("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h",0xa50,
                 &DAT_00111743);
  }
  __ptr = (long *)param_1[2];
  *(long *)(lVar1 + 0x2a0) = *(long *)(lVar1 + 0x298) + param_1[1] * 8;
  if (__ptr != param_1 + 5) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00164a44  FUN_00164a44 =====

void FUN_00164a44(long param_1,undefined8 *param_2)

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


// ===== 00164b8c  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00164b94  FUN_00164b94 =====

void FUN_00164b94(long *param_1,int param_2)

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
  *puVar3 = &PTR_FUN_0017b7c0;
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


// ===== 00164ce4  FUN_00164ce4 =====

void FUN_00164ce4(long param_1,undefined8 *param_2)

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
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0017b9f0;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x27;
  uVar3 = *param_2;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x500;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  return;
}


// ===== 00164d84  FUN_00164d84 =====

void FUN_00164d84(long param_1,undefined8 *param_2)

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
      if (iVar2 != 0) goto LAB_00164ee4;
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
LAB_00164ee4:
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


// ===== 00164fb0  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00164fb8  FUN_00164fb8 =====

void FUN_00164fb8(undefined8 param_1,undefined8 *param_2)

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
  uVar2 = s_typename_00111326._0_8_;
  ((char *)((long)__ptr + lVar3))[8] = ' ';
  *(undefined8 *)((long)__ptr + lVar3) = uVar2;
  param_2[1] = param_2[1] + 9;
  return;
}


// ===== 00165040  FUN_00165040 =====

void FUN_00165040(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar1 + 0x20))(plVar1);
  if ((*(ushort *)((long)plVar1 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001650a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
  return;
}


// ===== 001650a8  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 001650b0  FUN_001650b0 =====

void FUN_001650b0(long param_1,undefined8 *param_2)

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


// ===== 0016515c  FUN_0016515c =====

void FUN_0016515c(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar1 + 0x20))(plVar1);
  if ((*(ushort *)((long)plVar1 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001651c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
  return;
}


// ===== 001651c4  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 001651cc  FUN_001651cc =====

void FUN_001651cc(long param_1,undefined8 *param_2)

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
LAB_00165234:
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
  else if (0x3f < *(byte *)((long)puVar1 + 9)) goto LAB_00165234;
  return;
}


// ===== 00165294  FUN_00165294 =====

void FUN_00165294(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar1 + 0x20))(plVar1);
  if ((*(ushort *)((long)plVar1 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00165308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x28))(*(long **)(param_1 + 0x18),param_2);
  return;
}


// ===== 0016530c  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00165314  FUN_00165314 =====

void FUN_00165314(long param_1,undefined8 *param_2)

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
  uVar4 = s_template<_00112f58._0_8_;
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
                    /* try { // try from 001654e4 to 001654ef has its CatchHandler @ 001654f0 */
              abort();
            }
            lVar7 = param_2[1];
          }
          *(undefined2 *)((long)pvVar5 + lVar7) = 0x202c;
          lVar7 = param_2[1] + 2;
          param_2[1] = lVar7;
        }
                    /* try { // try from 0016542c to 0016543b has its CatchHandler @ 001654f8 */
        FUN_001615a8(*(undefined8 *)(*(long *)(param_1 + 0x18) + lVar10 * 8),param_2,0x12,0);
        lVar8 = param_2[1];
        if (lVar7 == lVar8) break;
        bVar11 = false;
        lVar10 = lVar10 + 1;
        lVar6 = lVar8;
        if (lVar10 == *(long *)(param_1 + 0x20)) goto LAB_00165460;
      }
      param_2[1] = lVar6;
      lVar10 = lVar10 + 1;
    } while (lVar10 != *(long *)(param_1 + 0x20));
  }
LAB_00165460:
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
  *(undefined8 *)pcVar2 = s_>_typename_00112092._0_8_;
  pcVar2[7] = 'a';
  pcVar2[8] = 'm';
  pcVar2[9] = 'e';
  pcVar2[10] = ' ';
  param_2[1] = param_2[1] + 0xb;
  *(undefined4 *)(param_2 + 4) = uVar3;
  return;
}


// ===== 00165500  FUN_00165500 =====

void FUN_00165500(long param_1,undefined8 *param_2)

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
    uVar3 = s_requires_00113013._0_8_;
    pcVar2 = (char *)((long)__ptr + lVar4);
    pcVar2[8] = 's';
    pcVar2[9] = ' ';
    *(undefined8 *)pcVar2 = uVar3;
    plVar5 = *(long **)(param_1 + 0x28);
    lVar4 = *plVar5;
    param_2[1] = param_2[1] + 10;
    (**(code **)(lVar4 + 0x20))(plVar5,param_2);
    if ((*(ushort *)((long)plVar5 + 9) & 0xc0) != 0x40) {
                    /* WARNING: Could not recover jumptable at 0x00165618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
      return;
    }
  }
  return;
}


// ===== 00165620  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00165628  FUN_00165628 =====

void FUN_00165628(long param_1,undefined8 *param_2)

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


// ===== 001656b8  FUN_001656b8 =====

void FUN_001656b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001656c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x28))();
  return;
}


// ===== 001656cc  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 001656d4  FUN_001656d4 =====

void FUN_001656d4(long param_1,undefined8 *param_2)

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
  FUN_00165834(param_1,param_2);
  return;
}


// ===== 0016582c  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00165834  FUN_00165834 =====

void FUN_00165834(long param_1,undefined8 *param_2)

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
                    /* try { // try from 00165d04 to 00165d07 has its CatchHandler @ 00165d18 */
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
                    /* try { // try from 00165cf8 to 00165cfb has its CatchHandler @ 00165d18 */
                abort();
              }
              lVar7 = param_2[1];
            }
            *(undefined2 *)((long)pvVar4 + lVar7) = 0x202c;
            lVar7 = param_2[1] + 2;
            param_2[1] = lVar7;
          }
                    /* try { // try from 00165940 to 0016594f has its CatchHandler @ 00165d20 */
          FUN_001615a8(*(undefined8 *)(*(long *)(param_1 + 0x10) + lVar10 * 8),param_2,0x12,0);
          lVar6 = param_2[1];
          if (lVar7 == lVar6) break;
          bVar12 = false;
          lVar10 = lVar10 + 1;
          lVar5 = lVar6;
          if (lVar10 == *(long *)(param_1 + 0x18)) goto LAB_00165974;
        }
        param_2[1] = lVar5;
        lVar10 = lVar10 + 1;
      } while (lVar10 != *(long *)(param_1 + 0x18));
    }
LAB_00165974:
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
                    /* try { // try from 00165d14 to 00165d17 has its CatchHandler @ 00165d18 */
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
    uVar3 = s_requires_00113013._0_8_;
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
        FUN_001615a8(*(undefined8 *)(*(long *)(param_1 + 0x28) + lVar10 * 8),param_2,0x12,0);
        lVar6 = param_2[1];
        if (lVar7 == lVar6) break;
        bVar12 = false;
        lVar10 = lVar10 + 1;
        lVar5 = lVar6;
        if (lVar10 == *(long *)(param_1 + 0x30)) goto LAB_00165bd0;
      }
      param_2[1] = lVar5;
      lVar10 = lVar10 + 1;
    } while (lVar10 != *(long *)(param_1 + 0x30));
  }
LAB_00165bd0:
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
    uVar3 = s_requires_00113013._0_8_;
    pcVar1 = (char *)((long)pvVar4 + lVar5);
    pcVar1[8] = 's';
    pcVar1[9] = ' ';
    *(undefined8 *)pcVar1 = uVar3;
    plVar11 = *(long **)(param_1 + 0x38);
    lVar5 = *plVar11;
    param_2[1] = param_2[1] + 10;
    (**(code **)(lVar5 + 0x20))(plVar11,param_2);
    if ((*(ushort *)((long)plVar11 + 9) & 0xc0) != 0x40) {
                    /* WARNING: Could not recover jumptable at 0x00165cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar11 + 0x28))(plVar11,param_2);
      return;
    }
  }
  return;
}


// ===== 00165d28  FUN_00165d28 =====

void FUN_00165d28(long param_1,undefined8 *param_2)

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
    FUN_00165834(lVar3,param_2);
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


// ===== 00165e24  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00165e2c  FUN_00165e2c =====

void FUN_00165e2c(long param_1,undefined8 *param_2)

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


// ===== 0016605c  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00166064  FUN_00166064 =====

void FUN_00166064(long param_1,undefined8 *param_2)

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
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0017bbb0;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x43;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = uVar5;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar4;
  return;
}


// ===== 00166104  FUN_00166104 =====

void FUN_00166104(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  size_t __size;
  long lVar3;
  size_t sVar4;
  void *__src;
  
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
  *(undefined2 *)((long)pvVar2 + lVar3) = 0x7066;
  lVar3 = param_2[1] + 2;
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
    param_2[1] = param_2[1] + sVar4;
  }
  return;
}


// ===== 001661f0  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 001661f8  FUN_001661f8 =====

void FUN_001661f8(long param_1,undefined8 *param_2)

{
  char cVar1;
  void *pvVar2;
  long lVar3;
  size_t sVar4;
  size_t sVar5;
  long lVar6;
  ulong uVar7;
  void *pvVar8;
  undefined8 *local_40;
  long lStack_38;
  
  lVar3 = param_2[1];
  pvVar2 = (void *)*param_2;
  uVar7 = lVar3 + 1;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  local_40 = param_2;
  lStack_38 = param_1;
  if ((ulong)param_2[2] < uVar7) {
    sVar5 = param_2[2] * 2;
    uVar7 = lVar3 + 0x3e1;
    if (sVar5 < uVar7 || sVar5 - uVar7 == 0) {
      sVar5 = uVar7;
    }
    param_2[2] = sVar5;
    pvVar2 = realloc(pvVar2,sVar5);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = param_2[1];
    uVar7 = lVar3 + 1;
  }
  param_2[1] = uVar7;
  *(undefined1 *)((long)pvVar2 + lVar3) = 0x28;
  if ((*(char *)(param_1 + 0x30) == '\0') || (*(long *)(param_1 + 0x18) != 0)) {
    if (*(char *)(param_1 + 0x30) == '\0') {
      FUN_001665e0(&local_40);
      lVar3 = param_2[1];
      uVar7 = param_2[2];
      pvVar2 = (void *)*param_2;
      if (uVar7 < lVar3 + 1U) goto LAB_001662e0;
    }
    else {
      FUN_001615a8(*(long *)(param_1 + 0x18),param_2,3,1);
      lVar3 = param_2[1];
      uVar7 = param_2[2];
      pvVar2 = (void *)*param_2;
      if (uVar7 < lVar3 + 1U) {
LAB_001662e0:
        sVar5 = uVar7 * 2;
        uVar7 = lVar3 + 0x3e1;
        if (sVar5 < uVar7 || sVar5 - uVar7 == 0) {
          sVar5 = uVar7;
        }
        param_2[2] = sVar5;
        pvVar2 = realloc(pvVar2,sVar5);
        *param_2 = pvVar2;
        if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar3 = param_2[1];
      }
    }
    *(undefined1 *)((long)pvVar2 + lVar3) = 0x20;
    lVar3 = param_2[1] + 1;
    param_2[1] = lVar3;
    sVar5 = *(size_t *)(param_1 + 0x28);
    if (sVar5 != 0) {
      pvVar8 = *(void **)(param_1 + 0x20);
      pvVar2 = (void *)*param_2;
      if ((ulong)param_2[2] < lVar3 + sVar5) {
        sVar4 = param_2[2] * 2;
        uVar7 = lVar3 + sVar5 + 0x3e0;
        if (sVar4 < uVar7 || sVar4 - uVar7 == 0) {
          sVar4 = uVar7;
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
      memcpy((void *)((long)pvVar2 + lVar3),pvVar8,sVar5);
      lVar3 = param_2[1] + sVar5;
      param_2[1] = lVar3;
    }
    pvVar2 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar3 + 1U) {
      sVar5 = param_2[2] * 2;
      uVar7 = lVar3 + 0x3e1;
      if (sVar5 < uVar7 || sVar5 - uVar7 == 0) {
        sVar5 = uVar7;
      }
      param_2[2] = sVar5;
      pvVar2 = realloc(pvVar2,sVar5);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = param_2[1];
    }
    *(undefined1 *)((long)pvVar2 + lVar3) = 0x20;
    lVar6 = param_2[1];
    uVar7 = param_2[2];
    lVar3 = lVar6 + 1;
    param_2[1] = lVar3;
    pvVar2 = (void *)*param_2;
    if (lVar6 + 4U <= uVar7) goto LAB_001663f8;
  }
  else {
    lVar3 = param_2[1];
    uVar7 = param_2[2];
    pvVar2 = (void *)*param_2;
    if (lVar3 + 3U <= uVar7) goto LAB_001663f8;
  }
  sVar5 = uVar7 * 2;
  uVar7 = lVar3 + 0x3e3;
  if (sVar5 < uVar7 || sVar5 - uVar7 == 0) {
    sVar5 = uVar7;
  }
  param_2[2] = sVar5;
  pvVar2 = realloc(pvVar2,sVar5);
  *param_2 = pvVar2;
  if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar3 = param_2[1];
LAB_001663f8:
  *(undefined1 *)((undefined2 *)((long)pvVar2 + lVar3) + 1) = 0x2e;
  *(undefined2 *)((long)pvVar2 + lVar3) = 0x2e2e;
  lVar6 = param_2[1];
  cVar1 = *(char *)(param_1 + 0x30);
  lVar3 = lVar6 + 3;
  param_2[1] = lVar3;
  if ((cVar1 != '\0') || (*(long *)(param_1 + 0x18) != 0)) {
    pvVar2 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar6 + 4U) {
      sVar5 = param_2[2] * 2;
      uVar7 = lVar6 + 0x3e4;
      if (sVar5 < uVar7 || sVar5 - uVar7 == 0) {
        sVar5 = uVar7;
      }
      param_2[2] = sVar5;
      pvVar2 = realloc(pvVar2,sVar5);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = param_2[1];
    }
    *(undefined1 *)((long)pvVar2 + lVar3) = 0x20;
    lVar3 = param_2[1] + 1;
    param_2[1] = lVar3;
    sVar5 = *(size_t *)(param_1 + 0x28);
    if (sVar5 != 0) {
      pvVar8 = *(void **)(param_1 + 0x20);
      pvVar2 = (void *)*param_2;
      if ((ulong)param_2[2] < lVar3 + sVar5) {
        sVar4 = param_2[2] * 2;
        uVar7 = lVar3 + sVar5 + 0x3e0;
        if (sVar4 < uVar7 || sVar4 - uVar7 == 0) {
          sVar4 = uVar7;
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
      memcpy((void *)((long)pvVar2 + lVar3),pvVar8,sVar5);
      lVar3 = param_2[1] + sVar5;
      param_2[1] = lVar3;
    }
    pvVar2 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar3 + 1U) {
      sVar5 = param_2[2] * 2;
      uVar7 = lVar3 + 0x3e1;
      if (sVar5 < uVar7 || sVar5 - uVar7 == 0) {
        sVar5 = uVar7;
      }
      param_2[2] = sVar5;
      pvVar2 = realloc(pvVar2,sVar5);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = param_2[1];
    }
    *(undefined1 *)((long)pvVar2 + lVar3) = 0x20;
    cVar1 = *(char *)(param_1 + 0x30);
    param_2[1] = param_2[1] + 1;
    if (cVar1 == '\0') {
      FUN_001615a8(*(undefined8 *)(param_1 + 0x18),param_2,3,1);
    }
    else {
      FUN_001665e0(&local_40);
    }
  }
  lVar3 = param_2[1];
  pvVar2 = (void *)*param_2;
  uVar7 = lVar3 + 1;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
  if ((ulong)param_2[2] < uVar7) {
    sVar5 = param_2[2] * 2;
    uVar7 = lVar3 + 0x3e1;
    if (sVar5 < uVar7 || sVar5 - uVar7 == 0) {
      sVar5 = uVar7;
    }
    param_2[2] = sVar5;
    pvVar2 = realloc(pvVar2,sVar5);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = param_2[1];
    uVar7 = lVar3 + 1;
  }
  param_2[1] = uVar7;
  *(undefined1 *)((long)pvVar2 + lVar3) = 0x29;
  return;
}


// ===== 001665d8  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 001665e0  FUN_001665e0 =====

void FUN_001665e0(undefined8 *param_1)

{
  void *pvVar1;
  long lVar2;
  size_t sVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined **local_48;
  undefined1 local_40;
  undefined2 local_3f;
  undefined8 local_38;
  
  puVar5 = (undefined8 *)*param_1;
  lVar6 = param_1[1];
  lVar2 = puVar5[1];
  pvVar1 = (void *)*puVar5;
  uVar4 = lVar2 + 1;
  *(int *)(puVar5 + 4) = *(int *)(puVar5 + 4) + 1;
  if ((ulong)puVar5[2] < uVar4) {
    sVar3 = puVar5[2] * 2;
    uVar4 = lVar2 + 0x3e1;
    if (sVar3 < uVar4 || sVar3 - uVar4 == 0) {
      sVar3 = uVar4;
    }
    puVar5[2] = sVar3;
    pvVar1 = realloc(pvVar1,sVar3);
    *puVar5 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = puVar5[1];
    uVar4 = lVar2 + 1;
  }
  puVar5[1] = uVar4;
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x28;
  local_38 = *(undefined8 *)(lVar6 + 0x10);
  local_40 = 0x2a;
  local_3f = 0x540;
  local_48 = &PTR_FUN_0017bc90;
  FUN_00166700(&local_48,*param_1);
  param_1 = (undefined8 *)*param_1;
  lVar2 = param_1[1];
  pvVar1 = (void *)*param_1;
  uVar4 = lVar2 + 1;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  if ((ulong)param_1[2] < uVar4) {
    sVar3 = param_1[2] * 2;
    uVar4 = lVar2 + 0x3e1;
    if (sVar3 < uVar4 || sVar3 - uVar4 == 0) {
      sVar3 = uVar4;
    }
    param_1[2] = sVar3;
    pvVar1 = realloc(pvVar1,sVar3);
    *param_1 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_1[1];
    uVar4 = lVar2 + 1;
  }
  param_1[1] = uVar4;
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x29;
  return;
}


// ===== 00166700  FUN_00166700 =====

void FUN_00166700(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  void *pvVar5;
  long lVar6;
  size_t sVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  
  plVar8 = *(long **)(param_1 + 0x10);
  lVar10 = param_2[1];
  uVar2 = *(undefined4 *)(param_2 + 3);
  uVar3 = *(undefined4 *)((long)param_2 + 0x1c);
  lVar6 = *plVar8;
  param_2[3] = 0xffffffffffffffff;
                    /* try { // try from 00166740 to 0016676b has its CatchHandler @ 001668a8 */
  (**(code **)(lVar6 + 0x20))(plVar8);
  if ((*(ushort *)((long)plVar8 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar8 + 0x28))(plVar8,param_2);
  }
  uVar4 = *(uint *)((long)param_2 + 0x1c);
  if (uVar4 == 0xffffffff) {
    lVar10 = param_2[1];
    pvVar5 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar10 + 3U) {
      sVar7 = param_2[2] * 2;
      uVar1 = lVar10 + 0x3e3;
      if (sVar7 < uVar1 || sVar7 - uVar1 == 0) {
        sVar7 = uVar1;
      }
      param_2[2] = sVar7;
      pvVar5 = realloc(pvVar5,sVar7);
      *param_2 = pvVar5;
      if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001668a4 to 001668a7 has its CatchHandler @ 001668a8 */
        abort();
      }
      lVar10 = param_2[1];
    }
    *(undefined1 *)((undefined2 *)((long)pvVar5 + lVar10) + 1) = 0x2e;
    *(undefined2 *)((long)pvVar5 + lVar10) = 0x2e2e;
    lVar10 = param_2[1] + 3;
  }
  else if (uVar4 != 0) {
    if (1 < uVar4) {
      uVar9 = 1;
      do {
        lVar10 = param_2[1];
        pvVar5 = (void *)*param_2;
        if ((ulong)param_2[2] < lVar10 + 2U) {
          sVar7 = param_2[2] * 2;
          uVar1 = lVar10 + 0x3e2;
          if (sVar7 < uVar1 || sVar7 - uVar1 == 0) {
            sVar7 = uVar1;
          }
          param_2[2] = sVar7;
          pvVar5 = realloc(pvVar5,sVar7);
          *param_2 = pvVar5;
          if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001668a0 to 001668a3 has its CatchHandler @ 001668b0 */
            abort();
          }
          lVar10 = param_2[1];
        }
        *(undefined2 *)((long)pvVar5 + lVar10) = 0x202c;
        plVar8 = *(long **)(param_1 + 0x10);
        *(uint *)(param_2 + 3) = uVar9;
        lVar10 = *plVar8;
        param_2[1] = param_2[1] + 2;
                    /* try { // try from 001667f4 to 00166823 has its CatchHandler @ 001668b8 */
        (**(code **)(lVar10 + 0x20))(plVar8,param_2);
        if ((*(ushort *)((long)plVar8 + 9) & 0xc0) != 0x40) {
          (**(code **)(*plVar8 + 0x28))(plVar8,param_2);
        }
        uVar9 = uVar9 + 1;
      } while (uVar4 != uVar9);
    }
    goto LAB_00166880;
  }
  param_2[1] = lVar10;
LAB_00166880:
  *(undefined4 *)(param_2 + 3) = uVar2;
  *(undefined4 *)((long)param_2 + 0x1c) = uVar3;
  return;
}


// ===== 001668c0  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 001668c8  FUN_001668c8 =====

void FUN_001668c8(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  size_t sVar4;
  ulong uVar5;
  long *plVar6;
  
  lVar3 = param_2[1];
  uVar1 = param_2[2];
  pvVar2 = (void *)*param_2;
  uVar5 = lVar3 + 1;
  if (*(char *)(param_1 + 0x20) == '\0') {
    if (uVar1 < uVar5) {
      sVar4 = uVar1 * 2;
      uVar5 = lVar3 + 0x3e1;
      if (sVar4 < uVar5 || sVar4 - uVar5 == 0) {
        sVar4 = uVar5;
      }
      param_2[2] = sVar4;
      pvVar2 = realloc(pvVar2,sVar4);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = param_2[1];
      uVar5 = lVar3 + 1;
    }
    param_2[1] = uVar5;
    *(undefined1 *)((long)pvVar2 + lVar3) = 0x2e;
    plVar6 = *(long **)(param_1 + 0x10);
    (**(code **)(*plVar6 + 0x20))(plVar6,param_2);
    if ((*(ushort *)((long)plVar6 + 9) & 0xc0) != 0x40) {
      (**(code **)(*plVar6 + 0x28))(plVar6,param_2);
    }
  }
  else {
    if (uVar1 < uVar5) {
      sVar4 = uVar1 * 2;
      uVar5 = lVar3 + 0x3e1;
      if (sVar4 < uVar5 || sVar4 - uVar5 == 0) {
        sVar4 = uVar5;
      }
      param_2[2] = sVar4;
      pvVar2 = realloc(pvVar2,sVar4);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = param_2[1];
      uVar5 = lVar3 + 1;
    }
    param_2[1] = uVar5;
    *(undefined1 *)((long)pvVar2 + lVar3) = 0x5b;
    plVar6 = *(long **)(param_1 + 0x10);
    (**(code **)(*plVar6 + 0x20))(plVar6,param_2);
    if ((*(ushort *)((long)plVar6 + 9) & 0xc0) != 0x40) {
      (**(code **)(*plVar6 + 0x28))(plVar6,param_2);
    }
    lVar3 = param_2[1];
    pvVar2 = (void *)*param_2;
    uVar5 = lVar3 + 1;
    if ((ulong)param_2[2] < uVar5) {
      sVar4 = param_2[2] * 2;
      uVar5 = lVar3 + 0x3e1;
      if (sVar4 < uVar5 || sVar4 - uVar5 == 0) {
        sVar4 = uVar5;
      }
      param_2[2] = sVar4;
      pvVar2 = realloc(pvVar2,sVar4);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = param_2[1];
      uVar5 = lVar3 + 1;
    }
    param_2[1] = uVar5;
    *(undefined1 *)((long)pvVar2 + lVar3) = 0x5d;
  }
  plVar6 = *(long **)(param_1 + 0x18);
  if (1 < *(byte *)(plVar6 + 1) - 0x51) {
    lVar3 = param_2[1];
    pvVar2 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar3 + 3U) {
      sVar4 = param_2[2] * 2;
      uVar5 = lVar3 + 0x3e3;
      if (sVar4 < uVar5 || sVar4 - uVar5 == 0) {
        sVar4 = uVar5;
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
    *(undefined1 *)((undefined2 *)((long)pvVar2 + lVar3) + 1) = 0x20;
    *(undefined2 *)((long)pvVar2 + lVar3) = 0x3d20;
    plVar6 = *(long **)(param_1 + 0x18);
    param_2[1] = param_2[1] + 3;
  }
  (**(code **)(*plVar6 + 0x20))(plVar6,param_2);
  if ((*(ushort *)((long)plVar6 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00166af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x28))(plVar6,param_2);
  return;
}


// ===== 00166b0c  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00166b14  FUN_00166b14 =====

void FUN_00166b14(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  size_t sVar4;
  long *plVar5;
  
  lVar2 = param_2[1];
  pvVar1 = (void *)*param_2;
  uVar3 = lVar2 + 1;
  if ((ulong)param_2[2] < uVar3) {
    sVar4 = param_2[2] * 2;
    uVar3 = lVar2 + 0x3e1;
    if (sVar4 < uVar3 || sVar4 - uVar3 == 0) {
      sVar4 = uVar3;
    }
    param_2[2] = sVar4;
    pvVar1 = realloc(pvVar1,sVar4);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_2[1];
    uVar3 = lVar2 + 1;
  }
  param_2[1] = uVar3;
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x5b;
  plVar5 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
  if ((*(ushort *)((long)plVar5 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  }
  lVar2 = param_2[1];
  pvVar1 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar2 + 5U) {
    sVar4 = param_2[2] * 2;
    uVar3 = lVar2 + 0x3e5;
    if (sVar4 < uVar3 || sVar4 - uVar3 == 0) {
      sVar4 = uVar3;
    }
    param_2[2] = sVar4;
    pvVar1 = realloc(pvVar1,sVar4);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_2[1];
  }
  *(undefined1 *)((undefined4 *)((long)pvVar1 + lVar2) + 1) = 0x20;
  *(undefined4 *)((long)pvVar1 + lVar2) = 0x2e2e2e20;
  plVar5 = *(long **)(param_1 + 0x18);
  lVar2 = *plVar5;
  param_2[1] = param_2[1] + 5;
  (**(code **)(lVar2 + 0x20))(plVar5,param_2);
  if ((*(ushort *)((long)plVar5 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  }
  lVar2 = param_2[1];
  pvVar1 = (void *)*param_2;
  uVar3 = lVar2 + 1;
  if ((ulong)param_2[2] < uVar3) {
    sVar4 = param_2[2] * 2;
    uVar3 = lVar2 + 0x3e1;
    if (sVar4 < uVar3 || sVar4 - uVar3 == 0) {
      sVar4 = uVar3;
    }
    param_2[2] = sVar4;
    pvVar1 = realloc(pvVar1,sVar4);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_2[1];
    uVar3 = lVar2 + 1;
  }
  param_2[1] = uVar3;
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x5d;
  plVar5 = *(long **)(param_1 + 0x20);
  if (1 < *(byte *)(plVar5 + 1) - 0x51) {
    lVar2 = param_2[1];
    pvVar1 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar2 + 3U) {
      sVar4 = param_2[2] * 2;
      uVar3 = lVar2 + 0x3e3;
      if (sVar4 < uVar3 || sVar4 - uVar3 == 0) {
        sVar4 = uVar3;
      }
      param_2[2] = sVar4;
      pvVar1 = realloc(pvVar1,sVar4);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar2 = param_2[1];
    }
    *(undefined1 *)((undefined2 *)((long)pvVar1 + lVar2) + 1) = 0x20;
    *(undefined2 *)((long)pvVar1 + lVar2) = 0x3d20;
    plVar5 = *(long **)(param_1 + 0x20);
    param_2[1] = param_2[1] + 3;
  }
  (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
  if ((*(ushort *)((long)plVar5 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00166d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  return;
}


// ===== 00166d78  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00166d80  FUN_00166d80 =====

void FUN_00166d80(long param_1,undefined8 *param_2)

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
  if ((plVar7 != (long *)0x0) &&
     ((**(code **)(*plVar7 + 0x20))(plVar7,param_2), (*(ushort *)((long)plVar7 + 9) & 0xc0) != 0x40)
     ) {
    (**(code **)(*plVar7 + 0x28))(plVar7,param_2);
  }
  lVar2 = param_2[1];
  pvVar1 = (void *)*param_2;
  uVar5 = lVar2 + 1;
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
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x7b;
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
        FUN_001615a8(*(undefined8 *)(*(long *)(param_1 + 0x18) + lVar8 * 8),param_2,0x12,0);
        lVar4 = param_2[1];
        if (lVar3 == lVar4) break;
        bVar9 = false;
        lVar8 = lVar8 + 1;
        lVar2 = lVar4;
        if (lVar8 == *(long *)(param_1 + 0x20)) goto LAB_00166ef0;
      }
      param_2[1] = lVar2;
      lVar8 = lVar8 + 1;
    } while (lVar8 != *(long *)(param_1 + 0x20));
  }
LAB_00166ef0:
  uVar5 = lVar2 + 1;
  pvVar1 = (void *)*param_2;
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
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x7d;
  return;
}


// ===== 00166f60  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00166f68  FUN_00166f68 =====

void FUN_00166f68(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  long lVar2;
  size_t sVar3;
  ulong uVar4;
  long *plVar5;
  
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
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x28;
  plVar5 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
  if ((*(ushort *)((long)plVar5 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  }
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
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x29;
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
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x28;
  plVar5 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
  if ((*(ushort *)((long)plVar5 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  }
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
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x29;
  return;
}


// ===== 00167170  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00167178  FUN_00167178 =====

void FUN_00167178(long param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  size_t sVar7;
  long *plVar8;
  
  lVar4 = param_2[1];
  pvVar3 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar4 + 1U) {
    sVar7 = param_2[2] * 2;
    uVar6 = lVar4 + 0x3e1;
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
    lVar4 = param_2[1];
  }
  *(undefined1 *)((long)pvVar3 + lVar4) = 0x20;
  lVar5 = param_2[1];
  cVar1 = *(char *)(param_1 + 0x18);
  lVar4 = lVar5 + 1;
  param_2[1] = lVar4;
  if ((cVar1 != '\0') || (*(long *)(param_1 + 0x20) != 0)) {
    uVar6 = lVar5 + 2;
    pvVar3 = (void *)*param_2;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
    if ((ulong)param_2[2] < uVar6) {
      sVar7 = param_2[2] * 2;
      uVar6 = lVar5 + 0x3e2;
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
      lVar4 = param_2[1];
      uVar6 = lVar4 + 1;
    }
    param_2[1] = uVar6;
    *(undefined1 *)((long)pvVar3 + lVar4) = 0x7b;
  }
  plVar8 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar8 + 0x20))(plVar8,param_2);
  if ((*(ushort *)((long)plVar8 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar8 + 0x28))(plVar8,param_2);
  }
  if ((*(char *)(param_1 + 0x18) != '\0') || (*(long *)(param_1 + 0x20) != 0)) {
    lVar4 = param_2[1];
    pvVar3 = (void *)*param_2;
    uVar6 = lVar4 + 1;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
    if ((ulong)param_2[2] < uVar6) {
      sVar7 = param_2[2] * 2;
      uVar6 = lVar4 + 0x3e1;
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
      lVar4 = param_2[1];
      uVar6 = lVar4 + 1;
    }
    param_2[1] = uVar6;
    *(undefined1 *)((long)pvVar3 + lVar4) = 0x7d;
    if (*(char *)(param_1 + 0x18) != '\0') {
      lVar4 = param_2[1];
      pvVar3 = (void *)*param_2;
      if ((ulong)param_2[2] < lVar4 + 9U) {
        sVar7 = param_2[2] * 2;
        uVar6 = lVar4 + 0x3e9;
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
        lVar4 = param_2[1];
      }
      uVar2 = s_noexcept_00112127._0_8_;
      ((char *)((long)pvVar3 + lVar4))[8] = 't';
      *(undefined8 *)((long)pvVar3 + lVar4) = uVar2;
      param_2[1] = param_2[1] + 9;
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      lVar4 = param_2[1];
      pvVar3 = (void *)*param_2;
      if ((ulong)param_2[2] < lVar4 + 4U) {
        sVar7 = param_2[2] * 2;
        uVar6 = lVar4 + 0x3e4;
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
        lVar4 = param_2[1];
      }
      *(undefined4 *)((long)pvVar3 + lVar4) = 0x203e2d20;
      plVar8 = *(long **)(param_1 + 0x20);
      lVar4 = *plVar8;
      param_2[1] = param_2[1] + 4;
      (**(code **)(lVar4 + 0x20))(plVar8,param_2);
      if ((*(ushort *)((long)plVar8 + 9) & 0xc0) != 0x40) {
        (**(code **)(*plVar8 + 0x28))(plVar8,param_2);
      }
    }
  }
  lVar4 = param_2[1];
  pvVar3 = (void *)*param_2;
  uVar6 = lVar4 + 1;
  if ((ulong)param_2[2] < uVar6) {
    sVar7 = param_2[2] * 2;
    uVar6 = lVar4 + 0x3e1;
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
    lVar4 = param_2[1];
    uVar6 = lVar4 + 1;
  }
  param_2[1] = uVar6;
  *(undefined1 *)((long)pvVar3 + lVar4) = 0x3b;
  return;
}


// ===== 0016745c  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00167464  FUN_00167464 =====

void FUN_00167464(long param_1,undefined8 *param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  size_t sVar6;
  long *plVar7;
  
  lVar4 = param_2[1];
  pvVar3 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar4 + 10U) {
    sVar6 = param_2[2] * 2;
    uVar5 = lVar4 + 0x3ea;
    if (sVar6 < uVar5 || sVar6 - uVar5 == 0) {
      sVar6 = uVar5;
    }
    param_2[2] = sVar6;
    pvVar3 = realloc(pvVar3,sVar6);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
  }
  uVar2 = s_typename_00112b5d._0_8_;
  pcVar1 = (char *)((long)pvVar3 + lVar4);
  pcVar1[8] = 'e';
  pcVar1[9] = ' ';
  *(undefined8 *)pcVar1 = uVar2;
  plVar7 = *(long **)(param_1 + 0x10);
  lVar4 = *plVar7;
  param_2[1] = param_2[1] + 10;
  (**(code **)(lVar4 + 0x20))(plVar7,param_2);
  if ((*(ushort *)((long)plVar7 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar7 + 0x28))(plVar7,param_2);
  }
  lVar4 = param_2[1];
  pvVar3 = (void *)*param_2;
  uVar5 = lVar4 + 1;
  if ((ulong)param_2[2] < uVar5) {
    sVar6 = param_2[2] * 2;
    uVar5 = lVar4 + 0x3e1;
    if (sVar6 < uVar5 || sVar6 - uVar5 == 0) {
      sVar6 = uVar5;
    }
    param_2[2] = sVar6;
    pvVar3 = realloc(pvVar3,sVar6);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
    uVar5 = lVar4 + 1;
  }
  param_2[1] = uVar5;
  *(undefined1 *)((long)pvVar3 + lVar4) = 0x3b;
  return;
}


// ===== 00167580  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00167588  FUN_00167588 =====

void FUN_00167588(long param_1,undefined8 *param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  size_t sVar6;
  long *plVar7;
  
  lVar4 = param_2[1];
  pvVar3 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar4 + 10U) {
    sVar6 = param_2[2] * 2;
    uVar5 = lVar4 + 0x3ea;
    if (sVar6 < uVar5 || sVar6 - uVar5 == 0) {
      sVar6 = uVar5;
    }
    param_2[2] = sVar6;
    pvVar3 = realloc(pvVar3,sVar6);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
  }
  uVar2 = s_requires_00113013._0_8_;
  pcVar1 = (char *)((long)pvVar3 + lVar4);
  pcVar1[8] = 's';
  pcVar1[9] = ' ';
  *(undefined8 *)pcVar1 = uVar2;
  plVar7 = *(long **)(param_1 + 0x10);
  lVar4 = *plVar7;
  param_2[1] = param_2[1] + 10;
  (**(code **)(lVar4 + 0x20))(plVar7,param_2);
  if ((*(ushort *)((long)plVar7 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar7 + 0x28))(plVar7,param_2);
  }
  lVar4 = param_2[1];
  pvVar3 = (void *)*param_2;
  uVar5 = lVar4 + 1;
  if ((ulong)param_2[2] < uVar5) {
    sVar6 = param_2[2] * 2;
    uVar5 = lVar4 + 0x3e1;
    if (sVar6 < uVar5 || sVar6 - uVar5 == 0) {
      sVar6 = uVar5;
    }
    param_2[2] = sVar6;
    pvVar3 = realloc(pvVar3,sVar6);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
    uVar5 = lVar4 + 1;
  }
  param_2[1] = uVar5;
  *(undefined1 *)((long)pvVar3 + lVar4) = 0x3b;
  return;
}


// ===== 001676a4  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 001676ac  FUN_001676ac =====

void FUN_001676ac(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  size_t sVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  bool bVar10;
  
  lVar4 = param_2[1];
  pvVar1 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar4 + 8U) {
    sVar6 = param_2[2] * 2;
    uVar3 = lVar4 + 1000;
    if (sVar6 < uVar3 || sVar6 - uVar3 == 0) {
      sVar6 = uVar3;
    }
    param_2[2] = sVar6;
    pvVar1 = realloc(pvVar1,sVar6);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
  }
  *(undefined8 *)((long)pvVar1 + lVar4) = 0x7365726975716572;
  lVar5 = param_2[1];
  lVar7 = *(long *)(param_1 + 0x18);
  lVar4 = lVar5 + 8;
  param_2[1] = lVar4;
  if (lVar7 != 0) {
    uVar3 = lVar5 + 9;
    pvVar1 = (void *)*param_2;
    if ((ulong)param_2[2] < uVar3) {
      sVar6 = param_2[2] * 2;
      uVar3 = lVar5 + 0x3e9;
      if (sVar6 < uVar3 || sVar6 - uVar3 == 0) {
        sVar6 = uVar3;
      }
      param_2[2] = sVar6;
      pvVar1 = realloc(pvVar1,sVar6);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar4 = param_2[1];
      uVar3 = lVar4 + 1;
    }
    param_2[1] = uVar3;
    *(undefined1 *)((long)pvVar1 + lVar4) = 0x20;
    lVar4 = param_2[1];
    pvVar1 = (void *)*param_2;
    uVar3 = lVar4 + 1;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
    if ((ulong)param_2[2] < uVar3) {
      sVar6 = param_2[2] * 2;
      uVar3 = lVar4 + 0x3e1;
      if (sVar6 < uVar3 || sVar6 - uVar3 == 0) {
        sVar6 = uVar3;
      }
      param_2[2] = sVar6;
      pvVar1 = realloc(pvVar1,sVar6);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar4 = param_2[1];
      uVar3 = lVar4 + 1;
    }
    param_2[1] = uVar3;
    *(undefined1 *)((long)pvVar1 + lVar4) = 0x28;
    lVar4 = param_2[1];
    if (*(long *)(param_1 + 0x18) != 0) {
      lVar5 = 0;
      bVar10 = true;
      do {
        while( true ) {
          lVar7 = lVar4;
          if (!bVar10) {
            pvVar1 = (void *)*param_2;
            if ((ulong)param_2[2] < lVar4 + 2U) {
              sVar6 = param_2[2] * 2;
              uVar3 = lVar4 + 0x3e2;
              if (sVar6 < uVar3 || sVar6 - uVar3 == 0) {
                sVar6 = uVar3;
              }
              param_2[2] = sVar6;
              pvVar1 = realloc(pvVar1,sVar6);
              *param_2 = pvVar1;
              if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              lVar7 = param_2[1];
            }
            *(undefined2 *)((long)pvVar1 + lVar7) = 0x202c;
            lVar7 = param_2[1] + 2;
            param_2[1] = lVar7;
          }
          FUN_001615a8(*(undefined8 *)(*(long *)(param_1 + 0x10) + lVar5 * 8),param_2,0x12,0);
          lVar2 = param_2[1];
          if (lVar7 == lVar2) break;
          bVar10 = false;
          lVar5 = lVar5 + 1;
          lVar4 = lVar2;
          if (lVar5 == *(long *)(param_1 + 0x18)) goto LAB_00167898;
        }
        param_2[1] = lVar4;
        lVar5 = lVar5 + 1;
      } while (lVar5 != *(long *)(param_1 + 0x18));
    }
LAB_00167898:
    uVar3 = lVar4 + 1;
    pvVar1 = (void *)*param_2;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
    if ((ulong)param_2[2] < uVar3) {
      sVar6 = param_2[2] * 2;
      uVar3 = lVar4 + 0x3e1;
      if (sVar6 < uVar3 || sVar6 - uVar3 == 0) {
        sVar6 = uVar3;
      }
      param_2[2] = sVar6;
      pvVar1 = realloc(pvVar1,sVar6);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar4 = param_2[1];
      uVar3 = lVar4 + 1;
    }
    param_2[1] = uVar3;
    *(undefined1 *)((long)pvVar1 + lVar4) = 0x29;
    lVar4 = param_2[1];
  }
  uVar3 = lVar4 + 1;
  pvVar1 = (void *)*param_2;
  if ((ulong)param_2[2] < uVar3) {
    sVar6 = param_2[2] * 2;
    uVar3 = lVar4 + 0x3e1;
    if (sVar6 < uVar3 || sVar6 - uVar3 == 0) {
      sVar6 = uVar3;
    }
    param_2[2] = sVar6;
    pvVar1 = realloc(pvVar1,sVar6);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
    uVar3 = lVar4 + 1;
  }
  param_2[1] = uVar3;
  *(undefined1 *)((long)pvVar1 + lVar4) = 0x20;
  lVar4 = param_2[1];
  pvVar1 = (void *)*param_2;
  uVar3 = lVar4 + 1;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  if ((ulong)param_2[2] < uVar3) {
    sVar6 = param_2[2] * 2;
    uVar3 = lVar4 + 0x3e1;
    if (sVar6 < uVar3 || sVar6 - uVar3 == 0) {
      sVar6 = uVar3;
    }
    param_2[2] = sVar6;
    pvVar1 = realloc(pvVar1,sVar6);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
    uVar3 = lVar4 + 1;
  }
  param_2[1] = uVar3;
  *(undefined1 *)((long)pvVar1 + lVar4) = 0x7b;
  if (*(long *)(param_1 + 0x28) != 0) {
    puVar9 = *(undefined8 **)(param_1 + 0x20);
    lVar4 = *(long *)(param_1 + 0x28) << 3;
    do {
      plVar8 = (long *)*puVar9;
      (**(code **)(*plVar8 + 0x20))(plVar8,param_2);
      if ((*(ushort *)((long)plVar8 + 9) & 0xc0) != 0x40) {
        (**(code **)(*plVar8 + 0x28))(plVar8,param_2);
      }
      lVar4 = lVar4 + -8;
      puVar9 = puVar9 + 1;
    } while (lVar4 != 0);
  }
  lVar4 = param_2[1];
  pvVar1 = (void *)*param_2;
  uVar3 = lVar4 + 1;
  if ((ulong)param_2[2] < uVar3) {
    sVar6 = param_2[2] * 2;
    uVar3 = lVar4 + 0x3e1;
    if (sVar6 < uVar3 || sVar6 - uVar3 == 0) {
      sVar6 = uVar3;
    }
    param_2[2] = sVar6;
    pvVar1 = realloc(pvVar1,sVar6);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
    uVar3 = lVar4 + 1;
  }
  param_2[1] = uVar3;
  *(undefined1 *)((long)pvVar1 + lVar4) = 0x20;
  lVar4 = param_2[1];
  pvVar1 = (void *)*param_2;
  uVar3 = lVar4 + 1;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
  if ((ulong)param_2[2] < uVar3) {
    sVar6 = param_2[2] * 2;
    uVar3 = lVar4 + 0x3e1;
    if (sVar6 < uVar3 || sVar6 - uVar3 == 0) {
      sVar6 = uVar3;
    }
    param_2[2] = sVar6;
    pvVar1 = realloc(pvVar1,sVar6);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
    uVar3 = lVar4 + 1;
  }
  param_2[1] = uVar3;
  *(undefined1 *)((long)pvVar1 + lVar4) = 0x7d;
  return;
}


// ===== 00167ac8  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00167ad0  FUN_00167ad0 =====

void FUN_00167ad0(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  long lVar2;
  size_t sVar3;
  size_t sVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  char *pcVar9;
  
  plVar8 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar8 + 0x20))(plVar8);
  if ((*(ushort *)((long)plVar8 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar8 + 0x28))(plVar8,param_2);
  }
  lVar2 = param_2[1];
  pvVar1 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar2 + 2U) {
    sVar4 = param_2[2] * 2;
    uVar6 = lVar2 + 0x3e2;
    if (sVar4 < uVar6 || sVar4 - uVar6 == 0) {
      sVar4 = uVar6;
    }
    param_2[2] = sVar4;
    pvVar1 = realloc(pvVar1,sVar4);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_2[1];
  }
  *(undefined2 *)((long)pvVar1 + lVar2) = 0x3c2e;
  plVar8 = *(long **)(param_1 + 0x10);
  lVar2 = *plVar8;
  param_2[1] = param_2[1] + 2;
  (**(code **)(lVar2 + 0x20))(plVar8,param_2);
  if ((*(ushort *)((long)plVar8 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar8 + 0x28))(plVar8,param_2);
  }
  lVar2 = param_2[1];
  pvVar1 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar2 + 0xbU) {
    sVar4 = param_2[2] * 2;
    uVar6 = lVar2 + 0x3eb;
    if (sVar4 < uVar6 || sVar4 - uVar6 == 0) {
      sVar4 = uVar6;
    }
    param_2[2] = sVar4;
    pvVar1 = realloc(pvVar1,sVar4);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_2[1];
  }
  pcVar9 = (char *)((long)pvVar1 + lVar2);
  *(undefined8 *)pcVar9 = s_at_offset_00112785._0_8_;
  pcVar9[7] = 's';
  pcVar9[8] = 'e';
  pcVar9[9] = 't';
  pcVar9[10] = ' ';
  lVar5 = param_2[1];
  lVar2 = lVar5 + 0xb;
  param_2[1] = lVar2;
  sVar4 = *(size_t *)(param_1 + 0x28);
  if (sVar4 == 0) {
    pvVar1 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar5 + 0xcU) {
      sVar4 = param_2[2] * 2;
      uVar6 = lVar5 + 0x3ec;
      if (sVar4 < uVar6 || sVar4 - uVar6 == 0) {
        sVar4 = uVar6;
      }
      param_2[2] = sVar4;
      pvVar1 = realloc(pvVar1,sVar4);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar2 = param_2[1];
    }
    *(undefined1 *)((long)pvVar1 + lVar2) = 0x30;
    sVar4 = 1;
  }
  else {
    pcVar9 = *(char **)(param_1 + 0x20);
    uVar6 = param_2[2];
    pvVar1 = (void *)*param_2;
    if (*pcVar9 == 'n') {
      if (uVar6 < lVar5 + 0xcU) {
        sVar4 = uVar6 * 2;
        uVar6 = lVar5 + 0x3ec;
        if (sVar4 < uVar6 || sVar4 - uVar6 == 0) {
          sVar4 = uVar6;
        }
        param_2[2] = sVar4;
        pvVar1 = realloc(pvVar1,sVar4);
        *param_2 = pvVar1;
        if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar2 = param_2[1];
      }
      *(undefined1 *)((long)pvVar1 + lVar2) = 0x2d;
      lVar5 = param_2[1];
      lVar7 = *(long *)(param_1 + 0x28);
      lVar2 = lVar5 + 1;
      sVar4 = lVar7 - 1;
      param_2[1] = lVar2;
      if (sVar4 == 0) goto LAB_00167d5c;
      uVar6 = lVar5 + lVar7;
      lVar5 = *(long *)(param_1 + 0x20);
      pvVar1 = (void *)*param_2;
      if ((ulong)param_2[2] < uVar6) {
        sVar3 = param_2[2] * 2;
        uVar6 = uVar6 + 0x3e0;
        if (sVar3 < uVar6 || sVar3 - uVar6 == 0) {
          sVar3 = uVar6;
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
      pcVar9 = (char *)(lVar5 + 1);
    }
    else {
      if (uVar6 < lVar2 + sVar4) {
        sVar3 = uVar6 * 2;
        uVar6 = lVar2 + sVar4 + 0x3e0;
        if (sVar3 < uVar6 || sVar3 - uVar6 == 0) {
          sVar3 = uVar6;
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
    memcpy(pvVar1,pcVar9,sVar4);
  }
  lVar2 = param_2[1] + sVar4;
  param_2[1] = lVar2;
LAB_00167d5c:
  pvVar1 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar2 + 1U) {
    sVar4 = param_2[2] * 2;
    uVar6 = lVar2 + 0x3e1;
    if (sVar4 < uVar6 || sVar4 - uVar6 == 0) {
      sVar4 = uVar6;
    }
    param_2[2] = sVar4;
    pvVar1 = realloc(pvVar1,sVar4);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_2[1];
  }
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x3e;
  param_2[1] = param_2[1] + 1;
  return;
}


// ===== 00167dd8  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00167de0  FUN_00167de0 =====

void FUN_00167de0(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  size_t sVar6;
  undefined **local_38;
  undefined1 local_30;
  undefined2 local_2f;
  undefined8 local_28;
  
  lVar4 = param_2[1];
  pvVar3 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar4 + 9U) {
    sVar6 = param_2[2] * 2;
    uVar5 = lVar4 + 0x3e9;
    if (sVar6 < uVar5 || sVar6 - uVar5 == 0) {
      sVar6 = uVar5;
    }
    param_2[2] = sVar6;
    pvVar3 = realloc(pvVar3,sVar6);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
  }
  uVar2 = s_sizeof____00111c30._0_8_;
  ((char *)((long)pvVar3 + lVar4))[8] = '.';
  *(undefined8 *)((long)pvVar3 + lVar4) = uVar2;
  lVar1 = param_2[1];
  pvVar3 = (void *)*param_2;
  uVar5 = lVar1 + 10;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  lVar4 = lVar1 + 9;
  param_2[1] = lVar4;
  if ((ulong)param_2[2] < uVar5) {
    sVar6 = param_2[2] * 2;
    uVar5 = lVar1 + 0x3ea;
    if (sVar6 < uVar5 || sVar6 - uVar5 == 0) {
      sVar6 = uVar5;
    }
    param_2[2] = sVar6;
    pvVar3 = realloc(pvVar3,sVar6);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
    uVar5 = lVar4 + 1;
  }
  param_2[1] = uVar5;
  *(undefined1 *)((long)pvVar3 + lVar4) = 0x28;
  local_30 = 0x2a;
  local_28 = *(undefined8 *)(param_1 + 0x10);
  local_2f = 0x540;
  local_38 = &PTR_FUN_0017bc90;
  FUN_00166700(&local_38,param_2);
  lVar4 = param_2[1];
  pvVar3 = (void *)*param_2;
  uVar5 = lVar4 + 1;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
  if ((ulong)param_2[2] < uVar5) {
    sVar6 = param_2[2] * 2;
    uVar5 = lVar4 + 0x3e1;
    if (sVar6 < uVar5 || sVar6 - uVar5 == 0) {
      sVar6 = uVar5;
    }
    param_2[2] = sVar6;
    pvVar3 = realloc(pvVar3,sVar6);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
    uVar5 = lVar4 + 1;
  }
  param_2[1] = uVar5;
  *(undefined1 *)((long)pvVar3 + lVar4) = 0x29;
  return;
}


// ===== 00167f58  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00167f60  FUN_00167f60 =====

void FUN_00167f60(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *__ptr;
  size_t __size;
  long lVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar3 = 0;
    bVar5 = true;
    lVar4 = param_2[1];
    do {
      while( true ) {
        lVar2 = lVar4;
        if (!bVar5) {
          __ptr = (void *)*param_2;
          if ((ulong)param_2[2] < lVar4 + 2U) {
            __size = param_2[2] * 2;
            uVar1 = lVar4 + 0x3e2;
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
          *(undefined2 *)((long)__ptr + lVar2) = 0x202c;
          lVar2 = param_2[1] + 2;
          param_2[1] = lVar2;
        }
        FUN_001615a8(*(undefined8 *)(*(long *)(param_1 + 0x10) + lVar3 * 8),param_2,0x12,0);
        if (lVar2 == param_2[1]) break;
        bVar5 = false;
        lVar3 = lVar3 + 1;
        lVar4 = param_2[1];
        if (lVar3 == *(long *)(param_1 + 0x18)) {
          return;
        }
      }
      param_2[1] = lVar4;
      lVar3 = lVar3 + 1;
    } while (lVar3 != *(long *)(param_1 + 0x18));
  }
  return;
}


// ===== 00168068  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00168070  FUN_00168070 =====

void FUN_00168070(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *__ptr;
  long lVar2;
  size_t __size;
  long *plVar3;
  
  lVar2 = param_2[1];
  __ptr = (void *)*param_2;
  if ((ulong)param_2[2] < lVar2 + 6U) {
    __size = param_2[2] * 2;
    uVar1 = lVar2 + 0x3e6;
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
  *(undefined2 *)((undefined4 *)((long)__ptr + lVar2) + 1) = 0x2077;
  *(undefined4 *)((long)__ptr + lVar2) = 0x6f726874;
  plVar3 = *(long **)(param_1 + 0x10);
  lVar2 = *plVar3;
  param_2[1] = param_2[1] + 6;
  (**(code **)(lVar2 + 0x20))(plVar3,param_2);
  if ((*(ushort *)((long)plVar3 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00168140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
  return;
}


// ===== 00168148  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00168150  FUN_00168150 =====

void FUN_00168150(long *param_1)

{
  char cVar1;
  long lVar2;
  long *__ptr;
  void *__dest;
  size_t __n;
  long *plVar3;
  long *plVar4;
  
  if ((char *)param_1[1] == (char *)*param_1) {
LAB_001681d4:
    FUN_0015bf00();
    return;
  }
  cVar1 = *(char *)*param_1;
  if (cVar1 == 'D') {
    lVar2 = FUN_0015bdbc();
    if (lVar2 == 0) {
      return;
    }
    plVar4 = (long *)param_1[0x26];
    if (plVar4 != (long *)param_1[0x27]) goto LAB_001682a8;
    plVar3 = (long *)param_1[0x25];
    __n = (long)plVar4 - (long)plVar3;
    if (plVar3 == param_1 + 0x28) {
      __dest = malloc(__n * 2);
      if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (plVar4 != plVar3) {
        memmove(__dest,plVar3,__n);
      }
LAB_0016828c:
      param_1[0x25] = (long)__dest;
    }
    else {
      __dest = realloc(plVar3,__n * 2);
      param_1[0x25] = (long)__dest;
      if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
  }
  else {
    if (cVar1 != 'T') goto LAB_001681d4;
    lVar2 = FUN_0015b9ec();
    if (lVar2 == 0) {
      return;
    }
    plVar4 = (long *)param_1[0x26];
    if (plVar4 != (long *)param_1[0x27]) goto LAB_001682a8;
    __ptr = (long *)param_1[0x25];
    plVar3 = param_1 + 0x28;
    __n = (long)plVar4 - (long)__ptr;
    if (__ptr == plVar3) {
      __dest = malloc(__n * 2);
      if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (plVar4 != plVar3) {
        memcpy(__dest,plVar3,__n);
      }
      goto LAB_0016828c;
    }
    __dest = realloc(__ptr,__n * 2);
    param_1[0x25] = (long)__dest;
    if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  plVar4 = (long *)((long)__dest + __n);
  param_1[0x27] = (long)((long)__dest + ((long)__n >> 2) * 8);
LAB_001682a8:
  param_1[0x26] = (long)(plVar4 + 1);
  *plVar4 = lVar2;
  return;
}


// ===== 001682d4  FUN_001682d4 =====

undefined8 * FUN_001682d4(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  void *pvVar6;
  
  puVar1 = (undefined8 *)FUN_0015adf4();
  puVar5 = puVar1;
  if ((((puVar1 != (undefined8 *)0x0) && ((char *)param_1[1] != (char *)*param_1)) &&
      (*(char *)*param_1 == 'I')) &&
     (puVar2 = (undefined8 *)FUN_0015b3a8(param_1,0), puVar5 = puVar2, puVar2 != (undefined8 *)0x0))
  {
    pvVar6 = (void *)param_1[0x266];
    lVar4 = *(long *)((long)pvVar6 + 8);
    puVar3 = (undefined8 *)pvVar6;
    if (lVar4 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = (undefined8 *)malloc(0x1000);
      if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar4 = 0;
      *puVar3 = pvVar6;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar4 + 0x20;
    puVar5 = (undefined8 *)((long)puVar3 + lVar4 + 0x10);
    *puVar5 = &PTR_FUN_0017c940;
    *(undefined8 **)((long)puVar3 + lVar4 + 0x20) = puVar1;
    *(undefined8 **)((long)puVar3 + lVar4 + 0x28) = puVar2;
    *(undefined1 *)((long)puVar3 + lVar4 + 0x18) = 0x2d;
    *(ushort *)((long)puVar3 + lVar4 + 0x19) =
         *(ushort *)((long)puVar3 + lVar4 + 0x19) & 0xf000 | 0x540;
  }
  return puVar5;
}


// ===== 001683ac  FUN_001683ac =====

undefined8 * FUN_001683ac(long *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  void *pvVar9;
  
  pbVar1 = (byte *)*param_1;
  pbVar2 = (byte *)param_1[1];
  if ((pbVar2 != pbVar1) && (0xfffffff5 < *pbVar1 - 0x3a)) {
    puVar3 = (undefined8 *)FUN_001682d4(param_1);
    return puVar3;
  }
  if ((ulong)((long)pbVar2 - (long)pbVar1) < 2) {
LAB_00168408:
    puVar3 = (undefined8 *)FUN_00168700(param_1,0);
  }
  else {
    if (*(short *)pbVar1 == 0x6e64) {
      pbVar1 = pbVar1 + 2;
      *param_1 = (long)pbVar1;
      if ((pbVar2 == pbVar1) || (*pbVar1 - 0x3a < 0xfffffff6)) {
        lVar6 = FUN_00168150(param_1);
      }
      else {
        lVar6 = FUN_001682d4(param_1);
      }
      if (lVar6 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar9 = (void *)param_1[0x266];
      lVar8 = *(long *)((long)pvVar9 + 8);
      puVar3 = (undefined8 *)pvVar9;
      if (0xfffffffffffff00f < lVar8 - 0xfd0U) {
LAB_0016854c:
        *(long *)((long)puVar3 + 8) = lVar8 + 0x20;
        puVar7 = (undefined8 *)((long)puVar3 + lVar8 + 0x10);
        *puVar7 = &PTR_FUN_0017c2b0;
        *(long *)((long)puVar3 + lVar8 + 0x20) = lVar6;
        *(undefined1 *)((long)puVar3 + lVar8 + 0x18) = 0x32;
        *(ushort *)((long)puVar3 + lVar8 + 0x19) =
             *(ushort *)((long)puVar3 + lVar8 + 0x19) & 0xf000 | 0x540;
        return puVar7;
      }
      puVar3 = (undefined8 *)malloc(0x1000);
      if (puVar3 != (undefined8 *)0x0) {
        lVar8 = 0;
        *puVar3 = pvVar9;
        puVar3[1] = 0;
        param_1[0x266] = (long)puVar3;
        goto LAB_0016854c;
      }
      goto LAB_001685dc;
    }
    if (*(short *)pbVar1 != 0x6e6f) goto LAB_00168408;
    *param_1 = (long)(pbVar1 + 2);
    puVar3 = (undefined8 *)FUN_00168700(param_1,0);
  }
  puVar7 = puVar3;
  if ((((puVar3 != (undefined8 *)0x0) && ((char *)param_1[1] != (char *)*param_1)) &&
      (*(char *)*param_1 == 'I')) &&
     (puVar4 = (undefined8 *)FUN_0015b3a8(param_1,0), puVar7 = puVar4, puVar4 != (undefined8 *)0x0))
  {
    pvVar9 = (void *)param_1[0x266];
    lVar6 = *(long *)((long)pvVar9 + 8);
    puVar5 = (undefined8 *)pvVar9;
    if (lVar6 - 0xfd0U < 0xfffffffffffff010) {
      puVar5 = (undefined8 *)malloc(0x1000);
      if (puVar5 == (undefined8 *)0x0) {
LAB_001685dc:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar6 = 0;
      *puVar5 = pvVar9;
      puVar5[1] = 0;
      param_1[0x266] = (long)puVar5;
    }
    *(long *)((long)puVar5 + 8) = lVar6 + 0x20;
    puVar7 = (undefined8 *)((long)puVar5 + lVar6 + 0x10);
    *puVar7 = &PTR_FUN_0017c940;
    *(undefined8 **)((long)puVar5 + lVar6 + 0x20) = puVar3;
    *(undefined8 **)((long)puVar5 + lVar6 + 0x28) = puVar4;
    *(undefined1 *)((long)puVar5 + lVar6 + 0x18) = 0x2d;
    *(ushort *)((long)puVar5 + lVar6 + 0x19) =
         *(ushort *)((long)puVar5 + lVar6 + 0x19) & 0xf000 | 0x540;
  }
  return puVar7;
}


// ===== 001685e0  FUN_001685e0 =====

void FUN_001685e0(long param_1,undefined8 *param_2)

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
  if ((ulong)param_2[2] < lVar2 + 2U) {
    __size = param_2[2] * 2;
    uVar1 = lVar2 + 0x3e2;
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
  *(undefined2 *)((long)__ptr + lVar2) = 0x3a3a;
  plVar3 = *(long **)(param_1 + 0x18);
  lVar2 = *plVar3;
  param_2[1] = param_2[1] + 2;
  (**(code **)(lVar2 + 0x20))(plVar3,param_2);
  if ((*(ushort *)((long)plVar3 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001686dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
  return;
}


// ===== 001686e4  FUN_001686e4 =====

void FUN_001686e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001686f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
  return;
}


// ===== 001686f8  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00168700  FUN_00168700 =====

undefined8 * FUN_00168700(long *param_1,undefined1 *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  char cVar5;
  ushort uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  size_t sVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined1 uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  char *__s;
  void *pvVar18;
  
  pbVar2 = (byte *)*param_1;
  pbVar3 = (byte *)param_1[1];
  if ((ulong)((long)pbVar3 - (long)pbVar2) < 2) {
LAB_00168878:
    if (pbVar2 == pbVar3) {
      return (undefined8 *)0x0;
    }
    if (*pbVar2 != 0x76) {
      return (undefined8 *)0x0;
    }
    pbVar1 = pbVar2 + 1;
    *param_1 = (long)pbVar1;
    if (pbVar3 == pbVar1) {
      return (undefined8 *)0x0;
    }
    if (9 < *pbVar1 - 0x30) {
      return (undefined8 *)0x0;
    }
    *param_1 = (long)(pbVar2 + 2);
    lVar12 = FUN_0015adf4();
    if (lVar12 == 0) {
      return (undefined8 *)0x0;
    }
    pvVar18 = (void *)param_1[0x266];
    lVar7 = *(long *)((long)pvVar18 + 8);
    puVar9 = (undefined8 *)pvVar18;
    if (lVar7 - 0xfd0U < 0xfffffffffffff010) {
      puVar9 = (undefined8 *)malloc(0x1000);
      if (puVar9 == (undefined8 *)0x0) {
LAB_00168aa8:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar7 = 0;
      *puVar9 = pvVar18;
      puVar9[1] = 0;
      param_1[0x266] = (long)puVar9;
    }
    lVar14 = (long)puVar9 + lVar7;
    ppuVar11 = &PTR_FUN_0017c320;
    *(long *)((long)puVar9 + 8) = lVar7 + 0x20;
    uVar13 = 4;
  }
  else {
    bVar4 = *pbVar2;
    uVar15 = 0;
    uVar16 = 0x3d;
    do {
      uVar17 = uVar15 + uVar16 >> 1;
      if (((byte)(&DAT_0017ab80)[uVar17 * 0x10] < bVar4) ||
         ((bVar4 == (&DAT_0017ab80)[uVar17 * 0x10] &&
          ((byte)(&DAT_0017ab81)[uVar17 * 0x10] < pbVar2[1])))) {
        uVar15 = uVar17 + 1;
        uVar17 = uVar16;
      }
      uVar16 = uVar17;
    } while (uVar16 != uVar15);
    lVar12 = uVar15 * 0x10;
    if ((bVar4 == (&DAT_0017ab80)[lVar12]) && (pbVar2[1] == (&DAT_0017ab81)[lVar12])) {
      bVar4 = (&DAT_0017ab82)[lVar12];
      *param_1 = (long)(pbVar2 + 2);
      if (bVar4 == 8) {
        cVar5 = *(char *)((long)param_1 + 0x309);
        lVar12 = param_1[0x61];
        *(undefined1 *)(param_1 + 0x61) = 0;
        *(bool *)((long)param_1 + 0x309) = param_2 != (undefined1 *)0x0 || cVar5 != '\0';
                    /* try { // try from 001687d8 to 001687df has its CatchHandler @ 00168aac */
        lVar7 = FUN_00157a9c();
        if (lVar7 == 0) {
          puVar9 = (undefined8 *)0x0;
        }
        else {
          if (param_2 != (undefined1 *)0x0) {
            *param_2 = 1;
          }
          pvVar18 = (void *)param_1[0x266];
          lVar14 = *(long *)((long)pvVar18 + 8);
          puVar8 = (undefined8 *)pvVar18;
          if (lVar14 - 0xfd0U < 0xfffffffffffff010) {
            puVar8 = (undefined8 *)malloc(0x1000);
            if (puVar8 == (undefined8 *)0x0) goto LAB_00168aa8;
            lVar14 = 0;
            *puVar8 = pvVar18;
            puVar8[1] = 0;
            param_1[0x266] = (long)puVar8;
          }
          *(long *)((long)puVar8 + 8) = lVar14 + 0x20;
          puVar9 = (undefined8 *)((long)puVar8 + lVar14 + 0x10);
          *puVar9 = &PTR_FUN_0017c320;
          *(long *)((long)puVar8 + lVar14 + 0x20) = lVar7;
          *(undefined1 *)((long)puVar8 + lVar14 + 0x18) = 4;
          *(ushort *)((long)puVar8 + lVar14 + 0x19) =
               *(ushort *)((long)puVar8 + lVar14 + 0x19) & 0xf000 | 0x540;
        }
        *(char *)((long)param_1 + 0x309) = cVar5;
        *(char *)(param_1 + 0x61) = (char)lVar12;
        return puVar9;
      }
      if (10 < bVar4) {
        return (undefined8 *)0x0;
      }
      if ((bVar4 == 4) && (((&DAT_0017ab83)[lVar12] & 1) == 0)) {
        return (undefined8 *)0x0;
      }
      __s = (&PTR_s_operator___0017ab88)[uVar15 * 2];
      sVar10 = strlen(__s);
      pvVar18 = (void *)param_1[0x266];
      lVar12 = *(long *)((long)pvVar18 + 8);
      puVar9 = (undefined8 *)pvVar18;
      if (lVar12 - 0xfd0U < 0xfffffffffffff010) {
        puVar9 = (undefined8 *)malloc(0x1000);
        if (puVar9 == (undefined8 *)0x0) goto LAB_00168aa8;
        lVar12 = 0;
        *puVar9 = pvVar18;
        puVar9[1] = 0;
        param_1[0x266] = (long)puVar9;
      }
      *(long *)((long)puVar9 + 8) = lVar12 + 0x20;
      puVar8 = (undefined8 *)((long)puVar9 + lVar12 + 0x10);
      *puVar8 = &PTR_FUN_0017aa40;
      uVar6 = *(ushort *)((long)puVar9 + lVar12 + 0x19);
      *(char **)((long)puVar9 + lVar12 + 0x20) = __s;
      *(size_t *)((long)puVar9 + lVar12 + 0x28) = sVar10;
      *(undefined1 *)((long)puVar9 + lVar12 + 0x18) = 8;
      goto LAB_001689b0;
    }
    if (*(short *)pbVar2 != 0x696c) goto LAB_00168878;
    *param_1 = (long)(pbVar2 + 2);
    lVar12 = FUN_0015adf4();
    if (lVar12 == 0) {
      return (undefined8 *)0x0;
    }
    pvVar18 = (void *)param_1[0x266];
    lVar7 = *(long *)((long)pvVar18 + 8);
    puVar9 = (undefined8 *)pvVar18;
    if (lVar7 - 0xfd0U < 0xfffffffffffff010) {
      puVar9 = (undefined8 *)malloc(0x1000);
      if (puVar9 == (undefined8 *)0x0) goto LAB_00168aa8;
      lVar7 = 0;
      *puVar9 = pvVar18;
      puVar9[1] = 0;
      param_1[0x266] = (long)puVar9;
    }
    lVar14 = (long)puVar9 + lVar7;
    ppuVar11 = &PTR_FUN_0017c390;
    *(long *)((long)puVar9 + 8) = lVar7 + 0x20;
    uVar13 = 0x14;
  }
  puVar8 = (undefined8 *)(lVar14 + 0x10);
  *puVar8 = ppuVar11;
  uVar6 = *(ushort *)(lVar14 + 0x19);
  *(undefined1 *)(lVar14 + 0x18) = uVar13;
  *(long *)(lVar14 + 0x20) = lVar12;
LAB_001689b0:
  *(ushort *)((long)puVar8 + 9) = uVar6 & 0xf000 | 0x540;
  return puVar8;
}


// ===== 00168ab8  FUN_00168ab8 =====

void FUN_00168ab8(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *__ptr;
  long lVar2;
  size_t __size;
  
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
  *(undefined1 *)((long)__ptr + lVar2) = 0x7e;
  lVar2 = **(long **)(param_1 + 0x10);
  param_2[1] = param_2[1] + 1;
                    /* WARNING: Could not recover jumptable at 0x00168b44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x20))();
  return;
}


// ===== 00168b4c  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00168b54  FUN_00168b54 =====

void FUN_00168b54(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  void *__ptr;
  long lVar3;
  size_t __size;
  long *plVar4;
  
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
  uVar2 = s_operator_00112d50._0_8_;
  ((char *)((long)__ptr + lVar3))[8] = ' ';
  *(undefined8 *)((long)__ptr + lVar3) = uVar2;
  plVar4 = *(long **)(param_1 + 0x10);
  lVar3 = *plVar4;
  param_2[1] = param_2[1] + 9;
  (**(code **)(lVar3 + 0x20))(plVar4,param_2);
  if ((*(ushort *)((long)plVar4 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00168c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  return;
}


// ===== 00168c30  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00168c38  FUN_00168c38 =====

void FUN_00168c38(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  char *pcVar2;
  void *__ptr;
  long lVar3;
  size_t __size;
  long *plVar4;
  
  lVar3 = param_2[1];
  __ptr = (void *)*param_2;
  if ((ulong)param_2[2] < lVar3 + 0xbU) {
    __size = param_2[2] * 2;
    uVar1 = lVar3 + 0x3eb;
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
  pcVar2 = (char *)((long)__ptr + lVar3);
  *(undefined8 *)pcVar2 = s_operator___00112b68._0_8_;
  pcVar2[7] = 'r';
  pcVar2[8] = '\"';
  pcVar2[9] = '\"';
  pcVar2[10] = ' ';
  plVar4 = *(long **)(param_1 + 0x10);
  lVar3 = *plVar4;
  param_2[1] = param_2[1] + 0xb;
  (**(code **)(lVar3 + 0x20))(plVar4,param_2);
  if ((*(ushort *)((long)plVar4 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00168d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  return;
}


// ===== 00168d18  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00168d20  FUN_00168d20 =====

void FUN_00168d20(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *__ptr;
  long lVar2;
  size_t __size;
  long *plVar3;
  
  lVar2 = param_2[1];
  __ptr = (void *)*param_2;
  if ((ulong)param_2[2] < lVar2 + 2U) {
    __size = param_2[2] * 2;
    uVar1 = lVar2 + 0x3e2;
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
  *(undefined2 *)((long)__ptr + lVar2) = 0x3a3a;
  plVar3 = *(long **)(param_1 + 0x10);
  lVar2 = *plVar3;
  param_2[1] = param_2[1] + 2;
  (**(code **)(lVar2 + 0x20))(plVar3,param_2);
  if ((*(ushort *)((long)plVar3 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00168de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
  return;
}


// ===== 00168de8  FUN_00168de8 =====

void FUN_00168de8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00168df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x30))();
  return;
}


// ===== 00168dfc  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00168e04  FUN_00168e04 =====

undefined8 * FUN_00168e04(long *param_1,undefined8 *param_2)

{
  ushort uVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  ulong uVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  ulong uVar9;
  void *pvVar10;
  
  pbVar6 = (byte *)*param_1;
  pbVar3 = (byte *)param_1[1];
  puVar8 = param_2;
  if (pbVar6 != pbVar3) {
    do {
      if (*pbVar6 != 0x42) {
        return puVar8;
      }
      pbVar7 = pbVar6 + 1;
      *param_1 = (long)pbVar7;
      if ((pbVar3 == pbVar7) || (*pbVar7 - 0x3a < 0xfffffff6)) {
        return (undefined8 *)0x0;
      }
      uVar9 = 0;
      pbVar6 = pbVar6 + 2;
      do {
        pbVar7 = pbVar6;
        *param_1 = (long)pbVar7;
        uVar9 = ((ulong)pbVar7[-1] + uVar9 * 10) - 0x30;
        if (pbVar7 == pbVar3) {
          if (uVar9 != 0) {
            return (undefined8 *)0x0;
          }
          goto LAB_00168f18;
        }
        pbVar6 = pbVar7 + 1;
      } while (*pbVar7 - 0x30 < 10);
      uVar4 = (long)pbVar3 - (long)pbVar7;
      pbVar3 = pbVar7;
      if (uVar4 < uVar9) {
        return (undefined8 *)0x0;
      }
LAB_00168f18:
      *param_1 = (long)(pbVar3 + uVar9);
      if (uVar9 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar10 = (void *)param_1[0x266];
      lVar5 = *(long *)((long)pvVar10 + 8);
      puVar2 = (undefined8 *)pvVar10;
      if (lVar5 - 0xfc0U < 0xfffffffffffff010) {
        puVar2 = (undefined8 *)malloc(0x1000);
        if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar5 = 0;
        *puVar2 = pvVar10;
        puVar2[1] = 0;
        param_1[0x266] = (long)puVar2;
      }
      *(long *)((long)puVar2 + 8) = lVar5 + 0x30;
      uVar1 = *(ushort *)((long)puVar8 + 9);
      param_2 = (undefined8 *)((long)puVar2 + lVar5 + 0x10);
      *param_2 = &PTR_FUN_0017c550;
      *(byte **)((long)puVar2 + lVar5 + 0x28) = pbVar3;
      *(ulong *)((long)puVar2 + lVar5 + 0x30) = uVar9;
      *(undefined8 **)((long)puVar2 + lVar5 + 0x20) = puVar8;
      *(undefined1 *)((long)puVar2 + lVar5 + 0x18) = 9;
      *(ushort *)((long)puVar2 + lVar5 + 0x19) =
           *(ushort *)((long)puVar2 + lVar5 + 0x19) & 0xf000 | uVar1 & 0xfc0;
      pbVar6 = (byte *)*param_1;
      pbVar3 = (byte *)param_1[1];
      puVar8 = param_2;
    } while (pbVar6 != pbVar3);
  }
  return param_2;
}


// ===== 00168f84  FUN_00168f84 =====

void FUN_00168f84(long param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  long lVar3;
  size_t __size;
  long lVar4;
  ulong uVar5;
  size_t sVar6;
  ulong uVar7;
  char *pcVar8;
  
  lVar4 = param_2[1];
  pvVar2 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar4 + 5U) {
    sVar6 = param_2[2] * 2;
    uVar5 = lVar4 + 0x3e5;
    if (sVar6 < uVar5 || sVar6 - uVar5 == 0) {
      sVar6 = uVar5;
    }
    param_2[2] = sVar6;
    pvVar2 = realloc(pvVar2,sVar6);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
  }
  *(undefined1 *)((undefined4 *)((long)pvVar2 + lVar4) + 1) = 0x3a;
  *(undefined4 *)((long)pvVar2 + lVar4) = 0x3a647473;
  lVar3 = param_2[1];
  iVar1 = *(int *)(param_1 + 0xc);
  lVar4 = lVar3 + 5;
  param_2[1] = lVar4;
  if (iVar1 < 3) {
    if (iVar1 == 0) {
      pcVar8 = "allocator";
      sVar6 = 9;
      uVar7 = param_2[2];
      uVar5 = lVar3 + 0xe;
      pvVar2 = (void *)*param_2;
      if (uVar5 <= uVar7) goto LAB_0016910c;
    }
    else {
      if (iVar1 != 1) {
        pcVar8 = "basic_string";
        sVar6 = 6;
        goto LAB_001690b0;
      }
      pcVar8 = "basic_string";
      sVar6 = 0xc;
      uVar7 = param_2[2];
      uVar5 = lVar3 + 0x11;
      pvVar2 = (void *)*param_2;
      if (uVar5 <= uVar7) goto LAB_0016910c;
    }
  }
  else {
    if (iVar1 == 3) {
      pcVar8 = "basic_istream";
      sVar6 = 7;
    }
    else if (iVar1 == 4) {
      pcVar8 = "basic_ostream";
      sVar6 = 7;
    }
    else {
      pcVar8 = "basic_iostream";
      sVar6 = 8;
    }
LAB_001690b0:
    if (*(int *)pcVar8 != 0x69736162 || (short)*(int *)((long)pcVar8 + 4) != 0x5f63) {
                    /* WARNING: Subroutine does not return */
      FUN_00154b08("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h",0x6aa,
                   &DAT_00111743);
    }
    pcVar8 = (char *)((long)pcVar8 + 6);
    uVar7 = param_2[2];
    uVar5 = lVar4 + sVar6;
    pvVar2 = (void *)*param_2;
    if (uVar5 <= uVar7) goto LAB_0016910c;
  }
  __size = uVar7 * 2;
  uVar5 = uVar5 + 0x3e0;
  if (__size < uVar5 || __size - uVar5 == 0) {
    __size = uVar5;
  }
  param_2[2] = __size;
  pvVar2 = realloc(pvVar2,__size);
  *param_2 = pvVar2;
  if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar4 = param_2[1];
LAB_0016910c:
  memcpy((void *)((long)pvVar2 + lVar4),pcVar8,sVar6);
  param_2[1] = param_2[1] + sVar6;
  return;
}


// ===== 00169164  FUN_00169164 =====

undefined1  [16] FUN_00169164(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 < 3) {
    if (iVar1 == 0) {
      auVar5._8_8_ = 9;
      auVar5._0_8_ = "allocator";
      return auVar5;
    }
    if (iVar1 == 1) {
      auVar4._8_8_ = 0xc;
      auVar4._0_8_ = "basic_string";
      return auVar4;
    }
    pcVar3 = "basic_string";
    uVar2 = 6;
  }
  else if (iVar1 == 3) {
    pcVar3 = "basic_istream";
    uVar2 = 7;
  }
  else if (iVar1 == 4) {
    pcVar3 = "basic_ostream";
    uVar2 = 7;
  }
  else {
    pcVar3 = "basic_iostream";
    uVar2 = 8;
  }
  if (*(int *)pcVar3 == 0x69736162 && (short)*(int *)((long)pcVar3 + 4) == 0x5f63) {
    auVar6._8_8_ = uVar2;
    auVar6._0_8_ = (char *)((long)pcVar3 + 6);
    return auVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00154b08("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h",0x6aa,
               &DAT_00111743);
}


// ===== 00169240  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00169248  FUN_00169248 =====

void FUN_00169248(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  char *pcVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  void *pvVar7;
  size_t __size;
  long lVar8;
  long lVar9;
  size_t sVar10;
  undefined1 auVar11 [16];
  
  lVar8 = param_2[1];
  pvVar7 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar8 + 5U) {
    sVar10 = param_2[2] * 2;
    uVar1 = lVar8 + 0x3e5;
    if (sVar10 < uVar1 || sVar10 - uVar1 == 0) {
      sVar10 = uVar1;
    }
    param_2[2] = sVar10;
    pvVar7 = realloc(pvVar7,sVar10);
    *param_2 = pvVar7;
    if (pvVar7 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar8 = param_2[1];
  }
  *(undefined1 *)((undefined4 *)((long)pvVar7 + lVar8) + 1) = 0x3a;
  *(undefined4 *)((long)pvVar7 + lVar8) = 0x3a647473;
  lVar8 = *param_1;
  param_2[1] = param_2[1] + 5;
  auVar11 = (**(code **)(lVar8 + 0x30))(param_1);
  sVar10 = auVar11._8_8_;
  if (sVar10 != 0) {
    lVar8 = param_2[1];
    pvVar7 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar8 + sVar10) {
      __size = param_2[2] * 2;
      uVar1 = lVar8 + sVar10 + 0x3e0;
      if (__size < uVar1 || __size - uVar1 == 0) {
        __size = uVar1;
      }
      param_2[2] = __size;
      pvVar7 = realloc(pvVar7,__size);
      *param_2 = pvVar7;
      if (pvVar7 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar8 = param_2[1];
    }
    memcpy((void *)((long)pvVar7 + lVar8),auVar11._0_8_,sVar10);
    param_2[1] = param_2[1] + sVar10;
  }
  if (1 < *(uint *)((long)param_1 + 0xc)) {
    lVar8 = param_2[1];
    pvVar7 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar8 + 0x1dU) {
      sVar10 = param_2[2] * 2;
      uVar1 = lVar8 + 0x3fd;
      if (sVar10 < uVar1 || sVar10 - uVar1 == 0) {
        sVar10 = uVar1;
      }
      param_2[2] = sVar10;
      pvVar7 = realloc(pvVar7,sVar10);
      *param_2 = pvVar7;
      if (pvVar7 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar8 = param_2[1];
    }
    uVar6 = s_<char,_std::char_traits<char>_001123f9._21_8_;
    uVar5 = s_<char,_std::char_traits<char>_001123f9._0_8_;
    pcVar2 = (char *)((long)pvVar7 + lVar8);
    uVar4 = CONCAT53(s_<char,_std::char_traits<char>_001123f9._16_5_,
                     s_<char,_std::char_traits<char>_001123f9._13_3_);
    *(ulong *)(pcVar2 + 8) =
         CONCAT35(s_<char,_std::char_traits<char>_001123f9._13_3_,
                  s_<char,_std::char_traits<char>_001123f9._8_5_);
    *(undefined8 *)pcVar2 = uVar5;
    *(undefined8 *)(pcVar2 + 0x15) = uVar6;
    *(undefined8 *)(pcVar2 + 0xd) = uVar4;
    lVar9 = param_2[1];
    iVar3 = *(int *)((long)param_1 + 0xc);
    lVar8 = lVar9 + 0x1d;
    param_2[1] = lVar8;
    if (iVar3 == 2) {
      pvVar7 = (void *)*param_2;
      if ((ulong)param_2[2] < lVar9 + 0x33U) {
        sVar10 = param_2[2] * 2;
        uVar1 = lVar9 + 0x413;
        if (sVar10 < uVar1 || sVar10 - uVar1 == 0) {
          sVar10 = uVar1;
        }
        param_2[2] = sVar10;
        pvVar7 = realloc(pvVar7,sVar10);
        *param_2 = pvVar7;
        if (pvVar7 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar8 = param_2[1];
      }
      uVar5 = s___std__allocator<char>_00112aa0._0_8_;
      pcVar2 = (char *)((long)pvVar7 + lVar8);
      uVar4 = CONCAT62(s___std__allocator<char>_00112aa0._16_6_,
                       s___std__allocator<char>_00112aa0._14_2_);
      *(ulong *)(pcVar2 + 8) =
           CONCAT26(s___std__allocator<char>_00112aa0._14_2_,s___std__allocator<char>_00112aa0._8_6_
                   );
      *(undefined8 *)pcVar2 = uVar5;
      *(undefined8 *)(pcVar2 + 0xe) = uVar4;
      lVar8 = param_2[1] + 0x16;
      param_2[1] = lVar8;
    }
    pvVar7 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar8 + 1U) {
      sVar10 = param_2[2] * 2;
      uVar1 = lVar8 + 0x3e1;
      if (sVar10 < uVar1 || sVar10 - uVar1 == 0) {
        sVar10 = uVar1;
      }
      param_2[2] = sVar10;
      pvVar7 = realloc(pvVar7,sVar10);
      *param_2 = pvVar7;
      if (pvVar7 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar8 = param_2[1];
    }
    *(undefined1 *)((long)pvVar7 + lVar8) = 0x3e;
    param_2[1] = param_2[1] + 1;
  }
  return;
}


// ===== 00169484  FUN_00169484 =====

undefined1  [16] FUN_00169484(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = *(undefined8 *)(&DAT_00116020 + (long)*(int *)(param_1 + 0xc) * 8);
  auVar1._0_8_ = &DAT_00116050 + *(int *)(&DAT_00116050 + (long)*(int *)(param_1 + 0xc) * 4);
  return auVar1;
}


// ===== 001694ac  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 001694b4  FUN_001694b4 =====

void FUN_001694b4(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  size_t __size;
  size_t sVar4;
  void *__src;
  
  (**(code **)(**(long **)(param_1 + 0x10) + 0x20))();
  lVar3 = param_2[1];
  pvVar2 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar3 + 5U) {
    sVar4 = param_2[2] * 2;
    uVar1 = lVar3 + 0x3e5;
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
  *(undefined1 *)((undefined4 *)((long)pvVar2 + lVar3) + 1) = 0x3a;
  *(undefined4 *)((long)pvVar2 + lVar3) = 0x6962615b;
  lVar3 = param_2[1] + 5;
  param_2[1] = lVar3;
  sVar4 = *(size_t *)(param_1 + 0x20);
  if (sVar4 != 0) {
    __src = *(void **)(param_1 + 0x18);
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
  *(undefined1 *)((long)pvVar2 + lVar3) = 0x5d;
  param_2[1] = param_2[1] + 1;
  return;
}


// ===== 00169608  FUN_00169608 =====

void FUN_00169608(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00169618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x30))();
  return;
}


// ===== 0016961c  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00169624  FUN_00169624 =====

void FUN_00169624(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  size_t sVar6;
  long lVar7;
  bool bVar8;
  
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
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x5b;
  lVar2 = param_2[1];
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar7 = 0;
    bVar8 = true;
    do {
      while( true ) {
        lVar3 = lVar2;
        if (!bVar8) {
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
        FUN_001615a8(*(undefined8 *)(*(long *)(param_1 + 0x10) + lVar7 * 8),param_2,0x12,0);
        lVar4 = param_2[1];
        if (lVar3 == lVar4) break;
        bVar8 = false;
        lVar7 = lVar7 + 1;
        lVar2 = lVar4;
        if (lVar7 == *(long *)(param_1 + 0x18)) goto LAB_00169760;
      }
      param_2[1] = lVar2;
      lVar7 = lVar7 + 1;
    } while (lVar7 != *(long *)(param_1 + 0x18));
  }
LAB_00169760:
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
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x5d;
  return;
}


// ===== 001697dc  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 001697e4  FUN_001697e4 =====

void FUN_001697e4(long param_1,undefined8 *param_2,char param_3,undefined4 param_4)

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
  uVar3 = *param_2;
  *(long *)((long)puVar1 + 8) = lVar2 + 0x20;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0017c630;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x31;
  *(bool *)((long)puVar1 + lVar2 + 0x28) = param_3 != '\0';
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined4 *)((long)puVar1 + lVar2 + 0x2c) = param_4;
  return;
}


// ===== 001698a4  FUN_001698a4 =====

void FUN_001698a4(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  size_t sVar3;
  size_t __size;
  long lVar4;
  undefined1 auVar5 [16];
  
  if (*(char *)(param_1 + 0x18) != '\0') {
    lVar4 = param_2[1];
    pvVar2 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar4 + 1U) {
      sVar3 = param_2[2] * 2;
      uVar1 = lVar4 + 0x3e1;
      if (sVar3 < uVar1 || sVar3 - uVar1 == 0) {
        sVar3 = uVar1;
      }
      param_2[2] = sVar3;
      pvVar2 = realloc(pvVar2,sVar3);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar4 = param_2[1];
    }
    *(undefined1 *)((long)pvVar2 + lVar4) = 0x7e;
    param_2[1] = param_2[1] + 1;
  }
  auVar5 = (**(code **)(**(long **)(param_1 + 0x10) + 0x30))();
  sVar3 = auVar5._8_8_;
  if (sVar3 != 0) {
    lVar4 = param_2[1];
    pvVar2 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar4 + sVar3) {
      __size = param_2[2] * 2;
      uVar1 = lVar4 + sVar3 + 0x3e0;
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
      lVar4 = param_2[1];
    }
    memcpy((void *)((long)pvVar2 + lVar4),auVar5._0_8_,sVar3);
    param_2[1] = param_2[1] + sVar3;
  }
  return;
}


// ===== 001699a8  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 001699b0  FUN_001699b0 =====

void FUN_001699b0(long param_1,undefined8 *param_2)

{
  void *__ptr;
  long lVar1;
  size_t __size;
  ulong uVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar3 + 0x20))(plVar3);
  if ((*(ushort *)((long)plVar3 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
  }
  lVar1 = param_2[1];
  __ptr = (void *)*param_2;
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
  *(undefined1 *)((long)__ptr + lVar1) = 0x40;
  plVar3 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar3 + 0x20))(plVar3,param_2);
  if ((*(ushort *)((long)plVar3 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00169aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
  return;
}


// ===== 00169ab0  FUN_00169ab0 =====

void FUN_00169ab0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00169ac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
  return;
}


// ===== 00169ac4  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00169acc  FUN_00169acc =====

void FUN_00169acc(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  void *__ptr;
  long lVar3;
  size_t __size;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar4 + 0x20))(plVar4);
  if ((*(ushort *)((long)plVar4 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  }
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
  uVar2 = s___friend_0011159b._0_8_;
  ((char *)((long)__ptr + lVar3))[8] = ' ';
  *(undefined8 *)((long)__ptr + lVar3) = uVar2;
  plVar4 = *(long **)(param_1 + 0x18);
  lVar3 = *plVar4;
  param_2[1] = param_2[1] + 9;
  (**(code **)(lVar3 + 0x20))(plVar4,param_2);
  if ((*(ushort *)((long)plVar4 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00169bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  return;
}


// ===== 00169be4  FUN_00169be4 =====

void FUN_00169be4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00169bf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
  return;
}


// ===== 00169bf8  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00169c00  FUN_00169c00 =====

void FUN_00169c00(long param_1,undefined8 *param_2)

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
  if ((ulong)param_2[2] < lVar2 + 2U) {
    __size = param_2[2] * 2;
    uVar1 = lVar2 + 0x3e2;
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
  *(undefined2 *)((long)__ptr + lVar2) = 0x3a3a;
  plVar3 = *(long **)(param_1 + 0x18);
  lVar2 = *plVar3;
  param_2[1] = param_2[1] + 2;
  (**(code **)(lVar2 + 0x20))(plVar3,param_2);
  if ((*(ushort *)((long)plVar3 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00169cfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
  return;
}


// ===== 00169d04  FUN_00169d04 =====

void FUN_00169d04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00169d14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
  return;
}


// ===== 00169d18  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00169d20  FUN_00169d20 =====

byte * FUN_00169d20(byte *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  
  if (param_1 != param_2) {
    if (*param_1 == 0x5f) {
      if (param_1 + 1 != param_2) {
        uVar2 = (uint)param_1[1];
        if (0xfffffff5 < uVar2 - 0x3a) {
          return param_1 + 2;
        }
        if (uVar2 == 0x5f) {
          for (pbVar3 = param_1 + 2; pbVar3 != param_2; pbVar3 = pbVar3 + 1) {
            if (*pbVar3 - 0x3a < 0xfffffff6) {
              if (*pbVar3 == 0x5f) {
                param_1 = pbVar3 + 1;
              }
              return param_1;
            }
          }
        }
      }
    }
    else if (0xfffffff5 < *param_1 - 0x3a) {
      pbVar3 = param_1 + 1;
      do {
        if (pbVar3 == param_2) {
          return param_2;
        }
        bVar1 = *pbVar3;
        pbVar3 = pbVar3 + 1;
      } while (0xfffffff5 < bVar1 - 0x3a);
    }
  }
  return param_1;
}


// ===== 00169dd0  FUN_00169dd0 =====

undefined8 * FUN_00169dd0(long param_1,char *param_2)

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
  *puVar4 = &PTR_FUN_0017aa40;
  *(undefined1 *)((long)puVar1 + lVar3 + 0x18) = 8;
  *(char **)((long)puVar1 + lVar3 + 0x20) = param_2;
  *(size_t *)((long)puVar1 + lVar3 + 0x28) = sVar2;
  *(ushort *)((long)puVar1 + lVar3 + 0x19) =
       *(ushort *)((long)puVar1 + lVar3 + 0x19) & 0xf000 | 0x540;
  return puVar4;
}


// ===== 00169e78  FUN_00169e78 =====

void FUN_00169e78(long param_1,undefined8 *param_2,undefined8 *param_3)

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
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0017c7f0;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x1a;
  uVar3 = *param_2;
  uVar4 = *param_3;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = uVar4;
  return;
}


// ===== 00169f20  FUN_00169f20 =====

void FUN_00169f20(long param_1,undefined8 *param_2)

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
  if ((ulong)param_2[2] < lVar2 + 2U) {
    __size = param_2[2] * 2;
    uVar1 = lVar2 + 0x3e2;
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
  *(undefined2 *)((long)__ptr + lVar2) = 0x3a3a;
  plVar3 = *(long **)(param_1 + 0x18);
  lVar2 = *plVar3;
  param_2[1] = param_2[1] + 2;
  (**(code **)(lVar2 + 0x20))(plVar3,param_2);
  if ((*(ushort *)((long)plVar3 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0016a01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
  return;
}


// ===== 0016a024  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0016a02c  FUN_0016a02c =====

ulong FUN_0016a02c(long param_1,long param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  
  if (*(int *)(param_2 + 0x1c) == -1) {
    lVar4 = *(long *)(param_1 + 0x18);
    uVar3 = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(int *)(param_2 + 0x1c) = (int)lVar4;
    if (lVar4 == 0) {
      return 0;
    }
  }
  else {
    uVar3 = (ulong)*(uint *)(param_2 + 0x18);
    if (*(ulong *)(param_1 + 0x18) <= uVar3) {
      return 0;
    }
  }
  puVar2 = *(undefined8 **)(*(long *)(param_1 + 0x10) + uVar3 * 8);
  bVar1 = *(byte *)((long)puVar2 + 9);
  if ((bVar1 & 0xc0) != 0x80) {
    return (ulong)(bVar1 < 0x40);
  }
                    /* WARNING: Could not recover jumptable at 0x0016a06c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)*puVar2)();
  return uVar3;
}


// ===== 0016a098  FUN_0016a098 =====

ulong FUN_0016a098(long param_1,long param_2)

{
  byte bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  if (*(int *)(param_2 + 0x1c) == -1) {
    lVar4 = *(long *)(param_1 + 0x18);
    uVar3 = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(int *)(param_2 + 0x1c) = (int)lVar4;
    if (lVar4 == 0) {
      return 0;
    }
  }
  else {
    uVar3 = (ulong)*(uint *)(param_2 + 0x18);
    if (*(ulong *)(param_1 + 0x18) <= uVar3) {
      return 0;
    }
  }
  plVar2 = *(long **)(*(long *)(param_1 + 0x10) + uVar3 * 8);
  bVar1 = *(byte *)((long)plVar2 + 10);
  if ((bVar1 & 3) != 2) {
    return (ulong)((bVar1 & 3) == 0);
  }
                    /* WARNING: Could not recover jumptable at 0x0016a0d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*plVar2 + 8))();
  return uVar3;
}


// ===== 0016a104  FUN_0016a104 =====

ulong FUN_0016a104(long param_1,long param_2)

{
  ushort uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  if (*(int *)(param_2 + 0x1c) == -1) {
    lVar4 = *(long *)(param_1 + 0x18);
    uVar3 = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(int *)(param_2 + 0x1c) = (int)lVar4;
    if (lVar4 == 0) {
      return 0;
    }
  }
  else {
    uVar3 = (ulong)*(uint *)(param_2 + 0x18);
    if (*(ulong *)(param_1 + 0x18) <= uVar3) {
      return 0;
    }
  }
  plVar2 = *(long **)(*(long *)(param_1 + 0x10) + uVar3 * 8);
  uVar1 = *(ushort *)((long)plVar2 + 9) >> 10 & 3;
  if (uVar1 != 2) {
    return (ulong)(uVar1 == 0);
  }
                    /* WARNING: Could not recover jumptable at 0x0016a144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*plVar2 + 0x10))();
  return uVar3;
}


// ===== 0016a170  FUN_0016a170 =====

void FUN_0016a170(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  if (*(int *)(param_2 + 0x1c) == -1) {
    lVar2 = *(long *)(param_1 + 0x18);
    uVar1 = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(int *)(param_2 + 0x1c) = (int)lVar2;
    if (lVar2 == 0) {
      return;
    }
  }
  else {
    uVar1 = (ulong)*(uint *)(param_2 + 0x18);
    if (*(ulong *)(param_1 + 0x18) <= uVar1) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0016a1a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + uVar1 * 8) + 0x18))();
  return;
}


// ===== 0016a1bc  FUN_0016a1bc =====

void FUN_0016a1bc(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  if (*(int *)(param_2 + 0x1c) == -1) {
    lVar2 = *(long *)(param_1 + 0x18);
    uVar1 = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(int *)(param_2 + 0x1c) = (int)lVar2;
    if (lVar2 == 0) {
      return;
    }
  }
  else {
    uVar1 = (ulong)*(uint *)(param_2 + 0x18);
    if (*(ulong *)(param_1 + 0x18) <= uVar1) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0016a1ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + uVar1 * 8) + 0x20))();
  return;
}


// ===== 0016a208  FUN_0016a208 =====

void FUN_0016a208(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  if (*(int *)(param_2 + 0x1c) == -1) {
    lVar2 = *(long *)(param_1 + 0x18);
    uVar1 = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(int *)(param_2 + 0x1c) = (int)lVar2;
    if (lVar2 == 0) {
      return;
    }
  }
  else {
    uVar1 = (ulong)*(uint *)(param_2 + 0x18);
    if (*(ulong *)(param_1 + 0x18) <= uVar1) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0016a238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + uVar1 * 8) + 0x28))();
  return;
}


// ===== 0016a254  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0016a25c  FUN_0016a25c =====

void FUN_0016a25c(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  size_t sVar7;
  long lVar8;
  bool bVar9;
  
  lVar4 = param_2[1];
  pvVar3 = (void *)*param_2;
  uVar2 = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = 0;
  if ((ulong)param_2[2] < lVar4 + 1U) {
    sVar7 = param_2[2] * 2;
    uVar1 = lVar4 + 0x3e1;
    if (sVar7 < uVar1 || sVar7 - uVar1 == 0) {
      sVar7 = uVar1;
    }
    param_2[2] = sVar7;
    pvVar3 = realloc(pvVar3,sVar7);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
  }
  *(undefined1 *)((long)pvVar3 + lVar4) = 0x3c;
  lVar8 = *(long *)(param_1 + 0x18);
  lVar4 = param_2[1] + 1;
  param_2[1] = lVar4;
  if (lVar8 != 0) {
    lVar8 = 0;
    bVar9 = true;
    do {
      while( true ) {
        lVar5 = lVar4;
        if (!bVar9) {
          pvVar3 = (void *)*param_2;
          if ((ulong)param_2[2] < lVar4 + 2U) {
            sVar7 = param_2[2] * 2;
            uVar1 = lVar4 + 0x3e2;
            if (sVar7 < uVar1 || sVar7 - uVar1 == 0) {
              sVar7 = uVar1;
            }
            param_2[2] = sVar7;
            pvVar3 = realloc(pvVar3,sVar7);
            *param_2 = pvVar3;
            if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0016a400 to 0016a40b has its CatchHandler @ 0016a40c */
              abort();
            }
            lVar5 = param_2[1];
          }
          *(undefined2 *)((long)pvVar3 + lVar5) = 0x202c;
          lVar5 = param_2[1] + 2;
          param_2[1] = lVar5;
        }
                    /* try { // try from 0016a360 to 0016a36f has its CatchHandler @ 0016a414 */
        FUN_001615a8(*(undefined8 *)(*(long *)(param_1 + 0x10) + lVar8 * 8),param_2,0x12,0);
        lVar6 = param_2[1];
        if (lVar5 == lVar6) break;
        bVar9 = false;
        lVar8 = lVar8 + 1;
        lVar4 = lVar6;
        if (lVar8 == *(long *)(param_1 + 0x18)) goto LAB_0016a394;
      }
      param_2[1] = lVar4;
      lVar8 = lVar8 + 1;
    } while (lVar8 != *(long *)(param_1 + 0x18));
  }
LAB_0016a394:
  pvVar3 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar4 + 1U) {
    sVar7 = param_2[2] * 2;
    uVar1 = lVar4 + 0x3e1;
    if (sVar7 < uVar1 || sVar7 - uVar1 == 0) {
      sVar7 = uVar1;
    }
    param_2[2] = sVar7;
    pvVar3 = realloc(pvVar3,sVar7);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
  }
  *(undefined1 *)((long)pvVar3 + lVar4) = 0x3e;
  param_2[1] = param_2[1] + 1;
  *(undefined4 *)(param_2 + 4) = uVar2;
  return;
}


// ===== 0016a41c  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0016a424  FUN_0016a424 =====

void FUN_0016a424(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar1 + 0x20))(plVar1);
  if ((*(ushort *)((long)plVar1 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
  }
  plVar1 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
  if ((*(ushort *)((long)plVar1 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0016a4d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
  return;
}


// ===== 0016a4d8  FUN_0016a4d8 =====

void FUN_0016a4d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0016a4e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x30))();
  return;
}


// ===== 0016a4ec  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0016a4f4  FUN_0016a4f4 =====

void FUN_0016a4f4(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *__ptr;
  size_t __size;
  long lVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar3 = 0;
    bVar5 = true;
    lVar4 = param_2[1];
    do {
      while( true ) {
        lVar2 = lVar4;
        if (!bVar5) {
          __ptr = (void *)*param_2;
          if ((ulong)param_2[2] < lVar4 + 2U) {
            __size = param_2[2] * 2;
            uVar1 = lVar4 + 0x3e2;
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
          *(undefined2 *)((long)__ptr + lVar2) = 0x202c;
          lVar2 = param_2[1] + 2;
          param_2[1] = lVar2;
        }
        FUN_001615a8(*(undefined8 *)(*(long *)(param_1 + 0x10) + lVar3 * 8),param_2,0x12,0);
        if (lVar2 == param_2[1]) break;
        bVar5 = false;
        lVar3 = lVar3 + 1;
        lVar4 = param_2[1];
        if (lVar3 == *(long *)(param_1 + 0x18)) {
          return;
        }
      }
      param_2[1] = lVar4;
      lVar3 = lVar3 + 1;
    } while (lVar3 != *(long *)(param_1 + 0x18));
  }
  return;
}


// ===== 0016a5fc  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0016a604  FUN_0016a604 =====

void FUN_0016a604(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar1 + 0x20))(plVar1);
  if ((*(ushort *)((long)plVar1 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0016a668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
  return;
}


// ===== 0016a66c  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0016a674  FUN_0016a674 =====

void FUN_0016a674(long param_1,undefined8 *param_2)

{
  char *pcVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  size_t sVar8;
  bool bVar9;
  
  lVar6 = param_2[1];
  pvVar2 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar6 + 0xcU) {
    sVar8 = param_2[2] * 2;
    uVar5 = lVar6 + 0x3ec;
    if (sVar8 < uVar5 || sVar8 - uVar5 == 0) {
      sVar8 = uVar5;
    }
    param_2[2] = sVar8;
    pvVar2 = realloc(pvVar2,sVar8);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar6 = param_2[1];
  }
  pcVar1 = (char *)((long)pvVar2 + lVar6);
  *(undefined8 *)pcVar1 = s__enable_if__0011147f._0_8_;
  pcVar1[8] = '_';
  pcVar1[9] = 'i';
  pcVar1[10] = 'f';
  pcVar1[0xb] = ':';
  lVar7 = *(long *)(param_1 + 0x18);
  lVar6 = param_2[1] + 0xc;
  param_2[1] = lVar6;
  if (lVar7 != 0) {
    lVar7 = 0;
    bVar9 = true;
    do {
      while( true ) {
        lVar3 = lVar6;
        if (!bVar9) {
          pvVar2 = (void *)*param_2;
          if ((ulong)param_2[2] < lVar6 + 2U) {
            sVar8 = param_2[2] * 2;
            uVar5 = lVar6 + 0x3e2;
            if (sVar8 < uVar5 || sVar8 - uVar5 == 0) {
              sVar8 = uVar5;
            }
            param_2[2] = sVar8;
            pvVar2 = realloc(pvVar2,sVar8);
            *param_2 = pvVar2;
            if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            lVar3 = param_2[1];
          }
          *(undefined2 *)((long)pvVar2 + lVar3) = 0x202c;
          lVar3 = param_2[1] + 2;
          param_2[1] = lVar3;
        }
        FUN_001615a8(*(undefined8 *)(*(long *)(param_1 + 0x10) + lVar7 * 8),param_2,0x12,0);
        lVar4 = param_2[1];
        if (lVar3 == lVar4) break;
        bVar9 = false;
        lVar7 = lVar7 + 1;
        lVar6 = lVar4;
        if (lVar7 == *(long *)(param_1 + 0x18)) goto LAB_0016a7c4;
      }
      param_2[1] = lVar6;
      lVar7 = lVar7 + 1;
    } while (lVar7 != *(long *)(param_1 + 0x18));
  }
LAB_0016a7c4:
  uVar5 = lVar6 + 1;
  pvVar2 = (void *)*param_2;
  if ((ulong)param_2[2] < uVar5) {
    sVar8 = param_2[2] * 2;
    uVar5 = lVar6 + 0x3e1;
    if (sVar8 < uVar5 || sVar8 - uVar5 == 0) {
      sVar8 = uVar5;
    }
    param_2[2] = sVar8;
    pvVar2 = realloc(pvVar2,sVar8);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar6 = param_2[1];
    uVar5 = lVar6 + 1;
  }
  param_2[1] = uVar5;
  *(undefined1 *)((long)pvVar2 + lVar6) = 0x5d;
  return;
}


// ===== 0016a834  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0016a83c  FUN_0016a83c =====

void FUN_0016a83c(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *__ptr;
  long lVar2;
  size_t __size;
  long *plVar3;
  
  lVar2 = param_2[1];
  __ptr = (void *)*param_2;
  if ((ulong)param_2[2] < lVar2 + 5U) {
    __size = param_2[2] * 2;
    uVar1 = lVar2 + 0x3e5;
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
  *(undefined1 *)((undefined4 *)((long)__ptr + lVar2) + 1) = 0x20;
  *(undefined4 *)((long)__ptr + lVar2) = 0x73696874;
  plVar3 = *(long **)(param_1 + 0x10);
  lVar2 = *plVar3;
  param_2[1] = param_2[1] + 5;
  (**(code **)(lVar2 + 0x20))(plVar3,param_2);
  if ((*(ushort *)((long)plVar3 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0016a90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
  return;
}


// ===== 0016a914  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0016a91c  FUN_0016a91c =====

undefined8 FUN_0016a91c(void)

{
  return 1;
}


// ===== 0016a928  FUN_0016a928 =====

undefined8 FUN_0016a928(void)

{
  return 1;
}


// ===== 0016a934  FUN_0016a934 =====

void FUN_0016a934(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  void *__ptr;
  long lVar4;
  size_t __size;
  
  plVar1 = *(long **)(param_1 + 0x10);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    if ((*(byte *)((long)puVar2 + 9) & 0xc0) == 0x80) {
      uVar3 = (**(code **)*puVar2)(puVar2,param_2);
      if ((uVar3 & 1) != 0) goto LAB_0016a9e4;
    }
    else if (*(byte *)((long)puVar2 + 9) < 0x40) goto LAB_0016a9e4;
    lVar4 = param_2[1];
    __ptr = (void *)*param_2;
    if ((ulong)param_2[2] < lVar4 + 1U) {
      __size = param_2[2] * 2;
      uVar3 = lVar4 + 0x3e1;
      if (__size < uVar3 || __size - uVar3 == 0) {
        __size = uVar3;
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
    *(undefined1 *)((long)__ptr + lVar4) = 0x20;
    param_2[1] = param_2[1] + 1;
  }
LAB_0016a9e4:
  plVar1 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
  if ((*(ushort *)((long)plVar1 + 9) & 0xc0) != 0x40) {
                    /* WARNING: Could not recover jumptable at 0x0016aa38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
    return;
  }
  return;
}


// ===== 0016aa40  FUN_0016aa40 =====

void FUN_0016aa40(long param_1,undefined8 *param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  void *pvVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  size_t sVar10;
  long lVar11;
  bool bVar12;
  
  lVar6 = param_2[1];
  pvVar3 = (void *)*param_2;
  uVar9 = lVar6 + 1;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  if ((ulong)param_2[2] < uVar9) {
    sVar10 = param_2[2] * 2;
    uVar9 = lVar6 + 0x3e1;
    if (sVar10 < uVar9 || sVar10 - uVar9 == 0) {
      sVar10 = uVar9;
    }
    param_2[2] = sVar10;
    pvVar3 = realloc(pvVar3,sVar10);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar6 = param_2[1];
    uVar9 = lVar6 + 1;
  }
  param_2[1] = uVar9;
  *(undefined1 *)((long)pvVar3 + lVar6) = 0x28;
  lVar6 = param_2[1];
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar11 = 0;
    bVar12 = true;
    do {
      while( true ) {
        lVar7 = lVar6;
        if (!bVar12) {
          pvVar3 = (void *)*param_2;
          if ((ulong)param_2[2] < lVar6 + 2U) {
            sVar10 = param_2[2] * 2;
            uVar9 = lVar6 + 0x3e2;
            if (sVar10 < uVar9 || sVar10 - uVar9 == 0) {
              sVar10 = uVar9;
            }
            param_2[2] = sVar10;
            pvVar3 = realloc(pvVar3,sVar10);
            *param_2 = pvVar3;
            if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            lVar7 = param_2[1];
          }
          *(undefined2 *)((long)pvVar3 + lVar7) = 0x202c;
          lVar7 = param_2[1] + 2;
          param_2[1] = lVar7;
        }
        FUN_001615a8(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar11 * 8),param_2,0x12,0);
        lVar8 = param_2[1];
        if (lVar7 == lVar8) break;
        bVar12 = false;
        lVar11 = lVar11 + 1;
        lVar6 = lVar8;
        if (lVar11 == *(long *)(param_1 + 0x28)) goto LAB_0016ab7c;
      }
      param_2[1] = lVar6;
      lVar11 = lVar11 + 1;
    } while (lVar11 != *(long *)(param_1 + 0x28));
  }
LAB_0016ab7c:
  uVar9 = lVar6 + 1;
  pvVar3 = (void *)*param_2;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
  if ((ulong)param_2[2] < uVar9) {
    sVar10 = param_2[2] * 2;
    uVar9 = lVar6 + 0x3e1;
    if (sVar10 < uVar9 || sVar10 - uVar9 == 0) {
      sVar10 = uVar9;
    }
    param_2[2] = sVar10;
    pvVar3 = realloc(pvVar3,sVar10);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar6 = param_2[1];
    uVar9 = lVar6 + 1;
  }
  param_2[1] = uVar9;
  *(undefined1 *)((long)pvVar3 + lVar6) = 0x29;
  plVar4 = *(long **)(param_1 + 0x10);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  }
  uVar5 = *(uint *)(param_1 + 0x40);
  if ((uVar5 & 1) != 0) {
    lVar6 = param_2[1];
    pvVar3 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar6 + 6U) {
      sVar10 = param_2[2] * 2;
      uVar9 = lVar6 + 0x3e6;
      if (sVar10 < uVar9 || sVar10 - uVar9 == 0) {
        sVar10 = uVar9;
      }
      param_2[2] = sVar10;
      pvVar3 = realloc(pvVar3,sVar10);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar6 = param_2[1];
    }
    *(undefined2 *)((undefined4 *)((long)pvVar3 + lVar6) + 1) = 0x7473;
    *(undefined4 *)((long)pvVar3 + lVar6) = 0x6e6f6320;
    uVar5 = *(uint *)(param_1 + 0x40);
    param_2[1] = param_2[1] + 6;
  }
  if ((uVar5 >> 1 & 1) != 0) {
    lVar6 = param_2[1];
    pvVar3 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar6 + 9U) {
      sVar10 = param_2[2] * 2;
      uVar9 = lVar6 + 0x3e9;
      if (sVar10 < uVar9 || sVar10 - uVar9 == 0) {
        sVar10 = uVar9;
      }
      param_2[2] = sVar10;
      pvVar3 = realloc(pvVar3,sVar10);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar6 = param_2[1];
    }
    uVar2 = s_volatile_00112d68._0_8_;
    ((char *)((long)pvVar3 + lVar6))[8] = 'e';
    *(undefined8 *)((long)pvVar3 + lVar6) = uVar2;
    uVar5 = *(uint *)(param_1 + 0x40);
    param_2[1] = param_2[1] + 9;
  }
  if ((uVar5 >> 2 & 1) != 0) {
    lVar6 = param_2[1];
    pvVar3 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar6 + 9U) {
      sVar10 = param_2[2] * 2;
      uVar9 = lVar6 + 0x3e9;
      if (sVar10 < uVar9 || sVar10 - uVar9 == 0) {
        sVar10 = uVar9;
      }
      param_2[2] = sVar10;
      pvVar3 = realloc(pvVar3,sVar10);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar6 = param_2[1];
    }
    uVar2 = s_restrict_00112e69._0_8_;
    ((char *)((long)pvVar3 + lVar6))[8] = 't';
    *(undefined8 *)((long)pvVar3 + lVar6) = uVar2;
    param_2[1] = param_2[1] + 9;
  }
  if (*(char *)(param_1 + 0x44) == '\x02') {
    lVar6 = param_2[1];
    pvVar3 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar6 + 3U) {
      sVar10 = param_2[2] * 2;
      uVar9 = lVar6 + 0x3e3;
      if (sVar10 < uVar9 || sVar10 - uVar9 == 0) {
        sVar10 = uVar9;
      }
      param_2[2] = sVar10;
      pvVar3 = realloc(pvVar3,sVar10);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar6 = param_2[1];
    }
    *(undefined1 *)((undefined2 *)((long)pvVar3 + lVar6) + 1) = 0x26;
    *(undefined2 *)((long)pvVar3 + lVar6) = 0x2620;
    lVar6 = 3;
  }
  else {
    if (*(char *)(param_1 + 0x44) != '\x01') goto LAB_0016add4;
    lVar6 = param_2[1];
    pvVar3 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar6 + 2U) {
      sVar10 = param_2[2] * 2;
      uVar9 = lVar6 + 0x3e2;
      if (sVar10 < uVar9 || sVar10 - uVar9 == 0) {
        sVar10 = uVar9;
      }
      param_2[2] = sVar10;
      pvVar3 = realloc(pvVar3,sVar10);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar6 = param_2[1];
    }
    *(undefined2 *)((long)pvVar3 + lVar6) = 0x2620;
    lVar6 = 2;
  }
  param_2[1] = param_2[1] + lVar6;
LAB_0016add4:
  plVar4 = *(long **)(param_1 + 0x30);
  if ((plVar4 != (long *)0x0) &&
     ((**(code **)(*plVar4 + 0x20))(plVar4,param_2), (*(ushort *)((long)plVar4 + 9) & 0xc0) != 0x40)
     ) {
    (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    lVar6 = param_2[1];
    pvVar3 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar6 + 10U) {
      sVar10 = param_2[2] * 2;
      uVar9 = lVar6 + 0x3ea;
      if (sVar10 < uVar9 || sVar10 - uVar9 == 0) {
        sVar10 = uVar9;
      }
      param_2[2] = sVar10;
      pvVar3 = realloc(pvVar3,sVar10);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar6 = param_2[1];
    }
    uVar2 = s_requires_00113013._0_8_;
    pcVar1 = (char *)((long)pvVar3 + lVar6);
    pcVar1[8] = 's';
    pcVar1[9] = ' ';
    *(undefined8 *)pcVar1 = uVar2;
    plVar4 = *(long **)(param_1 + 0x38);
    lVar6 = *plVar4;
    param_2[1] = param_2[1] + 10;
    (**(code **)(lVar6 + 0x20))(plVar4,param_2);
    if ((*(ushort *)((long)plVar4 + 9) & 0xc0) != 0x40) {
                    /* WARNING: Could not recover jumptable at 0x0016aee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
      return;
    }
  }
  return;
}


// ===== 0016af10  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0016af18  FUN_0016af18 =====

void FUN_0016af18(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  size_t __size;
  size_t sVar4;
  void *__src;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar5 + 0x20))(plVar5);
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
  *(undefined2 *)((long)pvVar2 + lVar3) = 0x2820;
  lVar3 = param_2[1] + 2;
  param_2[1] = lVar3;
  sVar4 = *(size_t *)(param_1 + 0x20);
  if (sVar4 != 0) {
    __src = *(void **)(param_1 + 0x18);
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
  *(undefined1 *)((long)pvVar2 + lVar3) = 0x29;
  param_2[1] = param_2[1] + 1;
  return;
}


// ===== 0016b084  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0016b08c  FUN_0016b08c =====

undefined8 * FUN_0016b08c(long *param_1)

{
  long *plVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  short *psVar10;
  short *psVar11;
  long lVar12;
  short *psVar13;
  undefined1 uVar14;
  long *plVar15;
  size_t sVar16;
  uint uVar17;
  undefined8 *puVar18;
  undefined1 auVar19 [16];
  
  psVar11 = (short *)*param_1;
  psVar10 = (short *)param_1[1];
  psVar13 = psVar10;
  if ((psVar11 == psVar10) || ((char)*psVar11 != 'r')) {
    uVar17 = 0;
    if (psVar11 != psVar10) goto LAB_0016b0f4;
joined_r0x0016b134:
    if ((ulong)((long)psVar10 - (long)psVar13) < 2) goto LAB_0016b148;
    if (*psVar13 == 0x6f44) {
      pvVar7 = (void *)param_1[0x266];
      *param_1 = (long)(psVar13 + 1);
      lVar4 = *(long *)((long)pvVar7 + 8);
      puVar8 = (undefined8 *)pvVar7;
      if (lVar4 - 0xfd0U < 0xfffffffffffff010) {
        puVar8 = (undefined8 *)malloc(0x1000);
        if (puVar8 == (undefined8 *)0x0) goto LAB_0016b678;
        lVar4 = 0;
        *puVar8 = pvVar7;
        puVar8[1] = 0;
        param_1[0x266] = (long)puVar8;
      }
      *(long *)((long)puVar8 + 8) = lVar4 + 0x20;
      puVar18 = (undefined8 *)((long)puVar8 + lVar4 + 0x10);
      *puVar18 = &PTR_FUN_0017aa40;
      *(undefined1 *)((long)puVar8 + lVar4 + 0x18) = 8;
      *(ushort *)((long)puVar8 + lVar4 + 0x19) =
           *(ushort *)((long)puVar8 + lVar4 + 0x19) & 0xf000 | 0x540;
      *(char **)((long)puVar8 + lVar4 + 0x20) = "noexcept";
      *(undefined8 *)((long)puVar8 + lVar4 + 0x28) = 8;
    }
    else if (*psVar13 == 0x4f44) {
      *param_1 = (long)(psVar13 + 1);
      lVar4 = FUN_0015cce8(param_1);
      if (lVar4 == 0) {
        return (undefined8 *)0x0;
      }
      pcVar2 = (char *)*param_1;
      if (pcVar2 == (char *)param_1[1]) {
        return (undefined8 *)0x0;
      }
      if (*pcVar2 != 'E') {
        return (undefined8 *)0x0;
      }
      pvVar7 = (void *)param_1[0x266];
      *param_1 = (long)(pcVar2 + 1);
      lVar12 = *(long *)((long)pvVar7 + 8);
      puVar8 = (undefined8 *)pvVar7;
      if (lVar12 - 0xfd0U < 0xfffffffffffff010) {
        puVar8 = (undefined8 *)malloc(0x1000);
        if (puVar8 == (undefined8 *)0x0) goto LAB_0016b678;
        lVar12 = 0;
        *puVar8 = pvVar7;
        puVar8[1] = 0;
        param_1[0x266] = (long)puVar8;
      }
      *(long *)((long)puVar8 + 8) = lVar12 + 0x20;
      puVar18 = (undefined8 *)((long)puVar8 + lVar12 + 0x10);
      *puVar18 = &PTR_FUN_0017cc50;
      *(long *)((long)puVar8 + lVar12 + 0x20) = lVar4;
      *(undefined1 *)((long)puVar8 + lVar12 + 0x18) = 0x11;
      *(ushort *)((long)puVar8 + lVar12 + 0x19) =
           *(ushort *)((long)puVar8 + lVar12 + 0x19) & 0xf000 | 0x540;
    }
    else {
      if (*psVar13 != 0x7744) goto LAB_0016b148;
      lVar4 = param_1[2];
      lVar12 = param_1[3];
      psVar13 = psVar13 + 1;
      plVar1 = param_1 + 5;
      *param_1 = (long)psVar13;
      while ((psVar13 == psVar10 || ((char)*psVar13 != 'E'))) {
        lVar3 = FUN_00157a9c(param_1);
        if (lVar3 == 0) {
          return (undefined8 *)0x0;
        }
        plVar15 = (long *)param_1[3];
        if (plVar15 == (long *)param_1[4]) {
          plVar6 = (long *)param_1[2];
          sVar16 = (long)plVar15 - (long)plVar6;
          if (plVar6 == plVar1) {
            pvVar7 = malloc(sVar16 * 2);
            if (pvVar7 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            if (plVar15 != plVar1) {
              memcpy(pvVar7,plVar1,sVar16);
            }
            param_1[2] = (long)pvVar7;
          }
          else {
            pvVar7 = realloc(plVar6,sVar16 * 2);
            param_1[2] = (long)pvVar7;
            if (pvVar7 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
          }
          plVar15 = (long *)((long)pvVar7 + sVar16);
          param_1[4] = (long)((long)pvVar7 + ((long)sVar16 >> 2) * 8);
        }
        param_1[3] = (long)(plVar15 + 1);
        *plVar15 = lVar3;
        psVar10 = (short *)param_1[1];
        psVar13 = (short *)*param_1;
      }
      *param_1 = (long)((long)psVar13 + 1);
      auVar19 = FUN_00159c04(param_1,lVar12 - lVar4 >> 3);
      pvVar7 = (void *)param_1[0x266];
      lVar4 = *(long *)((long)pvVar7 + 8);
      puVar8 = (undefined8 *)pvVar7;
      if (lVar4 - 0xfd0U < 0xfffffffffffff010) {
        puVar8 = (undefined8 *)malloc(0x1000);
        if (puVar8 == (undefined8 *)0x0) goto LAB_0016b678;
        lVar4 = 0;
        *puVar8 = pvVar7;
        puVar8[1] = 0;
        param_1[0x266] = (long)puVar8;
      }
      *(long *)((long)puVar8 + 8) = lVar4 + 0x20;
      puVar18 = (undefined8 *)((long)puVar8 + lVar4 + 0x10);
      *puVar18 = &PTR_FUN_0017ccc0;
      *(undefined1 (*) [16])((long)puVar8 + lVar4 + 0x20) = auVar19;
      *(undefined1 *)((long)puVar8 + lVar4 + 0x18) = 0x12;
      *(ushort *)((long)puVar8 + lVar4 + 0x19) =
           *(ushort *)((long)puVar8 + lVar4 + 0x19) & 0xf000 | 0x540;
    }
  }
  else {
    psVar11 = (short *)((long)psVar11 + 1);
    uVar17 = 4;
    *param_1 = (long)psVar11;
    if (psVar11 == psVar10) goto joined_r0x0016b134;
LAB_0016b0f4:
    if ((char)*psVar11 == 'V') {
      psVar11 = (short *)((long)psVar11 + 1);
      uVar17 = uVar17 | 2;
      *param_1 = (long)psVar11;
    }
    if (psVar11 != psVar10) {
      psVar13 = psVar11;
      if ((char)*psVar11 == 'K') {
        uVar17 = uVar17 | 1;
        *param_1 = (long)psVar11 + 1;
        psVar13 = (short *)((long)psVar11 + 1);
      }
      goto joined_r0x0016b134;
    }
LAB_0016b148:
    puVar18 = (undefined8 *)0x0;
  }
  psVar11 = (short *)*param_1;
  psVar13 = (short *)param_1[1];
  if ((1 < (ulong)((long)psVar13 - (long)psVar11)) && (*psVar11 == 0x7844)) {
    psVar11 = psVar11 + 1;
    *param_1 = (long)psVar11;
  }
  if ((psVar11 == psVar13) || ((char)*psVar11 != 'F')) {
    return (undefined8 *)0x0;
  }
  psVar10 = (short *)((long)psVar11 + 1);
  *param_1 = (long)psVar10;
  if ((psVar10 != psVar13) && (*(char *)psVar10 == 'Y')) {
    *param_1 = (long)(psVar11 + 1);
  }
  lVar4 = FUN_00157a9c(param_1);
  if (lVar4 == 0) {
    return (undefined8 *)0x0;
  }
  lVar12 = param_1[2];
  lVar3 = param_1[3];
  plVar1 = param_1 + 5;
  psVar11 = (short *)*param_1;
  psVar13 = (short *)param_1[1];
  if (psVar11 != psVar13) goto LAB_0016b370;
LAB_0016b3c4:
  if (1 < (ulong)((long)psVar13 - (long)psVar11)) {
    if (*psVar11 == 0x4552) {
      uVar14 = 1;
      lVar5 = 2;
LAB_0016b5d4:
      *param_1 = (long)((long)psVar11 + lVar5);
      auVar19 = FUN_00159c04(param_1,lVar3 - lVar12 >> 3);
      pvVar7 = (void *)param_1[0x266];
      lVar12 = *(long *)((long)pvVar7 + 8);
      puVar8 = (undefined8 *)pvVar7;
      if (lVar12 - 0xfb0U < 0xfffffffffffff010) {
        puVar8 = (undefined8 *)malloc(0x1000);
        if (puVar8 == (undefined8 *)0x0) {
LAB_0016b678:
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar12 = 0;
        *puVar8 = pvVar7;
        puVar8[1] = 0;
        param_1[0x266] = (long)puVar8;
      }
      *(long *)((long)puVar8 + 8) = lVar12 + 0x40;
      puVar9 = (undefined8 *)((long)puVar8 + lVar12 + 0x10);
      *puVar9 = &PTR_FUN_0017cd30;
      *(undefined1 *)((long)puVar8 + lVar12 + 0x18) = 0x10;
      *(long *)((long)puVar8 + lVar12 + 0x20) = lVar4;
      *(undefined1 (*) [16])((long)puVar8 + lVar12 + 0x28) = auVar19;
      *(uint *)((long)puVar8 + lVar12 + 0x38) = uVar17;
      *(ushort *)((long)puVar8 + lVar12 + 0x19) =
           *(ushort *)((long)puVar8 + lVar12 + 0x19) & 0xf000 | 0x100;
      *(undefined1 *)((long)puVar8 + lVar12 + 0x3c) = uVar14;
      *(undefined8 **)((long)puVar8 + lVar12 + 0x40) = puVar18;
      return puVar9;
    }
    if (*psVar11 == 0x454f) {
      lVar5 = 2;
      uVar14 = 2;
      goto LAB_0016b5d4;
    }
  }
  lVar5 = FUN_00157a9c(param_1);
  if (lVar5 == 0) {
    return (undefined8 *)0x0;
  }
  plVar15 = (long *)param_1[3];
  if (plVar15 == (long *)param_1[4]) {
    plVar6 = (long *)param_1[2];
    sVar16 = (long)plVar15 - (long)plVar6;
    if (plVar6 == plVar1) {
      pvVar7 = malloc(sVar16 * 2);
      if (pvVar7 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (plVar15 != plVar1) {
        memcpy(pvVar7,plVar1,sVar16);
      }
      param_1[2] = (long)pvVar7;
    }
    else {
      pvVar7 = realloc(plVar6,sVar16 * 2);
      param_1[2] = (long)pvVar7;
      if (pvVar7 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    plVar15 = (long *)((long)pvVar7 + sVar16);
    param_1[4] = (long)((long)pvVar7 + ((long)sVar16 >> 2) * 8);
  }
  param_1[3] = (long)(plVar15 + 1);
  *plVar15 = lVar5;
  psVar11 = (short *)*param_1;
  psVar13 = (short *)param_1[1];
  if (psVar11 != psVar13) {
LAB_0016b370:
    do {
      if ((char)*psVar11 == 'E') {
        uVar14 = 0;
        lVar5 = 1;
        goto LAB_0016b5d4;
      }
      if ((char)*psVar11 != 'v') break;
      *param_1 = (long)((long)psVar11 + 1);
      psVar11 = (short *)*param_1;
      psVar13 = (short *)param_1[1];
    } while (psVar11 != psVar13);
  }
  goto LAB_0016b3c4;
}


// ===== 0016b67c  FUN_0016b67c =====

undefined8 * FUN_0016b67c(long *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  byte *pbVar10;
  ulong uVar11;
  byte *pbVar12;
  uint uVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  ulong uVar17;
  byte *pbVar18;
  byte *pbVar19;
  void *pvVar20;
  
  pbVar10 = (byte *)*param_1;
  pbVar2 = (byte *)param_1[1];
  if (pbVar10 == pbVar2) {
LAB_0016b6fc:
    uVar13 = 0;
  }
  else {
    if (*pbVar10 == 0x55) {
      pbVar19 = pbVar10 + 1;
      *param_1 = (long)pbVar19;
      if (pbVar2 == pbVar19) {
        return (undefined8 *)0x0;
      }
      if (*pbVar19 - 0x3a < 0xfffffff6) {
        return (undefined8 *)0x0;
      }
      lVar4 = 0;
      uVar17 = 0;
      do {
        uVar16 = uVar17;
        lVar5 = lVar4;
        pbVar19 = pbVar10 + lVar5 + 2;
        *param_1 = (long)pbVar19;
        uVar11 = (ulong)pbVar10[lVar5 + 1];
        uVar17 = (uVar11 + uVar16 * 10) - 0x30;
        if (pbVar19 == pbVar2) {
          pbVar19 = pbVar2;
          if (uVar17 != 0) {
            return (undefined8 *)0x0;
          }
          goto LAB_0016b858;
        }
        lVar4 = lVar5 + 1;
      } while (*pbVar19 - 0x30 < 10);
      pbVar19 = pbVar10 + lVar5 + 2;
      if ((ulong)((long)pbVar2 - (long)pbVar19) < uVar17) {
        return (undefined8 *)0x0;
      }
LAB_0016b858:
      pbVar1 = pbVar19 + uVar17;
      *param_1 = (long)pbVar1;
      if (uVar17 == 0) {
        return (undefined8 *)0x0;
      }
      if ((uVar17 < 9) || (*(long *)pbVar19 != 0x746f7270636a626f || pbVar19[8] != 0x6f)) {
        if ((pbVar2 == pbVar1) || (*pbVar1 != 0x49)) {
          lVar4 = 0;
        }
        else {
          lVar4 = FUN_0015b3a8(param_1,0);
          if (lVar4 == 0) {
            return (undefined8 *)0x0;
          }
        }
        lVar5 = FUN_0016b67c(param_1);
        if (lVar5 == 0) {
          return (undefined8 *)0x0;
        }
        pvVar20 = (void *)param_1[0x266];
        lVar9 = *(long *)((long)pvVar20 + 8);
        puVar6 = (undefined8 *)pvVar20;
        if (lVar9 - 0xfc0U < 0xfffffffffffff010) {
          puVar6 = (undefined8 *)malloc(0x1000);
          if (puVar6 == (undefined8 *)0x0) goto LAB_0016bad4;
          lVar9 = 0;
          *puVar6 = pvVar20;
          puVar6[1] = 0;
          param_1[0x266] = (long)puVar6;
        }
        *(long *)((long)puVar6 + 8) = lVar9 + 0x30;
        puVar7 = (undefined8 *)((long)puVar6 + lVar9 + 0x10);
        *puVar7 = &PTR_FUN_0017ce10;
        uVar3 = *(ushort *)((long)puVar6 + lVar9 + 0x19);
        *(undefined1 *)((long)puVar6 + lVar9 + 0x18) = 2;
        *(long *)((long)puVar6 + lVar9 + 0x20) = lVar5;
        *(byte **)((long)puVar6 + lVar9 + 0x28) = pbVar19;
        *(ulong *)((long)puVar6 + lVar9 + 0x30) = uVar17;
        *(long *)((long)puVar6 + lVar9 + 0x38) = lVar4;
      }
      else {
        pbVar19 = pbVar10 + lVar5 + 0xb;
        pbVar14 = pbVar10 + uVar11 + uVar16 * 10 + lVar5 + -0x2e;
        *param_1 = (long)pbVar19;
        param_1[1] = (long)pbVar14;
        if ((pbVar19 == pbVar14) || (*pbVar19 - 0x3a < 0xfffffff6)) {
LAB_0016b9fc:
          *param_1 = (long)pbVar1;
          param_1[1] = (long)pbVar2;
          return (undefined8 *)0x0;
        }
        pbVar18 = (byte *)0x0;
        lVar4 = uVar16 * 10 + uVar11 + -0x3a;
        pbVar19 = pbVar10 + lVar5 + 0xc;
        do {
          pbVar12 = pbVar19;
          *param_1 = (long)pbVar12;
          pbVar18 = (byte *)((ulong)pbVar12[-1] + (long)pbVar18 * 10 + -0x30);
          pbVar15 = pbVar14;
          if (lVar4 == 0) break;
          lVar4 = lVar4 + -1;
          pbVar19 = pbVar12 + 1;
          pbVar15 = pbVar12;
        } while (*pbVar12 - 0x30 < 10);
        if (pbVar10 + lVar5 + (uVar16 * 10 - (long)pbVar15) + uVar11 + -0x2e < pbVar18)
        goto LAB_0016b9fc;
        *param_1 = (long)pbVar1;
        param_1[1] = (long)pbVar2;
        if (pbVar18 == (byte *)0x0) {
          return (undefined8 *)0x0;
        }
        lVar4 = FUN_0016b67c(param_1);
        if (lVar4 == 0) {
          return (undefined8 *)0x0;
        }
        pvVar20 = (void *)param_1[0x266];
        lVar5 = *(long *)((long)pvVar20 + 8);
        puVar6 = (undefined8 *)pvVar20;
        if (lVar5 - 0xfc0U < 0xfffffffffffff010) {
          puVar6 = (undefined8 *)malloc(0x1000);
          if (puVar6 == (undefined8 *)0x0) goto LAB_0016bad4;
          lVar5 = 0;
          *puVar6 = pvVar20;
          puVar6[1] = 0;
          param_1[0x266] = (long)puVar6;
        }
        *(long *)((long)puVar6 + 8) = lVar5 + 0x30;
        puVar7 = (undefined8 *)((long)puVar6 + lVar5 + 0x10);
        *puVar7 = &PTR_FUN_0017cda0;
        uVar3 = *(ushort *)((long)puVar6 + lVar5 + 0x19);
        *(undefined1 *)((long)puVar6 + lVar5 + 0x18) = 0xb;
        *(long *)((long)puVar6 + lVar5 + 0x20) = lVar4;
        *(byte **)((long)puVar6 + lVar5 + 0x28) = pbVar15;
        *(byte **)((long)puVar6 + lVar5 + 0x30) = pbVar18;
      }
      *(ushort *)((long)puVar7 + 9) = uVar3 & 0xf000 | 0x540;
      return puVar7;
    }
    if (*pbVar10 != 0x72) goto LAB_0016b6fc;
    pbVar10 = pbVar10 + 1;
    uVar13 = 4;
    *param_1 = (long)pbVar10;
  }
  if (pbVar10 != pbVar2) {
    if (*pbVar10 == 0x56) {
      pbVar10 = pbVar10 + 1;
      uVar13 = uVar13 | 2;
      *param_1 = (long)pbVar10;
    }
    if ((pbVar10 != pbVar2) && (*pbVar10 == 0x4b)) {
      uVar13 = uVar13 | 1;
      *param_1 = (long)(pbVar10 + 1);
    }
  }
  puVar6 = (undefined8 *)FUN_00157a9c(param_1);
  if ((puVar6 == (undefined8 *)0x0) || (uVar13 == 0)) {
    return puVar6;
  }
  pvVar20 = (void *)param_1[0x266];
  lVar4 = *(long *)((long)pvVar20 + 8);
  puVar7 = (undefined8 *)pvVar20;
  if (lVar4 - 0xfd0U < 0xfffffffffffff010) {
    puVar7 = (undefined8 *)malloc(0x1000);
    if (puVar7 == (undefined8 *)0x0) {
LAB_0016bad4:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar4 = 0;
    *puVar7 = pvVar20;
    puVar7[1] = 0;
    param_1[0x266] = (long)puVar7;
  }
  *(long *)((long)puVar7 + 8) = lVar4 + 0x20;
  uVar3 = *(ushort *)((long)puVar6 + 9);
  puVar8 = (undefined8 *)((long)puVar7 + lVar4 + 0x10);
  *puVar8 = &PTR_FUN_0017ce80;
  *(undefined8 **)((long)puVar7 + lVar4 + 0x20) = puVar6;
  *(undefined1 *)((long)puVar7 + lVar4 + 0x18) = 3;
  *(uint *)((long)puVar7 + lVar4 + 0x1c) = uVar13;
  *(ushort *)((long)puVar7 + lVar4 + 0x19) =
       *(ushort *)((long)puVar7 + lVar4 + 0x19) & 0xf000 | uVar3 & 0xfc0;
  return puVar8;
}


// ===== 0016bad8  FUN_0016bad8 =====

undefined8 * FUN_0016bad8(long param_1,char *param_2)

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
  *puVar4 = &PTR_FUN_0017aa40;
  *(undefined1 *)((long)puVar1 + lVar3 + 0x18) = 8;
  *(char **)((long)puVar1 + lVar3 + 0x20) = param_2;
  *(size_t *)((long)puVar1 + lVar3 + 0x28) = sVar2;
  *(ushort *)((long)puVar1 + lVar3 + 0x19) =
       *(ushort *)((long)puVar1 + lVar3 + 0x19) & 0xf000 | 0x540;
  return puVar4;
}


// ===== 0016bb80  FUN_0016bb80 =====

undefined8 * FUN_0016bb80(long param_1,char *param_2)

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
  *puVar4 = &PTR_FUN_0017aa40;
  *(undefined1 *)((long)puVar1 + lVar3 + 0x18) = 8;
  *(char **)((long)puVar1 + lVar3 + 0x20) = param_2;
  *(size_t *)((long)puVar1 + lVar3 + 0x28) = sVar2;
  *(ushort *)((long)puVar1 + lVar3 + 0x19) =
       *(ushort *)((long)puVar1 + lVar3 + 0x19) & 0xf000 | 0x540;
  return puVar4;
}


// ===== 0016bc28  FUN_0016bc28 =====

undefined8 * FUN_0016bc28(long param_1,char *param_2)

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
  *puVar4 = &PTR_FUN_0017aa40;
  *(undefined1 *)((long)puVar1 + lVar3 + 0x18) = 8;
  *(char **)((long)puVar1 + lVar3 + 0x20) = param_2;
  *(size_t *)((long)puVar1 + lVar3 + 0x28) = sVar2;
  *(ushort *)((long)puVar1 + lVar3 + 0x19) =
       *(ushort *)((long)puVar1 + lVar3 + 0x19) & 0xf000 | 0x540;
  return puVar4;
}


// ===== 0016bcd0  FUN_0016bcd0 =====

void FUN_0016bcd0(long param_1,undefined8 *param_2,undefined8 *param_3)

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
  uVar6 = param_2[1];
  uVar5 = *param_2;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0017cef0;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 7;
  uVar3 = *param_3;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = uVar6;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar5;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x30) = uVar3;
  return;
}


// ===== 0016bd7c  FUN_0016bd7c =====

void FUN_0016bd7c(long param_1,undefined8 *param_2)

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
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0017cf60;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x1f;
  uVar3 = *param_2;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  return;
}


// ===== 0016be1c  FUN_0016be1c =====

void FUN_0016be1c(long param_1,undefined8 *param_2,char param_3)

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
  uVar3 = *param_2;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0017cfd0;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x20;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(bool *)((long)puVar1 + lVar2 + 0x28) = param_3 != '\0';
  return;
}


// ===== 0016becc  FUN_0016becc =====

void FUN_0016becc(long param_1,undefined8 *param_2,undefined8 *param_3)

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
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0017d040;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 5;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x30) = uVar6;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = uVar5;
  return;
}


// ===== 0016bf78  FUN_0016bf78 =====

undefined8 * FUN_0016bf78(long *param_1)

{
  byte *pbVar1;
  char *pcVar2;
  short *psVar3;
  char *pcVar4;
  byte *pbVar5;
  byte bVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ushort uVar11;
  long lVar12;
  byte *pbVar13;
  long lVar14;
  byte *pbVar15;
  byte *pbVar16;
  void *pvVar17;
  undefined8 *local_40;
  undefined8 *local_38;
  
  psVar3 = (short *)*param_1;
  pbVar5 = (byte *)param_1[1];
  if ((ulong)((long)pbVar5 - (long)psVar3) < 2) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    if (*psVar3 != 0x7644) {
      return (undefined8 *)0x0;
    }
    pbVar1 = (byte *)(psVar3 + 1);
    *param_1 = (long)pbVar1;
    if ((pbVar5 != pbVar1) && (bVar6 = *pbVar1, 0x30 < bVar6)) {
      if (bVar6 < 0x3a) {
        pbVar15 = (byte *)(psVar3 + 1);
        pbVar13 = pbVar1;
        do {
          pbVar16 = pbVar15;
          if (*pbVar13 - 0x3a < 0xfffffff6) break;
          pbVar13 = pbVar13 + 1;
          pbVar15 = pbVar15 + 1;
          *param_1 = (long)pbVar13;
          pbVar16 = pbVar5;
        } while (pbVar13 != pbVar5);
        pvVar17 = (void *)param_1[0x266];
        lVar14 = *(long *)((long)pvVar17 + 8);
        puVar7 = (undefined8 *)pvVar17;
        if (0xfffffffffffff00f < lVar14 - 0xfd0U) {
LAB_0016c078:
          *(long *)((long)puVar7 + 8) = lVar14 + 0x20;
          local_38 = (undefined8 *)((long)puVar7 + lVar14 + 0x10);
          *local_38 = &PTR_FUN_0017aa40;
          *(undefined1 *)((long)puVar7 + lVar14 + 0x18) = 8;
          *(ushort *)((long)puVar7 + lVar14 + 0x19) =
               *(ushort *)((long)puVar7 + lVar14 + 0x19) & 0xf000 | 0x540;
          *(byte **)((long)puVar7 + lVar14 + 0x20) = pbVar1;
          *(long *)((long)puVar7 + lVar14 + 0x28) = (long)pbVar16 - (long)pbVar1;
          pcVar4 = (char *)*param_1;
          if (pcVar4 == (char *)param_1[1]) {
            return (undefined8 *)0x0;
          }
          if (*pcVar4 != '_') {
            return (undefined8 *)0x0;
          }
          pcVar2 = pcVar4 + 1;
          *param_1 = (long)pcVar2;
          if ((pcVar2 != (char *)param_1[1]) && (*pcVar2 == 'p')) {
            *param_1 = (long)(pcVar4 + 2);
            puVar7 = (undefined8 *)FUN_0016d958(param_1,&local_38);
            return puVar7;
          }
          local_40 = (undefined8 *)FUN_00157a9c();
          if (local_40 == (undefined8 *)0x0) {
            return (undefined8 *)0x0;
          }
          puVar7 = (undefined8 *)FUN_0016d9f8(param_1,&local_40,&local_38);
          return puVar7;
        }
        puVar7 = (undefined8 *)malloc(0x1000);
        if (puVar7 != (undefined8 *)0x0) {
          lVar14 = 0;
          *puVar7 = pvVar17;
          puVar7[1] = 0;
          param_1[0x266] = (long)puVar7;
          goto LAB_0016c078;
        }
        goto LAB_0016c284;
      }
      if (bVar6 == 0x5f) {
        *param_1 = (long)psVar3 + 3;
        lVar14 = FUN_00157a9c();
        if (lVar14 == 0) {
          return (undefined8 *)0x0;
        }
        pvVar17 = (void *)param_1[0x266];
        lVar12 = *(long *)((long)pvVar17 + 8);
        puVar7 = (undefined8 *)pvVar17;
        if (lVar12 - 0xfd0U < 0xfffffffffffff010) {
          puVar7 = (undefined8 *)malloc(0x1000);
          if (puVar7 == (undefined8 *)0x0) goto LAB_0016c284;
          lVar12 = 0;
          *puVar7 = pvVar17;
          puVar7[1] = 0;
          param_1[0x266] = (long)puVar7;
        }
        *(long *)((long)puVar7 + 8) = lVar12 + 0x20;
        puVar8 = (undefined8 *)((long)puVar7 + lVar12 + 0x10);
        *puVar8 = &PTR_FUN_0017d120;
        uVar11 = *(ushort *)((long)puVar7 + lVar12 + 0x19);
        *(long *)((long)puVar7 + lVar12 + 0x20) = lVar14;
        *(undefined8 *)((long)puVar7 + lVar12 + 0x28) = 0;
        goto LAB_0016c228;
      }
    }
    puVar9 = (undefined8 *)FUN_0015cce8();
    puVar7 = puVar9;
    if (puVar9 != (undefined8 *)0x0) {
      pcVar4 = (char *)*param_1;
      if (pcVar4 == (char *)param_1[1]) {
        return (undefined8 *)0x0;
      }
      if (*pcVar4 != '_') {
        return (undefined8 *)0x0;
      }
      *param_1 = (long)(pcVar4 + 1);
      puVar7 = (undefined8 *)FUN_00157a9c(param_1);
      if (puVar7 != (undefined8 *)0x0) {
        pvVar17 = (void *)param_1[0x266];
        lVar14 = *(long *)((long)pvVar17 + 8);
        puVar10 = (undefined8 *)pvVar17;
        if (lVar14 - 0xfd0U < 0xfffffffffffff010) {
          puVar10 = (undefined8 *)malloc(0x1000);
          if (puVar10 == (undefined8 *)0x0) {
LAB_0016c284:
                    /* WARNING: Subroutine does not return */
            std::terminate();
          }
          lVar14 = 0;
          *puVar10 = pvVar17;
          puVar10[1] = 0;
          param_1[0x266] = (long)puVar10;
        }
        *(long *)((long)puVar10 + 8) = lVar14 + 0x20;
        puVar8 = (undefined8 *)((long)puVar10 + lVar14 + 0x10);
        *puVar8 = &PTR_FUN_0017d120;
        uVar11 = *(ushort *)((long)puVar10 + lVar14 + 0x19);
        *(undefined8 **)((long)puVar10 + lVar14 + 0x20) = puVar7;
        *(undefined8 **)((long)puVar10 + lVar14 + 0x28) = puVar9;
LAB_0016c228:
        *(undefined1 *)(puVar8 + 1) = 0x1d;
        *(ushort *)((long)puVar8 + 9) = uVar11 & 0xf000 | 0x540;
        return puVar8;
      }
    }
  }
  return puVar7;
}


// ===== 0016c288  FUN_0016c288 =====

undefined8 * FUN_0016c288(long *param_1)

{
  short *psVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 uVar7;
  void *pvVar8;
  
  psVar1 = (short *)*param_1;
  if ((ulong)(param_1[1] - (long)psVar1) < 2) {
LAB_0016c2b0:
    puVar2 = (undefined8 *)FUN_00158fd4(param_1,0);
    return puVar2;
  }
  if (*psVar1 == 0x7354) {
    pcVar6 = "struct";
    uVar7 = 6;
    *param_1 = (long)(psVar1 + 1);
    lVar3 = FUN_00158fd4(param_1,0);
  }
  else {
    if (*psVar1 != 0x7554) {
      if (*psVar1 != 0x6554) goto LAB_0016c2b0;
      pcVar6 = "enum";
      uVar7 = 4;
      *param_1 = (long)(psVar1 + 1);
      lVar3 = FUN_00158fd4(param_1,0);
      if (lVar3 == 0) {
        return (undefined8 *)0x0;
      }
      goto LAB_0016c384;
    }
    pcVar6 = "union";
    uVar7 = 5;
    *param_1 = (long)(psVar1 + 1);
    lVar3 = FUN_00158fd4(param_1,0);
  }
  if (lVar3 == 0) {
    return (undefined8 *)0x0;
  }
LAB_0016c384:
  pvVar8 = (void *)param_1[0x266];
  lVar4 = *(long *)((long)pvVar8 + 8);
  puVar2 = (undefined8 *)pvVar8;
  if (lVar4 - 0xfc0U < 0xfffffffffffff010) {
    puVar2 = (undefined8 *)malloc(0x1000);
    if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar4 = 0;
    *puVar2 = pvVar8;
    puVar2[1] = 0;
    param_1[0x266] = (long)puVar2;
  }
  *(long *)((long)puVar2 + 8) = lVar4 + 0x30;
  puVar5 = (undefined8 *)((long)puVar2 + lVar4 + 0x10);
  *puVar5 = &PTR_FUN_0017d270;
  *(undefined1 *)((long)puVar2 + lVar4 + 0x18) = 6;
  *(long *)((long)puVar2 + lVar4 + 0x30) = lVar3;
  *(char **)((long)puVar2 + lVar4 + 0x20) = pcVar6;
  *(undefined8 *)((long)puVar2 + lVar4 + 0x28) = uVar7;
  *(ushort *)((long)puVar2 + lVar4 + 0x19) =
       *(ushort *)((long)puVar2 + lVar4 + 0x19) & 0xf000 | 0x540;
  return puVar5;
}


// ===== 0016c41c  FUN_0016c41c =====

void FUN_0016c41c(long param_1,long *param_2)

{
  ushort uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  pvVar5 = *(void **)(param_1 + 0x1330);
  lVar3 = *(long *)((long)pvVar5 + 8);
  puVar2 = (undefined8 *)pvVar5;
  if (lVar3 - 0xfd0U < 0xfffffffffffff010) {
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
  lVar4 = *param_2;
  *(long *)((long)puVar2 + 8) = lVar3 + 0x20;
  uVar1 = *(ushort *)(lVar4 + 9);
  *(undefined ***)((long)puVar2 + lVar3 + 0x10) = &PTR_FUN_0017d2e0;
  *(undefined1 *)((long)puVar2 + lVar3 + 0x18) = 0xc;
  *(ushort *)((long)puVar2 + lVar3 + 0x19) =
       uVar1 & 0xc0 | 0x500 | *(ushort *)((long)puVar2 + lVar3 + 0x19) & 0xf000;
  *(long *)((long)puVar2 + lVar3 + 0x20) = lVar4;
  return;
}


// ===== 0016c4c8  FUN_0016c4c8 =====

void FUN_0016c4c8(long param_1,long *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  
  pvVar6 = *(void **)(param_1 + 0x1330);
  lVar4 = *(long *)((long)pvVar6 + 8);
  puVar3 = (undefined8 *)pvVar6;
  if (lVar4 - 0xfd0U < 0xfffffffffffff010) {
    puVar3 = (undefined8 *)malloc(0x1000);
    if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar4 = 0;
    *puVar3 = pvVar6;
    puVar3[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar3;
  }
  lVar5 = *param_2;
  *(long *)((long)puVar3 + 8) = lVar4 + 0x20;
  uVar2 = *(ushort *)(lVar5 + 9);
  uVar1 = *param_3;
  *(undefined ***)((long)puVar3 + lVar4 + 0x10) = &PTR_FUN_0017d350;
  *(undefined1 *)((long)puVar3 + lVar4 + 0x18) = 0xd;
  *(long *)((long)puVar3 + lVar4 + 0x20) = lVar5;
  *(undefined4 *)((long)puVar3 + lVar4 + 0x28) = uVar1;
  *(ushort *)((long)puVar3 + lVar4 + 0x19) =
       uVar2 & 0xc0 | 0x500 | *(ushort *)((long)puVar3 + lVar4 + 0x19) & 0xf000;
  *(undefined1 *)((long)puVar3 + lVar4 + 0x2c) = 0;
  return;
}


// ===== 0016c584  FUN_0016c584 =====

void FUN_0016c584(long param_1,undefined8 *param_2)

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
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0017d040;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 5;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  *(char **)((long)puVar1 + lVar2 + 0x28) = " complex";
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x30) = 8;
  return;
}


// ===== 0016c634  FUN_0016c634 =====

void FUN_0016c634(long param_1,undefined8 *param_2)

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
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0017d040;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 5;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  *(char **)((long)puVar1 + lVar2 + 0x28) = " imaginary";
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x30) = 10;
  return;
}


// ===== 0016c6e4  FUN_0016c6e4 =====

void FUN_0016c6e4(long param_1,undefined8 *param_2)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  size_t sVar5;
  
  lVar3 = param_2[1];
  pvVar2 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar3 + 8U) {
    sVar5 = param_2[2] * 2;
    uVar4 = lVar3 + 1000;
    if (sVar5 < uVar4 || sVar5 - uVar4 == 0) {
      sVar5 = uVar4;
    }
    param_2[2] = sVar5;
    pvVar2 = realloc(pvVar2,sVar5);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = param_2[1];
  }
  *(undefined8 *)((long)pvVar2 + lVar3) = 0x7470656378656f6e;
  lVar1 = param_2[1];
  pvVar2 = (void *)*param_2;
  uVar4 = lVar1 + 9;
  lVar3 = lVar1 + 8;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  param_2[1] = lVar3;
  if ((ulong)param_2[2] < uVar4) {
    sVar5 = param_2[2] * 2;
    uVar4 = lVar1 + 0x3e9;
    if (sVar5 < uVar4 || sVar5 - uVar4 == 0) {
      sVar5 = uVar4;
    }
    param_2[2] = sVar5;
    pvVar2 = realloc(pvVar2,sVar5);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = param_2[1];
    uVar4 = lVar3 + 1;
  }
  param_2[1] = uVar4;
  *(undefined1 *)((long)pvVar2 + lVar3) = 0x28;
  FUN_001615a8(*(undefined8 *)(param_1 + 0x10),param_2,0x13,0);
  lVar3 = param_2[1];
  pvVar2 = (void *)*param_2;
  uVar4 = lVar3 + 1;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
  if ((ulong)param_2[2] < uVar4) {
    sVar5 = param_2[2] * 2;
    uVar4 = lVar3 + 0x3e1;
    if (sVar5 < uVar4 || sVar5 - uVar4 == 0) {
      sVar5 = uVar4;
    }
    param_2[2] = sVar5;
    pvVar2 = realloc(pvVar2,sVar5);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = param_2[1];
    uVar4 = lVar3 + 1;
  }
  param_2[1] = uVar4;
  *(undefined1 *)((long)pvVar2 + lVar3) = 0x29;
  return;
}


// ===== 0016c830  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0016c838  FUN_0016c838 =====

void FUN_0016c838(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  size_t sVar6;
  long lVar7;
  bool bVar8;
  
  lVar5 = param_2[1];
  pvVar1 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar5 + 5U) {
    sVar6 = param_2[2] * 2;
    uVar4 = lVar5 + 0x3e5;
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
    lVar5 = param_2[1];
  }
  *(undefined1 *)((undefined4 *)((long)pvVar1 + lVar5) + 1) = 0x77;
  *(undefined4 *)((long)pvVar1 + lVar5) = 0x6f726874;
  lVar7 = param_2[1];
  pvVar1 = (void *)*param_2;
  uVar4 = lVar7 + 6;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  lVar5 = lVar7 + 5;
  param_2[1] = lVar5;
  if ((ulong)param_2[2] < uVar4) {
    sVar6 = param_2[2] * 2;
    uVar4 = lVar7 + 0x3e6;
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
    lVar5 = param_2[1];
    uVar4 = lVar5 + 1;
  }
  param_2[1] = uVar4;
  *(undefined1 *)((long)pvVar1 + lVar5) = 0x28;
  lVar5 = param_2[1];
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar7 = 0;
    bVar8 = true;
    do {
      while( true ) {
        lVar2 = lVar5;
        if (!bVar8) {
          pvVar1 = (void *)*param_2;
          if ((ulong)param_2[2] < lVar5 + 2U) {
            sVar6 = param_2[2] * 2;
            uVar4 = lVar5 + 0x3e2;
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
          *(undefined2 *)((long)pvVar1 + lVar2) = 0x202c;
          lVar2 = param_2[1] + 2;
          param_2[1] = lVar2;
        }
        FUN_001615a8(*(undefined8 *)(*(long *)(param_1 + 0x10) + lVar7 * 8),param_2,0x12,0);
        lVar3 = param_2[1];
        if (lVar2 == lVar3) break;
        bVar8 = false;
        lVar7 = lVar7 + 1;
        lVar5 = lVar3;
        if (lVar7 == *(long *)(param_1 + 0x18)) goto LAB_0016c9d4;
      }
      param_2[1] = lVar5;
      lVar7 = lVar7 + 1;
    } while (lVar7 != *(long *)(param_1 + 0x18));
  }
LAB_0016c9d4:
  uVar4 = lVar5 + 1;
  pvVar1 = (void *)*param_2;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
  if ((ulong)param_2[2] < uVar4) {
    sVar6 = param_2[2] * 2;
    uVar4 = lVar5 + 0x3e1;
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
    lVar5 = param_2[1];
    uVar4 = lVar5 + 1;
  }
  param_2[1] = uVar4;
  *(undefined1 *)((long)pvVar1 + lVar5) = 0x29;
  return;
}


// ===== 0016ca54  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0016ca5c  FUN_0016ca5c =====

undefined8 FUN_0016ca5c(void)

{
  return 1;
}


// ===== 0016ca68  FUN_0016ca68 =====

undefined8 FUN_0016ca68(void)

{
  return 1;
}


// ===== 0016ca74  FUN_0016ca74 =====

void FUN_0016ca74(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *__ptr;
  long lVar2;
  size_t __size;
  
  (**(code **)(**(long **)(param_1 + 0x10) + 0x20))();
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


// ===== 0016caf8  FUN_0016caf8 =====

void FUN_0016caf8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  void *pvVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  size_t sVar8;
  long *plVar9;
  long lVar10;
  bool bVar11;
  
  lVar4 = param_2[1];
  pvVar2 = (void *)*param_2;
  uVar7 = lVar4 + 1;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  if ((ulong)param_2[2] < uVar7) {
    sVar8 = param_2[2] * 2;
    uVar7 = lVar4 + 0x3e1;
    if (sVar8 < uVar7 || sVar8 - uVar7 == 0) {
      sVar8 = uVar7;
    }
    param_2[2] = sVar8;
    pvVar2 = realloc(pvVar2,sVar8);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
    uVar7 = lVar4 + 1;
  }
  param_2[1] = uVar7;
  *(undefined1 *)((long)pvVar2 + lVar4) = 0x28;
  lVar4 = param_2[1];
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar10 = 0;
    bVar11 = true;
    do {
      while( true ) {
        lVar5 = lVar4;
        if (!bVar11) {
          pvVar2 = (void *)*param_2;
          if ((ulong)param_2[2] < lVar4 + 2U) {
            sVar8 = param_2[2] * 2;
            uVar7 = lVar4 + 0x3e2;
            if (sVar8 < uVar7 || sVar8 - uVar7 == 0) {
              sVar8 = uVar7;
            }
            param_2[2] = sVar8;
            pvVar2 = realloc(pvVar2,sVar8);
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
        FUN_001615a8(*(undefined8 *)(*(long *)(param_1 + 0x18) + lVar10 * 8),param_2,0x12,0);
        lVar6 = param_2[1];
        if (lVar5 == lVar6) break;
        bVar11 = false;
        lVar10 = lVar10 + 1;
        lVar4 = lVar6;
        if (lVar10 == *(long *)(param_1 + 0x20)) goto LAB_0016cc34;
      }
      param_2[1] = lVar4;
      lVar10 = lVar10 + 1;
    } while (lVar10 != *(long *)(param_1 + 0x20));
  }
LAB_0016cc34:
  uVar7 = lVar4 + 1;
  pvVar2 = (void *)*param_2;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
  if ((ulong)param_2[2] < uVar7) {
    sVar8 = param_2[2] * 2;
    uVar7 = lVar4 + 0x3e1;
    if (sVar8 < uVar7 || sVar8 - uVar7 == 0) {
      sVar8 = uVar7;
    }
    param_2[2] = sVar8;
    pvVar2 = realloc(pvVar2,sVar8);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
    uVar7 = lVar4 + 1;
  }
  param_2[1] = uVar7;
  *(undefined1 *)((long)pvVar2 + lVar4) = 0x29;
  (**(code **)(**(long **)(param_1 + 0x10) + 0x28))(*(long **)(param_1 + 0x10),param_2);
  uVar3 = *(uint *)(param_1 + 0x28);
  if ((uVar3 & 1) != 0) {
    lVar4 = param_2[1];
    pvVar2 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar4 + 6U) {
      sVar8 = param_2[2] * 2;
      uVar7 = lVar4 + 0x3e6;
      if (sVar8 < uVar7 || sVar8 - uVar7 == 0) {
        sVar8 = uVar7;
      }
      param_2[2] = sVar8;
      pvVar2 = realloc(pvVar2,sVar8);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar4 = param_2[1];
    }
    *(undefined2 *)((undefined4 *)((long)pvVar2 + lVar4) + 1) = 0x7473;
    *(undefined4 *)((long)pvVar2 + lVar4) = 0x6e6f6320;
    uVar3 = *(uint *)(param_1 + 0x28);
    param_2[1] = param_2[1] + 6;
  }
  if ((uVar3 >> 1 & 1) != 0) {
    lVar4 = param_2[1];
    pvVar2 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar4 + 9U) {
      sVar8 = param_2[2] * 2;
      uVar7 = lVar4 + 0x3e9;
      if (sVar8 < uVar7 || sVar8 - uVar7 == 0) {
        sVar8 = uVar7;
      }
      param_2[2] = sVar8;
      pvVar2 = realloc(pvVar2,sVar8);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar4 = param_2[1];
    }
    uVar1 = s_volatile_00112d68._0_8_;
    ((char *)((long)pvVar2 + lVar4))[8] = 'e';
    *(undefined8 *)((long)pvVar2 + lVar4) = uVar1;
    uVar3 = *(uint *)(param_1 + 0x28);
    param_2[1] = param_2[1] + 9;
  }
  if ((uVar3 >> 2 & 1) != 0) {
    lVar4 = param_2[1];
    pvVar2 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar4 + 9U) {
      sVar8 = param_2[2] * 2;
      uVar7 = lVar4 + 0x3e9;
      if (sVar8 < uVar7 || sVar8 - uVar7 == 0) {
        sVar8 = uVar7;
      }
      param_2[2] = sVar8;
      pvVar2 = realloc(pvVar2,sVar8);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar4 = param_2[1];
    }
    uVar1 = s_restrict_00112e69._0_8_;
    ((char *)((long)pvVar2 + lVar4))[8] = 't';
    *(undefined8 *)((long)pvVar2 + lVar4) = uVar1;
    param_2[1] = param_2[1] + 9;
  }
  if (*(char *)(param_1 + 0x2c) == '\x02') {
    lVar4 = param_2[1];
    pvVar2 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar4 + 3U) {
      sVar8 = param_2[2] * 2;
      uVar7 = lVar4 + 0x3e3;
      if (sVar8 < uVar7 || sVar8 - uVar7 == 0) {
        sVar8 = uVar7;
      }
      param_2[2] = sVar8;
      pvVar2 = realloc(pvVar2,sVar8);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar4 = param_2[1];
    }
    *(undefined1 *)((undefined2 *)((long)pvVar2 + lVar4) + 1) = 0x26;
    *(undefined2 *)((long)pvVar2 + lVar4) = 0x2620;
    lVar4 = 3;
  }
  else {
    if (*(char *)(param_1 + 0x2c) != '\x01') goto LAB_0016ce88;
    lVar4 = param_2[1];
    pvVar2 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar4 + 2U) {
      sVar8 = param_2[2] * 2;
      uVar7 = lVar4 + 0x3e2;
      if (sVar8 < uVar7 || sVar8 - uVar7 == 0) {
        sVar8 = uVar7;
      }
      param_2[2] = sVar8;
      pvVar2 = realloc(pvVar2,sVar8);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar4 = param_2[1];
    }
    *(undefined2 *)((long)pvVar2 + lVar4) = 0x2620;
    lVar4 = 2;
  }
  param_2[1] = param_2[1] + lVar4;
LAB_0016ce88:
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar4 = param_2[1];
    pvVar2 = (void *)*param_2;
    uVar7 = lVar4 + 1;
    if ((ulong)param_2[2] < uVar7) {
      sVar8 = param_2[2] * 2;
      uVar7 = lVar4 + 0x3e1;
      if (sVar8 < uVar7 || sVar8 - uVar7 == 0) {
        sVar8 = uVar7;
      }
      param_2[2] = sVar8;
      pvVar2 = realloc(pvVar2,sVar8);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar4 = param_2[1];
      uVar7 = lVar4 + 1;
    }
    param_2[1] = uVar7;
    *(undefined1 *)((long)pvVar2 + lVar4) = 0x20;
    plVar9 = *(long **)(param_1 + 0x30);
    (**(code **)(*plVar9 + 0x20))(plVar9,param_2);
    if ((*(ushort *)((long)plVar9 + 9) & 0xc0) != 0x40) {
                    /* WARNING: Could not recover jumptable at 0x0016cf44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar9 + 0x28))(plVar9,param_2);
      return;
    }
  }
  return;
}


// ===== 0016cf6c  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0016cf74  FUN_0016cf74 =====

void FUN_0016cf74(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  size_t __size;
  size_t sVar4;
  void *__src;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar5 + 0x20))(plVar5);
  if ((*(ushort *)((long)plVar5 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  }
  lVar3 = param_2[1];
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
  *(undefined1 *)((long)pvVar2 + lVar3) = 0x3c;
  lVar3 = param_2[1] + 1;
  param_2[1] = lVar3;
  sVar4 = *(size_t *)(param_1 + 0x20);
  if (sVar4 != 0) {
    __src = *(void **)(param_1 + 0x18);
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
  *(undefined1 *)((long)pvVar2 + lVar3) = 0x3e;
  param_2[1] = param_2[1] + 1;
  return;
}


// ===== 0016d0e0  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0016d0e8  FUN_0016d0e8 =====

void FUN_0016d0e8(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  size_t __size;
  size_t sVar4;
  long *plVar5;
  void *__src;
  
  plVar5 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar5 + 0x20))(plVar5);
  if ((*(ushort *)((long)plVar5 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  }
  lVar3 = param_2[1];
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
  *(undefined1 *)((long)pvVar2 + lVar3) = 0x20;
  lVar3 = param_2[1] + 1;
  param_2[1] = lVar3;
  sVar4 = *(size_t *)(param_1 + 0x20);
  if (sVar4 != 0) {
    __src = *(void **)(param_1 + 0x18);
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
    param_2[1] = param_2[1] + sVar4;
  }
  plVar5 = *(long **)(param_1 + 0x28);
  if ((plVar5 != (long *)0x0) &&
     ((**(code **)(*plVar5 + 0x20))(plVar5,param_2), (*(ushort *)((long)plVar5 + 9) & 0xc0) != 0x40)
     ) {
                    /* WARNING: Could not recover jumptable at 0x0016d248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
    return;
  }
  return;
}


// ===== 0016d254  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0016d25c  FUN_0016d25c =====

ulong FUN_0016d25c(long param_1)

{
  byte bVar1;
  ulong uVar2;
  
  bVar1 = *(byte *)((long)*(undefined8 **)(param_1 + 0x10) + 9);
  if ((bVar1 & 0xc0) == 0x80) {
                    /* WARNING: Could not recover jumptable at 0x0016d27c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)**(undefined8 **)(param_1 + 0x10))();
    return uVar2;
  }
  return (ulong)(bVar1 < 0x40);
}


// ===== 0016d28c  FUN_0016d28c =====

ulong FUN_0016d28c(long param_1)

{
  byte bVar1;
  ulong uVar2;
  
  bVar1 = *(byte *)((long)*(long **)(param_1 + 0x10) + 10);
  if ((bVar1 & 3) == 2) {
                    /* WARNING: Could not recover jumptable at 0x0016d2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 8))();
    return uVar2;
  }
  return (ulong)((bVar1 & 3) == 0);
}


// ===== 0016d2bc  FUN_0016d2bc =====

ulong FUN_0016d2bc(long param_1)

{
  ushort uVar1;
  ulong uVar2;
  
  uVar1 = *(ushort *)((long)*(long **)(param_1 + 0x10) + 9) >> 10 & 3;
  if (uVar1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x0016d2dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
    return uVar2;
  }
  return (ulong)(uVar1 == 0);
}


// ===== 0016d2ec  FUN_0016d2ec =====

void FUN_0016d2ec(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  void *pvVar3;
  uint uVar4;
  long lVar5;
  size_t sVar6;
  
  (**(code **)(**(long **)(param_1 + 0x10) + 0x20))();
  uVar4 = *(uint *)(param_1 + 0xc);
  if ((uVar4 & 1) != 0) {
    lVar5 = param_2[1];
    pvVar3 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar5 + 6U) {
      sVar6 = param_2[2] * 2;
      uVar1 = lVar5 + 0x3e6;
      if (sVar6 < uVar1 || sVar6 - uVar1 == 0) {
        sVar6 = uVar1;
      }
      param_2[2] = sVar6;
      pvVar3 = realloc(pvVar3,sVar6);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar5 = param_2[1];
    }
    *(undefined2 *)((undefined4 *)((long)pvVar3 + lVar5) + 1) = 0x7473;
    *(undefined4 *)((long)pvVar3 + lVar5) = 0x6e6f6320;
    uVar4 = *(uint *)(param_1 + 0xc);
    param_2[1] = param_2[1] + 6;
  }
  if ((uVar4 >> 1 & 1) != 0) {
    lVar5 = param_2[1];
    pvVar3 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar5 + 9U) {
      sVar6 = param_2[2] * 2;
      uVar1 = lVar5 + 0x3e9;
      if (sVar6 < uVar1 || sVar6 - uVar1 == 0) {
        sVar6 = uVar1;
      }
      param_2[2] = sVar6;
      pvVar3 = realloc(pvVar3,sVar6);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar5 = param_2[1];
    }
    uVar2 = s_volatile_00112d68._0_8_;
    ((char *)((long)pvVar3 + lVar5))[8] = 'e';
    *(undefined8 *)((long)pvVar3 + lVar5) = uVar2;
    uVar4 = *(uint *)(param_1 + 0xc);
    param_2[1] = param_2[1] + 9;
  }
  if ((uVar4 >> 2 & 1) != 0) {
    lVar5 = param_2[1];
    pvVar3 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar5 + 9U) {
      sVar6 = param_2[2] * 2;
      uVar1 = lVar5 + 0x3e9;
      if (sVar6 < uVar1 || sVar6 - uVar1 == 0) {
        sVar6 = uVar1;
      }
      param_2[2] = sVar6;
      pvVar3 = realloc(pvVar3,sVar6);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar5 = param_2[1];
    }
    uVar2 = s_restrict_00112e69._0_8_;
    ((char *)((long)pvVar3 + lVar5))[8] = 't';
    *(undefined8 *)((long)pvVar3 + lVar5) = uVar2;
    param_2[1] = param_2[1] + 9;
  }
  return;
}


// ===== 0016d464  FUN_0016d464 =====

void FUN_0016d464(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0016d474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x28))();
  return;
}


// ===== 0016d478  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0016d480  FUN_0016d480 =====

void FUN_0016d480(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  long lVar2;
  size_t __size;
  ulong uVar3;
  long *plVar4;
  size_t sVar5;
  void *__src;
  
  sVar5 = *(size_t *)(param_1 + 0x18);
  lVar2 = param_2[1];
  if (sVar5 != 0) {
    __src = *(void **)(param_1 + 0x10);
    pvVar1 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar2 + sVar5) {
      __size = param_2[2] * 2;
      uVar3 = lVar2 + sVar5 + 0x3e0;
      if (__size < uVar3 || __size - uVar3 == 0) {
        __size = uVar3;
      }
      param_2[2] = __size;
      pvVar1 = realloc(pvVar1,__size);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar2 = param_2[1];
    }
    memcpy((void *)((long)pvVar1 + lVar2),__src,sVar5);
    lVar2 = param_2[1] + sVar5;
    param_2[1] = lVar2;
  }
  uVar3 = lVar2 + 1;
  pvVar1 = (void *)*param_2;
  if ((ulong)param_2[2] < uVar3) {
    sVar5 = param_2[2] * 2;
    uVar3 = lVar2 + 0x3e1;
    if (sVar5 < uVar3 || sVar5 - uVar3 == 0) {
      sVar5 = uVar3;
    }
    param_2[2] = sVar5;
    pvVar1 = realloc(pvVar1,sVar5);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_2[1];
    uVar3 = lVar2 + 1;
  }
  param_2[1] = uVar3;
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x28;
  plVar4 = *(long **)(param_1 + 0x20);
  (**(code **)(*plVar4 + 0x20))(plVar4,param_2);
  if ((*(ushort *)((long)plVar4 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  }
  lVar2 = param_2[1];
  pvVar1 = (void *)*param_2;
  uVar3 = lVar2 + 1;
  if ((ulong)param_2[2] < uVar3) {
    sVar5 = param_2[2] * 2;
    uVar3 = lVar2 + 0x3e1;
    if (sVar5 < uVar3 || sVar5 - uVar3 == 0) {
      sVar5 = uVar3;
    }
    param_2[2] = sVar5;
    pvVar1 = realloc(pvVar1,sVar5);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_2[1];
    uVar3 = lVar2 + 1;
  }
  param_2[1] = uVar3;
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x29;
  return;
}


// ===== 0016d5ec  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0016d5f4  FUN_0016d5f4 =====

void FUN_0016d5f4(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *__ptr;
  long lVar2;
  size_t __size;
  long *plVar3;
  
  lVar2 = param_2[1];
  __ptr = (void *)*param_2;
  if ((ulong)param_2[2] < lVar2 + 6U) {
    __size = param_2[2] * 2;
    uVar1 = lVar2 + 0x3e6;
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
  *(undefined2 *)((undefined4 *)((long)__ptr + lVar2) + 1) = 0x7461;
  *(undefined4 *)((long)__ptr + lVar2) = 0x6f6c465f;
  plVar3 = *(long **)(param_1 + 0x10);
  lVar2 = *plVar3;
  param_2[1] = param_2[1] + 6;
  (**(code **)(lVar2 + 0x20))(plVar3,param_2);
  if ((*(ushort *)((long)plVar3 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0016d6c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
  return;
}


// ===== 0016d6cc  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0016d6d4  FUN_0016d6d4 =====

void FUN_0016d6d4(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  void *pvVar3;
  long lVar4;
  size_t sVar5;
  ulong uVar6;
  
  lVar4 = param_2[1];
  if (*(char *)(param_1 + 0x18) == '\0') {
    pvVar3 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar4 + 9U) {
      sVar5 = param_2[2] * 2;
      uVar6 = lVar4 + 0x3e9;
      if (sVar5 < uVar6 || sVar5 - uVar6 == 0) {
        sVar5 = uVar6;
      }
      param_2[2] = sVar5;
      pvVar3 = realloc(pvVar3,sVar5);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar4 = param_2[1];
    }
    uVar2 = s_unsigned_0011175c._0_8_;
    ((char *)((long)pvVar3 + lVar4))[8] = ' ';
    *(undefined8 *)((long)pvVar3 + lVar4) = uVar2;
    lVar1 = param_2[1];
    uVar6 = param_2[2];
    lVar4 = lVar1 + 9;
    param_2[1] = lVar4;
    pvVar3 = (void *)*param_2;
    if (lVar1 + 0x10U <= uVar6) goto LAB_0016d7a4;
  }
  else {
    uVar6 = param_2[2];
    pvVar3 = (void *)*param_2;
    if (lVar4 + 7U <= uVar6) goto LAB_0016d7a4;
  }
  sVar5 = uVar6 * 2;
  uVar6 = lVar4 + 999;
  if (sVar5 < uVar6 || sVar5 - uVar6 == 0) {
    sVar5 = uVar6;
  }
  param_2[2] = sVar5;
  pvVar3 = realloc(pvVar3,sVar5);
  *param_2 = pvVar3;
  if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar4 = param_2[1];
LAB_0016d7a4:
  *(undefined4 *)((long)pvVar3 + lVar4 + 3) = 0x746e4974;
  *(undefined4 *)((long)pvVar3 + lVar4) = 0x7469425f;
  lVar1 = param_2[1];
  pvVar3 = (void *)*param_2;
  uVar6 = lVar1 + 8;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  lVar4 = lVar1 + 7;
  param_2[1] = lVar4;
  if ((ulong)param_2[2] < uVar6) {
    sVar5 = param_2[2] * 2;
    uVar6 = lVar1 + 1000;
    if (sVar5 < uVar6 || sVar5 - uVar6 == 0) {
      sVar5 = uVar6;
    }
    param_2[2] = sVar5;
    pvVar3 = realloc(pvVar3,sVar5);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
    uVar6 = lVar4 + 1;
  }
  param_2[1] = uVar6;
  *(undefined1 *)((long)pvVar3 + lVar4) = 0x28;
  FUN_001615a8(*(undefined8 *)(param_1 + 0x10),param_2,0x13,0);
  lVar4 = param_2[1];
  pvVar3 = (void *)*param_2;
  uVar6 = lVar4 + 1;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
  if ((ulong)param_2[2] < uVar6) {
    sVar5 = param_2[2] * 2;
    uVar6 = lVar4 + 0x3e1;
    if (sVar5 < uVar6 || sVar5 - uVar6 == 0) {
      sVar5 = uVar6;
    }
    param_2[2] = sVar5;
    pvVar3 = realloc(pvVar3,sVar5);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
    uVar6 = lVar4 + 1;
  }
  param_2[1] = uVar6;
  *(undefined1 *)((long)pvVar3 + lVar4) = 0x29;
  return;
}


