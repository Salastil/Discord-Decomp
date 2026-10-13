// ===== 0043f500  FUN_0043f500 =====

void FUN_0043f500(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar1 = FUN_0046b88c();
  UNRECOVERED_JUMPTABLE = DAT_007ad068;
  if ((DAT_007ad068 == (code *)0x0) &&
     (UNRECOVERED_JUMPTABLE = DAT_007ad060, DAT_007ad060 == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0043f540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_2,param_3);
  return;
}


// ===== 0043f550  FUN_0043f550 =====

void FUN_0043f550(undefined8 *param_1)

{
  FUN_0037fa4c(param_1[1]);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ===== 0043f57c  FUN_0043f57c =====

undefined8 FUN_0043f57c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = param_2[1];
  if (lVar2 != 0) {
    uVar1 = FUN_00382388(lVar2);
    if ((int)uVar1 == 0) {
      return uVar1;
    }
    lVar2 = param_2[1];
  }
  uVar1 = param_2[2];
  uVar3 = *param_2;
  param_1[1] = lVar2;
  param_1[2] = uVar1;
  *param_1 = uVar3;
  return 1;
}


// ===== 0043f5c8  FUN_0043f5c8 =====

bool FUN_0043f5c8(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    return true;
  }
  lVar1 = FUN_003cb19c(param_2,"properties");
  if (lVar1 == 0) {
    uVar3 = 0;
    param_1[2] = 0;
    lVar1 = FUN_003cb19c(param_2,"cipher");
  }
  else {
    if (*(int *)(lVar1 + 8) != 4) {
      return false;
    }
    uVar3 = *(undefined8 *)(lVar1 + 0x10);
    param_1[2] = 0;
    lVar1 = FUN_003cb19c(param_2,"cipher");
  }
  if (lVar1 == 0) {
    return true;
  }
  if (*(int *)(lVar1 + 8) != 4) {
    return false;
  }
  FUN_0037fa4c(param_1[1]);
  FUN_0037f6d4();
  lVar2 = FUN_003823dc(param_3,*(undefined8 *)(lVar1 + 0x10),uVar3);
  *param_1 = lVar2;
  param_1[1] = lVar2;
  if (lVar2 == 0) {
    lVar1 = FUN_003a1fb8(*(undefined8 *)(lVar1 + 0x10));
    if ((lVar1 == 0) || (*(int *)(lVar1 + 0x18) == 1)) {
      if (*param_1 == 0) {
        FUN_0037f8c4();
        goto LAB_0043f6d4;
      }
    }
    else {
      *param_1 = lVar1;
    }
  }
  FUN_0037f71c();
LAB_0043f6d4:
  return *param_1 != 0;
}


// ===== 0043f6f0  FUN_0043f6f0 =====

undefined8 FUN_0043f6f0(undefined8 *param_1)

{
  return *param_1;
}


// ===== 0043f6f8  FUN_0043f6f8 =====

undefined8 FUN_0043f6f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


// ===== 0043f700  FUN_0043f700 =====

void FUN_0043f700(undefined8 *param_1)

{
  FUN_0039d050(param_1[1]);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ===== 0043f72c  FUN_0043f72c =====

undefined8 FUN_0043f72c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = param_2[1];
  if (lVar2 != 0) {
    uVar1 = FUN_0039e4f4(lVar2);
    if ((int)uVar1 == 0) {
      return uVar1;
    }
    lVar2 = param_2[1];
  }
  uVar1 = param_2[2];
  uVar3 = *param_2;
  param_1[1] = lVar2;
  param_1[2] = uVar1;
  *param_1 = uVar3;
  return 1;
}


// ===== 0043f778  FUN_0043f778 =====

void FUN_0043f778(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  FUN_0039d050(param_1[1]);
  uVar1 = FUN_0039e6f4(param_2,param_3,param_4);
  *param_1 = uVar1;
  param_1[1] = uVar1;
  return;
}


// ===== 0043f7c4  FUN_0043f7c4 =====

bool FUN_0043f7c4(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_2 == 0) {
    return true;
  }
  lVar1 = FUN_003cb19c(param_2,"properties");
  if (lVar1 == 0) {
    uVar3 = 0;
    param_1[2] = 0;
    lVar1 = FUN_003cb19c(param_2,"digest");
  }
  else {
    if (*(int *)(lVar1 + 8) != 4) {
      return false;
    }
    uVar3 = *(undefined8 *)(lVar1 + 0x10);
    param_1[2] = 0;
    lVar1 = FUN_003cb19c(param_2,"digest");
  }
  if (lVar1 == 0) {
    return true;
  }
  if (*(int *)(lVar1 + 8) != 4) {
    return false;
  }
  FUN_0037f6d4();
  uVar4 = *(undefined8 *)(lVar1 + 0x10);
  FUN_0039d050(param_1[1]);
  lVar2 = FUN_0039e6f4(param_3,uVar4,uVar3);
  *param_1 = lVar2;
  param_1[1] = lVar2;
  if (lVar2 == 0) {
    lVar1 = FUN_003a213c(*(undefined8 *)(lVar1 + 0x10));
    if ((lVar1 == 0) || (*(int *)(lVar1 + 0x18) == 1)) {
      if (*param_1 == 0) {
        FUN_0037f8c4();
        goto LAB_0043f8e0;
      }
    }
    else {
      *param_1 = lVar1;
    }
  }
  FUN_0037f71c();
LAB_0043f8e0:
  return *param_1 != 0;
}


// ===== 0043f900  FUN_0043f900 =====

undefined8 FUN_0043f900(undefined8 *param_1)

{
  return *param_1;
}


// ===== 0043f908  FUN_0043f908 =====

undefined8 FUN_0043f908(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


// ===== 0043f910  FUN_0043f910 =====

undefined8
FUN_0043f910(undefined8 param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
            long param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 auStack_150 [5];
  undefined8 local_128 [25];
  
  if (param_2 == 0) {
LAB_0043fa3c:
    puVar3 = auStack_150;
    if (param_4 != 0) {
      puVar3 = local_128;
      FUN_003cd8cc(auStack_150,"digest",param_4,0);
    }
    puVar4 = puVar3;
    if (param_3 != 0) {
      puVar4 = puVar3 + 5;
      FUN_003cd8cc(&local_178,"cipher",param_3,0);
      puVar3[1] = uStack_170;
      *puVar3 = local_178;
      puVar3[3] = uStack_160;
      puVar3[2] = local_168;
      puVar3[4] = local_158;
    }
    puVar3 = puVar4;
    if (param_6 != 0) {
      puVar3 = puVar4 + 5;
      FUN_003cd8cc(&local_178,"properties",param_6,0);
      puVar4[4] = local_158;
      puVar4[1] = uStack_170;
      *puVar4 = local_178;
      puVar4[3] = uStack_160;
      puVar4[2] = local_168;
    }
    puVar4 = puVar3;
    if (param_7 != 0) {
      puVar4 = puVar3 + 5;
      FUN_003cd924(&local_178,&DAT_001e2b47,param_7,param_8);
      puVar3[4] = local_158;
      puVar3[1] = uStack_170;
      *puVar3 = local_178;
      puVar3[3] = uStack_160;
      puVar3[2] = local_168;
    }
    FUN_003cdfcc(&local_178);
    puVar4[4] = local_158;
    puVar4[1] = uStack_170;
    *puVar4 = local_178;
    puVar4[3] = uStack_160;
    puVar4[2] = local_168;
    uVar2 = FUN_0040013c(param_1,auStack_150);
  }
  else {
    if (param_4 == 0) {
      lVar1 = FUN_003cb19c(param_2,"digest");
      if (lVar1 == 0) {
        param_4 = 0;
        goto joined_r0x0043f990;
      }
      if (*(int *)(lVar1 + 8) == 4) {
        param_4 = *(long *)(lVar1 + 0x10);
        goto joined_r0x0043f990;
      }
    }
    else {
joined_r0x0043f990:
      if (param_3 == 0) {
        lVar1 = FUN_003cb19c(param_2,"cipher");
        if (lVar1 == 0) {
          param_3 = 0;
        }
        else {
          if (*(int *)(lVar1 + 8) != 4) goto LAB_0043fa30;
          param_3 = *(long *)(lVar1 + 0x10);
        }
      }
      if (((param_5 != 0) || (lVar1 = FUN_003cb19c(param_2,"engine"), lVar1 == 0)) ||
         (*(int *)(lVar1 + 8) == 4)) goto LAB_0043fa3c;
    }
LAB_0043fa30:
    uVar2 = 0;
  }
  return uVar2;
}


// ===== 0043fb50  FUN_0043fb50 =====

undefined8
FUN_0043fb50(long *param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5,
            undefined8 param_6)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_3 == 0) {
    lVar2 = FUN_003cb19c(param_2,&DAT_001f1681);
    if (lVar2 == 0) {
      param_3 = 0;
    }
    else {
      if (*(int *)(lVar2 + 8) != 4) {
        return 0;
      }
      param_3 = *(long *)(lVar2 + 0x10);
    }
  }
  lVar2 = FUN_003cb19c(param_2,"properties");
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    if (*(int *)(lVar2 + 8) != 4) {
      return 0;
    }
    uVar4 = *(undefined8 *)(lVar2 + 0x10);
  }
  if (param_3 == 0) {
    lVar2 = *param_1;
    if (lVar2 == 0) {
      return 1;
    }
  }
  else {
    lVar2 = FUN_00400424(param_6,param_3,uVar4);
    FUN_003ffb7c(*param_1);
    if (lVar2 == 0) {
      *param_1 = 0;
      FUN_004007c8(0);
      lVar2 = *param_1;
    }
    else {
      lVar3 = FUN_003ffaa4(lVar2);
      *param_1 = lVar3;
      FUN_004007c8(lVar2);
      lVar2 = *param_1;
    }
    if (lVar2 == 0) {
      return 0;
    }
  }
  iVar1 = FUN_0043f910(lVar2,param_2,param_4,param_5,0,uVar4,0,0);
  if (iVar1 != 0) {
    return 1;
  }
  FUN_003ffb7c(*param_1);
  *param_1 = 0;
  return 0;
}


// ===== 0043fcf8  FUN_0043fcf8 =====

void FUN_0043fcf8(long *param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (*param_2 == 0) {
    lVar3 = *param_1;
    if (lVar3 != 0) {
      iVar4 = 0;
      do {
        if (((code *)param_1[4] == (code *)0x0) || (iVar2 = (*(code *)param_1[4])(), iVar2 != 0)) {
          lVar3 = (long)iVar4;
          lVar7 = *param_1;
          lVar6 = param_1[3];
          lVar5 = param_1[2];
          iVar4 = iVar4 + 1;
          plVar1 = param_2 + lVar3 * 4;
          plVar1[1] = param_1[1];
          *plVar1 = lVar7;
          plVar1[3] = lVar6;
          plVar1[2] = lVar5;
        }
        param_1 = param_1 + 5;
      } while (*param_1 != 0);
      lVar3 = (long)iVar4;
    }
    lVar7 = *param_1;
    lVar6 = param_1[3];
    lVar5 = param_1[2];
    param_2 = param_2 + lVar3 * 4;
    param_2[1] = param_1[1];
    *param_2 = lVar7;
    param_2[3] = lVar6;
    param_2[2] = lVar5;
    return;
  }
  return;
}


// ===== 0043fd80  FUN_0043fd80 =====

undefined8 FUN_0043fd80(long param_1,undefined8 param_2,long *param_3,undefined8 *param_4)

{
  long lVar1;
  
  if (param_1 == 0) {
    param_2 = 0;
    *param_3 = 0;
  }
  else {
    lVar1 = FUN_003ca404(param_1,param_2,"providers/common/provider_util.c",0x167);
    *param_3 = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
  }
  *param_4 = param_2;
  return 1;
}


// ===== 0043fde8  FUN_0043fde8 =====

undefined8 * FUN_0043fde8(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)FUN_003c8474(0x48,"providers/implementations/asymciphers/rsa_enc.c",0x58)
    ;
    if (puVar2 != (undefined8 *)0x0) {
      uVar3 = FUN_0046b880(param_1);
      *puVar2 = uVar3;
    }
    return puVar2;
  }
  return (undefined8 *)0x0;
}


// ===== 0043fe4c  FUN_0043fe4c =====

void FUN_0043fe4c(void)

{
  FUN_00440a34();
  return;
}


// ===== 0043fe54  FUN_0043fe54 =====

ulong FUN_0043fe54(undefined8 *param_1,long param_2,ulong *param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  
  uVar4 = FUN_0043eb70();
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  if (param_2 == 0) {
    iVar1 = FUN_003f9914(param_1[1]);
    if (iVar1 != 0) {
      *param_3 = (long)iVar1;
      return 1;
    }
    FUN_00379868();
    FUN_0037995c("providers/implementations/asymciphers/rsa_enc.c",0x97,"rsa_encrypt");
    uVar6 = 0x9e;
LAB_0043ffb8:
    FUN_00379a5c(0x39,uVar6,0);
LAB_0043ffd8:
    uVar4 = 0;
  }
  else {
    if (*(int *)(param_1 + 2) == 4) {
      iVar1 = FUN_003f9914(param_1[1]);
      lVar5 = FUN_003c83a4((long)iVar1,"providers/implementations/asymciphers/rsa_enc.c",0xa2);
      if (lVar5 == 0) {
        return 0;
      }
      lVar7 = param_1[3];
      if (lVar7 == 0) {
        lVar7 = FUN_0039e6f4(*param_1,"SHA-1",0);
        param_1[3] = lVar7;
        if (lVar7 == 0) {
          FUN_003c86b4(lVar5,"providers/implementations/asymciphers/rsa_enc.c",0xa7);
          FUN_00379868();
          FUN_0037995c("providers/implementations/asymciphers/rsa_enc.c",0xa8,"rsa_encrypt");
          uVar6 = 0xc0103;
          goto LAB_0043ffb8;
        }
      }
      iVar2 = FUN_003fe6f4(*param_1,lVar5,iVar1,param_5,param_6,param_1[5],
                           *(undefined4 *)(param_1 + 6),lVar7,param_1[4]);
      if (iVar2 == 0) {
        FUN_003c86b4(lVar5,"providers/implementations/asymciphers/rsa_enc.c",0xb5);
        goto LAB_0043ffd8;
      }
      uVar3 = FUN_003f993c(iVar1,lVar5,param_2,param_1[1],3);
      uVar4 = (ulong)uVar3;
      FUN_003c86b4(lVar5,"providers/implementations/asymciphers/rsa_enc.c",0xba);
    }
    else {
      uVar4 = FUN_003f993c(param_6,param_5,param_2,param_1[1]);
      uVar3 = (uint)uVar4;
    }
    if (-1 < (int)uVar3) {
      uVar8 = uVar4 & 0xffffffff;
      uVar4 = 1;
      *param_3 = uVar8;
    }
  }
  return uVar4;
}


// ===== 00440038  FUN_00440038 =====

void FUN_00440038(void)

{
  FUN_00440a34();
  return;
}


// ===== 00440040  FUN_00440040 =====

ulong FUN_00440040(undefined8 *param_1,long param_2,ulong *param_3,ulong param_4,undefined8 param_5,
                  undefined4 param_6)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  iVar1 = FUN_003f9914(param_1[1]);
  uVar3 = FUN_0043eb70();
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  iVar2 = *(int *)(param_1 + 2);
  uVar3 = (ulong)iVar1;
  if (iVar2 == 7) {
    if (param_2 == 0) {
      *param_3 = 0x30;
      return 1;
    }
    if (0x2f < param_4) {
LAB_00440128:
      lVar4 = FUN_003c83a4(uVar3,"providers/implementations/asymciphers/rsa_enc.c",0xee);
      if (lVar4 == 0) {
        return 0;
      }
      iVar2 = FUN_003f9954(param_6,param_5,lVar4,param_1[1],3);
      if (iVar2 == iVar1) {
        if (*(int *)(param_1 + 2) == 4) {
          lVar6 = param_1[3];
          if (lVar6 == 0) {
            lVar6 = FUN_0039e6f4(*param_1,"SHA-1",0);
            param_1[3] = lVar6;
            if (lVar6 == 0) {
              FUN_003c86b4(lVar4,"providers/implementations/asymciphers/rsa_enc.c",0xff);
              FUN_00379868();
              FUN_0037995c("providers/implementations/asymciphers/rsa_enc.c",0x100,"rsa_decrypt");
              uVar5 = 0xc0103;
              goto LAB_004400f0;
            }
          }
          iVar1 = FUN_003fecd8(param_2,param_4 & 0xffffffff,lVar4,iVar1,iVar1,param_1[5],
                               *(undefined4 *)(param_1 + 6),lVar6,param_1[4]);
        }
        else {
          if (*(int *)(param_1 + 7) == 0) {
            FUN_00379868();
            FUN_0037995c("providers/implementations/asymciphers/rsa_enc.c",0x10d,"rsa_decrypt");
            FUN_00379a5c(0x39,0xa1,0);
            FUN_003c86b4(lVar4,"providers/implementations/asymciphers/rsa_enc.c",0x10e);
            return 0;
          }
          iVar1 = FUN_00401754(*param_1,param_2,param_4,lVar4,uVar3,*(int *)(param_1 + 7),
                               *(undefined4 *)((long)param_1 + 0x3c));
        }
        FUN_003c86b4(lVar4,"providers/implementations/asymciphers/rsa_enc.c",0x115);
LAB_00440290:
        uVar3 = (long)iVar1 >> 0x3f;
        *param_3 = ~uVar3 & (long)iVar1 | uVar3 & *param_3;
        return (ulong)(~(iVar1 >> 0x1f) & 1);
      }
      FUN_003c86b4(lVar4,"providers/implementations/asymciphers/rsa_enc.c",0xf7);
      FUN_00379868();
      FUN_0037995c("providers/implementations/asymciphers/rsa_enc.c",0xf8,"rsa_decrypt");
      uVar5 = 0xa2;
      goto LAB_004400f0;
    }
    FUN_00379868();
    uVar5 = 0xd7;
  }
  else {
    if (param_2 == 0) {
      if (iVar1 != 0) {
        *param_3 = uVar3;
        return 1;
      }
      FUN_00379868();
      FUN_0037995c("providers/implementations/asymciphers/rsa_enc.c",0xdd,"rsa_decrypt");
      uVar5 = 0x9e;
      goto LAB_004400f0;
    }
    if (uVar3 <= param_4) {
      if (iVar2 != 4) {
        iVar1 = 8;
        if (*(int *)(param_1 + 8) != 0 || iVar2 != 1) {
          iVar1 = iVar2;
        }
        iVar1 = FUN_003f9954(param_6,param_5,param_2,param_1[1],iVar1);
        goto LAB_00440290;
      }
      goto LAB_00440128;
    }
    FUN_00379868();
    uVar5 = 0xe5;
  }
  FUN_0037995c("providers/implementations/asymciphers/rsa_enc.c",uVar5,"rsa_decrypt");
  uVar5 = 0x8e;
LAB_004400f0:
  FUN_00379a5c(0x39,uVar5,0);
  return 0;
}


// ===== 00440380  FUN_00440380 =====

void FUN_00440380(long param_1)

{
  FUN_003fa6a0(*(undefined8 *)(param_1 + 8));
  FUN_0039d050(*(undefined8 *)(param_1 + 0x18));
  FUN_0039d050(*(undefined8 *)(param_1 + 0x20));
  FUN_003c86b4(*(undefined8 *)(param_1 + 0x28),"providers/implementations/asymciphers/rsa_enc.c",299
              );
  FUN_003c86b4(param_1,"providers/implementations/asymciphers/rsa_enc.c",0x12d);
  return;
}


// ===== 004403d8  FUN_004403d8 =====

undefined8 * FUN_004403d8(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)
             FUN_003c8474(0x48,"providers/implementations/asymciphers/rsa_enc.c",0x138);
    if (puVar2 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    uVar4 = param_1[1];
    uVar3 = *param_1;
    uVar6 = param_1[3];
    uVar5 = param_1[2];
    puVar2[8] = param_1[8];
    puVar2[1] = uVar4;
    *puVar2 = uVar3;
    puVar2[3] = uVar6;
    puVar2[2] = uVar5;
    uVar5 = param_1[4];
    uVar4 = param_1[7];
    uVar3 = param_1[6];
    puVar2[5] = param_1[5];
    puVar2[4] = uVar5;
    puVar2[7] = uVar4;
    puVar2[6] = uVar3;
    if ((puVar2[1] == 0) || (iVar1 = FUN_003fa780(), iVar1 != 0)) {
      if ((puVar2[3] == 0) || (iVar1 = FUN_0039e4f4(), iVar1 != 0)) {
        if (puVar2[4] == 0) {
          return puVar2;
        }
        iVar1 = FUN_0039e4f4();
        if (iVar1 != 0) {
          return puVar2;
        }
        FUN_003fa6a0(puVar2[1]);
        FUN_0039d050(puVar2[3]);
        uVar3 = 0x14b;
      }
      else {
        FUN_003fa6a0(puVar2[1]);
        uVar3 = 0x144;
      }
    }
    else {
      uVar3 = 0x13e;
    }
    FUN_003c86b4(puVar2,"providers/implementations/asymciphers/rsa_enc.c",uVar3);
  }
  return (undefined8 *)0x0;
}


// ===== 004404b4  FUN_004404b4 =====

undefined8 FUN_004404b4(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar3 = FUN_003cb140(param_2,"pad-mode");
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 8) == 1) {
      uVar4 = thunk_FUN_003cb490(lVar3,*(undefined4 *)(param_1 + 0x10));
      iVar2 = (int)uVar4;
    }
    else {
      if (*(int *)(lVar3 + 8) != 4) {
        return 0;
      }
      uVar1 = *(int *)(param_1 + 0x10) - 1;
      if (((4 < uVar1) || ((0x1dU >> (ulong)(uVar1 & 0x1f) & 1) == 0)) ||
         (*(long *)(&DAT_0020eda8 + *(int *)(&DAT_0020eda0 + (ulong)uVar1 * 4)) == 0)) {
        FUN_00379868();
        FUN_0037995c("providers/implementations/asymciphers/rsa_enc.c",0x171,"rsa_get_ctx_params");
        FUN_00379a5c(0x39,0xc0103,0);
        lVar3 = FUN_003cb140(param_2,"digest");
        goto joined_r0x004405a4;
      }
      uVar4 = FUN_003cd630();
      iVar2 = (int)uVar4;
    }
    if (iVar2 == 0) {
      return uVar4;
    }
  }
  lVar3 = FUN_003cb140(param_2,"digest");
joined_r0x004405a4:
  if (lVar3 != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      uVar4 = FUN_003cd630(lVar3,&DAT_001c717f);
      iVar2 = (int)uVar4;
    }
    else {
      uVar4 = FUN_0038996c(*(long *)(param_1 + 0x18));
      uVar4 = FUN_003cd630(lVar3,uVar4);
      iVar2 = (int)uVar4;
    }
    if (iVar2 == 0) {
      return uVar4;
    }
  }
  lVar3 = FUN_003cb140(param_2,"mgf1-digest");
  if (lVar3 != 0) {
    lVar5 = *(long *)(param_1 + 0x20);
    if ((lVar5 == 0) && (lVar5 = *(long *)(param_1 + 0x18), lVar5 == 0)) {
      uVar4 = FUN_003cd630(lVar3,&DAT_001c717f);
      iVar2 = (int)uVar4;
    }
    else {
      uVar4 = FUN_0038996c(lVar5);
      uVar4 = FUN_003cd630(lVar3,uVar4);
      iVar2 = (int)uVar4;
    }
    if (iVar2 == 0) {
      return uVar4;
    }
  }
  lVar3 = FUN_003cb140(param_2,"oaep-label");
  if (((((lVar3 == 0) ||
        (uVar4 = FUN_003cdb94(lVar3,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30))
        , (int)uVar4 != 0)) &&
       ((lVar3 = FUN_003cb140(param_2,"tls-client-version"), lVar3 == 0 ||
        (uVar4 = thunk_FUN_003cb960(lVar3,*(undefined4 *)(param_1 + 0x38)), (int)uVar4 != 0)))) &&
      ((lVar3 = FUN_003cb140(param_2,"tls-negotiated-version"), lVar3 == 0 ||
       (uVar4 = thunk_FUN_003cb960(lVar3,*(undefined4 *)(param_1 + 0x3c)), (int)uVar4 != 0)))) &&
     ((lVar3 = FUN_003cb140(param_2,"implicit-rejection"), lVar3 == 0 ||
      (uVar4 = thunk_FUN_003cb960(lVar3,*(undefined4 *)(param_1 + 0x40)), (int)uVar4 != 0)))) {
    uVar4 = 1;
  }
  return uVar4;
}


// ===== 004406c8  FUN_004406c8 =====

undefined ** FUN_004406c8(void)

{
  return &PTR_s_digest_00782438;
}


// ===== 004406d4  FUN_004406d4 =====

undefined8 FUN_004406d4(undefined8 *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  char *__s1;
  undefined8 local_188;
  ulong local_180;
  undefined8 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_62 [6];
  
  local_178 = (undefined8 *)0x0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_168 = 0;
  local_170 = 0;
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  if (param_2 == 0) {
    return 1;
  }
  lVar2 = FUN_003cb19c(param_2,"digest");
  if (lVar2 != 0) {
    local_178 = auStack_62;
    uVar3 = FUN_003cd3d4(lVar2,&local_178,0x32);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    lVar2 = FUN_003cb19c(param_2,"digest-props");
    if (lVar2 != 0) {
      local_178 = &local_170;
      uVar3 = FUN_003cd3d4(lVar2,&local_178,0x100);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
    }
    FUN_0039d050(param_1[3]);
    lVar2 = FUN_0039e6f4(*param_1,auStack_62,&local_170);
    param_1[3] = lVar2;
    if (lVar2 == 0) {
      return 0;
    }
  }
  lVar2 = FUN_003cb19c(param_2,"pad-mode");
  if (lVar2 == 0) goto LAB_004408b0;
  local_180 = local_180 & 0xffffffff00000000;
  if (*(int *)(lVar2 + 8) == 4) {
    __s1 = *(char **)(lVar2 + 0x10);
    if (__s1 == (char *)0x0) {
      return 0;
    }
    iVar1 = strcmp(__s1,"pkcs1");
    if (iVar1 == 0) {
      iVar1 = 1;
LAB_00440868:
      local_180 = CONCAT44(local_180._4_4_,iVar1);
      goto LAB_0044086c;
    }
    iVar1 = strcmp(__s1,"none");
    if (iVar1 == 0) {
      iVar1 = 3;
      goto LAB_00440868;
    }
    iVar1 = strcmp(__s1,"oaep");
    if ((iVar1 == 0) || (iVar1 = strcmp(__s1,"oeap"), iVar1 == 0)) {
      iVar1 = 4;
      goto LAB_00440868;
    }
    iVar1 = strcmp(__s1,"x931");
    if (iVar1 == 0) {
      iVar1 = 5;
      goto LAB_00440868;
    }
    iVar1 = 0;
  }
  else {
    if (*(int *)(lVar2 + 8) != 1) {
      return 0;
    }
    iVar1 = thunk_FUN_003cb238(lVar2,&local_180);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = (int)local_180;
LAB_0044086c:
    if (iVar1 == 6) {
      return 0;
    }
    if (iVar1 == 4) {
      if (param_1[3] == 0) {
        lVar2 = FUN_0039e6f4(*param_1,&DAT_001eef82,&local_170);
        param_1[3] = lVar2;
        if (lVar2 == 0) {
          return 0;
        }
        iVar1 = (int)local_180;
      }
      else {
        iVar1 = 4;
      }
    }
  }
  *(int *)(param_1 + 2) = iVar1;
LAB_004408b0:
  lVar2 = FUN_003cb19c(param_2,"mgf1-digest");
  if (lVar2 != 0) {
    local_178 = auStack_62;
    uVar3 = FUN_003cd3d4(lVar2,&local_178,0x32);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    lVar2 = FUN_003cb19c(param_2,"mgf1-properties");
    if (lVar2 == 0) {
      local_178 = (undefined8 *)0x0;
    }
    else {
      local_178 = &local_170;
      uVar3 = FUN_003cd3d4(lVar2,&local_178,0x100);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
    }
    FUN_0039d050(param_1[4]);
    lVar2 = FUN_0039e6f4(*param_1,auStack_62,local_178);
    param_1[4] = lVar2;
    if (lVar2 == 0) {
      return 0;
    }
  }
  lVar2 = FUN_003cb19c(param_2,"oaep-label");
  if (lVar2 != 0) {
    local_180 = 0;
    uVar3 = FUN_003cd608(lVar2,&local_180,0,&local_188);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    FUN_003c86b4(param_1[5],"providers/implementations/asymciphers/rsa_enc.c",0x21b);
    param_1[5] = local_180;
    param_1[6] = local_188;
  }
  lVar2 = FUN_003cb19c(param_2,"tls-client-version");
  if (lVar2 != 0) {
    uVar3 = thunk_FUN_003cb68c(lVar2,&local_180);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    *(int *)(param_1 + 7) = (int)local_180;
  }
  lVar2 = FUN_003cb19c(param_2,"tls-negotiated-version");
  if (lVar2 != 0) {
    uVar3 = thunk_FUN_003cb68c(lVar2,&local_180);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    *(int *)((long)param_1 + 0x3c) = (int)local_180;
  }
  lVar2 = FUN_003cb19c(param_2,"implicit-rejection");
  if (lVar2 != 0) {
    uVar3 = thunk_FUN_003cb68c(lVar2,&local_180);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    *(int *)(param_1 + 8) = (int)local_180;
  }
  return 1;
}


// ===== 00440a28  FUN_00440a28 =====

undefined ** FUN_00440a28(void)

{
  return &PTR_s_digest_00782578;
}


// ===== 00440a34  FUN_00440a34 =====

undefined8 FUN_00440a34(undefined8 *param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_0043eb70();
  if ((((param_2 != 0) && (param_1 != (undefined8 *)0x0)) && (iVar1 != 0)) &&
     ((iVar1 = FUN_00440b0c(*param_1,param_2,param_4), iVar1 != 0 &&
      (iVar1 = FUN_003fa780(param_2), iVar1 != 0)))) {
    FUN_003fa6a0(param_1[1]);
    *(undefined4 *)((long)param_1 + 0x14) = param_4;
    param_1[1] = param_2;
    *(undefined4 *)(param_1 + 8) = 1;
    iVar1 = FUN_003fb538(param_2,0xf000);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 2) = 1;
      uVar2 = FUN_004406d4(param_1,param_3);
      return uVar2;
    }
    FUN_00379868();
    FUN_0037995c("providers/implementations/asymciphers/rsa_enc.c",0x78,"rsa_init");
    FUN_00379a5c(0x39,0xc0103,0);
  }
  return 0;
}


// ===== 00440b0c  FUN_00440b0c =====

undefined8 FUN_00440b0c(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  if (param_3 < 0x200) {
    param_1 = 1;
    if (param_3 == 0x10) {
      return 1;
    }
    if (param_3 == 0x20) {
      return 1;
    }
    if (param_3 != 0x40) goto LAB_00440bd8;
  }
  else if (param_3 < 0x1000) {
    if ((param_3 != 0x200) && (param_3 != 0x400)) {
LAB_00440bd8:
      FUN_00379868(param_1);
      FUN_0037995c("providers/common/securitycheck.c",0x37,"ossl_rsa_check_key");
      FUN_00379a5c(0x39,0xc0103,"invalid operation: %d",param_3);
      return 0;
    }
  }
  else if ((param_3 != 0x2000) && (param_3 != 0x1000)) goto LAB_00440bd8;
  iVar1 = FUN_003fb538(param_2,0xf000);
  if (iVar1 != 0x1000) {
    return 1;
  }
  FUN_00379868();
  FUN_0037995c("providers/common/securitycheck.c",0x30,"ossl_rsa_check_key");
  FUN_00379a5c(0x39,0xb2,"operation: %d",param_3);
  return 0;
}


// ===== 00440c20  FUN_00440c20 =====

void FUN_00440c20(undefined8 param_1,undefined8 param_2)

{
  FUN_00440c9c(param_2);
  return;
}


// ===== 00440c28  FUN_00440c28 =====

undefined8 FUN_00440c28(void)

{
  return 1;
}


// ===== 00440c30  FUN_00440c30 =====

undefined4 FUN_00440c30(long param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((param_1 != 0) && (param_3 != 0)) {
    puVar2 = (undefined8 *)(param_2 + 8);
    do {
      iVar1 = FUN_003898e4(param_1,*puVar2);
      if (iVar1 != 0) {
        return *(undefined4 *)(puVar2 + -1);
      }
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 2;
    } while (param_3 != 0);
  }
  return 0;
}


// ===== 00440c9c  FUN_00440c9c =====

