// ===== 004324bc  FUN_004324bc =====

void FUN_004324bc(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return;
}


// ===== 004324c4  FUN_004324c4 =====

void FUN_004324c4(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}


// ===== 004324cc  FUN_004324cc =====

undefined8 FUN_004324cc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


// ===== 004324d4  FUN_004324d4 =====

void FUN_004324d4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) | 2;
  return;
}


// ===== 004324e8  FUN_004324e8 =====

bool FUN_004324e8(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 == 0) {
    lVar2 = FUN_0040bf0c();
    *(long *)(param_1 + 0x30) = lVar2;
    if (lVar2 == 0) {
      return false;
    }
  }
  iVar1 = FUN_0040c89c(lVar2,param_2);
  return 0 < iVar1;
}


// ===== 0043252c  FUN_0043252c =====

void FUN_0043252c(long param_1)

{
  FUN_0040cb0c(*(undefined8 *)(param_1 + 0x38));
  return;
}


// ===== 00432534  FUN_00432534 =====

void FUN_00432534(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00432544(param_1,0,param_2,param_3);
  return;
}


// ===== 00432544  FUN_00432544 =====

long FUN_00432544(long param_1,int param_2,char *param_3,size_t param_4)

{
  int iVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  
  if ((param_3 == (char *)0x0) || (param_4 == 0)) {
    if (param_3 == (char *)0x0) {
      param_4 = 0;
      goto joined_r0x00432644;
    }
    param_4 = strlen(param_3);
    if (param_4 == 0) goto joined_r0x00432644;
  }
  else {
    pvVar2 = memchr(param_3,0,param_4 - (1 < param_4));
    if (pvVar2 != (void *)0x0) {
      return 0;
    }
  }
  param_4 = param_4 - (param_3[param_4 - 1] == '\0');
joined_r0x00432644:
  if (param_2 == 0) {
    FUN_0040ca6c(*(undefined8 *)(param_1 + 0x38),FUN_00431dd4);
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  lVar3 = 1;
  if (((param_3 == (char *)0x0) || (param_4 == 0)) ||
     (lVar3 = FUN_003ca354(param_3,param_4,"crypto/x509/x509_vpm.c",0x3c), lVar3 == 0)) {
    return lVar3;
  }
  lVar4 = *(long *)(param_1 + 0x38);
  if (lVar4 == 0) {
    lVar4 = FUN_0040bf0c();
    *(long *)(param_1 + 0x38) = lVar4;
    if (lVar4 == 0) {
      FUN_003c86b4(lVar3,"crypto/x509/x509_vpm.c",0x42);
      return 0;
    }
  }
  iVar1 = FUN_0040c89c(lVar4,lVar3);
  if (iVar1 != 0) {
    return 1;
  }
  FUN_003c86b4(lVar3,"crypto/x509/x509_vpm.c",0x47);
  iVar1 = FUN_0040caf8(*(undefined8 *)(param_1 + 0x38));
  if (iVar1 != 0) {
    return 0;
  }
  FUN_0040bd78(*(undefined8 *)(param_1 + 0x38));
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 0;
}


// ===== 004326c8  FUN_004326c8 =====

void FUN_004326c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00432544(param_1,1,param_2,param_3);
  return;
}


// ===== 004326d8  FUN_004326d8 =====

void FUN_004326d8(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x40) = param_2;
  return;
}


// ===== 004326e0  FUN_004326e0 =====

undefined4 FUN_004326e0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}


// ===== 004326e8  FUN_004326e8 =====

undefined8 FUN_004326e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}


// ===== 004326f0  FUN_004326f0 =====

void FUN_004326f0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_2 == 0) {
    lVar2 = 0;
    lVar1 = *(long *)(param_1 + 0x48);
    if (lVar1 == 0) goto LAB_00432730;
  }
  else {
    lVar2 = *(long *)(param_2 + 0x48);
    lVar1 = *(long *)(param_1 + 0x48);
    if (lVar1 == lVar2) goto LAB_00432730;
  }
  FUN_003c86b4(lVar1,"crypto/x509/x509_vpm.c",0x1a7);
  *(long *)(param_1 + 0x48) = lVar2;
LAB_00432730:
  if (param_2 != 0) {
    *(undefined8 *)(param_2 + 0x48) = 0;
  }
  return;
}


// ===== 0043275c  FUN_0043275c =====

undefined8 FUN_0043275c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}


// ===== 00432764  FUN_00432764 =====

undefined8 FUN_00432764(long param_1)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x60) != 0)) {
    uVar1 = FUN_004244fc(*(long *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x68));
    return uVar1;
  }
  FUN_00379868();
  FUN_0037995c("crypto/x509/x509_vpm.c",0x1be,"int_X509_VERIFY_PARAM_get0_ip");
  FUN_00379a5c(0xb,0xc0102,0);
  return 0;
}


// ===== 004327c0  FUN_004327c0 =====

void FUN_004327c0(undefined8 param_1)

{
  int iVar1;
  undefined1 auStack_30 [16];
  
  iVar1 = FUN_00424374(auStack_30);
  if (iVar1 != 0) {
    FUN_00432284(param_1,auStack_30,(long)iVar1);
  }
  return;
}


// ===== 00432800  FUN_00432800 =====

undefined4 FUN_00432800(long param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}


// ===== 00432808  FUN_00432808 =====

undefined4 FUN_00432808(long param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}


// ===== 00432810  FUN_00432810 =====

undefined8 FUN_00432810(undefined8 *param_1)

{
  return *param_1;
}


// ===== 00432818  FUN_00432818 =====

bool FUN_00432818(undefined8 param_1)

{
  int iVar1;
  
  if (DAT_007ac858 == 0) {
    DAT_007ac858 = FUN_0040bfd0(FUN_0043288c);
    if (DAT_007ac858 == 0) {
      return false;
    }
  }
  else {
    iVar1 = FUN_0040c48c(DAT_007ac858,param_1);
    if (-1 < iVar1) {
      FUN_0040c404(DAT_007ac858);
      FUN_00431d48();
    }
  }
  iVar1 = FUN_0040c89c(DAT_007ac858,param_1);
  return 0 < iVar1;
}


// ===== 0043288c  FUN_0043288c =====

int FUN_0043288c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = strcmp(*(char **)*param_1,*(char **)*param_2);
  return iVar1;
}


// ===== 004328a0  FUN_004328a0 =====

int FUN_004328a0(void)

{
  int iVar1;
  
  if (DAT_007ac858 != 0) {
    iVar1 = FUN_0040caf8();
    return iVar1 + 6;
  }
  return 6;
}


// ===== 004328cc  FUN_004328cc =====

undefined ** FUN_004328cc(int param_1)

{
  undefined **ppuVar1;
  
  if (param_1 < 6) {
    return &PTR_s_code_sign_0077f010 + (long)param_1 * 0xe;
  }
  ppuVar1 = (undefined **)FUN_0040cb0c(DAT_007ac858,param_1 + -6);
  return ppuVar1;
}


// ===== 004328fc  FUN_004328fc =====

void FUN_004328fc(undefined8 param_1)

{
  int iVar1;
  undefined8 local_90 [14];
  
  local_90[0] = param_1;
  if (DAT_007ac858 != 0) {
    FUN_0040cc10(DAT_007ac858);
    iVar1 = FUN_0040c48c(DAT_007ac858,local_90);
    if (-1 < iVar1) {
      FUN_0040cb0c(DAT_007ac858,iVar1);
      return;
    }
  }
  FUN_003dd608(local_90,&PTR_s_code_sign_0077f010,6,0x70,FUN_004329b0);
  return;
}


// ===== 00432980  FUN_00432980 =====

void FUN_00432980(void)

{
  FUN_0040ca6c(DAT_007ac858,PTR_FUN_007a1cb8);
  DAT_007ac858 = 0;
  return;
}


// ===== 004329b0  FUN_004329b0 =====

int FUN_004329b0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = strcmp((char *)*param_1,(char *)*param_2);
  return iVar1;
}


// ===== 004329bc  FUN_004329bc =====

void FUN_004329bc(long *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  if (param_1 != (long *)0x0) {
    lVar2 = *param_1;
    if (lVar2 == 0) {
      lVar2 = FUN_0038a388();
      *param_1 = lVar2;
      if (lVar2 == 0) {
        return;
      }
    }
    iVar1 = FUN_0038de18(lVar2,param_2);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 10) = 1;
    }
  }
  return;
}


// ===== 00432a08  FUN_00432a08 =====

void FUN_00432a08(long param_1)

{
  int iVar1;
  
  if ((param_1 != 0) && (iVar1 = FUN_0043b57c(param_1 + 0x18), iVar1 != 0)) {
    *(undefined4 *)(param_1 + 0x50) = 1;
  }
  return;
}


// ===== 00432a3c  FUN_00432a3c =====

undefined8 FUN_00432a3c(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar1 = FUN_00429c14(param_1 + 0x50,param_1 + 0x20,param_2);
    return uVar1;
  }
  return 0;
}


// ===== 00432a60  FUN_00432a60 =====

void FUN_00432a60(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    FUN_00429c14(param_1 + 0x50,param_1 + 0x28,param_2);
    return;
  }
  return;
}


// ===== 00432a7c  FUN_00432a7c =====

undefined8 FUN_00432a7c(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  FUN_0040cc10(*(undefined8 *)(param_1 + 0x30));
  iVar1 = FUN_0040caf8(*(undefined8 *)(param_1 + 0x30));
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      lVar3 = FUN_0040cb0c(*(undefined8 *)(param_1 + 0x30),iVar1);
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      *(int *)(lVar3 + 0x34) = iVar1;
      iVar1 = iVar1 + 1;
      iVar2 = FUN_0040caf8(uVar4);
    } while (iVar1 < iVar2);
  }
  *(undefined4 *)(param_1 + 0x50) = 1;
  return 1;
}


// ===== 00432ae8  FUN_00432ae8 =====

bool FUN_00432ae8(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x80);
  *(int *)(param_1 + 0x80) = iVar1 + 1;
  return 0 < iVar1;
}


// ===== 00432b04  FUN_00432b04 =====

void FUN_00432b04(undefined8 *param_1)

{
  FUN_0038dea4(*param_1);
  return;
}


// ===== 00432b0c  FUN_00432b0c =====

undefined8 FUN_00432b0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


// ===== 00432b14  FUN_00432b14 =====

undefined8 FUN_00432b14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}


// ===== 00432b1c  FUN_00432b1c =====

undefined8 FUN_00432b1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


// ===== 00432b24  FUN_00432b24 =====

undefined8 FUN_00432b24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}


// ===== 00432b2c  FUN_00432b2c =====

undefined8 FUN_00432b2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}


// ===== 00432b34  FUN_00432b34 =====

void FUN_00432b34(long param_1,long *param_2,long *param_3)

{
  if (param_2 != (long *)0x0) {
    *param_2 = param_1 + 0x68;
  }
  if (param_3 != (long *)0x0) {
    *param_3 = param_1 + 0x58;
  }
  return;
}


// ===== 00432b50  FUN_00432b50 =====

void FUN_00432b50(long param_1)

{
  FUN_003dd5b4(*(undefined8 *)(param_1 + 0x58));
  return;
}


// ===== 00432b58  FUN_00432b58 =====

undefined8 FUN_00432b58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


// ===== 00432b60  FUN_00432b60 =====

undefined8 FUN_00432b60(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar1 = FUN_00429c14(0,param_1 + 0x18,param_2);
    return uVar1;
  }
  return 0;
}


// ===== 00432b80  FUN_00432b80 =====

void FUN_00432b80(void)

{
  return;
}


// ===== 00432b84  FUN_00432b84 =====

long FUN_00432b84(long param_1,long param_2)

{
  long lVar1;
  
  if (param_1 != 0) {
    if (param_1 != param_2) {
      lVar1 = FUN_0038eb7c();
      return lVar1;
    }
    param_1 = 1;
  }
  return param_1;
}


// ===== 00432b9c  FUN_00432b9c =====

undefined8 FUN_00432b9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


// ===== 00432ba4  FUN_00432ba4 =====

void FUN_00432ba4(long param_1)

{
  *(undefined4 *)(param_1 + 0x50) = 1;
  FUN_0043a854();
  return;
}


// ===== 00432bb0  FUN_00432bb0 =====

undefined8 FUN_00432bb0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_003dcce8(param_2);
  if (lVar1 != 0) {
    uVar2 = FUN_00432c0c(param_1,lVar1,param_3,param_4);
    return uVar2;
  }
  return 0xffffffff;
}


// ===== 00432c0c  FUN_00432c0c =====

int FUN_00432c0c(undefined8 *param_1,undefined8 param_2,void *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  uint uVar8;
  
  if (param_1 != (undefined8 *)0x0) {
    uVar7 = *param_1;
    uVar2 = FUN_0040caf8(uVar7);
    uVar1 = 0;
    do {
      uVar8 = uVar1;
      if ((uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) == uVar8) {
        return -1;
      }
      puVar4 = (undefined8 *)FUN_0040cb0c(uVar7,uVar8);
      iVar3 = FUN_003de61c(*puVar4,param_2);
      uVar1 = uVar8 + 1;
    } while (iVar3 != 0);
    if ((int)uVar8 < 0 == SCARRY4(uVar8 - 1,1)) {
      iVar3 = FUN_0040caf8(*param_1);
      if (((int)uVar8 < iVar3) && (lVar5 = FUN_0040cb0c(*param_1,uVar8), lVar5 != 0)) {
        piVar6 = *(int **)(lVar5 + 8);
      }
      else {
        piVar6 = (int *)0x0;
      }
      if (param_3 != (void *)0x0) {
        if (param_4 < 1) {
          return 0;
        }
        iVar3 = *piVar6;
        if (param_4 <= *piVar6) {
          iVar3 = param_4 + -1;
        }
        memcpy(param_3,*(void **)(piVar6 + 2),(long)iVar3);
        *(undefined1 *)((long)param_3 + (long)iVar3) = 0;
        return iVar3;
      }
      return *piVar6;
    }
  }
  return -1;
}


// ===== 00432d14  FUN_00432d14 =====

int FUN_00432d14(undefined8 *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    uVar4 = *param_1;
    if (param_3 < 0) {
      param_3 = -1;
    }
    iVar1 = FUN_0040caf8(uVar4);
    while (param_3 = param_3 + 1, param_3 < iVar1) {
      puVar3 = (undefined8 *)FUN_0040cb0c(uVar4,param_3);
      iVar2 = FUN_003de61c(*puVar3,param_2);
      if (iVar2 == 0) {
        return param_3;
      }
    }
  }
  return -1;
}


// ===== 00432d98  FUN_00432d98 =====

long FUN_00432d98(long param_1)

{
  if (param_1 != 0) {
    param_1 = *(long *)(param_1 + 8);
  }
  return param_1;
}


// ===== 00432da4  FUN_00432da4 =====

undefined8 FUN_00432da4(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    iVar1 = FUN_0040caf8(*param_1);
    if ((-1 < param_2) && (param_2 < iVar1)) {
      uVar2 = FUN_0040cb0c(*param_1,param_2);
      return uVar2;
    }
  }
  return 0;
}


// ===== 00432df4  FUN_00432df4 =====

undefined8 * FUN_00432df4(undefined8 *param_1)

{
  uint uVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = FUN_0040caf8(*param_1);
    param_1 = (undefined8 *)(ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
  }
  return param_1;
}


// ===== 00432e14  FUN_00432e14 =====

int FUN_00432e14(undefined8 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_003dcce8(param_2);
  if (lVar3 == 0) {
    return -2;
  }
  if (param_1 != (undefined8 *)0x0) {
    uVar5 = *param_1;
    if (param_3 < 0) {
      param_3 = -1;
    }
    iVar1 = FUN_0040caf8(uVar5);
    while (param_3 = param_3 + 1, param_3 < iVar1) {
      puVar4 = (undefined8 *)FUN_0040cb0c(uVar5,param_3);
      iVar2 = FUN_003de61c(*puVar4,lVar3);
      if (iVar2 == 0) {
        return param_3;
      }
    }
  }
  return -1;
}


// ===== 00432ec4  FUN_00432ec4 =====

undefined8 * FUN_00432ec4(undefined8 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar3 = param_1;
  if (param_1 != (undefined8 *)0x0) {
    iVar2 = FUN_0040caf8(*param_1);
    puVar3 = (undefined8 *)0x0;
    if ((-1 < param_2) && (param_2 < iVar2)) {
      uVar5 = *param_1;
      puVar3 = (undefined8 *)FUN_0040c404(uVar5,param_2);
      iVar2 = FUN_0040caf8(uVar5);
      *(undefined4 *)(param_1 + 1) = 1;
      if (iVar2 != param_2) {
        if (param_2 == 0) {
          iVar1 = *(int *)(puVar3 + 2);
          lVar4 = FUN_0040cb0c(uVar5,0);
          if (*(int *)(lVar4 + 0x10) <= iVar1) {
            return puVar3;
          }
        }
        else {
          lVar4 = FUN_0040cb0c(uVar5,param_2 + -1);
          iVar1 = *(int *)(lVar4 + 0x10);
          lVar4 = FUN_0040cb0c(uVar5,param_2);
          if (*(int *)(lVar4 + 0x10) <= iVar1 + 1) {
            return puVar3;
          }
        }
        if (param_2 < iVar2) {
          do {
            lVar4 = FUN_0040cb0c(uVar5,param_2);
            param_2 = param_2 + 1;
            *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
          } while (iVar2 != param_2);
        }
      }
    }
  }
  return puVar3;
}


// ===== 00432fc4  FUN_00432fc4 =====

undefined4 FUN_00432fc4(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 in_w5;
  undefined4 in_w6;
  
  lVar2 = FUN_00433034(0);
  if (lVar2 != 0) {
    uVar1 = FUN_0043314c(param_1,lVar2,in_w5,in_w6);
    FUN_0043b514(lVar2);
    return uVar1;
  }
  return 0;
}


// ===== 00433034  FUN_00433034 =====

long * FUN_00433034(long *param_1,long param_2,undefined4 param_3,undefined8 param_4,
                   undefined4 param_5)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if (((param_1 == (long *)0x0) || (plVar3 = (long *)*param_1, plVar3 == (long *)0x0)) &&
     (plVar3 = (long *)FUN_0043b508(), plVar3 == (long *)0x0)) {
    return (long *)0x0;
  }
  if (param_2 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/x509name.c",0x135,"X509_NAME_ENTRY_set_object");
    FUN_00379a5c(0xb,0xc0102,0);
  }
  else {
    FUN_0039a0f4(*plVar3);
    lVar2 = FUN_003de510(param_2);
    *plVar3 = lVar2;
    if ((lVar2 != 0) && (iVar1 = FUN_004336ac(plVar3,param_3,param_4,param_5), iVar1 != 0)) {
      if (param_1 == (long *)0x0) {
        return plVar3;
      }
      if (*param_1 != 0) {
        return plVar3;
      }
      *param_1 = (long)plVar3;
      return plVar3;
    }
  }
  if ((param_1 == (long *)0x0) || (plVar3 != (long *)*param_1)) {
    FUN_0043b514(plVar3);
  }
  return (long *)0x0;
}


// ===== 0043314c  FUN_0043314c =====

undefined8 * FUN_0043314c(undefined8 *param_1,undefined8 param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  
  if (param_1 != (undefined8 *)0x0) {
    uVar5 = *param_1;
    iVar2 = FUN_0040caf8(uVar5);
    iVar3 = iVar2;
    if (param_3 <= iVar2) {
      iVar3 = param_3;
    }
    *(undefined4 *)(param_1 + 1) = 1;
    iVar6 = iVar2;
    if (-1 < param_3) {
      iVar6 = iVar3;
    }
    bVar1 = param_4 == 0;
    if (param_4 == -1) {
      if (iVar6 == 0) {
        iVar3 = 0;
        bVar1 = true;
        lVar4 = FUN_0043b520(param_2);
      }
      else {
        lVar4 = FUN_0040cb0c(uVar5,iVar6 + -1);
        iVar3 = *(int *)(lVar4 + 0x10);
        bVar1 = false;
        lVar4 = FUN_0043b520(param_2);
      }
    }
    else if (iVar6 < iVar2) {
      lVar4 = FUN_0040cb0c(uVar5,iVar6);
      iVar3 = *(int *)(lVar4 + 0x10);
      lVar4 = FUN_0043b520(param_2);
    }
    else if (iVar6 == 0) {
      iVar3 = 0;
      lVar4 = FUN_0043b520(param_2);
    }
    else {
      lVar4 = FUN_0040cb0c(uVar5,iVar6 + -1);
      iVar3 = *(int *)(lVar4 + 0x10) + 1;
      lVar4 = FUN_0043b520(param_2);
    }
    if (lVar4 != 0) {
      *(int *)(lVar4 + 0x10) = iVar3;
      iVar3 = FUN_0040c244(uVar5,lVar4,iVar6);
      if (iVar3 != 0) {
        if (bVar1) {
          iVar3 = FUN_0040caf8(uVar5);
          iVar6 = iVar6 + 1;
          if (iVar6 < iVar3) {
            do {
              lVar4 = FUN_0040cb0c(uVar5,iVar6);
              iVar6 = iVar6 + 1;
              *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + 1;
            } while (iVar3 != iVar6);
          }
        }
        return (undefined8 *)0x1;
      }
      FUN_00379868();
      FUN_0037995c("crypto/x509/x509name.c",0xe4,"X509_NAME_add_entry");
      FUN_00379a5c(0xb,0x8000f,0);
    }
    FUN_0043b514(lVar4);
    param_1 = (undefined8 *)0x0;
  }
  return param_1;
}


// ===== 0043330c  FUN_0043330c =====

undefined4 FUN_0043330c(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 in_w5;
  undefined4 in_w6;
  
  lVar2 = FUN_0043337c(0);
  if (lVar2 != 0) {
    uVar1 = FUN_0043314c(param_1,lVar2,in_w5,in_w6);
    FUN_0043b514(lVar2);
    return uVar1;
  }
  return 0;
}


// ===== 0043337c  FUN_0043337c =====

long * FUN_0043337c(long *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                   undefined4 param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar2 = FUN_003dcce8(param_2);
  if (lVar2 != 0) {
    if (((param_1 != (long *)0x0) && (plVar4 = (long *)*param_1, plVar4 != (long *)0x0)) ||
       (plVar4 = (long *)FUN_0043b508(), plVar4 != (long *)0x0)) {
      FUN_0039a0f4(*plVar4);
      lVar3 = FUN_003de510(lVar2);
      *plVar4 = lVar3;
      if ((lVar3 == 0) || (iVar1 = FUN_004336ac(plVar4,param_3,param_4,param_5), iVar1 == 0)) {
        if ((param_1 == (long *)0x0) || (plVar4 != (long *)*param_1)) {
          FUN_0043b514(plVar4);
        }
        plVar4 = (long *)0x0;
      }
      else if ((param_1 != (long *)0x0) && (*param_1 == 0)) {
        *param_1 = (long)plVar4;
      }
    }
    FUN_0039a0f4(lVar2);
    return plVar4;
  }
  FUN_00379868();
  FUN_0037995c("crypto/x509/x509name.c",0x10f,"X509_NAME_ENTRY_create_by_NID");
  FUN_00379a5c(0xb,0x6d,0);
  return (long *)0x0;
}


// ===== 00433490  FUN_00433490 =====

undefined4 FUN_00433490(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 in_w5;
  undefined4 in_w6;
  
  lVar2 = FUN_00433500(0);
  if (lVar2 != 0) {
    uVar1 = FUN_0043314c(param_1,lVar2,in_w5,in_w6);
    FUN_0043b514(lVar2);
    return uVar1;
  }
  return 0;
}


// ===== 00433500  FUN_00433500 =====

long * FUN_00433500(long *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                   undefined4 param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar2 = FUN_003dce7c(param_2,0);
  if (lVar2 != 0) {
    if (((param_1 != (long *)0x0) && (plVar4 = (long *)*param_1, plVar4 != (long *)0x0)) ||
       (plVar4 = (long *)FUN_0043b508(), plVar4 != (long *)0x0)) {
      FUN_0039a0f4(*plVar4);
      lVar3 = FUN_003de510(lVar2);
      *plVar4 = lVar3;
      if ((lVar3 == 0) || (iVar1 = FUN_004336ac(plVar4,param_3,param_4,param_5), iVar1 == 0)) {
        if ((param_1 == (long *)0x0) || (plVar4 != (long *)*param_1)) {
          FUN_0043b514(plVar4);
        }
        plVar4 = (long *)0x0;
      }
      else if ((param_1 != (long *)0x0) && (*param_1 == 0)) {
        *param_1 = (long)plVar4;
      }
    }
    FUN_0039a0f4(lVar2);
    return plVar4;
  }
  FUN_00379868();
  FUN_0037995c("crypto/x509/x509name.c",0xfc,"X509_NAME_ENTRY_create_by_txt");
  FUN_00379a5c(0xb,0x77,"name=%s",param_2);
  return (long *)0x0;
}


// ===== 00433624  FUN_00433624 =====

bool FUN_00433624(long *param_1,long param_2)

{
  long lVar1;
  
  if ((param_1 != (long *)0x0) && (param_2 != 0)) {
    FUN_0039a0f4(*param_1);
    lVar1 = FUN_003de510(param_2);
    *param_1 = lVar1;
    return lVar1 != 0;
  }
  FUN_00379868();
  FUN_0037995c("crypto/x509/x509name.c",0x135,"X509_NAME_ENTRY_set_object");
  FUN_00379a5c(0xb,0xc0102,0);
  return false;
}


// ===== 004336ac  FUN_004336ac =====

undefined8 * FUN_004336ac(undefined8 *param_1,uint param_2,char *param_3,ulong param_4)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  size_t sVar4;
  
  puVar2 = param_1;
  if (param_1 != (undefined8 *)0x0) {
    sVar4 = param_4 & 0xffffffff;
    if ((param_3 == (char *)0x0) && ((int)param_4 != 0)) {
      puVar2 = (undefined8 *)0x0;
    }
    else if (((int)param_2 < 1) || ((param_2 >> 0xc & 1) == 0)) {
      if ((int)param_4 < 0) {
        sVar4 = strlen(param_3);
      }
      puVar2 = (undefined8 *)FUN_0038ebe0(param_1[1],param_3,sVar4 & 0xffffffff);
      if ((int)puVar2 != 0) {
        if (param_2 != 0xffffffff) {
          if (param_2 == 0xfffffffe) {
            uVar1 = FUN_0041b484(param_3,sVar4 & 0xffffffff);
            *(undefined4 *)(param_1[1] + 4) = uVar1;
          }
          else {
            *(uint *)(param_1[1] + 4) = param_2;
          }
        }
        puVar2 = (undefined8 *)0x1;
      }
    }
    else {
      uVar1 = FUN_003dd5b4(*param_1);
      lVar3 = FUN_003c289c(param_1 + 1,param_3,sVar4,param_2,uVar1);
      puVar2 = (undefined8 *)(ulong)(lVar3 != 0);
    }
  }
  return puVar2;
}


// ===== 0043379c  FUN_0043379c =====

long * FUN_0043379c(long *param_1)

{
  if (param_1 != (long *)0x0) {
    param_1 = (long *)*param_1;
  }
  return param_1;
}


// ===== 004337a8  FUN_004337a8 =====

undefined4 FUN_004337a8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}


// ===== 004337b0  FUN_004337b0 =====

void FUN_004337b0(long param_1)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x10) = 1;
    FUN_0038de18(*(undefined8 *)(param_1 + 0x18));
    return;
  }
  return;
}


// ===== 004337cc  FUN_004337cc =====

void FUN_004337cc(long param_1)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x10) = 1;
    FUN_0043b57c(param_1 + 0x20);
    return;
  }
  return;
}


// ===== 004337e8  FUN_004337e8 =====

void FUN_004337e8(long param_1)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x10) = 1;
    FUN_0043c740(param_1 + 0x28);
    return;
  }
  return;
}


// ===== 00433804  FUN_00433804 =====

undefined8 FUN_00433804(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_003a3cc8(param_1 + 0x88,param_1 + 0x20);
  if (iVar1 != 0) {
    return 0;
  }
  uVar2 = FUN_0043da14();
  uVar2 = FUN_00434a5c(uVar2,param_1 + 0x88,param_1 + 0x98,param_1,*(undefined8 *)(param_1 + 0x158),
                       param_2,*(undefined8 *)(param_1 + 0x160),*(undefined8 *)(param_1 + 0x168));
  return uVar2;
}


// ===== 00433860  FUN_00433860 =====

void FUN_00433860(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0043d63c();
  FUN_00434a5c(uVar1,param_1 + 0x38,*(undefined8 *)(param_1 + 0x48),param_1,
               *(undefined8 *)(param_1 + 0x60),param_2,param_3,param_4);
  return;
}


// ===== 004338b0  FUN_004338b0 =====

void FUN_004338b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0043d63c();
  FUN_00434a5c(uVar1,param_1 + 0x38,*(undefined8 *)(param_1 + 0x48),param_1,
               *(undefined8 *)(param_1 + 0x60),param_2,0,0);
  return;
}


// ===== 004338f0  FUN_004338f0 =====

void FUN_004338f0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00434f50();
  FUN_004349bc(uVar1,param_1 + 1,param_1[3],*param_1,param_2);
  return;
}


// ===== 00433924  FUN_00433924 =====

undefined8 FUN_00433924(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/x_all.c",0x3f,"X509_sign");
    FUN_00379a5c(0xb,0xc0102,0);
  }
  else {
    FUN_00429dec();
    iVar1 = FUN_0040caf8();
    if ((iVar1 < 1) || (iVar1 = FUN_00429b08(param_1,2), iVar1 != 0)) {
      *(undefined4 *)(param_1 + 0x80) = 1;
      uVar2 = FUN_0043da14();
      uVar2 = FUN_00434ff4(uVar2,param_1 + 0x20,param_1 + 0x88,param_1 + 0x98,param_1,0,param_2,
                           param_3,*(undefined8 *)(param_1 + 0x160),*(undefined8 *)(param_1 + 0x168)
                          );
      return uVar2;
    }
  }
  return 0;
}


// ===== 004339f8  FUN_004339f8 =====

undefined8 FUN_004339f8(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/x_all.c",0x56,"X509_sign_ctx");
    FUN_00379a5c(0xb,0xc0102,0);
  }
  else {
    FUN_00429dec();
    iVar1 = FUN_0040caf8();
    if ((iVar1 < 1) || (iVar1 = FUN_00429b08(param_1,2), iVar1 != 0)) {
      *(undefined4 *)(param_1 + 0x80) = 1;
      uVar2 = FUN_0043da14();
      uVar2 = FUN_004350e8(uVar2,param_1 + 0x20,param_1 + 0x88,param_1 + 0x98,param_1,param_2);
      return uVar2;
    }
  }
  return 0;
}


// ===== 00433a9c  FUN_00433a9c =====

undefined8 FUN_00433a9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0043da50();
  uVar2 = FUN_004373d0(param_1,0,0,param_2,param_3,0,0,0x400,0,0,1,0x19000,param_4);
  uVar1 = FUN_003e0870(uVar1,uVar2,0);
  FUN_0037db50(uVar2);
  return uVar1;
}


// ===== 00433b48  FUN_00433b48 =====

undefined8 FUN_00433b48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x10) = 1;
    uVar1 = FUN_0043d63c();
    uVar1 = FUN_00434ff4(uVar1,param_1 + 0x38,0,*(undefined8 *)(param_1 + 0x48),param_1,0,param_2,
                         param_3,*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70));
    return uVar1;
  }
  FUN_00379868();
  FUN_0037995c("crypto/x509/x_all.c",0x7d,"X509_REQ_sign");
  FUN_00379a5c(0xb,0xc0102,0);
  return 0;
}


// ===== 00433bfc  FUN_00433bfc =====

undefined8 FUN_00433bfc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x10) = 1;
    uVar1 = FUN_0043d63c();
    uVar1 = FUN_004350e8(uVar1,param_1 + 0x38,0,*(undefined8 *)(param_1 + 0x48),param_1,param_2);
    return uVar1;
  }
  FUN_00379868();
  FUN_0037995c("crypto/x509/x_all.c",0x89,"X509_REQ_sign_ctx");
  FUN_00379a5c(0xb,0xc0102,0);
  return 0;
}


// ===== 00433c80  FUN_00433c80 =====

undefined8 FUN_00433c80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x50) = 1;
    uVar1 = FUN_0043a7f0();
    uVar1 = FUN_00434ff4(uVar1,param_1 + 8,param_1 + 0x58,param_1 + 0x68,param_1,0,param_2,param_3,
                         *(undefined8 *)(param_1 + 0xe8),*(undefined8 *)(param_1 + 0xf0));
    return uVar1;
  }
  FUN_00379868();
  FUN_0037995c("crypto/x509/x_all.c",0x95,"X509_CRL_sign");
  FUN_00379a5c(0xb,0xc0102,0);
  return 0;
}


// ===== 00433d34  FUN_00433d34 =====

undefined8 FUN_00433d34(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x50) = 1;
    uVar1 = FUN_0043a7f0();
    uVar1 = FUN_004350e8(uVar1,param_1 + 8,param_1 + 0x58,param_1 + 0x68,param_1,param_2);
    return uVar1;
  }
  FUN_00379868();
  FUN_0037995c("crypto/x509/x_all.c",0xa1,"X509_CRL_sign_ctx");
  FUN_00379a5c(0xb,0xc0102,0);
  return 0;
}


// ===== 00433db8  FUN_00433db8 =====

undefined8 FUN_00433db8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0043a7fc();
  uVar2 = FUN_004373d0(param_1,0,0,param_2,param_3,0,0,0x400,0,0,1,0x19000,param_4);
  uVar1 = FUN_003e0870(uVar1,uVar2,0);
  FUN_0037db50(uVar2);
  return uVar1;
}


// ===== 00433e64  FUN_00433e64 =====

void FUN_00433e64(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00434f50();
  FUN_00434ff4(uVar1,param_1 + 1,0,param_1[3],*param_1,0,param_2,param_3,0,0);
  return;
}


// ===== 00433ec0  FUN_00433ec0 =====

void FUN_00433ec0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0043da50();
  FUN_003e0870(uVar1,param_1,param_2);
  return;
}


// ===== 00433eec  FUN_00433eec =====

void FUN_00433eec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0043da50();
  FUN_003e0150(uVar1,param_1,param_2);
  return;
}


// ===== 00433f18  FUN_00433f18 =====

void FUN_00433f18(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0043a7fc();
  FUN_003e0870(uVar1,param_1,param_2);
  return;
}


// ===== 00433f44  FUN_00433f44 =====

void FUN_00433f44(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0043a7fc();
  FUN_003e0150(uVar1,param_1,param_2);
  return;
}


// ===== 00433f70  FUN_00433f70 =====

long FUN_00433f70(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((param_2 == (long *)0x0) || (lVar2 = *param_2, lVar2 == 0)) {
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar2 + 0x28);
    uVar4 = *(undefined8 *)(lVar2 + 0x30);
  }
  uVar1 = FUN_003e0954();
  lVar2 = FUN_003e07cc(uVar1,param_1,param_2,uVar3,uVar4);
  if (lVar2 != 0) {
    FUN_003e7e2c();
  }
  return lVar2;
}


// ===== 00433fdc  FUN_00433fdc =====

void FUN_00433fdc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_003e0954();
  FUN_003e0150(uVar1,param_1,param_2);
  return;
}


// ===== 00434008  FUN_00434008 =====

void FUN_00434008(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((param_2 == (long *)0x0) || (lVar2 = *param_2, lVar2 == 0)) {
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar2 + 0x68);
    uVar4 = *(undefined8 *)(lVar2 + 0x70);
  }
  uVar1 = FUN_0043d678();
  FUN_003e07cc(uVar1,param_1,param_2,uVar3,uVar4);
  return;
}


// ===== 00434060  FUN_00434060 =====

void FUN_00434060(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0043d678();
  FUN_003e0150(uVar1,param_1,param_2);
  return;
}


// ===== 0043408c  FUN_0043408c =====

void FUN_0043408c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_003f2a98();
  FUN_003e0870(uVar1,param_1,param_2);
  return;
}


// ===== 004340b8  FUN_004340b8 =====

void FUN_004340b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_003f2a98();
  FUN_003e0150(uVar1,param_1,param_2);
  return;
}


// ===== 004340e4  FUN_004340e4 =====

void FUN_004340e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_003f2aa4();
  FUN_003e0870(uVar1,param_1,param_2);
  return;
}


// ===== 00434110  FUN_00434110 =====

void FUN_00434110(undefined8 param_1,undefined8 param_2)

{
  FUN_003e0480(PTR_FUN_007a1be8,PTR_FUN_007a1ce8,param_1,param_2);
  return;
}


// ===== 00434130  FUN_00434130 =====

void FUN_00434130(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_003f2aa4();
  FUN_003e0150(uVar1,param_1,param_2);
  return;
}


// ===== 0043415c  FUN_0043415c =====

void FUN_0043415c(undefined8 param_1,undefined8 param_2)

{
  FUN_003e0054(PTR_FUN_007a1cf0,param_1,param_2);
  return;
}


// ===== 00434174  FUN_00434174 =====

void FUN_00434174(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_0043d140();
  if (piVar1 != (int *)0x0) {
    FUN_0039e518(*(undefined8 *)(piVar1 + 2),(long)*piVar1,param_3,param_4,param_2,0);
    return;
  }
  return;
}


// ===== 004341d4  FUN_004341d4 =====

undefined8 FUN_004341d4(long param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_003898e4(param_2,&DAT_001eef82);
  if ((iVar1 != 0) && ((*(uint *)(param_1 + 0xe8) & 0x100100) == 0x100)) {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0x14;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x130);
    uVar2 = *(undefined8 *)(param_1 + 0x128);
    *(undefined4 *)(param_3 + 2) = *(undefined4 *)(param_1 + 0x138);
    param_3[1] = uVar3;
    *param_3 = uVar2;
    return 1;
  }
  uVar2 = FUN_0043da50();
  uVar2 = FUN_00439628(uVar2,param_2,param_1,param_3,param_4,*(undefined8 *)(param_1 + 0x160),
                       *(undefined8 *)(param_1 + 0x168));
  return uVar2;
}


// ===== 00434278  FUN_00434278 =====

