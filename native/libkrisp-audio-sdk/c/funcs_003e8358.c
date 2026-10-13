// ===== 003e8358  FUN_003e8358 =====

undefined8 FUN_003e8358(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  
  uVar2 = FUN_0038de18(*param_1,0);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  uVar5 = param_1[1];
  uVar2 = FUN_00426a88(param_2);
  uVar2 = FUN_0043b57c(uVar5,uVar2);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  thunk_FUN_0038eddc(*(undefined8 *)(param_1[1] + 8));
  FUN_00426cb0(param_2);
  lVar3 = thunk_FUN_0038ed00();
  *(long *)(param_1[1] + 8) = lVar3;
  if (lVar3 == 0) {
    return 0;
  }
  lVar3 = FUN_00427350(param_2);
  if (lVar3 == 0) {
    return 0;
  }
  iVar1 = FUN_003a8020(lVar3,"RSA-PSS");
  if (iVar1 != 0) {
    return 0xfffffffe;
  }
  iVar1 = FUN_003a8020(lVar3,&DAT_001f9542);
  if (iVar1 != 0) {
    lVar3 = param_1[2];
    if (lVar3 != 0) {
      uVar2 = FUN_003dcce8(6);
      iVar1 = FUN_003a3a84(lVar3,uVar2,5,0);
      if (iVar1 < 1) {
        return 0;
      }
    }
LAB_003e8434:
    FUN_00429d90(param_2);
    param_1[4] = param_2;
    return 1;
  }
  if ((*(long *)(lVar3 + 8) == 0) ||
     (pcVar4 = *(code **)(*(long *)(lVar3 + 8) + 0xb0), pcVar4 == (code *)0x0)) {
    FUN_00379868();
    uVar2 = 0x286;
  }
  else {
    iVar1 = (*pcVar4)(lVar3,2,0,param_1);
    if (iVar1 != -2) {
      if (0 < iVar1) goto LAB_003e8434;
      FUN_00379868();
      FUN_0037995c("crypto/pkcs7/pk7_lib.c",0x291,"PKCS7_RECIP_INFO_set");
      uVar2 = 0x95;
      goto LAB_003e84c0;
    }
    FUN_00379868();
    uVar2 = 0x28d;
  }
  FUN_0037995c("crypto/pkcs7/pk7_lib.c",uVar2,"PKCS7_RECIP_INFO_set");
  uVar2 = 0x96;
LAB_003e84c0:
  FUN_00379a5c(0x21,uVar2,0);
  return 0;
}


// ===== 003e850c  FUN_003e850c =====

bool FUN_003e850c(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_003dd5b4(*(undefined8 *)(param_1 + 0x18));
  if (iVar1 == 0x18) {
    lVar2 = 0x30;
  }
  else {
    if (iVar1 != 0x17) {
      FUN_00379868();
      FUN_0037995c("crypto/pkcs7/pk7_lib.c",0x253,"PKCS7_add_recipient_info");
      FUN_00379a5c(0x21,0x71,0);
      return false;
    }
    lVar2 = 8;
  }
  iVar1 = FUN_0040c89c(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2),param_2);
  return iVar1 != 0;
}


// ===== 003e85a4  FUN_003e85a4 =====

undefined8 FUN_003e85a4(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_003dd5b4(*(undefined8 *)(param_1 + 0x18));
  if (iVar1 == 0x16) {
    uVar2 = FUN_0042720c(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),
                         **(undefined8 **)(param_2 + 8),(*(undefined8 **)(param_2 + 8))[1]);
    return uVar2;
  }
  return 0;
}


// ===== 003e85f4  FUN_003e85f4 =====

undefined8 FUN_003e85f4(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  iVar1 = FUN_003dd5b4(*(undefined8 *)(param_1 + 0x18));
  if (iVar1 == 0x18) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x28);
    iVar1 = FUN_00388f94(param_2);
  }
  else {
    if (iVar1 != 0x17) {
      FUN_00379868();
      FUN_0037995c("crypto/pkcs7/pk7_lib.c",0x2b7,"PKCS7_set_cipher");
      uVar2 = 0x71;
      goto LAB_003e86bc;
    }
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
    iVar1 = FUN_00388f94(param_2);
  }
  if (iVar1 != 0) {
    *(undefined8 *)(lVar3 + 0x18) = param_2;
    *(long *)(lVar3 + 0x20) = param_1 + 0x28;
    return 1;
  }
  FUN_00379868();
  FUN_0037995c("crypto/pkcs7/pk7_lib.c",0x2be,"PKCS7_set_cipher");
  uVar2 = 0x90;
LAB_003e86bc:
  FUN_00379a5c(0x21,uVar2,0);
  return 0;
}


// ===== 003e86d8  FUN_003e86d8 =====

undefined8 FUN_003e86d8(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  iVar1 = FUN_003dd5b4(*(undefined8 *)(param_2 + 0x18));
  if (iVar1 < 0x17) {
    if (iVar1 != 0x15) {
      if (iVar1 != 0x16) {
        return 0;
      }
      lVar2 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0x28) + 0x20);
      if (lVar2 == 0) {
        return 0;
      }
      goto LAB_003e8794;
    }
    lVar2 = *(long *)(param_2 + 0x20);
  }
  else {
    if (iVar1 == 0x17) {
      lVar2 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0x10) + 0x10);
      if (lVar2 != 0) goto LAB_003e8794;
      lVar2 = FUN_0038a358();
      lVar3 = *(long *)(*(long *)(param_2 + 0x20) + 0x10);
    }
    else {
      if (iVar1 != 0x18) {
        return 0;
      }
      lVar2 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0x28) + 0x10);
      if (lVar2 != 0) goto LAB_003e8794;
      lVar2 = FUN_0038a358();
      lVar3 = *(long *)(*(long *)(param_2 + 0x20) + 0x28);
    }
    *(long *)(lVar3 + 0x10) = lVar2;
  }
  if (lVar2 == 0) {
    return 0;
  }
LAB_003e8794:
  uVar4 = *(ulong *)(lVar2 + 0x10);
  *param_1 = lVar2 + 8;
  *(ulong *)(lVar2 + 0x10) = uVar4 | 0x10;
  return 1;
}


// ===== 003e87b8  FUN_003e87b8 =====

undefined8 FUN_003e87b8(void)

{
  long lVar1;
  
  lVar1 = FUN_0037aa50(0x10800075);
  if (lVar1 != 0) {
    return 1;
  }
  FUN_00379fc4(&DAT_0077a658);
  return 1;
}


// ===== 003e87f4  FUN_003e87f4 =====

void FUN_003e87f4(long param_1)

{
  if (param_1 != 0) {
    FUN_003b9160(param_1,FUN_003e8828);
    FUN_003b8b74(param_1);
    return;
  }
  return;
}


// ===== 003e8828  FUN_003e8828 =====

void FUN_003e8828(long param_1)

{
  FUN_003eb16c(*(undefined8 *)(param_1 + 8));
  FUN_003c86b4(param_1,"crypto/property/defn_cache.c",0x30);
  return;
}


// ===== 003e885c  FUN_003e885c =====

void FUN_003e885c(void)

{
  FUN_003b8a34(FUN_003e8870,FUN_003e8878);
  return;
}


// ===== 003e8870  FUN_003e8870 =====

void FUN_003e8870(undefined8 *param_1)

{
  FUN_003b8b18(*param_1);
  return;
}


// ===== 003e8878  FUN_003e8878 =====

int FUN_003e8878(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = strcmp((char *)*param_1,(char *)*param_2);
  return iVar1;
}


// ===== 003e8884  FUN_003e8884 =====

undefined8 FUN_003e8884(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 local_48 [3];
  
  lVar2 = FUN_003b9c48(param_1,2);
  if (lVar2 == 0) {
    return 0;
  }
  iVar1 = FUN_003b93a4(param_1);
  if (iVar1 != 0) {
    local_48[0] = param_2;
    lVar2 = FUN_003b908c(lVar2,local_48);
    FUN_003b941c(param_1);
    if (lVar2 != 0) {
      return *(undefined8 *)(lVar2 + 8);
    }
  }
  return 0;
}


// ===== 003e890c  FUN_003e890c =====

ulong FUN_003e890c(undefined8 param_1,char *param_2,undefined8 *param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  size_t sVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  uint uVar8;
  char *local_58 [3];
  
  uVar2 = FUN_003b9c48(param_1,2);
  uVar3 = uVar2;
  if (uVar2 != 0) {
    if (param_2 == (char *)0x0) {
      uVar3 = 1;
    }
    else {
      uVar3 = FUN_003b92c4(param_1);
      if ((int)uVar3 != 0) {
        local_58[0] = param_2;
        if (param_3 == (undefined8 *)0x0) {
          FUN_003b8ea4(uVar2,local_58);
          uVar8 = 1;
        }
        else {
          lVar4 = FUN_003b908c(uVar2);
          if (lVar4 == 0) {
            sVar5 = strlen(param_2);
            puVar6 = (undefined8 *)FUN_003c83a4(sVar5 + 0x18,"crypto/property/defn_cache.c",0x77);
            if (puVar6 != (undefined8 *)0x0) {
              uVar7 = *param_3;
              *puVar6 = puVar6 + 2;
              puVar6[1] = uVar7;
              memcpy(puVar6 + 2,param_2,sVar5 + 1);
              lVar4 = FUN_003b8ca4(uVar2,puVar6);
              if ((lVar4 != 0) || (iVar1 = FUN_003b92bc(uVar2), iVar1 == 0)) {
                uVar8 = 1;
                goto LAB_003e8a2c;
              }
            }
            FUN_003c86b4(puVar6,"crypto/property/defn_cache.c",0x83);
            uVar8 = 0;
          }
          else {
            FUN_003eb16c(*param_3);
            uVar8 = 1;
            *param_3 = *(undefined8 *)(lVar4 + 8);
          }
        }
LAB_003e8a2c:
        FUN_003b941c(param_1);
        return (ulong)uVar8;
      }
    }
  }
  return uVar3;
}


// ===== 003e8a50  FUN_003e8a50 =====

void FUN_003e8a50(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_003eb16c(*param_1);
    FUN_003c86b4(param_1,"crypto/property/property.c",0x75);
    return;
  }
  return;
}


// ===== 003e8a90  FUN_003e8a90 =====

void FUN_003e8a90(void)

{
  FUN_003c8474(0x10,"crypto/property/property.c",0x7b);
  return;
}


// ===== 003e8aa4  FUN_003e8aa4 =====

void FUN_003e8aa4(undefined8 param_1)

{
  FUN_003b9c48(param_1,0xe);
  return;
}


// ===== 003e8aac  FUN_003e8aac =====

ulong FUN_003e8aac(undefined8 param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_003b9c48(param_1,0xe);
  if (uVar1 != 0) {
    uVar1 = (ulong)(*(byte *)(uVar1 + 8) & 1);
  }
  return uVar1;
}


// ===== 003e8ad0  FUN_003e8ad0 =====

void FUN_003e8ad0(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_003b9c48(param_1,0xe);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 8) = *(byte *)(lVar1 + 8) | 1;
  }
  return;
}


// ===== 003e8af8  FUN_003e8af8 =====

undefined8 * FUN_003e8af8(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)FUN_003c8474(0x30,"crypto/property/property.c",0xf4);
  if (puVar1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *puVar1 = param_1;
  lVar2 = FUN_003e9b8c();
  puVar1[1] = lVar2;
  if (lVar2 != 0) {
    lVar2 = FUN_003d5150();
    puVar1[2] = lVar2;
    if (lVar2 != 0) {
      lVar2 = FUN_003d5150();
      puVar1[3] = lVar2;
      if (lVar2 != 0) {
        return puVar1;
      }
    }
    lVar2 = puVar1[1];
    if (lVar2 != 0) {
      FUN_003e9e0c(lVar2,FUN_003e8c18,puVar1);
      lVar2 = puVar1[1];
    }
  }
  FUN_003e9ba0(lVar2);
  FUN_003d51ac(puVar1[2]);
  FUN_003d51ac(puVar1[3]);
  FUN_003c86b4(puVar1,"crypto/property/property.c",0x109);
  return (undefined8 *)0x0;
}


// ===== 003e8bb4  FUN_003e8bb4 =====

void FUN_003e8bb4(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    if (lVar1 != 0) {
      FUN_003e9e0c(lVar1,FUN_003e8c18,param_1);
      lVar1 = *(long *)(param_1 + 8);
    }
    FUN_003e9ba0(lVar1);
    FUN_003d51ac(*(undefined8 *)(param_1 + 0x10));
    FUN_003d51ac(*(undefined8 *)(param_1 + 0x18));
    FUN_003c86b4(param_1,"crypto/property/property.c",0x109);
    return;
  }
  return;
}


// ===== 003e8c18  FUN_003e8c18 =====

void FUN_003e8c18(undefined8 param_1,long param_2,long param_3)

{
  if (param_2 != 0) {
    FUN_0040ca6c(*(undefined8 *)(param_2 + 8),FUN_003e9020);
    FUN_003b9160(*(undefined8 *)(param_2 + 0x10),FUN_003e9ab0);
    FUN_003b8b74(*(undefined8 *)(param_2 + 0x10));
    FUN_003c86b4(param_2,"crypto/property/property.c",0xe6);
  }
  if (param_3 != 0) {
    FUN_003e9fbc(*(undefined8 *)(param_3 + 8),param_1,0);
    return;
  }
  return;
}


// ===== 003e8ca8  FUN_003e8ca8 =====

void FUN_003e8ca8(long param_1)

{
  if (param_1 != 0) {
    FUN_003d518c(*(undefined8 *)(param_1 + 0x18));
    return;
  }
  return;
}


// ===== 003e8cb8  FUN_003e8cb8 =====

void FUN_003e8cb8(long param_1)

{
  if (param_1 != 0) {
    FUN_003d519c(*(undefined8 *)(param_1 + 0x18));
    return;
  }
  return;
}


// ===== 003e8cc8  FUN_003e8cc8 =====

undefined8
FUN_003e8cc8(undefined8 *param_1,long param_2,int param_3,undefined1 *param_4,long param_5,
            code *param_6,long param_7)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  long *plVar9;
  long *plVar10;
  
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  if (param_3 < 1) {
    return 0;
  }
  if (param_5 == 0) {
    return 0;
  }
  puVar1 = &DAT_001c717f;
  if (param_4 != (undefined1 *)0x0) {
    puVar1 = param_4;
  }
  if (param_2 == 0) {
    return 0;
  }
  plVar4 = (long *)FUN_003c83a4(0x28,"crypto/property/property.c",0x134);
  if (plVar4 == (long *)0x0) {
    return 0;
  }
  plVar4[2] = param_5;
  plVar4[3] = (long)param_6;
  plVar4[4] = param_7;
  iVar2 = (*param_6)(param_5);
  if (iVar2 == 0) {
    uVar5 = 0x13b;
    goto LAB_003e8f84;
  }
  uVar5 = param_1[2];
  *plVar4 = param_2;
  iVar2 = FUN_003d518c(uVar5);
  if (iVar2 == 0) {
    uVar5 = 0x142;
    goto LAB_003e8f84;
  }
  lVar6 = FUN_003e9f4c(param_1[1],param_3);
  if (lVar6 != 0) {
    lVar7 = FUN_003b92a0(*(undefined8 *)(lVar6 + 0x10));
    uVar5 = *(undefined8 *)(lVar6 + 0x10);
    param_1[4] = param_1[4] - lVar7;
    FUN_003b9160(uVar5,FUN_003e9ab0);
    FUN_003b8c20(*(undefined8 *)(lVar6 + 0x10));
  }
  lVar6 = FUN_003e8884(*param_1,puVar1);
  plVar10 = plVar4 + 1;
  *plVar10 = lVar6;
  if (lVar6 == 0) {
    lVar6 = FUN_003ea160(*param_1,puVar1);
    *plVar10 = lVar6;
    if (lVar6 != 0) {
      iVar2 = FUN_003e890c(*param_1,puVar1,plVar10);
      if (iVar2 != 0) goto LAB_003e8dc0;
      FUN_003eb16c(*plVar10);
      *plVar10 = 0;
    }
LAB_003e8f6c:
    FUN_003d519c(param_1[2]);
  }
  else {
LAB_003e8dc0:
    piVar8 = (int *)FUN_003e9f4c(param_1[1],param_3);
    if (piVar8 == (int *)0x0) {
      piVar8 = (int *)FUN_003c8474(0x18,"crypto/property/property.c",0x153);
      if (piVar8 == (int *)0x0) goto LAB_003e8f6c;
      lVar6 = FUN_0040bf0c();
      *(long *)(piVar8 + 2) = lVar6;
      if (lVar6 != 0) {
        lVar6 = FUN_003b8a34(FUN_003e8fb0,FUN_003e8fb8);
        *(long *)(piVar8 + 4) = lVar6;
        if (lVar6 != 0) {
          uVar5 = param_1[1];
          *piVar8 = param_3;
          iVar2 = FUN_003e9fbc(uVar5,param_3,piVar8);
          if (iVar2 != 0) goto LAB_003e8dd4;
        }
      }
      FUN_003d519c(param_1[2]);
      FUN_0040ca6c(*(undefined8 *)(piVar8 + 2),FUN_003e9020);
      FUN_003b9160(*(undefined8 *)(piVar8 + 4),FUN_003e9ab0);
      FUN_003b8b74(*(undefined8 *)(piVar8 + 4));
      FUN_003c86b4(piVar8,"crypto/property/property.c",0xe6);
    }
    else {
LAB_003e8dd4:
      iVar2 = FUN_0040caf8(*(undefined8 *)(piVar8 + 2));
      if (iVar2 < 1) {
        iVar2 = 0;
      }
      else {
        iVar2 = 0;
        do {
          plVar9 = (long *)FUN_0040cb0c(*(undefined8 *)(piVar8 + 2),iVar2);
          if ((*plVar9 == *plVar4) && (plVar9[1] == *plVar10)) break;
          iVar2 = iVar2 + 1;
          iVar3 = FUN_0040caf8(*(undefined8 *)(piVar8 + 2));
        } while (iVar2 < iVar3);
      }
      iVar3 = FUN_0040caf8(*(undefined8 *)(piVar8 + 2));
      if (iVar2 != iVar3) goto LAB_003e8f6c;
      iVar2 = FUN_0040c89c(*(undefined8 *)(piVar8 + 2),plVar4);
      FUN_003d519c(param_1[2]);
      if (iVar2 != 0) {
        return 1;
      }
    }
  }
  (*(code *)plVar4[4])(plVar4[2]);
  uVar5 = 0xcc;
LAB_003e8f84:
  FUN_003c86b4(plVar4,"crypto/property/property.c",uVar5);
  return 0;
}


// ===== 003e8fb0  FUN_003e8fb0 =====

void FUN_003e8fb0(long param_1)

{
  FUN_003b8b18(*(undefined8 *)(param_1 + 8));
  return;
}


// ===== 003e8fb8  FUN_003e8fb8 =====

int FUN_003e8fb8(ulong *param_1,ulong *param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  iVar1 = strcmp((char *)param_1[1],(char *)param_2[1]);
  if (iVar1 != 0) {
    return iVar1;
  }
  uVar2 = *param_1;
  if ((uVar2 != 0) && (uVar3 = *param_2, uVar3 != 0)) {
    iVar1 = -(uint)(uVar3 < uVar2);
    if (uVar2 < uVar3) {
      iVar1 = 1;
    }
    return iVar1;
  }
  return 0;
}


// ===== 003e9020  FUN_003e9020 =====

void FUN_003e9020(long param_1)

{
  if (param_1 != 0) {
    (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x10));
    FUN_003c86b4(param_1,"crypto/property/property.c",0xcc);
    return;
  }
  return;
}


// ===== 003e9064  FUN_003e9064 =====

ulong FUN_003e9064(long param_1,int param_2,long param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  
  uVar3 = 0;
  if ((((param_1 != 0) && (0 < param_2)) && (param_3 != 0)) &&
     (uVar3 = FUN_003d518c(*(undefined8 *)(param_1 + 0x10)), (int)uVar3 != 0)) {
    lVar4 = FUN_003e9f4c(*(undefined8 *)(param_1 + 8),param_2);
    if (lVar4 != 0) {
      lVar5 = FUN_003b92a0(*(undefined8 *)(lVar4 + 0x10));
      uVar6 = *(undefined8 *)(lVar4 + 0x10);
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) - lVar5;
      FUN_003b9160(uVar6,FUN_003e9ab0);
      FUN_003b8c20(*(undefined8 *)(lVar4 + 0x10));
    }
    lVar4 = FUN_003e9f4c(*(undefined8 *)(param_1 + 8),param_2);
    if ((lVar4 != 0) && (iVar1 = FUN_0040caf8(*(undefined8 *)(lVar4 + 8)), 0 < iVar1)) {
      iVar1 = 0;
      do {
        lVar5 = FUN_0040cb0c(*(undefined8 *)(lVar4 + 8),iVar1);
        if (*(long *)(lVar5 + 0x10) == param_3) {
          (**(code **)(lVar5 + 0x20))(param_3);
          FUN_003c86b4(lVar5,"crypto/property/property.c",0xcc);
          FUN_0040c404(*(undefined8 *)(lVar4 + 8),iVar1);
          uVar7 = 1;
          goto LAB_003e9144;
        }
        iVar1 = iVar1 + 1;
        iVar2 = FUN_0040caf8(*(undefined8 *)(lVar4 + 8));
      } while (iVar1 < iVar2);
    }
    uVar7 = 0;
LAB_003e9144:
    FUN_003d519c(*(undefined8 *)(param_1 + 0x10));
    uVar3 = (ulong)uVar7;
  }
  return uVar3;
}


// ===== 003e919c  FUN_003e919c =====

long FUN_003e919c(long param_1,undefined8 param_2)

{
  long lVar1;
  long local_30;
  undefined8 uStack_28;
  
  lVar1 = param_1;
  if (param_1 != 0) {
    lVar1 = FUN_003d518c(*(undefined8 *)(param_1 + 0x10));
    if ((int)lVar1 != 0) {
      local_30 = param_1;
      uStack_28 = param_2;
      FUN_003e9e0c(*(undefined8 *)(param_1 + 8),FUN_003e91f8,&local_30);
      FUN_003d519c(*(undefined8 *)(param_1 + 0x10));
      lVar1 = 1;
    }
  }
  return lVar1;
}


// ===== 003e91f8  FUN_003e91f8 =====

void FUN_003e91f8(undefined8 param_1,long param_2,long *param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  
  iVar1 = FUN_0040caf8(*(undefined8 *)(param_2 + 8));
  if (0 < iVar1) {
    iVar6 = 0;
    uVar7 = iVar1 + 1;
    do {
      plVar2 = (long *)FUN_0040cb0c(*(undefined8 *)(param_2 + 8),uVar7 - 2);
      if (*plVar2 == param_3[1]) {
        (*(code *)plVar2[4])(plVar2[2]);
        FUN_003c86b4(plVar2,"crypto/property/property.c",0xcc);
        FUN_0040c404(*(undefined8 *)(param_2 + 8),uVar7 - 2);
        iVar6 = iVar6 + 1;
      }
      uVar7 = uVar7 - 1;
    } while (1 < uVar7);
    if (0 < iVar6) {
      lVar5 = *param_3;
      lVar3 = FUN_003b92a0(*(undefined8 *)(param_2 + 0x10));
      uVar4 = *(undefined8 *)(param_2 + 0x10);
      *(long *)(lVar5 + 0x20) = *(long *)(lVar5 + 0x20) - lVar3;
      FUN_003b9160(uVar4,FUN_003e9ab0);
      FUN_003b8c20(*(undefined8 *)(param_2 + 0x10));
      return;
    }
  }
  return;
}


// ===== 003e9304  FUN_003e9304 =====

void FUN_003e9304(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    local_20 = param_2;
    uStack_18 = param_3;
    FUN_003e9e0c(*(undefined8 *)(param_1 + 8),FUN_003e9338,&local_20);
  }
  return;
}


// ===== 003e9338  FUN_003e9338 =====

void FUN_003e9338(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar1 = FUN_0040caf8(*(undefined8 *)(param_2 + 2));
  if (0 < iVar1) {
    iVar3 = 0;
    do {
      lVar2 = FUN_0040cb0c(*(undefined8 *)(param_2 + 2),iVar3);
      (*(code *)*param_3)(*param_2,*(undefined8 *)(lVar2 + 0x10),param_3[1]);
      iVar3 = iVar3 + 1;
    } while (iVar1 != iVar3);
  }
  return;
}


// ===== 003e93a4  FUN_003e93a4 =====

undefined8 FUN_003e93a4(undefined8 *param_1,int param_2,long param_3,long *param_4,long *param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  if (param_4 == (long *)0x0) {
    lVar12 = 0;
  }
  else {
    lVar12 = *param_4;
  }
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  if (param_2 < 1) {
    return 0;
  }
  if (param_5 == (long *)0x0) {
    return 0;
  }
  uVar5 = FUN_003d517c(param_1[2]);
  if ((int)uVar5 == 0) {
    return uVar5;
  }
  lVar6 = FUN_003e9f4c(param_1[1],param_2);
  if (lVar6 == 0) {
    FUN_003d519c(param_1[2]);
    return 0;
  }
  if (param_3 == 0) {
    lVar7 = 0;
    plVar8 = (long *)FUN_003b9c48(*param_1,0xe);
    if (plVar8 != (long *)0x0) goto LAB_003e9470;
LAB_003e94a0:
    lVar10 = lVar7;
    lVar11 = lVar7;
    if (lVar7 == 0) {
      iVar2 = FUN_0040caf8(*(undefined8 *)(lVar6 + 8));
      if (0 < iVar2) {
        if (lVar12 == 0) {
          iVar2 = 0;
          do {
            plVar8 = (long *)FUN_0040cb0c(*(undefined8 *)(lVar6 + 8),iVar2);
            if (plVar8 != (long *)0x0) goto LAB_003e971c;
            iVar2 = iVar2 + 1;
            iVar3 = FUN_0040caf8(*(undefined8 *)(lVar6 + 8));
            lVar10 = 0;
            uVar5 = 0;
          } while (iVar2 < iVar3);
          goto LAB_003e96ac;
        }
        iVar2 = 0;
        do {
          plVar8 = (long *)FUN_0040cb0c(*(undefined8 *)(lVar6 + 8),iVar2);
          if ((plVar8 != (long *)0x0) && (*plVar8 == lVar12)) goto LAB_003e971c;
          iVar2 = iVar2 + 1;
          iVar3 = FUN_0040caf8(*(undefined8 *)(lVar6 + 8));
        } while (iVar2 < iVar3);
      }
      lVar10 = 0;
    }
    else {
LAB_003e94a8:
      iVar2 = FUN_003ebb4c(lVar11);
      iVar3 = FUN_0040caf8(*(undefined8 *)(lVar6 + 8));
      if (0 < iVar3) {
        iVar3 = 0;
        if (lVar12 == 0) {
          if (iVar2 != 0) {
            bVar1 = false;
            plVar8 = (long *)0x0;
            iVar2 = -1;
            do {
              plVar9 = (long *)FUN_0040cb0c(*(undefined8 *)(lVar6 + 8),iVar3);
              if ((plVar9 != (long *)0x0) && (iVar4 = FUN_003eb01c(lVar11,plVar9[1]), iVar2 < iVar4)
                 ) {
                bVar1 = true;
                plVar8 = plVar9;
                iVar2 = iVar4;
              }
              iVar3 = iVar3 + 1;
              iVar4 = FUN_0040caf8(*(undefined8 *)(lVar6 + 8));
            } while (iVar3 < iVar4);
            goto LAB_003e9674;
          }
          do {
            plVar8 = (long *)FUN_0040cb0c(*(undefined8 *)(lVar6 + 8),iVar3);
            if ((plVar8 != (long *)0x0) && (iVar2 = FUN_003eb01c(lVar11,plVar8[1]), -1 < iVar2))
            goto LAB_003e9678;
            iVar3 = iVar3 + 1;
            iVar2 = FUN_0040caf8(*(undefined8 *)(lVar6 + 8));
          } while (iVar3 < iVar2);
        }
        else if (iVar2 == 0) {
          do {
            plVar8 = (long *)FUN_0040cb0c(*(undefined8 *)(lVar6 + 8),iVar3);
            if (((plVar8 != (long *)0x0) && (*plVar8 == lVar12)) &&
               (iVar2 = FUN_003eb01c(lVar11,plVar8[1]), -1 < iVar2)) goto LAB_003e9678;
            iVar3 = iVar3 + 1;
            iVar2 = FUN_0040caf8(*(undefined8 *)(lVar6 + 8));
          } while (iVar3 < iVar2);
        }
        else {
          bVar1 = false;
          plVar8 = (long *)0x0;
          iVar2 = -1;
          do {
            plVar9 = (long *)FUN_0040cb0c(*(undefined8 *)(lVar6 + 8),iVar3);
            if (((plVar9 != (long *)0x0) && (*plVar9 == lVar12)) &&
               (iVar4 = FUN_003eb01c(lVar11,plVar9[1]), iVar2 < iVar4)) {
              bVar1 = true;
              plVar8 = plVar9;
              iVar2 = iVar4;
            }
            iVar3 = iVar3 + 1;
            iVar4 = FUN_0040caf8(*(undefined8 *)(lVar6 + 8));
          } while (iVar3 < iVar4);
LAB_003e9674:
          if (bVar1) {
LAB_003e9678:
            iVar2 = (*(code *)plVar8[3])(plVar8[2]);
            goto joined_r0x003e9728;
          }
        }
      }
    }
  }
  else {
    lVar7 = FUN_003ead78(*param_1,param_3,0);
    plVar8 = (long *)FUN_003b9c48(*param_1,0xe);
    if (plVar8 == (long *)0x0) goto LAB_003e94a0;
LAB_003e9470:
    lVar11 = *plVar8;
    if (lVar11 == 0) goto LAB_003e94a0;
    lVar10 = lVar7;
    if (lVar7 == 0) goto LAB_003e94a8;
    lVar10 = FUN_003eb17c(lVar7,lVar11);
    FUN_003eb16c(lVar7);
    lVar11 = lVar10;
    if (lVar10 != 0) goto LAB_003e94a8;
  }
LAB_003e96a8:
  uVar5 = 0;
LAB_003e96ac:
  FUN_003d519c(uVar5,param_1[2]);
  FUN_003eb16c(lVar10);
  return uVar5;
LAB_003e971c:
  lVar10 = 0;
  iVar2 = (*(code *)plVar8[3])(plVar8[2]);
joined_r0x003e9728:
  if (iVar2 != 0) {
    *param_5 = plVar8[2];
    if (param_4 != (long *)0x0) {
      *param_4 = *plVar8;
    }
    uVar5 = 1;
    goto LAB_003e96ac;
  }
  goto LAB_003e96a8;
}


// ===== 003e9730  FUN_003e9730 =====

long FUN_003e9730(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  if ((param_1 != 0) && (lVar1 = FUN_003d518c(*(undefined8 *)(param_1 + 0x10)), (int)lVar1 != 0)) {
    FUN_003e9d48(*(undefined8 *)(param_1 + 8),FUN_003e977c);
    *(undefined8 *)(param_1 + 0x20) = 0;
    FUN_003d519c(*(undefined8 *)(param_1 + 0x10));
    lVar1 = 1;
  }
  return lVar1;
}


// ===== 003e977c  FUN_003e977c =====

void FUN_003e977c(undefined8 param_1,long param_2)

{
  FUN_003b9160(*(undefined8 *)(param_2 + 0x10),FUN_003e9ab0);
  FUN_003b8c20(*(undefined8 *)(param_2 + 0x10));
  return;
}


// ===== 003e97ac  FUN_003e97ac =====

ulong FUN_003e97ac(long param_1,undefined8 param_2,int param_3,long param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_70;
  long lStack_68;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_3 < 1) {
    return 0;
  }
  if (param_4 == 0) {
    return 0;
  }
  uVar3 = FUN_003d517c(*(undefined8 *)(param_1 + 0x10));
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  lVar4 = FUN_003e9f4c(*(undefined8 *)(param_1 + 8),param_3);
  if (lVar4 != 0) {
    local_70 = param_2;
    lStack_68 = param_4;
    uVar3 = FUN_003b908c(*(undefined8 *)(lVar4 + 0x10),&local_70);
    if (uVar3 == 0) goto LAB_003e9840;
    iVar2 = (**(code **)(uVar3 + 0x18))(*(undefined8 *)(uVar3 + 0x10));
    if (iVar2 != 0) {
      puVar1 = (undefined8 *)(uVar3 + 0x10);
      uVar3 = 1;
      *param_5 = *puVar1;
      goto LAB_003e9840;
    }
  }
  uVar3 = 0;
LAB_003e9840:
  FUN_003d519c(*(undefined8 *)(param_1 + 0x10));
  return uVar3 & 0xffffffff;
}


// ===== 003e9864  FUN_003e9864 =====

undefined8
FUN_003e9864(long param_1,long param_2,int param_3,char *param_4,long param_5,code *param_6,
            long param_7)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  size_t sVar5;
  long *plVar6;
  long lVar7;
  long local_90;
  char *local_88;
  int local_80;
  char local_7c;
  
  if (param_2 == 0) {
    return 0;
  }
  if (param_1 == 0) {
    return 0;
  }
  if (param_3 < 1) {
    return 0;
  }
  if (param_4 == (char *)0x0) {
    return 0;
  }
  uVar3 = FUN_003d518c(*(undefined8 *)(param_1 + 0x10));
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    local_88 = (char *)0x0;
    local_7c = '\0';
    local_80 = FUN_003c4704();
    if (local_80 == 0) {
      local_7c = '\x01';
      local_80 = DAT_007a8a50;
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
    FUN_003e9e0c(*(undefined8 *)(param_1 + 8),FUN_003e9af4,&local_90);
    *(char **)(param_1 + 0x20) = local_88;
    if (local_7c != '\0') {
      FUN_00755bc0(local_80,&DAT_007a8a50);
    }
  }
  lVar4 = FUN_003e9f4c(*(undefined8 *)(param_1 + 8),param_3);
  if (lVar4 == 0) {
    plVar6 = (long *)0x0;
  }
  else {
    if (param_5 == 0) {
      local_90 = param_2;
      local_88 = param_4;
      lVar4 = FUN_003b8ea4(*(undefined8 *)(lVar4 + 0x10),&local_90);
      if (lVar4 != 0) {
        (**(code **)(lVar4 + 0x20))(*(undefined8 *)(lVar4 + 0x10));
        FUN_003c86b4(lVar4,"crypto/property/property.c",0xd4);
        *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -1;
      }
      uVar3 = 1;
      goto LAB_003e9a44;
    }
    sVar5 = strlen(param_4);
    plVar6 = (long *)FUN_003c83a4(sVar5 + 0x30,"crypto/property/property.c",0x2df);
    if (plVar6 != (long *)0x0) {
      plVar6[2] = param_5;
      plVar6[3] = (long)param_6;
      *plVar6 = param_2;
      plVar6[1] = (long)(plVar6 + 5);
      plVar6[4] = param_7;
      iVar2 = (*param_6)(param_5);
      if (iVar2 != 0) {
        memcpy((void *)plVar6[1],param_4,sVar5 + 1);
        lVar7 = FUN_003b8ca4(*(undefined8 *)(lVar4 + 0x10),plVar6);
        if (lVar7 != 0) {
          (**(code **)(lVar7 + 0x20))(*(undefined8 *)(lVar7 + 0x10));
          FUN_003c86b4(lVar7,"crypto/property/property.c",0xd4);
          uVar3 = 1;
          goto LAB_003e9a44;
        }
        iVar2 = FUN_003b92bc(*(undefined8 *)(lVar4 + 0x10));
        if (iVar2 == 0) {
          uVar1 = *(long *)(param_1 + 0x20) + 1;
          *(ulong *)(param_1 + 0x20) = uVar1;
          uVar3 = 1;
          if (499 < uVar1) {
            *(undefined4 *)(param_1 + 0x28) = 1;
          }
          goto LAB_003e9a44;
        }
        (*(code *)plVar6[4])(plVar6[2]);
      }
    }
  }
  FUN_003c86b4(plVar6,"crypto/property/property.c",0x2f6);
  uVar3 = 0;
LAB_003e9a44:
  FUN_003d519c(uVar3,*(undefined8 *)(param_1 + 0x10));
  return uVar3;
}


// ===== 003e9ab0  FUN_003e9ab0 =====

void FUN_003e9ab0(long param_1)

{
  if (param_1 != 0) {
    (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x10));
    FUN_003c86b4(param_1,"crypto/property/property.c",0xd4);
    return;
  }
  return;
}


// ===== 003e9af4  FUN_003e9af4 =====

void FUN_003e9af4(undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *param_3 = uVar1;
  FUN_003b91c8(uVar1,FUN_003e9b08);
  return;
}


// ===== 003e9b08  FUN_003e9b08 =====

void FUN_003e9b08(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *(uint *)(param_2 + 2) ^ *(uint *)(param_2 + 2) << 0xd;
  uVar1 = uVar1 ^ uVar1 >> 0x11;
  *(uint *)(param_2 + 2) = uVar1 ^ uVar1 << 5;
  if ((uVar1 & 1) == 0) {
    param_2[1] = param_2[1] + 1;
  }
  else {
    lVar2 = FUN_003b8ea4(*param_2,param_1);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x20))(*(undefined8 *)(lVar2 + 0x10));
      FUN_003c86b4(lVar2,"crypto/property/property.c",0xd4);
      return;
    }
  }
  return;
}


// ===== 003e9b8c  FUN_003e9b8c =====

void FUN_003e9b8c(void)

{
  FUN_003c8474(0x20,"crypto/sparse_array.c",0x3c);
  return;
}


// ===== 003e9ba0  FUN_003e9ba0 =====

void FUN_003e9ba0(int *param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  long local_100 [16];
  int local_80 [16];
  
  if (param_1 != (int *)0x0) {
    uVar3 = 0;
    local_80[0] = 0;
    local_100[0] = *(long *)(param_1 + 6);
    do {
      iVar1 = local_80[uVar3];
      lVar2 = local_100[uVar3];
      if (iVar1 < 0x10) {
        local_80[uVar3] = iVar1 + 1;
        if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + (long)iVar1 * 8), lVar2 != 0)) &&
           ((int)uVar3 < *param_1 + -1)) {
          uVar3 = uVar3 + 1;
          local_80[uVar3] = 0;
          local_100[uVar3] = lVar2;
        }
      }
      else {
        if (lVar2 != 0) {
          FUN_003c86b4(lVar2,"crypto/sparse_array.c",0x66);
        }
        uVar3 = uVar3 - 1;
      }
    } while (-1 < (int)uVar3);
    FUN_003c86b4(param_1,"crypto/sparse_array.c",0x72);
    return;
  }
  return;
}


// ===== 003e9c70  FUN_003e9c70 =====

void FUN_003e9c70(int *param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  long local_100 [16];
  int local_80 [16];
  
  uVar3 = 0;
  local_80[0] = 0;
  local_100[0] = *(long *)(param_1 + 6);
  do {
    iVar1 = local_80[uVar3];
    lVar2 = local_100[uVar3];
    if (iVar1 < 0x10) {
      local_80[uVar3] = iVar1 + 1;
      if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + (long)iVar1 * 8), lVar2 != 0)) {
        if ((int)uVar3 < *param_1 + -1) {
          uVar3 = uVar3 + 1;
          local_80[uVar3] = 0;
          local_100[uVar3] = lVar2;
        }
        else {
          FUN_003c86b4(lVar2,"crypto/sparse_array.c",0x6b);
        }
      }
    }
    else {
      if (lVar2 != 0) {
        FUN_003c86b4(lVar2,"crypto/sparse_array.c",0x66);
      }
      uVar3 = uVar3 - 1;
    }
  } while (-1 < (int)uVar3);
  FUN_003c86b4(param_1,"crypto/sparse_array.c",0x79);
  return;
}


// ===== 003e9d48  FUN_003e9d48 =====

void FUN_003e9d48(int *param_1,code *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  long local_100 [16];
  int local_80 [16];
  
  if (param_1 != (int *)0x0) {
    uVar3 = 0;
    uVar4 = 0;
    local_80[0] = 0;
    local_100[0] = *(long *)(param_1 + 6);
    do {
      iVar1 = local_80[uVar4];
      if (iVar1 < 0x10) {
        lVar2 = local_100[uVar4];
        local_80[uVar4] = iVar1 + 1;
        if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + (long)iVar1 * 8), lVar2 != 0)) {
          uVar3 = uVar3 & 0xfffffffffffffff0 | (long)iVar1;
          if ((int)uVar4 < *param_1 + -1) {
            uVar4 = uVar4 + 1;
            uVar3 = uVar3 << 4;
            local_80[uVar4] = 0;
            local_100[uVar4] = lVar2;
          }
          else {
            (*param_2)(uVar3);
          }
        }
      }
      else {
        uVar3 = uVar3 >> 4;
        uVar4 = uVar4 - 1;
      }
    } while (-1 < (int)uVar4);
  }
  return;
}


// ===== 003e9e0c  FUN_003e9e0c =====

void FUN_003e9e0c(int *param_1,code *param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  long local_110 [16];
  int local_90 [16];
  
  if (param_1 != (int *)0x0) {
    local_90[0] = 0;
    local_110[0] = *(long *)(param_1 + 6);
    if (param_2 == (code *)0x0) {
      uVar4 = 0;
      do {
        while( true ) {
          iVar1 = local_90[uVar4];
          if (iVar1 < 0x10) break;
          uVar4 = uVar4 - 1;
LAB_003e9edc:
          if ((int)uVar4 < 0) {
            return;
          }
        }
        lVar2 = local_110[uVar4];
        local_90[uVar4] = iVar1 + 1;
        if (((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + (long)iVar1 * 8), lVar2 == 0)) ||
           (*param_1 + -1 <= (int)uVar4)) goto LAB_003e9edc;
        uVar4 = uVar4 + 1;
        local_90[uVar4] = 0;
        local_110[uVar4] = lVar2;
      } while (-1 < (int)uVar4);
    }
    else {
      uVar3 = 0;
      uVar4 = 0;
      do {
        iVar1 = local_90[uVar4];
        if (iVar1 < 0x10) {
          lVar2 = local_110[uVar4];
          local_90[uVar4] = iVar1 + 1;
          if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + (long)iVar1 * 8), lVar2 != 0)) {
            uVar3 = uVar3 & 0xfffffffffffffff0 | (long)iVar1;
            if ((int)uVar4 < *param_1 + -1) {
              uVar4 = uVar4 + 1;
              uVar3 = uVar3 << 4;
              local_90[uVar4] = 0;
              local_110[uVar4] = lVar2;
            }
            else {
              (*param_2)(uVar3,lVar2,param_3);
            }
          }
        }
        else {
          uVar3 = uVar3 >> 4;
          uVar4 = uVar4 - 1;
        }
      } while (-1 < (int)uVar4);
    }
  }
  return;
}


// ===== 003e9f40  FUN_003e9f40 =====

long FUN_003e9f40(long param_1)

{
  if (param_1 != 0) {
    param_1 = *(long *)(param_1 + 0x10);
  }
  return param_1;
}


// ===== 003e9f4c  FUN_003e9f4c =====

uint * FUN_003e9f4c(uint *param_1,ulong param_2)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_1 != (uint *)0x0) {
    if ((*(long *)(param_1 + 4) != 0) && (param_2 <= *(ulong *)(param_1 + 2))) {
      lVar3 = *(long *)(param_1 + 6);
      if ((lVar3 != 0) && (uVar4 = (ulong)*param_1, 1 < (int)*param_1)) {
        uVar5 = uVar4 * 4;
        do {
          uVar5 = uVar5 - 4;
          lVar3 = *(long *)(lVar3 + (param_2 >> (uVar5 & 0x3c) & 0xf) * 8);
          bVar1 = 1 < uVar4;
          bVar2 = uVar4 != 2;
          uVar4 = uVar4 - 1;
        } while ((lVar3 != 0 && bVar1) && (lVar3 == 0 || bVar2));
      }
      if (lVar3 != 0) {
        return *(uint **)(lVar3 + (param_2 & 0xf) * 8);
      }
    }
    param_1 = (uint *)0x0;
  }
  return param_1;
}


// ===== 003e9fbc  FUN_003e9fbc =====

undefined8 FUN_003e9fbc(uint *param_1,ulong param_2,long param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  
  if (param_1 == (uint *)0x0) {
    return 0;
  }
  uVar5 = 1;
  uVar7 = param_2;
  uVar6 = uVar5;
  if (0xf < param_2) {
    do {
      uVar6 = uVar5 + 1;
      if (0xe < uVar5) break;
      bVar1 = 0xff < uVar7;
      uVar7 = uVar7 >> 4;
      uVar5 = uVar6;
    } while (bVar1);
  }
  uVar5 = *param_1;
  while ((int)uVar5 < (int)uVar6) {
    puVar2 = (undefined8 *)FUN_003c8474(0x80,"crypto/sparse_array.c",0xb0);
    if (puVar2 == (undefined8 *)0x0) {
      return 0;
    }
    uVar3 = *(undefined8 *)(param_1 + 6);
    uVar5 = *param_1;
    *(undefined8 **)(param_1 + 6) = puVar2;
    *puVar2 = uVar3;
    uVar5 = uVar5 + 1;
    *param_1 = uVar5;
  }
  if (*(ulong *)(param_1 + 2) < param_2) {
    *(ulong *)(param_1 + 2) = param_2;
  }
  lVar8 = *(long *)(param_1 + 6);
  if (1 < (int)uVar5) {
    uVar9 = (ulong)uVar5 << 2;
    uVar7 = (ulong)uVar5 + 1;
    lVar4 = lVar8;
    do {
      uVar9 = uVar9 - 4;
      uVar10 = param_2 >> (uVar9 & 0x3c) & 0xf;
      lVar8 = *(long *)(lVar4 + uVar10 * 8);
      if (lVar8 == 0) {
        lVar8 = FUN_003c8474(0x80,"crypto/sparse_array.c",0xb0);
        *(long *)(lVar4 + uVar10 * 8) = lVar8;
        if (lVar8 == 0) {
          return 0;
        }
      }
      uVar7 = uVar7 - 1;
      lVar4 = lVar8;
    } while (2 < uVar7);
  }
  lVar4 = *(long *)(lVar8 + (param_2 & 0xf) * 8);
  if (param_3 == 0) {
    if (lVar4 == 0) goto LAB_003ea104;
    lVar4 = -1;
  }
  else {
    if (lVar4 != 0) goto LAB_003ea104;
    lVar4 = 1;
  }
  *(long *)(param_1 + 4) = *(long *)(param_1 + 4) + lVar4;
LAB_003ea104:
  *(long *)(lVar8 + (param_2 & 0xf) * 8) = param_3;
  return 1;
}


// ===== 003ea124  FUN_003ea124 =====

undefined8 FUN_003ea124(void)

{
  long lVar1;
  
  lVar1 = FUN_0037aa50(0x1b800064);
  if (lVar1 != 0) {
    return 1;
  }
  FUN_00379fc4(&DAT_0077a8c8);
  return 1;
}


// ===== 003ea160  FUN_003ea160 =====

/* WARNING: Removing unreachable block (ram,0x003ea290) */

long FUN_003ea160(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  char *pcVar7;
  char *local_38;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar2 = FUN_0040bfd0(FUN_003ea39c);
  lVar6 = lVar2;
  if (lVar2 != 0) {
    pcVar5 = (char *)(param_2 + -1);
    do {
      pcVar5 = pcVar5 + 1;
      iVar1 = FUN_003c475c(*pcVar5,8);
    } while (iVar1 != 0);
    local_38 = pcVar5;
    if (*pcVar5 == '\0') {
LAB_003ea2dc:
      lVar6 = FUN_003eabdc(param_1,lVar2);
LAB_003ea2ec:
      piVar3 = (int *)0x0;
    }
    else {
      while (local_38 = pcVar5,
            piVar3 = (int *)FUN_003c83a4(0x18,"crypto/property/property_parse.c",0x168),
            piVar3 != (int *)0x0) {
        piVar3[4] = 0;
        piVar3[5] = 0;
        *(byte *)(piVar3 + 3) = *(byte *)(piVar3 + 3) & 0xfe;
        iVar1 = FUN_003ea3bc(param_1,&local_38,piVar3);
        if (iVar1 == 0) break;
        piVar3[2] = 0;
        if (*piVar3 == 0) {
          FUN_00379868();
          FUN_0037995c("crypto/property/property_parse.c",0x171,"ossl_parse_property");
          pcVar7 = "Unknown name HERE-->%s";
          uVar4 = 0x6c;
LAB_003ea350:
          FUN_00379a5c(0x37,uVar4,pcVar7,pcVar5);
          break;
        }
        pcVar7 = local_38;
        if (*local_38 == '=') {
          do {
            pcVar7 = pcVar7 + 1;
            iVar1 = FUN_003c475c(*pcVar7,8);
          } while (iVar1 != 0);
          local_38 = pcVar7;
          iVar1 = FUN_003ea588(param_1,&local_38,piVar3,1);
          if (iVar1 == 0) {
            FUN_00379868();
            FUN_0037995c("crypto/property/property_parse.c",0x177,"ossl_parse_property");
            pcVar7 = "HERE-->%s";
            uVar4 = 0x6b;
            goto LAB_003ea350;
          }
        }
        else {
          piVar3[1] = 0;
          piVar3[4] = 1;
        }
        iVar1 = FUN_0040c89c(lVar2,piVar3);
        pcVar5 = local_38;
        if (iVar1 == 0) break;
        if (*local_38 != ',') {
          if (*local_38 == '\0') goto LAB_003ea2dc;
          FUN_00379868();
          FUN_0037995c("crypto/property/property_parse.c",0x187,"ossl_parse_property");
          FUN_00379a5c(0x37,0x6e,"HERE-->%s",pcVar5);
          lVar6 = 0;
          goto LAB_003ea2ec;
        }
        do {
          pcVar5 = pcVar5 + 1;
          iVar1 = FUN_003c475c(*pcVar5,8);
        } while (iVar1 != 0);
      }
      lVar6 = 0;
    }
    FUN_003c86b4(piVar3,"crypto/property/property_parse.c",0x18e);
    FUN_0040ca6c(lVar2,FUN_003ead68);
  }
  return lVar6;
}


// ===== 003ea39c  FUN_003ea39c =====

uint FUN_003ea39c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(*(int *)*param_2 < *(int *)*param_1);
  if (*(int *)*param_1 < *(int *)*param_2) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


// ===== 003ea3bc  FUN_003ea3bc =====

undefined8 FUN_003ea3bc(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined1 local_c4 [100];
  
  puVar8 = (undefined1 *)*param_2;
  iVar4 = FUN_003c475c(*puVar8,3);
  if (iVar4 != 0) {
    uVar5 = 0;
    uVar9 = 0;
    bVar2 = false;
    do {
      puVar8 = puVar8 + 2;
      while( true ) {
        if (uVar9 < 99) {
          uVar3 = FUN_003c47b4(puVar8[-2]);
          local_c4[uVar9] = uVar3;
          cVar1 = puVar8[-1];
          uVar9 = uVar9 + 1;
        }
        else {
          bVar2 = true;
          cVar1 = puVar8[-1];
        }
        if ((cVar1 != '_') && (iVar4 = FUN_003c475c(cVar1,7), iVar4 == 0)) break;
        puVar8 = puVar8 + 1;
      }
      if (puVar8[-1] != '.') {
        local_c4[uVar9] = 0;
        if (!bVar2) {
          puVar8 = puVar8 + -2;
          do {
            puVar8 = puVar8 + 1;
            iVar4 = FUN_003c475c(*puVar8,8);
          } while (iVar4 != 0);
          *param_2 = puVar8;
          uVar5 = FUN_003ebda4(param_1,local_c4,uVar5);
          *param_3 = uVar5;
          return 1;
        }
        FUN_00379868();
        FUN_0037995c("crypto/property/property_parse.c",0x57,"parse_name");
        uVar7 = *param_2;
        uVar6 = 100;
        goto LAB_003ea528;
      }
      if (uVar9 < 99) {
        local_c4[uVar9] = 0x2e;
        iVar4 = FUN_003c475c(*puVar8,3);
        uVar9 = uVar9 + 1;
      }
      else {
        bVar2 = true;
        iVar4 = FUN_003c475c(*puVar8,3);
      }
      uVar5 = 1;
    } while (iVar4 != 0);
  }
  FUN_00379868();
  FUN_0037995c("crypto/property/property_parse.c",0x42,"parse_name");
  uVar7 = *param_2;
  uVar6 = 0x67;
LAB_003ea528:
  FUN_00379a5c(0x37,uVar6,"HERE-->%s",uVar7);
  return 0;
}


// ===== 003ea588  FUN_003ea588 =====

/* WARNING: Type propagation algorithm not settling */

ulong FUN_003ea588(undefined8 param_1,long *param_2,long param_3,undefined4 param_4)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  char *pcVar7;
  byte bVar8;
  byte *pbVar9;
  uint uVar10;
  long lVar11;
  byte *pbVar12;
  byte *pbVar13;
  ulong uVar14;
  bool bVar15;
  byte local_448 [1000];
  byte *local_48;
  
  pbVar12 = (byte *)*param_2;
  bVar2 = *pbVar12;
  local_48 = pbVar12;
  if (bVar2 < 0x2b) {
    if ((bVar2 != 0x22) && (bVar2 != 0x27)) goto LAB_003ea914;
    bVar8 = pbVar12[1];
    pbVar9 = pbVar12 + 1;
    local_48 = pbVar9;
    if ((bVar8 == 0) || (bVar8 == bVar2)) {
      if (bVar8 == 0) goto LAB_003ea7cc;
      local_448[0] = 0;
      pbVar12 = pbVar9;
LAB_003ea794:
      uVar4 = FUN_003ec0bc(param_1,local_448,param_4);
      uVar10 = 1;
      *(undefined4 *)(param_3 + 0x10) = uVar4;
    }
    else {
      bVar15 = false;
      uVar5 = 0;
      pbVar13 = pbVar9;
      do {
        pbVar12 = pbVar13;
        if (uVar5 < 999) {
          local_448[uVar5] = bVar8;
          bVar8 = pbVar12[1];
          uVar5 = uVar5 + 1;
        }
        else {
          bVar15 = true;
          bVar8 = pbVar12[1];
        }
      } while ((bVar8 != 0) && (pbVar13 = pbVar12 + 1, bVar8 != bVar2));
      pbVar12 = pbVar12 + 1;
      if (bVar8 == 0) {
LAB_003ea7cc:
        FUN_00379868();
        FUN_0037995c("crypto/property/property_parse.c",0xd0,"parse_string");
        FUN_00379a5c(0x37,0x6a,"HERE-->%c%s",bVar2,pbVar9);
        return 0;
      }
      local_448[uVar5] = 0;
      if (!bVar15) goto LAB_003ea794;
      FUN_00379868();
      FUN_0037995c("crypto/property/property_parse.c",0xd6,"parse_string");
      FUN_00379a5c(0x37,0x6d,"HERE-->%s",pbVar9);
      uVar10 = 0;
    }
    do {
      pbVar12 = pbVar12 + 1;
      iVar3 = FUN_003c475c(*pbVar12,8);
    } while (iVar3 != 0);
    uVar5 = (ulong)uVar10;
    *(undefined4 *)(param_3 + 4) = 0;
  }
  else if (bVar2 == 0x2b) {
    local_48 = pbVar12 + 1;
    uVar5 = FUN_003eb910(&local_48,param_3);
    uVar10 = (uint)uVar5;
    pbVar12 = local_48;
  }
  else {
    if (bVar2 != 0x2d) {
      if (bVar2 != 0x30) {
LAB_003ea914:
        iVar3 = FUN_003c4784(bVar2);
        if (iVar3 != 0) {
          uVar5 = FUN_003eb910(param_2,param_3);
          return uVar5;
        }
        uVar5 = FUN_003c475c(*pbVar12,3);
        if ((int)uVar5 == 0) {
          return uVar5;
        }
        pbVar9 = (byte *)*param_2;
        bVar2 = *pbVar9;
        if (bVar2 == 0) {
          return 0;
        }
        if (bVar2 == 0x2c) {
          return 0;
        }
        iVar3 = FUN_003c475c(bVar2,0x100);
        if (iVar3 == 0) {
          uVar5 = 0;
          bVar15 = true;
        }
        else {
          bVar15 = false;
          uVar14 = 0;
          do {
            while( true ) {
              iVar3 = FUN_003c475c(*pbVar9,8);
              uVar5 = uVar14;
              if ((iVar3 != 0) || (*pbVar9 == 0x2c)) goto LAB_003ea9f0;
              if (uVar14 < 999) break;
              bVar15 = true;
              pbVar9 = pbVar9 + 1;
              iVar3 = FUN_003c475c(*pbVar9,0x100);
              if (iVar3 == 0) goto LAB_003ea9f0;
            }
            bVar2 = FUN_003c47b4();
            uVar5 = uVar14 + 1;
            local_448[uVar14] = bVar2;
            pbVar9 = pbVar9 + 1;
            iVar3 = FUN_003c475c(*pbVar9,0x100);
            uVar14 = uVar5;
          } while (iVar3 != 0);
LAB_003ea9f0:
          bVar15 = !bVar15;
        }
        iVar3 = FUN_003c475c(*pbVar9,8);
        if (((iVar3 != 0) || (*pbVar9 == 0)) || (*pbVar9 == 0x2c)) {
          local_448[uVar5] = 0;
          if (bVar15) {
            iVar3 = FUN_003ec0bc(param_1,local_448,param_4);
            *(int *)(param_3 + 0x10) = iVar3;
            uVar10 = (uint)(iVar3 != 0);
          }
          else {
            FUN_00379868();
            FUN_0037995c("crypto/property/property_parse.c",0xf7,"parse_unquoted");
            FUN_00379a5c(0x37,0x6d,"HERE-->%s",*param_2);
            uVar10 = 0;
          }
          pbVar9 = pbVar9 + -1;
          do {
            pbVar9 = pbVar9 + 1;
            iVar3 = FUN_003c475c(*pbVar9,8);
          } while (iVar3 != 0);
          *param_2 = (long)pbVar9;
          *(undefined4 *)(param_3 + 4) = 0;
          return (ulong)uVar10;
        }
        FUN_00379868();
        FUN_0037995c("crypto/property/property_parse.c",0xf1,"parse_unquoted");
        pcVar7 = "HERE-->%s";
        uVar6 = 0x65;
LAB_003eaac0:
        FUN_00379a5c(0x37,uVar6,pcVar7,pbVar9);
        return 0;
      }
      pbVar9 = pbVar12 + 1;
      if (*pbVar9 == 0x78) {
        lVar11 = 0;
        pbVar9 = pbVar12 + 2;
        pbVar12 = pbVar12 + 1;
        local_48 = pbVar9;
        do {
          pbVar13 = pbVar12;
          iVar3 = FUN_003c4784(pbVar13[1]);
          if (iVar3 == 0) {
            iVar3 = FUN_003c475c(pbVar13[1],0x10);
            if (iVar3 == 0) {
              FUN_00379868();
              FUN_0037995c("crypto/property/property_parse.c",0x89,"parse_hex");
              pcVar7 = "%s";
              goto LAB_003eaa88;
            }
            iVar3 = FUN_003c47b4(pbVar13[1]);
            iVar3 = iVar3 + -0x57;
          }
          else {
            iVar3 = pbVar13[1] - 0x30;
          }
          if ((long)(((long)iVar3 ^ 0x7ffffffffffffff0U) >> 4) < lVar11) {
            FUN_00379868();
            pcVar7 = "parse_hex";
            uVar6 = 0x8f;
LAB_003eaaac:
            FUN_0037995c("crypto/property/property_parse.c",uVar6,pcVar7);
            pcVar7 = "Property %s overflows";
            uVar6 = 0x6c;
            goto LAB_003eaac0;
          }
          lVar11 = (long)iVar3 + lVar11 * 0x10;
          iVar3 = FUN_003c475c(pbVar13[2],0x10);
          pbVar12 = pbVar13 + 1;
        } while (iVar3 != 0);
        iVar3 = FUN_003c475c(pbVar13[2],8);
        if (((iVar3 == 0) && (pbVar13[2] != 0)) && (pbVar13[2] != 0x2c)) {
          FUN_00379868();
          FUN_0037995c("crypto/property/property_parse.c",0x98,"parse_hex");
          pcVar7 = "HERE-->%s";
LAB_003eaa88:
          uVar6 = 0x66;
          goto LAB_003eaac0;
        }
        do {
          pbVar12 = pbVar12 + 1;
          iVar3 = FUN_003c475c(*pbVar12,8);
        } while (iVar3 != 0);
      }
      else {
        iVar3 = FUN_003c4784(*pbVar9);
        if (iVar3 == 0) {
          bVar2 = *pbVar12;
          goto LAB_003ea914;
        }
        bVar2 = *pbVar9;
        lVar11 = 0;
        local_48 = pbVar9;
        do {
          pbVar13 = pbVar12;
          if (((bVar2 & 0xfe) == 0x38) || (iVar3 = FUN_003c4784(), iVar3 == 0)) {
            FUN_00379868();
            uVar6 = 0xa9;
            goto LAB_003eaa14;
          }
          uVar5 = (ulong)pbVar13[1];
          lVar1 = -0x7fffffffffffffca - uVar5;
          if (-1 < (long)(-0x7fffffffffffffd1 - uVar5)) {
            lVar1 = -0x7fffffffffffffd1 - uVar5;
          }
          if (lVar1 >> 3 < lVar11) {
            FUN_00379868();
            pcVar7 = "parse_oct";
            uVar6 = 0xae;
            goto LAB_003eaaac;
          }
          lVar11 = uVar5 + lVar11 * 8 + -0x30;
          iVar3 = FUN_003c4784(pbVar13[2]);
          bVar2 = pbVar13[2];
          pbVar12 = pbVar13 + 1;
        } while ((iVar3 != 0) && ((bVar2 & 0xfe) != 0x38));
        iVar3 = FUN_003c475c(bVar2,8);
        if ((iVar3 == 0) && ((pbVar13[2] != 0 && (pbVar13[2] != 0x2c)))) {
          FUN_00379868();
          uVar6 = 0xb6;
LAB_003eaa14:
          FUN_0037995c("crypto/property/property_parse.c",uVar6,"parse_oct");
          pcVar7 = "HERE-->%s";
          uVar6 = 0x68;
          goto LAB_003eaac0;
        }
        do {
          pbVar12 = pbVar12 + 1;
          iVar3 = FUN_003c475c(*pbVar12,8);
        } while (iVar3 != 0);
      }
      uVar5 = 1;
      *(long *)(param_3 + 0x10) = lVar11;
      *(undefined4 *)(param_3 + 4) = 1;
      goto LAB_003ea810;
    }
    local_48 = pbVar12 + 1;
    uVar5 = FUN_003eb910(&local_48,param_3);
    *(long *)(param_3 + 0x10) = -*(long *)(param_3 + 0x10);
    uVar10 = (uint)uVar5;
    pbVar12 = local_48;
  }
  if (uVar10 == 0) {
    return uVar5;
  }
LAB_003ea810:
  *param_2 = (long)pbVar12;
  return uVar5;
}


// ===== 003eabdc  FUN_003eabdc =====

uint * FUN_003eabdc(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  byte bVar9;
  uint *puVar10;
  undefined8 uVar11;
  
  uVar3 = FUN_0040caf8(param_2);
  iVar2 = uVar3 - 1;
  if ((int)uVar3 < 1) {
    iVar2 = 0;
  }
  puVar4 = (uint *)FUN_003c83a4((long)iVar2 * 0x18 + 0x20,"crypto/property/property_parse.c",0x140);
  if (puVar4 != (uint *)0x0) {
    FUN_0040cc10(param_2);
    bVar9 = (byte)puVar4[1] & 0xfe;
    *(byte *)(puVar4 + 1) = bVar9;
    if (0 < (int)uVar3) {
      puVar5 = (undefined8 *)FUN_0040cb0c(param_2,0);
      uVar11 = *puVar5;
      uVar6 = puVar5[2];
      *(undefined8 *)(puVar4 + 4) = puVar5[1];
      *(undefined8 *)(puVar4 + 2) = uVar11;
      *(undefined8 *)(puVar4 + 6) = uVar6;
      bVar9 = (byte)puVar4[5] & 1 | bVar9;
      *(byte *)(puVar4 + 1) = bVar9;
      if (uVar3 != 1) {
        puVar10 = puVar4 + 8;
        uVar8 = 1;
        uVar7 = puVar4[2];
        do {
          puVar5 = (undefined8 *)FUN_0040cb0c(param_2,uVar8 & 0xffffffff);
          uVar11 = *puVar5;
          uVar6 = puVar5[2];
          *(undefined8 *)(puVar10 + 2) = puVar5[1];
          *(undefined8 *)puVar10 = uVar11;
          *(undefined8 *)(puVar10 + 4) = uVar6;
          bVar9 = (byte)puVar10[3] & 1 | bVar9;
          *(byte *)(puVar4 + 1) = bVar9;
          uVar1 = *puVar10;
          if (uVar1 == uVar7) {
            FUN_003c86b4(puVar4,"crypto/property/property_parse.c",0x14b);
            FUN_00379868();
            FUN_0037995c("crypto/property/property_parse.c",0x14c,"stack_to_property_list");
            uVar6 = FUN_003ebff0(param_1,uVar7);
            FUN_00379a5c(0x37,0x6c,"Duplicated name `%s\'",uVar6);
            return (uint *)0x0;
          }
          uVar8 = uVar8 + 1;
          puVar10 = puVar10 + 6;
          uVar7 = uVar1;
        } while (uVar3 != uVar8);
      }
    }
    *puVar4 = uVar3;
  }
  return puVar4;
}


// ===== 003ead68  FUN_003ead68 =====

void FUN_003ead68(undefined8 param_1)

{
  FUN_003c86b4(param_1,"crypto/property/property_parse.c",0x12d);
  return;
}


// ===== 003ead78  FUN_003ead78 =====

long FUN_003ead78(undefined8 param_1,long param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  undefined4 uVar5;
  long lVar6;
  char *pcVar7;
  char *local_48;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar2 = FUN_0040bfd0(FUN_003ea39c);
  lVar6 = lVar2;
  if (lVar2 != 0) {
    pcVar7 = (char *)(param_2 + -1);
    do {
      pcVar7 = pcVar7 + 1;
      iVar1 = FUN_003c475c(*pcVar7,8);
    } while (iVar1 != 0);
    local_48 = pcVar7;
    if (*pcVar7 == '\0') {
LAB_003eaf88:
      lVar6 = FUN_003eabdc(param_1,lVar2);
LAB_003eaf98:
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_003c83a4(0x18,"crypto/property/property_parse.c",0x1a1);
      while (lVar3 != 0) {
        *(undefined8 *)(lVar3 + 0x10) = 0;
        if (*pcVar7 == '-') {
          do {
            pcVar7 = pcVar7 + 1;
            iVar1 = FUN_003c475c(*pcVar7,8);
          } while (iVar1 != 0);
          *(undefined4 *)(lVar3 + 8) = 2;
          *(byte *)(lVar3 + 0xc) = *(byte *)(lVar3 + 0xc) & 0xfe;
          local_48 = pcVar7;
          iVar1 = FUN_003ea3bc(param_1,&local_48,lVar3);
          if (iVar1 == 0) break;
        }
        else {
          if (*pcVar7 == '?') {
            do {
              pcVar7 = pcVar7 + 1;
              iVar1 = FUN_003c475c(*pcVar7,8);
            } while (iVar1 != 0);
            bVar4 = 1;
            local_48 = pcVar7;
          }
          else {
            bVar4 = 0;
          }
          *(byte *)(lVar3 + 0xc) = *(byte *)(lVar3 + 0xc) & 0xfe | bVar4;
          iVar1 = FUN_003ea3bc(param_1,&local_48,lVar3);
          pcVar7 = local_48;
          if (iVar1 == 0) break;
          if (*local_48 == '=') {
            do {
              pcVar7 = pcVar7 + 1;
              iVar1 = FUN_003c475c(*pcVar7,8);
            } while (iVar1 != 0);
            uVar5 = 0;
          }
          else {
            iVar1 = FUN_003cab60(local_48,&DAT_001d41e9,2);
            if (iVar1 != 0) {
              *(undefined4 *)(lVar3 + 4) = 0;
              *(undefined4 *)(lVar3 + 8) = 0;
              *(undefined4 *)(lVar3 + 0x10) = 1;
              goto LAB_003eaf28;
            }
            pcVar7 = pcVar7 + 1;
            do {
              pcVar7 = pcVar7 + 1;
              iVar1 = FUN_003c475c(*pcVar7,8);
            } while (iVar1 != 0);
            uVar5 = 1;
          }
          *(undefined4 *)(lVar3 + 8) = uVar5;
          local_48 = pcVar7;
          iVar1 = FUN_003ea588(param_1,&local_48,lVar3,param_3);
          if (iVar1 == 0) {
            *(undefined4 *)(lVar3 + 4) = 2;
          }
        }
LAB_003eaf28:
        iVar1 = FUN_0040c89c(lVar2,lVar3);
        pcVar7 = local_48;
        if (iVar1 == 0) break;
        if (*local_48 != ',') {
          if (*local_48 == '\0') goto LAB_003eaf88;
          FUN_00379868();
          FUN_0037995c("crypto/property/property_parse.c",0x1c6,"ossl_parse_query");
          FUN_00379a5c(0x37,0x6e,"HERE-->%s",pcVar7);
          lVar6 = 0;
          goto LAB_003eaf98;
        }
        do {
          pcVar7 = pcVar7 + 1;
          iVar1 = FUN_003c475c(*pcVar7,8);
        } while (iVar1 != 0);
        local_48 = pcVar7;
        lVar3 = FUN_003c83a4(0x18,"crypto/property/property_parse.c",0x1a1);
      }
      lVar6 = 0;
    }
    FUN_003c86b4(lVar3,"crypto/property/property_parse.c",0x1cd);
    FUN_0040ca6c(lVar2,FUN_003ead68);
  }
  return lVar6;
}


// ===== 003eb01c  FUN_003eb01c =====

int FUN_003eb01c(uint *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  
  uVar1 = *param_1;
  if ((int)uVar1 < 1) {
    return 0;
  }
  lVar5 = 0;
  uVar6 = 0;
  iVar4 = 0;
LAB_003eb044:
  puVar8 = (uint *)(param_2 + lVar5 * 6 + 2);
  do {
    puVar9 = param_1 + (long)(int)uVar6 * 6 + 6;
    uVar6 = (ulong)(int)uVar6;
    while (uVar2 = puVar9[-2], uVar2 == 2) {
      uVar6 = uVar6 + 1;
      puVar9 = puVar9 + 6;
      if ((long)(ulong)uVar1 <= (long)uVar6) {
        return iVar4;
      }
    }
    if (lVar5 < *param_2) {
      uVar3 = puVar9[-4];
      uVar7 = *puVar8;
      if (uVar3 != uVar7 && (int)uVar7 <= (int)uVar3) goto LAB_003eb14c;
      if (uVar3 == uVar7) break;
    }
    if (puVar9[-3] == 0) {
      if (uVar2 == 1) {
        if (*puVar9 == 2) goto LAB_003eb0f8;
      }
      else if ((uVar2 == 0) && (*puVar9 != 2)) {
LAB_003eb0f8:
        if ((puVar9[-1] & 1) == 0) {
          return -1;
        }
        goto joined_r0x003eb0e4;
      }
LAB_003eb0d8:
      iVar4 = iVar4 + 1;
    }
    else {
      if (puVar9[-3] != 2) goto LAB_003eb0f8;
      if (uVar2 == 1) goto LAB_003eb0d8;
      if ((puVar9[-1] & 1) == 0) {
        return -1;
      }
    }
joined_r0x003eb0e4:
    uVar2 = (int)uVar6 + 1;
    uVar6 = (ulong)uVar2;
    if ((int)uVar1 <= (int)uVar2) {
      return iVar4;
    }
  } while( true );
  if (puVar9[-3] == puVar8[1]) {
    uVar7 = (uint)(*(long *)puVar9 == *(long *)(puVar8 + 4));
  }
  else {
    uVar7 = 0;
  }
  if (uVar2 == (uVar7 ^ 1)) {
    iVar4 = iVar4 + 1;
  }
  else if ((puVar9[-1] & 1) == 0) {
    return -1;
  }
  uVar6 = (ulong)((int)uVar6 + 1);
LAB_003eb14c:
  lVar5 = lVar5 + 1;
  if ((int)uVar1 <= (int)uVar6) {
    return iVar4;
  }
  goto LAB_003eb044;
}


// ===== 003eb16c  FUN_003eb16c =====

void FUN_003eb16c(undefined8 param_1)

{
  FUN_003c86b4(param_1,"crypto/property/property_parse.c",0x212);
  return;
}


// ===== 003eb17c  FUN_003eb17c =====

void FUN_003eb17c(int *param_1,int *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  byte bVar11;
  int iVar12;
  long lVar13;
  int *piVar14;
  undefined8 uVar15;
  int *piVar16;
  undefined8 uVar17;
  
  iVar1 = *param_2 + *param_1;
  iVar8 = 0;
  if (iVar1 != 0) {
    iVar8 = iVar1 + -1;
  }
  piVar7 = (int *)FUN_003c83a4((long)iVar8 * 0x18 + 0x20,"crypto/property/property_parse.c",0x224);
  if (piVar7 == (int *)0x0) {
    return;
  }
  iVar4 = *param_1;
  iVar8 = 0;
  iVar5 = *param_2;
  iVar9 = 0;
  iVar12 = 0;
  bVar11 = *(byte *)(piVar7 + 1) & 0xfe;
  lVar10 = -0x100000000;
  lVar13 = 8;
  *(byte *)(piVar7 + 1) = bVar11;
  do {
    if (iVar9 < iVar4) {
      piVar16 = param_1 + (long)iVar9 * 6 + 2;
      if (iVar12 < iVar5) {
        piVar14 = param_2 + (long)iVar12 * 6 + 2;
        iVar3 = iVar12;
        if (*piVar16 == *piVar14) {
          iVar3 = iVar12 + 1;
        }
        if (*piVar14 < *piVar16) {
          iVar12 = iVar12 + 1;
        }
        else {
          iVar9 = iVar9 + 1;
          piVar14 = piVar16;
          iVar12 = iVar3;
        }
      }
      else {
        iVar9 = iVar9 + 1;
        piVar14 = piVar16;
      }
    }
    else {
      if (iVar5 <= iVar12) {
        *piVar7 = iVar8;
        if (iVar1 == iVar8) {
          return;
        }
        FUN_003c8558(piVar7,(long)(int)((ulong)lVar10 >> 0x20) * 0x18 + 0x20,
                     "crypto/property/property_parse.c",0x23a);
        return;
      }
      piVar14 = param_2 + (long)iVar12 * 6 + 2;
      iVar12 = iVar12 + 1;
    }
    bVar6 = *(byte *)(piVar14 + 3);
    uVar17 = *(undefined8 *)piVar14;
    puVar2 = (undefined8 *)((long)piVar7 + lVar13);
    uVar15 = *(undefined8 *)(piVar14 + 4);
    lVar10 = lVar10 + 0x100000000;
    iVar8 = iVar8 + 1;
    puVar2[1] = *(undefined8 *)(piVar14 + 2);
    *puVar2 = uVar17;
    lVar13 = lVar13 + 0x18;
    bVar11 = bVar6 & 1 | bVar11;
    puVar2[2] = uVar15;
    *(byte *)(piVar7 + 1) = bVar11;
  } while( true );
}


// ===== 003eb2d4  FUN_003eb2d4 =====

undefined8 FUN_003eb2d4(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_003ebda4(param_1,"provider",1);
  if (((((iVar1 != 0) && (iVar1 = FUN_003ebda4(param_1,"version",1), iVar1 != 0)) &&
       (iVar1 = FUN_003ebda4(param_1,&DAT_001f9519,1), iVar1 != 0)) &&
      ((iVar1 = FUN_003ebda4(param_1,"output",1), iVar1 != 0 &&
       (iVar1 = FUN_003ebda4(param_1,"input",1), iVar1 != 0)))) &&
     ((iVar1 = FUN_003ebda4(param_1,"structure",1), iVar1 != 0 &&
      ((iVar1 = FUN_003ec0bc(param_1,&DAT_001d02b8,1), iVar1 == 1 &&
       (iVar1 = FUN_003ec0bc(param_1,&DAT_001e7342,1), iVar1 == 2)))))) {
    return 1;
  }
  return 0;
}


// ===== 003eb3c0  FUN_003eb3c0 =====

ulong FUN_003eb3c0(undefined8 param_1,int *param_2,undefined1 *param_3,ulong param_4)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 uVar9;
  int iVar10;
  int *piVar11;
  ulong uVar12;
  ulong local_78;
  ulong local_70;
  undefined1 *local_68;
  
  local_78 = 0;
  local_70 = param_4;
  if (param_2 == (int *)0x0) {
    if (param_4 == 0) {
      local_78 = 1;
    }
    else {
      *param_3 = 0;
      local_78 = 1;
    }
  }
  else {
    local_68 = param_3;
    if (0 < *param_2) {
      iVar10 = 0;
      piVar11 = param_2 + (ulong)(*param_2 - 1) * 6 + 2;
      do {
        if (*piVar11 != 0) {
          if (local_78 != 0) {
            if (local_70 == 0) {
              puVar5 = &local_78;
              lVar7 = 1;
              uVar4 = local_78;
            }
            else {
              if (local_70 == 1) {
                uVar9 = 0;
              }
              else {
                uVar9 = 0x2c;
              }
              local_78 = local_78 + 1;
              lVar7 = -1;
              *local_68 = uVar9;
              puVar5 = &local_70;
              uVar4 = local_70;
              local_68 = local_68 + 1;
            }
            *puVar5 = uVar4 + lVar7;
          }
          if ((*(byte *)(piVar11 + 3) & 1) == 0) {
            if (piVar11[2] == 2) {
              if (local_70 == 0) goto LAB_003eb4f0;
              if (local_70 == 1) goto LAB_003eb4e8;
              uVar9 = 0x2d;
LAB_003eb500:
              *local_68 = uVar9;
              lVar7 = -1;
              local_78 = local_78 + 1;
              puVar5 = &local_70;
              local_68 = local_68 + 1;
              goto LAB_003eb520;
            }
          }
          else {
            if (local_70 != 0) {
              if (local_70 == 1) {
LAB_003eb4e8:
                uVar9 = 0;
              }
              else {
                uVar9 = 0x3f;
              }
              goto LAB_003eb500;
            }
LAB_003eb4f0:
            puVar5 = &local_78;
            lVar7 = 1;
LAB_003eb520:
            *puVar5 = *puVar5 + lVar7;
          }
          lVar7 = FUN_003ebff0(param_1,*piVar11);
          if (lVar7 == 0) {
            return 0;
          }
          FUN_003eb72c(lVar7,&local_68,&local_70,&local_78);
          if (piVar11[2] != 0) {
            if (piVar11[2] != 1) goto LAB_003eb438;
            if (local_70 == 0) {
              puVar5 = &local_78;
              lVar7 = 1;
            }
            else {
              if (local_70 == 1) {
                uVar9 = 0;
              }
              else {
                uVar9 = 0x21;
              }
              *local_68 = uVar9;
              lVar7 = -1;
              local_78 = local_78 + 1;
              puVar5 = &local_70;
              local_68 = local_68 + 1;
            }
            *puVar5 = *puVar5 + lVar7;
          }
          if (local_70 == 0) {
            iVar2 = piVar11[1];
            uVar4 = local_70;
            puVar8 = local_68;
          }
          else {
            if (local_70 == 1) {
              uVar9 = 0;
            }
            else {
              uVar9 = 0x3d;
            }
            puVar8 = local_68 + 1;
            *local_68 = uVar9;
            iVar2 = piVar11[1];
            local_70 = local_70 - 1;
            uVar4 = local_70;
          }
          local_70 = uVar4;
          local_68 = puVar8;
          if (iVar2 == 1) {
            local_78 = local_78 + 1;
            uVar3 = *(ulong *)(piVar11 + 4);
            uVar6 = -uVar3;
            if (-1 < (long)uVar3) {
              uVar6 = uVar3;
            }
            uVar12 = 1;
            if (-1 >= (long)uVar3) {
              uVar12 = 2;
            }
            if (9 < uVar6) {
              do {
                uVar12 = uVar12 + 1;
                bVar1 = 99 < uVar6;
                uVar6 = uVar6 / 10;
              } while (bVar1);
            }
            local_78 = local_78 + uVar12;
            if (uVar4 != 0) {
              FUN_0037cd5c(puVar8,uVar4,&DAT_001beee3);
              uVar6 = uVar4;
              if (uVar12 <= uVar4) {
                uVar6 = uVar12;
              }
              local_70 = 0;
              if (uVar12 <= uVar4) {
                local_70 = uVar4 - uVar12;
              }
              local_68 = puVar8 + uVar6;
            }
          }
          else {
            local_78 = local_78 + 1;
            if (iVar2 != 0) {
              return 0;
            }
            lVar7 = FUN_003ec0c8(param_1,piVar11[4]);
            if (lVar7 == 0) {
              return 0;
            }
            FUN_003eb72c(lVar7,&local_68,&local_70,&local_78);
          }
        }
LAB_003eb438:
        iVar10 = iVar10 + 1;
        piVar11 = piVar11 + -6;
        param_4 = local_70;
      } while (iVar10 < *param_2);
    }
    if (param_4 == 0) {
      puVar5 = &local_78;
      lVar7 = 1;
    }
    else {
      *local_68 = 0;
      lVar7 = -1;
      local_78 = local_78 + 1;
      puVar5 = &local_70;
    }
    *puVar5 = *puVar5 + lVar7;
  }
  return local_78;
}


// ===== 003eb72c  FUN_003eb72c =====

void FUN_003eb72c(char *param_1,long *param_2,ulong *param_3,ulong *param_4)

{
  char *pcVar1;
  char cVar2;
  size_t __n;
  char cVar3;
  size_t sVar4;
  int iVar5;
  size_t sVar6;
  ulong uVar7;
  long lVar8;
  char cVar9;
  
  sVar6 = strlen(param_1);
  cVar9 = '\0';
  *param_4 = *param_4 + sVar6;
  pcVar1 = param_1;
  for (sVar4 = sVar6; sVar4 != 0; sVar4 = sVar4 - 1) {
    iVar5 = FUN_003c475c(*pcVar1,7);
    if (((iVar5 == 0) && (cVar3 = *pcVar1, cVar3 != '.')) && (cVar3 != '_')) {
      cVar2 = '\'';
      if (cVar9 != '\0') {
        cVar2 = cVar9;
      }
      cVar9 = '\"';
      if (cVar3 != '\'') {
        cVar9 = cVar2;
      }
    }
    pcVar1 = pcVar1 + 1;
  }
  uVar7 = *param_3;
  if (uVar7 == 0) {
    lVar8 = (ulong)(cVar9 != '\0') << 1;
  }
  else {
    if (cVar9 != '\0') {
      cVar3 = '\0';
      if (uVar7 != 1) {
        cVar3 = cVar9;
      }
      *(char *)*param_2 = cVar3;
      lVar8 = *param_2;
      *param_4 = *param_4 + 1;
      uVar7 = *param_3;
      *param_2 = lVar8 + 1;
      uVar7 = uVar7 - 1;
      *param_3 = uVar7;
    }
    sVar4 = sVar6;
    if (cVar9 != '\0') {
      sVar4 = sVar6 + 1;
    }
    __n = uVar7 - 1;
    if (sVar4 + 1 <= uVar7) {
      __n = sVar6;
    }
    if (__n != 0) {
      memcpy((void *)*param_2,param_1,__n);
      uVar7 = *param_3 - __n;
      *param_2 = *param_2 + __n;
      *param_3 = uVar7;
    }
    if (cVar9 != '\0') {
      if (uVar7 == 0) {
        lVar8 = 1;
      }
      else {
        if (uVar7 == 1) {
          cVar9 = '\0';
        }
        *(char *)*param_2 = cVar9;
        uVar7 = *param_4;
        *param_2 = *param_2 + 1;
        lVar8 = -1;
        *param_4 = uVar7 + 1;
        param_4 = param_3;
      }
      *param_4 = *param_4 + lVar8;
    }
    if (sVar6 <= __n) {
      return;
    }
    if (*param_3 != 1) {
      return;
    }
    *(undefined1 *)*param_2 = 0;
    *param_2 = *param_2 + 1;
    lVar8 = -1;
    param_4 = param_3;
  }
  *param_4 = *param_4 + lVar8;
  return;
}


// ===== 003eb910  FUN_003eb910 =====

undefined8 FUN_003eb910(long *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  
  lVar4 = 0;
  puVar6 = (undefined1 *)(*param_1 + -1);
  while( true ) {
    puVar5 = puVar6;
    iVar1 = FUN_003c4784(puVar5[1]);
    if (iVar1 == 0) {
      FUN_00379868();
      uVar2 = 0x66;
      goto LAB_003eb9f0;
    }
    if ((long)(-0x7fffffffffffffd1 - (ulong)(byte)puVar5[1]) / 10 < lVar4) break;
    lVar4 = (ulong)(byte)puVar5[1] + lVar4 * 10 + -0x30;
    iVar1 = FUN_003c4784(puVar5[2]);
    puVar6 = puVar5 + 1;
    if (iVar1 == 0) {
      iVar1 = FUN_003c475c(puVar5[2],8);
      if (iVar1 == 0) {
        if ((puVar5[2] != '\0') && (puVar5[2] != ',')) {
          FUN_00379868();
          uVar2 = 0x73;
LAB_003eb9f0:
          FUN_0037995c("crypto/property/property_parse.c",uVar2,"parse_number");
          lVar4 = *param_1;
          pcVar3 = "HERE-->%s";
          uVar2 = 0x69;
LAB_003eba3c:
          FUN_00379a5c(0x37,uVar2,pcVar3,lVar4);
          return 0;
        }
      }
      do {
        puVar6 = puVar6 + 1;
        iVar1 = FUN_003c475c(*puVar6,8);
      } while (iVar1 != 0);
      *param_1 = (long)puVar6;
      *(undefined4 *)(param_2 + 4) = 1;
      *(long *)(param_2 + 0x10) = lVar4;
      return 1;
    }
  }
  FUN_00379868();
  FUN_0037995c("crypto/property/property_parse.c",0x6c,"parse_number");
  lVar4 = *param_1;
  pcVar3 = "Property %s overflows";
  uVar2 = 0x6c;
  goto LAB_003eba3c;
}


// ===== 003eba88  FUN_003eba88 =====

undefined8 FUN_003eba88(undefined4 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  int local_4;
  
  uVar1 = 0;
  if ((param_1 != (undefined4 *)0x0) && (param_3 != 0)) {
    local_4 = FUN_003ebda4(param_2,param_3,0);
    if (local_4 == 0) {
      return 0;
    }
    uVar1 = FUN_003de3b8(&local_4,param_1 + 2,*param_1,0x18,FUN_003ebaf8,0);
  }
  return uVar1;
}


// ===== 003ebaf8  FUN_003ebaf8 =====

int FUN_003ebaf8(int *param_1,int *param_2)

{
  return *param_1 - *param_2;
}


// ===== 003ebb08  FUN_003ebb08 =====

undefined4 FUN_003ebb08(long param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


// ===== 003ebb10  FUN_003ebb10 =====

undefined8 FUN_003ebb10(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if ((param_2 != 0) && (*(int *)(param_2 + 4) == 0)) {
    uVar1 = FUN_003ec0c8(param_1,*(undefined4 *)(param_2 + 0x10));
    return uVar1;
  }
  return 0;
}


// ===== 003ebb2c  FUN_003ebb2c =====

long FUN_003ebb2c(long param_1)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 4) != 1) {
      return 0;
    }
    param_1 = *(long *)(param_1 + 0x10);
  }
  return param_1;
}


// ===== 003ebb4c  FUN_003ebb4c =====

byte FUN_003ebb4c(long param_1)

{
  return *(byte *)(param_1 + 4) & 1;
}


// ===== 003ebb58  FUN_003ebb58 =====

bool FUN_003ebb58(undefined8 param_1,long param_2,undefined4 *param_3)

{
  int iVar1;
  long lVar2;
  int local_4;
  
  if (((param_2 != 0) && (param_3 != (undefined4 *)0x0)) &&
     (local_4 = FUN_003ebda4(param_1,param_2,0), local_4 != 0)) {
    lVar2 = FUN_003de3b8(&local_4,param_3 + 2,*param_3,0x18,FUN_003ebaf8,0);
    if (lVar2 == 0) {
      return false;
    }
    if ((*(byte *)(lVar2 + 0xc) & 1) == 0) {
      iVar1 = *(int *)(lVar2 + 8);
      if (iVar1 == 2) {
        return false;
      }
      if (*(int *)(lVar2 + 4) == 0) {
        if (iVar1 == 1) {
          return *(int *)(lVar2 + 0x10) != 1;
        }
        if (iVar1 == 0) {
          return *(int *)(lVar2 + 0x10) == 1;
        }
      }
    }
  }
  return false;
}


// ===== 003ebc1c  FUN_003ebc1c =====

void FUN_003ebc1c(undefined8 *param_1)

{
  long lVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    FUN_003d51ac(*param_1);
    lVar1 = param_1[1];
    if (lVar1 != 0) {
      FUN_003b9160(lVar1,FUN_003ec0d8);
      FUN_003b8b74(lVar1);
      param_1[1] = 0;
    }
    lVar1 = param_1[2];
    if (lVar1 != 0) {
      FUN_003b9160(lVar1,FUN_003ec0d8);
      FUN_003b8b74(lVar1);
      param_1[2] = 0;
    }
    FUN_0040bd78(param_1[4]);
    FUN_0040bd78(param_1[5]);
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    FUN_003c86b4(param_1,"crypto/property/property_string.c",0x5d);
    return;
  }
  return;
}


// ===== 003ebcb8  FUN_003ebcb8 =====

long * FUN_003ebcb8(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  plVar1 = (long *)FUN_003c8474(0x30,"crypto/property/property_string.c",0x61);
  if (plVar1 != (long *)0x0) {
    lVar2 = FUN_003d5150();
    *plVar1 = lVar2;
    lVar3 = FUN_003b8a34(FUN_003ebd90,FUN_003ebd98);
    plVar1[1] = lVar3;
    lVar4 = FUN_003b8a34(FUN_003ebd90,FUN_003ebd98);
    plVar1[2] = lVar4;
    lVar5 = FUN_0040bf0c();
    plVar1[4] = lVar5;
    lVar6 = FUN_0040bf0c();
    plVar1[5] = lVar6;
    if ((((lVar2 == 0) || (lVar5 == 0)) || (lVar6 == 0)) || ((lVar3 == 0 || (lVar4 == 0)))) {
      FUN_003ebc1c(plVar1);
      return (long *)0x0;
    }
  }
  return plVar1;
}


// ===== 003ebd90  FUN_003ebd90 =====

void FUN_003ebd90(undefined8 *param_1)

{
  FUN_003b8b18(*param_1);
  return;
}


// ===== 003ebd98  FUN_003ebd98 =====

int FUN_003ebd98(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = strcmp((char *)*param_1,(char *)*param_2);
  return iVar1;
}


// ===== 003ebda4  FUN_003ebda4 =====

void FUN_003ebda4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_003ebdb0(param_1,1,param_3,param_2);
  return;
}


// ===== 003ebdb0  FUN_003ebdb0 =====

undefined4 FUN_003ebdb0(undefined8 param_1,int param_2,int param_3,char *param_4)

{
  undefined4 uVar1;
  void *__dest;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  size_t sVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char *local_60 [2];
  
  puVar6 = (undefined8 *)FUN_003b9c48(param_1,3);
  if (puVar6 == (undefined8 *)0x0) {
    return 0;
  }
  lVar2 = 0x10;
  if (param_2 != 0) {
    lVar2 = 8;
  }
  uVar9 = *(undefined8 *)((long)puVar6 + lVar2);
  local_60[0] = param_4;
  iVar5 = FUN_003d517c(*puVar6);
  if (iVar5 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/property/property_string.c",0x9d,"ossl_property_string");
    uVar1 = 0xc010f;
LAB_003ebed0:
    FUN_00379a5c(0xf,uVar1,0);
    return 0;
  }
  puVar7 = (undefined8 *)FUN_003b908c(uVar9,local_60);
  FUN_003d519c(*puVar6);
  if ((param_3 == 0) || (puVar7 != (undefined8 *)0x0)) {
    if (puVar7 == (undefined8 *)0x0) {
      return 0;
    }
    goto LAB_003ebe9c;
  }
  iVar5 = FUN_003d518c(*puVar6);
  if (iVar5 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/property/property_string.c",0xa4,"ossl_property_string");
    uVar1 = 0xc0110;
    goto LAB_003ebed0;
  }
  lVar2 = 0x1c;
  if (param_2 != 0) {
    lVar2 = 0x18;
  }
  puVar7 = (undefined8 *)FUN_003b908c(uVar9,local_60);
  if (puVar7 == (undefined8 *)0x0) {
    sVar8 = strlen(param_4);
    puVar7 = (undefined8 *)FUN_003c83a4(sVar8 + 0x10,"crypto/property/property_string.c",0x80);
    if (puVar7 != (undefined8 *)0x0) {
      __dest = (void *)((long)puVar7 + 0xc);
      memcpy(__dest,param_4,sVar8 + 1);
      iVar4 = *(int *)((long)puVar6 + lVar2);
      *puVar7 = __dest;
      iVar5 = iVar4 + 1;
      *(int *)((long)puVar6 + lVar2) = iVar5;
      *(int *)(puVar7 + 1) = iVar5;
      if (iVar4 == -1) {
        uVar9 = 0x87;
      }
      else {
        lVar3 = 0x28;
        if (param_2 != 0) {
          lVar3 = 0x20;
        }
        uVar10 = *(undefined8 *)((long)puVar6 + lVar3);
        iVar5 = FUN_0040c89c(uVar10,__dest);
        if (0 < iVar5) {
          FUN_003b8ca4(uVar9,puVar7);
          iVar5 = FUN_003b92bc(uVar9);
          if (iVar5 != 0) {
            FUN_0040ca00(uVar10);
            FUN_003c86b4(puVar7,"crypto/property/property_string.c",0x3e);
            uVar9 = *puVar6;
            *(int *)((long)puVar6 + lVar2) = *(int *)((long)puVar6 + lVar2) + -1;
            goto LAB_003ebfe8;
          }
          goto LAB_003ebe60;
        }
        uVar9 = 0x3e;
      }
      FUN_003c86b4(puVar7,"crypto/property/property_string.c",uVar9);
    }
    uVar9 = *puVar6;
LAB_003ebfe8:
    FUN_003d519c(uVar9);
    return 0;
  }
LAB_003ebe60:
  FUN_003d519c(*puVar6);
LAB_003ebe9c:
  return *(undefined4 *)(puVar7 + 1);
}


// ===== 003ebff0  FUN_003ebff0 =====

void FUN_003ebff0(undefined8 param_1,undefined4 param_2)

{
  FUN_003ec000(1,param_1,param_2);
  return;
}


// ===== 003ec000  FUN_003ec000 =====

undefined8 FUN_003ec000(int param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = (undefined8 *)FUN_003b9c48(param_2,3);
  if (puVar3 != (undefined8 *)0x0) {
    iVar2 = FUN_003d517c(*puVar3);
    if (iVar2 != 0) {
      lVar1 = 0x28;
      if (param_1 != 0) {
        lVar1 = 0x20;
      }
      uVar4 = FUN_0040cb0c(*(undefined8 *)((long)puVar3 + lVar1),param_3 + -1);
      FUN_003d519c(*puVar3);
      return uVar4;
    }
    FUN_00379868();
    FUN_0037995c("crypto/property/property_string.c",0xe3,"ossl_property_str");
    FUN_00379a5c(0xf,0xc010f,0);
  }
  return 0;
}


// ===== 003ec0bc  FUN_003ec0bc =====

void FUN_003ec0bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_003ebdb0(param_1,0,param_3,param_2);
  return;
}


// ===== 003ec0c8  FUN_003ec0c8 =====

void FUN_003ec0c8(undefined8 param_1,undefined4 param_2)

{
  FUN_003ec000(0,param_1,param_2);
  return;
}


// ===== 003ec0d8  FUN_003ec0d8 =====

void FUN_003ec0d8(undefined8 param_1)

{
  FUN_003c86b4(param_1,"crypto/property/property_string.c",0x3e);
  return;
}


// ===== 003ec0e8  FUN_003ec0e8 =====

undefined8
FUN_003ec0e8(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
            undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = FUN_003eec24(param_3,1,param_4,param_5);
  if (lVar1 != 0) {
    lVar2 = FUN_00466108();
    if (lVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_003eedf8(lVar1);
      uVar4 = FUN_003eee00(lVar1);
      *param_2 = uVar4;
    }
    FUN_003eed6c(lVar1);
    return uVar3;
  }
  FUN_00379868();
  FUN_0037995c("crypto/rand/prov_seed.c",0x1c,"ossl_rand_get_entropy");
  FUN_00379a5c(0x24,0x80024,0);
  return 0;
}


// ===== 003ec1a4  FUN_003ec1a4 =====

void FUN_003ec1a4(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_003edf1c();
  lVar2 = lVar1;
  if ((lVar1 != 0) && (lVar2 = FUN_003ed64c(), (int)lVar2 != 0)) {
    FUN_003ed660(lVar1,param_2,param_3,param_4,param_5,0,0,0);
    return;
  }
  FUN_003ec0e8(lVar2,param_2,param_3,param_4,param_5);
  return;
}


// ===== 003ec234  FUN_003ec234 =====

void FUN_003ec234(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_003c9d0c(param_2,param_3,"crypto/rand/prov_seed.c",0x3c);
  return;
}


// ===== 003ec250  FUN_003ec250 =====

void FUN_003ec250(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_003edf1c();
  if ((lVar2 != 0) && (iVar1 = FUN_003ed64c(), iVar1 != 0)) {
    FUN_003ed72c(lVar2,param_2,param_3);
    return;
  }
  FUN_003c9d0c(param_2,param_3,"crypto/rand/prov_seed.c",0x47);
  return;
}


// ===== 003ec2bc  FUN_003ec2bc =====

undefined8
FUN_003ec2bc(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
            long param_5,undefined8 param_6)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_003eec24(0,0);
  if (lVar2 != 0) {
    iVar1 = FUN_0046643c();
    if ((iVar1 == 0) ||
       ((param_5 != 0 && (iVar1 = FUN_003ef124(lVar2,param_5,param_6,0), iVar1 == 0)))) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_003eedf8(lVar2);
      uVar4 = FUN_003eee00(lVar2);
      *param_2 = uVar4;
    }
    FUN_003eed6c(lVar2);
    return uVar3;
  }
  FUN_00379868();
  FUN_0037995c("crypto/rand/prov_seed.c",0x54,"ossl_rand_get_nonce");
  FUN_00379a5c(0x24,0x80024,0);
  return 0;
}


// ===== 003ec394  FUN_003ec394 =====

undefined8
FUN_003ec394(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_003edf1c();
  if (lVar2 == 0) {
    uVar4 = FUN_003ec2bc(0,param_2,param_3,param_4,param_5,param_6);
    return uVar4;
  }
  lVar3 = FUN_003c83a4(param_3,"crypto/rand/prov_seed.c",0x6f);
  if (lVar3 != 0) {
    iVar1 = FUN_003ed06c(lVar2,lVar3,param_3,0,0,param_5,param_6);
    if (iVar1 != 0) {
      *param_2 = lVar3;
      return param_3;
    }
    FUN_003c86b4(lVar3,"crypto/rand/prov_seed.c",0x73);
  }
  return 0;
}


// ===== 003ec47c  FUN_003ec47c =====

void FUN_003ec47c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_003c893c(param_2,param_3,"crypto/rand/prov_seed.c",0x7d);
  return;
}


// ===== 003ec498  FUN_003ec498 =====

void FUN_003ec498(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_003c893c(param_2,param_3,"crypto/rand/prov_seed.c",0x83);
  return;
}


// ===== 003ec4b4  FUN_003ec4b4 =====

undefined8 FUN_003ec4b4(long *param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(*param_1 + 0x68) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003ec4c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x68))(param_1[1]);
    return uVar1;
  }
  FUN_00379868();
  FUN_0037995c("crypto/evp/evp_rand.c",0x62,"EVP_RAND_enable_locking");
  FUN_00379a5c(6,0xd5,0);
  return 0;
}


// ===== 003ec508  FUN_003ec508 =====

void FUN_003ec508(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00382990(param_1,5,param_2,param_3,FUN_003ec530,FUN_003ec940,FUN_003ec958);
  return;
}


// ===== 003ec530  FUN_003ec530 =====

long * FUN_003ec530(undefined4 param_1,long param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  
  lVar9 = *(long *)(param_2 + 0x10);
  plVar2 = (long *)FUN_003c8474(200,"crypto/evp/evp_rand.c",0x51);
  if (plVar2 == (long *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/evp/evp_rand.c",0x81,"evp_rand_from_algorithm");
    FUN_00379a5c(6,0x80006,0);
    return (long *)0x0;
  }
  *(undefined4 *)(plVar2 + 1) = param_1;
  *(undefined4 *)(plVar2 + 4) = 1;
  lVar3 = FUN_003c34fc(param_2);
  plVar2[2] = lVar3;
  if (lVar3 == 0) {
    lVar9 = plVar2[4];
    iVar1 = (int)lVar9 + -1;
    *(int *)(plVar2 + 4) = iVar1;
    if (iVar1 == 0 || (int)lVar9 < 1) {
      FUN_003c86b4(0,"crypto/evp/evp_rand.c",0x49);
      FUN_003d27b0(*plVar2);
      FUN_003c86b4(plVar2,"crypto/evp/evp_rand.c",0x4c);
    }
    return (long *)0x0;
  }
  iVar1 = 0;
  iVar7 = 0;
  uVar5 = 0;
  uVar6 = 0;
  plVar2[3] = *(long *)(param_2 + 0x18);
  plVar2[5] = lVar9;
  plVar8 = (long *)(lVar9 + 8);
LAB_003ec5c4:
  switch((int)plVar8[-1]) {
  case 0:
    goto switchD_003ec5dc_caseD_0;
  case 1:
    if (plVar2[6] == 0) {
      iVar7 = iVar7 + 1;
      plVar2[6] = *plVar8;
      plVar8 = plVar8 + 2;
      goto LAB_003ec5c4;
    }
    break;
  case 2:
    if (plVar2[7] == 0) {
      iVar7 = iVar7 + 1;
      plVar2[7] = *plVar8;
      plVar8 = plVar8 + 2;
      goto LAB_003ec5c4;
    }
    break;
  case 3:
    if (plVar2[8] == 0) {
      iVar1 = iVar1 + 1;
      plVar2[8] = *plVar8;
      plVar8 = plVar8 + 2;
      goto LAB_003ec5c4;
    }
    break;
  case 4:
    if (plVar2[9] == 0) {
      iVar1 = iVar1 + 1;
      plVar2[9] = *plVar8;
      plVar8 = plVar8 + 2;
      goto LAB_003ec5c4;
    }
    break;
  case 5:
    if (plVar2[10] == 0) {
      iVar1 = iVar1 + 1;
      plVar2[10] = *plVar8;
      plVar8 = plVar8 + 2;
      goto LAB_003ec5c4;
    }
    break;
  case 6:
    if (plVar2[0xb] == 0) {
      plVar2[0xb] = *plVar8;
      plVar8 = plVar8 + 2;
      goto LAB_003ec5c4;
    }
    break;
  case 7:
    if (plVar2[0xc] == 0) {
      plVar2[0xc] = *plVar8;
      plVar8 = plVar8 + 2;
      goto LAB_003ec5c4;
    }
    break;
  case 8:
    if (plVar2[0xd] == 0) {
      uVar6 = uVar6 + 1;
      plVar2[0xd] = *plVar8;
      plVar8 = plVar8 + 2;
      goto LAB_003ec5c4;
    }
    break;
  case 9:
    if (plVar2[0xe] == 0) {
      uVar5 = uVar5 + 1;
      plVar2[0xe] = *plVar8;
      plVar8 = plVar8 + 2;
      goto LAB_003ec5c4;
    }
    break;
  case 10:
    if (plVar2[0xf] == 0) {
      uVar5 = uVar5 + 1;
      plVar2[0xf] = *plVar8;
      plVar8 = plVar8 + 2;
      goto LAB_003ec5c4;
    }
    break;
  case 0xb:
    if (plVar2[0x10] == 0) {
      plVar2[0x10] = *plVar8;
      plVar8 = plVar8 + 2;
      goto LAB_003ec5c4;
    }
    break;
  case 0xc:
    if (plVar2[0x11] == 0) {
      plVar2[0x11] = *plVar8;
      plVar8 = plVar8 + 2;
      goto LAB_003ec5c4;
    }
    break;
  case 0xd:
    if (plVar2[0x12] == 0) {
      plVar2[0x12] = *plVar8;
      plVar8 = plVar8 + 2;
      goto LAB_003ec5c4;
    }
    break;
  case 0xe:
    if (plVar2[0x13] == 0) {
      plVar2[0x13] = *plVar8;
      plVar8 = plVar8 + 2;
      goto LAB_003ec5c4;
    }
    break;
  case 0xf:
    if (plVar2[0x14] == 0) {
      iVar7 = iVar7 + 1;
      plVar2[0x14] = *plVar8;
      plVar8 = plVar8 + 2;
      goto LAB_003ec5c4;
    }
    break;
  case 0x10:
    if (plVar2[0x15] == 0) {
      plVar2[0x15] = *plVar8;
      plVar8 = plVar8 + 2;
      goto LAB_003ec5c4;
    }
    break;
  case 0x11:
    if (plVar2[0x16] == 0) {
      plVar2[0x16] = *plVar8;
      plVar8 = plVar8 + 2;
      goto LAB_003ec5c4;
    }
    break;
  case 0x12:
    if (plVar2[0x17] != 0) break;
    plVar2[0x17] = *plVar8;
    plVar8 = plVar8 + 2;
    goto LAB_003ec5c4;
  case 0x13:
    if (plVar2[0x18] == 0) {
      plVar2[0x18] = *plVar8;
    }
  }
  plVar8 = plVar8 + 2;
  goto LAB_003ec5c4;
switchD_003ec5dc_caseD_0:
  if ((((iVar1 == 3) && (iVar7 == 3)) && (uVar6 < 2)) && ((uVar5 & 0xfffffffd) == 0)) {
    if ((param_3 == 0) || (iVar1 = FUN_003d2754(param_3), iVar1 != 0)) {
      *plVar2 = param_3;
      return plVar2;
    }
    lVar9 = plVar2[4];
    iVar1 = (int)lVar9 + -1;
    *(int *)(plVar2 + 4) = iVar1;
    if (iVar1 == 0 || (int)lVar9 < 1) {
      FUN_003c86b4(plVar2[2],"crypto/evp/evp_rand.c",0x49);
      FUN_003d27b0(*plVar2);
      FUN_003c86b4(plVar2,"crypto/evp/evp_rand.c",0x4c);
    }
    FUN_00379868();
    FUN_0037995c("crypto/evp/evp_rand.c",0x115,"evp_rand_from_algorithm");
    uVar4 = 0xc0103;
  }
  else {
    lVar9 = plVar2[4];
    iVar1 = (int)lVar9 + -1;
    *(int *)(plVar2 + 4) = iVar1;
    if (iVar1 == 0 || (int)lVar9 < 1) {
      FUN_003c86b4(lVar3,"crypto/evp/evp_rand.c",0x49);
      FUN_003d27b0(*plVar2);
      FUN_003c86b4(plVar2,"crypto/evp/evp_rand.c",0x4c);
    }
    FUN_00379868();
    FUN_0037995c("crypto/evp/evp_rand.c",0x10f,"evp_rand_from_algorithm");
    uVar4 = 0xc1;
  }
  FUN_00379a5c(6,uVar4,0);
  return (long *)0x0;
}


// ===== 003ec940  FUN_003ec940 =====

undefined8 FUN_003ec940(long param_1)

{
  if (param_1 != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  }
  return 1;
}


// ===== 003ec958  FUN_003ec958 =====

void FUN_003ec958(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (undefined8 *)0x0) &&
     (iVar1 = *(int *)(param_1 + 4), iVar2 = iVar1 + -1, *(int *)(param_1 + 4) = iVar2,
     iVar2 == 0 || iVar1 < 1)) {
    FUN_003c86b4(param_1[2],"crypto/evp/evp_rand.c",0x49);
    FUN_003d27b0(*param_1);
    FUN_003c86b4(param_1,"crypto/evp/evp_rand.c",0x4c);
    return;
  }
  return;
}


// ===== 003ec9bc  FUN_003ec9bc =====

undefined8 FUN_003ec9bc(long param_1)

{
  if (param_1 != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  }
  return 1;
}


// ===== 003ec9d4  FUN_003ec9d4 =====

void FUN_003ec9d4(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (undefined8 *)0x0) &&
     (iVar1 = *(int *)(param_1 + 4), iVar2 = iVar1 + -1, *(int *)(param_1 + 4) = iVar2,
     iVar2 == 0 || iVar1 < 1)) {
    FUN_003c86b4(param_1[2],"crypto/evp/evp_rand.c",0x49);
    FUN_003d27b0(*param_1);
    FUN_003c86b4(param_1,"crypto/evp/evp_rand.c",0x4c);
    return;
  }
  return;
}


// ===== 003eca38  FUN_003eca38 =====

undefined4 FUN_003eca38(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


// ===== 003eca40  FUN_003eca40 =====

undefined8 FUN_003eca40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


// ===== 003eca48  FUN_003eca48 =====

undefined8 FUN_003eca48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


// ===== 003eca50  FUN_003eca50 =====

undefined8 * FUN_003eca50(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    iVar1 = FUN_00383528(*param_1,*(undefined4 *)(param_1 + 1),0,param_2);
    param_1 = (undefined8 *)(ulong)(iVar1 != 0);
  }
  return param_1;
}


// ===== 003eca84  FUN_003eca84 =====

undefined8 FUN_003eca84(undefined8 *param_1)

{
  return *param_1;
}


// ===== 003eca8c  FUN_003eca8c =====

undefined8 FUN_003eca8c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(code **)(param_1 + 0x98) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003eca98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x98))(param_2);
    return uVar1;
  }
  return 1;
}


// ===== 003ecaa4  FUN_003ecaa4 =====

undefined8 FUN_003ecaa4(long param_1)

{
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  return 1;
}


// ===== 003ecabc  FUN_003ecabc =====

long * FUN_003ecabc(undefined8 *param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/evp/evp_rand.c",0x15d,"EVP_RAND_CTX_new");
    FUN_00379a5c(6,0xda,0);
    return (long *)0x0;
  }
  plVar2 = (long *)FUN_003c8474(0x28,"crypto/evp/evp_rand.c",0x161);
  if (plVar2 != (long *)0x0) {
    *(undefined4 *)(plVar2 + 3) = 1;
    if (param_2 == (long *)0x0) {
      lVar4 = 0;
      uVar5 = 0;
    }
    else {
      lVar4 = param_2[1];
      uVar5 = *(undefined8 *)(*param_2 + 0x28);
      *(int *)(param_2 + 3) = (int)param_2[3] + 1;
    }
    pcVar6 = (code *)param_1[6];
    uVar3 = FUN_003d3bf8(*param_1);
    lVar4 = (*pcVar6)(uVar3,lVar4,uVar5);
    plVar2[1] = lVar4;
    if (lVar4 == 0) {
      FUN_00379868();
      FUN_0037995c("crypto/evp/evp_rand.c",0x175,"EVP_RAND_CTX_new");
      FUN_00379a5c(6,0x80006,0);
      (*(code *)param_1[7])(0);
      FUN_003c86b4(plVar2,"crypto/evp/evp_rand.c",0x178);
      FUN_003ecc2c(param_2);
      return (long *)0x0;
    }
    iVar1 = *(int *)(param_1 + 4);
    *plVar2 = (long)param_1;
    plVar2[2] = (long)param_2;
    *(int *)(param_1 + 4) = iVar1 + 1;
  }
  return plVar2;
}


// ===== 003ecc2c  FUN_003ecc2c =====

void FUN_003ecc2c(long *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  
  if (param_1 != (long *)0x0) {
    do {
      lVar3 = param_1[3];
      iVar1 = (int)lVar3 + -1;
      *(int *)(param_1 + 3) = iVar1;
      if (iVar1 != 0 && 0 < (int)lVar3) {
        return;
      }
      plVar4 = (long *)param_1[2];
      (**(code **)(*param_1 + 0x38))(param_1[1]);
      puVar5 = (undefined8 *)*param_1;
      param_1[1] = 0;
      if ((puVar5 != (undefined8 *)0x0) &&
         (iVar1 = *(int *)(puVar5 + 4), iVar2 = iVar1 + -1, *(int *)(puVar5 + 4) = iVar2,
         iVar2 == 0 || iVar1 < 1)) {
        FUN_003c86b4(puVar5[2],"crypto/evp/evp_rand.c",0x49);
        FUN_003d27b0(*puVar5);
        FUN_003c86b4(puVar5,"crypto/evp/evp_rand.c",0x4c);
      }
      FUN_003c86b4(param_1,"crypto/evp/evp_rand.c",0x191);
      param_1 = plVar4;
    } while (plVar4 != (long *)0x0);
  }
  return;
}


// ===== 003ecce4  FUN_003ecce4 =====

undefined8 FUN_003ecce4(undefined8 *param_1)

{
  return *param_1;
}


// ===== 003eccec  FUN_003eccec =====

ulong FUN_003eccec(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (*(code **)(lVar2 + 0x70) != (code *)0x0) {
    uVar1 = (**(code **)(lVar2 + 0x70))(param_1[1]);
    if ((int)uVar1 == 0) {
      return uVar1;
    }
    lVar2 = *param_1;
  }
  uVar1 = (**(code **)(lVar2 + 0xa0))(param_1[1],param_2);
  if (*(code **)(*param_1 + 0x78) != (code *)0x0) {
    uVar1 = uVar1 & 0xffffffff;
    (**(code **)(*param_1 + 0x78))(param_1[1]);
  }
  return uVar1;
}


// ===== 003ecd58  FUN_003ecd58 =====

ulong FUN_003ecd58(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  
  lVar2 = *param_1;
  if (*(code **)(lVar2 + 0x70) != (code *)0x0) {
    uVar1 = (**(code **)(lVar2 + 0x70))(param_1[1]);
    if ((int)uVar1 == 0) {
      return uVar1;
    }
    lVar2 = *param_1;
  }
  if (*(code **)(lVar2 + 0xa8) == (code *)0x0) {
    uVar1 = 1;
    pcVar3 = *(code **)(lVar2 + 0x78);
  }
  else {
    uVar1 = (**(code **)(lVar2 + 0xa8))(param_1[1],param_2);
    pcVar3 = *(code **)(*param_1 + 0x78);
  }
  if (pcVar3 != (code *)0x0) {
    uVar1 = uVar1 & 0xffffffff;
    (*pcVar3)(param_1[1]);
  }
  return uVar1;
}


// ===== 003ecdd8  FUN_003ecdd8 =====

undefined8 FUN_003ecdd8(undefined8 *param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)param_1[0x10];
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    FUN_003d3bf8(*param_1);
                    /* WARNING: Could not recover jumptable at 0x003ece04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}


// ===== 003ece10  FUN_003ece10 =====

undefined8 FUN_003ece10(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (param_1[0x11] != 0) {
    uVar1 = FUN_003d3bf8(*param_1);
                    /* WARNING: Could not recover jumptable at 0x003ece48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)param_1[0x11])(0,uVar1);
    return uVar1;
  }
  return 0;
}


// ===== 003ece54  FUN_003ece54 =====

undefined8 FUN_003ece54(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (param_1[0x12] != 0) {
    uVar1 = FUN_003d3bf8(*param_1);
                    /* WARNING: Could not recover jumptable at 0x003ece8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)param_1[0x12])(0,uVar1);
    return uVar1;
  }
  return 0;
}


// ===== 003ece98  FUN_003ece98 =====

undefined8 FUN_003ece98(long *param_1)

{
  undefined8 uVar1;
  
  if (((undefined8 *)*param_1)[0x11] != 0) {
    uVar1 = FUN_003d3bf8(*(undefined8 *)*param_1);
                    /* WARNING: Could not recover jumptable at 0x003eced0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x88))(param_1[1],uVar1);
    return uVar1;
  }
  return 0;
}


// ===== 003ecedc  FUN_003ecedc =====

undefined8 FUN_003ecedc(long *param_1)

{
  undefined8 uVar1;
  
  if (((undefined8 *)*param_1)[0x12] != 0) {
    uVar1 = FUN_003d3bf8(*(undefined8 *)*param_1);
                    /* WARNING: Could not recover jumptable at 0x003ecf14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x90))(param_1[1],uVar1);
    return uVar1;
  }
  return 0;
}


// ===== 003ecf20  FUN_003ecf20 =====

void FUN_003ecf20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0038345c(param_1,5,param_2,param_3,FUN_003ec530,FUN_003ec940,FUN_003ec958);
  return;
}


// ===== 003ecf48  FUN_003ecf48 =====

undefined8 FUN_003ecf48(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_00383588(*param_1,(int)param_1[1],param_2,param_3);
    return uVar1;
  }
  return 1;
}


// ===== 003ecf6c  FUN_003ecf6c =====

ulong FUN_003ecf6c(long *param_1,ulong param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (*(code **)(lVar2 + 0x70) != (code *)0x0) {
    param_2 = param_2 & 0xffffffff;
    param_3 = param_3 & 0xffffffff;
    uVar1 = (**(code **)(lVar2 + 0x70))(param_1[1]);
    if ((int)uVar1 == 0) {
      return uVar1;
    }
    lVar2 = *param_1;
  }
  uVar1 = (**(code **)(lVar2 + 0x40))(param_1[1],param_2,param_3,param_4,param_5,param_6);
  if (*(code **)(*param_1 + 0x78) != (code *)0x0) {
    uVar1 = uVar1 & 0xffffffff;
    (**(code **)(*param_1 + 0x78))(param_1[1]);
  }
  return uVar1;
}


// ===== 003ed008  FUN_003ed008 =====

ulong FUN_003ed008(long *param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (*(code **)(lVar2 + 0x70) != (code *)0x0) {
    uVar1 = (**(code **)(lVar2 + 0x70))(param_1[1]);
    if ((int)uVar1 == 0) {
      return uVar1;
    }
    lVar2 = *param_1;
  }
  uVar1 = (**(code **)(lVar2 + 0x48))(param_1[1]);
  if (*(code **)(*param_1 + 0x78) != (code *)0x0) {
    uVar1 = uVar1 & 0xffffffff;
    (**(code **)(*param_1 + 0x78))(param_1[1]);
  }
  return uVar1;
}


// ===== 003ed06c  FUN_003ed06c =====

ulong FUN_003ed06c(long *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5,
                  undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  
  if (*(code **)(*param_1 + 0x70) != (code *)0x0) {
    param_5 = param_5 & 0xffffffff;
    param_4 = param_4 & 0xffffffff;
    uVar1 = (**(code **)(*param_1 + 0x70))(param_1[1]);
    if ((int)uVar1 == 0) {
      return uVar1;
    }
  }
  uVar1 = FUN_003ed110(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  if (*(code **)(*param_1 + 0x78) != (code *)0x0) {
    uVar1 = uVar1 & 0xffffffff;
    (**(code **)(*param_1 + 0x78))(param_1[1]);
  }
  return uVar1;
}


// ===== 003ed110  FUN_003ed110 =====

undefined8
FUN_003ed110(long *param_1,long param_2,ulong param_3,undefined4 param_4,undefined4 param_5,
            undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
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
  ulong local_48;
  
  local_48 = 0;
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
  FUN_003ccbb0(&local_b0,"max_request",&local_48);
  iVar2 = (**(code **)(*param_1 + 0xa0))(param_1[1],&local_b0);
  uVar3 = 0xd7;
  uVar4 = 0x235;
  if ((iVar2 == 0) || (local_48 == 0)) {
LAB_003ed228:
    FUN_00379868();
    FUN_0037995c("crypto/evp/evp_rand.c",uVar4,"evp_rand_generate_locked");
    FUN_00379a5c(6,uVar3,0);
    uVar3 = 0;
  }
  else {
    if (param_3 != 0) {
      uVar1 = param_3;
      if (local_48 <= param_3) {
        uVar1 = local_48;
      }
      iVar2 = (**(code **)(*param_1 + 0x50))
                        (param_1[1],param_2,uVar1,param_4,param_5,param_6,param_7);
      if (iVar2 == 0) {
LAB_003ed220:
        uVar3 = 0xd6;
        uVar4 = 0x23c;
        goto LAB_003ed228;
      }
      param_3 = param_3 - uVar1;
      if (param_3 != 0) {
        param_2 = param_2 + uVar1;
        do {
          uVar1 = param_3;
          if (local_48 <= param_3) {
            uVar1 = local_48;
          }
          iVar2 = (**(code **)(*param_1 + 0x50))(param_1[1],param_2,uVar1,param_4,0,param_6,param_7)
          ;
          if (iVar2 == 0) goto LAB_003ed220;
          param_3 = param_3 - uVar1;
          param_2 = param_2 + uVar1;
        } while (param_3 != 0);
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}


// ===== 003ed278  FUN_003ed278 =====

ulong FUN_003ed278(long *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  
  lVar2 = *param_1;
  if (*(code **)(lVar2 + 0x70) != (code *)0x0) {
    param_2 = param_2 & 0xffffffff;
    uVar1 = (**(code **)(lVar2 + 0x70))(param_1[1]);
    if ((int)uVar1 == 0) {
      return uVar1;
    }
    lVar2 = *param_1;
  }
  if (*(code **)(lVar2 + 0x58) == (code *)0x0) {
    uVar1 = 1;
    pcVar3 = *(code **)(lVar2 + 0x78);
  }
  else {
    uVar1 = (**(code **)(lVar2 + 0x58))(param_1[1],param_2,param_3,param_4,param_5,param_6);
    pcVar3 = *(code **)(*param_1 + 0x78);
  }
  if (pcVar3 != (code *)0x0) {
    uVar1 = uVar1 & 0xffffffff;
    (*pcVar3)(param_1[1]);
  }
  return uVar1;
}


// ===== 003ed328  FUN_003ed328 =====

undefined4 FUN_003ed328(long *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_74;
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
  
  if ((*(code **)(*param_1 + 0x70) != (code *)0x0) &&
     (iVar2 = (**(code **)(*param_1 + 0x70))(param_1[1]), iVar2 == 0)) {
    return 0;
  }
  local_74 = 0;
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
  FUN_003cbb64(&local_70,"strength",&local_74);
  iVar2 = (**(code **)(*param_1 + 0xa0))(param_1[1],&local_70);
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar1 = local_74;
  }
  if (*(code **)(*param_1 + 0x78) != (code *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1[1]);
  }
  return uVar1;
}


// ===== 003ed3d8  FUN_003ed3d8 =====

undefined4 FUN_003ed3d8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  code *pcVar4;
  undefined4 local_84;
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
  
  if ((*(code **)(*param_1 + 0x70) != (code *)0x0) &&
     (iVar1 = (**(code **)(*param_1 + 0x70))(param_1[1]), iVar1 == 0)) {
    return 0;
  }
  local_84 = 0;
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
  FUN_003cbb64(&local_80,"strength",&local_84);
  iVar1 = (**(code **)(*param_1 + 0xa0))(param_1[1],&local_80);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = local_84;
  }
  if (*(code **)(*param_1 + 0x60) == (code *)0x0) {
    uVar2 = 0;
    pcVar4 = *(code **)(*param_1 + 0x78);
  }
  else {
    lVar3 = (**(code **)(*param_1 + 0x60))(param_1[1],param_2,uVar2,param_3,param_3);
    if (lVar3 == 0) {
      uVar2 = FUN_003ed110(param_1,param_2,param_3,uVar2,0,0,0);
      pcVar4 = *(code **)(*param_1 + 0x78);
    }
    else {
      uVar2 = 1;
      pcVar4 = *(code **)(*param_1 + 0x78);
    }
  }
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(param_1[1]);
    return uVar2;
  }
  return uVar2;
}


// ===== 003ed524  FUN_003ed524 =====

undefined4 FUN_003ed524(long *param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined4 local_74;
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
  FUN_003cb668(&local_70,"state",&local_74);
  lVar3 = *param_1;
  if (*(code **)(lVar3 + 0x70) != (code *)0x0) {
    iVar2 = (**(code **)(lVar3 + 0x70))(param_1[1]);
    if (iVar2 == 0) {
      return 2;
    }
    lVar3 = *param_1;
  }
  iVar2 = (**(code **)(lVar3 + 0xa0))(param_1[1],&local_70);
  if (*(code **)(*param_1 + 0x78) != (code *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1[1]);
  }
  uVar1 = 2;
  if (iVar2 != 0) {
    uVar1 = local_74;
  }
  return uVar1;
}


// ===== 003ed5d4  FUN_003ed5d4 =====

ulong FUN_003ed5d4(long *param_1)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  
  lVar2 = *param_1;
  if (*(code **)(lVar2 + 0x70) != (code *)0x0) {
    uVar1 = (**(code **)(lVar2 + 0x70))(param_1[1]);
    if ((int)uVar1 == 0) {
      return uVar1;
    }
    lVar2 = *param_1;
  }
  if (*(code **)(lVar2 + 0xb0) == (code *)0x0) {
    uVar1 = 0;
    pcVar3 = *(code **)(lVar2 + 0x78);
  }
  else {
    uVar1 = (**(code **)(lVar2 + 0xb0))(param_1[1]);
    pcVar3 = *(code **)(*param_1 + 0x78);
  }
  if (pcVar3 != (code *)0x0) {
    uVar1 = uVar1 & 0xffffffff;
    (*pcVar3)(param_1[1]);
  }
  return uVar1;
}


// ===== 003ed64c  FUN_003ed64c =====

bool FUN_003ed64c(long *param_1)

{
  return *(long *)(*param_1 + 0xb8) != 0;
}


// ===== 003ed660  FUN_003ed660 =====

long FUN_003ed660(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                 undefined8 param_5,ulong param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  
  lVar2 = *param_1;
  if (*(code **)(lVar2 + 0x70) != (code *)0x0) {
    param_3 = param_3 & 0xffffffff;
    param_6 = param_6 & 0xffffffff;
    iVar1 = (**(code **)(lVar2 + 0x70))(param_1[1]);
    if (iVar1 == 0) {
      return 0;
    }
    lVar2 = *param_1;
  }
  if (*(code **)(lVar2 + 0xb8) == (code *)0x0) {
    lVar4 = 0;
    pcVar3 = *(code **)(lVar2 + 0x78);
  }
  else {
    iVar1 = (**(code **)(lVar2 + 0xb8))
                      (param_1[1],param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    lVar4 = (long)iVar1;
    pcVar3 = *(code **)(*param_1 + 0x78);
  }
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(param_1[1]);
  }
  return lVar4;
}


// ===== 003ed72c  FUN_003ed72c =====

void FUN_003ed72c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (*(code **)(lVar2 + 0x70) != (code *)0x0) {
    iVar1 = (**(code **)(lVar2 + 0x70))(param_1[1]);
    if (iVar1 == 0) {
      return;
    }
    lVar2 = *param_1;
  }
  if (*(code **)(lVar2 + 0xc0) != (code *)0x0) {
    (**(code **)(lVar2 + 0xc0))(param_1[1],param_2,param_3);
    lVar2 = *param_1;
  }
  if (*(code **)(lVar2 + 0x78) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003ed798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x78))(param_1[1]);
  return;
}


// ===== 003ed7ac  FUN_003ed7ac =====

undefined8 FUN_003ed7ac(void)

{
  long lVar1;
  
  lVar1 = FUN_0037aa50(0x12000066);
  if (lVar1 != 0) {
    return 1;
  }
  FUN_00379fc4(&DAT_0077a988);
  return 1;
}


// ===== 003ed7e8  FUN_003ed7e8 =====

void FUN_003ed7e8(void)

{
  FUN_00465e80();
  FUN_003b9b9c();
  return;
}


// ===== 003ed7fc  FUN_003ed7fc =====

void FUN_003ed7fc(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_003d51c8(&DAT_007ac310,FUN_003ed84c);
  if ((iVar1 != 0) && (DAT_007ac314 != 0)) {
    FUN_004660c8(param_1);
    return;
  }
  return;
}


// ===== 003ed84c  FUN_003ed84c =====

void FUN_003ed84c(void)

{
  int iVar1;
  
  iVar1 = FUN_00465e5c();
  DAT_007ac314 = (uint)(iVar1 != 0);
  return;
}


// ===== 003ed870  FUN_003ed870 =====

undefined8 FUN_003ed870(void)

{
  long lVar1;
  
  lVar1 = FUN_003ed900(0);
  if (lVar1 != 0) {
    FUN_003ed278(lVar1,0,0,0,"polling",8);
  }
  return 1;
}


// ===== 003ed8ac  FUN_003ed8ac =====

void FUN_003ed8ac(undefined8 param_1,int param_2)

{
  long lVar1;
  
  lVar1 = FUN_003ed900(0);
  if ((0 < param_2) && (lVar1 != 0)) {
    FUN_003ed278(lVar1,0,0,0,param_1,param_2);
    return;
  }
  return;
}


// ===== 003ed900  FUN_003ed900 =====

long FUN_003ed900(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = (undefined8 *)FUN_003b9c48(param_1,5);
  if (puVar2 == (undefined8 *)0x0) {
    return 0;
  }
  iVar1 = FUN_003d517c(*puVar2);
  if (iVar1 != 0) {
    lVar4 = puVar2[2];
    FUN_003d519c(*puVar2);
    if (lVar4 != 0) {
      return lVar4;
    }
    iVar1 = FUN_003d518c(*puVar2);
    if (iVar1 != 0) {
      lVar4 = puVar2[2];
      if (lVar4 == 0) {
        lVar4 = puVar2[1];
        if (lVar4 == 0) {
          FUN_0037f6d4();
          uVar3 = FUN_003edf70(param_1);
          puVar2[1] = uVar3;
          FUN_0037f71c();
          lVar4 = puVar2[1];
        }
        lVar4 = FUN_003ee240(param_1,lVar4,0x100,0xe10,1);
        puVar2[2] = lVar4;
        if (lVar4 == 0) {
          lVar4 = 0;
        }
        else {
          iVar1 = FUN_003ec4b4();
          if (iVar1 == 0) {
            FUN_00379868();
            FUN_0037995c("crypto/rand/rand_lib.c",0x2e6,"RAND_get0_primary");
            FUN_00379a5c(6,0xd4,0);
            FUN_003ecc2c(lVar4);
            lVar4 = 0;
            puVar2[2] = 0;
          }
        }
      }
      FUN_003d519c(*puVar2);
      return lVar4;
    }
  }
  return 0;
}


// ===== 003eda34  FUN_003eda34 =====

void FUN_003eda34(undefined8 param_1,int param_2)

{
  long lVar1;
  
  lVar1 = FUN_003ed900(0);
  if ((0 < param_2) && (lVar1 != 0)) {
    FUN_003ed278(lVar1,0,0,0,param_1,param_2);
    return;
  }
  return;
}


// ===== 003eda88  FUN_003eda88 =====

ulong FUN_003eda88(void)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = FUN_003ed900(0);
  if (uVar2 != 0) {
    iVar1 = FUN_003ed524();
    uVar2 = (ulong)(iVar1 == 1);
  }
  return uVar2;
}


// ===== 003edab0  FUN_003edab0 =====

void FUN_003edab0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  
  lVar1 = FUN_003edb0c();
  if (lVar1 != 0) {
    FUN_003ed06c(lVar1,param_2,param_3,param_4,0,0,0);
    return;
  }
  return;
}


// ===== 003edb0c  FUN_003edb0c =====

long FUN_003edb0c(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar2 = FUN_003b9c48(param_1,5);
  lVar3 = lVar2;
  if (((lVar2 != 0) && (lVar3 = FUN_003d5240(lVar2 + 0x1c), lVar3 == 0)) &&
     (lVar3 = FUN_003ed900(param_1), lVar3 != 0)) {
    uVar4 = FUN_003b933c(param_1);
    lVar5 = FUN_003d5240(lVar2 + 0x18);
    if ((lVar5 == 0) && (iVar1 = FUN_003c8118(0,uVar4,FUN_003ee548), iVar1 == 0)) {
      return 0;
    }
    lVar3 = FUN_003ee240(uVar4,lVar3,0x10000,0x1a4,0);
    FUN_003d5268(lVar2 + 0x1c,lVar3);
    return lVar3;
  }
  return lVar3;
}


// ===== 003edbd8  FUN_003edbd8 =====

undefined8 FUN_003edbd8(undefined8 param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (-1 < param_2) {
    lVar1 = FUN_003edb0c(0);
    if (lVar1 != 0) {
      uVar2 = FUN_003ed06c(lVar1,param_1,param_2,0,0,0,0);
      return uVar2;
    }
  }
  return 0;
}


// ===== 003edc30  FUN_003edc30 =====

void FUN_003edc30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  
  lVar1 = FUN_003edc8c();
  if (lVar1 != 0) {
    FUN_003ed06c(lVar1,param_2,param_3,param_4,0,0,0);
    return;
  }
  return;
}


// ===== 003edc8c  FUN_003edc8c =====

long FUN_003edc8c(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar2 = FUN_003b9c48(param_1,5);
  lVar3 = lVar2;
  if (((lVar2 != 0) && (lVar3 = FUN_003d5240(lVar2 + 0x18), lVar3 == 0)) &&
     (lVar3 = FUN_003ed900(param_1), lVar3 != 0)) {
    uVar4 = FUN_003b933c(param_1);
    lVar5 = FUN_003d5240(lVar2 + 0x1c);
    if ((lVar5 == 0) && (iVar1 = FUN_003c8118(0,uVar4,FUN_003ee548), iVar1 == 0)) {
      return 0;
    }
    lVar3 = FUN_003ee240(uVar4,lVar3,0x10000,0x1a4,0);
    FUN_003d5268(lVar2 + 0x18,lVar3);
    return lVar3;
  }
  return lVar3;
}


// ===== 003edd58  FUN_003edd58 =====

undefined8 FUN_003edd58(undefined8 param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (-1 < param_2) {
    lVar1 = FUN_003edc8c(0);
    if (lVar1 != 0) {
      uVar2 = FUN_003ed06c(lVar1,param_1,param_2,0,0,0,0);
      return uVar2;
    }
  }
  return 0;
}


// ===== 003eddb0  FUN_003eddb0 =====

long * FUN_003eddb0(void)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)FUN_003c8474(0x50,"crypto/rand/rand_lib.c",0x1c7);
  if (plVar2 == (long *)0x0) {
    return (long *)0x0;
  }
  FUN_003c575c(0x40000,0);
  lVar3 = FUN_003d5150();
  *plVar2 = lVar3;
  if ((lVar3 != 0) && (iVar1 = FUN_003d5204((long)plVar2 + 0x1c,0), iVar1 != 0)) {
    iVar1 = FUN_003d5204(plVar2 + 3,0);
    if (iVar1 != 0) {
      return plVar2;
    }
    FUN_003d5294((long)plVar2 + 0x1c);
  }
  FUN_003d51ac(*plVar2);
  FUN_003c86b4(plVar2,"crypto/rand/rand_lib.c",0x1e4);
  return (long *)0x0;
}


// ===== 003ede58  FUN_003ede58 =====

void FUN_003ede58(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_003d51ac(*param_1);
    FUN_003d5294((long)param_1 + 0x1c);
    FUN_003d5294(param_1 + 3);
    FUN_003ecc2c(param_1[2]);
    FUN_003ecc2c(param_1[1]);
    FUN_003c86b4(param_1[4],"crypto/rand/rand_lib.c",500);
    FUN_003c86b4(param_1[5],"crypto/rand/rand_lib.c",0x1f5);
    FUN_003c86b4(param_1[6],"crypto/rand/rand_lib.c",0x1f6);
    FUN_003c86b4(param_1[7],"crypto/rand/rand_lib.c",0x1f7);
    FUN_003c86b4(param_1[8],"crypto/rand/rand_lib.c",0x1f8);
    FUN_003c86b4(param_1[9],"crypto/rand/rand_lib.c",0x1f9);
    FUN_003c86b4(param_1,"crypto/rand/rand_lib.c",0x1fb);
    return;
  }
  return;
}


// ===== 003edf1c  FUN_003edf1c =====

undefined8 FUN_003edf1c(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_003b9c48(param_1,5);
  if ((puVar3 != (undefined8 *)0x0) && (iVar2 = FUN_003d517c(*puVar3), iVar2 != 0)) {
    uVar1 = puVar3[1];
    FUN_003d519c(*puVar3);
    return uVar1;
  }
  return 0;
}


// ===== 003edf70  FUN_003edf70 =====

long FUN_003edf70(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar2 = FUN_003b9c48(param_1,5);
  if (lVar2 == 0) {
    return 0;
  }
  pcVar5 = *(char **)(lVar2 + 0x40);
  pcVar3 = *(char **)(lVar2 + 0x48);
  if (pcVar5 == (char *)0x0) {
    if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
      lVar2 = FUN_003ead78(param_1,pcVar3,1);
      if (lVar2 == 0) {
        FUN_00379868();
        FUN_0037995c("crypto/rand/rand_lib.c",0x22f,"rand_new_seed");
        uVar9 = 0x89;
        goto LAB_003ee208;
      }
      uVar7 = 0xc0103;
      lVar4 = FUN_003ead78(param_1,"-fips",1);
      if (lVar4 == 0) {
        FUN_003eb16c(lVar2);
        FUN_00379868();
        uVar9 = 0x235;
      }
      else {
        lVar8 = FUN_003eb17c(lVar4,lVar2);
        FUN_003eb16c(lVar2);
        FUN_003eb16c(lVar4);
        if (lVar8 != 0) {
          lVar2 = FUN_003eb3c0(param_1,lVar8,0,0);
          if (lVar2 == 0) {
            pcVar3 = (char *)0x0;
            lVar2 = 0;
            uVar9 = 0x242;
            goto LAB_003ee128;
          }
          pcVar3 = (char *)FUN_003c83a4(lVar2,"crypto/rand/rand_lib.c",0x245);
          if (pcVar3 == (char *)0x0) {
            lVar2 = 0;
            uVar7 = 0xc0100;
            uVar9 = 0x247;
            goto LAB_003ee128;
          }
          lVar2 = FUN_003eb3c0(param_1,lVar8,pcVar3,lVar2);
          if (lVar2 == 0) {
            lVar2 = 0;
            uVar9 = 0x24c;
            goto LAB_003ee128;
          }
          FUN_003eb16c(lVar8);
          pcVar5 = "SEED-SRC";
          pcVar6 = pcVar3;
          goto LAB_003ee084;
        }
        FUN_00379868();
        uVar9 = 0x23c;
      }
      FUN_0037995c("crypto/rand/rand_lib.c",uVar9,"rand_new_seed");
      uVar9 = 0xc0103;
LAB_003ee208:
      FUN_00379a5c(0x24,uVar9,0);
      return 0;
    }
    pcVar6 = (char *)0x0;
    pcVar3 = "-fips";
    pcVar5 = "SEED-SRC";
  }
  else {
    pcVar6 = (char *)0x0;
  }
LAB_003ee084:
  lVar4 = FUN_003ec508(param_1,pcVar5,pcVar3);
  pcVar3 = pcVar6;
  if (lVar4 == 0) {
    lVar2 = 0;
    lVar8 = 0;
    uVar7 = 0x90;
    uVar9 = 0x259;
  }
  else {
    lVar2 = FUN_003ecabc(lVar4,0);
    FUN_003ec9d4(lVar4);
    if (lVar2 == 0) {
      lVar8 = 0;
      uVar7 = 0x8f;
      uVar9 = 0x25f;
    }
    else {
      iVar1 = FUN_003ecf6c(lVar2,0,0,0,0,0);
      if (iVar1 != 0) {
        FUN_003c86b4(pcVar6,"crypto/rand/rand_lib.c",0x266);
        return lVar2;
      }
      lVar8 = 0;
      uVar7 = 0x6c;
      uVar9 = 0x263;
    }
  }
LAB_003ee128:
  FUN_00379868();
  FUN_0037995c("crypto/rand/rand_lib.c",uVar9,"rand_new_seed");
  FUN_00379a5c(0x24,uVar7,0);
  FUN_003ecc2c(lVar2);
  FUN_003eb16c(lVar8);
  FUN_003c86b4(pcVar3,"crypto/rand/rand_lib.c",0x26b);
  return 0;
}


// ===== 003ee240  FUN_003ee240 =====

long FUN_003ee240(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 auStack_198 [5];
  undefined8 local_170 [35];
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_44;
  
  local_54 = param_5;
  local_50 = param_4;
  local_44 = param_3;
  lVar3 = FUN_003b9c48(param_1,5);
  if (lVar3 != 0) {
    pcVar1 = "CTR-DRBG";
    if (*(char **)(lVar3 + 0x20) != (char *)0x0) {
      pcVar1 = *(char **)(lVar3 + 0x20);
    }
    lVar4 = FUN_003ec508(param_1,pcVar1,*(undefined8 *)(lVar3 + 0x38));
    if (lVar4 == 0) {
      FUN_00379868();
      FUN_0037995c("crypto/rand/rand_lib.c",0x28f,"rand_new_drbg");
      FUN_00379a5c(0x24,0x90,0);
    }
    else {
      lVar5 = FUN_003ecabc(lVar4,param_2);
      FUN_003ec9d4(lVar4);
      if (lVar5 == 0) {
        FUN_00379868();
        FUN_0037995c("crypto/rand/rand_lib.c",0x295,"rand_new_drbg");
        FUN_00379a5c(0x24,0x8f,0);
        return 0;
      }
      uVar6 = FUN_003ecedc(lVar5);
      lVar4 = FUN_003cb19c(uVar6,"cipher");
      puVar8 = auStack_198;
      if (lVar4 != 0) {
        puVar8 = local_170;
        pcVar1 = "AES-256-CTR";
        if (*(char **)(lVar3 + 0x28) != (char *)0x0) {
          pcVar1 = *(char **)(lVar3 + 0x28);
        }
        FUN_003cd8cc(auStack_198,"cipher",pcVar1,0);
      }
      puVar7 = puVar8;
      if ((*(long *)(lVar3 + 0x30) != 0) && (lVar4 = FUN_003cb19c(uVar6,"digest"), lVar4 != 0)) {
        puVar7 = puVar8 + 5;
        FUN_003cd8cc(&local_1c0,"digest",*(undefined8 *)(lVar3 + 0x30),0);
        puVar8[4] = local_1a0;
        puVar8[1] = uStack_1b8;
        *puVar8 = local_1c0;
        puVar8[3] = uStack_1a8;
        puVar8[2] = uStack_1b0;
      }
      puVar8 = puVar7;
      if (*(long *)(lVar3 + 0x38) != 0) {
        puVar8 = puVar7 + 5;
        FUN_003cd8cc(&local_1c0,"properties",*(long *)(lVar3 + 0x38),0);
        puVar7[4] = local_1a0;
        puVar7[1] = uStack_1b8;
        *puVar7 = local_1c0;
        puVar7[3] = uStack_1a8;
        puVar7[2] = uStack_1b0;
      }
      lVar3 = FUN_003cb19c(uVar6,&DAT_001f1681);
      puVar7 = puVar8;
      if (lVar3 != 0) {
        puVar7 = puVar8 + 5;
        FUN_003cd8cc(&local_1c0,&DAT_001f1681,&DAT_001e0e65,0);
        puVar8[4] = local_1a0;
        puVar8[1] = uStack_1b8;
        *puVar8 = local_1c0;
        puVar8[3] = uStack_1a8;
        puVar8[2] = uStack_1b0;
      }
      lVar3 = FUN_003cb19c(uVar6,"use_derivation_function");
      puVar8 = puVar7;
      if (lVar3 != 0) {
        puVar8 = puVar7 + 5;
        FUN_003cb668(&local_1c0,"use_derivation_function",&local_54);
        puVar7[4] = local_1a0;
        puVar7[1] = uStack_1b8;
        *puVar7 = local_1c0;
        puVar7[3] = uStack_1a8;
        puVar7[2] = uStack_1b0;
      }
      FUN_003cbb64(&local_1c0,"reseed_requests",&local_44);
      puVar8[4] = local_1a0;
      puVar8[1] = uStack_1b8;
      *puVar8 = local_1c0;
      puVar8[3] = uStack_1a8;
      puVar8[2] = uStack_1b0;
      FUN_003ccbd8(&local_1c0,"reseed_time_interval",&local_50);
      puVar8[9] = local_1a0;
      puVar8[6] = uStack_1b8;
      puVar8[5] = local_1c0;
      puVar8[8] = uStack_1a8;
      puVar8[7] = uStack_1b0;
      FUN_003cdfcc(&local_1c0);
      puVar8[0xb] = uStack_1b8;
      puVar8[10] = local_1c0;
      puVar8[0xd] = uStack_1a8;
      puVar8[0xc] = uStack_1b0;
      puVar8[0xe] = local_1a0;
      iVar2 = FUN_003ecf6c(lVar5,0,0,0,0,auStack_198);
      if (iVar2 != 0) {
        return lVar5;
      }
      FUN_00379868();
      FUN_0037995c("crypto/rand/rand_lib.c",0x2b0,"rand_new_drbg");
      FUN_00379a5c(0x24,0x6c,0);
      FUN_003ecc2c(lVar5);
    }
  }
  return 0;
}


// ===== 003ee548  FUN_003ee548 =====

void FUN_003ee548(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_003b9c48(param_1,5);
  if (lVar1 != 0) {
    uVar2 = FUN_003d5240(lVar1 + 0x18);
    FUN_003d5268(lVar1 + 0x18,0);
    FUN_003ecc2c(uVar2);
    uVar2 = FUN_003d5240(lVar1 + 0x1c);
    FUN_003d5268(lVar1 + 0x1c,0);
    FUN_003ecc2c(uVar2);
    return;
  }
  return;
}


// ===== 003ee5b8  FUN_003ee5b8 =====

ulong FUN_003ee5b8(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_003b9c48(param_1,5);
  if (uVar1 != 0) {
    uVar2 = FUN_003d5240(uVar1 + 0x18);
    uVar1 = FUN_003d5268(uVar1 + 0x18,param_2);
    if (0 < (int)uVar1) {
      uVar1 = uVar1 & 0xffffffff;
      FUN_003ecc2c(uVar2);
    }
  }
  return uVar1;
}


// ===== 003ee61c  FUN_003ee61c =====

ulong FUN_003ee61c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_003b9c48(param_1,5);
  if (uVar1 != 0) {
    uVar2 = FUN_003d5240(uVar1 + 0x1c);
    uVar1 = FUN_003d5268(uVar1 + 0x1c,param_2);
    if (0 < (int)uVar1) {
      uVar1 = uVar1 & 0xffffffff;
      FUN_003ecc2c(uVar2);
    }
  }
  return uVar1;
}


// ===== 003ee680  FUN_003ee680 =====

void FUN_003ee680(void)

{
  FUN_003bb08c("random",FUN_003ee69c,FUN_003ee9b4);
  return;
}


// ===== 003ee69c  FUN_003ee69c =====

undefined4 FUN_003ee69c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  
  uVar3 = FUN_003bbf70(param_2);
  lVar4 = FUN_003b9c48(uVar3,5);
  uVar3 = FUN_003bb260(param_1);
  lVar5 = FUN_003bb7d0(param_2,uVar3);
  if (lVar5 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/rand/rand_lib.c",0x378,"random_conf_init");
    FUN_00379a5c(0xf,0x77,0);
  }
  else if (lVar4 != 0) {
    iVar1 = FUN_0040caf8();
    if (iVar1 < 1) {
      return 1;
    }
    iVar1 = 0;
    uVar7 = 1;
    do {
      lVar6 = FUN_0040cb0c(lVar5,iVar1);
      iVar2 = FUN_003cab04(*(undefined8 *)(lVar6 + 8),"random");
      if (iVar2 == 0) {
        if (*(long *)(lVar6 + 0x10) == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = FUN_003ca2f4(*(long *)(lVar6 + 0x10),"crypto/rand/rand_lib.c",0x35f);
          if (lVar6 == 0) {
            return 0;
          }
        }
        FUN_003c86b4(*(undefined8 *)(lVar4 + 0x20),"crypto/rand/rand_lib.c",0x363);
        *(long *)(lVar4 + 0x20) = lVar6;
      }
      else {
        iVar2 = FUN_003cab04(*(undefined8 *)(lVar6 + 8),"cipher");
        if (iVar2 == 0) {
          if (*(long *)(lVar6 + 0x10) == 0) {
            lVar6 = 0;
          }
          else {
            lVar6 = FUN_003ca2f4(*(long *)(lVar6 + 0x10),"crypto/rand/rand_lib.c",0x35f);
            if (lVar6 == 0) {
              return 0;
            }
          }
          FUN_003c86b4(*(undefined8 *)(lVar4 + 0x28),"crypto/rand/rand_lib.c",0x363);
          *(long *)(lVar4 + 0x28) = lVar6;
        }
        else {
          iVar2 = FUN_003cab04(*(undefined8 *)(lVar6 + 8),"digest");
          if (iVar2 == 0) {
            if (*(long *)(lVar6 + 0x10) == 0) {
              lVar6 = 0;
            }
            else {
              lVar6 = FUN_003ca2f4(*(long *)(lVar6 + 0x10),"crypto/rand/rand_lib.c",0x35f);
              if (lVar6 == 0) {
                return 0;
              }
            }
            FUN_003c86b4(*(undefined8 *)(lVar4 + 0x30),"crypto/rand/rand_lib.c",0x363);
            *(long *)(lVar4 + 0x30) = lVar6;
          }
          else {
            iVar2 = FUN_003cab04(*(undefined8 *)(lVar6 + 8),"properties");
            if (iVar2 == 0) {
              if (*(long *)(lVar6 + 0x10) == 0) {
                lVar6 = 0;
              }
              else {
                lVar6 = FUN_003ca2f4(*(long *)(lVar6 + 0x10),"crypto/rand/rand_lib.c",0x35f);
                if (lVar6 == 0) {
                  return 0;
                }
              }
              FUN_003c86b4(*(undefined8 *)(lVar4 + 0x38),"crypto/rand/rand_lib.c",0x363);
              *(long *)(lVar4 + 0x38) = lVar6;
            }
            else {
              iVar2 = FUN_003cab04(*(undefined8 *)(lVar6 + 8),&DAT_001d805b);
              if (iVar2 == 0) {
                if (*(long *)(lVar6 + 0x10) == 0) {
                  lVar6 = 0;
                }
                else {
                  lVar6 = FUN_003ca2f4(*(long *)(lVar6 + 0x10),"crypto/rand/rand_lib.c",0x35f);
                  if (lVar6 == 0) {
                    return 0;
                  }
                }
                FUN_003c86b4(*(undefined8 *)(lVar4 + 0x40),"crypto/rand/rand_lib.c",0x363);
                *(long *)(lVar4 + 0x40) = lVar6;
              }
              else {
                iVar2 = FUN_003cab04(*(undefined8 *)(lVar6 + 8),"seed_properties");
                if (iVar2 == 0) {
                  if (*(long *)(lVar6 + 0x10) == 0) {
                    lVar6 = 0;
                  }
                  else {
                    lVar6 = FUN_003ca2f4(*(long *)(lVar6 + 0x10),"crypto/rand/rand_lib.c",0x35f);
                    if (lVar6 == 0) {
                      return 0;
                    }
                  }
                  FUN_003c86b4(*(undefined8 *)(lVar4 + 0x48),"crypto/rand/rand_lib.c",0x363);
                  *(long *)(lVar4 + 0x48) = lVar6;
                }
                else {
                  FUN_00379868();
                  FUN_0037995c("crypto/rand/rand_lib.c",0x394,"random_conf_init");
                  FUN_00379a5c(0xf,0x78,"name=%s, value=%s",*(undefined8 *)(lVar6 + 8),
                               *(undefined8 *)(lVar6 + 0x10));
                  uVar7 = 0;
                }
              }
            }
          }
        }
      }
      iVar1 = iVar1 + 1;
      iVar2 = FUN_0040caf8(lVar5);
    } while (iVar1 < iVar2);
    return uVar7;
  }
  return 0;
}


// ===== 003ee9b4  FUN_003ee9b4 =====

void FUN_003ee9b4(void)

{
  return;
}


// ===== 003ee9b8  FUN_003ee9b8 =====

long FUN_003ee9b8(undefined8 param_1,long param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_003b9c48(param_1,5);
  lVar2 = lVar1;
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x10) == 0) {
      lVar2 = param_2;
      if ((param_2 == 0) ||
         (lVar2 = FUN_003ca2f4(param_2,"crypto/rand/rand_lib.c",0x35f), lVar2 != 0)) {
        FUN_003c86b4(*(undefined8 *)(lVar1 + 0x20),"crypto/rand/rand_lib.c",0x363);
        *(long *)(lVar1 + 0x20) = lVar2;
        lVar2 = param_3;
        if ((param_3 == 0) ||
           (lVar2 = FUN_003ca2f4(param_3,"crypto/rand/rand_lib.c",0x35f), lVar2 != 0)) {
          FUN_003c86b4(*(undefined8 *)(lVar1 + 0x38),"crypto/rand/rand_lib.c",0x363);
          *(long *)(lVar1 + 0x38) = lVar2;
          lVar2 = param_4;
          if ((param_4 == 0) ||
             (lVar2 = FUN_003ca2f4(param_4,"crypto/rand/rand_lib.c",0x35f), lVar2 != 0)) {
            FUN_003c86b4(*(undefined8 *)(lVar1 + 0x28),"crypto/rand/rand_lib.c",0x363);
            *(long *)(lVar1 + 0x28) = lVar2;
            lVar2 = param_5;
            if ((param_5 == 0) ||
               (lVar2 = FUN_003ca2f4(param_5,"crypto/rand/rand_lib.c",0x35f), lVar2 != 0)) {
              FUN_003c86b4(*(undefined8 *)(lVar1 + 0x30),"crypto/rand/rand_lib.c",0x363);
              *(long *)(lVar1 + 0x30) = lVar2;
              return 1;
            }
          }
        }
      }
    }
    else {
      FUN_00379868();
      FUN_0037995c("crypto/rand/rand_lib.c",0x3b1,"RAND_set_DRBG_type");
      FUN_00379a5c(0xf,0x67,0);
      lVar2 = 0;
    }
  }
  return lVar2;
}


// ===== 003eeb30  FUN_003eeb30 =====

long FUN_003eeb30(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_003b9c48(param_1,5);
  lVar2 = lVar1;
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 8) == 0) {
      lVar2 = param_2;
      if ((param_2 == 0) ||
         (lVar2 = FUN_003ca2f4(param_2,"crypto/rand/rand_lib.c",0x35f), lVar2 != 0)) {
        FUN_003c86b4(*(undefined8 *)(lVar1 + 0x40),"crypto/rand/rand_lib.c",0x363);
        *(long *)(lVar1 + 0x40) = lVar2;
        lVar2 = param_3;
        if ((param_3 == 0) ||
           (lVar2 = FUN_003ca2f4(param_3,"crypto/rand/rand_lib.c",0x35f), lVar2 != 0)) {
          FUN_003c86b4(*(undefined8 *)(lVar1 + 0x48),"crypto/rand/rand_lib.c",0x363);
          *(long *)(lVar1 + 0x48) = lVar2;
          return 1;
        }
      }
    }
    else {
      FUN_00379868();
      FUN_0037995c("crypto/rand/rand_lib.c",0x3c2,"RAND_set_seed_source_type");
      FUN_00379a5c(0xf,0x67,0);
      lVar2 = 0;
    }
  }
  return lVar2;
}


// ===== 003eec24  FUN_003eec24 =====

long * FUN_003eec24(int param_1,int param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)FUN_003c8474(0x40,"crypto/rand/rand_pool.c",0x19);
  if (plVar2 != (long *)0x0) {
    uVar1 = 0x30;
    if (param_2 != 0) {
      uVar1 = 0x10;
    }
    if (0x2fff < param_4) {
      param_4 = 0x3000;
    }
    if (uVar1 <= param_3) {
      uVar1 = param_3;
    }
    plVar2[3] = param_3;
    plVar2[4] = param_4;
    if (param_4 <= uVar1) {
      uVar1 = param_4;
    }
    plVar2[5] = uVar1;
    if (param_2 == 0) {
      lVar3 = FUN_003c8474(uVar1,"crypto/rand/rand_pool.c",0x29);
      *plVar2 = lVar3;
    }
    else {
      lVar3 = FUN_003c96b8(uVar1,"crypto/rand/rand_pool.c",0x27);
      *plVar2 = lVar3;
    }
    if (lVar3 == 0) {
      FUN_003c86b4(plVar2,"crypto/rand/rand_pool.c",0x33);
      return (long *)0x0;
    }
    *(int *)((long)plVar2 + 0x14) = param_2;
    plVar2[7] = (long)param_1;
  }
  return plVar2;
}


// ===== 003eed14  FUN_003eed14 =====

void FUN_003eed14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_003c8474(0x40,"crypto/rand/rand_pool.c",0x40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    *(undefined4 *)(puVar1 + 2) = 1;
    puVar1[3] = param_2;
    puVar1[4] = param_2;
    puVar1[5] = param_2;
    puVar1[6] = param_3;
  }
  return;
}


// ===== 003eed6c  FUN_003eed6c =====

void FUN_003eed6c(undefined8 *param_1)

{
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  if (*(int *)(param_1 + 2) != 0) {
    FUN_003c86b4(param_1,"crypto/rand/rand_pool.c",0x6a);
    return;
  }
  if (*(int *)((long)param_1 + 0x14) == 0) {
    FUN_003c893c(*param_1,param_1[5],"crypto/rand/rand_pool.c",0x67);
  }
  else {
    FUN_003c9d0c();
  }
  FUN_003c86b4(param_1,"crypto/rand/rand_pool.c",0x6a);
  return;
}


// ===== 003eede8  FUN_003eede8 =====

undefined8 FUN_003eede8(undefined8 *param_1)

{
  return *param_1;
}


// ===== 003eedf0  FUN_003eedf0 =====

undefined8 FUN_003eedf0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}


// ===== 003eedf8  FUN_003eedf8 =====

undefined8 FUN_003eedf8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


// ===== 003eee00  FUN_003eee00 =====

undefined8 FUN_003eee00(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = 0;
  param_1[6] = 0;
  return uVar1;
}


// ===== 003eee14  FUN_003eee14 =====

void FUN_003eee14(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  FUN_003c89b8(param_2,param_1[1]);
  param_1[1] = 0;
  return;
}


// ===== 003eee48  FUN_003eee48 =====

ulong FUN_003eee48(long param_1)

{
  ulong uVar1;
  
  if (*(ulong *)(param_1 + 0x30) < *(ulong *)(param_1 + 0x38)) {
    return 0;
  }
  uVar1 = 0;
  if (*(ulong *)(param_1 + 0x18) <= *(ulong *)(param_1 + 8)) {
    uVar1 = *(ulong *)(param_1 + 0x30);
  }
  return uVar1;
}


// ===== 003eee70  FUN_003eee70 =====

long FUN_003eee70(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(ulong *)(param_1 + 0x30) <= *(ulong *)(param_1 + 0x38)) {
    lVar1 = *(ulong *)(param_1 + 0x38) - *(ulong *)(param_1 + 0x30);
  }
  return lVar1;
}


// ===== 003eee80  FUN_003eee80 =====

ulong FUN_003eee80(long param_1,uint param_2)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar1 = 0;
  if (*(ulong *)(param_1 + 0x30) <= *(ulong *)(param_1 + 0x38)) {
    lVar1 = *(ulong *)(param_1 + 0x38) - *(ulong *)(param_1 + 0x30);
  }
  if (param_2 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/rand/rand_pool.c",0xf4,"ossl_rand_pool_bytes_needed");
    FUN_00379a5c(0x24,0x69,0);
    return 0;
  }
  uVar5 = *(ulong *)(param_1 + 8);
  uVar6 = lVar1 * (ulong)param_2 + 7 >> 3;
  if (*(long *)(param_1 + 0x20) - uVar5 < uVar6) {
    FUN_00379868();
    FUN_0037995c("crypto/rand/rand_pool.c",0xfc,"ossl_rand_pool_bytes_needed");
    FUN_00379a5c(0x24,0x7d,
                 "entropy_factor=%u, entropy_needed=%zu, bytes_needed=%zu,pool->max_len=%zu, pool->len=%zu"
                 ,param_2,lVar1,uVar6,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 8));
    uVar4 = 0;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 0x18) - uVar5;
    uVar4 = uVar6;
    if (uVar6 <= uVar2) {
      uVar4 = uVar2;
    }
    if (*(ulong *)(param_1 + 0x18) <= uVar5) {
      uVar4 = uVar6;
    }
    iVar3 = FUN_003eefb4(param_1,uVar4);
    if (iVar3 == 0) {
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      return 0;
    }
  }
  return uVar4;
}


// ===== 003eefb4  FUN_003eefb4 =====

undefined8 FUN_003eefb4(undefined8 *param_1,ulong param_2)

{
  void *__src;
  bool bVar1;
  void *__dest;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = param_1[5];
  lVar2 = param_1[1];
  if (param_2 <= uVar4 - lVar2) {
    return 1;
  }
  if ((*(int *)(param_1 + 2) == 0) && (uVar3 = param_1[4], param_2 <= uVar3 - lVar2)) {
    do {
      bVar1 = uVar3 >> 1 <= uVar4;
      uVar4 = uVar4 << 1;
      if (bVar1) {
        uVar4 = uVar3;
      }
    } while (uVar4 - lVar2 < param_2);
    if (*(int *)((long)param_1 + 0x14) == 0) {
      __dest = (void *)FUN_003c8474(uVar4,"crypto/rand/rand_pool.c",0xda);
    }
    else {
      __dest = (void *)FUN_003c96b8(uVar4,"crypto/rand/rand_pool.c",0xd8);
    }
    if (__dest != (void *)0x0) {
      __src = (void *)*param_1;
      memcpy(__dest,__src,param_1[1]);
      if (*(int *)((long)param_1 + 0x14) == 0) {
        FUN_003c893c(__src,param_1[5],"crypto/rand/rand_pool.c",0xe1);
      }
      else {
        FUN_003c9d0c();
      }
      *param_1 = __dest;
      param_1[5] = uVar4;
      return 1;
    }
    return 0;
  }
  FUN_00379868();
  FUN_0037995c("crypto/rand/rand_pool.c",0xcf,"rand_pool_grow");
  FUN_00379a5c(0x24,0xc0103,0);
  return 0;
}


// ===== 003ef114  FUN_003ef114 =====

long FUN_003ef114(long param_1)

{
  return *(long *)(param_1 + 0x20) - *(long *)(param_1 + 8);
}


// ===== 003ef124  FUN_003ef124 =====

undefined8 FUN_003ef124(long *param_1,void *param_2,ulong param_3,long param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar2 = param_1[1];
  if (param_1[4] - uVar2 < param_3) {
    FUN_00379868();
    FUN_0037995c("crypto/rand/rand_pool.c",0x131,"ossl_rand_pool_add");
    uVar1 = 0x6a;
  }
  else {
    if (*param_1 == 0) {
      FUN_00379868();
      uVar1 = 0x136;
    }
    else {
      if (param_3 == 0) {
        return 1;
      }
      if (((ulong)param_1[5] <= uVar2) || ((void *)(*param_1 + uVar2) != param_2)) {
        uVar1 = FUN_003eefb4(param_1,param_3);
        if ((int)uVar1 == 0) {
          return uVar1;
        }
        memcpy((void *)(*param_1 + param_1[1]),param_2,param_3);
        param_1[1] = param_1[1] + param_3;
        param_1[6] = param_1[6] + param_4;
        return 1;
      }
      FUN_00379868();
      uVar1 = 0x144;
    }
    FUN_0037995c("crypto/rand/rand_pool.c",uVar1,"ossl_rand_pool_add");
    uVar1 = 0xc0103;
  }
  FUN_00379a5c(0x24,uVar1,0);
  return 0;
}


// ===== 003ef254  FUN_003ef254 =====

long FUN_003ef254(long *param_1,ulong param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((ulong)(param_1[4] - param_1[1]) < param_2) {
    FUN_00379868();
    FUN_0037995c("crypto/rand/rand_pool.c",0x16a,"ossl_rand_pool_add_begin");
    FUN_00379a5c(0x24,0x7d,0);
    return 0;
  }
  if (*param_1 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/rand/rand_pool.c",0x16f,"ossl_rand_pool_add_begin");
    FUN_00379a5c(0x24,0xc0103,0);
  }
  else {
    iVar1 = FUN_003eefb4();
    if (iVar1 != 0) {
      return *param_1 + param_1[1];
    }
  }
  return 0;
}


// ===== 003ef324  FUN_003ef324 =====

undefined8 FUN_003ef324(long param_1,ulong param_2,long param_3)

{
  if ((ulong)(*(long *)(param_1 + 0x28) - *(long *)(param_1 + 8)) < param_2) {
    FUN_00379868();
    FUN_0037995c("crypto/rand/rand_pool.c",0x18e,"ossl_rand_pool_add_end");
    FUN_00379a5c(0x24,0x7d,0);
    return 0;
  }
  if (param_2 != 0) {
    *(ulong *)(param_1 + 8) = *(long *)(param_1 + 8) + param_2;
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + param_3;
  }
  return 1;
}


// ===== 003ef398  FUN_003ef398 =====

long FUN_003ef398(long param_1,long param_2,int param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = FUN_003f2ad4();
  if (lVar2 != 0) {
    if (param_3 != 0x14) {
      lVar3 = FUN_0038a388();
      *(long *)(lVar2 + 0x10) = lVar3;
      if ((lVar3 == 0) || (iVar1 = FUN_0038de18(lVar3,(long)param_3), iVar1 == 0))
      goto LAB_003ef42c;
    }
    iVar1 = FUN_003a3db0(lVar2,param_1);
    if (iVar1 != 0) {
      if (param_2 != 0) {
        param_1 = param_2;
      }
      iVar1 = FUN_003a3ecc(lVar2 + 8,param_1);
      if ((iVar1 != 0) && (iVar1 = FUN_003a3db0(lVar2 + 0x20,param_1), iVar1 != 0)) {
        return lVar2;
      }
    }
  }
LAB_003ef42c:
  FUN_003f2ae0(lVar2);
  return 0;
}


// ===== 003ef44c  FUN_003ef44c =====

long FUN_003ef44c(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 extraout_x1;
  undefined8 uVar8;
  undefined8 extraout_x1_00;
  ulong uVar9;
  undefined1 auVar10 [16];
  uint local_3c;
  undefined8 local_38;
  undefined8 local_18;
  
  uVar5 = FUN_003b4314();
  iVar1 = FUN_003b2ce0(param_1,&local_18);
  if (((iVar1 < 1) || (iVar1 = FUN_003fbe40(param_1,&local_38), iVar1 < 1)) ||
     (iVar1 = FUN_003fc0e8(param_1,&local_3c), iVar1 < 1)) {
    return 0;
  }
  uVar9 = (ulong)local_3c;
  if (local_3c == 0xfffffffc) {
    local_3c = 0xfffffffd;
    uVar2 = FUN_00389a38(local_18);
    uVar9 = (ulong)local_3c;
    uVar8 = extraout_x1_00;
  }
  else if (local_3c == 0xffffffff) {
    auVar10 = FUN_00389a38(local_18);
    uVar8 = auVar10._8_8_;
    uVar9 = auVar10._0_8_ & 0xffffffff;
    uVar2 = 0xffffffff;
    local_3c = auVar10._0_4_;
  }
  else {
    uVar2 = 0xffffffff;
    uVar8 = extraout_x1;
  }
  if (local_3c + 3 < 2) {
    iVar1 = FUN_003a8edc(uVar5,uVar8,uVar9);
    iVar3 = FUN_00389a38(local_18);
    local_3c = (iVar1 - iVar3) - 2;
    uVar4 = FUN_003a60d8(uVar5);
    if ((uVar4 & 7) == 1) {
      local_3c = local_3c - 1;
    }
    uVar9 = (ulong)local_3c;
    if ((int)local_3c < 0) {
      return 0;
    }
    if (uVar2 < local_3c) {
      uVar9 = (ulong)uVar2;
      local_3c = uVar2;
    }
  }
  lVar6 = FUN_003ef398(local_18,local_38,uVar9);
  lVar7 = lVar6;
  if (lVar6 != 0) {
    uVar5 = FUN_003f2ab0();
    lVar7 = FUN_0039b120(lVar6,uVar5,0);
    FUN_003f2ae0(lVar6);
  }
  return lVar7;
}


// ===== 003ef5d4  FUN_003ef5d4 =====

undefined4 FUN_003ef5d4(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  int local_3c;
  undefined8 local_38;
  
  local_50 = 0;
  local_48 = 0;
  local_38 = param_2;
  iVar1 = FUN_003dd5b4(*param_3);
  if (iVar1 != 0x390) {
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_ameth.c",0x223,"ossl_rsa_pss_to_ctx");
    FUN_00379a5c(4,0x9b,0);
    return 0xffffffff;
  }
  uVar3 = FUN_003f3ff4(param_3);
  local_58 = 0;
  iVar1 = FUN_003f4058(uVar3,&local_50,&local_48,&local_3c,&local_58);
  if (iVar1 == 0) {
LAB_003ef6fc:
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_ameth.c",0x22a,"ossl_rsa_pss_to_ctx");
    uVar4 = 0x95;
LAB_003ef720:
    FUN_00379a5c(4,uVar4,0);
  }
  else {
    if (local_3c < 0) {
      uVar4 = 0x96;
      uVar6 = 0x250;
LAB_003ef6d0:
      FUN_00379868();
      FUN_0037995c("crypto/rsa/rsa_ameth.c",uVar6,"rsa_pss_verify_param");
      FUN_00379a5c(4,uVar4,0);
      goto LAB_003ef6fc;
    }
    if (local_58 != 1) {
      uVar4 = 0x8b;
      uVar6 = 600;
      goto LAB_003ef6d0;
    }
    if (param_4 == 0) {
      iVar1 = FUN_003b2ce0(param_2,&local_58);
      if (iVar1 < 1) goto LAB_003ef728;
      iVar1 = FUN_003899b0(local_50);
      iVar2 = FUN_003899b0(CONCAT44(uStack_54,local_58));
      if (iVar1 == iVar2) goto LAB_003ef780;
      FUN_00379868();
      FUN_0037995c("crypto/rsa/rsa_ameth.c",0x237,"ossl_rsa_pss_to_ctx");
      uVar4 = 0x9e;
      goto LAB_003ef720;
    }
    iVar1 = FUN_003a12e8(param_1,&local_38,local_50,0,param_4);
    param_2 = local_38;
    if (iVar1 != 0) {
LAB_003ef780:
      iVar1 = FUN_003fb92c(param_2,6);
      if (0 < iVar1) {
        iVar1 = FUN_003fc0a8(local_38,local_3c);
        uVar5 = 0xffffffff;
        if (0 < iVar1) {
          iVar1 = FUN_003fbd88(local_38,local_48);
          uVar5 = 1;
          if (iVar1 < 1) {
            uVar5 = 0xffffffff;
          }
        }
        goto LAB_003ef72c;
      }
    }
  }
LAB_003ef728:
  uVar5 = 0xffffffff;
LAB_003ef72c:
  FUN_003f2ae0(uVar3);
  return uVar5;
}


// ===== 003ef7ec  FUN_003ef7ec =====

/* WARNING: Removing unreachable block (ram,0x003ef828) */

undefined8 FUN_003ef7ec(void)

{
  undefined8 uVar1;
  int *in_x3;
  undefined8 uVar2;
  
  uVar1 = FUN_003f4058();
  if ((int)uVar1 != 0) {
    if ((in_x3 == (int *)0x0) || (-1 < *in_x3)) {
      uVar1 = 0x8b;
      uVar2 = 600;
    }
    else {
      uVar1 = 0x96;
      uVar2 = 0x250;
    }
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_ameth.c",uVar2,"rsa_pss_verify_param");
    FUN_00379a5c(4,uVar1,0);
    return 0;
  }
  return uVar1;
}


// ===== 003ef890  FUN_003ef890 =====

undefined8 FUN_003ef890(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_38;
  int local_2c;
  undefined1 auStack_28 [8];
  
  uVar2 = FUN_0043d100(0,auStack_28,&local_2c,&local_38,param_2);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  lVar3 = FUN_003f2b50(0,auStack_28,(long)local_2c);
  if (lVar3 == 0) {
    return 0;
  }
  iVar1 = FUN_003f412c(lVar3,local_38);
  if (iVar1 == 0) goto LAB_003ef948;
  FUN_003fb528(lVar3,0xf000);
  if (**(int **)(param_1 + 8) == 6) {
    uVar2 = 0;
LAB_003ef914:
    FUN_003fb544(lVar3,uVar2);
  }
  else if (**(int **)(param_1 + 8) == 0x390) {
    uVar2 = 0x1000;
    goto LAB_003ef914;
  }
  iVar1 = FUN_003a78e0(param_1,**(undefined4 **)(param_1 + 8),lVar3);
  if (iVar1 != 0) {
    return 1;
  }
LAB_003ef948:
  FUN_003fa6a0(lVar3);
  return 0;
}


// ===== 003ef964  FUN_003ef964 =====

undefined8 FUN_003ef964(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar4 = *(long *)(param_2 + 0x20);
  local_40 = 0;
  local_38 = 0;
  iVar1 = FUN_003fb538(lVar4,0xf000);
  if (iVar1 == 0x1000) {
    lVar4 = *(long *)(lVar4 + 0x80);
    if (lVar4 == 0) {
      uVar2 = 0xffffffff;
      iVar1 = FUN_003f2b5c(*(undefined8 *)(param_2 + 0x20),&local_38);
    }
    else {
      uVar2 = FUN_003f2ab0();
      lVar4 = FUN_0039b120(lVar4,uVar2,&local_40);
      if (lVar4 == 0) {
        return 0;
      }
      uVar2 = 0x10;
      iVar1 = FUN_003f2b5c(*(undefined8 *)(param_2 + 0x20),&local_38);
    }
  }
  else {
    uVar2 = 5;
    iVar1 = FUN_003f2b5c(*(undefined8 *)(param_2 + 0x20),&local_38);
  }
  if (0 < iVar1) {
    uVar3 = FUN_003dcce8(**(undefined4 **)(param_2 + 8));
    iVar1 = FUN_0043d0a4(param_1,uVar3,uVar2,local_40,local_38,iVar1);
    if (iVar1 != 0) {
      return 1;
    }
    FUN_003c86b4(local_38,"crypto/rsa/rsa_ameth.c",0x47);
  }
  FUN_0038eddc(local_40);
  return 0;
}


// ===== 003efa84  FUN_003efa84 =====

bool FUN_003efa84(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = FUN_003f996c(*(undefined8 *)(param_1 + 0x20));
  if (((uVar2 & 1) == 0) &&
     (uVar2 = FUN_003f996c(*(undefined8 *)(param_2 + 0x20)), (uVar2 & 1) == 0)) {
    iVar1 = FUN_00390208(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x28),
                         *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28));
    if (iVar1 != 0) {
      return false;
    }
    iVar1 = FUN_00390208(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x30),
                         *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30));
    return iVar1 == 0;
  }
  return true;
}


// ===== 003efb10  FUN_003efb10 =====

void FUN_003efb10(void)

{
  FUN_003f0434();
  return;
}


// ===== 003efb18  FUN_003efb18 =====

long FUN_003efb18(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = FUN_003f4300(param_2,0,0);
  if (lVar1 != 0) {
    FUN_003a78e0(param_1,**(undefined4 **)(param_1 + 8),lVar1);
    lVar1 = 1;
  }
  return lVar1;
}


// ===== 003efb60  FUN_003efb60 =====

undefined8 FUN_003efb60(undefined8 param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar5 = *(long *)(param_2 + 0x20);
  local_40 = 0;
  local_38 = 0;
  iVar1 = FUN_003fb538(lVar5,0xf000);
  if (iVar1 == 0x1000) {
    lVar5 = *(long *)(lVar5 + 0x80);
    if (lVar5 == 0) {
      uVar3 = 0xffffffff;
      iVar1 = FUN_003f2b44(*(undefined8 *)(param_2 + 0x20),&local_38);
    }
    else {
      uVar3 = FUN_003f2ab0();
      lVar5 = FUN_0039b120(lVar5,uVar3,&local_40);
      if (lVar5 == 0) {
        return 0;
      }
      uVar3 = 0x10;
      iVar1 = FUN_003f2b44(*(undefined8 *)(param_2 + 0x20),&local_38);
    }
  }
  else {
    uVar3 = 5;
    iVar1 = FUN_003f2b44(*(undefined8 *)(param_2 + 0x20),&local_38);
  }
  if (0 < iVar1) {
    uVar4 = FUN_003dcce8(**(undefined4 **)(param_2 + 8));
    iVar2 = FUN_003dfec4(param_1,uVar4,0,uVar3,local_40,local_38,iVar1);
    if (iVar2 != 0) {
      return 1;
    }
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_ameth.c",0xa4,"rsa_priv_encode");
    FUN_00379a5c(4,0x8000d,0);
    FUN_0038eddc(local_40);
    FUN_003c893c(local_38,iVar1,"crypto/rsa/rsa_ameth.c",0xa6);
    return 0;
  }
  FUN_00379868();
  FUN_0037995c("crypto/rsa/rsa_ameth.c",0x9d,"rsa_priv_encode");
  FUN_00379a5c(4,0x8000d,0);
  FUN_0038eddc(local_40);
  return 0;
}


// ===== 003efd04  FUN_003efd04 =====

void FUN_003efd04(void)

{
  FUN_003f0434();
  return;
}


// ===== 003efd0c  FUN_003efd0c =====

void FUN_003efd0c(long param_1)

{
  FUN_003f9914(*(undefined8 *)(param_1 + 0x20));
  return;
}


// ===== 003efd14  FUN_003efd14 =====

void FUN_003efd14(long param_1)

{
  FUN_0038f2c0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28));
  return;
}


// ===== 003efd20  FUN_003efd20 =====

void FUN_003efd20(long param_1)

{
  FUN_003fae24(*(undefined8 *)(param_1 + 0x20));
  return;
}


// ===== 003efd28  FUN_003efd28 =====

undefined8 FUN_003efd28(undefined8 param_1,undefined8 *param_2,long param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_003dd5b4(*param_2);
  if (iVar1 == 0x390) {
    uVar2 = FUN_003f3ff4(param_2);
    iVar1 = FUN_003f07e4(param_1,0,uVar2,param_4);
    FUN_003f2ae0(uVar2);
    if (iVar1 != 0) {
LAB_003efdc0:
      if (param_3 != 0) {
        uVar2 = FUN_004138f4(param_1,param_3,param_4);
        return uVar2;
      }
      return 1;
    }
  }
  else {
    iVar1 = FUN_0037e608(param_1,&DAT_001e2980);
    if (0 < iVar1) goto LAB_003efdc0;
  }
  return 0;
}


// ===== 003efdfc  FUN_003efdfc =====

void FUN_003efdfc(long param_1)

{
  FUN_003fa6a0(*(undefined8 *)(param_1 + 0x20));
  return;
}


// ===== 003efe04  FUN_003efe04 =====

undefined8 FUN_003efe04(long param_1,int param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int local_3c;
  undefined1 auStack_38 [8];
  undefined8 local_30;
  int local_24;
  
  if (param_2 != 3) {
    return 0xfffffffe;
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x80);
  if (lVar3 != 0) {
    local_24 = 0;
    iVar1 = FUN_003f4058(lVar3,&local_30,auStack_38,&local_3c,&local_24);
    if (iVar1 != 0) {
      if (local_3c < 0) {
        uVar4 = 0x96;
        uVar5 = 0x250;
      }
      else {
        if (local_24 == 1) {
          uVar2 = FUN_003899b0(local_30);
          *param_4 = uVar2;
          return 2;
        }
        uVar4 = 0x8b;
        uVar5 = 600;
      }
      FUN_00379868();
      FUN_0037995c("crypto/rsa/rsa_ameth.c",uVar5,"rsa_pss_verify_param");
      FUN_00379a5c(4,uVar4,0);
    }
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_ameth.c",0x1af,"rsa_pkey_ctrl");
    FUN_00379a5c(4,0xc0103,0);
    return 0;
  }
  *param_4 = 0x2a0;
  return 1;
}


// ===== 003eff28  FUN_003eff28 =====

long FUN_003eff28(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  lVar1 = FUN_003f2b38(0,param_2,(long)param_3);
  if (lVar1 != 0) {
    FUN_003a78e0(param_1,**(undefined4 **)(param_1 + 8),lVar1);
    lVar1 = 1;
  }
  return lVar1;
}


// ===== 003eff6c  FUN_003eff6c =====

void FUN_003eff6c(long param_1)

{
  FUN_003f2b44(*(undefined8 *)(param_1 + 0x20));
  return;
}


// ===== 003eff74  FUN_003eff74 =====

undefined4
FUN_003eff74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
            undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_003dd5b4(*param_4);
  if (iVar1 == 0x390) {
    iVar1 = FUN_003ef5d4(param_1,0,param_4,param_6);
    uVar2 = 2;
    if (iVar1 < 1) {
      uVar2 = 0xffffffff;
    }
    return uVar2;
  }
  FUN_00379868();
  FUN_0037995c("crypto/rsa/rsa_ameth.c",0x27b,"rsa_item_verify");
  FUN_00379a5c(4,0x9b,0);
  return 0xffffffff;
}


// ===== 003f0014  FUN_003f0014 =====

undefined8 FUN_003f0014(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long in_x3;
  long in_x4;
  undefined1 *local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined1 auStack_120 [32];
  long local_100;
  undefined1 *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined1 auStack_cc [128];
  int local_4c;
  long local_48;
  long local_28;
  
  local_48 = in_x4;
  local_28 = in_x3;
  lVar2 = FUN_00389dc8();
  iVar1 = FUN_003fb96c(lVar2,&local_4c);
  if (iVar1 < 1) {
    return 0;
  }
  if (local_4c != 6) {
    return 2;
  }
  if (*(long *)(lVar2 + 0x20) != 0) {
    FUN_003cd924(auStack_120,"algorithm-id",auStack_cc,0x80);
    FUN_003cdfcc(&local_148);
    uStack_f0 = uStack_140;
    local_f8 = local_148;
    uStack_e0 = uStack_130;
    local_e8 = local_138;
    local_d8 = local_128;
    iVar1 = FUN_003b2794(lVar2,auStack_120);
    if (iVar1 < 1) {
      return 0;
    }
    if (local_100 == 0) {
      return 0;
    }
    if (in_x3 != 0) {
      local_148 = auStack_cc;
      lVar2 = FUN_003a3a2c(&local_28,&local_148,local_100);
      if (lVar2 == 0) {
        return 0;
      }
    }
    if (in_x4 == 0) {
      return 3;
    }
    local_148 = auStack_cc;
    lVar2 = FUN_003a3a2c(&local_48,&local_148,local_100);
    if (lVar2 != 0) {
      return 3;
    }
    return 0;
  }
  lVar2 = FUN_003ef44c(lVar2);
  if (lVar2 == 0) {
    return 0;
  }
  if (in_x4 != 0) {
    lVar3 = FUN_0038ed00(lVar2);
    if (lVar3 == 0) goto LAB_003f01cc;
    uVar4 = FUN_003dcce8(0x390);
    iVar1 = FUN_003a3a84(in_x4,uVar4,0x10,lVar3);
    if (iVar1 == 0) {
      FUN_0038eddc(lVar2);
      lVar2 = lVar3;
      goto LAB_003f01cc;
    }
  }
  uVar4 = FUN_003dcce8(0x390);
  iVar1 = FUN_003a3a84(in_x3,uVar4,0x10,lVar2);
  if (iVar1 != 0) {
    return 3;
  }
LAB_003f01cc:
  FUN_0038eddc(lVar2);
  return 0;
}


// ===== 003f01ec  FUN_003f01ec =====

undefined4 FUN_003f01ec(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_48;
  undefined8 local_40;
  int local_38;
  int local_34;
  
  local_48 = 0;
  local_40 = 0;
  iVar1 = FUN_003dd5b4(*param_2);
  if (iVar1 != 0x390) {
    return 0;
  }
  uVar3 = FUN_003f3ff4(param_2);
  local_34 = 0;
  iVar1 = FUN_003f4058(uVar3,&local_48,&local_40,&local_38,&local_34);
  if (iVar1 != 0) {
    if (local_38 < 0) {
      uVar6 = 0x96;
      uVar7 = 0x250;
    }
    else {
      if (local_34 == 1) {
        iVar1 = FUN_003899b0(local_48);
        if (((iVar1 - 0x2a0U < 3) && (iVar2 = FUN_003899b0(local_40), iVar1 == iVar2)) &&
           (iVar2 = FUN_00389a38(local_48), local_38 == iVar2)) {
          uVar5 = 2;
        }
        else {
          uVar5 = 0;
        }
        iVar2 = FUN_00389a38(local_48);
        if (iVar1 == 4) {
          iVar4 = 0x27;
        }
        else {
          iVar4 = iVar1;
          if (iVar1 != 0x40) {
            if (iVar1 == 0x72) {
              iVar4 = 0x44;
            }
            else {
              iVar4 = iVar2 << 2;
            }
          }
        }
        FUN_00429e50(param_1,iVar1,0x390,iVar4,uVar5);
        uVar5 = 1;
        goto LAB_003f02fc;
      }
      uVar6 = 0x8b;
      uVar7 = 600;
    }
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_ameth.c",uVar7,"rsa_pss_verify_param");
    FUN_00379a5c(4,uVar6,0);
  }
  uVar5 = 0;
LAB_003f02fc:
  FUN_003f2ae0(uVar3);
  return uVar5;
}


// ===== 003f0374  FUN_003f0374 =====

void FUN_003f0374(long param_1)

{
  thunk_FUN_003f47d8(*(undefined8 *)(param_1 + 0x20),0);
  return;
}


// ===== 003f0380  FUN_003f0380 =====

long FUN_003f0380(long param_1)

{
  return (long)*(int *)(*(long *)(param_1 + 0x20) + 0xd8);
}


// ===== 003f038c  FUN_003f038c =====

void FUN_003f038c(long param_1)

{
  FUN_003f0b30(*(undefined8 *)(param_1 + 0x20));
  return;
}


// ===== 003f0394  FUN_003f0394 =====

void FUN_003f0394(undefined8 param_1,undefined8 param_2)

{
  FUN_003f0ca8(param_1,param_2,0);
  return;
}


// ===== 003f039c  FUN_003f039c =====

undefined8 FUN_003f039c(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_2 + 8) == 0) {
    lVar2 = 0;
    uVar3 = FUN_003a78e0(param_1,*param_2,0);
    iVar1 = (int)uVar3;
  }
  else {
    lVar2 = FUN_003f3cb4(*(long *)(param_2 + 8),0x87);
    if (lVar2 == 0) {
      return 0;
    }
    uVar3 = FUN_003a78e0(param_1,*param_2,lVar2);
    iVar1 = (int)uVar3;
  }
  if (iVar1 == 0) {
    FUN_003fa6a0(lVar2);
    return 0;
  }
  return uVar3;
}


// ===== 003f0424  FUN_003f0424 =====

void FUN_003f0424(long param_1)

{
  FUN_003f0b30(*(undefined8 *)(param_1 + 0x20));
  return;
}


// ===== 003f042c  FUN_003f042c =====

void FUN_003f042c(undefined8 param_1,undefined8 param_2)

{
  FUN_003f0ca8(param_1,param_2,0x1000);
  return;
}


// ===== 003f0434  FUN_003f0434 =====

undefined8 FUN_003f0434(undefined8 param_1,long param_2,undefined4 param_3,int param_4)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  
  lVar8 = *(long *)(param_2 + 0x20);
  if (*(long *)(lVar8 + 0x28) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0038f2c0(*(long *)(lVar8 + 0x28));
  }
  iVar3 = FUN_0040caf8(*(undefined8 *)(lVar8 + 0x88));
  uVar6 = FUN_0037eb98(param_1,param_3,0x80);
  if ((int)uVar6 == 0) {
    return uVar6;
  }
  pcVar1 = "RSA-PSS";
  if (**(int **)(param_2 + 8) != 0x390) {
    pcVar1 = "RSA";
  }
  iVar4 = FUN_0037b9f8(param_1,&DAT_001c7b69,pcVar1);
  if (0 < iVar4) {
    if ((param_4 == 0) || (*(long *)(lVar8 + 0x38) == 0)) {
      iVar3 = FUN_0037b9f8(param_1,"Public-Key: (%d bit)\n",uVar2);
      if (0 < iVar3) {
        pcVar1 = "Exponent:";
        uVar6 = FUN_003f0f9c(param_1,"Modulus:",*(undefined8 *)(lVar8 + 0x28),0,param_3);
        iVar3 = (int)uVar6;
        goto joined_r0x003f057c;
      }
    }
    else {
      iVar4 = 2;
      if (0 < iVar3) {
        iVar4 = iVar3 + 2;
      }
      iVar3 = FUN_0037b9f8(param_1,"Private-Key: (%d bit, %d primes)\n",uVar2,iVar4);
      if (0 < iVar3) {
        pcVar1 = "publicExponent:";
        uVar6 = FUN_003f0f9c(param_1,"modulus:",*(undefined8 *)(lVar8 + 0x28),0,param_3);
        iVar3 = (int)uVar6;
joined_r0x003f057c:
        if (iVar3 == 0) {
          return uVar6;
        }
        uVar6 = FUN_003f0f9c(param_1,pcVar1,*(undefined8 *)(lVar8 + 0x30),0,param_3);
        if ((int)uVar6 == 0) {
          return uVar6;
        }
        if (param_4 != 0) {
          uVar6 = FUN_003f0f9c(param_1,"privateExponent:",*(undefined8 *)(lVar8 + 0x38),0,param_3);
          if ((int)uVar6 == 0) {
            return uVar6;
          }
          uVar6 = FUN_003f0f9c(param_1,"prime1:",*(undefined8 *)(lVar8 + 0x40),0,param_3);
          if ((int)uVar6 == 0) {
            return uVar6;
          }
          uVar6 = FUN_003f0f9c(param_1,"prime2:",*(undefined8 *)(lVar8 + 0x48),0,param_3);
          if ((int)uVar6 == 0) {
            return uVar6;
          }
          uVar6 = FUN_003f0f9c(param_1,"exponent1:",*(undefined8 *)(lVar8 + 0x50),0,param_3);
          if ((int)uVar6 == 0) {
            return uVar6;
          }
          uVar6 = FUN_003f0f9c(param_1,"exponent2:",*(undefined8 *)(lVar8 + 0x58),0,param_3);
          if ((int)uVar6 == 0) {
            return uVar6;
          }
          uVar6 = FUN_003f0f9c(param_1,"coefficient:",*(undefined8 *)(lVar8 + 0x60),0,param_3);
          if ((int)uVar6 == 0) {
            return uVar6;
          }
          iVar3 = FUN_0040caf8(*(undefined8 *)(lVar8 + 0x88));
          if (0 < iVar3) {
            iVar3 = 0;
            do {
              puVar7 = (undefined8 *)FUN_0040cb0c(*(undefined8 *)(lVar8 + 0x88),iVar3);
              uVar6 = FUN_0037eb98(param_1,param_3,0x80);
              if ((int)uVar6 == 0) {
                return uVar6;
              }
              iVar4 = iVar3 + 3;
              iVar5 = FUN_0037b9f8(param_1,"prime%d:",iVar4);
              if (iVar5 < 1) {
                return 0;
              }
              uVar6 = FUN_003f0f9c(param_1,&DAT_001c717f,*puVar7,0,param_3);
              if ((int)uVar6 == 0) {
                return uVar6;
              }
              uVar6 = FUN_0037eb98(param_1,param_3,0x80);
              if ((int)uVar6 == 0) {
                return uVar6;
              }
              iVar5 = FUN_0037b9f8(param_1,"exponent%d:",iVar4);
              if (iVar5 < 1) {
                return 0;
              }
              uVar6 = FUN_003f0f9c(param_1,&DAT_001c717f,puVar7[1],0,param_3);
              if ((int)uVar6 == 0) {
                return uVar6;
              }
              uVar6 = FUN_0037eb98(param_1,param_3,0x80);
              if ((int)uVar6 == 0) {
                return uVar6;
              }
              iVar4 = FUN_0037b9f8(param_1,"coefficient%d:",iVar4);
              if (iVar4 < 1) {
                return 0;
              }
              uVar6 = FUN_003f0f9c(param_1,&DAT_001c717f,puVar7[2],0,param_3);
              if ((int)uVar6 == 0) {
                return uVar6;
              }
              iVar4 = FUN_0040caf8(*(undefined8 *)(lVar8 + 0x88));
              iVar3 = iVar3 + 1;
            } while (iVar3 < iVar4);
          }
        }
        if ((**(int **)(param_2 + 8) == 0x390) &&
           (uVar6 = FUN_003f07e4(param_1,1,*(undefined8 *)(lVar8 + 0x80),param_3), (int)uVar6 == 0))
        {
          return uVar6;
        }
        return 1;
      }
    }
  }
  return 0;
}


// ===== 003f07e4  FUN_003f07e4 =====

bool FUN_003f07e4(undefined8 param_1,int param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  undefined8 *puVar2;
  char *pcVar3;
  bool bVar4;
  
  iVar1 = FUN_0037eb98(param_1,param_4,0x80);
  if (iVar1 != 0) {
    if (param_2 == 0) {
      if (param_3 == (undefined8 *)0x0) {
        pcVar3 = "(INVALID PSS PARAMETERS)\n";
        goto LAB_003f08dc;
      }
    }
    else {
      if (param_3 == (undefined8 *)0x0) {
        pcVar3 = "No PSS parameter restrictions\n";
LAB_003f08dc:
        iVar1 = FUN_0037e608(param_1,pcVar3);
        return 0 < iVar1;
      }
      iVar1 = FUN_0037e608(param_1,"PSS parameter restrictions:");
      if (iVar1 < 1) {
        return false;
      }
    }
    iVar1 = FUN_0037e608(param_1,&DAT_001e2980);
    if (0 < iVar1) {
      if (param_2 != 0) {
        param_4 = param_4 + 2;
      }
      iVar1 = FUN_0037eb98(param_1,param_4,0x80);
      if ((iVar1 != 0) && (iVar1 = FUN_0037e608(param_1,"Hash Algorithm: "), 0 < iVar1)) {
        if ((undefined8 *)*param_3 == (undefined8 *)0x0) {
          iVar1 = FUN_0037e608(param_1,"sha1 (default)");
        }
        else {
          iVar1 = FUN_00399b60(param_1,*(undefined8 *)*param_3);
        }
        if ((((0 < iVar1) && (iVar1 = FUN_0037e608(param_1,&DAT_001e2980), 0 < iVar1)) &&
            (iVar1 = FUN_0037eb98(param_1,param_4,0x80), iVar1 != 0)) &&
           (iVar1 = FUN_0037e608(param_1,"Mask Algorithm: "), 0 < iVar1)) {
          if ((undefined8 *)param_3[1] == (undefined8 *)0x0) {
            iVar1 = FUN_0037e608(param_1,"mgf1 with sha1 (default)");
joined_r0x003f09f8:
            if (iVar1 < 1) {
              puVar2 = (undefined8 *)0x0;
              bVar4 = false;
              goto LAB_003f09c4;
            }
            puVar2 = (undefined8 *)0x0;
LAB_003f0a00:
            FUN_0037e608(param_1,&DAT_001e2980);
            iVar1 = FUN_0037eb98(param_1,param_4,0x80);
            if (iVar1 != 0) {
              pcVar3 = "";
              if (param_2 != 0) {
                pcVar3 = "Minimum";
              }
              iVar1 = FUN_0037b9f8(param_1,"%s Salt Length: 0x",pcVar3);
              if (0 < iVar1) {
                if (param_3[2] == 0) {
                  iVar1 = FUN_0037e608(param_1,"14 (default)");
                }
                else {
                  iVar1 = FUN_003f1608(param_1);
                }
                if (0 < iVar1) {
                  FUN_0037e608(param_1,&DAT_001e2980);
                  iVar1 = FUN_0037eb98(param_1,param_4,0x80);
                  if ((iVar1 != 0) && (iVar1 = FUN_0037e608(param_1,"Trailer Field: 0x"), 0 < iVar1)
                     ) {
                    if (param_3[3] == 0) {
                      iVar1 = FUN_0037e608(param_1,"01 (default)");
                    }
                    else {
                      iVar1 = FUN_003f1608(param_1);
                    }
                    if (0 < iVar1) {
                      FUN_0037e608(param_1,&DAT_001e2980);
                      bVar4 = true;
                      goto LAB_003f09c4;
                    }
                  }
                }
              }
            }
          }
          else {
            iVar1 = FUN_00399b60(param_1,*(undefined8 *)param_3[1]);
            if ((iVar1 < 1) || (iVar1 = FUN_0037e608(param_1," with "), iVar1 < 1))
            goto LAB_003f09bc;
            puVar2 = (undefined8 *)FUN_003a3e84(param_3[1]);
            if (puVar2 == (undefined8 *)0x0) {
              iVar1 = FUN_0037e608(param_1,"INVALID");
              goto joined_r0x003f09f8;
            }
            iVar1 = FUN_00399b60(param_1,*puVar2);
            if (0 < iVar1) goto LAB_003f0a00;
          }
          bVar4 = false;
          goto LAB_003f09c4;
        }
      }
    }
  }
LAB_003f09bc:
  bVar4 = false;
  puVar2 = (undefined8 *)0x0;
LAB_003f09c4:
  FUN_003a3a50(puVar2);
  return bVar4;
}


// ===== 003f0b30  FUN_003f0b30 =====

undefined4 FUN_003f0b30(long param_1,undefined8 param_2,code *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  undefined1 auStack_6c [20];
  undefined1 auStack_58 [4];
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  
  lVar4 = FUN_003f1acc();
  if (lVar4 == 0) {
    return 0;
  }
  lVar5 = FUN_003fb4a8(param_1);
  if ((lVar5 == 0) || (lVar5 = FUN_003fb4b0(param_1), lVar5 == 0)) {
LAB_003f0c68:
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_003f36b4(param_1,lVar4,0,1);
    if (iVar1 != 0) {
      lVar5 = FUN_003fb4b8(param_1);
      uVar6 = 2;
      if (lVar5 != 0) {
        uVar6 = 3;
      }
      if (*(long *)(param_1 + 0x80) == 0) {
LAB_003f0c3c:
        lVar5 = FUN_003f27c4(lVar4);
        if (lVar5 != 0) {
          uVar2 = (*param_3)(param_2,uVar6,lVar5);
          goto LAB_003f0c80;
        }
        goto LAB_003f0c68;
      }
      local_50 = 0;
      local_48 = 0;
      iVar1 = FUN_003f4058(*(long *)(param_1 + 0x80),&local_48,&local_50,&local_54,auStack_58);
      if (iVar1 != 0) {
        uVar2 = FUN_003899b0(local_48);
        uVar3 = FUN_003899b0(local_50);
        iVar1 = FUN_00404a10(auStack_6c);
        if ((((iVar1 != 0) && (iVar1 = FUN_00404a88(auStack_6c,uVar2), iVar1 != 0)) &&
            (iVar1 = FUN_00404a98(auStack_6c,uVar3), iVar1 != 0)) &&
           ((iVar1 = FUN_00404aa8(auStack_6c,local_54), iVar1 != 0 &&
            (iVar1 = FUN_003f3830(auStack_6c,lVar4,0), iVar1 != 0)))) {
          uVar6 = uVar6 | 0x80;
          goto LAB_003f0c3c;
        }
      }
    }
    uVar2 = 0;
    lVar5 = 0;
  }
LAB_003f0c80:
  FUN_003cf878(lVar5);
  FUN_003f1b34(lVar4);
  return uVar2;
}


// ===== 003f0ca8  FUN_003f0ca8 =====

undefined8 FUN_003f0ca8(undefined8 param_1,long param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 local_34;
  
  uVar5 = FUN_003b4314(param_2);
  lVar6 = thunk_FUN_003fa508(*(undefined8 *)(param_2 + 8));
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_34 = 0;
  if (lVar6 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_ameth.c",0x355,"rsa_int_import_from");
    FUN_00379a5c(5,0x80004,0);
    return 0;
  }
  FUN_003fb528(lVar6,0xf000);
  FUN_003fb544(lVar6,param_3);
  iVar1 = FUN_003f39ac(&local_68,&local_34,param_1,*(undefined8 *)(param_2 + 8));
  if (iVar1 != 0) {
    if (param_3 == 0x1000) {
      iVar1 = FUN_00404a34(&local_68);
      if (iVar1 == 0) {
        uVar2 = FUN_00404ac8(&local_68);
        uVar3 = FUN_00404af0(&local_68);
        uVar4 = FUN_00404b04(&local_68);
        FUN_003dce44(uVar2);
        uVar7 = FUN_003a213c();
        FUN_003dce44(uVar3);
        uVar8 = FUN_003a213c();
        lVar9 = FUN_003ef398(uVar7,uVar8,uVar4);
        *(long *)(lVar6 + 0x80) = lVar9;
        if (lVar9 == 0) goto LAB_003f0e28;
      }
    }
    else if ((param_3 != 0) || (iVar1 = FUN_00404a34(&local_68), iVar1 == 0)) goto LAB_003f0e28;
    iVar1 = FUN_003f33dc(lVar6,param_1,1);
    if (iVar1 != 0) {
      if (param_3 == 0) {
        uVar5 = FUN_003a78e0(uVar5,6,lVar6);
        iVar1 = (int)uVar5;
      }
      else {
        if (param_3 != 0x1000) goto LAB_003f0e28;
        uVar5 = FUN_003a78e0(uVar5,0x390,lVar6);
        iVar1 = (int)uVar5;
      }
      if (iVar1 != 0) {
        return uVar5;
      }
    }
  }
LAB_003f0e28:
  FUN_003fa6a0(lVar6);
  return 0;
}


// ===== 003f0e50  FUN_003f0e50 =====

ulong FUN_003f0e50(undefined8 param_1,undefined1 *param_2,long param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  if (param_3 != 0) {
    uVar3 = FUN_0037eb98(param_1,param_4,0x80);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    lVar5 = param_3 + -1;
    puVar1 = &DAT_001c717f;
    if (lVar5 != 0) {
      puVar1 = &DAT_001d9efd;
    }
    iVar2 = FUN_0037b9f8(param_1,"%02x%s",*param_2,puVar1);
    if (iVar2 < 1) {
      return 0;
    }
    if (param_3 != 1) {
      param_2 = param_2 + 1;
      lVar6 = -1;
      uVar3 = 1;
      do {
        if (lVar6 + (uVar3 / 0xf) * 0xf == 0) {
          iVar2 = FUN_0037e608(param_1,&DAT_001e2980);
          if (iVar2 < 1) {
            return 0;
          }
          uVar4 = FUN_0037eb98(param_1,param_4,0x80);
          if ((int)uVar4 == 0) {
            return uVar4;
          }
        }
        lVar5 = lVar5 + -1;
        puVar1 = &DAT_001c717f;
        if (lVar5 != 0) {
          puVar1 = &DAT_001d9efd;
        }
        iVar2 = FUN_0037b9f8(param_1,"%02x%s",*param_2,puVar1);
        if (iVar2 < 1) {
          return 0;
        }
        uVar3 = uVar3 + 1;
        param_2 = param_2 + 1;
        lVar6 = lVar6 + -1;
      } while (lVar5 != 0);
    }
  }
  iVar2 = FUN_0037df4c(param_1,&DAT_001e2980,1);
  return (ulong)(0 < iVar2);
}


// ===== 003f0f9c  FUN_003f0f9c =====

ulong FUN_003f0f9c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,int param_5
                  )

{
  undefined1 *puVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  long lVar10;
  
  if (param_3 == 0) {
    return 1;
  }
  iVar4 = FUN_003908c4(param_3);
  pcVar2 = "";
  if (iVar4 != 0) {
    pcVar2 = "-";
  }
  uVar6 = FUN_0037eb98(param_1,param_5,0x80);
  if ((int)uVar6 != 0) {
    iVar4 = FUN_0038f448(param_3);
    if (iVar4 == 0) {
      iVar4 = FUN_0038f2c0(param_3);
      if (0x40 < iVar4) {
        iVar5 = FUN_0038f2c0(param_3);
        iVar4 = iVar5 + 0xe;
        if (iVar5 + 7 < 0 == SCARRY4(iVar5,7)) {
          iVar4 = iVar5 + 7;
        }
        lVar10 = (long)((iVar4 >> 3) + 1);
        puVar8 = (undefined1 *)FUN_003c83a4(lVar10,"crypto/asn1/t_pkey.c",0x49);
        if (puVar8 != (undefined1 *)0x0) {
          cVar3 = *pcVar2;
          *puVar8 = 0;
          pcVar2 = " (Negative)";
          if (cVar3 != '-') {
            pcVar2 = "";
          }
          iVar4 = FUN_0037b9f8(param_1,"%s%s\n",param_2,pcVar2);
          if (0 < iVar4) {
            iVar4 = FUN_00390014(param_3,puVar8 + 1);
            puVar1 = puVar8;
            if (-1 < (char)puVar8[1]) {
              puVar1 = puVar8 + 1;
            }
            uVar6 = FUN_003f0e50(param_1,puVar1,(long)(int)(iVar4 + (uint)((byte)puVar8[1] >> 7)),
                                 param_5 + 4);
            uVar6 = uVar6 & 0xffffffff;
            goto LAB_003f113c;
          }
        }
        uVar6 = 0;
LAB_003f113c:
        FUN_003c893c(puVar8,lVar10,"crypto/asn1/t_pkey.c",0x5b);
        return uVar6;
      }
      puVar7 = (undefined8 *)FUN_003f154c(param_3);
      uVar9 = *puVar7;
      puVar7 = (undefined8 *)FUN_003f154c(param_3);
      iVar4 = FUN_0037b9f8(param_1,"%s %s%lu (%s0x%lx)\n",param_2,pcVar2,uVar9,pcVar2,*puVar7);
    }
    else {
      iVar4 = FUN_0037b9f8(param_1,"%s 0\n",param_2);
    }
    uVar6 = (ulong)(0 < iVar4);
  }
  return uVar6;
}


// ===== 003f1170  FUN_003f1170 =====

undefined1 * FUN_003f1170(long *param_1,uint param_2,ulong *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  undefined8 uVar13;
  uint uVar14;
  
  iVar5 = FUN_0038f448();
  if (iVar5 != 0) {
    puVar7 = (undefined1 *)FUN_003c83a4(1,"crypto/bn/bn_intern.c",0x1f);
    if (puVar7 != (undefined1 *)0x0) {
      *puVar7 = 0;
      *param_3 = 1;
      return puVar7;
    }
    goto LAB_003f1374;
  }
  if (param_2 - 8 < 0xfffffff9) {
    puVar7 = (undefined1 *)0x0;
    uVar13 = 0x29;
  }
  else {
    iVar5 = FUN_003908c4(param_1);
    if ((*param_1 == 0) || ((int)param_1[1] == 0)) {
      puVar7 = (undefined1 *)0x0;
      uVar13 = 0x35;
    }
    else {
      iVar6 = FUN_0038f2c0(param_1);
      uVar8 = (ulong)iVar6;
      puVar7 = (undefined1 *)FUN_003c83a4(uVar8 + 1,"crypto/bn/bn_intern.c",0x3a);
      if (puVar7 == (undefined1 *)0x0) goto LAB_003f1374;
      uVar2 = 2 << (ulong)(param_2 & 0x1f);
      uVar3 = 1 << (ulong)(param_2 & 0x1f);
      uVar1 = param_2 + 1;
      uVar12 = (ulong)uVar1;
      uVar4 = uVar2 - 1 >> 1;
      uVar14 = uVar2 - 1 & *(uint *)*param_1;
      if (iVar5 == 0) {
        uVar9 = 0;
        do {
          if (uVar14 == 0) {
            if (uVar8 <= uVar12 + uVar9) goto LAB_003f1490;
            uVar14 = 0;
LAB_003f13d0:
            uVar11 = 0;
          }
          else {
            if ((uVar14 & 1) == 0) goto LAB_003f13d0;
            if ((uVar14 & uVar3) == 0) {
              uVar10 = 1;
              uVar11 = uVar14;
            }
            else {
              uVar11 = uVar14 - uVar2;
              if (uVar8 <= uVar12 + uVar9) {
                uVar11 = uVar14 & uVar4;
              }
              uVar10 = uVar11 & 1;
            }
            uVar13 = 0x61;
            if ((((int)uVar11 <= (int)-uVar3) || (uVar13 = 0x61, (int)uVar3 <= (int)uVar11)) ||
               (uVar10 == 0)) break;
            uVar14 = uVar14 - uVar11;
            if (((uVar14 != 0) && (uVar14 != uVar2)) && (uVar14 != uVar3)) goto LAB_003f1480;
          }
          puVar7[uVar9] = (char)uVar11;
          iVar5 = FUN_00390428(param_1,uVar1 + (int)uVar9);
          uVar13 = 0x78;
          uVar14 = (iVar5 << (ulong)(param_2 & 0x1f)) + ((int)uVar14 >> 1);
          uVar9 = uVar9 + 1;
        } while ((int)uVar14 <= (int)uVar2);
      }
      else {
        uVar9 = 0;
        do {
          if (uVar14 == 0) {
            if (uVar8 <= uVar12 + uVar9) goto LAB_003f1490;
            uVar14 = 0;
LAB_003f1274:
            uVar10 = 0;
          }
          else {
            if ((uVar14 & 1) == 0) goto LAB_003f1274;
            if ((uVar14 & uVar3) == 0) {
              uVar11 = 1;
              uVar10 = uVar14;
            }
            else {
              uVar10 = uVar14 - uVar2;
              if (uVar8 <= uVar12 + uVar9) {
                uVar10 = uVar14 & uVar4;
              }
              uVar11 = uVar10 & 1;
            }
            uVar13 = 0x61;
            if ((((int)uVar10 <= (int)-uVar3) || (uVar13 = 0x61, (int)uVar3 <= (int)uVar10)) ||
               (uVar11 == 0)) goto LAB_003f1344;
            uVar14 = uVar14 - uVar10;
            if (((uVar14 != 0) && (uVar14 != uVar2)) && (uVar14 != uVar3)) goto LAB_003f1480;
          }
          puVar7[uVar9] = -(char)uVar10;
          iVar5 = FUN_00390428(param_1,uVar1 + (int)uVar9);
          uVar14 = (iVar5 << (ulong)(param_2 & 0x1f)) + ((int)uVar14 >> 1);
          uVar9 = uVar9 + 1;
        } while ((int)uVar14 <= (int)uVar2);
        uVar13 = 0x78;
      }
    }
  }
  goto LAB_003f1344;
LAB_003f1480:
  uVar13 = 0x6d;
  goto LAB_003f1344;
LAB_003f1490:
  if (uVar9 <= uVar8 + 1) {
    *param_3 = uVar9;
    return puVar7;
  }
  uVar13 = 0x7e;
LAB_003f1344:
  FUN_00379868();
  FUN_0037995c("crypto/bn/bn_intern.c",uVar13,"bn_compute_wNAF");
  FUN_00379a5c(3,0xc0103,0);
LAB_003f1374:
  FUN_003c86b4(puVar7,"crypto/bn/bn_intern.c",0x85);
  return (undefined1 *)0x0;
}


// ===== 003f14ac  FUN_003f14ac =====

undefined4 FUN_003f14ac(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


// ===== 003f14b4  FUN_003f14b4 =====

undefined4 FUN_003f14b4(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}


// ===== 003f14bc  FUN_003f14bc =====

void FUN_003f14bc(long *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 1);
  if ((int)uVar1 < *(int *)((long)param_1 + 0xc)) {
    memset((void *)(*param_1 + (long)(int)uVar1 * 8),0,
           (ulong)(*(int *)((long)param_1 + 0xc) + ~uVar1) * 8 + 8);
    return;
  }
  return;
}


// ===== 003f14f0  FUN_003f14f0 =====

undefined8 FUN_003f14f0(void *param_1,undefined8 *param_2,ulong param_3)

{
  if ((int)param_3 < *(int *)(param_2 + 1)) {
    return 0;
  }
  memset(param_1,0,-(param_3 >> 0x1f & 1) & 0xfffffff800000000 | (param_3 & 0xffffffff) << 3);
  if ((void *)*param_2 != (void *)0x0) {
    memcpy(param_1,(void *)*param_2,(long)*(int *)(param_2 + 1) << 3);
  }
  return 1;
}


// ===== 003f154c  FUN_003f154c =====

undefined8 FUN_003f154c(undefined8 *param_1)

{
  return *param_1;
}


// ===== 003f1554  FUN_003f1554 =====

void FUN_003f1554(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = param_3;
  *(undefined4 *)((long)param_1 + 0xc) = param_3;
  *(undefined4 *)(param_1 + 2) = 0;
  *(uint *)((long)param_1 + 0x14) = *(uint *)((long)param_1 + 0x14) | 2;
  FUN_003903e8();
  return;
}


// ===== 003f156c  FUN_003f156c =====

undefined8 FUN_003f156c(undefined8 *param_1,void *param_2,uint param_3)

{
  long lVar1;
  
  lVar1 = FUN_0038f924(param_1,param_3);
  if (lVar1 != 0) {
    memcpy((void *)*param_1,param_2,
           -(ulong)(param_3 >> 0x1f) & 0xfffffff800000000 | (ulong)param_3 << 3);
    *(uint *)(param_1 + 1) = param_3;
    FUN_003903e8(param_1);
    return 1;
  }
  FUN_00379868();
  FUN_0037995c("crypto/bn/bn_intern.c",0xbb,"bn_set_words");
  FUN_00379a5c(3,0x80003,0);
  return 0;
}


// ===== 003f1608  FUN_003f1608 =====

uint FUN_003f1608(undefined8 param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  char local_54;
  char local_53;
  
  if (param_2 == (int *)0x0) {
    return 0;
  }
  if ((*(byte *)((long)param_2 + 5) & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
    iVar1 = FUN_0037df4c(param_1,&DAT_001eb31a,1);
    if (iVar1 != 1) {
      return 0xffffffff;
    }
  }
  if (*param_2 == 0) {
    iVar1 = FUN_0037df4c(param_1,&DAT_001d8632,2);
    if (iVar1 != 2) {
      return 0xffffffff;
    }
    return uVar2 | 2;
  }
  if (*param_2 < 1) {
    return uVar2;
  }
  local_53 = "0123456789ABCDEF"[(ulong)**(byte **)(param_2 + 2) & 0xf];
  local_54 = "0123456789ABCDEF"[**(byte **)(param_2 + 2) >> 4];
  iVar1 = FUN_0037df4c(param_1,&local_54,2);
  if (iVar1 != 2) {
    return 0xffffffff;
  }
  uVar2 = uVar2 | 2;
  if (*param_2 < 2) {
    return uVar2;
  }
  uVar3 = 1;
  while( true ) {
    iVar1 = (int)((uVar3 & 0xffffffff) * 0xd41d41d5 >> 0x20);
    if ((int)uVar3 + (iVar1 + ((uint)((int)uVar3 - iVar1) >> 1) >> 5) * -0x23 == 0) {
      iVar1 = FUN_0037df4c(param_1,&DAT_001e93f2,2);
      if (iVar1 != 2) {
        return 0xffffffff;
      }
      uVar2 = uVar2 + 2;
    }
    local_54 = "0123456789ABCDEF"[*(byte *)(*(long *)(param_2 + 2) + uVar3) >> 4];
    local_53 = "0123456789ABCDEF"[(ulong)*(byte *)(*(long *)(param_2 + 2) + uVar3) & 0xf];
    iVar1 = FUN_0037df4c(param_1,&local_54,2);
    if (iVar1 != 2) break;
    uVar3 = uVar3 + 1;
    uVar2 = uVar2 + 2;
    if ((long)*param_2 <= (long)uVar3) {
      return uVar2;
    }
  }
  return 0xffffffff;
}


// ===== 003f17b8  FUN_003f17b8 =====

undefined8 FUN_003f17b8(undefined8 param_1,int *param_2,char *param_3,undefined4 param_4)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  char *pcVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  char cVar14;
  
  param_2[1] = 2;
  uVar3 = FUN_0037e7f0(param_1,param_3,param_4);
  if ((int)uVar3 < 1) {
    lVar7 = 0;
  }
  else {
    bVar2 = false;
    iVar12 = 0;
    lVar7 = 0;
    iVar5 = 0;
    do {
      uVar11 = (ulong)uVar3;
      cVar14 = param_3[uVar11 - 1];
      if (cVar14 == '\n') {
        uVar3 = uVar3 - 1;
        uVar11 = (ulong)uVar3;
        param_3[uVar11] = '\0';
        if (uVar3 == 0) break;
        cVar14 = param_3[uVar11 - 1];
      }
      if (cVar14 == '\r') {
        uVar3 = uVar3 - 1;
        uVar11 = (ulong)uVar3;
        param_3[uVar11] = '\0';
        if (uVar3 == 0) break;
        cVar14 = param_3[uVar11 - 1];
      }
      uVar13 = 0;
      do {
        iVar4 = FUN_003c475c(param_3[uVar13],0x10);
        if (iVar4 == 0) {
          uVar3 = (uint)uVar13;
          break;
        }
        uVar13 = uVar13 + 1;
      } while (uVar11 != uVar13);
      param_3[(int)uVar3] = '\0';
      if ((int)uVar3 < 2) break;
      pcVar10 = param_3;
      if ((!bVar2) && (*param_3 == '0')) {
        uVar1 = uVar3 - 2;
        if (param_3[1] != '0') {
          uVar1 = uVar3;
        }
        pcVar10 = param_3 + (ulong)(param_3[1] == '0') * 2;
        uVar3 = uVar1;
      }
      uVar3 = uVar3 - (cVar14 == '\\');
      if ((uVar3 & 1) != 0) {
        FUN_00379868();
        FUN_0037995c("crypto/asn1/f_int.c",0x67,"a2i_ASN1_INTEGER");
        FUN_00379a5c(0xd,0x91,0);
        uVar8 = 0x68;
        goto LAB_003f1a04;
      }
      uVar1 = (int)uVar3 >> 1;
      uVar11 = (ulong)uVar1;
      iVar4 = uVar1 + iVar5;
      lVar6 = lVar7;
      if (iVar12 < iVar4) {
        lVar6 = FUN_003c86d4(lVar7,(long)iVar12,(long)(int)(uVar3 + iVar5),"crypto/asn1/f_int.c",
                             0x6d);
        iVar12 = uVar3 + iVar5;
        if (lVar6 == 0) {
          uVar8 = 0x6f;
          goto LAB_003f1a04;
        }
      }
      lVar7 = lVar6;
      if (0 < (int)uVar1) {
        lVar9 = (long)iVar5;
        pcVar10 = pcVar10 + 1;
        do {
          iVar5 = FUN_003ca5a0(pcVar10[-1]);
          if (iVar5 < 0) {
LAB_003f1994:
            FUN_00379868();
            FUN_0037995c("crypto/asn1/f_int.c",0x79,"a2i_ASN1_INTEGER");
            FUN_00379a5c(0xd,0x8d,0);
            goto LAB_003f19c8;
          }
          *(byte *)(lVar6 + lVar9) = (byte)iVar5 | *(char *)(lVar6 + lVar9) << 4;
          iVar5 = FUN_003ca5a0(*pcVar10);
          if (iVar5 < 0) goto LAB_003f1994;
          uVar11 = uVar11 - 1;
          pcVar10 = pcVar10 + 2;
          *(byte *)(lVar6 + lVar9) = (byte)iVar5 | *(char *)(lVar6 + lVar9) << 4;
          lVar9 = lVar9 + 1;
        } while (uVar11 != 0);
      }
      if (cVar14 != '\\') {
        *param_2 = iVar4;
        *(long *)(param_2 + 2) = lVar6;
        return 1;
      }
      uVar3 = FUN_0037e7f0(param_1,param_3,param_4);
      bVar2 = true;
      iVar5 = iVar4;
    } while (0 < (int)uVar3);
  }
LAB_003f19c8:
  FUN_00379868();
  FUN_0037995c("crypto/asn1/f_int.c",0x8a,"a2i_ASN1_INTEGER");
  FUN_00379a5c(0xd,0x96,0);
  uVar8 = 0x8b;
LAB_003f1a04:
  FUN_003c86b4(lVar7,"crypto/asn1/f_int.c",uVar8);
  return 0;
}


// ===== 003f1a94  thunk_FUN_003f1608 =====

uint thunk_FUN_003f1608(undefined8 param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  char cStack_54;
  char cStack_53;
  
  if (param_2 == (int *)0x0) {
    return 0;
  }
  if ((*(byte *)((long)param_2 + 5) & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
    iVar1 = FUN_0037df4c(param_1,&DAT_001eb31a,1);
    if (iVar1 != 1) {
      return 0xffffffff;
    }
  }
  if (*param_2 == 0) {
    iVar1 = FUN_0037df4c(param_1,&DAT_001d8632,2);
    if (iVar1 != 2) {
      return 0xffffffff;
    }
    return uVar2 | 2;
  }
  if (*param_2 < 1) {
    return uVar2;
  }
  cStack_53 = "0123456789ABCDEF"[(ulong)**(byte **)(param_2 + 2) & 0xf];
  cStack_54 = "0123456789ABCDEF"[**(byte **)(param_2 + 2) >> 4];
  iVar1 = FUN_0037df4c(param_1,&cStack_54,2);
  if (iVar1 != 2) {
    return 0xffffffff;
  }
  uVar2 = uVar2 | 2;
  if (*param_2 < 2) {
    return uVar2;
  }
  uVar3 = 1;
  while( true ) {
    iVar1 = (int)((uVar3 & 0xffffffff) * 0xd41d41d5 >> 0x20);
    if ((int)uVar3 + (iVar1 + ((uint)((int)uVar3 - iVar1) >> 1) >> 5) * -0x23 == 0) {
      iVar1 = FUN_0037df4c(param_1,&DAT_001e93f2,2);
      if (iVar1 != 2) {
        return 0xffffffff;
      }
      uVar2 = uVar2 + 2;
    }
    cStack_54 = "0123456789ABCDEF"[*(byte *)(*(long *)(param_2 + 2) + uVar3) >> 4];
    cStack_53 = "0123456789ABCDEF"[(ulong)*(byte *)(*(long *)(param_2 + 2) + uVar3) & 0xf];
    iVar1 = FUN_0037df4c(param_1,&cStack_54,2);
    if (iVar1 != 2) break;
    uVar3 = uVar3 + 1;
    uVar2 = uVar2 + 2;
    if ((long)*param_2 <= (long)uVar3) {
      return uVar2;
    }
  }
  return 0xffffffff;
}


// ===== 003f1a98  FUN_003f1a98 =====

void FUN_003f1a98(undefined8 param_1,long param_2)

{
  int iVar1;
  
  iVar1 = FUN_003f17b8();
  if (iVar1 != 0) {
    *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) & 0x100 | 2;
  }
  return;
}


// ===== 003f1acc  FUN_003f1acc =====

long FUN_003f1acc(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_003c8474(0x18,"crypto/param_build.c",0x5d);
  if (lVar1 != 0) {
    lVar2 = FUN_0040bf0c();
    *(long *)(lVar1 + 0x10) = lVar2;
    if (lVar2 == 0) {
      FUN_003c86b4(lVar1,"crypto/param_build.c",0x62);
      return 0;
    }
  }
  return lVar1;
}


// ===== 003f1b34  FUN_003f1b34 =====

void FUN_003f1b34(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    return;
  }
  iVar1 = FUN_0040caf8(*(undefined8 *)(param_1 + 0x10));
  if (0 < iVar1) {
    do {
      uVar2 = FUN_0040ca00(*(undefined8 *)(param_1 + 0x10));
      FUN_003c86b4(uVar2,"crypto/param_build.c",0x6e);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_0040bd78(*(undefined8 *)(param_1 + 0x10));
  FUN_003c86b4(param_1,"crypto/param_build.c",0x77);
  return;
}


// ===== 003f1bb0  FUN_003f1bb0 =====

void FUN_003f1bb0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 local_14;
  
  local_14 = param_3;
  FUN_003f1bdc(param_1,param_2,&local_14,4,1);
  return;
}


// ===== 003f1bdc  FUN_003f1bdc =====

undefined8
FUN_003f1bdc(long *param_1,undefined8 param_2,void *param_3,size_t param_4,undefined4 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = (undefined8 *)FUN_003c8474(0x38,"crypto/param_build.c",0x37);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = param_2;
    *(undefined4 *)(puVar2 + 1) = param_5;
    puVar2[2] = (long)(int)param_4;
    lVar3 = FUN_003cf374(param_4);
    lVar4 = *param_1;
    puVar2[3] = lVar3;
    *(undefined4 *)((long)puVar2 + 0xc) = 0;
    *param_1 = lVar4 + lVar3;
    iVar1 = FUN_0040c89c(param_1[2],puVar2);
    if (0 < iVar1) {
      memcpy(puVar2 + 6,param_3,param_4);
      return 1;
    }
    FUN_003c86b4(puVar2,"crypto/param_build.c",0x44);
  }
  FUN_00379868();
  FUN_0037995c("crypto/param_build.c",0x50,"param_push_num");
  FUN_00379a5c(0xf,0xc0102,0);
  return 0;
}


// ===== 003f1ce4  FUN_003f1ce4 =====

void FUN_003f1ce4(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 local_14;
  
  local_14 = param_3;
  FUN_003f1bdc(param_1,param_2,&local_14,4,2);
  return;
}


// ===== 003f1d10  FUN_003f1d10 =====

void FUN_003f1d10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_18;
  
  local_18 = param_3;
  FUN_003f1bdc(param_1,param_2,&local_18,8,1);
  return;
}


// ===== 003f1d3c  FUN_003f1d3c =====

void FUN_003f1d3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_18;
  
  local_18 = param_3;
  FUN_003f1bdc(param_1,param_2,&local_18,8,2);
  return;
}


// ===== 003f1d68  FUN_003f1d68 =====

void FUN_003f1d68(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 local_14;
  
  local_14 = param_3;
  FUN_003f1bdc(param_1,param_2,&local_14,4,1);
  return;
}


// ===== 003f1d94  FUN_003f1d94 =====

void FUN_003f1d94(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 local_14;
  
  local_14 = param_3;
  FUN_003f1bdc(param_1,param_2,&local_14,4,2);
  return;
}


// ===== 003f1dc0  FUN_003f1dc0 =====

void FUN_003f1dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_18;
  
  local_18 = param_3;
  FUN_003f1bdc(param_1,param_2,&local_18,8,1);
  return;
}


// ===== 003f1dec  FUN_003f1dec =====

void FUN_003f1dec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_18;
  
  local_18 = param_3;
  FUN_003f1bdc(param_1,param_2,&local_18,8,2);
  return;
}


// ===== 003f1e18  FUN_003f1e18 =====

void FUN_003f1e18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_18;
  
  local_18 = param_3;
  FUN_003f1bdc(param_1,param_2,&local_18,8,2);
  return;
}


// ===== 003f1e44  FUN_003f1e44 =====

void FUN_003f1e44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_18;
  
  local_18 = param_3;
  FUN_003f1bdc(param_1,param_2,&local_18,8,1);
  return;
}


// ===== 003f1e70  FUN_003f1e70 =====

void FUN_003f1e70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_18;
  
  local_18 = param_1;
  FUN_003f1bdc(param_2,param_3,&local_18,8,3);
  return;
}


// ===== 003f1e9c  FUN_003f1e9c =====

undefined8 * FUN_003f1e9c(long *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  
  if (param_3 == 0) {
    puVar5 = (undefined8 *)FUN_003c8474(0x38,"crypto/param_build.c",0x37);
    puVar4 = puVar5;
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = param_2;
      *(undefined4 *)(puVar5 + 1) = 2;
      puVar5[2] = 0;
      lVar6 = FUN_003cf374(0);
      lVar7 = *param_1;
      puVar5[3] = lVar6;
      *(undefined4 *)((long)puVar5 + 0xc) = 0;
      *param_1 = lVar7 + lVar6;
      iVar3 = FUN_0040c89c(param_1[2],puVar5);
      if (iVar3 < 1) {
        FUN_003c86b4(puVar5,"crypto/param_build.c",0x44);
        return (undefined8 *)0x0;
      }
      puVar4 = (undefined8 *)0x1;
      puVar5[4] = 0;
    }
    return puVar4;
  }
  iVar1 = FUN_003908c4(param_3);
  iVar2 = FUN_0038f2c0(param_3);
  iVar3 = iVar2 + 0xe;
  if (iVar2 + 7 < 0 == SCARRY4(iVar2,7)) {
    iVar3 = iVar2 + 7;
  }
  if (iVar1 != 0) {
    puVar4 = (undefined8 *)FUN_003f1fcc(param_1,param_2,param_3,(long)((iVar3 >> 3) + 1),1);
    return puVar4;
  }
  puVar4 = (undefined8 *)FUN_003f1fcc(param_1,param_2,param_3,(long)(iVar3 >> 3),2);
  return puVar4;
}


// ===== 003f1fcc  FUN_003f1fcc =====

undefined8 FUN_003f1fcc(long param_1,undefined8 param_2,long param_3,ulong param_4,int param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  char *pcVar6;
  ulong uVar7;
  
  if (1 < param_5 - 1U) {
    return 0;
  }
  if (param_3 == 0) {
    uVar7 = 0;
    puVar4 = (undefined8 *)FUN_003c8474(0x38,"crypto/param_build.c",0x37);
joined_r0x003f20ac:
    if (puVar4 == (undefined8 *)0x0) {
      return 0;
    }
    *puVar4 = param_2;
    *(int *)(puVar4 + 1) = param_5;
    puVar4[2] = (long)(int)param_4;
    lVar3 = FUN_003cf374(param_4);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    puVar4[3] = lVar3;
    *(int *)((long)puVar4 + 0xc) = (int)uVar7;
    *(long *)(param_1 + uVar7 * 8) = *(long *)(param_1 + uVar7 * 8) + lVar3;
    iVar2 = FUN_0040c89c(uVar5,puVar4);
    if (0 < iVar2) {
      puVar4[4] = param_3;
      return 1;
    }
    FUN_003c86b4(puVar4,"crypto/param_build.c",0x44);
  }
  else {
    if ((param_5 == 2) && (iVar2 = FUN_003908c4(param_3), iVar2 != 0)) {
      FUN_00379868();
      FUN_0037995c("crypto/param_build.c",0xcd,"push_BN");
      pcVar6 = "Negative big numbers are unsupported for OSSL_PARAM_UNSIGNED_INTEGER";
      uVar5 = 0x8010c;
    }
    else {
      iVar2 = FUN_0038f2c0(param_3);
      if (iVar2 == -0xf || iVar2 + 0xf < 0 != SCARRY4(iVar2,0xf)) {
        FUN_00379868();
        FUN_0037995c("crypto/param_build.c",0xd4,"push_BN");
        uVar5 = 0x73;
      }
      else {
        iVar1 = iVar2 + 0xe;
        if (iVar2 + 7 < 0 == SCARRY4(iVar2,7)) {
          iVar1 = iVar2 + 7;
        }
        if ((uint)(iVar1 >> 3) <= param_4) {
          iVar2 = FUN_0038f4e8(param_3,8);
          uVar7 = (ulong)(iVar2 == 8);
          if (param_4 < 2) {
            param_4 = 1;
          }
          puVar4 = (undefined8 *)FUN_003c8474(0x38,"crypto/param_build.c",0x37);
          goto joined_r0x003f20ac;
        }
        FUN_00379868();
        FUN_0037995c("crypto/param_build.c",0xd8,"push_BN");
        uVar5 = 0x74;
      }
      pcVar6 = (char *)0x0;
    }
    FUN_00379a5c(0xf,uVar5,pcVar6);
  }
  return 0;
}


// ===== 003f21e0  FUN_003f21e0 =====

undefined8 * FUN_003f21e0(long *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  
  if (param_3 == 0) {
    puVar4 = (undefined8 *)FUN_003c8474(0x38,"crypto/param_build.c",0x37);
    puVar3 = puVar4;
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = param_2;
      *(undefined4 *)(puVar4 + 1) = 2;
      puVar4[2] = (long)(int)param_4;
      lVar5 = FUN_003cf374(param_4);
      lVar6 = *param_1;
      puVar4[3] = lVar5;
      *(undefined4 *)((long)puVar4 + 0xc) = 0;
      *param_1 = lVar6 + lVar5;
      iVar2 = FUN_0040c89c(param_1[2],puVar4);
      if (iVar2 < 1) {
        FUN_003c86b4(puVar4,"crypto/param_build.c",0x44);
        return (undefined8 *)0x0;
      }
      puVar3 = (undefined8 *)0x1;
      puVar4[4] = 0;
    }
    return puVar3;
  }
  iVar2 = FUN_003908c4(param_3);
  if (iVar2 != 0) {
    iVar2 = FUN_0038f2c0(param_3);
    uVar1 = iVar2 + 0xe;
    if ((int)(iVar2 + 7U) < 0 == SCARRY4(iVar2,7)) {
      uVar1 = iVar2 + 7U;
    }
    puVar3 = (undefined8 *)
             FUN_003f1fcc(param_1,param_2,param_3,(long)((ulong)uVar1 << 0x20) >> 0x23,1);
    return puVar3;
  }
  puVar3 = (undefined8 *)FUN_003f1fcc(param_1,param_2,param_3,param_4,2);
  return puVar3;
}


// ===== 003f230c  FUN_003f230c =====

undefined8 * FUN_003f230c(long param_1,undefined8 param_2,char *param_3,size_t param_4)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  if (param_4 == 0) {
    param_4 = strlen(param_3);
    uVar5 = param_4 >> 0x1f;
  }
  else {
    uVar5 = param_4 >> 0x1f;
  }
  if (uVar5 == 0) {
    iVar2 = FUN_003c9798(param_3);
    puVar3 = (undefined8 *)FUN_003c8474(0x38,"crypto/param_build.c",0x37);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = param_2;
      *(undefined4 *)(puVar3 + 1) = 4;
      puVar3[2] = param_4;
      lVar4 = FUN_003cf374(param_4 + 1);
      puVar3[3] = lVar4;
      *(int *)((long)puVar3 + 0xc) = iVar2;
      lVar1 = (ulong)(iVar2 != 0) * 8;
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      *(long *)(param_1 + lVar1) = *(long *)(param_1 + lVar1) + lVar4;
      iVar2 = FUN_0040c89c(uVar6,puVar3);
      if (iVar2 < 1) {
        FUN_003c86b4(puVar3,"crypto/param_build.c",0x44);
        return (undefined8 *)0x0;
      }
      puVar3[5] = param_3;
      return (undefined8 *)0x1;
    }
  }
  else {
    FUN_00379868();
    FUN_0037995c("crypto/param_build.c",0x105,"OSSL_PARAM_BLD_push_utf8_string");
    FUN_00379a5c(0xf,0x70,0);
    puVar3 = (undefined8 *)0x0;
  }
  return puVar3;
}


// ===== 003f2454  FUN_003f2454 =====

undefined8 * FUN_003f2454(long *param_1,undefined8 param_2,char *param_3,size_t param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  if (param_4 == 0) {
    param_4 = strlen(param_3);
    uVar4 = param_4 >> 0x1f;
  }
  else {
    uVar4 = param_4 >> 0x1f;
  }
  if (uVar4 == 0) {
    puVar2 = (undefined8 *)FUN_003c8474(0x38,"crypto/param_build.c",0x37);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = param_2;
      *(undefined4 *)(puVar2 + 1) = 6;
      puVar2[2] = param_4;
      lVar3 = FUN_003cf374(8);
      lVar5 = *param_1;
      puVar2[3] = lVar3;
      *(undefined4 *)((long)puVar2 + 0xc) = 0;
      *param_1 = lVar5 + lVar3;
      iVar1 = FUN_0040c89c(param_1[2],puVar2);
      if (iVar1 < 1) {
        FUN_003c86b4(puVar2,"crypto/param_build.c",0x44);
        return (undefined8 *)0x0;
      }
      puVar2[5] = param_3;
      return (undefined8 *)0x1;
    }
  }
  else {
    FUN_00379868();
    FUN_0037995c("crypto/param_build.c",0x118,"OSSL_PARAM_BLD_push_utf8_ptr");
    FUN_00379a5c(0xf,0x70,0);
    puVar2 = (undefined8 *)0x0;
  }
  return puVar2;
}


// ===== 003f2580  FUN_003f2580 =====

undefined8 * FUN_003f2580(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (param_4 >> 0x1f == 0) {
    iVar2 = FUN_003c9798(param_3);
    puVar3 = (undefined8 *)FUN_003c8474(0x38,"crypto/param_build.c",0x37);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = param_2;
      *(undefined4 *)(puVar3 + 1) = 5;
      puVar3[2] = param_4;
      lVar4 = FUN_003cf374(param_4);
      puVar3[3] = lVar4;
      *(int *)((long)puVar3 + 0xc) = iVar2;
      lVar1 = (ulong)(iVar2 != 0) * 8;
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      *(long *)(param_1 + lVar1) = *(long *)(param_1 + lVar1) + lVar4;
      iVar2 = FUN_0040c89c(uVar5,puVar3);
      if (0 < iVar2) {
        puVar3[5] = param_3;
        return (undefined8 *)0x1;
      }
      FUN_003c86b4(puVar3,"crypto/param_build.c",0x44);
      return (undefined8 *)0x0;
    }
  }
  else {
    FUN_00379868();
    FUN_0037995c("crypto/param_build.c",0x129,"OSSL_PARAM_BLD_push_octet_string");
    FUN_00379a5c(0xf,0x70,0);
    puVar3 = (undefined8 *)0x0;
  }
  return puVar3;
}


// ===== 003f26b0  FUN_003f26b0 =====

undefined8 * FUN_003f26b0(long *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  
  if (param_4 >> 0x1f == 0) {
    puVar2 = (undefined8 *)FUN_003c8474(0x38,"crypto/param_build.c",0x37);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = param_2;
      *(undefined4 *)(puVar2 + 1) = 7;
      puVar2[2] = param_4;
      lVar3 = FUN_003cf374(8);
      lVar4 = *param_1;
      puVar2[3] = lVar3;
      *(undefined4 *)((long)puVar2 + 0xc) = 0;
      *param_1 = lVar4 + lVar3;
      iVar1 = FUN_0040c89c(param_1[2],puVar2);
      if (0 < iVar1) {
        puVar2[5] = param_3;
        return (undefined8 *)0x1;
      }
      FUN_003c86b4(puVar2,"crypto/param_build.c",0x44);
      return (undefined8 *)0x0;
    }
  }
  else {
    FUN_00379868();
    FUN_0037995c("crypto/param_build.c",0x13a,"OSSL_PARAM_BLD_push_octet_ptr");
    FUN_00379a5c(0xf,0x70,0);
    puVar2 = (undefined8 *)0x0;
  }
  return puVar2;
}


// ===== 003f27c4  FUN_003f27c4 =====

long FUN_003f27c4(long *param_1)

{
  undefined8 *__s;
  long lVar1;
  int iVar2;
  ulong __n;
  long lVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  iVar5 = FUN_0040caf8(param_1[2]);
  lVar7 = FUN_003cf374((long)(iVar5 + 1) * 0x28);
  lVar9 = *param_1;
  lVar13 = param_1[1] << 3;
  if (lVar13 == 0) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    puVar8 = (undefined8 *)FUN_003c8e24(lVar13,"crypto/param_build.c",0x183);
    if (puVar8 == (undefined8 *)0x0) {
      FUN_00379868();
      FUN_0037995c("crypto/param_build.c",0x185,"OSSL_PARAM_BLD_to_param");
      FUN_00379a5c(0xf,0x6f,0);
      return 0;
    }
  }
  lVar9 = FUN_003c83a4((lVar9 + lVar7) * 8,"crypto/param_build.c",0x189);
  if (lVar9 == 0) {
    FUN_003c96d0(puVar8,"crypto/param_build.c",0x18b);
  }
  else {
    uVar6 = FUN_0040caf8(param_1[2]);
    if ((int)uVar6 < 1) {
      uVar16 = 0;
    }
    else {
      puVar17 = (undefined8 *)(lVar9 + lVar7 * 8);
      uVar14 = 0;
      uVar16 = (ulong)uVar6;
      puVar15 = (undefined8 *)(lVar9 + 0x10);
      puVar18 = puVar8;
      do {
        puVar10 = (undefined8 *)FUN_0040cb0c(param_1[2],uVar14 & 0xffffffff);
        __n = puVar10[2];
        lVar7 = puVar10[3];
        iVar5 = *(int *)(puVar10 + 1);
        iVar2 = *(int *)((long)puVar10 + 0xc);
        puVar15[2] = 0xffffffffffffffff;
        puVar15[-2] = *puVar10;
        bVar4 = iVar2 != 0;
        lVar12 = puVar10[4];
        __s = puVar17;
        if (bVar4) {
          __s = puVar18;
        }
        lVar1 = lVar7;
        lVar3 = 0;
        if (bVar4) {
          lVar1 = 0;
          lVar3 = lVar7;
        }
        *(int *)(puVar15 + -1) = iVar5;
        *puVar15 = __s;
        puVar15[1] = __n;
        if (lVar12 == 0) {
          if (iVar5 - 4U < 2) {
            if ((void *)puVar10[5] == (void *)0x0) {
              memset(__s,0,__n);
              iVar5 = *(int *)(puVar10 + 1);
            }
            else {
              memcpy(__s,(void *)puVar10[5],__n);
              iVar5 = *(int *)(puVar10 + 1);
            }
            if (iVar5 == 4) {
              *(undefined1 *)((long)__s + puVar10[2]) = 0;
            }
          }
          else if (iVar5 - 6U < 2) {
            *__s = puVar10[5];
          }
          else if (__n < 9) {
            if (__n != 0) {
              memcpy(__s,puVar10 + 6,__n);
            }
          }
          else {
            memset(__s,0,__n);
          }
        }
        else if (iVar5 == 2) {
          FUN_0039017c();
        }
        else {
          FUN_00390194(lVar12);
        }
        uVar14 = uVar14 + 1;
        puVar18 = puVar18 + lVar3;
        puVar17 = puVar17 + lVar1;
        puVar15 = puVar15 + 5;
      } while (uVar16 != uVar14);
    }
    puVar15 = (undefined8 *)(lVar9 + uVar16 * 0x28);
    FUN_003cdfcc(&local_88);
    puVar15[1] = uStack_80;
    *puVar15 = local_88;
    puVar15[3] = uStack_70;
    puVar15[2] = local_78;
    puVar15[4] = local_68;
    FUN_003cf380(puVar15,puVar8,lVar13);
    *param_1 = 0;
    param_1[1] = 0;
    iVar5 = FUN_0040caf8(param_1[2]);
    if (0 < iVar5) {
      do {
        uVar11 = FUN_0040ca00(param_1[2]);
        FUN_003c86b4(uVar11,"crypto/param_build.c",0x6e);
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return lVar9;
}


// ===== 003f2a8c  FUN_003f2a8c =====

undefined * FUN_003f2a8c(void)

{
  return &DAT_0077b018;
}


// ===== 003f2a98  FUN_003f2a98 =====

undefined * FUN_003f2a98(void)

{
  return &DAT_0077b0c8;
}


// ===== 003f2aa4  FUN_003f2aa4 =====

undefined * FUN_003f2aa4(void)

{
  return &DAT_0077b2c0;
}


// ===== 003f2ab0  FUN_003f2ab0 =====

undefined * FUN_003f2ab0(void)

{
  return &DAT_0077b378;
}


// ===== 003f2abc  FUN_003f2abc =====

void FUN_003f2abc(void)

{
  FUN_0038a93c();
  return;
}


// ===== 003f2ac8  FUN_003f2ac8 =====

void FUN_003f2ac8(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_0077b378);
  return;
}


// ===== 003f2ad4  FUN_003f2ad4 =====

void FUN_003f2ad4(void)

{
  FUN_0039a5f4(&DAT_0077b378);
  return;
}


// ===== 003f2ae0  FUN_003f2ae0 =====

void FUN_003f2ae0(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_0077b378);
  return;
}


// ===== 003f2aec  FUN_003f2aec =====

void FUN_003f2aec(undefined8 param_1)

{
  FUN_003a4098(&DAT_0077b378,param_1);
  return;
}


// ===== 003f2afc  FUN_003f2afc =====

undefined * FUN_003f2afc(void)

{
  return &DAT_0077b480;
}


// ===== 003f2b08  FUN_003f2b08 =====

void FUN_003f2b08(void)

{
  FUN_0038a93c();
  return;
}


// ===== 003f2b14  FUN_003f2b14 =====

void FUN_003f2b14(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_0077b480);
  return;
}


// ===== 003f2b20  FUN_003f2b20 =====

void FUN_003f2b20(void)

{
  FUN_0039a5f4(&DAT_0077b480);
  return;
}


// ===== 003f2b2c  FUN_003f2b2c =====

void FUN_003f2b2c(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_0077b480);
  return;
}


// ===== 003f2b38  FUN_003f2b38 =====

void FUN_003f2b38(void)

{
  FUN_0038a93c();
  return;
}


// ===== 003f2b44  FUN_003f2b44 =====

void FUN_003f2b44(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_0077b0c8);
  return;
}


// ===== 003f2b50  FUN_003f2b50 =====

void FUN_003f2b50(void)

{
  FUN_0038a93c();
  return;
}


// ===== 003f2b5c  FUN_003f2b5c =====

void FUN_003f2b5c(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_0077b2c0);
  return;
}


// ===== 003f2b68  FUN_003f2b68 =====

void FUN_003f2b68(undefined8 param_1)

{
  FUN_003a4098(&DAT_0077b2c0,param_1);
  return;
}


// ===== 003f2b78  FUN_003f2b78 =====

void FUN_003f2b78(undefined8 param_1)

{
  FUN_003a4098(&DAT_0077b0c8,param_1);
  return;
}


// ===== 003f2b88  FUN_003f2b88 =====

long FUN_003f2b88(int param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  
  if (param_1 == 5) {
    if (*(int *)(*param_2 + 0x10) == 1) {
      iVar1 = FUN_003fc654();
      return (ulong)(iVar1 == 1) << 1;
    }
  }
  else {
    if (param_1 == 2) {
      FUN_003fa6a0(*param_2);
      *param_2 = 0;
      return 2;
    }
    if (param_1 == 0) {
      lVar2 = FUN_003fa500();
      *param_2 = lVar2;
      return (ulong)(lVar2 != 0) << 1;
    }
  }
  return 1;
}


// ===== 003f2c24  FUN_003f2c24 =====

undefined8 FUN_003f2c24(int param_1,long *param_2)

{
  if (param_1 == 2) {
    FUN_003a3a50(*(undefined8 *)(*param_2 + 0x20));
  }
  return 1;
}


// ===== 003f2c4c  FUN_003f2c4c =====

undefined8 FUN_003f2c4c(int param_1,long *param_2)

{
  if (param_1 == 2) {
    FUN_003a3a50(*(undefined8 *)(*param_2 + 0x18));
  }
  return 1;
}


// ===== 003f2c74  FUN_003f2c74 =====

undefined * FUN_003f2c74(void)

{
  return &DAT_0077b560;
}


// ===== 003f2c80  FUN_003f2c80 =====

undefined * FUN_003f2c80(void)

{
  return &DAT_0077b598;
}


// ===== 003f2c8c  FUN_003f2c8c =====

bool FUN_003f2c8c(long *param_1)

{
  long lVar1;
  
  lVar1 = FUN_0038f584();
  *param_1 = lVar1;
  return lVar1 != 0;
}


// ===== 003f2cbc  FUN_003f2cbc =====

void FUN_003f2cbc(long *param_1,long param_2)

{
  if (*param_1 != 0) {
    if ((*(byte *)(param_2 + 0x28) & 1) == 0) {
      FUN_0038f4f4();
    }
    else {
      FUN_0038f458();
    }
    *param_1 = 0;
  }
  return;
}


// ===== 003f2cf8  FUN_003f2cf8 =====

long FUN_003f2cf8(long *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    lVar1 = FUN_0038f584();
    *param_1 = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
  }
  lVar1 = FUN_0038fa44(param_2,param_3,lVar1);
  if (lVar1 == 0) {
    lVar1 = *param_1;
    if (lVar1 != 0) {
      if ((*(byte *)(param_6 + 0x28) & 1) != 0) {
        FUN_0038f458();
        *param_1 = 0;
        return 0;
      }
      FUN_0038f4f4();
      *param_1 = 0;
      return 0;
    }
  }
  else {
    lVar1 = 1;
  }
  return lVar1;
}


// ===== 003f2d9c  FUN_003f2d9c =====

int FUN_003f2d9c(long *param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined1 *puVar5;
  
  lVar4 = *param_1;
  if (lVar4 != 0) {
    uVar3 = FUN_0038f2c0(lVar4);
    if (param_2 != (undefined1 *)0x0) {
      puVar5 = param_2;
      if ((uVar3 & 7) == 0) {
        puVar5 = param_2 + 1;
        *param_2 = 0;
      }
      FUN_00390014(lVar4,puVar5);
    }
    iVar2 = FUN_0038f2c0(lVar4);
    iVar1 = iVar2 + 0xe;
    if (iVar2 + 7 < 0 == SCARRY4(iVar2,7)) {
      iVar1 = iVar2 + 7;
    }
    return (uint)((uVar3 & 7) == 0) + (iVar1 >> 3);
  }
  return -1;
}


// ===== 003f2e1c  FUN_003f2e1c =====

ulong FUN_003f2e1c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = FUN_003f2f3c(param_1,*param_2);
  if ((int)uVar2 != 0) {
    iVar1 = FUN_0037e608(param_1,&DAT_001e2980);
    uVar2 = (ulong)(0 < iVar1);
  }
  return uVar2;
}


// ===== 003f2e5c  FUN_003f2e5c =====

bool FUN_003f2e5c(long *param_1)

{
  long lVar1;
  
  lVar1 = FUN_0038f5b4();
  *param_1 = lVar1;
  return lVar1 != 0;
}


// ===== 003f2e8c  FUN_003f2e8c =====

long FUN_003f2e8c(long *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    lVar2 = FUN_0038f5b4();
    *param_1 = lVar2;
    if (lVar2 == 0) {
      return 0;
    }
  }
  lVar2 = FUN_0038fa44(param_2,param_3,lVar2);
  lVar1 = *param_1;
  if (lVar2 == 0) {
    if (lVar1 != 0) {
      if ((*(byte *)(param_6 + 0x28) & 1) != 0) {
        FUN_0038f458();
        *param_1 = 0;
        return 0;
      }
      FUN_0038f4f4();
      *param_1 = 0;
      return 0;
    }
  }
  else {
    FUN_00390944(lVar1,4);
    lVar1 = 1;
  }
  return lVar1;
}


// ===== 003f2f3c  FUN_003f2f3c =====

/* WARNING: Removing unreachable block (ram,0x003f2fe4) */

undefined8 FUN_003f2f3c(undefined8 param_1,long *param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if ((((int)param_2[2] != 0) && (iVar3 = FUN_0037df4c(param_1,&DAT_001eb31a,1), iVar3 != 1)) ||
     ((iVar3 = FUN_0038f448(param_2), iVar3 != 0 &&
      (iVar3 = FUN_0037df4c(param_1,&DAT_001e8c6a,1), iVar3 != 1)))) {
    return 0;
  }
  if ((int)*(uint *)(param_2 + 1) < 1) {
    return 1;
  }
  bVar2 = false;
  uVar6 = (ulong)*(uint *)(param_2 + 1);
  do {
    uVar4 = *(ulong *)(*param_2 + uVar6 * 8 + -8);
    if ((bVar2) || (uVar4 >> 0x3c != 0)) {
      iVar3 = FUN_0037df4c(param_1,"0123456789ABCDEF" + (uVar4 >> 0x3c),1);
      if (iVar3 != 1) {
        return 0;
      }
      uVar5 = (ulong)*(byte *)(*param_2 + uVar6 * 8 + -1) & 0xf;
LAB_003f3010:
      iVar3 = FUN_0037df4c(param_1,"0123456789ABCDEF" + uVar5,1);
      if (iVar3 != 1) {
        return 0;
      }
      uVar5 = *(ulong *)(*param_2 + uVar6 * 8 + -8) >> 0x34 & 0xf;
LAB_003f3058:
      iVar3 = FUN_0037df4c(param_1,"0123456789ABCDEF" + uVar5,1);
      if (iVar3 != 1) {
        return 0;
      }
      uVar5 = (ulong)*(ushort *)(*param_2 + uVar6 * 8 + -2) & 0xf;
LAB_003f3080:
      iVar3 = FUN_0037df4c(param_1,"0123456789ABCDEF" + uVar5,1);
      if (iVar3 != 1) {
        return 0;
      }
      uVar5 = *(ulong *)(*param_2 + uVar6 * 8 + -8) >> 0x2c & 0xf;
LAB_003f30c8:
      iVar3 = FUN_0037df4c(param_1,"0123456789ABCDEF" + uVar5,1);
      if (iVar3 != 1) {
        return 0;
      }
      uVar5 = *(ulong *)(*param_2 + uVar6 * 8 + -8) >> 0x28 & 0xf;
LAB_003f30f0:
      iVar3 = FUN_0037df4c(param_1,"0123456789ABCDEF" + uVar5,1);
      if (iVar3 != 1) {
        return 0;
      }
      uVar5 = *(ulong *)(*param_2 + uVar6 * 8 + -8) >> 0x24 & 0xf;
LAB_003f3138:
      iVar3 = FUN_0037df4c(param_1,"0123456789ABCDEF" + uVar5,1);
      if (iVar3 != 1) {
        return 0;
      }
      uVar5 = (ulong)*(uint *)(*param_2 + uVar6 * 8 + -4) & 0xf;
LAB_003f3160:
      iVar3 = FUN_0037df4c(param_1,"0123456789ABCDEF" + uVar5,1);
      if (iVar3 != 1) {
        return 0;
      }
      uVar5 = *(ulong *)(*param_2 + uVar6 * 8 + -8) >> 0x1c & 0xf;
LAB_003f31a8:
      iVar3 = FUN_0037df4c(param_1,"0123456789ABCDEF" + uVar5,1);
      if (iVar3 != 1) {
        return 0;
      }
      uVar5 = *(ulong *)(*param_2 + uVar6 * 8 + -8) >> 0x18 & 0xf;
LAB_003f31d0:
      iVar3 = FUN_0037df4c(param_1,"0123456789ABCDEF" + uVar5,1);
      if (iVar3 != 1) {
        return 0;
      }
      uVar5 = *(ulong *)(*param_2 + uVar6 * 8 + -8) >> 0x14 & 0xf;
LAB_003f3218:
      iVar3 = FUN_0037df4c(param_1,"0123456789ABCDEF" + uVar5,1);
      if (iVar3 != 1) {
        return 0;
      }
      uVar5 = *(ulong *)(*param_2 + uVar6 * 8 + -8) >> 0x10 & 0xf;
LAB_003f3240:
      iVar3 = FUN_0037df4c(param_1,"0123456789ABCDEF" + uVar5,1);
      if (iVar3 != 1) {
        return 0;
      }
      uVar5 = *(ulong *)(*param_2 + uVar6 * 8 + -8) >> 0xc & 0xf;
LAB_003f3288:
      iVar3 = FUN_0037df4c(param_1,"0123456789ABCDEF" + uVar5,1);
      if (iVar3 != 1) {
        return 0;
      }
      uVar5 = *(ulong *)(*param_2 + uVar6 * 8 + -8) >> 8 & 0xf;
LAB_003f32b0:
      iVar3 = FUN_0037df4c(param_1,"0123456789ABCDEF" + uVar5,1);
      if (iVar3 != 1) {
        return 0;
      }
      uVar5 = *(ulong *)(*param_2 + uVar6 * 8 + -8) >> 4 & 0xf;
LAB_003f32f4:
      iVar3 = FUN_0037df4c(param_1,"0123456789ABCDEF" + uVar5,1);
      if (iVar3 != 1) {
        return 0;
      }
      uVar4 = *(ulong *)(*param_2 + uVar6 * 8 + -8) & 0xf;
LAB_003f331c:
      bVar2 = true;
      iVar3 = FUN_0037df4c(param_1,"0123456789ABCDEF" + uVar4,1);
      if (iVar3 != 1) {
        return 0;
      }
    }
    else {
      uVar5 = uVar4 >> 0x38;
      if (uVar5 != 0) goto LAB_003f3010;
      uVar5 = uVar4 >> 0x34 & 0xf;
      if (uVar5 != 0) goto LAB_003f3058;
      uVar5 = uVar4 >> 0x30 & 0xf;
      if (uVar5 != 0) goto LAB_003f3080;
      uVar5 = uVar4 >> 0x2c & 0xf;
      if (((uVar4 >> 0x30 & 1) != 0) || (uVar5 != 0)) goto LAB_003f30c8;
      uVar5 = uVar4 >> 0x28 & 0xf;
      if (uVar5 != 0) goto LAB_003f30f0;
      uVar5 = uVar4 >> 0x24 & 0xf;
      if (((uVar4 >> 0x28 & 1) != 0) || (uVar5 != 0)) goto LAB_003f3138;
      uVar5 = uVar4 >> 0x20 & 0xf;
      if (uVar5 != 0) goto LAB_003f3160;
      uVar5 = uVar4 >> 0x1c & 0xf;
      if (((uVar4 >> 0x20 & 1) != 0) || (uVar5 != 0)) goto LAB_003f31a8;
      uVar5 = uVar4 >> 0x18 & 0xf;
      if (uVar5 != 0) goto LAB_003f31d0;
      uVar5 = uVar4 >> 0x14 & 0xf;
      if (((uVar4 >> 0x18 & 1) != 0) || (uVar5 != 0)) goto LAB_003f3218;
      uVar5 = uVar4 >> 0x10 & 0xf;
      if (uVar5 != 0) goto LAB_003f3240;
      uVar5 = uVar4 >> 0xc & 0xf;
      if (((uVar4 >> 0x10 & 1) != 0) || (uVar5 != 0)) goto LAB_003f3288;
      uVar5 = uVar4 >> 8 & 0xf;
      if (uVar5 != 0) goto LAB_003f32b0;
      uVar5 = uVar4 >> 4 & 0xf;
      if (((uVar4 >> 8 & 1) != 0) || (uVar5 != 0)) goto LAB_003f32f4;
      uVar4 = uVar4 & 0xf;
      if (uVar4 != 0) goto LAB_003f331c;
      bVar2 = false;
    }
    bVar1 = uVar6 < 2;
    uVar6 = uVar6 - 1;
    if (bVar1) {
      return 1;
    }
  } while( true );
}


// ===== 003f3390  FUN_003f3390 =====

undefined * FUN_003f3390(void)

{
  if ((DAT_007ac318 & 1) == 0) {
    DAT_007ac318 = 1;
    FUN_0037cd5c(&DAT_007ac319,0x10,"bn(%zu,%zu)",0x40,0x40);
  }
  return &DAT_007ac319;
}


// ===== 003f33dc  FUN_003f33dc =====

undefined8 FUN_003f33dc(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_58 = 0;
  local_50 = 0;
  local_60 = 0;
  if (param_1 == 0) {
    return 0;
  }
  lVar2 = FUN_003cb19c(param_2,&DAT_001c0e15);
  lVar3 = FUN_003cb19c(param_2,&DAT_001c7561);
  if (param_3 == 0) {
    lVar4 = 0;
    if (lVar2 != 0) goto LAB_003f345c;
LAB_003f346c:
    if ((((lVar3 != 0) && (iVar1 = FUN_003ccbf8(lVar3,&local_58), iVar1 == 0)) ||
        ((lVar4 != 0 && (iVar1 = FUN_003ccbf8(lVar4,&local_60), iVar1 == 0)))) ||
       (lVar2 = local_60, iVar1 = FUN_003fae98(param_1,local_50,local_58,local_60), iVar1 == 0))
    goto LAB_003f351c;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    if (lVar2 == 0) {
      lVar3 = 0;
      lVar4 = 0;
      lVar2 = 0;
LAB_003f3590:
      FUN_0040bd78(lVar2);
      FUN_0040bd78(lVar3);
      FUN_0040bd78(lVar4);
      return 1;
    }
    lVar2 = FUN_0040bf0c();
    if (lVar2 == 0) goto LAB_003f3520;
    ppuVar7 = &PTR_s_rsa_factor1_007a8ad8;
    puVar6 = PTR_s_rsa_factor1_007a8ad8;
    while (puVar6 != (undefined *)0x0) {
      ppuVar7 = ppuVar7 + 1;
      lVar3 = FUN_003cb19c(param_2);
      if (lVar3 != 0) {
        local_48 = 0;
        iVar1 = FUN_003ccbf8(lVar3,&local_48);
        if (iVar1 == 0) goto LAB_003f3520;
        iVar1 = FUN_0040c89c(lVar2,local_48);
        if (iVar1 == 0) {
          FUN_0038f458(local_48);
          goto LAB_003f3520;
        }
      }
      puVar6 = *ppuVar7;
    }
    lVar3 = FUN_0040bf0c();
    if (lVar3 != 0) {
      ppuVar7 = &PTR_s_rsa_exponent1_007a8b30;
      puVar6 = PTR_s_rsa_exponent1_007a8b30;
      while (puVar6 != (undefined *)0x0) {
        ppuVar7 = ppuVar7 + 1;
        lVar4 = FUN_003cb19c(param_2);
        if (lVar4 != 0) {
          local_48 = 0;
          iVar1 = FUN_003ccbf8(lVar4,&local_48);
          if (iVar1 == 0) goto LAB_003f3524;
          iVar1 = FUN_0040c89c(lVar3,local_48);
          if (iVar1 == 0) {
            FUN_0038f458(local_48);
            goto LAB_003f3524;
          }
        }
        puVar6 = *ppuVar7;
      }
      lVar4 = FUN_0040bf0c();
      if (lVar4 != 0) {
        ppuVar7 = &PTR_s_rsa_coefficient1_007a8b88;
        puVar6 = PTR_s_rsa_coefficient1_007a8b88;
        while (puVar6 != (undefined *)0x0) {
          ppuVar7 = ppuVar7 + 1;
          lVar5 = FUN_003cb19c(param_2);
          if (lVar5 != 0) {
            local_48 = 0;
            iVar1 = FUN_003ccbf8(lVar5,&local_48);
            if (iVar1 == 0) goto LAB_003f3528;
            iVar1 = FUN_0040c89c(lVar4,local_48);
            if (iVar1 == 0) {
              FUN_0038f458(local_48);
              goto LAB_003f3528;
            }
          }
          puVar6 = *ppuVar7;
        }
        iVar1 = FUN_0040caf8(lVar2);
        if ((iVar1 == 0) || (iVar1 = FUN_003fb5a4(param_1,lVar2,lVar3,lVar4), iVar1 != 0))
        goto LAB_003f3590;
      }
      goto LAB_003f3528;
    }
  }
  else {
    lVar4 = FUN_003cb19c(param_2,&DAT_001eccc9);
    if (lVar2 == 0) goto LAB_003f346c;
LAB_003f345c:
    iVar1 = FUN_003ccbf8(lVar2,&local_50);
    if (iVar1 != 0) goto LAB_003f346c;
LAB_003f351c:
    lVar2 = 0;
LAB_003f3520:
    lVar3 = 0;
  }
LAB_003f3524:
  lVar4 = 0;
LAB_003f3528:
  FUN_0038f4f4(local_50);
  FUN_0038f4f4(local_58);
  FUN_0038f4f4(local_60);
  FUN_0040ca6c(lVar2,FUN_0038f4f4);
  FUN_0040ca6c(lVar3,FUN_0038f4f4);
  FUN_0040ca6c(lVar4,FUN_0038f4f4);
  return 0;
}


// ===== 003f36b4  FUN_003f36b4 =====

undefined4 FUN_003f36b4(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  
  local_58 = 0;
  local_68 = 0;
  local_60 = 0;
  lVar2 = FUN_0040bf0c();
  lVar3 = FUN_0040bf0c();
  lVar4 = FUN_0040bf0c();
  uVar5 = 0;
  if ((((param_1 != 0) && (lVar2 != 0)) && (lVar3 != 0)) && (lVar4 != 0)) {
    FUN_003fb290(param_1,&local_60,&local_68,&local_58);
    FUN_003fb84c(param_1,lVar2,lVar3,lVar4);
    iVar1 = FUN_003f4654(param_2,param_3,&DAT_001c0e15,local_60);
    if (((iVar1 == 0) || (iVar1 = FUN_003f4654(param_2,param_3,&DAT_001c7561,local_68), iVar1 == 0))
       || (((param_4 != 0 && (local_58 != 0)) &&
           ((((iVar1 = FUN_003f4654(param_2,param_3,&DAT_001eccc9), iVar1 == 0 ||
              (iVar1 = FUN_003f46b0(param_2,param_3,PTR_PTR_s_rsa_factor1_007a1bf0,lVar2),
              iVar1 == 0)) ||
             (iVar1 = FUN_003f46b0(param_2,param_3,PTR_PTR_s_rsa_exponent1_007a1bf8,lVar3),
             iVar1 == 0)) ||
            (iVar1 = FUN_003f46b0(param_2,param_3,PTR_PTR_s_rsa_coefficient1_007a1c00,lVar4),
            iVar1 == 0)))))) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
  }
  FUN_0040bd78(lVar2);
  FUN_0040bd78(lVar3);
  FUN_0040bd78(lVar4);
  return uVar5;
}


// ===== 003f3830  FUN_003f3830 =====

undefined8 FUN_003f3830(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  
  iVar1 = FUN_00404a34();
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = FUN_00404ac8(param_1);
  iVar2 = FUN_00404adc(param_1);
  iVar3 = FUN_00404af0(param_1);
  uVar4 = FUN_00404b04(param_1);
  iVar5 = FUN_00404ac8(0);
  iVar6 = FUN_00404adc(0);
  iVar7 = FUN_00404af0(0);
  lVar10 = 0;
  if (iVar1 != iVar5) {
    lVar10 = FUN_00404ed0(iVar1);
  }
  if (iVar2 == iVar6) {
    lVar11 = 0;
  }
  else {
    lVar11 = FUN_00404ed0(iVar2);
  }
  if (iVar3 == iVar7) {
    lVar8 = 0;
  }
  else {
    lVar8 = FUN_00404ed0(iVar3);
  }
  if ((lVar10 != 0) && (uVar9 = FUN_003f44e8(param_2,param_3,"digest",lVar10), (int)uVar9 == 0)) {
    return uVar9;
  }
  if ((lVar11 != 0) && (uVar9 = FUN_003f44e8(param_2,param_3,&DAT_001ca0c4,lVar11), (int)uVar9 == 0)
     ) {
    return uVar9;
  }
  if ((lVar8 != 0) && (uVar9 = FUN_003f44e8(param_2,param_3,"mgf1-digest",lVar8), (int)uVar9 == 0))
  {
    return uVar9;
  }
  uVar9 = FUN_003f4438(param_2,param_3,"saltlen",uVar4);
  if ((int)uVar9 == 0) {
    return uVar9;
  }
  return 1;
}


// ===== 003f39ac  FUN_003f39ac =====

ulong FUN_003f39ac(ulong param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong local_48;
  
  if (param_1 == 0) goto LAB_003f3c58;
  lVar3 = FUN_003cb19c(param_3,"properties");
  lVar4 = FUN_003cb19c(param_3,"digest");
  lVar5 = FUN_003cb19c(param_3,&DAT_001ca0c4);
  lVar6 = FUN_003cb19c(param_3,"mgf1-digest");
  lVar7 = FUN_003cb19c(param_3,"saltlen");
  if (lVar3 == 0) {
LAB_003f3a54:
    if (*param_2 != 0) goto joined_r0x003f3b0c;
LAB_003f3aa4:
    if ((((lVar4 != 0) || (lVar5 != 0)) || (lVar6 != 0)) || (lVar7 != 0)) {
      iVar2 = FUN_00404a10(param_1);
      if (iVar2 != 0) {
        *param_2 = 1;
        goto joined_r0x003f3b0c;
      }
      goto LAB_003f3b44;
    }
    lVar4 = 0;
    lVar3 = 0;
    param_1 = 1;
    goto LAB_003f3c48;
  }
  if (*(int *)(lVar3 + 8) == 4) {
    lVar3 = *(long *)(lVar3 + 0x10);
    goto LAB_003f3a54;
  }
  lVar3 = 0;
  if (*param_2 == 0) goto LAB_003f3aa4;
joined_r0x003f3b0c:
  if (lVar5 != 0) {
    uVar1 = FUN_00404adc(0);
    local_48 = 0;
    if (*(int *)(lVar5 + 8) == 4) {
      uVar9 = *(ulong *)(lVar5 + 0x10);
      local_48 = uVar9;
      uVar8 = FUN_00404f78();
      iVar2 = FUN_003cab04(uVar9,uVar8);
    }
    else {
      iVar2 = FUN_003cd940(lVar5,&local_48);
      if (iVar2 == 0) goto LAB_003f3b44;
      uVar10 = *(undefined8 *)(lVar5 + 0x10);
      uVar8 = FUN_00404f78(uVar1);
      iVar2 = FUN_003cab04(uVar10,uVar8);
    }
    if (iVar2 != 0) {
LAB_003f3b44:
      param_1 = 0;
      goto LAB_003f3c58;
    }
  }
  if (lVar4 == 0) {
LAB_003f3b8c:
    if (lVar6 != 0) {
      local_48 = 0;
      if (*(int *)(lVar6 + 8) == 4) {
        local_48 = *(ulong *)(lVar6 + 0x10);
        lVar3 = FUN_0039e6f4(param_4,local_48,lVar3);
      }
      else {
        iVar2 = FUN_003cd940(lVar5,&local_48);
        if (iVar2 == 0) goto LAB_003f3c40;
        lVar3 = FUN_0039e6f4(param_4,local_48,lVar3);
      }
      if (lVar3 != 0) {
        uVar1 = FUN_00404dd4(lVar3);
        iVar2 = FUN_00404a98(param_1,uVar1);
        if (iVar2 != 0) goto LAB_003f3c08;
      }
      goto LAB_003f3c44;
    }
    lVar3 = 0;
LAB_003f3c08:
    if (lVar7 == 0) {
      param_1 = 1;
    }
    else {
      iVar2 = thunk_FUN_003cb238(lVar7,&local_48);
      if (iVar2 == 0) goto LAB_003f3c44;
      iVar2 = FUN_00404aa8(param_1,local_48 & 0xffffffff);
      param_1 = (ulong)(iVar2 != 0);
    }
  }
  else {
    local_48 = 0;
    if (*(int *)(lVar4 + 8) == 4) {
      local_48 = *(ulong *)(lVar4 + 0x10);
      lVar4 = FUN_0039e6f4(param_4,local_48,lVar3);
joined_r0x003f3b70:
      if (lVar4 != 0) {
        uVar1 = FUN_00404dd4(lVar4);
        iVar2 = FUN_00404a88(param_1,uVar1);
        if (iVar2 != 0) goto LAB_003f3b8c;
      }
    }
    else {
      iVar2 = FUN_003cd940(lVar5,&local_48);
      if (iVar2 != 0) {
        lVar4 = FUN_0039e6f4(param_4,local_48,lVar3);
        goto joined_r0x003f3b70;
      }
      lVar4 = 0;
    }
LAB_003f3c40:
    lVar3 = 0;
LAB_003f3c44:
    param_1 = 0;
  }
LAB_003f3c48:
  FUN_0039d050(lVar4);
  FUN_0039d050(lVar3);
LAB_003f3c58:
  return param_1 & 0xffffffff;
}


// ===== 003f3c78  FUN_003f3c78 =====

bool FUN_003f3c78(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    return true;
  }
  lVar1 = FUN_003fa640();
  lVar2 = FUN_003fc760();
  return lVar1 != lVar2;
}


// ===== 003f3cb4  FUN_003f3cb4 =====

long FUN_003f3cb4(long param_1,ulong param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    return 0;
  }
  lVar3 = FUN_003fa640();
  lVar4 = FUN_003fc760();
  if (lVar3 != lVar4) {
    return 0;
  }
  lVar3 = thunk_FUN_003fa508(*(undefined8 *)(param_1 + 8));
  if (lVar3 == 0) {
    return 0;
  }
  if ((param_2 & 3) != 0) {
    if (*(long *)(param_1 + 0x28) != 0) {
      lVar4 = FUN_0038f720(*(long *)(param_1 + 0x28));
      *(long *)(lVar3 + 0x28) = lVar4;
      if (lVar4 == 0) goto LAB_003f3fd4;
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      lVar4 = FUN_0038f720(*(long *)(param_1 + 0x30));
      *(long *)(lVar3 + 0x30) = lVar4;
      if (lVar4 == 0) goto LAB_003f3fd4;
    }
  }
  if ((param_2 & 1) == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0xa4);
    *(undefined4 *)(lVar3 + 0x10) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(lVar3 + 0xa4) = uVar1;
    uVar10 = *(undefined8 *)(param_1 + 0x70);
    uVar9 = *(undefined8 *)(param_1 + 0x68);
    *(undefined4 *)(lVar3 + 0x78) = *(undefined4 *)(param_1 + 0x78);
    *(undefined8 *)(lVar3 + 0x70) = uVar10;
    *(undefined8 *)(lVar3 + 0x68) = uVar9;
  }
  else {
    if (*(long *)(param_1 + 0x38) != 0) {
      lVar4 = FUN_0038f720(*(long *)(param_1 + 0x38));
      *(long *)(lVar3 + 0x38) = lVar4;
      if (lVar4 == 0) goto LAB_003f3fd4;
    }
    if (*(long *)(param_1 + 0x40) != 0) {
      lVar4 = FUN_0038f720(*(long *)(param_1 + 0x40));
      *(long *)(lVar3 + 0x40) = lVar4;
      if (lVar4 == 0) goto LAB_003f3fd4;
    }
    if (*(long *)(param_1 + 0x48) != 0) {
      lVar4 = FUN_0038f720(*(long *)(param_1 + 0x48));
      *(long *)(lVar3 + 0x48) = lVar4;
      if (lVar4 == 0) goto LAB_003f3fd4;
    }
    if (*(long *)(param_1 + 0x50) != 0) {
      lVar4 = FUN_0038f720(*(long *)(param_1 + 0x50));
      *(long *)(lVar3 + 0x50) = lVar4;
      if (lVar4 == 0) goto LAB_003f3fd4;
    }
    if (*(long *)(param_1 + 0x58) != 0) {
      lVar4 = FUN_0038f720(*(long *)(param_1 + 0x58));
      *(long *)(lVar3 + 0x58) = lVar4;
      if (lVar4 == 0) goto LAB_003f3fd4;
    }
    if (*(long *)(param_1 + 0x60) != 0) {
      lVar4 = FUN_0038f720(*(long *)(param_1 + 0x60));
      *(long *)(lVar3 + 0x60) = lVar4;
      if (lVar4 == 0) goto LAB_003f3fd4;
    }
    uVar1 = *(undefined4 *)(param_1 + 0xa4);
    *(undefined4 *)(lVar3 + 0x10) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(lVar3 + 0xa4) = uVar1;
    uVar10 = *(undefined8 *)(param_1 + 0x70);
    uVar9 = *(undefined8 *)(param_1 + 0x68);
    *(undefined4 *)(lVar3 + 0x78) = *(undefined4 *)(param_1 + 0x78);
    *(undefined8 *)(lVar3 + 0x70) = uVar10;
    *(undefined8 *)(lVar3 + 0x68) = uVar9;
    iVar2 = FUN_0040caf8(*(undefined8 *)(param_1 + 0x88));
    if (0 < iVar2) {
      lVar4 = FUN_0040bf38(0,iVar2);
      *(long *)(lVar3 + 0x88) = lVar4;
      if (lVar4 == 0) goto LAB_003f3fd4;
      iVar8 = 0;
      do {
        plVar5 = (long *)FUN_003c8474(0x28,"crypto/rsa/rsa_backend.c",0x188);
        if (plVar5 == (long *)0x0) goto LAB_003f3fd4;
        FUN_0040c89c(*(undefined8 *)(lVar3 + 0x88),plVar5);
        plVar6 = (long *)FUN_0040cb0c(*(undefined8 *)(param_1 + 0x88),iVar8);
        if (*plVar6 != 0) {
          lVar4 = FUN_0038f720();
          *plVar5 = lVar4;
          if (lVar4 == 0) goto LAB_003f3fd4;
        }
        if (plVar6[1] != 0) {
          lVar4 = FUN_0038f720();
          plVar5[1] = lVar4;
          if (lVar4 == 0) goto LAB_003f3fd4;
        }
        if (plVar6[2] != 0) {
          lVar4 = FUN_0038f720();
          plVar5[2] = lVar4;
          if (lVar4 == 0) goto LAB_003f3fd4;
        }
        iVar8 = iVar8 + 1;
      } while (iVar2 != iVar8);
      iVar2 = FUN_003fc654(lVar3);
      if (iVar2 == 0) goto LAB_003f3fd4;
    }
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    lVar4 = FUN_003f2aec(*(long *)(param_1 + 0x80));
    *(long *)(lVar3 + 0x80) = lVar4;
    lVar7 = *(long *)(*(long *)(param_1 + 0x80) + 8);
    if ((lVar7 != 0) && (*(long *)(lVar4 + 8) == 0)) {
      lVar4 = FUN_003a3e84(lVar7);
      *(long *)(*(long *)(lVar3 + 0x80) + 0x20) = lVar4;
      if (lVar4 == 0) goto LAB_003f3fd4;
    }
  }
  iVar2 = FUN_003c4ef4(9,lVar3 + 0x90,param_1 + 0x90);
  if (iVar2 != 0) {
    return lVar3;
  }
LAB_003f3fd4:
  FUN_003fa6a0(lVar3);
  return 0;
}


// ===== 003f3ff4  FUN_003f3ff4 =====

long FUN_003f3ff4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = FUN_003f2ab0();
  lVar2 = FUN_0039b0f4(uVar1,*(undefined8 *)(param_1 + 8));
  if ((lVar2 != 0) && (*(long *)(lVar2 + 8) != 0)) {
    lVar3 = FUN_003a3e84(*(long *)(lVar2 + 8));
    *(long *)(lVar2 + 0x20) = lVar3;
    if (lVar3 == 0) {
      FUN_003f2ae0(lVar2);
      return 0;
    }
  }
  return lVar2;
}


// ===== 003f4058  FUN_003f4058 =====

long FUN_003f4058(undefined8 *param_1,long *param_2,long *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  undefined4 uVar1;
  long lVar2;
  undefined1 auStack_54 [20];
  
  FUN_00404a10(auStack_54);
  if (param_1 == (undefined8 *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_003a3e20(*param_1);
    *param_2 = lVar2;
    if (lVar2 != 0) {
      lVar2 = FUN_003a3e20(param_1[4]);
      *param_3 = lVar2;
      if (lVar2 != 0) {
        if (param_1[2] == 0) {
          uVar1 = FUN_00404b04(auStack_54);
          lVar2 = param_1[3];
          *param_4 = uVar1;
        }
        else {
          uVar1 = FUN_0038dea4();
          lVar2 = param_1[3];
          *param_4 = uVar1;
        }
        if (lVar2 == 0) {
          uVar1 = FUN_00404b18(auStack_54);
        }
        else {
          uVar1 = FUN_0038dea4(lVar2);
        }
        *param_5 = uVar1;
        return 1;
      }
    }
  }
  return lVar2;
}


// ===== 003f412c  FUN_003f412c =====

undefined8 FUN_003f412c(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  int local_6c;
  undefined1 auStack_68 [8];
  undefined8 local_60;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_18;
  
  FUN_003a3bf8(&local_60,&local_6c,auStack_68,param_2);
  iVar1 = FUN_003dd5b4(local_60);
  if (iVar1 != 0x390) {
    return 1;
  }
  if (local_6c == -1) {
    return 1;
  }
  if (local_6c != 0x10) {
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_backend.c",0x215,"ossl_rsa_param_decode");
    FUN_00379a5c(4,0x95,0);
    return 0;
  }
  uVar4 = FUN_003f2ab0();
  lVar5 = FUN_0039b0f4(uVar4,*(undefined8 *)(param_2 + 8));
  if (lVar5 != 0) {
    if (*(long *)(lVar5 + 8) != 0) {
      lVar6 = FUN_003a3e84();
      *(long *)(lVar5 + 0x20) = lVar6;
      if (lVar6 == 0) {
        FUN_003f2ae0(lVar5);
        lVar5 = 0;
        goto LAB_003f42e0;
      }
    }
    iVar1 = FUN_003fb4f0(param_1,lVar5);
    if (iVar1 != 0) {
      if (((param_1 == 0) || (lVar5 = FUN_003fb4e8(param_1), lVar5 == 0)) ||
         (puVar7 = (undefined8 *)FUN_003fb520(param_1), puVar7 == (undefined8 *)0x0)) {
        return 1;
      }
      local_18 = 0;
      local_38 = 0;
      iVar1 = FUN_003f4058(lVar5,&local_18,&local_38,&local_3c,&local_40);
      if (iVar1 == 0) {
        return 0;
      }
      uVar2 = FUN_003899b0(local_18);
      uVar3 = FUN_003899b0(local_38);
      iVar1 = FUN_00404a10(&local_54);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = FUN_00404a88(&local_54,uVar2);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = FUN_00404a98(&local_54,uVar3);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = FUN_00404aa8(&local_54,local_3c);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = FUN_00404ab8(&local_54,local_40);
      if (iVar1 == 0) {
        return 0;
      }
      *(undefined4 *)(puVar7 + 2) = local_44;
      puVar7[1] = uStack_4c;
      *puVar7 = local_54;
      return 1;
    }
  }
LAB_003f42e0:
  FUN_003f2ae0(lVar5);
  return 0;
}


// ===== 003f4300  FUN_003f4300 =====

long FUN_003f4300(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *local_30;
  int local_24;
  undefined1 auStack_8 [8];
  
  iVar1 = FUN_003dff4c(0,auStack_8,&local_24,&local_30,param_1);
  if (iVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_003f2b38(0,auStack_8,(long)local_24);
    if (lVar2 == 0) {
      FUN_00379868();
      FUN_0037995c("crypto/rsa/rsa_backend.c",0x22e,"ossl_rsa_key_from_pkcs8");
      FUN_00379a5c(4,0x80004,0);
      return 0;
    }
    iVar1 = FUN_003f412c(lVar2,local_30);
    if (iVar1 == 0) {
      FUN_003fa6a0(lVar2);
      return 0;
    }
    FUN_003fb528(lVar2,0xf000);
    iVar1 = FUN_003dd5b4(*local_30);
    if (iVar1 == 0x390) {
      FUN_003fb544(lVar2,0x1000);
      return lVar2;
    }
    if (iVar1 == 6) {
      FUN_003fb544(lVar2,0);
      return lVar2;
    }
  }
  return lVar2;
}


// ===== 003f4438  FUN_003f4438 =====

undefined8 FUN_003f4438(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 != 0) {
    uVar1 = FUN_003f1bb0(param_1,param_3,param_4);
    return uVar1;
  }
  lVar2 = FUN_003cb140(param_2,param_3);
  if (lVar2 != 0) {
    uVar1 = thunk_FUN_003cb490(lVar2,param_4);
    return uVar1;
  }
  return 1;
}


// ===== 003f4490  FUN_003f4490 =====

undefined8 FUN_003f4490(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 != 0) {
    uVar1 = FUN_003f1d10(param_1,param_3,param_4);
    return uVar1;
  }
  lVar2 = FUN_003cb140(param_2,param_3);
  if (lVar2 != 0) {
    uVar1 = thunk_FUN_003cbdc4(lVar2,param_4);
    return uVar1;
  }
  return 1;
}


// ===== 003f44e8  FUN_003f44e8 =====

undefined8 FUN_003f44e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 != 0) {
    uVar1 = FUN_003f230c(param_1,param_3,param_4,0);
    return uVar1;
  }
  lVar2 = FUN_003cb140(param_2,param_3);
  if (lVar2 != 0) {
    uVar1 = FUN_003cd630(lVar2,param_4);
    return uVar1;
  }
  return 1;
}


// ===== 003f4544  FUN_003f4544 =====

undefined8
FUN_003f4544(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 != 0) {
    uVar1 = FUN_003f2580(param_1,param_3,param_4,param_5);
    return uVar1;
  }
  lVar2 = FUN_003cb140(param_2,param_3);
  if (lVar2 != 0) {
    uVar1 = FUN_003cd7b8(lVar2,param_4,param_5);
    return uVar1;
  }
  return 1;
}


// ===== 003f45a8  FUN_003f45a8 =====

undefined8
FUN_003f45a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 != 0) {
    uVar1 = FUN_003f21e0(param_1,param_3,param_4,param_5);
    return uVar1;
  }
  lVar2 = FUN_003cb140(param_2,param_3);
  if (lVar2 != 0) {
    if (*(ulong *)(lVar2 + 0x18) < param_5) {
      FUN_00379868();
      FUN_0037995c("crypto/param_build_set.c",0x4d,"ossl_param_build_set_bn_pad");
      FUN_00379a5c(0xf,0x74,0);
      return 0;
    }
    *(ulong *)(lVar2 + 0x18) = param_5;
    uVar1 = FUN_003ccd24(lVar2,param_4);
    return uVar1;
  }
  return 1;
}


// ===== 003f4654  FUN_003f4654 =====

ulong FUN_003f4654(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  if (param_1 != 0) {
    uVar2 = FUN_003f1e9c(param_1,param_3,param_4);
    return uVar2;
  }
  lVar3 = FUN_003cb140(param_2,param_3);
  if (lVar3 != 0) {
    iVar1 = FUN_003ccd24(lVar3,param_4);
    return (ulong)(0 < iVar1);
  }
  return 1;
}


// ===== 003f46b0  FUN_003f46b0 =====

undefined8 FUN_003f46b0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar1 = FUN_0040caf8(param_4);
  if (param_1 == 0) {
    if (0 < (int)uVar1) {
      uVar5 = 0;
      do {
        if (*(long *)(param_3 + uVar5 * 8) == 0) {
          return 1;
        }
        lVar2 = FUN_0040cb0c(param_4,uVar5 & 0xffffffff);
        lVar4 = FUN_003cb140(param_2,*(undefined8 *)(param_3 + uVar5 * 8));
        if (((lVar4 != 0) && (lVar2 != 0)) && (uVar3 = FUN_003ccd24(lVar4,lVar2), (int)uVar3 == 0))
        {
          return uVar3;
        }
        uVar5 = uVar5 + 1;
      } while (uVar1 != uVar5);
    }
  }
  else if (0 < (int)uVar1) {
    uVar5 = 0;
    do {
      if (*(long *)(param_3 + uVar5 * 8) == 0) {
        return 1;
      }
      lVar2 = FUN_0040cb0c(param_4,uVar5 & 0xffffffff);
      if ((lVar2 != 0) &&
         (uVar3 = FUN_003f1e9c(param_1,*(undefined8 *)(param_3 + uVar5 * 8),lVar2), (int)uVar3 == 0)
         ) {
        return uVar3;
      }
      uVar5 = uVar5 + 1;
    } while (uVar1 != uVar5);
  }
  return 1;
}


// ===== 003f47b0  thunk_FUN_00406024 =====

int thunk_FUN_00406024(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uStack_24;
  
  if (*(long *)(param_1 + 0x28) == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x30) == 0) {
    return 0;
  }
  iVar1 = FUN_0038f2c0();
  if (iVar1 < 0x4001) {
    iVar2 = FUN_003908a0(*(undefined8 *)(param_1 + 0x28));
    if (iVar2 == 0) {
      FUN_00379868();
      FUN_0037995c("crypto/rsa/rsa_sp800_56b_check.c",0x134,"ossl_rsa_sp800_56b_check_public");
      uVar6 = 0xae;
      goto LAB_004061a0;
    }
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    iVar2 = FUN_003908a0(uVar6);
    if (iVar2 != 0) {
      uVar3 = FUN_0038f23c();
      iVar2 = FUN_00390208(uVar6,uVar3);
      if (0 < iVar2) {
        lVar4 = FUN_00391448(*(undefined8 *)(param_1 + 8));
        lVar5 = FUN_0038f584();
        uVar7 = 0;
        if ((lVar4 == 0) || (lVar5 == 0)) goto LAB_0040621c;
        uVar3 = *(undefined8 *)(param_1 + 0x28);
        uVar6 = FUN_003f5048();
        iVar2 = FUN_00396b90(lVar5,uVar3,uVar6,lVar4);
        if ((iVar2 == 0) || (iVar2 = FUN_00390824(lVar5), iVar2 == 0)) {
          FUN_00379868();
          uVar6 = 0x148;
        }
        else {
          iVar2 = FUN_003f5e0c(*(undefined8 *)(param_1 + 0x28),5,lVar4,0,1,&uStack_24);
          if (iVar2 == 1) {
            if (uStack_24 == 2) {
              uVar7 = 1;
              goto LAB_0040621c;
            }
            if ((iVar1 < 0x200) && (uVar7 = uStack_24, uStack_24 == 1)) goto LAB_0040621c;
          }
          FUN_00379868();
          uVar6 = 0x155;
        }
        FUN_0037995c("crypto/rsa/rsa_sp800_56b_check.c",uVar6,"ossl_rsa_sp800_56b_check_public");
        FUN_00379a5c(4,0xae,0);
        uVar7 = 0;
LAB_0040621c:
        FUN_0038f4f4(lVar5);
        FUN_00391550(lVar4);
        return uVar7;
      }
    }
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_sp800_56b_check.c",0x139,"ossl_rsa_sp800_56b_check_public");
    uVar6 = 0xb2;
  }
  else {
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_sp800_56b_check.c",0x125,"ossl_rsa_sp800_56b_check_public");
    uVar6 = 0x69;
  }
LAB_004061a0:
  FUN_00379a5c(4,uVar6,0);
  return 0;
}


// ===== 003f47b4  thunk_FUN_00406248 =====

ulong thunk_FUN_00406248(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x38);
  if ((lVar4 != 0) && (*(long *)(param_1 + 0x28) != 0)) {
    uVar2 = FUN_0038f23c();
    iVar1 = FUN_00390208(lVar4,uVar2);
    if (-1 < iVar1) {
      uVar3 = FUN_00390208(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x28));
      return uVar3 >> 0x1f & 1;
    }
  }
  return 0;
}


// ===== 003f47b8  FUN_003f47b8 =====

bool FUN_003f47b8(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_003f47d8(param_1,0);
  return 0 < iVar1;
}


// ===== 003f47d8  FUN_003f47d8 =====

/* WARNING: Type propagation algorithm not settling */

uint FUN_003f47d8(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined8 uVar16;
  
  if ((((*(long *)(param_1 + 0x40) == 0) || (*(long *)(param_1 + 0x48) == 0)) ||
      (*(long *)(param_1 + 0x28) == 0)) ||
     ((*(long *)(param_1 + 0x30) == 0 || (*(long *)(param_1 + 0x38) == 0)))) {
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_chk.c",0x1f,"rsa_validate_keypair_multiprime");
    uVar12 = 0x93;
    goto LAB_003f48ac;
  }
  if (*(int *)(param_1 + 0x10) == 1) {
    iVar1 = FUN_0040caf8(*(undefined8 *)(param_1 + 0x88));
    if (0 < iVar1) {
      FUN_0038f2c0(*(undefined8 *)(param_1 + 0x28));
      iVar2 = FUN_003fc720();
      if (iVar1 + 2 <= iVar2) goto LAB_003f48dc;
    }
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_chk.c",0x28,"rsa_validate_keypair_multiprime");
    uVar12 = 0xa7;
LAB_003f48ac:
    FUN_00379a5c(4,uVar12,0);
    return 0;
  }
  iVar1 = 0;
LAB_003f48dc:
  lVar4 = FUN_0038f584();
  lVar5 = FUN_0038f584();
  lVar6 = FUN_0038f584();
  lVar7 = FUN_0038f584();
  lVar8 = FUN_0038f584();
  lVar9 = FUN_00391448(*(undefined8 *)(param_1 + 8));
  if (((lVar4 == 0) || (lVar5 == 0)) ||
     ((lVar6 == 0 || (((lVar7 == 0 || (lVar8 == 0)) || (lVar9 == 0)))))) {
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_chk.c",0x36,"rsa_validate_keypair_multiprime");
    FUN_00379a5c(4,0x80003,0);
    uVar15 = 0xffffffff;
    goto LAB_003f4fdc;
  }
  iVar2 = FUN_00390824(*(undefined8 *)(param_1 + 0x30));
  if (iVar2 != 0) {
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_chk.c",0x3c,"rsa_validate_keypair_multiprime");
    FUN_00379a5c(4,0x65,0);
  }
  uVar15 = (uint)(iVar2 == 0);
  iVar2 = FUN_003908a0(*(undefined8 *)(param_1 + 0x30));
  if (iVar2 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_chk.c",0x40,"rsa_validate_keypair_multiprime");
    FUN_00379a5c(4,0x65,0);
    uVar15 = 0;
    iVar2 = FUN_003f5dbc(*(undefined8 *)(param_1 + 0x40),lVar9,param_2);
    if (iVar2 != 1) goto LAB_003f4a3c;
LAB_003f49d0:
    iVar2 = FUN_003f5dbc(*(undefined8 *)(param_1 + 0x48),lVar9,param_2);
  }
  else {
    iVar2 = FUN_003f5dbc(*(undefined8 *)(param_1 + 0x40),lVar9,param_2);
    if (iVar2 == 1) goto LAB_003f49d0;
LAB_003f4a3c:
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_chk.c",0x46,"rsa_validate_keypair_multiprime");
    FUN_00379a5c(4,0x80,0);
    uVar15 = 0;
    iVar2 = FUN_003f5dbc(*(undefined8 *)(param_1 + 0x48),lVar9,param_2);
  }
  if (iVar2 != 1) {
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_chk.c",0x4c,"rsa_validate_keypair_multiprime");
    FUN_00379a5c(4,0x81,0);
    uVar15 = 0;
  }
  if (iVar1 != 0) {
    iVar2 = 0;
    do {
      puVar10 = (undefined8 *)FUN_0040cb0c(*(undefined8 *)(param_1 + 0x88),iVar2);
      iVar3 = FUN_003f5dbc(*puVar10,lVar9,param_2);
      if (iVar3 != 1) {
        FUN_00379868();
        FUN_0037995c("crypto/rsa/rsa_chk.c",0x54,"rsa_validate_keypair_multiprime");
        FUN_00379a5c(4,0xaa,0);
        uVar15 = 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar1 != iVar2);
  }
  iVar2 = FUN_00392a80(lVar4,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),lVar9);
  if (iVar2 != 0) {
    if (iVar1 != 0) {
      iVar2 = 0;
      do {
        puVar10 = (undefined8 *)FUN_0040cb0c(*(undefined8 *)(param_1 + 0x88),iVar2);
        iVar3 = FUN_00392a80(lVar4,lVar4,*puVar10,lVar9);
        if (iVar3 == 0) goto LAB_003f4fd4;
        iVar2 = iVar2 + 1;
      } while (iVar1 != iVar2);
    }
    iVar2 = FUN_00390208(lVar4,*(undefined8 *)(param_1 + 0x28));
    if (iVar2 != 0) {
      FUN_00379868();
      uVar13 = 0x69;
      if (iVar1 != 0) {
        uVar13 = 0x67;
      }
      uVar14 = 0x7f;
      if (iVar1 != 0) {
        uVar14 = 0xac;
      }
      FUN_0037995c("crypto/rsa/rsa_chk.c",uVar13,"rsa_validate_keypair_multiprime");
      FUN_00379a5c(4,uVar14,0);
      uVar15 = 0;
    }
    uVar16 = *(undefined8 *)(param_1 + 0x40);
    uVar12 = FUN_0038f23c();
    iVar2 = FUN_00398f34(lVar4,uVar16,uVar12);
    if (iVar2 != 0) {
      uVar16 = *(undefined8 *)(param_1 + 0x48);
      uVar12 = FUN_0038f23c();
      iVar2 = FUN_00398f34(lVar5,uVar16,uVar12);
      if (iVar2 != 0) {
        iVar2 = FUN_00392a80(lVar7,lVar4,lVar5,lVar9);
        if (((iVar2 != 0) && (iVar2 = FUN_00396b90(lVar8,lVar4,lVar5,lVar9), iVar2 != 0)) &&
           (iVar2 = FUN_00397cac(lVar8,0,lVar7,lVar8,lVar9), iVar2 != 0)) {
          if (iVar1 != 0) {
            iVar2 = 0;
            do {
              puVar10 = (undefined8 *)FUN_0040cb0c(*(undefined8 *)(param_1 + 0x88),iVar2);
              uVar16 = *puVar10;
              uVar12 = FUN_0038f23c();
              iVar3 = FUN_00398f34(lVar6,uVar16,uVar12);
              if (((iVar3 == 0) || (iVar3 = FUN_00392a80(lVar7,lVar8,lVar6,lVar9), iVar3 == 0)) ||
                 ((iVar3 = FUN_00396b90(lVar8,lVar8,lVar6,lVar9), iVar3 == 0 ||
                  (iVar3 = FUN_00397cac(lVar8,0,lVar7,lVar8,lVar9), iVar3 == 0))))
              goto LAB_003f4eac;
              iVar2 = iVar2 + 1;
            } while (iVar1 != iVar2);
          }
          iVar2 = FUN_003977b4(lVar4,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x30)
                               ,lVar8,lVar9);
          if (iVar2 != 0) {
            iVar2 = FUN_00390824(lVar4);
            if (iVar2 == 0) {
              FUN_00379868();
              FUN_0037995c("crypto/rsa/rsa_chk.c",0x9d,"rsa_validate_keypair_multiprime");
              FUN_00379a5c(4,0x7b,0);
              uVar15 = 0;
            }
            if (((*(long *)(param_1 + 0x50) == 0) || (*(long *)(param_1 + 0x58) == 0)) ||
               (*(long *)(param_1 + 0x60) == 0)) {
joined_r0x003f4ec0:
              if (iVar1 != 0) {
                iVar2 = 0;
                do {
                  puVar10 = (undefined8 *)FUN_0040cb0c(*(undefined8 *)(param_1 + 0x88),iVar2);
                  uVar16 = *puVar10;
                  uVar12 = FUN_0038f23c();
                  iVar3 = FUN_00398f34(lVar4,uVar16,uVar12);
                  if ((iVar3 == 0) ||
                     (iVar3 = FUN_00397cac(0,lVar5,*(undefined8 *)(param_1 + 0x38),lVar4,lVar9),
                     iVar3 == 0)) goto LAB_003f4fd4;
                  iVar3 = FUN_00390208(lVar5,puVar10[1]);
                  if (iVar3 != 0) {
                    FUN_00379868();
                    FUN_0037995c("crypto/rsa/rsa_chk.c",0xd5,"rsa_validate_keypair_multiprime");
                    FUN_00379a5c(4,0xa9,0);
                    uVar15 = 0;
                  }
                  lVar11 = FUN_00396a18(lVar4,puVar10[3],*puVar10,lVar9);
                  if (lVar11 == 0) {
                    uVar15 = 0xffffffff;
                    break;
                  }
                  iVar3 = FUN_00390208(lVar4,puVar10[2]);
                  if (iVar3 != 0) {
                    FUN_00379868();
                    FUN_0037995c("crypto/rsa/rsa_chk.c",0xde,"rsa_validate_keypair_multiprime");
                    FUN_00379a5c(4,0xa8,0);
                    uVar15 = 0;
                  }
                  iVar2 = iVar2 + 1;
                } while (iVar1 != iVar2);
              }
              goto LAB_003f4fdc;
            }
            uVar16 = *(undefined8 *)(param_1 + 0x40);
            uVar12 = FUN_0038f23c();
            iVar2 = FUN_00398f34(lVar4,uVar16,uVar12);
            if ((iVar2 != 0) &&
               (iVar2 = FUN_00397cac(0,lVar5,*(undefined8 *)(param_1 + 0x38),lVar4,lVar9),
               iVar2 != 0)) {
              iVar2 = FUN_00390208(lVar5,*(undefined8 *)(param_1 + 0x50));
              if (iVar2 != 0) {
                FUN_00379868();
                FUN_0037995c("crypto/rsa/rsa_chk.c",0xac,"rsa_validate_keypair_multiprime");
                FUN_00379a5c(4,0x7c,0);
                uVar15 = 0;
              }
              uVar16 = *(undefined8 *)(param_1 + 0x48);
              uVar12 = FUN_0038f23c();
              iVar2 = FUN_00398f34(lVar4,uVar16,uVar12);
              if ((iVar2 != 0) &&
                 (iVar2 = FUN_00397cac(0,lVar5,*(undefined8 *)(param_1 + 0x38),lVar4,lVar9),
                 iVar2 != 0)) {
                iVar2 = FUN_00390208(lVar5,*(undefined8 *)(param_1 + 0x58));
                if (iVar2 != 0) {
                  FUN_00379868();
                  FUN_0037995c("crypto/rsa/rsa_chk.c",0xba,"rsa_validate_keypair_multiprime");
                  FUN_00379a5c(4,0x7d,0);
                  uVar15 = 0;
                }
                lVar11 = FUN_00396a18(lVar4,*(undefined8 *)(param_1 + 0x48),
                                      *(undefined8 *)(param_1 + 0x40),lVar9);
                if (lVar11 != 0) {
                  iVar2 = FUN_00390208(lVar4,*(undefined8 *)(param_1 + 0x60));
                  if (iVar2 != 0) {
                    FUN_00379868();
                    FUN_0037995c("crypto/rsa/rsa_chk.c",0xc4,"rsa_validate_keypair_multiprime");
                    FUN_00379a5c(4,0x7e,0);
                    uVar15 = 0;
                  }
                  goto joined_r0x003f4ec0;
                }
              }
            }
            goto LAB_003f4fd4;
          }
        }
LAB_003f4eac:
        uVar15 = 0xffffffff;
        goto LAB_003f4fdc;
      }
    }
  }
LAB_003f4fd4:
  uVar15 = 0xffffffff;
LAB_003f4fdc:
  FUN_0038f4f4(lVar4);
  FUN_0038f4f4(lVar5);
  FUN_0038f4f4(lVar6);
  FUN_0038f4f4(lVar7);
  FUN_0038f4f4(lVar8);
  FUN_00391550(lVar9);
  return uVar15;
}


// ===== 003f503c  FUN_003f503c =====

void FUN_003f503c(undefined8 param_1)

{
  FUN_003f47d8(param_1,0);
  return;
}


// ===== 003f5044  thunk_FUN_003f47d8 =====

/* WARNING: Type propagation algorithm not settling */

uint thunk_FUN_003f47d8(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined8 uVar16;
  
  if ((((*(long *)(param_1 + 0x40) == 0) || (*(long *)(param_1 + 0x48) == 0)) ||
      (*(long *)(param_1 + 0x28) == 0)) ||
     ((*(long *)(param_1 + 0x30) == 0 || (*(long *)(param_1 + 0x38) == 0)))) {
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_chk.c",0x1f,"rsa_validate_keypair_multiprime");
    uVar12 = 0x93;
    goto LAB_003f48ac;
  }
  if (*(int *)(param_1 + 0x10) == 1) {
    iVar1 = FUN_0040caf8(*(undefined8 *)(param_1 + 0x88));
    if (0 < iVar1) {
      FUN_0038f2c0(*(undefined8 *)(param_1 + 0x28));
      iVar2 = FUN_003fc720();
      if (iVar1 + 2 <= iVar2) goto LAB_003f48dc;
    }
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_chk.c",0x28,"rsa_validate_keypair_multiprime");
    uVar12 = 0xa7;
LAB_003f48ac:
    FUN_00379a5c(4,uVar12,0);
    return 0;
  }
  iVar1 = 0;
LAB_003f48dc:
  lVar4 = FUN_0038f584();
  lVar5 = FUN_0038f584();
  lVar6 = FUN_0038f584();
  lVar7 = FUN_0038f584();
  lVar8 = FUN_0038f584();
  lVar9 = FUN_00391448(*(undefined8 *)(param_1 + 8));
  if (((lVar4 == 0) || (lVar5 == 0)) ||
     ((lVar6 == 0 || (((lVar7 == 0 || (lVar8 == 0)) || (lVar9 == 0)))))) {
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_chk.c",0x36,"rsa_validate_keypair_multiprime");
    FUN_00379a5c(4,0x80003,0);
    uVar15 = 0xffffffff;
    goto LAB_003f4fdc;
  }
  iVar2 = FUN_00390824(*(undefined8 *)(param_1 + 0x30));
  if (iVar2 != 0) {
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_chk.c",0x3c,"rsa_validate_keypair_multiprime");
    FUN_00379a5c(4,0x65,0);
  }
  uVar15 = (uint)(iVar2 == 0);
  iVar2 = FUN_003908a0(*(undefined8 *)(param_1 + 0x30));
  if (iVar2 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_chk.c",0x40,"rsa_validate_keypair_multiprime");
    FUN_00379a5c(4,0x65,0);
    uVar15 = 0;
    iVar2 = FUN_003f5dbc(*(undefined8 *)(param_1 + 0x40),lVar9,param_2);
    if (iVar2 != 1) goto LAB_003f4a3c;
LAB_003f49d0:
    iVar2 = FUN_003f5dbc(*(undefined8 *)(param_1 + 0x48),lVar9,param_2);
  }
  else {
    iVar2 = FUN_003f5dbc(*(undefined8 *)(param_1 + 0x40),lVar9,param_2);
    if (iVar2 == 1) goto LAB_003f49d0;
LAB_003f4a3c:
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_chk.c",0x46,"rsa_validate_keypair_multiprime");
    FUN_00379a5c(4,0x80,0);
    uVar15 = 0;
    iVar2 = FUN_003f5dbc(*(undefined8 *)(param_1 + 0x48),lVar9,param_2);
  }
  if (iVar2 != 1) {
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_chk.c",0x4c,"rsa_validate_keypair_multiprime");
    FUN_00379a5c(4,0x81,0);
    uVar15 = 0;
  }
  if (iVar1 != 0) {
    iVar2 = 0;
    do {
      puVar10 = (undefined8 *)FUN_0040cb0c(*(undefined8 *)(param_1 + 0x88),iVar2);
      iVar3 = FUN_003f5dbc(*puVar10,lVar9,param_2);
      if (iVar3 != 1) {
        FUN_00379868();
        FUN_0037995c("crypto/rsa/rsa_chk.c",0x54,"rsa_validate_keypair_multiprime");
        FUN_00379a5c(4,0xaa,0);
        uVar15 = 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar1 != iVar2);
  }
  iVar2 = FUN_00392a80(lVar4,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),lVar9);
  if (iVar2 != 0) {
    if (iVar1 != 0) {
      iVar2 = 0;
      do {
        puVar10 = (undefined8 *)FUN_0040cb0c(*(undefined8 *)(param_1 + 0x88),iVar2);
        iVar3 = FUN_00392a80(lVar4,lVar4,*puVar10,lVar9);
        if (iVar3 == 0) goto LAB_003f4fd4;
        iVar2 = iVar2 + 1;
      } while (iVar1 != iVar2);
    }
    iVar2 = FUN_00390208(lVar4,*(undefined8 *)(param_1 + 0x28));
    if (iVar2 != 0) {
      FUN_00379868();
      uVar13 = 0x69;
      if (iVar1 != 0) {
        uVar13 = 0x67;
      }
      uVar14 = 0x7f;
      if (iVar1 != 0) {
        uVar14 = 0xac;
      }
      FUN_0037995c("crypto/rsa/rsa_chk.c",uVar13,"rsa_validate_keypair_multiprime");
      FUN_00379a5c(4,uVar14,0);
      uVar15 = 0;
    }
    uVar16 = *(undefined8 *)(param_1 + 0x40);
    uVar12 = FUN_0038f23c();
    iVar2 = FUN_00398f34(lVar4,uVar16,uVar12);
    if (iVar2 != 0) {
      uVar16 = *(undefined8 *)(param_1 + 0x48);
      uVar12 = FUN_0038f23c();
      iVar2 = FUN_00398f34(lVar5,uVar16,uVar12);
      if (iVar2 != 0) {
        iVar2 = FUN_00392a80(lVar7,lVar4,lVar5,lVar9);
        if (((iVar2 != 0) && (iVar2 = FUN_00396b90(lVar8,lVar4,lVar5,lVar9), iVar2 != 0)) &&
           (iVar2 = FUN_00397cac(lVar8,0,lVar7,lVar8,lVar9), iVar2 != 0)) {
          if (iVar1 != 0) {
            iVar2 = 0;
            do {
              puVar10 = (undefined8 *)FUN_0040cb0c(*(undefined8 *)(param_1 + 0x88),iVar2);
              uVar16 = *puVar10;
              uVar12 = FUN_0038f23c();
              iVar3 = FUN_00398f34(lVar6,uVar16,uVar12);
              if (((iVar3 == 0) || (iVar3 = FUN_00392a80(lVar7,lVar8,lVar6,lVar9), iVar3 == 0)) ||
                 ((iVar3 = FUN_00396b90(lVar8,lVar8,lVar6,lVar9), iVar3 == 0 ||
                  (iVar3 = FUN_00397cac(lVar8,0,lVar7,lVar8,lVar9), iVar3 == 0))))
              goto LAB_003f4eac;
              iVar2 = iVar2 + 1;
            } while (iVar1 != iVar2);
          }
          iVar2 = FUN_003977b4(lVar4,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x30)
                               ,lVar8,lVar9);
          if (iVar2 != 0) {
            iVar2 = FUN_00390824(lVar4);
            if (iVar2 == 0) {
              FUN_00379868();
              FUN_0037995c("crypto/rsa/rsa_chk.c",0x9d,"rsa_validate_keypair_multiprime");
              FUN_00379a5c(4,0x7b,0);
              uVar15 = 0;
            }
            if (((*(long *)(param_1 + 0x50) == 0) || (*(long *)(param_1 + 0x58) == 0)) ||
               (*(long *)(param_1 + 0x60) == 0)) {
joined_r0x003f4ec0:
              if (iVar1 != 0) {
                iVar2 = 0;
                do {
                  puVar10 = (undefined8 *)FUN_0040cb0c(*(undefined8 *)(param_1 + 0x88),iVar2);
                  uVar16 = *puVar10;
                  uVar12 = FUN_0038f23c();
                  iVar3 = FUN_00398f34(lVar4,uVar16,uVar12);
                  if ((iVar3 == 0) ||
                     (iVar3 = FUN_00397cac(0,lVar5,*(undefined8 *)(param_1 + 0x38),lVar4,lVar9),
                     iVar3 == 0)) goto LAB_003f4fd4;
                  iVar3 = FUN_00390208(lVar5,puVar10[1]);
                  if (iVar3 != 0) {
                    FUN_00379868();
                    FUN_0037995c("crypto/rsa/rsa_chk.c",0xd5,"rsa_validate_keypair_multiprime");
                    FUN_00379a5c(4,0xa9,0);
                    uVar15 = 0;
                  }
                  lVar11 = FUN_00396a18(lVar4,puVar10[3],*puVar10,lVar9);
                  if (lVar11 == 0) {
                    uVar15 = 0xffffffff;
                    break;
                  }
                  iVar3 = FUN_00390208(lVar4,puVar10[2]);
                  if (iVar3 != 0) {
                    FUN_00379868();
                    FUN_0037995c("crypto/rsa/rsa_chk.c",0xde,"rsa_validate_keypair_multiprime");
                    FUN_00379a5c(4,0xa8,0);
                    uVar15 = 0;
                  }
                  iVar2 = iVar2 + 1;
                } while (iVar1 != iVar2);
              }
              goto LAB_003f4fdc;
            }
            uVar16 = *(undefined8 *)(param_1 + 0x40);
            uVar12 = FUN_0038f23c();
            iVar2 = FUN_00398f34(lVar4,uVar16,uVar12);
            if ((iVar2 != 0) &&
               (iVar2 = FUN_00397cac(0,lVar5,*(undefined8 *)(param_1 + 0x38),lVar4,lVar9),
               iVar2 != 0)) {
              iVar2 = FUN_00390208(lVar5,*(undefined8 *)(param_1 + 0x50));
              if (iVar2 != 0) {
                FUN_00379868();
                FUN_0037995c("crypto/rsa/rsa_chk.c",0xac,"rsa_validate_keypair_multiprime");
                FUN_00379a5c(4,0x7c,0);
                uVar15 = 0;
              }
              uVar16 = *(undefined8 *)(param_1 + 0x48);
              uVar12 = FUN_0038f23c();
              iVar2 = FUN_00398f34(lVar4,uVar16,uVar12);
              if ((iVar2 != 0) &&
                 (iVar2 = FUN_00397cac(0,lVar5,*(undefined8 *)(param_1 + 0x38),lVar4,lVar9),
                 iVar2 != 0)) {
                iVar2 = FUN_00390208(lVar5,*(undefined8 *)(param_1 + 0x58));
                if (iVar2 != 0) {
                  FUN_00379868();
                  FUN_0037995c("crypto/rsa/rsa_chk.c",0xba,"rsa_validate_keypair_multiprime");
                  FUN_00379a5c(4,0x7d,0);
                  uVar15 = 0;
                }
                lVar11 = FUN_00396a18(lVar4,*(undefined8 *)(param_1 + 0x48),
                                      *(undefined8 *)(param_1 + 0x40),lVar9);
                if (lVar11 != 0) {
                  iVar2 = FUN_00390208(lVar4,*(undefined8 *)(param_1 + 0x60));
                  if (iVar2 != 0) {
                    FUN_00379868();
                    FUN_0037995c("crypto/rsa/rsa_chk.c",0xc4,"rsa_validate_keypair_multiprime");
                    FUN_00379a5c(4,0x7e,0);
                    uVar15 = 0;
                  }
                  goto joined_r0x003f4ec0;
                }
              }
            }
            goto LAB_003f4fd4;
          }
        }
LAB_003f4eac:
        uVar15 = 0xffffffff;
        goto LAB_003f4fdc;
      }
    }
  }
LAB_003f4fd4:
  uVar15 = 0xffffffff;
LAB_003f4fdc:
  FUN_0038f4f4(lVar4);
  FUN_0038f4f4(lVar5);
  FUN_0038f4f4(lVar6);
  FUN_0038f4f4(lVar7);
  FUN_0038f4f4(lVar8);
  FUN_00391550(lVar9);
  return uVar15;
}


// ===== 003f5048  FUN_003f5048 =====

undefined ** FUN_003f5048(void)

{
  return &PTR_DAT_0077b5d0;
}


// ===== 003f5054  FUN_003f5054 =====

undefined8 FUN_003f5054(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  if (param_1 != (int *)0x0) {
    if (*param_1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x003f50b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(param_1 + 4))(param_2,param_3,param_1);
      return uVar1;
    }
    if (*param_1 != 1) {
      return 0;
    }
    if (*(code **)(param_1 + 4) != (code *)0x0) {
      (**(code **)(param_1 + 4))(param_2,param_3,*(undefined8 *)(param_1 + 2));
      return 1;
    }
  }
  return 1;
}


// ===== 003f50c4  FUN_003f50c4 =====

ulong FUN_003f50c4(undefined8 param_1,uint param_2,int param_3,long param_4,long param_5,
                  int *param_6,undefined8 param_7)

{
  ushort *puVar1;
  uint uVar2;
  ulong uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  int iVar16;
  ulong uVar17;
  ushort *puVar18;
  uint uVar19;
  long lVar20;
  ushort *puVar21;
  ulong uVar22;
  undefined2 *puVar23;
  ulong uVar24;
  ulong uVar25;
  int local_9c;
  
  iVar16 = 0x80;
  if ((int)param_2 < 0x801) {
    iVar16 = 0x40;
  }
  if ((int)param_2 < 2) {
    FUN_00379868();
    uVar15 = 0x87;
  }
  else {
    if ((((5 < param_2) || (param_2 == 3)) || (param_3 == 0)) || (param_4 != 0)) {
      lVar9 = FUN_003c8474(0x1000,"crypto/bn/bn_prime.c",0x93);
      if (lVar9 == 0) {
        return 0;
      }
      FUN_003916e0(param_7);
      lVar10 = FUN_00391898(param_7);
      if (lVar10 != 0) {
        uVar6 = 0x400;
        if (0x1000 < param_2) {
          uVar6 = 0x800;
        }
        uVar15 = 3;
        if (param_3 == 0) {
          uVar15 = 1;
        }
        local_9c = 0;
        uVar3 = 3;
        if (param_3 != 0) {
          uVar3 = 5;
        }
        uVar19 = 0x40;
        if (0x200 < param_2) {
          uVar19 = 0x80;
        }
        uVar2 = 0x180;
        if (0x800 < param_2) {
          uVar2 = uVar6;
        }
        if (0x400 < (int)param_2) {
          uVar19 = uVar2;
        }
        uVar17 = (ulong)uVar19;
        lVar20 = uVar17 - 1;
        puVar1 = (ushort *)(lVar9 + 2);
        iVar5 = local_9c;
LAB_003f5244:
        local_9c = iVar5;
        if (param_4 == 0) {
          uVar4 = *(ushort *)(&DAT_0020d508 + (ulong)(uVar19 - 1) * 2);
          iVar5 = FUN_003f6558(param_1,param_2,1,1,0,param_7);
          if (iVar5 != 0) {
            uVar12 = ~(ulong)uVar4;
            uVar25 = uVar12;
            if (param_3 != 0) {
LAB_003f5590:
              iVar5 = FUN_003902b8(uVar25,param_1,1);
              if (iVar5 != 0) {
                puVar23 = &DAT_0020d50a;
                puVar18 = puVar1;
                lVar11 = lVar20;
                do {
                  lVar14 = FUN_00399074(param_1,*puVar23);
                  if (lVar14 == -1) goto LAB_003f5a3c;
                  lVar11 = lVar11 + -1;
                  *puVar18 = (ushort)lVar14;
                  puVar23 = puVar23 + 1;
                  puVar18 = puVar18 + 1;
                } while (lVar11 != 0);
                uVar25 = 0;
                if (param_2 < 0x20) {
                  do {
                    if (uVar25 >> 0x1f == 0) {
                      puVar21 = &DAT_0020d50a;
                      puVar18 = puVar1;
                      lVar11 = lVar20;
                      while( true ) {
                        uVar24 = (ulong)*puVar21;
                        lVar14 = FUN_0038f9c0(param_1);
                        if (lVar14 + uVar25 <= uVar24 * uVar24 &&
                            uVar24 * uVar24 - (lVar14 + uVar25) != 0) goto LAB_003f56d4;
                        uVar22 = 0;
                        if (uVar24 != 0) {
                          uVar22 = (uVar25 + *puVar18) / uVar24;
                        }
                        if ((uVar25 + *puVar18) - uVar22 * uVar24 < 2) break;
                        lVar11 = lVar11 + -1;
                        puVar18 = puVar18 + 1;
                        puVar21 = puVar21 + 1;
                        if (lVar11 == 0) goto LAB_003f56d4;
                      }
                    }
                    else {
                      puVar18 = puVar1;
                      puVar21 = &DAT_0020d50a;
                      lVar11 = lVar20;
                      while( true ) {
                        uVar22 = (ulong)*puVar21;
                        uVar24 = 0;
                        if (uVar22 != 0) {
                          uVar24 = (uVar25 + *puVar18) / uVar22;
                        }
                        if ((uVar25 + *puVar18) - uVar24 * uVar22 < 2) break;
                        lVar11 = lVar11 + -1;
                        puVar18 = puVar18 + 1;
                        puVar21 = puVar21 + 1;
                        if (lVar11 == 0) goto LAB_003f56d4;
                      }
                    }
                    uVar25 = uVar25 + 4;
                  } while (uVar25 <= uVar12);
                }
                else {
                  do {
                    puVar18 = puVar1;
                    puVar21 = &DAT_0020d50a;
                    lVar11 = lVar20;
                    while( true ) {
                      uVar22 = (ulong)*puVar21;
                      uVar24 = 0;
                      if (uVar22 != 0) {
                        uVar24 = (uVar25 + *puVar18) / uVar22;
                      }
                      if ((uVar25 + *puVar18) - uVar24 * uVar22 < 2) break;
                      lVar11 = lVar11 + -1;
                      puVar18 = puVar18 + 1;
                      puVar21 = puVar21 + 1;
                      if (lVar11 == 0) goto LAB_003f56d4;
                    }
                    uVar25 = uVar25 + 4;
                  } while (uVar25 <= uVar12);
                }
                goto LAB_003f56f4;
              }
              goto LAB_003f5a3c;
            }
            uVar24 = 1;
            if (param_2 < 0x20) {
LAB_003f5728:
              while (lVar11 = FUN_00399074(param_1,*(undefined2 *)(&DAT_0020d508 + uVar24 * 2)),
                    lVar11 != -1) {
                *(short *)(lVar9 + uVar24 * 2) = (short)lVar11;
                uVar24 = uVar24 + 1;
                if (uVar24 == uVar17) {
                  uVar25 = 0;
                  do {
                    if (uVar25 >> 0x1f == 0) {
                      puVar18 = puVar1;
                      lVar11 = lVar20;
                      puVar21 = &DAT_0020d50a;
                      while( true ) {
                        uVar24 = (ulong)*puVar21;
                        lVar14 = FUN_0038f9c0(param_1);
                        if (lVar14 + uVar25 <= uVar24 * uVar24 &&
                            uVar24 * uVar24 - (lVar14 + uVar25) != 0) goto LAB_003f57f8;
                        uVar22 = 0;
                        if (uVar24 != 0) {
                          uVar22 = (uVar25 + *puVar18) / uVar24;
                        }
                        if (uVar25 + *puVar18 == uVar22 * uVar24) break;
                        lVar11 = lVar11 + -1;
                        puVar18 = puVar18 + 1;
                        puVar21 = puVar21 + 1;
                        if (lVar11 == 0) goto LAB_003f57f8;
                      }
                    }
                    else {
                      puVar18 = puVar1;
                      puVar21 = &DAT_0020d50a;
                      lVar11 = lVar20;
                      while( true ) {
                        uVar22 = (ulong)*puVar21;
                        uVar24 = 0;
                        if (uVar22 != 0) {
                          uVar24 = (uVar25 + *puVar18) / uVar22;
                        }
                        if (uVar25 + *puVar18 == uVar24 * uVar22) break;
                        lVar11 = lVar11 + -1;
                        puVar18 = puVar18 + 1;
                        puVar21 = puVar21 + 1;
                        if (lVar11 == 0) goto LAB_003f57f8;
                      }
                    }
                    uVar25 = uVar25 + 2;
                  } while (uVar25 <= uVar12);
                  goto LAB_003f5820;
                }
              }
              goto LAB_003f5a3c;
            }
            do {
              do {
                lVar11 = FUN_00399074(param_1,*(undefined2 *)(&DAT_0020d508 + uVar24 * 2));
                if (lVar11 == -1) goto LAB_003f5a3c;
                *(short *)(lVar9 + uVar24 * 2) = (short)lVar11;
                uVar24 = uVar24 + 1;
              } while (uVar24 != uVar17);
              uVar25 = 0;
              do {
                puVar18 = puVar1;
                puVar21 = &DAT_0020d50a;
                lVar11 = lVar20;
                while( true ) {
                  uVar22 = (ulong)*puVar21;
                  uVar24 = 0;
                  if (uVar22 != 0) {
                    uVar24 = (uVar25 + *puVar18) / uVar22;
                  }
                  if (uVar25 + *puVar18 == uVar24 * uVar22) break;
                  lVar11 = lVar11 + -1;
                  puVar18 = puVar18 + 1;
                  puVar21 = puVar21 + 1;
                  if (lVar11 == 0) {
                    iVar5 = FUN_0039928c(param_1);
                    if (iVar5 == 0) goto LAB_003f5a3c;
                    uVar6 = FUN_0038f2c0(param_1);
                    if (uVar6 == param_2) goto LAB_003f551c;
                    goto LAB_003f58e0;
                  }
                }
                uVar25 = uVar25 + 2;
              } while (uVar25 <= uVar12);
LAB_003f58e0:
              iVar5 = FUN_003f6558(param_1,param_2,1,1,0,param_7);
              uVar25 = 0;
              uVar24 = 1;
            } while (iVar5 != 0);
            goto LAB_003f5a40;
          }
        }
        else {
          uVar25 = (ulong)*(ushort *)(&DAT_0020d508 + (ulong)(uVar19 - 1) * 2);
          FUN_003916e0(param_7);
          lVar11 = FUN_00391898(param_7);
          if (lVar11 != 0) {
            uVar12 = FUN_0038f9c0(param_4);
            if (uVar25 < uVar12) {
              uVar25 = FUN_0038f9c0(param_4);
            }
            iVar5 = FUN_003f6248(param_1,param_2,0,1,0,param_7);
            if (iVar5 != 0) {
              while ((iVar5 = FUN_00397cac(0,lVar11,param_1,param_4,param_7), iVar5 != 0 &&
                     (iVar5 = FUN_00398f34(param_1,param_1,lVar11), iVar5 != 0))) {
                if (param_5 == 0) {
                  iVar5 = FUN_0039928c(param_1,uVar15);
                }
                else {
                  iVar5 = FUN_00398c3c(param_1,param_1);
                }
                if ((iVar5 == 0) ||
                   (((iVar5 = FUN_0038f2c0(param_1), iVar5 < (int)param_2 ||
                     (uVar12 = FUN_0038f9c0(param_1), uVar12 < uVar3)) &&
                    (iVar5 = FUN_00398c3c(param_1,param_1,param_4), iVar5 == 0)))) break;
                puVar23 = &DAT_0020d50a;
                puVar18 = puVar1;
                lVar14 = lVar20;
                do {
                  lVar13 = FUN_00399074(param_1,*puVar23);
                  if (lVar13 == -1) goto LAB_003f5a30;
                  lVar14 = lVar14 + -1;
                  *puVar18 = (ushort)lVar13;
                  puVar23 = puVar23 + 1;
                  puVar18 = puVar18 + 1;
                } while (lVar14 != 0);
                uVar12 = 0;
                if (param_3 == 0) {
                  do {
                    if ((param_2 < 0x20) && (uVar12 >> 0x1f == 0)) {
                      puVar21 = &DAT_0020d50a;
                      puVar18 = puVar1;
                      lVar14 = lVar20;
                      while( true ) {
                        uVar24 = (ulong)*puVar21;
                        lVar13 = FUN_0038f9c0(param_1);
                        if (lVar13 + uVar12 <= uVar24 * uVar24 &&
                            uVar24 * uVar24 - (lVar13 + uVar12) != 0) goto LAB_003f54fc;
                        uVar22 = 0;
                        if (uVar24 != 0) {
                          uVar22 = (uVar12 + *puVar18) / uVar24;
                        }
                        if (uVar12 + *puVar18 == uVar22 * uVar24) break;
                        lVar14 = lVar14 + -1;
                        puVar18 = puVar18 + 1;
                        puVar21 = puVar21 + 1;
                        if (lVar14 == 0) goto LAB_003f54fc;
                      }
                    }
                    else {
                      puVar18 = puVar1;
                      puVar21 = &DAT_0020d50a;
                      lVar14 = lVar20;
                      while( true ) {
                        uVar22 = (ulong)*puVar21;
                        uVar24 = 0;
                        if (uVar22 != 0) {
                          uVar24 = (uVar12 + *puVar18) / uVar22;
                        }
                        if (uVar12 + *puVar18 == uVar24 * uVar22) break;
                        lVar14 = lVar14 + -1;
                        puVar18 = puVar18 + 1;
                        puVar21 = puVar21 + 1;
                        if (lVar14 == 0) goto LAB_003f54fc;
                      }
                    }
                    lVar14 = FUN_0038f9c0(param_4);
                    uVar12 = lVar14 + uVar12;
                  } while (uVar12 <= ~uVar25);
                }
                else {
                  do {
                    if ((param_2 < 0x20) && (uVar12 >> 0x1f == 0)) {
                      puVar21 = &DAT_0020d50a;
                      puVar18 = puVar1;
                      lVar14 = lVar20;
                      while( true ) {
                        uVar24 = (ulong)*puVar21;
                        lVar13 = FUN_0038f9c0(param_1);
                        if (lVar13 + uVar12 <= uVar24 * uVar24 &&
                            uVar24 * uVar24 - (lVar13 + uVar12) != 0) goto LAB_003f54fc;
                        uVar22 = 0;
                        if (uVar24 != 0) {
                          uVar22 = (uVar12 + *puVar18) / uVar24;
                        }
                        if ((uVar12 + *puVar18) - uVar22 * uVar24 < 2) break;
                        lVar14 = lVar14 + -1;
                        puVar18 = puVar18 + 1;
                        puVar21 = puVar21 + 1;
                        if (lVar14 == 0) goto LAB_003f54fc;
                      }
                    }
                    else {
                      puVar18 = puVar1;
                      puVar21 = &DAT_0020d50a;
                      lVar14 = lVar20;
                      while( true ) {
                        uVar22 = (ulong)*puVar21;
                        uVar24 = 0;
                        if (uVar22 != 0) {
                          uVar24 = (uVar12 + *puVar18) / uVar22;
                        }
                        if ((uVar12 + *puVar18) - uVar24 * uVar22 < 2) break;
                        lVar14 = lVar14 + -1;
                        puVar18 = puVar18 + 1;
                        puVar21 = puVar21 + 1;
                        if (lVar14 == 0) goto LAB_003f54fc;
                      }
                    }
                    lVar14 = FUN_0038f9c0(param_4);
                    uVar12 = lVar14 + uVar12;
                  } while (uVar12 <= ~uVar25);
                }
                iVar5 = FUN_003f6248(param_1,param_2,0,1,0,param_7);
                if (iVar5 == 0) break;
              }
            }
          }
LAB_003f5a30:
          FUN_0039180c(param_7);
        }
      }
LAB_003f5a3c:
      uVar25 = 0;
      goto LAB_003f5a40;
    }
    FUN_00379868();
    uVar15 = 0x8f;
  }
  FUN_0037995c("crypto/bn/bn_prime.c",uVar15,"BN_generate_prime_ex2");
  FUN_00379a5c(3,0x76,0);
  return 0;
LAB_003f56d4:
  iVar5 = FUN_0039928c(param_1,uVar25);
  if (iVar5 == 0) goto LAB_003f5a3c;
  uVar6 = FUN_0038f2c0(param_1);
  if (uVar6 == param_2) goto LAB_003f551c;
LAB_003f56f4:
  iVar5 = FUN_003f6558(param_1,param_2,1,1,0,param_7);
  uVar25 = 0;
  if (iVar5 == 0) goto LAB_003f5a40;
  goto LAB_003f5590;
LAB_003f57f8:
  iVar5 = FUN_0039928c(param_1,uVar25);
  if (iVar5 == 0) goto LAB_003f5a3c;
  uVar6 = FUN_0038f2c0(param_1);
  if (uVar6 != param_2) {
LAB_003f5820:
    iVar5 = FUN_003f6558(param_1,param_2,1,1,0,param_7);
    uVar25 = 0;
    uVar24 = 1;
    if (iVar5 == 0) goto LAB_003f5a40;
    goto LAB_003f5728;
  }
  goto LAB_003f551c;
LAB_003f54fc:
  iVar5 = FUN_0039928c(param_1,uVar12);
  FUN_0039180c(param_7);
  if (iVar5 == 0) goto LAB_003f5a3c;
LAB_003f551c:
  if (param_6 != (int *)0x0) {
    if (*param_6 == 2) {
      iVar5 = (**(code **)(param_6 + 4))(0,local_9c,param_6);
      if (iVar5 == 0) goto LAB_003f5a3c;
    }
    else {
      if (*param_6 != 1) goto LAB_003f5a3c;
      if (*(code **)(param_6 + 4) != (code *)0x0) {
        (**(code **)(param_6 + 4))(0,local_9c,*(undefined8 *)(param_6 + 2));
      }
    }
  }
  iVar5 = local_9c + 1;
  if (param_3 != 0) {
    iVar7 = FUN_003982f0(lVar10,param_1);
    iVar8 = iVar16;
    if (iVar7 == 0) goto LAB_003f5a3c;
    while( true ) {
      iVar7 = FUN_003f5a7c(param_1,1,param_7,0,param_6);
      if (iVar7 == -1) goto LAB_003f5a3c;
      if (iVar7 == 0) break;
      iVar7 = FUN_003f5a7c(lVar10,1,param_7,0,param_6);
      if (iVar7 == -1) goto LAB_003f5a3c;
      if (iVar7 == 0) break;
      if (param_6 != (int *)0x0) {
        if (*param_6 == 2) {
          iVar7 = (**(code **)(param_6 + 4))(2,local_9c,param_6);
          if (iVar7 == 0) goto LAB_003f5a3c;
        }
        else {
          if (*param_6 != 1) goto LAB_003f5a3c;
          if (*(code **)(param_6 + 4) != (code *)0x0) {
            (**(code **)(param_6 + 4))(2,local_9c,*(undefined8 *)(param_6 + 2));
          }
        }
      }
      iVar8 = iVar8 + -1;
      uVar25 = 1;
      if (iVar8 == 0) goto LAB_003f5a40;
    }
    goto LAB_003f5244;
  }
  iVar8 = FUN_003f5a7c(param_1,iVar16,param_7,0,param_6);
  if (iVar8 == 0) goto LAB_003f5244;
  uVar25 = 0;
  if (iVar8 != -1) {
    uVar25 = 1;
  }
LAB_003f5a40:
  FUN_003c86b4(uVar25,lVar9,"crypto/bn/bn_prime.c",0xcc);
  FUN_0039180c(param_7);
  return uVar25;
}


// ===== 003f5a7c  FUN_003f5a7c =====

ulong FUN_003f5a7c(undefined8 param_1,undefined4 param_2,long param_3,int param_4,int *param_5)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined2 *puVar8;
  int local_34;
  
  uVar4 = FUN_0038f23c();
  iVar2 = FUN_00390208(param_1,uVar4);
  if (iVar2 < 1) {
    return 0;
  }
  iVar2 = FUN_003908a0(param_1);
  if (iVar2 == 0) {
    uVar7 = FUN_00390858(param_1,2);
    return uVar7;
  }
  iVar2 = FUN_00390858(param_1,3);
  if (iVar2 != 0) {
    return 1;
  }
  if (param_4 != 0) {
    uVar3 = FUN_0038f2c0(param_1);
    if ((int)uVar3 < 0x201) {
      lVar6 = 0x40;
    }
    else if (uVar3 < 0x401) {
      lVar6 = 0x80;
    }
    else if (uVar3 < 0x801) {
      lVar6 = 0x180;
    }
    else {
      lVar6 = 0x400;
      if (0x1000 < uVar3) {
        lVar6 = 0x800;
      }
    }
    lVar6 = lVar6 + -1;
    puVar8 = &DAT_0020d50a;
    do {
      uVar1 = *puVar8;
      lVar5 = FUN_00399074(param_1,uVar1);
      if (lVar5 == -1) {
        return 0xffffffff;
      }
      if (lVar5 == 0) {
        uVar7 = FUN_00390858(param_1,uVar1);
        return uVar7;
      }
      lVar6 = lVar6 + -1;
      puVar8 = puVar8 + 1;
    } while (lVar6 != 0);
    if (param_5 != (int *)0x0) {
      if (*param_5 == 2) {
        iVar2 = (**(code **)(param_5 + 4))(1,0xffffffff,param_5);
        if (iVar2 == 0) {
          return 0xffffffff;
        }
      }
      else {
        if (*param_5 != 1) {
          return 0xffffffff;
        }
        if (*(code **)(param_5 + 4) != (code *)0x0) {
          (**(code **)(param_5 + 4))(1,0xffffffff,*(undefined8 *)(param_5 + 2));
        }
      }
    }
  }
  if (param_3 == 0) {
    param_3 = FUN_0039148c();
    lVar6 = param_3;
    if (param_3 != 0) goto LAB_003f5c54;
  }
  else {
    lVar6 = 0;
LAB_003f5c54:
    iVar2 = FUN_003f5e0c(param_1,param_2,param_3,param_5,0,&local_34);
    param_3 = lVar6;
    if (iVar2 != 0) {
      uVar7 = (ulong)(local_34 == 3);
      goto LAB_003f5c88;
    }
  }
  uVar7 = 0xffffffff;
LAB_003f5c88:
  FUN_00391550(param_3);
  return uVar7;
}


// ===== 003f5cac  FUN_003f5cac =====

undefined4
FUN_003f5cac(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_0039148c();
  if (lVar2 != 0) {
    uVar1 = FUN_003f50c4(param_1,param_2,param_3,param_4,param_5,param_6,lVar2);
    FUN_00391550(lVar2);
    return uVar1;
  }
  return 0;
}


// ===== 003f5d48  FUN_003f5d48 =====

void FUN_003f5d48(undefined8 param_1,int param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0038f2c0();
  iVar2 = 0x80;
  if (iVar1 < 0x801) {
    iVar2 = 0x40;
  }
  if (iVar2 <= param_2) {
    iVar2 = param_2;
  }
  FUN_003f5a7c(param_1,iVar2,param_3,param_4,param_5);
  return;
}


// ===== 003f5db0  FUN_003f5db0 =====

void FUN_003f5db0(void)

{
  FUN_003f5a7c();
  return;
}


// ===== 003f5dbc  FUN_003f5dbc =====

void FUN_003f5dbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0038f2c0();
  uVar2 = 0x80;
  if (iVar1 < 0x801) {
    uVar2 = 0x40;
  }
  FUN_003f5a7c(param_1,uVar2,param_2,1,param_3);
  return;
}


// ===== 003f5e0c  FUN_003f5e0c =====

undefined4
FUN_003f5e0c(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,int param_5,
            int *param_6)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined4 uVar12;
  int iVar13;
  int local_90;
  
  iVar1 = FUN_003908a0();
  if (iVar1 == 0) {
    return 0;
  }
  FUN_003916e0(param_3);
  uVar3 = FUN_00391898(param_3);
  uVar4 = FUN_00391898(param_3);
  uVar5 = FUN_00391898(param_3);
  uVar6 = FUN_00391898(param_3);
  uVar7 = FUN_00391898(param_3);
  uVar8 = FUN_00391898(param_3);
  lVar9 = FUN_00391898(param_3);
  if (((((lVar9 == 0) || (lVar10 = FUN_0038f85c(uVar4,param_1), lVar10 == 0)) ||
       (iVar1 = FUN_003993bc(uVar4,1), iVar1 == 0)) ||
      ((lVar10 = FUN_0038f85c(uVar5,param_1), lVar10 == 0 ||
       (iVar1 = FUN_003993bc(uVar5,3), iVar1 == 0)))) ||
     ((iVar1 = FUN_0038f448(uVar5), iVar1 != 0 || (iVar1 = FUN_003908c4(uVar5), iVar1 != 0)))) {
LAB_003f5f10:
    lVar10 = 0;
  }
  else {
    iVar1 = -1;
    do {
      iVar13 = iVar1;
      iVar2 = FUN_00390428(uVar4,iVar13 + 2);
      iVar1 = iVar13 + 1;
    } while (iVar2 == 0);
    iVar1 = FUN_0039886c(uVar7,uVar4);
    if (iVar1 == 0) goto LAB_003f5f10;
    lVar10 = FUN_00390ef8();
    if ((lVar10 != 0) && (iVar1 = FUN_00390ff0(lVar10,param_1,param_3), iVar1 != 0)) {
      if (param_2 == 0) {
        iVar1 = FUN_0038f2c0(param_1);
        param_2 = 0x80;
        if (iVar1 < 0x801) {
          param_2 = 0x40;
        }
LAB_003f6034:
        local_90 = 0;
        do {
          iVar1 = FUN_003f6804(lVar9,uVar5,0,param_3);
          if ((iVar1 == 0) || (iVar1 = FUN_0039928c(lVar9,2), iVar1 == 0)) goto LAB_003f5f1c;
          if (param_5 != 0) {
            iVar1 = FUN_00396b90(uVar3,lVar9,param_1,param_3);
            if (iVar1 == 0) goto LAB_003f5f1c;
            iVar1 = FUN_00390824(uVar3);
            if (iVar1 == 0) {
              param_5 = 1;
              goto LAB_003f6000;
            }
          }
          iVar1 = FUN_003f71f8(uVar8,lVar9,uVar7,param_1,param_3,lVar10);
          if (iVar1 == 0) goto LAB_003f5f1c;
          iVar1 = FUN_00390824(uVar8);
          if ((iVar1 == 0) && (iVar1 = FUN_00390208(uVar8,uVar4), iVar1 != 0)) {
            iVar1 = iVar13 + 1;
            if (iVar13 + 2U < 2) {
LAB_003f615c:
              lVar11 = FUN_0038f85c(uVar6,uVar8);
              if (lVar11 == 0) {
                uVar12 = 0;
                goto LAB_003f5f20;
              }
              iVar1 = FUN_003977b4(uVar8,uVar6,uVar6,param_1,param_3);
              if ((iVar1 == 0) ||
                 ((iVar1 = FUN_00390824(uVar8), iVar1 == 0 &&
                  (lVar11 = FUN_0038f85c(uVar6,uVar8), lVar11 == 0)))) goto LAB_003f5f1c;
LAB_003f61ac:
              if (param_5 == 0) goto LAB_003f6000;
              iVar1 = FUN_003993bc(uVar6,1);
              if ((iVar1 == 0) || (iVar1 = FUN_00396b90(uVar3,uVar6,param_1,param_3), iVar1 == 0)) {
                uVar12 = 0;
                goto LAB_003f5f20;
              }
              iVar1 = FUN_00390824(uVar3);
              param_5 = 1;
              if (iVar1 != 0) {
                param_5 = 2;
              }
              goto LAB_003f6000;
            }
            while( true ) {
              lVar11 = FUN_0038f85c(uVar6,uVar8);
              if (lVar11 == 0) {
                uVar12 = 0;
                goto LAB_003f5f20;
              }
              iVar2 = FUN_003977b4(uVar8,uVar6,uVar6,param_1,param_3);
              if (iVar2 == 0) goto LAB_003f5f1c;
              iVar2 = FUN_00390208(uVar8,uVar4);
              if (iVar2 == 0) break;
              iVar2 = FUN_00390824(uVar8);
              if (iVar2 != 0) goto LAB_003f61ac;
              iVar1 = iVar1 + -1;
              if (iVar1 == 0) goto LAB_003f615c;
            }
          }
          iVar1 = FUN_003f5054(param_4,1,local_90);
          if (iVar1 == 0) goto LAB_003f5f1c;
          local_90 = local_90 + 1;
        } while (local_90 != param_2);
      }
      else if (0 < param_2) goto LAB_003f6034;
      param_5 = 3;
LAB_003f6000:
      uVar12 = 1;
      *param_6 = param_5;
      goto LAB_003f5f20;
    }
  }
LAB_003f5f1c:
  uVar12 = 0;
LAB_003f5f20:
  FUN_0038f984(uVar3);
  FUN_0038f984(uVar4);
  FUN_0038f984(uVar5);
  FUN_0038f984(uVar6);
  FUN_0038f984(uVar7);
  FUN_0038f984(uVar8);
  FUN_0038f984(lVar9);
  FUN_0039180c(param_3);
  FUN_00390f94(lVar10);
  return uVar12;
}


// ===== 003f6248  FUN_003f6248 =====

void FUN_003f6248(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 param_6)

{
  FUN_003f6268(0,param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}


// ===== 003f6268  FUN_003f6268 =====

/* WARNING: Removing unreachable block (ram,0x003f6508) */
/* WARNING: Removing unreachable block (ram,0x003f64f8) */
/* WARNING: Removing unreachable block (ram,0x003f6500) */

bool FUN_003f6268(int param_1,undefined8 param_2,uint param_3,int param_4,int param_5,
                 undefined4 param_6,undefined8 param_7)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  byte *pbVar4;
  long lVar5;
  byte bVar6;
  uint uVar7;
  ulong uVar8;
  byte *pbVar9;
  byte local_64 [4];
  
  uVar3 = FUN_00391bb8(param_7);
  if (param_3 == 0) {
    if ((param_4 == -1) && (param_5 == 0)) {
      FUN_003907e0(param_2);
      return true;
    }
LAB_003f6360:
    FUN_00379868();
    FUN_0037995c("crypto/bn/bn_rand.c",0x60,"bnrand");
    FUN_00379a5c(3,0x76,0);
    return false;
  }
  if (((int)param_3 < 0) || ((param_3 == 1 && (0 < param_4)))) goto LAB_003f6360;
  uVar8 = (ulong)(param_3 + 7 >> 3);
  pbVar4 = (byte *)FUN_003c83a4(uVar8,"crypto/bn/bn_rand.c",0x2b);
  if (pbVar4 == (byte *)0x0) {
LAB_003f63b0:
    bVar1 = false;
    goto LAB_003f6450;
  }
  if (param_1 == 0) {
    iVar2 = FUN_003edc30(uVar3,pbVar4,uVar8,param_6);
    if (iVar2 < 1) goto LAB_003f63b0;
  }
  else {
    iVar2 = FUN_003edab0(uVar3,pbVar4,uVar8,param_6);
    if (iVar2 < 1) goto LAB_003f63b0;
    if (param_1 != 1) goto LAB_003f63d4;
    iVar2 = FUN_003edc30(uVar3,local_64,1,param_6);
    if (iVar2 < 1) goto LAB_003f63b0;
    if (local_64[0] < 0x2a) {
      bVar6 = 0;
LAB_003f63c8:
      *pbVar4 = bVar6;
    }
    else if (local_64[0] < 0x54) {
      bVar6 = 0xff;
      goto LAB_003f63c8;
    }
    if (8 < param_3) {
      lVar5 = uVar8 - 1;
      pbVar9 = pbVar4;
      do {
        pbVar9 = pbVar9 + 1;
        iVar2 = FUN_003edc30(uVar3,local_64,1,param_6);
        if (iVar2 < 1) goto LAB_003f63b0;
        *pbVar9 = 0;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
  }
LAB_003f63d4:
  uVar7 = param_3 + 7 & 7;
  bVar6 = (byte)(0x1fe << (ulong)uVar7);
  if (param_4 < 0) {
    *pbVar4 = *pbVar4 & (bVar6 ^ 0xff);
  }
  else {
    if (param_4 == 0) {
      iVar2 = 1;
    }
    else {
      if (uVar7 == 0) {
        pbVar4[1] = pbVar4[1] | 0x80;
        *pbVar4 = (bVar6 ^ 0xff) & 1;
        goto joined_r0x003f64a4;
      }
      uVar7 = uVar7 - 1;
      iVar2 = 3;
    }
    *pbVar4 = (*pbVar4 | (byte)(iVar2 << (ulong)(uVar7 & 0x1f))) & (bVar6 ^ 0xff);
  }
joined_r0x003f64a4:
  if (param_5 != 0) {
    pbVar4[uVar8 - 1] = pbVar4[uVar8 - 1] | 1;
  }
  lVar5 = FUN_0038fa44(pbVar4,uVar8,param_2);
  bVar1 = lVar5 != 0;
LAB_003f6450:
  FUN_003c893c(pbVar4,uVar8,"crypto/bn/bn_rand.c",0x5b);
  return bVar1;
}


// ===== 003f6518  FUN_003f6518 =====

void FUN_003f6518(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_003f6268(0,param_1,param_2,param_3,param_4,0,0);
  return;
}


// ===== 003f6538  FUN_003f6538 =====

void FUN_003f6538(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_003f6268(1,param_1,param_2,param_3,param_4,0,0);
  return;
}


// ===== 003f6558  FUN_003f6558 =====

void FUN_003f6558(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 param_6)

{
  FUN_003f6268(2,param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}


// ===== 003f6578  FUN_003f6578 =====

void FUN_003f6578(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_003f6268(2,param_1,param_2,param_3,param_4,0,0);
  return;
}


// ===== 003f6598  FUN_003f6598 =====

void FUN_003f6598(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  FUN_003f65b4(0,param_1,param_2,param_3,param_4);
  return;
}


// ===== 003f65b4  FUN_003f65b4 =====

undefined8
FUN_003f65b4(undefined4 param_1,long param_2,long param_3,undefined4 param_4,undefined8 param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  if (param_2 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/bn/bn_rand.c",0x8a,"bnrand_range");
    uVar5 = 0xc0102;
  }
  else if ((*(int *)(param_3 + 0x10) == 0) && (iVar2 = FUN_0038f448(param_3), iVar2 == 0)) {
    iVar2 = FUN_0038f2c0(param_3);
    if (iVar2 == 1) {
      FUN_003907e0(param_2);
      return 1;
    }
    iVar3 = FUN_00390428(param_3,iVar2 + -2);
    if ((iVar3 == 0) && (iVar3 = FUN_00390428(param_3,iVar2 + -3), iVar3 == 0)) {
      iVar3 = -100;
      while( true ) {
        uVar5 = FUN_003f6268(param_1,param_2,iVar2 + 1,0xffffffff,0,param_4,param_5);
        if ((int)uVar5 == 0) {
          return uVar5;
        }
        iVar4 = FUN_00390208(param_2,param_3);
        if (-1 < iVar4) {
          uVar5 = FUN_00398f34(param_2,param_2,param_3);
          if ((int)uVar5 == 0) {
            return uVar5;
          }
          iVar4 = FUN_00390208(param_2,param_3);
          if ((-1 < iVar4) && (uVar5 = FUN_00398f34(param_2,param_2,param_3), (int)uVar5 == 0)) {
            return uVar5;
          }
        }
        bVar1 = iVar3 == -1;
        iVar3 = iVar3 + 1;
        if (bVar1) break;
        iVar4 = FUN_00390208(param_2,param_3);
        if (iVar4 < 0) {
          return 1;
        }
      }
      FUN_00379868();
      uVar5 = 0xb2;
    }
    else {
      iVar3 = -100;
      while( true ) {
        uVar5 = FUN_003f6268(param_1,param_2,iVar2,0xffffffff,0,0,param_5);
        if ((int)uVar5 == 0) {
          return uVar5;
        }
        bVar1 = iVar3 == -1;
        iVar3 = iVar3 + 1;
        if (bVar1) break;
        iVar4 = FUN_00390208(param_2,param_3);
        if (iVar4 < 0) {
          return 1;
        }
      }
      FUN_00379868();
      uVar5 = 0xc0;
    }
    FUN_0037995c("crypto/bn/bn_rand.c",uVar5,"bnrand_range");
    uVar5 = 0x71;
  }
  else {
    FUN_00379868();
    FUN_0037995c("crypto/bn/bn_rand.c",0x8f,"bnrand_range");
    uVar5 = 0x73;
  }
  FUN_00379a5c(3,uVar5,0);
  return 0;
}


// ===== 003f67e8  FUN_003f67e8 =====

void FUN_003f67e8(undefined8 param_1,undefined8 param_2)

{
  FUN_003f65b4(0,param_1,param_2,0,0);
  return;
}


// ===== 003f6804  FUN_003f6804 =====

void FUN_003f6804(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  FUN_003f65b4(2,param_1,param_2,param_3,param_4);
  return;
}


// ===== 003f6820  FUN_003f6820 =====

void FUN_003f6820(undefined8 param_1,undefined8 param_2)

{
  FUN_003f65b4(2,param_1,param_2,0,0);
  return;
}


// ===== 003f683c  FUN_003f683c =====

bool FUN_003f683c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_14c [96];
  uint local_ec;
  undefined1 auStack_e8 [64];
  undefined1 auStack_a8 [72];
  
  lVar7 = FUN_0039d270();
  iVar5 = FUN_0038f2c0(param_2);
  iVar6 = iVar5 + 0xe;
  if (iVar5 + 7 < 0 == SCARRY4(iVar5,7)) {
    iVar6 = iVar5 + 7;
  }
  uVar1 = (iVar6 >> 3) + 8;
  uVar8 = FUN_00391bb8(param_6);
  if (lVar7 == 0) {
    bVar4 = false;
    lVar10 = 0;
    lVar9 = 0;
  }
  else {
    lVar9 = FUN_003c83a4(uVar1,"crypto/bn/bn_rand.c",0x110);
    if (lVar9 != 0) {
      iVar6 = FUN_0038fe10(param_3,auStack_14c,0x60);
      if (-1 < iVar6) {
        lVar10 = FUN_0039e6f4(uVar8,"SHA512",0);
        if (lVar10 == 0) {
          FUN_00379868();
          FUN_0037995c("crypto/bn/bn_rand.c",0x121,"BN_generate_dsa_nonce");
          FUN_00379a5c(3,0x78,0);
        }
        else {
          local_ec = 0;
          if (uVar1 != 0) {
            do {
              iVar6 = FUN_003edab0(uVar8,auStack_a8,0x40,0);
              if ((((iVar6 < 1) || (iVar6 = FUN_0039d92c(lVar7,lVar10,0), iVar6 == 0)) ||
                  (iVar6 = FUN_0039d938(lVar7,&local_ec,4), iVar6 == 0)) ||
                 (((iVar6 = FUN_0039d938(lVar7,auStack_14c,0x60), iVar6 == 0 ||
                   (iVar6 = FUN_0039d938(lVar7,param_4,param_5), iVar6 == 0)) ||
                  ((iVar6 = FUN_0039d938(lVar7,auStack_a8,0x40), iVar6 == 0 ||
                   (iVar6 = FUN_0039dac8(lVar7,auStack_e8,0), uVar3 = local_ec, iVar6 == 0))))))
              goto LAB_003f6a78;
              uVar2 = uVar1 - local_ec;
              if (0x3f < uVar2) {
                uVar2 = 0x40;
              }
              memcpy((void *)(lVar9 + (ulong)local_ec),auStack_e8,(ulong)uVar2);
              local_ec = uVar2 + uVar3;
            } while (local_ec < uVar1);
          }
          lVar11 = FUN_0038fa44(lVar9,uVar1,param_1);
          if (lVar11 != 0) {
            iVar6 = FUN_00397cac(0,param_1,param_1,param_2,param_6);
            bVar4 = iVar6 == 1;
            goto LAB_003f6a7c;
          }
        }
LAB_003f6a78:
        bVar4 = false;
        goto LAB_003f6a7c;
      }
      FUN_00379868();
      FUN_0037995c("crypto/bn/bn_rand.c",0x11b,"BN_generate_dsa_nonce");
      FUN_00379a5c(3,0x75,0);
    }
    bVar4 = false;
    lVar10 = 0;
  }
LAB_003f6a7c:
  FUN_0039d284(lVar7);
  FUN_0039d050(lVar10);
  FUN_003c893c(lVar9,uVar1,"crypto/bn/bn_rand.c",0x141);
  FUN_003c89b8(auStack_e8,0x40);
  FUN_003c89b8(auStack_a8,0x40);
  FUN_003c89b8(auStack_14c,0x60);
  return bVar4;
}


// ===== 003f6aec  FUN_003f6aec =====

undefined8 FUN_003f6aec(long param_1,long param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  iVar1 = FUN_0038f4e8(param_3,4);
  if ((iVar1 != 0) || (iVar1 = FUN_0038f4e8(param_2,4), iVar1 != 0)) {
    FUN_00379868();
    FUN_0037995c("crypto/bn/bn_exp.c",0x39,"BN_exp");
    FUN_00379a5c(3,0xc0101,0);
    return 0;
  }
  FUN_003916e0(param_4);
  if ((param_1 == param_2) || (lVar4 = param_1, param_1 == param_3)) {
    lVar4 = FUN_00391898(param_4);
  }
  lVar5 = FUN_00391898(param_4);
  uVar7 = 0;
  if ((lVar4 == 0) || (lVar5 == 0)) goto LAB_003f6c8c;
  lVar6 = FUN_0038f85c(lVar5,param_2);
  if (lVar6 != 0) {
    iVar1 = FUN_0038f2c0(param_3);
    iVar2 = FUN_003908a0(param_3);
    if (iVar2 == 0) {
      iVar2 = FUN_0038f9ec(lVar4,1);
      if (iVar2 != 0) goto LAB_003f6c0c;
    }
    else {
      lVar6 = FUN_0038f85c(lVar4,param_2);
      if (lVar6 != 0) {
LAB_003f6c0c:
        if (1 < iVar1) {
          iVar2 = 1;
          do {
            iVar3 = FUN_00395c7c(lVar5,lVar5,param_4);
            if ((iVar3 == 0) ||
               ((iVar3 = FUN_00390428(param_3,iVar2), iVar3 != 0 &&
                (iVar3 = FUN_00392a80(lVar4,lVar4,lVar5,param_4), iVar3 == 0)))) goto LAB_003f6c88;
            iVar2 = iVar2 + 1;
          } while (iVar1 != iVar2);
        }
        if ((lVar4 == param_1) || (lVar4 = FUN_0038f85c(param_1,lVar4), lVar4 != 0)) {
          uVar7 = 1;
          goto LAB_003f6c8c;
        }
      }
    }
  }
LAB_003f6c88:
  uVar7 = 0;
LAB_003f6c8c:
  FUN_0039180c(param_4);
  return uVar7;
}


// ===== 003f6cb4  FUN_003f6cb4 =====

void FUN_003f6cb4(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  
  iVar1 = FUN_003908a0(param_4);
  if (iVar1 == 0) {
    FUN_003f78f0(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  if ((((*(int *)(param_2 + 1) == 1) && (*(int *)(param_2 + 2) == 0)) &&
      (iVar1 = FUN_0038f4e8(param_3,4), iVar1 == 0)) &&
     ((iVar1 = FUN_0038f4e8(param_2,4), iVar1 == 0 && (iVar1 = FUN_0038f4e8(param_4,4), iVar1 == 0))
     )) {
    FUN_003f6db0(param_1,*(undefined8 *)*param_2,param_3,param_4,param_5,0);
    return;
  }
  FUN_003f71f8(param_1,param_2,param_3,param_4,param_5,0);
  return;
}


// ===== 003f6db0  FUN_003f6db0 =====

ulong FUN_003f6db0(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,long param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  long local_70;
  int local_64;
  
  iVar7 = FUN_0038f4e8(param_3,4);
  if ((iVar7 == 0) && (iVar7 = FUN_0038f4e8(param_4,4), iVar7 == 0)) {
    iVar7 = FUN_003908a0(param_4);
    if (iVar7 != 0) {
      if (*(int *)(param_4 + 1) == 1) {
        uVar11 = *(ulong *)*param_4;
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = param_2 / uVar11;
        }
        param_2 = param_2 - uVar13 * uVar11;
      }
      local_64 = FUN_0038f2c0(param_3);
      if (local_64 == 0) {
        iVar7 = FUN_003907ec(param_4,1);
        if (iVar7 == 0) {
          uVar13 = FUN_0038f9ec(param_1,1);
          return uVar13;
        }
      }
      else if (param_2 != 0) {
        FUN_003916e0(param_5);
        lVar8 = FUN_00391898(param_5);
        local_70 = FUN_00391898(param_5);
        if (local_70 == 0) {
          lVar9 = 0;
joined_r0x003f70b4:
          uVar12 = 0;
          if (param_6 == 0) goto LAB_003f71d4;
        }
        else {
          lVar9 = param_6;
          if ((param_6 == 0) &&
             ((lVar9 = FUN_00390ef8(), lVar9 == 0 ||
              (iVar7 = FUN_00390ff0(lVar9,param_4,param_5), iVar7 == 0)))) {
            uVar12 = 0;
          }
          else {
            uVar13 = param_2;
            if (local_64 < 2) {
              if (param_2 == 1) {
LAB_003f70ec:
                iVar7 = FUN_0038f9ec(param_1,1);
                goto joined_r0x003f70f8;
              }
LAB_003f7148:
              iVar7 = FUN_0038f9ec(lVar8,uVar13);
              if (iVar7 != 0) {
                iVar7 = FUN_003908d4(lVar8,lVar8,lVar9,param_5);
joined_r0x003f71c8:
                if (iVar7 != 0) goto LAB_003f7170;
              }
LAB_003f71cc:
              uVar12 = 0;
            }
            else {
              local_64 = local_64 + -1;
              bVar5 = true;
              do {
                auVar1._8_8_ = 0;
                auVar1._0_8_ = uVar13;
                auVar3._8_8_ = 0;
                auVar3._0_8_ = uVar13;
                if (SUB168(auVar1 * auVar3,8) == 0) {
                  uVar13 = uVar13 * uVar13;
                  if (!bVar5) goto LAB_003f6fd4;
                  bVar6 = false;
                }
                else {
                  if (bVar5) {
                    iVar7 = FUN_0038f9ec();
                    if (iVar7 == 0) goto LAB_003f71e8;
                    iVar7 = FUN_003908d4(lVar8,lVar8,lVar9,param_5);
                    lVar14 = lVar8;
                    if (iVar7 == 0) goto LAB_003f71cc;
                  }
                  else {
                    iVar7 = FUN_003994ec(lVar8,uVar13);
                    if ((iVar7 == 0) ||
                       (iVar7 = FUN_00397cac(0,local_70,lVar8,param_4,param_5), lVar14 = local_70,
                       local_70 = lVar8, iVar7 == 0)) goto LAB_003f71e8;
                  }
                  uVar13 = 1;
                  lVar8 = lVar14;
LAB_003f6fd4:
                  iVar7 = FUN_00390a1c(lVar8,lVar8,lVar8,lVar9,param_5);
                  bVar5 = false;
                  if (iVar7 == 0) goto joined_r0x003f70b4;
                  bVar6 = true;
                }
                local_64 = local_64 + -1;
                iVar7 = FUN_00390428(param_3);
                if (iVar7 != 0) {
                  auVar2._8_8_ = 0;
                  auVar2._0_8_ = param_2;
                  auVar4._8_8_ = 0;
                  auVar4._0_8_ = uVar13;
                  if (SUB168(auVar2 * auVar4,8) == 0) {
                    uVar13 = param_2 * uVar13;
                  }
                  else {
                    if (bVar6) {
                      iVar7 = FUN_003994ec(lVar8,uVar13);
                      if (iVar7 == 0) goto LAB_003f71e8;
                      iVar7 = FUN_00397cac(0,local_70,lVar8,param_4,param_5);
                      lVar14 = local_70;
                      local_70 = lVar8;
                    }
                    else {
                      iVar7 = FUN_0038f9ec(lVar8,uVar13);
                      if (iVar7 == 0) goto LAB_003f71e8;
                      iVar7 = FUN_003908d4(lVar8,lVar8,lVar9,param_5);
                      lVar14 = lVar8;
                    }
                    lVar8 = lVar14;
                    bVar5 = false;
                    uVar13 = param_2;
                    if (iVar7 == 0) goto joined_r0x003f70b4;
                  }
                }
              } while (0 < local_64);
              if (uVar13 == 1) {
                if (bVar5) goto LAB_003f70ec;
LAB_003f7170:
                iVar7 = FUN_00390dd8(param_1,lVar8,lVar9,param_5);
joined_r0x003f70f8:
                if (iVar7 == 0) goto LAB_003f71cc;
                uVar12 = 1;
              }
              else {
                if (bVar5) goto LAB_003f7148;
                iVar7 = FUN_003994ec(lVar8,uVar13);
                if (iVar7 != 0) {
                  iVar7 = FUN_00397cac(0,local_70,lVar8,param_4,param_5);
                  lVar8 = local_70;
                  goto joined_r0x003f71c8;
                }
LAB_003f71e8:
                uVar12 = 0;
              }
            }
            if (param_6 != 0) goto LAB_003f71dc;
          }
LAB_003f71d4:
          FUN_00390f94(lVar9);
        }
LAB_003f71dc:
        FUN_0039180c(param_5);
        goto LAB_003f6e3c;
      }
      FUN_003907e0(param_1);
      uVar12 = 1;
      goto LAB_003f6e3c;
    }
    FUN_00379868();
    FUN_0037995c("crypto/bn/bn_exp.c",0x4b0,"BN_mod_exp_mont_word");
    uVar10 = 0x66;
  }
  else {
    FUN_00379868();
    FUN_0037995c("crypto/bn/bn_exp.c",0x4a8,"BN_mod_exp_mont_word");
    uVar10 = 0xc0101;
  }
  FUN_00379a5c(3,uVar10,0);
  uVar12 = 0;
LAB_003f6e3c:
  return (ulong)uVar12;
}


// ===== 003f71f8  FUN_003f71f8 =====

ulong FUN_003f71f8(undefined8 param_1,long param_2,undefined8 param_3,long *param_4,
                  undefined8 param_5,long param_6)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  ulong *puVar14;
  long *plVar15;
  ulong *puVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  ulong uVar20;
  uint uVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long local_168 [33];
  
  iVar3 = FUN_003908a0(param_4);
  if (iVar3 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/bn/bn_exp.c",0x148,"BN_mod_exp_mont");
    FUN_00379a5c(3,0x66,0);
    return 0;
  }
  if (((int)param_4[1] < 0x100000) &&
     (((iVar3 = FUN_0038f4e8(param_3,4), iVar3 != 0 || (iVar3 = FUN_0038f4e8(param_2,4), iVar3 != 0)
       ) || (iVar3 = FUN_0038f4e8(param_4,4), iVar3 != 0)))) {
    uVar6 = FUN_003f7e6c(param_1,param_2,param_3,param_4,param_5,param_6);
    return uVar6;
  }
  iVar3 = FUN_0038f2c0(param_3);
  if (iVar3 == 0) {
    iVar3 = FUN_003907ec(param_4,1);
    if (iVar3 != 0) {
      FUN_003907e0(param_1);
      return 1;
    }
    uVar6 = FUN_0038f9ec(param_1,1);
    return uVar6;
  }
  FUN_003916e0(param_5);
  uVar7 = FUN_00391898(param_5);
  plVar8 = (long *)FUN_00391898(param_5);
  lVar9 = FUN_00391898(param_5);
  local_168[0] = lVar9;
  if (lVar9 == 0) {
    uVar21 = 0;
    lVar10 = 0;
LAB_003f74c0:
    if (param_6 != 0) goto LAB_003f74cc;
  }
  else {
    lVar10 = param_6;
    if ((param_6 != 0) ||
       ((lVar10 = FUN_00390ef8(), lVar10 != 0 &&
        (iVar4 = FUN_00390ff0(lVar10,param_4,param_5), iVar4 != 0)))) {
      if ((((*(int *)(param_2 + 0x10) == 0) && (iVar4 = FUN_003901ac(param_2,param_4), iVar4 < 0))
          || (iVar4 = FUN_00397158(lVar9,param_2,param_4,param_5), param_2 = lVar9, iVar4 != 0)) &&
         (iVar4 = FUN_00390ee8(lVar9,param_2,lVar10,param_5), iVar4 != 0)) {
        if (iVar3 < 0x2a0) {
          if (0xef < iVar3) {
            uVar21 = 5;
            goto LAB_003f7434;
          }
          if (0x4f < iVar3) {
            uVar21 = 4;
            goto LAB_003f7434;
          }
          if (0x17 < iVar3) {
            uVar21 = 3;
            goto LAB_003f7434;
          }
          uVar21 = 1;
        }
        else {
          uVar21 = 6;
LAB_003f7434:
          iVar4 = FUN_00390a4c(uVar7,lVar9,lVar9,lVar10,param_5);
          if (iVar4 == 0) goto LAB_003f74bc;
          lVar9 = 0;
          do {
            lVar11 = FUN_00391898(param_5);
            local_168[lVar9 + 1] = lVar11;
            if ((lVar11 == 0) ||
               (iVar4 = FUN_00390a4c(lVar11,local_168[lVar9],uVar7,lVar10,param_5), iVar4 == 0))
            goto LAB_003f74bc;
            iVar4 = (int)lVar9;
            lVar9 = lVar9 + 1;
          } while (iVar4 + 2U >> (ulong)(uVar21 - 1 & 0x1f) == 0);
        }
        uVar12 = *(uint *)(param_4 + 1);
        lVar9 = (long)(int)uVar12;
        if (*(long *)(*param_4 + lVar9 * 8 + -8) < 0) {
          lVar11 = FUN_0038f924(plVar8,uVar12);
          if (lVar11 != 0) {
            param_4 = (long *)*param_4;
            plVar15 = (long *)*plVar8;
            *plVar15 = -*param_4;
            if (1 < (int)uVar12) {
              uVar6 = 1;
              if ((4 < uVar12) && (0x1f < (ulong)((long)plVar15 - (long)param_4))) {
                plVar18 = param_4 + 3;
                plVar19 = plVar15 + 3;
                uVar17 = lVar9 - 1U & 0xfffffffffffffffc;
                uVar6 = uVar17 | 1;
                uVar20 = uVar17;
                do {
                  lVar23 = plVar18[-1];
                  lVar11 = plVar18[-2];
                  lVar25 = plVar18[1];
                  lVar24 = *plVar18;
                  uVar20 = uVar20 - 4;
                  plVar18 = plVar18 + 4;
                  plVar19[-1] = CONCAT17(~(byte)((ulong)lVar23 >> 0x38),
                                         CONCAT16(~(byte)((ulong)lVar23 >> 0x30),
                                                  CONCAT15(~(byte)((ulong)lVar23 >> 0x28),
                                                           CONCAT14(~(byte)((ulong)lVar23 >> 0x20),
                                                                    CONCAT13(~(byte)((ulong)lVar23
                                                                                    >> 0x18),
                                                                             CONCAT12(~(byte)((ulong
                                                  )lVar23 >> 0x10),
                                                  CONCAT11(~(byte)((ulong)lVar23 >> 8),~(byte)lVar23
                                                          )))))));
                  plVar19[-2] = CONCAT17(~(byte)((ulong)lVar11 >> 0x38),
                                         CONCAT16(~(byte)((ulong)lVar11 >> 0x30),
                                                  CONCAT15(~(byte)((ulong)lVar11 >> 0x28),
                                                           CONCAT14(~(byte)((ulong)lVar11 >> 0x20),
                                                                    CONCAT13(~(byte)((ulong)lVar11
                                                                                    >> 0x18),
                                                                             CONCAT12(~(byte)((ulong
                                                  )lVar11 >> 0x10),
                                                  CONCAT11(~(byte)((ulong)lVar11 >> 8),~(byte)lVar11
                                                          )))))));
                  plVar19[1] = CONCAT17(~(byte)((ulong)lVar25 >> 0x38),
                                        CONCAT16(~(byte)((ulong)lVar25 >> 0x30),
                                                 CONCAT15(~(byte)((ulong)lVar25 >> 0x28),
                                                          CONCAT14(~(byte)((ulong)lVar25 >> 0x20),
                                                                   CONCAT13(~(byte)((ulong)lVar25 >>
                                                                                   0x18),
                                                                            CONCAT12(~(byte)((ulong)
                                                  lVar25 >> 0x10),
                                                  CONCAT11(~(byte)((ulong)lVar25 >> 8),~(byte)lVar25
                                                          )))))));
                  *plVar19 = CONCAT17(~(byte)((ulong)lVar24 >> 0x38),
                                      CONCAT16(~(byte)((ulong)lVar24 >> 0x30),
                                               CONCAT15(~(byte)((ulong)lVar24 >> 0x28),
                                                        CONCAT14(~(byte)((ulong)lVar24 >> 0x20),
                                                                 CONCAT13(~(byte)((ulong)lVar24 >>
                                                                                 0x18),
                                                                          CONCAT12(~(byte)((ulong)
                                                  lVar24 >> 0x10),
                                                  CONCAT11(~(byte)((ulong)lVar24 >> 8),~(byte)lVar24
                                                          )))))));
                  plVar19 = plVar19 + 4;
                } while (uVar20 != 0);
                if (lVar9 - 1U == uVar17) goto LAB_003f75e4;
              }
              lVar9 = lVar9 - uVar6;
              puVar14 = (ulong *)(param_4 + uVar6);
              puVar16 = (ulong *)(plVar15 + uVar6);
              do {
                lVar9 = lVar9 + -1;
                *puVar16 = ~*puVar14;
                puVar14 = puVar14 + 1;
                puVar16 = puVar16 + 1;
              } while (lVar9 != 0);
            }
LAB_003f75e4:
            *(uint *)(plVar8 + 1) = uVar12;
            goto LAB_003f75e8;
          }
        }
        else {
          uVar7 = FUN_0038f23c();
          iVar4 = FUN_00390ee8(plVar8,uVar7,lVar10,param_5);
          if (iVar4 != 0) {
LAB_003f75e8:
            bVar1 = false;
            iVar3 = iVar3 + -1;
            bVar2 = true;
            do {
              while (iVar4 = FUN_00390428(param_3,iVar3), iVar4 != 0) {
                uVar22 = 0;
                uVar12 = 1;
                if ((1 < uVar21) && (0 < iVar3)) {
                  iVar4 = FUN_00390428(param_3,iVar3 + -1);
                  uVar22 = (uint)(iVar4 != 0);
                  uVar12 = 3;
                  if (iVar4 == 0) {
                    uVar12 = 1;
                  }
                  if (iVar3 != 1) {
                    iVar5 = FUN_00390428(param_3,iVar3 + -2);
                    uVar13 = 1;
                    if (iVar4 == 0) {
                      uVar13 = 2;
                    }
                    if (iVar5 != 0) {
                      uVar22 = 2;
                      uVar12 = (uVar12 << (ulong)uVar13) + 1;
                    }
                    if ((uVar21 != 3) && (2 < iVar3)) {
                      iVar4 = FUN_00390428(param_3,iVar3 + -3);
                      uVar13 = uVar22 ^ 3;
                      if (iVar4 != 0) {
                        uVar22 = 3;
                      }
                      if (iVar4 != 0) {
                        uVar12 = uVar12 << (ulong)uVar13 | 1;
                      }
                      if ((uVar21 != 4) && (iVar3 != 3)) {
                        iVar4 = FUN_00390428(param_3,iVar3 + -4);
                        uVar13 = 4 - uVar22;
                        if (iVar4 != 0) {
                          uVar22 = 4;
                        }
                        if (iVar4 != 0) {
                          uVar12 = (uVar12 << (ulong)(uVar13 & 0x1f)) + 1;
                        }
                        if ((uVar21 != 5) && (4 < iVar3)) {
                          iVar4 = FUN_00390428(param_3,iVar3 + -5);
                          uVar13 = 5 - uVar22;
                          if (iVar4 != 0) {
                            uVar22 = 5;
                          }
                          if (iVar4 != 0) {
                            uVar12 = uVar12 << (ulong)(uVar13 & 0x1f) | 1;
                          }
                        }
                      }
                    }
                  }
                }
                if (!bVar2) {
                  iVar4 = FUN_00390a4c(plVar8,plVar8,plVar8,lVar10,param_5);
                  if (iVar4 == 0) goto LAB_003f74bc;
                  if (uVar22 != 0) {
                    iVar4 = FUN_00390a4c(plVar8,plVar8,plVar8,lVar10,param_5);
                    if (iVar4 == 0) goto LAB_003f74bc;
                    if (uVar22 != 1) {
                      iVar4 = FUN_00390a4c(plVar8,plVar8,plVar8,lVar10,param_5);
                      if (iVar4 == 0) goto LAB_003f74bc;
                      if (uVar22 != 2) {
                        iVar4 = FUN_00390a4c(plVar8,plVar8,plVar8,lVar10,param_5);
                        if (iVar4 == 0) goto LAB_003f74bc;
                        if (uVar22 != 3) {
                          iVar4 = FUN_00390a4c(plVar8,plVar8,plVar8,lVar10,param_5);
                          if (iVar4 == 0) goto LAB_003f74bc;
                          if (uVar22 != 4) {
                            iVar4 = FUN_00390a4c(plVar8,plVar8,plVar8,lVar10,param_5);
                            if (iVar4 == 0) goto LAB_003f74bc;
                            if (uVar22 != 5) {
                              iVar4 = FUN_00390a4c(plVar8,plVar8,plVar8,lVar10,param_5);
                              if (iVar4 == 0) {
                                uVar21 = 0;
                                goto LAB_003f74c0;
                              }
                              iVar4 = FUN_00390a4c(plVar8,plVar8,plVar8,lVar10,param_5);
                              if (iVar4 == 0) goto LAB_003f74bc;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                iVar4 = FUN_00390a4c(plVar8,plVar8,local_168[(int)uVar12 >> 1],lVar10,param_5);
                if (iVar4 == 0) goto LAB_003f74bc;
                bVar2 = false;
                iVar3 = ~uVar22 + iVar3;
                bVar1 = true;
                if (iVar3 < 0) goto LAB_003f78c0;
              }
              if ((bVar1) && (iVar4 = FUN_00390a4c(plVar8,plVar8,plVar8,lVar10,param_5), iVar4 == 0)
                 ) goto LAB_003f74bc;
              iVar3 = iVar3 + -1;
            } while (iVar3 != -1);
LAB_003f78c0:
            iVar3 = FUN_00390dd8(param_1,plVar8,lVar10,param_5);
            uVar21 = (uint)(iVar3 != 0);
            goto LAB_003f74c0;
          }
        }
      }
LAB_003f74bc:
      uVar21 = 0;
      goto LAB_003f74c0;
    }
    uVar21 = 0;
  }
  FUN_00390f94(lVar10);
LAB_003f74cc:
  FUN_0039180c(param_5);
  return (ulong)uVar21;
}


// ===== 003f78f0  FUN_003f78f0 =====

undefined8
FUN_003f78f0(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStack_1a8 [64];
  long local_168 [33];
  
  iVar3 = FUN_0038f4e8(param_3,4);
  if (((iVar3 != 0) || (iVar3 = FUN_0038f4e8(param_2,4), iVar3 != 0)) ||
     (iVar3 = FUN_0038f4e8(param_4,4), iVar3 != 0)) {
    FUN_00379868();
    FUN_0037995c("crypto/bn/bn_exp.c",0xb7,"BN_mod_exp_recp");
    FUN_00379a5c(3,0xc0101,0);
    return 0;
  }
  iVar3 = FUN_0038f2c0(param_3);
  if (iVar3 == 0) {
    iVar3 = FUN_003907ec(param_4,1);
    if (iVar3 == 0) {
      uVar10 = FUN_0038f9ec(param_1,1);
      return uVar10;
    }
    FUN_003907e0(param_1);
    return 1;
  }
  FUN_003f9374(auStack_1a8);
  FUN_003916e0(param_5);
  lVar6 = FUN_00391898(param_5);
  lVar7 = FUN_00391898(param_5);
  local_168[0] = lVar7;
  if (lVar7 != 0) {
    if (*(int *)(param_4 + 0x10) == 0) {
      iVar4 = FUN_003f9440(auStack_1a8,param_4,param_5);
    }
    else {
      lVar8 = FUN_0038f85c(lVar6,param_4);
      if (lVar8 == 0) goto LAB_003f7e4c;
      *(undefined4 *)(lVar6 + 0x10) = 0;
      iVar4 = FUN_003f9440(auStack_1a8,lVar6,param_5);
    }
    if ((0 < iVar4) && (iVar4 = FUN_00397158(lVar7,param_2,param_4,param_5), iVar4 != 0)) {
      iVar4 = FUN_0038f448(lVar7);
      if (iVar4 != 0) {
        FUN_003907e0(param_1);
        uVar10 = 1;
        goto LAB_003f7e50;
      }
      if (iVar3 < 0x2a0) {
        if (0xef < iVar3) {
          uVar12 = 5;
          goto LAB_003f7af4;
        }
        if (0x4f < iVar3) {
          uVar12 = 4;
          goto LAB_003f7af4;
        }
        if (0x17 < iVar3) {
          uVar12 = 3;
          goto LAB_003f7af4;
        }
        uVar12 = 1;
      }
      else {
        uVar12 = 6;
LAB_003f7af4:
        iVar4 = FUN_003f94a4(lVar6,lVar7,lVar7,auStack_1a8,param_5);
        if (iVar4 == 0) goto LAB_003f7e4c;
        lVar7 = 0;
        do {
          lVar8 = FUN_00391898(param_5);
          local_168[lVar7 + 1] = lVar8;
          if ((lVar8 == 0) ||
             (iVar4 = FUN_003f94a4(lVar8,local_168[lVar7],lVar6,auStack_1a8,param_5), iVar4 == 0))
          goto LAB_003f7e4c;
          iVar4 = (int)lVar7;
          lVar7 = lVar7 + 1;
        } while (iVar4 + 2U >> (ulong)(uVar12 - 1 & 0x1f) == 0);
      }
      if (((param_1 != param_3) ||
          ((param_3 = FUN_00391898(param_5), param_3 != 0 &&
           (lVar6 = FUN_0038f85c(param_3,param_1), lVar6 != 0)))) &&
         (iVar4 = FUN_0038f9ec(param_1,1), iVar4 != 0)) {
        bVar1 = false;
        iVar3 = iVar3 + -1;
        bVar2 = true;
        do {
          while (iVar4 = FUN_00390428(param_3,iVar3), iVar4 == 0) {
            if ((bVar1) &&
               (iVar4 = FUN_003f94a4(param_1,param_1,param_1,auStack_1a8,param_5), iVar4 == 0))
            goto LAB_003f7e4c;
            iVar3 = iVar3 + -1;
            uVar10 = 1;
            if (iVar3 == -1) goto LAB_003f7e50;
          }
          uVar13 = 0;
          uVar9 = 1;
          if ((1 < uVar12) && (0 < iVar3)) {
            iVar4 = FUN_00390428(param_3,iVar3 + -1);
            uVar13 = (uint)(iVar4 != 0);
            uVar9 = 3;
            if (iVar4 == 0) {
              uVar9 = 1;
            }
            if (iVar3 != 1) {
              iVar5 = FUN_00390428(param_3,iVar3 + -2);
              uVar11 = 1;
              if (iVar4 == 0) {
                uVar11 = 2;
              }
              if (iVar5 != 0) {
                uVar13 = 2;
                uVar9 = (uVar9 << (ulong)uVar11) + 1;
              }
              if ((uVar12 != 3) && (2 < iVar3)) {
                iVar4 = FUN_00390428(param_3,iVar3 + -3);
                uVar11 = uVar13 ^ 3;
                if (iVar4 != 0) {
                  uVar13 = 3;
                }
                if (iVar4 != 0) {
                  uVar9 = uVar9 << (ulong)uVar11 | 1;
                }
                if ((uVar12 != 4) && (iVar3 != 3)) {
                  iVar4 = FUN_00390428(param_3,iVar3 + -4);
                  uVar11 = 4 - uVar13;
                  if (iVar4 != 0) {
                    uVar13 = 4;
                  }
                  if (iVar4 != 0) {
                    uVar9 = (uVar9 << (ulong)(uVar11 & 0x1f)) + 1;
                  }
                  if ((uVar12 != 5) && (4 < iVar3)) {
                    iVar4 = FUN_00390428(param_3,iVar3 + -5);
                    uVar11 = 5 - uVar13;
                    if (iVar4 != 0) {
                      uVar13 = 5;
                    }
                    if (iVar4 != 0) {
                      uVar9 = uVar9 << (ulong)(uVar11 & 0x1f) | 1;
                    }
                  }
                }
              }
            }
          }
          if (((!bVar2) &&
              ((iVar4 = FUN_003f94a4(param_1,param_1,param_1,auStack_1a8,param_5), iVar4 == 0 ||
               ((uVar13 != 0 &&
                ((iVar4 = FUN_003f94a4(param_1,param_1,param_1,auStack_1a8,param_5), iVar4 == 0 ||
                 ((uVar13 != 1 &&
                  ((iVar4 = FUN_003f94a4(param_1,param_1,param_1,auStack_1a8,param_5), iVar4 == 0 ||
                   ((uVar13 != 2 &&
                    ((iVar4 = FUN_003f94a4(param_1,param_1,param_1,auStack_1a8,param_5), iVar4 == 0
                     || ((uVar13 != 3 &&
                         ((iVar4 = FUN_003f94a4(param_1,param_1,param_1,auStack_1a8,param_5),
                          iVar4 == 0 ||
                          ((uVar13 != 4 &&
                           ((iVar4 = FUN_003f94a4(param_1,param_1,param_1,auStack_1a8,param_5),
                            iVar4 == 0 ||
                            ((uVar13 != 5 &&
                             ((iVar4 = FUN_003f94a4(param_1,param_1,param_1,auStack_1a8,param_5),
                              iVar4 == 0 ||
                              (iVar4 = FUN_003f94a4(param_1,param_1,param_1,auStack_1a8,param_5),
                              iVar4 == 0)))))))))))))))))))))))))))) ||
             (iVar4 = FUN_003f94a4(param_1,param_1,local_168[(int)uVar9 >> 1],auStack_1a8,param_5),
             iVar4 == 0)) goto LAB_003f7e4c;
          bVar2 = false;
          bVar1 = true;
          iVar3 = ~uVar13 + iVar3;
          uVar10 = 1;
        } while (-1 < iVar3);
        goto LAB_003f7e50;
      }
    }
  }
LAB_003f7e4c:
  uVar10 = 0;
LAB_003f7e50:
  FUN_0039180c(uVar10,param_5);
  FUN_003f93f0(auStack_1a8);
  return uVar10;
}


// ===== 003f7e6c  FUN_003f7e6c =====

ulong FUN_003f7e6c(undefined8 param_1,long param_2,long *param_3,long *param_4,undefined8 param_5,
                  long param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong *puVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long lVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  long *plVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  undefined1 auStack_e0 [8];
  ulong local_d8;
  undefined1 *local_d0;
  int local_c4;
  undefined1 *local_c0;
  ulong local_b8;
  ulong local_b0;
  long *local_a8;
  ulong local_a0;
  long local_98;
  long *local_90;
  uint local_88;
  uint uStack_84;
  undefined8 local_80;
  long *local_78;
  uint local_70;
  uint uStack_6c;
  undefined8 local_68;
  
  iVar3 = FUN_003908a0(param_4);
  if (iVar3 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/bn/bn_exp.c",0x277,"BN_mod_exp_mont_consttime");
    FUN_00379a5c(3,0x66,0);
    return 0;
  }
  uVar22 = *(uint *)(param_4 + 1);
  if (0xfffff < (int)uVar22) {
    uVar6 = FUN_003f71f8(param_1,param_2,param_3,param_4,param_5,param_6);
    return uVar6;
  }
  iVar3 = (int)param_3[1];
  if (iVar3 == 0) {
    iVar3 = FUN_003907ec(param_4,1);
    if (iVar3 != 0) {
      FUN_003907e0(param_1);
      return 1;
    }
    uVar6 = FUN_0038f9ec(param_1,1);
    return uVar6;
  }
  FUN_003916e0(param_5);
  lVar8 = param_6;
  if ((param_6 == 0) &&
     ((lVar8 = FUN_00390ef8(), lVar8 == 0 ||
      (iVar4 = FUN_00390ff0(lVar8,param_4,param_5), iVar4 == 0)))) {
    plVar24 = (long *)0x0;
    iVar3 = 0;
    puVar9 = (undefined1 *)0x0;
    uVar22 = 0;
  }
  else {
    if (((*(int *)(param_2 + 0x10) == 0) &&
        (iVar4 = FUN_003901ac(param_2,param_4), lVar7 = param_2, iVar4 < 0)) ||
       ((lVar7 = FUN_00391898(param_5), lVar7 != 0 &&
        (iVar4 = FUN_00397158(lVar7,param_2,param_4,param_5), iVar4 != 0)))) {
      if (iVar3 < 0xf) {
        if (iVar3 < 5) {
          if (iVar3 < 2) {
            uVar5 = 3;
            if (iVar3 != 1) {
              uVar5 = 1;
            }
            uVar6 = (ulong)uVar5;
          }
          else {
            uVar6 = 4;
          }
        }
        else {
          uVar6 = 5;
        }
      }
      else {
        uVar6 = 6;
      }
      uVar2 = 1 << uVar6;
      local_b8 = (ulong)uVar2;
      uVar5 = uVar22 * 2;
      if ((int)(uVar22 * 2) <= (int)uVar2) {
        uVar5 = uVar2;
      }
      uVar5 = (uVar5 + (uVar22 << uVar6)) * 8;
      local_a0 = (ulong)uVar5;
      if ((int)uVar5 < 0xc00) {
        puVar9 = auStack_e0 + -((long)(int)(uVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
        local_c0 = (undefined1 *)0x0;
      }
      else {
        puVar9 = (undefined1 *)FUN_003c83a4(uVar5 + 0x40,"crypto/bn/bn_exp.c",0x2e9);
        local_c0 = puVar9;
        if (puVar9 == (undefined1 *)0x0) {
          uVar22 = 0;
          puVar9 = (undefined1 *)0x0;
          plVar24 = (long *)0x0;
          uVar6 = local_a0;
          goto LAB_003f8558;
        }
      }
      plVar24 = (long *)(((ulong)puVar9 & 0xffffffffffffffc0) + 0x40);
      local_d8 = (ulong)puVar9 & 0x3f;
      lVar20 = (long)(int)uVar22;
      local_d0 = puVar9;
      local_c4 = iVar3;
      local_98 = lVar8;
      memset(plVar24,0,(long)(int)local_a0);
      param_4 = (long *)*param_4;
      local_88 = 0;
      lVar14 = lVar20 * 8 << uVar6;
      local_70 = 0;
      local_78 = (long *)((long)plVar24 + lVar14);
      local_80 = DAT_001b70e8;
      local_90 = local_78 + lVar20;
      local_68 = DAT_001b70e8;
      local_b0 = uVar6;
      local_a8 = plVar24;
      uStack_84 = uVar22;
      uStack_6c = uVar22;
      if (param_4[lVar20 + -1] < 0) {
        uVar5 = (uint)uVar6;
        *local_78 = -*param_4;
        lVar8 = local_98;
        local_70 = uVar22;
        if (1 < (int)uVar22) {
          if ((uVar22 < 9) ||
             (local_d0 + (lVar14 - (local_d8 + (long)param_4)) + 0x40 < (undefined1 *)0x20)) {
            uVar6 = 1;
          }
          else {
            uVar13 = (ulong)uVar22 - 1;
            uVar18 = uVar13 & 0xfffffffffffffffc;
            plVar24 = param_4 + 3;
            uVar6 = uVar18 | 1;
            puVar19 = (undefined8 *)(local_d0 + (lVar14 - local_d8) + 0x58);
            uVar12 = uVar18;
            do {
              lVar25 = plVar24[-1];
              lVar20 = plVar24[-2];
              lVar27 = plVar24[1];
              lVar26 = *plVar24;
              uVar12 = uVar12 - 4;
              plVar24 = plVar24 + 4;
              puVar19[-1] = CONCAT17(~(byte)((ulong)lVar25 >> 0x38),
                                     CONCAT16(~(byte)((ulong)lVar25 >> 0x30),
                                              CONCAT15(~(byte)((ulong)lVar25 >> 0x28),
                                                       CONCAT14(~(byte)((ulong)lVar25 >> 0x20),
                                                                CONCAT13(~(byte)((ulong)lVar25 >>
                                                                                0x18),
                                                                         CONCAT12(~(byte)((ulong)
                                                  lVar25 >> 0x10),
                                                  CONCAT11(~(byte)((ulong)lVar25 >> 8),~(byte)lVar25
                                                          )))))));
              puVar19[-2] = CONCAT17(~(byte)((ulong)lVar20 >> 0x38),
                                     CONCAT16(~(byte)((ulong)lVar20 >> 0x30),
                                              CONCAT15(~(byte)((ulong)lVar20 >> 0x28),
                                                       CONCAT14(~(byte)((ulong)lVar20 >> 0x20),
                                                                CONCAT13(~(byte)((ulong)lVar20 >>
                                                                                0x18),
                                                                         CONCAT12(~(byte)((ulong)
                                                  lVar20 >> 0x10),
                                                  CONCAT11(~(byte)((ulong)lVar20 >> 8),~(byte)lVar20
                                                          )))))));
              puVar19[1] = CONCAT17(~(byte)((ulong)lVar27 >> 0x38),
                                    CONCAT16(~(byte)((ulong)lVar27 >> 0x30),
                                             CONCAT15(~(byte)((ulong)lVar27 >> 0x28),
                                                      CONCAT14(~(byte)((ulong)lVar27 >> 0x20),
                                                               CONCAT13(~(byte)((ulong)lVar27 >>
                                                                               0x18),
                                                                        CONCAT12(~(byte)((ulong)
                                                  lVar27 >> 0x10),
                                                  CONCAT11(~(byte)((ulong)lVar27 >> 8),~(byte)lVar27
                                                          )))))));
              *puVar19 = CONCAT17(~(byte)((ulong)lVar26 >> 0x38),
                                  CONCAT16(~(byte)((ulong)lVar26 >> 0x30),
                                           CONCAT15(~(byte)((ulong)lVar26 >> 0x28),
                                                    CONCAT14(~(byte)((ulong)lVar26 >> 0x20),
                                                             CONCAT13(~(byte)((ulong)lVar26 >> 0x18)
                                                                      ,CONCAT12(~(byte)((ulong)
                                                  lVar26 >> 0x10),
                                                  CONCAT11(~(byte)((ulong)lVar26 >> 8),~(byte)lVar26
                                                          )))))));
              puVar19 = puVar19 + 4;
            } while (uVar12 != 0);
            if (uVar13 == uVar18) goto LAB_003f81dc;
          }
          lVar20 = uVar22 - uVar6;
          puVar11 = (ulong *)(param_4 + uVar6);
          puVar15 = (ulong *)(local_d0 + ((lVar14 + uVar6 * 8) - local_d8) + 0x40);
          do {
            lVar20 = lVar20 + -1;
            *puVar15 = ~*puVar11;
            puVar11 = puVar11 + 1;
            puVar15 = puVar15 + 1;
          } while (lVar20 != 0);
        }
LAB_003f81dc:
        iVar3 = local_c4;
        iVar4 = FUN_00390ee8(&local_90,lVar7,lVar8,param_5);
        lVar7 = local_98;
        uVar6 = local_d8;
        if (iVar4 != 0) {
          uVar2 = local_70;
          if ((int)uVar22 <= (int)local_70) {
            uVar2 = uVar22;
          }
          uVar12 = (ulong)uVar2;
          if (0 < (int)uVar2) {
            plVar16 = local_78;
            plVar24 = local_a8;
            do {
              uVar12 = uVar12 - 1;
              *plVar24 = *plVar16;
              plVar24 = plVar24 + (local_b8 & 0xffffffff);
              plVar16 = plVar16 + 1;
            } while (uVar12 != 0);
          }
          uVar2 = local_88;
          if ((int)uVar22 <= (int)local_88) {
            uVar2 = uVar22;
          }
          uVar12 = (ulong)uVar2;
          if (0 < (int)uVar2) {
            plVar24 = (long *)(local_d0 + (0x48 - local_d8));
            plVar16 = local_90;
            do {
              uVar12 = uVar12 - 1;
              *plVar24 = *plVar16;
              plVar24 = plVar24 + (local_b8 & 0xffffffff);
              plVar16 = plVar16 + 1;
            } while (uVar12 != 0);
          }
          if (1 < uVar5) {
            iVar4 = FUN_00390a4c(&local_78,&local_90,&local_90,local_98,param_5);
            lVar8 = lVar7;
            if (iVar4 == 0) {
LAB_003f85c8:
              uVar22 = 0;
              puVar9 = local_c0;
              plVar24 = local_a8;
              uVar6 = local_a0;
              goto LAB_003f8558;
            }
            uVar5 = local_70;
            if ((int)uVar22 <= (int)local_70) {
              uVar5 = uVar22;
            }
            uVar12 = (ulong)uVar5;
            if (0 < (int)uVar5) {
              plVar24 = (long *)(local_d0 + (0x50 - uVar6));
              plVar16 = local_78;
              do {
                uVar12 = uVar12 - 1;
                *plVar24 = *plVar16;
                plVar24 = plVar24 + (local_b8 & 0xffffffff);
                plVar16 = plVar16 + 1;
              } while (uVar12 != 0);
            }
            plVar24 = (long *)(local_d0 + (0x58 - uVar6));
            uVar6 = 3;
            uVar5 = (uint)local_b8;
            uVar12 = local_b8 & 0xffffffff;
            if (uVar5 < 5) {
              uVar5 = 4;
            }
            do {
              iVar4 = FUN_00390a4c(&local_78,&local_90,&local_78,local_98,param_5);
              lVar8 = local_98;
              if (iVar4 == 0) goto LAB_003f85c8;
              uVar2 = local_70;
              if ((int)uVar22 <= (int)local_70) {
                uVar2 = uVar22;
              }
              uVar13 = (ulong)uVar2;
              plVar16 = local_78;
              plVar17 = plVar24;
              if (0 < (int)uVar2) {
                do {
                  uVar13 = uVar13 - 1;
                  *plVar17 = *plVar16;
                  plVar16 = plVar16 + 1;
                  plVar17 = plVar17 + uVar12;
                } while (uVar13 != 0);
              }
              uVar6 = uVar6 + 1;
              plVar24 = plVar24 + 1;
            } while (uVar6 != uVar5);
          }
          lVar8 = local_98;
          uVar6 = local_a0;
          plVar24 = local_a8;
          uVar12 = local_b0;
          iVar3 = iVar3 * 0x40;
          iVar4 = 0;
          iVar23 = (int)local_b0;
          if (iVar23 != 0) {
            iVar4 = (iVar3 + -1) / iVar23;
          }
          uVar5 = ((iVar3 + -1) - iVar4 * iVar23) + 1;
          uVar21 = iVar3 - uVar5;
          uVar2 = uVar21 + 0x3f;
          if ((int)uVar5 <= iVar3) {
            uVar2 = uVar21;
          }
          if ((int)(uVar21 + 0x3f) < 0 == SCARRY4(uVar21,0x3f)) {
            uVar1 = (int)uVar2 >> 6;
            if ((int)uVar1 < (int)param_3[1]) {
              uVar2 = uVar21 - (uVar2 & 0xffffffc0);
              uVar13 = *(ulong *)(*param_3 + (ulong)uVar1 * 8);
              if (uVar2 != 0) {
                uVar13 = uVar13 >> ((ulong)uVar2 & 0x3f);
                if ((int)(uVar1 + 1) < (int)param_3[1]) {
                  uVar13 = *(long *)(*param_3 + (ulong)(uVar1 + 1) * 8) << ((ulong)-uVar2 & 0x3f) |
                           uVar13;
                }
              }
            }
            else {
              uVar13 = 0;
            }
          }
          else {
            uVar13 = 0;
          }
          iVar3 = FUN_003f86a8(&local_78,uVar22,local_a8,
                               (uint)uVar13 & ~(-1 << (ulong)(uVar5 & 0x1f)),local_b0 & 0xffffffff);
          if (iVar3 == 0) {
            uVar22 = 0;
            puVar9 = local_c0;
            goto LAB_003f8558;
          }
          iVar3 = (int)local_b8;
          do {
            if ((int)uVar21 < 1) {
              iVar3 = FUN_00390dd8(param_1,&local_78,lVar8,param_5);
              uVar22 = (uint)(iVar3 != 0);
              puVar9 = local_c0;
              plVar24 = local_a8;
              uVar6 = local_a0;
              goto LAB_003f8558;
            }
            iVar4 = FUN_00390a4c(&local_78,&local_78,&local_78,lVar8,param_5);
            if ((iVar4 == 0) ||
               ((iVar23 != 1 &&
                (((iVar4 = FUN_00390a4c(&local_78,&local_78,&local_78,lVar8,param_5), iVar4 == 0 ||
                  (iVar4 = FUN_00390a4c(&local_78,&local_78,&local_78,lVar8,param_5), iVar4 == 0))
                 || ((iVar23 != 3 &&
                     ((iVar4 = FUN_00390a4c(&local_78,&local_78,&local_78,lVar8,param_5), iVar4 == 0
                      || ((iVar23 != 4 &&
                          ((iVar4 = FUN_00390a4c(&local_78,&local_78,&local_78,lVar8,param_5),
                           iVar4 == 0 ||
                           ((iVar23 != 5 &&
                            (iVar4 = FUN_00390a4c(&local_78,&local_78,&local_78,lVar8,param_5),
                            iVar4 == 0)))))))))))))))) break;
            uVar5 = FUN_003f8644(param_3,uVar21 - iVar23);
            iVar4 = FUN_003f86a8(&local_90,uVar22,local_a8,iVar3 - 1U & uVar5,uVar12 & 0xffffffff);
            if (iVar4 == 0) break;
            uVar21 = uVar21 - iVar23;
            iVar4 = FUN_00390a4c(&local_78,&local_78,&local_90,lVar8,param_5);
          } while (iVar4 != 0);
        }
      }
      else {
        uVar10 = FUN_0038f23c();
        lVar8 = local_98;
        iVar3 = FUN_00390ee8(&local_78,uVar10,local_98,param_5);
        uVar5 = (uint)local_b0;
        if (iVar3 != 0) goto LAB_003f81dc;
      }
      uVar22 = 0;
      puVar9 = local_c0;
      plVar24 = local_a8;
      uVar6 = local_a0;
    }
    else {
      uVar22 = 0;
      puVar9 = (undefined1 *)0x0;
      plVar24 = (long *)0x0;
      uVar6 = 0;
    }
LAB_003f8558:
    iVar3 = (int)uVar6;
    if (param_6 != 0) goto LAB_003f8564;
  }
  FUN_00390f94(lVar8);
LAB_003f8564:
  if (plVar24 != (long *)0x0) {
    FUN_003c89b8(plVar24,(long)iVar3);
    FUN_003c86b4(puVar9,"crypto/bn/bn_exp.c",0x485);
  }
  FUN_0039180c(param_5);
  return (ulong)uVar22;
}


// ===== 003f8644  FUN_003f8644 =====

ulong FUN_003f8644(long *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  
  iVar2 = param_2 + 0x3f;
  if (-1 < param_2) {
    iVar2 = param_2;
  }
  if (param_2 + 0x3f < 0 == SCARRY4(param_2,0x3f)) {
    uVar1 = iVar2 >> 6;
    if ((int)uVar1 < (int)param_1[1]) {
      uVar3 = param_2 % 0x40;
      uVar4 = *(ulong *)(*param_1 + (ulong)uVar1 * 8);
      if (uVar3 == 0) {
        return uVar4;
      }
      uVar4 = uVar4 >> ((ulong)uVar3 & 0x3f);
      if ((int)param_1[1] <= (int)(uVar1 + 1)) {
        return uVar4;
      }
      return *(long *)(*param_1 + (ulong)(uVar1 + 1) * 8) << ((ulong)-uVar3 & 0x3f) | uVar4;
    }
  }
  return 0;
}


// ===== 003f86a8  FUN_003f86a8 =====

long FUN_003f86a8(long *param_1,uint param_2,long param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  
  uVar19 = (ulong)param_2;
  lVar5 = FUN_0038f924();
  if (lVar5 != 0) {
    uVar14 = (ulong)(uint)(1 << (ulong)(param_5 & 0x1f));
    if ((int)param_5 < 4) {
      if (0 < (int)param_2) {
        lVar5 = *param_1;
        uVar12 = 0;
        do {
          uVar16 = 0;
          uVar13 = 0;
          do {
            uVar6 = (uint)uVar16;
            uVar18 = *(ulong *)(param_3 + uVar16 * 8);
            uVar16 = uVar16 + 1;
            if (-1 < (int)((uVar6 ^ param_4) - 1 & ~param_4)) {
              uVar18 = 0;
            }
            uVar13 = uVar18 | uVar13;
          } while (uVar14 != uVar16);
          *(ulong *)(lVar5 + uVar12 * 8) = uVar13;
          uVar12 = uVar12 + 1;
          param_3 = param_3 + uVar14 * 8;
        } while (uVar12 != uVar19);
      }
    }
    else if (0 < (int)param_2) {
      param_5 = param_5 - 2;
      uVar6 = (int)param_4 >> (param_5 & 0x1f);
      uVar3 = 1 << (ulong)(param_5 & 0x1f);
      uVar12 = (ulong)uVar3;
      uVar16 = (ulong)(uint)(3 << (ulong)(param_5 & 0x1f));
      param_4 = uVar3 - 1 & param_4;
      uVar3 = (uVar6 ^ 3) - 1 & (uVar6 ^ 0xffffffff);
      lVar5 = *param_1;
      lVar17 = (long)(2 << (ulong)(param_5 & 0x1f));
      uVar1 = (uVar6 ^ 2) - 1 & (uVar6 ^ 0xffffffff);
      uVar2 = (uVar6 ^ 1) - 1 & (uVar6 ^ 0xffffffff);
      uVar4 = ~param_4;
      if (uVar6 == 0) {
        if ((int)uVar2 < 0) {
          if ((int)uVar1 < 0) {
            if ((int)uVar3 < 0) {
              lVar7 = param_3 + uVar16 * 8;
              lVar8 = uVar14 * 8;
              lVar17 = param_3 + lVar17 * 8;
              lVar15 = param_3 + uVar12 * 8;
              uVar14 = 0;
              do {
                uVar16 = 0;
                uVar13 = 0;
                do {
                  lVar9 = uVar16 * 8;
                  uVar6 = (uint)uVar16;
                  uVar16 = uVar16 + 1;
                  uVar18 = *(ulong *)(lVar15 + lVar9) | *(ulong *)(param_3 + lVar9) |
                           *(ulong *)(lVar17 + lVar9) | *(ulong *)(lVar7 + lVar9);
                  if (-1 < (int)((param_4 ^ uVar6) - 1 & uVar4)) {
                    uVar18 = 0;
                  }
                  uVar13 = uVar18 | uVar13;
                } while (uVar12 != uVar16);
                *(ulong *)(lVar5 + uVar14 * 8) = uVar13;
                uVar14 = uVar14 + 1;
                lVar7 = lVar7 + lVar8;
                lVar17 = lVar17 + lVar8;
                lVar15 = lVar15 + lVar8;
                param_3 = param_3 + lVar8;
              } while (uVar14 != uVar19);
            }
            else {
              lVar15 = uVar14 * 8;
              lVar17 = param_3 + lVar17 * 8;
              lVar7 = param_3 + uVar12 * 8;
              uVar14 = 0;
              do {
                uVar16 = 0;
                uVar13 = 0;
                do {
                  lVar8 = uVar16 * 8;
                  uVar6 = (uint)uVar16;
                  uVar16 = uVar16 + 1;
                  uVar18 = *(ulong *)(lVar7 + lVar8) | *(ulong *)(param_3 + lVar8) |
                           *(ulong *)(lVar17 + lVar8);
                  if (-1 < (int)((param_4 ^ uVar6) - 1 & uVar4)) {
                    uVar18 = 0;
                  }
                  uVar13 = uVar18 | uVar13;
                } while (uVar12 != uVar16);
                *(ulong *)(lVar5 + uVar14 * 8) = uVar13;
                uVar14 = uVar14 + 1;
                lVar17 = lVar17 + lVar15;
                lVar7 = lVar7 + lVar15;
                param_3 = param_3 + lVar15;
              } while (uVar14 != uVar19);
            }
          }
          else if ((int)uVar3 < 0) {
            lVar17 = param_3 + uVar16 * 8;
            lVar15 = uVar14 * 8;
            lVar7 = param_3 + uVar12 * 8;
            uVar14 = 0;
            do {
              uVar16 = 0;
              uVar13 = 0;
              do {
                lVar8 = uVar16 * 8;
                uVar6 = (uint)uVar16;
                uVar16 = uVar16 + 1;
                uVar18 = *(ulong *)(lVar7 + lVar8) | *(ulong *)(param_3 + lVar8) |
                         *(ulong *)(lVar17 + lVar8);
                if (-1 < (int)((param_4 ^ uVar6) - 1 & uVar4)) {
                  uVar18 = 0;
                }
                uVar13 = uVar18 | uVar13;
              } while (uVar12 != uVar16);
              *(ulong *)(lVar5 + uVar14 * 8) = uVar13;
              uVar14 = uVar14 + 1;
              lVar17 = lVar17 + lVar15;
              lVar7 = lVar7 + lVar15;
              param_3 = param_3 + lVar15;
            } while (uVar14 != uVar19);
          }
          else {
            lVar17 = param_3 + uVar12 * 8;
            uVar16 = 0;
            do {
              uVar13 = 0;
              uVar18 = 0;
              do {
                lVar7 = uVar13 * 8;
                uVar6 = (uint)uVar13;
                uVar13 = uVar13 + 1;
                uVar10 = *(ulong *)(lVar17 + lVar7) | *(ulong *)(param_3 + lVar7);
                if (-1 < (int)((param_4 ^ uVar6) - 1 & uVar4)) {
                  uVar10 = 0;
                }
                uVar18 = uVar10 | uVar18;
              } while (uVar12 != uVar13);
              *(ulong *)(lVar5 + uVar16 * 8) = uVar18;
              uVar16 = uVar16 + 1;
              lVar17 = lVar17 + uVar14 * 8;
              param_3 = param_3 + uVar14 * 8;
            } while (uVar16 != uVar19);
          }
        }
        else if ((int)uVar1 < 0) {
          if ((int)uVar3 < 0) {
            lVar7 = param_3 + uVar16 * 8;
            lVar15 = uVar14 * 8;
            lVar17 = param_3 + lVar17 * 8;
            uVar14 = 0;
            do {
              uVar16 = 0;
              uVar13 = 0;
              do {
                lVar8 = uVar16 * 8;
                uVar6 = (uint)uVar16;
                uVar16 = uVar16 + 1;
                uVar18 = *(ulong *)(param_3 + lVar8) | *(ulong *)(lVar17 + lVar8) |
                         *(ulong *)(lVar7 + lVar8);
                if (-1 < (int)((param_4 ^ uVar6) - 1 & uVar4)) {
                  uVar18 = 0;
                }
                uVar13 = uVar18 | uVar13;
              } while (uVar12 != uVar16);
              *(ulong *)(lVar5 + uVar14 * 8) = uVar13;
              uVar14 = uVar14 + 1;
              lVar7 = lVar7 + lVar15;
              lVar17 = lVar17 + lVar15;
              param_3 = param_3 + lVar15;
            } while (uVar14 != uVar19);
          }
          else {
            lVar17 = param_3 + lVar17 * 8;
            uVar16 = 0;
            do {
              uVar13 = 0;
              uVar18 = 0;
              do {
                lVar7 = uVar13 * 8;
                uVar6 = (uint)uVar13;
                uVar13 = uVar13 + 1;
                uVar10 = *(ulong *)(param_3 + lVar7) | *(ulong *)(lVar17 + lVar7);
                if (-1 < (int)((param_4 ^ uVar6) - 1 & uVar4)) {
                  uVar10 = 0;
                }
                uVar18 = uVar10 | uVar18;
              } while (uVar12 != uVar13);
              *(ulong *)(lVar5 + uVar16 * 8) = uVar18;
              uVar16 = uVar16 + 1;
              lVar17 = lVar17 + uVar14 * 8;
              param_3 = param_3 + uVar14 * 8;
            } while (uVar16 != uVar19);
          }
        }
        else {
          lVar17 = param_3 + uVar16 * 8;
          uVar16 = 0;
          do {
            uVar13 = 0;
            uVar18 = 0;
            do {
              lVar7 = uVar13 * 8;
              uVar6 = (uint)uVar13;
              uVar13 = uVar13 + 1;
              uVar10 = *(ulong *)(lVar17 + lVar7);
              if (-1 < (int)uVar3) {
                uVar10 = 0;
              }
              uVar10 = *(ulong *)(param_3 + lVar7) | uVar10;
              if (-1 < (int)((param_4 ^ uVar6) - 1 & uVar4)) {
                uVar10 = 0;
              }
              uVar18 = uVar10 | uVar18;
            } while (uVar12 != uVar13);
            *(ulong *)(lVar5 + uVar16 * 8) = uVar18;
            uVar16 = uVar16 + 1;
            lVar17 = lVar17 + uVar14 * 8;
            param_3 = param_3 + uVar14 * 8;
          } while (uVar16 != uVar19);
        }
      }
      else if ((int)uVar2 < 0) {
        if ((int)uVar1 < 0) {
          if ((int)uVar3 < 0) {
            lVar7 = param_3 + uVar16 * 8;
            lVar15 = uVar14 * 8;
            lVar17 = param_3 + lVar17 * 8;
            param_3 = param_3 + uVar12 * 8;
            uVar14 = 0;
            do {
              uVar16 = 0;
              uVar13 = 0;
              do {
                lVar8 = uVar16 * 8;
                uVar6 = (uint)uVar16;
                uVar16 = uVar16 + 1;
                uVar18 = *(ulong *)(param_3 + lVar8) | *(ulong *)(lVar17 + lVar8) |
                         *(ulong *)(lVar7 + lVar8);
                if (-1 < (int)((param_4 ^ uVar6) - 1 & uVar4)) {
                  uVar18 = 0;
                }
                uVar13 = uVar18 | uVar13;
              } while (uVar12 != uVar16);
              *(ulong *)(lVar5 + uVar14 * 8) = uVar13;
              uVar14 = uVar14 + 1;
              lVar7 = lVar7 + lVar15;
              lVar17 = lVar17 + lVar15;
              param_3 = param_3 + lVar15;
            } while (uVar14 != uVar19);
          }
          else {
            lVar17 = param_3 + lVar17 * 8;
            param_3 = param_3 + uVar12 * 8;
            uVar16 = 0;
            do {
              uVar13 = 0;
              uVar18 = 0;
              do {
                lVar7 = uVar13 * 8;
                uVar6 = (uint)uVar13;
                uVar13 = uVar13 + 1;
                uVar10 = *(ulong *)(param_3 + lVar7) | *(ulong *)(lVar17 + lVar7);
                if (-1 < (int)((param_4 ^ uVar6) - 1 & uVar4)) {
                  uVar10 = 0;
                }
                uVar18 = uVar10 | uVar18;
              } while (uVar12 != uVar13);
              *(ulong *)(lVar5 + uVar16 * 8) = uVar18;
              uVar16 = uVar16 + 1;
              lVar17 = lVar17 + uVar14 * 8;
              param_3 = param_3 + uVar14 * 8;
            } while (uVar16 != uVar19);
          }
        }
        else if ((int)uVar3 < 0) {
          lVar17 = param_3 + uVar16 * 8;
          param_3 = param_3 + uVar12 * 8;
          uVar16 = 0;
          do {
            uVar13 = 0;
            uVar18 = 0;
            do {
              lVar7 = uVar13 * 8;
              uVar6 = (uint)uVar13;
              uVar13 = uVar13 + 1;
              uVar10 = *(ulong *)(param_3 + lVar7) | *(ulong *)(lVar17 + lVar7);
              if (-1 < (int)((param_4 ^ uVar6) - 1 & uVar4)) {
                uVar10 = 0;
              }
              uVar18 = uVar10 | uVar18;
            } while (uVar12 != uVar13);
            *(ulong *)(lVar5 + uVar16 * 8) = uVar18;
            uVar16 = uVar16 + 1;
            lVar17 = lVar17 + uVar14 * 8;
            param_3 = param_3 + uVar14 * 8;
          } while (uVar16 != uVar19);
        }
        else {
          param_3 = param_3 + uVar12 * 8;
          uVar16 = 0;
          do {
            uVar13 = 0;
            uVar18 = 0;
            do {
              lVar17 = uVar13 * 8;
              uVar6 = (uint)uVar13;
              uVar13 = uVar13 + 1;
              uVar10 = *(ulong *)(param_3 + lVar17);
              if (-1 < (int)((param_4 ^ uVar6) - 1 & uVar4)) {
                uVar10 = 0;
              }
              uVar18 = uVar10 | uVar18;
            } while (uVar12 != uVar13);
            *(ulong *)(lVar5 + uVar16 * 8) = uVar18;
            uVar16 = uVar16 + 1;
            param_3 = param_3 + uVar14 * 8;
          } while (uVar16 != uVar19);
        }
      }
      else {
        lVar7 = param_3 + uVar16 * 8;
        param_3 = param_3 + lVar17 * 8;
        uVar16 = 0;
        do {
          uVar13 = 0;
          uVar18 = 0;
          do {
            lVar17 = uVar13 * 8;
            uVar6 = (uint)uVar13;
            uVar13 = uVar13 + 1;
            uVar11 = *(ulong *)(param_3 + lVar17);
            uVar10 = *(ulong *)(lVar7 + lVar17);
            if (-1 < (int)uVar1) {
              uVar11 = 0;
            }
            if (-1 < (int)uVar3) {
              uVar10 = 0;
            }
            uVar11 = uVar11 | uVar10;
            if (-1 < (int)((param_4 ^ uVar6) - 1 & uVar4)) {
              uVar11 = 0;
            }
            uVar18 = uVar11 | uVar18;
          } while (uVar12 != uVar13);
          *(ulong *)(lVar5 + uVar16 * 8) = uVar18;
          uVar16 = uVar16 + 1;
          lVar7 = lVar7 + uVar14 * 8;
          param_3 = param_3 + uVar14 * 8;
        } while (uVar16 != uVar19);
      }
    }
    lVar5 = 1;
    *(uint *)(param_1 + 1) = param_2;
  }
  return lVar5;
}


// ===== 003f8db8  FUN_003f8db8 =====

undefined8
FUN_003f8db8(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined4 uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  long local_168 [33];
  
  iVar4 = FUN_0038f4e8(param_3,4);
  if (((iVar4 != 0) || (iVar4 = FUN_0038f4e8(param_2,4), iVar4 != 0)) ||
     (iVar4 = FUN_0038f4e8(param_4,4), iVar4 != 0)) {
    FUN_00379868();
    FUN_0037995c("crypto/bn/bn_exp.c",0x52c,"BN_mod_exp_simple");
    uVar1 = 0xc0101;
LAB_003f8e44:
    FUN_00379a5c(3,uVar1,0);
    return 0;
  }
  if (param_1 == param_4) {
    FUN_00379868();
    FUN_0037995c("crypto/bn/bn_exp.c",0x531,"BN_mod_exp_simple");
    uVar1 = 0x80106;
    goto LAB_003f8e44;
  }
  iVar4 = FUN_0038f2c0(param_3);
  if (iVar4 == 0) {
    iVar4 = FUN_003907ec(param_4,1);
    if (iVar4 != 0) {
      FUN_003907e0(param_1);
      return 1;
    }
    uVar7 = FUN_0038f9ec(param_1,1);
    return uVar7;
  }
  FUN_003916e0(param_5);
  uVar7 = FUN_00391898(param_5);
  lVar8 = FUN_00391898(param_5);
  local_168[0] = lVar8;
  if ((lVar8 != 0) && (iVar5 = FUN_00397158(lVar8,param_2,param_4,param_5), iVar5 != 0)) {
    iVar5 = FUN_0038f448(lVar8);
    if (iVar5 != 0) {
      FUN_003907e0(param_1);
      uVar7 = 1;
      goto LAB_003f92ec;
    }
    if (iVar4 < 0x2a0) {
      if (0xef < iVar4) {
        uVar12 = 5;
        goto LAB_003f8f90;
      }
      if (0x4f < iVar4) {
        uVar12 = 4;
        goto LAB_003f8f90;
      }
      if (0x17 < iVar4) {
        uVar12 = 3;
        goto LAB_003f8f90;
      }
      uVar12 = 1;
    }
    else {
      uVar12 = 6;
LAB_003f8f90:
      iVar5 = FUN_003977b4(uVar7,lVar8,lVar8,param_4,param_5);
      if (iVar5 == 0) goto LAB_003f92e8;
      lVar8 = 0;
      do {
        lVar9 = FUN_00391898(param_5);
        local_168[lVar8 + 1] = lVar9;
        if ((lVar9 == 0) ||
           (iVar5 = FUN_003977b4(lVar9,local_168[lVar8],uVar7,param_4,param_5), iVar5 == 0))
        goto LAB_003f92e8;
        iVar5 = (int)lVar8;
        lVar8 = lVar8 + 1;
      } while (iVar5 + 2U >> (ulong)(uVar12 - 1 & 0x1f) == 0);
    }
    if (((param_1 != param_3) ||
        ((param_3 = FUN_00391898(param_5), param_3 != 0 &&
         (lVar8 = FUN_0038f85c(param_3,param_1), lVar8 != 0)))) &&
       (iVar5 = FUN_0038f9ec(param_1,1), iVar5 != 0)) {
      bVar2 = false;
      iVar4 = iVar4 + -1;
      bVar3 = true;
      do {
        while (iVar5 = FUN_00390428(param_3,iVar4), iVar5 != 0) {
          uVar13 = 0;
          uVar10 = 1;
          if ((1 < uVar12) && (0 < iVar4)) {
            iVar5 = FUN_00390428(param_3,iVar4 + -1);
            uVar13 = (uint)(iVar5 != 0);
            uVar10 = 3;
            if (iVar5 == 0) {
              uVar10 = 1;
            }
            if (iVar4 != 1) {
              iVar6 = FUN_00390428(param_3,iVar4 + -2);
              uVar11 = 1;
              if (iVar5 == 0) {
                uVar11 = 2;
              }
              if (iVar6 != 0) {
                uVar13 = 2;
                uVar10 = (uVar10 << (ulong)uVar11) + 1;
              }
              if ((uVar12 != 3) && (2 < iVar4)) {
                iVar5 = FUN_00390428(param_3,iVar4 + -3);
                uVar11 = uVar13 ^ 3;
                if (iVar5 != 0) {
                  uVar13 = 3;
                }
                if (iVar5 != 0) {
                  uVar10 = uVar10 << (ulong)uVar11 | 1;
                }
                if ((uVar12 != 4) && (iVar4 != 3)) {
                  iVar5 = FUN_00390428(param_3,iVar4 + -4);
                  uVar11 = 4 - uVar13;
                  if (iVar5 != 0) {
                    uVar13 = 4;
                  }
                  if (iVar5 != 0) {
                    uVar10 = (uVar10 << (ulong)(uVar11 & 0x1f)) + 1;
                  }
                  if ((uVar12 != 5) && (4 < iVar4)) {
                    iVar5 = FUN_00390428(param_3,iVar4 + -5);
                    uVar11 = 5 - uVar13;
                    if (iVar5 != 0) {
                      uVar13 = 5;
                    }
                    if (iVar5 != 0) {
                      uVar10 = uVar10 << (ulong)(uVar11 & 0x1f) | 1;
                    }
                  }
                }
              }
            }
          }
          if (((!bVar3) &&
              ((iVar5 = FUN_003977b4(param_1,param_1,param_1,param_4,param_5), iVar5 == 0 ||
               ((uVar13 != 0 &&
                ((iVar5 = FUN_003977b4(param_1,param_1,param_1,param_4,param_5), iVar5 == 0 ||
                 ((uVar13 != 1 &&
                  ((iVar5 = FUN_003977b4(param_1,param_1,param_1,param_4,param_5), iVar5 == 0 ||
                   ((uVar13 != 2 &&
                    ((iVar5 = FUN_003977b4(param_1,param_1,param_1,param_4,param_5), iVar5 == 0 ||
                     ((uVar13 != 3 &&
                      ((iVar5 = FUN_003977b4(param_1,param_1,param_1,param_4,param_5), iVar5 == 0 ||
                       ((uVar13 != 4 &&
                        ((iVar5 = FUN_003977b4(param_1,param_1,param_1,param_4,param_5), iVar5 == 0
                         || ((uVar13 != 5 &&
                             ((iVar5 = FUN_003977b4(param_1,param_1,param_1,param_4,param_5),
                              iVar5 == 0 ||
                              (iVar5 = FUN_003977b4(param_1,param_1,param_1,param_4,param_5),
                              iVar5 == 0)))))))))))))))))))))))))))) ||
             (iVar5 = FUN_003977b4(param_1,param_1,local_168[(int)uVar10 >> 1],param_4,param_5),
             iVar5 == 0)) goto LAB_003f92e8;
          bVar3 = false;
          bVar2 = true;
          iVar4 = ~uVar13 + iVar4;
          uVar7 = 1;
          if (iVar4 < 0) goto LAB_003f92ec;
        }
        if ((bVar2) && (iVar5 = FUN_003977b4(param_1,param_1,param_1,param_4,param_5), iVar5 == 0))
        goto LAB_003f92e8;
        iVar4 = iVar4 + -1;
        uVar7 = 1;
      } while (iVar4 != -1);
      goto LAB_003f92ec;
    }
  }
LAB_003f92e8:
  uVar7 = 0;
LAB_003f92ec:
  FUN_0039180c(uVar7,param_5);
  return uVar7;
}


// ===== 003f9300  FUN_003f9300 =====

uint FUN_003f9300(void)

{
  uint uVar1;
  uint uVar2;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  uVar1 = FUN_003f7e6c();
  uVar2 = FUN_003f7e6c(in_x5,in_x6,in_x7,in_stack_00000000,in_stack_00000010,in_stack_00000008);
  return uVar2 & uVar1;
}


// ===== 003f9374  FUN_003f9374 =====

void FUN_003f9374(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_0038f578();
  FUN_0038f578(param_1 + 3);
  return;
}


// ===== 003f93a4  FUN_003f93a4 =====

long FUN_003f93a4(void)

{
  long lVar1;
  
  lVar1 = FUN_003c8474(0x40,"crypto/bn/bn_recp.c",0x18);
  if (lVar1 != 0) {
    FUN_0038f578();
    FUN_0038f578(lVar1 + 0x18);
    *(undefined4 *)(lVar1 + 0x38) = 1;
  }
  return lVar1;
}


// ===== 003f93f0  FUN_003f93f0 =====

void FUN_003f93f0(long param_1)

{
  if (param_1 != 0) {
    FUN_0038f4f4();
    FUN_0038f4f4(param_1 + 0x18);
    if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
      FUN_003c86b4(param_1,"crypto/bn/bn_recp.c",0x28);
      return;
    }
  }
  return;
}


// ===== 003f9440  FUN_003f9440 =====

long FUN_003f9440(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  iVar1 = FUN_0038f448(param_2);
  if (iVar1 == 0) {
    lVar3 = FUN_0038f85c(param_1,param_2);
    if (lVar3 != 0) {
      FUN_003907e0(param_1 + 0x18);
      uVar2 = FUN_0038f2c0(param_2);
      *(undefined4 *)(param_1 + 0x30) = uVar2;
      *(undefined4 *)(param_1 + 0x34) = 0;
      return 1;
    }
  }
  else {
    lVar3 = 0;
  }
  return lVar3;
}


// ===== 003f94a4  FUN_003f94a4 =====

undefined4
FUN_003f94a4(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  FUN_003916e0(param_5);
  lVar3 = FUN_00391898(param_5);
  if (lVar3 == 0) {
LAB_003f9540:
    uVar2 = 0;
  }
  else {
    if (param_3 != 0) {
      if (param_2 == param_3) {
        iVar1 = FUN_00395c7c(lVar3,param_3,param_5);
      }
      else {
        iVar1 = FUN_00392a80(lVar3,param_2,param_3,param_5);
      }
      param_2 = lVar3;
      if (iVar1 == 0) goto LAB_003f9540;
    }
    uVar2 = FUN_003f9564(0,param_1,param_2,param_4,param_5);
  }
  FUN_0039180c(param_5);
  return uVar2;
}


// ===== 003f9564  FUN_003f9564 =====

bool FUN_003f9564(long param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  
  FUN_003916e0(param_5);
  if (param_1 == 0) {
    param_1 = FUN_00391898(param_5);
    if (param_2 == 0) goto LAB_003f95d0;
LAB_003f95a4:
    uVar5 = FUN_00391898(param_5);
    lVar6 = FUN_00391898(param_5);
  }
  else {
    if (param_2 != 0) goto LAB_003f95a4;
LAB_003f95d0:
    param_2 = FUN_00391898(param_5);
    uVar5 = FUN_00391898(param_5);
    lVar6 = FUN_00391898(param_5);
  }
  if (lVar6 != 0) {
    iVar2 = FUN_003901ac(param_3,param_4);
    if (iVar2 < 0) {
      FUN_003907e0(param_1);
      lVar6 = FUN_0038f85c(param_2,param_3);
      bVar1 = lVar6 != 0;
      goto LAB_003f9820;
    }
    iVar3 = FUN_0038f2c0(param_3);
    iVar2 = *(int *)(param_4 + 0x30) * 2;
    if (iVar2 <= iVar3) {
      iVar2 = iVar3;
    }
    iVar3 = iVar2;
    if (iVar2 != *(int *)(param_4 + 0x34)) {
      FUN_003916e0(param_5);
      lVar7 = FUN_00391898(param_5);
      if ((lVar7 == 0) || (iVar4 = FUN_003902b8(lVar7,iVar2), iVar4 == 0)) {
        FUN_0039180c(param_5);
        *(undefined4 *)(param_4 + 0x34) = 0xffffffff;
        goto LAB_003f981c;
      }
      iVar4 = FUN_00397cac(param_4 + 0x18,0,lVar7,param_4,param_5);
      if (iVar4 == 0) {
        iVar3 = -1;
      }
      FUN_0039180c(param_5);
      *(int *)(param_4 + 0x34) = iVar3;
    }
    if ((((iVar3 != -1) &&
         (iVar3 = FUN_0039886c(uVar5,param_3,*(undefined4 *)(param_4 + 0x30)), iVar3 != 0)) &&
        (iVar3 = FUN_00392a80(lVar6,uVar5,param_4 + 0x18,param_5), iVar3 != 0)) &&
       (iVar2 = FUN_0039886c(param_1,lVar6,iVar2 - *(int *)(param_4 + 0x30)), iVar2 != 0)) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      iVar2 = FUN_00392a80(lVar6,param_4,param_1,param_5);
      if ((iVar2 != 0) && (iVar2 = FUN_00398e30(param_2,param_3,lVar6), iVar2 != 0)) {
        *(undefined4 *)(param_2 + 0x10) = 0;
        iVar2 = FUN_003901ac(param_2,param_4);
        if (iVar2 < 0) {
LAB_003f9848:
          iVar2 = FUN_0038f448(param_2);
          if (iVar2 == 0) {
            uVar8 = *(undefined4 *)(param_3 + 0x10);
          }
          else {
            uVar8 = 0;
          }
          *(undefined4 *)(param_2 + 0x10) = uVar8;
          bVar1 = true;
          *(uint *)(param_1 + 0x10) = *(uint *)(param_4 + 0x10) ^ *(uint *)(param_3 + 0x10);
          goto LAB_003f9820;
        }
        iVar2 = FUN_00398e30(param_2,param_2,param_4);
        if ((iVar2 != 0) && (iVar2 = FUN_0039928c(param_1,1), iVar2 != 0)) {
          iVar2 = FUN_003901ac(param_2,param_4);
          if (iVar2 < 0) goto LAB_003f9848;
          iVar2 = FUN_00398e30(param_2,param_2,param_4);
          if ((iVar2 != 0) && (iVar2 = FUN_0039928c(param_1,1), iVar2 != 0)) {
            iVar2 = FUN_003901ac(param_2,param_4);
            if (iVar2 < 0) goto LAB_003f9848;
            iVar2 = FUN_00398e30(param_2,param_2,param_4);
            if ((iVar2 != 0) && (iVar2 = FUN_0039928c(param_1,1), iVar2 != 0)) {
              iVar2 = FUN_003901ac(param_2,param_4);
              if (iVar2 < 0) goto LAB_003f9848;
              FUN_00379868();
              FUN_0037995c("crypto/bn/bn_recp.c",0x93,"BN_div_recp");
              FUN_00379a5c(3,0x65,0);
            }
          }
        }
      }
    }
  }
LAB_003f981c:
  bVar1 = false;
LAB_003f9820:
  FUN_0039180c(param_5);
  return bVar1;
}


// ===== 003f987c  FUN_003f987c =====

undefined4 FUN_003f987c(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  
  FUN_003916e0(param_4);
  lVar2 = FUN_00391898(param_4);
  if ((lVar2 == 0) || (iVar1 = FUN_003902b8(lVar2,param_3), iVar1 == 0)) {
    param_3 = 0xffffffff;
  }
  else {
    iVar1 = FUN_00397cac(param_1,0,lVar2,param_2,param_4);
    if (iVar1 == 0) {
      param_3 = 0xffffffff;
    }
  }
  FUN_0039180c(param_4);
  return param_3;
}


// ===== 003f990c  FUN_003f990c =====

void FUN_003f990c(long param_1)

{
  FUN_0038f2c0(*(undefined8 *)(param_1 + 0x28));
  return;
}


// ===== 003f9914  FUN_003f9914 =====

int FUN_003f9914(long param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_0038f2c0(*(undefined8 *)(param_1 + 0x28));
  iVar1 = iVar2 + 0xe;
  if (iVar2 + 7 < 0 == SCARRY4(iVar2,7)) {
    iVar1 = iVar2 + 7;
  }
  return iVar1 >> 3;
}


// ===== 003f993c  FUN_003f993c =====

void FUN_003f993c(void)

{
  long in_x3;
  
                    /* WARNING: Could not recover jumptable at 0x003f9944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(in_x3 + 0x18) + 8))();
  return;
}


// ===== 003f9948  FUN_003f9948 =====

void FUN_003f9948(void)

{
  long in_x3;
  
                    /* WARNING: Could not recover jumptable at 0x003f9950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(in_x3 + 0x18) + 0x18))();
  return;
}


// ===== 003f9954  FUN_003f9954 =====

void FUN_003f9954(void)

{
  long in_x3;
  
                    /* WARNING: Could not recover jumptable at 0x003f995c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(in_x3 + 0x18) + 0x20))();
  return;
}


// ===== 003f9960  FUN_003f9960 =====

void FUN_003f9960(void)

{
  long in_x3;
  
                    /* WARNING: Could not recover jumptable at 0x003f9968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(in_x3 + 0x18) + 0x10))();
  return;
}


// ===== 003f996c  FUN_003f996c =====

ulong FUN_003f996c(ulong param_1)

{
  if (param_1 != 0) {
    param_1 = (ulong)*(uint *)(*(long *)(param_1 + 0x18) + 0x48);
  }
  return param_1;
}


// ===== 003f997c  FUN_003f997c =====

void FUN_003f997c(long param_1)

{
  FUN_003f9e50(*(undefined8 *)(param_1 + 0xc0));
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(uint *)(param_1 + 0xa4) = *(uint *)(param_1 + 0xa4) & 0xfffffff7 | 0x80;
  return;
}


// ===== 003f99b4  FUN_003f99b4 =====

long FUN_003f99b4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0xc0) != 0) {
    FUN_003f9e50();
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(uint *)(param_1 + 0xa4) = *(uint *)(param_1 + 0xa4) & 0xfffffff7 | 0x80;
  }
  lVar1 = FUN_003f9a1c(param_1,param_2);
  *(long *)(param_1 + 0xc0) = lVar1;
  if (lVar1 != 0) {
    lVar1 = 1;
    *(uint *)(param_1 + 0xa4) = *(uint *)(param_1 + 0xa4) & 0xffffff7f | 8;
  }
  return lVar1;
}


// ===== 003f9a1c  FUN_003f9a1c =====

long FUN_003f9a1c(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar2 = param_2;
  if ((param_2 == 0) && (lVar2 = FUN_00391448(*(undefined8 *)(param_1 + 8)), lVar2 == 0)) {
    return 0;
  }
  FUN_003916e0(lVar2);
  lVar3 = FUN_00391898(lVar2);
  if (lVar3 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_crpt.c",0x84,"RSA_setup_blinding");
    uVar6 = 0x80003;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x30);
    if (lVar3 != 0) {
LAB_003f9a74:
      lVar4 = FUN_0038f584();
      if (lVar4 == 0) {
        FUN_00379868();
        FUN_0037995c("crypto/rsa/rsa_crpt.c",0x96,"RSA_setup_blinding");
        FUN_00379a5c(4,0x80003,0);
        lVar5 = 0;
        FUN_0039180c(lVar2);
      }
      else {
        FUN_003908e4(lVar4,*(undefined8 *)(param_1 + 0x28),4);
        lVar5 = FUN_003f9ff8(0,lVar3,lVar4,lVar2,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30),
                             *(undefined8 *)(param_1 + 0xa8));
        FUN_0038f4f4(lVar4);
        if (lVar5 == 0) {
          FUN_00379868();
          FUN_0037995c("crypto/rsa/rsa_crpt.c",0xa1,"RSA_setup_blinding");
          FUN_00379a5c(4,0x80003,0);
          FUN_0039180c(lVar2);
        }
        else {
          FUN_003f9e2c(lVar5);
          FUN_0039180c(lVar2);
        }
      }
      goto joined_r0x003f9ad0;
    }
    lVar3 = *(long *)(param_1 + 0x38);
    if (((lVar3 != 0) && (lVar5 = *(long *)(param_1 + 0x40), lVar5 != 0)) &&
       (lVar4 = *(long *)(param_1 + 0x48), lVar4 != 0)) {
      FUN_003916e0(lVar2);
      uVar6 = FUN_00391898(lVar2);
      uVar7 = FUN_00391898(lVar2);
      lVar8 = FUN_00391898(lVar2);
      if (lVar8 != 0) {
        uVar9 = FUN_0038f23c();
        iVar1 = FUN_00398f34(uVar7,lVar5,uVar9);
        if (iVar1 != 0) {
          uVar9 = FUN_0038f23c();
          iVar1 = FUN_00398f34(lVar8,lVar4,uVar9);
          if ((iVar1 != 0) && (iVar1 = FUN_00392a80(uVar6,uVar7,lVar8,lVar2), iVar1 != 0)) {
            lVar3 = FUN_00396a18(0,lVar3,uVar6,lVar2);
            FUN_0039180c(lVar2);
            if (lVar3 != 0) goto LAB_003f9a74;
            goto LAB_003f9c14;
          }
        }
      }
      FUN_0039180c(lVar2);
    }
LAB_003f9c14:
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_crpt.c",0x8b,"RSA_setup_blinding");
    uVar6 = 0x8c;
  }
  FUN_00379a5c(4,uVar6,0);
  lVar3 = 0;
  lVar5 = 0;
  FUN_0039180c(lVar2);
joined_r0x003f9ad0:
  if (lVar2 != param_2) {
    FUN_00391550(lVar2);
  }
  if (lVar3 != *(long *)(param_1 + 0x30)) {
    FUN_0038f4f4(lVar3);
  }
  return lVar5;
}


// ===== 003f9cd8  FUN_003f9cd8 =====

long * FUN_003f9cd8(long param_1,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  
  plVar3 = (long *)FUN_003c8474(0x48,"crypto/bn/bn_blind.c",0x24);
  if (plVar3 == (long *)0x0) {
    return (long *)0x0;
  }
  lVar4 = FUN_003d5150();
  plVar3[8] = lVar4;
  if (lVar4 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/bn/bn_blind.c",0x29,"BN_BLINDING_new");
    FUN_00379a5c(3,0x8000f,0);
    uVar5 = 0x2a;
    goto LAB_003f9e10;
  }
  uVar1 = FUN_003d52a8();
  *(undefined4 *)(plVar3 + 4) = uVar1;
  if (param_1 == 0) {
LAB_003f9d38:
    if (param_2 != 0) {
      lVar4 = FUN_0038f720(param_2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) goto LAB_003f9d94;
    }
    lVar4 = FUN_0038f720(param_3);
    plVar3[3] = lVar4;
    if (lVar4 != 0) {
      iVar2 = FUN_0038f4e8(param_3,4);
      if (iVar2 != 0) {
        FUN_00390944(plVar3[3],4);
      }
      *(undefined4 *)((long)plVar3 + 0x24) = 0xffffffff;
      return plVar3;
    }
  }
  else {
    lVar4 = FUN_0038f720(param_1);
    *plVar3 = lVar4;
    if (lVar4 != 0) goto LAB_003f9d38;
  }
LAB_003f9d94:
  FUN_0038f4f4(*plVar3);
  FUN_0038f4f4(plVar3[1]);
  FUN_0038f4f4(plVar3[2]);
  FUN_0038f4f4(plVar3[3]);
  FUN_003d51ac(plVar3[8]);
  uVar5 = 0x58;
LAB_003f9e10:
  FUN_003c86b4(plVar3,"crypto/bn/bn_blind.c",uVar5);
  return (long *)0x0;
}


// ===== 003f9e2c  FUN_003f9e2c =====

void FUN_003f9e2c(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_003d52a8();
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  return;
}


// ===== 003f9e50  FUN_003f9e50 =====

void FUN_003f9e50(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_0038f4f4(*param_1);
    FUN_0038f4f4(param_1[1]);
    FUN_0038f4f4(param_1[2]);
    FUN_0038f4f4(param_1[3]);
    FUN_003d51ac(param_1[8]);
    FUN_003c86b4(param_1,"crypto/bn/bn_blind.c",0x58);
    return;
  }
  return;
}


// ===== 003f9eb0  FUN_003f9eb0 =====

undefined8 FUN_003f9eb0(long *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((*param_1 == 0) || (lVar2 = param_1[1], lVar2 == 0)) {
    FUN_00379868();
    FUN_0037995c("crypto/bn/bn_blind.c",0x60,"BN_BLINDING_update");
    FUN_00379a5c(3,0x6b,0);
    uVar3 = 0;
    goto LAB_003f9fdc;
  }
  if (*(int *)((long)param_1 + 0x24) == -1) {
    *(undefined4 *)((long)param_1 + 0x24) = 1;
LAB_003f9f5c:
    if ((*(byte *)(param_1 + 5) & 1) == 0) {
      if (param_1[6] == 0) {
        uVar3 = FUN_003977b4(lVar2,lVar2,lVar2,param_1[3],param_2);
        if ((int)uVar3 == 0) goto LAB_003f9fdc;
        lVar2 = *param_1;
        uVar3 = FUN_003977b4(lVar2,lVar2,lVar2,param_1[3],param_2);
        iVar1 = (int)uVar3;
      }
      else {
        uVar3 = FUN_00390a4c(lVar2,lVar2,lVar2,param_1[6],param_2);
        if ((int)uVar3 == 0) goto LAB_003f9fdc;
        lVar2 = *param_1;
        uVar3 = FUN_00390a4c(lVar2,lVar2,lVar2,param_1[6],param_2);
        iVar1 = (int)uVar3;
      }
      if (iVar1 == 0) goto LAB_003f9fdc;
    }
  }
  else {
    iVar1 = *(int *)((long)param_1 + 0x24) + 1;
    *(int *)((long)param_1 + 0x24) = iVar1;
    if (((iVar1 != 0x20) || (param_1[2] == 0)) || ((*(byte *)(param_1 + 5) >> 1 & 1) != 0))
    goto LAB_003f9f5c;
    lVar2 = FUN_003f9ff8(param_1,0,0,param_2,0,0);
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_003f9fdc;
    }
  }
  uVar3 = 1;
LAB_003f9fdc:
  if (*(int *)((long)param_1 + 0x24) == 0x20) {
    *(undefined4 *)((long)param_1 + 0x24) = 0;
  }
  return uVar3;
}


// ===== 003f9ff8  FUN_003f9ff8 =====

long * FUN_003f9ff8(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                   long param_6)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  int local_44;
  
  plVar3 = param_1;
  if ((param_1 == (long *)0x0) && (plVar3 = (long *)FUN_003f9cd8(0,0), plVar3 == (long *)0x0)) {
    return (long *)0x0;
  }
  if (*plVar3 == 0) {
    lVar4 = FUN_0038f584();
    *plVar3 = lVar4;
    if (lVar4 == 0) goto LAB_003fa148;
  }
  if (plVar3[1] == 0) {
    lVar4 = FUN_0038f584();
    plVar3[1] = lVar4;
    if (lVar4 == 0) goto LAB_003fa148;
  }
  lVar4 = plVar3[2];
  if (param_2 != 0) {
    FUN_0038f4f4();
    lVar4 = FUN_0038f720(param_2);
    plVar3[2] = lVar4;
  }
  if (lVar4 != 0) {
    if (param_5 != 0) {
      plVar3[7] = param_5;
    }
    if (param_6 != 0) {
      plVar3[6] = param_6;
    }
    iVar2 = FUN_003f6804(*plVar3,plVar3[3],0,param_4);
    if (iVar2 != 0) {
      uVar5 = 0xffffffdf;
      do {
        lVar4 = FUN_00396118(plVar3[1],*plVar3,plVar3[3],param_4,&local_44);
        if (lVar4 != 0) {
          if (((code *)plVar3[7] == (code *)0x0) || (plVar3[6] == 0)) {
            iVar2 = FUN_003f6cb4(*plVar3,*plVar3,plVar3[2],plVar3[3],param_4);
          }
          else {
            iVar2 = (*(code *)plVar3[7])(*plVar3,*plVar3,plVar3[2],plVar3[3],param_4);
          }
          if (iVar2 != 0) {
            if (plVar3[6] == 0) {
              return plVar3;
            }
            iVar2 = FUN_00390ee8(plVar3[1],plVar3[1],plVar3[6],param_4);
            if (iVar2 != 0) {
              iVar2 = FUN_00390ee8(*plVar3,*plVar3,plVar3[6],param_4);
              if (param_1 != (long *)0x0) {
                return plVar3;
              }
              if (iVar2 != 0) {
                return plVar3;
              }
              goto LAB_003fa14c;
            }
          }
          break;
        }
        if (local_44 == 0) break;
        bVar1 = 0xfffffffe < uVar5;
        uVar5 = uVar5 + 1;
        if (bVar1) {
          FUN_00379868();
          FUN_0037995c("crypto/bn/bn_blind.c",0x11c,"BN_BLINDING_create_param");
          FUN_00379a5c(3,0x71,0);
          break;
        }
        iVar2 = FUN_003f6804(*plVar3,plVar3[3],0,param_4);
      } while (iVar2 != 0);
    }
  }
LAB_003fa148:
  if (param_1 == (long *)0x0) {
LAB_003fa14c:
    FUN_0038f4f4(*plVar3);
    FUN_0038f4f4(plVar3[1]);
    FUN_0038f4f4(plVar3[2]);
    FUN_0038f4f4(plVar3[3]);
    FUN_003d51ac(plVar3[8]);
    FUN_003c86b4(plVar3,"crypto/bn/bn_blind.c",0x58);
    plVar3 = (long *)0x0;
  }
  return plVar3;
}


// ===== 003fa1fc  FUN_003fa1fc =====

void FUN_003fa1fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_003fa20c(param_1,0,param_2,param_3);
  return;
}


// ===== 003fa20c  FUN_003fa20c =====

undefined8 FUN_003fa20c(undefined8 param_1,long param_2,long *param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((*param_3 == 0) || (param_3[1] == 0)) {
    FUN_00379868();
    FUN_0037995c("crypto/bn/bn_blind.c",0x8b,"BN_BLINDING_convert_ex");
    FUN_00379a5c(3,0x6b,0);
  }
  else {
    if (*(int *)((long)param_3 + 0x24) == -1) {
      *(undefined4 *)((long)param_3 + 0x24) = 0;
    }
    else {
      iVar1 = FUN_003f9eb0(param_3,param_4);
      if (iVar1 == 0) {
        return 0;
      }
    }
    if ((param_2 == 0) || (lVar2 = FUN_0038f85c(param_2,param_3[1]), lVar2 != 0)) {
      if (param_3[6] != 0) {
        uVar3 = FUN_00390a1c(param_1,param_1,*param_3,param_3[6],param_4);
        return uVar3;
      }
      uVar3 = FUN_003977b4(param_1,param_1,*param_3,param_3[3],param_4);
      return uVar3;
    }
  }
  return 0;
}


// ===== 003fa30c  FUN_003fa30c =====

void FUN_003fa30c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_003fa31c(param_1,0,param_2,param_3);
  return;
}


// ===== 003fa31c  FUN_003fa31c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_003fa31c(long *param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  if ((param_2 == 0) && (param_2 = *(long *)(param_3 + 8), param_2 == 0)) {
    FUN_00379868();
    FUN_0037995c("crypto/bn/bn_blind.c",0xad,"BN_BLINDING_invert_ex");
    FUN_00379a5c(3,0x6b,0);
    return 0;
  }
  if (*(long *)(param_3 + 0x30) == 0) {
    uVar3 = FUN_003977b4(param_1,param_1,param_2,*(undefined8 *)(param_3 + 0x18));
    return uVar3;
  }
  uVar1 = *(uint *)(param_2 + 8);
  uVar3 = (ulong)(int)uVar1;
  if (*(int *)((long)param_1 + 0xc) < (int)uVar1) goto LAB_003fa454;
  uVar2 = *(uint *)(param_1 + 1);
  lVar4 = (long)(int)uVar2;
  if (uVar1 != 0) {
    lVar5 = *param_1;
    if (uVar1 < 4) {
      uVar7 = 0;
    }
    else {
      uVar7 = uVar3 & 0xfffffffffffffffc;
      puVar8 = (undefined8 *)(lVar5 + 0x10);
      uVar10 = uVar7;
      lVar9 = _DAT_002003a0;
      lVar11 = _UNK_002003a8;
      do {
        auVar12._0_8_ = lVar9 - lVar4;
        auVar12._8_8_ = lVar11 - lVar4;
        uVar17 = puVar8[-1];
        uVar16 = puVar8[-2];
        uVar19 = puVar8[1];
        uVar18 = *puVar8;
        lVar9 = lVar9 + 4;
        lVar11 = lVar11 + 4;
        uVar10 = uVar10 - 4;
        auVar14._0_8_ = auVar12._0_8_ + 2;
        auVar14._8_8_ = auVar12._8_8_ + 2;
        auVar12 = NEON_cmlt(auVar12,0,8);
        auVar13._0_8_ =
             CONCAT17(auVar12[7] & (byte)((ulong)uVar16 >> 0x38),
                      CONCAT16(auVar12[6] & (byte)((ulong)uVar16 >> 0x30),
                               CONCAT15(auVar12[5] & (byte)((ulong)uVar16 >> 0x28),
                                        CONCAT14(auVar12[4] & (byte)((ulong)uVar16 >> 0x20),
                                                 CONCAT13(auVar12[3] & (byte)((ulong)uVar16 >> 0x18)
                                                          ,CONCAT12(auVar12[2] &
                                                                    (byte)((ulong)uVar16 >> 0x10),
                                                                    CONCAT11(auVar12[1] &
                                                                             (byte)((ulong)uVar16 >>
                                                                                   8),auVar12[0] &
                                                                                      (byte)uVar16))
                                                         )))));
        auVar13[8] = auVar12[8] & (byte)uVar17;
        auVar13[9] = auVar12[9] & (byte)((ulong)uVar17 >> 8);
        auVar13[10] = auVar12[10] & (byte)((ulong)uVar17 >> 0x10);
        auVar13[0xb] = auVar12[0xb] & (byte)((ulong)uVar17 >> 0x18);
        auVar13[0xc] = auVar12[0xc] & (byte)((ulong)uVar17 >> 0x20);
        auVar13[0xd] = auVar12[0xd] & (byte)((ulong)uVar17 >> 0x28);
        auVar13[0xe] = auVar12[0xe] & (byte)((ulong)uVar17 >> 0x30);
        auVar13[0xf] = auVar12[0xf] & (byte)((ulong)uVar17 >> 0x38);
        auVar12 = NEON_cmlt(auVar14,0,8);
        auVar15._0_8_ =
             CONCAT17(auVar12[7] & (byte)((ulong)uVar18 >> 0x38),
                      CONCAT16(auVar12[6] & (byte)((ulong)uVar18 >> 0x30),
                               CONCAT15(auVar12[5] & (byte)((ulong)uVar18 >> 0x28),
                                        CONCAT14(auVar12[4] & (byte)((ulong)uVar18 >> 0x20),
                                                 CONCAT13(auVar12[3] & (byte)((ulong)uVar18 >> 0x18)
                                                          ,CONCAT12(auVar12[2] &
                                                                    (byte)((ulong)uVar18 >> 0x10),
                                                                    CONCAT11(auVar12[1] &
                                                                             (byte)((ulong)uVar18 >>
                                                                                   8),auVar12[0] &
                                                                                      (byte)uVar18))
                                                         )))));
        auVar15[8] = auVar12[8] & (byte)uVar19;
        auVar15[9] = auVar12[9] & (byte)((ulong)uVar19 >> 8);
        auVar15[10] = auVar12[10] & (byte)((ulong)uVar19 >> 0x10);
        auVar15[0xb] = auVar12[0xb] & (byte)((ulong)uVar19 >> 0x18);
        auVar15[0xc] = auVar12[0xc] & (byte)((ulong)uVar19 >> 0x20);
        auVar15[0xd] = auVar12[0xd] & (byte)((ulong)uVar19 >> 0x28);
        auVar15[0xe] = auVar12[0xe] & (byte)((ulong)uVar19 >> 0x30);
        auVar15[0xf] = auVar12[0xf] & (byte)((ulong)uVar19 >> 0x38);
        puVar8[-1] = auVar13._8_8_;
        puVar8[-2] = auVar13._0_8_;
        puVar8[1] = auVar15._8_8_;
        *puVar8 = auVar15._0_8_;
        puVar8 = puVar8 + 4;
      } while (uVar10 != 0);
      if (uVar7 == uVar3) goto LAB_003fa448;
    }
    lVar9 = uVar3 - uVar7;
    lVar4 = uVar7 - lVar4;
    puVar6 = (ulong *)(lVar5 + uVar7 * 8);
    do {
      lVar9 = lVar9 + -1;
      uVar3 = lVar4 >> 0x3f;
      lVar4 = lVar4 + 1;
      *puVar6 = *puVar6 & uVar3;
      puVar6 = puVar6 + 1;
    } while (lVar9 != 0);
  }
LAB_003fa448:
  if ((int)uVar1 <= (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 1) = uVar1;
LAB_003fa454:
  uVar3 = FUN_00390a4c(param_1,param_1,param_2);
  FUN_0039097c(param_1);
  return uVar3 & 0xffffffff;
}


// ===== 003fa480  FUN_003fa480 =====

void FUN_003fa480(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_003d52a8();
  FUN_003d52b0(uVar1,*(undefined4 *)(param_1 + 0x20));
  return;
}


// ===== 003fa4a4  FUN_003fa4a4 =====

void FUN_003fa4a4(long param_1)

{
  FUN_003d518c(*(undefined8 *)(param_1 + 0x40));
  return;
}


// ===== 003fa4ac  FUN_003fa4ac =====

void FUN_003fa4ac(long param_1)

{
  FUN_003d519c(*(undefined8 *)(param_1 + 0x40));
  return;
}


// ===== 003fa4b4  FUN_003fa4b4 =====

undefined8 FUN_003fa4b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}


// ===== 003fa4bc  FUN_003fa4bc =====

void FUN_003fa4bc(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}


// ===== 003fa4c4  FUN_003fa4c4 =====

undefined8 FUN_003fa4c4(void)

{
  long lVar1;
  
  lVar1 = FUN_0037aa50(0x2000064);
  if (lVar1 != 0) {
    return 1;
  }
  FUN_00379fc4(&DAT_0077b5e8);
  return 1;
}


// ===== 003fa500  FUN_003fa500 =====

void FUN_003fa500(void)

{
  FUN_003fa508(0);
  return;
}


// ===== 003fa508  FUN_003fa508 =====

long FUN_003fa508(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  
  lVar3 = FUN_003c8474(0xe0,"crypto/rsa/rsa_lib.c",0x4d);
  if (lVar3 == 0) {
    return 0;
  }
  lVar4 = FUN_003d5150();
  *(long *)(lVar3 + 0xd0) = lVar4;
  if (lVar4 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_lib.c",0x54,"rsa_new_intern");
    FUN_00379a5c(4,0x8000f,0);
    FUN_003c86b4(lVar3,"crypto/rsa/rsa_lib.c",0x55);
    return 0;
  }
  *(undefined8 *)(lVar3 + 8) = param_1;
  *(undefined4 *)(lVar3 + 0xa0) = 1;
  lVar4 = FUN_003fc754();
  uVar1 = *(uint *)(lVar4 + 0x48);
  *(long *)(lVar3 + 0x18) = lVar4;
  *(uint *)(lVar3 + 0xa4) = uVar1 & 0xfffffbff;
  iVar2 = FUN_003c4ee0(9,lVar3,lVar3 + 0x90);
  if (iVar2 != 0) {
    pcVar5 = *(code **)(*(long *)(lVar3 + 0x18) + 0x38);
    if (pcVar5 == (code *)0x0) {
      return lVar3;
    }
    iVar2 = (*pcVar5)(lVar3);
    if (iVar2 != 0) {
      return lVar3;
    }
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_lib.c",0x7d,"rsa_new_intern");
    FUN_00379a5c(4,0xc0105,0);
  }
  FUN_003fa6a0(lVar3);
  return 0;
}


// ===== 003fa640  FUN_003fa640 =====

undefined8 FUN_003fa640(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


// ===== 003fa648  FUN_003fa648 =====

undefined8 FUN_003fa648(long param_1,long param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(long *)(param_1 + 0x18) + 0x40);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1);
  }
  pcVar1 = *(code **)(param_2 + 0x38);
  *(long *)(param_1 + 0x18) = param_2;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1);
  }
  return 1;
}


// ===== 003fa694  FUN_003fa694 =====

void FUN_003fa694(void)

{
  FUN_003fa508(0);
  return;
}


// ===== 003fa69c  thunk_FUN_003fa508 =====

long thunk_FUN_003fa508(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  
  lVar3 = FUN_003c8474(0xe0,"crypto/rsa/rsa_lib.c",0x4d);
  if (lVar3 == 0) {
    return 0;
  }
  lVar4 = FUN_003d5150();
  *(long *)(lVar3 + 0xd0) = lVar4;
  if (lVar4 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_lib.c",0x54,"rsa_new_intern");
    FUN_00379a5c(4,0x8000f,0);
    FUN_003c86b4(lVar3,"crypto/rsa/rsa_lib.c",0x55);
    return 0;
  }
  *(undefined8 *)(lVar3 + 8) = param_1;
  *(undefined4 *)(lVar3 + 0xa0) = 1;
  lVar4 = FUN_003fc754();
  uVar1 = *(uint *)(lVar4 + 0x48);
  *(long *)(lVar3 + 0x18) = lVar4;
  *(uint *)(lVar3 + 0xa4) = uVar1 & 0xfffffbff;
  iVar2 = FUN_003c4ee0(9,lVar3,lVar3 + 0x90);
  if (iVar2 != 0) {
    pcVar5 = *(code **)(*(long *)(lVar3 + 0x18) + 0x38);
    if (pcVar5 == (code *)0x0) {
      return lVar3;
    }
    iVar2 = (*pcVar5)(lVar3);
    if (iVar2 != 0) {
      return lVar3;
    }
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_lib.c",0x7d,"rsa_new_intern");
    FUN_00379a5c(4,0xc0105,0);
  }
  FUN_003fa6a0(lVar3);
  return 0;
}


// ===== 003fa6a0  FUN_003fa6a0 =====

void FUN_003fa6a0(long param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  
  if ((param_1 != 0) &&
     (iVar1 = *(int *)(param_1 + 0xa0), iVar2 = iVar1 + -1, *(int *)(param_1 + 0xa0) = iVar2,
     iVar2 == 0 || iVar1 < 1)) {
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x18) + 0x40), pcVar3 != (code *)0x0)) {
      (*pcVar3)();
    }
    FUN_003c525c(9,param_1,param_1 + 0x90);
    FUN_003d51ac(*(undefined8 *)(param_1 + 0xd0));
    FUN_0038f4f4(*(undefined8 *)(param_1 + 0x28));
    FUN_0038f4f4(*(undefined8 *)(param_1 + 0x30));
    FUN_0038f458(*(undefined8 *)(param_1 + 0x38));
    FUN_0038f458(*(undefined8 *)(param_1 + 0x40));
    FUN_0038f458(*(undefined8 *)(param_1 + 0x48));
    FUN_0038f458(*(undefined8 *)(param_1 + 0x50));
    FUN_0038f458(*(undefined8 *)(param_1 + 0x58));
    FUN_0038f458(*(undefined8 *)(param_1 + 0x60));
    FUN_003f2ae0(*(undefined8 *)(param_1 + 0x80));
    FUN_0040ca6c(*(undefined8 *)(param_1 + 0x88),PTR_FUN_007a1c08);
    FUN_003f9e50(*(undefined8 *)(param_1 + 0xc0));
    FUN_003f9e50(*(undefined8 *)(param_1 + 200));
    FUN_003c86b4(param_1,"crypto/rsa/rsa_lib.c",0xb5);
    return;
  }
  return;
}


// ===== 003fa780  FUN_003fa780 =====

bool FUN_003fa780(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xa0);
  *(int *)(param_1 + 0xa0) = iVar1 + 1;
  return 0 < iVar1;
}


// ===== 003fa79c  FUN_003fa79c =====

undefined8 FUN_003fa79c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


// ===== 003fa7a4  FUN_003fa7a4 =====

void FUN_003fa7a4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}


// ===== 003fa7ac  FUN_003fa7ac =====

void FUN_003fa7ac(long param_1)

{
  FUN_003c5168(param_1 + 0x90);
  return;
}


// ===== 003fa7b4  FUN_003fa7b4 =====

void FUN_003fa7b4(long param_1)

{
  FUN_003c4e94(param_1 + 0x90);
  return;
}


// ===== 003fa7bc  FUN_003fa7bc =====

uint FUN_003fa7bc(uint param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  uint uVar20;
  ulong uVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  
  if ((int)param_1 < 0x1800) {
    if (param_1 == 0x800) {
      return 0x70;
    }
    if (param_1 == 0xc00) {
      return 0x80;
    }
    if (param_1 == 0x1000) {
      return 0x98;
    }
  }
  else if ((int)param_1 < 0x2000) {
    if (param_1 == 0x1800) {
      return 0xb0;
    }
    if (param_1 == 0x1e00) {
      return 0xc0;
    }
  }
  else {
    if (param_1 == 0x2000) {
      return 200;
    }
    if (param_1 == 0x3c00) {
      return 0x100;
    }
  }
  if (0xa7e78 < (int)param_1) {
    return 0x4b0;
  }
  if (7 < (int)param_1) {
    uVar22 = 0;
    uVar21 = (ulong)param_1 * 0x2c5c8;
    uVar20 = 0x100;
    uVar27 = uVar21;
    if (0x3c00 < param_1) {
      uVar20 = 0x4b0;
    }
    do {
      uVar26 = uVar27 >> 1;
      uVar28 = uVar27 >> 0x14;
      uVar22 = uVar22 + 0x40000;
      uVar27 = uVar26;
    } while (uVar28 != 0);
    uVar1 = 0xc0;
    if (0x1e00 < param_1) {
      uVar1 = uVar20;
    }
    bVar3 = uVar26 * uVar26 >> 0x25 != 0;
    lVar23 = 0x12;
    if (bVar3) {
      lVar23 = 0x13;
    }
    uVar27 = uVar26 * uVar26 >> lVar23;
    uVar27 = uVar27 * uVar27;
    bVar4 = uVar27 >> 0x25 != 0;
    lVar23 = 0x12;
    if (bVar4) {
      lVar23 = 0x13;
    }
    uVar27 = uVar27 >> lVar23;
    uVar27 = uVar27 * uVar27;
    bVar5 = uVar27 >> 0x25 != 0;
    lVar23 = 0x12;
    if (bVar5) {
      lVar23 = 0x13;
    }
    uVar27 = uVar27 >> lVar23;
    uVar27 = uVar27 * uVar27;
    bVar6 = uVar27 >> 0x25 != 0;
    lVar23 = 0x12;
    if (bVar6) {
      lVar23 = 0x13;
    }
    uVar27 = uVar27 >> lVar23;
    uVar27 = uVar27 * uVar27;
    bVar7 = uVar27 >> 0x25 != 0;
    lVar23 = 0x12;
    if (bVar7) {
      lVar23 = 0x13;
    }
    uVar27 = uVar27 >> lVar23;
    uVar27 = uVar27 * uVar27;
    bVar8 = uVar27 >> 0x25 != 0;
    lVar23 = 0x12;
    if (bVar8) {
      lVar23 = 0x13;
    }
    uVar27 = uVar27 >> lVar23;
    uVar27 = uVar27 * uVar27;
    bVar9 = uVar27 >> 0x25 != 0;
    lVar23 = 0x12;
    if (bVar9) {
      lVar23 = 0x13;
    }
    uVar27 = uVar27 >> lVar23;
    uVar27 = uVar27 * uVar27;
    bVar10 = uVar27 >> 0x25 != 0;
    lVar23 = 0x12;
    if (bVar10) {
      lVar23 = 0x13;
    }
    uVar27 = uVar27 >> lVar23;
    uVar27 = uVar27 * uVar27;
    bVar11 = uVar27 >> 0x25 != 0;
    lVar23 = 0x12;
    if (bVar11) {
      lVar23 = 0x13;
    }
    uVar27 = uVar27 >> lVar23;
    uVar27 = uVar27 * uVar27;
    bVar12 = uVar27 >> 0x25 != 0;
    lVar23 = 0x12;
    if (bVar12) {
      lVar23 = 0x13;
    }
    uVar27 = uVar27 >> lVar23;
    uVar27 = uVar27 * uVar27;
    bVar13 = uVar27 >> 0x25 != 0;
    lVar23 = 0x12;
    if (bVar13) {
      lVar23 = 0x13;
    }
    uVar27 = uVar27 >> lVar23;
    uVar27 = uVar27 * uVar27;
    bVar14 = uVar27 >> 0x25 != 0;
    lVar23 = 0x12;
    if (bVar14) {
      lVar23 = 0x13;
    }
    uVar27 = uVar27 >> lVar23;
    uVar27 = uVar27 * uVar27;
    bVar15 = uVar27 >> 0x25 != 0;
    lVar23 = 0x12;
    if (bVar15) {
      lVar23 = 0x13;
    }
    uVar27 = uVar27 >> lVar23;
    uVar27 = uVar27 * uVar27;
    bVar16 = uVar27 >> 0x25 != 0;
    lVar23 = 0x12;
    if (bVar16) {
      lVar23 = 0x13;
    }
    uVar27 = uVar27 >> lVar23;
    uVar27 = uVar27 * uVar27;
    bVar17 = uVar27 >> 0x25 != 0;
    lVar23 = 0x12;
    if (bVar17) {
      lVar23 = 0x13;
    }
    uVar27 = uVar27 >> lVar23;
    uVar27 = uVar27 * uVar27;
    bVar18 = uVar27 >> 0x25 != 0;
    lVar23 = 0x12;
    if (bVar18) {
      lVar23 = 0x13;
    }
    uVar27 = uVar27 >> lVar23;
    uVar27 = uVar27 * uVar27;
    bVar19 = uVar27 >> 0x25 != 0;
    lVar23 = 0x12;
    if (bVar19) {
      lVar23 = 0x13;
    }
    uVar27 = uVar27 >> lVar23;
    uVar22 = ((uint)bVar4 << 0x10 | (uint)bVar3 << 0x11 | (uint)bVar5 << 0xf | (uint)bVar6 << 0xe |
              (uint)bVar7 << 0xd | (uint)bVar8 << 0xc | uVar22) + (uint)bVar9 * 0x800 +
             (uint)bVar10 * 0x400 + (uint)bVar11 * 0x200 + (uint)bVar12 * 0x100 +
             (uint)bVar13 * 0x80 + (uint)bVar14 * 0x40 + (uint)bVar15 * 0x20 + (uint)bVar16 * 0x10 +
             (uint)bVar17 * 8 + (uint)bVar18 * 4 + (uint)bVar19 * 2;
    if (uVar27 * uVar27 >> 0x25 != 0) {
      uVar22 = uVar22 + 1;
    }
    uVar26 = ((ulong)uVar22 << 0x12) / 0x5c551;
    uVar26 = (uVar26 * uVar21 >> 0x12) * uVar26;
    uVar27 = ((long)uVar26 >> 0x3f & 0xffffe00000000000U) + (uVar26 >> 0x12);
    uVar21 = uVar26 >> 0x3e | 1;
    uVar28 = ((long)uVar26 >> 0x3f & 6U) * uVar21;
    uVar29 = uVar27 >> 0x2a;
    if (uVar29 <= uVar28) {
      uVar21 = uVar26 >> 0x3e & 2;
    }
    lVar23 = (ulong)~(uint)uVar28 << 0x2a;
    uVar26 = uVar21 << 1 | 1;
    if (uVar29 <= uVar28) {
      lVar23 = 0;
    }
    uVar27 = lVar23 + uVar27;
    lVar23 = uVar21 * 2;
    uVar21 = (uVar21 * uVar26 * 2 + uVar21 * uVar26) * 2;
    uVar26 = uVar27 >> 0x27;
    if (uVar21 < uVar26) {
      lVar23 = lVar23 + 1;
    }
    lVar24 = (ulong)~(uint)uVar21 << 0x27;
    if (uVar26 <= uVar21) {
      lVar24 = 0;
    }
    uVar27 = lVar24 + uVar27;
    lVar24 = lVar23 * 2;
    uVar21 = lVar23 * (lVar23 << 1 | 1U) * 6;
    uVar26 = uVar27 >> 0x24;
    if (uVar21 < uVar26) {
      lVar24 = lVar24 + 1;
    }
    lVar23 = (ulong)~(uint)uVar21 << 0x24;
    if (uVar26 <= uVar21) {
      lVar23 = 0;
    }
    uVar27 = lVar23 + uVar27;
    lVar23 = lVar24 * 2;
    uVar21 = lVar24 * (lVar24 << 1 | 1U) * 6;
    uVar26 = uVar27 >> 0x21;
    if (uVar21 < uVar26) {
      lVar23 = lVar23 + 1;
    }
    lVar24 = (ulong)~(uint)uVar21 << 0x21;
    if (uVar26 <= uVar21) {
      lVar24 = 0;
    }
    uVar27 = lVar24 + uVar27;
    lVar24 = lVar23 * 2;
    uVar21 = lVar23 * (lVar23 << 1 | 1U) * 6;
    uVar26 = uVar27 >> 0x1e;
    if (uVar21 < uVar26) {
      lVar24 = lVar24 + 1;
    }
    lVar23 = ~uVar21 << 0x1e;
    if (uVar26 <= uVar21) {
      lVar23 = 0;
    }
    uVar27 = lVar23 + uVar27;
    lVar23 = lVar24 * 2;
    uVar21 = lVar24 * (lVar24 << 1 | 1U) * 6;
    uVar26 = uVar27 >> 0x1b;
    if (uVar21 < uVar26) {
      lVar23 = lVar23 + 1;
    }
    lVar24 = ~uVar21 << 0x1b;
    if (uVar26 <= uVar21) {
      lVar24 = 0;
    }
    uVar27 = lVar24 + uVar27;
    lVar24 = lVar23 * 2;
    uVar21 = lVar23 * (lVar23 << 1 | 1U) * 6;
    uVar26 = uVar27 >> 0x18;
    if (uVar21 < uVar26) {
      lVar24 = lVar24 + 1;
    }
    lVar23 = ~uVar21 << 0x18;
    if (uVar26 <= uVar21) {
      lVar23 = 0;
    }
    uVar27 = lVar23 + uVar27;
    lVar23 = lVar24 * 2;
    uVar21 = lVar24 * (lVar24 << 1 | 1U) * 6;
    uVar26 = uVar27 >> 0x15;
    if (uVar21 < uVar26) {
      lVar23 = lVar23 + 1;
    }
    lVar24 = ~uVar21 << 0x15;
    if (uVar26 <= uVar21) {
      lVar24 = 0;
    }
    uVar27 = lVar24 + uVar27;
    lVar24 = lVar23 * 2;
    uVar21 = lVar23 * (lVar23 << 1 | 1U) * 6;
    uVar26 = uVar27 >> 0x12;
    if (uVar21 < uVar26) {
      lVar24 = lVar24 + 1;
    }
    lVar23 = ~uVar21 << 0x12;
    if (uVar26 <= uVar21) {
      lVar23 = 0;
    }
    uVar27 = lVar23 + uVar27;
    lVar23 = lVar24 * 2;
    uVar21 = lVar24 * (lVar24 << 1 | 1U) * 6;
    uVar26 = uVar27 >> 0xf;
    if (uVar21 < uVar26) {
      lVar23 = lVar23 + 1;
    }
    lVar24 = ~uVar21 << 0xf;
    if (uVar26 <= uVar21) {
      lVar24 = 0;
    }
    uVar27 = lVar24 + uVar27;
    lVar24 = lVar23 * 2;
    uVar21 = lVar23 * (lVar23 << 1 | 1U) * 6;
    uVar26 = uVar27 >> 0xc;
    if (uVar21 < uVar26) {
      lVar24 = lVar24 + 1;
    }
    lVar23 = ~uVar21 << 0xc;
    if (uVar26 <= uVar21) {
      lVar23 = 0;
    }
    uVar27 = lVar23 + uVar27;
    lVar23 = lVar24 * 2;
    uVar21 = lVar24 * (lVar24 << 1 | 1U) * 6;
    uVar26 = uVar27 >> 9;
    if (uVar21 < uVar26) {
      lVar23 = lVar23 + 1;
    }
    lVar24 = ~uVar21 << 9;
    if (uVar26 <= uVar21) {
      lVar24 = 0;
    }
    uVar27 = lVar24 + uVar27;
    lVar24 = lVar23 * 2;
    uVar21 = lVar23 * (lVar23 << 1 | 1U) * 6;
    uVar26 = uVar27 >> 6;
    if (uVar21 < uVar26) {
      lVar24 = lVar24 + 1;
    }
    lVar23 = ~uVar21 << 6;
    if (uVar26 <= uVar21) {
      lVar23 = 0;
    }
    uVar27 = lVar23 + uVar27;
    lVar23 = lVar24 * 2;
    uVar21 = lVar24 * (lVar24 << 1 | 1U) * 6;
    uVar26 = uVar27 >> 3;
    if (uVar21 < uVar26) {
      lVar23 = lVar23 + 1;
    }
    lVar24 = ~uVar21 << 3;
    if (uVar26 <= uVar21) {
      lVar24 = 0;
    }
    lVar25 = lVar23 * 2;
    if (lVar23 * (lVar23 << 1 | 1U) * 6 < lVar24 + uVar27) {
      lVar25 = lVar25 + 1;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = ((ulong)(lVar25 * 0x7b126000) >> 0x12) - 0x12c28f;
    uVar22 = (SUB164(auVar2 * ZEXT816(0x5c552a0d699f0bd3),10) & 0xffff) + 4 & 0xfff8;
    if (uVar1 <= uVar22) {
      uVar22 = uVar1;
    }
    return uVar22;
  }
  return 0;
}


// ===== 003fae24  FUN_003fae24 =====

undefined2 FUN_003fae24(long param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = FUN_0038f2c0(*(undefined8 *)(param_1 + 0x28));
  if ((*(int *)(param_1 + 0x10) == 1) &&
     ((iVar3 = FUN_0040caf8(*(undefined8 *)(param_1 + 0x88)), iVar3 < 1 ||
      (iVar4 = FUN_003fc720(uVar2), iVar4 < iVar3 + 2)))) {
    return 0;
  }
  uVar1 = FUN_003fa7bc(uVar2);
  return uVar1;
}


// ===== 003fae98  FUN_003fae98 =====

undefined8 FUN_003fae98(long param_1,long param_2,long param_3,long param_4)

{
  if (param_2 == 0 && *(long *)(param_1 + 0x28) == 0) {
    return 0;
  }
  if (param_3 == 0 && *(long *)(param_1 + 0x30) == 0) {
    return 0;
  }
  if (param_2 != 0) {
    FUN_0038f4f4();
    *(long *)(param_1 + 0x28) = param_2;
  }
  if (param_3 != 0) {
    FUN_0038f4f4(*(undefined8 *)(param_1 + 0x30));
    *(long *)(param_1 + 0x30) = param_3;
  }
  if (param_4 != 0) {
    FUN_0038f458(*(undefined8 *)(param_1 + 0x38));
    *(long *)(param_1 + 0x38) = param_4;
    FUN_00390944(param_4,4);
  }
  *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
  return 1;
}


// ===== 003faf58  FUN_003faf58 =====

undefined8 FUN_003faf58(long param_1,long param_2,long param_3)

{
  if (param_2 == 0 && *(long *)(param_1 + 0x40) == 0) {
    return 0;
  }
  if (param_3 == 0 && *(long *)(param_1 + 0x48) == 0) {
    return 0;
  }
  if (param_2 != 0) {
    FUN_0038f458();
    *(long *)(param_1 + 0x40) = param_2;
    FUN_00390944(param_2,4);
  }
  if (param_3 != 0) {
    FUN_0038f458(*(undefined8 *)(param_1 + 0x48));
    *(long *)(param_1 + 0x48) = param_3;
    FUN_00390944(param_3,4);
  }
  *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
  return 1;
}


// ===== 003fb010  FUN_003fb010 =====

undefined8 FUN_003fb010(long param_1,long param_2,long param_3,long param_4)

{
  if (param_2 == 0 && *(long *)(param_1 + 0x50) == 0) {
    return 0;
  }
  if (param_3 == 0 && *(long *)(param_1 + 0x58) == 0) {
    return 0;
  }
  if (param_4 == 0 && *(long *)(param_1 + 0x60) == 0) {
    return 0;
  }
  if (param_2 != 0) {
    FUN_0038f458();
    *(long *)(param_1 + 0x50) = param_2;
    FUN_00390944(param_2,4);
  }
  if (param_3 != 0) {
    FUN_0038f458(*(undefined8 *)(param_1 + 0x58));
    *(long *)(param_1 + 0x58) = param_3;
    FUN_00390944(param_3,4);
  }
  if (param_4 != 0) {
    FUN_0038f458(*(undefined8 *)(param_1 + 0x60));
    *(long *)(param_1 + 0x60) = param_4;
    FUN_00390944(param_4,4);
  }
  *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
  return 1;
}


// ===== 003fb118  FUN_003fb118 =====

long FUN_003fb118(long param_1,long *param_2,long *param_3,long *param_4,uint param_5)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  lVar2 = 0;
  if ((((param_2 != (long *)0x0) && (param_3 != (long *)0x0)) && (param_4 != (long *)0x0)) &&
     ((param_5 != 0 && (lVar2 = FUN_0040bf38(0,param_5), lVar2 != 0)))) {
    lVar5 = *(long *)(param_1 + 0x88);
    if (0 < (int)param_5) {
      uVar6 = (ulong)param_5;
      do {
        plVar3 = (long *)FUN_003fc5a0();
        if (plVar3 == (long *)0x0) goto LAB_003fb264;
        if (((*param_2 == 0) || (*param_3 == 0)) || (*param_4 == 0)) {
          FUN_003fc554(plVar3);
          goto LAB_003fb264;
        }
        FUN_0038f458(*plVar3);
        FUN_0038f458(plVar3[1]);
        FUN_0038f458(plVar3[2]);
        lVar4 = *param_2;
        *plVar3 = lVar4;
        plVar3[1] = *param_3;
        plVar3[2] = *param_4;
        FUN_00390944(lVar4,4);
        FUN_00390944(plVar3[1],4);
        FUN_00390944(plVar3[2],4);
        FUN_0040c89c(lVar2,plVar3);
        uVar6 = uVar6 - 1;
        param_4 = param_4 + 1;
        param_3 = param_3 + 1;
        param_2 = param_2 + 1;
      } while (uVar6 != 0);
    }
    *(long *)(param_1 + 0x88) = lVar2;
    iVar1 = FUN_003fc654(param_1);
    if (iVar1 == 0) {
      *(long *)(param_1 + 0x88) = lVar5;
LAB_003fb264:
      FUN_0040ca6c(lVar2,PTR_FUN_007a1c10);
      return 0;
    }
    if (lVar5 != 0) {
      FUN_0040ca6c(lVar5,PTR_FUN_007a1c08);
    }
    lVar2 = 1;
    *(undefined4 *)(param_1 + 0x10) = 1;
    *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
  }
  return lVar2;
}


// ===== 003fb290  FUN_003fb290 =====

void FUN_003fb290(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x28);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(param_1 + 0x30);
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = *(undefined8 *)(param_1 + 0x38);
  }
  return;
}


// ===== 003fb2b8  FUN_003fb2b8 =====

void FUN_003fb2b8(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x40);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(param_1 + 0x48);
  }
  return;
}


// ===== 003fb2d4  FUN_003fb2d4 =====

uint FUN_003fb2d4(long param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0040caf8(*(undefined8 *)(param_1 + 0x88));
  return uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
}


// ===== 003fb2f0  FUN_003fb2f0 =====

undefined8 FUN_003fb2f0(long param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  uVar1 = FUN_0040caf8(*(undefined8 *)(param_1 + 0x88));
  if (0 < (int)uVar1) {
    uVar3 = 0;
    do {
      puVar2 = (undefined8 *)FUN_0040cb0c(*(undefined8 *)(param_1 + 0x88),uVar3 & 0xffffffff);
      *(undefined8 *)(param_2 + uVar3 * 8) = *puVar2;
      uVar3 = uVar3 + 1;
    } while (uVar1 != uVar3);
    return 1;
  }
  return 0;
}


// ===== 003fb368  FUN_003fb368 =====

void FUN_003fb368(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x50);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(param_1 + 0x58);
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = *(undefined8 *)(param_1 + 0x60);
  }
  return;
}


// ===== 003fb390  FUN_003fb390 =====

undefined8 FUN_003fb390(long param_1,long param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar2 = FUN_0040caf8(*(undefined8 *)(param_1 + 0x88));
  if ((int)uVar2 < 1) {
    return 0;
  }
  if (param_2 != 0 || param_3 != 0) {
    uVar5 = (ulong)uVar2;
    if (param_2 == 0) {
      if (param_3 == 0) {
        do {
          FUN_0040cb0c(*(undefined8 *)(param_1 + 0x88),param_3 & 0xffffffff);
          uVar1 = (int)param_3 + 1;
          param_3 = (ulong)uVar1;
        } while (uVar2 != uVar1);
      }
      else {
        uVar6 = 0;
        do {
          lVar3 = FUN_0040cb0c(*(undefined8 *)(param_1 + 0x88),uVar6 & 0xffffffff);
          *(undefined8 *)(param_3 + uVar6 * 8) = *(undefined8 *)(lVar3 + 0x10);
          uVar6 = uVar6 + 1;
        } while (uVar5 != uVar6);
      }
    }
    else if (param_3 == 0) {
      do {
        lVar3 = FUN_0040cb0c(*(undefined8 *)(param_1 + 0x88),param_3 & 0xffffffff);
        *(undefined8 *)(param_2 + param_3 * 8) = *(undefined8 *)(lVar3 + 8);
        param_3 = param_3 + 1;
      } while (uVar5 != param_3);
    }
    else {
      uVar6 = 0;
      do {
        lVar3 = FUN_0040cb0c(*(undefined8 *)(param_1 + 0x88),uVar6 & 0xffffffff);
        lVar4 = uVar6 * 8;
        uVar6 = uVar6 + 1;
        *(undefined8 *)(param_2 + lVar4) = *(undefined8 *)(lVar3 + 8);
        *(undefined8 *)(param_3 + lVar4) = *(undefined8 *)(lVar3 + 0x10);
      } while (uVar5 != uVar6);
    }
  }
  return 1;
}


// ===== 003fb4a8  FUN_003fb4a8 =====

undefined8 FUN_003fb4a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}


// ===== 003fb4b0  FUN_003fb4b0 =====

undefined8 FUN_003fb4b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}


// ===== 003fb4b8  FUN_003fb4b8 =====

undefined8 FUN_003fb4b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}


// ===== 003fb4c0  FUN_003fb4c0 =====

undefined8 FUN_003fb4c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}


// ===== 003fb4c8  FUN_003fb4c8 =====

undefined8 FUN_003fb4c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}


// ===== 003fb4d0  FUN_003fb4d0 =====

undefined8 FUN_003fb4d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}


// ===== 003fb4d8  FUN_003fb4d8 =====

undefined8 FUN_003fb4d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}


// ===== 003fb4e0  FUN_003fb4e0 =====

undefined8 FUN_003fb4e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}


// ===== 003fb4e8  FUN_003fb4e8 =====

undefined8 FUN_003fb4e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}


// ===== 003fb4f0  FUN_003fb4f0 =====

undefined8 FUN_003fb4f0(long param_1,undefined8 param_2)

{
  FUN_003f2ae0(*(undefined8 *)(param_1 + 0x80));
  *(undefined8 *)(param_1 + 0x80) = param_2;
  return 1;
}


// ===== 003fb520  FUN_003fb520 =====

long FUN_003fb520(long param_1)

{
  return param_1 + 0x68;
}


// ===== 003fb528  FUN_003fb528 =====

void FUN_003fb528(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0xa4) = *(uint *)(param_1 + 0xa4) & (param_2 ^ 0xffffffff);
  return;
}


// ===== 003fb538  FUN_003fb538 =====

uint FUN_003fb538(long param_1,uint param_2)

{
  return *(uint *)(param_1 + 0xa4) & param_2;
}


// ===== 003fb544  FUN_003fb544 =====

void FUN_003fb544(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0xa4) = *(uint *)(param_1 + 0xa4) | param_2;
  return;
}


// ===== 003fb554  FUN_003fb554 =====

undefined4 FUN_003fb554(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}


// ===== 003fb55c  FUN_003fb55c =====

undefined8 FUN_003fb55c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