ulong FUN_00440c9c(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  uint *puVar3;
  
  if (param_1 != 0) {
    iVar1 = FUN_003898e4(param_1,&DAT_001eef82);
    if (iVar1 == 0) {
      iVar1 = FUN_003898e4(param_1,"SHA2-224");
      if (iVar1 == 0) {
        iVar1 = FUN_003898e4(param_1,"SHA2-256");
        if (iVar1 == 0) {
          iVar1 = FUN_003898e4(param_1,"SHA2-384");
          if (iVar1 == 0) {
            iVar1 = FUN_003898e4(param_1,"SHA2-512");
            if (iVar1 == 0) {
              iVar1 = FUN_003898e4(param_1,"SHA2-512/224");
              if (iVar1 == 0) {
                iVar1 = FUN_003898e4(param_1,"SHA2-512/256");
                if (iVar1 == 0) {
                  iVar1 = FUN_003898e4(param_1,"SHA3-224");
                  if (iVar1 == 0) {
                    iVar1 = FUN_003898e4(param_1,"SHA3-256");
                    if (iVar1 == 0) {
                      iVar1 = FUN_003898e4(param_1,"SHA3-384");
                      if (iVar1 == 0) {
                        uVar2 = FUN_003898e4(param_1,"SHA3-512");
                        if ((int)uVar2 == 0) {
                          return uVar2;
                        }
                        puVar3 = &DAT_007827a8;
                      }
                      else {
                        puVar3 = &DAT_00782798;
                      }
                    }
                    else {
                      puVar3 = &DAT_00782788;
                    }
                  }
                  else {
                    puVar3 = &DAT_00782778;
                  }
                }
                else {
                  puVar3 = &DAT_00782768;
                }
              }
              else {
                puVar3 = &DAT_00782758;
              }
            }
            else {
              puVar3 = &DAT_00782748;
            }
          }
          else {
            puVar3 = &DAT_00782738;
          }
        }
        else {
          puVar3 = &DAT_00782728;
        }
      }
      else {
        puVar3 = &DAT_00782718;
      }
    }
    else {
      puVar3 = &DAT_00782708;
    }
    param_1 = (ulong)*puVar3;
  }
  return param_1;
}


// ===== 00440e18  FUN_00440e18 =====

long FUN_00440e18(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    lVar2 = FUN_003c8474(0x1c0,"providers/implementations/ciphers/cipher_aes.c",0x33);
    if (lVar2 != 0) {
      uVar3 = FUN_00443738(0x100);
      FUN_0046cd08(lVar2,0x100,0x80,0,1,0,uVar3,param_1);
    }
    return lVar2;
  }
  return 0;
}


// ===== 00440e9c  FUN_00440e9c =====

void FUN_00440e9c(undefined8 param_1)

{
  FUN_0046bda4();
  FUN_003c893c(param_1,0x1c0,"providers/implementations/ciphers/cipher_aes.c",0x1f);
  return;
}


// ===== 00440ed0  FUN_00440ed0 =====

long FUN_00440ed0(long param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    lVar2 = FUN_003c83a4(0x1c0,"providers/implementations/ciphers/cipher_aes.c",0x2a);
    if (lVar2 != 0) {
      (**(code **)(*(long *)(param_1 + 0xa8) + 0x10))(lVar2,param_1);
    }
    return lVar2;
  }
  return 0;
}


// ===== 00440f34  FUN_00440f34 =====

void FUN_00440f34(undefined8 param_1)

{
  FUN_0046b8ec(param_1,1,0,0x100,0x80,0);
  return;
}


// ===== 00440f4c  FUN_00440f4c =====

long FUN_00440f4c(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    lVar2 = FUN_003c8474(0x1c0,"providers/implementations/ciphers/cipher_aes.c",0x35);
    if (lVar2 != 0) {
      uVar3 = FUN_00443738(0xc0);
      FUN_0046cd08(lVar2,0xc0,0x80,0,1,0,uVar3,param_1);
    }
    return lVar2;
  }
  return 0;
}


// ===== 00440fd0  FUN_00440fd0 =====

void FUN_00440fd0(undefined8 param_1)

{
  FUN_0046b8ec(param_1,1,0,0xc0,0x80,0);
  return;
}


// ===== 00440fe8  FUN_00440fe8 =====

long FUN_00440fe8(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    lVar2 = FUN_003c8474(0x1c0,"providers/implementations/ciphers/cipher_aes.c",0x37);
    if (lVar2 != 0) {
      uVar3 = FUN_00443738(0x80);
      FUN_0046cd08(lVar2,0x80,0x80,0,1,0,uVar3,param_1);
    }
    return lVar2;
  }
  return 0;
}


// ===== 0044106c  FUN_0044106c =====

void FUN_0044106c(undefined8 param_1)

{
  FUN_0046b8ec(param_1,1,0,0x80,0x80,0);
  return;
}


// ===== 00441084  FUN_00441084 =====

long FUN_00441084(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    lVar2 = FUN_003c8474(0x1c0,"providers/implementations/ciphers/cipher_aes.c",0x39);
    if (lVar2 != 0) {
      uVar3 = FUN_0044372c(0x100);
      FUN_0046cd08(lVar2,0x100,0x80,0x80,2,0,uVar3,param_1);
    }
    return lVar2;
  }
  return 0;
}


// ===== 00441108  FUN_00441108 =====

void FUN_00441108(undefined8 param_1)

{
  FUN_0046b8ec(param_1,2,0,0x100,0x80,0x80);
  return;
}


// ===== 00441120  FUN_00441120 =====

long FUN_00441120(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    lVar2 = FUN_003c8474(0x1c0,"providers/implementations/ciphers/cipher_aes.c",0x3b);
    if (lVar2 != 0) {
      uVar3 = FUN_0044372c(0xc0);
      FUN_0046cd08(lVar2,0xc0,0x80,0x80,2,0,uVar3,param_1);
    }
    return lVar2;
  }
  return 0;
}


// ===== 004411a4  FUN_004411a4 =====

void FUN_004411a4(undefined8 param_1)

{
  FUN_0046b8ec(param_1,2,0,0xc0,0x80,0x80);
  return;
}


// ===== 004411bc  FUN_004411bc =====

long FUN_004411bc(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    lVar2 = FUN_003c8474(0x1c0,"providers/implementations/ciphers/cipher_aes.c",0x3d);
    if (lVar2 != 0) {
      uVar3 = FUN_0044372c(0x80);
      FUN_0046cd08(lVar2,0x80,0x80,0x80,2,0,uVar3,param_1);
    }
    return lVar2;
  }
  return 0;
}


// ===== 00441240  FUN_00441240 =====

void FUN_00441240(undefined8 param_1)

{
  FUN_0046b8ec(param_1,2,0,0x80,0x80,0x80);
  return;
}


// ===== 00441258  FUN_00441258 =====

long FUN_00441258(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    lVar2 = FUN_003c8474(0x1c0,"providers/implementations/ciphers/cipher_aes.c",0x3f);
    if (lVar2 != 0) {
      uVar3 = FUN_00443744(0x100);
      FUN_0046cd08(lVar2,0x100,8,0x80,4,0,uVar3,param_1);
    }
    return lVar2;
  }
  return 0;
}


// ===== 004412dc  FUN_004412dc =====

void FUN_004412dc(undefined8 param_1)

{
  FUN_0046b8ec(param_1,4,0,0x100,8,0x80);
  return;
}


// ===== 004412f4  FUN_004412f4 =====

long FUN_004412f4(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    lVar2 = FUN_003c8474(0x1c0,"providers/implementations/ciphers/cipher_aes.c",0x41);
    if (lVar2 != 0) {
      uVar3 = FUN_00443744(0xc0);
      FUN_0046cd08(lVar2,0xc0,8,0x80,4,0,uVar3,param_1);
    }
    return lVar2;
  }
  return 0;
}


// ===== 00441378  FUN_00441378 =====

void FUN_00441378(undefined8 param_1)

{
  FUN_0046b8ec(param_1,4,0,0xc0,8,0x80);
  return;
}


// ===== 00441390  FUN_00441390 =====

long FUN_00441390(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    lVar2 = FUN_003c8474(0x1c0,"providers/implementations/ciphers/cipher_aes.c",0x43);
    if (lVar2 != 0) {
      uVar3 = FUN_00443744(0x80);
      FUN_0046cd08(lVar2,0x80,8,0x80,4,0,uVar3,param_1);
    }
    return lVar2;
  }
  return 0;
}


// ===== 00441414  FUN_00441414 =====

void FUN_00441414(undefined8 param_1)

{
  FUN_0046b8ec(param_1,4,0,0x80,8,0x80);
  return;
}


// ===== 0044142c  FUN_0044142c =====

long FUN_0044142c(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    lVar2 = FUN_003c8474(0x1c0,"providers/implementations/ciphers/cipher_aes.c",0x45);
    if (lVar2 != 0) {
      uVar3 = FUN_00443750(0x100);
      FUN_0046cd08(lVar2,0x100,8,0x80,3,0,uVar3,param_1);
    }
    return lVar2;
  }
  return 0;
}


// ===== 004414b0  FUN_004414b0 =====

void FUN_004414b0(undefined8 param_1)

{
  FUN_0046b8ec(param_1,3,0,0x100,8,0x80);
  return;
}


// ===== 004414c8  FUN_004414c8 =====

long FUN_004414c8(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    lVar2 = FUN_003c8474(0x1c0,"providers/implementations/ciphers/cipher_aes.c",0x47);
    if (lVar2 != 0) {
      uVar3 = FUN_00443750(0xc0);
      FUN_0046cd08(lVar2,0xc0,8,0x80,3,0,uVar3,param_1);
    }
    return lVar2;
  }
  return 0;
}


// ===== 0044154c  FUN_0044154c =====

void FUN_0044154c(undefined8 param_1)

{
  FUN_0046b8ec(param_1,3,0,0xc0,8,0x80);
  return;
}


// ===== 00441564  FUN_00441564 =====

long FUN_00441564(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    lVar2 = FUN_003c8474(0x1c0,"providers/implementations/ciphers/cipher_aes.c",0x49);
    if (lVar2 != 0) {
      uVar3 = FUN_00443750(0x80);
      FUN_0046cd08(lVar2,0x80,8,0x80,3,0,uVar3,param_1);
    }
    return lVar2;
  }
  return 0;
}


// ===== 004415e8  FUN_004415e8 =====

void FUN_004415e8(undefined8 param_1)

{
  FUN_0046b8ec(param_1,3,0,0x80,8,0x80);
  return;
}


// ===== 00441600  FUN_00441600 =====

long FUN_00441600(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    lVar2 = FUN_003c8474(0x1c0,"providers/implementations/ciphers/cipher_aes.c",0x4b);
    if (lVar2 != 0) {
      uVar3 = FUN_0044375c(0x100);
      FUN_0046cd08(lVar2,0x100,8,0x80,3,0,uVar3,param_1);
    }
    return lVar2;
  }
  return 0;
}


// ===== 00441684  FUN_00441684 =====

void FUN_00441684(undefined8 param_1)

{
  FUN_0046b8ec(param_1,3,0,0x100,8,0x80);
  return;
}


// ===== 0044169c  FUN_0044169c =====

long FUN_0044169c(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    lVar2 = FUN_003c8474(0x1c0,"providers/implementations/ciphers/cipher_aes.c",0x4d);
    if (lVar2 != 0) {
      uVar3 = FUN_0044375c(0xc0);
      FUN_0046cd08(lVar2,0xc0,8,0x80,3,0,uVar3,param_1);
    }
    return lVar2;
  }
  return 0;
}


// ===== 00441720  FUN_00441720 =====

void FUN_00441720(undefined8 param_1)

{
  FUN_0046b8ec(param_1,3,0,0xc0,8,0x80);
  return;
}


// ===== 00441738  FUN_00441738 =====

long FUN_00441738(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    lVar2 = FUN_003c8474(0x1c0,"providers/implementations/ciphers/cipher_aes.c",0x4f);
    if (lVar2 != 0) {
      uVar3 = FUN_0044375c(0x80);
      FUN_0046cd08(lVar2,0x80,8,0x80,3,0,uVar3,param_1);
    }
    return lVar2;
  }
  return 0;
}


// ===== 004417bc  FUN_004417bc =====

void FUN_004417bc(undefined8 param_1)

{
  FUN_0046b8ec(param_1,3,0,0x80,8,0x80);
  return;
}


// ===== 004417d4  FUN_004417d4 =====

long FUN_004417d4(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    lVar2 = FUN_003c8474(0x1c0,"providers/implementations/ciphers/cipher_aes.c",0x51);
    if (lVar2 != 0) {
      uVar3 = FUN_00443768(0x100);
      FUN_0046cd08(lVar2,0x100,8,0x80,3,0,uVar3,param_1);
    }
    return lVar2;
  }
  return 0;
}


// ===== 00441858  FUN_00441858 =====

void FUN_00441858(undefined8 param_1)

{
  FUN_0046b8ec(param_1,3,0,0x100,8,0x80);
  return;
}


// ===== 00441870  FUN_00441870 =====

long FUN_00441870(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    lVar2 = FUN_003c8474(0x1c0,"providers/implementations/ciphers/cipher_aes.c",0x53);
    if (lVar2 != 0) {
      uVar3 = FUN_00443768(0xc0);
      FUN_0046cd08(lVar2,0xc0,8,0x80,3,0,uVar3,param_1);
    }
    return lVar2;
  }
  return 0;
}


// ===== 004418f4  FUN_004418f4 =====

void FUN_004418f4(undefined8 param_1)

{
  FUN_0046b8ec(param_1,3,0,0xc0,8,0x80);
  return;
}


// ===== 0044190c  FUN_0044190c =====

long FUN_0044190c(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    lVar2 = FUN_003c8474(0x1c0,"providers/implementations/ciphers/cipher_aes.c",0x55);
    if (lVar2 != 0) {
      uVar3 = FUN_00443768(0x80);
      FUN_0046cd08(lVar2,0x80,8,0x80,3,0,uVar3,param_1);
    }
    return lVar2;
  }
  return 0;
}


// ===== 00441990  FUN_00441990 =====

void FUN_00441990(undefined8 param_1)

{
  FUN_0046b8ec(param_1,3,0,0x80,8,0x80);
  return;
}


// ===== 004419a8  FUN_004419a8 =====

long FUN_004419a8(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    lVar2 = FUN_003c8474(0x1c0,"providers/implementations/ciphers/cipher_aes.c",0x57);
    if (lVar2 != 0) {
      uVar3 = FUN_00443774(0x100);
      FUN_0046cd08(lVar2,0x100,8,0x80,5,0,uVar3,param_1);
    }
    return lVar2;
  }
  return 0;
}


// ===== 00441a2c  FUN_00441a2c =====

void FUN_00441a2c(undefined8 param_1)

{
  FUN_0046b8ec(param_1,5,0,0x100,8,0x80);
  return;
}


// ===== 00441a44  FUN_00441a44 =====

long FUN_00441a44(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    lVar2 = FUN_003c8474(0x1c0,"providers/implementations/ciphers/cipher_aes.c",0x59);
    if (lVar2 != 0) {
      uVar3 = FUN_00443774(0xc0);
      FUN_0046cd08(lVar2,0xc0,8,0x80,5,0,uVar3,param_1);
    }
    return lVar2;
  }
  return 0;
}


// ===== 00441ac8  FUN_00441ac8 =====

void FUN_00441ac8(undefined8 param_1)

{
  FUN_0046b8ec(param_1,5,0,0xc0,8,0x80);
  return;
}


// ===== 00441ae0  FUN_00441ae0 =====

long FUN_00441ae0(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    lVar2 = FUN_003c8474(0x1c0,"providers/implementations/ciphers/cipher_aes.c",0x5b);
    if (lVar2 != 0) {
      uVar3 = FUN_00443774(0x80);
      FUN_0046cd08(lVar2,0x80,8,0x80,5,0,uVar3,param_1);
    }
    return lVar2;
  }
  return 0;
}


// ===== 00441b64  FUN_00441b64 =====

void FUN_00441b64(undefined8 param_1)

{
  FUN_0046b8ec(param_1,5,0,0x80,8,0x80);
  return;
}


// ===== 00441b7c  FUN_00441b7c =====

undefined8 FUN_00441b7c(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 in_x5;
  
  iVar1 = FUN_0046bdec();
  if (iVar1 != 0) {
    lVar2 = FUN_003cb19c(in_x5,"cts_mode");
    if (lVar2 == 0) {
LAB_00441bcc:
      uVar3 = FUN_0046bbc0(param_1,in_x5);
      return uVar3;
    }
    if (*(int *)(lVar2 + 8) == 4) {
      iVar1 = FUN_00446e40(*(undefined8 *)(lVar2 + 0x10));
      if (-1 < iVar1) {
        *(int *)(param_1 + 0x68) = iVar1;
        goto LAB_00441bcc;
      }
    }
    FUN_00379868();
    FUN_0037995c("providers/implementations/ciphers/cipher_aes_cts.inc",0x55,
                 "aes_cbc_cts_set_ctx_params");
    FUN_00379a5c(0x39,0x68,0);
  }
  return 0;
}


// ===== 00441c1c  FUN_00441c1c =====

undefined8 FUN_00441c1c(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 in_x5;
  
  iVar1 = FUN_0046bf90();
  if (iVar1 != 0) {
    lVar2 = FUN_003cb19c(in_x5,"cts_mode");
    if (lVar2 == 0) {
LAB_00441c6c:
      uVar3 = FUN_0046bbc0(param_1,in_x5);
      return uVar3;
    }
    if (*(int *)(lVar2 + 8) == 4) {
      iVar1 = FUN_00446e40(*(undefined8 *)(lVar2 + 0x10));
      if (-1 < iVar1) {
        *(int *)(param_1 + 0x68) = iVar1;
        goto LAB_00441c6c;
      }
    }
    FUN_00379868();
    FUN_0037995c("providers/implementations/ciphers/cipher_aes_cts.inc",0x55,
                 "aes_cbc_cts_set_ctx_params");
    FUN_00379a5c(0x39,0x68,0);
  }
  return 0;
}


// ===== 00441cbc  FUN_00441cbc =====

void FUN_00441cbc(undefined8 param_1)

{
  FUN_0046b8ec(param_1,2,4,0x100,0x80,0x80);
  return;
}


// ===== 00441cd4  FUN_00441cd4 =====

undefined8 FUN_00441cd4(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_003cb140(param_2,"cts_mode");
  if ((lVar2 != 0) &&
     ((lVar3 = FUN_00446e18(*(undefined4 *)(param_1 + 0x68)), lVar3 == 0 ||
      (iVar1 = FUN_003cd630(lVar2,lVar3), iVar1 == 0)))) {
    FUN_00379868();
    FUN_0037995c("providers/implementations/ciphers/cipher_aes_cts.inc",0x38,
                 "aes_cbc_cts_get_ctx_params");
    FUN_00379a5c(0x39,0x68,0);
    return 0;
  }
  uVar4 = FUN_0046caa0(param_1,param_2);
  return uVar4;
}


// ===== 00441d78  FUN_00441d78 =====

undefined8 FUN_00441d78(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_003cb19c(param_2,"cts_mode");
  if (lVar2 == 0) {
LAB_00441dbc:
    uVar3 = FUN_0046bbc0(param_1,param_2);
    return uVar3;
  }
  if (*(int *)(lVar2 + 8) == 4) {
    iVar1 = FUN_00446e40(*(undefined8 *)(lVar2 + 0x10));
    if (-1 < iVar1) {
      *(int *)(param_1 + 0x68) = iVar1;
      goto LAB_00441dbc;
    }
  }
  FUN_00379868();
  FUN_0037995c("providers/implementations/ciphers/cipher_aes_cts.inc",0x55,
               "aes_cbc_cts_set_ctx_params");
  FUN_00379a5c(0x39,0x68,0);
  return 0;
}


// ===== 00441e0c  FUN_00441e0c =====

undefined ** FUN_00441e0c(void)

{
  return &PTR_s_keylen_00783e38;
}


// ===== 00441e18  FUN_00441e18 =====

undefined ** FUN_00441e18(void)

{
  return &PTR_s_padding_00783f78;
}


// ===== 00441e24  FUN_00441e24 =====

void FUN_00441e24(undefined8 param_1)

{
  FUN_0046b8ec(param_1,2,4,0xc0,0x80,0x80);
  return;
}


// ===== 00441e3c  FUN_00441e3c =====

void FUN_00441e3c(undefined8 param_1)

{
  FUN_0046b8ec(param_1,2,4,0x80,0x80,0x80);
  return;
}


// ===== 00441e54  FUN_00441e54 =====

undefined8 FUN_00441e54(void)

{
  return 0;
}


// ===== 00441e5c  FUN_00441e5c =====

undefined8 FUN_00441e5c(void)

{
  return 0;
}


// ===== 00441e64  FUN_00441e64 =====

undefined8 FUN_00441e64(void)

{
  return 0;
}


// ===== 00441e6c  FUN_00441e6c =====

undefined8 FUN_00441e6c(void)

{
  return 0;
}


// ===== 00441e74  FUN_00441e74 =====

long FUN_00441e74(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    lVar2 = FUN_003c8474(0x1a0,"providers/implementations/ciphers/cipher_aes_ccm.c",0x1e);
    if (lVar2 != 0) {
      uVar3 = FUN_004420b0(0x80);
      FUN_0046dc80(lVar2,0x80,uVar3);
    }
    return lVar2;
  }
  return 0;
}


// ===== 00441ee0  FUN_00441ee0 =====

void FUN_00441ee0(undefined8 param_1)

{
  FUN_003c893c(param_1,0x1a0,"providers/implementations/ciphers/cipher_aes_ccm.c",0x3d);
  return;
}


// ===== 00441ef4  FUN_00441ef4 =====

void FUN_00441ef4(long param_1)

{
  long lVar1;
  
  if ((param_1 != 0) &&
     (lVar1 = FUN_003ca404(param_1,0x1a0,"providers/implementations/ciphers/cipher_aes_ccm.c",0x2b),
     lVar1 != 0)) {
    *(long *)(lVar1 + 0x80) = lVar1 + 0xa8;
  }
  return;
}


// ===== 00441f28  FUN_00441f28 =====

void FUN_00441f28(undefined8 param_1)

{
  FUN_0046b8ec(param_1,7,3,0x80,8,0x60);
  return;
}


// ===== 00441f40  FUN_00441f40 =====

long FUN_00441f40(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    lVar2 = FUN_003c8474(0x1a0,"providers/implementations/ciphers/cipher_aes_ccm.c",0x1e);
    if (lVar2 != 0) {
      uVar3 = FUN_004420b0(0xc0);
      FUN_0046dc80(lVar2,0xc0,uVar3);
    }
    return lVar2;
  }
  return 0;
}


// ===== 00441fac  FUN_00441fac =====

void FUN_00441fac(long param_1)

{
  long lVar1;
  
  if ((param_1 != 0) &&
     (lVar1 = FUN_003ca404(param_1,0x1a0,"providers/implementations/ciphers/cipher_aes_ccm.c",0x2b),
     lVar1 != 0)) {
    *(long *)(lVar1 + 0x80) = lVar1 + 0xa8;
  }
  return;
}


// ===== 00441fe0  FUN_00441fe0 =====

void FUN_00441fe0(undefined8 param_1)

{
  FUN_0046b8ec(param_1,7,3,0xc0,8,0x60);
  return;
}


// ===== 00441ff8  FUN_00441ff8 =====

long FUN_00441ff8(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    lVar2 = FUN_003c8474(0x1a0,"providers/implementations/ciphers/cipher_aes_ccm.c",0x1e);
    if (lVar2 != 0) {
      uVar3 = FUN_004420b0(0x100);
      FUN_0046dc80(lVar2,0x100,uVar3);
    }
    return lVar2;
  }
  return 0;
}


// ===== 00442064  FUN_00442064 =====

void FUN_00442064(long param_1)

{
  long lVar1;
  
  if ((param_1 != 0) &&
     (lVar1 = FUN_003ca404(param_1,0x1a0,"providers/implementations/ciphers/cipher_aes_ccm.c",0x2b),
     lVar1 != 0)) {
    *(long *)(lVar1 + 0x80) = lVar1 + 0xa8;
  }
  return;
}


// ===== 00442098  FUN_00442098 =====

void FUN_00442098(undefined8 param_1)

{
  FUN_0046b8ec(param_1,7,3,0x100,8,0x60);
  return;
}


// ===== 004420b0  FUN_004420b0 =====

undefined ** FUN_004420b0(void)

{
  return &PTR_FUN_007842e8;
}


// ===== 004420bc  FUN_004420bc =====

undefined8 FUN_004420bc(byte *param_1,undefined8 param_2,int param_3)

{
  FUN_003789ec(param_2,param_3 << 3,param_1 + 0xa8);
  FUN_003d6bb4(param_1 + 0x50,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 8),
               param_1 + 0xa8,PTR_FUN_007a1998);
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  *param_1 = *param_1 | 2;
  return 1;
}


// ===== 0044211c  FUN_0044211c =====

long FUN_0044211c(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    lVar2 = FUN_003c8474(0x3c0,"providers/implementations/ciphers/cipher_aes_gcm.c",0x1e);
    if (lVar2 != 0) {
      uVar3 = FUN_00442388(0x80);
      FUN_0046de64(param_1,lVar2,0x80,uVar3);
    }
    return lVar2;
  }
  return 0;
}


// ===== 00442190  FUN_00442190 =====

void FUN_00442190(undefined8 param_1)

{
  FUN_003c893c(param_1,0x3c0,"providers/implementations/ciphers/cipher_aes_gcm.c",0x39);
  return;
}


// ===== 004421a4  FUN_004421a4 =====

void FUN_004421a4(long param_1)

{
  long lVar1;
  
  if (((param_1 != 0) &&
      (lVar1 = FUN_003ca404(param_1,0x3c0,"providers/implementations/ciphers/cipher_aes_gcm.c",0x2d)
      , lVar1 != 0)) && (*(long *)(lVar1 + 0x280) != 0)) {
    *(long *)(lVar1 + 0x280) = lVar1 + 0x2c0;
  }
  return;
}


// ===== 004421e0  FUN_004421e0 =====

void FUN_004421e0(undefined8 param_1)

{
  FUN_0046b8ec(param_1,6,3,0x80,8,0x60);
  return;
}


// ===== 004421f8  FUN_004421f8 =====

long FUN_004421f8(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    lVar2 = FUN_003c8474(0x3c0,"providers/implementations/ciphers/cipher_aes_gcm.c",0x1e);
    if (lVar2 != 0) {
      uVar3 = FUN_00442388(0xc0);
      FUN_0046de64(param_1,lVar2,0xc0,uVar3);
    }
    return lVar2;
  }
  return 0;
}


// ===== 0044226c  FUN_0044226c =====

void FUN_0044226c(long param_1)

{
  long lVar1;
  
  if (((param_1 != 0) &&
      (lVar1 = FUN_003ca404(param_1,0x3c0,"providers/implementations/ciphers/cipher_aes_gcm.c",0x2d)
      , lVar1 != 0)) && (*(long *)(lVar1 + 0x280) != 0)) {
    *(long *)(lVar1 + 0x280) = lVar1 + 0x2c0;
  }
  return;
}


// ===== 004422a8  FUN_004422a8 =====

void FUN_004422a8(undefined8 param_1)

{
  FUN_0046b8ec(param_1,6,3,0xc0,8,0x60);
  return;
}


// ===== 004422c0  FUN_004422c0 =====

long FUN_004422c0(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    lVar2 = FUN_003c8474(0x3c0,"providers/implementations/ciphers/cipher_aes_gcm.c",0x1e);
    if (lVar2 != 0) {
      uVar3 = FUN_00442388(0x100);
      FUN_0046de64(param_1,lVar2,0x100,uVar3);
    }
    return lVar2;
  }
  return 0;
}


// ===== 00442334  FUN_00442334 =====

void FUN_00442334(long param_1)

{
  long lVar1;
  
  if (((param_1 != 0) &&
      (lVar1 = FUN_003ca404(param_1,0x3c0,"providers/implementations/ciphers/cipher_aes_gcm.c",0x2d)
      , lVar1 != 0)) && (*(long *)(lVar1 + 0x280) != 0)) {
    *(long *)(lVar1 + 0x280) = lVar1 + 0x2c0;
  }
  return;
}


// ===== 00442370  FUN_00442370 =====

void FUN_00442370(undefined8 param_1)

{
  FUN_0046b8ec(param_1,6,3,0x100,8,0x60);
  return;
}


// ===== 00442388  FUN_00442388 =====

undefined ** FUN_00442388(void)

{
  return &PTR_FUN_007845e8;
}


// ===== 00442394  FUN_00442394 =====

undefined8 FUN_00442394(long param_1,undefined8 param_2,int param_3)

{
  FUN_003789ec(param_2,param_3 << 3,param_1 + 0x2c0);
  FUN_003d8798(param_1 + 0xf8,param_1 + 0x2c0,PTR_FUN_007a1998);
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) | 4;
  return 1;
}


// ===== 004423ec  FUN_004423ec =====

undefined8 FUN_004423ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x54) & 1) == 0) {
    if (*(long *)(param_1 + 0x2b8) == 0) {
      iVar1 = FUN_003d91cc();
      if (iVar1 != 0) {
        return 0;
      }
    }
    else {
      iVar1 = FUN_003d98a0();
      if (iVar1 != 0) {
        return 0;
      }
    }
  }
  else if (*(long *)(param_1 + 0x2b8) == 0) {
    iVar1 = FUN_003d8e4c(param_1 + 0xf8,param_2,param_4,param_3);
    if (iVar1 != 0) {
      return 0;
    }
  }
  else {
    iVar1 = FUN_003d954c();
    if (iVar1 != 0) {
      return 0;
    }
  }
  return 1;
}


// ===== 00442474  FUN_00442474 =====

long FUN_00442474(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    lVar2 = FUN_003c8474(0x1c0,"providers/implementations/ciphers/cipher_aes_gcm_siv.c",0x22);
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x30) = 0x10;
      uVar3 = FUN_00442cb8(0x80);
      *(undefined8 *)(lVar2 + 8) = uVar3;
      uVar3 = FUN_0046b880(param_1);
      *(undefined8 *)(lVar2 + 0x18) = uVar3;
      *(undefined8 *)(lVar2 + 0x20) = param_1;
    }
    return lVar2;
  }
  return 0;
}


// ===== 004424ec  FUN_004424ec =====

void FUN_004424ec(long param_1)

{
  if (param_1 != 0) {
    FUN_003c893c(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x28),
                 "providers/implementations/ciphers/cipher_aes_gcm_siv.c",0x33);
    (**(code **)(*(long *)(param_1 + 8) + 0x18))(param_1);
    FUN_003c893c(param_1,0x1c0,"providers/implementations/ciphers/cipher_aes_gcm_siv.c",0x35);
    return;
  }
  return;
}


// ===== 00442550  FUN_00442550 =====

undefined8 * FUN_00442550(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 == 0) {
    return (undefined8 *)0x0;
  }
  if (*(long *)(param_1 + 8) == 0) {
    return (undefined8 *)0x0;
  }
  puVar2 = (undefined8 *)
           FUN_003ca404(param_1,0x1c0,"providers/implementations/ciphers/cipher_aes_gcm_siv.c",0x43)
  ;
  if (puVar2 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  lVar3 = *(long *)(param_1 + 0x10);
  puVar2[2] = 0;
  *puVar2 = 0;
  if (lVar3 != 0) {
    lVar3 = FUN_003ca404(lVar3,puVar2[5] + 0xf & 0xfffffffffffffff0,
                         "providers/implementations/ciphers/cipher_aes_gcm_siv.c",0x4b);
    puVar2[2] = lVar3;
    if (lVar3 == 0) goto LAB_00442600;
  }
  iVar1 = (**(code **)(*(long *)(param_1 + 8) + 0x10))(puVar2,param_1);
  if (iVar1 != 0) {
    return puVar2;
  }
  lVar3 = puVar2[2];
LAB_00442600:
  FUN_003c893c(lVar3,puVar2[5],"providers/implementations/ciphers/cipher_aes_gcm_siv.c",0x55);
  FUN_003c86b4(puVar2,"providers/implementations/ciphers/cipher_aes_gcm_siv.c",0x56);
  return (undefined8 *)0x0;
}


// ===== 00442640  FUN_00442640 =====

void FUN_00442640(void)

{
  FUN_00442b90();
  return;
}


// ===== 00442648  FUN_00442648 =====

void FUN_00442648(void)

{
  FUN_00442b90();
  return;
}


// ===== 00442650  FUN_00442650 =====

ulong FUN_00442650(long param_1,undefined8 param_2,ulong *param_3,ulong param_4,undefined8 param_5,
                  ulong param_6)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = FUN_0043eb70();
  if ((int)uVar2 != 0) {
    if (param_6 == 0) {
      if (param_3 != (ulong *)0x0) {
        *param_3 = 0;
        return 1;
      }
      return 1;
    }
    if (param_6 <= param_4) {
      iVar1 = (**(code **)(*(long *)(param_1 + 8) + 8))(param_1,param_2,param_5,param_6);
      if ((param_3 != (ulong *)0x0) && (iVar1 != 0)) {
        *param_3 = param_6;
      }
      return (ulong)(iVar1 != 0);
    }
    FUN_00379868();
    FUN_0037995c("providers/implementations/ciphers/cipher_aes_gcm_siv.c",0x9b,
                 "ossl_aes_gcm_siv_cipher");
    FUN_00379a5c(0x39,0x6a,0);
    uVar2 = 0;
  }
  return uVar2;
}


// ===== 00442750  FUN_00442750 =====

ulong FUN_00442750(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = FUN_0043eb70();
  if ((int)uVar2 != 0) {
    iVar1 = (**(code **)(*(long *)(param_1 + 8) + 8))(param_1,param_2,0,0);
    if ((param_3 != (undefined8 *)0x0) && (iVar1 != 0)) {
      *param_3 = 0;
    }
    uVar2 = (ulong)(iVar1 != 0);
  }
  return uVar2;
}


// ===== 004427b4  FUN_004427b4 =====

void FUN_004427b4(undefined8 param_1)

{
  FUN_0046b8ec(param_1,0x10005,3,0x80,8,0x60);
  return;
}


// ===== 004427d0  FUN_004427d0 =====