long FUN_00434278(long param_1,long *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined1 auStack_88 [4];
  undefined1 auStack_84 [4];
  ulong local_80;
  int local_78;
  int local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  
  if (param_2 != (long *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if (param_1 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/x_all.c",0x1f2,"X509_digest_sig");
    uVar2 = 0xc0102;
    goto LAB_0043456c;
  }
  uVar2 = FUN_0043df18(param_1);
  iVar1 = FUN_003de640(uVar2,&local_74,&local_78);
  if (iVar1 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/x_all.c",0x1f7,"X509_digest_sig");
    uVar2 = 0x90;
    goto LAB_0043456c;
  }
  if (local_74 == 0) {
    if (local_78 < 0x43f) {
      if (local_78 == 0) {
        FUN_00379868();
        uVar2 = 0x224;
      }
      else {
        if (local_78 != 0x390) goto LAB_0043440c;
        lVar3 = FUN_003f3ff4(param_1 + 0x88);
        local_80 = 0;
        if (((lVar3 != 0) &&
            (iVar1 = FUN_003f4058(lVar3,&local_80,&local_70,auStack_84,auStack_88), iVar1 != 0)) &&
           (local_80 != 0)) {
          FUN_003f2ae0(lVar3);
          uVar6 = *(undefined8 *)(param_1 + 0x160);
          uVar2 = FUN_0038996c(local_80);
          lVar3 = FUN_0039e6f4(uVar6,uVar2,*(undefined8 *)(param_1 + 0x168));
          if (lVar3 == 0) {
            return 0;
          }
          goto LAB_00434458;
        }
        FUN_003f2ae0(lVar3);
        FUN_00379868();
        uVar2 = 0x207;
      }
LAB_00434560:
      FUN_0037995c("crypto/x509/x_all.c",uVar2,"X509_digest_sig");
      uVar2 = 0x6f;
LAB_0043456c:
      FUN_00379a5c(0xb,uVar2,0);
      return 0;
    }
    if (local_78 == 0x43f) {
      pcVar5 = "SHA512";
    }
    else if (local_78 == 0x440) {
      pcVar5 = "SHAKE256";
    }
    else {
LAB_0043440c:
      pcVar5 = "SHA256";
    }
    lVar3 = FUN_0039e6f4(*(undefined8 *)(param_1 + 0x160),pcVar5,*(undefined8 *)(param_1 + 0x168));
    if (lVar3 == 0) {
      return 0;
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 1;
    }
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x160);
    uVar2 = FUN_003dce44();
    lVar3 = FUN_0039e6f4(uVar6,uVar2,*(undefined8 *)(param_1 + 0x168));
    if (lVar3 == 0) {
      FUN_003dce44(local_74);
      lVar3 = FUN_003a213c();
      if (lVar3 == 0) {
        FUN_00379868();
        uVar2 = 0x22a;
        goto LAB_00434560;
      }
    }
  }
LAB_00434458:
  iVar1 = FUN_003898e4(lVar3,&DAT_001eef82);
  if ((iVar1 == 0) || ((*(uint *)(param_1 + 0xe8) & 0x100100) != 0x100)) {
    uVar2 = FUN_0043da50();
    iVar1 = FUN_00439628(uVar2,lVar3,param_1,&local_70,&local_80,*(undefined8 *)(param_1 + 0x160),
                         *(undefined8 *)(param_1 + 0x168));
    if (iVar1 == 0) goto LAB_00434504;
  }
  else {
    local_60 = *(undefined4 *)(param_1 + 0x138);
    uStack_68 = *(undefined8 *)(param_1 + 0x130);
    local_70 = *(undefined8 *)(param_1 + 0x128);
    local_80 = CONCAT44(local_80._4_4_,0x14);
  }
  lVar4 = FUN_0038a358();
  if (lVar4 != 0) {
    iVar1 = thunk_FUN_0038ebe0(lVar4,&local_70,local_80 & 0xffffffff);
    if (iVar1 != 0) {
      if (param_2 != (long *)0x0) {
        *param_2 = lVar3;
        return lVar4;
      }
      FUN_0039d050(lVar3);
      return lVar4;
    }
    thunk_FUN_0038eddc(lVar4);
  }
LAB_00434504:
  FUN_0039d050(lVar3);
  return 0;
}


// ===== 0043458c  FUN_0043458c =====

undefined8 FUN_0043458c(long param_1,long param_2,undefined8 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/x_all.c",0x241,"X509_CRL_digest");
    FUN_00379a5c(0xb,0xc0102,0);
    return 0;
  }
  iVar1 = FUN_003898e4(param_2,&DAT_001eef82);
  if ((iVar1 != 0) && ((*(uint *)(param_1 + 0x84) & 0x100100) == 0x100)) {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0x14;
    }
    uVar3 = *(undefined8 *)(param_1 + 0xc0);
    uVar2 = *(undefined8 *)(param_1 + 0xb8);
    *(undefined4 *)(param_3 + 2) = *(undefined4 *)(param_1 + 200);
    param_3[1] = uVar3;
    *param_3 = uVar2;
    return 1;
  }
  uVar2 = FUN_0043a7fc();
  uVar2 = FUN_00439628(uVar2,param_2,param_1,param_3,param_4,*(undefined8 *)(param_1 + 0xe8),
                       *(undefined8 *)(param_1 + 0xf0));
  return uVar2;
}


// ===== 00434678  FUN_00434678 =====

void FUN_00434678(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0043d678();
  FUN_00439628(uVar1,param_2,param_1,param_3,param_4,*(undefined8 *)(param_1 + 0x68),
               *(undefined8 *)(param_1 + 0x70));
  return;
}


// ===== 004346c0  FUN_004346c0 =====

void FUN_004346c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0043b530();
  FUN_00439724(uVar1,param_2,param_1,param_3,param_4);
  return;
}


// ===== 00434704  FUN_00434704 =====

void FUN_00434704(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_003e0b44();
  FUN_00439724(uVar1,param_2,param_1,param_3,param_4);
  return;
}


// ===== 00434748  FUN_00434748 =====

void FUN_00434748(undefined8 param_1,undefined8 param_2)

{
  FUN_003e0480(PTR_FUN_007a1a18,PTR_FUN_007a1a08,param_1,param_2);
  return;
}


// ===== 00434768  FUN_00434768 =====

void FUN_00434768(undefined8 param_1,undefined8 param_2)

{
  FUN_003e0054(PTR_FUN_007a1a10,param_1,param_2);
  return;
}


// ===== 00434780  FUN_00434780 =====

void FUN_00434780(undefined8 param_1,undefined8 param_2)

{
  FUN_003e0480(PTR_FUN_007a1cf8,PTR_FUN_007a1d00,param_1,param_2);
  return;
}


// ===== 004347a0  FUN_004347a0 =====

void FUN_004347a0(undefined8 param_1,undefined8 param_2)

{
  FUN_003e0054(PTR_FUN_007a1ce0,param_1,param_2);
  return;
}


// ===== 004347b8  FUN_004347b8 =====

void FUN_004347b8(undefined8 param_1,undefined8 param_2)

{
  FUN_003e0480(PTR_FUN_007a19f0,PTR_FUN_007a19e0,param_1,param_2);
  return;
}


// ===== 004347d8  FUN_004347d8 =====

void FUN_004347d8(undefined8 param_1,undefined8 param_2)

{
  FUN_003e0054(PTR_FUN_007a19e8,param_1,param_2);
  return;
}


// ===== 004347f0  FUN_004347f0 =====

undefined4 FUN_004347f0(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_00439a84(param_2);
  if (lVar2 != 0) {
    uVar1 = FUN_003e0054(PTR_FUN_007a19e8,param_1,lVar2);
    FUN_003dfeb8(lVar2);
    return uVar1;
  }
  return 0;
}


// ===== 0043484c  FUN_0043484c =====

void FUN_0043484c(undefined8 param_1,undefined8 param_2)

{
  FUN_003e0054(PTR_FUN_007a19c8,param_1,param_2);
  return;
}


// ===== 00434864  FUN_00434864 =====

void FUN_00434864(undefined8 param_1,undefined8 param_2)

{
  FUN_003e0480(PTR_FUN_007a1b38,PTR_FUN_007a19b8,param_1,param_2);
  return;
}


// ===== 00434884  FUN_00434884 =====

undefined8 FUN_00434884(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_38;
  long local_18;
  
  local_18 = 0;
  iVar1 = FUN_003e04f8(param_1,&local_18);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    local_38 = *(undefined8 *)(local_18 + 8);
    uVar2 = FUN_0043a520(param_2,&local_38,iVar1,param_3,param_4);
  }
  FUN_00387e64(local_18);
  return uVar2;
}


// ===== 00434904  FUN_00434904 =====

void FUN_00434904(undefined8 param_1,undefined8 param_2)

{
  FUN_003e0054(PTR_FUN_007a1cd8,param_1,param_2);
  return;
}


// ===== 0043491c  FUN_0043491c =====

undefined8 FUN_0043491c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_38;
  long local_18;
  
  local_18 = 0;
  iVar1 = FUN_003e04f8(param_1,&local_18);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    local_38 = *(undefined8 *)(local_18 + 8);
    uVar2 = FUN_0043ccbc(param_2,&local_38,iVar1,param_3,param_4);
  }
  FUN_00387e64(local_18);
  return uVar2;
}


// ===== 0043499c  FUN_0043499c =====

void FUN_0043499c(undefined8 param_1,undefined8 param_2)

{
  FUN_003e0480(PTR_FUN_007a1b38,PTR_FUN_007a1d08,param_1,param_2);
  return;
}


// ===== 004349bc  FUN_004349bc =====

undefined4
FUN_004349bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_0039d0cc(param_5,0,0,0);
  if (lVar2 != 0) {
    uVar1 = FUN_00434afc(param_1,param_2,param_3,param_4,lVar2);
    FUN_00389dc8(lVar2);
    FUN_003b1f78();
    FUN_0039d284(lVar2);
    return uVar1;
  }
  return 0xffffffff;
}


// ===== 00434a5c  FUN_00434a5c =====

undefined4
FUN_00434a5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_0039d0cc(param_6,param_5,param_7,param_8);
  if (lVar2 != 0) {
    uVar1 = FUN_00434afc(param_1,param_2,param_3,param_4,lVar2);
    FUN_00389dc8(lVar2);
    FUN_003b1f78();
    FUN_0039d284(lVar2);
    return uVar1;
  }
  return 0xffffffff;
}


// ===== 00434afc  FUN_00434afc =====

int FUN_00434afc(undefined8 param_1,undefined8 *param_2,int *param_3,undefined8 param_4,
                undefined8 param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  int local_50;
  int local_4c;
  long local_48;
  
  local_48 = 0;
  FUN_00389dc8(param_5);
  piVar3 = (int *)FUN_003b4314();
  if (piVar3 == (int *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/asn1/a_verify.c",0x7b,"ASN1_item_verify_ctx");
    uVar5 = 0xc0102;
LAB_00434c34:
    FUN_00379a5c(0xd,uVar5,0);
    return -1;
  }
  if ((param_3[1] == 3) && ((*(byte *)(param_3 + 4) & 7) != 0)) {
    FUN_00379868();
    FUN_0037995c("crypto/asn1/a_verify.c",0x80,"ASN1_item_verify_ctx");
    uVar5 = 0xdc;
    goto LAB_00434c34;
  }
  uVar5 = FUN_003dd5b4(*param_2);
  iVar1 = FUN_003de640(uVar5,&local_4c,&local_50);
  if (iVar1 == 0) {
    FUN_00379868();
    uVar5 = 0x86;
LAB_00434c5c:
    FUN_0037995c("crypto/asn1/a_verify.c",uVar5,"ASN1_item_verify_ctx");
    uVar5 = 199;
LAB_00434d1c:
    FUN_00379a5c(0xd,uVar5,0);
LAB_00434d24:
    iVar2 = 0;
    iVar1 = -1;
    goto LAB_00434d2c;
  }
  if (local_4c == 0) {
    if ((*piVar3 == 0) || (*(long *)(piVar3 + 0x18) != 0)) {
      if (local_50 != 0x390) goto LAB_00434ba4;
      iVar1 = FUN_003a8020(piVar3,&DAT_001f9542);
      if ((iVar1 == 0) && (iVar1 = FUN_003a8020(piVar3,"RSA-PSS"), iVar1 == 0)) {
        FUN_00379868();
        uVar5 = 0xa5;
        goto LAB_00434d10;
      }
      iVar1 = FUN_003ef5d4(param_5,0,param_2,piVar3);
      if (iVar1 < 1) {
        FUN_00379868();
        FUN_0037995c("crypto/asn1/a_verify.c",0xaa,"ASN1_item_verify_ctx");
        uVar5 = 0xc0103;
        goto LAB_00434d1c;
      }
      goto LAB_00434d78;
    }
    if ((*(long *)(piVar3 + 2) == 0) ||
       (pcVar6 = *(code **)(*(long *)(piVar3 + 2) + 200), pcVar6 == (code *)0x0)) {
      FUN_00379868();
      uVar5 = 0x8c;
      goto LAB_00434c5c;
    }
    iVar1 = (*pcVar6)(param_5,param_1,param_4,param_2,param_3,piVar3);
    if (0 < iVar1) {
      if (iVar1 == 1) {
        iVar2 = 0;
        goto LAB_00434d2c;
      }
      goto LAB_00434d7c;
    }
    FUN_00379868();
    FUN_0037995c("crypto/asn1/a_verify.c",0x97,"ASN1_item_verify_ctx");
    uVar5 = 0x80006;
  }
  else {
LAB_00434ba4:
    uVar5 = FUN_003dce44(local_50);
    iVar1 = FUN_003a8020(piVar3,uVar5);
    if (iVar1 == 0) {
      FUN_00379868();
      uVar5 = 0xb0;
LAB_00434d10:
      FUN_0037995c("crypto/asn1/a_verify.c",uVar5,"ASN1_item_verify_ctx");
      uVar5 = 200;
      goto LAB_00434d1c;
    }
    if (local_4c == 0) {
      lVar4 = 0;
    }
    else {
      FUN_003dce44();
      lVar4 = FUN_003a213c();
      if (lVar4 == 0) {
        FUN_00379868();
        FUN_0037995c("crypto/asn1/a_verify.c",0xb7,"ASN1_item_verify_ctx");
        FUN_00379a5c(0xd,0xa1,"nid=0x%x",local_4c);
        goto LAB_00434d24;
      }
    }
    iVar1 = FUN_003a12e8(param_5,0,lVar4,0,piVar3);
    if (iVar1 == 0) {
      FUN_00379868();
      FUN_0037995c("crypto/asn1/a_verify.c",0xc3,"ASN1_item_verify_ctx");
      FUN_00379a5c(0xd,0x80006,0);
      iVar1 = 0;
      iVar2 = 0;
      goto LAB_00434d2c;
    }
LAB_00434d78:
    iVar1 = -1;
LAB_00434d7c:
    iVar2 = FUN_0039b478(param_4,&local_48,param_1);
    if (iVar2 < 1) {
      FUN_00379868();
      FUN_0037995c("crypto/asn1/a_verify.c",0xcc,"ASN1_item_verify_ctx");
      uVar5 = 0xc0103;
    }
    else {
      if (local_48 != 0) {
        iVar1 = FUN_003a1d74(param_5,*(undefined8 *)(param_3 + 2),(long)*param_3);
        if (iVar1 < 1) {
          FUN_00379868();
          FUN_0037995c("crypto/asn1/a_verify.c",0xd8,"ASN1_item_verify_ctx");
          FUN_00379a5c(0xd,0x80006,0);
        }
        else {
          iVar1 = 1;
        }
        goto LAB_00434d2c;
      }
      FUN_00379868();
      FUN_0037995c("crypto/asn1/a_verify.c",0xd0,"ASN1_item_verify_ctx");
      uVar5 = 0x8000d;
    }
  }
  FUN_00379a5c(0xd,uVar5,0);
  iVar2 = 0;
LAB_00434d2c:
  FUN_003c893c(local_48,iVar2,"crypto/asn1/a_verify.c",0xdd);
  return iVar1;
}


// ===== 00434f50  FUN_00434f50 =====

undefined * FUN_00434f50(void)

{
  return &DAT_0077f2b0;
}


// ===== 00434f5c  FUN_00434f5c =====

void FUN_00434f5c(void)

{
  FUN_0038a93c();
  return;
}


// ===== 00434f68  FUN_00434f68 =====

void FUN_00434f68(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_0077f2b0);
  return;
}


// ===== 00434f74  FUN_00434f74 =====

void FUN_00434f74(void)

{
  FUN_0039a5f4(&DAT_0077f2b0);
  return;
}


// ===== 00434f80  FUN_00434f80 =====

void FUN_00434f80(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_0077f2b0);
  return;
}


// ===== 00434f8c  FUN_00434f8c =====

undefined * FUN_00434f8c(void)

{
  return &DAT_0077f338;
}


// ===== 00434f98  FUN_00434f98 =====

void FUN_00434f98(void)

{
  FUN_0038a93c();
  return;
}


// ===== 00434fa4  FUN_00434fa4 =====

void FUN_00434fa4(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_0077f338);
  return;
}


// ===== 00434fb0  FUN_00434fb0 =====

void FUN_00434fb0(void)

{
  FUN_0039a5f4(&DAT_0077f338);
  return;
}


// ===== 00434fbc  FUN_00434fbc =====

void FUN_00434fbc(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_0077f338);
  return;
}


// ===== 00434fc8  FUN_00434fc8 =====

void FUN_00434fc8(void)

{
  FUN_00434ff4();
  return;
}


// ===== 00434ff4  FUN_00434ff4 =====

undefined4
FUN_00434ff4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
            undefined8 param_9,undefined8 param_10)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  lVar3 = FUN_0039d0cc(param_7,param_6,param_9,param_10);
  if (lVar3 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/asn1/a_sign.c",0x84,"ASN1_item_sign_ex");
    FUN_00379a5c(0xd,0x80006,0);
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_003a126c(lVar3,0,param_8,0,param_7);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_004350e8(param_1,param_2,param_3,param_4,param_5,lVar3);
    }
    FUN_00389dc8(lVar3);
    FUN_003b1f78();
    FUN_0039d284(lVar3);
  }
  return uVar2;
}


// ===== 004350e8  FUN_004350e8 =====

ulong FUN_004350e8(undefined8 param_1,long param_2,long param_3,int *param_4,undefined8 param_5,
                  undefined8 param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  code *pcVar9;
  undefined4 *local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined4 local_158 [32];
  undefined1 auStack_d8 [32];
  long local_b8;
  undefined4 *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ulong local_88;
  ulong local_80;
  long local_78;
  long local_70;
  long lStack_68;
  
  local_80 = 0;
  local_78 = 0;
  local_88 = 0;
  local_70 = param_3;
  lStack_68 = param_2;
  lVar4 = FUN_00389d80(param_6);
  FUN_00389dc8(param_6);
  lVar5 = FUN_003b4314();
  if (lVar5 == 0) {
    FUN_00379868();
    uVar7 = 0xa2;
LAB_00435414:
    FUN_0037995c("crypto/asn1/a_sign.c",uVar7,"ASN1_item_sign_ctx");
    uVar7 = 0xd9;
LAB_00435420:
    FUN_00379a5c(0xd,uVar7,0);
  }
  else {
    if (*(long *)(lVar5 + 8) != 0) {
      pcVar9 = *(code **)(*(long *)(lVar5 + 8) + 0xd0);
      if (pcVar9 == (code *)0x0) {
LAB_004352c0:
        if (lVar4 == 0) {
          FUN_00379868();
          uVar7 = 0xe7;
          goto LAB_00435414;
        }
        uVar8 = **(undefined4 **)(lVar5 + 8);
        uVar2 = FUN_003899b0(lVar4);
        iVar1 = FUN_003de794(local_158,uVar2,uVar8);
        if (iVar1 == 0) {
          FUN_00379868();
          uVar7 = 0xf2;
LAB_00435500:
          FUN_0037995c("crypto/asn1/a_sign.c",uVar7,"ASN1_item_sign_ctx");
          uVar7 = 0xc6;
          goto LAB_00435420;
        }
        uVar8 = 5;
        if ((*(byte *)(*(long *)(lVar5 + 8) + 8) & 4) == 0) {
          uVar8 = 0xffffffff;
        }
        if (param_2 != 0) {
          uVar7 = FUN_003dcce8(5,local_158[0]);
          iVar1 = FUN_003a3a84(param_2,uVar7,uVar8,0);
          if (iVar1 == 0) goto LAB_00435428;
        }
        if (param_3 != 0) {
          uVar7 = FUN_003dcce8(local_158[0]);
          iVar1 = FUN_003a3a84(param_3,uVar7,uVar8,0);
          if (iVar1 == 0) goto LAB_00435428;
        }
        goto LAB_00435348;
      }
      iVar1 = (*pcVar9)(param_6,param_1,param_5,param_2,param_3,param_4);
      if (iVar1 == 1) {
        local_80 = (ulong)*param_4;
        iVar1 = 0;
        lVar4 = 0;
        goto LAB_00435430;
      }
      if (0 < iVar1) {
        if (iVar1 == 2) goto LAB_004352c0;
        goto LAB_00435348;
      }
      FUN_00379868();
      FUN_0037995c("crypto/asn1/a_sign.c",0xde,"ASN1_item_sign_ctx");
      uVar7 = 0x80006;
      goto LAB_00435420;
    }
    piVar6 = (int *)FUN_00389dc8(param_6);
    if (piVar6 == (int *)0x0) {
LAB_004353e0:
      FUN_00379868();
      uVar7 = 0xae;
      goto LAB_00435414;
    }
    iVar1 = *piVar6;
    if ((((0x30 < iVar1 - 0x10U) ||
         ((1L << ((ulong)(iVar1 - 0x10U) & 0x3f) & 0x1000000010001U) == 0)) && (iVar1 != 0x80)) &&
       (iVar1 != 0x100)) goto LAB_004353e0;
    FUN_003cd924(auStack_d8,"algorithm-id",local_158,0x80);
    FUN_003cdfcc(&local_180);
    uStack_a8 = uStack_178;
    local_b0 = local_180;
    uStack_98 = uStack_168;
    local_a0 = uStack_170;
    local_90 = local_160;
    iVar1 = FUN_003b2794(piVar6,auStack_d8);
    if (0 < iVar1) {
      if (local_b8 == 0) {
        FUN_00379868();
        uVar7 = 0xbb;
        goto LAB_00435500;
      }
      if (param_2 == 0) {
LAB_00435270:
        if (param_3 != 0) {
          local_180 = local_158;
          lVar4 = FUN_003a3a2c(&local_70,&local_180,local_b8);
          if (lVar4 == 0) {
            FUN_00379868();
            uVar7 = 0xcc;
            goto LAB_0043556c;
          }
        }
LAB_00435348:
        iVar1 = FUN_0039b478(param_5,&local_78,param_1);
        if (0 < iVar1) {
          iVar3 = FUN_003a1974(param_6,0,&local_88,local_78);
          if (iVar3 == 0) {
            local_80 = 0;
            FUN_00379868();
            FUN_0037995c("crypto/asn1/a_sign.c",0x109,"ASN1_item_sign_ctx");
            FUN_00379a5c(0xd,0x80006,0);
          }
          else {
            local_80 = local_88;
            lVar4 = FUN_003c83a4(local_88,"crypto/asn1/a_sign.c",0x10d);
            if ((local_78 == 0) || (lVar4 == 0)) {
              local_80 = 0;
              goto LAB_00435430;
            }
            iVar3 = FUN_003a1974(param_6,lVar4,&local_80,local_78,iVar1);
            if (iVar3 == 0) {
              local_80 = 0;
              FUN_00379868();
              FUN_0037995c("crypto/asn1/a_sign.c",0x115,"ASN1_item_sign_ctx");
              FUN_00379a5c(0xd,0x80006,0);
              goto LAB_00435430;
            }
            FUN_0038ee3c(param_4,lVar4,local_80 & 0xffffffff);
            FUN_0038eb60(param_4,0);
          }
          lVar4 = 0;
          goto LAB_00435430;
        }
        local_80 = 0;
        FUN_00379868();
        uVar7 = 0x103;
      }
      else {
        local_180 = local_158;
        lVar4 = FUN_003a3a2c(&lStack_68,&local_180,local_b8);
        if (lVar4 != 0) goto LAB_00435270;
        FUN_00379868();
        uVar7 = 0xc3;
      }
LAB_0043556c:
      FUN_0037995c("crypto/asn1/a_sign.c",uVar7,"ASN1_item_sign_ctx");
      uVar7 = 0xc0103;
      goto LAB_00435420;
    }
  }
LAB_00435428:
  iVar1 = 0;
  lVar4 = 0;
LAB_00435430:
  FUN_003c893c(local_78,iVar1,"crypto/asn1/a_sign.c",0x120);
  FUN_003c893c(lVar4,local_88,"crypto/asn1/a_sign.c",0x121);
  return local_80 & 0xffffffff;
}


// ===== 004355bc  FUN_004355bc =====

undefined4 * FUN_004355bc(long param_1,long param_2,int param_3)

{
  undefined4 *puVar1;
  long lVar2;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    FUN_00379868();
    FUN_0037995c("crypto/http/http_client.c",0x62,"OSSL_HTTP_REQ_CTX_new");
    FUN_00379a5c(0x3d,0xc0102,0);
    return (undefined4 *)0x0;
  }
  puVar1 = (undefined4 *)FUN_003c8474(0xc0,"crypto/http/http_client.c",0x66);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0x1000;
    if (param_3 < 1) {
      param_3 = 0x1000;
    }
    puVar1[4] = param_3;
    lVar2 = FUN_003c83a4(param_3,"crypto/http/http_client.c",0x6a);
    *(long *)(puVar1 + 6) = param_1;
    *(long *)(puVar1 + 8) = param_2;
    *(long *)(puVar1 + 2) = lVar2;
    if (lVar2 == 0) {
      FUN_003c86b4(puVar1,"crypto/http/http_client.c",0x6e);
      return (undefined4 *)0x0;
    }
    *(undefined8 *)(puVar1 + 0x26) = 0x19000;
  }
  return puVar1;
}


// ===== 004356bc  FUN_004356bc =====

void FUN_004356bc(long param_1)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x14) != 0) {
      FUN_0037ef60(*(undefined8 *)(param_1 + 0x18));
    }
    FUN_0037db50(*(undefined8 *)(param_1 + 0x58));
    FUN_0037db50(*(undefined8 *)(param_1 + 0x60));
    FUN_003c86b4(*(undefined8 *)(param_1 + 8),"crypto/http/http_client.c",0x84);
    FUN_003c86b4(*(undefined8 *)(param_1 + 0x40),"crypto/http/http_client.c",0x85);
    FUN_003c86b4(*(undefined8 *)(param_1 + 0x48),"crypto/http/http_client.c",0x86);
    FUN_003c86b4(*(undefined8 *)(param_1 + 0x50),"crypto/http/http_client.c",0x87);
    FUN_003c86b4(*(undefined8 *)(param_1 + 0x70),"crypto/http/http_client.c",0x88);
    FUN_003c86b4(param_1,"crypto/http/http_client.c",0x89);
    return;
  }
  return;
}


// ===== 00435764  FUN_00435764 =====

undefined8 FUN_00435764(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x58);
  }
  FUN_00379868();
  FUN_0037995c("crypto/http/http_client.c",0x8f,"OSSL_HTTP_REQ_CTX_get0_mem_bio");
  FUN_00379a5c(0x3d,0xc0102,0);
  return 0;
}


// ===== 004357b4  FUN_004357b4 =====

undefined8 FUN_004357b4(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x90);
  }
  FUN_00379868();
  FUN_0037995c("crypto/http/http_client.c",0x98,"OSSL_HTTP_REQ_CTX_get_resp_len");
  FUN_00379a5c(0x3d,0xc0102,0);
  return 0;
}


// ===== 00435804  FUN_00435804 =====

void FUN_00435804(long param_1,long param_2)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = 0x19000;
    if (param_2 != 0) {
      lVar1 = param_2;
    }
    *(long *)(param_1 + 0x98) = lVar1;
    return;
  }
  FUN_00379868();
  FUN_0037995c("crypto/http/http_client.c",0xa2,"OSSL_HTTP_REQ_CTX_set_max_response_length");
  FUN_00379a5c(0x3d,0xc0102,0);
  return;
}


// ===== 0043585c  FUN_0043585c =====

undefined8 FUN_0043585c(undefined4 *param_1,int param_2,long param_3,long param_4,char *param_5)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  
  if (param_1 == (undefined4 *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/http/http_client.c",0xb2,"OSSL_HTTP_REQ_CTX_set_request_line");
    uVar2 = 0xc0102;
LAB_00435980:
    FUN_00379a5c(0x3d,uVar2,0);
    return 0;
  }
  FUN_0037db50(*(undefined8 *)(param_1 + 0x16));
  FUN_00387560();
  lVar4 = FUN_0037db44();
  *(long *)(param_1 + 0x16) = lVar4;
  if (lVar4 == 0) {
    return 0;
  }
  param_1[0x1a] = (uint)(param_2 != 0);
  puVar1 = &UNK_001e76b5;
  if (param_2 == 0) {
    puVar1 = &UNK_001f613e;
  }
  iVar3 = FUN_0037b9f8(lVar4,&DAT_001c7b69,puVar1);
  if (iVar3 < 1) {
    return 0;
  }
  if (param_3 != 0) {
    iVar3 = FUN_0037b9f8(*(undefined8 *)(param_1 + 0x16),"http://%s",param_3);
    if (iVar3 < 1) {
      return 0;
    }
    if ((param_4 != 0) &&
       (iVar3 = FUN_0037b9f8(*(undefined8 *)(param_1 + 0x16),&DAT_001f19a1,param_4), iVar3 < 1)) {
      return 0;
    }
  }
  if (param_5 == (char *)0x0) {
    param_5 = "/";
  }
  else {
    iVar3 = strncmp(param_5,"http://",7);
    if (iVar3 == 0) {
      if (param_3 != 0) {
        FUN_00379868();
        FUN_0037995c("crypto/http/http_client.c",0xcd,"OSSL_HTTP_REQ_CTX_set_request_line");
        uVar2 = 0x80106;
        goto LAB_00435980;
      }
    }
    else if ((*param_5 != '/') &&
            (iVar3 = FUN_0037b9f8(*(undefined8 *)(param_1 + 0x16),&DAT_001c55aa), iVar3 < 1)) {
      return 0;
    }
  }
  iVar3 = FUN_0037b9f8(*(undefined8 *)(param_1 + 0x16),"%s HTTP/1.0\r\n",param_5);
  if (iVar3 < 1) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x24) = 0;
  *param_1 = 0x1001;
  return 1;
}


// ===== 00435a30  FUN_00435a30 =====

bool FUN_00435a30(long param_1,long param_2,long param_3)

{
  int iVar1;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    FUN_00379868();
    FUN_0037995c("crypto/http/http_client.c",0xe3,"OSSL_HTTP_REQ_CTX_add1_header");
    FUN_00379a5c(0x3d,0xc0102,0);
    return false;
  }
  if (*(long *)(param_1 + 0x58) == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/http/http_client.c",0xe7,"OSSL_HTTP_REQ_CTX_add1_header");
    FUN_00379a5c(0x3d,0xc0101,0);
  }
  else {
    iVar1 = FUN_0037e608();
    if ((0 < iVar1) &&
       ((param_3 == 0 ||
        ((iVar1 = FUN_0037df4c(param_3,*(undefined8 *)(param_1 + 0x58),&DAT_001f2fbc,2), iVar1 == 2
         && (iVar1 = FUN_0037e608(*(undefined8 *)(param_1 + 0x58),param_3), 0 < iVar1)))))) {
      iVar1 = FUN_0037df4c(*(undefined8 *)(param_1 + 0x58),&DAT_001d6868,2);
      return iVar1 == 2;
    }
  }
  return false;
}


// ===== 00435b44  FUN_00435b44 =====

undefined8 FUN_00435b44(uint *param_1,long param_2,uint param_3,uint param_4,uint param_5)

{
  undefined4 uVar1;
  long lVar2;
  time_t tVar3;
  
  if (param_1 == (uint *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/http/http_client.c",0xfb,"OSSL_HTTP_REQ_CTX_set_expected");
    uVar1 = 0xc0102;
  }
  else {
    if ((param_5 == 0) || ((*param_1 & 0xfffffffe) == 0x1000)) {
      FUN_003c86b4(*(undefined8 *)(param_1 + 0x1c),"crypto/http/http_client.c",0x105);
      param_1[0x1c] = 0;
      param_1[0x1d] = 0;
      if (param_2 != 0) {
        lVar2 = FUN_003ca2f4(param_2,"crypto/http/http_client.c",0x108);
        *(long *)(param_1 + 0x1c) = lVar2;
        if (lVar2 == 0) {
          return 0;
        }
      }
      param_1[0x1e] = param_3;
      if ((int)param_4 < 0) {
        lVar2 = *(long *)(param_1 + 0x2c);
      }
      else if (param_4 == 0) {
        lVar2 = 0;
      }
      else {
        tVar3 = time((time_t *)0x0);
        lVar2 = tVar3 + (ulong)param_4;
      }
      *(long *)(param_1 + 0x2a) = lVar2;
      param_1[0x28] = param_5;
      return 1;
    }
    FUN_00379868();
    FUN_0037995c("crypto/http/http_client.c",0x101,"OSSL_HTTP_REQ_CTX_set_expected");
    uVar1 = 0xc0101;
  }
  FUN_00379a5c(0x3d,uVar1,0);
  return 0;
}


// ===== 00435c7c  FUN_00435c7c =====

undefined4 FUN_00435c7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined4 uVar1;
  long lVar2;
  
  if (param_4 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_003e0248(param_3,param_4);
    if (lVar2 == 0) {
      FUN_0037db50(0);
      return 0;
    }
  }
  uVar1 = FUN_00435cf4(param_1,param_2,lVar2);
  FUN_0037db50(lVar2);
  return uVar1;
}


// ===== 00435cf4  FUN_00435cf4 =====

undefined8 FUN_00435cf4(long param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((param_1 == 0) || ((param_2 != 0 && (param_3 == 0)))) {
    FUN_00379868();
    FUN_0037995c("crypto/http/http_client.c",0x11d,"set1_content");
    uVar1 = 0xc0102;
  }
  else {
    if ((*(int *)(param_1 + 0xa0) != 0) &&
       (uVar3 = FUN_00435a30(param_1,"Connection","keep-alive"), (int)uVar3 == 0)) {
      return uVar3;
    }
    FUN_0037db50(*(undefined8 *)(param_1 + 0x60));
    *(undefined8 *)(param_1 + 0x60) = 0;
    if (param_3 == 0) {
      return 1;
    }
    if (*(int *)(param_1 + 0x68) != 0) {
      if (param_2 == 0) {
        *(undefined4 *)(param_1 + 0x6c) = 1;
        iVar2 = FUN_0037dd70(param_3);
      }
      else {
        iVar2 = FUN_003cab60(param_2,"text/",5);
        if (iVar2 == 0) {
          *(undefined4 *)(param_1 + 0x6c) = 1;
        }
        iVar2 = FUN_0037b9f8(*(undefined8 *)(param_1 + 0x58),"Content-Type: %s\r\n",param_2);
        if (iVar2 < 1) {
          return 0;
        }
        iVar2 = FUN_0037dd70(param_3);
      }
      if (((iVar2 != 0x402) && (lVar4 = FUN_0037e4bc(param_3,3,0,0), 0 < lVar4)) &&
         (iVar2 = FUN_0037b9f8(*(undefined8 *)(param_1 + 0x58),"Content-Length: %ld\r\n",lVar4),
         iVar2 < 0)) {
        return 0;
      }
      uVar3 = FUN_0037dcfc(param_3);
      if ((int)uVar3 != 0) {
        *(long *)(param_1 + 0x60) = param_3;
        return 1;
      }
      return uVar3;
    }
    FUN_00379868();
    FUN_0037995c("crypto/http/http_client.c",0x12a,"set1_content");
    uVar1 = 0xc0101;
  }
  FUN_00379a5c(0x3d,uVar1,0);
  return 0;
}


// ===== 00435ea4  FUN_00435ea4 =====

undefined8 FUN_00435ea4(uint *param_1)

