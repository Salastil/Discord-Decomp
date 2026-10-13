// ===== 00837950  FUN_00837950 =====

undefined8 FUN_00837950(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 local_28;
  
  FUN_0081d464(*(undefined8 *)(param_1 + 0x18));
  lVar2 = FUN_00795280(param_2);
  if (lVar2 != 0) {
    lVar6 = 0;
    do {
      uVar3 = FUN_007952e0(param_2,lVar6);
      local_28 = 0;
      iVar1 = FUN_007a79e4(uVar3,&local_28);
      if (iVar1 < 1) {
        return 0;
      }
      lVar4 = FUN_007a27e4(local_28,iVar1,0);
      FUN_0078cb3c(local_28);
      if (lVar4 == 0) {
        return 0;
      }
      uVar5 = FUN_0081d550(*(undefined8 *)(param_1 + 0x18),lVar4);
      if ((uVar5 & 1) == 0) {
        return 0;
      }
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
  }
  FUN_00795370(*(undefined8 *)(param_1 + 0x28),FUN_007a3220,PTR_FUN_00d51ec0);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 1;
}


// ===== 00837a30  FUN_00837a30 =====

undefined8 FUN_00837a30(void)

{
  return 0;
}


// ===== 00837a3c  FUN_00837a3c =====

wchar_t FUN_00837a3c(long param_1)

{
  if (param_1 - 1U < 0x42) {
    return L"\tP00***33----****P00000,00+**....0................(...........***PP"[param_1];
  }
  return L'.';
}


// ===== 00837a64  FUN_00837a64 =====

void FUN_00837a64(undefined8 param_1,undefined8 param_2)

{
  FUN_007a71fc(param_2);
  return;
}


// ===== 00837a70  FUN_00837a70 =====

void FUN_00837a70(code *UNRECOVERED_JUMPTABLE,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00837a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}


// ===== 00837a80  FUN_00837a80 =====

void FUN_00837a80(long *param_1)

{
  code *pcVar1;
  
  if (param_1 != (long *)0x0) {
    if ((*param_1 != 0) && (pcVar1 = *(code **)(*param_1 + 8), pcVar1 != (code *)0x0)) {
      (*pcVar1)(param_1);
    }
    FUN_0078cb3c(param_1);
    return;
  }
  return;
}


// ===== 00837acc  FUN_00837acc =====

long * FUN_00837acc(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)FUN_0078c9d4(0x60);
  if (plVar1 != (long *)0x0) {
    plVar1[1] = 0;
    *plVar1 = 0;
    plVar1[3] = 0;
    plVar1[2] = 0;
    plVar1[5] = 0;
    plVar1[4] = 0;
    plVar1[7] = 0;
    plVar1[6] = 0;
    plVar1[9] = 0;
    plVar1[8] = 0;
    plVar1[0xb] = 0;
    plVar1[10] = 0;
    *(undefined4 *)(plVar1 + 0xb) = 1;
    FUN_00795d20(plVar1 + 1);
    lVar2 = FUN_007951a4(FUN_00837b64);
    *plVar1 = lVar2;
    lVar2 = FUN_00795214();
    plVar1[8] = lVar2;
    lVar2 = FUN_0083874c();
    plVar1[9] = lVar2;
    if (((*plVar1 == 0) || (plVar1[8] == 0)) || (lVar2 == 0)) {
      FUN_00837c00(plVar1);
      plVar1 = (long *)0x0;
    }
  }
  return plVar1;
}


// ===== 00837b64  FUN_00837b64 =====

ulong FUN_00837b64(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int *piVar3;
  ulong uVar4;
  int *piVar5;
  
  piVar3 = (int *)*param_2;
  piVar5 = (int *)*param_1;
  if (*piVar3 == 2) {
    uVar1 = FUN_007a5acc(*(undefined8 *)(piVar3 + 2));
    uVar4 = (ulong)(*piVar5 - 2U);
    if (*piVar5 - 2U == 0) {
      uVar2 = FUN_007a5acc(*(undefined8 *)(piVar5 + 2));
LAB_00837bd4:
      uVar4 = FUN_007a0a48(uVar2,uVar1);
      return uVar4;
    }
  }
  else if (*piVar3 == 1) {
    uVar1 = FUN_007a0bd0(*(undefined8 *)(piVar3 + 2));
    uVar4 = (ulong)(*piVar5 - 1U);
    if (*piVar5 - 1U == 0) {
      uVar2 = FUN_007a0bd0(*(undefined8 *)(piVar5 + 2));
      goto LAB_00837bd4;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}


// ===== 00837c00  FUN_00837c00 =====

void FUN_00837c00(undefined8 *param_1)

{
  int iVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    iVar1 = FUN_0079347c(param_1 + 0xb);
    if (iVar1 != 0) {
      if ((uint)param_1[0xb] < 2) {
        pthread_rwlock_destroy((pthread_rwlock_t *)(param_1 + 1));
        FUN_00795370(param_1[8],FUN_008386e8,FUN_00837a80);
        FUN_00795370(*param_1,FUN_008386f8,FUN_00837cc0);
        FUN_00838788(param_1[9]);
        FUN_0078cb3c(param_1);
        return;
      }
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  return;
}


// ===== 00837c9c  FUN_00837c9c =====

undefined8 FUN_00837c9c(long param_1)

{
  FUN_00793428(param_1 + 0x58);
  return 1;
}


// ===== 00837cc0  FUN_00837cc0 =====

void FUN_00837cc0(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (*param_1 == 2) {
      FUN_007a5350(*(undefined8 *)(param_1 + 2));
    }
    else if (*param_1 == 1) {
      FUN_007a71fc(*(undefined8 *)(param_1 + 2));
    }
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    FUN_0078cb3c(param_1);
    return;
  }
  return;
}


// ===== 00837d20  FUN_00837d20 =====

undefined8 FUN_00837d20(undefined8 *param_1,int param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined1 **ppuVar8;
  ulong uVar9;
  undefined1 *local_50;
  undefined1 *puStack_48;
  
  param_1 = (undefined8 *)*param_1;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00795d6c(param_1 + 1);
  uVar7 = *param_1;
  iVar1 = FUN_00838218(uVar7,param_2,param_3,0);
  if (iVar1 == -1) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_007952e0(uVar7,(long)iVar1);
  }
  FUN_00795db4(param_1 + 1);
  if ((param_2 == 2) || (ppuVar8 = (undefined1 **)piVar2, piVar2 == (int *)0x0)) {
    lVar3 = FUN_00795280(param_1[8]);
    if (lVar3 != 0) {
      uVar9 = 0;
      do {
        plVar5 = (long *)FUN_007952e0(param_1[8],uVar9);
        if (((*plVar5 != 0) && (pcVar6 = *(code **)(*plVar5 + 0x18), pcVar6 != (code *)0x0)) &&
           (iVar1 = (*pcVar6)(plVar5,param_2,param_3,&local_50), ppuVar8 = &local_50, 0 < iVar1))
        goto LAB_00837e10;
        uVar9 = uVar9 + 1;
        uVar4 = FUN_00795280(param_1[8]);
      } while (uVar9 < uVar4);
    }
    ppuVar8 = (undefined1 **)piVar2;
    if (piVar2 == (int *)0x0) {
      return 0;
    }
  }
LAB_00837e10:
  iVar1 = *(int *)ppuVar8;
  *param_4 = iVar1;
  *(undefined8 *)(param_4 + 2) = *(undefined8 *)((long)ppuVar8 + 8);
  if (iVar1 == 2) {
    FUN_007a5a88();
  }
  else if (iVar1 == 1) {
    FUN_007a7ae8();
  }
  return 1;
}


// ===== 00837e64  FUN_00837e64 =====

void FUN_00837e64(undefined8 param_1,undefined8 param_2)

{
  FUN_00837e70(param_1,param_2,0);
  return;
}


// ===== 00837e70  FUN_00837e70 =====

undefined4 FUN_00837e70(undefined8 *param_1,long param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined1 *local_48;
  
  if ((param_2 == 0) || (piVar2 = (int *)FUN_0078c9d4(0x10), piVar2 == (int *)0x0)) {
    return 0;
  }
  piVar2[0] = 0;
  piVar2[1] = 0;
  piVar2[2] = 0;
  piVar2[3] = 0;
  if (param_3 == 0) {
    *(long *)(piVar2 + 2) = param_2;
    *piVar2 = 1;
    FUN_007a7ae8(param_2);
  }
  else {
    *(long *)(piVar2 + 2) = param_2;
    *piVar2 = 2;
    FUN_007a5a88(param_2);
  }
  FUN_00795d6c(param_1 + 1);
  uVar9 = *param_1;
  FUN_00795a0c(uVar9,FUN_00838708);
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  iVar1 = FUN_0079568c(uVar9,&local_48,piVar2,FUN_00838708);
  if (iVar1 != 0) {
    puVar10 = local_48;
    if (*piVar2 - 1U < 2) {
      for (; puVar4 = (undefined1 *)FUN_00795280(uVar9), puVar10 < puVar4; puVar10 = puVar10 + 1) {
        piVar3 = (int *)FUN_007952e0(uVar9,puVar10);
        iVar1 = *piVar2;
        if (iVar1 == 2) {
          uVar5 = FUN_007a5acc(*(undefined8 *)(piVar2 + 2));
          if (*piVar3 != 2) break;
          uVar6 = FUN_007a5acc(*(undefined8 *)(piVar3 + 2));
LAB_00837fec:
          iVar1 = FUN_007a0a48(uVar6,uVar5);
          if (iVar1 != 0) break;
          iVar1 = *piVar2;
        }
        else if (iVar1 == 1) {
          uVar5 = FUN_007a0bd0(*(undefined8 *)(piVar2 + 2));
          if (*piVar3 == 1) {
            uVar6 = FUN_007a0bd0(*(undefined8 *)(piVar3 + 2));
            goto LAB_00837fec;
          }
          break;
        }
        if (iVar1 == 2) {
          iVar1 = FUN_007a0ad4(*(undefined8 *)(piVar3 + 2),*(undefined8 *)(piVar2 + 2));
        }
        else {
          if (iVar1 != 1) goto LAB_00837f4c;
          iVar1 = FUN_007a0c68(*(undefined8 *)(piVar3 + 2),*(undefined8 *)(piVar2 + 2));
        }
        if (iVar1 == 0) goto LAB_00837f4c;
      }
    }
    else {
      piVar3 = (int *)FUN_007952e0(uVar9,local_48);
LAB_00837f4c:
      if (piVar3 != (int *)0x0) {
        FUN_00795db4(param_1 + 1);
        uVar8 = 1;
        goto LAB_00838048;
      }
    }
  }
  lVar7 = FUN_00795868(*param_1,piVar2);
  FUN_00795db4(param_1 + 1);
  if (lVar7 != 0) {
    return 1;
  }
  uVar8 = 0;
LAB_00838048:
  if (*piVar2 == 2) {
    FUN_007a5350(*(undefined8 *)(piVar2 + 2));
  }
  else if (*piVar2 == 1) {
    FUN_007a71fc(*(undefined8 *)(piVar2 + 2));
  }
  piVar2[0] = 0;
  piVar2[1] = 0;
  piVar2[2] = 0;
  piVar2[3] = 0;
  FUN_0078cb3c(piVar2);
  return uVar8;
}


// ===== 0083809c  FUN_0083809c =====

long FUN_0083809c(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined1 *local_50;
  undefined1 *puStack_48;
  int local_24;
  
  lVar2 = FUN_00795214();
  if (lVar2 == 0) {
    return 0;
  }
  puVar6 = (undefined8 *)*param_1;
  local_24 = -0x55555556;
  FUN_00795d6c(puVar6 + 1);
  iVar1 = FUN_00838218(*puVar6,1,param_2,&local_24);
  if (iVar1 < 0) {
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00795db4(puVar6 + 1);
    iVar1 = FUN_00837d20(param_1,1,param_2,&local_50);
    if (iVar1 != 0) {
      if ((int)local_50 == 2) {
        FUN_007a5350(puStack_48);
      }
      else if ((int)local_50 == 1) {
        FUN_007a71fc(puStack_48);
      }
      FUN_00795d6c(puVar6 + 1);
      iVar1 = FUN_00838218(*puVar6,1,param_2,&local_24);
      if (-1 < iVar1) goto LAB_008380fc;
      FUN_00795db4(puVar6 + 1);
    }
    FUN_00795334(lVar2);
LAB_008381f4:
    lVar2 = 0;
  }
  else {
LAB_008380fc:
    iVar5 = local_24;
    if (0 < local_24) {
      do {
        lVar3 = FUN_007952e0(*puVar6,(long)iVar1);
        uVar4 = *(undefined8 *)(lVar3 + 8);
        lVar3 = FUN_00795868(lVar2,uVar4);
        if (lVar3 == 0) {
          FUN_00795db4(puVar6 + 1);
          FUN_00795370(lVar2,FUN_007a3220,PTR_FUN_00d51ec0);
          goto LAB_008381f4;
        }
        FUN_007a7ae8(uVar4);
        iVar5 = iVar5 + -1;
        iVar1 = iVar1 + 1;
      } while (iVar5 != 0);
    }
    FUN_00795db4(puVar6 + 1);
  }
  return lVar2;
}


// ===== 00838218  FUN_00838218 =====

ulong FUN_00838218(undefined8 param_1,int param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  FUN_00795a0c(param_1,FUN_00838708);
  uVar2 = FUN_00795280(param_1);
  if (uVar2 < 2) {
    uVar6 = 0;
    uVar5 = uVar2;
  }
  else {
    uVar6 = 0;
    uVar7 = uVar2;
    do {
      uVar2 = uVar6 + (uVar2 - 1 >> 1);
      piVar3 = (int *)FUN_007952e0(param_1,uVar2);
      iVar1 = *piVar3 - param_2;
      uVar5 = uVar2;
      if (*piVar3 == param_2) {
        if (param_2 == 1) {
          uVar4 = FUN_007a0bd0(*(undefined8 *)(piVar3 + 2));
LAB_008382d4:
          iVar1 = FUN_007a0a48(uVar4,param_3);
          if (iVar1 == 0) {
            uVar5 = uVar2 + 1;
          }
          goto joined_r0x008382c4;
        }
        if (param_2 == 2) {
          uVar4 = FUN_007a5acc(*(undefined8 *)(piVar3 + 2));
          goto LAB_008382d4;
        }
        uVar5 = uVar2 + 1;
      }
      else {
joined_r0x008382c4:
        if (iVar1 < 0) {
          uVar6 = uVar2 + 1;
          uVar5 = uVar7;
        }
      }
      uVar2 = uVar5 - uVar6;
      uVar7 = uVar5;
    } while (1 < uVar2);
  }
  if ((uVar6 == uVar5) || (piVar3 = (int *)FUN_007952e0(param_1,uVar6), *piVar3 != param_2)) {
LAB_00838350:
    uVar6 = 0xffffffff;
  }
  else {
    if (param_2 == 2) {
      uVar4 = FUN_007a5acc(*(undefined8 *)(piVar3 + 2));
LAB_00838344:
      iVar1 = FUN_007a0a48(uVar4,param_3);
      if (iVar1 != 0) goto LAB_00838350;
    }
    else if (param_2 == 1) {
      uVar4 = FUN_007a0bd0(*(undefined8 *)(piVar3 + 2));
      goto LAB_00838344;
    }
    if (param_4 != (int *)0x0) {
      *param_4 = 1;
      uVar2 = uVar6;
      while( true ) {
        uVar2 = uVar2 + 1;
        uVar5 = FUN_00795280(param_1);
        if ((uVar5 <= uVar2) || (piVar3 = (int *)FUN_007952e0(param_1,uVar2), *piVar3 != param_2))
        break;
        if (param_2 == 2) {
          uVar4 = FUN_007a5acc(*(undefined8 *)(piVar3 + 2));
LAB_00838390:
          iVar1 = FUN_007a0a48(uVar4,param_3);
          if (iVar1 != 0) break;
        }
        else if (param_2 == 1) {
          uVar4 = FUN_007a0bd0(*(undefined8 *)(piVar3 + 2));
          goto LAB_00838390;
        }
        *param_4 = *param_4 + 1;
      }
    }
  }
  return uVar6 & 0xffffffff;
}


// ===== 008383f0  FUN_008383f0 =====

long FUN_008383f0(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 *local_50;
  undefined1 *puStack_48;
  int local_24;
  
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  lVar2 = FUN_00795214();
  if (lVar2 != 0) {
    iVar1 = FUN_00837d20(param_1,2,param_2,&local_50);
    if (iVar1 != 0) {
      if ((int)local_50 == 2) {
        FUN_007a5350(puStack_48);
      }
      else if ((int)local_50 == 1) {
        FUN_007a71fc(puStack_48);
      }
      param_1 = (undefined8 *)*param_1;
      local_24 = -0x55555556;
      FUN_00795d6c(param_1 + 1);
      iVar1 = FUN_00838218(*param_1,2,param_2,&local_24);
      if (-1 < iVar1) {
        iVar5 = local_24;
        if (0 < local_24) {
          do {
            lVar3 = FUN_007952e0(*param_1,(long)iVar1);
            uVar4 = *(undefined8 *)(lVar3 + 8);
            FUN_007a5a88(uVar4);
            lVar3 = FUN_00795868(lVar2,uVar4);
            if (lVar3 == 0) {
              FUN_00795db4(param_1 + 1);
              FUN_007a5350(uVar4);
              FUN_00795370(lVar2,FUN_0083873c,PTR_FUN_00d528b0);
              goto LAB_008384f4;
            }
            iVar5 = iVar5 + -1;
            iVar1 = iVar1 + 1;
          } while (iVar5 != 0);
        }
        FUN_00795db4(param_1 + 1);
        return lVar2;
      }
      FUN_00795db4(param_1 + 1);
    }
    FUN_00795334(lVar2);
LAB_008384f4:
    lVar2 = 0;
  }
  return lVar2;
}


// ===== 00838544  FUN_00838544 =====

undefined4 FUN_00838544(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined1 *local_60;
  undefined1 *puStack_58;
  
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  uVar3 = FUN_007a0b50(param_3);
  iVar2 = FUN_00837d20(param_2,1,uVar3,&local_60);
  puVar1 = puStack_58;
  if (iVar2 == 0) {
    uVar7 = 0;
  }
  else {
    iVar2 = FUN_00839814(param_2,param_3,puStack_58);
    if (iVar2 == 0) {
      if ((int)local_60 == 2) {
        FUN_007a5350(puVar1);
      }
      else if ((int)local_60 == 1) {
        FUN_007a71fc(puVar1);
      }
      puVar9 = (undefined8 *)*param_2;
      FUN_00795d6c(puVar9 + 1);
      iVar2 = FUN_00838218(*puVar9,1,uVar3,0);
      if (iVar2 != -1) {
        uVar8 = (ulong)iVar2;
        uVar4 = FUN_00795280(*puVar9);
        if (uVar8 < uVar4) {
          do {
            piVar5 = (int *)FUN_007952e0(*puVar9,uVar8);
            if (*piVar5 != 1) break;
            uVar6 = FUN_007a0bd0(*(undefined8 *)(piVar5 + 2));
            iVar2 = FUN_007a0a48(uVar3,uVar6);
            if (iVar2 != 0) break;
            iVar2 = FUN_00839814(param_2,param_3,*(undefined8 *)(piVar5 + 2));
            if (iVar2 != 0) {
              *param_1 = *(undefined8 *)(piVar5 + 2);
              if (*piVar5 == 2) {
                FUN_007a5a88();
              }
              else if (*piVar5 == 1) {
                FUN_007a7ae8();
              }
              uVar7 = 1;
              goto LAB_0083868c;
            }
            uVar8 = uVar8 + 1;
            uVar4 = FUN_00795280(*puVar9);
          } while (uVar8 < uVar4);
        }
      }
      uVar7 = 0;
LAB_0083868c:
      FUN_00795db4(puVar9 + 1);
    }
    else {
      *param_1 = puVar1;
      uVar7 = 1;
    }
  }
  return uVar7;
}


// ===== 008386e8  FUN_008386e8 =====

void FUN_008386e8(code *UNRECOVERED_JUMPTABLE,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x008386f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}


// ===== 008386f8  FUN_008386f8 =====

void FUN_008386f8(code *UNRECOVERED_JUMPTABLE,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00838704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}


// ===== 00838708  FUN_00838708 =====

void FUN_00838708(code *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = param_3;
  uStack_18 = param_2;
  (*param_1)(&uStack_18,&local_20);
  return;
}


// ===== 0083873c  FUN_0083873c =====

void FUN_0083873c(code *UNRECOVERED_JUMPTABLE,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00838748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}


// ===== 0083874c  FUN_0083874c =====

void FUN_0083874c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0078c9d4(0x60);
  if (puVar1 != (undefined8 *)0x0) {
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
    *(undefined4 *)(puVar1 + 3) = 0xffffffff;
  }
  return;
}


// ===== 00838788  FUN_00838788 =====

void FUN_00838788(long param_1)

{
  if (param_1 != 0) {
    FUN_00795370(*(undefined8 *)(param_1 + 0x20),FUN_00796e84,PTR_FUN_00d526e0);
    FUN_00795370(*(undefined8 *)(param_1 + 0x28),FUN_007a0088,thunk_FUN_0078cb3c);
    FUN_0078cb3c(*(undefined8 *)(param_1 + 0x38));
    FUN_0078cb3c(*(undefined8 *)(param_1 + 0x48));
    FUN_0078cb3c(param_1);
    return;
  }
  return;
}


// ===== 008387fc  thunk_FUN_0078cb3c =====

void thunk_FUN_0078cb3c(void)

{
  FUN_0078cb3c();
  return;
}


// ===== 00838804  FUN_00838804 =====

void FUN_00838804(undefined8 param_1,undefined8 param_2)

{
  FUN_00838810(param_1,param_2,0);
  return;
}


// ===== 00838810  FUN_00838810 =====

long FUN_00838810(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  undefined *puVar1;
  void *pvVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  size_t __n;
  void *__s;
  
  if (param_2 == (undefined8 *)0x0) {
    return 1;
  }
  if ((*(int *)(param_2 + 2) != 0) && (param_3 != 0 || *(int *)(param_1 + 2) == 0)) {
    *(int *)(param_1 + 2) = *(int *)(param_2 + 2);
  }
  if ((*(int *)((long)param_2 + 0x14) != 0) && (param_3 != 0 || *(int *)((long)param_1 + 0x14) == 0)
     ) {
    *(int *)((long)param_1 + 0x14) = *(int *)((long)param_2 + 0x14);
  }
  if ((*(int *)(param_2 + 3) != -1) && (param_3 != 0 || *(int *)(param_1 + 3) == -1)) {
    *(int *)(param_1 + 3) = *(int *)(param_2 + 3);
  }
  if (((uint)param_1[1] >> 1 & 1) == 0) {
    *param_1 = *param_2;
  }
  param_1[1] = param_2[1] | param_1[1];
  puVar1 = PTR_FUN_00d526e0;
  lVar5 = param_2[4];
  if ((lVar5 != 0) && (param_3 != 0 || param_1[4] == 0)) {
    if (param_1 == (undefined8 *)0x0) {
      return 0;
    }
    FUN_00795370(param_1[4],FUN_00796e84,PTR_FUN_00d526e0);
    lVar5 = FUN_00795bf8(lVar5,FUN_00838ca4,PTR_FUN_00d52700,FUN_00796e84,puVar1);
    param_1[4] = lVar5;
    if (lVar5 == 0) {
      return 0;
    }
  }
  if ((param_2[5] != 0) && (param_3 != 0 || param_1[5] == 0)) {
    FUN_00795370(param_1[5],FUN_007a0088,thunk_FUN_0078cb3c);
    param_1[5] = 0;
    if (param_2[5] != 0) {
      lVar5 = FUN_00795bf8(param_2[5],FUN_00838c94,PTR_FUN_00d52708,FUN_007a0088,thunk_FUN_0078cb3c)
      ;
      param_1[5] = lVar5;
      if (lVar5 == 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    }
  }
  __s = (void *)param_2[7];
  if ((__s == (void *)0x0) || (param_3 == 0 && param_1[7] != 0)) {
LAB_008389f4:
    if ((param_2[9] != 0) && (param_3 != 0 || param_1[9] == 0)) {
      lVar4 = param_2[10];
      if ((lVar4 != 0x10) && (lVar4 != 4)) goto LAB_00838a64;
      lVar5 = FUN_0078cf30(param_2[9],lVar4);
      if (lVar5 == 0) goto LAB_00838a68;
      if (param_1[9] != 0) {
        FUN_0078cb3c();
      }
      param_1[9] = lVar5;
      if (param_1 + 10 != (long *)0x0) {
        param_1[10] = lVar4;
      }
    }
    uVar3 = *(undefined1 *)(param_2 + 0xb);
    lVar5 = 1;
  }
  else {
    __n = param_2[8];
    if ((__n == 0) || (pvVar2 = memchr(__s,0,__n), pvVar2 != (void *)0x0)) {
LAB_00838a64:
      lVar5 = 0;
    }
    else {
      lVar5 = FUN_0078cf30(__s,__n);
      if (lVar5 != 0) {
        if (param_1[7] != 0) {
          FUN_0078cb3c();
        }
        param_1[7] = lVar5;
        if (param_1 + 8 != (size_t *)0x0) {
          param_1[8] = __n;
        }
        goto LAB_008389f4;
      }
    }
LAB_00838a68:
    uVar3 = 1;
  }
  *(undefined1 *)(param_1 + 0xb) = uVar3;
  return lVar5;
}


// ===== 00838a90  FUN_00838a90 =====

void FUN_00838a90(undefined8 param_1,undefined8 param_2)

{
  FUN_00838810(param_1,param_2,1);
  return;
}


// ===== 00838a9c  FUN_00838a9c =====

void FUN_00838a9c(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}


// ===== 00838aa8  FUN_00838aa8 =====

bool FUN_00838aa8(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00838af0(param_1,0,param_2,param_3);
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x58) = 1;
  }
  return iVar1 != 0;
}


// ===== 00838af0  FUN_00838af0 =====

undefined8 FUN_00838af0(long param_1,int param_2,void *param_3,size_t param_4)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  
  if (param_3 == (void *)0x0) {
    return 0;
  }
  if (param_4 == 0) {
    return 0;
  }
  pvVar1 = memchr(param_3,0,param_4);
  if (pvVar1 == (void *)0x0) {
    if ((param_2 == 0) && (*(long *)(param_1 + 0x28) != 0)) {
      FUN_00795370(*(long *)(param_1 + 0x28),FUN_007a0088,thunk_FUN_0078cb3c);
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    lVar2 = FUN_0078d2d8(param_3,param_4);
    if (lVar2 == 0) {
      return 0;
    }
    lVar3 = *(long *)(param_1 + 0x28);
    if (lVar3 == 0) {
      lVar3 = FUN_00795214();
      *(long *)(param_1 + 0x28) = lVar3;
      if (lVar3 == 0) {
        FUN_0078cb3c(lVar2);
        return 0;
      }
    }
    lVar3 = FUN_00795868(lVar3,lVar2);
    if (lVar3 != 0) {
      return 1;
    }
    FUN_0078cb3c(lVar2);
    lVar2 = FUN_00795280(*(undefined8 *)(param_1 + 0x28));
    if (lVar2 == 0) {
      FUN_00795334(*(undefined8 *)(param_1 + 0x28));
      *(undefined8 *)(param_1 + 0x28) = 0;
      return 0;
    }
  }
  return 0;
}


// ===== 00838be0  FUN_00838be0 =====

wchar_t * FUN_00838be0(char *param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  
  iVar1 = strcmp(param_1,"default");
  if (iVar1 == 0) {
    pwVar2 = L"";
  }
  else {
    iVar1 = strcmp(param_1,"pkcs7");
    if ((iVar1 == 0) || (iVar1 = strcmp(param_1,"smime_sign"), iVar1 == 0)) {
      pwVar2 = L"";
    }
    else {
      iVar1 = strcmp(param_1,"ssl_client");
      if (iVar1 == 0) {
        pwVar2 = L"";
      }
      else {
        iVar1 = strcmp(param_1,"ssl_server");
        pwVar2 = L"";
        if (iVar1 != 0) {
          pwVar2 = (wchar_t *)0x0;
        }
      }
    }
  }
  return pwVar2;
}


// ===== 00838c94  FUN_00838c94 =====

void FUN_00838c94(code *UNRECOVERED_JUMPTABLE,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00838ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}


// ===== 00838ca4  FUN_00838ca4 =====

void FUN_00838ca4(code *UNRECOVERED_JUMPTABLE,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00838cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}


// ===== 00838cb4  FUN_00838cb4 =====

ulong FUN_00838cb4(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined *puVar4;
  
  if (param_2 < 3) {
    if (param_2 < 1) {
      if (param_2 == -1) {
        uVar3 = 1;
      }
      else {
        if (param_2 != 0) {
LAB_00838dc4:
          uVar3 = FUN_00838ddc(param_2,param_1);
          return uVar3;
        }
        uVar3 = FUN_00838ddc(0x38e,param_1);
        if ((int)uVar3 == 3) {
          iVar1 = FUN_0079644c(param_1);
          uVar3 = 3;
          if (iVar1 != 0) {
            uVar2 = 3;
            if ((*(byte *)(param_1 + 0x111) & 0x20) != 0) {
              uVar2 = 1;
            }
            uVar3 = (ulong)uVar2;
          }
        }
      }
      return uVar3;
    }
    if (param_2 == 1) {
      puVar4 = &UNK_00d39c00;
    }
    else {
      if (param_2 != 2) goto LAB_00838dc4;
      puVar4 = &UNK_00d39c18;
    }
  }
  else if (param_2 < 5) {
    if (param_2 == 3) {
      puVar4 = &UNK_00d39c30;
    }
    else {
      if (param_2 != 4) goto LAB_00838dc4;
      puVar4 = &UNK_00d39c48;
    }
  }
  else if (param_2 == 5) {
    puVar4 = &UNK_00d39c60;
  }
  else {
    if (param_2 != 8) goto LAB_00838dc4;
    puVar4 = &UNK_00d39c78;
  }
                    /* WARNING: Could not recover jumptable at 0x00838dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(puVar4 + 8))(puVar4,param_1);
  return uVar3;
}


// ===== 00838ddc  FUN_00838ddc =====

undefined8 FUN_00838ddc(int param_1,long param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  puVar5 = *(undefined8 **)(param_2 + 0x168);
  if (puVar5 != (undefined8 *)0x0) {
    lVar2 = FUN_00795280(puVar5[1]);
    if (lVar2 != 0) {
      uVar4 = 0;
      do {
        FUN_007952e0(puVar5[1],uVar4);
        iVar1 = FUN_0078d994();
        if (iVar1 == param_1) {
          return 2;
        }
        uVar4 = uVar4 + 1;
        uVar3 = FUN_00795280(puVar5[1]);
      } while (uVar4 < uVar3);
    }
    lVar2 = FUN_00795280(*puVar5);
    if (lVar2 != 0) {
      uVar4 = 0;
      do {
        FUN_007952e0(*puVar5,uVar4);
        iVar1 = FUN_0078d994();
        if (iVar1 == param_1) {
          return 1;
        }
        uVar4 = uVar4 + 1;
        uVar3 = FUN_00795280(*puVar5);
      } while (uVar4 < uVar3);
    }
  }
  return 3;
}


// ===== 00838e9c  FUN_00838e9c =====

undefined4 FUN_00838e9c(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0079644c(param_2);
  uVar2 = 3;
  if ((iVar1 != 0) && (uVar2 = 3, (*(byte *)(param_2 + 0x111) & 0x20) != 0)) {
    uVar2 = 1;
  }
  return uVar2;
}


// ===== 00838ee0  FUN_00838ee0 =====

ulong FUN_00838ee0(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_2 + 0x168);
  if ((plVar4 != (long *)0x0) && ((*plVar4 != 0 || (plVar4[1] != 0)))) {
    uVar3 = FUN_00838ddc(*(undefined4 *)(param_1 + 0x10),param_2);
    return uVar3;
  }
  iVar1 = FUN_0079644c(param_2);
  uVar3 = 3;
  if (iVar1 != 0) {
    uVar2 = 3;
    if ((*(byte *)(param_2 + 0x111) & 0x20) != 0) {
      uVar2 = 1;
    }
    uVar3 = (ulong)uVar2;
  }
  return uVar3;
}


// ===== 00838f54  FUN_00838f54 =====

undefined8 FUN_00838f54(long param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  undefined1 *local_68;
  
  if (*(long *)(param_1 + 8) == 0) {
    uVar15 = 0x7a;
    uVar16 = 0x93;
  }
  else if (*(long *)(param_1 + 0x40) == 0) {
    lVar18 = *(long *)(param_1 + 0x20);
    if ((*(byte *)(lVar18 + 9) & 0x30) == 0) {
      lVar8 = FUN_00795214();
      *(long *)(param_1 + 0x40) = lVar8;
      if ((lVar8 == 0) || (lVar8 = FUN_00795868(lVar8,*(undefined8 *)(param_1 + 8)), lVar8 == 0)) {
        lVar8 = 0;
LAB_00839064:
        lVar18 = 0;
LAB_00839068:
        uVar6 = 0x11;
      }
      else {
        FUN_007a7ae8(*(undefined8 *)(param_1 + 8));
        *(undefined4 *)(param_1 + 0x38) = 1;
        if (*(long *)(param_1 + 0x10) == 0) {
          lVar8 = 0;
        }
        else {
          lVar8 = FUN_00795978();
          if (lVar8 == 0) goto LAB_00839064;
        }
        uVar9 = FUN_00795280(*(undefined8 *)(param_1 + 0x40));
        lVar10 = FUN_007952e0(*(undefined8 *)(param_1 + 0x40),(long)((int)uVar9 + -1));
        iVar2 = *(int *)(lVar18 + 0x18);
        uVar7 = 0x7fffffff;
        if (!SCARRY4(iVar2,2)) {
          uVar7 = iVar2 + 2;
        }
        if ((int)uVar9 < (int)uVar7) {
          uVar19 = uVar9 & 0xffffffff;
          do {
            iVar2 = FUN_0079644c(lVar10);
            if (iVar2 == 0) {
              lVar18 = 0;
              uVar6 = 0x29;
              goto LAB_0083906c;
            }
            if ((*(byte *)(lVar10 + 0x111) >> 5 & 1) != 0) goto LAB_008391a0;
            if (*(char *)(*(long *)(param_1 + 0x20) + 9) < '\0') {
              if (*(long *)(param_1 + 0x28) == 0) {
                local_68 = &DAT_aaaaaaaaaaaaaaaa;
                iVar2 = FUN_00838544(&local_68,param_1,lVar10);
                if ((iVar2 != 0) && (puVar11 = local_68, local_68 != (undefined1 *)0x0))
                goto LAB_00839718;
              }
              else {
                puVar11 = (undefined1 *)FUN_00839754(param_1,*(long *)(param_1 + 0x28),lVar10);
                if (puVar11 != (undefined1 *)0x0) {
                  FUN_007a7ae8();
LAB_00839718:
                  FUN_007a71fc(puVar11);
                  goto LAB_008391a0;
                }
              }
            }
            if (lVar8 == 0) goto LAB_0083919c;
            lVar10 = FUN_00839754(param_1,lVar8,lVar10);
            if (lVar10 == 0) goto LAB_008391a0;
            lVar18 = FUN_00795868(*(undefined8 *)(param_1 + 0x40),lVar10);
            if (lVar18 == 0) goto LAB_00839064;
            FUN_007a7ae8(lVar10);
            FUN_00795554(lVar8,lVar10);
            uVar17 = (int)uVar19 + 1;
            uVar19 = (ulong)uVar17;
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
          } while (uVar7 != uVar17);
          uVar19 = (ulong)uVar7;
        }
        else {
LAB_0083919c:
          uVar19 = uVar9 & 0xffffffff;
        }
LAB_008391a0:
        iVar2 = FUN_00795280(*(undefined8 *)(param_1 + 0x40));
        iVar2 = iVar2 + -1;
        lVar10 = (long)iVar2;
        puVar11 = (undefined1 *)FUN_007952e0(*(undefined8 *)(param_1 + 0x40),lVar10);
        iVar3 = FUN_0079644c();
        lVar18 = 0;
        if (iVar3 != 0) {
          bVar1 = false;
          uVar9 = uVar19;
          do {
            uVar17 = (uint)uVar19;
            if (((byte)puVar11[0x111] >> 5 & 1) == 0) {
LAB_00839254:
              iVar3 = (int)uVar9;
            }
            else {
              lVar14 = FUN_00795280(*(undefined8 *)(param_1 + 0x40));
              iVar3 = (int)uVar9;
              if (lVar14 != 1) {
                lVar18 = FUN_00795944(*(undefined8 *)(param_1 + 0x40));
                uVar9 = (ulong)(iVar3 - 1);
                uVar17 = uVar17 - 1;
                *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
                puVar11 = (undefined1 *)
                          FUN_007952e0(*(undefined8 *)(param_1 + 0x40),(long)(iVar3 + -2));
                goto LAB_00839254;
              }
              if (*(long *)(param_1 + 0x28) == 0) {
                local_68 = &DAT_aaaaaaaaaaaaaaaa;
                iVar4 = FUN_00838544(&local_68,param_1,puVar11);
                if (iVar4 == 0) goto LAB_00839338;
                puVar12 = local_68;
                if (local_68 != (undefined1 *)0x0) goto LAB_00839308;
              }
              else {
                puVar12 = (undefined1 *)FUN_00839754(param_1,*(long *)(param_1 + 0x28),puVar11);
                if (puVar12 != (undefined1 *)0x0) {
                  FUN_007a7ae8();
LAB_00839308:
                  iVar4 = FUN_007a0c68(puVar11,puVar12);
                  if (iVar4 != 0) goto LAB_0083933c;
                  FUN_007a71fc(puVar11);
                  FUN_00795308(*(undefined8 *)(param_1 + 0x40),lVar10,puVar12);
                  *(undefined4 *)(param_1 + 0x38) = 0;
                  puVar11 = puVar12;
                  goto LAB_00839254;
                }
LAB_00839338:
                puVar12 = (undefined1 *)0x0;
              }
LAB_0083933c:
              FUN_007a71fc(puVar12);
              *(undefined1 **)(param_1 + 0x50) = puVar11;
              *(int *)(param_1 + 0x48) = iVar2;
              *(undefined4 *)(param_1 + 0x4c) = 0x12;
              uVar5 = (**(code **)(param_1 + 0x30))(0,param_1);
              if (1 < uVar5) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              if (uVar5 == 0) goto LAB_00839070;
              bVar1 = true;
            }
            if (iVar3 < (int)uVar7) {
              do {
                iVar2 = FUN_0079644c(puVar11);
                if (iVar2 == 0) goto LAB_008395f4;
                if (((byte)puVar11[0x111] >> 5 & 1) != 0) goto LAB_00839388;
                if (*(long *)(param_1 + 0x28) == 0) {
                  local_68 = &DAT_aaaaaaaaaaaaaaaa;
                  iVar2 = FUN_00838544(&local_68,param_1,puVar11);
                  if ((iVar2 == 0) || (puVar12 = local_68, local_68 == (undefined1 *)0x0))
                  goto LAB_00839388;
                }
                else {
                  puVar12 = (undefined1 *)FUN_00839754(param_1,*(long *)(param_1 + 0x28),puVar11);
                  if (puVar12 == (undefined1 *)0x0) goto LAB_00839388;
                  FUN_007a7ae8();
                }
                puVar11 = puVar12;
                lVar10 = FUN_00795868(*(undefined8 *)(param_1 + 0x40),puVar11);
                if (lVar10 == 0) {
                  FUN_007a71fc(puVar11);
                  goto LAB_00839068;
                }
                uVar5 = (int)uVar9 + 1;
                uVar9 = (ulong)uVar5;
              } while (uVar7 != uVar5);
              uVar9 = (ulong)uVar7;
            }
LAB_00839388:
            iVar2 = (int)uVar9;
            uVar19 = (ulong)*(int *)(param_1 + 0x38);
            uVar13 = FUN_00795280(*(undefined8 *)(param_1 + 0x40));
            if (uVar19 < uVar13) {
              do {
                uVar15 = FUN_007952e0(*(undefined8 *)(param_1 + 0x40),uVar19);
                iVar3 = FUN_00838cb4(uVar15,*(undefined4 *)(*(long *)(param_1 + 0x20) + 0x14),0);
                if (iVar3 == 2) {
                  *(undefined8 *)(param_1 + 0x50) = uVar15;
                  *(int *)(param_1 + 0x48) = (int)uVar19;
                  *(undefined4 *)(param_1 + 0x4c) = 0x1c;
                  uVar5 = (**(code **)(param_1 + 0x30))(0,param_1);
                  if (1 < uVar5) {
                    /* WARNING: Subroutine does not return */
                    abort();
                  }
                  if (uVar5 == 0) goto LAB_00839070;
                }
                else if (iVar3 == 1) goto LAB_008396ac;
                uVar19 = uVar19 + 1;
                uVar13 = FUN_00795280(*(undefined8 *)(param_1 + 0x40));
              } while (uVar19 < uVar13);
            }
            if ((*(byte *)(*(long *)(param_1 + 0x20) + 10) >> 3 & 1) != 0) {
              iVar3 = *(int *)(param_1 + 0x38);
              iVar4 = FUN_00795280(*(undefined8 *)(param_1 + 0x40));
              if (iVar4 <= iVar3) {
                uVar15 = FUN_007952e0(*(undefined8 *)(param_1 + 0x40),0);
                uVar16 = FUN_007a0bd0();
                lVar10 = FUN_0083809c(param_1,uVar16);
                if (lVar10 != 0) {
                  lVar14 = FUN_00795280();
                  uVar19 = 0;
                  if (lVar14 == 0) {
                    lVar14 = 0;
                  }
                  else {
                    do {
                      lVar14 = FUN_007952e0(lVar10,uVar19);
                      iVar3 = FUN_007a0c68(lVar14,uVar15);
                      if (iVar3 == 0) break;
                      uVar19 = uVar19 + 1;
                      uVar13 = FUN_00795280(lVar10);
                    } while (uVar19 < uVar13);
                  }
                  uVar13 = FUN_00795280(lVar10);
                  if (uVar19 < uVar13) {
                    FUN_007a7ae8(lVar14);
                    FUN_00795370(lVar10,FUN_007a3220,PTR_FUN_00d51ec0);
                    if (lVar14 != 0) {
                      FUN_00795308(*(undefined8 *)(param_1 + 0x40),0,lVar14);
                      FUN_007a71fc(uVar15);
                      *(undefined4 *)(param_1 + 0x38) = 0;
                      goto LAB_008396ac;
                    }
                  }
                  else {
                    FUN_00795370(lVar10,FUN_007a3220,PTR_FUN_00d51ec0);
                  }
                }
                goto LAB_008394f0;
              }
LAB_008396ac:
              iVar2 = FUN_00839888(param_1);
              if ((((iVar2 != 0) && (iVar2 = FUN_00839a4c(param_1), iVar2 != 0)) &&
                  (iVar2 = FUN_00839bf8(param_1), iVar2 != 0)) &&
                 (((iVar2 = FUN_00839ff4(param_1), iVar2 != 0 &&
                   (iVar2 = FUN_0083a2f8(param_1), iVar2 != 0)) &&
                  ((bVar1 || (iVar2 = FUN_0083a4dc(param_1), iVar2 != 0)))))) {
                FUN_00795334(lVar8);
                FUN_007a71fc(lVar18);
                return 1;
              }
              goto LAB_00839070;
            }
LAB_008394f0:
            if (((*(ushort *)(*(long *)(param_1 + 0x20) + 9) & 0x1080) != 0) || ((int)uVar17 < 2)) {
LAB_008395fc:
              if (!bVar1) {
                if ((lVar18 == 0) || (iVar3 = FUN_00839814(param_1,puVar11,lVar18), iVar3 == 0)) {
                  *(undefined1 **)(param_1 + 0x50) = puVar11;
                  iVar3 = iVar2 + -1;
                  uVar6 = 2;
                  if (iVar2 <= *(int *)(param_1 + 0x38)) {
                    uVar6 = 0x14;
                  }
                  *(undefined4 *)(param_1 + 0x4c) = uVar6;
                }
                else {
                  lVar10 = FUN_00795868(*(undefined8 *)(param_1 + 0x40),lVar18);
                  if (lVar10 == 0) goto LAB_00839068;
                  *(long *)(param_1 + 0x50) = lVar18;
                  lVar18 = 0;
                  *(int *)(param_1 + 0x38) = iVar2 + 1;
                  *(undefined4 *)(param_1 + 0x4c) = 0x13;
                  iVar3 = iVar2;
                }
                *(int *)(param_1 + 0x48) = iVar3;
                uVar7 = (**(code **)(param_1 + 0x30))(0,param_1);
                if (1 < uVar7) {
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                if (uVar7 == 0) goto LAB_00839070;
              }
              bVar1 = true;
              goto LAB_008396ac;
            }
            uVar19 = (ulong)uVar17;
            lVar10 = (ulong)(uVar17 - 1) + 1;
LAB_0083953c:
            uVar15 = FUN_007952e0(*(undefined8 *)(param_1 + 0x40),uVar19 - 2);
            if (*(long *)(param_1 + 0x28) == 0) {
              local_68 = &DAT_aaaaaaaaaaaaaaaa;
              iVar3 = FUN_00838544(&local_68,param_1);
              if ((iVar3 != 0) && (puVar12 = local_68, local_68 != (undefined1 *)0x0))
              goto LAB_0083957c;
LAB_0083952c:
              lVar10 = lVar10 + -1;
              uVar19 = uVar19 - 1;
              if (lVar10 < 2) goto LAB_008395fc;
              goto LAB_0083953c;
            }
            puVar12 = (undefined1 *)FUN_00839754(param_1,*(long *)(param_1 + 0x28),uVar15);
            if (puVar12 == (undefined1 *)0x0) goto LAB_0083952c;
            FUN_007a7ae8();
LAB_0083957c:
            uVar19 = uVar19 - 1;
            FUN_007a71fc(puVar12);
            if ((int)uVar19 < iVar2) {
              do {
                FUN_00795944(*(undefined8 *)(param_1 + 0x40));
                FUN_007a71fc();
                uVar17 = (int)uVar9 - 1;
                uVar9 = (ulong)uVar17;
              } while ((int)uVar19 < (int)uVar17);
              uVar9 = uVar19 & 0xffffffff;
            }
            uVar6 = FUN_00795280(*(undefined8 *)(param_1 + 0x40));
            *(undefined4 *)(param_1 + 0x38) = uVar6;
            iVar2 = FUN_00795280(*(undefined8 *)(param_1 + 0x40));
            iVar2 = iVar2 + -1;
            lVar10 = (long)iVar2;
            puVar11 = (undefined1 *)FUN_007952e0(*(undefined8 *)(param_1 + 0x40),lVar10);
            iVar3 = FUN_0079644c();
          } while (iVar3 != 0);
        }
LAB_008395f4:
        uVar6 = 0x29;
      }
LAB_0083906c:
      *(undefined4 *)(param_1 + 0x4c) = uVar6;
LAB_00839070:
      FUN_00795334(lVar8);
      FUN_007a71fc(lVar18);
      if (*(int *)(param_1 + 0x4c) != 0) {
        return 0;
      }
      uVar6 = 1;
      goto LAB_00838ff8;
    }
    uVar15 = 0x42;
    uVar16 = 0xa5;
  }
  else {
    uVar15 = 0x42;
    uVar16 = 0x9b;
  }
  FUN_00777eb4(0xb,0,uVar15,"../../third_party/boringssl/src/crypto/x509/x509_vfy.cc",uVar16);
  uVar6 = 0x41;
LAB_00838ff8:
  *(undefined4 *)(param_1 + 0x4c) = uVar6;
  return 0;
}


// ===== 00839754  FUN_00839754 =====

undefined8 FUN_00839754(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  lVar3 = FUN_00795280(param_2);
  if (lVar3 != 0) {
    uVar6 = 0;
    do {
      uVar5 = FUN_007952e0(param_2,uVar6);
      iVar1 = FUN_00796b78(uVar5,param_3);
      if (iVar1 == 0) {
        return uVar5;
      }
      if ((*(byte *)(*(long *)(param_1 + 0x20) + 8) & 1) != 0) {
        *(int *)(param_1 + 0x4c) = iVar1;
        *(undefined8 *)(param_1 + 0x50) = param_3;
        uVar2 = (**(code **)(param_1 + 0x30))(0,param_1);
        if (1 < uVar2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (uVar2 != 0) {
          return uVar5;
        }
      }
      uVar6 = uVar6 + 1;
      uVar4 = FUN_00795280(param_2);
    } while (uVar6 < uVar4);
  }
  return 0;
}


// ===== 00839814  FUN_00839814 =====

undefined8 FUN_00839814(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_00796b78(param_3);
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else if ((*(byte *)(*(long *)(param_1 + 0x20) + 8) & 1) == 0) {
    uVar2 = 0;
  }
  else {
    *(int *)(param_1 + 0x4c) = iVar1;
    *(undefined8 *)(param_1 + 0x50) = param_2;
    uVar2 = (**(code **)(param_1 + 0x30))(0,param_1);
    if (1 < (uint)uVar2) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  return uVar2;
}


// ===== 00839888  FUN_00839888 =====

undefined8 FUN_00839888(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  int iVar7;
  
  if (0 < *(int *)(param_1 + 0x38)) {
    uVar6 = 0;
    iVar7 = 0;
    uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x10);
    do {
      lVar3 = FUN_007952e0(*(undefined8 *)(param_1 + 0x40),uVar6);
      uVar5 = (undefined4)uVar6;
      if (((*(byte *)(*(long *)(param_1 + 0x20) + 8) >> 4 & 1) == 0) &&
         ((*(byte *)(lVar3 + 0x111) >> 1 & 1) != 0)) {
        *(undefined4 *)(param_1 + 0x48) = uVar5;
        *(undefined4 *)(param_1 + 0x4c) = 0x22;
        *(long *)(param_1 + 0x50) = lVar3;
        uVar4 = (**(code **)(param_1 + 0x30))(0,param_1);
        if (1 < (uint)uVar4) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if ((uint)uVar4 == 0) {
          return uVar4;
        }
      }
      if ((uVar6 != 0) && (uVar4 = FUN_00796b18(lVar3), (int)uVar4 == 0)) {
        *(undefined4 *)(param_1 + 0x48) = uVar5;
        *(undefined4 *)(param_1 + 0x4c) = 0x18;
        *(long *)(param_1 + 0x50) = lVar3;
        uVar4 = (**(code **)(param_1 + 0x30))(uVar4,param_1);
        if (1 < (uint)uVar4) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if ((uint)uVar4 == 0) {
          return uVar4;
        }
      }
      if ((0 < *(int *)(*(long *)(param_1 + 0x20) + 0x10)) &&
         (iVar2 = FUN_007962ec(lVar3,uVar1,uVar6 != 0), iVar2 != 1)) {
        *(undefined4 *)(param_1 + 0x48) = uVar5;
        *(undefined4 *)(param_1 + 0x4c) = 0x1a;
        *(long *)(param_1 + 0x50) = lVar3;
        uVar4 = (**(code **)(param_1 + 0x30))(0,param_1);
        if (1 < (uint)uVar4) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if ((uint)uVar4 == 0) {
          return uVar4;
        }
      }
      if ((((1 < uVar6) && ((*(byte *)(lVar3 + 0x110) >> 5 & 1) == 0)) &&
          (*(long *)(lVar3 + 0x108) != -1)) && (*(long *)(lVar3 + 0x108) + 1 < (long)iVar7)) {
        *(undefined4 *)(param_1 + 0x48) = uVar5;
        *(undefined4 *)(param_1 + 0x4c) = 0x19;
        *(long *)(param_1 + 0x50) = lVar3;
        uVar4 = (**(code **)(param_1 + 0x30))(0,param_1);
        if (1 < (uint)uVar4) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if ((uint)uVar4 == 0) {
          return uVar4;
        }
      }
      uVar6 = uVar6 + 1;
      iVar7 = ((*(uint *)(lVar3 + 0x110) >> 5 ^ 0xffffffff) & 1) + iVar7;
    } while ((long)uVar6 < (long)*(int *)(param_1 + 0x38));
  }
  return 1;
}


// ===== 00839a4c  FUN_00839a4c =====

undefined8 FUN_00839a4c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  char *__s;
  size_t sVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  uVar2 = DAT_001f5558;
  lVar7 = *(long *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 8);
  if (*(char *)(lVar7 + 0x58) != '\0') {
    *(undefined8 *)(param_1 + 0x50) = uVar5;
    *(undefined8 *)(param_1 + 0x48) = uVar2;
    uVar2 = (**(code **)(param_1 + 0x30))(0,param_1);
    if (1 < (uint)uVar2) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if ((uint)uVar2 == 0) {
      return uVar2;
    }
  }
  if ((*(long *)(lVar7 + 0x28) != 0) && (lVar3 = FUN_00795280(), lVar3 != 0)) {
    lVar6 = 0;
    do {
      __s = (char *)FUN_007952e0(*(undefined8 *)(lVar7 + 0x28),lVar6);
      sVar4 = strlen(__s);
      iVar1 = FUN_0079f788(uVar5,__s,sVar4,*(undefined4 *)(lVar7 + 0x30),0);
      uVar2 = DAT_001f52a0;
      if (0 < iVar1) goto LAB_00839b2c;
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 0x48) = uVar2;
    uVar2 = (**(code **)(param_1 + 0x30))(0,param_1);
    if (1 < (uint)uVar2) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if ((uint)uVar2 == 0) {
      return uVar2;
    }
  }
LAB_00839b2c:
  if ((*(long *)(lVar7 + 0x38) != 0) &&
     (iVar1 = FUN_0079f9f8(uVar5,*(long *)(lVar7 + 0x38),*(undefined8 *)(lVar7 + 0x40),0),
     uVar2 = DAT_001f59c0, iVar1 < 1)) {
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 0x48) = uVar2;
    uVar2 = (**(code **)(param_1 + 0x30))(0,param_1);
    if (1 < (uint)uVar2) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if ((uint)uVar2 == 0) {
      return uVar2;
    }
  }
  if ((*(long *)(lVar7 + 0x48) != 0) &&
     (iVar1 = FUN_0079fa7c(uVar5,*(long *)(lVar7 + 0x48),*(undefined8 *)(lVar7 + 0x50),0),
     uVar2 = DAT_001f54e0, iVar1 < 1)) {
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 0x48) = uVar2;
    uVar2 = (**(code **)(param_1 + 0x30))(0,param_1);
    if (1 < (uint)uVar2) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if ((uint)uVar2 == 0) {
      return uVar2;
    }
  }
  return 1;
}


// ===== 00839bf8  FUN_00839bf8 =====

undefined8 FUN_00839bf8(long param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long local_78;
  undefined4 local_6c;
  undefined1 *local_68;
  
  uVar3 = (uint)*(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  if ((uVar3 >> 2 & 1) != 0) {
    if ((uVar3 >> 3 & 1) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_00795280(*(undefined8 *)(param_1 + 0x40));
      iVar1 = iVar1 + -1;
      if (iVar1 < 0) {
        return 1;
      }
    }
    iVar9 = 0;
    do {
      *(int *)(param_1 + 0x48) = iVar9;
      uVar5 = FUN_007952e0(*(undefined8 *)(param_1 + 0x40),(long)iVar9);
      *(undefined8 *)(param_1 + 0x50) = uVar5;
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x68) = 0;
      local_68 = (undefined1 *)0x0;
      local_6c = 0;
      local_78 = 0;
      iVar2 = FUN_0083a828(param_1,&local_78,&local_68,&local_6c,*(undefined8 *)(param_1 + 0x18));
      if (iVar2 == 0) {
        uVar6 = FUN_007a0b50(uVar5);
        lVar7 = FUN_008383f0(param_1,uVar6);
        if ((lVar7 != 0) || (local_78 == 0)) {
          FUN_0083a828(param_1,&local_78,&local_68,&local_6c,lVar7);
          FUN_00795370(lVar7,FUN_0083873c,PTR_FUN_00d528b0);
          if (local_78 == 0) goto LAB_00839cb0;
        }
LAB_00839d34:
        lVar7 = local_78;
        iVar2 = *(int *)(param_1 + 0x48);
        *(undefined4 *)(param_1 + 0x68) = local_6c;
        *(long *)(param_1 + 0x58) = local_78;
        *(undefined1 **)(param_1 + 0x60) = local_68;
        iVar4 = FUN_00795280(*(undefined8 *)(param_1 + 0x40));
        lVar8 = *(long *)(param_1 + 0x60);
        if (lVar8 == 0) {
          if (iVar2 < iVar4 + -1) {
            lVar8 = FUN_007952e0(*(undefined8 *)(param_1 + 0x40),(long)iVar2 + 1);
          }
          else {
            lVar8 = FUN_007952e0(*(undefined8 *)(param_1 + 0x40),(long)(iVar4 + -1));
            iVar2 = FUN_00796b78(lVar8,lVar8);
            if (iVar2 != 0) {
              if ((*(byte *)(*(long *)(param_1 + 0x20) + 8) & 1) != 0) {
                *(int *)(param_1 + 0x4c) = iVar2;
                *(long *)(param_1 + 0x50) = lVar8;
                uVar3 = (**(code **)(param_1 + 0x30))(0,param_1);
                if (1 < uVar3) {
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                if (uVar3 != 0) goto LAB_00839de4;
              }
              *(undefined4 *)(param_1 + 0x4c) = 0x21;
              uVar3 = (**(code **)(param_1 + 0x30))(0,param_1);
              if (1 < uVar3) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              if (uVar3 == 0) goto LAB_00839f90;
            }
          }
LAB_00839de4:
          if (lVar8 != 0) goto LAB_00839de8;
        }
        else {
LAB_00839de8:
          if (((*(byte *)(lVar8 + 0x110) >> 1 & 1) != 0) &&
             ((*(byte *)(lVar8 + 0x114) >> 1 & 1) == 0)) {
            *(undefined4 *)(param_1 + 0x4c) = 0x23;
            uVar3 = (**(code **)(param_1 + 0x30))(0,param_1);
            if (1 < uVar3) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            if (uVar3 == 0) goto LAB_00839f90;
          }
          if (-1 < *(char *)(param_1 + 0x68)) {
            *(undefined4 *)(param_1 + 0x4c) = 0x2c;
            uVar3 = (**(code **)(param_1 + 0x30))(0,param_1);
            if (1 < uVar3) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            if (uVar3 == 0) goto LAB_00839f90;
          }
          if ((*(byte *)(lVar7 + 0x30) >> 1 & 1) != 0) {
            *(undefined4 *)(param_1 + 0x4c) = 0x29;
            uVar3 = (**(code **)(param_1 + 0x30))(0,param_1);
            if (1 < uVar3) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            if (uVar3 == 0) goto LAB_00839f90;
          }
          if (((*(byte *)(param_1 + 0x68) >> 6 & 1) == 0) &&
             (iVar2 = FUN_0083ac88(param_1,lVar7,1), iVar2 == 0)) goto LAB_00839f90;
          lVar8 = FUN_007a0d10(lVar8);
          if (lVar8 == 0) {
            *(undefined4 *)(param_1 + 0x4c) = 6;
            uVar3 = (**(code **)(param_1 + 0x30))(0,param_1);
            if (1 < uVar3) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
          }
          else {
            iVar2 = FUN_007a5378(lVar7,lVar8);
            if (0 < iVar2) goto LAB_00839ef4;
            *(undefined4 *)(param_1 + 0x4c) = 8;
            uVar3 = (**(code **)(param_1 + 0x30))(0,param_1);
            if (1 < uVar3) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
          }
          if (uVar3 == 0) goto LAB_00839f90;
        }
LAB_00839ef4:
        if (((*(byte *)(*(long *)(param_1 + 0x20) + 8) >> 4 & 1) == 0) &&
           ((*(byte *)(lVar7 + 0x1d) >> 1 & 1) != 0)) {
          *(undefined4 *)(param_1 + 0x4c) = 0x24;
          uVar3 = (**(code **)(param_1 + 0x30))(0,param_1);
          if (1 < uVar3) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (uVar3 == 0) {
LAB_00839f90:
            FUN_007a5350(lVar7);
            *(undefined8 *)(param_1 + 0x58) = 0;
            return 0;
          }
        }
        local_68 = &DAT_aaaaaaaaaaaaaaaa;
        iVar2 = FUN_007a555c(lVar7,&local_68,uVar5);
        if (iVar2 != 0) {
          *(undefined4 *)(param_1 + 0x4c) = 0x17;
          uVar3 = (**(code **)(param_1 + 0x30))(0,param_1);
          if (1 < uVar3) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (uVar3 == 0) {
            uVar3 = 0;
            goto LAB_00839f70;
          }
        }
        uVar3 = 1;
      }
      else {
        if (local_78 != 0) goto LAB_00839d34;
LAB_00839cb0:
        *(undefined4 *)(param_1 + 0x4c) = 3;
        uVar3 = (**(code **)(param_1 + 0x30))(0,param_1);
        if (1 < uVar3) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar7 = 0;
      }
LAB_00839f70:
      FUN_007a5350(lVar7);
      *(undefined8 *)(param_1 + 0x58) = 0;
      if (uVar3 == 0) {
        return 0;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 <= iVar1);
  }
  return 1;
}


// ===== 00839ff4  FUN_00839ff4 =====

undefined8 FUN_00839ff4(long param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  time_t tVar8;
  undefined8 uVar9;
  ulong uVar10;
  int iVar11;
  undefined1 *local_28;
  
  iVar1 = FUN_00795280(*(undefined8 *)(param_1 + 0x40));
  iVar11 = iVar1 + -1;
  *(int *)(param_1 + 0x48) = iVar11;
  lVar4 = FUN_007952e0(*(undefined8 *)(param_1 + 0x40),(long)iVar11);
  iVar2 = FUN_00796b78(lVar4,lVar4);
  lVar5 = lVar4;
  if (iVar2 != 0) {
    uVar10 = *(ulong *)(*(long *)(param_1 + 0x20) + 8);
    uVar3 = (uint)uVar10;
    if ((uVar10 & 1) != 0) {
      *(int *)(param_1 + 0x4c) = iVar2;
      *(long *)(param_1 + 0x50) = lVar4;
      uVar3 = (**(code **)(param_1 + 0x30))(0,param_1);
      if (1 < uVar3) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (uVar3 != 0) goto LAB_0083a0e4;
      uVar3 = (uint)*(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    }
    if ((uVar3 >> 0x13 & 1) != 0) goto LAB_0083a16c;
    if (iVar11 < 1) {
      *(undefined4 *)(param_1 + 0x4c) = 0x15;
      *(long *)(param_1 + 0x50) = lVar4;
      uVar7 = (**(code **)(param_1 + 0x30))(0,param_1);
      if ((uint)uVar7 < 2) {
        return uVar7;
      }
                    /* WARNING: Subroutine does not return */
      abort();
    }
    iVar11 = iVar1 + -2;
    *(int *)(param_1 + 0x48) = iVar11;
    lVar5 = FUN_007952e0(*(undefined8 *)(param_1 + 0x40),iVar11);
  }
LAB_0083a0e4:
  do {
    if (iVar11 < 0) {
      return 1;
    }
    *(int *)(param_1 + 0x48) = iVar11;
    if ((lVar5 != lVar4) || ((*(byte *)(*(long *)(param_1 + 0x20) + 9) >> 6 & 1) != 0)) {
      lVar6 = FUN_007a0d10(lVar4);
      if (lVar6 == 0) {
        *(undefined4 *)(param_1 + 0x4c) = 6;
        *(long *)(param_1 + 0x50) = lVar4;
        uVar7 = (**(code **)(param_1 + 0x30))(0,param_1);
        if (1 < (uint)uVar7) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
      else {
        iVar1 = FUN_007a1ea8(lVar5,lVar6);
        if (0 < iVar1) goto LAB_0083a16c;
        *(undefined4 *)(param_1 + 0x4c) = 7;
        *(long *)(param_1 + 0x50) = lVar5;
        uVar7 = (**(code **)(param_1 + 0x30))(0,param_1);
        if (1 < (uint)uVar7) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
      if ((int)uVar7 == 0) {
        return uVar7;
      }
    }
LAB_0083a16c:
    uVar3 = (uint)(*(long **)(param_1 + 0x20))[1];
    if ((uVar3 >> 0x15 & 1) == 0) {
      if ((uVar3 >> 1 & 1) == 0) {
        tVar8 = time((time_t *)0x0);
      }
      else {
        tVar8 = **(long **)(param_1 + 0x20);
      }
      uVar7 = FUN_007a1364(lVar5);
      local_28 = &DAT_aaaaaaaaaaaaaaaa;
      uVar7 = FUN_00768b34(uVar7,&local_28);
      if ((int)uVar7 == 0) {
        *(undefined4 *)(param_1 + 0x4c) = 0xd;
        *(long *)(param_1 + 0x50) = lVar5;
        uVar7 = (**(code **)(param_1 + 0x30))(uVar7,param_1);
        if (1 < (uint)uVar7) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
LAB_0083a204:
        if ((int)uVar7 == 0) {
          return uVar7;
        }
      }
      else if (0 < (long)local_28 - tVar8) {
        *(undefined4 *)(param_1 + 0x4c) = 9;
        *(long *)(param_1 + 0x50) = lVar5;
        uVar7 = (**(code **)(param_1 + 0x30))(0,param_1);
        if (1 < (uint)uVar7) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        goto LAB_0083a204;
      }
      uVar7 = FUN_007a137c(lVar5);
      local_28 = &DAT_aaaaaaaaaaaaaaaa;
      uVar7 = FUN_00768b34(uVar7,&local_28);
      lVar6 = (long)local_28 - tVar8;
      if ((int)uVar7 == 0) {
        *(undefined4 *)(param_1 + 0x4c) = 0xe;
        *(long *)(param_1 + 0x50) = lVar5;
        uVar9 = (**(code **)(param_1 + 0x30))(uVar7,param_1);
        if (1 < (uint)uVar9) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if ((uint)uVar9 == 0) {
          return uVar9;
        }
      }
      if ((int)uVar7 != 0 && lVar6 < 1) {
        *(undefined4 *)(param_1 + 0x4c) = 10;
        *(long *)(param_1 + 0x50) = lVar5;
        uVar7 = (**(code **)(param_1 + 0x30))(0,param_1);
        if (1 < (uint)uVar7) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if ((uint)uVar7 == 0) {
          return uVar7;
        }
      }
    }
    *(long *)(param_1 + 0x50) = lVar5;
    uVar7 = (**(code **)(param_1 + 0x30))(1,param_1);
    if (1 < (uint)uVar7) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if ((uint)uVar7 == 0) {
      return uVar7;
    }
    iVar11 = iVar11 + -1;
    if (-1 < iVar11) {
      lVar6 = FUN_007952e0(*(undefined8 *)(param_1 + 0x40),iVar11);
      lVar4 = lVar5;
      lVar5 = lVar6;
    }
  } while( true );
}


// ===== 0083a2f8  FUN_0083a2f8 =====

undefined8 FUN_0083a2f8(long param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined1 *local_48;
  
  iVar3 = FUN_00795280(*(undefined8 *)(param_1 + 0x40));
  if ((int)(iVar3 - 1U) < 0) {
    FUN_007952e0(*(undefined8 *)(param_1 + 0x40),0);
  }
  else {
    bVar2 = false;
    uVar9 = (ulong)(iVar3 - 1U);
    do {
      lVar5 = FUN_007952e0(*(undefined8 *)(param_1 + 0x40),uVar9);
      if (((uVar9 == 0) || ((*(byte *)(lVar5 + 0x110) >> 5 & 1) == 0)) &&
         (iVar3 = FUN_00795280(*(undefined8 *)(param_1 + 0x40)), (long)uVar9 < (long)(iVar3 + -1)))
      {
        iVar3 = iVar3 + -2;
        do {
          lVar6 = FUN_007952e0(*(undefined8 *)(param_1 + 0x40),iVar3 + 1);
          if (*(long *)(lVar6 + 0x140) != 0) {
            iVar4 = FUN_00799c60(lVar5);
            if (iVar4 != 0) {
              if (iVar4 == 0x11) goto LAB_0083a4ac;
              *(int *)(param_1 + 0x48) = (int)uVar9;
              *(int *)(param_1 + 0x4c) = iVar4;
              *(long *)(param_1 + 0x50) = lVar5;
              uVar7 = (**(code **)(param_1 + 0x30))(0,param_1);
              if (1 < (uint)uVar7) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              if ((uint)uVar7 == 0) {
                return uVar7;
              }
            }
            bVar2 = true;
          }
          lVar6 = (long)iVar3;
          iVar3 = iVar3 + -1;
        } while ((long)uVar9 < lVar6);
      }
      bVar1 = 0 < (long)uVar9;
      uVar9 = uVar9 - 1;
    } while (bVar1);
    lVar5 = FUN_007952e0(*(undefined8 *)(param_1 + 0x40),0);
    if ((bVar2) && (*(long *)(lVar5 + 0x138) == 0)) {
      uVar7 = FUN_007a0bd0(lVar5);
      iVar3 = -1;
      do {
        iVar3 = FUN_007a1558(uVar7,0xd,iVar3);
        if (iVar3 == -1) {
          return 1;
        }
        FUN_007a14d4(uVar7,iVar3);
        uVar8 = FUN_007a14c0();
        local_48 = &DAT_aaaaaaaaaaaaaaaa;
        iVar4 = FUN_0079d610(&local_48,uVar8);
        if (iVar4 < 0) {
LAB_0083a4ac:
          *(undefined4 *)(param_1 + 0x4c) = 0x11;
          return 0;
        }
        iVar4 = FUN_0079f67c(local_48,iVar4);
        FUN_0078cb3c(local_48);
        uVar8 = DAT_001f5798;
      } while (iVar4 == 0);
      *(long *)(param_1 + 0x50) = lVar5;
      *(undefined8 *)(param_1 + 0x48) = uVar8;
      uVar7 = (**(code **)(param_1 + 0x30))(0,param_1);
      if (1 < (uint)uVar7) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if ((uint)uVar7 == 0) {
        return uVar7;
      }
    }
  }
  return 1;
}


// ===== 0083a4dc  FUN_0083a4dc =====

undefined8 FUN_0083a4dc(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_8;
  
  local_8 = 0;
  iVar1 = FUN_0083ae18(*(undefined8 *)(param_1 + 0x40),
                       *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20),
                       *(undefined8 *)(*(long *)(param_1 + 0x20) + 8),&local_8);
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    *(int *)(param_1 + 0x4c) = iVar1;
    *(undefined8 *)(param_1 + 0x50) = local_8;
    if (iVar1 == 0x11) {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)(param_1 + 0x30))(0,param_1);
      if (1 < (uint)uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
  }
  return uVar2;
}


// ===== 0083a560  FUN_0083a560 =====

void FUN_0083a560(long param_1)

{
  FUN_0078b328(param_1 + 0x70);
  return;
}


// ===== 0083a56c  FUN_0083a56c =====

void FUN_0083a56c(long param_1)

{
  FUN_0078b3bc(param_1 + 0x70);
  return;
}


// ===== 0083a578  FUN_0083a578 =====

undefined4 FUN_0083a578(long param_1)

{
  return *(undefined4 *)(param_1 + 0x4c);
}


// ===== 0083a584  FUN_0083a584 =====

undefined8 FUN_0083a584(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}


// ===== 0083a590  FUN_0083a590 =====

void FUN_0083a590(long param_1)

{
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_007a0d4c();
    return;
  }
  return;
}


// ===== 0083a5a4  FUN_0083a5a4 =====

void FUN_0083a5a4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0078c9d4(0x78);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[0xe] = 0;
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
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  return;
}


// ===== 0083a5e4  FUN_0083a5e4 =====

void FUN_0083a5e4(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_0078b424(&DAT_00d5a800,param_1 + 0xe);
    FUN_00838788(param_1[4]);
    FUN_00795370(param_1[8],FUN_007a3220,PTR_FUN_00d51ec0);
    param_1[0xe] = 0;
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
    param_1[1] = 0;
    *param_1 = 0;
    FUN_0078cb3c(param_1);
    return;
  }
  return;
}


// ===== 0083a660  FUN_0083a660 =====

undefined8 FUN_0083a660(long *param_1,long param_2,long param_3,long param_4)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  FUN_0078b424(&DAT_00d5a800,param_1 + 0xe);
  FUN_00838788(param_1[4]);
  FUN_00795370(param_1[8],FUN_007a3220,PTR_FUN_00d51ec0);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
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
  FUN_0078b418(param_1 + 0xe);
  if (param_2 == 0) {
    FUN_00777eb4(0xb,0,0x43,"../../third_party/boringssl/src/crypto/x509/x509_vfy.cc",0x5e7);
  }
  else {
    lVar3 = FUN_0083874c();
    param_1[4] = lVar3;
    if (lVar3 != 0) {
      param_1[6] = *(long *)(param_2 + 0x50);
      iVar2 = FUN_00838804(lVar3,*(undefined8 *)(param_2 + 0x48));
      if (iVar2 != 0) {
        lVar3 = param_1[4];
        uVar4 = FUN_00838be0("default");
        iVar2 = FUN_00838804(lVar3,uVar4);
        if (iVar2 != 0) {
          pcVar1 = FUN_0083a7c0;
          if (*(code **)(param_2 + 0x50) != (code *)0x0) {
            pcVar1 = *(code **)(param_2 + 0x50);
          }
          param_1[6] = (long)pcVar1;
          return 1;
        }
      }
    }
  }
  FUN_0078b424(&DAT_00d5a800,param_1 + 0xe);
  FUN_00838788(param_1[4]);
  FUN_00795370(param_1[8],FUN_007a3220,PTR_FUN_00d51ec0);
  param_1[0xe] = 0;
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
  param_1[1] = 0;
  *param_1 = 0;
  return 0;
}


// ===== 0083a7c0  FUN_0083a7c0 =====

void FUN_0083a7c0(void)

{
  return;
}


// ===== 0083a7c8  FUN_0083a7c8 =====

void FUN_0083a7c8(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x30) = param_2;
  return;
}


// ===== 0083a7d4  FUN_0083a7d4 =====

void FUN_0083a7d4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = FUN_00838be0(param_2);
  if (lVar1 != 0) {
    FUN_00838804(*(undefined8 *)(param_1 + 0x20),lVar1);
    return;
  }
  return;
}


// ===== 0083a81c  FUN_0083a81c =====

undefined8 FUN_0083a81c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


// ===== 0083a828  FUN_0083a828 =====

bool FUN_0083a828(long param_1,long *param_2,undefined8 *param_3,uint *param_4,undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  uint uVar13;
  int *piVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  ulong local_90;
  int *local_88;
  undefined8 local_80;
  long local_78;
  uint local_6c;
  int local_68;
  int local_64;
  
  uVar15 = *param_4;
  lVar16 = *(long *)(param_1 + 0x50);
  lVar4 = FUN_00795280(param_5);
  if (lVar4 != 0) {
    uVar17 = 0;
    local_80 = 0;
    local_78 = 0;
    do {
      lVar4 = FUN_007952e0(param_5,uVar17);
      if ((*(byte *)(lVar4 + 0x30) & 0x62) == 0) {
        uVar6 = FUN_007a0b50(lVar16);
        uVar7 = FUN_007a5acc(lVar4);
        iVar2 = FUN_007a0a48(uVar6,uVar7);
        if (iVar2 == 0) {
          uVar13 = 0x120;
          if ((*(uint *)(lVar4 + 0x1c) & 0x200) != 0) {
            uVar13 = 0x20;
          }
          iVar2 = FUN_0083ac88(param_1,lVar4,0);
          if (iVar2 != 0) {
            uVar13 = uVar13 | 0x40;
          }
          uVar6 = FUN_007a5acc(lVar4);
          iVar2 = *(int *)(param_1 + 0x48);
          lVar8 = FUN_00795280(*(undefined8 *)(param_1 + 0x40));
          if (lVar8 + -1 != (long)iVar2) {
            iVar2 = iVar2 + 1;
          }
          uVar7 = FUN_007952e0(*(undefined8 *)(param_1 + 0x40),(long)iVar2);
          iVar3 = FUN_00796a2c(uVar7,*(undefined8 *)(lVar4 + 0x20));
          if (iVar3 == 0) {
            local_6c = 0x1c;
LAB_0083a9d0:
            uVar1 = *(uint *)(lVar4 + 0x30);
            local_6c = local_6c | uVar13;
            if ((uVar1 >> 4 & 1) == 0) {
              if ((*(byte *)(lVar16 + 0x110) >> 4 & 1) == 0) {
                uVar1 = uVar1 >> 3;
              }
              else {
                uVar1 = uVar1 >> 2;
              }
              if ((uVar1 & 1) == 0) {
                lVar8 = FUN_00795280(*(undefined8 *)(lVar16 + 0x130));
                if (lVar8 != 0) {
                  uVar5 = 0;
                  do {
                    puVar11 = (undefined8 *)FUN_007952e0(*(undefined8 *)(lVar16 + 0x130),uVar5);
                    if ((puVar11[1] == 0) && (puVar11[2] == 0)) {
                      if ((*(undefined8 **)(lVar4 + 0x28) == (undefined8 *)0x0) ||
                         ((piVar14 = (int *)*puVar11, piVar14 == (int *)0x0 ||
                          (local_88 = (int *)**(undefined8 **)(lVar4 + 0x28), local_88 == (int *)0x0
                          )))) goto LAB_0083aba8;
                      if (*piVar14 == 1) {
                        local_90 = *(ulong *)(piVar14 + 4);
                        if (local_90 != 0) {
                          if (*local_88 == 1) {
                            if ((*(long *)(local_88 + 4) != 0) &&
                               (iVar2 = FUN_007a0a48(local_90), iVar2 == 0)) goto LAB_0083aba8;
                          }
                          else {
LAB_0083ab3c:
                            uVar6 = *(undefined8 *)(local_88 + 2);
                            lVar8 = FUN_00795280(uVar6);
                            if (lVar8 != 0) {
                              uVar10 = 0;
                              do {
                                piVar14 = (int *)FUN_007952e0(uVar6,uVar10);
                                if ((*piVar14 == 4) &&
                                   (iVar2 = FUN_007a0a48(local_90,*(undefined8 *)(piVar14 + 2)),
                                   iVar2 == 0)) goto LAB_0083aba8;
                                uVar10 = uVar10 + 1;
                                uVar12 = FUN_00795280(uVar6);
                              } while (uVar10 < uVar12);
                            }
                          }
                        }
                      }
                      else if (*local_88 == 1) {
                        local_90 = *(ulong *)(local_88 + 4);
                        local_88 = piVar14;
                        if (local_90 != 0) goto LAB_0083ab3c;
                      }
                      else {
                        lVar8 = FUN_00795280(*(undefined8 *)(piVar14 + 2));
                        if (lVar8 != 0) {
                          local_90 = 0;
                          do {
                            uVar6 = FUN_007952e0(*(undefined8 *)(piVar14 + 2),local_90);
                            lVar8 = FUN_00795280(*(undefined8 *)(local_88 + 2));
                            if (lVar8 != 0) {
                              uVar10 = 0;
                              do {
                                uVar9 = FUN_007952e0(*(undefined8 *)(local_88 + 2),uVar10);
                                iVar2 = FUN_00796170(uVar6,uVar9);
                                if (iVar2 == 0) goto LAB_0083aba8;
                                uVar10 = uVar10 + 1;
                                uVar12 = FUN_00795280(*(undefined8 *)(local_88 + 2));
                              } while (uVar10 < uVar12);
                            }
                            local_90 = local_90 + 1;
                            uVar10 = FUN_00795280(*(undefined8 *)(piVar14 + 2));
                          } while (local_90 < uVar10);
                        }
                      }
                    }
                    uVar5 = uVar5 + 1;
                    uVar10 = FUN_00795280(*(undefined8 *)(lVar16 + 0x130));
                  } while (uVar5 < uVar10);
                }
                if ((*(long **)(lVar4 + 0x28) == (long *)0x0) || (**(long **)(lVar4 + 0x28) == 0)) {
LAB_0083aba8:
                  local_6c = local_6c | 0x80;
                }
              }
            }
            if ((int)uVar15 <= (int)local_6c) {
              if ((local_6c == uVar15) && (local_78 != 0)) {
                local_68 = -0x55555556;
                local_64 = -0x55555556;
                uVar6 = FUN_007a5aac();
                uVar9 = FUN_007a5aac(lVar4);
                iVar2 = FUN_00768a00(&local_64,&local_68,uVar6,uVar9);
                if ((iVar2 == 0) || ((local_64 < 1 && (local_68 < 1)))) goto LAB_0083a890;
              }
              uVar15 = local_6c;
              local_80 = uVar7;
              local_78 = lVar4;
            }
          }
          else {
            iVar3 = FUN_00795280(*(undefined8 *)(param_1 + 0x40));
            if (iVar2 + 1 < iVar3) {
              lVar8 = (long)(iVar2 + 1);
              do {
                uVar7 = FUN_007952e0(*(undefined8 *)(param_1 + 0x40),lVar8);
                uVar9 = FUN_007a0bd0();
                iVar2 = FUN_007a0a48(uVar9,uVar6);
                if ((iVar2 == 0) &&
                   (iVar2 = FUN_00796a2c(uVar7,*(undefined8 *)(lVar4 + 0x20)), iVar2 == 0)) {
                  local_6c = 0xc;
                  goto LAB_0083a9d0;
                }
                lVar8 = lVar8 + 1;
                iVar2 = FUN_00795280(*(undefined8 *)(param_1 + 0x40));
              } while (lVar8 < iVar2);
            }
          }
        }
      }
LAB_0083a890:
      uVar17 = uVar17 + 1;
      uVar5 = FUN_00795280(param_5);
    } while (uVar17 < uVar5);
    if (local_78 != 0) {
      if (*param_2 != 0) {
        FUN_007a5350();
      }
      *param_2 = local_78;
      *param_3 = local_80;
      *param_4 = uVar15;
      FUN_007a5a88(local_78);
    }
  }
  return 0x1bf < (int)uVar15;
}


// ===== 0083ac88  FUN_0083ac88 =====

undefined8 FUN_0083ac88(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  time_t tVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  undefined1 *local_38;
  
  plVar5 = *(long **)(param_1 + 0x20);
  uVar6 = (uint)plVar5[1];
  if ((uVar6 >> 0x15 & 1) == 0) {
    if (param_3 != 0) {
      *(undefined8 *)(param_1 + 0x58) = param_2;
      uVar6 = (uint)plVar5[1];
    }
    if ((uVar6 >> 1 & 1) == 0) {
      tVar2 = time((time_t *)0x0);
    }
    else {
      tVar2 = *plVar5;
    }
    uVar3 = FUN_007a5aac(param_2);
    local_38 = &DAT_aaaaaaaaaaaaaaaa;
    iVar1 = FUN_00768b34(uVar3,&local_38);
    if (iVar1 == 0) {
      if (param_3 != 0) {
        *(undefined4 *)(param_1 + 0x4c) = 0xf;
        uVar3 = (**(code **)(param_1 + 0x30))(0,param_1);
        if (1 < (uint)uVar3) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
LAB_0083ad54:
        if ((int)uVar3 == 0) {
          return uVar3;
        }
        goto LAB_0083ad58;
      }
    }
    else if ((long)local_38 - tVar2 < 1) {
LAB_0083ad58:
      lVar4 = FUN_007a5abc(param_2);
      if (lVar4 == 0) {
LAB_0083ad90:
        if (param_3 == 0) goto LAB_0083adec;
LAB_0083ade8:
        *(undefined8 *)(param_1 + 0x58) = 0;
        goto LAB_0083adec;
      }
      uVar3 = FUN_007a5abc(param_2);
      local_38 = &DAT_aaaaaaaaaaaaaaaa;
      iVar1 = FUN_00768b34(uVar3,&local_38);
      if (iVar1 == 0) {
        if (param_3 != 0) {
          *(undefined4 *)(param_1 + 0x4c) = 0x10;
          uVar3 = (**(code **)(param_1 + 0x30))(0,param_1);
          if (1 < (uint)uVar3) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
LAB_0083ade4:
          if ((int)uVar3 == 0) {
            return uVar3;
          }
          goto LAB_0083ade8;
        }
      }
      else {
        if (0 < (long)local_38 - tVar2) goto LAB_0083ad90;
        if (param_3 != 0) {
          *(undefined4 *)(param_1 + 0x4c) = 0xc;
          uVar3 = (**(code **)(param_1 + 0x30))(0,param_1);
          if (1 < (uint)uVar3) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          goto LAB_0083ade4;
        }
      }
    }
    else if (param_3 != 0) {
      *(undefined4 *)(param_1 + 0x4c) = 0xb;
      uVar3 = (**(code **)(param_1 + 0x30))(0,param_1);
      if (1 < (uint)uVar3) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      goto LAB_0083ad54;
    }
    uVar3 = 0;
  }
  else {
LAB_0083adec:
    uVar3 = 1;
  }
  return uVar3;
}


// ===== 0083ae18  FUN_0083ae18 =====

undefined4 FUN_0083ae18(undefined8 param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  undefined8 *puVar18;
  ulong uVar19;
  long lVar20;
  long *plVar21;
  long *plVar22;
  undefined4 uVar23;
  ulong uVar24;
  undefined1 *puVar25;
  undefined8 uVar26;
  long local_d8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  int local_84;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  
  *param_4 = 0;
  uVar7 = FUN_00795280();
  uVar24 = uVar7 - 2;
  if (uVar7 < 2) {
    return 0;
  }
  lVar8 = FUN_00795214();
  if (lVar8 == 0) {
LAB_0083bb08:
    lVar10 = 0;
    uVar23 = 0x11;
    goto LAB_0083bb10;
  }
  plVar22 = (long *)0x0;
  local_98 = (undefined1 *)0x0;
  if ((param_3 & 0x100) == 0) {
    local_98 = (undefined1 *)(uVar7 + 1);
  }
  local_90 = (undefined1 *)0x0;
  if ((param_3 & 0x200) == 0) {
    local_90 = (undefined1 *)(uVar7 + 1);
  }
  local_a0 = (undefined1 *)0x0;
  if ((param_3 & 0x400) == 0) {
    local_a0 = (undefined1 *)(uVar7 + 1);
  }
  do {
    lVar9 = FUN_007952e0(param_1,uVar24);
    iVar5 = FUN_0079644c();
    if (iVar5 == 0) {
LAB_0083b9d8:
      lVar10 = 0;
      uVar23 = 0x11;
      goto LAB_0083ba48;
    }
    uVar2 = *(uint *)(lVar9 + 0x110);
    if (plVar22 == (long *)0x0) {
      plVar22 = (long *)FUN_0078c9d4(0x10);
      if (plVar22 == (long *)0x0) goto LAB_0083bb08;
      *plVar22 = 0;
      plVar22[1] = 0;
      lVar10 = FUN_007951a4(FUN_0083be54);
      *plVar22 = lVar10;
      if (lVar10 == 0) {
        FUN_00795370(0,FUN_0083c078,FUN_0083bf10);
        FUN_0078cb3c(plVar22);
        goto LAB_0083bb08;
      }
      *(undefined4 *)(plVar22 + 1) = 1;
    }
    uVar1 = 0;
    if (uVar24 != 0) {
      uVar1 = uVar2 >> 5 & 1;
    }
    if (local_90 != (undefined1 *)0x0) {
      uVar1 = 1;
    }
    local_84 = -0x55555556;
    lVar10 = FUN_007a0de4(lVar9,0x59,&local_84,0);
    puVar3 = PTR_FUN_00d526e0;
    if (lVar10 == 0) {
      if (local_84 == -1) {
        *(undefined4 *)(plVar22 + 1) = 0;
        lVar10 = FUN_00795280(*plVar22);
        if (lVar10 != 0) {
          uVar13 = 0;
          do {
            puVar12 = (undefined8 *)FUN_007952e0(*plVar22,uVar13);
            if (puVar12 != (undefined8 *)0x0) {
              FUN_0076c804(*puVar12);
              FUN_00795370(puVar12[1],FUN_00796e84,puVar3);
              FUN_0078cb3c(puVar12);
            }
            uVar13 = uVar13 + 1;
            uVar15 = FUN_00795280(*plVar22);
          } while (uVar13 < uVar15);
        }
        FUN_00795290(*plVar22);
        goto LAB_0083b230;
      }
LAB_0083ba3c:
      lVar10 = 0;
      *param_4 = lVar9;
      uVar23 = 0x2a;
      goto LAB_0083ba48;
    }
    lVar11 = FUN_00795280();
    if (lVar11 == 0) {
      FUN_00777eb4(0xb,0,0x90,"../../third_party/boringssl/src/crypto/x509/policy.cc",0xf9);
      lVar11 = 0;
code_r0x0083ba20:
      FUN_00795370(lVar11,FUN_0083c078,FUN_0083bf10);
      FUN_0079b78c(lVar10);
      goto LAB_0083ba3c;
    }
    FUN_00795bd8(lVar10,FUN_0083be6c);
    FUN_00795a0c(lVar10,FUN_0083bffc);
    lVar11 = FUN_00795280(lVar10);
    if (lVar11 == 0) {
      iVar5 = (int)plVar22[1];
LAB_0083b1a0:
      FUN_007955ec(*plVar22,FUN_0083c030,FUN_0083be84,lVar10);
      *(undefined4 *)(plVar22 + 1) = 0;
    }
    else {
      puVar12 = (undefined8 *)FUN_007952e0(lVar10,0);
      iVar5 = FUN_0078d994(*puVar12);
      bVar4 = iVar5 == 0x2ea;
      uVar13 = FUN_00795280(lVar10);
      if (1 < uVar13) {
        bVar4 = iVar5 == 0x2ea;
        uVar13 = 1;
        do {
          puVar12 = (undefined8 *)FUN_007952e0(lVar10,uVar13);
          iVar5 = FUN_0078d994(*puVar12);
          puVar14 = (undefined8 *)FUN_007952e0(lVar10,uVar13 - 1);
          iVar6 = FUN_0078d950(*puVar14,*puVar12);
          if (iVar6 == 0) {
            FUN_00777eb4(0xb,0,0x90,"../../third_party/boringssl/src/crypto/x509/policy.cc",0x108);
            lVar11 = 0;
            goto code_r0x0083ba20;
          }
          if (iVar5 == 0x2ea) {
            bVar4 = true;
          }
          uVar15 = FUN_00795280(lVar10);
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar15);
      }
      iVar5 = (int)plVar22[1];
      if ((uVar1 & bVar4) == 0) goto LAB_0083b1a0;
    }
    if (iVar5 == 0) {
      FUN_00795370(0,FUN_0083c078,FUN_0083bf10);
      FUN_0079b78c(lVar10);
    }
    else {
      lVar11 = FUN_00795214();
      if (lVar11 == 0) goto code_r0x0083ba20;
      lVar16 = FUN_00795280(lVar10);
      if (lVar16 != 0) {
        uVar13 = 0;
        do {
          puVar12 = (undefined8 *)FUN_007952e0(lVar10,uVar13);
          iVar5 = FUN_0078d994(*puVar12);
          if (iVar5 != 0x2ea) {
            local_78 = (undefined1 *)*puVar12;
            local_80 = &DAT_aaaaaaaaaaaaaaaa;
            puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
            local_70 = &DAT_aaaaaaaaaaaaaaaa;
            iVar5 = FUN_0079568c(*plVar22,&local_80,&local_78,FUN_0083c044);
            if ((iVar5 == 0) || (lVar16 = FUN_007952e0(*plVar22,local_80), lVar16 == 0)) {
              uVar26 = *puVar12;
              plVar17 = (long *)FUN_0078c9d4(0x18);
              if (plVar17 != (long *)0x0) {
                *plVar17 = 0;
                plVar17[1] = 0;
                plVar17[2] = 0;
                lVar16 = FUN_0078d840(uVar26);
                *plVar17 = lVar16;
                lVar16 = FUN_00795214();
                lVar20 = *plVar17;
                plVar17[1] = lVar16;
                if ((lVar20 != 0) && (lVar16 != 0)) {
                  lVar16 = FUN_00795868(lVar11,plVar17);
                  if (lVar16 != 0) goto LAB_0083b04c;
                  lVar20 = *plVar17;
                }
                FUN_0076c804(lVar20);
                FUN_00795370(plVar17[1],FUN_00796e84,PTR_FUN_00d526e0);
                FUN_0078cb3c(plVar17);
              }
              goto code_r0x0083ba20;
            }
          }
LAB_0083b04c:
          uVar13 = uVar13 + 1;
          uVar15 = FUN_00795280(lVar10);
        } while (uVar13 < uVar15);
      }
      iVar5 = FUN_0083bf64(plVar22,lVar11);
      FUN_00795370(lVar11,FUN_0083c078,FUN_0083bf10);
      FUN_0079b78c(lVar10);
      if (iVar5 == 0) goto LAB_0083ba3c;
    }
LAB_0083b230:
    if (((local_98 == (undefined1 *)0x0) && ((int)plVar22[1] == 0)) &&
       (lVar10 = FUN_00795280(*plVar22), lVar10 == 0)) {
      lVar10 = 0;
      uVar23 = 0x2b;
      goto LAB_0083ba48;
    }
    lVar10 = FUN_00795868(lVar8,plVar22);
    if (lVar10 == 0) goto LAB_0083b9d8;
    if (uVar24 == 0) {
      plVar17 = (long *)0x0;
LAB_0083b2dc:
      local_98 = local_98 + -(ulong)(local_98 != (undefined1 *)0x0);
      local_a0 = local_a0 + -(ulong)(local_a0 != (undefined1 *)0x0);
      local_90 = local_90 + -(ulong)(local_90 != (undefined1 *)0x0);
      plVar22 = plVar17;
    }
    else {
      local_84 = -0x55555556;
      local_d8 = FUN_007a0de4(lVar9,0x2eb,&local_84,0);
      if ((local_d8 == 0) && (local_84 != -1)) {
        lVar10 = 0;
        local_d8 = 0;
LAB_0083b294:
        plVar17 = (long *)0x0;
      }
      else if (local_d8 == 0) {
LAB_0083b66c:
        lVar11 = FUN_00795214();
        lVar10 = 0;
        local_d8 = 0;
        plVar17 = (long *)0x0;
        if (lVar11 != 0) {
LAB_0083b684:
          local_d8 = lVar11;
          lVar11 = FUN_00795280(*plVar22);
          if (lVar11 != 0) {
            uVar13 = 0;
            do {
              puVar12 = (undefined8 *)FUN_007952e0(*plVar22,uVar13);
              if (*(int *)(puVar12 + 2) == 0) {
                plVar17 = (long *)FUN_0079df68();
                if (plVar17 == (long *)0x0) goto LAB_0083b294;
                lVar11 = FUN_0078d840(*puVar12);
                *plVar17 = lVar11;
                lVar11 = FUN_0078d840(*puVar12);
                plVar17[1] = lVar11;
                if (((*plVar17 == 0) || (lVar11 == 0)) ||
                   (lVar11 = FUN_00795868(local_d8,plVar17), lVar11 == 0)) {
                  FUN_0079df78(plVar17);
                  goto LAB_0083b294;
                }
              }
              uVar13 = uVar13 + 1;
              uVar15 = FUN_00795280(*plVar22);
            } while (uVar13 < uVar15);
          }
          FUN_00795bd8(local_d8,FUN_0083c124);
          FUN_00795a0c(local_d8,FUN_0083c13c);
          plVar17 = (long *)FUN_0078c9d4(0x10);
          if (plVar17 != (long *)0x0) {
            *plVar17 = 0;
            plVar17[1] = 0;
            lVar11 = FUN_007951a4(FUN_0083be54);
            *plVar17 = lVar11;
            if (lVar11 == 0) {
              FUN_00795370(0,FUN_0083c078,FUN_0083bf10);
              FUN_0078cb3c(plVar17);
              plVar17 = (long *)0x0;
            }
            else {
              *(int *)(plVar17 + 1) = (int)plVar22[1];
              lVar11 = FUN_00795280(local_d8);
              if (lVar11 != 0) {
                uVar13 = 0;
                plVar21 = (long *)0x0;
                do {
                  puVar12 = (undefined8 *)FUN_007952e0(local_d8,uVar13);
                  if ((int)plVar22[1] != 0) {
LAB_0083b7c4:
                    if ((plVar21 == (long *)0x0) ||
                       (iVar5 = FUN_0078d950(*plVar21,puVar12[1]), iVar5 != 0)) {
                      uVar26 = puVar12[1];
                      plVar21 = (long *)FUN_0078c9d4(0x18);
                      if (plVar21 != (long *)0x0) {
                        *plVar21 = 0;
                        plVar21[1] = 0;
                        plVar21[2] = 0;
                        lVar11 = FUN_0078d840(uVar26);
                        *plVar21 = lVar11;
                        lVar11 = FUN_00795214();
                        plVar21[1] = lVar11;
                        puVar3 = PTR_FUN_00d526e0;
                        lVar16 = *plVar21;
                        if ((lVar16 != 0) && (lVar11 != 0)) {
                          lVar11 = FUN_00795868(*plVar17,plVar21);
                          if (lVar11 != 0) goto LAB_0083b82c;
                          lVar16 = *plVar21;
                        }
                        FUN_0076c804(lVar16);
                        FUN_00795370(plVar21[1],FUN_00796e84,puVar3);
                        FUN_0078cb3c(plVar21);
                      }
                    }
                    else {
LAB_0083b82c:
                      lVar11 = FUN_00795868(plVar21[1],*puVar12);
                      if (lVar11 != 0) {
                        *puVar12 = 0;
                        goto LAB_0083b794;
                      }
                    }
                    FUN_00795370(*plVar17,FUN_0083c078,FUN_0083bf10);
                    FUN_0078cb3c(plVar17);
LAB_0083b620:
                    plVar17 = (long *)0x0;
                    goto LAB_0083b298;
                  }
                  local_78 = (undefined1 *)*puVar12;
                  local_80 = &DAT_aaaaaaaaaaaaaaaa;
                  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
                  local_70 = &DAT_aaaaaaaaaaaaaaaa;
                  iVar5 = FUN_0079568c(*plVar22,&local_80,&local_78,FUN_0083c044);
                  if ((iVar5 != 0) && (lVar11 = FUN_007952e0(*plVar22,local_80), lVar11 != 0))
                  goto LAB_0083b7c4;
LAB_0083b794:
                  uVar13 = uVar13 + 1;
                  uVar15 = FUN_00795280(local_d8);
                } while (uVar13 < uVar15);
              }
              FUN_00795a0c(*plVar17,FUN_0083c044);
            }
          }
        }
      }
      else {
        lVar10 = FUN_00795280(local_d8);
        if (lVar10 == 0) {
          FUN_00777eb4(0xb,0,0x90,"../../third_party/boringssl/src/crypto/x509/policy.cc",0x17a);
          lVar10 = 0;
          goto LAB_0083b294;
        }
        lVar10 = FUN_00795280(local_d8);
        if (lVar10 != 0) {
          uVar13 = 0;
          do {
            puVar12 = (undefined8 *)FUN_007952e0(local_d8,uVar13);
            iVar5 = FUN_0078d994(*puVar12);
            if ((iVar5 == 0x2ea) || (iVar5 = FUN_0078d994(puVar12[1]), iVar5 == 0x2ea)) {
              lVar10 = 0;
              goto LAB_0083b620;
            }
            uVar13 = uVar13 + 1;
            uVar15 = FUN_00795280(local_d8);
          } while (uVar13 < uVar15);
        }
        FUN_00795bd8(local_d8,FUN_0083c088);
        FUN_00795a0c(local_d8,FUN_0083c13c);
        if (local_a0 == (undefined1 *)0x0) {
          FUN_007955ec(*plVar22,FUN_0083c030,FUN_0083c0a0,local_d8);
          FUN_00795370(local_d8,FUN_0079df88,PTR_FUN_00d52870);
          goto LAB_0083b66c;
        }
        lVar10 = FUN_00795214();
        if (lVar10 == 0) {
          lVar10 = 0;
        }
        else {
          lVar11 = FUN_00795280(local_d8);
          if (lVar11 != 0) {
            uVar13 = 0;
            puVar25 = (undefined1 *)0x0;
            do {
              puVar12 = (undefined8 *)FUN_007952e0(local_d8,uVar13);
              if ((puVar25 == (undefined1 *)0x0) ||
                 (iVar5 = FUN_0078d950(*puVar12,puVar25), iVar5 != 0)) {
                puVar25 = (undefined1 *)*puVar12;
                puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
                local_70 = &DAT_aaaaaaaaaaaaaaaa;
                local_80 = &DAT_aaaaaaaaaaaaaaaa;
                local_78 = puVar25;
                iVar5 = FUN_0079568c(*plVar22,&local_80,&local_78,FUN_0083c044);
                if ((iVar5 == 0) ||
                   (plVar17 = (long *)FUN_007952e0(*plVar22,local_80), plVar17 == (long *)0x0)) {
                  if ((int)plVar22[1] != 0) {
                    uVar26 = *puVar12;
                    plVar17 = (long *)FUN_0078c9d4(0x18);
                    if (plVar17 != (long *)0x0) {
                      *plVar17 = 0;
                      plVar17[1] = 0;
                      plVar17[2] = 0;
                      lVar11 = FUN_0078d840(uVar26);
                      *plVar17 = lVar11;
                      lVar11 = FUN_00795214();
                      lVar16 = *plVar17;
                      plVar17[1] = lVar11;
                      if ((lVar16 != 0) && (lVar11 != 0)) {
                        lVar11 = FUN_00795868(lVar10,plVar17);
                        if (lVar11 != 0) goto LAB_0083b510;
                        lVar16 = *plVar17;
                      }
                      FUN_0076c804(lVar16);
                      FUN_00795370(plVar17[1],FUN_00796e84,PTR_FUN_00d526e0);
                      FUN_0078cb3c(plVar17);
                    }
                    plVar17 = (long *)0x0;
                    goto LAB_0083b298;
                  }
                }
                else {
LAB_0083b510:
                  *(undefined4 *)(plVar17 + 2) = 1;
                }
              }
              uVar13 = uVar13 + 1;
              uVar15 = FUN_00795280(local_d8);
            } while (uVar13 < uVar15);
          }
          iVar5 = FUN_0083bf64(plVar22,lVar10);
          lVar11 = local_d8;
          if (iVar5 != 0) goto LAB_0083b684;
        }
        plVar17 = (long *)0x0;
      }
LAB_0083b298:
      FUN_00795370(local_d8,FUN_0079df88,PTR_FUN_00d52870);
      FUN_00795370(lVar10,FUN_0083c078,FUN_0083bf10);
      if (plVar17 == (long *)0x0) {
        lVar10 = 0;
        *param_4 = lVar9;
        uVar23 = 0x2a;
        goto LAB_0083bb10;
      }
      plVar22 = plVar17;
      if ((uVar2 >> 5 & 1) == 0) goto LAB_0083b2dc;
    }
    local_80 = (undefined1 *)CONCAT44(local_80._4_4_,0xaaaaaaaa);
    plVar17 = (long *)FUN_007a0de4(lVar9,0x191,&local_80,0);
    if ((plVar17 == (long *)0x0) && ((int)local_80 != -1)) goto LAB_0083ba3c;
    if (plVar17 != (long *)0x0) {
      if (*plVar17 == 0) {
        lVar10 = plVar17[1];
        if (lVar10 == 0) {
          uVar26 = 0x22f;
          goto LAB_0083bb94;
        }
LAB_0083b450:
        if ((*(byte *)(lVar10 + 5) & 1) != 0) goto LAB_0083baa8;
        local_78 = &DAT_aaaaaaaaaaaaaaaa;
        iVar5 = FUN_0076cda8(&local_78);
        puVar25 = local_78;
        if (local_a0 <= local_78) {
          puVar25 = local_a0;
        }
        if (iVar5 != 0) {
          local_a0 = puVar25;
        }
        FUN_00777808();
      }
      else {
        if ((*(byte *)(*plVar17 + 5) & 1) != 0) {
LAB_0083baa8:
          uVar26 = 0x210;
LAB_0083bb94:
          FUN_00777eb4(0xb,0,0x90,"../../third_party/boringssl/src/crypto/x509/policy.cc",uVar26);
          FUN_0079dcfc(plVar17);
          goto LAB_0083ba3c;
        }
        local_78 = &DAT_aaaaaaaaaaaaaaaa;
        iVar5 = FUN_0076cda8(&local_78);
        puVar25 = local_78;
        if (local_98 <= local_78) {
          puVar25 = local_98;
        }
        if (iVar5 != 0) {
          local_98 = puVar25;
        }
        FUN_00777808();
        lVar10 = plVar17[1];
        if (lVar10 != 0) goto LAB_0083b450;
      }
      FUN_0079dcfc(plVar17);
    }
    lVar10 = FUN_007a0de4(lVar9,0x2ec,&local_80,0);
    if ((lVar10 == 0) && ((int)local_80 != -1)) goto LAB_0083ba3c;
    if (lVar10 != 0) {
      if ((*(byte *)(lVar10 + 5) & 1) != 0) {
        FUN_00777eb4(0xb,0,0x90,"../../third_party/boringssl/src/crypto/x509/policy.cc",0x210);
        thunk_FUN_007695a4(lVar10);
        goto LAB_0083ba3c;
      }
      local_78 = &DAT_aaaaaaaaaaaaaaaa;
      iVar5 = FUN_0076cda8(&local_78,lVar10);
      puVar25 = local_78;
      if (local_90 <= local_78) {
        puVar25 = local_90;
      }
      if (iVar5 != 0) {
        local_90 = puVar25;
      }
      FUN_00777808();
    }
    thunk_FUN_007695a4(lVar10);
    uVar24 = uVar24 - 1;
  } while (uVar24 < uVar7);
  if (local_98 == (undefined1 *)0x0) {
    if (param_2 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = FUN_00795978();
      if (lVar10 == 0) {
        uVar23 = 0x11;
        goto LAB_0083ba48;
      }
      FUN_00795bd8(lVar10,FUN_0083bdf8);
      FUN_00795a0c(lVar10,FUN_0083c170);
    }
    uVar24 = FUN_00795280(lVar8);
    uVar7 = uVar24 - 1;
    puVar12 = (undefined8 *)FUN_007952e0(lVar8,uVar24 - 1);
    if ((*(int *)(puVar12 + 1) == 0) && (lVar9 = FUN_00795280(*puVar12), lVar9 == 0)) {
      uVar23 = 0x2b;
    }
    else {
      lVar9 = FUN_00795280(lVar10);
      lVar11 = FUN_00795280(lVar10);
      if (lVar11 != 0) {
        uVar13 = 0;
        do {
          FUN_007952e0(lVar10,uVar13);
          iVar5 = FUN_0078d994();
          if (iVar5 == 0x2ea) goto LAB_0083bc50;
          uVar13 = uVar13 + 1;
          uVar15 = FUN_00795280(lVar10);
        } while (uVar13 < uVar15);
      }
      if ((lVar9 == 0) || (*(int *)(puVar12 + 1) != 0)) {
LAB_0083bc50:
        uVar23 = 0;
      }
      else {
        lVar9 = FUN_00795280(*puVar12);
        if (lVar9 != 0) {
          uVar13 = 0;
          do {
            lVar9 = FUN_007952e0(*puVar12,uVar13);
            *(undefined4 *)(lVar9 + 0x14) = 1;
            uVar13 = uVar13 + 1;
            uVar15 = FUN_00795280(*puVar12);
          } while (uVar13 < uVar15);
        }
        if (uVar24 == 0) {
          uVar23 = 0x2b;
        }
        else {
          do {
            puVar12 = (undefined8 *)FUN_007952e0(lVar8,uVar7);
            lVar9 = FUN_00795280(*puVar12);
            if (lVar9 != 0) {
              uVar13 = 0;
              do {
                puVar14 = (undefined8 *)FUN_007952e0(*puVar12,uVar13);
                if (*(int *)((long)puVar14 + 0x14) != 0) {
                  lVar9 = FUN_00795280(puVar14[1]);
                  if (lVar9 == 0) {
                    iVar5 = FUN_0079568c(lVar10,0,*puVar14,FUN_0083c170);
                    if (iVar5 != 0) goto LAB_0083bc50;
                  }
                  else if (uVar7 != 0) {
                    puVar18 = (undefined8 *)FUN_007952e0(lVar8,uVar7 - 1);
                    lVar9 = FUN_00795280(puVar14[1]);
                    if (lVar9 != 0) {
                      uVar15 = 0;
                      do {
                        local_78 = (undefined1 *)FUN_007952e0(puVar14[1],uVar15);
                        local_80 = &DAT_aaaaaaaaaaaaaaaa;
                        puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
                        local_70 = &DAT_aaaaaaaaaaaaaaaa;
                        iVar5 = FUN_0079568c(*puVar18,&local_80,&local_78,FUN_0083c044);
                        if ((iVar5 != 0) && (lVar9 = FUN_007952e0(*puVar18,local_80), lVar9 != 0)) {
                          *(undefined4 *)(lVar9 + 0x14) = 1;
                        }
                        uVar15 = uVar15 + 1;
                        uVar19 = FUN_00795280(puVar14[1]);
                      } while (uVar15 < uVar19);
                    }
                  }
                }
                uVar13 = uVar13 + 1;
                uVar15 = FUN_00795280(*puVar12);
              } while (uVar13 < uVar15);
            }
            uVar7 = uVar7 - 1;
            uVar23 = 0x2b;
          } while (uVar7 < uVar24);
        }
      }
    }
  }
  else {
    lVar10 = 0;
    uVar23 = 0;
  }
LAB_0083ba48:
  if (plVar22 != (long *)0x0) {
    FUN_00795370(*plVar22,FUN_0083c078,FUN_0083bf10);
    FUN_0078cb3c(plVar22);
  }
LAB_0083bb10:
  FUN_00795334(lVar10);
  FUN_00795370(lVar8,FUN_0083c1a4,FUN_0083be08);
  return uVar23;
}


// ===== 0083bdf8  FUN_0083bdf8 =====

void FUN_0083bdf8(undefined8 *param_1,undefined8 *param_2)

{
  FUN_0078d950(*param_1,*param_2);
  return;
}


// ===== 0083be08  FUN_0083be08 =====

void FUN_0083be08(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_00795370(*param_1,FUN_0083c078,FUN_0083bf10);
    FUN_0078cb3c(param_1);
    return;
  }
  return;
}


// ===== 0083be54  FUN_0083be54 =====

void FUN_0083be54(undefined8 *param_1,undefined8 *param_2)

{
  FUN_0078d950(*(undefined8 *)*param_1,*(undefined8 *)*param_2);
  return;
}


// ===== 0083be6c  FUN_0083be6c =====

void FUN_0083be6c(undefined8 *param_1,undefined8 *param_2)

{
  FUN_0078d950(*(undefined8 *)*param_1,*(undefined8 *)*param_2);
  return;
}


// ===== 0083be84  FUN_0083be84 =====

undefined8 FUN_0083be84(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_30;
  undefined1 *puStack_28;
  
  local_30 = *param_1;
  puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
  iVar1 = FUN_0079568c(param_2,0,&local_30,FUN_0083bffc);
  if (iVar1 == 0) {
    if (param_1 != (undefined8 *)0x0) {
      FUN_0076c804(*param_1);
      FUN_00795370(param_1[1],FUN_00796e84,PTR_FUN_00d526e0);
      FUN_0078cb3c(param_1);
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


// ===== 0083bf10  FUN_0083bf10 =====

void FUN_0083bf10(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_0076c804(*param_1);
    FUN_00795370(param_1[1],FUN_00796e84,PTR_FUN_00d526e0);
    FUN_0078cb3c(param_1);
    return;
  }
  return;
}


// ===== 0083bf64  FUN_0083bf64 =====

undefined8 FUN_0083bf64(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar1 = FUN_00795280(param_2);
  if (lVar1 != 0) {
    uVar4 = 0;
    do {
      uVar2 = FUN_007952e0(param_2,uVar4);
      lVar1 = FUN_00795868(*param_1,uVar2);
      if (lVar1 == 0) {
        return 0;
      }
      FUN_00795308(param_2,uVar4,0);
      uVar4 = uVar4 + 1;
      uVar3 = FUN_00795280(param_2);
    } while (uVar4 < uVar3);
  }
  FUN_00795a0c(*param_1,FUN_0083c044);
  return 1;
}


// ===== 0083bffc  FUN_0083bffc =====

void FUN_0083bffc(code *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = param_3;
  uStack_18 = param_2;
  (*param_1)(&uStack_18,&local_20);
  return;
}


// ===== 0083c030  FUN_0083c030 =====

void FUN_0083c030(code *UNRECOVERED_JUMPTABLE,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0083c040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2,param_3);
  return;
}


// ===== 0083c044  FUN_0083c044 =====

void FUN_0083c044(code *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = param_3;
  uStack_18 = param_2;
  (*param_1)(&uStack_18,&local_20);
  return;
}


// ===== 0083c078  FUN_0083c078 =====

void FUN_0083c078(code *UNRECOVERED_JUMPTABLE,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0083c084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}


// ===== 0083c088  FUN_0083c088 =====

void FUN_0083c088(undefined8 *param_1,undefined8 *param_2)

{
  FUN_0078d950(*(undefined8 *)*param_1,*(undefined8 *)*param_2);
  return;
}


// ===== 0083c0a0  FUN_0083c0a0 =====

undefined8 FUN_0083c0a0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_30;
  undefined1 *puStack_28;
  
  local_30 = *param_1;
  puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
  uVar1 = FUN_0079568c(param_2,0,&local_30,FUN_0083c13c);
  if ((int)uVar1 != 0) {
    if (param_1 != (undefined8 *)0x0) {
      FUN_0076c804(*param_1);
      FUN_00795370(param_1[1],FUN_00796e84,PTR_FUN_00d526e0);
      FUN_0078cb3c(param_1);
    }
    uVar1 = 1;
  }
  return uVar1;
}


// ===== 0083c124  FUN_0083c124 =====

void FUN_0083c124(long *param_1,long *param_2)

{
  FUN_0078d950(*(undefined8 *)(*param_1 + 8),*(undefined8 *)(*param_2 + 8));
  return;
}


// ===== 0083c13c  FUN_0083c13c =====

void FUN_0083c13c(code *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = param_3;
  uStack_18 = param_2;
  (*param_1)(&uStack_18,&local_20);
  return;
}


// ===== 0083c170  FUN_0083c170 =====

void FUN_0083c170(code *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = param_3;
  uStack_18 = param_2;
  (*param_1)(&uStack_18,&local_20);
  return;
}


// ===== 0083c1a4  FUN_0083c1a4 =====

void FUN_0083c1a4(code *UNRECOVERED_JUMPTABLE,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0083c1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}


// ===== 0083c1b4  FUN_0083c1b4 =====

void FUN_0083c1b4(undefined8 param_1,undefined8 param_2)

{
  FUN_0078f91c(thunk_FUN_007795fc,"PUBLIC KEY",param_1,param_2,0,0,0,0,0);
  return;
}


// ===== 0083c204  thunk_FUN_007795fc =====

void thunk_FUN_007795fc(void)

{
  FUN_007795fc();
  return;
}


// ===== 0083c20c  FUN_0083c20c =====

long FUN_0083c20c(undefined8 param_1,long *param_2,code *param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  char *__s1;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 *local_468;
  undefined8 local_460;
  undefined8 local_458;
  char *local_450;
  undefined1 auStack_448 [1024];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_450 = (char *)0x0;
  local_468 = &DAT_aaaaaaaaaaaaaaaa;
  local_460 = 0;
  iVar3 = FUN_0078e850(&local_460,&local_468,&local_450,"ANY PRIVATE KEY",param_1,param_3,param_4);
  __s1 = local_450;
  if (iVar3 == 0) {
    lVar6 = 0;
    goto LAB_0083c42c;
  }
  local_458 = local_460;
  iVar3 = strcmp(local_450,"PRIVATE KEY");
  if (iVar3 == 0) {
    lVar5 = FUN_007a2de4(0,&local_458,local_468);
joined_r0x0083c30c:
    if (lVar5 != 0) {
      lVar6 = FUN_007a2e14(lVar5);
      if (param_2 != (long *)0x0) {
        if (*param_2 != 0) {
          FUN_00778828();
        }
        *param_2 = lVar6;
      }
      FUN_007a2e04(lVar5);
      if (lVar6 != 0) goto LAB_0083c41c;
    }
LAB_0083c3fc:
    FUN_00777eb4(9,0,0xc,"../../third_party/boringssl/src/crypto/pem/pem_pkey.cc",0x66);
LAB_0083c418:
    lVar6 = 0;
  }
  else {
    iVar3 = strcmp(__s1,"ENCRYPTED PRIVATE KEY");
    if (iVar3 == 0) {
      memset(auStack_448,0xaa,0x400);
      lVar6 = FUN_007a6fb8(0,&local_458,local_468);
      if (lVar6 == 0) goto LAB_0083c3fc;
      pcVar1 = (code *)PTR_FUN_00d52778;
      if (param_3 != (code *)0x0) {
        pcVar1 = param_3;
      }
      iVar3 = (*pcVar1)(auStack_448,0x400,0,param_4);
      if (-1 < iVar3) {
        lVar5 = FUN_007a2fdc(lVar6,auStack_448,iVar3);
        FUN_007a6fd8(lVar6);
        FUN_0078cba8(auStack_448,iVar3);
        goto joined_r0x0083c30c;
      }
      FUN_00777eb4(9,0,0x68,"../../third_party/boringssl/src/crypto/pem/pem_pkey.cc",0x48);
      FUN_007a6fd8(lVar6);
      goto LAB_0083c418;
    }
    iVar3 = strcmp(__s1,"RSA PRIVATE KEY");
    if (iVar3 == 0) {
      uVar4 = 6;
    }
    else {
      iVar3 = strcmp(__s1,"EC PRIVATE KEY");
      if (iVar3 == 0) {
        uVar4 = 0x198;
      }
      else {
        iVar3 = strcmp(__s1,"DSA PRIVATE KEY");
        if (iVar3 != 0) goto LAB_0083c3fc;
        uVar4 = 0x74;
      }
    }
    lVar6 = FUN_007792dc(uVar4,param_2,&local_458,local_468);
    if (lVar6 == 0) goto LAB_0083c3fc;
  }
LAB_0083c41c:
  FUN_0078cb3c(local_450);
  FUN_0078cb3c(local_460);
LAB_0083c42c:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar6;
}


// ===== 0083c488  thunk_FUN_0083c6dc =====

void thunk_FUN_0083c6dc(void)

{
  FUN_0083c6dc();
  return;
}


// ===== 0083c490  FUN_0083c490 =====

undefined4
FUN_0083c490(undefined8 param_1,undefined8 param_2,int param_3,int param_4,long param_5,
            undefined1 *param_6,int param_7,code *param_8,undefined8 param_9)

{
  code *pcVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_470 [1024];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  lVar4 = FUN_007a2eb4(param_2);
  if (lVar4 == 0) {
    FUN_00777eb4(9,0,0x6a,"../../third_party/boringssl/src/crypto/pem/pem_pk8.cc",0x45);
    uVar3 = 0;
    goto LAB_0083c674;
  }
  if ((param_4 == -1) && (param_5 == 0)) {
    if (param_3 == 0) {
      uVar3 = FUN_0078f91c(thunk_FUN_007a2df4,"PRIVATE KEY",param_1,lVar4,0,0,0,0,0);
    }
    else {
      uVar3 = FUN_007a2094(param_1,lVar4);
    }
    FUN_007a2e04(lVar4);
    goto LAB_0083c674;
  }
  memset(auStack_470,0xaa,0x400);
  if (param_6 == (undefined1 *)0x0) {
    pcVar1 = (code *)PTR_FUN_00d52778;
    if (param_8 != (code *)0x0) {
      pcVar1 = param_8;
    }
    param_7 = (*pcVar1)(auStack_470,0x400,1,param_9);
    if (param_7 < 0) {
      FUN_00777eb4(9,0,0x6f,"../../third_party/boringssl/src/crypto/pem/pem_pk8.cc",0x4f);
      FUN_007a2e04(lVar4);
      uVar3 = 0;
      goto LAB_0083c674;
    }
    uVar5 = FUN_007a30a8(param_4,param_5,auStack_470,param_7,0,0,0,lVar4);
LAB_0083c5d0:
    FUN_0078cba8(auStack_470,(long)param_7);
  }
  else {
    uVar5 = FUN_007a30a8(param_4,param_5,param_6,param_7,0,0,0,lVar4);
    if (param_6 == auStack_470) goto LAB_0083c5d0;
  }
  FUN_007a2e04(lVar4);
  if (param_3 == 0) {
    uVar3 = FUN_0078f91c(thunk_FUN_007a6fc8,"ENCRYPTED PRIVATE KEY",param_1,uVar5,0,0,0,0,0);
  }
  else {
    uVar3 = FUN_007a202c(param_1,uVar5);
  }
  FUN_007a6fd8(uVar5);
LAB_0083c674:
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}


// ===== 0083c6dc  FUN_0083c6dc =====

void FUN_0083c6dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_0083c490(param_1,param_2,0,0xffffffff,param_3,param_4,param_5,param_6,param_7);
  return;
}


// ===== 0083c720  thunk_FUN_007a6fc8 =====

void thunk_FUN_007a6fc8(void)

{
  FUN_007a6fc8();
  return;
}


// ===== 0083c728  thunk_FUN_007a2df4 =====

void thunk_FUN_007a2df4(void)

{
  FUN_007a2df4();
  return;
}


// ===== 0083c730  FUN_0083c730 =====

long * FUN_0083c730(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  char *pcVar9;
  
  uVar3 = FUN_00417e08();
  if ((uVar3 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../rtc_base/openssl_key_pair.cc",0x121,"Making key pair");
  }
  lVar4 = FUN_007787a4();
  if (*param_1 == 1) {
    iVar2 = FUN_0083435c(param_1);
    if (iVar2 == 0) {
      lVar5 = FUN_0072efdc(0x19f);
      if (lVar5 == 0) {
        FUN_00778828(lVar4);
        uVar3 = FUN_004249b0();
        if ((uVar3 & 1) != 0) goto LAB_0083c8ac;
        pcVar9 = "Failed to allocate EC key";
        uVar8 = 0x1db;
      }
      else {
        FUN_00730b58(lVar5,1);
        if (((lVar4 != 0) && (iVar2 = FUN_0073083c(lVar5), iVar2 != 0)) &&
           (iVar2 = FUN_0077b37c(lVar4,lVar5), iVar2 != 0)) goto LAB_0083c910;
        FUN_00778828(lVar4);
        FUN_0072f044(lVar5);
        uVar3 = FUN_004249b0();
        if ((uVar3 & 1) != 0) goto LAB_0083c8ac;
        pcVar9 = "Failed to make EC key pair";
        uVar8 = 0x24b;
      }
    }
    else {
      FUN_00778828(lVar4);
      uVar3 = FUN_004249b0();
      if ((uVar3 & 1) != 0) goto LAB_0083c8ac;
      pcVar9 = "ECDSA key requested for unknown curve";
      uVar8 = 0x283;
    }
  }
  else if (*param_1 == 0) {
    uVar1 = FUN_00834350(param_1);
    lVar5 = FUN_00719ff4();
    lVar6 = FUN_00742cb0();
    if (((lVar4 != 0) && (lVar5 != 0)) && (lVar6 != 0)) {
      uVar3 = FUN_00834350(param_1);
      iVar2 = FUN_00719a74(lVar5,uVar3 >> 0x20);
      if (((iVar2 != 0) && (iVar2 = FUN_0074648c(lVar6,uVar1,lVar5,0), iVar2 != 0)) &&
         (iVar2 = FUN_00788644(lVar4,lVar6), iVar2 != 0)) {
        FUN_0071a024(lVar5);
LAB_0083c910:
        uVar3 = FUN_00417e08();
        if ((uVar3 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e98,"../../rtc_base/openssl_key_pair.cc",0x2c9,"Returning key pair"
                      );
        }
        plVar7 = (long *)operator_new(8);
        *plVar7 = lVar4;
        return plVar7;
      }
    }
    FUN_00778828(lVar4);
    FUN_0071a024(lVar5);
    FUN_00743408(lVar6);
    uVar3 = FUN_004249b0();
    if ((uVar3 & 1) != 0) goto LAB_0083c8ac;
    pcVar9 = "Failed to make RSA key pair";
    uVar8 = 0x18b;
  }
  else {
    FUN_00778828(lVar4);
    uVar3 = FUN_004249b0();
    if ((uVar3 & 1) != 0) goto LAB_0083c8ac;
    pcVar9 = "Key type requested not understood";
    uVar8 = 0x2ab;
  }
  FUN_00623bb0(&DAT_001f4e98,"../../rtc_base/openssl_key_pair.cc",uVar8,pcVar9);
LAB_0083c8ac:
  FUN_00836c80("Generating key pair",0x13);
  return (long *)0x0;
}


// ===== 0083c9b0  FUN_0083c9b0 =====

long * FUN_0083c9b0(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  char *pcVar7;
  
  lVar2 = FUN_0076fe7c();
  if (lVar2 == 0) {
    uVar4 = FUN_004249b0();
    if ((uVar4 & 1) != 0) {
      return (long *)0x0;
    }
    pcVar7 = "Failed to create a new BIO buffer.";
    uVar6 = 0x363;
  }
  else {
    FUN_0076ff50(lVar2,0);
    lVar3 = FUN_0083c20c(lVar2,0,0,0);
    FUN_0076f794(lVar2);
    if (lVar3 != 0) {
      iVar1 = FUN_00778a10(lVar3);
      if (iVar1 != 0) {
        uVar4 = FUN_004249b0();
        if ((uVar4 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e98,"../../rtc_base/openssl_key_pair.cc",0x3bb,
                       "The resulting key pair is missing public key parameters.");
        }
        FUN_00778828(lVar3);
        return (long *)0x0;
      }
      plVar5 = (long *)operator_new(8);
      *plVar5 = lVar3;
      return plVar5;
    }
    uVar4 = FUN_004249b0();
    if ((uVar4 & 1) != 0) {
      return (long *)0x0;
    }
    pcVar7 = "Failed to create the private key from PEM string.";
    uVar6 = 0x39b;
  }
  FUN_00623bb0(&DAT_001f4e98,"../../rtc_base/openssl_key_pair.cc",uVar6,pcVar7);
  return (long *)0x0;
}


// ===== 0083caac  FUN_0083caac =====

void FUN_0083caac(undefined8 *param_1)

{
  FUN_00778828(*param_1);
  return;
}


// ===== 0083cab8  FUN_0083cab8 =====

void FUN_0083cab8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  FUN_00778898(*param_1);
  puVar1 = (undefined8 *)operator_new(8);
  *puVar1 = *param_1;
  return;
}


// ===== 0083caf4  FUN_0083caf4 =====

void FUN_0083caf4(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *__src;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *__dest;
  undefined8 *local_28;
  
  FUN_0076ff2c();
  lVar4 = FUN_0076f70c();
  if (lVar4 == 0) {
    uVar5 = FUN_004249b0();
    if ((uVar5 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4ead,"../../rtc_base/openssl_key_pair.cc",0x47b,"PrivateKeyToPEMString",
                   &DAT_001c4dc3,"Failed to allocate temporary memory bio");
    }
  }
  else {
    iVar3 = thunk_FUN_0083c6dc(lVar4,*param_2,0,0,0,0,0);
    if (iVar3 != 0) {
      local_28 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
      uVar5 = FUN_0076ff3c(lVar4,&local_28);
      __src = local_28;
      param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
      *param_1 = &DAT_aaaaaaaaaaaaaaaa;
      param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
      if ((uVar5 != 0) && (local_28 == (undefined8 *)0x0)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/string:1081: libc++ Hardening assertion __n == 0 || __s != nullptr failed: basic_string(const char*, n) detected nullptr\n"
                  );
      }
      if (0x7ffffffffffffff6 < uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_005d45ec();
      }
      if (uVar5 < 0x17) {
        *(char *)((long)param_1 + 0x17) = (char)uVar5;
        __dest = param_1;
      }
      else {
        uVar1 = (uVar5 & 0x7ffffffffffffff8) + 8;
        uVar2 = 0x19;
        if (uVar1 != 0x18) {
          uVar2 = uVar1;
        }
        __dest = (undefined8 *)operator_new(uVar2);
        *param_1 = __dest;
        param_1[1] = uVar5;
        param_1[2] = uVar2 | 0x8000000000000000;
      }
      if (__dest <= (undefined8 *)((long)__dest + uVar5)) {
        if ((__dest <= __src) && (__src < (undefined8 *)((long)__dest + uVar5))) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                    );
        }
        memmove(__dest,__src,uVar5);
        *(undefined1 *)((long)__dest + uVar5) = 0;
        FUN_0076f794(lVar4);
        return;
      }
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                );
    }
    uVar5 = FUN_004249b0();
    if ((uVar5 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4ead,"../../rtc_base/openssl_key_pair.cc",0x4ab,"PrivateKeyToPEMString",
                   &DAT_001c4dc3,"Failed to write private key");
    }
    FUN_0076f794(lVar4);
  }
  *(undefined1 *)((long)param_1 + 0x17) = 0;
  *(undefined1 *)param_1 = 0;
  return;
}


// ===== 0083ccd8  FUN_0083ccd8 =====

void FUN_0083ccd8(char *param_1,undefined8 *param_2)

{
  ulong uVar1;
  char *__src;
  int iVar2;
  long lVar3;
  size_t __n;
  ulong uVar4;
  char *__dest;
  char *local_28;
  
  FUN_0076ff2c();
  lVar3 = FUN_0076f70c();
  if (lVar3 == 0) {
    uVar4 = FUN_004249b0();
    if ((uVar4 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4ead,"../../rtc_base/openssl_key_pair.cc",0x523,"PublicKeyToPEMString",
                   &DAT_001c4dc3,"Failed to allocate temporary memory bio");
    }
  }
  else {
    iVar2 = FUN_0083c1b4(lVar3,*param_2);
    if (iVar2 != 0) {
      FUN_0076f9a8(lVar3,&DAT_0021f200,1);
      local_28 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_0076ff3c(lVar3,&local_28);
      __src = local_28;
      *(undefined1 **)(param_1 + 8) = &DAT_aaaaaaaaaaaaaaaa;
      *(undefined1 **)param_1 = &DAT_aaaaaaaaaaaaaaaa;
      *(undefined1 **)(param_1 + 0x10) = &DAT_aaaaaaaaaaaaaaaa;
      if (local_28 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/string:1063: libc++ Hardening assertion __s != nullptr failed: basic_string(const char*) detected nullptr\n"
                  );
      }
      __n = strlen(local_28);
      if (__n < 0x7ffffffffffffff7) {
        if (__n < 0x17) {
          param_1[0x17] = (char)__n;
          __dest = param_1;
        }
        else {
          uVar4 = (__n & 0x7ffffffffffffff8) + 8;
          uVar1 = 0x19;
          if (uVar4 != 0x18) {
            uVar1 = uVar4;
          }
          __dest = (char *)operator_new(uVar1);
          *(char **)param_1 = __dest;
          *(size_t *)(param_1 + 8) = __n;
          *(ulong *)(param_1 + 0x10) = uVar1 | 0x8000000000000000;
        }
        if (__dest <= __dest + __n) {
          if ((__dest <= __src) && (__src < __dest + __n)) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                      );
          }
          memmove(__dest,__src,__n);
          __dest[__n] = '\0';
          FUN_0076f794(lVar3);
          return;
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
    uVar4 = FUN_004249b0();
    if ((uVar4 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4ead,"../../rtc_base/openssl_key_pair.cc",0x54b,"PublicKeyToPEMString",
                   &DAT_001c4dc3,"Failed to write public key");
    }
    FUN_0076f794(lVar3);
  }
  param_1[0x17] = '\0';
  *param_1 = '\0';
  return;
}


// ===== 0083cec0  FUN_0083cec0 =====

undefined * FUN_0083cec0(void)

{
  return &DAT_00d39c90;
}


// ===== 0083ced0  FUN_0083ced0 =====

undefined * FUN_0083ced0(void)

{
  return &DAT_00d39d50;
}


// ===== 0083cee0  FUN_0083cee0 =====

void FUN_0083cee0(long param_1)

{
  ushort uVar1;
  
  uVar1 = FUN_007f319c();
  if (uVar1 < 0x304) {
    FUN_0083096c(param_1);
    if ((**(ushort **)(param_1 + 0x38) >> 2 & 1) != 0) {
      FUN_0082d990(param_1);
      return;
    }
  }
  return;
}


// ===== 0083cf3c  FUN_0083cf3c =====

undefined4
FUN_0083cf3c(long param_1,uint param_2,undefined8 *param_3,undefined8 *param_4,ulong param_5)

{
  long lVar1;
  ushort uVar2;
  ushort uVar3;
  ulong uVar4;
  undefined2 *puVar5;
  byte bVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined2 *puVar11;
  long *plVar12;
  undefined1 **ppuVar13;
  ulong uVar14;
  undefined4 *puVar15;
  long lVar16;
  undefined1 **ppuVar17;
  ulong uVar18;
  undefined4 *puVar19;
  undefined4 uVar20;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long lVar21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 local_c0;
  undefined8 *puStack_b8;
  undefined8 *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 *local_80 [4];
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar4 = FUN_0082ddc8();
  if ((uVar4 & 1) != 0) {
    FUN_00777eb4(0x10,0,0xff,"../../third_party/boringssl/src/ssl/dtls_method.cc",0x4c);
    FUN_008082d0(param_1,2,10);
    if (param_3 != (undefined8 *)0x0) {
      FUN_0080af08(param_3);
      FUN_0078cb3c(param_3);
    }
    uVar20 = 0;
    goto LAB_0083d560;
  }
  uStack_a8 = 0;
  local_b0 = (undefined8 *)0x0;
  uStack_88 = 0;
  local_90 = 0;
  local_80[1] = &DAT_aaaaaaaaaaaaaaaa;
  local_80[0] = &DAT_aaaaaaaaaaaaaaaa;
  local_80[3] = &DAT_aaaaaaaaaaaaaaaa;
  local_80[2] = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = 0xaaaaaaaaaaaa0000;
  uStack_98 = 0;
  local_a0 = 0;
  puStack_b8 = param_3;
  if (0x30 < param_5) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (param_5 != 0) {
    puVar7 = param_4;
    ppuVar13 = local_80;
    if ((3 < param_5) && (0xf < (ulong)((long)local_80 - (long)param_4))) {
      if (param_5 < 0x10) {
        uVar4 = 0;
      }
      else {
        uVar4 = param_5 & 0x30;
        local_80[1] = (undefined1 *)param_4[1];
        local_80[0] = (undefined1 *)*param_4;
        if (uVar4 != 0x10) {
          local_80[3] = (undefined1 *)param_4[3];
          local_80[2] = (undefined1 *)param_4[2];
          if (uVar4 != 0x20) {
            puStack_58 = (undefined1 *)param_4[5];
            local_60 = (undefined1 *)param_4[4];
          }
        }
        if (param_5 == uVar4) goto LAB_0083d038;
        if ((param_5 & 0xc) == 0) {
          puVar7 = (undefined8 *)((long)param_4 + uVar4);
          ppuVar13 = (undefined1 **)((long)local_80 + uVar4);
          goto LAB_0083d024;
        }
      }
      uVar14 = param_5 & 0x3c;
      lVar16 = uVar4 - uVar14;
      puVar15 = (undefined4 *)((long)param_4 + uVar4);
      puVar19 = (undefined4 *)((long)local_80 + uVar4);
      do {
        lVar16 = lVar16 + 4;
        *puVar19 = *puVar15;
        puVar15 = puVar15 + 1;
        puVar19 = puVar19 + 1;
      } while (lVar16 != 0);
      puVar7 = (undefined8 *)((long)param_4 + uVar14);
      ppuVar13 = (undefined1 **)((long)local_80 + uVar14);
      if (param_5 == uVar14) goto LAB_0083d038;
    }
LAB_0083d024:
    do {
      puVar8 = (undefined8 *)((long)puVar7 + 1);
      *(undefined1 *)ppuVar13 = *(undefined1 *)puVar7;
      puVar7 = puVar8;
      ppuVar13 = (undefined1 **)((long)ppuVar13 + 1);
    } while (puVar8 != (undefined8 *)((long)param_4 + param_5));
  }
LAB_0083d038:
  local_50 = (undefined1 *)CONCAT71(local_50._1_7_,(char)param_5);
  if (param_2 < 3) {
LAB_0083d044:
    local_c0 = CONCAT62(local_c0._2_6_,(short)param_2);
    uVar2 = FUN_007f319c(param_1);
    puVar7 = puStack_b8;
    if (0x303 < uVar2) {
      puVar8 = (undefined8 *)FUN_00816190(*puStack_b8,param_4,param_5);
      puVar7 = local_b0;
      if (local_b0 != (undefined8 *)0x0) {
        puVar9 = (undefined8 *)*local_b0;
        local_b0 = puVar8;
        (*(code *)*puVar9)(puVar7);
        FUN_0078cb3c(puVar7);
        puVar8 = local_b0;
      }
      local_b0 = puVar8;
      if (local_b0 != (undefined8 *)0x0) {
        puVar5 = (undefined2 *)FUN_0078c954(0x78);
        puVar8 = local_b0;
        puVar7 = puStack_b8;
        if (puVar5 != (undefined2 *)0x0) {
          *puVar5 = (undefined2)local_c0;
          puStack_b8 = (undefined8 *)0x0;
          *(undefined8 **)(puVar5 + 4) = puVar7;
          local_b0 = (undefined8 *)0x0;
          *(undefined8 **)(puVar5 + 8) = puVar8;
          *(undefined8 *)(puVar5 + 0x1c) = uStack_88;
          *(undefined8 *)(puVar5 + 0x18) = local_90;
          *(undefined8 *)(puVar5 + 0x14) = uStack_98;
          *(undefined8 *)(puVar5 + 0x10) = local_a0;
          *(undefined8 *)(puVar5 + 0xc) = uStack_a8;
          uVar4 = (ulong)local_50 & 0xff;
          if ((byte)local_50 == 0) {
            bVar6 = 0;
          }
          else {
            puVar11 = puVar5 + 0x20;
            ppuVar13 = local_80;
            bVar6 = (byte)local_50;
            if ((7 < (byte)local_50) && (0x1f < (ulong)((long)puVar5 - (long)&local_c0))) {
              if ((byte)local_50 < 0x20) {
                uVar14 = 0;
              }
              else {
                uVar14 = (ulong)local_50 & 0xe0;
                *(undefined1 **)(puVar5 + 0x24) = local_80[1];
                *(undefined1 **)(puVar5 + 0x20) = local_80[0];
                *(undefined1 **)(puVar5 + 0x2c) = local_80[3];
                *(undefined1 **)(puVar5 + 0x28) = local_80[2];
                if (uVar14 != 0x20) {
                  *(undefined1 **)(puVar5 + 0x34) = puStack_58;
                  *(undefined1 **)(puVar5 + 0x30) = local_60;
                  *(long *)(puVar5 + 0x3c) = local_48;
                  *(undefined1 **)(puVar5 + 0x38) = local_50;
                  if (uVar14 != 0x40) {
                    *(undefined8 *)(puVar5 + 0x44) = unaff_x30;
                    *(undefined8 *)(puVar5 + 0x40) = unaff_x29;
                    *(undefined8 *)(puVar5 + 0x4c) = unaff_x23;
                    *(undefined8 *)(puVar5 + 0x48) = unaff_x24;
                    if (uVar14 != 0x60) {
                      *(undefined8 *)(puVar5 + 0x54) = unaff_x21;
                      *(undefined8 *)(puVar5 + 0x50) = unaff_x22;
                      *(undefined8 *)(puVar5 + 0x5c) = unaff_x19;
                      *(undefined8 *)(puVar5 + 0x58) = unaff_x20;
                      if (uVar14 != 0x80) {
                        *(undefined8 *)(puVar5 + 100) = in_stack_00000008;
                        *(undefined8 *)(puVar5 + 0x60) = in_stack_00000000;
                        *(undefined8 *)(puVar5 + 0x6c) = in_stack_00000018;
                        *(undefined8 *)(puVar5 + 0x68) = in_stack_00000010;
                        if (uVar14 != 0xa0) {
                          *(undefined8 *)(puVar5 + 0x74) = in_stack_00000028;
                          *(undefined8 *)(puVar5 + 0x70) = in_stack_00000020;
                          *(undefined8 *)(puVar5 + 0x7c) = in_stack_00000038;
                          *(undefined8 *)(puVar5 + 0x78) = in_stack_00000030;
                          if (uVar14 != 0xc0) {
                            *(undefined8 *)(puVar5 + 0x84) = in_stack_00000048;
                            *(undefined8 *)(puVar5 + 0x80) = in_stack_00000040;
                            *(undefined8 *)(puVar5 + 0x8c) = in_stack_00000058;
                            *(undefined8 *)(puVar5 + 0x88) = in_stack_00000050;
                          }
                        }
                      }
                    }
                  }
                }
                if (uVar14 == uVar4) goto LAB_0083d4c8;
                if (((ulong)local_50 & 0x18) == 0) {
                  puVar11 = (undefined2 *)((long)puVar11 + uVar14);
                  ppuVar13 = (undefined1 **)((long)local_80 + uVar14);
                  goto LAB_0083d4b0;
                }
              }
              uVar18 = (ulong)local_50 & 0xf8;
              puVar11 = (undefined2 *)((long)puVar11 + uVar18);
              lVar16 = uVar14 - uVar18;
              puVar7 = (undefined8 *)((long)puVar5 + uVar14 + 0x40);
              puVar8 = (undefined8 *)((long)local_80 + uVar14);
              do {
                lVar16 = lVar16 + 8;
                *puVar7 = *puVar8;
                puVar7 = puVar7 + 1;
                puVar8 = puVar8 + 1;
              } while (lVar16 != 0);
              ppuVar13 = (undefined1 **)((long)local_80 + uVar18);
              if (uVar18 == uVar4) goto LAB_0083d4c8;
            }
LAB_0083d4b0:
            do {
              ppuVar17 = (undefined1 **)((long)ppuVar13 + 1);
              *(undefined1 *)puVar11 = *(undefined1 *)ppuVar13;
              puVar11 = (undefined2 *)((long)puVar11 + 1);
              ppuVar13 = ppuVar17;
            } while (ppuVar17 != (undefined1 **)((long)local_80 + uVar4));
          }
LAB_0083d4c8:
          *(byte *)(puVar5 + 0x38) = bVar6;
        }
        plVar12 = (long *)(*(long *)(param_1 + 0x38) + 0x80);
        lVar16 = *plVar12;
        *plVar12 = (long)puVar5;
        if (lVar16 != 0) {
          FUN_00826a88(plVar12);
        }
        if (*(long *)(*(long *)(param_1 + 0x38) + 0x80) != 0) goto LAB_0083d4f0;
      }
      goto LAB_0083d500;
    }
    lVar21 = *(long *)(param_1 + 0x38);
    *(undefined2 *)(lVar21 + 8) = (undefined2)local_c0;
    puStack_b8 = (undefined8 *)0x0;
    lVar16 = *(long *)(lVar21 + 0x10);
    *(undefined8 **)(lVar21 + 0x10) = puVar7;
    if (lVar16 != 0) {
      FUN_0080af08(lVar16);
      FUN_0078cb3c(lVar16);
    }
    puVar7 = local_b0;
    local_b0 = (undefined8 *)0x0;
    puVar8 = *(undefined8 **)(lVar21 + 0x18);
    *(undefined8 **)(lVar21 + 0x18) = puVar7;
    if (puVar8 != (undefined8 *)0x0) {
      (**(code **)*puVar8)(puVar8);
      FUN_0078cb3c(puVar8);
    }
    *(undefined8 *)(lVar21 + 0x40) = uStack_88;
    puVar10 = (undefined1 *)(lVar21 + 0x48);
    *(undefined8 *)(lVar21 + 0x28) = local_a0;
    *(undefined8 *)(lVar21 + 0x20) = uStack_a8;
    *(undefined8 *)(lVar21 + 0x38) = local_90;
    *(undefined8 *)(lVar21 + 0x30) = uStack_98;
    if (((ulong)*(byte *)(lVar21 + 0x78) != 0) &&
       (-(ulong)*(byte *)(lVar21 + 0x78) <= lVar21 + 0x47U)) goto LAB_0083d5b4;
    uVar4 = (ulong)local_50 & 0xff;
    if ((byte)local_50 == 0) {
      bVar6 = 0;
    }
    else {
      ppuVar13 = local_80;
      bVar6 = (byte)local_50;
      if ((7 < (byte)local_50) && (0x1f < (lVar21 - (long)&local_c0) + 8U)) {
        if ((byte)local_50 < 0x20) {
          uVar14 = 0;
        }
        else {
          uVar14 = (ulong)local_50 & 0xe0;
          *(undefined1 **)(lVar21 + 0x50) = local_80[1];
          *(undefined1 **)(lVar21 + 0x48) = local_80[0];
          *(undefined1 **)(lVar21 + 0x60) = local_80[3];
          *(undefined1 **)(lVar21 + 0x58) = local_80[2];
          if (uVar14 != 0x20) {
            *(undefined1 **)(lVar21 + 0x70) = puStack_58;
            *(undefined1 **)(lVar21 + 0x68) = local_60;
            *(long *)(lVar21 + 0x80) = local_48;
            *(undefined1 **)(lVar21 + 0x78) = local_50;
            if (uVar14 != 0x40) {
              *(undefined8 *)(lVar21 + 0x90) = unaff_x30;
              *(undefined8 *)(lVar21 + 0x88) = unaff_x29;
              *(undefined8 *)(lVar21 + 0xa0) = unaff_x23;
              *(undefined8 *)(lVar21 + 0x98) = unaff_x24;
              if (uVar14 != 0x60) {
                *(undefined8 *)(lVar21 + 0xb0) = unaff_x21;
                *(undefined8 *)(lVar21 + 0xa8) = unaff_x22;
                *(undefined8 *)(lVar21 + 0xc0) = unaff_x19;
                *(undefined8 *)(lVar21 + 0xb8) = unaff_x20;
                if (uVar14 != 0x80) {
                  *(undefined8 *)(lVar21 + 0xd0) = in_stack_00000008;
                  *(undefined8 *)(lVar21 + 200) = in_stack_00000000;
                  *(undefined8 *)(lVar21 + 0xe0) = in_stack_00000018;
                  *(undefined8 *)(lVar21 + 0xd8) = in_stack_00000010;
                  if (uVar14 != 0xa0) {
                    *(undefined8 *)(lVar21 + 0xf0) = in_stack_00000028;
                    *(undefined8 *)(lVar21 + 0xe8) = in_stack_00000020;
                    *(undefined8 *)(lVar21 + 0x100) = in_stack_00000038;
                    *(undefined8 *)(lVar21 + 0xf8) = in_stack_00000030;
                    if (uVar14 != 0xc0) {
                      *(undefined8 *)(lVar21 + 0x110) = in_stack_00000048;
                      *(undefined8 *)(lVar21 + 0x108) = in_stack_00000040;
                      *(undefined8 *)(lVar21 + 0x120) = in_stack_00000058;
                      *(undefined8 *)(lVar21 + 0x118) = in_stack_00000050;
                    }
                  }
                }
              }
            }
          }
          if (uVar14 == uVar4) goto LAB_0083d3dc;
          if (((ulong)local_50 & 0x18) == 0) {
            puVar10 = puVar10 + uVar14;
            ppuVar13 = (undefined1 **)((long)local_80 + uVar14);
            goto LAB_0083d3c4;
          }
        }
        uVar18 = (ulong)local_50 & 0xf8;
        puVar10 = puVar10 + uVar18;
        lVar16 = uVar14 - uVar18;
        puVar7 = (undefined8 *)(uVar14 + lVar21 + 0x48);
        puVar8 = (undefined8 *)((long)local_80 + uVar14);
        do {
          lVar16 = lVar16 + 8;
          *puVar7 = *puVar8;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        } while (lVar16 != 0);
        ppuVar13 = (undefined1 **)((long)local_80 + uVar18);
        if (uVar18 == uVar4) goto LAB_0083d3dc;
      }
LAB_0083d3c4:
      do {
        ppuVar17 = (undefined1 **)((long)ppuVar13 + 1);
        *puVar10 = *(undefined1 *)ppuVar13;
        puVar10 = puVar10 + 1;
        ppuVar13 = ppuVar17;
      } while (ppuVar17 != (undefined1 **)((long)local_80 + uVar4));
    }
LAB_0083d3dc:
    *(byte *)(lVar21 + 0x78) = bVar6;
    **(ushort **)(param_1 + 0x38) = **(ushort **)(param_1 + 0x38) & 0xfffe;
LAB_0083d4f0:
    uVar20 = 1;
    puVar7 = local_b0;
  }
  else {
    if (param_2 == 3) {
      uVar2 = *(ushort *)(*(long *)(param_1 + 0x38) + 8);
      if (uVar2 < 3) {
        uVar3 = FUN_007f319c(param_1);
        if (0x303 < uVar3) {
          param_2 = 3;
          goto LAB_0083d044;
        }
      }
      else if (uVar2 == 0xffff) {
        FUN_00777eb4(0x10,0,0x104,"../../third_party/boringssl/src/ssl/dtls_method.cc",0x3c);
        goto LAB_0083d254;
      }
      param_2 = uVar2 + 1;
      goto LAB_0083d044;
    }
LAB_0083d254:
    FUN_008082d0(param_1,2,10);
LAB_0083d500:
    uVar20 = 0;
    puVar7 = local_b0;
  }
  if ((((ulong)local_50 & 0xff) == 0) ||
     (local_b0 = puVar7, (long)&uStack_88 + 7U < -((ulong)local_50 & 0xff))) {
    local_50 = (undefined1 *)((ulong)local_50 & 0xffffffffffffff00);
    local_b0 = (undefined8 *)0x0;
    if (puVar7 != (undefined8 *)0x0) {
      (**(code **)*puVar7)(puVar7);
      FUN_0078cb3c(puVar7);
    }
    puVar7 = puStack_b8;
    puStack_b8 = (undefined8 *)0x0;
    if (puVar7 != (undefined8 *)0x0) {
      FUN_0080af08(puVar7);
      FUN_0078cb3c(puVar7);
    }
LAB_0083d560:
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return uVar20;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_0083d5b4:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0083d5d0  FUN_0083d5d0 =====

undefined4
FUN_0083d5d0(long param_1,ulong param_2,undefined8 *param_3,undefined8 *param_4,ulong param_5)

{
  long lVar1;
  ushort uVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined1 **ppuVar10;
  ulong uVar11;
  long *plVar12;
  undefined4 *puVar13;
  ulong uVar14;
  long lVar15;
  undefined1 **ppuVar16;
  undefined1 *puVar17;
  ulong uVar18;
  undefined4 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined4 uVar22;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long lVar23;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long lVar24;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 local_a0;
  long local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined1 *local_80 [4];
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((uint)param_2 < 3) {
    param_2 = param_2 & 0xffffffff;
  }
  else {
    if ((uint)param_2 != 3) {
LAB_0083d7d4:
      if (param_3 != (undefined8 *)0x0) {
        FUN_0080af08(param_3);
        FUN_0078cb3c(param_3);
      }
      uVar22 = 0;
      goto LAB_0083dba8;
    }
    param_2 = *(ulong *)(*(long *)(param_1 + 0x38) + 0x90) >> 0x30;
    if (param_2 < 3) {
      uVar2 = FUN_007f319c(param_1);
      if (0x303 < uVar2) {
        param_2 = 3;
        goto LAB_0083d614;
      }
    }
    else if (param_2 == 0xffff) {
      FUN_00777eb4(0x10,0,0x104,"../../third_party/boringssl/src/ssl/dtls_method.cc",0x3c);
      goto LAB_0083d7d4;
    }
    param_2 = param_2 + 1;
  }
LAB_0083d614:
  local_98 = param_2 << 0x30;
  local_88 = (undefined8 *)0x0;
  local_80[3] = &DAT_aaaaaaaaaaaaaaaa;
  local_80[2] = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_80[1] = &DAT_aaaaaaaaaaaaaaaa;
  local_80[0] = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = param_3;
  if (0x30 < param_5) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (param_5 != 0) {
    puVar5 = param_4;
    ppuVar10 = local_80;
    if ((3 < param_5) && (0xf < (ulong)((long)local_80 - (long)param_4))) {
      if (param_5 < 0x10) {
        uVar11 = 0;
      }
      else {
        uVar11 = param_5 & 0x30;
        local_80[1] = (undefined1 *)param_4[1];
        local_80[0] = (undefined1 *)*param_4;
        if (uVar11 != 0x10) {
          local_80[3] = (undefined1 *)param_4[3];
          local_80[2] = (undefined1 *)param_4[2];
          if (uVar11 != 0x20) {
            puStack_58 = (undefined1 *)param_4[5];
            local_60 = (undefined1 *)param_4[4];
          }
        }
        if (param_5 == uVar11) goto LAB_0083d67c;
        if ((param_5 & 0xc) == 0) {
          puVar5 = (undefined8 *)((long)param_4 + uVar11);
          ppuVar10 = (undefined1 **)((long)local_80 + uVar11);
          goto LAB_0083d668;
        }
      }
      uVar14 = param_5 & 0x3c;
      lVar23 = uVar11 - uVar14;
      puVar13 = (undefined4 *)((long)param_4 + uVar11);
      puVar19 = (undefined4 *)((long)local_80 + uVar11);
      do {
        lVar23 = lVar23 + 4;
        *puVar19 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar19 = puVar19 + 1;
      } while (lVar23 != 0);
      puVar5 = (undefined8 *)((long)param_4 + uVar14);
      ppuVar10 = (undefined1 **)((long)local_80 + uVar14);
      if (param_5 == uVar14) goto LAB_0083d67c;
    }
LAB_0083d668:
    do {
      puVar6 = (undefined8 *)((long)puVar5 + 1);
      *(undefined1 *)ppuVar10 = *(undefined1 *)puVar5;
      puVar5 = puVar6;
      ppuVar10 = (undefined1 **)((long)ppuVar10 + 1);
    } while (puVar6 != (undefined8 *)((long)param_4 + param_5));
  }
LAB_0083d67c:
  local_50 = (undefined1 *)CONCAT71(local_50._1_7_,(char)param_5);
  uVar2 = FUN_007f319c(param_1);
  if (uVar2 < 0x304) {
LAB_0083d6d4:
    lVar23 = *(long *)(param_1 + 0x38);
    puVar6 = (undefined8 *)FUN_0078c954(0x50);
    puVar5 = local_90;
    if (puVar6 == (undefined8 *)0x0) goto LAB_0083d760;
    *puVar6 = *(undefined8 *)(lVar23 + 0x90);
    uVar8 = *(undefined8 *)(lVar23 + 0x98);
    *(undefined8 *)(lVar23 + 0x98) = 0;
    puVar6[1] = uVar8;
    uVar8 = *(undefined8 *)(lVar23 + 0xa0);
    *(undefined8 *)(lVar23 + 0xa0) = 0;
    *(undefined1 *)(puVar6 + 9) = 0;
    puVar6[2] = uVar8;
    bVar4 = *(byte *)(lVar23 + 0xd8);
    uVar11 = (ulong)bVar4;
    if (bVar4 == 0) {
      uVar3 = 0;
    }
    else {
      lVar24 = lVar23 + 0xa8;
      puVar7 = puVar6 + 3;
      if (bVar4 < 8) {
        puVar9 = (undefined1 *)(lVar23 + 0xa8);
LAB_0083d950:
        do {
          puVar17 = puVar9 + 1;
          *(undefined1 *)puVar7 = *puVar9;
          puVar7 = (undefined8 *)((long)puVar7 + 1);
          puVar9 = puVar17;
        } while (puVar17 != (undefined1 *)(lVar24 + uVar11));
      }
      else {
        puVar9 = (undefined1 *)(lVar23 + 0xa8);
        if ((ulong)((long)puVar6 + (-0x90 - lVar23)) < 0x20) goto LAB_0083d950;
        if (bVar4 < 0x20) {
          uVar14 = 0;
LAB_0083d918:
          uVar18 = uVar11 & 0xf8;
          puVar9 = (undefined1 *)(lVar24 + uVar18);
          puVar7 = (undefined8 *)((long)puVar7 + uVar18);
          lVar15 = uVar14 - uVar18;
          puVar20 = (undefined8 *)((long)puVar6 + uVar14 + 0x18);
          puVar21 = (undefined8 *)(uVar14 + lVar23 + 0xa8);
          do {
            lVar15 = lVar15 + 8;
            *puVar20 = *puVar21;
            puVar20 = puVar20 + 1;
            puVar21 = puVar21 + 1;
          } while (lVar15 != 0);
          if (uVar18 != uVar11) goto LAB_0083d950;
        }
        else {
          uVar8 = *(undefined8 *)(lVar23 + 0xa8);
          uVar14 = uVar11 & 0xe0;
          uVar26 = *(undefined8 *)(lVar23 + 0xc0);
          uVar25 = *(undefined8 *)(lVar23 + 0xb8);
          puVar6[4] = *(undefined8 *)(lVar23 + 0xb0);
          puVar6[3] = uVar8;
          puVar6[6] = uVar26;
          puVar6[5] = uVar25;
          if (uVar14 != 0x20) {
            uVar8 = *(undefined8 *)(lVar23 + 200);
            uVar26 = *(undefined8 *)(lVar23 + 0xe0);
            uVar25 = *(undefined8 *)(lVar23 + 0xd8);
            puVar6[8] = *(undefined8 *)(lVar23 + 0xd0);
            puVar6[7] = uVar8;
            puVar6[10] = uVar26;
            puVar6[9] = uVar25;
            if (uVar14 != 0x40) {
              uVar8 = *(undefined8 *)(lVar23 + 0xe8);
              uVar26 = *(undefined8 *)(lVar23 + 0x100);
              uVar25 = *(undefined8 *)(lVar23 + 0xf8);
              puVar6[0xc] = *(undefined8 *)(lVar23 + 0xf0);
              puVar6[0xb] = uVar8;
              puVar6[0xe] = uVar26;
              puVar6[0xd] = uVar25;
              if (uVar14 != 0x60) {
                uVar8 = *(undefined8 *)(lVar23 + 0x108);
                uVar26 = *(undefined8 *)(lVar23 + 0x120);
                uVar25 = *(undefined8 *)(lVar23 + 0x118);
                puVar6[0x10] = *(undefined8 *)(lVar23 + 0x110);
                puVar6[0xf] = uVar8;
                puVar6[0x12] = uVar26;
                puVar6[0x11] = uVar25;
                if (uVar14 != 0x80) {
                  uVar8 = *(undefined8 *)(lVar23 + 0x128);
                  uVar26 = *(undefined8 *)(lVar23 + 0x140);
                  uVar25 = *(undefined8 *)(lVar23 + 0x138);
                  puVar6[0x14] = *(undefined8 *)(lVar23 + 0x130);
                  puVar6[0x13] = uVar8;
                  puVar6[0x16] = uVar26;
                  puVar6[0x15] = uVar25;
                  if (uVar14 != 0xa0) {
                    uVar8 = *(undefined8 *)(lVar23 + 0x148);
                    uVar26 = *(undefined8 *)(lVar23 + 0x160);
                    uVar25 = *(undefined8 *)(lVar23 + 0x158);
                    puVar6[0x18] = *(undefined8 *)(lVar23 + 0x150);
                    puVar6[0x17] = uVar8;
                    puVar6[0x1a] = uVar26;
                    puVar6[0x19] = uVar25;
                    if (uVar14 != 0xc0) {
                      uVar8 = *(undefined8 *)(lVar23 + 0x168);
                      uVar26 = *(undefined8 *)(lVar23 + 0x180);
                      uVar25 = *(undefined8 *)(lVar23 + 0x178);
                      puVar6[0x1c] = *(undefined8 *)(lVar23 + 0x170);
                      puVar6[0x1b] = uVar8;
                      puVar6[0x1e] = uVar26;
                      puVar6[0x1d] = uVar25;
                    }
                  }
                }
              }
            }
          }
          if (uVar14 != uVar11) {
            if ((bVar4 & 0x18) == 0) {
              puVar9 = (undefined1 *)(lVar24 + uVar14);
              puVar7 = (undefined8 *)((long)puVar7 + uVar14);
              goto LAB_0083d950;
            }
            goto LAB_0083d918;
          }
        }
      }
      uVar3 = *(undefined1 *)(lVar23 + 0xd8);
    }
    *(undefined1 *)(puVar6 + 9) = uVar3;
    lVar24 = *(long *)(param_1 + 0x38);
    *(long *)(lVar24 + 0x90) = local_98;
    local_90 = (undefined8 *)0x0;
    lVar23 = *(long *)(lVar24 + 0x98);
    *(undefined8 **)(lVar24 + 0x98) = puVar5;
    if (lVar23 != 0) {
      FUN_0080af08(lVar23);
      FUN_0078cb3c(lVar23);
    }
    puVar5 = local_88;
    local_88 = (undefined8 *)0x0;
    puVar7 = *(undefined8 **)(lVar24 + 0xa0);
    *(undefined8 **)(lVar24 + 0xa0) = puVar5;
    if (puVar7 != (undefined8 *)0x0) {
      (**(code **)*puVar7)(puVar7);
      FUN_0078cb3c(puVar7);
    }
    puVar9 = (undefined1 *)(lVar24 + 0xa8);
    if (((ulong)*(byte *)(lVar24 + 0xd8) != 0) &&
       (-(ulong)*(byte *)(lVar24 + 0xd8) <= lVar24 + 0xa7U)) goto LAB_0083dbfc;
    uVar11 = (ulong)local_50 & 0xff;
    if ((byte)local_50 == 0) {
      bVar4 = 0;
    }
    else {
      ppuVar10 = local_80;
      bVar4 = (byte)local_50;
      if ((7 < (byte)local_50) && (0x1f < (lVar24 - (long)&local_98) + 0x90U)) {
        if ((byte)local_50 < 0x20) {
          uVar14 = 0;
        }
        else {
          uVar14 = (ulong)local_50 & 0xe0;
          *(undefined1 **)(lVar24 + 0xb0) = local_80[1];
          *(undefined1 **)(lVar24 + 0xa8) = local_80[0];
          *(undefined1 **)(lVar24 + 0xc0) = local_80[3];
          *(undefined1 **)(lVar24 + 0xb8) = local_80[2];
          if (uVar14 != 0x20) {
            *(undefined1 **)(lVar24 + 0xd0) = puStack_58;
            *(undefined1 **)(lVar24 + 200) = local_60;
            *(long *)(lVar24 + 0xe0) = local_48;
            *(undefined1 **)(lVar24 + 0xd8) = local_50;
            if (uVar14 != 0x40) {
              *(undefined8 *)(lVar24 + 0xf0) = unaff_x30;
              *(undefined8 *)(lVar24 + 0xe8) = unaff_x29;
              *(undefined8 *)(lVar24 + 0x100) = unaff_x23;
              *(undefined8 *)(lVar24 + 0xf8) = unaff_x24;
              if (uVar14 != 0x60) {
                *(undefined8 *)(lVar24 + 0x110) = unaff_x21;
                *(undefined8 *)(lVar24 + 0x108) = unaff_x22;
                *(undefined8 *)(lVar24 + 0x120) = unaff_x19;
                *(undefined8 *)(lVar24 + 0x118) = unaff_x20;
                if (uVar14 != 0x80) {
                  *(undefined8 *)(lVar24 + 0x130) = in_stack_00000008;
                  *(undefined8 *)(lVar24 + 0x128) = in_stack_00000000;
                  *(undefined8 *)(lVar24 + 0x140) = in_stack_00000018;
                  *(undefined8 *)(lVar24 + 0x138) = in_stack_00000010;
                  if (uVar14 != 0xa0) {
                    *(undefined8 *)(lVar24 + 0x150) = in_stack_00000028;
                    *(undefined8 *)(lVar24 + 0x148) = in_stack_00000020;
                    *(undefined8 *)(lVar24 + 0x160) = in_stack_00000038;
                    *(undefined8 *)(lVar24 + 0x158) = in_stack_00000030;
                    if (uVar14 != 0xc0) {
                      *(undefined8 *)(lVar24 + 0x170) = in_stack_00000048;
                      *(undefined8 *)(lVar24 + 0x168) = in_stack_00000040;
                      *(undefined8 *)(lVar24 + 0x180) = in_stack_00000058;
                      *(undefined8 *)(lVar24 + 0x178) = in_stack_00000050;
                    }
                  }
                }
              }
            }
          }
          if (uVar14 == uVar11) goto LAB_0083db14;
          if (((ulong)local_50 & 0x18) == 0) {
            puVar9 = puVar9 + uVar14;
            ppuVar10 = (undefined1 **)((long)local_80 + uVar14);
            goto LAB_0083dafc;
          }
        }
        uVar18 = (ulong)local_50 & 0xf8;
        puVar9 = puVar9 + uVar18;
        lVar23 = uVar14 - uVar18;
        puVar5 = (undefined8 *)(uVar14 + lVar24 + 0xa8);
        puVar7 = (undefined8 *)((long)local_80 + uVar14);
        do {
          lVar23 = lVar23 + 8;
          *puVar5 = *puVar7;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        } while (lVar23 != 0);
        ppuVar10 = (undefined1 **)((long)local_80 + uVar18);
        if (uVar18 == uVar11) goto LAB_0083db14;
      }
LAB_0083dafc:
      do {
        ppuVar16 = (undefined1 **)((long)ppuVar10 + 1);
        *puVar9 = *(undefined1 *)ppuVar10;
        puVar9 = puVar9 + 1;
        ppuVar10 = ppuVar16;
      } while (ppuVar16 != (undefined1 **)((long)local_80 + uVar11));
    }
LAB_0083db14:
    *(byte *)(lVar24 + 0xd8) = bVar4;
    lVar23 = *(long *)(param_1 + 0x38);
    if (1 < (ulong)*(byte *)(lVar23 + 0xf0)) {
      local_a0 = 0;
      FUN_0083041c(&local_a0,puVar6);
LAB_0083dc28:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    plVar12 = (long *)(lVar23 + (ulong)*(byte *)(lVar23 + 0xf0) * 8 + 0xe0);
    *plVar12 = (long)puVar6;
    *(char *)(lVar23 + 0xf0) = *(char *)(lVar23 + 0xf0) + '\x01';
    if (plVar12 == (long *)0x0) goto LAB_0083dc28;
    FUN_0082df18(param_1);
    uVar22 = 1;
    puVar5 = local_88;
  }
  else {
    puVar6 = (undefined8 *)FUN_00816190(*local_90,param_4,param_5);
    puVar5 = local_88;
    if (local_88 != (undefined8 *)0x0) {
      puVar7 = (undefined8 *)*local_88;
      local_88 = puVar6;
      (*(code *)*puVar7)(puVar5);
      FUN_0078cb3c(puVar5);
      puVar6 = local_88;
    }
    local_88 = puVar6;
    if (local_88 != (undefined8 *)0x0) goto LAB_0083d6d4;
LAB_0083d760:
    uVar22 = 0;
    puVar5 = local_88;
  }
  if ((((ulong)local_50 & 0xff) == 0) ||
     (local_88 = puVar5, (long)&local_88 + 7U < -((ulong)local_50 & 0xff))) {
    local_50 = (undefined1 *)((ulong)local_50 & 0xffffffffffffff00);
    local_88 = (undefined8 *)0x0;
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5);
      FUN_0078cb3c(puVar5);
    }
    puVar5 = local_90;
    local_90 = (undefined8 *)0x0;
    if (puVar5 != (undefined8 *)0x0) {
      FUN_0080af08(puVar5);
      FUN_0078cb3c(puVar5);
    }
LAB_0083dba8:
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return uVar22;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_0083dbfc:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0083dc2c  FUN_0083dc2c =====

undefined8 FUN_0083dc2c(void)

{
  return 1;
}


// ===== 0083dc38  FUN_0083dc38 =====

void FUN_0083dc38(void)

{
  return;
}


// ===== 0083dc40  FUN_0083dc40 =====

void FUN_0083dc40(void)

{
  return;
}


// ===== 0083dc48  FUN_0083dc48 =====

void FUN_0083dc48(void)

{
  return;
}


// ===== 0083dc50  FUN_0083dc50 =====

void FUN_0083dc50(void)

{
  return;
}


// ===== 0083dc58  FUN_0083dc58 =====

void FUN_0083dc58(void)

{
  return;
}


// ===== 0083dc60  FUN_0083dc60 =====

undefined8 FUN_0083dc60(void)

{
  return 1;
}


// ===== 0083dc6c  FUN_0083dc6c =====

undefined8 FUN_0083dc6c(void)

{
  return 1;
}


// ===== 0083dc78  FUN_0083dc78 =====

void FUN_0083dc78(void)

{
  return;
}


// ===== 0083dc80  FUN_0083dc80 =====

undefined8 FUN_0083dc80(void)

{
  return 0;
}


// ===== 0083dc8c  FUN_0083dc8c =====

void FUN_0083dc8c(void)

{
  return;
}


// ===== 0083dc94  FUN_0083dc94 =====

undefined8 FUN_0083dc94(void)

{
  return 1;
}


// ===== 0083dca0  FUN_0083dca0 =====

void FUN_0083dca0(void)

{
  return;
}


// ===== 0083dca8  FUN_0083dca8 =====

void FUN_0083dca8(void)

{
  return;
}


// ===== 0083dcb0  FUN_0083dcb0 =====

undefined8 FUN_0083dcb0(void)

{
  return 1;
}


// ===== 0083dcbc  FUN_0083dcbc =====

undefined8 FUN_0083dcbc(void)

{
  return 1;
}


// ===== 0083dcc8  FUN_0083dcc8 =====

void FUN_0083dcc8(void)

{
  return;
}


// ===== 0083dcd0  FUN_0083dcd0 =====

void FUN_0083dcd0(void)

{
  return;
}


// ===== 0083dcd8  FUN_0083dcd8 =====

undefined * FUN_0083dcd8(void)

{
  return &DAT_00d39df8;
}


// ===== 0083dce8  FUN_0083dce8 =====

undefined * FUN_0083dce8(void)

{
  return &DAT_00d39eb8;
}


// ===== 0083dcf8  FUN_0083dcf8 =====

void FUN_0083dcf8(void)

{
  return;
}


// ===== 0083dd00  FUN_0083dd00 =====

void FUN_0083dd00(void)

{
  return;
}


// ===== 0083dd08  FUN_0083dd08 =====

void FUN_0083dd08(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(*(long *)(param_1 + 0x30) + 0xe0);
  if ((plVar1 != (long *)0x0) && (*plVar1 == 0)) {
    *(undefined8 *)(*(long *)(param_1 + 0x30) + 0xe0) = 0;
    FUN_007704c4();
    return;
  }
  return;
}


// ===== 0083dd2c  FUN_0083dd2c =====

undefined4
FUN_0083dd2c(long param_1,int param_2,undefined8 *param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  
  uVar2 = FUN_008094c0();
  if ((uVar2 & 1) == 0) {
    iVar1 = FUN_007ef92c(param_1);
    if (iVar1 == 0) {
LAB_0083de20:
      **(undefined8 **)(param_1 + 0x30) = 0;
      uVar5 = 1;
      puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x30) + 0x108);
      *(undefined8 **)(*(long *)(param_1 + 0x30) + 0x108) = param_3;
      if (puVar4 == (undefined8 *)0x0) {
        return 1;
      }
      goto LAB_0083dd94;
    }
    lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 0x118);
    if (((lVar3 == 0) || ((*(byte *)(lVar3 + 0x812) >> 4 & 1) == 0)) &&
       (iVar1 = (*(code *)**(undefined8 **)(param_1 + 0x98))
                          (param_1,param_2,*param_3,param_4,param_5), iVar1 == 0))
    goto LAB_0083dd8c;
    if (param_2 != 1) {
      *(int *)(*(long *)(param_1 + 0x30) + 200) = param_2;
      goto LAB_0083de20;
    }
    uVar5 = 1;
  }
  else {
    FUN_00777eb4(0x10,0,0xff,"../../third_party/boringssl/src/ssl/tls_method.cc",0x30);
    FUN_008082d0(param_1,2,10);
LAB_0083dd8c:
    uVar5 = 0;
  }
  puVar4 = param_3;
  if (param_3 == (undefined8 *)0x0) {
    return uVar5;
  }
LAB_0083dd94:
  FUN_0080af08(puVar4);
  FUN_0078cb3c(puVar4);
  return uVar5;
}


// ===== 0083de44  FUN_0083de44 =====

undefined4
FUN_0083de44(long param_1,int param_2,undefined8 *param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  
  uVar2 = FUN_00808f64();
  if ((uVar2 & 1) == 0) {
LAB_0083ded0:
    uVar5 = 0;
  }
  else {
    iVar1 = FUN_007ef92c(param_1);
    if (iVar1 == 0) {
LAB_0083df0c:
      *(undefined8 *)(*(long *)(param_1 + 0x30) + 8) = 0;
      uVar5 = 1;
      puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x30) + 0x110);
      *(undefined8 **)(*(long *)(param_1 + 0x30) + 0x110) = param_3;
      if (puVar4 == (undefined8 *)0x0) {
        return 1;
      }
      goto LAB_0083ded8;
    }
    lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 0x118);
    if (((lVar3 == 0) || ((*(byte *)(lVar3 + 0x812) >> 4 & 1) == 0)) &&
       (iVar1 = (**(code **)(*(long *)(param_1 + 0x98) + 8))
                          (param_1,param_2,*param_3,param_4,param_5), iVar1 == 0))
    goto LAB_0083ded0;
    if (param_2 != 1) {
      *(int *)(*(long *)(param_1 + 0x30) + 0xcc) = param_2;
      goto LAB_0083df0c;
    }
    uVar5 = 1;
  }
  puVar4 = param_3;
  if (param_3 == (undefined8 *)0x0) {
    return uVar5;
  }
LAB_0083ded8:
  FUN_0080af08(puVar4);
  FUN_0078cb3c(puVar4);
  return uVar5;
}


// ===== 0083df30  FUN_0083df30 =====

char * FUN_0083df30(long param_1)

{
  char *pcVar1;
  
  if (*(long *)(*(long *)(param_1 + 0x30) + 0x118) == 0) {
    return "SSL negotiation finished successfully";
  }
  if ((*(byte *)(param_1 + 0xa4) & 1) != 0) {
    pcVar1 = (char *)FUN_00829a48();
    return pcVar1;
  }
  pcVar1 = (char *)FUN_008154f4();
  return pcVar1;
}


// ===== 0083df60  FUN_0083df60 =====

char * FUN_0083df60(int param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = "fatal";
  if (param_1 >> 8 != 2) {
    pcVar1 = "unknown";
  }
  pcVar2 = "warning";
  if (param_1 >> 8 != 1) {
    pcVar2 = pcVar1;
  }
  return pcVar2;
}


// ===== 0083df94  FUN_0083df94 =====

char * FUN_0083df94(undefined1 param_1)

{
  char *pcVar1;
  
  pcVar1 = "close notify";
  switch(param_1) {
  case 0:
    goto code_r0x0083e1f8;
  default:
    pcVar1 = "unknown";
code_r0x0083e1f8:
    return pcVar1;
  case 10:
    return "unexpected_message";
  case 0x14:
    return "bad record mac";
  case 0x15:
    return "decryption failed";
  case 0x16:
    return "record overflow";
  case 0x1e:
    return "decompression failure";
  case 0x28:
    return "handshake failure";
  case 0x29:
    return "no certificate";
  case 0x2a:
    return "bad certificate";
  case 0x2b:
    return "unsupported certificate";
  case 0x2c:
    return "certificate revoked";
  case 0x2d:
    return "certificate expired";
  case 0x2e:
    return "certificate unknown";
  case 0x2f:
    return "illegal parameter";
  case 0x30:
    return "unknown CA";
  case 0x31:
    return "access denied";
  case 0x32:
    return "decode error";
  case 0x33:
    return "decrypt error";
  case 0x3c:
    return "export restriction";
  case 0x46:
    return "protocol version";
  case 0x47:
    return "insufficient security";
  case 0x50:
    return "internal error";
  case 0x56:
    return "inappropriate fallback";
  case 0x5a:
    return "user canceled";
  case 100:
    return "no renegotiation";
  case 0x6d:
    return "missing extension";
  case 0x6e:
    return "unsupported extension";
  case 0x6f:
    return "certificate unobtainable";
  case 0x70:
    return "unrecognized name";
  case 0x71:
    return "bad certificate status response";
  case 0x72:
    return "bad certificate hash value";
  case 0x73:
    return "unknown PSK identity";
  case 0x74:
    return "certificate required";
  case 0x78:
    return "no application protocol";
  case 0x79:
    return "ECH required";
  }
}


// ===== 0083e1fc  FUN_0083e1fc =====

void FUN_0083e1fc(undefined8 *param_1,int param_2)

{
  if (param_2 < 7) {
    if (param_2 == 1) {
      FUN_005d3510(param_1,"AES_CM_128_HMAC_SHA1_80");
      return;
    }
    if (param_2 == 2) {
      FUN_005d3510(param_1,"AES_CM_128_HMAC_SHA1_32");
      return;
    }
  }
  else {
    if (param_2 == 7) {
      FUN_005d3510(param_1,"AEAD_AES_128_GCM");
      return;
    }
    if (param_2 == 8) {
      FUN_005d3510(param_1,"AEAD_AES_256_GCM");
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ===== 0083e274  FUN_0083e274 =====

void FUN_0083e274(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = param_1 - 1;
  if (((uint)(uVar2 < 8) & 0xc3U >> (ulong)(uVar2 & 0x1f)) == 1) {
    uVar1 = *(undefined4 *)(&DAT_001f8aa8 + (ulong)uVar2 * 4);
    *param_2 = *(undefined4 *)(&DAT_001f8a08 + (ulong)uVar2 * 4);
    *param_3 = uVar1;
  }
  return;
}


// ===== 0083e2bc  FUN_0083e2bc =====

bool FUN_0083e2bc(int param_1)

{
  return param_1 - 7U < 2;
}


// ===== 0083e2d0  FUN_0083e2d0 =====

void * FUN_0083e2d0(undefined8 param_1,long param_2,undefined8 param_3)

{
  void *pvVar1;
  undefined1 auStack_50 [16];
  code *local_40;
  undefined8 uStack_38;
  
  pvVar1 = operator_new(0x130);
  (**(code **)(param_2 + 0x10))(1,param_2,auStack_50);
  uStack_38 = *(undefined8 *)(param_2 + 0x18);
  local_40 = *(code **)(param_2 + 0x10);
  *(code **)(param_2 + 0x10) = FUN_00433984;
  *(undefined8 *)(param_2 + 0x18) = 0;
  FUN_0083e548(pvVar1,param_1,auStack_50,param_3);
  (*local_40)(0,auStack_50,auStack_50);
  return pvVar1;
}


// ===== 0083e36c  FUN_0083e36c =====

void FUN_0083e36c(undefined8 *param_1,long *param_2)

{
  int *****pppppiVar1;
  bool bVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  int ****local_38;
  ulong local_30;
  byte bStack_21;
  
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 0x10))(&local_38,param_2,"WebRTC-EnableDtlsPqc",0x14);
    if (-1 < (char)bStack_21) {
      local_30 = (ulong)bStack_21;
    }
    if (local_30 < 7) {
      bVar2 = false;
    }
    else {
      pppppiVar1 = (int *****)local_38;
      if (-1 < (char)bStack_21) {
        pppppiVar1 = &local_38;
      }
      bVar2 = *(int *)pppppiVar1 == 0x62616e45 && *(int *)((long)pppppiVar1 + 3) == 0x64656c62;
    }
    if ((char)bStack_21 < '\0') {
      operator_delete(local_38);
    }
    if (bVar2) {
      puVar3 = (undefined2 *)operator_new(8);
      puVar4 = puVar3 + 4;
      *param_1 = puVar3;
      param_1[2] = puVar4;
      if (((puVar3 != (undefined2 *)0x0) &&
          (*puVar3 = 0x11ec, puVar3 != (undefined2 *)0xfffffffffffffffe)) &&
         (puVar3[1] = 0x1d, puVar3 != (undefined2 *)0xfffffffffffffffc)) {
        puVar5 = puVar3 + 3;
        puVar3[2] = 0x17;
        if (puVar5 == (undefined2 *)0x0) goto LAB_0083e4c0;
        goto LAB_0083e4a0;
      }
      goto LAB_0083e4c0;
    }
  }
  puVar3 = (undefined2 *)operator_new(6);
  puVar4 = puVar3 + 3;
  *param_1 = puVar3;
  param_1[2] = puVar4;
  if ((puVar3 != (undefined2 *)0x0) && (*puVar3 = 0x1d, puVar3 != (undefined2 *)0xfffffffffffffffe))
  {
    puVar5 = puVar3 + 2;
    puVar3[1] = 0x17;
    if (puVar5 != (undefined2 *)0x0) {
LAB_0083e4a0:
      *puVar5 = 0x18;
      param_1[1] = puVar4;
      return;
    }
  }
LAB_0083e4c0:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0083e4d4  FUN_0083e4d4 =====

bool FUN_0083e4d4(long *param_1)

{
  int iVar1;
  int *in_x5;
  
  iVar1 = (**(code **)(*param_1 + 0x80))();
  if (in_x5 != (int *)0x0) {
    *in_x5 = iVar1;
  }
  return iVar1 == 0;
}


// ===== 0083e51c  FUN_0083e51c =====

void FUN_0083e51c(long *param_1)

{
  *param_1 = (long)(PTR_DAT_00d52d60 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0083e544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_1[4])(0,param_1 + 2,param_1 + 2);
  return;
}


// ===== 0083e548  FUN_0083e548 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0083e548(undefined8 *param_1,undefined8 param_2,long param_3,long *param_4)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined4 uVar6;
  long lVar7;
  int local_48;
  undefined4 uStack_44;
  ulong local_40;
  byte bStack_31;
  
  FUN_0084172c();
  *param_1 = &PTR_FUN_00d39ee0;
  *(undefined1 *)(param_1 + 6) = 1;
  param_1[7] = param_2;
  (**(code **)(param_3 + 0x10))(1,param_3,param_1 + 8);
  param_1[10] = *(undefined8 *)(param_3 + 0x10);
  param_1[0xb] = *(undefined8 *)(param_3 + 0x18);
  *(code **)(param_3 + 0x10) = FUN_00433984;
  *(undefined8 *)(param_3 + 0x18) = 0;
  uVar4 = FUN_005d6490();
  param_1[0xc] = uVar4;
  FUN_007ebca0(param_1 + 0xd);
  *(undefined2 *)((long)param_1 + 0x84) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  uVar4 = _DAT_001f49b0;
  param_1[0x23] = _UNK_001f49b8;
  param_1[0x22] = uVar4;
  if (param_4 == (long *)0x0) goto LAB_0083e780;
  (**(code **)(*param_4 + 0x10))(&local_48,param_4,"WebRTC-ForceDtls13",0x12);
  uVar5 = local_40;
  if (-1 < (char)bStack_31) {
    uVar5 = (ulong)bStack_31;
  }
  if (uVar5 < 7) {
    bVar3 = false;
    if ((char)bStack_31 < '\0') goto LAB_0083e6bc;
LAB_0083e680:
    if (bVar3) goto LAB_0083e684;
LAB_0083e6d0:
    (**(code **)(*param_4 + 0x10))(&local_48,param_4,"WebRTC-ForceDtls13",0x12);
    if (-1 < (char)bStack_31) {
      if ((bStack_31 != 4) || (local_48 != 0x796c6e4f)) goto LAB_0083e780;
LAB_0083e744:
      uVar5 = FUN_004022fc();
      if ((uVar5 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../rtc_base/openssl_stream_adapter.cc",0x4f2,
                     "WebRTC-ForceDtls13 Only");
      }
      uVar6 = 2;
      goto LAB_0083e6b0;
    }
    piVar1 = (int *)CONCAT44(uStack_44,local_48);
    if (local_40 == 4) {
      iVar2 = *piVar1;
      operator_delete(piVar1);
      if (iVar2 == 0x796c6e4f) goto LAB_0083e744;
    }
    else {
      operator_delete(piVar1);
    }
LAB_0083e780:
    uVar5 = FUN_004022fc();
    if ((uVar5 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../rtc_base/openssl_stream_adapter.cc",0x53a,
                   "WebRTC-ForceDtls13 Disabled");
    }
    param_1[0x24] = 0;
    if (param_4 == (long *)0x0) goto LAB_0083e840;
  }
  else {
    piVar1 = (int *)CONCAT44(uStack_44,local_48);
    if (-1 < (char)bStack_31) {
      piVar1 = &local_48;
    }
    bVar3 = *piVar1 == 0x62616e45 && *(int *)((long)piVar1 + 3) == 0x64656c62;
    if (-1 < (char)bStack_31) goto LAB_0083e680;
LAB_0083e6bc:
    operator_delete((void *)CONCAT44(uStack_44,local_48));
    if (!bVar3) goto LAB_0083e6d0;
LAB_0083e684:
    uVar5 = FUN_004022fc();
    if ((uVar5 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../rtc_base/openssl_stream_adapter.cc",0x4ca,
                   "WebRTC-ForceDtls13 Enabled");
    }
    uVar6 = 1;
LAB_0083e6b0:
    *(undefined4 *)(param_1 + 0x24) = uVar6;
    *(undefined4 *)((long)param_1 + 0x124) = 0;
  }
  (**(code **)(*param_4 + 0x10))(&local_48,param_4,"WebRTC-DisableSslGroupIds",0x19);
  if (-1 < (char)bStack_31) {
    local_40 = (ulong)bStack_31;
  }
  if (local_40 < 7) {
    param_4 = (long *)0x0;
  }
  else {
    piVar1 = (int *)CONCAT44(uStack_44,local_48);
    if (-1 < (char)bStack_31) {
      piVar1 = &local_48;
    }
    param_4 = (long *)(ulong)(*piVar1 == 0x62616e45 && *(int *)((long)piVar1 + 3) == 0x64656c62);
  }
  if ((char)bStack_31 < '\0') {
    operator_delete((void *)CONCAT44(uStack_44,local_48));
  }
LAB_0083e840:
  lVar7 = param_1[7];
  *(char *)(param_1 + 0x25) = (char)param_4;
  (**(code **)(lVar7 + 0x20))(0,lVar7 + 0x10,lVar7 + 0x10);
  *(undefined8 **)(lVar7 + 0x10) = param_1;
  *(code **)(lVar7 + 0x20) = FUN_004473ec;
  *(code **)(lVar7 + 0x28) = FUN_00840ef4;
  return;
}


// ===== 0083e88c  FUN_0083e88c =====

void FUN_0083e88c(long *param_1)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  long *plVar4;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  
  FUN_00841cf8(param_1 + 0xe);
  FUN_0083ea7c(param_1,0);
  pvVar3 = (void *)param_1[0x1f];
  if (pvVar3 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x20];
    uVar7 = (ulong)((long)pvVar5 + ((long)pvVar5 << 0x3f) + -2) >> 1;
    uVar6 = (ulong)(((long)pvVar3 - (long)pvVar5 << 0x3f) - ((long)pvVar3 - (long)pvVar5)) >> 1;
    if (uVar7 <= uVar6) {
      uVar6 = uVar7;
    }
    if ((1 < uVar6) && ((((int)pvVar3 - (uint)pvVar5 | (uint)pvVar5) & 1) == 0)) {
      uVar6 = uVar6 & 0x7ffffffffffffffe;
      pvVar5 = (void *)((long)pvVar5 + uVar6 * -2);
      do {
        uVar6 = uVar6 - 2;
      } while (uVar6 != 0);
    }
    while (pvVar5 != pvVar3) {
      pvVar5 = (void *)((long)pvVar5 + -2);
      if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    param_1[0x20] = (long)pvVar3;
    operator_delete(pvVar3);
  }
  if (*(char *)((long)param_1 + 0xf7) < '\0') {
    operator_delete((void *)param_1[0x1c]);
    cVar1 = *(char *)((long)param_1 + 0xdf);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0xdf);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[0x19]);
  }
  pvVar3 = (void *)param_1[0x18];
  param_1[0x18] = 0;
  if (pvVar3 != (void *)0x0) {
    operator_delete__(pvVar3);
  }
  pvVar3 = (void *)param_1[0x14];
  param_1[0x14] = 0;
  if (pvVar3 != (void *)0x0) {
    FUN_00832ab8(pvVar3);
    operator_delete(pvVar3);
  }
  pvVar3 = (void *)param_1[0x13];
  param_1[0x13] = 0;
  if (pvVar3 != (void *)0x0) {
    FUN_00831e2c(pvVar3);
    operator_delete(pvVar3);
  }
  pvVar3 = (void *)param_1[0xe];
  if ((pvVar3 != (void *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,pvVar3), iVar2 == 1)) {
    operator_delete(pvVar3);
  }
  FUN_007ebdcc(param_1[0xd]);
  pvVar3 = (void *)param_1[0xd];
  if ((pvVar3 != (void *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,pvVar3), iVar2 == 1)) {
    operator_delete(pvVar3);
  }
  (*(code *)param_1[10])(0,param_1 + 8,param_1 + 8);
  plVar4 = (long *)param_1[7];
  param_1[7] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  *param_1 = (long)(PTR_DAT_00d52d60 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0083ea4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_1[4])(0,param_1 + 2,param_1 + 2);
  return;
}


// ===== 0083ea7c  FUN_0083ea7c =====

void FUN_0083ea7c(long param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  char *pcVar5;
  void *pvVar6;
  
  if (*(int *)(param_1 + 0x78) != 4) {
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined4 *)(param_1 + 0x78) = 5;
  }
  if (*(long *)(param_1 + 0x88) == 0) goto LAB_0083eb4c;
  if (param_2 == '\0') {
    iVar1 = FUN_007f1b9c();
    if (iVar1 < 0) {
      uVar3 = FUN_004022fc();
      if ((uVar3 & 1) == 0) {
        uVar2 = FUN_007f1da8(*(undefined8 *)(param_1 + 0x88),iVar1);
        pcVar5 = "SSL_shutdown failed, error = ";
        uVar4 = 0x231a;
        goto LAB_0083eb3c;
      }
    }
  }
  else {
    iVar1 = FUN_007f1d0c();
    if (iVar1 < 0) {
      uVar3 = FUN_004022fc();
      if ((uVar3 & 1) == 0) {
        uVar2 = FUN_007f1da8(*(undefined8 *)(param_1 + 0x88),iVar1);
        pcVar5 = "SSL_send_fatal_alert failed, error = ";
        uVar4 = 0x22e2;
LAB_0083eb3c:
        FUN_00623bb0(&DAT_001f4e94,"../../rtc_base/openssl_stream_adapter.cc",uVar4,pcVar5,uVar2);
      }
    }
  }
  FUN_007f1358(*(undefined8 *)(param_1 + 0x88));
  *(undefined8 *)(param_1 + 0x88) = 0;
LAB_0083eb4c:
  if (*(long *)(param_1 + 0x90) != 0) {
    FUN_007f04ac();
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  pvVar6 = *(void **)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = 0;
  if (pvVar6 != (void *)0x0) {
    FUN_00831e2c(pvVar6);
    operator_delete(pvVar6);
  }
  pvVar6 = *(void **)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if (pvVar6 != (void *)0x0) {
    FUN_00832ab8(pvVar6);
    operator_delete(pvVar6);
  }
  FUN_00841cf8(param_1 + 0x70);
  return;
}


// ===== 0083ebb0  FUN_0083ebb0 =====

void FUN_0083ebb0(void *param_1)

{
  FUN_0083e88c();
  operator_delete(param_1);
  return;
}


// ===== 0083ebe0  FUN_0083ebe0 =====

void FUN_0083ebe0(long param_1,undefined8 param_2)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = param_2;
  if (pvVar1 != (void *)0x0) {
    FUN_00831e2c(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 0083ec2c  FUN_0083ec2c =====

undefined8 FUN_0083ec2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}


// ===== 0083ec38  FUN_0083ec38 =====

void FUN_0083ec38(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x7c) = param_2;
  return;
}


// ===== 0083ec44  FUN_0083ec44 =====

undefined8
FUN_0083ec44(long *****param_1,long *******param_2,long ****param_3,void *param_4,long ****param_5)

{
  long ****pppplVar1;
  ulong uVar2;
  long *****ppppplVar3;
  char cVar4;
  long *****ppppplVar5;
  ulong uVar6;
  long ****pppplVar7;
  long *******__dest;
  undefined8 uVar8;
  long ****pppplVar9;
  long ***local_80;
  long ******local_78;
  long ***ppplStack_70;
  undefined1 uStack_62;
  undefined1 uStack_61;
  long ******local_60;
  long ***ppplStack_58;
  undefined8 local_50;
  code *pcStack_48;
  
  local_80 = (long ***)&DAT_aaaaaaaaaaaaaaaa;
  local_78 = (long ******)param_2;
  ppplStack_70 = (long ***)param_3;
  uVar6 = FUN_00833d78(param_2,param_3,&local_80);
  if ((uVar6 & 1) == 0) {
    uVar6 = FUN_004022fc();
    if ((uVar6 & 1) == 0) {
      FUN_00623bb0(&DAT_0021f2ce,"../../rtc_base/openssl_stream_adapter.cc",0xbba,
                   "Unknown digest algorithm: ",&local_78);
      uVar8 = 1;
    }
    else {
      uVar8 = 1;
    }
  }
  else if ((long ****)local_80 == param_5) {
    param_1[0x16] = (long ****)0x0;
    if (param_5 != (long ****)0x0) {
      pppplVar9 = param_1[0x17];
      if (pppplVar9 < param_5) {
        pppplVar9 = (long ****)((long)pppplVar9 + ((ulong)pppplVar9 >> 1));
        pppplVar1 = param_5;
        if (param_5 <= pppplVar9) {
          pppplVar1 = pppplVar9;
        }
        pppplVar7 = (long ****)operator_new__((ulong)pppplVar1);
        pppplVar9 = param_1[0x18];
        param_1[0x18] = pppplVar7;
        if (pppplVar9 != (long ****)0x0) {
          operator_delete__(pppplVar9);
          pppplVar9 = param_1[0x16];
        }
        param_1[0x17] = pppplVar1;
      }
      else {
        pppplVar9 = (long ****)0x0;
      }
      memcpy((void *)((long)param_1[0x18] + (long)pppplVar9),param_4,(size_t)param_5);
      param_1[0x16] = param_5;
    }
    if ((long ****)0x7ffffffffffffff6 < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_005d45ec();
    }
    if (param_3 < (long ****)0x17) {
      local_50 = (code *)CONCAT17((char)param_3,(undefined7)local_50);
      __dest = &local_60;
    }
    else {
      uVar6 = ((ulong)param_3 & 0x7ffffffffffffff8) + 8;
      uVar2 = 0x19;
      if (uVar6 != 0x18) {
        uVar2 = uVar6;
      }
      __dest = (long *******)operator_new(uVar2);
      local_50 = (code *)(uVar2 | 0x8000000000000000);
      local_60 = (long ******)__dest;
      ppplStack_58 = (long ***)param_3;
    }
    if ((long *******)((long)__dest + (long)param_3) < __dest) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                );
    }
    if ((__dest <= param_2) && (param_2 < (long *******)((long)__dest + (long)param_3))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
    memmove(__dest,param_2,(size_t)param_3);
    cVar4 = *(char *)((long)param_1 + 0xdf);
    *(undefined1 *)((long)__dest + (long)param_3) = 0;
    if (cVar4 < '\0') {
      operator_delete(param_1[0x19]);
    }
    param_1[0x1a] = (long ****)ppplStack_58;
    param_1[0x19] = (long ****)local_60;
    param_1[0x1b] = (long ****)local_50;
    if (param_1[0x14] != (long ****)0x0) {
      uVar6 = FUN_0083ef10(param_1);
      if ((uVar6 & 1) == 0) {
        FUN_0083f150(param_1,"SetPeerCertificateDigest",0x18,0xffffffff,0x2a,0);
        return 3;
      }
      if (*(int *)(param_1 + 0xf) == 3) {
        pppplVar9 = param_1[0xc];
        ppppplVar3 = (long *****)param_1[0xd];
        if (ppppplVar3 != (long *****)0x0) {
          FUN_00d0f740(1,ppppplVar3);
        }
        local_60 = (long ******)operator_new(0x30);
        ppppplVar5 = DAT_001f5600;
        local_60[4] = (long *****)FUN_004473ec;
        local_60[5] = (long *****)FUN_00840f00;
        *local_60 = ppppplVar3;
        local_60[2] = param_1;
        local_60[3] = ppppplVar5;
        local_50 = FUN_005db390;
        pcStack_48 = FUN_005db348;
        (*(code *)(*pppplVar9)[1])(pppplVar9,&local_60,&uStack_61,&uStack_62);
        (*local_50)(0,&local_60,&local_60);
      }
    }
    uVar8 = 0;
  }
  else {
    uVar8 = 2;
  }
  return uVar8;
}


// ===== 0083ef10  FUN_0083ef10 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0083ef10(long param_1)

{
  undefined8 *puVar1;
  char cVar2;
  void *pvVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined4 uVar8;
  size_t *psVar9;
  long lVar10;
  undefined1 auVar11 [16];
  void *local_d0;
  undefined8 uStack_c8;
  char cStack_b9;
  void *local_b8 [2];
  char cStack_a1;
  undefined1 uStack_99;
  char *local_98;
  undefined8 local_90;
  undefined1 *local_88;
  char *local_80;
  char **ppcStack_78;
  long local_70;
  char **ppcStack_68;
  char *local_60;
  long *plStack_58;
  size_t local_50;
  undefined8 uStack_48;
  void *local_40;
  
  cVar2 = *(char *)(param_1 + 0xdf);
  lVar10 = (long)cVar2;
  lVar6 = lVar10;
  if (lVar10 < 0) {
    lVar6 = *(long *)(param_1 + 0xd0);
  }
  if ((((lVar6 == 0) || (psVar9 = (size_t *)(param_1 + 0xb0), *psVar9 == 0)) ||
      (plVar7 = *(long **)(param_1 + 0xa0), plVar7 == (long *)0x0)) ||
     (puVar1 = (undefined8 *)*plVar7, (undefined8 *)plVar7[1] == puVar1)) {
    uVar5 = FUN_004022fc();
    if ((uVar5 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../rtc_base/openssl_stream_adapter.cc",0x26b2,
                   "Missing digest or peer certificate.");
    }
    return 0;
  }
  uStack_48 = _UNK_001f2a38;
  local_50 = _DAT_001f2a30;
  local_40 = operator_new__(0x40);
  plVar7 = (long *)*puVar1;
  if (cVar2 < '\0') {
    lVar6 = *(long *)(param_1 + 200);
    lVar10 = *(long *)(param_1 + 0xd0);
  }
  else {
    lVar6 = param_1 + 200;
  }
  uVar5 = (**(code **)(*plVar7 + 0x30))(plVar7,lVar6,lVar10,&local_50);
  if ((uVar5 & 1) == 0) {
    uVar5 = FUN_004022fc();
    if ((uVar5 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../rtc_base/openssl_stream_adapter.cc",0x26ea,
                   "Failed to compute peer cert digest.");
      uVar8 = 0;
      goto LAB_0083f13c;
    }
  }
  else {
    if ((local_50 == *psVar9) &&
       (iVar4 = memcmp(local_40,*(void **)(param_1 + 0xc0),local_50), iVar4 == 0)) {
      uVar8 = 1;
      *(undefined1 *)(param_1 + 0xa8) = 1;
      goto LAB_0083f13c;
    }
    uVar5 = FUN_004022fc();
    if ((uVar5 & 1) == 0) {
      local_98 = "../../rtc_base/openssl_stream_adapter.cc";
      local_90 = 0x2712;
      local_88 = &uStack_99;
      ppcStack_78 = &local_98;
      local_80 = "Rejected peer certificate due to mismatched digest using ";
      ppcStack_68 = &local_80;
      plStack_58 = &local_70;
      local_60 = ". Expected ";
      local_70 = param_1 + 200;
      auVar11 = FUN_00840acc(psVar9);
      FUN_00624c40(local_b8,auVar11._0_8_,auVar11._8_8_,0x3a);
      FUN_00620008(&local_d0,local_40,local_50);
      FUN_00624c40(&local_d0,local_d0,uStack_c8,0x3a);
      puVar1 = (undefined8 *)((undefined8 *)plStack_58[1])[1];
      FUN_00623bb0("\r\t\n\t\n\t\n",*puVar1,*(undefined4 *)(puVar1 + 1),*(undefined8 *)plStack_58[1]
                   ,*plStack_58,local_60,local_b8," got ",&local_d0);
      if (cStack_b9 < '\0') {
        operator_delete(local_d0);
      }
      if (cStack_a1 < '\0') {
        operator_delete(local_b8[0]);
      }
    }
  }
  uVar8 = 0;
LAB_0083f13c:
  pvVar3 = local_40;
  local_40 = (void *)0x0;
  if (pvVar3 != (void *)0x0) {
    operator_delete__(pvVar3);
  }
  return uVar8;
}


// ===== 0083f150  FUN_0083f150 =====

void FUN_0083f150(long param_1,undefined8 param_2,undefined8 param_3,int param_4,uint param_5,
                 ulong param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  char *local_158;
  char **ppcStack_150;
  long local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  uint local_12c;
  undefined8 *local_128;
  undefined8 *local_120;
  char **ppcStack_118;
  ulong local_110;
  undefined *puStack_108;
  char **local_100;
  undefined *puStack_f8;
  char *local_f0;
  undefined1 *puStack_e8;
  undefined8 **local_e0;
  undefined1 *puStack_d8;
  undefined1 *local_d0;
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
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  local_140 = param_2;
  uStack_138 = param_3;
  uVar4 = FUN_004022fc();
  if ((uVar4 & 1) == 0) {
    local_e0 = &local_128;
    local_f0 = "../../rtc_base/openssl_stream_adapter.cc";
    puStack_e8 = (undefined1 *)0x21f2;
    local_120 = &local_140;
    ppcStack_118 = &local_158;
    local_158 = "OpenSSLStreamAdapter::Error(";
    ppcStack_150 = &local_f0;
    FUN_00623bb0(&DAT_0021f2d2,"../../rtc_base/openssl_stream_adapter.cc",0x21f2,
                 "OpenSSLStreamAdapter::Error(",&local_140,&DAT_001e1644,param_4,&DAT_001e1644,
                 param_5 & 0xff,&DAT_001ca519);
  }
  if ((param_4 == 1) && (uVar4 = FUN_004022fc(), (uVar4 & 1) == 0)) {
    local_128 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
    local_158 = (char *)0x0;
    ppcStack_150 = (char **)0x0;
    local_148 = 0;
    local_12c = 0xaaaaaaaa;
    uVar5 = FUN_007776cc(&local_128,&local_12c);
    puVar3 = PTR_FUN_00d52178;
    puVar2 = PTR_FUN_00d52168;
    if ((int)uVar5 != 0) {
      do {
        puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
        local_c0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
        local_a0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
        local_d0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
        local_f0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
        local_e0 = (undefined8 **)&DAT_aaaaaaaaaaaaaaaa;
        local_80 = &DAT_aaaaaaaaaaaaaaaa;
        FUN_00777b7c(uVar5,&local_f0,0x78);
        local_120 = local_128;
        ppcStack_118 = (char **)puVar3;
        local_110 = (ulong)local_12c | 0xaaaaaaaa00000000;
        puStack_108 = puVar2;
        puStack_f8 = puVar3;
        local_100 = &local_f0;
        FUN_006ef0c0(&local_158,"\nOpenSSL error (file: %s, line: %d): %s",0x27,&local_120,3);
        uVar5 = FUN_007776cc(&local_128,&local_12c);
      } while ((int)uVar5 != 0);
    }
    FUN_00623bb0(&DAT_001f4e90,"../../rtc_base/openssl_stream_adapter.cc",0x2212,"GetOpenSslError: "
                 ,&local_158);
    if (local_148 < 0) {
      operator_delete(local_158);
    }
  }
  *(undefined4 *)(param_1 + 0x78) = 4;
  *(int *)(param_1 + 0x80) = param_4;
  FUN_0083ea7c(param_1,param_5);
  if (((param_6 & 1) != 0) && (*(code **)(param_1 + 0x28) != (code *)0x0)) {
    (**(code **)(param_1 + 0x28))(param_1 + 0x10,8,param_4);
  }
  if (*(long *)(lVar1 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0083f378  FUN_0083f378 =====

void FUN_0083f378(undefined8 *param_1,long param_2)

{
  char *__s;
  size_t sVar1;
  undefined1 uVar2;
  
  if (*(int *)(param_2 + 0x78) == 3) {
    FUN_007f2cd0(*(undefined8 *)(param_2 + 0x88));
    __s = (char *)FUN_007f70ec();
    *param_1 = __s;
    if (__s == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string_view:278: libc++ Hardening assertion __s != nullptr failed: null pointer passed to non-null argument of char_traits<...>::length\n"
                );
    }
    sVar1 = strlen(__s);
    uVar2 = 1;
    param_1[1] = sVar1;
  }
  else {
    uVar2 = 0;
    *(undefined1 *)param_1 = 0;
  }
  *(undefined1 *)(param_1 + 2) = uVar2;
  return;
}


// ===== 0083f3ec  FUN_0083f3ec =====

long FUN_0083f3ec(long param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x78) == 3) {
    lVar2 = FUN_007f2cd0(*(undefined8 *)(param_1 + 0x88));
    if (lVar2 != 0) {
      uVar1 = FUN_007f704c();
      lVar2 = 1;
      *param_2 = uVar1 & 0xffff;
    }
    return lVar2;
  }
  return 0;
}


// ===== 0083f448  FUN_0083f448 =====

uint FUN_0083f448(long param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x78) == 3) {
    iVar1 = FUN_007f3848(*(undefined8 *)(param_1 + 0x88));
    if (*(int *)(param_1 + 0x110) == 1) {
      if (iVar1 - 0xfefcU < 4) {
        return *(uint *)(&DAT_001f1a40 + (ulong)(iVar1 - 0xfefcU) * 4);
      }
    }
    else if (iVar1 - 0x301U < 4) {
      return iVar1 - 0x301U;
    }
  }
  return 0xffffffff;
}


// ===== 0083f4c0  FUN_0083f4c0 =====

bool FUN_0083f4c0(long param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x78);
  if (iVar1 == 3) {
    uVar2 = FUN_007f3848(*(undefined8 *)(param_1 + 0x88));
    *param_2 = uVar2;
  }
  return iVar1 == 3;
}


// ===== 0083f504  FUN_0083f504 =====

undefined8 FUN_0083f504(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x78) == 3) {
    uVar1 = FUN_007f2984(*(undefined8 *)(param_1 + 0x88));
    return uVar1;
  }
  return 0;
}


// ===== 0083f524  FUN_0083f524 =====

bool FUN_0083f524(long param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_0080acac(*(undefined8 *)(param_1 + 0x88),param_2[2],*param_2,"EXTRACTOR-dtls_srtp",
                       0x13,0,0,0);
  return iVar1 == 1;
}


// ===== 0083f570  FUN_0083f570 =====

bool FUN_0083f570(long param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong __n;
  ulong uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  void *__dest;
  undefined8 uVar8;
  char *pcVar9;
  void *__src;
  int local_48;
  int iStack_44;
  
  if ((*(int *)(param_1 + 0x78) == 3) &&
     (lVar6 = FUN_0082ce74(*(undefined8 *)(param_1 + 0x88)), lVar6 != 0)) {
    local_48 = -0x55555556;
    iStack_44 = -0x55555556;
    uVar7 = FUN_0083e274(*(undefined4 *)(lVar6 + 8),&iStack_44,&local_48);
    if ((uVar7 & 1) != 0) {
      __n = *param_2;
      uVar4 = param_2[1];
      iVar5 = (local_48 + iStack_44) * 2;
      lVar6 = (long)iVar5;
      uVar7 = __n + lVar6;
      if (uVar4 < uVar7) {
        uVar1 = uVar4 + (uVar4 >> 1);
        uVar2 = uVar7;
        if (uVar7 <= uVar1) {
          uVar2 = uVar1;
        }
        __dest = operator_new__(uVar2);
        __src = (void *)param_2[2];
        if (__src != (void *)0x0) {
          memcpy(__dest,__src,__n);
        }
        if (uVar4 != 0) {
          FUN_00841100(__src,uVar4);
          __src = (void *)param_2[2];
        }
        param_2[2] = (ulong)__dest;
        if (__src != (void *)0x0) {
          operator_delete__(__src);
        }
        param_2[1] = uVar2;
      }
      *param_2 = uVar7;
      if (uVar7 < __n) {
        FUN_00841100(param_2[2] + uVar7,-lVar6);
      }
      lVar3 = 0;
      if (iVar5 != 0) {
        lVar3 = param_2[2] + __n;
      }
      iVar5 = FUN_0080acac(*(undefined8 *)(param_1 + 0x88),lVar3,lVar6,"EXTRACTOR-dtls_srtp",0x13,0,
                           0,0);
      if (iVar5 == 0) {
        lVar6 = 0;
      }
      *param_2 = lVar6 + __n;
      return iVar5 != 0;
    }
    uVar7 = FUN_004249b0();
    if ((uVar7 & 1) != 0) {
      return false;
    }
    pcVar9 = "Unable to get key and salt len from crypto suite";
    uVar8 = 0xffb;
  }
  else {
    uVar7 = FUN_004249b0();
    if ((uVar7 & 1) != 0) {
      return false;
    }
    pcVar9 = "No crypto suite";
    uVar8 = 0xfd3;
  }
  FUN_00623bb0(&DAT_001f4e98,"../../rtc_base/openssl_stream_adapter.cc",uVar8,pcVar9);
  return false;
}


// ===== 0083f720  FUN_0083f720 =====

long FUN_0083f720(long param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x78) == 3) {
    lVar2 = FUN_0082ce74(*(undefined8 *)(param_1 + 0x88));
    if (lVar2 != 0) {
      puVar1 = (undefined8 *)(lVar2 + 8);
      lVar2 = 1;
      *param_2 = (int)*puVar1;
    }
    return lVar2;
  }
  return 0;
}


// ===== 0083f774  FUN_0083f774 =====

undefined8 FUN_0083f774(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x78) == 3) {
    uVar1 = FUN_007f2d80(*(undefined8 *)(param_1 + 0x88));
    return uVar1;
  }
  return 0;
}


// ===== 0083f794  FUN_0083f794 =====

undefined4 FUN_0083f794(long param_1,long *param_2)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  int *piVar3;
  int iVar4;
  size_t sVar5;
  ulong uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  char *__s;
  int *piVar10;
  undefined8 **local_68;
  ulong uStack_60;
  undefined8 local_58;
  
  if (*(int *)(param_1 + 0x78) == 0) {
    piVar10 = (int *)*param_2;
    piVar3 = (int *)param_2[1];
    local_68 = (undefined8 ***)0x0;
    uStack_60 = 0;
    local_58 = 0;
    if (piVar10 == piVar3) {
      uVar7 = 0;
    }
    else {
      do {
        iVar4 = *piVar10;
        uVar7 = iVar4 - 1;
        if ((7 < uVar7) || ((0xc3U >> (ulong)(uVar7 & 0x1f) & 1) == 0)) {
          uVar6 = FUN_004249b0();
          if ((uVar6 & 1) != 0) goto LAB_0083f8b8;
          FUN_00623bb0(&DAT_001f4e94,"../../rtc_base/openssl_stream_adapter.cc",0x11db,
                       "Could not find cipher: ",iVar4);
          uVar8 = 0;
          goto LAB_0083f914;
        }
        puVar9 = (undefined8 *)(&PTR_PTR_s_SRTP_AES128_CM_SHA1_80_00d3a020)[uVar7];
        uVar6 = uStack_60;
        if ((local_58 & 0x8000000000000000) == 0) {
          uVar6 = local_58 >> 0x38;
        }
        if (uVar6 != 0) {
          FUN_00547cac(&local_68,&DAT_001ca603,1);
        }
        __s = (char *)*puVar9;
        if (__s == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/string:3112: libc++ Hardening assertion __s != nullptr failed: string::append received nullptr\n"
                    );
        }
        sVar5 = strlen(__s);
        FUN_00547cac(&local_68,__s,sVar5);
        piVar10 = piVar10 + 1;
      } while (piVar10 != piVar3);
      uVar7 = (uint)local_58._7_1_;
    }
    uVar6 = uStack_60;
    if ((uVar7 & 0x80) == 0) {
      uVar6 = (ulong)uVar7;
    }
    if (uVar6 == 0) {
LAB_0083f8b8:
      uVar8 = 0;
    }
    else {
      pppuVar1 = (undefined8 ***)(param_1 + 0xe0);
      if (pppuVar1 != &local_68) {
        if (*(char *)(param_1 + 0xf7) < '\0') {
          pppuVar2 = (undefined8 ***)local_68;
          if ((uVar7 & 0x80) == 0) {
            pppuVar2 = &local_68;
          }
          FUN_00547f08(pppuVar1,pppuVar2,uVar6);
        }
        else if (uVar7 >> 7 == 0) {
          *(ulong *)(param_1 + 0xe8) = uStack_60;
          *pppuVar1 = local_68;
          *(ulong *)(param_1 + 0xf0) = local_58;
        }
        else {
          FUN_00547fc0(pppuVar1,local_68);
        }
      }
      uVar8 = 1;
    }
LAB_0083f914:
    if ((long)local_58 < 0) {
      operator_delete(local_68);
    }
  }
  else {
    uVar8 = 0;
  }
  return uVar8;
}


// ===== 0083f964  FUN_0083f964 =====

bool FUN_0083f964(long param_1)

{
  return *(int *)(param_1 + 0x78) == 3;
}


// ===== 0083f978  FUN_0083f978 =====

int FUN_0083f978(long param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x78) == 0) {
    iVar1 = (**(code **)(**(long **)(param_1 + 0x38) + 0x10))();
    if (iVar1 == 2) {
      *(undefined4 *)(param_1 + 0x78) = 2;
      iVar1 = FUN_0083fa10(param_1);
      if (iVar1 != 0) {
        FUN_0083f150(param_1,"BeginSSL",8,iVar1,0,0);
      }
    }
    else {
      iVar1 = 0;
      *(undefined4 *)(param_1 + 0x78) = 1;
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}


// ===== 0083fa10  FUN_0083fa10 =====

undefined8 FUN_0083fa10(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  lVar2 = FUN_00840648();
  *(long *)(param_1 + 0x90) = lVar2;
  if (lVar2 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    if (((DAT_00d80380 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d80380), iVar1 != 0)) {
      DAT_00d80378 = FUN_00840b70();
      FUN_0054ff1c(&DAT_00d80380);
    }
    lVar2 = FUN_0076f70c(DAT_00d80378);
    if (lVar2 != 0) {
      FUN_0076fe28(lVar2,uVar5);
      lVar3 = FUN_007f0714(*(undefined8 *)(param_1 + 0x90));
      *(long *)(param_1 + 0x88) = lVar3;
      if (lVar3 == 0) {
        FUN_0076f794(lVar2);
      }
      else {
        FUN_007f2d28(lVar3,0,param_1);
        FUN_007f1390(*(undefined8 *)(param_1 + 0x88),lVar2,lVar2);
        FUN_007f1ee4(*(undefined8 *)(param_1 + 0x88),0x1000);
        FUN_007f2160(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x11c));
        if (*(int *)(param_1 + 0x110) == 1) {
          FUN_00830994(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x118));
        }
        if (((*(byte *)(param_1 + 0x128) & 1) != 0) ||
           (iVar1 = FUN_007f237c(*(undefined8 *)(param_1 + 0x88),*(long *)(param_1 + 0xf8),
                                 *(long *)(param_1 + 0x100) - *(long *)(param_1 + 0xf8) >> 1),
           iVar1 != 0)) {
          FUN_007f1f08(*(undefined8 *)(param_1 + 0x88),3);
          uVar5 = FUN_00840414(param_1);
          return uVar5;
        }
        uVar4 = FUN_004022fc();
        if ((uVar4 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e98,"../../rtc_base/openssl_stream_adapter.cc",0x1f42,
                       "Failed to call SSL_set1_group_ids.");
        }
      }
    }
  }
  return 0xffffffff;
}


// ===== 0083fb78  FUN_0083fb78 =====

void FUN_0083fb78(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x110) = param_2;
  return;
}


// ===== 0083fb84  FUN_0083fb84 =====

void FUN_0083fb84(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x114) = param_2;
  return;
}


// ===== 0083fb90  FUN_0083fb90 =====

void FUN_0083fb90(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x118) = param_2;
  if ((*(long *)(param_1 + 0x90) != 0) && (*(int *)(param_1 + 0x110) == 1)) {
    FUN_00830994(*(undefined8 *)(param_1 + 0x88));
    return;
  }
  return;
}


// ===== 0083fbb8  FUN_0083fbb8 =====

void FUN_0083fbb8(long param_1,undefined4 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined1 *local_30;
  undefined1 *puStack_28;
  
  *(undefined4 *)(param_1 + 0x118) = param_2;
  if ((((*(long *)(param_1 + 0x90) != 0) && (*(int *)(param_1 + 0x110) == 1)) &&
      (FUN_00841cf8(param_1 + 0x70), *(long *)(param_1 + 0x88) != 0)) &&
     (uVar2 = FUN_00841d54(param_1 + 0x70), (uVar2 & 1) == 0)) {
    puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
    local_30 = &DAT_aaaaaaaaaaaaaaaa;
    iVar1 = FUN_00830a24(*(undefined8 *)(param_1 + 0x88),&local_30);
    if (iVar1 != 0) {
      FUN_0084054c(param_1,((int)(SUB168(SEXT816((long)puStack_28) * SEXT816(0x20c49ba5e353f7cf),8)
                                 >> 7) -
                           (SUB164(SEXT816((long)puStack_28) * SEXT816(0x20c49ba5e353f7cf),0xc) >>
                           0x1f)) + (int)local_30 * 1000);
    }
  }
  return;
}


// ===== 0083fc68  FUN_0083fc68 =====

void FUN_0083fc68(long param_1,undefined4 param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x11c) = param_2;
  if ((*(long *)(param_1 + 0x88) != 0) && (iVar1 = FUN_007f2160(), iVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../rtc_base/openssl_stream_adapter.cc",0x298,"SSL_set_mtu(ssl_, dtls_mtu_)",
                 &DAT_001fbee0,"Call to SSL_set_mtu failed.");
  }
  return;
}


// ===== 0083fcc0  FUN_0083fcc0 =====

undefined8
FUN_0083fcc0(long param_1,undefined8 param_2,ulong param_3,long *param_4,undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 *local_50;
  undefined1 *puStack_48;
  
  iVar2 = *(int *)(param_1 + 0x78);
  if (1 < iVar2 - 1U) {
    if (iVar2 != 3) {
      if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0083fd30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)(**(long **)(param_1 + 0x38) + 0x20))();
        return uVar4;
      }
LAB_0083fe44:
      *param_5 = *(undefined4 *)(param_1 + 0x80);
      return 0;
    }
    if ((*(char *)(param_1 + 0x30) != '\x01') || ((*(byte *)(param_1 + 0xa8) & 1) != 0)) {
      if (param_3 == 0) {
        *param_4 = 0;
        return 1;
      }
      *(undefined1 *)(param_1 + 0x85) = 0;
      if (param_3 >> 0x1f != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0061fd88("../../rtc_base/numerics/safe_conversions.h",0x24,
                     "IsValueInRangeForNumericType<Dst>(value)",&DAT_001f5fa0);
      }
      iVar1 = FUN_007f1a50(*(undefined8 *)(param_1 + 0x88));
      iVar2 = FUN_007f1da8(*(undefined8 *)(param_1 + 0x88),iVar1);
      if ((*(long *)(param_1 + 0x88) != 0) &&
         (uVar5 = FUN_00841d54(param_1 + 0x70), (uVar5 & 1) == 0)) {
        puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
        local_50 = &DAT_aaaaaaaaaaaaaaaa;
        iVar3 = FUN_00830a24(*(undefined8 *)(param_1 + 0x88),&local_50);
        if (iVar3 != 0) {
          FUN_0084054c(param_1,((int)(SUB168(SEXT816((long)puStack_48) * SEXT816(0x20c49ba5e353f7cf)
                                             ,8) >> 7) -
                               (SUB164(SEXT816((long)puStack_48) * SEXT816(0x20c49ba5e353f7cf),0xc)
                               >> 0x1f)) + (int)local_50 * 1000);
        }
      }
      if (iVar2 != 3) {
        if (iVar2 == 2) {
          *(undefined1 *)(param_1 + 0x85) = 1;
          return 2;
        }
        if (iVar2 == 0) {
          *param_4 = (long)iVar1;
          return 1;
        }
        if (iVar2 == 0) {
          iVar2 = -1;
        }
        FUN_0083f150(param_1,"SSL_write",9,iVar2,0,0);
        goto LAB_0083fe44;
      }
    }
  }
  return 2;
}


// ===== 0083fe8c  FUN_0083fe8c =====

ulong FUN_0083fe8c(long param_1,undefined8 param_2,ulong param_3,long *param_4,undefined4 *param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined1 *local_50;
  undefined1 *puStack_48;
  
  iVar1 = *(int *)(param_1 + 0x78);
  if (iVar1 < 3) {
    if (iVar1 - 1U < 2) {
      return 2;
    }
    if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0083ff1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(**(long **)(param_1 + 0x38) + 0x18))();
      return uVar4;
    }
  }
  else if (iVar1 == 3) {
    if ((*(char *)(param_1 + 0x30) == '\x01') && ((*(byte *)(param_1 + 0xa8) & 1) == 0)) {
      return 2;
    }
    if (param_3 == 0) {
      *param_4 = 0;
      return 1;
    }
    *(undefined1 *)(param_1 + 0x84) = 0;
    if (param_3 >> 0x1f != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../rtc_base/numerics/safe_conversions.h",0x24,
                   "IsValueInRangeForNumericType<Dst>(value)",&DAT_001f5fa0);
    }
    iVar1 = FUN_007f16e4(*(undefined8 *)(param_1 + 0x88));
    uVar2 = FUN_007f1da8(*(undefined8 *)(param_1 + 0x88),iVar1);
    if ((*(long *)(param_1 + 0x88) != 0) && (uVar4 = FUN_00841d54(param_1 + 0x70), (uVar4 & 1) == 0)
       ) {
      puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
      local_50 = &DAT_aaaaaaaaaaaaaaaa;
      iVar3 = FUN_00830a24(*(undefined8 *)(param_1 + 0x88),&local_50);
      if (iVar3 != 0) {
        FUN_0084054c(param_1,((int)(SUB168(SEXT816((long)puStack_48) * SEXT816(0x20c49ba5e353f7cf),8
                                          ) >> 7) -
                             (SUB164(SEXT816((long)puStack_48) * SEXT816(0x20c49ba5e353f7cf),0xc) >>
                             0x1f)) + (int)local_50 * 1000);
      }
    }
    if ((int)uVar2 < 3) {
      if (uVar2 == 0) {
        *param_4 = (long)iVar1;
        if ((*(int *)(param_1 + 0x110) != 1) ||
           (iVar1 = FUN_007f1f38(*(undefined8 *)(param_1 + 0x88)), iVar1 == 0)) {
          return 1;
        }
        FUN_008400d8(param_1,iVar1);
        uVar5 = 0xff0001;
        goto LAB_00840044;
      }
      if (uVar2 == 2) {
        return (ulong)uVar2;
      }
    }
    else {
      if (uVar2 == 3) {
        *(undefined1 *)(param_1 + 0x84) = 1;
        return 2;
      }
      if (uVar2 == 6) {
        FUN_0083ea7c(param_1,0);
        (**(code **)(**(long **)(param_1 + 0x38) + 0x28))();
        return 3;
      }
    }
    if (uVar2 == 0) {
      uVar2 = 0xffffffff;
    }
    FUN_0083f150(param_1,"SSL_read",8,uVar2,0,0);
  }
  else if (iVar1 == 5) {
    return 3;
  }
  uVar5 = *(undefined4 *)(param_1 + 0x80);
LAB_00840044:
  *param_5 = uVar5;
  return 0;
}


// ===== 008400d8  FUN_008400d8 =====

void FUN_008400d8(long param_1,uint param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  undefined1 *local_880;
  undefined1 *puStack_878;
  undefined1 auStack_868 [2048];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (param_2 != 0) {
    memset(auStack_868,0xaa,0x800);
    do {
      uVar6 = param_2;
      if (0x7ff < param_2) {
        uVar6 = 0x800;
      }
      iVar2 = FUN_007f16e4(*(undefined8 *)(param_1 + 0x88),auStack_868,uVar6);
      iVar3 = FUN_007f1da8(*(undefined8 *)(param_1 + 0x88),iVar2);
      if ((*(long *)(param_1 + 0x88) != 0) &&
         (uVar5 = FUN_00841d54(param_1 + 0x70), (uVar5 & 1) == 0)) {
        puStack_878 = &DAT_aaaaaaaaaaaaaaaa;
        local_880 = &DAT_aaaaaaaaaaaaaaaa;
        iVar4 = FUN_00830a24(*(undefined8 *)(param_1 + 0x88),&local_880);
        if (iVar4 != 0) {
          FUN_0084054c(param_1,((int)(SUB168(SEXT816((long)puStack_878) *
                                             SEXT816(0x20c49ba5e353f7cf),8) >> 7) -
                               (SUB164(SEXT816((long)puStack_878) * SEXT816(0x20c49ba5e353f7cf),0xc)
                               >> 0x1f)) + (int)local_880 * 1000);
        }
      }
      if (iVar3 != 0) {
        FUN_0083f150(param_1,"SSL_read",8,iVar3,0,0);
        break;
      }
      param_2 = param_2 - iVar2;
    } while (param_2 != 0);
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0084021c  FUN_0084021c =====

void FUN_0084021c(long param_1)

{
  FUN_0083ea7c(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00840250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x38) + 0x28))();
  return;
}


// ===== 00840254  FUN_00840254 =====

undefined4 FUN_00840254(long param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x78) - 1U < 2) {
    return 1;
  }
  if (*(int *)(param_1 + 0x78) == 3) {
    if (*(char *)(param_1 + 0x30) == '\x01') {
      uVar1 = 1;
      if (*(char *)(param_1 + 0xa8) != '\0') {
        uVar1 = 2;
      }
      return uVar1;
    }
    return 2;
  }
  return 0;
}


// ===== 008402a8  FUN_008402a8 =====

void FUN_008402a8(long param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar4;
  uint uVar5;
  
  if ((param_2 & 1) == 0) {
LAB_008402cc:
    uVar4 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x78) == 1) {
      *(undefined4 *)(param_1 + 0x78) = 2;
      iVar1 = FUN_0083fa10(param_1);
      if (iVar1 != 0) {
        pcVar2 = "BeginSSL";
        uVar3 = 8;
        goto LAB_00840360;
      }
      goto LAB_008402cc;
    }
    uVar4 = 1;
  }
  if ((param_2 & 6) != 0) {
    iVar1 = *(int *)(param_1 + 0x78);
    if (iVar1 == 3) {
      if ((param_2 >> 1 & 1) == 0) {
        if (((param_2 >> 2 & 1) == 0) ||
           (uVar4 = uVar4 | 4, uVar5 = uVar4, *(char *)(param_1 + 0x84) != '\x01'))
        goto LAB_008403b4;
      }
      else {
        uVar5 = uVar4 | 4;
        if ((*(byte *)(param_1 + 0x85) & 1) == 0 && (param_2 & 4) == 0) {
          uVar5 = uVar4;
        }
      }
      uVar4 = uVar5 | 2;
    }
    else if (iVar1 == 2) {
      iVar1 = FUN_00840414(param_1);
      if (iVar1 != 0) {
        pcVar2 = "ContinueSSL";
        uVar3 = 0xb;
LAB_00840360:
        FUN_0083f150(param_1,pcVar2,uVar3,iVar1,0,1);
        return;
      }
    }
    else if (iVar1 == 0) {
      uVar4 = uVar4 | param_2 & 6;
    }
  }
LAB_008403b4:
  if ((param_2 >> 3 & 1) == 0) {
    if (uVar4 == 0) {
      return;
    }
    param_3 = 0;
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x28);
  }
  else {
    FUN_0083ea7c(param_1,0);
    uVar4 = uVar4 | 8;
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x28);
  }
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00840410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1 + 0x10,uVar4,param_3);
  return;
}


// ===== 00840414  FUN_00840414 =====

int FUN_00840414(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined1 *local_30;
  undefined1 *puStack_28;
  
  FUN_00841cf8(param_1 + 0x70);
  if (*(int *)(param_1 + 0x7c) == 0) {
    uVar1 = FUN_007f158c(*(undefined8 *)(param_1 + 0x88));
  }
  else {
    uVar1 = FUN_007f15b8();
  }
  iVar2 = FUN_007f1da8(*(undefined8 *)(param_1 + 0x88),uVar1);
  if (1 < iVar2 - 2U) {
    if (iVar2 != 0) {
      uVar3 = FUN_00777778();
      if (*(code **)(param_1 + 0x58) != (code *)0x0) {
        (**(code **)(param_1 + 0x58))(param_1 + 0x40,(uVar3 & 0xfff) == 0xb8);
      }
      if (iVar2 != 0) {
        return iVar2;
      }
      return -1;
    }
    *(undefined4 *)(param_1 + 0x78) = 3;
    if (((*(char *)(param_1 + 0x30) != '\x01') || (*(char *)(param_1 + 0xa8) == '\x01')) &&
       (*(code **)(param_1 + 0x28) != (code *)0x0)) {
      (**(code **)(param_1 + 0x28))(param_1 + 0x10,7,0);
    }
  }
  if ((*(long *)(param_1 + 0x88) != 0) && (uVar4 = FUN_00841d54(param_1 + 0x70), (uVar4 & 1) == 0))
  {
    puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
    local_30 = &DAT_aaaaaaaaaaaaaaaa;
    iVar2 = FUN_00830a24(*(undefined8 *)(param_1 + 0x88),&local_30);
    if (iVar2 != 0) {
      FUN_0084054c(param_1,((int)(SUB168(SEXT816((long)puStack_28) * SEXT816(0x20c49ba5e353f7cf),8)
                                 >> 7) -
                           (SUB164(SEXT816((long)puStack_28) * SEXT816(0x20c49ba5e353f7cf),0xc) >>
                           0x1f)) + (int)local_30 * 1000);
    }
  }
  return 0;
}


// ===== 0084054c  FUN_0084054c =====

void FUN_0084054c(long param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  void *pvVar3;
  int iVar4;
  undefined8 uVar5;
  void *pvVar6;
  undefined1 uStack_61;
  long local_60;
  long lStack_58;
  code *local_50;
  code *pcStack_48;
  void *local_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  lVar2 = *(long *)(param_1 + 0x68);
  if (lVar2 != 0) {
    FUN_00d0f740(1,lVar2);
  }
  local_50 = FUN_0084107c;
  pcStack_48 = FUN_00840f20;
  local_60 = lVar2;
  lStack_58 = param_1;
  uVar5 = FUN_00622394();
  FUN_00841954(&local_38,uVar1,(long)param_2 * 1000,&local_60,0,uVar5,&uStack_61);
  pvVar3 = local_38;
  pvVar6 = *(void **)(param_1 + 0x70);
  local_38 = (void *)0x0;
  *(void **)(param_1 + 0x70) = pvVar3;
  if (pvVar6 != (void *)0x0) {
    iVar4 = FUN_00d0f7a0(0xffffffff,pvVar6);
    if (iVar4 == 1) {
      operator_delete(pvVar6);
    }
    pvVar3 = local_38;
    if ((local_38 != (void *)0x0) && (iVar4 = FUN_00d0f7a0(0xffffffff,local_38), iVar4 == 1)) {
      operator_delete(pvVar3);
    }
  }
  (*local_50)(0,&local_60,&local_60);
  return;
}


// ===== 00840648  FUN_00840648 =====

long FUN_00840648(long param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if (*(int *)(param_1 + 0x110) == 1) {
    FUN_0083ced0();
  }
  else {
    FUN_0083dce8();
  }
  lVar3 = FUN_007efda4();
  if (lVar3 == 0) {
    return 0;
  }
  uVar7 = 0xfffffefd;
  if (*(int *)(param_1 + 0x110) != 1) {
    uVar7 = 0x303;
  }
  if (*(int *)(param_1 + 0x120) == 1) {
LAB_008406b0:
    uVar8 = 0xfefc;
  }
  else {
    if (*(int *)(param_1 + 0x120) == 2) {
      uVar7 = 0xfefc;
      goto LAB_008406b0;
    }
    bVar1 = *(int *)(param_1 + 0x114) == 3;
    uVar8 = 0x303;
    if (bVar1) {
      uVar8 = 0x304;
    }
    uVar9 = 0xfffffefc;
    if (!bVar1) {
      uVar9 = 0xfffffefd;
    }
    if (*(int *)(param_1 + 0x110) != 0) {
      uVar8 = uVar9;
    }
  }
  FUN_007f36a0(lVar3,uVar7);
  FUN_007f3774(lVar3,uVar8);
  if (DAT_00d80370 == '\x01') {
    FUN_007f2d40(lVar3,FUN_008407dc);
  }
  uVar4 = FUN_00836e58();
  FUN_007f1f2c(lVar3,uVar4);
  if ((*(long *)(param_1 + 0x98) == 0) ||
     (uVar5 = FUN_008322e8(*(long *)(param_1 + 0x98),lVar3), (uVar5 & 1) != 0)) {
    FUN_007f5c54(lVar3,PTR_FUN_00d52d50);
    uVar7 = 3;
    if (*(char *)(param_1 + 0x30) == '\0') {
      uVar7 = 1;
    }
    FUN_007f2a38(lVar3,uVar7,FUN_00840848);
    FUN_007f29e0(lVar3,"DEFAULT:!NULL:!aNULL:!SHA256:!SHA384:!aECDH:!AESGCM+AES256:!aPSK:!3DES");
    plVar6 = (long *)(param_1 + 0xe0);
    if (*(char *)(param_1 + 0xf7) < '\0') {
      if (*(long *)(param_1 + 0xe8) != 0) {
        plVar6 = (long *)*plVar6;
        goto LAB_00840790;
      }
    }
    else if (*(char *)(param_1 + 0xf7) != '\0') {
LAB_00840790:
      iVar2 = FUN_0082ce84(lVar3,plVar6);
      if (iVar2 != 0) goto LAB_0084079c;
    }
    FUN_007f2da4(lVar3,1);
    FUN_007f1ecc(lVar3,0x4000);
  }
  else {
LAB_0084079c:
    FUN_007f04ac(lVar3);
    lVar3 = 0;
  }
  return lVar3;
}


// ===== 008407dc  FUN_008407dc =====

void FUN_008407dc(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  
  lVar2 = FUN_0062587c();
  iVar3 = (int)((ulong)lVar2 >> 0x20);
  lVar1 = (lVar2 / 1000000000 + ((long)iVar3 >> 0x1f)) - ((long)iVar3 >> 0x1f);
  *param_2 = lVar1;
  param_2[1] = (long)(((int)lVar2 + (int)lVar1 * -1000000000) / 1000);
  return;
}


// ===== 00840848  FUN_00840848 =====

uint FUN_00840848(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  void *pvVar10;
  long lVar11;
  long *plVar12;
  long *local_78;
  long *local_70;
  long *local_68;
  void *local_60;
  long *local_58;
  long *local_50;
  long *local_48;
  
  lVar2 = FUN_007f2d34(param_1,0);
  uVar3 = FUN_0081c488(param_1);
  local_58 = (long *)0x0;
  local_50 = (long *)0x0;
  local_48 = (long *)0x0;
  lVar4 = FUN_00795280();
  if (lVar4 == 0) {
    plVar7 = (long *)0x0;
    plVar9 = (long *)0x0;
    plVar12 = (long *)0x0;
  }
  else {
    lVar11 = 0;
    do {
      lVar5 = FUN_007952e0(uVar3,lVar11);
      pvVar6 = operator_new(0x10);
      if (lVar5 != 0) {
        FUN_007a2ac4(lVar5);
      }
      FUN_00834b40(pvVar6,lVar5);
      local_60 = pvVar6;
      if (local_50 < local_48) {
        if (local_50 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        plVar7 = local_50 + 1;
        *local_50 = (long)pvVar6;
      }
      else {
        plVar7 = (long *)FUN_007ef180(&local_58,&local_60);
      }
      lVar11 = lVar11 + 1;
      plVar9 = local_48;
      plVar12 = local_58;
      local_50 = plVar7;
    } while (lVar4 != lVar11);
  }
  pvVar6 = operator_new(0x18);
  local_50 = (long *)0x0;
  local_48 = (long *)0x0;
  local_58 = (long *)0x0;
  local_78 = plVar12;
  local_70 = plVar7;
  local_68 = plVar9;
  FUN_00832a88(pvVar6,&local_78);
  pvVar10 = *(void **)(lVar2 + 0xa0);
  *(void **)(lVar2 + 0xa0) = pvVar6;
  if (pvVar10 != (void *)0x0) {
    FUN_00832ab8(pvVar10);
    operator_delete(pvVar10);
  }
  plVar12 = local_78;
  plVar9 = local_70;
  if (local_78 != (long *)0x0) {
    while (plVar12 != plVar9) {
      plVar9 = plVar9 + -1;
      if (plVar9 == (long *)0x0) goto LAB_00840aa4;
      plVar7 = (long *)*plVar9;
      *plVar9 = 0;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 8))();
      }
    }
    local_70 = plVar12;
    operator_delete(local_78);
  }
  if (*(char *)(lVar2 + 0xdf) < '\0') {
    if (*(long *)(lVar2 + 0xd0) == 0) goto LAB_008409f8;
  }
  else if (*(char *)(lVar2 + 0xdf) == '\0') {
LAB_008409f8:
    uVar8 = FUN_00417e08();
    if ((uVar8 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../rtc_base/openssl_stream_adapter.cc",0x2841,
                   "Waiting to verify certificate until digest is known.");
    }
    uVar1 = 0;
    plVar9 = local_58;
    goto joined_r0x00840a28;
  }
  uVar1 = FUN_0083ef10(lVar2);
  uVar1 = (uVar1 ^ 0xffffffff) & 1;
  plVar9 = local_58;
joined_r0x00840a28:
  local_58 = plVar9;
  plVar12 = local_50;
  if (plVar9 != (long *)0x0) {
    while (plVar9 != plVar12) {
      plVar12 = plVar12 + -1;
      if (plVar12 == (long *)0x0) {
LAB_00840aa4:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      plVar7 = (long *)*plVar12;
      *plVar12 = 0;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 8))();
      }
    }
    local_50 = plVar9;
    operator_delete(local_58);
  }
  return uVar1;
}


// ===== 00840acc  FUN_00840acc =====

undefined1  [16] FUN_00840acc(undefined8 *param_1)

{
  undefined1 local_20 [16];
  
  FUN_00620008(local_20,param_1[2],*param_1);
  return local_20;
}


// ===== 00840b00  FUN_00840b00 =====

void FUN_00840b00(long param_1)

{
  if (*(long *)(param_1 + 0xa0) != 0) {
    FUN_00832b68();
    return;
  }
  return;
}


// ===== 00840b14  FUN_00840b14 =====

bool FUN_00840b14(long param_1,long *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x78);
  if ((iVar1 == 0) && ((long *)(param_1 + 0xf8) != param_2)) {
    FUN_005d4868((long *)(param_1 + 0xf8),*param_2,param_2[1],param_2[1] - *param_2 >> 1);
  }
  return iVar1 == 0;
}


// ===== 00840b64  FUN_00840b64 =====

undefined4 FUN_00840b64(long param_1)

{
  return *(undefined4 *)(param_1 + 0x124);
}


// ===== 00840b70  FUN_00840b70 =====

undefined8 FUN_00840b70(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0076fd78(0x413,"stream");
  FUN_0076fdec(uVar1,FUN_00840c04);
  FUN_0076fe00(uVar1,FUN_00840cd0);
  FUN_0076fe70(uVar1,FUN_00840d9c);
  FUN_0076fe14(uVar1,FUN_00840e00);
  FUN_0076fdc4(uVar1,FUN_00840e9c);
  FUN_0076fdd8(uVar1,FUN_00840ee4);
  return uVar1;
}


// ===== 00840c04  FUN_00840c04 =====

undefined1 * FUN_00840c04(undefined8 param_1,long param_2,int param_3)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  undefined4 local_3c;
  undefined1 *local_38;
  
  if (param_2 != 0) {
    plVar3 = (long *)FUN_0076fe34();
    FUN_0076fd64(param_1);
    local_38 = &DAT_aaaaaaaaaaaaaaaa;
    lVar1 = 0;
    if (param_3 != 0) {
      lVar1 = param_2;
    }
    local_3c = 0xaaaaaaaa;
    iVar2 = (**(code **)(*plVar3 + 0x20))(plVar3,lVar1,(long)param_3,&local_38,&local_3c);
    if (iVar2 == 2) {
      FUN_0076fd4c(param_1);
    }
    else if (iVar2 == 1) {
      if ((ulong)local_38 >> 0x1f == 0) {
        return local_38;
      }
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../rtc_base/numerics/safe_conversions.h",0x24,
                   "IsValueInRangeForNumericType<Dst>(value)",&DAT_001f5fa0);
    }
  }
  return (undefined1 *)0xffffffff;
}


// ===== 00840cd0  FUN_00840cd0 =====

undefined1 * FUN_00840cd0(undefined8 param_1,long param_2,int param_3)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  undefined4 local_3c;
  undefined1 *local_38;
  
  if (param_2 != 0) {
    plVar3 = (long *)FUN_0076fe34();
    FUN_0076fd64(param_1);
    local_38 = &DAT_aaaaaaaaaaaaaaaa;
    lVar1 = 0;
    if (param_3 != 0) {
      lVar1 = param_2;
    }
    local_3c = 0xaaaaaaaa;
    iVar2 = (**(code **)(*plVar3 + 0x18))(plVar3,lVar1,(long)param_3,&local_38,&local_3c);
    if (iVar2 == 2) {
      FUN_0076fd34(param_1);
    }
    else if (iVar2 == 1) {
      if ((ulong)local_38 >> 0x1f == 0) {
        return local_38;
      }
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../rtc_base/numerics/safe_conversions.h",0x24,
                   "IsValueInRangeForNumericType<Dst>(value)",&DAT_001f5fa0);
    }
  }
  return (undefined1 *)0xffffffff;
}


// ===== 00840d9c  FUN_00840d9c =====

void FUN_00840d9c(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  
  sVar1 = strlen(param_2);
  if (sVar1 >> 0x1f == 0) {
    FUN_00840c04(param_1,param_2,sVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../rtc_base/numerics/safe_conversions.h",0x24,
               "IsValueInRangeForNumericType<Dst>(value)",&DAT_001f5fa0);
}


// ===== 00840e00  FUN_00840e00 =====

ulong FUN_00840e00(undefined8 param_1,int param_2,undefined8 param_3,long *param_4)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  
  if (param_2 == 0x28) {
    uVar3 = 0x4b0;
  }
  else {
    if (param_2 == 0xb) {
      plVar2 = (long *)FUN_0076fe34();
      uVar3 = (**(code **)(*plVar2 + 0x30))();
      if ((uVar3 & 1) == 0) {
        return 1;
      }
      uVar3 = FUN_004022fc();
      if ((uVar3 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../rtc_base/openssl_stream_adapter.cc",0x95a,
                     "Failed to flush stream");
      }
    }
    else if (param_2 == 2) {
      iVar1 = (**(code **)(*param_4 + 0x10))(param_4);
      return (ulong)(iVar1 == 0);
    }
    uVar3 = 0;
  }
  return uVar3;
}


// ===== 00840e9c  FUN_00840e9c =====

undefined8 FUN_00840e9c(undefined8 param_1)

{
  FUN_0076fe58(param_1,0);
  FUN_0076fe40(param_1,1);
  FUN_0076fe28(param_1,0);
  return 1;
}


// ===== 00840ee4  FUN_00840ee4 =====

bool FUN_00840ee4(long param_1)

{
  return param_1 != 0;
}


// ===== 00840ef4  FUN_00840ef4 =====

void FUN_00840ef4(undefined8 *param_1)

{
  FUN_008402a8(*param_1);
  return;
}


// ===== 00840f00  FUN_00840f00 =====

void FUN_00840f00(long *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x28);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00840f18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(*param_1 + 0x10,(int)param_1[1],*(undefined4 *)((long)param_1 + 0xc));
    return;
  }
  return;
}


// ===== 00840f20  FUN_00840f20 =====

undefined8 FUN_00840f20(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined1 *local_30;
  undefined1 *puStack_28;
  
  lVar1 = param_1[1];
  uVar3 = FUN_007ebde8(*param_1);
  if ((uVar3 & 1) != 0) {
    FUN_00841cf8(lVar1 + 0x70);
    iVar2 = FUN_00830b18(*(undefined8 *)(lVar1 + 0x88));
    if (iVar2 < 1) {
      if (iVar2 < 0) {
        uVar3 = FUN_00417e08();
        if ((uVar3 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e98,"../../rtc_base/openssl_stream_adapter.cc",0x1d41,
                       "DTLSv1_handle_timeout() return -1");
        }
        FUN_0083f150(lVar1,"DTLSv1_handle_timeout",0x15,iVar2,0xff,1);
        return 0x7fffffffffffffff;
      }
    }
    else {
      *(int *)(lVar1 + 0x124) = *(int *)(lVar1 + 0x124) + 1;
      uVar3 = FUN_00417e08();
      if ((uVar3 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../rtc_base/openssl_stream_adapter.cc",0x1d31,
                     "DTLS retransmission");
      }
    }
    if (*(int *)(lVar1 + 0x78) == 3) {
      if ((*(long *)(lVar1 + 0x88) != 0) && (uVar3 = FUN_00841d54(lVar1 + 0x70), (uVar3 & 1) == 0))
      {
        puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
        local_30 = &DAT_aaaaaaaaaaaaaaaa;
        iVar2 = FUN_00830a24(*(undefined8 *)(lVar1 + 0x88),&local_30);
        if (iVar2 != 0) {
          FUN_0084054c(lVar1,((int)(SUB168(SEXT816((long)puStack_28) * SEXT816(0x20c49ba5e353f7cf),8
                                          ) >> 7) -
                             (SUB164(SEXT816((long)puStack_28) * SEXT816(0x20c49ba5e353f7cf),0xc) >>
                             0x1f)) + (int)local_30 * 1000);
        }
      }
    }
    else if (*(int *)(lVar1 + 0x78) == 2) {
      FUN_00840414(lVar1);
    }
  }
  return 0x7fffffffffffffff;
}


// ===== 0084107c  FUN_0084107c =====

void FUN_0084107c(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  if ((param_1 & 0xff) - 1 < 2) {
    uVar3 = *param_2;
    *param_2 = 0;
    *param_3 = uVar3;
    param_3[1] = param_2[1];
  }
  else if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x841100);
    (*pcVar1)();
  }
  pvVar4 = (void *)*param_2;
  if ((pvVar4 != (void *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,pvVar4), iVar2 == 1)) {
    operator_delete(pvVar4);
    return;
  }
  return;
}


// ===== 00841100  FUN_00841100 =====

void FUN_00841100(void *param_1,size_t param_2)

{
  memset(param_1,0,param_2);
  return;
}


// ===== 00841130  FUN_00841130 =====

void FUN_00841130(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 *local_58;
  code *pcStack_50;
  code *local_48;
  
  FUN_007e3ebc();
  *param_1 = &PTR_FUN_00d3a070;
  param_1[0x1b] = param_2;
  local_58 = (undefined8 *)operator_new(0x20);
  *local_58 = param_1;
  local_58[2] = FUN_004473ec;
  local_58[3] = FUN_008416d0;
  pcStack_50 = FUN_00841630;
  local_48 = FUN_00841640;
  FUN_007b5b08(param_2 + 0x98,param_1,&local_58);
  lVar1 = param_1[0x1b];
  pthread_mutex_lock((pthread_mutex_t *)(lVar1 + 8));
  local_58 = (undefined8 *)operator_new(0x20);
  *local_58 = param_1;
  local_58[2] = FUN_004473ec;
  local_58[3] = FUN_008416e4;
  pcStack_50 = FUN_00841630;
  local_48 = FUN_00841640;
  FUN_007b5b08(lVar1 + 0x30,param_1,&local_58);
  pthread_mutex_unlock((pthread_mutex_t *)(lVar1 + 8));
  lVar1 = param_1[0x1b];
  pthread_mutex_lock((pthread_mutex_t *)(lVar1 + 0x50));
  local_58 = (undefined8 *)operator_new(0x20);
  *local_58 = param_1;
  local_58[2] = FUN_004473ec;
  local_58[3] = FUN_008416f8;
  pcStack_50 = FUN_00841630;
  local_48 = FUN_00841640;
  FUN_007b5b08(lVar1 + 0x78,param_1,&local_58);
  pthread_mutex_unlock((pthread_mutex_t *)(lVar1 + 0x50));
  lVar1 = param_1[0x1b];
  local_58 = (undefined8 *)operator_new(0x20);
  *local_58 = param_1;
  local_58[2] = FUN_004473ec;
  local_58[3] = FUN_0084170c;
  pcStack_50 = FUN_00841680;
  local_48 = FUN_00841690;
  FUN_007b5b08(lVar1 + 0xb8,param_1,&local_58);
  return;
}


// ===== 00841298  FUN_00841298 =====

void FUN_00841298(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008412a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd8) + 0x10))();
  return;
}


// ===== 008412ac  FUN_008412ac =====

void FUN_008412ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008412bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd8) + 0x18))();
  return;
}


// ===== 008412c0  FUN_008412c0 =====

void FUN_008412c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008412d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd8) + 0x20))();
  return;
}


// ===== 008412d4  FUN_008412d4 =====

void FUN_008412d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008412e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd8) + 0x28))();
  return;
}


// ===== 008412e8  FUN_008412e8 =====

void FUN_008412e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008412f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd8) + 0x30))();
  return;
}


// ===== 008412fc  FUN_008412fc =====

void FUN_008412fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0084130c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd8) + 0x38))();
  return;
}


// ===== 00841310  FUN_00841310 =====

void FUN_00841310(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00841320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd8) + 0x40))();
  return;
}


// ===== 00841324  FUN_00841324 =====

void FUN_00841324(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00841334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd8) + 0x48))();
  return;
}


// ===== 00841338  FUN_00841338 =====

void FUN_00841338(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00841348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd8) + 0x58))();
  return;
}


// ===== 0084134c  FUN_0084134c =====

void FUN_0084134c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0084135c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd8) + 0x60))();
  return;
}


// ===== 00841360  FUN_00841360 =====

void FUN_00841360(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00841370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd8) + 0x68))();
  return;
}


// ===== 00841374  FUN_00841374 =====

void FUN_00841374(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00841384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd8) + 0x70))();
  return;
}


// ===== 00841388  FUN_00841388 =====

void FUN_00841388(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00841398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd8) + 0x78))();
  return;
}


// ===== 0084139c  FUN_0084139c =====

void FUN_0084139c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008413ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd8) + 0x80))();
  return;
}


// ===== 008413b0  FUN_008413b0 =====

void FUN_008413b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008413c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd8) + 0x88))();
  return;
}


// ===== 008413c4  FUN_008413c4 =====

void FUN_008413c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008413d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd8) + 0x90))();
  return;
}


// ===== 008413d8  FUN_008413d8 =====

void FUN_008413d8(long param_1)

{
  long local_20;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)&local_20;
  local_20 = param_1;
  FUN_007b6160(param_1 + 0x98,&puStack_18,FUN_007e7acc);
  return;
}


// ===== 00841414  FUN_00841414 =====

int FUN_00841414(long param_1)

{
  int iVar1;
  long local_28;
  long *local_8;
  
  local_28 = param_1;
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));
  local_8 = &local_28;
  FUN_007b6160(param_1 + 0x30,&local_8,FUN_007e7acc);
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 8));
  return iVar1;
}


// ===== 00841470  FUN_00841470 =====

int FUN_00841470(long param_1)

{
  int iVar1;
  long local_28;
  long *local_8;
  
  local_28 = param_1;
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x50));
  local_8 = &local_28;
  FUN_007b6160(param_1 + 0x78,&local_8,FUN_007e7acc);
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x50));
  return iVar1;
}


// ===== 008414cc  FUN_008414cc =====

void FUN_008414cc(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 local_2c;
  long local_28;
  long *plStack_20;
  undefined4 *local_18;
  
  plStack_20 = &local_28;
  local_18 = &local_2c;
  local_2c = param_3;
  local_28 = param_1;
  FUN_007b6160(param_1 + 0xb8,&plStack_20,FUN_007e7a9c);
  return;
}


// ===== 00841514  FUN_00841514 =====

int FUN_00841514(long *param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[0x1b];
  param_1[0x1b] = 0;
  *param_1 = (long)&PTR_FUN_00d3a070;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *param_1 = (long)(PTR_DAT_00d52910 + 0x10);
  FUN_007b5d24(param_1 + 0x17);
  FUN_007b5d24(param_1 + 0x13);
  FUN_007b5d24(param_1 + 0xf);
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 10));
  FUN_007b5d24(param_1 + 6);
  iVar1 = pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 1));
  return iVar1;
}


// ===== 0084159c  FUN_0084159c =====

void FUN_0084159c(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[0x1b];
  param_1[0x1b] = 0;
  *param_1 = (long)&PTR_FUN_00d3a070;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *param_1 = (long)(PTR_DAT_00d52910 + 0x10);
  FUN_007b5d24(param_1 + 0x17);
  FUN_007b5d24(param_1 + 0x13);
  FUN_007b5d24(param_1 + 0xf);
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 10));
  FUN_007b5d24(param_1 + 6);
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 1));
  operator_delete(param_1);
  return;
}


// ===== 00841630  FUN_00841630 =====

void FUN_00841630(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0084163c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}


// ===== 00841640  FUN_00841640 =====

void FUN_00841640(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  (**(code **)((long)pvVar1 + 0x10))(0,pvVar1,pvVar1);
  operator_delete(pvVar1);
  return;
}


// ===== 00841680  FUN_00841680 =====

void FUN_00841680(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0084168c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}


// ===== 00841690  FUN_00841690 =====

void FUN_00841690(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  (**(code **)((long)pvVar1 + 0x10))(0,pvVar1,pvVar1);
  operator_delete(pvVar1);
  return;
}


// ===== 008416d0  FUN_008416d0 =====

void FUN_008416d0(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008416e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x98))();
  return;
}


// ===== 008416e4  FUN_008416e4 =====

void FUN_008416e4(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008416f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0xa0))();
  return;
}


// ===== 008416f8  FUN_008416f8 =====

void FUN_008416f8(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00841708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0xa8))();
  return;
}


// ===== 0084170c  FUN_0084170c =====

void FUN_0084170c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0084171c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0xb0))();
  return;
}


// ===== 00841720  FUN_00841720 =====

undefined8 FUN_00841720(void)

{
  return 0;
}


// ===== 0084172c  FUN_0084172c =====

void FUN_0084172c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3a138;
  param_1[4] = FUN_00433984;
  param_1[5] = 0;
  return;
}


// ===== 0084174c  FUN_0084174c =====

void FUN_0084174c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x841754);
  (*pcVar1)();
}


// ===== 00841754  FUN_00841754 =====

void FUN_00841754(undefined8 *param_1,long *param_2,long param_3,undefined4 param_4,long *param_5,
                 undefined8 param_6)

{
  long lVar1;
  undefined1 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined1 auStack_110 [16];
  code *local_100;
  undefined8 uStack_f8;
  undefined1 *local_f0;
  undefined1 uStack_e1;
  undefined8 *local_e0 [2];
  code *local_d0;
  code *pcStack_c8;
  long *local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  long *local_b0;
  undefined1 auStack_a0 [16];
  code *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 *local_78;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_f0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007ebcec(&local_f0);
  (**(code **)(param_3 + 0x10))(1,param_3,auStack_110);
  puVar2 = local_f0;
  uStack_f8 = *(undefined8 *)(param_3 + 0x18);
  local_100 = *(code **)(param_3 + 0x10);
  *(code **)(param_3 + 0x10) = FUN_00433984;
  *(undefined8 *)(param_3 + 0x18) = 0;
  if (local_f0 != (undefined1 *)0x0) {
    FUN_00d0f740(1,local_f0);
  }
  local_c0 = param_2;
  uStack_b8 = param_4;
  local_b0 = param_5;
  (*local_100)(1,auStack_110,auStack_a0);
  uStack_88 = uStack_f8;
  local_90 = local_100;
  local_100 = FUN_00433984;
  uStack_f8 = 0;
  local_80 = (**(code **)(*local_b0 + 0x10))();
  local_78 = puVar2;
  puVar6 = (undefined8 *)operator_new(0x50);
  puVar6[1] = CONCAT44(uStack_b4,uStack_b8);
  *puVar6 = local_c0;
  puVar6[2] = local_b0;
  (*local_90)(1,auStack_a0,puVar6 + 4);
  puVar2 = local_78;
  uVar4 = uStack_88;
  pcVar3 = local_90;
  local_90 = FUN_00433984;
  uStack_88 = 0;
  local_78 = (undefined1 *)0x0;
  puVar6[8] = local_80;
  puVar6[9] = puVar2;
  puVar6[7] = uVar4;
  puVar6[6] = pcVar3;
  local_d0 = FUN_00841f0c;
  pcStack_c8 = FUN_00841d68;
  local_e0[0] = puVar6;
  (**(code **)(*param_2 + 8))(param_2,local_e0,&uStack_e1,param_6);
  (*local_d0)(0,local_e0,local_e0);
  puVar2 = local_78;
  if ((local_78 != (undefined1 *)0x0) && (iVar5 = FUN_00d0f7a0(0xffffffff,local_78), iVar5 == 1)) {
    operator_delete(puVar2);
  }
  (*local_90)(0,auStack_a0,auStack_a0);
  (*local_100)(0,auStack_110,auStack_110);
  *param_1 = local_f0;
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00841954  FUN_00841954 =====

void FUN_00841954(undefined8 *param_1,undefined8 param_2,long param_3,long param_4,
                 undefined4 param_5,long *param_6,undefined8 param_7)

{
  long lVar1;
  undefined1 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined1 auStack_110 [16];
  code *local_100;
  undefined8 uStack_f8;
  undefined8 *local_f0 [2];
  code *local_e0;
  code *pcStack_d8;
  undefined1 *local_c8;
  undefined8 local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  long *local_b0;
  undefined1 auStack_a0 [16];
  code *local_90;
  undefined8 uStack_88;
  long local_80;
  undefined1 *local_78;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_c8 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007ebcec(&local_c8);
  (**(code **)(param_4 + 0x10))(1,param_4,auStack_110);
  puVar2 = local_c8;
  uStack_f8 = *(undefined8 *)(param_4 + 0x18);
  local_100 = *(code **)(param_4 + 0x10);
  *(code **)(param_4 + 0x10) = FUN_00433984;
  *(undefined8 *)(param_4 + 0x18) = 0;
  if (local_c8 != (undefined1 *)0x0) {
    FUN_00d0f740(1,local_c8);
  }
  local_c0 = param_2;
  uStack_b8 = param_5;
  local_b0 = param_6;
  (*local_100)(1,auStack_110,auStack_a0);
  uStack_88 = uStack_f8;
  local_90 = local_100;
  local_100 = FUN_00433984;
  uStack_f8 = 0;
  lVar6 = (**(code **)(*local_b0 + 0x10))();
  local_80 = 0x7fffffffffffffff;
  if ((lVar6 != 0x7fffffffffffffff) && (param_3 != 0x7fffffffffffffff)) {
    local_80 = -0x8000000000000000;
    if (param_3 != -0x8000000000000000 && lVar6 != -0x8000000000000000) {
      local_80 = lVar6 + param_3;
    }
  }
  local_78 = puVar2;
  puVar7 = (undefined8 *)operator_new(0x50);
  puVar7[1] = CONCAT44(uStack_b4,uStack_b8);
  *puVar7 = local_c0;
  puVar7[2] = local_b0;
  (*local_90)(1,auStack_a0,puVar7 + 4);
  uVar4 = uStack_88;
  pcVar3 = local_90;
  local_90 = FUN_00433984;
  uStack_88 = 0;
  puVar7[8] = local_80;
  puVar7[9] = local_78;
  puVar7[7] = uVar4;
  puVar7[6] = pcVar3;
  local_78 = (undefined1 *)0x0;
  local_e0 = FUN_00841f0c;
  pcStack_d8 = FUN_00841d68;
  local_f0[0] = puVar7;
  FUN_00841b7c(param_2,param_5,local_f0,param_3,param_7);
  (*local_e0)(0,local_f0,local_f0);
  puVar2 = local_78;
  if ((local_78 != (undefined1 *)0x0) && (iVar5 = FUN_00d0f7a0(0xffffffff,local_78), iVar5 == 1)) {
    operator_delete(puVar2);
  }
  (*local_90)(0,auStack_a0,auStack_a0);
  (*local_100)(0,auStack_110,auStack_110);
  *param_1 = local_c8;
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00841b7c  FUN_00841b7c =====

void FUN_00841b7c(long *param_1,int param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined1 auStack_b0 [16];
  code *local_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  code *local_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  code *local_60;
  undefined8 uStack_58;
  undefined1 local_44 [4];
  
  puVar1 = auStack_b0;
  if (param_2 == 1) {
    (**(code **)(param_3 + 0x10))(1,param_3,auStack_b0);
    uStack_98 = *(undefined8 *)(param_3 + 0x18);
    local_a0 = *(code **)(param_3 + 0x10);
    *(code **)(param_3 + 0x10) = FUN_00433984;
    *(undefined8 *)(param_3 + 0x18) = 0;
    local_44[0] = 1;
    (*local_a0)(1,auStack_b0,auStack_70);
    uStack_58 = uStack_98;
    local_60 = local_a0;
    local_a0 = FUN_00433984;
    uStack_98 = 0;
    (**(code **)(*param_1 + 0x10))(param_1,auStack_70,param_4,local_44,param_5);
    (*local_60)(0,auStack_70,auStack_70);
    pcVar2 = local_a0;
  }
  else {
    if (param_2 != 0) {
      return;
    }
    (**(code **)(param_3 + 0x10))(1,param_3,auStack_90);
    uStack_78 = *(undefined8 *)(param_3 + 0x18);
    local_80 = *(code **)(param_3 + 0x10);
    *(code **)(param_3 + 0x10) = FUN_00433984;
    *(undefined8 *)(param_3 + 0x18) = 0;
    (*local_80)(1,auStack_90,auStack_70);
    uStack_58 = uStack_78;
    local_60 = local_80;
    local_80 = FUN_00433984;
    uStack_78 = 0;
    local_44[0] = 0;
    (**(code **)(*param_1 + 0x10))(param_1,auStack_70,param_4,local_44,param_5);
    (*local_60)(0,auStack_70,auStack_70);
    puVar1 = auStack_90;
    pcVar2 = local_80;
  }
  (*pcVar2)(0,puVar1,puVar1);
  return;
}


// ===== 00841cf8  FUN_00841cf8 =====

void FUN_00841cf8(long *param_1)

{
  int iVar1;
  void *pvVar2;
  
  if (*param_1 != 0) {
    FUN_007ebdcc();
    pvVar2 = (void *)*param_1;
    if ((pvVar2 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar2), iVar1 == 1)) {
      operator_delete(pvVar2);
    }
    *param_1 = 0;
  }
  return;
}


// ===== 00841d54  FUN_00841d54 =====

bool FUN_00841d54(long *param_1)

{
  return *param_1 != 0;
}


// ===== 00841d68  FUN_00841d68 =====

void FUN_00841d68(undefined8 *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *local_60 [2];
  code *local_50;
  code *pcStack_48;
  
  param_1 = (undefined8 *)*param_1;
  uVar2 = FUN_007ebde8(param_1[9]);
  if ((((uVar2 & 1) != 0) &&
      (lVar3 = (*(code *)param_1[7])(param_1 + 4), lVar3 != 0x7fffffffffffffff)) &&
     (uVar2 = FUN_007ebde8(param_1[9]), (uVar2 & 1) != 0)) {
    lVar4 = (**(code **)(*(long *)param_1[2] + 0x10))();
    lVar6 = param_1[8];
    if (lVar4 == 0x7fffffffffffffff) {
      lVar8 = 0x7fffffffffffffff;
    }
    else {
      lVar8 = 0x7fffffffffffffff;
      if (lVar6 != -0x8000000000000000) {
        lVar8 = -0x8000000000000000;
        if (lVar6 != 0x7fffffffffffffff && lVar4 != -0x8000000000000000) {
          lVar8 = lVar4 - lVar6;
        }
      }
    }
    lVar4 = -0x8000000000000000;
    if (lVar6 != -0x8000000000000000 && lVar3 != -0x8000000000000000) {
      lVar4 = lVar6 + lVar3;
    }
    if (lVar6 != 0x7fffffffffffffff) {
      lVar6 = lVar4;
    }
    param_1[8] = lVar6;
    uVar2 = 0x7fffffffffffffff;
    if (lVar8 != -0x8000000000000000) {
      uVar2 = 0;
      if (lVar8 != 0x7fffffffffffffff && lVar3 != -0x8000000000000000) {
        uVar2 = lVar3 - lVar8 & (lVar3 - lVar8 >> 0x3f ^ 0xffffffffffffffffU);
      }
    }
    uVar9 = *param_1;
    uVar1 = *(undefined4 *)(param_1 + 1);
    puVar5 = (undefined8 *)operator_new(0x50);
    uVar10 = param_1[1];
    uVar7 = *param_1;
    puVar5[2] = param_1[2];
    puVar5[1] = uVar10;
    *puVar5 = uVar7;
    (*(code *)param_1[6])(1,param_1 + 4,puVar5 + 4);
    puVar5[6] = param_1[6];
    puVar5[7] = param_1[7];
    param_1[6] = FUN_00433984;
    param_1[7] = 0;
    puVar5[8] = param_1[8];
    uVar7 = param_1[9];
    param_1[9] = 0;
    puVar5[9] = uVar7;
    local_50 = FUN_00841f0c;
    pcStack_48 = FUN_00841d68;
    local_60[0] = puVar5;
    FUN_00841b7c(uVar9,uVar1,local_60,uVar2,param_1 + 3);
    (*local_50)(0,local_60,local_60);
  }
  return;
}


// ===== 00841f0c  FUN_00841f0c =====

void FUN_00841f0c(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x841fa8);
      (*pcVar1)();
    }
    pvVar3 = (void *)*param_2;
    if (pvVar3 != (void *)0x0) {
      pvVar4 = *(void **)((long)pvVar3 + 0x48);
      if ((pvVar4 != (void *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,pvVar4), iVar2 == 1)) {
        operator_delete(pvVar4);
      }
      (**(code **)((long)pvVar3 + 0x30))(0,(long)pvVar3 + 0x20,(long)pvVar3 + 0x20);
      operator_delete(pvVar3);
      return;
    }
  }
  return;
}


// ===== 00841fa8  FUN_00841fa8 =====

void FUN_00841fa8(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[6] = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  param_1[0x10] = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  param_1[0x22] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x52) = 0;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  *(undefined1 *)(param_1 + 0x5e) = 0;
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined1 *)(param_1 + 0x62) = 0;
  *(undefined1 *)(param_1 + 100) = 0;
  *(undefined1 *)(param_1 + 0x66) = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(undefined1 *)(param_1 + 0x72) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0;
  param_1[0x76] = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x36) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x3a) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x3e) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x42) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x46) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x4a) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x4e) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 0x6e) = 0;
  *(undefined8 *)(param_1 + 0x6a) = 0;
  *(undefined1 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x84) = 0;
  *(undefined8 *)(param_1 + 0x7e) = 0;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)(param_1 + 0x82) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x7a) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  return;
}


// ===== 00842058  FUN_00842058 =====

void FUN_00842058(long param_1)

{
  if (-1 < *(char *)(param_1 + 0x6f)) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x58));
  return;
}


// ===== 0084207c  FUN_0084207c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0084207c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + 2) = 0;
  uVar2 = _UNK_001f3be8;
  uVar1 = _DAT_001f3be0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[3] = 0;
  param_1[4] = 200;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xb] = 0;
  param_1[9] = 0;
  param_1[10] = param_1 + 0xb;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  FUN_007ebea0(param_1 + 0x10);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  return;
}


// ===== 008420e8  FUN_008420e8 =====

void FUN_008420e8(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  long local_8;
  
  if (*(long **)(param_1 + 0xa8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xa8) + 8))();
  }
  if (*(long **)(param_1 + 0xa0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xa0) + 8))();
  }
  pvVar1 = *(void **)(param_1 + 0x88);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = *(void **)(param_1 + 0x90);
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
    while (pvVar2 != pvVar1) {
      pvVar2 = (void *)((long)pvVar2 + -2);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    *(void **)(param_1 + 0x90) = pvVar1;
    operator_delete(pvVar1);
  }
  if (*(long **)(param_1 + 0x68) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x68) + 8))();
  }
  local_8 = param_1 + 0x50;
  FUN_005d46d8(&local_8,*(undefined8 *)(param_1 + 0x58));
  if (*(char *)(param_1 + 0x4f) < '\0') {
    operator_delete(*(void **)(param_1 + 0x38));
  }
  return;
}


// ===== 008421fc  FUN_008421fc =====

void FUN_008421fc(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}


// ===== 0084220c  FUN_0084220c =====

void FUN_0084220c(long *param_1)

{
  if ((long *)param_1[3] != (long *)0x0) {
    (**(code **)(*(long *)param_1[3] + 8))();
  }
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  if ((long *)*param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00842278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)*param_1 + 8))();
    return;
  }
  return;
}


// ===== 0084228c  FUN_0084228c =====

void FUN_0084228c(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if (lVar1 != 0) {
    FUN_00d0f740(1,lVar1 + 8);
  }
  lVar2 = param_2[4];
  lVar1 = param_2[3];
  lVar4 = param_2[2];
  lVar3 = param_2[1];
  param_1[0xd] = 0;
  param_1[0xe] = param_3;
  param_1[4] = lVar2;
  param_1[3] = lVar1;
  param_1[2] = lVar4;
  param_1[1] = lVar3;
  lVar1 = DAT_001f5608;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  param_1[5] = lVar1;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  return;
}


// ===== 00842320  FUN_00842320 =====

void FUN_00842320(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = *param_2;
  param_1[6] = (long)&DAT_aaaaaaaaaaaaaaaa;
  *param_1 = lVar1;
  if (lVar1 != 0) {
    FUN_00d0f740(1,lVar1 + 8);
  }
  lVar5 = param_2[2];
  lVar4 = param_2[1];
  lVar7 = param_2[4];
  lVar6 = param_2[3];
  param_1[9] = 40000;
  lVar3 = param_2[5];
  lVar1 = param_2[6];
  lVar2 = param_2[0xb];
  param_1[2] = lVar5;
  param_1[1] = lVar4;
  param_1[4] = lVar7;
  param_1[3] = lVar6;
  param_1[5] = lVar3;
  *(int *)(param_1 + 6) = (int)lVar1;
  if (lVar2 == 0) {
    lVar2 = param_2[0xc];
  }
  lVar1 = param_2[0x12];
  param_1[7] = param_2[10];
  param_1[8] = lVar2;
  if ((char)lVar1 == '\x01') {
    param_1[9] = param_2[0x11];
  }
  return;
}


// ===== 008423b8  FUN_008423b8 =====

void FUN_008423b8(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[0xb];
  param_1[0xb] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if ((long *)param_1[7] != (long *)0x0) {
    (**(code **)(*(long *)param_1[7] + 8))();
  }
  plVar2 = (long *)*param_1;
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0084242c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))(plVar2);
    return;
  }
  return;
}


// ===== 00842440  FUN_00842440 =====

void FUN_00842440(undefined8 *param_1,undefined8 param_2)

{
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 5) = 1;
  *param_1 = 0xffffffff;
  param_1[6] = param_2;
  return;
}


// ===== 00842468  FUN_00842468 =====

void FUN_00842468(undefined8 *param_1,undefined8 *param_2)

{
  void *__src;
  undefined4 uVar1;
  ulong __n;
  void *__dest;
  undefined8 uVar2;
  
  uVar1 = *(undefined4 *)(param_2 + 1);
  uVar2 = *param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 1) = uVar1;
  *param_1 = uVar2;
  param_1[2] = 0;
  __src = (void *)param_2[2];
  __n = param_2[3] - (long)__src;
  if (__n != 0) {
    if ((long)__n < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005da79c();
    }
    __dest = operator_new(__n);
    param_1[2] = __dest;
    param_1[3] = __dest;
    param_1[4] = (long)__dest + __n;
    memcpy(__dest,__src,__n);
    param_1[3] = (long)__dest + __n;
  }
  uVar2 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar2;
  return;
}


// ===== 008424f8  FUN_008424f8 =====

void FUN_008424f8(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = *(void **)(param_1 + 0x10);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  pvVar2 = *(void **)(param_1 + 0x18);
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
      *(void **)(param_1 + 0x18) = pvVar1;
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


// ===== 008425a0  FUN_008425a0 =====

void FUN_008425a0(void)

{
  return;
}


// ===== 008425a8  FUN_008425a8 =====

void FUN_008425a8(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0xe) = 0xbf800000ffffffff;
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_1[0x18] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_00666a34(param_1 + 0x22);
  FUN_0065f054(param_1 + 0x30);
  param_1[0x58] = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x4e) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  return;
}


// ===== 00842630  FUN_00842630 =====

void FUN_00842630(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = *(void **)(param_1 + 0x148);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = *(void **)(param_1 + 0x150);
    uVar4 = (ulong)((long)pvVar2 + (-0x40 - ((long)pvVar2 << 0x3a))) >> 6;
    uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2 << 0x3a) - ((long)pvVar1 - (long)pvVar2)) >> 6;
    if (uVar4 <= uVar3) {
      uVar3 = uVar4;
    }
    if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 0x3fU) == 0)) {
      uVar3 = uVar3 & 0x3fffffffffffffe;
      pvVar2 = (void *)((long)pvVar2 + uVar3 * -0x40);
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
    while (pvVar2 != pvVar1) {
      pvVar2 = (void *)((long)pvVar2 + -0x40);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    *(void **)(param_1 + 0x150) = pvVar1;
    operator_delete(pvVar1);
  }
  FUN_0065f0c8(param_1 + 0xc0);
  FUN_00666a74(param_1 + 0x88);
  if (-1 < *(char *)(param_1 + 0x57)) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x40));
  return;
}


// ===== 00842718  FUN_00842718 =====

void FUN_00842718(undefined4 *param_1,undefined8 param_2)

{
  param_1[0x22] = 1;
  param_1[0x24] = 5000;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)((long)param_1 + 0x49) = 0;
  *(undefined8 *)((long)param_1 + 0x41) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x26) = param_2;
  *(undefined8 *)(param_1 + 0x28) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x2a) = 0x3ff0000000000000;
  *(undefined2 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0x36) = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  FUN_007ebea0(param_1 + 0x5a);
  *(undefined8 *)(param_1 + 0x62) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  return;
}


// ===== 008427b0  FUN_008427b0 =====

void FUN_008427b0(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (*(long **)(param_1 + 400) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 400) + 8))();
  }
  if (*(long **)(param_1 + 0x188) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x188) + 8))();
  }
  pvVar1 = *(void **)(param_1 + 0x170);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = *(void **)(param_1 + 0x178);
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
    while (pvVar2 != pvVar1) {
      pvVar2 = (void *)((long)pvVar2 + -2);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    *(void **)(param_1 + 0x178) = pvVar1;
    operator_delete(pvVar1);
  }
  if (*(char *)(param_1 + 0x167) < '\0') {
    operator_delete(*(void **)(param_1 + 0x150));
  }
  if (*(long **)(param_1 + 0x148) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x148) + 8))();
  }
  if (*(char *)(param_1 + 0x140) == '\x01') {
    FUN_006678ac(param_1 + 0xe0);
  }
  if ((*(char *)(param_1 + 0xd0) == '\x01') && (*(char *)(param_1 + 0xcf) < '\0')) {
    operator_delete(*(void **)(param_1 + 0xb8));
  }
  FUN_008432c8(param_1);
  return;
}


// ===== 008428ec  FUN_008428ec =====

void FUN_008428ec(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  ulong uVar3;
  undefined8 ***pppuVar4;
  bool bVar5;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 **local_58;
  ulong uStack_50;
  undefined8 local_48;
  
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  FUN_00547cac(&local_70,"{rtp: ",6);
  FUN_00842c10(&local_58,param_2);
  pppuVar4 = (undefined8 ***)local_58;
  if (-1 < (long)local_48) {
    uStack_50 = (ulong)local_48._7_1_;
    pppuVar4 = &local_58;
  }
  FUN_00547cac(&local_70,pppuVar4,uStack_50);
  if ((char)local_48._7_1_ < '\0') {
    operator_delete(local_58);
  }
  FUN_00547cac(&local_70,", rtcp_report_interval_ms: ",0x1b);
  local_58 = (undefined8 ***)0x0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_005f55c4(&local_58,0x16,*(undefined4 *)(param_2 + 0x90));
  uVar3 = uStack_50;
  pppuVar4 = (undefined8 ***)local_58;
  if (-1 < (long)local_48) {
    uVar3 = local_48 >> 0x38;
    pppuVar4 = &local_58;
  }
  FUN_00547cac(&local_70,pppuVar4,uVar3);
  if ((long)local_48 < 0) {
    operator_delete(local_58);
  }
  FUN_00547cac(&local_70,", send_transport: ",0x12);
  bVar5 = *(long *)(param_2 + 0x98) != 0;
  pcVar2 = "null";
  if (bVar5) {
    pcVar2 = "(Transport)";
  }
  uVar1 = 4;
  if (bVar5) {
    uVar1 = 0xb;
  }
  FUN_00547cac(&local_70,pcVar2,uVar1);
  FUN_00547cac(&local_70,", min_bitrate_bps: ",0x13);
  local_58 = (undefined8 ***)0x0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_005f55c4(&local_58,0x16,*(undefined4 *)(param_2 + 0xa0));
  uVar3 = uStack_50;
  pppuVar4 = (undefined8 ***)local_58;
  if (-1 < (long)local_48) {
    uVar3 = local_48 >> 0x38;
    pppuVar4 = &local_58;
  }
  FUN_00547cac(&local_70,pppuVar4,uVar3);
  if ((long)local_48 < 0) {
    operator_delete(local_58);
  }
  FUN_00547cac(&local_70,", max_bitrate_bps: ",0x13);
  local_58 = (undefined8 ***)0x0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_005f55c4(&local_58,0x16,*(undefined4 *)(param_2 + 0xa4));
  uVar3 = uStack_50;
  pppuVar4 = (undefined8 ***)local_58;
  if (-1 < (long)local_48) {
    uVar3 = local_48 >> 0x38;
    pppuVar4 = &local_58;
  }
  FUN_00547cac(&local_70,pppuVar4,uVar3);
  if ((long)local_48 < 0) {
    operator_delete(local_58);
  }
  FUN_00547cac(&local_70,", has audio_network_adaptor_config: ",0x24);
  bVar5 = *(char *)(param_2 + 0xd0) == '\0';
  pcVar2 = "true";
  if (bVar5) {
    pcVar2 = "false";
  }
  uVar1 = 4;
  if (bVar5) {
    uVar1 = 5;
  }
  FUN_00547cac(&local_70,pcVar2,uVar1);
  FUN_00547cac(&local_70,", has_dscp: ",0xc);
  bVar5 = *(char *)(param_2 + 0xb0) == '\0';
  pcVar2 = "true";
  if (bVar5) {
    pcVar2 = "false";
  }
  uVar1 = 4;
  if (bVar5) {
    uVar1 = 5;
  }
  FUN_00547cac(&local_70,pcVar2,uVar1);
  FUN_00547cac(&local_70,", send_codec_spec: ",0x13);
  if (*(char *)(param_2 + 0x140) == '\x01') {
    FUN_00842f14(&local_58,param_2 + 0xd8);
  }
  else {
    FUN_005d3510(&local_58,"<unset>");
  }
  uVar3 = uStack_50;
  pppuVar4 = (undefined8 ***)local_58;
  if (-1 < (long)local_48) {
    uVar3 = local_48 >> 0x38;
    pppuVar4 = &local_58;
  }
  FUN_00547cac(&local_70,pppuVar4,uVar3);
  if ((long)local_48 < 0) {
    operator_delete(local_58);
  }
  FUN_00547cac(&local_70,&DAT_001b0cbb,1);
  param_1[1] = uStack_68;
  *param_1 = local_70;
  param_1[2] = local_60;
  return;
}


// ===== 00842c10  FUN_00842c10 =====

void FUN_00842c10(undefined8 param_1,undefined4 *param_2)

{
  char *pcVar1;
  long lVar2;
  undefined8 ***pppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 **local_488;
  ulong uStack_480;
  byte bStack_471;
  undefined1 *local_470;
  undefined1 *puStack_468;
  undefined1 *local_460;
  undefined1 auStack_458 [1024];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  memset(auStack_458,0xaa,0x400);
  local_460 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_468 = &DAT_aaaaaaaaaaaaaaaa;
  local_470 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00622830(&local_470,auStack_458,0x400);
  uVar4 = FUN_006228b0(&local_470,"{ssrc: ",7);
  FUN_006229f8(uVar4,*param_2);
  lVar7 = (long)*(char *)((long)param_2 + 0x1f);
  if (lVar7 < 0) {
    lVar7 = *(long *)(param_2 + 4);
  }
  if (lVar7 != 0) {
    uVar4 = FUN_006228b0(&local_470,", rid: ",7);
    lVar7 = (long)*(char *)((long)param_2 + 0x1f);
    if (lVar7 < 0) {
      puVar6 = *(undefined4 **)(param_2 + 2);
      lVar7 = *(long *)(param_2 + 4);
    }
    else {
      puVar6 = param_2 + 2;
    }
    FUN_006228b0(uVar4,puVar6,lVar7);
  }
  lVar7 = (long)*(char *)((long)param_2 + 0x37);
  if (lVar7 < 0) {
    lVar7 = *(long *)(param_2 + 10);
  }
  if (lVar7 != 0) {
    uVar4 = FUN_006228b0(&local_470,", mid: ",7);
    lVar7 = (long)*(char *)((long)param_2 + 0x37);
    if (lVar7 < 0) {
      puVar6 = *(undefined4 **)(param_2 + 8);
      lVar7 = *(long *)(param_2 + 10);
    }
    else {
      puVar6 = param_2 + 8;
    }
    FUN_006228b0(uVar4,puVar6,lVar7);
  }
  FUN_006228b0(&local_470,", csrcs: [",10);
  lVar7 = *(long *)(param_2 + 0xe);
  if (*(long *)(param_2 + 0x10) != lVar7) {
    uVar9 = 0;
    do {
      FUN_006229f8(&local_470,*(undefined4 *)(lVar7 + uVar9 * 4));
      lVar7 = *(long *)(param_2 + 0xe);
      uVar8 = *(long *)(param_2 + 0x10) - lVar7 >> 2;
      if (uVar9 != uVar8 - 1) {
        FUN_006228b0(&local_470,&DAT_001e1644,2);
        lVar7 = *(long *)(param_2 + 0xe);
        uVar8 = *(long *)(param_2 + 0x10) - lVar7 >> 2;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar8);
  }
  FUN_00622844(&local_470,0x5d);
  uVar5 = FUN_006228b0(&local_470,", extmap-allow-mixed: ",0x16);
  uVar4 = 4;
  if (*(char *)(param_2 + 0x14) == '\0') {
    uVar4 = 5;
  }
  pcVar1 = "true";
  if (*(char *)(param_2 + 0x14) == '\0') {
    pcVar1 = "false";
  }
  FUN_006228b0(uVar5,pcVar1,uVar4);
  FUN_006228b0(&local_470,", extensions: [",0xf);
  lVar7 = *(long *)(param_2 + 0x16);
  if (*(long *)(param_2 + 0x18) != lVar7) {
    lVar10 = 0;
    uVar9 = 0;
    do {
      FUN_006699d4(&local_488,lVar7 + lVar10);
      uVar8 = uStack_480;
      pppuVar3 = (undefined8 ***)local_488;
      if (-1 < (char)bStack_471) {
        uVar8 = (ulong)bStack_471;
        pppuVar3 = &local_488;
      }
      FUN_006228b0(&local_470,pppuVar3,uVar8);
      if ((char)bStack_471 < '\0') {
        operator_delete(local_488);
      }
      lVar7 = *(long *)(param_2 + 0x16);
      uVar8 = *(long *)(param_2 + 0x18) - lVar7 >> 5;
      if (uVar9 != uVar8 - 1) {
        FUN_006228b0(&local_470,&DAT_001e1644,2);
        lVar7 = *(long *)(param_2 + 0x16);
        uVar8 = *(long *)(param_2 + 0x18) - lVar7 >> 5;
      }
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x20;
    } while (uVar9 < uVar8);
  }
  FUN_00622844(&local_470,0x5d);
  uVar4 = FUN_006228b0(&local_470,", c_name: ",10);
  lVar7 = (long)*(char *)((long)param_2 + 0x87);
  if (lVar7 < 0) {
    puVar6 = *(undefined4 **)(param_2 + 0x1c);
    lVar7 = *(long *)(param_2 + 0x1e);
  }
  else {
    puVar6 = param_2 + 0x1c;
  }
  FUN_006228b0(uVar4,puVar6,lVar7);
  FUN_00622844(&local_470,0x7d);
  FUN_005d3510(param_1,local_470);
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00842f14  FUN_00842f14 =====

void FUN_00842f14(undefined8 param_1,undefined4 *param_2)

{
  ulong uVar1;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 ****ppppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 ****__dest;
  undefined8 ***local_4a0;
  ulong uStack_498;
  ulong local_490;
  undefined8 ***local_488;
  ulong local_480;
  undefined8 local_478;
  undefined1 *local_470;
  undefined1 *puStack_468;
  undefined1 *local_460;
  undefined1 auStack_458 [1024];
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  memset(auStack_458,0xaa,0x400);
  local_460 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_468 = &DAT_aaaaaaaaaaaaaaaa;
  local_470 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00622830(&local_470,auStack_458,0x400);
  uVar7 = FUN_006228b0(&local_470,"{nack_enabled: ",0xf);
  uVar8 = 4;
  pcVar2 = "true";
  if (*(char *)(param_2 + 0x12) == '\0') {
    uVar8 = 5;
    pcVar2 = "false";
  }
  FUN_006228b0(uVar7,pcVar2,uVar8);
  uVar7 = FUN_006228b0(&local_470,", enable_non_sender_rtt: ",0x19);
  uVar8 = 4;
  pcVar2 = "true";
  if (*(char *)((long)param_2 + 0x49) == '\0') {
    uVar8 = 5;
    pcVar2 = "false";
  }
  FUN_006228b0(uVar7,pcVar2,uVar8);
  uVar8 = FUN_006228b0(&local_470,", cng_payload_type: ",0x14);
  if (*(char *)(param_2 + 0x14) == '\x01') {
    local_480 = 0;
    local_478 = 0;
    local_488 = (undefined8 ****)0x0;
    FUN_005f55c4(&local_488,0x16,param_2[0x13]);
  }
  else {
    FUN_005d3510(&local_488,"<unset>");
  }
  uVar4 = local_480;
  ppppuVar6 = (undefined8 ****)local_488;
  if (-1 < (long)local_478) {
    uVar4 = local_478 >> 0x38;
    ppppuVar6 = &local_488;
  }
  FUN_006228b0(uVar8,ppppuVar6,uVar4);
  if ((long)local_478 < 0) {
    operator_delete(local_488);
  }
  uVar8 = FUN_006228b0(&local_470,", red_payload_type: ",0x14);
  if (*(char *)(param_2 + 0x16) == '\x01') {
    local_480 = 0;
    local_478 = 0;
    local_488 = (undefined8 ****)0x0;
    FUN_005f55c4(&local_488,0x16,param_2[0x15]);
  }
  else {
    FUN_005d3510(&local_488,"<unset>");
  }
  uVar4 = local_480;
  ppppuVar6 = (undefined8 ****)local_488;
  if (-1 < (long)local_478) {
    uVar4 = local_478 >> 0x38;
    ppppuVar6 = &local_488;
  }
  FUN_006228b0(uVar8,ppppuVar6,uVar4);
  if ((long)local_478 < 0) {
    operator_delete(local_488);
  }
  uVar8 = FUN_006228b0(&local_470,", payload_type: ",0x10);
  FUN_00622910(uVar8,*param_2);
  uVar8 = FUN_006228b0(&local_470,", format: ",10);
  local_4a0 = (undefined8 ****)0x0;
  uStack_498 = 0;
  local_490 = 0;
  FUN_008435e8(&local_4a0,param_2 + 2);
  uVar4 = uStack_498;
  ppppuVar6 = (undefined8 ****)local_4a0;
  if (-1 < (long)local_490) {
    uVar4 = local_490 >> 0x38;
    ppppuVar6 = &local_4a0;
  }
  if ((ppppuVar6 == (undefined8 ****)0x0) && (uVar4 != 0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string:1081: libc++ Hardening assertion __n == 0 || __s != nullptr failed: basic_string(const char*, n) detected nullptr\n"
              );
  }
  if (0x7ffffffffffffff6 < uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (uVar4 < 0x17) {
    local_478 = CONCAT17((char)uVar4,(undefined7)local_478);
    __dest = &local_488;
  }
  else {
    uVar1 = (uVar4 & 0x7ffffffffffffff8) + 8;
    uVar3 = 0x19;
    if (uVar1 != 0x18) {
      uVar3 = uVar1;
    }
    __dest = (undefined8 ****)operator_new(uVar3);
    local_478 = uVar3 | 0x8000000000000000;
    local_488 = __dest;
    local_480 = uVar4;
  }
  if ((undefined8 ****)((long)__dest + uVar4) < __dest) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
  if ((__dest <= ppppuVar6) && (ppppuVar6 < (undefined8 ****)((long)__dest + uVar4))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
  memmove(__dest,ppppuVar6,uVar4);
  *(undefined1 *)((long)__dest + uVar4) = 0;
  uVar4 = local_480;
  ppppuVar6 = (undefined8 ****)local_488;
  if (-1 < (long)local_478) {
    uVar4 = local_478 >> 0x38;
    ppppuVar6 = &local_488;
  }
  FUN_006228b0(uVar8,ppppuVar6,uVar4);
  if ((long)local_478 < 0) {
    operator_delete(local_488);
  }
  if ((long)local_490 < 0) {
    operator_delete(local_4a0);
  }
  FUN_00622844(&local_470,0x7d);
  FUN_005d3510(param_1,local_470);
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 008432c8  FUN_008432c8 =====

void FUN_008432c8(long param_1)

{
  char cVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  void *pvVar6;
  
  if (*(char *)(param_1 + 0x87) < '\0') {
    operator_delete(*(void **)(param_1 + 0x70));
    pvVar6 = *(void **)(param_1 + 0x58);
  }
  else {
    pvVar6 = *(void **)(param_1 + 0x58);
  }
  if (pvVar6 == (void *)0x0) {
    pvVar6 = *(void **)(param_1 + 0x38);
  }
  else {
    pvVar3 = *(void **)(param_1 + 0x60);
    pvVar2 = pvVar6;
    if (pvVar6 != pvVar3) {
      do {
        pvVar3 = (void *)((long)pvVar3 + -0x20);
        if (pvVar3 == (void *)0x0) goto LAB_008433dc;
        FUN_00668f8c(pvVar3);
      } while (pvVar3 != pvVar6);
      pvVar2 = *(void **)(param_1 + 0x58);
    }
    *(void **)(param_1 + 0x60) = pvVar6;
    operator_delete(pvVar2);
    pvVar6 = *(void **)(param_1 + 0x38);
  }
  if (pvVar6 == (void *)0x0) {
    cVar1 = *(char *)(param_1 + 0x37);
  }
  else {
    pvVar3 = *(void **)(param_1 + 0x40);
    uVar5 = (ulong)((long)pvVar3 + (-4 - ((long)pvVar3 << 0x3e))) >> 2;
    uVar4 = (ulong)(((long)pvVar6 - (long)pvVar3 << 0x3e) - ((long)pvVar6 - (long)pvVar3)) >> 2;
    if (uVar5 <= uVar4) {
      uVar4 = uVar5;
    }
    if ((1 < uVar4) && ((((int)pvVar6 - (int)pvVar3 | -(int)pvVar3) & 3U) == 0)) {
      uVar4 = uVar4 & 0x3ffffffffffffffe;
      pvVar3 = (void *)((long)pvVar3 + uVar4 * -4);
      do {
        uVar4 = uVar4 - 2;
      } while (uVar4 != 0);
    }
    while (pvVar3 != pvVar6) {
      pvVar3 = (void *)((long)pvVar3 + -4);
      if (pvVar3 == (void *)0x0) {
LAB_008433dc:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    *(void **)(param_1 + 0x40) = pvVar6;
    operator_delete(pvVar6);
    cVar1 = *(char *)(param_1 + 0x37);
  }
  if (cVar1 < '\0') {
    operator_delete(*(void **)(param_1 + 0x20));
    cVar1 = *(char *)(param_1 + 0x1f);
  }
  else {
    cVar1 = *(char *)(param_1 + 0x1f);
  }
  if (-1 < cVar1) {
    return;
  }
  operator_delete(*(void **)(param_1 + 8));
  return;
}


// ===== 00843440  FUN_00843440 =====

void FUN_00843440(undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  FUN_00667388(param_1 + 2,param_3);
  *(undefined2 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}


// ===== 0084348c  FUN_0084348c =====

void FUN_0084348c(long param_1)

{
  FUN_006678ac(param_1 + 8);
  return;
}


// ===== 00843498  FUN_00843498 =====

undefined8 FUN_00843498(int *param_1,int *param_2)

{
  byte bVar1;
  ulong uVar2;
  
  if (((char)param_1[0x12] == (char)param_2[0x12]) &&
     (*(char *)((long)param_1 + 0x49) == *(char *)((long)param_2 + 0x49))) {
    bVar1 = *(byte *)(param_2 + 0x14);
    if ((bVar1 & *(byte *)(param_1 + 0x14)) == 0) {
      if (*(byte *)(param_1 + 0x14) != bVar1) {
        return 0;
      }
    }
    else {
      if ((bVar1 & 1) == 0) goto LAB_0084357c;
      if (param_1[0x13] != param_2[0x13]) {
        return 0;
      }
    }
    bVar1 = *(byte *)(param_2 + 0x16);
    if ((bVar1 & *(byte *)(param_1 + 0x16)) == 0) {
      if (*(byte *)(param_1 + 0x16) != bVar1) {
        return 0;
      }
    }
    else {
      if ((bVar1 & 1) == 0) {
LAB_0084357c:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                  );
      }
      if (param_1[0x15] != param_2[0x15]) {
        return 0;
      }
    }
    if (((*param_1 == *param_2) && (uVar2 = FUN_00667a08(param_1 + 2,param_2 + 2), (uVar2 & 1) != 0)
        ) && (uVar2 = FUN_00843590(param_1 + 0x17,param_2 + 0x17), (uVar2 & 1) != 0)) {
      return 1;
    }
  }
  return 0;
}


// ===== 00843590  FUN_00843590 =====

bool FUN_00843590(int *param_1,int *param_2)

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


// ===== 008435e8  FUN_008435e8 =====

void FUN_008435e8(undefined8 param_1,long param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  long local_b0;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  long local_90;
  long local_80;
  undefined *puStack_78;
  ulong local_70;
  code *pcStack_68;
  undefined8 local_60;
  code *pcStack_58;
  undefined1 *local_50;
  undefined *puStack_48;
  
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = 0x1aaaaaaaaaaaaaa;
  if ((&local_a0 < &UNK_001d05be) && (&DAT_001d05bd < (undefined *)((ulong)&local_a0 | 1))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
  plVar4 = *(long **)(param_2 + 0x28);
  local_a0 = (undefined1 *)0xaaaaaaaaaaaa007b;
  if (plVar4 != (long *)(param_2 + 0x30)) {
    bVar1 = true;
    do {
      if (!bVar1) {
        FUN_00547cac(&local_a0,&DAT_001e1644,2);
      }
      lVar3 = (long)*(char *)((long)plVar4 + 0x37);
      if (lVar3 < 0) {
        plVar2 = (long *)plVar4[4];
        lVar3 = plVar4[5];
      }
      else {
        plVar2 = plVar4 + 4;
      }
      FUN_00547cac(&local_a0,plVar2,lVar3);
      FUN_00547cac(&local_a0,&DAT_001c4dc3,2);
      lVar3 = (long)*(char *)((long)plVar4 + 0x4f);
      if (lVar3 < 0) {
        plVar2 = (long *)plVar4[7];
        lVar3 = plVar4[8];
      }
      else {
        plVar2 = plVar4 + 7;
      }
      FUN_00547cac(&local_a0,plVar2,lVar3);
      plVar2 = (long *)plVar4[1];
      plVar5 = plVar4;
      if ((long *)plVar4[1] == (long *)0x0) {
        do {
          plVar4 = (long *)plVar5[2];
          bVar1 = plVar5 != (long *)*plVar4;
          plVar5 = plVar4;
        } while (bVar1);
      }
      else {
        do {
          plVar4 = plVar2;
          plVar2 = (long *)*plVar4;
        } while ((long *)*plVar4 != (long *)0x0);
      }
      bVar1 = false;
    } while (plVar4 != (long *)(param_2 + 0x30));
  }
  FUN_00547cac(&local_a0,&DAT_001b0cbb,1);
  puStack_b8 = puStack_98;
  local_c0 = local_a0;
  local_a0 = (undefined1 *)0x0;
  puStack_98 = (undefined1 *)0x0;
  local_b0 = local_90;
  local_90 = 0;
  puStack_78 = PTR_FUN_00d52180;
  local_70 = (ulong)*(uint *)(param_2 + 0x18) | 0xaaaaaaaa00000000;
  local_60 = *(undefined8 *)(param_2 + 0x20);
  pcStack_68 = FUN_006e9eb4;
  pcStack_58 = FUN_006e9ef8;
  puStack_48 = PTR_FUN_00d52180;
  local_80 = param_2;
  local_50 = (undefined1 *)&local_c0;
  FUN_006eea30(param_1,thunk_FUN_00547cac,
               "{name: %s, clockrate_hz: %d, num_channels: %d, parameters: %v}",0x3e,&local_80,4);
  if (local_b0 < 0) {
    operator_delete(local_c0);
  }
  if (local_90 < 0) {
    operator_delete(local_a0);
  }
  return;
}


// ===== 00843804  thunk_FUN_00547cac =====

void thunk_FUN_00547cac(void)

{
  thunk_FUN_00547cac();
  return;
}


// ===== 0084380c  FUN_0084380c =====

void FUN_0084380c(undefined8 param_1,undefined4 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *local_450;
  undefined1 *puStack_448;
  undefined1 *local_440;
  undefined1 auStack_438 [1024];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  memset(auStack_438,0xaa,0x400);
  local_440 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_448 = &DAT_aaaaaaaaaaaaaaaa;
  local_450 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00622830(&local_450,auStack_438,0x400);
  uVar2 = FUN_006228b0(&local_450,"{ulpfec_payload_type: ",0x16);
  FUN_00622910(uVar2,*param_2);
  uVar2 = FUN_006228b0(&local_450,", red_payload_type: ",0x14);
  FUN_00622910(uVar2,param_2[1]);
  uVar2 = FUN_006228b0(&local_450,", red_rtx_payload_type: ",0x18);
  FUN_00622910(uVar2,param_2[2]);
  FUN_00622844(&local_450,0x7d);
  FUN_005d3510(param_1,local_450);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008438fc  FUN_008438fc =====

bool FUN_008438fc(int *param_1,int *param_2)

{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return param_1[2] == param_2[2];
  }
  return false;
}


// ===== 0084393c  FUN_0084393c =====

void FUN_0084393c(undefined8 param_1,undefined4 *param_2)

{
  char *pcVar1;
  long lVar2;
  undefined8 ***pppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined8 **local_898;
  ulong uStack_890;
  byte bStack_881;
  undefined1 *local_880;
  undefined1 *puStack_878;
  undefined1 *local_870;
  undefined1 *local_860;
  undefined1 *puStack_858;
  undefined1 *local_850;
  undefined1 auStack_848 [1024];
  undefined1 auStack_448 [1024];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  memset(auStack_848,0xaa,0x400);
  local_870 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_878 = &DAT_aaaaaaaaaaaaaaaa;
  local_880 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00622830(&local_880,auStack_848,0x400);
  uVar4 = FUN_006228b0(&local_880,"{ssrc: ",7);
  FUN_006229f8(uVar4,*param_2);
  uVar4 = FUN_006228b0(&local_880,", rid: ",7);
  lVar7 = (long)*(char *)((long)param_2 + 0x1f);
  if (lVar7 < 0) {
    puVar6 = *(undefined4 **)(param_2 + 2);
    lVar7 = *(long *)(param_2 + 4);
  }
  else {
    puVar6 = param_2 + 2;
  }
  FUN_006228b0(uVar4,puVar6,lVar7);
  uVar4 = FUN_006228b0(&local_880,", payload_name: ",0x10);
  lVar7 = (long)*(char *)((long)param_2 + 0x37);
  if (lVar7 < 0) {
    puVar6 = *(undefined4 **)(param_2 + 8);
    lVar7 = *(long *)(param_2 + 10);
  }
  else {
    puVar6 = param_2 + 8;
  }
  FUN_006228b0(uVar4,puVar6,lVar7);
  uVar4 = FUN_006228b0(&local_880,", payload_type: ",0x10);
  FUN_00622910(uVar4,param_2[0xe]);
  uVar5 = FUN_006228b0(&local_880,", raw_payload: ",0xf);
  uVar4 = 4;
  if (*(char *)(param_2 + 0xf) == '\0') {
    uVar4 = 5;
  }
  pcVar1 = "true";
  if (*(char *)(param_2 + 0xf) == '\0') {
    pcVar1 = "false";
  }
  FUN_006228b0(uVar5,pcVar1,uVar4);
  if (*(char *)(param_2 + 0x12) == '\x01') {
    uVar4 = FUN_006228b0(&local_880,", rtx: ",7);
    if ((*(byte *)(param_2 + 0x12) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1054: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                );
    }
    memset(auStack_448,0xaa,0x400);
    local_850 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_858 = &DAT_aaaaaaaaaaaaaaaa;
    local_860 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00622830(&local_860,auStack_448,0x400);
    uVar5 = FUN_006228b0(&local_860,"{ssrc: ",7);
    FUN_006229f8(uVar5,param_2[0x10]);
    uVar5 = FUN_006228b0(&local_860,", payload_type: ",0x10);
    FUN_00622910(uVar5,param_2[0x11]);
    FUN_00622844(&local_860,0x7d);
    FUN_005d3510(&local_898,local_860);
    pppuVar3 = (undefined8 ***)local_898;
    if (-1 < (char)bStack_881) {
      uStack_890 = (ulong)bStack_881;
      pppuVar3 = &local_898;
    }
    FUN_006228b0(uVar4,pppuVar3,uStack_890);
    if ((char)bStack_881 < '\0') {
      operator_delete(local_898);
    }
  }
  FUN_00622844(&local_880,0x7d);
  FUN_005d3510(param_1,local_880);
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00843ba4  FUN_00843ba4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00843ba4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(param_1 + 9) = 1;
  uVar2 = _UNK_001f22a8;
  uVar1 = _DAT_001f22a0;
  param_1[10] = 0x5b4;
  param_1[8] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined8 *)((long)param_1 + 0xbc) = uVar2;
  *(undefined8 *)((long)param_1 + 0xb4) = uVar1;
  *(undefined4 *)(param_1 + 0x19) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  *(undefined8 *)((long)param_1 + 0xcc) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined4 *)((long)param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  return;
}


// ===== 00843c1c  FUN_00843c1c =====

/* WARNING: Removing unreachable block (ram,0x00843dbc) */

void FUN_00843c1c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  ulong uVar5;
  void *pvVar6;
  void *pvVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  pvVar7 = (void *)*param_2;
  uVar5 = param_2[1] - (long)pvVar7;
  if (uVar5 != 0) {
    if ((long)uVar5 < 0) goto LAB_00843eec;
    pvVar6 = operator_new(uVar5);
    *param_1 = pvVar6;
    param_1[1] = pvVar6;
    param_1[2] = (long)pvVar6 + uVar5;
    memcpy(pvVar6,pvVar7,uVar5);
    param_1[1] = (long)pvVar6 + uVar5;
  }
  FUN_00843ef4(param_1 + 3,param_2 + 3);
  if (*(char *)((long)param_2 + 0x47) < '\0') {
    FUN_005478d8(param_1 + 6,param_2[6],param_2[7]);
  }
  else {
    uVar13 = param_2[7];
    uVar10 = param_2[6];
    param_1[8] = param_2[8];
    param_1[7] = uVar13;
    param_1[6] = uVar10;
  }
  uVar13 = param_2[10];
  uVar10 = param_2[9];
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  param_1[10] = uVar13;
  param_1[9] = uVar10;
  FUN_0066974c(param_1 + 0xc,param_2 + 0xc);
  if (*(char *)((long)param_2 + 0x8f) < '\0') {
    FUN_005478d8(param_1 + 0xf,param_2[0xf],param_2[0x10]);
  }
  else {
    uVar13 = param_2[0x10];
    uVar10 = param_2[0xf];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar13;
    param_1[0xf] = uVar10;
  }
  uVar4 = *(undefined1 *)((long)param_2 + 0x94);
  uVar3 = *(undefined4 *)(param_2 + 0x12);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)((long)param_1 + 0x94) = uVar4;
  *(undefined4 *)(param_1 + 0x12) = uVar3;
  lVar2 = param_2[0x13];
  puVar11 = (undefined8 *)param_2[0x14];
  uVar5 = (long)puVar11 - lVar2;
  if (uVar5 != 0) {
    if (0x333333333333333 < (ulong)(((long)uVar5 >> 4) * -0x3333333333333333)) {
      auVar14 = FUN_00845064();
      puVar8 = auVar14._0_8_;
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar11 = (undefined8 *)*auVar14._8_8_;
      puVar12 = (undefined8 *)auVar14._8_8_[1];
      uVar5 = (long)puVar12 - (long)puVar11;
      if (uVar5 != 0) {
        if (0xaaaaaaaaaaaaaaa < (ulong)(((long)uVar5 >> 3) * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
          FUN_00625650();
        }
        puVar9 = (undefined8 *)operator_new(uVar5);
        *puVar8 = puVar9;
        puVar8[1] = puVar9;
        puVar8[2] = (long)puVar9 + uVar5;
        do {
          if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          if (*(char *)((long)puVar11 + 0x17) < '\0') {
            FUN_005478d8(puVar9,*puVar11,puVar11[1]);
          }
          else {
            uVar13 = puVar11[1];
            uVar10 = *puVar11;
            puVar9[2] = puVar11[2];
            puVar9[1] = uVar13;
            *puVar9 = uVar10;
          }
          puVar11 = puVar11 + 3;
          puVar9 = puVar9 + 3;
        } while (puVar11 != puVar12);
        puVar8[1] = puVar9;
      }
      return;
    }
    pvVar7 = operator_new(uVar5);
    puVar12 = (undefined8 *)(lVar2 + 0x20);
    param_1[0x13] = pvVar7;
    param_1[0x14] = pvVar7;
    param_1[0x15] = (long)pvVar7 + uVar5;
    puVar8 = (undefined8 *)((long)pvVar7 + 0x20);
    do {
      puVar9 = puVar8;
      if (puVar9 == (undefined8 *)0x20) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *(undefined4 *)(puVar9 + -4) = *(undefined4 *)(puVar12 + -4);
      uVar13 = puVar12[-2];
      uVar10 = puVar12[-3];
      puVar9[-1] = puVar12[-1];
      puVar9[-2] = uVar13;
      puVar9[-3] = uVar10;
      if (*(char *)((long)puVar12 + 0x17) < '\0') {
        FUN_005478d8(puVar9,*puVar12,puVar12[1]);
      }
      else {
        uVar13 = puVar12[1];
        uVar10 = *puVar12;
        puVar9[2] = puVar12[2];
        puVar9[1] = uVar13;
        *puVar9 = uVar10;
      }
      puVar8 = puVar12 + 5;
      uVar13 = puVar12[4];
      uVar10 = puVar12[3];
      puVar1 = puVar12 + 6;
      puVar12 = puVar12 + 10;
      *(undefined1 *)(puVar9 + 5) = *(undefined1 *)puVar8;
      puVar9[4] = uVar13;
      puVar9[3] = uVar10;
      puVar8 = puVar9 + 10;
    } while (puVar1 != puVar11);
    param_1[0x14] = puVar9 + 6;
  }
  uVar13 = param_2[0x17];
  uVar10 = param_2[0x16];
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  param_1[0x17] = uVar13;
  param_1[0x16] = uVar10;
  uVar10 = param_2[0x19];
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x19] = uVar10;
  param_1[0x1a] = 0;
  pvVar7 = (void *)param_2[0x1a];
  uVar5 = param_2[0x1b] - (long)pvVar7;
  if (uVar5 != 0) {
    if ((long)uVar5 < 0) goto LAB_00843eec;
    pvVar6 = operator_new(uVar5);
    param_1[0x1a] = pvVar6;
    param_1[0x1b] = pvVar6;
    param_1[0x1c] = (long)pvVar6 + uVar5;
    memcpy(pvVar6,pvVar7,uVar5);
    param_1[0x1b] = (long)pvVar6 + uVar5;
  }
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  pvVar7 = (void *)param_2[0x1d];
  uVar5 = param_2[0x1e] - (long)pvVar7;
  if (uVar5 != 0) {
    if ((long)uVar5 < 0) {
LAB_00843eec:
                    /* WARNING: Subroutine does not return */
      FUN_005da79c();
    }
    pvVar6 = operator_new(uVar5);
    param_1[0x1d] = pvVar6;
    param_1[0x1e] = pvVar6;
    param_1[0x1f] = (long)pvVar6 + uVar5;
    memcpy(pvVar6,pvVar7,uVar5);
    param_1[0x1e] = (long)pvVar6 + uVar5;
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  if (*(char *)((long)param_2 + 0x11f) < '\0') {
    FUN_005478d8(param_1 + 0x21,param_2[0x21],param_2[0x22]);
  }
  else {
    uVar13 = param_2[0x22];
    uVar10 = param_2[0x21];
    param_1[0x23] = param_2[0x23];
    param_1[0x22] = uVar13;
    param_1[0x21] = uVar10;
  }
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
  return;
}


// ===== 00843ef4  FUN_00843ef4 =====

void FUN_00843ef4(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar4 = (undefined8 *)*param_2;
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = (long)puVar1 - (long)puVar4;
  if (uVar2 != 0) {
    if (0xaaaaaaaaaaaaaaa < (ulong)(((long)uVar2 >> 3) * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
      FUN_00625650();
    }
    puVar3 = (undefined8 *)operator_new(uVar2);
    *param_1 = puVar3;
    param_1[1] = puVar3;
    param_1[2] = (long)puVar3 + uVar2;
    do {
      if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      if (*(char *)((long)puVar4 + 0x17) < '\0') {
        FUN_005478d8(puVar3,*puVar4,puVar4[1]);
      }
      else {
        uVar6 = puVar4[1];
        uVar5 = *puVar4;
        puVar3[2] = puVar4[2];
        puVar3[1] = uVar6;
        *puVar3 = uVar5;
      }
      puVar4 = puVar4 + 3;
      puVar3 = puVar3 + 3;
    } while (puVar4 != puVar1);
    param_1[1] = puVar3;
  }
  return;
}


// ===== 00843fd0  FUN_00843fd0 =====

/* WARNING: Removing unreachable block (ram,0x00844168) */
/* WARNING: Removing unreachable block (ram,0x00844184) */
/* WARNING: Removing unreachable block (ram,0x008442e0) */

void FUN_00843fd0(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  if (*(char *)((long)param_1 + 0x11f) < '\0') {
    operator_delete((void *)param_1[0x21]);
    pvVar1 = (void *)param_1[0x1d];
  }
  else {
    pvVar1 = (void *)param_1[0x1d];
  }
  if (pvVar1 != (void *)0x0) {
    pvVar3 = (void *)param_1[0x1e];
    uVar5 = (ulong)((long)pvVar3 + (-4 - ((long)pvVar3 << 0x3e))) >> 2;
    uVar4 = (ulong)(((long)pvVar1 - (long)pvVar3 << 0x3e) - ((long)pvVar1 - (long)pvVar3)) >> 2;
    if (uVar5 <= uVar4) {
      uVar4 = uVar5;
    }
    if ((1 < uVar4) && ((((int)pvVar1 - (int)pvVar3 | -(int)pvVar3) & 3U) == 0)) {
      uVar4 = uVar4 & 0x3ffffffffffffffe;
      pvVar3 = (void *)((long)pvVar3 + uVar4 * -4);
      do {
        uVar4 = uVar4 - 2;
      } while (uVar4 != 0);
    }
    do {
      if (pvVar3 == pvVar1) {
        param_1[0x1e] = pvVar1;
        operator_delete(pvVar1);
        pvVar1 = (void *)param_1[0x1a];
        if (pvVar1 == (void *)0x0) goto LAB_00844124;
        goto LAB_00844000;
      }
      pvVar3 = (void *)((long)pvVar3 + -4);
    } while (pvVar3 != (void *)0x0);
    goto LAB_008440e4;
  }
  pvVar1 = (void *)param_1[0x1a];
  if (pvVar1 != (void *)0x0) {
LAB_00844000:
    pvVar3 = (void *)param_1[0x1b];
    uVar5 = (ulong)((long)pvVar3 + (-4 - ((long)pvVar3 << 0x3e))) >> 2;
    uVar4 = (ulong)(((long)pvVar1 - (long)pvVar3 << 0x3e) - ((long)pvVar1 - (long)pvVar3)) >> 2;
    if (uVar5 <= uVar4) {
      uVar4 = uVar5;
    }
    if ((1 < uVar4) && ((((int)pvVar1 - (int)pvVar3 | -(int)pvVar3) & 3U) == 0)) {
      uVar4 = uVar4 & 0x3ffffffffffffffe;
      pvVar3 = (void *)((long)pvVar3 + uVar4 * -4);
      do {
        uVar4 = uVar4 - 2;
      } while (uVar4 != 0);
    }
    do {
      if (pvVar3 == pvVar1) {
        param_1[0x1b] = pvVar1;
        operator_delete(pvVar1);
        goto LAB_00844124;
      }
      pvVar3 = (void *)((long)pvVar3 + -4);
    } while (pvVar3 != (void *)0x0);
    goto LAB_008440e4;
  }
LAB_00844124:
  pvVar1 = (void *)param_1[0x13];
  if (pvVar1 != (void *)0x0) {
    pvVar3 = pvVar1;
    if (pvVar1 != (void *)param_1[0x14]) {
      lVar6 = (long)param_1[0x14] + -0x20;
      do {
        pvVar3 = (void *)(lVar6 + -0x30);
        if (lVar6 == 0x30) goto LAB_008440e4;
        if (*(char *)(lVar6 + 7) < '\0') {
          operator_delete(*(void **)(lVar6 + -0x10));
        }
        lVar6 = lVar6 + -0x50;
      } while (pvVar3 != pvVar1);
      pvVar3 = (void *)param_1[0x13];
    }
    param_1[0x14] = pvVar1;
    operator_delete(pvVar3);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    operator_delete((void *)param_1[0xf]);
    pvVar1 = (void *)param_1[0xc];
    if (pvVar1 == (void *)0x0) goto LAB_008441bc;
LAB_00844254:
    pvVar3 = (void *)param_1[0xd];
    pvVar2 = pvVar1;
    if (pvVar1 != pvVar3) {
      do {
        pvVar3 = (void *)((long)pvVar3 + -0x20);
        if (pvVar3 == (void *)0x0) goto LAB_008440e4;
        FUN_00668f8c(pvVar3);
      } while (pvVar3 != pvVar1);
      pvVar2 = (void *)param_1[0xc];
    }
    param_1[0xd] = pvVar1;
    operator_delete(pvVar2);
    if (-1 < *(char *)((long)param_1 + 0x47)) goto LAB_008441c4;
LAB_00844298:
    operator_delete((void *)param_1[6]);
    pvVar1 = (void *)param_1[3];
    if (pvVar1 == (void *)0x0) goto LAB_008441cc;
LAB_008442b0:
    pvVar3 = (void *)param_1[4];
    pvVar2 = pvVar1;
    if (pvVar1 != pvVar3) {
      do {
        pvVar3 = (void *)((long)pvVar3 + -0x18);
        if (pvVar3 == (void *)0x0) goto LAB_008440e4;
      } while (pvVar3 != pvVar1);
      pvVar2 = (void *)param_1[3];
    }
    param_1[4] = pvVar1;
    operator_delete(pvVar2);
    pvVar1 = (void *)*param_1;
  }
  else {
    pvVar1 = (void *)param_1[0xc];
    if (pvVar1 != (void *)0x0) goto LAB_00844254;
LAB_008441bc:
    if (*(char *)((long)param_1 + 0x47) < '\0') goto LAB_00844298;
LAB_008441c4:
    pvVar1 = (void *)param_1[3];
    if (pvVar1 != (void *)0x0) goto LAB_008442b0;
LAB_008441cc:
    pvVar1 = (void *)*param_1;
  }
  if (pvVar1 == (void *)0x0) {
    return;
  }
  pvVar3 = (void *)param_1[1];
  uVar5 = (ulong)((long)pvVar3 + (-4 - ((long)pvVar3 << 0x3e))) >> 2;
  uVar4 = (ulong)(((long)pvVar1 - (long)pvVar3 << 0x3e) - ((long)pvVar1 - (long)pvVar3)) >> 2;
  if (uVar5 <= uVar4) {
    uVar4 = uVar5;
  }
  if ((1 < uVar4) && ((((int)pvVar1 - (int)pvVar3 | -(int)pvVar3) & 3U) == 0)) {
    uVar4 = uVar4 & 0x3ffffffffffffffe;
    pvVar3 = (void *)((long)pvVar3 + uVar4 * -4);
    do {
      uVar4 = uVar4 - 2;
    } while (uVar4 != 0);
  }
  do {
    if (pvVar3 == pvVar1) {
      param_1[1] = pvVar1;
      operator_delete(pvVar1);
      return;
    }
    pvVar3 = (void *)((long)pvVar3 + -4);
  } while (pvVar3 != (void *)0x0);
LAB_008440e4:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00844344  FUN_00844344 =====

void FUN_00844344(undefined8 param_1,long *param_2)

{
  char *pcVar1;
  long lVar2;
  undefined8 ****ppppuVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 ***local_898;
  ulong uStack_890;
  byte bStack_881;
  undefined1 *local_880;
  undefined1 *puStack_878;
  undefined1 *local_870;
  undefined1 auStack_868 [2048];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  memset(auStack_868,0xaa,0x800);
  local_870 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_878 = &DAT_aaaaaaaaaaaaaaaa;
  local_880 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00622830(&local_880,auStack_868,0x800);
  FUN_006228b0(&local_880,"{ssrcs: [",9);
  lVar8 = *param_2;
  if (param_2[1] != lVar8) {
    uVar10 = 0;
    do {
      FUN_006229f8(&local_880,*(undefined4 *)(lVar8 + uVar10 * 4));
      lVar8 = *param_2;
      uVar9 = param_2[1] - lVar8 >> 2;
      if (uVar10 != uVar9 - 1) {
        FUN_006228b0(&local_880,&DAT_001e1644,2);
        lVar8 = *param_2;
        uVar9 = param_2[1] - lVar8 >> 2;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar9);
  }
  FUN_006228b0(&local_880,"], rids: [",10);
  lVar8 = param_2[3];
  if (param_2[4] != lVar8) {
    lVar11 = 0;
    uVar10 = 0;
    do {
      plVar7 = (long *)(lVar8 + lVar11);
      lVar8 = (long)*(char *)((long)plVar7 + 0x17);
      if (lVar8 < 0) {
        lVar8 = plVar7[1];
        plVar7 = (long *)*plVar7;
      }
      FUN_006228b0(&local_880,plVar7,lVar8);
      lVar8 = param_2[3];
      uVar9 = (param_2[4] - lVar8 >> 3) * -0x5555555555555555;
      if (uVar10 != uVar9 - 1) {
        FUN_006228b0(&local_880,&DAT_001e1644,2);
        lVar8 = param_2[3];
        uVar9 = (param_2[4] - lVar8 >> 3) * -0x5555555555555555;
      }
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 0x18;
    } while (uVar10 < uVar9);
  }
  uVar5 = FUN_006228b0(&local_880,"], mid: \'",9);
  lVar8 = (long)*(char *)((long)param_2 + 0x47);
  if (lVar8 < 0) {
    plVar7 = (long *)param_2[6];
    lVar8 = param_2[7];
  }
  else {
    plVar7 = param_2 + 6;
  }
  uVar5 = FUN_006228b0(uVar5,plVar7,lVar8);
  FUN_006228b0(uVar5,&DAT_001c1d3e,1);
  uVar6 = FUN_006228b0(&local_880,", rtcp_mode: ",0xd);
  bVar4 = (int)param_2[9] != 1;
  uVar5 = 0x13;
  if (bVar4) {
    uVar5 = 0x16;
  }
  pcVar1 = "RtcpMode::kCompound";
  if (bVar4) {
    pcVar1 = "RtcpMode::kReducedSize";
  }
  FUN_006228b0(uVar6,pcVar1,uVar5);
  uVar5 = FUN_006228b0(&local_880,", max_packet_size: ",0x13);
  FUN_00622a20(uVar5,param_2[10]);
  uVar6 = FUN_006228b0(&local_880,", extmap-allow-mixed: ",0x16);
  uVar5 = 4;
  pcVar1 = "true";
  if ((char)param_2[0xb] == '\0') {
    uVar5 = 5;
    pcVar1 = "false";
  }
  FUN_006228b0(uVar6,pcVar1,uVar5);
  FUN_006228b0(&local_880,", extensions: [",0xf);
  lVar8 = param_2[0xc];
  if (param_2[0xd] != lVar8) {
    lVar11 = 0;
    uVar10 = 0;
    do {
      FUN_006699d4(&local_898,lVar8 + lVar11);
      uVar9 = uStack_890;
      ppppuVar3 = (undefined8 ****)local_898;
      if (-1 < (char)bStack_881) {
        uVar9 = (ulong)bStack_881;
        ppppuVar3 = &local_898;
      }
      FUN_006228b0(&local_880,ppppuVar3,uVar9);
      if ((char)bStack_881 < '\0') {
        operator_delete(local_898);
      }
      lVar8 = param_2[0xc];
      uVar9 = param_2[0xd] - lVar8 >> 5;
      if (uVar10 != uVar9 - 1) {
        FUN_006228b0(&local_880,&DAT_001e1644,2);
        lVar8 = param_2[0xc];
        uVar9 = param_2[0xd] - lVar8 >> 5;
      }
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 0x20;
    } while (uVar10 < uVar9);
  }
  FUN_00622844(&local_880,0x5d);
  uVar5 = FUN_006228b0(&local_880,", lntf: ",8);
  pcVar1 = "{enabled: true}";
  if ((char)param_2[0x16] == '\0') {
    pcVar1 = "{enabled: false}";
  }
  FUN_005d3510(&local_898,pcVar1);
  uVar10 = uStack_890;
  ppppuVar3 = (undefined8 ****)local_898;
  if (-1 < (char)bStack_881) {
    uVar10 = (ulong)bStack_881;
    ppppuVar3 = &local_898;
  }
  FUN_006228b0(uVar5,ppppuVar3,uVar10);
  if ((char)bStack_881 < '\0') {
    operator_delete(local_898);
  }
  uVar5 = FUN_006228b0(&local_880,", nack: {rtp_history_ms: ",0x19);
  uVar5 = FUN_00622910(uVar5,*(undefined4 *)((long)param_2 + 0xb4));
  FUN_00622844(uVar5,0x7d);
  uVar5 = FUN_006228b0(&local_880,", ulpfec: ",10);
  FUN_0084380c(&local_898,param_2 + 0x17);
  uVar10 = uStack_890;
  ppppuVar3 = (undefined8 ****)local_898;
  if (-1 < (char)bStack_881) {
    uVar10 = (ulong)bStack_881;
    ppppuVar3 = &local_898;
  }
  FUN_006228b0(uVar5,ppppuVar3,uVar10);
  if ((char)bStack_881 < '\0') {
    operator_delete(local_898);
  }
  uVar5 = FUN_006228b0(&local_880,", payload_name: ",0x10);
  lVar8 = (long)*(char *)((long)param_2 + 0x8f);
  if (lVar8 < 0) {
    plVar7 = (long *)param_2[0xf];
    lVar8 = param_2[0x10];
  }
  else {
    plVar7 = param_2 + 0xf;
  }
  FUN_006228b0(uVar5,plVar7,lVar8);
  uVar5 = FUN_006228b0(&local_880,", payload_type: ",0x10);
  FUN_00622910(uVar5,(int)param_2[0x12]);
  uVar6 = FUN_006228b0(&local_880,", raw_payload: ",0xf);
  uVar5 = 4;
  pcVar1 = "true";
  if (*(char *)((long)param_2 + 0x94) == '\0') {
    uVar5 = 5;
    pcVar1 = "false";
  }
  FUN_006228b0(uVar6,pcVar1,uVar5);
  FUN_006228b0(&local_880,", stream_configs: [",0x13);
  lVar8 = param_2[0x13];
  if (param_2[0x14] != lVar8) {
    lVar11 = 0;
    uVar10 = 0;
    do {
      FUN_0084393c(&local_898,lVar8 + lVar11);
      uVar9 = uStack_890;
      ppppuVar3 = (undefined8 ****)local_898;
      if (-1 < (char)bStack_881) {
        uVar9 = (ulong)bStack_881;
        ppppuVar3 = &local_898;
      }
      FUN_006228b0(&local_880,ppppuVar3,uVar9);
      if ((char)bStack_881 < '\0') {
        operator_delete(local_898);
      }
      lVar8 = param_2[0x13];
      uVar9 = (param_2[0x14] - lVar8 >> 4) * -0x3333333333333333;
      if (uVar10 != uVar9 - 1) {
        FUN_006228b0(&local_880,&DAT_001e1644,2);
        lVar8 = param_2[0x13];
        uVar9 = (param_2[0x14] - lVar8 >> 4) * -0x3333333333333333;
      }
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 0x50;
    } while (uVar10 < uVar9);
  }
  FUN_00622844(&local_880,0x5d);
  uVar5 = FUN_006228b0(&local_880,", flexfec: {payload_type: ",0x1a);
  FUN_00622910(uVar5,(int)param_2[0x19]);
  uVar5 = FUN_006228b0(&local_880,", ssrc: ",8);
  FUN_006229f8(uVar5,*(undefined4 *)((long)param_2 + 0xcc));
  FUN_006228b0(&local_880,", protected_media_ssrcs: [",0x1a);
  lVar8 = param_2[0x1a];
  if (param_2[0x1b] != lVar8) {
    uVar10 = 0;
    do {
      FUN_006229f8(&local_880,*(undefined4 *)(lVar8 + uVar10 * 4));
      lVar8 = param_2[0x1a];
      uVar9 = param_2[0x1b] - lVar8 >> 2;
      if (uVar10 != uVar9 - 1) {
        FUN_006228b0(&local_880,&DAT_001e1644,2);
        lVar8 = param_2[0x1a];
        uVar9 = param_2[0x1b] - lVar8 >> 2;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar9);
  }
  FUN_006228b0(&local_880,&DAT_001b4a7a,2);
  uVar5 = FUN_006228b0(&local_880,", rtx: ",7);
  FUN_00844a6c(&local_898,param_2 + 0x1d);
  ppppuVar3 = (undefined8 ****)local_898;
  if (-1 < (char)bStack_881) {
    uStack_890 = (ulong)bStack_881;
    ppppuVar3 = &local_898;
  }
  FUN_006228b0(uVar5,ppppuVar3,uStack_890);
  if ((char)bStack_881 < '\0') {
    operator_delete(local_898);
  }
  uVar5 = FUN_006228b0(&local_880,", c_name: ",10);
  lVar8 = (long)*(char *)((long)param_2 + 0x11f);
  if (lVar8 < 0) {
    plVar7 = (long *)param_2[0x21];
    lVar8 = param_2[0x22];
  }
  else {
    plVar7 = param_2 + 0x21;
  }
  FUN_006228b0(uVar5,plVar7,lVar8);
  FUN_00622844(&local_880,0x7d);
  FUN_005d3510(param_1,local_880);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00844a6c  FUN_00844a6c =====

void FUN_00844a6c(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *local_460;
  undefined1 *puStack_458;
  undefined1 *local_450;
  undefined1 auStack_448 [1024];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  memset(auStack_448,0xaa,0x400);
  local_450 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_458 = &DAT_aaaaaaaaaaaaaaaa;
  local_460 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00622830(&local_460,auStack_448,0x400);
  FUN_006228b0(&local_460,"{ssrcs: [",9);
  lVar3 = *param_2;
  if (param_2[1] != lVar3) {
    uVar5 = 0;
    do {
      FUN_006229f8(&local_460,*(undefined4 *)(lVar3 + uVar5 * 4));
      lVar3 = *param_2;
      uVar4 = param_2[1] - lVar3 >> 2;
      if (uVar5 != uVar4 - 1) {
        FUN_006228b0(&local_460,&DAT_001e1644,2);
        lVar3 = *param_2;
        uVar4 = param_2[1] - lVar3 >> 2;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  FUN_00622844(&local_460,0x5d);
  uVar2 = FUN_006228b0(&local_460,", payload_type: ",0x10);
  FUN_00622910(uVar2,(int)param_2[3]);
  FUN_00622844(&local_460,0x7d);
  FUN_005d3510(param_1,local_460);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00844bb8  FUN_00844bb8 =====

bool FUN_00844bb8(undefined8 *param_1,wchar_t param_2)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  
  pwVar1 = (wchar_t *)param_1[1];
  pwVar2 = wmemchr((wchar_t *)*param_1,param_2,(long)pwVar1 - (long)*param_1 >> 2);
  return pwVar2 != (wchar_t *)0x0 && pwVar2 != pwVar1;
}


// ===== 00844bf8  FUN_00844bf8 =====

bool FUN_00844bf8(long param_1,wchar_t param_2)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  
  pwVar1 = *(wchar_t **)(param_1 + 0xf0);
  pwVar2 = wmemchr(*(wchar_t **)(param_1 + 0xe8),param_2,
                   (long)pwVar1 - (long)*(wchar_t **)(param_1 + 0xe8) >> 2);
  return pwVar2 != (wchar_t *)0x0 && pwVar2 != pwVar1;
}


// ===== 00844c38  FUN_00844c38 =====

ulong FUN_00844c38(long *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = param_1[0x1d];
  if (lVar1 == param_1[0x1e]) {
    uVar3 = 0;
  }
  else {
    lVar2 = param_1[1] - *param_1;
    if (lVar2 != 0) {
      uVar3 = 0;
      do {
        if (*(int *)(*param_1 + uVar3 * 4) == param_2) {
          if (uVar3 < (ulong)(param_1[0x1e] - lVar1 >> 2)) {
            return (ulong)*(uint *)(lVar1 + uVar3 * 4) | 0x100000000;
          }
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                    );
        }
        uVar3 = uVar3 + 1;
      } while (lVar2 >> 2 != uVar3);
    }
    uVar3 = 0x100000000;
  }
  return uVar3;
}


// ===== 00844cc0  FUN_00844cc0 =====

undefined4 FUN_00844cc0(long *param_1,int param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = param_1[0x1e] - param_1[0x1d];
  if (lVar1 != 0) {
    uVar2 = 0;
    do {
      if (*(int *)(param_1[0x1d] + uVar2 * 4) == param_2) {
        if (uVar2 < (ulong)(param_1[1] - *param_1 >> 2)) {
          return *(undefined4 *)(*param_1 + uVar2 * 4);
        }
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                  );
      }
      uVar2 = uVar2 + 1;
    } while (lVar1 >> 2 != uVar2);
  }
  return 0;
}


// ===== 00844d34  FUN_00844d34 =====

undefined4 FUN_00844d34(long param_1)

{
  if (*(undefined4 **)(param_1 + 0xd8) != *(undefined4 **)(param_1 + 0xd0)) {
    return **(undefined4 **)(param_1 + 0xd0);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
            );
}


// ===== 00844d6c  FUN_00844d6c =====

void FUN_00844d6c(undefined8 *param_1,long *param_2,wchar_t param_3)

{
  wchar_t *pwVar1;
  undefined1 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  wchar_t *pwVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  pwVar5 = (wchar_t *)param_2[1];
  pwVar1 = wmemchr((wchar_t *)*param_2,param_3,(long)pwVar5 - *param_2 >> 2);
  if (pwVar1 != (wchar_t *)0x0) {
    pwVar5 = pwVar1;
  }
  if (pwVar5 != (wchar_t *)param_2[1]) {
    uVar3 = (long)pwVar5 - *param_2 >> 2;
    if (uVar3 < (ulong)((param_2[4] - param_2[3] >> 3) * -0x5555555555555555)) {
      puVar4 = (undefined8 *)(param_2[3] + uVar3 * 0x18);
      if (*(char *)((long)puVar4 + 0x17) < '\0') {
        FUN_005478d8(param_1,*puVar4,puVar4[1]);
        uVar2 = 1;
      }
      else {
        uVar7 = puVar4[1];
        uVar6 = *puVar4;
        uVar2 = 1;
        param_1[2] = puVar4[2];
        param_1[1] = uVar7;
        *param_1 = uVar6;
      }
      goto LAB_00844e0c;
    }
  }
  uVar2 = 0;
  *(undefined1 *)param_1 = 0;
LAB_00844e0c:
  *(undefined1 *)(param_1 + 3) = uVar2;
  return;
}


// ===== 00844e38  FUN_00844e38 =====

void FUN_00844e38(undefined8 *param_1,long *param_2,ulong param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  byte bVar4;
  undefined1 uVar5;
  char cVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  
  if (param_3 < (ulong)((param_2[0x14] - param_2[0x13] >> 4) * -0x3333333333333333)) {
    puVar11 = (undefined4 *)(param_2[0x13] + param_3 * 0x50);
    *(undefined4 *)param_1 = *puVar11;
    if (*(char *)((long)puVar11 + 0x1f) < '\0') {
      FUN_005478d8(param_1 + 1,*(undefined8 *)(puVar11 + 2),*(undefined8 *)(puVar11 + 4));
      cVar6 = *(char *)((long)puVar11 + 0x37);
    }
    else {
      uVar14 = *(undefined8 *)(puVar11 + 4);
      uVar12 = *(undefined8 *)(puVar11 + 2);
      param_1[3] = *(undefined8 *)(puVar11 + 6);
      param_1[2] = uVar14;
      param_1[1] = uVar12;
      cVar6 = *(char *)((long)puVar11 + 0x37);
    }
    if (cVar6 < '\0') {
      FUN_005478d8(param_1 + 4,*(undefined8 *)(puVar11 + 8),*(undefined8 *)(puVar11 + 10));
    }
    else {
      uVar14 = *(undefined8 *)(puVar11 + 10);
      uVar12 = *(undefined8 *)(puVar11 + 8);
      param_1[6] = *(undefined8 *)(puVar11 + 0xc);
      param_1[5] = uVar14;
      param_1[4] = uVar12;
    }
    uVar14 = *(undefined8 *)(puVar11 + 0x10);
    uVar12 = *(undefined8 *)(puVar11 + 0xe);
    *(undefined1 *)(param_1 + 9) = *(undefined1 *)(puVar11 + 0x12);
    param_1[8] = uVar14;
    param_1[7] = uVar12;
    return;
  }
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[5] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[4] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[7] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[6] = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  lVar10 = *param_2;
  lVar13 = param_2[1];
  param_1[9] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[8] = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined4 *)param_1 = 0;
  puVar8 = param_1 + 1;
  param_1[2] = 0;
  *puVar8 = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  *(undefined1 *)((long)param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  if (param_3 < (ulong)(lVar13 - lVar10 >> 2)) {
    lVar13 = param_2[3];
    lVar3 = param_2[4];
    *(undefined4 *)param_1 = *(undefined4 *)(lVar10 + param_3 * 4);
    if ((param_3 < (ulong)((lVar3 - lVar13 >> 3) * -0x5555555555555555)) &&
       (puVar9 = (undefined8 *)(lVar13 + param_3 * 0x18), puVar8 != puVar9)) {
      if (*(char *)((long)puVar9 + 0x17) < '\0') {
        FUN_00547fc0(puVar8,*puVar9,puVar9[1]);
      }
      else {
        uVar14 = puVar9[1];
        uVar12 = *puVar9;
        param_1[3] = puVar9[2];
        param_1[2] = uVar14;
        *puVar8 = uVar12;
      }
    }
    plVar1 = param_2 + 0xf;
    if (param_1 + 4 != plVar1) {
      bVar4 = *(byte *)((long)param_2 + 0x8f);
      if (*(char *)((long)param_1 + 0x37) < '\0') {
        uVar2 = param_2[0x10];
        plVar7 = (long *)param_2[0xf];
        if (-1 < (char)bVar4) {
          uVar2 = (ulong)bVar4;
          plVar7 = plVar1;
        }
        FUN_00547f08(param_1 + 4,plVar7,uVar2);
      }
      else if ((char)bVar4 < '\0') {
        FUN_00547fc0(param_1 + 4,param_2[0xf],param_2[0x10]);
      }
      else {
        lVar13 = *plVar1;
        lVar10 = param_2[0x11];
        param_1[5] = param_2[0x10];
        param_1[4] = lVar13;
        param_1[6] = lVar10;
      }
    }
    lVar10 = param_2[0x1d];
    lVar13 = param_2[0x1e];
    uVar5 = *(undefined1 *)((long)param_2 + 0x94);
    *(int *)(param_1 + 7) = (int)param_2[0x12];
    *(undefined1 *)((long)param_1 + 0x3c) = uVar5;
    if (lVar10 == lVar13) {
      return;
    }
    param_1[8] = 0xffffffff00000000;
    *(undefined1 *)(param_1 + 9) = 1;
    if (param_3 < (ulong)(lVar13 - lVar10 >> 2)) {
      lVar13 = param_2[0x20];
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar10 + param_3 * 4);
      *(int *)((long)param_1 + 0x44) = (int)lVar13;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
            );
}


// ===== 00845064  FUN_00845064 =====

void FUN_00845064(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 0084507c  FUN_0084507c =====

void FUN_0084507c(long param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_007b6ad4();
  *(undefined4 *)(param_1 + 0x60) = param_3;
  return;
}


// ===== 008450ac  FUN_008450ac =====

void FUN_008450ac(long param_1)

{
  void *local_38 [2];
  char cStack_21;
  
  FUN_005d3510(local_38,"Unset");
  FUN_007b687c(param_1,local_38);
  if (cStack_21 < '\0') {
    operator_delete(local_38[0]);
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  return;
}


// ===== 00845110  FUN_00845110 =====

void FUN_00845110(long param_1,long param_2)

{
  FUN_007b69e0();
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  return;
}


// ===== 00845144  thunk_FUN_007b6d78 =====

void thunk_FUN_007b6d78(void)

{
  FUN_007b6d78();
  return;
}


// ===== 0084514c  FUN_0084514c =====

undefined8 FUN_0084514c(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x60) == *(int *)(param_2 + 0x60)) {
    uVar1 = FUN_007b72b4();
    return uVar1;
  }
  return 0;
}


// ===== 0084516c  FUN_0084516c =====

void FUN_0084516c(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 ****ppppuVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  void *local_70;
  undefined8 uStack_68;
  long local_60;
  undefined8 ***local_58;
  ulong uStack_50;
  ulong local_48;
  
  local_70 = (void *)0x0;
  uStack_68 = 0;
  local_60 = 0;
  FUN_00547cac(&local_70,"{payload_type: ",0xf);
  local_58 = (undefined8 ****)0x0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_005f55c4(&local_58,0x16,*(undefined4 *)(param_2 + 0xc));
  uVar1 = uStack_50;
  ppppuVar2 = (undefined8 ****)local_58;
  if (-1 < (long)local_48) {
    uVar1 = local_48 >> 0x38;
    ppppuVar2 = &local_58;
  }
  FUN_00547cac(&local_70,ppppuVar2,uVar1);
  if ((long)local_48 < 0) {
    operator_delete(local_58);
  }
  FUN_00547cac(&local_70,", payload_name: ",0x10);
  lVar5 = (long)*(char *)((long)param_2 + 0x17);
  puVar6 = param_2;
  if (lVar5 < 0) {
    lVar5 = param_2[1];
    puVar6 = (undefined8 *)*param_2;
  }
  FUN_00547cac(&local_70,puVar6,lVar5);
  FUN_00547cac(&local_70,", codec_params: {",0x11);
  puVar6 = (undefined8 *)param_2[3];
  while (puVar6 != param_2 + 4) {
    if (puVar6 != (undefined8 *)param_2[3]) {
      FUN_00547cac(&local_70,&DAT_001e1644,2);
    }
    lVar5 = (long)*(char *)((long)puVar6 + 0x37);
    if (lVar5 < 0) {
      puVar4 = (undefined8 *)puVar6[4];
      lVar5 = puVar6[5];
    }
    else {
      puVar4 = puVar6 + 4;
    }
    FUN_00547cac(&local_70,puVar4,lVar5);
    FUN_00547cac(&local_70,&DAT_001c4dc3,2);
    lVar5 = (long)*(char *)((long)puVar6 + 0x4f);
    if (lVar5 < 0) {
      puVar4 = (undefined8 *)puVar6[7];
      lVar5 = puVar6[8];
    }
    else {
      puVar4 = puVar6 + 7;
    }
    FUN_00547cac(&local_70,puVar4,lVar5);
    puVar4 = (undefined8 *)puVar6[1];
    puVar7 = puVar6;
    if ((undefined8 *)puVar6[1] == (undefined8 *)0x0) {
      do {
        puVar6 = (undefined8 *)puVar7[2];
        bVar3 = puVar7 != (undefined8 *)*puVar6;
        puVar7 = puVar6;
      } while (bVar3);
    }
    else {
      do {
        puVar6 = puVar4;
        puVar4 = (undefined8 *)*puVar6;
      } while ((undefined8 *)*puVar6 != (undefined8 *)0x0);
    }
  }
  FUN_00547cac(&local_70,&DAT_001b0cbb,1);
  FUN_00547cac(&local_70,&DAT_001b0cbb,1);
  if (local_60 < 0) {
    FUN_005478d8(param_1,local_70,uStack_68);
    if (local_60 < 0) {
      operator_delete(local_70);
    }
  }
  else {
    param_1[1] = uStack_68;
    *param_1 = local_70;
    param_1[2] = local_60;
  }
  return;
}


// ===== 00845388  FUN_00845388 =====

void FUN_00845388(undefined8 *param_1)

{
  *(undefined4 *)((long)param_1 + 0x74) = 10;
  param_1[0xf] = 0xffffffffffffffff;
  param_1[0x10] = 0;
  param_1[0x18] = 0xffffffffffffffff;
  param_1[0x22] = 0;
  *(undefined8 *)((long)param_1 + 0x115) = 0;
  *(undefined4 *)(param_1 + 0x26) = 0x7fffffff;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[1] = 0;
  *param_1 = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 0x6c) = 0;
  *(undefined8 *)((long)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0xffffffff00000000;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x43) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x52) = 0;
  *(undefined1 *)(param_1 + 0x53) = 0;
  *(undefined1 *)(param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0x55) = 0;
  *(undefined1 *)(param_1 + 0x56) = 0;
  *(undefined1 *)(param_1 + 0x57) = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x59) = 0;
  *(undefined8 *)((long)param_1 + 0x159) = 0;
  *(undefined8 *)((long)param_1 + 0x151) = 0;
  *(undefined8 *)((long)param_1 + 0x13c) = 0;
  *(undefined8 *)((long)param_1 + 0x134) = 0;
  *(undefined8 *)((long)param_1 + 0x14c) = 0;
  *(undefined8 *)((long)param_1 + 0x144) = 0;
  *(undefined8 *)((long)param_1 + 0x1b4) = 0;
  *(undefined8 *)((long)param_1 + 0x1ac) = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  return;
}


// ===== 0084546c  FUN_0084546c =====

void FUN_0084546c(long param_1)

{
  if (*(char *)(param_1 + 0x14f) < '\0') {
    operator_delete(*(void **)(param_1 + 0x138));
  }
  if ((*(char *)(param_1 + 0x28) == '\x01') && (*(char *)(param_1 + 0x27) < '\0')) {
    operator_delete(*(void **)(param_1 + 0x10));
    return;
  }
  return;
}


// ===== 008454d8  FUN_008454d8 =====

void FUN_008454d8(undefined8 *param_1,undefined4 *param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  double dVar4;
  void *local_60;
  undefined8 uStack_58;
  long local_50;
  undefined8 **local_48;
  ulong uStack_40;
  ulong local_38;
  
  local_60 = (void *)0x0;
  uStack_58 = 0;
  local_50 = 0;
  FUN_00547cac(&local_60,"VideoReceiveStreamInterface stats: ",0x23);
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_005f5410(&local_48,0x16,param_3);
  uVar1 = uStack_40;
  pppuVar2 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar1 = local_38 >> 0x38;
    pppuVar2 = &local_48;
  }
  FUN_00547cac(&local_60,pppuVar2,uVar1);
  if ((long)local_38 < 0) {
    operator_delete(local_48);
  }
  FUN_00547cac(&local_60,", {ssrc: ",9);
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_005fa03c(&local_48,0x16,param_2[0x4d]);
  uVar1 = uStack_40;
  pppuVar2 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar1 = local_38 >> 0x38;
    pppuVar2 = &local_48;
  }
  FUN_00547cac(&local_60,pppuVar2,uVar1);
  if ((long)local_38 < 0) {
    operator_delete(local_48);
  }
  FUN_00547cac(&local_60,&DAT_001e1644,2);
  FUN_00547cac(&local_60,"total_bps: ",0xb);
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_005f55c4(&local_48,0x16,param_2[0x40]);
  uVar1 = uStack_40;
  pppuVar2 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar1 = local_38 >> 0x38;
    pppuVar2 = &local_48;
  }
  FUN_00547cac(&local_60,pppuVar2,uVar1);
  if ((long)local_38 < 0) {
    operator_delete(local_48);
  }
  FUN_00547cac(&local_60,&DAT_001e1644,2);
  FUN_00547cac(&local_60,"frameWidth: ",0xc);
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_005f55c4(&local_48,0x16,param_2[0x41]);
  uVar1 = uStack_40;
  pppuVar2 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar1 = local_38 >> 0x38;
    pppuVar2 = &local_48;
  }
  FUN_00547cac(&local_60,pppuVar2,uVar1);
  if ((long)local_38 < 0) {
    operator_delete(local_48);
  }
  FUN_00547cac(&local_60,&DAT_001e1644,2);
  FUN_00547cac(&local_60,"frameHeight: ",0xd);
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_005f55c4(&local_48,0x16,param_2[0x42]);
  uVar1 = uStack_40;
  pppuVar2 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar1 = local_38 >> 0x38;
    pppuVar2 = &local_48;
  }
  FUN_00547cac(&local_60,pppuVar2,uVar1);
  if ((long)local_38 < 0) {
    operator_delete(local_48);
  }
  FUN_00547cac(&local_60,&DAT_001e1644,2);
  FUN_00547cac(&local_60,"key: ",5);
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_005f55c4(&local_48,0x16,param_2[0xd]);
  uVar1 = uStack_40;
  pppuVar2 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar1 = local_38 >> 0x38;
    pppuVar2 = &local_48;
  }
  FUN_00547cac(&local_60,pppuVar2,uVar1);
  if ((long)local_38 < 0) {
    operator_delete(local_48);
  }
  FUN_00547cac(&local_60,&DAT_001e1644,2);
  FUN_00547cac(&local_60,"delta: ",7);
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_005f55c4(&local_48,0x16,param_2[0xe]);
  uVar1 = uStack_40;
  pppuVar2 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar1 = local_38 >> 0x38;
    pppuVar2 = &local_48;
  }
  FUN_00547cac(&local_60,pppuVar2,uVar1);
  if ((long)local_38 < 0) {
    operator_delete(local_48);
  }
  FUN_00547cac(&local_60,&DAT_001e1644,2);
  FUN_00547cac(&local_60,"framesAssembledFromMultiplePackets: ",0x24);
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_005fa03c(&local_48,0x16,param_2[0x2a]);
  uVar1 = uStack_40;
  pppuVar2 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar1 = local_38 >> 0x38;
    pppuVar2 = &local_48;
  }
  FUN_00547cac(&local_60,pppuVar2,uVar1);
  if ((long)local_38 < 0) {
    operator_delete(local_48);
  }
  FUN_00547cac(&local_60,&DAT_001e1644,2);
  FUN_00547cac(&local_60,"framesDecoded: ",0xf);
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_005fa03c(&local_48,0x16,param_2[0x22]);
  uVar1 = uStack_40;
  pppuVar2 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar1 = local_38 >> 0x38;
    pppuVar2 = &local_48;
  }
  FUN_00547cac(&local_60,pppuVar2,uVar1);
  if ((long)local_38 < 0) {
    operator_delete(local_48);
  }
  FUN_00547cac(&local_60,&DAT_001e1644,2);
  FUN_00547cac(&local_60,"framesDropped: ",0xf);
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_005fa03c(&local_48,0x16,param_2[0x20]);
  uVar1 = uStack_40;
  pppuVar2 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar1 = local_38 >> 0x38;
    pppuVar2 = &local_48;
  }
  FUN_00547cac(&local_60,pppuVar2,uVar1);
  if ((long)local_38 < 0) {
    operator_delete(local_48);
  }
  FUN_00547cac(&local_60,&DAT_001e1644,2);
  FUN_00547cac(&local_60,"network_fps: ",0xd);
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_005f55c4(&local_48,0x16,*param_2);
  uVar1 = uStack_40;
  pppuVar2 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar1 = local_38 >> 0x38;
    pppuVar2 = &local_48;
  }
  FUN_00547cac(&local_60,pppuVar2,uVar1);
  if ((long)local_38 < 0) {
    operator_delete(local_48);
  }
  FUN_00547cac(&local_60,&DAT_001e1644,2);
  FUN_00547cac(&local_60,"decode_fps: ",0xc);
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_005f55c4(&local_48,0x16,param_2[1]);
  uVar1 = uStack_40;
  pppuVar2 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar1 = local_38 >> 0x38;
    pppuVar2 = &local_48;
  }
  FUN_00547cac(&local_60,pppuVar2,uVar1);
  if ((long)local_38 < 0) {
    operator_delete(local_48);
  }
  FUN_00547cac(&local_60,&DAT_001e1644,2);
  FUN_00547cac(&local_60,"render_fps: ",0xc);
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_005f55c4(&local_48,0x16,param_2[2]);
  uVar1 = uStack_40;
  pppuVar2 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar1 = local_38 >> 0x38;
    pppuVar2 = &local_48;
  }
  FUN_00547cac(&local_60,pppuVar2,uVar1);
  if ((long)local_38 < 0) {
    operator_delete(local_48);
  }
  FUN_00547cac(&local_60,&DAT_001e1644,2);
  FUN_00547cac(&local_60,"decode_ms: ",0xb);
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_005f55c4(&local_48,0x16,param_2[0xf]);
  uVar1 = uStack_40;
  pppuVar2 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar1 = local_38 >> 0x38;
    pppuVar2 = &local_48;
  }
  FUN_00547cac(&local_60,pppuVar2,uVar1);
  if ((long)local_38 < 0) {
    operator_delete(local_48);
  }
  FUN_00547cac(&local_60,&DAT_001e1644,2);
  FUN_00547cac(&local_60,"max_decode_ms: ",0xf);
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_005f55c4(&local_48,0x16,param_2[0x10]);
  uVar1 = uStack_40;
  pppuVar2 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar1 = local_38 >> 0x38;
    pppuVar2 = &local_48;
  }
  FUN_00547cac(&local_60,pppuVar2,uVar1);
  if ((long)local_38 < 0) {
    operator_delete(local_48);
  }
  FUN_00547cac(&local_60,&DAT_001e1644,2);
  FUN_00547cac(&local_60,"first_frame_received_to_decoded_ms: ",0x24);
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_005f5410(&local_48,0x16,*(undefined8 *)(param_2 + 0x30));
  uVar1 = uStack_40;
  pppuVar2 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar1 = local_38 >> 0x38;
    pppuVar2 = &local_48;
  }
  FUN_00547cac(&local_60,pppuVar2,uVar1);
  if ((long)local_38 < 0) {
    operator_delete(local_48);
  }
  FUN_00547cac(&local_60,&DAT_001e1644,2);
  FUN_00547cac(&local_60,"current_delay_ms: ",0x12);
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_005f55c4(&local_48,0x16,param_2[0x11]);
  uVar1 = uStack_40;
  pppuVar2 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar1 = local_38 >> 0x38;
    pppuVar2 = &local_48;
  }
  FUN_00547cac(&local_60,pppuVar2,uVar1);
  if ((long)local_38 < 0) {
    operator_delete(local_48);
  }
  FUN_00547cac(&local_60,&DAT_001e1644,2);
  FUN_00547cac(&local_60,"target_delay_ms: ",0x11);
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_005f55c4(&local_48,0x16,param_2[0x12]);
  uVar1 = uStack_40;
  pppuVar2 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar1 = local_38 >> 0x38;
    pppuVar2 = &local_48;
  }
  FUN_00547cac(&local_60,pppuVar2,uVar1);
  if ((long)local_38 < 0) {
    operator_delete(local_48);
  }
  FUN_00547cac(&local_60,&DAT_001e1644,2);
  FUN_00547cac(&local_60,"jitter_delay_ms: ",0x11);
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_005f55c4(&local_48,0x16,param_2[0x13]);
  uVar1 = uStack_40;
  pppuVar2 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar1 = local_38 >> 0x38;
    pppuVar2 = &local_48;
  }
  FUN_00547cac(&local_60,pppuVar2,uVar1);
  if ((long)local_38 < 0) {
    operator_delete(local_48);
  }
  FUN_00547cac(&local_60,&DAT_001e1644,2);
  FUN_00547cac(&local_60,"totalAssemblyTime: ",0x13);
  lVar3 = *(long *)(param_2 + 0x28);
  if (lVar3 == -0x8000000000000000) {
    dVar4 = -INFINITY;
  }
  else if (lVar3 == 0x7fffffffffffffff) {
    dVar4 = INFINITY;
  }
  else {
    dVar4 = (double)lVar3 * DAT_001f5658;
  }
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_00624ab4(dVar4,&local_48,0x10);
  uVar1 = uStack_40;
  pppuVar2 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar1 = local_38 >> 0x38;
    pppuVar2 = &local_48;
  }
  FUN_00547cac(&local_60,pppuVar2,uVar1);
  if ((long)local_38 < 0) {
    operator_delete(local_48);
  }
  FUN_00547cac(&local_60,&DAT_001e1644,2);
  FUN_00547cac(&local_60,"jitterBufferDelay: ",0x13);
  lVar3 = *(long *)(param_2 + 0x14);
  if (lVar3 == -0x8000000000000000) {
    dVar4 = -INFINITY;
  }
  else if (lVar3 == 0x7fffffffffffffff) {
    dVar4 = INFINITY;
  }
  else {
    dVar4 = (double)lVar3 * DAT_001f5658;
  }
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_00624ab4(dVar4,&local_48,0x10);
  uVar1 = uStack_40;
  pppuVar2 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar1 = local_38 >> 0x38;
    pppuVar2 = &local_48;
  }
  FUN_00547cac(&local_60,pppuVar2,uVar1);
  if ((long)local_38 < 0) {
    operator_delete(local_48);
  }
  FUN_00547cac(&local_60,&DAT_001e1644,2);
  FUN_00547cac(&local_60,"jitterBufferTargetDelay: ",0x19);
  lVar3 = *(long *)(param_2 + 0x16);
  if (lVar3 == -0x8000000000000000) {
    dVar4 = -INFINITY;
  }
  else if (lVar3 == 0x7fffffffffffffff) {
    dVar4 = INFINITY;
  }
  else {
    dVar4 = (double)lVar3 * DAT_001f5658;
  }
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_00624ab4(dVar4,&local_48,0x10);
  uVar1 = uStack_40;
  pppuVar2 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar1 = local_38 >> 0x38;
    pppuVar2 = &local_48;
  }
  FUN_00547cac(&local_60,pppuVar2,uVar1);
  if ((long)local_38 < 0) {
    operator_delete(local_48);
  }
  FUN_00547cac(&local_60,&DAT_001e1644,2);
  FUN_00547cac(&local_60,"jitterBufferEmittedCount: ",0x1a);
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_006247b4(&local_48,0x16,*(undefined8 *)(param_2 + 0x18));
  uVar1 = uStack_40;
  pppuVar2 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar1 = local_38 >> 0x38;
    pppuVar2 = &local_48;
  }
  FUN_00547cac(&local_60,pppuVar2,uVar1);
  if ((long)local_38 < 0) {
    operator_delete(local_48);
  }
  FUN_00547cac(&local_60,&DAT_001e1644,2);
  FUN_00547cac(&local_60,"jitterBufferMinimumDelay: ",0x1a);
  lVar3 = *(long *)(param_2 + 0x1a);
  if (lVar3 == -0x8000000000000000) {
    dVar4 = -INFINITY;
  }
  else if (lVar3 == 0x7fffffffffffffff) {
    dVar4 = INFINITY;
  }
  else {
    dVar4 = (double)lVar3 * DAT_001f5658;
  }
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_00624ab4(dVar4,&local_48,0x10);
  uVar1 = uStack_40;
  pppuVar2 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar1 = local_38 >> 0x38;
    pppuVar2 = &local_48;
  }
  FUN_00547cac(&local_60,pppuVar2,uVar1);
  if ((long)local_38 < 0) {
    operator_delete(local_48);
  }
  FUN_00547cac(&local_60,&DAT_001e1644,2);
  FUN_00547cac(&local_60,"totalDecodeTime: ",0x11);
  lVar3 = *(long *)(param_2 + 0x24);
  if (lVar3 == -0x8000000000000000) {
    dVar4 = -INFINITY;
  }
  else if (lVar3 == 0x7fffffffffffffff) {
    dVar4 = INFINITY;
  }
  else {
    dVar4 = (double)lVar3 * DAT_001f5658;
  }
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_00624ab4(dVar4,&local_48,0x10);
  uVar1 = uStack_40;
  pppuVar2 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar1 = local_38 >> 0x38;
    pppuVar2 = &local_48;
  }
  FUN_00547cac(&local_60,pppuVar2,uVar1);
  if ((long)local_38 < 0) {
    operator_delete(local_48);
  }
  FUN_00547cac(&local_60,&DAT_001e1644,2);
  FUN_00547cac(&local_60,"totalProcessingDelay: ",0x16);
  lVar3 = *(long *)(param_2 + 0x26);
  if (lVar3 == -0x8000000000000000) {
    dVar4 = -INFINITY;
  }
  else if (lVar3 == 0x7fffffffffffffff) {
    dVar4 = INFINITY;
  }
  else {
    dVar4 = (double)lVar3 * DAT_001f5658;
  }
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_00624ab4(dVar4,&local_48,0x10);
  uVar1 = uStack_40;
  pppuVar2 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar1 = local_38 >> 0x38;
    pppuVar2 = &local_48;
  }
  FUN_00547cac(&local_60,pppuVar2,uVar1);
  if ((long)local_38 < 0) {
    operator_delete(local_48);
  }
  FUN_00547cac(&local_60,&DAT_001e1644,2);
  FUN_00547cac(&local_60,"min_playout_delay_ms: ",0x16);
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_005f55c4(&local_48,0x16,param_2[0x1c]);
  uVar1 = uStack_40;
  pppuVar2 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar1 = local_38 >> 0x38;
    pppuVar2 = &local_48;
  }
  FUN_00547cac(&local_60,pppuVar2,uVar1);
  if ((long)local_38 < 0) {
    operator_delete(local_48);
  }
  FUN_00547cac(&local_60,&DAT_001e1644,2);
  FUN_00547cac(&local_60,"sync_offset_ms: ",0x10);
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_005f55c4(&local_48,0x16,param_2[0x4c]);
  uVar1 = uStack_40;
  pppuVar2 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar1 = local_38 >> 0x38;
    pppuVar2 = &local_48;
  }
  FUN_00547cac(&local_60,pppuVar2,uVar1);
  if ((long)local_38 < 0) {
    operator_delete(local_48);
  }
  FUN_00547cac(&local_60,&DAT_001e1644,2);
  FUN_00547cac(&local_60,"cum_loss: ",10);
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_005f55c4(&local_48,0x16,param_2[0x54]);
  uVar1 = uStack_40;
  pppuVar2 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar1 = local_38 >> 0x38;
    pppuVar2 = &local_48;
  }
  FUN_00547cac(&local_60,pppuVar2,uVar1);
  if ((long)local_38 < 0) {
    operator_delete(local_48);
  }
  FUN_00547cac(&local_60,&DAT_001e1644,2);
  FUN_00547cac(&local_60,"nackCount: ",0xb);
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_005fa03c(&local_48,0x16,param_2[0x6a]);
  uVar1 = uStack_40;
  pppuVar2 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar1 = local_38 >> 0x38;
    pppuVar2 = &local_48;
  }
  FUN_00547cac(&local_60,pppuVar2,uVar1);
  if ((long)local_38 < 0) {
    operator_delete(local_48);
  }
  FUN_00547cac(&local_60,&DAT_001e1644,2);
  FUN_00547cac(&local_60,"firCount: ",10);
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_005fa03c(&local_48,0x16,param_2[0x6b]);
  uVar1 = uStack_40;
  pppuVar2 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar1 = local_38 >> 0x38;
    pppuVar2 = &local_48;
  }
  FUN_00547cac(&local_60,pppuVar2,uVar1);
  if ((long)local_38 < 0) {
    operator_delete(local_48);
  }
  FUN_00547cac(&local_60,&DAT_001e1644,2);
  FUN_00547cac(&local_60,"pliCount: ",10);
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_005fa03c(&local_48,0x16,param_2[0x6c]);
  uVar1 = uStack_40;
  pppuVar2 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar1 = local_38 >> 0x38;
    pppuVar2 = &local_48;
  }
  FUN_00547cac(&local_60,pppuVar2,uVar1);
  if ((long)local_38 < 0) {
    operator_delete(local_48);
  }
  FUN_00547cac(&local_60,&DAT_001b0cbb,1);
  if (local_50 < 0) {
    FUN_005478d8(param_1,local_60,uStack_58);
    if (local_50 < 0) {
      operator_delete(local_60);
    }
  }
  else {
    param_1[1] = uStack_58;
    *param_1 = local_60;
    param_1[2] = local_50;
  }
  return;
}


// ===== 008465fc  FUN_008465fc =====

void FUN_008465fc(undefined8 *param_1,long *param_2)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 *puVar5;
  void *__dest;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar6 = *param_2;
  lVar9 = param_2[1];
  uVar3 = lVar9 - lVar6;
  if (uVar3 != 0) {
    if (0x276276276276276 < (ulong)(((long)uVar3 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
      FUN_00847600();
      goto LAB_00846880;
    }
    pvVar4 = operator_new(uVar3);
    *param_1 = pvVar4;
    param_1[1] = pvVar4;
    param_1[2] = (long)pvVar4 + uVar3;
    do {
      if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      FUN_007b69e0(pvVar4,lVar6);
      puVar1 = (undefined4 *)(lVar6 + 0x60);
      lVar6 = lVar6 + 0x68;
      *(undefined4 *)((long)pvVar4 + 0x60) = *puVar1;
      pvVar4 = (void *)((long)pvVar4 + 0x68);
    } while (lVar6 != lVar9);
    param_1[1] = pvVar4;
  }
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  lVar10 = param_2[6];
  lVar9 = param_2[5];
  lVar12 = param_2[8];
  lVar11 = param_2[7];
  lVar6 = param_2[9];
  plVar7 = param_1 + 0xb;
  *plVar7 = 0;
  puVar5 = param_1 + 10;
  *puVar5 = plVar7;
  param_1[9] = lVar6;
  param_1[8] = lVar12;
  param_1[7] = lVar11;
  param_1[6] = lVar10;
  param_1[5] = lVar9;
  param_1[0xc] = 0;
  if (param_2[0xc] != 0) {
    lVar6 = FUN_005fa240(puVar5,param_2[0xb],puVar5);
    *plVar7 = lVar6;
    *(long **)(lVar6 + 0x10) = plVar7;
    plVar7 = (long *)*plVar7;
    do {
      plVar8 = plVar7;
      plVar7 = (long *)*plVar8;
    } while (plVar7 != (long *)0x0);
    param_1[10] = plVar8;
    param_1[0xc] = param_2[0xc];
  }
  plVar7 = param_1 + 0xe;
  *plVar7 = 0;
  puVar5 = param_1 + 0xd;
  *puVar5 = plVar7;
  param_1[0xf] = 0;
  if (param_2[0xf] != 0) {
    lVar6 = FUN_00663714(puVar5,param_2[0xe],puVar5);
    *plVar7 = lVar6;
    *(long **)(lVar6 + 0x10) = plVar7;
    plVar7 = (long *)*plVar7;
    do {
      plVar8 = plVar7;
      plVar7 = (long *)*plVar8;
    } while (plVar7 != (long *)0x0);
    param_1[0xd] = plVar8;
    param_1[0xf] = param_2[0xf];
  }
  lVar9 = param_2[0x11];
  lVar6 = param_2[0x10];
  *(undefined8 *)((long)param_1 + 0x8d) = *(undefined8 *)((long)param_2 + 0x8d);
  param_1[0x11] = lVar9;
  param_1[0x10] = lVar6;
  if (*(char *)((long)param_2 + 0xaf) < '\0') {
    FUN_005478d8(param_1 + 0x13,param_2[0x13],param_2[0x14]);
  }
  else {
    lVar9 = param_2[0x14];
    lVar6 = param_2[0x13];
    param_1[0x15] = param_2[0x15];
    param_1[0x14] = lVar9;
    param_1[0x13] = lVar6;
  }
  puVar5 = (undefined8 *)param_2[0x16];
  param_1[0x16] = puVar5;
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)();
  }
  uVar2 = *(undefined1 *)((long)param_2 + 0xbc);
  lVar6 = param_2[0x17];
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x18] = 0;
  *(undefined1 *)((long)param_1 + 0xbc) = uVar2;
  *(int *)(param_1 + 0x17) = (int)lVar6;
  pvVar4 = (void *)param_2[0x18];
  uVar3 = param_2[0x19] - (long)pvVar4;
  if (uVar3 != 0) {
    if ((long)uVar3 < 0) {
LAB_00846880:
                    /* WARNING: Subroutine does not return */
      FUN_005d4754();
    }
    __dest = operator_new(uVar3);
    param_1[0x18] = __dest;
    param_1[0x19] = __dest;
    param_1[0x1a] = (long)__dest + uVar3;
    memcpy(__dest,pvVar4,uVar3);
    param_1[0x19] = (long)__dest + uVar3;
  }
  puVar5 = (undefined8 *)param_2[0x1b];
  param_1[0x1b] = puVar5;
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)();
  }
  if (-1 < *(char *)((long)param_2 + 0xf7)) {
    lVar9 = param_2[0x1d];
    lVar6 = param_2[0x1c];
    param_1[0x1e] = param_2[0x1e];
    param_1[0x1d] = lVar9;
    param_1[0x1c] = lVar6;
    return;
  }
  FUN_005478d8(param_1 + 0x1c,param_2[0x1c],param_2[0x1d]);
  return;
}


// ===== 00846884  FUN_00846884 =====

void FUN_00846884(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  uVar9 = param_2[6];
  uVar8 = param_2[5];
  uVar11 = param_2[8];
  uVar10 = param_2[7];
  uVar5 = param_2[9];
  plVar6 = param_1 + 0xb;
  *plVar6 = 0;
  puVar3 = param_1 + 10;
  *puVar3 = plVar6;
  param_1[9] = uVar5;
  param_1[8] = uVar11;
  param_1[7] = uVar10;
  param_1[6] = uVar9;
  param_1[5] = uVar8;
  param_1[0xc] = 0;
  if (param_2[0xc] != 0) {
    lVar4 = FUN_005fa240(puVar3,param_2[0xb],puVar3);
    *plVar6 = lVar4;
    *(long **)(lVar4 + 0x10) = plVar6;
    plVar6 = (long *)*plVar6;
    do {
      plVar7 = plVar6;
      plVar6 = (long *)*plVar7;
    } while (plVar6 != (long *)0x0);
    param_1[10] = plVar7;
    param_1[0xc] = param_2[0xc];
  }
  plVar6 = param_1 + 0xe;
  *plVar6 = 0;
  puVar3 = param_1 + 0xd;
  *puVar3 = plVar6;
  param_1[0xf] = 0;
  if (param_2[0xf] != 0) {
    lVar4 = FUN_00663714(puVar3,param_2[0xe],puVar3);
    *plVar6 = lVar4;
    *(long **)(lVar4 + 0x10) = plVar6;
    plVar6 = (long *)*plVar6;
    do {
      plVar7 = plVar6;
      plVar6 = (long *)*plVar7;
    } while (plVar6 != (long *)0x0);
    param_1[0xd] = plVar7;
    param_1[0xf] = param_2[0xf];
  }
  uVar8 = param_2[0x11];
  uVar5 = param_2[0x10];
  *(undefined8 *)((long)param_1 + 0x8d) = *(undefined8 *)((long)param_2 + 0x8d);
  param_1[0x11] = uVar8;
  param_1[0x10] = uVar5;
  uVar8 = param_2[0x13];
  uVar5 = param_2[0x15];
  param_1[0x14] = param_2[0x14];
  param_1[0x13] = uVar8;
  param_1[0x15] = uVar5;
  uVar5 = param_2[0x16];
  param_2[0x14] = 0;
  param_2[0x13] = 0;
  param_2[0x16] = 0;
  param_2[0x15] = 0;
  param_1[0x16] = uVar5;
  uVar1 = *(undefined4 *)(param_2 + 0x17);
  uVar2 = *(undefined1 *)((long)param_2 + 0xbc);
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  *(undefined1 *)((long)param_1 + 0xbc) = uVar2;
  *(undefined4 *)(param_1 + 0x17) = uVar1;
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  uVar5 = param_2[0x1b];
  param_2[0x19] = 0;
  param_2[0x18] = 0;
  param_2[0x1b] = 0;
  param_2[0x1a] = 0;
  param_1[0x1b] = uVar5;
  uVar8 = param_2[0x1d];
  uVar5 = param_2[0x1c];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1d] = uVar8;
  param_1[0x1c] = uVar5;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1c] = 0;
  return;
}


// ===== 00846a20  FUN_00846a20 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00846a20(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = _UNK_001f3be8;
  uVar1 = _DAT_001f3be0;
  param_1[2] = 0;
  param_1[3] = param_3;
  *(undefined2 *)(param_1 + 6) = 0x100;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  param_1[0xb] = 0;
  param_1[9] = 0;
  param_1[10] = param_1 + 0xb;
  param_1[0xe] = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0xffffffffffffffff;
  param_1[0xc] = 0;
  param_1[0xd] = param_1 + 0xe;
  *(undefined4 *)(param_1 + 0x12) = 10;
  *(undefined1 *)((long)param_1 + 0x32) = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = param_2;
  param_1[0x11] = 0;
  *(undefined1 *)((long)param_1 + 0x94) = 1;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  FUN_007ebea0(param_1 + 0x17);
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  return;
}


// ===== 00846ac4  FUN_00846ac4 =====

void FUN_00846ac4(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *local_18;
  
  if (*(char *)((long)param_1 + 0xf7) < '\0') {
    operator_delete((void *)param_1[0x1c]);
  }
  if ((long *)param_1[0x1b] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1b] + 8))();
  }
  pvVar1 = (void *)param_1[0x18];
  if (pvVar1 != (void *)0x0) {
    pvVar3 = (void *)param_1[0x19];
    uVar5 = (ulong)((long)pvVar3 + ((long)pvVar3 << 0x3f) + -2) >> 1;
    uVar4 = (ulong)(((long)pvVar1 - (long)pvVar3 << 0x3f) - ((long)pvVar1 - (long)pvVar3)) >> 1;
    if (uVar5 <= uVar4) {
      uVar4 = uVar5;
    }
    if ((1 < uVar4) && ((((int)pvVar1 - (uint)pvVar3 | (uint)pvVar3) & 1) == 0)) {
      uVar4 = uVar4 & 0x7ffffffffffffffe;
      pvVar3 = (void *)((long)pvVar3 + uVar4 * -2);
      do {
        uVar4 = uVar4 - 2;
      } while (uVar4 != 0);
    }
    do {
      if (pvVar3 == pvVar1) {
        param_1[0x19] = pvVar1;
        operator_delete(pvVar1);
        goto LAB_00846b90;
      }
      pvVar3 = (void *)((long)pvVar3 + -2);
    } while (pvVar3 != (void *)0x0);
LAB_00846b6c:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
LAB_00846b90:
  if ((long *)param_1[0x16] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x16] + 8))();
  }
  if (*(char *)((long)param_1 + 0xaf) < '\0') {
    operator_delete((void *)param_1[0x13]);
  }
  local_18 = param_1 + 0xd;
  FUN_005fa1cc(&local_18,param_1[0xe]);
  local_18 = param_1 + 10;
  FUN_005fa2f8(&local_18,param_1[0xb]);
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    pvVar3 = (void *)param_1[1];
    pvVar2 = pvVar1;
    if (pvVar1 != pvVar3) {
      do {
        pvVar3 = (void *)((long)pvVar3 + -0x68);
        if (pvVar3 == (void *)0x0) goto LAB_00846b6c;
        FUN_007b6d78(pvVar3);
      } while (pvVar3 != pvVar1);
      pvVar2 = (void *)*param_1;
    }
    param_1[1] = pvVar1;
    operator_delete(pvVar2);
  }
  return;
}


// ===== 00846c3c  FUN_00846c3c =====

void FUN_00846c3c(undefined8 *param_1,long *param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 ****ppppuVar3;
  long *plVar4;
  long lVar5;
  char cVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  void *local_80;
  undefined8 uStack_78;
  long local_70;
  undefined8 ***local_68;
  ulong uStack_60;
  undefined8 local_58;
  
  local_80 = (void *)0x0;
  uStack_78 = 0;
  local_70 = 0;
  FUN_00547cac(&local_80,"{decoders: [",0xc);
  lVar5 = *param_2;
  if (param_2[1] != lVar5) {
    lVar8 = 0;
    uVar9 = 0;
    do {
      FUN_0084516c(&local_68,lVar5 + lVar8);
      uVar7 = uStack_60;
      ppppuVar3 = (undefined8 ****)local_68;
      if (-1 < (long)local_58) {
        uVar7 = local_58 >> 0x38;
        ppppuVar3 = &local_68;
      }
      FUN_00547cac(&local_80,ppppuVar3,uVar7);
      if ((long)local_58 < 0) {
        operator_delete(local_68);
      }
      lVar5 = *param_2;
      uVar7 = (param_2[1] - lVar5 >> 3) * 0x4ec4ec4ec4ec4ec5;
      if (uVar9 != uVar7 - 1) {
        FUN_00547cac(&local_80,&DAT_001e1644,2);
        lVar5 = *param_2;
        uVar7 = (param_2[1] - lVar5 >> 3) * 0x4ec4ec4ec4ec4ec5;
      }
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 0x68;
    } while (uVar9 < uVar7);
  }
  FUN_00547cac(&local_80,&DAT_0019fa9e,1);
  FUN_00547cac(&local_80,", rtp: ",7);
  FUN_00846f24(&local_68,param_2 + 4);
  ppppuVar3 = (undefined8 ****)local_68;
  if (-1 < (long)local_58) {
    uStack_60 = (ulong)local_58._7_1_;
    ppppuVar3 = &local_68;
  }
  FUN_00547cac(&local_80,ppppuVar3,uStack_60);
  if ((char)local_58._7_1_ < '\0') {
    operator_delete(local_68);
  }
  FUN_00547cac(&local_80,", renderer: ",0xc);
  pcVar1 = "nullptr";
  if (param_2[0x11] != 0) {
    pcVar1 = "(renderer)";
  }
  uVar2 = 7;
  if (param_2[0x11] != 0) {
    uVar2 = 10;
  }
  FUN_00547cac(&local_80,pcVar1,uVar2);
  FUN_00547cac(&local_80,", render_delay_ms: ",0x13);
  local_68 = (undefined8 ****)0x0;
  uStack_60 = 0;
  local_58 = 0;
  FUN_005f55c4(&local_68,0x16,(int)param_2[0x12]);
  uVar9 = uStack_60;
  ppppuVar3 = (undefined8 ****)local_68;
  if (-1 < (long)local_58) {
    uVar9 = local_58 >> 0x38;
    ppppuVar3 = &local_68;
  }
  FUN_00547cac(&local_80,ppppuVar3,uVar9);
  if ((long)local_58 < 0) {
    operator_delete(local_68);
    cVar6 = *(char *)((long)param_2 + 0xaf);
    if (cVar6 < '\0') goto LAB_00846e78;
LAB_00846e58:
    if (cVar6 == '\0') goto LAB_00846eb0;
  }
  else {
    cVar6 = *(char *)((long)param_2 + 0xaf);
    if (-1 < cVar6) goto LAB_00846e58;
LAB_00846e78:
    if (param_2[0x14] == 0) goto LAB_00846eb0;
  }
  FUN_00547cac(&local_80,", sync_group: ",0xe);
  lVar5 = (long)*(char *)((long)param_2 + 0xaf);
  if (lVar5 < 0) {
    plVar4 = (long *)param_2[0x13];
    lVar5 = param_2[0x14];
  }
  else {
    plVar4 = param_2 + 0x13;
  }
  FUN_00547cac(&local_80,plVar4,lVar5);
LAB_00846eb0:
  FUN_00547cac(&local_80,&DAT_001b0cbb,1);
  if (local_70 < 0) {
    FUN_005478d8(param_1,local_80,uStack_78);
    if (local_70 < 0) {
      operator_delete(local_80);
    }
  }
  else {
    param_1[1] = uStack_78;
    *param_1 = local_80;
    param_1[2] = local_70;
  }
  return;
}


// ===== 00846f24  FUN_00846f24 =====

void FUN_00846f24(undefined8 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  char *pcVar3;
  ulong uVar4;
  undefined8 ***pppuVar5;
  undefined8 *puVar6;
  bool bVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  void *local_80;
  undefined8 uStack_78;
  long local_70;
  undefined8 **local_68;
  ulong uStack_60;
  ulong local_58;
  
  local_80 = (void *)0x0;
  uStack_78 = 0;
  local_70 = 0;
  FUN_00547cac(&local_80,"{remote_ssrc: ",0xe);
  local_68 = (undefined8 ***)0x0;
  uStack_60 = 0;
  local_58 = 0;
  FUN_005fa03c(&local_68,0x16,*param_2);
  uVar4 = uStack_60;
  pppuVar5 = (undefined8 ***)local_68;
  if (-1 < (long)local_58) {
    uVar4 = local_58 >> 0x38;
    pppuVar5 = &local_68;
  }
  FUN_00547cac(&local_80,pppuVar5,uVar4);
  if ((long)local_58 < 0) {
    operator_delete(local_68);
  }
  FUN_00547cac(&local_80,", local_ssrc: ",0xe);
  local_68 = (undefined8 ***)0x0;
  uStack_60 = 0;
  local_58 = 0;
  FUN_005fa03c(&local_68,0x16,param_2[1]);
  uVar4 = uStack_60;
  pppuVar5 = (undefined8 ***)local_68;
  if (-1 < (long)local_58) {
    uVar4 = local_58 >> 0x38;
    pppuVar5 = &local_68;
  }
  FUN_00547cac(&local_80,pppuVar5,uVar4);
  if ((long)local_58 < 0) {
    operator_delete(local_68);
  }
  FUN_00547cac(&local_80,", rtcp_mode: ",0xd);
  pcVar3 = "RtcpMode::kCompound";
  if (param_2[3] != 1) {
    pcVar3 = "RtcpMode::kReducedSize";
  }
  uVar1 = 0x13;
  if (param_2[3] != 1) {
    uVar1 = 0x16;
  }
  FUN_00547cac(&local_80,pcVar3,uVar1);
  FUN_00547cac(&local_80,", rtcp_xr: ",0xb);
  FUN_00547cac(&local_80,"{receiver_reference_time_report: ",0x21);
  puVar2 = &DAT_001eb19b;
  if (*(char *)(param_2 + 4) == '\0') {
    puVar2 = &DAT_001b4a9e;
  }
  uVar1 = 2;
  if (*(char *)(param_2 + 4) == '\0') {
    uVar1 = 3;
  }
  FUN_00547cac(&local_80,puVar2,uVar1);
  FUN_00547cac(&local_80,&DAT_001b0cbb,1);
  FUN_00547cac(&local_80,", lntf: {enabled: ",0x12);
  bVar7 = *(char *)((long)param_2 + 0x12) == '\0';
  pcVar3 = "true";
  if (bVar7) {
    pcVar3 = "false";
  }
  uVar1 = 4;
  if (bVar7) {
    uVar1 = 5;
  }
  FUN_00547cac(&local_80,pcVar3,uVar1);
  FUN_00547cac(&local_80,&DAT_001b0cbb,1);
  FUN_00547cac(&local_80,", nack: {rtp_history_ms: ",0x19);
  local_68 = (undefined8 ***)0x0;
  uStack_60 = 0;
  local_58 = 0;
  FUN_005f55c4(&local_68,0x16,param_2[2]);
  uVar4 = uStack_60;
  pppuVar5 = (undefined8 ***)local_68;
  if (-1 < (long)local_58) {
    uVar4 = local_58 >> 0x38;
    pppuVar5 = &local_68;
  }
  FUN_00547cac(&local_80,pppuVar5,uVar4);
  if ((long)local_58 < 0) {
    operator_delete(local_68);
  }
  FUN_00547cac(&local_80,&DAT_001b0cbb,1);
  FUN_00547cac(&local_80,", ulpfec_payload_type: ",0x17);
  local_68 = (undefined8 ***)0x0;
  uStack_60 = 0;
  local_58 = 0;
  FUN_005f55c4(&local_68,0x16,param_2[5]);
  uVar4 = uStack_60;
  pppuVar5 = (undefined8 ***)local_68;
  if (-1 < (long)local_58) {
    uVar4 = local_58 >> 0x38;
    pppuVar5 = &local_68;
  }
  FUN_00547cac(&local_80,pppuVar5,uVar4);
  if ((long)local_58 < 0) {
    operator_delete(local_68);
  }
  FUN_00547cac(&local_80,", red_type: ",0xc);
  local_68 = (undefined8 ***)0x0;
  uStack_60 = 0;
  local_58 = 0;
  FUN_005f55c4(&local_68,0x16,param_2[6]);
  uVar4 = uStack_60;
  pppuVar5 = (undefined8 ***)local_68;
  if (-1 < (long)local_58) {
    uVar4 = local_58 >> 0x38;
    pppuVar5 = &local_68;
  }
  FUN_00547cac(&local_80,pppuVar5,uVar4);
  if ((long)local_58 < 0) {
    operator_delete(local_68);
  }
  FUN_00547cac(&local_80,", rtx_ssrc: ",0xc);
  local_68 = (undefined8 ***)0x0;
  uStack_60 = 0;
  local_58 = 0;
  FUN_005fa03c(&local_68,0x16,param_2[7]);
  uVar4 = uStack_60;
  pppuVar5 = (undefined8 ***)local_68;
  if (-1 < (long)local_58) {
    uVar4 = local_58 >> 0x38;
    pppuVar5 = &local_68;
  }
  FUN_00547cac(&local_80,pppuVar5,uVar4);
  if ((long)local_58 < 0) {
    operator_delete(local_68);
  }
  FUN_00547cac(&local_80,", rtx_payload_types: {",0x16);
  puVar9 = *(undefined8 **)(param_2 + 0xc);
  if (puVar9 != (undefined8 *)(param_2 + 0xe)) {
    do {
      local_68 = (undefined8 ***)0x0;
      uStack_60 = 0;
      local_58 = 0;
      FUN_005f55c4(&local_68,0x16,*(undefined4 *)((long)puVar9 + 0x1c));
      uVar4 = uStack_60;
      pppuVar5 = (undefined8 ***)local_68;
      if (-1 < (long)local_58) {
        uVar4 = local_58 >> 0x38;
        pppuVar5 = &local_68;
      }
      FUN_00547cac(&local_80,pppuVar5,uVar4);
      if ((long)local_58 < 0) {
        operator_delete(local_68);
      }
      FUN_00547cac(&local_80," (pt) -> ",9);
      local_68 = (undefined8 ***)0x0;
      uStack_60 = 0;
      local_58 = 0;
      FUN_005f55c4(&local_68,0x16,*(undefined4 *)(puVar9 + 4));
      uVar4 = uStack_60;
      pppuVar5 = (undefined8 ***)local_68;
      if (-1 < (long)local_58) {
        uVar4 = local_58 >> 0x38;
        pppuVar5 = &local_68;
      }
      FUN_00547cac(&local_80,pppuVar5,uVar4);
      if ((long)local_58 < 0) {
        operator_delete(local_68);
      }
      FUN_00547cac(&local_80," (apt), ",8);
      puVar6 = (undefined8 *)puVar9[1];
      puVar8 = puVar9;
      if ((undefined8 *)puVar9[1] == (undefined8 *)0x0) {
        do {
          puVar9 = (undefined8 *)puVar8[2];
          bVar7 = puVar8 != (undefined8 *)*puVar9;
          puVar8 = puVar9;
        } while (bVar7);
      }
      else {
        do {
          puVar9 = puVar6;
          puVar6 = (undefined8 *)*puVar9;
        } while ((undefined8 *)*puVar9 != (undefined8 *)0x0);
      }
    } while (puVar9 != (undefined8 *)(param_2 + 0xe));
  }
  FUN_00547cac(&local_80,&DAT_001b0cbb,1);
  FUN_00547cac(&local_80,", raw_payload_types: {",0x16);
  puVar9 = *(undefined8 **)(param_2 + 0x12);
  if (puVar9 != (undefined8 *)(param_2 + 0x14)) {
    do {
      local_68 = (undefined8 ***)0x0;
      uStack_60 = 0;
      local_58 = 0;
      FUN_005f55c4(&local_68,0x16,*(undefined4 *)((long)puVar9 + 0x1c));
      uVar4 = uStack_60;
      pppuVar5 = (undefined8 ***)local_68;
      if (-1 < (long)local_58) {
        uVar4 = local_58 >> 0x38;
        pppuVar5 = &local_68;
      }
      FUN_00547cac(&local_80,pppuVar5,uVar4);
      if ((long)local_58 < 0) {
        operator_delete(local_68);
      }
      FUN_00547cac(&local_80,&DAT_001e1644,2);
      puVar6 = (undefined8 *)puVar9[1];
      puVar8 = puVar9;
      if ((undefined8 *)puVar9[1] == (undefined8 *)0x0) {
        do {
          puVar9 = (undefined8 *)puVar8[2];
          bVar7 = puVar8 != (undefined8 *)*puVar9;
          puVar8 = puVar9;
        } while (bVar7);
      }
      else {
        do {
          puVar9 = puVar6;
          puVar6 = (undefined8 *)*puVar9;
        } while ((undefined8 *)*puVar9 != (undefined8 *)0x0);
      }
    } while (puVar9 != (undefined8 *)(param_2 + 0x14));
  }
  FUN_00547cac(&local_80,&DAT_001b0cbb,1);
  FUN_00547cac(&local_80,&DAT_001b0cbb,1);
  if (local_70 < 0) {
    FUN_005478d8(param_1,local_80,uStack_78);
    if (local_70 < 0) {
      operator_delete(local_80);
    }
  }
  else {
    param_1[1] = uStack_78;
    *param_1 = local_80;
    param_1[2] = local_70;
  }
  return;
}


// ===== 00847568  FUN_00847568 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00847568(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined1 *)((long)param_1 + 0x12) = 0;
  uVar2 = _UNK_001f3be8;
  uVar1 = _DAT_001f3be0;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  *(undefined2 *)(param_1 + 2) = 0x100;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[7] = 0;
  param_1[5] = 0;
  param_1[6] = param_1 + 7;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0xffffffffffffffff;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[8] = 0;
  param_1[9] = param_1 + 10;
  return;
}


// ===== 008475b4  FUN_008475b4 =====

void FUN_008475b4(long param_1)

{
  long local_8;
  
  local_8 = param_1 + 0x48;
  FUN_005fa1cc(&local_8,*(undefined8 *)(param_1 + 0x50));
  local_8 = param_1 + 0x30;
  FUN_005fa2f8(&local_8,*(undefined8 *)(param_1 + 0x38));
  return;
}


// ===== 00847600  FUN_00847600 =====

void FUN_00847600(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00847618  FUN_00847618 =====

void FUN_00847618(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[0xb] = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 7) = 0;
  FUN_007ccda0(param_1 + 0xc);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x3a) = 0;
  param_1[0x3c] = 0;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 0x6a) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x6e) = 0;
  *(undefined8 *)(param_1 + 0x62) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)((long)param_1 + 0x18e) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  param_1[0x52] = 0;
  *(undefined1 *)(param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0x56) = 0;
  *(undefined1 *)(param_1 + 0x66) = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x5e) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  param_1[0x72] = 0x3f800000;
  return;
}


// ===== 008476ac  FUN_008476ac =====

void FUN_008476ac(long param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined1 uStack_21;
  
  puVar1 = (undefined8 *)*(void **)(param_1 + 0x1b8);
  while( true ) {
    if (puVar1 == (undefined8 *)0x0) {
      pvVar2 = *(void **)(param_1 + 0x1a8);
      *(undefined8 *)(param_1 + 0x1a8) = 0;
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2);
      }
      return;
    }
    if (puVar1 == (undefined8 *)0xfffffffffffffff0) break;
    pvVar2 = (void *)*puVar1;
    if ((ulong)*(byte *)(puVar1 + 8) != 0xff) {
      (*(code *)(&PTR_FUN_00d3a1a0)[*(byte *)(puVar1 + 8)])(&uStack_21,puVar1 + 5);
    }
    *(undefined1 *)(puVar1 + 8) = 0xff;
    if (*(char *)((long)puVar1 + 0x27) < '\0') {
      operator_delete((void *)puVar1[2]);
    }
    operator_delete(puVar1);
    puVar1 = (undefined8 *)pvVar2;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00847780  FUN_00847780 =====

void FUN_00847780(undefined8 *param_1,uint *param_2)

{
  undefined8 ****ppppuVar1;
  size_t sVar2;
  long *plVar3;
  long lVar4;
  char *__s;
  long *plVar5;
  ulong uVar6;
  undefined8 *local_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 ***local_78;
  ulong uStack_70;
  ulong local_68;
  undefined8 **local_48;
  
  local_90 = (undefined8 *)0x0;
  uStack_88 = 0;
  local_80 = 0;
  FUN_00547cac(&local_90,"type: ",6);
  if (2 < *param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_0061ff28();
  }
  __s = (&PTR_s_media_00d3a1d0)[*param_2];
  sVar2 = strlen(__s);
  FUN_00547cac(&local_90,__s,sVar2);
  if ((char)param_2[2] == '\x01') {
    FUN_00547cac(&local_90," (for: ",7);
    if ((param_2[2] & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005dc08c();
    }
    local_78 = (undefined8 ****)0x0;
    uStack_70 = 0;
    local_68 = 0;
    FUN_005fa03c(&local_78,0x16,param_2[1]);
    uVar6 = uStack_70;
    ppppuVar1 = (undefined8 ****)local_78;
    if (-1 < (long)local_68) {
      uVar6 = local_68 >> 0x38;
      ppppuVar1 = &local_78;
    }
    FUN_00547cac(&local_90,ppppuVar1,uVar6);
    if ((long)local_68 < 0) {
      operator_delete(local_78);
    }
    FUN_00547cac(&local_90,&DAT_001ca519,1);
  }
  FUN_00547cac(&local_90,&DAT_001e1644,2);
  FUN_00547cac(&local_90,"width: ",7);
  local_78 = (undefined8 ****)0x0;
  uStack_70 = 0;
  local_68 = 0;
  FUN_005f55c4(&local_78,0x16,param_2[5]);
  uVar6 = uStack_70;
  ppppuVar1 = (undefined8 ****)local_78;
  if (-1 < (long)local_68) {
    uVar6 = local_68 >> 0x38;
    ppppuVar1 = &local_78;
  }
  FUN_00547cac(&local_90,ppppuVar1,uVar6);
  if ((long)local_68 < 0) {
    operator_delete(local_78);
  }
  FUN_00547cac(&local_90,&DAT_001e1644,2);
  FUN_00547cac(&local_90,"height: ",8);
  local_78 = (undefined8 ****)0x0;
  uStack_70 = 0;
  local_68 = 0;
  FUN_005f55c4(&local_78,0x16,param_2[6]);
  uVar6 = uStack_70;
  ppppuVar1 = (undefined8 ****)local_78;
  if (-1 < (long)local_68) {
    uVar6 = local_68 >> 0x38;
    ppppuVar1 = &local_78;
  }
  FUN_00547cac(&local_90,ppppuVar1,uVar6);
  if ((long)local_68 < 0) {
    operator_delete(local_78);
  }
  FUN_00547cac(&local_90,&DAT_001e1644,2);
  FUN_00547cac(&local_90,"key: ",5);
  local_78 = (undefined8 ****)0x0;
  uStack_70 = 0;
  local_68 = 0;
  FUN_005f55c4(&local_78,0x16,param_2[3]);
  uVar6 = uStack_70;
  ppppuVar1 = (undefined8 ****)local_78;
  if (-1 < (long)local_68) {
    uVar6 = local_68 >> 0x38;
    ppppuVar1 = &local_78;
  }
  FUN_00547cac(&local_90,ppppuVar1,uVar6);
  if ((long)local_68 < 0) {
    operator_delete(local_78);
  }
  FUN_00547cac(&local_90,&DAT_001e1644,2);
  FUN_00547cac(&local_90,"delta: ",7);
  local_78 = (undefined8 ****)0x0;
  uStack_70 = 0;
  local_68 = 0;
  FUN_005f55c4(&local_78,0x16,param_2[4]);
  uVar6 = uStack_70;
  ppppuVar1 = (undefined8 ****)local_78;
  if (-1 < (long)local_68) {
    uVar6 = local_68 >> 0x38;
    ppppuVar1 = &local_78;
  }
  FUN_00547cac(&local_90,ppppuVar1,uVar6);
  if ((long)local_68 < 0) {
    operator_delete(local_78);
  }
  FUN_00547cac(&local_90,&DAT_001e1644,2);
  FUN_00547cac(&local_90,"total_bps: ",0xb);
  local_78 = (undefined8 ****)0x0;
  uStack_70 = 0;
  local_68 = 0;
  FUN_005f55c4(&local_78,0x16,param_2[7]);
  uVar6 = uStack_70;
  ppppuVar1 = (undefined8 ****)local_78;
  if (-1 < (long)local_68) {
    uVar6 = local_68 >> 0x38;
    ppppuVar1 = &local_78;
  }
  FUN_00547cac(&local_90,ppppuVar1,uVar6);
  if ((long)local_68 < 0) {
    operator_delete(local_78);
  }
  FUN_00547cac(&local_90,&DAT_001e1644,2);
  FUN_00547cac(&local_90,"retransmit_bps: ",0x10);
  local_78 = (undefined8 ****)0x0;
  uStack_70 = 0;
  local_68 = 0;
  FUN_005f55c4(&local_78,0x16,param_2[8]);
  uVar6 = uStack_70;
  ppppuVar1 = (undefined8 ****)local_78;
  if (-1 < (long)local_68) {
    uVar6 = local_68 >> 0x38;
    ppppuVar1 = &local_78;
  }
  FUN_00547cac(&local_90,ppppuVar1,uVar6);
  if ((long)local_68 < 0) {
    operator_delete(local_78);
  }
  FUN_00547cac(&local_90,&DAT_001e1644,2);
  FUN_00547cac(&local_90,"avg_delay_ms: ",0xe);
  local_78 = (undefined8 ****)0x0;
  uStack_70 = 0;
  local_68 = 0;
  FUN_005f55c4(&local_78,0x16,param_2[10]);
  uVar6 = uStack_70;
  ppppuVar1 = (undefined8 ****)local_78;
  if (-1 < (long)local_68) {
    uVar6 = local_68 >> 0x38;
    ppppuVar1 = &local_78;
  }
  FUN_00547cac(&local_90,ppppuVar1,uVar6);
  if ((long)local_68 < 0) {
    operator_delete(local_78);
  }
  FUN_00547cac(&local_90,&DAT_001e1644,2);
  FUN_00547cac(&local_90,"max_delay_ms: ",0xe);
  local_78 = (undefined8 ****)0x0;
  uStack_70 = 0;
  local_68 = 0;
  FUN_005f55c4(&local_78,0x16,param_2[0xb]);
  uVar6 = uStack_70;
  ppppuVar1 = (undefined8 ****)local_78;
  if (-1 < (long)local_68) {
    uVar6 = local_68 >> 0x38;
    ppppuVar1 = &local_78;
  }
  FUN_00547cac(&local_90,ppppuVar1,uVar6);
  if ((long)local_68 < 0) {
    operator_delete(local_78);
  }
  FUN_00547cac(&local_90,&DAT_001e1644,2);
  if ((char)param_2[0x4e] == '\x01') {
    FUN_00547cac(&local_90,"cum_loss: ",10);
    if ((param_2[0x4e] & 1) != 0) {
      local_78 = (undefined8 ****)0x0;
      uStack_70 = 0;
      local_68 = 0;
      FUN_005f55c4(&local_78,0x16,param_2[0x41]);
      uVar6 = uStack_70;
      ppppuVar1 = (undefined8 ****)local_78;
      if (-1 < (long)local_68) {
        uVar6 = local_68 >> 0x38;
        ppppuVar1 = &local_78;
      }
      FUN_00547cac(&local_90,ppppuVar1,uVar6);
      if ((long)local_68 < 0) {
        operator_delete(local_78);
      }
      FUN_00547cac(&local_90,&DAT_001e1644,2);
      FUN_00547cac(&local_90,"max_ext_seq: ",0xd);
      if ((param_2[0x4e] & 1) != 0) {
        local_78 = (undefined8 ****)0x0;
        uStack_70 = 0;
        local_68 = 0;
        FUN_005fa03c(&local_78,0x16,param_2[0x42]);
        uVar6 = uStack_70;
        ppppuVar1 = (undefined8 ****)local_78;
        if (-1 < (long)local_68) {
          uVar6 = local_68 >> 0x38;
          ppppuVar1 = &local_78;
        }
        FUN_00547cac(&local_90,ppppuVar1,uVar6);
        if ((long)local_68 < 0) {
          operator_delete(local_78);
        }
        FUN_00547cac(&local_90,&DAT_001e1644,2);
        goto LAB_00847d80;
      }
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/optional:1054: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
              );
  }
LAB_00847d80:
  FUN_00547cac(&local_90,"nack: ",6);
  local_78 = (undefined8 ****)0x0;
  uStack_70 = 0;
  local_68 = 0;
  FUN_005fa03c(&local_78,0x16,param_2[0x38]);
  uVar6 = uStack_70;
  ppppuVar1 = (undefined8 ****)local_78;
  if (-1 < (long)local_68) {
    uVar6 = local_68 >> 0x38;
    ppppuVar1 = &local_78;
  }
  FUN_00547cac(&local_90,ppppuVar1,uVar6);
  if ((long)local_68 < 0) {
    operator_delete(local_78);
  }
  FUN_00547cac(&local_90,&DAT_001e1644,2);
  FUN_00547cac(&local_90,"fir: ",5);
  local_78 = (undefined8 ****)0x0;
  uStack_70 = 0;
  local_68 = 0;
  FUN_005fa03c(&local_78,0x16,param_2[0x39]);
  uVar6 = uStack_70;
  ppppuVar1 = (undefined8 ****)local_78;
  if (-1 < (long)local_68) {
    uVar6 = local_68 >> 0x38;
    ppppuVar1 = &local_78;
  }
  FUN_00547cac(&local_90,ppppuVar1,uVar6);
  if ((long)local_68 < 0) {
    operator_delete(local_78);
  }
  FUN_00547cac(&local_90,&DAT_001e1644,2);
  FUN_00547cac(&local_90,"pli: ",5);
  local_78 = (undefined8 ****)0x0;
  uStack_70 = 0;
  local_68 = 0;
  FUN_005fa03c(&local_78,0x16,param_2[0x3a]);
  uVar6 = uStack_70;
  ppppuVar1 = (undefined8 ****)local_78;
  if (-1 < (long)local_68) {
    uVar6 = local_68 >> 0x38;
    ppppuVar1 = &local_78;
  }
  FUN_00547cac(&local_90,ppppuVar1,uVar6);
  if ((long)local_68 < 0) {
    operator_delete(local_78);
    lVar4 = *(long *)(param_2 + 0x70);
  }
  else {
    lVar4 = *(long *)(param_2 + 0x70);
  }
  if (lVar4 != 0) {
    FUN_00547cac(&local_90,", aux_stats: {",0xe);
    plVar5 = *(long **)(param_2 + 0x6e);
    if (plVar5 != (long *)0x0) {
      uVar6 = 1;
      do {
        lVar4 = (long)*(char *)((long)plVar5 + 0x27);
        if (lVar4 < 0) {
          plVar3 = (long *)plVar5[2];
          lVar4 = plVar5[3];
        }
        else {
          plVar3 = plVar5 + 2;
        }
        FUN_00547cac(&local_90,plVar3,lVar4);
        FUN_00547cac(&local_90,&DAT_001c4dc3,2);
        if ((ulong)*(byte *)(plVar5 + 8) == 0xff) {
          local_48 = &local_90;
                    /* WARNING: Subroutine does not return */
          FUN_005ee558();
        }
        local_78 = &local_48;
        local_48 = &local_90;
        (*(code *)(&PTR_FUN_00d3a170)[*(byte *)(plVar5 + 8)])(&local_78,plVar5 + 5);
        if (uVar6 < *(ulong *)(param_2 + 0x70)) {
          FUN_00547cac(&local_90,&DAT_001e1644,2);
        }
        plVar5 = (long *)*plVar5;
        uVar6 = uVar6 + 1;
      } while (plVar5 != (long *)0x0);
    }
    FUN_00547cac(&local_90,&DAT_001b0cbb,1);
  }
  if (local_80 < 0) {
    FUN_005478d8(param_1,local_90,uStack_88);
    if (local_80 < 0) {
      operator_delete(local_90);
    }
  }
  else {
    param_1[1] = uStack_88;
    *param_1 = local_90;
    param_1[2] = local_80;
  }
  return;
}


// ===== 0084804c  FUN_0084804c =====

void FUN_0084804c(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined1 **)(param_1 + 0x78) = param_1 + 0x80;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  param_1[0x70] = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0x95) = 0;
  *(undefined1 **)(param_1 + 0xa0) = param_1 + 0xa8;
  param_1[0xb8] = 0;
  *(undefined2 *)(param_1 + 0xc4) = 0;
  *(undefined8 *)(param_1 + 0xbc) = 0;
  return;
}


// ===== 008480a4  FUN_008480a4 =====

void FUN_008480a4(undefined8 *param_1)

{
  undefined8 *local_8;
  
  local_8 = param_1 + 0x14;
  FUN_0061b004(&local_8,param_1[0x15]);
  local_8 = param_1 + 0xf;
  FUN_0061b080(&local_8,param_1[0x10]);
  if ((*(char *)(param_1 + 3) == '\x01') && (*(char *)((long)param_1 + 0x17) < '\0')) {
    operator_delete((void *)*param_1);
  }
  return;
}


// ===== 00848114  FUN_00848114 =====

void FUN_00848114(undefined8 *param_1,long param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  char *pcVar4;
  ulong uVar5;
  undefined8 ****ppppuVar6;
  long *plVar7;
  bool bVar8;
  long *plVar9;
  long *plVar10;
  void *local_80;
  undefined8 uStack_78;
  long local_70;
  undefined8 ***local_68;
  ulong uStack_60;
  ulong local_58;
  
  local_80 = (void *)0x0;
  uStack_78 = 0;
  local_70 = 0;
  FUN_00547cac(&local_80,"VideoSendStream stats: ",0x17);
  local_68 = (undefined8 ****)0x0;
  uStack_60 = 0;
  local_58 = 0;
  FUN_005f5410(&local_68,0x16,param_3);
  uVar5 = uStack_60;
  ppppuVar6 = (undefined8 ****)local_68;
  if (-1 < (long)local_58) {
    uVar5 = local_58 >> 0x38;
    ppppuVar6 = &local_68;
  }
  FUN_00547cac(&local_80,ppppuVar6,uVar5);
  if ((long)local_58 < 0) {
    operator_delete(local_68);
  }
  FUN_00547cac(&local_80,&DAT_001e49b3,3);
  FUN_00547cac(&local_80,"input_fps: ",0xb);
  FUN_008490e4(&local_68,*(undefined8 *)(param_2 + 0x20),&DAT_001d71dd);
  uVar5 = uStack_60;
  ppppuVar6 = (undefined8 ****)local_68;
  if (-1 < (long)local_58) {
    uVar5 = local_58 >> 0x38;
    ppppuVar6 = &local_68;
  }
  FUN_00547cac(&local_80,ppppuVar6,uVar5);
  FUN_00547cac(&local_80,&DAT_001e1644,2);
  if ((long)local_58 < 0) {
    operator_delete(local_68);
  }
  FUN_00547cac(&local_80,"encode_fps: ",0xc);
  local_68 = (undefined8 ****)0x0;
  uStack_60 = 0;
  local_58 = 0;
  FUN_005f55c4(&local_68,0x16,*(undefined4 *)(param_2 + 0x28));
  uVar5 = uStack_60;
  ppppuVar6 = (undefined8 ****)local_68;
  if (-1 < (long)local_58) {
    uVar5 = local_58 >> 0x38;
    ppppuVar6 = &local_68;
  }
  FUN_00547cac(&local_80,ppppuVar6,uVar5);
  if ((long)local_58 < 0) {
    operator_delete(local_68);
  }
  FUN_00547cac(&local_80,&DAT_001e1644,2);
  FUN_00547cac(&local_80,"encode_ms: ",0xb);
  local_68 = (undefined8 ****)0x0;
  uStack_60 = 0;
  local_58 = 0;
  FUN_005f55c4(&local_68,0x16,*(undefined4 *)(param_2 + 0x2c));
  uVar5 = uStack_60;
  ppppuVar6 = (undefined8 ****)local_68;
  if (-1 < (long)local_58) {
    uVar5 = local_58 >> 0x38;
    ppppuVar6 = &local_68;
  }
  FUN_00547cac(&local_80,ppppuVar6,uVar5);
  if ((long)local_58 < 0) {
    operator_delete(local_68);
  }
  FUN_00547cac(&local_80,&DAT_001e1644,2);
  FUN_00547cac(&local_80,"encode_usage_perc: ",0x13);
  local_68 = (undefined8 ****)0x0;
  uStack_60 = 0;
  local_58 = 0;
  FUN_005f55c4(&local_68,0x16,*(undefined4 *)(param_2 + 0x30));
  uVar5 = uStack_60;
  ppppuVar6 = (undefined8 ****)local_68;
  if (-1 < (long)local_58) {
    uVar5 = local_58 >> 0x38;
    ppppuVar6 = &local_68;
  }
  FUN_00547cac(&local_80,ppppuVar6,uVar5);
  if ((long)local_58 < 0) {
    operator_delete(local_68);
  }
  FUN_00547cac(&local_80,&DAT_001e1644,2);
  FUN_00547cac(&local_80,"target_bps: ",0xc);
  local_68 = (undefined8 ****)0x0;
  uStack_60 = 0;
  local_58 = 0;
  FUN_005f55c4(&local_68,0x16,*(undefined4 *)(param_2 + 100));
  uVar5 = uStack_60;
  ppppuVar6 = (undefined8 ****)local_68;
  if (-1 < (long)local_58) {
    uVar5 = local_58 >> 0x38;
    ppppuVar6 = &local_68;
  }
  FUN_00547cac(&local_80,ppppuVar6,uVar5);
  if ((long)local_58 < 0) {
    operator_delete(local_68);
  }
  FUN_00547cac(&local_80,&DAT_001e1644,2);
  FUN_00547cac(&local_80,"media_bps: ",0xb);
  local_68 = (undefined8 ****)0x0;
  uStack_60 = 0;
  local_58 = 0;
  FUN_005f55c4(&local_68,0x16,*(undefined4 *)(param_2 + 0x68));
  uVar5 = uStack_60;
  ppppuVar6 = (undefined8 ****)local_68;
  if (-1 < (long)local_58) {
    uVar5 = local_58 >> 0x38;
    ppppuVar6 = &local_68;
  }
  FUN_00547cac(&local_80,ppppuVar6,uVar5);
  if ((long)local_58 < 0) {
    operator_delete(local_68);
  }
  FUN_00547cac(&local_80,&DAT_001e1644,2);
  FUN_00547cac(&local_80,"suspended: ",0xb);
  pcVar1 = "false";
  pcVar2 = "true";
  bVar8 = *(char *)(param_2 + 0x6c) == '\0';
  pcVar4 = pcVar2;
  if (bVar8) {
    pcVar4 = pcVar1;
  }
  uVar3 = 4;
  if (bVar8) {
    uVar3 = 5;
  }
  FUN_00547cac(&local_80,pcVar4,uVar3);
  FUN_00547cac(&local_80,&DAT_001e1644,2);
  FUN_00547cac(&local_80,"bw_adapted_res: ",0x10);
  bVar8 = *(char *)(param_2 + 0x6d) == '\0';
  pcVar4 = pcVar2;
  if (bVar8) {
    pcVar4 = pcVar1;
  }
  uVar3 = 4;
  if (bVar8) {
    uVar3 = 5;
  }
  FUN_00547cac(&local_80,pcVar4,uVar3);
  FUN_00547cac(&local_80,&DAT_001e1644,2);
  FUN_00547cac(&local_80,"cpu_adapted_res: ",0x11);
  bVar8 = *(char *)(param_2 + 0x6e) == '\0';
  pcVar4 = pcVar2;
  if (bVar8) {
    pcVar4 = pcVar1;
  }
  uVar3 = 4;
  if (bVar8) {
    uVar3 = 5;
  }
  FUN_00547cac(&local_80,pcVar4,uVar3);
  FUN_00547cac(&local_80,&DAT_001e1644,2);
  FUN_00547cac(&local_80,"bw_adapted_fps: ",0x10);
  bVar8 = *(char *)(param_2 + 0x6f) == '\0';
  pcVar4 = pcVar2;
  if (bVar8) {
    pcVar4 = pcVar1;
  }
  uVar3 = 4;
  if (bVar8) {
    uVar3 = 5;
  }
  FUN_00547cac(&local_80,pcVar4,uVar3);
  FUN_00547cac(&local_80,&DAT_001e1644,2);
  FUN_00547cac(&local_80,"cpu_adapted_fps: ",0x11);
  bVar8 = *(char *)(param_2 + 0x70) == '\0';
  if (bVar8) {
    pcVar2 = pcVar1;
  }
  uVar3 = 4;
  if (bVar8) {
    uVar3 = 5;
  }
  FUN_00547cac(&local_80,pcVar2,uVar3);
  FUN_00547cac(&local_80,&DAT_001e1644,2);
  FUN_00547cac(&local_80,"#cpu_adaptations: ",0x12);
  local_68 = (undefined8 ****)0x0;
  uStack_60 = 0;
  local_58 = 0;
  FUN_005f55c4(&local_68,0x16,*(undefined4 *)(param_2 + 0x94));
  uVar5 = uStack_60;
  ppppuVar6 = (undefined8 ****)local_68;
  if (-1 < (long)local_58) {
    uVar5 = local_58 >> 0x38;
    ppppuVar6 = &local_68;
  }
  FUN_00547cac(&local_80,ppppuVar6,uVar5);
  if ((long)local_58 < 0) {
    operator_delete(local_68);
  }
  FUN_00547cac(&local_80,&DAT_001e1644,2);
  FUN_00547cac(&local_80,"#quality_adaptations: ",0x16);
  local_68 = (undefined8 ****)0x0;
  uStack_60 = 0;
  local_58 = 0;
  FUN_005f55c4(&local_68,0x16,*(undefined4 *)(param_2 + 0x98));
  uVar5 = uStack_60;
  ppppuVar6 = (undefined8 ****)local_68;
  if (-1 < (long)local_58) {
    uVar5 = local_58 >> 0x38;
    ppppuVar6 = &local_68;
  }
  FUN_00547cac(&local_80,ppppuVar6,uVar5);
  if ((long)local_58 < 0) {
    operator_delete(local_68);
  }
  FUN_00547cac(&local_80,&DAT_001b0cbb,1);
  if (*(long **)(param_2 + 0xa0) != (long *)(param_2 + 0xa8)) {
    plVar9 = *(long **)(param_2 + 0xa0);
    do {
      if ((int)plVar9[5] == 0) {
        FUN_00547cac(&local_80," {ssrc: ",8);
        local_68 = (undefined8 ****)0x0;
        uStack_60 = 0;
        local_58 = 0;
        FUN_005fa03c(&local_68,0x16,(int)plVar9[4]);
        uVar5 = uStack_60;
        ppppuVar6 = (undefined8 ****)local_68;
        if (-1 < (long)local_58) {
          uVar5 = local_58 >> 0x38;
          ppppuVar6 = &local_68;
        }
        FUN_00547cac(&local_80,ppppuVar6,uVar5);
        if ((long)local_58 < 0) {
          operator_delete(local_68);
        }
        FUN_00547cac(&local_80,&DAT_001e1644,2);
        FUN_00847780(&local_68,plVar9 + 5);
        uVar5 = uStack_60;
        ppppuVar6 = (undefined8 ****)local_68;
        if (-1 < (long)local_58) {
          uVar5 = local_58 >> 0x38;
          ppppuVar6 = &local_68;
        }
        FUN_00547cac(&local_80,ppppuVar6,uVar5);
        if ((long)local_58 < 0) {
          operator_delete(local_68);
        }
        FUN_00547cac(&local_80,&DAT_001b0cbb,1);
        plVar7 = (long *)plVar9[1];
        if ((long *)plVar9[1] != (long *)0x0) goto LAB_008487f0;
LAB_00848800:
        do {
          plVar10 = (long *)plVar9[2];
          bVar8 = plVar9 != (long *)*plVar10;
          plVar9 = plVar10;
        } while (bVar8);
      }
      else {
        plVar7 = (long *)plVar9[1];
        if ((long *)plVar9[1] == (long *)0x0) goto LAB_00848800;
LAB_008487f0:
        do {
          plVar10 = plVar7;
          plVar7 = (long *)*plVar10;
        } while ((long *)*plVar10 != (long *)0x0);
      }
      plVar9 = plVar10;
    } while (plVar10 != (long *)(param_2 + 0xa8));
  }
  if (local_70 < 0) {
    FUN_005478d8(param_1,local_80,uStack_78);
    if (local_70 < 0) {
      operator_delete(local_80);
    }
  }
  else {
    param_1[1] = uStack_78;
    *param_1 = local_80;
    param_1[2] = local_70;
  }
  return;
}


// ===== 00848878  FUN_00848878 =====

void FUN_00848878(long param_1,long param_2)

{
  void *__src;
  undefined4 uVar1;
  undefined1 uVar2;
  ulong __n;
  undefined8 *puVar3;
  void *__dest;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  FUN_00843c1c();
  uVar6 = *(undefined8 *)(param_2 + 0x148);
  uVar5 = *(undefined8 *)(param_2 + 0x160);
  uVar4 = *(undefined8 *)(param_2 + 0x158);
  uVar8 = *(undefined8 *)(param_2 + 0x130);
  uVar7 = *(undefined8 *)(param_2 + 0x128);
  uVar10 = *(undefined8 *)(param_2 + 0x140);
  uVar9 = *(undefined8 *)(param_2 + 0x138);
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_2 + 0x150);
  *(undefined8 *)(param_1 + 0x148) = uVar6;
  *(undefined8 *)(param_1 + 0x160) = uVar5;
  *(undefined8 *)(param_1 + 0x158) = uVar4;
  *(undefined8 *)(param_1 + 0x130) = uVar8;
  *(undefined8 *)(param_1 + 0x128) = uVar7;
  *(undefined8 *)(param_1 + 0x140) = uVar10;
  *(undefined8 *)(param_1 + 0x138) = uVar9;
  *(undefined2 *)(param_1 + 0x168) = *(undefined2 *)(param_2 + 0x168);
  puVar3 = *(undefined8 **)(param_2 + 0x170);
  *(undefined8 **)(param_1 + 0x170) = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)();
  }
  *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_2 + 0x178);
  uVar2 = *(undefined1 *)(param_2 + 0x184);
  uVar1 = *(undefined4 *)(param_2 + 0x180);
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined1 *)(param_1 + 0x184) = uVar2;
  *(undefined4 *)(param_1 + 0x180) = uVar1;
  __src = *(void **)(param_2 + 0x188);
  __n = *(long *)(param_2 + 400) - (long)__src;
  if (__n != 0) {
    if ((long)__n < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d4754();
    }
    __dest = operator_new(__n);
    *(void **)(param_1 + 0x188) = __dest;
    *(void **)(param_1 + 400) = __dest;
    *(ulong *)(param_1 + 0x198) = (long)__dest + __n;
    memcpy(__dest,__src,__n);
    *(ulong *)(param_1 + 400) = (long)__dest + __n;
  }
  puVar3 = *(undefined8 **)(param_2 + 0x1a0);
  *(undefined8 **)(param_1 + 0x1a0) = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00848950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar3)();
    return;
  }
  return;
}


// ===== 00848970  FUN_00848970 =====

void FUN_00848970(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  FUN_00843c1c();
  uVar5 = *(undefined8 *)(param_2 + 0x148);
  uVar4 = *(undefined8 *)(param_2 + 0x160);
  uVar3 = *(undefined8 *)(param_2 + 0x158);
  uVar7 = *(undefined8 *)(param_2 + 0x130);
  uVar6 = *(undefined8 *)(param_2 + 0x128);
  uVar9 = *(undefined8 *)(param_2 + 0x140);
  uVar8 = *(undefined8 *)(param_2 + 0x138);
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_2 + 0x150);
  *(undefined8 *)(param_1 + 0x148) = uVar5;
  *(undefined8 *)(param_1 + 0x160) = uVar4;
  *(undefined8 *)(param_1 + 0x158) = uVar3;
  *(undefined8 *)(param_1 + 0x130) = uVar7;
  *(undefined8 *)(param_1 + 0x128) = uVar6;
  *(undefined8 *)(param_1 + 0x140) = uVar9;
  *(undefined8 *)(param_1 + 0x138) = uVar8;
  *(undefined2 *)(param_1 + 0x168) = *(undefined2 *)(param_2 + 0x168);
  uVar3 = *(undefined8 *)(param_2 + 0x170);
  *(undefined8 *)(param_2 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x170) = uVar3;
  *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_2 + 0x178);
  uVar2 = *(undefined1 *)(param_2 + 0x184);
  uVar1 = *(undefined4 *)(param_2 + 0x180);
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined1 *)(param_1 + 0x184) = uVar2;
  *(undefined4 *)(param_1 + 0x180) = uVar1;
  *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_2 + 0x188);
  *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_2 + 400);
  *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_2 + 0x198);
  uVar3 = *(undefined8 *)(param_2 + 0x1a0);
  *(undefined8 *)(param_2 + 400) = 0;
  *(undefined8 *)(param_2 + 0x188) = 0;
  *(undefined8 *)(param_2 + 0x1a0) = 0;
  *(undefined8 *)(param_2 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = uVar3;
  return;
}


// ===== 00848a14  FUN_00848a14 =====

void FUN_00848a14(long param_1,undefined8 param_2)

{
  FUN_00843ba4();
  *(undefined1 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined1 *)(param_1 + 0x148) = *(undefined1 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined1 *)(param_1 + 0x149) = 0;
  *(undefined4 *)(param_1 + 0x150) = 1000;
  *(undefined8 *)(param_1 + 0x158) = param_2;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined2 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  FUN_007ebea0(param_1 + 0x180);
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  return;
}


// ===== 00848a78  FUN_00848a78 =====

void FUN_00848a78(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (*(long **)(param_1 + 0x1a0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x1a0) + 8))();
  }
  pvVar1 = *(void **)(param_1 + 0x188);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = *(void **)(param_1 + 400);
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
    while (pvVar2 != pvVar1) {
      pvVar2 = (void *)((long)pvVar2 + -2);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    *(void **)(param_1 + 400) = pvVar1;
    operator_delete(pvVar1);
  }
  if (*(long **)(param_1 + 0x170) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x170) + 8))();
  }
  FUN_00843fd0(param_1);
  return;
}


// ===== 00848b50  FUN_00848b50 =====

void FUN_00848b50(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 ***pppuVar5;
  bool bVar6;
  void *local_70;
  undefined8 uStack_68;
  long local_60;
  undefined8 **local_58;
  ulong uStack_50;
  undefined8 local_48;
  
  local_70 = (void *)0x0;
  uStack_68 = 0;
  local_60 = 0;
  FUN_00547cac(&local_70,"{encoder_settings: { experiment_cpu_load_estimator: ",0x34);
  bVar6 = *(char *)(param_2 + 0x128) == '\0';
  puVar4 = &DAT_001eb19b;
  if (bVar6) {
    puVar4 = &DAT_001b4a9e;
  }
  uVar1 = 2;
  if (bVar6) {
    uVar1 = 3;
  }
  FUN_00547cac(&local_70,puVar4,uVar1);
  FUN_00547cac(&local_70,&DAT_001c01c8,2);
  FUN_00547cac(&local_70,", rtp: ",7);
  FUN_00844344(&local_58,param_2);
  pppuVar5 = (undefined8 ***)local_58;
  if (-1 < (long)local_48) {
    uStack_50 = (ulong)local_48._7_1_;
    pppuVar5 = &local_58;
  }
  FUN_00547cac(&local_70,pppuVar5,uStack_50);
  if ((char)local_48._7_1_ < '\0') {
    operator_delete(local_58);
  }
  FUN_00547cac(&local_70,", rtcp_report_interval_ms: ",0x1b);
  local_58 = (undefined8 ***)0x0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_005f55c4(&local_58,0x16,*(undefined4 *)(param_2 + 0x150));
  uVar3 = uStack_50;
  pppuVar5 = (undefined8 ***)local_58;
  if (-1 < (long)local_48) {
    uVar3 = local_48 >> 0x38;
    pppuVar5 = &local_58;
  }
  FUN_00547cac(&local_70,pppuVar5,uVar3);
  if ((long)local_48 < 0) {
    operator_delete(local_58);
  }
  FUN_00547cac(&local_70,", send_transport: ",0x12);
  bVar6 = *(long *)(param_2 + 0x158) != 0;
  pcVar2 = "nullptr";
  if (bVar6) {
    pcVar2 = "(Transport)";
  }
  uVar1 = 7;
  if (bVar6) {
    uVar1 = 0xb;
  }
  FUN_00547cac(&local_70,pcVar2,uVar1);
  FUN_00547cac(&local_70,", render_delay_ms: ",0x13);
  local_58 = (undefined8 ***)0x0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_005f55c4(&local_58,0x16,*(undefined4 *)(param_2 + 0x160));
  uVar3 = uStack_50;
  pppuVar5 = (undefined8 ***)local_58;
  if (-1 < (long)local_48) {
    uVar3 = local_48 >> 0x38;
    pppuVar5 = &local_58;
  }
  FUN_00547cac(&local_70,pppuVar5,uVar3);
  if ((long)local_48 < 0) {
    operator_delete(local_58);
  }
  FUN_00547cac(&local_70,", target_delay_ms: ",0x13);
  local_58 = (undefined8 ***)0x0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_005f55c4(&local_58,0x16,*(undefined4 *)(param_2 + 0x164));
  uVar3 = uStack_50;
  pppuVar5 = (undefined8 ***)local_58;
  if (-1 < (long)local_48) {
    uVar3 = local_48 >> 0x38;
    pppuVar5 = &local_58;
  }
  FUN_00547cac(&local_70,pppuVar5,uVar3);
  if ((long)local_48 < 0) {
    operator_delete(local_58);
  }
  FUN_00547cac(&local_70,", suspend_below_min_bitrate: ",0x1d);
  bVar6 = *(char *)(param_2 + 0x168) == '\0';
  puVar4 = &DAT_001eb19b;
  if (bVar6) {
    puVar4 = &DAT_001b4a9e;
  }
  uVar1 = 2;
  if (bVar6) {
    uVar1 = 3;
  }
  FUN_00547cac(&local_70,puVar4,uVar1);
  FUN_00547cac(&local_70,&DAT_001b0cbb,1);
  if (local_60 < 0) {
    FUN_005478d8(param_1,local_70,uStack_68);
    if (local_60 < 0) {
      operator_delete(local_70);
    }
  }
  else {
    param_1[1] = uStack_68;
    *param_1 = local_70;
    param_1[2] = local_60;
  }
  return;
}


// ===== 00848e40  FUN_00848e40 =====

void FUN_00848e40(undefined8 *param_1)

{
  FUN_00547cac(*(undefined8 *)*param_1,&DAT_001b9a21,4);
  return;
}


// ===== 00848e5c  FUN_00848e5c =====

void FUN_00848e5c(undefined8 *param_1,undefined1 *param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 uVar3;
  undefined8 **local_38;
  ulong uStack_30;
  ulong local_28;
  
  uVar3 = *(undefined8 *)*param_1;
  local_38 = (undefined8 ***)0x0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_005f55c4(&local_38,0x16,*param_2);
  uVar1 = uStack_30;
  pppuVar2 = (undefined8 ***)local_38;
  if (-1 < (long)local_28) {
    uVar1 = local_28 >> 0x38;
    pppuVar2 = &local_38;
  }
  FUN_00547cac(uVar3,pppuVar2,uVar1);
  if ((long)local_28 < 0) {
    operator_delete(local_38);
  }
  return;
}


// ===== 00848ee0  FUN_00848ee0 =====

void FUN_00848ee0(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 uVar3;
  undefined8 **local_38;
  ulong uStack_30;
  ulong local_28;
  
  uVar3 = *(undefined8 *)*param_1;
  local_38 = (undefined8 ***)0x0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_005f5410(&local_38,0x16,*param_2);
  uVar1 = uStack_30;
  pppuVar2 = (undefined8 ***)local_38;
  if (-1 < (long)local_28) {
    uVar1 = local_28 >> 0x38;
    pppuVar2 = &local_38;
  }
  FUN_00547cac(uVar3,pppuVar2,uVar1);
  if ((long)local_28 < 0) {
    operator_delete(local_38);
  }
  return;
}


// ===== 00848f64  FUN_00848f64 =====

void FUN_00848f64(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 uVar3;
  undefined8 **local_38;
  ulong uStack_30;
  ulong local_28;
  
  uVar3 = *(undefined8 *)*param_1;
  local_38 = (undefined8 ***)0x0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_006247b4(&local_38,0x16,*param_2);
  uVar1 = uStack_30;
  pppuVar2 = (undefined8 ***)local_38;
  if (-1 < (long)local_28) {
    uVar1 = local_28 >> 0x38;
    pppuVar2 = &local_38;
  }
  FUN_00547cac(uVar3,pppuVar2,uVar1);
  if ((long)local_28 < 0) {
    operator_delete(local_38);
  }
  return;
}


// ===== 00848fe8  FUN_00848fe8 =====

void FUN_00848fe8(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 uVar3;
  undefined8 **local_38;
  ulong uStack_30;
  ulong local_28;
  
  uVar3 = *(undefined8 *)*param_1;
  local_38 = (undefined8 ***)0x0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_00624ab4(*param_2,&local_38,0x10);
  uVar1 = uStack_30;
  pppuVar2 = (undefined8 ***)local_38;
  if (-1 < (long)local_28) {
    uVar1 = local_28 >> 0x38;
    pppuVar2 = &local_38;
  }
  FUN_00547cac(uVar3,pppuVar2,uVar1);
  if ((long)local_28 < 0) {
    operator_delete(local_38);
  }
  return;
}


// ===== 0084906c  FUN_0084906c =====

void FUN_0084906c(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)*param_1;
  FUN_00547cac(uVar3,&DAT_001d6255,1);
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  FUN_00547cac(uVar3,puVar2,uVar1);
  FUN_00547cac(uVar3,&DAT_001d6255,1);
  return;
}


// ===== 008490e4  FUN_008490e4 =====

void FUN_008490e4(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  long lVar1;
  undefined1 auStack_2c0 [8];
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined1 *local_280;
  undefined1 **ppuStack_278;
  undefined1 *puStack_270;
  undefined8 uStack_268;
  undefined1 *local_240;
  undefined1 *puStack_238;
  undefined1 *puStack_230;
  undefined1 *puStack_228;
  undefined1 *local_220;
  undefined1 *puStack_218;
  undefined1 *puStack_210;
  undefined1 *puStack_208;
  undefined1 *local_200;
  undefined1 *puStack_1f8;
  undefined1 *puStack_1f0;
  undefined1 *puStack_1e8;
  undefined1 *local_1e0;
  undefined1 *puStack_1d8;
  undefined1 *puStack_1d0;
  undefined1 *puStack_1c8;
  undefined1 *local_1c0;
  undefined1 *puStack_1b8;
  undefined1 *puStack_1b0;
  undefined1 *puStack_1a8;
  undefined1 *local_1a0;
  undefined1 *puStack_198;
  undefined1 *puStack_190;
  undefined1 *puStack_188;
  undefined1 *local_180;
  undefined1 *puStack_178;
  undefined1 *puStack_170;
  undefined1 *puStack_168;
  undefined1 *local_160;
  undefined1 *puStack_158;
  undefined1 *puStack_150;
  undefined1 *puStack_148;
  undefined1 *local_140;
  undefined1 *puStack_138;
  undefined1 *puStack_130;
  undefined1 *puStack_128;
  undefined1 *local_120;
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
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  puStack_270 = auStack_2c0;
  ppuStack_278 = &local_280;
  puStack_238 = &DAT_aaaaaaaaaaaaaaaa;
  local_240 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_228 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_230 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_218 = &DAT_aaaaaaaaaaaaaaaa;
  local_220 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_208 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_210 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1f8 = &DAT_aaaaaaaaaaaaaaaa;
  local_200 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1e8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_1e0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1c8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_1c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_198 = &DAT_aaaaaaaaaaaaaaaa;
  local_1a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_188 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_190 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_178 = &DAT_aaaaaaaaaaaaaaaa;
  local_180 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_168 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_170 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
  local_160 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_150 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
  local_140 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_130 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
  local_120 = &DAT_aaaaaaaaaaaaaaaa;
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
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_268 = 0xffffff80ffffffc8;
  local_2b8 = param_3;
  uStack_2b0 = param_4;
  local_2a8 = param_5;
  uStack_2a0 = param_6;
  local_298 = param_7;
  uStack_290 = param_8;
  local_288 = param_9;
  local_280 = (undefined1 *)register0x00000008;
  vsnprintf((char *)&local_240,0x200,param_2,&local_280);
  FUN_005d3510(param_1,&local_240);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008491f0  FUN_008491f0 =====

void FUN_008491f0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0xbff0000000000000;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[3] = 0xffffffffffffffff;
  param_1[2] = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined1 *)((long)param_1 + 0x52) = 1;
  *(undefined1 *)((long)param_1 + 0x54) = 0;
  *(undefined1 *)((long)param_1 + 0x5c) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}


// ===== 00849240  FUN_00849240 =====

void FUN_00849240(undefined8 *param_1,undefined8 *param_2)

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
  uVar2 = *(undefined8 *)((long)param_2 + 0x55);
  uVar1 = *(undefined8 *)((long)param_2 + 0x4d);
  uVar4 = param_2[9];
  uVar3 = param_2[8];
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined8 *)((long)param_1 + 0x55) = uVar2;
  *(undefined8 *)((long)param_1 + 0x4d) = uVar1;
  param_1[9] = uVar4;
  param_1[8] = uVar3;
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_007b69e0(param_1 + 0xc,param_2 + 0xc);
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  return;
}


// ===== 008492a8  FUN_008492a8 =====

void FUN_008492a8(long param_1)

{
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    FUN_007b6d78(param_1 + 0x60);
    return;
  }
  return;
}


// ===== 008492c4  FUN_008492c4 =====

void FUN_008492c4(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *local_450;
  undefined1 *puStack_448;
  undefined1 *local_440;
  undefined1 auStack_438 [1024];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  memset(auStack_438,0xaa,0x400);
  local_440 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_448 = &DAT_aaaaaaaaaaaaaaaa;
  local_450 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00622830(&local_450,auStack_438,0x400);
  uVar2 = FUN_006228b0(&local_450,"{width: ",8);
  FUN_00622a20(uVar2,*param_2);
  uVar2 = FUN_006228b0(&local_450,", height: ",10);
  FUN_00622a20(uVar2,param_2[1]);
  uVar2 = FUN_006228b0(&local_450,", max_framerate: ",0x11);
  FUN_00622910(uVar2,*(undefined4 *)(param_2 + 2));
  uVar2 = FUN_006228b0(&local_450,", min_bitrate_bps:",0x12);
  FUN_00622910(uVar2,*(undefined4 *)((long)param_2 + 0x14));
  uVar2 = FUN_006228b0(&local_450,", target_bitrate_bps:",0x15);
  FUN_00622910(uVar2,*(undefined4 *)(param_2 + 3));
  uVar2 = FUN_006228b0(&local_450,", max_bitrate_bps:",0x12);
  FUN_00622910(uVar2,*(undefined4 *)((long)param_2 + 0x1c));
  uVar2 = FUN_006228b0(&local_450,", max_qp: ",10);
  FUN_00622910(uVar2,*(undefined4 *)(param_2 + 5));
  uVar2 = FUN_006228b0(&local_450,", num_temporal_layers: ",0x17);
  if (*(char *)(param_2 + 7) == '\x01') {
    uVar3 = param_2[6];
  }
  else {
    uVar3 = 1;
  }
  FUN_00622a20(uVar2,uVar3);
  FUN_006228b0(&local_450,", bitrate_priority: ",0x14);
  uVar2 = 0;
  if (*(char *)(param_2 + 9) == '\x01') {
    uVar2 = param_2[8];
  }
  FUN_00622a48(uVar2);
  uVar2 = FUN_006228b0(&local_450,", active: ",10);
  FUN_00622910(uVar2,*(undefined1 *)((long)param_2 + 0x52));
  FUN_006228b0(&local_450,", scale_down_by: ",0x11);
  FUN_00622a48(param_2[4]);
  if (*(char *)((long)param_2 + 0x5c) == '\x01') {
    uVar2 = FUN_006228b0(&local_450,", scale_down_to: ",0x11);
    if ((*(byte *)((long)param_2 + 0x5c) & 1) != 0) {
      uVar2 = FUN_00622910(uVar2,*(undefined4 *)((long)param_2 + 0x54));
      uVar2 = FUN_006228b0(uVar2,&DAT_001c4fee,1);
      if ((*(byte *)((long)param_2 + 0x5c) & 1) != 0) {
        FUN_00622910(uVar2,*(undefined4 *)(param_2 + 0xb));
        goto LAB_008494c4;
      }
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/optional:1054: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
              );
  }
LAB_008494c4:
  FUN_00622844(&local_450,0x7d);
  FUN_005d3510(param_1,local_450);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0084951c  FUN_0084951c =====

void FUN_0084951c(undefined4 *param_1)

{
  void *local_38 [2];
  char cStack_21;
  
  *param_1 = 0;
  FUN_005d3510(local_38,"Unset");
  FUN_007b687c(param_1 + 2,local_38);
  if (cStack_21 < '\0') {
    operator_delete(local_38[0]);
  }
  *(undefined8 *)((long)param_1 + 0x85) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  *(undefined2 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  param_1[0x33] = 0xffffffff;
  return;
}


// ===== 008495b4  FUN_008495b4 =====

void FUN_008495b4(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  FUN_007b6ad4(param_1 + 2,param_2 + 2);
  uVar2 = *(undefined8 *)(param_2 + 0x1a);
  *(undefined8 *)(param_2 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x1a) = uVar2;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  uVar1 = param_2[0x22];
  *(undefined8 *)(param_2 + 0x1c) = 0;
  *(undefined8 *)(param_2 + 0x1e) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x23) = *(undefined1 *)(param_2 + 0x23);
  param_1[0x22] = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_2 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x24) = uVar2;
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x26);
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(undefined8 *)(param_1 + 0x26) = uVar2;
  *(undefined8 *)(param_1 + 0x2a) = *(undefined8 *)(param_2 + 0x2a);
  *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0x2e) = *(undefined8 *)(param_2 + 0x2e);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x2a) = 0;
  *(undefined8 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x32) = *(undefined8 *)(param_2 + 0x32);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  return;
}


// ===== 0084966c  FUN_0084966c =====

void FUN_0084966c(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(param_1 + 0xa8);
  if (pvVar3 != (void *)0x0) {
    pvVar1 = pvVar3;
    pvVar2 = *(void **)(param_1 + 0xb0);
    if (pvVar3 != *(void **)(param_1 + 0xb0)) {
      do {
        pvVar1 = (void *)((long)pvVar2 + -200);
        if (pvVar1 == (void *)0x0) goto LAB_0084977c;
        if (*(char *)((long)pvVar2 + -8) == '\x01') {
          FUN_007b6d78((long)pvVar2 + -0x68);
        }
        pvVar2 = pvVar1;
      } while (pvVar1 != pvVar3);
      pvVar1 = *(void **)(param_1 + 0xa8);
    }
    *(void **)(param_1 + 0xb0) = pvVar3;
    operator_delete(pvVar1);
  }
  if (*(long **)(param_1 + 0x90) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x90) + 8))();
  }
  pvVar3 = *(void **)(param_1 + 0x70);
  if (pvVar3 != (void *)0x0) {
    pvVar1 = pvVar3;
    pvVar2 = *(void **)(param_1 + 0x78);
    if (pvVar3 != *(void **)(param_1 + 0x78)) {
      do {
        pvVar1 = (void *)((long)pvVar2 + -0xa0);
        if (pvVar1 == (void *)0x0) {
LAB_0084977c:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        if (*(char *)((long)pvVar2 + -0x18) == '\x01') {
          FUN_007b6d78((long)pvVar2 + -0x78);
        }
        pvVar2 = pvVar1;
      } while (pvVar1 != pvVar3);
      pvVar1 = *(void **)(param_1 + 0x70);
    }
    *(void **)(param_1 + 0x78) = pvVar3;
    operator_delete(pvVar1);
  }
  if (*(long **)(param_1 + 0x68) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x68) + 8))();
  }
  FUN_007b6d78(param_1 + 8);
  return;
}


// ===== 00849790  FUN_00849790 =====

void FUN_00849790(undefined8 param_1,undefined4 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 ***pppuVar3;
  undefined8 uVar4;
  char *pcVar5;
  size_t sVar6;
  ulong uVar7;
  long lVar8;
  undefined8 **local_4a8;
  ulong uStack_4a0;
  byte bStack_491;
  undefined1 *local_490;
  undefined1 *puStack_488;
  undefined1 *local_480;
  undefined1 auStack_470 [1024];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  memset(auStack_470,0xaa,0x400);
  local_480 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_488 = &DAT_aaaaaaaaaaaaaaaa;
  local_490 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00622830(&local_490,auStack_470,0x400);
  uVar4 = FUN_006228b0(&local_490,"{codec_type: ",0xd);
  pcVar5 = (char *)FUN_007b8c54(*param_2);
  if (pcVar5 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string_view:278: libc++ Hardening assertion __s != nullptr failed: null pointer passed to non-null argument of char_traits<...>::length\n"
              );
  }
  sVar6 = strlen(pcVar5);
  FUN_006228b0(uVar4,pcVar5,sVar6);
  FUN_006228b0(&local_490,", content_type: ",0x10);
  if (param_2[0x22] == 0) {
    pcVar5 = "kRealtimeVideo";
    uVar4 = 0xe;
  }
  else {
    if (param_2[0x22] != 1) goto LAB_0084987c;
    pcVar5 = "kScreenshare";
    uVar4 = 0xc;
  }
  FUN_006228b0(&local_490,pcVar5,uVar4);
LAB_0084987c:
  uVar4 = FUN_006228b0(&local_490,", frame_drop_enabled: ",0x16);
  FUN_00622910(uVar4,*(undefined1 *)(param_2 + 0x23));
  FUN_006228b0(&local_490,", encoder_specific_settings: ",0x1d);
  pcVar5 = "NULL";
  if (*(long *)(param_2 + 0x24) != 0) {
    pcVar5 = "(ptr)";
  }
  uVar4 = 4;
  if (*(long *)(param_2 + 0x24) != 0) {
    uVar4 = 5;
  }
  FUN_006228b0(&local_490,pcVar5,uVar4);
  uVar4 = FUN_006228b0(&local_490,", min_transmit_bitrate_bps: ",0x1c);
  FUN_00622910(uVar4,param_2[0x26]);
  uVar4 = FUN_006228b0(&local_490,", number_of_streams: ",0x15);
  FUN_00622a20(uVar4,*(undefined8 *)(param_2 + 0x30));
  uVar4 = FUN_006228b0(&local_490,", legacy_conference_mode: ",0x1a);
  FUN_00622910(uVar4,*(undefined1 *)(param_2 + 0x32));
  uVar4 = FUN_006228b0(&local_490,", is_quality_scaling_allowed: ",0x1e);
  FUN_00622910(uVar4,*(undefined1 *)((long)param_2 + 0xc9));
  uVar4 = FUN_006228b0(&local_490,", max_qp: ",10);
  FUN_00622910(uVar4,param_2[0x33]);
  if (*(long *)(param_2 + 0x2c) != *(long *)(param_2 + 0x2a)) {
    lVar8 = 0;
    uVar7 = 0;
    do {
      uVar4 = FUN_006228b0(&local_490,", simulcast_layers[",0x13);
      uVar4 = FUN_00622a20(uVar4,uVar7);
      uVar4 = FUN_006228b0(uVar4,&DAT_0019e0be,3);
      if ((ulong)((*(long *)(param_2 + 0x2c) - *(long *)(param_2 + 0x2a) >> 3) * -0x70a3d70a3d70a3d7
                 ) <= uVar7) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                  );
      }
      FUN_008492c4(&local_4a8,*(long *)(param_2 + 0x2a) + lVar8);
      uVar1 = uStack_4a0;
      pppuVar3 = (undefined8 ***)local_4a8;
      if (-1 < (char)bStack_491) {
        uVar1 = (ulong)bStack_491;
        pppuVar3 = &local_4a8;
      }
      FUN_006228b0(uVar4,pppuVar3,uVar1);
      if ((char)bStack_491 < '\0') {
        operator_delete(local_4a8);
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 200;
    } while (uVar7 < (ulong)((*(long *)(param_2 + 0x2c) - *(long *)(param_2 + 0x2a) >> 3) *
                            -0x70a3d70a3d70a3d7));
  }
  FUN_00622844(&local_490,0x7d);
  FUN_005d3510(param_1,local_490);
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00849ac0  FUN_00849ac0 =====

byte FUN_00849ac0(long param_1)

{
  byte *pbVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0xa8);
  if (lVar2 == *(long *)(param_1 + 0xb0)) {
    return 0;
  }
  do {
    pbVar1 = (byte *)(lVar2 + 0x5c);
    if (lVar2 + 200 == *(long *)(param_1 + 0xb0)) break;
    lVar2 = lVar2 + 200;
  } while ((*pbVar1 & 1) == 0);
  return *pbVar1 & 1;
}


// ===== 00849afc  FUN_00849afc =====

bool FUN_00849afc(long param_1)

{
  long lVar1;
  long lVar2;
  double dVar3;
  
  lVar1 = *(long *)(param_1 + 0xa8);
  if (lVar1 != *(long *)(param_1 + 0xb0)) {
    do {
      lVar2 = lVar1 + 200;
      dVar3 = *(double *)(lVar1 + 0x20);
      lVar1 = lVar2;
    } while (dVar3 < 1.0 != NAN(dVar3) && lVar2 != *(long *)(param_1 + 0xb0));
    return dVar3 < 1.0 == NAN(dVar3);
  }
  return false;
}


// ===== 00849b38  FUN_00849b38 =====

void FUN_00849b38(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  FUN_007b69e0(param_1 + 2,param_2 + 2);
  puVar2 = *(undefined8 **)(param_2 + 0x1a);
  *(undefined8 **)(param_1 + 0x1a) = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)();
  }
  FUN_00849bd4(param_1 + 0x1c,param_2 + 0x1c);
  uVar1 = param_2[0x22];
  *(undefined1 *)(param_1 + 0x23) = *(undefined1 *)(param_2 + 0x23);
  param_1[0x22] = uVar1;
  puVar2 = *(undefined8 **)(param_2 + 0x24);
  *(undefined8 **)(param_1 + 0x24) = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)();
  }
  uVar3 = *(undefined8 *)(param_2 + 0x26);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x26) = uVar3;
  FUN_00849cd8(param_1 + 0x2a,param_2 + 0x2a);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x32) = *(undefined8 *)(param_2 + 0x32);
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  return;
}


// ===== 00849bd4  FUN_00849bd4 =====

void FUN_00849bd4(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined1 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  void *pvVar7;
  undefined8 extraout_x8;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar9 = *param_2;
  lVar1 = param_2[1];
  uVar3 = lVar1 - lVar9;
  if (uVar3 != 0) {
    if (0x199999999999999 < (ulong)(((long)uVar3 >> 5) * -0x3333333333333333)) {
      auVar18 = FUN_0084a068();
      puVar6 = auVar18._0_8_;
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      lVar9 = *auVar18._8_8_;
      lVar1 = auVar18._8_8_[1];
      uVar3 = lVar1 - lVar9;
      if (uVar3 != 0) {
        if (0x147ae147ae147ae < (ulong)(((long)uVar3 >> 3) * -0x70a3d70a3d70a3d7)) {
          auVar18 = FUN_006108c0();
          lVar9 = auVar18._0_8_;
          if (auVar18._8_8_ <
              (ulong)((*(long *)(lVar9 + 0xb0) - *(long *)(lVar9 + 0xa8) >> 3) * -0x70a3d70a3d70a3d7
                     )) {
            lVar8 = *(long *)(lVar9 + 0xa8) + auVar18._8_8_ * 200;
            lVar1 = lVar8 + 0x60;
            if (*(char *)(lVar8 + 0xc0) == '\0') {
              lVar1 = lVar9 + 8;
            }
            FUN_007b69e0(extraout_x8,lVar1);
            return;
          }
          FUN_007b69e0(extraout_x8,lVar9 + 8);
          return;
        }
        pvVar7 = operator_new(uVar3);
        lVar9 = lVar9 + 0x60;
        *puVar6 = pvVar7;
        puVar6[1] = pvVar7;
        puVar6[2] = (long)pvVar7 + uVar3;
        puVar5 = (undefined1 *)((long)pvVar7 + 0x60);
        do {
          puVar10 = puVar5;
          if ((undefined8 *)(puVar10 + -0x60) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          uVar13 = *(undefined8 *)(lVar9 + -0x40);
          uVar12 = *(undefined8 *)(lVar9 + -0x28);
          uVar11 = *(undefined8 *)(lVar9 + -0x30);
          uVar15 = *(undefined8 *)(lVar9 + -0x58);
          uVar14 = *(undefined8 *)(lVar9 + -0x60);
          uVar17 = *(undefined8 *)(lVar9 + -0x48);
          uVar16 = *(undefined8 *)(lVar9 + -0x50);
          *(undefined8 *)(puVar10 + -0x38) = *(undefined8 *)(lVar9 + -0x38);
          *(undefined8 *)(puVar10 + -0x40) = uVar13;
          *(undefined8 *)(puVar10 + -0x28) = uVar12;
          *(undefined8 *)(puVar10 + -0x30) = uVar11;
          *(undefined8 *)(puVar10 + -0x58) = uVar15;
          *(undefined8 *)(puVar10 + -0x60) = uVar14;
          *(undefined8 *)(puVar10 + -0x48) = uVar17;
          *(undefined8 *)(puVar10 + -0x50) = uVar16;
          uVar12 = *(undefined8 *)(lVar9 + -0xb);
          uVar11 = *(undefined8 *)(lVar9 + -0x13);
          uVar14 = *(undefined8 *)(lVar9 + -0x18);
          uVar13 = *(undefined8 *)(lVar9 + -0x20);
          *puVar10 = 0;
          puVar10[0x60] = 0;
          *(undefined8 *)(puVar10 + -0xb) = uVar12;
          *(undefined8 *)(puVar10 + -0x13) = uVar11;
          *(undefined8 *)(puVar10 + -0x18) = uVar14;
          *(undefined8 *)(puVar10 + -0x20) = uVar13;
          if (*(char *)(lVar9 + 0x60) == '\x01') {
            FUN_007b69e0(puVar10,lVar9);
            puVar10[0x60] = 1;
          }
          lVar8 = lVar9 + 0x68;
          lVar9 = lVar9 + 200;
          puVar5 = puVar10 + 200;
        } while (lVar8 != lVar1);
        puVar6[1] = puVar10 + 0x68;
      }
      return;
    }
    puVar6 = (undefined8 *)operator_new(uVar3);
    lVar9 = lVar9 + 0x28;
    *param_1 = puVar6;
    param_1[1] = puVar6;
    param_1[2] = (long)puVar6 + uVar3;
    do {
      if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      uVar12 = *(undefined8 *)(lVar9 + -0x20);
      uVar11 = *(undefined8 *)(lVar9 + -0x28);
      uVar14 = *(undefined8 *)(lVar9 + -0x10);
      uVar13 = *(undefined8 *)(lVar9 + -0x18);
      uVar2 = *(undefined1 *)(lVar9 + -8);
      *(undefined1 *)(puVar6 + 5) = 0;
      *(undefined1 *)(puVar6 + 4) = uVar2;
      puVar6[1] = uVar12;
      *puVar6 = uVar11;
      puVar6[3] = uVar14;
      puVar6[2] = uVar13;
      *(undefined1 *)(puVar6 + 0x11) = 0;
      if (*(char *)(lVar9 + 0x60) == '\x01') {
        FUN_007b69e0(puVar6 + 5,lVar9);
        *(undefined1 *)(puVar6 + 0x11) = 1;
      }
      puVar4 = (undefined8 *)(lVar9 + 0x70);
      uVar11 = *(undefined8 *)(lVar9 + 0x68);
      lVar8 = lVar9 + 0x78;
      lVar9 = lVar9 + 0xa0;
      puVar6[0x13] = *puVar4;
      puVar6[0x12] = uVar11;
      puVar6 = puVar6 + 0x14;
    } while (lVar8 != lVar1);
    param_1[1] = puVar6;
  }
  return;
}


// ===== 00849cd8  FUN_00849cd8 =====

void FUN_00849cd8(undefined8 *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined1 *puVar3;
  void *pvVar4;
  undefined8 extraout_x8;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar6 = *param_2;
  lVar1 = param_2[1];
  uVar2 = lVar1 - lVar6;
  if (uVar2 != 0) {
    if (0x147ae147ae147ae < (ulong)(((long)uVar2 >> 3) * -0x70a3d70a3d70a3d7)) {
      auVar15 = FUN_006108c0();
      lVar6 = auVar15._0_8_;
      if (auVar15._8_8_ <
          (ulong)((*(long *)(lVar6 + 0xb0) - *(long *)(lVar6 + 0xa8) >> 3) * -0x70a3d70a3d70a3d7)) {
        lVar5 = *(long *)(lVar6 + 0xa8) + auVar15._8_8_ * 200;
        lVar1 = lVar5 + 0x60;
        if (*(char *)(lVar5 + 0xc0) == '\0') {
          lVar1 = lVar6 + 8;
        }
        FUN_007b69e0(extraout_x8,lVar1);
        return;
      }
      FUN_007b69e0(extraout_x8,lVar6 + 8);
      return;
    }
    pvVar4 = operator_new(uVar2);
    lVar6 = lVar6 + 0x60;
    *param_1 = pvVar4;
    param_1[1] = pvVar4;
    param_1[2] = (long)pvVar4 + uVar2;
    puVar3 = (undefined1 *)((long)pvVar4 + 0x60);
    do {
      puVar7 = puVar3;
      if ((undefined8 *)(puVar7 + -0x60) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      uVar10 = *(undefined8 *)(lVar6 + -0x40);
      uVar9 = *(undefined8 *)(lVar6 + -0x28);
      uVar8 = *(undefined8 *)(lVar6 + -0x30);
      uVar12 = *(undefined8 *)(lVar6 + -0x58);
      uVar11 = *(undefined8 *)(lVar6 + -0x60);
      uVar14 = *(undefined8 *)(lVar6 + -0x48);
      uVar13 = *(undefined8 *)(lVar6 + -0x50);
      *(undefined8 *)(puVar7 + -0x38) = *(undefined8 *)(lVar6 + -0x38);
      *(undefined8 *)(puVar7 + -0x40) = uVar10;
      *(undefined8 *)(puVar7 + -0x28) = uVar9;
      *(undefined8 *)(puVar7 + -0x30) = uVar8;
      *(undefined8 *)(puVar7 + -0x58) = uVar12;
      *(undefined8 *)(puVar7 + -0x60) = uVar11;
      *(undefined8 *)(puVar7 + -0x48) = uVar14;
      *(undefined8 *)(puVar7 + -0x50) = uVar13;
      uVar9 = *(undefined8 *)(lVar6 + -0xb);
      uVar8 = *(undefined8 *)(lVar6 + -0x13);
      uVar11 = *(undefined8 *)(lVar6 + -0x18);
      uVar10 = *(undefined8 *)(lVar6 + -0x20);
      *puVar7 = 0;
      puVar7[0x60] = 0;
      *(undefined8 *)(puVar7 + -0xb) = uVar9;
      *(undefined8 *)(puVar7 + -0x13) = uVar8;
      *(undefined8 *)(puVar7 + -0x18) = uVar11;
      *(undefined8 *)(puVar7 + -0x20) = uVar10;
      if (*(char *)(lVar6 + 0x60) == '\x01') {
        FUN_007b69e0(puVar7,lVar6);
        puVar7[0x60] = 1;
      }
      lVar5 = lVar6 + 0x68;
      lVar6 = lVar6 + 200;
      puVar3 = puVar7 + 200;
    } while (lVar5 != lVar1);
    param_1[1] = puVar7 + 0x68;
  }
  return;
}


// ===== 00849dfc  FUN_00849dfc =====

void FUN_00849dfc(undefined8 param_1,long param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  
  if (param_3 < (ulong)((*(long *)(param_2 + 0xb0) - *(long *)(param_2 + 0xa8) >> 3) *
                       -0x70a3d70a3d70a3d7)) {
    lVar2 = *(long *)(param_2 + 0xa8) + param_3 * 200;
    lVar1 = lVar2 + 0x60;
    if (*(char *)(lVar2 + 0xc0) == '\0') {
      lVar1 = param_2 + 8;
    }
    FUN_007b69e0(param_1,lVar1);
    return;
  }
  FUN_007b69e0(param_1,param_2 + 8);
  return;
}


// ===== 00849e58  FUN_00849e58 =====

void FUN_00849e58(long *param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  iVar1 = *param_2;
  if (iVar1 < 3) {
    if (iVar1 == 1) {
      uVar2 = FUN_007b8c80(param_2);
      lVar3 = 0x20;
    }
    else {
      if (iVar1 != 2) {
        return;
      }
      uVar2 = FUN_007b8c98(param_2);
      lVar3 = 0x28;
    }
  }
  else if (iVar1 == 3) {
    uVar2 = FUN_007b8cc8(param_2);
    lVar3 = 0x30;
  }
  else if (iVar1 == 5) {
    uVar2 = FUN_007b8cd4(param_2);
    lVar3 = 0x40;
  }
  else {
    if (iVar1 != 4) {
      return;
    }
    uVar2 = FUN_007b8cb0(param_2);
    lVar3 = 0x38;
  }
                    /* WARNING: Could not recover jumptable at 0x00849f18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + lVar3))(param_1,uVar2);
  return;
}


// ===== 00849f2c  FUN_00849f2c =====

void FUN_00849f2c(void)

{
  return;
}


// ===== 00849f34  FUN_00849f34 =====

void FUN_00849f34(void)

{
  return;
}


// ===== 00849f3c  FUN_00849f3c =====

void FUN_00849f3c(void)

{
  return;
}


// ===== 00849f44  FUN_00849f44 =====

void FUN_00849f44(void)

{
  return;
}


// ===== 00849f4c  FUN_00849f4c =====

void FUN_00849f4c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_00d3a1f8;
  uVar1 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar1;
  return;
}


// ===== 00849f68  FUN_00849f68 =====

void FUN_00849f68(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[1] = *(undefined8 *)(param_1 + 0x10);
  *param_2 = uVar1;
  return;
}


// ===== 00849f78  FUN_00849f78 =====

void FUN_00849f78(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_00d3a250;
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 1);
  param_1[1] = uVar1;
  return;
}


// ===== 00849f9c  FUN_00849f9c =====

void FUN_00849f9c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x10);
  *param_2 = uVar1;
  return;
}


// ===== 00849fb4  FUN_00849fb4 =====

void FUN_00849fb4(void)

{
  return;
}


// ===== 00849fbc  FUN_00849fbc =====

void FUN_00849fbc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = &PTR_FUN_00d3a2a8;
  param_1[1] = *param_2;
  return;
}


// ===== 00849fd8  FUN_00849fd8 =====

void FUN_00849fd8(long param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 8);
  return;
}


// ===== 00849fe8  FUN_00849fe8 =====

void FUN_00849fe8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_00d3a300;
  uVar1 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar1;
  return;
}


// ===== 0084a004  FUN_0084a004 =====

void FUN_0084a004(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[1] = *(undefined8 *)(param_1 + 0x10);
  *param_2 = uVar1;
  return;
}


// ===== 0084a014  FUN_0084a014 =====

void FUN_0084a014(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = &PTR_FUN_00d3a358;
  param_1[1] = *param_2;
  return;
}


// ===== 0084a030  FUN_0084a030 =====

void FUN_0084a030(long param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 8);
  return;
}


// ===== 0084a040  FUN_0084a040 =====

void FUN_0084a040(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x84a048);
  (*pcVar1)();
}


// ===== 0084a048  FUN_0084a048 =====

void FUN_0084a048(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x84a050);
  (*pcVar1)();
}


// ===== 0084a050  FUN_0084a050 =====

void FUN_0084a050(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x84a058);
  (*pcVar1)();
}


// ===== 0084a058  FUN_0084a058 =====

void FUN_0084a058(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x84a060);
  (*pcVar1)();
}


// ===== 0084a060  FUN_0084a060 =====

void FUN_0084a060(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x84a068);
  (*pcVar1)();
}


// ===== 0084a068  FUN_0084a068 =====

void FUN_0084a068(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 0084a080  FUN_0084a080 =====

void FUN_0084a080(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *param_1 = 48000;
  *(undefined8 *)(param_1 + 2) = 200;
  return;
}


// ===== 0084a09c  FUN_0084a09c =====

void FUN_0084a09c(void)

{
  return;
}


// ===== 0084a0a4  FUN_0084a0a4 =====

void FUN_0084a0a4(char *param_1,undefined4 *param_2)

{
  char *pcVar1;
  ulong uVar2;
  char *pcVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  size_t __n;
  char *pcVar8;
  char *local_470;
  undefined1 *puStack_468;
  undefined1 *local_460;
  undefined1 auStack_458 [1024];
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  memset(auStack_458,0xaa,0x400);
  local_460 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_468 = &DAT_aaaaaaaaaaaaaaaa;
  local_470 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00622830(&local_470,auStack_458,0x400);
  uVar6 = FUN_006228b0(&local_470,"sample_rate_hz=",0xf);
  uVar6 = FUN_00622910(uVar6,*param_2);
  uVar6 = FUN_006228b0(uVar6,", max_packets_in_buffer=",0x18);
  uVar6 = FUN_00622a20(uVar6,*(undefined8 *)(param_2 + 2));
  uVar6 = FUN_006228b0(uVar6,", min_delay_ms=",0xf);
  uVar6 = FUN_00622910(uVar6,param_2[5]);
  uVar7 = FUN_006228b0(uVar6,", enable_fast_accelerate=",0x19);
  pcVar1 = "false";
  pcVar8 = "true";
  uVar6 = 4;
  pcVar3 = pcVar8;
  if (*(char *)(param_2 + 6) == '\0') {
    uVar6 = 5;
    pcVar3 = pcVar1;
  }
  uVar6 = FUN_006228b0(uVar7,pcVar3,uVar6);
  uVar7 = FUN_006228b0(uVar6,", enable_muted_state=",0x15);
  uVar6 = 4;
  pcVar3 = pcVar8;
  if (*(char *)((long)param_2 + 0x19) == '\0') {
    uVar6 = 5;
    pcVar3 = pcVar1;
  }
  uVar6 = FUN_006228b0(uVar7,pcVar3,uVar6);
  uVar7 = FUN_006228b0(uVar6,", enable_rtx_handling=",0x16);
  uVar6 = 4;
  if (*(char *)((long)param_2 + 0x1a) == '\0') {
    uVar6 = 5;
    pcVar8 = pcVar1;
  }
  FUN_006228b0(uVar7,pcVar8,uVar6);
  pcVar1 = local_470;
  if (local_470 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string:1063: libc++ Hardening assertion __s != nullptr failed: basic_string(const char*) detected nullptr\n"
              );
  }
  __n = strlen(local_470);
  if (0x7ffffffffffffff6 < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (__n < 0x17) {
    param_1[0x17] = (char)__n;
    pcVar8 = param_1;
  }
  else {
    uVar2 = (__n & 0x7ffffffffffffff8) + 8;
    uVar4 = 0x19;
    if (uVar2 != 0x18) {
      uVar4 = uVar2;
    }
    pcVar8 = (char *)operator_new(uVar4);
    *(char **)param_1 = pcVar8;
    *(size_t *)(param_1 + 8) = __n;
    *(ulong *)(param_1 + 0x10) = uVar4 | 0x8000000000000000;
  }
  if (pcVar8 + __n < pcVar8) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
  if ((pcVar8 <= pcVar1) && (pcVar1 < pcVar8 + __n)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
  memmove(pcVar8,pcVar1,__n);
  pcVar8[__n] = '\0';
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0084a2d4  FUN_0084a2d4 =====

void FUN_0084a2d4(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[2];
  param_1[2] = 0;
  *param_1 = &PTR_FUN_00d3a3b0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0084a2fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}


// ===== 0084a304  FUN_0084a304 =====

void FUN_0084a304(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x84a30c);
  (*pcVar1)();
}


// ===== 0084a30c  FUN_0084a30c =====

void FUN_0084a30c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[2] = param_2;
  param_1[3] = param_3;
  *param_1 = &PTR_FUN_00d3a3b0;
  param_1[1] = param_2;
  return;
}


// ===== 0084a324  FUN_0084a324 =====

undefined8 * FUN_0084a324(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *local_78 [2];
  code *local_68;
  undefined *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar6 = *(long **)(param_1 + 0x10);
  if (plVar6 == (long *)0x0) {
    plVar6 = *(long **)(param_1 + 8);
    plVar7 = *(long **)(param_1 + 0x18);
    puVar3 = (undefined8 *)operator_new(0x38);
    puVar8 = (undefined *)param_2[3];
    uVar1 = *param_2;
    uVar4 = param_2[1];
    uVar10 = param_2[3];
    uVar9 = param_2[2];
    if (*(long *)(puVar8 + 8) != 0) {
      param_2[2] = 0;
      param_2[3] = &DAT_001fbc50;
      if (*(long *)(puVar8 + 8) != 0) {
        puVar8 = &DAT_001fbc50;
      }
    }
    *puVar3 = uVar1;
    puVar3[1] = uVar4;
    puVar3[3] = uVar10;
    puVar3[2] = uVar9;
    puVar3[4] = plVar6;
    puVar3[5] = 0;
    uVar4 = (**(code **)(*plVar7 + 0x10))(plVar7,"AsyncAudioProcessing",0x14,0);
    puVar3[6] = uVar4;
    local_68 = FUN_0084a794;
    local_60 = &DAT_0021f2e0;
    local_78[0] = puVar3;
    (**(code **)(*plVar6 + 0x18))(plVar6,local_78);
    if (*(code **)(local_60 + 8) != (code *)0x0) {
      (**(code **)(local_60 + 8))(local_78[0]);
    }
    pcVar5 = *(code **)(puVar8 + 8);
  }
  else {
    plVar7 = *(long **)(param_1 + 0x18);
    puVar3 = (undefined8 *)operator_new(0x38);
    *(undefined8 *)(param_1 + 0x10) = 0;
    puVar8 = (undefined *)param_2[3];
    uVar1 = *param_2;
    uVar4 = param_2[1];
    uVar10 = param_2[3];
    uVar9 = param_2[2];
    if (*(long *)(puVar8 + 8) != 0) {
      param_2[2] = 0;
      param_2[3] = &DAT_001fbc50;
      if (*(long *)(puVar8 + 8) != 0) {
        puVar8 = &DAT_001fbc50;
      }
    }
    *puVar3 = uVar1;
    puVar3[1] = uVar4;
    puVar3[3] = uVar10;
    puVar3[2] = uVar9;
    puVar3[4] = plVar6;
    puVar3[5] = plVar6;
    uVar4 = (**(code **)(*plVar7 + 0x10))(plVar7,"AsyncAudioProcessing",0x14,0);
    puVar3[6] = uVar4;
    local_68 = FUN_0084a8ec;
    local_60 = &DAT_0021f300;
    local_78[0] = puVar3;
    (**(code **)(*plVar6 + 0x18))(plVar6,local_78);
    if (*(code **)(local_60 + 8) != (code *)0x0) {
      (**(code **)(local_60 + 8))(local_78[0]);
    }
    pcVar5 = *(code **)(puVar8 + 8);
  }
  if (pcVar5 != (code *)0x0) {
    (*pcVar5)(uVar1);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0084a518  FUN_0084a518 =====

void FUN_0084a518(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 auStack_78 [2];
  code *local_68;
  undefined *local_60;
  undefined8 local_58 [2];
  code *local_48;
  undefined *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)param_1[5];
  if (plVar2 == (long *)0x0) {
    local_68 = FUN_0084a784;
    local_60 = &DAT_001fbc50;
    puVar3 = auStack_78;
    (**(code **)(*(long *)param_1[4] + 0x18))((long *)param_1[4],auStack_78);
    pcVar4 = *(code **)(local_60 + 8);
  }
  else {
    puVar3 = local_58;
    local_48 = FUN_0084a784;
    local_40 = &DAT_001fbc50;
    (**(code **)(*plVar2 + 0x18))(plVar2,local_58);
    pcVar4 = *(code **)(local_40 + 8);
  }
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(*puVar3);
  }
  puVar3 = (undefined8 *)param_1[6];
  param_1[6] = 0;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)();
  }
  plVar2 = (long *)param_1[5];
  param_1[5] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (*(code **)(param_1[3] + 8) != (code *)0x0) {
    (**(code **)(param_1[3] + 8))(*param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0084a630  FUN_0084a630 =====

void FUN_0084a630(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  long local_b0 [2];
  code *local_a0;
  code *pcStack_98;
  undefined1 uStack_81;
  long local_80;
  undefined8 uStack_78;
  long local_70 [2];
  code *local_60;
  code *pcStack_58;
  undefined8 local_50;
  undefined1 uStack_41;
  long local_40;
  undefined8 uStack_38;
  code *local_30;
  code *pcStack_28;
  
  plVar2 = local_b0;
  plVar1 = *(long **)(param_1 + 0x30);
  local_80 = param_1;
  local_40 = param_1;
  uStack_38 = param_2;
  if (*(long *)(param_1 + 0x28) == 0) {
    uStack_78 = 0;
    local_a0 = FUN_0084aac4;
    pcStack_98 = FUN_0084aaa4;
    local_b0[1] = 0;
    local_50 = 0;
    local_b0[0] = param_1;
    FUN_005d6c5c((ulong)local_b0 | 8);
    pcStack_28 = pcStack_98;
    local_30 = local_a0;
    local_a0 = FUN_00433984;
    pcStack_98 = (code *)0x0;
    (**(code **)(*plVar1 + 8))(plVar1,&local_40,&uStack_41,&uStack_81);
    (*local_30)(0,&local_40,&local_40);
    pcVar3 = local_a0;
  }
  else {
    uStack_78 = 0;
    local_60 = FUN_0084aa64;
    pcStack_58 = FUN_0084aa44;
    local_70[1] = 0;
    local_50 = 0;
    local_70[0] = param_1;
    FUN_005d6c5c((ulong)local_70 | 8);
    pcStack_28 = pcStack_58;
    local_30 = local_60;
    local_60 = FUN_00433984;
    pcStack_58 = (code *)0x0;
    (**(code **)(*plVar1 + 8))(plVar1,&local_40,&uStack_41,&uStack_81);
    (*local_30)(0,&local_40,&local_40);
    plVar2 = local_70;
    pcVar3 = local_60;
  }
  (*pcVar3)(0,plVar2,plVar2);
  FUN_005d6c5c(&uStack_78);
  FUN_005d6c5c(&local_50);
  return;
}


// ===== 0084a784  FUN_0084a784 =====

void FUN_0084a784(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005dc0b4();
}


// ===== 0084a794  FUN_0084a794 =====

void FUN_0084a794(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined1 uStack_81;
  long local_80;
  undefined8 uStack_78;
  long local_70 [2];
  code *local_60;
  code *pcStack_58;
  undefined8 local_50;
  undefined1 uStack_41;
  long local_40;
  undefined8 uStack_38;
  code *local_30;
  code *pcStack_28;
  
  uStack_38 = *param_2;
  *param_2 = 0;
  local_80 = *param_1;
  plVar1 = *(long **)(local_80 + 0x30);
  uStack_78 = 0;
  local_70[1] = 0;
  local_50 = 0;
  local_60 = FUN_0084a8ac;
  pcStack_58 = FUN_0084a868;
  local_70[0] = local_80;
  local_40 = local_80;
  FUN_005d6c5c((ulong)local_70 | 8);
  pcStack_28 = pcStack_58;
  local_30 = local_60;
  local_60 = FUN_00433984;
  pcStack_58 = (code *)0x0;
  (**(code **)(*plVar1 + 8))(plVar1,&local_40,&uStack_41,&uStack_81);
  (*local_30)(0,&local_40,&local_40);
  (*local_60)(0,local_70,local_70);
  FUN_005d6c5c(&uStack_78);
  FUN_005d6c5c(&local_50);
  return;
}


// ===== 0084a868  FUN_0084a868 =====

void FUN_0084a868(long *param_1)

{
  long local_18;
  
  local_18 = param_1[1];
  param_1[1] = 0;
  (**(code **)(*param_1 + 0x10))(*param_1,&local_18);
  FUN_005d6c5c(&local_18);
  return;
}


// ===== 0084a8ac  FUN_0084a8ac =====

void FUN_0084a8ac(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
    uVar2 = param_2[1];
    param_2[1] = 0;
    param_3[1] = uVar2;
    FUN_005d6c5c(param_2 + 1);
    return;
  }
  if ((param_1 & 0xff) == 0) {
    FUN_005d6c5c(param_2 + 1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x84a8ec);
  (*pcVar1)();
}


// ===== 0084a8ec  FUN_0084a8ec =====

void FUN_0084a8ec(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined1 uStack_81;
  long local_80;
  undefined8 uStack_78;
  long local_70 [2];
  code *local_60;
  code *pcStack_58;
  undefined8 local_50;
  undefined1 uStack_41;
  long local_40;
  undefined8 uStack_38;
  code *local_30;
  code *pcStack_28;
  
  uStack_38 = *param_2;
  *param_2 = 0;
  local_80 = *param_1;
  plVar1 = *(long **)(local_80 + 0x30);
  uStack_78 = 0;
  local_70[1] = 0;
  local_50 = 0;
  local_60 = FUN_0084aa04;
  pcStack_58 = FUN_0084a9c0;
  local_70[0] = local_80;
  local_40 = local_80;
  FUN_005d6c5c((ulong)local_70 | 8);
  pcStack_28 = pcStack_58;
  local_30 = local_60;
  local_60 = FUN_00433984;
  pcStack_58 = (code *)0x0;
  (**(code **)(*plVar1 + 8))(plVar1,&local_40,&uStack_41,&uStack_81);
  (*local_30)(0,&local_40,&local_40);
  (*local_60)(0,local_70,local_70);
  FUN_005d6c5c(&uStack_78);
  FUN_005d6c5c(&local_50);
  return;
}


// ===== 0084a9c0  FUN_0084a9c0 =====

void FUN_0084a9c0(long *param_1)

{
  long local_18;
  
  local_18 = param_1[1];
  param_1[1] = 0;
  (**(code **)(*param_1 + 0x10))(*param_1,&local_18);
  FUN_005d6c5c(&local_18);
  return;
}


// ===== 0084aa04  FUN_0084aa04 =====

void FUN_0084aa04(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
    uVar2 = param_2[1];
    param_2[1] = 0;
    param_3[1] = uVar2;
    FUN_005d6c5c(param_2 + 1);
    return;
  }
  if ((param_1 & 0xff) == 0) {
    FUN_005d6c5c(param_2 + 1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x84aa44);
  (*pcVar1)();
}


// ===== 0084aa44  FUN_0084aa44 =====

void FUN_0084aa44(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = param_1[1];
  plVar2 = *(long **)(*param_1 + 0x28);
  param_1[1] = 0;
                    /* WARNING: Could not recover jumptable at 0x0084aa60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
  return;
}


// ===== 0084aa64  FUN_0084aa64 =====

void FUN_0084aa64(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
    uVar2 = param_2[1];
    param_2[1] = 0;
    param_3[1] = uVar2;
    FUN_005d6c5c(param_2 + 1);
    return;
  }
  if ((param_1 & 0xff) == 0) {
    FUN_005d6c5c(param_2 + 1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x84aaa4);
  (*pcVar1)();
}


// ===== 0084aaa4  FUN_0084aaa4 =====

void FUN_0084aaa4(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = param_1[1];
  plVar2 = *(long **)(*param_1 + 0x20);
  param_1[1] = 0;
                    /* WARNING: Could not recover jumptable at 0x0084aac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
  return;
}


// ===== 0084aac4  FUN_0084aac4 =====

void FUN_0084aac4(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
    uVar2 = param_2[1];
    param_2[1] = 0;
    param_3[1] = uVar2;
    FUN_005d6c5c(param_2 + 1);
    return;
  }
  if ((param_1 & 0xff) == 0) {
    FUN_005d6c5c(param_2 + 1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x84ab04);
  (*pcVar1)();
}


// ===== 0084ab04  FUN_0084ab04 =====

int FUN_0084ab04(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 *local_8;
  
  *param_1 = param_2;
  local_8 = &DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_8);
  pthread_mutex_init((pthread_mutex_t *)(param_1 + 1),(pthread_mutexattr_t *)&local_8);
  iVar1 = pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_8);
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[6] = 0x8000000000000000;
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
  return iVar1;
}


// ===== 0084ab88  FUN_0084ab88 =====

ulong FUN_0084ab88(ulong param_1,uint *param_2,long param_3)

{
  if (param_3 != 0) {
    param_1 = (ulong)*param_2;
  }
  return param_1;
}


// ===== 0084ab98  FUN_0084ab98 =====

int FUN_0084ab98(long *param_1,undefined8 *param_2,int param_3,int param_4,uint param_5,
                long *param_6)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined4 uVar11;
  long lVar12;
  
  lVar6 = (**(code **)(*(long *)*param_2 + 0x10))();
  plVar1 = param_2 + 0xc;
  if ((*(byte *)(param_2 + 0xd) & 1) == 0) {
    if (plVar1 == (long *)0x0) goto LAB_0084b22c;
    param_2[0xc] = lVar6;
    *(undefined1 *)(param_2 + 0xd) = 1;
  }
  pthread_mutex_lock((pthread_mutex_t *)(param_2 + 1));
  if ((*(byte *)(param_6 + 3) & 1) == 0) {
    if (((((lVar6 == 0x7fffffffffffffff) || (lVar7 = param_2[6], lVar7 == -0x8000000000000000)) ||
         ((lVar6 != -0x8000000000000000 &&
          ((lVar7 != 0x7fffffffffffffff && (5000000 < lVar6 - lVar7)))))) ||
        (*(int *)(param_2 + 7) != param_3)) ||
       (((int)param_5 < 1 || (*(uint *)(param_2 + 8) != param_5)))) {
      *(undefined1 *)param_1 = 0;
      param_2[6] = 0x8000000000000000;
      *(undefined1 *)(param_1 + 3) = 0;
    }
    else {
      lVar6 = param_2[9];
      lVar7 = param_2[10];
      lVar12 = 0;
      if ((ulong)param_5 != 0) {
        lVar12 = (long)((ulong)(uint)(param_4 - *(int *)((long)param_2 + 0x3c)) << 0x20) /
                 (long)(ulong)param_5;
      }
      *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 0xb);
      *(undefined1 *)(param_1 + 3) = 1;
      *param_1 = lVar12 + lVar6;
      param_1[1] = lVar7;
    }
    goto LAB_0084b1f8;
  }
  *(int *)(param_2 + 7) = param_3;
  *(int *)((long)param_2 + 0x3c) = param_4;
  *(uint *)(param_2 + 8) = param_5;
  if ((*(byte *)(param_6 + 3) & 1) == 0) goto LAB_0084b240;
  lVar7 = param_6[2];
  lVar9 = param_6[1];
  lVar12 = *param_6;
  param_2[6] = lVar6;
  param_2[0xb] = lVar7;
  param_2[10] = lVar9;
  param_2[9] = lVar12;
  if ((*(byte *)(param_2 + 0x11) & 1) == 0) {
    lVar7 = DAT_00d80388;
    if (DAT_00d80388 == 0) {
      lVar7 = FUN_006660d0("WebRTC.Call.AbsCapture.ExtensionWait",0x24,1,1000000,0x32);
      FUN_00d0f5e0(0,lVar7,&DAT_00d80388);
      if (lVar7 != 0) goto LAB_0084ac84;
    }
    else {
LAB_0084ac84:
      if ((*(byte *)(param_2 + 0xd) & 1) == 0) goto LAB_0084b254;
      uVar10 = 0x7fffffffffffffff;
      if (lVar6 == 0x7fffffffffffffff) {
LAB_0084acc4:
        uVar8 = uVar10 / 1000;
        if (499 < uVar10 % 1000) {
          uVar8 = uVar8 + 1;
        }
      }
      else {
        lVar12 = *plVar1;
        uVar8 = 0x8000000000000000;
        if ((lVar12 == -0x8000000000000000) ||
           (((lVar6 != -0x8000000000000000 && (lVar12 != 0x7fffffffffffffff)) &&
            (uVar8 = lVar6 - lVar12, uVar10 = uVar8, -1 < (long)uVar8)))) goto LAB_0084acc4;
        uVar8 = -(-uVar8 / 1000) - (ulong)(500 < -uVar8 % 1000);
      }
      FUN_00666568(lVar7,uVar8);
    }
    if (*(char *)(param_2 + 0x11) == '\x01') {
      param_2[0x10] = lVar6;
    }
    else {
      if (param_2 + 0x10 == (long *)0x0) goto LAB_0084b22c;
      param_2[0x10] = lVar6;
      *(undefined1 *)(param_2 + 0x11) = 1;
    }
  }
  lVar7 = (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,lVar6);
  if ((*(byte *)(param_6 + 3) & 1) == 0) goto LAB_0084b218;
  lVar12 = (long)((double)(lVar7 - *param_6) * 0.00023283064365386963);
  lVar7 = DAT_00d80390;
  if (DAT_00d80390 == 0) {
    lVar7 = FUN_006660d0("WebRTC.Call.AbsCapture.Delta",0x1c,1,1000000000,0x32);
    FUN_00d0f5e0(0,lVar7,&DAT_00d80390);
    if (lVar7 != 0) goto LAB_0084ae8c;
  }
  else {
LAB_0084ae8c:
    lVar9 = -lVar12;
    if (-1 < lVar12) {
      lVar9 = lVar12;
    }
    FUN_00666568(lVar7,lVar9);
  }
  plVar2 = param_2 + 0x12;
  if (*(char *)(param_2 + 0x13) == '\x01') {
    lVar7 = DAT_00d80398;
    if (DAT_00d80398 == 0) {
      lVar7 = FUN_006660d0("WebRTC.Call.AbsCapture.DeltaDeviation",0x25,1,1000000000,0x32);
      FUN_00d0f5e0(0,lVar7,&DAT_00d80398);
      if (lVar7 == 0) goto LAB_0084af40;
    }
    if ((*(byte *)(param_2 + 0x13) & 1) == 0) goto LAB_0084b254;
    uVar11 = 0xffffffff;
    if ((lVar12 != 0x7fffffffffffffff) && (lVar9 = *plVar2, lVar9 != -0x8000000000000000)) {
      lVar3 = lVar12 - lVar9;
      lVar4 = -lVar3;
      if (-1 < lVar3) {
        lVar4 = lVar3;
      }
      uVar11 = 0;
      if (lVar9 != 0x7fffffffffffffff && lVar12 != -0x8000000000000000) {
        uVar11 = (undefined4)lVar4;
      }
    }
    FUN_00666568(lVar7,uVar11);
  }
LAB_0084af40:
  if (*(char *)(param_2 + 0x13) == '\x01') {
    *plVar2 = lVar12;
  }
  else {
    if (plVar2 == (long *)0x0) goto LAB_0084b22c;
    param_2[0x12] = lVar12;
    *(undefined1 *)(param_2 + 0x13) = 1;
  }
  if ((*(byte *)(param_6 + 3) & 1) == 0) goto LAB_0084b218;
  if ((char)param_6[2] == '\x01') {
    if ((*(byte *)(param_2 + 0xf) & 1) == 0) {
      lVar7 = DAT_00d803a0;
      if (DAT_00d803a0 == 0) {
        lVar7 = FUN_006660d0("WebRTC.Call.AbsCapture.OffsetWait",0x21,1,1000000,0x32);
        FUN_00d0f5e0(0,lVar7,&DAT_00d803a0);
        if (lVar7 != 0) goto LAB_0084afcc;
      }
      else {
LAB_0084afcc:
        if ((*(byte *)(param_2 + 0xd) & 1) == 0) goto LAB_0084b254;
        uVar10 = 0x7fffffffffffffff;
        if (lVar6 == 0x7fffffffffffffff) {
LAB_0084b00c:
          uVar8 = uVar10 / 1000;
          if (499 < uVar10 % 1000) {
            uVar8 = uVar8 + 1;
          }
        }
        else {
          lVar12 = *plVar1;
          uVar8 = 0x8000000000000000;
          if ((lVar12 == -0x8000000000000000) ||
             (((lVar6 != -0x8000000000000000 && (lVar12 != 0x7fffffffffffffff)) &&
              (uVar8 = lVar6 - lVar12, uVar10 = uVar8, -1 < (long)uVar8)))) goto LAB_0084b00c;
          uVar8 = -(-uVar8 / 1000) - (ulong)(500 < -uVar8 % 1000);
        }
        FUN_00666568(lVar7,uVar8);
      }
      if (*(char *)(param_2 + 0xf) == '\x01') {
        param_2[0xe] = lVar6;
      }
      else {
        if (param_2 + 0xe == (long *)0x0) goto LAB_0084b22c;
        param_2[0xe] = lVar6;
        *(undefined1 *)(param_2 + 0xf) = 1;
      }
    }
    if ((*(byte *)(param_6 + 3) & 1) == 0) {
LAB_0084b218:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1054: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                );
    }
    if ((*(byte *)(param_6 + 2) & 1) == 0) {
LAB_0084b240:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    lVar7 = (long)((double)param_6[1] * 0.00023283064365386963);
    lVar6 = DAT_00d803a8;
    if (DAT_00d803a8 == 0) {
      lVar6 = FUN_006660d0("WebRTC.Call.AbsCapture.Offset",0x1d,1,1000000000,0x32);
      FUN_00d0f5e0(0,lVar6,&DAT_00d803a8);
      if (lVar6 != 0) goto LAB_0084b118;
    }
    else {
LAB_0084b118:
      lVar12 = -lVar7;
      if (-1 < lVar7) {
        lVar12 = lVar7;
      }
      FUN_00666568(lVar6,lVar12);
    }
    plVar1 = param_2 + 0x14;
    if (*(char *)(param_2 + 0x15) == '\x01') {
      lVar6 = DAT_00d803b0;
      if (DAT_00d803b0 == 0) {
        lVar6 = FUN_006660d0("WebRTC.Call.AbsCapture.OffsetDeviation",0x26,1,1000000000,0x32);
        FUN_00d0f5e0(0,lVar6,&DAT_00d803b0);
        if (lVar6 == 0) goto LAB_0084b1cc;
      }
      if ((*(byte *)(param_2 + 0x15) & 1) == 0) {
LAB_0084b254:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                  );
      }
      uVar11 = 0xffffffff;
      if ((lVar7 != 0x7fffffffffffffff) && (lVar12 = *plVar1, lVar12 != -0x8000000000000000)) {
        lVar4 = lVar7 - lVar12;
        lVar9 = -lVar4;
        if (-1 < lVar4) {
          lVar9 = lVar4;
        }
        uVar11 = 0;
        if (lVar12 != 0x7fffffffffffffff && lVar7 != -0x8000000000000000) {
          uVar11 = (undefined4)lVar9;
        }
      }
      FUN_00666568(lVar6,uVar11);
    }
LAB_0084b1cc:
    if (*(char *)(param_2 + 0x15) == '\x01') {
      *plVar1 = lVar7;
    }
    else {
      if (plVar1 == (long *)0x0) {
LAB_0084b22c:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      param_2[0x14] = lVar7;
      *(undefined1 *)(param_2 + 0x15) = 1;
    }
  }
  lVar6 = *param_6;
  lVar12 = param_6[3];
  lVar7 = param_6[2];
  param_1[1] = param_6[1];
  *param_1 = lVar6;
  param_1[3] = lVar12;
  param_1[2] = lVar7;
LAB_0084b1f8:
  iVar5 = pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 1));
  return iVar5;
}


// ===== 0084b268  FUN_0084b268 =====

long FUN_0084b268(int param_1,int param_2,int param_3,long param_4)

{
  long lVar1;
  
  lVar1 = 0;
  if ((long)param_2 != 0) {
    lVar1 = (long)((ulong)(uint)(param_1 - param_3) << 0x20) / (long)param_2;
  }
  return lVar1 + param_4;
}


// ===== 0084b284  FUN_0084b284 =====

undefined1  [16] FUN_0084b284(long *param_1,long param_2,uint param_3)

{
  undefined1 auVar1 [16];
  
  if (((param_3 & 1) != 0) && ((char)param_1[1] == '\x01')) {
    auVar1._8_8_ = 1;
    auVar1._0_8_ = *param_1 + param_2;
    return auVar1;
  }
  return ZEXT816(0);
}


// ===== 0084b2b4  FUN_0084b2b4 =====

undefined1  [16] FUN_0084b2b4(long param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  
  if ((param_2 & 1) != 0) {
    auVar1._0_8_ = (long)((double)param_1 * 2.3283064365386963e-07) * 1000;
    auVar1._8_8_ = 1;
    return auVar1;
  }
  return ZEXT816(0);
}


// ===== 0084b2f0  FUN_0084b2f0 =====

void FUN_0084b2f0(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}


// ===== 0084b300  FUN_0084b300 =====

void FUN_0084b300(uint param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  
  if (param_1 < 6) {
    puVar2 = (&PTR_PTR_FUN_00d3a3d0)[param_1];
    puVar1 = (undefined8 *)operator_new(8);
    *puVar1 = puVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061ff28();
}


// ===== 0084b344  FUN_0084b344 =====

void FUN_0084b344(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  
  *param_1 = param_3;
  param_1[1] = param_4;
  uVar1 = FUN_0084bf00(param_3,param_4);
  *(undefined8 *)(param_1 + 10) = param_5;
  *(undefined8 *)(param_1 + 0xc) = param_2;
  *(undefined8 *)(param_1 + 2) = uVar1;
  *(undefined4 **)(param_1 + 4) = param_1 + 4;
  *(undefined4 **)(param_1 + 6) = param_1 + 4;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0x8000000000000000;
  return;
}


// ===== 0084b3ac  FUN_0084b3ac =====

void FUN_0084b3ac(long param_1)

{
  long *plVar1;
  long *plVar2;
  void *pvVar3;
  long *plVar4;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    plVar1 = *(long **)(param_1 + 0x18);
    plVar2 = *(long **)(*(long *)(param_1 + 0x10) + 8);
    *(long **)(*plVar1 + 8) = plVar2;
    *plVar2 = *plVar1;
    *(undefined8 *)(param_1 + 0x20) = 0;
    while (plVar1 != (long *)(param_1 + 0x10)) {
      plVar2 = plVar1 + 2;
      if (plVar2 == (long *)0x0) {
LAB_0084b48c:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      pvVar3 = (void *)*plVar2;
      plVar4 = (long *)plVar1[1];
      *plVar2 = 0;
      if (pvVar3 != (void *)0x0) {
        FUN_0084bc1c(pvVar3);
        operator_delete(pvVar3);
      }
      if (plVar1 == (long *)0x0) goto LAB_0084b48c;
      operator_delete(plVar1);
      plVar1 = plVar4;
    }
  }
  pvVar3 = *(void **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (pvVar3 == (void *)0x0) {
    return;
  }
  FUN_0084bd28(pvVar3);
  operator_delete(pvVar3);
  return;
}


// ===== 0084b4a0  FUN_0084b4a0 =====

void FUN_0084b4a0(undefined8 param_1,long param_2)

{
  void *pvVar1;
  
  if (((*(byte *)(param_2 + 0x80) & 1) == 0) &&
     (pvVar1 = (void *)FUN_0084b504(), pvVar1 != (void *)0x0)) {
    FUN_0084b7f8(param_1,pvVar1);
    FUN_0084bc00(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 0084b504  FUN_0084b504 =====

int * FUN_0084b504(int *param_1,long param_2)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  int iVar5;
  int *piVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  void *pvVar10;
  long lVar11;
  undefined8 uVar12;
  void *pvVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 *local_e0;
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
  piVar6 = (int *)operator_new(0x30);
  FUN_0084bbd0();
  iVar5 = *(int *)(param_2 + 0xc);
  iVar2 = *param_1;
  uVar15 = *(undefined8 *)(param_2 + 0x28);
  uVar14 = *(undefined8 *)(param_2 + 0x20);
  *(undefined2 *)(piVar6 + 1) = *(undefined2 *)(param_2 + 4);
  uVar12 = *(undefined8 *)(param_2 + 0x2f);
  *piVar6 = iVar5;
  *(undefined8 *)((long)piVar6 + 0x12) = uVar15;
  *(undefined8 *)((long)piVar6 + 10) = uVar14;
  *(undefined8 *)((long)piVar6 + 0x19) = uVar12;
  if (iVar5 == iVar2) {
    if (0x13 < *(ulong *)(param_2 + 0x18)) {
      lVar11 = *(long *)(param_1 + 0x14);
      *(undefined1 *)(piVar6 + 2) = 1;
      *(long *)(param_1 + 0x14) = lVar11 + 1;
      plVar8 = (long *)operator_new(0x28);
      FUN_0084bae8();
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
      plVar9 = *(long **)(piVar6 + 10);
      *(long **)(piVar6 + 10) = plVar8;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x18))();
      }
      FUN_007b53e4(&local_f8,param_2 + 0x58);
      lVar11 = *(long *)(param_2 + 0x10);
      puVar1 = *(undefined1 **)(param_2 + 0x18);
      puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
      local_e0 = &DAT_aaaaaaaaaaaaaaaa;
      local_d0 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_007b53e4(&local_e0,&local_f8);
      puVar4 = local_e0;
      local_e0 = (undefined1 *)0x0;
      puStack_d8 = puStack_d8 + lVar11;
      lVar11 = *(long *)(piVar6 + 10);
      pvVar13 = *(void **)(lVar11 + 8);
      *(undefined1 **)(lVar11 + 8) = puVar4;
      local_d0 = puVar1;
      if ((pvVar13 != (void *)0x0) &&
         (iVar5 = FUN_00d0f7a0(0xffffffff,(long)pvVar13 + 0x18), iVar5 == 1)) {
        pvVar10 = *(void **)((long)pvVar13 + 0x10);
        *(undefined8 *)((long)pvVar13 + 0x10) = 0;
        if (pvVar10 != (void *)0x0) {
          operator_delete__(pvVar10);
        }
        operator_delete(pvVar13);
      }
      *(undefined1 **)(lVar11 + 0x10) = puStack_d8;
      *(undefined1 **)(lVar11 + 0x18) = local_d0;
      *(undefined8 *)((ulong)&local_e0 | 8) = 0;
      ((undefined8 *)((ulong)&local_e0 | 8))[1] = 0;
      FUN_007b5554(&local_e0);
      FUN_007b5554(&local_f8);
LAB_0084b7b8:
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
      goto LAB_0084b7c4;
    }
    uVar7 = FUN_004022fc();
    if ((uVar7 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../modules/rtp_rtcp/source/flexfec_receiver.cc",0x382,
                   "Truncated FlexFEC packet, discarding.");
    }
  }
  else if (iVar5 == param_1[1]) {
    *(undefined1 *)(piVar6 + 2) = 0;
    plVar8 = (long *)operator_new(0x28);
    FUN_0084bae8();
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
    plVar9 = *(long **)(piVar6 + 10);
    *(long **)(piVar6 + 10) = plVar8;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x18))();
    }
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
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
    puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
    local_e0 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_007dc0a0(&local_e0,param_2);
    FUN_007dac40(&local_e0);
    FUN_007b53e4(&local_f8,&puStack_88);
    uVar12 = local_f8;
    lVar11 = *(long *)(piVar6 + 10);
    local_f8 = 0;
    pvVar13 = *(void **)(lVar11 + 8);
    *(undefined8 *)(lVar11 + 8) = uVar12;
    if ((pvVar13 != (void *)0x0) &&
       (iVar5 = FUN_00d0f7a0(0xffffffff,(long)pvVar13 + 0x18), iVar5 == 1)) {
      pvVar10 = *(void **)((long)pvVar13 + 0x10);
      *(undefined8 *)((long)pvVar13 + 0x10) = 0;
      if (pvVar10 != (void *)0x0) {
        operator_delete__(pvVar10);
      }
      operator_delete(pvVar13);
    }
    *(undefined8 *)(lVar11 + 0x10) = local_f0;
    *(undefined8 *)(lVar11 + 0x18) = local_e8;
    local_f0 = 0;
    local_e8 = 0;
    FUN_007b5554(&local_f8);
    FUN_007dc1b4(&local_e0);
    goto LAB_0084b7b8;
  }
  if (piVar6 != (int *)0x0) {
    FUN_0084bc00(piVar6);
    operator_delete(piVar6);
    piVar6 = (int *)0x0;
  }
LAB_0084b7c4:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return piVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0084b7f8  FUN_0084b7f8 =====

void FUN_0084b7f8(long param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong unaff_x24;
  uint uVar10;
  ulong unaff_x28;
  undefined1 uStack_191;
  char *local_190;
  ulong uStack_188;
  undefined1 *local_180;
  char *local_178;
  char **ppcStack_170;
  ulong local_168;
  char **ppcStack_160;
  char *local_158;
  ulong *puStack_150;
  ulong local_148;
  char **ppcStack_140;
  char *local_138;
  ulong *puStack_130;
  undefined1 auStack_128 [24];
  undefined1 *local_110;
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
  undefined8 uStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  lVar5 = FUN_0084df04(*(undefined8 *)(param_1 + 8),param_2,param_1 + 0x10);
  if (lVar5 != 0) {
    for (lVar5 = *(long *)(param_1 + 0x18); lVar5 != param_1 + 0x10; lVar5 = *(long *)(lVar5 + 8)) {
      if (*(long *)(lVar5 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0061fd88("../../modules/rtp_rtcp/source/flexfec_receiver.cc",0xa8,"recovered_packet",
                     &DAT_001f5fa0);
      }
      if ((*(byte *)(*(long *)(lVar5 + 0x10) + 9) & 1) == 0) {
        *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + 1;
        *(undefined1 *)(*(long *)(lVar5 + 0x10) + 9) = 1;
        uVar7 = *(ulong *)(*(long *)(*(long *)(lVar5 + 0x10) + 0x10) + 0x18);
        if (uVar7 < 0xc) {
                    /* WARNING: Subroutine does not return */
          FUN_0061fd88("../../modules/rtp_rtcp/source/flexfec_receiver.cc",0xb0,
                       "recovered_packet->pkt->data.size() >= kRtpHeaderSize",&DAT_001fbca2,uVar7,
                       0xc);
        }
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
        uStack_98 = &DAT_aaaaaaaaaaaaaaaa;
        local_a0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
        local_90 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
        local_110 = &DAT_aaaaaaaaaaaaaaaa;
        FUN_007dc060(&local_110,param_2 + 10,0x8000000000000000);
        FUN_007b53e4(auStack_128,*(long *)(*(long *)(lVar5 + 0x10) + 0x10) + 8);
        uVar7 = FUN_007da648(&local_110,auStack_128);
        FUN_007b5554(auStack_128);
        if ((uVar7 & 1) != 0) {
          local_90 = (undefined1 *)CONCAT71(local_90._1_7_,1);
          uStack_98 = (undefined1 *)CONCAT44(90000,(undefined4)uStack_98);
          (**(code **)**(undefined8 **)(param_1 + 0x28))
                    (*(undefined8 **)(param_1 + 0x28),&local_110);
          lVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x10))();
          if ((lVar6 == 0x7fffffffffffffff) ||
             (lVar8 = *(long *)(param_1 + 0x38), lVar8 == -0x8000000000000000)) {
            FUN_00623870();
            uVar10 = 1;
          }
          else {
            lVar9 = lVar6 - lVar8;
            bVar2 = lVar8 != 0x7fffffffffffffff;
            bVar3 = lVar6 != -0x8000000000000000;
            uVar10 = (uint)(((bVar2 && bVar3) && lVar9 != 10000000) &&
                           ((lVar8 == 0x7fffffffffffffff || lVar6 == -0x8000000000000000) ||
                           9999999 < lVar9));
            iVar4 = FUN_00623870();
            if (((!bVar2 || !bVar3) || lVar9 < 0x989681) && (0 < iVar4)) goto LAB_0084b860;
          }
          uVar7 = FUN_00623b7c(uVar10);
          if ((uVar7 & 1) == 0) {
            uStack_188 = (ulong)(uVar10 | 0x610);
            local_190 = "../../modules/rtp_rtcp/source/flexfec_receiver.cc";
            local_180 = &uStack_191;
            unaff_x28 = unaff_x28 & 0xffffffff00000000 | (ulong)puStack_108 >> 0x20;
            ppcStack_160 = &local_178;
            unaff_x24 = unaff_x24 & 0xffffffff00000000 | (ulong)local_110 >> 0x20 & 0xffff;
            puStack_150 = &local_168;
            ppcStack_170 = &local_190;
            local_158 = " seq ";
            ppcStack_140 = &local_158;
            local_178 = "Recovered media packet with SSRC: ";
            puStack_130 = &local_148;
            local_138 = " recovered length ";
            local_168 = unaff_x28;
            local_148 = unaff_x24;
            FUN_00623bb0(&DAT_0021f320,"../../modules/rtp_rtcp/source/flexfec_receiver.cc",
                         uVar10 | 0x610);
          }
          if (uVar10 != 0) {
            *(long *)(param_1 + 0x38) = lVar6;
          }
        }
LAB_0084b860:
        FUN_007dc1b4(&local_110);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0084bae8  FUN_0084bae8 =====

void FUN_0084bae8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3a410;
  FUN_007b545c(param_1 + 1,0);
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


// ===== 0084bb24  FUN_0084bb24 =====

void FUN_0084bb24(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3a410;
  FUN_007b5554(param_1 + 1);
  return;
}


// ===== 0084bb38  FUN_0084bb38 =====

void FUN_0084bb38(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3a410;
  FUN_007b5554(param_1 + 1);
  operator_delete(param_1);
  return;
}


// ===== 0084bb74  FUN_0084bb74 =====

void FUN_0084bb74(long param_1)

{
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  return;
}


// ===== 0084bb8c  FUN_0084bb8c =====

int FUN_0084bb8c(long *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[4] + -1;
  *(int *)(param_1 + 4) = iVar1;
  if ((param_1 != (long *)0x0) && (iVar1 == 0)) {
    (**(code **)(*param_1 + 8))();
  }
  return iVar1;
}


// ===== 0084bbd0  FUN_0084bbd0 =====

void FUN_0084bbd0(long param_1)

{
  FUN_007d87d8(param_1 + 10);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}


// ===== 0084bc00  FUN_0084bc00 =====

void FUN_0084bc00(long param_1)

{
  if (*(long **)(param_1 + 0x28) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0084bc14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x28) + 0x18))();
    return;
  }
  return;
}


// ===== 0084bc1c  FUN_0084bc1c =====

void FUN_0084bc1c(long param_1)

{
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0084bc30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x10) + 0x18))();
    return;
  }
  return;
}


// ===== 0084bc38  FUN_0084bc38 =====

void FUN_0084bc38(long param_1)

{
  long *plVar1;
  long *plVar2;
  void *pvVar3;
  long *plVar4;
  
  if (*(long **)(param_1 + 0xa0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xa0) + 0x18))();
  }
  if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x38));
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    plVar1 = *(long **)(param_1 + 0x10);
    plVar2 = *(long **)(*(long *)(param_1 + 8) + 8);
    *(long **)(*plVar1 + 8) = plVar2;
    *plVar2 = *plVar1;
    *(undefined8 *)(param_1 + 0x18) = 0;
    while (plVar1 != (long *)(param_1 + 8)) {
      plVar2 = plVar1 + 2;
      if (plVar2 == (long *)0x0) {
LAB_0084bd14:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      pvVar3 = (void *)*plVar2;
      plVar4 = (long *)plVar1[1];
      *plVar2 = 0;
      if (pvVar3 != (void *)0x0) {
        if (*(long **)((long)pvVar3 + 8) != (long *)0x0) {
          (**(code **)(**(long **)((long)pvVar3 + 8) + 0x18))();
        }
        operator_delete(pvVar3);
      }
      if (plVar1 == (long *)0x0) goto LAB_0084bd14;
      operator_delete(plVar1);
      plVar1 = plVar4;
    }
  }
  return;
}


// ===== 0084bd28  FUN_0084bd28 =====

void FUN_0084bd28(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  FUN_0084e050(param_1 + 0x30);
  puVar4 = *(undefined8 **)(param_1 + 0x18);
  if (puVar4 != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_1 + 0x20);
    puVar1 = puVar4;
    if (puVar4 != puVar3) {
      do {
        puVar3 = puVar3 + -5;
        if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        (**(code **)*puVar3)(puVar3);
      } while (puVar3 != puVar4);
      puVar1 = *(undefined8 **)(param_1 + 0x18);
    }
    *(undefined8 **)(param_1 + 0x20) = puVar4;
    operator_delete(puVar1);
  }
  plVar2 = *(long **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = *(long **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (plVar2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0084bdd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 8))();
  return;
}


// ===== 0084be04  FUN_0084be04 =====

undefined4 *
FUN_0084be04(undefined4 param_1,undefined8 param_2,uint param_3,undefined4 param_4,uint param_5,
            undefined4 param_6,long *param_7)

{
  undefined8 *puVar1;
  long lVar2;
  ushort uVar3;
  long lVar4;
  code *pcVar5;
  undefined4 uVar6;
  int iVar7;
  void *pvVar8;
  void *pvVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined4 extraout_w1;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  ulong uVar18;
  long lVar19;
  uint uVar20;
  long lVar21;
  ulong uVar22;
  long *plVar23;
  undefined1 auVar24 [16];
  undefined8 uStack_228;
  long lStack_220;
  long lStack_218;
  undefined1 *puStack_210;
  undefined1 *puStack_208;
  undefined1 *puStack_200;
  undefined1 *puStack_1f8;
  undefined1 *puStack_1f0;
  undefined1 *puStack_1e8;
  undefined1 *puStack_1e0;
  undefined1 *puStack_1d8;
  undefined1 *puStack_1d0;
  undefined1 *puStack_1c8;
  undefined1 *puStack_1c0;
  undefined1 *puStack_1b8;
  undefined1 *puStack_1b0;
  undefined1 *puStack_1a8;
  undefined1 *puStack_1a0;
  undefined1 *puStack_198;
  undefined1 *puStack_190;
  undefined1 *puStack_188;
  undefined1 *puStack_180;
  undefined1 *puStack_178;
  undefined1 *puStack_170;
  undefined1 *puStack_168;
  undefined1 *puStack_160;
  undefined1 *puStack_158;
  undefined1 *puStack_150;
  undefined1 *puStack_148;
  undefined1 *puStack_140;
  undefined1 *puStack_138;
  undefined1 *puStack_130;
  undefined1 *puStack_128;
  undefined1 *puStack_120;
  undefined1 *puStack_118;
  undefined1 *puStack_110;
  undefined1 *puStack_108;
  undefined1 *puStack_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  long lStack_e8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined1 *puStack_70;
  code *pcStack_68;
  
  pvVar8 = operator_new(0x18);
  FUN_008774e8();
  pvVar9 = operator_new(0x20);
  FUN_00877644();
  puVar10 = (undefined4 *)operator_new(0x290);
  uVar15 = *(ulong *)((long)pvVar9 + 0x10);
  *puVar10 = param_1;
  puVar10[1] = param_1;
  *(void **)(puVar10 + 2) = pvVar8;
  *(void **)(puVar10 + 4) = pvVar9;
  *(undefined8 *)(puVar10 + 8) = 0;
  *(undefined8 *)(puVar10 + 10) = 0;
  *(undefined8 *)(puVar10 + 6) = 0;
  if (uVar15 != 0) {
    if (0x666666666666666 < uVar15) {
      uVar6 = FUN_0084e038();
      pcStack_68 = FUN_0084bf00;
      puStack_70 = &stack0xffffffffffffffd0;
      pvVar8 = operator_new(0x18);
      FUN_0084e104();
      pvVar9 = operator_new(0x20);
      FUN_0084e464();
      puVar10 = (undefined4 *)operator_new(0x290);
      uVar15 = *(ulong *)((long)pvVar9 + 0x10);
      *puVar10 = uVar6;
      puVar10[1] = extraout_w1;
      *(void **)(puVar10 + 2) = pvVar8;
      *(void **)(puVar10 + 4) = pvVar9;
      *(undefined8 *)(puVar10 + 8) = 0;
      *(undefined8 *)(puVar10 + 10) = 0;
      *(undefined8 *)(puVar10 + 6) = 0;
      if (uVar15 != 0) {
        if (0x666666666666666 < uVar15) {
          auVar24 = FUN_0084e038();
          lVar16 = auVar24._8_8_;
          lVar12 = auVar24._0_8_;
          pcStack_c8 = FUN_0084c008;
          lVar4 = tpidr_el0;
          lStack_e8 = *(long *)(lVar4 + 0x28);
          uVar15 = *(ulong *)(lVar16 + 0x10);
          uVar22 = *(ulong *)(*(long *)(lVar12 + 0x10) + 8);
          if (uVar22 < uVar15) {
            puStack_d0 = (undefined1 *)&puStack_70;
            uVar13 = FUN_004022fc();
            if ((uVar13 & 1) == 0) {
              FUN_00623bb0(&DAT_001f4ef8,"../../modules/rtp_rtcp/source/forward_error_correction.cc"
                           ,0x412,"Can\'t protect ",uVar15," media packets per frame. Max is ",
                           uVar22,&DAT_001ea377);
              uVar20 = 0xffffffff;
            }
            else {
LAB_0084c2b4:
              uVar20 = 0xffffffff;
            }
          }
          else {
            puStack_d0 = (undefined1 *)&puStack_70;
            for (lVar21 = *(long *)(lVar16 + 8); lVar21 != lVar16; lVar21 = *(long *)(lVar21 + 8)) {
              uVar22 = *(ulong *)(*(long *)(lVar21 + 0x10) + 0x18);
              if (uVar22 < 0xc) {
                uVar15 = FUN_004022fc();
                if ((uVar15 & 1) != 0) goto LAB_0084c2b4;
                FUN_00623bb0(&DAT_001f6d4b,
                             "../../modules/rtp_rtcp/source/forward_error_correction.cc",0x462,
                             "Media packet ",*(undefined8 *)(*(long *)(lVar21 + 0x10) + 0x18),
                             " bytes is smaller than RTP header.");
                uVar20 = 0xffffffff;
                goto LAB_0084c524;
              }
              if (((uVar22 + *(long *)(*(long *)(lVar12 + 0x10) + 0x18)) - 0x5c1 <
                   0xfffffffffffffa23) && (uVar22 = FUN_004022fc(), (uVar22 & 1) == 0)) {
                FUN_00623bb0(&DAT_00214e2d,
                             "../../modules/rtp_rtcp/source/forward_error_correction.cc",0x4a2,
                             "Media packet ",*(undefined8 *)(*(long *)(lVar21 + 0x10) + 0x18),
                             " bytes with overhead is larger than ",0x5dc," bytes.");
              }
            }
            uVar20 = (int)((int)uVar15 * (param_3 & 0xff) + 0x80) >> 8;
            if (uVar20 == 0 && (param_3 & 0xff) != 0) {
              uVar20 = 1;
            }
            uVar22 = (ulong)uVar20;
            if (uVar20 == 0) {
              uVar20 = 0;
            }
            else {
              if ((int)uVar20 < 1) {
                uVar22 = (ulong)(int)uVar20;
              }
              else {
                lVar21 = 0;
                uVar13 = 0;
                do {
                  uVar18 = (*(long *)(lVar12 + 0x20) - *(long *)(lVar12 + 0x18) >> 3) *
                           -0x3333333333333333;
                  if (uVar18 < uVar13 || uVar18 - uVar13 == 0) goto LAB_0084c55c;
                  FUN_007b5880(*(long *)(lVar12 + 0x18) + lVar21 + 8,0x5dc);
                  uVar18 = (*(long *)(lVar12 + 0x20) - *(long *)(lVar12 + 0x18) >> 3) *
                           -0x3333333333333333;
                  if (uVar18 < uVar13 || uVar18 - uVar13 == 0) goto LAB_0084c55c;
                  lVar2 = *(long *)(lVar12 + 0x18) + lVar21;
                  plVar23 = (long *)(lVar2 + 8);
                  if (*plVar23 == 0) {
                    pvVar8 = (void *)0x0;
                  }
                  else {
                    FUN_007b5788(plVar23,*(long *)(*plVar23 + 8) - *(long *)(lVar2 + 0x10));
                    pvVar8 = (void *)(*(long *)(*plVar23 + 0x10) + *(long *)(lVar2 + 0x10));
                  }
                  memset(pvVar8,0,0x5dc);
                  uVar18 = (*(long *)(lVar12 + 0x20) - *(long *)(lVar12 + 0x18) >> 3) *
                           -0x3333333333333333;
                  if (uVar18 < uVar13 || uVar18 - uVar13 == 0) goto LAB_0084c55c;
                  FUN_007b5678(*(long *)(lVar12 + 0x18) + lVar21 + 8,0);
                  lVar2 = *(long *)(lVar12 + 0x18);
                  uVar18 = (*(long *)(lVar12 + 0x20) - lVar2 >> 3) * -0x3333333333333333;
                  if (uVar18 < uVar13 || uVar18 - uVar13 == 0) goto LAB_0084c55c;
                  plVar23 = (long *)operator_new(0x18);
                  if (plVar23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    std::__Cr::__libcpp_verbose_abort
                              ("%s",
                               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                              );
                  }
                  lVar19 = *param_7;
                  lVar2 = lVar2 + lVar21;
                  lVar21 = lVar21 + 0x28;
                  plVar23[1] = (long)param_7;
                  plVar23[2] = lVar2;
                  uVar13 = uVar13 + 1;
                  *plVar23 = lVar19;
                  *(long **)(lVar19 + 8) = plVar23;
                  *param_7 = (long)plVar23;
                  param_7[2] = param_7[2] + 1;
                } while ((uVar22 + (ulong)uVar20 * 4) * 8 - lVar21 != 0);
              }
              puStack_188 = &DAT_aaaaaaaaaaaaaaaa;
              puStack_190 = &DAT_aaaaaaaaaaaaaaaa;
              puStack_178 = &DAT_aaaaaaaaaaaaaaaa;
              puStack_180 = &DAT_aaaaaaaaaaaaaaaa;
              puStack_168 = &DAT_aaaaaaaaaaaaaaaa;
              puStack_170 = &DAT_aaaaaaaaaaaaaaaa;
              puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
              puStack_160 = &DAT_aaaaaaaaaaaaaaaa;
              puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
              puStack_150 = &DAT_aaaaaaaaaaaaaaaa;
              puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
              puStack_140 = &DAT_aaaaaaaaaaaaaaaa;
              puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
              puStack_130 = &DAT_aaaaaaaaaaaaaaaa;
              puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
              puStack_120 = &DAT_aaaaaaaaaaaaaaaa;
              puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
              puStack_110 = &DAT_aaaaaaaaaaaaaaaa;
              puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
              puStack_100 = &DAT_aaaaaaaaaaaaaaaa;
              puStack_198 = &DAT_aaaaaaaaaaaaaaaa;
              puStack_1a0 = &DAT_aaaaaaaaaaaaaaaa;
              puStack_1f8 = &DAT_aaaaaaaaaaaaaaaa;
              puStack_200 = &DAT_aaaaaaaaaaaaaaaa;
              puStack_1e8 = &DAT_aaaaaaaaaaaaaaaa;
              puStack_1f0 = &DAT_aaaaaaaaaaaaaaaa;
              puStack_1d8 = &DAT_aaaaaaaaaaaaaaaa;
              puStack_1e0 = &DAT_aaaaaaaaaaaaaaaa;
              puStack_1c8 = &DAT_aaaaaaaaaaaaaaaa;
              puStack_1d0 = &DAT_aaaaaaaaaaaaaaaa;
              puStack_1b8 = &DAT_aaaaaaaaaaaaaaaa;
              puStack_1c0 = &DAT_aaaaaaaaaaaaaaaa;
              puStack_1a8 = &DAT_aaaaaaaaaaaaaaaa;
              puStack_1b0 = &DAT_aaaaaaaaaaaaaaaa;
              puStack_208 = &DAT_aaaaaaaaaaaaaaaa;
              puStack_210 = &DAT_aaaaaaaaaaaaaaaa;
              puStack_f0 = &DAT_aaaaaaaaaaaaaaaa;
              FUN_0084e858(&puStack_210,param_6,uVar15 & 0xffffffff);
              lVar21 = FUN_0084eac8(uVar15);
              *(long *)(lVar12 + 0x288) = lVar21;
              memset((void *)(lVar12 + 0x48),0,lVar21 * uVar22);
              FUN_0084ec60(uVar15 & 0xffffffff,uVar20,param_4,param_5 & 1,&puStack_210,lVar12 + 0x48
                          );
              iVar7 = FUN_0084c5e4(lVar12,lVar16,uVar22);
              if (iVar7 < 0) {
                uVar15 = FUN_00417e08();
                if ((uVar15 & 1) == 0) {
                  FUN_00623bb0(&DAT_001f4e98,
                               "../../modules/rtp_rtcp/source/forward_error_correction.cc",0x591,
                               "Due to sequence number gaps, cannot protect media packets with a single block of FEC packets."
                              );
                }
                if (param_7[2] != 0) {
                  plVar23 = (long *)param_7[1];
                  plVar17 = *(long **)(*param_7 + 8);
                  *(long **)(*plVar23 + 8) = plVar17;
                  *plVar17 = *plVar23;
                  param_7[2] = 0;
                  while (plVar23 != param_7) {
                    if ((plVar23 == (long *)0xfffffffffffffff0) || (plVar23 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
                      std::__Cr::__libcpp_verbose_abort
                                ("%s",
                                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                                );
                    }
                    plVar17 = (long *)plVar23[1];
                    operator_delete(plVar23);
                    plVar23 = plVar17;
                  }
                }
                uVar20 = 0xffffffff;
              }
              else {
                uVar14 = FUN_0084eac8(iVar7);
                *(undefined8 *)(lVar12 + 0x288) = uVar14;
                FUN_0084c844(lVar12,lVar16,uVar22);
                if (*(long *)(lVar16 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                  std::__Cr::__libcpp_verbose_abort
                            ("%s",
                             "gen/third_party/libc++/src/include/list:834: libc++ Hardening assertion !empty() failed: list::front called on empty list\n"
                            );
                }
                lVar16 = *(long *)(*(long *)(lVar16 + 8) + 0x10);
                lVar21 = *(long *)(lVar16 + 8);
                uVar20 = uRam0000000000000008;
                if ((lVar21 == 0) ||
                   (uVar20 = *(uint *)(*(long *)(lVar21 + 0x10) + *(long *)(lVar16 + 0x10) + 8),
                   lVar21 == 0)) {
                  lVar16 = 0;
                }
                else {
                  lVar16 = *(long *)(lVar21 + 0x10) + *(long *)(lVar16 + 0x10);
                }
                uVar3 = *(ushort *)(lVar16 + 2);
                lVar16 = 0;
                uVar15 = 0;
                uVar20 = (uVar20 & 0xff00ff00) >> 8 | (uVar20 & 0xff00ff) << 8;
                do {
                  lVar21 = *(long *)(lVar12 + 0x288);
                  uStack_228 = CONCAT26(0xaaaa,CONCAT24(uVar3 >> 8 |
                                                        (ushort)((uVar3 & 0xff00ff) << 8),
                                                        uVar20 >> 0x10 | uVar20 << 0x10));
                  if (0x120 < lVar21 * uVar15) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(0x5512,0x84c5b0);
                    (*pcVar5)();
                  }
                  lStack_220 = 0;
                  if (lVar21 != 0) {
                    lStack_220 = lVar12 + 0x48 + lVar21 * uVar15;
                  }
                  lStack_218 = lVar21;
                  if ((ulong)((*(long *)(lVar12 + 0x20) - *(long *)(lVar12 + 0x18) >> 3) *
                             -0x3333333333333333) <= uVar15) {
LAB_0084c55c:
                    /* WARNING: Subroutine does not return */
                    std::__Cr::__libcpp_verbose_abort
                              ("%s",
                               "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                              );
                  }
                  (**(code **)(**(long **)(lVar12 + 0x10) + 0x20))
                            (*(long **)(lVar12 + 0x10),&uStack_228,1,
                             *(long *)(lVar12 + 0x18) + lVar16);
                  uVar15 = uVar15 + 1;
                  lVar16 = lVar16 + 0x28;
                } while (uVar22 != uVar15);
                uVar20 = 0;
              }
              FUN_0084e884(&puStack_210);
            }
          }
LAB_0084c524:
          if (*(long *)(lVar4 + 0x28) != lStack_e8) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return (undefined4 *)(ulong)uVar20;
        }
        puVar11 = (undefined8 *)operator_new(uVar15 * 0x28);
        puVar1 = puVar11 + uVar15 * 5;
        *(undefined8 **)(puVar10 + 6) = puVar11;
        *(undefined8 **)(puVar10 + 10) = puVar1;
        do {
          if (puVar11 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          *puVar11 = &PTR_FUN_00d3a410;
          FUN_007b545c(puVar11 + 1,0);
          *(undefined4 *)(puVar11 + 4) = 0;
          puVar11 = puVar11 + 5;
        } while (puVar11 != puVar1);
        *(undefined8 **)(puVar10 + 8) = puVar1;
      }
      *(undefined8 *)(puVar10 + 0x10) = 0;
      *(undefined4 **)(puVar10 + 0xc) = puVar10 + 0xc;
      *(undefined4 **)(puVar10 + 0xe) = puVar10 + 0xc;
      *(undefined8 *)(puVar10 + 0xa2) = 0;
      return puVar10;
    }
    puVar11 = (undefined8 *)operator_new(uVar15 * 0x28);
    puVar1 = puVar11 + uVar15 * 5;
    *(undefined8 **)(puVar10 + 6) = puVar11;
    *(undefined8 **)(puVar10 + 10) = puVar1;
    do {
      if (puVar11 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *puVar11 = &PTR_FUN_00d3a410;
      FUN_007b545c(puVar11 + 1,0);
      *(undefined4 *)(puVar11 + 4) = 0;
      puVar11 = puVar11 + 5;
    } while (puVar11 != puVar1);
    *(undefined8 **)(puVar10 + 8) = puVar1;
  }
  *(undefined8 *)(puVar10 + 0x10) = 0;
  *(undefined4 **)(puVar10 + 0xc) = puVar10 + 0xc;
  *(undefined4 **)(puVar10 + 0xe) = puVar10 + 0xc;
  *(undefined8 *)(puVar10 + 0xa2) = 0;
  return puVar10;
}


// ===== 0084bf00  FUN_0084bf00 =====

undefined4 *
FUN_0084bf00(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4,uint param_5,
            undefined4 param_6,long *param_7)

{
  undefined8 *puVar1;
  long lVar2;
  ushort uVar3;
  long lVar4;
  code *pcVar5;
  int iVar6;
  void *pvVar7;
  void *pvVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  ulong uVar21;
  long *plVar22;
  undefined1 auVar23 [16];
  undefined8 uStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  undefined1 *puStack_1e0;
  undefined1 *puStack_1d8;
  undefined1 *puStack_1d0;
  undefined1 *puStack_1c8;
  undefined1 *puStack_1c0;
  undefined1 *puStack_1b8;
  undefined1 *puStack_1b0;
  undefined1 *puStack_1a8;
  undefined1 *puStack_1a0;
  undefined1 *puStack_198;
  undefined1 *puStack_190;
  undefined1 *puStack_188;
  undefined1 *puStack_180;
  undefined1 *puStack_178;
  undefined1 *puStack_170;
  undefined1 *puStack_168;
  undefined1 *puStack_160;
  undefined1 *puStack_158;
  undefined1 *puStack_150;
  undefined1 *puStack_148;
  undefined1 *puStack_140;
  undefined1 *puStack_138;
  undefined1 *puStack_130;
  undefined1 *puStack_128;
  undefined1 *puStack_120;
  undefined1 *puStack_118;
  undefined1 *puStack_110;
  undefined1 *puStack_108;
  undefined1 *puStack_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  undefined1 *puStack_e8;
  undefined1 *puStack_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  undefined1 *puStack_c0;
  long lStack_b8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  
  pvVar7 = operator_new(0x18);
  FUN_0084e104();
  pvVar8 = operator_new(0x20);
  FUN_0084e464();
  puVar9 = (undefined4 *)operator_new(0x290);
  uVar14 = *(ulong *)((long)pvVar8 + 0x10);
  *puVar9 = param_1;
  puVar9[1] = param_2;
  *(void **)(puVar9 + 2) = pvVar7;
  *(void **)(puVar9 + 4) = pvVar8;
  *(undefined8 *)(puVar9 + 8) = 0;
  *(undefined8 *)(puVar9 + 10) = 0;
  *(undefined8 *)(puVar9 + 6) = 0;
  if (uVar14 != 0) {
    if (0x666666666666666 < uVar14) {
      auVar23 = FUN_0084e038();
      lVar15 = auVar23._8_8_;
      lVar11 = auVar23._0_8_;
      pcStack_98 = FUN_0084c008;
      lVar4 = tpidr_el0;
      lStack_b8 = *(long *)(lVar4 + 0x28);
      uVar14 = *(ulong *)(lVar15 + 0x10);
      uVar21 = *(ulong *)(*(long *)(lVar11 + 0x10) + 8);
      if (uVar21 < uVar14) {
        puStack_a0 = &stack0xffffffffffffffc0;
        uVar12 = FUN_004022fc();
        if ((uVar12 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4ef8,"../../modules/rtp_rtcp/source/forward_error_correction.cc",
                       0x412,"Can\'t protect ",uVar14," media packets per frame. Max is ",uVar21,
                       &DAT_001ea377);
          uVar19 = 0xffffffff;
        }
        else {
LAB_0084c2b4:
          uVar19 = 0xffffffff;
        }
      }
      else {
        puStack_a0 = &stack0xffffffffffffffc0;
        for (lVar20 = *(long *)(lVar15 + 8); lVar20 != lVar15; lVar20 = *(long *)(lVar20 + 8)) {
          uVar21 = *(ulong *)(*(long *)(lVar20 + 0x10) + 0x18);
          if (uVar21 < 0xc) {
            uVar14 = FUN_004022fc();
            if ((uVar14 & 1) != 0) goto LAB_0084c2b4;
            FUN_00623bb0(&DAT_001f6d4b,"../../modules/rtp_rtcp/source/forward_error_correction.cc",
                         0x462,"Media packet ",*(undefined8 *)(*(long *)(lVar20 + 0x10) + 0x18),
                         " bytes is smaller than RTP header.");
            uVar19 = 0xffffffff;
            goto LAB_0084c524;
          }
          if (((uVar21 + *(long *)(*(long *)(lVar11 + 0x10) + 0x18)) - 0x5c1 < 0xfffffffffffffa23)
             && (uVar21 = FUN_004022fc(), (uVar21 & 1) == 0)) {
            FUN_00623bb0(&DAT_00214e2d,"../../modules/rtp_rtcp/source/forward_error_correction.cc",
                         0x4a2,"Media packet ",*(undefined8 *)(*(long *)(lVar20 + 0x10) + 0x18),
                         " bytes with overhead is larger than ",0x5dc," bytes.");
          }
        }
        uVar19 = (int)((int)uVar14 * (param_3 & 0xff) + 0x80) >> 8;
        if (uVar19 == 0 && (param_3 & 0xff) != 0) {
          uVar19 = 1;
        }
        uVar21 = (ulong)uVar19;
        if (uVar19 == 0) {
          uVar19 = 0;
        }
        else {
          if ((int)uVar19 < 1) {
            uVar21 = (ulong)(int)uVar19;
          }
          else {
            lVar20 = 0;
            uVar12 = 0;
            do {
              uVar17 = (*(long *)(lVar11 + 0x20) - *(long *)(lVar11 + 0x18) >> 3) *
                       -0x3333333333333333;
              if (uVar17 < uVar12 || uVar17 - uVar12 == 0) goto LAB_0084c55c;
              FUN_007b5880(*(long *)(lVar11 + 0x18) + lVar20 + 8,0x5dc);
              uVar17 = (*(long *)(lVar11 + 0x20) - *(long *)(lVar11 + 0x18) >> 3) *
                       -0x3333333333333333;
              if (uVar17 < uVar12 || uVar17 - uVar12 == 0) goto LAB_0084c55c;
              lVar2 = *(long *)(lVar11 + 0x18) + lVar20;
              plVar22 = (long *)(lVar2 + 8);
              if (*plVar22 == 0) {
                pvVar7 = (void *)0x0;
              }
              else {
                FUN_007b5788(plVar22,*(long *)(*plVar22 + 8) - *(long *)(lVar2 + 0x10));
                pvVar7 = (void *)(*(long *)(*plVar22 + 0x10) + *(long *)(lVar2 + 0x10));
              }
              memset(pvVar7,0,0x5dc);
              uVar17 = (*(long *)(lVar11 + 0x20) - *(long *)(lVar11 + 0x18) >> 3) *
                       -0x3333333333333333;
              if (uVar17 < uVar12 || uVar17 - uVar12 == 0) goto LAB_0084c55c;
              FUN_007b5678(*(long *)(lVar11 + 0x18) + lVar20 + 8,0);
              lVar2 = *(long *)(lVar11 + 0x18);
              uVar17 = (*(long *)(lVar11 + 0x20) - lVar2 >> 3) * -0x3333333333333333;
              if (uVar17 < uVar12 || uVar17 - uVar12 == 0) goto LAB_0084c55c;
              plVar22 = (long *)operator_new(0x18);
              if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                          );
              }
              lVar18 = *param_7;
              lVar2 = lVar2 + lVar20;
              lVar20 = lVar20 + 0x28;
              plVar22[1] = (long)param_7;
              plVar22[2] = lVar2;
              uVar12 = uVar12 + 1;
              *plVar22 = lVar18;
              *(long **)(lVar18 + 8) = plVar22;
              *param_7 = (long)plVar22;
              param_7[2] = param_7[2] + 1;
            } while ((uVar21 + (ulong)uVar19 * 4) * 8 - lVar20 != 0);
          }
          puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_160 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_150 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_140 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_130 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_120 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_110 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_100 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_f0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_e0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_168 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_170 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_1c8 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_1d0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_1b8 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_1c0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_1a8 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_1b0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_198 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_1a0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_188 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_190 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_178 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_180 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_1d8 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_1e0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_c0 = &DAT_aaaaaaaaaaaaaaaa;
          FUN_0084e858(&puStack_1e0,param_6,uVar14 & 0xffffffff);
          lVar20 = FUN_0084eac8(uVar14);
          *(long *)(lVar11 + 0x288) = lVar20;
          memset((void *)(lVar11 + 0x48),0,lVar20 * uVar21);
          FUN_0084ec60(uVar14 & 0xffffffff,uVar19,param_4,param_5 & 1,&puStack_1e0,lVar11 + 0x48);
          iVar6 = FUN_0084c5e4(lVar11,lVar15,uVar21);
          if (iVar6 < 0) {
            uVar14 = FUN_00417e08();
            if ((uVar14 & 1) == 0) {
              FUN_00623bb0(&DAT_001f4e98,"../../modules/rtp_rtcp/source/forward_error_correction.cc"
                           ,0x591,
                           "Due to sequence number gaps, cannot protect media packets with a single block of FEC packets."
                          );
            }
            if (param_7[2] != 0) {
              plVar22 = (long *)param_7[1];
              plVar16 = *(long **)(*param_7 + 8);
              *(long **)(*plVar22 + 8) = plVar16;
              *plVar16 = *plVar22;
              param_7[2] = 0;
              while (plVar22 != param_7) {
                if ((plVar22 == (long *)0xfffffffffffffff0) || (plVar22 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
                  std::__Cr::__libcpp_verbose_abort
                            ("%s",
                             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                            );
                }
                plVar16 = (long *)plVar22[1];
                operator_delete(plVar22);
                plVar22 = plVar16;
              }
            }
            uVar19 = 0xffffffff;
          }
          else {
            uVar13 = FUN_0084eac8(iVar6);
            *(undefined8 *)(lVar11 + 0x288) = uVar13;
            FUN_0084c844(lVar11,lVar15,uVar21);
            if (*(long *)(lVar15 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/list:834: libc++ Hardening assertion !empty() failed: list::front called on empty list\n"
                        );
            }
            lVar15 = *(long *)(*(long *)(lVar15 + 8) + 0x10);
            lVar20 = *(long *)(lVar15 + 8);
            uVar19 = uRam0000000000000008;
            if ((lVar20 == 0) ||
               (uVar19 = *(uint *)(*(long *)(lVar20 + 0x10) + *(long *)(lVar15 + 0x10) + 8),
               lVar20 == 0)) {
              lVar15 = 0;
            }
            else {
              lVar15 = *(long *)(lVar20 + 0x10) + *(long *)(lVar15 + 0x10);
            }
            uVar3 = *(ushort *)(lVar15 + 2);
            lVar15 = 0;
            uVar14 = 0;
            uVar19 = (uVar19 & 0xff00ff00) >> 8 | (uVar19 & 0xff00ff) << 8;
            do {
              lVar20 = *(long *)(lVar11 + 0x288);
              uStack_1f8 = CONCAT26(0xaaaa,CONCAT24(uVar3 >> 8 | (ushort)((uVar3 & 0xff00ff) << 8),
                                                    uVar19 >> 0x10 | uVar19 << 0x10));
              if (0x120 < lVar20 * uVar14) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(0x5512,0x84c5b0);
                (*pcVar5)();
              }
              lStack_1f0 = 0;
              if (lVar20 != 0) {
                lStack_1f0 = lVar11 + 0x48 + lVar20 * uVar14;
              }
              lStack_1e8 = lVar20;
              if ((ulong)((*(long *)(lVar11 + 0x20) - *(long *)(lVar11 + 0x18) >> 3) *
                         -0x3333333333333333) <= uVar14) {
LAB_0084c55c:
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                          );
              }
              (**(code **)(**(long **)(lVar11 + 0x10) + 0x20))
                        (*(long **)(lVar11 + 0x10),&uStack_1f8,1,*(long *)(lVar11 + 0x18) + lVar15);
              uVar14 = uVar14 + 1;
              lVar15 = lVar15 + 0x28;
            } while (uVar21 != uVar14);
            uVar19 = 0;
          }
          FUN_0084e884(&puStack_1e0);
        }
      }
LAB_0084c524:
      if (*(long *)(lVar4 + 0x28) != lStack_b8) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return (undefined4 *)(ulong)uVar19;
    }
    puVar10 = (undefined8 *)operator_new(uVar14 * 0x28);
    puVar1 = puVar10 + uVar14 * 5;
    *(undefined8 **)(puVar9 + 6) = puVar10;
    *(undefined8 **)(puVar9 + 10) = puVar1;
    do {
      if (puVar10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *puVar10 = &PTR_FUN_00d3a410;
      FUN_007b545c(puVar10 + 1,0);
      *(undefined4 *)(puVar10 + 4) = 0;
      puVar10 = puVar10 + 5;
    } while (puVar10 != puVar1);
    *(undefined8 **)(puVar9 + 8) = puVar1;
  }
  *(undefined8 *)(puVar9 + 0x10) = 0;
  *(undefined4 **)(puVar9 + 0xc) = puVar9 + 0xc;
  *(undefined4 **)(puVar9 + 0xe) = puVar9 + 0xc;
  *(undefined8 *)(puVar9 + 0xa2) = 0;
  return puVar9;
}


// ===== 0084c008  FUN_0084c008 =====

undefined4
FUN_0084c008(long param_1,long param_2,byte param_3,undefined4 param_4,uint param_5,
            undefined4 param_6,long *param_7)

{
  ushort uVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  ulong uVar5;
  void *__s;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  undefined4 uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  undefined8 local_1b8;
  long local_1b0;
  long lStack_1a8;
  undefined1 *local_1a0;
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
  undefined1 *local_120;
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
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  uVar13 = *(ulong *)(param_2 + 0x10);
  uVar15 = *(ulong *)(*(long *)(param_1 + 0x10) + 8);
  if (uVar15 < uVar13) {
    uVar5 = FUN_004022fc();
    if ((uVar5 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4ef8,"../../modules/rtp_rtcp/source/forward_error_correction.cc",0x412,
                   "Can\'t protect ",uVar13," media packets per frame. Max is ",uVar15,&DAT_001ea377
                  );
      uVar12 = 0xffffffff;
    }
    else {
LAB_0084c2b4:
      uVar12 = 0xffffffff;
    }
  }
  else {
    for (lVar14 = *(long *)(param_2 + 8); lVar14 != param_2; lVar14 = *(long *)(lVar14 + 8)) {
      uVar15 = *(ulong *)(*(long *)(lVar14 + 0x10) + 0x18);
      if (uVar15 < 0xc) {
        uVar13 = FUN_004022fc();
        if ((uVar13 & 1) != 0) goto LAB_0084c2b4;
        FUN_00623bb0(&DAT_001f6d4b,"../../modules/rtp_rtcp/source/forward_error_correction.cc",0x462
                     ,"Media packet ",*(undefined8 *)(*(long *)(lVar14 + 0x10) + 0x18),
                     " bytes is smaller than RTP header.");
        uVar12 = 0xffffffff;
        goto LAB_0084c524;
      }
      if (((uVar15 + *(long *)(*(long *)(param_1 + 0x10) + 0x18)) - 0x5c1 < 0xfffffffffffffa23) &&
         (uVar15 = FUN_004022fc(), (uVar15 & 1) == 0)) {
        FUN_00623bb0(&DAT_00214e2d,"../../modules/rtp_rtcp/source/forward_error_correction.cc",0x4a2
                     ,"Media packet ",*(undefined8 *)(*(long *)(lVar14 + 0x10) + 0x18),
                     " bytes with overhead is larger than ",0x5dc," bytes.");
      }
    }
    uVar11 = (int)((int)uVar13 * (uint)param_3 + 0x80) >> 8;
    if (uVar11 == 0 && param_3 != 0) {
      uVar11 = 1;
    }
    uVar15 = (ulong)uVar11;
    if (uVar11 == 0) {
      uVar12 = 0;
    }
    else {
      if ((int)uVar11 < 1) {
        uVar15 = (ulong)(int)uVar11;
      }
      else {
        lVar14 = 0;
        uVar5 = 0;
        do {
          uVar8 = (*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18) >> 3) * -0x3333333333333333
          ;
          if (uVar8 < uVar5 || uVar8 - uVar5 == 0) goto LAB_0084c55c;
          FUN_007b5880(*(long *)(param_1 + 0x18) + lVar14 + 8,0x5dc);
          uVar8 = (*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18) >> 3) * -0x3333333333333333
          ;
          if (uVar8 < uVar5 || uVar8 - uVar5 == 0) goto LAB_0084c55c;
          lVar10 = *(long *)(param_1 + 0x18) + lVar14;
          plVar16 = (long *)(lVar10 + 8);
          if (*plVar16 == 0) {
            __s = (void *)0x0;
          }
          else {
            FUN_007b5788(plVar16,*(long *)(*plVar16 + 8) - *(long *)(lVar10 + 0x10));
            __s = (void *)(*(long *)(*plVar16 + 0x10) + *(long *)(lVar10 + 0x10));
          }
          memset(__s,0,0x5dc);
          uVar8 = (*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18) >> 3) * -0x3333333333333333
          ;
          if (uVar8 < uVar5 || uVar8 - uVar5 == 0) goto LAB_0084c55c;
          FUN_007b5678(*(long *)(param_1 + 0x18) + lVar14 + 8,0);
          lVar10 = *(long *)(param_1 + 0x18);
          uVar8 = (*(long *)(param_1 + 0x20) - lVar10 >> 3) * -0x3333333333333333;
          if (uVar8 < uVar5 || uVar8 - uVar5 == 0) goto LAB_0084c55c;
          plVar16 = (long *)operator_new(0x18);
          if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          lVar9 = *param_7;
          lVar10 = lVar10 + lVar14;
          lVar14 = lVar14 + 0x28;
          plVar16[1] = (long)param_7;
          plVar16[2] = lVar10;
          uVar5 = uVar5 + 1;
          *plVar16 = lVar9;
          *(long **)(lVar9 + 8) = plVar16;
          *param_7 = (long)plVar16;
          param_7[2] = param_7[2] + 1;
        } while ((uVar15 + (ulong)uVar11 * 4) * 8 - lVar14 != 0);
      }
      puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
      local_120 = &DAT_aaaaaaaaaaaaaaaa;
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
      puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
      local_130 = &DAT_aaaaaaaaaaaaaaaa;
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
      puStack_198 = &DAT_aaaaaaaaaaaaaaaa;
      local_1a0 = &DAT_aaaaaaaaaaaaaaaa;
      local_80 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_0084e858(&local_1a0,param_6,uVar13 & 0xffffffff);
      lVar14 = FUN_0084eac8(uVar13);
      *(long *)(param_1 + 0x288) = lVar14;
      memset((void *)(param_1 + 0x48),0,lVar14 * uVar15);
      FUN_0084ec60(uVar13 & 0xffffffff,uVar11,param_4,param_5 & 1,&local_1a0,param_1 + 0x48);
      iVar4 = FUN_0084c5e4(param_1,param_2,uVar15);
      if (iVar4 < 0) {
        uVar13 = FUN_00417e08();
        if ((uVar13 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e98,"../../modules/rtp_rtcp/source/forward_error_correction.cc",
                       0x591,
                       "Due to sequence number gaps, cannot protect media packets with a single block of FEC packets."
                      );
        }
        if (param_7[2] != 0) {
          plVar16 = (long *)param_7[1];
          plVar7 = *(long **)(*param_7 + 8);
          *(long **)(*plVar16 + 8) = plVar7;
          *plVar7 = *plVar16;
          param_7[2] = 0;
          while (plVar16 != param_7) {
            if ((plVar16 == (long *)0xfffffffffffffff0) || (plVar16 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                        );
            }
            plVar7 = (long *)plVar16[1];
            operator_delete(plVar16);
            plVar16 = plVar7;
          }
        }
        uVar12 = 0xffffffff;
      }
      else {
        uVar6 = FUN_0084eac8(iVar4);
        *(undefined8 *)(param_1 + 0x288) = uVar6;
        FUN_0084c844(param_1,param_2,uVar15);
        if (*(long *)(param_2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/list:834: libc++ Hardening assertion !empty() failed: list::front called on empty list\n"
                    );
        }
        lVar14 = *(long *)(*(long *)(param_2 + 8) + 0x10);
        lVar10 = *(long *)(lVar14 + 8);
        uVar11 = uRam0000000000000008;
        if ((lVar10 == 0) ||
           (uVar11 = *(uint *)(*(long *)(lVar10 + 0x10) + *(long *)(lVar14 + 0x10) + 8), lVar10 == 0
           )) {
          lVar14 = 0;
        }
        else {
          lVar14 = *(long *)(lVar10 + 0x10) + *(long *)(lVar14 + 0x10);
        }
        uVar1 = *(ushort *)(lVar14 + 2);
        lVar14 = 0;
        uVar13 = 0;
        uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
        do {
          lVar10 = *(long *)(param_1 + 0x288);
          local_1b8 = CONCAT26(0xaaaa,CONCAT24(uVar1 >> 8 | (ushort)((uVar1 & 0xff00ff) << 8),
                                               uVar11 >> 0x10 | uVar11 << 0x10));
          if (0x120 < lVar10 * uVar13) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(0x5512,0x84c5b0);
            (*pcVar3)();
          }
          local_1b0 = 0;
          if (lVar10 != 0) {
            local_1b0 = param_1 + 0x48 + lVar10 * uVar13;
          }
          lStack_1a8 = lVar10;
          if ((ulong)((*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18) >> 3) *
                     -0x3333333333333333) <= uVar13) {
LAB_0084c55c:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                      );
          }
          (**(code **)(**(long **)(param_1 + 0x10) + 0x20))
                    (*(long **)(param_1 + 0x10),&local_1b8,1,*(long *)(param_1 + 0x18) + lVar14);
          uVar13 = uVar13 + 1;
          lVar14 = lVar14 + 0x28;
        } while (uVar15 != uVar13);
        uVar12 = 0;
      }
      FUN_0084e884(&local_1a0);
    }
  }
LAB_0084c524:
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar12;
}


// ===== 0084c5b4  FUN_0084c5b4 =====

undefined8 FUN_0084c5b4(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
}


// ===== 0084c5c4  FUN_0084c5c4 =====

int FUN_0084c5c4(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 * param_1 + 0x80 >> 8;
  if (iVar1 == 0 && 0 < param_2) {
    iVar1 = 1;
  }
  return iVar1;
}


// ===== 0084c5e4  FUN_0084c5e4 =====

ulong FUN_0084c5e4(long param_1,long *param_2,ulong param_3)

{
  void *__src;
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  code *pcVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  long *plVar14;
  
  uVar12 = param_2[2];
  if (1 < uVar12) {
    lVar7 = *(long *)(*(long *)(*param_2 + 0x10) + 8);
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = *(long *)(lVar7 + 0x10) + *(long *)(*(long *)(*param_2 + 0x10) + 0x10);
    }
    lVar9 = *(long *)(*(long *)(param_2[1] + 0x10) + 8);
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = *(long *)(lVar9 + 0x10) + *(long *)(*(long *)(param_2[1] + 0x10) + 0x10);
    }
    uVar2 = *(ushort *)(lVar9 + 2);
    uVar6 = (ulong)(((uint)(*(ushort *)(lVar7 + 2) >> 8) | (*(ushort *)(lVar7 + 2) & 0xff00ff) << 8)
                   - ((uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8)) & 0xffff;
    if (uVar6 - uVar12 != -1) {
      uVar8 = *(ulong *)(*(long *)(param_1 + 0x10) + 8);
      if (uVar6 < uVar8) {
        uVar6 = FUN_0084eac8(uVar6 + 1);
        __src = (void *)(param_1 + 0x168);
        memset((void *)(param_1 + 0x168),0,uVar6 * param_3);
        plVar14 = *(long **)(param_2[1] + 8);
        FUN_0084ee54(param_1 + 0x168,uVar6 & 0xffffffff,param_1 + 0x48,
                     *(undefined4 *)(param_1 + 0x288),param_3 & 0xffffffff,0,0);
        uVar12 = 1;
        if ((plVar14 != param_2) && (uVar8 != 1)) {
          uVar5 = (uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8;
          iVar13 = 1;
          uVar12 = 1;
          do {
            lVar7 = *(long *)(plVar14[2] + 8);
            if (lVar7 == 0) {
              lVar7 = 0;
            }
            else {
              lVar7 = *(long *)(lVar7 + 0x10) + *(long *)(plVar14[2] + 0x10);
            }
            uVar2 = *(ushort *)(lVar7 + 2);
            uVar3 = (uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8;
            uVar1 = uVar3 + ~uVar5;
            if (((uVar5 - uVar3 ^ 0xffffffff) & 0xffff) != 0) {
              FUN_0084ece4(uVar1 & 0xffff,param_1 + 0x168,uVar6 & 0xffffffff,param_3 & 0xffffffff,
                           uVar12 & 0xffffffff);
            }
            uVar12 = uVar12 + (ushort)uVar1;
            FUN_0084ee54(param_1 + 0x168,uVar6 & 0xffffffff,param_1 + 0x48,
                         *(undefined4 *)(param_1 + 0x288),param_3 & 0xffffffff,uVar12 & 0xffffffff,
                         iVar13);
            plVar14 = (long *)plVar14[1];
            uVar12 = uVar12 + 1;
            if (plVar14 == param_2) break;
            iVar13 = iVar13 + 1;
            uVar5 = (uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8;
          } while (uVar12 != uVar8);
        }
        if (((uVar12 & 7) != 0) && (param_3 != 0)) {
          uVar10 = 0;
          uVar8 = 0;
          do {
            uVar11 = (ulong)((int)(uVar12 >> 3) + (int)uVar10 * (int)uVar6);
            if (0x11f < uVar11) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(0x5512,0x84c844);
              (*pcVar4)();
            }
            uVar8 = (ulong)((int)uVar8 + 1);
            uVar10 = uVar8 & 0xffff;
            *(char *)((long)__src + uVar11) =
                 *(char *)((long)__src + uVar11) << (ulong)((uint)(uVar12 & 7) ^ 7);
          } while (uVar10 < param_3);
        }
        memcpy((void *)(param_1 + 0x48),__src,uVar6 * param_3);
      }
      else {
        uVar12 = 0xffffffff;
      }
    }
  }
  return uVar12 & 0xffffffff;
}


// ===== 0084c844  FUN_0084c844 =====

void FUN_0084c844(long param_1,long param_2,ulong param_3)

{
  ushort uVar1;
  size_t __n;
  short sVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  
  if (param_3 != 0) {
    uVar7 = 0;
    do {
      lVar12 = *(long *)(param_1 + 0x18);
      if ((ulong)((*(long *)(param_1 + 0x20) - lVar12 >> 3) * -0x3333333333333333) <= uVar7) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                  );
      }
      uVar9 = *(long *)(param_1 + 0x288) * uVar7;
      if (0x120 < uVar9) {
LAB_0084ca70:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(0x5512,0x84ca74);
        (*pcVar3)();
      }
      uVar4 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))
                        (*(long **)(param_1 + 0x10),param_1 + 0x48 + uVar9);
      lVar5 = (**(code **)(**(long **)(param_1 + 0x10) + 0x18))(*(long **)(param_1 + 0x10),uVar4);
      lVar11 = *(long *)(param_2 + 8);
      lVar8 = *(long *)(*(long *)(lVar11 + 0x10) + 8);
      if (lVar8 == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = *(long *)(lVar8 + 0x10) + *(long *)(*(long *)(lVar11 + 0x10) + 0x10);
      }
      if (lVar11 != param_2) {
        if (uVar9 == 0x120) goto LAB_0084ca70;
        uVar14 = 0;
        lVar12 = lVar12 + uVar7 * 0x28;
        uVar15 = (uint)(*(ushort *)(lVar8 + 2) >> 8) | (*(ushort *)(lVar8 + 2) & 0xff00ff) << 8;
        while( true ) {
          if ((*(byte *)(param_1 + 0x48 + uVar9) >> (ulong)((uint)uVar14 ^ 7) & 1) != 0) {
            lVar8 = *(long *)(lVar11 + 0x10);
            uVar10 = *(ulong *)(lVar12 + 0x18);
            lVar13 = *(long *)(lVar8 + 0x18) + -0xc;
            __n = (lVar13 + lVar5) - uVar10;
            if (uVar10 <= (ulong)(lVar13 + lVar5) && __n != 0) {
              FUN_007b5678(lVar12 + 8,lVar13 + lVar5);
              lVar6 = *(long *)(lVar12 + 8);
              if (lVar6 != 0) {
                FUN_007b5788(lVar12 + 8,*(long *)(lVar6 + 8) - *(long *)(lVar12 + 0x10));
                lVar6 = *(long *)(*(long *)(lVar12 + 8) + 0x10) + *(long *)(lVar12 + 0x10);
              }
              memset((void *)(lVar6 + uVar10),0,__n);
            }
            FUN_0084ca88(lVar8,lVar12);
            FUN_0084cb80(lVar8,lVar13,lVar5,lVar12);
          }
          lVar11 = *(long *)(lVar11 + 8);
          if (lVar11 == param_2) break;
          lVar8 = *(long *)(*(long *)(lVar11 + 0x10) + 8);
          if (lVar8 == 0) {
            lVar8 = 0;
          }
          else {
            lVar8 = *(long *)(lVar8 + 0x10) + *(long *)(*(long *)(lVar11 + 0x10) + 0x10);
          }
          uVar1 = *(ushort *)(lVar8 + 2);
          sVar2 = (short)uVar15;
          uVar15 = (uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8;
          uVar14 = uVar14 + (ushort)((uVar1 >> 8 | (ushort)((uVar1 & 0xff00ff) << 8)) - sVar2);
          uVar9 = uVar9 + (uVar14 >> 3);
          uVar14 = uVar14 & 7;
          if (0x11f < uVar9) goto LAB_0084ca70;
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != param_3);
  }
  return;
}


// ===== 0084ca88  FUN_0084ca88 =====

void FUN_0084ca88(long param_1,long param_2)

{
  int iVar1;
  byte *pbVar2;
  long lVar3;
  byte *pbVar4;
  
  lVar3 = *(long *)(param_2 + 8);
  if (lVar3 == 0) {
    pbVar2 = (byte *)0x0;
    pbVar4 = *(byte **)(param_1 + 8);
    if (pbVar4 == (byte *)0x0) {
      pbVar4 = (byte *)0x0;
      goto LAB_0084cae0;
    }
  }
  else {
    FUN_007b5788((long *)(param_2 + 8),*(long *)(lVar3 + 8) - *(long *)(param_2 + 0x10));
    pbVar2 = (byte *)(*(long *)(*(long *)(param_2 + 8) + 0x10) + *(long *)(param_2 + 0x10));
    pbVar4 = *(byte **)(param_1 + 8);
    if (pbVar4 == (byte *)0x0) goto LAB_0084cae0;
  }
  pbVar4 = (byte *)(*(long *)(pbVar4 + 0x10) + *(long *)(param_1 + 0x10));
LAB_0084cae0:
  *pbVar2 = *pbVar2 ^ *pbVar4;
  pbVar2[1] = pbVar2[1] ^ pbVar4[1];
  iVar1 = *(ushort *)(param_1 + 0x18) - 0xc;
  pbVar2[3] = pbVar2[3] ^ (byte)iVar1;
  pbVar2[2] = pbVar2[2] ^ (byte)((uint)iVar1 >> 8);
  pbVar2[4] = pbVar2[4] ^ pbVar4[4];
  pbVar2[5] = pbVar2[5] ^ pbVar4[5];
  pbVar2[6] = pbVar2[6] ^ pbVar4[6];
  pbVar2[7] = pbVar2[7] ^ pbVar4[7];
  return;
}


// ===== 0084cb80  FUN_0084cb80 =====

void FUN_0084cb80(long param_1,ulong param_2,long param_3,long param_4)

{
  size_t __n;
  long lVar1;
  byte *pbVar2;
  long lVar3;
  long lVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar9 = *(ulong *)(param_4 + 0x18);
  __n = (param_3 + param_2) - uVar9;
  if (uVar9 <= param_3 + param_2 && __n != 0) {
    FUN_007b5678(param_4 + 8,param_3 + param_2);
    lVar1 = *(long *)(param_4 + 8);
    if (lVar1 != 0) {
      FUN_007b5788(param_4 + 8,*(long *)(lVar1 + 8) - *(long *)(param_4 + 0x10));
      lVar1 = *(long *)(*(long *)(param_4 + 8) + 0x10) + *(long *)(param_4 + 0x10);
    }
    memset((void *)(lVar1 + uVar9),0,__n);
  }
  lVar1 = *(long *)(param_4 + 8);
  if (lVar1 != 0) {
    FUN_007b5788(param_4 + 8,*(long *)(lVar1 + 8) - *(long *)(param_4 + 0x10));
    lVar1 = *(long *)(*(long *)(param_4 + 8) + 0x10) + *(long *)(param_4 + 0x10);
  }
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 != 0) {
    lVar3 = *(long *)(lVar3 + 0x10) + *(long *)(param_1 + 0x10);
  }
  if (param_2 == 0) {
    return;
  }
  if (7 < param_2) {
    if ((lVar3 + 0xcU + param_2 <= (ulong)(lVar1 + param_3)) ||
       (lVar1 + param_3 + param_2 <= lVar3 + 0xcU)) {
      if (param_2 < 0x20) {
        uVar8 = 0;
      }
      else {
        uVar9 = param_2 & 0xffffffffffffffe0;
        puVar6 = (undefined8 *)(param_3 + lVar1 + 0x10);
        puVar7 = (undefined8 *)(lVar3 + 0x1c);
        uVar8 = param_2 & 0xffffffffffffffe0;
        do {
          uVar12 = puVar6[-1];
          uVar10 = puVar6[-2];
          uVar17 = puVar6[1];
          uVar16 = *puVar6;
          uVar8 = uVar8 - 0x20;
          uVar13 = puVar7[-1];
          uVar11 = puVar7[-2];
          uVar15 = puVar7[1];
          uVar14 = *puVar7;
          puVar7 = puVar7 + 4;
          puVar6[-1] = CONCAT17((byte)((ulong)uVar12 >> 0x38) ^ (byte)((ulong)uVar13 >> 0x38),
                                CONCAT16((byte)((ulong)uVar12 >> 0x30) ^
                                         (byte)((ulong)uVar13 >> 0x30),
                                         CONCAT15((byte)((ulong)uVar12 >> 0x28) ^
                                                  (byte)((ulong)uVar13 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar12 >> 0x20) ^
                                                           (byte)((ulong)uVar13 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar12 >> 0x18) ^
                                                                    (byte)((ulong)uVar13 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar12 >>
                                                                                   0x10) ^
                                                                             (byte)((ulong)uVar13 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar12 >> 8) ^ (byte)((ulong)uVar13 >> 8),
                                                  (byte)uVar12 ^ (byte)uVar13)))))));
          puVar6[-2] = CONCAT17((byte)((ulong)uVar10 >> 0x38) ^ (byte)((ulong)uVar11 >> 0x38),
                                CONCAT16((byte)((ulong)uVar10 >> 0x30) ^
                                         (byte)((ulong)uVar11 >> 0x30),
                                         CONCAT15((byte)((ulong)uVar10 >> 0x28) ^
                                                  (byte)((ulong)uVar11 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar10 >> 0x20) ^
                                                           (byte)((ulong)uVar11 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar10 >> 0x18) ^
                                                                    (byte)((ulong)uVar11 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar10 >>
                                                                                   0x10) ^
                                                                             (byte)((ulong)uVar11 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar10 >> 8) ^ (byte)((ulong)uVar11 >> 8),
                                                  (byte)uVar10 ^ (byte)uVar11)))))));
          puVar6[1] = CONCAT17((byte)((ulong)uVar17 >> 0x38) ^ (byte)((ulong)uVar15 >> 0x38),
                               CONCAT16((byte)((ulong)uVar17 >> 0x30) ^
                                        (byte)((ulong)uVar15 >> 0x30),
                                        CONCAT15((byte)((ulong)uVar17 >> 0x28) ^
                                                 (byte)((ulong)uVar15 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar17 >> 0x20) ^
                                                          (byte)((ulong)uVar15 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar17 >> 0x18) ^
                                                                   (byte)((ulong)uVar15 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar17 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar15 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar17 >> 8) ^ (byte)((ulong)uVar15 >> 8),
                                                  (byte)uVar17 ^ (byte)uVar15)))))));
          *puVar6 = CONCAT17((byte)((ulong)uVar16 >> 0x38) ^ (byte)((ulong)uVar14 >> 0x38),
                             CONCAT16((byte)((ulong)uVar16 >> 0x30) ^ (byte)((ulong)uVar14 >> 0x30),
                                      CONCAT15((byte)((ulong)uVar16 >> 0x28) ^
                                               (byte)((ulong)uVar14 >> 0x28),
                                               CONCAT14((byte)((ulong)uVar16 >> 0x20) ^
                                                        (byte)((ulong)uVar14 >> 0x20),
                                                        CONCAT13((byte)((ulong)uVar16 >> 0x18) ^
                                                                 (byte)((ulong)uVar14 >> 0x18),
                                                                 CONCAT12((byte)((ulong)uVar16 >>
                                                                                0x10) ^
                                                                          (byte)((ulong)uVar14 >>
                                                                                0x10),
                                                                          CONCAT11((byte)((ulong)
                                                  uVar16 >> 8) ^ (byte)((ulong)uVar14 >> 8),
                                                  (byte)uVar16 ^ (byte)uVar14)))))));
          puVar6 = puVar6 + 4;
        } while (uVar8 != 0);
        if (param_2 == uVar9) {
          return;
        }
        uVar8 = uVar9;
        if ((param_2 & 0x18) == 0) goto LAB_0084cc68;
      }
      uVar9 = param_2 & 0xfffffffffffffff8;
      lVar4 = uVar8 - uVar9;
      puVar6 = (undefined8 *)(lVar1 + uVar8 + param_3);
      puVar7 = (undefined8 *)(uVar8 + lVar3 + 0xc);
      do {
        uVar10 = *puVar7;
        uVar12 = *puVar6;
        lVar4 = lVar4 + 8;
        *puVar6 = CONCAT17((byte)((ulong)uVar12 >> 0x38) ^ (byte)((ulong)uVar10 >> 0x38),
                           CONCAT16((byte)((ulong)uVar12 >> 0x30) ^ (byte)((ulong)uVar10 >> 0x30),
                                    CONCAT15((byte)((ulong)uVar12 >> 0x28) ^
                                             (byte)((ulong)uVar10 >> 0x28),
                                             CONCAT14((byte)((ulong)uVar12 >> 0x20) ^
                                                      (byte)((ulong)uVar10 >> 0x20),
                                                      CONCAT13((byte)((ulong)uVar12 >> 0x18) ^
                                                               (byte)((ulong)uVar10 >> 0x18),
                                                               CONCAT12((byte)((ulong)uVar12 >> 0x10
                                                                              ) ^ (byte)((ulong)
                                                  uVar10 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar12 >> 8) ^
                                                           (byte)((ulong)uVar10 >> 8),
                                                           (byte)uVar12 ^ (byte)uVar10)))))));
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      } while (lVar4 != 0);
      if (param_2 == uVar9) {
        return;
      }
      goto LAB_0084cc68;
    }
  }
  uVar9 = 0;
LAB_0084cc68:
  lVar4 = param_2 - uVar9;
  pbVar2 = (byte *)(lVar1 + uVar9 + param_3);
  pbVar5 = (byte *)(uVar9 + lVar3 + 0xc);
  do {
    lVar4 = lVar4 + -1;
    *pbVar2 = *pbVar2 ^ *pbVar5;
    pbVar2 = pbVar2 + 1;
    pbVar5 = pbVar5 + 1;
  } while (lVar4 != 0);
  return;
}


// ===== 0084cd44  FUN_0084cd44 =====

void FUN_0084cd44(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  void *pvVar3;
  long *plVar4;
  
  if (param_2[2] != 0) {
    plVar1 = (long *)param_2[1];
    plVar2 = *(long **)(*param_2 + 8);
    *(long **)(*plVar1 + 8) = plVar2;
    *plVar2 = *plVar1;
    param_2[2] = 0;
    while (plVar1 != param_2) {
      plVar2 = plVar1 + 2;
      if (plVar2 == (long *)0x0) {
LAB_0084ce00:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      pvVar3 = (void *)*plVar2;
      plVar4 = (long *)plVar1[1];
      *plVar2 = 0;
      if (pvVar3 != (void *)0x0) {
        if (*(long **)((long)pvVar3 + 0x10) != (long *)0x0) {
          (**(code **)(**(long **)((long)pvVar3 + 0x10) + 0x18))();
        }
        operator_delete(pvVar3);
      }
      if (plVar1 == (long *)0x0) goto LAB_0084ce00;
      operator_delete(plVar1);
      plVar1 = plVar4;
    }
  }
  FUN_0084e050(param_1 + 0x30);
  return;
}


// ===== 0084ce14  FUN_0084ce14 =====

void FUN_0084ce14(undefined8 param_1,long *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined4 *puVar3;
  long lVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  
  uVar2 = *(ushort *)(param_3 + 1);
  plVar6 = param_2;
  while (plVar7 = (long *)param_2[1], plVar6 != (long *)param_2[1]) {
    uVar5 = (uint)*(ushort *)(((long *)*plVar6)[2] + 4);
    uVar8 = (uint)uVar2;
    plVar7 = plVar6;
    if (uVar8 - uVar5 == 0x8000) {
      if (uVar5 < uVar8) break;
    }
    else if ((uVar8 != uVar5) && ((uVar8 - uVar5 >> 0xf & 1) == 0)) break;
    plVar6 = (long *)*plVar6;
    if (uVar5 == uVar2) {
      return;
    }
  }
  puVar3 = (undefined4 *)operator_new(0x18);
  uVar1 = *param_3;
  plVar6 = *(long **)(param_3 + 10);
  *(ushort *)(puVar3 + 1) = uVar2;
  *(undefined2 *)(puVar3 + 2) = 0x100;
  *puVar3 = uVar1;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  *(long **)(puVar3 + 4) = plVar6;
  plVar6 = (long *)operator_new(0x18);
  if ((plVar6 != (long *)0x0) && (plVar6 != (long *)0xfffffffffffffff0)) {
    plVar6[2] = (long)puVar3;
    *(long **)(*plVar7 + 8) = plVar6;
    *plVar6 = *plVar7;
    *plVar7 = (long)plVar6;
    lVar4 = param_2[2];
    plVar6[1] = (long)plVar7;
    param_2[2] = lVar4 + 1;
    FUN_0084cf54(param_1,puVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0084cf54  FUN_0084cf54 =====

void FUN_0084cf54(long param_1,long param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  
  lVar10 = *(long *)(param_1 + 0x38);
  do {
    if (lVar10 == param_1 + 0x30) {
      return;
    }
    lVar4 = *(long *)(*(long *)(lVar10 + 0x10) + 0x10);
    lVar11 = *(long *)(lVar10 + 0x10) + 8;
    if (lVar4 != lVar11) {
      uVar5 = 0;
      lVar6 = lVar4;
      do {
        lVar6 = *(long *)(lVar6 + 8);
        uVar5 = uVar5 + 1;
      } while (lVar6 != lVar11);
      if (uVar5 != 0) {
        uVar1 = *(ushort *)(param_2 + 4);
        do {
          uVar7 = uVar5 >> 1;
          lVar6 = lVar4;
          if (uVar7 != 0) {
            uVar8 = uVar7 + 1;
            do {
              uVar8 = uVar8 - 1;
              lVar6 = *(long *)(lVar6 + 8);
            } while (1 < uVar8);
          }
          uVar2 = *(ushort *)(*(long *)(lVar6 + 0x10) + 4);
          uVar3 = (uint)uVar1 - (uint)uVar2;
          if (uVar3 == 0x8000) {
            if (uVar2 < uVar1) {
LAB_0084cfcc:
              lVar4 = *(long *)(lVar6 + 8);
              uVar7 = uVar5 + ~uVar7;
            }
          }
          else if (((uint)uVar1 != (uint)uVar2) && ((uVar3 >> 0xf & 1) == 0)) goto LAB_0084cfcc;
          uVar5 = uVar7;
        } while (uVar5 != 0);
      }
      if ((lVar4 != lVar11) &&
         (lVar11 = *(long *)(lVar4 + 0x10), *(short *)(lVar11 + 4) == *(short *)(param_2 + 4))) {
        plVar9 = *(long **)(param_2 + 0x10);
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
        if (*(long **)(lVar11 + 8) != (long *)0x0) {
          (**(code **)(**(long **)(lVar11 + 8) + 0x18))();
        }
        *(long **)(lVar11 + 8) = plVar9;
      }
    }
    lVar10 = *(long *)(lVar10 + 8);
  } while( true );
}