undefined8 FUN_004427d0(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_003cb140(param_2,&DAT_001e2a1d);
  if (((lVar2 == 0) || (*(int *)(lVar2 + 8) != 5)) ||
     ((((*(byte *)(param_1 + 0x1b8) ^ 0xff) & 5) == 0 &&
      ((*(long *)(lVar2 + 0x18) == 0x10 &&
       (iVar1 = FUN_003cd7b8(lVar2,param_1 + 0x88,0x10), iVar1 != 0)))))) {
    lVar2 = FUN_003cb140(param_2,"taglen");
    if ((lVar2 == 0) || (iVar1 = thunk_FUN_003cc2a4(lVar2,0x10), iVar1 != 0)) {
      lVar2 = FUN_003cb140(param_2,"keylen");
      if ((lVar2 == 0) ||
         (iVar1 = thunk_FUN_003cc2a4(lVar2,*(undefined8 *)(param_1 + 0x30)), iVar1 != 0)) {
        return 1;
      }
      uVar3 = 0xcb;
    }
    else {
      uVar3 = 0xc6;
    }
  }
  else {
    uVar3 = 0xc0;
  }
  FUN_00379868();
  FUN_0037995c("providers/implementations/ciphers/cipher_aes_gcm_siv.c",uVar3,
               "ossl_aes_gcm_siv_get_ctx_params");
  FUN_00379a5c(0x39,0x68,0);
  return 0;
}


// ===== 004428d0  FUN_004428d0 =====

undefined ** FUN_004428d0(void)

{
  return &PTR_s_keylen_007848e8;
}


// ===== 004428dc  FUN_004428dc =====

undefined8 FUN_004428dc(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long local_30;
  int local_24;
  
  local_24 = 0;
  if (param_2 == 0) {
    return 1;
  }
  lVar2 = FUN_003cb19c(param_2,&DAT_001e2a1d);
  if (lVar2 == 0) {
LAB_00442944:
    lVar2 = FUN_003cb19c(param_2,"speed");
    if (lVar2 != 0) {
      iVar1 = thunk_FUN_003cb68c(lVar2,&local_24);
      if (iVar1 == 0) {
        FUN_00379868();
        uVar3 = 0xf6;
        goto LAB_004429f8;
      }
      *(byte *)(param_1 + 0x1b8) = *(byte *)(param_1 + 0x1b8) & 0xdf | (local_24 != 0) << 5;
    }
    lVar2 = FUN_003cb19c(param_2,"keylen");
    if (lVar2 == 0) {
      return 1;
    }
    iVar1 = thunk_FUN_003cc060(lVar2,&local_30);
    if (iVar1 == 0) {
      uVar3 = 0x67;
      uVar4 = 0x100;
    }
    else {
      if (local_30 == *(long *)(param_1 + 0x30)) {
        return 1;
      }
      uVar3 = 0x69;
      uVar4 = 0x105;
    }
    FUN_00379868();
    FUN_0037995c("providers/implementations/ciphers/cipher_aes_gcm_siv.c",uVar4,
                 "ossl_aes_gcm_siv_set_ctx_params");
  }
  else {
    if ((*(int *)(lVar2 + 8) == 5) && (*(long *)(lVar2 + 0x18) == 0x10)) {
      if ((*(byte *)(param_1 + 0x1b8) & 1) == 0) {
        uVar4 = (*(undefined8 **)(lVar2 + 0x10))[1];
        uVar3 = **(undefined8 **)(lVar2 + 0x10);
        *(byte *)(param_1 + 0x1b8) = *(byte *)(param_1 + 0x1b8) | 2;
        *(undefined8 *)(param_1 + 0xa0) = uVar4;
        *(undefined8 *)(param_1 + 0x98) = uVar3;
      }
      goto LAB_00442944;
    }
    FUN_00379868();
    uVar3 = 0xeb;
LAB_004429f8:
    FUN_0037995c("providers/implementations/ciphers/cipher_aes_gcm_siv.c",uVar3,
                 "ossl_aes_gcm_siv_set_ctx_params");
    uVar3 = 0x67;
  }
  FUN_00379a5c(0x39,uVar3,0);
  return 0;
}


// ===== 00442a5c  FUN_00442a5c =====

undefined ** FUN_00442a5c(void)

{
  return &PTR_s_keylen_00784988;
}


// ===== 00442a68  FUN_00442a68 =====

long FUN_00442a68(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    lVar2 = FUN_003c8474(0x1c0,"providers/implementations/ciphers/cipher_aes_gcm_siv.c",0x22);
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x30) = 0x18;
      uVar3 = FUN_00442cb8(0xc0);
      *(undefined8 *)(lVar2 + 8) = uVar3;
      uVar3 = FUN_0046b880(param_1);
      *(undefined8 *)(lVar2 + 0x18) = uVar3;
      *(undefined8 *)(lVar2 + 0x20) = param_1;
    }
    return lVar2;
  }
  return 0;
}


// ===== 00442ae0  FUN_00442ae0 =====

void FUN_00442ae0(undefined8 param_1)

{
  FUN_0046b8ec(param_1,0x10005,3,0xc0,8,0x60);
  return;
}


// ===== 00442afc  FUN_00442afc =====

long FUN_00442afc(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    lVar2 = FUN_003c8474(0x1c0,"providers/implementations/ciphers/cipher_aes_gcm_siv.c",0x22);
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x30) = 0x20;
      uVar3 = FUN_00442cb8(0x100);
      *(undefined8 *)(lVar2 + 8) = uVar3;
      uVar3 = FUN_0046b880(param_1);
      *(undefined8 *)(lVar2 + 0x18) = uVar3;
      *(undefined8 *)(lVar2 + 0x20) = param_1;
    }
    return lVar2;
  }
  return 0;
}


// ===== 00442b74  FUN_00442b74 =====

void FUN_00442b74(undefined8 param_1)

{
  FUN_0046b8ec(param_1,0x10005,3,0x100,8,0x60);
  return;
}


// ===== 00442b90  FUN_00442b90 =====

undefined8
FUN_00442b90(long param_1,void *param_2,size_t param_3,undefined8 *param_4,long param_5,
            undefined8 param_6,byte param_7)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 == 0) {
    return 0;
  }
  *(byte *)(param_1 + 0x1b8) = *(byte *)(param_1 + 0x1b8) & 0xfe | param_7 & 1;
  if (param_2 == (void *)0x0) {
LAB_00442bf8:
    if (param_4 != (undefined8 *)0x0) {
      if (param_5 != 0xc) {
        FUN_00379868();
        FUN_0037995c("providers/implementations/ciphers/cipher_aes_gcm_siv.c",0x6f,
                     "ossl_aes_gcm_siv_init");
        uVar2 = 0x6d;
        goto LAB_00442c94;
      }
      uVar2 = *param_4;
      *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_4 + 1);
      *(undefined8 *)(param_1 + 0xa8) = uVar2;
    }
    iVar1 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1);
    if (iVar1 != 0) {
      uVar2 = FUN_004428dc(param_1,param_6);
      return uVar2;
    }
  }
  else {
    if (*(size_t *)(param_1 + 0x30) == param_3) {
      memcpy((void *)(param_1 + 0x38),param_2,param_3);
      goto LAB_00442bf8;
    }
    FUN_00379868();
    FUN_0037995c("providers/implementations/ciphers/cipher_aes_gcm_siv.c",0x68,
                 "ossl_aes_gcm_siv_init");
    uVar2 = 0x69;
LAB_00442c94:
    FUN_00379a5c(0x39,uVar2,0);
  }
  return 0;
}


// ===== 00442cb8  FUN_00442cb8 =====

undefined ** FUN_00442cb8(void)

{
  return &PTR_FUN_00784a28;
}


// ===== 00442cc4  FUN_00442cc4 =====

undefined8 FUN_00442cc4(long *param_1)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int local_60;
  long local_5c;
  undefined4 local_54;
  long local_50 [2];
  undefined4 local_24;
  
  lVar5 = param_1[6];
  if (lVar5 == 0x10) {
    uVar4 = FUN_003823dc(param_1[3],"AES-128-ECB",0);
    lVar5 = *param_1;
  }
  else if (lVar5 == 0x20) {
    uVar4 = FUN_003823dc(param_1[3],"AES-256-ECB",0);
    lVar5 = *param_1;
  }
  else {
    if (lVar5 != 0x18) {
      uVar4 = 0;
      goto LAB_00442ea8;
    }
    uVar4 = FUN_003823dc(param_1[3],"AES-192-ECB",0);
    lVar5 = *param_1;
  }
  if (lVar5 == 0) {
    lVar5 = FUN_0037fab8();
    *param_1 = lVar5;
    if (lVar5 == 0) goto LAB_00442ea8;
  }
  iVar2 = FUN_00381070(lVar5,uVar4,param_1 + 7,0,0);
  if (iVar2 != 0) {
    local_5c = param_1[0x15];
    local_54 = (undefined4)param_1[0x16];
    local_60 = 0;
    local_24 = 0x10;
    iVar2 = FUN_003803e0(*param_1,local_50,&local_24,&local_60,0x10);
    if (iVar2 != 0) {
      local_60 = 1;
      param_1[0xf] = local_50[0];
      local_24 = 0x10;
      iVar2 = FUN_003803e0(*param_1,local_50,&local_24,&local_60,0x10);
      if (iVar2 != 0) {
        param_1[0x10] = local_50[0];
        if (param_1[6] != 0) {
          iVar2 = 2;
          uVar6 = 0;
          do {
            local_24 = 0x10;
            local_60 = iVar2;
            iVar3 = FUN_003803e0(*param_1,local_50,&local_24,&local_60,0x10);
            if (iVar3 == 0) goto LAB_00442ea8;
            uVar1 = uVar6 + 8;
            iVar2 = iVar2 + 1;
            *(long *)((long)param_1 + uVar6 + 0x58) = local_50[0];
            uVar6 = uVar1;
          } while (uVar1 < (ulong)param_1[6]);
        }
        iVar2 = FUN_00381070(*param_1,uVar4,param_1 + 0xb,0,0);
        if (iVar2 != 0) {
          *(byte *)(param_1 + 0x37) = *(byte *)(param_1 + 0x37) & 0xe7;
          FUN_0037fa4c(uVar4);
          return 1;
        }
      }
    }
  }
LAB_00442ea8:
  FUN_0037fae8(*param_1);
  FUN_0037fa4c(uVar4);
  *param_1 = 0;
  return 0;
}


// ===== 00442ed8  FUN_00442ed8 =====

/* WARNING: Type propagation algorithm not settling */

bool FUN_00442ed8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  ulong uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  byte bVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  long lVar20;
  undefined4 local_bc;
  undefined1 auStack_b8 [16];
  undefined8 local_a8;
  ulong local_a0;
  undefined4 local_94;
  long local_90;
  long lStack_88;
  int local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  uint uStack_74;
  long local_70 [2];
  
  if (param_3 == (undefined8 *)0x0) {
    if ((*(byte *)(param_1 + 0x37) & 1) == 0) {
      iVar4 = FUN_003c46d4(param_1 + 0x11,param_1 + 0x13,0x10);
      bVar2 = (bool)(*(byte *)(param_1 + 0x37) >> 1 & 1);
      if (iVar4 != 0) {
        bVar2 = false;
      }
      return bVar2;
    }
    return (bool)(*(byte *)(param_1 + 0x37) >> 2 & 1);
  }
  if (param_2 == (undefined8 *)0x0) {
    if (param_4 == 0) {
      FUN_003c86b4(param_1[2],"providers/implementations/ciphers/cipher_aes_gcm_siv_hw.c",0x74);
      param_1[2] = 0;
      param_1[5] = 0;
      return true;
    }
    uVar17 = param_4 + param_1[5] + 0xf & 0xfffffffffffffff0;
    if (uVar17 < 0x1000000001) {
      lVar6 = FUN_003c8558(param_1[2],uVar17,
                           "providers/implementations/ciphers/cipher_aes_gcm_siv_hw.c",0x7e);
      if (lVar6 == 0) {
        return false;
      }
      param_1[2] = lVar6;
      memcpy((void *)(lVar6 + param_1[5]),param_3,param_4);
      param_4 = param_1[5] + param_4;
      param_1[5] = param_4;
      if (param_4 <= uVar17 && uVar17 - param_4 != 0) {
        memset((void *)(param_1[2] + param_4),0,uVar17 - param_4);
        return true;
      }
      return true;
    }
LAB_00443150:
    bVar3 = false;
  }
  else {
    bVar7 = *(byte *)(param_1 + 0x37);
    if ((bVar7 & 1) == 0) {
      *(byte *)(param_1 + 0x37) = bVar7 & 0xfa;
      if ((bVar7 & 0x30) == 0x10) goto LAB_00443150;
      if (0x1000000000 < (long)param_4) {
        return false;
      }
      if (param_4 == 0) {
        return false;
      }
      uVar9 = *(undefined8 *)((long)param_1 + 0x9f);
      uVar17 = 0;
      bVar2 = false;
      local_80 = (int)param_1[0x13];
      uStack_7c._0_3_ = (undefined3)((ulong)param_1[0x13] >> 0x20);
      uStack_7c._3_1_ = (undefined1)uVar9;
      local_78 = (undefined4)((ulong)uVar9 >> 8);
      uStack_74._0_3_ = (undefined3)((ulong)uVar9 >> 0x28);
      uVar10 = (long)param_2 - (long)param_3;
      uStack_74 = CONCAT13(*(undefined1 *)((long)param_1 + 0xa7),(undefined3)uStack_74) | 0x80000000
      ;
      uVar16 = param_4;
      puVar14 = param_2;
      do {
        uVar1 = uVar16;
        if (0xf < uVar16) {
          uVar1 = 0x10;
        }
        if (uVar1 < 2) {
          uVar1 = 1;
        }
        local_90 = CONCAT44(local_90._4_4_,0x10);
        iVar4 = FUN_003803e0(*param_1,local_70,&local_90,&local_80,0x10);
        uVar8 = 0;
        local_80 = local_80 + 1;
        if (uVar16 < 8) goto LAB_0044306c;
        if (uVar10 < 0x10) goto LAB_0044306c;
        if (uVar16 < 0x10) {
          uVar8 = 0;
LAB_00443008:
          uVar11 = uVar8;
          do {
            uVar9 = *(undefined8 *)((long)param_3 + uVar11);
            uVar19 = *(undefined8 *)((long)local_70 + uVar11);
            *(ulong *)((long)puVar14 + uVar11) =
                 CONCAT17((byte)((ulong)uVar19 >> 0x38) ^ (byte)((ulong)uVar9 >> 0x38),
                          CONCAT16((byte)((ulong)uVar19 >> 0x30) ^ (byte)((ulong)uVar9 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar19 >> 0x28) ^
                                            (byte)((ulong)uVar9 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar19 >> 0x20) ^
                                                     (byte)((ulong)uVar9 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar19 >> 0x18) ^
                                                              (byte)((ulong)uVar9 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar19 >> 0x10)
                                                                       ^ (byte)((ulong)uVar9 >> 0x10
                                                                               ),
                                                                       CONCAT11((byte)((ulong)uVar19
                                                                                      >> 8) ^
                                                                                (byte)((ulong)uVar9
                                                                                      >> 8),
                                                                                (byte)uVar19 ^
                                                                                (byte)uVar9)))))));
            uVar11 = uVar11 + 8;
            uVar8 = uVar1 & 0x18;
          } while ((uVar1 & 0x18) != uVar11);
          for (; uVar1 != uVar8; uVar8 = uVar8 + 1) {
LAB_0044306c:
            *(byte *)((long)puVar14 + uVar8) =
                 *(byte *)((long)local_70 + uVar8) ^ *(byte *)((long)param_3 + uVar8);
          }
        }
        else {
          uVar11 = uVar1 & 0x10;
          uVar8 = uVar1 & 0x10;
          plVar12 = local_70;
          puVar13 = param_3;
          puVar15 = puVar14;
          do {
            uVar19 = puVar13[1];
            uVar9 = *puVar13;
            uVar11 = uVar11 - 0x10;
            lVar20 = plVar12[1];
            lVar6 = *plVar12;
            puVar15[1] = CONCAT17((byte)((ulong)lVar20 >> 0x38) ^ (byte)((ulong)uVar19 >> 0x38),
                                  CONCAT16((byte)((ulong)lVar20 >> 0x30) ^
                                           (byte)((ulong)uVar19 >> 0x30),
                                           CONCAT15((byte)((ulong)lVar20 >> 0x28) ^
                                                    (byte)((ulong)uVar19 >> 0x28),
                                                    CONCAT14((byte)((ulong)lVar20 >> 0x20) ^
                                                             (byte)((ulong)uVar19 >> 0x20),
                                                             CONCAT13((byte)((ulong)lVar20 >> 0x18)
                                                                      ^ (byte)((ulong)uVar19 >> 0x18
                                                                              ),
                                                                      CONCAT12((byte)((ulong)lVar20
                                                                                     >> 0x10) ^
                                                                               (byte)((ulong)uVar19
                                                                                     >> 0x10),
                                                                               CONCAT11((byte)((
                                                  ulong)lVar20 >> 8) ^ (byte)((ulong)uVar19 >> 8),
                                                  (byte)lVar20 ^ (byte)uVar19)))))));
            *puVar15 = CONCAT17((byte)((ulong)lVar6 >> 0x38) ^ (byte)((ulong)uVar9 >> 0x38),
                                CONCAT16((byte)((ulong)lVar6 >> 0x30) ^ (byte)((ulong)uVar9 >> 0x30)
                                         ,CONCAT15((byte)((ulong)lVar6 >> 0x28) ^
                                                   (byte)((ulong)uVar9 >> 0x28),
                                                   CONCAT14((byte)((ulong)lVar6 >> 0x20) ^
                                                            (byte)((ulong)uVar9 >> 0x20),
                                                            CONCAT13((byte)((ulong)lVar6 >> 0x18) ^
                                                                     (byte)((ulong)uVar9 >> 0x18),
                                                                     CONCAT12((byte)((ulong)lVar6 >>
                                                                                    0x10) ^
                                                                              (byte)((ulong)uVar9 >>
                                                                                    0x10),
                                                                              CONCAT11((byte)((ulong
                                                  )lVar6 >> 8) ^ (byte)((ulong)uVar9 >> 8),
                                                  (byte)lVar6 ^ (byte)uVar9)))))));
            plVar12 = plVar12 + 2;
            puVar13 = puVar13 + 2;
            puVar15 = puVar15 + 2;
          } while (uVar11 != 0);
          if (uVar1 != uVar8) {
            if (((uint)uVar1 >> 3 & 1) == 0) goto LAB_0044306c;
            goto LAB_00443008;
          }
        }
        uVar17 = uVar17 + 0x10;
        puVar14 = puVar14 + 2;
        param_3 = param_3 + 2;
        bVar2 = (bool)(bVar2 | iVar4 == 0);
        uVar16 = uVar16 - 0x10;
      } while (uVar17 < param_4);
      local_80 = 0;
      uStack_7c = 0;
      local_78 = 0;
      uStack_74 = 0;
      local_70[0] = param_1[5] << 3;
      local_70[1] = param_4 << 3;
      FUN_00443618(param_1 + 0x17,param_1 + 0xf);
      if (param_1[2] != 0) {
        FUN_00443684(param_1 + 0x17,&local_80,param_1[2],param_1[5] + 0xf & 0xfffffffffffffff0);
      }
      uVar17 = param_4 & 0xfffffffffffffff0;
      if (uVar17 != 0) {
        FUN_00443684(param_1 + 0x17,&local_80,param_2,uVar17);
      }
      param_4 = param_4 & 0xf;
      if (param_4 != 0) {
        memset((void *)((long)&local_90 + param_4),0,0x10 - param_4);
        memcpy(&local_90,(void *)((long)param_2 + uVar17),param_4);
        FUN_00443684(param_1 + 0x17,&local_80,&local_90,0x10);
      }
      FUN_00443684(param_1 + 0x17,&local_80,local_70,0x10);
      uVar9 = param_1[0x15];
      local_80 = CONCAT13((byte)((uint)local_80 >> 0x18) ^ (byte)((ulong)uVar9 >> 0x18),
                          CONCAT12((byte)((uint)local_80 >> 0x10) ^ (byte)((ulong)uVar9 >> 0x10),
                                   CONCAT11((byte)((uint)local_80 >> 8) ^ (byte)((ulong)uVar9 >> 8),
                                            (byte)local_80 ^ (byte)uVar9)));
      uStack_7c = (undefined4)
                  (CONCAT17((byte)((uint)uStack_7c >> 0x18) ^ (byte)((ulong)uVar9 >> 0x38),
                            CONCAT16((byte)((uint)uStack_7c >> 0x10) ^ (byte)((ulong)uVar9 >> 0x30),
                                     CONCAT15((byte)((uint)uStack_7c >> 8) ^
                                              (byte)((ulong)uVar9 >> 0x28),
                                              CONCAT14((byte)uStack_7c ^
                                                       (byte)((ulong)uVar9 >> 0x20),local_80)))) >>
                  0x20);
      uVar18 = *(undefined4 *)(param_1 + 0x16);
      uStack_74 = uStack_74 & 0x7fffffff;
      local_a8 = CONCAT44(local_a8._4_4_,0x10);
      local_78 = CONCAT13((byte)((uint)local_78 >> 0x18) ^ (byte)((uint)uVar18 >> 0x18),
                          CONCAT12((byte)((uint)local_78 >> 0x10) ^ (byte)((uint)uVar18 >> 0x10),
                                   CONCAT11((byte)((uint)local_78 >> 8) ^ (byte)((uint)uVar18 >> 8),
                                            (byte)local_78 ^ (byte)uVar18)));
      iVar4 = FUN_003803e0(*param_1,param_1 + 0x11,&local_a8,&local_80,0x10);
      bVar3 = !bVar2 && iVar4 != 0;
      bVar7 = 4;
      if (bVar2 || iVar4 == 0) {
        bVar7 = 0;
      }
      bVar7 = *(byte *)(param_1 + 0x37) & 0xfb | bVar7 | 0x10;
    }
    else {
      *(byte *)(param_1 + 0x37) = bVar7 & 0xfb;
      if ((bVar7 & 0x28) == 8) goto LAB_00443150;
      if (0x1000000000 < (long)param_4) {
        return false;
      }
      if (param_4 == 0) {
        return false;
      }
      lStack_88 = param_4 << 3;
      local_a8 = 0;
      local_a0 = 0;
      local_90 = param_1[5] << 3;
      FUN_00443618(param_1 + 0x17,param_1 + 0xf);
      if (param_1[2] != 0) {
        FUN_00443684(param_1 + 0x17,&local_a8,param_1[2],param_1[5] + 0xf & 0xfffffffffffffff0);
      }
      uVar17 = param_4 & 0xfffffffffffffff0;
      if (uVar17 != 0) {
        FUN_00443684(param_1 + 0x17,&local_a8,param_3,uVar17);
      }
      uVar16 = param_4 & 0xf;
      if (uVar16 != 0) {
        memset(auStack_b8 + uVar16,0,0x10 - uVar16);
        memcpy(auStack_b8,(void *)((long)param_3 + uVar17),uVar16);
        FUN_00443684(param_1 + 0x17,&local_a8,auStack_b8,0x10);
      }
      FUN_00443684(param_1 + 0x17,&local_a8,&local_90,0x10);
      uVar9 = param_1[0x15];
      local_a8 = CONCAT17((byte)((ulong)local_a8 >> 0x38) ^ (byte)((ulong)uVar9 >> 0x38),
                          CONCAT16((byte)((ulong)local_a8 >> 0x30) ^ (byte)((ulong)uVar9 >> 0x30),
                                   CONCAT15((byte)((ulong)local_a8 >> 0x28) ^
                                            (byte)((ulong)uVar9 >> 0x28),
                                            CONCAT14((byte)((ulong)local_a8 >> 0x20) ^
                                                     (byte)((ulong)uVar9 >> 0x20),
                                                     CONCAT13((byte)((ulong)local_a8 >> 0x18) ^
                                                              (byte)((ulong)uVar9 >> 0x18),
                                                              CONCAT12((byte)((ulong)local_a8 >>
                                                                             0x10) ^
                                                                       (byte)((ulong)uVar9 >> 0x10),
                                                                       CONCAT11((byte)((ulong)
                                                  local_a8 >> 8) ^ (byte)((ulong)uVar9 >> 8),
                                                  (byte)local_a8 ^ (byte)uVar9)))))));
      uVar18 = *(undefined4 *)(param_1 + 0x16);
      local_bc = 0x10;
      local_a0 = CONCAT44((int)(local_a0 >> 0x20),
                          CONCAT13((byte)(local_a0 >> 0x18) ^ (byte)((uint)uVar18 >> 0x18),
                                   CONCAT12((byte)(local_a0 >> 0x10) ^ (byte)((uint)uVar18 >> 0x10),
                                            CONCAT11((byte)(local_a0 >> 8) ^
                                                     (byte)((uint)uVar18 >> 8),
                                                     (byte)local_a0 ^ (byte)uVar18)))) &
                 0x7fffffffffffffff;
      iVar4 = FUN_003803e0(*param_1,param_1 + 0x11,&local_bc,&local_a8,0x10);
      uVar17 = 0;
      uVar9 = *(undefined8 *)((long)param_1 + 0x8f);
      bVar2 = false;
      local_80 = (int)param_1[0x11];
      uVar10 = (long)param_2 - (long)param_3;
      uStack_7c._0_3_ = (undefined3)((ulong)param_1[0x11] >> 0x20);
      uStack_7c._3_1_ = (undefined1)uVar9;
      local_78 = (undefined4)((ulong)uVar9 >> 8);
      uStack_74._0_3_ = (undefined3)((ulong)uVar9 >> 0x28);
      uStack_74 = CONCAT13(*(undefined1 *)((long)param_1 + 0x97),(undefined3)uStack_74) | 0x80000000
      ;
      uVar16 = param_4;
      do {
        uVar1 = uVar16;
        if (0xf < uVar16) {
          uVar1 = 0x10;
        }
        if (uVar1 < 2) {
          uVar1 = 1;
        }
        local_94 = 0x10;
        iVar5 = FUN_003803e0(*param_1,local_70,&local_94,&local_80,0x10);
        uVar8 = 0;
        local_80 = local_80 + 1;
        if (uVar16 < 8) goto LAB_004433a4;
        if (uVar10 < 0x10) goto LAB_004433a4;
        if (uVar16 < 0x10) {
          uVar8 = 0;
LAB_00443340:
          uVar11 = uVar8;
          do {
            uVar9 = *(undefined8 *)((long)param_3 + uVar11);
            uVar19 = *(undefined8 *)((long)local_70 + uVar11);
            *(ulong *)((long)param_2 + uVar11) =
                 CONCAT17((byte)((ulong)uVar19 >> 0x38) ^ (byte)((ulong)uVar9 >> 0x38),
                          CONCAT16((byte)((ulong)uVar19 >> 0x30) ^ (byte)((ulong)uVar9 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar19 >> 0x28) ^
                                            (byte)((ulong)uVar9 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar19 >> 0x20) ^
                                                     (byte)((ulong)uVar9 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar19 >> 0x18) ^
                                                              (byte)((ulong)uVar9 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar19 >> 0x10)
                                                                       ^ (byte)((ulong)uVar9 >> 0x10
                                                                               ),
                                                                       CONCAT11((byte)((ulong)uVar19
                                                                                      >> 8) ^
                                                                                (byte)((ulong)uVar9
                                                                                      >> 8),
                                                                                (byte)uVar19 ^
                                                                                (byte)uVar9)))))));
            uVar11 = uVar11 + 8;
            uVar8 = uVar1 & 0x18;
          } while ((uVar1 & 0x18) != uVar11);
          for (; uVar1 != uVar8; uVar8 = uVar8 + 1) {
LAB_004433a4:
            *(byte *)((long)param_2 + uVar8) =
                 *(byte *)((long)local_70 + uVar8) ^ *(byte *)((long)param_3 + uVar8);
          }
        }
        else {
          uVar11 = uVar1 & 0x10;
          uVar8 = uVar1 & 0x10;
          plVar12 = local_70;
          puVar14 = param_3;
          puVar13 = param_2;
          do {
            uVar19 = puVar14[1];
            uVar9 = *puVar14;
            uVar11 = uVar11 - 0x10;
            lVar20 = plVar12[1];
            lVar6 = *plVar12;
            puVar13[1] = CONCAT17((byte)((ulong)lVar20 >> 0x38) ^ (byte)((ulong)uVar19 >> 0x38),
                                  CONCAT16((byte)((ulong)lVar20 >> 0x30) ^
                                           (byte)((ulong)uVar19 >> 0x30),
                                           CONCAT15((byte)((ulong)lVar20 >> 0x28) ^
                                                    (byte)((ulong)uVar19 >> 0x28),
                                                    CONCAT14((byte)((ulong)lVar20 >> 0x20) ^
                                                             (byte)((ulong)uVar19 >> 0x20),
                                                             CONCAT13((byte)((ulong)lVar20 >> 0x18)
                                                                      ^ (byte)((ulong)uVar19 >> 0x18
                                                                              ),
                                                                      CONCAT12((byte)((ulong)lVar20
                                                                                     >> 0x10) ^
                                                                               (byte)((ulong)uVar19
                                                                                     >> 0x10),
                                                                               CONCAT11((byte)((
                                                  ulong)lVar20 >> 8) ^ (byte)((ulong)uVar19 >> 8),
                                                  (byte)lVar20 ^ (byte)uVar19)))))));
            *puVar13 = CONCAT17((byte)((ulong)lVar6 >> 0x38) ^ (byte)((ulong)uVar9 >> 0x38),
                                CONCAT16((byte)((ulong)lVar6 >> 0x30) ^ (byte)((ulong)uVar9 >> 0x30)
                                         ,CONCAT15((byte)((ulong)lVar6 >> 0x28) ^
                                                   (byte)((ulong)uVar9 >> 0x28),
                                                   CONCAT14((byte)((ulong)lVar6 >> 0x20) ^
                                                            (byte)((ulong)uVar9 >> 0x20),
                                                            CONCAT13((byte)((ulong)lVar6 >> 0x18) ^
                                                                     (byte)((ulong)uVar9 >> 0x18),
                                                                     CONCAT12((byte)((ulong)lVar6 >>
                                                                                    0x10) ^
                                                                              (byte)((ulong)uVar9 >>
                                                                                    0x10),
                                                                              CONCAT11((byte)((ulong
                                                  )lVar6 >> 8) ^ (byte)((ulong)uVar9 >> 8),
                                                  (byte)lVar6 ^ (byte)uVar9)))))));
            plVar12 = plVar12 + 2;
            puVar14 = puVar14 + 2;
            puVar13 = puVar13 + 2;
          } while (uVar11 != 0);
          if (uVar1 != uVar8) {
            if (((uint)uVar1 >> 3 & 1) == 0) goto LAB_004433a4;
            goto LAB_00443340;
          }
        }
        uVar17 = uVar17 + 0x10;
        param_2 = param_2 + 2;
        param_3 = param_3 + 2;
        bVar2 = (bool)(bVar2 | iVar5 == 0);
        uVar16 = uVar16 - 0x10;
      } while (uVar17 < param_4);
      bVar3 = iVar4 != 0 && !bVar2;
      bVar7 = 0xc;
      if (iVar4 == 0 || bVar2) {
        bVar7 = 8;
      }
      bVar7 = *(byte *)(param_1 + 0x37) & 0xf3 | bVar7;
    }
    *(byte *)(param_1 + 0x37) = bVar7;
  }
  return bVar3;
}


// ===== 00443584  FUN_00443584 =====

undefined8 FUN_00443584(long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  
  *param_1 = 0;
  if (*param_2 == 0) {
    return 1;
  }
  lVar2 = FUN_0037fab8();
  *param_1 = lVar2;
  if (lVar2 != 0) {
    iVar1 = FUN_0038213c(lVar2,*param_2);
    if (iVar1 != 0) {
      return 1;
    }
    lVar2 = *param_1;
  }
  FUN_0037fae8(lVar2);
  *param_1 = 0;
  return 0;
}


// ===== 004435f0  FUN_004435f0 =====

void FUN_004435f0(undefined8 *param_1)

{
  FUN_0037fae8(*param_1);
  *param_1 = 0;
  return;
}


// ===== 00443618  FUN_00443618 =====

void FUN_00443618(undefined8 param_1,undefined1 (*param_2) [16])

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  ulong local_20;
  ulong uStack_18;
  
  if (((ulong)param_2 & 7) == 0) {
    uVar4 = (*(ulong *)(*param_2 + 8) & 0xff00ff00ff00ff00) >> 8 |
            (*(ulong *)(*param_2 + 8) & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    uVar3 = uVar4 >> 0x20 | uVar4 << 0x20;
    uVar4 = (*(ulong *)*param_2 & 0xff00ff00ff00ff00) >> 8 |
            (*(ulong *)*param_2 & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
  }
  else {
    auVar5 = NEON_rev64(*param_2,1);
    auVar5 = NEON_ext(auVar5,auVar5,8,1);
    uVar4 = auVar5._8_8_;
    uVar3 = auVar5._0_8_;
  }
  uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar4 & 0xffff0000ffff0000) >> 0x10;
  uVar4 = uVar1 | (uVar4 & 0xffff0000ffff) << 0x10;
  uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
  uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
  uVar2 = uVar3 >> 0x20;
  local_20 = -((uVar1 & 0x100000000) >> 0x20) & 0xe100000000000000 ^ (uVar2 | uVar3 << 0x20) >> 1;
  uStack_18 = (uVar4 >> 0x20 | uVar4 << 0x20) >> 1 | uVar2 << 0x3f;
  FUN_003d86b4(param_1,&local_20);
  return;
}