{
  bool bVar1;
  byte *pbVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  size_t sVar9;
  void *pvVar10;
  char *pcVar11;
  char *__s;
  char *pcVar12;
  undefined8 uVar13;
  long lVar14;
  undefined4 uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  byte *pbVar19;
  byte *__nptr;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  char *__s_00;
  char *local_78;
  byte *local_70;
  byte *local_68;
  
  local_78 = (char *)0x0;
  if (param_1 == (uint *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/http/http_client.c",0x21e,"OSSL_HTTP_REQ_CTX_nbio");
    uVar13 = 0xc0102;
  }
  else {
    if (((*(long *)(param_1 + 0x16) != 0) && (*(long *)(param_1 + 6) != 0)) &&
       (*(long *)(param_1 + 8) != 0)) {
      bVar5 = false;
      param_1[0x2e] = 0;
      param_1[0x2f] = 0;
      pbVar21 = local_70;
      bVar1 = false;
LAB_00435f58:
      do {
        local_70 = pbVar21;
        uVar8 = *param_1;
        pbVar21 = *(byte **)(param_1 + 2);
        if ((uVar8 >> 0xc & 1) == 0) {
          if (param_1[0x1e] == 0) {
            FUN_0037f6d4();
            iVar6 = FUN_0037e7f0(*(undefined8 *)(param_1 + 8),pbVar21,param_1[4]);
            if (iVar6 == -2) {
              FUN_0037f71c();
              iVar6 = FUN_0037e9d4(*(undefined8 *)(param_1 + 8),pbVar21,param_1[4]);
            }
            else {
              FUN_0037f8c4();
            }
          }
          else {
            iVar6 = FUN_0037dd7c(*(undefined8 *)(param_1 + 8),pbVar21,param_1[4]);
          }
          if (0 < iVar6) {
            iVar7 = FUN_0037df4c(*(undefined8 *)(param_1 + 0x16),*(undefined8 *)(param_1 + 2),iVar6)
            ;
            if (iVar7 != iVar6) {
              return 0;
            }
            uVar8 = *param_1;
            goto LAB_00435fe8;
          }
          iVar6 = FUN_0037dd28(*(undefined8 *)(param_1 + 8),8);
          if (iVar6 != 0) {
            return 0xffffffff;
          }
          FUN_00379868();
          uVar13 = 0x239;
LAB_004368b4:
          FUN_0037995c("crypto/http/http_client.c",uVar13,"OSSL_HTTP_REQ_CTX_nbio");
          uVar13 = 0x80;
          goto LAB_00436824;
        }
LAB_00435fe8:
        if (0x1001 < (int)uVar8) {
          if (uVar8 - 0x1003 < 3) {
            lVar14 = *(long *)(param_1 + 0x22);
            if (lVar14 < 1) {
              if (uVar8 == 0x1004) {
                FUN_0037e4bc(*(undefined8 *)(param_1 + 0x16),1,0,0);
                *param_1 = 0x1005;
              }
LAB_00436634:
              if ((*(long *)(param_1 + 0x18) == 0) ||
                 (iVar6 = FUN_0037e4bc(*(long *)(param_1 + 0x18),2,0,0), iVar6 != 0)) {
                *param_1 = 0x1006;
                goto LAB_00436658;
              }
              uVar8 = FUN_0037dd7c(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 2),
                                   param_1[4]);
              if ((int)uVar8 < 1) {
                iVar6 = FUN_0037dd28(*(undefined8 *)(param_1 + 0x18),8);
                if (iVar6 != 0) {
                  return 0xffffffff;
                }
                FUN_00379868();
                uVar13 = 0x273;
                goto LAB_004368b4;
              }
              *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 2);
              *(ulong *)(param_1 + 0x22) = (ulong)uVar8;
              pbVar21 = local_70;
              goto LAB_00435f58;
            }
LAB_004365ec:
            iVar6 = FUN_0037e148(*(undefined8 *)(param_1 + 6),*(undefined8 *)(param_1 + 0x20),lVar14
                                 ,&local_68);
            if (iVar6 != 0) {
              if (*param_1 == 0x1003) {
                *param_1 = 0x1004;
              }
              *(byte **)(param_1 + 0x20) = local_68 + *(long *)(param_1 + 0x20);
              *(long *)(param_1 + 0x22) = *(long *)(param_1 + 0x22) - (long)local_68;
              pbVar21 = local_70;
              goto LAB_00435f58;
            }
          }
          else {
            if (uVar8 == 0x1002) {
LAB_004365c4:
              lVar14 = FUN_0037e4bc(*(undefined8 *)(param_1 + 0x16),3,0,param_1 + 0x20);
              *param_1 = 0x1003;
              *(long *)(param_1 + 0x22) = lVar14;
              if (0 < lVar14) goto LAB_004365ec;
              goto LAB_00436634;
            }
            if (uVar8 != 0x1006) goto LAB_004367c4;
LAB_00436658:
            iVar6 = FUN_0037e4bc(*(undefined8 *)(param_1 + 6),0xb,0,0);
            if (0 < iVar6) {
              *param_1 = 1;
              pbVar21 = local_70;
              goto LAB_00435f58;
            }
          }
          uVar13 = FUN_0037dd28(*(undefined8 *)(param_1 + 6),8);
          if ((int)uVar13 != 0) {
            return 0xffffffff;
          }
          goto LAB_00436880;
        }
        if (4 < (int)uVar8) {
          if (uVar8 != 5) {
            if (uVar8 != 0x1001) {
              if (uVar8 == 0x1000) {
                return 0;
              }
              goto LAB_004367c4;
            }
            iVar6 = FUN_0037df4c(*(undefined8 *)(param_1 + 0x16),&DAT_001d6868,2);
            if (iVar6 == 2) {
              *param_1 = 0x1002;
              goto LAB_004365c4;
            }
            goto LAB_0043687c;
          }
LAB_0043672c:
          uVar18 = FUN_0037e4bc(*(undefined8 *)(param_1 + 0x16),3,0,&local_70);
          pbVar21 = local_70;
          if (1 < (long)uVar18) {
            pbVar21 = local_70 + 1;
            if (*local_70 != 0x30) {
              local_70 = pbVar21;
              FUN_00379868();
              FUN_0037995c("crypto/http/http_client.c",0x34f,"OSSL_HTTP_REQ_CTX_nbio");
              uVar13 = 0x6e;
              goto LAB_00436824;
            }
            uVar16 = (ulong)*pbVar21;
            if ((char)*pbVar21 < '\0') {
              if (uVar18 < 6) goto LAB_00435f58;
              uVar16 = uVar16 & 0x7f;
              if ((int)uVar16 - 5U < 0xfffffffc) {
                local_70 = pbVar21;
                FUN_00379868();
                FUN_0037995c("crypto/http/http_client.c",0x35e,"OSSL_HTTP_REQ_CTX_nbio");
                uVar13 = 0x6d;
                goto LAB_00436824;
              }
              uVar17 = 0;
              pbVar2 = local_70 + 3;
              uVar18 = uVar16;
              do {
                pbVar21 = pbVar2;
                uVar8 = (int)uVar18 - 1;
                uVar18 = (ulong)uVar8;
                uVar17 = (ulong)pbVar21[-1] | uVar17 << 8;
                pbVar2 = pbVar21 + 1;
              } while (uVar8 != 0);
              uVar16 = uVar16 + uVar17;
            }
            local_70 = pbVar21;
            uVar13 = FUN_00436a60(param_1,uVar16 + 2);
            if ((int)uVar13 == 0) {
              return uVar13;
            }
            *param_1 = 6;
LAB_004367c4:
            uVar18 = FUN_0037e4bc(*(undefined8 *)(param_1 + 0x16),3,0,0);
            pbVar21 = local_70;
            if ((-1 < (long)uVar18) && (*(ulong *)(param_1 + 0x24) <= uVar18)) {
              uVar8 = 0x1007;
LAB_004367ec:
              *param_1 = uVar8;
              return 1;
            }
          }
          goto LAB_00435f58;
        }
        if ((1 < uVar8 - 1) && (uVar8 != 4)) goto LAB_004367c4;
        sVar9 = FUN_0037e4bc(*(undefined8 *)(param_1 + 0x16),3,0,&local_70);
        if (0 < (long)sVar9) {
          pbVar2 = pbVar21 + 7;
          bVar4 = bVar1;
LAB_00436034:
          pvVar10 = memchr(local_70,10,sVar9);
          bVar1 = bVar4;
          if (pvVar10 != (void *)0x0) {
            uVar8 = FUN_0037e7f0(*(undefined8 *)(param_1 + 0x16),pbVar21,param_1[4]);
            if ((int)uVar8 < 1) {
              uVar13 = FUN_0037dd28(*(undefined8 *)(param_1 + 0x16),8);
              pbVar21 = local_70;
              if ((int)uVar13 != 0) goto LAB_00435f58;
              goto LAB_00436880;
            }
            if (uVar8 == param_1[4]) {
              FUN_00379868();
              FUN_0037995c("crypto/http/http_client.c",0x2af,"OSSL_HTTP_REQ_CTX_nbio");
              FUN_00379a5c(0x3d,0x71,0);
              goto LAB_0043687c;
            }
            if (*param_1 == 1) {
              iVar6 = strncmp((char *)pbVar21,"HTTP/1.",7);
              pbVar20 = pbVar21;
              if (iVar6 == 0) {
                bVar3 = *pbVar2;
                bVar1 = 0x30 < bVar3;
                __nptr = pbVar2;
                pbVar19 = pbVar21 + 6;
                while (pbVar20 = pbVar2, bVar3 != 0) {
                  iVar6 = FUN_003c475c(bVar3,8);
                  if (iVar6 != 0) {
                    bVar3 = *__nptr;
                    if (bVar3 != 0) goto LAB_004360d0;
                    break;
                  }
                  __nptr = __nptr + 1;
                  pbVar19 = pbVar19 + 1;
                  bVar3 = *__nptr;
                }
              }
              goto LAB_0043629c;
            }
            pcVar11 = strchr((char *)pbVar21,0x3a);
            if (pcVar11 != (char *)0x0) {
              *pcVar11 = '\0';
              __s_00 = pcVar11;
              do {
                __s_00 = __s_00 + 1;
                iVar6 = FUN_003c475c(*__s_00,8);
                pcVar11 = pcVar11 + 1;
              } while (iVar6 != 0);
              local_78 = strchr(__s_00,0xd);
              if ((local_78 != (char *)0x0) ||
                 (local_78 = strchr(__s_00,10), local_78 != (char *)0x0)) {
                *local_78 = '\0';
                if ((*param_1 == 4) && (uVar13 = FUN_003cab04(pbVar21,"Location"), (int)uVar13 == 0)
                   ) {
                  *(char **)(param_1 + 0x2e) = __s_00;
                  return uVar13;
                }
                iVar6 = FUN_003cab04(pbVar21,"Content-Type");
                if (((iVar6 == 0) && (FUN_003cab60(__s_00,"text/",5), *param_1 == 2)) &&
                   (*(long *)(param_1 + 0x1c) != 0)) {
                  iVar6 = FUN_003cab04(*(long *)(param_1 + 0x1c),__s_00);
                  if (iVar6 != 0) {
                    __s = *(char **)(param_1 + 0x1c);
                    pcVar12 = strchr(__s,0x3b);
                    if (((pcVar12 != (char *)0x0) ||
                        (pcVar12 = strchr(__s_00,0x3b), pcVar12 == (char *)0x0)) ||
                       ((sVar9 = strlen(__s), pcVar12 + -sVar9 != pcVar11 ||
                        (iVar6 = FUN_003cab60(__s,__s_00,(long)pcVar12 - (long)pcVar11), iVar6 != 0)
                        ))) {
                      FUN_00379868();
                      FUN_0037995c("crypto/http/http_client.c",0x2ee,"OSSL_HTTP_REQ_CTX_nbio");
                      FUN_00379a5c(0x3d,0x76,"expected=%s, actual=%s",
                                   *(undefined8 *)(param_1 + 0x1c),__s_00);
                      return 0;
                    }
                  }
                  bVar5 = true;
                }
                iVar6 = FUN_003cab04(pbVar21,"Connection");
                if (iVar6 == 0) {
                  iVar6 = FUN_003cab04(__s_00,"keep-alive");
                  if (iVar6 == 0) {
                    bVar1 = true;
                  }
                  else {
                    iVar6 = FUN_003cab04(__s_00,"close");
                    bVar1 = false;
                    if (iVar6 != 0) {
                      bVar1 = bVar4;
                    }
                  }
                }
                else {
                  iVar6 = FUN_003cab04(pbVar21,"Content-Length");
                  if (iVar6 == 0) {
                    uVar18 = strtoul(__s_00,&local_78,10);
                    if ((__s_00 == local_78) || (*local_78 != '\0')) {
                      FUN_00379868();
                      FUN_0037995c("crypto/http/http_client.c",0x301,"OSSL_HTTP_REQ_CTX_nbio");
                      pcVar11 = "input=%s";
                      uVar13 = 0x77;
                      goto LAB_00436a1c;
                    }
                    uVar13 = FUN_00436a60(param_1,uVar18);
                    if ((int)uVar13 == 0) {
                      return uVar13;
                    }
                  }
                }
              }
            }
            for (local_70 = *(byte **)(param_1 + 2);
                (bVar3 = *local_70, bVar3 == 10 || (bVar3 == 0xd)); local_70 = local_70 + 1) {
            }
            if (bVar3 != 0) {
              uVar13 = *(undefined8 *)(param_1 + 0x16);
              goto LAB_00436308;
            }
            uVar8 = param_1[0x28];
            if (((uVar8 != 0) && (!bVar1)) && (param_1[0x28] = 0, uVar8 == 2)) {
              FUN_00379868();
              FUN_0037995c("crypto/http/http_client.c",0x319,"OSSL_HTTP_REQ_CTX_nbio");
              uVar13 = 0x7f;
              goto LAB_00436824;
            }
            if (*param_1 == 3) {
              return 0;
            }
            if ((*(long *)(param_1 + 0x1c) != 0) && (!bVar5)) {
              FUN_00379868();
              FUN_0037995c("crypto/http/http_client.c",0x331,"OSSL_HTTP_REQ_CTX_nbio");
              __s_00 = *(char **)(param_1 + 0x1c);
              pcVar11 = "expected=%s";
              uVar13 = 0x79;
LAB_00436a1c:
              FUN_00379a5c(0x3d,uVar13,pcVar11,__s_00);
              return 0;
            }
            if (*param_1 == 4) {
              FUN_00379868();
              FUN_0037995c("crypto/http/http_client.c",0x337,"OSSL_HTTP_REQ_CTX_nbio");
              uVar13 = 0x6f;
              goto LAB_00436824;
            }
            if (param_1[0x1e] != 0) {
              *param_1 = 5;
              goto LAB_0043672c;
            }
            uVar8 = 0x1008;
            goto LAB_004367ec;
          }
        }
LAB_00436618:
        pbVar21 = local_70;
        if ((long)(int)param_1[4] <= (long)sVar9) {
LAB_0043687c:
          uVar13 = 0;
LAB_00436880:
          *param_1 = 0x1000;
          return uVar13;
        }
      } while( true );
    }
    FUN_00379868();
    FUN_0037995c("crypto/http/http_client.c",0x222,"OSSL_HTTP_REQ_CTX_nbio");
    uVar13 = 0xc0101;
  }
LAB_00436824:
  FUN_00379a5c(0x3d,uVar13,0);
  return 0;
  while( true ) {
    __nptr = __nptr + 1;
    bVar3 = *__nptr;
    pbVar19 = pbVar19 + 1;
    if (bVar3 == 0) break;
LAB_004360d0:
    iVar6 = FUN_003c475c(bVar3,8);
    if (iVar6 == 0) {
      bVar3 = *__nptr;
      pbVar22 = __nptr;
      if (bVar3 != 0) goto LAB_004360fc;
      break;
    }
  }
  goto LAB_0043629c;
  while( true ) {
    bVar3 = pbVar22[1];
    pbVar19 = pbVar19 + 1;
    pbVar22 = pbVar22 + 1;
    if (bVar3 == 0) break;
LAB_004360fc:
    iVar6 = FUN_003c475c(bVar3,8);
    if (iVar6 != 0) {
      if (*pbVar22 != 0) {
        *pbVar22 = 0;
        uVar18 = strtoul((char *)__nptr,(char **)&local_68,10);
        if (*local_68 == 0) goto LAB_0043639c;
      }
      break;
    }
  }
LAB_0043629c:
  uVar18 = 0;
  do {
    if (pbVar20[uVar18] == 0) break;
    iVar6 = FUN_003c475c(pbVar20[uVar18],0x100);
    if (iVar6 == 0) {
      pbVar20[uVar18] = 0x20;
    }
    uVar18 = uVar18 + 1;
  } while (uVar18 != 0x3c);
  pbVar20[uVar18 & 0xffffffff] = 0;
  FUN_00379868();
  FUN_0037995c("crypto/http/http_client.c",0x1ec,"parse_http_line1");
  FUN_00379a5c(0x3d,0x7e,"content=%s",pbVar20);
LAB_004362fc:
  uVar8 = 3;
LAB_00436300:
  uVar13 = *(undefined8 *)(param_1 + 0x16);
  *param_1 = uVar8;
LAB_00436308:
  sVar9 = FUN_0037e4bc(uVar13,3,0,&local_70);
  bVar4 = bVar1;
  if ((long)sVar9 < 1) goto LAB_00436618;
  goto LAB_00436034;
  while( true ) {
    iVar6 = FUN_003c475c(pbVar20[2],8);
    pbVar19 = pbVar20 + 1;
    if (iVar6 == 0) break;
LAB_0043639c:
    pbVar20 = pbVar19;
    if (pbVar20[2] == 0) goto LAB_004363fc;
  }
  if (pbVar20[2] != 0) {
    sVar9 = strlen((char *)(pbVar20 + 2));
    iVar6 = FUN_003c475c((pbVar20 + 1)[sVar9],8);
    if (iVar6 != 0) {
      pbVar19 = pbVar20 + sVar9;
      do {
        pbVar19[1] = 0;
        local_68 = pbVar19;
        iVar6 = FUN_003c475c(*pbVar19,8);
        pbVar19 = pbVar19 + -1;
      } while (iVar6 != 0);
    }
  }
LAB_004363fc:
  iVar6 = (int)uVar18;
  if ((1 < iVar6 - 0x12dU) && (iVar6 != 200)) {
    bVar3 = pbVar20[2];
    uVar15 = 0x72;
    if (399 < iVar6) {
      uVar15 = 0x69;
    }
    FUN_00379868();
    if (bVar3 == 0) {
      FUN_0037995c("crypto/http/http_client.c",0x1e0,"parse_http_line1");
      FUN_00379a5c(0x3d,uVar15,"code=%s",__nptr);
    }
    else {
      FUN_0037995c("crypto/http/http_client.c",0x1e2,"parse_http_line1");
      FUN_00379a5c(0x3d,uVar15,"code=%s, reason=%s",__nptr,pbVar20 + 2);
    }
  }
  if (iVar6 - 0x12dU < 2) {
    if (param_1[0x1a] == 0) {
      uVar8 = 4;
      goto LAB_00436300;
    }
    FUN_00379868();
    FUN_0037995c("crypto/http/http_client.c",0x2c7,"OSSL_HTTP_REQ_CTX_nbio");
    FUN_00379a5c(0x3d,0x74,0);
  }
  else if (iVar6 == 200) {
    uVar8 = 2;
    goto LAB_00436300;
  }
  goto LAB_004362fc;
}


// ===== 00436a60  FUN_00436a60 =====

undefined8 FUN_00436a60(long param_1,ulong param_2)

{
  if ((*(ulong *)(param_1 + 0x98) != 0) && (*(ulong *)(param_1 + 0x98) < param_2)) {
    FUN_00379868();
    FUN_0037995c("crypto/http/http_client.c",499,"check_set_resp_len");
    FUN_00379a5c(0x3d,0x75,"length=%zu, max=%zu",param_2,*(undefined8 *)(param_1 + 0x98));
    return 0;
  }
  if ((*(ulong *)(param_1 + 0x90) != 0) && (*(ulong *)(param_1 + 0x90) != param_2)) {
    FUN_00379868();
    FUN_0037995c("crypto/http/http_client.c",0x1f8,"check_set_resp_len");
    FUN_00379a5c(0x3d,0x78,"ASN.1 length=%zu, Content-Length=%zu",param_2,
                 *(undefined8 *)(param_1 + 0x90));
    return 0;
  }
  *(ulong *)(param_1 + 0x90) = param_2;
  return 1;
}


// ===== 00436b38  FUN_00436b38 =====

ulong FUN_00436b38(long param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_18 [8];
  
  *param_2 = 0;
  uVar1 = FUN_00435ea4();
  if ((int)uVar1 == 1) {
    uVar2 = FUN_0037e4bc(*(undefined8 *)(param_1 + 0x58),3,0,auStack_18);
    lVar3 = FUN_0038a93c(0,auStack_18,uVar2,param_3);
    *param_2 = lVar3;
    uVar1 = (ulong)(lVar3 != 0);
  }
  return uVar1;
}


// ===== 00436ba8  FUN_00436ba8 =====

undefined8 FUN_00436ba8(int *param_1)

{
  int iVar1;
  long lVar2;
  
  if (param_1 == (int *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/http/http_client.c",0x3b3,"OSSL_HTTP_REQ_CTX_exchange");
    FUN_00379a5c(0x3d,0xc0102,0);
    return 0;
  }
  while (iVar1 = FUN_00435ea4(param_1), iVar1 == -1) {
    iVar1 = FUN_0037f2ec(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x2a),100);
    if (iVar1 < 1) {
      return 0;
    }
  }
  if (iVar1 != 0) {
    lVar2 = 0x20;
    if (*param_1 != 0x1008) {
      lVar2 = 0x58;
    }
    return *(undefined8 *)((long)param_1 + lVar2);
  }
  if (*(long *)(param_1 + 0x2e) == 0) {
    lVar2 = *(long *)(param_1 + 0x22);
    FUN_00379868();
    if (lVar2 < 1) {
      FUN_0037995c("crypto/http/http_client.c",0x3c6,"OSSL_HTTP_REQ_CTX_exchange");
      FUN_00379a5c(0x3d,0x67,0);
      return 0;
    }
    FUN_0037995c("crypto/http/http_client.c",0x3c4,"OSSL_HTTP_REQ_CTX_exchange");
    FUN_00379a5c(0x3d,0x66,0);
    return 0;
  }
  return 0;
}


// ===== 00436ce8  FUN_00436ce8 =====

ulong FUN_00436ce8(ulong param_1)

{
  if (param_1 != 0) {
    param_1 = (ulong)(*(int *)(param_1 + 0xa0) != 0);
  }
  return param_1;
}


// ===== 00436cfc  FUN_00436cfc =====

long FUN_00436cfc(long param_1,long param_2,long param_3,long param_4,int param_5,long param_6,
                 long param_7,code *param_8,undefined8 param_9,undefined4 param_10,uint param_11)

{
  int iVar1;
  long lVar2;
  long lVar3;
  time_t tVar4;
  undefined8 uVar5;
  
  if ((param_5 != 0) && (param_8 == (code *)0x0)) {
    FUN_00379868();
    FUN_0037995c("crypto/http/http_client.c",0x3df,"OSSL_HTTP_open");
    uVar5 = 0x6b;
    goto LAB_00436da4;
  }
  if (param_7 == 0) {
    if (param_6 == 0) {
      FUN_00379868();
      FUN_0037995c("crypto/http/http_client.c",0x405,"OSSL_HTTP_open");
      uVar5 = 0x7a;
      goto LAB_00436da4;
    }
LAB_00436d74:
    if (param_3 == 0 && param_4 == 0) {
      FUN_0037f6d4();
      if ((param_7 == 0) && (iVar1 = FUN_0037f3ac(param_6,param_11,0xffffffff), iVar1 < 1))
      goto LAB_00436f98;
      if (param_8 == (code *)0x0) {
        lVar2 = param_6;
        if (param_7 != 0) {
          lVar2 = param_7;
        }
        lVar2 = FUN_004355bc(param_6,lVar2,param_10);
        if (lVar2 == 0) goto LAB_00436f98;
        *(undefined4 *)(lVar2 + 0x14) = 0;
        *(undefined8 *)(lVar2 + 0x28) = 0;
        *(undefined8 *)(lVar2 + 0x30) = param_9;
        *(int *)(lVar2 + 0x38) = param_5;
        if (param_1 == 0) {
LAB_00436f48:
          if (param_2 == 0) goto joined_r0x00436f78;
          lVar3 = FUN_003ca2f4(param_2,"crypto/http/http_client.c",0x191);
          *(long *)(lVar2 + 0x50) = lVar3;
          goto joined_r0x00436f70;
        }
        lVar3 = FUN_003ca2f4(param_1,"crypto/http/http_client.c",0x18e);
        *(long *)(lVar2 + 0x48) = lVar3;
        if (lVar3 != 0) goto LAB_00436f48;
      }
      else {
        lVar2 = (*param_8)(param_6,param_9,1,param_5 != 0);
        if (lVar2 == 0) goto LAB_00436f98;
        lVar3 = lVar2;
        if (param_7 != 0) {
          lVar3 = param_7;
        }
        lVar2 = FUN_004355bc(lVar2,lVar3,param_10);
        if (lVar2 == 0) goto LAB_00436f98;
        *(undefined4 *)(lVar2 + 0x14) = 0;
        *(code **)(lVar2 + 0x28) = param_8;
        *(undefined8 *)(lVar2 + 0x30) = param_9;
        *(int *)(lVar2 + 0x38) = param_5;
        if (param_1 != 0) {
          lVar3 = FUN_003ca2f4(param_1,"crypto/http/http_client.c",0x18e);
          *(long *)(lVar2 + 0x48) = lVar3;
          if (lVar3 == 0) goto LAB_00436f94;
        }
        if (param_2 == 0) goto joined_r0x00436f78;
        lVar3 = FUN_003ca2f4(param_2,"crypto/http/http_client.c",0x191);
        *(long *)(lVar2 + 0x50) = lVar3;
joined_r0x00436f70:
        if (lVar3 != 0) {
joined_r0x00436f78:
          if ((int)param_11 < 1) {
            lVar3 = 0;
          }
          else {
            tVar4 = time((time_t *)0x0);
            lVar3 = tVar4 + (ulong)param_11;
          }
          *(long *)(lVar2 + 0xb0) = lVar3;
          FUN_0037f71c();
          return lVar2;
        }
      }
LAB_00436f94:
      FUN_004356bc();
LAB_00436f98:
      FUN_0037f8c4();
      return 0;
    }
    FUN_00379868();
    uVar5 = 0x3ea;
  }
  else {
    if ((param_6 != 0) && (param_8 == (code *)0x0)) goto LAB_00436d74;
    FUN_00379868();
    uVar5 = 0x3e3;
  }
  FUN_0037995c("crypto/http/http_client.c",uVar5,"OSSL_HTTP_open");
  uVar5 = 0x80106;
LAB_00436da4:
  FUN_00379a5c(0x3d,uVar5,0);
  return 0;
}


// ===== 00436fa0  FUN_00436fa0 =====

undefined8
FUN_00436fa0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5,
            undefined8 param_6,undefined4 param_7,undefined8 param_8,undefined4 param_9,
            undefined4 param_10)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  char *pcVar7;
  
  if (param_1 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/http/http_client.c",0x436,"OSSL_HTTP_set1_request");
    uVar1 = 0xc0102;
LAB_0043706c:
    FUN_00379a5c(0x3d,uVar1,0);
  }
  else {
    if ((*(long *)(param_1 + 0x40) == 0) || (*(int *)(param_1 + 0x38) != 0)) {
      lVar6 = 0;
    }
    else {
      lVar6 = *(long *)(param_1 + 0x48);
      if (lVar6 == 0) {
        FUN_00379868();
        FUN_0037995c("crypto/http/http_client.c",0x43b,"OSSL_HTTP_set1_request");
        uVar1 = 0x80106;
        goto LAB_0043706c;
      }
    }
    *(undefined8 *)(param_1 + 0x98) = param_8;
    iVar3 = FUN_0043585c(param_1,param_5 != 0,lVar6,*(undefined8 *)(param_1 + 0x50),param_2);
    if (iVar3 != 0) {
      pcVar7 = *(char **)(param_1 + 0x48);
      if (pcVar7 == (char *)0x0) {
        bVar2 = false;
        iVar3 = FUN_0040caf8(param_3);
      }
      else {
        bVar2 = *pcVar7 != '\0';
        iVar3 = FUN_0040caf8(param_3);
      }
      if (0 < iVar3) {
        iVar3 = 0;
        do {
          lVar6 = FUN_0040cb0c(param_3,iVar3);
          if (bVar2) {
            iVar4 = FUN_003cab04(&DAT_001eb046,*(undefined8 *)(lVar6 + 8));
            bVar2 = iVar4 != 0;
          }
          iVar4 = FUN_00435a30(param_1,*(undefined8 *)(lVar6 + 8),*(undefined8 *)(lVar6 + 0x10));
          if (iVar4 == 0) {
            return 0;
          }
          iVar3 = iVar3 + 1;
          iVar4 = FUN_0040caf8(param_3);
        } while (iVar3 < iVar4);
      }
      if (((!bVar2) || (iVar3 = FUN_00435a30(param_1,&DAT_001ca287,pcVar7), iVar3 != 0)) &&
         (iVar3 = FUN_00435b44(param_1,param_6,param_7,param_9,param_10), iVar3 != 0)) {
        uVar5 = FUN_00435cf4(param_1,param_4,param_5);
        return uVar5;
      }
    }
  }
  return 0;
}


// ===== 00437198  FUN_00437198 =====

long FUN_00437198(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  char *pcVar4;
  undefined1 *puVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStack_e8 [200];
  
  if (param_1 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/http/http_client.c",0x453,"OSSL_HTTP_exchange");
    uVar8 = 0xc0102;
  }
  else {
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = 0;
    }
    lVar7 = FUN_00436ba8(param_1);
    if (lVar7 != 0) {
      iVar6 = FUN_0037dcfc();
      lVar1 = 0;
      if (iVar6 != 0) {
        lVar1 = lVar7;
      }
      return lVar1;
    }
    if (*(long *)(param_1 + 0xb8) == 0) {
      uVar9 = FUN_0037a6b8();
      uVar10 = (uint)(uVar9 >> 0x17) & 0x1ff;
      uVar12 = (uint)uVar9;
      if ((int)uVar12 < 0) {
        uVar10 = 2;
      }
      if ((uVar10 != 0x14) && (uVar10 != 0x3d)) {
        uVar11 = 0x7fffff;
        if ((int)uVar12 < 0) {
          uVar11 = 0x7fffffff;
        }
        uVar11 = uVar11 & uVar12;
        if ((uVar11 != 0x93 || uVar10 != 0x3a) &&
           (uVar10 != 0x20 || uVar11 != 0x67 && uVar11 != 0x93)) {
          return 0;
        }
      }
      if (*(long *)(param_1 + 0x48) != 0) {
        puVar2 = &DAT_001c717f;
        if (*(int *)(param_1 + 0x38) != 0) {
          puVar2 = &DAT_001cc673;
        }
        puVar3 = &DAT_001c717f;
        puVar5 = &DAT_001c717f;
        if (*(undefined1 **)(param_1 + 0x50) != (undefined1 *)0x0) {
          puVar3 = *(undefined1 **)(param_1 + 0x50);
          puVar5 = &DAT_001d9efd;
        }
        FUN_0037cd5c(auStack_e8,200,"server=http%s://%s%s%s",puVar2,*(long *)(param_1 + 0x48),puVar5
                     ,puVar3);
        FUN_0037aeac(1,auStack_e8);
      }
      if (*(long *)(param_1 + 0x40) != 0) {
        FUN_0037aeac(2," proxy=");
      }
      if (uVar9 != 0) {
        return 0;
      }
      pcVar4 = ", likely because it requires the use of TLS";
      if (*(int *)(param_1 + 0x38) != 0) {
        pcVar4 = " violating the protocol";
      }
      FUN_0037cd5c(auStack_e8,200," peer has disconnected%s",pcVar4);
      FUN_0037aeac(1,auStack_e8);
      return 0;
    }
    if (param_2 != (undefined8 *)0x0) {
      uVar8 = FUN_003ca2f4(*(long *)(param_1 + 0xb8),"crypto/http/http_client.c",0x461);
      *param_2 = uVar8;
      return 0;
    }
    FUN_00379868();
    FUN_0037995c("crypto/http/http_client.c",0x45e,"OSSL_HTTP_exchange");
    uVar8 = 0x74;
  }
  FUN_00379a5c(0x3d,uVar8,0);
  return 0;
}


// ===== 004373d0  FUN_004373d0 =====

/* WARNING: Removing unreachable block (ram,0x00437554) */

long FUN_004373d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                 undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined8 param_12,
                 uint param_13)

{
  char *__s1;
  int iVar1;
  int iVar2;
  int iVar3;
  time_t tVar4;
  char *__s1_00;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  char *local_90;
  undefined4 local_84;
  long local_80;
  undefined8 local_78;
  undefined8 local_70 [2];
  
  uVar10 = (ulong)param_13;
  if ((int)param_13 < 1) {
    lVar7 = 0;
  }
  else {
    tVar4 = time((time_t *)0x0);
    lVar7 = tVar4 + uVar10;
  }
  if (param_1 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/http/http_client.c",0x4aa,"OSSL_HTTP_get");
    FUN_00379a5c(0x3d,0xc0102,0);
  }
  else {
    __s1_00 = (char *)FUN_003ca2f4(param_1,"crypto/http/http_client.c",0x4ad);
    if (__s1_00 != (char *)0x0) {
      iVar1 = FUN_00438514(__s1_00,&local_84,0,local_70,&local_78,0,&local_80,0,0);
      if (iVar1 == 0) {
LAB_00437870:
        lVar6 = 0;
LAB_00437874:
        FUN_003c86b4(__s1_00,"crypto/http/http_client.c",0x4ed);
        return lVar6;
      }
      iVar1 = 0;
LAB_004374a4:
      lVar5 = FUN_00436cfc(local_70[0],local_78,param_2,param_3,local_84,param_4,param_5,param_6,
                           param_7,param_8,(int)uVar10);
      iVar3 = iVar1;
      if (iVar1 < 0x32) {
        iVar3 = 0x31;
      }
      iVar1 = iVar1 + -1;
      do {
        local_90 = (char *)0x0;
        if (lVar5 != 0) {
          iVar2 = FUN_00436fa0(lVar5,local_80,param_9,0,0,param_10,param_11,param_12,0xffffffff,0);
          if (iVar2 == 0) {
            FUN_004356bc(lVar5);
            lVar6 = 0;
            lVar5 = 0;
            FUN_003c86b4(local_80,"crypto/http/http_client.c",0x4ca);
            goto LAB_0043757c;
          }
          lVar6 = FUN_00437198(lVar5,&local_90);
          FUN_003c86b4(local_80,"crypto/http/http_client.c",0x4ca);
          if (lVar6 == 0) goto LAB_0043757c;
LAB_00437800:
          FUN_003c86b4(local_70[0],"crypto/http/http_client.c",0x4e5);
          FUN_003c86b4(local_78,"crypto/http/http_client.c",0x4e6);
          if ((lVar5 != 0) && (*(code **)(lVar5 + 0x28) != (code *)0x0)) {
            lVar7 = (**(code **)(lVar5 + 0x28))
                              (*(undefined8 *)(lVar5 + 0x18),*(undefined8 *)(lVar5 + 0x30),0,
                               lVar6 != 0);
            if (lVar7 == 0) {
              FUN_004356bc(lVar5);
              FUN_0037db50(lVar6);
              goto LAB_00437870;
            }
            *(long *)(lVar5 + 0x18) = lVar7;
          }
          FUN_004356bc(lVar5);
          goto LAB_00437874;
        }
        lVar6 = 0;
        FUN_003c86b4(local_80,"crypto/http/http_client.c",0x4ca);
LAB_0043757c:
        __s1 = local_90;
        if (local_90 == (char *)0x0) goto LAB_00437800;
        if (iVar3 == iVar1 + 1) {
          uVar8 = 0x73;
          uVar9 = 0x48b;
LAB_0043771c:
          FUN_00379868();
          FUN_0037995c("crypto/http/http_client.c",uVar9,"redirection_ok");
LAB_004377d8:
          FUN_00379a5c(0x3d,uVar8,0);
          FUN_003c86b4(local_90,"crypto/http/http_client.c",0x4e3);
          lVar6 = 0;
          goto LAB_00437800;
        }
        if (((*local_90 != '/') && (iVar2 = strncmp(__s1_00,"https:",6), iVar2 == 0)) &&
           (iVar2 = strncmp(__s1,"https:",6), iVar2 != 0)) {
          uVar8 = 0x70;
          uVar9 = 0x492;
          goto LAB_0043771c;
        }
        tVar4 = time((time_t *)0x0);
        if (lVar7 != 0) {
          uVar10 = lVar7 - tVar4;
          if (tVar4 <= lVar7) {
            if (0x7ffffffe < (long)uVar10) {
              uVar10 = 0x7fffffff;
            }
            goto LAB_004375f0;
          }
          FUN_00379868();
          FUN_0037995c("crypto/http/http_client.c",0x207,"may_still_retry");
          uVar8 = 0x81;
          goto LAB_004377d8;
        }
LAB_004375f0:
        FUN_0037e4bc(param_4,1,0,0);
        FUN_003c86b4(__s1_00,"crypto/http/http_client.c",0x4cf);
        __s1_00 = local_90;
        if (*local_90 != '/') goto LAB_00437644;
        local_80 = FUN_003ca2f4(local_90,"crypto/http/http_client.c",0x4d2);
        iVar1 = iVar1 + 1;
        if (local_80 == 0) {
          FUN_003c86b4(local_70[0],"crypto/http/http_client.c",0x4d4);
          FUN_003c86b4(local_78,"crypto/http/http_client.c",0x4d5);
          if (((lVar5 != 0) && (*(code **)(lVar5 + 0x28) != (code *)0x0)) &&
             (lVar7 = (**(code **)(lVar5 + 0x28))
                                (*(undefined8 *)(lVar5 + 0x18),*(undefined8 *)(lVar5 + 0x30),0,1),
             lVar7 != 0)) {
            *(long *)(lVar5 + 0x18) = lVar7;
          }
          FUN_004356bc(lVar5);
          FUN_0037db50(0);
          FUN_003c86b4(__s1_00,"crypto/http/http_client.c",0x4d8);
          return 0;
        }
      } while( true );
    }
  }
  return 0;
LAB_00437644:
  FUN_003c86b4(local_70[0],"crypto/http/http_client.c",0x4dd);
  FUN_003c86b4(local_78,"crypto/http/http_client.c",0x4de);
  if (((lVar5 != 0) && (*(code **)(lVar5 + 0x28) != (code *)0x0)) &&
     (lVar6 = (**(code **)(lVar5 + 0x28))
                        (*(undefined8 *)(lVar5 + 0x18),*(undefined8 *)(lVar5 + 0x30),0,1),
     lVar6 != 0)) {
    *(long *)(lVar5 + 0x18) = lVar6;
  }
  iVar1 = iVar1 + 2;
  FUN_004356bc(lVar5);
  iVar3 = FUN_00438514(__s1_00,&local_84,0,local_70,&local_78,0,&local_80,0,0);
  lVar6 = 0;
  if (iVar3 == 0) goto LAB_00437874;
  goto LAB_004374a4;
}


// ===== 004378b8  FUN_004378b8 =====

undefined8 FUN_004378b8(long param_1,undefined4 param_2)

{
  long lVar1;
  
  if ((param_1 != 0) && (*(code **)(param_1 + 0x28) != (code *)0x0)) {
    lVar1 = (**(code **)(param_1 + 0x28))
                      (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x30),0,param_2);
    if (lVar1 == 0) {
      FUN_004356bc(param_1);
      return 0;
    }
    *(long *)(param_1 + 0x18) = lVar1;
  }
  FUN_004356bc(param_1);
  return 1;
}


// ===== 00437930  FUN_00437930 =====

long FUN_00437930(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12,
                 undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                 undefined4 param_17,undefined8 param_18,undefined4 param_19,undefined4 param_20)

