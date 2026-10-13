// ===== 004242ec  FUN_004242ec =====

undefined8 FUN_004242ec(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = FUN_00423d64();
    return uVar1;
  }
  return 0xfffffffe;
}


// ===== 00424304  FUN_00424304 =====

undefined8 FUN_00424304(undefined8 param_1,long param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_30 [16];
  
  if (param_2 == 0) {
    return 0xfffffffe;
  }
  iVar1 = FUN_00424374(auStack_30);
  if (iVar1 != 0) {
    uVar2 = FUN_00423d64(param_1,auStack_30,iVar1,param_3,7,0);
    return uVar2;
  }
  return 0xfffffffe;
}


// ===== 00424374  FUN_00424374 =====

long FUN_00424374(undefined8 *param_1,char *param_2)

{
  ulong __n;
  uint uVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  undefined8 local_4c;
  undefined8 uStack_44;
  undefined8 local_3c;
  int local_34;
  
  pcVar4 = strchr(param_2,0x3a);
  if (pcVar4 == (char *)0x0) {
    iVar3 = FUN_00424840(param_1,param_2);
    return (ulong)(iVar3 != 0) << 2;
  }
  local_34 = 0;
  local_3c = -0x100000000;
  iVar3 = FUN_003bb2a0(param_2,0x3a,0,FUN_004252cc,&local_4c);
  if (iVar3 != 0) {
    uVar1 = (uint)local_3c;
    uVar2 = local_3c._4_4_;
    __n = (ulong)local_3c._4_4_;
    lVar5 = (long)(int)(uint)local_3c;
    if (local_3c._4_4_ == 0xffffffff) {
      if ((uint)local_3c == 0x10) goto LAB_00424440;
    }
    else if (((uint)local_3c != 0x10) && (local_34 < 4)) {
      if (local_34 == 2) {
        if ((local_3c._4_4_ != 0) && ((uint)local_3c != local_3c._4_4_)) {
          return 0;
        }
      }
      else if (local_34 == 3) {
        if (0 < (int)(uint)local_3c) {
          return 0;
        }
      }
      else {
        if (local_3c._4_4_ == 0) {
          return 0;
        }
        if ((uint)local_3c == local_3c._4_4_) {
          return 0;
        }
      }
      if (-1 < local_3c) {
        memcpy(param_1,&local_4c,__n);
        memset((void *)((long)param_1 + __n),0,0x10 - lVar5);
        if (uVar1 != uVar2) {
          memcpy((void *)((long)((long)param_1 + __n) + (0x10 - lVar5)),
                 (void *)((long)&local_4c + __n),(long)(int)(uVar1 - uVar2));
        }
        return 0x10;
      }
LAB_00424440:
      param_1[1] = uStack_44;
      *param_1 = local_4c;
      return 0x10;
    }
  }
  return 0;
}


// ===== 004244fc  FUN_004244fc =====

void FUN_004244fc(ushort *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  long lVar5;
  char *pcVar6;
  undefined1 auStack_58 [40];
  
  if (param_2 == 0x10) {
    uVar2 = FUN_0037cd5c(auStack_58,0x28,&DAT_001e957d,
                         (uint)(*param_1 >> 8) | (*param_1 & 0xff00ff) << 8);
    if ((int)uVar2 < 0) goto LAB_0042469c;
    puVar4 = auStack_58 + uVar2;
    uVar3 = FUN_0037cd5c(puVar4,(long)(int)(0x28 - uVar2),&DAT_001e957d,
                         (uint)(param_1[1] >> 8) | (param_1[1] & 0xff00ff) << 8);
    if ((int)uVar3 < 0) goto LAB_0042469c;
    iVar1 = (0x28 - uVar2) - uVar3;
    puVar4 = puVar4 + uVar3;
    uVar2 = FUN_0037cd5c(puVar4,(long)iVar1,&DAT_001e957d,
                         (uint)(param_1[2] >> 8) | (param_1[2] & 0xff00ff) << 8);
    if ((int)uVar2 < 0) goto LAB_0042469c;
    iVar1 = iVar1 - uVar2;
    puVar4 = puVar4 + uVar2;
    uVar2 = FUN_0037cd5c(puVar4,(long)iVar1,&DAT_001e957d,
                         (uint)(param_1[3] >> 8) | (param_1[3] & 0xff00ff) << 8);
    if ((int)uVar2 < 0) goto LAB_0042469c;
    iVar1 = iVar1 - uVar2;
    puVar4 = puVar4 + uVar2;
    uVar2 = FUN_0037cd5c(puVar4,(long)iVar1,&DAT_001e957d,
                         (uint)(param_1[4] >> 8) | (param_1[4] & 0xff00ff) << 8);
    if ((int)uVar2 < 0) goto LAB_0042469c;
    iVar1 = iVar1 - uVar2;
    puVar4 = puVar4 + uVar2;
    uVar2 = FUN_0037cd5c(puVar4,(long)iVar1,&DAT_001e957d,
                         (uint)(param_1[5] >> 8) | (param_1[5] & 0xff00ff) << 8);
    if ((int)uVar2 < 0) goto LAB_0042469c;
    iVar1 = iVar1 - uVar2;
    uVar3 = FUN_0037cd5c(puVar4 + uVar2,(long)iVar1,&DAT_001e957d,
                         (uint)(param_1[6] >> 8) | (param_1[6] & 0xff00ff) << 8);
    if ((int)uVar3 < 0) goto LAB_0042469c;
    puVar4 = puVar4 + uVar2 + uVar3;
    lVar5 = (long)(int)(iVar1 - uVar3);
    pcVar6 = "%X";
    param_2 = (uint)(param_1[7] >> 8) | (param_1[7] & 0xff00ff) << 8;
  }
  else {
    if (param_2 == 4) {
      FUN_0037cd5c(auStack_58,0x28,"%d.%d.%d.%d",(char)*param_1,*(undefined1 *)((long)param_1 + 1),
                   (char)param_1[1],*(undefined1 *)((long)param_1 + 3));
      goto LAB_0042469c;
    }
    pcVar6 = "<invalid length=%d>";
    puVar4 = auStack_58;
    lVar5 = 0x28;
  }
  FUN_0037cd5c(puVar4,lVar5,pcVar6,param_2);
LAB_0042469c:
  FUN_003ca2f4(auStack_58,"crypto/x509/v3_utl.c",0x429);
  return;
}


// ===== 004246c4  FUN_004246c4 =====

long FUN_004246c4(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined1 auStack_30 [16];
  
  iVar1 = FUN_00424374(auStack_30,param_1);
  if (iVar1 != 0) {
    lVar2 = FUN_0038a358();
    if ((lVar2 == 0) || (iVar1 = thunk_FUN_0038ebe0(lVar2,auStack_30,iVar1), iVar1 != 0)) {
      return lVar2;
    }
    thunk_FUN_0038eddc(lVar2);
  }
  return 0;
}


// ===== 00424734  FUN_00424734 =====

char * FUN_00424734(char *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 auStack_50 [32];
  
  pcVar4 = strchr(param_1,0x2f);
  pcVar5 = pcVar4;
  if ((pcVar4 == (char *)0x0) ||
     (pcVar5 = (char *)FUN_003ca2f4(param_1,"crypto/x509/v3_utl.c",0x452), pcVar5 == (char *)0x0)) {
    return pcVar5;
  }
  pcVar5[(long)pcVar4 - (long)param_1] = '\0';
  uVar1 = FUN_00424374(auStack_50,pcVar5);
  if (uVar1 != 0) {
    uVar2 = FUN_00424374(auStack_50 + uVar1,pcVar5 + ((long)pcVar4 - (long)param_1) + 1);
    FUN_003c86b4(pcVar5,"crypto/x509/v3_utl.c",0x45f);
    if ((uVar1 == uVar2) && (pcVar4 = (char *)FUN_0038a358(), pcVar4 != (char *)0x0)) {
      iVar3 = thunk_FUN_0038ebe0(pcVar4,auStack_50,uVar1 << 1);
      if (iVar3 != 0) {
        return pcVar4;
      }
      pcVar5 = (char *)0x0;
      goto LAB_00424804;
    }
    pcVar5 = (char *)0x0;
  }
  pcVar4 = (char *)0x0;
LAB_00424804:
  FUN_003c86b4(pcVar5,"crypto/x509/v3_utl.c",0x46e);
  thunk_FUN_0038eddc(pcVar4);
  return (char *)0x0;
}


// ===== 00424840  FUN_00424840 =====

undefined8 FUN_00424840(undefined1 *param_1,char *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  uint local_24;
  
  iVar1 = sscanf(param_2,"%d.%d.%d.%d%n",&local_24,&local_28,&local_2c,&local_30,&local_34);
  if (iVar1 == 4) {
    uVar2 = 0;
    if ((((((local_24 < 0x100) && (-1 < local_28)) && (local_28 < 0x100)) &&
         ((-1 < local_2c && (local_2c < 0x100)))) && ((-1 < local_30 && (local_30 < 0x100)))) &&
       ((param_2[local_34] == '\0' || (uVar2 = FUN_003c475c(param_2[local_34],8), (int)uVar2 != 0)))
       ) {
      uVar2 = 1;
      *param_1 = (char)local_24;
      param_1[1] = (char)local_28;
      param_1[2] = (char)local_2c;
      param_1[3] = (char)local_30;
    }
    return uVar2;
  }
  return 0;
}


// ===== 00424920  FUN_00424920 =====

long FUN_00424920(long param_1,undefined8 param_2,undefined4 param_3)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  if (param_1 != 0) {
    iVar3 = FUN_0040caf8(param_2);
    if (0 < iVar3) {
      iVar3 = 0;
      do {
        lVar5 = FUN_0040cb0c(param_2,iVar3);
        pbVar6 = *(byte **)(lVar5 + 8);
        pbVar1 = pbVar6;
        do {
          while( true ) {
            pbVar7 = pbVar1 + 1;
            bVar2 = *pbVar1;
            pbVar1 = pbVar7;
            if (bVar2 < 0x2e) break;
            if ((bVar2 == 0x2e) || (bVar2 == 0x3a)) goto LAB_0042499c;
          }
          if (bVar2 == 0) goto LAB_004249a8;
        } while (bVar2 != 0x2c);
LAB_0042499c:
        if (*pbVar7 != 0) {
          pbVar6 = pbVar7;
        }
LAB_004249a8:
        pbVar1 = pbVar6;
        if (*pbVar6 == 0x2b) {
          pbVar1 = pbVar6 + 1;
        }
        lVar5 = FUN_00433490(param_1,pbVar1,param_3,*(undefined8 *)(lVar5 + 0x10),0xffffffff,
                             0xffffffff,-(uint)(*pbVar6 == 0x2b));
        if ((int)lVar5 == 0) {
          return lVar5;
        }
        iVar3 = iVar3 + 1;
        iVar4 = FUN_0040caf8(param_2);
      } while (iVar3 < iVar4);
    }
    param_1 = 1;
  }
  return param_1;
}


// ===== 00424a00  FUN_00424a00 =====

int FUN_00424a00(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = strcmp((char *)*param_1,(char *)*param_2);
  return iVar1;
}


// ===== 00424a0c  FUN_00424a0c =====

bool FUN_00424a0c(void *param_1,size_t param_2,void *param_3,size_t param_4)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  size_t __n;
  long lVar6;
  long lVar7;
  uint uVar8;
  
  if (param_2 != param_4) {
    return false;
  }
  lVar7 = -1;
  do {
    lVar6 = lVar7;
    if (param_2 + lVar6 == -1) goto LAB_00424ab4;
  } while ((*(char *)((long)param_1 + lVar6 + param_2) != '@') &&
          (lVar7 = lVar6 + -1, *(char *)((long)param_3 + lVar6 + param_2) != '@'));
  lVar7 = lVar6;
  if (lVar6 != 0) {
    do {
      bVar2 = *(byte *)((long)param_1 + lVar7 + param_2);
      if (bVar2 == 0) {
        return false;
      }
      bVar3 = *(byte *)((long)param_3 + lVar7 + param_2);
      if ((uint)bVar2 != (uint)bVar3) {
        uVar8 = (uint)bVar2;
        uVar1 = uVar8 | 0x20;
        if (0x19 < uVar8 - 0x41) {
          uVar1 = uVar8;
        }
        uVar8 = bVar3 | 0x20;
        if (0x19 < bVar3 - 0x41) {
          uVar8 = (uint)bVar3;
        }
        if (uVar1 != uVar8) {
          return false;
        }
      }
      bVar4 = lVar7 != -1;
      lVar7 = lVar7 + 1;
    } while (bVar4);
  }
  __n = param_2 + lVar6;
  if (param_2 + lVar6 == 0) {
LAB_00424ab4:
    __n = param_2;
  }
  iVar5 = memcmp(param_1,param_3,__n);
  return iVar5 == 0;
}


// ===== 00424adc  FUN_00424adc =====

undefined8 FUN_00424adc(byte *param_1,ulong param_2,byte *param_3,ulong param_4,uint param_5)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  ulong uVar5;
  uint uVar6;
  byte *pbVar7;
  ulong uVar8;
  
  pbVar4 = param_1;
  uVar5 = param_2;
  if ((param_5 >> 0xf & 1) != 0) {
    pbVar7 = param_1;
    uVar8 = param_2;
    if (param_4 <= param_2 && param_2 - param_4 != 0) {
      pbVar4 = param_1 + (param_2 - param_4);
      if ((param_5 >> 4 & 1) == 0) {
        do {
          if (*pbVar7 == 0) goto LAB_00424b40;
          uVar8 = uVar8 - 1;
          pbVar7 = pbVar7 + 1;
        } while (param_4 < uVar8);
      }
      else {
        do {
          if ((*pbVar7 == 0) || (*pbVar7 == 0x2e)) goto LAB_00424b40;
          uVar8 = uVar8 - 1;
          pbVar7 = pbVar7 + 1;
        } while (param_4 < uVar8);
      }
      goto LAB_00424b58;
    }
LAB_00424b40:
    pbVar4 = pbVar7;
    uVar5 = param_4;
    if (uVar8 != param_4) {
      pbVar4 = param_1;
      uVar5 = param_2;
    }
  }
  if (uVar5 != param_4) {
    return 0;
  }
LAB_00424b58:
  if (param_4 != 0) {
    do {
      bVar2 = *pbVar4;
      if (bVar2 == 0) {
        return 0;
      }
      bVar3 = *param_3;
      if ((uint)bVar2 != (uint)bVar3) {
        uVar6 = (uint)bVar2;
        uVar1 = uVar6 | 0x20;
        if (0x19 < uVar6 - 0x41) {
          uVar1 = uVar6;
        }
        uVar6 = bVar3 | 0x20;
        if (0x19 < bVar3 - 0x41) {
          uVar6 = (uint)bVar3;
        }
        if (uVar1 != uVar6) {
          return 0;
        }
      }
      param_4 = param_4 - 1;
      pbVar4 = pbVar4 + 1;
      param_3 = param_3 + 1;
    } while (param_4 != 0);
  }
  return 1;
}


// ===== 00424bb8  FUN_00424bb8 =====

undefined8 FUN_00424bb8(byte *param_1,byte *param_2,byte *param_3,byte *param_4,uint param_5)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  byte *pbVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  long lVar12;
  byte bVar13;
  byte bVar14;
  int iVar15;
  
  if (param_4 < (byte *)0x2) {
    if (param_2 != (byte *)0x0) goto LAB_00424c08;
  }
  else if ((param_2 != (byte *)0x0) && (*param_3 != 0x2e)) {
LAB_00424c08:
    pbVar10 = (byte *)0x0;
    iVar15 = 0;
    bVar14 = 1;
    pbVar8 = param_2;
    pbVar6 = param_1;
    do {
      bVar13 = *pbVar6;
      if (bVar13 == 0x2a) {
        if (pbVar8 == (byte *)0x1) {
          bVar1 = true;
        }
        else {
          bVar1 = pbVar6[1] == 0x2e;
        }
        if ((pbVar10 != (byte *)0x0) || ((bVar14 & 8) != 0 || iVar15 != 0)) goto LAB_00424d70;
        bVar13 = bVar14 & bVar1;
        if ((param_5 & 4) == 0) {
          bVar13 = 1;
        }
        if ((bVar13 != 1) || ((bVar14 & 1) == 0 && bVar1 == false)) goto LAB_00424d70;
        iVar15 = 0;
        bVar14 = bVar14 & 0xf6;
        pbVar10 = pbVar6;
      }
      else if ((bVar13 - 0x30 < 10) || (uVar4 = (uint)bVar13, (uVar4 & 0xffffffdf) - 0x41 < 0x1a)) {
        bVar13 = bVar14;
        if (((bVar14 & 1) != 0) && ((byte *)0x3 < pbVar8)) {
          iVar2 = FUN_003cab60(pbVar6,&DAT_001ce5f7,4);
          bVar13 = 8;
          if (iVar2 != 0) {
            bVar13 = bVar14;
          }
        }
        bVar14 = bVar13 & 0xfa;
      }
      else if (uVar4 == 0x2d) {
        if ((bVar14 & 1) != 0) goto LAB_00424d70;
        bVar14 = bVar14 | 4;
      }
      else {
        if ((uVar4 != 0x2e) || ((bVar14 & 5) != 0)) goto LAB_00424d70;
        iVar15 = iVar15 + 1;
        bVar14 = 1;
      }
      pbVar8 = pbVar8 + -1;
      pbVar6 = pbVar6 + 1;
    } while (pbVar8 != (byte *)0x0);
    if ((((bVar14 & 5) == 0) && (1 < iVar15)) && (pbVar10 != (byte *)0x0)) {
      lVar12 = (long)pbVar10 - (long)param_1;
      pbVar6 = param_1 + (long)param_2 + ~(ulong)pbVar10;
      if (param_4 < pbVar6 + lVar12) {
        return 0;
      }
      if (lVar12 != 0) {
        lVar5 = (long)param_1 - (long)pbVar10;
        pbVar9 = param_3;
        pbVar8 = param_1;
        do {
          bVar14 = *pbVar8;
          if (bVar14 == 0) {
            return 0;
          }
          bVar13 = *pbVar9;
          if ((uint)bVar14 != (uint)bVar13) {
            uVar7 = (uint)bVar14;
            uVar4 = uVar7 | 0x20;
            if (0x19 < uVar7 - 0x41) {
              uVar4 = uVar7;
            }
            uVar7 = bVar13 | 0x20;
            if (0x19 < bVar13 - 0x41) {
              uVar7 = (uint)bVar13;
            }
            if (uVar4 != uVar7) {
              return 0;
            }
          }
          bVar1 = lVar5 != -1;
          lVar5 = lVar5 + 1;
          pbVar8 = pbVar8 + 1;
          pbVar9 = pbVar9 + 1;
        } while (bVar1);
      }
      if (pbVar6 != (byte *)0x0) {
        lVar5 = (long)pbVar10 - (long)(param_2 + (long)param_1);
        pbVar8 = pbVar10 + 1;
        do {
          lVar5 = lVar5 + 1;
          bVar14 = (param_3 + (long)param_4)[lVar5];
          if (bVar14 == 0) {
            return 0;
          }
          bVar13 = *pbVar8;
          if ((uint)bVar14 != (uint)bVar13) {
            uVar7 = (uint)bVar14;
            uVar4 = uVar7 | 0x20;
            if (0x19 < uVar7 - 0x41) {
              uVar4 = uVar7;
            }
            uVar7 = bVar13 | 0x20;
            if (0x19 < bVar13 - 0x41) {
              uVar7 = (uint)bVar13;
            }
            if (uVar4 != uVar7) {
              return 0;
            }
          }
          pbVar8 = pbVar8 + 1;
        } while (lVar5 != -1);
      }
      if ((lVar12 == 0) && (pbVar10[1] == 0x2e)) {
        if (param_4 == pbVar6) {
          return 0;
        }
        uVar4 = param_5 >> 3 & 1;
        lVar5 = (long)param_4 - (long)pbVar6;
        if (param_3 + lVar5 == param_3 + 1) {
LAB_00424f54:
          if (lVar5 == lVar12) {
            return 1;
          }
          if (param_3[lVar12] == 0x2a) {
            return 1;
          }
          goto LAB_00424fbc;
        }
      }
      else {
        if (((byte *)0x3 < param_4) &&
           (uVar3 = FUN_003cab60(param_3,&DAT_001ce5f7,4), (int)uVar3 == 0)) {
          return uVar3;
        }
        uVar4 = 0;
        lVar5 = (long)param_4 - (long)pbVar6;
        if (param_3 + lVar5 == param_3 + lVar12 + 1) goto LAB_00424f54;
      }
      if (lVar5 == lVar12) {
        return 1;
      }
LAB_00424fbc:
      param_3 = param_3 + lVar12;
      param_4 = param_4 + (1 - (long)param_2);
      do {
        bVar14 = *param_3;
        if (9 < bVar14 - 0x30 && 0x19 < bVar14 - 0x41) {
          uVar11 = (uint)bVar14;
          uVar7 = 0;
          if (uVar11 == 0x2e) {
            uVar7 = uVar4;
          }
          if (((uVar7 == 0) && (uVar11 != 0x2d)) && (0x19 < uVar11 - 0x61)) {
            return 0;
          }
        }
        param_4 = param_4 + -1;
        param_3 = param_3 + 1;
        if (param_4 == (byte *)0x0) {
          return 1;
        }
      } while( true );
    }
  }
LAB_00424d70:
  pbVar6 = param_1;
  pbVar8 = param_2;
  if ((param_5 >> 0xf & 1) != 0) {
    pbVar8 = param_1;
    pbVar10 = param_2;
    if (param_4 <= param_2 && (long)param_2 - (long)param_4 != 0) {
      pbVar6 = param_1 + ((long)param_2 - (long)param_4);
      if ((param_5 >> 4 & 1) == 0) {
        do {
          if (*pbVar8 == 0) goto LAB_00424dd4;
          pbVar10 = pbVar10 + -1;
          pbVar8 = pbVar8 + 1;
        } while (param_4 < pbVar10);
      }
      else {
        do {
          if ((*pbVar8 == 0) || (*pbVar8 == 0x2e)) goto LAB_00424dd4;
          pbVar10 = pbVar10 + -1;
          pbVar8 = pbVar8 + 1;
        } while (param_4 < pbVar10);
      }
      goto LAB_00424dec;
    }
LAB_00424dd4:
    pbVar6 = pbVar8;
    pbVar8 = param_4;
    if (pbVar10 != param_4) {
      pbVar6 = param_1;
      pbVar8 = param_2;
    }
  }
  if (pbVar8 != param_4) {
    return 0;
  }
LAB_00424dec:
  if (param_4 != (byte *)0x0) {
    do {
      bVar14 = *pbVar6;
      if (bVar14 == 0) {
        return 0;
      }
      bVar13 = *param_3;
      if ((uint)bVar14 != (uint)bVar13) {
        uVar7 = (uint)bVar14;
        uVar4 = uVar7 | 0x20;
        if (0x19 < uVar7 - 0x41) {
          uVar4 = uVar7;
        }
        uVar7 = bVar13 | 0x20;
        if (0x19 < bVar13 - 0x41) {
          uVar7 = (uint)bVar13;
        }
        if (uVar4 != uVar7) {
          return 0;
        }
      }
      param_4 = param_4 + -1;
      pbVar6 = pbVar6 + 1;
      param_3 = param_3 + 1;
    } while (param_4 != (byte *)0x0);
  }
  return 1;
}


// ===== 00425014  FUN_00425014 =====

bool FUN_00425014(char *param_1,ulong param_2,void *param_3,ulong param_4,uint param_5)

{
  bool bVar1;
  int iVar2;
  char *__s1;
  char *pcVar3;
  ulong uVar4;
  
  if ((param_5 >> 0xf & 1) != 0) {
    pcVar3 = param_1;
    uVar4 = param_2;
    if (param_4 <= param_2 && param_2 - param_4 != 0) {
      __s1 = param_1 + (param_2 - param_4);
      if ((param_5 >> 4 & 1) == 0) {
        do {
          if (*pcVar3 == '\0') goto LAB_0042508c;
          uVar4 = uVar4 - 1;
          pcVar3 = pcVar3 + 1;
        } while (param_4 < uVar4);
      }
      else {
        do {
          if ((*pcVar3 == '\0') || (*pcVar3 == '.')) goto LAB_0042508c;
          uVar4 = uVar4 - 1;
          pcVar3 = pcVar3 + 1;
        } while (param_4 < uVar4);
      }
      goto LAB_004250a8;
    }
LAB_0042508c:
    __s1 = pcVar3;
    if (uVar4 == param_4) goto LAB_004250a8;
  }
  bVar1 = param_2 != param_4;
  __s1 = param_1;
  param_4 = param_2;
  if (bVar1) {
    return false;
  }
LAB_004250a8:
  iVar2 = memcmp(__s1,param_3,param_4);
  return iVar2 == 0;
}


// ===== 004250d0  FUN_004250d0 =====

ulong FUN_004250d0(int *param_1,int param_2,code *param_3,undefined4 param_4,void *param_5,
                  size_t param_6,long *param_7)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  void *__s1;
  undefined8 local_48;
  
  __s1 = *(void **)(param_1 + 2);
  if (__s1 != (void *)0x0) {
    iVar2 = *param_1;
    if (iVar2 != 0) {
      if (param_2 < 1) {
        iVar2 = FUN_003e2e2c(&local_48,param_1);
        if (iVar2 < 0) {
          return 0xffffffff;
        }
        uVar1 = (*param_3)(local_48,iVar2,param_5,param_6,param_4);
        if ((param_7 != (long *)0x0) && (0 < (int)uVar1)) {
          lVar4 = FUN_003ca354(local_48,iVar2,"crypto/x509/v3_utl.c",0x361);
          *param_7 = lVar4;
          if (lVar4 == 0) {
            FUN_003c86b4(local_48,"crypto/x509/v3_utl.c",0x363);
            return 0xffffffff;
          }
        }
        uVar3 = (ulong)uVar1;
        FUN_003c86b4(local_48,"crypto/x509/v3_utl.c",0x367);
      }
      else {
        if (param_1[1] != param_2) {
          return 0;
        }
        if (param_2 == 0x16) {
          uVar3 = (*param_3)(__s1,(long)iVar2,param_5,param_6,param_4);
        }
        else {
          if (iVar2 != (int)param_6) {
            return 0;
          }
          iVar2 = memcmp(__s1,param_5,param_6);
          uVar3 = (ulong)(iVar2 == 0);
        }
        if ((param_7 != (long *)0x0) && (uVar1 = (uint)uVar3, 0 < (int)uVar1)) {
          lVar4 = FUN_003ca354(*(undefined8 *)(param_1 + 2),(long)*param_1,"crypto/x509/v3_utl.c",
                               0x350);
          *param_7 = lVar4;
          if (lVar4 == 0) {
            uVar1 = 0xffffffff;
          }
          return (ulong)uVar1;
        }
      }
      return uVar3;
    }
  }
  return 0;
}


// ===== 004252cc  FUN_004252cc =====

undefined8 FUN_004252cc(undefined1 *param_1,uint param_2,long param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  ulong uVar7;
  int *piVar8;
  uint uVar9;
  
  piVar8 = (int *)(param_3 + 0x10);
  iVar6 = *piVar8;
  if (iVar6 == 0x10) {
    return 0;
  }
  uVar7 = (ulong)param_2;
  if (param_2 == 0) {
    if (*(int *)(param_3 + 0x14) == -1) {
      *(int *)(param_3 + 0x14) = iVar6;
    }
    else if (*(int *)(param_3 + 0x14) != iVar6) {
      return 0;
    }
    piVar8 = (int *)(param_3 + 0x18);
    iVar6 = 1;
  }
  else if ((int)param_2 < 5) {
    uVar9 = 0;
    puVar1 = (undefined1 *)(param_3 + iVar6);
    do {
      uVar4 = FUN_003ca5a0(*param_1);
      if ((int)uVar4 < 0) {
        return 0;
      }
      uVar2 = uVar9 << 4;
      uVar3 = (int)uVar7 - 1;
      uVar7 = (ulong)uVar3;
      param_1 = param_1 + 1;
      uVar9 = uVar4 & 0xff | uVar2;
    } while (uVar3 != 0);
    puVar1[1] = (char)uVar9;
    *puVar1 = (char)(uVar2 >> 8);
    iVar6 = 2;
  }
  else {
    if ((0xc < iVar6) || (param_1[uVar7] != '\0')) {
      return 0;
    }
    uVar5 = FUN_00424840(param_3 + iVar6,param_1);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
    iVar6 = 4;
  }
  *piVar8 = *piVar8 + iVar6;
  return 1;
}


// ===== 004253e4  FUN_004253e4 =====

undefined8 FUN_004253e4(void)

{
  long lVar1;
  
  lVar1 = FUN_0037aa50(0x11000076);
  if (lVar1 != 0) {
    return 1;
  }
  FUN_00379fc4(&DAT_0077e8c0);
  return 1;
}


// ===== 00425420  thunk_FUN_0040caf8 =====

undefined4 thunk_FUN_0040caf8(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    return *param_1;
  }
  return 0xffffffff;
}


// ===== 00425424  FUN_00425424 =====

int FUN_00425424(long param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar3 = FUN_003dcce8(param_2);
  if (lVar3 == 0) {
    return -2;
  }
  if (param_1 != 0) {
    if (param_3 < 0) {
      param_3 = -1;
    }
    iVar1 = FUN_0040caf8(param_1);
    while (param_3 = param_3 + 1, param_3 < iVar1) {
      puVar4 = (undefined8 *)FUN_0040cb0c(param_1,param_3);
      iVar2 = FUN_003de61c(*puVar4,lVar3);
      if (iVar2 == 0) {
        return param_3;
      }
    }
  }
  return -1;
}


// ===== 004254d0  FUN_004254d0 =====

int FUN_004254d0(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if (param_1 != 0) {
    if (param_3 < 0) {
      param_3 = -1;
    }
    iVar1 = FUN_0040caf8();
    while (param_3 = param_3 + 1, param_3 < iVar1) {
      puVar3 = (undefined8 *)FUN_0040cb0c(param_1,param_3);
      iVar2 = FUN_003de61c(*puVar3,param_2);
      if (iVar2 == 0) {
        return param_3;
      }
    }
  }
  return -1;
}


// ===== 00425550  FUN_00425550 =====

undefined8 FUN_00425550(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/x509_att.c",0x3b,"X509at_get_attr");
    FUN_00379a5c(0xb,0xc0102,0);
    return 0;
  }
  iVar1 = FUN_0040caf8();
  if ((-1 < param_2) && (param_2 < iVar1)) {
    uVar2 = FUN_0040cb0c(param_1,param_2);
    return uVar2;
  }
  FUN_00379868();
  FUN_0037995c("crypto/x509/x509_att.c",0x3f,"X509at_get_attr");
  FUN_00379a5c(0xb,0x80106,0);
  return 0;
}


// ===== 0042560c  FUN_0042560c =====

undefined8 FUN_0042560c(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/x509_att.c",0x48,"X509at_delete_attr");
    FUN_00379a5c(0xb,0xc0102,0);
    return 0;
  }
  iVar1 = FUN_0040caf8();
  if ((-1 < param_2) && (param_2 < iVar1)) {
    uVar2 = FUN_0040c404(param_1,param_2);
    return uVar2;
  }
  FUN_00379868();
  FUN_0037995c("crypto/x509/x509_att.c",0x4c,"X509at_delete_attr");
  FUN_00379a5c(0xb,0x80106,0);
  return 0;
}


// ===== 004256c8  FUN_004256c8 =====

long FUN_004256c8(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((param_1 == (long *)0x0) || (param_2 == 0)) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/x509_att.c",0x59,"ossl_x509at_add1_attr");
    FUN_00379a5c(0xb,0xc0102,0);
    return 0;
  }
  lVar3 = *param_1;
  if ((lVar3 == 0) && (lVar3 = FUN_0040bf0c(), lVar3 == 0)) {
    lVar2 = 0;
    uVar4 = 0x5f;
  }
  else {
    lVar2 = FUN_0043a72c(param_2);
    if (lVar2 == 0) goto LAB_004257c4;
    iVar1 = FUN_0040c89c(lVar3,lVar2);
    if (iVar1 != 0) {
      if (*param_1 != 0) {
        return lVar3;
      }
      *param_1 = lVar3;
      return lVar3;
    }
    uVar4 = 0x69;
  }
  FUN_00379868();
  FUN_0037995c("crypto/x509/x509_att.c",uVar4,"ossl_x509at_add1_attr");
  FUN_00379a5c(0xb,0x8000f,0);
LAB_004257c4:
  FUN_0043a720(lVar2);
  if (*param_1 != 0) {
    return 0;
  }
  FUN_0040bd78(lVar3);
  return 0;
}


// ===== 00425824  FUN_00425824 =====

undefined8 FUN_00425824(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  
  if ((param_1 == (long *)0x0) || (param_2 == (undefined8 *)0x0)) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/x509_att.c",0x7a,"X509at_add1_attr");
    uVar5 = 0xc0102;
LAB_004258e0:
    FUN_00379a5c(0xb,uVar5,0);
    return 0;
  }
  lVar4 = *param_1;
  if (lVar4 != 0) {
    uVar5 = *param_2;
    uVar1 = FUN_0040caf8(lVar4);
    uVar6 = 0;
    do {
      if ((uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) == uVar6) goto LAB_00425900;
      puVar3 = (undefined8 *)FUN_0040cb0c(lVar4,uVar6);
      iVar2 = FUN_003de61c(*puVar3,uVar5);
      uVar6 = uVar6 + 1;
    } while (iVar2 != 0);
    if (uVar6 != 0) {
      FUN_00379868();
      FUN_0037995c("crypto/x509/x509_att.c",0x7e,"X509at_add1_attr");
      uVar5 = 0x8c;
      goto LAB_004258e0;
    }
  }
LAB_00425900:
  uVar5 = FUN_004256c8(param_1,param_2);
  return uVar5;
}


// ===== 0042591c  FUN_0042591c =====

undefined8 FUN_0042591c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00425970(0);
  if (lVar1 != 0) {
    uVar2 = FUN_004256c8(param_1,lVar1);
    FUN_0043a720(lVar1);
    return uVar2;
  }
  return 0;
}


// ===== 00425970  FUN_00425970 =====

long * FUN_00425970(long *param_1,long param_2,undefined4 param_3,undefined8 param_4,
                   undefined4 param_5)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if (((param_1 == (long *)0x0) || (plVar3 = (long *)*param_1, plVar3 == (long *)0x0)) &&
     (plVar3 = (long *)FUN_0043a714(), plVar3 == (long *)0x0)) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/x509_att.c",0x123,"X509_ATTRIBUTE_create_by_OBJ");
    FUN_00379a5c(0xb,0x8000d,0);
    return (long *)0x0;
  }
  if (param_2 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/x509_att.c",0x14d,"X509_ATTRIBUTE_set1_object");
    FUN_00379a5c(0xb,0xc0102,0);
  }
  else {
    FUN_0039a0f4(*plVar3);
    lVar2 = FUN_003de510(param_2);
    *plVar3 = lVar2;
    if ((lVar2 != 0) && (iVar1 = FUN_004264b4(plVar3,param_3,param_4,param_5), iVar1 != 0)) {
      if ((param_1 != (long *)0x0) && (*param_1 == 0)) {
        *param_1 = (long)plVar3;
        return plVar3;
      }
      return plVar3;
    }
  }
  if ((param_1 == (long *)0x0) || (plVar3 != (long *)*param_1)) {
    FUN_0043a720(plVar3);
  }
  return (long *)0x0;
}


// ===== 00425ad0  FUN_00425ad0 =====

undefined8
FUN_00425ad0(long *param_1,long param_2,undefined4 param_3,undefined8 param_4,undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  
  if ((param_1 == (long *)0x0) || (param_2 == 0)) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/x509_att.c",0x9d,"X509at_add1_attr_by_OBJ");
    uVar4 = 0xc0102;
LAB_00425b98:
    FUN_00379a5c(0xb,uVar4,0);
  }
  else {
    lVar5 = *param_1;
    if (lVar5 != 0) {
      uVar1 = FUN_0040caf8(lVar5);
      uVar6 = 0;
      do {
        if ((uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) == uVar6) goto LAB_00425ba4;
        puVar3 = (undefined8 *)FUN_0040cb0c(lVar5,uVar6);
        iVar2 = FUN_003de61c(*puVar3,param_2);
        uVar6 = uVar6 + 1;
      } while (iVar2 != 0);
      if (uVar6 != 0) {
        FUN_00379868();
        FUN_0037995c("crypto/x509/x509_att.c",0xa1,"X509at_add1_attr_by_OBJ");
        uVar4 = 0x8c;
        goto LAB_00425b98;
      }
    }
LAB_00425ba4:
    lVar5 = FUN_00425970(0,param_2,param_3,param_4,param_5);
    if (lVar5 != 0) {
      uVar4 = FUN_004256c8(param_1,lVar5);
      FUN_0043a720(lVar5);
      return uVar4;
    }
  }
  return 0;
}


// ===== 00425c14  FUN_00425c14 =====

undefined8
FUN_00425c14(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
            undefined4 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_003dcce8(param_2);
  if (lVar1 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/x509_att.c",0x111,"X509_ATTRIBUTE_create_by_NID");
    FUN_00379a5c(0xb,0x6d,0);
    return 0;
  }
  lVar2 = FUN_00425970(0,lVar1,param_3,param_4,param_5);
  if (lVar2 != 0) {
    uVar3 = FUN_004256c8(param_1,lVar2);
    FUN_0043a720(lVar2);
    return uVar3;
  }
  FUN_0039a0f4(lVar1);
  return 0;
}


// ===== 00425cfc  FUN_00425cfc =====

long FUN_00425cfc(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_003dcce8(param_2);
  if (lVar1 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/x509_att.c",0x111,"X509_ATTRIBUTE_create_by_NID");
    FUN_00379a5c(0xb,0x6d,0);
    return 0;
  }
  lVar2 = FUN_00425970(param_1,lVar1,param_3,param_4,param_5);
  if (lVar2 != 0) {
    return lVar2;
  }
  FUN_0039a0f4(lVar1);
  return 0;
}


// ===== 00425dc4  FUN_00425dc4 =====

undefined8
FUN_00425dc4(long *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
            undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  
  if (param_1 == (long *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/x509_att.c",0xbe,"X509at_add1_attr_by_NID");
    uVar5 = 0xc0102;
  }
  else {
    lVar6 = *param_1;
    if (lVar6 == 0) {
LAB_00425e74:
      uVar5 = FUN_00425c14(param_1,param_2,param_3,param_4,param_5);
      return uVar5;
    }
    lVar3 = FUN_003dcce8(param_2);
    if (lVar3 != 0) {
      uVar1 = FUN_0040caf8(lVar6);
      uVar7 = 0;
      do {
        if ((uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) == uVar7) goto LAB_00425e74;
        puVar4 = (undefined8 *)FUN_0040cb0c(lVar6,uVar7);
        iVar2 = FUN_003de61c(*puVar4,lVar3);
        uVar7 = uVar7 + 1;
      } while (iVar2 != 0);
      if (uVar7 == 0) goto LAB_00425e74;
    }
    FUN_00379868();
    FUN_0037995c("crypto/x509/x509_att.c",0xc2,"X509at_add1_attr_by_NID");
    uVar5 = 0x8c;
  }
  FUN_00379a5c(0xb,uVar5,0);
  return 0;
}


// ===== 00425ef4  FUN_00425ef4 =====

undefined8
FUN_00425ef4(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            undefined4 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_003dce7c(param_2,0);
  if (lVar1 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/x509_att.c",0x141,"X509_ATTRIBUTE_create_by_txt");
    FUN_00379a5c(0xb,0x77,"name=%s",param_2);
  }
  else {
    lVar2 = FUN_00425970(0,lVar1,param_3,param_4,param_5);
    FUN_0039a0f4(lVar1);
    if (lVar2 != 0) {
      uVar3 = FUN_004256c8(param_1,lVar2);
      FUN_0043a720(lVar2);
      return uVar3;
    }
  }
  return 0;
}


// ===== 00425fd4  FUN_00425fd4 =====

undefined8
FUN_00425fd4(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            undefined4 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_003dce7c(param_2,0);
  if (lVar1 != 0) {
    uVar2 = FUN_00425970(param_1,lVar1,param_3,param_4,param_5);
    FUN_0039a0f4(lVar1);
    return uVar2;
  }
  FUN_00379868();
  FUN_0037995c("crypto/x509/x509_att.c",0x141,"X509_ATTRIBUTE_create_by_txt");
  FUN_00379a5c(0xb,0x77,"name=%s",param_2);
  return 0;
}


// ===== 00426098  FUN_00426098 =====

undefined8
FUN_00426098(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            undefined4 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_003dce7c(param_2,0);
  if (lVar1 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/x509_att.c",0x141,"X509_ATTRIBUTE_create_by_txt");
    FUN_00379a5c(0xb,0x77,"name=%s",param_2);
  }
  else {
    lVar2 = FUN_00425970(0,lVar1,param_3,param_4,param_5);
    FUN_0039a0f4(lVar1);
    if (lVar2 != 0) {
      uVar3 = FUN_00425824(param_1,lVar2);
      FUN_0043a720(lVar2);
      return uVar3;
    }
  }
  return 0;
}


// ===== 00426178  FUN_00426178 =====

undefined8 FUN_00426178(long param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  
  if (param_1 != 0) {
    iVar3 = param_3;
    if (param_3 < 0) {
      iVar3 = -1;
    }
    iVar1 = FUN_0040caf8();
    iVar3 = iVar3 + 1;
    do {
      iVar7 = iVar3;
      if (iVar1 <= iVar7) {
        return 0;
      }
      puVar4 = (undefined8 *)FUN_0040cb0c(param_1,iVar7);
      iVar2 = FUN_003de61c(*puVar4,param_2);
      iVar3 = iVar7 + 1;
    } while (iVar2 != 0);
    if (iVar7 + 1 != 0) {
      if (param_3 + 1 < 0 == SCARRY4(param_3,1)) {
        lVar5 = FUN_00425550(param_1,iVar7);
LAB_00426294:
        uVar6 = FUN_004262c4(lVar5,0,param_4);
        return uVar6;
      }
      iVar3 = iVar7;
      if (iVar7 < 0) {
        iVar3 = -1;
      }
      iVar1 = FUN_0040caf8(param_1);
      do {
        iVar3 = iVar3 + 1;
        if (iVar1 <= iVar3) goto LAB_00426234;
        puVar4 = (undefined8 *)FUN_0040cb0c(param_1,iVar3);
        iVar2 = FUN_003de61c(*puVar4,param_2);
      } while (iVar2 != 0);
      if (iVar3 == -1) {
LAB_00426234:
        lVar5 = FUN_00425550(param_1,iVar7);
        if ((param_3 == -2) ||
           ((lVar5 != 0 && (iVar3 = FUN_0040caf8(*(undefined8 *)(lVar5 + 8)), iVar3 == 1))))
        goto LAB_00426294;
      }
    }
  }
  return 0;
}


// ===== 004262b4  FUN_004262b4 =====

void FUN_004262b4(long param_1)

{
  if (param_1 != 0) {
    FUN_0040caf8(*(undefined8 *)(param_1 + 8));
    return;
  }
  return;
}


// ===== 004262c4  FUN_004262c4 =====

long FUN_004262c4(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  
  if (param_1 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/x509_att.c",0x1b4,"X509_ATTRIBUTE_get0_type");
    FUN_00379a5c(0xb,0xc0102,0);
    return 0;
  }
  lVar2 = FUN_0040cb0c(*(undefined8 *)(param_1 + 8));
  if (lVar2 != 0) {
    if (((param_3 & 0xfffffffb) == 1) || (uVar1 = FUN_0039adb8(), uVar1 != param_3)) {
      FUN_00379868();
      FUN_0037995c("crypto/x509/x509_att.c",0x1ab,"X509_ATTRIBUTE_get0_data");
      FUN_00379a5c(0xb,0x7a,0);
      return 0;
    }
    lVar2 = *(long *)(lVar2 + 8);
  }
  return lVar2;
}


// ===== 0042638c  FUN_0042638c =====

undefined8 FUN_0042638c(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  undefined8 local_18;
  
  iVar1 = FUN_0040caf8();
  local_18 = 0;
  if (iVar1 < 1) {
    return 0;
  }
  iVar4 = 0;
  do {
    uVar2 = FUN_0040cb0c(param_1,iVar4);
    lVar3 = FUN_00425824(&local_18,uVar2);
    if (lVar3 == 0) {
      FUN_0040ca6c(local_18,PTR_FUN_007a1b48);
      return 0;
    }
    iVar4 = iVar4 + 1;
  } while (iVar1 != iVar4);
  return local_18;
}


// ===== 0042642c  FUN_0042642c =====

bool FUN_0042642c(long *param_1,long param_2)

{
  long lVar1;
  
  if ((param_1 != (long *)0x0) && (param_2 != 0)) {
    FUN_0039a0f4(*param_1);
    lVar1 = FUN_003de510(param_2);
    *param_1 = lVar1;
    return lVar1 != 0;
  }
  FUN_00379868();
  FUN_0037995c("crypto/x509/x509_att.c",0x14d,"X509_ATTRIBUTE_set1_object");
  FUN_00379a5c(0xb,0xc0102,0);
  return false;
}


// ===== 004264b4  FUN_004264b4 =====

undefined8 FUN_004264b4(undefined8 *param_1,uint param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/x509_att.c",0x15d,"X509_ATTRIBUTE_set1_data");
    uVar2 = 0xc0102;
LAB_004265fc:
    FUN_00379a5c(0xb,uVar2,0);
    return 0;
  }
  uVar2 = 0x8000d;
  if ((param_2 >> 0xc & 1) == 0) {
    if (param_4 == -1) {
      lVar3 = 0;
      uVar6 = 0;
    }
    else {
      lVar3 = FUN_0038ee84(param_2);
      if ((lVar3 == 0) || (iVar1 = FUN_0038ebe0(lVar3,param_3,param_4), uVar6 = param_2, iVar1 == 0)
         ) {
        lVar4 = 0;
        uVar5 = 0x16b;
        goto LAB_00426634;
      }
    }
    if (param_2 == 0) {
      FUN_0038eddc(lVar3);
      return 1;
    }
  }
  else {
    uVar2 = FUN_003dd5b4(*param_1);
    lVar3 = FUN_003c289c(0,param_3,param_4,param_2,uVar2);
    if (lVar3 == 0) {
      FUN_00379868();
      FUN_0037995c("crypto/x509/x509_att.c",0x164,"X509_ATTRIBUTE_set1_data");
      uVar2 = 0x8000d;
      goto LAB_004265fc;
    }
    uVar6 = *(uint *)(lVar3 + 4);
  }
  lVar4 = FUN_0038a64c();
  uVar2 = 0x8000d;
  if (lVar4 == 0) {
    uVar5 = 0x17a;
  }
  else {
    if (((param_2 >> 0xc & 1) == 0) && (param_4 == -1)) {
      iVar1 = FUN_0039ae70(lVar4,param_2,param_3);
      if (iVar1 == 0) {
        uVar5 = 0x17f;
        goto LAB_00426634;
      }
    }
    else {
      FUN_0039ade0(lVar4,uVar6,lVar3);
      lVar3 = 0;
    }
    iVar1 = FUN_0040c89c(param_1[1],lVar4);
    if (iVar1 != 0) {
      return 1;
    }
    uVar5 = 0x187;
    uVar2 = 0x8000f;
  }
LAB_00426634:
  FUN_00379868();
  FUN_0037995c("crypto/x509/x509_att.c",uVar5,"X509_ATTRIBUTE_set1_data");
  FUN_00379a5c(0xb,uVar2,0);
  FUN_0038a658(lVar4);
  FUN_0038eddc(lVar3);
  return 0;
}


// ===== 004266b0  FUN_004266b0 =====

undefined8 FUN_004266b0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    return *param_1;
  }
  FUN_00379868();
  FUN_0037995c("crypto/x509/x509_att.c",0x19b,"X509_ATTRIBUTE_get0_object");
  FUN_00379a5c(0xb,0xc0102,0);
  return 0;
}


// ===== 00426700  FUN_00426700 =====

undefined8 FUN_00426700(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_0040cb0c(*(undefined8 *)(param_1 + 8));
    return uVar1;
  }
  FUN_00379868();
  FUN_0037995c("crypto/x509/x509_att.c",0x1b4,"X509_ATTRIBUTE_get0_type");
  FUN_00379a5c(0xb,0xc0102,0);
  return 0;
}


// ===== 00426750  FUN_00426750 =====

ulong FUN_00426750(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return (ulong)(param_1 != 0);
  }
  if (param_1 != 0) {
    iVar1 = FUN_0038d110(param_1 + 8,param_2 + 8);
    if (iVar1 != 0) {
      return (ulong)(iVar1 >> 0x1f | 1);
    }
    uVar2 = FUN_004267c8(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_2 + 0x30));
    return uVar2;
  }
  return 0xffffffff;
}


// ===== 004267c8  FUN_004267c8 =====

uint FUN_004267c8(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 == 0) {
    return (uint)(param_1 != 0);
  }
  if (param_1 == 0) {
    return 0xffffffff;
  }
  if ((((*(long *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 8) == 0)) ||
      (iVar2 = FUN_0043b548(param_1,0), -1 < iVar2)) &&
     (((*(long *)(param_2 + 0x18) != 0 && (*(int *)(param_2 + 8) == 0)) ||
      (iVar2 = FUN_0043b548(param_2,0), -1 < iVar2)))) {
    iVar1 = *(int *)(param_1 + 0x20);
    iVar2 = *(int *)(param_2 + 0x20);
    if (iVar1 == iVar2 && iVar1 == 0) {
      return 0;
    }
    if (iVar1 != iVar2) {
      uVar3 = (uint)(0 < iVar1 - iVar2);
      if (iVar1 - iVar2 < 0) {
        uVar3 = 0xffffffff;
      }
      return uVar3;
    }
    if ((*(void **)(param_1 + 0x18) != (void *)0x0) && (*(void **)(param_2 + 0x18) != (void *)0x0))
    {
      iVar2 = memcmp(*(void **)(param_1 + 0x18),*(void **)(param_2 + 0x18),(long)iVar1);
      uVar3 = (uint)(0 < iVar2);
      if (iVar2 < 0) {
        uVar3 = 0xffffffff;
      }
      return uVar3;
    }
  }
  return 0xfffffffe;
}


// ===== 004268c4  FUN_004268c4 =====

undefined4 FUN_004268c4(long param_1)

{
  int iVar1;
  long lVar2;
  char *__s;
  long lVar3;
  size_t sVar4;
  undefined4 local_40 [4];
  
  lVar2 = FUN_0039d270();
  if (lVar2 == 0) {
    __s = (char *)0x0;
    lVar3 = 0;
    local_40[0] = 0;
  }
  else {
    __s = (char *)FUN_00428ff8(*(undefined8 *)(param_1 + 0x30),0,0);
    if (__s == (char *)0x0) {
      lVar3 = 0;
      local_40[0] = 0;
    }
    else {
      lVar3 = FUN_0039e6f4(*(undefined8 *)(param_1 + 0x160),&DAT_001f35df,
                           *(undefined8 *)(param_1 + 0x168));
      if ((lVar3 != 0) && (iVar1 = FUN_0039d92c(lVar2,lVar3,0), iVar1 != 0)) {
        sVar4 = strlen(__s);
        iVar1 = FUN_0039d938(lVar2,__s,sVar4);
        if ((iVar1 != 0) &&
           ((iVar1 = FUN_0039d938(lVar2,*(undefined8 *)(param_1 + 0x10),(long)*(int *)(param_1 + 8))
            , iVar1 != 0 && (iVar1 = FUN_0039dac8(lVar2,local_40,0), iVar1 != 0))))
        goto LAB_00426998;
      }
      local_40[0] = 0;
    }
  }
LAB_00426998:
  FUN_003c86b4(__s,"crypto/x509/x509_cmp.c",0x44);
  FUN_0039d050(lVar3);
  FUN_0039d284(lVar2);
  return local_40[0];
}


// ===== 004269d4  FUN_004269d4 =====

void FUN_004269d4(long param_1,long param_2)

{
  FUN_004267c8(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_2 + 0x30));
  return;
}


// ===== 004269e0  FUN_004269e0 =====

void FUN_004269e0(long param_1,long param_2)

{
  FUN_004267c8(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_2 + 0x48));
  return;
}


// ===== 004269ec  FUN_004269ec =====

void FUN_004269ec(long param_1,long param_2)

{
  FUN_004267c8(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_2 + 0x18));
  return;
}


// ===== 004269f8  FUN_004269f8 =====

/* WARNING: Removing unreachable block (ram,0x00426a5c) */

uint FUN_004269f8(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (((*(byte *)(param_1 + 0x86) >> 4 & 1) == 0) && ((*(byte *)(param_2 + 0x86) >> 4 & 1) == 0)) {
    uVar4 = (*(ulong *)(param_1 + 0xb8) & 0xff00ff00ff00ff00) >> 8 |
            (*(ulong *)(param_1 + 0xb8) & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    uVar3 = uVar4 >> 0x20 | uVar4 << 0x20;
    uVar4 = (*(ulong *)(param_2 + 0xb8) & 0xff00ff00ff00ff00) >> 8 |
            (*(ulong *)(param_2 + 0xb8) & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
    if (uVar3 == uVar4) {
      uVar4 = (*(ulong *)(param_1 + 0xc0) & 0xff00ff00ff00ff00) >> 8 |
              (*(ulong *)(param_1 + 0xc0) & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      uVar3 = uVar4 >> 0x20 | uVar4 << 0x20;
      uVar4 = (*(ulong *)(param_2 + 0xc0) & 0xff00ff00ff00ff00) >> 8 |
              (*(ulong *)(param_2 + 0xc0) & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
      if (uVar3 == uVar4) {
        uVar2 = (*(uint *)(param_1 + 200) & 0xff00ff00) >> 8 |
                (*(uint *)(param_1 + 200) & 0xff00ff) << 8;
        uVar3 = (ulong)(uVar2 >> 0x10 | uVar2 << 0x10);
        uVar2 = (*(uint *)(param_2 + 200) & 0xff00ff00) >> 8 |
                (*(uint *)(param_2 + 200) & 0xff00ff) << 8;
        uVar4 = (ulong)(uVar2 >> 0x10 | uVar2 << 0x10);
        if (uVar3 == uVar4) {
          return 0;
        }
      }
    }
    iVar1 = 1;
    if (uVar3 < uVar4) {
      iVar1 = -1;
    }
    uVar2 = (uint)(0 < iVar1);
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
    return uVar2;
  }
  return 0xfffffffe;
}


// ===== 00426a88  FUN_00426a88 =====

undefined8 FUN_00426a88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}


// ===== 00426a90  FUN_00426a90 =====

undefined4 FUN_00426a90(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 local_44 [5];
  
  lVar3 = *(long *)(param_1 + 0x30);
  lVar2 = FUN_0039e6f4(0,&DAT_001eef82,0);
  iVar1 = FUN_0043b548(lVar3,0);
  uVar4 = 0;
  if (((-1 < iVar1) && (lVar2 != 0)) &&
     (iVar1 = FUN_0039e518(*(undefined8 *)(lVar3 + 0x18),(long)*(int *)(lVar3 + 0x20),local_44,0,
                           lVar2,0), uVar4 = local_44[0], iVar1 == 0)) {
    uVar4 = 0;
  }
  FUN_0039d050(lVar2);
  return uVar4;
}


// ===== 00426b24  FUN_00426b24 =====

undefined4 FUN_00426b24(long param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 local_44 [5];
  
  lVar2 = FUN_0039e6f4(param_2,&DAT_001eef82);
  iVar1 = FUN_0043b548(param_1,0);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  uVar3 = 0;
  if ((-1 < iVar1) && (lVar2 != 0)) {
    iVar1 = FUN_0039e518(*(undefined8 *)(param_1 + 0x18),(long)*(int *)(param_1 + 0x20),local_44,0,
                         lVar2,0);
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = local_44[0];
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = 1;
      }
    }
  }
  FUN_0039d050(lVar2);
  return uVar3;
}


// ===== 00426bd0  FUN_00426bd0 =====

void FUN_00426bd0(long param_1)

{
  FUN_00426bd8(*(undefined8 *)(param_1 + 0x30));
  return;
}


// ===== 00426bd8  FUN_00426bd8 =====

undefined4 FUN_00426bd8(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 local_40 [4];
  
  lVar2 = FUN_0039e6f4(0,&DAT_001f35df,"-fips");
  lVar3 = FUN_0039d270();
  uVar4 = 0;
  if (((lVar2 != 0) && (lVar3 != 0)) &&
     ((iVar1 = FUN_0043b548(param_1,0), iVar1 < 0 ||
      (((iVar1 = FUN_0039d92c(lVar3,lVar2,0), iVar1 == 0 ||
        (iVar1 = FUN_0039d938(lVar3,(*(undefined8 **)(param_1 + 0x10))[1],
                              **(undefined8 **)(param_1 + 0x10)), iVar1 == 0)) ||
       (iVar1 = FUN_0039dac8(lVar3,local_40,0), uVar4 = local_40[0], iVar1 == 0)))))) {
    uVar4 = 0;
  }
  FUN_0039d284(lVar3);
  FUN_0039d050(lVar2);
  return uVar4;
}


// ===== 00426ca0  FUN_00426ca0 =====

undefined8 FUN_00426ca0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}


// ===== 00426ca8  FUN_00426ca8 =====

long FUN_00426ca8(long param_1)

{
  return param_1 + 8;
}


// ===== 00426cb0  FUN_00426cb0 =====

long FUN_00426cb0(long param_1)

{
  return param_1 + 8;
}


// ===== 00426cb8  FUN_00426cb8 =====

undefined4 FUN_00426cb8(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 local_44 [5];
  
  lVar3 = *(long *)(param_1 + 0x48);
  lVar2 = FUN_0039e6f4(0,&DAT_001eef82,0);
  iVar1 = FUN_0043b548(lVar3,0);
  uVar4 = 0;
  if (((-1 < iVar1) && (lVar2 != 0)) &&
     (iVar1 = FUN_0039e518(*(undefined8 *)(lVar3 + 0x18),(long)*(int *)(lVar3 + 0x20),local_44,0,
                           lVar2,0), uVar4 = local_44[0], iVar1 == 0)) {
    uVar4 = 0;
  }
  FUN_0039d050(lVar2);
  return uVar4;
}


// ===== 00426d4c  FUN_00426d4c =====

void FUN_00426d4c(long param_1)

{
  FUN_00426bd8(*(undefined8 *)(param_1 + 0x48));
  return;
}


// ===== 00426d54  FUN_00426d54 =====

uint FUN_00426d54(long param_1,long param_2)

{
  int iVar1;
  size_t __n;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_1 == param_2) {
    return 0;
  }
  FUN_0041e8a8(param_1,0xffffffff,0);
  FUN_0041e8a8(param_2,0xffffffff,0);
  if (((*(byte *)(param_1 + 0xea) >> 4 & 1) != 0) || ((*(byte *)(param_2 + 0xea) >> 4 & 1) != 0))
  goto LAB_00426e18;
  uVar4 = (*(ulong *)(param_1 + 0x128) & 0xff00ff00ff00ff00) >> 8 |
          (*(ulong *)(param_1 + 0x128) & 0xff00ff00ff00ff) << 8;
  uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
  uVar3 = uVar4 >> 0x20 | uVar4 << 0x20;
  uVar4 = (*(ulong *)(param_2 + 0x128) & 0xff00ff00ff00ff00) >> 8 |
          (*(ulong *)(param_2 + 0x128) & 0xff00ff00ff00ff) << 8;
  uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
  uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
  if (uVar3 == uVar4) {
    uVar4 = (*(ulong *)(param_1 + 0x130) & 0xff00ff00ff00ff00) >> 8 |
            (*(ulong *)(param_1 + 0x130) & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    uVar3 = uVar4 >> 0x20 | uVar4 << 0x20;
    uVar4 = (*(ulong *)(param_2 + 0x130) & 0xff00ff00ff00ff00) >> 8 |
            (*(ulong *)(param_2 + 0x130) & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
    if (uVar3 != uVar4) goto LAB_00426df4;
    uVar2 = (*(uint *)(param_1 + 0x138) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x138) & 0xff00ff) << 8;
    uVar3 = (ulong)(uVar2 >> 0x10 | uVar2 << 0x10);
    uVar2 = (*(uint *)(param_2 + 0x138) & 0xff00ff00) >> 8 |
            (*(uint *)(param_2 + 0x138) & 0xff00ff) << 8;
    uVar4 = (ulong)(uVar2 >> 0x10 | uVar2 << 0x10);
    if (uVar3 != uVar4) goto LAB_00426df4;
    iVar1 = 0;
  }
  else {
LAB_00426df4:
    iVar1 = 1;
    if (uVar3 < uVar4) {
      iVar1 = -1;
    }
  }
  if (iVar1 != 0) {
    return iVar1 >> 0x1f | 1;
  }
LAB_00426e18:
  if (*(int *)(param_1 + 0x80) != 0) {
    return 0;
  }
  if (*(int *)(param_2 + 0x80) != 0) {
    return 0;
  }
  __n = *(size_t *)(param_1 + 0x78);
  if ((long)__n < *(long *)(param_2 + 0x78)) {
    return 0xffffffff;
  }
  if ((long)__n <= *(long *)(param_2 + 0x78)) {
    iVar1 = memcmp(*(void **)(param_1 + 0x70),*(void **)(param_2 + 0x70),__n);
    uVar2 = (uint)(iVar1 != 0);
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
    return uVar2;
  }
  return 1;
}


// ===== 00426ea0  FUN_00426ea0 =====

undefined8 FUN_00426ea0(long *param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*param_1 == 0) {
    lVar1 = FUN_0040bf0c();
    *param_1 = lVar1;
    if (lVar1 == 0) {
      FUN_00379868(0,param_2,param_3);
      FUN_0037995c("crypto/x509/x509_cmp.c",0xbb,"ossl_x509_add_cert_new");
      FUN_00379a5c(0xb,0x8000f,0);
      return 0;
    }
  }
  uVar2 = FUN_00426f2c();
  return uVar2;
}


// ===== 00426f2c  FUN_00426f2c =====

bool FUN_00426f2c(long param_1,undefined8 param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (param_1 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/x509_cmp.c",0xc4,"X509_add_cert");
    uVar1 = 0xc0102;
  }
  else {
    if (((param_3 >> 2 & 1) != 0) && (iVar2 = FUN_0040caf8(param_1), 0 < iVar2)) {
      iVar2 = 0;
      do {
        uVar4 = FUN_0040cb0c(param_1,iVar2);
        iVar3 = FUN_00426d54(uVar4,param_2);
        if (iVar3 == 0) {
          return true;
        }
        iVar2 = iVar2 + 1;
        iVar3 = FUN_0040caf8(param_1);
      } while (iVar2 < iVar3);
    }
    if ((param_3 >> 3 & 1) != 0) {
      iVar2 = FUN_0042a790(param_2,0);
      if (iVar2 != 0) {
        return 0 < iVar2;
      }
    }
    iVar2 = FUN_0040c244(param_1,param_2,(param_3 >> 1 & 1) - 1);
    if (iVar2 != 0) {
      if ((param_3 & 1) != 0) {
        FUN_00429d90(param_2);
      }
      return true;
    }
    FUN_00379868();
    FUN_0037995c("crypto/x509/x509_cmp.c",0xdb,"X509_add_cert");
    uVar1 = 0x8000f;
  }
  FUN_00379a5c(0xb,uVar1,0);
  return false;
}


// ===== 00427068  FUN_00427068 =====

undefined8 FUN_00427068(long param_1)

{
  undefined8 uVar1;
  long local_18;
  
  local_18 = param_1;
  if (param_1 != 0) {
    uVar1 = FUN_004270d0(&local_18);
    return uVar1;
  }
  FUN_00379868();
  FUN_0037995c("crypto/x509/x509_cmp.c",0xe7,"X509_add_certs");
  FUN_00379a5c(0xb,0xc0102,0);
  return 0;
}


// ===== 004270d0  FUN_004270d0 =====

undefined8 FUN_004270d0(long *param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  
  iVar1 = FUN_0040caf8(param_2);
  iVar4 = iVar1 + -1;
  if (0 < iVar1) {
    if ((param_3 >> 1 & 1) == 0) {
      iVar4 = 0;
      do {
        uVar2 = FUN_0040cb0c(param_2,iVar4);
        lVar3 = *param_1;
        if (lVar3 == 0) {
          lVar3 = FUN_0040bf0c(0);
          *param_1 = lVar3;
          if (lVar3 == 0) goto LAB_004271c4;
        }
        uVar2 = FUN_00426f2c(lVar3,uVar2,param_3);
        if ((int)uVar2 == 0) {
          return uVar2;
        }
        iVar4 = iVar4 + 1;
        if (iVar1 == iVar4) {
          return 1;
        }
      } while( true );
    }
    do {
      uVar2 = FUN_0040cb0c(param_2,iVar4);
      lVar3 = *param_1;
      if (lVar3 == 0) {
        lVar3 = FUN_0040bf0c(0);
        *param_1 = lVar3;
        if (lVar3 == 0) {
LAB_004271c4:
          FUN_00379868();
          FUN_0037995c("crypto/x509/x509_cmp.c",0xbb,"ossl_x509_add_cert_new");
          FUN_00379a5c(0xb,0x8000f,0);
          return 0;
        }
      }
      uVar2 = FUN_00426f2c(lVar3,uVar2,param_3);
      if ((int)uVar2 == 0) {
        return uVar2;
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != -1);
  }
  return 1;
}


// ===== 0042720c  FUN_0042720c =====

long FUN_0042720c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_180;
  
  if (param_1 != 0) {
    uStack_1a0 = param_3[1];
    local_1a8 = *param_3;
    local_198 = param_3[2];
    local_180 = param_2;
    iVar1 = FUN_0040caf8();
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        lVar3 = FUN_0040cb0c(param_1,iVar1);
        if (((lVar3 != 0) && (iVar2 = FUN_0038d110(lVar3 + 8,&local_1a8), iVar2 == 0)) &&
           (iVar2 = FUN_004267c8(*(undefined8 *)(lVar3 + 0x30),local_180), iVar2 == 0)) {
          return lVar3;
        }
        iVar1 = iVar1 + 1;
        iVar2 = FUN_0040caf8(param_1);
      } while (iVar1 < iVar2);
    }
  }
  return 0;
}


// ===== 004272c4  FUN_004272c4 =====

long FUN_004272c4(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar1 = FUN_0040caf8();
  if (iVar1 < 1) {
    return 0;
  }
  iVar1 = 0;
  do {
    lVar3 = FUN_0040cb0c(param_1,iVar1);
    iVar2 = FUN_004267c8(*(undefined8 *)(lVar3 + 0x48),param_2);
    if (iVar2 == 0) {
      return lVar3;
    }
    iVar1 = iVar1 + 1;
    iVar2 = FUN_0040caf8(param_1);
  } while (iVar1 < iVar2);
  return 0;
}


// ===== 00427350  FUN_00427350 =====

void FUN_00427350(long param_1)

{
  if (param_1 != 0) {
    FUN_0043c9c8(*(undefined8 *)(param_1 + 0x50));
    return;
  }
  return;
}


// ===== 00427360  FUN_00427360 =====

void FUN_00427360(long param_1)

{
  if (param_1 != 0) {
    FUN_0043ca58(*(undefined8 *)(param_1 + 0x50));
    return;
  }
  return;
}


// ===== 00427370  FUN_00427370 =====

undefined8 FUN_00427370(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((param_1 != 0) && (lVar1 = FUN_0043c9c8(*(undefined8 *)(param_1 + 0x50)), lVar1 != 0)) {
    uVar2 = FUN_004273dc(lVar1,param_2);
    return uVar2;
  }
  FUN_00379868();
  FUN_0037995c("crypto/x509/x509_cmp.c",400,"X509_check_private_key");
  FUN_00379a5c(0xb,0x6c,0);
  return 0;
}


// ===== 004273dc  FUN_004273dc =====

undefined8 FUN_004273dc(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/x509_cmp.c",0x199,"ossl_x509_check_private_key");
    uVar2 = 0xc0102;
  }
  else {
    uVar2 = FUN_003a6e74();
    iVar1 = (int)uVar2;
    if (iVar1 < 0) {
      if (iVar1 == -2) {
        FUN_00379868();
        FUN_0037995c("crypto/x509/x509_cmp.c",0x1a6,"ossl_x509_check_private_key");
        uVar2 = 0x75;
      }
      else {
        if (iVar1 != -1) {
          return 0;
        }
        FUN_00379868();
        FUN_0037995c("crypto/x509/x509_cmp.c",0x1a3,"ossl_x509_check_private_key");
        uVar2 = 0x73;
      }
    }
    else {
      if (iVar1 == 1) {
        return uVar2;
      }
      if (iVar1 != 0) {
        return 0;
      }
      FUN_00379868();
      FUN_0037995c("crypto/x509/x509_cmp.c",0x1a0,"ossl_x509_check_private_key");
      uVar2 = 0x74;
    }
  }
  FUN_00379a5c(0xb,uVar2,0);
  return 0;
}


// ===== 004274c0  FUN_004274c0 =====

undefined8 FUN_004274c0(void)

{
  return 0;
}


// ===== 004274c8  FUN_004274c8 =====

undefined8 FUN_004274c8(void)

{
  return 0;
}


// ===== 004274d0  FUN_004274d0 =====

long FUN_004274d0(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = FUN_0040bc8c();
  if ((lVar3 != 0) && (iVar1 = FUN_0040caf8(lVar3), 0 < iVar1)) {
    iVar1 = 0;
    do {
      FUN_0040cb0c(lVar3,iVar1);
      iVar2 = FUN_00429d90();
      if (iVar2 == 0) {
        if (iVar1 != 0) {
          iVar1 = iVar1 + 1;
          do {
            FUN_0040cb0c(lVar3,iVar1 + -2);
            FUN_0043da80();
            iVar1 = iVar1 + -1;
          } while (1 < iVar1);
        }
        FUN_0040bd78(lVar3);
        return 0;
      }
      iVar1 = iVar1 + 1;
      iVar2 = FUN_0040caf8(lVar3);
    } while (iVar1 < iVar2);
  }
  return lVar3;
}


// ===== 00427574  FUN_00427574 =====

char * FUN_00427574(void)

{
  return "/var/lib/jenkins/.conan2/p/b/opens9bc5eb87a6c66/p/res/private";
}


// ===== 00427580  FUN_00427580 =====

char * FUN_00427580(void)

{
  return "/var/lib/jenkins/.conan2/p/b/opens9bc5eb87a6c66/p/res";
}


// ===== 0042758c  FUN_0042758c =====

char * FUN_0042758c(void)

{
  return "/var/lib/jenkins/.conan2/p/b/opens9bc5eb87a6c66/p/res/certs";
}


// ===== 00427598  FUN_00427598 =====

char * FUN_00427598(void)

{
  return "/var/lib/jenkins/.conan2/p/b/opens9bc5eb87a6c66/p/res/cert.pem";
}


// ===== 004275a4  FUN_004275a4 =====

char * FUN_004275a4(void)

{
  return "SSL_CERT_DIR";
}


// ===== 004275b0  FUN_004275b0 =====

char * FUN_004275b0(void)

{
  return "SSL_CERT_FILE";
}


// ===== 004275bc  FUN_004275bc =====

undefined8 FUN_004275bc(void)

{
  long lVar1;
  
  lVar1 = FUN_0037aa50(0x580006e);
  if (lVar1 != 0) {
    return 1;
  }
  FUN_00379fc4(&DAT_0077ed40);
  return 1;
}


// ===== 004275f8  FUN_004275f8 =====

void FUN_004275f8(long param_1)

{
  FUN_0042a0e4(*(undefined8 *)(param_1 + 0x38));
  return;
}


// ===== 00427600  FUN_00427600 =====

void FUN_00427600(long param_1)

{
  FUN_0042a100(*(undefined8 *)(param_1 + 0x38));
  return;
}


// ===== 00427608  FUN_00427608 =====

void FUN_00427608(long param_1)

{
  FUN_0042a1ac(*(undefined8 *)(param_1 + 0x38));
  return;
}


// ===== 00427610  FUN_00427610 =====

void FUN_00427610(long param_1)

{
  FUN_0042a22c(*(undefined8 *)(param_1 + 0x38));
  return;
}


// ===== 00427618  FUN_00427618 =====

void FUN_00427618(long param_1)

{
  FUN_0042a2c4(*(undefined8 *)(param_1 + 0x38));
  return;
}


// ===== 00427620  FUN_00427620 =====

void FUN_00427620(long param_1)

{
  FUN_0042a310(*(undefined8 *)(param_1 + 0x38));
  return;
}


// ===== 00427628  FUN_00427628 =====

void FUN_00427628(long param_1)

{
  FUN_0041617c(*(undefined8 *)(param_1 + 0x38));
  return;
}


// ===== 00427630  FUN_00427630 =====

void FUN_00427630(long param_1)

{
  FUN_004163a4(param_1 + 0x38);
  return;
}


// ===== 00427638  FUN_00427638 =====

bool FUN_00427638(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_0042a35c(param_1 + 0x38);
  return lVar1 != 0;
}


// ===== 00427658  FUN_00427658 =====

void FUN_00427658(long param_1)

{
  FUN_0042a0e4(*(undefined8 *)(param_1 + 0x68));
  return;
}


// ===== 00427660  FUN_00427660 =====

void FUN_00427660(long param_1)

{
  FUN_0042a100(*(undefined8 *)(param_1 + 0x68));
  return;
}


// ===== 00427668  FUN_00427668 =====

void FUN_00427668(long param_1)

{
  FUN_0042a1ac(*(undefined8 *)(param_1 + 0x68));
  return;
}


// ===== 00427670  FUN_00427670 =====

void FUN_00427670(long param_1)

{
  FUN_0042a22c(*(undefined8 *)(param_1 + 0x68));
  return;
}


// ===== 00427678  FUN_00427678 =====

void FUN_00427678(long param_1)

{
  FUN_0042a2c4(*(undefined8 *)(param_1 + 0x68));
  return;
}


// ===== 00427680  FUN_00427680 =====

void FUN_00427680(long param_1)

{
  FUN_0042a310(*(undefined8 *)(param_1 + 0x68));
  return;
}


// ===== 00427688  FUN_00427688 =====

bool FUN_00427688(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_0042a35c(param_1 + 0x68);
  return lVar1 != 0;
}


// ===== 004276a8  FUN_004276a8 =====

void FUN_004276a8(long param_1)

{
  FUN_0041617c(*(undefined8 *)(param_1 + 0x68));
  return;
}


// ===== 004276b0  FUN_004276b0 =====

void FUN_004276b0(long param_1)

{
  FUN_004163a4(param_1 + 0x68);
  return;
}


// ===== 004276b8  FUN_004276b8 =====

void FUN_004276b8(long param_1)

{
  FUN_0042a0e4(*(undefined8 *)(param_1 + 0x20));
  return;
}


// ===== 004276c0  FUN_004276c0 =====

void FUN_004276c0(long param_1)

{
  FUN_0042a100(*(undefined8 *)(param_1 + 0x20));
  return;
}


// ===== 004276c8  FUN_004276c8 =====

void FUN_004276c8(long param_1)

{
  FUN_0042a1ac(*(undefined8 *)(param_1 + 0x20));
  return;
}


// ===== 004276d0  FUN_004276d0 =====

void FUN_004276d0(long param_1)

{
  FUN_0042a22c(*(undefined8 *)(param_1 + 0x20));
  return;
}


// ===== 004276d8  FUN_004276d8 =====

void FUN_004276d8(long param_1)

{
  FUN_0042a2c4(*(undefined8 *)(param_1 + 0x20));
  return;
}


// ===== 004276e0  FUN_004276e0 =====

void FUN_004276e0(long param_1)

{
  FUN_0042a310(*(undefined8 *)(param_1 + 0x20));
  return;
}


// ===== 004276e8  FUN_004276e8 =====

bool FUN_004276e8(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_0042a35c(param_1 + 0x20);
  return lVar1 != 0;
}


// ===== 00427708  FUN_00427708 =====

void FUN_00427708(long param_1)

{
  FUN_0041617c(*(undefined8 *)(param_1 + 0x20));
  return;
}


// ===== 00427710  FUN_00427710 =====

void FUN_00427710(long param_1)

{
  FUN_004163a4(param_1 + 0x20);
  return;
}


// ===== 00427718  FUN_00427718 =====

long FUN_00427718(long param_1)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  
  lVar2 = FUN_003c8474(0x20,"crypto/x509/x509_lu.c",0x14);
  if (lVar2 != 0) {
    pcVar3 = *(code **)(param_1 + 8);
    *(long *)(lVar2 + 8) = param_1;
    if ((pcVar3 != (code *)0x0) && (iVar1 = (*pcVar3)(), iVar1 == 0)) {
      FUN_003c86b4(lVar2,"crypto/x509/x509_lu.c",0x1b);
      return 0;
    }
  }
  return lVar2;
}


// ===== 0042778c  FUN_0042778c =====

void FUN_0042778c(long param_1)

{
  code *pcVar1;
  
  if (param_1 != 0) {
    if ((*(long *)(param_1 + 8) != 0) &&
       (pcVar1 = *(code **)(*(long *)(param_1 + 8) + 0x10), pcVar1 != (code *)0x0)) {
      (*pcVar1)();
    }
    FUN_003c86b4(param_1,"crypto/x509/x509_lu.c",0x27);
    return;
  }
  return;
}


// ===== 004277d4  FUN_004277d4 =====

void FUN_004277d4(long param_1)

{
  FUN_003d518c(*(undefined8 *)(param_1 + 0x98));
  return;
}


// ===== 004277dc  FUN_004277dc =====

void FUN_004277dc(long param_1)

{
  FUN_003d519c(*(undefined8 *)(param_1 + 0x98));
  return;
}


// ===== 004277e4  FUN_004277e4 =====

undefined8 FUN_004277e4(long param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(long *)(param_1 + 8) == 0) {
    return 0;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 8) + 0x18);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004277f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 1;
}


// ===== 00427808  FUN_00427808 =====

undefined8 FUN_00427808(long param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(long *)(param_1 + 8) == 0) {
    return 0;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 8) + 0x20);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00427818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 1;
}


// ===== 0042782c  FUN_0042782c =====

undefined8 FUN_0042782c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 0) {
    return 0xffffffff;
  }
  if (*(code **)(lVar2 + 0x58) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0042783c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(lVar2 + 0x58))();
    return uVar1;
  }
  if (*(code **)(lVar2 + 0x28) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00427850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(lVar2 + 0x28))();
    return uVar1;
  }
  return 1;
}


// ===== 0042785c  FUN_0042785c =====

undefined8 FUN_0042785c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 0) {
    return 0xffffffff;
  }
  if (*(code **)(lVar2 + 0x58) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00427874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(lVar2 + 0x58))();
    return uVar1;
  }
  if (*(code **)(lVar2 + 0x28) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00427888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(lVar2 + 0x28))();
    return uVar1;
  }
  return 1;
}


// ===== 00427894  FUN_00427894 =====

undefined8 FUN_00427894(long param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  long lVar2;
  
  if ((*(int *)(param_1 + 4) == 0) && (lVar2 = *(long *)(param_1 + 8), lVar2 != 0)) {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 0x50);
    if (*(code **)(lVar2 + 0x30) == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        return 0;
      }
    }
    else if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004278bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(lVar2 + 0x30))();
      return uVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x004278c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}


// ===== 004278c8  FUN_004278c8 =====

undefined8 FUN_004278c8(long param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  long lVar2;
  
  if ((*(int *)(param_1 + 4) == 0) && (lVar2 = *(long *)(param_1 + 8), lVar2 != 0)) {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 0x50);
    if (*(code **)(lVar2 + 0x30) == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        return 0;
      }
    }
    else if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004278f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(lVar2 + 0x30))();
      return uVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x00427900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}


// ===== 00427904  FUN_00427904 =====

undefined8 FUN_00427904(long param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((*(long *)(param_1 + 8) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 8) + 0x38),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00427914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}


// ===== 00427920  FUN_00427920 =====

undefined8 FUN_00427920(long param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((*(long *)(param_1 + 8) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 8) + 0x40),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00427930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}


// ===== 0042793c  FUN_0042793c =====

undefined8 FUN_0042793c(long param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((*(long *)(param_1 + 8) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 8) + 0x48),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0042794c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}


// ===== 00427958  FUN_00427958 =====

undefined8 FUN_00427958(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return 1;
}


// ===== 00427968  FUN_00427968 =====

undefined8 FUN_00427968(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


// ===== 00427970  FUN_00427970 =====

undefined8 FUN_00427970(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


// ===== 00427978  FUN_00427978 =====

undefined4 * FUN_00427978(void)

{
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  puVar2 = (undefined4 *)FUN_003c8474(0xa0,"crypto/x509/x509_lu.c",0xb8);
  if (puVar2 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  uVar4 = 0x8000f;
  lVar3 = FUN_0040bfd0(FUN_00427abc);
  *(long *)(puVar2 + 2) = lVar3;
  if (lVar3 == 0) {
    uVar5 = 0xbd;
  }
  else {
    *puVar2 = 1;
    lVar3 = FUN_0040bf0c();
    *(long *)(puVar2 + 4) = lVar3;
    if (lVar3 == 0) {
      uVar5 = 0xc2;
    }
    else {
      lVar3 = FUN_00431d10();
      *(long *)(puVar2 + 6) = lVar3;
      if (lVar3 == 0) {
        uVar4 = 0x8000b;
        uVar5 = 199;
      }
      else {
        iVar1 = FUN_003c4ee0(4,puVar2,puVar2 + 0x20);
        uVar4 = 0x8000f;
        if (iVar1 == 0) {
          uVar5 = 0xcb;
        }
        else {
          lVar3 = FUN_003d5150();
          *(long *)(puVar2 + 0x26) = lVar3;
          if (lVar3 != 0) {
            puVar2[0x24] = 1;
            return puVar2;
          }
          uVar5 = 0xd1;
        }
      }
    }
  }
  FUN_00379868();
  FUN_0037995c("crypto/x509/x509_lu.c",uVar5,"X509_STORE_new");
  FUN_00379a5c(0xb,uVar4,0);
  FUN_00431d48(*(undefined8 *)(puVar2 + 6));
  FUN_0040bd78(*(undefined8 *)(puVar2 + 2));
  FUN_0040bd78(*(undefined8 *)(puVar2 + 4));
  FUN_003d51ac(*(undefined8 *)(puVar2 + 0x26));
  FUN_003c86b4(puVar2,"crypto/x509/x509_lu.c",0xde);
  return (undefined4 *)0x0;
}


// ===== 00427abc  FUN_00427abc =====

ulong FUN_00427abc(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = (int *)*param_1;
  piVar4 = (int *)*param_2;
  iVar1 = *piVar3;
  if (iVar1 - *piVar4 != 0) {
    return (ulong)(uint)(iVar1 - *piVar4);
  }
  if (iVar1 != 2) {
    if (iVar1 == 1) {
      uVar2 = FUN_004269e0(*(undefined8 *)(piVar3 + 2),*(undefined8 *)(piVar4 + 2));
      return uVar2;
    }
    return 0;
  }
  uVar2 = FUN_004269ec(*(undefined8 *)(piVar3 + 2),*(undefined8 *)(piVar4 + 2));
  return uVar2;
}


// ===== 00427b08  FUN_00427b08 =====

void FUN_00427b08(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x90);
    iVar2 = iVar1 + -1;
    *(int *)(param_1 + 0x90) = iVar2;
    if (iVar2 == 0 || iVar1 < 1) {
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      iVar1 = FUN_0040caf8(uVar5);
      if (0 < iVar1) {
        iVar1 = 0;
        do {
          lVar3 = FUN_0040cb0c(uVar5,iVar1);
          lVar4 = *(long *)(lVar3 + 8);
          if (lVar4 != 0) {
            if (*(code **)(lVar4 + 0x20) != (code *)0x0) {
              (**(code **)(lVar4 + 0x20))();
              lVar4 = *(long *)(lVar3 + 8);
              if (lVar4 == 0) goto LAB_00427b5c;
            }
            if (*(code **)(lVar4 + 0x10) != (code *)0x0) {
              (**(code **)(lVar4 + 0x10))(lVar3);
            }
          }
LAB_00427b5c:
          FUN_003c86b4(lVar3,"crypto/x509/x509_lu.c",0x27);
          iVar1 = iVar1 + 1;
          iVar2 = FUN_0040caf8(uVar5);
        } while (iVar1 < iVar2);
      }
      FUN_0040bd78(uVar5);
      FUN_0040ca6c(*(undefined8 *)(param_1 + 8),PTR_FUN_007a1cb0);
      FUN_003c525c(4,param_1,param_1 + 0x80);
      FUN_00431d48(*(undefined8 *)(param_1 + 0x18));
      FUN_003d51ac(*(undefined8 *)(param_1 + 0x98));
      FUN_003c86b4(param_1,"crypto/x509/x509_lu.c",0xfd);
      return;
    }
  }
  return;
}


// ===== 00427c20  FUN_00427c20 =====

void FUN_00427c20(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (*param_1 == 2) {
      FUN_0043a89c(*(undefined8 *)(param_1 + 2));
    }
    else if (*param_1 == 1) {
      FUN_0043da80(*(undefined8 *)(param_1 + 2));
    }
  }
  FUN_003c86b4(param_1,"crypto/x509/x509_lu.c",0x213);
  return;
}


// ===== 00427c84  FUN_00427c84 =====

bool FUN_00427c84(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x90);
  *(int *)(param_1 + 0x90) = iVar1 + 1;
  return 0 < iVar1;
}


// ===== 00427ca0  FUN_00427ca0 =====

long FUN_00427ca0(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  iVar1 = FUN_0040caf8(uVar5);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      lVar3 = FUN_0040cb0c(uVar5,iVar1);
      if (*(long *)(lVar3 + 8) == param_2) {
        return lVar3;
      }
      iVar1 = iVar1 + 1;
      iVar2 = FUN_0040caf8(uVar5);
    } while (iVar1 < iVar2);
  }
  lVar3 = FUN_003c8474(0x20,"crypto/x509/x509_lu.c",0x14);
  if (lVar3 != 0) {
    pcVar4 = *(code **)(param_2 + 8);
    *(long *)(lVar3 + 8) = param_2;
    if ((pcVar4 == (code *)0x0) || (iVar1 = (*pcVar4)(), iVar1 != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      *(long *)(lVar3 + 0x18) = param_1;
      iVar1 = FUN_0040c89c(uVar5);
      if (iVar1 != 0) {
        return lVar3;
      }
      FUN_00379868();
      FUN_0037995c("crypto/x509/x509_lu.c",0x124,"X509_STORE_add_lookup");
      FUN_00379a5c(0xb,0x8000f,0);
      if ((*(long *)(lVar3 + 8) != 0) &&
         (pcVar4 = *(code **)(*(long *)(lVar3 + 8) + 0x10), pcVar4 != (code *)0x0)) {
        (*pcVar4)(lVar3);
      }
      FUN_003c86b4(lVar3,"crypto/x509/x509_lu.c",0x27);
      return 0;
    }
    FUN_003c86b4(lVar3,"crypto/x509/x509_lu.c",0x1b);
  }
  FUN_00379868();
  FUN_0037995c("crypto/x509/x509_lu.c",0x11c,"X509_STORE_add_lookup");
  FUN_00379a5c(0xb,0x8000b,0);
  return 0;
}


// ===== 00427e30  FUN_00427e30 =====

int * FUN_00427e30(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)FUN_003c8474(0x10,"crypto/x509/x509_lu.c",0x1e2);
  if (piVar2 != (int *)0x0) {
    *piVar2 = 0;
    iVar1 = FUN_00427f38(param_1,param_2,param_3,piVar2);
    if (iVar1 < 1) {
      if (*piVar2 == 2) {
        FUN_0043a89c(*(undefined8 *)(piVar2 + 2));
      }
      else if (*piVar2 == 1) {
        FUN_0043da80(*(undefined8 *)(piVar2 + 2));
      }
      FUN_003c86b4(piVar2,"crypto/x509/x509_lu.c",0x213);
      return (int *)0x0;
    }
  }
  return piVar2;
}


// ===== 00427ef0  FUN_00427ef0 =====

void FUN_00427ef0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_003c8474(0x10,"crypto/x509/x509_lu.c",0x1e2);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  return;
}


// ===== 00427f1c  FUN_00427f1c =====

bool FUN_00427f1c(void)

{
  int iVar1;
  
  iVar1 = FUN_00427f38();
  return 0 < iVar1;
}


// ===== 00427f38  FUN_00427f38 =====

undefined8 FUN_00427f38(long *param_1,int param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  int local_2d8 [2];
  undefined8 local_2d0;
  undefined1 auStack_2c8 [24];
  undefined8 local_2b0 [28];
  undefined1 auStack_1d0 [72];
  undefined8 auStack_188 [37];
  int local_60 [2];
  undefined1 *local_58;
  
  lVar9 = *param_1;
  if (lVar9 == 0) {
    return 0;
  }
  local_2d0 = 0;
  local_2d8[0] = 0;
  uVar3 = FUN_003d517c(*(undefined8 *)(lVar9 + 0x98));
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  iVar1 = FUN_0040cc6c(*(undefined8 *)(lVar9 + 8));
  local_60[0] = param_2;
  if (iVar1 == 0) {
    FUN_003d519c(*(undefined8 *)(lVar9 + 0x98));
    uVar3 = FUN_003d518c(*(undefined8 *)(lVar9 + 0x98));
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    FUN_0040cc10(*(undefined8 *)(lVar9 + 8));
    uVar3 = *(undefined8 *)(lVar9 + 8);
    if (param_2 == 1) goto LAB_00427fe0;
LAB_00427f9c:
    if (param_2 == 2) {
      local_58 = auStack_2c8;
      puVar6 = local_2b0;
      goto LAB_00427fec;
    }
LAB_0042802c:
    piVar4 = (int *)0x0;
    FUN_003d519c(*(undefined8 *)(lVar9 + 0x98));
    if (param_2 == 2) goto LAB_00428044;
LAB_00428040:
    if (piVar4 == (int *)0x0) goto LAB_00428044;
  }
  else {
    uVar3 = *(undefined8 *)(lVar9 + 8);
    if (param_2 != 1) goto LAB_00427f9c;
LAB_00427fe0:
    local_58 = auStack_1d0;
    puVar6 = auStack_188;
LAB_00427fec:
    *puVar6 = param_3;
    iVar1 = FUN_0040c6ac(uVar3,local_60,0);
    if (iVar1 == -1) goto LAB_0042802c;
    piVar4 = (int *)FUN_0040cb0c(uVar3,iVar1);
    FUN_003d519c(*(undefined8 *)(lVar9 + 0x98));
    if (param_2 != 2) goto LAB_00428040;
LAB_00428044:
    iVar1 = FUN_0040caf8(*(undefined8 *)(lVar9 + 0x10));
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        lVar5 = FUN_0040cb0c(*(undefined8 *)(lVar9 + 0x10),iVar1);
        if (*(int *)(lVar5 + 4) == 0) {
          lVar7 = *(long *)(lVar5 + 8);
          if (lVar7 == 0) {
            return 0xffffffff;
          }
          pcVar8 = *(code **)(lVar7 + 0x50);
          if (*(code **)(lVar7 + 0x30) == (code *)0x0) {
            if (pcVar8 == (code *)0x0) goto LAB_00428074;
LAB_00428060:
            iVar2 = (*pcVar8)(lVar5,param_2,param_3,local_2d8,param_1[0x21],param_1[0x22]);
          }
          else {
            if (pcVar8 != (code *)0x0) goto LAB_00428060;
            iVar2 = (**(code **)(lVar7 + 0x30))(lVar5,param_2,param_3,local_2d8);
          }
          if (iVar2 != 0) {
            piVar4 = local_2d8;
            goto LAB_004280d8;
          }
        }
LAB_00428074:
        iVar1 = iVar1 + 1;
        iVar2 = FUN_0040caf8(*(undefined8 *)(lVar9 + 0x10));
      } while (iVar1 < iVar2);
    }
    if (piVar4 == (int *)0x0) {
      return 0;
    }
  }
LAB_004280d8:
  iVar1 = *piVar4;
  if (iVar1 == 2) {
    iVar1 = FUN_00432ae8(*(undefined8 *)(piVar4 + 2));
  }
  else {
    if (iVar1 != 1) goto LAB_004280fc;
    iVar1 = FUN_00429d90(*(undefined8 *)(piVar4 + 2));
  }
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  iVar1 = *piVar4;
LAB_004280fc:
  *param_4 = iVar1;
  *(undefined8 *)(param_4 + 2) = *(undefined8 *)(piVar4 + 2);
  return 1;
}


// ===== 00428144  FUN_00428144 =====

undefined8 FUN_00428144(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_004281a0(param_1,param_2,0);
  if (iVar1 != 0) {
    return 1;
  }
  FUN_00379868();
  FUN_0037995c("crypto/x509/x509_lu.c",0x1b1,"X509_STORE_add_cert");
  FUN_00379a5c(0xb,0x8000b,0);
  return 0;
}


// ===== 004281a0  FUN_004281a0 =====

bool FUN_004281a0(long param_1,long param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  
  if (param_2 == 0) {
    return false;
  }
  piVar3 = (int *)FUN_003c8474(0x10,"crypto/x509/x509_lu.c",0x1e2);
  if (piVar3 != (int *)0x0) {
    if (param_3 == 0) {
      *(long *)(piVar3 + 2) = param_2;
      *piVar3 = 1;
      iVar2 = FUN_00429d90(param_2);
    }
    else {
      *(long *)(piVar3 + 2) = param_2;
      *piVar3 = 2;
      iVar2 = FUN_00432ae8(param_2);
    }
    if ((iVar2 == 0) || (iVar2 = FUN_003d518c(*(undefined8 *)(param_1 + 0x98)), iVar2 == 0)) {
      bVar1 = false;
      *piVar3 = 0;
    }
    else {
      lVar4 = FUN_00428ae8(*(undefined8 *)(param_1 + 8),piVar3);
      if (lVar4 == 0) {
        iVar2 = FUN_0040c89c(*(undefined8 *)(param_1 + 8),piVar3);
        bVar1 = iVar2 != 0;
        FUN_003d519c(*(undefined8 *)(param_1 + 0x98));
        if (iVar2 != 0) {
          return bVar1;
        }
      }
      else {
        FUN_003d519c(*(undefined8 *)(param_1 + 0x98));
        bVar1 = true;
      }
      if (*piVar3 == 2) {
        FUN_0043a89c(*(undefined8 *)(piVar3 + 2));
      }
      else if (*piVar3 == 1) {
        FUN_0043da80(*(undefined8 *)(piVar3 + 2));
      }
    }
    FUN_003c86b4(piVar3,"crypto/x509/x509_lu.c",0x213);
    return bVar1;
  }
  return false;
}


// ===== 004282f0  FUN_004282f0 =====

undefined8 FUN_004282f0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_004281a0(param_1,param_2,1);
  if (iVar1 != 0) {
    return 1;
  }
  FUN_00379868();
  FUN_0037995c("crypto/x509/x509_lu.c",0x1ba,"X509_STORE_add_crl");
  FUN_00379a5c(0xb,0x8000b,0);
  return 0;
}


// ===== 00428360  FUN_00428360 =====

undefined8 FUN_00428360(int *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 == 2) {
    uVar1 = FUN_00432ae8(*(undefined8 *)(param_1 + 2));
    return uVar1;
  }
  if (*param_1 == 1) {
    uVar1 = FUN_00429d90(*(undefined8 *)(param_1 + 2));
    return uVar1;
  }
  return 1;
}


// ===== 0042838c  FUN_0042838c =====

int * FUN_0042838c(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (*param_1 != 1) {
      return (int *)0x0;
    }
    param_1 = *(int **)(param_1 + 2);
  }
  return param_1;
}


// ===== 004283ac  FUN_004283ac =====

int * FUN_004283ac(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (*param_1 != 2) {
      return (int *)0x0;
    }
    param_1 = *(int **)(param_1 + 2);
  }
  return param_1;
}


// ===== 004283cc  FUN_004283cc =====

undefined4 FUN_004283cc(undefined4 *param_1)

{
  return *param_1;
}


// ===== 004283d4  FUN_004283d4 =====

void FUN_004283d4(int *param_1,undefined8 param_2)

{
  int iVar1;
  
  if ((param_1 != (int *)0x0) && (iVar1 = FUN_00429d90(param_2), iVar1 != 0)) {
    if (*param_1 == 2) {
      FUN_0043a89c(*(undefined8 *)(param_1 + 2));
    }
    else if (*param_1 == 1) {
      FUN_0043da80(*(undefined8 *)(param_1 + 2));
    }
    *(undefined8 *)(param_1 + 2) = param_2;
    *param_1 = 1;
  }
  return;
}


// ===== 00428438  FUN_00428438 =====

int * FUN_00428438(int *param_1,undefined8 param_2)

{
  int *piVar1;
  
  piVar1 = param_1;
  if ((param_1 != (int *)0x0) && (piVar1 = (int *)FUN_00432ae8(param_2), (int)piVar1 != 0)) {
    if (*param_1 == 2) {
      FUN_0043a89c(*(undefined8 *)(param_1 + 2));
    }
    else if (*param_1 == 1) {
      FUN_0043da80(*(undefined8 *)(param_1 + 2));
    }
    piVar1 = (int *)0x1;
    *(undefined8 *)(param_1 + 2) = param_2;
    *param_1 = 2;
  }
  return piVar1;
}


// ===== 004284a0  FUN_004284a0 =====

undefined8 FUN_004284a0(undefined8 param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_1a0 [24];
  undefined8 auStack_188 [6];
  undefined8 local_158 [37];
  int local_30 [2];
  undefined1 *local_28;
  
  if (param_2 == 2) {
    puVar2 = auStack_188;
  }
  else {
    if (param_2 != 1) {
      return 0xffffffff;
    }
    puVar2 = local_158;
  }
  local_28 = auStack_1a0;
  *puVar2 = param_3;
  local_30[0] = param_2;
  uVar1 = FUN_0040c6ac(param_1,local_30,0);
  return uVar1;
}


// ===== 00428514  FUN_00428514 =====

undefined8 FUN_00428514(undefined8 param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_298 [24];
  undefined8 local_280 [28];
  undefined1 auStack_1a0 [72];
  undefined8 auStack_158 [37];
  int local_30 [2];
  undefined1 *local_28;
  
  if (param_2 == 1) {
    local_28 = auStack_1a0;
    puVar3 = auStack_158;
  }
  else {
    if (param_2 != 2) {
      return 0;
    }
    local_28 = auStack_298;
    puVar3 = local_280;
  }
  *puVar3 = param_3;
  local_30[0] = param_2;
  iVar1 = FUN_0040c6ac(param_1,local_30,0);
  if (iVar1 == -1) {
    return 0;
  }
  uVar2 = FUN_0040cb0c(param_1,iVar1);
  return uVar2;
}


// ===== 004285a4  FUN_004285a4 =====

undefined8 FUN_004285a4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


// ===== 004285ac  FUN_004285ac =====

long FUN_004285ac(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  undefined8 uVar5;
  
  if (param_1 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/x509_lu.c",0x251,"X509_STORE_get1_all_certs");
    FUN_00379a5c(0xb,0xc0102,0);
  }
  else {
    lVar3 = FUN_0040bf0c();
    if (lVar3 == 0) {
      return 0;
    }
    iVar1 = FUN_003d518c(*(undefined8 *)(param_1 + 0x98));
    if (iVar1 != 0) {
      FUN_0040cc10(*(undefined8 *)(param_1 + 8));
      uVar5 = *(undefined8 *)(param_1 + 8);
      iVar1 = FUN_0040caf8(uVar5);
      if (0 < iVar1) {
        iVar1 = 0;
        do {
          piVar4 = (int *)FUN_0040cb0c(uVar5,iVar1);
          if ((((piVar4 != (int *)0x0) && (*piVar4 == 1)) && (*(long *)(piVar4 + 2) != 0)) &&
             (iVar2 = FUN_00426f2c(lVar3,*(long *)(piVar4 + 2),1), iVar2 == 0)) {
            FUN_003d519c(*(undefined8 *)(param_1 + 0x98));
            goto LAB_00428650;
          }
          iVar1 = iVar1 + 1;
          iVar2 = FUN_0040caf8(uVar5);
        } while (iVar1 < iVar2);
      }
      FUN_003d519c(*(undefined8 *)(param_1 + 0x98));
      return lVar3;
    }
LAB_00428650:
    FUN_004131f0(lVar3);
  }
  return 0;
}


// ===== 004286c0  FUN_004286c0 =====

long FUN_004286c0(long *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  int local_1c4;
  undefined1 auStack_1c0 [72];
  undefined8 local_178;
  undefined4 local_50 [2];
  undefined1 *local_48;
  
  lVar7 = *param_1;
  if (lVar7 == 0) {
    lVar7 = FUN_0040bf0c();
    return lVar7;
  }
  iVar1 = FUN_003d518c(*(undefined8 *)(lVar7 + 0x98));
  if (iVar1 == 0) {
    return 0;
  }
  FUN_0040cc10(*(undefined8 *)(lVar7 + 8));
  local_48 = auStack_1c0;
  local_50[0] = 1;
  local_178 = param_2;
  iVar1 = FUN_0040c6ac(*(undefined8 *)(lVar7 + 8),local_50,&local_1c4);
  if (iVar1 < 0) {
    piVar6 = (int *)FUN_003c8474(0x10,"crypto/x509/x509_lu.c",0x1e2);
    if (piVar6 == (int *)0x0) {
      FUN_003d519c(*(undefined8 *)(lVar7 + 0x98));
      return 0;
    }
    *piVar6 = 0;
    FUN_003d519c(*(undefined8 *)(lVar7 + 0x98));
    iVar3 = FUN_00427f38(param_1,1,param_2,piVar6);
    iVar1 = *piVar6;
    if (iVar3 < 1) {
      if (iVar1 == 2) {
        FUN_0043a89c(*(undefined8 *)(piVar6 + 2));
      }
      else if (iVar1 == 1) {
        FUN_0043da80(*(undefined8 *)(piVar6 + 2));
      }
      FUN_003c86b4(piVar6,"crypto/x509/x509_lu.c",0x213);
      if (iVar3 < 0) {
        return 0;
      }
      lVar7 = FUN_0040bf0c();
      return lVar7;
    }
    if (iVar1 == 2) {
      FUN_0043a89c(*(undefined8 *)(piVar6 + 2));
    }
    else if (iVar1 == 1) {
      FUN_0043da80(*(undefined8 *)(piVar6 + 2));
    }
    FUN_003c86b4(piVar6,"crypto/x509/x509_lu.c",0x213);
    iVar1 = FUN_003d518c(*(undefined8 *)(lVar7 + 0x98));
    if (iVar1 == 0) {
      return 0;
    }
    FUN_0040cc10(*(undefined8 *)(lVar7 + 8));
    local_48 = auStack_1c0;
    local_50[0] = 1;
    local_178 = param_2;
    iVar1 = FUN_0040c6ac(*(undefined8 *)(lVar7 + 8),local_50,&local_1c4);
    if (iVar1 < 0) {
      lVar4 = FUN_0040bf0c();
      goto LAB_004288a4;
    }
  }
  lVar4 = FUN_0040bf0c();
  if ((lVar4 != 0) && (0 < local_1c4)) {
    iVar3 = 0;
    do {
      lVar5 = FUN_0040cb0c(*(undefined8 *)(lVar7 + 8),iVar1 + iVar3);
      iVar2 = FUN_00426f2c(lVar4,*(undefined8 *)(lVar5 + 8),1);
      if (iVar2 == 0) {
        FUN_003d519c(*(undefined8 *)(lVar7 + 0x98));
        FUN_004131f0(lVar4);
        return 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_1c4);
  }
LAB_004288a4:
  FUN_003d519c(*(undefined8 *)(lVar7 + 0x98));
  return lVar4;
}


// ===== 004288fc  FUN_004288fc =====

long FUN_004288fc(long *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  int local_14c;
  undefined1 auStack_148 [24];
  undefined8 local_130;
  undefined4 local_50 [2];
  undefined1 *local_48;
  
  lVar4 = FUN_0040bf0c();
  piVar5 = (int *)FUN_003c8474(0x10,"crypto/x509/x509_lu.c",0x1e2);
  if ((piVar5 != (int *)0x0) && (*piVar5 = 0, lVar4 != 0)) {
    lVar8 = *param_1;
    iVar1 = FUN_00427f38(param_1,2,param_2,piVar5);
    iVar2 = *piVar5;
    if (-1 < iVar1) {
      if (iVar2 == 2) {
        FUN_0043a89c(*(undefined8 *)(piVar5 + 2));
        FUN_003c86b4(piVar5,"crypto/x509/x509_lu.c",0x213);
      }
      else {
        if (iVar2 == 1) {
          FUN_0043da80(*(undefined8 *)(piVar5 + 2));
        }
        FUN_003c86b4(piVar5,"crypto/x509/x509_lu.c",0x213);
      }
      if (iVar1 == 0) {
        return lVar4;
      }
      iVar2 = FUN_003d518c(*(undefined8 *)(lVar8 + 0x98));
      if (iVar2 != 0) {
        FUN_0040cc10(*(undefined8 *)(lVar8 + 8));
        local_48 = auStack_148;
        local_50[0] = 2;
        local_130 = param_2;
        iVar2 = FUN_0040c6ac(*(undefined8 *)(lVar8 + 8),local_50,&local_14c);
        if ((-1 < iVar2) && (0 < local_14c)) {
          iVar1 = 0;
          do {
            lVar6 = FUN_0040cb0c(*(undefined8 *)(lVar8 + 8),iVar2 + iVar1);
            uVar7 = *(undefined8 *)(lVar6 + 8);
            iVar3 = FUN_00432ae8(uVar7);
            if (iVar3 == 0) {
              FUN_003d519c(*(undefined8 *)(lVar8 + 0x98));
LAB_00428ad4:
              FUN_0040ca6c(lVar4,PTR_FUN_007a1bc8);
              return 0;
            }
            iVar3 = FUN_0040c89c(lVar4,uVar7);
            if (iVar3 == 0) {
              FUN_003d519c(*(undefined8 *)(lVar8 + 0x98));
              FUN_0043a89c(uVar7);
              goto LAB_00428ad4;
            }
            iVar1 = iVar1 + 1;
          } while (iVar1 < local_14c);
        }
        FUN_003d519c(*(undefined8 *)(lVar8 + 0x98));
        return lVar4;
      }
      goto LAB_00428a90;
    }
    if (iVar2 == 2) {
      FUN_0043a89c(*(undefined8 *)(piVar5 + 2));
    }
    else if (iVar2 == 1) {
      FUN_0043da80(*(undefined8 *)(piVar5 + 2));
    }
  }
  FUN_003c86b4(piVar5,"crypto/x509/x509_lu.c",0x213);
LAB_00428a90:
  FUN_0040bd78(lVar4);
  return 0;
}


// ===== 00428ae8  FUN_00428ae8 =====

int * FUN_00428ae8(undefined8 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = FUN_0040c48c();
  if (-1 < iVar1) {
    if (1 < *param_2 - 1U) {
      piVar4 = (int *)FUN_0040cb0c(param_1,iVar1);
      return piVar4;
    }
    iVar2 = FUN_0040caf8(param_1);
    if (iVar1 < iVar2) {
      do {
        piVar4 = (int *)FUN_0040cb0c(param_1,iVar1);
        iVar3 = *piVar4;
        if (iVar3 != *param_2) {
          return (int *)0x0;
        }
        if (iVar3 == 2) {
          iVar3 = FUN_004269ec(*(undefined8 *)(piVar4 + 2),*(undefined8 *)(param_2 + 2));
LAB_00428ba0:
          if (iVar3 != 0) {
            return (int *)0x0;
          }
          iVar3 = *param_2;
        }
        else if (iVar3 == 1) {
          iVar3 = FUN_004269e0(*(undefined8 *)(piVar4 + 2),*(undefined8 *)(param_2 + 2));
          goto LAB_00428ba0;
        }
        if (iVar3 == 2) {
          iVar3 = FUN_004269f8(*(undefined8 *)(piVar4 + 2),*(undefined8 *)(param_2 + 2));
        }
        else {
          if (iVar3 != 1) {
            return piVar4;
          }
          iVar3 = FUN_00426d54(*(undefined8 *)(piVar4 + 2),*(undefined8 *)(param_2 + 2));
        }
        if (iVar3 == 0) {
          return piVar4;
        }
        iVar1 = iVar1 + 1;
      } while (iVar2 != iVar1);
    }
  }
  return (int *)0x0;
}


// ===== 00428c04  FUN_00428c04 =====

int FUN_00428c04(long *param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_1e0 [72];
  undefined8 local_198;
  undefined4 local_70 [2];
  undefined1 *local_68;
  int local_44;
  
  piVar5 = (int *)FUN_003c8474(0x10,"crypto/x509/x509_lu.c",0x1e2);
  if (piVar5 == (int *)0x0) {
    iVar2 = -1;
  }
  else {
    *piVar5 = 0;
    lVar9 = *param_2;
    local_44 = 0;
    *param_1 = 0;
    uVar6 = FUN_00426a88(param_3);
    iVar2 = FUN_00427f38(param_2,1,uVar6,piVar5);
    if (iVar2 == 1) {
      iVar2 = (*(code *)param_2[9])(param_2,param_3,*(undefined8 *)(piVar5 + 2));
      if ((iVar2 == 0) ||
         (iVar2 = FUN_0042afb4(param_2,*(undefined8 *)(piVar5 + 2),0xffffffff), iVar2 == 0)) {
        if (*piVar5 == 2) {
          FUN_0043a89c(*(undefined8 *)(piVar5 + 2));
          FUN_003c86b4(piVar5,"crypto/x509/x509_lu.c",0x213);
        }
        else {
          if (*piVar5 == 1) {
            FUN_0043da80(*(undefined8 *)(piVar5 + 2));
          }
          FUN_003c86b4(piVar5,"crypto/x509/x509_lu.c",0x213);
        }
        if ((lVar9 == 0) || (iVar2 = FUN_003d518c(*(undefined8 *)(lVar9 + 0x98)), iVar2 == 0)) {
          iVar2 = 0;
        }
        else {
          FUN_0040cc10(*(undefined8 *)(lVar9 + 8));
          local_70[0] = 1;
          local_198 = uVar6;
          local_68 = auStack_1e0;
          iVar3 = FUN_0040c6ac(*(undefined8 *)(lVar9 + 8),local_70,&local_44);
          iVar2 = 0;
          if ((iVar3 != -1) && (0 < local_44)) {
            iVar2 = 0;
            iVar1 = iVar3;
            do {
              piVar5 = (int *)FUN_0040cb0c(*(undefined8 *)(lVar9 + 8),iVar1);
              if (*piVar5 != 1) break;
              iVar4 = (*(code *)param_2[9])(param_2,param_3,*(undefined8 *)(piVar5 + 2));
              if (iVar4 != 0) {
                iVar2 = FUN_0042afb4(param_2,*(undefined8 *)(piVar5 + 2),0xffffffff);
                if (iVar2 != 0) {
                  lVar8 = *(long *)(piVar5 + 2);
                  iVar2 = 1;
                  *param_1 = lVar8;
                  goto joined_r0x00428ed4;
                }
                if (*param_1 == 0) {
LAB_00428ddc:
                  *param_1 = *(long *)(piVar5 + 2);
                }
                else {
                  uVar6 = FUN_00429db4(*(undefined8 *)(piVar5 + 2));
                  uVar7 = FUN_00429db4(*param_1);
                  iVar2 = FUN_003c1730(uVar6,uVar7);
                  if (0 < iVar2) goto LAB_00428ddc;
                }
                iVar2 = 1;
              }
              iVar1 = iVar1 + 1;
            } while (iVar1 < local_44 + iVar3);
          }
          lVar8 = *param_1;
joined_r0x00428ed4:
          if ((lVar8 != 0) && (iVar3 = FUN_00429d90(), iVar3 == 0)) {
            iVar2 = -1;
            *param_1 = 0;
          }
          FUN_003d519c(*(undefined8 *)(lVar9 + 0x98));
        }
      }
      else {
        *piVar5 = 0;
        *param_1 = *(long *)(piVar5 + 2);
        FUN_003c86b4(piVar5,"crypto/x509/x509_lu.c",0x213);
        iVar2 = 1;
      }
    }
    else {
      if (*piVar5 == 2) {
        FUN_0043a89c(*(undefined8 *)(piVar5 + 2));
      }
      else if (*piVar5 == 1) {
        FUN_0043da80(*(undefined8 *)(piVar5 + 2));
      }
      FUN_003c86b4(piVar5,"crypto/x509/x509_lu.c",0x213);
    }
  }
  return iVar2;
}


// ===== 00428edc  FUN_00428edc =====

void FUN_00428edc(long param_1)

{
  FUN_00432450(*(undefined8 *)(param_1 + 0x18));
  return;
}


// ===== 00428ee4  FUN_00428ee4 =====

undefined8 FUN_00428ee4(long param_1)

{
  FUN_004324bc(*(undefined8 *)(param_1 + 0x18));
  return 1;
}


// ===== 00428f00  FUN_00428f00 =====

void FUN_00428f00(long param_1)

{
  FUN_004324ac(*(undefined8 *)(param_1 + 0x18));
  return;
}


// ===== 00428f08  FUN_00428f08 =====

void FUN_00428f08(long param_1)

{
  FUN_004324b4(*(undefined8 *)(param_1 + 0x18));
  return;
}


// ===== 00428f10  FUN_00428f10 =====

void FUN_00428f10(long param_1)

{
  FUN_0043237c(*(undefined8 *)(param_1 + 0x18));
  return;
}


// ===== 00428f18  FUN_00428f18 =====

undefined8 FUN_00428f18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


// ===== 00428f20  FUN_00428f20 =====

void FUN_00428f20(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return;
}


// ===== 00428f28  FUN_00428f28 =====

undefined8 FUN_00428f28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


// ===== 00428f30  FUN_00428f30 =====

void FUN_00428f30(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}


// ===== 00428f38  FUN_00428f38 =====

undefined8 FUN_00428f38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}


// ===== 00428f40  FUN_00428f40 =====

void FUN_00428f40(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x30) = param_2;
  return;
}


// ===== 00428f48  FUN_00428f48 =====

undefined8 FUN_00428f48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}


// ===== 00428f50  FUN_00428f50 =====

void FUN_00428f50(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x38) = param_2;
  return;
}


// ===== 00428f58  FUN_00428f58 =====

undefined8 FUN_00428f58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}


// ===== 00428f60  FUN_00428f60 =====

void FUN_00428f60(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x40) = param_2;
  return;
}


// ===== 00428f68  FUN_00428f68 =====

undefined8 FUN_00428f68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}


// ===== 00428f70  FUN_00428f70 =====

void FUN_00428f70(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x48) = param_2;
  return;
}


// ===== 00428f78  FUN_00428f78 =====

undefined8 FUN_00428f78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}


// ===== 00428f80  FUN_00428f80 =====

void FUN_00428f80(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x50) = param_2;
  return;
}


// ===== 00428f88  FUN_00428f88 =====

undefined8 FUN_00428f88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}


// ===== 00428f90  FUN_00428f90 =====

void FUN_00428f90(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x58) = param_2;
  return;
}


// ===== 00428f98  FUN_00428f98 =====

undefined8 FUN_00428f98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}


// ===== 00428fa0  FUN_00428fa0 =====

void FUN_00428fa0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x60) = param_2;
  return;
}


// ===== 00428fa8  FUN_00428fa8 =====

undefined8 FUN_00428fa8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}


// ===== 00428fb0  FUN_00428fb0 =====

void FUN_00428fb0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x68) = param_2;
  return;
}


// ===== 00428fb8  FUN_00428fb8 =====

undefined8 FUN_00428fb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}


// ===== 00428fc0  FUN_00428fc0 =====

void FUN_00428fc0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x70) = param_2;
  return;
}


// ===== 00428fc8  FUN_00428fc8 =====

undefined8 FUN_00428fc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}


// ===== 00428fd0  FUN_00428fd0 =====

void FUN_00428fd0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x78) = param_2;
  return;
}


// ===== 00428fd8  FUN_00428fd8 =====

undefined8 FUN_00428fd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}


// ===== 00428fe0  FUN_00428fe0 =====

void FUN_00428fe0(long param_1)

{
  FUN_003c5168(param_1 + 0x80);
  return;
}


// ===== 00428fe8  FUN_00428fe8 =====

void FUN_00428fe8(long param_1)

{
  FUN_003c4e94(param_1 + 0x80);
  return;
}


// ===== 00428ff0  FUN_00428ff0 =====

undefined8 FUN_00428ff0(undefined8 *param_1)

{
  return *param_1;
}


// ===== 00428ff8  FUN_00428ff8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_00428ff8(undefined8 *param_1,char *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  char *__s;
  size_t sVar8;
  long lVar9;
  char *pcVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  char cVar14;
  uint *puVar15;
  ulong uVar16;
  uint uVar17;
  int iVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined4 uVar21;
  int iVar22;
  char *__dest;
  long local_d0;
  char acStack_c0 [80];
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (param_2 == (char *)0x0) {
    uVar21 = 0x80007;
    local_d0 = FUN_00387e50();
    if (local_d0 == 0) {
      local_d0 = 0;
    }
    else {
      lVar9 = FUN_00387ed0(local_d0,200);
      if (lVar9 != 0) {
        **(undefined1 **)(local_d0 + 8) = 0;
        if (param_1 != (undefined8 *)0x0) {
          param_3 = 200;
          iVar5 = FUN_0040caf8(*param_1);
          uVar20 = _DAT_00200220;
          uVar4 = _UNK_00200228;
          goto joined_r0x00429328;
        }
        param_2 = *(char **)(local_d0 + 8);
        FUN_003c86b4(local_d0,"crypto/x509/x509_obj.c",0x37);
        param_3 = 200;
        goto LAB_004293c4;
      }
    }
    uVar20 = 0xb7;
LAB_0042935c:
    FUN_00379868();
    FUN_0037995c("crypto/x509/x509_obj.c",uVar20,"X509_NAME_oneline");
    FUN_00379a5c(0xb,uVar21,0);
    FUN_00387e64(local_d0);
  }
  else if (param_3 != 0) {
    if (param_1 != (undefined8 *)0x0) {
      local_d0 = 0;
      iVar5 = FUN_0040caf8(*param_1);
      uVar20 = _DAT_00200220;
      uVar4 = _UNK_00200228;
joined_r0x00429328:
      _DAT_00200220 = uVar20;
      _UNK_00200228 = uVar4;
      if (iVar5 < 1) {
        iVar5 = 0;
      }
      else {
        iVar5 = 0;
        iVar18 = -1;
        iVar22 = 0;
        do {
          puVar7 = (undefined8 *)FUN_0040cb0c(*param_1,iVar5);
          iVar6 = FUN_003dd5b4(*puVar7);
          if ((iVar6 == 0) || (__s = (char *)FUN_003dce44(), __s == (char *)0x0)) {
            __s = acStack_c0;
            FUN_00399b58(acStack_c0,0x50,*puVar7);
          }
          sVar8 = strlen(__s);
          puVar15 = (uint *)puVar7[1];
          uVar2 = *puVar15;
          uVar19 = (ulong)uVar2;
          if (0x100000 < (int)uVar2) {
            uVar21 = 0x86;
            uVar20 = 0x4c;
            goto LAB_0042935c;
          }
          lVar9 = *(long *)(puVar15 + 2);
          if (((uVar2 & 3) == 0) && (puVar15[1] == 0x1b)) {
            if (0 < (int)uVar2) {
              if ((7 < uVar2) && (0xfffffffffffffffb < uVar19 - 5)) {
                if (0xf < uVar2) {
                  do {
                    /* WARNING: Do nothing block with infinite loop */
                  } while( true );
                }
                do {
                    /* WARNING: Do nothing block with infinite loop */
                } while( true );
              }
              uVar16 = 0;
              do {
                if (*(char *)(lVar9 + uVar16) != '\0') {
                  *(undefined4 *)((ulong)&local_70 | (uVar16 & 3) << 2) = 1;
                }
                uVar16 = uVar16 + 1;
              } while (uVar19 != uVar16);
            }
            local_70 = uVar20;
            uStack_68 = uVar4;
            if (0 < (int)uVar2) goto LAB_00429178;
LAB_004291d8:
            iVar6 = 0;
          }
          else {
            uStack_68 = 0x100000001;
            local_70 = 0x100000001;
            if ((int)uVar2 < 1) goto LAB_004291d8;
LAB_00429178:
            uVar16 = 0;
            iVar6 = 0;
            do {
              if (*(int *)((ulong)&local_70 | (uVar16 & 3) << 2) != 0) {
                uVar17 = (uint)*(byte *)(lVar9 + uVar16);
                iVar1 = iVar6 + 4;
                if (0xffffffa0 < uVar17 - 0x7f) {
                  iVar1 = iVar6 + 1;
                }
                iVar6 = iVar6 + 2;
                if ((uVar17 | 4) != 0x2f) {
                  iVar6 = iVar1;
                }
              }
              uVar16 = uVar16 + 1;
            } while (uVar19 != uVar16);
          }
          iVar6 = iVar22 + (int)sVar8 + iVar6;
          iVar1 = iVar6 + 2;
          if (0x100000 < iVar1) {
            uVar21 = 0x86;
            uVar20 = 0x7a;
            goto LAB_0042935c;
          }
          if (local_d0 == 0) {
            pcVar10 = param_2;
            if (param_3 <= iVar1) goto joined_r0x0042939c;
          }
          else {
            lVar9 = FUN_00387ed0(local_d0,(long)(iVar6 + 3));
            if (lVar9 == 0) {
              uVar20 = 0xb7;
              uVar21 = 0x80007;
              goto LAB_0042935c;
            }
            pcVar10 = *(char **)(local_d0 + 8);
          }
          pcVar10 = pcVar10 + iVar22;
          cVar14 = '+';
          if (iVar18 != *(int *)(puVar7 + 2)) {
            cVar14 = '/';
          }
          __dest = pcVar10 + 1;
          *pcVar10 = cVar14;
          memcpy(__dest,__s,sVar8 & 0xffffffff);
          pbVar11 = (byte *)(__dest + (int)sVar8 + 1);
          __dest[(int)sVar8] = '=';
          if (0 < (int)uVar2) {
            uVar16 = 0;
            lVar9 = *(long *)(puVar7[1] + 8);
            pbVar12 = pbVar11;
            do {
              pbVar11 = pbVar12;
              if (*(int *)((ulong)&local_70 | (uVar16 & 3) << 2) != 0) {
                bVar3 = *(byte *)(lVar9 + uVar16);
                if (bVar3 - 0x7f < 0xffffffa1) {
                  pbVar12[0] = 0x5c;
                  pbVar12[1] = 0x78;
                  pbVar12[2] = "0123456789ABCDEF"[bVar3 >> 4];
                  pbVar11 = pbVar12 + 4;
                  pbVar12[3] = "0123456789ABCDEF"[(ulong)bVar3 & 0xf];
                }
                else {
                  pbVar13 = pbVar12;
                  if ((bVar3 & 0x7b) == 0x2b) {
                    pbVar13 = pbVar12 + 1;
                    *pbVar12 = 0x5c;
                  }
                  pbVar11 = pbVar13 + 1;
                  *pbVar13 = bVar3;
                }
              }
              uVar16 = uVar16 + 1;
              pbVar12 = pbVar11;
            } while (uVar19 != uVar16);
          }
          *pbVar11 = 0;
          iVar5 = iVar5 + 1;
          iVar18 = *(int *)(puVar7 + 2);
          iVar6 = FUN_0040caf8(*param_1);
          iVar22 = iVar1;
        } while (iVar5 < iVar6);
      }
      if (local_d0 != 0) {
        param_2 = *(char **)(local_d0 + 8);
        FUN_003c86b4(local_d0,"crypto/x509/x509_obj.c",0xb0);
      }
joined_r0x0042939c:
      if (iVar5 != 0) {
        return param_2;
      }
      *param_2 = '\0';
      return param_2;
    }
LAB_004293c4:
    strncpy(param_2,"NO X509_NAME",(long)param_3);
    param_2[(long)param_3 - 1] = '\0';
    return param_2;
  }
  return (char *)0x0;
}


// ===== 00429450  FUN_00429450 =====

long FUN_00429450(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar2 = FUN_0043d75c(*(undefined8 *)(param_1 + 0x160),*(undefined8 *)(param_1 + 0x168));
  if (lVar2 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/x509_req.c",0x1f,"X509_to_X509_REQ");
    FUN_00379a5c(0xb,0x8000d,0);
  }
  else {
    **(undefined4 **)(lVar2 + 0x18) = 1;
    puVar3 = (undefined1 *)FUN_003c83a4(1,"crypto/x509/x509_req.c",0x26);
    *(undefined1 **)(*(long *)(lVar2 + 0x18) + 8) = puVar3;
    if (puVar3 != (undefined1 *)0x0) {
      *puVar3 = 0;
      uVar4 = FUN_00426ca0(param_1);
      iVar1 = FUN_004337cc(lVar2,uVar4);
      if ((((iVar1 != 0) && (lVar5 = FUN_00427350(param_1), lVar5 != 0)) &&
          (iVar1 = FUN_004337e8(lVar2,lVar5), iVar1 != 0)) &&
         ((param_2 == 0 || (iVar1 = FUN_00433b48(lVar2,param_2,param_3), iVar1 != 0)))) {
        return lVar2;
      }
    }
  }
  FUN_0043d6a8(lVar2);
  return 0;
}


// ===== 00429564  FUN_00429564 =====

void FUN_00429564(long param_1)

{
  if (param_1 != 0) {
    FUN_0043ca58(*(undefined8 *)(param_1 + 0x28));
    return;
  }
  return;
}


// ===== 00429574  FUN_00429574 =====

void FUN_00429574(long param_1)

{
  if (param_1 != 0) {
    FUN_0043c9c8(*(undefined8 *)(param_1 + 0x28));
    return;
  }
  return;
}


// ===== 00429584  FUN_00429584 =====

undefined8 FUN_00429584(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}


// ===== 0042958c  FUN_0042958c =====

void FUN_0042958c(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    param_1 = FUN_0043c9c8(*(undefined8 *)(param_1 + 0x28));
  }
  FUN_004273dc(param_1,param_2);
  return;
}


// ===== 004295b8  FUN_004295b8 =====

undefined8 FUN_004295b8(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)PTR_DAT_007a9300;
  piVar2 = (int *)PTR_DAT_007a9300;
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    piVar2 = piVar2 + 1;
    if (iVar1 == param_1) break;
    iVar1 = *piVar2;
  }
  return 1;
}


// ===== 004295ec  FUN_004295ec =====

undefined * FUN_004295ec(void)

{
  return PTR_DAT_007a9300;
}


// ===== 004295f8  FUN_004295f8 =====

void FUN_004295f8(undefined *param_1)

{
  PTR_DAT_007a9300 = param_1;
  return;
}


// ===== 00429604  FUN_00429604 =====

int * FUN_00429604(long param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined8 local_28;
  
  piVar2 = (int *)0x0;
  if ((param_1 == 0) || (PTR_DAT_007a9300 == (undefined *)0x0)) {
    return piVar2;
  }
  iVar1 = *(int *)PTR_DAT_007a9300;
  piVar4 = (int *)PTR_DAT_007a9300;
  do {
    if (iVar1 == 0) {
LAB_004296b0:
      piVar2 = (int *)FUN_0040bf0c(piVar2);
      return piVar2;
    }
    piVar4 = piVar4 + 1;
    piVar2 = (int *)FUN_00425424(*(undefined8 *)(param_1 + 0x30),iVar1,0xffffffff);
    if (-1 < (int)piVar2) {
      uVar3 = FUN_00425550(*(undefined8 *)(param_1 + 0x30),(ulong)piVar2 & 0xffffffff);
      piVar2 = (int *)FUN_00426700(uVar3,0);
      if (piVar2 != (int *)0x0) {
        if (*piVar2 == 0x10) {
          local_28 = *(undefined8 *)(*(int **)(piVar2 + 2) + 2);
          iVar1 = **(int **)(piVar2 + 2);
          uVar3 = FUN_0043b480();
          piVar2 = (int *)FUN_0038a93c(0,&local_28,(long)iVar1,uVar3);
          return piVar2;
        }
        FUN_00379868();
        FUN_0037995c("crypto/x509/x509_req.c",0x8c,"X509_REQ_get_extensions");
        FUN_00379a5c(0xb,0x7a,0);
        return (int *)0x0;
      }
      goto LAB_004296b0;
    }
    iVar1 = *piVar4;
  } while( true );
}


// ===== 00429700  FUN_00429700 =====

void FUN_00429700(long param_1)

{
  FUN_00425424(*(undefined8 *)(param_1 + 0x30));
  return;
}


// ===== 00429708  FUN_00429708 =====

void FUN_00429708(long param_1)

{
  FUN_00425550(*(undefined8 *)(param_1 + 0x30));
  return;
}


// ===== 00429710  FUN_00429710 =====

undefined4 FUN_00429710(long param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined8 local_18;
  
  local_18 = 0;
  uVar2 = FUN_0043b480();
  iVar1 = FUN_0039b478(param_2,&local_18,uVar2);
  if (iVar1 < 1) {
    return 0;
  }
  if (param_1 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/x509_req.c",0xf5,"X509_REQ_add1_attr_by_NID");
    FUN_00379a5c(0xb,0xc0102,0);
  }
  else {
    lVar3 = FUN_00425dc4(param_1 + 0x30,param_3,0x10,local_18,iVar1);
    if (lVar3 != 0) {
      uVar4 = 1;
      *(undefined4 *)(param_1 + 0x10) = 1;
      goto LAB_004297c4;
    }
  }
  uVar4 = 0;
LAB_004297c4:
  FUN_003c86b4(local_18,"crypto/x509/x509_req.c",0xa6);
  return uVar4;
}


// ===== 004297ec  FUN_004297ec =====

long FUN_004297ec(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = FUN_00425dc4(param_1 + 0x30);
    if (lVar1 != 0) {
      lVar1 = 1;
      *(undefined4 *)(param_1 + 0x10) = 1;
    }
    return lVar1;
  }
  FUN_00379868();
  FUN_0037995c("crypto/x509/x509_req.c",0xf5,"X509_REQ_add1_attr_by_NID");
  FUN_00379a5c(0xb,0xc0102,0);
  return 0;
}


// ===== 00429860  FUN_00429860 =====

void FUN_00429860(undefined8 param_1,undefined8 param_2)

{
  FUN_00429710(param_1,param_2,0xac);
  return;
}


// ===== 00429868  FUN_00429868 =====

void FUN_00429868(long param_1)

{
  thunk_FUN_0040caf8(*(undefined8 *)(param_1 + 0x30));
  return;
}


// ===== 00429870  FUN_00429870 =====

void FUN_00429870(long param_1)

{
  FUN_004254d0(*(undefined8 *)(param_1 + 0x30));
  return;
}


// ===== 00429878  FUN_00429878 =====

long FUN_00429878(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = FUN_0042560c(*(undefined8 *)(param_1 + 0x30));
    if (lVar1 != 0) {
      *(undefined4 *)(param_1 + 0x10) = 1;
    }
    return lVar1;
  }
  FUN_00379868();
  FUN_0037995c("crypto/x509/x509_req.c",0xcc,"X509_REQ_delete_attr");
  FUN_00379a5c(0xb,0xc0102,0);
  return 0;
}


// ===== 004298ec  FUN_004298ec =====

long FUN_004298ec(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = FUN_00425824(param_1 + 0x30);
    if (lVar1 != 0) {
      lVar1 = 1;
      *(undefined4 *)(param_1 + 0x10) = 1;
    }
    return lVar1;
  }
  FUN_00379868();
  FUN_0037995c("crypto/x509/x509_req.c",0xd8,"X509_REQ_add1_attr");
  FUN_00379a5c(0xb,0xc0102,0);
  return 0;
}


// ===== 00429960  FUN_00429960 =====

long FUN_00429960(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = FUN_00425ad0(param_1 + 0x30);
    if (lVar1 != 0) {
      lVar1 = 1;
      *(undefined4 *)(param_1 + 0x10) = 1;
    }
    return lVar1;
  }
  FUN_00379868();
  FUN_0037995c("crypto/x509/x509_req.c",0xe6,"X509_REQ_add1_attr_by_OBJ");
  FUN_00379a5c(0xb,0xc0102,0);
  return 0;
}


// ===== 004299d4  FUN_004299d4 =====

long FUN_004299d4(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = FUN_00426098(param_1 + 0x30);
    if (lVar1 != 0) {
      lVar1 = 1;
      *(undefined4 *)(param_1 + 0x10) = 1;
    }
    return lVar1;
  }
  FUN_00379868();
  FUN_0037995c("crypto/x509/x509_req.c",0x104,"X509_REQ_add1_attr_by_txt");
  FUN_00379a5c(0xb,0xc0102,0);
  return 0;
}


// ===== 00429a48  FUN_00429a48 =====

void FUN_00429a48(long param_1)

{
  FUN_0038dea4(*(undefined8 *)(param_1 + 0x18));
  return;
}


// ===== 00429a50  FUN_00429a50 =====

undefined8 FUN_00429a50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


// ===== 00429a58  FUN_00429a58 =====

void FUN_00429a58(long param_1,undefined8 *param_2,long *param_3)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x48);
  }
  if (param_3 != (long *)0x0) {
    *param_3 = param_1 + 0x38;
  }
  return;
}


// ===== 00429a74  FUN_00429a74 =====

void FUN_00429a74(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x48) != 0) {
    thunk_FUN_0038eddc();
  }
  *(undefined8 *)(param_1 + 0x48) = param_2;
  return;
}


// ===== 00429aa4  FUN_00429aa4 =====

void FUN_00429aa4(long param_1)

{
  FUN_003a3d24(param_1 + 0x38);
  return;
}


// ===== 00429aac  FUN_00429aac =====

void FUN_00429aac(long param_1)

{
  FUN_003dd5b4(*(undefined8 *)(param_1 + 0x38));
  return;
}


// ===== 00429ab4  FUN_00429ab4 =====

undefined8 FUN_00429ab4(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x10) = 1;
    uVar1 = FUN_0043d654();
    return uVar1;
  }
  FUN_00379868();
  FUN_0037995c("crypto/x509/x509_req.c",0x135,"i2d_re_X509_REQ_tbs");
  FUN_00379a5c(0xb,0xc0102,0);
  return 0;
}


// ===== 00429b08  FUN_00429b08 =====

long * FUN_00429b08(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = param_1;
  if (param_1 != (long *)0x0) {
    lVar1 = FUN_0038dea4(*param_1);
    if (lVar1 == param_2) {
      plVar2 = (long *)0x1;
    }
    else {
      lVar1 = *param_1;
      if (param_2 == 0) {
        thunk_FUN_0038eddc();
        *param_1 = 0;
      }
      else {
        if (lVar1 == 0) {
          lVar1 = FUN_0038a388();
          *param_1 = lVar1;
          if (lVar1 == 0) {
            return (long *)0x0;
          }
        }
        plVar2 = (long *)FUN_0038de18(lVar1,param_2);
        if ((int)plVar2 == 0) {
          return plVar2;
        }
      }
      plVar2 = (long *)0x1;
      *(undefined4 *)(param_1 + 0x10) = 1;
    }
  }
  return plVar2;
}


// ===== 00429b7c  FUN_00429b7c =====

void FUN_00429b7c(undefined8 *param_1)

{
  FUN_0038dea4(*param_1);
  return;
}


// ===== 00429b84  FUN_00429b84 =====

long FUN_00429b84(long param_1,long param_2)

{
  long lVar1;
  
  if (param_1 != 0) {
    if (param_1 + 8 != param_2) {
      lVar1 = FUN_0038eb7c(param_1 + 8);
      return lVar1;
    }
    *(undefined4 *)(param_1 + 0x80) = 1;
    param_1 = 1;
  }
  return param_1;
}


// ===== 00429bac  FUN_00429bac =====

void FUN_00429bac(long param_1)

{
  int iVar1;
  
  if ((param_1 != 0) && (iVar1 = FUN_0043b57c(param_1 + 0x30), iVar1 != 0)) {
    *(undefined4 *)(param_1 + 0x80) = 1;
  }
  return;
}


// ===== 00429be0  FUN_00429be0 =====

void FUN_00429be0(long param_1)

{
  int iVar1;
  
  if ((param_1 != 0) && (iVar1 = FUN_0043b57c(param_1 + 0x48), iVar1 != 0)) {
    *(undefined4 *)(param_1 + 0x80) = 1;
  }
  return;
}


// ===== 00429c14  FUN_00429c14 =====

undefined8 FUN_00429c14(undefined4 *param_1,long *param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*param_2 == param_3) {
    return 1;
  }
  lVar1 = FUN_0038ed00(param_3);
  if ((param_3 == 0) || (lVar1 != 0)) {
    FUN_003c04c0(*param_2);
    uVar2 = 1;
    *param_2 = lVar1;
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = 1;
      return uVar2;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


// ===== 00429c94  FUN_00429c94 =====

long FUN_00429c94(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    if (*(long *)(param_1 + 0x38) != param_2) {
      lVar2 = FUN_0038ed00(param_2);
      lVar1 = lVar2;
      if (lVar2 != 0) {
        FUN_003c04c0(*(undefined8 *)(param_1 + 0x38));
        lVar1 = 1;
        *(long *)(param_1 + 0x38) = lVar2;
        *(undefined4 *)(param_1 + 0x80) = 1;
      }
      return lVar1;
    }
    lVar1 = 1;
  }
  return lVar1;
}


// ===== 00429cf8  FUN_00429cf8 =====

long FUN_00429cf8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    if (*(long *)(param_1 + 0x40) != param_2) {
      lVar2 = FUN_0038ed00(param_2);
      lVar1 = lVar2;
      if (lVar2 != 0) {
        FUN_003c04c0(*(undefined8 *)(param_1 + 0x40));
        lVar1 = 1;
        *(long *)(param_1 + 0x40) = lVar2;
        *(undefined4 *)(param_1 + 0x80) = 1;
      }
      return lVar1;
    }
    lVar1 = 1;
  }
  return lVar1;
}


// ===== 00429d5c  FUN_00429d5c =====

void FUN_00429d5c(long param_1)

{
  int iVar1;
  
  if ((param_1 != 0) && (iVar1 = FUN_0043c740(param_1 + 0x50), iVar1 != 0)) {
    *(undefined4 *)(param_1 + 0x80) = 1;
  }
  return;
}


// ===== 00429d90  FUN_00429d90 =====

bool FUN_00429d90(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc0);
  *(int *)(param_1 + 0xc0) = iVar1 + 1;
  return 0 < iVar1;
}


// ===== 00429dac  FUN_00429dac =====

undefined8 FUN_00429dac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}


// ===== 00429db4  FUN_00429db4 =====

undefined8 FUN_00429db4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}


// ===== 00429dbc  FUN_00429dbc =====

undefined8 FUN_00429dbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}


// ===== 00429dc4  FUN_00429dc4 =====

undefined8 FUN_00429dc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}


// ===== 00429dcc  FUN_00429dcc =====

void FUN_00429dcc(long param_1)

{
  FUN_003dd5b4(*(undefined8 *)(param_1 + 0x88));
  FUN_003a7c38();
  return;
}


// ===== 00429de4  FUN_00429de4 =====

undefined8 FUN_00429de4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}


// ===== 00429dec  FUN_00429dec =====

undefined8 FUN_00429dec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}


// ===== 00429df4  FUN_00429df4 =====

void FUN_00429df4(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x58);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(param_1 + 0x60);
  }
  return;
}


// ===== 00429e10  FUN_00429e10 =====

long FUN_00429e10(long param_1)

{
  return param_1 + 0x20;
}


// ===== 00429e18  FUN_00429e18 =====

uint FUN_00429e18(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 uint *param_5)

{
  uint uVar1;
  
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_1;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = param_1[1];
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = param_1[2];
  }
  uVar1 = param_1[3];
  if (param_5 != (uint *)0x0) {
    *param_5 = uVar1;
  }
  return uVar1 & 1;
}


// ===== 00429e50  FUN_00429e50 =====

void FUN_00429e50(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  return;
}


// ===== 00429e5c  FUN_00429e5c =====

uint FUN_00429e5c(long param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 uint *param_5)

{
  uint uVar1;
  
  FUN_0041e8a8(param_1,0xffffffff,0xffffffff);
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0xb0);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0xb4);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(param_1 + 0xb8);
  }
  uVar1 = *(uint *)(param_1 + 0xbc);
  if (param_5 != (uint *)0x0) {
    *param_5 = uVar1;
  }
  return uVar1 & 1;
}


// ===== 00429ed8  FUN_00429ed8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00429ed8(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  int local_38;
  int local_34;
  
  lVar2 = FUN_0043c9c8(*(undefined8 *)(param_1 + 0x50));
  uVar3 = _DAT_00200480;
  *(undefined8 *)(param_1 + 0xb8) = _UNK_00200488;
  *(undefined8 *)(param_1 + 0xb0) = uVar3;
  uVar3 = FUN_003dd5b4(*(undefined8 *)(param_1 + 0x88));
  iVar1 = FUN_003de640(uVar3,&local_38,&local_34);
  if (iVar1 == 0 || local_34 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/x509_set.c",0xe1,"x509_sig_info_init");
    uVar3 = 0x90;
    goto LAB_00429f5c;
  }
  *(int *)(param_1 + 0xb0) = local_38;
  *(int *)(param_1 + 0xb4) = local_34;
  if (local_38 < 0x40) {
    if (local_38 == 0) {
      lVar4 = FUN_003a9c6c(0);
      if (((lVar4 == 0) || (*(code **)(lVar4 + 0xd8) == (code *)0x0)) ||
         (iVar1 = (**(code **)(lVar4 + 0xd8))
                            ((undefined8 *)(param_1 + 0xb0),(undefined8 *)(param_1 + 0x88),
                             param_1 + 0x98), iVar1 == 0)) {
        if ((lVar2 == 0) || (iVar1 = FUN_003a614c(lVar2), iVar1 == 0)) {
          FUN_00379868();
          FUN_0037995c("crypto/x509/x509_set.c",0xf7,"x509_sig_info_init");
          uVar3 = 0x8e;
          goto LAB_00429f5c;
        }
        goto LAB_0042a010;
      }
    }
    else {
      if (local_38 == 4) {
        *(undefined4 *)(param_1 + 0xb8) = 0x27;
        goto LAB_0042a044;
      }
LAB_00429fc0:
      FUN_003dce44();
      lVar2 = FUN_003a213c();
      if (lVar2 == 0) {
        FUN_00379868();
        FUN_0037995c("crypto/x509/x509_set.c",0x117,"x509_sig_info_init");
        uVar3 = 0x8d;
LAB_00429f5c:
        FUN_00379a5c(0xb,uVar3,0);
        return 0;
      }
      iVar1 = FUN_00389a38();
      iVar1 = iVar1 << 2;
LAB_0042a010:
      *(int *)(param_1 + 0xb8) = iVar1;
    }
    if ((2 < local_38 - 0x2a0U) && (local_38 != 0x40)) goto LAB_0042a044;
  }
  else {
    if (local_38 != 0x40) {
      if (local_38 == 0x329) {
        *(undefined4 *)(param_1 + 0xb8) = 0x69;
        goto LAB_0042a044;
      }
      goto LAB_00429fc0;
    }
    *(undefined4 *)(param_1 + 0xb8) = 0x3f;
  }
  *(uint *)(param_1 + 0xbc) = *(uint *)(param_1 + 0xbc) | 2;
LAB_0042a044:
  *(uint *)(param_1 + 0xbc) = *(uint *)(param_1 + 0xbc) | 1;
  return 1;
}


// ===== 0042a0b8  FUN_0042a0b8 =====

char * FUN_0042a0b8(ulong param_1)

{
  if ((uint)param_1 < 0x60) {
    return &DAT_0020ebd8 + *(int *)(&DAT_0020ebd8 + (param_1 & 0x7f) * 4);
  }
  return "unknown certificate verification error";
}


// ===== 0042a0e4  FUN_0042a0e4 =====

ulong FUN_0042a0e4(ulong param_1)

{
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_0040caf8();
    param_1 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
  }
  return param_1;
}


// ===== 0042a100  FUN_0042a100 =====

int FUN_0042a100(long param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar3 = FUN_003dcce8(param_2);
  if (lVar3 == 0) {
    return -2;
  }
  if (param_1 != 0) {
    if (param_3 < 0) {
      param_3 = -1;
    }
    iVar1 = FUN_0040caf8(param_1);
    while (param_3 = param_3 + 1, param_3 < iVar1) {
      puVar4 = (undefined8 *)FUN_0040cb0c(param_1,param_3);
      iVar2 = FUN_003de61c(*puVar4,lVar3);
      if (iVar2 == 0) {
        return param_3;
      }
    }
  }
  return -1;
}


// ===== 0042a1ac  FUN_0042a1ac =====

int FUN_0042a1ac(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if (param_1 != 0) {
    if (param_3 < 0) {
      param_3 = -1;
    }
    iVar1 = FUN_0040caf8();
    while (param_3 = param_3 + 1, param_3 < iVar1) {
      puVar3 = (undefined8 *)FUN_0040cb0c(param_1,param_3);
      iVar2 = FUN_003de61c(*puVar3,param_2);
      if (iVar2 == 0) {
        return param_3;
      }
    }
  }
  return -1;
}


// ===== 0042a22c  FUN_0042a22c =====

int FUN_0042a22c(long param_1,int param_2,int param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_1 != 0) {
    if (param_3 < 0) {
      param_3 = -1;
    }
    iVar1 = FUN_0040caf8();
    while (param_3 = param_3 + 1, param_3 < iVar1) {
      lVar2 = FUN_0040cb0c(param_1,param_3);
      if ((param_2 != 0) == 0 < *(int *)(lVar2 + 8)) {
        return param_3;
      }
    }
  }
  return -1;
}


// ===== 0042a2c4  FUN_0042a2c4 =====

undefined8 FUN_0042a2c4(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    iVar1 = FUN_0040caf8();
    if ((-1 < param_2) && (param_2 < iVar1)) {
      uVar2 = FUN_0040cb0c(param_1,param_2);
      return uVar2;
    }
  }
  return 0;
}


// ===== 0042a310  FUN_0042a310 =====

undefined8 FUN_0042a310(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    iVar1 = FUN_0040caf8();
    if ((-1 < param_2) && (param_2 < iVar1)) {
      uVar2 = FUN_0040c404(param_1,param_2);
      return uVar2;
    }
  }
  return 0;
}


// ===== 0042a35c  FUN_0042a35c =====

long FUN_0042a35c(long *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  if (param_1 == (long *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/x509_v3.c",0x6b,"X509v3_add_ext");
    FUN_00379a5c(0xb,0xc0102,0);
    FUN_0043b4b0(0);
    return 0;
  }
  lVar4 = *param_1;
  uVar5 = 0x8000f;
  if ((lVar4 == 0) && (lVar4 = FUN_0040bf0c(), lVar4 == 0)) {
    lVar3 = 0;
    uVar6 = 0x71;
  }
  else {
    iVar2 = FUN_0040caf8(lVar4);
    lVar3 = FUN_0043b4d4(param_2);
    if (lVar3 == 0) {
      uVar5 = 0x8000d;
      uVar6 = 0x7e;
    }
    else {
      iVar1 = iVar2;
      if (param_3 <= iVar2) {
        iVar1 = param_3;
      }
      if (-1 < param_3) {
        iVar2 = iVar1;
      }
      iVar2 = FUN_0040c244(lVar4,lVar3,iVar2);
      if (iVar2 != 0) {
        if (*param_1 != 0) {
          return lVar4;
        }
        *param_1 = lVar4;
        return lVar4;
      }
      uVar6 = 0x82;
    }
  }
  FUN_00379868();
  FUN_0037995c("crypto/x509/x509_v3.c",uVar6,"X509v3_add_ext");
  FUN_00379a5c(0xb,uVar5,0);
  FUN_0043b4b0(lVar3);
  if (*param_1 != 0) {
    return 0;
  }
  FUN_0040bd78(lVar4);
  return 0;
}


// ===== 0042a4e0  FUN_0042a4e0 =====

long FUN_0042a4e0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_003dcce8(param_2);
  if (lVar1 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/x509_v3.c",0x98,"X509_EXTENSION_create_by_NID");
    FUN_00379a5c(0xb,0x6d,0);
    return 0;
  }
  lVar2 = FUN_0042a590(param_1,lVar1,param_3,param_4);
  if (lVar2 != 0) {
    return lVar2;
  }
  FUN_0039a0f4(lVar1);
  return 0;
}


// ===== 0042a590  FUN_0042a590 =====

long * FUN_0042a590(long *param_1,long param_2,int param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long *plVar6;
  
  if (((param_1 == (long *)0x0) || (plVar6 = (long *)*param_1, plVar6 == (long *)0x0)) &&
     (plVar6 = (long *)FUN_0043b4a4(), plVar6 == (long *)0x0)) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/x509_v3.c",0xa9,"X509_EXTENSION_create_by_OBJ");
    FUN_00379a5c(0xb,0x8000d,0);
    return (long *)0x0;
  }
  if (param_2 != 0) {
    FUN_0039a0f4(*plVar6);
    lVar3 = FUN_003de510(param_2);
    *plVar6 = lVar3;
    if (lVar3 != 0) {
      uVar4 = *(undefined8 *)(param_4 + 2);
      uVar1 = *param_4;
      uVar5 = 0xff;
      if (param_3 == 0) {
        uVar5 = 0xffffffff;
      }
      *(undefined4 *)(plVar6 + 1) = uVar5;
      iVar2 = thunk_FUN_0038ebe0(plVar6 + 2,uVar4,uVar1);
      if (iVar2 != 0) {
        if ((param_1 != (long *)0x0) && (*param_1 == 0)) {
          *param_1 = (long)plVar6;
          return plVar6;
        }
        return plVar6;
      }
    }
  }
  if ((param_1 == (long *)0x0) || (plVar6 != (long *)*param_1)) {
    FUN_0043b4b0(plVar6);
  }
  return (long *)0x0;
}


// ===== 0042a6c8  FUN_0042a6c8 =====

bool FUN_0042a6c8(long *param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  
  bVar1 = false;
  if ((param_1 != (long *)0x0) && (param_2 != 0)) {
    FUN_0039a0f4(*param_1);
    lVar2 = FUN_003de510(param_2);
    bVar1 = lVar2 != 0;
    *param_1 = lVar2;
  }
  return bVar1;
}


// ===== 0042a714  FUN_0042a714 =====

long FUN_0042a714(long param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = 0xff;
    if (param_2 == 0) {
      uVar1 = 0xffffffff;
    }
    *(undefined4 *)(param_1 + 8) = uVar1;
    param_1 = 1;
  }
  return param_1;
}


// ===== 0042a730  FUN_0042a730 =====

ulong FUN_0042a730(ulong param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = thunk_FUN_0038ebe0(param_1 + 0x10,*(undefined8 *)(param_2 + 2),*param_2);
    param_1 = (ulong)(iVar1 != 0);
  }
  return param_1;
}


// ===== 0042a760  FUN_0042a760 =====

long * FUN_0042a760(long *param_1)

{
  if (param_1 != (long *)0x0) {
    param_1 = (long *)*param_1;
  }
  return param_1;
}


// ===== 0042a76c  FUN_0042a76c =====

long FUN_0042a76c(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + 0x10;
  }
  return lVar1;
}


// ===== 0042a77c  FUN_0042a77c =====

ulong FUN_0042a77c(ulong param_1)

{
  if (param_1 != 0) {
    param_1 = (ulong)(0 < *(int *)(param_1 + 8));
  }
  return param_1;
}


// ===== 0042a790  FUN_0042a790 =====

undefined8 FUN_0042a790(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_00427350();
  if (lVar2 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/x509_vfy.c",0x67,"X509_self_signed");
    FUN_00379a5c(0xb,0x6c,0);
  }
  else {
    iVar1 = FUN_0041e984(param_1);
    if (iVar1 != 0) {
      if ((*(byte *)(param_1 + 0xe9) >> 5 & 1) == 0) {
        return 0;
      }
      if (param_2 != 0) {
        uVar3 = FUN_00433804(param_1,lVar2);
        return uVar3;
      }
      return 1;
    }
  }
  return 0xffffffff;
}


// ===== 0042a84c  FUN_0042a84c =====

undefined8 FUN_0042a84c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/x509_vfy.c",0x115,"X509_STORE_CTX_verify");
    FUN_00379a5c(0xb,0xc0102,0);
    return 0xffffffff;
  }
  if (*(long *)(param_1 + 0x100) != 0) {
    uVar2 = FUN_0042a908();
    return uVar2;
  }
  if (*(long *)(param_1 + 8) == 0) {
    iVar1 = FUN_0040caf8(*(undefined8 *)(param_1 + 0x10));
    if (0 < iVar1) {
      uVar2 = FUN_0040cb0c(*(undefined8 *)(param_1 + 0x10),0);
      *(undefined8 *)(param_1 + 8) = uVar2;
      uVar2 = FUN_0042ac04(param_1);
      return uVar2;
    }
  }
  uVar2 = FUN_0042ac04();
  return uVar2;
}


// ===== 0042a908  FUN_0042a908 =====

ulong FUN_0042a908(long param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  char *pcVar7;
  size_t __n;
  undefined8 uVar8;
  code *pcVar9;
  long lVar10;
  undefined1 *__s1;
  int iVar11;
  undefined8 *puVar12;
  uint uVar13;
  uint local_a4;
  undefined1 auStack_a0 [64];
  undefined1 *local_48;
  
  uVar3 = *(uint *)(*(long *)(param_1 + 0x20) + 0x2c);
  if (0 < (int)uVar3) {
    if (*(long *)(param_1 + 0x100) != 0) {
      if (4 < uVar3) {
        uVar3 = 5;
      }
      iVar2 = FUN_003a614c();
      if (*(int *)(&DAT_0020ed58 + (ulong)(uVar3 - 1) * 4) <= iVar2) goto LAB_0042a99c;
    }
    *(undefined4 *)(param_1 + 0xac) = 0;
    uVar5 = FUN_0040cb0c(*(undefined8 *)(param_1 + 0x98),0);
    *(undefined8 *)(param_1 + 0xb8) = uVar5;
    *(undefined4 *)(param_1 + 0xb0) = 0x42;
    uVar6 = (**(code **)(param_1 + 0x38))(0,param_1);
    if ((int)uVar6 == 0) {
      return uVar6;
    }
  }
LAB_0042a99c:
  *(undefined4 *)(param_1 + 0xb0) = 0x5f;
  if ((*(long *)(param_1 + 0xf0) == 0) ||
     (iVar2 = FUN_0040caf8(*(undefined8 *)(*(long *)(param_1 + 0xf0) + 8)), iVar2 < 1)) {
    if (*(code **)(param_1 + 0x30) != (code *)0x0) {
      uVar6 = (**(code **)(param_1 + 0x30))(param_1);
      iVar2 = (int)uVar6;
      goto joined_r0x0042ab04;
    }
    iVar2 = (**(code **)(param_1 + 0x38))(*(int *)(param_1 + 0xb0) == 0,param_1);
LAB_0042aba4:
    uVar6 = (ulong)(iVar2 != 0);
    if (iVar2 != 0) {
      return uVar6;
    }
  }
  else {
    lVar10 = *(long *)(param_1 + 0xf0);
    FUN_0043da80(*(undefined8 *)(lVar10 + 0x20));
    local_48 = (undefined1 *)0x0;
    *(undefined8 *)(lVar10 + 0x2c) = 0xffffffffffffffff;
    *(undefined8 *)(lVar10 + 0x20) = 0;
    *(undefined8 *)(lVar10 + 0x18) = 0;
    puVar12 = *(undefined8 **)(param_1 + 0xf0);
    uVar5 = *(undefined8 *)(param_1 + 0x100);
    iVar2 = FUN_0040caf8(puVar12[1]);
    uVar3 = FUN_0043cd68(uVar5,&local_48);
    if ((int)uVar3 < 1) {
LAB_0042abd4:
      *(undefined4 *)(param_1 + 0xac) = 0;
      uVar6 = 0xffffffff;
      goto LAB_0042abdc;
    }
    local_a4 = uVar3;
    if (0 < iVar2) {
      iVar11 = 0;
      uVar13 = 0;
      __s1 = local_48;
      do {
        pcVar7 = (char *)FUN_0040cb0c(puVar12[1],iVar11);
        if ((*pcVar7 == '\x03') && (pcVar7[1] == '\x01')) {
          bVar1 = pcVar7[2];
          if (uVar13 == bVar1) {
LAB_0042aab0:
            __n = (size_t)local_a4;
            if (*(ulong *)(pcVar7 + 0x10) != __n) goto LAB_0042aa2c;
          }
          else {
            lVar10 = *(long *)(*(long *)*puVar12 + (ulong)(uint)bVar1 * 8);
            uVar13 = (uint)bVar1;
            if (lVar10 != 0) {
              local_a4 = uVar3;
              iVar4 = FUN_0039e518(local_48,uVar3,auStack_a0,&local_a4,lVar10,0);
              __s1 = auStack_a0;
              if (iVar4 != 0) goto LAB_0042aab0;
              FUN_003c86b4(local_48,"crypto/x509/x509_vfy.c",0xbfc);
              goto LAB_0042abd4;
            }
            __n = (size_t)uVar3;
            __s1 = local_48;
            local_a4 = uVar3;
            if (*(ulong *)(pcVar7 + 0x10) != __n) goto LAB_0042aa2c;
          }
          iVar4 = memcmp(__s1,*(void **)(pcVar7 + 8),__n);
          if (iVar4 == 0) {
            *(undefined4 *)((long)puVar12 + 0x2c) = 0;
            puVar12[3] = pcVar7;
            FUN_003c86b4(local_48,"crypto/x509/x509_vfy.c",0xbfc);
            uVar8 = 0;
            uVar5 = 1;
            pcVar9 = *(code **)(param_1 + 0x30);
            *(undefined4 *)(param_1 + 0xac) = 0;
            *(undefined4 *)(param_1 + 0xb0) = 0;
            goto joined_r0x0042ab50;
          }
        }
LAB_0042aa2c:
        iVar11 = iVar11 + 1;
      } while (iVar2 != iVar11);
    }
    FUN_003c86b4(local_48,"crypto/x509/x509_vfy.c",0xbfc);
    uVar5 = 0;
    uVar8 = 0x41;
    pcVar9 = *(code **)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0xac) = 0;
    *(undefined4 *)(param_1 + 0xb0) = 0x41;
joined_r0x0042ab50:
    if (pcVar9 == (code *)0x0) {
      iVar2 = (**(code **)(param_1 + 0x38))(uVar5,param_1);
      goto LAB_0042aba4;
    }
    uVar6 = (*pcVar9)(uVar8,param_1);
    iVar2 = (int)uVar6;
joined_r0x0042ab04:
    if (0 < iVar2) {
      return uVar6;
    }
  }
  if (*(int *)(param_1 + 0xb0) != 0) {
    return uVar6;
  }
LAB_0042abdc:
  *(undefined4 *)(param_1 + 0xb0) = 1;
  return uVar6;
}


// ===== 0042ac04  FUN_0042ac04 =====

undefined8 FUN_0042ac04(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  
  if (*(long *)(param_1 + 8) == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/x509_vfy.c",0x14d,"x509_verify_x509");
    uVar5 = 0x69;
  }
  else {
    plVar8 = (long *)(param_1 + 0x98);
    if (*plVar8 == 0) {
      iVar1 = FUN_00426ea0(plVar8,*(long *)(param_1 + 8),1);
      if (iVar1 == 0) {
        uVar6 = 0x11;
        goto LAB_0042ac8c;
      }
      *(undefined4 *)(param_1 + 0x94) = 1;
      lVar3 = FUN_00427350(*(undefined8 *)(param_1 + 8));
      uVar7 = *(uint *)(*(long *)(param_1 + 0x20) + 0x2c);
      if (0 < (int)uVar7) {
        if (lVar3 != 0) {
          if (4 < uVar7) {
            uVar7 = 5;
          }
          iVar1 = FUN_003a614c();
          if (*(int *)(&DAT_0020ed58 + (ulong)(uVar7 - 1) * 4) <= iVar1) goto LAB_0042ad3c;
        }
        lVar3 = *(long *)(param_1 + 8);
        *(undefined4 *)(param_1 + 0xac) = 0;
        if (lVar3 == 0) {
          lVar3 = FUN_0040cb0c(*plVar8,0);
        }
        *(long *)(param_1 + 0xb8) = lVar3;
        *(undefined4 *)(param_1 + 0xb0) = 0x42;
        uVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
        if ((int)uVar5 == 0) {
          return uVar5;
        }
      }
LAB_0042ad3c:
      if ((*(long *)(param_1 + 0xf0) == 0) ||
         (iVar1 = FUN_0040caf8(*(undefined8 *)(*(long *)(param_1 + 0xf0) + 8)), iVar1 < 1)) {
LAB_0042ae64:
        uVar5 = FUN_0042dd84(param_1);
        iVar1 = (int)uVar5;
      }
      else {
        lVar9 = *(long *)(param_1 + 0xf0);
        lVar3 = *(long *)(param_1 + 8);
        FUN_0043da80(*(undefined8 *)(lVar9 + 0x20));
        *(undefined8 *)(lVar9 + 0x2c) = 0xffffffffffffffff;
        *(undefined8 *)(lVar9 + 0x20) = 0;
        *(undefined8 *)(lVar9 + 0x18) = 0;
        iVar1 = FUN_0042ea00(*(undefined4 *)(param_1 + 0x94),*(undefined8 *)(param_1 + 0xf0),
                             *(undefined8 *)(param_1 + 8),0);
        if ((iVar1 == 0) && (((*(byte *)(lVar9 + 0x28) & 5) != 0 || (-1 < *(int *)(lVar9 + 0x2c)))))
        goto LAB_0042ae64;
        iVar2 = FUN_0042b63c(0,*plVar8);
        if (iVar2 == 0) {
          uVar5 = 0xffffffff;
          goto LAB_0042ae7c;
        }
        if (iVar1 < 1) {
          if (iVar1 < 0) {
            *(long *)(param_1 + 0xb8) = lVar3;
            uVar5 = 0xffffffff;
            *(undefined8 *)(param_1 + 0xac) = DAT_001b7198;
            goto LAB_0042ae7c;
          }
          iVar1 = FUN_004274c0(0,lVar3,0,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
          if (iVar1 != 0) {
            *(undefined4 *)(param_1 + 0xac) = 0;
            lVar9 = lVar3;
            if (lVar3 == 0) {
              lVar9 = FUN_0040cb0c(*plVar8,0);
            }
            *(long *)(param_1 + 0xb8) = lVar9;
            *(int *)(param_1 + 0xb0) = iVar1;
            uVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
            if ((int)uVar5 == 0) goto LAB_0042ae7c;
          }
          *(undefined4 *)(param_1 + 0xac) = 0;
          if (lVar3 == 0) {
            lVar3 = FUN_0040cb0c(*plVar8,0);
          }
          *(long *)(param_1 + 0xb8) = lVar3;
          *(undefined4 *)(param_1 + 0xb0) = 0x41;
          uVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
          iVar1 = (int)uVar5;
        }
        else {
          iVar1 = FUN_004274c0(0,lVar3,0,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
          if (iVar1 != 0) {
            *(undefined4 *)(param_1 + 0xac) = 0;
            lVar4 = lVar3;
            if (lVar3 == 0) {
              lVar4 = FUN_0040cb0c(*plVar8,0);
            }
            *(long *)(param_1 + 0xb8) = lVar4;
            *(int *)(param_1 + 0xb0) = iVar1;
            uVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
            if ((int)uVar5 == 0) goto LAB_0042ae7c;
          }
          if (((*(byte *)(lVar9 + 0x38) & 1) == 0) &&
             (uVar5 = FUN_0042ecf4(param_1), (int)uVar5 == 0)) goto LAB_0042ae7c;
          *(undefined4 *)(param_1 + 0xac) = 0;
          *(long *)(param_1 + 0xb8) = lVar3;
          uVar5 = (**(code **)(param_1 + 0x38))(1,param_1);
          iVar1 = (int)uVar5;
        }
      }
      if (0 < iVar1) {
        return uVar5;
      }
LAB_0042ae7c:
      if (*(int *)(param_1 + 0xb0) != 0) {
        return uVar5;
      }
      *(undefined4 *)(param_1 + 0xb0) = 1;
      return uVar5;
    }
    FUN_00379868();
    FUN_0037995c("crypto/x509/x509_vfy.c",0x157,"x509_verify_x509");
    uVar5 = 0xc0101;
  }
  FUN_00379a5c(0xb,uVar5,0);
  uVar6 = 0x45;
LAB_0042ac8c:
  *(undefined4 *)(param_1 + 0xb0) = uVar6;
  return 0xffffffff;
}


// ===== 0042af5c  FUN_0042af5c =====

undefined8 FUN_0042af5c(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/x509_vfy.c",0x122,"X509_verify_cert");
    FUN_00379a5c(0xb,0xc0102,0);
    return 0xffffffff;
  }
  if (*(long *)(param_1 + 0x100) != 0) {
    uVar1 = FUN_0042a908();
    return uVar1;
  }
  uVar1 = FUN_0042ac04();
  return uVar1;
}


// ===== 0042afb4  FUN_0042afb4 =====

undefined8 FUN_0042afb4(long param_1,long param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  
  uVar4 = (uint)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  if ((uVar4 >> 1 & 1) == 0) {
    if ((uVar4 >> 0x15 & 1) != 0) {
      return 1;
    }
    lVar5 = 0;
    uVar2 = FUN_00429dac(param_2);
    iVar1 = FUN_0042b1b0(uVar2,0);
  }
  else {
    lVar5 = *(long *)(param_1 + 0x20) + 8;
    uVar2 = FUN_00429dac(param_2);
    iVar1 = FUN_0042b1b0(uVar2,lVar5);
  }
  if ((param_3 < 0) && (-1 < iVar1)) {
    return 0;
  }
  if (iVar1 == 0) {
    if (param_3 < 0) {
      iVar1 = *(int *)(param_1 + 0xac);
    }
    else {
      *(int *)(param_1 + 0xac) = param_3;
      iVar1 = param_3;
    }
    lVar3 = param_2;
    if (param_2 == 0) {
      lVar3 = FUN_0040cb0c(*(undefined8 *)(param_1 + 0x98),iVar1);
    }
    *(long *)(param_1 + 0xb8) = lVar3;
    *(undefined4 *)(param_1 + 0xb0) = 0xd;
    uVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
    iVar1 = (int)uVar2;
  }
  else {
    if (iVar1 < 1) goto LAB_0042b0b4;
    if (param_3 < 0) {
      iVar1 = *(int *)(param_1 + 0xac);
    }
    else {
      *(int *)(param_1 + 0xac) = param_3;
      iVar1 = param_3;
    }
    lVar3 = param_2;
    if (param_2 == 0) {
      lVar3 = FUN_0040cb0c(*(undefined8 *)(param_1 + 0x98),iVar1);
    }
    *(long *)(param_1 + 0xb8) = lVar3;
    *(undefined4 *)(param_1 + 0xb0) = 9;
    uVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
    iVar1 = (int)uVar2;
  }
  if (iVar1 == 0) {
    return uVar2;
  }
LAB_0042b0b4:
  uVar2 = FUN_00429db4(param_2);
  iVar1 = FUN_0042b1b0(uVar2,lVar5);
  if ((param_3 < 0) && (iVar1 < 1)) {
    return 0;
  }
  if (iVar1 == 0) {
    if (param_3 < 0) {
      param_3 = *(int *)(param_1 + 0xac);
    }
    else {
      *(int *)(param_1 + 0xac) = param_3;
    }
    if (param_2 == 0) {
      param_2 = FUN_0040cb0c(*(undefined8 *)(param_1 + 0x98),param_3);
    }
    *(long *)(param_1 + 0xb8) = param_2;
    *(undefined4 *)(param_1 + 0xb0) = 0xe;
    uVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
    iVar1 = (int)uVar2;
  }
  else {
    if (-1 < iVar1) {
      return 1;
    }
    if (param_3 < 0) {
      param_3 = *(int *)(param_1 + 0xac);
    }
    else {
      *(int *)(param_1 + 0xac) = param_3;
    }
    if (param_2 == 0) {
      param_2 = FUN_0040cb0c(*(undefined8 *)(param_1 + 0x98),param_3);
    }
    *(long *)(param_1 + 0xb8) = param_2;
    *(undefined4 *)(param_1 + 0xb0) = 10;
    uVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
    iVar1 = (int)uVar2;
  }
  if (iVar1 != 0) {
    return 1;
  }
  return uVar2;
}


// ===== 0042b1b0  FUN_0042b1b0 =====

ulong FUN_0042b1b0(int *param_1,time_t *param_2)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  uint local_34;
  time_t local_18;
  
  if (param_1[1] == 0x18) {
    if (*param_1 != 0xf) {
      return 0;
    }
  }
  else {
    if (param_1[1] != 0x17) {
      return 0;
    }
    if (*param_1 != 0xd) {
      return 0;
    }
  }
  lVar4 = 0;
  do {
    uVar2 = FUN_003c47dc(*(undefined1 *)(*(long *)(param_1 + 2) + lVar4));
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 < (long)*param_1 + -1);
  if (*(char *)(*(long *)(param_1 + 2) + (long)*param_1 + -1) != 'Z') {
    return 0;
  }
  if (param_2 == (time_t *)0x0) {
    time(&local_18);
    lVar4 = FUN_003c0df0(0,local_18,0,0);
  }
  else {
    local_18 = *param_2;
    lVar4 = FUN_003c0df0(0,local_18,0,0);
  }
  if ((lVar4 == 0) || (iVar1 = FUN_003c1204(&local_18,&local_34,param_1,lVar4), iVar1 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
    if (-1 < (int)((uint)local_18 | local_34)) {
      uVar3 = 0xffffffff;
    }
  }
  FUN_003c04c0(lVar4);
  return (ulong)uVar3;
}


// ===== 0042b304  FUN_0042b304 =====

void FUN_0042b304(long param_1,long param_2,int param_3,int param_4)

{
  if (param_3 < 0) {
    param_3 = *(int *)(param_1 + 0xac);
  }
  else {
    *(int *)(param_1 + 0xac) = param_3;
  }
  if (param_2 == 0) {
    param_2 = FUN_0040cb0c(*(undefined8 *)(param_1 + 0x98),param_3);
  }
  *(long *)(param_1 + 0xb8) = param_2;
  if (param_4 != 0) {
    *(int *)(param_1 + 0xb0) = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x0042b354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x38))(0,param_1);
  return;
}


// ===== 0042b364  FUN_0042b364 =====

void FUN_0042b364(undefined8 param_1)

{
  FUN_0042b1b0(param_1,0);
  return;
}


// ===== 0042b36c  FUN_0042b36c =====

void FUN_0042b36c(long param_1,undefined8 param_2,time_t *param_3)

{
  time_t local_28;
  
  if (param_3 == (time_t *)0x0) {
    time(&local_28);
  }
  else {
    local_28 = *param_3;
  }
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x10) >> 6 & 1) == 0)) {
    if (*(int *)(param_1 + 4) == 0x18) {
      FUN_003c19b0(param_1,local_28,0,param_2);
      return;
    }
    if (*(int *)(param_1 + 4) == 0x17) {
      FUN_003c1b64(param_1,local_28,0,param_2);
      return;
    }
  }
  FUN_003c0df0(param_1,local_28,0,param_2);
  return;
}


// ===== 0042b424  FUN_0042b424 =====

undefined8 FUN_0042b424(long param_1,long param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 local_18;
  
  if (param_1 != 0) {
    uVar1 = FUN_0043248c();
    if ((uVar1 >> 1 & 1) != 0) {
      local_18 = FUN_004324cc(param_1);
      puVar3 = &local_18;
      goto joined_r0x0042b454;
    }
    if ((uVar1 >> 0x15 & 1) != 0) {
      return 0;
    }
  }
  puVar3 = (undefined8 *)0x0;
joined_r0x0042b454:
  if ((param_3 != 0) && (iVar2 = FUN_0042b1b0(param_3,puVar3), iVar2 < 0)) {
    return 1;
  }
  if ((param_2 != 0) && (iVar2 = FUN_0042b1b0(param_2,puVar3), 0 < iVar2)) {
    return 0xffffffff;
  }
  return 0;
}


// ===== 0042b4d4  FUN_0042b4d4 =====

void FUN_0042b4d4(long param_1,undefined8 param_2)

{
  time_t local_28;
  
  time(&local_28);
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x10) >> 6 & 1) == 0)) {
    if (*(int *)(param_1 + 4) == 0x18) {
      FUN_003c19b0(param_1,local_28,0,param_2);
      return;
    }
    if (*(int *)(param_1 + 4) == 0x17) {
      FUN_003c1b64(param_1,local_28,0,param_2);
      return;
    }
  }
  FUN_003c0df0(param_1,local_28,0,param_2);
  return;
}


// ===== 0042b580  FUN_0042b580 =====

void FUN_0042b580(long param_1,undefined4 param_2,undefined8 param_3,time_t *param_4)

{
  time_t local_18;
  
  if (param_4 == (time_t *)0x0) {
    time(&local_18);
  }
  else {
    local_18 = *param_4;
  }
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x10) >> 6 & 1) == 0)) {
    if (*(int *)(param_1 + 4) == 0x18) {
      FUN_003c19b0(param_1,local_18,param_2,param_3);
      return;
    }
    if (*(int *)(param_1 + 4) == 0x17) {
      FUN_003c1b64(param_1,local_18,param_2,param_3);
      return;
    }
  }
  FUN_003c0df0(param_1,local_18,param_2,param_3);
  return;
}


// ===== 0042b63c  FUN_0042b63c =====

undefined8 FUN_0042b63c(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((param_1 != 0) && (iVar1 = FUN_003a689c(param_1), iVar1 == 0)) {
    return 1;
  }
  iVar1 = FUN_0040caf8(param_2);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      FUN_0040cb0c(param_2,iVar1);
      lVar3 = FUN_00427350();
      if (lVar3 == 0) {
        FUN_00379868();
        FUN_0037995c("crypto/x509/x509_vfy.c",0x819,"X509_get_pubkey_parameters");
        uVar4 = 0x6c;
        goto LAB_0042b74c;
      }
      iVar2 = FUN_003a689c();
      if (iVar2 == 0) {
        while (0 < iVar1) {
          FUN_0040cb0c(param_2,iVar1 + -1);
          uVar4 = FUN_00427350();
          uVar4 = FUN_003a61d8(uVar4,lVar3);
          iVar1 = iVar1 + -1;
          if ((int)uVar4 == 0) {
            return uVar4;
          }
        }
        if (param_1 == 0) {
          return 1;
        }
        uVar4 = FUN_003a61d8(param_1,lVar3);
        return uVar4;
      }
      iVar1 = iVar1 + 1;
      iVar2 = FUN_0040caf8(param_2);
    } while (iVar1 < iVar2);
  }
  FUN_00379868();
  FUN_0037995c("crypto/x509/x509_vfy.c",0x821,"X509_get_pubkey_parameters");
  uVar4 = 0x6b;
LAB_0042b74c:
  FUN_00379a5c(0xb,uVar4,0);
  return 0;
}


// ===== 0042b768  FUN_0042b768 =====

long FUN_0042b768(long param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  long local_38;
  
  if ((*(long *)(param_1 + 0xa8) == 0) && (*(long *)(param_2 + 0xa8) == 0)) {
    if ((*(long *)(param_1 + 0xa0) == 0) || (*(long *)(param_2 + 0xa0) == 0)) {
      FUN_00379868();
      FUN_0037995c("crypto/x509/x509_vfy.c",0x843,"X509_CRL_diff");
      uVar5 = 0x82;
    }
    else {
      uVar5 = FUN_00432b1c();
      uVar3 = FUN_00432b1c(param_2);
      iVar1 = FUN_004267c8(uVar5,uVar3);
      if (iVar1 == 0) {
        iVar1 = FUN_0042bc24(param_1,param_2,0x5a);
        if (iVar1 == 0) {
          FUN_00379868();
          FUN_0037995c("crypto/x509/x509_vfy.c",0x84e,"X509_CRL_diff");
          uVar5 = 0x6e;
        }
        else {
          iVar1 = FUN_0042bc24(param_1,param_2,0x302);
          if (iVar1 == 0) {
            FUN_00379868();
            FUN_0037995c("crypto/x509/x509_vfy.c",0x852,"X509_CRL_diff");
            uVar5 = 0x80;
          }
          else {
            iVar1 = FUN_0038d110(*(undefined8 *)(param_2 + 0xa0),*(undefined8 *)(param_1 + 0xa0));
            if (iVar1 < 1) {
              FUN_00379868();
              FUN_0037995c("crypto/x509/x509_vfy.c",0x857,"X509_CRL_diff");
              uVar5 = 0x84;
            }
            else {
              if ((param_3 == 0) ||
                 ((iVar1 = FUN_0043aa5c(param_1,param_3), 0 < iVar1 &&
                  (iVar1 = FUN_0043aa5c(param_2,param_3), 0 < iVar1)))) {
                lVar4 = FUN_0043a8b8(*(undefined8 *)(param_1 + 0xe8),*(undefined8 *)(param_1 + 0xf0)
                                    );
                if ((lVar4 == 0) || (iVar1 = FUN_004329bc(lVar4,1), iVar1 == 0)) {
                  FUN_00379868();
                  uVar5 = 0x863;
                }
                else {
                  uVar5 = FUN_00432b1c(param_2);
                  iVar1 = FUN_00432a08(lVar4,uVar5);
                  if (iVar1 == 0) {
                    FUN_00379868();
                    uVar5 = 0x868;
                  }
                  else {
                    uVar5 = FUN_00432b0c(param_2);
                    iVar1 = FUN_00432a3c(lVar4,uVar5);
                    if (iVar1 == 0) {
                      FUN_00379868();
                      uVar5 = 0x86d;
                    }
                    else {
                      uVar5 = FUN_00432b14(param_2);
                      iVar1 = FUN_00432a60(lVar4,uVar5);
                      if (iVar1 == 0) {
                        FUN_00379868();
                        uVar5 = 0x871;
                      }
                      else {
                        iVar1 = FUN_00427630(lVar4,0x8c,*(undefined8 *)(param_1 + 0xa0),1,0);
                        if (iVar1 == 0) {
                          FUN_00379868();
                          uVar5 = 0x877;
                        }
                        else {
                          iVar1 = FUN_004275f8(param_2);
                          if (0 < iVar1) {
                            iVar1 = 0;
                            do {
                              uVar5 = FUN_00427618(param_2,iVar1);
                              iVar2 = FUN_00427638(lVar4,uVar5,0xffffffff);
                              if (iVar2 == 0) {
                                FUN_00379868();
                                uVar5 = 0x883;
                                goto LAB_0042ba78;
                              }
                              iVar1 = iVar1 + 1;
                              iVar2 = FUN_004275f8(param_2);
                            } while (iVar1 < iVar2);
                          }
                          uVar5 = FUN_00432b2c(param_2);
                          iVar1 = FUN_0040caf8();
                          if (0 < iVar1) {
                            iVar1 = 0;
                            do {
                              uVar3 = FUN_0040cb0c(uVar5,iVar1);
                              iVar2 = FUN_0043aa74(param_1,&local_38,uVar3);
                              if (iVar2 == 0) {
                                local_38 = FUN_0043a838(uVar3);
                                if (local_38 == 0) {
                                  uVar5 = 0x897;
                                  uVar6 = 0x8000d;
                                }
                                else {
                                  iVar2 = FUN_0043a9c0(lVar4,local_38);
                                  if (iVar2 != 0) goto LAB_0042ba9c;
                                  uVar6 = 0x8000b;
                                  FUN_0043a82c(local_38);
                                  uVar5 = 0x89c;
                                }
                                FUN_00379868();
                                FUN_0037995c("crypto/x509/x509_vfy.c",uVar5,"X509_CRL_diff");
                                goto LAB_0042ba88;
                              }
LAB_0042ba9c:
                              iVar1 = iVar1 + 1;
                              iVar2 = FUN_0040caf8(uVar5);
                            } while (iVar1 < iVar2);
                          }
                          if (((param_3 == 0) || (param_4 == 0)) ||
                             (iVar1 = FUN_00433c80(lVar4,param_3,param_4), iVar1 != 0)) {
                            return lVar4;
                          }
                          FUN_00379868();
                          uVar5 = 0x8a3;
                        }
                      }
                    }
                  }
                }
LAB_0042ba78:
                FUN_0037995c("crypto/x509/x509_vfy.c",uVar5,"X509_CRL_diff");
                uVar6 = 0x8000b;
LAB_0042ba88:
                FUN_00379a5c(0xb,uVar6,0);
                FUN_0043a89c(lVar4);
                return 0;
              }
              FUN_00379868();
              FUN_0037995c("crypto/x509/x509_vfy.c",0x85d,"X509_CRL_diff");
              uVar5 = 0x83;
            }
          }
        }
      }
      else {
        FUN_00379868();
        FUN_0037995c("crypto/x509/x509_vfy.c",0x849,"X509_CRL_diff");
        uVar5 = 0x81;
      }
    }
  }
  else {
    FUN_00379868();
    FUN_0037995c("crypto/x509/x509_vfy.c",0x83e,"X509_CRL_diff");
    uVar5 = 0x7f;
  }
  FUN_00379a5c(0xb,uVar5,0);
  return 0;
}


// ===== 0042bc24  FUN_0042bc24 =====

bool FUN_0042bc24(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  iVar1 = FUN_00427600(param_1,param_3,0xffffffff);
  if (iVar1 < 0) {
    lVar3 = 0;
    iVar1 = FUN_00427600(param_2,param_3,0xffffffff);
  }
  else {
    iVar2 = FUN_00427600(param_1,param_3,iVar1);
    if (iVar2 != -1) {
      return false;
    }
    FUN_00427618(param_1,iVar1);
    lVar3 = FUN_0042a76c();
    iVar1 = FUN_00427600(param_2,param_3,0xffffffff);
  }
  if (iVar1 < 0) {
    lVar4 = 0;
    if (lVar3 == 0) {
      return true;
    }
  }
  else {
    iVar2 = FUN_00427600(param_2,param_3,iVar1);
    if (iVar2 != -1) {
      return false;
    }
    FUN_00427618(param_2,iVar1);
    lVar4 = FUN_0042a76c();
    if (lVar3 == 0 && lVar4 == 0) {
      return true;
    }
  }
  if ((lVar3 != 0) && (lVar4 != 0)) {
    iVar1 = thunk_FUN_0038ef94(lVar3);
    return iVar1 == 0;
  }
  return false;
}


// ===== 0042bd58  FUN_0042bd58 =====

void FUN_0042bd58(long param_1)

{
  FUN_003c5168(param_1 + 0xe0);
  return;
}


// ===== 0042bd60  FUN_0042bd60 =====

void FUN_0042bd60(long param_1)

{
  FUN_003c4e94(param_1 + 0xe0);
  return;
}


// ===== 0042bd68  FUN_0042bd68 =====

undefined4 FUN_0042bd68(long param_1)

{
  return *(undefined4 *)(param_1 + 0xb0);
}


// ===== 0042bd70  FUN_0042bd70 =====

void FUN_0042bd70(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xb0) = param_2;
  return;
}


// ===== 0042bd78  FUN_0042bd78 =====

undefined4 FUN_0042bd78(long param_1)

{
  return *(undefined4 *)(param_1 + 0xac);
}


// ===== 0042bd80  FUN_0042bd80 =====

void FUN_0042bd80(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xac) = param_2;
  return;
}


// ===== 0042bd88  FUN_0042bd88 =====

undefined8 FUN_0042bd88(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}


// ===== 0042bd90  FUN_0042bd90 =====

void FUN_0042bd90(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xb8) = param_2;
  return;
}


// ===== 0042bd98  FUN_0042bd98 =====

undefined8 FUN_0042bd98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}


// ===== 0042bda0  FUN_0042bda0 =====

void FUN_0042bda0(long param_1)

{
  if (*(long *)(param_1 + 0x98) != 0) {
    FUN_004274d0();
    return;
  }
  return;
}


// ===== 0042bdb0  FUN_0042bdb0 =====

undefined8 FUN_0042bdb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}


// ===== 0042bdb8  FUN_0042bdb8 =====

undefined8 FUN_0042bdb8(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}


// ===== 0042bdc0  FUN_0042bdc0 =====

undefined8 FUN_0042bdc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}


// ===== 0042bdc8  FUN_0042bdc8 =====

void FUN_0042bdc8(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}


// ===== 0042bdd0  FUN_0042bdd0 =====

void FUN_0042bdd0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x100) = param_2;
  return;
}


// ===== 0042bdd8  FUN_0042bdd8 =====

void FUN_0042bdd8(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}


// ===== 0042bde0  FUN_0042bde0 =====

void FUN_0042bde0(undefined8 param_1,undefined4 param_2)

{
  FUN_0042bdf0(param_1,0,param_2,0);
  return;
}


// ===== 0042bdf0  FUN_0042bdf0 =====

undefined8 FUN_0042bdf0(long param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  
  iVar4 = param_3;
  if (param_2 != 0) {
    iVar4 = param_2;
  }
  iVar3 = param_2;
  if (param_3 != 0) {
    param_2 = iVar4;
    iVar3 = param_3;
  }
  if (iVar3 == 0) {
LAB_0042be88:
    if (param_4 == 0) {
      bVar2 = 0;
      lVar5 = *(long *)(param_1 + 0x20);
      goto joined_r0x0042bef4;
    }
  }
  else {
    iVar4 = FUN_0041f20c(iVar3);
    if (iVar4 == -1) {
      FUN_00379868();
      uVar6 = 0x931;
LAB_0042be5c:
      FUN_0037995c("crypto/x509/x509_vfy.c",uVar6,"X509_STORE_CTX_purpose_inherit");
      uVar6 = 0x79;
      goto LAB_0042bed0;
    }
    lVar5 = FUN_0041f260();
    if (*(int *)(lVar5 + 4) == 0) {
      iVar4 = FUN_0041f20c(param_2);
      if (iVar4 == -1) {
        FUN_00379868();
        uVar6 = 0x938;
        goto LAB_0042be5c;
      }
      lVar5 = FUN_0041f260();
    }
    if (param_4 == 0) {
      param_4 = *(int *)(lVar5 + 4);
      goto LAB_0042be88;
    }
  }
  iVar4 = FUN_0043000c(param_4);
  if (iVar4 == -1) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/x509_vfy.c",0x944,"X509_STORE_CTX_purpose_inherit");
    uVar6 = 0x78;
LAB_0042bed0:
    FUN_00379a5c(0xb,uVar6,0);
    return 0;
  }
  bVar2 = 1;
  lVar5 = *(long *)(param_1 + 0x20);
joined_r0x0042bef4:
  if ((iVar3 != 0) && (*(int *)(lVar5 + 0x20) == 0)) {
    *(int *)(lVar5 + 0x20) = iVar3;
  }
  bVar1 = (bool)(bVar2 ^ 1);
  if (*(int *)(lVar5 + 0x24) != 0) {
    bVar1 = true;
  }
  if (!bVar1) {
    *(int *)(lVar5 + 0x24) = param_4;
  }
  return 1;
}


// ===== 0042bf4c  FUN_0042bf4c =====

void FUN_0042bf4c(undefined8 param_1,undefined4 param_2)

{
  FUN_0042bdf0(param_1,0,0,param_2);
  return;
}


// ===== 0042bf5c  FUN_0042bf5c =====

long FUN_0042bf5c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_003c8474(0x118,"crypto/x509/x509_vfy.c",0x952);
  if ((lVar1 != 0) && (*(undefined8 *)(lVar1 + 0x108) = param_1, param_2 != 0)) {
    lVar2 = FUN_003ca2f4(param_2,"crypto/x509/x509_vfy.c",0x959);
    *(long *)(lVar1 + 0x110) = lVar2;
    if (lVar2 == 0) {
      FUN_003c86b4(lVar1,"crypto/x509/x509_vfy.c",0x95b);
      return 0;
    }
  }
  return lVar1;
}


// ===== 0042bfe4  FUN_0042bfe4 =====

void FUN_0042bfe4(void)

{
  long lVar1;
  
  lVar1 = FUN_003c8474(0x118,"crypto/x509/x509_vfy.c",0x952);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x108) = 0;
  }
  return;
}


// ===== 0042c010  FUN_0042c010 =====

void FUN_0042c010(long param_1)

{
  if (param_1 != 0) {
    if (*(code **)(param_1 + 0x88) != (code *)0x0) {
      (**(code **)(param_1 + 0x88))(param_1);
      *(undefined8 *)(param_1 + 0x88) = 0;
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      if (*(long *)(param_1 + 0xd8) == 0) {
        FUN_00431d48();
      }
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    FUN_004304ac(*(undefined8 *)(param_1 + 0xa0));
    *(undefined8 *)(param_1 + 0xa0) = 0;
    FUN_004131f0(*(undefined8 *)(param_1 + 0x98));
    *(undefined8 *)(param_1 + 0x98) = 0;
    FUN_003c525c(5,param_1,param_1 + 0xe0);
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    FUN_003c86b4(*(undefined8 *)(param_1 + 0x110),"crypto/x509/x509_vfy.c",0x970);
    FUN_003c86b4(param_1,"crypto/x509/x509_vfy.c",0x971);
    return;
  }
  return;
}


// ===== 0042c0b0  FUN_0042c0b0 =====

void FUN_0042c0b0(long param_1)

{
  if (*(code **)(param_1 + 0x88) != (code *)0x0) {
    (**(code **)(param_1 + 0x88))(param_1);
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    if (*(long *)(param_1 + 0xd8) == 0) {
      FUN_00431d48();
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  FUN_004304ac(*(undefined8 *)(param_1 + 0xa0));
  *(undefined8 *)(param_1 + 0xa0) = 0;
  FUN_004131f0(*(undefined8 *)(param_1 + 0x98));
  *(undefined8 *)(param_1 + 0x98) = 0;
  FUN_003c525c(5,param_1,param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  return;
}


// ===== 0042c124  FUN_0042c124 =====

undefined8 FUN_0042c124(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0042c15c(param_1,param_2,0,0);
  if ((int)uVar1 != 0) {
    uVar1 = 1;
    *(undefined8 *)(param_1 + 0x100) = param_3;
  }
  return uVar1;
}


// ===== 0042c15c  FUN_0042c15c =====

undefined8 FUN_0042c15c(long *param_1,long param_2,long param_3,long param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  code *pcVar5;
  long lVar6;
  
  if (param_1 == (long *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/x509_vfy.c",0x981,"X509_STORE_CTX_init");
    FUN_00379a5c(0xb,0xc0102,0);
    return 0;
  }
  if ((code *)param_1[0x11] != (code *)0x0) {
    (*(code *)param_1[0x11])(param_1);
    param_1[0x11] = 0;
  }
  if (param_1[4] != 0) {
    if (param_1[0x1b] == 0) {
      FUN_00431d48();
    }
    param_1[4] = 0;
  }
  FUN_004304ac(param_1[0x14]);
  param_1[0x14] = 0;
  FUN_004131f0(param_1[0x13]);
  param_1[0x13] = 0;
  FUN_003c525c(5,param_1,param_1 + 0x1c);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[0x20] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if (param_2 == 0) {
    param_1[0x11] = 0;
    param_1[8] = (long)PTR_FUN_007a1cd0;
    param_1[9] = (long)FUN_0042c578;
    param_1[6] = (long)FUN_0042c59c;
    param_1[7] = (long)FUN_0042c598;
    param_1[10] = (long)FUN_0042c800;
    param_1[0xb] = 0;
    param_1[0xc] = (long)FUN_0042ca98;
    param_1[0xd] = (long)FUN_0042cde4;
    puVar1 = PTR_FUN_007a1cc0;
    param_1[0xe] = (long)FUN_0042ce98;
    param_1[0xf] = (long)puVar1;
LAB_0042c3b0:
    param_1[0x10] = (long)PTR_FUN_007a1cc8;
    lVar6 = FUN_00431d10();
    param_1[4] = lVar6;
    if (lVar6 == 0) {
LAB_0042c448:
      FUN_00379868();
      FUN_0037995c("crypto/x509/x509_vfy.c",0x9dd,"X509_STORE_CTX_init");
      uVar3 = 0x8000d;
    }
    else {
      if (param_2 != 0) goto LAB_0042c3cc;
      *(uint *)(lVar6 + 0x10) = *(uint *)(lVar6 + 0x10) | 0x11;
      lVar6 = FUN_004328fc("default");
joined_r0x0042c500:
      if (lVar6 == 0) {
        FUN_00379868();
        FUN_0037995c("crypto/x509/x509_vfy.c",0xac4,"X509_STORE_CTX_set_default");
        FUN_00379a5c(0xb,0x79,"name=%s","default");
        pcVar5 = (code *)param_1[0x11];
        goto joined_r0x0042c540;
      }
      iVar2 = FUN_00431de4(param_1[4],lVar6);
      if (iVar2 == 0) goto LAB_0042c478;
      if (*(int *)(param_1[4] + 0x24) == 0) {
        FUN_0041f20c(*(undefined4 *)(param_1[4] + 0x20));
        lVar6 = FUN_0041f260();
        if (lVar6 != 0) {
          uVar3 = FUN_0041f728();
          *(undefined4 *)(param_1[4] + 0x24) = uVar3;
        }
      }
      iVar2 = FUN_003c4ee0(5,param_1,param_1 + 0x1c);
      if (iVar2 != 0) {
        return 1;
      }
      FUN_00379868();
      FUN_0037995c("crypto/x509/x509_vfy.c",0x9f9,"X509_STORE_CTX_init");
      uVar3 = 0x8000f;
    }
    FUN_00379a5c(0xb,uVar3,0);
  }
  else {
    pcVar5 = FUN_0042c578;
    if (*(code **)(param_2 + 0x38) != (code *)0x0) {
      pcVar5 = *(code **)(param_2 + 0x38);
    }
    lVar6 = *(long *)(param_2 + 0x78);
    param_1[9] = (long)pcVar5;
    puVar1 = PTR_FUN_007a1cd0;
    if (*(undefined **)(param_2 + 0x30) != (undefined *)0x0) {
      puVar1 = *(undefined **)(param_2 + 0x30);
    }
    param_1[8] = (long)puVar1;
    pcVar5 = FUN_0042c598;
    if (*(code **)(param_2 + 0x28) != (code *)0x0) {
      pcVar5 = *(code **)(param_2 + 0x28);
    }
    param_1[7] = (long)pcVar5;
    pcVar5 = FUN_0042c59c;
    if (*(code **)(param_2 + 0x20) != (code *)0x0) {
      pcVar5 = *(code **)(param_2 + 0x20);
    }
    param_1[6] = (long)pcVar5;
    pcVar5 = FUN_0042c800;
    if (*(code **)(param_2 + 0x40) != (code *)0x0) {
      pcVar5 = *(code **)(param_2 + 0x40);
    }
    param_1[10] = (long)pcVar5;
    param_1[0xb] = *(long *)(param_2 + 0x48);
    pcVar5 = FUN_0042ca98;
    if (*(code **)(param_2 + 0x50) != (code *)0x0) {
      pcVar5 = *(code **)(param_2 + 0x50);
    }
    param_1[0xc] = (long)pcVar5;
    pcVar5 = FUN_0042cde4;
    if (*(code **)(param_2 + 0x58) != (code *)0x0) {
      pcVar5 = *(code **)(param_2 + 0x58);
    }
    param_1[0xd] = (long)pcVar5;
    pcVar5 = FUN_0042ce98;
    if (*(code **)(param_2 + 0x60) != (code *)0x0) {
      pcVar5 = *(code **)(param_2 + 0x60);
    }
    param_1[0xe] = (long)pcVar5;
    puVar1 = PTR_FUN_007a1cc0;
    puVar4 = *(undefined **)(param_2 + 0x68);
    param_1[0x11] = lVar6;
    if (puVar4 != (undefined *)0x0) {
      puVar1 = puVar4;
    }
    param_1[0xf] = (long)puVar1;
    if (*(long *)(param_2 + 0x70) == 0) goto LAB_0042c3b0;
    param_1[0x10] = *(long *)(param_2 + 0x70);
    lVar6 = FUN_00431d10();
    param_1[4] = lVar6;
    if (lVar6 == 0) goto LAB_0042c448;
LAB_0042c3cc:
    iVar2 = FUN_00431de4(lVar6,*(undefined8 *)(param_2 + 0x18));
    if (iVar2 != 0) {
      lVar6 = FUN_004328fc("default");
      goto joined_r0x0042c500;
    }
  }
LAB_0042c478:
  pcVar5 = (code *)param_1[0x11];
joined_r0x0042c540:
  if (pcVar5 != (code *)0x0) {
    (*pcVar5)(param_1);
    param_1[0x11] = 0;
  }
  if (param_1[4] != 0) {
    if (param_1[0x1b] == 0) {
      FUN_00431d48();
    }
    param_1[4] = 0;
  }
  FUN_004304ac(param_1[0x14]);
  param_1[0x14] = 0;
  FUN_004131f0(param_1[0x13]);
  param_1[0x13] = 0;
  FUN_003c525c(5,param_1,param_1 + 0x1c);
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  return 0;
}


// ===== 0042c578  FUN_0042c578 =====

bool FUN_0042c578(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0041fa80(param_3);
  return iVar1 == 0;
}


// ===== 0042c598  FUN_0042c598 =====

void FUN_0042c598(void)

{
  return;
}


// ===== 0042c59c  FUN_0042c59c =====

ulong FUN_0042c59c(long param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  
  if (*(long *)(param_1 + 0x100) != 0) {
    iVar2 = (**(code **)(param_1 + 0x38))(*(int *)(param_1 + 0xb0) == 0,param_1);
    return (ulong)(iVar2 != 0);
  }
  iVar3 = FUN_0040caf8(*(undefined8 *)(param_1 + 0x98));
  iVar2 = iVar3 + -1;
  lVar5 = FUN_0040cb0c(*(undefined8 *)(param_1 + 0x98),iVar2);
  *(int *)(param_1 + 0xac) = iVar2;
  if (*(int *)(param_1 + 0xf8) == 0) {
    iVar4 = FUN_0041fa80(lVar5,lVar5);
    lVar9 = lVar5;
    if ((iVar4 != 0) && ((*(byte *)(*(long *)(param_1 + 0x20) + 0x1a) >> 3 & 1) == 0)) {
      iVar4 = iVar3 + -2;
      if (1 < iVar3) {
        *(int *)(param_1 + 0xac) = iVar4;
        lVar7 = FUN_0040cb0c(*(undefined8 *)(param_1 + 0x98),iVar4);
        goto LAB_0042c638;
      }
      *(undefined4 *)(param_1 + 0xac) = 0;
      lVar7 = lVar5;
      if (lVar5 == 0) {
        lVar7 = FUN_0040cb0c(*(undefined8 *)(param_1 + 0x98),0);
      }
      *(long *)(param_1 + 0xb8) = lVar7;
      *(undefined4 *)(param_1 + 0xb0) = 0x15;
      uVar6 = (**(code **)(param_1 + 0x38))(0,param_1);
      if ((int)uVar6 == 0) {
        return uVar6;
      }
    }
  }
  else {
    lVar9 = 0;
  }
  lVar7 = lVar5;
  lVar5 = lVar9;
  iVar4 = iVar2;
  if (iVar3 < 1) {
    return 1;
  }
LAB_0042c638:
  do {
    lVar9 = lVar7;
    if ((lVar5 != 0) &&
       ((lVar9 != lVar5 ||
        (((*(byte *)(*(long *)(param_1 + 0x20) + 0x19) >> 6 & 1) != 0 &&
         ((*(byte *)(lVar5 + 0xe9) >> 5 & 1) != 0)))))) {
      if (lVar9 == lVar5) {
        iVar2 = iVar4;
        if ((*(byte *)(lVar5 + 0xe8) >> 4 & 1) != 0) goto LAB_0042c658;
      }
      else {
        iVar2 = iVar4 + 1;
LAB_0042c658:
        iVar3 = FUN_0041fbb8(lVar5,lVar9);
        if (iVar3 != 0) {
          *(int *)(param_1 + 0xac) = iVar2;
          *(int *)(param_1 + 0xb0) = iVar3;
          *(long *)(param_1 + 0xb8) = lVar5;
          uVar6 = (**(code **)(param_1 + 0x38))(0,param_1);
          if ((int)uVar6 == 0) {
            return uVar6;
          }
        }
      }
      lVar7 = FUN_00427350(lVar5);
      if (lVar7 == 0) {
        pcVar8 = *(code **)(param_1 + 0x38);
        *(long *)(param_1 + 0xb8) = lVar5;
        *(int *)(param_1 + 0xac) = iVar2;
        *(undefined4 *)(param_1 + 0xb0) = 6;
      }
      else {
        iVar2 = FUN_00433804(lVar9,lVar7);
        if (0 < iVar2) goto LAB_0042c700;
        *(int *)(param_1 + 0xac) = iVar4;
        lVar7 = lVar9;
        if (lVar9 == 0) {
          lVar7 = FUN_0040cb0c(*(undefined8 *)(param_1 + 0x98),iVar4);
        }
        pcVar8 = *(code **)(param_1 + 0x38);
        *(long *)(param_1 + 0xb8) = lVar7;
        *(undefined4 *)(param_1 + 0xb0) = 7;
      }
      uVar6 = (*pcVar8)(0,param_1);
      if ((int)uVar6 == 0) {
        return uVar6;
      }
    }
LAB_0042c700:
    uVar6 = FUN_0042afb4(param_1,lVar9,iVar4);
    if ((int)uVar6 == 0) {
      return uVar6;
    }
    *(long *)(param_1 + 0xb8) = lVar9;
    *(long *)(param_1 + 0xc0) = lVar5;
    *(int *)(param_1 + 0xac) = iVar4;
    uVar6 = (**(code **)(param_1 + 0x38))(1,param_1);
    if ((int)uVar6 == 0) {
      return uVar6;
    }
    if (iVar4 == 0) {
      return 1;
    }
    lVar7 = FUN_0040cb0c(*(undefined8 *)(param_1 + 0x98),iVar4 + -1);
    bVar1 = iVar4 < 1;
    lVar5 = lVar9;
    iVar4 = iVar4 + -1;
    if (bVar1) {
      return 1;
    }
  } while( true );
}


// ===== 0042c800  FUN_0042c800 =====

undefined8 FUN_0042c800(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  long local_80;
  long local_78;
  long local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_48;
  
  uVar7 = (uint)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  if ((uVar7 >> 2 & 1) != 0) {
    if ((uVar7 >> 3 & 1) == 0) {
      if (*(long *)(param_1 + 0xd8) != 0) {
        return 1;
      }
      iVar9 = 0;
    }
    else {
      iVar3 = FUN_0040caf8(*(undefined8 *)(param_1 + 0x98));
      iVar9 = iVar3 + -1;
      if (iVar3 < 1) {
        return 1;
      }
    }
    puVar1 = PTR_FUN_007a1bc8;
    iVar3 = 0;
    do {
      *(int *)(param_1 + 0xac) = iVar3;
      local_80 = 0;
      lVar5 = FUN_0040cb0c(*(undefined8 *)(param_1 + 0x98),iVar3);
      *(long *)(param_1 + 0xb8) = lVar5;
      *(undefined8 *)(param_1 + 0xc0) = 0;
      *(undefined8 *)(param_1 + 0xd0) = 0;
      if ((*(byte *)(lVar5 + 0xe9) >> 2 & 1) == 0) {
        iVar10 = 0;
        do {
          if (*(code **)(param_1 + 0x58) == (code *)0x0) {
            local_48 = 0;
            local_64 = 0;
            local_78 = 0;
            local_70 = 0;
            uVar6 = FUN_00426a88(lVar5);
            local_68 = *(undefined4 *)(param_1 + 0xd4);
            iVar4 = FUN_0042ee94(param_1,&local_70,&local_78,&local_48,&local_64,&local_68,
                                 *(undefined8 *)(param_1 + 0x18));
            if (iVar4 == 0) {
              lVar8 = (**(code **)(param_1 + 0x80))(param_1,uVar6);
              if ((lVar8 != 0) || (local_70 == 0)) {
                FUN_0042ee94(param_1,&local_70,&local_78,&local_48,&local_64,&local_68,lVar8);
                FUN_0040ca6c(lVar8,puVar1);
                goto joined_r0x0042c988;
              }
            }
            else {
joined_r0x0042c988:
              if (local_70 == 0) {
                iVar4 = 0;
                lVar8 = 0;
                goto LAB_0042c9a8;
              }
            }
            iVar4 = 1;
            *(undefined8 *)(param_1 + 0xc0) = local_48;
            *(undefined4 *)(param_1 + 0xd0) = local_64;
            *(undefined4 *)(param_1 + 0xd4) = local_68;
            lVar8 = local_78;
            local_80 = local_70;
          }
          else {
            iVar4 = (**(code **)(param_1 + 0x58))(param_1,&local_80,lVar5);
            lVar8 = 0;
          }
LAB_0042c9a8:
          if (iVar4 == 0) {
LAB_0042ca50:
            *(undefined4 *)(param_1 + 0xb0) = 3;
            iVar4 = (**(code **)(param_1 + 0x38))(0,param_1);
            goto LAB_0042c870;
          }
          *(long *)(param_1 + 200) = local_80;
          iVar4 = (**(code **)(param_1 + 0x60))(param_1);
          if (iVar4 == 0) {
LAB_0042c86c:
            iVar4 = 0;
            goto LAB_0042c870;
          }
          if (lVar8 == 0) {
LAB_0042c9fc:
            iVar4 = (**(code **)(param_1 + 0x68))(param_1,local_80,lVar5);
            if (iVar4 == 0) goto LAB_0042c86c;
          }
          else {
            iVar4 = (**(code **)(param_1 + 0x60))(param_1,lVar8);
            if (iVar4 == 0) goto LAB_0042c86c;
            iVar4 = (**(code **)(param_1 + 0x68))(param_1,lVar8,lVar5);
            if (iVar4 != 2) {
              if (iVar4 != 0) goto LAB_0042c9fc;
              goto LAB_0042c870;
            }
          }
          FUN_0043a89c(local_80);
          FUN_0043a89c(lVar8);
          iVar4 = *(int *)(param_1 + 0xd4);
          local_80 = 0;
          if (iVar10 == iVar4) {
            lVar8 = 0;
            goto LAB_0042ca50;
          }
          iVar10 = iVar4;
        } while (iVar4 != 0x807f);
        lVar8 = 0;
        iVar4 = 1;
LAB_0042c870:
        FUN_0043a89c(local_80);
        FUN_0043a89c(lVar8);
        *(undefined8 *)(param_1 + 200) = 0;
        if (iVar4 == 0) {
          return 0;
        }
      }
      bVar2 = iVar3 != iVar9;
      iVar3 = iVar3 + 1;
    } while (bVar2);
  }
  return 1;
}


// ===== 0042ca98  FUN_0042ca98 =====

ulong FUN_0042ca98(undefined8 *param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  long local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  code *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  iVar4 = *(int *)((long)param_1 + 0xac);
  iVar3 = FUN_0040caf8(param_1[0x13]);
  lVar8 = param_1[0x18];
  if (lVar8 == 0) {
    if (iVar4 < iVar3 + -1) {
      lVar8 = FUN_0040cb0c(param_1[0x13],iVar4 + 1);
    }
    else {
      lVar8 = FUN_0040cb0c(param_1[0x13]);
      uVar6 = (*(code *)param_1[9])(param_1,lVar8,lVar8);
      if ((int)uVar6 == 0) {
        *(undefined4 *)(param_1 + 0x16) = 0x21;
        uVar5 = (*(code *)param_1[7])(uVar6,param_1);
        if ((int)uVar5 == 0) {
          return uVar5;
        }
      }
    }
    if (lVar8 == 0) {
      return 1;
    }
  }
  if (*(long *)(param_2 + 0xa8) != 0) goto LAB_0042cb30;
  if (((*(byte *)(lVar8 + 0xe8) >> 1 & 1) != 0) && ((*(byte *)(lVar8 + 0xec) >> 1 & 1) == 0)) {
    *(undefined4 *)(param_1 + 0x16) = 0x23;
    uVar5 = (*(code *)param_1[7])(0,param_1);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
  }
  uVar7 = *(uint *)(param_1 + 0x1a);
  if ((uVar7 >> 7 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x16) = 0x2c;
    uVar5 = (*(code *)param_1[7])(0,param_1);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
    uVar7 = *(uint *)(param_1 + 0x1a);
  }
  if ((uVar7 >> 3 & 1) == 0) {
    local_50 = 0;
    uStack_148 = 0;
    local_150 = 0;
    uStack_138 = 0;
    local_140 = 0;
    uStack_128 = 0;
    local_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    local_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    local_f0 = 0;
    local_d8 = (code *)0x0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    local_d0 = 0;
    uStack_b8 = 0;
    local_c0 = 0;
    uStack_a8 = 0;
    local_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    puStack_88 = (undefined8 *)0x0;
    local_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    local_70 = 0;
    uStack_58 = 0;
    local_60 = 0;
    uStack_158 = 0;
    local_160 = 0;
    if ((param_1[0x1b] == 0) &&
       (iVar4 = FUN_0042c15c(&local_160,*param_1,param_1[0x18],param_1[2]), iVar4 != 0)) {
      uStack_148 = param_1[3];
      lVar1 = param_1[4];
      FUN_00431d48(local_140);
      uStack_128 = param_1[7];
      local_140 = lVar1;
      puStack_88 = param_1;
      if (local_60 == 0) {
        iVar4 = FUN_0042ac04(&local_160);
      }
      else {
        iVar4 = FUN_0042a908();
      }
      uVar6 = uStack_c8;
      if (iVar4 < 1) {
        bVar2 = true;
      }
      else {
        uVar9 = param_1[0x13];
        iVar4 = FUN_0040caf8(uVar9);
        uVar9 = FUN_0040cb0c(uVar9,iVar4 + -1);
        iVar4 = FUN_0040caf8(uVar6);
        uVar6 = FUN_0040cb0c(uVar6,iVar4 + -1);
        iVar4 = FUN_00426d54(uVar9,uVar6);
        bVar2 = iVar4 != 0;
      }
      if (local_d8 != (code *)0x0) {
        (*local_d8)(&local_160);
        local_d8 = (code *)0x0;
      }
      if (local_140 != 0) {
        if (puStack_88 == (undefined8 *)0x0) {
          FUN_00431d48();
        }
        local_140 = 0;
      }
      FUN_004304ac(local_c0);
      local_c0 = 0;
      FUN_004131f0(uStack_c8);
      uStack_c8 = 0;
      FUN_003c525c(5,&local_160,&uStack_80);
      if (!bVar2) goto LAB_0042cc84;
    }
    *(undefined4 *)(param_1 + 0x16) = 0x36;
    uVar5 = (*(code *)param_1[7])(0,param_1);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
  }
LAB_0042cc84:
  if ((*(byte *)(param_2 + 0x98) >> 1 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x16) = 0x29;
    uVar5 = (*(code *)param_1[7])(0,param_1);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
  }
LAB_0042cb30:
  if (((*(byte *)(param_1 + 0x1a) >> 6 & 1) == 0) &&
     (uVar5 = FUN_0042f628(param_1,param_2,1), (int)uVar5 == 0)) {
    return uVar5;
  }
  lVar8 = FUN_00427350(lVar8);
  if (lVar8 == 0) {
    *(undefined4 *)(param_1 + 0x16) = 6;
    iVar4 = (*(code *)param_1[7])(0,param_1);
    return (ulong)(iVar4 != 0);
  }
  iVar4 = FUN_004274c8(param_2,lVar8,*(undefined8 *)(param_1[4] + 0x18));
  if (iVar4 != 0) {
    *(int *)(param_1 + 0x16) = iVar4;
    uVar5 = (*(code *)param_1[7])(0,param_1);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
  }
  iVar4 = FUN_0043aa5c(param_2,lVar8);
  if (iVar4 < 1) {
    *(undefined4 *)(param_1 + 0x16) = 8;
    uVar5 = (*(code *)param_1[7])(0,param_1);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
  }
  return 1;
}


// ===== 0042cde4  FUN_0042cde4 =====

undefined8 FUN_0042cde4(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long local_18;
  
  if (((*(byte *)(*(long *)(param_1 + 0x20) + 0x18) >> 4 & 1) == 0) &&
     ((*(byte *)(param_2 + 0x85) >> 1 & 1) != 0)) {
    *(undefined4 *)(param_1 + 0xb0) = 0x24;
    uVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
  }
  iVar1 = FUN_0043aa90(param_2,&local_18,param_3);
  if (iVar1 == 0) {
    return 1;
  }
  if (*(int *)(local_18 + 0x30) == 8) {
    uVar2 = 2;
  }
  else {
    *(undefined4 *)(param_1 + 0xb0) = 0x17;
    uVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
    if ((int)uVar2 != 0) {
      return 1;
    }
  }
  return uVar2;
}


// ===== 0042ce98  FUN_0042ce98 =====

undefined8 FUN_0042ce98(long param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  if (*(long *)(param_1 + 0xd8) != 0) {
    return 1;
  }
  uVar6 = 0x8000b;
  if ((*(int *)(param_1 + 0xf8) != 0) &&
     (iVar2 = FUN_0040c89c(*(undefined8 *)(param_1 + 0x98),0), iVar2 == 0)) {
    uVar6 = 0x8000f;
    uVar5 = 0x6b1;
LAB_0042d024:
    FUN_00379868();
    FUN_0037995c("crypto/x509/x509_vfy.c",uVar5,"check_policy");
    FUN_00379a5c(0xb,uVar6,0);
    *(undefined4 *)(param_1 + 0xb0) = 0x11;
    return 0xffffffff;
  }
  iVar2 = FUN_00430594(param_1 + 0xa0,param_1 + 0xa8,*(undefined8 *)(param_1 + 0x98),
                       *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30),
                       *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x18));
  if (*(int *)(param_1 + 0xf8) != 0) {
    FUN_0040ca00(*(undefined8 *)(param_1 + 0x98));
  }
  if (iVar2 < 0) {
    if (iVar2 == -2) {
      *(undefined8 *)(param_1 + 0xb8) = 0;
      *(undefined4 *)(param_1 + 0xb0) = 0x2b;
                    /* WARNING: Could not recover jumptable at 0x0042d01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
      return uVar5;
    }
    if (iVar2 == -1) {
      iVar2 = FUN_0040caf8(*(undefined8 *)(param_1 + 0x98));
      if (0 < iVar2) {
        bVar1 = false;
        iVar2 = 0;
        do {
          lVar4 = FUN_0040cb0c(*(undefined8 *)(param_1 + 0x98),iVar2);
          if ((*(uint *)(lVar4 + 0xe8) & 0x800) != 0) {
            bVar1 = true;
          }
          if ((*(uint *)(lVar4 + 0xe8) >> 0xb & 1) != 0) {
            *(long *)(param_1 + 0xb8) = lVar4;
            *(int *)(param_1 + 0xac) = iVar2;
            *(undefined4 *)(param_1 + 0xb0) = 0x2a;
            uVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
            if ((int)uVar5 == 0) {
              return uVar5;
            }
          }
          iVar2 = iVar2 + 1;
          iVar3 = FUN_0040caf8(*(undefined8 *)(param_1 + 0x98));
        } while (iVar2 < iVar3);
        if (bVar1) {
          return 1;
        }
      }
      FUN_00379868();
      uVar5 = 0x6cc;
      goto LAB_0042d088;
    }
  }
  else {
    if (iVar2 == 0) {
      uVar5 = 0x6ba;
      goto LAB_0042d024;
    }
    if (iVar2 == 1) {
      if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x19) >> 3 & 1) == 0) {
        return 1;
      }
      *(undefined8 *)(param_1 + 0xb8) = 0;
      uVar5 = (**(code **)(param_1 + 0x38))(2,param_1);
      if ((int)uVar5 != 0) {
        return 1;
      }
      return uVar5;
    }
  }
  FUN_00379868();
  uVar5 = 0x6d8;
LAB_0042d088:
  FUN_0037995c("crypto/x509/x509_vfy.c",uVar5,"check_policy");
  FUN_00379a5c(0xb,0xc0103,0);
  return 0;
}


// ===== 0042d0b4  FUN_0042d0b4 =====

undefined8 FUN_0042d0b4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_004328fc(param_2);
  if (lVar1 != 0) {
    uVar2 = FUN_00431de4(*(undefined8 *)(param_1 + 0x20),lVar1);
    return uVar2;
  }
  FUN_00379868();
  FUN_0037995c("crypto/x509/x509_vfy.c",0xac4,"X509_STORE_CTX_set_default");
  FUN_00379a5c(0xb,0x79,"name=%s",param_2);
  return 0;
}


// ===== 0042d12c  FUN_0042d12c =====

void FUN_0042d12c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(code **)(param_1 + 0x40) = FUN_0042d14c;
  *(code **)(param_1 + 0x78) = FUN_0042d190;
  return;
}


// ===== 0042d14c  FUN_0042d14c =====

ulong FUN_0042d14c(ulong *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = FUN_0042f778(param_2,*(undefined8 *)(param_2 + 0x28));
  *param_1 = uVar3;
  if (uVar3 != 0) {
    iVar2 = FUN_00429d90();
    uVar1 = 1;
    if (iVar2 == 0) {
      uVar1 = 0xffffffff;
    }
    uVar3 = (ulong)uVar1;
  }
  return uVar3;
}


// ===== 0042d190  FUN_0042d190 =====

long FUN_0042d190(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_0040bf0c();
  if ((lVar3 != 0) && (iVar1 = FUN_0040caf8(*(undefined8 *)(param_1 + 0x28)), 0 < iVar1)) {
    iVar1 = 0;
    do {
      uVar4 = FUN_0040cb0c(*(undefined8 *)(param_1 + 0x28),iVar1);
      uVar5 = FUN_00426ca0();
      iVar2 = FUN_004267c8(param_2,uVar5);
      if ((iVar2 == 0) && (iVar2 = FUN_00426f2c(lVar3,uVar4,1), iVar2 == 0)) {
        FUN_004131f0(lVar3);
        *(undefined4 *)(param_1 + 0xb0) = 0x11;
        return 0;
      }
      iVar1 = iVar1 + 1;
      iVar2 = FUN_0040caf8(*(undefined8 *)(param_1 + 0x28));
    } while (iVar1 < iVar2);
  }
  return lVar3;
}


// ===== 0042d248  FUN_0042d248 =====

void FUN_0042d248(long param_1)

{
  FUN_004324bc(*(undefined8 *)(param_1 + 0x20));
  return;
}


// ===== 0042d250  FUN_0042d250 =====

void FUN_0042d250(long param_1)

{
  FUN_00432450(*(undefined8 *)(param_1 + 0x20));
  return;
}


// ===== 0042d258  FUN_0042d258 =====

void FUN_0042d258(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_004324d4(*(undefined8 *)(param_1 + 0x20),param_3);
  return;
}


// ===== 0042d264  FUN_0042d264 =====

void FUN_0042d264(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xd4) = param_2;
  return;
}


// ===== 0042d26c  FUN_0042d26c =====

undefined8 FUN_0042d26c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


// ===== 0042d274  FUN_0042d274 =====

undefined8 FUN_0042d274(long param_1)

{
  return *(undefined8 *)(param_1 + 0x100);
}


// ===== 0042d27c  FUN_0042d27c =====

undefined8 FUN_0042d27c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


// ===== 0042d284  FUN_0042d284 =====

void FUN_0042d284(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}


// ===== 0042d28c  FUN_0042d28c =====

void FUN_0042d28c(long param_1,undefined8 param_2)

{
  FUN_004131f0(*(undefined8 *)(param_1 + 0x98));
  *(undefined8 *)(param_1 + 0x98) = param_2;
  return;
}


// ===== 0042d2b8  FUN_0042d2b8 =====

void FUN_0042d2b8(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x38) = param_2;
  return;
}


// ===== 0042d2c0  FUN_0042d2c0 =====

undefined8 FUN_0042d2c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}


// ===== 0042d2c8  FUN_0042d2c8 =====

void FUN_0042d2c8(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x30) = param_2;
  return;
}


// ===== 0042d2d0  FUN_0042d2d0 =====

undefined8 FUN_0042d2d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}


// ===== 0042d2d8  FUN_0042d2d8 =====

undefined8 FUN_0042d2d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}


// ===== 0042d2e0  FUN_0042d2e0 =====

undefined8 FUN_0042d2e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}


// ===== 0042d2e8  FUN_0042d2e8 =====

undefined8 FUN_0042d2e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}


// ===== 0042d2f0  FUN_0042d2f0 =====

undefined8 FUN_0042d2f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}


// ===== 0042d2f8  FUN_0042d2f8 =====

void FUN_0042d2f8(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x58) = param_2;
  return;
}


// ===== 0042d300  FUN_0042d300 =====

undefined8 FUN_0042d300(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}


// ===== 0042d308  FUN_0042d308 =====

undefined8 FUN_0042d308(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}


// ===== 0042d310  FUN_0042d310 =====

undefined8 FUN_0042d310(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}


// ===== 0042d318  FUN_0042d318 =====

undefined8 FUN_0042d318(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}


// ===== 0042d320  FUN_0042d320 =====

undefined8 FUN_0042d320(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}


// ===== 0042d328  FUN_0042d328 =====

undefined8 FUN_0042d328(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}


// ===== 0042d330  FUN_0042d330 =====

undefined8 FUN_0042d330(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}


// ===== 0042d338  FUN_0042d338 =====

undefined4 FUN_0042d338(long param_1)

{
  return *(undefined4 *)(param_1 + 0xa8);
}


// ===== 0042d340  FUN_0042d340 =====

undefined4 FUN_0042d340(long param_1)

{
  return *(undefined4 *)(param_1 + 0x94);
}


// ===== 0042d348  FUN_0042d348 =====

undefined8 FUN_0042d348(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


// ===== 0042d350  FUN_0042d350 =====

void FUN_0042d350(long param_1,undefined8 param_2)

{
  FUN_00431d48(*(undefined8 *)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return;
}


// ===== 0042d37c  FUN_0042d37c =====

void FUN_0042d37c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xf0) = param_2;
  return;
}


// ===== 0042d384  FUN_0042d384 =====

long FUN_0042d384(long param_1,undefined8 param_2,long param_3,int param_4,undefined8 param_5,
                 long param_6)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  long local_38;
  
  local_38 = 0;
  if (param_1 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/x509_vfy.c",0xde9,"X509_build_chain");
    FUN_00379a5c(0xb,0xc0102,0);
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_003c8474(0x118,"crypto/x509/x509_vfy.c",0x952);
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x108) = param_5;
      if (param_6 != 0) {
        lVar4 = FUN_003ca2f4(param_6,"crypto/x509/x509_vfy.c",0x959);
        *(long *)(lVar3 + 0x110) = lVar4;
        if (lVar4 == 0) {
          FUN_003c86b4(lVar3,"crypto/x509/x509_vfy.c",0x95b);
          return 0;
        }
      }
      uVar1 = param_2;
      if (param_3 == 0) {
        uVar1 = 0;
      }
      iVar2 = FUN_0042c15c(lVar3,param_3,param_1,uVar1);
      if (iVar2 != 0) {
        if (param_3 == 0) {
          *(undefined8 *)(lVar3 + 0x28) = param_2;
          *(code **)(lVar3 + 0x40) = FUN_0042d14c;
          *(code **)(lVar3 + 0x78) = FUN_0042d190;
          iVar2 = FUN_00426ea0(lVar3 + 0x98,param_1,1);
        }
        else {
          iVar2 = FUN_00426ea0(lVar3 + 0x98,param_1,1);
        }
        if (iVar2 == 0) {
          *(undefined4 *)(lVar3 + 0xb0) = 0x11;
        }
        else {
          *(undefined4 *)(lVar3 + 0x94) = 1;
          iVar2 = FUN_0042d55c(lVar3);
          if ((param_3 == 0) || (iVar2 != 0)) {
            iVar2 = FUN_0040caf8(*(undefined8 *)(lVar3 + 0x98));
            uVar5 = 9;
            if (iVar2 < 2 || param_4 != 0) {
              uVar5 = 1;
            }
            iVar2 = FUN_004270d0(&local_38,*(undefined8 *)(lVar3 + 0x98),uVar5);
            if (iVar2 == 0) {
              FUN_0040bd78(local_38);
              local_38 = 0;
            }
          }
        }
      }
      FUN_0042c010(lVar3);
      return local_38;
    }
  }
  return lVar3;
}


// ===== 0042d55c  FUN_0042d55c =====

/* WARNING: Removing unreachable block (ram,0x0042dd80) */
/* WARNING: Type propagation algorithm not settling */

ulong FUN_0042d55c(long param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined4 uVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  undefined8 uVar18;
  long local_68;
  
  lVar14 = *(long *)(param_1 + 0xf0);
  iVar4 = FUN_0040caf8(*(undefined8 *)(param_1 + 0x98));
  if ((iVar4 != 1) || (*(int *)(param_1 + 0x94) != 1)) {
    lVar10 = 0;
LAB_0042d5e4:
    FUN_00379868();
    FUN_0037995c("crypto/x509/x509_vfy.c",0xdd4,"build_chain");
    FUN_00379a5c(0xb,0xc0103,0);
    uVar13 = 1;
    goto LAB_0042d618;
  }
  uVar17 = (uint)(*(long *)(param_1 + 0x10) != 0);
  if (((lVar14 == 0) || ((*(uint *)(lVar14 + 0x28) & 3) != 0)) ||
     ((*(uint *)(lVar14 + 0x28) & 0xc) == 0)) {
    if ((*(long *)(param_1 + 0x10) == 0) ||
       (uVar15 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x18), ((uint)uVar15 >> 0xf & 1) != 0)) {
      bVar3 = false;
      uVar17 = uVar17 | 2;
      lVar10 = FUN_0040bf0c();
    }
    else {
      bVar3 = (uVar15 & 0x100000) == 0;
      uVar17 = 1;
      lVar10 = FUN_0040bf0c();
    }
    if (lVar10 != 0) {
      bVar2 = false;
      if (lVar14 != 0) goto LAB_0042d6c4;
LAB_0042d6ec:
      iVar4 = FUN_00427068(lVar10,*(undefined8 *)(param_1 + 0x10),0);
      if (iVar4 != 0) {
        iVar4 = *(int *)(*(long *)(param_1 + 0x20) + 0x28);
        if (0x3fffffff < iVar4) {
          iVar4 = 0x3fffffff;
          *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x28) = 0x3fffffff;
        }
        iVar4 = iVar4 + 1;
        if (uVar17 != 0) {
          uVar15 = 3;
          iVar9 = 0;
LAB_0042d750:
          local_68 = 0;
          iVar5 = FUN_0040caf8(*(undefined8 *)(param_1 + 0x98));
          *(int *)(param_1 + 0xac) = iVar5 + -1;
          if ((uVar17 >> 1 & 1) != 0) {
            iVar7 = iVar5;
            if ((uVar17 & 4) != 0) {
              iVar7 = iVar9;
            }
            lVar11 = FUN_0040cb0c(*(undefined8 *)(param_1 + 0x98),iVar7 + -1);
            if (iVar5 <= iVar4) {
              uVar18 = *(undefined8 *)(param_1 + 0x98);
              *(undefined8 *)(param_1 + 0x98) = 0;
              iVar6 = (**(code **)(param_1 + 0x40))(&local_68,param_1,lVar11);
              *(undefined8 *)(param_1 + 0x98) = uVar18;
              if (iVar6 < 0) {
                *(undefined4 *)(param_1 + 0xb0) = 0x46;
                FUN_0040bd78(lVar10);
                return 0xffffffff;
              }
              if (iVar6 == 0) goto LAB_0042d92c;
              lVar12 = FUN_00427350(lVar11);
              if (lVar12 == 0) {
                FUN_00379868();
                FUN_0037995c("crypto/x509/x509_vfy.c",0x67,"X509_self_signed");
                FUN_00379a5c(0xb,0x6c,0);
LAB_0042db6c:
                FUN_0043da80(local_68);
                goto LAB_0042d5e4;
              }
              iVar6 = FUN_0041e984(lVar11);
              if (iVar6 == 0) goto LAB_0042db6c;
              uVar16 = *(uint *)(lVar11 + 0xe8);
              if (uVar17 >> 2 != 0) {
                if (((iVar9 < 1) || (iVar5 <= iVar9)) || ((uVar16 >> 0xd & 1) != 0))
                goto LAB_0042db6c;
                uVar17 = uVar17 & 0xfffffffb;
                do {
                  FUN_0040ca00(*(undefined8 *)(param_1 + 0x98));
                  FUN_0043da80();
                  iVar5 = iVar5 + -1;
                } while (iVar7 < iVar5);
                *(int *)(param_1 + 0x94) = iVar7;
                iVar5 = iVar7;
                if (lVar14 != 0) {
                  iVar7 = FUN_0040caf8(*(undefined8 *)(lVar14 + 8));
                  if ((0 < iVar7) && (*(int *)(param_1 + 0x94) <= *(int *)(lVar14 + 0x2c))) {
                    *(undefined4 *)(lVar14 + 0x2c) = 0xffffffff;
                    FUN_0043da80(*(undefined8 *)(lVar14 + 0x20));
                    *(undefined8 *)(lVar14 + 0x20) = 0;
                  }
                  iVar7 = FUN_0040caf8(*(undefined8 *)(lVar14 + 8));
                  if ((0 < iVar7) && (*(int *)(param_1 + 0x94) <= *(int *)(lVar14 + 0x30))) {
                    *(undefined4 *)(lVar14 + 0x30) = 0xffffffff;
                  }
                }
              }
              if ((uVar16 >> 0xd & 1) == 0) {
                iVar7 = FUN_0040c89c(*(undefined8 *)(param_1 + 0x98),local_68);
                lVar11 = local_68;
                if (iVar7 == 0) {
                  FUN_0043da80(local_68);
                  FUN_00379868();
                  FUN_0037995c("crypto/x509/x509_vfy.c",0xd32,"build_chain");
                  uVar13 = 0x8000f;
                  goto LAB_0042db0c;
                }
                lVar12 = FUN_00427350(local_68);
                if (lVar12 == 0) {
                  FUN_00379868();
                  FUN_0037995c("crypto/x509/x509_vfy.c",0x67,"X509_self_signed");
                  FUN_00379a5c(0xb,0x6c,0);
                  goto LAB_0042d5e4;
                }
                iVar7 = FUN_0041e984(lVar11);
                if ((iVar7 == 0) ||
                   (uVar16 = *(uint *)(lVar11 + 0xe8) >> 0xd & 1, iVar5 < *(int *)(param_1 + 0x94)))
                goto LAB_0042d5e4;
              }
              else {
                iVar7 = FUN_00426d54(lVar11,local_68);
                if (iVar7 != 0) {
                  FUN_0043da80(local_68);
                  goto LAB_0042d92c;
                }
                FUN_0043da80(lVar11);
                iVar5 = iVar5 + -1;
                *(int *)(param_1 + 0x94) = iVar5;
                FUN_0040cb3c(*(undefined8 *)(param_1 + 0x98),iVar5,local_68);
                uVar16 = 1;
                if (iVar5 < *(int *)(param_1 + 0x94)) goto LAB_0042d5e4;
              }
              uVar8 = FUN_0042f8c4(param_1,iVar5);
              if (uVar8 != 3) {
                uVar15 = (ulong)uVar8;
                goto LAB_0042db7c;
              }
              uVar17 = uVar17 & 0xfffffffe;
              uVar15 = 3;
              if (uVar16 != 0) goto LAB_0042d92c;
              goto joined_r0x0042da8c;
            }
LAB_0042d92c:
            if ((uVar17 & 1) != 0) goto LAB_0042d950;
            if (uVar17 >> 2 != 0) {
              iVar5 = iVar9 + -1;
              bVar1 = 0 < iVar9;
              iVar9 = iVar5;
              if (iVar5 != 0 && bVar1) goto joined_r0x0042da8c;
              goto LAB_0042db7c;
            }
            if ((!bVar3) || (*(int *)(param_1 + 0x94) < 2)) goto LAB_0042db7c;
            uVar17 = uVar17 | 4;
            iVar9 = *(int *)(param_1 + 0x94) + -1;
          }
LAB_0042d950:
          if ((uVar17 & 1) != 0) {
            iVar5 = FUN_0040caf8(*(undefined8 *)(param_1 + 0x98));
            if (iVar5 != *(int *)(param_1 + 0x94)) goto LAB_0042d5e4;
            lVar11 = FUN_0040cb0c(*(undefined8 *)(param_1 + 0x98),iVar5 + -1);
            lVar12 = FUN_00427350();
            if (lVar12 == 0) {
              FUN_00379868();
              FUN_0037995c("crypto/x509/x509_vfy.c",0x67,"X509_self_signed");
              FUN_00379a5c(0xb,0x6c,0);
joined_r0x0042d99c:
              if ((iVar5 <= iVar4) &&
                 (local_68 = FUN_0042f778(param_1,lVar10,lVar11), local_68 != 0)) {
                FUN_0040c350(lVar10,local_68);
                iVar5 = FUN_00426f2c(*(undefined8 *)(param_1 + 0x98),local_68,1);
                if (iVar5 == 0) goto LAB_0042d5e4;
                iVar5 = *(int *)(param_1 + 0x94);
                *(int *)(param_1 + 0x94) = iVar5 + 1;
                if (*(long *)(param_1 + 0xf0) == 0) {
joined_r0x0042da80:
                  uVar15 = 3;
                }
                else if (iVar5 == 0) {
                  uVar15 = 3;
                }
                else if ((*(uint *)(*(long *)(param_1 + 0xf0) + 0x28) & 5) == 0) {
                  uVar15 = 3;
                }
                else {
                  lVar11 = FUN_0040cb0c(*(undefined8 *)(param_1 + 0x98),iVar5);
                  if (lVar11 == 0) {
                    uVar15 = 3;
                    goto joined_r0x0042da8c;
                  }
                  iVar7 = FUN_0042ea00(*(undefined4 *)(param_1 + 0x94),
                                       *(undefined8 *)(param_1 + 0xf0),lVar11,iVar5);
                  if (-1 < iVar7) {
                    if (iVar7 == 0) goto joined_r0x0042da80;
                    *(int *)(param_1 + 0x94) = iVar5 + -1;
                    FUN_0040bd78(lVar10);
                    uVar15 = 1;
                    goto LAB_0042db90;
                  }
                  uVar15 = 0xffffffff;
                }
                goto joined_r0x0042da8c;
              }
            }
            else {
              iVar7 = FUN_0041e984(lVar11);
              if ((iVar7 == 0) || ((*(byte *)(lVar11 + 0xe9) >> 5 & 1) == 0))
              goto joined_r0x0042d99c;
            }
            uVar17 = uVar17 & 0xfffffffe;
            if (!bVar2) {
              uVar17 = uVar17 | 2;
            }
          }
joined_r0x0042da8c:
          if (uVar17 == 0) goto LAB_0042db7c;
          goto LAB_0042d750;
        }
        FUN_0040bd78(lVar10);
        uVar15 = 3;
        goto LAB_0042db90;
      }
      FUN_00379868();
      uVar18 = 0xcc0;
      goto LAB_0042dafc;
    }
LAB_0042d66c:
    FUN_00379868();
    FUN_0037995c("crypto/x509/x509_vfy.c",0xcac,"build_chain");
    FUN_00379a5c(0xb,0x8000f,0);
    lVar10 = 0;
  }
  else {
    lVar10 = FUN_0040bf0c();
    if (lVar10 == 0) goto LAB_0042d66c;
    bVar3 = false;
    bVar2 = true;
LAB_0042d6c4:
    iVar4 = FUN_0040caf8(*(undefined8 *)(lVar14 + 8));
    if (((iVar4 < 1) || (*(long *)(lVar14 + 0x10) == 0)) ||
       (iVar4 = FUN_00427068(lVar10,*(long *)(lVar14 + 0x10),0), iVar4 != 0)) goto LAB_0042d6ec;
    FUN_00379868();
    uVar18 = 0xcb6;
LAB_0042dafc:
    FUN_0037995c("crypto/x509/x509_vfy.c",uVar18,"build_chain");
    uVar13 = 0x8000b;
LAB_0042db0c:
    FUN_00379a5c(0xb,uVar13,0);
  }
  uVar13 = 0x11;
LAB_0042d618:
  *(undefined4 *)(param_1 + 0xb0) = uVar13;
  FUN_0040bd78(lVar10);
  return 0xffffffff;
LAB_0042db7c:
  FUN_0040bd78(lVar10);
  if ((int)uVar15 < 0) {
    return uVar15;
  }
LAB_0042db90:
  iVar9 = FUN_0040caf8(*(undefined8 *)(param_1 + 0x98));
  if (iVar4 < iVar9) {
LAB_0042dbf0:
    if ((int)uVar15 == 1) {
      return uVar15;
    }
    if ((int)uVar15 != 2) goto LAB_0042dc00;
LAB_0042dc20:
    uVar15 = 0;
  }
  else {
    if ((lVar14 == 0) || ((int)uVar15 != 3)) {
LAB_0042dbd0:
      if ((int)uVar15 != 3) goto LAB_0042dbf0;
    }
    else if ((*(byte *)(lVar14 + 0x28) >> 2 & 1) != 0) {
      uVar15 = FUN_0042fc10(param_1);
      goto LAB_0042dbd0;
    }
    if (iVar9 == *(int *)(param_1 + 0x94)) {
      uVar15 = FUN_0042f8c4(param_1,iVar9);
      goto LAB_0042dbf0;
    }
LAB_0042dc00:
    uVar17 = *(uint *)(param_1 + 0xb0);
    if (uVar17 < 0xf) {
      if ((1 << (ulong)(uVar17 & 0x1f) & 0x6600U) != 0) goto LAB_0042dc20;
      if (uVar17 == 0) {
        if ((iVar4 < iVar9) && (uVar15 = FUN_0042b304(param_1,0,iVar9 + -1,0x16), (int)uVar15 == 0))
        {
          return uVar15;
        }
        if (((lVar14 != 0) && (iVar4 = FUN_0040caf8(*(undefined8 *)(lVar14 + 8)), 0 < iVar4)) &&
           ((((*(byte *)(lVar14 + 0x28) & 3) == 0 || (-1 < *(int *)(lVar14 + 0x30))) &&
            (uVar15 = FUN_0042b304(param_1,0,iVar9 + -1,0x41), (int)uVar15 == 0)))) {
          return uVar15;
        }
        uVar18 = FUN_0040cb0c(*(undefined8 *)(param_1 + 0x98),iVar9 + -1);
        iVar4 = FUN_0042a790(uVar18,0);
        if (iVar4 < 1) {
          uVar13 = 2;
          if (iVar9 <= *(int *)(param_1 + 0x94)) {
            uVar13 = 0x14;
          }
        }
        else {
          uVar13 = 0x12;
          if (iVar9 != 1) {
            uVar13 = 0x13;
          }
        }
        uVar15 = FUN_0042b304(param_1,0,iVar9 + -1,uVar13);
        return uVar15;
      }
    }
    uVar15 = FUN_0042b304(param_1,0,iVar9 + -1);
  }
  return uVar15;
}


// ===== 0042dd84  FUN_0042dd84 =====

/* WARNING: Removing unreachable block (ram,0x0042e954) */

undefined8 FUN_0042dd84(long param_1)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  int *piVar13;
  uint uVar14;
  int iVar15;
  code *pcVar16;
  undefined4 uVar17;
  uint uVar18;
  int local_68;
  int local_64;
  
  uVar8 = FUN_0042d55c();
  if ((int)uVar8 < 1) {
    return uVar8;
  }
  uVar3 = FUN_0040caf8(*(undefined8 *)(param_1 + 0x98));
  if (*(long *)(param_1 + 0xd8) == 0) {
    iVar4 = *(int *)(*(long *)(param_1 + 0x20) + 0x20);
    bVar2 = (*(byte *)(*(long *)(param_1 + 0x20) + 0x18) & 0x40) == 0;
  }
  else {
    bVar2 = true;
    iVar4 = 6;
  }
  if (0 < (int)uVar3) {
    iVar15 = 0;
    uVar18 = 0;
    iVar5 = 0;
    iVar6 = -1;
LAB_0042de20:
    do {
      lVar9 = FUN_0040cb0c(*(undefined8 *)(param_1 + 0x98),uVar18);
      if (((*(byte *)(*(long *)(param_1 + 0x20) + 0x18) >> 4 & 1) == 0) &&
         ((*(byte *)(lVar9 + 0xe9) >> 1 & 1) != 0)) {
        *(long *)(param_1 + 0xb8) = lVar9;
        *(uint *)(param_1 + 0xac) = uVar18;
        *(undefined4 *)(param_1 + 0xb0) = 0x22;
        uVar8 = (**(code **)(param_1 + 0x38))(0,param_1);
        if ((int)uVar8 == 0) {
          return uVar8;
        }
      }
      if ((bVar2) && ((*(byte *)(lVar9 + 0xe9) >> 2 & 1) != 0)) {
        *(long *)(param_1 + 0xb8) = lVar9;
        *(uint *)(param_1 + 0xac) = uVar18;
        *(undefined4 *)(param_1 + 0xb0) = 0x28;
        uVar8 = (**(code **)(param_1 + 0x38))(0,param_1);
        if ((int)uVar8 == 0) {
          return uVar8;
        }
      }
      iVar7 = FUN_0041f97c(lVar9);
      if (iVar6 == 0) {
        if (iVar7 == 0) goto LAB_0042df5c;
        *(uint *)(param_1 + 0xac) = uVar18;
        lVar10 = lVar9;
        if (lVar9 == 0) {
          lVar10 = FUN_0040cb0c(*(undefined8 *)(param_1 + 0x98),uVar18);
        }
        *(long *)(param_1 + 0xb8) = lVar10;
        *(undefined4 *)(param_1 + 0xb0) = 0x25;
        uVar8 = (**(code **)(param_1 + 0x38))(0,param_1);
        iVar7 = (int)uVar8;
joined_r0x0042def8:
        if (iVar7 == 0) {
          return uVar8;
        }
      }
      else if (iVar6 == -1) {
        if ((((*(byte *)(*(long *)(param_1 + 0x20) + 0x18) >> 5 & 1) != 0) && (iVar7 != 1)) &&
           (iVar7 != 0)) {
LAB_0042df24:
          *(uint *)(param_1 + 0xac) = uVar18;
          lVar10 = lVar9;
          if (lVar9 == 0) {
            lVar10 = FUN_0040cb0c(*(undefined8 *)(param_1 + 0x98),uVar18);
          }
          *(long *)(param_1 + 0xb8) = lVar10;
          *(undefined4 *)(param_1 + 0xb0) = 0x4f;
          uVar8 = (**(code **)(param_1 + 0x38))(0,param_1);
          iVar7 = (int)uVar8;
          goto joined_r0x0042def8;
        }
      }
      else if ((iVar7 == 0) ||
              ((((int)(uVar18 + 1) < (int)uVar3 ||
                ((*(byte *)(*(long *)(param_1 + 0x20) + 0x18) >> 5 & 1) != 0)) && (iVar7 != 1))))
      goto LAB_0042df24;
LAB_0042df5c:
      if (uVar3 != 1) {
        lVar10 = FUN_00427350(lVar9);
        if (lVar10 == 0) {
LAB_0042dfd4:
          *(uint *)(param_1 + 0xac) = uVar18;
          lVar10 = lVar9;
          if (lVar9 == 0) {
            lVar10 = FUN_0040cb0c(*(undefined8 *)(param_1 + 0x98),uVar18);
          }
          pcVar16 = *(code **)(param_1 + 0x38);
          *(long *)(param_1 + 0xb8) = lVar10;
          *(undefined4 *)(param_1 + 0xb0) = 1;
LAB_0042dff8:
          uVar8 = (*pcVar16)(0,param_1);
          if ((int)uVar8 == 0) {
            return uVar8;
          }
LAB_0042e008:
          bVar1 = *(byte *)(*(long *)(param_1 + 0x20) + 0x18);
        }
        else {
          iVar7 = FUN_003a7c64();
          if (iVar7 == 0x198) {
            iVar7 = FUN_003a9254(lVar10,"decoded-from-explicit",&local_68);
            if (iVar7 != 1) goto LAB_0042dfd4;
            if (local_68 != 0) {
              *(uint *)(param_1 + 0xac) = uVar18;
              lVar10 = lVar9;
              if (lVar9 == 0) {
                lVar10 = FUN_0040cb0c(*(undefined8 *)(param_1 + 0x98),uVar18);
              }
              pcVar16 = *(code **)(param_1 + 0x38);
              *(long *)(param_1 + 0xb8) = lVar10;
              *(undefined4 *)(param_1 + 0xb0) = 0x5e;
              goto LAB_0042dff8;
            }
            goto LAB_0042e008;
          }
          bVar1 = *(byte *)(*(long *)(param_1 + 0x20) + 0x18);
        }
        if ((bVar1 >> 5 & 1) != 0) {
          if (*(long *)(lVar9 + 0xd8) != -1) {
            if ((*(byte *)(lVar9 + 0xe8) >> 4 & 1) == 0) {
              *(long *)(param_1 + 0xb8) = lVar9;
              *(uint *)(param_1 + 0xac) = uVar18;
              *(undefined4 *)(param_1 + 0xb0) = 0x50;
              uVar8 = (**(code **)(param_1 + 0x38))(0,param_1);
              if ((int)uVar8 == 0) {
                return uVar8;
              }
            }
            if ((*(byte *)(lVar9 + 0xec) >> 2 & 1) == 0) {
              *(long *)(param_1 + 0xb8) = lVar9;
              *(uint *)(param_1 + 0xac) = uVar18;
              *(undefined4 *)(param_1 + 0xb0) = 0x51;
              uVar8 = (**(code **)(param_1 + 0x38))(0,param_1);
              if ((int)uVar8 == 0) {
                return uVar8;
              }
            }
          }
          uVar14 = *(uint *)(lVar9 + 0xe8);
          if ((uVar14 & 0x10011) == 0x11) {
            *(long *)(param_1 + 0xb8) = lVar9;
            *(uint *)(param_1 + 0xac) = uVar18;
            *(undefined4 *)(param_1 + 0xb0) = 0x59;
            uVar8 = (**(code **)(param_1 + 0x38))(0,param_1);
            if ((int)uVar8 == 0) {
              return uVar8;
            }
            uVar14 = *(uint *)(lVar9 + 0xe8);
          }
          if ((uVar14 >> 4 & 1) == 0) {
            if ((*(byte *)(lVar9 + 0xec) >> 2 & 1) != 0) {
              pcVar16 = *(code **)(param_1 + 0x38);
              uVar17 = 0x52;
              *(long *)(param_1 + 0xb8) = lVar9;
LAB_0042e0ec:
              *(uint *)(param_1 + 0xac) = uVar18;
              *(undefined4 *)(param_1 + 0xb0) = uVar17;
              uVar8 = (*pcVar16)(0,param_1);
              if ((int)uVar8 == 0) {
                return uVar8;
              }
            }
          }
          else if ((uVar14 >> 1 & 1) == 0) {
            pcVar16 = *(code **)(param_1 + 0x38);
            *(long *)(param_1 + 0xb8) = lVar9;
            uVar17 = 0x5c;
            goto LAB_0042e0ec;
          }
          FUN_00426a88(lVar9);
          uVar8 = FUN_00432df4();
          if ((int)uVar8 == 0) {
            *(long *)(param_1 + 0xb8) = lVar9;
            *(uint *)(param_1 + 0xac) = uVar18;
            *(undefined4 *)(param_1 + 0xb0) = 0x53;
            uVar8 = (**(code **)(param_1 + 0x38))(uVar8,param_1);
            if ((int)uVar8 == 0) {
              return uVar8;
            }
          }
          if ((((*(byte *)(lVar9 + 0xe8) >> 4 & 1) != 0) ||
              ((*(byte *)(lVar9 + 0xec) >> 1 & 1) != 0)) || (*(long *)(lVar9 + 0x118) == 0)) {
            FUN_00426ca0(lVar9);
            uVar8 = FUN_00432df4();
            if ((int)uVar8 == 0) {
              *(long *)(param_1 + 0xb8) = lVar9;
              *(uint *)(param_1 + 0xac) = uVar18;
              *(undefined4 *)(param_1 + 0xb0) = 0x54;
              uVar8 = (**(code **)(param_1 + 0x38))(uVar8,param_1);
              if ((int)uVar8 == 0) {
                return uVar8;
              }
            }
          }
          FUN_00426ca0(lVar9);
          iVar7 = FUN_00432df4();
          if (((iVar7 == 0) && (*(long *)(lVar9 + 0x118) != 0)) &&
             ((*(byte *)(lVar9 + 0xea) >> 3 & 1) == 0)) {
            *(long *)(param_1 + 0xb8) = lVar9;
            *(uint *)(param_1 + 0xac) = uVar18;
            *(undefined4 *)(param_1 + 0xb0) = 0x58;
            uVar8 = (**(code **)(param_1 + 0x38))(0,param_1);
            if ((int)uVar8 == 0) {
              return uVar8;
            }
          }
          if ((*(long *)(lVar9 + 0x118) != 0) && (iVar7 = FUN_0040caf8(), iVar7 < 1)) {
            *(long *)(param_1 + 0xb8) = lVar9;
            *(uint *)(param_1 + 0xac) = uVar18;
            *(undefined4 *)(param_1 + 0xb0) = 0x57;
            uVar8 = (**(code **)(param_1 + 0x38))(0,param_1);
            if ((int)uVar8 == 0) {
              return uVar8;
            }
          }
          iVar7 = FUN_003a3cc8(lVar9 + 0x88,lVar9 + 0x20);
          if (iVar7 != 0) {
            *(long *)(param_1 + 0xb8) = lVar9;
            *(uint *)(param_1 + 0xac) = uVar18;
            *(undefined4 *)(param_1 + 0xb0) = 0x4e;
            uVar8 = (**(code **)(param_1 + 0x38))(0,param_1);
            if ((int)uVar8 == 0) {
              return uVar8;
            }
          }
          if ((*(long *)(lVar9 + 0x100) != 0) && ((*(byte *)(lVar9 + 0xea) >> 1 & 1) != 0)) {
            *(long *)(param_1 + 0xb8) = lVar9;
            *(uint *)(param_1 + 0xac) = uVar18;
            *(undefined4 *)(param_1 + 0xb0) = 0x5a;
            uVar8 = (**(code **)(param_1 + 0x38))(0,param_1);
            if ((int)uVar8 == 0) {
              return uVar8;
            }
          }
          if ((*(long *)(lVar9 + 0xf8) != 0) && ((*(byte *)(lVar9 + 0xea) >> 2 & 1) != 0)) {
            *(long *)(param_1 + 0xb8) = lVar9;
            *(uint *)(param_1 + 0xac) = uVar18;
            *(undefined4 *)(param_1 + 0xb0) = 0x5b;
            uVar8 = (**(code **)(param_1 + 0x38))(0,param_1);
            if ((int)uVar8 == 0) {
              return uVar8;
            }
          }
          lVar10 = FUN_00429b7c(lVar9);
          if (lVar10 < 2) {
            FUN_00429dec(lVar9);
            iVar7 = FUN_0040caf8();
            if (0 < iVar7) {
              pcVar16 = *(code **)(param_1 + 0x38);
              uVar17 = 0x5d;
              *(long *)(param_1 + 0xb8) = lVar9;
              goto LAB_0042e2d0;
            }
          }
          else {
            if (((int)(uVar18 + 1) < (int)uVar3) &&
               ((*(long **)(lVar9 + 0x100) == (long *)0x0 || (**(long **)(lVar9 + 0x100) == 0)))) {
              *(long *)(param_1 + 0xb8) = lVar9;
              *(uint *)(param_1 + 0xac) = uVar18;
              *(undefined4 *)(param_1 + 0xb0) = 0x55;
              uVar8 = (**(code **)(param_1 + 0x38))(0,param_1);
              if ((int)uVar8 == 0) {
                return uVar8;
              }
            }
            if (((*(byte *)(lVar9 + 0xe8) >> 4 & 1) != 0) && (*(long *)(lVar9 + 0xf8) == 0)) {
              pcVar16 = *(code **)(param_1 + 0x38);
              *(long *)(param_1 + 0xb8) = lVar9;
              uVar17 = 0x56;
LAB_0042e2d0:
              *(uint *)(param_1 + 0xac) = uVar18;
              *(undefined4 *)(param_1 + 0xb0) = uVar17;
              uVar8 = (*pcVar16)(0,param_1);
              if ((int)uVar8 == 0) {
                return uVar8;
              }
            }
          }
        }
      }
      if (0 < iVar4) {
        if (((int)uVar18 < *(int *)(param_1 + 0x94)) ||
           (*(int *)(*(long *)(param_1 + 0x20) + 0x20) != iVar4)) {
LAB_0042e328:
          iVar6 = FUN_0041e8a8(lVar9,iVar4,0 < iVar6);
          if ((iVar6 == 0) ||
             ((iVar6 != 1 && ((*(byte *)(*(long *)(param_1 + 0x20) + 0x18) >> 5 & 1) != 0)))) {
LAB_0042e354:
            *(uint *)(param_1 + 0xac) = uVar18;
            lVar10 = lVar9;
            if (lVar9 == 0) {
              lVar10 = FUN_0040cb0c(*(undefined8 *)(param_1 + 0x98),uVar18);
            }
            *(long *)(param_1 + 0xb8) = lVar10;
            *(undefined4 *)(param_1 + 0xb0) = 0x1a;
            uVar8 = (**(code **)(param_1 + 0x38))(0,param_1);
            if ((int)uVar8 == 0) {
              return uVar8;
            }
          }
        }
        else {
          iVar7 = FUN_0042fd58(lVar9,*(undefined4 *)(*(long *)(param_1 + 0x20) + 0x24),4);
          if (iVar7 != 1) {
            if (iVar7 != 2) goto LAB_0042e328;
            goto LAB_0042e354;
          }
        }
      }
      if (uVar18 < 2) {
        if (uVar18 != 0) goto LAB_0042e3d4;
        if ((*(uint *)(lVar9 + 0xe8) >> 10 & 1) != 0) goto LAB_0042e3e4;
LAB_0042de10:
        iVar6 = 1;
        uVar18 = uVar18 + 1;
        if (uVar3 == uVar18) break;
        goto LAB_0042de20;
      }
      if ((*(long *)(lVar9 + 0xd8) != -1) && (*(long *)(lVar9 + 0xd8) + (long)iVar15 < (long)iVar5))
      {
        *(long *)(param_1 + 0xb8) = lVar9;
        *(uint *)(param_1 + 0xac) = uVar18;
        *(undefined4 *)(param_1 + 0xb0) = 0x19;
        uVar8 = (**(code **)(param_1 + 0x38))(0,param_1);
        if ((int)uVar8 == 0) {
          return uVar8;
        }
      }
LAB_0042e3d4:
      iVar5 = ((*(uint *)(lVar9 + 0xe8) >> 5 ^ 0xffffffff) & 1) + iVar5;
      if ((*(uint *)(lVar9 + 0xe8) >> 10 & 1) == 0) goto LAB_0042de10;
LAB_0042e3e4:
      lVar10 = *(long *)(lVar9 + 0xe0);
      if (lVar10 != -1) {
        if (lVar10 < iVar15) {
          *(long *)(param_1 + 0xb8) = lVar9;
          *(uint *)(param_1 + 0xac) = uVar18;
          *(undefined4 *)(param_1 + 0xb0) = 0x26;
          uVar8 = (**(code **)(param_1 + 0x38))(0,param_1);
          if ((int)uVar8 == 0) {
            return uVar8;
          }
          lVar10 = *(long *)(lVar9 + 0xe0);
        }
        iVar15 = (int)lVar10;
      }
      iVar6 = 0;
      iVar15 = iVar15 + 1;
      uVar18 = uVar18 + 1;
    } while (uVar3 != uVar18);
  }
  uVar3 = FUN_0040caf8(*(undefined8 *)(param_1 + 0x98));
  if (((*(int *)(*(long *)(param_1 + 0x20) + 0x2c) < 1) || ((int)uVar3 < 1)) ||
     (lVar9 = FUN_0040cb0c(*(undefined8 *)(param_1 + 0x98),0), uVar3 < 2)) goto LAB_0042e670;
  uVar18 = *(uint *)(*(long *)(param_1 + 0x20) + 0x2c);
  local_64 = -1;
  if (0 < (int)uVar18) {
    iVar4 = FUN_00429e5c(lVar9,0,0,&local_64,0);
    if (iVar4 != 0) {
      if (4 < uVar18) {
        uVar18 = 5;
      }
      if (*(int *)(&DAT_0020ed58 + (ulong)(uVar18 - 1) * 4) <= local_64) goto LAB_0042e544;
    }
    *(undefined4 *)(param_1 + 0xac) = 0;
    if (lVar9 == 0) {
      lVar9 = FUN_0040cb0c(*(undefined8 *)(param_1 + 0x98),0);
    }
    *(long *)(param_1 + 0xb8) = lVar9;
    *(undefined4 *)(param_1 + 0xb0) = 0x44;
    uVar8 = (**(code **)(param_1 + 0x38))(0,param_1);
    if ((int)uVar8 == 0) {
      return uVar8;
    }
  }
LAB_0042e544:
  uVar18 = 1;
  do {
    lVar9 = FUN_0040cb0c(*(undefined8 *)(param_1 + 0x98),uVar18);
    lVar10 = FUN_00427350();
    uVar14 = *(uint *)(*(long *)(param_1 + 0x20) + 0x2c);
    if (0 < (int)uVar14) {
      if (lVar10 != 0) {
        if (4 < uVar14) {
          uVar14 = 5;
        }
        iVar4 = FUN_003a614c();
        if (*(int *)(&DAT_0020ed58 + (ulong)(uVar14 - 1) * 4) <= iVar4) goto LAB_0042e604;
      }
      *(uint *)(param_1 + 0xac) = uVar18;
      lVar10 = lVar9;
      if (lVar9 == 0) {
        lVar10 = FUN_0040cb0c(*(undefined8 *)(param_1 + 0x98),uVar18);
      }
      *(long *)(param_1 + 0xb8) = lVar10;
      *(undefined4 *)(param_1 + 0xb0) = 0x43;
      uVar8 = (**(code **)(param_1 + 0x38))(0,param_1);
      if ((int)uVar8 == 0) {
        return uVar8;
      }
    }
LAB_0042e604:
    if ((int)uVar18 < (int)(uVar3 - 1)) {
      uVar14 = *(uint *)(*(long *)(param_1 + 0x20) + 0x2c);
      local_64 = -1;
      if (0 < (int)uVar14) {
        iVar4 = FUN_00429e5c(lVar9,0,0,&local_64,0);
        if (iVar4 != 0) {
          if (4 < uVar14) {
            uVar14 = 5;
          }
          if (*(int *)(&DAT_0020ed58 + (ulong)(uVar14 - 1) * 4) <= local_64) goto LAB_0042e580;
        }
        *(uint *)(param_1 + 0xac) = uVar18;
        if (lVar9 == 0) {
          lVar9 = FUN_0040cb0c(*(undefined8 *)(param_1 + 0x98),uVar18);
        }
        *(long *)(param_1 + 0xb8) = lVar9;
        *(undefined4 *)(param_1 + 0xb0) = 0x44;
        uVar8 = (**(code **)(param_1 + 0x38))(0,param_1);
        if ((int)uVar8 == 0) {
          return uVar8;
        }
      }
    }
LAB_0042e580:
    uVar18 = uVar18 + 1;
  } while (uVar3 != uVar18);
LAB_0042e670:
  uVar8 = FUN_0042ecf4(param_1);
  if ((int)uVar8 != 0) {
    iVar4 = FUN_0042b63c(0,*(undefined8 *)(param_1 + 0x98));
    if (iVar4 == 0) {
LAB_0042e978:
      uVar8 = 0xffffffff;
    }
    else {
      uVar8 = (**(code **)(param_1 + 0x50))(param_1);
      if (0 < (int)uVar8) {
        iVar4 = FUN_004274c0(param_1 + 0xac,0,*(undefined8 *)(param_1 + 0x98),
                             *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
        if (iVar4 != 0) {
          uVar8 = FUN_0040cb0c(*(undefined8 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0xac));
          *(undefined8 *)(param_1 + 0xb8) = uVar8;
          *(int *)(param_1 + 0xb0) = iVar4;
          uVar8 = (**(code **)(param_1 + 0x38))(0,param_1);
          if ((int)uVar8 == 0) {
            return uVar8;
          }
        }
        if (*(code **)(param_1 + 0x30) == (code *)0x0) {
          uVar8 = FUN_0042c59c(param_1);
          iVar4 = (int)uVar8;
        }
        else {
          uVar8 = (**(code **)(param_1 + 0x30))(param_1);
          iVar4 = (int)uVar8;
        }
        if (0 < iVar4) {
          iVar4 = FUN_0040caf8(*(undefined8 *)(param_1 + 0x98));
          if (0 < iVar4) {
            do {
              iVar15 = iVar4 + -1;
              lVar9 = FUN_0040cb0c(*(undefined8 *)(param_1 + 0x98),iVar15);
              if ((iVar15 == 0) || ((*(uint *)(lVar9 + 0xe8) >> 5 & 1) == 0)) {
                if ((*(uint *)(lVar9 + 0xe8) >> 10 & 1) != 0) {
                  uVar8 = FUN_00426ca0(lVar9);
                  uVar11 = FUN_00426a88(lVar9);
                  iVar5 = FUN_00432df4(uVar8);
                  if (1 < iVar5) {
                    iVar6 = FUN_00432df4(uVar8);
                    iVar7 = FUN_00432df4(uVar11);
                    if (iVar6 == iVar7 + 1) {
                      FUN_00432da4(uVar8,iVar5 + -1);
                      iVar6 = FUN_004337a8();
                      FUN_00432da4(uVar8,iVar5 + -2);
                      iVar7 = FUN_004337a8();
                      if (iVar6 != iVar7) {
                        lVar10 = FUN_0043b56c(uVar8);
                        if (lVar10 == 0) {
                          FUN_00379868();
                          FUN_0037995c("crypto/x509/x509_vfy.c",0x303,"check_name_constraints");
                          FUN_00379a5c(0xb,0x8000d,0);
                          *(undefined4 *)(param_1 + 0xb0) = 0x11;
                          return 0xffffffff;
                        }
                        uVar8 = FUN_00432ec4(lVar10,iVar5 + -1);
                        FUN_0043379c();
                        iVar5 = FUN_003dd5b4();
                        if ((iVar5 == 0xd) && (iVar5 = FUN_004267c8(lVar10,uVar11), iVar5 == 0)) {
                          FUN_0043b514(uVar8);
                          FUN_0043b560(lVar10);
                          goto LAB_0042e7f8;
                        }
                        FUN_0043b514(uVar8);
                        FUN_0043b560(lVar10);
                      }
                    }
                  }
                  *(long *)(param_1 + 0xb8) = lVar9;
                  *(int *)(param_1 + 0xac) = iVar15;
                  *(undefined4 *)(param_1 + 0xb0) = 0x48;
                  uVar8 = (**(code **)(param_1 + 0x38))(0,param_1);
                  if ((int)uVar8 == 0) {
                    return uVar8;
                  }
                }
LAB_0042e7f8:
                iVar5 = FUN_0040caf8(*(undefined8 *)(param_1 + 0x98));
joined_r0x0042e804:
                do {
                  if (iVar5 <= iVar4) break;
                  iVar5 = iVar5 + -1;
                  lVar10 = FUN_0040cb0c(*(undefined8 *)(param_1 + 0x98),iVar5);
                  lVar10 = *(long *)(lVar10 + 0x120);
                  if (lVar10 != 0) {
                    iVar6 = FUN_0041bb60(lVar9,lVar10);
                    if (iVar6 == 0 && iVar15 == 0) {
                      uVar3 = *(uint *)(*(long *)(param_1 + 0x20) + 0x40);
                      if ((uVar3 >> 5 & 1) != 0) goto joined_r0x0042e804;
                      if (((uVar3 & 1) == 0) && (lVar12 = FUN_004276a8(lVar9,0x55,0,0), lVar12 != 0)
                         ) {
                        iVar6 = FUN_0040caf8();
                        if (0 < iVar6) {
                          iVar6 = 0;
                          do {
                            piVar13 = (int *)FUN_0040cb0c(lVar12,iVar6);
                            if (*piVar13 == 2) {
                              FUN_00418788(lVar12);
                              goto joined_r0x0042e804;
                            }
                            iVar6 = iVar6 + 1;
                            iVar7 = FUN_0040caf8(lVar12);
                          } while (iVar6 < iVar7);
                        }
                        FUN_00418788(lVar12);
                      }
                      iVar6 = FUN_0041c0e4(lVar9,lVar10);
                    }
                    if (iVar6 != 0) {
                      if (iVar6 == 0x11) goto LAB_0042e978;
                      *(int *)(param_1 + 0xac) = iVar15;
                      *(int *)(param_1 + 0xb0) = iVar6;
                      *(long *)(param_1 + 0xb8) = lVar9;
                      uVar8 = (**(code **)(param_1 + 0x38))(0,param_1);
                      if ((int)uVar8 == 0) {
                        return uVar8;
                      }
                    }
                  }
                } while( true );
              }
              bVar2 = 1 < iVar4;
              iVar4 = iVar15;
            } while (bVar2);
          }
          if (*(char *)(*(long *)(param_1 + 0x20) + 0x18) < '\0') {
            uVar8 = (**(code **)(param_1 + 0x70))(param_1);
          }
          else {
            uVar8 = 1;
          }
        }
      }
    }
  }
  return uVar8;
}


// ===== 0042ea00  FUN_0042ea00 =====

uint FUN_0042ea00(int param_1,long *param_2,long param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  size_t __n;
  long lVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  undefined4 uVar12;
  undefined1 *__s1;
  uint uVar13;
  undefined8 uVar14;
  uint local_bc;
  uint local_b8;
  uint local_ac;
  undefined1 auStack_a8 [64];
  undefined1 *local_68;
  
  uVar7 = 10;
  if (param_4 != 0) {
    uVar7 = 5;
  }
  if (param_1 <= param_4) {
    uVar7 = uVar7 & 3;
  }
  if (-1 < *(int *)((long)param_2 + 0x2c)) {
    uVar7 = uVar7 & 0xc;
  }
  local_ac = 0;
  if (((uVar7 & *(uint *)(param_2 + 5)) == 0) || (iVar2 = FUN_0040caf8(param_2[1]), iVar2 < 1)) {
    puVar8 = (undefined1 *)0x0;
  }
  else {
    iVar9 = 0;
    __s1 = (undefined1 *)0x0;
    puVar8 = (undefined1 *)0x0;
    uVar3 = 0;
    uVar10 = 0x100;
    uVar13 = 0x100;
    local_bc = 0x100;
    local_b8 = 0x100;
    do {
      pbVar5 = (byte *)FUN_0040cb0c(param_2[1],iVar9);
      bVar1 = *pbVar5;
      if ((uVar7 >> (ulong)(bVar1 & 0x1f) & 1) != 0) {
        if (local_b8 != bVar1) {
          uVar10 = 0x100;
          local_bc = (uint)*(byte *)(*(long *)(*param_2 + 8) + (ulong)pbVar5[2]);
          local_b8 = (uint)bVar1;
        }
        bVar1 = pbVar5[1];
        if (uVar13 == bVar1) {
          uVar11 = (ulong)pbVar5[2];
          if ((uVar11 == 0) || (local_bc <= *(byte *)(*(long *)(*param_2 + 8) + uVar11))) {
            if (uVar10 != pbVar5[2]) {
              lVar6 = *(long *)(*(long *)*param_2 + uVar11 * 8);
              if (lVar6 != 0) goto LAB_0042ebdc;
LAB_0042eb3c:
              uVar10 = (uint)uVar11;
              __s1 = puVar8;
              local_ac = uVar3;
            }
            __n = (size_t)local_ac;
            if (*(ulong *)(pbVar5 + 0x10) == __n) goto LAB_0042ec14;
          }
        }
        else {
          FUN_003c86b4(puVar8,"crypto/x509/x509_vfy.c",0xb47);
          local_68 = (undefined1 *)0x0;
          if (bVar1 == 1) {
            uVar14 = FUN_00429de4(param_3);
            uVar3 = FUN_0043c2b0(uVar14,&local_68);
          }
          else {
            if (bVar1 != 0) {
              uVar12 = 0x85;
              uVar14 = 0xaeb;
              goto LAB_0042ecc0;
            }
            uVar3 = FUN_0043da68(param_3,&local_68);
          }
          uVar14 = 0xaf0;
          uVar12 = 0x8000d;
          if (((int)uVar3 < 0) || (local_68 == (undefined1 *)0x0)) {
LAB_0042ecc0:
            FUN_00379868();
            FUN_0037995c("crypto/x509/x509_vfy.c",uVar14,"dane_i2d");
            FUN_00379a5c(0xb,uVar12,0);
            return 0xffffffff;
          }
          uVar11 = (ulong)pbVar5[2];
          local_bc = (uint)*(byte *)(((long *)*param_2)[1] + uVar11);
          lVar6 = *(long *)(*(long *)*param_2 + uVar11 * 8);
          puVar8 = local_68;
          uVar13 = (uint)bVar1;
          if (lVar6 == 0) goto LAB_0042eb3c;
LAB_0042ebdc:
          __s1 = auStack_a8;
          local_ac = uVar3;
          iVar4 = FUN_0039e518(puVar8,uVar3,auStack_a8,&local_ac,lVar6,0);
          if (iVar4 == 0) {
            uVar7 = 0xffffffff;
            goto LAB_0042ec78;
          }
          uVar10 = (uint)uVar11;
          __n = (size_t)local_ac;
          if (*(ulong *)(pbVar5 + 0x10) != __n) goto LAB_0042ea9c;
LAB_0042ec14:
          iVar4 = memcmp(__s1,*(void **)(pbVar5 + 8),__n);
          if (iVar4 == 0) {
            uVar7 = 0xc >> (ulong)(local_b8 & 0x1f);
            if (((uVar7 & 1) != 0) || (*(int *)((long)param_2 + 0x2c) < 0)) {
              *(int *)((long)param_2 + 0x2c) = param_4;
              uVar7 = uVar7 & 1;
              param_2[3] = (long)pbVar5;
              FUN_003c86b4(param_2[4],"crypto/x509/x509_vfy.c",0xb7c);
              param_2[4] = param_3;
              FUN_00429d90();
              goto LAB_0042ec78;
            }
            break;
          }
        }
      }
LAB_0042ea9c:
      iVar9 = iVar9 + 1;
    } while (iVar2 != iVar9);
  }
  uVar7 = 0;
LAB_0042ec78:
  FUN_003c86b4(puVar8,"crypto/x509/x509_vfy.c",0xb85);
  return uVar7;
}


// ===== 0042ecf4  FUN_0042ecf4 =====

undefined8 FUN_0042ecf4(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  
  lVar8 = *(long *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 8);
  if (*(long *)(lVar8 + 0x38) != 0) {
    iVar1 = FUN_0040caf8();
    plVar6 = (long *)(lVar8 + 0x48);
    if (*plVar6 != 0) {
      FUN_003c86b4(*plVar6,"crypto/x509/x509_vfy.c",0x34a);
      *plVar6 = 0;
    }
    if (iVar1 < 1) {
      if (iVar1 == 0) goto LAB_0042edcc;
    }
    else {
      iVar7 = 0;
      do {
        uVar3 = FUN_0040cb0c(*(undefined8 *)(lVar8 + 0x38),iVar7);
        iVar2 = FUN_00423cac(uVar5,uVar3,0,*(undefined4 *)(lVar8 + 0x40),plVar6);
        if (0 < iVar2) goto LAB_0042edcc;
        iVar7 = iVar7 + 1;
      } while (iVar1 != iVar7);
    }
    lVar4 = *(long *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0xac) = 0;
    if (lVar4 == 0) {
      lVar4 = FUN_0040cb0c(*(undefined8 *)(param_1 + 0x98),0);
    }
    *(long *)(param_1 + 0xb8) = lVar4;
    *(undefined4 *)(param_1 + 0xb0) = 0x3e;
    uVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
  }
LAB_0042edcc:
  if ((*(long *)(lVar8 + 0x50) != 0) &&
     (iVar1 = FUN_00424244(uVar5,*(long *)(lVar8 + 0x50),*(undefined8 *)(lVar8 + 0x58),0), iVar1 < 1
     )) {
    lVar4 = *(long *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0xac) = 0;
    if (lVar4 == 0) {
      lVar4 = FUN_0040cb0c(*(undefined8 *)(param_1 + 0x98),0);
    }
    *(long *)(param_1 + 0xb8) = lVar4;
    *(undefined4 *)(param_1 + 0xb0) = 0x3f;
    uVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
  }
  if ((*(long *)(lVar8 + 0x60) != 0) &&
     (iVar1 = FUN_004242ec(uVar5,*(long *)(lVar8 + 0x60),*(undefined8 *)(lVar8 + 0x68),0), iVar1 < 1
     )) {
    lVar8 = *(long *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0xac) = 0;
    if (lVar8 == 0) {
      lVar8 = FUN_0040cb0c(*(undefined8 *)(param_1 + 0x98),0);
    }
    *(long *)(param_1 + 0xb8) = lVar8;
    *(undefined4 *)(param_1 + 0xb0) = 0x40;
    uVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
  }
  return 1;
}


// ===== 0042ee94  FUN_0042ee94 =====

bool FUN_0042ee94(long param_1,long *param_2,long *param_3,undefined8 *param_4,uint *param_5,
                 uint *param_6,undefined8 param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  int *piVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  int *piVar16;
  undefined8 uVar17;
  undefined8 local_a8;
  uint local_a0;
  long local_88;
  uint local_78;
  uint local_74;
  int local_68;
  int local_64;
  
  lVar13 = *(long *)(param_1 + 0xb8);
  local_78 = *param_5;
  iVar1 = FUN_0040caf8(param_7);
  if (0 < iVar1) {
    iVar1 = 0;
    uVar17 = 0;
    local_a8 = 0;
    local_88 = 0;
    local_a0 = 0;
    do {
      lVar6 = FUN_0040cb0c(param_7,iVar1);
      uVar12 = *(uint *)(lVar6 + 0x98);
      if ((uVar12 >> 1 & 1) == 0) {
        local_74 = *param_6;
        if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x19) >> 4 & 1) == 0) {
          if ((uVar12 & 0x60) == 0) goto LAB_0042ef80;
        }
        else if ((uVar12 >> 6 & 1) == 0) {
          if (*(long *)(lVar6 + 0xa8) == 0) {
LAB_0042ef80:
            uVar7 = FUN_00426a88(lVar13);
            uVar8 = FUN_00432b1c(lVar6);
            iVar2 = FUN_004267c8(uVar7,uVar8);
            if (iVar2 == 0) {
              uVar12 = 0x20;
            }
            else {
              if ((*(byte *)(lVar6 + 0x98) >> 5 & 1) == 0) goto LAB_0042ef24;
              uVar12 = 0;
            }
            uVar12 = (*(uint *)(lVar6 + 0x84) >> 1 & 0x100 | uVar12) ^ 0x100;
            iVar2 = FUN_0042f628(param_1,lVar6,0);
            if (iVar2 != 0) {
              uVar12 = uVar12 | 0x40;
            }
            uVar7 = FUN_00432b1c(lVar6);
            iVar2 = *(int *)(param_1 + 0xac);
            iVar3 = FUN_0040caf8(*(undefined8 *)(param_1 + 0x98));
            if (iVar2 != iVar3 + -1) {
              iVar2 = iVar2 + 1;
            }
            uVar8 = FUN_0040cb0c(*(undefined8 *)(param_1 + 0x98),iVar2);
            iVar3 = FUN_0041f780(uVar8,*(undefined8 *)(lVar6 + 0x88));
            if ((iVar3 == 0) && ((uVar12 >> 5 & 1) != 0)) {
              uVar12 = uVar12 | 0x1c;
              uVar17 = uVar8;
            }
            else {
              iVar2 = iVar2 + 1;
              iVar3 = FUN_0040caf8(*(undefined8 *)(param_1 + 0x98));
              if (iVar2 < iVar3) {
                do {
                  uVar8 = FUN_0040cb0c(*(undefined8 *)(param_1 + 0x98),iVar2);
                  uVar9 = FUN_00426ca0();
                  iVar3 = FUN_004267c8(uVar9,uVar7);
                  if ((iVar3 == 0) &&
                     (iVar3 = FUN_0041f780(uVar8,*(undefined8 *)(lVar6 + 0x88)), iVar3 == 0)) {
                    uVar12 = uVar12 | 0xc;
                    uVar17 = uVar8;
                    goto LAB_0042f120;
                  }
                  iVar2 = iVar2 + 1;
                  iVar3 = FUN_0040caf8(*(undefined8 *)(param_1 + 0x98));
                } while (iVar2 < iVar3);
              }
              if (((*(byte *)(*(long *)(param_1 + 0x20) + 0x19) >> 4 & 1) != 0) &&
                 (iVar2 = FUN_0040caf8(*(undefined8 *)(param_1 + 0x10)), 0 < iVar2)) {
                iVar2 = 0;
                do {
                  uVar8 = FUN_0040cb0c(*(undefined8 *)(param_1 + 0x10),iVar2);
                  uVar9 = FUN_00426ca0();
                  iVar3 = FUN_004267c8(uVar9,uVar7);
                  if ((iVar3 == 0) &&
                     (iVar3 = FUN_0041f780(uVar8,*(undefined8 *)(lVar6 + 0x88)), iVar3 == 0)) {
                    uVar12 = uVar12 | 4;
                    uVar17 = uVar8;
                    break;
                  }
                  iVar2 = iVar2 + 1;
                  iVar3 = FUN_0040caf8(*(undefined8 *)(param_1 + 0x10));
                } while (iVar2 < iVar3);
              }
LAB_0042f120:
              if ((uVar12 >> 2 & 1) == 0) goto LAB_0042ef24;
            }
            uVar15 = *(uint *)(lVar6 + 0x98);
            if ((uVar15 >> 4 & 1) == 0) {
              if ((*(byte *)(lVar13 + 0xe8) >> 4 & 1) == 0) {
                uVar15 = uVar15 >> 3;
              }
              else {
                uVar15 = uVar15 >> 2;
              }
              if ((uVar15 & 1) == 0) {
                uVar15 = *(uint *)(lVar6 + 0x9c);
                iVar2 = FUN_0040caf8(*(undefined8 *)(lVar13 + 0x110));
                if (0 < iVar2) {
                  iVar2 = 0;
                  do {
                    puVar10 = (undefined8 *)FUN_0040cb0c(*(undefined8 *)(lVar13 + 0x110),iVar2);
                    uVar7 = FUN_00432b1c(lVar6);
                    if (puVar10[2] == 0) {
                      if ((uVar12 >> 5 & 1) != 0) {
LAB_0042f270:
                        if ((*(undefined8 **)(lVar6 + 0x90) == (undefined8 *)0x0) ||
                           ((piVar11 = (int *)*puVar10, piVar11 == (int *)0x0 ||
                            (piVar16 = (int *)**(undefined8 **)(lVar6 + 0x90), piVar16 == (int *)0x0
                            )))) {
LAB_0042f3f4:
                          uVar15 = *(uint *)(puVar10 + 3) & uVar15;
                          goto LAB_0042f464;
                        }
                        if (*piVar11 == 1) {
                          lVar14 = *(long *)(piVar11 + 4);
                          if (lVar14 != 0) {
                            if (*piVar16 == 1) {
                              if ((*(long *)(piVar16 + 4) != 0) &&
                                 (iVar3 = FUN_004267c8(lVar14), iVar3 == 0)) goto LAB_0042f3f4;
                            }
                            else {
                              uVar7 = *(undefined8 *)(piVar16 + 2);
                              iVar3 = FUN_0040caf8(uVar7);
joined_r0x0042f2f8:
                              if (0 < iVar3) {
                                iVar3 = 0;
                                do {
                                  piVar11 = (int *)FUN_0040cb0c(uVar7,iVar3);
                                  if ((*piVar11 == 4) &&
                                     (iVar4 = FUN_004267c8(lVar14,*(undefined8 *)(piVar11 + 2)),
                                     iVar4 == 0)) goto LAB_0042f3f4;
                                  iVar3 = iVar3 + 1;
                                  iVar4 = FUN_0040caf8(uVar7);
                                } while (iVar3 < iVar4);
                              }
                            }
                          }
                        }
                        else if (*piVar16 == 1) {
                          lVar14 = *(long *)(piVar16 + 4);
                          if (lVar14 != 0) {
                            uVar7 = *(undefined8 *)(piVar11 + 2);
                            iVar3 = FUN_0040caf8(uVar7);
                            goto joined_r0x0042f2f8;
                          }
                        }
                        else {
                          iVar3 = FUN_0040caf8(*(undefined8 *)(piVar11 + 2));
                          if (0 < iVar3) {
                            iVar3 = 0;
                            do {
                              uVar7 = FUN_0040cb0c(*(undefined8 *)(piVar11 + 2),iVar3);
                              iVar4 = FUN_0040caf8(*(undefined8 *)(piVar16 + 2));
                              if (0 < iVar4) {
                                iVar4 = 0;
                                do {
                                  uVar8 = FUN_0040cb0c(*(undefined8 *)(piVar16 + 2),iVar4);
                                  iVar5 = FUN_004187b0(uVar7,uVar8);
                                  if (iVar5 == 0) goto LAB_0042f3f4;
                                  iVar4 = iVar4 + 1;
                                  iVar5 = FUN_0040caf8(*(undefined8 *)(piVar16 + 2));
                                } while (iVar4 < iVar5);
                              }
                              iVar3 = iVar3 + 1;
                              iVar4 = FUN_0040caf8(*(undefined8 *)(piVar11 + 2));
                            } while (iVar3 < iVar4);
                          }
                        }
                      }
                    }
                    else {
                      iVar3 = FUN_0040caf8(puVar10[2]);
                      if (0 < iVar3) {
                        iVar3 = 0;
                        do {
                          piVar11 = (int *)FUN_0040cb0c(puVar10[2],iVar3);
                          if ((*piVar11 == 4) &&
                             (iVar4 = FUN_004267c8(*(undefined8 *)(piVar11 + 2),uVar7), iVar4 == 0))
                          goto LAB_0042f270;
                          iVar3 = iVar3 + 1;
                          iVar4 = FUN_0040caf8(puVar10[2]);
                        } while (iVar3 < iVar4);
                      }
                    }
                    iVar2 = iVar2 + 1;
                    iVar3 = FUN_0040caf8(*(undefined8 *)(lVar13 + 0x110));
                  } while (iVar2 < iVar3);
                }
                if (*(long **)(lVar6 + 0x90) == (long *)0x0) {
                  if ((uVar12 >> 5 & 1) != 0) {
LAB_0042f464:
                    if ((uVar15 & (local_74 ^ 0xffffffff)) == 0) goto LAB_0042ef24;
                    local_74 = uVar15 | local_74;
                    uVar12 = uVar12 | 0x80;
                  }
                }
                else if (((uVar12 >> 5 & 1) != 0) && (**(long **)(lVar6 + 0x90) == 0))
                goto LAB_0042f464;
              }
            }
            if (((int)local_78 <= (int)uVar12) && (uVar12 != 0)) {
              if ((uVar12 == local_78) && (local_88 != 0)) {
                uVar7 = FUN_00432b0c();
                uVar8 = FUN_00432b0c(lVar6);
                iVar2 = FUN_003c1204(&local_64,&local_68,uVar7,uVar8);
                if ((iVar2 == 0) || ((uVar12 = local_78, local_64 < 1 && (local_68 < 1))))
                goto LAB_0042ef24;
              }
              local_78 = uVar12;
              local_a0 = local_74;
              local_a8 = uVar17;
              local_88 = lVar6;
            }
          }
        }
        else if ((*(uint *)(lVar6 + 0x9c) & (local_74 ^ 0xffffffff)) != 0) goto LAB_0042ef80;
      }
LAB_0042ef24:
      iVar1 = iVar1 + 1;
      iVar2 = FUN_0040caf8(param_7);
    } while (iVar1 < iVar2);
    if (local_88 != 0) {
      FUN_0043a89c(*param_2);
      *param_2 = local_88;
      *param_4 = local_a8;
      *param_5 = local_78;
      *param_6 = local_a0;
      FUN_00432ae8(local_88);
      FUN_0043a89c(*param_3);
      *param_3 = 0;
      if (((*(byte *)(*(long *)(param_1 + 0x20) + 0x19) >> 5 & 1) != 0) &&
         (((*(uint *)(local_88 + 0x84) | *(uint *)(*(long *)(param_1 + 0xb8) + 0xe8)) >> 0xc & 1) !=
          0)) {
        iVar1 = FUN_0040caf8(param_7);
        if (0 < iVar1) {
          iVar1 = 0;
          do {
            lVar13 = FUN_0040cb0c(param_7,iVar1);
            if ((*(long *)(lVar13 + 0xa8) != 0) && (*(long *)(local_88 + 0xa0) != 0)) {
              uVar17 = FUN_00432b1c(local_88);
              uVar7 = FUN_00432b1c(lVar13);
              iVar2 = FUN_004267c8(uVar17,uVar7);
              if (((iVar2 == 0) &&
                  (((iVar2 = FUN_0042bc24(lVar13,local_88,0x5a), iVar2 != 0 &&
                    (iVar2 = FUN_0042bc24(lVar13,local_88,0x302), iVar2 != 0)) &&
                   (iVar2 = FUN_0038d110(*(undefined8 *)(lVar13 + 0xa8),
                                         *(undefined8 *)(local_88 + 0xa0)), iVar2 < 1)))) &&
                 (iVar2 = FUN_0038d110(*(undefined8 *)(lVar13 + 0xa0),
                                       *(undefined8 *)(local_88 + 0xa0)), 0 < iVar2)) {
                iVar1 = FUN_0042f628(param_1,lVar13,0);
                if (iVar1 != 0) {
                  *param_5 = *param_5 | 2;
                }
                FUN_00432ae8(lVar13);
                goto LAB_0042f620;
              }
            }
            iVar1 = iVar1 + 1;
            iVar2 = FUN_0040caf8(param_7);
          } while (iVar1 < iVar2);
        }
        lVar13 = 0;
LAB_0042f620:
        *param_3 = lVar13;
      }
    }
  }
  return 0x1bf < (int)local_78;
}


// ===== 0042f628  FUN_0042f628 =====

undefined8 FUN_0042f628(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  
  uVar4 = (uint)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  if ((uVar4 >> 1 & 1) == 0) {
    if ((uVar4 >> 0x15 & 1) != 0) {
      return 1;
    }
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x20) + 8;
  }
  if (param_3 != 0) {
    *(undefined8 *)(param_1 + 200) = param_2;
  }
  uVar2 = FUN_00432b0c(param_2);
  iVar1 = FUN_0042b1b0(uVar2,lVar6);
  if (iVar1 == 0) {
    if (param_3 == 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0xb0) = 0xf;
    uVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
    iVar1 = (int)uVar2;
joined_r0x0042f6c8:
    if (iVar1 == 0) {
      return uVar2;
    }
  }
  else if (0 < iVar1) {
    if (param_3 == 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0xb0) = 0xb;
    uVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
    iVar1 = (int)uVar2;
    goto joined_r0x0042f6c8;
  }
  lVar3 = FUN_00432b14(param_2);
  if (lVar3 == 0) {
LAB_0042f704:
    if (param_3 == 0) {
      return 1;
    }
  }
  else {
    uVar2 = FUN_00432b14(param_2);
    iVar1 = FUN_0042b1b0(uVar2,lVar6);
    if (iVar1 == 0) {
      if (param_3 == 0) {
        return 0;
      }
      uVar5 = 0x10;
    }
    else {
      if ((-1 < iVar1) || ((*(byte *)(param_1 + 0xd0) >> 1 & 1) != 0)) goto LAB_0042f704;
      if (param_3 == 0) {
        return 0;
      }
      uVar5 = 0xc;
    }
    *(undefined4 *)(param_1 + 0xb0) = uVar5;
    uVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
  }
  *(undefined8 *)(param_1 + 200) = 0;
  return 1;
}


// ===== 0042f778  FUN_0042f778 =====

long FUN_0042f778(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  
  iVar1 = FUN_0040caf8(param_2);
  if (iVar1 < 1) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    iVar1 = 0;
    do {
      lVar4 = FUN_0040cb0c(param_2,iVar1);
      iVar2 = (**(code **)(param_1 + 0x48))(param_1,param_3,lVar4);
      if (iVar2 != 0) {
        if (((*(byte *)(param_3 + 0xe8) >> 5 & 1) == 0) ||
           (iVar2 = FUN_0040caf8(*(undefined8 *)(param_1 + 0x98)), iVar2 != 1)) {
          uVar7 = *(undefined8 *)(param_1 + 0x98);
          iVar2 = FUN_0040caf8(uVar7);
          if (0 < iVar2) {
            iVar8 = 0;
            do {
              uVar5 = FUN_0040cb0c(uVar7,iVar8);
              iVar3 = FUN_00426d54(uVar5,lVar4);
              if (iVar3 == 0) goto LAB_0042f7c0;
              iVar8 = iVar8 + 1;
            } while (iVar2 != iVar8);
          }
        }
        iVar2 = FUN_0042afb4(param_1,lVar4,0xffffffff);
        if (iVar2 != 0) {
          return lVar4;
        }
        if (lVar6 != 0) {
          uVar7 = FUN_00429db4(lVar4);
          uVar5 = FUN_00429db4(lVar6);
          iVar2 = FUN_003c1730(uVar7,uVar5);
          if (iVar2 < 1) goto LAB_0042f7c0;
        }
        lVar6 = lVar4;
      }
LAB_0042f7c0:
      iVar1 = iVar1 + 1;
      iVar2 = FUN_0040caf8(param_2);
    } while (iVar1 < iVar2);
  }
  return lVar6;
}


// ===== 0042f8c4  FUN_0042f8c4 =====

undefined4 FUN_0042f8c4(long param_1,int param_2)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  code *pcVar10;
  long lVar11;
  
  lVar11 = *(long *)(param_1 + 0xf0);
  iVar2 = FUN_0040caf8(*(undefined8 *)(param_1 + 0x98));
  if (((((lVar11 != 0) && (0 < param_2)) && ((*(uint *)(lVar11 + 0x28) & 5) != 0)) &&
      ((param_2 < iVar2 && (*(long *)(param_1 + 0xf0) != 0)))) &&
     (((*(byte *)(*(long *)(param_1 + 0xf0) + 0x28) & 5) != 0 &&
      (lVar5 = FUN_0040cb0c(*(undefined8 *)(param_1 + 0x98),param_2), lVar5 != 0)))) {
    iVar3 = FUN_0042ea00(*(undefined4 *)(param_1 + 0x94),*(undefined8 *)(param_1 + 0xf0),lVar5,
                         param_2);
    if (iVar3 < 0) {
      return 0xffffffff;
    }
    if (iVar3 != 0) {
      *(int *)(param_1 + 0x94) = param_2 + -1;
      return 1;
    }
  }
  iVar3 = param_2;
  if (param_2 < iVar2) {
    do {
      lVar5 = FUN_0040cb0c(*(undefined8 *)(param_1 + 0x98),iVar3);
      iVar4 = FUN_0042fd58(lVar5,*(undefined4 *)(*(long *)(param_1 + 0x20) + 0x24),0);
      if (iVar4 == 1) goto LAB_0042fbac;
      if (iVar4 == 2) {
        if (iVar3 < 0) {
          iVar3 = *(int *)(param_1 + 0xac);
        }
        else {
          *(int *)(param_1 + 0xac) = iVar3;
        }
        goto joined_r0x0042fa9c;
      }
      iVar3 = iVar3 + 1;
    } while (iVar2 != iVar3);
    if (param_2 < iVar2) {
      uVar1 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x18) & 0x80000;
      uVar9 = 3;
      if (uVar1 != 0) {
        uVar9 = 1;
      }
      if ((lVar11 == 0) || (uVar1 == 0)) {
        return uVar9;
      }
LAB_0042fbb0:
      iVar2 = FUN_0040caf8(*(undefined8 *)(lVar11 + 8));
      if (iVar2 < 1) {
        return 1;
      }
      if (*(int *)(lVar11 + 0x30) < 0) {
        *(int *)(lVar11 + 0x30) = param_2;
      }
      uVar9 = 3;
      if (-1 < *(int *)(lVar11 + 0x2c)) {
        uVar9 = 1;
      }
      return uVar9;
    }
  }
  if ((iVar2 == param_2) && ((*(byte *)(*(long *)(param_1 + 0x20) + 0x1a) >> 3 & 1) != 0)) {
    lVar5 = FUN_0040cb0c(*(undefined8 *)(param_1 + 0x98),0);
    FUN_0037f6d4();
    pcVar10 = *(code **)(param_1 + 0x78);
    uVar6 = FUN_00426ca0(lVar5);
    lVar7 = (*pcVar10)(param_1,uVar6);
    FUN_0037f71c();
    if (lVar7 == 0) {
      return 0xffffffff;
    }
    iVar2 = FUN_0040caf8(lVar7);
    if (0 < iVar2) {
      iVar2 = 0;
      do {
        lVar8 = FUN_0040cb0c(lVar7,iVar2);
        iVar3 = FUN_00426d54(lVar8,lVar5);
        if (iVar3 == 0) {
          if (lVar8 != 0) {
            iVar2 = FUN_00429d90(lVar8);
            FUN_004131f0(lVar7);
            if (iVar2 == 0) {
              return 0xffffffff;
            }
            iVar2 = FUN_0042fd58(lVar8,*(undefined4 *)(*(long *)(param_1 + 0x20) + 0x24),0);
            if (iVar2 == 2) {
              FUN_0043da80(lVar8);
              iVar3 = 0;
              *(undefined4 *)(param_1 + 0xac) = 0;
joined_r0x0042fa9c:
              if (lVar5 == 0) {
                lVar5 = FUN_0040cb0c(*(undefined8 *)(param_1 + 0x98),iVar3);
              }
              *(long *)(param_1 + 0xb8) = lVar5;
              *(undefined4 *)(param_1 + 0xb0) = 0x1c;
              iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
              uVar9 = 2;
              if (iVar2 != 0) {
                uVar9 = 3;
              }
              return uVar9;
            }
            FUN_0040cb3c(*(undefined8 *)(param_1 + 0x98),0,lVar8);
            FUN_0043da80(lVar5);
            *(undefined4 *)(param_1 + 0x94) = 0;
LAB_0042fbac:
            if (lVar11 == 0) {
              return 1;
            }
            goto LAB_0042fbb0;
          }
          break;
        }
        iVar2 = iVar2 + 1;
        iVar3 = FUN_0040caf8(lVar7);
      } while (iVar2 < iVar3);
    }
    FUN_004131f0(lVar7);
  }
  return 3;
}


// ===== 0042fc10  FUN_0042fc10 =====

undefined8 FUN_0042fc10(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  int iVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0xf0);
  iVar3 = *(int *)(param_1 + 0x94) + -1;
  uVar4 = FUN_0040cb0c(*(undefined8 *)(param_1 + 0x98),iVar3);
  iVar1 = FUN_0040caf8(*(undefined8 *)(lVar7 + 8));
  if (0 < iVar1) {
    iVar6 = 0;
    do {
      pcVar5 = (char *)FUN_0040cb0c(*(undefined8 *)(lVar7 + 8),iVar6);
      if ((((*pcVar5 == '\x02') && (pcVar5[1] == '\x01')) && (pcVar5[2] == '\0')) &&
         (iVar2 = FUN_00433804(uVar4,*(undefined8 *)(pcVar5 + 0x18)), 0 < iVar2)) {
        FUN_0043da80(*(undefined8 *)(lVar7 + 0x20));
        uVar4 = *(undefined8 *)(param_1 + 0x98);
        *(int *)(lVar7 + 0x2c) = iVar3;
        *(undefined4 *)(param_1 + 0xf8) = 1;
        *(char **)(lVar7 + 0x18) = pcVar5;
        *(undefined8 *)(lVar7 + 0x20) = 0;
        iVar3 = FUN_0040caf8(uVar4);
        if (*(int *)(param_1 + 0x94) < iVar3) {
          do {
            FUN_0040ca00(*(undefined8 *)(param_1 + 0x98));
            FUN_0043da80();
            iVar3 = iVar3 + -1;
          } while (*(int *)(param_1 + 0x94) < iVar3);
        }
        return 1;
      }
      iVar6 = iVar6 + 1;
    } while (iVar1 != iVar6);
  }
  return 3;
}


// ===== 0042fd44  FUN_0042fd44 =====

undefined * FUN_0042fd44(undefined *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_FUN_007a9318;
  PTR_FUN_007a9318 = param_1;
  return puVar1;
}


// ===== 0042fd58  FUN_0042fd58 =====

void FUN_0042fd58(undefined8 param_1,uint param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  uint local_58 [10];
  
  if (param_2 == 0) {
    FUN_0042fe4c(0x38e,param_1,(uint)param_3 | 8);
    return;
  }
  if (param_2 < 9) {
    lVar2 = (ulong)param_2 * 0x28 + 0x7a92f8;
LAB_0042fd90:
    (**(code **)(lVar2 + 8))(lVar2,param_1,param_3);
    return;
  }
  if (DAT_007ac850 != 0) {
    param_3 = param_3 & 0xffffffff;
    local_58[0] = param_2;
    FUN_0040cc10();
    iVar1 = FUN_0040c48c(DAT_007ac850,local_58);
    if ((-1 < iVar1) && (-1 < iVar1 + 8)) {
      lVar2 = FUN_0040cb0c(DAT_007ac850,iVar1);
      goto LAB_0042fd90;
    }
  }
  (*(code *)PTR_FUN_007a9318)(param_2,param_1,param_3);
  return;
}


// ===== 0042fe4c  FUN_0042fe4c =====

undefined8 FUN_0042fe4c(int param_1,long param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_2 + 0x140);
  if (plVar3 != (long *)0x0) {
    if ((plVar3[1] != 0) && (iVar1 = FUN_0040caf8(), 0 < iVar1)) {
      iVar1 = 0;
      if ((param_3 >> 4 & 1) == 0) {
        do {
          FUN_0040cb0c(plVar3[1],iVar1);
          iVar2 = FUN_003dd5b4();
          if (iVar2 == param_1) {
            return 2;
          }
          iVar1 = iVar1 + 1;
          iVar2 = FUN_0040caf8(plVar3[1]);
        } while (iVar1 < iVar2);
      }
      else {
        do {
          FUN_0040cb0c(plVar3[1],iVar1);
          iVar2 = FUN_003dd5b4();
          if (iVar2 == param_1) {
            return 2;
          }
          if (iVar2 == 0x38e) {
            return 2;
          }
          iVar1 = iVar1 + 1;
          iVar2 = FUN_0040caf8(plVar3[1]);
        } while (iVar1 < iVar2);
      }
    }
    if (*plVar3 != 0) {
      iVar1 = FUN_0040caf8();
      if (iVar1 < 1) {
        return 2;
      }
      if ((param_3 >> 4 & 1) == 0) {
        iVar1 = 0;
        do {
          FUN_0040cb0c(*plVar3,iVar1);
          iVar2 = FUN_003dd5b4();
          if (iVar2 == param_1) {
            return 1;
          }
          iVar1 = iVar1 + 1;
          iVar2 = FUN_0040caf8(*plVar3);
        } while (iVar1 < iVar2);
        return 2;
      }
      iVar1 = 0;
      while( true ) {
        FUN_0040cb0c(*plVar3,iVar1);
        iVar2 = FUN_003dd5b4();
        if (iVar2 == param_1) {
          return 1;
        }
        if (iVar2 == 0x38e) break;
        iVar1 = iVar1 + 1;
        iVar2 = FUN_0040caf8(*plVar3);
        if (iVar2 <= iVar1) {
          return 2;
        }
      }
      return 1;
    }
  }
  if (((((param_3 >> 3 & 1) != 0) && (iVar1 = FUN_0041e8a8(param_2,0xffffffff,0), iVar1 == 1)) &&
      ((param_3 >> 2 & 1) == 0)) && ((*(byte *)(param_2 + 0xe9) >> 5 & 1) != 0)) {
    return 1;
  }
  return 3;
}


// ===== 0043000c  FUN_0043000c =====

uint FUN_0043000c(int param_1)

{
  int iVar1;
  uint uVar2;
  int local_48 [10];
  
  uVar2 = param_1 - 1;
  if (7 < uVar2) {
    if (DAT_007ac850 == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      local_48[0] = param_1;
      FUN_0040cc10();
      iVar1 = FUN_0040c48c(DAT_007ac850,local_48);
      uVar2 = iVar1 + 8;
      if (iVar1 < 0) {
        uVar2 = 0xffffffff;
      }
    }
  }
  return uVar2;
}


// ===== 00430070  FUN_00430070 =====

undefined * FUN_00430070(uint param_1)

{
  undefined *puVar1;
  
  if ((int)param_1 < 0) {
    return (undefined *)0x0;
  }
  if (param_1 < 8) {
    return &DAT_007a9320 + (ulong)param_1 * 0x28;
  }
  puVar1 = (undefined *)FUN_0040cb0c(DAT_007ac850,param_1 - 8);
  return puVar1;
}


// ===== 004300b0  FUN_004300b0 =====

int FUN_004300b0(void)

{
  int iVar1;
  
  if (DAT_007ac850 != 0) {
    iVar1 = FUN_0040caf8();
    return iVar1 + 8;
  }
  return 8;
}


// ===== 004300dc  FUN_004300dc =====

undefined8 FUN_004300dc(int *param_1,int param_2)

{
  int iVar1;
  int local_58 [10];
  
  if (param_2 - 1U < 8) {
LAB_004300fc:
    *param_1 = param_2;
    return 1;
  }
  if (DAT_007ac850 != 0) {
    local_58[0] = param_2;
    FUN_0040cc10(DAT_007ac850);
    iVar1 = FUN_0040c48c(DAT_007ac850,local_58);
    if ((-1 < iVar1) && (-1 < iVar1 + 8)) goto LAB_004300fc;
  }
  FUN_00379868();
  FUN_0037995c("crypto/x509/x509_trust.c",0x77,"X509_TRUST_set");
  FUN_00379a5c(0xb,0x7b,0);
  return 0;
}


// ===== 004301a0  FUN_004301a0 =====

undefined8
FUN_004301a0(int param_1,uint param_2,undefined8 param_3,undefined8 param_4,int param_5,
            undefined8 param_6)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  int local_78 [10];
  
  if (param_1 - 1U < 8) {
    bVar1 = false;
    piVar3 = (int *)(&DAT_007a9320 + (ulong)(param_1 - 1U) * 0x28);
  }
  else {
    if (DAT_007ac850 != 0) {
      local_78[0] = param_1;
      FUN_0040cc10();
      iVar2 = FUN_0040c48c(DAT_007ac850,local_78);
      if ((-1 < iVar2) && (-1 < iVar2 + 8)) {
        piVar3 = (int *)FUN_0040cb0c(DAT_007ac850,iVar2);
        bVar1 = false;
        goto LAB_00430264;
      }
    }
    piVar3 = (int *)FUN_003c83a4(0x28,"crypto/x509/x509_trust.c",0x8d);
    if (piVar3 == (int *)0x0) {
      return 0;
    }
    bVar1 = true;
    piVar3[1] = 1;
  }
LAB_00430264:
  if ((*(byte *)(piVar3 + 1) >> 1 & 1) != 0) {
    FUN_003c86b4(*(undefined8 *)(piVar3 + 4),"crypto/x509/x509_trust.c",0x95);
  }
  lVar4 = FUN_003ca2f4(param_4,"crypto/x509/x509_trust.c",0x97);
  *(long *)(piVar3 + 4) = lVar4;
  if (lVar4 == 0) {
    if (!bVar1) {
      return 0;
    }
  }
  else {
    *(undefined8 *)(piVar3 + 2) = param_3;
    piVar3[6] = param_5;
    *(undefined8 *)(piVar3 + 8) = param_6;
    *piVar3 = param_1;
    piVar3[1] = param_2 & 0xfffffffc | piVar3[1] & 1U | 2;
    if (!bVar1) {
      return 1;
    }
    if ((DAT_007ac850 == 0) && (DAT_007ac850 = FUN_0040bfd0(FUN_00430384), DAT_007ac850 == 0)) {
      uVar5 = 0xa7;
    }
    else {
      iVar2 = FUN_0040c89c(DAT_007ac850,piVar3);
      if (iVar2 != 0) {
        return 1;
      }
      uVar5 = 0xab;
    }
    FUN_00379868();
    FUN_0037995c("crypto/x509/x509_trust.c",uVar5,"X509_TRUST_add");
    FUN_00379a5c(0xb,0x8000f,0);
  }
  FUN_003c86b4(*(undefined8 *)(piVar3 + 4),"crypto/x509/x509_trust.c",0xb2);
  FUN_003c86b4(piVar3,"crypto/x509/x509_trust.c",0xb3);
  return 0;
}


// ===== 00430384  FUN_00430384 =====

int FUN_00430384(undefined8 *param_1,undefined8 *param_2)

{
  return *(int *)*param_1 - *(int *)*param_2;
}


// ===== 0043039c  FUN_0043039c =====

void FUN_0043039c(void)

{
  FUN_0040ca6c(DAT_007ac850,FUN_004303cc);
  DAT_007ac850 = 0;
  return;
}


// ===== 004303cc  FUN_004303cc =====

void FUN_004303cc(long param_1)

{
  if (param_1 != 0) {
    if ((*(uint *)(param_1 + 4) & 1) != 0) {
      if ((*(uint *)(param_1 + 4) >> 1 & 1) != 0) {
        FUN_003c86b4(*(undefined8 *)(param_1 + 0x10),"crypto/x509/x509_trust.c",0xbe);
      }
      FUN_003c86b4(param_1,"crypto/x509/x509_trust.c",0xbf);
      return;
    }
  }
  return;
}


// ===== 00430424  FUN_00430424 =====

undefined4 FUN_00430424(long param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


// ===== 0043042c  FUN_0043042c =====

undefined8 FUN_0043042c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


// ===== 00430434  FUN_00430434 =====

undefined4 FUN_00430434(undefined4 *param_1)

{
  return *param_1;
}


// ===== 0043043c  FUN_0043043c =====

undefined8 FUN_0043043c(undefined8 param_1,long param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = FUN_0041e8a8(param_2,0xffffffff,0);
  if (((iVar1 == 1) && ((param_3 >> 2 & 1) == 0)) && ((*(byte *)(param_2 + 0xe9) >> 5 & 1) != 0)) {
    return 1;
  }
  return 3;
}


// ===== 00430494  FUN_00430494 =====

void FUN_00430494(long param_1,undefined8 param_2,uint param_3)

{
  FUN_0042fe4c(*(undefined4 *)(param_1 + 0x18),param_2,param_3 | 0x18);
  return;
}


// ===== 004304a0  FUN_004304a0 =====

void FUN_004304a0(long param_1,undefined8 param_2,uint param_3)

{
  FUN_0042fe4c(*(undefined4 *)(param_1 + 0x18),param_2,param_3 & 0xffffffe7);
  return;
}


// ===== 004304ac  FUN_004304ac =====

void FUN_004304ac(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int iVar3;
  
  if (param_1 != 0) {
    FUN_0040bd78(*(undefined8 *)(param_1 + 0x28));
    FUN_0040ca6c(*(undefined8 *)(param_1 + 0x30),FUN_00430570);
    puVar1 = PTR_FUN_007a1c40;
    if (0 < *(int *)(param_1 + 0x18)) {
      puVar2 = *(undefined8 **)(param_1 + 0x10);
      iVar3 = 0;
      do {
        FUN_0043da80(*puVar2);
        FUN_0040ca6c(puVar2[1],puVar1);
        FUN_004313f4(puVar2[2]);
        iVar3 = iVar3 + 1;
        puVar2 = puVar2 + 4;
      } while (iVar3 < *(int *)(param_1 + 0x18));
    }
    FUN_0040ca6c(*(undefined8 *)(param_1 + 0x20),PTR_FUN_007a1c38);
    FUN_003c86b4(*(undefined8 *)(param_1 + 0x10),"crypto/x509/pcy_tree.c",0x284);
    FUN_003c86b4(param_1,"crypto/x509/pcy_tree.c",0x285);
    return;
  }
  return;
}


// ===== 00430570  FUN_00430570 =====

void FUN_00430570(undefined8 *param_1)

{
  if (((byte *)*param_1 != (byte *)0x0) && ((*(byte *)*param_1 >> 3 & 1) != 0)) {
    FUN_003c86b4(param_1,"crypto/x509/pcy_tree.c",0x26f);
    return;
  }
  return;
}


// ===== 00430594  FUN_00430594 =====

/* WARNING: Type propagation algorithm not settling */

undefined4
FUN_00430594(ulong *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  uint *puVar16;
  long lVar17;
  long lVar18;
  undefined4 *puVar19;
  ulong uVar20;
  undefined8 *puVar21;
  ulong uVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  long *plVar26;
  uint uVar27;
  uint uVar28;
  long local_68;
  
  *param_1 = 0;
  local_68 = 0;
  *param_2 = 0;
  uVar5 = FUN_0040caf8(param_3);
  uVar22 = 0;
  uVar10 = uVar5;
  if ((param_5 & 0x100) != 0) {
    uVar10 = 0;
  }
  uVar28 = uVar5;
  if ((param_5 & 0x200) != 0) {
    uVar28 = 0;
  }
  uVar27 = uVar5;
  if ((param_5 & 0x400) != 0) {
    uVar27 = 0;
  }
  iVar7 = uVar5 - 1;
  if (iVar7 == 0) {
LAB_004305fc:
    FUN_004304ac(uVar22);
    return 1;
  }
  iVar11 = iVar7;
  if ((int)uVar5 < 2) {
    bVar1 = true;
    bVar2 = false;
  }
  else {
    do {
      iVar11 = iVar11 + -1;
      uVar12 = FUN_0040cb0c(param_3,iVar11);
      FUN_0041e8a8(uVar12,0xffffffff,0);
      uVar22 = FUN_004316c0(uVar12);
      if (uVar22 == 0) {
        return 0;
      }
    } while (0 < iVar11);
    bVar1 = true;
    bVar2 = false;
    do {
      if (((int)uVar10 < 1) && (bVar2)) break;
      iVar7 = iVar7 + -1;
      uVar12 = FUN_0040cb0c(param_3,iVar7);
      uVar6 = FUN_0041fbf4();
      if ((uVar6 >> 0xb & 1) != 0) {
        return 0xffffffff;
      }
      lVar13 = FUN_004316c0(uVar12);
      bVar4 = bVar2;
      bVar3 = bVar1;
      if (bVar1) {
        bVar4 = true;
        bVar3 = false;
        if (*(long *)(lVar13 + 8) != 0) {
          bVar4 = bVar2;
          bVar3 = bVar1;
        }
      }
      bVar1 = bVar3;
      bVar2 = bVar4;
      if (0 < (int)uVar10) {
        uVar22 = *(ulong *)(lVar13 + 0x18);
        uVar6 = (uVar10 + (uVar6 >> 5 & 1)) - 1;
        uVar10 = (uint)uVar22;
        if ((long)(ulong)uVar6 <= (long)uVar22 || 0x7fffffffffffffff < uVar22) {
          uVar10 = uVar6;
        }
      }
    } while (0 < iVar7);
  }
  bVar4 = uVar10 == 0;
  if (bVar1) {
    uVar22 = FUN_003c8474(0x40,"crypto/x509/pcy_tree.c",0xae);
    if (uVar22 == 0) {
      return 0;
    }
    *(undefined8 *)(uVar22 + 8) = 1000;
    lVar13 = FUN_003c8474(-(ulong)(uVar5 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar5 << 5,
                          "crypto/x509/pcy_tree.c",0xbb);
    *(long *)(uVar22 + 0x10) = lVar13;
    if (lVar13 == 0) {
      FUN_003c86b4(uVar22,"crypto/x509/pcy_tree.c",0xbc);
      return 0;
    }
    *(uint *)(uVar22 + 0x18) = uVar5;
    uVar12 = FUN_003dcce8(0x2ea);
    lVar15 = FUN_00431520(0,uVar12,0);
    if (lVar15 == 0) goto LAB_00431058;
    lVar17 = FUN_004311dc(lVar13,lVar15,0,uVar22,1);
    if (lVar17 == 0) {
      FUN_004314bc(lVar15);
      goto LAB_00431058;
    }
    if (1 < (int)uVar5) {
      puVar16 = (uint *)(lVar13 + 0x38);
      iVar7 = uVar5 - 2;
      do {
        while( true ) {
          uVar12 = FUN_0040cb0c(param_3,iVar7);
          uVar10 = FUN_0041fbf4();
          plVar14 = (long *)FUN_004316c0(uVar12);
          FUN_00429d90(uVar12);
          lVar13 = *plVar14;
          *(undefined8 *)(puVar16 + -6) = uVar12;
          if (lVar13 != 0) break;
          *puVar16 = *puVar16 | 0x200;
          uVar5 = uVar10 >> 5 & 1;
          if (uVar28 != 0) goto LAB_00430c7c;
LAB_00430cb4:
          if ((iVar7 == 0) || ((uVar10 >> 5 & 1) == 0)) {
            *puVar16 = *puVar16 | 0x200;
            uVar28 = 0;
            goto joined_r0x00430c0c;
          }
          uVar28 = 0;
          if (uVar27 != 0) goto LAB_00430c10;
LAB_00430cc4:
          *puVar16 = *puVar16 | 0x400;
          bVar1 = iVar7 < 1;
          puVar16 = puVar16 + 8;
          iVar7 = iVar7 + -1;
          if (bVar1) goto LAB_00430714;
        }
        uVar5 = uVar10 >> 5 & 1;
        if (uVar28 == 0) goto LAB_00430cb4;
LAB_00430c7c:
        uVar20 = plVar14[2];
        uVar10 = (uVar28 + uVar5) - 1;
        uVar28 = (uint)uVar20;
        if ((long)(int)uVar10 <= (long)uVar20 || 0x7fffffffffffffff < uVar20) {
          uVar28 = uVar10;
        }
joined_r0x00430c0c:
        if (uVar27 == 0) goto LAB_00430cc4;
LAB_00430c10:
        uVar20 = plVar14[4];
        uVar10 = (uVar27 + uVar5) - 1;
        uVar27 = (uint)uVar20;
        if ((long)(int)uVar10 <= (long)uVar20 || 0x7fffffffffffffff < uVar20) {
          uVar27 = uVar10;
        }
        puVar16 = puVar16 + 8;
        bVar1 = 0 < iVar7;
        iVar7 = iVar7 + -1;
      } while (bVar1);
    }
  }
  else {
    uVar22 = 0;
  }
LAB_00430714:
  if (bVar4) {
    *param_2 = 1;
    if (bVar2) {
      return 0xfffffffe;
    }
  }
  else if (bVar2) goto LAB_004305fc;
  iVar7 = *(int *)(uVar22 + 0x18);
  puVar24 = *(undefined8 **)(uVar22 + 0x10);
  if (1 < iVar7) {
    iVar11 = 1;
    puVar25 = puVar24;
    do {
      puVar23 = puVar25 + 4;
      plVar14 = (long *)FUN_004316c0(*puVar23);
      iVar7 = FUN_0040caf8(plVar14[1]);
      if (0 < iVar7) {
        iVar7 = 0;
        do {
          lVar13 = FUN_0040cb0c(plVar14[1],iVar7);
          iVar8 = FUN_0040caf8(puVar25[1]);
          if (iVar8 < 1) {
LAB_004308bc:
            if ((puVar25[2] != 0) &&
               (lVar13 = FUN_004311dc(puVar23,lVar13,puVar25[2],uVar22,0), lVar13 == 0))
            goto LAB_00431058;
          }
          else {
            bVar2 = false;
            iVar8 = 0;
            do {
              uVar12 = FUN_0040cb0c(puVar25[1],iVar8);
              iVar9 = FUN_00431404(puVar25,uVar12,*(undefined8 *)(lVar13 + 8));
              if (iVar9 != 0) {
                lVar15 = FUN_004311dc(puVar23,lVar13,uVar12,uVar22,0);
                if (lVar15 == 0) goto LAB_00431058;
                bVar2 = true;
              }
              iVar8 = iVar8 + 1;
              iVar9 = FUN_0040caf8(puVar25[1]);
            } while (iVar8 < iVar9);
            if (!bVar2) goto LAB_004308bc;
          }
          iVar7 = iVar7 + 1;
          iVar8 = FUN_0040caf8(plVar14[1]);
        } while (iVar7 < iVar8);
      }
      if ((*(byte *)((long)puVar25 + 0x39) >> 1 & 1) == 0) {
        iVar7 = FUN_0040caf8(puVar25[1]);
        if (0 < iVar7) {
          iVar7 = 0;
          do {
            puVar24 = (undefined8 *)FUN_0040cb0c(puVar25[1],iVar7);
            if (((*(byte *)((long)puVar25 + 0x19) >> 2 & 1) == 0) && ((*(byte *)*puVar24 & 1) != 0))
            {
              uVar12 = *(undefined8 *)((byte *)*puVar24 + 0x18);
              iVar8 = *(int *)(puVar24 + 2);
              iVar9 = FUN_0040caf8(uVar12);
              if ((iVar8 != iVar9) && (iVar8 = FUN_0040caf8(uVar12), 0 < iVar8)) {
                iVar8 = 0;
                do {
                  lVar13 = FUN_0040cb0c(uVar12,iVar8);
                  lVar15 = FUN_00431128(puVar23,puVar24,lVar13);
                  if (lVar15 == 0) {
                    if (lVar13 == 0) {
                      lVar13 = *(long *)((uint *)*puVar24 + 2);
                    }
                    puVar16 = (uint *)FUN_00431520(0,lVar13,*(uint *)*puVar24 & 0x10);
                    if (puVar16 == (uint *)0x0) goto LAB_00431058;
                    lVar13 = *plVar14;
                    *puVar16 = *puVar16 | 4;
                    *(undefined8 *)(puVar16 + 4) = *(undefined8 *)(lVar13 + 0x10);
                    lVar13 = FUN_004311dc(puVar23,puVar16,puVar24,uVar22,1);
                    if (lVar13 == 0) goto LAB_00431094;
                  }
                  iVar8 = iVar8 + 1;
                  iVar9 = FUN_0040caf8(uVar12);
                } while (iVar8 < iVar9);
              }
            }
            else if (*(int *)(puVar24 + 2) == 0) {
              puVar16 = (uint *)FUN_00431520(0,*(undefined8 *)((uint *)*puVar24 + 2),
                                             *(uint *)*puVar24 & 0x10);
              if (puVar16 == (uint *)0x0) goto LAB_00431058;
              lVar13 = *plVar14;
              *puVar16 = *puVar16 | 4;
              *(undefined8 *)(puVar16 + 4) = *(undefined8 *)(lVar13 + 0x10);
              lVar13 = FUN_004311dc(puVar23,puVar16,puVar24,uVar22,1);
              if (lVar13 == 0) {
LAB_00431094:
                FUN_004314bc(puVar16);
                goto LAB_00431058;
              }
            }
            iVar7 = iVar7 + 1;
            iVar8 = FUN_0040caf8(puVar25[1]);
          } while (iVar7 < iVar8);
        }
        if ((puVar25[2] != 0) &&
           (lVar13 = FUN_004311dc(puVar23,*plVar14,puVar25[2],uVar22,0), lVar13 == 0))
        goto LAB_00431058;
      }
      puVar21 = puVar23;
      if ((*(byte *)((long)puVar25 + 0x39) >> 2 & 1) != 0) {
        uVar12 = puVar25[5];
        iVar7 = FUN_0040caf8(uVar12);
        if (0 < iVar7) {
          uVar10 = iVar7 + 1;
          do {
            puVar24 = (undefined8 *)FUN_0040cb0c(uVar12,uVar10 - 2);
            if ((*(byte *)*puVar24 & 3) != 0) {
              *(int *)(puVar24[1] + 0x10) = *(int *)(puVar24[1] + 0x10) + -1;
              FUN_003c86b4(puVar24,"crypto/x509/pcy_tree.c",0x19f);
              FUN_0040c404(uVar12,uVar10 - 2);
            }
            uVar10 = uVar10 - 1;
          } while (1 < uVar10);
        }
      }
      do {
        while( true ) {
          uVar12 = puVar21[-3];
          iVar7 = FUN_0040caf8(uVar12);
          if (0 < iVar7) {
            uVar10 = iVar7 + 1;
            do {
              lVar13 = FUN_0040cb0c(uVar12,uVar10 - 2);
              if (*(int *)(lVar13 + 0x10) == 0) {
                *(int *)(*(long *)(lVar13 + 8) + 0x10) = *(int *)(*(long *)(lVar13 + 8) + 0x10) + -1
                ;
                FUN_003c86b4(lVar13,"crypto/x509/pcy_tree.c",0x1ac);
                FUN_0040c404(uVar12,uVar10 - 2);
              }
              uVar10 = uVar10 - 1;
            } while (1 < uVar10);
          }
          lVar13 = puVar21[-2];
          puVar24 = puVar21 + -4;
          if (lVar13 != 0) break;
LAB_00430b24:
          puVar21 = puVar24;
          if (puVar24 == *(undefined8 **)(uVar22 + 0x10)) {
            FUN_004304ac(uVar22);
            uVar10 = 1;
            if (bVar4) {
              uVar10 = 0xfffffffe;
            }
            return uVar10;
          }
        }
        if (*(int *)(lVar13 + 0x10) == 0) {
          lVar15 = *(long *)(lVar13 + 8);
          if (lVar15 != 0) {
            *(int *)(lVar15 + 0x10) = *(int *)(lVar15 + 0x10) + -1;
          }
          FUN_003c86b4(lVar13,"crypto/x509/pcy_tree.c",0x1b3);
          puVar21[-2] = 0;
          goto LAB_00430b24;
        }
        puVar21 = puVar24;
      } while (puVar24 != *(undefined8 **)(uVar22 + 0x10));
      iVar7 = *(int *)(uVar22 + 0x18);
      iVar11 = iVar11 + 1;
      puVar25 = puVar23;
    } while (iVar11 < iVar7);
  }
  plVar14 = (long *)(uVar22 + 0x28);
  lVar13 = puVar24[(long)iVar7 * 4 + -2];
  plVar26 = plVar14;
  if (lVar13 != 0) {
    lVar15 = *plVar14;
    if (lVar15 == 0) {
      lVar15 = FUN_004310bc();
      *plVar14 = lVar15;
      if (lVar15 == 0) goto LAB_00431058;
    }
    iVar7 = FUN_0040c48c(lVar15,lVar13);
    if ((iVar7 < 0) && (iVar7 = FUN_0040c89c(*plVar14,lVar13), iVar7 == 0)) goto LAB_00431058;
    plVar26 = &local_68;
  }
  if (1 < *(int *)(uVar22 + 0x18)) {
    lVar13 = *(long *)(uVar22 + 0x10);
    iVar7 = 1;
    do {
      lVar15 = *(long *)(lVar13 + 0x10);
      if (lVar15 == 0) break;
      iVar11 = FUN_0040caf8(*(undefined8 *)(lVar13 + 0x28));
      if (0 < iVar11) {
        iVar11 = 0;
        do {
          lVar17 = FUN_0040cb0c(*(undefined8 *)(lVar13 + 0x28),iVar11);
          if (*(long *)(lVar17 + 8) == lVar15) {
            lVar18 = *plVar26;
            if (lVar18 == 0) {
              lVar18 = FUN_004310bc();
              *plVar26 = lVar18;
              if (lVar18 != 0) goto LAB_00430dc0;
            }
            else {
LAB_00430dc0:
              iVar8 = FUN_0040c48c(lVar18,lVar17);
              if ((-1 < iVar8) || (iVar8 = FUN_0040c89c(*plVar26,lVar17), iVar8 != 0))
              goto LAB_00430d7c;
            }
            if (plVar26 == &local_68) {
              FUN_0040bd78(local_68);
              local_68 = 0;
            }
            goto LAB_00431058;
          }
LAB_00430d7c:
          iVar11 = iVar11 + 1;
          iVar8 = FUN_0040caf8(*(undefined8 *)(lVar13 + 0x28));
        } while (iVar11 < iVar8);
      }
      iVar7 = iVar7 + 1;
      lVar13 = lVar13 + 0x20;
    } while (iVar7 < *(int *)(uVar22 + 0x18));
  }
  if (plVar26 != &local_68) {
    local_68 = *plVar14;
  }
  FUN_0040cc10(local_68);
  lVar13 = local_68;
  iVar7 = FUN_0040caf8(param_4);
  if (0 < iVar7) {
    plVar14 = *(long **)(*(long *)(uVar22 + 0x10) + (long)*(int *)(uVar22 + 0x18) * 0x20 + -0x10);
    iVar7 = FUN_0040caf8(param_4);
    if (0 < iVar7) {
      iVar7 = 0;
      do {
        FUN_0040cb0c(param_4,iVar7);
        iVar11 = FUN_003dd5b4();
        if (iVar11 == 0x2ea) {
          bVar2 = false;
          *(uint *)(uVar22 + 0x38) = *(uint *)(uVar22 + 0x38) | 2;
          goto joined_r0x004310b4;
        }
        iVar7 = iVar7 + 1;
        iVar11 = FUN_0040caf8(param_4);
      } while (iVar7 < iVar11);
    }
    iVar7 = FUN_0040caf8(param_4);
    if (0 < iVar7) {
      iVar7 = 0;
      if (plVar14 == (long *)0x0) {
        do {
          uVar12 = FUN_0040cb0c(param_4,iVar7);
          puVar24 = (undefined8 *)FUN_004310e4(lVar13,uVar12);
          if (puVar24 != (undefined8 *)0x0) {
            lVar15 = *(long *)(uVar22 + 0x30);
            if (lVar15 == 0) {
              lVar15 = FUN_0040bf0c();
              *(long *)(uVar22 + 0x30) = lVar15;
              if (lVar15 == 0) goto LAB_00430ff8;
            }
            iVar11 = FUN_0040c89c(lVar15,puVar24);
            if (iVar11 == 0) goto LAB_00430ff8;
          }
          iVar7 = iVar7 + 1;
          iVar11 = FUN_0040caf8(param_4);
        } while (iVar7 < iVar11);
      }
      else {
        do {
          uVar12 = FUN_0040cb0c(param_4,iVar7);
          puVar24 = (undefined8 *)FUN_004310e4(lVar13,uVar12);
          if (puVar24 == (undefined8 *)0x0) {
            puVar19 = (undefined4 *)FUN_00431520(0,uVar12,*(uint *)*plVar14 & 0x10);
            if (puVar19 == (undefined4 *)0x0) goto LAB_0043101c;
            lVar15 = *plVar14;
            lVar17 = plVar14[1];
            *puVar19 = 0xc;
            *(undefined8 *)(puVar19 + 4) = *(undefined8 *)(lVar15 + 0x10);
            puVar24 = (undefined8 *)FUN_004311dc(0,puVar19,lVar17,uVar22,1);
            if (puVar24 == (undefined8 *)0x0) {
              FUN_004314bc(puVar19);
              bVar2 = true;
              goto joined_r0x004310b4;
            }
          }
          lVar15 = *(long *)(uVar22 + 0x30);
          if (lVar15 == 0) {
            lVar15 = FUN_0040bf0c();
            *(long *)(uVar22 + 0x30) = lVar15;
            if (lVar15 == 0) goto LAB_00430ff8;
          }
          iVar11 = FUN_0040c89c(lVar15,puVar24);
          if (iVar11 == 0) goto LAB_00430ff8;
          iVar7 = iVar7 + 1;
          iVar11 = FUN_0040caf8(param_4);
        } while (iVar7 < iVar11);
      }
    }
  }
  bVar2 = false;
  goto joined_r0x004310b4;
LAB_00430ff8:
  if (((byte *)*puVar24 != (byte *)0x0) && ((*(byte *)*puVar24 >> 3 & 1) != 0)) {
    FUN_003c86b4(puVar24,"crypto/x509/pcy_tree.c",0x26f);
  }
LAB_0043101c:
  bVar2 = true;
joined_r0x004310b4:
  if (plVar26 == &local_68) {
    FUN_0040bd78(local_68);
  }
  if (!bVar2) {
    *param_1 = uVar22;
    if (bVar4) {
      FUN_00431c50(uVar22);
      iVar7 = FUN_0040caf8();
      if (iVar7 < 1) {
        return 0xfffffffe;
      }
    }
    return 1;
  }
LAB_00431058:
  FUN_004304ac(uVar22);
  return 0;
}


// ===== 004310bc  FUN_004310bc =====

void FUN_004310bc(void)

{
  FUN_0040bfd0(FUN_004310c8);
  return;
}


// ===== 004310c8  FUN_004310c8 =====

void FUN_004310c8(undefined8 *param_1,undefined8 *param_2)

{
  FUN_003de61c(*(undefined8 *)(*(long *)*param_1 + 8),*(undefined8 *)(*(long *)*param_2 + 8));
  return;
}


// ===== 004310e4  FUN_004310e4 =====

void FUN_004310e4(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 *local_58 [3];
  undefined1 auStack_40 [8];
  undefined8 local_38;
  
  local_58[0] = auStack_40;
  local_38 = param_2;
  uVar1 = FUN_0040c48c(param_1,local_58);
  FUN_0040cb0c(param_1,uVar1);
  return;
}


// ===== 00431128  FUN_00431128 =====

long * FUN_00431128(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  
  iVar1 = FUN_0040caf8(*(undefined8 *)(param_1 + 8));
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      plVar3 = (long *)FUN_0040cb0c(*(undefined8 *)(param_1 + 8),iVar1);
      if (plVar3[1] == param_2) {
        iVar2 = FUN_003de61c(*(undefined8 *)(*plVar3 + 8),param_3);
        if (iVar2 == 0) {
          return plVar3;
        }
      }
      iVar1 = iVar1 + 1;
      iVar2 = FUN_0040caf8(*(undefined8 *)(param_1 + 8));
    } while (iVar1 < iVar2);
  }
  return (long *)0x0;
}


// ===== 004311dc  FUN_004311dc =====

long * FUN_004311dc(long param_1,long param_2,long param_3,ulong *param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  
  if ((param_4[1] != 0) && (param_4[1] <= *param_4)) {
    return (long *)0x0;
  }
  plVar3 = (long *)FUN_003c8474(0x18,"crypto/x509/pcy_node.c",0x47);
  if (plVar3 == (long *)0x0) {
    return (long *)0x0;
  }
  *plVar3 = param_2;
  plVar3[1] = param_3;
  if (param_1 != 0) {
    iVar2 = FUN_003dd5b4(*(undefined8 *)(param_2 + 8));
    if (iVar2 != 0x2ea) {
      lVar4 = *(long *)(param_1 + 8);
      if (lVar4 == 0) {
        lVar4 = FUN_0040bfd0(FUN_004310c8);
        *(long *)(param_1 + 8) = lVar4;
        if (lVar4 != 0) goto LAB_00431280;
        FUN_00379868();
        FUN_0037995c("crypto/x509/pcy_node.c",0x56,"ossl_policy_level_add_node");
        uVar1 = 0x8000b;
      }
      else {
LAB_00431280:
        iVar2 = FUN_0040c89c(lVar4,plVar3);
        if (iVar2 != 0) goto LAB_00431298;
        FUN_00379868();
        FUN_0037995c("crypto/x509/pcy_node.c",0x5a,"ossl_policy_level_add_node");
        uVar1 = 0x8000f;
      }
      FUN_00379a5c(0x22,uVar1,0);
      goto LAB_004313c8;
    }
    if (*(long *)(param_1 + 0x10) != 0) goto LAB_004313c8;
    *(long **)(param_1 + 0x10) = plVar3;
  }
LAB_00431298:
  if (param_5 == 0) goto LAB_004312c8;
  uVar5 = param_4[4];
  if (uVar5 == 0) {
    uVar5 = FUN_0040bf0c();
    param_4[4] = uVar5;
    if (uVar5 != 0) goto LAB_004312b4;
    uVar7 = 100;
    plVar6 = (long *)0x0;
  }
  else {
LAB_004312b4:
    iVar2 = FUN_0040c89c(uVar5,param_2);
    if (iVar2 != 0) {
LAB_004312c8:
      *param_4 = *param_4 + 1;
      if (param_3 != 0) {
        *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 1;
      }
      return plVar3;
    }
    uVar7 = 0x68;
    plVar6 = plVar3;
  }
  FUN_00379868(plVar6);
  FUN_0037995c("crypto/x509/pcy_node.c",uVar7,"ossl_policy_level_add_node");
  FUN_00379a5c(0x22,0x8000f,0);
  if (param_1 != 0) {
    if (*(long **)(param_1 + 0x10) == plVar3) {
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    else {
      FUN_0040ca00(*(undefined8 *)(param_1 + 8));
    }
  }
LAB_004313c8:
  FUN_003c86b4(plVar3,"crypto/x509/pcy_node.c",0x82);
  return (long *)0x0;
}


// ===== 004313f4  FUN_004313f4 =====

void FUN_004313f4(undefined8 param_1)

{
  FUN_003c86b4(param_1,"crypto/x509/pcy_node.c",0x82);
  return;
}


// ===== 00431404  FUN_00431404 =====

bool FUN_00431404(long param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  byte *pbVar4;
  
  pbVar4 = (byte *)*param_2;
  if (((*(byte *)(param_1 + 0x19) >> 2 & 1) == 0) && ((*pbVar4 & 3) != 0)) {
    iVar1 = FUN_0040caf8(*(undefined8 *)(pbVar4 + 0x18));
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        uVar3 = FUN_0040cb0c(*(undefined8 *)(pbVar4 + 0x18),iVar1);
        iVar2 = FUN_003de61c(uVar3,param_3);
        if (iVar2 == 0) {
          return true;
        }
        iVar1 = iVar1 + 1;
        iVar2 = FUN_0040caf8(*(undefined8 *)(pbVar4 + 0x18));
      } while (iVar1 < iVar2);
    }
    return false;
  }
  iVar1 = FUN_003de61c(*(undefined8 *)(pbVar4 + 8),param_3);
  return iVar1 == 0;
}


// ===== 004314bc  FUN_004314bc =====

void FUN_004314bc(byte *param_1)

{
  if (param_1 != (byte *)0x0) {
    FUN_0039a0f4(*(undefined8 *)(param_1 + 8));
    if ((*param_1 >> 2 & 1) == 0) {
      FUN_0040ca6c(*(undefined8 *)(param_1 + 0x10),PTR_FUN_007a1c68);
    }
    FUN_0040ca6c(*(undefined8 *)(param_1 + 0x18),PTR_FUN_007a19a8);
    FUN_003c86b4(param_1,"crypto/x509/pcy_data.c",0x1b);
    return;
  }
  return;
}


// ===== 00431520  FUN_00431520 =====

undefined4 * FUN_00431520(undefined8 *param_1,long param_2,int param_3)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_1 == (undefined8 *)0x0 && param_2 == 0) {
    return (undefined4 *)0x0;
  }
  if (param_2 == 0) {
    lVar1 = 0;
    puVar2 = (undefined4 *)FUN_003c8474(0x20,"crypto/x509/pcy_data.c",0x34);
  }
  else {
    lVar1 = FUN_003de510(param_2);
    if (lVar1 == 0) {
      return (undefined4 *)0x0;
    }
    puVar2 = (undefined4 *)FUN_003c8474(0x20,"crypto/x509/pcy_data.c",0x34);
  }
  if (puVar2 != (undefined4 *)0x0) {
    lVar3 = FUN_0040bf0c();
    *(long *)(puVar2 + 6) = lVar3;
    if (lVar3 == 0) {
      FUN_003c86b4(puVar2,"crypto/x509/pcy_data.c",0x3b);
      FUN_0039a0f4(lVar1);
      FUN_00379868();
      FUN_0037995c("crypto/x509/pcy_data.c",0x3d,"ossl_policy_data_new");
      FUN_00379a5c(0x22,0x8000f,0);
      return (undefined4 *)0x0;
    }
    if (param_3 != 0) {
      *puVar2 = 0x10;
    }
    if (lVar1 == 0) {
      uVar4 = *param_1;
      *param_1 = 0;
      *(undefined8 *)(puVar2 + 2) = uVar4;
    }
    else {
      *(long *)(puVar2 + 2) = lVar1;
      if (param_1 == (undefined8 *)0x0) {
        return puVar2;
      }
    }
    uVar4 = param_1[1];
    param_1[1] = 0;
    *(undefined8 *)(puVar2 + 4) = uVar4;
    return puVar2;
  }
  FUN_0039a0f4(lVar1);
  return (undefined4 *)0x0;
}


// ===== 00431670  FUN_00431670 =====

void FUN_00431670(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_004314bc(*param_1);
    FUN_0040ca6c(param_1[1],FUN_004314bc);
    FUN_003c86b4(param_1,"crypto/x509/pcy_cache.c",0xb8);
    return;
  }
  return;
}


// ===== 004316c0  FUN_004316c0 =====

long FUN_004316c0(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  bool bVar9;
  int iVar10;
  long *plVar11;
  int local_64;
  
  if (*(long *)(param_1 + 0x108) != 0) {
    return *(long *)(param_1 + 0x108);
  }
  iVar1 = FUN_003d518c(*(undefined8 *)(param_1 + 0x148));
  if (iVar1 == 0) {
    return 0;
  }
  if ((*(long *)(param_1 + 0x108) != 0) ||
     (puVar3 = (undefined8 *)FUN_003c83a4(0x28,"crypto/x509/pcy_cache.c",0x5e),
     puVar3 == (undefined8 *)0x0)) goto LAB_00431a04;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[3] = 0xffffffffffffffff;
  puVar3[4] = 0xffffffffffffffff;
  *(undefined8 **)(param_1 + 0x108) = puVar3;
  puVar3[2] = 0xffffffffffffffff;
  plVar4 = (long *)FUN_004276a8(param_1,0x191,&local_64,0);
  if (plVar4 == (long *)0x0) {
    if (local_64 != -1) goto LAB_004319e4;
LAB_004317b0:
    lVar7 = FUN_004276a8(param_1,0x59,&local_64,0);
    if (lVar7 == 0) {
      if (local_64 == -1) goto LAB_00431a04;
      goto LAB_004319e4;
    }
    plVar11 = *(long **)(param_1 + 0x108);
    iVar1 = FUN_0040caf8();
    if (iVar1 < 1) {
      lVar6 = 0;
      iVar1 = 0;
LAB_00431924:
      bVar9 = true;
LAB_00431928:
      FUN_004314bc(lVar6);
      FUN_0040ca6c(lVar7,PTR_FUN_007a1c60);
      if (bVar9) goto LAB_00431944;
      local_64 = 1;
    }
    else {
      uVar8 = 0x8000f;
      lVar6 = FUN_0040bfd0(FUN_00431a9c);
      plVar11[1] = lVar6;
      if (lVar6 != 0) {
        iVar10 = 0;
        do {
          uVar5 = FUN_0040cb0c(lVar7,iVar10);
          lVar6 = FUN_00431520(uVar5,0,local_64);
          if (lVar6 == 0) {
            uVar8 = 0x8000b;
            uVar5 = 0x2d;
            goto LAB_004318d0;
          }
          iVar2 = FUN_003dd5b4(*(undefined8 *)(lVar6 + 8));
          if (iVar2 == 0x2ea) {
            if (*plVar11 != 0) goto LAB_00431914;
            *plVar11 = lVar6;
          }
          else {
            iVar2 = FUN_0040c48c(plVar11[1],lVar6);
            if (-1 < iVar2) {
LAB_00431914:
              iVar1 = -1;
              *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 0x800;
              goto LAB_00431924;
            }
            iVar2 = FUN_0040c89c(plVar11[1],lVar6);
            if (iVar2 == 0) {
              FUN_00379868();
              FUN_0037995c("crypto/x509/pcy_cache.c",0x3d,"policy_cache_create");
              FUN_00379a5c(0x22,0x8000f,0);
              iVar1 = 0;
              goto LAB_00431924;
            }
          }
          iVar10 = iVar10 + 1;
        } while (iVar1 != iVar10);
        FUN_0040cc10(plVar11[1]);
        lVar6 = 0;
        bVar9 = false;
        iVar1 = 1;
        goto LAB_00431928;
      }
      uVar5 = 0x26;
LAB_004318d0:
      FUN_00379868();
      FUN_0037995c("crypto/x509/pcy_cache.c",uVar5,"policy_cache_create");
      FUN_00379a5c(0x22,uVar8,0);
      FUN_0040ca6c(lVar7,PTR_FUN_007a1c60);
      iVar1 = 0;
LAB_00431944:
      FUN_0040ca6c(plVar11[1],PTR_FUN_007a1c38);
      plVar11[1] = 0;
      local_64 = iVar1;
      if (iVar1 < 1) goto LAB_00431a04;
    }
    lVar7 = FUN_004276a8(param_1,0x2eb,&local_64,0);
    if (lVar7 == 0) {
      if (local_64 == -1) goto LAB_004319a0;
      goto LAB_004319e4;
    }
    local_64 = FUN_00431ab0(param_1,lVar7);
    if (local_64 < 1) goto LAB_004319e4;
LAB_004319a0:
    lVar7 = FUN_004276a8(param_1,0x2ec,&local_64,0);
    if (lVar7 != 0) {
      if (*(int *)(lVar7 + 4) != 0x102) {
        uVar5 = FUN_0038dea4(lVar7);
        puVar3[2] = uVar5;
        goto LAB_004319f4;
      }
      goto LAB_004319e8;
    }
    if (local_64 != -1) goto LAB_004319e8;
  }
  else {
    if (*plVar4 == 0) {
      lVar7 = plVar4[1];
      if (lVar7 != 0) goto LAB_00431798;
    }
    else if (*(int *)(*plVar4 + 4) != 0x102) {
      uVar5 = FUN_0038dea4();
      lVar7 = plVar4[1];
      puVar3[3] = uVar5;
      if (lVar7 == 0) goto LAB_004317b0;
LAB_00431798:
      if (*(int *)(lVar7 + 4) != 0x102) {
        uVar5 = FUN_0038dea4(lVar7);
        puVar3[4] = uVar5;
        goto LAB_004317b0;
      }
    }
LAB_004319e4:
    lVar7 = 0;
LAB_004319e8:
    *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 0x800;
  }
LAB_004319f4:
  FUN_0041dd5c(plVar4);
  thunk_FUN_0038eddc(lVar7);
LAB_00431a04:
  FUN_003d519c(*(undefined8 *)(param_1 + 0x148));
  return *(long *)(param_1 + 0x108);
}


// ===== 00431a58  FUN_00431a58 =====

void FUN_00431a58(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  
  local_38 = param_2;
  uVar1 = FUN_0040c48c(*(undefined8 *)(param_1 + 8),auStack_40);
  FUN_0040cb0c(*(undefined8 *)(param_1 + 8),uVar1);
  return;
}


// ===== 00431a9c  FUN_00431a9c =====

void FUN_00431a9c(long *param_1,long *param_2)

{
  FUN_003de61c(*(undefined8 *)(*param_1 + 8),*(undefined8 *)(*param_2 + 8));
  return;
}


// ===== 00431ab0  FUN_00431ab0 =====

undefined8 FUN_00431ab0(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  uint *puVar5;
  long *plVar6;
  undefined8 uVar7;
  
  plVar6 = *(long **)(param_1 + 0x108);
  iVar2 = FUN_0040caf8(param_2);
  if (iVar2 == 0) {
LAB_00431bc8:
    uVar7 = 0xffffffff;
  }
  else {
    iVar2 = FUN_0040caf8(param_2);
    if (0 < iVar2) {
      iVar2 = 0;
      do {
        puVar4 = (undefined8 *)FUN_0040cb0c(param_2,iVar2);
        iVar3 = FUN_003dd5b4(puVar4[1]);
        if ((iVar3 == 0x2ea) || (iVar3 = FUN_003dd5b4(*puVar4), iVar3 == 0x2ea)) goto LAB_00431bc8;
        puVar5 = (uint *)FUN_00431a58(plVar6,*puVar4);
        if (puVar5 == (uint *)0x0) {
          if ((uint *)*plVar6 != (uint *)0x0) {
            puVar5 = (uint *)FUN_00431520(0,*puVar4,*(uint *)*plVar6 & 0x10);
            if (puVar5 != (uint *)0x0) {
              lVar1 = plVar6[1];
              uVar7 = *(undefined8 *)(*plVar6 + 0x10);
              *puVar5 = *puVar5 | 6;
              *(undefined8 *)(puVar5 + 4) = uVar7;
              iVar3 = FUN_0040c89c(lVar1);
              if (iVar3 == 0) {
                FUN_004314bc(puVar5);
              }
              else {
                iVar3 = FUN_0040c89c(*(undefined8 *)(puVar5 + 6),puVar4[1]);
                if (iVar3 != 0) goto LAB_00431ba8;
              }
            }
            goto LAB_00431bfc;
          }
        }
        else {
          *puVar5 = *puVar5 | 1;
          iVar3 = FUN_0040c89c(*(undefined8 *)(puVar5 + 6),puVar4[1]);
          if (iVar3 == 0) {
LAB_00431bfc:
            uVar7 = 0;
            goto LAB_00431bcc;
          }
LAB_00431ba8:
          puVar4[1] = 0;
        }
        iVar2 = iVar2 + 1;
        iVar3 = FUN_0040caf8(param_2);
      } while (iVar2 < iVar3);
    }
    uVar7 = 1;
  }
LAB_00431bcc:
  FUN_0040ca6c(param_2,PTR_FUN_007a1ca8);
  return uVar7;
}


// ===== 00431c04  FUN_00431c04 =====

ulong FUN_00431c04(ulong param_1)

{
  if (param_1 != 0) {
    param_1 = (ulong)*(uint *)(param_1 + 0x18);
  }
  return param_1;
}


// ===== 00431c10  FUN_00431c10 =====

long FUN_00431c10(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if ((param_1 != 0) && (-1 < (int)param_2)) {
    if (*(int *)(param_1 + 0x18) <= (int)param_2) {
      return 0;
    }
    lVar1 = *(long *)(param_1 + 0x10) + (ulong)param_2 * 0x20;
  }
  return lVar1;
}


// ===== 00431c44  FUN_00431c44 =====

long FUN_00431c44(long param_1)

{
  if (param_1 != 0) {
    param_1 = *(long *)(param_1 + 0x28);
  }
  return param_1;
}


// ===== 00431c50  FUN_00431c50 =====

long FUN_00431c50(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = 0x30;
    if ((*(byte *)(param_1 + 0x38) & 2) != 0) {
      lVar1 = 0x28;
    }
    param_1 = *(long *)(param_1 + lVar1);
  }
  return param_1;
}


// ===== 00431c70  FUN_00431c70 =====

uint FUN_00431c70(long param_1)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    uVar2 = (uint)(*(long *)(param_1 + 0x10) != 0);
    if (*(long *)(param_1 + 8) != 0) {
      iVar1 = FUN_0040caf8();
      uVar2 = iVar1 + uVar2;
    }
    return uVar2;
  }
  return 0;
}


// ===== 00431cbc  FUN_00431cbc =====

long FUN_00431cbc(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    if ((int)param_2 == 0) {
      return *(long *)(param_1 + 0x10);
    }
    param_2 = (ulong)((int)param_2 - 1);
  }
  lVar1 = FUN_0040cb0c(*(undefined8 *)(param_1 + 8),param_2);
  return lVar1;
}


// ===== 00431ce4  FUN_00431ce4 =====

long * FUN_00431ce4(long *param_1)

{
  if (param_1 != (long *)0x0) {
    param_1 = *(long **)(*param_1 + 8);
  }
  return param_1;
}


// ===== 00431cf4  FUN_00431cf4 =====

long * FUN_00431cf4(long *param_1)

{
  if (param_1 != (long *)0x0) {
    param_1 = *(long **)(*param_1 + 0x10);
  }
  return param_1;
}


// ===== 00431d04  FUN_00431d04 =====

long FUN_00431d04(long param_1)

{
  if (param_1 != 0) {
    param_1 = *(long *)(param_1 + 8);
  }
  return param_1;
}


// ===== 00431d10  FUN_00431d10 =====

void FUN_00431d10(void)

{
  long lVar1;
  
  lVar1 = FUN_003c8474(0x70,"crypto/x509/x509_vpm.c",0x56);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x2c) = 0xffffffff;
    *(undefined8 *)(lVar1 + 0x24) = 0xffffffff00000000;
  }
  return;
}


// ===== 00431d48  FUN_00431d48 =====

void FUN_00431d48(long param_1)

{
  if (param_1 != 0) {
    FUN_0040ca6c(*(undefined8 *)(param_1 + 0x30),PTR_FUN_007a19a8);
    FUN_0040ca6c(*(undefined8 *)(param_1 + 0x38),FUN_00431dd4);
    FUN_003c86b4(*(undefined8 *)(param_1 + 0x48),"crypto/x509/x509_vpm.c",0x66);
    FUN_003c86b4(*(undefined8 *)(param_1 + 0x50),"crypto/x509/x509_vpm.c",0x67);
    FUN_003c86b4(*(undefined8 *)(param_1 + 0x60),"crypto/x509/x509_vpm.c",0x68);
    FUN_003c86b4(param_1,"crypto/x509/x509_vpm.c",0x69);
    return;
  }
  return;
}


// ===== 00431dd4  FUN_00431dd4 =====

void FUN_00431dd4(undefined8 param_1)

{
  FUN_003c86b4(param_1,"crypto/x509/x509_vpm.c",0x21);
  return;
}


// ===== 00431de4  FUN_00431de4 =====

undefined8 FUN_00431de4(long param_1,long param_2)

{
  uint uVar1;
  void *__dest;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  char *__s;
  size_t __n;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = *(uint *)(param_2 + 0x10) | *(uint *)(param_1 + 0x10);
  if ((uVar1 >> 4 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if ((uVar1 >> 3 & 1) != 0) {
    return 1;
  }
  iVar4 = *(int *)(param_2 + 0x20);
  if ((uVar1 >> 1 & 1) == 0) {
    if (iVar4 == 0) {
LAB_00431e6c:
      iVar4 = *(int *)(param_2 + 0x24);
      if (iVar4 != 0) {
        if ((uVar1 & 1) == 0) goto LAB_00431e78;
LAB_00431e80:
        *(int *)(param_1 + 0x24) = iVar4;
      }
    }
    else {
      if (((uVar1 & 1) != 0) || (*(int *)(param_1 + 0x20) == 0)) {
        *(int *)(param_1 + 0x20) = iVar4;
        goto LAB_00431e6c;
      }
      iVar4 = *(int *)(param_2 + 0x24);
      if (iVar4 != 0) {
LAB_00431e78:
        if (*(int *)(param_1 + 0x24) == 0) goto LAB_00431e80;
      }
    }
    if (*(int *)(param_2 + 0x28) == -1) {
LAB_00431eb4:
      iVar4 = *(int *)(param_2 + 0x2c);
      if (iVar4 != -1) {
        if ((uVar1 & 1) == 0) goto LAB_00431ec4;
LAB_00431ed0:
        *(int *)(param_1 + 0x2c) = iVar4;
      }
    }
    else {
      if (((uVar1 & 1) != 0) || (*(int *)(param_1 + 0x28) == -1)) {
        *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
        goto LAB_00431eb4;
      }
      iVar4 = *(int *)(param_2 + 0x2c);
      if (iVar4 != -1) {
LAB_00431ec4:
        if (*(int *)(param_1 + 0x2c) == -1) goto LAB_00431ed0;
      }
    }
    uVar5 = *(ulong *)(param_1 + 0x18);
    if (((uint)uVar5 >> 1 & 1) == 0) goto LAB_00431f10;
    if ((uVar1 >> 2 & 1) != 0) goto LAB_00431f24;
LAB_00431ee0:
    lVar3 = *(long *)(param_2 + 0x30);
    *(ulong *)(param_1 + 0x18) = uVar5 | *(ulong *)(param_2 + 0x18);
    if ((uVar1 >> 1 & 1) != 0) goto LAB_00431f40;
LAB_00431ef4:
    if (lVar3 == 0) {
LAB_00431f64:
      iVar4 = *(int *)(param_2 + 0x40);
      if (iVar4 != 0) {
        if ((uVar1 & 1) == 0) goto LAB_00431f70;
LAB_00431f78:
        *(int *)(param_1 + 0x40) = iVar4;
      }
    }
    else {
      if (((uVar1 & 1) != 0) || (*(long *)(param_1 + 0x30) == 0)) {
        uVar2 = FUN_004320bc(param_1);
        if ((int)uVar2 == 0) {
          return uVar2;
        }
        goto LAB_00431f64;
      }
      iVar4 = *(int *)(param_2 + 0x40);
      if (iVar4 != 0) {
LAB_00431f70:
        if (*(int *)(param_1 + 0x40) == 0) goto LAB_00431f78;
      }
    }
    if (*(long *)(param_2 + 0x38) == 0) goto LAB_00431fd8;
    if (((uVar1 & 1) != 0) || (*(long *)(param_1 + 0x38) == 0)) goto LAB_00431f9c;
    __s = *(char **)(param_2 + 0x50);
    if (__s != (char *)0x0) goto LAB_00431fe4;
  }
  else {
    *(int *)(param_1 + 0x20) = iVar4;
    uVar5 = *(ulong *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
LAB_00431f10:
    uVar2 = *(undefined8 *)(param_2 + 8);
    uVar5 = uVar5 & 0xfffffffffffffffd;
    *(ulong *)(param_1 + 0x18) = uVar5;
    *(undefined8 *)(param_1 + 8) = uVar2;
    if ((uVar1 >> 2 & 1) == 0) goto LAB_00431ee0;
LAB_00431f24:
    *(undefined8 *)(param_1 + 0x18) = 0;
    lVar3 = *(long *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    if ((uVar1 >> 1 & 1) == 0) goto LAB_00431ef4;
LAB_00431f40:
    uVar2 = FUN_004320bc(param_1);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
LAB_00431f9c:
    FUN_0040ca6c(*(undefined8 *)(param_1 + 0x38),FUN_00431dd4);
    *(undefined8 *)(param_1 + 0x38) = 0;
    if (*(long *)(param_2 + 0x38) != 0) {
      lVar3 = FUN_0040bdc4(*(long *)(param_2 + 0x38),FUN_004321e0,FUN_00431dd4);
      *(long *)(param_1 + 0x38) = lVar3;
      if (lVar3 == 0) {
        return 0;
      }
    }
    if ((uVar1 >> 1 & 1) == 0) {
LAB_00431fd8:
      __s = *(char **)(param_2 + 0x50);
      if (__s == (char *)0x0) goto LAB_00432074;
      if ((uVar1 & 1) == 0) {
LAB_00431fe4:
        if (*(long *)(param_1 + 0x50) != 0) goto LAB_00432074;
      }
LAB_00432008:
      __n = *(size_t *)(param_2 + 0x58);
      if (__n == 0) {
        __n = strlen(__s);
      }
      __dest = (void *)FUN_003c83a4(__n + 1,"crypto/x509/x509_vpm.c",0xf5);
      if (__dest == (void *)0x0) {
        return 0;
      }
      memcpy(__dest,__s,__n);
      *(undefined1 *)((long)__dest + __n) = 0;
    }
    else {
      __s = *(char **)(param_2 + 0x50);
      if (__s != (char *)0x0) goto LAB_00432008;
      __n = 0;
      __dest = (void *)0x0;
    }
    FUN_003c86b4(*(undefined8 *)(param_1 + 0x50),"crypto/x509/x509_vpm.c",0xfe);
    *(undefined8 *)(param_1 + 0x50) = __dest;
    *(size_t *)(param_1 + 0x58) = __n;
    if ((uVar1 >> 1 & 1) != 0) {
      lVar3 = *(long *)(param_2 + 0x60);
      goto LAB_00432090;
    }
  }
LAB_00432074:
  lVar3 = *(long *)(param_2 + 0x60);
  if (lVar3 == 0) {
    return 1;
  }
  if (((uVar1 & 1) == 0) && (*(long *)(param_1 + 0x60) != 0)) {
    return 1;
  }
LAB_00432090:
  uVar2 = FUN_00432284(param_1,lVar3,*(undefined8 *)(param_2 + 0x68));
  if ((int)uVar2 != 0) {
    return 1;
  }
  return uVar2;
}


// ===== 004320bc  FUN_004320bc =====

long FUN_004320bc(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  if (param_1 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/x509_vpm.c",0x15f,"X509_VERIFY_PARAM_set1_policies");
    FUN_00379a5c(0xb,0xc0102,0);
    lVar3 = 0;
  }
  else {
    FUN_0040ca6c(*(undefined8 *)(param_1 + 0x30),PTR_FUN_007a19a8);
    if (param_2 == 0) {
      *(undefined8 *)(param_1 + 0x30) = 0;
      return 1;
    }
    lVar3 = FUN_0040bf0c();
    *(long *)(param_1 + 0x30) = lVar3;
    if (lVar3 != 0) {
      iVar1 = FUN_0040caf8(param_2);
      if (0 < iVar1) {
        iVar1 = 0;
        do {
          FUN_0040cb0c(param_2,iVar1);
          lVar3 = FUN_003de510();
          if (lVar3 == 0) {
            return 0;
          }
          iVar2 = FUN_0040c89c(*(undefined8 *)(param_1 + 0x30),lVar3);
          if (iVar2 == 0) {
            FUN_0039a0f4(lVar3);
            return 0;
          }
          iVar1 = iVar1 + 1;
          iVar2 = FUN_0040caf8(param_2);
        } while (iVar1 < iVar2);
      }
      *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) | 0x80;
      return 1;
    }
  }
  return lVar3;
}


// ===== 004321e0  FUN_004321e0 =====

void FUN_004321e0(undefined8 param_1)

{
  FUN_003ca2f4(param_1,"crypto/x509/x509_vpm.c",0x1c);
  return;
}


// ===== 004321f0  FUN_004321f0 =====

undefined8 FUN_004321f0(long param_1,char *param_2,size_t param_3)

{
  void *__dest;
  
  if (param_2 == (char *)0x0) {
    param_3 = 0;
    __dest = (void *)0x0;
  }
  else {
    if (param_3 == 0) {
      param_3 = strlen(param_2);
    }
    __dest = (void *)FUN_003c83a4(param_3 + 1,"crypto/x509/x509_vpm.c",0xf5);
    if (__dest == (void *)0x0) {
      return 0;
    }
    memcpy(__dest,param_2,param_3);
    *(undefined1 *)((long)__dest + param_3) = 0;
  }
  FUN_003c86b4(*(undefined8 *)(param_1 + 0x50),"crypto/x509/x509_vpm.c",0xfe);
  *(void **)(param_1 + 0x50) = __dest;
  *(size_t *)(param_1 + 0x58) = param_3;
  return 1;
}


// ===== 00432284  FUN_00432284 =====

undefined8 FUN_00432284(long param_1,char *param_2,size_t param_3)

{
  void *__dest;
  
  if ((0x10 < param_3) || ((1L << (param_3 & 0x3f) & 0x10011U) == 0)) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/x509_vpm.c",0x1d2,"X509_VERIFY_PARAM_set1_ip");
    FUN_00379a5c(0xb,0x80106,0);
    return 0;
  }
  if (param_2 == (char *)0x0) {
    param_3 = 0;
    __dest = (void *)0x0;
  }
  else {
    if (param_3 == 0) {
      param_3 = strlen(param_2);
    }
    __dest = (void *)FUN_003c83a4(param_3 + 1,"crypto/x509/x509_vpm.c",0xf5);
    if (__dest == (void *)0x0) {
      return 0;
    }
    memcpy(__dest,param_2,param_3);
    *(undefined1 *)((long)__dest + param_3) = 0;
  }
  FUN_003c86b4(*(undefined8 *)(param_1 + 0x60),"crypto/x509/x509_vpm.c",0xfe);
  *(void **)(param_1 + 0x60) = __dest;
  *(size_t *)(param_1 + 0x68) = param_3;
  return 1;
}


// ===== 0043237c  FUN_0043237c =====

undefined8 FUN_0043237c(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0x10);
    *(uint *)(param_1 + 0x10) = uVar1 | 1;
    uVar2 = FUN_00431de4();
    *(uint *)(param_1 + 0x10) = uVar1;
    return uVar2;
  }
  FUN_00379868();
  FUN_0037995c("crypto/x509/x509_vpm.c",0xe2,"X509_VERIFY_PARAM_set1");
  FUN_00379a5c(0xb,0xc0102,0);
  return 0;
}


// ===== 004323f0  FUN_004323f0 =====

bool FUN_004323f0(long *param_1,undefined8 param_2)

{
  long lVar1;
  
  FUN_003c86b4(*param_1,"crypto/x509/x509_vpm.c",0x107);
  lVar1 = FUN_003ca2f4(param_2,"crypto/x509/x509_vpm.c",0x108);
  *param_1 = lVar1;
  return lVar1 != 0;
}


// ===== 00432450  FUN_00432450 =====

undefined8 FUN_00432450(long param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x18) | param_2;
  if ((param_2 & 0x780) != 0) {
    uVar1 = uVar1 | 0x80;
  }
  *(ulong *)(param_1 + 0x18) = uVar1;
  return 1;
}


// ===== 00432474  FUN_00432474 =====

undefined8 FUN_00432474(long param_1,ulong param_2)

{
  *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) & (param_2 ^ 0xffffffffffffffff);
  return 1;
}


// ===== 0043248c  FUN_0043248c =====

undefined8 FUN_0043248c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


// ===== 00432494  FUN_00432494 =====

undefined4 FUN_00432494(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}


// ===== 0043249c  FUN_0043249c =====

undefined8 FUN_0043249c(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return 1;
}


// ===== 004324ac  FUN_004324ac =====

void FUN_004324ac(long param_1)

{
  FUN_0041f29c(param_1 + 0x20);
  return;
}


// ===== 004324b4  FUN_004324b4 =====

void FUN_004324b4(long param_1)

{
  FUN_004300dc(param_1 + 0x24);
  return;
}