// ===== 00443684  FUN_00443684 =====

void FUN_00443684(undefined8 param_1,undefined1 (*param_2) [16],long param_3,ulong param_4)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  auVar2 = NEON_rev64(*param_2,1);
  auVar2 = NEON_ext(auVar2,auVar2,8,1);
  uStack_58 = auVar2._8_8_;
  local_60 = auVar2._0_8_;
  if (param_4 != 0) {
    uVar1 = 0;
    do {
      auVar2 = NEON_rev64(*(undefined1 (*) [16])(param_3 + uVar1),1);
      auVar2 = NEON_ext(auVar2,auVar2,8,1);
      uStack_68 = auVar2._8_8_;
      local_70 = auVar2._0_8_;
      thunk_FUN_003da064(&local_60,param_1,&local_70,0x10);
      uVar1 = uVar1 + 0x10;
    } while (uVar1 < param_4);
  }
  auVar2._8_8_ = uStack_58;
  auVar2._0_8_ = local_60;
  auVar2 = NEON_rev64(auVar2,1);
  auVar2 = NEON_ext(auVar2,auVar2,8,1);
  *(long *)(*param_2 + 8) = auVar2._8_8_;
  *(long *)*param_2 = auVar2._0_8_;
  return;
}


// ===== 0044372c  FUN_0044372c =====

undefined ** FUN_0044372c(void)

{
  return &PTR_FUN_00784a48;
}


// ===== 00443738  FUN_00443738 =====

undefined ** FUN_00443738(void)

{
  return &PTR_FUN_00784a60;
}


// ===== 00443744  FUN_00443744 =====

undefined ** FUN_00443744(void)

{
  return &PTR_FUN_00784a78;
}


// ===== 00443750  FUN_00443750 =====

undefined ** FUN_00443750(void)

{
  return &PTR_FUN_00784a90;
}


// ===== 0044375c  FUN_0044375c =====

undefined ** FUN_0044375c(void)

{
  return &PTR_FUN_00784aa8;
}


// ===== 00443768  FUN_00443768 =====

undefined ** FUN_00443768(void)

{
  return &PTR_FUN_00784ac0;
}


// ===== 00443774  FUN_00443774 =====

undefined ** FUN_00443774(void)

{
  return &PTR_FUN_00784ad8;
}


// ===== 00443780  FUN_00443780 =====

undefined8 FUN_00443780(long param_1,undefined8 param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  code *pcVar3;
  
  *(long *)(param_1 + 0xb0) = param_1 + 0xc0;
  if ((*(int *)(param_1 + 0x40) - 1U < 2) && ((*(byte *)(param_1 + 0x6c) >> 1 & 1) == 0)) {
    iVar2 = FUN_00378fcc(param_2,param_3 << 3);
    pcVar3 = FUN_00379544;
  }
  else {
    iVar2 = FUN_003789ec(param_2,param_3 << 3);
    pcVar3 = FUN_00379208;
  }
  pcVar1 = FUN_003789d0;
  if (*(int *)(param_1 + 0x40) != 2) {
    pcVar1 = (code *)0x0;
  }
  *(code **)(param_1 + 0x30) = pcVar3;
  *(code **)(param_1 + 0x38) = pcVar1;
  if (-1 < iVar2) {
    return 1;
  }
  FUN_00379868();
  FUN_0037995c("providers/implementations/ciphers/cipher_aes_hw.c",0x75,"cipher_hw_aes_initkey");
  FUN_00379a5c(0x39,0x65,0);
  return 0;
}


// ===== 0044384c  FUN_0044384c =====

void FUN_0044384c(void *param_1,void *param_2)

{
  memcpy(param_1,param_2,0x1c0);
  *(long *)((long)param_1 + 0xb0) = (long)param_1 + 0xc0;
  return;
}


// ===== 00443878  FUN_00443878 =====

long FUN_00443878(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    lVar2 = FUN_003c8474(0x3b0,"providers/implementations/ciphers/cipher_aes_ocb.c",0x13a);
    if (lVar2 != 0) {
      uVar3 = FUN_004446f4(0x100);
      FUN_0046cd08(lVar2,0x100,0x80,0x60,0x10003,3,uVar3,0);
      *(undefined8 *)(lVar2 + 0x368) = 0x10;
    }
    return lVar2;
  }
  return 0;
}


// ===== 00443900  FUN_00443900 =====

void FUN_00443900(void)

{
  FUN_00444354();
  return;
}


// ===== 00443908  FUN_00443908 =====

void FUN_00443908(void)

{
  FUN_00444354();
  return;
}


// ===== 00443910  FUN_00443910 =====

ulong FUN_00443910(long param_1,long param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  code *pcVar6;
  
  if ((*(byte *)(param_1 + 0x364) & 1) == 0) {
LAB_00443930:
    uVar5 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x360);
    uVar5 = 0;
    if ((iVar1 == 0) || (uVar5 = 0, iVar1 == 3)) goto LAB_00443934;
    if (iVar1 == 1) {
      iVar1 = FUN_003da7c4(param_1 + 0x2b0,param_1 + 0x20,*(undefined8 *)(param_1 + 0x50),
                           *(undefined8 *)(param_1 + 0x368));
      if (iVar1 != 1) goto LAB_00443930;
      *(undefined4 *)(param_1 + 0x360) = 2;
    }
    if (param_6 != 0) {
      if (param_2 == 0) {
        lVar3 = param_1 + 0x3a0;
        lVar4 = param_1 + 0x378;
        param_2 = 0;
        pcVar6 = FUN_004444a4;
      }
      else {
        lVar3 = param_1 + 0x390;
        lVar4 = param_1 + 0x370;
        pcVar6 = FUN_004444c8;
      }
      uVar2 = FUN_00444500(param_1,lVar3,lVar4,param_2,param_3,param_4,param_5,param_6,pcVar6);
      return uVar2;
    }
    uVar5 = 1;
    *param_3 = 0;
  }
LAB_00443934:
  return (ulong)uVar5;
}


// ===== 00443a44  FUN_00443a44 =====

undefined8 FUN_00443a44(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_0043eb70();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  if ((*(byte *)(param_1 + 0x364) & 1) == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x360);
  if (iVar1 == 0) {
    return 0;
  }
  if (iVar1 == 3) {
    return 0;
  }
  if (iVar1 == 1) {
    iVar1 = FUN_003da7c4(param_1 + 0x2b0,param_1 + 0x20,*(undefined8 *)(param_1 + 0x50),
                         *(undefined8 *)(param_1 + 0x368));
    if (iVar1 != 1) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x360) = 2;
  }
  *param_3 = 0;
  if (*(long *)(param_1 + 0x370) != 0) {
    if ((*(byte *)(param_1 + 0x6c) >> 1 & 1) == 0) {
      uVar2 = FUN_003dae64(param_1 + 0x2b0,param_1 + 0x390,param_2);
      iVar1 = (int)uVar2;
    }
    else {
      uVar2 = FUN_003dac40(param_1 + 0x2b0,param_1 + 0x390,param_2);
      iVar1 = (int)uVar2;
    }
    if (iVar1 == 0) {
      return uVar2;
    }
    *param_3 = *(undefined8 *)(param_1 + 0x370);
    *(undefined8 *)(param_1 + 0x370) = 0;
  }
  if (*(long *)(param_1 + 0x378) != 0) {
    iVar1 = FUN_003da994(param_1 + 0x2b0,param_1 + 0x3a0);
    if (iVar1 != 1) {
      return 0;
    }
    *(undefined8 *)(param_1 + 0x378) = 0;
  }
  if ((*(byte *)(param_1 + 0x6c) >> 1 & 1) == 0) {
    if ((*(long *)(param_1 + 0x368) != 0) &&
       (iVar1 = FUN_003db088(param_1 + 0x2b0,param_1 + 0x380), iVar1 == 0)) {
LAB_00443b7c:
      *(undefined4 *)(param_1 + 0x360) = 3;
      return 1;
    }
  }
  else {
    iVar1 = FUN_003db11c(param_1 + 0x2b0,param_1 + 0x380,*(undefined8 *)(param_1 + 0x368));
    if (0 < iVar1) goto LAB_00443b7c;
  }
  return 0;
}


// ===== 00443b98  FUN_00443b98 =====

undefined8
FUN_00443b98(long param_1,undefined8 param_2,ulong *param_3,ulong param_4,undefined8 param_5,
            ulong param_6)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_0043eb70();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  if (param_4 < param_6) {
    FUN_00379868();
    FUN_0037995c("providers/implementations/ciphers/cipher_aes_ocb.c",0x1fb,"aes_ocb_cipher");
    uVar2 = 0x6a;
  }
  else {
    if ((*(byte *)(param_1 + 0x6c) >> 1 & 1) == 0) {
      iVar1 = FUN_003dae64(param_1 + 0x2b0,param_5,param_2,param_6);
    }
    else {
      iVar1 = FUN_003dac40(param_1 + 0x2b0,param_5,param_2,param_6);
    }
    if (iVar1 != 0) {
      *param_3 = param_6;
      return 1;
    }
    FUN_00379868();
    FUN_0037995c("providers/implementations/ciphers/cipher_aes_ocb.c",0x200,"aes_ocb_cipher");
    uVar2 = 0x66;
  }
  FUN_00379a5c(0x39,uVar2,0);
  return 0;
}


// ===== 00443c94  FUN_00443c94 =====

void FUN_00443c94(long param_1)

{
  if (param_1 != 0) {
    FUN_003db1b4(param_1 + 0x2b0);
    FUN_0046bda4(param_1);
    FUN_003c893c(param_1,0x3b0,"providers/implementations/ciphers/cipher_aes_ocb.c",0x14a);
    return;
  }
  return;
}


// ===== 00443cdc  FUN_00443cdc =====

void * FUN_00443cdc(void *param_1)

{
  int iVar1;
  void *__dest;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 == 0) {
    return (void *)0x0;
  }
  __dest = (void *)FUN_003c83a4(0x3b0,"providers/implementations/ciphers/cipher_aes_ocb.c",0x156);
  if (__dest != (void *)0x0) {
    memcpy(__dest,param_1,0x3b0);
    iVar1 = FUN_003da724((long)__dest + 0x2b0,(long)param_1 + 0x2b0,(long)__dest + 0xc0,
                         (long)__dest + 0x1b8);
    if (iVar1 == 0) {
      FUN_003c86b4(__dest,"providers/implementations/ciphers/cipher_aes_ocb.c",0x15b);
      return (void *)0x0;
    }
  }
  return __dest;
}


// ===== 00443d6c  FUN_00443d6c =====

void FUN_00443d6c(undefined8 param_1)

{
  FUN_0046b8ec(param_1,0x10003,3,0x100,0x80,0x60);
  return;
}


// ===== 00443d88  FUN_00443d88 =====

undefined8 FUN_00443d88(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_003cb140(param_2,"ivlen");
  if ((lVar2 == 0) ||
     (iVar1 = thunk_FUN_003cc2a4(lVar2,*(undefined8 *)(param_1 + 0x50)), iVar1 != 0)) {
    lVar2 = FUN_003cb140(param_2,"keylen");
    if ((lVar2 == 0) ||
       (iVar1 = thunk_FUN_003cc2a4(lVar2,*(undefined8 *)(param_1 + 0x48)), iVar1 != 0)) {
      lVar2 = FUN_003cb140(param_2,"taglen");
      if ((lVar2 == 0) ||
         (iVar1 = thunk_FUN_003cc2a4(lVar2,*(undefined8 *)(param_1 + 0x368)), iVar1 != 0)) {
        lVar2 = FUN_003cb140(param_2,&DAT_001d9fca);
        if (lVar2 == 0) {
LAB_00443ea0:
          lVar2 = FUN_003cb140(param_2,"updated-iv");
          if (lVar2 != 0) {
            if (*(ulong *)(lVar2 + 0x18) < *(ulong *)(param_1 + 0x50)) {
              FUN_00379868();
              uVar3 = 0x1bf;
              goto LAB_00443edc;
            }
            iVar1 = FUN_003cd7b8(lVar2,param_1 + 0x20);
            if ((iVar1 == 0) &&
               (iVar1 = FUN_003cdb94(0,lVar2,param_1 + 0x20,*(undefined8 *)(param_1 + 0x50)),
               iVar1 == 0)) {
              FUN_00379868();
              uVar3 = 0x1c4;
              goto LAB_00443f04;
            }
          }
          lVar2 = FUN_003cb140(param_2,&DAT_001e2a1d);
          if (lVar2 == 0) {
            return 1;
          }
          if (*(int *)(lVar2 + 8) == 5) {
            if (((*(byte *)(param_1 + 0x6c) >> 1 & 1) != 0) &&
               (*(size_t *)(lVar2 + 0x18) == *(size_t *)(param_1 + 0x368))) {
              memcpy(*(void **)(lVar2 + 0x10),(void *)(param_1 + 0x380),*(size_t *)(lVar2 + 0x18));
              return 1;
            }
            FUN_00379868();
            FUN_0037995c("providers/implementations/ciphers/cipher_aes_ocb.c",0x1cf,
                         "aes_ocb_get_ctx_params");
            uVar3 = 0x76;
          }
          else {
            FUN_00379868();
            FUN_0037995c("providers/implementations/ciphers/cipher_aes_ocb.c",0x1cb,
                         "aes_ocb_get_ctx_params");
            uVar3 = 0x67;
          }
        }
        else {
          if (*(ulong *)(param_1 + 0x50) <= *(ulong *)(lVar2 + 0x18)) {
            iVar1 = FUN_003cd7b8(lVar2,param_1);
            if ((iVar1 == 0) &&
               (iVar1 = FUN_003cdb94(0,lVar2,param_1,*(undefined8 *)(param_1 + 0x50)), iVar1 == 0))
            {
              FUN_00379868();
              uVar3 = 0x1b8;
              goto LAB_00443f04;
            }
            goto LAB_00443ea0;
          }
          FUN_00379868();
          uVar3 = 0x1b3;
LAB_00443edc:
          FUN_0037995c("providers/implementations/ciphers/cipher_aes_ocb.c",uVar3,
                       "aes_ocb_get_ctx_params");
          uVar3 = 0x6d;
        }
        goto LAB_00443f10;
      }
      FUN_00379868();
      uVar3 = 0x1ab;
    }
    else {
      FUN_00379868();
      uVar3 = 0x1a5;
    }
  }
  else {
    FUN_00379868();
    uVar3 = 0x1a0;
  }
LAB_00443f04:
  FUN_0037995c("providers/implementations/ciphers/cipher_aes_ocb.c",uVar3,"aes_ocb_get_ctx_params");
  uVar3 = 0x68;
LAB_00443f10:
  FUN_00379a5c(0x39,uVar3,0);
  return 0;
}


// ===== 00444034  FUN_00444034 =====

undefined8 FUN_00444034(long param_1,long param_2)

{
  ulong __n;
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long local_30;
  long local_28;
  
  if (param_2 == 0) {
    return 1;
  }
  lVar2 = FUN_003cb19c(param_2,&DAT_001e2a1d);
  if (lVar2 == 0) {
LAB_00444094:
    lVar2 = FUN_003cb19c(param_2,"ivlen");
joined_r0x00444158:
    if (lVar2 != 0) {
      iVar1 = thunk_FUN_003cc060(lVar2,&local_28);
      if (iVar1 == 0) {
        FUN_00379868();
        uVar3 = 0x17e;
        goto LAB_00444134;
      }
      if (local_28 - 0x10U < 0xfffffffffffffff1) {
        return 0;
      }
      if (*(long *)(param_1 + 0x50) != local_28) {
        *(long *)(param_1 + 0x50) = local_28;
        *(undefined4 *)(param_1 + 0x360) = 0;
      }
    }
    lVar2 = FUN_003cb19c(param_2,"keylen");
    if (lVar2 == 0) {
      return 1;
    }
    iVar1 = thunk_FUN_003cc060(lVar2,&local_30);
    if (iVar1 == 0) {
      uVar3 = 0x67;
      uVar4 = 0x18e;
    }
    else {
      if (*(long *)(param_1 + 0x48) == local_30) {
        return 1;
      }
      uVar3 = 0x69;
      uVar4 = 0x192;
    }
    FUN_00379868();
    FUN_0037995c("providers/implementations/ciphers/cipher_aes_ocb.c",uVar4,"aes_ocb_set_ctx_params"
                );
  }
  else {
    if (*(int *)(lVar2 + 8) == 5) {
      __n = *(ulong *)(lVar2 + 0x18);
      if (*(void **)(lVar2 + 0x10) != (void *)0x0) {
        if (__n != *(ulong *)(param_1 + 0x368)) {
          return 0;
        }
        if ((*(byte *)(param_1 + 0x6c) >> 1 & 1) != 0) {
          return 0;
        }
        memcpy((void *)(param_1 + 0x380),*(void **)(lVar2 + 0x10),__n);
        goto LAB_00444094;
      }
      if (0x10 < __n) {
        return 0;
      }
      *(ulong *)(param_1 + 0x368) = __n;
      lVar2 = FUN_003cb19c(param_2,"ivlen");
      goto joined_r0x00444158;
    }
    FUN_00379868();
    uVar3 = 0x16d;
LAB_00444134:
    FUN_0037995c("providers/implementations/ciphers/cipher_aes_ocb.c",uVar3,"aes_ocb_set_ctx_params"
                );
    uVar3 = 0x67;
  }
  FUN_00379a5c(0x39,uVar3,0);
  return 0;
}


// ===== 004441f4  FUN_004441f4 =====

undefined ** FUN_004441f4(void)

{
  return &PTR_s_keylen_00784dc0;
}


// ===== 00444200  FUN_00444200 =====

undefined ** FUN_00444200(void)

{
  return &PTR_s_keylen_00784ed8;
}


// ===== 0044420c  FUN_0044420c =====

long FUN_0044420c(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    lVar2 = FUN_003c8474(0x3b0,"providers/implementations/ciphers/cipher_aes_ocb.c",0x13a);
    if (lVar2 != 0) {
      uVar3 = FUN_004446f4(0xc0);
      FUN_0046cd08(lVar2,0xc0,0x80,0x60,0x10003,3,uVar3,0);
      *(undefined8 *)(lVar2 + 0x368) = 0x10;
    }
    return lVar2;
  }
  return 0;
}


// ===== 00444294  FUN_00444294 =====

void FUN_00444294(undefined8 param_1)

{
  FUN_0046b8ec(param_1,0x10003,3,0xc0,0x80,0x60);
  return;
}


// ===== 004442b0  FUN_004442b0 =====

long FUN_004442b0(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    lVar2 = FUN_003c8474(0x3b0,"providers/implementations/ciphers/cipher_aes_ocb.c",0x13a);
    if (lVar2 != 0) {
      uVar3 = FUN_004446f4(0x80);
      FUN_0046cd08(lVar2,0x80,0x80,0x60,0x10003,3,uVar3,0);
      *(undefined8 *)(lVar2 + 0x368) = 0x10;
    }
    return lVar2;
  }
  return 0;
}


// ===== 00444338  FUN_00444338 =====

void FUN_00444338(undefined8 param_1)

{
  FUN_0046b8ec(param_1,0x10003,3,0x80,0x80,0x60);
  return;
}


// ===== 00444354  FUN_00444354 =====

undefined8
FUN_00444354(long param_1,long param_2,long param_3,long param_4,long param_5,undefined8 param_6,
            uint param_7)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x378) = 0;
  *(undefined8 *)(param_1 + 0x370) = 0;
  *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) & 0xfd | (byte)((param_7 & 1) << 1);
  if (param_4 != 0) {
    if (*(long *)(param_1 + 0x50) != param_5) {
      if (param_5 - 0x10U < 0xfffffffffffffff1) {
        FUN_00379868();
        FUN_0037995c("providers/implementations/ciphers/cipher_aes_ocb.c",0x79,"aes_ocb_init");
        uVar2 = 0x6d;
        goto LAB_00444480;
      }
      *(long *)(param_1 + 0x50) = param_5;
    }
    iVar1 = FUN_0046cc60(param_1,param_4,param_5);
    if (iVar1 == 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x360) = 1;
  }
  if (param_2 != 0) {
    if (*(long *)(param_1 + 0x48) != param_3) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/ciphers/cipher_aes_ocb.c",0x84,"aes_ocb_init");
      uVar2 = 0x69;
LAB_00444480:
      FUN_00379a5c(0x39,uVar2,0);
      return 0;
    }
    iVar1 = (*(code *)**(undefined8 **)(param_1 + 0xa8))(param_1,param_2,param_3);
    if (iVar1 == 0) {
      return 0;
    }
  }
  uVar2 = FUN_00444034(param_1,param_6);
  return uVar2;
}


// ===== 004444a4  FUN_004444a4 =====

bool FUN_004444a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = FUN_003da994(param_1 + 0x2b0,param_2,param_4);
  return iVar1 == 1;
}


// ===== 004444c8  FUN_004444c8 =====

undefined8 FUN_004444c8(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + 0x6c) >> 1 & 1) == 0) {
    uVar2 = FUN_003dae64(param_1 + 0x2b0);
    iVar1 = (int)uVar2;
  }
  else {
    uVar2 = FUN_003dac40(param_1 + 0x2b0);
    iVar1 = (int)uVar2;
  }
  if (iVar1 != 0) {
    uVar2 = 1;
  }
  return uVar2;
}


// ===== 00444500  FUN_00444500 =====

ulong FUN_00444500(undefined8 param_1,undefined8 param_2,long *param_3,long param_4,ulong *param_5,
                  ulong param_6,long param_7,ulong param_8,code *param_9)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong local_68;
  long local_48;
  
  local_68 = param_8;
  local_48 = param_7;
  if (*param_3 == 0) {
    uVar6 = 0;
    param_8 = param_8 & 0xfffffffffffffff0;
joined_r0x004445a0:
    if (param_8 == 0) {
joined_r0x00444614:
      if (local_68 == 0) {
        uVar4 = 1;
      }
      else {
        uVar4 = FUN_0046ce00(param_2,param_3,0x10,&local_48,&local_68);
        if ((int)uVar4 == 0) {
          return uVar4;
        }
        uVar4 = (ulong)(local_68 == 0);
      }
      *param_5 = uVar6;
      return uVar4;
    }
    uVar6 = uVar6 + param_8;
    if (param_6 < uVar6) {
      FUN_00379868();
      uVar5 = 0xbe;
LAB_004445d4:
      FUN_0037995c("providers/implementations/ciphers/cipher_aes_ocb.c",uVar5,
                   "aes_ocb_block_update_internal");
      uVar5 = 0x6a;
      goto LAB_004446c8;
    }
    iVar3 = (*param_9)(param_1,local_48,param_4,param_8);
    if (iVar3 != 0) {
      local_48 = local_48 + param_8;
      local_68 = local_68 - param_8;
      goto joined_r0x00444614;
    }
    FUN_00379868();
    uVar5 = 0xc2;
  }
  else {
    param_8 = FUN_0046cd78(param_2,param_3,0x10,&local_48,&local_68);
    if (*param_3 != 0x10) {
      uVar6 = 0;
      goto joined_r0x004445a0;
    }
    if (param_6 < 0x10) {
      FUN_00379868();
      uVar5 = 0xaf;
      goto LAB_004445d4;
    }
    iVar3 = (*param_9)(param_1,param_2,param_4,0x10);
    if (iVar3 != 0) {
      lVar1 = param_4 + 0x10;
      bVar2 = param_4 != 0;
      uVar6 = 0x10;
      param_4 = 0;
      if (bVar2) {
        param_4 = lVar1;
      }
      *param_3 = 0;
      goto joined_r0x004445a0;
    }
    FUN_00379868();
    uVar5 = 0xb3;
  }
  FUN_0037995c("providers/implementations/ciphers/cipher_aes_ocb.c",uVar5,
               "aes_ocb_block_update_internal");
  uVar5 = 0x66;
LAB_004446c8:
  FUN_00379a5c(0x39,uVar5,0);
  return 0;
}


// ===== 004446f4  FUN_004446f4 =====

undefined ** FUN_004446f4(void)

{
  return &PTR_FUN_00784f78;
}


// ===== 00444700  FUN_00444700 =====

undefined8 FUN_00444700(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  FUN_003db1b4(param_1 + 0x2b0);
  FUN_003789ec(param_2,param_3 << 3,param_1 + 0xc0);
  FUN_00378fcc(param_2,param_3 << 3,param_1 + 0x1b8);
  uVar1 = FUN_003da238(param_1 + 0x2b0,param_1 + 0xc0,param_1 + 0x1b8,PTR_FUN_007a1998,
                       PTR_FUN_007a19a0,0);
  if ((int)uVar1 != 0) {
    uVar1 = 1;
    *(byte *)(param_1 + 0x364) = *(byte *)(param_1 + 0x364) | 1;
  }
  return uVar1;
}


// ===== 00444790  FUN_00444790 =====

undefined4 * FUN_00444790(undefined8 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)
             FUN_003c8474(0x78,"providers/implementations/ciphers/cipher_aes_siv.c",0x26);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0x10004;
      *(undefined8 *)(puVar2 + 2) = 0x20;
      *(undefined8 *)(puVar2 + 4) = 0x10;
      uVar3 = FUN_00444f78(0x100);
      *(undefined8 *)(puVar2 + 0x1a) = uVar3;
      uVar3 = FUN_0046b880(param_1);
      *(undefined8 *)(puVar2 + 0x1c) = uVar3;
    }
    return puVar2;
  }
  return (undefined4 *)0x0;
}


// ===== 00444818  FUN_00444818 =====

void FUN_00444818(long param_1)

{
  if (param_1 != 0) {
    (**(code **)(*(long *)(param_1 + 0x68) + 0x20))();
    FUN_003c893c(param_1,0x78,"providers/implementations/ciphers/cipher_aes_siv.c",0x37);
    return;
  }
  return;
}


// ===== 0044485c  FUN_0044485c =====

long FUN_0044485c(long param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    lVar2 = FUN_003c83a4(0x78,"providers/implementations/ciphers/cipher_aes_siv.c",0x43);
    if ((lVar2 == 0) ||
       (iVar1 = (**(code **)(*(long *)(param_1 + 0x68) + 0x28))(param_1,lVar2), iVar1 != 0)) {
      return lVar2;
    }
    FUN_003c86b4(lVar2,"providers/implementations/ciphers/cipher_aes_siv.c",0x47);
  }
  return 0;
}


// ===== 004448e0  FUN_004448e0 =====

undefined8
FUN_004448e0(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
            undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 1;
    if (param_2 == 0) {
LAB_00444940:
      uVar2 = FUN_00444cd4(param_1,param_6);
      return uVar2;
    }
    if (*(long *)(param_1 + 8) == param_3) {
      iVar1 = (*(code *)**(undefined8 **)(param_1 + 0x68))(param_1,param_2,param_3);
      if (iVar1 != 0) goto LAB_00444940;
    }
    else {
      FUN_00379868();
      FUN_0037995c("providers/implementations/ciphers/cipher_aes_siv.c",0x5a,"siv_init");
      FUN_00379a5c(0x39,0x69,0);
    }
  }
  return 0;
}


// ===== 00444998  FUN_00444998 =====

undefined8
FUN_00444998(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
            undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xfe;
    if (param_2 == 0) {
LAB_004449f8:
      uVar2 = FUN_00444cd4(param_1,param_6);
      return uVar2;
    }
    if (*(long *)(param_1 + 8) == param_3) {
      iVar1 = (*(code *)**(undefined8 **)(param_1 + 0x68))(param_1,param_2,param_3);
      if (iVar1 != 0) goto LAB_004449f8;
    }
    else {
      FUN_00379868();
      FUN_0037995c("providers/implementations/ciphers/cipher_aes_siv.c",0x5a,"siv_init");
      FUN_00379a5c(0x39,0x69,0);
    }
  }
  return 0;
}


// ===== 00444a50  FUN_00444a50 =====

undefined8
FUN_00444a50(long param_1,long param_2,ulong *param_3,ulong param_4,undefined8 param_5,ulong param_6
            )

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_0043eb70();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  if (param_2 != 0) {
    if (param_6 == 0) {
      if (param_3 == (ulong *)0x0) {
        return 1;
      }
      *param_3 = 0;
      return 1;
    }
    if (param_4 < param_6) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/ciphers/cipher_aes_siv.c",0x82,"siv_cipher");
      FUN_00379a5c(0x39,0x6a,0);
      return 0;
    }
  }
  iVar1 = (**(code **)(*(long *)(param_1 + 0x68) + 8))(param_1,param_2,param_5,param_6);
  if (0 < iVar1) {
    if (param_3 != (ulong *)0x0) {
      *param_3 = param_6;
    }
    return 1;
  }
  return 0;
}


// ===== 00444b54  FUN_00444b54 =====

undefined8 FUN_00444b54(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0043eb70();
  if (((int)uVar1 != 0) &&
     (uVar1 = (**(code **)(*(long *)(param_1 + 0x68) + 8))(param_1,param_2,0,0), (int)uVar1 != 0)) {
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = 0;
    }
    uVar1 = 1;
  }
  return uVar1;
}


// ===== 00444bb4  FUN_00444bb4 =====

void FUN_00444bb4(undefined8 param_1)

{
  FUN_0046b8ec(param_1,0x10004,3,0x100,8,0);
  return;
}


// ===== 00444bd0  FUN_00444bd0 =====

undefined8 FUN_00444bd0(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_003cb140(param_2,&DAT_001e2a1d);
  if ((lVar2 == 0) || (*(int *)(lVar2 + 8) != 5)) {
LAB_00444c28:
    lVar2 = FUN_003cb140(param_2,"taglen");
    if ((lVar2 == 0) ||
       (iVar1 = thunk_FUN_003cc2a4(lVar2,*(undefined8 *)(param_1 + 0x10)), iVar1 != 0)) {
      lVar2 = FUN_003cb140(param_2,"keylen");
      if ((lVar2 == 0) ||
         (iVar1 = thunk_FUN_003cc2a4(lVar2,*(undefined8 *)(param_1 + 8)), iVar1 != 0)) {
        return 1;
      }
      uVar3 = 0xb5;
    }
    else {
      uVar3 = 0xb0;
    }
  }
  else {
    if ((*(byte *)(param_1 + 4) & 1) != 0) {
      if ((*(long *)(lVar2 + 0x18) == *(long *)(param_1 + 0x10)) &&
         (iVar1 = FUN_003cd7b8(lVar2,param_1 + 0x28), iVar1 != 0)) goto LAB_00444c28;
    }
    uVar3 = 0xaa;
  }
  FUN_00379868();
  FUN_0037995c("providers/implementations/ciphers/cipher_aes_siv.c",uVar3,"aes_siv_get_ctx_params");
  FUN_00379a5c(0x39,0x68,0);
  return 0;
}


// ===== 00444cc8  FUN_00444cc8 =====

undefined ** FUN_00444cc8(void)

{
  return &PTR_s_keylen_00785260;
}


// ===== 00444cd4  FUN_00444cd4 =====

undefined8 FUN_00444cd4(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long local_30;
  undefined4 local_24;
  
  local_24 = 0;
  if (param_2 == 0) {
    return 1;
  }
  lVar2 = FUN_003cb19c(param_2,&DAT_001e2a1d);
  if (lVar2 != 0) {
    if ((*(byte *)(param_1 + 4) & 1) != 0) {
      return 1;
    }
    if ((*(int *)(lVar2 + 8) != 5) ||
       (iVar1 = (**(code **)(*(long *)(param_1 + 0x68) + 0x18))
                          (param_1,*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18)),
       iVar1 == 0)) {
      FUN_00379868();
      uVar3 = 0xd6;
      goto LAB_00444dfc;
    }
  }
  lVar2 = FUN_003cb19c(param_2,"speed");
  if (lVar2 != 0) {
    iVar1 = thunk_FUN_003cb68c(lVar2,&local_24);
    if (iVar1 == 0) {
      FUN_00379868();
      uVar3 = 0xdd;
      goto LAB_00444dfc;
    }
    (**(code **)(*(long *)(param_1 + 0x68) + 0x10))(param_1,local_24);
  }
  lVar2 = FUN_003cb19c(param_2,"keylen");
  if (lVar2 == 0) {
    return 1;
  }
  iVar1 = thunk_FUN_003cc060(lVar2,&local_30);
  if (iVar1 != 0) {
    if (local_30 != *(long *)(param_1 + 8)) {
      return 0;
    }
    return 1;
  }
  FUN_00379868();
  uVar3 = 0xe7;
LAB_00444dfc:
  FUN_0037995c("providers/implementations/ciphers/cipher_aes_siv.c",uVar3,"aes_siv_set_ctx_params");
  FUN_00379a5c(0x39,0x67,0);
  return 0;
}


// ===== 00444e24  FUN_00444e24 =====

undefined ** FUN_00444e24(void)

{
  return &PTR_s_keylen_00785300;
}


// ===== 00444e30  FUN_00444e30 =====

undefined4 * FUN_00444e30(undefined8 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)
             FUN_003c8474(0x78,"providers/implementations/ciphers/cipher_aes_siv.c",0x26);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0x10004;
      *(undefined8 *)(puVar2 + 2) = 0x30;
      *(undefined8 *)(puVar2 + 4) = 0x10;
      uVar3 = FUN_00444f78(0x180);
      *(undefined8 *)(puVar2 + 0x1a) = uVar3;
      uVar3 = FUN_0046b880(param_1);
      *(undefined8 *)(puVar2 + 0x1c) = uVar3;
    }
    return puVar2;
  }
  return (undefined4 *)0x0;
}


// ===== 00444eb8  FUN_00444eb8 =====

void FUN_00444eb8(undefined8 param_1)