{
  int iVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  
  if ((param_1 == (long *)0x0) || (lVar5 = *param_1, lVar5 == 0)) {
    lVar5 = FUN_00436cfc(param_2,param_3,param_6,param_7,param_5,param_8,param_9,param_10,param_11,
                         param_12,param_19);
    if (lVar5 != 0) {
      param_19 = 0xffffffff;
      goto LAB_004379a0;
    }
LAB_00437a60:
    lVar2 = 0;
  }
  else {
LAB_004379a0:
    iVar1 = FUN_00436fa0(lVar5,param_4,param_13,param_14,param_15,param_16,param_17,param_18,
                         param_19,param_20);
    if (iVar1 == 0) {
      lVar2 = 0;
      pcVar4 = *(code **)(lVar5 + 0x28);
    }
    else {
      lVar2 = FUN_00437198(lVar5,0);
      if ((lVar2 != 0) && (*(int *)(lVar5 + 0xa0) != 0)) goto joined_r0x00437a64;
      pcVar4 = *(code **)(lVar5 + 0x28);
    }
    if (pcVar4 != (code *)0x0) {
      lVar3 = (*pcVar4)(*(undefined8 *)(lVar5 + 0x18),*(undefined8 *)(lVar5 + 0x30),0,lVar2 != 0);
      if (lVar3 == 0) {
        FUN_004356bc(lVar5);
        FUN_0037db50(lVar2);
        lVar5 = 0;
        goto LAB_00437a60;
      }
      *(long *)(lVar5 + 0x18) = lVar3;
    }
    FUN_004356bc(lVar5);
    lVar5 = 0;
  }
joined_r0x00437a64:
  if (param_1 != (long *)0x0) {
    *param_1 = lVar5;
  }
  return lVar2;
}


// ===== 00437a6c  FUN_00437a6c =====

undefined4
FUN_00437a6c(long param_1,long param_2,char *param_3,char *param_4,char *param_5,uint param_6,
            long param_7,long param_8)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  char *__s1;
  long lVar4;
  time_t tVar5;
  size_t sVar6;
  long lVar7;
  char *pcVar8;
  ulong uVar9;
  undefined4 uVar10;
  long lVar11;
  ulong uVar12;
  
  __s1 = (char *)FUN_003c83a4(0x2000,"crypto/http/http_client.c",0x54c);
  FUN_004388f4();
  lVar4 = FUN_0037db44();
  if ((int)param_6 < 1) {
    lVar11 = 0;
    if (param_1 != 0) goto LAB_00437af0;
LAB_00437afc:
    FUN_00379868();
    FUN_0037995c("crypto/http/http_client.c",0x556,"OSSL_HTTP_proxy_connect");
    FUN_00379a5c(0x3d,0xc0102,0);
LAB_00437b2c:
    uVar10 = 0;
LAB_00437b30:
    if (lVar4 == 0) goto LAB_00437b58;
  }
  else {
    tVar5 = time((time_t *)0x0);
    lVar11 = tVar5 + (ulong)param_6;
    if (param_1 == 0) goto LAB_00437afc;
LAB_00437af0:
    if ((param_2 == 0) || ((param_7 != 0 && (param_8 == 0)))) goto LAB_00437afc;
    if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
      param_3 = "443";
    }
    if ((__s1 == (char *)0x0) || (lVar4 == 0)) {
      pcVar8 = "%s: out of memory";
LAB_00437d90:
      FUN_0037b9f8(param_7,pcVar8,param_8);
      goto LAB_00437b2c;
    }
    FUN_0037eda0(lVar4,param_1);
    FUN_0037b9f8(lVar4,"CONNECT %s:%s HTTP/1.0\r\n",param_2,param_3);
    FUN_0037b9f8(lVar4,"Proxy-Connection: Keep-Alive\r\n");
    if (param_4 == (char *)0x0) {
LAB_00437cf0:
      FUN_0037b9f8(lVar4,&DAT_001d6868);
      do {
        iVar2 = FUN_0037e4bc(lVar4,0xb,0,0);
        if (iVar2 != 0) break;
        iVar2 = FUN_0037dd28(lVar4,8);
      } while (iVar2 != 0);
      do {
        iVar2 = FUN_0037f2ec(lVar4,lVar11,100);
        if (iVar2 < 1) {
          pcVar8 = "timed out";
          if (iVar2 != 0) {
            pcVar8 = "failed waiting for data";
          }
          FUN_0037b9f8(param_7,"%s: HTTP CONNECT %s\n",param_8,pcVar8);
          goto LAB_00437b2c;
        }
        uVar3 = FUN_0037e7f0(lVar4,__s1,0x2000);
      } while ((int)uVar3 < 0xd);
      uVar12 = (ulong)uVar3;
      iVar2 = strncmp(__s1,"HTTP/",5);
      if (iVar2 != 0) {
        FUN_00379868();
        FUN_0037995c("crypto/http/http_client.c",0x5a3,"OSSL_HTTP_proxy_connect");
        FUN_00379a5c(0x3d,0x7e,0);
        pcVar8 = "%s: HTTP CONNECT failed, non-HTTP response\n";
        goto LAB_00437d90;
      }
      iVar2 = strncmp(__s1 + 5,"1.",2);
      if (iVar2 != 0) {
        FUN_00379868();
        FUN_0037995c("crypto/http/http_client.c",0x5aa,"OSSL_HTTP_proxy_connect");
        FUN_00379a5c(0x3d,0x6a,0);
        FUN_0037b9f8(param_7,"%s: HTTP CONNECT failed, bad HTTP version %.*s\n",param_8,3,__s1 + 5);
        goto LAB_00437b2c;
      }
      iVar2 = strncmp(__s1 + 8," 2",2);
      if (iVar2 != 0) {
        iVar2 = FUN_003c475c(__s1[8],8);
        pcVar8 = __s1 + 8;
        if (iVar2 != 0) {
          pcVar8 = __s1 + 9;
        }
        do {
          iVar2 = FUN_003c475c(__s1[uVar12 - 1],8);
          if (iVar2 == 0) goto LAB_00437ee4;
          uVar9 = uVar12 - 1;
          bVar1 = 0 < (long)uVar12;
          uVar12 = uVar9;
        } while (uVar9 != 0 && bVar1);
        uVar12 = 0;
LAB_00437ee4:
        __s1[(int)uVar12] = '\0';
        FUN_00379868();
        FUN_0037995c("crypto/http/http_client.c",0x5ba,"OSSL_HTTP_proxy_connect");
        FUN_00379a5c(0x3d,100,"reason=%s",pcVar8);
        FUN_0037b9f8(param_7,"%s: HTTP CONNECT failed, reason=%s\n",param_8,pcVar8);
        goto LAB_00437b2c;
      }
      uVar10 = 1;
      do {
        iVar2 = FUN_0037e7f0(lVar4,__s1,0x2000);
      } while (2 < iVar2);
      goto LAB_00437b30;
    }
    sVar6 = strlen(param_4);
    uVar12 = sVar6 + 1;
    if (param_5 != (char *)0x0) {
      sVar6 = strlen(param_5);
      uVar12 = sVar6 + uVar12;
    }
    lVar7 = FUN_003c83a4(uVar12 + 1,"crypto/http/http_client.c",0x571);
    if (lVar7 != 0) {
      pcVar8 = "";
      if (param_5 != (char *)0x0) {
        pcVar8 = param_5;
      }
      iVar2 = FUN_0037cd5c(lVar7,uVar12 + 1,"%s:%s",param_4,pcVar8);
      if (iVar2 == (int)uVar12) {
        uVar9 = uVar12 / 3;
        if (uVar12 != uVar9 * 3) {
          uVar9 = uVar9 + 1;
        }
        pcVar8 = (char *)FUN_003c83a4(uVar9 << 2 | 1,"crypto/http/http_client.c",0x535);
        if (pcVar8 != (char *)0x0) {
          iVar2 = FUN_00412c4c(pcVar8,lVar7,iVar2);
          if ((-1 < iVar2) && ((ulong)(long)iVar2 <= uVar9 << 2)) {
            FUN_0037b9f8(lVar4,"Proxy-Authorization: Basic %s\r\n",pcVar8);
            sVar6 = strlen(pcVar8);
            FUN_003c893c(pcVar8,sVar6,"crypto/http/http_client.c",0x57a);
            FUN_003c893c(lVar7,uVar12,"crypto/http/http_client.c",0x57d);
            goto LAB_00437cf0;
          }
          FUN_003c86b4(pcVar8,"crypto/http/http_client.c",0x53b);
        }
      }
      FUN_003c893c(lVar7,uVar12,"crypto/http/http_client.c",0x57d);
    }
    uVar10 = 0;
  }
  FUN_0037e4bc(lVar4,0xb,0,0);
  FUN_0037edf4(lVar4);
  FUN_0037db50(lVar4);
LAB_00437b58:
  FUN_003c86b4(__s1,"crypto/http/http_client.c",0x5d3);
  return uVar10;
}


// ===== 00437f58  FUN_00437f58 =====

undefined8
FUN_00437f58(char *param_1,long *param_2,long *param_3,long *param_4,long *param_5,uint *param_6,
            long *param_7,long *param_8,long *param_9)

{
  byte *__s;
  byte *pbVar1;
  char *pcVar2;
  byte *pbVar3;
  char *__s_00;
  byte *pbVar4;
  byte *pbVar5;
  char *__s_01;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  size_t sVar11;
  byte *pbVar12;
  long lVar13;
  long lVar14;
  char *pcVar15;
  char *__s_02;
  uint local_64;
  
  if (param_2 != (long *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (long *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (long *)0x0) {
    *param_4 = 0;
  }
  if (param_5 != (long *)0x0) {
    *param_5 = 0;
  }
  if (param_6 != (uint *)0x0) {
    *param_6 = 0;
  }
  if (param_7 != (long *)0x0) {
    *param_7 = 0;
  }
  if (param_9 != (long *)0x0) {
    *param_9 = 0;
  }
  if (param_8 != (long *)0x0) {
    *param_8 = 0;
  }
  if (param_1 == (char *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/http/http_lib.c",0x46,"OSSL_parse_url");
    FUN_00379a5c(0x3d,0xc0102,0);
    return 0;
  }
  pcVar9 = strstr(param_1,"://");
  pcVar15 = param_1;
  __s_02 = param_1;
  if (pcVar9 == (char *)0x0) {
LAB_0043800c:
    pcVar10 = strchr(__s_02,0x40);
    pcVar9 = __s_02;
    __s_00 = __s_02;
    if (pcVar10 != (char *)0x0) {
      __s_00 = pcVar10 + 1;
      pcVar9 = pcVar10;
    }
    if (*__s_00 == '[') {
      pcVar10 = strchr(__s_00 + 1,0x5d);
      if (pcVar10 == (char *)0x0) goto LAB_004383a0;
      pcVar10 = pcVar10 + 1;
    }
    else {
      pcVar10 = strchr(__s_00,0x3a);
      if ((((pcVar10 == (char *)0x0) && (pcVar10 = strchr(__s_00,0x2f), pcVar10 == (char *)0x0)) &&
          (pcVar10 = strchr(__s_00,0x3f), pcVar10 == (char *)0x0)) &&
         (pcVar10 = strchr(__s_00,0x23), pcVar10 == (char *)0x0)) {
        sVar11 = strlen(__s_00);
        pcVar10 = __s_00 + sVar11;
      }
    }
    pcVar2 = pcVar10 + 1;
    __s_01 = pcVar10 + 1;
    if (*pcVar10 != ':') {
      pcVar2 = pcVar10;
      __s_01 = "0";
    }
    iVar8 = sscanf(__s_01,"%u",&local_64);
    if ((iVar8 < 1) || (local_64 >> 0x10 != 0)) {
      FUN_00379868();
      FUN_0037995c("crypto/http/http_lib.c",0x7a,"OSSL_parse_url");
      FUN_00379a5c(0x3d,0x7b,&DAT_001d3a58,__s_01);
      goto LAB_004383cc;
    }
    lVar13 = 0;
    do {
      lVar14 = lVar13;
      lVar13 = lVar14 + 1;
    } while ((byte)__s_01[lVar14] - 0x30 < 10);
    lVar13 = lVar14;
    if (__s_01 != pcVar2) {
      lVar13 = 0;
    }
    __s = (byte *)(pcVar2 + lVar13);
    if (0x3f < *__s || (1L << ((ulong)*__s & 0x3f) & 0x8000800800000001U) == 0) {
      FUN_00379868();
      FUN_0037995c("crypto/http/http_lib.c",0x85,"OSSL_parse_url");
      FUN_00379a5c(0x3d,0x7d,0);
      goto LAB_004383a0;
    }
    sVar11 = strlen((char *)__s);
    pbVar1 = __s + sVar11;
    pbVar12 = (byte *)strchr((char *)__s,0x3f);
    pbVar3 = __s;
    if (pbVar12 != (byte *)0x0) {
      pbVar3 = pbVar12;
    }
    pbVar4 = pbVar1;
    pbVar6 = pbVar1;
    if (pbVar12 != (byte *)0x0 && param_8 != (long *)0x0) {
      pbVar4 = pbVar12 + 1;
      pbVar6 = pbVar12;
    }
    pbVar12 = (byte *)strchr((char *)pbVar3,0x23);
    pbVar3 = pbVar12;
    if (pbVar4 != pbVar6) {
      pbVar3 = pbVar6;
    }
    pbVar5 = pbVar1;
    pbVar7 = pbVar1;
    if (pbVar12 != (byte *)0x0) {
      pbVar5 = pbVar12 + 1;
      pbVar6 = pbVar3;
      pbVar7 = pbVar12;
    }
    if (param_2 == (long *)0x0) {
LAB_00438210:
      if (param_4 != (long *)0x0) {
        lVar13 = FUN_003ca354(__s_00,(long)pcVar10 - (long)__s_00,"crypto/http/http_lib.c",0x23);
        *param_4 = lVar13;
        if (lVar13 == 0) goto LAB_004383cc;
      }
      if (param_5 != (long *)0x0) {
        lVar13 = FUN_003ca354(__s_01,lVar14,"crypto/http/http_lib.c",0x23);
        *param_5 = lVar13;
        if (lVar13 == 0) goto LAB_004383cc;
      }
      if (param_3 != (long *)0x0) {
        lVar13 = FUN_003ca354(__s_02,(long)pcVar9 - (long)__s_02,"crypto/http/http_lib.c",0x23);
        *param_3 = lVar13;
        if (lVar13 == 0) goto LAB_004383cc;
      }
      if (param_8 != (long *)0x0) {
        lVar13 = FUN_003ca354(pbVar4,(long)pbVar7 - (long)pbVar4,"crypto/http/http_lib.c",0x23);
        *param_8 = lVar13;
        if (lVar13 == 0) goto LAB_004383cc;
      }
      if (param_9 != (long *)0x0) {
        lVar13 = FUN_003ca354(pbVar5,(long)pbVar1 - (long)pbVar5,"crypto/http/http_lib.c",0x23);
        *param_9 = lVar13;
        if (lVar13 == 0) goto LAB_004383cc;
      }
      if (param_6 != (uint *)0x0) {
        *param_6 = local_64;
      }
      if (*__s == 0x2f) {
        if (param_7 == (long *)0x0) {
          return 1;
        }
        lVar13 = FUN_003ca354(__s,(long)pbVar6 - (long)__s,"crypto/http/http_lib.c",0x23);
        *param_7 = lVar13;
        if (lVar13 != 0) {
          return 1;
        }
      }
      else {
        if (param_7 == (long *)0x0) {
          return 1;
        }
        lVar13 = FUN_003c83a4(pbVar6 + (2 - (long)__s),"crypto/http/http_lib.c",0xac);
        *param_7 = lVar13;
        if (lVar13 != 0) {
          FUN_0037cd5c(lVar13,pbVar6 + (2 - (long)__s),&DAT_001c1888,__s);
          return 1;
        }
      }
      goto LAB_004383cc;
    }
    lVar13 = FUN_003ca354(param_1,(long)pcVar15 - (long)param_1,"crypto/http/http_lib.c",0x23);
    *param_2 = lVar13;
    if (lVar13 != 0) goto LAB_00438210;
    lVar13 = 0;
  }
  else {
    if (pcVar9 != param_1) {
      __s_02 = pcVar9 + 3;
      pcVar15 = pcVar9;
      goto LAB_0043800c;
    }
LAB_004383a0:
    FUN_00379868();
    FUN_0037995c("crypto/http/http_lib.c",0xb3,"OSSL_parse_url");
    FUN_00379a5c(0x3d,0x65,0);
LAB_004383cc:
    if (param_2 == (long *)0x0) goto LAB_004383e8;
    lVar13 = *param_2;
  }
  FUN_003c86b4(lVar13,"crypto/http/http_lib.c",0x29);
  *param_2 = 0;
LAB_004383e8:
  if (param_3 != (long *)0x0) {
    FUN_003c86b4(*param_3,"crypto/http/http_lib.c",0x29);
    *param_3 = 0;
  }
  if (param_4 != (long *)0x0) {
    FUN_003c86b4(*param_4,"crypto/http/http_lib.c",0x29);
    *param_4 = 0;
  }
  if (param_5 != (long *)0x0) {
    FUN_003c86b4(*param_5,"crypto/http/http_lib.c",0x29);
    *param_5 = 0;
  }
  if (param_7 != (long *)0x0) {
    FUN_003c86b4(*param_7,"crypto/http/http_lib.c",0x29);
    *param_7 = 0;
  }
  if (param_8 != (long *)0x0) {
    FUN_003c86b4(*param_8,"crypto/http/http_lib.c",0x29);
    *param_8 = 0;
  }
  if (param_9 == (long *)0x0) {
    return 0;
  }
  FUN_003c86b4(*param_9,"crypto/http/http_lib.c",0x29);
  *param_9 = 0;
  return 0;
}


// ===== 00438514  FUN_00438514 =====

undefined8
FUN_00438514(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4,
            long *param_5,undefined4 *param_6,undefined8 *param_7,undefined8 *param_8,
            undefined8 *param_9)

{
  char *__s1;
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_74;
  char *local_70;
  char *local_68;
  
  if (param_5 != (long *)0x0) {
    *param_5 = 0;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  uVar3 = FUN_00437f58(param_1,&local_68,param_3,param_4,&local_70,param_6,param_7,param_8,param_9);
  __s1 = local_68;
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  iVar1 = strcmp(local_68,"https");
  if (iVar1 == 0) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 1;
    }
LAB_00438624:
    FUN_003c86b4(__s1,"crypto/http/http_lib.c",0xd9);
    iVar2 = strcmp(local_70,"0");
    if (iVar2 == 0) {
      FUN_003c86b4(local_70,"crypto/http/http_lib.c",0xdd);
      local_70 = "443";
      if (iVar1 != 0) {
        local_70 = "80";
      }
      iVar1 = sscanf(local_70,"%d",&local_74);
      if (iVar1 != 1) goto LAB_004386d0;
      if (param_6 != (undefined4 *)0x0) {
        *param_6 = local_74;
      }
      if (param_5 != (long *)0x0) {
        lVar4 = FUN_003ca2f4(local_70,"crypto/http/http_lib.c",0xe4);
        *param_5 = lVar4;
        if (lVar4 == 0) goto LAB_004386d0;
      }
    }
    else if (param_5 == (long *)0x0) {
      FUN_003c86b4(local_70,"crypto/http/http_lib.c",0xec);
    }
    else {
      *param_5 = (long)local_70;
    }
    uVar3 = 1;
  }
  else {
    if ((*__s1 == '\0') || (iVar2 = strcmp(__s1,"http"), iVar2 == 0)) goto LAB_00438624;
    FUN_00379868();
    FUN_0037995c("crypto/http/http_lib.c",0xd4,"OSSL_HTTP_parse_url");
    FUN_00379a5c(0x3d,0x7c,0);
    FUN_003c86b4(local_68,"crypto/http/http_lib.c",0xd5);
    FUN_003c86b4(local_70,"crypto/http/http_lib.c",0xd6);
LAB_004386d0:
    if (param_3 != (undefined8 *)0x0) {
      FUN_003c86b4(*param_3,"crypto/http/http_lib.c",0x29);
      *param_3 = 0;
    }
    if (param_4 != (undefined8 *)0x0) {
      FUN_003c86b4(*param_4,"crypto/http/http_lib.c",0x29);
      *param_4 = 0;
    }
    if (param_7 != (undefined8 *)0x0) {
      FUN_003c86b4(*param_7,"crypto/http/http_lib.c",0x29);
      *param_7 = 0;
    }
    if (param_8 != (undefined8 *)0x0) {
      FUN_003c86b4(*param_8,"crypto/http/http_lib.c",0x29);
      *param_8 = 0;
    }
    if (param_9 == (undefined8 *)0x0) {
      uVar3 = 0;
    }
    else {
      FUN_003c86b4(*param_9,"crypto/http/http_lib.c",0x29);
      uVar3 = 0;
      *param_9 = 0;
    }
  }
  return uVar3;
}


// ===== 004387a4  FUN_004387a4 =====

char * FUN_004387a4(char *param_1,char *param_2,char *param_3,int param_4)

{
  size_t sVar1;
  char *pcVar2;
  
  if (param_1 == (char *)0x0) {
    pcVar2 = "http_proxy";
    if (param_4 != 0) {
      pcVar2 = "https_proxy";
    }
    param_1 = (char *)FUN_003c5634(pcVar2);
    if (param_1 == (char *)0x0) {
      pcVar2 = "HTTPS_PROXY";
      if (param_4 != 0) {
        pcVar2 = "HTTP_PROXY";
      }
      param_1 = (char *)FUN_003c5634(pcVar2);
      if (param_1 == (char *)0x0) {
        return (char *)0x0;
      }
    }
  }
  if ((param_3 == (char *)0x0) || (*param_1 == '\0')) {
    return (char *)0x0;
  }
  sVar1 = strlen(param_3);
  if ((param_2 != (char *)0x0) ||
     ((param_2 = (char *)FUN_003c5634("no_proxy"), param_2 != (char *)0x0 ||
      (param_2 = (char *)FUN_003c5634("NO_PROXY"), param_2 != (char *)0x0)))) {
    for (pcVar2 = strstr(param_2,param_3); pcVar2 != (char *)0x0;
        pcVar2 = strstr(pcVar2 + 1,param_3)) {
      if ((((pcVar2 == param_2) || (pcVar2[-1] == ',')) || (pcVar2[-1] == ' ')) &&
         (((byte)pcVar2[sVar1] < 0x2d &&
          ((1L << ((ulong)(byte)pcVar2[sVar1] & 0x3f) & 0x100100000001U) != 0)))) {
        return (char *)0x0;
      }
    }
  }
  return param_1;
}


// ===== 004388f4  FUN_004388f4 =====

undefined * FUN_004388f4(void)

{
  return &DAT_0077f3e8;
}


// ===== 00438900  FUN_00438900 =====

uint FUN_00438900(long param_1,void *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  
  uVar5 = 0;
  if ((param_2 != (void *)0x0) && (0 < param_3)) {
    lVar6 = *(long *)(param_1 + 0x38);
    if ((lVar6 == 0) || (*(long *)(param_1 + 0x40) == 0)) {
      uVar5 = 0;
    }
    else {
      FUN_0037dd18(param_1,0xf);
      iVar1 = *(int *)(lVar6 + 0x20);
      iVar3 = *(int *)(lVar6 + 0x24);
      iVar4 = iVar3 + iVar1;
      uVar2 = *(int *)(lVar6 + 4) - iVar4;
      if ((int)uVar2 < param_3) {
        uVar5 = 0;
        do {
          if (iVar1 != 0) {
            if (0 < (int)uVar2) {
              memcpy((void *)(*(long *)(lVar6 + 0x18) + (long)iVar4),param_2,(ulong)uVar2);
              iVar3 = *(int *)(lVar6 + 0x24);
              param_2 = (void *)((long)param_2 + (ulong)uVar2);
              param_3 = param_3 - uVar2;
              uVar5 = uVar2 + uVar5;
              *(uint *)(lVar6 + 0x20) = *(int *)(lVar6 + 0x20) + uVar2;
            }
            do {
              uVar2 = FUN_0037df4c(*(undefined8 *)(param_1 + 0x40),
                                   *(long *)(lVar6 + 0x18) + (long)iVar3);
              if ((int)uVar2 < 1) goto LAB_00438a5c;
              iVar3 = *(int *)(lVar6 + 0x24) + uVar2;
              iVar4 = *(int *)(lVar6 + 0x20) - uVar2;
              *(int *)(lVar6 + 0x20) = iVar4;
              *(int *)(lVar6 + 0x24) = iVar3;
            } while (iVar4 != 0);
          }
          *(undefined4 *)(lVar6 + 0x24) = 0;
          while (*(int *)(lVar6 + 4) <= param_3) {
            uVar2 = FUN_0037df4c(*(undefined8 *)(param_1 + 0x40),param_2,param_3);
            if ((int)uVar2 < 1) {
LAB_00438a5c:
              FUN_0037f294(param_1);
              if (-1 < (int)uVar2) {
                return uVar5;
              }
              if (0 < (int)uVar5) {
                return uVar5;
              }
              return uVar2;
            }
            param_2 = (void *)((long)param_2 + (ulong)uVar2);
            param_3 = param_3 - uVar2;
            uVar5 = uVar2 + uVar5;
            if (param_3 == 0) {
              return uVar5;
            }
          }
          iVar1 = *(int *)(lVar6 + 0x20);
          iVar3 = *(int *)(lVar6 + 0x24);
          iVar4 = iVar3 + iVar1;
          uVar2 = *(int *)(lVar6 + 4) - iVar4;
        } while ((int)uVar2 < param_3);
      }
      else {
        uVar5 = 0;
      }
      memcpy((void *)(*(long *)(lVar6 + 0x18) + (long)iVar4),param_2,(long)param_3);
      uVar5 = uVar5 + param_3;
      *(int *)(lVar6 + 0x20) = *(int *)(lVar6 + 0x20) + param_3;
    }
  }
  return uVar5;
}


// ===== 00438a94  FUN_00438a94 =====

uint FUN_00438a94(long param_1,void *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  int *piVar5;
  
  if (((param_2 == (void *)0x0) || (piVar5 = *(int **)(param_1 + 0x38), piVar5 == (int *)0x0)) ||
     (*(long *)(param_1 + 0x40) == 0)) {
    return 0;
  }
  FUN_0037dd18(param_1,0xf);
  uVar2 = piVar5[4];
  uVar4 = 0;
  while( true ) {
    if (uVar2 != 0) {
      uVar1 = uVar2;
      if ((int)param_3 <= (int)uVar2) {
        uVar1 = param_3;
      }
      memcpy(param_2,(void *)(*(long *)(piVar5 + 2) + (long)piVar5[5]),(long)(int)uVar1);
      uVar4 = uVar1 + uVar4;
      piVar5[4] = piVar5[4] - uVar1;
      piVar5[5] = piVar5[5] + uVar1;
      if ((int)param_3 <= (int)uVar2) {
        return uVar4;
      }
      param_3 = param_3 - uVar1;
      param_2 = (void *)((long)param_2 + (long)(int)uVar1);
    }
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    if (*piVar5 < (int)param_3) goto LAB_00438b64;
    uVar2 = FUN_0037dd7c(uVar3,*(undefined8 *)(piVar5 + 2));
    if ((int)uVar2 < 1) break;
    piVar5[4] = uVar2;
    piVar5[5] = 0;
  }
LAB_00438ba8:
  FUN_0037f294(param_1);
  if (((int)uVar2 < 0) && ((int)uVar4 < 1)) {
    uVar4 = uVar2;
  }
  return uVar4;
LAB_00438b64:
  while (uVar2 = FUN_0037dd7c(uVar3,param_2,param_3), 0 < (int)uVar2) {
    param_3 = param_3 - uVar2;
    uVar4 = uVar2 + uVar4;
    if (param_3 == 0) {
      return uVar4;
    }
    param_2 = (void *)((long)param_2 + (ulong)uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
  }
  goto LAB_00438ba8;
}


// ===== 00438bc8  FUN_00438bc8 =====

void FUN_00438bc8(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  
  sVar1 = strlen(param_2);
  FUN_00438900(param_1,param_2,sVar1);
  return;
}


// ===== 00438bfc  FUN_00438bfc =====

/* WARNING: Removing unreachable block (ram,0x00438cc8) */
/* WARNING: Removing unreachable block (ram,0x00438cec) */

int FUN_00438bfc(long param_1,undefined1 *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  
  puVar8 = *(undefined4 **)(param_1 + 0x38);
  uVar9 = param_3 - 1;
  FUN_0037dd18(param_1,0xf);
  iVar2 = puVar8[4];
  iVar7 = 0;
  do {
    while (iVar2 < 1) {
      iVar2 = FUN_0037dd7c(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(puVar8 + 2),*puVar8);
      if (iVar2 < 1) {
        FUN_0037f294(param_1);
        *param_2 = 0;
        if (-1 < iVar2) {
          return iVar7;
        }
        if (iVar7 < 1) {
          iVar7 = iVar2;
        }
        return iVar7;
      }
      puVar8[4] = iVar2;
      puVar8[5] = 0;
    }
    if ((int)uVar9 < 1) {
      uVar5 = 0;
      puVar8[4] = iVar2;
      puVar8[5] = puVar8[5];
    }
    else {
      lVar6 = *(long *)(puVar8 + 2);
      iVar2 = puVar8[5];
      uVar5 = 0;
      do {
        uVar4 = uVar5;
        cVar1 = *(char *)(lVar6 + iVar2 + uVar4);
        param_2[uVar4] = cVar1;
        if (cVar1 == '\n') {
          param_2 = param_2 + uVar4 + 1;
          iVar2 = (int)(uVar4 + 1);
          iVar7 = iVar2 + iVar7;
          puVar8[4] = puVar8[4] - iVar2;
          puVar8[5] = puVar8[5] + iVar2;
          goto LAB_00438d1c;
        }
        uVar5 = uVar4 + 1;
      } while (((long)uVar5 < (long)(int)puVar8[4]) && (uVar5 < uVar9));
      param_2 = param_2 + uVar4 + 1;
      iVar3 = (int)uVar5;
      iVar2 = puVar8[4] - iVar3;
      iVar7 = iVar3 + iVar7;
      puVar8[4] = iVar2;
      puVar8[5] = puVar8[5] + iVar3;
    }
    uVar9 = uVar9 - (int)uVar5;
  } while (uVar9 != 0);
LAB_00438d1c:
  *param_2 = 0;
  return iVar7;
}


// ===== 00438d68  FUN_00438d68 =====

size_t FUN_00438d68(long param_1,undefined8 param_2,size_t param_3,int *param_4)

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
  undefined1 auVar3 [16];
  uint3 uVar4;
  uint3 uVar5;
  int iVar6;
  void *__dest;
  long lVar7;
  size_t sVar8;
  undefined8 uVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  char *pcVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 (*pauVar16) [16];
  undefined8 *puVar17;
  long lVar18;
  int *piVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
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
  long lVar36;
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
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 uStack_51;
  
  piVar19 = *(int **)(param_1 + 0x38);
  iVar6 = (int)param_2;
  if (iVar6 < 0xd) {
    if (iVar6 < 10) {
      if (iVar6 == 1) {
        lVar7 = *(long *)(param_1 + 0x40);
        piVar19[4] = 0;
        piVar19[5] = 0;
        piVar19[8] = 0;
        piVar19[9] = 0;
        if (lVar7 == 0) {
          return 0;
        }
        param_2 = 1;
        goto LAB_004390a4;
      }
      if (iVar6 == 2) {
        if (0 < piVar19[4]) {
          return 0;
        }
        lVar7 = *(long *)(param_1 + 0x40);
        param_2 = 2;
        goto LAB_004390a4;
      }
      if (iVar6 == 3) {
        return (long)piVar19[8];
      }
    }
    else {
      if (iVar6 == 10) {
        if (piVar19[4] != 0) {
          return (long)piVar19[4];
        }
        lVar7 = *(long *)(param_1 + 0x40);
        if (lVar7 == 0) {
          return 0;
        }
        param_2 = 10;
        goto LAB_004390a4;
      }
      if (iVar6 == 0xb) {
        lVar7 = *(long *)(param_1 + 0x40);
        if (lVar7 == 0) {
          return 0;
        }
        if (piVar19[8] < 1) {
          uVar9 = 0xb;
        }
        else {
          FUN_0037dd18(param_1,0xf);
          iVar6 = piVar19[8];
          while (0 < iVar6) {
            iVar6 = FUN_0037df4c(*(undefined8 *)(param_1 + 0x40),
                                 *(long *)(piVar19 + 6) + (long)piVar19[9]);
            FUN_0037f294(param_1);
            if (iVar6 < 1) {
              return (long)iVar6;
            }
            piVar19[8] = piVar19[8] - iVar6;
            piVar19[9] = piVar19[9] + iVar6;
            FUN_0037dd18(param_1,0xf);
            iVar6 = piVar19[8];
          }
          piVar19[8] = 0;
          piVar19[9] = 0;
          uVar9 = 0xb;
          lVar7 = *(long *)(param_1 + 0x40);
        }
LAB_004390f8:
        sVar8 = FUN_0037e4bc(lVar7,uVar9,param_3,param_4);
        FUN_0037f294(param_1);
        return sVar8;
      }
      if (iVar6 == 0xc) {
        lVar7 = FUN_0037ec08(param_4,0x75,(long)*piVar19,0);
        if (lVar7 < 1) {
          return 0;
        }
        lVar7 = FUN_0037ec08(param_4,0x75,(long)piVar19[1],1);
        if (0 < lVar7) {
          return 1;
        }
        return 0;
      }
    }
  }
  else if (iVar6 < 0x74) {
    if (iVar6 == 0xd) {
      if (piVar19[8] != 0) {
        return (long)piVar19[8];
      }
      lVar7 = *(long *)(param_1 + 0x40);
      if (lVar7 == 0) {
        return 0;
      }
      param_2 = 0xd;
      goto LAB_004390a4;
    }
    if (iVar6 == 0x1d) {
      FUN_00438a94(param_1,&uStack_51,0);
      sVar8 = (long)piVar19[4];
      if ((long)param_3 <= (long)piVar19[4]) {
        sVar8 = param_3;
      }
      memcpy(param_4,(void *)(*(long *)(piVar19 + 2) + (long)piVar19[6]),sVar8);
      return sVar8;
    }
    if (iVar6 == 0x65) {
      if (*(long *)(param_1 + 0x40) == 0) {
        return 0;
      }
      FUN_0037dd18(param_1,0xf);
      lVar7 = *(long *)(param_1 + 0x40);
      uVar9 = 0x65;
      goto LAB_004390f8;
    }
  }
  else {
    if (iVar6 == 0x74) {
      uVar2 = piVar19[4];
      uVar11 = (ulong)uVar2;
      if ((int)uVar2 < 1) {
        return 0;
      }
      lVar7 = *(long *)(piVar19 + 2);
      lVar18 = (long)piVar19[5];
      if (uVar2 < 8) {
        uVar14 = 0;
        sVar8 = 0;
      }
      else {
        if (uVar2 < 0x20) {
          sVar8 = 0;
          uVar15 = 0;
        }
        else {
          lVar12 = 0;
          lVar20 = 0;
          lVar29 = 0;
          lVar30 = 0;
          lVar21 = 0;
          lVar22 = 0;
          lVar35 = 0;
          lVar36 = 0;
          lVar25 = 0;
          lVar26 = 0;
          pauVar16 = (undefined1 (*) [16])(lVar18 + lVar7 + 0x10);
          lVar27 = 0;
          lVar28 = 0;
          lVar23 = 0;
          lVar24 = 0;
          lVar43 = 0;
          lVar44 = 0;
          lVar33 = 0;
          lVar34 = 0;
          lVar45 = 0;
          lVar46 = 0;
          lVar31 = 0;
          lVar32 = 0;
          lVar47 = 0;
          lVar48 = 0;
          lVar39 = 0;
          lVar40 = 0;
          lVar41 = 0;
          lVar42 = 0;
          lVar37 = 0;
          lVar38 = 0;
          lVar49 = 0;
          lVar50 = 0;
          uVar14 = uVar11 & 0x7fffffe0;
          uVar15 = uVar14;
          do {
            pauVar1 = pauVar16 + -1;
            auVar3 = *pauVar16;
            uVar15 = uVar15 - 0x20;
            pauVar16 = pauVar16 + 2;
            auVar51[8] = 10;
            auVar51._0_8_ = 0xa0a0a0a0a0a0a0a;
            auVar51[9] = 10;
            auVar51[10] = 10;
            auVar51[0xb] = 10;
            auVar51[0xc] = 10;
            auVar51[0xd] = 10;
            auVar51[0xe] = 10;
            auVar51[0xf] = 10;
            auVar51 = NEON_cmeq(*pauVar1,auVar51,1);
            auVar52[8] = 10;
            auVar52._0_8_ = 0xa0a0a0a0a0a0a0a;
            auVar52[9] = 10;
            auVar52[10] = 10;
            auVar52[0xb] = 10;
            auVar52[0xc] = 10;
            auVar52[0xd] = 10;
            auVar52[0xe] = 10;
            auVar52[0xf] = 10;
            auVar52 = NEON_cmeq(auVar3,auVar52,1);
            uVar4 = CONCAT12(auVar51[9],auVar51._8_2_) & 0xff00ff;
            uVar5 = CONCAT12(auVar52[9],auVar52._8_2_) & 0xff00ff;
            lVar23 = lVar23 + (ulong)(auVar51[0xc] & 1);
            lVar24 = lVar24 + (ulong)(auVar51[0xd] & 1);
            lVar43 = lVar43 + (ulong)(auVar51[0xe] & 1);
            lVar44 = lVar44 + (ulong)(auVar51[0xf] & 1);
            lVar27 = lVar27 + (ulong)(auVar51[10] & 1);
            lVar28 = lVar28 + (ulong)(auVar51[0xb] & 1);
            lVar35 = lVar35 + (ulong)(auVar51[6] & 1);
            lVar36 = lVar36 + (ulong)(auVar51[7] & 1);
            lVar25 = lVar25 + (ulong)((byte)uVar4 & 1);
            lVar26 = lVar26 + (ulong)((byte)(uVar4 >> 0x10) & 1);
            lVar21 = lVar21 + (ulong)(auVar51[4] & 1);
            lVar22 = lVar22 + (ulong)(auVar51[5] & 1);
            lVar29 = lVar29 + (ulong)(auVar51[2] & 1);
            lVar30 = lVar30 + (ulong)(auVar51[3] & 1);
            lVar12 = lVar12 + (ulong)(auVar51[0] & 1);
            lVar20 = lVar20 + (ulong)(auVar51[1] & 1);
            lVar39 = lVar39 + (ulong)((byte)uVar5 & 1);
            lVar40 = lVar40 + (ulong)((byte)(uVar5 >> 0x10) & 1);
            lVar49 = lVar49 + (ulong)(auVar52[0xe] & 1);
            lVar50 = lVar50 + (ulong)(auVar52[0xf] & 1);
            lVar37 = lVar37 + (ulong)(auVar52[0xc] & 1);
            lVar38 = lVar38 + (ulong)(auVar52[0xd] & 1);
            lVar47 = lVar47 + (ulong)(auVar52[6] & 1);
            lVar48 = lVar48 + (ulong)(auVar52[7] & 1);
            lVar41 = lVar41 + (ulong)(auVar52[10] & 1);
            lVar42 = lVar42 + (ulong)(auVar52[0xb] & 1);
            lVar45 = lVar45 + (ulong)(auVar52[2] & 1);
            lVar46 = lVar46 + (ulong)(auVar52[3] & 1);
            lVar33 = lVar33 + (ulong)(auVar52[0] & 1);
            lVar34 = lVar34 + (ulong)(auVar52[1] & 1);
            lVar31 = lVar31 + (ulong)(auVar52[4] & 1);
            lVar32 = lVar32 + (ulong)(auVar52[5] & 1);
          } while (uVar15 != 0);
          sVar8 = lVar33 + lVar12 + lVar39 + lVar25 + lVar31 + lVar21 + lVar37 + lVar23 +
                  lVar45 + lVar29 + lVar41 + lVar27 + lVar47 + lVar35 + lVar49 + lVar43 +
                  lVar34 + lVar20 + lVar40 + lVar26 + lVar32 + lVar22 + lVar38 + lVar24 +
                  lVar46 + lVar30 + lVar42 + lVar28 + lVar48 + lVar36 + lVar50 + lVar44;
          if (uVar14 == uVar11) {
            return sVar8;
          }
          uVar15 = uVar14;
          if ((uVar2 & 0x18) == 0) goto LAB_0043943c;
        }
        lVar20 = 0;
        lVar21 = 0;
        lVar22 = 0;
        lVar23 = 0;
        lVar24 = 0;
        lVar25 = 0;
        lVar26 = 0;
        uVar14 = uVar11 & 0x7ffffff8;
        lVar12 = uVar15 - uVar14;
        puVar17 = (undefined8 *)(lVar7 + uVar15 + lVar18);
        do {
          lVar12 = lVar12 + 8;
          uVar9 = NEON_cmeq(*puVar17,0xa0a0a0a0a0a0a0a,1);
          uVar4 = CONCAT12((char)((ulong)uVar9 >> 8),(short)uVar9) & 0xff00ff;
          lVar25 = lVar25 + (ulong)((byte)((ulong)uVar9 >> 0x30) & 1);
          lVar26 = lVar26 + (ulong)((byte)((ulong)uVar9 >> 0x38) & 1);
          lVar21 = lVar21 + (ulong)((byte)((ulong)uVar9 >> 0x10) & 1);
          lVar22 = lVar22 + (ulong)((byte)((ulong)uVar9 >> 0x18) & 1);
          sVar8 = sVar8 + ((byte)uVar4 & 1);
          lVar20 = lVar20 + (ulong)((byte)(uVar4 >> 0x10) & 1);
          lVar23 = lVar23 + (ulong)((byte)((ulong)uVar9 >> 0x20) & 1);
          lVar24 = lVar24 + (ulong)((byte)((ulong)uVar9 >> 0x28) & 1);
          puVar17 = puVar17 + 1;
        } while (lVar12 != 0);
        sVar8 = sVar8 + lVar20 + lVar24 + lVar22 + lVar26 + lVar21 + lVar25 + lVar23;
        if (uVar14 == uVar11) {
          return sVar8;
        }
      }
LAB_0043943c:
      lVar12 = uVar11 - uVar14;
      pcVar13 = (char *)(lVar7 + uVar14 + lVar18);
      do {
        if (*pcVar13 == '\n') {
          sVar8 = sVar8 + 1;
        }
        lVar12 = lVar12 + -1;
        pcVar13 = pcVar13 + 1;
      } while (lVar12 != 0);
      return sVar8;
    }
    iVar10 = (int)param_3;
    if (iVar6 == 0x75) {
      iVar6 = iVar10;
      if (param_4 == (int *)0x0) {
        lVar7 = *(long *)(piVar19 + 2);
        lVar18 = *(long *)(piVar19 + 6);
      }
      else if (*param_4 == 0) {
        lVar7 = *(long *)(piVar19 + 2);
        lVar18 = *(long *)(piVar19 + 6);
        iVar10 = piVar19[1];
      }
      else {
        iVar6 = *piVar19;
        lVar7 = *(long *)(piVar19 + 2);
        lVar18 = *(long *)(piVar19 + 6);
      }
      if ((0x1000 < iVar6) && (iVar6 != *piVar19)) {
        if ((long)param_3 < 1) {
          return 0;
        }
        lVar7 = FUN_003c83a4(param_3,"crypto/bio/bf_buff.c",0x143);
        if (lVar7 == 0) {
          return 0;
        }
      }
      if (((0x1000 < iVar10) && (iVar10 != piVar19[1])) &&
         (lVar18 = FUN_003c83a4(param_3,"crypto/bio/bf_buff.c",0x148), lVar18 == 0)) {
        if (lVar7 == *(long *)(piVar19 + 2)) {
          return 0;
        }
        FUN_003c86b4(lVar7,"crypto/bio/bf_buff.c",0x14b);
        return 0;
      }
      if (*(long *)(piVar19 + 2) != lVar7) {
        FUN_003c86b4(*(long *)(piVar19 + 2),"crypto/bio/bf_buff.c",0x150);
        *(long *)(piVar19 + 2) = lVar7;
        piVar19[4] = 0;
        piVar19[5] = 0;
        *piVar19 = iVar6;
      }
      if (*(long *)(piVar19 + 6) == lVar18) {
        return 1;
      }
      FUN_003c86b4(*(long *)(piVar19 + 6),"crypto/bio/bf_buff.c",0x157);
      *(long *)(piVar19 + 6) = lVar18;
      piVar19[8] = 0;
      piVar19[9] = 0;
      piVar19[1] = iVar10;
      return 1;
    }
    if (iVar6 == 0x7a) {
      if ((long)*piVar19 < (long)param_3) {
        if ((long)param_3 < 1) {
          return 0;
        }
        __dest = (void *)FUN_003c83a4(param_3,"crypto/bio/bf_buff.c",0x124);
        if (__dest == (void *)0x0) {
          return 0;
        }
        FUN_003c86b4(*(undefined8 *)(piVar19 + 2),"crypto/bio/bf_buff.c",0x127);
        *(void **)(piVar19 + 2) = __dest;
      }
      else {
        __dest = *(void **)(piVar19 + 2);
      }
      piVar19[4] = iVar10;
      piVar19[5] = 0;
      memcpy(__dest,param_4,(long)iVar10);
      return 1;
    }
  }
  lVar7 = *(long *)(param_1 + 0x40);
  if (lVar7 == 0) {
    return 0;
  }
LAB_004390a4:
  sVar8 = FUN_0037e4bc(lVar7,param_2);
  return sVar8;
}


// ===== 004394a8  FUN_004394a8 =====

undefined4 * FUN_004394a8(long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_003c8474(0x28,"crypto/bio/bf_buff.c",0x2f);
  puVar3 = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0x1000;
    lVar2 = FUN_003c83a4(0x1000,"crypto/bio/bf_buff.c",0x34);
    *(long *)(puVar1 + 2) = lVar2;
    if (lVar2 == 0) {
      FUN_003c86b4(puVar1,"crypto/bio/bf_buff.c",0x36);
      return (undefined4 *)0x0;
    }
    puVar1[1] = 0x1000;
    lVar2 = FUN_003c83a4(0x1000,"crypto/bio/bf_buff.c",0x3a);
    *(long *)(puVar1 + 6) = lVar2;
    if (lVar2 == 0) {
      FUN_003c86b4(*(undefined8 *)(puVar1 + 2),"crypto/bio/bf_buff.c",0x3c);
      FUN_003c86b4(puVar1,"crypto/bio/bf_buff.c",0x3d);
      return (undefined4 *)0x0;
    }
    puVar3 = (undefined4 *)0x1;
    *(undefined4 **)(param_1 + 0x38) = puVar1;
    *(undefined4 *)(param_1 + 0x20) = 1;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return puVar3;
}


// ===== 004395a0  FUN_004395a0 =====

long FUN_004395a0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x38);
    FUN_003c86b4(*(undefined8 *)(lVar1 + 8),"crypto/bio/bf_buff.c",0x4e);
    FUN_003c86b4(*(undefined8 *)(lVar1 + 0x18),"crypto/bio/bf_buff.c",0x4f);
    FUN_003c86b4(*(undefined8 *)(param_1 + 0x38),"crypto/bio/bf_buff.c",0x50);
    lVar1 = 1;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return lVar1;
}


