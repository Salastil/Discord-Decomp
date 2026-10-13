// ===== 00385188  FUN_00385188 =====

undefined8 FUN_00385188(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


// ===== 00385190  FUN_00385190 =====

undefined8 FUN_00385190(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x18);
}


// ===== 0038519c  FUN_0038519c =====

ulong FUN_0038519c(ulong *param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_1;
  if (uVar2 != 0) {
    FUN_003d40a4();
    uVar3 = FUN_003c3bb8();
    iVar1 = FUN_003c3b2c(uVar3,param_2);
    uVar2 = (ulong)(iVar1 == (int)param_1[1]);
  }
  return uVar2;
}


// ===== 003851e0  FUN_003851e0 =====

bool FUN_003851e0(undefined8 *param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *param_3;
  if (iVar1 < 1) {
    FUN_003d40a4(*param_1);
    uVar2 = FUN_003c3bb8();
    iVar1 = FUN_003c3b2c(uVar2,param_2);
    *param_3 = iVar1;
    if (iVar1 < 1) {
      return false;
    }
  }
  else if (param_1 == (undefined8 *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/encode_decode/decoder_meth.c",0x1e8,"ossl_decoder_get_number");
    FUN_00379a5c(0x3c,0xc0102,0);
    return iVar1 == 0;
  }
  return *(int *)(param_1 + 1) == iVar1;
}


// ===== 003852a8  FUN_003852a8 =====

void FUN_003852a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60 [4];
  long local_40;
  
  local_40 = 0;
  local_60[0] = param_1;
  FUN_00384d94(local_60,0,0);
  local_70 = param_2;
  uStack_68 = param_3;
  if (local_40 != 0) {
    FUN_003e9304(local_40,FUN_00385338,&local_70);
  }
  uVar1 = FUN_003b9c48(param_1,0xb);
  FUN_003e9304(uVar1,FUN_00385338,&local_70);
  if (local_40 != 0) {
    FUN_003e8bb4();
  }
  return;
}


// ===== 00385338  FUN_00385338 =====

void FUN_00385338(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00385340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_3)(param_2,param_3[1]);
  return;
}


// ===== 00385344  FUN_00385344 =====

long * FUN_00385344(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  
  if (param_1 != (long *)0x0) {
    if (*param_1 != 0) {
      FUN_003d40a4();
      uVar1 = FUN_003c3bb8();
      plVar2 = (long *)FUN_003c3a08(uVar1,(int)param_1[1],param_2,param_3);
      return plVar2;
    }
    param_1 = (long *)0x1;
  }
  return param_1;
}


// ===== 003853a4  FUN_003853a4 =====

undefined8 FUN_003853a4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if ((param_1 != (undefined8 *)0x0) && (param_1[9] != 0)) {
    FUN_003d3bf8(*param_1);
                    /* WARNING: Could not recover jumptable at 0x003853d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)param_1[9])();
    return uVar1;
  }
  return 0;
}


// ===== 003853e4  FUN_003853e4 =====

undefined8 FUN_003853e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (*(code **)(param_1 + 0x40) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x003853f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x40))(param_2);
    return uVar1;
  }
  return 0;
}


// ===== 00385400  FUN_00385400 =====

undefined8 FUN_00385400(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if ((param_1 != (undefined8 *)0x0) && (param_1[0xb] != 0)) {
    FUN_003d3bf8(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00385434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)param_1[0xb])();
    return uVar1;
  }
  return 0;
}


// ===== 00385440  FUN_00385440 =====

void FUN_00385440(void)

{
  FUN_003c8474(0x68,"crypto/encode_decode/decoder_meth.c",0x272);
  return;
}


// ===== 00385454  FUN_00385454 =====

undefined4 FUN_00385454(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulong uVar8;
  
  if (param_1 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/encode_decode/decoder_meth.c",0x27e,"OSSL_DECODER_CTX_set_params");
    FUN_00379a5c(0x3c,0xc0102,0);
    uVar6 = 0;
  }
  else if ((*(long *)(param_1 + 0x18) == 0) || (iVar1 = FUN_00385bb8(param_1), iVar1 == 0)) {
    uVar6 = 1;
  }
  else {
    uVar8 = 0;
    uVar7 = 1;
    do {
      uVar3 = FUN_0040cb0c(*(undefined8 *)(param_1 + 0x18),uVar8 & 0xffffffff);
      lVar4 = FUN_00386c9c();
      lVar5 = FUN_00386ca8(uVar3);
      uVar6 = uVar7;
      if ((lVar5 != 0) && (*(code **)(lVar4 + 0x50) != (code *)0x0)) {
        iVar2 = (**(code **)(lVar4 + 0x50))(lVar5,param_2);
        uVar6 = 0;
        if (iVar2 != 0) {
          uVar6 = uVar7;
        }
      }
      uVar8 = uVar8 + 1;
      uVar7 = uVar6;
    } while ((long)iVar1 != uVar8);
  }
  return uVar6;
}


// ===== 00385540  FUN_00385540 =====

void FUN_00385540(long param_1)

{
  if (param_1 != 0) {
    if (*(code **)(param_1 + 0x28) != (code *)0x0) {
      (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x30));
    }
    FUN_0040ca6c(*(undefined8 *)(param_1 + 0x18),PTR_FUN_007a1a60);
    FUN_003d05c4(param_1 + 0x38);
    FUN_003c86b4(param_1,"crypto/encode_decode/decoder_meth.c",0x29e);
    return;
  }
  return;
}


// ===== 0038559c  FUN_0038559c =====

void FUN_0038559c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (param_1[4] != 0) {
    return;
  }
  uVar1 = FUN_003e8af8(*param_1);
  param_1[4] = uVar1;
  return;
}


// ===== 003855d4  FUN_003855d4 =====

void FUN_003855d4(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  if (param_1 == 0) {
    lVar1 = FUN_003b9c48(*param_2,0xb);
    if (lVar1 == 0) {
      return;
    }
  }
  FUN_003e8ca8();
  return;
}


// ===== 003855fc  FUN_003855fc =====

void FUN_003855fc(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  if (param_1 == 0) {
    lVar1 = FUN_003b9c48(*param_2,0xb);
    if (lVar1 == 0) {
      return;
    }
  }
  FUN_003e8cb8();
  return;
}


// ===== 00385624  FUN_00385624 =====

long FUN_00385624(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  size_t sVar4;
  char *__s;
  long local_28;
  
  iVar1 = *(int *)(param_3 + 1);
  local_28 = 0;
  if (iVar1 != 0) {
LAB_0038564c:
    if ((param_1 != 0) || (param_1 = FUN_003b9c48(*param_3,0xb), param_1 != 0)) {
      iVar1 = FUN_003e93a4(param_1,iVar1,param_3[3],param_2,&local_28);
      param_1 = 0;
      if (iVar1 != 0) {
        param_1 = local_28;
      }
    }
    return param_1;
  }
  if (param_3[2] != 0) {
    lVar2 = FUN_003c3bb8(*param_3);
    __s = (char *)param_3[2];
    pcVar3 = strchr(__s,0x3a);
    if (pcVar3 == (char *)0x0) {
      sVar4 = strlen(__s);
    }
    else {
      sVar4 = (long)pcVar3 - (long)__s;
    }
    if (lVar2 == 0) {
      return 0;
    }
    iVar1 = FUN_003c3ce0(lVar2,__s,sVar4);
    if (iVar1 != 0) goto LAB_0038564c;
  }
  return 0;
}


// ===== 00385720  FUN_00385720 =====

undefined8
FUN_00385720(long param_1,undefined8 param_2,undefined8 param_3,char *param_4,undefined8 param_5,
            undefined8 *param_6)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  undefined8 uVar4;
  size_t sVar5;
  
  if (param_4 == (char *)0x0) {
    sVar5 = 0;
    lVar3 = FUN_003c3bb8(*param_6);
  }
  else {
    pcVar2 = strchr(param_4,0x3a);
    if (pcVar2 == (char *)0x0) {
      sVar5 = strlen(param_4);
      lVar3 = FUN_003c3bb8(*param_6);
    }
    else {
      sVar5 = (long)pcVar2 - (long)param_4;
      lVar3 = FUN_003c3bb8(*param_6);
    }
  }
  if (((lVar3 != 0) && (iVar1 = FUN_003c3ce0(lVar3,param_4,sVar5), iVar1 != 0)) &&
     ((param_1 != 0 || (param_1 = FUN_003b9c48(*param_6,0xb), param_1 != 0)))) {
    uVar4 = FUN_003e8cc8(param_1,param_3,iVar1,param_5,param_2,PTR_FUN_007a1a70,PTR_FUN_007a1a78);
    return uVar4;
  }
  return 0;
}


// ===== 00385828  FUN_00385828 =====

long FUN_00385828(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  FUN_003d40a4(param_2);
  uVar1 = FUN_003c3bb8();
  uVar1 = FUN_003c3fc4(uVar1,0,*param_1,0x3a);
  if (((int)uVar1 != 0) && (lVar2 = FUN_00384a28(uVar1,param_1,param_2), lVar2 != 0)) {
    return lVar2;
  }
  *(byte *)(param_3 + 0x28) = *(byte *)(param_3 + 0x28) | 1;
  return 0;
}


// ===== 003858a4  FUN_003858a4 =====

void FUN_003858a4(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (undefined8 *)0x0) &&
     (iVar1 = *(int *)(param_1 + 5), iVar2 = iVar1 + -1, *(int *)(param_1 + 5) = iVar2,
     iVar2 == 0 || iVar1 < 1)) {
    FUN_003c86b4(param_1[2],"crypto/encode_decode/decoder_meth.c",0x3c);
    FUN_003eb16c(param_1[4]);
    FUN_003d27b0(*param_1);
    FUN_003c86b4(param_1,"crypto/encode_decode/decoder_meth.c",0x40);
    return;
  }
  return;
}


// ===== 00385910  FUN_00385910 =====

undefined8 FUN_00385910(long param_1)

{
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  return 1;
}


// ===== 00385928  FUN_00385928 =====

void FUN_00385928(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (undefined8 *)0x0) &&
     (iVar1 = *(int *)(param_1 + 5), iVar2 = iVar1 + -1, *(int *)(param_1 + 5) = iVar2,
     iVar2 == 0 || iVar1 < 1)) {
    FUN_003c86b4(param_1[2],"crypto/encode_decode/decoder_meth.c",0x3c);
    FUN_003eb16c(param_1[4]);
    FUN_003d27b0(*param_1);
    FUN_003c86b4(param_1,"crypto/encode_decode/decoder_meth.c",0x40);
    return;
  }
  return;
}


// ===== 00385994  FUN_00385994 =====

undefined4 FUN_00385994(long *param_1,long param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  char *pcVar13;
  long lVar14;
  long *local_88;
  long lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  if (param_2 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/encode_decode/decoder_lib.c",0x37,"OSSL_DECODER_from_bio");
    pcVar13 = (char *)0x0;
    uVar12 = 0xc0102;
  }
  else {
    if (((param_1 != (long *)0x0) && (param_1[3] != 0)) && (iVar8 = FUN_0040caf8(), iVar8 != 0)) {
      lVar10 = FUN_0037a744();
      iVar8 = FUN_0037e4bc(param_2,0x85,0,0);
      if (iVar8 < 0) {
        FUN_00386ccc();
        lVar14 = FUN_0037db44();
        if (lVar14 == 0) {
          return 0;
        }
        param_2 = FUN_0037eda0(lVar14,param_2);
      }
      else {
        lVar14 = 0;
      }
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      local_88 = param_1;
      lStack_80 = param_2;
      FUN_003d09cc(param_1 + 7);
      uVar9 = FUN_00385bd0(0,&local_88);
      if (((byte)local_68 >> 1 & 1) == 0) {
        pcVar13 = "";
        bVar6 = (char *)*param_1 != (char *)0x0;
        pcVar1 = pcVar13;
        pcVar4 = pcVar13;
        if (bVar6) {
          pcVar1 = "Input type: ";
          pcVar4 = (char *)*param_1;
        }
        bVar7 = (char *)param_1[1] != (char *)0x0;
        pcVar2 = pcVar13;
        pcVar5 = pcVar13;
        if (bVar7) {
          pcVar2 = (char *)param_1[1];
          pcVar5 = "Input structure: ";
        }
        pcVar3 = pcVar13;
        if (bVar7 && bVar6) {
          pcVar3 = " ";
        }
        if (bVar7 && bVar6) {
          pcVar13 = ", ";
        }
        lVar11 = FUN_0037a744();
        if ((lVar11 == lVar10) || (lVar10 = FUN_0037a6b8(), lVar10 == 0)) {
          FUN_00379868();
          FUN_0037995c("crypto/encode_decode/decoder_lib.c",0x66,"OSSL_DECODER_from_bio");
          FUN_00379a5c(0x3c,0x8010c,"No supported data to decode. %s%s%s%s%s%s",pcVar3,pcVar1,pcVar4
                       ,pcVar13,pcVar5,pcVar2);
        }
        uVar9 = 0;
        FUN_003d0624(param_1 + 7);
      }
      else {
        FUN_003d0624(param_1 + 7);
      }
      if (lVar14 != 0) {
        FUN_0037edf4(lVar14);
        FUN_0037db50(lVar14);
      }
      return uVar9;
    }
    FUN_00379868();
    FUN_0037995c("crypto/encode_decode/decoder_lib.c",0x3c,"OSSL_DECODER_from_bio");
    pcVar13 = 
    "No decoders were found. For standard decoders you need at least one of the default or base providers available. Did you forget to load them?"
    ;
    uVar12 = 0x66;
  }
  FUN_00379a5c(0x3c,uVar12,pcVar13);
  return 0;
}


// ===== 00385bb8  FUN_00385bb8 =====

undefined8 FUN_00385bb8(long param_1)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x18) != 0)) {
    uVar1 = FUN_0040caf8();
    return uVar1;
  }
  return 0;
}


// ===== 00385bd0  FUN_00385bd0 =====

int FUN_00385bd0(long param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  code *pcVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long local_98;
  long local_90;
  long *local_88;
  long local_80;
  ulong uStack_78;
  long local_70;
  ulong local_68;
  
  plVar11 = (long *)*param_2;
  local_98 = 0;
  local_90 = 0;
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 1;
  uStack_78 = 0;
  local_80 = 0;
  local_68 = 0;
  local_70 = param_2[3] + 1;
  local_88 = plVar11;
  if (param_1 == 0) {
    if ((plVar11 == (long *)0x0) || (plVar11[3] == 0)) {
      lVar5 = 0;
    }
    else {
      iVar1 = FUN_0040caf8();
      lVar5 = (long)iVar1;
    }
    lVar6 = param_2[1];
    lVar10 = 0;
    param_2[2] = lVar5;
LAB_00385d64:
    if (param_2[2] != 0) {
      iVar2 = FUN_0037e4bc(lVar6,0x85,0,0);
      if (iVar2 < 0) {
        FUN_00379868();
        uVar8 = 0x354;
      }
      else {
        lVar5 = FUN_0038838c(lVar6);
        if (lVar5 != 0) {
          uVar12 = param_2[2];
          if (uVar12 != 0) {
            iVar1 = 0;
            do {
              uVar12 = uVar12 - 1;
              plVar4 = (long *)FUN_0040cb0c(plVar11[3],uVar12 & 0xffffffff);
              if (plVar4 == (long *)0x0) {
                lVar7 = 0;
                lVar13 = 0;
                lVar15 = 0;
                lVar14 = 0;
                if (lVar10 == 0) goto LAB_00385dfc;
LAB_00385dd4:
                iVar3 = FUN_003851e0(lVar10,lVar7,plVar4 + 4);
                if (iVar3 != 0) {
LAB_00385e0c:
                  if (((local_90 == 0) || (iVar3 = FUN_0038519c(lVar13), iVar3 != 0)) &&
                     ((local_98 == 0 ||
                      ((lVar14 != 0 && (iVar3 = FUN_003cab04(local_98,lVar14), iVar3 == 0)))))) {
                    if (((*(byte *)(param_2 + 4) >> 2 & 1) == 0) &&
                       ((plVar11[1] != 0 && (lVar14 != 0)))) {
                      *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 4;
                      iVar3 = FUN_003cab04(lVar14,plVar11[1]);
                      if (iVar3 != 0) goto LAB_00385db0;
                    }
                    FUN_0037e4bc(lVar6,0x80,(long)iVar2,0);
                    iVar3 = FUN_0037e4bc(lVar6,0x85,0,0);
                    if (iVar2 != iVar3) break;
                    FUN_0037f6d4();
                    local_68 = CONCAT71(local_68._1_7_,
                                        (byte)local_68 & 0xfb | *(byte *)(param_2 + 4) & 4);
                    uStack_78 = uVar12;
                    iVar1 = (**(code **)(lVar13 + 0x68))
                                      (lVar15,lVar5,(int)local_88[2],FUN_00385bd0,&local_88,
                                       PTR_FUN_007a1b10,local_88 + 7);
                    *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) & 0xfd | (byte)local_68 & 2;
                    if ((iVar1 == 0) || ((local_68 & 2) != 0)) {
                      FUN_0037f8c4();
                      break;
                    }
                    FUN_0037f71c();
                    if ((local_68 & 1) != 0) break;
                  }
                }
              }
              else {
                lVar13 = *plVar4;
                lVar15 = plVar4[1];
                lVar7 = plVar4[2];
                lVar14 = plVar4[3];
                if (lVar10 != 0) goto LAB_00385dd4;
LAB_00385dfc:
                if ((*plVar11 == 0) || (iVar3 = FUN_003cab04(*plVar11,lVar7), iVar3 == 0))
                goto LAB_00385e0c;
              }
LAB_00385db0:
            } while (uVar12 != 0);
            goto LAB_00385f78;
          }
          goto LAB_00385f1c;
        }
        FUN_00379868();
        uVar8 = 0x359;
      }
      FUN_0037995c("crypto/encode_decode/decoder_lib.c",uVar8,"decoder_process");
      FUN_00379a5c(0x3c,0x80020,0);
    }
    goto LAB_00385f70;
  }
  plVar4 = (long *)FUN_0040cb0c(plVar11[3],*(undefined4 *)(param_2 + 2));
  if (plVar4 == (long *)0x0) {
    lVar10 = 0;
    *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) & 0xfd;
    pcVar9 = (code *)plVar11[4];
  }
  else {
    lVar10 = *plVar4;
    *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) & 0xfd;
    pcVar9 = (code *)plVar11[4];
  }
  if ((pcVar9 != (code *)0x0) && (iVar1 = (*pcVar9)(plVar4,param_1,plVar11[6]), 0 < iVar1)) {
    lVar5 = 0;
    iVar1 = 1;
    *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 2;
    goto LAB_00385f78;
  }
  lVar5 = FUN_003cb19c(param_1,&DAT_001eef54);
  if (lVar5 == 0) {
LAB_00385f1c:
    iVar1 = 0;
  }
  else {
    if (*(int *)(lVar5 + 8) == 5) {
      lVar5 = FUN_00387578(*(undefined8 *)(lVar5 + 0x10),*(undefined4 *)(lVar5 + 0x18));
      local_80 = lVar5;
      if (lVar5 == 0) goto LAB_00385f1c;
      lVar6 = FUN_003cb19c(param_1,"data-type");
      if (((lVar6 == 0) || (iVar1 = FUN_003cdfdc(lVar6,&local_90), iVar1 != 0)) &&
         ((lVar6 = FUN_003cb19c(param_1,"data-structure"), lVar6 == 0 ||
          (iVar1 = FUN_003cdfdc(lVar6,&local_98), iVar1 != 0)))) {
        lVar6 = lVar5;
        if (((local_90 != 0) && (local_98 != 0)) &&
           (iVar1 = FUN_003cab04(local_98,"type-specific"), iVar1 == 0)) {
          local_98 = 0;
        }
        goto LAB_00385d64;
      }
    }
LAB_00385f70:
    iVar1 = 0;
    lVar5 = 0;
  }
LAB_00385f78:
  FUN_0038832c(lVar5);
  FUN_0037db50(local_80);
  return iVar1;
}


// ===== 00385fb4  FUN_00385fb4 =====

bool FUN_00385fb4(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (((param_2 != (long *)0x0) && (param_3 != (undefined8 *)0x0)) && (*param_2 != 0)) {
    uVar2 = FUN_00387578(*param_2,*(undefined4 *)param_3);
    iVar1 = FUN_00385994(param_1,uVar2);
    if (iVar1 != 0) {
      uVar3 = FUN_0037e4bc(uVar2,3,0,param_2);
      *param_3 = uVar3;
    }
    FUN_0037db50(uVar2);
    return iVar1 != 0;
  }
  FUN_00379868();
  FUN_0037995c("crypto/encode_decode/decoder_lib.c",0x98,"OSSL_DECODER_from_data");
  FUN_00379a5c(0x3c,0xc0102,0);
  return false;
}


// ===== 00386084  FUN_00386084 =====

undefined8 FUN_00386084(long param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x10) = param_2;
    return 1;
  }
  FUN_00379868();
  FUN_0037995c("crypto/encode_decode/decoder_lib.c",0xa9,"OSSL_DECODER_CTX_set_selection");
  FUN_00379a5c(0x3c,0xc0102,0);
  return 0;
}


// ===== 003860d8  FUN_003860d8 =====

undefined8 FUN_003860d8(undefined8 *param_1,undefined8 param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = param_2;
    return 1;
  }
  FUN_00379868();
  FUN_0037995c("crypto/encode_decode/decoder_lib.c",0xb9,"OSSL_DECODER_CTX_set_input_type");
  FUN_00379a5c(0x3c,0xc0102,0);
  return 0;
}


// ===== 0038612c  FUN_0038612c =====

undefined8 FUN_0038612c(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 8) = param_2;
    return 1;
  }
  FUN_00379868();
  FUN_0037995c("crypto/encode_decode/decoder_lib.c",0xc9,"OSSL_DECODER_CTX_set_input_structure");
  FUN_00379a5c(0x3c,0xc0102,0);
  return 0;
}


// ===== 00386180  FUN_00386180 =====

long * FUN_00386180(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  if (param_1 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/encode_decode/decoder_lib.c",0xdf,"ossl_decoder_instance_new");
    FUN_00379a5c(0x3c,0xc0102,0);
  }
  else {
    plVar2 = (long *)FUN_003c8474(0x28,"crypto/encode_decode/decoder_lib.c",0xe3);
    if (plVar2 == (long *)0x0) {
      return (long *)0x0;
    }
    FUN_00385044(param_1);
    uVar3 = FUN_003d40a4();
    lVar4 = FUN_003850e8(param_1);
    if (lVar4 == 0) {
      FUN_00379868();
      FUN_0037995c("crypto/encode_decode/decoder_lib.c",0xea,"ossl_decoder_instance_new");
      uVar3 = FUN_00385188(param_1);
      FUN_00379a5c(0x3c,0x8010e,"there are no property definitions with decoder %s",uVar3);
      lVar4 = *plVar2;
    }
    else {
      uVar5 = FUN_003eba88(lVar4,uVar3,"input");
      lVar6 = FUN_003ebb10(uVar3,uVar5);
      *(undefined4 *)(plVar2 + 4) = 0;
      plVar2[2] = lVar6;
      if (lVar6 == 0) {
        FUN_00379868();
        FUN_0037995c("crypto/encode_decode/decoder_lib.c",0xf5,"ossl_decoder_instance_new");
        uVar3 = FUN_00385188(param_1);
        uVar5 = FUN_00385094(param_1);
        FUN_00379a5c(0x3c,0x8010e,
                     "the mandatory \'input\' property is missing for decoder %s (properties: %s)",
                     uVar3,uVar5);
        lVar4 = *plVar2;
      }
      else {
        lVar4 = FUN_003eba88(lVar4,uVar3,"structure");
        if (lVar4 != 0) {
          lVar4 = FUN_003ebb10(uVar3,lVar4);
          plVar2[3] = lVar4;
        }
        iVar1 = FUN_003849a4(param_1);
        if (iVar1 != 0) {
          *plVar2 = param_1;
          plVar2[1] = param_2;
          return plVar2;
        }
        FUN_00379868();
        FUN_0037995c("crypto/encode_decode/decoder_lib.c",0x105,"ossl_decoder_instance_new");
        FUN_00379a5c(0x3c,0xc0103,0);
        lVar4 = *plVar2;
      }
    }
    if (lVar4 != 0) {
      (**(code **)(lVar4 + 0x38))(plVar2[1]);
    }
    plVar2[1] = 0;
    FUN_003849bc(lVar4);
    *plVar2 = 0;
    FUN_003c86b4(plVar2,"crypto/encode_decode/decoder_lib.c",0x118);
  }
  return (long *)0x0;
}


// ===== 003863b8  FUN_003863b8 =====

void FUN_003863b8(long *param_1)

{
  long lVar1;
  
  if (param_1 != (long *)0x0) {
    if (*param_1 == 0) {
      lVar1 = 0;
    }
    else {
      (**(code **)(*param_1 + 0x38))(param_1[1]);
      lVar1 = *param_1;
    }
    param_1[1] = 0;
    FUN_003849bc(lVar1);
    *param_1 = 0;
    FUN_003c86b4(param_1,"crypto/encode_decode/decoder_lib.c",0x118);
    return;
  }
  return;
}


// ===== 00386418  FUN_00386418 =====

long * FUN_00386418(long *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  plVar2 = (long *)FUN_003c8474(0x28,"crypto/encode_decode/decoder_lib.c",0x122);
  if (plVar2 == (long *)0x0) {
    return (long *)0x0;
  }
  lVar3 = param_1[1];
  lVar4 = *param_1;
  lVar6 = param_1[3];
  lVar5 = param_1[2];
  plVar2[4] = param_1[4];
  plVar2[1] = lVar3;
  *plVar2 = lVar4;
  plVar2[3] = lVar6;
  plVar2[2] = lVar5;
  lVar4 = *plVar2;
  iVar1 = FUN_003849a4(lVar4);
  if (iVar1 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/encode_decode/decoder_lib.c",0x127,"ossl_decoder_instance_dup");
    FUN_00379a5c(0x3c,0xc0103,0);
  }
  else {
    FUN_00385044(lVar4);
    thunk_FUN_003d408c();
    lVar3 = (**(code **)(lVar4 + 0x30))();
    plVar2[1] = lVar3;
    if (lVar3 != 0) {
      return plVar2;
    }
    FUN_00379868(0);
    FUN_0037995c("crypto/encode_decode/decoder_lib.c",0x12f,"ossl_decoder_instance_dup");
    FUN_00379a5c(0x3c,0xc0103,0);
    FUN_003849bc(lVar4);
  }
  FUN_003c86b4(plVar2,"crypto/encode_decode/decoder_lib.c",0x137);
  return (long *)0x0;
}


// ===== 00386524  FUN_00386524 =====

bool FUN_00386524(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    lVar2 = FUN_0040bf0c();
    *(long *)(param_1 + 0x18) = lVar2;
    if (lVar2 == 0) {
      FUN_00379868(0,param_2);
      FUN_0037995c("crypto/encode_decode/decoder_lib.c",0x143,"ossl_decoder_ctx_add_decoder_inst");
      FUN_00379a5c(0x3c,0x8000f,0);
      return false;
    }
  }
  iVar1 = FUN_0040c89c();
  return 0 < iVar1;
}


// ===== 003865a8  FUN_003865a8 =====

long FUN_003865a8(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    FUN_00379868();
    FUN_0037995c("crypto/encode_decode/decoder_lib.c",0x15d,"OSSL_DECODER_CTX_add_decoder");
    FUN_00379a5c(0x3c,0xc0102,0);
    return 0;
  }
  FUN_00385044(param_2);
  thunk_FUN_003d408c();
  lVar2 = (**(code **)(param_2 + 0x30))();
  if (lVar2 != 0) {
    plVar3 = (long *)FUN_00386180(param_2,lVar2);
    if (plVar3 == (long *)0x0) {
      (**(code **)(param_2 + 0x38))(lVar2);
      return 0;
    }
    lVar2 = *(long *)(param_1 + 0x18);
    if (lVar2 == 0) {
      lVar2 = FUN_0040bf0c();
      *(long *)(param_1 + 0x18) = lVar2;
      if (lVar2 == 0) {
        FUN_00379868();
        FUN_0037995c("crypto/encode_decode/decoder_lib.c",0x143,"ossl_decoder_ctx_add_decoder_inst")
        ;
        FUN_00379a5c(0x3c,0x8000f,0);
        goto LAB_003866c4;
      }
    }
    iVar1 = FUN_0040c89c(lVar2,plVar3);
    if (iVar1 < 1) {
LAB_003866c4:
      if (*plVar3 == 0) {
        lVar2 = 0;
      }
      else {
        (**(code **)(*plVar3 + 0x38))(plVar3[1]);
        lVar2 = *plVar3;
      }
      plVar3[1] = 0;
      FUN_003849bc(lVar2);
      *plVar3 = 0;
      FUN_003c86b4(plVar3,"crypto/encode_decode/decoder_lib.c",0x118);
      return 0;
    }
    lVar2 = 1;
  }
  return lVar2;
}


// ===== 00386718  FUN_00386718 =====

undefined8 FUN_00386718(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined4 local_88;
  uint uStack_84;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  
  if (param_1 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/encode_decode/decoder_lib.c",0x209,"OSSL_DECODER_CTX_add_extra");
    uVar1 = 0xc0102;
LAB_00386a78:
    FUN_00379a5c(0x3c,uVar1,0);
    uVar10 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x18) != 0) {
      lVar5 = FUN_0040bf0c();
      if (lVar5 == 0) {
        FUN_00379868();
        FUN_0037995c("crypto/encode_decode/decoder_lib.c",0x21c,"OSSL_DECODER_CTX_add_extra");
        uVar1 = 0x8000f;
        goto LAB_00386a78;
      }
      FUN_003852a8(param_2,FUN_00386ac8,lVar5);
      iVar3 = FUN_0040caf8(lVar5);
      local_88 = 0;
      uStack_84 = 0;
      local_80 = 0;
      iVar4 = FUN_0040caf8(*(undefined8 *)(param_1 + 0x18));
      local_78 = (ulong)iVar4;
      local_70 = 0;
      uVar11 = 0;
      while (bVar2 = local_70 < local_78, uStack_84 = 0, uVar13 = local_78, local_70 = local_78,
            local_68 = local_78, bVar2) {
        do {
          if (local_80 < uVar13) {
            uVar12 = local_80;
            if (iVar3 == 0) {
              do {
                while (lVar9 = FUN_0040cb0c(*(undefined8 *)(param_1 + 0x18),uVar12 & 0xffffffff),
                      uVar13 = local_78, lVar9 == 0) {
                  uVar12 = uVar12 + 1;
                  local_88 = 0;
                  if (local_78 <= uVar12) goto LAB_003867bc;
                }
                uVar12 = uVar12 + 1;
                local_88 = 0;
              } while (uVar12 < local_78);
            }
            else {
              do {
                lVar9 = FUN_0040cb0c(*(undefined8 *)(param_1 + 0x18),uVar12 & 0xffffffff);
                if (lVar9 == 0) {
                  uVar10 = 0;
                }
                else {
                  uVar10 = *(undefined8 *)(lVar9 + 0x10);
                }
                uVar13 = 0;
                local_88 = 0;
                do {
                  lVar9 = FUN_0040cb0c(lVar5,uVar13 & 0xffffffff);
                  FUN_00385044();
                  uVar6 = thunk_FUN_003d408c();
                  iVar4 = FUN_003851e0(lVar9,uVar10,&local_88);
                  if (iVar4 != 0) {
                    uVar14 = local_80;
                    if (local_80 < local_68) {
                      do {
                        plVar7 = (long *)FUN_0040cb0c(*(undefined8 *)(param_1 + 0x18),
                                                      uVar14 & 0xffffffff);
                        if (*(long *)(lVar9 + 0x18) == *(long *)(*plVar7 + 0x18)) goto LAB_0038682c;
                        uVar14 = uVar14 + 1;
                      } while (uVar14 < local_68);
                    }
                    lVar8 = (**(code **)(lVar9 + 0x30))(uVar6);
                    if (lVar8 != 0) {
                      plVar7 = (long *)FUN_00386180(lVar9,lVar8);
                      if (plVar7 == (long *)0x0) {
                        (**(code **)(lVar9 + 0x38))(lVar8);
                      }
                      else {
                        if (uStack_84 == 0) {
                          iVar4 = FUN_003851e0(lVar9,plVar7[2],plVar7 + 4);
                          if (iVar4 != 0) goto LAB_00386910;
                        }
                        else if ((uStack_84 != 1) ||
                                (iVar4 = FUN_003851e0(lVar9,plVar7[2],plVar7 + 4), iVar4 == 0)) {
LAB_00386910:
                          lVar9 = *(long *)(param_1 + 0x18);
                          if (lVar9 == 0) {
                            lVar9 = FUN_0040bf0c();
                            *(long *)(param_1 + 0x18) = lVar9;
                            if (lVar9 == 0) {
                              FUN_00379868();
                              FUN_0037995c("crypto/encode_decode/decoder_lib.c",0x143,
                                           "ossl_decoder_ctx_add_decoder_inst");
                              FUN_00379a5c(0x3c,0x8000f,0);
                              goto LAB_00386974;
                            }
                          }
                          iVar4 = FUN_0040c89c(lVar9,plVar7);
                          if (0 < iVar4) {
                            local_68 = local_68 + 1;
                            goto LAB_0038682c;
                          }
                        }
LAB_00386974:
                        if (*plVar7 == 0) {
                          lVar9 = 0;
                        }
                        else {
                          (**(code **)(*plVar7 + 0x38))(plVar7[1]);
                          lVar9 = *plVar7;
                        }
                        plVar7[1] = 0;
                        FUN_003849bc(lVar9);
                        *plVar7 = 0;
                        FUN_003c86b4(plVar7,"crypto/encode_decode/decoder_lib.c",0x118);
                      }
                    }
                  }
LAB_0038682c:
                  uVar13 = uVar13 + 1;
                } while (uVar13 != (long)iVar3);
                uVar12 = uVar12 + 1;
                uVar13 = local_78;
              } while (uVar12 < local_78);
            }
          }
LAB_003867bc:
          uStack_84 = uStack_84 + 1;
        } while (uStack_84 < 2);
        local_80 = local_70;
        local_78 = local_68;
        if ((local_68 == local_70) || (bVar2 = 9 < uVar11, uVar11 = uVar11 + 1, bVar2))
        goto LAB_00386a94;
      }
      uStack_84 = 2;
LAB_00386a94:
      local_80 = local_70;
      local_78 = local_68;
      FUN_0040ca6c(lVar5,PTR_FUN_007a1a78);
    }
    uVar10 = 1;
  }
  return uVar10;
}


// ===== 00386ac8  FUN_00386ac8 =====

void FUN_00386ac8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_003849a4();
  if ((iVar1 != 0) && (iVar1 = FUN_0040c89c(param_2,param_1), iVar1 == 0)) {
    FUN_003849bc(param_1);
    return;
  }
  return;
}


// ===== 00386b10  FUN_00386b10 =====

long FUN_00386b10(long param_1)

{
  if (param_1 != 0) {
    param_1 = *(long *)(param_1 + 0x10);
  }
  return param_1;
}


// ===== 00386b1c  FUN_00386b1c =====

undefined8 FUN_00386b1c(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x20) = param_2;
    return 1;
  }
  FUN_00379868();
  FUN_0037995c("crypto/encode_decode/decoder_lib.c",0x25c,"OSSL_DECODER_CTX_set_construct");
  FUN_00379a5c(0x3c,0xc0102,0);
  return 0;
}


// ===== 00386b70  FUN_00386b70 =====

undefined8 FUN_00386b70(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x30) = param_2;
    return 1;
  }
  FUN_00379868();
  FUN_0037995c("crypto/encode_decode/decoder_lib.c",0x267,"OSSL_DECODER_CTX_set_construct_data");
  FUN_00379a5c(0x3c,0xc0102,0);
  return 0;
}


// ===== 00386bc4  FUN_00386bc4 =====

undefined8 FUN_00386bc4(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x28) = param_2;
    return 1;
  }
  FUN_00379868();
  FUN_0037995c("crypto/encode_decode/decoder_lib.c",0x272,"OSSL_DECODER_CTX_set_cleanup");
  FUN_00379a5c(0x3c,0xc0102,0);
  return 0;
}


// ===== 00386c18  FUN_00386c18 =====

long FUN_00386c18(long param_1)

{
  if (param_1 != 0) {
    param_1 = *(long *)(param_1 + 0x20);
  }
  return param_1;
}


// ===== 00386c24  FUN_00386c24 =====

long FUN_00386c24(long param_1)

{
  if (param_1 != 0) {
    param_1 = *(long *)(param_1 + 0x30);
  }
  return param_1;
}


// ===== 00386c30  FUN_00386c30 =====

long FUN_00386c30(long param_1)

{
  if (param_1 != 0) {
    param_1 = *(long *)(param_1 + 0x28);
  }
  return param_1;
}


// ===== 00386c3c  FUN_00386c3c =====

undefined8 FUN_00386c3c(long *param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  
  if ((((param_1 != (long *)0x0) && (param_2 != 0)) && (param_4 != 0)) && (param_5 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00386c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x70))(param_1[1]);
    return uVar1;
  }
  FUN_00379868();
  FUN_0037995c("crypto/encode_decode/decoder_lib.c",0x29b,"OSSL_DECODER_export");
  FUN_00379a5c(0x3c,0xc0102,0);
  return 0;
}


// ===== 00386c9c  FUN_00386c9c =====

long * FUN_00386c9c(long *param_1)

{
  if (param_1 != (long *)0x0) {
    param_1 = (long *)*param_1;
  }
  return param_1;
}


// ===== 00386ca8  FUN_00386ca8 =====

long FUN_00386ca8(long param_1)

{
  if (param_1 != 0) {
    param_1 = *(long *)(param_1 + 8);
  }
  return param_1;
}


// ===== 00386cb4  FUN_00386cb4 =====

long FUN_00386cb4(long param_1,uint *param_2)

{
  byte *pbVar1;
  
  if (param_1 != 0) {
    pbVar1 = (byte *)(param_1 + 0x24);
    param_1 = *(long *)(param_1 + 0x18);
    *param_2 = *pbVar1 & 1;
  }
  return param_1;
}


// ===== 00386ccc  FUN_00386ccc =====

undefined * FUN_00386ccc(void)

{
  return &DAT_00764ec0;
}


// ===== 00386cd8  FUN_00386cd8 =====

undefined8 FUN_00386cd8(void)

{
  return 0;
}


// ===== 00386ce0  FUN_00386ce0 =====

uint FUN_00386ce0(long param_1,void *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  
  uVar5 = 0;
  if ((param_2 != (void *)0x0) && (param_3 != 0)) {
    puVar6 = *(uint **)(param_1 + 0x38);
    if ((puVar6 == (uint *)0x0) || (*(long *)(param_1 + 0x40) == 0)) {
LAB_00386e08:
      uVar5 = 0;
    }
    else {
      FUN_0037dd18(param_1,0xf);
      uVar2 = puVar6[4];
      uVar4 = puVar6[5];
      uVar5 = 0;
      while( true ) {
        if (uVar2 != 0) {
          uVar1 = uVar2;
          if ((int)param_3 <= (int)uVar2) {
            uVar1 = param_3;
          }
          memcpy(param_2,(void *)(*(long *)(puVar6 + 2) + (long)(int)uVar4),(long)(int)uVar1);
          uVar5 = uVar1 + uVar5;
          uVar4 = puVar6[5] + uVar1;
          puVar6[4] = puVar6[4] - uVar1;
          puVar6[5] = uVar4;
          if ((int)param_3 <= (int)uVar2) {
            return uVar5;
          }
          param_3 = param_3 - uVar1;
          param_2 = (void *)((long)param_2 + (long)(int)uVar1);
        }
        lVar3 = *(long *)(puVar6 + 2);
        uVar2 = param_3 + uVar4 + 0xfff;
        uVar1 = param_3 + uVar4 + 0x1ffe;
        if (-1 < (int)uVar2) {
          uVar1 = uVar2;
        }
        uVar1 = uVar1 & 0xfffff000;
        if ((int)*puVar6 < (int)uVar1) {
          lVar3 = FUN_003c8558(lVar3,(long)(int)uVar1,"crypto/bio/bf_readbuff.c",0x61);
          if (lVar3 == 0) goto LAB_00386e08;
          uVar4 = puVar6[5];
          *(long *)(puVar6 + 2) = lVar3;
          *puVar6 = uVar1;
        }
        uVar2 = FUN_0037dd7c(*(undefined8 *)(param_1 + 0x40),lVar3 + (int)uVar4,param_3);
        if ((int)uVar2 < 1) break;
        puVar6[4] = uVar2;
        uVar4 = puVar6[5];
      }
      FUN_0037f294(param_1);
      if (((int)uVar2 < 0) && ((int)uVar5 < 1)) {
        uVar5 = uVar2;
      }
    }
  }
  return uVar5;
}


// ===== 00386e4c  FUN_00386e4c =====

undefined8 FUN_00386e4c(void)

{
  return 0;
}


// ===== 00386e54  FUN_00386e54 =====

/* WARNING: Removing unreachable block (ram,0x00386efc) */
/* WARNING: Removing unreachable block (ram,0x00386f28) */

ulong FUN_00386e54(long param_1,undefined1 *param_2,ulong param_3)

{
  char *pcVar1;
  uint uVar2;
  long lVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  uint *puVar10;
  uint uVar11;
  
  uVar8 = param_3 & 0xffffffff;
  iVar6 = (int)param_3;
  if (iVar6 == 0) goto LAB_00387030;
  puVar10 = *(uint **)(param_1 + 0x38);
  uVar11 = iVar6 - 1;
  FUN_0037dd18(param_1,0xf);
  if ((int)puVar10[4] < 1) {
    uVar5 = puVar10[5];
    uVar8 = 0;
LAB_00386f54:
    uVar2 = uVar11 + uVar5 + 0x1000;
    uVar5 = uVar11 + uVar5 + 0x1fff;
    if (-1 < (int)uVar2) {
      uVar5 = uVar2;
    }
    uVar5 = uVar5 & 0xfffff000;
    if ((int)*puVar10 < (int)uVar5) {
      lVar7 = FUN_003c8558(*(undefined8 *)(puVar10 + 2),(long)(int)uVar5,"crypto/bio/bf_readbuff.c",
                           0x61);
      if (lVar7 == 0) {
        uVar8 = 0;
        goto LAB_00387030;
      }
      *(long *)(puVar10 + 2) = lVar7;
      *puVar10 = uVar5;
    }
    if (0 < (int)uVar11) {
      lVar7 = 0;
      lVar3 = *(long *)(puVar10 + 2) + (long)(int)puVar10[5];
      do {
        uVar5 = FUN_0037dd7c(*(undefined8 *)(param_1 + 0x40),lVar3 + lVar7,1);
        if ((int)uVar5 < 1) {
          FUN_0037f294(param_1);
          uVar11 = (int)uVar8 + (int)lVar7;
          param_2[lVar7] = 0;
          if ((int)uVar11 < 1) {
            uVar11 = uVar5;
          }
          uVar8 = (ulong)uVar11;
          goto LAB_00387030;
        }
        param_2[lVar7] = *(undefined1 *)(lVar3 + lVar7);
        puVar10[5] = puVar10[5] + 1;
        pcVar1 = (char *)(lVar3 + lVar7);
        lVar7 = lVar7 + 1;
      } while ((*pcVar1 != '\n') && ((int)lVar7 < (int)uVar11));
      uVar8 = (ulong)(uint)((int)uVar8 + (int)lVar7);
      param_2 = param_2 + lVar7;
    }
  }
  else {
    if (iVar6 < 2) {
      uVar8 = 0;
      uVar5 = puVar10[5];
      puVar10[4] = puVar10[4];
      puVar10[5] = uVar5;
    }
    else {
      lVar7 = *(long *)(puVar10 + 2);
      uVar5 = puVar10[5];
      uVar8 = 0;
      do {
        uVar9 = uVar8;
        cVar4 = *(char *)(lVar7 + (int)uVar5 + uVar9);
        param_2[uVar9] = cVar4;
        if (cVar4 == '\n') {
          uVar8 = uVar9 + 1;
          param_2 = param_2 + uVar8;
          puVar10[4] = puVar10[4] - (int)uVar8;
          puVar10[5] = puVar10[5] + (int)uVar8;
          goto LAB_00387004;
        }
        uVar8 = uVar9 + 1;
      } while (((long)uVar8 < (long)(int)puVar10[4]) && (uVar8 < uVar11));
      param_2 = param_2 + uVar9 + 1;
      uVar5 = puVar10[5] + (int)uVar8;
      puVar10[4] = puVar10[4] - (int)uVar8;
      puVar10[5] = uVar5;
    }
    uVar11 = uVar11 - (int)uVar8;
    if (uVar11 != 0) goto LAB_00386f54;
  }
LAB_00387004:
  *param_2 = 0;
LAB_00387030:
  return uVar8 & 0xffffffff;
}


// ===== 0038704c  FUN_0038704c =====

long FUN_0038704c(long param_1,int param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x38);
  if (param_2 < 0xb) {
    if (2 < param_2) {
      if (param_2 != 3) {
        if (param_2 != 10) {
          return 0;
        }
        if (*(int *)(lVar2 + 0x10) != 0) {
          return (long)*(int *)(lVar2 + 0x10);
        }
        if (*(long *)(param_1 + 0x40) == 0) {
          return 0;
        }
        lVar2 = FUN_0037e4bc(*(long *)(param_1 + 0x40),10);
        return lVar2;
      }
LAB_003870e0:
      return (long)*(int *)(lVar2 + 0x14);
    }
    if (param_2 != 1) {
      if ((param_2 == 2) && (*(int *)(lVar2 + 0x10) < 1)) {
        if (*(long *)(param_1 + 0x40) == 0) {
          return 1;
        }
        lVar2 = FUN_0037e4bc(*(long *)(param_1 + 0x40),2);
        return lVar2;
      }
      return 0;
    }
  }
  else {
    if (param_2 - 0xbU < 2) {
      return 1;
    }
    if (param_2 != 0x80) {
      if (param_2 != 0x85) {
        return 0;
      }
      goto LAB_003870e0;
    }
  }
  if ((-1 < param_3) &&
     (lVar1 = (long)*(int *)(lVar2 + 0x10) + (long)*(int *)(lVar2 + 0x18), param_3 <= lVar1)) {
    *(int *)(lVar2 + 0x10) = (int)lVar1 - (int)param_3;
    *(int *)(lVar2 + 0x14) = (int)param_3;
    return 1;
  }
  return 0;
}


// ===== 0038711c  FUN_0038711c =====

undefined4 * FUN_0038711c(long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_003c8474(0x28,"crypto/bio/bf_readbuff.c",0x37);
  puVar3 = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0x1000;
    lVar2 = FUN_003c8474(0x1000,"crypto/bio/bf_readbuff.c",0x3c);
    *(long *)(puVar1 + 2) = lVar2;
    if (lVar2 == 0) {
      FUN_003c86b4(puVar1,"crypto/bio/bf_readbuff.c",0x3e);
      return (undefined4 *)0x0;
    }
    puVar3 = (undefined4 *)0x1;
    *(undefined4 **)(param_1 + 0x38) = puVar1;
    *(undefined4 *)(param_1 + 0x20) = 1;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return puVar3;
}


// ===== 003871ac  FUN_003871ac =====

long FUN_003871ac(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  if (param_1 != 0) {
    FUN_003c86b4(*(undefined8 *)(*(long *)(param_1 + 0x38) + 8),"crypto/bio/bf_readbuff.c",0x4f);
    FUN_003c86b4(*(undefined8 *)(param_1 + 0x38),"crypto/bio/bf_readbuff.c",0x50);
    lVar1 = 1;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return lVar1;
}


// ===== 0038720c  FUN_0038720c =====

void FUN_0038720c(long param_1)

{
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_0037ec5c();
    return;
  }
  return;
}


// ===== 0038721c  FUN_0038721c =====

int FUN_0038721c(void)

{
  int iVar1;
  
  iVar1 = FUN_003d51c8(&DAT_007ab7e0,FUN_003872ac);
  if ((iVar1 != 0) && ((DAT_007ab7dc & 1) != 0)) {
    iVar1 = *(int *)PTR_DAT_007a1a20;
    *(int *)PTR_DAT_007a1a20 = iVar1 + 1;
    return iVar1 + 1;
  }
  FUN_00379868();
  FUN_0037995c("crypto/bio/bio_meth.c",0x1b,"BIO_get_new_index");
  FUN_00379a5c(0x20,0x8000f,0);
  return -1;
}


// ===== 003872ac  FUN_003872ac =====

void FUN_003872ac(void)

{
  DAT_007ab7dc = 1;
  *(undefined4 *)PTR_DAT_007a1a20 = 0x80;
  return;
}


// ===== 003872cc  FUN_003872cc =====

undefined4 * FUN_003872cc(undefined4 param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  long lVar2;
  
  puVar1 = (undefined4 *)FUN_003c8474(0x70,"crypto/bio/bio_meth.c",0x25);
  if (puVar1 != (undefined4 *)0x0) {
    lVar2 = FUN_003ca2f4(param_2,"crypto/bio/bio_meth.c",0x28);
    *(long *)(puVar1 + 2) = lVar2;
    if (lVar2 != 0) {
      *puVar1 = param_1;
      return puVar1;
    }
  }
  FUN_003c86b4(puVar1,"crypto/bio/bio_meth.c",0x29);
  return (undefined4 *)0x0;
}


// ===== 0038735c  FUN_0038735c =====

void FUN_0038735c(long param_1)

{
  if (param_1 != 0) {
    FUN_003c86b4(*(undefined8 *)(param_1 + 8),"crypto/bio/bio_meth.c",0x33);
    FUN_003c86b4(param_1,"crypto/bio/bio_meth.c",0x34);
    return;
  }
  return;
}


// ===== 003873a8  FUN_003873a8 =====

undefined8 FUN_003873a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


// ===== 003873b0  FUN_003873b0 =====

undefined8 FUN_003873b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


// ===== 003873b8  FUN_003873b8 =====

uint FUN_003873b8(long param_1,undefined8 param_2,ulong param_3,ulong *param_4)

{
  uint uVar1;
  uint uVar2;
  
  if (0x7ffffffe < param_3) {
    param_3 = 0x7fffffff;
  }
  uVar2 = (**(code **)(*(long *)(param_1 + 8) + 0x18))(param_1,param_2,param_3);
  uVar1 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
  if (0 < (int)uVar2) {
    uVar2 = 1;
  }
  *param_4 = (ulong)uVar1;
  return uVar2;
}


// ===== 003873fc  FUN_003873fc =====

undefined8 FUN_003873fc(long param_1,undefined8 param_2)

{
  *(undefined **)(param_1 + 0x10) = PTR_FUN_007a1a28;
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return 1;
}


// ===== 00387414  FUN_00387414 =====

undefined8 FUN_00387414(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return 1;
}


// ===== 00387424  FUN_00387424 =====

undefined8 FUN_00387424(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}


// ===== 0038742c  FUN_0038742c =====

undefined8 FUN_0038742c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


// ===== 00387434  FUN_00387434 =====

uint FUN_00387434(long param_1,undefined8 param_2,ulong param_3,ulong *param_4)

{
  uint uVar1;
  uint uVar2;
  
  if (0x7ffffffe < param_3) {
    param_3 = 0x7fffffff;
  }
  uVar2 = (**(code **)(*(long *)(param_1 + 8) + 0x28))(param_1,param_2,param_3);
  uVar1 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
  if (0 < (int)uVar2) {
    uVar2 = 1;
  }
  *param_4 = (ulong)uVar1;
  return uVar2;
}


// ===== 00387478  FUN_00387478 =====

undefined8 FUN_00387478(long param_1,undefined8 param_2)

{
  *(undefined **)(param_1 + 0x20) = PTR_FUN_007a1a30;
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return 1;
}


// ===== 00387490  FUN_00387490 =====

undefined8 FUN_00387490(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 1;
}


// ===== 003874a0  FUN_003874a0 =====

undefined8 FUN_003874a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}


// ===== 003874a8  FUN_003874a8 =====

undefined8 FUN_003874a8(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x30) = param_2;
  return 1;
}


// ===== 003874b8  FUN_003874b8 =====

undefined8 FUN_003874b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}


// ===== 003874c0  FUN_003874c0 =====

undefined8 FUN_003874c0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x38) = param_2;
  return 1;
}


// ===== 003874d0  FUN_003874d0 =====

undefined8 FUN_003874d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}


// ===== 003874d8  FUN_003874d8 =====

undefined8 FUN_003874d8(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x40) = param_2;
  return 1;
}


// ===== 003874e8  FUN_003874e8 =====

undefined8 FUN_003874e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}


// ===== 003874f0  FUN_003874f0 =====

undefined8 FUN_003874f0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x48) = param_2;
  return 1;
}


// ===== 00387500  FUN_00387500 =====

undefined8 FUN_00387500(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}


// ===== 00387508  FUN_00387508 =====

undefined8 FUN_00387508(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x50) = param_2;
  return 1;
}


// ===== 00387518  FUN_00387518 =====

undefined8 FUN_00387518(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}


// ===== 00387520  FUN_00387520 =====

undefined8 FUN_00387520(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x58) = param_2;
  return 1;
}


// ===== 00387530  FUN_00387530 =====

undefined8 FUN_00387530(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x60) = param_2;
  return 1;
}


// ===== 00387540  FUN_00387540 =====

undefined8 FUN_00387540(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}


// ===== 00387548  FUN_00387548 =====

undefined8 FUN_00387548(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x68) = param_2;
  return 1;
}


// ===== 00387558  FUN_00387558 =====

undefined8 FUN_00387558(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}


// ===== 00387560  FUN_00387560 =====

undefined * FUN_00387560(void)

{
  return &DAT_00764f30;
}


// ===== 0038756c  FUN_0038756c =====

undefined * FUN_0038756c(void)

{
  return &DAT_00764fa0;
}


// ===== 00387578  FUN_00387578 =====

long FUN_00387578(char *param_1,uint param_2)

{
  size_t *psVar1;
  size_t *psVar2;
  long lVar3;
  size_t sVar4;
  size_t sVar5;
  size_t sVar6;
  
  if (param_1 == (char *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/bio/bss_mem.c",0x5a,"BIO_new_mem_buf");
    FUN_00379a5c(0x20,0xc0102,0);
    return 0;
  }
  if ((int)param_2 < 0) {
    sVar4 = strlen(param_1);
    lVar3 = FUN_0037db44(&DAT_00764f30);
  }
  else {
    sVar4 = (size_t)param_2;
    lVar3 = FUN_0037db44(&DAT_00764f30);
  }
  if (lVar3 == 0) {
    return 0;
  }
  psVar1 = (size_t *)**(long **)(lVar3 + 0x38);
  psVar2 = (size_t *)(*(long **)(lVar3 + 0x38))[1];
  psVar1[1] = (size_t)param_1;
  psVar1[2] = sVar4;
  *psVar1 = sVar4;
  sVar6 = *psVar1;
  sVar5 = psVar1[3];
  sVar4 = psVar1[2];
  psVar2[1] = psVar1[1];
  *psVar2 = sVar6;
  psVar2[3] = sVar5;
  psVar2[2] = sVar4;
  *(undefined4 *)(lVar3 + 0x30) = 0;
  *(uint *)(lVar3 + 0x28) = *(uint *)(lVar3 + 0x28) | 0x200;
  return lVar3;
}


// ===== 00387640  FUN_00387640 =====

int FUN_00387640(long param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  void *__src;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if ((*(byte *)(param_1 + 0x29) >> 1 & 1) == 0) {
    plVar4 = *(long **)(param_1 + 0x38);
    FUN_0037dd18(param_1,0xf);
    if (param_3 == 0) {
      return 0;
    }
    if (param_2 != (void *)0x0) {
      uVar5 = *(undefined8 *)plVar4[1];
      if ((*(int *)(param_1 + 0x20) != 0) &&
         (plVar6 = *(long **)(param_1 + 0x38), plVar6 != (long *)0x0)) {
        __src = (void *)((size_t *)plVar6[1])[1];
        if (__src != *(void **)(*plVar6 + 8)) {
          memmove(*(void **)(*plVar6 + 8),__src,*(size_t *)plVar6[1]);
          puVar1 = (undefined8 *)*plVar6;
          puVar2 = (undefined8 *)plVar6[1];
          *puVar1 = *puVar2;
          puVar2[1] = puVar1[1];
        }
      }
      lVar3 = FUN_00388074(*plVar4,(long)((int)uVar5 + param_3));
      if (lVar3 == 0) {
        return -1;
      }
      memcpy((void *)(*(long *)(*plVar4 + 8) + (long)(int)uVar5),param_2,(long)param_3);
      puVar1 = (undefined8 *)*plVar4;
      puVar2 = (undefined8 *)plVar4[1];
      uVar5 = *puVar1;
      uVar8 = puVar1[3];
      uVar7 = puVar1[2];
      puVar2[1] = puVar1[1];
      *puVar2 = uVar5;
      puVar2[3] = uVar8;
      puVar2[2] = uVar7;
      return param_3;
    }
    FUN_00379868();
    FUN_0037995c("crypto/bio/bss_mem.c",0xe4,"mem_write");
    uVar5 = 0xc0102;
  }
  else {
    FUN_00379868();
    FUN_0037995c("crypto/bio/bss_mem.c",0xdd,"mem_write");
    uVar5 = 0x7e;
  }
  FUN_00379a5c(0x20,uVar5,0);
  return -1;
}


// ===== 0038778c  FUN_0038778c =====

ulong FUN_0038778c(long param_1,void *param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong __n;
  ulong *puVar3;
  
  __n = (ulong)param_3;
  puVar3 = *(ulong **)
            (*(long *)(param_1 + 0x38) + ((ulong)(*(uint *)(param_1 + 0x28) >> 6 ^ 0xffffffff) & 8))
  ;
  FUN_0037dd18(param_1,0xf);
  uVar2 = *puVar3;
  if (-1 < (int)param_3) {
    uVar1 = (uint)uVar2;
    if (param_3 <= uVar2) {
      uVar1 = param_3;
    }
    __n = (ulong)uVar1;
    if ((param_2 != (void *)0x0) && (0 < (int)uVar1)) {
      memcpy(param_2,(void *)puVar3[1],__n);
      puVar3[2] = puVar3[2] - __n;
      *puVar3 = *puVar3 - __n;
      puVar3[1] = puVar3[1] + __n;
      return __n;
    }
  }
  if (uVar2 == 0) {
    uVar1 = *(uint *)(param_1 + 0x30);
    __n = (ulong)uVar1;
    if (uVar1 != 0) {
      FUN_0037dd34(param_1,9);
      return (ulong)uVar1;
    }
  }
  return __n;
}


// ===== 00387850  FUN_00387850 =====

void FUN_00387850(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  
  sVar1 = strlen(param_2);
  FUN_00387640(param_1,param_2,sVar1);
  return;
}


// ===== 00387884  FUN_00387884 =====

ulong FUN_00387884(long param_1,undefined1 *param_2,int param_3)

{
  ulong uVar1;
  uint uVar2;
  ulong __n;
  uint *puVar3;
  ulong *puVar4;
  
  puVar3 = *(uint **)(*(long *)(param_1 + 0x38) +
                     ((ulong)(*(uint *)(param_1 + 0x28) >> 6 ^ 0xffffffff) & 8));
  FUN_0037dd18(param_1,0xf);
  uVar2 = *puVar3;
  if (param_3 <= (int)uVar2) {
    uVar2 = param_3 - 1;
  }
  __n = (ulong)uVar2;
  if ((int)uVar2 < 1) {
    *param_2 = 0;
    return 0;
  }
  uVar1 = 0;
  do {
    if (*(char *)(*(long *)(puVar3 + 2) + uVar1) == '\n') {
      __n = (ulong)((int)uVar1 + 1);
      break;
    }
    uVar1 = uVar1 + 1;
  } while (__n != uVar1);
  puVar4 = *(ulong **)
            (*(long *)(param_1 + 0x38) + ((ulong)(*(uint *)(param_1 + 0x28) >> 6 ^ 0xffffffff) & 8))
  ;
  FUN_0037dd18(param_1,0xf);
  uVar1 = *puVar4;
  if (-1 < (int)(uint)__n) {
    uVar2 = (uint)uVar1;
    if (__n <= uVar1) {
      uVar2 = (uint)__n;
    }
    __n = (ulong)uVar2;
    if ((param_2 != (undefined1 *)0x0) && (0 < (int)uVar2)) {
      memcpy(param_2,(void *)puVar4[1],__n);
      puVar4[2] = puVar4[2] - __n;
      *puVar4 = *puVar4 - __n;
      puVar4[1] = puVar4[1] + __n;
      goto LAB_003879d0;
    }
  }
  if (uVar1 == 0) {
    uVar2 = *(uint *)(param_1 + 0x30);
    __n = (ulong)uVar2;
    if (uVar2 == 0) {
      return __n;
    }
    FUN_0037dd34(param_1,9);
  }
  else {
    uVar2 = (uint)__n;
  }
  if ((int)uVar2 < 1) {
    return __n;
  }
LAB_003879d0:
  param_2[__n] = 0;
  return __n;
}


// ===== 003879ec  FUN_003879ec =====

ulong FUN_003879ec(long param_1,int param_2,ulong param_3,ulong *param_4)

{
  uint uVar1;
  ulong uVar2;
  void *__src;
  undefined4 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  puVar11 = *(ulong **)(param_1 + 0x38);
  plVar7 = (long *)puVar11[(uVar1 & 0x200) >> 9];
  puVar6 = (ulong *)puVar11[(uVar1 & 0x200) == 0];
  lVar9 = plVar7[1];
  uVar2 = puVar6[1] - lVar9;
  uVar5 = 0;
  if (uVar2 != 0) {
    uVar5 = uVar2;
  }
  if (param_2 - 1U < 0x85) {
    uVar10 = *puVar6;
    uVar3 = (undefined4)param_3;
    uVar2 = uVar5;
    switch(param_2) {
    case 1:
      puVar12 = (undefined8 *)*puVar11;
      if ((void *)puVar12[1] == (void *)0x0) {
        return 1;
      }
      if ((uVar1 >> 9 & 1) != 0) {
        puVar4 = (undefined8 *)puVar11[1];
        uVar15 = *puVar4;
        uVar14 = puVar4[3];
        uVar13 = puVar4[2];
        puVar12[1] = puVar4[1];
        *puVar12 = uVar15;
        puVar12[3] = uVar14;
        puVar12[2] = uVar13;
        return 1;
      }
      if ((uVar1 >> 10 & 1) == 0) {
        memset((void *)puVar12[1],0,puVar12[2]);
        *puVar12 = 0;
        puVar12 = (undefined8 *)*puVar11;
      }
      uVar15 = *puVar12;
      uVar14 = puVar12[3];
      uVar13 = puVar12[2];
      puVar4 = (undefined8 *)puVar11[1];
      puVar4[1] = puVar12[1];
      *puVar4 = uVar15;
      puVar4[3] = uVar14;
      puVar4[2] = uVar13;
      return 1;
    case 2:
      return (ulong)(uVar10 == 0);
    case 3:
      if (param_4 == (ulong *)0x0) {
        return uVar10;
      }
      *param_4 = puVar6[1];
      return uVar10;
    default:
      goto switchD_00387a54_caseD_4;
    case 8:
      return (long)*(int *)(param_1 + 0x24);
    case 9:
      *(undefined4 *)(param_1 + 0x24) = uVar3;
      return 1;
    case 10:
      return uVar10;
    case 0xb:
    case 0xc:
      uVar2 = 1;
      break;
    case 0x72:
      if (((*(int *)(param_1 + 0x24) != 0) && (puVar11 != (ulong *)0x0)) &&
         (*(int *)(param_1 + 0x20) != 0)) {
        if ((uVar1 >> 9 & 1) != 0) {
          *(undefined8 *)(*puVar11 + 8) = 0;
        }
        FUN_00387e64();
      }
      *(undefined4 *)(param_1 + 0x24) = uVar3;
      puVar6 = (ulong *)puVar11[1];
      *puVar11 = (ulong)param_4;
      uVar10 = *param_4;
      uVar2 = param_4[3];
      uVar5 = param_4[2];
      puVar6[1] = param_4[1];
      *puVar6 = uVar10;
      puVar6[3] = uVar2;
      puVar6[2] = uVar5;
      return 1;
    case 0x73:
      if (param_4 == (ulong *)0x0) {
        return 1;
      }
      if ((uVar1 >> 9 & 1) == 0) {
        uVar5 = *puVar11;
        if ((puVar11 != (ulong *)0x0) && (*(int *)(param_1 + 0x20) != 0)) {
          __src = (void *)((size_t *)puVar11[1])[1];
          if (__src != *(void **)(uVar5 + 8)) {
            memmove(*(void **)(uVar5 + 8),__src,*(size_t *)puVar11[1]);
            puVar12 = (undefined8 *)*puVar11;
            puVar4 = (undefined8 *)puVar11[1];
            *puVar12 = *puVar4;
            puVar4[1] = puVar12[1];
            *param_4 = (ulong)puVar12;
            return 1;
          }
        }
      }
      else {
        uVar5 = *puVar11;
      }
      *param_4 = uVar5;
      return 1;
    case 0x80:
      uVar2 = 0xffffffffffffffff;
      if ((-1 < (long)param_3) && ((long)param_3 <= (long)(uVar5 + uVar10))) {
        lVar8 = plVar7[2];
        *puVar6 = *plVar7 - param_3;
        puVar6[1] = lVar9 + param_3;
        puVar6[2] = lVar8 - param_3;
        return param_3;
      }
      break;
    case 0x82:
      *(undefined4 *)(param_1 + 0x30) = uVar3;
      return 1;
    case 0x85:
      break;
    }
    return uVar2;
  }
switchD_00387a54_caseD_4:
  return 0;
}


// ===== 00387cb0  FUN_00387cb0 =====

void FUN_00387cb0(undefined8 param_1)

{
  FUN_00387d2c(param_1,0);
  return;
}


// ===== 00387cb8  FUN_00387cb8 =====

long FUN_00387cb8(long param_1)

{
  long *plVar1;
  
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 0x38);
    if (((*(int *)(param_1 + 0x24) != 0) && (*(int *)(param_1 + 0x20) != 0)) &&
       (plVar1 != (long *)0x0)) {
      if ((*(byte *)(param_1 + 0x29) >> 1 & 1) != 0) {
        *(undefined8 *)(*plVar1 + 8) = 0;
      }
      FUN_00387e64();
    }
    FUN_003c86b4(plVar1[1],"crypto/bio/bss_mem.c",0x98);
    FUN_003c86b4(plVar1,"crypto/bio/bss_mem.c",0x99);
    param_1 = 1;
  }
  return param_1;
}


// ===== 00387d2c  FUN_00387d2c =====

long * FUN_00387d2c(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  plVar1 = (long *)FUN_003c8474(0x10,"crypto/bio/bss_mem.c",0x6f);
  if (plVar1 != (long *)0x0) {
    lVar2 = FUN_00387e18(param_2);
    *plVar1 = lVar2;
    if (lVar2 == 0) {
      FUN_003c86b4(plVar1,"crypto/bio/bss_mem.c",0x74);
      return (long *)0x0;
    }
    puVar3 = (undefined8 *)FUN_003c8474(0x20,"crypto/bio/bss_mem.c",0x77);
    puVar4 = (undefined8 *)*plVar1;
    plVar1[1] = (long)puVar3;
    if (puVar3 == (undefined8 *)0x0) {
      FUN_00387e64(puVar4);
      FUN_003c86b4(plVar1,"crypto/bio/bss_mem.c",0x79);
      return (long *)0x0;
    }
    uVar8 = puVar4[1];
    uVar7 = *puVar4;
    uVar6 = puVar4[3];
    uVar5 = puVar4[2];
    *(long **)(param_1 + 0x38) = plVar1;
    *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
    puVar3[1] = uVar8;
    *puVar3 = uVar7;
    puVar3[3] = uVar6;
    puVar3[2] = uVar5;
    plVar1 = (long *)0x1;
    *(undefined8 *)(param_1 + 0x20) = 0x100000001;
  }
  return plVar1;
}


// ===== 00387e10  FUN_00387e10 =====

void FUN_00387e10(undefined8 param_1)

{
  FUN_00387d2c(param_1,1);
  return;
}


// ===== 00387e18  FUN_00387e18 =====

void FUN_00387e18(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_003c8474(0x20,"crypto/buffer/buffer.c",0x23);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x18) = param_1;
  }
  return;
}


// ===== 00387e50  FUN_00387e50 =====

void FUN_00387e50(void)

{
  FUN_003c8474(0x20,"crypto/buffer/buffer.c",0x23);
  return;
}


// ===== 00387e64  FUN_00387e64 =====

void FUN_00387e64(long param_1)

{
  if (param_1 == 0) {
    return;
  }
  if (*(long *)(param_1 + 8) != 0) {
    if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
      FUN_003c893c();
    }
    else {
      FUN_003c9d0c(*(long *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),"crypto/buffer/buffer.c",
                   0x2f);
    }
  }
  FUN_003c86b4(param_1,"crypto/buffer/buffer.c",0x33);
  return;
}


// ===== 00387ed0  FUN_00387ed0 =====

ulong FUN_00387ed0(ulong *param_1,ulong param_2)

{
  void *__dest;
  ulong uVar1;
  void *__src;
  size_t __n;
  
  uVar1 = *param_1;
  if (param_2 < uVar1 || param_2 - uVar1 == 0) {
LAB_00387f78:
    *param_1 = param_2;
    return param_2;
  }
  if (param_2 <= param_1[2]) {
    if (param_1[1] != 0) {
      memset((void *)(param_1[1] + uVar1),0,param_2 - uVar1);
    }
    goto LAB_00387f78;
  }
  if (0x5ffffffc < param_2) {
    FUN_00379868();
    FUN_0037995c("crypto/buffer/buffer.c",0x58,"BUF_MEM_grow");
    FUN_00379a5c(7,0x80106,0);
    return 0;
  }
  uVar1 = (ulong)(((uint)((ulong)((int)param_2 + 3) * 0xaaaaaaab >> 0x20) & 0x7ffffffe) << 1);
  if ((param_1[3] & 1) == 0) {
    __dest = (void *)FUN_003c8558(param_1[1],uVar1,"crypto/buffer/buffer.c",0x5f);
  }
  else {
    __dest = (void *)FUN_003c8e24(uVar1,"crypto/buffer/buffer.c",0x3c);
    __src = (void *)param_1[1];
    if ((__src != (void *)0x0) && (__dest != (void *)0x0)) {
      __n = *param_1;
      memcpy(__dest,__src,__n);
      FUN_003c9d0c(__src,__n,"crypto/buffer/buffer.c",0x40);
      goto LAB_00388040;
    }
  }
  if (__dest == (void *)0x0) {
    return 0;
  }
LAB_00388040:
  param_1[1] = (ulong)__dest;
  param_1[2] = uVar1;
  memset((void *)((long)__dest + *param_1),0,param_2 - *param_1);
  *param_1 = param_2;
  return param_2;
}


// ===== 00388074  FUN_00388074 =====

ulong FUN_00388074(ulong *param_1,ulong param_2)

{
  void *pvVar1;
  size_t sVar2;
  ulong uVar3;
  void *__src;
  
  uVar3 = *param_1;
  sVar2 = uVar3 - param_2;
  if (uVar3 < param_2) {
    if (param_1[2] < param_2) {
      if (0x5ffffffc < param_2) {
        FUN_00379868();
        FUN_0037995c("crypto/buffer/buffer.c",0x7d,"BUF_MEM_grow_clean");
        FUN_00379a5c(7,0x80106,0);
        return 0;
      }
      uVar3 = (ulong)(((uint)((ulong)((int)param_2 + 3) * 0xaaaaaaab >> 0x20) & 0x7ffffffe) << 1);
      if ((param_1[3] & 1) == 0) {
        pvVar1 = (void *)FUN_003c86d4(param_1[1],param_1[2],uVar3,"crypto/buffer/buffer.c",0x84);
LAB_00388148:
        if (pvVar1 == (void *)0x0) {
          return 0;
        }
      }
      else {
        pvVar1 = (void *)FUN_003c8e24(uVar3,"crypto/buffer/buffer.c",0x3c);
        __src = (void *)param_1[1];
        if ((__src == (void *)0x0) || (pvVar1 == (void *)0x0)) goto LAB_00388148;
        sVar2 = *param_1;
        memcpy(pvVar1,__src,sVar2);
        FUN_003c9d0c(__src,sVar2,"crypto/buffer/buffer.c",0x40);
      }
      param_1[1] = (ulong)pvVar1;
      param_1[2] = uVar3;
      sVar2 = param_2 - *param_1;
      pvVar1 = (void *)((long)pvVar1 + *param_1);
    }
    else {
      sVar2 = param_2 - uVar3;
      pvVar1 = (void *)(param_1[1] + uVar3);
    }
  }
  else {
    if (param_1[1] == 0) goto LAB_003881d0;
    pvVar1 = (void *)(param_1[1] + param_2);
  }
  memset(pvVar1,0,sVar2);
LAB_003881d0:
  *param_1 = param_2;
  return param_2;
}


// ===== 003881ec  FUN_003881ec =====

void FUN_003881ec(undefined1 *param_1,undefined1 *param_2,ulong param_3)

{
  undefined1 (*pauVar1) [16];
  undefined1 uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 (*pauVar7) [16];
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  if (param_2 == (undefined1 *)0x0) {
    if (param_3 < 2) {
      return;
    }
    uVar4 = param_3 >> 1;
    puVar3 = param_1 + param_3;
    do {
      puVar3 = puVar3 + -1;
      uVar2 = *puVar3;
      uVar4 = uVar4 - 1;
      *puVar3 = *param_1;
      *param_1 = uVar2;
      param_1 = param_1 + 1;
    } while (uVar4 != 0);
    return;
  }
  if (param_3 == 0) {
    return;
  }
  puVar3 = param_1 + param_3;
  if ((param_3 < 8) || ((param_1 < param_2 + param_3 && (param_2 < puVar3)))) {
    uVar4 = 0;
    puVar6 = param_2;
  }
  else {
    if (param_3 < 0x20) {
      uVar9 = 0;
    }
    else {
      uVar4 = param_3 & 0xffffffffffffffe0;
      pauVar7 = (undefined1 (*) [16])(param_2 + 0x10);
      puVar8 = (undefined8 *)(param_1 + (param_3 - 0x10));
      uVar9 = uVar4;
      do {
        pauVar1 = pauVar7 + -1;
        auVar13 = *pauVar7;
        uVar9 = uVar9 - 0x20;
        pauVar7 = pauVar7 + 2;
        auVar12 = NEON_rev64(*pauVar1,1);
        auVar14 = NEON_rev64(auVar13,1);
        auVar13 = NEON_ext(auVar12,auVar12,8,1);
        auVar12 = NEON_ext(auVar14,auVar14,8,1);
        puVar8[-1] = auVar12._8_8_;
        puVar8[-2] = auVar12._0_8_;
        puVar8[1] = auVar13._8_8_;
        *puVar8 = auVar13._0_8_;
        puVar8 = puVar8 + -4;
      } while (uVar9 != 0);
      if (uVar4 == param_3) {
        return;
      }
      uVar9 = uVar4;
      if ((param_3 & 0x18) == 0) {
        puVar6 = param_2 + uVar4;
        puVar3 = puVar3 + -uVar4;
        goto LAB_0038821c;
      }
    }
    uVar4 = param_3 & 0xfffffffffffffff8;
    lVar10 = (long)param_1 - uVar9;
    puVar3 = puVar3 + -uVar4;
    puVar6 = param_2 + uVar4;
    lVar5 = uVar9 - uVar4;
    puVar8 = (undefined8 *)(param_2 + uVar9);
    do {
      lVar10 = lVar10 + -8;
      lVar5 = lVar5 + 8;
      uVar11 = NEON_rev64(*puVar8,1);
      *(undefined8 *)(lVar10 + param_3) = uVar11;
      puVar8 = puVar8 + 1;
    } while (lVar5 != 0);
    if (uVar4 == param_3) {
      return;
    }
  }
LAB_0038821c:
  lVar5 = param_3 - uVar4;
  do {
    puVar3 = puVar3 + -1;
    lVar5 = lVar5 + -1;
    *puVar3 = *puVar6;
    puVar6 = puVar6 + 1;
  } while (lVar5 != 0);
  return;
}


// ===== 00388314  FUN_00388314 =====

undefined8 FUN_00388314(int *param_1)

{
  *param_1 = *param_1 + 1;
  return 1;
}


// ===== 0038832c  FUN_0038832c =====

undefined4 FUN_0038832c(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_1 != (int *)0x0) &&
     (iVar1 = *param_1, iVar2 = iVar1 + -1, *param_1 = iVar2, iVar2 == 0 || iVar1 < 1)) {
    uVar3 = FUN_0037db50(*(undefined8 *)(param_1 + 2));
    FUN_003c86b4(param_1,"crypto/bio/ossl_core_bio.c",0x32);
    return uVar3;
  }
  return 1;
}


// ===== 0038838c  FUN_0038838c =====

undefined4 * FUN_0038838c(undefined8 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_003c83a4(0x10,"crypto/bio/ossl_core_bio.c",0x19);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_003c86b4(0,"crypto/bio/ossl_core_bio.c",0x1c);
    return (undefined4 *)0x0;
  }
  *puVar2 = 1;
  iVar1 = FUN_0037dcfc(param_1);
  if (iVar1 != 0) {
    *(undefined8 *)(puVar2 + 2) = param_1;
    return puVar2;
  }
  *puVar2 = 0;
  FUN_0037db50(*(undefined8 *)(puVar2 + 2));
  FUN_003c86b4(puVar2,"crypto/bio/ossl_core_bio.c",0x32);
  return (undefined4 *)0x0;
}


// ===== 00388430  FUN_00388430 =====

undefined4 * FUN_00388430(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)FUN_00388570();
  puVar2 = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_003c83a4(0x10,"crypto/bio/ossl_core_bio.c",0x19);
    if (puVar2 == (undefined4 *)0x0) {
      FUN_003c86b4(0,"crypto/bio/ossl_core_bio.c",0x1c);
      FUN_0037db50(puVar1);
      return (undefined4 *)0x0;
    }
    *(undefined4 **)(puVar2 + 2) = puVar1;
    *puVar2 = 1;
  }
  return puVar2;
}


// ===== 003884a0  FUN_003884a0 =====

undefined4 * FUN_003884a0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)FUN_00387578();
  puVar2 = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_003c83a4(0x10,"crypto/bio/ossl_core_bio.c",0x19);
    if (puVar2 == (undefined4 *)0x0) {
      FUN_003c86b4(0,"crypto/bio/ossl_core_bio.c",0x1c);
      FUN_0037db50(puVar1);
      return (undefined4 *)0x0;
    }
    *(undefined4 **)(puVar2 + 2) = puVar1;
    *puVar2 = 1;
  }
  return puVar2;
}


// ===== 00388510  FUN_00388510 =====

void FUN_00388510(long param_1)

{
  FUN_0037df30(*(undefined8 *)(param_1 + 8));
  return;
}


// ===== 00388518  FUN_00388518 =====

void FUN_00388518(long param_1)

{
  FUN_0037e148(*(undefined8 *)(param_1 + 8));
  return;
}


// ===== 00388520  FUN_00388520 =====

void FUN_00388520(long param_1)

{
  FUN_0037e7f0(*(undefined8 *)(param_1 + 8));
  return;
}


// ===== 00388528  FUN_00388528 =====

void FUN_00388528(long param_1)

{
  FUN_0037e608(*(undefined8 *)(param_1 + 8));
  return;
}


// ===== 00388530  FUN_00388530 =====

void FUN_00388530(long param_1)

{
  FUN_0037e4bc(*(undefined8 *)(param_1 + 8));
  return;
}


// ===== 00388538  FUN_00388538 =====

void FUN_00388538(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_3[1];
  local_30 = *param_3;
  uStack_18 = param_3[3];
  uStack_20 = param_3[2];
  FUN_0037ba60(*(undefined8 *)(param_1 + 8),param_2,&local_30);
  return;
}


// ===== 00388564  FUN_00388564 =====

undefined * FUN_00388564(void)

{
  return &DAT_00765010;
}


// ===== 00388570  FUN_00388570 =====

undefined8 FUN_00388570(void)

{
  return 0;
}


// ===== 00388578  FUN_00388578 =====

undefined8 FUN_00388578(void)

{
  return 0xffffffff;
}


// ===== 00388580  FUN_00388580 =====

undefined8 FUN_00388580(void)

{
  return 0xffffffff;
}


// ===== 00388588  FUN_00388588 =====

undefined8 FUN_00388588(void)

{
  return 0xffffffff;
}


// ===== 00388590  FUN_00388590 =====

undefined8 FUN_00388590(void)

{
  return 0;
}


// ===== 00388598  FUN_00388598 =====

undefined8 FUN_00388598(void)

{
  return 0;
}


// ===== 003885a0  FUN_003885a0 =====

undefined8 FUN_003885a0(void)

{
  return 0;
}


// ===== 003885a8  FUN_003885a8 =====

undefined8 FUN_003885a8(void)

{
  return 0;
}


// ===== 003885b0  FUN_003885b0 =====

void FUN_003885b0(undefined8 param_1,undefined8 param_2)

{
  FUN_003885b8(param_1,param_2,0);
  return;
}


// ===== 003885b8  FUN_003885b8 =====

int FUN_003885b8(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined8 *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 *local_a0;
  long lStack_98;
  long local_90;
  undefined8 *puStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long local_38;
  
  puVar9 = (undefined4 *)*param_1;
  local_38 = param_2;
  if (*(code **)(puVar9 + 0x10) == (code *)0x0) {
    if (((uint)*(undefined8 *)(puVar9 + 4) >> 0x18 & 1) == 0) {
      uVar4 = (uint)*(undefined8 *)(puVar9 + 4) & 0xf0007;
      if (uVar4 < 0x10001) {
        if (uVar4 != 6) {
          if (uVar4 != 7) goto LAB_00388774;
          goto LAB_003885e8;
        }
        iVar2 = 0;
        if ((param_2 != 0) && (param_3 != 0)) {
          iVar2 = FUN_0039c8f4(param_2,*(undefined4 *)(param_3 + 0x14),param_3,
                               *(undefined4 *)(param_3 + 0x10));
          goto LAB_003885e0;
        }
      }
      else {
        if ((uVar4 == 0x10001) || (uVar4 == 0x10003)) goto LAB_003885e8;
        if (uVar4 == 0x10002) {
          lVar5 = *(long *)(puVar9 + 0x1e);
          if (lVar5 == 0) {
            lVar8 = *(long *)(puVar9 + 0x1a);
            if (lVar8 == 0) {
              lVar8 = FUN_003dce44(*puVar9);
            }
            lVar5 = 0;
            uVar7 = 0;
          }
          else {
            uVar7 = puVar9[0x18];
            lVar8 = 0;
          }
          iVar2 = FUN_00383528(lVar5,uVar7,lVar8,"id-smime-alg-CMS3DESwrap");
          if (iVar2 != 0) {
            FUN_0039ade0(param_2,5,0);
          }
          iVar2 = 1;
          goto LAB_00388834;
        }
LAB_00388774:
        if (param_2 != 0) {
          local_d8 = param_1 + 3;
          lStack_98 = 0;
          local_a0 = (undefined8 *)0x0;
          puStack_88 = (undefined8 *)0x0;
          local_90 = 0;
          uStack_78 = 0;
          local_80 = 0;
          local_68 = 0;
          uStack_70 = 0;
          uStack_a8 = 0;
          local_b0 = 0;
          FUN_003cdc58(&local_b0,&DAT_001d9fca,&local_d8,0x10);
          iVar2 = FUN_0039f0e0(*param_1,param_1[0x15],&local_b0);
          puVar6 = local_d8;
          uVar4 = FUN_00388c08(param_1);
          if (0x10 < uVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_003c4750("assertion failed: j <= sizeof(c->iv)","crypto/evp/evp_lib.c",0x4a);
          }
          puVar1 = (undefined8 *)0x0;
          if (iVar2 != 0) {
            puVar1 = puVar6;
          }
          iVar2 = FUN_0039c668(param_2,puVar1,uVar4);
          goto LAB_003885e0;
        }
        iVar2 = 0;
      }
LAB_00388800:
      FUN_00379868();
      FUN_0037995c("crypto/evp/evp_lib.c",0xa5,"evp_cipher_param_to_asn1_ex");
      FUN_00379a5c(6,0x7a,0);
      goto LAB_00388834;
    }
    if (*(long *)(puVar9 + 0x1e) != 0) {
      FUN_003cd924(&local_b0,"alg_id_param",0,0);
      FUN_003cdfcc(&local_d8);
      local_80 = uStack_d0;
      puStack_88 = local_d8;
      uStack_70 = uStack_c0;
      uStack_78 = local_c8;
      local_68 = local_b8;
      iVar2 = FUN_00381ed8(param_1,&local_b0);
      if (iVar2 == 0) {
LAB_003887f4:
        iVar2 = -1;
      }
      else {
        iVar3 = FUN_003cb1f8(&local_b0);
        iVar2 = -1;
        if ((iVar3 != 0) && (local_90 != 0)) {
          puVar6 = (undefined8 *)FUN_003c83a4(local_90,"crypto/evp/evp_lib.c",0x90);
          if (puVar6 == (undefined8 *)0x0) goto LAB_003887f4;
          lStack_98 = local_90;
          local_a0 = puVar6;
          FUN_003cb20c(&local_b0);
          local_d8 = puVar6;
          iVar2 = FUN_00381ed8(param_1,&local_b0);
          if ((iVar2 == 0) || (iVar2 = FUN_003cb1f8(&local_b0), iVar2 == 0)) {
            iVar2 = -1;
          }
          else {
            lVar5 = FUN_0038a634(&local_38,&local_d8,local_90);
            iVar2 = 1;
            if (lVar5 == 0) {
              iVar2 = -1;
            }
          }
          FUN_003c86b4(puVar6,"crypto/evp/evp_lib.c",0x9b);
        }
      }
joined_r0x00388890:
      if (0 < iVar2) goto LAB_00388834;
      goto LAB_00388800;
    }
  }
  else {
    iVar2 = (**(code **)(puVar9 + 0x10))();
LAB_003885e0:
    if (iVar2 != -2) goto joined_r0x00388890;
  }
LAB_003885e8:
  FUN_00379868();
  FUN_0037995c("crypto/evp/evp_lib.c",0xa3,"evp_cipher_param_to_asn1_ex");
  FUN_00379a5c(6,0x6b,0);
  iVar2 = -2;
LAB_00388834:
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}


// ===== 00388900  FUN_00388900 =====

void FUN_00388900(undefined8 param_1,undefined8 param_2)

{
  FUN_00388908(param_1,param_2,0);
  return;
}


// ===== 00388908  FUN_00388908 =====

uint FUN_00388908(long *param_1,long param_2,void *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_18;
  
  lVar4 = *param_1;
  if (*(code **)(lVar4 + 0x48) == (code *)0x0) {
    uVar1 = (uint)*(undefined8 *)(lVar4 + 0x10);
    if ((uVar1 >> 0x18 & 1) == 0) {
      uVar1 = uVar1 & 0xf0007;
      if (uVar1 < 0x10001) {
        if (uVar1 == 6) {
          uVar1 = 0;
          if ((param_2 != 0) && (param_3 != (void *)0x0)) {
            uVar1 = FUN_0039c944(param_2,&local_d0,0,0x10);
            if ((int)uVar1 < 1) {
              uVar1 = 0xffffffff;
            }
            else {
              FUN_0039c944(param_2,&local_d0,auStack_a8,(ulong)uVar1);
              memcpy(param_3,auStack_a8,(ulong)uVar1);
              *(uint *)((long)param_3 + 0x10) = uVar1;
            }
          }
          goto LAB_00388a34;
        }
        if (uVar1 != 7) {
LAB_00388a94:
          if (param_2 == 0) {
LAB_00388aec:
            uVar1 = 1;
          }
          else {
            uVar1 = FUN_00388c08();
            if ((uVar1 < 0x11) && (uVar2 = FUN_0039c6e0(param_2,auStack_a8,uVar1), uVar2 == uVar1))
            {
              uVar1 = 0xffffffff;
              iVar3 = FUN_003803c8(param_1,0,0,0,auStack_a8,0xffffffff);
              if (iVar3 != 0) goto LAB_00388aec;
            }
            else {
              uVar1 = 0xffffffff;
            }
LAB_00388a3c:
            FUN_00379868();
            FUN_0037995c("crypto/evp/evp_lib.c",0xec,"evp_cipher_asn1_to_param_ex");
            FUN_00379a5c(6,0x7a,0);
          }
          goto LAB_00388a68;
        }
      }
      else if (uVar1 != 0x10001) {
        if (uVar1 == 0x10002) goto LAB_00388aec;
        if (uVar1 != 0x10003) goto LAB_00388a94;
      }
    }
    else if (*(long *)(lVar4 + 0x78) != 0) {
      local_18 = 0;
      iVar3 = FUN_0038a640(param_2,&local_18);
      uVar1 = 0xffffffff;
      if (-1 < iVar3) {
        FUN_003cd924(auStack_a8,"alg_id_param",local_18,iVar3);
        FUN_003cdfcc(&local_d0);
        uStack_78 = uStack_c8;
        local_80 = local_d0;
        uStack_68 = uStack_b8;
        uStack_70 = uStack_c0;
        local_60 = local_b0;
        iVar3 = FUN_00381de0(param_1,auStack_a8);
        uVar1 = 1;
        if (iVar3 == 0) {
          uVar1 = 0xffffffff;
        }
        FUN_003c86b4(local_18,"crypto/evp/evp_lib.c",0xe3);
      }
      goto LAB_00388a34;
    }
  }
  else {
    uVar1 = (**(code **)(lVar4 + 0x48))();
    if (uVar1 != 0xfffffffe) {
LAB_00388a34:
      if (0 < (int)uVar1) goto LAB_00388a68;
      goto LAB_00388a3c;
    }
  }
  FUN_00379868();
  FUN_0037995c("crypto/evp/evp_lib.c",0xea,"evp_cipher_asn1_to_param_ex");
  FUN_00379a5c(6,0x6b,0);
  uVar1 = 0xfffffffe;
LAB_00388a68:
  if ((int)uVar1 < 0) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


// ===== 00388b68  FUN_00388b68 =====

uint FUN_00388b68(undefined8 param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_40 [16];
  
  if (param_2 == 0) {
    return 0;
  }
  uVar1 = FUN_00388c08();
  if ((uVar1 < 0x11) && (uVar2 = FUN_0039c6e0(param_2,auStack_40,uVar1), uVar2 == uVar1)) {
    iVar3 = FUN_003803c8(param_1,0,0,0,auStack_40,0xffffffff);
    if (iVar3 == 0) {
      uVar1 = 0xffffffff;
    }
    return uVar1;
  }
  return 0xffffffff;
}


// ===== 00388c08  FUN_00388c08 =====

int FUN_00388c08(long *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long local_28;
  int local_4;
  
  if (-1 < *(int *)((long)param_1 + 0x6c)) {
    return *(int *)((long)param_1 + 0x6c);
  }
  lVar2 = *param_1;
  local_4 = *(int *)(lVar2 + 0xc);
  local_28 = (long)local_4;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_78 = 0;
  local_80 = 0;
  if (*(long *)(lVar2 + 0xd0) == 0) {
    if (((*(byte *)(lVar2 + 0x11) >> 3 & 1) == 0) ||
       (iVar1 = FUN_00381710(param_1,0x25,0,&local_4), 0 < iVar1)) goto LAB_00388ccc;
  }
  else {
    FUN_003ccbb0(&local_80,"ivlen",&local_28);
    iVar1 = FUN_0039f0e0(*param_1,param_1[0x15],&local_80);
    if (iVar1 < 1) {
      if (iVar1 == -1) goto LAB_00388ccc;
    }
    else {
      iVar1 = FUN_003cb1f8(&local_80);
      if ((iVar1 == 0) || (iVar1 = thunk_FUN_003cb238(&local_80,&local_4), iVar1 != 0)) {
LAB_00388ccc:
        *(int *)((long)param_1 + 0x6c) = local_4;
        return local_4;
      }
    }
  }
  return -1;
}


// ===== 00388d00  FUN_00388d00 =====

undefined8 FUN_00388d00(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
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
  undefined8 *local_38;
  
  if (param_2 == 0) {
    return 0;
  }
  local_38 = param_1 + 3;
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
  FUN_003cdc58(&local_90,&DAT_001d9fca,&local_38,0x10);
  iVar3 = FUN_0039f0e0(*param_1,param_1[0x15],&local_90);
  puVar2 = local_38;
  uVar4 = FUN_00388c08(param_1);
  if (uVar4 < 0x11) {
    puVar1 = (undefined8 *)0x0;
    if (iVar3 != 0) {
      puVar1 = puVar2;
    }
    uVar5 = FUN_0039c668(param_2,puVar1,uVar4);
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_003c4750("assertion failed: j <= sizeof(c->iv)","crypto/evp/evp_lib.c",0x4a);
}


// ===== 00388dd4  FUN_00388dd4 =====

undefined8 * FUN_00388dd4(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
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
  undefined8 *local_8;
  
  local_8 = param_1 + 3;
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
  FUN_003cdc58(&local_70,&DAT_001d9fca,&local_8,0x10);
  iVar2 = FUN_0039f0e0(*param_1,param_1[0x15],&local_70);
  puVar1 = (undefined8 *)0x0;
  if (iVar2 != 0) {
    puVar1 = local_8;
  }
  return puVar1;
}


// ===== 00388e44  FUN_00388e44 =====

undefined8 FUN_00388e44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


// ===== 00388e4c  FUN_00388e4c =====

uint FUN_00388e4c(long param_1)

{
  return *(uint *)(param_1 + 0x10) & 0xf0007;
}


// ===== 00388e5c  FUN_00388e5c =====

void FUN_00388e5c(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  if (*(long *)(param_1 + 0x1e) != 0) {
    FUN_00383528(*(long *)(param_1 + 0x1e),param_1[0x18],0,param_2);
    return;
  }
  if (*(long *)(param_1 + 0x1a) != 0) {
    FUN_00383528(0,0,*(long *)(param_1 + 0x1a),param_2);
    return;
  }
  uVar1 = FUN_003dce44(*param_1);
  FUN_00383528(0,0,uVar1,param_2);
  return;
}


// ===== 00388ee4  FUN_00388ee4 =====

undefined8 FUN_00388ee4(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    uVar1 = FUN_0039c8f4(param_2,*(undefined4 *)(param_3 + 0x14),param_3,
                         *(undefined4 *)(param_3 + 0x10));
    return uVar1;
  }
  return 0;
}


// ===== 00388f04  FUN_00388f04 =====

ulong FUN_00388f04(undefined8 param_1,long param_2,void *param_3)

{
  uint uVar1;
  ulong __n;
  undefined1 auStack_40 [16];
  undefined1 auStack_18 [8];
  
  __n = 0;
  if (param_2 != 0) {
    if (param_3 != (void *)0x0) {
      uVar1 = FUN_0039c944(param_2,auStack_18,0,0x10);
      if ((int)uVar1 < 1) {
        __n = 0xffffffff;
      }
      else {
        __n = (ulong)uVar1;
        FUN_0039c944(param_2,auStack_18,auStack_40,__n);
        memcpy(param_3,auStack_40,__n);
        *(uint *)((long)param_3 + 0x10) = uVar1;
      }
    }
  }
  return __n;
}


// ===== 00388f94  FUN_00388f94 =====

int FUN_00388f94(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  iVar2 = *param_1;
  if (iVar2 < 0x28a) {
    if (iVar2 < 0x62) {
      if (iVar2 < 0x25) {
        if (iVar2 == 5) {
          return 5;
        }
        if (iVar2 == 0x1e) {
          return 0x1e;
        }
      }
      else {
        if (iVar2 == 0x25) {
          return 0x25;
        }
        if (iVar2 == 0x3d) {
          return 0x1e;
        }
        if (iVar2 == 0x61) {
          return 5;
        }
      }
    }
    else if (iVar2 < 0x1a5) {
      if (iVar2 == 0x62) {
        return 0x25;
      }
      if (iVar2 == 0xa6) {
        return 0x25;
      }
    }
    else {
      if (iVar2 == 0x1a5) {
        return 0x1a5;
      }
      if (iVar2 == 0x1a9) {
        return 0x1a9;
      }
      if (iVar2 == 0x1ad) {
        return 0x1ad;
      }
    }
  }
  else if (iVar2 < 0x28f) {
    if (iVar2 < 0x28c) {
      if (iVar2 == 0x28a) {
        return 0x1a5;
      }
      if (iVar2 == 0x28b) {
        return 0x1a9;
      }
    }
    else {
      if (iVar2 == 0x28c) {
        return 0x1ad;
      }
      if (iVar2 == 0x28d) {
        return 0x1a5;
      }
      if (iVar2 == 0x28e) {
        return 0x1a9;
      }
    }
  }
  else {
    if (iVar2 - 0x290U < 2) {
      return 0x1e;
    }
    if (iVar2 - 0x292U < 2) {
      return 0x1e;
    }
    if (iVar2 == 0x28f) {
      return 0x1ad;
    }
  }
  uVar3 = FUN_003dcce8(iVar2);
  lVar4 = FUN_003ddec0();
  iVar1 = 0;
  if (lVar4 != 0) {
    iVar1 = iVar2;
  }
  FUN_0039a0f4(uVar3);
  return iVar1;
}


// ===== 003890fc  FUN_003890fc =====

undefined4 FUN_003890fc(undefined4 *param_1)

{
  return *param_1;
}


// ===== 00389104  FUN_00389104 =====

bool FUN_00389104(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined1 auStack_1f8 [40];
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  uint local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  int local_44;
  undefined8 local_40;
  undefined8 local_38;
  
  local_40 = 0;
  local_38 = 0;
  local_44 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  local_64 = 0;
  FUN_003ccbb0(auStack_1f8,"blocksize",&local_58);
  FUN_003ccbb0(&local_220,"ivlen",&uStack_50);
  local_1b0 = local_200;
  uStack_1c8 = uStack_218;
  local_1d0 = local_220;
  uStack_1b8 = uStack_208;
  uStack_1c0 = uStack_210;
  FUN_003ccbb0(&local_220,"keylen",&local_60);
  local_188 = local_200;
  uStack_1a0 = uStack_218;
  local_1a8 = local_220;
  uStack_190 = uStack_208;
  local_198 = uStack_210;
  FUN_003cbb64(&local_220,&DAT_001f5635,&local_64);
  local_160 = local_200;
  uStack_178 = uStack_218;
  local_180 = local_220;
  uStack_168 = uStack_208;
  local_170 = uStack_210;
  FUN_003cb668(&local_220,&DAT_001e6a66,(long)&local_38 + 4);
  local_138 = local_200;
  uStack_150 = uStack_218;
  local_158 = local_220;
  uStack_140 = uStack_208;
  uStack_148 = uStack_210;
  FUN_003cb668(&local_220,"custom-iv",&local_38);
  local_110 = local_200;
  uStack_128 = uStack_218;
  local_130 = local_220;
  uStack_118 = uStack_208;
  local_120 = uStack_210;
  FUN_003cb668(&local_220,&DAT_001e2a7c,(long)&local_40 + 4);
  local_e8 = local_200;
  uStack_100 = uStack_218;
  local_108 = local_220;
  uStack_f0 = uStack_208;
  uStack_f8 = uStack_210;
  FUN_003cb668(&local_220,"tls-multi",&local_40);
  local_c0 = local_200;
  uStack_d8 = uStack_218;
  local_e0 = local_220;
  uStack_c8 = uStack_208;
  uStack_d0 = uStack_210;
  FUN_003cb668(&local_220,"has-randkey",&local_44);
  local_98 = local_200;
  uStack_b0 = uStack_218;
  local_b8 = local_220;
  uStack_a0 = uStack_208;
  uStack_a8 = uStack_210;
  FUN_003cdfcc(&local_220);
  uStack_88 = uStack_218;
  local_90 = local_220;
  uStack_78 = uStack_208;
  uStack_80 = uStack_210;
  local_70 = local_200;
  iVar1 = FUN_0039f07c(param_1,auStack_1f8);
  if (0 < iVar1) {
    *(int *)(param_1 + 8) = (int)local_60;
    *(int *)(param_1 + 0xc) = (int)uStack_50;
    uVar4 = (ulong)local_64;
    *(int *)(param_1 + 4) = (int)local_58;
    *(ulong *)(param_1 + 0x10) = uVar4;
    if (local_38._4_4_ != 0) {
      uVar4 = uVar4 | 0x200000;
      *(ulong *)(param_1 + 0x10) = uVar4;
    }
    if ((int)local_38 != 0) {
      uVar4 = uVar4 | 0x10;
      *(ulong *)(param_1 + 0x10) = uVar4;
    }
    if (local_40._4_4_ != 0) {
      uVar4 = uVar4 | 0x4000;
      *(ulong *)(param_1 + 0x10) = uVar4;
    }
    if ((int)local_40 != 0) {
      uVar4 = uVar4 | 0x400000;
      *(ulong *)(param_1 + 0x10) = uVar4;
    }
    if (*(long *)(param_1 + 0xb0) != 0) {
      uVar4 = uVar4 | 0x100000;
      *(ulong *)(param_1 + 0x10) = uVar4;
    }
    if (local_44 != 0) {
      *(ulong *)(param_1 + 0x10) = uVar4 | 0x200;
    }
    uVar2 = FUN_00381f34(param_1);
    lVar3 = FUN_003cb19c(uVar2,"alg_id_param");
    if (lVar3 != 0) {
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 0x1000000;
    }
  }
  return 0 < iVar1;
}


// ===== 00389364  FUN_00389364 =====

undefined4 FUN_00389364(long param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


// ===== 0038936c  FUN_0038936c =====

undefined4 FUN_0038936c(long *param_1)

{
  return *(undefined4 *)(*param_1 + 4);
}


// ===== 00389378  FUN_00389378 =====

undefined4 FUN_00389378(long param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}


// ===== 00389380  FUN_00389380 =====

ulong FUN_00389380(long *param_1,undefined8 param_2,long param_3,uint param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 local_18;
  
  lVar5 = *param_1;
  if (*(long *)(lVar5 + 0x78) == 0) {
                    /* WARNING: Could not recover jumptable at 0x003893ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(lVar5 + 0x28))(param_1,param_2,param_3,param_4);
    return uVar3;
  }
  iVar2 = *(int *)(lVar5 + 4);
  lVar4 = (long)iVar2;
  local_18 = 0;
  if (*(code **)(lVar5 + 0xb0) != (code *)0x0) {
    lVar1 = 0;
    if (iVar2 != 1) {
      lVar1 = lVar4;
    }
    iVar2 = (**(code **)(lVar5 + 0xb0))(param_1[0x15],param_2,&local_18,lVar1 + (ulong)param_4);
    if (iVar2 == 0) {
      local_18._0_4_ = 0xffffffff;
    }
    return (ulong)(uint)local_18;
  }
  if (param_3 != 0) {
    lVar1 = 0;
    if (iVar2 != 1) {
      lVar1 = lVar4;
    }
    uVar3 = (**(code **)(lVar5 + 0xa0))(param_1[0x15],param_2,&local_18,lVar1 + (ulong)param_4);
    return uVar3;
  }
  lVar1 = 0;
  if (iVar2 != 1) {
    lVar1 = lVar4;
  }
  uVar3 = (**(code **)(lVar5 + 0xa8))(param_1[0x15],param_2,&local_18,lVar1);
  return uVar3;
}


// ===== 00389440  FUN_00389440 =====

long * FUN_00389440(long *param_1)

{
  if (param_1 != (long *)0x0) {
    param_1 = (long *)*param_1;
  }
  return param_1;
}


// ===== 0038944c  FUN_0038944c =====

long * FUN_0038944c(long *param_1)

{
  if (param_1 != (long *)0x0) {
    param_1 = (long *)*param_1;
  }
  return param_1;
}


// ===== 00389458  FUN_00389458 =====

long * FUN_00389458(long *param_1)

{
  int iVar1;
  long lVar2;
  
  if (param_1 != (long *)0x0) {
    lVar2 = *param_1;
    iVar1 = FUN_00382388(lVar2);
    param_1 = (long *)0;
    if (iVar1 != 0) {
      param_1 = (long *)lVar2;
    }
  }
  return param_1;
}


// ===== 00389488  FUN_00389488 =====

undefined4 FUN_00389488(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}


// ===== 00389490  FUN_00389490 =====

undefined8 FUN_00389490(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}


// ===== 00389498  FUN_00389498 =====

void FUN_00389498(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x60) = param_2;
  return;
}


// ===== 003894a0  FUN_003894a0 =====

undefined8 FUN_003894a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}


// ===== 003894a8  FUN_003894a8 =====

undefined8 FUN_003894a8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_2;
  return uVar1;
}


// ===== 003894b8  FUN_003894b8 =====

undefined4 FUN_003894b8(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}


// ===== 003894c0  FUN_003894c0 =====

undefined4 FUN_003894c0(undefined8 *param_1)

{
  int iVar1;
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
  undefined8 local_8;
  
  local_8 = 0;
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
  FUN_003ccbb0(&local_70,"taglen",&local_8);
  iVar1 = FUN_0039f0e0(*param_1,param_1[0x15],&local_70);
  if (iVar1 != 1) {
    local_8._0_4_ = 0;
  }
  return (undefined4)local_8;
}


// ===== 00389528  FUN_00389528 =====

undefined8 * FUN_00389528(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
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
  undefined8 *local_8;
  
  local_8 = param_1 + 5;
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
  FUN_003cdc58(&local_70,"updated-iv",&local_8,0x10);
  iVar2 = FUN_0039f0e0(*param_1,param_1[0x15],&local_70);
  puVar1 = (undefined8 *)0x0;
  if (iVar2 != 0) {
    puVar1 = local_8;
  }
  return puVar1;
}


// ===== 00389598  FUN_00389598 =====

undefined8 * FUN_00389598(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
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
  undefined8 *local_8;
  
  local_8 = param_1 + 5;
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
  FUN_003cdc58(&local_70,"updated-iv",&local_8,0x10);
  iVar2 = FUN_0039f0e0(*param_1,param_1[0x15],&local_70);
  puVar1 = (undefined8 *)0x0;
  if (iVar2 != 0) {
    puVar1 = local_8;
  }
  return puVar1;
}


// ===== 00389608  FUN_00389608 =====

bool FUN_00389608(undefined8 *param_1)

{
  int iVar1;
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
  FUN_003cd924(&local_70,"updated-iv");
  iVar1 = FUN_0039f0e0(*param_1,param_1[0x15],&local_70);
  return 0 < iVar1;
}


// ===== 00389664  FUN_00389664 =====

bool FUN_00389664(undefined8 *param_1)

{
  int iVar1;
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
  FUN_003cd924(&local_70,&DAT_001d9fca);
  iVar1 = FUN_0039f0e0(*param_1,param_1[0x15],&local_70);
  return 0 < iVar1;
}


// ===== 003896c0  FUN_003896c0 =====

long FUN_003896c0(long param_1)

{
  return param_1 + 0x38;
}


// ===== 003896c8  FUN_003896c8 =====

undefined4 FUN_003896c8(undefined8 *param_1)

{
  int iVar1;
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
  undefined4 local_4;
  
  local_4 = *(undefined4 *)(param_1 + 0xb);
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
  FUN_003cbb64(&local_70,&DAT_001c547d,&local_4);
  iVar1 = FUN_0039f0e0(*param_1,param_1[0x15],&local_70);
  if (iVar1 == 0) {
    local_4 = 0xffffffff;
  }
  return local_4;
}


// ===== 00389734  FUN_00389734 =====

bool FUN_00389734(undefined8 *param_1,undefined4 param_2)

{
  int iVar1;
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
  undefined4 local_4;
  
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
  local_4 = param_2;
  FUN_003cbb64(&local_70,&DAT_001c547d,&local_4);
  iVar1 = FUN_0039f148(*param_1,param_1[0x15],&local_70);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0xb) = local_4;
  }
  return iVar1 != 0;
}


// ===== 003897a4  FUN_003897a4 =====

undefined4 FUN_003897a4(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


// ===== 003897ac  FUN_003897ac =====

int FUN_003897ac(long *param_1)

{
  int iVar1;
  long *plVar2;
  int local_78 [2];
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
  
  plVar2 = param_1 + 0xd;
  if ((0 < (int)*plVar2) || (*(long *)(*param_1 + 0x78) == 0)) {
    return (int)*plVar2;
  }
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
  FUN_003ccbb0(&local_70,"keylen",local_78);
  iVar1 = FUN_0039f0e0(*param_1,param_1[0x15],&local_70);
  if ((0 < iVar1) && (iVar1 = thunk_FUN_003cb238(&local_70,plVar2), iVar1 != 0)) {
    *(int *)plVar2 = local_78[0];
    return local_78[0];
  }
  return -1;
}


// ===== 00389874  FUN_00389874 =====

undefined4 FUN_00389874(undefined8 *param_1)

{
  return *(undefined4 *)*param_1;
}


// ===== 00389880  FUN_00389880 =====

long FUN_00389880(undefined4 *param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x1a) != 0) {
    return *(long *)(param_1 + 0x1a);
  }
  lVar1 = FUN_003dce44(*param_1);
  return lVar1;
}


// ===== 00389898  FUN_00389898 =====

undefined4 FUN_00389898(long param_1)

{
  return *(undefined4 *)(param_1 + 0x60);
}


// ===== 003898a0  FUN_003898a0 =====

long FUN_003898a0(undefined4 *param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x1c) != 0) {
    return *(long *)(param_1 + 0x1c);
  }
  lVar1 = FUN_003dce60(*param_1);
  return lVar1;
}


// ===== 003898b8  FUN_003898b8 =====

undefined8 FUN_003898b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x78) != 0) {
    uVar1 = FUN_00383588(*(long *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x60),param_2,param_3);
    return uVar1;
  }
  return 1;
}


// ===== 003898dc  FUN_003898dc =====

undefined8 FUN_003898dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}


// ===== 003898e4  FUN_003898e4 =====

void FUN_003898e4(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  if (*(long *)(param_1 + 0x1c) != 0) {
    FUN_00383528(*(long *)(param_1 + 0x1c),param_1[0x16],0,param_2);
    return;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_00383528(0,0,*(long *)(param_1 + 0x18),param_2);
    return;
  }
  uVar1 = FUN_003dce44(*param_1);
  FUN_00383528(0,0,uVar1,param_2);
  return;
}


// ===== 0038996c  FUN_0038996c =====

long FUN_0038996c(undefined4 *param_1)

{
  long lVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    return *(long *)(param_1 + 0x18);
  }
  lVar1 = FUN_003dce44(*param_1);
  return lVar1;
}


// ===== 00389990  FUN_00389990 =====

undefined4 FUN_00389990(long param_1)

{
  return *(undefined4 *)(param_1 + 0x58);
}


// ===== 00389998  FUN_00389998 =====

long FUN_00389998(undefined4 *param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x1a) != 0) {
    return *(long *)(param_1 + 0x1a);
  }
  lVar1 = FUN_003dce60(*param_1);
  return lVar1;
}


// ===== 003899b0  FUN_003899b0 =====

undefined4 FUN_003899b0(undefined4 *param_1)

{
  return *param_1;
}


// ===== 003899b8  FUN_003899b8 =====

undefined8 FUN_003899b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x70) != 0) {
    uVar1 = FUN_00383588(*(long *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x58),param_2,param_3);
    return uVar1;
  }
  return 1;
}


// ===== 003899dc  FUN_003899dc =====

undefined8 FUN_003899dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}


// ===== 003899e4  FUN_003899e4 =====

undefined4 FUN_003899e4(long param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


// ===== 003899ec  FUN_003899ec =====

undefined4 FUN_003899ec(long param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x48);
  }
  FUN_00379868();
  FUN_0037995c("crypto/evp/evp_lib.c",0x32b,"EVP_MD_get_block_size");
  FUN_00379a5c(6,0x9f,0);
  return 0xffffffff;
}


// ===== 00389a38  FUN_00389a38 =====

undefined4 FUN_00389a38(long param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 8);
  }
  FUN_00379868();
  FUN_0037995c("crypto/evp/evp_lib.c",0x334,"EVP_MD_get_size");
  FUN_00379a5c(6,0x9f,0);
  return 0xffffffff;
}


// ===== 00389a84  FUN_00389a84 =====

undefined8 FUN_00389a84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


// ===== 00389a8c  FUN_00389a8c =====

void FUN_00389a8c(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_0039eb00();
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[6] = 2;
  }
  return;
}


// ===== 00389ac0  FUN_00389ac0 =====

undefined8 * FUN_00389ac0(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
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
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  if (param_1[0xe] != 0) {
    return (undefined8 *)0x0;
  }
  uVar16 = *param_1;
  puVar2 = (undefined8 *)FUN_0039eb00();
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = uVar16;
    uVar1 = *(undefined4 *)(puVar2 + 0xf);
    *(undefined4 *)(puVar2 + 3) = 2;
    uVar16 = param_1[0xe];
    uVar5 = param_1[0x11];
    uVar4 = param_1[0x10];
    uVar7 = param_1[0x13];
    uVar6 = param_1[0x12];
    uVar9 = param_1[0x15];
    uVar8 = param_1[0x14];
    puVar2[0xf] = param_1[0xf];
    puVar2[0xe] = uVar16;
    uVar11 = param_1[3];
    uVar10 = param_1[2];
    uVar3 = param_1[5];
    uVar16 = param_1[4];
    uVar12 = *param_1;
    puVar2[1] = param_1[1];
    *puVar2 = uVar12;
    puVar2[3] = uVar11;
    puVar2[2] = uVar10;
    puVar2[5] = uVar3;
    puVar2[4] = uVar16;
    uVar11 = param_1[0xb];
    uVar10 = param_1[10];
    uVar3 = param_1[0xd];
    uVar16 = param_1[0xc];
    uVar13 = param_1[7];
    uVar12 = param_1[6];
    uVar15 = param_1[9];
    uVar14 = param_1[8];
    puVar2[0x13] = uVar7;
    puVar2[0x12] = uVar6;
    puVar2[0x15] = uVar9;
    puVar2[0x14] = uVar8;
    puVar2[0x11] = uVar5;
    puVar2[0x10] = uVar4;
    puVar2[0xb] = uVar11;
    puVar2[10] = uVar10;
    puVar2[0xd] = uVar3;
    puVar2[0xc] = uVar16;
    puVar2[7] = uVar13;
    puVar2[6] = uVar12;
    puVar2[9] = uVar15;
    puVar2[8] = uVar14;
    uVar8 = param_1[0x19];
    uVar7 = param_1[0x18];
    uVar4 = param_1[0x1b];
    uVar3 = param_1[0x1a];
    uVar16 = param_1[0x1c];
    uVar6 = param_1[0x17];
    uVar5 = param_1[0x16];
    *(undefined4 *)(puVar2 + 0xf) = uVar1;
    puVar2[0x1c] = uVar16;
    puVar2[0x19] = uVar8;
    puVar2[0x18] = uVar7;
    puVar2[0x1b] = uVar4;
    puVar2[0x1a] = uVar3;
    puVar2[0x17] = uVar6;
    puVar2[0x16] = uVar5;
    *(undefined4 *)(puVar2 + 3) = 2;
  }
  return puVar2;
}


// ===== 00389b64  FUN_00389b64 =====

void FUN_00389b64(long param_1)

{
  FUN_003c86b4(*(undefined8 *)(param_1 + 0x60),"crypto/evp/evp_lib.c",0x362);
  FUN_003d27b0(*(undefined8 *)(param_1 + 0x70));
  FUN_003c86b4(param_1,"crypto/evp/evp_lib.c",0x365);
  return;
}


// ===== 00389bac  FUN_00389bac =====

void FUN_00389bac(long param_1)

{
  if ((param_1 != 0) && (*(int *)(param_1 + 0x18) == 2)) {
    FUN_003c86b4(*(undefined8 *)(param_1 + 0x60),"crypto/evp/evp_lib.c",0x362);
    FUN_003d27b0(*(undefined8 *)(param_1 + 0x70));
    FUN_003c86b4(param_1,"crypto/evp/evp_lib.c",0x365);
    return;
  }
  return;
}


// ===== 00389c0c  FUN_00389c0c =====

undefined8 FUN_00389c0c(long param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x48) != 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x48) = param_2;
  return 1;
}


// ===== 00389c28  FUN_00389c28 =====

undefined8 FUN_00389c28(long param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 8) != 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 8) = param_2;
  return 1;
}


// ===== 00389c44  FUN_00389c44 =====

undefined8 FUN_00389c44(long param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x4c) != 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x4c) = param_2;
  return 1;
}


// ===== 00389c60  FUN_00389c60 =====

undefined8 FUN_00389c60(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return 1;
}


// ===== 00389c7c  FUN_00389c7c =====

undefined8 FUN_00389c7c(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return 1;
}


// ===== 00389c98  FUN_00389c98 =====

undefined8 FUN_00389c98(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x28) != 0) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return 1;
}


// ===== 00389cb4  FUN_00389cb4 =====

undefined8 FUN_00389cb4(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x30) = param_2;
  return 1;
}


// ===== 00389cd0  FUN_00389cd0 =====

undefined8 FUN_00389cd0(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x38) != 0) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x38) = param_2;
  return 1;
}


// ===== 00389cec  FUN_00389cec =====

undefined8 FUN_00389cec(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x40) != 0) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x40) = param_2;
  return 1;
}


// ===== 00389d08  FUN_00389d08 =====

undefined8 FUN_00389d08(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x50) != 0) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x50) = param_2;
  return 1;
}


// ===== 00389d24  FUN_00389d24 =====

undefined4 FUN_00389d24(long param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}


// ===== 00389d2c  FUN_00389d2c =====

undefined4 FUN_00389d2c(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


// ===== 00389d34  FUN_00389d34 =====

undefined4 FUN_00389d34(long param_1)

{
  return *(undefined4 *)(param_1 + 0x4c);
}


// ===== 00389d3c  FUN_00389d3c =====

undefined8 FUN_00389d3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


// ===== 00389d44  FUN_00389d44 =====

undefined8 FUN_00389d44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


// ===== 00389d4c  FUN_00389d4c =====

undefined8 FUN_00389d4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}


// ===== 00389d54  FUN_00389d54 =====

undefined8 FUN_00389d54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}


// ===== 00389d5c  FUN_00389d5c =====

undefined8 FUN_00389d5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}


// ===== 00389d64  FUN_00389d64 =====

undefined8 FUN_00389d64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}


// ===== 00389d6c  FUN_00389d6c =====

undefined8 FUN_00389d6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}


// ===== 00389d74  FUN_00389d74 =====

long * FUN_00389d74(long *param_1)

{
  if (param_1 != (long *)0x0) {
    param_1 = (long *)*param_1;
  }
  return param_1;
}


// ===== 00389d80  FUN_00389d80 =====

long * FUN_00389d80(long *param_1)

{
  if (param_1 != (long *)0x0) {
    param_1 = (long *)*param_1;
  }
  return param_1;
}


// ===== 00389d8c  FUN_00389d8c =====

long * FUN_00389d8c(long *param_1)

{
  int iVar1;
  long *plVar2;
  
  if (param_1 != (long *)0x0) {
    plVar2 = (long *)*param_1;
    if (plVar2 == (long *)0x0) {
      param_1 = (long *)0x0;
    }
    else {
      iVar1 = FUN_0039e4f4(plVar2);
      param_1 = (long *)0x0;
      if (iVar1 != 0) {
        param_1 = plVar2;
      }
    }
  }
  return param_1;
}


// ===== 00389dc8  FUN_00389dc8 =====

undefined8 FUN_00389dc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}


// ===== 00389dd0  FUN_00389dd0 =====

void FUN_00389dd0(long param_1,long param_2)

{
  if ((*(byte *)(param_1 + 0x19) >> 2 & 1) == 0) {
    FUN_003b1f78(*(undefined8 *)(param_1 + 0x28));
  }
  *(long *)(param_1 + 0x28) = param_2;
  *(ulong *)(param_1 + 0x18) =
       *(ulong *)(param_1 + 0x18) & 0xfffffffffffff800 |
       *(ulong *)(param_1 + 0x18) & 0x3ff | (ulong)(param_2 != 0) << 10;
  return;
}


// ===== 00389e18  FUN_00389e18 =====

uint FUN_00389e18(long param_1,uint param_2)

{
  return *(uint *)(param_1 + 0x18) & param_2;
}


// ===== 00389e24  FUN_00389e24 =====

void FUN_00389e24(long param_1,int param_2)

{
  *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) | (long)param_2;
  return;
}


// ===== 00389e38  FUN_00389e38 =====

void FUN_00389e38(long param_1,uint param_2)

{
  *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) & (long)(int)~param_2;
  return;
}


// ===== 00389e50  FUN_00389e50 =====

undefined8 FUN_00389e50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


// ===== 00389e58  FUN_00389e58 =====

undefined8 FUN_00389e58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}


// ===== 00389e60  FUN_00389e60 =====

void FUN_00389e60(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x30) = param_2;
  return;
}


// ===== 00389e68  FUN_00389e68 =====

void FUN_00389e68(long param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
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
  undefined4 local_4;
  
  uVar1 = *(ulong *)(param_1 + 0x70);
  uVar2 = uVar1 | (long)param_2;
  *(ulong *)(param_1 + 0x70) = uVar2;
  if ((((uint)uVar2 ^ (uint)uVar1) >> 0xd & 1) != 0) {
    local_4 = 1;
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
    FUN_003cbb64(&local_70,"use-bits",&local_4);
    FUN_00381de0(param_1,&local_70);
  }
  return;
}


// ===== 00389ee0  FUN_00389ee0 =====

void FUN_00389ee0(long param_1,uint param_2)

{
  ulong uVar1;
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
  undefined4 local_4;
  
  uVar1 = *(ulong *)(param_1 + 0x70);
  *(ulong *)(param_1 + 0x70) = uVar1 & (long)(int)~param_2;
  if (((param_2 & (uint)uVar1) >> 0xd & 1) != 0) {
    local_4 = 0;
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
    FUN_003cbb64(&local_70,"use-bits",&local_4);
    FUN_00381de0(param_1,&local_70);
  }
  return;
}


// ===== 00389f54  FUN_00389f54 =====

uint FUN_00389f54(long param_1,uint param_2)

{
  return *(uint *)(param_1 + 0x70) & param_2;
}


// ===== 00389f60  FUN_00389f60 =====

undefined8 FUN_00389f60(int *param_1,long param_2)

{
  undefined8 uVar1;
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
  if (param_1 != (int *)0x0) {
    if ((*param_1 == 2) || (*param_1 == 4)) {
      if (param_2 != 0) {
        FUN_003cd8cc(&local_70,"group",param_2,0);
        uVar1 = FUN_003b25f8(param_1,&local_70);
        return uVar1;
      }
      return 0xffffffff;
    }
  }
  FUN_00379868();
  FUN_0037995c("crypto/evp/evp_lib.c",0x472,"EVP_PKEY_CTX_set_group_name");
  FUN_00379a5c(6,0x93,0);
  return 0xfffffffe;
}


// ===== 0038a028  FUN_0038a028 =====

undefined4 FUN_0038a028(int *param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
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
  if ((param_1 != (int *)0x0) && ((*param_1 == 2 || (*param_1 == 4)))) {
    uVar2 = 0xffffffff;
    if (param_2 != 0) {
      FUN_003cd8cc(&local_70,"group");
      iVar1 = FUN_003b2794(param_1,&local_70);
      uVar2 = 1;
      if (iVar1 == 0) {
        uVar2 = 0xffffffff;
      }
    }
    return uVar2;
  }
  FUN_00379868();
  FUN_0037995c("crypto/evp/evp_lib.c",0x486,"EVP_PKEY_CTX_get_group_name");
  FUN_00379a5c(6,0x93,0);
  return 0xfffffffe;
}


// ===== 0038a0f0  FUN_0038a0f0 =====

/* WARNING: Removing unreachable block (ram,0x0038a2a8) */
/* WARNING: Removing unreachable block (ram,0x0038a258) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff28 : 0x0038a264 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_0038a0f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_38;
  
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  iVar1 = FUN_003cab04(param_3,&DAT_001f9542);
  if (iVar1 == 0) {
    local_60 = param_4;
    FUN_003ccbb0(&local_b0,&DAT_001c97b2,&local_60);
  }
  else {
    iVar1 = FUN_003cab04(param_3,&DAT_001ecbe7);
    if (iVar1 == 0) {
      FUN_003cd8cc(&local_b0,"group",param_4,0);
    }
    else {
      iVar1 = FUN_003cab04(param_3,"ED25519");
      if ((((iVar1 != 0) && (iVar1 = FUN_003cab04(param_3,"X25519"), iVar1 != 0)) &&
          (iVar1 = FUN_003cab04(param_3,"ED448"), iVar1 != 0)) &&
         ((iVar1 = FUN_003cab04(param_3,&DAT_001b9d9a), iVar1 != 0 &&
          (iVar1 = FUN_003cab04(param_3,&DAT_001c9780), iVar1 != 0)))) {
        FUN_00379868();
        FUN_0037995c("crypto/evp/evp_lib.c",0x4c4,"EVP_PKEY_Q_keygen");
        FUN_00379a5c(6,0x80106,0);
        return 0;
      }
    }
  }
  local_38 = 0;
  lVar2 = FUN_003b19d4(param_1,param_3,param_2);
  if (((lVar2 != 0) && (iVar1 = FUN_003b0efc(lVar2), 0 < iVar1)) &&
     (iVar1 = FUN_003b25f8(lVar2,&local_b0), iVar1 != 0)) {
    FUN_003b0f04(lVar2,&local_38);
  }
  FUN_003b1f78(lVar2);
  return local_38;
}


// ===== 0038a334  FUN_0038a334 =====

undefined * FUN_0038a334(void)

{
  return &DAT_00765080;
}


// ===== 0038a340  FUN_0038a340 =====

void FUN_0038a340(void)

{
  FUN_0038a93c();
  return;
}


// ===== 0038a34c  FUN_0038a34c =====

void FUN_0038a34c(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_00765080);
  return;
}


// ===== 0038a358  FUN_0038a358 =====

void FUN_0038a358(void)

{
  FUN_0038ee84(4);
  return;
}


// ===== 0038a360  thunk_FUN_0038eddc =====

void thunk_FUN_0038eddc(long param_1)

{
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = (uint)*(undefined8 *)(param_1 + 0x10);
    if ((uVar1 >> 4 & 1) == 0) {
      FUN_003c86b4(*(undefined8 *)(param_1 + 8),"crypto/asn1/asn1_lib.c",0x16f);
    }
    if ((uVar1 >> 7 & 1) == 0) {
      FUN_003c86b4(param_1,"crypto/asn1/asn1_lib.c",0x171);
      return;
    }
  }
  return;
}


// ===== 0038a364  FUN_0038a364 =====

undefined * FUN_0038a364(void)

{
  return &DAT_007650b8;
}


// ===== 0038a370  FUN_0038a370 =====

void FUN_0038a370(void)

{
  FUN_0038a93c();
  return;
}


// ===== 0038a37c  FUN_0038a37c =====

void FUN_0038a37c(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_007650b8);
  return;
}


// ===== 0038a388  FUN_0038a388 =====

void FUN_0038a388(void)

{
  FUN_0038ee84(2);
  return;
}


// ===== 0038a390  thunk_FUN_0038eddc =====

void thunk_FUN_0038eddc(long param_1)

{
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = (uint)*(undefined8 *)(param_1 + 0x10);
    if ((uVar1 >> 4 & 1) == 0) {
      FUN_003c86b4(*(undefined8 *)(param_1 + 8),"crypto/asn1/asn1_lib.c",0x16f);
    }
    if ((uVar1 >> 7 & 1) == 0) {
      FUN_003c86b4(param_1,"crypto/asn1/asn1_lib.c",0x171);
      return;
    }
  }
  return;
}


// ===== 0038a394  FUN_0038a394 =====

undefined * FUN_0038a394(void)

{
  return &DAT_007650f0;
}


// ===== 0038a3a0  FUN_0038a3a0 =====

void FUN_0038a3a0(void)

{
  FUN_0038a93c();
  return;
}


// ===== 0038a3ac  FUN_0038a3ac =====

void FUN_0038a3ac(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_007650f0);
  return;
}


// ===== 0038a3b8  FUN_0038a3b8 =====

void FUN_0038a3b8(void)

{
  FUN_0038ee84(10);
  return;
}


// ===== 0038a3c0  thunk_FUN_0038eddc =====

void thunk_FUN_0038eddc(long param_1)

{
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = (uint)*(undefined8 *)(param_1 + 0x10);
    if ((uVar1 >> 4 & 1) == 0) {
      FUN_003c86b4(*(undefined8 *)(param_1 + 8),"crypto/asn1/asn1_lib.c",0x16f);
    }
    if ((uVar1 >> 7 & 1) == 0) {
      FUN_003c86b4(param_1,"crypto/asn1/asn1_lib.c",0x171);
      return;
    }
  }
  return;
}


// ===== 0038a3c4  FUN_0038a3c4 =====

undefined * FUN_0038a3c4(void)

{
  return &DAT_00765128;
}


// ===== 0038a3d0  FUN_0038a3d0 =====

void FUN_0038a3d0(void)

{
  FUN_0038a93c();
  return;
}


// ===== 0038a3dc  FUN_0038a3dc =====

void FUN_0038a3dc(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_00765128);
  return;
}


// ===== 0038a3e8  FUN_0038a3e8 =====

void FUN_0038a3e8(void)

{
  FUN_0038ee84(3);
  return;
}


// ===== 0038a3f0  thunk_FUN_0038eddc =====

void thunk_FUN_0038eddc(long param_1)

{
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = (uint)*(undefined8 *)(param_1 + 0x10);
    if ((uVar1 >> 4 & 1) == 0) {
      FUN_003c86b4(*(undefined8 *)(param_1 + 8),"crypto/asn1/asn1_lib.c",0x16f);
    }
    if ((uVar1 >> 7 & 1) == 0) {
      FUN_003c86b4(param_1,"crypto/asn1/asn1_lib.c",0x171);
      return;
    }
  }
  return;
}


// ===== 0038a3f4  FUN_0038a3f4 =====

undefined * FUN_0038a3f4(void)

{
  return &DAT_00765160;
}


// ===== 0038a400  FUN_0038a400 =====

void FUN_0038a400(void)

{
  FUN_0038a93c();
  return;
}


// ===== 0038a40c  FUN_0038a40c =====

void FUN_0038a40c(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_00765160);
  return;
}


// ===== 0038a418  FUN_0038a418 =====

void FUN_0038a418(void)

{
  FUN_0038ee84(0xc);
  return;
}


// ===== 0038a420  thunk_FUN_0038eddc =====

void thunk_FUN_0038eddc(long param_1)

{
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = (uint)*(undefined8 *)(param_1 + 0x10);
    if ((uVar1 >> 4 & 1) == 0) {
      FUN_003c86b4(*(undefined8 *)(param_1 + 8),"crypto/asn1/asn1_lib.c",0x16f);
    }
    if ((uVar1 >> 7 & 1) == 0) {
      FUN_003c86b4(param_1,"crypto/asn1/asn1_lib.c",0x171);
      return;
    }
  }
  return;
}


// ===== 0038a424  FUN_0038a424 =====

undefined * FUN_0038a424(void)

{
  return &DAT_00765198;
}


// ===== 0038a430  FUN_0038a430 =====

void FUN_0038a430(void)

{
  FUN_0038a93c();
  return;
}


// ===== 0038a43c  FUN_0038a43c =====

void FUN_0038a43c(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_00765198);
  return;
}


// ===== 0038a448  FUN_0038a448 =====

void FUN_0038a448(void)

{
  FUN_0038ee84(0x13);
  return;
}


// ===== 0038a450  thunk_FUN_0038eddc =====

void thunk_FUN_0038eddc(long param_1)

{
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = (uint)*(undefined8 *)(param_1 + 0x10);
    if ((uVar1 >> 4 & 1) == 0) {
      FUN_003c86b4(*(undefined8 *)(param_1 + 8),"crypto/asn1/asn1_lib.c",0x16f);
    }
    if ((uVar1 >> 7 & 1) == 0) {
      FUN_003c86b4(param_1,"crypto/asn1/asn1_lib.c",0x171);
      return;
    }
  }
  return;
}


// ===== 0038a454  FUN_0038a454 =====

undefined * FUN_0038a454(void)

{
  return &DAT_007651d0;
}


// ===== 0038a460  FUN_0038a460 =====

void FUN_0038a460(void)

{
  FUN_0038a93c();
  return;
}


// ===== 0038a46c  FUN_0038a46c =====

void FUN_0038a46c(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_007651d0);
  return;
}


// ===== 0038a478  FUN_0038a478 =====

void FUN_0038a478(void)

{
  FUN_0038ee84(0x14);
  return;
}


// ===== 0038a480  thunk_FUN_0038eddc =====

void thunk_FUN_0038eddc(long param_1)

{
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = (uint)*(undefined8 *)(param_1 + 0x10);
    if ((uVar1 >> 4 & 1) == 0) {
      FUN_003c86b4(*(undefined8 *)(param_1 + 8),"crypto/asn1/asn1_lib.c",0x16f);
    }
    if ((uVar1 >> 7 & 1) == 0) {
      FUN_003c86b4(param_1,"crypto/asn1/asn1_lib.c",0x171);
      return;
    }
  }
  return;
}


// ===== 0038a484  FUN_0038a484 =====

undefined * FUN_0038a484(void)

{
  return &DAT_00765208;
}


// ===== 0038a490  FUN_0038a490 =====

void FUN_0038a490(void)

{
  FUN_0038a93c();
  return;
}


// ===== 0038a49c  FUN_0038a49c =====

void FUN_0038a49c(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_00765208);
  return;
}


// ===== 0038a4a8  FUN_0038a4a8 =====

void FUN_0038a4a8(void)

{
  FUN_0038ee84(0x16);
  return;
}


// ===== 0038a4b0  thunk_FUN_0038eddc =====

void thunk_FUN_0038eddc(long param_1)

{
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = (uint)*(undefined8 *)(param_1 + 0x10);
    if ((uVar1 >> 4 & 1) == 0) {
      FUN_003c86b4(*(undefined8 *)(param_1 + 8),"crypto/asn1/asn1_lib.c",0x16f);
    }
    if ((uVar1 >> 7 & 1) == 0) {
      FUN_003c86b4(param_1,"crypto/asn1/asn1_lib.c",0x171);
      return;
    }
  }
  return;
}


// ===== 0038a4b4  FUN_0038a4b4 =====

undefined * FUN_0038a4b4(void)

{
  return &DAT_00765240;
}


// ===== 0038a4c0  FUN_0038a4c0 =====

void FUN_0038a4c0(void)

{
  FUN_0038a93c();
  return;
}


// ===== 0038a4cc  FUN_0038a4cc =====

void FUN_0038a4cc(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_00765240);
  return;
}


// ===== 0038a4d8  FUN_0038a4d8 =====

void FUN_0038a4d8(void)

{
  FUN_0038ee84(0x1b);
  return;
}


// ===== 0038a4e0  thunk_FUN_0038eddc =====

void thunk_FUN_0038eddc(long param_1)

{
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = (uint)*(undefined8 *)(param_1 + 0x10);
    if ((uVar1 >> 4 & 1) == 0) {
      FUN_003c86b4(*(undefined8 *)(param_1 + 8),"crypto/asn1/asn1_lib.c",0x16f);
    }
    if ((uVar1 >> 7 & 1) == 0) {
      FUN_003c86b4(param_1,"crypto/asn1/asn1_lib.c",0x171);
      return;
    }
  }
  return;
}


// ===== 0038a4e4  FUN_0038a4e4 =====

undefined * FUN_0038a4e4(void)

{
  return &DAT_00765278;
}


// ===== 0038a4f0  FUN_0038a4f0 =====

void FUN_0038a4f0(void)

{
  FUN_0038a93c();
  return;
}


// ===== 0038a4fc  FUN_0038a4fc =====

void FUN_0038a4fc(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_00765278);
  return;
}


// ===== 0038a508  FUN_0038a508 =====

void FUN_0038a508(void)

{
  FUN_0038ee84(0x17);
  return;
}


// ===== 0038a510  thunk_FUN_0038eddc =====

void thunk_FUN_0038eddc(long param_1)

{
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = (uint)*(undefined8 *)(param_1 + 0x10);
    if ((uVar1 >> 4 & 1) == 0) {
      FUN_003c86b4(*(undefined8 *)(param_1 + 8),"crypto/asn1/asn1_lib.c",0x16f);
    }
    if ((uVar1 >> 7 & 1) == 0) {
      FUN_003c86b4(param_1,"crypto/asn1/asn1_lib.c",0x171);
      return;
    }
  }
  return;
}


// ===== 0038a514  FUN_0038a514 =====

undefined * FUN_0038a514(void)

{
  return &DAT_007652b0;
}


// ===== 0038a520  FUN_0038a520 =====

void FUN_0038a520(void)

{
  FUN_0038a93c();
  return;
}


// ===== 0038a52c  FUN_0038a52c =====

void FUN_0038a52c(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_007652b0);
  return;
}


// ===== 0038a538  FUN_0038a538 =====

void FUN_0038a538(void)

{
  FUN_0038ee84(0x18);
  return;
}


// ===== 0038a540  thunk_FUN_0038eddc =====

void thunk_FUN_0038eddc(long param_1)

{
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = (uint)*(undefined8 *)(param_1 + 0x10);
    if ((uVar1 >> 4 & 1) == 0) {
      FUN_003c86b4(*(undefined8 *)(param_1 + 8),"crypto/asn1/asn1_lib.c",0x16f);
    }
    if ((uVar1 >> 7 & 1) == 0) {
      FUN_003c86b4(param_1,"crypto/asn1/asn1_lib.c",0x171);
      return;
    }
  }
  return;
}


// ===== 0038a544  FUN_0038a544 =====

undefined * FUN_0038a544(void)

{
  return &DAT_007652e8;
}


// ===== 0038a550  FUN_0038a550 =====

void FUN_0038a550(void)

{
  FUN_0038a93c();
  return;
}


// ===== 0038a55c  FUN_0038a55c =====

void FUN_0038a55c(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_007652e8);
  return;
}


// ===== 0038a568  FUN_0038a568 =====

void FUN_0038a568(void)

{
  FUN_0038ee84(0x1a);
  return;
}


// ===== 0038a570  thunk_FUN_0038eddc =====

void thunk_FUN_0038eddc(long param_1)

{
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = (uint)*(undefined8 *)(param_1 + 0x10);
    if ((uVar1 >> 4 & 1) == 0) {
      FUN_003c86b4(*(undefined8 *)(param_1 + 8),"crypto/asn1/asn1_lib.c",0x16f);
    }
    if ((uVar1 >> 7 & 1) == 0) {
      FUN_003c86b4(param_1,"crypto/asn1/asn1_lib.c",0x171);
      return;
    }
  }
  return;
}


// ===== 0038a574  FUN_0038a574 =====

undefined * FUN_0038a574(void)

{
  return &DAT_00765320;
}


// ===== 0038a580  FUN_0038a580 =====

void FUN_0038a580(void)

{
  FUN_0038a93c();
  return;
}


// ===== 0038a58c  FUN_0038a58c =====

void FUN_0038a58c(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_00765320);
  return;
}


// ===== 0038a598  FUN_0038a598 =====

void FUN_0038a598(void)

{
  FUN_0038ee84(0x1c);
  return;
}


// ===== 0038a5a0  thunk_FUN_0038eddc =====

void thunk_FUN_0038eddc(long param_1)

{
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = (uint)*(undefined8 *)(param_1 + 0x10);
    if ((uVar1 >> 4 & 1) == 0) {
      FUN_003c86b4(*(undefined8 *)(param_1 + 8),"crypto/asn1/asn1_lib.c",0x16f);
    }
    if ((uVar1 >> 7 & 1) == 0) {
      FUN_003c86b4(param_1,"crypto/asn1/asn1_lib.c",0x171);
      return;
    }
  }
  return;
}


// ===== 0038a5a4  FUN_0038a5a4 =====

undefined * FUN_0038a5a4(void)

{
  return &DAT_00765358;
}


// ===== 0038a5b0  FUN_0038a5b0 =====

void FUN_0038a5b0(void)

{
  FUN_0038a93c();
  return;
}


// ===== 0038a5bc  FUN_0038a5bc =====

void FUN_0038a5bc(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_00765358);
  return;
}


// ===== 0038a5c8  FUN_0038a5c8 =====

void FUN_0038a5c8(void)

{
  FUN_0038ee84(0x1e);
  return;
}


// ===== 0038a5d0  thunk_FUN_0038eddc =====

void thunk_FUN_0038eddc(long param_1)

{
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = (uint)*(undefined8 *)(param_1 + 0x10);
    if ((uVar1 >> 4 & 1) == 0) {
      FUN_003c86b4(*(undefined8 *)(param_1 + 8),"crypto/asn1/asn1_lib.c",0x16f);
    }
    if ((uVar1 >> 7 & 1) == 0) {
      FUN_003c86b4(param_1,"crypto/asn1/asn1_lib.c",0x171);
      return;
    }
  }
  return;
}


// ===== 0038a5d4  FUN_0038a5d4 =====

undefined * FUN_0038a5d4(void)

{
  return &DAT_00765390;
}


// ===== 0038a5e0  FUN_0038a5e0 =====

void FUN_0038a5e0(void)

{
  FUN_0038a93c();
  return;
}


// ===== 0038a5ec  FUN_0038a5ec =====

void FUN_0038a5ec(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_00765390);
  return;
}


// ===== 0038a5f8  FUN_0038a5f8 =====

void FUN_0038a5f8(void)

{
  FUN_0039a5f4(&DAT_00765390);
  return;
}


// ===== 0038a604  FUN_0038a604 =====

void FUN_0038a604(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_00765390);
  return;
}


// ===== 0038a610  FUN_0038a610 =====

undefined * FUN_0038a610(void)

{
  return &DAT_007653c8;
}


// ===== 0038a61c  FUN_0038a61c =====

undefined * FUN_0038a61c(void)

{
  return &DAT_00765400;
}


// ===== 0038a628  FUN_0038a628 =====

undefined * FUN_0038a628(void)

{
  return &DAT_00765438;
}


// ===== 0038a634  FUN_0038a634 =====

void FUN_0038a634(void)

{
  FUN_0038a93c();
  return;
}


// ===== 0038a640  FUN_0038a640 =====

void FUN_0038a640(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_00765400);
  return;
}


// ===== 0038a64c  FUN_0038a64c =====

void FUN_0038a64c(void)

{
  FUN_0039a5f4(&DAT_00765400);
  return;
}


// ===== 0038a658  FUN_0038a658 =====

void FUN_0038a658(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_00765400);
  return;
}


// ===== 0038a664  FUN_0038a664 =====

undefined * FUN_0038a664(void)

{
  return &DAT_00765470;
}


// ===== 0038a670  FUN_0038a670 =====

void FUN_0038a670(void)

{
  FUN_0038a93c();
  return;
}


// ===== 0038a67c  FUN_0038a67c =====

void FUN_0038a67c(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_00765470);
  return;
}


// ===== 0038a688  FUN_0038a688 =====

void FUN_0038a688(void)

{
  FUN_0039a5f4(&DAT_00765470);
  return;
}


// ===== 0038a694  FUN_0038a694 =====

void FUN_0038a694(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_00765470);
  return;
}


// ===== 0038a6a0  FUN_0038a6a0 =====

undefined * FUN_0038a6a0(void)

{
  return &DAT_007654a8;
}


// ===== 0038a6ac  FUN_0038a6ac =====

void FUN_0038a6ac(void)

{
  FUN_0038a93c();
  return;
}


// ===== 0038a6b8  FUN_0038a6b8 =====

void FUN_0038a6b8(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_007654a8);
  return;
}


// ===== 0038a6c4  FUN_0038a6c4 =====

void FUN_0038a6c4(void)

{
  FUN_0039a5f4(&DAT_007654a8);
  return;
}


// ===== 0038a6d0  FUN_0038a6d0 =====

void FUN_0038a6d0(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_007654a8);
  return;
}


// ===== 0038a6dc  FUN_0038a6dc =====

undefined * FUN_0038a6dc(void)

{
  return &DAT_007654e0;
}


// ===== 0038a6e8  FUN_0038a6e8 =====

void FUN_0038a6e8(void)

{
  FUN_0038a93c();
  return;
}


// ===== 0038a6f4  FUN_0038a6f4 =====

void FUN_0038a6f4(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_007654e0);
  return;
}


// ===== 0038a700  FUN_0038a700 =====

void FUN_0038a700(void)

{
  FUN_0039a5f4(&DAT_007654e0);
  return;
}


// ===== 0038a70c  FUN_0038a70c =====

void FUN_0038a70c(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_007654e0);
  return;
}


// ===== 0038a718  FUN_0038a718 =====

undefined * FUN_0038a718(void)

{
  return &DAT_00765518;
}


// ===== 0038a724  FUN_0038a724 =====

undefined * FUN_0038a724(void)

{
  return &DAT_00765550;
}


// ===== 0038a730  FUN_0038a730 =====

undefined * FUN_0038a730(void)

{
  return &DAT_00765588;
}


// ===== 0038a73c  FUN_0038a73c =====

undefined * FUN_0038a73c(void)

{
  return &DAT_007655c0;
}


// ===== 0038a748  FUN_0038a748 =====

undefined * FUN_0038a748(void)

{
  return &DAT_007655f8;
}


// ===== 0038a754  FUN_0038a754 =====

undefined * FUN_0038a754(void)

{
  return &DAT_00765658;
}


// ===== 0038a760  FUN_0038a760 =====

void FUN_0038a760(void)

{
  FUN_0038a93c();
  return;
}


// ===== 0038a76c  FUN_0038a76c =====

void FUN_0038a76c(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_007655f8);
  return;
}


// ===== 0038a778  FUN_0038a778 =====

void FUN_0038a778(void)

{
  FUN_0038a93c();
  return;
}


// ===== 0038a784  FUN_0038a784 =====

void FUN_0038a784(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_00765658);
  return;
}


// ===== 0038a790  FUN_0038a790 =====

undefined8 FUN_0038a790(uint param_1)

{
  if (0x1e < param_1) {
    return 0;
  }
  return *(undefined8 *)(&DAT_00206938 + (ulong)param_1 * 8);
}


// ===== 0038a7b0  FUN_0038a7b0 =====

ulong FUN_0038a7b0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  
  if ((param_1 != 0) && (param_4 != 0)) {
    uVar1 = FUN_0038aa08();
    if (0 < (int)uVar1) {
      return uVar1;
    }
    FUN_0038ca24(param_1,param_4);
    return uVar1 & 0xffffffff;
  }
  FUN_00379868();
  FUN_0037995c("crypto/asn1/tasn_dec.c",0x73,"asn1_item_ex_d2i_intern");
  FUN_00379a5c(0xd,0xc0102,0);
  return 0;
}


// ===== 0038a86c  FUN_0038a86c =====

undefined8 FUN_0038a86c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 local_48;
  undefined1 local_40;
  
  local_48 = 0;
  puVar1 = &local_48;
  if (param_1 != (undefined8 *)0x0) {
    puVar1 = param_1;
  }
  local_40 = 0;
  if (param_4 != 0) {
    iVar2 = FUN_0038aa08(puVar1);
    if (0 < iVar2) {
      return *puVar1;
    }
    FUN_0038ca24(puVar1,param_4);
    return 0;
  }
  FUN_00379868();
  FUN_0037995c("crypto/asn1/tasn_dec.c",0x73,"asn1_item_ex_d2i_intern");
  FUN_00379a5c(0xd,0xc0102,0);
  return 0;
}


// ===== 0038a93c  FUN_0038a93c =====

undefined8 FUN_0038a93c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 local_48;
  undefined1 local_40;
  
  local_48 = 0;
  puVar1 = &local_48;
  if (param_1 != (undefined8 *)0x0) {
    puVar1 = param_1;
  }
  local_40 = 0;
  if (param_4 != 0) {
    iVar2 = FUN_0038aa08(puVar1);
    if (0 < iVar2) {
      return *puVar1;
    }
    FUN_0038ca24(puVar1,param_4);
    return 0;
  }
  FUN_00379868();
  FUN_0037995c("crypto/asn1/tasn_dec.c",0x73,"asn1_item_ex_d2i_intern");
  FUN_00379a5c(0xd,0xc0102,0);
  return 0;
}


// ===== 0038aa08  FUN_0038aa08 =====

undefined8
FUN_0038aa08(long *param_1,long *param_2,char *param_3,byte *param_4,int param_5,undefined4 param_6,
            char param_7,undefined8 param_8,int param_9,undefined8 param_10,undefined8 param_11)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  byte bVar8;
  ulong uVar9;
  char *pcVar10;
  long lVar11;
  byte *pbVar12;
  long lVar13;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar14;
  undefined8 in_stack_ffffffffffffff50;
  uint local_78;
  char local_74 [4];
  char *local_70;
  char *local_68;
  
  local_70 = (char *)0x0;
  local_68 = param_3;
  if ((param_1 == (long *)0x0) || (param_4 == (byte *)0x0)) {
    FUN_00379868();
    FUN_0037995c("crypto/asn1/tasn_dec.c",0xb6,"asn1_item_embed_d2i");
    uVar6 = 0xc0102;
LAB_0038ab50:
    FUN_00379a5c(0xd,uVar6,0);
    return 0;
  }
  if ((long)param_3 < 1) {
    FUN_00379868();
    FUN_0037995c("crypto/asn1/tasn_dec.c",0xba,"asn1_item_embed_d2i");
    uVar6 = 0xe0;
    goto LAB_0038ab50;
  }
  lVar11 = *(long *)(param_4 + 0x20);
  if ((lVar11 == 0) ||
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar11 + 0x18), UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    UNRECOVERED_JUMPTABLE = (code *)0x0;
  }
  if (0x1d < param_9) {
    FUN_00379868();
    FUN_0037995c("crypto/asn1/tasn_dec.c",0xc4,"asn1_item_embed_d2i");
    uVar6 = 0xc9;
    goto LAB_0038aa84;
  }
  bVar8 = *param_4;
  uVar4 = (uint)((ulong)in_stack_ffffffffffffff50 >> 0x20);
  if (bVar8 < 4) {
    if (bVar8 == 0) {
      if (*(long *)(param_4 + 0x10) == 0) {
        uVar6 = FUN_0038b674();
        return uVar6;
      }
      if ((param_5 == -1) && (param_7 == '\0')) {
        uVar6 = FUN_0038b4b0();
        return uVar6;
      }
      FUN_00379868();
      FUN_0037995c("crypto/asn1/tasn_dec.c",0xd3,"asn1_item_embed_d2i");
      uVar6 = 0xaa;
      goto LAB_0038aa84;
    }
    if (bVar8 == 1) goto LAB_0038ab98;
    if (bVar8 != 2) {
      return 0;
    }
    if (param_5 != -1) {
      FUN_00379868(0);
      uVar6 = 0x110;
      goto LAB_0038aca4;
    }
    if ((UNRECOVERED_JUMPTABLE == (code *)0x0) ||
       (iVar3 = (*UNRECOVERED_JUMPTABLE)(4,param_1,param_4,0), iVar3 != 0)) {
      if (*param_1 == 0) {
        iVar3 = FUN_0039aa24(param_1,param_4,param_10,param_11);
        if (iVar3 == 0) {
          FUN_00379868();
          uVar6 = 0x120;
          goto LAB_0038ac14;
        }
      }
      else {
        uVar4 = FUN_0038cc44(param_1,param_4);
        if ((-1 < (int)uVar4) && ((long)(ulong)uVar4 < *(long *)(param_4 + 0x18))) {
          lVar11 = *(long *)(param_4 + 0x10) + (ulong)uVar4 * 0x28;
          uVar6 = FUN_0038cfac(param_1,lVar11);
          FUN_0038ca2c(uVar6,lVar11);
          FUN_0038cc64(param_1,0xffffffff,param_4);
        }
      }
      uVar9 = *(ulong *)(param_4 + 0x18);
      local_70 = (char *)*param_2;
      if ((long)uVar9 < 1) {
        uVar7 = 0;
        uVar14 = 0;
      }
      else {
        pbVar12 = *(byte **)(param_4 + 0x10);
        uVar14 = 0;
        do {
          uVar6 = FUN_0038cfac(param_1,pbVar12);
          iVar3 = FUN_0038b4b0(uVar6,&local_70,local_68,pbVar12,1,param_8,param_9 + 1,param_10,
                               param_11);
          if (iVar3 != -1) {
            if (0 < iVar3) {
              uVar9 = *(ulong *)(param_4 + 0x18);
              uVar7 = uVar14 & 0xffffffff;
              goto LAB_0038b12c;
            }
            FUN_0038ca2c(uVar6,pbVar12);
            FUN_00379868();
            FUN_0037995c("crypto/asn1/tasn_dec.c",0x138,"asn1_item_embed_d2i");
            FUN_00379a5c(0xd,0x8010a,0);
            if (pbVar12 != (byte *)0x0) {
LAB_0038b464:
              FUN_0037aeac(4,"Field=",*(undefined8 *)(pbVar12 + 0x18),", Type=",
                           *(undefined8 *)(param_4 + 0x30));
              return 0;
            }
            goto LAB_0038aa8c;
          }
          uVar9 = *(ulong *)(param_4 + 0x18);
          uVar14 = uVar14 + 1;
          pbVar12 = pbVar12 + 0x28;
        } while ((long)uVar14 < (long)uVar9);
        uVar7 = uVar14 & 0xffffffff;
      }
LAB_0038b12c:
      if (uVar9 == uVar14) {
        if (param_7 != '\0') {
          FUN_0038ca24(param_1,param_4);
          return 0xffffffff;
        }
        FUN_00379868();
        FUN_0037995c("crypto/asn1/tasn_dec.c",0x144,"asn1_item_embed_d2i");
        uVar6 = 0x8f;
        goto LAB_0038aa84;
      }
      FUN_0038cc64(param_1,uVar7,param_4);
joined_r0x0038b408:
      if ((UNRECOVERED_JUMPTABLE == (code *)0x0) ||
         (iVar3 = (*UNRECOVERED_JUMPTABLE)(5,param_1,param_4,0), iVar3 != 0)) {
        *param_2 = (long)local_70;
        return 1;
      }
    }
LAB_0038b410:
    FUN_00379868();
    FUN_0037995c("crypto/asn1/tasn_dec.c",0x1e1,"asn1_item_embed_d2i");
    uVar6 = 100;
  }
  else {
    if (bVar8 == 4) {
      UNRECOVERED_JUMPTABLE = *(code **)(lVar11 + 0x40);
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar11 + 0x20);
      }
                    /* WARNING: Could not recover jumptable at 0x0038ad10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*UNRECOVERED_JUMPTABLE)();
      return uVar6;
    }
    if (bVar8 == 5) {
      if (param_5 != -1) {
        FUN_00379868();
        uVar6 = 0xe2;
LAB_0038aca4:
        FUN_0037995c("crypto/asn1/tasn_dec.c",uVar6,"asn1_item_embed_d2i");
        uVar6 = 0xe6;
        goto LAB_0038aa84;
      }
      local_70 = (char *)*param_2;
      uVar6 = FUN_0038be78(0,&local_78,local_74,0,0,&local_70,param_3,0xffffffff,
                           (ulong)uVar4 << 0x20,1,param_8);
      if ((int)uVar6 != 0) {
        if (local_74[0] == '\0') {
          if (local_78 < 0x1f) {
            uVar9 = *(ulong *)(&DAT_00206938 + (ulong)local_78 * 8);
          }
          else {
            uVar9 = 0;
          }
          if ((*(ulong *)(param_4 + 8) & uVar9) != 0) {
            uVar6 = FUN_0038b674(param_1,param_2,local_68,param_4,(ulong)local_78,0,0);
            return uVar6;
          }
          if (param_7 != '\0') {
            return 0xffffffff;
          }
          FUN_00379868(uVar6,param_2);
          FUN_0037995c("crypto/asn1/tasn_dec.c",0xfd,"asn1_item_embed_d2i");
          uVar6 = 0x8c;
        }
        else {
          if (param_7 != '\0') {
            return 0xffffffff;
          }
          FUN_00379868();
          FUN_0037995c("crypto/asn1/tasn_dec.c",0xf4,"asn1_item_embed_d2i");
          uVar6 = 0x8b;
        }
        goto LAB_0038aa84;
      }
      FUN_00379868();
      uVar6 = 0xeb;
    }
    else {
      if (bVar8 != 6) {
        return 0;
      }
LAB_0038ab98:
      local_70 = (char *)*param_2;
      uVar2 = 0;
      if (param_5 != -1) {
        uVar2 = param_6;
      }
      iVar3 = 0x10;
      if (param_5 != -1) {
        iVar3 = param_5;
      }
      uVar6 = FUN_0038be78(&local_68,0,0,&local_78,local_74,&local_70,param_3,iVar3,
                           CONCAT44(uVar4,uVar2),param_7,param_8);
      if ((int)uVar6 == -1) {
        return uVar6;
      }
      if ((int)uVar6 == 0) {
        FUN_00379868();
        uVar6 = 0x15d;
      }
      else {
        if ((lVar11 == 0) || ((*(byte *)(lVar11 + 8) >> 2 & 1) == 0)) {
          uVar4 = local_78 & 0xff;
        }
        else {
          uVar4 = 1;
          local_68 = param_3 + (*param_2 - (long)local_70);
        }
        if (local_74[0] == '\0') {
          FUN_00379868();
          FUN_0037995c("crypto/asn1/tasn_dec.c",0x169,"asn1_item_embed_d2i");
          uVar6 = 0x95;
          goto LAB_0038aa84;
        }
        if ((*param_1 != 0) || (iVar3 = FUN_0039aa24(param_1,param_4,param_10,param_11), iVar3 != 0)
           ) {
          if ((UNRECOVERED_JUMPTABLE == (code *)0x0) ||
             (iVar3 = (*UNRECOVERED_JUMPTABLE)(4,param_1,param_4,0), iVar3 != 0)) {
            lVar11 = *(long *)(param_4 + 0x10);
            if (*(long *)(param_4 + 0x18) < 1) {
              uVar9 = 0;
              pcVar10 = local_68;
            }
            else {
              lVar13 = 0;
              do {
                if (((*(byte *)(lVar11 + 1) & 3) != 0) &&
                   (lVar5 = FUN_0038cfcc(*param_1,lVar11,0), lVar5 != 0)) {
                  uVar6 = FUN_0038cfac(param_1,lVar5);
                  FUN_0038ca2c(uVar6,lVar5);
                }
                lVar13 = lVar13 + 1;
                lVar11 = lVar11 + 0x28;
              } while (lVar13 < *(long *)(param_4 + 0x18));
              lVar11 = *(long *)(param_4 + 0x10);
              if (*(long *)(param_4 + 0x18) < 1) {
                uVar9 = 0;
                pcVar10 = local_68;
              }
              else {
                uVar9 = 0;
                do {
                  while( true ) {
                    pbVar12 = (byte *)FUN_0038cfcc(*param_1,lVar11,1);
                    if (pbVar12 == (byte *)0x0) goto LAB_0038aa8c;
                    uVar6 = FUN_0038cfac(param_1,pbVar12);
                    pcVar10 = local_70;
                    if (local_68 == (char *)0x0) {
                      pcVar10 = (char *)0x0;
                      goto LAB_0038b2d8;
                    }
                    if (((1 < (long)local_68) && (*local_70 == '\0')) && (local_70[1] == '\0')) {
                      pcVar1 = local_70 + 2;
                      if ((char)local_78 == '\0') {
                        local_70 = pcVar1;
                        FUN_00379868();
                        FUN_0037995c("crypto/asn1/tasn_dec.c",0x191,"asn1_item_embed_d2i");
                        uVar6 = 0x9f;
                        goto LAB_0038aa84;
                      }
                      pcVar10 = local_70 + ((long)local_68 - (long)pcVar1);
                      local_78 = local_78 & 0xffffff00;
                      local_70 = pcVar1;
                      local_68 = pcVar10;
                      goto LAB_0038b35c;
                    }
                    if (uVar9 == *(long *)(param_4 + 0x18) - 1U) {
                      bVar8 = 0;
                    }
                    else {
                      bVar8 = *pbVar12 & 1;
                    }
                    iVar3 = FUN_0038b4b0(uVar6,&local_70,local_68,pbVar12,bVar8,param_8,param_9 + 1,
                                         param_10,param_11);
                    if (iVar3 == -1) break;
                    if (iVar3 == 0) goto LAB_0038b464;
                    pcVar10 = pcVar10 + ((long)local_68 - (long)local_70);
                    uVar9 = uVar9 + 1;
                    lVar11 = lVar11 + 0x28;
                    local_68 = pcVar10;
                    if (*(long *)(param_4 + 0x18) <= (long)uVar9) goto LAB_0038b2d8;
                  }
                  FUN_0038ca2c(uVar6,pbVar12);
                  uVar9 = uVar9 + 1;
                  lVar11 = lVar11 + 0x28;
                  pcVar10 = local_68;
                } while ((long)uVar9 < *(long *)(param_4 + 0x18));
              }
            }
LAB_0038b2d8:
            if ((char)local_78 != '\0') {
              if ((((long)pcVar10 < 2) || (*local_70 != '\0')) || (local_70[1] != '\0')) {
                FUN_00379868();
                FUN_0037995c("crypto/asn1/tasn_dec.c",0x1b8,"asn1_item_embed_d2i");
                uVar6 = 0x89;
                goto LAB_0038aa84;
              }
              pcVar10 = (char *)0x1;
              local_70 = local_70 + 2;
            }
LAB_0038b35c:
            if ((uVar4 == 0) && (pcVar10 != (char *)0x0)) {
              FUN_00379868();
              FUN_0037995c("crypto/asn1/tasn_dec.c",0x1bd,"asn1_item_embed_d2i");
              uVar6 = 0x94;
              goto LAB_0038aa84;
            }
            uVar9 = uVar9 & 0xffffffff;
            if ((long)uVar9 < *(long *)(param_4 + 0x18)) {
              do {
                pbVar12 = (byte *)FUN_0038cfcc(*param_1,lVar11,1);
                if (pbVar12 == (byte *)0x0) goto LAB_0038aa8c;
                if ((*pbVar12 & 1) == 0) {
                  FUN_00379868();
                  FUN_0037995c("crypto/asn1/tasn_dec.c",0x1d1,"asn1_item_embed_d2i");
                  FUN_00379a5c(0xd,0x79,0);
                  goto LAB_0038b464;
                }
                uVar6 = FUN_0038cfac(param_1,pbVar12);
                FUN_0038ca2c(uVar6,pbVar12);
                uVar9 = uVar9 + 1;
                lVar11 = lVar11 + 0x28;
              } while ((long)uVar9 < *(long *)(param_4 + 0x18));
            }
            iVar3 = FUN_0038ce1c(param_1,*param_2,(int)local_70 - (int)*param_2,param_4);
            if (iVar3 != 0) goto joined_r0x0038b408;
          }
          goto LAB_0038b410;
        }
        FUN_00379868();
        uVar6 = 0x16f;
      }
    }
LAB_0038ac14:
    FUN_0037995c("crypto/asn1/tasn_dec.c",uVar6,"asn1_item_embed_d2i");
    uVar6 = 0x8010a;
  }
LAB_0038aa84:
  FUN_00379a5c(0xd,uVar6,0);
LAB_0038aa8c:
  FUN_0037aeac(2,"Type=",*(undefined8 *)(param_4 + 0x30));
  return 0;
}


// ===== 0038b4b0  FUN_0038b4b0 =====

undefined8
FUN_0038b4b0(long param_1,long *param_2,undefined8 param_3,uint *param_4,undefined1 param_5,
            undefined8 param_6,undefined4 param_7,undefined8 param_8,undefined8 param_9)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 in_stack_ffffffffffffff70;
  char local_70 [4];
  char local_6c [4];
  char *local_68;
  char *local_48;
  
  if (param_1 == 0) {
    return 0;
  }
  local_68 = (char *)*param_2;
  if ((*param_4 >> 4 & 1) == 0) {
    uVar3 = FUN_0038c100(param_1,param_2,param_3);
    return uVar3;
  }
  uVar3 = FUN_0038be78(&local_48,0,0,local_6c,local_70,&local_68,param_3,param_4[2],
                       CONCAT44((int)((ulong)in_stack_ffffffffffffff70 >> 0x20),*param_4) &
                       0xffffffff000000c0,param_5,param_6);
  pcVar1 = local_68;
  if ((int)uVar3 == -1) {
    return uVar3;
  }
  uVar4 = 0x8010a;
  if ((int)uVar3 == 0) {
    uVar3 = 0x20d;
  }
  else if (local_70[0] == '\0') {
    uVar4 = 0x78;
    uVar3 = 0x212;
  }
  else {
    iVar2 = FUN_0038c100(param_1,&local_68,local_48,param_4,0,param_6,param_7,param_8,param_9);
    if (iVar2 == 0) {
      uVar3 = 0x219;
    }
    else {
      local_48 = pcVar1 + ((long)local_48 - (long)local_68);
      if (local_6c[0] == '\0') {
        if (local_48 == (char *)0x0) goto LAB_0038b668;
        uVar4 = 0x77;
        uVar3 = 0x229;
      }
      else {
        if (((1 < (long)local_48) && (*local_68 == '\0')) && (local_68[1] == '\0')) {
          local_68 = local_68 + 2;
LAB_0038b668:
          *param_2 = (long)local_68;
          return 1;
        }
        uVar4 = 0x89;
        uVar3 = 0x221;
      }
    }
  }
  FUN_00379868();
  FUN_0037995c("crypto/asn1/tasn_dec.c",uVar3,"asn1_template_ex_d2i");
  FUN_00379a5c(0xd,uVar4,0);
  return 0;
}


// ===== 0038b674  FUN_0038b674 =====

/* WARNING: Type propagation algorithm not settling */

ulong FUN_0038b674(uint *param_1,long *param_2,undefined8 param_3,char *param_4,uint param_5,
                  undefined4 param_6,char param_7,undefined1 *param_8)

{
  byte *pbVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 uVar9;
  uint *puVar10;
  uint *puVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint *puVar14;
  byte *local_b0;
  byte *pbStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  byte *local_90;
  char local_84 [4];
  char local_80 [4];
  char local_7c [4];
  byte *local_78;
  uint local_6c;
  byte *local_68;
  char local_5c [4];
  byte *local_58;
  
  local_84[0] = '\0';
  pbStack_a8 = (byte *)0x0;
  local_b0 = (byte *)0x0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (*param_4 == '\x05') {
    local_6c = param_5;
    if (param_5 != 0xfffffffc) {
      param_5 = 0xffffffff;
      goto LAB_0038b7d0;
    }
    param_5 = 0xffffffff;
LAB_0038b70c:
    if (param_7 != '\0') {
      FUN_00379868();
      FUN_0037995c("crypto/asn1/tasn_dec.c",0x2da,"asn1_d2i_ex_primitive");
      uVar7 = 0x7e;
      goto LAB_0038b844;
    }
    local_90 = (byte *)*param_2;
    param_7 = '\0';
    iVar4 = FUN_0038be78(0,&local_6c,&local_58,0,0,&local_90,param_3,0xffffffff,0,0,param_8);
    if (iVar4 != 0) {
      if ((char)local_58 != '\0') {
        local_6c = 0xfffffffd;
      }
      goto LAB_0038b7d0;
    }
    FUN_00379868();
    uVar7 = 0x2e1;
  }
  else {
    local_6c = *(uint *)(param_4 + 8);
    if (local_6c == 0xfffffffc) {
      if (-1 < (int)param_5) {
        FUN_00379868();
        FUN_0037995c("crypto/asn1/tasn_dec.c",0x2d6,"asn1_d2i_ex_primitive");
        uVar7 = 0x7f;
        goto LAB_0038b844;
      }
      goto LAB_0038b70c;
    }
LAB_0038b7d0:
    local_90 = (byte *)*param_2;
    uVar2 = local_6c;
    uVar9 = 0;
    if (param_5 != 0xffffffff) {
      uVar2 = param_5;
      uVar9 = param_6;
    }
    uVar6 = FUN_0038be78(&local_78,0,0,local_80,local_7c,&local_90,param_3,uVar2,uVar9,param_7,
                         param_8);
    if ((int)uVar6 == -1) {
      return uVar6;
    }
    if ((int)uVar6 != 0) {
      if (local_6c - 0x10 < 2) {
        if (local_7c[0] == '\0') {
          FUN_00379868();
          FUN_0037995c("crypto/asn1/tasn_dec.c",0x301,"asn1_d2i_ex_primitive");
          uVar7 = 0x9c;
          goto LAB_0038b844;
        }
LAB_0038b8bc:
        pbVar12 = (byte *)*param_2;
        if (local_80[0] != '\0') {
          local_5c[0] = local_80[0];
          local_68 = local_90;
          if (0 < (long)local_78) {
            iVar4 = 1;
            pbVar13 = local_78;
            do {
              while (((pbVar1 = local_68, pbVar13 == (byte *)0x1 || (*local_68 != 0)) ||
                     (local_68[1] != 0))) {
                iVar5 = FUN_0038be78(&local_58,0,0,local_5c,0,&local_68,pbVar13,0xffffffff,0,0,0);
                if (iVar5 == 0) {
                  uVar7 = 1000;
LAB_0038ba64:
                  uVar9 = 0x8010a;
                  goto LAB_0038ba6c;
                }
                if (local_5c[0] == '\0') {
                  local_68 = local_68 + (long)local_58;
                }
                else {
                  if (iVar4 == -1) {
                    uVar7 = 0x3ed;
                    goto LAB_0038ba64;
                  }
                  iVar4 = iVar4 + 1;
                }
                pbVar13 = pbVar1 + ((long)pbVar13 - (long)local_68);
                if ((long)pbVar13 < 1) goto LAB_0038b9a4;
              }
              local_68 = local_68 + 2;
              iVar4 = iVar4 + -1;
              if (iVar4 == 0) goto LAB_0038baa0;
              pbVar13 = pbVar13 + -2;
            } while (0 < (long)pbVar13);
LAB_0038b9a4:
            if (iVar4 == 0) {
LAB_0038baa0:
              local_78 = local_68 + -(long)pbVar12;
              lVar8 = *(long *)(param_4 + 0x20);
              pbVar13 = local_68;
              goto joined_r0x0038ba50;
            }
          }
          uVar9 = 0x89;
          uVar7 = 0x3f7;
LAB_0038ba6c:
          FUN_00379868();
          FUN_0037995c("crypto/asn1/tasn_dec.c",uVar7,"asn1_find_end");
          goto LAB_0038ba90;
        }
        pbVar1 = local_90 + ((long)local_78 - (long)pbVar12);
        bVar3 = true;
        lVar8 = *(long *)(param_4 + 0x20);
        local_90 = local_90 + (long)local_78;
        uVar2 = local_6c;
joined_r0x0038bb14:
        local_6c = uVar2;
        local_58 = pbVar12;
        if ((lVar8 != 0) && (*(code **)(lVar8 + 0x28) != (code *)0x0)) {
          uVar6 = (**(code **)(lVar8 + 0x28))
                            (param_1,pbVar12,(ulong)pbVar1 & 0xffffffff,uVar2,local_84,param_4);
          if ((int)uVar6 == 0) goto LAB_0038bb4c;
          goto LAB_0038bb40;
        }
        if (*(long *)(param_4 + 8) != -4) {
          puVar11 = (uint *)0x0;
          puVar14 = (uint *)0x0;
          puVar10 = param_1;
LAB_0038bbd0:
          iVar4 = (int)pbVar1;
          if ((int)uVar2 < 6) {
            if ((int)uVar2 < 3) {
              if (uVar2 == 1) {
                if (iVar4 != 1) {
                  FUN_00379868();
                  FUN_0037995c("crypto/asn1/tasn_dec.c",0x36b,"asn1_ex_c2i");
                  uVar7 = 0x6a;
                  goto LAB_0038be5c;
                }
                *puVar10 = (uint)*pbVar12;
              }
              else {
                if (uVar2 != 2) goto LAB_0038bd24;
LAB_0038bc0c:
                lVar8 = FUN_0038d3e4(puVar10,&local_58,(long)iVar4);
                if (lVar8 == 0) goto LAB_0038be64;
                *(uint *)(*(long *)puVar10 + 4) = *(uint *)(*(long *)puVar10 + 4) & 0x100 | uVar2;
LAB_0038bdec:
                if ((uVar2 == 5) && (puVar11 != (uint *)0x0)) {
                  puVar11[2] = 0;
                  puVar11[3] = 0;
                }
              }
            }
            else {
              if (uVar2 != 3) {
                if (uVar2 != 5) goto LAB_0038bd24;
                if (iVar4 == 0) {
                  puVar10[0] = 1;
                  puVar10[1] = 0;
                  goto LAB_0038bdec;
                }
                FUN_00379868();
                FUN_0037995c("crypto/asn1/tasn_dec.c",0x363,"asn1_ex_c2i");
                uVar7 = 0x90;
                goto LAB_0038be5c;
              }
              lVar8 = FUN_0039c310(puVar10,&local_58,(long)iVar4);
joined_r0x0038bcd4:
              if (lVar8 == 0) goto LAB_0038be64;
            }
          }
          else {
            if (0x1b < (int)uVar2) {
              if (uVar2 == 0x1c) {
                if (((ulong)pbVar1 & 3) == 0) goto LAB_0038bd24;
                FUN_00379868();
                FUN_0037995c("crypto/asn1/tasn_dec.c",0x399,"asn1_ex_c2i");
                uVar7 = 0xd7;
              }
              else {
                if ((uVar2 != 0x1e) || (((ulong)pbVar1 & 1) == 0)) goto LAB_0038bd24;
                FUN_00379868();
                FUN_0037995c("crypto/asn1/tasn_dec.c",0x395,"asn1_ex_c2i");
                uVar7 = 0xd6;
              }
LAB_0038be5c:
              FUN_00379a5c(0xd,uVar7,0);
LAB_0038be64:
              FUN_0038a658(puVar11);
              if (puVar14 != (uint *)0x0) {
                puVar14[0] = 0;
                puVar14[1] = 0;
              }
              goto LAB_0038ba98;
            }
            if (uVar2 == 6) {
              lVar8 = FUN_00399d90(puVar10,&local_58,(long)iVar4);
              goto joined_r0x0038bcd4;
            }
            if (uVar2 == 10) goto LAB_0038bc0c;
LAB_0038bd24:
            lVar8 = *(long *)puVar10;
            if (lVar8 == 0) {
              lVar8 = FUN_0038ee84(uVar2);
              if (lVar8 == 0) {
                FUN_00379868();
                FUN_0037995c("crypto/asn1/tasn_dec.c",0x3a0,"asn1_ex_c2i");
                uVar7 = 0x8000d;
                goto LAB_0038be5c;
              }
              *(long *)puVar10 = lVar8;
            }
            else {
              *(uint *)(lVar8 + 4) = uVar2;
            }
            if (bVar3) {
              iVar4 = FUN_0038ebe0(lVar8,pbVar12,(ulong)pbVar1 & 0xffffffff);
              if (iVar4 == 0) {
                FUN_00379868();
                FUN_0037995c("crypto/asn1/tasn_dec.c",0x3ae,"asn1_ex_c2i");
                FUN_00379a5c(0xd,0x8000d,0);
                FUN_0038eddc(lVar8);
                puVar10[0] = 0;
                puVar10[1] = 0;
                goto LAB_0038be64;
              }
            }
            else {
              FUN_0038ee3c(lVar8,pbVar12,(ulong)pbVar1 & 0xffffffff);
              local_84[0] = '\0';
            }
          }
LAB_0038bb40:
          uVar6 = 1;
          *param_2 = (long)local_90;
          goto LAB_0038bb4c;
        }
        puVar11 = *(uint **)param_1;
        if (puVar11 != (uint *)0x0) {
LAB_0038bb9c:
          if (*puVar11 != uVar2) {
            FUN_0039ade0(puVar11,uVar2,0);
          }
          puVar10 = puVar11 + 2;
          puVar14 = param_1;
          goto LAB_0038bbd0;
        }
        puVar11 = (uint *)FUN_0038a64c();
        if (puVar11 != (uint *)0x0) {
          *(uint **)param_1 = puVar11;
          goto LAB_0038bb9c;
        }
        FUN_0038a658();
      }
      else {
        if (local_6c == 0xfffffffd) {
          if (param_8 != (undefined1 *)0x0) {
            *param_8 = 0;
          }
          goto LAB_0038b8bc;
        }
        if (local_7c[0] == '\0') {
          lVar8 = *(long *)(param_4 + 0x20);
          pbVar13 = local_90 + (long)local_78;
          pbVar12 = local_90;
joined_r0x0038ba50:
          bVar3 = true;
          pbVar1 = local_78;
          local_90 = pbVar13;
          uVar2 = local_6c;
          goto joined_r0x0038bb14;
        }
        if ((local_6c < 0xb) && ((1 << (ulong)(local_6c & 0x1f) & 0x466U) != 0)) {
          FUN_00379868();
          FUN_0037995c("crypto/asn1/tasn_dec.c",0x313,"asn1_d2i_ex_primitive");
          uVar7 = 0xc3;
          goto LAB_0038b844;
        }
        local_84[0] = '\x01';
        uVar6 = FUN_0038c510(&local_b0,&local_90,local_78,local_80[0],0);
        pbVar1 = local_b0;
        if ((int)uVar6 == 0) goto LAB_0038bb4c;
        lVar8 = FUN_00388074(&local_b0,local_b0 + 1);
        if (lVar8 != 0) {
          bVar3 = false;
          pbStack_a8[(long)pbVar1] = 0;
          lVar8 = *(long *)(param_4 + 0x20);
          pbVar12 = pbStack_a8;
          uVar2 = local_6c;
          goto joined_r0x0038bb14;
        }
        FUN_00379868();
        FUN_0037995c("crypto/asn1/tasn_dec.c",0x325,"asn1_d2i_ex_primitive");
        uVar9 = 0x80007;
LAB_0038ba90:
        FUN_00379a5c(0xd,uVar9,0);
      }
LAB_0038ba98:
      uVar6 = 0;
LAB_0038bb4c:
      if (local_84[0] == '\0') {
        return uVar6;
      }
      FUN_003c86b4(pbStack_a8,"crypto/asn1/tasn_dec.c",0x339);
      return uVar6 & 0xffffffff;
    }
    FUN_00379868();
    uVar7 = 0x2f0;
  }
  FUN_0037995c("crypto/asn1/tasn_dec.c",uVar7,"asn1_d2i_ex_primitive");
  uVar7 = 0x8010a;
LAB_0038b844:
  FUN_00379a5c(0xd,uVar7,0);
  return 0;
}


// ===== 0038be78  FUN_0038be78 =====

undefined8
FUN_0038be78(long *param_1,int *param_2,undefined1 *param_3,byte *param_4,byte *param_5,
            long *param_6,long param_7,int param_8,int param_9,char param_10,char *param_11)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long local_78;
  long local_70;
  int local_68;
  int local_64;
  
  lVar3 = *param_6;
  local_78 = lVar3;
  if (param_7 < 1) {
    FUN_00379868();
    FUN_0037995c("crypto/asn1/tasn_dec.c",0x47a,"asn1_check_tlen");
    FUN_00379a5c(0xd,0xe0,0);
  }
  else {
    if (param_11 == (char *)0x0) {
      uVar1 = FUN_0038e758(&local_78,&local_70,&local_64,&local_68,param_7);
    }
    else if (*param_11 == '\0') {
      uVar1 = FUN_0038e758(&local_78,&local_70,&local_64,&local_68,param_7);
      *(uint *)(param_11 + 4) = uVar1;
      *(int *)(param_11 + 0x10) = local_64;
      *(int *)(param_11 + 0x14) = local_68;
      iVar2 = (int)local_78 - (int)lVar3;
      *(long *)(param_11 + 8) = local_70;
      *(int *)(param_11 + 0x18) = iVar2;
      *param_11 = '\x01';
      if (((uVar1 & 0x81) == 0) && (param_7 < local_70 + iVar2)) {
        FUN_00379868();
        FUN_0037995c("crypto/asn1/tasn_dec.c",0x491,"asn1_check_tlen");
        FUN_00379a5c(0xd,0x9b,0);
        goto LAB_0038c08c;
      }
    }
    else {
      local_70 = *(long *)(param_11 + 8);
      uVar1 = *(uint *)(param_11 + 4);
      local_64 = *(int *)(param_11 + 0x10);
      local_68 = *(int *)(param_11 + 0x14);
      local_78 = lVar3 + *(int *)(param_11 + 0x18);
    }
    if ((uVar1 >> 7 & 1) == 0) {
      if (param_8 < 0) {
LAB_0038bffc:
        if ((uVar1 & 1) != 0) {
          local_70 = (lVar3 + param_7) - local_78;
        }
        if (param_4 != (byte *)0x0) {
          *param_4 = (byte)uVar1 & 1;
        }
        if (param_5 != (byte *)0x0) {
          *param_5 = (byte)uVar1 & 0x20;
        }
        if (param_1 != (long *)0x0) {
          *param_1 = local_70;
        }
        if (param_3 != (undefined1 *)0x0) {
          *param_3 = (char)local_68;
        }
        if (param_2 != (int *)0x0) {
          *param_2 = local_64;
        }
        *param_6 = local_78;
        return 1;
      }
      if ((local_64 == param_8) && (local_68 == param_9)) {
        if (param_11 != (char *)0x0) {
          *param_11 = '\0';
        }
        goto LAB_0038bffc;
      }
      if (param_10 != '\0') {
        return 0xffffffff;
      }
      FUN_00379868();
      FUN_0037995c("crypto/asn1/tasn_dec.c",0x4a2,"asn1_check_tlen");
      FUN_00379a5c(0xd,0xa8,0);
    }
    else {
      FUN_00379868();
      FUN_0037995c("crypto/asn1/tasn_dec.c",0x498,"asn1_check_tlen");
      FUN_00379a5c(0xd,0x66,0);
    }
  }
  if (param_11 == (char *)0x0) {
    return 0;
  }
LAB_0038c08c:
  *param_11 = '\0';
  return 0;
}


// ===== 0038c100  FUN_0038c100 =====

/* WARNING: Type propagation algorithm not settling */

ulong FUN_0038c100(long *******param_1,long *param_2,char *param_3,ulong *param_4,undefined4 param_5
                  ,undefined8 param_6,undefined4 param_7,undefined8 param_8,undefined8 param_9)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  uint uVar7;
  ulong uVar8;
  long *******ppppppplVar9;
  long ******pppppplVar10;
  uint uVar11;
  undefined8 local_88;
  char local_7c [4];
  char *local_78;
  long *******local_70;
  char *local_68;
  
  uVar8 = *param_4;
  local_78 = (char *)*param_2;
  uVar7 = (uint)uVar8;
  uVar11 = uVar7 & 0xc0;
  ppppppplVar9 = param_1;
  if ((uVar7 >> 0xc & 1) != 0) {
    ppppppplVar9 = (long *******)&local_70;
    local_70 = param_1;
  }
  local_68 = param_3;
  if ((uVar8 & 6) != 0) {
    if ((uVar7 >> 3 & 1) == 0) {
      uVar11 = 0;
      uVar6 = 0x10;
      if ((uVar8 & 2) != 0) {
        uVar6 = 0x11;
      }
    }
    else {
      uVar6 = (undefined4)param_4[1];
    }
    uVar8 = FUN_0038be78(&local_68,0,0,local_7c,0,&local_78,param_3,uVar6,uVar11,(char)param_5,
                         param_6);
    if ((int)uVar8 == -1) {
      return uVar8;
    }
    if ((int)uVar8 == 0) {
      FUN_00379868();
      FUN_0037995c("crypto/asn1/tasn_dec.c",0x265,"asn1_template_noexp_d2i");
      FUN_00379a5c(0xd,0x8010a,0);
      return uVar8 & 0xffffffff;
    }
    pppppplVar10 = *ppppppplVar9;
    if (pppppplVar10 == (long ******)0x0) {
      pppppplVar10 = (long ******)FUN_0040bf0c();
      *ppppppplVar9 = pppppplVar10;
    }
    else {
      iVar3 = FUN_0040caf8(pppppplVar10);
      while (0 < iVar3) {
        local_88 = FUN_0040ca00(pppppplVar10);
        uVar4 = (*(code *)param_4[4])();
        FUN_0038ca24(&local_88,uVar4);
        iVar3 = FUN_0040caf8(pppppplVar10);
      }
      pppppplVar10 = *ppppppplVar9;
    }
    pcVar1 = local_78;
    pcVar2 = local_68;
    if (pppppplVar10 == (long ******)0x0) {
      FUN_00379868();
      FUN_0037995c("crypto/asn1/tasn_dec.c",0x278,"asn1_template_noexp_d2i");
      uVar4 = 0x8000f;
    }
    else {
      while( true ) {
        local_78 = pcVar1;
        local_68 = pcVar2;
        if ((long)pcVar2 < 1) {
          if (local_7c[0] == '\0') goto LAB_0038c4b8;
          FUN_00379868();
          FUN_0037995c("crypto/asn1/tasn_dec.c",0x29b,"asn1_template_noexp_d2i");
          uVar4 = 0x89;
          goto LAB_0038c418;
        }
        if (((pcVar2 != (char *)0x1) && (*pcVar1 == '\0')) && (pcVar1[1] == '\0')) break;
        local_88 = 0;
        uVar4 = (*(code *)param_4[4])();
        iVar3 = FUN_0038aa08(&local_88,&local_78,pcVar2,uVar4,0xffffffff,0,0,param_6,param_7,param_8
                             ,param_9);
        if (iVar3 < 1) {
          FUN_00379868();
          FUN_0037995c("crypto/asn1/tasn_dec.c",0x28e,"asn1_template_noexp_d2i");
          uVar6 = 0x8010a;
          goto LAB_0038c480;
        }
        local_68 = pcVar1 + ((long)local_68 - (long)local_78);
        iVar3 = FUN_0040c89c(*ppppppplVar9,local_88);
        pcVar1 = local_78;
        pcVar2 = local_68;
        if (iVar3 == 0) {
          FUN_00379868();
          FUN_0037995c("crypto/asn1/tasn_dec.c",0x295,"asn1_template_noexp_d2i");
          uVar6 = 0x8000f;
LAB_0038c480:
          FUN_00379a5c(0xd,uVar6,0);
          uVar4 = local_88;
          uVar5 = (*(code *)param_4[4])();
          FUN_0038c75c(uVar4,uVar5);
          return 0;
        }
      }
      local_78 = pcVar1 + 2;
      if (local_7c[0] != '\0') goto LAB_0038c4b8;
      FUN_00379868();
      FUN_0037995c("crypto/asn1/tasn_dec.c",0x283,"asn1_template_noexp_d2i");
      uVar4 = 0x9f;
    }
LAB_0038c418:
    FUN_00379a5c(0xd,uVar4,0);
    return 0;
  }
  uVar4 = (*(code *)param_4[4])();
  if ((uVar7 >> 3 & 1) == 0) {
    uVar8 = FUN_0038aa08(ppppppplVar9,&local_78,param_3,uVar4,0xffffffff,0,param_5,param_6,param_7,
                         param_8,param_9);
    if ((int)uVar8 == -1) {
      return uVar8;
    }
    if ((int)uVar8 == 0) {
      FUN_00379868();
      uVar4 = 0x2ad;
LAB_0038c3c0:
      FUN_0037995c("crypto/asn1/tasn_dec.c",uVar4,"asn1_template_noexp_d2i");
      FUN_00379a5c(0xd,0x8010a,0);
      return 0;
    }
  }
  else {
    uVar8 = FUN_0038aa08(ppppppplVar9,&local_78,param_3,uVar4,(int)param_4[1],uVar11,param_5,param_6
                         ,param_7,param_8,param_9);
    if ((int)uVar8 == -1) {
      return uVar8;
    }
    if ((int)uVar8 == 0) {
      FUN_00379868();
      uVar4 = 0x2a4;
      goto LAB_0038c3c0;
    }
  }
LAB_0038c4b8:
  *param_2 = (long)local_78;
  return 1;
}


// ===== 0038c510  FUN_0038c510 =====

undefined8 FUN_0038c510(int *param_1,long *param_2,char *param_3,ulong param_4,int param_5)

{
  size_t __n;
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 local_70 [4];
  char local_6c [4];
  size_t local_68;
  char *local_48;
  
  local_48 = (char *)*param_2;
  if ((param_1 == (int *)0x0) && ((param_4 & 1) == 0)) {
    local_48 = local_48 + (long)param_3;
  }
  else {
    if (0 < (long)param_3) {
      do {
        pcVar1 = local_48;
        if (((param_3 != (char *)0x1) && (*local_48 == '\0')) && (local_48[1] == '\0')) {
          if ((param_4 & 1) != 0) {
            local_48 = local_48 + 2;
            goto LAB_0038c56c;
          }
          FUN_00379868();
          FUN_0037995c("crypto/asn1/tasn_dec.c",0x426,"asn1_collect");
          uVar5 = 0x9f;
          goto LAB_0038c6d0;
        }
        iVar3 = FUN_0038be78(&local_68,0,0,local_70,local_6c,&local_48,param_3,0xffffffff,0,0,0);
        __n = local_68;
        if (iVar3 == 0) {
          FUN_00379868();
          FUN_0037995c("crypto/asn1/tasn_dec.c",0x42f,"asn1_collect");
          uVar5 = 0x8010a;
          goto LAB_0038c6d0;
        }
        if (local_6c[0] == '\0') {
          if (local_68 != 0) {
            if (param_1 != (int *)0x0) {
              iVar3 = *param_1;
              lVar4 = FUN_00388074(param_1,(long)iVar3 + local_68);
              pcVar2 = local_48;
              if (lVar4 == 0) {
                FUN_00379868();
                FUN_0037995c("crypto/asn1/tasn_dec.c",0x44d,"collect_data");
                uVar5 = 0x80007;
                goto LAB_0038c6d0;
              }
              memcpy((void *)(*(long *)(param_1 + 2) + (long)iVar3),local_48,__n);
              local_48 = pcVar2;
            }
            local_48 = local_48 + __n;
          }
        }
        else {
          if (4 < param_5) {
            FUN_00379868();
            FUN_0037995c("crypto/asn1/tasn_dec.c",0x436,"asn1_collect");
            uVar5 = 0xc5;
            goto LAB_0038c6d0;
          }
          uVar5 = FUN_0038c510(param_1,&local_48,local_68,local_70[0],param_5 + 1);
          if ((int)uVar5 == 0) {
            return uVar5;
          }
        }
        param_3 = pcVar1 + ((long)param_3 - (long)local_48);
      } while (0 < (long)param_3);
    }
    if ((param_4 & 1) != 0) {
      FUN_00379868();
      FUN_0037995c("crypto/asn1/tasn_dec.c",0x440,"asn1_collect");
      uVar5 = 0x89;
LAB_0038c6d0:
      FUN_00379a5c(0xd,uVar5,0);
      return 0;
    }
  }
LAB_0038c56c:
  *param_2 = (long)local_48;
  return 1;
}


// ===== 0038c75c  FUN_0038c75c =====

void FUN_0038c75c(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  FUN_0038c784(&local_18,param_2,0);
  return;
}


// ===== 0038c784  FUN_0038c784 =====

void FUN_0038c784(long *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  bVar1 = *param_2;
  lVar7 = *(long *)(param_2 + 0x20);
  if ((bVar1 != 0) && (*param_1 == 0)) {
    return;
  }
  if ((lVar7 == 0) || (pcVar8 = *(code **)(lVar7 + 0x18), pcVar8 == (code *)0x0)) {
    pcVar8 = (code *)0x0;
    if (bVar1 < 4) goto LAB_0038c7d0;
LAB_0038c88c:
    if (bVar1 == 4) {
      if (lVar7 == 0) {
        return;
      }
      if (*(code **)(lVar7 + 0x10) == (code *)0x0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0038c940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar7 + 0x10))(param_1,param_2);
      return;
    }
    if (bVar1 == 5) {
LAB_0038c8f8:
      FUN_0038cb0c(param_1,param_2);
      return;
    }
    if (bVar1 != 6) {
      return;
    }
  }
  else {
    if (3 < bVar1) goto LAB_0038c88c;
LAB_0038c7d0:
    if (bVar1 == 0) {
      if (*(long *)(param_2 + 0x10) != 0) {
        FUN_0038ca2c(param_1);
        return;
      }
      goto LAB_0038c8f8;
    }
    if (bVar1 != 1) {
      if (bVar1 != 2) {
        return;
      }
      if ((pcVar8 != (code *)0x0) && (iVar2 = (*pcVar8)(2,param_1,param_2,0), iVar2 == 2)) {
        return;
      }
      uVar3 = FUN_0038cc44(param_1,param_2);
      if ((-1 < (int)uVar3) && ((long)(ulong)uVar3 < *(long *)(param_2 + 0x18))) {
        lVar7 = *(long *)(param_2 + 0x10) + (ulong)uVar3 * 0x28;
        uVar4 = FUN_0038cfac(param_1,lVar7);
        FUN_0038ca2c(uVar4,lVar7);
      }
      if (pcVar8 != (code *)0x0) {
        (*pcVar8)(3,param_1,param_2,0);
      }
      if (param_3 != 0) {
        return;
      }
      lVar7 = *param_1;
      uVar4 = 0x4b;
      goto LAB_0038ca04;
    }
  }
  iVar2 = FUN_0038cc78(param_1,0xffffffff,param_2);
  if ((iVar2 == 0) &&
     ((pcVar8 == (code *)0x0 || (iVar2 = (*pcVar8)(2,param_1,param_2,0), iVar2 != 2)))) {
    FUN_0038cdc0(param_1,param_2);
    if (0 < *(long *)(param_2 + 0x18)) {
      lVar7 = 0;
      lVar6 = *(long *)(param_2 + 0x10) + *(long *)(param_2 + 0x18) * 0x28;
      do {
        lVar6 = lVar6 + -0x28;
        lVar5 = FUN_0038cfcc(*param_1,lVar6,0);
        if (lVar5 != 0) {
          uVar4 = FUN_0038cfac(param_1,lVar5);
          FUN_0038ca2c(uVar4,lVar5);
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(long *)(param_2 + 0x18));
    }
    if (pcVar8 != (code *)0x0) {
      (*pcVar8)(3,param_1,param_2,0);
    }
    if (param_3 == 0) {
      lVar7 = *param_1;
      uVar4 = 0x73;
LAB_0038ca04:
      FUN_003c86b4(lVar7,"crypto/asn1/tasn_fre.c",uVar4);
      *param_1 = 0;
      return;
    }
  }
  return;
}


// ===== 0038ca24  FUN_0038ca24 =====

void FUN_0038ca24(undefined8 param_1,undefined8 param_2)

{
  FUN_0038c784(param_1,param_2,0);
  return;
}


// ===== 0038ca2c  FUN_0038ca2c =====

void FUN_0038ca2c(undefined8 ***param_1,ulong *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 **ppuVar4;
  uint uVar5;
  undefined8 local_48;
  undefined8 **local_28;
  
  uVar5 = (uint)*param_2;
  if ((uVar5 >> 0xc & 1) != 0) {
    local_28 = param_1;
    param_1 = &local_28;
  }
  if ((*param_2 & 6) != 0) {
    ppuVar4 = *param_1;
    iVar1 = FUN_0040caf8(ppuVar4);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        local_48 = FUN_0040cb0c(ppuVar4,iVar1);
        uVar3 = (*(code *)param_2[4])();
        FUN_0038c784(&local_48,uVar3,uVar5 & 0x1000);
        iVar1 = iVar1 + 1;
        iVar2 = FUN_0040caf8(ppuVar4);
      } while (iVar1 < iVar2);
    }
    FUN_0040bd78(ppuVar4);
    *param_1 = (undefined8 **)0x0;
    return;
  }
  uVar3 = (*(code *)param_2[4])();
  FUN_0038c784(param_1,uVar3,uVar5 & 0x1000);
  return;
}


// ===== 0038cb0c  FUN_0038cb0c =====

void FUN_0038cb0c(long *param_1,char *param_2,int param_3)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  
  if (param_2 == (char *)0x0) {
    piVar3 = (int *)*param_1;
    param_1 = (long *)(piVar3 + 2);
    lVar1 = *param_1;
    if (lVar1 == 0) {
      return;
    }
    iVar2 = *piVar3;
LAB_0038cba8:
    if (iVar2 < 5) {
      if (iVar2 == -4) {
        FUN_0038cb0c(param_1,0,0);
        FUN_003c86b4(*param_1,"crypto/asn1/tasn_fre.c",200);
        goto LAB_0038cc20;
      }
      if (iVar2 == 1) {
        if (param_2 == (char *)0x0) {
          *(undefined4 *)param_1 = 0xffffffff;
          return;
        }
LAB_0038cbc4:
        *(undefined4 *)param_1 = *(undefined4 *)(param_2 + 0x28);
        return;
      }
    }
    else {
      if (iVar2 == 5) goto LAB_0038cc20;
      if (iVar2 == 6) {
        FUN_0039a0f4(lVar1);
        goto LAB_0038cc20;
      }
    }
  }
  else {
    lVar1 = *(long *)(param_2 + 0x20);
    if (param_3 == 0) {
      if ((lVar1 != 0) && (*(code **)(lVar1 + 0x18) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0038cb68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar1 + 0x18))();
        return;
      }
    }
    else if ((lVar1 != 0) && (*(code **)(lVar1 + 0x20) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0038cb38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 0x20))();
      return;
    }
    if (*param_2 != '\x05') {
      iVar2 = *(int *)(param_2 + 8);
      if (iVar2 == 1) goto LAB_0038cbc4;
      lVar1 = *param_1;
      if (lVar1 == 0) {
        return;
      }
      goto LAB_0038cba8;
    }
    lVar1 = *param_1;
    if (lVar1 == 0) {
      return;
    }
  }
  FUN_0038eebc(lVar1,param_3);
LAB_0038cc20:
  *param_1 = 0;
  return;
}


// ===== 0038cc44  FUN_0038cc44 =====

undefined4 FUN_0038cc44(long *param_1,long param_2)

{
  return *(undefined4 *)(*param_1 + *(long *)(param_2 + 8));
}


// ===== 0038cc54  FUN_0038cc54 =====

undefined4 FUN_0038cc54(long *param_1,long param_2)

{
  return *(undefined4 *)(*param_1 + *(long *)(param_2 + 8));
}


// ===== 0038cc64  FUN_0038cc64 =====

undefined4 FUN_0038cc64(long *param_1,undefined4 param_2,long param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*param_1 + *(long *)(param_3 + 8));
  *(undefined4 *)(*param_1 + *(long *)(param_3 + 8)) = param_2;
  return uVar1;
}


// ===== 0038cc78  FUN_0038cc78 =====

int FUN_0038cc78(long *param_1,int param_2,char *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (((*param_3 != '\x06') && (*param_3 != '\x01')) ||
     (lVar3 = *(long *)(param_3 + 0x20), lVar3 == 0)) {
    return 0;
  }
  if ((*(byte *)(lVar3 + 8) & 1) == 0) {
    iVar1 = 0;
  }
  else {
    lVar2 = (long)*(int *)(lVar3 + 0xc);
    lVar3 = (long)*(int *)(lVar3 + 0x14);
    lVar4 = *param_1;
    if (param_2 == -1) {
      iVar1 = *(int *)(lVar4 + lVar2) + -1;
      *(int *)(lVar4 + lVar2) = iVar1;
      if (iVar1 == 0) {
        FUN_003d51ac(*(undefined8 *)(lVar4 + lVar3));
        *(undefined8 *)(lVar4 + lVar3) = 0;
        return 0;
      }
    }
    else {
      if (param_2 == 1) {
        iVar1 = *(int *)(lVar4 + lVar2) + 1;
        *(int *)(lVar4 + lVar2) = iVar1;
        return iVar1;
      }
      if (param_2 != 0) {
        return -1;
      }
      *(undefined4 *)(lVar4 + lVar2) = 1;
      lVar2 = FUN_003d5150();
      iVar1 = 1;
      *(long *)(lVar4 + lVar3) = lVar2;
      if (lVar2 == 0) {
        FUN_00379868(1);
        FUN_0037995c("crypto/asn1/tasn_utl.c",0x5b,"ossl_asn1_do_lock");
        FUN_00379a5c(0xd,0x8000f,0);
        return -1;
      }
    }
  }
  return iVar1;
}


// ===== 0038cd8c  FUN_0038cd8c =====

void FUN_0038cd8c(long *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  if ((((param_1 != (long *)0x0) && (*param_1 != 0)) &&
      (lVar2 = *(long *)(param_2 + 0x20), lVar2 != 0)) && ((*(byte *)(lVar2 + 8) >> 1 & 1) != 0)) {
    puVar1 = (undefined8 *)(*param_1 + (long)*(int *)(lVar2 + 0x20));
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 1;
  }
  return;
}


// ===== 0038cdc0  FUN_0038cdc0 =====

void FUN_0038cdc0(long *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  if ((((param_1 != (long *)0x0) && (*param_1 != 0)) &&
      (lVar2 = *(long *)(param_2 + 0x20), lVar2 != 0)) && ((*(byte *)(lVar2 + 8) >> 1 & 1) != 0)) {
    puVar1 = (undefined8 *)(*param_1 + (long)*(int *)(lVar2 + 0x20));
    FUN_003c86b4(*puVar1,"crypto/asn1/tasn_utl.c",0x9d);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 1;
  }
  return;
}


// ===== 0038ce1c  FUN_0038ce1c =====

void * FUN_0038ce1c(long *param_1,void *param_2,uint param_3,long param_4)

{
  undefined8 *puVar1;
  void *__dest;
  long lVar2;
  ulong __n;
  
  if (((param_1 == (long *)0x0) || (*param_1 == 0)) ||
     (lVar2 = *(long *)(param_4 + 0x20), lVar2 == 0)) {
    return (void *)0x1;
  }
  if ((*(byte *)(lVar2 + 8) >> 1 & 1) == 0) {
    __dest = (void *)0x1;
  }
  else {
    puVar1 = (undefined8 *)(*param_1 + (long)*(int *)(lVar2 + 0x20));
    FUN_003c86b4(*puVar1,"crypto/asn1/tasn_utl.c",0xac);
    if ((int)param_3 < 1) {
      return (void *)0x0;
    }
    __n = (ulong)param_3;
    __dest = (void *)FUN_003c83a4(__n,"crypto/asn1/tasn_utl.c",0xaf);
    *puVar1 = __dest;
    if (__dest != (void *)0x0) {
      memcpy(__dest,param_2,__n);
      puVar1[1] = __n;
      *(undefined4 *)(puVar1 + 2) = 0;
      return (void *)0x1;
    }
  }
  return __dest;
}


// ===== 0038ceec  FUN_0038ceec =====

undefined8 FUN_0038ceec(undefined4 *param_1,long *param_2,long *param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (((param_3 == (long *)0x0) || (*param_3 == 0)) ||
     (lVar2 = *(long *)(param_4 + 0x20), lVar2 == 0)) {
    return 0;
  }
  if ((*(byte *)(lVar2 + 8) >> 1 & 1) == 0) {
    return 0;
  }
  puVar1 = (undefined8 *)(*param_3 + (long)*(int *)(lVar2 + 0x20));
  if (*(int *)(puVar1 + 2) != 0) {
    return 0;
  }
  if (param_2 != (long *)0x0) {
    memcpy((void *)*param_2,(void *)*puVar1,puVar1[1]);
    *param_2 = *param_2 + puVar1[1];
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (int)puVar1[1];
  }
  return 1;
}


// ===== 0038cfac  FUN_0038cfac =====

long FUN_0038cfac(long *param_1,long param_2)

{
  return *param_1 + *(long *)(param_2 + 0x10);
}


// ===== 0038cfbc  FUN_0038cfbc =====

long FUN_0038cfbc(long *param_1,long param_2)

{
  return *param_1 + *(long *)(param_2 + 0x10);
}


// ===== 0038cfcc  FUN_0038cfcc =====

long FUN_0038cfcc(long param_1,long param_2,int param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long local_38;
  
  if ((*(byte *)(param_2 + 1) & 3) == 0) {
    return param_2;
  }
  lVar2 = (**(code **)(param_2 + 0x20))();
  if (*(long *)(param_1 + *(long *)(lVar2 + 8)) == 0) {
    lVar2 = *(long *)(lVar2 + 0x30);
  }
  else {
    if ((*(byte *)(param_2 + 1) & 1) == 0) {
      local_38 = FUN_0038dea4();
      pcVar4 = *(code **)(lVar2 + 0x10);
    }
    else {
      iVar1 = FUN_003dd5b4();
      local_38 = (long)iVar1;
      pcVar4 = *(code **)(lVar2 + 0x10);
    }
    if ((pcVar4 != (code *)0x0) && (iVar1 = (*pcVar4)(&local_38), iVar1 == 0)) {
      FUN_00379868();
      uVar3 = 0x105;
      goto LAB_0038d0dc;
    }
    lVar5 = *(long *)(lVar2 + 0x20);
    if (0 < lVar5) {
      lVar6 = *(long *)(lVar2 + 0x18) + 8;
      do {
        if (*(long *)(lVar6 + -8) == local_38) {
          return lVar6;
        }
        lVar5 = lVar5 + -1;
        lVar6 = lVar6 + 0x30;
      } while (lVar5 != 0);
    }
    lVar2 = *(long *)(lVar2 + 0x28);
  }
  if (lVar2 != 0) {
    return lVar2;
  }
  if (param_3 == 0) {
    return 0;
  }
  FUN_00379868();
  uVar3 = 0x11e;
LAB_0038d0dc:
  FUN_0037995c("crypto/asn1/tasn_utl.c",uVar3,"ossl_asn1_do_adb");
  FUN_00379a5c(0xd,0xa4,0);
  return 0;
}


// ===== 0038d10c  thunk_FUN_0038ed00 =====

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


// ===== 0038d110  FUN_0038d110 =====

int FUN_0038d110(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_1 + 4) & 0x100;
  if (uVar1 == (*(uint *)(param_2 + 4) & 0x100)) {
    iVar3 = FUN_0038ef94();
    iVar2 = -iVar3;
    if (uVar1 == 0) {
      iVar2 = iVar3;
    }
    return iVar2;
  }
  iVar2 = -1;
  if (uVar1 == 0) {
    iVar2 = 1;
  }
  return iVar2;
}


// ===== 0038d164  FUN_0038d164 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0038d164(uint *param_1,long *param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long lVar4;
  uint uVar5;
  undefined1 *puVar6;
  long lVar7;
  byte *pbVar8;
  uint uVar9;
  ulong uVar10;
  byte *pbVar11;
  uint uVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong uVar15;
  undefined1 (*pauVar16) [16];
  ulong uVar17;
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
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  byte bVar91;
  byte bVar92;
  byte bVar93;
  byte bVar94;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  byte bVar98;
  undefined1 auVar83 [16];
  byte bVar99;
  byte bVar101;
  byte bVar102;
  byte bVar103;
  byte bVar104;
  byte bVar105;
  byte bVar106;
  byte bVar107;
  byte bVar108;
  byte bVar109;
  byte bVar110;
  byte bVar111;
  byte bVar112;
  byte bVar113;
  byte bVar114;
  byte bVar115;
  undefined1 auVar100 [16];
  byte bVar116;
  byte bVar118;
  byte bVar119;
  byte bVar120;
  byte bVar121;
  byte bVar122;
  byte bVar123;
  undefined8 uVar117;
  byte bVar124;
  byte bVar125;
  byte bVar127;
  byte bVar128;
  byte bVar129;
  byte bVar130;
  byte bVar131;
  byte bVar132;
  undefined8 uVar126;
  byte bVar133;
  byte bVar134;
  byte bVar136;
  byte bVar137;
  byte bVar138;
  byte bVar139;
  byte bVar140;
  byte bVar141;
  undefined8 uVar135;
  byte bVar142;
  byte bVar143;
  byte bVar145;
  byte bVar146;
  byte bVar147;
  byte bVar148;
  byte bVar149;
  byte bVar150;
  undefined8 uVar144;
  byte bVar151;
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  
  pbVar8 = *(byte **)(param_1 + 2);
  uVar9 = 0;
  lVar7 = 0;
  lVar4 = 1;
  if (pbVar8 == (byte *)0x0) {
    uVar13 = 0;
    goto LAB_0038d38c;
  }
  uVar12 = *param_1;
  uVar13 = 0;
  if (uVar12 == 0) goto LAB_0038d38c;
  bVar18 = *pbVar8;
  lVar7 = (long)(int)uVar12;
  uVar5 = (uint)((char)bVar18 < '\0');
  if ((*(byte *)((long)param_1 + 5) & 1) == 0) {
    uVar9 = 0;
  }
  else if (bVar18 < 0x81) {
    if (bVar18 == 0x80) {
      if (uVar12 < 2) {
        uVar5 = 0;
      }
      else {
        if (uVar12 < 9) {
          uVar9 = 0;
          uVar10 = 1;
LAB_0038d360:
          lVar4 = lVar7 - uVar10;
          pbVar11 = pbVar8 + uVar10;
          do {
            lVar4 = lVar4 + -1;
            uVar9 = uVar9 | *pbVar11;
            pbVar11 = pbVar11 + 1;
          } while (lVar4 != 0);
        }
        else {
          uVar13 = lVar7 - 1;
          if (uVar12 < 0x21) {
            uVar9 = 0;
            uVar15 = 0;
LAB_0038d2f4:
            bVar22 = 0;
            bVar23 = 0;
            bVar24 = 0;
            bVar25 = 0;
            bVar26 = 0;
            bVar27 = 0;
            bVar28 = 0;
            bVar29 = 0;
            bVar30 = 0;
            bVar31 = 0;
            bVar32 = 0;
            bVar33 = 0;
            bVar34 = 0;
            bVar35 = 0;
            bVar36 = 0;
            bVar37 = 0;
            bVar38 = 0;
            bVar39 = 0;
            bVar40 = 0;
            bVar41 = 0;
            bVar42 = 0;
            bVar43 = 0;
            bVar44 = 0;
            bVar45 = 0;
            bVar46 = 0;
            bVar47 = 0;
            bVar48 = 0;
            bVar49 = 0;
            auVar154[8] = UNK_00200588;
            auVar154._0_8_ = _DAT_00200580;
            auVar155[8] = UNK_00200ab8;
            auVar155._0_8_ = _DAT_00200ab0;
            bVar18 = (byte)uVar9;
            bVar19 = (byte)(uVar9 >> 8);
            bVar20 = (byte)(uVar9 >> 0x10);
            bVar21 = (byte)(uVar9 >> 0x18);
            uVar17 = uVar13 & 0xfffffffffffffff8;
            uVar10 = uVar17 | 1;
            lVar4 = uVar15 - uVar17;
            puVar14 = (ulong *)(pbVar8 + uVar15 + 1);
            do {
              auVar156._0_8_ = *puVar14;
              auVar156._8_8_ = 0;
              lVar4 = lVar4 + 8;
              auVar154[9] = (char)_UNK_00200589;
              auVar154[10] = (char)((uint7)_UNK_00200589 >> 8);
              auVar154[0xb] = (char)((uint7)_UNK_00200589 >> 0x10);
              auVar154[0xc] = (char)((uint7)_UNK_00200589 >> 0x18);
              auVar154[0xd] = (char)((uint7)_UNK_00200589 >> 0x20);
              auVar154[0xe] = (char)((uint7)_UNK_00200589 >> 0x28);
              auVar154[0xf] = (char)((uint7)_UNK_00200589 >> 0x30);
              auVar100 = a64_TBL(ZEXT816(0),auVar156,auVar154);
              auVar155[9] = (char)_UNK_00200ab9;
              auVar155[10] = (char)((uint7)_UNK_00200ab9 >> 8);
              auVar155[0xb] = (char)((uint7)_UNK_00200ab9 >> 0x10);
              auVar155[0xc] = (char)((uint7)_UNK_00200ab9 >> 0x18);
              auVar155[0xd] = (char)((uint7)_UNK_00200ab9 >> 0x20);
              auVar155[0xe] = (char)((uint7)_UNK_00200ab9 >> 0x28);
              auVar155[0xf] = (char)((uint7)_UNK_00200ab9 >> 0x30);
              auVar83 = a64_TBL(ZEXT816(0),auVar156,auVar155);
              bVar34 = bVar34 | auVar83[0];
              bVar35 = bVar35 | auVar83[1];
              bVar36 = bVar36 | auVar83[2];
              bVar37 = bVar37 | auVar83[3];
              bVar38 = bVar38 | auVar83[4];
              bVar39 = bVar39 | auVar83[5];
              bVar40 = bVar40 | auVar83[6];
              bVar41 = bVar41 | auVar83[7];
              bVar42 = bVar42 | auVar83[8];
              bVar43 = bVar43 | auVar83[9];
              bVar44 = bVar44 | auVar83[10];
              bVar45 = bVar45 | auVar83[0xb];
              bVar46 = bVar46 | auVar83[0xc];
              bVar47 = bVar47 | auVar83[0xd];
              bVar48 = bVar48 | auVar83[0xe];
              bVar49 = bVar49 | auVar83[0xf];
              bVar18 = bVar18 | auVar100[0];
              bVar19 = bVar19 | auVar100[1];
              bVar20 = bVar20 | auVar100[2];
              bVar21 = bVar21 | auVar100[3];
              bVar22 = bVar22 | auVar100[4];
              bVar23 = bVar23 | auVar100[5];
              bVar24 = bVar24 | auVar100[6];
              bVar25 = bVar25 | auVar100[7];
              bVar26 = bVar26 | auVar100[8];
              bVar27 = bVar27 | auVar100[9];
              bVar28 = bVar28 | auVar100[10];
              bVar29 = bVar29 | auVar100[0xb];
              bVar30 = bVar30 | auVar100[0xc];
              bVar31 = bVar31 | auVar100[0xd];
              bVar32 = bVar32 | auVar100[0xe];
              bVar33 = bVar33 | auVar100[0xf];
              puVar14 = puVar14 + 1;
            } while (lVar4 != 0);
            bVar18 = bVar18 | bVar34;
            bVar19 = bVar19 | bVar35;
            bVar20 = bVar20 | bVar36;
            bVar21 = bVar21 | bVar37;
            bVar22 = bVar22 | bVar38;
            bVar23 = bVar23 | bVar39;
            bVar24 = bVar24 | bVar40;
            bVar25 = bVar25 | bVar41;
            auVar157[1] = bVar19;
            auVar157[0] = bVar18;
            auVar157[2] = bVar20;
            auVar157[3] = bVar21;
            auVar157[4] = bVar22;
            auVar157[5] = bVar23;
            auVar157[6] = bVar24;
            auVar157[7] = bVar25;
            auVar157[8] = bVar26 | bVar42;
            auVar157[9] = bVar27 | bVar43;
            auVar157[10] = bVar28 | bVar44;
            auVar157[0xb] = bVar29 | bVar45;
            auVar157[0xc] = bVar30 | bVar46;
            auVar157[0xd] = bVar31 | bVar47;
            auVar157[0xe] = bVar32 | bVar48;
            auVar157[0xf] = bVar33 | bVar49;
            auVar158[1] = bVar19;
            auVar158[0] = bVar18;
            auVar158[2] = bVar20;
            auVar158[3] = bVar21;
            auVar158[4] = bVar22;
            auVar158[5] = bVar23;
            auVar158[6] = bVar24;
            auVar158[7] = bVar25;
            auVar158[8] = bVar26 | bVar42;
            auVar158[9] = bVar27 | bVar43;
            auVar158[10] = bVar28 | bVar44;
            auVar158[0xb] = bVar29 | bVar45;
            auVar158[0xc] = bVar30 | bVar46;
            auVar158[0xd] = bVar31 | bVar47;
            auVar158[0xe] = bVar32 | bVar48;
            auVar158[0xf] = bVar33 | bVar49;
            auVar83 = NEON_ext(auVar157,auVar158,8,1);
            uVar9 = CONCAT13(bVar21 | auVar83[3],
                             CONCAT12(bVar20 | auVar83[2],
                                      CONCAT11(bVar19 | auVar83[1],bVar18 | auVar83[0])));
            uVar9 = uVar9 | (uint)(CONCAT17(bVar25 | auVar83[7],
                                            CONCAT16(bVar24 | auVar83[6],
                                                     CONCAT15(bVar23 | auVar83[5],
                                                              CONCAT14(bVar22 | auVar83[4],uVar9))))
                                  >> 0x20);
            if (uVar13 != uVar17) goto LAB_0038d360;
          }
          else {
            bVar18 = 0;
            bVar19 = 0;
            bVar20 = 0;
            bVar21 = 0;
            bVar22 = 0;
            bVar23 = 0;
            bVar24 = 0;
            bVar25 = 0;
            bVar26 = 0;
            bVar27 = 0;
            bVar28 = 0;
            bVar29 = 0;
            bVar30 = 0;
            bVar31 = 0;
            bVar32 = 0;
            bVar33 = 0;
            bVar50 = 0;
            bVar51 = 0;
            bVar52 = 0;
            bVar53 = 0;
            bVar54 = 0;
            bVar55 = 0;
            bVar56 = 0;
            bVar57 = 0;
            bVar58 = 0;
            bVar59 = 0;
            bVar60 = 0;
            bVar61 = 0;
            bVar62 = 0;
            bVar63 = 0;
            bVar64 = 0;
            bVar65 = 0;
            bVar34 = 0;
            bVar35 = 0;
            bVar36 = 0;
            bVar37 = 0;
            bVar38 = 0;
            bVar39 = 0;
            bVar40 = 0;
            bVar41 = 0;
            bVar42 = 0;
            bVar43 = 0;
            bVar44 = 0;
            bVar45 = 0;
            bVar46 = 0;
            bVar47 = 0;
            bVar48 = 0;
            bVar49 = 0;
            bVar66 = 0;
            bVar67 = 0;
            bVar68 = 0;
            bVar69 = 0;
            bVar70 = 0;
            bVar71 = 0;
            bVar72 = 0;
            bVar73 = 0;
            bVar74 = 0;
            bVar75 = 0;
            bVar76 = 0;
            bVar77 = 0;
            bVar78 = 0;
            bVar79 = 0;
            bVar80 = 0;
            bVar81 = 0;
            bVar82 = 0;
            bVar84 = 0;
            bVar85 = 0;
            bVar86 = 0;
            bVar87 = 0;
            bVar88 = 0;
            bVar89 = 0;
            bVar90 = 0;
            bVar91 = 0;
            bVar92 = 0;
            bVar93 = 0;
            bVar94 = 0;
            bVar95 = 0;
            bVar96 = 0;
            bVar97 = 0;
            bVar98 = 0;
            uVar117 = 0;
            uVar126 = 0;
            bVar99 = 0;
            bVar101 = 0;
            bVar102 = 0;
            bVar103 = 0;
            bVar104 = 0;
            bVar105 = 0;
            bVar106 = 0;
            bVar107 = 0;
            bVar108 = 0;
            bVar109 = 0;
            bVar110 = 0;
            bVar111 = 0;
            bVar112 = 0;
            bVar113 = 0;
            bVar114 = 0;
            bVar115 = 0;
            uVar135 = 0;
            uVar144 = 0;
            uVar15 = uVar13 & 0xffffffffffffffe0;
            auVar100[8] = UNK_00200588;
            auVar100._0_8_ = _DAT_00200580;
            auVar100._9_7_ = _UNK_00200589;
            auVar83[8] = UNK_00200588;
            auVar83._0_8_ = _DAT_00200580;
            auVar83._9_7_ = _UNK_00200589;
            auVar3[8] = UNK_00200ab8;
            auVar3._0_8_ = _DAT_00200ab0;
            auVar3._9_7_ = _UNK_00200ab9;
            auVar2[8] = UNK_00200ab8;
            auVar2._0_8_ = _DAT_00200ab0;
            auVar2._9_7_ = _UNK_00200ab9;
            pauVar16 = (undefined1 (*) [16])(pbVar8 + 0x11);
            uVar10 = uVar15;
            do {
              auVar152 = pauVar16[-1];
              auVar153 = *pauVar16;
              uVar10 = uVar10 - 0x20;
              pauVar16 = pauVar16 + 2;
              auVar154 = a64_TBL(ZEXT816(0),auVar152,auVar2);
              auVar155 = a64_TBL(ZEXT816(0),auVar152,_DAT_002007c0);
              auVar156 = a64_TBL(ZEXT816(0),auVar152,_DAT_002000f0);
              auVar152 = a64_TBL(ZEXT816(0),auVar152,auVar83);
              auVar157 = a64_TBL(ZEXT816(0),auVar153,_DAT_002007c0);
              auVar158 = a64_TBL(ZEXT816(0),auVar153,_DAT_002000f0);
              auVar159 = a64_TBL(ZEXT816(0),auVar153,auVar100);
              auVar153 = a64_TBL(ZEXT816(0),auVar153,auVar3);
              bVar34 = bVar34 | auVar155[0];
              bVar35 = bVar35 | auVar155[1];
              bVar36 = bVar36 | auVar155[2];
              bVar37 = bVar37 | auVar155[3];
              bVar38 = bVar38 | auVar155[4];
              bVar39 = bVar39 | auVar155[5];
              bVar40 = bVar40 | auVar155[6];
              bVar41 = bVar41 | auVar155[7];
              bVar42 = bVar42 | auVar155[8];
              bVar43 = bVar43 | auVar155[9];
              bVar44 = bVar44 | auVar155[10];
              bVar45 = bVar45 | auVar155[0xb];
              bVar46 = bVar46 | auVar155[0xc];
              bVar47 = bVar47 | auVar155[0xd];
              bVar48 = bVar48 | auVar155[0xe];
              bVar49 = bVar49 | auVar155[0xf];
              bVar50 = bVar50 | auVar154[0];
              bVar51 = bVar51 | auVar154[1];
              bVar52 = bVar52 | auVar154[2];
              bVar53 = bVar53 | auVar154[3];
              bVar54 = bVar54 | auVar154[4];
              bVar55 = bVar55 | auVar154[5];
              bVar56 = bVar56 | auVar154[6];
              bVar57 = bVar57 | auVar154[7];
              bVar58 = bVar58 | auVar154[8];
              bVar59 = bVar59 | auVar154[9];
              bVar60 = bVar60 | auVar154[10];
              bVar61 = bVar61 | auVar154[0xb];
              bVar62 = bVar62 | auVar154[0xc];
              bVar63 = bVar63 | auVar154[0xd];
              bVar64 = bVar64 | auVar154[0xe];
              bVar65 = bVar65 | auVar154[0xf];
              bVar66 = bVar66 | auVar156[0];
              bVar67 = bVar67 | auVar156[1];
              bVar68 = bVar68 | auVar156[2];
              bVar69 = bVar69 | auVar156[3];
              bVar70 = bVar70 | auVar156[4];
              bVar71 = bVar71 | auVar156[5];
              bVar72 = bVar72 | auVar156[6];
              bVar73 = bVar73 | auVar156[7];
              bVar74 = bVar74 | auVar156[8];
              bVar75 = bVar75 | auVar156[9];
              bVar76 = bVar76 | auVar156[10];
              bVar77 = bVar77 | auVar156[0xb];
              bVar78 = bVar78 | auVar156[0xc];
              bVar79 = bVar79 | auVar156[0xd];
              bVar80 = bVar80 | auVar156[0xe];
              bVar81 = bVar81 | auVar156[0xf];
              bVar18 = bVar18 | auVar152[0];
              bVar19 = bVar19 | auVar152[1];
              bVar20 = bVar20 | auVar152[2];
              bVar21 = bVar21 | auVar152[3];
              bVar22 = bVar22 | auVar152[4];
              bVar23 = bVar23 | auVar152[5];
              bVar24 = bVar24 | auVar152[6];
              bVar25 = bVar25 | auVar152[7];
              bVar26 = bVar26 | auVar152[8];
              bVar27 = bVar27 | auVar152[9];
              bVar28 = bVar28 | auVar152[10];
              bVar29 = bVar29 | auVar152[0xb];
              bVar30 = bVar30 | auVar152[0xc];
              bVar31 = bVar31 | auVar152[0xd];
              bVar32 = bVar32 | auVar152[0xe];
              bVar33 = bVar33 | auVar152[0xf];
              bVar99 = bVar99 | auVar157[0];
              bVar101 = bVar101 | auVar157[1];
              bVar102 = bVar102 | auVar157[2];
              bVar103 = bVar103 | auVar157[3];
              bVar104 = bVar104 | auVar157[4];
              bVar105 = bVar105 | auVar157[5];
              bVar106 = bVar106 | auVar157[6];
              bVar107 = bVar107 | auVar157[7];
              bVar108 = bVar108 | auVar157[8];
              bVar109 = bVar109 | auVar157[9];
              bVar110 = bVar110 | auVar157[10];
              bVar111 = bVar111 | auVar157[0xb];
              bVar112 = bVar112 | auVar157[0xc];
              bVar113 = bVar113 | auVar157[0xd];
              bVar114 = bVar114 | auVar157[0xe];
              bVar115 = bVar115 | auVar157[0xf];
              bVar134 = (byte)uVar135 | auVar158[0];
              bVar136 = (byte)((ulong)uVar135 >> 8) | auVar158[1];
              bVar137 = (byte)((ulong)uVar135 >> 0x10) | auVar158[2];
              bVar138 = (byte)((ulong)uVar135 >> 0x18) | auVar158[3];
              bVar139 = (byte)((ulong)uVar135 >> 0x20) | auVar158[4];
              bVar140 = (byte)((ulong)uVar135 >> 0x28) | auVar158[5];
              bVar141 = (byte)((ulong)uVar135 >> 0x30) | auVar158[6];
              bVar142 = (byte)((ulong)uVar135 >> 0x38) | auVar158[7];
              uVar135 = CONCAT17(bVar142,CONCAT16(bVar141,CONCAT15(bVar140,CONCAT14(bVar139,CONCAT13
                                                  (bVar138,CONCAT12(bVar137,CONCAT11(bVar136,bVar134
                                                                                    )))))));
              bVar143 = (byte)uVar144 | auVar158[8];
              bVar145 = (byte)((ulong)uVar144 >> 8) | auVar158[9];
              bVar146 = (byte)((ulong)uVar144 >> 0x10) | auVar158[10];
              bVar147 = (byte)((ulong)uVar144 >> 0x18) | auVar158[0xb];
              bVar148 = (byte)((ulong)uVar144 >> 0x20) | auVar158[0xc];
              bVar149 = (byte)((ulong)uVar144 >> 0x28) | auVar158[0xd];
              bVar150 = (byte)((ulong)uVar144 >> 0x30) | auVar158[0xe];
              bVar151 = (byte)((ulong)uVar144 >> 0x38) | auVar158[0xf];
              uVar144 = CONCAT17(bVar151,CONCAT16(bVar150,CONCAT15(bVar149,CONCAT14(bVar148,CONCAT13
                                                  (bVar147,CONCAT12(bVar146,CONCAT11(bVar145,bVar143
                                                                                    )))))));
              bVar116 = (byte)uVar117 | auVar153[0];
              bVar118 = (byte)((ulong)uVar117 >> 8) | auVar153[1];
              bVar119 = (byte)((ulong)uVar117 >> 0x10) | auVar153[2];
              bVar120 = (byte)((ulong)uVar117 >> 0x18) | auVar153[3];
              bVar121 = (byte)((ulong)uVar117 >> 0x20) | auVar153[4];
              bVar122 = (byte)((ulong)uVar117 >> 0x28) | auVar153[5];
              bVar123 = (byte)((ulong)uVar117 >> 0x30) | auVar153[6];
              bVar124 = (byte)((ulong)uVar117 >> 0x38) | auVar153[7];
              uVar117 = CONCAT17(bVar124,CONCAT16(bVar123,CONCAT15(bVar122,CONCAT14(bVar121,CONCAT13
                                                  (bVar120,CONCAT12(bVar119,CONCAT11(bVar118,bVar116
                                                                                    )))))));
              bVar125 = (byte)uVar126 | auVar153[8];
              bVar127 = (byte)((ulong)uVar126 >> 8) | auVar153[9];
              bVar128 = (byte)((ulong)uVar126 >> 0x10) | auVar153[10];
              bVar129 = (byte)((ulong)uVar126 >> 0x18) | auVar153[0xb];
              bVar130 = (byte)((ulong)uVar126 >> 0x20) | auVar153[0xc];
              bVar131 = (byte)((ulong)uVar126 >> 0x28) | auVar153[0xd];
              bVar132 = (byte)((ulong)uVar126 >> 0x30) | auVar153[0xe];
              bVar133 = (byte)((ulong)uVar126 >> 0x38) | auVar153[0xf];
              uVar126 = CONCAT17(bVar133,CONCAT16(bVar132,CONCAT15(bVar131,CONCAT14(bVar130,CONCAT13
                                                  (bVar129,CONCAT12(bVar128,CONCAT11(bVar127,bVar125
                                                                                    )))))));
              bVar82 = bVar82 | auVar159[0];
              bVar84 = bVar84 | auVar159[1];
              bVar85 = bVar85 | auVar159[2];
              bVar86 = bVar86 | auVar159[3];
              bVar87 = bVar87 | auVar159[4];
              bVar88 = bVar88 | auVar159[5];
              bVar89 = bVar89 | auVar159[6];
              bVar90 = bVar90 | auVar159[7];
              bVar91 = bVar91 | auVar159[8];
              bVar92 = bVar92 | auVar159[9];
              bVar93 = bVar93 | auVar159[10];
              bVar94 = bVar94 | auVar159[0xb];
              bVar95 = bVar95 | auVar159[0xc];
              bVar96 = bVar96 | auVar159[0xd];
              bVar97 = bVar97 | auVar159[0xe];
              bVar98 = bVar98 | auVar159[0xf];
            } while (uVar10 != 0);
            bVar18 = bVar82 | bVar18 | bVar99 | bVar34 | bVar116 | bVar50 | bVar134 | bVar66;
            bVar19 = bVar84 | bVar19 | bVar101 | bVar35 | bVar118 | bVar51 | bVar136 | bVar67;
            bVar20 = bVar85 | bVar20 | bVar102 | bVar36 | bVar119 | bVar52 | bVar137 | bVar68;
            bVar21 = bVar86 | bVar21 | bVar103 | bVar37 | bVar120 | bVar53 | bVar138 | bVar69;
            bVar22 = bVar87 | bVar22 | bVar104 | bVar38 | bVar121 | bVar54 | bVar139 | bVar70;
            bVar23 = bVar88 | bVar23 | bVar105 | bVar39 | bVar122 | bVar55 | bVar140 | bVar71;
            bVar24 = bVar89 | bVar24 | bVar106 | bVar40 | bVar123 | bVar56 | bVar141 | bVar72;
            bVar25 = bVar90 | bVar25 | bVar107 | bVar41 | bVar124 | bVar57 | bVar142 | bVar73;
            bVar26 = bVar91 | bVar26 | bVar108 | bVar42 | bVar125 | bVar58 | bVar143 | bVar74;
            bVar27 = bVar92 | bVar27 | bVar109 | bVar43 | bVar127 | bVar59 | bVar145 | bVar75;
            bVar28 = bVar93 | bVar28 | bVar110 | bVar44 | bVar128 | bVar60 | bVar146 | bVar76;
            bVar29 = bVar94 | bVar29 | bVar111 | bVar45 | bVar129 | bVar61 | bVar147 | bVar77;
            bVar30 = bVar95 | bVar30 | bVar112 | bVar46 | bVar130 | bVar62 | bVar148 | bVar78;
            bVar31 = bVar96 | bVar31 | bVar113 | bVar47 | bVar131 | bVar63 | bVar149 | bVar79;
            bVar32 = bVar97 | bVar32 | bVar114 | bVar48 | bVar132 | bVar64 | bVar150 | bVar80;
            bVar33 = bVar98 | bVar33 | bVar115 | bVar49 | bVar133 | bVar65 | bVar151 | bVar81;
            auVar152[1] = bVar19;
            auVar152[0] = bVar18;
            auVar152[2] = bVar20;
            auVar152[3] = bVar21;
            auVar152[4] = bVar22;
            auVar152[5] = bVar23;
            auVar152[6] = bVar24;
            auVar152[7] = bVar25;
            auVar152[8] = bVar26;
            auVar152[9] = bVar27;
            auVar152[10] = bVar28;
            auVar152[0xb] = bVar29;
            auVar152[0xc] = bVar30;
            auVar152[0xd] = bVar31;
            auVar152[0xe] = bVar32;
            auVar152[0xf] = bVar33;
            auVar153[1] = bVar19;
            auVar153[0] = bVar18;
            auVar153[2] = bVar20;
            auVar153[3] = bVar21;
            auVar153[4] = bVar22;
            auVar153[5] = bVar23;
            auVar153[6] = bVar24;
            auVar153[7] = bVar25;
            auVar153[8] = bVar26;
            auVar153[9] = bVar27;
            auVar153[10] = bVar28;
            auVar153[0xb] = bVar29;
            auVar153[0xc] = bVar30;
            auVar153[0xd] = bVar31;
            auVar153[0xe] = bVar32;
            auVar153[0xf] = bVar33;
            auVar83 = NEON_ext(auVar152,auVar153,8,1);
            uVar9 = CONCAT13(bVar21 | auVar83[3],
                             CONCAT12(bVar20 | auVar83[2],
                                      CONCAT11(bVar19 | auVar83[1],bVar18 | auVar83[0])));
            uVar9 = uVar9 | (uint)(CONCAT17(bVar25 | auVar83[7],
                                            CONCAT16(bVar24 | auVar83[6],
                                                     CONCAT15(bVar23 | auVar83[5],
                                                              CONCAT14(bVar22 | auVar83[4],uVar9))))
                                  >> 0x20);
            if (uVar13 != uVar15) {
              if ((uVar13 & 0x18) == 0) {
                uVar10 = uVar15 | 1;
                goto LAB_0038d360;
              }
              goto LAB_0038d2f4;
            }
          }
        }
        uVar5 = (uint)(uVar9 != 0);
      }
      uVar9 = -uVar5;
    }
    else {
      uVar5 = 0;
      uVar9 = 0xff;
    }
  }
  else {
    uVar9 = 0xff;
    uVar5 = 1;
  }
  uVar13 = (ulong)uVar5;
  lVar4 = uVar13 + lVar7;
LAB_0038d38c:
  if ((param_2 != (long *)0x0) && (puVar6 = (undefined1 *)*param_2, puVar6 != (undefined1 *)0x0)) {
    *puVar6 = (char)uVar9;
    if (lVar7 != 0) {
      uVar12 = uVar9 & 1;
      do {
        lVar1 = lVar7 + -1;
        uVar12 = uVar12 + ((uint)pbVar8[lVar7 + -1] ^ uVar9 & 0xff);
        puVar6[lVar7 + (uVar13 - 1)] = (char)uVar12;
        uVar12 = uVar12 >> 8;
        lVar7 = lVar1;
      } while (lVar1 != 0);
    }
    *param_2 = *param_2 + lVar4;
  }
  return;
}


// ===== 0038d3e4  FUN_0038d3e4 =====

long FUN_0038d3e4(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  int local_24;
  
  uVar3 = FUN_0038d524(0,0,*param_2,param_3);
  if (uVar3 != 0) {
    if ((param_1 == (long *)0x0) || (lVar4 = *param_1, lVar4 == 0)) {
      lVar4 = FUN_0038a388();
      if (lVar4 == 0) {
        return 0;
      }
      *(undefined4 *)(lVar4 + 4) = 2;
      iVar2 = FUN_0038ebe0(lVar4,0,uVar3 & 0xffffffff);
    }
    else {
      iVar2 = FUN_0038ebe0(lVar4,0,uVar3 & 0xffffffff);
    }
    if (iVar2 != 0) {
      FUN_0038d524(*(undefined8 *)(lVar4 + 8),&local_24,*param_2,param_3);
      uVar1 = *(uint *)(lVar4 + 4);
      *param_2 = *param_2 + param_3;
      *(uint *)(lVar4 + 4) = uVar1 & 0xfffffe00 | uVar1 & 0xff | (uint)(local_24 != 0) << 8;
      if (param_1 != (long *)0x0) {
        *param_1 = lVar4;
      }
      return lVar4;
    }
    FUN_00379868();
    FUN_0037995c("crypto/asn1/a_int.c",0x133,"ossl_c2i_ASN1_INTEGER");
    FUN_00379a5c(0xd,0x8000d,0);
    if ((param_1 == (long *)0x0) || (*param_1 != lVar4)) {
      thunk_FUN_0038eddc(lVar4);
    }
  }
  return 0;
}


// ===== 0038d524  FUN_0038d524 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_0038d524(byte *param_1,uint *param_2,byte *param_3,ulong param_4)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  undefined1 (*pauVar12) [16];
  ulong uVar13;
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
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
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
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  
  if (param_4 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/asn1/a_int.c",0xa0,"c2i_ibuf");
    FUN_00379a5c(0xd,0xde,0);
    return 0;
  }
  bVar1 = *param_3;
  if (param_2 != (uint *)0x0) {
    *param_2 = bVar1 & 0x80;
  }
  uVar9 = param_4 - 1;
  if (uVar9 == 0) {
    if (param_1 != (byte *)0x0) {
      bVar14 = *param_3;
      if ((bVar1 & 0x80) != 0) {
        bVar14 = -bVar14;
      }
      *param_1 = bVar14;
      return 1;
    }
    return 1;
  }
  if (*param_3 != 0) {
    uVar4 = param_4;
    if (*param_3 != 0xff) goto joined_r0x0038d798;
    if (param_4 < 9) {
      uVar11 = 0;
      uVar6 = 1;
LAB_0038d72c:
      lVar5 = param_4 - uVar6;
      pbVar7 = param_3 + uVar6;
      do {
        lVar5 = lVar5 + -1;
        uVar11 = uVar11 | *pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (lVar5 != 0);
    }
    else if (param_4 < 0x21) {
      uVar11 = 0;
      uVar10 = 0;
LAB_0038d6c0:
      bVar18 = 0;
      bVar19 = 0;
      bVar20 = 0;
      bVar21 = 0;
      bVar22 = 0;
      bVar23 = 0;
      bVar24 = 0;
      bVar25 = 0;
      bVar26 = 0;
      bVar27 = 0;
      bVar28 = 0;
      bVar29 = 0;
      bVar30 = 0;
      bVar31 = 0;
      bVar32 = 0;
      bVar33 = 0;
      bVar34 = 0;
      bVar35 = 0;
      bVar36 = 0;
      bVar37 = 0;
      bVar38 = 0;
      bVar39 = 0;
      bVar40 = 0;
      bVar41 = 0;
      bVar42 = 0;
      bVar43 = 0;
      bVar44 = 0;
      bVar45 = 0;
      auVar120[8] = UNK_00200588;
      auVar120._0_8_ = _DAT_00200580;
      auVar121[8] = UNK_00200ab8;
      auVar121._0_8_ = _DAT_00200ab0;
      bVar14 = (byte)uVar11;
      bVar15 = (byte)(uVar11 >> 8);
      bVar16 = (byte)(uVar11 >> 0x10);
      bVar17 = (byte)(uVar11 >> 0x18);
      uVar13 = uVar9 & 0xfffffffffffffff8;
      uVar6 = uVar13 | 1;
      lVar5 = uVar10 - uVar13;
      puVar8 = (ulong *)(param_3 + uVar10 + 1);
      do {
        auVar122._0_8_ = *puVar8;
        auVar122._8_8_ = 0;
        lVar5 = lVar5 + 8;
        auVar120[9] = (char)_UNK_00200589;
        auVar120[10] = (char)((uint7)_UNK_00200589 >> 8);
        auVar120[0xb] = (char)((uint7)_UNK_00200589 >> 0x10);
        auVar120[0xc] = (char)((uint7)_UNK_00200589 >> 0x18);
        auVar120[0xd] = (char)((uint7)_UNK_00200589 >> 0x20);
        auVar120[0xe] = (char)((uint7)_UNK_00200589 >> 0x28);
        auVar120[0xf] = (char)((uint7)_UNK_00200589 >> 0x30);
        auVar82 = a64_TBL(ZEXT816(0),auVar122,auVar120);
        auVar121[9] = (char)_UNK_00200ab9;
        auVar121[10] = (char)((uint7)_UNK_00200ab9 >> 8);
        auVar121[0xb] = (char)((uint7)_UNK_00200ab9 >> 0x10);
        auVar121[0xc] = (char)((uint7)_UNK_00200ab9 >> 0x18);
        auVar121[0xd] = (char)((uint7)_UNK_00200ab9 >> 0x20);
        auVar121[0xe] = (char)((uint7)_UNK_00200ab9 >> 0x28);
        auVar121[0xf] = (char)((uint7)_UNK_00200ab9 >> 0x30);
        auVar79 = a64_TBL(ZEXT816(0),auVar122,auVar121);
        bVar30 = bVar30 | auVar79[0];
        bVar31 = bVar31 | auVar79[1];
        bVar32 = bVar32 | auVar79[2];
        bVar33 = bVar33 | auVar79[3];
        bVar34 = bVar34 | auVar79[4];
        bVar35 = bVar35 | auVar79[5];
        bVar36 = bVar36 | auVar79[6];
        bVar37 = bVar37 | auVar79[7];
        bVar38 = bVar38 | auVar79[8];
        bVar39 = bVar39 | auVar79[9];
        bVar40 = bVar40 | auVar79[10];
        bVar41 = bVar41 | auVar79[0xb];
        bVar42 = bVar42 | auVar79[0xc];
        bVar43 = bVar43 | auVar79[0xd];
        bVar44 = bVar44 | auVar79[0xe];
        bVar45 = bVar45 | auVar79[0xf];
        bVar14 = bVar14 | auVar82[0];
        bVar15 = bVar15 | auVar82[1];
        bVar16 = bVar16 | auVar82[2];
        bVar17 = bVar17 | auVar82[3];
        bVar18 = bVar18 | auVar82[4];
        bVar19 = bVar19 | auVar82[5];
        bVar20 = bVar20 | auVar82[6];
        bVar21 = bVar21 | auVar82[7];
        bVar22 = bVar22 | auVar82[8];
        bVar23 = bVar23 | auVar82[9];
        bVar24 = bVar24 | auVar82[10];
        bVar25 = bVar25 | auVar82[0xb];
        bVar26 = bVar26 | auVar82[0xc];
        bVar27 = bVar27 | auVar82[0xd];
        bVar28 = bVar28 | auVar82[0xe];
        bVar29 = bVar29 | auVar82[0xf];
        puVar8 = puVar8 + 1;
      } while (lVar5 != 0);
      bVar14 = bVar14 | bVar30;
      bVar15 = bVar15 | bVar31;
      bVar16 = bVar16 | bVar32;
      bVar17 = bVar17 | bVar33;
      bVar18 = bVar18 | bVar34;
      bVar19 = bVar19 | bVar35;
      bVar20 = bVar20 | bVar36;
      bVar21 = bVar21 | bVar37;
      auVar123[1] = bVar15;
      auVar123[0] = bVar14;
      auVar123[2] = bVar16;
      auVar123[3] = bVar17;
      auVar123[4] = bVar18;
      auVar123[5] = bVar19;
      auVar123[6] = bVar20;
      auVar123[7] = bVar21;
      auVar123[8] = bVar22 | bVar38;
      auVar123[9] = bVar23 | bVar39;
      auVar123[10] = bVar24 | bVar40;
      auVar123[0xb] = bVar25 | bVar41;
      auVar123[0xc] = bVar26 | bVar42;
      auVar123[0xd] = bVar27 | bVar43;
      auVar123[0xe] = bVar28 | bVar44;
      auVar123[0xf] = bVar29 | bVar45;
      auVar124[1] = bVar15;
      auVar124[0] = bVar14;
      auVar124[2] = bVar16;
      auVar124[3] = bVar17;
      auVar124[4] = bVar18;
      auVar124[5] = bVar19;
      auVar124[6] = bVar20;
      auVar124[7] = bVar21;
      auVar124[8] = bVar22 | bVar38;
      auVar124[9] = bVar23 | bVar39;
      auVar124[10] = bVar24 | bVar40;
      auVar124[0xb] = bVar25 | bVar41;
      auVar124[0xc] = bVar26 | bVar42;
      auVar124[0xd] = bVar27 | bVar43;
      auVar124[0xe] = bVar28 | bVar44;
      auVar124[0xf] = bVar29 | bVar45;
      auVar79 = NEON_ext(auVar123,auVar124,8,1);
      uVar11 = CONCAT13(bVar17 | auVar79[3],
                        CONCAT12(bVar16 | auVar79[2],
                                 CONCAT11(bVar15 | auVar79[1],bVar14 | auVar79[0])));
      uVar11 = uVar11 | (uint)(CONCAT17(bVar21 | auVar79[7],
                                        CONCAT16(bVar20 | auVar79[6],
                                                 CONCAT15(bVar19 | auVar79[5],
                                                          CONCAT14(bVar18 | auVar79[4],uVar11)))) >>
                              0x20);
      if (uVar9 != uVar13) goto LAB_0038d72c;
    }
    else {
      bVar14 = 0;
      bVar15 = 0;
      bVar16 = 0;
      bVar17 = 0;
      bVar18 = 0;
      bVar19 = 0;
      bVar20 = 0;
      bVar21 = 0;
      bVar22 = 0;
      bVar23 = 0;
      bVar24 = 0;
      bVar25 = 0;
      bVar26 = 0;
      bVar27 = 0;
      bVar28 = 0;
      bVar29 = 0;
      bVar46 = 0;
      bVar47 = 0;
      bVar48 = 0;
      bVar49 = 0;
      bVar50 = 0;
      bVar51 = 0;
      bVar52 = 0;
      bVar53 = 0;
      bVar54 = 0;
      bVar55 = 0;
      bVar56 = 0;
      bVar57 = 0;
      bVar58 = 0;
      bVar59 = 0;
      bVar60 = 0;
      bVar61 = 0;
      bVar30 = 0;
      bVar31 = 0;
      bVar32 = 0;
      bVar33 = 0;
      bVar34 = 0;
      bVar35 = 0;
      bVar36 = 0;
      bVar37 = 0;
      bVar38 = 0;
      bVar39 = 0;
      bVar40 = 0;
      bVar41 = 0;
      bVar42 = 0;
      bVar43 = 0;
      bVar44 = 0;
      bVar45 = 0;
      bVar62 = 0;
      bVar63 = 0;
      bVar64 = 0;
      bVar65 = 0;
      bVar66 = 0;
      bVar67 = 0;
      bVar68 = 0;
      bVar69 = 0;
      bVar70 = 0;
      bVar71 = 0;
      bVar72 = 0;
      bVar73 = 0;
      bVar74 = 0;
      bVar75 = 0;
      bVar76 = 0;
      bVar77 = 0;
      uVar84 = 0;
      uVar93 = 0;
      uVar102 = 0;
      uVar111 = 0;
      uVar10 = uVar9 & 0xffffffffffffffe0;
      auVar82[8] = UNK_00200588;
      auVar82._0_8_ = _DAT_00200580;
      auVar82._9_7_ = _UNK_00200589;
      auVar79[8] = UNK_00200588;
      auVar79._0_8_ = _DAT_00200580;
      auVar79._9_7_ = _UNK_00200589;
      auVar3[8] = UNK_00200ab8;
      auVar3._0_8_ = _DAT_00200ab0;
      auVar3._9_7_ = _UNK_00200ab9;
      auVar2[8] = UNK_00200ab8;
      auVar2._0_8_ = _DAT_00200ab0;
      auVar2._9_7_ = _UNK_00200ab9;
      pauVar12 = (undefined1 (*) [16])(param_3 + 0x11);
      uVar6 = uVar10;
      auVar78 = ZEXT816(0);
      auVar80 = ZEXT816(0);
      do {
        auVar119 = pauVar12[-1];
        auVar81 = *pauVar12;
        uVar6 = uVar6 - 0x20;
        pauVar12 = pauVar12 + 2;
        auVar121 = a64_TBL(ZEXT816(0),auVar119,auVar2);
        auVar122 = a64_TBL(ZEXT816(0),auVar119,_DAT_002007c0);
        auVar123 = a64_TBL(ZEXT816(0),auVar119,_DAT_002000f0);
        auVar119 = a64_TBL(ZEXT816(0),auVar119,auVar79);
        auVar124 = a64_TBL(ZEXT816(0),auVar81,_DAT_002007c0);
        auVar125 = a64_TBL(ZEXT816(0),auVar81,_DAT_002000f0);
        auVar126 = a64_TBL(ZEXT816(0),auVar81,auVar82);
        auVar120 = a64_TBL(ZEXT816(0),auVar81,auVar3);
        bVar30 = bVar30 | auVar122[0];
        bVar31 = bVar31 | auVar122[1];
        bVar32 = bVar32 | auVar122[2];
        bVar33 = bVar33 | auVar122[3];
        bVar34 = bVar34 | auVar122[4];
        bVar35 = bVar35 | auVar122[5];
        bVar36 = bVar36 | auVar122[6];
        bVar37 = bVar37 | auVar122[7];
        bVar38 = bVar38 | auVar122[8];
        bVar39 = bVar39 | auVar122[9];
        bVar40 = bVar40 | auVar122[10];
        bVar41 = bVar41 | auVar122[0xb];
        bVar42 = bVar42 | auVar122[0xc];
        bVar43 = bVar43 | auVar122[0xd];
        bVar44 = bVar44 | auVar122[0xe];
        bVar45 = bVar45 | auVar122[0xf];
        bVar46 = bVar46 | auVar121[0];
        bVar47 = bVar47 | auVar121[1];
        bVar48 = bVar48 | auVar121[2];
        bVar49 = bVar49 | auVar121[3];
        bVar50 = bVar50 | auVar121[4];
        bVar51 = bVar51 | auVar121[5];
        bVar52 = bVar52 | auVar121[6];
        bVar53 = bVar53 | auVar121[7];
        bVar54 = bVar54 | auVar121[8];
        bVar55 = bVar55 | auVar121[9];
        bVar56 = bVar56 | auVar121[10];
        bVar57 = bVar57 | auVar121[0xb];
        bVar58 = bVar58 | auVar121[0xc];
        bVar59 = bVar59 | auVar121[0xd];
        bVar60 = bVar60 | auVar121[0xe];
        bVar61 = bVar61 | auVar121[0xf];
        bVar62 = bVar62 | auVar123[0];
        bVar63 = bVar63 | auVar123[1];
        bVar64 = bVar64 | auVar123[2];
        bVar65 = bVar65 | auVar123[3];
        bVar66 = bVar66 | auVar123[4];
        bVar67 = bVar67 | auVar123[5];
        bVar68 = bVar68 | auVar123[6];
        bVar69 = bVar69 | auVar123[7];
        bVar70 = bVar70 | auVar123[8];
        bVar71 = bVar71 | auVar123[9];
        bVar72 = bVar72 | auVar123[10];
        bVar73 = bVar73 | auVar123[0xb];
        bVar74 = bVar74 | auVar123[0xc];
        bVar75 = bVar75 | auVar123[0xd];
        bVar76 = bVar76 | auVar123[0xe];
        bVar77 = bVar77 | auVar123[0xf];
        bVar14 = bVar14 | auVar119[0];
        bVar15 = bVar15 | auVar119[1];
        bVar16 = bVar16 | auVar119[2];
        bVar17 = bVar17 | auVar119[3];
        bVar18 = bVar18 | auVar119[4];
        bVar19 = bVar19 | auVar119[5];
        bVar20 = bVar20 | auVar119[6];
        bVar21 = bVar21 | auVar119[7];
        bVar22 = bVar22 | auVar119[8];
        bVar23 = bVar23 | auVar119[9];
        bVar24 = bVar24 | auVar119[10];
        bVar25 = bVar25 | auVar119[0xb];
        bVar26 = bVar26 | auVar119[0xc];
        bVar27 = bVar27 | auVar119[0xd];
        bVar28 = bVar28 | auVar119[0xe];
        bVar29 = bVar29 | auVar119[0xf];
        auVar81[0] = auVar80[0] | auVar124[0];
        auVar81[1] = auVar80[1] | auVar124[1];
        auVar81[2] = auVar80[2] | auVar124[2];
        auVar81[3] = auVar80[3] | auVar124[3];
        auVar81[4] = auVar80[4] | auVar124[4];
        auVar81[5] = auVar80[5] | auVar124[5];
        auVar81[6] = auVar80[6] | auVar124[6];
        auVar81[7] = auVar80[7] | auVar124[7];
        auVar81[8] = auVar80[8] | auVar124[8];
        auVar81[9] = auVar80[9] | auVar124[9];
        auVar81[10] = auVar80[10] | auVar124[10];
        auVar81[0xb] = auVar80[0xb] | auVar124[0xb];
        auVar81[0xc] = auVar80[0xc] | auVar124[0xc];
        auVar81[0xd] = auVar80[0xd] | auVar124[0xd];
        auVar81[0xe] = auVar80[0xe] | auVar124[0xe];
        auVar81[0xf] = auVar80[0xf] | auVar124[0xf];
        bVar101 = (byte)uVar102 | auVar125[0];
        bVar103 = (byte)((ulong)uVar102 >> 8) | auVar125[1];
        bVar104 = (byte)((ulong)uVar102 >> 0x10) | auVar125[2];
        bVar105 = (byte)((ulong)uVar102 >> 0x18) | auVar125[3];
        bVar106 = (byte)((ulong)uVar102 >> 0x20) | auVar125[4];
        bVar107 = (byte)((ulong)uVar102 >> 0x28) | auVar125[5];
        bVar108 = (byte)((ulong)uVar102 >> 0x30) | auVar125[6];
        bVar109 = (byte)((ulong)uVar102 >> 0x38) | auVar125[7];
        uVar102 = CONCAT17(bVar109,CONCAT16(bVar108,CONCAT15(bVar107,CONCAT14(bVar106,CONCAT13(
                                                  bVar105,CONCAT12(bVar104,CONCAT11(bVar103,bVar101)
                                                                  ))))));
        bVar110 = (byte)uVar111 | auVar125[8];
        bVar112 = (byte)((ulong)uVar111 >> 8) | auVar125[9];
        bVar113 = (byte)((ulong)uVar111 >> 0x10) | auVar125[10];
        bVar114 = (byte)((ulong)uVar111 >> 0x18) | auVar125[0xb];
        bVar115 = (byte)((ulong)uVar111 >> 0x20) | auVar125[0xc];
        bVar116 = (byte)((ulong)uVar111 >> 0x28) | auVar125[0xd];
        bVar117 = (byte)((ulong)uVar111 >> 0x30) | auVar125[0xe];
        bVar118 = (byte)((ulong)uVar111 >> 0x38) | auVar125[0xf];
        uVar111 = CONCAT17(bVar118,CONCAT16(bVar117,CONCAT15(bVar116,CONCAT14(bVar115,CONCAT13(
                                                  bVar114,CONCAT12(bVar113,CONCAT11(bVar112,bVar110)
                                                                  ))))));
        bVar83 = (byte)uVar84 | auVar120[0];
        bVar85 = (byte)((ulong)uVar84 >> 8) | auVar120[1];
        bVar86 = (byte)((ulong)uVar84 >> 0x10) | auVar120[2];
        bVar87 = (byte)((ulong)uVar84 >> 0x18) | auVar120[3];
        bVar88 = (byte)((ulong)uVar84 >> 0x20) | auVar120[4];
        bVar89 = (byte)((ulong)uVar84 >> 0x28) | auVar120[5];
        bVar90 = (byte)((ulong)uVar84 >> 0x30) | auVar120[6];
        bVar91 = (byte)((ulong)uVar84 >> 0x38) | auVar120[7];
        uVar84 = CONCAT17(bVar91,CONCAT16(bVar90,CONCAT15(bVar89,CONCAT14(bVar88,CONCAT13(bVar87,
                                                  CONCAT12(bVar86,CONCAT11(bVar85,bVar83)))))));
        bVar92 = (byte)uVar93 | auVar120[8];
        bVar94 = (byte)((ulong)uVar93 >> 8) | auVar120[9];
        bVar95 = (byte)((ulong)uVar93 >> 0x10) | auVar120[10];
        bVar96 = (byte)((ulong)uVar93 >> 0x18) | auVar120[0xb];
        bVar97 = (byte)((ulong)uVar93 >> 0x20) | auVar120[0xc];
        bVar98 = (byte)((ulong)uVar93 >> 0x28) | auVar120[0xd];
        bVar99 = (byte)((ulong)uVar93 >> 0x30) | auVar120[0xe];
        bVar100 = (byte)((ulong)uVar93 >> 0x38) | auVar120[0xf];
        uVar93 = CONCAT17(bVar100,CONCAT16(bVar99,CONCAT15(bVar98,CONCAT14(bVar97,CONCAT13(bVar96,
                                                  CONCAT12(bVar95,CONCAT11(bVar94,bVar92)))))));
        auVar119[0] = auVar78[0] | auVar126[0];
        auVar119[1] = auVar78[1] | auVar126[1];
        auVar119[2] = auVar78[2] | auVar126[2];
        auVar119[3] = auVar78[3] | auVar126[3];
        auVar119[4] = auVar78[4] | auVar126[4];
        auVar119[5] = auVar78[5] | auVar126[5];
        auVar119[6] = auVar78[6] | auVar126[6];
        auVar119[7] = auVar78[7] | auVar126[7];
        auVar119[8] = auVar78[8] | auVar126[8];
        auVar119[9] = auVar78[9] | auVar126[9];
        auVar119[10] = auVar78[10] | auVar126[10];
        auVar119[0xb] = auVar78[0xb] | auVar126[0xb];
        auVar119[0xc] = auVar78[0xc] | auVar126[0xc];
        auVar119[0xd] = auVar78[0xd] | auVar126[0xd];
        auVar119[0xe] = auVar78[0xe] | auVar126[0xe];
        auVar119[0xf] = auVar78[0xf] | auVar126[0xf];
        auVar78 = auVar119;
        auVar80 = auVar81;
      } while (uVar6 != 0);
      bVar14 = auVar119[0] | bVar14 | auVar81[0] | bVar30 | bVar83 | bVar46 | bVar101 | bVar62;
      bVar15 = auVar119[1] | bVar15 | auVar81[1] | bVar31 | bVar85 | bVar47 | bVar103 | bVar63;
      bVar16 = auVar119[2] | bVar16 | auVar81[2] | bVar32 | bVar86 | bVar48 | bVar104 | bVar64;
      bVar17 = auVar119[3] | bVar17 | auVar81[3] | bVar33 | bVar87 | bVar49 | bVar105 | bVar65;
      bVar18 = auVar119[4] | bVar18 | auVar81[4] | bVar34 | bVar88 | bVar50 | bVar106 | bVar66;
      bVar19 = auVar119[5] | bVar19 | auVar81[5] | bVar35 | bVar89 | bVar51 | bVar107 | bVar67;
      bVar20 = auVar119[6] | bVar20 | auVar81[6] | bVar36 | bVar90 | bVar52 | bVar108 | bVar68;
      bVar21 = auVar119[7] | bVar21 | auVar81[7] | bVar37 | bVar91 | bVar53 | bVar109 | bVar69;
      bVar22 = auVar119[8] | bVar22 | auVar81[8] | bVar38 | bVar92 | bVar54 | bVar110 | bVar70;
      bVar23 = auVar119[9] | bVar23 | auVar81[9] | bVar39 | bVar94 | bVar55 | bVar112 | bVar71;
      bVar24 = auVar119[10] | bVar24 | auVar81[10] | bVar40 | bVar95 | bVar56 | bVar113 | bVar72;
      bVar25 = auVar119[0xb] | bVar25 | auVar81[0xb] | bVar41 | bVar96 | bVar57 | bVar114 | bVar73;
      bVar26 = auVar119[0xc] | bVar26 | auVar81[0xc] | bVar42 | bVar97 | bVar58 | bVar115 | bVar74;
      bVar27 = auVar119[0xd] | bVar27 | auVar81[0xd] | bVar43 | bVar98 | bVar59 | bVar116 | bVar75;
      bVar28 = auVar119[0xe] | bVar28 | auVar81[0xe] | bVar44 | bVar99 | bVar60 | bVar117 | bVar76;
      bVar29 = auVar119[0xf] | bVar29 | auVar81[0xf] | bVar45 | bVar100 | bVar61 | bVar118 | bVar77;
      auVar78[1] = bVar15;
      auVar78[0] = bVar14;
      auVar78[2] = bVar16;
      auVar78[3] = bVar17;
      auVar78[4] = bVar18;
      auVar78[5] = bVar19;
      auVar78[6] = bVar20;
      auVar78[7] = bVar21;
      auVar78[8] = bVar22;
      auVar78[9] = bVar23;
      auVar78[10] = bVar24;
      auVar78[0xb] = bVar25;
      auVar78[0xc] = bVar26;
      auVar78[0xd] = bVar27;
      auVar78[0xe] = bVar28;
      auVar78[0xf] = bVar29;
      auVar80[1] = bVar15;
      auVar80[0] = bVar14;
      auVar80[2] = bVar16;
      auVar80[3] = bVar17;
      auVar80[4] = bVar18;
      auVar80[5] = bVar19;
      auVar80[6] = bVar20;
      auVar80[7] = bVar21;
      auVar80[8] = bVar22;
      auVar80[9] = bVar23;
      auVar80[10] = bVar24;
      auVar80[0xb] = bVar25;
      auVar80[0xc] = bVar26;
      auVar80[0xd] = bVar27;
      auVar80[0xe] = bVar28;
      auVar80[0xf] = bVar29;
      auVar79 = NEON_ext(auVar78,auVar80,8,1);
      uVar11 = CONCAT13(bVar17 | auVar79[3],
                        CONCAT12(bVar16 | auVar79[2],
                                 CONCAT11(bVar15 | auVar79[1],bVar14 | auVar79[0])));
      uVar11 = uVar11 | (uint)(CONCAT17(bVar21 | auVar79[7],
                                        CONCAT16(bVar20 | auVar79[6],
                                                 CONCAT15(bVar19 | auVar79[5],
                                                          CONCAT14(bVar18 | auVar79[4],uVar11)))) >>
                              0x20);
      if (uVar9 != uVar10) {
        if ((uVar9 & 0x18) == 0) {
          uVar6 = uVar10 | 1;
          goto LAB_0038d72c;
        }
        goto LAB_0038d6c0;
      }
    }
    if (uVar11 == 0) goto joined_r0x0038d798;
  }
  if ((bVar1 & 0x80) == (param_3[1] & 0x80)) {
    FUN_00379868();
    FUN_0037995c("crypto/asn1/a_int.c",0xc1,"c2i_ibuf");
    FUN_00379a5c(0xd,0xdd,0);
    return 0;
  }
  uVar4 = param_4 - 1;
joined_r0x0038d798:
  if (param_1 == (byte *)0x0) {
    return uVar4;
  }
  if (uVar4 != 0) {
    uVar11 = (uint)(bVar1 >> 7);
    param_3 = param_3 + param_4;
    uVar9 = uVar4;
    do {
      param_3 = param_3 + -1;
      uVar6 = uVar9 - 1;
      uVar11 = uVar11 + ((uint)*param_3 ^ -(uint)(bVar1 >> 7) & 0xff);
      param_1[uVar9 - 1] = (byte)uVar11;
      uVar11 = uVar11 >> 8;
      uVar9 = uVar6;
    } while (uVar6 != 0);
    return uVar4;
  }
  return 0;
}


// ===== 0038d808  FUN_0038d808 =====

long FUN_0038d808(long *param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  char *pcVar2;
  uint uVar3;
  void *__dest;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [4];
  int local_5c;
  ulong local_58;
  char *local_38;
  
  local_58 = 0;
  if ((param_1 == (long *)0x0) || (lVar4 = *param_1, lVar4 == 0)) {
    lVar4 = FUN_0038a388();
    if (lVar4 == 0) {
      return 0;
    }
    *(undefined4 *)(lVar4 + 4) = 2;
  }
  local_38 = (char *)*param_2;
  uVar3 = FUN_0038e758(&local_38,&local_58,&local_5c,auStack_60,param_3);
  if ((uVar3 >> 7 & 1) == 0) {
    if (local_5c == 2) {
      if (-1 < (long)local_58) {
        __dest = (void *)FUN_003c83a4((long)((int)local_58 + 1),"crypto/asn1/a_int.c",0x1b1);
        if (__dest != (void *)0x0) {
          *(undefined4 *)(lVar4 + 4) = 2;
          if (local_58 == 0) {
            FUN_0038ee3c(lVar4,__dest,0);
          }
          else {
            if ((local_58 - 1 != 0) && (*local_38 == '\0')) {
              local_38 = local_38 + 1;
              local_58 = local_58 - 1;
            }
            pcVar2 = local_38;
            uVar1 = local_58;
            memcpy(__dest,local_38,(long)(int)local_58);
            local_38 = pcVar2 + uVar1;
            FUN_0038ee3c(lVar4,__dest,uVar1 & 0xffffffff);
          }
          if (param_1 != (long *)0x0) {
            *param_1 = lVar4;
          }
          *param_2 = (long)local_38;
          return lVar4;
        }
        goto LAB_0038d960;
      }
      uVar5 = 0xe2;
    }
    else {
      uVar5 = 0x73;
    }
  }
  else {
    uVar5 = 0x66;
  }
  FUN_00379868();
  FUN_0037995c("crypto/asn1/a_int.c",0x1c5,"d2i_ASN1_UINTEGER");
  FUN_00379a5c(0xd,uVar5,0);
LAB_0038d960:
  if ((param_1 == (long *)0x0) || (*param_1 != lVar4)) {
    thunk_FUN_0038eddc(lVar4);
  }
  return 0;
}


// ===== 0038d9b8  FUN_0038d9b8 =====

void FUN_0038d9b8(undefined8 param_1,undefined8 param_2)

{
  FUN_0038d9c0(param_1,param_2,2);
  return;
}


// ===== 0038d9c0  FUN_0038d9c0 =====

undefined8 FUN_0038d9c0(ulong *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  uint3 uVar4;
  uint uVar5;
  uint5 uVar6;
  uint6 uVar7;
  uint7 uVar8;
  undefined8 uVar9;
  char *pcVar10;
  ulong uVar11;
  ulong uVar12;
  byte *pbVar13;
  
  if (param_2 == (uint *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/asn1/a_int.c",0x14b,"asn1_string_get_int64");
    uVar9 = 0xc0102;
    goto LAB_0038da60;
  }
  uVar1 = param_2[1];
  if ((uVar1 & 0xfffffeff) != param_3) {
    FUN_00379868();
    FUN_0037995c("crypto/asn1/a_int.c",0x14f,"asn1_string_get_int64");
    uVar9 = 0xe1;
    goto LAB_0038da60;
  }
  uVar2 = *param_2;
  if (8 < uVar2) {
    FUN_00379868();
    pcVar10 = "asn1_get_uint64";
    uVar9 = 0xdb;
LAB_0038da00:
    FUN_0037995c("crypto/asn1/a_int.c",uVar9,pcVar10);
    uVar9 = 0xdf;
LAB_0038da60:
    FUN_00379a5c(0xd,uVar9,0);
    return 0;
  }
  pbVar13 = *(byte **)(param_2 + 2);
  if (pbVar13 == (byte *)0x0) {
    return 0;
  }
  if (uVar2 == 0) {
    uVar12 = 0;
    if ((uVar1 >> 8 & 1) == 0) {
LAB_0038db20:
      *param_1 = uVar12;
      return 1;
    }
  }
  else {
    uVar12 = (ulong)*pbVar13;
    if (uVar2 != 1) {
      uVar3 = CONCAT11(*pbVar13,pbVar13[1]);
      uVar12 = (ulong)uVar3;
      if (uVar2 != 2) {
        uVar4 = CONCAT21(uVar3,pbVar13[2]);
        uVar12 = (ulong)uVar4;
        if (uVar2 != 3) {
          uVar5 = CONCAT31(uVar4,pbVar13[3]);
          uVar12 = (ulong)uVar5;
          if (uVar2 != 4) {
            uVar6 = CONCAT41(uVar5,pbVar13[4]);
            uVar12 = (ulong)uVar6;
            if (uVar2 != 5) {
              uVar7 = CONCAT51(uVar6,pbVar13[5]);
              uVar12 = (ulong)uVar7;
              if (uVar2 != 6) {
                uVar8 = CONCAT61(uVar7,pbVar13[6]);
                uVar12 = (ulong)uVar8;
                if (uVar2 != 7) {
                  uVar12 = CONCAT71(uVar8,pbVar13[7]);
                }
              }
            }
          }
        }
      }
    }
    if ((uVar1 >> 8 & 1) == 0) {
      if (-1 < (long)uVar12) goto LAB_0038db20;
      FUN_00379868();
      pcVar10 = "asn1_get_int64";
      uVar9 = 0x116;
      goto LAB_0038da00;
    }
    if ((long)uVar12 < 0) {
      uVar11 = 0x8000000000000000;
      if (uVar12 != 0x8000000000000000) {
        FUN_00379868();
        FUN_0037995c("crypto/asn1/a_int.c",0x10f,"asn1_get_int64");
        uVar9 = 0xe0;
        goto LAB_0038da60;
      }
      goto LAB_0038db38;
    }
  }
  uVar11 = -uVar12;
LAB_0038db38:
  *param_1 = uVar11;
  return 1;
}


// ===== 0038db7c  FUN_0038db7c =====

void FUN_0038db7c(long param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined1 auStack_18 [8];
  
  if ((long)param_2 < 0) {
    lVar1 = 7;
    uVar5 = -param_2;
    do {
      lVar3 = lVar1;
      bVar2 = 0xff < uVar5;
      auStack_18[lVar3] = (char)uVar5;
      lVar1 = lVar3 + -1;
      uVar5 = uVar5 >> 8;
    } while (bVar2);
    uVar4 = 0x102;
  }
  else {
    lVar1 = 7;
    do {
      lVar3 = lVar1;
      bVar2 = 0xff < param_2;
      auStack_18[lVar3] = (char)param_2;
      param_2 = param_2 >> 8;
      lVar1 = lVar3 + -1;
    } while (bVar2);
    uVar4 = 2;
  }
  *(undefined4 *)(param_1 + 4) = uVar4;
  FUN_0038ebe0(param_1,auStack_18 + lVar3,8 - (int)lVar3);
  return;
}


// ===== 0038dc08  FUN_0038dc08 =====

undefined8 FUN_0038dc08(ulong *param_1,uint *param_2)

{
  uint uVar1;
  ushort uVar2;
  uint3 uVar3;
  uint uVar4;
  uint5 uVar5;
  uint6 uVar6;
  uint7 uVar7;
  ulong uVar8;
  byte *pbVar9;
  
  if (param_2 == (uint *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/asn1/a_int.c",0x16e,"asn1_string_get_uint64");
    FUN_00379a5c(0xd,0xc0102,0);
    return 0;
  }
  if ((param_2[1] & 0xfffffeff) != 2) {
    FUN_00379868();
    FUN_0037995c("crypto/asn1/a_int.c",0x172,"asn1_string_get_uint64");
    FUN_00379a5c(0xd,0xe1,0);
    return 0;
  }
  if (0xff < param_2[1]) {
    FUN_00379868();
    FUN_0037995c("crypto/asn1/a_int.c",0x176,"asn1_string_get_uint64");
    FUN_00379a5c(0xd,0xe2,0);
    return 0;
  }
  uVar1 = *param_2;
  if (8 < uVar1) {
    FUN_00379868();
    FUN_0037995c("crypto/asn1/a_int.c",0xdb,"asn1_get_uint64");
    FUN_00379a5c(0xd,0xdf,0);
    return 0;
  }
  pbVar9 = *(byte **)(param_2 + 2);
  if (pbVar9 == (byte *)0x0) {
    return 0;
  }
  if (uVar1 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = (ulong)*pbVar9;
    if (uVar1 != 1) {
      uVar2 = CONCAT11(*pbVar9,pbVar9[1]);
      uVar8 = (ulong)uVar2;
      if (uVar1 != 2) {
        uVar3 = CONCAT21(uVar2,pbVar9[2]);
        uVar8 = (ulong)uVar3;
        if (uVar1 != 3) {
          uVar4 = CONCAT31(uVar3,pbVar9[3]);
          uVar8 = (ulong)uVar4;
          if (uVar1 != 4) {
            uVar5 = CONCAT41(uVar4,pbVar9[4]);
            uVar8 = (ulong)uVar5;
            if (uVar1 != 5) {
              uVar6 = CONCAT51(uVar5,pbVar9[5]);
              uVar8 = (ulong)uVar6;
              if (uVar1 != 6) {
                uVar7 = CONCAT61(uVar6,pbVar9[6]);
                uVar8 = (ulong)uVar7;
                if (uVar1 != 7) {
                  *param_1 = CONCAT71(uVar7,pbVar9[7]);
                  return 1;
                }
              }
            }
          }
        }
      }
    }
  }
  *param_1 = uVar8;
  return 1;
}


// ===== 0038ddcc  FUN_0038ddcc =====

void FUN_0038ddcc(long param_1,ulong param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 local_11;
  
  iVar3 = 0;
  puVar2 = &stack0xfffffffffffffff0;
  *(undefined4 *)(param_1 + 4) = 2;
  do {
    puVar2 = puVar2 + -1;
    *puVar2 = (char)param_2;
    iVar3 = iVar3 + 1;
    bVar1 = 0xff < param_2;
    param_2 = param_2 >> 8;
  } while (bVar1);
  FUN_0038ebe0(param_1,puVar2,iVar3);
  return;
}


// ===== 0038de18  FUN_0038de18 =====

void FUN_0038de18(long param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined1 auStack_18 [8];
  
  if ((long)param_2 < 0) {
    lVar1 = 7;
    uVar5 = -param_2;
    do {
      lVar3 = lVar1;
      bVar2 = 0xff < uVar5;
      auStack_18[lVar3] = (char)uVar5;
      lVar1 = lVar3 + -1;
      uVar5 = uVar5 >> 8;
    } while (bVar2);
    uVar4 = 0x102;
  }
  else {
    lVar1 = 7;
    do {
      lVar3 = lVar1;
      bVar2 = 0xff < param_2;
      auStack_18[lVar3] = (char)param_2;
      param_2 = param_2 >> 8;
      lVar1 = lVar3 + -1;
    } while (bVar2);
    uVar4 = 2;
  }
  *(undefined4 *)(param_1 + 4) = uVar4;
  FUN_0038ebe0(param_1,auStack_18 + lVar3,8 - (int)lVar3);
  return;
}


// ===== 0038dea4  FUN_0038dea4 =====

long FUN_0038dea4(long param_1)

{
  int iVar1;
  long local_18;
  
  if ((param_1 != 0) && (iVar1 = FUN_0038d9c0(&local_18,param_1,2), param_1 = local_18, iVar1 == 0))
  {
    param_1 = -1;
  }
  return param_1;
}


// ===== 0038dedc  FUN_0038dedc =====

void FUN_0038dedc(undefined8 param_1,undefined8 param_2)

{
  FUN_0038dee4(param_1,param_2,2);
  return;
}


// ===== 0038dee4  FUN_0038dee4 =====

int * FUN_0038dee4(undefined8 param_1,int *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar5 = 0x8000d;
  if (param_2 == (int *)0x0) {
    piVar4 = (int *)FUN_0038ee84(param_3);
    if (piVar4 == (int *)0x0) {
      uVar5 = 0x8010a;
      uVar6 = 0x1d9;
      goto LAB_0038dfe8;
    }
  }
  else {
    param_2[1] = param_3;
    piVar4 = param_2;
  }
  iVar3 = FUN_003908c4(param_1);
  if ((iVar3 != 0) && (iVar3 = FUN_0038f448(param_1), iVar3 == 0)) {
    piVar4[1] = piVar4[1] | 0x102;
  }
  iVar3 = FUN_0038f2c0(param_1);
  uVar2 = iVar3 + 0xeU;
  if ((int)(iVar3 + 7U) < 0 == SCARRY4(iVar3,7)) {
    uVar2 = iVar3 + 7U;
  }
  iVar1 = (int)uVar2 >> 3;
  if (iVar3 + 0xeU < 0xf) {
    iVar1 = 1;
  }
  iVar3 = FUN_0038ebe0(piVar4,0,iVar1);
  if (iVar3 != 0) {
    iVar3 = FUN_0038f448(param_1);
    if (iVar3 != 0) {
      **(undefined1 **)(piVar4 + 2) = 0;
      *piVar4 = iVar1;
      return piVar4;
    }
    iVar3 = FUN_00390014(param_1);
    *piVar4 = iVar3;
    return piVar4;
  }
  uVar6 = 0x1e6;
LAB_0038dfe8:
  FUN_00379868();
  FUN_0037995c("crypto/asn1/a_int.c",uVar6,"bn_to_asn1_string");
  FUN_00379a5c(0xd,uVar5,0);
  if (piVar4 != param_2) {
    thunk_FUN_0038eddc(piVar4);
  }
  return (int *)0x0;
}


// ===== 0038e040  FUN_0038e040 =====

void FUN_0038e040(undefined8 param_1,undefined8 param_2)

{
  FUN_0038e048(param_1,param_2,2);
  return;
}


// ===== 0038e048  FUN_0038e048 =====

long FUN_0038e048(undefined4 *param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  
  if ((param_1[1] & 0xfffffeff) != param_3) {
    FUN_00379868();
    FUN_0037995c("crypto/asn1/a_int.c",0x1fd,"asn1_string_to_bn");
    FUN_00379a5c(0xd,0xe1,0);
    return 0;
  }
  lVar1 = FUN_0038fa44(*(undefined8 *)(param_1 + 2),*param_1,param_2);
  if (lVar1 != 0) {
    if ((*(byte *)((long)param_1 + 5) & 1) != 0) {
      FUN_003904e4(lVar1,1);
    }
    return lVar1;
  }
  FUN_00379868();
  FUN_0037995c("crypto/asn1/a_int.c",0x203,"asn1_string_to_bn");
  FUN_00379a5c(0xd,0x69,0);
  return 0;
}


// ===== 0038e118  FUN_0038e118 =====

void FUN_0038e118(undefined8 param_1,undefined8 param_2)

{
  FUN_0038d9c0(param_1,param_2,10);
  return;
}


// ===== 0038e120  FUN_0038e120 =====

void FUN_0038e120(long param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined1 auStack_18 [8];
  
  if ((long)param_2 < 0) {
    lVar1 = 7;
    uVar5 = -param_2;
    do {
      lVar3 = lVar1;
      bVar2 = 0xff < uVar5;
      auStack_18[lVar3] = (char)uVar5;
      lVar1 = lVar3 + -1;
      uVar5 = uVar5 >> 8;
    } while (bVar2);
    uVar4 = 0x10a;
  }
  else {
    lVar1 = 7;
    do {
      lVar3 = lVar1;
      bVar2 = 0xff < param_2;
      auStack_18[lVar3] = (char)param_2;
      param_2 = param_2 >> 8;
      lVar1 = lVar3 + -1;
    } while (bVar2);
    uVar4 = 10;
  }
  *(undefined4 *)(param_1 + 4) = uVar4;
  FUN_0038ebe0(param_1,auStack_18 + lVar3,8 - (int)lVar3);
  return;
}


// ===== 0038e1ac  FUN_0038e1ac =====

void FUN_0038e1ac(long param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined1 auStack_18 [8];
  
  if ((long)param_2 < 0) {
    lVar1 = 7;
    uVar5 = -param_2;
    do {
      lVar3 = lVar1;
      bVar2 = 0xff < uVar5;
      auStack_18[lVar3] = (char)uVar5;
      lVar1 = lVar3 + -1;
      uVar5 = uVar5 >> 8;
    } while (bVar2);
    uVar4 = 0x10a;
  }
  else {
    lVar1 = 7;
    do {
      lVar3 = lVar1;
      bVar2 = 0xff < param_2;
      auStack_18[lVar3] = (char)param_2;
      param_2 = param_2 >> 8;
      lVar1 = lVar3 + -1;
    } while (bVar2);
    uVar4 = 10;
  }
  *(undefined4 *)(param_1 + 4) = uVar4;
  FUN_0038ebe0(param_1,auStack_18 + lVar3,8 - (int)lVar3);
  return;
}


// ===== 0038e238  FUN_0038e238 =====

int * FUN_0038e238(int *param_1)

{
  int iVar1;
  int *local_18;
  
  if (param_1 != (int *)0x0) {
    if ((param_1[1] & 0xfffffeffU) != 10) {
      return (int *)0xffffffffffffffff;
    }
    if (8 < *param_1) {
      return (int *)0xffffffff;
    }
    iVar1 = FUN_0038d9c0(&local_18,param_1,10);
    param_1 = local_18;
    if (iVar1 == 0) {
      param_1 = (int *)0xffffffffffffffff;
    }
  }
  return param_1;
}


// ===== 0038e29c  FUN_0038e29c =====

void FUN_0038e29c(undefined8 param_1,undefined8 param_2)

{
  FUN_0038dee4(param_1,param_2,10);
  return;
}


// ===== 0038e2a4  FUN_0038e2a4 =====

void FUN_0038e2a4(undefined8 param_1,undefined8 param_2)

{
  FUN_0038e048(param_1,param_2,10);
  return;
}


// ===== 0038e2ac  FUN_0038e2ac =====

ulong FUN_0038e2ac(ulong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  uint3 uVar1;
  uint uVar2;
  uint5 uVar3;
  uint6 uVar4;
  uint7 uVar5;
  ulong uVar6;
  ulong uVar7;
  byte local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  
  uVar6 = FUN_0038d524(0,0,*param_3);
  if (uVar6 != 0) {
    if (uVar6 < 9) {
      FUN_0038d524(&local_38,param_2,*param_3,param_4);
      uVar7 = (ulong)local_38;
      if (uVar6 != 1) {
        uVar7 = (ulong)CONCAT11(local_38,local_37);
        if (uVar6 != 2) {
          uVar1 = CONCAT21(CONCAT11(local_38,local_37),local_36);
          uVar7 = (ulong)uVar1;
          if (uVar6 != 3) {
            uVar2 = CONCAT31(uVar1,local_35);
            uVar7 = (ulong)uVar2;
            if (uVar6 != 4) {
              uVar3 = CONCAT41(uVar2,local_34);
              uVar7 = (ulong)uVar3;
              if (uVar6 != 5) {
                uVar4 = CONCAT51(uVar3,local_33);
                uVar7 = (ulong)uVar4;
                if (uVar6 != 6) {
                  uVar5 = CONCAT61(uVar4,local_32);
                  uVar7 = (ulong)uVar5;
                  if (uVar6 != 7) {
                    uVar7 = CONCAT71(uVar5,local_31);
                  }
                }
              }
            }
          }
        }
      }
      *param_1 = uVar7;
      return 1;
    }
    FUN_00379868();
    FUN_0037995c("crypto/asn1/a_int.c",0x272,"ossl_c2i_uint64_int");
    FUN_00379a5c(0xd,0xdf,0);
    uVar6 = 0;
  }
  return uVar6;
}


// ===== 0038e3dc  FUN_0038e3dc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_0038e3dc(undefined1 *param_1,ulong param_2,int param_3)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined1 (*pauVar16) [16];
  ulong uVar17;
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
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  byte bVar91;
  byte bVar92;
  byte bVar93;
  byte bVar94;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  byte bVar98;
  undefined1 auVar83 [16];
  byte bVar99;
  byte bVar101;
  byte bVar102;
  byte bVar103;
  byte bVar104;
  byte bVar105;
  byte bVar106;
  byte bVar107;
  byte bVar108;
  byte bVar109;
  byte bVar110;
  byte bVar111;
  byte bVar112;
  byte bVar113;
  byte bVar114;
  byte bVar115;
  undefined1 auVar100 [16];
  byte bVar116;
  byte bVar118;
  byte bVar119;
  byte bVar120;
  byte bVar121;
  byte bVar122;
  byte bVar123;
  undefined8 uVar117;
  byte bVar124;
  byte bVar125;
  byte bVar127;
  byte bVar128;
  byte bVar129;
  byte bVar130;
  byte bVar131;
  byte bVar132;
  undefined8 uVar126;
  byte bVar133;
  byte bVar134;
  byte bVar136;
  byte bVar137;
  byte bVar138;
  byte bVar139;
  byte bVar140;
  byte bVar141;
  undefined8 uVar135;
  byte bVar142;
  byte bVar143;
  byte bVar145;
  byte bVar146;
  byte bVar147;
  byte bVar148;
  byte bVar149;
  byte bVar150;
  undefined8 uVar144;
  byte bVar151;
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  byte abStack_3 [3];
  
  puVar8 = param_1 + -1;
  uVar10 = 0;
  do {
    uVar9 = uVar10;
    uVar11 = (uint)param_2;
    bVar18 = (byte)param_2;
    abStack_3[uVar9 + 2] = bVar18;
    puVar8 = puVar8 + 1;
    uVar10 = uVar9 - 1;
    bVar4 = 0xff < param_2;
    param_2 = param_2 >> 8;
  } while (bVar4);
  if (uVar10 == 0) {
    if (param_1 != (undefined1 *)0x0) {
      *param_1 = 0;
    }
    return 1;
  }
  uVar11 = uVar11 & 0xff;
  uVar6 = (ulong)((char)bVar18 < '\0');
  if (param_3 == 0) {
    uVar11 = 0;
    uVar10 = uVar6 - uVar10;
    goto joined_r0x0038e4b0;
  }
  if (0x80 < uVar11) {
    uVar11 = 0xff;
    uVar6 = 1;
    uVar10 = 1 - uVar10;
    goto joined_r0x0038e4b0;
  }
  if (uVar11 != 0x80) {
    uVar11 = 0xff;
    uVar6 = 0;
    uVar10 = -uVar10;
    goto joined_r0x0038e4b0;
  }
  if (-uVar10 < 2) {
    uVar5 = 0;
  }
  else {
    uVar6 = ~uVar10;
    if (uVar6 < 8) {
      uVar11 = 0;
      uVar15 = 1;
LAB_0038e634:
      lVar7 = uVar15 + uVar10;
      lVar14 = lVar7 + 1;
      do {
        pbVar1 = &stack0x00000000 + lVar7;
        lVar14 = lVar14 + 1;
        lVar7 = lVar7 + 1;
        uVar11 = uVar11 | *pbVar1;
      } while (lVar14 != 1);
    }
    else if (uVar6 < 0x20) {
      uVar11 = 0;
      uVar13 = 0;
LAB_0038e5c0:
      bVar22 = 0;
      bVar23 = 0;
      bVar24 = 0;
      bVar25 = 0;
      bVar26 = 0;
      bVar27 = 0;
      bVar28 = 0;
      bVar29 = 0;
      bVar30 = 0;
      bVar31 = 0;
      bVar32 = 0;
      bVar33 = 0;
      bVar34 = 0;
      bVar35 = 0;
      bVar36 = 0;
      bVar37 = 0;
      bVar38 = 0;
      bVar39 = 0;
      bVar40 = 0;
      bVar41 = 0;
      bVar42 = 0;
      bVar43 = 0;
      bVar44 = 0;
      bVar45 = 0;
      bVar46 = 0;
      bVar47 = 0;
      bVar48 = 0;
      bVar49 = 0;
      auVar154[8] = UNK_00200588;
      auVar154._0_8_ = _DAT_00200580;
      auVar155[8] = UNK_00200ab8;
      auVar155._0_8_ = _DAT_00200ab0;
      bVar18 = (byte)uVar11;
      bVar19 = (byte)(uVar11 >> 8);
      bVar20 = (byte)(uVar11 >> 0x10);
      bVar21 = (byte)(uVar11 >> 0x18);
      uVar17 = uVar6 & 0xfffffffffffffff8;
      uVar15 = uVar17 | 1;
      lVar14 = uVar13 - uVar17;
      puVar12 = (ulong *)(&stack0x00000000 + uVar10 + uVar13 + 1);
      do {
        auVar156._0_8_ = *puVar12;
        auVar156._8_8_ = 0;
        lVar14 = lVar14 + 8;
        auVar154[9] = (char)_UNK_00200589;
        auVar154[10] = (char)((uint7)_UNK_00200589 >> 8);
        auVar154[0xb] = (char)((uint7)_UNK_00200589 >> 0x10);
        auVar154[0xc] = (char)((uint7)_UNK_00200589 >> 0x18);
        auVar154[0xd] = (char)((uint7)_UNK_00200589 >> 0x20);
        auVar154[0xe] = (char)((uint7)_UNK_00200589 >> 0x28);
        auVar154[0xf] = (char)((uint7)_UNK_00200589 >> 0x30);
        auVar100 = a64_TBL(ZEXT816(0),auVar156,auVar154);
        auVar155[9] = (char)_UNK_00200ab9;
        auVar155[10] = (char)((uint7)_UNK_00200ab9 >> 8);
        auVar155[0xb] = (char)((uint7)_UNK_00200ab9 >> 0x10);
        auVar155[0xc] = (char)((uint7)_UNK_00200ab9 >> 0x18);
        auVar155[0xd] = (char)((uint7)_UNK_00200ab9 >> 0x20);
        auVar155[0xe] = (char)((uint7)_UNK_00200ab9 >> 0x28);
        auVar155[0xf] = (char)((uint7)_UNK_00200ab9 >> 0x30);
        auVar83 = a64_TBL(ZEXT816(0),auVar156,auVar155);
        bVar34 = bVar34 | auVar83[0];
        bVar35 = bVar35 | auVar83[1];
        bVar36 = bVar36 | auVar83[2];
        bVar37 = bVar37 | auVar83[3];
        bVar38 = bVar38 | auVar83[4];
        bVar39 = bVar39 | auVar83[5];
        bVar40 = bVar40 | auVar83[6];
        bVar41 = bVar41 | auVar83[7];
        bVar42 = bVar42 | auVar83[8];
        bVar43 = bVar43 | auVar83[9];
        bVar44 = bVar44 | auVar83[10];
        bVar45 = bVar45 | auVar83[0xb];
        bVar46 = bVar46 | auVar83[0xc];
        bVar47 = bVar47 | auVar83[0xd];
        bVar48 = bVar48 | auVar83[0xe];
        bVar49 = bVar49 | auVar83[0xf];
        bVar18 = bVar18 | auVar100[0];
        bVar19 = bVar19 | auVar100[1];
        bVar20 = bVar20 | auVar100[2];
        bVar21 = bVar21 | auVar100[3];
        bVar22 = bVar22 | auVar100[4];
        bVar23 = bVar23 | auVar100[5];
        bVar24 = bVar24 | auVar100[6];
        bVar25 = bVar25 | auVar100[7];
        bVar26 = bVar26 | auVar100[8];
        bVar27 = bVar27 | auVar100[9];
        bVar28 = bVar28 | auVar100[10];
        bVar29 = bVar29 | auVar100[0xb];
        bVar30 = bVar30 | auVar100[0xc];
        bVar31 = bVar31 | auVar100[0xd];
        bVar32 = bVar32 | auVar100[0xe];
        bVar33 = bVar33 | auVar100[0xf];
        puVar12 = puVar12 + 1;
      } while (lVar14 != 0);
      bVar18 = bVar18 | bVar34;
      bVar19 = bVar19 | bVar35;
      bVar20 = bVar20 | bVar36;
      bVar21 = bVar21 | bVar37;
      bVar22 = bVar22 | bVar38;
      bVar23 = bVar23 | bVar39;
      bVar24 = bVar24 | bVar40;
      bVar25 = bVar25 | bVar41;
      auVar157[1] = bVar19;
      auVar157[0] = bVar18;
      auVar157[2] = bVar20;
      auVar157[3] = bVar21;
      auVar157[4] = bVar22;
      auVar157[5] = bVar23;
      auVar157[6] = bVar24;
      auVar157[7] = bVar25;
      auVar157[8] = bVar26 | bVar42;
      auVar157[9] = bVar27 | bVar43;
      auVar157[10] = bVar28 | bVar44;
      auVar157[0xb] = bVar29 | bVar45;
      auVar157[0xc] = bVar30 | bVar46;
      auVar157[0xd] = bVar31 | bVar47;
      auVar157[0xe] = bVar32 | bVar48;
      auVar157[0xf] = bVar33 | bVar49;
      auVar158[1] = bVar19;
      auVar158[0] = bVar18;
      auVar158[2] = bVar20;
      auVar158[3] = bVar21;
      auVar158[4] = bVar22;
      auVar158[5] = bVar23;
      auVar158[6] = bVar24;
      auVar158[7] = bVar25;
      auVar158[8] = bVar26 | bVar42;
      auVar158[9] = bVar27 | bVar43;
      auVar158[10] = bVar28 | bVar44;
      auVar158[0xb] = bVar29 | bVar45;
      auVar158[0xc] = bVar30 | bVar46;
      auVar158[0xd] = bVar31 | bVar47;
      auVar158[0xe] = bVar32 | bVar48;
      auVar158[0xf] = bVar33 | bVar49;
      auVar83 = NEON_ext(auVar157,auVar158,8,1);
      uVar11 = CONCAT13(bVar21 | auVar83[3],
                        CONCAT12(bVar20 | auVar83[2],
                                 CONCAT11(bVar19 | auVar83[1],bVar18 | auVar83[0])));
      uVar11 = uVar11 | (uint)(CONCAT17(bVar25 | auVar83[7],
                                        CONCAT16(bVar24 | auVar83[6],
                                                 CONCAT15(bVar23 | auVar83[5],
                                                          CONCAT14(bVar22 | auVar83[4],uVar11)))) >>
                              0x20);
      if (uVar6 != uVar17) goto LAB_0038e634;
    }
    else {
      bVar18 = 0;
      bVar19 = 0;
      bVar20 = 0;
      bVar21 = 0;
      bVar22 = 0;
      bVar23 = 0;
      bVar24 = 0;
      bVar25 = 0;
      bVar26 = 0;
      bVar27 = 0;
      bVar28 = 0;
      bVar29 = 0;
      bVar30 = 0;
      bVar31 = 0;
      bVar32 = 0;
      bVar33 = 0;
      bVar50 = 0;
      bVar51 = 0;
      bVar52 = 0;
      bVar53 = 0;
      bVar54 = 0;
      bVar55 = 0;
      bVar56 = 0;
      bVar57 = 0;
      bVar58 = 0;
      bVar59 = 0;
      bVar60 = 0;
      bVar61 = 0;
      bVar62 = 0;
      bVar63 = 0;
      bVar64 = 0;
      bVar65 = 0;
      bVar34 = 0;
      bVar35 = 0;
      bVar36 = 0;
      bVar37 = 0;
      bVar38 = 0;
      bVar39 = 0;
      bVar40 = 0;
      bVar41 = 0;
      bVar42 = 0;
      bVar43 = 0;
      bVar44 = 0;
      bVar45 = 0;
      bVar46 = 0;
      bVar47 = 0;
      bVar48 = 0;
      bVar49 = 0;
      bVar66 = 0;
      bVar67 = 0;
      bVar68 = 0;
      bVar69 = 0;
      bVar70 = 0;
      bVar71 = 0;
      bVar72 = 0;
      bVar73 = 0;
      bVar74 = 0;
      bVar75 = 0;
      bVar76 = 0;
      bVar77 = 0;
      bVar78 = 0;
      bVar79 = 0;
      bVar80 = 0;
      bVar81 = 0;
      bVar82 = 0;
      bVar84 = 0;
      bVar85 = 0;
      bVar86 = 0;
      bVar87 = 0;
      bVar88 = 0;
      bVar89 = 0;
      bVar90 = 0;
      bVar91 = 0;
      bVar92 = 0;
      bVar93 = 0;
      bVar94 = 0;
      bVar95 = 0;
      bVar96 = 0;
      bVar97 = 0;
      bVar98 = 0;
      uVar117 = 0;
      uVar126 = 0;
      bVar99 = 0;
      bVar101 = 0;
      bVar102 = 0;
      bVar103 = 0;
      bVar104 = 0;
      bVar105 = 0;
      bVar106 = 0;
      bVar107 = 0;
      bVar108 = 0;
      bVar109 = 0;
      bVar110 = 0;
      bVar111 = 0;
      bVar112 = 0;
      bVar113 = 0;
      bVar114 = 0;
      bVar115 = 0;
      uVar135 = 0;
      uVar144 = 0;
      uVar13 = uVar6 & 0xffffffffffffffe0;
      auVar100[8] = UNK_00200588;
      auVar100._0_8_ = _DAT_00200580;
      auVar100._9_7_ = _UNK_00200589;
      auVar83[8] = UNK_00200588;
      auVar83._0_8_ = _DAT_00200580;
      auVar83._9_7_ = _UNK_00200589;
      auVar3[8] = UNK_00200ab8;
      auVar3._0_8_ = _DAT_00200ab0;
      auVar3._9_7_ = _UNK_00200ab9;
      auVar2[8] = UNK_00200ab8;
      auVar2._0_8_ = _DAT_00200ab0;
      auVar2._9_7_ = _UNK_00200ab9;
      pauVar16 = (undefined1 (*) [16])(&stack0x00000010 + uVar9);
      uVar15 = uVar13;
      do {
        auVar152 = pauVar16[-1];
        auVar153 = *pauVar16;
        uVar15 = uVar15 - 0x20;
        pauVar16 = pauVar16 + 2;
        auVar154 = a64_TBL(ZEXT816(0),auVar152,auVar2);
        auVar155 = a64_TBL(ZEXT816(0),auVar152,_DAT_002007c0);
        auVar156 = a64_TBL(ZEXT816(0),auVar152,_DAT_002000f0);
        auVar152 = a64_TBL(ZEXT816(0),auVar152,auVar83);
        auVar157 = a64_TBL(ZEXT816(0),auVar153,_DAT_002007c0);
        auVar158 = a64_TBL(ZEXT816(0),auVar153,_DAT_002000f0);
        auVar159 = a64_TBL(ZEXT816(0),auVar153,auVar100);
        auVar153 = a64_TBL(ZEXT816(0),auVar153,auVar3);
        bVar34 = bVar34 | auVar155[0];
        bVar35 = bVar35 | auVar155[1];
        bVar36 = bVar36 | auVar155[2];
        bVar37 = bVar37 | auVar155[3];
        bVar38 = bVar38 | auVar155[4];
        bVar39 = bVar39 | auVar155[5];
        bVar40 = bVar40 | auVar155[6];
        bVar41 = bVar41 | auVar155[7];
        bVar42 = bVar42 | auVar155[8];
        bVar43 = bVar43 | auVar155[9];
        bVar44 = bVar44 | auVar155[10];
        bVar45 = bVar45 | auVar155[0xb];
        bVar46 = bVar46 | auVar155[0xc];
        bVar47 = bVar47 | auVar155[0xd];
        bVar48 = bVar48 | auVar155[0xe];
        bVar49 = bVar49 | auVar155[0xf];
        bVar50 = bVar50 | auVar154[0];
        bVar51 = bVar51 | auVar154[1];
        bVar52 = bVar52 | auVar154[2];
        bVar53 = bVar53 | auVar154[3];
        bVar54 = bVar54 | auVar154[4];
        bVar55 = bVar55 | auVar154[5];
        bVar56 = bVar56 | auVar154[6];
        bVar57 = bVar57 | auVar154[7];
        bVar58 = bVar58 | auVar154[8];
        bVar59 = bVar59 | auVar154[9];
        bVar60 = bVar60 | auVar154[10];
        bVar61 = bVar61 | auVar154[0xb];
        bVar62 = bVar62 | auVar154[0xc];
        bVar63 = bVar63 | auVar154[0xd];
        bVar64 = bVar64 | auVar154[0xe];
        bVar65 = bVar65 | auVar154[0xf];
        bVar66 = bVar66 | auVar156[0];
        bVar67 = bVar67 | auVar156[1];
        bVar68 = bVar68 | auVar156[2];
        bVar69 = bVar69 | auVar156[3];
        bVar70 = bVar70 | auVar156[4];
        bVar71 = bVar71 | auVar156[5];
        bVar72 = bVar72 | auVar156[6];
        bVar73 = bVar73 | auVar156[7];
        bVar74 = bVar74 | auVar156[8];
        bVar75 = bVar75 | auVar156[9];
        bVar76 = bVar76 | auVar156[10];
        bVar77 = bVar77 | auVar156[0xb];
        bVar78 = bVar78 | auVar156[0xc];
        bVar79 = bVar79 | auVar156[0xd];
        bVar80 = bVar80 | auVar156[0xe];
        bVar81 = bVar81 | auVar156[0xf];
        bVar18 = bVar18 | auVar152[0];
        bVar19 = bVar19 | auVar152[1];
        bVar20 = bVar20 | auVar152[2];
        bVar21 = bVar21 | auVar152[3];
        bVar22 = bVar22 | auVar152[4];
        bVar23 = bVar23 | auVar152[5];
        bVar24 = bVar24 | auVar152[6];
        bVar25 = bVar25 | auVar152[7];
        bVar26 = bVar26 | auVar152[8];
        bVar27 = bVar27 | auVar152[9];
        bVar28 = bVar28 | auVar152[10];
        bVar29 = bVar29 | auVar152[0xb];
        bVar30 = bVar30 | auVar152[0xc];
        bVar31 = bVar31 | auVar152[0xd];
        bVar32 = bVar32 | auVar152[0xe];
        bVar33 = bVar33 | auVar152[0xf];
        bVar99 = bVar99 | auVar157[0];
        bVar101 = bVar101 | auVar157[1];
        bVar102 = bVar102 | auVar157[2];
        bVar103 = bVar103 | auVar157[3];
        bVar104 = bVar104 | auVar157[4];
        bVar105 = bVar105 | auVar157[5];
        bVar106 = bVar106 | auVar157[6];
        bVar107 = bVar107 | auVar157[7];
        bVar108 = bVar108 | auVar157[8];
        bVar109 = bVar109 | auVar157[9];
        bVar110 = bVar110 | auVar157[10];
        bVar111 = bVar111 | auVar157[0xb];
        bVar112 = bVar112 | auVar157[0xc];
        bVar113 = bVar113 | auVar157[0xd];
        bVar114 = bVar114 | auVar157[0xe];
        bVar115 = bVar115 | auVar157[0xf];
        bVar134 = (byte)uVar135 | auVar158[0];
        bVar136 = (byte)((ulong)uVar135 >> 8) | auVar158[1];
        bVar137 = (byte)((ulong)uVar135 >> 0x10) | auVar158[2];
        bVar138 = (byte)((ulong)uVar135 >> 0x18) | auVar158[3];
        bVar139 = (byte)((ulong)uVar135 >> 0x20) | auVar158[4];
        bVar140 = (byte)((ulong)uVar135 >> 0x28) | auVar158[5];
        bVar141 = (byte)((ulong)uVar135 >> 0x30) | auVar158[6];
        bVar142 = (byte)((ulong)uVar135 >> 0x38) | auVar158[7];
        uVar135 = CONCAT17(bVar142,CONCAT16(bVar141,CONCAT15(bVar140,CONCAT14(bVar139,CONCAT13(
                                                  bVar138,CONCAT12(bVar137,CONCAT11(bVar136,bVar134)
                                                                  ))))));
        bVar143 = (byte)uVar144 | auVar158[8];
        bVar145 = (byte)((ulong)uVar144 >> 8) | auVar158[9];
        bVar146 = (byte)((ulong)uVar144 >> 0x10) | auVar158[10];
        bVar147 = (byte)((ulong)uVar144 >> 0x18) | auVar158[0xb];
        bVar148 = (byte)((ulong)uVar144 >> 0x20) | auVar158[0xc];
        bVar149 = (byte)((ulong)uVar144 >> 0x28) | auVar158[0xd];
        bVar150 = (byte)((ulong)uVar144 >> 0x30) | auVar158[0xe];
        bVar151 = (byte)((ulong)uVar144 >> 0x38) | auVar158[0xf];
        uVar144 = CONCAT17(bVar151,CONCAT16(bVar150,CONCAT15(bVar149,CONCAT14(bVar148,CONCAT13(
                                                  bVar147,CONCAT12(bVar146,CONCAT11(bVar145,bVar143)
                                                                  ))))));
        bVar116 = (byte)uVar117 | auVar153[0];
        bVar118 = (byte)((ulong)uVar117 >> 8) | auVar153[1];
        bVar119 = (byte)((ulong)uVar117 >> 0x10) | auVar153[2];
        bVar120 = (byte)((ulong)uVar117 >> 0x18) | auVar153[3];
        bVar121 = (byte)((ulong)uVar117 >> 0x20) | auVar153[4];
        bVar122 = (byte)((ulong)uVar117 >> 0x28) | auVar153[5];
        bVar123 = (byte)((ulong)uVar117 >> 0x30) | auVar153[6];
        bVar124 = (byte)((ulong)uVar117 >> 0x38) | auVar153[7];
        uVar117 = CONCAT17(bVar124,CONCAT16(bVar123,CONCAT15(bVar122,CONCAT14(bVar121,CONCAT13(
                                                  bVar120,CONCAT12(bVar119,CONCAT11(bVar118,bVar116)
                                                                  ))))));
        bVar125 = (byte)uVar126 | auVar153[8];
        bVar127 = (byte)((ulong)uVar126 >> 8) | auVar153[9];
        bVar128 = (byte)((ulong)uVar126 >> 0x10) | auVar153[10];
        bVar129 = (byte)((ulong)uVar126 >> 0x18) | auVar153[0xb];
        bVar130 = (byte)((ulong)uVar126 >> 0x20) | auVar153[0xc];
        bVar131 = (byte)((ulong)uVar126 >> 0x28) | auVar153[0xd];
        bVar132 = (byte)((ulong)uVar126 >> 0x30) | auVar153[0xe];
        bVar133 = (byte)((ulong)uVar126 >> 0x38) | auVar153[0xf];
        uVar126 = CONCAT17(bVar133,CONCAT16(bVar132,CONCAT15(bVar131,CONCAT14(bVar130,CONCAT13(
                                                  bVar129,CONCAT12(bVar128,CONCAT11(bVar127,bVar125)
                                                                  ))))));
        bVar82 = bVar82 | auVar159[0];
        bVar84 = bVar84 | auVar159[1];
        bVar85 = bVar85 | auVar159[2];
        bVar86 = bVar86 | auVar159[3];
        bVar87 = bVar87 | auVar159[4];
        bVar88 = bVar88 | auVar159[5];
        bVar89 = bVar89 | auVar159[6];
        bVar90 = bVar90 | auVar159[7];
        bVar91 = bVar91 | auVar159[8];
        bVar92 = bVar92 | auVar159[9];
        bVar93 = bVar93 | auVar159[10];
        bVar94 = bVar94 | auVar159[0xb];
        bVar95 = bVar95 | auVar159[0xc];
        bVar96 = bVar96 | auVar159[0xd];
        bVar97 = bVar97 | auVar159[0xe];
        bVar98 = bVar98 | auVar159[0xf];
      } while (uVar15 != 0);
      bVar18 = bVar82 | bVar18 | bVar99 | bVar34 | bVar116 | bVar50 | bVar134 | bVar66;
      bVar19 = bVar84 | bVar19 | bVar101 | bVar35 | bVar118 | bVar51 | bVar136 | bVar67;
      bVar20 = bVar85 | bVar20 | bVar102 | bVar36 | bVar119 | bVar52 | bVar137 | bVar68;
      bVar21 = bVar86 | bVar21 | bVar103 | bVar37 | bVar120 | bVar53 | bVar138 | bVar69;
      bVar22 = bVar87 | bVar22 | bVar104 | bVar38 | bVar121 | bVar54 | bVar139 | bVar70;
      bVar23 = bVar88 | bVar23 | bVar105 | bVar39 | bVar122 | bVar55 | bVar140 | bVar71;
      bVar24 = bVar89 | bVar24 | bVar106 | bVar40 | bVar123 | bVar56 | bVar141 | bVar72;
      bVar25 = bVar90 | bVar25 | bVar107 | bVar41 | bVar124 | bVar57 | bVar142 | bVar73;
      bVar26 = bVar91 | bVar26 | bVar108 | bVar42 | bVar125 | bVar58 | bVar143 | bVar74;
      bVar27 = bVar92 | bVar27 | bVar109 | bVar43 | bVar127 | bVar59 | bVar145 | bVar75;
      bVar28 = bVar93 | bVar28 | bVar110 | bVar44 | bVar128 | bVar60 | bVar146 | bVar76;
      bVar29 = bVar94 | bVar29 | bVar111 | bVar45 | bVar129 | bVar61 | bVar147 | bVar77;
      bVar30 = bVar95 | bVar30 | bVar112 | bVar46 | bVar130 | bVar62 | bVar148 | bVar78;
      bVar31 = bVar96 | bVar31 | bVar113 | bVar47 | bVar131 | bVar63 | bVar149 | bVar79;
      bVar32 = bVar97 | bVar32 | bVar114 | bVar48 | bVar132 | bVar64 | bVar150 | bVar80;
      bVar33 = bVar98 | bVar33 | bVar115 | bVar49 | bVar133 | bVar65 | bVar151 | bVar81;
      auVar152[1] = bVar19;
      auVar152[0] = bVar18;
      auVar152[2] = bVar20;
      auVar152[3] = bVar21;
      auVar152[4] = bVar22;
      auVar152[5] = bVar23;
      auVar152[6] = bVar24;
      auVar152[7] = bVar25;
      auVar152[8] = bVar26;
      auVar152[9] = bVar27;
      auVar152[10] = bVar28;
      auVar152[0xb] = bVar29;
      auVar152[0xc] = bVar30;
      auVar152[0xd] = bVar31;
      auVar152[0xe] = bVar32;
      auVar152[0xf] = bVar33;
      auVar153[1] = bVar19;
      auVar153[0] = bVar18;
      auVar153[2] = bVar20;
      auVar153[3] = bVar21;
      auVar153[4] = bVar22;
      auVar153[5] = bVar23;
      auVar153[6] = bVar24;
      auVar153[7] = bVar25;
      auVar153[8] = bVar26;
      auVar153[9] = bVar27;
      auVar153[10] = bVar28;
      auVar153[0xb] = bVar29;
      auVar153[0xc] = bVar30;
      auVar153[0xd] = bVar31;
      auVar153[0xe] = bVar32;
      auVar153[0xf] = bVar33;
      auVar83 = NEON_ext(auVar152,auVar153,8,1);
      uVar11 = CONCAT13(bVar21 | auVar83[3],
                        CONCAT12(bVar20 | auVar83[2],
                                 CONCAT11(bVar19 | auVar83[1],bVar18 | auVar83[0])));
      uVar11 = uVar11 | (uint)(CONCAT17(bVar25 | auVar83[7],
                                        CONCAT16(bVar24 | auVar83[6],
                                                 CONCAT15(bVar23 | auVar83[5],
                                                          CONCAT14(bVar22 | auVar83[4],uVar11)))) >>
                              0x20);
      if (uVar6 != uVar13) {
        if ((uVar6 & 0x18) == 0) {
          uVar15 = uVar13 | 1;
          goto LAB_0038e634;
        }
        goto LAB_0038e5c0;
      }
    }
    uVar5 = (uint)(uVar11 != 0);
  }
  uVar11 = -uVar5;
  uVar6 = (ulong)uVar5;
  uVar10 = uVar6 - uVar10;
joined_r0x0038e4b0:
  if (param_1 != (undefined1 *)0x0) {
    uVar15 = 0;
    uVar5 = uVar11 & 1;
    *param_1 = (char)uVar11;
    do {
      lVar7 = uVar15 + 2;
      bVar4 = uVar9 != uVar15;
      lVar14 = uVar6 + uVar15;
      uVar15 = uVar15 - 1;
      uVar5 = uVar5 + ((uint)abStack_3[lVar7] ^ uVar11 & 0xff);
      puVar8[lVar14] = (char)uVar5;
      uVar5 = uVar5 >> 8;
    } while (bVar4);
  }
  return uVar10 & 0xffffffff;
}


// ===== 0038e6b8  FUN_0038e6b8 =====

undefined8 FUN_0038e6b8(long *param_1,long param_2)

{
  char *pcVar1;
  
  if (param_2 < 1) {
    return 1;
  }
  if (param_2 == 1) {
    return 0;
  }
  pcVar1 = (char *)*param_1;
  if (*pcVar1 != '\0') {
    return 0;
  }
  if (pcVar1[1] != '\0') {
    return 0;
  }
  *param_1 = (long)(pcVar1 + 2);
  return 1;
}


// ===== 0038e708  FUN_0038e708 =====

undefined8 FUN_0038e708(long *param_1,long param_2)

{
  char *pcVar1;
  
  if (param_2 < 1) {
    return 1;
  }
  if (param_2 == 1) {
    return 0;
  }
  pcVar1 = (char *)*param_1;
  if (*pcVar1 != '\0') {
    return 0;
  }
  if (pcVar1[1] != '\0') {
    return 0;
  }
  *param_1 = (long)(pcVar1 + 2);
  return 1;
}


// ===== 0038e758  FUN_0038e758 =====

/* WARNING: Removing unreachable block (ram,0x0038e7ac) */
/* WARNING: Removing unreachable block (ram,0x0038e7b0) */
/* WARNING: Removing unreachable block (ram,0x0038e7c8) */

byte FUN_0038e758(long *param_1,ulong *param_2,uint *param_3,uint *param_4,long param_5)

{
  ulong uVar1;
  byte bVar2;
  undefined8 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  byte bVar12;
  byte *pbVar13;
  byte bVar14;
  
  if (param_5 < 1) {
    FUN_00379868();
    FUN_0037995c("crypto/asn1/asn1_lib.c",0x38,"ASN1_get_object");
    uVar3 = 0xe0;
    goto LAB_0038e940;
  }
  pbVar4 = (byte *)*param_1;
  bVar14 = *pbVar4;
  uVar10 = bVar14 & 0x1f;
  if (uVar10 == 0x1f) {
    if (param_5 != 1) {
      pbVar5 = pbVar4 + 2;
      lVar8 = param_5 + -2;
      if (lVar8 != 0) {
        uVar10 = (uint)pbVar4[1];
        goto LAB_0038e80c;
      }
    }
  }
  else {
    lVar8 = param_5 + -1;
    if (lVar8 != 0) {
      pbVar5 = pbVar4 + 1;
LAB_0038e80c:
      *param_3 = uVar10;
      bVar12 = bVar14 & 0x20;
      *param_4 = bVar14 & 0xc0;
      bVar2 = *pbVar5;
      uVar6 = (ulong)bVar2;
      if (bVar2 == 0x80) {
        *param_2 = 0;
        if ((bVar14 & 0x20) == 0) goto LAB_0038e91c;
        pbVar13 = pbVar5 + 1;
        bVar14 = 1;
        if (pbVar4 + (param_5 - (long)pbVar13) < (byte *)0x8000000000000000) goto LAB_0038e8b0;
      }
      else {
        uVar7 = uVar6 & 0x7f;
        pbVar13 = pbVar5 + 1;
        if ((char)bVar2 < '\0') {
          if (lVar8 <= (long)(uVar7 + 1)) goto LAB_0038e91c;
          if ((int)uVar7 != 0) {
            lVar8 = 0;
            pbVar5 = pbVar5 + (ulong)((int)uVar7 - 1) + 2;
LAB_0038e8ec:
            if (pbVar13[lVar8] == 0) goto code_r0x0038e8f4;
            if (8 < (bVar2 & 0x7f) - (int)lVar8) goto LAB_0038e91c;
            pbVar5 = pbVar13 + lVar8;
            if ((int)(uVar6 & 0x7f) != (int)lVar8) {
              uVar7 = 0;
              uVar11 = ((uVar6 & 0x7f) - lVar8) + 1;
              lVar9 = 0;
              do {
                uVar10 = (int)uVar11 - 1;
                uVar11 = (ulong)uVar10;
                uVar1 = uVar7 << 8;
                uVar7 = pbVar13[lVar8 + lVar9] | uVar1;
                lVar9 = lVar9 + 1;
              } while (1 < uVar10);
              if (-1 < (long)uVar1) {
                pbVar13 = pbVar5 + ((uVar6 & 0x7f) - lVar8);
                goto LAB_0038e860;
              }
              goto LAB_0038e91c;
            }
            goto LAB_0038e96c;
          }
          uVar7 = 0;
        }
LAB_0038e860:
        bVar14 = 0;
        *param_2 = uVar7;
        if ((long)uVar7 <= (long)(pbVar4 + (param_5 - (long)pbVar13))) goto LAB_0038e8b0;
      }
      FUN_00379868();
      FUN_0037995c("crypto/asn1/asn1_lib.c",0x5f,"ASN1_get_object");
      FUN_00379a5c(0xd,0x9b,0);
      bVar12 = bVar12 | 0x80;
LAB_0038e8b0:
      *param_1 = (long)pbVar13;
      return bVar12 | bVar14;
    }
  }
LAB_0038e91c:
  FUN_00379868();
  FUN_0037995c("crypto/asn1/asn1_lib.c",0x69,"ASN1_get_object");
  uVar3 = 0x7b;
LAB_0038e940:
  FUN_00379a5c(0xd,uVar3,0);
  return 0x80;
code_r0x0038e8f4:
  lVar8 = lVar8 + 1;
  if ((bVar2 & 0x7f) == (uint)lVar8) goto LAB_0038e96c;
  goto LAB_0038e8ec;
LAB_0038e96c:
  uVar7 = 0;
  pbVar13 = pbVar5;
  goto LAB_0038e860;
}


// ===== 0038e9b8  FUN_0038e9b8 =====

void FUN_0038e9b8(undefined8 *param_1,int param_2,uint param_3,uint param_4,byte param_5)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  
  pbVar3 = (byte *)*param_1;
  bVar1 = param_5 & 0xc0 | (param_2 != 0) << 5;
  if ((int)param_4 < 0x1f) {
    *pbVar3 = bVar1 | (byte)param_4 & 0x1f;
  }
  else {
    lVar4 = 0;
    *pbVar3 = bVar1 | 0x1f;
    uVar6 = (ulong)param_4;
    do {
      uVar5 = (uint)uVar6;
      lVar4 = lVar4 + 1;
      uVar6 = uVar6 >> 7;
    } while (0x7f < uVar5);
    pbVar3[lVar4] = (byte)param_4 & 0x7f;
    lVar8 = lVar4;
    if (lVar4 != 1) {
      do {
        param_4 = param_4 >> 7;
        pbVar3[lVar8 + -1] = (byte)param_4 | 0x80;
        lVar8 = lVar8 + -1;
      } while (1 < lVar8);
    }
    pbVar3 = pbVar3 + lVar4;
  }
  pbVar2 = pbVar3 + 1;
  if (param_2 == 2) {
    *pbVar2 = 0x80;
    *param_1 = pbVar3 + 2;
    return;
  }
  if ((int)param_3 < 0x80) {
    *pbVar2 = (byte)param_3;
    *param_1 = pbVar3 + 2;
    return;
  }
  lVar4 = 1;
  uVar6 = (ulong)param_3;
  do {
    uVar5 = (uint)uVar6;
    lVar4 = lVar4 + 1;
    uVar6 = uVar6 >> 8;
  } while (0xff < uVar5);
  *pbVar2 = (char)lVar4 - 1U | 0x80;
  lVar8 = lVar4;
  do {
    iVar7 = (int)lVar8;
    lVar8 = lVar8 + -1;
    pbVar3[(ulong)(iVar7 - 2) + 2] = (byte)param_3;
    param_3 = param_3 >> 8;
  } while (1 < lVar8);
  *param_1 = pbVar2 + lVar4;
  return;
}


// ===== 0038eac4  FUN_0038eac4 =====

undefined8 FUN_0038eac4(undefined8 *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)*param_1;
  *puVar1 = 0;
  *param_1 = puVar1 + 1;
  return 2;
}


// ===== 0038eadc  FUN_0038eadc =====

int FUN_0038eadc(int param_1,uint param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if ((int)param_2 < 0) {
    return -1;
  }
  iVar3 = 1;
  if (0x1e < (int)param_3) {
    do {
      iVar3 = iVar3 + 1;
      bVar1 = 0x7f < param_3;
      param_3 = param_3 >> 7;
    } while (bVar1);
  }
  if (param_1 != 2) {
    iVar3 = iVar3 + 1;
    uVar4 = param_2;
    if (0x7f < (int)param_2) {
      do {
        iVar3 = iVar3 + 1;
        bVar1 = 0xff < uVar4;
        uVar4 = uVar4 >> 8;
      } while (bVar1);
    }
    iVar2 = iVar3 + param_2;
    if ((int)(param_2 ^ 0x7fffffff) <= iVar3) {
      iVar2 = -1;
    }
    return iVar2;
  }
  iVar2 = iVar3 + 3 + param_2;
  if ((int)(param_2 ^ 0x7fffffff) <= iVar3 + 3) {
    iVar2 = -1;
  }
  return iVar2;
}


// ===== 0038eb60  FUN_0038eb60 =====

void FUN_0038eb60(long param_1,uint param_2)

{
  *(ulong *)(param_1 + 0x10) =
       *(ulong *)(param_1 + 0x10) & 0xfffffffffffffff0 | (ulong)(param_2 & 7 | 8);
  return;
}


// ===== 0038eb7c  FUN_0038eb7c =====

undefined8 FUN_0038eb7c(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if (param_2 != (undefined4 *)0x0) {
    uVar2 = *(undefined8 *)(param_2 + 2);
    uVar1 = *param_2;
    *(undefined4 *)(param_1 + 4) = param_2[1];
    uVar2 = FUN_0038ebe0(param_1,uVar2,uVar1);
    if ((int)uVar2 != 0) {
      uVar2 = 1;
      uVar3 = *(ulong *)(param_1 + 0x10) & 0x80;
      *(ulong *)(param_1 + 0x10) = uVar3;
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_2 + 4) & 0xffffffffffffff7f | uVar3;
    }
    return uVar2;
  }
  return 0;
}


// ===== 0038ebe0  FUN_0038ebe0 =====

undefined8 FUN_0038ebe0(int *param_1,char *param_2,uint param_3)

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


// ===== 0038ed00  FUN_0038ed00 =====

undefined4 * FUN_0038ed00(undefined4 *param_1)

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


// ===== 0038edac  FUN_0038edac =====

void FUN_0038edac(void)

{
  long lVar1;
  
  lVar1 = FUN_003c8474(0x18,"crypto/asn1/asn1_lib.c",0x163);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 4) = 4;
  }
  return;
}


// ===== 0038eddc  FUN_0038eddc =====

void FUN_0038eddc(long param_1)

{
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = (uint)*(undefined8 *)(param_1 + 0x10);
    if ((uVar1 >> 4 & 1) == 0) {
      FUN_003c86b4(*(undefined8 *)(param_1 + 8),"crypto/asn1/asn1_lib.c",0x16f);
    }
    if ((uVar1 >> 7 & 1) == 0) {
      FUN_003c86b4(param_1,"crypto/asn1/asn1_lib.c",0x171);
      return;
    }
  }
  return;
}


// ===== 0038ee3c  FUN_0038ee3c =====

void FUN_0038ee3c(undefined4 *param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_003c86b4(*(undefined8 *)(param_1 + 2),"crypto/asn1/asn1_lib.c",0x155);
  *(undefined8 *)(param_1 + 2) = param_2;
  *param_1 = param_3;
  return;
}


// ===== 0038ee84  FUN_0038ee84 =====

void FUN_0038ee84(undefined4 param_1)

{
  long lVar1;
  
  lVar1 = FUN_003c8474(0x18,"crypto/asn1/asn1_lib.c",0x163);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 4) = param_1;
  }
  return;
}


// ===== 0038eebc  FUN_0038eebc =====

void FUN_0038eebc(long param_1,int param_2)

{
  if (param_1 != 0) {
    if ((*(byte *)(param_1 + 0x10) >> 4 & 1) == 0) {
      FUN_003c86b4(*(undefined8 *)(param_1 + 8),"crypto/asn1/asn1_lib.c",0x16f);
    }
    if (param_2 == 0) {
      FUN_003c86b4(param_1,"crypto/asn1/asn1_lib.c",0x171);
      return;
    }
  }
  return;
}


// ===== 0038ef20  FUN_0038ef20 =====

void FUN_0038ef20(int *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (int *)0x0) {
    if ((*(long *)(param_1 + 2) != 0) && ((*(byte *)(param_1 + 4) >> 4 & 1) == 0)) {
      FUN_003c89b8(*(long *)(param_1 + 2),(long)*param_1);
    }
    uVar1 = *(undefined8 *)(param_1 + 4);
    if (((uint)uVar1 >> 4 & 1) == 0) {
      FUN_003c86b4(*(undefined8 *)(param_1 + 2),"crypto/asn1/asn1_lib.c",0x16f);
    }
    if (((uint)uVar1 >> 7 & 1) == 0) {
      FUN_003c86b4(param_1,"crypto/asn1/asn1_lib.c",0x171);
      return;
    }
  }
  return;
}


// ===== 0038ef94  FUN_0038ef94 =====

int FUN_0038ef94(int *param_1,int *param_2)

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


// ===== 0038f004  FUN_0038f004 =====

undefined4 FUN_0038f004(undefined4 *param_1)

{
  return *param_1;
}


// ===== 0038f00c  FUN_0038f00c =====

undefined4 FUN_0038f00c(long param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


// ===== 0038f014  FUN_0038f014 =====

undefined8 FUN_0038f014(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


// ===== 0038f01c  FUN_0038f01c =====

char * FUN_0038f01c(undefined8 param_1,char *param_2,ulong param_3)

{
  char *__s;
  int iVar1;
  int iVar2;
  size_t sVar3;
  int *piVar4;
  char *__dest;
  char *pcVar5;
  ulong uVar6;
  
  __s = "";
  if (param_2 != (char *)0x0) {
    __s = param_2;
  }
  sVar3 = strlen(__s);
  iVar1 = FUN_0040caf8(param_1);
  if (iVar1 < 1) {
    uVar6 = 0;
  }
  else {
    piVar4 = (int *)FUN_0040cb0c(param_1,0);
    uVar6 = (ulong)*piVar4;
    if (param_3 == 0) {
      iVar1 = FUN_0040caf8(param_1);
      if (1 < iVar1) {
        iVar1 = 1;
        do {
          piVar4 = (int *)FUN_0040cb0c(param_1,iVar1);
          iVar1 = iVar1 + 1;
          uVar6 = sVar3 + uVar6 + (long)*piVar4;
          iVar2 = FUN_0040caf8(param_1);
        } while (iVar1 < iVar2);
      }
    }
    else {
      if (param_3 < uVar6) {
        return (char *)0x0;
      }
      iVar1 = FUN_0040caf8(param_1);
      if (1 < iVar1) {
        iVar1 = 1;
        do {
          piVar4 = (int *)FUN_0040cb0c(param_1,iVar1);
          uVar6 = sVar3 + uVar6 + (long)*piVar4;
          if (param_3 < uVar6) {
            return (char *)0x0;
          }
          iVar1 = iVar1 + 1;
          iVar2 = FUN_0040caf8(param_1);
        } while (iVar1 < iVar2);
      }
    }
  }
  __dest = (char *)FUN_003c83a4(uVar6 + 1,"crypto/asn1/asn1_lib.c",0x1c8);
  if (__dest != (char *)0x0) {
    iVar1 = FUN_0040caf8(param_1);
    pcVar5 = __dest;
    if (0 < iVar1) {
      if (sVar3 == 0) {
        iVar1 = 0;
        do {
          piVar4 = (int *)FUN_0040cb0c(param_1,iVar1);
          iVar2 = *piVar4;
          strncpy(pcVar5,*(char **)(piVar4 + 2),(long)iVar2);
          pcVar5 = pcVar5 + iVar2;
          iVar1 = iVar1 + 1;
          iVar2 = FUN_0040caf8(param_1);
        } while (iVar1 < iVar2);
      }
      else {
        piVar4 = (int *)FUN_0040cb0c(param_1,0);
        iVar1 = *piVar4;
        strncpy(__dest,*(char **)(piVar4 + 2),(long)iVar1);
        pcVar5 = __dest + iVar1;
        iVar1 = FUN_0040caf8(param_1);
        if (1 < iVar1) {
          iVar1 = 1;
          do {
            piVar4 = (int *)FUN_0040cb0c(param_1,iVar1);
            iVar2 = *piVar4;
            strncpy(pcVar5,__s,sVar3 + 1);
            pcVar5 = strncpy(pcVar5 + sVar3,*(char **)(piVar4 + 2),(long)iVar2);
            pcVar5 = pcVar5 + iVar2;
            iVar1 = iVar1 + 1;
            iVar2 = FUN_0040caf8(param_1);
          } while (iVar1 < iVar2);
        }
      }
    }
    *pcVar5 = '\0';
  }
  return __dest;
}