{
  FUN_0046b8ec(param_1,0x10004,3,0x180,8,0);
  return;
}


// ===== 00444ed4  FUN_00444ed4 =====

undefined4 * FUN_00444ed4(undefined8 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)
             FUN_003c8474(0x78,"providers/implementations/ciphers/cipher_aes_siv.c",0x26);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0x10004;
      *(undefined8 *)(puVar2 + 2) = 0x40;
      *(undefined8 *)(puVar2 + 4) = 0x10;
      uVar3 = FUN_00444f78(0x200);
      *(undefined8 *)(puVar2 + 0x1a) = uVar3;
      uVar3 = FUN_0046b880(param_1);
      *(undefined8 *)(puVar2 + 0x1c) = uVar3;
    }
    return puVar2;
  }
  return (undefined4 *)0x0;
}


// ===== 00444f5c  FUN_00444f5c =====

void FUN_00444f5c(undefined8 param_1)

{
  FUN_0046b8ec(param_1,0x10004,3,0x200,8,0);
  return;
}


// ===== 00444f78  FUN_00444f78 =====

undefined ** FUN_00444f78(void)

{
  return &PTR_FUN_007853a0;
}


// ===== 00444f84  FUN_00444f84 =====

undefined8 FUN_00444f84(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  long lVar2;
  char *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  param_3 = param_3 >> 1;
  FUN_0037fa4c(*(undefined8 *)(param_1 + 0x60));
  FUN_0037fa4c(*(undefined8 *)(param_1 + 0x58));
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (param_3 == 0x10) {
    pcVar5 = "AES-128-CTR";
    pcVar3 = "AES-128-CBC";
  }
  else if (param_3 == 0x20) {
    pcVar5 = "AES-256-CTR";
    pcVar3 = "AES-256-CBC";
  }
  else {
    if (param_3 != 0x18) {
      return 0;
    }
    pcVar5 = "AES-192-CTR";
    pcVar3 = "AES-192-CBC";
  }
  uVar1 = FUN_003823dc(uVar4,pcVar3,0);
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  lVar2 = FUN_003823dc(uVar4,pcVar5,0);
  *(long *)(param_1 + 0x58) = lVar2;
  if ((*(long *)(param_1 + 0x60) != 0) && (lVar2 != 0)) {
    uVar4 = FUN_0044528c(param_1 + 0x18,param_2,param_3 & 0xffffffff,*(long *)(param_1 + 0x60),lVar2
                         ,uVar4,0);
    return uVar4;
  }
  return 0;
}


// ===== 00445080  FUN_00445080 =====

bool FUN_00445080(long param_1,long param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  
  if (param_3 == 0) {
    iVar1 = FUN_00445904(param_1 + 0x18);
    return iVar1 == 0;
  }
  if (param_2 != 0) {
    if ((*(byte *)(param_1 + 4) & 1) == 0) {
      iVar1 = FUN_00445800(param_1 + 0x18,param_3,param_2);
      return 0 < iVar1;
    }
    iVar1 = FUN_004455d0(param_1 + 0x18,param_3,param_2);
    return 0 < iVar1;
  }
  iVar1 = FUN_004454e8(param_1 + 0x18,param_3,param_4);
  return iVar1 == 1;
}


// ===== 00445114  FUN_00445114 =====

void FUN_00445114(long param_1)

{
  FUN_004459bc(param_1 + 0x18);
  return;
}


// ===== 0044511c  FUN_0044511c =====

void FUN_0044511c(long param_1)

{
  FUN_0044590c(param_1 + 0x18);
  return;
}


// ===== 00445124  FUN_00445124 =====

void FUN_00445124(long param_1)

{
  FUN_0044594c(param_1 + 0x18);
  FUN_0037fa4c(*(undefined8 *)(param_1 + 0x60));
  FUN_0037fa4c(*(undefined8 *)(param_1 + 0x58));
  return;
}


// ===== 00445154  FUN_00445154 =====

undefined8 FUN_00445154(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar5 = param_1[5];
  uVar4 = param_1[4];
  uVar1 = param_1[6];
  uVar7 = param_1[1];
  uVar6 = *param_1;
  uVar9 = param_1[3];
  uVar8 = param_1[2];
  param_2[7] = param_1[7];
  param_2[6] = uVar1;
  uVar11 = param_1[0xb];
  uVar10 = param_1[10];
  uVar3 = param_1[0xd];
  uVar2 = param_1[0xc];
  uVar1 = param_1[0xe];
  uVar13 = param_1[9];
  uVar12 = param_1[8];
  param_2[3] = uVar9;
  param_2[2] = uVar8;
  param_2[5] = uVar5;
  param_2[4] = uVar4;
  param_2[1] = uVar7;
  *param_2 = uVar6;
  param_2[0xe] = uVar1;
  param_2[0xb] = uVar11;
  param_2[10] = uVar10;
  param_2[0xd] = uVar3;
  param_2[0xc] = uVar2;
  param_2[9] = uVar13;
  param_2[8] = uVar12;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  uVar1 = FUN_00445474(param_2 + 3,param_1 + 3);
  if ((int)uVar1 != 0) {
    if (param_2[0xc] != 0) {
      FUN_00382388();
    }
    if (param_2[0xb] != 0) {
      FUN_00382388();
    }
    uVar1 = 1;
  }
  return uVar1;
}


// ===== 004451d4  FUN_004451d4 =====

long FUN_004451d4(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_003c83a4(0x40,"crypto/modes/siv128.c",0x96);
  if ((lVar2 != 0) &&
     (iVar1 = FUN_0044528c(lVar2,param_1,param_2,param_3,param_4,param_5,param_6), iVar1 == 0)) {
    FUN_003c86b4(lVar2,"crypto/modes/siv128.c",0x9a);
    return 0;
  }
  return lVar2;
}


// ===== 0044528c  FUN_0044528c =====

undefined8
FUN_0044528c(undefined8 *param_1,long param_2,int param_3,long param_4,long param_5,
            undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  
  local_58 = 0x10;
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  plVar4 = param_1 + 4;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_0037fae8(*plVar4);
  FUN_003ffb7c(param_1[6]);
  FUN_004007c8(param_1[5]);
  *plVar4 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  if (param_2 == 0) {
    return 0;
  }
  if (param_4 == 0) {
    return 0;
  }
  if (param_5 == 0) {
    return 0;
  }
  uVar2 = FUN_00389880(param_4);
  FUN_003cd8cc(auStack_d0,"cipher",uVar2,0);
  FUN_003cd924(&local_f8,&DAT_001e2b47,param_2,(long)param_3);
  local_88 = local_d8;
  uStack_a0 = uStack_f0;
  local_a8 = local_f8;
  uStack_90 = uStack_e0;
  local_98 = local_e8;
  FUN_003cdfcc(&local_f8);
  uStack_78 = uStack_f0;
  local_80 = local_f8;
  uStack_68 = uStack_e0;
  uStack_70 = local_e8;
  local_60 = local_d8;
  lVar3 = FUN_0037fab8();
  *plVar4 = lVar3;
  if (lVar3 != 0) {
    lVar3 = FUN_00400424(param_6,&DAT_001da05c,param_7);
    param_1[5] = lVar3;
    if (lVar3 != 0) {
      lVar3 = FUN_003ffaa4();
      param_1[6] = lVar3;
      if (((lVar3 != 0) && (iVar1 = FUN_0040013c(lVar3,auStack_d0), iVar1 != 0)) &&
         (iVar1 = FUN_00381064(*plVar4,param_5,0,param_2 + param_3,0), iVar1 != 0)) {
        lVar3 = FUN_003ffbcc(param_1[6]);
        if (((lVar3 != 0) && (iVar1 = FUN_003ffe34(lVar3,&DAT_0020edf8,0x10), iVar1 != 0)) &&
           (iVar1 = FUN_003ffe40(lVar3,param_1,&local_58,0x10), iVar1 != 0)) {
          FUN_003ffb7c(lVar3);
          param_1[7] = DAT_001b7048;
          return 1;
        }
        goto LAB_00445434;
      }
    }
  }
  lVar3 = 0;
LAB_00445434:
  FUN_0037fae8(param_1[4]);
  FUN_003ffb7c(param_1[6]);
  FUN_003ffb7c(lVar3);
  FUN_004007c8(param_1[5]);
  return 0;
}


// ===== 00445474  FUN_00445474 =====

long FUN_00445474(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  lVar1 = param_1[4];
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  if (lVar1 == 0) {
    lVar1 = FUN_0037fab8();
    param_1[4] = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
  }
  lVar1 = FUN_0038213c(lVar1,param_2[4]);
  if ((int)lVar1 != 0) {
    FUN_003ffb7c(param_1[6]);
    lVar1 = FUN_003ffbcc(param_2[6]);
    param_1[6] = lVar1;
    if (lVar1 != 0) {
      lVar1 = param_2[5];
      param_1[5] = lVar1;
      if (lVar1 != 0) {
        FUN_004007b0();
      }
      lVar1 = 1;
    }
  }
  return lVar1;
}


// ===== 004454e8  FUN_004454e8 =====

undefined8 FUN_004454e8(ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long local_48;
  undefined1 local_40 [16];
  
  uVar6 = (*param_1 & 0xff00ff00ff00ff00) >> 8 | (*param_1 & 0xff00ff00ff00ff) << 8;
  uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
  uVar4 = uVar6 >> 0x20 | uVar6 << 0x20;
  uVar6 = (param_1[1] & 0xff00ff00ff00ff00) >> 8 | (param_1[1] & 0xff00ff00ff00ff) << 8;
  uVar5 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
  uVar1 = uVar5 << 0x20;
  uVar6 = uVar4 << 1;
  uVar5 = (long)uVar4 >> 0x3f & 0x87U ^ (uVar5 >> 0x20 | uVar1) << 1;
  uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar1 >> 0x3f | uVar6 & 0xff00ff00ff00ff) << 8;
  uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
  local_48 = 0x10;
  uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
  uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
  *param_1 = uVar6 >> 0x20 | uVar6 << 0x20;
  param_1[1] = uVar5 >> 0x20 | uVar5 << 0x20;
  lVar3 = FUN_003ffbcc(param_1[6]);
  if ((((lVar3 != 0) && (iVar2 = FUN_003ffe34(lVar3,param_2,param_3), iVar2 != 0)) &&
      (iVar2 = FUN_003ffe40(lVar3,local_40,&local_48,0x10), iVar2 != 0)) && (local_48 == 0x10)) {
    FUN_003ffb7c(lVar3);
    uVar5 = param_1[1];
    uVar6 = *param_1;
    param_1[1] = CONCAT17((byte)(uVar5 >> 0x38) ^ SUB81(local_40._8_8_,7),
                          CONCAT16((byte)(uVar5 >> 0x30) ^ SUB81(local_40._8_8_,6),
                                   CONCAT15((byte)(uVar5 >> 0x28) ^ SUB81(local_40._8_8_,5),
                                            CONCAT14((byte)(uVar5 >> 0x20) ^ SUB81(local_40._8_8_,4)
                                                     ,CONCAT13((byte)(uVar5 >> 0x18) ^
                                                               SUB81(local_40._8_8_,3),
                                                               CONCAT12((byte)(uVar5 >> 0x10) ^
                                                                        SUB81(local_40._8_8_,2),
                                                                        CONCAT11((byte)(uVar5 >> 8)
                                                                                 ^ SUB81(local_40.
                                                  _8_8_,1),(byte)uVar5 ^ (byte)local_40._8_8_)))))))
    ;
    *param_1 = CONCAT17((byte)(uVar6 >> 0x38) ^ SUB81(local_40._0_8_,7),
                        CONCAT16((byte)(uVar6 >> 0x30) ^ SUB81(local_40._0_8_,6),
                                 CONCAT15((byte)(uVar6 >> 0x28) ^ SUB81(local_40._0_8_,5),
                                          CONCAT14((byte)(uVar6 >> 0x20) ^ SUB81(local_40._0_8_,4),
                                                   CONCAT13((byte)(uVar6 >> 0x18) ^
                                                            SUB81(local_40._0_8_,3),
                                                            CONCAT12((byte)(uVar6 >> 0x10) ^
                                                                     SUB81(local_40._0_8_,2),
                                                                     CONCAT11((byte)(uVar6 >> 8) ^
                                                                              SUB81(local_40._0_8_,1
                                                                                   ),(byte)uVar6 ^
                                                                                     (byte)local_40.
                                                  _0_8_)))))));
    return 1;
  }
  FUN_003ffb7c(lVar3);
  return 0;
}


// ===== 004455d0  FUN_004455d0 =====

undefined4 FUN_004455d0(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_50;
  uint uStack_48;
  uint uStack_44;
  undefined4 local_24;
  
  if (*(int *)(param_1 + 0x3c) != 0) {
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
    iVar1 = FUN_004456a4(param_1,&local_50,param_2);
    if (iVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      *(ulong *)(param_1 + 0x18) = CONCAT44(uStack_44,uStack_48);
      *(undefined8 *)(param_1 + 0x10) = local_50;
      uStack_48 = uStack_48 & 0xffffff7f;
      uStack_44 = uStack_44 & 0xffffff7f;
      local_24 = param_4;
      iVar1 = FUN_003803c8(uVar2,0,0,0,&local_50,1);
      if ((iVar1 != 0) &&
         (iVar1 = FUN_003803e0(uVar2,param_3,&local_24,param_2,param_4), iVar1 != 0)) {
        *(undefined4 *)(param_1 + 0x38) = 0;
        return param_4;
      }
    }
  }
  return 0;
}


// ===== 004456a4  FUN_004456a4 =====

bool FUN_004456a4(ulong *param_1,undefined8 param_2,void *param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long local_58;
  ulong local_50;
  ulong uStack_48;
  
  local_58 = 0x10;
  lVar5 = FUN_003ffbcc(param_1[6]);
  if (lVar5 == 0) {
    return false;
  }
  if (param_4 < 0x10) {
    memset((void *)((long)&local_50 + param_4),0,0x10 - param_4);
    memcpy(&local_50,param_3,param_4);
    uVar8 = *param_1;
    uVar7 = param_1[1];
    *(undefined1 *)((long)&local_50 + param_4) = 0x80;
    uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
    uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
    uVar6 = uVar8 >> 0x20 | uVar8 << 0x20;
    uVar8 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
    uVar7 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
    uVar1 = uVar7 << 0x20;
    uVar8 = uVar6 << 1;
    uVar6 = (long)uVar6 >> 0x3f & 0x87U ^ (uVar7 >> 0x20 | uVar1) << 1;
    uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar1 >> 0x3f | uVar8 & 0xff00ff00ff00ff) << 8;
    uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
    uVar7 = uVar8 >> 0x20 | uVar8 << 0x20;
    uVar8 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
    uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
    uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
    *param_1 = uVar7;
    param_1[1] = uVar8;
    local_50 = local_50 ^ uVar7;
    uStack_48 = uStack_48 ^ uVar8;
    iVar4 = FUN_003ffe34(lVar5,&local_50,0x10);
joined_r0x004457b4:
    if (iVar4 != 0) {
      iVar4 = FUN_003ffe40(lVar5,param_2,&local_58,0x10);
      bVar3 = iVar4 != 0 && local_58 == 0x10;
      goto LAB_004457dc;
    }
  }
  else {
    iVar4 = FUN_003ffe34(lVar5,param_3,param_4 - 0x10);
    if (iVar4 != 0) {
      puVar2 = (undefined8 *)((long)param_3 + (param_4 - 0x10));
      uVar10 = puVar2[1];
      uVar9 = *puVar2;
      uVar7 = param_1[1];
      uVar8 = *param_1;
      local_50 = CONCAT17((byte)((ulong)uVar9 >> 0x38) ^ (byte)(uVar8 >> 0x38),
                          CONCAT16((byte)((ulong)uVar9 >> 0x30) ^ (byte)(uVar8 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar9 >> 0x28) ^ (byte)(uVar8 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar9 >> 0x20) ^
                                                     (byte)(uVar8 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar9 >> 0x18) ^
                                                              (byte)(uVar8 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar9 >> 0x10)
                                                                       ^ (byte)(uVar8 >> 0x10),
                                                                       CONCAT11((byte)((ulong)uVar9
                                                                                      >> 8) ^
                                                                                (byte)(uVar8 >> 8),
                                                                                (byte)uVar9 ^
                                                                                (byte)uVar8)))))));
      uStack_48 = CONCAT17((byte)((ulong)uVar10 >> 0x38) ^ (byte)(uVar7 >> 0x38),
                           CONCAT16((byte)((ulong)uVar10 >> 0x30) ^ (byte)(uVar7 >> 0x30),
                                    CONCAT15((byte)((ulong)uVar10 >> 0x28) ^ (byte)(uVar7 >> 0x28),
                                             CONCAT14((byte)((ulong)uVar10 >> 0x20) ^
                                                      (byte)(uVar7 >> 0x20),
                                                      CONCAT13((byte)((ulong)uVar10 >> 0x18) ^
                                                               (byte)(uVar7 >> 0x18),
                                                               CONCAT12((byte)((ulong)uVar10 >> 0x10
                                                                              ) ^ (byte)(uVar7 >> 
                                                  0x10),CONCAT11((byte)((ulong)uVar10 >> 8) ^
                                                                 (byte)(uVar7 >> 8),
                                                                 (byte)uVar10 ^ (byte)uVar7)))))));
      iVar4 = FUN_003ffe34(lVar5,&local_50,0x10);
      goto joined_r0x004457b4;
    }
  }
  bVar3 = false;
LAB_004457dc:
  FUN_003ffb7c(lVar5);
  return bVar3;
}


// ===== 00445800  FUN_00445800 =====

ulong FUN_00445800(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_50;
  long lStack_48;
  
  if (*(int *)(param_1 + 0x3c) != 0) {
    local_60 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uStack_58._4_1_ = (undefined1)(*(ulong *)(param_1 + 0x18) >> 0x20);
    uVar1 = uStack_58._4_1_;
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
    uStack_58 = *(ulong *)(param_1 + 0x18) & 0xffffffffffffff7f;
    uStack_58 = CONCAT35(uStack_58._5_3_,CONCAT14(uVar1,(undefined4)uStack_58)) & 0xffffff7fffffffff
    ;
    local_50 = CONCAT44(local_50._4_4_,(int)param_4);
    iVar2 = FUN_003803c8(uVar3,0,0,0,&local_60,1);
    if (((iVar2 != 0) &&
        (iVar2 = FUN_003803e0(uVar3,param_3,&local_50,param_2,param_4 & 0xffffffff), iVar2 != 0)) &&
       (iVar2 = FUN_004456a4(param_1,&local_50,param_3,param_4), iVar2 != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      local_50 = CONCAT17((byte)((ulong)local_50 >> 0x38) ^ (byte)((ulong)uVar3 >> 0x38),
                          CONCAT16((byte)((ulong)local_50 >> 0x30) ^ (byte)((ulong)uVar3 >> 0x30),
                                   CONCAT15((byte)((ulong)local_50 >> 0x28) ^
                                            (byte)((ulong)uVar3 >> 0x28),
                                            CONCAT14((byte)((ulong)local_50 >> 0x20) ^
                                                     (byte)((ulong)uVar3 >> 0x20),
                                                     CONCAT13((byte)((ulong)local_50 >> 0x18) ^
                                                              (byte)((ulong)uVar3 >> 0x18),
                                                              CONCAT12((byte)((ulong)local_50 >>
                                                                             0x10) ^
                                                                       (byte)((ulong)uVar3 >> 0x10),
                                                                       CONCAT11((byte)((ulong)
                                                  local_50 >> 8) ^ (byte)((ulong)uVar3 >> 8),
                                                  (byte)local_50 ^ (byte)uVar3)))))));
      lStack_48 = CONCAT17((byte)((ulong)lStack_48 >> 0x38) ^ (byte)((ulong)uVar4 >> 0x38),
                           CONCAT16((byte)((ulong)lStack_48 >> 0x30) ^ (byte)((ulong)uVar4 >> 0x30),
                                    CONCAT15((byte)((ulong)lStack_48 >> 0x28) ^
                                             (byte)((ulong)uVar4 >> 0x28),
                                             CONCAT14((byte)((ulong)lStack_48 >> 0x20) ^
                                                      (byte)((ulong)uVar4 >> 0x20),
                                                      CONCAT13((byte)((ulong)lStack_48 >> 0x18) ^
                                                               (byte)((ulong)uVar4 >> 0x18),
                                                               CONCAT12((byte)((ulong)lStack_48 >>
                                                                              0x10) ^
                                                                        (byte)((ulong)uVar4 >> 0x10)
                                                                        ,CONCAT11((byte)((ulong)
                                                  lStack_48 >> 8) ^ (byte)((ulong)uVar4 >> 8),
                                                  (byte)lStack_48 ^ (byte)uVar4)))))));
      if (lStack_48 == 0 && local_50 == 0) {
        *(undefined4 *)(param_1 + 0x38) = 0;
        goto LAB_004458e0;
      }
      FUN_003c89b8(param_3,param_4);
    }
  }
  param_4 = 0;
LAB_004458e0:
  return param_4 & 0xffffffff;
}


// ===== 00445904  FUN_00445904 =====

undefined4 FUN_00445904(long param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}


// ===== 0044590c  FUN_0044590c =====

undefined8 FUN_0044590c(long param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0x10) {
    uVar1 = *param_2;
    *(undefined8 *)(param_1 + 0x18) = param_2[1];
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    return 1;
  }
  return 0;
}


// ===== 0044592c  FUN_0044592c =====

undefined8 FUN_0044592c(long param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0x10) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    param_2[1] = *(undefined8 *)(param_1 + 0x18);
    *param_2 = uVar1;
    return 1;
  }
  return 0;
}


// ===== 0044594c  FUN_0044594c =====

undefined8 FUN_0044594c(long param_1)

{
  if (param_1 != 0) {
    FUN_0037fae8(*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
    FUN_003ffb7c(*(undefined8 *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
    FUN_004007c8(*(undefined8 *)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x28) = 0;
    FUN_003c89b8(param_1,0x10);
    FUN_003c89b8(param_1 + 0x10,0x10);
    *(undefined8 *)(param_1 + 0x38) = DAT_001b7048;
  }
  return 1;
}


// ===== 004459bc  FUN_004459bc =====

undefined8 FUN_004459bc(long param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (param_2 == 1) {
    uVar1 = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  return 1;
}


// ===== 004459d8  FUN_004459d8 =====

long FUN_004459d8(void)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = FUN_0043eb70();
  if (iVar2 != 0) {
    lVar3 = FUN_003c8474(0x1c0,"providers/implementations/ciphers/cipher_aes_wrp.c",0x3b);
    if (lVar3 != 0) {
      FUN_0046cd08(lVar3,0x100,0x40,0x40,0x10002,2,0,0);
      bVar1 = *(byte *)(lVar3 + 0x6c) & 0xfe;
      if (*(long *)(lVar3 + 0x50) == 4) {
        bVar1 = bVar1 + 1;
      }
      *(byte *)(lVar3 + 0x6c) = bVar1;
    }
    return lVar3;
  }
  return 0;
}


// ===== 00445a64  FUN_00445a64 =====

void FUN_00445a64(void)

{
  FUN_00446568();
  return;
}


// ===== 00445a6c  FUN_00445a6c =====

void FUN_00445a6c(void)

{
  FUN_00446568();
  return;
}


// ===== 00445a74  FUN_00445a74 =====

ulong FUN_00445a74(long param_1,long param_2,long *param_3,ulong param_4,long param_5,ulong param_6)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  
  uVar4 = FUN_0043eb70();
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  if (param_6 == 0) {
    *param_3 = 0;
    return 1;
  }
  if (param_4 < param_6) {
    FUN_00379868();
    FUN_0037995c("providers/implementations/ciphers/cipher_aes_wrp.c",0xf8,"aes_wrap_cipher");
    FUN_00379a5c(0x39,0x6a,0);
    return 0;
  }
  if (param_5 == 0) {
    return 0;
  }
  bVar3 = *(byte *)(param_1 + 0x6c);
  if ((bVar3 >> 1 & 1) == 0) {
    if ((param_6 < 0x10) || ((param_6 & 7) != 0)) {
      FUN_00379868();
      uVar5 = 0xb6;
      goto LAB_00445b94;
    }
    if (param_2 == 0) {
      iVar6 = -8;
      uVar4 = param_6;
LAB_00445c6c:
      uVar1 = iVar6 + (int)uVar4;
      uVar4 = (ulong)uVar1;
      if (uVar1 == 0) {
        return uVar4;
      }
      goto LAB_00445bac;
    }
LAB_00445bd0:
    lVar2 = 0;
    if ((bVar3 & 4) != 0) {
      lVar2 = param_1 + 0x20;
    }
    uVar4 = (**(code **)(param_1 + 0x1b8))
                      (param_1 + 0xc0,lVar2,param_2,param_5,param_6,*(undefined8 *)(param_1 + 0x30))
    ;
    if (uVar4 == 0) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/ciphers/cipher_aes_wrp.c",0xd4,
                   "aes_wrap_cipher_internal");
      uVar5 = 0x66;
    }
    else {
      if (uVar4 >> 0x1f == 0) goto LAB_00445bac;
      FUN_00379868();
      FUN_0037995c("providers/implementations/ciphers/cipher_aes_wrp.c",0xd8,
                   "aes_wrap_cipher_internal");
      uVar5 = 0xd9;
    }
  }
  else {
    if (((param_6 & 7) == 0) || ((bVar3 & 1) != 0)) {
      if (param_2 == 0) {
        iVar6 = 8;
        uVar4 = (ulong)((int)param_6 + 7) & 0xfffffff8;
        if ((bVar3 & 1) == 0) {
          uVar4 = param_6;
        }
        goto LAB_00445c6c;
      }
      goto LAB_00445bd0;
    }
    FUN_00379868();
    uVar5 = 0xbc;
LAB_00445b94:
    FUN_0037995c("providers/implementations/ciphers/cipher_aes_wrp.c",uVar5,
                 "aes_wrap_cipher_internal");
    uVar5 = 0xe6;
  }
  FUN_00379a5c(0x39,uVar5,0);
  uVar4 = 0xffffffff;
LAB_00445bac:
  *param_3 = (long)(int)uVar4;
  return 1;
}


// ===== 00445c78  FUN_00445c78 =====

undefined8 FUN_00445c78(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0043eb70();
  if ((int)uVar1 != 0) {
    uVar1 = 1;
    *param_3 = 0;
  }
  return uVar1;
}


// ===== 00445ca4  FUN_00445ca4 =====

void FUN_00445ca4(undefined8 param_1)

{
  FUN_0046bda4();
  FUN_003c893c(param_1,0x1c0,"providers/implementations/ciphers/cipher_aes_wrp.c",0x5e);
  return;
}


// ===== 00445cd8  FUN_00445cd8 =====

long FUN_00445cd8(long param_1)

{
  long lVar1;
  
  if ((((param_1 != 0) &&
       (param_1 = FUN_003ca404(param_1,0x1c0,"providers/implementations/ciphers/cipher_aes_wrp.c",
                               0x4c), param_1 != 0)) && (*(long *)(param_1 + 0x78) != 0)) &&
     (*(int *)(param_1 + 0x80) != 0)) {
    lVar1 = FUN_003ca404(*(long *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x88),
                         "providers/implementations/ciphers/cipher_aes_wrp.c",0x50);
    *(long *)(param_1 + 0x78) = lVar1;
    if (lVar1 == 0) {
      FUN_003c86b4(param_1,"providers/implementations/ciphers/cipher_aes_wrp.c",0x52);
      param_1 = 0;
    }
  }
  return param_1;
}


// ===== 00445d5c  FUN_00445d5c =====

void FUN_00445d5c(undefined8 param_1)

{
  FUN_0046b8ec(param_1,0x10002,2,0x100,0x40,0x40);
  return;
}


// ===== 00445d78  FUN_00445d78 =====

undefined8 FUN_00445d78(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long local_28;
  
  local_28 = 0;
  if ((param_2 != 0) && (lVar2 = FUN_003cb19c(param_2,"keylen"), lVar2 != 0)) {
    iVar1 = thunk_FUN_003cc060(lVar2,&local_28);
    if (iVar1 == 0) {
      uVar3 = 0x67;
      uVar4 = 0x110;
    }
    else {
      if (*(long *)(param_1 + 0x48) == local_28) {
        return 1;
      }
      uVar3 = 0x69;
      uVar4 = 0x114;
    }
    FUN_00379868();
    FUN_0037995c("providers/implementations/ciphers/cipher_aes_wrp.c",uVar4,
                 "aes_wrap_set_ctx_params");
    FUN_00379a5c(0x39,uVar3,0);
    return 0;
  }
  return 1;
}


// ===== 00445e30  FUN_00445e30 =====

long FUN_00445e30(void)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = FUN_0043eb70();
  if (iVar2 != 0) {
    lVar3 = FUN_003c8474(0x1c0,"providers/implementations/ciphers/cipher_aes_wrp.c",0x3b);
    if (lVar3 != 0) {
      FUN_0046cd08(lVar3,0xc0,0x40,0x40,0x10002,2,0,0);
      bVar1 = *(byte *)(lVar3 + 0x6c) & 0xfe;
      if (*(long *)(lVar3 + 0x50) == 4) {
        bVar1 = bVar1 + 1;
      }
      *(byte *)(lVar3 + 0x6c) = bVar1;
    }
    return lVar3;
  }
  return 0;
}


// ===== 00445ebc  FUN_00445ebc =====

void FUN_00445ebc(undefined8 param_1)

{
  FUN_0046b8ec(param_1,0x10002,2,0xc0,0x40,0x40);
  return;
}


// ===== 00445ed8  FUN_00445ed8 =====

long FUN_00445ed8(void)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = FUN_0043eb70();
  if (iVar2 != 0) {
    lVar3 = FUN_003c8474(0x1c0,"providers/implementations/ciphers/cipher_aes_wrp.c",0x3b);
    if (lVar3 != 0) {
      FUN_0046cd08(lVar3,0x80,0x40,0x40,0x10002,2,0,0);
      bVar1 = *(byte *)(lVar3 + 0x6c) & 0xfe;
      if (*(long *)(lVar3 + 0x50) == 4) {
        bVar1 = bVar1 + 1;
      }
      *(byte *)(lVar3 + 0x6c) = bVar1;
    }
    return lVar3;
  }
  return 0;
}


// ===== 00445f64  FUN_00445f64 =====

void FUN_00445f64(undefined8 param_1)

{
  FUN_0046b8ec(param_1,0x10002,2,0x80,0x40,0x40);
  return;
}


// ===== 00445f80  FUN_00445f80 =====

long FUN_00445f80(void)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = FUN_0043eb70();
  if (iVar2 != 0) {
    lVar3 = FUN_003c8474(0x1c0,"providers/implementations/ciphers/cipher_aes_wrp.c",0x3b);
    if (lVar3 != 0) {
      FUN_0046cd08(lVar3,0x100,0x40,0x20,0x10002,2,0,0);
      bVar1 = *(byte *)(lVar3 + 0x6c) & 0xfe;
      if (*(long *)(lVar3 + 0x50) == 4) {
        bVar1 = bVar1 + 1;
      }
      *(byte *)(lVar3 + 0x6c) = bVar1;
    }
    return lVar3;
  }
  return 0;
}


// ===== 0044600c  FUN_0044600c =====

void FUN_0044600c(undefined8 param_1)

{
  FUN_0046b8ec(param_1,0x10002,2,0x100,0x40,0x20);
  return;
}


// ===== 00446028  FUN_00446028 =====

long FUN_00446028(void)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = FUN_0043eb70();
  if (iVar2 != 0) {
    lVar3 = FUN_003c8474(0x1c0,"providers/implementations/ciphers/cipher_aes_wrp.c",0x3b);
    if (lVar3 != 0) {
      FUN_0046cd08(lVar3,0xc0,0x40,0x20,0x10002,2,0,0);
      bVar1 = *(byte *)(lVar3 + 0x6c) & 0xfe;
      if (*(long *)(lVar3 + 0x50) == 4) {
        bVar1 = bVar1 + 1;
      }
      *(byte *)(lVar3 + 0x6c) = bVar1;
    }
    return lVar3;
  }
  return 0;
}


// ===== 004460b4  FUN_004460b4 =====

void FUN_004460b4(undefined8 param_1)

{
  FUN_0046b8ec(param_1,0x10002,2,0xc0,0x40,0x20);
  return;
}


// ===== 004460d0  FUN_004460d0 =====

long FUN_004460d0(void)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = FUN_0043eb70();
  if (iVar2 != 0) {
    lVar3 = FUN_003c8474(0x1c0,"providers/implementations/ciphers/cipher_aes_wrp.c",0x3b);
    if (lVar3 != 0) {
      FUN_0046cd08(lVar3,0x80,0x40,0x20,0x10002,2,0,0);
      bVar1 = *(byte *)(lVar3 + 0x6c) & 0xfe;
      if (*(long *)(lVar3 + 0x50) == 4) {
        bVar1 = bVar1 + 1;
      }
      *(byte *)(lVar3 + 0x6c) = bVar1;
    }
    return lVar3;
  }
  return 0;
}


// ===== 0044615c  FUN_0044615c =====

void FUN_0044615c(undefined8 param_1)

{
  FUN_0046b8ec(param_1,0x10002,2,0x80,0x40,0x20);
  return;
}


// ===== 00446178  FUN_00446178 =====