// ===== 00439618  FUN_00439618 =====

void FUN_00439618(long param_1)

{
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_0037ec5c();
    return;
  }
  return;
}


// ===== 00439628  FUN_00439628 =====

undefined4
FUN_00439628(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long local_58;
  
  local_58 = 0;
  iVar1 = FUN_0039b478(param_3,&local_58,param_1);
  if (iVar1 < 0) {
    return 0;
  }
  if (local_58 == 0) {
    return 0;
  }
  lVar3 = FUN_003899dc(param_2);
  if (lVar3 == 0) {
    uVar4 = FUN_0038996c(param_2);
    lVar3 = FUN_0039e6f4(param_6,uVar4,param_7);
    if (lVar3 != 0) goto LAB_00439698;
  }
  else {
    lVar3 = param_2;
    if (param_2 != 0) {
LAB_00439698:
      uVar2 = FUN_0039e518(local_58,iVar1,param_4,param_5,lVar3,0);
      goto LAB_004396e0;
    }
  }
  uVar2 = 0;
LAB_004396e0:
  FUN_003c86b4(local_58,"crypto/asn1/a_digest.c",0x51);
  if (lVar3 != param_2) {
    FUN_0039d050(lVar3);
  }
  return uVar2;
}


// ===== 00439724  FUN_00439724 =====

void FUN_00439724(void)

{
  FUN_00439628();
  return;
}


// ===== 00439730  FUN_00439730 =====

long FUN_00439730(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 auStack_88 [80];
  undefined8 local_38;
  
  iVar1 = FUN_003dff4c(&local_38,0,0,0,param_1);
  if (iVar1 != 0) {
    lVar3 = FUN_003a8a70();
    if (lVar3 == 0) {
      FUN_00379868();
      FUN_0037995c("crypto/evp/evp_pkey.c",0x24,"evp_pkcs82pkey_legacy");
      FUN_00379a5c(6,0x80006,0);
      return 0;
    }
    uVar2 = FUN_003dd5b4(local_38);
    iVar1 = FUN_003a67a4(lVar3,uVar2);
    if (iVar1 == 0) {
      FUN_00399b58(auStack_88,0x50,local_38);
      FUN_00379868();
      FUN_0037995c("crypto/evp/evp_pkey.c",0x2a,"evp_pkcs82pkey_legacy");
      FUN_00379a5c(6,0x76,"TYPE=%s",auStack_88);
    }
    else {
      pcVar5 = *(code **)(*(long *)(lVar3 + 8) + 0x138);
      if (pcVar5 == (code *)0x0) {
        pcVar5 = *(code **)(*(long *)(lVar3 + 8) + 0x40);
        if (pcVar5 == (code *)0x0) {
          FUN_00379868();
          FUN_0037995c("crypto/evp/evp_pkey.c",0x38,"evp_pkcs82pkey_legacy");
          uVar4 = 0x90;
        }
        else {
          iVar1 = (*pcVar5)(lVar3,param_1);
          if (iVar1 != 0) {
            return lVar3;
          }
          FUN_00379868();
          FUN_0037995c("crypto/evp/evp_pkey.c",0x34,"evp_pkcs82pkey_legacy");
          uVar4 = 0x91;
        }
        FUN_00379a5c(6,uVar4,0);
      }
      else {
        iVar1 = (*pcVar5)(lVar3,param_1,param_2,param_3);
        if (iVar1 != 0) {
          return lVar3;
        }
      }
    }
    FUN_003a6c04(lVar3);
  }
  return 0;
}


// ===== 004398ec  FUN_004398ec =====

long FUN_004398ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined1 auStack_92 [50];
  undefined8 local_60;
  ulong local_58;
  long local_50;
  long local_48;
  long local_28;
  
  local_28 = 0;
  local_50 = 0;
  local_60 = 0;
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = FUN_003dff4c(&local_60,0,0,0,param_1);
  if ((iVar1 == 0) || (iVar1 = FUN_003dd260(auStack_92,0x32,local_60,0), iVar1 == 0)) {
    return 0;
  }
  uVar2 = FUN_003dfea0(param_1,&local_50);
  if ((int)uVar2 < 1) {
    return 0;
  }
  if (local_50 == 0) {
    return 0;
  }
  local_48 = local_50;
  local_58 = (ulong)uVar2;
  lVar3 = FUN_00383d54(&local_28,&DAT_001d4441,"PrivateKeyInfo",auStack_92,0x87,param_2,param_3);
  if (lVar3 != 0) {
    iVar1 = FUN_00385bb8(lVar3);
    if (iVar1 == 0) {
      FUN_00385540(lVar3);
      lVar3 = FUN_00383d54(&local_28,&DAT_001d4441,"PrivateKeyInfo",0,0x87,param_2,param_3);
      if (lVar3 == 0) goto LAB_00439a0c;
    }
    iVar1 = FUN_00385fb4(lVar3,&local_48,&local_58);
    if (iVar1 != 0) goto LAB_00439a20;
  }
LAB_00439a0c:
  local_28 = FUN_00439730(param_1,param_2,param_3);
LAB_00439a20:
  FUN_003c893c(local_50,(ulong)uVar2,"crypto/evp/evp_pkey.c",0x70);
  FUN_00385540(lVar3);
  return local_28;
}


// ===== 00439a78  FUN_00439a78 =====

void FUN_00439a78(undefined8 param_1)

{
  FUN_004398ec(param_1,0,0);
  return;
}


// ===== 00439a84  FUN_00439a84 =====

long FUN_00439a84(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  if (*(long *)(param_1 + 0x60) == 0) {
    lVar3 = FUN_003dfeac();
    if (lVar3 == 0) {
      FUN_00379868();
      FUN_0037995c("crypto/evp/evp_pkey.c",0x9a,"EVP_PKEY2PKCS8");
      FUN_00379a5c(6,0x8000d,0);
      return 0;
    }
    if (*(long *)(param_1 + 8) == 0) {
      FUN_00379868();
      FUN_0037995c("crypto/evp/evp_pkey.c",0xa9,"EVP_PKEY2PKCS8");
      uVar4 = 0x76;
    }
    else {
      pcVar5 = *(code **)(*(long *)(param_1 + 8) + 0x48);
      if (pcVar5 == (code *)0x0) {
        FUN_00379868();
        FUN_0037995c("crypto/evp/evp_pkey.c",0xa5,"EVP_PKEY2PKCS8");
        uVar4 = 0x90;
      }
      else {
        iVar1 = (*pcVar5)(lVar3,param_1);
        if (iVar1 != 0) {
          lVar2 = 0;
          goto LAB_00439c24;
        }
        FUN_00379868();
        FUN_0037995c("crypto/evp/evp_pkey.c",0xa1,"EVP_PKEY2PKCS8");
        uVar4 = 0x92;
      }
    }
    FUN_00379a5c(6,uVar4,0);
    lVar2 = 0;
  }
  else {
    local_28 = 0;
    local_30 = 0;
    lVar2 = FUN_003aa8a0(param_1,0x87,&DAT_001d4441,"PrivateKeyInfo",0);
    if ((lVar2 != 0) && (iVar1 = FUN_003ac31c(lVar2,&local_28,&local_30), iVar1 != 0)) {
      local_38 = local_28;
      lVar3 = FUN_003dfe94(0,&local_38,local_30);
      FUN_003c86b4(local_28,"crypto/evp/evp_pkey.c",0x94);
      if (lVar3 != 0) goto LAB_00439c24;
    }
    lVar3 = 0;
  }
  FUN_003dfeb8(lVar3);
  lVar3 = 0;
LAB_00439c24:
  FUN_003ab75c(lVar2);
  return lVar3;
}


// ===== 00439c40  FUN_00439c40 =====

void FUN_00439c40(long param_1)

{
  thunk_FUN_0040caf8(*(undefined8 *)(param_1 + 0x40));
  return;
}


// ===== 00439c48  FUN_00439c48 =====

void FUN_00439c48(long param_1)

{
  FUN_00425424(*(undefined8 *)(param_1 + 0x40));
  return;
}


// ===== 00439c50  FUN_00439c50 =====

void FUN_00439c50(long param_1)

{
  FUN_004254d0(*(undefined8 *)(param_1 + 0x40));
  return;
}


// ===== 00439c58  FUN_00439c58 =====

void FUN_00439c58(long param_1)

{
  FUN_00425550(*(undefined8 *)(param_1 + 0x40));
  return;
}


// ===== 00439c60  FUN_00439c60 =====

void FUN_00439c60(long param_1)

{
  FUN_0042560c(*(undefined8 *)(param_1 + 0x40));
  return;
}


// ===== 00439c68  FUN_00439c68 =====

bool FUN_00439c68(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_00425824(param_1 + 0x40);
  return lVar1 != 0;
}


// ===== 00439c88  FUN_00439c88 =====

bool FUN_00439c88(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_00425ad0(param_1 + 0x40);
  return lVar1 != 0;
}


// ===== 00439ca8  FUN_00439ca8 =====

bool FUN_00439ca8(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_00425dc4(param_1 + 0x40);
  return lVar1 != 0;
}


// ===== 00439cc8  FUN_00439cc8 =====

bool FUN_00439cc8(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_00426098(param_1 + 0x40);
  return lVar1 != 0;
}


// ===== 00439ce8  FUN_00439ce8 =====

long FUN_00439ce8(long param_1)

{
  long lVar1;
  long local_18;
  
  local_18 = 0;
  if (*(long *)(param_1 + 0x60) != 0) {
    lVar1 = FUN_003a0640(*(long *)(param_1 + 0x60));
    return lVar1;
  }
  lVar1 = FUN_003aa1e8();
  if (lVar1 != 0) {
    FUN_003aa198(0,0,0,0,&local_18,lVar1);
    lVar1 = local_18;
  }
  return lVar1;
}


// ===== 00439d44  FUN_00439d44 =====

void FUN_00439d44(long param_1)

{
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_003a0628();
    return;
  }
  return;
}


// ===== 00439d54  FUN_00439d54 =====

undefined8 FUN_00439d54(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(long *)(param_1 + 0x60) != 0) {
    uVar1 = FUN_00439dc8(param_1,0x84,&PTR_DAT_0077f458);
    return uVar1;
  }
  if ((*(long *)(param_1 + 8) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 8) + 0x78),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00439d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
    return uVar1;
  }
  FUN_00379868();
  FUN_0037995c("crypto/asn1/i2d_evp.c",0x55,"i2d_KeyParams");
  FUN_00379a5c(0xd,0xc4,0);
  return 0xffffffff;
}


// ===== 00439dc8  FUN_00439dc8 =====

uint FUN_00439dc8(undefined8 param_1,undefined4 param_2,long *param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined8 local_58;
  
  if (param_4 == (long *)0x0) {
    do {
      if (*param_3 == 0) goto LAB_00439ec8;
      local_58 = 0x7fffffff;
      lVar2 = FUN_003aa8a0(param_1,param_2,*param_3,param_3[1],0);
      if (lVar2 == 0) {
        return 0xffffffff;
      }
      iVar1 = FUN_003ac31c(lVar2,0,&local_58);
      uVar3 = (uint)local_58;
      FUN_003ab75c(lVar2);
      param_3 = param_3 + 2;
    } while ((iVar1 == 0) || (uVar3 == 0xffffffff));
  }
  else {
    do {
      if (*param_3 == 0) {
LAB_00439ec8:
        FUN_00379868();
        FUN_0037995c("crypto/asn1/i2d_evp.c",0x45,"i2d_provided");
        FUN_00379a5c(0xd,0xc4,0);
        return 0xffffffff;
      }
      lVar4 = *param_4;
      local_58 = 0x7fffffff;
      lVar2 = FUN_003aa8a0(param_1,param_2,*param_3,param_3[1],0);
      if (lVar2 == 0) {
        return 0xffffffff;
      }
      iVar1 = FUN_003ac31c(lVar2,param_4,&local_58);
      if (iVar1 == 0) {
        uVar3 = 0xffffffff;
      }
      else {
        uVar3 = (uint)local_58;
        if (lVar4 != 0) {
          uVar3 = (uint)local_58 ^ 0x7fffffff;
          FUN_003ab75c(lVar2);
          return uVar3;
        }
      }
      FUN_003ab75c(lVar2);
      param_3 = param_3 + 2;
    } while (uVar3 == 0xffffffff);
  }
  return uVar3;
}


// ===== 00439f18  FUN_00439f18 =====

void FUN_00439f18(undefined8 param_1,undefined8 param_2)

{
  FUN_003e0054(PTR_FUN_007a19c0,param_1,param_2);
  return;
}


// ===== 00439f30  FUN_00439f30 =====

ulong FUN_00439f30(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x60) != 0) {
    uVar1 = FUN_00439dc8(param_1,0x87,&PTR_DAT_0077f478,param_2);
    return uVar1;
  }
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 != 0) {
    if (*(code **)(lVar2 + 0xc0) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00439f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(lVar2 + 0xc0))(param_1,param_2);
      return uVar1;
    }
    if (*(long *)(lVar2 + 0x48) != 0) {
      lVar2 = FUN_00439a84();
      if (lVar2 == 0) {
        return 0;
      }
      uVar1 = FUN_003dfea0(lVar2,param_2);
      FUN_003dfeb8(lVar2);
      return uVar1 & 0xffffffff;
    }
  }
  FUN_00379868();
  FUN_0037995c("crypto/asn1/i2d_evp.c",0x76,"i2d_PrivateKey");
  FUN_00379a5c(0xd,0xa7,0);
  return 0xffffffff;
}


// ===== 00439ff8  FUN_00439ff8 =====

undefined8 FUN_00439ff8(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x60) != 0) {
    uVar2 = FUN_00439dc8(param_1,0x86,&PTR_DAT_0077f4a8,param_2);
    return uVar2;
  }
  iVar1 = FUN_003a7c6c();
  if (iVar1 == 6) {
    uVar2 = FUN_003b0a80(param_1);
    uVar2 = FUN_003f2b5c(uVar2,param_2);
    return uVar2;
  }
  FUN_00379868();
  FUN_0037995c("crypto/asn1/i2d_evp.c",0x91,"i2d_PublicKey");
  FUN_00379a5c(0xd,0xa7,0);
  return 0xffffffff;
}


// ===== 0043a090  FUN_0043a090 =====

long FUN_0043a090(undefined4 param_1,long *param_2,undefined8 *param_3,ulong param_4,
                 undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 local_38;
  
  local_38 = *param_3;
  if (((param_2 == (long *)0x0) || (lVar6 = *param_2, lVar6 == 0)) &&
     (lVar6 = FUN_003a8a70(), lVar6 == 0)) {
    FUN_00379868();
    FUN_0037995c("crypto/asn1/d2i_pr.c",99,"ossl_d2i_PrivateKey_legacy");
    FUN_00379a5c(0xd,0x80006,0);
    return 0;
  }
  iVar1 = FUN_003a67a4(lVar6,param_1);
  if (iVar1 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/asn1/d2i_pr.c",0x6f,"ossl_d2i_PrivateKey_legacy");
    uVar4 = 0xa3;
  }
  else {
    FUN_0037f6d4();
    lVar5 = *(long *)(lVar6 + 8);
    if (*(code **)(lVar5 + 0xb8) != (code *)0x0) {
      iVar1 = (**(code **)(lVar5 + 0xb8))(lVar6,&local_38,param_4 & 0xffffffff);
      if (iVar1 != 0) {
        FUN_0037f8c4();
        lVar5 = lVar6;
        goto LAB_0043a1f8;
      }
      lVar5 = *(long *)(lVar6 + 8);
    }
    if ((*(long *)(lVar5 + 0x40) != 0) || (*(long *)(lVar5 + 0x138) != 0)) {
      lVar3 = FUN_003dfe94(0,&local_38,param_4);
      if (lVar3 == 0) {
        FUN_0037f8c4();
      }
      else {
        lVar5 = FUN_00439730(lVar3,param_5,param_6);
        FUN_003dfeb8(lVar3);
        if (lVar5 == 0) {
          FUN_0037f8c4();
        }
        else {
          FUN_003a6c04(lVar6);
          FUN_0037f71c();
          iVar1 = FUN_003a7c38(param_1);
          iVar2 = FUN_003a7c6c(lVar5);
          lVar6 = lVar5;
          if (iVar1 == iVar2) {
LAB_0043a1f8:
            *param_3 = local_38;
            if (param_2 == (long *)0x0) {
              return lVar5;
            }
            *param_2 = lVar5;
            return lVar5;
          }
        }
      }
      goto joined_r0x0043a148;
    }
    FUN_0037f8c4();
    FUN_00379868();
    FUN_0037995c("crypto/asn1/d2i_pr.c",0x8c,"ossl_d2i_PrivateKey_legacy");
    uVar4 = 0x8000d;
  }
  FUN_00379a5c(0xd,uVar4,0);
joined_r0x0043a148:
  if ((param_2 == (long *)0x0) || (*param_2 != lVar6)) {
    FUN_003a6c04(lVar6);
  }
  return 0;
}


// ===== 0043a288  FUN_0043a288 =====

void FUN_0043a288(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  
  lVar1 = FUN_0043a2fc();
  if (lVar1 != 0) {
    return;
  }
  FUN_0043a090(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}


// ===== 0043a2fc  FUN_0043a2fc =====

long FUN_0043a2fc(int param_1,long *param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  char *pcVar1;
  int iVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 local_98;
  undefined1 auStack_8a [50];
  long local_58;
  undefined8 local_38;
  
  uVar7 = *param_3;
  local_58 = 0;
  local_38 = param_4;
  if (param_1 == 0) {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    puVar3 = (undefined1 *)FUN_003a7efc();
    if (puVar3 == (undefined1 *)0x0) {
      return 0;
    }
  }
  FUN_0037f6d4();
  lVar4 = FUN_003dfe94(0,param_3,param_4);
  FUN_0037f71c();
  if (lVar4 == 0) {
    pcVar1 = "type-specific";
    *param_3 = uVar7;
  }
  else {
    if (puVar3 == (undefined1 *)0x0) {
      iVar2 = FUN_003dff4c(&local_98,0,0,0,lVar4);
      if (iVar2 == 0) {
        puVar3 = (undefined1 *)0x0;
      }
      else {
        iVar2 = FUN_003dd260(auStack_8a,0x32,local_98,0);
        puVar3 = (undefined1 *)0x0;
        if (iVar2 != 0) {
          puVar3 = auStack_8a;
        }
      }
    }
    FUN_003dfeb8(lVar4);
    pcVar1 = "PrivateKeyInfo";
    *param_3 = uVar7;
  }
  if (param_2 == (long *)0x0) {
    plVar6 = &local_58;
    lVar5 = FUN_00383d54(&local_58,&DAT_001d4441,pcVar1,puVar3,0x87,param_5,param_6);
  }
  else {
    lVar4 = *param_2;
    plVar6 = &local_58;
    if (lVar4 != 0) {
      plVar6 = param_2;
    }
    lVar5 = FUN_00383d54(plVar6,&DAT_001d4441,pcVar1,puVar3,0x87,param_5,param_6);
    *param_2 = lVar4;
  }
  if (lVar5 != 0) {
    iVar2 = FUN_00385fb4(lVar5,param_3,&local_38);
    FUN_00385540(lVar5);
    if (((iVar2 != 0) && (*plVar6 != 0)) && (iVar2 = FUN_0039fb18(*plVar6,1), iVar2 != 0)) {
      lVar4 = *plVar6;
      if (param_2 != (long *)0x0) {
        *param_2 = lVar4;
        return lVar4;
      }
      return lVar4;
    }
  }
  if (plVar6 != param_2) {
    FUN_003a6c04(*plVar6);
  }
  return 0;
}


// ===== 0043a4b8  FUN_0043a4b8 =====

void FUN_0043a4b8(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = FUN_0043a2fc();
  if (lVar1 != 0) {
    return;
  }
  FUN_0043a090(param_1,param_2,param_3,param_4,0,0);
  return;
}


// ===== 0043a520  FUN_0043a520 =====

long FUN_0043a520(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_38;
  
  lVar2 = FUN_0043a2fc(0,param_1,param_2,param_3,param_4,param_5);
  if (lVar2 != 0) {
    return lVar2;
  }
  local_38 = *param_2;
  uVar3 = FUN_0038a760(0,&local_38,param_3);
  local_38 = *param_2;
  iVar1 = FUN_0040caf8();
  if (iVar1 == 6) {
    uVar5 = 0x74;
  }
  else {
    iVar1 = FUN_0040caf8(uVar3);
    if (iVar1 == 4) {
      uVar5 = 0x198;
    }
    else {
      iVar1 = FUN_0040caf8(uVar3);
      if (iVar1 == 3) {
        lVar2 = FUN_003dfe94(0,&local_38,param_3);
        FUN_0040ca6c(uVar3,PTR_FUN_007a1a00);
        if (lVar2 == 0) {
          FUN_00379868();
          FUN_0037995c("crypto/asn1/d2i_pr.c",0xd0,"d2i_AutoPrivateKey_legacy");
          FUN_00379a5c(0xd,0xa7,0);
          return 0;
        }
        lVar4 = FUN_00439730(lVar2,param_4,param_5);
        FUN_003dfeb8(lVar2);
        if (lVar4 == 0) {
          return 0;
        }
        *param_2 = local_38;
        if (param_1 == (long *)0x0) {
          return lVar4;
        }
        *param_1 = lVar4;
        return lVar4;
      }
      uVar5 = 6;
    }
  }
  FUN_0040ca6c(uVar3,PTR_FUN_007a1a00);
  lVar2 = FUN_0043a090(uVar5,param_1,param_2,param_3,param_4,param_5);
  return lVar2;
}


// ===== 0043a6e4  FUN_0043a6e4 =====

void FUN_0043a6e4(void)

{
  FUN_0043a520();
  return;
}


// ===== 0043a6f0  FUN_0043a6f0 =====

undefined * FUN_0043a6f0(void)

{
  return &DAT_0077f4d8;
}


// ===== 0043a6fc  FUN_0043a6fc =====

void FUN_0043a6fc(void)

{
  FUN_0038a93c();
  return;
}


// ===== 0043a708  FUN_0043a708 =====

void FUN_0043a708(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_0077f4d8);
  return;
}


// ===== 0043a714  FUN_0043a714 =====

void FUN_0043a714(void)

{
  FUN_0039a5f4(&DAT_0077f4d8);
  return;
}


// ===== 0043a720  FUN_0043a720 =====

void FUN_0043a720(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_0077f4d8);
  return;
}


// ===== 0043a72c  FUN_0043a72c =====

void FUN_0043a72c(undefined8 param_1)

{
  FUN_003a4098(&DAT_0077f4d8,param_1);
  return;
}


// ===== 0043a73c  FUN_0043a73c =====

long * FUN_0043a73c(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  plVar2 = (long *)FUN_003dcce8();
  plVar3 = plVar2;
  if ((plVar2 != (long *)0x0) &&
     (plVar3 = (long *)FUN_0039a5f4(&DAT_0077f4d8), plVar3 != (long *)0x0)) {
    *plVar3 = (long)plVar2;
    lVar4 = FUN_0038a64c();
    if ((lVar4 == 0) || (iVar1 = FUN_0040c89c(plVar3[1],lVar4), iVar1 == 0)) {
      FUN_0038c75c(plVar3,&DAT_0077f4d8);
      FUN_0038a658(lVar4);
      return (long *)0x0;
    }
    FUN_0039ade0(lVar4,param_2,param_3);
  }
  return plVar3;
}


// ===== 0043a7e4  FUN_0043a7e4 =====

undefined * FUN_0043a7e4(void)

{
  return &DAT_0077f560;
}


// ===== 0043a7f0  FUN_0043a7f0 =====

undefined * FUN_0043a7f0(void)

{
  return &DAT_0077f610;
}


// ===== 0043a7fc  FUN_0043a7fc =====

undefined * FUN_0043a7fc(void)

{
  return &DAT_0077f790;
}


// ===== 0043a808  FUN_0043a808 =====

void FUN_0043a808(void)

{
  FUN_0038a93c();
  return;
}


// ===== 0043a814  FUN_0043a814 =====

void FUN_0043a814(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_0077f560);
  return;
}


// ===== 0043a820  FUN_0043a820 =====

void FUN_0043a820(void)

{
  FUN_0039a5f4(&DAT_0077f560);
  return;
}


// ===== 0043a82c  FUN_0043a82c =====

void FUN_0043a82c(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_0077f560);
  return;
}


// ===== 0043a838  FUN_0043a838 =====

void FUN_0043a838(undefined8 param_1)

{
  FUN_003a4098(&DAT_0077f560,param_1);
  return;
}


// ===== 0043a848  FUN_0043a848 =====

void FUN_0043a848(void)

{
  FUN_0038a93c();
  return;
}


// ===== 0043a854  FUN_0043a854 =====

void FUN_0043a854(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_0077f610);
  return;
}


// ===== 0043a860  FUN_0043a860 =====

void FUN_0043a860(void)

{
  FUN_0039a5f4(&DAT_0077f610);
  return;
}


// ===== 0043a86c  FUN_0043a86c =====

void FUN_0043a86c(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_0077f610);
  return;
}


// ===== 0043a878  FUN_0043a878 =====

void FUN_0043a878(void)

{
  FUN_0038a93c();
  return;
}


// ===== 0043a884  FUN_0043a884 =====

void FUN_0043a884(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_0077f790);
  return;
}


// ===== 0043a890  FUN_0043a890 =====

void FUN_0043a890(void)

{
  FUN_0039a5f4(&DAT_0077f790);
  return;
}


// ===== 0043a89c  FUN_0043a89c =====

void FUN_0043a89c(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_0077f790);
  return;
}


// ===== 0043a8a8  FUN_0043a8a8 =====

void FUN_0043a8a8(undefined8 param_1)

{
  FUN_003a4098(&DAT_0077f790,param_1);
  return;
}


// ===== 0043a8b8  FUN_0043a8b8 =====

long FUN_0043a8b8(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_0039a5f4(&DAT_0077f790);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0xe8) = param_1;
    FUN_003c86b4(*(undefined8 *)(lVar1 + 0xf0),"crypto/x509/x_crl.c",0x20d);
    *(undefined8 *)(lVar1 + 0xf0) = 0;
    if (param_2 != 0) {
      lVar2 = FUN_003ca2f4(param_2,"crypto/x509/x_crl.c",0x210);
      *(long *)(lVar1 + 0xf0) = lVar2;
      if (lVar2 == 0) {
        FUN_0038c75c(lVar1,&DAT_0077f790);
        return 0;
      }
    }
  }
  return lVar1;
}


// ===== 0043a95c  FUN_0043a95c =====

undefined8 FUN_0043a95c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0xe8) = param_2;
    FUN_003c86b4(*(undefined8 *)(param_1 + 0xf0),"crypto/x509/x_crl.c",0x20d);
    *(undefined8 *)(param_1 + 0xf0) = 0;
    if (param_3 != 0) {
      lVar1 = FUN_003ca2f4(param_3,"crypto/x509/x_crl.c",0x210);
      *(long *)(param_1 + 0xf0) = lVar1;
      if (lVar1 == 0) {
        return 0;
      }
    }
  }
  return 1;
}


// ===== 0043a9c0  FUN_0043a9c0 =====

undefined8 FUN_0043a9c0(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 == 0) {
    lVar2 = FUN_0040bfd0(FUN_0043aa50);
    *(long *)(param_1 + 0x30) = lVar2;
    if (lVar2 == 0) goto LAB_0043aa10;
  }
  iVar1 = FUN_0040c89c(lVar2,param_2);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x50) = 1;
    return 1;
  }
LAB_0043aa10:
  FUN_00379868();
  FUN_0037995c("crypto/x509/x_crl.c",0x171,"X509_CRL_add0_revoked");
  FUN_00379a5c(0xd,0x8000f,0);
  return 0;
}


// ===== 0043aa50  FUN_0043aa50 =====

void FUN_0043aa50(undefined8 *param_1,undefined8 *param_2)

{
  FUN_0038ef94(*param_1,*param_2);
  return;
}


// ===== 0043aa5c  FUN_0043aa5c =====

undefined8 FUN_0043aa5c(long param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0xd0) + 0x20);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0043aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}


// ===== 0043aa74  FUN_0043aa74 =====

undefined8 FUN_0043aa74(long param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0xd0) + 0x18);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0043aa84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}


// ===== 0043aa90  FUN_0043aa90 =====