long FUN_00446178(void)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = FUN_0043eb70();
  if (iVar2 != 0) {
    lVar3 = FUN_003c8474(0x1c0,"providers/implementations/ciphers/cipher_aes_wrp.c",0x3b);
    if (lVar3 != 0) {
      FUN_0046cd08(lVar3,0x100,0x40,0x40,0x10002,0x202,0,0);
      bVar1 = *(byte *)(lVar3 + 0x6c) & 0xfe;
      if (*(long *)(lVar3 + 0x50) == 4) {
        bVar1 = bVar1 + 1;
      }
      *(byte *)(lVar3 + 0x6c) = bVar1;
    }
    return lVar3;
  }
  return 0;
}


// ===== 00446204  FUN_00446204 =====

void FUN_00446204(undefined8 param_1)

{
  FUN_0046b8ec(param_1,0x10002,0x202,0x100,0x40,0x40);
  return;
}


// ===== 00446220  FUN_00446220 =====

long FUN_00446220(void)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = FUN_0043eb70();
  if (iVar2 != 0) {
    lVar3 = FUN_003c8474(0x1c0,"providers/implementations/ciphers/cipher_aes_wrp.c",0x3b);
    if (lVar3 != 0) {
      FUN_0046cd08(lVar3,0xc0,0x40,0x40,0x10002,0x202,0,0);
      bVar1 = *(byte *)(lVar3 + 0x6c) & 0xfe;
      if (*(long *)(lVar3 + 0x50) == 4) {
        bVar1 = bVar1 + 1;
      }
      *(byte *)(lVar3 + 0x6c) = bVar1;
    }
    return lVar3;
  }
  return 0;
}


// ===== 004462ac  FUN_004462ac =====

void FUN_004462ac(undefined8 param_1)

{
  FUN_0046b8ec(param_1,0x10002,0x202,0xc0,0x40,0x40);
  return;
}


// ===== 004462c8  FUN_004462c8 =====

long FUN_004462c8(void)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = FUN_0043eb70();
  if (iVar2 != 0) {
    lVar3 = FUN_003c8474(0x1c0,"providers/implementations/ciphers/cipher_aes_wrp.c",0x3b);
    if (lVar3 != 0) {
      FUN_0046cd08(lVar3,0x80,0x40,0x40,0x10002,0x202,0,0);
      bVar1 = *(byte *)(lVar3 + 0x6c) & 0xfe;
      if (*(long *)(lVar3 + 0x50) == 4) {
        bVar1 = bVar1 + 1;
      }
      *(byte *)(lVar3 + 0x6c) = bVar1;
    }
    return lVar3;
  }
  return 0;
}


// ===== 00446354  FUN_00446354 =====

void FUN_00446354(undefined8 param_1)

{
  FUN_0046b8ec(param_1,0x10002,0x202,0x80,0x40,0x40);
  return;
}


// ===== 00446370  FUN_00446370 =====

long FUN_00446370(void)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = FUN_0043eb70();
  if (iVar2 != 0) {
    lVar3 = FUN_003c8474(0x1c0,"providers/implementations/ciphers/cipher_aes_wrp.c",0x3b);
    if (lVar3 != 0) {
      FUN_0046cd08(lVar3,0x100,0x40,0x20,0x10002,0x202,0,0);
      bVar1 = *(byte *)(lVar3 + 0x6c) & 0xfe;
      if (*(long *)(lVar3 + 0x50) == 4) {
        bVar1 = bVar1 + 1;
      }
      *(byte *)(lVar3 + 0x6c) = bVar1;
    }
    return lVar3;
  }
  return 0;
}


// ===== 004463fc  FUN_004463fc =====

void FUN_004463fc(undefined8 param_1)

{
  FUN_0046b8ec(param_1,0x10002,0x202,0x100,0x40,0x20);
  return;
}


// ===== 00446418  FUN_00446418 =====

long FUN_00446418(void)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = FUN_0043eb70();
  if (iVar2 != 0) {
    lVar3 = FUN_003c8474(0x1c0,"providers/implementations/ciphers/cipher_aes_wrp.c",0x3b);
    if (lVar3 != 0) {
      FUN_0046cd08(lVar3,0xc0,0x40,0x20,0x10002,0x202,0,0);
      bVar1 = *(byte *)(lVar3 + 0x6c) & 0xfe;
      if (*(long *)(lVar3 + 0x50) == 4) {
        bVar1 = bVar1 + 1;
      }
      *(byte *)(lVar3 + 0x6c) = bVar1;
    }
    return lVar3;
  }
  return 0;
}


// ===== 004464a4  FUN_004464a4 =====

void FUN_004464a4(undefined8 param_1)

{
  FUN_0046b8ec(param_1,0x10002,0x202,0xc0,0x40,0x20);
  return;
}


// ===== 004464c0  FUN_004464c0 =====

long FUN_004464c0(void)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = FUN_0043eb70();
  if (iVar2 != 0) {
    lVar3 = FUN_003c8474(0x1c0,"providers/implementations/ciphers/cipher_aes_wrp.c",0x3b);
    if (lVar3 != 0) {
      FUN_0046cd08(lVar3,0x80,0x40,0x20,0x10002,0x202,0,0);
      bVar1 = *(byte *)(lVar3 + 0x6c) & 0xfe;
      if (*(long *)(lVar3 + 0x50) == 4) {
        bVar1 = bVar1 + 1;
      }
      *(byte *)(lVar3 + 0x6c) = bVar1;
    }
    return lVar3;
  }
  return 0;
}


// ===== 0044654c  FUN_0044654c =====

void FUN_0044654c(undefined8 param_1)

{
  FUN_0046b8ec(param_1,0x10002,0x202,0x80,0x40,0x20);
  return;
}


// ===== 00446568  FUN_00446568 =====

undefined8
FUN_00446568(long param_1,long param_2,long param_3,long param_4,undefined8 param_5,long param_6,
            uint param_7)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long local_38;
  
  uVar4 = FUN_0043eb70();
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  puVar6 = PTR_FUN_007a1ac8;
  puVar1 = PTR_FUN_007a1ad0;
  if (param_7 != 0) {
    puVar6 = PTR_FUN_007a1ab8;
    puVar1 = PTR_FUN_007a1ac0;
  }
  if ((*(byte *)(param_1 + 0x6c) & 1) != 0) {
    puVar1 = puVar6;
  }
  *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) & 0xfd | (byte)((param_7 & 1) << 1);
  *(undefined **)(param_1 + 0x1b8) = puVar1;
  if ((param_4 != 0) && (uVar4 = FUN_0046cc60(param_1,param_4,param_5), (int)uVar4 == 0)) {
    return uVar4;
  }
  if (param_2 != 0) {
    if (*(long *)(param_1 + 0x48) != param_3) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/ciphers/cipher_aes_wrp.c",0x79,"aes_wrap_init");
      uVar4 = 0x69;
      goto LAB_0044673c;
    }
    bVar2 = *(byte *)(param_1 + 0x6c);
    if ((bVar2 >> 6 & 1) == 0) {
      bVar2 = bVar2 >> 1 & 1;
    }
    else {
      bVar2 = bVar2 & 2;
    }
    if (bVar2 == 0) {
      FUN_003789ec();
      puVar6 = PTR_FUN_007a1998;
    }
    else {
      FUN_00378fcc(param_2,(int)param_3 << 3,param_1 + 0xc0);
      puVar6 = PTR_FUN_007a19a0;
    }
    *(undefined **)(param_1 + 0x30) = puVar6;
  }
  local_38 = 0;
  if ((param_6 == 0) || (lVar5 = FUN_003cb19c(param_6,"keylen"), lVar5 == 0)) {
    return 1;
  }
  iVar3 = thunk_FUN_003cc060(lVar5,&local_38);
  if (iVar3 == 0) {
    uVar4 = 0x67;
    uVar7 = 0x110;
  }
  else {
    if (*(long *)(param_1 + 0x48) == local_38) {
      return 1;
    }
    uVar4 = 0x69;
    uVar7 = 0x114;
  }
  FUN_00379868();
  FUN_0037995c("providers/implementations/ciphers/cipher_aes_wrp.c",uVar7,"aes_wrap_set_ctx_params")
  ;
LAB_0044673c:
  FUN_00379a5c(0x39,uVar4,0);
  return 0;
}


// ===== 00446760  FUN_00446760 =====

long FUN_00446760(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_003c8474(0x2d8,"providers/implementations/ciphers/cipher_aes_xts.c",0x72);
  if (lVar1 != 0) {
    uVar2 = FUN_00446d38(0x200);
    FUN_0046cd08(lVar1,0x200,8,0x80,0x10001,2,uVar2,0);
  }
  return lVar1;
}


// ===== 004467c4  FUN_004467c4 =====

void FUN_004467c4(void)

{
  FUN_00446b94();
  return;
}


// ===== 004467cc  FUN_004467cc =====

void FUN_004467cc(void)

{
  FUN_00446b94();
  return;
}


// ===== 004467d4  FUN_004467d4 =====

undefined8 FUN_004467d4(void)

{
  int iVar1;
  ulong in_x3;
  ulong in_x5;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (in_x3 < in_x5) {
    uVar2 = 0x6a;
    uVar3 = 0xc5;
  }
  else {
    iVar1 = FUN_0044687c();
    if (iVar1 != 0) {
      return 1;
    }
    uVar2 = 0x66;
    uVar3 = 0xca;
  }
  FUN_00379868();
  FUN_0037995c("providers/implementations/ciphers/cipher_aes_xts.c",uVar3,"aes_xts_stream_update");
  FUN_00379a5c(0x39,uVar2,0);
  return 0;
}


// ===== 00446850  FUN_00446850 =====

undefined8 FUN_00446850(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0043eb70();
  if ((int)uVar1 != 0) {
    uVar1 = 1;
    *param_3 = 0;
  }
  return uVar1;
}


// ===== 0044687c  FUN_0044687c =====

undefined8
FUN_0044687c(long param_1,long param_2,ulong *param_3,undefined8 param_4,long param_5,ulong param_6)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_0043eb70();
  if ((int)uVar2 != 0) {
    if ((*(long *)(param_1 + 0x2b0) != 0) && (*(long *)(param_1 + 0x2b8) != 0)) {
      if (param_6 < 0x10) {
        return 0;
      }
      if (param_5 == 0) {
        return 0;
      }
      if (param_2 == 0) {
        return 0;
      }
      if ((*(byte *)(param_1 + 0x6c) >> 2 & 1) == 0) {
        return 0;
      }
      if (param_6 < 0x1000001) {
        if (*(code **)(param_1 + 0x2d0) != (code *)0x0) {
          (**(code **)(param_1 + 0x2d0))
                    (param_5,param_2,param_6,*(long *)(param_1 + 0x2b0),*(long *)(param_1 + 0x2b8),
                     param_1 + 0x20);
LAB_00446948:
          *param_3 = param_6;
          return 1;
        }
        iVar1 = FUN_003dbdcc(param_1 + 0x2b0,param_1 + 0x20,param_5,param_2,param_6,
                             *(byte *)(param_1 + 0x6c) >> 1 & 1);
        if (iVar1 == 0) goto LAB_00446948;
      }
      else {
        FUN_00379868(0);
        FUN_0037995c("providers/implementations/ciphers/cipher_aes_xts.c",0xb0,"aes_xts_cipher");
        FUN_00379a5c(0x39,0x94,0);
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}


// ===== 00446988  FUN_00446988 =====

void FUN_00446988(undefined8 param_1)

{
  FUN_0046bda4();
  FUN_003c893c(param_1,0x2d8,"providers/implementations/ciphers/cipher_aes_xts.c",0x81);
  return;
}


// ===== 004469bc  FUN_004469bc =====

long FUN_004469bc(long param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 == 0) {
    return 0;
  }
  if ((*(long *)(param_1 + 0x2b0) == 0) || (*(long *)(param_1 + 0x2b0) == param_1 + 0xc0)) {
    if ((*(long *)(param_1 + 0x2b8) != 0) && (*(long *)(param_1 + 0x2b8) != param_1 + 0x1b8)) {
      return 0;
    }
    lVar2 = FUN_003c83a4(0x2d8,"providers/implementations/ciphers/cipher_aes_xts.c",0x94);
    if (lVar2 != 0) {
      (**(code **)(*(long *)(param_1 + 0xa8) + 0x10))(lVar2,param_1);
      return lVar2;
    }
  }
  else {
    lVar2 = 0;
  }
  return lVar2;
}


// ===== 00446a58  FUN_00446a58 =====

void FUN_00446a58(undefined8 param_1)

{
  FUN_0046b8ec(param_1,0x10001,2,0x200,8,0x80);
  return;
}


// ===== 00446a70  FUN_00446a70 =====

undefined8 FUN_00446a70(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long local_8;
  
  if (param_2 == 0) {
    return 1;
  }
  lVar2 = FUN_003cb19c(param_2,"keylen");
  if (lVar2 == 0) {
    return 1;
  }
  iVar1 = thunk_FUN_003cc060(lVar2,&local_8);
  if (iVar1 == 0) {
    FUN_00379868();
    FUN_0037995c("providers/implementations/ciphers/cipher_aes_xts.c",0xf2,"aes_xts_set_ctx_params")
    ;
    FUN_00379a5c(0x39,0x67,0);
  }
  else if (local_8 == *(long *)(param_1 + 0x48)) {
    return 1;
  }
  return 0;
}


// ===== 00446b0c  FUN_00446b0c =====

undefined ** FUN_00446b0c(void)

{
  return &PTR_s_keylen_00786030;
}


// ===== 00446b18  FUN_00446b18 =====

long FUN_00446b18(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_003c8474(0x2d8,"providers/implementations/ciphers/cipher_aes_xts.c",0x72);
  if (lVar1 != 0) {
    uVar2 = FUN_00446d38(0x100);
    FUN_0046cd08(lVar1,0x100,8,0x80,0x10001,2,uVar2,0);
  }
  return lVar1;
}


// ===== 00446b7c  FUN_00446b7c =====

void FUN_00446b7c(undefined8 param_1)

{
  FUN_0046b8ec(param_1,0x10001,2,0x100,8,0x80);
  return;
}


// ===== 00446b94  FUN_00446b94 =====

undefined8
FUN_00446b94(long param_1,long param_2,ulong param_3,long param_4,undefined8 param_5,long param_6,
            uint param_7)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_38;
  
  uVar2 = FUN_0043eb70();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) & 0xfd | (byte)((param_7 & 1) << 1);
  if ((param_4 != 0) && (uVar2 = FUN_0046cc60(param_1,param_4,param_5), (int)uVar2 == 0)) {
    return uVar2;
  }
  if (param_2 != 0) {
    if (*(ulong *)(param_1 + 0x48) != param_3) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/ciphers/cipher_aes_xts.c",0x56,"aes_xts_init");
      uVar2 = 0x69;
      goto LAB_00446d14;
    }
    if (((param_7 != 0) || (DAT_0020ee08 == 0)) &&
       (iVar1 = FUN_003c46d4(param_2,param_2 + (param_3 >> 1)), iVar1 == 0)) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/ciphers/cipher_aes_xts.c",0x3b,
                   "aes_xts_check_keys_differ");
      uVar2 = 0x95;
      goto LAB_00446d14;
    }
    uVar2 = (*(code *)**(undefined8 **)(param_1 + 0xa8))(param_1,param_2,param_3);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
  }
  if ((param_6 != 0) && (lVar3 = FUN_003cb19c(param_6,"keylen"), lVar3 != 0)) {
    iVar1 = thunk_FUN_003cc060(lVar3,&local_38);
    if (iVar1 == 0) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/ciphers/cipher_aes_xts.c",0xf2,
                   "aes_xts_set_ctx_params");
      uVar2 = 0x67;
LAB_00446d14:
      FUN_00379a5c(0x39,uVar2,0);
      return 0;
    }
    if (local_38 != *(long *)(param_1 + 0x48)) {
      return 0;
    }
  }
  return 1;
}


// ===== 00446d38  FUN_00446d38 =====

undefined ** FUN_00446d38(void)

{
  return &PTR_FUN_00786080;
}


// ===== 00446d44  FUN_00446d44 =====

undefined8 FUN_00446d44(long param_1,long param_2,ulong param_3)

{
  int iVar1;
  undefined *puVar2;
  code *pcVar3;
  
  puVar2 = PTR_FUN_007a1998;
  iVar1 = (int)(param_3 >> 1) << 3;
  if ((*(byte *)(param_1 + 0x6c) >> 1 & 1) == 0) {
    FUN_00378fcc();
    pcVar3 = FUN_00379544;
  }
  else {
    FUN_003789ec(param_2,iVar1,param_1 + 0xc0);
    pcVar3 = FUN_00379208;
  }
  *(code **)(param_1 + 0x2c0) = pcVar3;
  FUN_003789ec(param_2 + (param_3 >> 1),iVar1,param_1 + 0x1b8);
  *(undefined **)(param_1 + 0x2c8) = puVar2;
  *(long *)(param_1 + 0x2b0) = param_1 + 0xc0;
  *(long *)(param_1 + 0x2b8) = param_1 + 0x1b8;
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  return 1;
}


// ===== 00446de4  FUN_00446de4 =====

void FUN_00446de4(void *param_1,void *param_2)

{
  memcpy(param_1,param_2,0x2d8);
  *(long *)((long)param_1 + 0x2b0) = (long)param_1 + 0xc0;
  *(long *)((long)param_1 + 0x2b8) = (long)param_1 + 0x1b8;
  return;
}


// ===== 00446e18  FUN_00446e18 =====

undefined8 FUN_00446e18(uint param_1)

{
  if (param_1 < 3) {
    return *(undefined8 *)(&DAT_0020ee14 + *(int *)(&DAT_0020ee0c + (ulong)param_1 * 4));
  }
  return 0;
}


// ===== 00446e40  FUN_00446e40 =====

undefined4 FUN_00446e40(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_003cab04(param_1,&DAT_001bce35);
  if (iVar1 == 0) {
    return DAT_00786098;
  }
  iVar1 = FUN_003cab04(param_1,&DAT_001eb89c);
  if (iVar1 != 0) {
    iVar1 = FUN_003cab04(param_1,&DAT_001f3f0b);
    if (iVar1 != 0) {
      return 0xffffffff;
    }
    return DAT_007860b8;
  }
  return DAT_007860a8;
}


// ===== 00446ee0  FUN_00446ee0 =====

undefined8
FUN_00446ee0(long param_1,long param_2,ulong *param_3,ulong param_4,undefined8 param_5,ulong param_6
            )

{
  int iVar1;
  
  if ((param_6 < 0x10) || (param_4 < param_6)) {
    return 0;
  }
  if (param_2 != 0) {
    if ((*(byte *)(param_1 + 0x6c) >> 4 & 1) != 0) {
      return 0;
    }
    iVar1 = *(int *)(param_1 + 0x68);
    if ((*(byte *)(param_1 + 0x6c) >> 1 & 1) == 0) {
      if (iVar1 == 2) {
        param_6 = FUN_00447564(param_1,param_5,param_2,param_6);
      }
      else if (iVar1 == 1) {
        param_6 = FUN_0044751c(param_1,param_5,param_2,param_6);
      }
      else {
        if (iVar1 != 0) {
          return 0;
        }
        param_6 = FUN_00447368(param_1,param_5,param_2,param_6);
      }
    }
    else if (iVar1 == 2) {
      param_6 = FUN_0044723c(param_1,param_5,param_2,param_6);
    }
    else if (iVar1 == 1) {
      param_6 = FUN_004470fc(param_1,param_5,param_2,param_6);
    }
    else {
      if (iVar1 != 0) {
        return 0;
      }
      param_6 = FUN_00447034(param_1,param_5,param_2,param_6);
    }
    if (param_6 == 0) {
      return 0;
    }
    *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) | 0x10;
  }
  *param_3 = param_6;
  return 1;
}


// ===== 00447034  FUN_00447034 =====

ulong FUN_00447034(long param_1,long param_2,long param_3,ulong param_4)

{
  int iVar1;
  ulong uVar2;
  ulong __n;
  undefined1 auStack_50 [16];
  
  uVar2 = param_4 & 0xfffffffffffffff0;
  iVar1 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,param_3,param_2,uVar2);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    __n = param_4 & 0xf;
    if (__n != 0) {
      memset(auStack_50 + __n,0,0x10 - __n);
      memcpy(auStack_50,(void *)(param_2 + uVar2),__n);
      iVar1 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))
                        (param_1,param_3 + uVar2 + __n + -0x10,auStack_50,0x10);
      uVar2 = 0;
      if (iVar1 != 0) {
        uVar2 = param_4;
      }
    }
  }
  return uVar2;
}


// ===== 004470fc  FUN_004470fc =====

ulong FUN_004470fc(long param_1,undefined1 *param_2,void *param_3,ulong param_4)

{
  void *__dest;
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auStack_50 [16];
  
  uVar2 = param_4 & 0xf;
  if (uVar2 == 0) {
    lVar3 = *(long *)(param_1 + 0xa8);
    uVar2 = param_4;
  }
  else {
    if (param_4 == 0x10) {
      iVar1 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,param_3,param_2,0x10);
      return (ulong)(iVar1 != 0) << 4;
    }
    uVar4 = param_4 & 0xfffffffffffffff0;
    iVar1 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,param_3,param_2,uVar4);
    if (iVar1 == 0) {
      return 0;
    }
    __dest = (void *)((long)param_3 + uVar4);
    memset(auStack_50 + uVar2,0,0x10 - uVar2);
    memcpy(auStack_50,param_2 + uVar4,uVar2);
    param_3 = (void *)((long)__dest + -0x10);
    memcpy(__dest,param_3,uVar2);
    lVar3 = *(long *)(param_1 + 0xa8);
    param_2 = auStack_50;
    uVar2 = 0x10;
  }
  iVar1 = (**(code **)(lVar3 + 8))(param_1,param_3,param_2,uVar2);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = param_4;
  }
  return uVar2;
}


// ===== 0044723c  FUN_0044723c =====

ulong FUN_0044723c(long param_1,long param_2,long param_3,ulong param_4)

{
  size_t __n;
  ulong uVar1;
  int iVar2;
  void *__src;
  long lVar3;
  undefined1 auStack_50 [16];
  
  if (param_4 == 0x10) {
    iVar2 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,param_3,param_2);
    return (ulong)(iVar2 != 0) << 4;
  }
  __n = 0x10;
  if ((param_4 & 0xf) != 0) {
    __n = param_4 & 0xf;
  }
  lVar3 = param_4 - __n;
  iVar2 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,param_3,param_2,lVar3);
  if (iVar2 != 0) {
    memset(auStack_50 + __n,0,0x10 - __n);
    memcpy(auStack_50,(void *)(param_2 + lVar3),__n);
    __src = (void *)(param_3 + lVar3 + -0x10);
    memcpy((void *)(param_3 + lVar3),__src,__n);
    iVar2 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,__src,auStack_50,0x10);
    uVar1 = 0;
    if (iVar2 != 0) {
      uVar1 = param_4;
    }
    return uVar1;
  }
  return 0;
}


// ===== 00447368  FUN_00447368 =====

ulong FUN_00447368(long param_1,void *param_2,long param_3,ulong param_4)

{
  ulong __n;
  int iVar1;
  long lVar2;
  byte *pbVar3;
  long lVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  byte abStack_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  byte abStack_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  
  __n = param_4 & 0xf;
  if (__n == 0) {
    iVar1 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,param_3,param_2,param_4);
    if (iVar1 != 0) {
      return param_4;
    }
    return 0;
  }
  lVar4 = param_4 - (__n | 0x10);
  if (lVar4 != 0) {
    iVar1 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,param_3,param_2,lVar4);
    if (iVar1 == 0) {
      return 0;
    }
    param_2 = (void *)((long)param_2 + lVar4);
    param_3 = param_3 + lVar4;
  }
  uStack_48 = *(undefined8 *)(param_1 + 0x28);
  local_50 = *(undefined8 *)(param_1 + 0x20);
  uStack_68 = ((undefined8 *)((long)param_2 + __n))[1];
  local_70 = *(undefined8 *)((long)param_2 + __n);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  iVar1 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,abStack_80,(long)param_2 + __n,0x10);
  if (iVar1 == 0) {
    return 0;
  }
  memcpy(abStack_60,param_2,__n);
  memcpy(abStack_60 + __n,abStack_80 + __n,0x10 - __n);
  if (__n < 8) {
    lVar2 = 0;
  }
  else {
    lVar2 = __n - (param_4 & 7);
    puVar5 = (undefined8 *)(param_3 + 0x10);
    pbVar3 = abStack_60;
    pbVar6 = abStack_80;
    lVar4 = lVar2;
    do {
      uVar8 = *(undefined8 *)pbVar3;
      lVar4 = lVar4 + -8;
      uVar9 = *(undefined8 *)pbVar6;
      *puVar5 = CONCAT17((byte)((ulong)uVar9 >> 0x38) ^ (byte)((ulong)uVar8 >> 0x38),
                         CONCAT16((byte)((ulong)uVar9 >> 0x30) ^ (byte)((ulong)uVar8 >> 0x30),
                                  CONCAT15((byte)((ulong)uVar9 >> 0x28) ^
                                           (byte)((ulong)uVar8 >> 0x28),
                                           CONCAT14((byte)((ulong)uVar9 >> 0x20) ^
                                                    (byte)((ulong)uVar8 >> 0x20),
                                                    CONCAT13((byte)((ulong)uVar9 >> 0x18) ^
                                                             (byte)((ulong)uVar8 >> 0x18),
                                                             CONCAT12((byte)((ulong)uVar9 >> 0x10) ^
                                                                      (byte)((ulong)uVar8 >> 0x10),
                                                                      CONCAT11((byte)((ulong)uVar9
                                                                                     >> 8) ^
                                                                               (byte)((ulong)uVar8
                                                                                     >> 8),
                                                                               (byte)uVar9 ^
                                                                               (byte)uVar8)))))));
      puVar5 = puVar5 + 1;
      pbVar3 = pbVar3 + 8;
      pbVar6 = (byte *)((long)pbVar6 + 8);
    } while (lVar4 != 0);
    if ((param_4 & 7) == 0) goto LAB_004474c8;
  }
  lVar4 = __n - lVar2;
  pbVar3 = abStack_60 + lVar2;
  pbVar6 = (byte *)(lVar2 + param_3 + 0x10);
  pbVar7 = abStack_80 + lVar2;
  do {
    lVar4 = lVar4 + -1;
    *pbVar6 = *pbVar7 ^ *pbVar3;
    pbVar3 = pbVar3 + 1;
    pbVar6 = pbVar6 + 1;
    pbVar7 = pbVar7 + 1;
  } while (lVar4 != 0);
LAB_004474c8:
  *(undefined8 *)(param_1 + 0x28) = uStack_48;
  *(undefined8 *)(param_1 + 0x20) = local_50;
  iVar1 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,param_3,abStack_60,0x10);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x28) = uStack_68;
  *(undefined8 *)(param_1 + 0x20) = local_70;
  return param_4;
}


// ===== 0044751c  FUN_0044751c =====

ulong FUN_0044751c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  ulong uVar2;
  
  if ((param_4 & 0xf) != 0) {
    uVar2 = FUN_00447564();
    return uVar2;
  }
  iVar1 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,param_3,param_2);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = param_4;
  }
  return uVar2;
}


// ===== 00447564  FUN_00447564 =====

ulong FUN_00447564(long param_1,undefined8 *param_2,long param_3,ulong param_4)

{
  ulong __n;
  int iVar1;
  ulong uVar2;
  byte *pbVar3;
  long lVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte local_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  byte local_70 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  
  if (param_4 == 0x10) {
    iVar1 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,param_3,param_2);
    return (ulong)(iVar1 != 0) << 4;
  }
  uVar2 = param_4 & 0xf;
  __n = 0x10;
  if (uVar2 != 0) {
    __n = uVar2;
  }
  lVar4 = param_4 - (__n + 0x10);
  if (lVar4 != 0) {
    iVar1 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,param_3,param_2,lVar4);
    if (iVar1 == 0) {
      return 0;
    }
    param_2 = (undefined8 *)((long)param_2 + lVar4);
    param_3 = param_3 + lVar4;
  }
  uStack_58 = *(undefined8 *)(param_1 + 0x28);
  local_60 = *(undefined8 *)(param_1 + 0x20);
  uStack_78 = param_2[1];
  local_80 = *param_2;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  iVar1 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,local_90,param_2,0x10);
  if (iVar1 == 0) {
    return 0;
  }
  memcpy(local_70,param_2 + 2,__n);
  if (uVar2 == 0) {
    *(ulong *)(param_3 + 0x18) =
         CONCAT17(SUB81(local_90._8_8_,7) ^ SUB81(local_70._8_8_,7),
                  CONCAT16(SUB81(local_90._8_8_,6) ^ SUB81(local_70._8_8_,6),
                           CONCAT15(SUB81(local_90._8_8_,5) ^ SUB81(local_70._8_8_,5),
                                    CONCAT14(SUB81(local_90._8_8_,4) ^ SUB81(local_70._8_8_,4),
                                             CONCAT13(SUB81(local_90._8_8_,3) ^
                                                      SUB81(local_70._8_8_,3),
                                                      CONCAT12(SUB81(local_90._8_8_,2) ^
                                                               SUB81(local_70._8_8_,2),
                                                               CONCAT11(SUB81(local_90._8_8_,1) ^
                                                                        SUB81(local_70._8_8_,1),
                                                                        (byte)local_90._8_8_ ^
                                                                        (byte)local_70._8_8_)))))));
    *(ulong *)(param_3 + 0x10) =
         CONCAT17(SUB81(local_90._0_8_,7) ^ SUB81(local_70._0_8_,7),
                  CONCAT16(SUB81(local_90._0_8_,6) ^ SUB81(local_70._0_8_,6),
                           CONCAT15(SUB81(local_90._0_8_,5) ^ SUB81(local_70._0_8_,5),
                                    CONCAT14(SUB81(local_90._0_8_,4) ^ SUB81(local_70._0_8_,4),
                                             CONCAT13(SUB81(local_90._0_8_,3) ^
                                                      SUB81(local_70._0_8_,3),
                                                      CONCAT12(SUB81(local_90._0_8_,2) ^
                                                               SUB81(local_70._0_8_,2),
                                                               CONCAT11(SUB81(local_90._0_8_,1) ^
                                                                        SUB81(local_70._0_8_,1),
                                                                        (byte)local_90._0_8_ ^
                                                                        (byte)local_70._0_8_)))))));
  }
  else {
    memcpy(local_70 + uVar2,local_90 + uVar2,0x10 - uVar2);
    if (__n < 8) {
      uVar2 = 0;
    }
    else {
      uVar2 = __n & 0x18;
      *(ulong *)(param_3 + 0x10) =
           CONCAT17(SUB81(local_90._0_8_,7) ^ SUB81(local_70._0_8_,7),
                    CONCAT16(SUB81(local_90._0_8_,6) ^ SUB81(local_70._0_8_,6),
                             CONCAT15(SUB81(local_90._0_8_,5) ^ SUB81(local_70._0_8_,5),
                                      CONCAT14(SUB81(local_90._0_8_,4) ^ SUB81(local_70._0_8_,4),
                                               CONCAT13(SUB81(local_90._0_8_,3) ^
                                                        SUB81(local_70._0_8_,3),
                                                        CONCAT12(SUB81(local_90._0_8_,2) ^
                                                                 SUB81(local_70._0_8_,2),
                                                                 CONCAT11(SUB81(local_90._0_8_,1) ^
                                                                          SUB81(local_70._0_8_,1),
                                                                          (byte)local_90._0_8_ ^
                                                                          (byte)local_70._0_8_))))))
                   );
      if ((uVar2 != 8) &&
         (*(ulong *)(param_3 + 0x18) =
               CONCAT17(SUB81(local_90._8_8_,7) ^ SUB81(local_70._8_8_,7),
                        CONCAT16(SUB81(local_90._8_8_,6) ^ SUB81(local_70._8_8_,6),
                                 CONCAT15(SUB81(local_90._8_8_,5) ^ SUB81(local_70._8_8_,5),
                                          CONCAT14(SUB81(local_90._8_8_,4) ^ SUB81(local_70._8_8_,4)
                                                   ,CONCAT13(SUB81(local_90._8_8_,3) ^
                                                             SUB81(local_70._8_8_,3),
                                                             CONCAT12(SUB81(local_90._8_8_,2) ^
                                                                      SUB81(local_70._8_8_,2),
                                                                      CONCAT11(SUB81(local_90._8_8_,
                                                                                     1) ^
                                                                               SUB81(local_70._8_8_,
                                                                                     1),(byte)
                                                  local_90._8_8_ ^ (byte)local_70._8_8_))))))),
         uVar2 != 0x10)) {
        *(ulong *)(param_3 + 0x20) =
             CONCAT17((byte)((ulong)local_80 >> 0x38) ^ (byte)((ulong)local_60 >> 0x38),
                      CONCAT16((byte)((ulong)local_80 >> 0x30) ^ (byte)((ulong)local_60 >> 0x30),
                               CONCAT15((byte)((ulong)local_80 >> 0x28) ^
                                        (byte)((ulong)local_60 >> 0x28),
                                        CONCAT14((byte)((ulong)local_80 >> 0x20) ^
                                                 (byte)((ulong)local_60 >> 0x20),
                                                 CONCAT13((byte)((ulong)local_80 >> 0x18) ^
                                                          (byte)((ulong)local_60 >> 0x18),
                                                          CONCAT12((byte)((ulong)local_80 >> 0x10) ^
                                                                   (byte)((ulong)local_60 >> 0x10),
                                                                   CONCAT11((byte)((ulong)local_80
                                                                                  >> 8) ^
                                                                            (byte)((ulong)local_60
                                                                                  >> 8),
                                                                            (byte)local_80 ^
                                                                            (byte)local_60)))))));
      }
      if (__n == uVar2) goto LAB_00447704;
    }
    lVar4 = __n - uVar2;
    pbVar3 = local_70 + uVar2;
    pbVar5 = (byte *)(uVar2 + param_3 + 0x10);
    pbVar6 = local_90 + uVar2;
    do {
      lVar4 = lVar4 + -1;
      *pbVar5 = *pbVar6 ^ *pbVar3;
      pbVar3 = pbVar3 + 1;
      pbVar5 = pbVar5 + 1;
      pbVar6 = pbVar6 + 1;
    } while (lVar4 != 0);
  }
LAB_00447704:
  *(undefined8 *)(param_1 + 0x28) = uStack_58;
  *(undefined8 *)(param_1 + 0x20) = local_60;
  iVar1 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,param_3,local_70,0x10);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x28) = uStack_78;
  *(undefined8 *)(param_1 + 0x20) = local_80;
  return param_4;
}


// ===== 0044775c  FUN_0044775c =====

undefined8 FUN_0044775c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_3 = 0;
  return 1;
}


// ===== 00447768  FUN_00447768 =====

undefined8 FUN_00447768(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    uVar2 = FUN_003c8474(0x18,"providers/implementations/ciphers/cipher_null.c",0x1e);
    return uVar2;
  }
  return 0;
}


// ===== 0044779c  FUN_0044779c =====

void FUN_0044779c(undefined8 param_1)

{
  FUN_003c86b4(param_1,"providers/implementations/ciphers/cipher_null.c",0x24);
  return;
}


// ===== 004477ac  FUN_004477ac =====

void FUN_004477ac(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    *param_1 = 1;
  }
  return;
}


// ===== 004477d8  FUN_004477d8 =====

bool FUN_004477d8(void)

{
  int iVar1;
  
  iVar1 = FUN_0043eb70();
  return iVar1 != 0;
}


// ===== 004477f4  FUN_004477f4 =====

undefined8
FUN_004477f4(int *param_1,void *param_2,ulong *param_3,ulong param_4,void *param_5,ulong param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong __n;
  
  uVar1 = FUN_0043eb70();
  if ((int)uVar1 != 0) {
    __n = param_6;
    if ((*param_1 == 0) && (uVar2 = *(ulong *)(param_1 + 2), uVar2 != 0)) {
      __n = param_6 - uVar2;
      if (param_6 < uVar2) {
        return 0;
      }
      *(ulong *)(param_1 + 4) = (long)param_5 + (param_6 - uVar2);
    }
    if (__n <= param_4) {
      if (param_5 != param_2) {
        memcpy(param_2,param_5,__n);
      }
      *param_3 = __n;
      return 1;
    }
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 004478c0  FUN_004478c0 =====

undefined8 FUN_004478c0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0043eb70();
  if ((int)uVar1 != 0) {
    uVar1 = 1;
    *param_3 = 0;
  }
  return uVar1;
}


// ===== 004478ec  FUN_004478ec =====

void FUN_004478ec(undefined8 param_1)

{
  FUN_0046b8ec(param_1,0,0,0,8,0);
  return;
}


// ===== 00447904  FUN_00447904 =====

undefined8 FUN_00447904(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_003cb140(param_2,"ivlen");
  if ((lVar2 == 0) || (iVar1 = thunk_FUN_003cc2a4(lVar2,0), iVar1 != 0)) {
    lVar2 = FUN_003cb140(param_2,"keylen");
    if ((lVar2 == 0) || (iVar1 = thunk_FUN_003cc2a4(lVar2,0), iVar1 != 0)) {
      lVar2 = FUN_003cb140(param_2,"tls-mac");
      if ((lVar2 == 0) ||
         (iVar1 = FUN_003cdb94(lVar2,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8)),
         iVar1 != 0)) {
        return 1;
      }
      uVar3 = 0x8d;
    }
    else {
      uVar3 = 0x87;
    }
  }
  else {
    uVar3 = 0x82;
  }
  FUN_00379868();
  FUN_0037995c("providers/implementations/ciphers/cipher_null.c",uVar3,"null_get_ctx_params");
  FUN_00379a5c(0x39,0x68,0);
  return 0;
}


// ===== 004479d8  FUN_004479d8 =====

undefined ** FUN_004479d8(void)

{
  return &PTR_s_keylen_007861b8;
}


// ===== 004479e4  FUN_004479e4 =====

undefined8 FUN_004479e4(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_003cb19c(param_2,"tls-mac-size");
  if ((lVar2 != 0) && (iVar1 = thunk_FUN_003cc060(lVar2,param_1 + 8), iVar1 == 0)) {
    FUN_00379868();
    FUN_0037995c("providers/implementations/ciphers/cipher_null.c",0xa9,"null_set_ctx_params");
    FUN_00379a5c(0x39,0x67,0);
    return 0;
  }
  return 1;
}


// ===== 00447a64  FUN_00447a64 =====

undefined ** FUN_00447a64(void)

{
  return &PTR_s_tls_mac_size_00786258;
}


// ===== 00447a70  FUN_00447a70 =====

undefined8 FUN_00447a70(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    uVar2 = FUN_003c8474(0x5c,"providers/implementations/digests/md5_prov.c",0x18);
    return uVar2;
  }
  return 0;
}


// ===== 00447aa4  FUN_00447aa4 =====

undefined8 FUN_00447aa4(undefined8 param_1,undefined8 param_2,undefined8 *param_3,ulong param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_0043eb70();
  uVar2 = 0;
  if (((0xf < param_4) && (iVar1 != 0)) && (uVar2 = FUN_003d6324(param_2,param_1), (int)uVar2 != 0))
  {
    uVar2 = 1;
    *param_3 = 0x10;
  }
  return uVar2;
}


// ===== 00447b08  FUN_00447b08 =====

void FUN_00447b08(undefined8 param_1)

{
  FUN_003c893c(param_1,0x5c,"providers/implementations/digests/md5_prov.c",0x18);
  return;
}


// ===== 00447b1c  FUN_00447b1c =====

undefined8 * FUN_00447b1c(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  iVar1 = FUN_0043eb70();
  if ((iVar1 != 0) &&
     (puVar2 = (undefined8 *)FUN_003c83a4(0x5c,"providers/implementations/digests/md5_prov.c",0x18),
     puVar2 != (undefined8 *)0x0)) {
    uVar4 = param_1[5];
    uVar3 = param_1[4];
    uVar6 = param_1[7];
    uVar5 = param_1[6];
    uVar7 = param_1[8];
    puVar2[9] = param_1[9];
    puVar2[8] = uVar7;
    puVar2[5] = uVar4;
    puVar2[4] = uVar3;
    puVar2[7] = uVar6;
    puVar2[6] = uVar5;
    uVar3 = *(undefined8 *)((long)param_1 + 0x4c);
    *(undefined8 *)((long)puVar2 + 0x54) = *(undefined8 *)((long)param_1 + 0x54);
    *(undefined8 *)((long)puVar2 + 0x4c) = uVar3;
    uVar5 = *param_1;
    uVar4 = param_1[3];
    uVar3 = param_1[2];
    puVar2[1] = param_1[1];
    *puVar2 = uVar5;
    puVar2[3] = uVar4;
    puVar2[2] = uVar3;
    return puVar2;
  }
  return (undefined8 *)0x0;
}


// ===== 00447b88  FUN_00447b88 =====

void FUN_00447b88(undefined8 param_1)

{
  FUN_00472c14(param_1,0x40,0x10,0);
  return;
}


// ===== 00447b98  FUN_00447b98 =====

ulong FUN_00447b98(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = FUN_0043eb70();
  if ((int)uVar2 != 0) {
    iVar1 = FUN_003d63f0(param_1);
    uVar2 = (ulong)(iVar1 != 0);
  }
  return uVar2;
}


// ===== 00447bcc  FUN_00447bcc =====

undefined8 FUN_00447bcc(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    uVar2 = FUN_003c8474(0xbc,"providers/implementations/digests/md5_sha1_prov.c",0x3d);
    return uVar2;
  }
  return 0;
}


// ===== 00447c00  FUN_00447c00 =====

undefined8 FUN_00447c00(undefined8 param_1,undefined8 param_2,undefined8 *param_3,ulong param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_0043eb70();
  uVar2 = 0;
  if (((0x23 < param_4) && (iVar1 != 0)) && (uVar2 = FUN_003d6498(param_2,param_1), (int)uVar2 != 0)
     ) {
    uVar2 = 1;
    *param_3 = 0x24;
  }
  return uVar2;
}


// ===== 00447c64  FUN_00447c64 =====

void FUN_00447c64(undefined8 param_1)

{
  FUN_003c893c(param_1,0xbc,"providers/implementations/digests/md5_sha1_prov.c",0x3d);
  return;
}


// ===== 00447c78  FUN_00447c78 =====

undefined8 * FUN_00447c78(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  iVar1 = FUN_0043eb70();
  if ((iVar1 != 0) &&
     (puVar2 = (undefined8 *)
               FUN_003c83a4(0xbc,"providers/implementations/digests/md5_sha1_prov.c",0x3d),
     puVar2 != (undefined8 *)0x0)) {
    uVar4 = param_1[0x11];
    uVar3 = param_1[0x10];
    uVar6 = param_1[0x13];
    uVar5 = param_1[0x12];
    uVar7 = param_1[0x14];
    puVar2[0x15] = param_1[0x15];
    puVar2[0x14] = uVar7;
    puVar2[0x11] = uVar4;
    puVar2[0x10] = uVar3;
    puVar2[0x13] = uVar6;
    puVar2[0x12] = uVar5;
    uVar3 = *(undefined8 *)((long)param_1 + 0xac);
    *(undefined8 *)((long)puVar2 + 0xb4) = *(undefined8 *)((long)param_1 + 0xb4);
    *(undefined8 *)((long)puVar2 + 0xac) = uVar3;
    uVar5 = param_1[8];
    uVar4 = param_1[0xb];
    uVar3 = param_1[10];
    puVar2[9] = param_1[9];
    puVar2[8] = uVar5;
    puVar2[0xb] = uVar4;
    puVar2[10] = uVar3;
    uVar5 = param_1[0xc];
    uVar4 = param_1[0xf];
    uVar3 = param_1[0xe];
    puVar2[0xd] = param_1[0xd];
    puVar2[0xc] = uVar5;
    puVar2[0xf] = uVar4;
    puVar2[0xe] = uVar3;
    uVar5 = *param_1;
    uVar4 = param_1[3];
    uVar3 = param_1[2];
    puVar2[1] = param_1[1];
    *puVar2 = uVar5;
    puVar2[3] = uVar4;
    puVar2[2] = uVar3;
    uVar5 = param_1[4];
    uVar4 = param_1[7];
    uVar3 = param_1[6];
    puVar2[5] = param_1[5];
    puVar2[4] = uVar5;
    puVar2[7] = uVar4;
    puVar2[6] = uVar3;
    return puVar2;
  }
  return (undefined8 *)0x0;
}


// ===== 00447cfc  FUN_00447cfc =====

void FUN_00447cfc(undefined8 param_1)

{
  FUN_00472c14(param_1,0x40,0x24,0);
  return;
}


// ===== 00447d0c  FUN_00447d0c =====

ulong FUN_00447d0c(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN_0043eb70();
  if ((int)uVar2 != 0) {
    iVar1 = FUN_003d6414(param_1);
    uVar2 = 0;
    if ((param_1 != 0) && (iVar1 != 0)) {
      if ((param_2 == 0) ||
         ((lVar3 = FUN_003cb19c(param_2,"ssl3-ms"), lVar3 == 0 || (*(int *)(lVar3 + 8) != 5)))) {
        return 1;
      }
      iVar1 = FUN_003d64d4(param_1,0x1d,*(undefined4 *)(lVar3 + 0x18),*(undefined8 *)(lVar3 + 0x10))
      ;
      uVar2 = (ulong)(iVar1 != 0);
    }
  }
  return uVar2;
}


// ===== 00447d9c  FUN_00447d9c =====

undefined ** FUN_00447d9c(void)

{
  return &PTR_s_ssl3_ms_007863e8;
}


// ===== 00447da8  FUN_00447da8 =====

long FUN_00447da8(long param_1,long param_2)

{
  long lVar1;
  
  if (param_1 != 0) {
    if (((param_2 != 0) && (lVar1 = FUN_003cb19c(param_2,"ssl3-ms"), lVar1 != 0)) &&
       (*(int *)(lVar1 + 8) == 5)) {
      lVar1 = FUN_003d64d4(param_1,0x1d,*(undefined4 *)(lVar1 + 0x18),*(undefined8 *)(lVar1 + 0x10))
      ;
      return lVar1;
    }
    param_1 = 1;
  }
  return param_1;
}


// ===== 00447e10  FUN_00447e10 =====

undefined8 FUN_00447e10(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    uVar2 = FUN_003c8474(1,"providers/implementations/digests/null_prov.c",0x34);
    return uVar2;
  }
  return 0;
}


// ===== 00447e44  FUN_00447e44 =====

undefined8 FUN_00447e44(void)

{
  return 1;
}


// ===== 00447e4c  FUN_00447e4c =====

undefined8 FUN_00447e4c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0043eb70();
  if ((int)uVar1 != 0) {
    uVar1 = 1;
    *param_3 = 0;
  }
  return uVar1;
}


// ===== 00447e78  FUN_00447e78 =====

void FUN_00447e78(undefined8 param_1)

{
  FUN_003c893c(param_1,1,"providers/implementations/digests/null_prov.c",0x34);
  return;
}


// ===== 00447e8c  FUN_00447e8c =====

undefined1 * FUN_00447e8c(undefined1 *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    puVar2 = (undefined1 *)FUN_003c83a4(1,"providers/implementations/digests/null_prov.c",0x34);
    if (puVar2 != (undefined1 *)0x0) {
      *puVar2 = *param_1;
    }
    return puVar2;
  }
  return (undefined1 *)0x0;
}


// ===== 00447ee0  FUN_00447ee0 =====

void FUN_00447ee0(undefined8 param_1)

{
  FUN_00472c14(param_1,0,0,0);
  return;
}


// ===== 00447ef0  FUN_00447ef0 =====

bool FUN_00447ef0(void)

{
  int iVar1;
  
  iVar1 = FUN_0043eb70();
  return iVar1 != 0;
}


// ===== 00447f0c  FUN_00447f0c =====

undefined8 FUN_00447f0c(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    uVar2 = FUN_003c8474(0x60,"providers/implementations/digests/sha2_prov.c",0x3f);
    return uVar2;
  }
  return 0;
}


// ===== 00447f40  FUN_00447f40 =====

undefined8 FUN_00447f40(undefined8 param_1,undefined8 param_2,undefined8 *param_3,ulong param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_0043eb70();
  uVar2 = 0;
  if (((0x13 < param_4) && (iVar1 != 0)) && (uVar2 = FUN_00408838(param_2,param_1), (int)uVar2 != 0)
     ) {
    uVar2 = 1;
    *param_3 = 0x14;
  }
  return uVar2;
}


// ===== 00447fa4  FUN_00447fa4 =====

void FUN_00447fa4(undefined8 param_1)

{
  FUN_003c893c(param_1,0x60,"providers/implementations/digests/sha2_prov.c",0x3f);
  return;
}


// ===== 00447fb8  FUN_00447fb8 =====

undefined8 * FUN_00447fb8(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  iVar1 = FUN_0043eb70();
  if ((iVar1 != 0) &&
     (puVar2 = (undefined8 *)FUN_003c83a4(0x60,"providers/implementations/digests/sha2_prov.c",0x3f)
     , puVar2 != (undefined8 *)0x0)) {
    uVar3 = param_1[4];
    uVar5 = param_1[7];
    uVar4 = param_1[6];
    puVar2[5] = param_1[5];
    puVar2[4] = uVar3;
    puVar2[7] = uVar5;
    puVar2[6] = uVar4;
    uVar3 = param_1[8];
    uVar5 = param_1[0xb];
    uVar4 = param_1[10];
    puVar2[9] = param_1[9];
    puVar2[8] = uVar3;
    puVar2[0xb] = uVar5;
    puVar2[10] = uVar4;
    uVar5 = *param_1;
    uVar4 = param_1[3];
    uVar3 = param_1[2];
    puVar2[1] = param_1[1];
    *puVar2 = uVar5;
    puVar2[3] = uVar4;
    puVar2[2] = uVar3;
    return puVar2;
  }
  return (undefined8 *)0x0;
}


// ===== 0044801c  FUN_0044801c =====

void FUN_0044801c(undefined8 param_1)

{
  FUN_00472c14(param_1,0x40,0x14,2);
  return;
}


// ===== 0044802c  FUN_0044802c =====

ulong FUN_0044802c(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN_0043eb70();
  if ((int)uVar2 != 0) {
    iVar1 = FUN_00408928(param_1);
    uVar2 = 0;
    if ((param_1 != 0) && (iVar1 != 0)) {
      if ((param_2 == 0) ||
         ((lVar3 = FUN_003cb19c(param_2,"ssl3-ms"), lVar3 == 0 || (*(int *)(lVar3 + 8) != 5)))) {
        return 1;
      }
      iVar1 = FUN_00408964(param_1,0x1d,*(undefined4 *)(lVar3 + 0x18),*(undefined8 *)(lVar3 + 0x10))
      ;
      uVar2 = (ulong)(iVar1 != 0);
    }
  }
  return uVar2;
}


// ===== 004480bc  FUN_004480bc =====

undefined ** FUN_004480bc(void)

{
  return &PTR_s_ssl3_ms_00786968;
}


// ===== 004480c8  FUN_004480c8 =====

long FUN_004480c8(long param_1,long param_2)

{
  long lVar1;
  
  if (param_1 != 0) {
    if (((param_2 != 0) && (lVar1 = FUN_003cb19c(param_2,"ssl3-ms"), lVar1 != 0)) &&
       (*(int *)(lVar1 + 8) == 5)) {
      lVar1 = FUN_00408964(param_1,0x1d,*(undefined4 *)(lVar1 + 0x18),*(undefined8 *)(lVar1 + 0x10))
      ;
      return lVar1;
    }
    param_1 = 1;
  }
  return param_1;
}


// ===== 00448130  FUN_00448130 =====

undefined8 FUN_00448130(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    uVar2 = FUN_003c8474(0x70,"providers/implementations/digests/sha2_prov.c",0x44);
    return uVar2;
  }
  return 0;
}


// ===== 00448164  FUN_00448164 =====

undefined8 FUN_00448164(undefined8 param_1,undefined8 param_2,undefined8 *param_3,ulong param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_0043eb70();
  uVar2 = 0;
  if (((0x1b < param_4) && (iVar1 != 0)) &&
     (uVar2 = thunk_FUN_00408f5c(param_2,param_1), (int)uVar2 != 0)) {
    uVar2 = 1;
    *param_3 = 0x1c;
  }
  return uVar2;
}


// ===== 004481c8  FUN_004481c8 =====

void FUN_004481c8(undefined8 param_1)

{
  FUN_003c893c(param_1,0x70,"providers/implementations/digests/sha2_prov.c",0x44);
  return;
}


// ===== 004481dc  FUN_004481dc =====

undefined8 * FUN_004481dc(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  iVar1 = FUN_0043eb70();
  if ((iVar1 != 0) &&
     (puVar2 = (undefined8 *)FUN_003c83a4(0x70,"providers/implementations/digests/sha2_prov.c",0x44)
     , puVar2 != (undefined8 *)0x0)) {
    uVar4 = param_1[9];
    uVar3 = param_1[8];
    uVar6 = param_1[0xb];
    uVar5 = param_1[10];
    uVar7 = param_1[0xc];
    puVar2[0xd] = param_1[0xd];
    puVar2[0xc] = uVar7;
    puVar2[9] = uVar4;
    puVar2[8] = uVar3;
    puVar2[0xb] = uVar6;
    puVar2[10] = uVar5;
    uVar3 = *param_1;
    uVar5 = param_1[3];
    uVar4 = param_1[2];
    puVar2[1] = param_1[1];
    *puVar2 = uVar3;
    puVar2[3] = uVar5;
    puVar2[2] = uVar4;
    uVar3 = param_1[4];
    uVar5 = param_1[7];
    uVar4 = param_1[6];
    puVar2[5] = param_1[5];
    puVar2[4] = uVar3;
    puVar2[7] = uVar5;
    puVar2[6] = uVar4;
    return puVar2;
  }
  return (undefined8 *)0x0;
}


// ===== 00448248  FUN_00448248 =====

void FUN_00448248(undefined8 param_1)

{
  FUN_00472c14(param_1,0x40,0x1c,2);
  return;
}


// ===== 00448258  FUN_00448258 =====

ulong FUN_00448258(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = FUN_0043eb70();
  if ((int)uVar2 != 0) {
    iVar1 = FUN_00408c94(param_1);
    uVar2 = (ulong)(iVar1 != 0);
  }
  return uVar2;
}


// ===== 0044828c  FUN_0044828c =====

undefined8 FUN_0044828c(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    uVar2 = FUN_003c8474(0x70,"providers/implementations/digests/sha2_prov.c",0x49);
    return uVar2;
  }
  return 0;
}


// ===== 004482c0  FUN_004482c0 =====

undefined8 FUN_004482c0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,ulong param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_0043eb70();
  uVar2 = 0;
  if (((0x1f < param_4) && (iVar1 != 0)) && (uVar2 = FUN_00408f5c(param_2,param_1), (int)uVar2 != 0)
     ) {
    uVar2 = 1;
    *param_3 = 0x20;
  }
  return uVar2;
}


// ===== 00448324  FUN_00448324 =====

void FUN_00448324(undefined8 param_1)

{
  FUN_003c893c(param_1,0x70,"providers/implementations/digests/sha2_prov.c",0x49);
  return;
}


// ===== 00448338  FUN_00448338 =====

undefined8 * FUN_00448338(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  iVar1 = FUN_0043eb70();
  if ((iVar1 != 0) &&
     (puVar2 = (undefined8 *)FUN_003c83a4(0x70,"providers/implementations/digests/sha2_prov.c",0x49)
     , puVar2 != (undefined8 *)0x0)) {
    uVar4 = param_1[9];
    uVar3 = param_1[8];
    uVar6 = param_1[0xb];
    uVar5 = param_1[10];
    uVar7 = param_1[0xc];
    puVar2[0xd] = param_1[0xd];
    puVar2[0xc] = uVar7;
    puVar2[9] = uVar4;
    puVar2[8] = uVar3;
    puVar2[0xb] = uVar6;
    puVar2[10] = uVar5;
    uVar3 = *param_1;
    uVar5 = param_1[3];
    uVar4 = param_1[2];
    puVar2[1] = param_1[1];
    *puVar2 = uVar3;
    puVar2[3] = uVar5;
    puVar2[2] = uVar4;
    uVar3 = param_1[4];
    uVar5 = param_1[7];
    uVar4 = param_1[6];
    puVar2[5] = param_1[5];
    puVar2[4] = uVar3;
    puVar2[7] = uVar5;
    puVar2[6] = uVar4;
    return puVar2;
  }
  return (undefined8 *)0x0;
}


// ===== 004483a4  FUN_004483a4 =====

void FUN_004483a4(undefined8 param_1)

{
  FUN_00472c14(param_1,0x40,0x20,2);
  return;
}


// ===== 004483b4  FUN_004483b4 =====

ulong FUN_004483b4(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = FUN_0043eb70();
  if ((int)uVar2 != 0) {
    iVar1 = FUN_00408cd0(param_1);
    uVar2 = (ulong)(iVar1 != 0);
  }
  return uVar2;
}


// ===== 004483e8  FUN_004483e8 =====

undefined8 FUN_004483e8(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    uVar2 = FUN_003c8474(0x70,"providers/implementations/digests/sha2_prov.c",0x4e);
    return uVar2;
  }
  return 0;
}


// ===== 0044841c  FUN_0044841c =====

undefined8 FUN_0044841c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,ulong param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_0043eb70();
  uVar2 = 0;
  if (((0x17 < param_4) && (iVar1 != 0)) && (uVar2 = FUN_00408f5c(param_2,param_1), (int)uVar2 != 0)
     ) {
    uVar2 = 1;
    *param_3 = 0x18;
  }
  return uVar2;
}


// ===== 00448480  FUN_00448480 =====

void FUN_00448480(undefined8 param_1)

{
  FUN_003c893c(param_1,0x70,"providers/implementations/digests/sha2_prov.c",0x4e);
  return;
}


// ===== 00448494  FUN_00448494 =====

undefined8 * FUN_00448494(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  iVar1 = FUN_0043eb70();
  if ((iVar1 != 0) &&
     (puVar2 = (undefined8 *)FUN_003c83a4(0x70,"providers/implementations/digests/sha2_prov.c",0x4e)
     , puVar2 != (undefined8 *)0x0)) {
    uVar4 = param_1[9];
    uVar3 = param_1[8];
    uVar6 = param_1[0xb];
    uVar5 = param_1[10];
    uVar7 = param_1[0xc];
    puVar2[0xd] = param_1[0xd];
    puVar2[0xc] = uVar7;
    puVar2[9] = uVar4;
    puVar2[8] = uVar3;
    puVar2[0xb] = uVar6;
    puVar2[10] = uVar5;
    uVar3 = *param_1;
    uVar5 = param_1[3];
    uVar4 = param_1[2];
    puVar2[1] = param_1[1];
    *puVar2 = uVar3;
    puVar2[3] = uVar5;
    puVar2[2] = uVar4;
    uVar3 = param_1[4];
    uVar5 = param_1[7];
    uVar4 = param_1[6];
    puVar2[5] = param_1[5];
    puVar2[4] = uVar3;
    puVar2[7] = uVar5;
    puVar2[6] = uVar4;
    return puVar2;
  }
  return (undefined8 *)0x0;
}


// ===== 00448500  FUN_00448500 =====

void FUN_00448500(undefined8 param_1)

{
  FUN_00472c14(param_1,0x40,0x18,2);
  return;
}


// ===== 00448510  FUN_00448510 =====

ulong FUN_00448510(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = FUN_0043eb70();
  if ((int)uVar2 != 0) {
    iVar1 = FUN_00408d0c(param_1);
    uVar2 = (ulong)(iVar1 != 0);
  }
  return uVar2;
}


// ===== 00448544  FUN_00448544 =====

undefined8 FUN_00448544(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    uVar2 = FUN_003c8474(0xd8,"providers/implementations/digests/sha2_prov.c",0x53);
    return uVar2;
  }
  return 0;
}


// ===== 00448578  FUN_00448578 =====

undefined8 FUN_00448578(undefined8 param_1,undefined8 param_2,undefined8 *param_3,ulong param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_0043eb70();
  uVar2 = 0;
  if (((0x2f < param_4) && (iVar1 != 0)) &&
     (uVar2 = thunk_FUN_0040a884(param_2,param_1), (int)uVar2 != 0)) {
    uVar2 = 1;
    *param_3 = 0x30;
  }
  return uVar2;
}


// ===== 004485dc  FUN_004485dc =====

void FUN_004485dc(undefined8 param_1)

{
  FUN_003c893c(param_1,0xd8,"providers/implementations/digests/sha2_prov.c",0x53);
  return;
}


// ===== 004485f0  FUN_004485f0 =====

undefined8 * FUN_004485f0(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  iVar1 = FUN_0043eb70();
  if ((iVar1 != 0) &&
     (puVar2 = (undefined8 *)FUN_003c83a4(0xd8,"providers/implementations/digests/sha2_prov.c",0x53)
     , puVar2 != (undefined8 *)0x0)) {
    uVar5 = param_1[0x15];
    uVar4 = param_1[0x14];
    uVar7 = param_1[0x17];
    uVar6 = param_1[0x16];
    uVar8 = param_1[0x18];
    uVar3 = param_1[0x1a];
    puVar2[0x19] = param_1[0x19];
    puVar2[0x18] = uVar8;
    puVar2[0x15] = uVar5;
    puVar2[0x14] = uVar4;
    puVar2[0x17] = uVar7;
    puVar2[0x16] = uVar6;
    uVar5 = param_1[0xd];
    uVar4 = param_1[0xc];
    uVar7 = param_1[0xf];
    uVar6 = param_1[0xe];
    puVar2[0x1a] = uVar3;
    puVar2[0xd] = uVar5;
    puVar2[0xc] = uVar4;
    puVar2[0xf] = uVar7;
    puVar2[0xe] = uVar6;
    uVar5 = param_1[0x10];
    uVar4 = param_1[0x13];
    uVar3 = param_1[0x12];
    puVar2[0x11] = param_1[0x11];
    puVar2[0x10] = uVar5;
    puVar2[0x13] = uVar4;
    puVar2[0x12] = uVar3;
    uVar5 = param_1[4];
    uVar4 = param_1[7];
    uVar3 = param_1[6];
    puVar2[5] = param_1[5];
    puVar2[4] = uVar5;
    puVar2[7] = uVar4;
    puVar2[6] = uVar3;
    uVar5 = param_1[8];
    uVar4 = param_1[0xb];
    uVar3 = param_1[10];
    puVar2[9] = param_1[9];
    puVar2[8] = uVar5;
    puVar2[0xb] = uVar4;
    puVar2[10] = uVar3;
    uVar5 = *param_1;
    uVar4 = param_1[3];
    uVar3 = param_1[2];
    puVar2[1] = param_1[1];
    *puVar2 = uVar5;
    puVar2[3] = uVar4;
    puVar2[2] = uVar3;
    return puVar2;
  }
  return (undefined8 *)0x0;
}


// ===== 0044867c  FUN_0044867c =====

void FUN_0044867c(undefined8 param_1)

{
  FUN_00472c14(param_1,0x80,0x30,2);
  return;
}


// ===== 0044868c  FUN_0044868c =====

ulong FUN_0044868c(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = FUN_0043eb70();
  if ((int)uVar2 != 0) {
    iVar1 = FUN_0040a7fc(param_1);
    uVar2 = (ulong)(iVar1 != 0);
  }
  return uVar2;
}


// ===== 004486c0  FUN_004486c0 =====

undefined8 FUN_004486c0(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    uVar2 = FUN_003c8474(0xd8,"providers/implementations/digests/sha2_prov.c",0x58);
    return uVar2;
  }
  return 0;
}


// ===== 004486f4  FUN_004486f4 =====

undefined8 FUN_004486f4(undefined8 param_1,undefined8 param_2,undefined8 *param_3,ulong param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_0043eb70();
  uVar2 = 0;
  if (((0x3f < param_4) && (iVar1 != 0)) && (uVar2 = FUN_0040a884(param_2,param_1), (int)uVar2 != 0)
     ) {
    uVar2 = 1;
    *param_3 = 0x40;
  }
  return uVar2;
}


// ===== 00448758  FUN_00448758 =====

void FUN_00448758(undefined8 param_1)

{
  FUN_003c893c(param_1,0xd8,"providers/implementations/digests/sha2_prov.c",0x58);
  return;
}


// ===== 0044876c  FUN_0044876c =====

undefined8 * FUN_0044876c(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  iVar1 = FUN_0043eb70();
  if ((iVar1 != 0) &&
     (puVar2 = (undefined8 *)FUN_003c83a4(0xd8,"providers/implementations/digests/sha2_prov.c",0x58)
     , puVar2 != (undefined8 *)0x0)) {
    uVar5 = param_1[0x15];
    uVar4 = param_1[0x14];
    uVar7 = param_1[0x17];
    uVar6 = param_1[0x16];
    uVar8 = param_1[0x18];
    uVar3 = param_1[0x1a];
    puVar2[0x19] = param_1[0x19];
    puVar2[0x18] = uVar8;
    puVar2[0x15] = uVar5;
    puVar2[0x14] = uVar4;
    puVar2[0x17] = uVar7;
    puVar2[0x16] = uVar6;
    uVar5 = param_1[0xd];
    uVar4 = param_1[0xc];
    uVar7 = param_1[0xf];
    uVar6 = param_1[0xe];
    puVar2[0x1a] = uVar3;
    puVar2[0xd] = uVar5;
    puVar2[0xc] = uVar4;
    puVar2[0xf] = uVar7;
    puVar2[0xe] = uVar6;
    uVar5 = param_1[0x10];
    uVar4 = param_1[0x13];
    uVar3 = param_1[0x12];
    puVar2[0x11] = param_1[0x11];
    puVar2[0x10] = uVar5;
    puVar2[0x13] = uVar4;
    puVar2[0x12] = uVar3;
    uVar5 = param_1[4];
    uVar4 = param_1[7];
    uVar3 = param_1[6];
    puVar2[5] = param_1[5];
    puVar2[4] = uVar5;
    puVar2[7] = uVar4;
    puVar2[6] = uVar3;
    uVar5 = param_1[8];
    uVar4 = param_1[0xb];
    uVar3 = param_1[10];
    puVar2[9] = param_1[9];
    puVar2[8] = uVar5;
    puVar2[0xb] = uVar4;
    puVar2[10] = uVar3;
    uVar5 = *param_1;
    uVar4 = param_1[3];
    uVar3 = param_1[2];
    puVar2[1] = param_1[1];
    *puVar2 = uVar5;
    puVar2[3] = uVar4;
    puVar2[2] = uVar3;
    return puVar2;
  }
  return (undefined8 *)0x0;
}


// ===== 004487f8  FUN_004487f8 =====

void FUN_004487f8(undefined8 param_1)

{
  FUN_00472c14(param_1,0x80,0x40,2);
  return;
}


// ===== 00448808  FUN_00448808 =====

ulong FUN_00448808(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = FUN_0043eb70();
  if ((int)uVar2 != 0) {
    iVar1 = FUN_0040a840(param_1);
    uVar2 = (ulong)(iVar1 != 0);
  }
  return uVar2;
}