void FUN_0043aa90(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined8 uVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0xd0) + 0x18);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    uVar1 = FUN_00426cb0(param_3);
    uVar2 = FUN_00426a88(param_3);
                    /* WARNING: Could not recover jumptable at 0x0043aaf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,param_2,uVar1,uVar2);
    return;
  }
  return;
}


// ===== 0043ab10  FUN_0043ab10 =====

void FUN_0043ab10(undefined *param_1)

{
  PTR_DAT_007a9460 = &DAT_007a9468;
  if (param_1 != (undefined *)0x0) {
    PTR_DAT_007a9460 = param_1;
  }
  return;
}


// ===== 0043ab2c  FUN_0043ab2c =====

void FUN_0043ab2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_003c83a4(0x28,"crypto/x509/x_crl.c",0x1eb);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined8 *)(puVar1 + 2) = param_1;
    *(undefined8 *)(puVar1 + 4) = param_2;
    *(undefined8 *)(puVar1 + 6) = param_3;
    *(undefined8 *)(puVar1 + 8) = param_4;
    *puVar1 = 1;
  }
  return;
}


// ===== 0043ab84  FUN_0043ab84 =====

void FUN_0043ab84(byte *param_1)

{
  if ((param_1 != (byte *)0x0) && ((*param_1 & 1) != 0)) {
    FUN_003c86b4(param_1,"crypto/x509/x_crl.c",0x1fb);
    return;
  }
  return;
}


// ===== 0043aba4  FUN_0043aba4 =====

void FUN_0043aba4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xd8) = param_2;
  return;
}


// ===== 0043abac  FUN_0043abac =====

undefined8 FUN_0043abac(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}


// ===== 0043abb4  FUN_0043abb4 =====

undefined8 FUN_0043abb4(int param_1,long *param_2)

{
  long lVar1;
  
  if (((*param_2 != 0) && (param_1 == 5)) && (lVar1 = *(long *)(*param_2 + 0x30), lVar1 != 0)) {
    FUN_0040bc70(lVar1,FUN_0043aa50);
  }
  return 1;
}


// ===== 0043abec  FUN_0043abec =====

ulong FUN_0043abec(int param_1,long *param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  code *pcVar15;
  byte bVar16;
  int *piVar17;
  byte *pbVar18;
  long lVar19;
  undefined8 uVar20;
  int local_38;
  int local_34;
  
  lVar19 = *param_2;
  if (param_1 < 4) {
    if (param_1 != 1) {
      if (param_1 != 3) {
        return 1;
      }
      if (((*(long *)(lVar19 + 0xd0) != 0) &&
          (pcVar15 = *(code **)(*(long *)(lVar19 + 0xd0) + 0x10), pcVar15 != (code *)0x0)) &&
         (uVar6 = (*pcVar15)(lVar19), (int)uVar6 == 0)) {
        return uVar6;
      }
      FUN_00418698(*(undefined8 *)(lVar19 + 0x88));
      FUN_00419138(*(undefined8 *)(lVar19 + 0x90));
      thunk_FUN_0038eddc(*(undefined8 *)(lVar19 + 0xa0));
      thunk_FUN_0038eddc(*(undefined8 *)(lVar19 + 0xa8));
      FUN_0040ca6c(*(undefined8 *)(lVar19 + 0xb0),PTR_FUN_007a1c90);
      FUN_003c86b4(*(undefined8 *)(lVar19 + 0xf0),"crypto/x509/x_crl.c",0x111);
      return 1;
    }
LAB_0043ad08:
    *(undefined8 *)(lVar19 + 0x8c) = 0;
    puVar1 = PTR_DAT_007a9460;
    *(undefined8 *)(lVar19 + 0x84) = 0;
    *(undefined8 *)(lVar19 + 0x94) = 0;
    *(undefined4 *)(lVar19 + 0x9c) = 0x807f;
    *(undefined **)(lVar19 + 0xd0) = puVar1;
    *(undefined8 *)(lVar19 + 0xd8) = 0;
    *(undefined8 *)(lVar19 + 0xa8) = 0;
    *(undefined8 *)(lVar19 + 0xb0) = 0;
    *(undefined8 *)(lVar19 + 0xa0) = 0;
    return 1;
  }
  if (param_1 == 0xf) {
    if (lVar19 == 0) {
      return 1;
    }
    lVar9 = *(long *)(param_4 + 0xf0);
    *(undefined8 *)(lVar19 + 0xe8) = *(undefined8 *)(param_4 + 0xe8);
    FUN_003c86b4(*(undefined8 *)(lVar19 + 0xf0),"crypto/x509/x_crl.c",0x20d);
    *(undefined8 *)(lVar19 + 0xf0) = 0;
    if (lVar9 != 0) {
      lVar9 = FUN_003ca2f4(lVar9,"crypto/x509/x_crl.c",0x210);
      *(long *)(lVar19 + 0xf0) = lVar9;
      return (ulong)(lVar9 != 0);
    }
    return 1;
  }
  if (param_1 != 5) {
    if (param_1 != 4) {
      return 1;
    }
    pcVar15 = *(code **)(*(long *)(lVar19 + 0xd0) + 0x10);
    if ((pcVar15 != (code *)0x0) && (uVar6 = (*pcVar15)(lVar19), (int)uVar6 == 0)) {
      return uVar6;
    }
    FUN_00418698(*(undefined8 *)(lVar19 + 0x88));
    FUN_00419138(*(undefined8 *)(lVar19 + 0x90));
    thunk_FUN_0038eddc(*(undefined8 *)(lVar19 + 0xa0));
    thunk_FUN_0038eddc(*(undefined8 *)(lVar19 + 0xa8));
    FUN_0040ca6c(*(undefined8 *)(lVar19 + 0xb0),PTR_FUN_007a1c90);
    goto LAB_0043ad08;
  }
  uVar7 = FUN_003a4268(1);
  iVar2 = FUN_0043458c(lVar19,uVar7,lVar19 + 0xb8,0);
  if (iVar2 == 0) {
    *(uint *)(lVar19 + 0x84) = *(uint *)(lVar19 + 0x84) | 0x100000;
  }
  puVar8 = (undefined8 *)FUN_00427628(lVar19,0x302,&local_38,0);
  *(undefined8 **)(lVar19 + 0x90) = puVar8;
  if (puVar8 == (undefined8 *)0x0) {
    if (local_38 == -1) goto LAB_0043af2c;
  }
  else {
    uVar14 = *(uint *)(lVar19 + 0x98);
    iVar2 = *(int *)(puVar8 + 1);
    uVar13 = uVar14 | 1;
    *(uint *)(lVar19 + 0x98) = uVar13;
    if (iVar2 < 1) {
      iVar3 = *(int *)((long)puVar8 + 0xc);
    }
    else {
      uVar13 = uVar14 | 5;
      *(uint *)(lVar19 + 0x98) = uVar13;
      iVar3 = *(int *)((long)puVar8 + 0xc);
    }
    bVar16 = iVar2 >= 1;
    if (0 < iVar3) {
      uVar13 = uVar13 | 8;
      bVar16 = bVar16 + 1;
      *(uint *)(lVar19 + 0x98) = uVar13;
    }
    if (0 < *(int *)((long)puVar8 + 0x1c)) {
      bVar16 = bVar16 + 1;
      uVar13 = uVar13 | 0x10;
    }
    uVar14 = uVar13 | 2;
    if (bVar16 < 2) {
      uVar14 = uVar13;
    }
    if ((0 < *(int *)((long)puVar8 + 0x1c)) || (1 < bVar16)) {
      *(uint *)(lVar19 + 0x98) = uVar14;
    }
    if (0 < *(int *)(puVar8 + 3)) {
      uVar14 = uVar14 | 0x20;
      *(uint *)(lVar19 + 0x98) = uVar14;
    }
    piVar17 = (int *)puVar8[2];
    if (piVar17 != (int *)0x0) {
      iVar2 = *piVar17;
      *(uint *)(lVar19 + 0x98) = uVar14 | 0x40;
      if (iVar2 < 1) {
        uVar14 = *(uint *)(lVar19 + 0x9c);
      }
      else {
        pbVar18 = *(byte **)(piVar17 + 2);
        bVar16 = *pbVar18;
        uVar14 = (uint)bVar16;
        *(uint *)(lVar19 + 0x9c) = (uint)bVar16;
        if (iVar2 != 1) {
          uVar14 = (uint)CONCAT11(pbVar18[1],bVar16);
        }
      }
      *(uint *)(lVar19 + 0x9c) = uVar14 & 0x807f;
    }
    uVar20 = *puVar8;
    uVar7 = FUN_00432b1c(lVar19);
    iVar2 = FUN_0041953c(uVar20,uVar7);
    if (iVar2 != 0) goto LAB_0043af2c;
  }
  *(uint *)(lVar19 + 0x84) = *(uint *)(lVar19 + 0x84) | 0x80;
LAB_0043af2c:
  lVar9 = FUN_00427628(lVar19,0x5a,&local_38,0);
  *(long *)(lVar19 + 0x88) = lVar9;
  if ((lVar9 == 0) && (local_38 != -1)) {
    *(uint *)(lVar19 + 0x84) = *(uint *)(lVar19 + 0x84) | 0x80;
  }
  lVar9 = FUN_00427628(lVar19,0x58,&local_38,0);
  *(long *)(lVar19 + 0xa0) = lVar9;
  if ((lVar9 == 0) && (local_38 != -1)) {
    *(uint *)(lVar19 + 0x84) = *(uint *)(lVar19 + 0x84) | 0x80;
  }
  lVar9 = FUN_00427628(lVar19,0x8c,&local_38,0);
  *(long *)(lVar19 + 0xa8) = lVar9;
  if (((lVar9 == 0) && (local_38 != -1)) || ((lVar9 != 0 && (*(long *)(lVar19 + 0xa0) == 0)))) {
    *(uint *)(lVar19 + 0x84) = *(uint *)(lVar19 + 0x84) | 0x80;
  }
  uVar7 = *(undefined8 *)(lVar19 + 0x38);
  iVar2 = FUN_0040caf8(uVar7);
  if (0 < iVar2) {
    iVar2 = 0;
    do {
      uVar20 = FUN_0040cb0c(uVar7,iVar2);
      FUN_0042a760();
      iVar3 = FUN_003dd5b4();
      if (iVar3 == 0x359) {
        *(uint *)(lVar19 + 0x84) = *(uint *)(lVar19 + 0x84) | 0x1000;
      }
      iVar4 = FUN_0042a77c(uVar20);
      if ((((iVar4 != 0) && (iVar3 != 0x5a)) && (iVar3 != 0x8c)) && (iVar3 != 0x302)) {
        *(uint *)(lVar19 + 0x84) = *(uint *)(lVar19 + 0x84) | 0x200;
        break;
      }
      iVar2 = iVar2 + 1;
      iVar3 = FUN_0040caf8(uVar7);
    } while (iVar2 < iVar3);
  }
  uVar7 = FUN_00432b2c(lVar19);
  iVar2 = FUN_0040caf8();
  if (0 < iVar2) {
    iVar2 = 0;
    lVar9 = 0;
    do {
      lVar10 = FUN_0040cb0c(uVar7,iVar2);
      lVar11 = FUN_00427708(lVar10,0x303,&local_34,0);
      if ((lVar11 == 0) && (local_34 != -1)) {
LAB_0043b1d4:
        *(uint *)(lVar19 + 0x84) = *(uint *)(lVar19 + 0x84) | 0x80;
        break;
      }
      if (lVar11 != 0) {
        lVar9 = *(long *)(lVar19 + 0xb0);
        if (lVar9 == 0) {
          lVar9 = FUN_0040bf0c();
          *(long *)(lVar19 + 0xb0) = lVar9;
          if (lVar9 == 0) goto LAB_0043b220;
        }
        iVar3 = FUN_0040c89c(lVar9,lVar11);
        lVar9 = lVar11;
        if (iVar3 == 0) {
LAB_0043b220:
          FUN_00418788(lVar11);
          return 0;
        }
      }
      *(long *)(lVar10 + 0x28) = lVar9;
      lVar11 = FUN_00427708(lVar10,0x8d,&local_34,0);
      if ((lVar11 == 0) && (local_34 != -1)) goto LAB_0043b1d4;
      if (lVar11 == 0) {
        *(undefined4 *)(lVar10 + 0x30) = 0xffffffff;
        uVar20 = *(undefined8 *)(lVar10 + 0x20);
        local_34 = 0;
        iVar3 = FUN_0040caf8(uVar20);
      }
      else {
        uVar5 = FUN_0038e238();
        *(undefined4 *)(lVar10 + 0x30) = uVar5;
        thunk_FUN_0038eddc(lVar11);
        uVar20 = *(undefined8 *)(lVar10 + 0x20);
        local_34 = 0;
        iVar3 = FUN_0040caf8(uVar20);
      }
      if (0 < iVar3) {
        do {
          uVar12 = FUN_0040cb0c(uVar20,local_34);
          iVar3 = FUN_0042a77c();
          if (iVar3 != 0) {
            FUN_0042a760(uVar12);
            iVar3 = FUN_003dd5b4();
            if (iVar3 != 0x303) {
              *(uint *)(lVar19 + 0x84) = *(uint *)(lVar19 + 0x84) | 0x200;
              break;
            }
          }
          iVar3 = local_34 + 1;
          local_34 = iVar3;
          iVar4 = FUN_0040caf8(uVar20);
        } while (iVar3 < iVar4);
      }
      iVar2 = iVar2 + 1;
      iVar3 = FUN_0040caf8(uVar7);
    } while (iVar2 < iVar3);
  }
  pcVar15 = *(code **)(*(long *)(lVar19 + 0xd0) + 8);
  if ((pcVar15 != (code *)0x0) && (uVar6 = (*pcVar15)(lVar19), (int)uVar6 == 0)) {
    return uVar6;
  }
  *(uint *)(lVar19 + 0x84) = *(uint *)(lVar19 + 0x84) | 0x100;
  return 1;
}


// ===== 0043b244  FUN_0043b244 =====

ulong FUN_0043b244(long param_1,long *param_2,undefined8 *param_3,long param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  int *piVar8;
  uint uVar9;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  if (*(long *)(param_1 + 0x30) == 0) {
    return 0;
  }
  iVar1 = FUN_0040cc6c();
  if (iVar1 == 0) {
    uVar5 = FUN_003d518c(*(undefined8 *)(param_1 + 0xe0));
    if ((int)uVar5 == 0) {
      return uVar5;
    }
    FUN_0040cc10(*(undefined8 *)(param_1 + 0x30));
    FUN_003d519c(*(undefined8 *)(param_1 + 0xe0));
  }
  uStack_88 = param_3[1];
  local_90 = *param_3;
  local_80 = param_3[2];
  iVar1 = FUN_0040c48c(*(undefined8 *)(param_1 + 0x30),&local_90);
  if ((-1 < iVar1) && (iVar2 = FUN_0040caf8(*(undefined8 *)(param_1 + 0x30)), iVar1 < iVar2)) {
    if (param_4 == 0) {
      while( true ) {
        lVar6 = FUN_0040cb0c(*(undefined8 *)(param_1 + 0x30),iVar1);
        iVar3 = FUN_0038d110(lVar6,param_3);
        if (iVar3 != 0) break;
        if (*(long *)(lVar6 + 0x28) == 0) {
LAB_0043b414:
          if (param_2 != (long *)0x0) {
            *param_2 = lVar6;
          }
          uVar9 = 1;
          if (*(int *)(lVar6 + 0x30) == 8) {
            uVar9 = 2;
          }
          return (ulong)uVar9;
        }
        uVar7 = FUN_00432b1c(param_1);
        iVar3 = FUN_0040caf8(*(undefined8 *)(lVar6 + 0x28));
        if (0 < iVar3) {
          iVar3 = 0;
          do {
            piVar8 = (int *)FUN_0040cb0c(*(undefined8 *)(lVar6 + 0x28),iVar3);
            if ((*piVar8 == 4) &&
               (iVar4 = FUN_004267c8(uVar7,*(undefined8 *)(piVar8 + 2)), iVar4 == 0))
            goto LAB_0043b414;
            iVar3 = iVar3 + 1;
            iVar4 = FUN_0040caf8(*(undefined8 *)(lVar6 + 0x28));
          } while (iVar3 < iVar4);
        }
        iVar1 = iVar1 + 1;
        if (iVar1 == iVar2) {
          return 0;
        }
      }
    }
    else {
      while( true ) {
        lVar6 = FUN_0040cb0c(*(undefined8 *)(param_1 + 0x30),iVar1);
        iVar3 = FUN_0038d110(lVar6,param_3);
        if (iVar3 != 0) break;
        if (*(long *)(lVar6 + 0x28) == 0) {
          uVar7 = FUN_00432b1c(param_1);
          iVar3 = FUN_004267c8(param_4,uVar7);
          if (iVar3 == 0) goto LAB_0043b414;
        }
        else {
          iVar3 = FUN_0040caf8();
          if (0 < iVar3) {
            iVar3 = 0;
            do {
              piVar8 = (int *)FUN_0040cb0c(*(undefined8 *)(lVar6 + 0x28),iVar3);
              if ((*piVar8 == 4) &&
                 (iVar4 = FUN_004267c8(param_4,*(undefined8 *)(piVar8 + 2)), iVar4 == 0))
              goto LAB_0043b414;
              iVar3 = iVar3 + 1;
              iVar4 = FUN_0040caf8(*(undefined8 *)(lVar6 + 0x28));
            } while (iVar3 < iVar4);
          }
        }
        iVar1 = iVar1 + 1;
        if (iVar1 == iVar2) {
          return 0;
        }
      }
    }
  }
  return 0;
}


// ===== 0043b450  FUN_0043b450 =====

void FUN_0043b450(long param_1,undefined8 param_2)

{
  FUN_00434a5c(&DAT_0077f610,param_1 + 0x58,param_1 + 0x68,param_1,0,param_2,
               *(undefined8 *)(param_1 + 0xe8),*(undefined8 *)(param_1 + 0xf0));
  return;
}


// ===== 0043b474  FUN_0043b474 =====

undefined * FUN_0043b474(void)

{
  return &DAT_0077f870;
}


// ===== 0043b480  FUN_0043b480 =====

undefined * FUN_0043b480(void)

{
  return &DAT_0077f920;
}


// ===== 0043b48c  FUN_0043b48c =====

void FUN_0043b48c(void)

{
  FUN_0038a93c();
  return;
}


// ===== 0043b498  FUN_0043b498 =====

void FUN_0043b498(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_0077f870);
  return;
}


// ===== 0043b4a4  FUN_0043b4a4 =====

void FUN_0043b4a4(void)

{
  FUN_0039a5f4(&DAT_0077f870);
  return;
}


// ===== 0043b4b0  FUN_0043b4b0 =====

void FUN_0043b4b0(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_0077f870);
  return;
}


// ===== 0043b4bc  FUN_0043b4bc =====

void FUN_0043b4bc(void)

{
  FUN_0038a93c();
  return;
}


// ===== 0043b4c8  FUN_0043b4c8 =====

void FUN_0043b4c8(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_0077f920);
  return;
}


// ===== 0043b4d4  FUN_0043b4d4 =====

void FUN_0043b4d4(undefined8 param_1)

{
  FUN_003a4098(&DAT_0077f870,param_1);
  return;
}


// ===== 0043b4e4  FUN_0043b4e4 =====

undefined * FUN_0043b4e4(void)

{
  return &DAT_0077f980;
}


// ===== 0043b4f0  FUN_0043b4f0 =====

void FUN_0043b4f0(void)

{
  FUN_0038a93c();
  return;
}


// ===== 0043b4fc  FUN_0043b4fc =====

void FUN_0043b4fc(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_0077f980);
  return;
}


// ===== 0043b508  FUN_0043b508 =====

void FUN_0043b508(void)

{
  FUN_0039a5f4(&DAT_0077f980);
  return;
}


// ===== 0043b514  FUN_0043b514 =====

void FUN_0043b514(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_0077f980);
  return;
}


// ===== 0043b520  FUN_0043b520 =====

void FUN_0043b520(undefined8 param_1)

{
  FUN_003a4098(&DAT_0077f980,param_1);
  return;
}


// ===== 0043b530  FUN_0043b530 =====

undefined * FUN_0043b530(void)

{
  return &DAT_0077fa08;
}


// ===== 0043b53c  FUN_0043b53c =====

void FUN_0043b53c(void)

{
  FUN_0038a93c();
  return;
}


// ===== 0043b548  FUN_0043b548 =====

void FUN_0043b548(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_0077fa08);
  return;
}


// ===== 0043b554  FUN_0043b554 =====

void FUN_0043b554(void)

{
  FUN_0039a5f4(&DAT_0077fa08);
  return;
}


// ===== 0043b560  FUN_0043b560 =====

void FUN_0043b560(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_0077fa08);
  return;
}


// ===== 0043b56c  FUN_0043b56c =====

void FUN_0043b56c(undefined8 param_1)

{
  FUN_003a4098(&DAT_0077fa08,param_1);
  return;
}


// ===== 0043b57c  FUN_0043b57c =====

ulong FUN_0043b57c(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*param_1 != param_2) {
    uVar1 = FUN_003a4098(&DAT_0077fa08);
    uVar2 = uVar1;
    if (uVar1 != 0) {
      FUN_0038c75c(*param_1,&DAT_0077fa08);
      uVar2 = 1;
      *param_1 = uVar1;
    }
    return uVar2;
  }
  return (ulong)(param_2 != 0);
}


// ===== 0043b5dc  FUN_0043b5dc =====

undefined4 FUN_0043b5dc(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  char cVar6;
  undefined4 uVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  
  pcVar4 = (char *)FUN_00428ff8(param_2,0,0);
  if (pcVar4 == (char *)0x0) {
    uVar7 = 0;
  }
  else {
    if (*pcVar4 == '\0') {
      uVar7 = 1;
      uVar5 = 0x200;
    }
    else {
      iVar10 = (int)pcVar4 + 1;
      pcVar8 = pcVar4 + 1;
      pcVar9 = pcVar4 + 2;
LAB_0043b644:
      do {
        cVar6 = pcVar9[-1];
        if (cVar6 == '/') {
          iVar2 = FUN_003c4794(*pcVar9);
          if ((iVar2 == 0) ||
             ((pcVar9[1] != '=' && ((iVar2 = FUN_003c4794(), iVar2 == 0 || (pcVar9[2] != '=')))))) {
            cVar6 = pcVar9[-1];
            goto LAB_0043b634;
          }
LAB_0043b67c:
          iVar2 = iVar10 - (int)pcVar8;
          iVar3 = FUN_0037df4c(param_1,pcVar8,iVar2);
          if (iVar2 == iVar3) {
            if (pcVar9[-1] == '\0') break;
            iVar2 = FUN_0037df4c(param_1,&DAT_001c2f11,2);
            if (iVar2 == 2) {
              pcVar1 = pcVar9 + -1;
              iVar10 = iVar10 + 1;
              pcVar8 = pcVar9;
              pcVar9 = pcVar9 + 1;
              if (*pcVar1 == '\0') break;
              goto LAB_0043b644;
            }
          }
          FUN_00379868();
          FUN_0037995c("crypto/x509/x_name.c",0x21d,"X509_NAME_print");
          FUN_00379a5c(0xb,0x80007,0);
          uVar7 = 0;
          uVar5 = 0x21e;
          goto LAB_0043b724;
        }
LAB_0043b634:
        if (cVar6 == '\0') goto LAB_0043b67c;
        pcVar9 = pcVar9 + 1;
        iVar10 = iVar10 + 1;
      } while (cVar6 != '\0');
      uVar7 = 1;
      uVar5 = 0x21a;
    }
LAB_0043b724:
    FUN_003c86b4(pcVar4,"crypto/x509/x_name.c",uVar5);
  }
  return uVar7;
}


// ===== 0043b750  FUN_0043b750 =====

undefined8 FUN_0043b750(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_0039b478(param_1,0,&DAT_0077fa08);
  if (0 < iVar1) {
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 8);
    }
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = **(undefined8 **)(param_1 + 0x10);
    }
    return 1;
  }
  return 0;
}


// ===== 0043b7cc  FUN_0043b7cc =====

undefined8 FUN_0043b7cc(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  plVar1 = (long *)FUN_003c8474(0x28,"crypto/x509/x_name.c",0x5c);
  if (plVar1 == (long *)0x0) {
    return 0;
  }
  uVar3 = 0x80007;
  lVar2 = FUN_0040bf0c();
  *plVar1 = lVar2;
  if (lVar2 == 0) {
    uVar3 = 0x8000f;
    uVar4 = 0x61;
  }
  else {
    lVar2 = FUN_00387e50();
    plVar1[2] = lVar2;
    if (lVar2 != 0) {
      *param_1 = (long)plVar1;
      *(undefined4 *)(plVar1 + 1) = 1;
      return 1;
    }
    uVar4 = 0x65;
  }
  FUN_00379868();
  FUN_0037995c("crypto/x509/x_name.c",uVar4,"x509_name_ex_new");
  FUN_00379a5c(0xd,uVar3,0);
  FUN_0040bd78(*plVar1);
  FUN_003c86b4(plVar1,"crypto/x509/x_name.c",0x6f);
  return 0;
}


// ===== 0043b8a4  FUN_0043b8a4 =====

void FUN_0043b8a4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if ((param_1 != (undefined8 *)0x0) &&
     (puVar1 = (undefined8 *)*param_1, puVar1 != (undefined8 *)0x0)) {
    FUN_00387e64(puVar1[2]);
    FUN_0040ca6c(*puVar1,PTR_FUN_007a1ca0);
    FUN_003c86b4(puVar1[3],"crypto/x509/x_name.c",0x7e);
    FUN_003c86b4(puVar1,"crypto/x509/x_name.c",0x7f);
    *param_1 = 0;
  }
  return;
}


// ===== 0043b918  FUN_0043b918 =====

undefined8 FUN_0043b918(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  void *__src;
  undefined8 *local_58;
  undefined8 local_50;
  void *local_48;
  
  __src = (void *)*param_2;
  if (0xfffff < param_3) {
    param_3 = 0x100000;
  }
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  local_48 = __src;
  uVar4 = FUN_0038a7b0(&local_50,&local_48,param_3,&DAT_0077fa88);
  if ((int)uVar4 < 1) {
    return uVar4;
  }
  puVar7 = (undefined8 *)*param_1;
  if (puVar7 != (undefined8 *)0x0) {
    FUN_00387e64(puVar7[2]);
    FUN_0040ca6c(*puVar7,PTR_FUN_007a1ca0);
    FUN_003c86b4(puVar7[3],"crypto/x509/x_name.c",0x7e);
    FUN_003c86b4(puVar7,"crypto/x509/x_name.c",0x7f);
    *param_1 = 0;
  }
  iVar1 = FUN_0043b7cc(&local_58);
  puVar7 = local_58;
  if (iVar1 == 0) {
LAB_0043bad0:
    if (puVar7 == (undefined8 *)0x0) goto LAB_0043bae4;
  }
  else {
    lVar5 = FUN_00387ed0(local_58[2],(long)local_48 - (long)__src);
    if (lVar5 != 0) {
      memcpy(*(void **)(puVar7[2] + 8),__src,(long)local_48 - (long)__src);
      iVar1 = FUN_0040caf8(local_50);
      if (0 < iVar1) {
        iVar1 = 0;
        do {
          uVar4 = FUN_0040cb0c(local_50,iVar1);
          iVar2 = FUN_0040caf8();
          if (0 < iVar2) {
            iVar2 = 0;
            do {
              lVar5 = FUN_0040cb0c(uVar4,iVar2);
              uVar6 = *puVar7;
              *(int *)(lVar5 + 0x10) = iVar1;
              iVar3 = FUN_0040c89c(uVar6);
              if (iVar3 == 0) goto LAB_0043bad4;
              FUN_0040cb3c(uVar4,iVar2,0);
              iVar2 = iVar2 + 1;
              iVar3 = FUN_0040caf8(uVar4);
            } while (iVar2 < iVar3);
          }
          iVar1 = iVar1 + 1;
          iVar2 = FUN_0040caf8(local_50);
        } while (iVar1 < iVar2);
      }
      iVar1 = FUN_0043bd78(puVar7);
      if (iVar1 != 0) {
        FUN_0040ca6c(local_50,thunk_FUN_0040bd78);
        *(undefined4 *)(puVar7 + 1) = 0;
        *param_1 = puVar7;
        *param_2 = local_48;
        return 1;
      }
      goto LAB_0043bad0;
    }
  }
LAB_0043bad4:
  FUN_0038c75c(puVar7,&DAT_0077fa08);
LAB_0043bae4:
  FUN_0040ca6c(local_50,FUN_0043c200);
  FUN_00379868();
  FUN_0037995c("crypto/x509/x_name.c",0xd2,"x509_name_ex_d2i");
  FUN_00379a5c(0xd,0x8010a,0);
  return 0;
}


// ===== 0043bb40  FUN_0043bb40 =====

ulong FUN_0043bb40(undefined8 *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 local_58;
  long local_38;
  
  param_1 = (undefined8 *)*param_1;
  if (*(int *)(param_1 + 1) == 0) {
LAB_0043bc78:
    uVar7 = *(ulong *)param_1[2];
    if (param_2 != (long *)0x0) {
      memcpy((void *)*param_2,(void *)((ulong *)param_1[2])[1],(long)(int)uVar7);
      *param_2 = *param_2 + (long)(int)uVar7;
    }
    goto LAB_0043bd30;
  }
  lVar4 = FUN_0040bf0c();
  local_38 = lVar4;
  if (lVar4 == 0) {
LAB_0043bce8:
    FUN_00379868();
    FUN_0037995c("crypto/x509/x_name.c",0x11a,"x509_name_encode");
    FUN_00379a5c(0xd,0x8000f,0);
LAB_0043bd1c:
    FUN_0040ca6c(lVar4,thunk_FUN_0040bd78);
  }
  else {
    iVar1 = FUN_0040caf8(*param_1);
    if (0 < iVar1) {
      iVar1 = 0;
      lVar8 = 0;
      iVar2 = -1;
      do {
        lVar5 = FUN_0040cb0c(*param_1,iVar1);
        if (*(int *)(lVar5 + 0x10) != iVar2) {
          lVar8 = FUN_0040bf0c();
          if (lVar8 == 0) goto LAB_0043bce8;
          iVar2 = FUN_0040c89c(lVar4,lVar8);
          if (iVar2 == 0) {
            FUN_0040bd78(lVar8);
            goto LAB_0043bce8;
          }
          iVar2 = *(int *)(lVar5 + 0x10);
        }
        iVar3 = FUN_0040c89c(lVar8,lVar5);
        if (iVar3 == 0) goto LAB_0043bce8;
        iVar1 = iVar1 + 1;
        iVar3 = FUN_0040caf8(*param_1);
      } while (iVar1 < iVar3);
    }
    uVar6 = FUN_0039b480(&local_38,0,&DAT_0077fa88,0xffffffff,0xffffffff);
    lVar4 = FUN_00387ed0(param_1[2],(long)(int)uVar6);
    if (lVar4 == 0) {
      FUN_00379868();
      FUN_0037995c("crypto/x509/x_name.c",0x10f,"x509_name_encode");
      FUN_00379a5c(0xd,0x80007,0);
      lVar4 = local_38;
      goto LAB_0043bd1c;
    }
    local_58 = *(undefined8 *)(param_1[2] + 8);
    FUN_0039b480(&local_38,&local_58,&DAT_0077fa88,0xffffffff,0xffffffff);
    FUN_0040ca6c(local_38,thunk_FUN_0040bd78);
    uVar7 = uVar6 & 0xffffffff;
    *(undefined4 *)(param_1 + 1) = 0;
    if ((int)uVar6 < 0) goto LAB_0043bd30;
    iVar1 = FUN_0043bd78(param_1);
    if (iVar1 != 0) goto LAB_0043bc78;
  }
  uVar7 = 0xffffffff;
LAB_0043bd30:
  return uVar7 & 0xffffffff;
}


// ===== 0043bd50  FUN_0043bd50 =====

long FUN_0043bd50(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  int iVar1;
  
  iVar1 = FUN_003e26a0(param_1,*param_2,param_3,*(undefined8 *)(param_5 + 8));
  return (ulong)(0 < iVar1) << 1;
}


// ===== 0043bd78  FUN_0043bd78 =====

undefined4 FUN_0043bd78(undefined8 *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  long lVar15;
  char *pcVar16;
  uint *puVar17;
  char *pcVar18;
  long local_70;
  undefined8 local_68;
  
  FUN_003c86b4(param_1[3],"crypto/x509/x_name.c",0x13e);
  param_1[3] = 0;
  iVar2 = FUN_0040caf8(*param_1);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    return 1;
  }
  lVar8 = FUN_0040bf0c();
  if (lVar8 == 0) {
    FUN_00379868();
    uVar13 = 0x147;
LAB_0043bfec:
    FUN_0037995c("crypto/x509/x_name.c",uVar13,"x509_name_canon");
    FUN_00379a5c(0xb,0x8000f,0);
  }
  else {
    iVar2 = FUN_0040caf8(*param_1);
    if (0 < iVar2) {
      iVar2 = 0;
      lVar15 = 0;
      iVar3 = -1;
      do {
        puVar9 = (undefined8 *)FUN_0040cb0c(*param_1,iVar2);
        if (*(int *)(puVar9 + 2) != iVar3) {
          lVar15 = FUN_0040bf0c();
          if (lVar15 == 0) goto LAB_0043c004;
          iVar3 = FUN_0040c89c(lVar8,lVar15);
          if (iVar3 == 0) {
            FUN_0040bd78(lVar15);
            FUN_00379868();
            uVar13 = 0x152;
            goto LAB_0043bfec;
          }
          iVar3 = *(int *)(puVar9 + 2);
        }
        plVar10 = (long *)FUN_0039a5f4(&DAT_0077f980);
        if (plVar10 == (long *)0x0) {
          FUN_00379868();
          FUN_0037995c("crypto/x509/x_name.c",0x159,"x509_name_canon");
          uVar14 = 0x8000d;
LAB_0043c188:
          FUN_00379a5c(0xb,uVar14,0);
          goto LAB_0043c190;
        }
        lVar11 = FUN_003de510(*puVar9);
        *plVar10 = lVar11;
        if (lVar11 == 0) {
          FUN_00379868();
          FUN_0037995c("crypto/x509/x_name.c",0x15e,"x509_name_canon");
          uVar14 = 0x80008;
          goto LAB_0043c188;
        }
        lVar11 = puVar9[1];
        puVar17 = (uint *)plVar10[1];
        uVar12 = FUN_0038a790(*(undefined4 *)(lVar11 + 4));
        if ((uVar12 & 0x2956) == 0) {
          iVar6 = FUN_0038eb7c(puVar17,lVar11);
          if (iVar6 == 0) goto LAB_0043c190;
        }
        else {
          puVar17[1] = 0xc;
          uVar4 = FUN_003e2e2c(puVar17 + 2,lVar11);
          *puVar17 = uVar4;
          if (uVar4 == 0xffffffff) goto LAB_0043c190;
          if (0 < (int)uVar4) {
            pcVar18 = *(char **)(puVar17 + 2);
            iVar6 = uVar4 + 1;
            pcVar16 = pcVar18;
            uVar12 = (ulong)uVar4;
            do {
              iVar5 = FUN_003c475c(*pcVar16,8);
              if (iVar5 == 0) {
                pcVar18 = pcVar18 + uVar4;
                goto LAB_0043bef0;
              }
              iVar6 = iVar6 + -1;
              pcVar16 = pcVar16 + 1;
              uVar12 = uVar12 - 1;
            } while (1 < iVar6);
          }
LAB_0043bf08:
          pcVar18 = *(char **)(puVar17 + 2);
          iVar6 = (int)pcVar18;
LAB_0043bf14:
          *puVar17 = (int)pcVar18 - iVar6;
        }
        iVar6 = FUN_0040c89c(lVar15,plVar10);
        if (iVar6 == 0) {
          FUN_00379868();
          FUN_0037995c("crypto/x509/x_name.c",0x164,"x509_name_canon");
          uVar14 = 0x8000f;
          goto LAB_0043c188;
        }
        iVar2 = iVar2 + 1;
        iVar6 = FUN_0040caf8(*param_1);
      } while (iVar2 < iVar6);
    }
    iVar2 = FUN_0040caf8(lVar8);
    if (iVar2 < 1) {
      iVar2 = 0;
    }
    else {
      iVar3 = 0;
      iVar2 = 0;
      do {
        local_68 = FUN_0040cb0c(lVar8,iVar3);
        iVar6 = FUN_0039b480(&local_68,0,&DAT_0077fae8,0xffffffff,0xffffffff);
        if (iVar6 < 0) goto LAB_0043c004;
        iVar2 = iVar6 + iVar2;
        iVar3 = iVar3 + 1;
        iVar6 = FUN_0040caf8(lVar8);
      } while (iVar3 < iVar6);
    }
    *(int *)(param_1 + 4) = iVar2;
    local_70 = FUN_003c83a4(iVar2,"crypto/x509/x_name.c",0x170);
    if (local_70 != 0) {
      param_1[3] = local_70;
      iVar2 = FUN_0040caf8(lVar8);
      if (0 < iVar2) {
        iVar2 = 0;
        do {
          local_68 = FUN_0040cb0c(lVar8,iVar2);
          iVar3 = FUN_0039b480(&local_68,&local_70,&DAT_0077fae8,0xffffffff,0xffffffff);
          if (iVar3 < 0) break;
          iVar2 = iVar2 + 1;
          iVar3 = FUN_0040caf8(lVar8);
        } while (iVar2 < iVar3);
      }
      plVar10 = (long *)0x0;
      uVar14 = 1;
      goto LAB_0043c194;
    }
  }
LAB_0043c004:
  plVar10 = (long *)0x0;
LAB_0043c190:
  uVar14 = 0;
LAB_0043c194:
  FUN_0038c75c(plVar10,&DAT_0077f980);
  FUN_0040ca6c(lVar8,FUN_0043c200);
  return uVar14;
LAB_0043bef0:
  pcVar18 = pcVar18 + -1;
  iVar6 = FUN_003c475c(*pcVar18,8);
  iVar5 = (int)uVar12;
  if (iVar6 != 0) goto code_r0x0043bf00;
  pcVar18 = *(char **)(puVar17 + 2);
  iVar6 = 0;
  do {
    cVar1 = *pcVar16;
    if (cVar1 < '\0') {
      pcVar16 = pcVar16 + 1;
      *pcVar18 = cVar1;
      iVar6 = iVar6 + 1;
    }
    else {
      iVar7 = FUN_003c475c((long)cVar1,8);
      if (iVar7 == 0) {
        cVar1 = FUN_003c47b4(*pcVar16);
        iVar6 = iVar6 + 1;
        *pcVar18 = cVar1;
        pcVar16 = pcVar16 + 1;
      }
      else {
        *pcVar18 = ' ';
        do {
          pcVar16 = pcVar16 + 1;
          iVar6 = iVar6 + 1;
          iVar7 = FUN_003c475c(*pcVar16,8);
        } while (iVar7 != 0);
      }
    }
    pcVar18 = pcVar18 + 1;
  } while (iVar6 < iVar5);
  iVar6 = (int)*(undefined8 *)(puVar17 + 2);
  goto LAB_0043bf14;
code_r0x0043bf00:
  uVar12 = (ulong)(iVar5 - 1U);
  if (iVar5 - 1U == 0 || iVar5 < 1) goto LAB_0043bf08;
  goto LAB_0043bef0;
}


// ===== 0043c1fc  thunk_FUN_0040bd78 =====

void thunk_FUN_0040bd78(long param_1)

{
  if (param_1 != 0) {
    FUN_003c86b4(*(undefined8 *)(param_1 + 8),"crypto/stack/stack.c",0x1bf);
    FUN_003c86b4(param_1,"crypto/stack/stack.c",0x1c0);
    return;
  }
  return;
}


// ===== 0043c200  FUN_0043c200 =====

void FUN_0043c200(undefined8 param_1)

{
  FUN_0040ca6c(param_1,FUN_0043b514);
  return;
}


// ===== 0043c20c  FUN_0043c20c =====

undefined * FUN_0043c20c(void)

{
  return &DAT_0077fae8;
}


// ===== 0043c218  FUN_0043c218 =====

void FUN_0043c218(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long local_38;
  
  local_38 = FUN_003c8474(0x30,"crypto/x509/x_pubkey.c",0x48);
  if (local_38 != 0) {
    FUN_0038a86c(&local_38,param_1,param_2,&DAT_0077fbc8,param_3,param_4);
  }
  return;
}


// ===== 0043c28c  FUN_0043c28c =====

void FUN_0043c28c(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_0077fbc8);
  return;
}


// ===== 0043c298  FUN_0043c298 =====

undefined * FUN_0043c298(void)

{
  return &DAT_0077fb48;
}


// ===== 0043c2a4  FUN_0043c2a4 =====

void FUN_0043c2a4(void)

{
  FUN_0038a93c();
  return;
}


// ===== 0043c2b0  FUN_0043c2b0 =====

void FUN_0043c2b0(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_0077fb48);
  return;
}


// ===== 0043c2bc  FUN_0043c2bc =====

void FUN_0043c2bc(void)

{
  FUN_0039a5f4(&DAT_0077fb48);
  return;
}


// ===== 0043c2c8  FUN_0043c2c8 =====

void FUN_0043c2c8(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_0077fb48);
  return;
}


// ===== 0043c2d4  FUN_0043c2d4 =====

long FUN_0043c2d4(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_0039a644(&DAT_0077fb48,param_1,param_2);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x18) = param_1;
    FUN_003c86b4(*(undefined8 *)(lVar1 + 0x20),"crypto/x509/x_pubkey.c",0x34);
    *(undefined8 *)(lVar1 + 0x20) = 0;
    if (param_2 != 0) {
      lVar2 = FUN_003ca2f4(param_2,"crypto/x509/x_pubkey.c",0x37);
      *(long *)(lVar1 + 0x20) = lVar2;
      if (lVar2 == 0) {
        FUN_0038c75c(lVar1,&DAT_0077fb48);
        return 0;
      }
    }
  }
  return lVar1;
}


// ===== 0043c380  FUN_0043c380 =====

long * FUN_0043c380(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long *local_18;
  
  plVar2 = (long *)FUN_003c8474(0x30,"crypto/x509/x_pubkey.c",0x11d);
  if (plVar2 == (long *)0x0) {
    return (long *)0x0;
  }
  lVar3 = param_1[4];
  plVar2[3] = param_1[3];
  local_18 = plVar2;
  FUN_003c86b4(plVar2[4],"crypto/x509/x_pubkey.c",0x34);
  plVar2[4] = 0;
  if (lVar3 != 0) {
    lVar3 = FUN_003ca2f4(lVar3,"crypto/x509/x_pubkey.c",0x37);
    plVar2[4] = lVar3;
    if (lVar3 == 0) {
      FUN_00379868();
      FUN_0037995c("crypto/x509/x_pubkey.c",0x122,"X509_PUBKEY_dup");
      FUN_00379a5c(0xb,0x8000b,0);
      FUN_003a3a50(*plVar2);
      thunk_FUN_0038eddc(plVar2[1]);
      FUN_003a6c04(plVar2[2]);
      FUN_003c86b4(plVar2[4],"crypto/x509/x_pubkey.c",0x5e);
      FUN_003c86b4(plVar2,"crypto/x509/x_pubkey.c",0x5f);
      return (long *)0x0;
    }
  }
  lVar3 = FUN_003a3a74(*param_1);
  *plVar2 = lVar3;
  if (lVar3 != 0) {
    lVar3 = FUN_0038a3e8();
    plVar2[1] = lVar3;
    if ((lVar3 != 0) &&
       (iVar1 = thunk_FUN_0038ebe0(lVar3,*(undefined8 *)((undefined4 *)param_1[1] + 2),
                                   *(undefined4 *)param_1[1]), iVar1 != 0)) {
      if (param_1[2] == 0) {
        return plVar2;
      }
      FUN_0037f6d4();
      lVar3 = FUN_003a8c40(param_1[2]);
      plVar2[2] = lVar3;
      if (lVar3 == 0) {
        *(byte *)(plVar2 + 5) = *(byte *)(plVar2 + 5) | 1;
        iVar1 = FUN_0043c620(plVar2 + 2,plVar2);
        if (iVar1 < 1) {
          FUN_0043c5ac(&local_18);
          FUN_0037f8c4();
          return (long *)0x0;
        }
      }
      FUN_0037f71c();
      return plVar2;
    }
  }
  FUN_003a3a50(*plVar2);
  thunk_FUN_0038eddc(plVar2[1]);
  FUN_003a6c04(plVar2[2]);
  FUN_003c86b4(plVar2[4],"crypto/x509/x_pubkey.c",0x5e);
  FUN_003c86b4(plVar2,"crypto/x509/x_pubkey.c",0x5f);
  FUN_00379868();
  FUN_0037995c("crypto/x509/x_pubkey.c",0x12e,"X509_PUBKEY_dup");
  FUN_00379a5c(0xb,0x8000d,0);
  return (long *)0x0;
}


// ===== 0043c5ac  FUN_0043c5ac =====

void FUN_0043c5ac(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if ((param_1 != (undefined8 *)0x0) &&
     (puVar1 = (undefined8 *)*param_1, puVar1 != (undefined8 *)0x0)) {
    FUN_003a3a50(*puVar1);
    thunk_FUN_0038eddc(puVar1[1]);
    FUN_003a6c04(puVar1[2]);
    FUN_003c86b4(puVar1[4],"crypto/x509/x_pubkey.c",0x5e);
    FUN_003c86b4(puVar1,"crypto/x509/x_pubkey.c",0x5f);
    *param_1 = 0;
  }
  return;
}


// ===== 0043c620  FUN_0043c620 =====

undefined8 FUN_0043c620(long *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = FUN_003dd5b4(*(undefined8 *)*param_2);
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    return 0;
  }
  lVar3 = FUN_003a8a70();
  if (lVar3 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/x_pubkey.c",0x1a9,"x509_pubkey_decode");
    FUN_00379a5c(0xb,0x80006,0);
    return 0xffffffff;
  }
  iVar2 = FUN_003a67a4(lVar3,uVar1);
  if (iVar2 == 0) {
    uVar5 = 0x6f;
    uVar6 = 0x1ae;
  }
  else {
    pcVar4 = *(code **)(*(long *)(lVar3 + 8) + 0x20);
    if (pcVar4 != (code *)0x0) {
      iVar2 = (*pcVar4)(lVar3,param_2);
      if (iVar2 != 0) {
        *param_1 = lVar3;
        return 1;
      }
      goto LAB_0043c724;
    }
    uVar5 = 0x7c;
    uVar6 = 0x1bb;
  }
  FUN_00379868();
  FUN_0037995c("crypto/x509/x_pubkey.c",uVar6,"x509_pubkey_decode");
  FUN_00379a5c(0xb,uVar5,0);
LAB_0043c724:
  FUN_003a6c04(lVar3);
  return 0;
}


// ===== 0043c740  FUN_0043c740 =====

undefined8 FUN_0043c740(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if ((param_1 == (long *)0x0) || (param_2 == 0)) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/x_pubkey.c",0x148,"X509_PUBKEY_set");
    FUN_00379a5c(0xb,0xc0102,0);
    return 0;
  }
  if (*(long *)(param_2 + 8) == 0) {
    if (*(long *)(param_2 + 0x60) != 0) {
      local_38 = 0;
      local_40 = 0;
      uVar3 = FUN_003aa8a0(param_2,0x86,&DAT_001d4441,"SubjectPublicKeyInfo",0);
      iVar1 = FUN_003ac31c(uVar3,&local_38,&local_40);
      if (iVar1 == 0) {
        lVar2 = 0;
      }
      else {
        local_48 = local_38;
        lVar2 = FUN_0038a93c(0,&local_48,local_40,&DAT_0077fb48);
      }
      FUN_003ab75c(uVar3);
      FUN_003c86b4(local_38,"crypto/x509/x_pubkey.c",0x169);
      if (lVar2 != 0) {
LAB_0043c8f0:
        FUN_0038c75c(*param_1,&DAT_0077fb48);
        iVar1 = FUN_003a8c24(param_2);
        if (iVar1 != 0) {
          *param_1 = lVar2;
          if (*(long *)(lVar2 + 0x10) != 0) {
            FUN_003a6c04();
          }
          *(long *)(lVar2 + 0x10) = param_2;
          return 1;
        }
        FUN_00379868();
        FUN_0037995c("crypto/x509/x_pubkey.c",0x173,"X509_PUBKEY_set");
        uVar3 = 0xc0103;
        goto LAB_0043c998;
      }
    }
    FUN_00379868();
    FUN_0037995c("crypto/x509/x_pubkey.c",0x16d,"X509_PUBKEY_set");
    FUN_00379a5c(0xb,0x6f,0);
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_0039a5f4(&DAT_0077fb48);
    if (lVar2 == 0) {
      FUN_00379868();
      FUN_0037995c("crypto/x509/x_pubkey.c",0x14e,"X509_PUBKEY_set");
      uVar3 = 0x8000d;
    }
    else {
      pcVar4 = *(code **)(*(long *)(param_2 + 8) + 0x28);
      if (pcVar4 == (code *)0x0) {
        FUN_00379868();
        FUN_0037995c("crypto/x509/x_pubkey.c",0x157,"X509_PUBKEY_set");
        uVar3 = 0x7c;
      }
      else {
        iVar1 = (*pcVar4)(lVar2,param_2);
        if (iVar1 != 0) goto LAB_0043c8f0;
        FUN_00379868();
        FUN_0037995c("crypto/x509/x_pubkey.c",0x153,"X509_PUBKEY_set");
        uVar3 = 0x7e;
      }
    }
LAB_0043c998:
    FUN_00379a5c(0xb,uVar3,0);
  }
  FUN_0038c75c(lVar2,&DAT_0077fb48);
  return 0;
}


// ===== 0043c9c8  FUN_0043c9c8 =====

long FUN_0043c9c8(long param_1)

{
  if (param_1 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/x_pubkey.c",0x1ca,"X509_PUBKEY_get0");
    FUN_00379a5c(0xb,0xc0102,0);
    return 0;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    return *(long *)(param_1 + 0x10);
  }
  FUN_00379868();
  FUN_0037995c("crypto/x509/x_pubkey.c",0x1d0,"X509_PUBKEY_get0");
  FUN_00379a5c(6,0x72,0);
  return 0;
}


// ===== 0043ca58  FUN_0043ca58 =====

long FUN_0043ca58(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  
  if (param_1 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/x_pubkey.c",0x1ca,"X509_PUBKEY_get0");
    uVar1 = 0xc0102;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 == 0) {
      FUN_00379868();
      FUN_0037995c("crypto/x509/x_pubkey.c",0x1d0,"X509_PUBKEY_get0");
      FUN_00379a5c(6,0x72,0);
      return 0;
    }
    iVar2 = FUN_003a8c24(lVar3);
    if (iVar2 != 0) {
      return lVar3;
    }
    FUN_00379868();
    FUN_0037995c("crypto/x509/x_pubkey.c",0x1dc,"X509_PUBKEY_get");
    uVar1 = 0xc0103;
  }
  FUN_00379a5c(0xb,uVar1,0);
  return 0;
}


// ===== 0043cb3c  FUN_0043cb3c =====

void FUN_0043cb3c(void)

{
  FUN_0043cb4c();
  return;
}


// ===== 0043cb4c  FUN_0043cb4c =====

long FUN_0043cb4c(long *param_1,undefined8 *param_2,undefined8 param_3,long param_4,long param_5,
                 int param_6)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined8 local_58;
  long local_38;
  
  local_58 = *param_2;
  local_38 = 0;
  if (((param_4 == 0) && (param_5 == 0)) && (param_6 == 0)) {
    lVar2 = FUN_0038a93c(0,&local_58,param_3,&DAT_0077fb48);
joined_r0x0043cc3c:
    if (lVar2 != 0) {
      lVar3 = FUN_0043ca58();
      FUN_0038c75c(lVar2,&DAT_0077fb48);
      local_38 = 0;
      if ((lVar3 != 0) && (*param_2 = local_58, param_1 != (long *)0x0)) {
        FUN_003a6c04(*param_1);
        *param_1 = lVar3;
      }
      goto LAB_0043cc84;
    }
  }
  else {
    lVar2 = FUN_003c8474(0x30,"crypto/x509/x_pubkey.c",0x1fb);
    if (lVar2 == 0) {
      return 0;
    }
    *(long *)(lVar2 + 0x18) = param_4;
    local_38 = lVar2;
    FUN_003c86b4(*(undefined8 *)(lVar2 + 0x20),"crypto/x509/x_pubkey.c",0x34);
    *(undefined8 *)(lVar2 + 0x20) = 0;
    if (param_5 == 0) {
LAB_0043cc10:
      bVar1 = *(byte *)(lVar2 + 0x28) & 0xfe;
      if (param_6 != 0) {
        bVar1 = bVar1 + 1;
      }
      *(byte *)(lVar2 + 0x28) = bVar1;
      lVar2 = FUN_0038a93c(&local_38,&local_58,param_3,&DAT_0077fb48);
      goto joined_r0x0043cc3c;
    }
    lVar3 = FUN_003ca2f4(param_5,"crypto/x509/x_pubkey.c",0x37);
    *(long *)(lVar2 + 0x20) = lVar3;
    if (lVar3 != 0) goto LAB_0043cc10;
  }
  lVar3 = 0;
LAB_0043cc84:
  FUN_0038c75c(local_38,&DAT_0077fb48);
  return lVar3;
}


// ===== 0043ccbc  FUN_0043ccbc =====

void FUN_0043ccbc(void)

{
  FUN_0043cb4c();
  return;
}


// ===== 0043ccc4  FUN_0043ccc4 =====

long FUN_0043ccc4(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 local_38;
  
  local_38 = *param_2;
  lVar1 = FUN_0038a93c(0,&local_38,param_3,&DAT_0077fb48);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_0043ca58();
    FUN_0038c75c(lVar1,&DAT_0077fb48);
    if (lVar2 != 0) {
      *param_2 = local_38;
      if (param_1 != (long *)0x0) {
        FUN_003a6c04(*param_1);
        *param_1 = lVar2;
      }
    }
  }
  FUN_0038c75c(0,&DAT_0077fb48);
  return lVar2;
}


// ===== 0043cd68  FUN_0043cd68 =====

ulong FUN_0043cd68(ulong param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  ulong *local_28;
  
  if (param_1 != 0) {
    if (*(long *)(param_1 + 8) == 0) {
      if (*(long *)(param_1 + 0x60) != 0) {
        uVar4 = FUN_003aa8a0(param_1,0x86,&DAT_001d4441,"SubjectPublicKeyInfo",0);
        FUN_00387560();
        lVar2 = FUN_0037db44();
        local_28 = (ulong *)0x0;
        iVar1 = FUN_003abf28(uVar4);
        uVar3 = 0xffffffff;
        if ((iVar1 != 0) && (lVar2 != 0)) {
          iVar1 = FUN_003abe90(uVar4,lVar2);
          if ((iVar1 == 0) || (lVar5 = FUN_0037e4bc(lVar2,0x73,0,&local_28), lVar5 < 1)) {
            uVar3 = 0xffffffff;
          }
          else {
            uVar3 = *local_28;
            if (param_2 != (long *)0x0) {
              if ((void *)*param_2 == (void *)0x0) {
                *param_2 = (long)local_28[1];
                *local_28 = 0;
                local_28[1] = 0;
              }
              else {
                memcpy((void *)*param_2,(void *)local_28[1],(long)(int)uVar3);
                *param_2 = *param_2 + (long)(int)uVar3;
              }
            }
          }
        }
        FUN_0037db50(lVar2);
        FUN_003ab75c(uVar4);
        return uVar3 & 0xffffffff;
      }
      return 0xffffffff;
    }
    lVar2 = FUN_0039a5f4(&DAT_0077fb48);
    if (lVar2 != 0) {
      pcVar6 = *(code **)(*(long *)(param_1 + 8) + 0x28);
      if ((pcVar6 == (code *)0x0) || (iVar1 = (*pcVar6)(lVar2,param_1), iVar1 == 0)) {
        uVar3 = 0xffffffff;
      }
      else {
        *(ulong *)(lVar2 + 0x10) = param_1;
        uVar3 = FUN_0039b478(lVar2,param_2,&DAT_0077fb48);
        uVar3 = uVar3 & 0xffffffff;
        *(undefined8 *)(lVar2 + 0x10) = 0;
      }
      FUN_0038c75c(lVar2,&DAT_0077fb48);
      return uVar3;
    }
    param_1 = 0xffffffff;
  }
  return param_1 & 0xffffffff;
}


// ===== 0043cf3c  FUN_0043cf3c =====

long FUN_0043cf3c(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 local_38;
  
  local_38 = *param_2;
  lVar1 = FUN_0043cb4c(0,&local_38,param_3,0,0,1);
  lVar2 = lVar1;
  if (lVar1 != 0) {
    lVar2 = FUN_003b0ad8();
    FUN_003a6c04(lVar1);
    if ((lVar2 != 0) && (*param_2 = local_38, param_1 != (long *)0x0)) {
      FUN_003fa6a0(*param_1);
      *param_1 = lVar2;
    }
  }
  return lVar2;
}


// ===== 0043cfd0  FUN_0043cfd0 =====

ulong FUN_0043cfd0(ulong param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (param_1 != 0) {
    lVar1 = FUN_003a8a70();
    if (lVar1 != 0) {
      FUN_003a78e0(lVar1,6,param_1);
      uVar2 = FUN_0043cd68(lVar1,param_2);
      *(undefined8 *)(lVar1 + 0x20) = 0;
      FUN_003a6c04(lVar1);
      return uVar2 & 0xffffffff;
    }
    FUN_00379868();
    FUN_0037995c("crypto/x509/x_pubkey.c",0x27b,"i2d_RSA_PUBKEY");
    FUN_00379a5c(0xd,0x80006,0);
    param_1 = 0xffffffff;
  }
  return param_1;
}


// ===== 0043d078  FUN_0043d078 =====

void FUN_0043d078(long param_1)

{
  FUN_0038ee3c(*(undefined8 *)(param_1 + 8));
  FUN_0038eb60(*(undefined8 *)(param_1 + 8),0);
  return;
}


// ===== 0043d0a4  FUN_0043d0a4 =====

undefined8 FUN_0043d0a4(undefined8 *param_1)

{
  undefined8 uVar1;
  long in_x4;
  undefined4 in_w5;
  
  uVar1 = FUN_003a3a84(*param_1);
  if ((int)uVar1 != 0) {
    if (in_x4 != 0) {
      FUN_0038ee3c(param_1[1],in_x4,in_w5);
      FUN_0038eb60(param_1[1],0);
    }
    uVar1 = 1;
  }
  return uVar1;
}


// ===== 0043d100  FUN_0043d100 =====

undefined8
FUN_0043d100(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4,
            undefined8 *param_5)

{
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = *(undefined8 *)*param_5;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_5[1] + 8);
    *param_3 = *(undefined4 *)param_5[1];
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = *param_5;
  }
  return 1;
}


// ===== 0043d140  FUN_0043d140 =====

long FUN_0043d140(long param_1)

{
  if (param_1 != 0) {
    param_1 = *(long *)(*(long *)(param_1 + 0x50) + 8);
  }
  return param_1;
}


// ===== 0043d150  FUN_0043d150 =====

undefined8 FUN_0043d150(long *param_1,long *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 == param_2) {
    return 1;
  }
  if ((param_1 == (long *)0x0) || (param_2 == (long *)0x0)) {
    return 0;
  }
  if ((*param_1 != 0) && (*param_2 != 0)) {
    iVar1 = FUN_003a3cc8(*param_1,*param_2);
    if (iVar1 != 0) {
      return 0;
    }
    if ((param_1[2] != 0) && (param_2[2] != 0)) {
      uVar2 = FUN_003a6e74();
      return uVar2;
    }
    FUN_00379868();
    FUN_0037995c("crypto/x509/x_pubkey.c",0x1d0,"X509_PUBKEY_get0");
    FUN_00379a5c(6,0x72,0);
  }
  return 0xfffffffe;
}


// ===== 0043d20c  FUN_0043d20c =====

undefined8 FUN_0043d20c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = *(undefined8 *)(param_3 + 0x18);
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_3 + 0x20);
  }
  return 1;
}


// ===== 0043d22c  FUN_0043d22c =====

void FUN_0043d22c(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b480(param_1,param_2,&DAT_0077fbc8);
  return;
}


// ===== 0043d238  FUN_0043d238 =====

void FUN_0043d238(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  FUN_003e0e9c(param_1,*param_2,param_3,&DAT_0077fbc8);
  return;
}


// ===== 0043d248  FUN_0043d248 =====

long * FUN_0043d248(long *param_1,undefined8 param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = (long *)FUN_003c8474(0x30,"crypto/x509/x_pubkey.c",0x74);
  plVar3 = plVar1;
  if (plVar1 != (long *)0x0) {
    if (*plVar1 == 0) {
      lVar2 = FUN_003a3a44();
      *plVar1 = lVar2;
      if (lVar2 == 0) goto LAB_0043d2fc;
    }
    if (plVar1[1] == 0) {
      lVar2 = FUN_0038a3e8();
      plVar1[1] = lVar2;
      if (lVar2 == 0) goto LAB_0043d2fc;
    }
    plVar1[3] = param_3;
    FUN_003c86b4(plVar1[4],"crypto/x509/x_pubkey.c",0x34);
    plVar1[4] = 0;
    if (param_4 != 0) {
      lVar2 = FUN_003ca2f4(param_4,"crypto/x509/x_pubkey.c",0x37);
      plVar1[4] = lVar2;
      if (lVar2 == 0) {
LAB_0043d2fc:
        FUN_003a3a50(*plVar1);
        thunk_FUN_0038eddc(plVar1[1]);
        FUN_003a6c04(plVar1[2]);
        FUN_003c86b4(plVar1[4],"crypto/x509/x_pubkey.c",0x5e);
        FUN_003c86b4(plVar1,"crypto/x509/x_pubkey.c",0x5f);
        FUN_00379868();
        FUN_0037995c("crypto/x509/x_pubkey.c",0x7a,"x509_pubkey_ex_new_ex");
        FUN_00379a5c(0xd,0x8000b,0);
        return (long *)0x0;
      }
    }
    plVar3 = (long *)0x1;
    *param_1 = (long)plVar1;
  }
  return plVar3;
}


// ===== 0043d37c  FUN_0043d37c =====

undefined8
FUN_0043d37c(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
            undefined4 param_5,int param_6,undefined4 param_7,undefined8 param_8,undefined8 param_9,
            undefined8 param_10)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long local_a0;
  undefined1 auStack_92 [50];
  undefined1 *local_48;
  
  plVar8 = (long *)*param_1;
  puVar6 = (undefined1 *)*param_2;
  if (plVar8 != (long *)0x0) {
    if (*plVar8 != 0) goto LAB_0043d3f8;
LAB_0043d3ec:
    lVar3 = FUN_003a3a44();
    *plVar8 = lVar3;
    if (lVar3 != 0) goto LAB_0043d3f8;
LAB_0043d494:
    FUN_00379868();
    FUN_0037995c("crypto/x509/x_pubkey.c",0x92,"x509_pubkey_ex_d2i_ex");
    uVar1 = 0x8000b;
LAB_0043d4e8:
    FUN_00379a5c(0xd,uVar1,0);
    return 0;
  }
  uVar4 = FUN_0043d248(param_1,param_2,param_9,param_10);
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  plVar8 = (long *)*param_1;
  if (*plVar8 == 0) goto LAB_0043d3ec;
LAB_0043d3f8:
  if (plVar8[1] == 0) {
    lVar3 = FUN_0038a3e8();
    plVar8[1] = lVar3;
    if (lVar3 == 0) goto LAB_0043d494;
  }
  uVar4 = FUN_0038a7b0(param_1,param_2,param_3,&DAT_0077fbc8,param_5,param_6,param_7,param_8);
  if ((int)uVar4 < 1) {
    return uVar4;
  }
  lVar3 = *param_2 - (long)puVar6;
  if (lVar3 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/x_pubkey.c",0x9e,"x509_pubkey_ex_d2i_ex");
    uVar1 = 0xc0103;
    goto LAB_0043d4e8;
  }
  param_1 = (undefined8 *)*param_1;
  puVar7 = param_1 + 2;
  FUN_003a6c04(*puVar7);
  *puVar7 = 0;
  FUN_0037f6d4();
  iVar2 = FUN_0043c620(puVar7,param_1);
  if (iVar2 == 0) {
    if ((*(byte *)(param_1 + 5) & 1) == 0) {
      local_a0 = lVar3;
      if (param_6 == 0) {
        puVar5 = (undefined1 *)0x0;
      }
      else {
        puVar5 = (undefined1 *)FUN_003ca404(puVar6,lVar3,"crypto/x509/x_pubkey.c",0xc2);
        if (puVar5 == (undefined1 *)0x0) {
          return 0;
        }
        *puVar5 = 0x30;
        puVar6 = puVar5;
      }
      local_48 = puVar6;
      iVar2 = FUN_003dd260(auStack_92,0x32,*(undefined8 *)*param_1,0);
      if (iVar2 < 1) {
        FUN_0037f8c4();
        lVar3 = 0;
      }
      else {
        lVar3 = FUN_00383d54(puVar7,&DAT_001d4441,"SubjectPublicKeyInfo",auStack_92,0x86,param_1[3],
                             param_1[4]);
        if (((lVar3 == 0) || (iVar2 = FUN_00385fb4(lVar3,&local_48,&local_a0), iVar2 == 0)) ||
           (local_a0 == 0)) goto LAB_0043d540;
        FUN_0037f8c4();
        FUN_00379868();
        FUN_0037995c("crypto/x509/x_pubkey.c",0xe0,"x509_pubkey_ex_d2i_ex");
        FUN_00379a5c(0xd,0x72,0);
      }
      uVar4 = 0;
      goto LAB_0043d548;
    }
    lVar3 = 0;
    puVar5 = (undefined1 *)0x0;
  }
  else {
    lVar3 = 0;
    puVar5 = (undefined1 *)0x0;
    if (iVar2 == -1) {
      FUN_0037f8c4();
      lVar3 = 0;
      puVar5 = (undefined1 *)0x0;
      uVar4 = 0xffffffff;
      goto LAB_0043d548;
    }
  }
LAB_0043d540:
  FUN_0037f71c();
  uVar4 = 1;
LAB_0043d548:
  FUN_00385540(lVar3);
  FUN_003c86b4(puVar5,"crypto/x509/x_pubkey.c",0xea);
  return uVar4;
}


// ===== 0043d63c  FUN_0043d63c =====

undefined * FUN_0043d63c(void)

{
  return &DAT_0077fc50;
}


// ===== 0043d648  FUN_0043d648 =====

void FUN_0043d648(void)

{
  FUN_0038a93c();
  return;
}


// ===== 0043d654  FUN_0043d654 =====

void FUN_0043d654(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_0077fc50);
  return;
}


// ===== 0043d660  FUN_0043d660 =====

void FUN_0043d660(void)

{
  FUN_0039a5f4(&DAT_0077fc50);
  return;
}


// ===== 0043d66c  FUN_0043d66c =====

void FUN_0043d66c(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_0077fc50);
  return;
}


// ===== 0043d678  FUN_0043d678 =====

undefined * FUN_0043d678(void)

{
  return &DAT_0077fd58;
}


// ===== 0043d684  FUN_0043d684 =====

void FUN_0043d684(void)

{
  FUN_0038a93c();
  return;
}


// ===== 0043d690  FUN_0043d690 =====

void FUN_0043d690(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_0077fd58);
  return;
}


// ===== 0043d69c  FUN_0043d69c =====

void FUN_0043d69c(void)

{
  FUN_0039a5f4(&DAT_0077fd58);
  return;
}


// ===== 0043d6a8  FUN_0043d6a8 =====

void FUN_0043d6a8(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_0077fd58);
  return;
}


// ===== 0043d6b4  FUN_0043d6b4 =====

void FUN_0043d6b4(undefined8 param_1)

{
  FUN_003a4098(&DAT_0077fd58,param_1);
  return;
}


// ===== 0043d6c4  FUN_0043d6c4 =====

void FUN_0043d6c4(long param_1,undefined8 param_2)

{
  thunk_FUN_0038eddc(*(undefined8 *)(param_1 + 0x60));
  *(undefined8 *)(param_1 + 0x60) = param_2;
  return;
}


// ===== 0043d6f0  FUN_0043d6f0 =====

undefined8 FUN_0043d6f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}


// ===== 0043d6f8  FUN_0043d6f8 =====

undefined8 FUN_0043d6f8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x68) = param_2;
    FUN_003c86b4(*(undefined8 *)(param_1 + 0x70),"crypto/x509/x_req.c",0x98);
    *(undefined8 *)(param_1 + 0x70) = 0;
    if (param_3 != 0) {
      lVar1 = FUN_003ca2f4(param_3,"crypto/x509/x_req.c",0x9b);
      *(long *)(param_1 + 0x70) = lVar1;
      if (lVar1 == 0) {
        return 0;
      }
    }
  }
  return 1;
}


// ===== 0043d75c  FUN_0043d75c =====

long FUN_0043d75c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_0039a5f4(&DAT_0077fd58);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x68) = param_1;
    FUN_003c86b4(*(undefined8 *)(lVar1 + 0x70),"crypto/x509/x_req.c",0x98);
    *(undefined8 *)(lVar1 + 0x70) = 0;
    if (param_2 != 0) {
      lVar2 = FUN_003ca2f4(param_2,"crypto/x509/x_req.c",0x9b);
      *(long *)(lVar1 + 0x70) = lVar2;
      if (lVar2 == 0) {
        FUN_0038c75c(lVar1,&DAT_0077fd58);
        return 0;
      }
    }
  }
  return lVar1;
}


// ===== 0043d800  FUN_0043d800 =====

undefined8 FUN_0043d800(int param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_1 == 1) {
    lVar2 = *param_2;
    lVar1 = FUN_0040bf0c();
    *(long *)(lVar2 + 0x30) = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
  }
  return 1;
}


// ===== 0043d834  FUN_0043d834 =====

undefined8 FUN_0043d834(int param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *param_2;
  if (param_1 < 0xf) {
    if (param_1 != 1) {
      if (param_1 == 3) {
        thunk_FUN_0038eddc(*(undefined8 *)(lVar4 + 0x60));
        FUN_003c86b4(*(undefined8 *)(lVar4 + 0x70),"crypto/x509/x_req.c",0x3f);
        return 1;
      }
      if (param_1 != 4) {
        return 1;
      }
      thunk_FUN_0038eddc(*(undefined8 *)(lVar4 + 0x60));
    }
    *(undefined8 *)(lVar4 + 0x60) = 0;
  }
  else {
    if (param_1 == 0xf) {
      if (lVar4 != 0) {
        lVar3 = param_4[0xe];
        *(undefined8 *)(lVar4 + 0x68) = param_4[0xd];
        FUN_003c86b4(*(undefined8 *)(lVar4 + 0x70),"crypto/x509/x_req.c",0x98);
        *(undefined8 *)(lVar4 + 0x70) = 0;
        if (lVar3 != 0) {
          lVar3 = FUN_003ca2f4(lVar3,"crypto/x509/x_req.c",0x9b);
          *(long *)(lVar4 + 0x70) = lVar3;
          if (lVar3 == 0) {
            return 0;
          }
        }
      }
      if ((param_4[5] != 0) && (lVar3 = FUN_0043c9c8(), lVar3 != 0)) {
        lVar3 = FUN_003a8c40();
        if (lVar3 == 0) {
          FUN_00379868();
          FUN_0037995c("crypto/x509/x_req.c",0x4d,"req_cb");
          uVar1 = 0x80006;
        }
        else {
          iVar2 = FUN_0043c740(lVar4 + 0x28,lVar3);
          FUN_003a6c04(lVar3);
          if (iVar2 != 0) {
            return 1;
          }
          FUN_00379868();
          FUN_0037995c("crypto/x509/x_req.c",0x52,"req_cb");
          uVar1 = 0xc0103;
        }
        FUN_00379a5c(0xb,uVar1,0);
        return 0;
      }
      return 1;
    }
    if (param_1 == 0x10) {
      *param_4 = *(undefined8 *)(lVar4 + 0x68);
      return 1;
    }
    if (param_1 == 0x11) {
      *param_4 = *(undefined8 *)(lVar4 + 0x70);
      return 1;
    }
  }
  return 1;
}


// ===== 0043da14  FUN_0043da14 =====

undefined * FUN_0043da14(void)

{
  return &DAT_0077fe38;
}


// ===== 0043da20  FUN_0043da20 =====

void FUN_0043da20(void)

{
  FUN_0038a93c();
  return;
}


// ===== 0043da2c  FUN_0043da2c =====

void FUN_0043da2c(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_0077fe38);
  return;
}


// ===== 0043da38  FUN_0043da38 =====

void FUN_0043da38(void)

{
  FUN_0039a5f4(&DAT_0077fe38);
  return;
}


// ===== 0043da44  FUN_0043da44 =====

void FUN_0043da44(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_0077fe38);
  return;
}


// ===== 0043da50  FUN_0043da50 =====

undefined8 FUN_0043da50(void)

{
  return 0x780000;
}


// ===== 0043da5c  FUN_0043da5c =====

void FUN_0043da5c(void)

{
  FUN_0038a93c();
  return;
}


// ===== 0043da68  FUN_0043da68 =====

void FUN_0043da68(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,0x780000);
  return;
}


// ===== 0043da74  FUN_0043da74 =====

void FUN_0043da74(void)

{
  FUN_0039a5f4(0x780000);
  return;
}


// ===== 0043da80  FUN_0043da80 =====

void FUN_0043da80(undefined8 param_1)

{
  FUN_0038c75c(param_1,0x780000);
  return;
}


// ===== 0043da8c  FUN_0043da8c =====

void FUN_0043da8c(undefined8 param_1)

{
  FUN_003a4098(0x780000,param_1);
  return;
}


// ===== 0043da9c  FUN_0043da9c =====

undefined8 FUN_0043da9c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x160) = param_2;
    FUN_003c86b4(*(undefined8 *)(param_1 + 0x168),"crypto/x509/x_x509.c",0x96);
    *(undefined8 *)(param_1 + 0x168) = 0;
    if (param_3 != 0) {
      lVar1 = FUN_003ca2f4(param_3,"crypto/x509/x_x509.c",0x99);
      *(long *)(param_1 + 0x168) = lVar1;
      if (lVar1 == 0) {
        return 0;
      }
    }
  }
  return 1;
}


// ===== 0043db00  FUN_0043db00 =====

long FUN_0043db00(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_0039a644(0x780000,param_1,param_2);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x160) = param_1;
    FUN_003c86b4(*(undefined8 *)(lVar1 + 0x168),"crypto/x509/x_x509.c",0x96);
    *(undefined8 *)(lVar1 + 0x168) = 0;
    if (param_2 != 0) {
      lVar2 = FUN_003ca2f4(param_2,"crypto/x509/x_x509.c",0x99);
      *(long *)(lVar1 + 0x168) = lVar2;
      if (lVar2 == 0) {
        FUN_0038c75c(lVar1,0x780000);
        return 0;
      }
    }
  }
  return lVar1;
}


// ===== 0043dbac  FUN_0043dbac =====

void FUN_0043dbac(long param_1)

{
  FUN_003c5168(param_1 + 200);
  return;
}


// ===== 0043dbb4  FUN_0043dbb4 =====

void FUN_0043dbb4(long param_1)

{
  FUN_003c4e94(param_1 + 200);
  return;
}


// ===== 0043dbbc  FUN_0043dbbc =====

long FUN_0043dbbc(long *param_1,long *param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long local_38;
  
  local_38 = *param_2;
  if ((param_1 == (long *)0x0) || (*param_1 == 0)) {
    lVar2 = FUN_0038a93c(param_1,&local_38,param_3,0x780000);
    bVar1 = false;
  }
  else {
    lVar2 = FUN_0038a93c(param_1,&local_38,param_3,0x780000);
    bVar1 = true;
  }
  if (lVar2 != 0) {
    if (((*param_2 - local_38) + param_3 < 1) ||
       (lVar3 = FUN_0043e170(lVar2 + 0x140,&local_38), lVar3 != 0)) {
      *param_2 = local_38;
      return lVar2;
    }
    if (bVar1) {
      return 0;
    }
    FUN_0038c75c(lVar2,0x780000);
    lVar2 = 0;
    if (param_1 != (long *)0x0) {
      *param_1 = 0;
      return lVar2;
    }
  }
  return lVar2;
}


// ===== 0043dcdc  FUN_0043dcdc =====

ulong FUN_0043dcdc(long param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long local_38;
  
  if (param_2 == (long *)0x0) {
    uVar4 = FUN_0039b478(param_1,0,0x780000);
    if ((param_1 != 0) && (0 < (int)uVar4)) {
      iVar3 = FUN_0043e17c(*(undefined8 *)(param_1 + 0x140),0);
      iVar1 = 0;
      if (-1 < iVar3) {
        iVar1 = (int)uVar4;
      }
      return (ulong)(uint)(iVar1 + iVar3);
    }
  }
  else {
    lVar5 = *param_2;
    if (lVar5 == 0) {
      uVar4 = FUN_0039b478(param_1,0,0x780000);
      iVar1 = (int)uVar4;
      if ((param_1 == 0) || (iVar1 < 1)) {
        if (iVar1 < 1) {
          return uVar4;
        }
      }
      else {
        uVar2 = FUN_0043e17c(*(undefined8 *)(param_1 + 0x140),0);
        if ((int)uVar2 < 0) {
          return (ulong)uVar2;
        }
        uVar4 = (ulong)(uVar2 + iVar1);
      }
      lVar5 = FUN_003c83a4(uVar4 & 0xffffffff,"crypto/x509/x_x509.c",0x112);
      *param_2 = lVar5;
      if (lVar5 == 0) {
        return 0xffffffff;
      }
      local_38 = lVar5;
      uVar4 = FUN_0039b478(param_1,&local_38,0x780000);
      iVar1 = (int)uVar4;
      if ((param_1 == 0) || (iVar1 < 1)) {
        if (0 < iVar1) {
          return uVar4;
        }
LAB_0043de98:
        FUN_003c86b4(*param_2,"crypto/x509/x_x509.c",0x119);
        *param_2 = 0;
        return uVar4 & 0xffffffff;
      }
      uVar4 = FUN_0043e17c(*(undefined8 *)(param_1 + 0x140),&local_38);
      uVar2 = (uint)uVar4;
      if ((int)uVar2 < 0) {
        uVar4 = uVar4 & 0xffffffff;
        local_38 = lVar5;
        goto LAB_0043de98;
      }
    }
    else {
      uVar4 = FUN_0039b478(param_1,param_2,0x780000);
      if (param_1 == 0) {
        return uVar4;
      }
      iVar1 = (int)uVar4;
      if (iVar1 < 1) {
        return uVar4;
      }
      uVar2 = FUN_0043e17c(*(undefined8 *)(param_1 + 0x140),param_2);
      if ((int)uVar2 < 0) {
        *param_2 = lVar5;
        return (ulong)uVar2;
      }
    }
    uVar4 = (ulong)(uVar2 + iVar1);
  }
  return uVar4;
}


// ===== 0043dee8  FUN_0043dee8 =====

void FUN_0043dee8(long param_1,undefined8 param_2)

{
  *(undefined4 *)(param_1 + 0x80) = 1;
  FUN_0039b478(param_1,param_2,&DAT_0077fe38);
  return;
}


// ===== 0043defc  FUN_0043defc =====

void FUN_0043defc(long *param_1,long *param_2,long param_3)

{
  if (param_1 != (long *)0x0) {
    *param_1 = param_3 + 0x98;
  }
  if (param_2 != (long *)0x0) {
    *param_2 = param_3 + 0x88;
  }
  return;
}


// ===== 0043df18  FUN_0043df18 =====

void FUN_0043df18(long param_1)

{
  FUN_003dd5b4(*(undefined8 *)(param_1 + 0x88));
  return;
}


// ===== 0043df20  FUN_0043df20 =====

void FUN_0043df20(long param_1,undefined8 param_2)

{
  thunk_FUN_0038eddc(*(undefined8 *)(param_1 + 0x158));
  *(undefined8 *)(param_1 + 0x158) = param_2;
  return;
}


// ===== 0043df4c  FUN_0043df4c =====

undefined8 FUN_0043df4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x158);
}


// ===== 0043df54  FUN_0043df54 =====

undefined8 FUN_0043df54(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *param_2;
  iVar1 = (int)param_1;
  if (iVar1 < 0xf) {
    if (iVar1 != 1) {
      if (iVar1 == 3) {
        FUN_003c525c(param_1,lVar4,lVar4 + 200);
        FUN_0043e194(*(undefined8 *)(lVar4 + 0x140));
        thunk_FUN_0038eddc(*(undefined8 *)(lVar4 + 0xf8));
        FUN_00418698(*(undefined8 *)(lVar4 + 0x100));
        FUN_004190fc(*(undefined8 *)(lVar4 + 0x110));
        FUN_00431670(*(undefined8 *)(lVar4 + 0x108));
        FUN_00418788(*(undefined8 *)(lVar4 + 0x118));
        FUN_0041bb54(*(undefined8 *)(lVar4 + 0x120));
        thunk_FUN_0038eddc(*(undefined8 *)(lVar4 + 0x158));
        FUN_003c86b4(*(undefined8 *)(lVar4 + 0x168),"crypto/x509/x_x509.c",0x62);
        return 1;
      }
      if (iVar1 != 4) {
        return 1;
      }
      FUN_003c525c(3,lVar4,lVar4 + 200);
      FUN_0043e194(*(undefined8 *)(lVar4 + 0x140));
      thunk_FUN_0038eddc(*(undefined8 *)(lVar4 + 0xf8));
      FUN_00418698(*(undefined8 *)(lVar4 + 0x100));
      FUN_004190fc(*(undefined8 *)(lVar4 + 0x110));
      FUN_00431670(*(undefined8 *)(lVar4 + 0x108));
      FUN_00418788(*(undefined8 *)(lVar4 + 0x118));
      FUN_0041bb54(*(undefined8 *)(lVar4 + 0x120));
      thunk_FUN_0038eddc(*(undefined8 *)(lVar4 + 0x158));
    }
    *(undefined4 *)(lVar4 + 0x150) = 0;
    *(undefined8 *)(lVar4 + 0xd8) = 0xffffffffffffffff;
    *(undefined8 *)(lVar4 + 0xe0) = 0xffffffffffffffff;
    *(undefined8 *)(lVar4 + 0xe8) = 0;
    *(undefined8 *)(lVar4 + 0xf0) = 0;
    *(undefined8 *)(lVar4 + 0x158) = 0;
    *(undefined8 *)(lVar4 + 0x140) = 0;
    *(undefined8 *)(lVar4 + 0x100) = 0;
    *(undefined8 *)(lVar4 + 0xf8) = 0;
    *(undefined8 *)(lVar4 + 0x110) = 0;
    *(undefined8 *)(lVar4 + 0x108) = 0;
    *(undefined8 *)(lVar4 + 0x120) = 0;
    *(undefined8 *)(lVar4 + 0x118) = 0;
    uVar2 = FUN_003c4ee0(3,lVar4,lVar4 + 200);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
  }
  else if (iVar1 == 0xf) {
    if (lVar4 != 0) {
      lVar3 = param_4[0x2d];
      *(undefined8 *)(lVar4 + 0x160) = param_4[0x2c];
      FUN_003c86b4(*(undefined8 *)(lVar4 + 0x168),"crypto/x509/x_x509.c",0x96);
      *(undefined8 *)(lVar4 + 0x168) = 0;
      if (lVar3 != 0) {
        lVar3 = FUN_003ca2f4(lVar3,"crypto/x509/x_x509.c",0x99);
        *(long *)(lVar4 + 0x168) = lVar3;
        if (lVar3 == 0) {
          return 0;
        }
      }
    }
  }
  else {
    if (iVar1 == 0x10) {
      *param_4 = *(undefined8 *)(lVar4 + 0x160);
      return 1;
    }
    if (iVar1 == 0x11) {
      *param_4 = *(undefined8 *)(lVar4 + 0x168);
      return 1;
    }
  }
  return 1;
}


// ===== 0043e128  FUN_0043e128 =====

undefined * FUN_0043e128(void)

{
  return &DAT_007800e0;
}


// ===== 0043e134  FUN_0043e134 =====

void FUN_0043e134(void)

{
  FUN_0038a93c();
  return;
}


// ===== 0043e140  FUN_0043e140 =====

void FUN_0043e140(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_007800e0);
  return;
}


// ===== 0043e14c  FUN_0043e14c =====

void FUN_0043e14c(void)

{
  FUN_0039a5f4(&DAT_007800e0);
  return;
}


// ===== 0043e158  FUN_0043e158 =====

void FUN_0043e158(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_007800e0);
  return;
}


// ===== 0043e164  FUN_0043e164 =====

undefined * FUN_0043e164(void)

{
  return &DAT_00780168;
}


// ===== 0043e170  FUN_0043e170 =====

void FUN_0043e170(void)

{
  FUN_0038a93c();
  return;
}


// ===== 0043e17c  FUN_0043e17c =====

void FUN_0043e17c(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_00780168);
  return;
}


// ===== 0043e188  FUN_0043e188 =====

void FUN_0043e188(void)

{
  FUN_0039a5f4(&DAT_00780168);
  return;
}


// ===== 0043e194  FUN_0043e194 =====

void FUN_0043e194(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_00780168);
  return;
}


// ===== 0043e1a0  FUN_0043e1a0 =====

bool FUN_0043e1a0(long param_1)

{
  return *(long *)(param_1 + 0x140) != 0;
}


// ===== 0043e1b0  FUN_0043e1b0 =====

long FUN_0043e1b0(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  if (param_2 == 0) {
    if (((param_1 != 0) && (*(long *)(param_1 + 0x140) != 0)) &&
       (lVar2 = *(long *)(*(long *)(param_1 + 0x140) + 0x10), lVar2 != 0)) {
      thunk_FUN_0038eddc(lVar2);
      *(undefined8 *)(*(long *)(param_1 + 0x140) + 0x10) = 0;
    }
    param_1 = 1;
  }
  else if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 0x140);
    if (lVar2 == 0) {
      param_3 = param_3 & 0xffffffff;
      lVar2 = FUN_0039a5f4(&DAT_00780168);
      *(long *)(param_1 + 0x140) = lVar2;
      if (lVar2 == 0) {
        return 0;
      }
    }
    lVar1 = *(long *)(lVar2 + 0x10);
    uVar3 = param_3;
    if (lVar1 == 0) {
      uVar3 = param_3 & 0xffffffff;
      lVar1 = FUN_0038a418(0,param_2,param_3);
      *(long *)(lVar2 + 0x10) = lVar1;
      if (lVar1 == 0) {
        return 0;
      }
    }
    lVar2 = FUN_0038ebe0(lVar1,param_2,uVar3);
    return lVar2;
  }
  return param_1;
}


// ===== 0043e270  FUN_0043e270 =====

long FUN_0043e270(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  if (param_2 == 0) {
    if (((param_1 != 0) && (*(long *)(param_1 + 0x140) != 0)) &&
       (lVar2 = *(long *)(*(long *)(param_1 + 0x140) + 0x18), lVar2 != 0)) {
      thunk_FUN_0038eddc(lVar2);
      *(undefined8 *)(*(long *)(param_1 + 0x140) + 0x18) = 0;
    }
    param_1 = 1;
  }
  else if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 0x140);
    if (lVar2 == 0) {
      param_3 = param_3 & 0xffffffff;
      lVar2 = FUN_0039a5f4(&DAT_00780168);
      *(long *)(param_1 + 0x140) = lVar2;
      if (lVar2 == 0) {
        return 0;
      }
    }
    lVar1 = *(long *)(lVar2 + 0x18);
    uVar3 = param_3;
    if (lVar1 == 0) {
      uVar3 = param_3 & 0xffffffff;
      lVar1 = FUN_0038a358(0,param_2,param_3);
      *(long *)(lVar2 + 0x18) = lVar1;
      if (lVar1 == 0) {
        return 0;
      }
    }
    lVar2 = FUN_0038ebe0(lVar1,param_2,uVar3);
    return lVar2;
  }
  return param_1;
}


// ===== 0043e330  FUN_0043e330 =====

undefined8 FUN_0043e330(long param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  if ((*(long *)(param_1 + 0x140) != 0) &&
     (puVar1 = *(undefined4 **)(*(long *)(param_1 + 0x140) + 0x10), puVar1 != (undefined4 *)0x0)) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *puVar1;
    }
    return *(undefined8 *)(puVar1 + 2);
  }
  return 0;
}


// ===== 0043e35c  FUN_0043e35c =====

undefined8 FUN_0043e35c(long param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  if ((*(long *)(param_1 + 0x140) != 0) &&
     (puVar1 = *(undefined4 **)(*(long *)(param_1 + 0x140) + 0x18), puVar1 != (undefined4 *)0x0)) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *puVar1;
    }
    return *(undefined8 *)(puVar1 + 2);
  }
  return 0;
}


// ===== 0043e388  FUN_0043e388 =====

undefined8 FUN_0043e388(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_003de510(param_2);
    if (lVar2 == 0) {
      return 0;
    }
  }
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 0x140);
    if (plVar4 == (long *)0x0) {
      plVar4 = (long *)FUN_0039a5f4(&DAT_00780168);
      *(long **)(param_1 + 0x140) = plVar4;
      if (plVar4 == (long *)0x0) goto LAB_0043e418;
    }
    lVar3 = *plVar4;
    if (lVar3 == 0) {
      lVar3 = FUN_0040bf0c();
      *plVar4 = lVar3;
      if (lVar3 == 0) goto LAB_0043e418;
    }
    if (lVar2 == 0) {
      return 1;
    }
    iVar1 = FUN_0040c89c(lVar3,lVar2);
    if (iVar1 != 0) {
      return 1;
    }
  }
LAB_0043e418:
  FUN_0039a0f4(lVar2);
  return 0;
}


// ===== 0043e448  FUN_0043e448 =====

undefined8 FUN_0043e448(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = FUN_003de510(param_2);
  if (lVar2 == 0) {
    return 0;
  }
  if (param_1 != 0) {
    lVar4 = *(long *)(param_1 + 0x140);
    if (lVar4 == 0) {
      lVar4 = FUN_0039a5f4(&DAT_00780168);
      *(long *)(param_1 + 0x140) = lVar4;
      if (lVar4 == 0) goto LAB_0043e4c8;
    }
    lVar3 = *(long *)(lVar4 + 8);
    if (lVar3 == 0) {
      lVar3 = FUN_0040bf0c();
      *(long *)(lVar4 + 8) = lVar3;
      if (lVar3 == 0) goto LAB_0043e4c8;
    }
    iVar1 = FUN_0040c89c(lVar3,lVar2);
    if (0 < iVar1) {
      return 1;
    }
  }
LAB_0043e4c8:
  FUN_0039a0f4(lVar2);
  return 0;
}


// ===== 0043e4e4  FUN_0043e4e4 =====

void FUN_0043e4e4(long param_1)

{
  if (*(undefined8 **)(param_1 + 0x140) != (undefined8 *)0x0) {
    FUN_0040ca6c(**(undefined8 **)(param_1 + 0x140),PTR_FUN_007a19a8);
    **(undefined8 **)(param_1 + 0x140) = 0;
  }
  return;
}


// ===== 0043e520  FUN_0043e520 =====

void FUN_0043e520(long param_1)

{
  if (*(long *)(param_1 + 0x140) != 0) {
    FUN_0040ca6c(*(undefined8 *)(*(long *)(param_1 + 0x140) + 8),PTR_FUN_007a19a8);
    *(undefined8 *)(*(long *)(param_1 + 0x140) + 8) = 0;
  }
  return;
}


// ===== 0043e55c  FUN_0043e55c =====

undefined8 FUN_0043e55c(long param_1)

{
  if (*(undefined8 **)(param_1 + 0x140) != (undefined8 *)0x0) {
    return **(undefined8 **)(param_1 + 0x140);
  }
  return 0;
}


// ===== 0043e574  FUN_0043e574 =====

undefined8 FUN_0043e574(long param_1)

{
  if (*(long *)(param_1 + 0x140) != 0) {
    return *(undefined8 *)(*(long *)(param_1 + 0x140) + 8);
  }
  return 0;
}


// ===== 0043e58c  FUN_0043e58c =====

undefined8 FUN_0043e58c(undefined8 param_1,long param_2,undefined8 *param_3,long *param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  code *pcVar6;
  
  uVar2 = FUN_0043eb78(param_2);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  pcVar6 = (code *)0x0;
  puVar5 = (undefined8 *)(param_2 + 8);
  do {
    while( true ) {
      iVar1 = *(int *)(puVar5 + -1);
      if (1 < iVar1) break;
      if (iVar1 == 1) {
        DAT_007ac860 = *puVar5;
        puVar5 = puVar5 + 2;
      }
      else {
        if (iVar1 == 0) {
          if (pcVar6 == (code *)0x0) {
            return 0;
          }
          lVar3 = FUN_0046b838();
          *param_4 = lVar3;
          if (lVar3 == 0) {
            lVar3 = 0;
          }
          else {
            lVar4 = FUN_0043ee88();
            lVar3 = *param_4;
            if (lVar4 != 0) {
              uVar2 = (*pcVar6)(param_1);
              FUN_0046b85c(lVar3,uVar2);
              FUN_0046b868(*param_4,param_1);
              FUN_0046b874(*param_4,lVar4);
              *param_3 = &DAT_00780268;
              return 1;
            }
          }
          FUN_0046b84c(lVar3);
          *param_4 = 0;
          return 0;
        }
LAB_0043e5d8:
        puVar5 = puVar5 + 2;
      }
    }
    if (iVar1 == 2) {
      DAT_007ac868 = *puVar5;
      goto LAB_0043e5d8;
    }
    if (iVar1 != 4) goto LAB_0043e5d8;
    pcVar6 = (code *)*puVar5;
    puVar5 = puVar5 + 2;
  } while( true );
}


// ===== 0043e6c4  FUN_0043e6c4 =====

void FUN_0043e6c4(undefined8 param_1)

{
  FUN_0046b898();
  FUN_0038735c();
  FUN_0046b84c(param_1);
  return;
}


// ===== 0043e6ec  FUN_0043e6ec =====

undefined ** FUN_0043e6ec(void)

{
  return &PTR_DAT_007802b8;
}


// ===== 0043e6f8  FUN_0043e6f8 =====

undefined8 FUN_0043e6f8(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_003cb140(param_2,&DAT_001eaa75);
  if ((((lVar2 == 0) || (uVar3 = FUN_003cda9c(lVar2,"OpenSSL Base Provider"), (int)uVar3 != 0)) &&
      ((lVar2 = FUN_003cb140(param_2,"version"), lVar2 == 0 ||
       (uVar3 = FUN_003cda9c(lVar2,"3.2.1"), (int)uVar3 != 0)))) &&
     ((lVar2 = FUN_003cb140(param_2,"buildinfo"), lVar2 == 0 ||
      (uVar3 = FUN_003cda9c(lVar2,"3.2.1"), (int)uVar3 != 0)))) {
    lVar2 = FUN_003cb140(param_2,"status");
    if (lVar2 != 0) {
      uVar1 = FUN_0043eb70();
      uVar3 = thunk_FUN_003cb490(lVar2,uVar1);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}


// ===== 0043e7b0  FUN_0043e7b0 =====

undefined ** FUN_0043e7b0(undefined8 param_1,int param_2,undefined4 *param_3)

{
  *param_3 = 0;
  if (param_2 < 0x15) {
    if (param_2 == 5) {
      return &PTR_s_SEED_SRC_00780860;
    }
    if (param_2 == 0x14) {
      return &PTR_DAT_00780380;
    }
  }
  else {
    if (param_2 == 0x16) {
      return &PTR_DAT_00780820;
    }
    if (param_2 == 0x15) {
      return &PTR_DAT_007806a0;
    }
  }
  return (undefined **)0x0;
}


// ===== 0043e814  FUN_0043e814 =====

undefined8 FUN_0043e814(undefined8 param_1,long param_2,undefined8 *param_3,long *param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  code *pcVar6;
  
  uVar2 = FUN_0043eb78(param_2);
  if (((int)uVar2 == 0) || (uVar2 = FUN_0043f1f0(param_2), (int)uVar2 == 0)) {
    return uVar2;
  }
  pcVar6 = (code *)0x0;
  puVar5 = (undefined8 *)(param_2 + 8);
  do {
    while( true ) {
      iVar1 = *(int *)(puVar5 + -1);
      if (1 < iVar1) break;
      if (iVar1 == 1) {
        DAT_007ac870 = *puVar5;
        puVar5 = puVar5 + 2;
      }
      else {
        if (iVar1 == 0) {
          if (pcVar6 == (code *)0x0) {
            return 0;
          }
          lVar3 = FUN_0046b838();
          *param_4 = lVar3;
          if (lVar3 == 0) {
            lVar3 = 0;
          }
          else {
            lVar4 = FUN_0043ee88();
            lVar3 = *param_4;
            if (lVar4 != 0) {
              uVar2 = (*pcVar6)(param_1);
              FUN_0046b85c(lVar3,uVar2);
              FUN_0046b868(*param_4,param_1);
              FUN_0046b874(*param_4,lVar4);
              *param_3 = &DAT_007808a0;
              FUN_0043fcf8(&PTR_DAT_00780900,&DAT_007ac880);
              return 1;
            }
          }
          FUN_0046b84c(lVar3);
          *param_4 = 0;
          return 0;
        }
LAB_0043e86c:
        puVar5 = puVar5 + 2;
      }
    }
    if (iVar1 == 2) {
      DAT_007ac878 = *puVar5;
      goto LAB_0043e86c;
    }
    if (iVar1 != 4) goto LAB_0043e86c;
    pcVar6 = (code *)*puVar5;
    puVar5 = puVar5 + 2;
  } while( true );
}


// ===== 0043e96c  FUN_0043e96c =====

void FUN_0043e96c(undefined8 param_1)

{
  FUN_0046b898();
  FUN_0038735c();
  FUN_0046b84c(param_1);
  return;
}


// ===== 0043e994  FUN_0043e994 =====

undefined ** FUN_0043e994(void)

{
  return &PTR_DAT_00781238;
}


// ===== 0043e9a0  FUN_0043e9a0 =====

undefined8 FUN_0043e9a0(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_003cb140(param_2,&DAT_001eaa75);
  if ((((lVar2 == 0) || (uVar3 = FUN_003cda9c(lVar2,"OpenSSL Default Provider"), (int)uVar3 != 0))
      && ((lVar2 = FUN_003cb140(param_2,"version"), lVar2 == 0 ||
          (uVar3 = FUN_003cda9c(lVar2,"3.2.1"), (int)uVar3 != 0)))) &&
     ((lVar2 = FUN_003cb140(param_2,"buildinfo"), lVar2 == 0 ||
      (uVar3 = FUN_003cda9c(lVar2,"3.2.1"), (int)uVar3 != 0)))) {
    lVar2 = FUN_003cb140(param_2,"status");
    if (lVar2 != 0) {
      uVar1 = FUN_0043eb70();
      uVar3 = thunk_FUN_003cb490(lVar2,uVar1);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}


// ===== 0043ea58  FUN_0043ea58 =====

undefined * FUN_0043ea58(undefined8 param_1,int param_2,undefined4 *param_3)

{
  *param_3 = 0;
  if (param_2 - 1U < 0x16) {
    return (&PTR_PTR_s_SHA1_SHA_1_SSL3_SHA1_1_3_14_3_2__00782160)[param_2 - 1U];
  }
  return (undefined *)0x0;
}


// ===== 0043ea80  FUN_0043ea80 =====

undefined8
FUN_0043ea80(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_3 = &DAT_00782210;
  *param_4 = param_1;
  return 1;
}


// ===== 0043ea9c  FUN_0043ea9c =====

undefined ** FUN_0043ea9c(void)

{
  return &PTR_DAT_00782250;
}


// ===== 0043eaa8  FUN_0043eaa8 =====

undefined8 FUN_0043eaa8(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_003cb140(param_2,&DAT_001eaa75);
  if ((((lVar2 == 0) || (uVar3 = FUN_003cda9c(lVar2,"OpenSSL Null Provider"), (int)uVar3 != 0)) &&
      ((lVar2 = FUN_003cb140(param_2,"version"), lVar2 == 0 ||
       (uVar3 = FUN_003cda9c(lVar2,"3.2.1"), (int)uVar3 != 0)))) &&
     ((lVar2 = FUN_003cb140(param_2,"buildinfo"), lVar2 == 0 ||
      (uVar3 = FUN_003cda9c(lVar2,"3.2.1"), (int)uVar3 != 0)))) {
    lVar2 = FUN_003cb140(param_2,"status");
    if (lVar2 != 0) {
      uVar1 = FUN_0043eb70();
      uVar3 = thunk_FUN_003cb490(lVar2,uVar1);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}


// ===== 0043eb60  FUN_0043eb60 =====

undefined8 FUN_0043eb60(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  *param_3 = 0;
  return 0;
}


// ===== 0043eb6c  FUN_0043eb6c =====

void FUN_0043eb6c(void)

{
  return;
}


// ===== 0043eb70  FUN_0043eb70 =====

undefined8 FUN_0043eb70(void)

{
  return 1;
}


// ===== 0043eb78  FUN_0043eb78 =====

undefined8 FUN_0043eb78(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  
  lVar2 = DAT_007acfe0;
  lVar3 = DAT_007ad028;
  lVar4 = DAT_007ad020;
  lVar5 = DAT_007ad018;
  lVar6 = DAT_007ad010;
  lVar7 = DAT_007ad008;
  lVar8 = DAT_007ad000;
  lVar9 = DAT_007acff8;
  lVar10 = DAT_007acff0;
  plVar11 = (long *)(param_1 + 8);
  lVar12 = DAT_007acfe8;
LAB_0043ebd4:
  iVar1 = (int)plVar11[-1];
  if (iVar1 < 0x2d) {
    if (iVar1 < 0x2a) {
      if (iVar1 == 0x28) {
        if (lVar2 == 0) {
          lVar2 = *plVar11;
          plVar11 = plVar11 + 2;
          DAT_007acfe0 = lVar2;
          goto LAB_0043ebd4;
        }
      }
      else if (iVar1 == 0x29) {
        if (lVar12 == 0) {
          lVar12 = *plVar11;
          plVar11 = plVar11 + 2;
          DAT_007acfe8 = lVar12;
          goto LAB_0043ebd4;
        }
      }
      else if (iVar1 == 0) {
        return 1;
      }
    }
    else if (iVar1 == 0x2a) {
      if (lVar10 == 0) {
        lVar10 = *plVar11;
        plVar11 = plVar11 + 2;
        DAT_007acff0 = lVar10;
        goto LAB_0043ebd4;
      }
    }
    else if (iVar1 == 0x2b) {
      if (lVar9 == 0) {
        lVar9 = *plVar11;
        plVar11 = plVar11 + 2;
        DAT_007acff8 = lVar9;
        goto LAB_0043ebd4;
      }
    }
    else if ((iVar1 == 0x2c) && (lVar5 == 0)) {
      lVar5 = *plVar11;
      plVar11 = plVar11 + 2;
      DAT_007ad018 = lVar5;
      goto LAB_0043ebd4;
    }
  }
  else {
    if (iVar1 < 0x30) {
      if (iVar1 == 0x2d) {
        if (lVar4 == 0) {
          lVar4 = *plVar11;
          DAT_007ad020 = lVar4;
        }
        goto LAB_0043ebd0;
      }
      if ((iVar1 != 0x2e) || (lVar3 != 0)) goto LAB_0043ebd0;
      lVar3 = *plVar11;
      plVar11 = plVar11 + 2;
      DAT_007ad028 = lVar3;
      goto LAB_0043ebd4;
    }
    if (iVar1 == 0x30) {
      if (lVar7 == 0) {
        lVar7 = *plVar11;
        plVar11 = plVar11 + 2;
        DAT_007ad008 = lVar7;
        goto LAB_0043ebd4;
      }
    }
    else {
      if (iVar1 != 0x31) {
        if ((iVar1 != 0x32) || (lVar6 != 0)) goto LAB_0043ebd0;
        lVar6 = *plVar11;
        plVar11 = plVar11 + 2;
        DAT_007ad010 = lVar6;
        goto LAB_0043ebd4;
      }
      if (lVar8 == 0) {
        lVar8 = *plVar11;
        plVar11 = plVar11 + 2;
        DAT_007ad000 = lVar8;
        goto LAB_0043ebd4;
      }
    }
  }
LAB_0043ebd0:
  plVar11 = plVar11 + 2;
  goto LAB_0043ebd4;
}


// ===== 0043ecf0  FUN_0043ecf0 =====

undefined8 FUN_0043ecf0(void)

{
  undefined8 uVar1;
  
  if (DAT_007acfe0 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0043ecfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*DAT_007acfe0)();
    return uVar1;
  }
  return 0;
}


// ===== 0043ed08  FUN_0043ed08 =====

undefined8 FUN_0043ed08(void)

{
  undefined8 uVar1;
  
  if (DAT_007acfe8 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0043ed14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*DAT_007acfe8)();
    return uVar1;
  }
  return 0;
}


// ===== 0043ed20  FUN_0043ed20 =====

undefined8 FUN_0043ed20(void)

{
  undefined8 uVar1;
  
  if (DAT_007acff0 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0043ed2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*DAT_007acff0)();
    return uVar1;
  }
  return 0;
}


// ===== 0043ed38  FUN_0043ed38 =====

undefined8 FUN_0043ed38(void)

{
  undefined8 uVar1;
  
  if (DAT_007acff8 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0043ed44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*DAT_007acff8)();
    return uVar1;
  }
  return 0;
}


// ===== 0043ed50  FUN_0043ed50 =====

undefined8 FUN_0043ed50(void)

{
  undefined8 uVar1;
  
  if (DAT_007ad000 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0043ed5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*DAT_007ad000)();
    return uVar1;
  }
  return 0xffffffff;
}


// ===== 0043ed68  FUN_0043ed68 =====

undefined8 FUN_0043ed68(void)

{
  undefined8 uVar1;
  
  if (DAT_007ad008 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0043ed74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*DAT_007ad008)();
    return uVar1;
  }
  return 0xffffffff;
}


// ===== 0043ed80  FUN_0043ed80 =====

undefined8 FUN_0043ed80(void)

{
  undefined8 uVar1;
  
  if (DAT_007ad010 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0043ed8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*DAT_007ad010)();
    return uVar1;
  }
  return 0xffffffff;
}


// ===== 0043ed98  FUN_0043ed98 =====

undefined8 FUN_0043ed98(void)

{
  undefined8 uVar1;
  
  if (DAT_007ad018 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0043eda4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*DAT_007ad018)();
    return uVar1;
  }
  return 0;
}


// ===== 0043edb0  FUN_0043edb0 =====

undefined8 FUN_0043edb0(void)

{
  undefined8 uVar1;
  
  if (DAT_007ad020 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0043edbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*DAT_007ad020)();
    return uVar1;
  }
  return 0;
}


// ===== 0043edc8  FUN_0043edc8 =====

undefined8 FUN_0043edc8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (DAT_007ad028 != (code *)0x0) {
    uStack_28 = param_3[1];
    local_30 = *param_3;
    uStack_18 = param_3[3];
    uStack_20 = param_3[2];
    uVar1 = (*DAT_007ad028)(param_1,param_2,&local_30);
    return uVar1;
  }
  return 0xffffffff;
}


// ===== 0043ee04  FUN_0043ee04 =====

undefined8
FUN_0043ee04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 *local_30;
  undefined1 *puStack_28;
  undefined8 *puStack_20;
  undefined8 uStack_18;
  
  puStack_20 = &local_80;
  puStack_28 = &stack0xffffffffffffffb0;
  if (DAT_007ad028 != (code *)0x0) {
    uStack_18 = 0xffffff80ffffffd0;
    local_80 = param_3;
    uStack_78 = param_4;
    local_70 = param_5;
    uStack_68 = param_6;
    local_60 = param_7;
    uStack_58 = param_8;
    local_30 = (undefined1 *)register0x00000008;
    uVar1 = (*DAT_007ad028)(param_1,param_2,&local_30);
    return uVar1;
  }
  return 0xffffffff;
}


// ===== 0043ee88  FUN_0043ee88 =====

long FUN_0043ee88(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_003872cc(0x419,"BIO to Core filter");
  if (((((lVar2 == 0) || (iVar1 = FUN_00387414(lVar2,FUN_0043ef54), iVar1 == 0)) ||
       (iVar1 = FUN_00387490(lVar2,FUN_0043efb0), iVar1 == 0)) ||
      ((iVar1 = FUN_003874a8(lVar2,FUN_0043f00c), iVar1 == 0 ||
       (iVar1 = FUN_003874c0(lVar2,FUN_0043f04c), iVar1 == 0)))) ||
     ((iVar1 = FUN_003874d8(lVar2,FUN_0043f094), iVar1 == 0 ||
      ((iVar1 = FUN_003874f0(lVar2,FUN_0043f0f8), iVar1 == 0 ||
       (iVar1 = FUN_00387508(lVar2,FUN_0043f114), iVar1 == 0)))))) {
    FUN_0038735c(lVar2);
    lVar2 = 0;
  }
  return lVar2;
}


// ===== 0043ef54  FUN_0043ef54 =====

undefined8 FUN_0043ef54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0037dc20();
  if (DAT_007acff8 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0043ef98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*DAT_007acff8)(uVar1,param_2,param_3,param_4);
    return uVar1;
  }
  return 0;
}


// ===== 0043efb0  FUN_0043efb0 =====

undefined8 FUN_0043efb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0037dc20();
  if (DAT_007acff0 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0043eff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*DAT_007acff0)(uVar1,param_2,param_3,param_4);
    return uVar1;
  }
  return 0;
}


// ===== 0043f00c  FUN_0043f00c =====

undefined8 FUN_0043f00c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0037dc20();
  if (DAT_007ad008 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0043f038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*DAT_007ad008)(uVar1,param_2);
    return uVar1;
  }
  return 0xffffffff;
}


// ===== 0043f04c  FUN_0043f04c =====

undefined8 FUN_0043f04c(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0037dc20();
  if (DAT_007ad000 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0043f080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*DAT_007ad000)(uVar1,param_2,param_3);
    return uVar1;
  }
  return 0xffffffff;
}


// ===== 0043f094  FUN_0043f094 =====

long FUN_0043f094(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_0037dc20();
  if (DAT_007ad010 != (code *)0x0) {
    iVar1 = (*DAT_007ad010)(uVar2,param_2,param_3,param_4);
    return (long)iVar1;
  }
  return -1;
}


// ===== 0043f0f8  FUN_0043f0f8 =====

undefined8 FUN_0043f0f8(undefined8 param_1)

{
  FUN_0037dc28(param_1,1);
  return 1;
}


// ===== 0043f114  FUN_0043f114 =====

undefined8 FUN_0043f114(undefined8 param_1)

{
  FUN_0037dc28(param_1,0);
  FUN_0037dc20(param_1);
  if (DAT_007ad020 != (code *)0x0) {
    (*DAT_007ad020)();
  }
  return 1;
}


// ===== 0043f154  FUN_0043f154 =====

long FUN_0043f154(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_0046b898();
  if ((lVar2 == 0) || (lVar2 = FUN_0037db44(), lVar2 == 0)) {
    return lVar2;
  }
  if ((DAT_007ad018 != (code *)0x0) && (iVar1 = (*DAT_007ad018)(param_2), iVar1 != 0)) {
    FUN_0037dc18(lVar2,param_2);
    return lVar2;
  }
  FUN_0037db50(lVar2);
  return 0;
}


// ===== 0043f1c8  FUN_0043f1c8 =====

bool FUN_0043f1c8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_003cab04(param_2,"TLS-GROUP");
  return iVar1 == 0;
}


// ===== 0043f1f0  FUN_0043f1f0 =====

undefined8 FUN_0043f1f0(long param_1)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  
  plVar12 = (long *)(param_1 + 8);
  lVar6 = DAT_007ad068;
  lVar7 = DAT_007ad060;
  lVar8 = DAT_007ad058;
  lVar9 = DAT_007ad050;
  lVar10 = DAT_007ad048;
  lVar11 = DAT_007ad040;
  lVar13 = DAT_007ad038;
  lVar14 = DAT_007ad030;
LAB_0043f23c:
  iVar1 = (int)plVar12[-1];
  lVar4 = lVar6;
  lVar2 = DAT_007ad068;
  if (iVar1 < 0x65) {
    if (iVar1 < 0x62) {
      if (iVar1 == 0x60) {
        lVar5 = *plVar12;
        if (lVar10 == 0) {
          plVar12 = plVar12 + 2;
          lVar10 = lVar5;
          DAT_007ad048 = lVar5;
          goto LAB_0043f23c;
        }
        if (lVar10 != lVar5) {
          return 0;
        }
      }
      else if (iVar1 == 0x61) {
        lVar4 = *plVar12;
        lVar2 = lVar4;
        if ((lVar6 != 0) && (bVar3 = lVar6 != lVar4, lVar4 = lVar6, lVar2 = DAT_007ad068, bVar3)) {
          return 0;
        }
      }
      else if (iVar1 == 0) {
        return 1;
      }
    }
    else if (iVar1 == 0x62) {
      lVar5 = *plVar12;
      if (lVar13 == 0) {
        plVar12 = plVar12 + 2;
        lVar13 = lVar5;
        DAT_007ad038 = lVar5;
        goto LAB_0043f23c;
      }
      if (lVar13 != lVar5) {
        return 0;
      }
    }
    else if (iVar1 == 99) {
      lVar5 = *plVar12;
      if (lVar8 == 0) {
        plVar12 = plVar12 + 2;
        lVar8 = lVar5;
        DAT_007ad058 = lVar5;
        goto LAB_0043f23c;
      }
      if (lVar8 != lVar5) {
        return 0;
      }
    }
  }
  else if (iVar1 < 0x67) {
    if (iVar1 == 0x65) {
      lVar5 = *plVar12;
      if (lVar14 == 0) {
        plVar12 = plVar12 + 2;
        lVar14 = lVar5;
        DAT_007ad030 = lVar5;
        goto LAB_0043f23c;
      }
      if (lVar14 != lVar5) {
        return 0;
      }
    }
    else if (iVar1 == 0x66) {
      lVar5 = *plVar12;
      if (lVar11 != 0) {
        if (lVar11 != lVar5) {
          return 0;
        }
        goto LAB_0043f238;
      }
      plVar12 = plVar12 + 2;
      lVar11 = lVar5;
      DAT_007ad040 = lVar5;
      goto LAB_0043f23c;
    }
  }
  else {
    if (iVar1 == 0x67) {
      lVar5 = *plVar12;
      if (lVar9 != 0) {
        if (lVar9 != lVar5) {
          return 0;
        }
        goto LAB_0043f238;
      }
      plVar12 = plVar12 + 2;
      lVar9 = lVar5;
      DAT_007ad050 = lVar5;
      goto LAB_0043f23c;
    }
    if (iVar1 == 0x68) {
      lVar5 = *plVar12;
      if (lVar7 != 0) {
        if (lVar7 != lVar5) {
          return 0;
        }
        goto LAB_0043f238;
      }
      plVar12 = plVar12 + 2;
      lVar7 = lVar5;
      DAT_007ad060 = lVar5;
      goto LAB_0043f23c;
    }
  }
LAB_0043f238:
  DAT_007ad068 = lVar2;
  plVar12 = plVar12 + 2;
  lVar6 = lVar4;
  goto LAB_0043f23c;
}


// ===== 0043f3bc  FUN_0043f3bc =====

undefined8
FUN_0043f3bc(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar1 = FUN_0046b88c();
  UNRECOVERED_JUMPTABLE = DAT_007ad038;
  if ((DAT_007ad038 == (code *)0x0) &&
     (UNRECOVERED_JUMPTABLE = DAT_007ad030, DAT_007ad030 == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0043f414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)(uVar1,param_2,param_3,param_4,param_5);
  return uVar1;
}


// ===== 0043f42c  FUN_0043f42c =====

void FUN_0043f42c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar1 = FUN_0046b88c();
  UNRECOVERED_JUMPTABLE = DAT_007ad048;
  if ((DAT_007ad048 == (code *)0x0) &&
     (UNRECOVERED_JUMPTABLE = DAT_007ad040, DAT_007ad040 == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0043f46c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_2,param_3);
  return;
}


// ===== 0043f47c  FUN_0043f47c =====

undefined8
FUN_0043f47c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar1 = FUN_0046b88c();
  UNRECOVERED_JUMPTABLE = DAT_007ad058;
  if ((DAT_007ad058 == (code *)0x0) &&
     (UNRECOVERED_JUMPTABLE = DAT_007ad050, DAT_007ad050 == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0043f4e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)(uVar1,param_2,param_3,param_4,param_5,param_6);
  return uVar1;
}