// ===== 0044883c  FUN_0044883c =====

undefined8 FUN_0044883c(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    uVar2 = FUN_003c8474(0xd8,"providers/implementations/digests/sha2_prov.c",0x5d);
    return uVar2;
  }
  return 0;
}


// ===== 00448870  FUN_00448870 =====

undefined8 FUN_00448870(undefined8 param_1,undefined8 param_2,undefined8 *param_3,ulong param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_0043eb70();
  uVar2 = 0;
  if (((0x1b < param_4) && (iVar1 != 0)) && (uVar2 = FUN_0040a884(param_2,param_1), (int)uVar2 != 0)
     ) {
    uVar2 = 1;
    *param_3 = 0x1c;
  }
  return uVar2;
}


// ===== 004488d4  FUN_004488d4 =====

void FUN_004488d4(undefined8 param_1)

{
  FUN_003c893c(param_1,0xd8,"providers/implementations/digests/sha2_prov.c",0x5d);
  return;
}


// ===== 004488e8  FUN_004488e8 =====

undefined8 * FUN_004488e8(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  iVar1 = FUN_0043eb70();
  if ((iVar1 != 0) &&
     (puVar2 = (undefined8 *)FUN_003c83a4(0xd8,"providers/implementations/digests/sha2_prov.c",0x5d)
     , puVar2 != (undefined8 *)0x0)) {
    uVar5 = param_1[0x15];
    uVar4 = param_1[0x14];
    uVar7 = param_1[0x17];
    uVar6 = param_1[0x16];
    uVar8 = param_1[0x18];
    uVar3 = param_1[0x1a];
    puVar2[0x19] = param_1[0x19];
    puVar2[0x18] = uVar8;
    puVar2[0x15] = uVar5;
    puVar2[0x14] = uVar4;
    puVar2[0x17] = uVar7;
    puVar2[0x16] = uVar6;
    uVar5 = param_1[0xd];
    uVar4 = param_1[0xc];
    uVar7 = param_1[0xf];
    uVar6 = param_1[0xe];
    puVar2[0x1a] = uVar3;
    puVar2[0xd] = uVar5;
    puVar2[0xc] = uVar4;
    puVar2[0xf] = uVar7;
    puVar2[0xe] = uVar6;
    uVar5 = param_1[0x10];
    uVar4 = param_1[0x13];
    uVar3 = param_1[0x12];
    puVar2[0x11] = param_1[0x11];
    puVar2[0x10] = uVar5;
    puVar2[0x13] = uVar4;
    puVar2[0x12] = uVar3;
    uVar5 = param_1[4];
    uVar4 = param_1[7];
    uVar3 = param_1[6];
    puVar2[5] = param_1[5];
    puVar2[4] = uVar5;
    puVar2[7] = uVar4;
    puVar2[6] = uVar3;
    uVar5 = param_1[8];
    uVar4 = param_1[0xb];
    uVar3 = param_1[10];
    puVar2[9] = param_1[9];
    puVar2[8] = uVar5;
    puVar2[0xb] = uVar4;
    puVar2[10] = uVar3;
    uVar5 = *param_1;
    uVar4 = param_1[3];
    uVar3 = param_1[2];
    puVar2[1] = param_1[1];
    *puVar2 = uVar5;
    puVar2[3] = uVar4;
    puVar2[2] = uVar3;
    return puVar2;
  }
  return (undefined8 *)0x0;
}


// ===== 00448974  FUN_00448974 =====

void FUN_00448974(undefined8 param_1)

{
  FUN_00472c14(param_1,0x80,0x1c,2);
  return;
}


// ===== 00448984  FUN_00448984 =====

ulong FUN_00448984(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = FUN_0043eb70();
  if ((int)uVar2 != 0) {
    iVar1 = FUN_0040a774(param_1);
    uVar2 = (ulong)(iVar1 != 0);
  }
  return uVar2;
}


// ===== 004489b8  FUN_004489b8 =====

undefined8 FUN_004489b8(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    uVar2 = FUN_003c8474(0xd8,"providers/implementations/digests/sha2_prov.c",0x62);
    return uVar2;
  }
  return 0;
}


// ===== 004489ec  FUN_004489ec =====

undefined8 FUN_004489ec(undefined8 param_1,undefined8 param_2,undefined8 *param_3,ulong param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_0043eb70();
  uVar2 = 0;
  if (((0x1f < param_4) && (iVar1 != 0)) && (uVar2 = FUN_0040a884(param_2,param_1), (int)uVar2 != 0)
     ) {
    uVar2 = 1;
    *param_3 = 0x20;
  }
  return uVar2;
}


// ===== 00448a50  FUN_00448a50 =====

void FUN_00448a50(undefined8 param_1)

{
  FUN_003c893c(param_1,0xd8,"providers/implementations/digests/sha2_prov.c",0x62);
  return;
}


// ===== 00448a64  FUN_00448a64 =====

undefined8 * FUN_00448a64(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  iVar1 = FUN_0043eb70();
  if ((iVar1 != 0) &&
     (puVar2 = (undefined8 *)FUN_003c83a4(0xd8,"providers/implementations/digests/sha2_prov.c",0x62)
     , puVar2 != (undefined8 *)0x0)) {
    uVar5 = param_1[0x15];
    uVar4 = param_1[0x14];
    uVar7 = param_1[0x17];
    uVar6 = param_1[0x16];
    uVar8 = param_1[0x18];
    uVar3 = param_1[0x1a];
    puVar2[0x19] = param_1[0x19];
    puVar2[0x18] = uVar8;
    puVar2[0x15] = uVar5;
    puVar2[0x14] = uVar4;
    puVar2[0x17] = uVar7;
    puVar2[0x16] = uVar6;
    uVar5 = param_1[0xd];
    uVar4 = param_1[0xc];
    uVar7 = param_1[0xf];
    uVar6 = param_1[0xe];
    puVar2[0x1a] = uVar3;
    puVar2[0xd] = uVar5;
    puVar2[0xc] = uVar4;
    puVar2[0xf] = uVar7;
    puVar2[0xe] = uVar6;
    uVar5 = param_1[0x10];
    uVar4 = param_1[0x13];
    uVar3 = param_1[0x12];
    puVar2[0x11] = param_1[0x11];
    puVar2[0x10] = uVar5;
    puVar2[0x13] = uVar4;
    puVar2[0x12] = uVar3;
    uVar5 = param_1[4];
    uVar4 = param_1[7];
    uVar3 = param_1[6];
    puVar2[5] = param_1[5];
    puVar2[4] = uVar5;
    puVar2[7] = uVar4;
    puVar2[6] = uVar3;
    uVar5 = param_1[8];
    uVar4 = param_1[0xb];
    uVar3 = param_1[10];
    puVar2[9] = param_1[9];
    puVar2[8] = uVar5;
    puVar2[0xb] = uVar4;
    puVar2[10] = uVar3;
    uVar5 = *param_1;
    uVar4 = param_1[3];
    uVar3 = param_1[2];
    puVar2[1] = param_1[1];
    *puVar2 = uVar5;
    puVar2[3] = uVar4;
    puVar2[2] = uVar3;
    return puVar2;
  }
  return (undefined8 *)0x0;
}


// ===== 00448af0  FUN_00448af0 =====

void FUN_00448af0(undefined8 param_1)

{
  FUN_00472c14(param_1,0x80,0x20,2);
  return;
}


// ===== 00448b00  FUN_00448b00 =====

ulong FUN_00448b00(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = FUN_0043eb70();
  if ((int)uVar2 != 0) {
    iVar1 = FUN_0040a7b8(param_1);
    uVar2 = (ulong)(iVar1 != 0);
  }
  return uVar2;
}


// ===== 00448b34  FUN_00448b34 =====

long FUN_00448b34(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = FUN_0043eb70();
  if (iVar2 != 0) {
    lVar3 = FUN_003c8474(0x1a0,"providers/implementations/digests/sha3_prov.c",0x19c);
    if (lVar3 != 0) {
      FUN_00409f1c(lVar3,6,0xe0);
      puVar1 = PTR_FUN_007870f8;
      *(undefined **)(lVar3 + 0x198) = PTR_thunk_FUN_0040a0ac_00787100;
      *(undefined **)(lVar3 + 400) = puVar1;
    }
    return lVar3;
  }
  return 0;
}


// ===== 00448ba0  FUN_00448ba0 =====

undefined8 FUN_00448ba0(long param_1,void *param_2,ulong param_3)

{
  long lVar1;
  size_t __n;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong __n_00;
  
  if (param_3 == 0) {
    return 1;
  }
  lVar2 = *(long *)(param_1 + 0xd8);
  uVar3 = param_3;
  if (lVar2 != 0) {
    lVar4 = *(long *)(param_1 + 200);
    lVar1 = param_1 + 0xe0;
    __n_00 = lVar4 - lVar2;
    uVar3 = param_3 - __n_00;
    if (param_3 < __n_00) {
      memcpy((void *)(lVar1 + lVar2),param_2,param_3);
      __n = *(long *)(param_1 + 0xd8) + param_3;
      goto LAB_00448c60;
    }
    memcpy((void *)(lVar1 + lVar2),param_2,__n_00);
    param_2 = (void *)((long)param_2 + __n_00);
    (**(code **)(param_1 + 400))(param_1,lVar1,lVar4);
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  __n = (**(code **)(param_1 + 400))(param_1,param_2,uVar3);
  if (__n == 0) {
    return 1;
  }
  memcpy((void *)(param_1 + 0xe0),(void *)((long)param_2 + (uVar3 - __n)),__n);
LAB_00448c60:
  *(size_t *)(param_1 + 0xd8) = __n;
  return 1;
}


// ===== 00448c80  FUN_00448c80 =====

undefined8 FUN_00448c80(long param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0043eb70();
  if ((int)uVar1 != 0) {
    if (param_4 == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = (**(code **)(param_1 + 0x198))(param_2,param_1);
    }
    *param_3 = *(undefined8 *)(param_1 + 0xd0);
  }
  return uVar1;
}


// ===== 00448cdc  FUN_00448cdc =====

void FUN_00448cdc(undefined8 param_1)

{
  FUN_003c893c(param_1,0x1a0,"providers/implementations/digests/sha3_prov.c",0x15a);
  return;
}


// ===== 00448cf0  FUN_00448cf0 =====

void * FUN_00448cf0(void *param_1)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = FUN_0043eb70();
  if ((iVar1 != 0) &&
     (pvVar2 = (void *)FUN_003c83a4(0x1a0,"providers/implementations/digests/sha3_prov.c",0x160),
     pvVar2 != (void *)0x0)) {
    pvVar2 = memcpy(pvVar2,param_1,0x1a0);
    return pvVar2;
  }
  return (void *)0x0;
}


// ===== 00448d44  FUN_00448d44 =====

void FUN_00448d44(undefined8 param_1)

{
  FUN_00472c14(param_1,0x90,0x1c,2);
  return;
}


// ===== 00448d54  FUN_00448d54 =====

undefined8 FUN_00448d54(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0043eb70();
  if ((int)uVar1 != 0) {
    FUN_00409ef4(param_1);
    uVar1 = 1;
  }
  return uVar1;
}


// ===== 00448d84  FUN_00448d84 =====

long FUN_00448d84(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = FUN_0043eb70();
  if (iVar2 != 0) {
    lVar3 = FUN_003c8474(0x1a0,"providers/implementations/digests/sha3_prov.c",0x19e);
    if (lVar3 != 0) {
      FUN_00409f1c(lVar3,6,0x100);
      puVar1 = PTR_FUN_007870f8;
      *(undefined **)(lVar3 + 0x198) = PTR_thunk_FUN_0040a0ac_00787100;
      *(undefined **)(lVar3 + 400) = puVar1;
    }
    return lVar3;
  }
  return 0;
}


// ===== 00448df0  FUN_00448df0 =====

void FUN_00448df0(undefined8 param_1)

{
  FUN_00472c14(param_1,0x88,0x20,2);
  return;
}


// ===== 00448e00  FUN_00448e00 =====

long FUN_00448e00(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = FUN_0043eb70();
  if (iVar2 != 0) {
    lVar3 = FUN_003c8474(0x1a0,"providers/implementations/digests/sha3_prov.c",0x1a0);
    if (lVar3 != 0) {
      FUN_00409f1c(lVar3,6,0x180);
      puVar1 = PTR_FUN_007870f8;
      *(undefined **)(lVar3 + 0x198) = PTR_thunk_FUN_0040a0ac_00787100;
      *(undefined **)(lVar3 + 400) = puVar1;
    }
    return lVar3;
  }
  return 0;
}


// ===== 00448e6c  FUN_00448e6c =====

void FUN_00448e6c(undefined8 param_1)

{
  FUN_00472c14(param_1,0x68,0x30,2);
  return;
}


// ===== 00448e7c  FUN_00448e7c =====

long FUN_00448e7c(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = FUN_0043eb70();
  if (iVar2 != 0) {
    lVar3 = FUN_003c8474(0x1a0,"providers/implementations/digests/sha3_prov.c",0x1a2);
    if (lVar3 != 0) {
      FUN_00409f1c(lVar3,6,0x200);
      puVar1 = PTR_FUN_007870f8;
      *(undefined **)(lVar3 + 0x198) = PTR_thunk_FUN_0040a0ac_00787100;
      *(undefined **)(lVar3 + 400) = puVar1;
    }
    return lVar3;
  }
  return 0;
}


// ===== 00448ee8  FUN_00448ee8 =====

void FUN_00448ee8(undefined8 param_1)

{
  FUN_00472c14(param_1,0x48,0x40,2);
  return;
}


// ===== 00448ef8  FUN_00448ef8 =====

long FUN_00448ef8(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = FUN_0043eb70();
  if (iVar2 != 0) {
    lVar3 = FUN_003c8474(0x1a0,"providers/implementations/digests/sha3_prov.c",0x1a4);
    if (lVar3 != 0) {
      FUN_00409f1c(lVar3,1,0xe0);
      puVar1 = PTR_FUN_007870f8;
      *(undefined **)(lVar3 + 0x198) = PTR_thunk_FUN_0040a0ac_00787100;
      *(undefined **)(lVar3 + 400) = puVar1;
    }
    return lVar3;
  }
  return 0;
}


// ===== 00448f64  FUN_00448f64 =====

void FUN_00448f64(undefined8 param_1)

{
  FUN_00472c14(param_1,0x90,0x1c,2);
  return;
}


// ===== 00448f74  FUN_00448f74 =====

long FUN_00448f74(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = FUN_0043eb70();
  if (iVar2 != 0) {
    lVar3 = FUN_003c8474(0x1a0,"providers/implementations/digests/sha3_prov.c",0x1a6);
    if (lVar3 != 0) {
      FUN_00409f1c(lVar3,1,0x100);
      puVar1 = PTR_FUN_007870f8;
      *(undefined **)(lVar3 + 0x198) = PTR_thunk_FUN_0040a0ac_00787100;
      *(undefined **)(lVar3 + 400) = puVar1;
    }
    return lVar3;
  }
  return 0;
}


// ===== 00448fe0  FUN_00448fe0 =====

void FUN_00448fe0(undefined8 param_1)

{
  FUN_00472c14(param_1,0x88,0x20,2);
  return;
}


// ===== 00448ff0  FUN_00448ff0 =====

long FUN_00448ff0(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = FUN_0043eb70();
  if (iVar2 != 0) {
    lVar3 = FUN_003c8474(0x1a0,"providers/implementations/digests/sha3_prov.c",0x1a8);
    if (lVar3 != 0) {
      FUN_00409f1c(lVar3,1,0x180);
      puVar1 = PTR_FUN_007870f8;
      *(undefined **)(lVar3 + 0x198) = PTR_thunk_FUN_0040a0ac_00787100;
      *(undefined **)(lVar3 + 400) = puVar1;
    }
    return lVar3;
  }
  return 0;
}


// ===== 0044905c  FUN_0044905c =====

void FUN_0044905c(undefined8 param_1)

{
  FUN_00472c14(param_1,0x68,0x30,2);
  return;
}


// ===== 0044906c  FUN_0044906c =====

long FUN_0044906c(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = FUN_0043eb70();
  if (iVar2 != 0) {
    lVar3 = FUN_003c8474(0x1a0,"providers/implementations/digests/sha3_prov.c",0x1aa);
    if (lVar3 != 0) {
      FUN_00409f1c(lVar3,1,0x200);
      puVar1 = PTR_FUN_007870f8;
      *(undefined **)(lVar3 + 0x198) = PTR_thunk_FUN_0040a0ac_00787100;
      *(undefined **)(lVar3 + 400) = puVar1;
    }
    return lVar3;
  }
  return 0;
}


// ===== 004490d8  FUN_004490d8 =====

void FUN_004490d8(undefined8 param_1)

{
  FUN_00472c14(param_1,0x48,0x40,2);
  return;
}


// ===== 004490e8  FUN_004490e8 =====

long FUN_004490e8(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = FUN_0043eb70();
  if (iVar2 != 0) {
    lVar3 = FUN_003c8474(0x1a0,"providers/implementations/digests/sha3_prov.c",0x1ac);
    if (lVar3 != 0) {
      FUN_00409f1c(lVar3,0x1f,0x80);
      puVar1 = PTR_FUN_007870f8;
      *(undefined **)(lVar3 + 0x198) = PTR_thunk_FUN_0040a0ac_00787100;
      *(undefined **)(lVar3 + 400) = puVar1;
    }
    return lVar3;
  }
  return 0;
}


// ===== 00449154  FUN_00449154 =====

void FUN_00449154(undefined8 param_1)

{
  FUN_00472c14(param_1,0xa8,0x10,1);
  return;
}


// ===== 00449164  FUN_00449164 =====

undefined8 FUN_00449164(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_0043eb70();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  FUN_00409ef4(param_1);
  if (param_1 != 0) {
    if ((param_2 == 0) || (lVar3 = FUN_003cb19c(param_2,"xoflen"), lVar3 == 0)) {
      return 1;
    }
    iVar1 = thunk_FUN_003cc060(lVar3,param_1 + 0xd0);
    if (iVar1 != 0) {
      return 1;
    }
    FUN_00379868();
    FUN_0037995c("providers/implementations/digests/sha3_prov.c",0x17e,"shake_set_ctx_params");
    FUN_00379a5c(0x39,0x67,0);
  }
  return 0;
}


// ===== 0044920c  FUN_0044920c =====

long FUN_0044920c(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  if (param_1 != 0) {
    if (param_2 != 0) {
      lVar2 = FUN_003cb19c(param_2,"xoflen");
      if ((lVar2 != 0) && (iVar1 = thunk_FUN_003cc060(lVar2,param_1 + 0xd0), iVar1 == 0)) {
        FUN_00379868();
        FUN_0037995c("providers/implementations/digests/sha3_prov.c",0x17e,"shake_set_ctx_params");
        FUN_00379a5c(0x39,0x67,0);
        return 0;
      }
      return 1;
    }
    param_1 = 1;
  }
  return param_1;
}


// ===== 0044929c  FUN_0044929c =====

undefined ** FUN_0044929c(void)

{
  return &PTR_s_xoflen_00787108;
}


// ===== 004492a8  FUN_004492a8 =====

long FUN_004492a8(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = FUN_0043eb70();
  if (iVar2 != 0) {
    lVar3 = FUN_003c8474(0x1a0,"providers/implementations/digests/sha3_prov.c",0x1ae);
    if (lVar3 != 0) {
      FUN_00409f1c(lVar3,0x1f,0x100);
      puVar1 = PTR_FUN_007870f8;
      *(undefined **)(lVar3 + 0x198) = PTR_thunk_FUN_0040a0ac_00787100;
      *(undefined **)(lVar3 + 400) = puVar1;
    }
    return lVar3;
  }
  return 0;
}


// ===== 00449314  FUN_00449314 =====

void FUN_00449314(undefined8 param_1)

{
  FUN_00472c14(param_1,0x88,0x20,1);
  return;
}


// ===== 00449324  FUN_00449324 =====

long FUN_00449324(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = FUN_0043eb70();
  if (iVar2 != 0) {
    lVar3 = FUN_003c8474(0x1a0,"providers/implementations/digests/sha3_prov.c",0x1b0);
    if (lVar3 != 0) {
      FUN_00409f70(lVar3,4,0x80);
      puVar1 = PTR_FUN_007870f8;
      *(undefined **)(lVar3 + 0x198) = PTR_thunk_FUN_0040a0ac_00787100;
      *(undefined **)(lVar3 + 400) = puVar1;
    }
    return lVar3;
  }
  return 0;
}


// ===== 00449390  FUN_00449390 =====

void FUN_00449390(undefined8 param_1)

{
  FUN_00472c14(param_1,0xa8,0x20,1);
  return;
}


// ===== 004493a0  FUN_004493a0 =====

long FUN_004493a0(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = FUN_0043eb70();
  if (iVar2 != 0) {
    lVar3 = FUN_003c8474(0x1a0,"providers/implementations/digests/sha3_prov.c",0x1b2);
    if (lVar3 != 0) {
      FUN_00409f70(lVar3,4,0x100);
      puVar1 = PTR_FUN_007870f8;
      *(undefined **)(lVar3 + 0x198) = PTR_thunk_FUN_0040a0ac_00787100;
      *(undefined **)(lVar3 + 400) = puVar1;
    }
    return lVar3;
  }
  return 0;
}


// ===== 0044940c  FUN_0044940c =====

void FUN_0044940c(undefined8 param_1)

{
  FUN_00472c14(param_1,0x88,0x40,1);
  return;
}


// ===== 0044941c  FUN_0044941c =====

void FUN_0044941c(void)

{
  FUN_0040a144();
  return;
}


// ===== 00449424  thunk_FUN_0040a0ac =====

undefined8 thunk_FUN_0040a0ac(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(param_2 + 0xd0) != 0) {
    lVar3 = *(long *)(param_2 + 0xd8);
    lVar2 = *(long *)(param_2 + 200);
    lVar1 = param_2 + 0xe0;
    memset((void *)(lVar1 + lVar3),0,lVar2 - lVar3);
    *(undefined1 *)(lVar1 + lVar3) = *(undefined1 *)(param_2 + 0x188);
    *(byte *)(lVar2 + lVar1 + -1) = *(byte *)(lVar2 + lVar1 + -1) | 0x80;
    FUN_0040a144(param_2,lVar1,lVar2,lVar2);
    FUN_0040a414(param_2,param_1,*(undefined8 *)(param_2 + 0xd0),lVar2);
  }
  return 1;
}


// ===== 00449428  FUN_00449428 =====

void FUN_00449428(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           FUN_003c8474(0x118,"providers/implementations/encode_decode/decode_der2key.c",0x82);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = &PTR_DAT_00787458;
  }
  return;
}


// ===== 0044946c  FUN_0044946c =====

void FUN_0044946c(undefined8 param_1)

{
  FUN_003c86b4(param_1,"providers/implementations/encode_decode/decode_der2key.c",0xa5);
  return;
}


// ===== 0044947c  FUN_0044947c =====

uint FUN_0044947c(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((param_2 & 0x87) != 0) {
    uVar1 = param_2 & 1;
  }
  if (param_2 == 0) {
    uVar1 = 1;
  }
  return uVar1;
}


// ===== 00449498  FUN_00449498 =====

undefined4
FUN_00449498(undefined8 *param_1,undefined8 param_2,uint param_3,code *param_4,undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  code *pcVar5;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined4 local_104;
  undefined1 auStack_100 [40];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  *(uint *)(param_1 + 0x22) = param_3;
  local_48 = 0;
  local_60 = 0;
  local_58 = 0;
  uVar1 = *(uint *)(param_1[0x21] + 0x1c);
  if (param_3 != 0) {
    uVar1 = param_3;
  }
  if ((*(uint *)(param_1[0x21] + 0x1c) & uVar1) == 0) {
    FUN_00379868();
    FUN_0037995c("providers/implementations/encode_decode/decode_der2key.c",0xe1,"der2key_decode");
    FUN_00379a5c(0x39,0x80106,0);
    return 0;
  }
  iVar2 = FUN_004517b8(*param_1,param_2,&local_48,&local_58);
  if (iVar2 == 0) goto LAB_00449698;
  FUN_0037f6d4();
  if ((uVar1 & 1) == 0) {
LAB_004494fc:
    if ((uVar1 >> 1 & 1) != 0) {
      pcVar5 = *(code **)(param_1[0x21] + 0x40);
      local_50 = local_48;
      if (((pcVar5 != (code *)0x0) ||
          (pcVar5 = *(code **)(param_1[0x21] + 0x28), pcVar5 != (code *)0x0)) &&
         (local_60 = (*pcVar5)(0,&local_50,local_58), local_60 != 0)) goto LAB_00449620;
      iVar2 = *(int *)(param_1 + 0x22);
      if (iVar2 != 0) goto LAB_00449694;
    }
    iVar2 = 0x84;
    if ((uVar1 & 0x84) != 0) {
      local_50 = local_48;
      if ((*(code **)(param_1[0x21] + 0x30) != (code *)0x0) &&
         (local_60 = (**(code **)(param_1[0x21] + 0x30))(0,&local_50,local_58), local_60 != 0))
      goto LAB_00449620;
      iVar2 = *(int *)(param_1 + 0x22);
    }
LAB_00449694:
    FUN_0037f8c4(iVar2);
LAB_00449698:
    FUN_003c86b4(local_48,"providers/implementations/encode_decode/decode_der2key.c",0x132);
  }
  else {
    pcVar5 = *(code **)(param_1[0x21] + 0x38);
    local_50 = local_48;
    if (pcVar5 == (code *)0x0) {
      pcVar5 = *(code **)(param_1[0x21] + 0x20);
      if (pcVar5 != (code *)0x0) {
        lVar4 = (*pcVar5)(0,&local_50,local_58);
        goto LAB_0044961c;
      }
LAB_0044968c:
      iVar2 = *(int *)(param_1 + 0x22);
      if (iVar2 == 0) goto LAB_004494fc;
      goto LAB_00449694;
    }
    lVar4 = (*pcVar5)(0,&local_50,local_58,param_1);
    if ((*(byte *)((long)param_1 + 0x114) & 1) != 0) {
      local_60 = lVar4;
      FUN_0037f8c4();
      uVar3 = 0;
      goto LAB_004496b8;
    }
LAB_0044961c:
    local_60 = lVar4;
    if (lVar4 == 0) goto LAB_0044968c;
LAB_00449620:
    lVar4 = local_60;
    FUN_0037f71c();
    if (*(code **)(param_1[0x21] + 0x48) != (code *)0x0) {
      iVar2 = (**(code **)(param_1[0x21] + 0x48))(lVar4,param_1);
      if (iVar2 == 0) {
        (**(code **)(param_1[0x21] + 0x58))();
        local_60 = 0;
      }
      else if (local_60 != 0) {
        pcVar5 = *(code **)(param_1[0x21] + 0x50);
        lVar4 = local_60;
        goto joined_r0x00449700;
      }
      goto LAB_00449698;
    }
    pcVar5 = *(code **)(param_1[0x21] + 0x50);
joined_r0x00449700:
    if (pcVar5 == (code *)0x0) {
      FUN_003c86b4(local_48,"providers/implementations/encode_decode/decode_der2key.c",0x132);
LAB_0044971c:
      local_48 = 0;
      local_104 = 2;
      FUN_003cb668(auStack_100,&DAT_001eccc2,&local_104);
      FUN_003cd8cc(&local_130,"data-type",*(undefined8 *)param_1[0x21],0);
      local_b8 = local_110;
      uStack_d0 = uStack_128;
      local_d8 = local_130;
      uStack_c0 = uStack_118;
      local_c8 = uStack_120;
      FUN_003cd924(&local_130,"reference",&local_60,8);
      local_90 = local_110;
      uStack_a8 = uStack_128;
      local_b0 = local_130;
      uStack_98 = uStack_118;
      uStack_a0 = uStack_120;
      FUN_003cdfcc(&local_130);
      uStack_80 = uStack_128;
      local_88 = local_130;
      uStack_70 = uStack_118;
      local_78 = uStack_120;
      local_68 = local_110;
      uVar3 = (*param_4)(auStack_100,param_5);
      lVar4 = local_60;
      goto LAB_004496b8;
    }
    (*pcVar5)(lVar4,param_1);
    lVar4 = local_60;
    FUN_003c86b4(local_48,"providers/implementations/encode_decode/decode_der2key.c",0x132);
    if (lVar4 != 0) goto LAB_0044971c;
  }
  local_48 = 0;
  uVar3 = 1;
  lVar4 = 0;
LAB_004496b8:
  (**(code **)(param_1[0x21] + 0x58))(lVar4);
  FUN_003c86b4(local_48,"providers/implementations/encode_decode/decode_der2key.c",0x14a);
  return uVar3;
}


// ===== 004497e0  FUN_004497e0 =====

undefined8
FUN_004497e0(long param_1,undefined8 *param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_00451634(*(undefined8 *)(*(long *)(param_1 + 0x108) + 8));
  if ((param_3 == 8) && (UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    iVar1 = 0x87;
    if (*(int *)(param_1 + 0x110) != 0) {
      iVar1 = *(int *)(param_1 + 0x110);
    }
                    /* WARNING: Could not recover jumptable at 0x00449850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)(*param_2,iVar1,param_4,param_5);
    return uVar2;
  }
  return 0;
}


// ===== 0044986c  FUN_0044986c =====

undefined ** FUN_0044986c(void)

{
  return &PTR_s_properties_007874b8;
}


// ===== 00449878  FUN_00449878 =====

undefined8 FUN_00449878(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long local_18;
  
  local_18 = param_1 + 8;
  lVar1 = FUN_003cb19c(param_2,"properties");
  if ((lVar1 == 0) || (uVar2 = FUN_003cd3d4(lVar1,&local_18,0x100), (int)uVar2 != 0)) {
    uVar2 = 1;
  }
  return uVar2;
}


// ===== 004498c4  FUN_004498c4 =====

void FUN_004498c4(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           FUN_003c8474(0x118,"providers/implementations/encode_decode/decode_der2key.c",0x82);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = &PTR_DAT_00787508;
  }
  return;
}


// ===== 00449908  FUN_00449908 =====

uint FUN_00449908(undefined8 param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if ((param_2 & 1) == 0) {
    uVar1 = param_2 >> 1 & 1;
  }
  uVar2 = 1;
  if (param_2 != 0) {
    uVar2 = uVar1;
  }
  return uVar2;
}


// ===== 00449924  FUN_00449924 =====

void FUN_00449924(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           FUN_003c8474(0x118,"providers/implementations/encode_decode/decode_der2key.c",0x82);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = &PTR_DAT_00787568;
  }
  return;
}


// ===== 00449968  FUN_00449968 =====

bool FUN_00449968(undefined8 param_1,uint param_2)

{
  return (param_2 & 3) != 0 || param_2 == 0;
}


// ===== 00449978  FUN_00449978 =====

void FUN_00449978(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           FUN_003c8474(0x118,"providers/implementations/encode_decode/decode_der2key.c",0x82);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = &PTR_DAT_007875c8;
  }
  return;
}


// ===== 004499bc  FUN_004499bc =====

bool FUN_004499bc(undefined8 param_1,uint param_2)

{
  return (param_2 & 3) != 0 || param_2 == 0;
}


// ===== 004499cc  FUN_004499cc =====

void FUN_004499cc(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           FUN_003c8474(0x118,"providers/implementations/encode_decode/decode_der2key.c",0x82);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = &PTR_s_RSA_PSS_00787628;
  }
  return;
}


// ===== 00449a10  FUN_00449a10 =====

uint FUN_00449a10(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((param_2 & 0x87) != 0) {
    uVar1 = param_2 & 1;
  }
  if (param_2 == 0) {
    uVar1 = 1;
  }
  return uVar1;
}


// ===== 00449a2c  FUN_00449a2c =====

void FUN_00449a2c(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           FUN_003c8474(0x118,"providers/implementations/encode_decode/decode_der2key.c",0x82);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = &PTR_s_RSA_PSS_00787688;
  }
  return;
}


// ===== 00449a70  FUN_00449a70 =====

uint FUN_00449a70(undefined8 param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if ((param_2 & 1) == 0) {
    uVar1 = param_2 >> 1 & 1;
  }
  uVar2 = 1;
  if (param_2 != 0) {
    uVar2 = uVar1;
  }
  return uVar2;
}


// ===== 00449a8c  FUN_00449a8c =====

undefined8 FUN_00449a8c(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *in_x3;
  undefined8 *local_28;
  
  local_28 = (undefined8 *)0x0;
  lVar2 = FUN_003dfe94(0);
  if ((lVar2 != 0) && (iVar1 = FUN_003dff4c(0,0,0,&local_28,lVar2), iVar1 != 0)) {
    iVar1 = FUN_003dd5b4(*local_28);
    if (iVar1 == *(int *)(in_x3[0x21] + 0x18)) {
      uVar3 = FUN_0046b880(*in_x3);
      uVar3 = FUN_003f4300(lVar2,uVar3,in_x3 + 1);
      goto LAB_00449b10;
    }
  }
  uVar3 = 0;
LAB_00449b10:
  FUN_003dfeb8(lVar2);
  return uVar3;
}


// ===== 00449b2c  FUN_00449b2c =====

bool FUN_00449b2c(undefined8 param_1,long param_2)

{
  int iVar1;
  
  iVar1 = FUN_003fb538(param_1,0xf000);
  if (iVar1 == 0) {
    iVar1 = 6;
  }
  else {
    if (iVar1 != 0x1000) {
      return false;
    }
    iVar1 = 0x390;
  }
  return *(int *)(*(long *)(param_2 + 0x108) + 0x18) == iVar1;
}


