// ===== 003c3e1c  FUN_003c3e1c =====

undefined4 FUN_003c3e1c(long param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    param_1 = FUN_003c3bb8();
  }
  if ((((param_3 != (char *)0x0) && (*param_3 != '\0')) && (param_1 != 0)) &&
     (iVar1 = FUN_003d518c(*(undefined8 *)(param_1 + 8)), iVar1 != 0)) {
    uVar2 = FUN_003c3eb0(param_1,param_2,param_3);
    FUN_003d519c(*(undefined8 *)(param_1 + 8));
    return uVar2;
  }
  return 0;
}


// ===== 003c3eb0  FUN_003c3eb0 =====

long * FUN_003c3eb0(long param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 local_40;
  undefined4 local_38;
  
  local_38 = 0;
  local_40 = param_3;
  lVar2 = FUN_003b908c(*(undefined8 *)(param_1 + 0x10),&local_40);
  if (((lVar2 != 0) && (plVar3 = (long *)(ulong)*(uint *)(lVar2 + 8), *(uint *)(lVar2 + 8) != 0)) ||
     (plVar3 = (long *)FUN_003c8474(0x10,"crypto/core_namemap.c",0x101), plVar3 == (long *)0x0)) {
    return plVar3;
  }
  lVar2 = FUN_003ca2f4(param_3,"crypto/core_namemap.c",0x104);
  *plVar3 = lVar2;
  if (lVar2 != 0) {
    if (param_2 == 0) {
      param_2 = FUN_00755bc0(1,param_1 + 0x18);
      param_2 = param_2 + 1;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    *(int *)(plVar3 + 1) = param_2;
    FUN_003b8ca4(uVar4,plVar3);
    iVar1 = FUN_003b92bc(*(undefined8 *)(param_1 + 0x10));
    if (iVar1 == 0) {
      return (long *)(ulong)*(uint *)(plVar3 + 1);
    }
    lVar2 = *plVar3;
  }
  FUN_003c86b4(lVar2,"crypto/core_namemap.c",0x3a);
  FUN_003c86b4(plVar3,"crypto/core_namemap.c",0x3b);
  return (long *)0x0;
}


// ===== 003c3fc4  FUN_003c3fc4 =====

char * FUN_003c3fc4(long param_1,uint param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  long lVar5;
  size_t sVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  char *local_60;
  undefined4 local_58;
  
  if (param_1 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/core_namemap.c",0x130,"ossl_namemap_add_names");
    FUN_00379a5c(0xf,0xc0102,0);
    pcVar7 = (char *)0x0;
  }
  else {
    pcVar3 = (char *)FUN_003ca2f4(param_3,"crypto/core_namemap.c",0x134);
    pcVar7 = pcVar3;
    if (pcVar3 != (char *)0x0) {
      iVar2 = FUN_003d518c(*(undefined8 *)(param_1 + 8));
      if (iVar2 == 0) {
        FUN_003c86b4(pcVar3,"crypto/core_namemap.c",0x138);
        pcVar7 = (char *)0x0;
      }
      else {
        if (*pcVar3 != '\0') {
          do {
            pcVar4 = strchr(pcVar7,param_4 & 0xff);
            if (pcVar4 == (char *)0x0) {
              sVar6 = strlen(pcVar7);
              pcVar8 = pcVar7 + sVar6;
              local_58 = 0;
              local_60 = pcVar7;
              lVar5 = FUN_003b908c(*(undefined8 *)(param_1 + 0x10),&local_60);
              if (lVar5 != 0) goto LAB_003c4074;
LAB_003c40a4:
              uVar9 = 0;
            }
            else {
              pcVar8 = pcVar4 + 1;
              *pcVar4 = '\0';
              if (*pcVar7 == '\0') {
                FUN_00379868();
                FUN_0037995c("crypto/core_namemap.c",0x14c,"ossl_namemap_add_names");
                FUN_00379a5c(0xf,0x75,0);
                goto LAB_003c422c;
              }
              local_58 = 0;
              local_60 = pcVar7;
              lVar5 = FUN_003b908c(*(undefined8 *)(param_1 + 0x10),&local_60);
              if (lVar5 == 0) goto LAB_003c40a4;
LAB_003c4074:
              uVar9 = *(uint *)(lVar5 + 8);
            }
            uVar1 = uVar9;
            if (((param_2 != 0) && (uVar1 = param_2, uVar9 != 0)) && (uVar9 != param_2)) {
              FUN_00379868();
              FUN_0037995c("crypto/core_namemap.c",0x156,"ossl_namemap_add_names");
              FUN_00379a5c(0xf,0x76,"\"%s\" has an existing different identity %d (from \"%s\")",
                           pcVar7,uVar9,param_3);
              goto LAB_003c422c;
            }
            param_2 = uVar1;
            pcVar7 = pcVar8;
            pcVar4 = pcVar3;
          } while (*pcVar8 != '\0');
joined_r0x003c4150:
          uVar9 = param_2;
          if (pcVar4 < pcVar8) {
            while( true ) {
              sVar6 = strlen(pcVar4);
              param_2 = FUN_003c3eb0(param_1,uVar9,pcVar4);
              if (uVar9 != 0) break;
              pcVar4 = pcVar4 + sVar6 + 1;
              uVar9 = param_2;
              if (pcVar8 <= pcVar4) goto LAB_003c4230;
            }
            if (param_2 == uVar9) goto code_r0x003c4198;
            FUN_00379868();
            FUN_0037995c("crypto/core_namemap.c",0x169,"ossl_namemap_add_names");
            FUN_00379a5c(0xf,0xc0103,"Got number %d when expecting %d",param_2,uVar9);
LAB_003c422c:
            param_2 = 0;
          }
        }
LAB_003c4230:
        pcVar7 = (char *)(ulong)param_2;
        FUN_003d519c(*(undefined8 *)(param_1 + 8));
        FUN_003c86b4(pcVar3,"crypto/core_namemap.c",0x173);
      }
    }
  }
  return pcVar7;
code_r0x003c4198:
  pcVar4 = pcVar4 + sVar6 + 1;
  param_2 = uVar9;
  goto joined_r0x003c4150;
}


// ===== 003c4274  FUN_003c4274 =====

void FUN_003c4274(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_003dc410(*(undefined8 *)(param_1 + 2),*param_1);
  if (lVar2 != 0) {
    uVar1 = FUN_00388f94();
    FUN_003c4378(0,uVar1,0,param_2);
    return;
  }
  return;
}


// ===== 003c42c8  FUN_003c42c8 =====

void FUN_003c42c8(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_003dc410(*(undefined8 *)(param_1 + 2),*param_1);
  if (lVar2 != 0) {
    uVar1 = FUN_003899b0();
    FUN_003c4378(0,uVar1,0,param_2);
    return;
  }
  return;
}


// ===== 003c431c  FUN_003c431c =====

void FUN_003c431c(undefined8 *param_1)

{
  FUN_003b923c(*param_1);
  return;
}


// ===== 003c4324  FUN_003c4324 =====

void FUN_003c4324(undefined8 *param_1,undefined8 *param_2)

{
  FUN_003cab04(*param_1,*param_2);
  return;
}


// ===== 003c4330  FUN_003c4330 =====

void FUN_003c4330(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_003c86b4(*param_1,"crypto/core_namemap.c",0x3a);
  }
  FUN_003c86b4(param_1,"crypto/core_namemap.c",0x3b);
  return;
}


// ===== 003c4378  FUN_003c4378 =====

void FUN_003c4378(int param_1,int param_2,char *param_3,long param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  char local_84 [52];
  
  if (param_1 != 0) {
    pcVar4 = (char *)FUN_003dce44(param_1);
    if (param_4 == 0) {
      lVar5 = FUN_003c3bb8(0);
      if (pcVar4 == (char *)0x0) goto LAB_003c4428;
LAB_003c43c0:
      if ((*pcVar4 == '\0') || (lVar5 == 0)) goto LAB_003c4428;
      iVar1 = FUN_003d518c(*(undefined8 *)(lVar5 + 8));
      if (iVar1 == 0) {
        pcVar4 = (char *)FUN_003dce60(param_1);
        goto joined_r0x003c4438;
      }
      uVar2 = FUN_003c3eb0(lVar5,0,pcVar4);
      FUN_003d519c(*(undefined8 *)(lVar5 + 8));
      pcVar4 = (char *)FUN_003dce60(param_1);
    }
    else {
      lVar5 = param_4;
      if (pcVar4 != (char *)0x0) goto LAB_003c43c0;
LAB_003c4428:
      pcVar4 = (char *)FUN_003dce60(param_1);
joined_r0x003c4438:
      uVar2 = 0;
    }
    lVar5 = param_4;
    if (param_4 == 0) {
      lVar5 = FUN_003c3bb8(0);
    }
    if (pcVar4 == (char *)0x0) {
      param_1 = 0;
    }
    else {
      param_1 = 0;
      if ((*pcVar4 != '\0') && (lVar5 != 0)) {
        iVar1 = FUN_003d518c(*(undefined8 *)(lVar5 + 8));
        if (iVar1 == 0) {
          param_1 = 0;
        }
        else {
          param_1 = FUN_003c3eb0(lVar5,uVar2,pcVar4);
          FUN_003d519c(*(undefined8 *)(lVar5 + 8));
        }
      }
    }
  }
  if (param_2 == 0) goto LAB_003c4670;
  pcVar4 = (char *)FUN_003dce44(param_2);
  if (param_4 == 0) {
    lVar5 = FUN_003c3bb8(0);
    if (pcVar4 != (char *)0x0) goto LAB_003c44cc;
LAB_003c4534:
    pcVar4 = (char *)FUN_003dce60(param_2);
joined_r0x003c4544:
    uVar2 = 0;
    if (param_4 != 0) goto LAB_003c4548;
LAB_003c45bc:
    lVar5 = FUN_003c3bb8(0);
    if (pcVar4 != (char *)0x0) goto LAB_003c454c;
LAB_003c45d0:
    iVar1 = 0;
    lVar5 = FUN_003dcce8(param_2);
  }
  else {
    lVar5 = param_4;
    if (pcVar4 == (char *)0x0) goto LAB_003c4534;
LAB_003c44cc:
    if ((*pcVar4 == '\0') || (lVar5 == 0)) goto LAB_003c4534;
    iVar1 = FUN_003d518c(*(undefined8 *)(lVar5 + 8));
    if (iVar1 == 0) {
      pcVar4 = (char *)FUN_003dce60(param_2);
      goto joined_r0x003c4544;
    }
    uVar2 = FUN_003c3eb0(lVar5,param_1,pcVar4);
    FUN_003d519c(*(undefined8 *)(lVar5 + 8));
    pcVar4 = (char *)FUN_003dce60(param_2);
    if (param_4 == 0) goto LAB_003c45bc;
LAB_003c4548:
    lVar5 = param_4;
    if (pcVar4 == (char *)0x0) goto LAB_003c45d0;
LAB_003c454c:
    if ((*pcVar4 == '\0') || (lVar5 == 0)) goto LAB_003c45d0;
    iVar1 = FUN_003d518c(*(undefined8 *)(lVar5 + 8));
    if (iVar1 == 0) {
      iVar1 = 0;
      lVar5 = FUN_003dcce8(param_2);
    }
    else {
      iVar1 = FUN_003c3eb0(lVar5,uVar2,pcVar4);
      FUN_003d519c(*(undefined8 *)(lVar5 + 8));
      lVar5 = FUN_003dcce8(param_2);
    }
  }
  param_1 = iVar1;
  if ((lVar5 != 0) && (iVar3 = FUN_003dd260(local_84,0x32,lVar5,1), 0 < iVar3)) {
    lVar5 = param_4;
    if (param_4 == 0) {
      lVar5 = FUN_003c3bb8(0);
    }
    param_1 = 0;
    if ((local_84[0] != '\0') && (lVar5 != 0)) {
      iVar3 = FUN_003d518c(*(undefined8 *)(lVar5 + 8));
      if (iVar3 == 0) {
        param_1 = 0;
      }
      else {
        param_1 = FUN_003c3eb0(lVar5,iVar1,local_84);
        FUN_003d519c(*(undefined8 *)(lVar5 + 8));
      }
    }
  }
LAB_003c4670:
  if (param_3 != (char *)0x0) {
    if (param_4 == 0) {
      param_4 = FUN_003c3bb8(0);
    }
    if (((*param_3 != '\0') && (param_4 != 0)) &&
       (iVar1 = FUN_003d518c(*(undefined8 *)(param_4 + 8)), iVar1 != 0)) {
      FUN_003c3eb0(param_4,param_1,param_3);
      FUN_003d519c(*(undefined8 *)(param_4 + 8));
    }
  }
  return;
}


// ===== 003c46d0  FUN_003c46d0 =====

void FUN_003c46d0(void)

{
  return;
}


// ===== 003c46d4  FUN_003c46d4 =====

byte FUN_003c46d4(byte *param_1,byte *param_2,long param_3)

{
  byte bVar1;
  
  if (param_3 != 0) {
    bVar1 = 0;
    do {
      param_3 = param_3 + -1;
      bVar1 = *param_2 ^ *param_1 | bVar1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
    return bVar1;
  }
  return 0;
}


// ===== 003c4704  FUN_003c4704 =====

undefined8 FUN_003c4704(void)

{
  return 0;
}


// ===== 003c470c  FUN_003c470c =====

undefined8 FUN_003c470c(void)

{
  return 0;
}


// ===== 003c4714  FUN_003c4714 =====

undefined8 FUN_003c4714(void)

{
  return 0;
}


// ===== 003c471c  FUN_003c471c =====

void FUN_003c471c(void)

{
  return;
}


// ===== 003c4748  FUN_003c4748 =====

undefined8 FUN_003c4748(void)

{
  return 0;
}


// ===== 003c4750  FUN_003c4750 =====

void FUN_003c4750(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 003c475c  FUN_003c475c =====

bool FUN_003c475c(uint param_1,ushort param_2)

{
  if (param_1 < 0x80) {
    return (*(ushort *)(&DAT_00207128 + (ulong)param_1 * 2) & param_2) != 0;
  }
  return false;
}


// ===== 003c4784  FUN_003c4784 =====

bool FUN_003c4784(int param_1)

{
  return param_1 - 0x30U < 10;
}


// ===== 003c4794  FUN_003c4794 =====

bool FUN_003c4794(int param_1)

{
  return param_1 - 0x41U < 0x1a;
}


// ===== 003c47a4  FUN_003c47a4 =====

bool FUN_003c47a4(int param_1)

{
  return param_1 - 0x61U < 0x1a;
}


// ===== 003c47b4  FUN_003c47b4 =====

uint FUN_003c47b4(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 ^ 0x20;
  if (0x19 < param_1 - 0x41) {
    uVar1 = param_1;
  }
  return uVar1;
}


// ===== 003c47c8  FUN_003c47c8 =====

uint FUN_003c47c8(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 ^ 0x20;
  if (0x19 < param_1 - 0x61) {
    uVar1 = param_1;
  }
  return uVar1;
}


// ===== 003c47dc  FUN_003c47dc =====

bool FUN_003c47dc(int param_1)

{
  return param_1 - 0x30U < 10;
}


// ===== 003c47ec  FUN_003c47ec =====

long * FUN_003c47ec(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)FUN_003b9e5c();
  if (plVar1 != (long *)0x0) {
    lVar2 = FUN_003d5150();
    *plVar1 = lVar2;
    plVar1 = (long *)(ulong)(lVar2 != 0);
  }
  return plVar1;
}


// ===== 003c4820  FUN_003c4820 =====

void FUN_003c4820(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_003b9e5c();
  if (puVar1 != (undefined8 *)0x0) {
    FUN_0040ca6c(puVar1[1],FUN_003c497c);
    puVar1[1] = 0;
    FUN_0040ca6c(puVar1[2],FUN_003c497c);
    puVar1[2] = 0;
    FUN_0040ca6c(puVar1[3],FUN_003c497c);
    puVar1[3] = 0;
    FUN_0040ca6c(puVar1[4],FUN_003c497c);
    puVar1[4] = 0;
    FUN_0040ca6c(puVar1[5],FUN_003c497c);
    puVar1[5] = 0;
    FUN_0040ca6c(puVar1[6],FUN_003c497c);
    puVar1[6] = 0;
    FUN_0040ca6c(puVar1[7],FUN_003c497c);
    puVar1[7] = 0;
    FUN_0040ca6c(puVar1[8],FUN_003c497c);
    puVar1[8] = 0;
    FUN_0040ca6c(puVar1[9],FUN_003c497c);
    puVar1[9] = 0;
    FUN_0040ca6c(puVar1[10],FUN_003c497c);
    puVar1[10] = 0;
    FUN_0040ca6c(puVar1[0xb],FUN_003c497c);
    puVar1[0xb] = 0;
    FUN_0040ca6c(puVar1[0xc],FUN_003c497c);
    puVar1[0xc] = 0;
    FUN_0040ca6c(puVar1[0xd],FUN_003c497c);
    puVar1[0xd] = 0;
    FUN_0040ca6c(puVar1[0xe],FUN_003c497c);
    puVar1[0xe] = 0;
    FUN_0040ca6c(puVar1[0xf],FUN_003c497c);
    puVar1[0xf] = 0;
    FUN_0040ca6c(puVar1[0x10],FUN_003c497c);
    puVar1[0x10] = 0;
    FUN_0040ca6c(puVar1[0x11],FUN_003c497c);
    puVar1[0x11] = 0;
    FUN_0040ca6c(puVar1[0x12],FUN_003c497c);
    puVar1[0x12] = 0;
    FUN_003d51ac(*puVar1);
    *puVar1 = 0;
  }
  return;
}


// ===== 003c497c  FUN_003c497c =====

void FUN_003c497c(undefined8 param_1)

{
  FUN_003c86b4(param_1,"crypto/ex_data.c",0x3f);
  return;
}


// ===== 003c498c  FUN_003c498c =====

ulong FUN_003c498c(undefined8 param_1,uint param_2,int param_3)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  
  plVar2 = (long *)FUN_003b9e5c();
  if (plVar2 == (long *)0x0) {
    return 0;
  }
  if (0x11 < param_2) {
    FUN_00379868();
    FUN_0037995c("crypto/ex_data.c",0x25,"get_and_lock");
    FUN_00379a5c(0xf,0x80106,0);
    return 0;
  }
  if (*plVar2 == 0) {
    return 0;
  }
  uVar3 = FUN_003d518c(*plVar2);
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  if (-1 < param_3) {
    iVar1 = FUN_0040caf8(plVar2[(ulong)param_2 + 1]);
    if ((param_3 < iVar1) && (lVar4 = FUN_0040cb0c(plVar2[(ulong)param_2 + 1],param_3), lVar4 != 0))
    {
      uVar5 = 1;
      *(code **)(lVar4 + 0x18) = FUN_003c4a94;
      *(code **)(lVar4 + 0x20) = FUN_003c4aa0;
      *(code **)(lVar4 + 0x28) = FUN_003c4a98;
      goto LAB_003c4a78;
    }
  }
  uVar5 = 0;
LAB_003c4a78:
  FUN_003d519c(*plVar2);
  return (ulong)uVar5;
}


// ===== 003c4a94  FUN_003c4a94 =====

void FUN_003c4a94(void)

{
  return;
}


// ===== 003c4a98  FUN_003c4a98 =====

undefined8 FUN_003c4a98(void)

{
  return 1;
}


// ===== 003c4aa0  FUN_003c4aa0 =====

void FUN_003c4aa0(void)

{
  return;
}


// ===== 003c4aa4  FUN_003c4aa4 =====

void FUN_003c4aa4(undefined4 param_1,undefined4 param_2)

{
  FUN_003c498c(0,param_1,param_2);
  return;
}


// ===== 003c4ab4  FUN_003c4ab4 =====

int FUN_003c4ab4(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  plVar2 = (long *)FUN_003b9e5c();
  if (plVar2 == (long *)0x0) {
    return -1;
  }
  if (0x11 < param_2) {
    FUN_00379868();
    FUN_0037995c("crypto/ex_data.c",0x25,"get_and_lock");
    FUN_00379a5c(0xf,0x80106,0);
    return -1;
  }
  if (*plVar2 == 0) {
    return -1;
  }
  iVar1 = FUN_003d518c(*plVar2);
  if (iVar1 == 0) {
    return -1;
  }
  if (plVar2[(ulong)param_2 + 1] == 0) {
    lVar4 = FUN_0040bf0c();
    plVar2[(ulong)param_2 + 1] = lVar4;
    if (lVar4 != 0) {
      iVar1 = FUN_0040c89c(lVar4,0);
      if (iVar1 != 0) goto LAB_003c4b5c;
      lVar4 = plVar2[(ulong)param_2 + 1];
    }
    FUN_0040bd78(lVar4);
    plVar2[(ulong)param_2 + 1] = 0;
    FUN_00379868();
    FUN_0037995c("crypto/ex_data.c",0xb0,"ossl_crypto_get_ex_new_index_ex");
    FUN_00379a5c(0xf,0x8000f,0);
  }
  else {
LAB_003c4b5c:
    puVar3 = (undefined8 *)FUN_003c83a4(0x30,"crypto/ex_data.c",0xb5);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = param_3;
      puVar3[1] = param_4;
      puVar3[4] = param_7;
      puVar3[5] = param_6;
      puVar3[3] = param_5;
      lVar4 = plVar2[(ulong)param_2 + 1];
      *(undefined4 *)(puVar3 + 2) = param_8;
      iVar1 = FUN_0040c89c(lVar4,0);
      if (iVar1 != 0) {
        iVar1 = FUN_0040caf8(plVar2[(ulong)param_2 + 1]);
        iVar1 = iVar1 + -1;
        FUN_0040cb3c(plVar2[(ulong)param_2 + 1],iVar1,puVar3);
        goto LAB_003c4c80;
      }
      FUN_00379868();
      FUN_0037995c("crypto/ex_data.c",0xc0,"ossl_crypto_get_ex_new_index_ex");
      FUN_00379a5c(0xf,0x8000f,0);
      FUN_003c86b4(puVar3,"crypto/ex_data.c",0xc1);
    }
  }
  iVar1 = -1;
LAB_003c4c80:
  FUN_003d519c(*plVar2);
  return iVar1;
}


// ===== 003c4c90  FUN_003c4c90 =====

void FUN_003c4c90(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  FUN_003c4ab4(0,param_1,param_2,param_3,param_4,param_5,param_6,0);
  return;
}


// ===== 003c4cb8  FUN_003c4cb8 =====

long * FUN_003c4cb8(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 *param_4)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined1 local_b0 [80];
  
  puVar5 = local_b0;
  plVar3 = (long *)FUN_003b9e5c();
  if (plVar3 != (long *)0x0) {
    if (param_2 < 0x12) {
      if (*plVar3 != 0) {
        plVar4 = (long *)FUN_003d517c(*plVar3);
        if ((int)plVar4 == 0) {
          return plVar4;
        }
        *param_4 = param_1;
        param_4[1] = 0;
        uVar1 = FUN_0040caf8(plVar3[(ulong)param_2 + 1]);
        if ((int)uVar1 < 1) {
          puVar5 = (undefined1 *)0x0;
        }
        else if ((uVar1 < 10) ||
                (puVar5 = (undefined1 *)FUN_003c83a4((ulong)uVar1 << 3,"crypto/ex_data.c",0xf3),
                puVar5 != (undefined1 *)0x0)) {
          uVar8 = 0;
          do {
            uVar6 = FUN_0040cb0c(plVar3[(ulong)param_2 + 1],uVar8 & 0xffffffff);
            *(undefined8 *)(puVar5 + uVar8 * 8) = uVar6;
            uVar8 = uVar8 + 1;
          } while (uVar1 != uVar8);
        }
        FUN_003d519c(*plVar3);
        if (((int)uVar1 < 1) || (puVar5 != (undefined1 *)0x0)) {
          if (0 < (int)uVar1) {
            uVar8 = 0;
            do {
              if ((*(long *)(puVar5 + uVar8 * 8) != 0) &&
                 (*(long *)(*(long *)(puVar5 + uVar8 * 8) + 0x18) != 0)) {
                if ((param_4[1] == 0) || (iVar2 = FUN_0040caf8(), (long)iVar2 <= (long)uVar8)) {
                  uVar6 = 0;
                }
                else {
                  uVar6 = FUN_0040cb0c(param_4[1],uVar8 & 0xffffffff);
                }
                puVar7 = *(undefined8 **)(puVar5 + uVar8 * 8);
                (*(code *)puVar7[3])(param_3,uVar6,param_4,uVar8 & 0xffffffff,*puVar7,puVar7[1]);
              }
              uVar8 = uVar8 + 1;
            } while (uVar1 != uVar8);
          }
          if (puVar5 != local_b0) {
            FUN_003c86b4(puVar5,"crypto/ex_data.c",0x104);
          }
          return (long *)0x1;
        }
      }
      plVar3 = (long *)0x0;
    }
    else {
      FUN_00379868();
      FUN_0037995c("crypto/ex_data.c",0x25,"get_and_lock");
      FUN_00379a5c(0xf,0x80106,0);
      plVar3 = (long *)0x0;
    }
  }
  return plVar3;
}


// ===== 003c4e94  FUN_003c4e94 =====

undefined8 FUN_003c4e94(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 8) != 0) {
    iVar1 = FUN_0040caf8();
    if (param_2 < iVar1) {
      uVar2 = FUN_0040cb0c(*(undefined8 *)(param_1 + 8),param_2);
      return uVar2;
    }
  }
  return 0;
}


// ===== 003c4ee0  FUN_003c4ee0 =====

void FUN_003c4ee0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_003c4cb8(0,param_1,param_2,param_3);
  return;
}


// ===== 003c4ef4  FUN_003c4ef4 =====

ulong FUN_003c4ef4(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 local_b0 [80];
  undefined8 local_48;
  
  puVar7 = local_b0;
  lVar1 = param_3[1];
  *param_2 = *param_3;
  if (lVar1 == 0) {
LAB_003c5038:
    uVar6 = 1;
  }
  else {
    plVar5 = (long *)FUN_003b9e5c();
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    if (0x11 < param_1) {
      FUN_00379868();
      FUN_0037995c("crypto/ex_data.c",0x25,"get_and_lock");
      FUN_00379a5c(0xf,0x80106,0);
      return 0;
    }
    if (*plVar5 != 0) {
      uVar6 = FUN_003d517c(*plVar5);
      if ((int)uVar6 == 0) {
        return uVar6;
      }
      uVar2 = FUN_0040caf8(plVar5[(ulong)param_1 + 1]);
      uVar3 = FUN_0040caf8(param_3[1]);
      if ((int)uVar2 <= (int)uVar3) {
        uVar3 = uVar2;
      }
      uVar6 = (ulong)uVar3;
      if ((int)uVar3 < 1) {
        puVar7 = (undefined1 *)0x0;
      }
      else {
        if ((9 < uVar3) &&
           (puVar7 = (undefined1 *)FUN_003c83a4(uVar6 << 3,"crypto/ex_data.c",0x131),
           puVar7 == (undefined1 *)0x0)) {
          FUN_003d519c(*plVar5);
          return 0;
        }
        uVar11 = 0;
        do {
          uVar8 = FUN_0040cb0c(plVar5[(ulong)param_1 + 1],uVar11 & 0xffffffff);
          *(undefined8 *)(puVar7 + uVar11 * 8) = uVar8;
          uVar11 = uVar11 + 1;
        } while (uVar6 != uVar11);
      }
      FUN_003d519c(*plVar5);
      if (uVar3 == 0) goto LAB_003c5038;
      if (puVar7 != (undefined1 *)0x0) {
        if ((param_2[1] == 0) || (iVar4 = FUN_0040caf8(), iVar4 < (int)uVar3)) {
          uVar8 = 0;
        }
        else {
          uVar8 = FUN_0040cb0c(param_2[1],uVar3 - 1);
        }
        iVar4 = FUN_003c5168(param_2,uVar3 - 1,uVar8);
        uVar11 = (ulong)(iVar4 != 0);
        if ((iVar4 != 0) && (0 < (int)uVar3)) {
          uVar10 = 0;
          do {
            if ((param_3[1] == 0) || (iVar4 = FUN_0040caf8(), (long)iVar4 <= (long)uVar10)) {
              local_48 = 0;
              puVar9 = *(undefined8 **)(puVar7 + uVar10 * 8);
            }
            else {
              local_48 = FUN_0040cb0c(param_3[1],uVar10 & 0xffffffff);
              puVar9 = *(undefined8 **)(puVar7 + uVar10 * 8);
            }
            if (((puVar9 != (undefined8 *)0x0) && ((code *)puVar9[5] != (code *)0x0)) &&
               (uVar11 = (*(code *)puVar9[5])
                                   (param_2,param_3,&local_48,uVar10 & 0xffffffff,*puVar9,puVar9[1])
               , (int)uVar11 == 0)) goto LAB_003c513c;
            FUN_003c5168(param_2,uVar10 & 0xffffffff,local_48);
            uVar10 = uVar10 + 1;
          } while (uVar6 != uVar10);
          uVar11 = 1;
        }
LAB_003c513c:
        if (puVar7 == local_b0) {
          return uVar11;
        }
        FUN_003c86b4(puVar7,"crypto/ex_data.c",0x151);
        return uVar11 & 0xffffffff;
      }
    }
    uVar6 = 0;
  }
  return uVar6;
}


// ===== 003c5168  FUN_003c5168 =====

undefined8 FUN_003c5168(long param_1,int param_2,long param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar4 = 0x8000f;
  if (*(long *)(param_1 + 8) == 0) {
    lVar3 = FUN_0040bf0c();
    *(long *)(param_1 + 8) = lVar3;
    if (lVar3 == 0) {
      uVar5 = 0x1db;
      goto LAB_003c5218;
    }
  }
  iVar1 = FUN_0040caf8();
  if (iVar1 <= param_2) {
    iVar1 = (param_2 - iVar1) + 1;
    do {
      iVar2 = FUN_0040c89c(*(undefined8 *)(param_1 + 8),0);
      if (iVar2 == 0) {
        uVar5 = 0x1e2;
        goto LAB_003c5218;
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  lVar3 = FUN_0040cb3c(*(undefined8 *)(param_1 + 8),param_2,param_3);
  if (lVar3 == param_3) {
    return 1;
  }
  uVar4 = 0x80106;
  uVar5 = 0x1e8;
LAB_003c5218:
  FUN_00379868();
  FUN_0037995c("crypto/ex_data.c",uVar5,"CRYPTO_set_ex_data");
  FUN_00379a5c(0xf,uVar4,0);
  return 0;
}


// ===== 003c525c  FUN_003c525c =====

void FUN_003c525c(uint param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  undefined1 *__base;
  undefined8 uVar5;
  ulong __nmemb;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  undefined1 local_100 [160];
  
  __base = local_100;
  plVar4 = (long *)FUN_003b9e5c(*param_3);
  if (plVar4 != (long *)0x0) {
    if (param_1 < 0x12) {
      if ((*plVar4 != 0) && (iVar1 = FUN_003d517c(*plVar4), iVar1 != 0)) {
        uVar2 = FUN_0040caf8(plVar4[(ulong)param_1 + 1]);
        if (((int)uVar2 < 1) ||
           ((__nmemb = (ulong)uVar2, 9 < uVar2 &&
            (__base = (undefined1 *)FUN_003c83a4(__nmemb << 4,"crypto/ex_data.c",0x185),
            __base == (undefined1 *)0x0)))) {
          FUN_003d519c(*plVar4);
          __base = (undefined1 *)0x0;
        }
        else {
          uVar7 = 0;
          puVar9 = (undefined4 *)(__base + 8);
          do {
            uVar5 = FUN_0040cb0c(plVar4[(ulong)param_1 + 1],uVar7 & 0xffffffff);
            *puVar9 = (int)uVar7;
            uVar7 = uVar7 + 1;
            *(undefined8 *)(puVar9 + -2) = uVar5;
            puVar9 = puVar9 + 4;
          } while (__nmemb != uVar7);
          FUN_003d519c(*plVar4);
          qsort(__base,__nmemb,0x10,FUN_003c5458);
          lVar6 = 0;
          if ((int)uVar2 < 2) {
            uVar2 = 1;
          }
          do {
            puVar8 = *(undefined8 **)(__base + lVar6);
            if ((puVar8 != (undefined8 *)0x0) && (puVar8[4] != 0)) {
              if (param_3[1] == 0) {
LAB_003c5394:
                uVar5 = 0;
              }
              else {
                iVar1 = *(int *)(__base + lVar6 + 8);
                iVar3 = FUN_0040caf8();
                if (iVar3 <= iVar1) goto LAB_003c5394;
                uVar5 = FUN_0040cb0c(param_3[1],iVar1);
              }
              (*(code *)puVar8[4])
                        (param_2,uVar5,param_3,*(undefined4 *)(__base + lVar6 + 8),*puVar8,puVar8[1]
                        );
            }
            lVar6 = lVar6 + 0x10;
          } while ((ulong)uVar2 << 4 != lVar6);
          if (__base == local_100) goto LAB_003c542c;
        }
        FUN_003c86b4(__base,"crypto/ex_data.c",0x19c);
      }
    }
    else {
      FUN_00379868();
      FUN_0037995c("crypto/ex_data.c",0x25,"get_and_lock");
      FUN_00379a5c(0xf,0x80106,0);
    }
  }
LAB_003c542c:
  FUN_0040bd78(param_3[1]);
  *param_3 = 0;
  param_3[1] = 0;
  return;
}


// ===== 003c5458  FUN_003c5458 =====

undefined4 FUN_003c5458(long *param_1,long *param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  lVar3 = *param_2;
  if (lVar2 != lVar3) {
    if (lVar2 == 0) {
      return 1;
    }
    if (lVar3 == 0) {
      return 0xffffffff;
    }
    if (*(int *)(lVar2 + 0x10) != *(int *)(lVar3 + 0x10)) {
      uVar1 = 1;
      if (*(int *)(lVar3 + 0x10) < *(int *)(lVar2 + 0x10)) {
        uVar1 = 0xffffffff;
      }
      return uVar1;
    }
  }
  return 0;
}


// ===== 003c54a4  FUN_003c54a4 =====

undefined8 FUN_003c54a4(undefined4 param_1,undefined8 param_2,long param_3,int param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (((*(long *)(param_3 + 8) != 0) &&
      (iVar1 = FUN_0040caf8(*(long *)(param_3 + 8)), param_4 < iVar1)) &&
     (lVar2 = FUN_0040cb0c(*(undefined8 *)(param_3 + 8),param_4), lVar2 != 0)) {
    return 1;
  }
  uVar3 = FUN_003c5520(param_1,param_2,param_3,param_4);
  return uVar3;
}


// ===== 003c5520  FUN_003c5520 =====

long * FUN_003c5520(uint param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  plVar1 = (long *)FUN_003b9e5c(*param_3);
  if (plVar1 != (long *)0x0) {
    if (param_1 < 0x12) {
      if (*plVar1 != 0) {
        plVar2 = (long *)FUN_003d517c(*plVar1);
        if ((int)plVar2 == 0) {
          return plVar2;
        }
        puVar3 = (undefined8 *)FUN_0040cb0c(plVar1[(ulong)param_1 + 1],param_4);
        FUN_003d519c(*plVar1);
        if ((code *)puVar3[3] != (code *)0x0) {
          (*(code *)puVar3[3])(param_2,0,param_3,param_4,*puVar3,puVar3[1]);
          return (long *)0x1;
        }
      }
      return (long *)0x0;
    }
    FUN_00379868();
    FUN_0037995c("crypto/ex_data.c",0x25,"get_and_lock");
    FUN_00379a5c(0xf,0x80106,0);
    plVar1 = (long *)0x0;
  }
  return plVar1;
}


// ===== 003c562c  FUN_003c562c =====

undefined8 FUN_003c562c(undefined8 *param_1)

{
  return *param_1;
}


// ===== 003c5634  FUN_003c5634 =====

char * FUN_003c5634(char *param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_003d57f8();
  if (iVar1 != 0) {
    return (char *)0x0;
  }
  pcVar2 = getenv(param_1);
  return pcVar2;
}


// ===== 003c566c  FUN_003c566c =====

void FUN_003c566c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if ((DAT_007ab998 == '\x01') && ((DAT_007ab99c & 1) == 0)) {
    DAT_007ab99c = 1;
    FUN_003c7dfc();
    puVar1 = DAT_007ab9e8;
    while (puVar1 != (undefined8 *)0x0) {
      (*(code *)*puVar1)();
      puVar2 = (undefined8 *)puVar1[1];
      FUN_003c86b4(puVar1,"crypto/init.c",0x17c);
      puVar1 = puVar2;
    }
    DAT_007ab9e8 = (undefined8 *)0x0;
    FUN_003d51ac(DAT_007ab9f0);
    DAT_007ab9f0 = 0;
    FUN_003d51ac(DAT_007ab9f8);
    DAT_007ab9f8 = 0;
    FUN_003d5294(&DAT_007ab9b0);
    if (DAT_007ab9a0 == '\x01') {
      FUN_003c6418();
    }
    FUN_003ed7e8();
    FUN_003bb20c();
    FUN_003b9514();
    FUN_003c7b0c();
    FUN_0037f2e8();
    FUN_003a22c0();
    FUN_003dcbcc();
    FUN_00379d74();
    FUN_003c8d60();
    FUN_003c6878();
    FUN_003d56b8();
    DAT_007ab998 = '\0';
  }
  return;
}


// ===== 003c575c  FUN_003c575c =====

ulong FUN_003c575c(ulong param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  uint uVar6;
  ulong local_38;
  
  uVar6 = (uint)param_1;
  if (DAT_007ab99c == '\x01') {
    if ((uVar6 >> 0x12 & 1) != 0) {
      return 0;
    }
    FUN_00379868();
    FUN_0037995c("crypto/init.c",0x1e1,"OPENSSL_init_crypto");
    FUN_00379a5c(0xf,0xc0105,0);
    return 0;
  }
  iVar1 = FUN_003d52ec(&DAT_007aba00,&local_38,0);
  if ((iVar1 != 0) && ((param_1 & (local_38 ^ 0xffffffffffffffff)) == 0)) {
    return 1;
  }
  iVar2 = FUN_003d51c8(&DAT_007ab9b4,FUN_003c5b4c);
  uVar3 = 0;
  if ((iVar2 != 0) && (DAT_007ab9b8 != 0)) {
    if ((uVar6 >> 0x12 & 1) != 0) {
      return 1;
    }
    if (iVar1 == 0) {
      uVar3 = FUN_003d52ec(&DAT_007aba00,&local_38,DAT_007ab9f0);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      if ((param_1 & (local_38 ^ 0xffffffffffffffff)) == 0) {
        return 1;
      }
    }
    if ((uVar6 >> 0x13 & 1) == 0) {
      pcVar5 = FUN_003c5bfc;
    }
    else {
      pcVar5 = FUN_003c5bec;
    }
    iVar1 = FUN_003d51c8(&DAT_007ab9bc,pcVar5);
    uVar3 = 0;
    if ((iVar1 != 0) && (DAT_007ab9c0 != 0)) {
      iVar1 = FUN_003d51c8(&DAT_007ab9c4,FUN_003c5c28);
      uVar3 = 0;
      if ((iVar1 != 0) && (DAT_007ab9a4 != '\0')) {
        if ((param_1 & 1) != 0) {
          iVar1 = FUN_003d51c8(&DAT_007ab9c8,FUN_003c5c38);
          if (iVar1 == 0) {
            return 0;
          }
          if (DAT_007ab9cc == 0) {
            return 0;
          }
        }
        if ((uVar6 >> 1 & 1) != 0) {
          iVar1 = FUN_003d51c8(&DAT_007ab9c8,FUN_003c5c48);
          if (iVar1 == 0) {
            return 0;
          }
          if (DAT_007ab9cc == 0) {
            return 0;
          }
        }
        if ((uVar6 >> 4 & 1) != 0) {
          iVar1 = FUN_003d51c8(&DAT_007ab9d0,FUN_003c5c9c);
          if (iVar1 == 0) {
            return 0;
          }
          if (DAT_007ab9a8 == '\0') {
            return 0;
          }
        }
        if ((uVar6 >> 2 & 1) != 0) {
          iVar1 = FUN_003d51c8(&DAT_007ab9d0,FUN_003c5cac);
          if (iVar1 == 0) {
            return 0;
          }
          if (DAT_007ab9a8 == '\0') {
            return 0;
          }
        }
        if ((uVar6 >> 5 & 1) != 0) {
          iVar1 = FUN_003d51c8(&DAT_007ab9d4,FUN_003c5ccc);
          if (iVar1 == 0) {
            return 0;
          }
          if (DAT_007ab9ac == '\0') {
            return 0;
          }
        }
        if ((uVar6 >> 3 & 1) != 0) {
          iVar1 = FUN_003d51c8(&DAT_007ab9d4,FUN_003c5cdc);
          if (iVar1 == 0) {
            return 0;
          }
          if (DAT_007ab9ac == '\0') {
            return 0;
          }
        }
        if (((uVar6 >> 0x11 & 1) == 0) || (uVar3 = FUN_003d530c(0), (int)uVar3 != 0)) {
          if ((uVar6 >> 7 & 1) != 0) {
            iVar1 = FUN_003d51c8(&DAT_007ab9d8,FUN_003c5cfc);
            if (iVar1 == 0) {
              return 0;
            }
            if (DAT_007ab9dc == 0) {
              return 0;
            }
          }
          if (((uVar6 >> 6 & 1) != 0) && (lVar4 = FUN_003d5240(&DAT_007ab9b0), lVar4 == 0)) {
            uVar3 = FUN_003d5268(&DAT_007ab9b0,0xffffffffffffffff);
            if ((int)uVar3 == 0) {
              return uVar3;
            }
            if (param_2 == 0) {
              uVar3 = FUN_003d51c8(&DAT_007ab9d8,FUN_003c5d1c);
              iVar1 = DAT_007ab9dc;
              if ((int)uVar3 == 0) {
                return uVar3;
              }
            }
            else {
              uVar3 = FUN_003d518c(DAT_007ab9f8);
              if ((int)uVar3 == 0) {
                return uVar3;
              }
              DAT_007aba08 = param_2;
              iVar2 = FUN_003d51c8(&DAT_007ab9d8,FUN_003c5d3c);
              iVar1 = DAT_007ab9dc;
              DAT_007aba08 = 0;
              FUN_003d519c(DAT_007ab9f8);
              if (iVar2 == 0) {
                return 0;
              }
            }
            if (iVar1 < 1) {
              return 0;
            }
          }
          if ((uVar6 >> 8 & 1) != 0) {
            iVar1 = FUN_003d51c8(&DAT_007ab9e0,FUN_003c5d68);
            if (iVar1 == 0) {
              return 0;
            }
            if (DAT_007ab9e4 == 0) {
              return 0;
            }
          }
          iVar1 = FUN_003d52d4(&DAT_007aba00,param_1,&local_38,DAT_007ab9f0);
          return (ulong)(iVar1 != 0);
        }
      }
    }
  }
  return uVar3;
}


// ===== 003c5b4c  FUN_003c5b4c =====

void FUN_003c5b4c(void)

{
  int iVar1;
  
  DAT_007ab9f0 = FUN_003d5150();
  if (DAT_007ab9f0 != 0) {
    DAT_007ab9f8 = FUN_003d5150();
    if (DAT_007ab9f8 != 0) {
      FUN_003c46d0();
      iVar1 = FUN_003c7a20();
      if ((iVar1 != 0) && (iVar1 = FUN_003d5204(&DAT_007ab9b0,0), iVar1 != 0)) {
        DAT_007ab998 = 1;
        DAT_007ab9b8 = 1;
        return;
      }
    }
  }
  FUN_003d51ac(DAT_007ab9f0);
  DAT_007ab9f0 = 0;
  FUN_003d51ac(DAT_007ab9f8);
  DAT_007ab9f8 = 0;
  DAT_007ab9b8 = 0;
  return;
}


// ===== 003c5bec  FUN_003c5bec =====

void FUN_003c5bec(void)

{
  DAT_007ab9c0 = 1;
  return;
}


// ===== 003c5bfc  FUN_003c5bfc =====

void FUN_003c5bfc(void)

{
  int iVar1;
  
  iVar1 = FUN_002f93b4(FUN_003c566c);
  DAT_007ab9c0 = (uint)(iVar1 == 0);
  return;
}


// ===== 003c5c28  FUN_003c5c28 =====

void FUN_003c5c28(void)

{
  DAT_007ab9a4 = 1;
  return;
}


// ===== 003c5c38  FUN_003c5c38 =====

void FUN_003c5c38(void)

{
  DAT_007ab9cc = 1;
  return;
}


// ===== 003c5c48  FUN_003c5c48 =====

void FUN_003c5c48(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_8;
  
  iVar1 = FUN_0037acc4(&local_8);
  if (iVar1 != 0) {
    uVar2 = FUN_003c7118();
    FUN_0037ad5c(local_8);
    DAT_007ab9cc = uVar2;
    return;
  }
  DAT_007ab9cc = 0;
  return;
}


// ===== 003c5c9c  FUN_003c5c9c =====

void FUN_003c5c9c(void)

{
  DAT_007ab9a8 = 1;
  return;
}


// ===== 003c5cac  FUN_003c5cac =====

void FUN_003c5cac(void)

{
  FUN_003c7504();
  DAT_007ab9a8 = 1;
  return;
}


// ===== 003c5ccc  FUN_003c5ccc =====

void FUN_003c5ccc(void)

{
  DAT_007ab9ac = 1;
  return;
}


// ===== 003c5cdc  FUN_003c5cdc =====

void FUN_003c5cdc(void)

{
  FUN_003c77a8();
  DAT_007ab9ac = 1;
  return;
}


// ===== 003c5cfc  FUN_003c5cfc =====

void FUN_003c5cfc(void)

{
  FUN_003c7a10();
  DAT_007ab9dc = 1;
  return;
}


// ===== 003c5d1c  FUN_003c5d1c =====

void FUN_003c5d1c(void)

{
  DAT_007ab9dc = FUN_003c7998(0);
  return;
}


// ===== 003c5d3c  FUN_003c5d3c =====

void FUN_003c5d3c(void)

{
  DAT_007ab9dc = FUN_003c7998(DAT_007aba08);
  return;
}


// ===== 003c5d68  FUN_003c5d68 =====

void FUN_003c5d68(void)

{
  int iVar1;
  
  iVar1 = FUN_003c63c4();
  if (iVar1 != 0) {
    DAT_007ab9a0 = 1;
    DAT_007ab9e4 = 1;
    return;
  }
  DAT_007ab9e4 = 0;
  return;
}


// ===== 003c5da4  FUN_003c5da4 =====

undefined8 * FUN_003c5da4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_003c83a4(0x10,"crypto/init.c",0x2d0);
  puVar1 = DAT_007ab9e8;
  if (puVar2 != (undefined8 *)0x0) {
    DAT_007ab9e8 = puVar2;
    *puVar2 = param_1;
    puVar2[1] = puVar1;
    puVar2 = (undefined8 *)0x1;
  }
  return puVar2;
}


// ===== 003c5dec  FUN_003c5dec =====

void FUN_003c5dec(void)

{
  FUN_003d5240(&DAT_007aba10);
  return;
}


// ===== 003c5df8  FUN_003c5df8 =====

void FUN_003c5df8(void)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = FUN_003d5240(&DAT_007aba10);
  if (lVar2 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/async/async.c",0x98,"async_start_func");
    FUN_00379a5c(0x33,0xc0103,0);
    return;
  }
  do {
    lVar3 = *(long *)(lVar2 + 8);
    uVar1 = (**(code **)(lVar3 + 8))(*(undefined8 *)(lVar3 + 0x10));
    *(undefined4 *)(lVar3 + 0x18) = uVar1;
    *(undefined4 *)(lVar3 + 0x1c) = 3;
    FUN_00379868();
    FUN_0037995c("crypto/async/async.c",0xa8,"async_start_func");
    FUN_00379a5c(0x33,0x66,0);
  } while( true );
}


// ===== 003c5eac  FUN_003c5eac =====

undefined8
FUN_003c5eac(long *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,void *param_5,
            size_t param_6)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  void *__dest;
  undefined4 uVar6;
  long lVar7;
  
  uVar2 = FUN_003c575c(0x100,0);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  lVar3 = FUN_003d5240(&DAT_007aba10);
  if (lVar3 == 0) {
    uVar2 = FUN_003c8118(0,0,FUN_003c6658);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    lVar3 = FUN_003c83a4(0x18,"crypto/async/async.c",0x2a);
    if (lVar3 == 0) {
LAB_003c5f5c:
      FUN_003c86b4(lVar3,"crypto/async/async.c",0x36);
      return 0;
    }
    *(undefined8 *)(lVar3 + 8) = 0;
    *(undefined4 *)(lVar3 + 0x10) = 0;
    iVar1 = FUN_003d5268(&DAT_007aba10,lVar3);
    if (iVar1 == 0) goto LAB_003c5f5c;
  }
  lVar7 = *param_1;
  if (lVar7 == 0) {
    lVar7 = *(long *)(lVar3 + 8);
    if (lVar7 != 0) goto LAB_003c5f94;
    puVar4 = (undefined8 *)FUN_003d5240(&DAT_007aba14);
    if (puVar4 == (undefined8 *)0x0) {
      iVar1 = FUN_003c6444(0,0);
      if (iVar1 == 0) goto LAB_003c61c0;
      puVar4 = (undefined8 *)FUN_003d5240(&DAT_007aba14);
    }
    lVar7 = FUN_0040ca00(*puVar4);
    if (lVar7 == 0) {
      if (((puVar4[2] == 0) || ((ulong)puVar4[1] < (ulong)puVar4[2])) &&
         (lVar7 = FUN_003c8474(0x30,"crypto/async/async.c",0x52), lVar7 != 0)) {
        *(undefined4 *)(lVar7 + 0x1c) = 0;
        FUN_003c86b4(*(undefined8 *)(lVar7 + 0x10),"crypto/async/async.c",0x5e);
        FUN_003c86b4(lVar7,"crypto/async/async.c",0x60);
      }
LAB_003c61c0:
      *(undefined8 *)(lVar3 + 8) = 0;
      return 1;
    }
    *(long *)(lVar3 + 8) = lVar7;
    if (param_5 == (void *)0x0) {
      *(undefined8 *)(lVar7 + 0x10) = 0;
    }
    else {
      __dest = (void *)FUN_003c83a4(param_6,"crypto/async/async.c",0xfd);
      lVar7 = *(long *)(lVar3 + 8);
      *(void **)(lVar7 + 0x10) = __dest;
      if (__dest == (void *)0x0) {
        puVar4 = (undefined8 *)FUN_003d5240(&DAT_007aba14);
        if (puVar4 == (undefined8 *)0x0) {
          FUN_00379868();
          FUN_0037995c("crypto/async/async.c",0x8a,"async_release_job");
          FUN_00379a5c(0x33,0xc0103,0);
        }
        else {
          FUN_003c86b4(*(undefined8 *)(lVar7 + 0x10),"crypto/async/async.c",0x8d);
          uVar2 = *puVar4;
          *(undefined8 *)(lVar7 + 0x10) = 0;
          FUN_0040c89c(uVar2,lVar7);
        }
        *(undefined8 *)(lVar3 + 8) = 0;
        return 0;
      }
      memcpy(__dest,param_5,param_6);
    }
    *(undefined8 *)(lVar7 + 8) = param_4;
    *(undefined8 *)(lVar7 + 0x20) = param_2;
    FUN_003b933c(0);
    uVar6 = 0x66;
    uVar2 = 0x10d;
LAB_003c61fc:
    FUN_00379868();
    FUN_0037995c("crypto/async/async.c",uVar2,"ASYNC_start_job");
  }
  else {
    *(long *)(lVar3 + 8) = lVar7;
LAB_003c5f94:
    iVar1 = *(int *)(lVar7 + 0x1c);
    if (iVar1 == 1) {
      *param_1 = lVar7;
      lVar7 = *(long *)(lVar3 + 8);
      *(undefined8 *)(lVar3 + 8) = 0;
      *(undefined4 *)(lVar7 + 0x1c) = 2;
      return 2;
    }
    if (iVar1 == 2) {
      lVar7 = *param_1;
      if (lVar7 == 0) {
        return 0;
      }
      uVar2 = *(undefined8 *)(lVar7 + 0x28);
      *(long *)(lVar3 + 8) = lVar7;
      lVar7 = FUN_003b9b14(uVar2);
      if (lVar7 == 0) {
        uVar2 = 0xdd;
        uVar6 = 0xc0103;
      }
      else {
        uVar5 = FUN_003b9b14();
        uVar6 = 0x66;
        uVar2 = 0xe4;
        *(undefined8 *)(*(long *)(lVar3 + 8) + 0x28) = uVar5;
      }
      goto LAB_003c61fc;
    }
    if (iVar1 == 3) {
      *(undefined8 *)(lVar7 + 0x20) = 0;
      *param_3 = *(undefined4 *)(lVar7 + 0x18);
      puVar4 = (undefined8 *)FUN_003d5240(&DAT_007aba14);
      if (puVar4 == (undefined8 *)0x0) {
        FUN_00379868();
        FUN_0037995c("crypto/async/async.c",0x8a,"async_release_job");
        FUN_00379a5c(0x33,0xc0103,0);
      }
      else {
        FUN_003c86b4(*(undefined8 *)(lVar7 + 0x10),"crypto/async/async.c",0x8d);
        uVar2 = *puVar4;
        *(undefined8 *)(lVar7 + 0x10) = 0;
        FUN_0040c89c(uVar2,lVar7);
      }
      *(undefined8 *)(lVar3 + 8) = 0;
      uVar2 = 3;
      goto LAB_003c62a0;
    }
    FUN_00379868();
    FUN_0037995c("crypto/async/async.c",0xf1,"ASYNC_start_job");
    uVar6 = 0xc0103;
  }
  FUN_00379a5c(0x33,uVar6,0);
  lVar7 = *(long *)(lVar3 + 8);
  puVar4 = (undefined8 *)FUN_003d5240(&DAT_007aba14);
  if (puVar4 == (undefined8 *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/async/async.c",0x8a,"async_release_job");
    FUN_00379a5c(0x33,0xc0103,0);
  }
  else {
    FUN_003c86b4(*(undefined8 *)(lVar7 + 0x10),"crypto/async/async.c",0x8d);
    uVar2 = *puVar4;
    *(undefined8 *)(lVar7 + 0x10) = 0;
    FUN_0040c89c(uVar2,lVar7);
  }
  uVar2 = 0;
  *(undefined8 *)(lVar3 + 8) = 0;
LAB_003c62a0:
  *param_1 = 0;
  return uVar2;
}


// ===== 003c6348  FUN_003c6348 =====

undefined8 FUN_003c6348(void)

{
  long lVar1;
  
  lVar1 = FUN_003d5240(&DAT_007aba10);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 8) != 0)) {
    if (*(int *)(lVar1 + 0x10) != 0) {
      return 1;
    }
    *(undefined4 *)(*(long *)(lVar1 + 8) + 0x1c) = 1;
    FUN_00379868();
    FUN_0037995c("crypto/async/async.c",0x132,"ASYNC_pause_job");
    FUN_00379a5c(0x33,0x66,0);
    return 0;
  }
  return 1;
}


// ===== 003c63c4  FUN_003c63c4 =====

undefined8 FUN_003c63c4(void)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_003d5204(&DAT_007aba10,0);
  if ((int)uVar2 != 0) {
    iVar1 = FUN_003d5204(&DAT_007aba14,0);
    if (iVar1 != 0) {
      return 1;
    }
    FUN_003d5294(&DAT_007aba10);
    uVar2 = 0;
  }
  return uVar2;
}


// ===== 003c6418  FUN_003c6418 =====

void FUN_003c6418(void)

{
  FUN_003d5294(&DAT_007aba10);
  FUN_003d5294(&DAT_007aba14);
  return;
}


// ===== 003c6444  FUN_003c6444 =====

undefined8 FUN_003c6444(ulong param_1,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  
  if (param_1 < param_2) {
    FUN_00379868();
    FUN_0037995c("crypto/async/async.c",0x162,"ASYNC_init_thread");
    FUN_00379a5c(0x33,0x67,0);
  }
  else {
    uVar2 = FUN_003c575c(0x100,0);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    uVar2 = FUN_003c8118(0,0,FUN_003c6658);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    plVar3 = (long *)FUN_003c8474(0x18,"crypto/async/async.c",0x16c);
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    lVar4 = FUN_0040bf38(0,param_2 & 0xffffffff);
    *plVar3 = lVar4;
    if (lVar4 == 0) {
      FUN_00379868();
      FUN_0037995c("crypto/async/async.c",0x172,"ASYNC_init_thread");
      FUN_00379a5c(0x33,0x8000f,0);
      uVar2 = 0x173;
    }
    else {
      plVar3[2] = param_1;
      if ((param_2 != 0) && (lVar4 = FUN_003c8474(0x30,"crypto/async/async.c",0x52), lVar4 != 0)) {
        *(undefined4 *)(lVar4 + 0x1c) = 0;
        FUN_003c86b4(*(undefined8 *)(lVar4 + 0x10),"crypto/async/async.c",0x5e);
        FUN_003c86b4(lVar4,"crypto/async/async.c",0x60);
      }
      plVar3[1] = 0;
      iVar1 = FUN_003d5268(&DAT_007aba14,plVar3);
      if (iVar1 != 0) {
        return 1;
      }
      FUN_00379868();
      FUN_0037995c("crypto/async/async.c",0x18b,"ASYNC_init_thread");
      FUN_00379a5c(0x33,0x65,0);
      if (*plVar3 != 0) {
        lVar4 = FUN_0040ca00();
        while (lVar4 != 0) {
          FUN_003c86b4(*(undefined8 *)(lVar4 + 0x10),"crypto/async/async.c",0x5e);
          FUN_003c86b4(lVar4,"crypto/async/async.c",0x60);
          lVar4 = FUN_0040ca00(*plVar3);
        }
      }
      FUN_0040bd78(*plVar3);
      uVar2 = 0x193;
    }
    FUN_003c86b4(plVar3,"crypto/async/async.c",uVar2);
  }
  return 0;
}


// ===== 003c6658  FUN_003c6658 =====

void FUN_003c6658(void)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  plVar2 = (long *)FUN_003d5240(&DAT_007aba14);
  if (plVar2 != (long *)0x0) {
    if (*plVar2 != 0) {
      lVar3 = FUN_0040ca00();
      while (lVar3 != 0) {
        FUN_003c86b4(*(undefined8 *)(lVar3 + 0x10),"crypto/async/async.c",0x5e);
        FUN_003c86b4(lVar3,"crypto/async/async.c",0x60);
        lVar3 = FUN_0040ca00(*plVar2);
      }
    }
    FUN_0040bd78(*plVar2);
    FUN_003c86b4(plVar2,"crypto/async/async.c",0x19e);
    FUN_003d5268(&DAT_007aba14,0);
  }
  FUN_003c686c();
  uVar4 = FUN_003d5240(&DAT_007aba10);
  iVar1 = FUN_003d5268(&DAT_007aba10,0);
  if (iVar1 != 0) {
    FUN_003c86b4(uVar4,"crypto/async/async.c",0x49);
    return;
  }
  return;
}


// ===== 003c674c  FUN_003c674c =====

void FUN_003c674c(void)

{
  int iVar1;
  
  iVar1 = FUN_003c575c(0x100,0);
  if (iVar1 != 0) {
    FUN_003c6658();
    return;
  }
  return;
}


// ===== 003c6774  FUN_003c6774 =====

long FUN_003c6774(void)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_003c575c(0x100,0);
  if (iVar1 != 0) {
    lVar2 = FUN_003d5240(&DAT_007aba10);
    if (lVar2 != 0) {
      lVar2 = *(long *)(lVar2 + 8);
    }
    return lVar2;
  }
  return 0;
}


// ===== 003c67b4  FUN_003c67b4 =====

undefined8 FUN_003c67b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


// ===== 003c67bc  FUN_003c67bc =====

void FUN_003c67bc(void)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_003c575c(0x100,0);
  if (((iVar1 != 0) && (lVar2 = FUN_003d5240(&DAT_007aba10), lVar2 != 0)) &&
     (*(long *)(lVar2 + 8) != 0)) {
    *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + 1;
  }
  return;
}


// ===== 003c6800  FUN_003c6800 =====

void FUN_003c6800(void)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_003c575c(0x100,0);
  if ((((iVar1 != 0) && (lVar2 = FUN_003d5240(&DAT_007aba10), lVar2 != 0)) &&
      (*(long *)(lVar2 + 8) != 0)) && (*(int *)(lVar2 + 0x10) != 0)) {
    *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + -1;
  }
  return;
}


// ===== 003c6848  FUN_003c6848 =====

undefined8 FUN_003c6848(void)

{
  return 0;
}


// ===== 003c6850  FUN_003c6850 =====

undefined8 FUN_003c6850(void)

{
  return 0;
}


// ===== 003c6858  FUN_003c6858 =====

void FUN_003c6858(undefined8 *param_1,undefined8 *param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = 0;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = 0;
  }
  return;
}


// ===== 003c686c  FUN_003c686c =====

void FUN_003c686c(void)

{
  return;
}


// ===== 003c6870  FUN_003c6870 =====

undefined8 FUN_003c6870(void)

{
  return 1;
}


// ===== 003c6878  FUN_003c6878 =====

void FUN_003c6878(void)

{
  FUN_003d56bc(0xd,0);
  return;
}


// ===== 003c6884  FUN_003c6884 =====

char * FUN_003c6884(char *param_1,int *param_2,undefined8 *param_3,undefined8 *param_4,
                   undefined4 *param_5)

{
  char *__s;
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  long lVar4;
  undefined8 uVar5;
  char *__s_00;
  char *local_68;
  
  if (param_1 == (char *)0x0) {
    *param_3 = 0;
    *param_2 = -1;
    *param_4 = 0;
    *param_5 = 0;
  }
  else {
    pcVar2 = strchr(param_1,0x3a);
    *param_3 = 0;
    *param_2 = -1;
    *param_4 = 0;
    *param_5 = 0;
    if (pcVar2 != (char *)0x0) {
      __s = pcVar2 + 1;
      pcVar3 = strchr(__s,0x3a);
      iVar1 = FUN_003c69ec(param_1);
      *param_2 = iVar1;
      if ((((iVar1 < 0) && (pcVar3 != (char *)0x0)) &&
          (local_68 = param_1, lVar4 = strtol(pcVar3 + 1,&local_68,10), pcVar3 + 1 < local_68)) &&
         (__s_00 = local_68 + 1, *local_68 == ':')) {
        iVar1 = FUN_003c69ec(__s_00);
        *param_2 = iVar1;
        if (-1 < iVar1) {
          uVar5 = FUN_003ca354(param_1,(long)pcVar2 - (long)param_1,"crypto/cmp/cmp_util.c",99);
          *param_3 = uVar5;
          uVar5 = FUN_003ca354(__s,(long)pcVar3 - (long)__s,"crypto/cmp/cmp_util.c",100);
          *param_4 = uVar5;
          *param_5 = (int)lVar4;
          pcVar2 = strchr(__s_00,0x3a);
          if (pcVar2 == (char *)0x0) {
            param_1 = (char *)0x0;
          }
          else {
            param_1 = pcVar2 + 1;
            if (*param_1 == ' ') {
              param_1 = pcVar2 + 2;
            }
          }
        }
      }
    }
  }
  return param_1;
}


// ===== 003c69ec  FUN_003c69ec =====

undefined4 FUN_003c69ec(char *param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int local_26;
  short local_22;
  
  pcVar2 = strchr(param_1,0x3a);
  if (pcVar2 != (char *)0x0) {
    iVar1 = strncmp(param_1,"CMP ",4);
    iVar3 = (int)pcVar2 - (int)(param_1 + (ulong)(iVar1 == 0) * 4);
    if (iVar3 < 6) {
      FUN_003ca460(&local_26,param_1 + (ulong)(iVar1 == 0) * 4,(long)(iVar3 + 1));
      if (local_26 == 0x52454d45 && local_22 == 0x47) {
        return 0;
      }
      if (local_26 == 0x52454c41 && local_22 == 0x54) {
        return 1;
      }
      if (local_26 == 0x54495243 && (char)local_22 == '\0') {
        return 2;
      }
      if (local_26 != 0x4f525245 || local_22 != 0x52) {
        if (local_26 == 0x4e524157 && (char)local_22 == '\0') {
          return 4;
        }
        if (local_26 != 0x45544f4e || (char)local_22 != '\0') {
          if (local_26 != 0x4f464e49 || (char)local_22 != '\0') {
            uVar4 = 7;
            if (local_26 != 0x55424544 || local_22 != 0x47) {
              uVar4 = 0xffffffff;
            }
            return uVar4;
          }
          return 6;
        }
        return 5;
      }
      return 3;
    }
  }
  return 0xffffffff;
}


// ===== 003c6bf8  FUN_003c6bf8 =====

uint FUN_003c6bf8(undefined8 param_1)

{
  uint uVar1;
  char *pcVar2;
  uint in_w4;
  undefined8 in_x5;
  
  if (in_w4 < 7) {
    pcVar2 = &DAT_00207228 + *(int *)(&DAT_00207228 + (ulong)in_w4 * 4);
  }
  else {
    pcVar2 = "DEBUG";
    if (in_w4 != 7) {
      pcVar2 = "(unknown level)";
    }
  }
  uVar1 = FUN_0037b9f8(param_1,"CMP %s: %s\n",pcVar2,in_x5);
  return ~uVar1 >> 0x1f;
}


// ===== 003c6c50  FUN_003c6c50 =====

void FUN_003c6c50(code *param_1)

{
  char *__s1;
  int iVar1;
  ulong uVar2;
  char *pcVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_1188 [256];
  byte local_1088 [4];
  undefined4 local_1084;
  long local_1080;
  char *local_1078;
  undefined8 local_1070;
  undefined1 auStack_1068 [4104];
  
  local_1078 = (char *)0x0;
  local_1070 = 0;
  local_1080 = 0;
  uVar2 = FUN_0037a69c(&local_1070,&local_1084,&local_1078,&local_1080,local_1088);
  if (uVar2 != 0) {
    do {
      __s1 = local_1078;
      pcVar3 = (char *)FUN_0037a99c(uVar2);
      uVar5 = (uint)uVar2;
      if (pcVar3 == (char *)0x0) {
        pcVar3 = "(unknown function)";
        if (__s1 != (char *)0x0) {
          pcVar3 = __s1;
        }
        uVar6 = 0x7fffff;
        if ((uVar2 & 0x80000000) != 0) {
          uVar6 = 0x7fffffff;
        }
        uVar6 = uVar6 & uVar5;
        if ((int)uVar5 < 0) goto LAB_003c6d5c;
LAB_003c6d30:
        puVar4 = (undefined1 *)FUN_0037aa50(uVar2);
        if (puVar4 == (undefined1 *)0x0) goto LAB_003c6d80;
LAB_003c6d74:
        if (local_1080 != 0) goto LAB_003c6da0;
LAB_003c6da8:
        FUN_0037cd5c(auStack_1068,0x1000,&DAT_001d3a58,puVar4);
      }
      else {
        if (((__s1 != (char *)0x0) && (*__s1 != '\0')) &&
           (iVar1 = strcmp(__s1,"(unknown function)"), iVar1 != 0)) {
          pcVar3 = __s1;
        }
        uVar6 = 0x7fffff;
        if ((uVar2 & 0x80000000) != 0) {
          uVar6 = 0x7fffffff;
        }
        uVar6 = uVar6 & uVar5;
        if (-1 < (int)uVar5) goto LAB_003c6d30;
LAB_003c6d5c:
        puVar4 = auStack_1188;
        iVar1 = FUN_003caaa8(uVar6,auStack_1188,0x100);
        if (iVar1 != 0) goto LAB_003c6d74;
LAB_003c6d80:
        puVar4 = auStack_1188;
        FUN_0037cd5c(auStack_1188,0x100,"reason(%lu)",uVar6);
        if (local_1080 == 0) goto LAB_003c6da8;
LAB_003c6da0:
        if ((local_1088[0] >> 1 & 1) == 0) goto LAB_003c6da8;
        FUN_0037cd5c(auStack_1068,0x1000,"%s:%s",puVar4);
      }
    } while (((param_1 == (code *)0x0) ||
             (iVar1 = (*param_1)(pcVar3,local_1070,local_1084,3,auStack_1068), 0 < iVar1)) &&
            (uVar2 = FUN_0037a69c(&local_1070,&local_1084,&local_1078,&local_1080,local_1088),
            uVar2 != 0));
  }
  return;
}


// ===== 003c6e20  FUN_003c6e20 =====

undefined8 FUN_003c6e20(long param_1,long param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/cmp/cmp_util.c",0xcf,"ossl_cmp_X509_STORE_add1_certs");
    FUN_00379a5c(0x3a,0x67,0);
    return 0;
  }
  if ((param_2 != 0) && (iVar1 = FUN_0040caf8(param_2), 0 < iVar1)) {
    if (param_3 == 0) {
      do {
        uVar3 = FUN_0040cb0c(param_2,param_3);
        uVar3 = FUN_00428144(param_1,uVar3);
        if ((int)uVar3 == 0) {
          return uVar3;
        }
        param_3 = param_3 + 1;
        iVar1 = FUN_0040caf8(param_2);
      } while (param_3 < iVar1);
    }
    else {
      iVar1 = 0;
      do {
        uVar3 = FUN_0040cb0c(param_2,iVar1);
        iVar2 = FUN_0042a790(uVar3,0);
        if ((iVar2 == 1) && (uVar3 = FUN_00428144(param_1,uVar3), (int)uVar3 == 0)) {
          return uVar3;
        }
        iVar1 = iVar1 + 1;
        iVar2 = FUN_0040caf8(param_2);
      } while (iVar1 < iVar2);
    }
  }
  return 1;
}


// ===== 003c6f3c  FUN_003c6f3c =====

long FUN_003c6f3c(long param_1,long param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    lVar2 = FUN_0038a418(0);
    if (lVar2 != 0) {
      iVar1 = FUN_0038ebe0(lVar2,param_2,param_3);
      if ((iVar1 == 0) || (iVar1 = FUN_0040c89c(param_1,lVar2), iVar1 == 0)) {
        thunk_FUN_0038eddc(lVar2);
        return 0;
      }
      lVar2 = 1;
    }
  }
  return lVar2;
}


// ===== 003c6fc0  FUN_003c6fc0 =====

undefined8 FUN_003c6fc0(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_1 == (long *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/cmp/cmp_util.c",0xf8,"ossl_cmp_asn1_octet_string_set1");
    FUN_00379a5c(0x3a,0x67,0);
    return 0;
  }
  lVar1 = *param_1;
  if (lVar1 != param_2) {
    if (param_2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = thunk_FUN_0038ed00(param_2);
      if (lVar2 == 0) {
        return 0;
      }
      lVar1 = *param_1;
    }
    thunk_FUN_0038eddc(lVar1);
    *param_1 = lVar2;
  }
  return 1;
}


// ===== 003c7054  FUN_003c7054 =====

undefined8 FUN_003c7054(long *param_1,long param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_1 == (long *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/cmp/cmp_util.c",0x110,"ossl_cmp_asn1_octet_string_set1_bytes");
    FUN_00379a5c(0x3a,0x67,0);
    return 0;
  }
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_0038a358();
    if ((lVar2 == 0) || (iVar1 = thunk_FUN_0038ebe0(lVar2,param_2,param_3), iVar1 == 0)) {
      thunk_FUN_0038eddc(lVar2);
      return 0;
    }
  }
  thunk_FUN_0038eddc(*param_1);
  *param_1 = lVar2;
  return 1;
}


// ===== 003c7118  FUN_003c7118 =====

ulong FUN_003c7118(void)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = FUN_00379dc8();
  if (((((((((int)uVar2 != 0) && (uVar2 = FUN_003c71fc(), (int)uVar2 != 0)) &&
          (uVar2 = FUN_003fa4c4(), (int)uVar2 != 0)) &&
         (((uVar2 = FUN_003c7238(), (int)uVar2 != 0 && (uVar2 = FUN_003c7274(), (int)uVar2 != 0)) &&
          ((uVar2 = FUN_003de4d4(), (int)uVar2 != 0 &&
           ((uVar2 = FUN_003dec34(), (int)uVar2 != 0 && (uVar2 = FUN_004275bc(), (int)uVar2 != 0))))
          )))) && (uVar2 = FUN_003c72ac(), (int)uVar2 != 0)) &&
       (((((uVar2 = FUN_003c72e8(), (int)uVar2 != 0 && (uVar2 = FUN_003c7324(), (int)uVar2 != 0)) &&
          (uVar2 = FUN_003c7360(), (int)uVar2 != 0)) &&
         ((uVar2 = FUN_003e87b8(), (int)uVar2 != 0 && (uVar2 = FUN_004253e4(), (int)uVar2 != 0))))
        && ((uVar2 = FUN_003e0918(), (int)uVar2 != 0 &&
            ((uVar2 = FUN_003ed7ac(), (int)uVar2 != 0 && (uVar2 = FUN_003c739c(), (int)uVar2 != 0)))
            ))))) &&
      ((uVar2 = FUN_003c73d8(), (int)uVar2 != 0 &&
       (((uVar2 = FUN_0040d7b4(), (int)uVar2 != 0 && (uVar2 = FUN_003c7414(), (int)uVar2 != 0)) &&
        (uVar2 = FUN_003c7450(), (int)uVar2 != 0)))))) &&
     (((uVar2 = FUN_003c748c(), (int)uVar2 != 0 && (uVar2 = FUN_003c74c8(), (int)uVar2 != 0)) &&
      ((uVar2 = FUN_0040cc80(), (int)uVar2 != 0 && (uVar2 = FUN_003ea124(), (int)uVar2 != 0)))))) {
    iVar1 = FUN_0046b8a4();
    uVar2 = (ulong)(iVar1 != 0);
  }
  return uVar2;
}


// ===== 003c71fc  FUN_003c71fc =====

undefined8 FUN_003c71fc(void)

{
  long lVar1;
  
  lVar1 = FUN_0037aa50(0x1800064);
  if (lVar1 != 0) {
    return 1;
  }
  FUN_00379fc4(&DAT_00769488);
  return 1;
}


// ===== 003c7238  FUN_003c7238 =====

undefined8 FUN_003c7238(void)

{
  long lVar1;
  
  lVar1 = FUN_0037aa50(0x300008f);
  if (lVar1 != 0) {
    return 1;
  }
  FUN_00379fc4(&DAT_007695f8);
  return 1;
}


// ===== 003c7274  FUN_003c7274 =====

undefined8 FUN_003c7274(void)

{
  long lVar1;
  
  lVar1 = FUN_0037aa50(0);
  if (lVar1 != 0) {
    return 1;
  }
  FUN_00379fc4(&DAT_00207248);
  return 1;
}


// ===== 003c72ac  FUN_003c72ac =====

undefined8 FUN_003c72ac(void)

{
  long lVar1;
  
  lVar1 = FUN_0037aa50(0x68000ab);
  if (lVar1 != 0) {
    return 1;
  }
  FUN_00379fc4(&DAT_00769d08);
  return 1;
}


// ===== 003c72e8  FUN_003c72e8 =====

undefined8 FUN_003c72e8(void)

{
  long lVar1;
  
  lVar1 = FUN_0037aa50(0x700006e);
  if (lVar1 != 0) {
    return 1;
  }
  FUN_00379fc4(&DAT_0076a448);
  return 1;
}


// ===== 003c7324  FUN_003c7324 =====

undefined8 FUN_003c7324(void)

{
  long lVar1;
  
  lVar1 = FUN_0037aa50(0x7800075);
  if (lVar1 != 0) {
    return 1;
  }
  FUN_00379fc4(&DAT_0076a608);
  return 1;
}


// ===== 003c7360  FUN_003c7360 =====

undefined8 FUN_003c7360(void)

{
  long lVar1;
  
  lVar1 = FUN_0037aa50(0x10000064);
  if (lVar1 != 0) {
    return 1;
  }
  FUN_00379fc4(&DAT_0076a7f8);
  return 1;
}


// ===== 003c739c  FUN_003c739c =====

undefined8 FUN_003c739c(void)

{
  long lVar1;
  
  lVar1 = FUN_0037aa50(0x12800064);
  if (lVar1 != 0) {
    return 1;
  }
  FUN_00379fc4(&DAT_0076aaf8);
  return 1;
}


// ===== 003c73d8  FUN_003c73d8 =====

undefined8 FUN_003c73d8(void)

{
  long lVar1;
  
  lVar1 = FUN_0037aa50(0x1e80006c);
  if (lVar1 != 0) {
    return 1;
  }
  FUN_00379fc4(&DAT_0076ac08);
  return 1;
}


// ===== 003c7414  FUN_003c7414 =====

undefined8 FUN_003c7414(void)

{
  long lVar1;
  
  lVar1 = FUN_0037aa50(0x1c000064);
  if (lVar1 != 0) {
    return 1;
  }
  FUN_00379fc4(&DAT_0076adf8);
  return 1;
}


// ===== 003c7450  FUN_003c7450 =====

undefined8 FUN_003c7450(void)

{
  long lVar1;
  
  lVar1 = FUN_0037aa50(0x1d00008b);
  if (lVar1 != 0) {
    return 1;
  }
  FUN_00379fc4(&DAT_0076af68);
  return 1;
}


// ===== 003c748c  FUN_003c748c =====

undefined8 FUN_003c748c(void)

{
  long lVar1;
  
  lVar1 = FUN_0037aa50(0x1b00006b);
  if (lVar1 != 0) {
    return 1;
  }
  FUN_00379fc4(&DAT_0076b538);
  return 1;
}


// ===== 003c74c8  FUN_003c74c8 =====

undefined8 FUN_003c74c8(void)

{
  long lVar1;
  
  lVar1 = FUN_0037aa50(0x19800065);
  if (lVar1 != 0) {
    return 1;
  }
  FUN_00379fc4(&DAT_0076b5d8);
  return 1;
}


// ===== 003c7504  FUN_003c7504 =====

void FUN_003c7504(void)

{
  FUN_0037637c();
  FUN_003a1ec8();
  FUN_00376370();
  FUN_003a1ec8();
  FUN_00376394();
  FUN_003a1ec8();
  FUN_003763a0();
  FUN_003a1ec8();
  FUN_003763ac();
  FUN_003a1ec8();
  FUN_00376388();
  FUN_003a1ec8();
  FUN_003763b8();
  FUN_003a1ec8();
  FUN_0037646c();
  FUN_003a1ec8();
  FUN_00376514();
  FUN_003a1ec8();
  FUN_00376490();
  FUN_003a1ec8();
  FUN_003764a8();
  FUN_003a1ec8();
  FUN_003764cc();
  FUN_003a1ec8();
  FUN_003dc60c("aes128-wrap",0x8002,"id-aes128-wrap");
  FUN_003764f0();
  FUN_003a1ec8();
  FUN_003dc60c("aes128-wrap-pad",0x8002,"id-aes128-wrap-pad");
  FUN_003dc60c("AES128",0x8002,"AES-128-CBC");
  FUN_003dc60c("aes128",0x8002,"AES-128-CBC");
  FUN_003763d0();
  FUN_003a1ec8();
  FUN_003763c4();
  FUN_003a1ec8();
  FUN_003763e8();
  FUN_003a1ec8();
  FUN_003763f4();
  FUN_003a1ec8();
  FUN_00376400();
  FUN_003a1ec8();
  FUN_003763dc();
  FUN_003a1ec8();
  FUN_0037640c();
  FUN_003a1ec8();
  FUN_00376478();
  FUN_003a1ec8();
  FUN_00376520();
  FUN_003a1ec8();
  FUN_003764b4();
  FUN_003a1ec8();
  FUN_003764d8();
  FUN_003a1ec8();
  FUN_003dc60c("aes192-wrap",0x8002,"id-aes192-wrap");
  FUN_003764fc();
  FUN_003a1ec8();
  FUN_003dc60c("aes192-wrap-pad",0x8002,"id-aes192-wrap-pad");
  FUN_003dc60c("AES192",0x8002,"AES-192-CBC");
  FUN_003dc60c("aes192",0x8002,"AES-192-CBC");
  FUN_00376424();
  FUN_003a1ec8();
  FUN_00376418();
  FUN_003a1ec8();
  FUN_0037643c();
  FUN_003a1ec8();
  FUN_00376448();
  FUN_003a1ec8();
  FUN_00376454();
  FUN_003a1ec8();
  FUN_00376430();
  FUN_003a1ec8();
  FUN_00376460();
  FUN_003a1ec8();
  FUN_00376484();
  FUN_003a1ec8();
  FUN_0037652c();
  FUN_003a1ec8();
  FUN_0037649c();
  FUN_003a1ec8();
  FUN_003764c0();
  FUN_003a1ec8();
  FUN_003764e4();
  FUN_003a1ec8();
  FUN_003dc60c("aes256-wrap",0x8002,"id-aes256-wrap");
  FUN_00376508();
  FUN_003a1ec8();
  FUN_003dc60c("aes256-wrap-pad",0x8002,"id-aes256-wrap-pad");
  FUN_003dc60c("AES256",0x8002,"AES-256-CBC");
  FUN_003dc60c("aes256",0x8002,"AES-256-CBC");
  FUN_003c7788();
  FUN_003a1ec8();
  FUN_003c7790();
  FUN_003a1ec8();
  FUN_003c7798();
  FUN_003a1ec8();
  FUN_003c77a0();
  FUN_003a1ec8();
  return;
}


// ===== 003c7788  FUN_003c7788 =====

undefined8 FUN_003c7788(void)

{
  return 0;
}


// ===== 003c7790  FUN_003c7790 =====

undefined8 FUN_003c7790(void)

{
  return 0;
}


// ===== 003c7798  FUN_003c7798 =====

undefined8 FUN_003c7798(void)

{
  return 0;
}


// ===== 003c77a0  FUN_003c77a0 =====

undefined8 FUN_003c77a0(void)

{
  return 0;
}


// ===== 003c77a8  FUN_003c77a8 =====

void FUN_003c77a8(void)

{
  FUN_003c7874();
  FUN_003a1f20();
  FUN_003dc60c("ssl3-md5",0x8001,&DAT_001f35df);
  FUN_003c78e8();
  FUN_003a1f20();
  FUN_003a4268();
  FUN_003a1f20();
  FUN_003dc60c("ssl3-sha1",0x8001,&DAT_001eef82);
  FUN_003dc60c("RSA-SHA1-2",0x8001,"RSA-SHA1");
  FUN_003a4274();
  FUN_003a1f20();
  FUN_003a4280();
  FUN_003a1f20();
  FUN_003a42a4();
  FUN_003a1f20();
  FUN_003a42b0();
  FUN_003a1f20();
  FUN_003a428c();
  FUN_003a1f20();
  FUN_003a4298();
  FUN_003a1f20();
  FUN_003a42bc();
  FUN_003a1f20();
  FUN_003a434c();
  FUN_003a1f20();
  FUN_003a4358();
  FUN_003a1f20();
  FUN_003a4364();
  FUN_003a1f20();
  FUN_003a4370();
  FUN_003a1f20();
  FUN_003a43d4();
  FUN_003a1f20();
  return;
}


// ===== 003c7874  FUN_003c7874 =====

undefined * FUN_003c7874(void)

{
  return &DAT_0076b628;
}


// ===== 003c7880  FUN_003c7880 =====

void FUN_003c7880(void)

{
  FUN_00389e50();
  FUN_003d63f0();
  return;
}


// ===== 003c7894  FUN_003c7894 =====

void FUN_003c7894(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00389e50();
  FUN_003d5818(uVar1,param_2,param_3);
  return;
}


// ===== 003c78c0  FUN_003c78c0 =====

void FUN_003c78c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00389e50();
  FUN_003d6324(param_2,uVar1);
  return;
}


// ===== 003c78e8  FUN_003c78e8 =====

undefined * FUN_003c78e8(void)

{
  return &DAT_0076b710;
}


// ===== 003c78f4  FUN_003c78f4 =====

void FUN_003c78f4(void)

{
  FUN_00389e50();
  FUN_003d6414();
  return;
}


// ===== 003c7908  FUN_003c7908 =====

void FUN_003c7908(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00389e50();
  FUN_003d6448(uVar1,param_2,param_3);
  return;
}


// ===== 003c7934  FUN_003c7934 =====

void FUN_003c7934(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00389e50();
  FUN_003d6498(param_2,uVar1);
  return;
}


// ===== 003c795c  FUN_003c795c =====

void FUN_003c795c(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00389e50();
  FUN_003d64d4(uVar1,param_2,param_3,param_4);
  return;
}


// ===== 003c7998  FUN_003c7998 =====

undefined8 FUN_003c7998(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((DAT_007aba18 & 1) != 0) {
    return 1;
  }
  if (param_1 == (undefined8 *)0x0) {
    uVar3 = 0;
    uVar2 = 0;
    uVar4 = 0x32;
  }
  else {
    uVar2 = *param_1;
    uVar3 = param_1[1];
    uVar4 = param_1[2];
  }
  uVar1 = FUN_003b9a6c();
  uVar2 = FUN_003bab6c(uVar1,uVar2,uVar3,uVar4);
  DAT_007aba18 = 1;
  return uVar2;
}


// ===== 003c7a10  FUN_003c7a10 =====

void FUN_003c7a10(void)

{
  DAT_007aba18 = 1;
  return;
}


// ===== 003c7a20  FUN_003c7a20 =====

bool FUN_003c7a20(void)

{
  int iVar1;
  
  iVar1 = FUN_003d5204(&DAT_007a89f8,FUN_003c7a4c);
  return iVar1 != 0;
}


// ===== 003c7a4c  FUN_003c7a4c =====

void FUN_003c7a4c(long *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  
  if ((((param_1 != (long *)0x0) &&
       (iVar3 = FUN_003d51c8(&DAT_007aba20,FUN_003c8274), lVar2 = DAT_007aba28, iVar3 != 0)) &&
      (DAT_007aba24 != 0)) &&
     ((DAT_007aba28 != 0 && (iVar3 = FUN_003d518c(*(undefined8 *)(DAT_007aba28 + 8)), iVar3 != 0))))
  {
    lVar1 = *param_1;
    while (lVar1 != 0) {
      (**(code **)(lVar1 + 0x10))(*(undefined8 *)(lVar1 + 8));
      lVar4 = *(long *)(lVar1 + 0x18);
      *param_1 = lVar4;
      FUN_003c86b4(lVar1,"crypto/initthread.c",0x166);
      lVar1 = lVar4;
    }
    FUN_003d519c(*(undefined8 *)(lVar2 + 8));
  }
  FUN_003c804c(param_1);
  FUN_003c86b4(param_1,"crypto/initthread.c",199);
  return;
}


// ===== 003c7b0c  FUN_003c7b0c =====

void FUN_003c7b0c(void)

{
  FUN_003c7b48(0,1);
  FUN_003d5294(&DAT_007a89f8);
  DAT_007a89f8 = 0xffffffffffffffff;
  return;
}


// ===== 003c7b48  FUN_003c7b48 =====

undefined8 FUN_003c7b48(long param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  iVar2 = FUN_003d51c8(&DAT_007aba20,FUN_003c8274);
  puVar1 = DAT_007aba28;
  if (((iVar2 == 0) || (DAT_007aba24 == 0)) || (DAT_007aba28 == (undefined8 *)0x0)) {
    return 0;
  }
  if (param_2 == 0) {
    uVar4 = FUN_003d518c(DAT_007aba28[1]);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
  }
  else {
    DAT_007aba28 = (undefined8 *)0x0;
  }
  iVar2 = FUN_0040caf8(*puVar1);
  if (iVar2 < 1) {
LAB_003c7cd8:
    if (param_2 == 0) {
      FUN_003d519c(puVar1[1]);
    }
    else {
      FUN_003d51ac();
      FUN_0040bd78(*puVar1);
      FUN_003c86b4(puVar1,"crypto/initthread.c",0x1d3);
    }
    return 1;
  }
  iVar2 = 0;
LAB_003c7bec:
  plVar5 = (long *)FUN_0040cb0c(*puVar1,iVar2);
  if (plVar5 == (long *)0x0) {
    if (param_2 != 0) {
      return 0;
    }
    FUN_003d519c(puVar1[1]);
    return 0;
  }
  plVar6 = (long *)*plVar5;
  if (plVar6 != (long *)0x0) {
    plVar7 = (long *)0x0;
    do {
      plVar8 = plVar6;
      if (plVar7 == (long *)0x0) {
        if (param_2 != 0) goto LAB_003c7ca4;
        while (*plVar8 == param_1) {
          plVar6 = (long *)plVar8[3];
          *plVar5 = (long)plVar6;
          FUN_003c86b4(plVar8,"crypto/initthread.c",0x1c7);
          plVar8 = plVar6;
          if (plVar6 == (long *)0x0) goto LAB_003c7cc0;
        }
      }
      else {
        if (param_2 != 0) goto LAB_003c7c84;
        while (*plVar8 == param_1) {
          plVar6 = (long *)plVar8[3];
          plVar7[3] = (long)plVar6;
          FUN_003c86b4(plVar8,"crypto/initthread.c",0x1c7);
          plVar8 = plVar6;
          if (plVar6 == (long *)0x0) goto LAB_003c7cc0;
        }
      }
      plVar6 = (long *)plVar8[3];
      plVar7 = plVar8;
    } while (plVar6 != (long *)0x0);
  }
  goto LAB_003c7cc0;
LAB_003c7ca4:
  do {
    plVar7 = (long *)plVar6[3];
    *plVar5 = (long)plVar7;
    FUN_003c86b4(plVar6,"crypto/initthread.c",0x1c7);
    plVar6 = plVar7;
  } while (plVar7 != (long *)0x0);
  goto LAB_003c7cc0;
LAB_003c7c84:
  do {
    plVar8 = (long *)plVar6[3];
    plVar7[3] = (long)plVar8;
    FUN_003c86b4(plVar6,"crypto/initthread.c",0x1c7);
    plVar6 = plVar8;
  } while (plVar8 != (long *)0x0);
LAB_003c7cc0:
  if (param_2 != 0) {
    FUN_003c86b4(plVar5,"crypto/initthread.c",0x1ce);
  }
  iVar2 = iVar2 + 1;
  iVar3 = FUN_0040caf8(*puVar1);
  if (iVar3 <= iVar2) goto LAB_003c7cd8;
  goto LAB_003c7bec;
}


// ===== 003c7d68  FUN_003c7d68 =====

void FUN_003c7d68(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_003b933c();
  if (DAT_007a89f8 != -1) {
    uVar2 = FUN_003d5240(&DAT_007a89f8);
    FUN_003c7eec(uVar1,uVar2);
    return;
  }
  return;
}


// ===== 003c7db8  FUN_003c7db8 =====

void FUN_003c7db8(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (DAT_007a89f8 != -1) {
    uVar1 = FUN_003d5240(&DAT_007a89f8);
    FUN_003c7eec(param_1,uVar1);
    return;
  }
  return;
}


// ===== 003c7dfc  FUN_003c7dfc =====

void FUN_003c7dfc(void)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  
  if (DAT_007a89f8 != -1) {
    plVar4 = (long *)FUN_003d5240(&DAT_007a89f8);
    FUN_003d5268(&DAT_007a89f8,0);
    if ((((plVar4 != (long *)0x0) &&
         (iVar3 = FUN_003d51c8(&DAT_007aba20,FUN_003c8274), lVar2 = DAT_007aba28, iVar3 != 0)) &&
        (DAT_007aba24 != 0)) &&
       ((DAT_007aba28 != 0 && (iVar3 = FUN_003d518c(*(undefined8 *)(DAT_007aba28 + 8)), iVar3 != 0))
       )) {
      lVar1 = *plVar4;
      while (lVar1 != 0) {
        (**(code **)(lVar1 + 0x10))(*(undefined8 *)(lVar1 + 8));
        lVar5 = *(long *)(lVar1 + 0x18);
        *plVar4 = lVar5;
        FUN_003c86b4(lVar1,"crypto/initthread.c",0x166);
        lVar1 = lVar5;
      }
      FUN_003d519c(*(undefined8 *)(lVar2 + 8));
    }
    FUN_003c804c(plVar4);
    FUN_003c86b4(plVar4,"crypto/initthread.c",0xed);
    return;
  }
  return;
}


// ===== 003c7eec  FUN_003c7eec =====

void FUN_003c7eec(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if ((((param_2 == (long *)0x0) ||
       (iVar2 = FUN_003d51c8(&DAT_007aba20,FUN_003c8274), lVar1 = DAT_007aba28, iVar2 == 0)) ||
      (DAT_007aba24 == 0)) ||
     ((DAT_007aba28 == 0 || (iVar2 = FUN_003d518c(*(undefined8 *)(DAT_007aba28 + 8)), iVar2 == 0))))
  {
    return;
  }
  lVar3 = *param_2;
  if (lVar3 != 0) {
    if (param_1 == 0) {
      do {
        (**(code **)(lVar3 + 0x10))(*(undefined8 *)(lVar3 + 8));
        lVar5 = *(long *)(lVar3 + 0x18);
        *param_2 = lVar5;
        FUN_003c86b4(lVar3,"crypto/initthread.c",0x166);
        lVar3 = lVar5;
      } while (lVar5 != 0);
    }
    else {
      lVar5 = 0;
      do {
        lVar4 = lVar3;
        if (lVar5 == 0) {
          while (*(long *)(lVar4 + 8) == param_1) {
            (**(code **)(lVar4 + 0x10))(param_1);
            lVar3 = *(long *)(lVar4 + 0x18);
            *param_2 = lVar3;
            FUN_003c86b4(lVar4,"crypto/initthread.c",0x166);
            lVar4 = lVar3;
            if (lVar3 == 0) goto LAB_003c8030;
          }
        }
        else {
          while (*(long *)(lVar4 + 8) == param_1) {
            (**(code **)(lVar4 + 0x10))(param_1);
            lVar3 = *(long *)(lVar4 + 0x18);
            *(long *)(lVar5 + 0x18) = lVar3;
            FUN_003c86b4(lVar4,"crypto/initthread.c",0x166);
            lVar4 = lVar3;
            if (lVar3 == 0) goto LAB_003c8030;
          }
        }
        lVar3 = *(long *)(lVar4 + 0x18);
        lVar5 = lVar4;
      } while (lVar3 != 0);
    }
  }
LAB_003c8030:
  FUN_003d519c(*(undefined8 *)(lVar1 + 8));
  return;
}


// ===== 003c804c  FUN_003c804c =====

void FUN_003c804c(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  iVar2 = FUN_003d51c8(&DAT_007aba20,FUN_003c8274);
  puVar1 = DAT_007aba28;
  if ((((iVar2 != 0) && (DAT_007aba24 != 0)) && (DAT_007aba28 != (undefined8 *)0x0)) &&
     (iVar2 = FUN_003d518c(DAT_007aba28[1]), iVar2 != 0)) {
    iVar2 = FUN_0040caf8(*puVar1);
    if (0 < iVar2) {
      iVar2 = 0;
      do {
        lVar4 = FUN_0040cb0c(*puVar1,iVar2);
        if (lVar4 == param_1) {
          FUN_0040c404(*puVar1,iVar2);
          FUN_003d519c(puVar1[1]);
          return;
        }
        iVar2 = iVar2 + 1;
        iVar3 = FUN_0040caf8(*puVar1);
      } while (iVar2 < iVar3);
    }
    FUN_003d519c(puVar1[1]);
    return;
  }
  return;
}


// ===== 003c8118  FUN_003c8118 =====

undefined8 * FUN_003c8118(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  puVar2 = (undefined8 *)FUN_003d5240(&DAT_007a89f8);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_003c8474(8,"crypto/initthread.c",0x65);
    if (puVar2 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    iVar1 = FUN_003d5268(&DAT_007a89f8,puVar2);
    if (iVar1 == 0) {
      uVar5 = 0x69;
    }
    else {
      iVar1 = FUN_003d51c8(&DAT_007aba20,FUN_003c8274);
      puVar4 = DAT_007aba28;
      if ((((iVar1 != 0) && (DAT_007aba24 != 0)) && (DAT_007aba28 != (undefined8 *)0x0)) &&
         (iVar1 = FUN_003d518c(DAT_007aba28[1]), iVar1 != 0)) {
        iVar1 = FUN_0040c89c(*puVar4,puVar2);
        FUN_003d519c(puVar4[1]);
        if (iVar1 != 0) goto LAB_003c814c;
      }
      FUN_003d5268(&DAT_007a89f8,0);
      uVar5 = 0x70;
    }
    FUN_003c86b4(puVar2,"crypto/initthread.c",uVar5);
    return (undefined8 *)0x0;
  }
LAB_003c814c:
  puVar3 = (undefined8 *)FUN_003c83a4(0x20,"crypto/initthread.c",0x196);
  puVar4 = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[1] = param_2;
    puVar3[2] = param_3;
    *puVar3 = param_1;
    puVar3[3] = *puVar2;
    puVar4 = (undefined8 *)0x1;
    *puVar2 = puVar3;
  }
  return puVar4;
}


// ===== 003c826c  FUN_003c826c =====

void FUN_003c826c(undefined8 param_1)

{
  FUN_003c7b48(param_1,0);
  return;
}


// ===== 003c8274  FUN_003c8274 =====

void FUN_003c8274(void)

{
  long lVar1;
  long lVar2;
  
  DAT_007aba28 = (long *)FUN_003c8474(0x10,"crypto/initthread.c",0x3c);
  if (DAT_007aba28 == (long *)0x0) {
    DAT_007aba24 = 0;
    return;
  }
  lVar1 = FUN_0040bf0c();
  *DAT_007aba28 = lVar1;
  lVar1 = FUN_003d5150();
  lVar2 = *DAT_007aba28;
  DAT_007aba28[1] = lVar1;
  if ((lVar2 != 0) && (lVar1 != 0)) {
    DAT_007aba24 = 1;
    return;
  }
  FUN_0040bd78(lVar2);
  FUN_003d51ac(DAT_007aba28[1]);
  FUN_003c86b4(DAT_007aba28,"crypto/initthread.c",0x45);
  DAT_007aba28 = (long *)0x0;
  DAT_007aba24 = 0;
  return;
}


// ===== 003c8330  FUN_003c8330 =====

undefined8 FUN_003c8330(undefined *param_1,undefined *param_2,undefined *param_3)

{
  if ((DAT_007aba30 & 1) != 0) {
    return 0;
  }
  if (param_1 != (undefined *)0x0) {
    PTR_FUN_007a8a00 = param_1;
  }
  if (param_2 != (undefined *)0x0) {
    PTR_FUN_007a8a08 = param_2;
  }
  if (param_3 != (undefined *)0x0) {
    PTR_FUN_007a8a10 = param_3;
  }
  return 1;
}


// ===== 003c8370  FUN_003c8370 =====

void FUN_003c8370(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = PTR_FUN_007a8a00;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = PTR_FUN_007a8a08;
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = PTR_FUN_007a8a10;
  }
  return;
}


// ===== 003c83a4  FUN_003c83a4 =====

void * FUN_003c83a4(size_t param_1,long param_2,int param_3)

{
  void *pvVar1;
  
  if (PTR_FUN_007a8a00 == PTR_FUN_007a1ab0) {
    if (param_1 == 0) {
      return (void *)0x0;
    }
    if ((DAT_007aba30 & 1) == 0) {
      DAT_007aba30 = 1;
    }
    pvVar1 = malloc(param_1);
  }
  else {
    pvVar1 = (void *)(*(code *)PTR_FUN_007a8a00)(param_1,param_2,param_3);
    if (param_1 == 0) {
      return pvVar1;
    }
  }
  if (pvVar1 != (void *)0x0) {
    return pvVar1;
  }
  if ((param_2 == 0) && (param_3 == 0)) {
    return (void *)0x0;
  }
  FUN_00379868();
  FUN_0037995c(param_2,param_3,0);
  FUN_00379a5c(0xf,0xc0100,0);
  return (void *)0x0;
}


// ===== 003c8474  FUN_003c8474 =====

void * FUN_003c8474(size_t param_1,long param_2,int param_3)

{
  void *pvVar1;
  
  if (PTR_FUN_007a8a00 == PTR_FUN_007a1ab0) {
    if (param_1 == 0) {
      return (void *)0x0;
    }
    if ((DAT_007aba30 & 1) == 0) {
      DAT_007aba30 = 1;
    }
    pvVar1 = malloc(param_1);
    if (pvVar1 != (void *)0x0) goto LAB_003c84fc;
  }
  else {
    pvVar1 = (void *)(*(code *)PTR_FUN_007a8a00)(param_1,param_2,param_3);
    if ((param_1 == 0) || (pvVar1 != (void *)0x0)) {
      if (pvVar1 == (void *)0x0) {
        return (void *)0x0;
      }
LAB_003c84fc:
      pvVar1 = memset(pvVar1,0,param_1);
      return pvVar1;
    }
  }
  if ((param_2 == 0) && (param_3 == 0)) {
    return (void *)0x0;
  }
  FUN_00379868();
  FUN_0037995c(param_2,param_3,0);
  FUN_00379a5c(0xf,0xc0100,0);
  return (void *)0x0;
}


// ===== 003c8558  FUN_003c8558 =====

void * FUN_003c8558(void *param_1,size_t param_2,long param_3,int param_4)

{
  void *pvVar1;
  
  if (PTR_FUN_007a8a08 != PTR_FUN_007a1ad8) {
                    /* WARNING: Could not recover jumptable at 0x003c858c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar1 = (void *)(*(code *)PTR_FUN_007a8a08)();
    return pvVar1;
  }
  if (param_1 != (void *)0x0) {
    if (param_2 != 0) {
      pvVar1 = realloc(param_1,param_2);
      return pvVar1;
    }
    if (PTR_FUN_007a8a10 == PTR_FUN_007a1aa8) {
      free(param_1);
      return (void *)0x0;
    }
    (*(code *)PTR_FUN_007a8a10)(param_1,param_3,param_4);
    return (void *)0x0;
  }
  if (PTR_FUN_007a8a00 == PTR_FUN_007a1ab0) {
    if (param_2 == 0) {
      return (void *)0x0;
    }
    if ((DAT_007aba30 & 1) == 0) {
      DAT_007aba30 = 1;
    }
    pvVar1 = malloc(param_2);
  }
  else {
    pvVar1 = (void *)(*(code *)PTR_FUN_007a8a00)(param_2,param_3,param_4);
    if (param_2 == 0) {
      return pvVar1;
    }
  }
  if (pvVar1 == (void *)0x0) {
    if ((param_3 != 0) || (param_4 != 0)) {
      FUN_00379868();
      FUN_0037995c(param_3,param_4,0);
      FUN_00379a5c(0xf,0xc0100,0);
    }
    return (void *)0x0;
  }
  return pvVar1;
}


// ===== 003c86b4  FUN_003c86b4 =====

void FUN_003c86b4(void *param_1)

{
  if (PTR_FUN_007a8a10 != PTR_FUN_007a1aa8) {
                    /* WARNING: Could not recover jumptable at 0x003c86cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_FUN_007a8a10)();
    return;
  }
  free(param_1);
  return;
}


// ===== 003c86d4  FUN_003c86d4 =====

void * FUN_003c86d4(void *param_1,ulong param_2,ulong param_3,long param_4,int param_5)

{
  void *pvVar1;
  
  if (param_1 == (void *)0x0) {
    if (PTR_FUN_007a8a00 == PTR_FUN_007a1ab0) {
      if (param_3 == 0) {
        return (void *)0x0;
      }
      if ((DAT_007aba30 & 1) == 0) {
        DAT_007aba30 = 1;
      }
      pvVar1 = malloc(param_3);
    }
    else {
      pvVar1 = (void *)(*(code *)PTR_FUN_007a8a00)(param_3,param_4,param_5);
      if (param_3 == 0) {
        return pvVar1;
      }
    }
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
  }
  else {
    if (param_3 == 0) {
      if (param_2 != 0) {
        FUN_003c89b8();
      }
      if (PTR_FUN_007a8a10 == PTR_FUN_007a1aa8) {
        free(param_1);
        return (void *)0x0;
      }
      (*(code *)PTR_FUN_007a8a10)(param_1,param_4,param_5);
      return (void *)0x0;
    }
    if (param_3 <= param_2 && param_2 - param_3 != 0) {
      FUN_003c89b8((long)param_1 + param_3,param_2 - param_3);
      return param_1;
    }
    if (PTR_FUN_007a8a00 == PTR_FUN_007a1ab0) {
      if ((DAT_007aba30 & 1) == 0) {
        DAT_007aba30 = 1;
      }
      pvVar1 = malloc(param_3);
    }
    else {
      pvVar1 = (void *)(*(code *)PTR_FUN_007a8a00)(param_3,param_4,param_5);
    }
    if (pvVar1 != (void *)0x0) {
      memcpy(pvVar1,param_1,param_2);
      if (param_2 != 0) {
        FUN_003c89b8(param_1,param_2);
      }
      if (PTR_FUN_007a8a10 == PTR_FUN_007a1aa8) {
        free(param_1);
        return pvVar1;
      }
      (*(code *)PTR_FUN_007a8a10)(param_1,param_4,param_5);
      return pvVar1;
    }
  }
  if ((param_4 == 0) && (param_5 == 0)) {
    return (void *)0x0;
  }
  FUN_00379868();
  FUN_0037995c(param_4,param_5,0);
  FUN_00379a5c(0xf,0xc0100,0);
  return (void *)0x0;
}


// ===== 003c893c  FUN_003c893c =====

void FUN_003c893c(void *param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  if (param_1 == (void *)0x0) {
    return;
  }
  if (param_2 != 0) {
    FUN_003c89b8();
  }
  if (PTR_FUN_007a8a10 != PTR_FUN_007a1aa8) {
                    /* WARNING: Could not recover jumptable at 0x003c8994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_FUN_007a8a10)(param_1,param_3,param_4);
    return;
  }
  free(param_1);
  return;
}


// ===== 003c89b8  FUN_003c89b8 =====

void FUN_003c89b8(undefined8 param_1,undefined8 param_2)

{
  (*(code *)PTR_memset_007a8a18)(param_1,0,param_2);
  return;
}


// ===== 003c89cc  FUN_003c89cc =====

ulong FUN_003c89cc(ulong param_1,ulong param_2)

{
  bool bVar1;
  size_t __len;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  size_t sVar7;
  int *piVar8;
  uint uVar9;
  
  if ((DAT_007aba38 & 1) == 0) {
    uVar5 = FUN_003d5150();
    DAT_007aba40 = uVar5;
    if (uVar5 != 0) {
      DAT_007aba68 = 0;
      DAT_007aba60 = (void *)0x0;
      DAT_007aba78 = 0;
      DAT_007aba70 = 0;
      DAT_007aba88 = 0;
      DAT_007aba80 = 0;
      DAT_007aba98 = 0;
      DAT_007aba90 = 0;
      DAT_007aba58 = 0;
      DAT_007aba50 = (void *)0x0;
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_003c4750("assertion failed: size > 0","crypto/mem_sec.c",0x1be);
      }
      if ((param_1 & param_1 - 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_003c4750("assertion failed: (size & (size - 1)) == 0","crypto/mem_sec.c",0x1bf);
      }
      if (param_2 < 0x11) {
        param_2 = 0x10;
      }
      else if ((param_2 & param_2 - 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_003c4750("assertion failed: (minsize & (minsize - 1)) == 0","crypto/mem_sec.c",0x1d4);
      }
      uVar5 = 0;
      if (param_2 != 0) {
        uVar5 = param_1 / param_2;
      }
      DAT_007aba98 = uVar5 << 1;
      DAT_007aba68 = param_1;
      DAT_007aba80 = param_2;
      if (3 < uVar5) {
        DAT_007aba78 = -1;
        lVar6 = -8;
        uVar5 = DAT_007aba98;
        do {
          DAT_007aba78 = DAT_007aba78 + 1;
          lVar6 = lVar6 + 8;
          bVar1 = 1 < uVar5;
          uVar5 = uVar5 >> 1;
        } while (bVar1);
        DAT_007aba70 = FUN_003c8474(lVar6,"crypto/mem_sec.c",0x1e5);
        if (DAT_007aba70 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_003c4750("assertion failed: sh.freelist != NULL","crypto/mem_sec.c",0x1e6);
        }
        DAT_007aba88 = FUN_003c8474(DAT_007aba98 >> 3,"crypto/mem_sec.c",0x1ea);
        if (DAT_007aba88 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_003c4750("assertion failed: sh.bittable != NULL","crypto/mem_sec.c",0x1eb);
        }
        DAT_007aba90 = FUN_003c8474(DAT_007aba98 >> 3,"crypto/mem_sec.c",0x1ef);
        if (DAT_007aba90 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_003c4750("assertion failed: sh.bitmalloc != NULL","crypto/mem_sec.c",0x1f0);
        }
        sVar7 = sysconf(0x28);
        __len = 0x1000;
        if (0 < (long)sVar7) {
          __len = sVar7;
        }
        DAT_007aba58 = __len * 2 + DAT_007aba68;
        DAT_007aba50 = mmap((void *)0x0,DAT_007aba58,3,0x22,-1,0);
        if (DAT_007aba50 != (void *)0xffffffffffffffff) {
          DAT_007aba60 = (void *)((long)DAT_007aba50 + __len);
          FUN_003c9e9c(DAT_007aba60,0,DAT_007aba88);
          FUN_003c9f8c(DAT_007aba70,DAT_007aba60);
          uVar2 = mprotect(DAT_007aba50,__len,0);
          uVar3 = mprotect((void *)((long)DAT_007aba50 + ((__len * 2 + DAT_007aba68) - 1 & -__len)),
                           __len,0);
          uVar9 = 1;
          if ((int)(uVar3 | uVar2) < 0) {
            uVar9 = 2;
          }
          lVar6 = syscall(0x11c,DAT_007aba60,DAT_007aba68,1);
          uVar2 = uVar9;
          if (lVar6 < 0) {
            piVar8 = (int *)__errno();
            uVar2 = 2;
            if (*piVar8 == 0x26) {
              iVar4 = mlock(DAT_007aba60,DAT_007aba68);
              uVar2 = 2;
              if (-1 < iVar4) {
                uVar2 = uVar9;
              }
            }
          }
          iVar4 = madvise(DAT_007aba60,DAT_007aba68,0x10);
          DAT_007aba38 = 1;
          uVar9 = 2;
          if (-1 < iVar4) {
            uVar9 = uVar2;
          }
          return (ulong)uVar9;
        }
        DAT_007aba50 = (void *)0xffffffffffffffff;
      }
      FUN_003c86b4(DAT_007aba70,"crypto/mem_sec.c",0x25a);
      FUN_003c86b4(DAT_007aba88,"crypto/mem_sec.c",0x25b);
      FUN_003c86b4(DAT_007aba90,"crypto/mem_sec.c",0x25c);
      if ((DAT_007aba50 != (void *)0xffffffffffffffff) && (DAT_007aba58 != 0)) {
        munmap(DAT_007aba50,DAT_007aba58);
      }
      DAT_007aba68 = 0;
      DAT_007aba60 = (void *)0x0;
      DAT_007aba78 = 0;
      DAT_007aba70 = 0;
      DAT_007aba88 = 0;
      DAT_007aba80 = 0;
      DAT_007aba98 = 0;
      DAT_007aba90 = 0;
      DAT_007aba58 = 0;
      DAT_007aba50 = (void *)0x0;
      FUN_003d51ac(DAT_007aba40);
      DAT_007aba40 = 0;
      return 0;
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}


// ===== 003c8d60  FUN_003c8d60 =====

undefined8 FUN_003c8d60(void)

{
  if (DAT_007aba48 != 0) {
    return 0;
  }
  FUN_003c86b4(DAT_007aba70,"crypto/mem_sec.c",0x25a);
  FUN_003c86b4(DAT_007aba88,"crypto/mem_sec.c",0x25b);
  FUN_003c86b4(DAT_007aba90,"crypto/mem_sec.c",0x25c);
  if ((DAT_007aba50 != (void *)0xffffffffffffffff) && (DAT_007aba58 != 0)) {
    munmap(DAT_007aba50,DAT_007aba58);
  }
  DAT_007aba38 = 0;
  DAT_007aba98 = 0;
  DAT_007aba90 = 0;
  DAT_007aba88 = 0;
  DAT_007aba80 = 0;
  DAT_007aba78 = 0;
  DAT_007aba70 = 0;
  DAT_007aba68 = 0;
  DAT_007aba60 = 0;
  DAT_007aba58 = 0;
  DAT_007aba50 = (void *)0x0;
  FUN_003d51ac(DAT_007aba40);
  DAT_007aba40 = 0;
  return 1;
}


// ===== 003c8e18  FUN_003c8e18 =====

undefined1 FUN_003c8e18(void)

{
  return DAT_007aba38;
}


// ===== 003c8e24  FUN_003c8e24 =====

long * FUN_003c8e24(ulong param_1,long param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined4 uVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long local_68;
  
  if ((DAT_007aba38 & 1) == 0) {
    plVar15 = (long *)FUN_003c83a4();
    return plVar15;
  }
  iVar2 = FUN_003d518c(DAT_007aba40);
  lVar3 = DAT_007aba78;
  if (iVar2 == 0) {
    uVar13 = 0x8000f;
    goto joined_r0x003c8f2c;
  }
  if (param_1 <= DAT_007aba68) {
    lVar8 = 0;
    lVar16 = 0;
    uVar4 = DAT_007aba80;
    do {
      bVar1 = uVar4 < param_1;
      lVar16 = lVar16 + -8;
      lVar8 = lVar8 + 1;
      uVar4 = uVar4 << 1;
    } while (bVar1);
    uVar4 = DAT_007aba78 - lVar8;
    if (0 < (long)(uVar4 + 1)) {
      lVar14 = 0;
      local_68 = -lVar16;
      lVar8 = -lVar8;
      do {
        plVar15 = (long *)DAT_007aba70[DAT_007aba78 + lVar8];
        if (plVar15 != (long *)0x0) {
          if (lVar14 == 0) goto LAB_003c9328;
          local_68 = -local_68;
          lVar9 = DAT_007aba78 * 8;
          uVar18 = DAT_007aba78 + lVar8 & 0xffffffff;
          goto LAB_003c9024;
        }
        lVar8 = lVar8 + -1;
        lVar14 = lVar14 + 1;
        local_68 = local_68 + 8;
      } while (0 < DAT_007aba78 + lVar8 + 1);
    }
  }
  plVar15 = (long *)0x0;
  lVar3 = 0;
  goto LAB_003c8f00;
LAB_003c9024:
  do {
    if (((int)(lVar3 + lVar8) < 0) || (DAT_007aba78 <= (long)uVar18)) goto LAB_003c943c;
    uVar5 = DAT_007aba68 >> (uVar18 & 0x3f);
    if (((long)plVar15 - (long)DAT_007aba60 & uVar5 - 1) != 0) goto LAB_003c9454;
    uVar6 = 0;
    if (uVar5 != 0) {
      uVar6 = (ulong)((long)plVar15 - (long)DAT_007aba60) / uVar5;
    }
    uVar6 = uVar6 + (1L << (uVar18 & 0x3f));
    if (uVar6 == 0 || DAT_007aba98 <= uVar6) goto LAB_003c946c;
    if ((*(byte *)(DAT_007aba90 + (uVar6 >> 3)) >> (uVar6 & 7) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_003c4750("assertion failed: !sh_testbit(temp, slist, sh.bitmalloc)","crypto/mem_sec.c",
                   0x295);
    }
    FUN_003ca088(plVar15,lVar3 + lVar8,DAT_007aba88);
    lVar17 = *plVar15;
    plVar7 = (long *)plVar15[1];
    if (lVar17 != 0) {
      *(long **)(lVar17 + 8) = plVar7;
    }
    *plVar7 = lVar17;
    if (((*plVar15 != 0) &&
        ((plVar7 = *(long **)(*plVar15 + 8), plVar7 < DAT_007aba70 ||
         (DAT_007aba70 + DAT_007aba78 <= plVar7)))) &&
       ((plVar7 < DAT_007aba60 || ((long *)((long)DAT_007aba60 + DAT_007aba68) <= plVar7))))
    goto LAB_003c93fc;
    if (plVar15 == (long *)DAT_007aba70[lVar3 + lVar8]) {
                    /* WARNING: Subroutine does not return */
      FUN_003c4750("assertion failed: temp != sh.freelist[slist]","crypto/mem_sec.c",0x298);
    }
    uVar5 = lVar3 + lVar8 + 1;
    if (((int)uVar5 < 0) || (DAT_007aba78 <= (long)(uVar5 & 0xffffffff))) goto LAB_003c943c;
    uVar6 = DAT_007aba68 >> (uVar5 & 0x3f);
    if ((uVar6 - 1 & (long)plVar15 - (long)DAT_007aba60) != 0) goto LAB_003c9454;
    uVar10 = 0;
    if (uVar6 != 0) {
      uVar10 = (ulong)((long)plVar15 - (long)DAT_007aba60) / uVar6;
    }
    lVar17 = 1L << (uVar5 & 0x3f);
    uVar10 = uVar10 + lVar17;
    if ((uVar10 == 0) || (DAT_007aba98 <= uVar10)) goto LAB_003c946c;
    if ((*(byte *)(DAT_007aba90 + (uVar10 >> 3)) >> (uVar10 & 7) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_003c4750("assertion failed: !sh_testbit(temp, slist, sh.bitmalloc)","crypto/mem_sec.c",
                   0x29e);
    }
    FUN_003c9e9c(plVar15,uVar5 & 0xffffffff,DAT_007aba88);
    FUN_003c9f8c((long)DAT_007aba70 + lVar9 + local_68 + 8,plVar15);
    if ((long *)DAT_007aba70[lVar3 + lVar8 + 1] != plVar15) {
                    /* WARNING: Subroutine does not return */
      FUN_003c4750("assertion failed: sh.freelist[slist] == temp","crypto/mem_sec.c",0x2a1);
    }
    if (DAT_007aba78 <= (long)(uVar5 & 0xffffffff)) goto LAB_003c943c;
    uVar6 = DAT_007aba68 >> (uVar5 & 0x3f);
    plVar15 = (long *)((long)plVar15 + (DAT_007aba68 >> (uVar5 & 0x3f)));
    if (((long)plVar15 - (long)DAT_007aba60 & uVar6 - 1) != 0) goto LAB_003c9454;
    uVar10 = 0;
    if (uVar6 != 0) {
      uVar10 = (ulong)((long)plVar15 - (long)DAT_007aba60) / uVar6;
    }
    uVar10 = uVar10 + lVar17;
    if ((uVar10 == 0) || (DAT_007aba98 <= uVar10)) goto LAB_003c946c;
    if ((*(byte *)(DAT_007aba90 + (uVar10 >> 3)) >> (uVar10 & 7) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_003c4750("assertion failed: !sh_testbit(temp, slist, sh.bitmalloc)","crypto/mem_sec.c",
                   0x2a5);
    }
    FUN_003c9e9c(plVar15,uVar5 & 0xffffffff,DAT_007aba88);
    FUN_003c9f8c((long)DAT_007aba70 + lVar9 + local_68 + 8,plVar15);
    if ((long *)DAT_007aba70[lVar3 + lVar8 + 1] != plVar15) {
                    /* WARNING: Subroutine does not return */
      FUN_003c4750("assertion failed: sh.freelist[slist] == temp","crypto/mem_sec.c",0x2a8);
    }
    uVar10 = DAT_007aba68 >> (uVar5 & 0x3f);
    uVar6 = 0;
    if (uVar10 != 0) {
      uVar6 = (ulong)((long)plVar15 - (long)DAT_007aba60) / uVar10;
    }
    uVar11 = uVar6 + lVar17 ^ 1;
    uVar6 = uVar6 + lVar17 >> 3;
    uVar12 = 1L << (uVar11 & 7);
    if (((uVar12 & *(byte *)(DAT_007aba88 + uVar6)) == 0) ||
       ((uVar12 & *(byte *)(DAT_007aba90 + uVar6)) != 0)) {
      if (plVar15 != (long *)(DAT_007aba68 >> (uVar5 & 0x3f))) goto LAB_003c92f8;
    }
    else if ((long *)((long)plVar15 - (DAT_007aba68 >> (uVar5 & 0x3f))) !=
             (long *)((long)DAT_007aba60 + (uVar11 & lVar17 - 1U) * uVar10)) {
LAB_003c92f8:
                    /* WARNING: Subroutine does not return */
      FUN_003c4750("assertion failed: temp-(sh.arena_size >> slist) == sh_find_my_buddy(temp, slist)"
                   ,"crypto/mem_sec.c",0x2aa);
    }
    lVar14 = lVar14 + -1;
    lVar8 = lVar8 + 1;
    uVar18 = uVar18 + 1;
    local_68 = local_68 + 8;
  } while (lVar14 != 0);
LAB_003c9328:
  if (((int)uVar4 < 0) || (DAT_007aba78 <= (long)(uVar4 & 0xffffffff))) {
LAB_003c943c:
                    /* WARNING: Subroutine does not return */
    FUN_003c4750("assertion failed: list >= 0 && list < sh.freelist_size","crypto/mem_sec.c",0x16d);
  }
  uVar18 = DAT_007aba68 >> (uVar4 & 0x3f);
  plVar15 = *(long **)((long)DAT_007aba70 + lVar16 + lVar3 * 8);
  if (((long)plVar15 - (long)DAT_007aba60 & uVar18 - 1) != 0) {
LAB_003c9454:
                    /* WARNING: Subroutine does not return */
    FUN_003c4750("assertion failed: ((ptr - sh.arena) & ((sh.arena_size >> list) - 1)) == 0",
                 "crypto/mem_sec.c",0x16e);
  }
  uVar5 = 0;
  if (uVar18 != 0) {
    uVar5 = (ulong)((long)plVar15 - (long)DAT_007aba60) / uVar18;
  }
  uVar5 = uVar5 + (1L << (uVar4 & 0x3f));
  if (uVar5 == 0 || DAT_007aba98 <= uVar5) {
LAB_003c946c:
                    /* WARNING: Subroutine does not return */
    FUN_003c4750("assertion failed: bit > 0 && bit < sh.bittable_size","crypto/mem_sec.c",0x170);
  }
  if ((*(byte *)(DAT_007aba88 + (uVar5 >> 3)) >> (uVar5 & 7) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_003c4750("assertion failed: sh_testbit(chunk, list, sh.bittable)","crypto/mem_sec.c",0x2af);
  }
  FUN_003c9e9c(plVar15,uVar4,DAT_007aba90);
  lVar3 = *plVar15;
  plVar7 = (long *)plVar15[1];
  if (lVar3 != 0) {
    *(long **)(lVar3 + 8) = plVar7;
  }
  *plVar7 = lVar3;
  if (((*plVar15 != 0) &&
      ((plVar7 = *(long **)(*plVar15 + 8), plVar7 < DAT_007aba70 ||
       (DAT_007aba70 + DAT_007aba78 <= plVar7)))) &&
     ((plVar7 < DAT_007aba60 || ((long *)((long)DAT_007aba60 + DAT_007aba68) <= plVar7)))) {
LAB_003c93fc:
                    /* WARNING: Subroutine does not return */
    FUN_003c4750("assertion failed: WITHIN_FREELIST(temp2->p_next) || WITHIN_ARENA(temp2->p_next)",
                 "crypto/mem_sec.c",0x1ac);
  }
  if ((plVar15 < DAT_007aba60) || ((long *)((long)DAT_007aba60 + DAT_007aba68) <= plVar15)) {
                    /* WARNING: Subroutine does not return */
    FUN_003c4750("assertion failed: WITHIN_ARENA(chunk)","crypto/mem_sec.c",0x2b3);
  }
  *plVar15 = 0;
  plVar15[1] = 0;
  lVar3 = FUN_003c9544(plVar15);
LAB_003c8f00:
  DAT_007aba48 = DAT_007aba48 + lVar3;
  FUN_003d519c(DAT_007aba40);
  if (plVar15 != (long *)0x0) {
    return plVar15;
  }
  uVar13 = 0x6f;
joined_r0x003c8f2c:
  if ((param_2 != 0) || (param_3 != 0)) {
    FUN_00379868();
    FUN_0037995c(param_2,param_3,0);
    FUN_00379a5c(0xf,uVar13,0);
  }
  return (long *)0x0;
}


// ===== 003c9544  FUN_003c9544 =====

ulong FUN_003c9544(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if ((param_1 < DAT_007aba60) || (DAT_007aba60 + DAT_007aba68 <= param_1)) {
                    /* WARNING: Subroutine does not return */
    FUN_003c4750("assertion failed: WITHIN_ARENA(ptr)","crypto/mem_sec.c",0x2e8);
  }
  uVar3 = (param_1 + DAT_007aba68) - DAT_007aba60;
  uVar2 = DAT_007aba78 - 1;
  if (DAT_007aba80 <= uVar3) {
    uVar4 = 0;
    if (DAT_007aba80 != 0) {
      uVar4 = uVar3 / DAT_007aba80;
    }
    do {
      if ((*(byte *)(DAT_007aba88 + (uVar4 >> 3)) >> (uVar4 & 7) & 1) != 0) break;
      if ((uVar4 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_003c4750("assertion failed: (bit & 1) == 0","crypto/mem_sec.c",0x162);
      }
      uVar2 = uVar2 - 1;
      bVar1 = uVar4 != 0;
      uVar4 = uVar4 >> 1;
    } while (bVar1);
  }
  if (((int)uVar2 < 0) || (DAT_007aba78 <= (long)(uVar2 & 0xffffffff))) {
                    /* WARNING: Subroutine does not return */
    FUN_003c4750("assertion failed: list >= 0 && list < sh.freelist_size","crypto/mem_sec.c",0x16d);
  }
  uVar3 = DAT_007aba68 >> (uVar2 & 0x3f);
  if ((uVar3 - 1 & param_1 - DAT_007aba60) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_003c4750("assertion failed: ((ptr - sh.arena) & ((sh.arena_size >> list) - 1)) == 0",
                 "crypto/mem_sec.c",0x16e);
  }
  uVar4 = 0;
  if (uVar3 != 0) {
    uVar4 = (param_1 - DAT_007aba60) / uVar3;
  }
  uVar4 = uVar4 + (1L << (uVar2 & 0x3f));
  if (uVar4 != 0 && uVar4 < DAT_007aba98) {
    if ((*(byte *)(DAT_007aba88 + (uVar4 >> 3)) >> (uVar4 & 7) & 1) != 0) {
      return DAT_007aba68 >> (uVar2 & 0x3f);
    }
                    /* WARNING: Subroutine does not return */
    FUN_003c4750("assertion failed: sh_testbit(ptr, list, sh.bittable)","crypto/mem_sec.c",0x2ec);
  }
                    /* WARNING: Subroutine does not return */
  FUN_003c4750("assertion failed: bit > 0 && bit < sh.bittable_size","crypto/mem_sec.c",0x170);
}


// ===== 003c96b8  FUN_003c96b8 =====

void FUN_003c96b8(void)

{
  if (DAT_007aba38 == '\x01') {
    FUN_003c8e24();
    return;
  }
  FUN_003c8474();
  return;
}


// ===== 003c96d0  FUN_003c96d0 =====

void FUN_003c96d0(ulong param_1)

{
  int iVar1;
  long lVar2;
  
  if (param_1 == 0) {
    return;
  }
  if (((DAT_007aba38 == '\x01') && (DAT_007aba60 <= param_1)) &&
     (param_1 < DAT_007aba60 + DAT_007aba68)) {
    iVar1 = FUN_003d518c(DAT_007aba40);
    if (iVar1 == 0) {
      return;
    }
    lVar2 = FUN_003c9544(param_1);
    FUN_003c89b8(param_1,lVar2);
    DAT_007aba48 = DAT_007aba48 - lVar2;
    FUN_003c97d0(param_1);
    FUN_003d519c(DAT_007aba40);
    return;
  }
  FUN_003c86b4();
  return;
}


// ===== 003c9798  FUN_003c9798 =====

bool FUN_003c9798(ulong param_1)

{
  if (DAT_007aba38 == '\x01') {
    return (param_1 >= DAT_007aba60 && param_1 <= DAT_007aba60 + DAT_007aba68) &&
           (param_1 < DAT_007aba60 || DAT_007aba60 + DAT_007aba68 != param_1);
  }
  return false;
}


// ===== 003c97d0  FUN_003c97d0 =====

void FUN_003c97d0(long *param_1)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  
  if ((param_1 < DAT_007aba60) || ((long *)((long)DAT_007aba60 + DAT_007aba68) <= param_1)) {
                    /* WARNING: Subroutine does not return */
    FUN_003c4750("assertion failed: WITHIN_ARENA(ptr)","crypto/mem_sec.c",0x2c2);
  }
  uVar9 = (long)param_1 + (DAT_007aba68 - (long)DAT_007aba60);
  uVar13 = DAT_007aba78 - 1;
  if (DAT_007aba80 <= uVar9) {
    uVar6 = 0;
    if (DAT_007aba80 != 0) {
      uVar6 = uVar9 / DAT_007aba80;
    }
    do {
      if ((*(byte *)(DAT_007aba88 + (uVar6 >> 3)) >> (uVar6 & 7) & 1) != 0) break;
      if ((uVar6 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_003c4750("assertion failed: (bit & 1) == 0","crypto/mem_sec.c",0x162);
      }
      uVar13 = uVar13 - 1;
      bVar2 = uVar6 != 0;
      uVar6 = uVar6 >> 1;
    } while (bVar2);
  }
  if ((-1 < (int)uVar13) && ((long)(uVar13 & 0xffffffff) < DAT_007aba78)) {
    uVar9 = DAT_007aba68 >> (uVar13 & 0x3f);
    if ((uVar9 - 1 & (long)param_1 - (long)DAT_007aba60) != 0) {
LAB_003c9c1c:
                    /* WARNING: Subroutine does not return */
      FUN_003c4750("assertion failed: ((ptr - sh.arena) & ((sh.arena_size >> list) - 1)) == 0",
                   "crypto/mem_sec.c",0x16e);
    }
    uVar6 = 0;
    if (uVar9 != 0) {
      uVar6 = (ulong)((long)param_1 - (long)DAT_007aba60) / uVar9;
    }
    uVar6 = uVar6 + (1L << (uVar13 & 0x3f));
    if (uVar6 == 0 || DAT_007aba98 <= uVar6) {
LAB_003c9c04:
                    /* WARNING: Subroutine does not return */
      FUN_003c4750("assertion failed: bit > 0 && bit < sh.bittable_size","crypto/mem_sec.c",0x170);
    }
    if ((*(byte *)(DAT_007aba88 + (uVar6 >> 3)) >> (uVar6 & 7) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_003c4750("assertion failed: sh_testbit(ptr, list, sh.bittable)","crypto/mem_sec.c",0x2c7);
    }
    FUN_003ca088(param_1,uVar13 & 0xffffffff,DAT_007aba90);
    lVar14 = uVar13 * 8;
    FUN_003c9f8c(DAT_007aba70 + uVar13,param_1);
    uVar9 = uVar13;
    do {
      plVar1 = DAT_007aba60;
      lVar14 = lVar14 + -8;
      uVar9 = uVar9 - 1;
      uVar16 = (ulong)((int)uVar9 + 1);
      lVar15 = 1L << (uVar16 & 0x3f);
      uVar8 = DAT_007aba68 >> (uVar16 & 0x3f);
      uVar6 = 0;
      if (uVar8 != 0) {
        uVar6 = (ulong)((long)param_1 - (long)DAT_007aba60) / uVar8;
      }
      uVar6 = uVar6 + lVar15;
      uVar11 = 1L << ((uVar6 ^ 1) & 7);
      if ((((uVar11 & *(byte *)(DAT_007aba88 + (uVar6 >> 3))) == 0) ||
          (bVar4 = *(byte *)(DAT_007aba90 + (uVar6 >> 3)), (uVar11 & bVar4) != 0)) ||
         (DAT_007aba60 == (long *)0x0)) {
        return;
      }
      uVar17 = ((uVar6 ^ 1) & lVar15 - 1U) * uVar8;
      uVar11 = 0;
      if (uVar8 != 0) {
        uVar11 = uVar17 / uVar8;
      }
      uVar10 = uVar11 + lVar15 ^ 1;
      uVar11 = uVar11 + lVar15 >> 3;
      uVar12 = 1L << (uVar10 & 7);
      if (((uVar12 & *(byte *)(DAT_007aba88 + uVar11)) == 0) ||
         ((uVar12 & *(byte *)(DAT_007aba90 + uVar11)) != 0)) {
        if (param_1 != (long *)0x0) goto LAB_003c9c64;
      }
      else if (param_1 != (long *)((long)DAT_007aba60 + (uVar10 & lVar15 - 1U) * uVar8)) {
LAB_003c9c64:
                    /* WARNING: Subroutine does not return */
        FUN_003c4750("assertion failed: ptr == sh_find_my_buddy(buddy, list)","crypto/mem_sec.c",
                     0x2cd);
      }
      if (DAT_007aba78 <= (long)uVar16) break;
      if ((uVar8 - 1 & (long)param_1 - (long)DAT_007aba60) != 0) goto LAB_003c9c1c;
      if ((uVar6 == 0) || (DAT_007aba98 <= uVar6)) goto LAB_003c9c04;
      if ((bVar4 >> (uVar6 & 7) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_003c4750("assertion failed: !sh_testbit(ptr, list, sh.bitmalloc)","crypto/mem_sec.c",
                     0x2cf);
      }
      FUN_003ca088(param_1,uVar13 & 0xffffffff);
      lVar3 = *param_1;
      plVar7 = (long *)param_1[1];
      if (lVar3 != 0) {
        *(long **)(lVar3 + 8) = plVar7;
      }
      *plVar7 = lVar3;
      if (((*param_1 != 0) &&
          ((plVar7 = *(long **)(*param_1 + 8), plVar7 < DAT_007aba70 ||
           (DAT_007aba70 + DAT_007aba78 <= plVar7)))) &&
         ((plVar7 < DAT_007aba60 || ((long *)((long)DAT_007aba60 + DAT_007aba68) <= plVar7)))) {
LAB_003c9cc4:
                    /* WARNING: Subroutine does not return */
        FUN_003c4750("assertion failed: WITHIN_FREELIST(temp2->p_next) || WITHIN_ARENA(temp2->p_next)"
                     ,"crypto/mem_sec.c",0x1ac);
      }
      if (DAT_007aba78 <= (long)uVar16) break;
      uVar6 = DAT_007aba68 >> (uVar16 & 0x3f);
      if ((uVar6 - 1 & (long)param_1 - (long)DAT_007aba60) != 0) goto LAB_003c9c1c;
      uVar8 = 0;
      if (uVar6 != 0) {
        uVar8 = (ulong)((long)param_1 - (long)DAT_007aba60) / uVar6;
      }
      uVar8 = uVar8 + lVar15;
      if ((uVar8 == 0) || (DAT_007aba98 <= uVar8)) goto LAB_003c9c04;
      if ((*(byte *)(DAT_007aba90 + (uVar8 >> 3)) >> (uVar8 & 7) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_003c4750("assertion failed: !sh_testbit(ptr, list, sh.bitmalloc)","crypto/mem_sec.c",
                     0x2d2);
      }
      plVar1 = (long *)((long)plVar1 + uVar17);
      FUN_003ca088(plVar1,uVar13 & 0xffffffff,DAT_007aba88);
      lVar15 = *plVar1;
      plVar7 = (long *)plVar1[1];
      if (lVar15 != 0) {
        *(long **)(lVar15 + 8) = plVar7;
      }
      *plVar7 = lVar15;
      lVar15 = DAT_007aba78;
      if (((*plVar1 != 0) &&
          ((plVar7 = *(long **)(*plVar1 + 8), plVar7 < DAT_007aba70 ||
           (DAT_007aba70 + DAT_007aba78 <= plVar7)))) &&
         ((plVar7 < DAT_007aba60 || ((long *)((long)DAT_007aba60 + DAT_007aba68) <= plVar7))))
      goto LAB_003c9cc4;
      plVar7 = plVar1;
      if (param_1 <= plVar1) {
        plVar7 = param_1;
        param_1 = plVar1;
      }
      uVar5 = (int)uVar13 - 1;
      uVar13 = (ulong)uVar5;
      *param_1 = 0;
      param_1[1] = 0;
      if (((int)uVar5 < 0) || (lVar15 <= (long)(uVar9 & 0xffffffff))) break;
      uVar6 = DAT_007aba68 >> (uVar9 & 0x3f);
      if ((uVar6 - 1 & (long)plVar7 - (long)DAT_007aba60) != 0) goto LAB_003c9c1c;
      uVar8 = 0;
      if (uVar6 != 0) {
        uVar8 = (ulong)((long)plVar7 - (long)DAT_007aba60) / uVar6;
      }
      uVar8 = uVar8 + (1L << (uVar9 & 0x3f));
      if ((uVar8 == 0) || (DAT_007aba98 <= uVar8)) goto LAB_003c9c04;
      if ((*(byte *)(DAT_007aba90 + (uVar8 >> 3)) >> (uVar8 & 7) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_003c4750("assertion failed: !sh_testbit(ptr, list, sh.bitmalloc)","crypto/mem_sec.c",
                     0x2dd);
      }
      FUN_003c9e9c(plVar7,uVar13,DAT_007aba88);
      FUN_003c9f8c((long)DAT_007aba70 + lVar14,plVar7);
      param_1 = plVar7;
      if ((long *)DAT_007aba70[uVar9] != plVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_003c4750("assertion failed: sh.freelist[list] == ptr","crypto/mem_sec.c",0x2e0);
      }
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_003c4750("assertion failed: list >= 0 && list < sh.freelist_size","crypto/mem_sec.c",0x16d);
}


// ===== 003c9d0c  FUN_003c9d0c =====

void FUN_003c9d0c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  long lVar2;
  
  if (param_1 == 0) {
    return;
  }
  if (((DAT_007aba38 == '\x01') && (DAT_007aba60 <= param_1)) &&
     (param_1 < DAT_007aba60 + DAT_007aba68)) {
    iVar1 = FUN_003d518c(DAT_007aba40);
    if (iVar1 == 0) {
      return;
    }
    lVar2 = FUN_003c9544(param_1);
    FUN_003c89b8(param_1,lVar2);
    DAT_007aba48 = DAT_007aba48 - lVar2;
    FUN_003c97d0(param_1);
    FUN_003d519c(DAT_007aba40);
    return;
  }
  FUN_003c89b8();
  FUN_003c86b4(param_1,param_3,param_4);
  return;
}


// ===== 003c9df0  FUN_003c9df0 =====

undefined8 FUN_003c9df0(void)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = FUN_003d517c(DAT_007aba40);
  uVar1 = DAT_007aba48;
  if (iVar2 != 0) {
    FUN_003d519c(DAT_007aba40);
    return uVar1;
  }
  return 0;
}


// ===== 003c9e40  FUN_003c9e40 =====

undefined8 FUN_003c9e40(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_003d518c(DAT_007aba40);
  if (iVar1 != 0) {
    uVar2 = FUN_003c9544(param_1);
    FUN_003d519c(DAT_007aba40);
    return uVar2;
  }
  return 0;
}


// ===== 003c9e9c  FUN_003c9e9c =====

void FUN_003c9e9c(long param_1,uint param_2,long param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (((int)param_2 < 0) || (uVar3 = (ulong)param_2, DAT_007aba78 <= (long)uVar3)) {
                    /* WARNING: Subroutine does not return */
    FUN_003c4750("assertion failed: list >= 0 && list < sh.freelist_size","crypto/mem_sec.c",0x184);
  }
  uVar4 = DAT_007aba68 >> (uVar3 & 0x3f);
  if ((uVar4 - 1 & param_1 - DAT_007aba60) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_003c4750("assertion failed: ((ptr - sh.arena) & ((sh.arena_size >> list) - 1)) == 0",
                 "crypto/mem_sec.c",0x185);
  }
  uVar2 = 0;
  if (uVar4 != 0) {
    uVar2 = (ulong)(param_1 - DAT_007aba60) / uVar4;
  }
  uVar2 = uVar2 + (1L << (uVar3 & 0x3f));
  if (uVar2 != 0 && uVar2 < DAT_007aba98) {
    uVar3 = 1L << (uVar2 & 7);
    bVar1 = *(byte *)(param_3 + (uVar2 >> 3));
    if ((uVar3 & bVar1) == 0) {
      *(byte *)(param_3 + (uVar2 >> 3)) = bVar1 | (byte)uVar3;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_003c4750("assertion failed: !TESTBIT(table, bit)","crypto/mem_sec.c",0x188);
  }
                    /* WARNING: Subroutine does not return */
  FUN_003c4750("assertion failed: bit > 0 && bit < sh.bittable_size","crypto/mem_sec.c",0x187);
}


// ===== 003c9f8c  FUN_003c9f8c =====

void FUN_003c9f8c(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  puVar2 = DAT_007aba60;
  if ((param_1 < DAT_007aba70) || (DAT_007aba70 + DAT_007aba78 <= param_1)) {
                    /* WARNING: Subroutine does not return */
    FUN_003c4750("assertion failed: WITHIN_FREELIST(list)","crypto/mem_sec.c",400);
  }
  if (DAT_007aba60 <= param_2) {
    puVar1 = (ulong *)((long)DAT_007aba60 + DAT_007aba68);
    if (param_2 < puVar1) {
      puVar3 = (ulong *)*param_1;
      *param_2 = (ulong)puVar3;
      if (puVar3 == (ulong *)0x0) {
        param_2[1] = (ulong)param_1;
        *param_1 = (ulong)param_2;
        return;
      }
      if ((puVar2 <= puVar3) && (puVar3 < puVar1)) {
        param_2[1] = (ulong)param_1;
        if ((ulong *)puVar3[1] == param_1) {
          puVar3[1] = (ulong)param_2;
          *param_1 = (ulong)param_2;
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_003c4750("assertion failed: (char **)temp->next->p_next == list","crypto/mem_sec.c",
                     0x199);
      }
                    /* WARNING: Subroutine does not return */
      FUN_003c4750("assertion failed: temp->next == NULL || WITHIN_ARENA(temp->next)",
                   "crypto/mem_sec.c",0x195);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_003c4750("assertion failed: WITHIN_ARENA(ptr)","crypto/mem_sec.c",0x191);
}


// ===== 003ca088  FUN_003ca088 =====

void FUN_003ca088(long param_1,uint param_2,long param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (((int)param_2 < 0) || (uVar3 = (ulong)param_2, DAT_007aba78 <= (long)uVar3)) {
                    /* WARNING: Subroutine does not return */
    FUN_003c4750("assertion failed: list >= 0 && list < sh.freelist_size","crypto/mem_sec.c",0x178);
  }
  uVar4 = DAT_007aba68 >> (uVar3 & 0x3f);
  if ((uVar4 - 1 & param_1 - DAT_007aba60) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_003c4750("assertion failed: ((ptr - sh.arena) & ((sh.arena_size >> list) - 1)) == 0",
                 "crypto/mem_sec.c",0x179);
  }
  uVar2 = 0;
  if (uVar4 != 0) {
    uVar2 = (ulong)(param_1 - DAT_007aba60) / uVar4;
  }
  uVar2 = uVar2 + (1L << (uVar3 & 0x3f));
  if (uVar2 != 0 && uVar2 < DAT_007aba98) {
    uVar3 = 1L << (uVar2 & 7);
    bVar1 = *(byte *)(param_3 + (uVar2 >> 3));
    if ((uVar3 & bVar1) != 0) {
      *(byte *)(param_3 + (uVar2 >> 3)) = bVar1 & ((byte)uVar3 ^ 0xff);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_003c4750("assertion failed: TESTBIT(table, bit)","crypto/mem_sec.c",0x17c);
  }
                    /* WARNING: Subroutine does not return */
  FUN_003c4750("assertion failed: bit > 0 && bit < sh.bittable_size","crypto/mem_sec.c",0x17b);
}


// ===== 003ca178  FUN_003ca178 =====

dirent * FUN_003ca178(long *param_1,char *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  DIR *pDVar3;
  dirent *pdVar4;
  void *pvVar5;
  undefined8 *puVar6;
  
  puVar2 = (undefined4 *)__errno();
  if ((param_1 == (long *)0x0) || (param_2 == (char *)0x0)) {
    *puVar2 = 0x16;
    return (dirent *)0x0;
  }
  puVar6 = (undefined8 *)*param_1;
  *puVar2 = 0;
  if (puVar6 == (undefined8 *)0x0) {
    pvVar5 = calloc(1,0x1010);
    *param_1 = (long)pvVar5;
    if (pvVar5 == (void *)0x0) {
      *puVar2 = 0xc;
      return (dirent *)0x0;
    }
    pDVar3 = opendir(param_2);
    *(DIR **)*param_1 = pDVar3;
    pDVar3 = *(DIR **)*param_1;
    if (pDVar3 == (DIR *)0x0) {
      uVar1 = *puVar2;
      free((undefined8 *)*param_1);
      *param_1 = 0;
      *puVar2 = uVar1;
      return (dirent *)0x0;
    }
  }
  else {
    pDVar3 = (DIR *)*puVar6;
  }
  pdVar4 = readdir(pDVar3);
  if (pdVar4 != (dirent *)0x0) {
    FUN_003ca460(*param_1 + 8,pdVar4->d_name,0x1001);
    pdVar4 = (dirent *)(*param_1 + 8);
  }
  return pdVar4;
}


// ===== 003ca274  FUN_003ca274 =====

undefined8 FUN_003ca274(undefined8 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((param_1 != (undefined8 *)0x0) && ((undefined8 *)*param_1 != (undefined8 *)0x0)) {
    iVar1 = closedir(*(DIR **)*param_1);
    free((void *)*param_1);
    if (iVar1 == 0) {
      return 1;
    }
    if (iVar1 == -1) {
      return 0;
    }
  }
  puVar2 = (undefined4 *)__errno();
  *puVar2 = 0x16;
  return 0;
}


// ===== 003ca2f4  FUN_003ca2f4 =====

char * FUN_003ca2f4(char *param_1,undefined8 param_2,undefined4 param_3)

{
  size_t sVar1;
  char *pcVar2;
  
  if (param_1 != (char *)0x0) {
    sVar1 = strlen(param_1);
    pcVar2 = (char *)FUN_003c83a4(sVar1 + 1,param_2,param_3);
    if (pcVar2 != (char *)0x0) {
      pcVar2 = strcpy(pcVar2,param_1);
      return pcVar2;
    }
  }
  return (char *)0x0;
}


// ===== 003ca354  FUN_003ca354 =====

char * FUN_003ca354(char *param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  size_t __n;
  
  pcVar2 = param_1;
  if (param_1 != (char *)0x0) {
    if (param_2 != 0) {
      pcVar1 = param_1 + param_2;
      pcVar3 = param_1;
      do {
        pcVar2 = pcVar3;
        if (*pcVar3 == '\0') break;
        param_2 = param_2 + -1;
        pcVar3 = pcVar3 + 1;
        pcVar2 = pcVar1;
      } while (param_2 != 0);
    }
    __n = (long)pcVar2 - (long)param_1;
    pcVar2 = (char *)FUN_003c83a4(__n + 1,param_3,param_4);
    if (pcVar2 != (char *)0x0) {
      memcpy(pcVar2,param_1,__n);
      pcVar2[__n] = '\0';
    }
  }
  return pcVar2;
}


// ===== 003ca3d4  FUN_003ca3d4 =====

long FUN_003ca3d4(char *param_1,long param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar3 = param_1;
  if (param_2 != 0) {
    pcVar1 = param_1 + param_2;
    pcVar2 = param_1;
    do {
      pcVar3 = pcVar2;
      if (*pcVar2 == '\0') break;
      param_2 = param_2 + -1;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar1;
    } while (param_2 != 0);
  }
  return (long)pcVar3 - (long)param_1;
}


// ===== 003ca404  FUN_003ca404 =====

void * FUN_003ca404(void *param_1,ulong param_2,undefined8 param_3,undefined4 param_4)

{
  void *pvVar1;
  
  if (((param_1 != (void *)0x0) && (param_2 < 0x7fffffff)) &&
     (pvVar1 = (void *)FUN_003c83a4(param_2,param_3,param_4), pvVar1 != (void *)0x0)) {
    pvVar1 = memcpy(pvVar1,param_1,param_2);
    return pvVar1;
  }
  return (void *)0x0;
}


// ===== 003ca460  FUN_003ca460 =====

size_t FUN_003ca460(undefined1 *param_1,char *param_2,ulong param_3)

{
  size_t sVar1;
  long lVar2;
  
  if (param_3 < 2) {
    lVar2 = 0;
    if (param_3 == 0) {
      sVar1 = strlen(param_2);
      return sVar1;
    }
  }
  else {
    lVar2 = 0;
    do {
      if (param_2[lVar2] == '\0') {
        param_2 = param_2 + lVar2;
        param_1 = param_1 + lVar2;
        goto LAB_003ca4cc;
      }
      param_1[lVar2] = param_2[lVar2];
      lVar2 = lVar2 + 1;
    } while (param_3 - 1 != lVar2);
    param_2 = param_2 + lVar2;
    param_1 = param_1 + lVar2;
    lVar2 = param_3 - 1;
  }
LAB_003ca4cc:
  *param_1 = 0;
  sVar1 = strlen(param_2);
  return sVar1 + lVar2;
}


// ===== 003ca4e8  FUN_003ca4e8 =====

long FUN_003ca4e8(long param_1,char *param_2,ulong param_3)

{
  char *pcVar1;
  size_t sVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  
  uVar5 = 0;
  if (param_3 == 0) {
    lVar6 = 0;
  }
  else {
    do {
      if (*(char *)(param_1 + uVar5) == '\0') {
        if (param_3 - 1 != uVar5) {
          lVar3 = 0;
          goto LAB_003ca548;
        }
        lVar6 = 0;
        puVar4 = (undefined1 *)(param_1 + uVar5);
        goto LAB_003ca580;
      }
      uVar5 = uVar5 + 1;
    } while (param_3 != uVar5);
    lVar6 = 0;
    uVar5 = param_3;
  }
  goto LAB_003ca584;
  while( true ) {
    lVar6 = param_1 + lVar3;
    lVar3 = lVar3 + 1;
    *(char *)(lVar6 + uVar5) = *pcVar1;
    lVar6 = ~uVar5 + param_3;
    if (~uVar5 + param_3 == lVar3) break;
LAB_003ca548:
    pcVar1 = param_2 + lVar3;
    lVar6 = lVar3;
    if (*pcVar1 == '\0') break;
  }
  param_2 = param_2 + lVar3;
  puVar4 = (undefined1 *)(param_1 + uVar5 + lVar3);
LAB_003ca580:
  *puVar4 = 0;
LAB_003ca584:
  sVar2 = strlen(param_2);
  return lVar6 + uVar5 + sVar2;
}


// ===== 003ca5a0  FUN_003ca5a0 =====

undefined4 FUN_003ca5a0(char param_1)

{
  if ((byte)(param_1 - 0x30U) < 0x37) {
    return *(undefined4 *)(&DAT_00207258 + (ulong)(byte)(param_1 - 0x30U) * 4);
  }
  return 0xffffffff;
}


// ===== 003ca5cc  thunk_FUN_003ca5d0 =====

undefined8 thunk_FUN_003ca5d0(byte *param_1,ulong param_2,ulong *param_3,char *param_4,char param_5)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  undefined8 uVar5;
  char *pcVar6;
  ulong uVar7;
  
  uVar7 = 0;
  while( true ) {
    pbVar4 = param_1;
    param_4 = param_4 + 1;
    do {
      pcVar6 = param_4;
      cVar1 = pcVar6[-1];
      if (cVar1 == '\0') {
        if (param_3 != (ulong *)0x0) {
          *param_3 = uVar7;
        }
        return 1;
      }
      param_4 = pcVar6 + 1;
    } while (cVar1 == param_5);
    if (*pcVar6 == '\0') break;
    uVar2 = FUN_003ca5a0();
    uVar3 = FUN_003ca5a0(cVar1);
    if ((int)(uVar3 | uVar2) < 0) {
      FUN_00379868();
      FUN_0037995c("crypto/o_str.c",0x9e,"hexstr2buf_sep");
      uVar5 = 0x66;
LAB_003ca6f8:
      FUN_00379a5c(0xf,uVar5,0);
      return 0;
    }
    uVar7 = uVar7 + 1;
    param_1 = (byte *)0x0;
    if (pbVar4 != (byte *)0x0) {
      if (param_2 < uVar7) {
        FUN_00379868();
        FUN_0037995c("crypto/o_str.c",0xa4,"hexstr2buf_sep");
        uVar5 = 0x74;
        goto LAB_003ca6f8;
      }
      *pbVar4 = (byte)uVar2 | (byte)(uVar3 << 4);
      param_1 = pbVar4 + 1;
    }
  }
  FUN_00379868();
  FUN_0037995c("crypto/o_str.c",0x98,"hexstr2buf_sep");
  uVar5 = 0x67;
  goto LAB_003ca6f8;
}


// ===== 003ca5d0  FUN_003ca5d0 =====

undefined8 FUN_003ca5d0(byte *param_1,ulong param_2,ulong *param_3,char *param_4,char param_5)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  undefined8 uVar5;
  char *pcVar6;
  ulong uVar7;
  
  uVar7 = 0;
  while( true ) {
    pbVar4 = param_1;
    param_4 = param_4 + 1;
    do {
      pcVar6 = param_4;
      cVar1 = pcVar6[-1];
      if (cVar1 == '\0') {
        if (param_3 != (ulong *)0x0) {
          *param_3 = uVar7;
        }
        return 1;
      }
      param_4 = pcVar6 + 1;
    } while (cVar1 == param_5);
    if (*pcVar6 == '\0') break;
    uVar2 = FUN_003ca5a0();
    uVar3 = FUN_003ca5a0(cVar1);
    if ((int)(uVar3 | uVar2) < 0) {
      FUN_00379868();
      FUN_0037995c("crypto/o_str.c",0x9e,"hexstr2buf_sep");
      uVar5 = 0x66;
LAB_003ca6f8:
      FUN_00379a5c(0xf,uVar5,0);
      return 0;
    }
    uVar7 = uVar7 + 1;
    param_1 = (byte *)0x0;
    if (pbVar4 != (byte *)0x0) {
      if (param_2 < uVar7) {
        FUN_00379868();
        FUN_0037995c("crypto/o_str.c",0xa4,"hexstr2buf_sep");
        uVar5 = 0x74;
        goto LAB_003ca6f8;
      }
      *pbVar4 = (byte)uVar2 | (byte)(uVar3 << 4);
      param_1 = pbVar4 + 1;
    }
  }
  FUN_00379868();
  FUN_0037995c("crypto/o_str.c",0x98,"hexstr2buf_sep");
  uVar5 = 0x67;
  goto LAB_003ca6f8;
}


// ===== 003ca71c  FUN_003ca71c =====

long FUN_003ca71c(char *param_1,undefined8 *param_2,undefined4 param_3)

{
  int iVar1;
  size_t sVar2;
  long lVar3;
  ulong uVar4;
  undefined8 local_28;
  
  sVar2 = strlen(param_1);
  if (sVar2 < 2) {
    FUN_00379868();
    FUN_0037995c("crypto/o_str.c",0xc1,"ossl_hexstr2buf_sep");
    FUN_00379a5c(0xf,0x79,0);
  }
  else {
    uVar4 = sVar2 >> 1;
    lVar3 = FUN_003c83a4(uVar4,"crypto/o_str.c",0xc5);
    if (lVar3 == 0) {
      return 0;
    }
    if (param_2 == (undefined8 *)0x0) {
      local_28 = 0;
      iVar1 = FUN_003ca5d0(lVar3,uVar4,&local_28,param_1,param_3);
      if (iVar1 != 0) {
        return lVar3;
      }
    }
    else {
      *param_2 = 0;
      local_28 = 0;
      iVar1 = FUN_003ca5d0(lVar3,uVar4,&local_28,param_1,param_3);
      if (iVar1 != 0) {
        *param_2 = local_28;
        return lVar3;
      }
    }
    FUN_003c86b4(lVar3,"crypto/o_str.c",0xd0);
  }
  return 0;
}


// ===== 003ca840  FUN_003ca840 =====

void FUN_003ca840(undefined8 param_1,undefined8 param_2)

{
  FUN_003ca71c(param_1,param_2,0x3a);
  return;
}


// ===== 003ca848  thunk_FUN_003ca84c =====

undefined8
thunk_FUN_003ca84c(char *param_1,ulong param_2,ulong *param_3,byte *param_4,long param_5,
                  char param_6)

{
  ulong uVar1;
  char cVar2;
  char *pcVar3;
  
  uVar1 = param_5 * 3;
  if (param_6 == '\0') {
    uVar1 = param_5 * 2 + 1;
  }
  if (param_3 != (ulong *)0x0) {
    *param_3 = uVar1;
  }
  if (param_1 == (char *)0x0) {
    return 1;
  }
  if (uVar1 <= param_2) {
    if (param_5 != 0) {
      pcVar3 = param_1;
      if (param_6 == '\0') {
        do {
          param_5 = param_5 + -1;
          *pcVar3 = "0123456789ABCDEF"[*param_4 >> 4];
          param_1 = pcVar3 + 2;
          pcVar3[1] = "0123456789ABCDEF"[(ulong)*param_4 & 0xf];
          pcVar3 = param_1;
          param_4 = param_4 + 1;
        } while (param_5 != 0);
      }
      else {
        do {
          param_5 = param_5 + -1;
          *pcVar3 = "0123456789ABCDEF"[*param_4 >> 4];
          cVar2 = "0123456789ABCDEF"[(ulong)*param_4 & 0xf];
          param_1 = pcVar3 + 3;
          pcVar3[2] = param_6;
          pcVar3[1] = cVar2;
          pcVar3 = param_1;
          param_4 = param_4 + 1;
        } while (param_5 != 0);
      }
    }
    param_1[-(ulong)(param_6 != '\0')] = '\0';
    return 1;
  }
  FUN_00379868();
  FUN_0037995c("crypto/o_str.c",0xea,"buf2hexstr_sep");
  FUN_00379a5c(0xf,0x74,0);
  return 0;
}


// ===== 003ca84c  FUN_003ca84c =====

undefined8
FUN_003ca84c(char *param_1,ulong param_2,ulong *param_3,byte *param_4,long param_5,char param_6)

{
  ulong uVar1;
  char cVar2;
  char *pcVar3;
  
  uVar1 = param_5 * 3;
  if (param_6 == '\0') {
    uVar1 = param_5 * 2 + 1;
  }
  if (param_3 != (ulong *)0x0) {
    *param_3 = uVar1;
  }
  if (param_1 == (char *)0x0) {
    return 1;
  }
  if (uVar1 <= param_2) {
    if (param_5 != 0) {
      pcVar3 = param_1;
      if (param_6 == '\0') {
        do {
          param_5 = param_5 + -1;
          *pcVar3 = "0123456789ABCDEF"[*param_4 >> 4];
          param_1 = pcVar3 + 2;
          pcVar3[1] = "0123456789ABCDEF"[(ulong)*param_4 & 0xf];
          pcVar3 = param_1;
          param_4 = param_4 + 1;
        } while (param_5 != 0);
      }
      else {
        do {
          param_5 = param_5 + -1;
          *pcVar3 = "0123456789ABCDEF"[*param_4 >> 4];
          cVar2 = "0123456789ABCDEF"[(ulong)*param_4 & 0xf];
          param_1 = pcVar3 + 3;
          pcVar3[2] = param_6;
          pcVar3[1] = cVar2;
          pcVar3 = param_1;
          param_4 = param_4 + 1;
        } while (param_5 != 0);
      }
    }
    param_1[-(ulong)(param_6 != '\0')] = '\0';
    return 1;
  }
  FUN_00379868();
  FUN_0037995c("crypto/o_str.c",0xea,"buf2hexstr_sep");
  FUN_00379a5c(0xf,0x74,0);
  return 0;
}


// ===== 003ca958  FUN_003ca958 =====

long FUN_003ca958(undefined8 param_1,long param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (param_2 == 0) {
    lVar3 = FUN_003c8474(1,"crypto/o_str.c",0x10c);
    return lVar3;
  }
  lVar3 = param_2 * 3;
  if ((param_3 & 0xff) == 0) {
    lVar3 = param_2 * 2 + 1;
  }
  lVar2 = FUN_003c83a4(lVar3,"crypto/o_str.c",0x10f);
  if ((lVar2 != 0) && (iVar1 = FUN_003ca84c(lVar2,lVar3,0,param_1,param_2,param_3), iVar1 == 0)) {
    FUN_003c86b4(lVar2,"crypto/o_str.c",0x114);
    return 0;
  }
  return lVar2;
}


// ===== 003caa1c  FUN_003caa1c =====

void FUN_003caa1c(byte *param_1,long param_2)

{
  byte bVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  
  if (param_2 == 0) {
    FUN_003c8474(1,"crypto/o_str.c",0x10c);
    return;
  }
  pcVar3 = (char *)FUN_003c83a4(param_2 * 3,"crypto/o_str.c",0x10f);
  if (pcVar3 != (char *)0x0) {
    do {
      pcVar4 = pcVar3;
      bVar1 = *param_1;
      param_2 = param_2 + -1;
      pcVar4[2] = ':';
      cVar2 = "0123456789ABCDEF"[bVar1 >> 4];
      pcVar4[1] = "0123456789ABCDEF"[(ulong)bVar1 & 0xf];
      *pcVar4 = cVar2;
      pcVar3 = pcVar4 + 3;
      param_1 = param_1 + 1;
    } while (param_2 != 0);
    pcVar4[2] = '\0';
  }
  return;
}


// ===== 003caaa8  FUN_003caaa8 =====

char * FUN_003caaa8(int param_1,char *param_2,ulong param_3)

{
  char cVar1;
  char *pcVar2;
  long lVar3;
  char *pcVar4;
  
  if (param_3 < 2) {
    return (char *)0x0;
  }
  pcVar2 = strerror(param_1);
  if (pcVar2 != (char *)0x0) {
    lVar3 = param_3 - 1;
    do {
      cVar1 = *pcVar2;
      pcVar4 = param_2;
      if (cVar1 == '\0') break;
      lVar3 = lVar3 + -1;
      pcVar2 = pcVar2 + 1;
      pcVar4 = param_2 + 1;
      *param_2 = cVar1;
      param_2 = pcVar4;
    } while (lVar3 != 0);
    pcVar2 = (char *)0x1;
    *pcVar4 = '\0';
  }
  return pcVar2;
}


// ===== 003cab04  FUN_003cab04 =====

int FUN_003cab04(char *param_1,undefined1 *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  do {
    iVar2 = FUN_003c47b4(*param_1);
    iVar3 = FUN_003c47b4(*param_2);
    if (iVar2 != iVar3) break;
    cVar1 = *param_1;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
    iVar3 = iVar2;
  } while (cVar1 != '\0');
  return iVar2 - iVar3;
}


// ===== 003cab60  FUN_003cab60 =====

int FUN_003cab60(long param_1,long param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  
  if (param_3 == 0) {
    return 0;
  }
  uVar4 = 0;
  while( true ) {
    iVar1 = FUN_003c47b4(*(undefined1 *)(param_1 + uVar4));
    iVar2 = FUN_003c47b4(*(undefined1 *)(param_2 + uVar4));
    iVar3 = iVar1 - iVar2;
    if (iVar1 - iVar2 != 0) {
      return iVar3;
    }
    if (*(char *)(param_1 + uVar4) == '\0') break;
    uVar4 = uVar4 + 1;
    if (param_3 <= uVar4) {
      return iVar3;
    }
  }
  return iVar3;
}


// ===== 003cabd8  FUN_003cabd8 =====

undefined8 * FUN_003cabd8(time_t *param_1,undefined8 *param_2)

{
  tm *ptVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  ptVar1 = gmtime(param_1);
  if (ptVar1 != (tm *)0x0) {
    uVar7 = *(undefined8 *)&ptVar1->tm_wday;
    uVar6 = *(undefined8 *)&ptVar1->tm_mon;
    lVar3 = ptVar1->tm_gmtoff;
    uVar2 = *(undefined8 *)&ptVar1->tm_isdst;
    uVar5 = *(undefined8 *)&ptVar1->tm_hour;
    uVar4 = *(undefined8 *)ptVar1;
    param_2[6] = ptVar1->tm_zone;
    param_2[3] = uVar7;
    param_2[2] = uVar6;
    param_2[5] = lVar3;
    param_2[4] = uVar2;
    param_2[1] = uVar5;
    *param_2 = uVar4;
    return param_2;
  }
  return (undefined8 *)0x0;
}


// ===== 003cac24  FUN_003cac24 =====

undefined8 FUN_003cac24(int *param_1,int param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auVar3 [16];
  long lVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  
  lVar7 = param_3 / 0x15180 + (long)param_2;
  iVar6 = (int)param_3 + (int)(param_3 / 0x15180) * -0x15180 + param_1[2] * 0xe10 +
          param_1[1] * 0x3c + *param_1;
  if (iVar6 < 0x15180) {
    if (iVar6 < 0) {
      lVar7 = lVar7 + -1;
      iVar6 = iVar6 + 0x15180;
    }
  }
  else {
    lVar7 = lVar7 + 1;
    iVar6 = iVar6 + -0x15180;
  }
  iVar5 = (param_1[4] + -0xd) / 0xc;
  iVar9 = param_1[5] + iVar5;
  iVar2 = (iVar9 + 0x76c) * 0x5b5;
  iVar1 = iVar2 + 0x6b01c0;
  iVar2 = iVar2 + 0x6b01c3;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  iVar9 = ((iVar9 + 0x1a90) / 100) * 3;
  iVar1 = iVar9 + 3;
  if (-1 < iVar9) {
    iVar1 = iVar9;
  }
  lVar7 = lVar7 + (((param_1[3] + (iVar2 >> 2) +
                    ((param_1[4] + iVar5 * -0xc) * 0x16f + -0x16f) / 0xc) - (iVar1 >> 2)) + -0x7d4b)
  ;
  if (-1 < lVar7) {
    lVar7 = lVar7 + 0x10bd9;
    uVar8 = (ulong)(lVar7 * 4) / 0x23ab1;
    lVar7 = lVar7 - (uVar8 * 0x23ab1 + 3 >> 2);
    lVar4 = (lVar7 * 4000 + 4000) / 0x164b09;
    lVar10 = lVar4 * 0x5b5;
    lVar11 = lVar10 + 3;
    if (-1 < lVar10) {
      lVar11 = lVar10;
    }
    lVar7 = (lVar7 - (lVar11 >> 2)) + 0x1f;
    lVar11 = lVar7 * 0x50;
    iVar9 = ((int)(lVar11 / 0x6925) + (int)(lVar11 >> 0x3f)) -
            (SUB164(SEXT816(lVar11) * SEXT816(0x137a5afac274c5c9),0xc) >> 0x1f);
    iVar1 = (int)lVar4 + (int)uVar8 * 100 + iVar9;
    if (0xffffe05b < iVar1 - 0x3a34U) {
      auVar3 = SEXT816((lVar11 / 0x98f) * 0x98f) * SEXT816(-0x6666666666666667);
      param_1[4] = (int)(lVar11 / 0x98f) + iVar9 * -0xc + 1;
      param_1[5] = iVar1 + -0x1a90;
      *param_1 = iVar6 % 0x3c;
      param_1[1] = (iVar6 / 0x3c) % 0x3c;
      param_1[2] = iVar6 / 0xe10;
      param_1[3] = ((int)(auVar3._8_8_ >> 5) - (auVar3._12_4_ >> 0x1f)) + (int)lVar7;
      return 1;
    }
  }
  return 0;
}


// ===== 003caee0  FUN_003caee0 =====

undefined8 FUN_003caee0(int *param_1,int *param_2,int *param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  
  uVar1 = param_3[2] * 0xe10 + param_3[1] * 0x3c + *param_3;
  if ((int)uVar1 < 0x15180) {
    lVar8 = -(ulong)(uVar1 >> 0x1f);
    uVar6 = uVar1 + 0x15180;
    if (-1 < (int)uVar1) {
      uVar6 = uVar1;
    }
  }
  else {
    lVar8 = 1;
    uVar6 = uVar1 - 0x15180;
  }
  iVar5 = (param_3[4] + -0xd) / 0xc;
  iVar2 = param_3[5] + iVar5;
  iVar3 = (iVar2 + 0x76c) * 0x5b5;
  iVar4 = iVar3 + 0x6b01c0;
  iVar3 = iVar3 + 0x6b01c3;
  if (-1 < iVar4) {
    iVar3 = iVar4;
  }
  iVar4 = ((iVar2 + 0x1a90) / 100) * 3;
  iVar2 = iVar4 + 3;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  lVar8 = lVar8 + (((param_3[3] + (iVar3 >> 2) +
                    ((param_3[4] + iVar5 * -0xc) * 0x16f + -0x16f) / 0xc) - (iVar2 >> 2)) + -0x7d4b)
  ;
  if (-1 < lVar8) {
    uVar1 = param_4[2] * 0xe10 + param_4[1] * 0x3c + *param_4;
    if ((int)uVar1 < 0x15180) {
      lVar9 = -(ulong)(uVar1 >> 0x1f);
      uVar7 = uVar1 + 0x15180;
      if (-1 < (int)uVar1) {
        uVar7 = uVar1;
      }
    }
    else {
      lVar9 = 1;
      uVar7 = uVar1 - 0x15180;
    }
    iVar5 = (param_4[4] + -0xd) / 0xc;
    iVar2 = param_4[5] + iVar5;
    iVar3 = (iVar2 + 0x76c) * 0x5b5;
    iVar4 = iVar3 + 0x6b01c0;
    iVar3 = iVar3 + 0x6b01c3;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    iVar4 = ((iVar2 + 0x1a90) / 100) * 3;
    iVar2 = iVar4 + 3;
    if (-1 < iVar4) {
      iVar2 = iVar4;
    }
    lVar9 = lVar9 + (((param_4[3] + (iVar3 >> 2) +
                      ((param_4[4] + iVar5 * -0xc) * 0x16f + -0x16f) / 0xc) - (iVar2 >> 2)) +
                    -0x7d4b);
    if (-1 < lVar9) {
      iVar3 = uVar7 - uVar6;
      uVar1 = (uint)((lVar9 - lVar8 != 0 && lVar8 <= lVar9) && iVar3 < 0);
      lVar8 = (lVar9 - lVar8) - (ulong)uVar1;
      iVar2 = iVar3 + 0x15180;
      if (uVar1 == 0) {
        iVar2 = iVar3;
      }
      iVar3 = iVar2 + -0x15180;
      if (lVar8 >= 0 || 0 >= iVar2) {
        iVar3 = iVar2;
      }
      if (param_1 != (int *)0x0) {
        *param_1 = (int)lVar8 + (uint)(lVar8 < 0 && 0 < iVar2);
      }
      if (param_2 != (int *)0x0) {
        *param_2 = iVar3;
      }
      return 1;
    }
  }
  return 0;
}


// ===== 003cb140  FUN_003cb140 =====

undefined8 * FUN_003cb140(undefined8 *param_1,char *param_2)

{
  int iVar1;
  char *__s2;
  
  if ((param_1 != (undefined8 *)0x0) && (param_2 != (char *)0x0)) {
    __s2 = (char *)*param_1;
    while (__s2 != (char *)0x0) {
      iVar1 = strcmp(param_2,__s2);
      if (iVar1 == 0) {
        return param_1;
      }
      param_1 = param_1 + 5;
      __s2 = (char *)*param_1;
    }
  }
  return (undefined8 *)0x0;
}


// ===== 003cb19c  FUN_003cb19c =====

undefined8 * FUN_003cb19c(undefined8 *param_1,char *param_2)

{
  int iVar1;
  char *__s2;
  
  if ((param_1 != (undefined8 *)0x0) && (param_2 != (char *)0x0)) {
    __s2 = (char *)*param_1;
    while (__s2 != (char *)0x0) {
      iVar1 = strcmp(param_2,__s2);
      if (iVar1 == 0) {
        return param_1;
      }
      param_1 = param_1 + 5;
      __s2 = (char *)*param_1;
    }
  }
  return (undefined8 *)0x0;
}


// ===== 003cb1f8  FUN_003cb1f8 =====

ulong FUN_003cb1f8(ulong param_1)

{
  if (param_1 != 0) {
    param_1 = (ulong)(*(long *)(param_1 + 0x20) != -1);
  }
  return param_1;
}


// ===== 003cb20c  FUN_003cb20c =====

void FUN_003cb20c(long *param_1)

{
  long lVar1;
  
  if ((param_1 != (long *)0x0) && (*param_1 != 0)) {
    param_1 = param_1 + 5;
    do {
      lVar1 = *param_1;
      param_1[-1] = -1;
      param_1 = param_1 + 5;
    } while (lVar1 != 0);
  }
  return;
}


// ===== 003cb234  thunk_FUN_003cb238 =====

undefined8 thunk_FUN_003cb238(long param_1,int *param_2)

{
  undefined8 uVar1;
  int iVar2;
  double *pdVar3;
  double dVar4;
  
  if ((param_1 == 0) || (param_2 == (int *)0x0)) {
    FUN_00379868();
    uVar1 = 0x189;
  }
  else {
    pdVar3 = *(double **)(param_1 + 0x10);
    if (pdVar3 != (double *)0x0) {
      iVar2 = *(int *)(param_1 + 8);
      if (iVar2 == 3) {
        if (*(long *)(param_1 + 0x18) != 8) {
          FUN_00379868();
          FUN_0037995c("crypto/params.c",0x1ce,"OSSL_PARAM_get_int32");
          FUN_00379a5c(0xf,0x82,0);
          return 0;
        }
        dVar4 = *pdVar3;
        if (((dVar4 < -2147483648.0 == NAN(dVar4)) && (dVar4 <= 2147483647.0)) &&
           (iVar2 = (int)dVar4, dVar4 == (double)iVar2)) {
LAB_003cb368:
          *param_2 = iVar2;
          return 1;
        }
        FUN_00379868();
        uVar1 = 0x1cb;
      }
      else if (iVar2 == 2) {
        if (*(long *)(param_1 + 0x18) == 8) {
          dVar4 = *pdVar3;
          if ((ulong)dVar4 >> 0x1f == 0) goto LAB_003cb444;
          FUN_00379868();
          uVar1 = 0x1ba;
        }
        else {
          if (*(long *)(param_1 + 0x18) != 4) goto LAB_003cb3b0;
          iVar2 = *(int *)pdVar3;
          if (-1 < iVar2) goto LAB_003cb368;
          FUN_00379868();
          uVar1 = 0x1b2;
        }
      }
      else {
        if (iVar2 != 1) {
          FUN_00379868();
          FUN_0037995c("crypto/params.c",0x1d2,"OSSL_PARAM_get_int32");
          FUN_00379a5c(0xf,0x81,0);
          return 0;
        }
        if (*(long *)(param_1 + 0x18) != 8) {
          if (*(long *)(param_1 + 0x18) == 4) {
            *param_2 = *(int *)pdVar3;
            return 1;
          }
LAB_003cb3b0:
          uVar1 = FUN_003cc54c(param_1,param_2,4);
          return uVar1;
        }
        dVar4 = *pdVar3;
        if (dVar4 == (double)(long)SUB84(dVar4,0)) {
LAB_003cb444:
          *param_2 = SUB84(dVar4,0);
          return 1;
        }
        FUN_00379868();
        uVar1 = 0x1a0;
      }
      FUN_0037995c("crypto/params.c",uVar1,"OSSL_PARAM_get_int32");
      FUN_00379a5c(0xf,0x7e,0);
      return 0;
    }
    FUN_00379868();
    uVar1 = 0x18e;
  }
  FUN_0037995c("crypto/params.c",uVar1,"OSSL_PARAM_get_int32");
  FUN_00379a5c(0xf,0xc0102,0);
  return 0;
}


// ===== 003cb238  FUN_003cb238 =====

undefined8 FUN_003cb238(long param_1,int *param_2)

{
  undefined8 uVar1;
  int iVar2;
  double *pdVar3;
  double dVar4;
  
  if ((param_1 == 0) || (param_2 == (int *)0x0)) {
    FUN_00379868();
    uVar1 = 0x189;
  }
  else {
    pdVar3 = *(double **)(param_1 + 0x10);
    if (pdVar3 != (double *)0x0) {
      iVar2 = *(int *)(param_1 + 8);
      if (iVar2 == 3) {
        if (*(long *)(param_1 + 0x18) != 8) {
          FUN_00379868();
          FUN_0037995c("crypto/params.c",0x1ce,"OSSL_PARAM_get_int32");
          FUN_00379a5c(0xf,0x82,0);
          return 0;
        }
        dVar4 = *pdVar3;
        if (((dVar4 < -2147483648.0 == NAN(dVar4)) && (dVar4 <= 2147483647.0)) &&
           (iVar2 = (int)dVar4, dVar4 == (double)iVar2)) {
LAB_003cb368:
          *param_2 = iVar2;
          return 1;
        }
        FUN_00379868();
        uVar1 = 0x1cb;
      }
      else if (iVar2 == 2) {
        if (*(long *)(param_1 + 0x18) == 8) {
          dVar4 = *pdVar3;
          if ((ulong)dVar4 >> 0x1f == 0) goto LAB_003cb444;
          FUN_00379868();
          uVar1 = 0x1ba;
        }
        else {
          if (*(long *)(param_1 + 0x18) != 4) goto LAB_003cb3b0;
          iVar2 = *(int *)pdVar3;
          if (-1 < iVar2) goto LAB_003cb368;
          FUN_00379868();
          uVar1 = 0x1b2;
        }
      }
      else {
        if (iVar2 != 1) {
          FUN_00379868();
          FUN_0037995c("crypto/params.c",0x1d2,"OSSL_PARAM_get_int32");
          FUN_00379a5c(0xf,0x81,0);
          return 0;
        }
        if (*(long *)(param_1 + 0x18) != 8) {
          if (*(long *)(param_1 + 0x18) == 4) {
            *param_2 = *(int *)pdVar3;
            return 1;
          }
LAB_003cb3b0:
          uVar1 = FUN_003cc54c(param_1,param_2,4);
          return uVar1;
        }
        dVar4 = *pdVar3;
        if (dVar4 == (double)(long)SUB84(dVar4,0)) {
LAB_003cb444:
          *param_2 = SUB84(dVar4,0);
          return 1;
        }
        FUN_00379868();
        uVar1 = 0x1a0;
      }
      FUN_0037995c("crypto/params.c",uVar1,"OSSL_PARAM_get_int32");
      FUN_00379a5c(0xf,0x7e,0);
      return 0;
    }
    FUN_00379868();
    uVar1 = 0x18e;
  }
  FUN_0037995c("crypto/params.c",uVar1,"OSSL_PARAM_get_int32");
  FUN_00379a5c(0xf,0xc0102,0);
  return 0;
}


// ===== 003cb48c  thunk_FUN_003cb490 =====

undefined8 thunk_FUN_003cb490(long param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong *puVar3;
  long lVar4;
  uint uStack_14;
  
  uStack_14 = param_2;
  if (param_1 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/params.c",0x1dc,"OSSL_PARAM_set_int32");
    FUN_00379a5c(0xf,0xc0102,0);
    return 0;
  }
  iVar1 = *(int *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (iVar1 == 1) {
    puVar3 = *(ulong **)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x20) = 4;
    if (puVar3 != (ulong *)0x0) {
      lVar4 = *(long *)(param_1 + 0x18);
      if (lVar4 == 8) {
        *(undefined8 *)(param_1 + 0x20) = 8;
        *puVar3 = (long)(int)param_2;
        return 1;
      }
LAB_003cb554:
      if (lVar4 == 4) {
        *(uint *)puVar3 = param_2;
        return 1;
      }
      uVar2 = FUN_003cc6f0(param_1,&uStack_14,4);
      return uVar2;
    }
  }
  else if (((int)param_2 < 0) || (iVar1 != 2)) {
    if (iVar1 != 3) {
      FUN_00379868();
      FUN_0037995c("crypto/params.c",0x216,"OSSL_PARAM_set_int32");
      FUN_00379a5c(0xf,0x81,0);
      return 0;
    }
    *(undefined8 *)(param_1 + 0x20) = 8;
    if (*(double **)(param_1 + 0x10) != (double *)0x0) {
      if (*(long *)(param_1 + 0x18) == 8) {
        **(double **)(param_1 + 0x10) = (double)(int)param_2;
        return 1;
      }
      FUN_00379868();
      FUN_0037995c("crypto/params.c",0x212,"OSSL_PARAM_set_int32");
      FUN_00379a5c(0xf,0x82,0);
      return 0;
    }
  }
  else {
    puVar3 = *(ulong **)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x20) = 4;
    if (puVar3 != (ulong *)0x0) {
      lVar4 = *(long *)(param_1 + 0x18);
      if (lVar4 == 8) {
        *(undefined8 *)(param_1 + 0x20) = 8;
        *puVar3 = (ulong)param_2;
        return 1;
      }
      goto LAB_003cb554;
    }
  }
  return 1;
}


// ===== 003cb490  FUN_003cb490 =====

undefined8 FUN_003cb490(long param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong *puVar3;
  long lVar4;
  uint local_14;
  
  local_14 = param_2;
  if (param_1 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/params.c",0x1dc,"OSSL_PARAM_set_int32");
    FUN_00379a5c(0xf,0xc0102,0);
    return 0;
  }
  iVar1 = *(int *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (iVar1 == 1) {
    puVar3 = *(ulong **)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x20) = 4;
    if (puVar3 != (ulong *)0x0) {
      lVar4 = *(long *)(param_1 + 0x18);
      if (lVar4 == 8) {
        *(undefined8 *)(param_1 + 0x20) = 8;
        *puVar3 = (long)(int)param_2;
        return 1;
      }
LAB_003cb554:
      if (lVar4 == 4) {
        *(uint *)puVar3 = param_2;
        return 1;
      }
      uVar2 = FUN_003cc6f0(param_1,&local_14,4);
      return uVar2;
    }
  }
  else if (((int)param_2 < 0) || (iVar1 != 2)) {
    if (iVar1 != 3) {
      FUN_00379868();
      FUN_0037995c("crypto/params.c",0x216,"OSSL_PARAM_set_int32");
      FUN_00379a5c(0xf,0x81,0);
      return 0;
    }
    *(undefined8 *)(param_1 + 0x20) = 8;
    if (*(double **)(param_1 + 0x10) != (double *)0x0) {
      if (*(long *)(param_1 + 0x18) == 8) {
        **(double **)(param_1 + 0x10) = (double)(int)param_2;
        return 1;
      }
      FUN_00379868();
      FUN_0037995c("crypto/params.c",0x212,"OSSL_PARAM_set_int32");
      FUN_00379a5c(0xf,0x82,0);
      return 0;
    }
  }
  else {
    puVar3 = *(ulong **)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x20) = 4;
    if (puVar3 != (ulong *)0x0) {
      lVar4 = *(long *)(param_1 + 0x18);
      if (lVar4 == 8) {
        *(undefined8 *)(param_1 + 0x20) = 8;
        *puVar3 = (ulong)param_2;
        return 1;
      }
      goto LAB_003cb554;
    }
  }
  return 1;
}


// ===== 003cb668  FUN_003cb668 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003cb668(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar2 = _UNK_00200908;
  uVar1 = _DAT_00200900;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[2] = param_3;
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  return;
}


// ===== 003cb688  thunk_FUN_003cb68c =====

undefined8 thunk_FUN_003cb68c(long param_1,uint *param_2)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  double *pdVar4;
  double dVar5;
  
  if ((param_1 == 0) || (param_2 == (uint *)0x0)) {
    FUN_00379868();
    uVar2 = 0x223;
  }
  else {
    pdVar4 = *(double **)(param_1 + 0x10);
    if (pdVar4 != (double *)0x0) {
      iVar1 = *(int *)(param_1 + 8);
      if (iVar1 != 1) {
        if (iVar1 == 3) {
          if (*(long *)(param_1 + 0x18) != 8) {
            FUN_00379868();
            FUN_0037995c("crypto/params.c",0x269,"OSSL_PARAM_get_uint32");
            FUN_00379a5c(0xf,0x82,0);
            return 0;
          }
          dVar5 = *pdVar4;
          if (((dVar5 < 0.0 != NAN(dVar5)) || (4294967295.0 < dVar5)) ||
             (uVar3 = (uint)dVar5, dVar5 != (double)uVar3)) {
            FUN_00379868();
            FUN_0037995c("crypto/params.c",0x266,"OSSL_PARAM_get_uint32");
            FUN_00379a5c(0xf,0x7b,0);
            return 0;
          }
LAB_003cb7e0:
          *param_2 = uVar3;
          return 1;
        }
        if (iVar1 != 2) {
          FUN_00379868();
          FUN_0037995c("crypto/params.c",0x26d,"OSSL_PARAM_get_uint32");
          FUN_00379a5c(0xf,0x81,0);
          return 0;
        }
        if (*(long *)(param_1 + 0x18) == 8) {
          if ((ulong)*pdVar4 >> 0x20 == 0) {
            *param_2 = SUB84(*pdVar4,0);
            return 1;
          }
          FUN_00379868();
          uVar2 = 0x23a;
LAB_003cb8f4:
          FUN_0037995c("crypto/params.c",uVar2,"OSSL_PARAM_get_uint32");
          FUN_00379a5c(0xf,0x7e,0);
          return 0;
        }
        if (*(long *)(param_1 + 0x18) == 4) {
          *param_2 = *(uint *)pdVar4;
          return 1;
        }
LAB_003cb830:
        uVar2 = FUN_003cc884(param_1,param_2,4);
        return uVar2;
      }
      if (*(long *)(param_1 + 0x18) == 8) {
        dVar5 = *pdVar4;
        if ((ulong)dVar5 >> 0x20 == 0) {
          *param_2 = SUB84(dVar5,0);
          return 1;
        }
        FUN_00379868();
        if (-1 < (long)dVar5) {
          uVar2 = 0x256;
          goto LAB_003cb8f4;
        }
        uVar2 = 0x254;
      }
      else {
        if (*(long *)(param_1 + 0x18) != 4) goto LAB_003cb830;
        uVar3 = *(uint *)pdVar4;
        if (-1 < (int)uVar3) goto LAB_003cb7e0;
        FUN_00379868();
        uVar2 = 0x24b;
      }
      FUN_0037995c("crypto/params.c",uVar2,"OSSL_PARAM_get_uint32");
      FUN_00379a5c(0xf,0x7d,0);
      return 0;
    }
    FUN_00379868();
    uVar2 = 0x228;
  }
  FUN_0037995c("crypto/params.c",uVar2,"OSSL_PARAM_get_uint32");
  FUN_00379a5c(0xf,0xc0102,0);
  return 0;
}


// ===== 003cb68c  FUN_003cb68c =====

undefined8 FUN_003cb68c(long param_1,uint *param_2)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  double *pdVar4;
  double dVar5;
  
  if ((param_1 == 0) || (param_2 == (uint *)0x0)) {
    FUN_00379868();
    uVar2 = 0x223;
  }
  else {
    pdVar4 = *(double **)(param_1 + 0x10);
    if (pdVar4 != (double *)0x0) {
      iVar1 = *(int *)(param_1 + 8);
      if (iVar1 != 1) {
        if (iVar1 == 3) {
          if (*(long *)(param_1 + 0x18) != 8) {
            FUN_00379868();
            FUN_0037995c("crypto/params.c",0x269,"OSSL_PARAM_get_uint32");
            FUN_00379a5c(0xf,0x82,0);
            return 0;
          }
          dVar5 = *pdVar4;
          if (((dVar5 < 0.0 != NAN(dVar5)) || (4294967295.0 < dVar5)) ||
             (uVar3 = (uint)dVar5, dVar5 != (double)uVar3)) {
            FUN_00379868();
            FUN_0037995c("crypto/params.c",0x266,"OSSL_PARAM_get_uint32");
            FUN_00379a5c(0xf,0x7b,0);
            return 0;
          }
LAB_003cb7e0:
          *param_2 = uVar3;
          return 1;
        }
        if (iVar1 != 2) {
          FUN_00379868();
          FUN_0037995c("crypto/params.c",0x26d,"OSSL_PARAM_get_uint32");
          FUN_00379a5c(0xf,0x81,0);
          return 0;
        }
        if (*(long *)(param_1 + 0x18) == 8) {
          if ((ulong)*pdVar4 >> 0x20 == 0) {
            *param_2 = SUB84(*pdVar4,0);
            return 1;
          }
          FUN_00379868();
          uVar2 = 0x23a;
LAB_003cb8f4:
          FUN_0037995c("crypto/params.c",uVar2,"OSSL_PARAM_get_uint32");
          FUN_00379a5c(0xf,0x7e,0);
          return 0;
        }
        if (*(long *)(param_1 + 0x18) == 4) {
          *param_2 = *(uint *)pdVar4;
          return 1;
        }
LAB_003cb830:
        uVar2 = FUN_003cc884(param_1,param_2,4);
        return uVar2;
      }
      if (*(long *)(param_1 + 0x18) == 8) {
        dVar5 = *pdVar4;
        if ((ulong)dVar5 >> 0x20 == 0) {
          *param_2 = SUB84(dVar5,0);
          return 1;
        }
        FUN_00379868();
        if (-1 < (long)dVar5) {
          uVar2 = 0x256;
          goto LAB_003cb8f4;
        }
        uVar2 = 0x254;
      }
      else {
        if (*(long *)(param_1 + 0x18) != 4) goto LAB_003cb830;
        uVar3 = *(uint *)pdVar4;
        if (-1 < (int)uVar3) goto LAB_003cb7e0;
        FUN_00379868();
        uVar2 = 0x24b;
      }
      FUN_0037995c("crypto/params.c",uVar2,"OSSL_PARAM_get_uint32");
      FUN_00379a5c(0xf,0x7d,0);
      return 0;
    }
    FUN_00379868();
    uVar2 = 0x228;
  }
  FUN_0037995c("crypto/params.c",uVar2,"OSSL_PARAM_get_uint32");
  FUN_00379a5c(0xf,0xc0102,0);
  return 0;
}


// ===== 003cb95c  thunk_FUN_003cb960 =====

undefined8 thunk_FUN_003cb960(long param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong *puVar3;
  long lVar4;
  uint uStack_14;
  
  uStack_14 = param_2;
  if (param_1 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/params.c",0x276,"OSSL_PARAM_set_uint32");
    FUN_00379a5c(0xf,0xc0102,0);
    return 0;
  }
  iVar1 = *(int *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (iVar1 == 1) {
    puVar3 = *(ulong **)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x20) = 4;
    if (puVar3 != (ulong *)0x0) {
      lVar4 = *(long *)(param_1 + 0x18);
      if (lVar4 == 8) {
LAB_003cbab8:
        *(long *)(param_1 + 0x20) = lVar4;
        *puVar3 = (ulong)param_2;
        return 1;
      }
      if (lVar4 == 4) {
        if ((int)param_2 < 0) {
          FUN_00379868();
          FUN_0037995c("crypto/params.c",0x296,"OSSL_PARAM_set_uint32");
          FUN_00379a5c(0xf,0x7e,0);
          return 0;
        }
LAB_003cba58:
        *(uint *)puVar3 = param_2;
        return 1;
      }
LAB_003cbad4:
      uVar2 = FUN_003cc9e0(param_1,&uStack_14,4);
      return uVar2;
    }
  }
  else if (iVar1 == 3) {
    *(undefined8 *)(param_1 + 0x20) = 8;
    if (*(double **)(param_1 + 0x10) != (double *)0x0) {
      if (*(long *)(param_1 + 0x18) != 8) {
        FUN_00379868();
        FUN_0037995c("crypto/params.c",0x2ae,"OSSL_PARAM_set_uint32");
        FUN_00379a5c(0xf,0x82,0);
        return 0;
      }
      **(double **)(param_1 + 0x10) = (double)param_2;
      return 1;
    }
  }
  else {
    if (iVar1 != 2) {
      FUN_00379868();
      FUN_0037995c("crypto/params.c",0x2b2,"OSSL_PARAM_set_uint32");
      FUN_00379a5c(0xf,0x81,0);
      return 0;
    }
    puVar3 = *(ulong **)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x20) = 4;
    if (puVar3 != (ulong *)0x0) {
      lVar4 = *(long *)(param_1 + 0x18);
      if (lVar4 == 8) goto LAB_003cbab8;
      if (lVar4 == 4) goto LAB_003cba58;
      goto LAB_003cbad4;
    }
  }
  return 1;
}


// ===== 003cb960  FUN_003cb960 =====

undefined8 FUN_003cb960(long param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong *puVar3;
  long lVar4;
  uint local_14;
  
  local_14 = param_2;
  if (param_1 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/params.c",0x276,"OSSL_PARAM_set_uint32");
    FUN_00379a5c(0xf,0xc0102,0);
    return 0;
  }
  iVar1 = *(int *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (iVar1 == 1) {
    puVar3 = *(ulong **)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x20) = 4;
    if (puVar3 != (ulong *)0x0) {
      lVar4 = *(long *)(param_1 + 0x18);
      if (lVar4 == 8) {
LAB_003cbab8:
        *(long *)(param_1 + 0x20) = lVar4;
        *puVar3 = (ulong)param_2;
        return 1;
      }
      if (lVar4 == 4) {
        if ((int)param_2 < 0) {
          FUN_00379868();
          FUN_0037995c("crypto/params.c",0x296,"OSSL_PARAM_set_uint32");
          FUN_00379a5c(0xf,0x7e,0);
          return 0;
        }
LAB_003cba58:
        *(uint *)puVar3 = param_2;
        return 1;
      }
LAB_003cbad4:
      uVar2 = FUN_003cc9e0(param_1,&local_14,4);
      return uVar2;
    }
  }
  else if (iVar1 == 3) {
    *(undefined8 *)(param_1 + 0x20) = 8;
    if (*(double **)(param_1 + 0x10) != (double *)0x0) {
      if (*(long *)(param_1 + 0x18) != 8) {
        FUN_00379868();
        FUN_0037995c("crypto/params.c",0x2ae,"OSSL_PARAM_set_uint32");
        FUN_00379a5c(0xf,0x82,0);
        return 0;
      }
      **(double **)(param_1 + 0x10) = (double)param_2;
      return 1;
    }
  }
  else {
    if (iVar1 != 2) {
      FUN_00379868();
      FUN_0037995c("crypto/params.c",0x2b2,"OSSL_PARAM_set_uint32");
      FUN_00379a5c(0xf,0x81,0);
      return 0;
    }
    puVar3 = *(ulong **)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x20) = 4;
    if (puVar3 != (ulong *)0x0) {
      lVar4 = *(long *)(param_1 + 0x18);
      if (lVar4 == 8) goto LAB_003cbab8;
      if (lVar4 == 4) goto LAB_003cba58;
      goto LAB_003cbad4;
    }
  }
  return 1;
}


// ===== 003cbb64  FUN_003cbb64 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003cbb64(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar2 = _UNK_00200908;
  uVar1 = _DAT_00200900;
  *(undefined4 *)(param_1 + 1) = 2;
  param_1[2] = param_3;
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  return;
}


// ===== 003cbb84  thunk_FUN_003cbb88 =====

undefined8 thunk_FUN_003cbb88(long param_1,double *param_2)

{
  int iVar1;
  undefined8 uVar2;
  double *pdVar3;
  double dVar4;
  
  if ((param_1 == 0) || (param_2 == (double *)0x0)) {
    FUN_00379868();
    uVar2 = 0x2bf;
  }
  else {
    pdVar3 = *(double **)(param_1 + 0x10);
    if (pdVar3 != (double *)0x0) {
      iVar1 = *(int *)(param_1 + 8);
      if (iVar1 == 3) {
        if (*(long *)(param_1 + 0x18) != 8) {
          FUN_00379868();
          FUN_0037995c("crypto/params.c",0x2fc,"OSSL_PARAM_get_int64");
          FUN_00379a5c(0xf,0x82,0);
          return 0;
        }
        dVar4 = *pdVar3;
        if (((dVar4 < -9.223372036854776e+18 == NAN(dVar4)) && (dVar4 < 9.223372036854776e+18)) &&
           (dVar4 == (double)(long)dVar4)) {
          *param_2 = (double)(long)dVar4;
          return 1;
        }
        FUN_00379868();
        FUN_0037995c("crypto/params.c",0x2f9,"OSSL_PARAM_get_int64");
        FUN_00379a5c(0xf,0x7b,0);
        return 0;
      }
      if (iVar1 == 2) {
        if (*(long *)(param_1 + 0x18) != 8) {
          if (*(long *)(param_1 + 0x18) == 4) {
            *param_2 = (double)(ulong)*(uint *)pdVar3;
            return 1;
          }
          goto LAB_003cbcf0;
        }
        dVar4 = *pdVar3;
        if ((long)dVar4 < 0) {
          FUN_00379868();
          FUN_0037995c("crypto/params.c",0x2e2,"OSSL_PARAM_get_int64");
          FUN_00379a5c(0xf,0x7e,0);
          return 0;
        }
      }
      else {
        if (iVar1 != 1) {
          FUN_00379868();
          FUN_0037995c("crypto/params.c",0x300,"OSSL_PARAM_get_int64");
          FUN_00379a5c(0xf,0x81,0);
          return 0;
        }
        if (*(long *)(param_1 + 0x18) == 8) {
          *param_2 = *pdVar3;
          return 1;
        }
        if (*(long *)(param_1 + 0x18) != 4) {
LAB_003cbcf0:
          uVar2 = FUN_003cc54c(param_1,param_2,8);
          return uVar2;
        }
        dVar4 = (double)(long)(int)*(uint *)pdVar3;
      }
      *param_2 = dVar4;
      return 1;
    }
    FUN_00379868();
    uVar2 = 0x2c4;
  }
  FUN_0037995c("crypto/params.c",uVar2,"OSSL_PARAM_get_int64");
  FUN_00379a5c(0xf,0xc0102,0);
  return 0;
}


// ===== 003cbb88  FUN_003cbb88 =====

undefined8 FUN_003cbb88(long param_1,double *param_2)

{
  int iVar1;
  undefined8 uVar2;
  double *pdVar3;
  double dVar4;
  
  if ((param_1 == 0) || (param_2 == (double *)0x0)) {
    FUN_00379868();
    uVar2 = 0x2bf;
  }
  else {
    pdVar3 = *(double **)(param_1 + 0x10);
    if (pdVar3 != (double *)0x0) {
      iVar1 = *(int *)(param_1 + 8);
      if (iVar1 == 3) {
        if (*(long *)(param_1 + 0x18) != 8) {
          FUN_00379868();
          FUN_0037995c("crypto/params.c",0x2fc,"OSSL_PARAM_get_int64");
          FUN_00379a5c(0xf,0x82,0);
          return 0;
        }
        dVar4 = *pdVar3;
        if (((dVar4 < -9.223372036854776e+18 == NAN(dVar4)) && (dVar4 < 9.223372036854776e+18)) &&
           (dVar4 == (double)(long)dVar4)) {
          *param_2 = (double)(long)dVar4;
          return 1;
        }
        FUN_00379868();
        FUN_0037995c("crypto/params.c",0x2f9,"OSSL_PARAM_get_int64");
        FUN_00379a5c(0xf,0x7b,0);
        return 0;
      }
      if (iVar1 == 2) {
        if (*(long *)(param_1 + 0x18) != 8) {
          if (*(long *)(param_1 + 0x18) == 4) {
            *param_2 = (double)(ulong)*(uint *)pdVar3;
            return 1;
          }
          goto LAB_003cbcf0;
        }
        dVar4 = *pdVar3;
        if ((long)dVar4 < 0) {
          FUN_00379868();
          FUN_0037995c("crypto/params.c",0x2e2,"OSSL_PARAM_get_int64");
          FUN_00379a5c(0xf,0x7e,0);
          return 0;
        }
      }
      else {
        if (iVar1 != 1) {
          FUN_00379868();
          FUN_0037995c("crypto/params.c",0x300,"OSSL_PARAM_get_int64");
          FUN_00379a5c(0xf,0x81,0);
          return 0;
        }
        if (*(long *)(param_1 + 0x18) == 8) {
          *param_2 = *pdVar3;
          return 1;
        }
        if (*(long *)(param_1 + 0x18) != 4) {
LAB_003cbcf0:
          uVar2 = FUN_003cc54c(param_1,param_2,8);
          return uVar2;
        }
        dVar4 = (double)(long)(int)*(uint *)pdVar3;
      }
      *param_2 = dVar4;
      return 1;
    }
    FUN_00379868();
    uVar2 = 0x2c4;
  }
  FUN_0037995c("crypto/params.c",uVar2,"OSSL_PARAM_get_int64");
  FUN_00379a5c(0xf,0xc0102,0);
  return 0;
}


// ===== 003cbdc0  thunk_FUN_003cbdc4 =====

undefined8 thunk_FUN_003cbdc4(long param_1,ulong param_2)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong uStack_18;
  
  uStack_18 = param_2;
  if (param_1 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/params.c",0x307,"OSSL_PARAM_set_int64");
    FUN_00379a5c(0xf,0xc0102,0);
    return 0;
  }
  iVar2 = *(int *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (iVar2 == 1) {
    puVar4 = *(ulong **)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x20) = 8;
    if (puVar4 != (ulong *)0x0) {
      if (*(long *)(param_1 + 0x18) == 8) {
LAB_003cbf20:
        *puVar4 = param_2;
        return 1;
      }
      if (*(long *)(param_1 + 0x18) != 4) {
LAB_003cbf34:
        uVar3 = FUN_003cc6f0(param_1,&uStack_18,8);
        return uVar3;
      }
      if (param_2 == (long)(int)param_2) {
LAB_003cbea8:
        *(int *)puVar4 = (int)param_2;
        *(undefined8 *)(param_1 + 0x20) = 4;
        return 1;
      }
      FUN_00379868();
      uVar3 = 0x317;
LAB_003cbfdc:
      FUN_0037995c("crypto/params.c",uVar3,"OSSL_PARAM_set_int64");
      FUN_00379a5c(0xf,0x7e,0);
      return 0;
    }
  }
  else if (((long)param_2 < 0) || (iVar2 != 2)) {
    if (iVar2 != 3) {
      FUN_00379868();
      FUN_0037995c("crypto/params.c",0x348,"OSSL_PARAM_set_int64");
      FUN_00379a5c(0xf,0x81,0);
      return 0;
    }
    *(undefined8 *)(param_1 + 0x20) = 8;
    if (*(double **)(param_1 + 0x10) != (double *)0x0) {
      if (*(long *)(param_1 + 0x18) != 8) {
        FUN_00379868();
        FUN_0037995c("crypto/params.c",0x344,"OSSL_PARAM_set_int64");
        FUN_00379a5c(0xf,0x82,0);
        return 0;
      }
      uVar1 = -param_2;
      if (-1 < (long)param_2) {
        uVar1 = param_2;
      }
      if (uVar1 >> 0x35 == 0) {
        **(double **)(param_1 + 0x10) = (double)(long)param_2;
        return 1;
      }
      FUN_00379868();
      FUN_0037995c("crypto/params.c",0x341,"OSSL_PARAM_set_int64");
      FUN_00379a5c(0xf,0x7b,0);
      return 0;
    }
  }
  else {
    puVar4 = *(ulong **)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x20) = 8;
    if (puVar4 != (ulong *)0x0) {
      if (*(long *)(param_1 + 0x18) == 8) goto LAB_003cbf20;
      if (*(long *)(param_1 + 0x18) != 4) goto LAB_003cbf34;
      if (param_2 >> 0x20 == 0) goto LAB_003cbea8;
      FUN_00379868();
      uVar3 = 0x32b;
      goto LAB_003cbfdc;
    }
  }
  return 1;
}


// ===== 003cbdc4  FUN_003cbdc4 =====

undefined8 FUN_003cbdc4(long param_1,ulong param_2)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong local_18;
  
  local_18 = param_2;
  if (param_1 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/params.c",0x307,"OSSL_PARAM_set_int64");
    FUN_00379a5c(0xf,0xc0102,0);
    return 0;
  }
  iVar2 = *(int *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (iVar2 == 1) {
    puVar4 = *(ulong **)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x20) = 8;
    if (puVar4 != (ulong *)0x0) {
      if (*(long *)(param_1 + 0x18) == 8) {
LAB_003cbf20:
        *puVar4 = param_2;
        return 1;
      }
      if (*(long *)(param_1 + 0x18) != 4) {
LAB_003cbf34:
        uVar3 = FUN_003cc6f0(param_1,&local_18,8);
        return uVar3;
      }
      if (param_2 == (long)(int)param_2) {
LAB_003cbea8:
        *(int *)puVar4 = (int)param_2;
        *(undefined8 *)(param_1 + 0x20) = 4;
        return 1;
      }
      FUN_00379868();
      uVar3 = 0x317;
LAB_003cbfdc:
      FUN_0037995c("crypto/params.c",uVar3,"OSSL_PARAM_set_int64");
      FUN_00379a5c(0xf,0x7e,0);
      return 0;
    }
  }
  else if (((long)param_2 < 0) || (iVar2 != 2)) {
    if (iVar2 != 3) {
      FUN_00379868();
      FUN_0037995c("crypto/params.c",0x348,"OSSL_PARAM_set_int64");
      FUN_00379a5c(0xf,0x81,0);
      return 0;
    }
    *(undefined8 *)(param_1 + 0x20) = 8;
    if (*(double **)(param_1 + 0x10) != (double *)0x0) {
      if (*(long *)(param_1 + 0x18) != 8) {
        FUN_00379868();
        FUN_0037995c("crypto/params.c",0x344,"OSSL_PARAM_set_int64");
        FUN_00379a5c(0xf,0x82,0);
        return 0;
      }
      uVar1 = -param_2;
      if (-1 < (long)param_2) {
        uVar1 = param_2;
      }
      if (uVar1 >> 0x35 == 0) {
        **(double **)(param_1 + 0x10) = (double)(long)param_2;
        return 1;
      }
      FUN_00379868();
      FUN_0037995c("crypto/params.c",0x341,"OSSL_PARAM_set_int64");
      FUN_00379a5c(0xf,0x7b,0);
      return 0;
    }
  }
  else {
    puVar4 = *(ulong **)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x20) = 8;
    if (puVar4 != (ulong *)0x0) {
      if (*(long *)(param_1 + 0x18) == 8) goto LAB_003cbf20;
      if (*(long *)(param_1 + 0x18) != 4) goto LAB_003cbf34;
      if (param_2 >> 0x20 == 0) goto LAB_003cbea8;
      FUN_00379868();
      uVar3 = 0x32b;
      goto LAB_003cbfdc;
    }
  }
  return 1;
}


// ===== 003cc03c  FUN_003cc03c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003cc03c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar2 = _UNK_00200768;
  uVar1 = _DAT_00200760;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[2] = param_3;
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  return;
}


// ===== 003cc05c  thunk_FUN_003cc060 =====

undefined8 thunk_FUN_003cc060(long param_1,double *param_2)

{
  int iVar1;
  undefined8 uVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  
  if ((param_1 == 0) || (param_2 == (double *)0x0)) {
    FUN_00379868();
    uVar2 = 0x354;
  }
  else {
    pdVar3 = *(double **)(param_1 + 0x10);
    if (pdVar3 != (double *)0x0) {
      iVar1 = *(int *)(param_1 + 8);
      if (iVar1 == 1) {
        if (*(long *)(param_1 + 0x18) == 8) {
          dVar4 = *pdVar3;
          if ((long)dVar4 < 0) {
            FUN_00379868();
            uVar2 = 0x37d;
LAB_003cc26c:
            FUN_0037995c("crypto/params.c",uVar2,"OSSL_PARAM_get_uint64");
            FUN_00379a5c(0xf,0x7d,0);
            return 0;
          }
        }
        else {
          if (*(long *)(param_1 + 0x18) != 4) goto LAB_003cc1d0;
          dVar4 = (double)(ulong)*(uint *)pdVar3;
          if ((int)*(uint *)pdVar3 < 0) {
            FUN_00379868();
            uVar2 = 0x375;
            goto LAB_003cc26c;
          }
        }
      }
      else {
        if (iVar1 == 3) {
          if (*(long *)(param_1 + 0x18) != 8) {
            FUN_00379868();
            FUN_0037995c("crypto/params.c",0x397,"OSSL_PARAM_get_uint64");
            FUN_00379a5c(0xf,0x82,0);
            return 0;
          }
          dVar4 = *pdVar3;
          if (((dVar4 < 0.0 == NAN(dVar4)) && (dVar4 < 1.8446744073709552e+19)) &&
             (dVar5 = (double)NEON_ucvtf((long)dVar4), dVar4 == dVar5)) {
            *param_2 = (double)(long)dVar4;
            return 1;
          }
          FUN_00379868();
          FUN_0037995c("crypto/params.c",0x394,"OSSL_PARAM_get_uint64");
          FUN_00379a5c(0xf,0x7b,0);
          return 0;
        }
        if (iVar1 != 2) {
          FUN_00379868();
          FUN_0037995c("crypto/params.c",0x39b,"OSSL_PARAM_get_uint64");
          FUN_00379a5c(0xf,0x81,0);
          return 0;
        }
        if (*(long *)(param_1 + 0x18) == 8) {
          *param_2 = *pdVar3;
          return 1;
        }
        if (*(long *)(param_1 + 0x18) != 4) {
LAB_003cc1d0:
          uVar2 = FUN_003cc884(param_1,param_2,8);
          return uVar2;
        }
        dVar4 = (double)(ulong)*(uint *)pdVar3;
      }
      *param_2 = dVar4;
      return 1;
    }
    FUN_00379868();
    uVar2 = 0x359;
  }
  FUN_0037995c("crypto/params.c",uVar2,"OSSL_PARAM_get_uint64");
  FUN_00379a5c(0xf,0xc0102,0);
  return 0;
}


// ===== 003cc060  FUN_003cc060 =====

undefined8 FUN_003cc060(long param_1,double *param_2)

{
  int iVar1;
  undefined8 uVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  
  if ((param_1 == 0) || (param_2 == (double *)0x0)) {
    FUN_00379868();
    uVar2 = 0x354;
  }
  else {
    pdVar3 = *(double **)(param_1 + 0x10);
    if (pdVar3 != (double *)0x0) {
      iVar1 = *(int *)(param_1 + 8);
      if (iVar1 == 1) {
        if (*(long *)(param_1 + 0x18) == 8) {
          dVar4 = *pdVar3;
          if ((long)dVar4 < 0) {
            FUN_00379868();
            uVar2 = 0x37d;
LAB_003cc26c:
            FUN_0037995c("crypto/params.c",uVar2,"OSSL_PARAM_get_uint64");
            FUN_00379a5c(0xf,0x7d,0);
            return 0;
          }
        }
        else {
          if (*(long *)(param_1 + 0x18) != 4) goto LAB_003cc1d0;
          dVar4 = (double)(ulong)*(uint *)pdVar3;
          if ((int)*(uint *)pdVar3 < 0) {
            FUN_00379868();
            uVar2 = 0x375;
            goto LAB_003cc26c;
          }
        }
      }
      else {
        if (iVar1 == 3) {
          if (*(long *)(param_1 + 0x18) != 8) {
            FUN_00379868();
            FUN_0037995c("crypto/params.c",0x397,"OSSL_PARAM_get_uint64");
            FUN_00379a5c(0xf,0x82,0);
            return 0;
          }
          dVar4 = *pdVar3;
          if (((dVar4 < 0.0 == NAN(dVar4)) && (dVar4 < 1.8446744073709552e+19)) &&
             (dVar5 = (double)NEON_ucvtf((long)dVar4), dVar4 == dVar5)) {
            *param_2 = (double)(long)dVar4;
            return 1;
          }
          FUN_00379868();
          FUN_0037995c("crypto/params.c",0x394,"OSSL_PARAM_get_uint64");
          FUN_00379a5c(0xf,0x7b,0);
          return 0;
        }
        if (iVar1 != 2) {
          FUN_00379868();
          FUN_0037995c("crypto/params.c",0x39b,"OSSL_PARAM_get_uint64");
          FUN_00379a5c(0xf,0x81,0);
          return 0;
        }
        if (*(long *)(param_1 + 0x18) == 8) {
          *param_2 = *pdVar3;
          return 1;
        }
        if (*(long *)(param_1 + 0x18) != 4) {
LAB_003cc1d0:
          uVar2 = FUN_003cc884(param_1,param_2,8);
          return uVar2;
        }
        dVar4 = (double)(ulong)*(uint *)pdVar3;
      }
      *param_2 = dVar4;
      return 1;
    }
    FUN_00379868();
    uVar2 = 0x359;
  }
  FUN_0037995c("crypto/params.c",uVar2,"OSSL_PARAM_get_uint64");
  FUN_00379a5c(0xf,0xc0102,0);
  return 0;
}


// ===== 003cc2a0  thunk_FUN_003cc2a4 =====

undefined8 thunk_FUN_003cc2a4(long param_1,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong uStack_18;
  
  uStack_18 = param_2;
  if (param_1 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/params.c",0x3a2,"OSSL_PARAM_set_uint64");
    FUN_00379a5c(0xf,0xc0102,0);
    return 0;
  }
  iVar1 = *(int *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (iVar1 == 1) {
    puVar3 = *(ulong **)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x20) = 8;
    if (puVar3 == (ulong *)0x0) {
      return 1;
    }
    if (*(long *)(param_1 + 0x18) == 8) {
      if (-1 < (long)param_2) goto LAB_003cc4c0;
      FUN_00379868();
      uVar2 = 0x3ce;
    }
    else {
      if (*(long *)(param_1 + 0x18) != 4) goto LAB_003cc468;
      if (param_2 >> 0x1f == 0) goto LAB_003cc3c4;
      FUN_00379868();
      uVar2 = 0x3c7;
    }
  }
  else {
    if (iVar1 == 3) {
      *(undefined8 *)(param_1 + 0x20) = 8;
      if (*(long *)(param_1 + 0x18) != 8) {
        FUN_00379868();
        FUN_0037995c("crypto/params.c",0x3df,"OSSL_PARAM_set_uint64");
        FUN_00379a5c(0xf,0x82,0);
        return 0;
      }
      if (param_2 >> 0x35 != 0) {
        FUN_00379868();
        FUN_0037995c("crypto/params.c",0x3dc,"OSSL_PARAM_set_uint64");
        FUN_00379a5c(0xf,0x7b,0);
        return 0;
      }
      **(double **)(param_1 + 0x10) = (double)param_2;
      return 1;
    }
    if (iVar1 != 2) {
      FUN_00379868();
      FUN_0037995c("crypto/params.c",0x3e3,"OSSL_PARAM_set_uint64");
      FUN_00379a5c(0xf,0x81,0);
      return 0;
    }
    puVar3 = *(ulong **)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x20) = 8;
    if (puVar3 == (ulong *)0x0) {
      return 1;
    }
    if (*(long *)(param_1 + 0x18) == 8) {
LAB_003cc4c0:
      *puVar3 = param_2;
      return 1;
    }
    if (*(long *)(param_1 + 0x18) != 4) {
LAB_003cc468:
      uVar2 = FUN_003cc9e0(param_1,&uStack_18,8);
      return uVar2;
    }
    if (param_2 >> 0x20 == 0) {
LAB_003cc3c4:
      *(int *)puVar3 = (int)param_2;
      *(undefined8 *)(param_1 + 0x20) = 4;
      return 1;
    }
    FUN_00379868();
    uVar2 = 0x3b3;
  }
  FUN_0037995c("crypto/params.c",uVar2,"OSSL_PARAM_set_uint64");
  FUN_00379a5c(0xf,0x7e,0);
  return 0;
}


// ===== 003cc2a4  FUN_003cc2a4 =====

undefined8 FUN_003cc2a4(long param_1,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong local_18;
  
  local_18 = param_2;
  if (param_1 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/params.c",0x3a2,"OSSL_PARAM_set_uint64");
    FUN_00379a5c(0xf,0xc0102,0);
    return 0;
  }
  iVar1 = *(int *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (iVar1 == 1) {
    puVar3 = *(ulong **)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x20) = 8;
    if (puVar3 == (ulong *)0x0) {
      return 1;
    }
    if (*(long *)(param_1 + 0x18) == 8) {
      if (-1 < (long)param_2) goto LAB_003cc4c0;
      FUN_00379868();
      uVar2 = 0x3ce;
    }
    else {
      if (*(long *)(param_1 + 0x18) != 4) goto LAB_003cc468;
      if (param_2 >> 0x1f == 0) goto LAB_003cc3c4;
      FUN_00379868();
      uVar2 = 0x3c7;
    }
  }
  else {
    if (iVar1 == 3) {
      *(undefined8 *)(param_1 + 0x20) = 8;
      if (*(long *)(param_1 + 0x18) != 8) {
        FUN_00379868();
        FUN_0037995c("crypto/params.c",0x3df,"OSSL_PARAM_set_uint64");
        FUN_00379a5c(0xf,0x82,0);
        return 0;
      }
      if (param_2 >> 0x35 != 0) {
        FUN_00379868();
        FUN_0037995c("crypto/params.c",0x3dc,"OSSL_PARAM_set_uint64");
        FUN_00379a5c(0xf,0x7b,0);
        return 0;
      }
      **(double **)(param_1 + 0x10) = (double)param_2;
      return 1;
    }
    if (iVar1 != 2) {
      FUN_00379868();
      FUN_0037995c("crypto/params.c",0x3e3,"OSSL_PARAM_set_uint64");
      FUN_00379a5c(0xf,0x81,0);
      return 0;
    }
    puVar3 = *(ulong **)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x20) = 8;
    if (puVar3 == (ulong *)0x0) {
      return 1;
    }
    if (*(long *)(param_1 + 0x18) == 8) {
LAB_003cc4c0:
      *puVar3 = param_2;
      return 1;
    }
    if (*(long *)(param_1 + 0x18) != 4) {
LAB_003cc468:
      uVar2 = FUN_003cc9e0(param_1,&local_18,8);
      return uVar2;
    }
    if (param_2 >> 0x20 == 0) {
LAB_003cc3c4:
      *(int *)puVar3 = (int)param_2;
      *(undefined8 *)(param_1 + 0x20) = 4;
      return 1;
    }
    FUN_00379868();
    uVar2 = 0x3b3;
  }
  FUN_0037995c("crypto/params.c",uVar2,"OSSL_PARAM_set_uint64");
  FUN_00379a5c(0xf,0x7e,0);
  return 0;
}


// ===== 003cc52c  FUN_003cc52c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003cc52c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar2 = _UNK_00200768;
  uVar1 = _DAT_00200760;
  *(undefined4 *)(param_1 + 1) = 2;
  param_1[2] = param_3;
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  return;
}


// ===== 003cc54c  FUN_003cc54c =====

undefined8 FUN_003cc54c(long param_1,void *param_2,size_t param_3)

{
  long lVar1;
  char *pcVar2;
  byte *pbVar3;
  uint __c;
  undefined8 uVar4;
  void *__src;
  size_t __n;
  
  __src = *(void **)(param_1 + 0x10);
  if (__src == (void *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/params.c",0xc9,"general_get_int");
    uVar4 = 0xc0102;
  }
  else {
    if (*(int *)(param_1 + 8) == 2) {
      __n = *(ulong *)(param_1 + 0x18);
      lVar1 = __n - param_3;
      if (param_3 <= __n) {
        pcVar2 = (char *)((long)__src + param_3);
        for (; lVar1 != 0; lVar1 = lVar1 + -1) {
          if (*pcVar2 != '\0') goto LAB_003cc6b0;
          pcVar2 = pcVar2 + 1;
        }
LAB_003cc690:
        memcpy(param_2,__src,param_3);
        return 1;
      }
      __c = 0;
LAB_003cc5ec:
      memset((void *)((long)param_2 + __n),__c,param_3 - __n);
      memcpy(param_2,__src,__n);
      return 1;
    }
    if (*(int *)(param_1 + 8) == 1) {
      __n = *(ulong *)(param_1 + 0x18);
      lVar1 = __n - param_3;
      __c = (int)(uint)*(byte *)((long)__src + (__n - 1)) >> 7;
      if (__n < param_3) goto LAB_003cc5ec;
      pbVar3 = (byte *)((long)__src + param_3);
      for (; lVar1 != 0; lVar1 = lVar1 + -1) {
        if (*pbVar3 != __c) goto LAB_003cc6b0;
        pbVar3 = pbVar3 + 1;
      }
      if (-1 < (char)((byte *)((long)__src + param_3))[-1]) goto LAB_003cc690;
LAB_003cc6b0:
      FUN_00379868();
      FUN_0037995c("crypto/params.c",0x9b,"copy_integer");
      uVar4 = 0x7e;
    }
    else {
      FUN_00379868();
      FUN_0037995c("crypto/params.c",0xd0,"general_get_int");
      uVar4 = 0x7c;
    }
  }
  FUN_00379a5c(0xf,uVar4,0);
  return 0;
}


// ===== 003cc6f0  FUN_003cc6f0 =====

undefined8 FUN_003cc6f0(long param_1,void *param_2,ulong param_3)

{
  uint __c;
  long lVar1;
  byte *pbVar2;
  void *__dest;
  undefined8 uVar3;
  ulong __n;
  
  __dest = *(void **)(param_1 + 0x10);
  *(ulong *)(param_1 + 0x20) = param_3;
  if (__dest == (void *)0x0) {
    return 1;
  }
  if (*(int *)(param_1 + 8) == 2) {
    uVar3 = FUN_003ce1b8(__dest,*(undefined8 *)(param_1 + 0x18),param_2,param_3);
    if ((int)uVar3 == 0) {
      *(ulong *)(param_1 + 0x20) = param_3;
      return uVar3;
    }
  }
  else {
    if (*(int *)(param_1 + 8) != 1) {
      FUN_00379868();
      FUN_0037995c("crypto/params.c",0xe1,"general_set_int");
      uVar3 = 0x7c;
LAB_003cc844:
      FUN_00379a5c(0xf,uVar3,0);
      *(ulong *)(param_1 + 0x20) = param_3;
      return 0;
    }
    __n = *(ulong *)(param_1 + 0x18);
    __c = (int)(uint)*(byte *)((long)param_2 + (param_3 - 1)) >> 7;
    if (__n < param_3 || __n - param_3 == 0) {
      pbVar2 = (byte *)((long)param_2 + __n);
      for (lVar1 = param_3 - __n; lVar1 != 0; lVar1 = lVar1 + -1) {
        if (*pbVar2 != __c) goto LAB_003cc820;
        pbVar2 = pbVar2 + 1;
      }
      if ((char)((byte *)((long)param_2 + __n))[-1] < '\0') {
LAB_003cc820:
        FUN_00379868();
        FUN_0037995c("crypto/params.c",0x9b,"copy_integer");
        uVar3 = 0x7e;
        goto LAB_003cc844;
      }
    }
    else {
      memset((void *)((long)__dest + param_3),__c,__n - param_3);
      __n = param_3;
    }
    memcpy(__dest,param_2,__n);
  }
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x18);
  return 1;
}


// ===== 003cc864  FUN_003cc864 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003cc864(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar2 = _UNK_00200908;
  uVar1 = _DAT_00200900;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[2] = param_3;
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  return;
}


// ===== 003cc884  FUN_003cc884 =====

undefined8 FUN_003cc884(long param_1,void *param_2,size_t param_3)

{
  undefined8 uVar1;
  long lVar2;
  char *pcVar3;
  void *__src;
  ulong __n;
  
  __src = *(void **)(param_1 + 0x10);
  if (__src == (void *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/params.c",0xeb,"general_get_uint");
    uVar1 = 0xc0102;
  }
  else {
    if (*(int *)(param_1 + 8) == 2) {
      __n = *(ulong *)(param_1 + 0x18);
      lVar2 = __n - param_3;
      if (__n < param_3) {
        memset((void *)((long)param_2 + __n),0,param_3 - __n);
        memcpy(param_2,__src,__n);
        return 1;
      }
      if (lVar2 != 0) {
        pcVar3 = (char *)((long)__src + param_3);
        do {
          if (*pcVar3 != '\0') {
            FUN_00379868();
            FUN_0037995c("crypto/params.c",0x9b,"copy_integer");
            uVar1 = 0x7e;
            goto LAB_003cc964;
          }
          lVar2 = lVar2 + -1;
          pcVar3 = pcVar3 + 1;
        } while (lVar2 != 0);
      }
      memcpy(param_2,__src,param_3);
      return 1;
    }
    if (*(int *)(param_1 + 8) == 1) {
      uVar1 = FUN_003ce1b8(param_2,param_3,__src,*(undefined8 *)(param_1 + 0x18));
      return uVar1;
    }
    FUN_00379868();
    FUN_0037995c("crypto/params.c",0xf2,"general_get_uint");
    uVar1 = 0x7c;
  }
LAB_003cc964:
  FUN_00379a5c(0xf,uVar1,0);
  return 0;
}


// ===== 003cc9e0  FUN_003cc9e0 =====

undefined8 FUN_003cc9e0(long param_1,void *param_2,ulong param_3)

{
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
  ulong __n;
  size_t __n_00;
  ulong uVar4;
  void *__dest;
  
  __dest = *(void **)(param_1 + 0x10);
  *(ulong *)(param_1 + 0x20) = param_3;
  if (__dest == (void *)0x0) {
    return 1;
  }
  if (*(int *)(param_1 + 8) == 2) {
    __n = *(ulong *)(param_1 + 0x18);
    __n_00 = __n - param_3;
    if (__n < param_3 || __n_00 == 0) {
      uVar4 = __n;
      if (__n_00 != 0) {
        do {
          if (*(char *)((long)param_2 + uVar4) != '\0') goto LAB_003cca48;
          uVar4 = uVar4 + 1;
        } while (param_3 != uVar4);
      }
      goto LAB_003ccb28;
    }
  }
  else {
    if (*(int *)(param_1 + 8) != 1) {
      FUN_00379868();
      FUN_0037995c("crypto/params.c",0x103,"general_set_uint");
      uVar3 = 0x7c;
      goto LAB_003ccae4;
    }
    __n = *(ulong *)(param_1 + 0x18);
    __n_00 = __n - param_3;
    if (__n < param_3 || __n_00 == 0) {
      pcVar2 = (char *)((long)param_2 + __n);
      for (lVar1 = param_3 - __n; lVar1 != 0; lVar1 = lVar1 + -1) {
        if (*pcVar2 != '\0') goto LAB_003cca48;
        pcVar2 = pcVar2 + 1;
      }
      goto LAB_003ccb28;
    }
  }
  memset((void *)((long)__dest + param_3),0,__n_00);
  __n = param_3;
LAB_003ccb28:
  memcpy(__dest,param_2,__n);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x18);
  return 1;
LAB_003cca48:
  FUN_00379868();
  FUN_0037995c("crypto/params.c",0x9b,"copy_integer");
  uVar3 = 0x7e;
LAB_003ccae4:
  FUN_00379a5c(0xf,uVar3,0);
  *(ulong *)(param_1 + 0x20) = param_3;
  return 0;
}


// ===== 003ccb48  FUN_003ccb48 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003ccb48(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar2 = _UNK_00200908;
  uVar1 = _DAT_00200900;
  *(undefined4 *)(param_1 + 1) = 2;
  param_1[2] = param_3;
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  return;
}


// ===== 003ccb68  FUN_003ccb68 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003ccb68(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar2 = _UNK_00200768;
  uVar1 = _DAT_00200760;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[2] = param_3;
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  return;
}


// ===== 003ccb88  FUN_003ccb88 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003ccb88(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar2 = _UNK_00200768;
  uVar1 = _DAT_00200760;
  *(undefined4 *)(param_1 + 1) = 2;
  param_1[2] = param_3;
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  return;
}


// ===== 003ccba8  thunk_FUN_003cc060 =====

undefined8 thunk_FUN_003cc060(long param_1,double *param_2)

{
  int iVar1;
  undefined8 uVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  
  if ((param_1 == 0) || (param_2 == (double *)0x0)) {
    FUN_00379868();
    uVar2 = 0x354;
  }
  else {
    pdVar3 = *(double **)(param_1 + 0x10);
    if (pdVar3 != (double *)0x0) {
      iVar1 = *(int *)(param_1 + 8);
      if (iVar1 == 1) {
        if (*(long *)(param_1 + 0x18) == 8) {
          dVar4 = *pdVar3;
          if ((long)dVar4 < 0) {
            FUN_00379868();
            uVar2 = 0x37d;
LAB_003cc26c:
            FUN_0037995c("crypto/params.c",uVar2,"OSSL_PARAM_get_uint64");
            FUN_00379a5c(0xf,0x7d,0);
            return 0;
          }
        }
        else {
          if (*(long *)(param_1 + 0x18) != 4) goto LAB_003cc1d0;
          dVar4 = (double)(ulong)*(uint *)pdVar3;
          if ((int)*(uint *)pdVar3 < 0) {
            FUN_00379868();
            uVar2 = 0x375;
            goto LAB_003cc26c;
          }
        }
      }
      else {
        if (iVar1 == 3) {
          if (*(long *)(param_1 + 0x18) != 8) {
            FUN_00379868();
            FUN_0037995c("crypto/params.c",0x397,"OSSL_PARAM_get_uint64");
            FUN_00379a5c(0xf,0x82,0);
            return 0;
          }
          dVar4 = *pdVar3;
          if (((dVar4 < 0.0 == NAN(dVar4)) && (dVar4 < 1.8446744073709552e+19)) &&
             (dVar5 = (double)NEON_ucvtf((long)dVar4), dVar4 == dVar5)) {
            *param_2 = (double)(long)dVar4;
            return 1;
          }
          FUN_00379868();
          FUN_0037995c("crypto/params.c",0x394,"OSSL_PARAM_get_uint64");
          FUN_00379a5c(0xf,0x7b,0);
          return 0;
        }
        if (iVar1 != 2) {
          FUN_00379868();
          FUN_0037995c("crypto/params.c",0x39b,"OSSL_PARAM_get_uint64");
          FUN_00379a5c(0xf,0x81,0);
          return 0;
        }
        if (*(long *)(param_1 + 0x18) == 8) {
          *param_2 = *pdVar3;
          return 1;
        }
        if (*(long *)(param_1 + 0x18) != 4) {
LAB_003cc1d0:
          uVar2 = FUN_003cc884(param_1,param_2,8);
          return uVar2;
        }
        dVar4 = (double)(ulong)*(uint *)pdVar3;
      }
      *param_2 = dVar4;
      return 1;
    }
    FUN_00379868();
    uVar2 = 0x359;
  }
  FUN_0037995c("crypto/params.c",uVar2,"OSSL_PARAM_get_uint64");
  FUN_00379a5c(0xf,0xc0102,0);
  return 0;
}


// ===== 003ccbac  thunk_FUN_003cc2a4 =====

undefined8 thunk_FUN_003cc2a4(long param_1,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong uStack_18;
  
  uStack_18 = param_2;
  if (param_1 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/params.c",0x3a2,"OSSL_PARAM_set_uint64");
    FUN_00379a5c(0xf,0xc0102,0);
    return 0;
  }
  iVar1 = *(int *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (iVar1 == 1) {
    puVar3 = *(ulong **)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x20) = 8;
    if (puVar3 == (ulong *)0x0) {
      return 1;
    }
    if (*(long *)(param_1 + 0x18) == 8) {
      if (-1 < (long)param_2) goto LAB_003cc4c0;
      FUN_00379868();
      uVar2 = 0x3ce;
    }
    else {
      if (*(long *)(param_1 + 0x18) != 4) goto LAB_003cc468;
      if (param_2 >> 0x1f == 0) goto LAB_003cc3c4;
      FUN_00379868();
      uVar2 = 0x3c7;
    }
  }
  else {
    if (iVar1 == 3) {
      *(undefined8 *)(param_1 + 0x20) = 8;
      if (*(long *)(param_1 + 0x18) != 8) {
        FUN_00379868();
        FUN_0037995c("crypto/params.c",0x3df,"OSSL_PARAM_set_uint64");
        FUN_00379a5c(0xf,0x82,0);
        return 0;
      }
      if (param_2 >> 0x35 != 0) {
        FUN_00379868();
        FUN_0037995c("crypto/params.c",0x3dc,"OSSL_PARAM_set_uint64");
        FUN_00379a5c(0xf,0x7b,0);
        return 0;
      }
      **(double **)(param_1 + 0x10) = (double)param_2;
      return 1;
    }
    if (iVar1 != 2) {
      FUN_00379868();
      FUN_0037995c("crypto/params.c",0x3e3,"OSSL_PARAM_set_uint64");
      FUN_00379a5c(0xf,0x81,0);
      return 0;
    }
    puVar3 = *(ulong **)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x20) = 8;
    if (puVar3 == (ulong *)0x0) {
      return 1;
    }
    if (*(long *)(param_1 + 0x18) == 8) {
LAB_003cc4c0:
      *puVar3 = param_2;
      return 1;
    }
    if (*(long *)(param_1 + 0x18) != 4) {
LAB_003cc468:
      uVar2 = FUN_003cc9e0(param_1,&uStack_18,8);
      return uVar2;
    }
    if (param_2 >> 0x20 == 0) {
LAB_003cc3c4:
      *(int *)puVar3 = (int)param_2;
      *(undefined8 *)(param_1 + 0x20) = 4;
      return 1;
    }
    FUN_00379868();
    uVar2 = 0x3b3;
  }
  FUN_0037995c("crypto/params.c",uVar2,"OSSL_PARAM_set_uint64");
  FUN_00379a5c(0xf,0x7e,0);
  return 0;
}


// ===== 003ccbb0  FUN_003ccbb0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003ccbb0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar2 = _UNK_00200768;
  uVar1 = _DAT_00200760;
  *(undefined4 *)(param_1 + 1) = 2;
  param_1[2] = param_3;
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  return;
}


// ===== 003ccbd0  thunk_FUN_003cbb88 =====

undefined8 thunk_FUN_003cbb88(long param_1,double *param_2)

{
  int iVar1;
  undefined8 uVar2;
  double *pdVar3;
  double dVar4;
  
  if ((param_1 == 0) || (param_2 == (double *)0x0)) {
    FUN_00379868();
    uVar2 = 0x2bf;
  }
  else {
    pdVar3 = *(double **)(param_1 + 0x10);
    if (pdVar3 != (double *)0x0) {
      iVar1 = *(int *)(param_1 + 8);
      if (iVar1 == 3) {
        if (*(long *)(param_1 + 0x18) != 8) {
          FUN_00379868();
          FUN_0037995c("crypto/params.c",0x2fc,"OSSL_PARAM_get_int64");
          FUN_00379a5c(0xf,0x82,0);
          return 0;
        }
        dVar4 = *pdVar3;
        if (((dVar4 < -9.223372036854776e+18 == NAN(dVar4)) && (dVar4 < 9.223372036854776e+18)) &&
           (dVar4 == (double)(long)dVar4)) {
          *param_2 = (double)(long)dVar4;
          return 1;
        }
        FUN_00379868();
        FUN_0037995c("crypto/params.c",0x2f9,"OSSL_PARAM_get_int64");
        FUN_00379a5c(0xf,0x7b,0);
        return 0;
      }
      if (iVar1 == 2) {
        if (*(long *)(param_1 + 0x18) != 8) {
          if (*(long *)(param_1 + 0x18) == 4) {
            *param_2 = (double)(ulong)*(uint *)pdVar3;
            return 1;
          }
          goto LAB_003cbcf0;
        }
        dVar4 = *pdVar3;
        if ((long)dVar4 < 0) {
          FUN_00379868();
          FUN_0037995c("crypto/params.c",0x2e2,"OSSL_PARAM_get_int64");
          FUN_00379a5c(0xf,0x7e,0);
          return 0;
        }
      }
      else {
        if (iVar1 != 1) {
          FUN_00379868();
          FUN_0037995c("crypto/params.c",0x300,"OSSL_PARAM_get_int64");
          FUN_00379a5c(0xf,0x81,0);
          return 0;
        }
        if (*(long *)(param_1 + 0x18) == 8) {
          *param_2 = *pdVar3;
          return 1;
        }
        if (*(long *)(param_1 + 0x18) != 4) {
LAB_003cbcf0:
          uVar2 = FUN_003cc54c(param_1,param_2,8);
          return uVar2;
        }
        dVar4 = (double)(long)(int)*(uint *)pdVar3;
      }
      *param_2 = dVar4;
      return 1;
    }
    FUN_00379868();
    uVar2 = 0x2c4;
  }
  FUN_0037995c("crypto/params.c",uVar2,"OSSL_PARAM_get_int64");
  FUN_00379a5c(0xf,0xc0102,0);
  return 0;
}


// ===== 003ccbd4  thunk_FUN_003cbdc4 =====

undefined8 thunk_FUN_003cbdc4(long param_1,ulong param_2)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong uStack_18;
  
  uStack_18 = param_2;
  if (param_1 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/params.c",0x307,"OSSL_PARAM_set_int64");
    FUN_00379a5c(0xf,0xc0102,0);
    return 0;
  }
  iVar2 = *(int *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (iVar2 == 1) {
    puVar4 = *(ulong **)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x20) = 8;
    if (puVar4 != (ulong *)0x0) {
      if (*(long *)(param_1 + 0x18) == 8) {
LAB_003cbf20:
        *puVar4 = param_2;
        return 1;
      }
      if (*(long *)(param_1 + 0x18) != 4) {
LAB_003cbf34:
        uVar3 = FUN_003cc6f0(param_1,&uStack_18,8);
        return uVar3;
      }
      if (param_2 == (long)(int)param_2) {
LAB_003cbea8:
        *(int *)puVar4 = (int)param_2;
        *(undefined8 *)(param_1 + 0x20) = 4;
        return 1;
      }
      FUN_00379868();
      uVar3 = 0x317;
LAB_003cbfdc:
      FUN_0037995c("crypto/params.c",uVar3,"OSSL_PARAM_set_int64");
      FUN_00379a5c(0xf,0x7e,0);
      return 0;
    }
  }
  else if (((long)param_2 < 0) || (iVar2 != 2)) {
    if (iVar2 != 3) {
      FUN_00379868();
      FUN_0037995c("crypto/params.c",0x348,"OSSL_PARAM_set_int64");
      FUN_00379a5c(0xf,0x81,0);
      return 0;
    }
    *(undefined8 *)(param_1 + 0x20) = 8;
    if (*(double **)(param_1 + 0x10) != (double *)0x0) {
      if (*(long *)(param_1 + 0x18) != 8) {
        FUN_00379868();
        FUN_0037995c("crypto/params.c",0x344,"OSSL_PARAM_set_int64");
        FUN_00379a5c(0xf,0x82,0);
        return 0;
      }
      uVar1 = -param_2;
      if (-1 < (long)param_2) {
        uVar1 = param_2;
      }
      if (uVar1 >> 0x35 == 0) {
        **(double **)(param_1 + 0x10) = (double)(long)param_2;
        return 1;
      }
      FUN_00379868();
      FUN_0037995c("crypto/params.c",0x341,"OSSL_PARAM_set_int64");
      FUN_00379a5c(0xf,0x7b,0);
      return 0;
    }
  }
  else {
    puVar4 = *(ulong **)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x20) = 8;
    if (puVar4 != (ulong *)0x0) {
      if (*(long *)(param_1 + 0x18) == 8) goto LAB_003cbf20;
      if (*(long *)(param_1 + 0x18) != 4) goto LAB_003cbf34;
      if (param_2 >> 0x20 == 0) goto LAB_003cbea8;
      FUN_00379868();
      uVar3 = 0x32b;
      goto LAB_003cbfdc;
    }
  }
  return 1;
}


// ===== 003ccbd8  FUN_003ccbd8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003ccbd8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar2 = _UNK_00200768;
  uVar1 = _DAT_00200760;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[2] = param_3;
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  return;
}


// ===== 003ccbf8  FUN_003ccbf8 =====

undefined8 FUN_003ccbf8(long param_1,long *param_2)

{
  long lVar1;
  
  if (((param_1 == 0) || (param_2 == (long *)0x0)) ||
     (lVar1 = *(long *)(param_1 + 0x10), lVar1 == 0)) {
    FUN_00379868();
    FUN_0037995c("crypto/params.c",0x431,"OSSL_PARAM_get_BN");
    FUN_00379a5c(0xf,0xc0102,0);
    return 0;
  }
  if (*(int *)(param_1 + 8) == 1) {
    lVar1 = FUN_00390170(lVar1,*(undefined4 *)(param_1 + 0x18),*param_2);
  }
  else {
    if (*(int *)(param_1 + 8) != 2) {
      FUN_00379868();
      FUN_0037995c("crypto/params.c",0x43d,"OSSL_PARAM_get_BN");
      FUN_00379a5c(0xf,0x81,0);
      goto LAB_003ccce4;
    }
    lVar1 = FUN_00390164(lVar1,*(undefined4 *)(param_1 + 0x18),*param_2);
  }
  if (lVar1 != 0) {
    *param_2 = lVar1;
    return 1;
  }
LAB_003ccce4:
  FUN_00379868();
  FUN_0037995c("crypto/params.c",0x442,"OSSL_PARAM_get_BN");
  FUN_00379a5c(0xf,0x80003,0);
  return 0;
}


// ===== 003ccd24  FUN_003ccd24 =====

undefined8 FUN_003ccd24(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar5 = 0xc0102;
  if (param_1 == 0) {
    uVar6 = 0x44f;
  }
  else {
    *(undefined8 *)(param_1 + 0x20) = 0;
    if (param_2 == 0) {
      uVar6 = 0x454;
    }
    else if ((*(int *)(param_1 + 8) == 2) && (iVar3 = FUN_003908c4(param_2), iVar3 != 0)) {
      uVar5 = 0x81;
      uVar6 = 0x458;
    }
    else {
      iVar4 = FUN_0038f2c0(param_2);
      iVar3 = *(int *)(param_1 + 8);
      uVar1 = iVar4 + 0xe;
      if ((int)(iVar4 + 7U) < 0 == SCARRY4(iVar4,7)) {
        uVar1 = iVar4 + 7U;
      }
      uVar2 = (long)((ulong)uVar1 << 0x20) >> 0x23;
      if (iVar3 == 1) {
        uVar2 = uVar2 + 1;
      }
      if (uVar2 < 2) {
        uVar2 = 1;
      }
      *(ulong *)(param_1 + 0x20) = uVar2;
      if (*(long *)(param_1 + 0x10) == 0) {
        return 1;
      }
      if (*(ulong *)(param_1 + 0x18) < uVar2) {
        uVar5 = 0x74;
        uVar6 = 0x47b;
      }
      else {
        *(ulong *)(param_1 + 0x20) = *(ulong *)(param_1 + 0x18);
        if (iVar3 == 1) {
          iVar3 = FUN_00390194(param_2);
          if (-1 < iVar3) {
            return 1;
          }
          uVar5 = 0x7f;
          uVar6 = 0x473;
        }
        else if (iVar3 == 2) {
          iVar3 = FUN_0039017c(param_2);
          if (-1 < iVar3) {
            return 1;
          }
          uVar5 = 0x7f;
          uVar6 = 0x46e;
        }
        else {
          uVar5 = 0x81;
          uVar6 = 0x476;
        }
      }
    }
  }
  FUN_00379868();
  FUN_0037995c("crypto/params.c",uVar6,"OSSL_PARAM_set_BN");
  FUN_00379a5c(0xf,uVar5,0);
  return 0;
}


// ===== 003cce74  FUN_003cce74 =====

void FUN_003cce74(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 2;
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = 0xffffffffffffffff;
  return;
}


// ===== 003cce90  FUN_003cce90 =====

undefined8 FUN_003cce90(long param_1,double *param_2)

{
  int iVar1;
  undefined8 uVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  
  if (((param_1 == 0) || (param_2 == (double *)0x0)) ||
     (pdVar3 = *(double **)(param_1 + 0x10), pdVar3 == (double *)0x0)) {
    FUN_00379868();
    FUN_0037995c("crypto/params.c",0x48d,"OSSL_PARAM_get_double");
    FUN_00379a5c(0xf,0xc0102,0);
    return 0;
  }
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 1) {
    if (*(long *)(param_1 + 0x18) == 8) {
      dVar4 = *pdVar3;
      dVar5 = (double)-(long)dVar4;
      if (-1 < (long)dVar4) {
        dVar5 = dVar4;
      }
      if ((ulong)dVar5 >> 0x35 == 0) {
        *param_2 = (double)(long)dVar4;
        return 1;
      }
      FUN_00379868();
      uVar2 = 0x4b3;
LAB_003cd064:
      FUN_0037995c("crypto/params.c",uVar2,"OSSL_PARAM_get_double");
      FUN_00379a5c(0xf,0x7b,0);
      return 0;
    }
    if (*(long *)(param_1 + 0x18) == 4) {
      *param_2 = (double)*(int *)pdVar3;
      return 1;
    }
  }
  else if (iVar1 == 2) {
    if (*(long *)(param_1 + 0x18) == 8) {
      if ((ulong)*pdVar3 >> 0x35 == 0) {
        *param_2 = (double)(ulong)*pdVar3;
        return 1;
      }
      FUN_00379868();
      uVar2 = 0x4a4;
      goto LAB_003cd064;
    }
    if (*(long *)(param_1 + 0x18) == 4) {
      dVar5 = (double)NEON_ucvtf((ulong)*(uint *)pdVar3);
      *param_2 = dVar5;
      return 1;
    }
  }
  else if (iVar1 == 3) {
    if (*(long *)(param_1 + 0x18) == 8) {
      *param_2 = *pdVar3;
      return 1;
    }
    FUN_00379868();
    FUN_0037995c("crypto/params.c",0x497,"OSSL_PARAM_get_double");
    FUN_00379a5c(0xf,0x82,0);
    return 0;
  }
  FUN_00379868();
  FUN_0037995c("crypto/params.c",0x4b7,"OSSL_PARAM_get_double");
  FUN_00379a5c(0xf,0x81,0);
  return 0;
}


// ===== 003cd084  FUN_003cd084 =====

undefined8 FUN_003cd084(double param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  double dVar4;
  
  if (param_2 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/params.c",0x4be,"OSSL_PARAM_set_double");
    FUN_00379a5c(0xf,0xc0102,0);
    return 0;
  }
  iVar1 = *(int *)(param_2 + 8);
  *(undefined8 *)(param_2 + 0x20) = 0;
  if (iVar1 == 1) {
    plVar3 = *(long **)(param_2 + 0x10);
    *(undefined8 *)(param_2 + 0x20) = 8;
    if (plVar3 != (long *)0x0) {
      if ((double)(long)param_1 == param_1) {
        if (*(long *)(param_2 + 0x18) == 8) {
          if ((param_1 < -9.223372036854776e+18 == NAN(param_1)) &&
             (param_1 < 9.223372036854776e+18)) {
            *plVar3 = (long)param_1;
            return 1;
          }
          FUN_00379868();
          uVar2 = 0x50b;
        }
        else {
          if (*(long *)(param_2 + 0x18) != 4) goto LAB_003cd290;
          if ((param_1 < -2147483648.0 == NAN(param_1)) && (param_1 <= 2147483647.0)) {
            *(int *)plVar3 = (int)param_1;
            *(undefined8 *)(param_2 + 0x20) = 4;
            return 1;
          }
          FUN_00379868();
          uVar2 = 0x4fd;
        }
        goto LAB_003cd394;
      }
      FUN_00379868();
      uVar2 = 0x4f3;
LAB_003cd18c:
      FUN_0037995c("crypto/params.c",uVar2,"OSSL_PARAM_set_double");
      FUN_00379a5c(0xf,0x7b,0);
      return 0;
    }
  }
  else if (iVar1 == 2) {
    plVar3 = *(long **)(param_2 + 0x10);
    *(undefined8 *)(param_2 + 0x20) = 8;
    if (plVar3 != (long *)0x0) {
      dVar4 = (double)NEON_ucvtf((long)param_1);
      if (dVar4 == param_1) {
        if (*(long *)(param_2 + 0x18) == 8) {
          if ((param_1 < 0.0 == NAN(param_1)) && (param_1 < 1.8446744073709552e+19)) {
            *plVar3 = (long)param_1;
            return 1;
          }
          FUN_00379868();
          uVar2 = 0x4eb;
        }
        else {
          if (*(long *)(param_2 + 0x18) != 4) goto LAB_003cd290;
          if ((param_1 < 0.0 == NAN(param_1)) && (param_1 <= 4294967295.0)) {
            *(int *)plVar3 = (int)param_1;
            *(undefined8 *)(param_2 + 0x20) = 4;
            return 1;
          }
          FUN_00379868();
          uVar2 = 0x4dd;
        }
LAB_003cd394:
        FUN_0037995c("crypto/params.c",uVar2,"OSSL_PARAM_set_double");
        FUN_00379a5c(0xf,0x7e,0);
        return 0;
      }
      FUN_00379868();
      uVar2 = 0x4d3;
      goto LAB_003cd18c;
    }
  }
  else {
    if (iVar1 != 3) {
LAB_003cd290:
      FUN_00379868();
      FUN_0037995c("crypto/params.c",0x50f,"OSSL_PARAM_set_double");
      FUN_00379a5c(0xf,0x81,0);
      return 0;
    }
    *(undefined8 *)(param_2 + 0x20) = 8;
    if (*(double **)(param_2 + 0x10) != (double *)0x0) {
      if (*(long *)(param_2 + 0x18) == 8) {
        **(double **)(param_2 + 0x10) = param_1;
        return 1;
      }
      FUN_00379868();
      FUN_0037995c("crypto/params.c",0x4cc,"OSSL_PARAM_set_double");
      FUN_00379a5c(0xf,0x82,0);
      return 0;
    }
  }
  return 1;
}


// ===== 003cd3b4  FUN_003cd3b4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003cd3b4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar2 = _UNK_00200768;
  uVar1 = _DAT_00200760;
  *(undefined4 *)(param_1 + 1) = 3;
  param_1[2] = param_3;
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  return;
}


// ===== 003cd3d4  FUN_003cd3d4 =====

undefined8 FUN_003cd3d4(long param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong local_18;
  
  local_18 = param_3;
  uVar2 = FUN_003cd484(param_1,param_2,&local_18,0,4);
  uVar1 = local_18;
  if ((int)uVar2 != 0) {
    uVar3 = *(ulong *)(param_1 + 0x18);
    if (local_18 <= uVar3) {
      uVar3 = FUN_003ca3d4(*(undefined8 *)(param_1 + 0x10));
    }
    if (uVar1 <= uVar3) {
      FUN_00379868();
      FUN_0037995c("crypto/params.c",0x562,"OSSL_PARAM_get_utf8_string");
      FUN_00379a5c(0xf,0x80,0);
      return 0;
    }
    uVar2 = 1;
    *(undefined1 *)(*param_2 + uVar3) = 0;
  }
  return uVar2;
}


// ===== 003cd484  FUN_003cd484 =====

undefined8 FUN_003cd484(long param_1,undefined8 *param_2,ulong *param_3,ulong *param_4,int param_5)

{
  undefined8 uVar1;
  void *__dest;
  ulong __n;
  ulong uVar2;
  
  if ((param_1 == 0) || (param_2 == (undefined8 *)0x0 && param_4 == (ulong *)0x0)) {
    FUN_00379868();
    uVar1 = 0x520;
  }
  else {
    if (*(int *)(param_1 + 8) != param_5) {
      FUN_00379868();
      FUN_0037995c("crypto/params.c",0x524,"get_string_internal");
      uVar1 = 0x81;
      goto LAB_003cd568;
    }
    __n = *(ulong *)(param_1 + 0x18);
    uVar2 = __n;
    if (param_5 == 4 || __n == 0) {
      uVar2 = __n + 1;
    }
    if (param_4 != (ulong *)0x0) {
      *param_4 = __n;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      if (param_2 == (undefined8 *)0x0) {
        return 1;
      }
      __dest = (void *)*param_2;
      if (__dest == (void *)0x0) {
        __dest = (void *)FUN_003c83a4(uVar2,"crypto/params.c",0x53b);
        if (__dest == (void *)0x0) {
          return 0;
        }
        *param_2 = __dest;
        *param_3 = uVar2;
      }
      else {
        uVar2 = *param_3;
      }
      if (__n <= uVar2) {
        memcpy(__dest,*(void **)(param_1 + 0x10),__n);
        return 1;
      }
      FUN_00379868();
      FUN_0037995c("crypto/params.c",0x544,"get_string_internal");
      uVar1 = 0x74;
      goto LAB_003cd568;
    }
    FUN_00379868();
    uVar1 = 0x533;
  }
  FUN_0037995c("crypto/params.c",uVar1,"get_string_internal");
  uVar1 = 0xc0102;
LAB_003cd568:
  FUN_00379a5c(0xf,uVar1,0);
  return 0;
}


// ===== 003cd608  FUN_003cd608 =====

void FUN_003cd608(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_18;
  
  local_18 = param_3;
  FUN_003cd484(param_1,param_2,&local_18,param_4,5);
  return;
}


// ===== 003cd630  FUN_003cd630 =====

undefined8 FUN_003cd630(long param_1,char *param_2)

{
  size_t sVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    FUN_00379868();
    uVar2 = 0x58a;
  }
  else {
    *(undefined8 *)(param_1 + 0x20) = 0;
    if (param_2 != (char *)0x0) {
      sVar1 = strlen(param_2);
      uVar2 = FUN_003cd6d0(param_1,param_2,sVar1,4);
      return uVar2;
    }
    FUN_00379868();
    uVar2 = 0x590;
  }
  FUN_0037995c("crypto/params.c",uVar2,"OSSL_PARAM_set_utf8_string");
  FUN_00379a5c(0xf,0xc0102,0);
  return 0;
}


// ===== 003cd6d0  FUN_003cd6d0 =====

undefined8 FUN_003cd6d0(long param_1,void *param_2,ulong param_3,int param_4)

{
  undefined8 uVar1;
  
  *(ulong *)(param_1 + 0x20) = param_3;
  if (*(void **)(param_1 + 0x10) == (void *)0x0) {
    return 1;
  }
  if (*(int *)(param_1 + 8) == param_4) {
    if (param_3 <= *(ulong *)(param_1 + 0x18)) {
      memcpy(*(void **)(param_1 + 0x10),param_2,param_3);
      if ((param_4 == 4) && (param_3 < *(ulong *)(param_1 + 0x18))) {
        *(undefined1 *)(*(long *)(param_1 + 0x10) + param_3) = 0;
      }
      return 1;
    }
    FUN_00379868();
    FUN_0037995c("crypto/params.c",0x57c,"set_string_internal");
    uVar1 = 0x74;
  }
  else {
    FUN_00379868();
    FUN_0037995c("crypto/params.c",0x578,"set_string_internal");
    uVar1 = 0x81;
  }
  FUN_00379a5c(0xf,uVar1,0);
  return 0;
}


// ===== 003cd7b8  FUN_003cd7b8 =====

undefined8 FUN_003cd7b8(long param_1,void *param_2,ulong param_3)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    FUN_00379868();
    uVar1 = 0x59a;
  }
  else {
    *(undefined8 *)(param_1 + 0x20) = 0;
    if (param_2 != (void *)0x0) {
      *(ulong *)(param_1 + 0x20) = param_3;
      if (*(void **)(param_1 + 0x10) != (void *)0x0) {
        if (*(int *)(param_1 + 8) != 5) {
          FUN_00379868();
          FUN_0037995c("crypto/params.c",0x578,"set_string_internal");
          FUN_00379a5c(0xf,0x81,0);
          return 0;
        }
        if (*(ulong *)(param_1 + 0x18) < param_3) {
          FUN_00379868();
          FUN_0037995c("crypto/params.c",0x57c,"set_string_internal");
          FUN_00379a5c(0xf,0x74,0);
          return 0;
        }
        memcpy(*(void **)(param_1 + 0x10),param_2,param_3);
      }
      return 1;
    }
    FUN_00379868();
    uVar1 = 0x5a0;
  }
  FUN_0037995c("crypto/params.c",uVar1,"OSSL_PARAM_set_octet_string");
  FUN_00379a5c(0xf,0xc0102,0);
  return 0;
}


// ===== 003cd8cc  FUN_003cd8cc =====

void FUN_003cd8cc(undefined8 *param_1,undefined8 param_2,char *param_3,size_t param_4)

{
  if ((param_3 != (char *)0x0) && (param_4 == 0)) {
    param_4 = strlen(param_3);
  }
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = 0xffffffffffffffff;
  return;
}


// ===== 003cd924  FUN_003cd924 =====

void FUN_003cd924(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 5;
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = 0xffffffffffffffff;
  return;
}


// ===== 003cd940  FUN_003cd940 =====

undefined8 FUN_003cd940(long param_1,undefined8 *param_2)

{
  if ((param_1 != 0) && (param_2 != (undefined8 *)0x0)) {
    if (*(int *)(param_1 + 8) == 6) {
      *param_2 = **(undefined8 **)(param_1 + 0x10);
      return 1;
    }
    FUN_00379868();
    FUN_0037995c("crypto/params.c",0x5bc,"get_ptr_internal");
    FUN_00379a5c(0xf,0x81,0);
    return 0;
  }
  FUN_00379868();
  FUN_0037995c("crypto/params.c",0x5b8,"get_ptr_internal");
  FUN_00379a5c(0xf,0xc0102,0);
  return 0;
}


// ===== 003cd9e8  FUN_003cd9e8 =====

undefined8 FUN_003cd9e8(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  if ((param_1 != 0) && (param_2 != (undefined8 *)0x0)) {
    if (*(int *)(param_1 + 8) == 7) {
      if (param_3 != (undefined8 *)0x0) {
        *param_3 = *(undefined8 *)(param_1 + 0x18);
      }
      *param_2 = **(undefined8 **)(param_1 + 0x10);
      return 1;
    }
    FUN_00379868();
    FUN_0037995c("crypto/params.c",0x5bc,"get_ptr_internal");
    FUN_00379a5c(0xf,0x81,0);
    return 0;
  }
  FUN_00379868();
  FUN_0037995c("crypto/params.c",0x5b8,"get_ptr_internal");
  FUN_00379a5c(0xf,0xc0102,0);
  return 0;
}


// ===== 003cda9c  FUN_003cda9c =====

undefined8 FUN_003cda9c(long param_1,char *param_2)

{
  size_t sVar1;
  
  if (param_1 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/params.c",0x5e0,"OSSL_PARAM_set_utf8_ptr");
    FUN_00379a5c(0xf,0xc0102,0);
    return 0;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (param_2 == (char *)0x0) {
    if (*(int *)(param_1 + 8) != 6) goto LAB_003cdb58;
    if (*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0) {
      **(undefined8 **)(param_1 + 0x10) = 0;
    }
  }
  else {
    sVar1 = strlen(param_2);
    *(size_t *)(param_1 + 0x20) = sVar1;
    if (*(int *)(param_1 + 8) != 6) {
LAB_003cdb58:
      FUN_00379868();
      FUN_0037995c("crypto/params.c",0x5d5,"set_ptr_internal");
      FUN_00379a5c(0xf,0x81,0);
      return 0;
    }
    if (*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0) {
      **(undefined8 **)(param_1 + 0x10) = param_2;
      return 1;
    }
  }
  return 1;
}


// ===== 003cdb94  FUN_003cdb94 =====

undefined8 FUN_003cdb94(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/params.c",0x5ec,"OSSL_PARAM_set_octet_ptr");
    FUN_00379a5c(0xf,0xc0102,0);
    return 0;
  }
  *(undefined8 *)(param_1 + 0x20) = param_3;
  if (*(int *)(param_1 + 8) == 7) {
    if (*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0) {
      **(undefined8 **)(param_1 + 0x10) = param_2;
    }
    return 1;
  }
  FUN_00379868();
  FUN_0037995c("crypto/params.c",0x5d5,"set_ptr_internal");
  FUN_00379a5c(0xf,0x81,0);
  return 0;
}


// ===== 003cdc3c  FUN_003cdc3c =====

void FUN_003cdc3c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 6;
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = 0xffffffffffffffff;
  return;
}


// ===== 003cdc58  FUN_003cdc58 =====

void FUN_003cdc58(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 7;
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = 0xffffffffffffffff;
  return;
}


// ===== 003cdc74  FUN_003cdc74 =====

undefined8 FUN_003cdc74(undefined8 *param_1,char *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  char *__s2;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if ((param_1 != (undefined8 *)0x0) && (param_2 != (char *)0x0)) {
    __s2 = (char *)*param_1;
    while (__s2 != (char *)0x0) {
      iVar1 = strcmp(param_2,__s2);
      if (iVar1 == 0) {
        local_48 = 0;
        uStack_40 = 0;
        if ((param_1[2] != 0) && (param_1[3] != 0)) {
          local_38 = 0;
          uVar2 = FUN_003cd484(param_1,&uStack_40,&local_38,&local_48,5);
          if ((int)uVar2 == 0) {
            return uVar2;
          }
        }
        FUN_003c893c(*param_3,*param_4,"crypto/params.c",0x617);
        *param_3 = uStack_40;
        *param_4 = local_48;
        return 1;
      }
      param_1 = param_1 + 5;
      __s2 = (char *)*param_1;
    }
  }
  return 0xffffffff;
}


// ===== 003cdd44  FUN_003cdd44 =====

undefined8
FUN_003cdd44(undefined8 *param_1,char *param_2,long *param_3,ulong *param_4,ulong param_5)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  char *__s2;
  ulong local_28;
  
  if ((param_1 != (undefined8 *)0x0) && (param_2 != (char *)0x0)) {
    __s2 = (char *)*param_1;
    while (__s2 != (char *)0x0) {
      iVar1 = strcmp(param_2,__s2);
      if (iVar1 == 0) {
        local_28 = 0;
        uVar2 = FUN_003cdea0(param_1,param_2,0,&local_28);
        if ((int)uVar2 == 0) {
          return uVar2;
        }
        if ((param_5 != 0) && (param_5 < local_28)) {
          return 0;
        }
        if (local_28 == 0) {
          lVar3 = FUN_003c8474(1,"crypto/params.c",0x651);
          if (lVar3 == 0) {
            return 0;
          }
        }
        else {
          lVar3 = FUN_003c83a4(local_28,"crypto/params.c",0x657);
          if (lVar3 == 0) {
            return 0;
          }
          iVar1 = FUN_003cdea0(param_1,param_2,lVar3,&local_28);
          if (iVar1 == 0) {
            FUN_003c893c(lVar3,local_28,"crypto/params.c",0x65d);
            return 0;
          }
        }
        FUN_003c893c(*param_3,*param_4,"crypto/params.c",0x662);
        *param_3 = lVar3;
        *param_4 = local_28;
        return 1;
      }
      param_1 = param_1 + 5;
      __s2 = (char *)*param_1;
    }
  }
  return 0xffffffff;
}


// ===== 003cdea0  FUN_003cdea0 =====

bool FUN_003cdea0(undefined8 *param_1,char *param_2,long param_3,undefined8 *param_4)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [56];
  
  if (param_3 == 0) {
    iVar2 = FUN_003ceae4(auStack_68,0);
  }
  else {
    iVar2 = FUN_003ce85c(auStack_68,param_3,*param_4,0);
  }
  if (iVar2 == 0) {
    return false;
  }
  if (param_1 == (undefined8 *)0x0) {
LAB_003cdf84:
    iVar2 = FUN_003cf2bc(auStack_68,param_4);
    if (iVar2 != 0) {
      iVar2 = FUN_003ceec8(auStack_68);
      bVar1 = iVar2 != 0;
      goto LAB_003cdfac;
    }
  }
  else if (param_2 == (char *)0x0) {
    if ((*(int *)(param_1 + 1) == 5) &&
       (((param_1[2] == 0 || (param_1[3] == 0)) || (iVar2 = FUN_003cf164(auStack_68), iVar2 != 0))))
    goto LAB_003cdf84;
  }
  else if (*(int *)(param_1 + 1) == 5) {
    do {
      if (((param_1[2] != 0) && (param_1[3] != 0)) && (iVar2 = FUN_003cf164(auStack_68), iVar2 == 0)
         ) goto LAB_003cdfa8;
      do {
        puVar3 = param_1;
        param_1 = puVar3 + 5;
        if ((char *)*param_1 == (char *)0x0) goto LAB_003cdf84;
        iVar2 = strcmp(param_2,(char *)*param_1);
      } while (iVar2 != 0);
      bVar1 = false;
    } while (*(int *)(puVar3 + 6) == 5);
    goto LAB_003cdfac;
  }
LAB_003cdfa8:
  bVar1 = false;
LAB_003cdfac:
  FUN_003cf324(auStack_68);
  return bVar1;
}


// ===== 003cdfcc  FUN_003cdfcc =====

void FUN_003cdfcc(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}


// ===== 003cdfdc  FUN_003cdfdc =====

undefined8 FUN_003cdfdc(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_0037f6d4();
  iVar1 = FUN_003cd940(param_1,param_2);
  FUN_0037f71c();
  if (iVar1 != 0) {
    return 1;
  }
  if ((param_1 == 0) || (param_2 == (undefined8 *)0x0)) {
    FUN_00379868();
    FUN_0037995c("crypto/params.c",0x673,"get_string_ptr_internal");
    uVar2 = 0xc0102;
  }
  else {
    if (*(int *)(param_1 + 8) == 4) {
      *param_2 = *(undefined8 *)(param_1 + 0x10);
      return 1;
    }
    FUN_00379868();
    FUN_0037995c("crypto/params.c",0x677,"get_string_ptr_internal");
    uVar2 = 0x81;
  }
  FUN_00379a5c(0xf,uVar2,0);
  return 0;
}


// ===== 003ce0c0  FUN_003ce0c0 =====

undefined8 FUN_003ce0c0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_0037f6d4();
  iVar1 = FUN_003cd9e8(param_1,param_2,param_3);
  FUN_0037f71c();
  if (iVar1 != 0) {
    return 1;
  }
  if ((param_1 == 0) || (param_2 == (undefined8 *)0x0)) {
    FUN_00379868();
    FUN_0037995c("crypto/params.c",0x673,"get_string_ptr_internal");
    uVar2 = 0xc0102;
  }
  else {
    if (*(int *)(param_1 + 8) == 5) {
      if (param_3 != (undefined8 *)0x0) {
        *param_3 = *(undefined8 *)(param_1 + 0x18);
      }
      *param_2 = *(undefined8 *)(param_1 + 0x10);
      return 1;
    }
    FUN_00379868();
    FUN_0037995c("crypto/params.c",0x677,"get_string_ptr_internal");
    uVar2 = 0x81;
  }
  FUN_00379a5c(0xf,uVar2,0);
  return 0;
}


// ===== 003ce1b8  FUN_003ce1b8 =====

/* WARNING: Removing unreachable block (ram,0x003ce220) */

undefined8 FUN_003ce1b8(void *param_1,ulong param_2,void *param_3,ulong param_4)

{
  long lVar1;
  char *pcVar2;
  
  lVar1 = param_4 - param_2;
  if (param_4 < param_2) {
    memset((void *)((long)param_1 + param_4),0,param_2 - param_4);
    memcpy(param_1,param_3,param_4);
    return 1;
  }
  if (lVar1 != 0) {
    pcVar2 = (char *)((long)param_3 + param_2);
    do {
      if (*pcVar2 != '\0') {
        FUN_00379868();
        FUN_0037995c("crypto/params.c",0x9b,"copy_integer");
        FUN_00379a5c(0xf,0x7e,0);
        return 0;
      }
      lVar1 = lVar1 + -1;
      pcVar2 = pcVar2 + 1;
    } while (lVar1 != 0);
  }
  memcpy(param_1,param_3,param_2);
  return 1;
}


// ===== 003ce2c4  FUN_003ce2c4 =====

ulong FUN_003ce2c4(long *param_1,ulong param_2,long *param_3)

{
  byte bVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (((param_2 == 0) || (param_1[5] == 0)) || ((ulong)(param_1[4] - param_1[3]) < param_2)) {
    return 0;
  }
  puVar2 = (ulong *)*param_1;
  if ((puVar2 != (ulong *)0x0) && (uVar4 = *puVar2, uVar4 - param_1[3] < param_2)) {
    if (uVar4 <= param_2) {
      uVar4 = param_2;
    }
    uVar5 = uVar4 * 2;
    if (uVar5 < 0x101) {
      uVar5 = 0x100;
    }
    if ((long)uVar4 < 0) {
      uVar5 = 0xffffffffffffffff;
    }
    uVar4 = FUN_00387ed0(puVar2,uVar5);
    if (uVar4 == 0) goto LAB_003ce3dc;
  }
  if (param_3 != (long *)0x0) {
    lVar3 = param_1[1];
    if ((lVar3 != 0) ||
       ((lVar3 = *param_1, lVar3 != 0 && (lVar3 = *(long *)(lVar3 + 8), lVar3 != 0)))) {
      if ((*(byte *)(param_1 + 6) & 1) == 0) {
        lVar3 = lVar3 + param_1[2];
        *param_3 = lVar3;
        bVar1 = *(byte *)(param_1 + 6);
      }
      else {
        lVar3 = (lVar3 + param_1[4]) - param_1[2];
        *param_3 = lVar3;
        bVar1 = *(byte *)(param_1 + 6);
      }
      if ((bVar1 & 1) == 0) goto LAB_003ce3c8;
      lVar3 = lVar3 - param_2;
    }
    *param_3 = lVar3;
  }
LAB_003ce3c8:
  uVar4 = 1;
  param_1[3] = param_1[3] + param_2;
  param_1[2] = param_1[2] + param_2;
LAB_003ce3dc:
  return uVar4 & 0xffffffff;
}


// ===== 003ce3f0  FUN_003ce3f0 =====

ulong FUN_003ce3f0(long *param_1,ulong param_2,long *param_3)

{
  byte bVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (((param_2 == 0) || (param_1[5] == 0)) || ((ulong)(param_1[4] - param_1[3]) < param_2)) {
    return 0;
  }
  puVar2 = (ulong *)*param_1;
  if ((puVar2 != (ulong *)0x0) && (uVar4 = *puVar2, uVar4 - param_1[3] < param_2)) {
    if (uVar4 <= param_2) {
      uVar4 = param_2;
    }
    uVar5 = uVar4 * 2;
    if (uVar5 < 0x101) {
      uVar5 = 0x100;
    }
    if ((long)uVar4 < 0) {
      uVar5 = 0xffffffffffffffff;
    }
    uVar4 = FUN_00387ed0(puVar2,uVar5);
    if (uVar4 == 0) goto LAB_003ce4f8;
  }
  if (param_3 != (long *)0x0) {
    lVar3 = param_1[1];
    if ((lVar3 != 0) ||
       ((lVar3 = *param_1, lVar3 != 0 && (lVar3 = *(long *)(lVar3 + 8), lVar3 != 0)))) {
      if ((*(byte *)(param_1 + 6) & 1) == 0) {
        lVar3 = lVar3 + param_1[2];
        *param_3 = lVar3;
        bVar1 = *(byte *)(param_1 + 6);
      }
      else {
        lVar3 = (lVar3 + param_1[4]) - param_1[2];
        *param_3 = lVar3;
        bVar1 = *(byte *)(param_1 + 6);
      }
      if ((bVar1 & 1) == 0) goto LAB_003ce4f4;
      lVar3 = lVar3 - param_2;
    }
    *param_3 = lVar3;
  }
LAB_003ce4f4:
  uVar4 = 1;
LAB_003ce4f8:
  return uVar4 & 0xffffffff;
}


// ===== 003ce50c  FUN_003ce50c =====

undefined8 FUN_003ce50c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_38 [8];
  
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (((param_4 == 0 || ((*(byte *)(param_1 + 0x30) & 1) == 0)) &&
      (puVar2 = (undefined8 *)FUN_003c8474(0x28,"crypto/packet.c",0x17b),
      puVar2 != (undefined8 *)0x0)))) {
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    lVar4 = *(long *)(param_1 + 0x18);
    *(undefined8 **)(param_1 + 0x28) = puVar2;
    *puVar2 = uVar5;
    puVar2[2] = param_4;
    puVar2[3] = lVar4 + param_4;
    if (param_4 == 0) {
      puVar2[1] = 0;
      uVar5 = FUN_003ce2c4(param_1,param_2,param_3);
      iVar1 = (int)uVar5;
    }
    else {
      puVar2[1] = lVar4;
      uVar5 = FUN_003ce2c4(param_1,param_4,auStack_38);
      if ((int)uVar5 == 0) {
        return uVar5;
      }
      uVar5 = FUN_003ce2c4(param_1,param_2,param_3);
      iVar1 = (int)uVar5;
    }
    if (iVar1 == 0) {
      return uVar5;
    }
    plVar3 = *(long **)(param_1 + 0x28);
    if (((plVar3 != (long *)0x0) && (*plVar3 != 0)) &&
       (iVar1 = FUN_003cec28(param_1,plVar3,1), iVar1 != 0)) {
      return 1;
    }
  }
  return 0;
}


// ===== 003ce610  FUN_003ce610 =====

undefined8 * FUN_003ce610(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_28 [8];
  
  if ((*(long *)(param_1 + 0x28) != 0) && ((param_2 == 0 || ((*(byte *)(param_1 + 0x30) & 1) == 0)))
     ) {
    puVar1 = (undefined8 *)FUN_003c8474(0x28,"crypto/packet.c",0x17b);
    if (puVar1 != (undefined8 *)0x0) {
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      lVar2 = *(long *)(param_1 + 0x18);
      *(undefined8 **)(param_1 + 0x28) = puVar1;
      *puVar1 = uVar3;
      puVar1[2] = param_2;
      puVar1[3] = lVar2 + param_2;
      if (param_2 == 0) {
        puVar1[1] = 0;
        return (undefined8 *)0x1;
      }
      puVar1[1] = lVar2;
      puVar1 = (undefined8 *)FUN_003ce2c4(param_1,param_2,auStack_28);
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}


// ===== 003ce6b8  FUN_003ce6b8 =====

undefined8 FUN_003ce6b8(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x28);
  if ((plVar2 != (long *)0x0) && (*plVar2 != 0)) {
    uVar1 = FUN_003cec28(param_1,plVar2,1);
    return uVar1;
  }
  return 0;
}


// ===== 003ce6d8  FUN_003ce6d8 =====

long FUN_003ce6d8(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  if ((lVar1 == 0) && ((*param_1 == 0 || (lVar1 = *(long *)(*param_1 + 8), lVar1 == 0)))) {
    return 0;
  }
  if ((*(byte *)(param_1 + 6) & 1) == 0) {
    return lVar1 + param_1[2];
  }
  return (lVar1 + param_1[4]) - param_1[2];
}


// ===== 003ce720  FUN_003ce720 =====

ulong FUN_003ce720(ulong *param_1,long param_2,ulong *param_3,long param_4)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  if ((param_4 != 0) && ((param_1[6] & 1) != 0)) {
    return 0;
  }
  uVar1 = param_4 + param_2;
  puVar2 = (ulong *)0x0;
  if ((uVar1 == 0) || (param_1[5] == 0)) {
LAB_003ce76c:
    return (ulong)puVar2 & 0xffffffff;
  }
  if (param_1[4] - param_1[3] < uVar1) {
    puVar2 = (ulong *)0x0;
    goto LAB_003ce76c;
  }
  puVar2 = (ulong *)*param_1;
  if ((puVar2 != (ulong *)0x0) && (uVar3 = *puVar2, uVar3 - param_1[3] < uVar1)) {
    if (uVar3 <= uVar1) {
      uVar3 = uVar1;
    }
    uVar4 = uVar3 * 2;
    if (uVar4 < 0x101) {
      uVar4 = 0x100;
    }
    if ((long)uVar3 < 0) {
      uVar4 = 0xffffffffffffffff;
    }
    puVar2 = (ulong *)FUN_00387ed0(puVar2,uVar4);
    if (puVar2 == (ulong *)0x0) goto LAB_003ce76c;
  }
  if (param_3 != (ulong *)0x0) {
    uVar3 = param_1[1];
    if (uVar3 == 0) {
      uVar3 = *param_1;
      if (uVar3 == 0) goto LAB_003ce82c;
      uVar3 = *(ulong *)(uVar3 + 8);
      if (uVar3 == 0) {
        uVar3 = 0;
        goto LAB_003ce82c;
      }
    }
    if ((param_1[6] & 1) == 0) {
      puVar2 = (ulong *)(uVar3 + param_1[2]);
    }
    else {
      puVar2 = (ulong *)((uVar3 + param_1[4]) - param_1[2]);
    }
    *param_3 = (ulong)puVar2;
    if ((param_1[6] & 1) != 0) {
      puVar2 = (ulong *)((long)puVar2 - uVar1);
      *param_3 = (ulong)puVar2;
    }
  }
  uVar3 = (long)puVar2 + param_4;
LAB_003ce82c:
  *param_3 = uVar3;
  return 1;
}


// ===== 003ce85c  FUN_003ce85c =====

long FUN_003ce85c(undefined8 *param_1,long param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  undefined1 auStack_28 [8];
  
  lVar3 = 0;
  if ((param_2 != 0) && (param_3 != 0)) {
    *param_1 = 0;
    param_1[1] = param_2;
    *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfe;
    uVar1 = ~(-1L << ((param_4 & 7) << 3)) + param_4;
    param_1[2] = 0;
    if (param_4 - 8 < 0xfffffffffffffff9) {
      uVar1 = 0xffffffffffffffff;
    }
    if (param_3 <= uVar1) {
      uVar1 = param_3;
    }
    param_1[3] = 0;
    param_1[4] = uVar1;
    lVar3 = FUN_003c8474(0x28,"crypto/packet.c",0x6e);
    param_1[5] = lVar3;
    if (lVar3 != 0) {
      if (param_4 != 0) {
        *(ulong *)(lVar3 + 0x10) = param_4;
        *(ulong *)(lVar3 + 0x18) = param_4;
        iVar2 = FUN_003ce2c4(param_1,param_4,auStack_28);
        if (iVar2 == 0) {
          FUN_003c86b4(param_1[5],"crypto/packet.c",0x78);
          param_1[5] = 0;
          return 0;
        }
        *(undefined8 *)(param_1[5] + 8) = 0;
      }
      lVar3 = 1;
    }
  }
  return lVar3;
}


// ===== 003ce940  FUN_003ce940 =====

bool FUN_003ce940(undefined8 *param_1,long param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  bVar1 = false;
  if ((param_2 != 0) && (param_3 != 0)) {
    *param_1 = 0;
    param_1[1] = param_2;
    param_1[3] = 0;
    param_1[4] = param_3;
    param_1[2] = 0;
    *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) | 1;
    lVar2 = FUN_003c8474(0x28,"crypto/packet.c",0x6e);
    bVar1 = lVar2 != 0;
    param_1[5] = lVar2;
  }
  return bVar1;
}


// ===== 003ce9a4  FUN_003ce9a4 =====

long FUN_003ce9a4(long *param_1,long param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  undefined1 auStack_28 [8];
  
  if (param_2 == 0) {
    return 0;
  }
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar2 = ~(-1L << ((param_3 & 7) << 3)) + param_3;
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfe;
  if (param_3 - 8 < 0xfffffffffffffff9) {
    lVar2 = -1;
  }
  param_1[3] = 0;
  param_1[4] = lVar2;
  lVar2 = FUN_003c8474(0x28,"crypto/packet.c",0x6e);
  param_1[5] = lVar2;
  if (lVar2 != 0) {
    if (param_3 != 0) {
      *(ulong *)(lVar2 + 0x10) = param_3;
      *(ulong *)(lVar2 + 0x18) = param_3;
      iVar1 = FUN_003ce2c4(param_1,param_3,auStack_28);
      if (iVar1 == 0) {
        FUN_003c86b4(param_1[5],"crypto/packet.c",0x78);
        param_1[5] = 0;
        return 0;
      }
      *(undefined8 *)(param_1[5] + 8) = 0;
    }
    lVar2 = 1;
  }
  return lVar2;
}


// ===== 003cea80  FUN_003cea80 =====

bool FUN_003cea80(long *param_1,long param_2)

{
  long lVar1;
  
  if (param_2 != 0) {
    *param_1 = param_2;
    param_1[1] = 0;
    param_1[3] = 0;
    param_1[4] = -1;
    param_1[2] = 0;
    *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfe;
    lVar1 = FUN_003c8474(0x28,"crypto/packet.c",0x6e);
    param_1[5] = lVar1;
    return lVar1 != 0;
  }
  return false;
}


// ===== 003ceae4  FUN_003ceae4 =====

bool FUN_003ceae4(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar1 = ~(-1L << ((param_2 & 7) << 3)) + param_2;
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfe;
  if (param_2 - 8 < 0xfffffffffffffff9) {
    lVar1 = -1;
  }
  param_1[3] = 0;
  param_1[4] = lVar1;
  lVar1 = FUN_003c8474(0x28,"crypto/packet.c",0x6e);
  param_1[5] = lVar1;
  return lVar1 != 0;
}


// ===== 003ceb5c  FUN_003ceb5c =====

bool FUN_003ceb5c(undefined8 *param_1)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = 0xffffffffffffffff;
  *param_1 = 0;
  param_1[1] = 0;
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) | 1;
  param_1[2] = 0;
  lVar1 = FUN_003c8474(0x28,"crypto/packet.c",0x6e);
  param_1[5] = lVar1;
  return lVar1 != 0;
}


// ===== 003cebb8  FUN_003cebb8 =====

undefined8 FUN_003cebb8(long param_1,undefined4 param_2)

{
  if (*(long *)(param_1 + 0x28) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x20) = param_2;
    return 1;
  }
  return 0;
}


// ===== 003cebd4  FUN_003cebd4 =====

undefined8 FUN_003cebd4(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x28);
  if (plVar2 == (long *)0x0) {
    return 0;
  }
  do {
    uVar1 = FUN_003cec28(param_1,plVar2,0);
    if ((int)uVar1 == 0) {
      return uVar1;
    }
    plVar2 = (long *)*plVar2;
  } while (plVar2 != (long *)0x0);
  return 1;
}


// ===== 003cec28  FUN_003cec28 =====

undefined8 FUN_003cec28(long *param_1,long *param_2,int param_3)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong *puVar6;
  byte *pbVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long local_28;
  
  uVar1 = param_1[3] - param_2[3];
  if (uVar1 == 0) {
    if ((*(uint *)(param_2 + 4) & 1) != 0) {
      return 0;
    }
    if ((*(uint *)(param_2 + 4) >> 1 & 1) != 0) {
      if (param_3 == 0) {
        return 0;
      }
      lVar4 = param_2[2];
      lVar8 = param_1[2] - lVar4;
      if (lVar8 == param_2[1]) {
        param_1[2] = lVar8;
        param_1[3] = param_1[3] - lVar4;
      }
      param_2[1] = 0;
      param_2[2] = 0;
    }
  }
  lVar4 = param_2[2];
  if (lVar4 != 0) {
    lVar8 = param_1[1];
    if ((lVar8 != 0) || ((*param_1 != 0 && (lVar8 = *(long *)(*param_1 + 8), lVar8 != 0)))) {
      lVar10 = param_2[1];
      do {
        uVar11 = uVar1;
        *(char *)(lVar10 + lVar8 + -1 + lVar4) = (char)uVar11;
        lVar4 = lVar4 + -1;
        uVar1 = uVar11 >> 8;
      } while (lVar4 != 0);
      if (0xff < uVar11) {
        return 0;
      }
    }
    goto LAB_003cee8c;
  }
  if (((*(byte *)(param_1 + 6) & 1) == 0) || (*param_2 == 0)) goto LAB_003cee8c;
  if (uVar1 == 0) {
    if ((*(byte *)(param_2 + 4) >> 1 & 1) != 0) goto LAB_003cee8c;
LAB_003ced2c:
    lVar4 = 1;
  }
  else {
    if (uVar1 < 0x100) goto LAB_003ced2c;
    uVar11 = 0;
    uVar9 = uVar1;
    do {
      uVar5 = uVar11;
      bVar2 = 0xffff < uVar9;
      uVar11 = uVar5 + 1;
      uVar9 = uVar9 >> 8;
    } while (bVar2);
    if (7 < uVar11) {
      return 0;
    }
    lVar4 = uVar5 + 2;
  }
  iVar3 = FUN_003ce2c4(param_1,lVar4,&local_28);
  if (iVar3 == 0) {
    return 0;
  }
  if (local_28 != 0) {
    lVar8 = lVar4;
    uVar11 = uVar1;
    do {
      uVar9 = uVar11;
      *(char *)(local_28 + -1 + lVar8) = (char)uVar9;
      lVar8 = lVar8 + -1;
      uVar11 = uVar9 >> 8;
    } while (lVar8 != 0);
    if (0xff < uVar9) {
      return 0;
    }
  }
  if (0x7f < uVar1) {
    if (param_1[5] == 0) {
      return 0;
    }
    uVar1 = param_1[3];
    if (param_1[4] == uVar1) {
      return 0;
    }
    puVar6 = (ulong *)*param_1;
    if ((puVar6 != (ulong *)0x0) && (*puVar6 == uVar1)) {
      if (uVar1 < 2) {
        uVar1 = 1;
      }
      uVar11 = uVar1 * 2;
      if (uVar11 < 0x101) {
        uVar11 = 0x100;
      }
      if ((long)uVar1 < 0) {
        uVar11 = 0xffffffffffffffff;
      }
      lVar8 = FUN_00387ed0(puVar6,uVar11);
      if (lVar8 == 0) {
        return 0;
      }
    }
    pbVar7 = (byte *)param_1[1];
    if ((pbVar7 != (byte *)0x0) ||
       ((pbVar7 = (byte *)*param_1, pbVar7 != (byte *)0x0 &&
        (pbVar7 = *(byte **)(pbVar7 + 8), pbVar7 != (byte *)0x0)))) {
      if ((*(byte *)(param_1 + 6) & 1) == 0) {
        pbVar7 = pbVar7 + param_1[2];
      }
      else {
        pbVar7 = pbVar7 + ~param_1[2] + param_1[4];
      }
    }
    param_1[3] = param_1[3] + 1;
    param_1[2] = param_1[2] + 1;
    if (pbVar7 != (byte *)0x0) {
      *pbVar7 = (byte)lVar4 | 0x80;
    }
  }
LAB_003cee8c:
  if (param_3 != 0) {
    param_1[5] = *param_2;
    FUN_003c86b4(param_2,"crypto/packet.c",0x139);
  }
  return 1;
}


// ===== 003ceec8  FUN_003ceec8 =====

undefined8 FUN_003ceec8(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x28);
  if (plVar2 == (long *)0x0) {
    return 0;
  }
  if (*plVar2 == 0) {
    uVar1 = FUN_003cec28(param_1,plVar2,1);
    if ((int)uVar1 != 0) {
      FUN_003c86b4(*(undefined8 *)(param_1 + 0x28),"crypto/packet.c",0x167);
      *(undefined8 *)(param_1 + 0x28) = 0;
      return 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 003cef34  FUN_003cef34 =====

ulong FUN_003cef34(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x28);
  if (uVar2 != 0) {
    puVar1 = (undefined8 *)FUN_003c8474(0x28,"crypto/packet.c",0x17b);
    if (puVar1 != (undefined8 *)0x0) {
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      *(undefined8 **)(param_1 + 0x28) = puVar1;
      puVar1[2] = 0;
      puVar1[3] = uVar3;
      *puVar1 = uVar4;
      puVar1[1] = 0;
    }
    uVar2 = (ulong)(puVar1 != (undefined8 *)0x0);
  }
  return uVar2 & 0xffffffff;
}


// ===== 003cef94  FUN_003cef94 =====

ulong FUN_003cef94(undefined8 param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long local_28;
  
  if (8 < param_3) {
    return 0;
  }
  uVar1 = FUN_003ce2c4(param_1,param_3,&local_28);
  if ((int)uVar1 != 0) {
    if (local_28 != 0) {
      uVar1 = param_2;
      if (param_3 != 0) {
        local_28 = local_28 + param_3;
        *(char *)(local_28 + -1) = (char)param_2;
        uVar1 = param_2 >> 8;
        if (param_3 != 1) {
          *(char *)(local_28 + -2) = (char)(param_2 >> 8);
          uVar1 = param_2 >> 0x10;
          if (param_3 != 2) {
            *(char *)(local_28 + -3) = (char)(param_2 >> 0x10);
            uVar1 = param_2 >> 0x18;
            if (param_3 != 3) {
              *(char *)(local_28 + -4) = (char)(param_2 >> 0x18);
              uVar1 = param_2 >> 0x20;
              if (param_3 != 4) {
                *(char *)(local_28 + -5) = (char)(param_2 >> 0x20);
                uVar1 = param_2 >> 0x28;
                if (param_3 != 5) {
                  *(char *)(local_28 + -6) = (char)(param_2 >> 0x28);
                  uVar1 = param_2 >> 0x30;
                  if (param_3 != 6) {
                    *(char *)(local_28 + -7) = (char)(param_2 >> 0x30);
                    uVar1 = param_2 >> 0x38;
                    if (param_3 != 7) {
                      *(char *)(local_28 + -8) = (char)(param_2 >> 0x38);
                      return 1;
                    }
                  }
                }
              }
            }
          }
        }
      }
      return (ulong)(uVar1 == 0);
    }
    uVar1 = 1;
  }
  return uVar1;
}


// ===== 003cf0a0  FUN_003cf0a0 =====

undefined8 FUN_003cf0a0(long param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  
  plVar3 = *(long **)(param_1 + 0x28);
  if (*(long **)(param_1 + 0x28) != (long *)0x0) {
    do {
      plVar2 = plVar3;
      plVar3 = (long *)*plVar2;
    } while (plVar3 != (long *)0x0);
    uVar4 = plVar2[2];
    uVar1 = 8;
    if (uVar4 != 0) {
      uVar1 = uVar4;
    }
    if (((7 < uVar1) || (param_2 <= uVar1 + ~(-1L << ((uVar1 & 7) << 3)))) &&
       (*(ulong *)(param_1 + 0x18) <= param_2)) {
      *(ulong *)(param_1 + 0x20) = param_2;
      return 1;
    }
  }
  return 0;
}


// ===== 003cf108  FUN_003cf108 =====

undefined8 FUN_003cf108(undefined8 param_1,int param_2,size_t param_3)

{
  undefined8 uVar1;
  void *local_28;
  
  if (param_3 != 0) {
    uVar1 = FUN_003ce2c4(param_1,param_3,&local_28);
    if ((int)uVar1 != 0) {
      if (local_28 != (void *)0x0) {
        memset(local_28,param_2,param_3);
      }
      uVar1 = 1;
    }
    return uVar1;
  }
  return 1;
}


// ===== 003cf164  FUN_003cf164 =====

undefined8 FUN_003cf164(undefined8 param_1,void *param_2,size_t param_3)

{
  undefined8 uVar1;
  void *local_28;
  
  if (param_3 != 0) {
    uVar1 = FUN_003ce2c4(param_1,param_3,&local_28);
    if ((int)uVar1 != 0) {
      if (local_28 != (void *)0x0) {
        memcpy(local_28,param_2,param_3);
      }
      uVar1 = 1;
    }
    return uVar1;
  }
  return 1;
}


// ===== 003cf1c0  FUN_003cf1c0 =====

undefined8 FUN_003cf1c0(long param_1,void *param_2,size_t param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  void *local_38;
  
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (((param_4 == 0 || ((*(byte *)(param_1 + 0x30) & 1) == 0)) &&
      (puVar2 = (undefined8 *)FUN_003c8474(0x28,"crypto/packet.c",0x17b),
      puVar2 != (undefined8 *)0x0)))) {
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    lVar4 = *(long *)(param_1 + 0x18);
    *(undefined8 **)(param_1 + 0x28) = puVar2;
    *puVar2 = uVar5;
    puVar2[2] = param_4;
    puVar2[3] = lVar4 + param_4;
    if (param_4 == 0) {
      puVar2[1] = 0;
    }
    else {
      puVar2[1] = lVar4;
      uVar5 = FUN_003ce2c4(param_1,param_4,&local_38);
      if ((int)uVar5 == 0) {
        return uVar5;
      }
    }
    if (param_3 != 0) {
      uVar5 = FUN_003ce2c4(param_1,param_3,&local_38);
      if ((int)uVar5 == 0) {
        return uVar5;
      }
      if (local_38 != (void *)0x0) {
        memcpy(local_38,param_2,param_3);
      }
    }
    plVar3 = *(long **)(param_1 + 0x28);
    if (((plVar3 != (long *)0x0) && (*plVar3 != 0)) &&
       (iVar1 = FUN_003cec28(param_1,plVar3,1), iVar1 != 0)) {
      return 1;
    }
  }
  return 0;
}


// ===== 003cf2bc  FUN_003cf2bc =====

undefined8 FUN_003cf2bc(long param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x18);
    return 1;
  }
  return 0;
}


// ===== 003cf2d8  FUN_003cf2d8 =====

undefined8 FUN_003cf2d8(long param_1,long *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_2 != (long *)0x0) && (*(long *)(param_1 + 0x28) != 0)) {
    uVar1 = 1;
    *param_2 = *(long *)(param_1 + 0x18) - *(long *)(*(long *)(param_1 + 0x28) + 0x18);
  }
  return uVar1;
}


// ===== 003cf304  FUN_003cf304 =====

bool FUN_003cf304(long *param_1)

{
  if (*param_1 != 0) {
    return false;
  }
  return param_1[1] == 0;
}


// ===== 003cf324  FUN_003cf324 =====

void FUN_003cf324(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)*(long *)(param_1 + 0x28);
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_003c86b4(plVar1,"crypto/packet.c",0x214);
    plVar1 = (long *)lVar2;
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}


// ===== 003cf374  FUN_003cf374 =====

ulong FUN_003cf374(long param_1)

{
  return param_1 + 7U >> 3;
}


// ===== 003cf380  FUN_003cf380 =====

void FUN_003cf380(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[2] = param_2;
  param_1[3] = param_3;
  *(undefined4 *)(param_1 + 1) = 0x7f;
  return;
}


// ===== 003cf394  FUN_003cf394 =====

/* WARNING: Type propagation algorithm not settling */

size_t * FUN_003cf394(long *param_1)

{
  long lVar1;
  int iVar2;
  size_t *psVar3;
  size_t sVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  size_t sVar9;
  size_t sVar10;
  undefined8 *__dest;
  size_t sVar11;
  size_t *psVar12;
  size_t *psVar13;
  size_t sVar14;
  size_t sVar15;
  long local_a0 [8];
  
  if (param_1 == (long *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/params_dup.c",0x6a,"OSSL_PARAM_dup");
    FUN_00379a5c(0xf,0xc0102,0);
LAB_003cf48c:
    psVar3 = (size_t *)0x0;
  }
  else {
    local_a0[1] = 0;
    local_a0[0] = 0;
    local_a0[3] = 0;
    local_a0[2] = 0;
    local_a0[5] = 0;
    local_a0[4] = 0;
    local_a0[7] = 0;
    local_a0[6] = 0;
    if (*param_1 == 0) {
      lVar6 = 0x28;
      psVar3 = (size_t *)FUN_003c8474(0x28,"crypto/params_dup.c",0x27);
    }
    else {
      lVar8 = 0;
      do {
        lVar6 = lVar8;
        iVar2 = FUN_003c9798(*(undefined8 *)((long)param_1 + lVar6 + 0x10));
        uVar5 = *(uint *)((long)param_1 + lVar6 + 8);
        if ((uVar5 & 0xfffffffe) == 6) {
          lVar8 = 8;
        }
        else {
          lVar8 = *(long *)((long)param_1 + lVar6 + 0x18);
        }
        lVar1 = 7;
        if (uVar5 == 4) {
          lVar1 = 8;
        }
        lVar7 = *(long *)((long)param_1 + lVar6 + 0x28);
        local_a0[(long)iVar2 * 4 + 2] =
             local_a0[(long)iVar2 * 4 + 2] + ((ulong)(lVar1 + lVar8) >> 3);
        lVar8 = lVar6 + 0x28;
      } while (lVar7 != 0);
      lVar6 = lVar6 + 0x50;
      psVar3 = (size_t *)FUN_003c8474(lVar6 + local_a0[2] * 8,"crypto/params_dup.c",0x27);
    }
    if (psVar3 == (size_t *)0x0) {
      return (size_t *)0x0;
    }
    local_a0[1] = (long)psVar3 + lVar6;
    if (local_a0[6] == 0) {
      sVar11 = 0;
      sVar4 = 0;
      lVar6 = *param_1;
    }
    else {
      sVar11 = local_a0[6] << 3;
      sVar4 = FUN_003c96b8(sVar11,"crypto/params_dup.c",0x27);
      if (sVar4 == 0) {
        FUN_003c86b4(psVar3,"crypto/params_dup.c",0x7e);
        goto LAB_003cf48c;
      }
      lVar6 = *param_1;
      local_a0[5] = sVar4;
    }
    psVar12 = psVar3;
    if (lVar6 != 0) {
      psVar13 = (size_t *)(param_1 + 3);
      do {
        iVar2 = FUN_003c9798(psVar13[-1]);
        sVar14 = *psVar13;
        sVar9 = psVar13[-1];
        sVar15 = psVar13[-3];
        sVar10 = psVar13[1];
        uVar5 = (uint)psVar13[-2];
        psVar12[1] = psVar13[-2];
        *psVar12 = sVar15;
        psVar12[3] = sVar14;
        psVar12[2] = sVar9;
        psVar12[4] = sVar10;
        __dest = (undefined8 *)local_a0[(long)iVar2 * 4 + 1];
        psVar12[2] = (size_t)__dest;
        if ((uVar5 & 0xfffffffe) == 6) {
          sVar10 = 8;
          *__dest = *(undefined8 *)psVar13[-1];
        }
        else {
          sVar10 = *psVar13;
          memcpy(__dest,(void *)psVar13[-1],sVar10);
          uVar5 = (uint)psVar13[-2];
        }
        sVar9 = psVar13[2];
        if (uVar5 == 4) {
          sVar10 = sVar10 + 1;
        }
        psVar12 = psVar12 + 5;
        psVar13 = psVar13 + 5;
        *(size_t *)((ulong)(local_a0 + (long)iVar2 * 4) | 8) =
             (long)__dest + (sVar10 + 7 & 0xfffffffffffffff8);
      } while (sVar9 != 0);
    }
    *psVar12 = 0;
    psVar12[2] = sVar4;
    psVar12[3] = sVar11;
    *(undefined4 *)(psVar12 + 1) = 0x7f;
  }
  return psVar3;
}


// ===== 003cf600  FUN_003cf600 =====

undefined8 * FUN_003cf600(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  ulong __nmemb;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  undefined8 **ppuVar13;
  undefined8 **ppuVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long local_850 [129];
  undefined8 *local_448 [129];
  
  plVar12 = local_850;
  if (param_1 == (long *)0x0 && param_2 == (long *)0x0) {
    uVar8 = 0x9d;
    uVar6 = 0xc0102;
LAB_003cf7c0:
    FUN_00379868();
    FUN_0037995c("crypto/params_dup.c",uVar8,"OSSL_PARAM_merge");
    FUN_00379a5c(0xf,uVar6,0);
    puVar7 = (undefined8 *)0x0;
  }
  else {
    if (param_1 == (long *)0x0) {
      __nmemb = 0;
LAB_003cf668:
      local_448[__nmemb] = (undefined8 *)0x0;
      if (param_2 != (long *)0x0) goto LAB_003cf674;
LAB_003cf6b4:
      uVar10 = 0;
LAB_003cf6b8:
      local_850[uVar10] = 0;
      if (uVar10 == 0 && __nmemb == 0) {
LAB_003cf7b8:
        uVar6 = 0x83;
        uVar8 = 0xaf;
        goto LAB_003cf7c0;
      }
    }
    else {
      if (*param_1 != 0) {
        uVar10 = 0;
        do {
          local_448[uVar10] = param_1;
          param_1 = param_1 + 5;
          __nmemb = uVar10 + 1;
          if (*param_1 == 0) break;
          bVar2 = uVar10 < 0x7f;
          uVar10 = __nmemb;
        } while (bVar2);
        goto LAB_003cf668;
      }
      __nmemb = 0;
      local_448[0] = (undefined8 *)0x0;
      if (param_2 == (long *)0x0) goto LAB_003cf6b4;
LAB_003cf674:
      if (*param_2 != 0) {
        uVar4 = 0;
        do {
          local_850[uVar4] = (long)param_2;
          param_2 = param_2 + 5;
          uVar10 = uVar4 + 1;
          if (*param_2 == 0) break;
          bVar2 = uVar4 < 0x7f;
          uVar4 = uVar10;
        } while (bVar2);
        goto LAB_003cf6b8;
      }
      uVar10 = 0;
      local_850[0] = 0;
      if (__nmemb == 0) goto LAB_003cf7b8;
    }
    qsort(local_448,__nmemb,8,FUN_003cf864);
    qsort(local_850,uVar10,8,FUN_003cf864);
    puVar7 = (undefined8 *)FUN_003c8474((uVar10 + __nmemb) * 0x28 + 0x28,"crypto/params_dup.c",0xb8)
    ;
    if (puVar7 != (undefined8 *)0x0) {
      puVar9 = puVar7;
      if (local_448[0] != (undefined8 *)0x0) {
        puVar5 = local_448[0];
        plVar12 = local_850;
        ppuVar13 = local_448;
        do {
          while( true ) {
            if ((undefined8 *)*plVar12 == (undefined8 *)0x0) {
              do {
                ppuVar13 = ppuVar13 + 1;
                puVar1 = puVar5 + 1;
                uVar15 = *puVar5;
                uVar17 = puVar5[3];
                uVar16 = puVar5[2];
                uVar8 = puVar5[4];
                puVar5 = *ppuVar13;
                puVar9[1] = *puVar1;
                *puVar9 = uVar15;
                puVar9[3] = uVar17;
                puVar9[2] = uVar16;
                puVar9[4] = uVar8;
                puVar9 = puVar9 + 5;
              } while (puVar5 != (undefined8 *)0x0);
              return puVar7;
            }
            iVar3 = FUN_003cab04(*puVar5,*(undefined8 *)*plVar12);
            if (iVar3 == 0) break;
            if (iVar3 < 1) {
              ppuVar14 = ppuVar13 + 1;
              puVar5 = *ppuVar13;
            }
            else {
              puVar5 = (undefined8 *)*plVar12;
              plVar12 = plVar12 + 1;
              ppuVar14 = ppuVar13;
            }
            uVar15 = puVar5[1];
            uVar8 = *puVar5;
            uVar17 = puVar5[3];
            uVar16 = puVar5[2];
            puVar9[4] = puVar5[4];
            puVar9[1] = uVar15;
            *puVar9 = uVar8;
            puVar9[3] = uVar17;
            puVar9[2] = uVar16;
            puVar5 = *ppuVar14;
            puVar9 = puVar9 + 5;
            ppuVar13 = ppuVar14;
            if (puVar5 == (undefined8 *)0x0) goto LAB_003cf814;
          }
          plVar11 = plVar12 + 1;
          puVar5 = (undefined8 *)*plVar12;
          uVar15 = puVar5[1];
          uVar8 = *puVar5;
          uVar17 = puVar5[3];
          uVar16 = puVar5[2];
          puVar9[4] = puVar5[4];
          puVar9[1] = uVar15;
          *puVar9 = uVar8;
          puVar9[3] = uVar17;
          puVar9[2] = uVar16;
          ppuVar13 = ppuVar13 + 1;
          puVar5 = *ppuVar13;
          puVar9 = puVar9 + 5;
          plVar12 = plVar11;
        } while (puVar5 != (undefined8 *)0x0);
      }
LAB_003cf814:
      puVar5 = (undefined8 *)*plVar12;
      do {
        plVar12 = plVar12 + 1;
        puVar1 = puVar5 + 4;
        uVar15 = puVar5[1];
        uVar8 = *puVar5;
        uVar17 = puVar5[3];
        uVar16 = puVar5[2];
        puVar5 = (undefined8 *)*plVar12;
        puVar9[4] = *puVar1;
        puVar9[1] = uVar15;
        *puVar9 = uVar8;
        puVar9[3] = uVar17;
        puVar9[2] = uVar16;
        puVar9 = puVar9 + 5;
      } while (puVar5 != (undefined8 *)0x0);
    }
  }
  return puVar7;
}


// ===== 003cf864  FUN_003cf864 =====

void FUN_003cf864(undefined8 *param_1,undefined8 *param_2)

{
  FUN_003cab04(*(undefined8 *)*param_1,*(undefined8 *)*param_2);
  return;
}


// ===== 003cf878  FUN_003cf878 =====

void FUN_003cf878(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_1 != 0) {
    puVar1 = (undefined8 *)(param_1 + -0x10);
    do {
      puVar2 = puVar1;
      puVar1 = puVar2 + 5;
    } while (puVar2[2] != 0);
    if (*(int *)(puVar2 + 3) == 0x7f) {
      FUN_003c9d0c(puVar2[4],puVar2[5],"crypto/params_dup.c",0xe9);
    }
    FUN_003c86b4(param_1,"crypto/params_dup.c",0xea);
    return;
  }
  return;
}


// ===== 003cf8e0  FUN_003cf8e0 =====

undefined8
FUN_003cf8e0(undefined8 *param_1,long param_2,char *param_3,char *param_4,ulong param_5,
            uint *param_6)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  size_t sVar4;
  byte *__dest;
  byte *pbVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long local_60;
  undefined8 local_58;
  
  local_60 = 0;
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = strncmp(param_3,"hex",3);
  lVar8 = 3;
  if (iVar1 != 0) {
    lVar8 = 0;
  }
  puVar3 = (undefined8 *)FUN_003cb19c(param_2,param_3 + lVar8);
  if (param_6 != (uint *)0x0) {
    *param_6 = (uint)(puVar3 != (undefined8 *)0x0);
  }
  if (puVar3 == (undefined8 *)0x0) goto LAB_003cfbc0;
  iVar2 = *(int *)(puVar3 + 1);
  if (iVar2 - 1U < 2) {
    if (iVar1 == 0) {
      iVar2 = FUN_003d0198(&local_60,param_4);
    }
    else {
      iVar2 = FUN_003d0520();
    }
    if ((iVar2 == 0) || (local_60 == 0)) goto LAB_003cfbc0;
    iVar2 = *(int *)(puVar3 + 1);
    if (iVar2 == 2) {
      iVar2 = FUN_003908c4();
      if (iVar2 != 0) {
        FUN_00379868();
        FUN_0037995c("crypto/params_from_text.c",0x3b,"prepare_from_text");
        uVar10 = 0x7a;
        goto LAB_003cfbb8;
      }
      iVar2 = *(int *)(puVar3 + 1);
    }
    if (((iVar2 == 1) && (iVar2 = FUN_003908c4(local_60), iVar2 != 0)) &&
       (iVar2 = FUN_0039928c(local_60,1), iVar2 == 0)) goto LAB_003cfbc0;
    iVar2 = FUN_0038f2c0(local_60);
    uVar7 = (ulong)iVar2;
    param_5 = puVar3[3];
    uVar6 = uVar7 + 8;
    if ((uVar7 & 7) != 0 || *(int *)(puVar3 + 1) != 1) {
      uVar6 = uVar7;
    }
    if (param_5 == 0) {
      param_5 = uVar6 + 7 >> 3;
    }
    else if (param_5 * 8 < uVar6) {
      FUN_00379868();
      FUN_0037995c("crypto/params_from_text.c",0x65,"prepare_from_text");
      uVar10 = 0x74;
      goto LAB_003cfbb8;
    }
  }
  else if (iVar2 == 4) {
    if (iVar1 == 0) {
      FUN_00379868();
      FUN_0037995c("crypto/params_from_text.c",0x6f,"prepare_from_text");
      uVar10 = 0x80106;
LAB_003cfbb8:
      FUN_00379a5c(0xf,uVar10,0);
      goto LAB_003cfbc0;
    }
    sVar4 = strlen(param_4);
    param_5 = sVar4 + 1;
  }
  else if (iVar2 == 5) {
    if (iVar1 == 0) {
      sVar4 = strlen(param_4);
      if ((sVar4 & 1) != 0) {
        FUN_00379868();
        FUN_0037995c("crypto/params_from_text.c",0x79,"prepare_from_text");
        uVar10 = 0x67;
        goto LAB_003cfbb8;
      }
      param_5 = sVar4 >> 1;
    }
  }
  else {
    param_5 = 0;
  }
  uVar6 = param_5;
  if (param_5 == 0 || param_5 - 1 == 0) {
    uVar6 = 1;
  }
  __dest = (byte *)FUN_003c8474(uVar6,"crypto/params_from_text.c",0xdb);
  lVar8 = local_60;
  if (__dest == (byte *)0x0) {
LAB_003cfbc0:
    FUN_0038f4f4(local_60);
    return 0;
  }
  if (param_5 == 0) goto LAB_003cfca8;
  iVar2 = *(int *)(puVar3 + 1);
  if (1 < iVar2 - 1U) {
    if (iVar2 == 4) {
      strncpy((char *)__dest,param_4,param_5);
      param_5 = param_5 - 1;
    }
    else if (iVar2 == 5) {
      if (iVar1 == 0) {
        local_58 = 0;
        iVar1 = thunk_FUN_003ca5d0(__dest,param_5,&local_58,param_4,0x3a);
        if (iVar1 == 0) {
          FUN_0038f4f4(local_60);
          FUN_003c86b4(__dest,"crypto/params_from_text.c",0xe2);
          return 0;
        }
      }
      else {
        memcpy(__dest,param_4,param_5);
      }
    }
    goto LAB_003cfca8;
  }
  FUN_0039017c(local_60,__dest,param_5 & 0xffffffff);
  if ((*(int *)(puVar3 + 1) != 1) || (iVar1 = FUN_003908c4(lVar8), iVar1 == 0)) goto LAB_003cfca8;
  uVar6 = param_5;
  pbVar5 = __dest;
  if (7 < param_5) {
    if (param_5 < 0x20) {
      uVar7 = 0;
    }
    else {
      uVar7 = param_5 & 0xffffffffffffffe0;
      pbVar5 = __dest + 0x10;
      uVar6 = uVar7;
      do {
        uVar11 = *(undefined8 *)(pbVar5 + -8);
        uVar10 = *(undefined8 *)(pbVar5 + -0x10);
        uVar13 = *(undefined8 *)(pbVar5 + 8);
        uVar12 = *(undefined8 *)pbVar5;
        uVar6 = uVar6 - 0x20;
        *(ulong *)(pbVar5 + -8) =
             CONCAT17(~(byte)((ulong)uVar11 >> 0x38),
                      CONCAT16(~(byte)((ulong)uVar11 >> 0x30),
                               CONCAT15(~(byte)((ulong)uVar11 >> 0x28),
                                        CONCAT14(~(byte)((ulong)uVar11 >> 0x20),
                                                 CONCAT13(~(byte)((ulong)uVar11 >> 0x18),
                                                          CONCAT12(~(byte)((ulong)uVar11 >> 0x10),
                                                                   CONCAT11(~(byte)((ulong)uVar11 >>
                                                                                   8),~(byte)uVar11)
                                                                  ))))));
        *(ulong *)(pbVar5 + -0x10) =
             CONCAT17(~(byte)((ulong)uVar10 >> 0x38),
                      CONCAT16(~(byte)((ulong)uVar10 >> 0x30),
                               CONCAT15(~(byte)((ulong)uVar10 >> 0x28),
                                        CONCAT14(~(byte)((ulong)uVar10 >> 0x20),
                                                 CONCAT13(~(byte)((ulong)uVar10 >> 0x18),
                                                          CONCAT12(~(byte)((ulong)uVar10 >> 0x10),
                                                                   CONCAT11(~(byte)((ulong)uVar10 >>
                                                                                   8),~(byte)uVar10)
                                                                  ))))));
        *(ulong *)(pbVar5 + 8) =
             CONCAT17(~(byte)((ulong)uVar13 >> 0x38),
                      CONCAT16(~(byte)((ulong)uVar13 >> 0x30),
                               CONCAT15(~(byte)((ulong)uVar13 >> 0x28),
                                        CONCAT14(~(byte)((ulong)uVar13 >> 0x20),
                                                 CONCAT13(~(byte)((ulong)uVar13 >> 0x18),
                                                          CONCAT12(~(byte)((ulong)uVar13 >> 0x10),
                                                                   CONCAT11(~(byte)((ulong)uVar13 >>
                                                                                   8),~(byte)uVar13)
                                                                  ))))));
        *(ulong *)pbVar5 =
             CONCAT17(~(byte)((ulong)uVar12 >> 0x38),
                      CONCAT16(~(byte)((ulong)uVar12 >> 0x30),
                               CONCAT15(~(byte)((ulong)uVar12 >> 0x28),
                                        CONCAT14(~(byte)((ulong)uVar12 >> 0x20),
                                                 CONCAT13(~(byte)((ulong)uVar12 >> 0x18),
                                                          CONCAT12(~(byte)((ulong)uVar12 >> 0x10),
                                                                   CONCAT11(~(byte)((ulong)uVar12 >>
                                                                                   8),~(byte)uVar12)
                                                                  ))))));
        pbVar5 = pbVar5 + 0x20;
      } while (uVar6 != 0);
      if (param_5 == uVar7) goto LAB_003cfca8;
      if ((param_5 & 0x18) == 0) {
        pbVar5 = __dest + uVar7;
        uVar6 = param_5 & 0x1f;
        goto LAB_003cfc94;
      }
    }
    uVar9 = param_5 & 0xfffffffffffffff8;
    uVar6 = param_5 & 7;
    lVar8 = uVar7 - uVar9;
    pbVar5 = __dest + uVar7;
    do {
      uVar10 = *(undefined8 *)pbVar5;
      lVar8 = lVar8 + 8;
      *(ulong *)pbVar5 =
           CONCAT17(~(byte)((ulong)uVar10 >> 0x38),
                    CONCAT16(~(byte)((ulong)uVar10 >> 0x30),
                             CONCAT15(~(byte)((ulong)uVar10 >> 0x28),
                                      CONCAT14(~(byte)((ulong)uVar10 >> 0x20),
                                               CONCAT13(~(byte)((ulong)uVar10 >> 0x18),
                                                        CONCAT12(~(byte)((ulong)uVar10 >> 0x10),
                                                                 CONCAT11(~(byte)((ulong)uVar10 >> 8
                                                                                 ),~(byte)uVar10))))
                                     )));
      pbVar5 = pbVar5 + 8;
    } while (lVar8 != 0);
    pbVar5 = __dest + uVar9;
    if (param_5 == uVar9) goto LAB_003cfca8;
  }
LAB_003cfc94:
  do {
    uVar6 = uVar6 - 1;
    *pbVar5 = ~*pbVar5;
    pbVar5 = pbVar5 + 1;
  } while (uVar6 != 0);
LAB_003cfca8:
  uVar11 = puVar3[1];
  uVar10 = *puVar3;
  param_1[2] = __dest;
  param_1[3] = param_5;
  param_1[1] = uVar11;
  *param_1 = uVar10;
  param_1[4] = 0xffffffffffffffff;
  FUN_0038f4f4(local_60);
  return 1;
}


// ===== 003cfce4  FUN_003cfce4 =====

void FUN_003cfce4(long *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  ulong uVar5;
  char *pcVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  
  iVar3 = FUN_0038f448();
  if (iVar3 != 0) {
    FUN_003ca2f4(&DAT_001e8c6a,"crypto/bn/bn_conv.c",0x18);
    return;
  }
  pcVar4 = (char *)FUN_003c83a4((long)(int)param_1[1] << 4 | 2,"crypto/bn/bn_conv.c",0x19);
  if (pcVar4 != (char *)0x0) {
    pcVar6 = pcVar4;
    if ((int)param_1[2] != 0) {
      pcVar6 = pcVar4 + 1;
      *pcVar4 = '-';
    }
    if (0 < (int)*(uint *)(param_1 + 1)) {
      uVar8 = 0;
      uVar5 = (ulong)*(uint *)(param_1 + 1);
      do {
        uVar7 = *(ulong *)(*param_1 + uVar5 * 8 + -8);
        if ((uVar8 == 0) && (uVar7 >> 0x38 == 0)) {
          uVar9 = uVar7 >> 0x30;
          pcVar4 = pcVar6;
          uVar10 = uVar9;
          if (uVar9 != 0) goto LAB_003cfe2c;
        }
        else {
          cVar2 = "0123456789ABCDEF"[uVar7 >> 0x38 & 0xf];
          *pcVar6 = "0123456789ABCDEF"[uVar7 >> 0x3c];
          pcVar6[1] = cVar2;
          uVar7 = *(ulong *)(*param_1 + uVar5 * 8 + -8);
          uVar9 = uVar7 >> 0x30;
          pcVar4 = pcVar6 + 2;
          uVar10 = uVar7 >> 0x30 & 0xff;
LAB_003cfe2c:
          cVar2 = "0123456789ABCDEF"[uVar10 >> 4];
          pcVar4[1] = "0123456789ABCDEF"[uVar9 & 0xf];
          pcVar6 = pcVar4 + 2;
          *pcVar4 = cVar2;
          uVar9 = 1;
          uVar7 = *(ulong *)(*param_1 + uVar5 * 8 + -8);
        }
        uVar10 = uVar7 >> 0x28 & 0xff;
        if (((uVar9 & 1) == 0) && ((int)uVar10 == 0)) {
          uVar10 = uVar7 >> 0x20 & 0xff;
          pcVar4 = pcVar6;
          if ((int)uVar10 != 0) goto LAB_003cfea0;
        }
        else {
          cVar2 = "0123456789ABCDEF"[uVar10 >> 4];
          pcVar6[1] = "0123456789ABCDEF"[uVar7 >> 0x28 & 0xf];
          *pcVar6 = cVar2;
          uVar7 = *(ulong *)(*param_1 + uVar5 * 8 + -8);
          uVar10 = uVar7 >> 0x20 & 0xff;
          pcVar4 = pcVar6 + 2;
LAB_003cfea0:
          cVar2 = "0123456789ABCDEF"[uVar10 >> 4];
          pcVar4[1] = "0123456789ABCDEF"[uVar7 >> 0x20 & 0xf];
          pcVar6 = pcVar4 + 2;
          *pcVar4 = cVar2;
          uVar10 = 1;
          uVar7 = *(ulong *)(*param_1 + uVar5 * 8 + -8);
        }
        uVar9 = uVar7 >> 0x18 & 0xff;
        if (((uVar10 & 1) == 0) && ((int)uVar9 == 0)) {
          uVar10 = uVar7 >> 0x10 & 0xff;
          pcVar4 = pcVar6;
          if ((int)uVar10 != 0) goto LAB_003cff18;
        }
        else {
          cVar2 = "0123456789ABCDEF"[uVar9 >> 4];
          pcVar6[1] = "0123456789ABCDEF"[uVar7 >> 0x18 & 0xf];
          *pcVar6 = cVar2;
          uVar7 = *(ulong *)(*param_1 + uVar5 * 8 + -8);
          uVar10 = uVar7 >> 0x10 & 0xff;
          pcVar4 = pcVar6 + 2;
LAB_003cff18:
          cVar2 = "0123456789ABCDEF"[uVar10 >> 4];
          pcVar4[1] = "0123456789ABCDEF"[uVar7 >> 0x10 & 0xf];
          pcVar6 = pcVar4 + 2;
          *pcVar4 = cVar2;
          uVar10 = 1;
          uVar7 = *(ulong *)(*param_1 + uVar5 * 8 + -8);
        }
        uVar8 = (uint)uVar7 >> 8 & 0xff;
        if (((uVar10 & 1) == 0) && (uVar8 == 0)) {
          uVar8 = (uint)uVar7 & 0xff;
          pcVar4 = pcVar6;
          if ((uVar7 & 0xff) != 0) goto LAB_003cfd9c;
        }
        else {
          cVar2 = "0123456789ABCDEF"[uVar7 >> 8 & 0xf];
          *pcVar6 = "0123456789ABCDEF"[uVar8 >> 4];
          pcVar6[1] = cVar2;
          pcVar4 = pcVar6 + 2;
          uVar7 = *(ulong *)(*param_1 + uVar5 * 8 + -8);
          uVar8 = (uint)uVar7 & 0xff;
LAB_003cfd9c:
          pcVar6 = pcVar4 + 2;
          cVar2 = "0123456789ABCDEF"[uVar8 >> 4];
          pcVar4[1] = "0123456789ABCDEF"[uVar7 & 0xf];
          *pcVar4 = cVar2;
          uVar8 = 1;
        }
        bVar1 = 1 < uVar5;
        uVar5 = uVar5 - 1;
      } while (bVar1);
    }
    *pcVar6 = '\0';
  }
  return;
}


// ===== 003cff6c  FUN_003cff6c =====

undefined2 * FUN_003cff6c(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined2 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  
  iVar1 = FUN_0038f2c0();
  iVar1 = (iVar1 * 3) / 10 + (iVar1 * 3) / 1000;
  uVar2 = (iVar1 + 2) / 0x13 + 1;
  puVar3 = (undefined8 *)
           FUN_003c83a4(-(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3,
                        "crypto/bn/bn_conv.c",0x45);
  lVar7 = (long)(iVar1 + 5);
  puVar4 = (undefined2 *)FUN_003c83a4(lVar7,"crypto/bn/bn_conv.c",0x46);
  if (puVar4 == (undefined2 *)0x0 || puVar3 == (undefined8 *)0x0) {
    lVar6 = 0;
  }
  else {
    lVar6 = FUN_0038f720(param_1);
    if (lVar6 != 0) {
      iVar1 = FUN_0038f448(lVar6);
      if (iVar1 == 0) {
        iVar1 = FUN_003908c4(lVar6);
        puVar9 = puVar4;
        if (iVar1 != 0) {
          puVar9 = (undefined2 *)((long)puVar4 + 1);
          *(undefined1 *)puVar4 = 0x2d;
        }
        iVar1 = FUN_0038f448(lVar6);
        puVar10 = puVar3;
        if (iVar1 == 0) {
          lVar11 = 0;
          do {
            if ((long)(int)uVar2 <= lVar11 >> 3) goto LAB_003d0148;
            lVar5 = FUN_00399138(lVar6,10000000000000000000);
            *(long *)((long)puVar3 + lVar11) = lVar5;
            if (lVar5 == -1) goto LAB_003d0148;
            iVar1 = FUN_0038f448(lVar6);
            lVar11 = lVar11 + 8;
          } while (iVar1 == 0);
          puVar10 = (undefined8 *)((long)puVar3 + lVar11);
        }
        puVar10 = puVar10 + -1;
        uVar2 = FUN_0037cd5c(puVar9,(undefined1 *)((long)puVar4 + (lVar7 - (long)puVar9)),
                             &DAT_001c1141,*puVar10);
        if ((int)uVar2 < 0) goto LAB_003d0148;
        if (puVar10 != puVar3) {
          puVar8 = (undefined1 *)((long)puVar9 + (ulong)uVar2);
          do {
            puVar10 = puVar10 + -1;
            uVar2 = FUN_0037cd5c(puVar8,(undefined1 *)((long)puVar4 + (lVar7 - (long)puVar8)),
                                 "%019lu",*puVar10);
            if ((int)uVar2 < 0) goto LAB_003d0148;
            puVar8 = puVar8 + uVar2;
          } while (puVar10 != puVar3);
        }
      }
      else {
        *puVar4 = 0x30;
      }
      FUN_003c86b4(puVar3,"crypto/bn/bn_conv.c",0x71);
      FUN_0038f4f4(lVar6);
      return puVar4;
    }
  }
LAB_003d0148:
  FUN_003c86b4(puVar3,"crypto/bn/bn_conv.c",0x71);
  FUN_0038f4f4(lVar6);
  FUN_003c86b4(puVar4,"crypto/bn/bn_conv.c",0x75);
  return (undefined2 *)0x0;
}


// ===== 003d0198  FUN_003d0198 =====

ulong FUN_003d0198(long *param_1,byte *param_2)

{
  bool bVar1;
  long lVar2;
  byte bVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  byte *pbVar14;
  
  if (param_2 != (byte *)0x0) {
    bVar3 = *param_2;
    uVar9 = (ulong)bVar3;
    if (bVar3 == 0) goto LAB_003d02b0;
    if (bVar3 == 0x2d) {
      param_2 = param_2 + 1;
    }
    uVar8 = (uint)(bVar3 == 0x2d);
    uVar11 = 0;
    uVar6 = 0x3f;
    do {
      iVar5 = FUN_003c475c(param_2[uVar11],0x10);
      if (iVar5 == 0) {
        if ((uint)uVar11 == 0) break;
        uVar9 = uVar8 + uVar11;
        if (param_1 == (long *)0x0) goto LAB_003d02b0;
        plVar10 = (long *)*param_1;
        if (plVar10 == (long *)0x0) {
          plVar10 = (long *)FUN_0038f584();
          if (plVar10 == (long *)0x0) break;
        }
        else {
          iVar5 = FUN_0038f4e8(plVar10,2);
          if (iVar5 != 0) {
            FUN_00379868();
            FUN_0037995c("crypto/bn/bn_conv.c",0x9a,"BN_hex2bn");
            FUN_00379a5c(3,0x80106,0);
            break;
          }
          FUN_003907e0(plVar10);
        }
        if (((uint)uVar11 < 0x1ffffff1) &&
           (((int)(uVar6 >> 6) <= *(int *)((long)plVar10 + 0xc) ||
            (lVar7 = FUN_0038f5e4(plVar10), lVar7 != 0)))) {
          param_2 = param_2 + uVar11;
          lVar7 = 0;
          do {
            uVar13 = 0;
            uVar12 = uVar11;
            if (0xf < uVar11) {
              uVar12 = 0x10;
            }
            pbVar14 = param_2 + -uVar12;
            do {
              uVar6 = FUN_003ca5a0(*pbVar14);
              uVar4 = uVar12 & 0xfffffffe;
              uVar12 = uVar12 - 1;
              uVar13 = (ulong)(uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU)) | uVar13 << 4;
              pbVar14 = pbVar14 + 1;
            } while (uVar4 != 0);
            lVar2 = lVar7 + 1;
            uVar12 = uVar11 - 0x10;
            param_2 = param_2 + -0x10;
            *(ulong *)(*plVar10 + lVar7 * 8) = uVar13;
            bVar1 = 0xf < (long)uVar11;
            uVar11 = uVar12;
            lVar7 = lVar2;
          } while (uVar12 != 0 && bVar1);
          *(int *)(plVar10 + 1) = (int)lVar2;
          FUN_003903e8(plVar10);
          lVar7 = plVar10[1];
          *param_1 = (long)plVar10;
          if ((int)lVar7 != 0) {
            *(uint *)(plVar10 + 2) = uVar8;
          }
          goto LAB_003d02b0;
        }
        if (*param_1 == 0) {
          FUN_0038f4f4(plVar10);
        }
        break;
      }
      uVar11 = uVar11 + 1;
      uVar6 = uVar6 + 4;
    } while (uVar11 != 0x20000000);
  }
  uVar9 = 0;
LAB_003d02b0:
  return uVar9 & 0xffffffff;
}


// ===== 003d0368  FUN_003d0368 =====

ulong FUN_003d0368(long *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  
  if (param_2 != (byte *)0x0) {
    bVar1 = *param_2;
    uVar6 = (ulong)bVar1;
    if (bVar1 == 0) goto LAB_003d0418;
    if (bVar1 == 0x2d) {
      param_2 = param_2 + 1;
    }
    uVar5 = (uint)(bVar1 == 0x2d);
    uVar10 = 0;
    uVar8 = 0x3f;
    do {
      iVar3 = FUN_003c4784(param_2[uVar10]);
      if (iVar3 == 0) {
        uVar9 = (uint)uVar10;
        if (uVar9 != 0) {
          uVar6 = uVar5 + uVar10;
          if (param_1 == (long *)0x0) goto LAB_003d0418;
          lVar7 = *param_1;
          if (lVar7 == 0) {
            lVar7 = FUN_0038f584();
            if (lVar7 == 0) goto LAB_003d0414;
          }
          else {
            FUN_003907e0(lVar7);
          }
          if ((0x1ffffff0 < uVar9) ||
             ((*(int *)(lVar7 + 0xc) < (int)(uVar8 >> 6) &&
              (lVar4 = FUN_0038f5e4(lVar7), lVar4 == 0)))) goto LAB_003d0404;
          uVar11 = uVar10 + 1;
          lVar4 = 0;
          iVar2 = (int)(uVar10 / 0x13) * 0x13 - uVar9;
          iVar3 = 0;
          if (iVar2 != 0) {
            iVar3 = iVar2 + 0x13;
          }
          goto LAB_003d04c8;
        }
        break;
      }
      uVar10 = uVar10 + 1;
      uVar8 = uVar8 + 4;
    } while (uVar10 != 0x20000000);
    lVar7 = 0;
LAB_003d0404:
    if (*param_1 == 0) {
      FUN_0038f4f4(lVar7);
    }
  }
LAB_003d0414:
  uVar6 = 0;
  goto LAB_003d0418;
LAB_003d04c8:
  do {
    iVar3 = iVar3 + 1;
    lVar4 = (ulong)*param_2 + lVar4 * 10 + -0x30;
    if (iVar3 == 0x13) {
      iVar3 = FUN_003994ec(lVar7,10000000000000000000);
      if ((iVar3 == 0) || (iVar3 = FUN_0039928c(lVar7,lVar4), iVar3 == 0)) goto LAB_003d0404;
      lVar4 = 0;
      iVar3 = 0;
    }
    uVar8 = (int)uVar11 - 1;
    uVar11 = (ulong)uVar8;
    param_2 = param_2 + 1;
  } while (1 < uVar8);
  FUN_003903e8(lVar7);
  iVar3 = *(int *)(lVar7 + 8);
  *param_1 = lVar7;
  if (iVar3 != 0) {
    *(uint *)(lVar7 + 0x10) = uVar5;
  }
LAB_003d0418:
  return uVar6 & 0xffffffff;
}


// ===== 003d0520  FUN_003d0520 =====

undefined8 FUN_003d0520(long *param_1,char *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  
  pcVar1 = param_2;
  if (*param_2 == '-') {
    pcVar1 = param_2 + 1;
  }
  if ((*pcVar1 == '0') && ((byte)(pcVar1[1] | 0x20U) == 0x78)) {
    uVar3 = FUN_003d0198(param_1,pcVar1 + 2);
    iVar2 = (int)uVar3;
  }
  else {
    uVar3 = FUN_003d0368(param_1);
    iVar2 = (int)uVar3;
  }
  if (iVar2 != 0) {
    if (*param_2 != '-') {
      return 1;
    }
    uVar3 = 1;
    if (*(int *)(*param_1 + 8) != 0) {
      *(undefined4 *)(*param_1 + 0x10) = 1;
      return uVar3;
    }
  }
  return uVar3;
}


// ===== 003d05c4  FUN_003d05c4 =====

void FUN_003d05c4(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (*param_1 == 1) {
      FUN_003c893c(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_1 + 4),"crypto/passphrase.c",
                   0x15);
    }
    FUN_003c893c(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 10),"crypto/passphrase.c",
                 0x1d);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
  }
  return;
}


// ===== 003d0624  FUN_003d0624 =====

void FUN_003d0624(long param_1)

{
  FUN_003c893c(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),"crypto/passphrase.c"
               ,0x1d);
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}


// ===== 003d065c  FUN_003d065c =====

undefined8 FUN_003d065c(int *param_1,long param_2,long param_3)

{
  long lVar1;
  
  if ((param_1 == (int *)0x0) || (param_2 == 0)) {
    FUN_00379868();
    FUN_0037995c("crypto/passphrase.c",0x26,"ossl_pw_set_passphrase");
    FUN_00379a5c(0xf,0xc0102,0);
    return 0;
  }
  if (*param_1 == 1) {
    FUN_003c893c(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_1 + 4),"crypto/passphrase.c",
                 0x15);
  }
  FUN_003c893c(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 10),"crypto/passphrase.c",0x1d
              );
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  *param_1 = 1;
  if (param_3 == 0) {
    lVar1 = FUN_003c83a4(1,"crypto/passphrase.c",0x2d);
    *(long *)(param_1 + 2) = lVar1;
  }
  else {
    lVar1 = FUN_003ca404(param_2,param_3,"crypto/passphrase.c",0x2c);
    *(long *)(param_1 + 2) = lVar1;
  }
  if (lVar1 == 0) {
    return 0;
  }
  *(long *)(param_1 + 4) = param_3;
  return 1;
}


// ===== 003d0774  FUN_003d0774 =====

undefined8 FUN_003d0774(int *param_1,long param_2,undefined8 param_3)

{
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    if (*param_1 == 1) {
      FUN_003c893c(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_1 + 4),"crypto/passphrase.c",
                   0x15);
    }
    FUN_003c893c(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 10),"crypto/passphrase.c",
                 0x1d);
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *param_1 = 2;
    *(long *)(param_1 + 2) = param_2;
    *(undefined8 *)(param_1 + 4) = param_3;
    return 1;
  }
  FUN_00379868();
  FUN_0037995c("crypto/passphrase.c",0x38,"ossl_pw_set_pem_password_cb");
  FUN_00379a5c(0xf,0xc0102,0);
  return 0;
}


// ===== 003d083c  FUN_003d083c =====

undefined8 FUN_003d083c(int *param_1,long param_2,undefined8 param_3)

{
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    if (*param_1 == 1) {
      FUN_003c893c(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_1 + 4),"crypto/passphrase.c",
                   0x15);
    }
    FUN_003c893c(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 10),"crypto/passphrase.c",
                 0x1d);
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *param_1 = 3;
    *(long *)(param_1 + 2) = param_2;
    *(undefined8 *)(param_1 + 4) = param_3;
    return 1;
  }
  FUN_00379868();
  FUN_0037995c("crypto/passphrase.c",0x46,"ossl_pw_set_ossl_passphrase_cb");
  FUN_00379a5c(0xf,0xc0102,0);
  return 0;
}


// ===== 003d0904  FUN_003d0904 =====

undefined8 FUN_003d0904(int *param_1,long param_2,undefined8 param_3)

{
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    if (*param_1 == 1) {
      FUN_003c893c(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_1 + 4),"crypto/passphrase.c",
                   0x15);
    }
    FUN_003c893c(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 10),"crypto/passphrase.c",
                 0x1d);
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *param_1 = 4;
    *(long *)(param_1 + 2) = param_2;
    *(undefined8 *)(param_1 + 4) = param_3;
    return 1;
  }
  FUN_00379868();
  FUN_0037995c("crypto/passphrase.c",0x54,"ossl_pw_set_ui_method");
  FUN_00379a5c(0xf,0xc0102,0);
  return 0;
}


// ===== 003d09cc  FUN_003d09cc =====

undefined8 FUN_003d09cc(long param_1)

{
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 1;
  return 1;
}


// ===== 003d09e4  FUN_003d09e4 =====

undefined8 FUN_003d09e4(long param_1)

{
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xfe;
  return 1;
}


// ===== 003d09fc  FUN_003d09fc =====

ulong FUN_003d09fc(void *param_1,ulong param_2,size_t *param_3,undefined8 param_4,int param_5,
                  int *param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  size_t sVar8;
  void *pvVar9;
  ulong *puVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  void *local_70;
  
  if (*param_6 == 1) {
    pvVar9 = *(void **)(param_6 + 2);
    if (pvVar9 != (void *)0x0) {
      puVar10 = (ulong *)(param_6 + 4);
      goto LAB_003d0a54;
    }
LAB_003d0a98:
    lVar5 = FUN_003cb19c(param_4,&DAT_001b78fe);
    if (lVar5 == 0) {
      uVar12 = 0;
      iVar2 = *param_6;
      if (iVar2 == 4) goto LAB_003d0ad4;
LAB_003d0af8:
      if (iVar2 != 2) goto LAB_003d0c1c;
      lVar11 = FUN_0041018c(*(undefined8 *)(param_6 + 2),param_5);
      lVar5 = lVar11;
      if (lVar11 != 0) goto LAB_003d0b1c;
      FUN_00379868();
      FUN_0037995c("crypto/passphrase.c",0x10a,"ossl_pw_get_passphrase");
      pcVar7 = (char *)0x0;
      uVar1 = 0x80028;
    }
    else {
      if (*(int *)(lVar5 + 8) == 4) {
        uVar12 = *(undefined8 *)(lVar5 + 0x10);
        iVar2 = *param_6;
        if (iVar2 != 4) goto LAB_003d0af8;
LAB_003d0ad4:
        if (*(long *)(param_6 + 2) != 0) {
          lVar11 = 0;
          lVar5 = *(long *)(param_6 + 2);
LAB_003d0b1c:
          if (((param_1 == (void *)0x0) || (param_2 == 0)) || (param_3 == (size_t *)0x0)) {
            FUN_00379868();
            FUN_0037995c("crypto/passphrase.c",0x7e,"do_ui_passphrase");
            uVar1 = 0xc0102;
LAB_003d0d0c:
            FUN_00379a5c(0xf,uVar1,0);
            FUN_0040eb98(lVar11);
            return 0;
          }
          lVar14 = *(long *)(param_6 + 4);
          lVar6 = FUN_0040d7f0();
          if (lVar6 == 0) {
            FUN_00379868();
            FUN_0037995c("crypto/passphrase.c",0x83,"do_ui_passphrase");
            uVar1 = 0x80028;
            goto LAB_003d0d0c;
          }
          FUN_0040eaa0(lVar6,lVar5);
          if (lVar14 != 0) {
            FUN_0040e3f4(lVar6,lVar14);
          }
          lVar5 = FUN_0040e2a0(lVar6,"pass phrase",uVar12);
          if (lVar5 == 0) {
            FUN_00379868();
            FUN_0037995c("crypto/passphrase.c",0x90,"do_ui_passphrase");
            FUN_00379a5c(0xf,0x80028,0);
            pvVar9 = (void *)0x0;
            local_70 = (void *)0x0;
            uVar13 = 0;
          }
          else {
            pvVar9 = (void *)FUN_003c8474(param_2 + 1,"crypto/passphrase.c",0x95);
            local_70 = pvVar9;
            if (pvVar9 == (void *)0x0) {
LAB_003d0d6c:
              uVar13 = 0;
            }
            else {
              iVar2 = FUN_0040da28(lVar6,lVar5,2,pvVar9,0,param_2 & 0xffffffff);
              if (iVar2 < 1) {
                FUN_00379868();
                FUN_0037995c("crypto/passphrase.c",0x9d,"do_ui_passphrase");
                FUN_00379a5c(0xf,0x80028,0);
                local_70 = (void *)0x0;
                uVar13 = 0;
              }
              else {
                if (param_5 == 0) {
                  local_70 = (void *)0x0;
LAB_003d0db4:
                  iVar3 = FUN_0040e718(lVar6);
                  if (iVar3 == -1) {
                    FUN_00379868();
                    uVar12 = 0xb5;
                    goto LAB_003d0e5c;
                  }
                  if (iVar3 != -2) {
                    uVar4 = FUN_0040e62c(lVar6,iVar2 + -1);
                    if (-1 < (int)uVar4) {
                      *param_3 = (ulong)uVar4;
                      memcpy(param_1,pvVar9,(ulong)uVar4);
                      uVar13 = 1;
                      goto LAB_003d0e7c;
                    }
                    FUN_00379868();
                    uVar12 = 0xba;
                    goto LAB_003d0e5c;
                  }
                  FUN_00379868();
                  FUN_0037995c("crypto/passphrase.c",0xb2,"do_ui_passphrase");
                  uVar1 = 0x80109;
                }
                else {
                  local_70 = (void *)FUN_003c8474(param_2 + 1,"crypto/passphrase.c",0xa3);
                  if (local_70 == (void *)0x0) goto LAB_003d0d6c;
                  iVar3 = FUN_0040dc74(lVar6,lVar5,2,local_70,0,param_2 & 0xffffffff,pvVar9);
                  if (0 < iVar3) goto LAB_003d0db4;
                  FUN_00379868();
                  uVar12 = 0xab;
LAB_003d0e5c:
                  FUN_0037995c("crypto/passphrase.c",uVar12,"do_ui_passphrase");
                  uVar1 = 0x80028;
                }
                FUN_00379a5c(0xf,uVar1,0);
                uVar13 = 0;
              }
            }
          }
LAB_003d0e7c:
          FUN_003c893c(local_70,param_2 + 1,"crypto/passphrase.c",0xc4);
          FUN_003c893c(pvVar9,param_2 + 1,"crypto/passphrase.c",0xc5);
          FUN_003c86b4(lVar5,"crypto/passphrase.c",0xc6);
          FUN_0040d924(lVar6);
          FUN_0040eb98(lVar11);
          iVar2 = (int)uVar13;
          goto joined_r0x003d0ecc;
        }
LAB_003d0c1c:
        FUN_00379868();
        FUN_0037995c("crypto/passphrase.c",0x113,"ossl_pw_get_passphrase");
        pcVar7 = "No password method specified";
      }
      else {
        FUN_00379868();
        FUN_0037995c("crypto/passphrase.c",0xfa,"ossl_pw_get_passphrase");
        pcVar7 = "Prompt info data type incorrect";
      }
      uVar1 = 0x80106;
    }
    FUN_00379a5c(0xf,uVar1,pcVar7);
LAB_003d0c80:
    uVar13 = 0;
  }
  else {
    if (((*(byte *)(param_6 + 6) & 1) != 0) &&
       (pvVar9 = *(void **)(param_6 + 8), pvVar9 != (void *)0x0)) {
      puVar10 = (ulong *)(param_6 + 10);
LAB_003d0a54:
      sVar8 = *puVar10;
      if (param_2 <= *puVar10) {
        sVar8 = param_2;
      }
      memcpy(param_1,pvVar9,sVar8);
      *param_3 = sVar8;
      return 1;
    }
    if (*param_6 != 3) goto LAB_003d0a98;
    uVar13 = (**(code **)(param_6 + 2))
                       (param_1,param_2,param_3,param_4,*(undefined8 *)(param_6 + 4));
    iVar2 = (int)uVar13;
joined_r0x003d0ecc:
    if (iVar2 == 0) {
      return uVar13;
    }
    if ((*(byte *)(param_6 + 6) & 1) == 0) {
      return uVar13;
    }
    uVar13 = uVar13 & 0xffffffff;
    pvVar9 = *(void **)(param_6 + 8);
    if (pvVar9 == (void *)0x0) {
      pvVar9 = (void *)FUN_003c86d4(0,*(undefined8 *)(param_6 + 10),*param_3 + 1,
                                    "crypto/passphrase.c",0x124);
joined_r0x003d0f70:
      if (pvVar9 == (void *)0x0) {
        FUN_003c89b8(param_1,*param_3);
        goto LAB_003d0c80;
      }
      sVar8 = *param_3;
      *(void **)(param_6 + 8) = pvVar9;
    }
    else {
      sVar8 = *param_3;
      if (*(ulong *)(param_6 + 10) < sVar8) {
        pvVar9 = (void *)FUN_003c86d4(pvVar9,*(ulong *)(param_6 + 10),sVar8 + 1,
                                      "crypto/passphrase.c",0x124);
        goto joined_r0x003d0f70;
      }
    }
    memcpy(pvVar9,param_1,sVar8);
    *(undefined1 *)(*(long *)(param_6 + 8) + *param_3) = 0;
    *(size_t *)(param_6 + 10) = *param_3;
  }
  return uVar13;
}


// ===== 003d0f84  FUN_003d0f84 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_003d0f84(undefined8 param_1,int param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  undefined *local_70;
  undefined8 uStack_68;
  undefined *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_18;
  
  local_18 = 0;
  uStack_48 = _UNK_0076b820;
  local_50 = _DAT_0076b818;
  uStack_38 = _UNK_0076b830;
  uStack_40 = _DAT_0076b828;
  uStack_28 = _UNK_0076b840;
  local_30 = _DAT_0076b838;
  uStack_68 = _UNK_0076b800;
  local_70 = PTR_DAT_0076b7f8;
  uStack_58 = _UNK_0076b810;
  local_60 = &DAT_001d60f8;
  iVar1 = FUN_003d09fc(param_1,(long)param_2,&local_18,&local_70,param_3,param_4);
  if (iVar1 == 0) {
    local_18._0_4_ = 0xffffffff;
  }
  return (undefined4)local_18;
}


// ===== 003d0ff0  FUN_003d0ff0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_003d0ff0(undefined8 param_1,int param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  undefined *local_70;
  undefined8 uStack_68;
  undefined *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_18;
  
  local_18 = 0;
  uStack_48 = _UNK_0076b820;
  local_50 = _DAT_0076b818;
  uStack_38 = _UNK_0076b830;
  uStack_40 = _DAT_0076b828;
  uStack_28 = _UNK_0076b840;
  local_30 = _DAT_0076b838;
  uStack_68 = _UNK_0076b800;
  local_70 = PTR_DAT_0076b7f8;
  uStack_58 = _UNK_0076b810;
  local_60 = &DAT_001f98c0;
  iVar1 = FUN_003d09fc(param_1,(long)param_2,&local_18,&local_70,param_3,param_4);
  if (iVar1 == 0) {
    local_18._0_4_ = 0xffffffff;
  }
  return (undefined4)local_18;
}


// ===== 003d105c  FUN_003d105c =====

void FUN_003d105c(void)

{
  FUN_003d09fc();
  return;
}


// ===== 003d1068  FUN_003d1068 =====

void FUN_003d1068(void)

{
  FUN_003d09fc();
  return;
}


// ===== 003d1074  FUN_003d1074 =====

long FUN_003d1074(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  long lVar2;
  long local_28;
  
  lVar2 = FUN_003d2608(param_1,param_2,0);
  if (lVar2 == 0) {
    lVar2 = FUN_003d28d8(param_1,param_2,0,param_3,0);
    if (lVar2 == 0) {
      return 0;
    }
    iVar1 = FUN_003d31f4(lVar2,1,0);
    if (iVar1 == 0) goto LAB_003d1154;
    local_28 = lVar2;
    iVar1 = FUN_003d2c44(lVar2,&local_28,param_4);
    if (iVar1 == 0) {
      FUN_003d2e78(lVar2,1);
      goto LAB_003d1154;
    }
    if (local_28 == lVar2) {
      return local_28;
    }
    iVar1 = FUN_003d31f4(local_28,1,0);
    lVar2 = local_28;
  }
  else {
    iVar1 = FUN_003d31f4(lVar2,1,0);
  }
  if (iVar1 != 0) {
    return lVar2;
  }
LAB_003d1154:
  FUN_003d27b0(lVar2);
  return 0;
}


// ===== 003d1170  FUN_003d1170 =====

void FUN_003d1170(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_003d1074(param_1,param_2,0,param_3);
  return;
}


// ===== 003d117c  FUN_003d117c =====

undefined8 FUN_003d117c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_003d23d4();
  if (iVar1 != 0) {
    uVar2 = FUN_003d1074(param_1,param_2,param_3,0);
    return uVar2;
  }
  return 0;
}


// ===== 003d11d4  FUN_003d11d4 =====

undefined8 FUN_003d11d4(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_003d23d4();
  if (iVar1 != 0) {
    uVar2 = FUN_003d1074(param_1,param_2,0,0);
    return uVar2;
  }
  return 0;
}


// ===== 003d121c  FUN_003d121c =====

undefined8 FUN_003d121c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_003d2e78(param_1,1);
  if ((int)uVar1 != 0) {
    FUN_003d27b0(param_1);
    uVar1 = 1;
  }
  return uVar1;
}


// ===== 003d1250  thunk_FUN_003d40b0 =====

undefined8 thunk_FUN_003d40b0(long param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(param_1 + 0x78) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003d40bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x78))(*(undefined8 *)(param_1 + 0xd0));
    return uVar1;
  }
  return 0;
}


// ===== 003d1254  thunk_FUN_003d40c8 =====

undefined8 thunk_FUN_003d40c8(long param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(param_1 + 0x80) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003d40d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x80))(*(undefined8 *)(param_1 + 0xd0));
    return uVar1;
  }
  return 0;
}


// ===== 003d1258  thunk_FUN_003d4148 =====

undefined8 thunk_FUN_003d4148(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  
  if (*(code **)(param_1 + 0x98) != (code *)0x0) {
    uVar1 = (**(code **)(param_1 + 0x98))(*(undefined8 *)(param_1 + 0xd0));
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 1;
    }
    return uVar1;
  }
  return 0;
}


// ===== 003d125c  thunk_FUN_003d4188 =====

void thunk_FUN_003d4188(long param_1)

{
  if (*(code **)(param_1 + 0xa0) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003d4194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0xa0))(*(undefined8 *)(param_1 + 0xd0));
    return;
  }
  return;
}


// ===== 003d1260  thunk_FUN_003d408c =====

long thunk_FUN_003d408c(long param_1)

{
  if (param_1 != 0) {
    param_1 = *(long *)(param_1 + 0xd0);
  }
  return param_1;
}


// ===== 003d1264  thunk_FUN_003d4098 =====

long thunk_FUN_003d4098(long param_1)

{
  if (param_1 != 0) {
    param_1 = *(long *)(param_1 + 0xd8);
  }
  return param_1;
}


// ===== 003d1268  thunk_FUN_003d40e0 =====

undefined8 thunk_FUN_003d40e0(long param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(param_1 + 0x90) == (code *)0x0) {
    return 1;
  }
  uVar1 = (**(code **)(param_1 + 0x90))(*(undefined8 *)(param_1 + 0xd0));
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  FUN_003d3ae4(param_1);
  return 0;
}


// ===== 003d126c  thunk_FUN_003d4130 =====

undefined8 thunk_FUN_003d4130(long param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(param_1 + 0x88) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003d413c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x88))(*(undefined8 *)(param_1 + 0xd0));
    return uVar1;
  }
  return 1;
}


// ===== 003d1270  FUN_003d1270 =====

long FUN_003d1270(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  long local_48 [5];
  
  if ((param_2 != 0) && (param_3 != 0)) {
    local_48[2] = 0;
    local_48[1] = 0;
    local_48[4] = 0;
    local_48[3] = 0;
    local_48[0] = FUN_003ca2f4(param_2,"crypto/provider.c",0x88);
    if (local_48[0] != 0) {
      local_48[2] = param_3;
      iVar1 = FUN_003d2460(param_1,local_48);
      if (iVar1 == 0) {
        FUN_003d2118(local_48);
        return 0;
      }
      local_48[0] = 1;
    }
    return local_48[0];
  }
  FUN_00379868();
  FUN_0037995c("crypto/provider.c",0x84,"OSSL_PROVIDER_add_builtin");
  FUN_00379a5c(0xf,0xc0102,0);
  return 0;
}


// ===== 003d1340  thunk_FUN_003d406c =====

undefined8 thunk_FUN_003d406c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}


// ===== 003d1344  thunk_FUN_003d3c04 =====

undefined4 thunk_FUN_003d3c04(undefined8 param_1,code *param_2,undefined8 param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iStack_54;
  
  iStack_54 = 0;
  lVar5 = FUN_003b9c48(param_1,1);
  if (lVar5 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/provider_core.c",0x14d,"get_provider_store");
    FUN_00379a5c(0xf,0xc0103,0);
    uVar11 = 1;
  }
  else {
    iVar3 = FUN_003d3e84();
    if ((iVar3 == 0) || (iVar3 = FUN_003d517c(*(undefined8 *)(lVar5 + 0x20)), iVar3 == 0)) {
      uVar11 = 0;
    }
    else {
      lVar6 = FUN_0040bc8c(*(undefined8 *)(lVar5 + 8));
      if (lVar6 == 0) {
        FUN_003d519c(*(undefined8 *)(lVar5 + 0x20));
        uVar11 = 0;
      }
      else {
        uVar4 = FUN_0040caf8();
        uVar9 = uVar4;
        if ((int)uVar4 < 1) {
          uVar9 = 0;
          uVar10 = 1;
LAB_003d3d68:
          FUN_003d519c(*(undefined8 *)(lVar5 + 0x20));
        }
        else {
          do {
            uVar2 = uVar9 - 1;
            pbVar7 = (byte *)FUN_0040cb0c(lVar6,uVar2);
            iVar3 = FUN_003d517c(*(undefined8 *)(pbVar7 + 8));
            if (iVar3 == 0) {
LAB_003d3d08:
              uVar10 = 0;
              goto LAB_003d3d68;
            }
            if ((*pbVar7 >> 1 & 1) == 0) {
              FUN_0040c404(lVar6,uVar2);
              uVar4 = uVar4 - 1;
            }
            else {
              iStack_54 = *(int *)(pbVar7 + 0x10) + 1;
              *(int *)(pbVar7 + 0x10) = iStack_54;
              iVar3 = FUN_003d52bc(pbVar7 + 0x20,1,&iStack_54,*(undefined8 *)(pbVar7 + 0x18));
              if (iVar3 == 0) {
                iStack_54 = *(int *)(pbVar7 + 0x10) + -1;
                *(int *)(pbVar7 + 0x10) = iStack_54;
                FUN_003d519c(*(undefined8 *)(pbVar7 + 8));
                goto LAB_003d3d08;
              }
            }
            FUN_003d519c(*(undefined8 *)(pbVar7 + 8));
            bVar1 = 1 < uVar9;
            uVar9 = uVar2;
          } while (bVar1);
          FUN_003d519c(*(undefined8 *)(lVar5 + 0x20));
          if (0 < (int)uVar4) {
            uVar9 = 0;
            do {
              uVar8 = FUN_0040cb0c(lVar6,uVar9);
              iVar3 = (*param_2)(uVar8,param_3);
              if (iVar3 == 0) {
                uVar9 = 0;
                uVar10 = 0;
                goto LAB_003d3d70;
              }
              uVar9 = uVar9 + 1;
            } while (uVar4 != uVar9);
          }
          uVar9 = 0;
          uVar10 = 1;
        }
LAB_003d3d70:
        uVar11 = uVar10;
        if ((int)uVar9 < (int)uVar4) {
          do {
            while( true ) {
              lVar5 = FUN_0040cb0c(lVar6,uVar9);
              iVar3 = FUN_003d52bc(lVar5 + 0x20,0xffffffff,&iStack_54,*(undefined8 *)(lVar5 + 0x18))
              ;
              if (iVar3 == 0) break;
              if (iStack_54 < 1) {
                iVar3 = FUN_003d52bc(lVar5 + 0x20,1,&iStack_54,*(undefined8 *)(lVar5 + 0x18));
                if (iVar3 == 0) {
                  uVar10 = 0;
                }
                else {
                  FUN_003d3944(lVar5,0,1);
                }
              }
              iStack_54 = *(int *)(lVar5 + 0x10) + -1;
              *(int *)(lVar5 + 0x10) = iStack_54;
              uVar9 = uVar9 + 1;
              uVar11 = uVar10;
              if (uVar4 == uVar9) goto LAB_003d3e0c;
            }
            uVar10 = 0;
            uVar9 = uVar9 + 1;
            uVar11 = 0;
          } while (uVar4 != uVar9);
        }
LAB_003d3e0c:
        FUN_0040bd78(lVar6);
      }
    }
  }
  return uVar11;
}


// ===== 003d1348  FUN_003d1348 =====

void FUN_003d1348(void)

{
  FUN_003c8474(0x58,"crypto/provider_child.c",0x27);
  return;
}


// ===== 003d135c  FUN_003d135c =====

void FUN_003d135c(long param_1)

{
  FUN_003d51ac(*(undefined8 *)(param_1 + 0x10));
  FUN_003c86b4(param_1,"crypto/provider_child.c",0x2f);
  return;
}


// ===== 003d1390  FUN_003d1390 =====

undefined8 * FUN_003d1390(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  puVar2 = param_1;
  if ((param_1 == (undefined8 *)0x0) ||
     (puVar2 = (undefined8 *)FUN_003b9c48(param_1,0x12), puVar2 == (undefined8 *)0x0)) {
    return puVar2;
  }
  plVar5 = (long *)(param_3 + 8);
  *puVar2 = param_2;
  do {
    iVar1 = (int)plVar5[-1];
    if (iVar1 < 0x6c) {
      if (iVar1 < 0x6a) {
        plVar4 = puVar2 + 3;
        if ((iVar1 == 4) || (plVar4 = puVar2 + 4, iVar1 == 0x69)) {
LAB_003d13e8:
          *plVar4 = *plVar5;
        }
        else if (iVar1 == 0) {
          if ((((puVar2[3] != 0) && (puVar2[4] != 0)) && (puVar2[6] != 0)) &&
             (((puVar2[7] != 0 && (puVar2[8] != 0)) && ((puVar2[9] != 0 && (puVar2[10] != 0)))))) {
            lVar3 = FUN_003d5150();
            puVar2[2] = lVar3;
            if (lVar3 == 0) {
              return (undefined8 *)0x0;
            }
            iVar1 = (*(code *)puVar2[4])(*puVar2,FUN_003d1514,FUN_003d163c,FUN_003d16b4,param_1);
            return (undefined8 *)(ulong)(iVar1 != 0);
          }
          return (undefined8 *)0x0;
        }
      }
      else {
        plVar4 = puVar2 + 5;
        if ((iVar1 == 0x6a) || (plVar4 = puVar2 + 6, iVar1 == 0x6b)) goto LAB_003d13e8;
      }
    }
    else if (iVar1 < 0x6e) {
      plVar4 = puVar2 + 7;
      if ((iVar1 == 0x6c) || (plVar4 = puVar2 + 8, iVar1 == 0x6d)) goto LAB_003d13e8;
    }
    else {
      plVar4 = puVar2 + 9;
      if ((iVar1 == 0x6e) || (plVar4 = puVar2 + 10, iVar1 == 0x6f)) goto LAB_003d13e8;
    }
    plVar5 = plVar5 + 2;
  } while( true );
}


// ===== 003d1514  FUN_003d1514 =====

undefined4 FUN_003d1514(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  
  lVar2 = FUN_003b9c48(param_2,0x12);
  if ((lVar2 == 0) || (iVar1 = FUN_003d518c(*(undefined8 *)(lVar2 + 0x10)), iVar1 == 0)) {
    return 0;
  }
  uVar3 = (**(code **)(lVar2 + 0x30))(param_1);
  *(undefined8 *)(lVar2 + 8) = param_1;
  lVar4 = FUN_003d2608(param_2,uVar3,1);
  if (lVar4 == 0) {
    lVar4 = FUN_003d28d8(param_2,uVar3,FUN_003d17e4,0,1);
    if (lVar4 != 0) {
      iVar1 = FUN_003d31f4(lVar4,0,0);
      if (iVar1 != 0) {
        iVar1 = FUN_003d433c(lVar4,param_1);
        if ((iVar1 != 0) && (iVar1 = FUN_003d2c44(lVar4,0,0), iVar1 != 0)) goto LAB_003d1590;
        FUN_003d2e78(lVar4,0);
      }
      FUN_003d27b0(lVar4);
    }
  }
  else {
    FUN_003d27b0();
    iVar1 = FUN_003d31f4(lVar4,0,1);
    if (iVar1 != 0) {
LAB_003d1590:
      uVar5 = 1;
      goto LAB_003d1620;
    }
  }
  uVar5 = 0;
LAB_003d1620:
  FUN_003d519c(*(undefined8 *)(lVar2 + 0x10));
  return uVar5;
}


// ===== 003d163c  FUN_003d163c =====

long FUN_003d163c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_003b9c48(param_2,0x12);
  if (lVar2 != 0) {
    uVar3 = (**(code **)(lVar2 + 0x30))(param_1);
    lVar2 = FUN_003d2608(param_2,uVar3,1);
    if (lVar2 != 0) {
      FUN_003d27b0();
      iVar1 = FUN_003d4330(lVar2);
      if ((iVar1 == 0) || (lVar2 = FUN_003d2e78(lVar2,1), (int)lVar2 != 0)) {
        lVar2 = 1;
      }
    }
  }
  return lVar2;
}


// ===== 003d16b4  FUN_003d16b4 =====

void FUN_003d16b4(undefined8 param_1,undefined8 param_2)

{
  FUN_00382e18(param_2,param_1,0,1);
  return;
}


// ===== 003d16cc  FUN_003d16cc =====

void FUN_003d16cc(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_003b9c48(param_1,0x12);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003d16f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)puVar1[5])(*puVar1);
    return;
  }
  return;
}


// ===== 003d16fc  FUN_003d16fc =====

long * FUN_003d16fc(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  
  uVar1 = FUN_003d40a4();
  plVar2 = (long *)FUN_003b9c48(uVar1,0x12);
  if (plVar2 != (long *)0x0) {
    lVar3 = FUN_003d4328(param_1);
    if (lVar3 != *plVar2) {
                    /* WARNING: Could not recover jumptable at 0x003d1750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar2 = (long *)(*(code *)plVar2[9])(lVar3,param_2);
      return plVar2;
    }
    plVar2 = (long *)0x1;
  }
  return plVar2;
}


// ===== 003d1768  FUN_003d1768 =====

long * FUN_003d1768(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar1 = FUN_003d40a4();
  plVar2 = (long *)FUN_003b9c48(uVar1,0x12);
  if (plVar2 != (long *)0x0) {
    lVar3 = FUN_003d4328(param_1);
    if (lVar3 != *plVar2) {
      UNRECOVERED_JUMPTABLE = (code *)plVar2[10];
      uVar1 = FUN_003d4328(param_1);
                    /* WARNING: Could not recover jumptable at 0x003d17cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar2 = (long *)(*UNRECOVERED_JUMPTABLE)(uVar1,param_2);
      return plVar2;
    }
    plVar2 = (long *)0x1;
  }
  return plVar2;
}


// ===== 003d17e4  FUN_003d17e4 =====

long FUN_003d17e4(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  
  pcVar3 = (code *)0x0;
  puVar4 = (undefined8 *)(param_2 + 8);
  do {
    if (*(int *)(puVar4 + -1) == 4) {
      pcVar3 = (code *)*puVar4;
    }
    else if (*(int *)(puVar4 + -1) == 0) {
      if (pcVar3 != (code *)0x0) {
        uVar1 = (*pcVar3)();
        lVar2 = FUN_003b9c48(uVar1,0x12);
        if (lVar2 != 0) {
          uVar1 = (**(code **)(lVar2 + 0x38))(*(undefined8 *)(lVar2 + 8));
          *param_4 = uVar1;
          uVar1 = (**(code **)(lVar2 + 0x40))(*(undefined8 *)(lVar2 + 8));
          lVar2 = 1;
          *param_3 = uVar1;
        }
        return lVar2;
      }
      return 0;
    }
    puVar4 = puVar4 + 2;
  } while( true );
}


// ===== 003d1888  FUN_003d1888 =====

long * FUN_003d1888(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)FUN_003c8474(0x10,"crypto/provider_conf.c",0x20);
  if (plVar1 != (long *)0x0) {
    lVar2 = FUN_003d5150();
    *plVar1 = lVar2;
    if (lVar2 == 0) {
      FUN_003c86b4(plVar1,"crypto/provider_conf.c",0x27);
      return (long *)0x0;
    }
  }
  return plVar1;
}


// ===== 003d18f0  FUN_003d18f0 =====

void FUN_003d18f0(undefined8 *param_1)

{
  FUN_0040ca6c(param_1[1],PTR_FUN_007a1ae0);
  FUN_003d51ac(*param_1);
  FUN_003c86b4(param_1,"crypto/provider_conf.c",0x37);
  return;
}


// ===== 003d1934  FUN_003d1934 =====

void FUN_003d1934(void)

{
  FUN_003bb08c("providers",FUN_003d194c,0);
  return;
}


// ===== 003d194c  FUN_003d194c =====

undefined8 FUN_003d194c(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  char *pcVar11;
  long lVar12;
  undefined8 *puVar13;
  char *pcVar14;
  char *__s;
  char *__s_00;
  char *pcVar15;
  long local_90;
  long lStack_88;
  undefined8 uStack_80;
  long local_78;
  undefined8 local_70;
  
  uVar7 = FUN_003bb260();
  lVar8 = FUN_003bb7d0(param_2,uVar7);
  if (lVar8 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/provider_conf.c",0x173,"provider_conf_init");
    FUN_00379a5c(0xf,0x69,0);
LAB_003d1ec4:
    uVar7 = 0;
  }
  else {
    iVar3 = FUN_0040caf8();
    if (0 < iVar3) {
      iVar3 = 0;
      do {
        lVar9 = FUN_0040cb0c(lVar8,iVar3);
        uVar10 = FUN_003bbf70(param_2);
        __s = *(char **)(lVar9 + 8);
        uVar7 = *(undefined8 *)(lVar9 + 0x10);
        pcVar11 = strchr(__s,0x2e);
        lVar9 = FUN_003bb7d0(param_2,uVar7);
        if (lVar9 == 0) {
          FUN_00379868();
          FUN_0037995c("crypto/provider_conf.c",0x124,"provider_conf_load");
          FUN_00379a5c(0xf,0x69,"section=%s not found",uVar7);
          goto LAB_003d1ec4;
        }
        if (pcVar11 != (char *)0x0) {
          __s = pcVar11 + 1;
        }
        iVar4 = FUN_0040caf8();
        if (iVar4 < 1) {
          pcVar11 = (char *)0x0;
          local_70 = 0;
          lStack_88 = 0;
          local_90 = 0;
          local_78 = 0;
          uStack_80 = 0;
          if (__s != (char *)0x0) {
LAB_003d1cb0:
            local_70 = 0;
            local_78 = 0;
            uStack_80 = 0;
            lStack_88 = 0;
            local_90 = 0;
            local_90 = FUN_003ca2f4(__s,"crypto/provider_conf.c",0x148);
            if ((local_90 != 0) && (pcVar11 != (char *)0x0)) goto LAB_003d1ce4;
            if (local_90 == 0) goto LAB_003d1d68;
          }
LAB_003d1d00:
          lVar9 = FUN_0040bf0c();
          if (lVar9 == 0) {
            iVar4 = -1;
          }
          else {
            iVar4 = FUN_003d1ee8(0,&local_90,0,uVar7,param_2,lVar9);
            FUN_0040bd78(lVar9);
            if ((0 < iVar4) && (lStack_88 != 0 || local_78 != 0)) {
              iVar4 = FUN_003d2460(uVar10,&local_90);
              goto LAB_003d1d74;
            }
          }
LAB_003d1d6c:
          FUN_003d2118(&local_90);
        }
        else {
          iVar4 = 0;
          bVar1 = false;
          bVar2 = false;
          pcVar14 = (char *)0x0;
          pcVar15 = __s;
          do {
            lVar12 = FUN_0040cb0c(lVar9,iVar4);
            __s_00 = *(char **)(lVar12 + 8);
            pcVar11 = strchr(__s_00,0x2e);
            __s = *(char **)(lVar12 + 0x10);
            if (pcVar11 != (char *)0x0) {
              __s_00 = pcVar11 + 1;
            }
            iVar5 = strcmp(__s_00,"identity");
            pcVar11 = pcVar14;
            if (iVar5 != 0) {
              iVar5 = strcmp(__s_00,"soft_load");
              if (iVar5 == 0) {
                bVar2 = true;
                __s = pcVar15;
              }
              else {
                iVar5 = strcmp(__s_00,"module");
                pcVar11 = __s;
                __s = pcVar15;
                if ((iVar5 != 0) &&
                   (iVar5 = strcmp(__s_00,"activate"), pcVar11 = pcVar14, iVar5 == 0)) {
                  bVar1 = true;
                }
              }
            }
            iVar4 = iVar4 + 1;
            iVar5 = FUN_0040caf8(lVar9);
            pcVar14 = pcVar11;
            pcVar15 = __s;
          } while (iVar4 < iVar5);
          if (!bVar1) {
            local_70 = 0;
            lStack_88 = 0;
            local_90 = 0;
            local_78 = 0;
            uStack_80 = 0;
            if (__s != (char *)0x0) goto LAB_003d1cb0;
            if (pcVar11 == (char *)0x0) goto LAB_003d1d00;
LAB_003d1ce4:
            lStack_88 = FUN_003ca2f4(pcVar11,"crypto/provider_conf.c",0x14d);
            if (lStack_88 != 0) goto LAB_003d1d00;
LAB_003d1d68:
            iVar4 = 0;
            goto LAB_003d1d6c;
          }
          puVar13 = (undefined8 *)FUN_003b9c48(uVar10,0x10);
          local_90 = 0;
          if ((puVar13 == (undefined8 *)0x0) || (iVar4 = FUN_003d518c(*puVar13), iVar4 == 0)) {
            FUN_00379868();
            FUN_0037995c("crypto/provider_conf.c",0xd3,"provider_conf_activate");
            FUN_00379a5c(0xf,0xc0103,0);
            iVar4 = -1;
          }
          else {
            lVar9 = puVar13[1];
            if ((lVar9 != 0) && (iVar4 = FUN_0040caf8(lVar9), 0 < iVar4)) {
              iVar5 = 0;
              do {
                FUN_0040cb0c(lVar9,iVar5);
                pcVar14 = (char *)thunk_FUN_003d406c();
                iVar6 = strcmp(pcVar14,__s);
                if (iVar6 == 0) {
                  iVar4 = 0;
                  goto LAB_003d1e4c;
                }
                iVar5 = iVar5 + 1;
              } while (iVar4 != iVar5);
            }
            iVar4 = FUN_003d23d4(uVar10);
            if (iVar4 == 0) {
              FUN_003d519c(*puVar13);
              FUN_00379868();
              FUN_0037995c("crypto/provider_conf.c",0xe0,"provider_conf_activate");
              FUN_00379a5c(0xf,0xc0103,0);
              iVar4 = -1;
            }
            else {
              lVar9 = FUN_003d2608(uVar10,__s,1);
              if ((lVar9 == 0) && (lVar9 = FUN_003d28d8(uVar10,__s,0,0,1), lVar9 == 0)) {
                FUN_003d519c(*puVar13);
                if (bVar2) {
                  FUN_0037a0bc();
                }
                iVar4 = -(uint)!bVar2;
              }
              else {
                if (pcVar11 != (char *)0x0) {
                  FUN_003d2eec(lVar9,pcVar11);
                }
                lVar12 = FUN_0040bf0c();
                if (lVar12 == 0) {
                  iVar4 = -1;
LAB_003d1e44:
                  FUN_003d27b0(lVar9);
                }
                else {
                  iVar4 = FUN_003d1ee8(lVar9,0,0,uVar7,param_2,lVar12);
                  FUN_0040bd78(lVar12);
                  if (iVar4 == 1) {
                    iVar4 = FUN_003d31f4(lVar9,1,0);
                    if (iVar4 != 0) {
                      iVar4 = FUN_003d2c44(lVar9,&local_90,0);
                      if (iVar4 == 0) {
                        FUN_003d2e78(lVar9,1);
                      }
                      else {
                        if ((local_90 == lVar9) || (iVar4 = FUN_003d31f4(local_90,1,0), iVar4 != 0))
                        {
                          lVar12 = puVar13[1];
                          if (lVar12 == 0) {
                            lVar12 = FUN_0040bf0c();
                            puVar13[1] = lVar12;
                            if (lVar12 != 0) goto LAB_003d1c2c;
                          }
                          else {
LAB_003d1c2c:
                            iVar4 = FUN_0040c89c(lVar12,local_90);
                            if (iVar4 != 0) {
                              iVar4 = 1;
                              goto LAB_003d1e4c;
                            }
                          }
                          FUN_003d2e78(local_90,1);
                        }
                        FUN_003d27b0(local_90);
                      }
                    }
                    iVar4 = 0;
                    goto LAB_003d1e44;
                  }
                  if (iVar4 < 1) goto LAB_003d1e44;
                }
LAB_003d1e4c:
                FUN_003d519c(*puVar13);
              }
            }
          }
        }
LAB_003d1d74:
        if (iVar4 < 0) goto LAB_003d1ec4;
        iVar3 = iVar3 + 1;
        iVar4 = FUN_0040caf8(lVar8);
      } while (iVar3 < iVar4);
    }
    uVar7 = 1;
  }
  return uVar7;
}


// ===== 003d1ee8  FUN_003d1ee8 =====

ulong FUN_003d1ee8(long param_1,undefined8 param_2,size_t param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  size_t sVar6;
  ulong uVar7;
  char acStack_260 [512];
  
  lVar4 = FUN_003bb7d0(param_5,param_4);
  if (lVar4 == 0) {
    if (param_1 == 0) {
      uVar7 = FUN_003d2af0(param_2,param_3,param_4);
      return uVar7;
    }
    uVar7 = FUN_003d2f58(param_1,param_3,param_4);
    return uVar7;
  }
  iVar1 = FUN_0040caf8(param_6);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      lVar5 = FUN_0040cb0c(param_6,iVar1);
      if (lVar5 == param_4) {
        FUN_00379868();
        FUN_0037995c("crypto/provider_conf.c",100,"provider_conf_params_internal");
        FUN_00379a5c(0xe,0x7e,0);
        goto LAB_003d20a4;
      }
      iVar1 = iVar1 + 1;
      iVar2 = FUN_0040caf8(param_6);
    } while (iVar1 < iVar2);
  }
  iVar1 = FUN_0040c89c(param_6,param_4);
  if (iVar1 == 0) {
LAB_003d20a4:
    uVar7 = 0xffffffff;
  }
  else {
    if (param_3 != 0) {
      FUN_003ca460(acStack_260,param_3,0x200);
      FUN_003ca4e8(acStack_260,&DAT_001c773b,0x200);
      param_3 = strlen(acStack_260);
    }
    iVar1 = FUN_0040caf8(lVar4);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        lVar5 = FUN_0040cb0c(lVar4,iVar1);
        sVar6 = strlen(*(char **)(lVar5 + 8));
        if (0x1ff < sVar6 + param_3) {
          FUN_0040ca00(param_6);
          return 0xffffffff;
        }
        acStack_260[param_3] = '\0';
        FUN_003ca4e8(acStack_260,*(undefined8 *)(lVar5 + 8),0x200);
        uVar3 = FUN_003d1ee8(param_1,param_2,acStack_260,*(undefined8 *)(lVar5 + 0x10),param_5,
                             param_6);
        if ((int)uVar3 < 0) {
          FUN_0040ca00(param_6);
          return (ulong)uVar3;
        }
        iVar1 = iVar1 + 1;
        iVar2 = FUN_0040caf8(lVar4);
      } while (iVar1 < iVar2);
    }
    FUN_0040ca00(param_6);
    uVar7 = 1;
  }
  return uVar7;
}


// ===== 003d2118  FUN_003d2118 =====

void FUN_003d2118(undefined8 *param_1)

{
  FUN_003c86b4(*param_1,"crypto/provider_core.c",0x118);
  FUN_003c86b4(param_1[1],"crypto/provider_core.c",0x119);
  FUN_0040ca6c(param_1[3],FUN_003d2168);
  return;
}


// ===== 003d2168  FUN_003d2168 =====

void FUN_003d2168(undefined8 *param_1)

{
  FUN_003c86b4(*param_1,"crypto/provider_core.c",0xfa);
  FUN_003c86b4(param_1[1],"crypto/provider_core.c",0xfb);
  FUN_003c86b4(param_1,"crypto/provider_core.c",0xfc);
  return;
}


// ===== 003d21b8  FUN_003d21b8 =====

void FUN_003d21b8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  
  if (param_1 != 0) {
    *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) | 2;
    FUN_003c86b4(*(undefined8 *)(param_1 + 0x28),"crypto/provider_core.c",0x125);
    FUN_0040ca6c(*(undefined8 *)(param_1 + 8),FUN_003d22c8);
    FUN_0040ca6c(*(undefined8 *)(param_1 + 0x10),FUN_003d2310);
    FUN_003d51ac(*(undefined8 *)(param_1 + 0x18));
    FUN_003d51ac(*(undefined8 *)(param_1 + 0x20));
    if (*(long *)(param_1 + 0x38) != 0) {
      lVar2 = 0;
      uVar3 = 0;
      do {
        puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar2);
        FUN_003c86b4(*puVar1,"crypto/provider_core.c",0x118);
        FUN_003c86b4(puVar1[1],"crypto/provider_core.c",0x119);
        FUN_0040ca6c(puVar1[3],FUN_003d2168);
        uVar3 = uVar3 + 1;
        lVar2 = lVar2 + 0x28;
      } while (uVar3 < *(ulong *)(param_1 + 0x38));
    }
    FUN_003c86b4(*(undefined8 *)(param_1 + 0x30),"crypto/provider_core.c",0x12f);
    FUN_003c86b4(param_1,"crypto/provider_core.c",0x130);
    return;
  }
  return;
}


// ===== 003d22c8  FUN_003d22c8 =====

void FUN_003d22c8(byte *param_1)

{
  int iVar1;
  
  if (((*param_1 >> 1 & 1) != 0) && (iVar1 = FUN_003d3944(param_1,1,1), iVar1 == 0)) {
    FUN_003d3ae4(param_1);
  }
  FUN_003d27b0(param_1);
  return;
}


// ===== 003d2310  FUN_003d2310 =====

void FUN_003d2310(undefined8 param_1)

{
  FUN_003c86b4(param_1,"crypto/provider_core.c",0xf4);
  return;
}


// ===== 003d2320  FUN_003d2320 =====

undefined8 * FUN_003d2320(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)FUN_003c8474(0x50,"crypto/provider_core.c",0x135);
  if (puVar1 != (undefined8 *)0x0) {
    lVar2 = FUN_0040bfd0(FUN_003d23c0);
    puVar1[1] = lVar2;
    if (lVar2 != 0) {
      lVar2 = FUN_003d5150();
      puVar1[3] = lVar2;
      if (lVar2 != 0) {
        lVar2 = FUN_0040bf0c();
        puVar1[2] = lVar2;
        if (lVar2 != 0) {
          lVar2 = FUN_003d5150();
          puVar1[4] = lVar2;
          if (lVar2 != 0) {
            *puVar1 = param_1;
            *(byte *)(puVar1 + 9) = *(byte *)(puVar1 + 9) | 1;
            return puVar1;
          }
        }
      }
    }
  }
  FUN_003d21b8(puVar1);
  return (undefined8 *)0x0;
}


// ===== 003d23c0  FUN_003d23c0 =====

int FUN_003d23c0(long *param_1,long *param_2)

{
  int iVar1;
  
  iVar1 = strcmp(*(char **)(*param_1 + 0x28),*(char **)(*param_2 + 0x28));
  return iVar1;
}


// ===== 003d23d4  FUN_003d23d4 =====

undefined8 FUN_003d23d4(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_003b9c48(param_1,1);
  if (lVar1 != 0) {
    uVar2 = FUN_003d518c(*(undefined8 *)(lVar1 + 0x20));
    if ((int)uVar2 != 0) {
      *(byte *)(lVar1 + 0x48) = *(byte *)(lVar1 + 0x48) & 0xfe;
      FUN_003d519c(*(undefined8 *)(lVar1 + 0x20));
      uVar2 = 1;
    }
    return uVar2;
  }
  FUN_00379868();
  FUN_0037995c("crypto/provider_core.c",0x14d,"get_provider_store");
  FUN_00379a5c(0xf,0xc0103,0);
  return 0;
}


// ===== 003d2460  FUN_003d2460 =====

ulong FUN_003d2460(undefined8 param_1,long *param_2)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar2 = FUN_003b9c48(param_1,1);
  if (lVar2 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/provider_core.c",0x14d,"get_provider_store");
    FUN_00379a5c(0xf,0xc0103,0);
    if (*param_2 != 0) {
      FUN_00379868();
      FUN_0037995c("crypto/provider_core.c",0x16d,"ossl_provider_info_add_to_store");
      uVar1 = 0xc0103;
      goto LAB_003d256c;
    }
  }
  else if (*param_2 != 0) {
    uVar3 = FUN_003d518c(*(undefined8 *)(lVar2 + 0x20));
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    lVar5 = *(long *)(lVar2 + 0x40);
    if (lVar5 == 0) {
      lVar4 = FUN_003c8474(400,"crypto/provider_core.c",0x175);
      *(long *)(lVar2 + 0x30) = lVar4;
      if (lVar4 == 0) {
LAB_003d25e8:
        uVar7 = 0;
        goto LAB_003d25ec;
      }
      *(undefined8 *)(lVar2 + 0x40) = 10;
    }
    else if (*(long *)(lVar2 + 0x38) == lVar5) {
      lVar4 = FUN_003c8558(*(undefined8 *)(lVar2 + 0x30),(lVar5 + 10) * 0x28,
                           "crypto/provider_core.c",0x17e);
      if (lVar4 == 0) goto LAB_003d25e8;
      *(long *)(lVar2 + 0x30) = lVar4;
      *(long *)(lVar2 + 0x40) = lVar5 + 10;
    }
    else {
      lVar4 = *(long *)(lVar2 + 0x30);
    }
    lVar10 = param_2[1];
    lVar9 = *param_2;
    lVar8 = param_2[3];
    lVar5 = param_2[2];
    plVar6 = (long *)(lVar4 + *(long *)(lVar2 + 0x38) * 0x28);
    uVar7 = 1;
    plVar6[4] = param_2[4];
    plVar6[1] = lVar10;
    *plVar6 = lVar9;
    plVar6[3] = lVar8;
    plVar6[2] = lVar5;
    *(long *)(lVar2 + 0x38) = *(long *)(lVar2 + 0x38) + 1;
LAB_003d25ec:
    FUN_003d519c(*(undefined8 *)(lVar2 + 0x20));
    return (ulong)uVar7;
  }
  FUN_00379868();
  FUN_0037995c("crypto/provider_core.c",0x168,"ossl_provider_info_add_to_store");
  uVar1 = 0xc0102;
LAB_003d256c:
  FUN_00379a5c(0xf,uVar1,0);
  return 0;
}


// ===== 003d2608  FUN_003d2608 =====

long FUN_003d2608(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
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
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar3 = FUN_003b9c48(param_1,1);
  if (lVar3 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/provider_core.c",0x14d,"get_provider_store");
    FUN_00379a5c(0xf,0xc0103,0);
  }
  else {
    uStack_f8 = 0;
    local_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    local_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    local_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    local_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    local_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    local_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    local_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    uStack_d8 = param_2;
    iVar1 = FUN_003d518c(*(undefined8 *)(lVar3 + 0x20));
    if (iVar1 != 0) {
      FUN_0040cc10(*(undefined8 *)(lVar3 + 8));
      iVar1 = FUN_0040c48c(*(undefined8 *)(lVar3 + 8),&local_100);
      if (iVar1 == -1) {
        FUN_003d519c(*(undefined8 *)(lVar3 + 0x20));
        return 0;
      }
      lVar4 = FUN_0040cb0c(*(undefined8 *)(lVar3 + 8),iVar1);
      FUN_003d519c(*(undefined8 *)(lVar3 + 0x20));
      if (lVar4 != 0) {
        iVar1 = *(int *)(lVar4 + 0x10) + 1;
        *(int *)(lVar4 + 0x10) = iVar1;
        if (((*(byte *)(lVar4 + 200) & 1) != 0) && (iVar2 = FUN_003d16fc(lVar4,0), iVar2 == 0)) {
          FUN_003d27b0(lVar4);
          return 0;
        }
        if (iVar1 == 0) {
          return 0;
        }
      }
      return lVar4;
    }
  }
  return 0;
}


// ===== 003d2754  FUN_003d2754 =====

int FUN_003d2754(long param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x10) + 1;
  *(int *)(param_1 + 0x10) = iVar1;
  if (((*(byte *)(param_1 + 200) & 1) != 0) && (iVar2 = FUN_003d16fc(param_1,0), iVar2 == 0)) {
    FUN_003d27b0(param_1);
    return 0;
  }
  return iVar1;
}


// ===== 003d27b0  FUN_003d27b0 =====

void FUN_003d27b0(byte *param_1)

{
  int iVar1;
  
  if (param_1 != (byte *)0x0) {
    iVar1 = *(int *)(param_1 + 0x10);
    *(int *)(param_1 + 0x10) = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      if ((*param_1 & 1) != 0) {
        if ((*(code **)(param_1 + 0x70) != (code *)0x0) && ((param_1[200] & 1) == 0)) {
          (**(code **)(param_1 + 0x70))(*(undefined8 *)(param_1 + 0xd0));
        }
        if (*(long *)(param_1 + 0x68) != 0) {
          FUN_0037a02c(*(undefined4 *)(param_1 + 0x60));
          FUN_003c86b4(*(undefined8 *)(param_1 + 0x68),"crypto/provider_core.c",0x2d0);
          param_1[0x68] = 0;
          param_1[0x69] = 0;
          param_1[0x6a] = 0;
          param_1[0x6b] = 0;
          param_1[0x6c] = 0;
          param_1[0x6d] = 0;
          param_1[0x6e] = 0;
          param_1[0x6f] = 0;
        }
        FUN_003c86b4(*(undefined8 *)(param_1 + 0xa8),"crypto/provider_core.c",0x2d5);
        param_1[0xa8] = 0;
        param_1[0xa9] = 0;
        param_1[0xaa] = 0;
        param_1[0xab] = 0;
        param_1[0xac] = 0;
        param_1[0xad] = 0;
        param_1[0xae] = 0;
        param_1[0xaf] = 0;
        param_1[0xb0] = 0;
        param_1[0xb1] = 0;
        param_1[0xb2] = 0;
        param_1[0xb3] = 0;
        param_1[0xb4] = 0;
        param_1[0xb5] = 0;
        param_1[0xb6] = 0;
        param_1[0xb7] = 0;
        *param_1 = *param_1 & 0xfe;
      }
      FUN_003c826c();
      FUN_003be278(*(undefined8 *)(param_1 + 0x38));
      FUN_003c86b4(*(undefined8 *)(param_1 + 0x28),"crypto/provider_core.c",0x2e4);
      FUN_003c86b4(*(undefined8 *)(param_1 + 0x30),"crypto/provider_core.c",0x2e5);
      FUN_0040ca6c(*(undefined8 *)(param_1 + 0x48),FUN_003d2168);
      FUN_003d51ac(*(undefined8 *)(param_1 + 0xb8));
      FUN_003d51ac(*(undefined8 *)(param_1 + 8));
      FUN_003d51ac(*(undefined8 *)(param_1 + 0x18));
      FUN_003c86b4(param_1,"crypto/provider_core.c",0x2ed);
      return;
    }
    if ((param_1[200] & 1) != 0) {
      FUN_003d1768(param_1,0);
      return;
    }
  }
  return;
}


// ===== 003d28d8  FUN_003d28d8 =====

undefined * FUN_003d28d8(undefined8 param_1,char *param_2,undefined *param_3,long *param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined *puVar5;
  char *__s1;
  long *plVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  
  lVar4 = FUN_003b9c48(param_1,1);
  if (lVar4 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/provider_core.c",0x14d,"get_provider_store");
    FUN_00379a5c(0xf,0xc0103,0);
    puVar5 = (undefined *)0x0;
  }
  else {
    local_50 = (undefined *)0x0;
    local_58 = (undefined *)0x0;
    local_60 = (undefined *)0x0;
    if (param_3 == (undefined *)0x0) {
      __s1 = *(char **)PTR_PTR_s_default_007a1b98;
      if (__s1 != (char *)0x0) {
        ppuVar7 = &PTR_s_default_0076bc28;
        do {
          iVar2 = strcmp(__s1,param_2);
          if (iVar2 == 0) {
            local_58 = ppuVar7[3];
            local_50 = ppuVar7[4];
            param_3 = ppuVar7[2];
            goto joined_r0x003d2a8c;
          }
          ppuVar7 = ppuVar7 + 5;
          __s1 = *ppuVar7;
        } while (__s1 != (char *)0x0);
      }
      iVar2 = FUN_003d517c(*(undefined8 *)(lVar4 + 0x20));
      if (iVar2 == 0) {
        return (undefined *)0x0;
      }
      lVar9 = *(long *)(lVar4 + 0x38);
      if (lVar9 != 0) {
        puVar8 = *(undefined8 **)(lVar4 + 0x30);
        do {
          iVar2 = strcmp((char *)*puVar8,param_2);
          if (iVar2 == 0) {
            local_58 = (undefined *)puVar8[3];
            local_60 = (undefined *)puVar8[2];
            local_50 = (undefined *)puVar8[4];
            break;
          }
          lVar9 = lVar9 + -1;
          puVar8 = puVar8 + 5;
        } while (lVar9 != 0);
      }
      FUN_003d519c(*(undefined8 *)(lVar4 + 0x20));
      param_3 = local_60;
    }
joined_r0x003d2a8c:
    if (param_4 == (long *)0x0) {
      puVar5 = (undefined *)FUN_003d2af8(param_2,param_3,local_58);
      if (puVar5 != (undefined *)0x0) {
LAB_003d2ac0:
        *(undefined8 *)(puVar5 + 0x50) = param_1;
        uVar3 = FUN_0037ad78();
        *(undefined4 *)(puVar5 + 0x60) = uVar3;
        return puVar5;
      }
    }
    else {
      puVar5 = (undefined *)FUN_0040bf0c();
      if (puVar5 != (undefined *)0x0) {
        lVar4 = *param_4;
        local_58 = puVar5;
        if (lVar4 != 0) {
          plVar6 = param_4 + 5;
          do {
            if (((int)plVar6[-4] == 4) &&
               (iVar2 = FUN_003d2f60(&local_58,lVar4,plVar6[-3]), iVar2 == 0)) {
              return (undefined *)0x0;
            }
            lVar4 = *plVar6;
            plVar6 = plVar6 + 5;
          } while (lVar4 != 0);
        }
        puVar1 = local_58;
        puVar5 = (undefined *)FUN_003d2af8(param_2,param_3,local_58);
        FUN_0040ca6c(puVar1,FUN_003d2168);
        if (puVar5 != (undefined *)0x0) goto LAB_003d2ac0;
        puVar5 = (undefined *)0x0;
      }
    }
  }
  return puVar5;
}


// ===== 003d2af0  FUN_003d2af0 =====

void FUN_003d2af0(long param_1)

{
  FUN_003d2f60(param_1 + 0x18);
  return;
}


// ===== 003d2af8  FUN_003d2af8 =====

long FUN_003d2af8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_003c8474(0xe0,"crypto/provider_core.c",0x1bb);
  if (lVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(lVar1 + 0x10) = 1;
  lVar2 = FUN_003d5150();
  *(long *)(lVar1 + 0x18) = lVar2;
  if (lVar2 == 0) {
    FUN_003d27b0(lVar1);
    FUN_00379868();
    uVar3 = 0x1c4;
  }
  else {
    lVar2 = FUN_003d5150();
    *(long *)(lVar1 + 0xb8) = lVar2;
    if (lVar2 != 0) {
      lVar2 = FUN_003d5150();
      *(long *)(lVar1 + 8) = lVar2;
      if (lVar2 != 0) {
        lVar2 = FUN_0040bdc4(param_3,FUN_003d4424,FUN_003d2168);
        *(long *)(lVar1 + 0x48) = lVar2;
        if (lVar2 != 0) {
          lVar2 = FUN_003ca2f4(param_1,"crypto/provider_core.c",0x1d2);
          *(long *)(lVar1 + 0x28) = lVar2;
          if (lVar2 != 0) {
            *(undefined8 *)(lVar1 + 0x40) = param_2;
            return lVar1;
          }
          FUN_003d27b0(lVar1);
          return 0;
        }
      }
    }
    FUN_003d27b0(lVar1);
    FUN_00379868();
    uVar3 = 0x1cf;
  }
  FUN_0037995c("crypto/provider_core.c",uVar3,"provider_new");
  FUN_00379a5c(0xf,0x8000f,0);
  return 0;
}


// ===== 003d2c44  FUN_003d2c44 =====

undefined8 FUN_003d2c44(long param_1,long *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
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
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (param_2 != (long *)0x0) {
    *param_2 = 0;
  }
  lVar6 = FUN_003b9c48(*(undefined8 *)(param_1 + 0x50),1);
  if (lVar6 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/provider_core.c",0x14d,"get_provider_store");
    uVar1 = 0xc0103;
  }
  else {
    uVar7 = FUN_003d518c(*(undefined8 *)(lVar6 + 0x20));
    if ((int)uVar7 == 0) {
      return uVar7;
    }
    uStack_118 = *(undefined8 *)(param_1 + 0x28);
    iVar2 = FUN_0040c48c(*(undefined8 *)(lVar6 + 8),&local_140);
    if (iVar2 == -1) {
      iVar4 = FUN_0040c89c(*(undefined8 *)(lVar6 + 8),param_1);
      if (iVar4 == 0) {
LAB_003d2e6c:
        FUN_003d519c(*(undefined8 *)(lVar6 + 0x20));
        return 0;
      }
      uVar7 = *(undefined8 *)(lVar6 + 0x10);
      *(long *)(param_1 + 0x58) = lVar6;
      iVar4 = FUN_0040caf8(uVar7);
      if (0 < iVar4) {
        iVar3 = 0;
        uVar9 = 1;
        do {
          lVar8 = FUN_0040cb0c(*(undefined8 *)(lVar6 + 0x10),iVar3);
          uVar5 = (**(code **)(lVar8 + 8))(param_1,*(undefined8 *)(lVar8 + 0x20));
          iVar3 = iVar3 + 1;
          uVar9 = uVar5 & uVar9;
        } while (iVar4 != iVar3);
        if (uVar9 == 0) {
          FUN_0040c350(*(undefined8 *)(lVar6 + 8),param_1);
          goto LAB_003d2e6c;
        }
      }
      lVar8 = param_1;
      if (param_3 == 0) {
        *(byte *)(lVar6 + 0x48) = *(byte *)(lVar6 + 0x48) & 0xfe;
      }
    }
    else {
      lVar8 = FUN_0040cb0c(*(undefined8 *)(lVar6 + 8),iVar2);
    }
    FUN_003d519c(*(undefined8 *)(lVar6 + 0x20));
    if (param_2 == (long *)0x0) {
LAB_003d2d20:
      if (iVar2 < 0) {
        FUN_00383cbc(*(undefined8 *)(param_1 + 0x50));
      }
      else {
        if ((param_1 != 0) && (iVar2 = FUN_003d3944(param_1,1,0), iVar2 == 0)) {
          FUN_003d3ae4(param_1);
        }
        FUN_003d27b0(param_1);
      }
      return 1;
    }
    iVar4 = *(int *)(lVar8 + 0x10) + 1;
    *(int *)(lVar8 + 0x10) = iVar4;
    if (((*(byte *)(lVar8 + 200) & 1) == 0) || (iVar3 = FUN_003d16fc(lVar8,0), iVar3 != 0)) {
      if (iVar4 != 0) {
        *param_2 = lVar8;
        goto LAB_003d2d20;
      }
    }
    else {
      FUN_003d27b0(lVar8);
    }
    FUN_00379868();
    FUN_0037995c("crypto/provider_core.c",0x294,"ossl_provider_add_to_store");
    uVar1 = 0x8000f;
  }
  FUN_00379a5c(0xf,uVar1,0);
  return 0;
}


// ===== 003d2e78  FUN_003d2e78 =====

long FUN_003d2e78(long param_1,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  
  if (param_1 != 0) {
    iVar1 = FUN_003d3944(param_1,1,param_2);
    if (iVar1 < 0) {
      return 0;
    }
    if (iVar1 == 0) {
      lVar2 = FUN_003d3ae4(param_1);
      return lVar2;
    }
    param_1 = 1;
  }
  return param_1;
}


// ===== 003d2ed0  FUN_003d2ed0 =====

void FUN_003d2ed0(long param_1)

{
  if ((*(code **)(param_1 + 0x70) != (code *)0x0) && ((*(byte *)(param_1 + 200) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x003d2ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x70))(*(undefined8 *)(param_1 + 0xd0));
    return;
  }
  return;
}


// ===== 003d2eec  FUN_003d2eec =====

bool FUN_003d2eec(long param_1,long param_2)

{
  long lVar1;
  
  FUN_003c86b4(*(undefined8 *)(param_1 + 0x30),"crypto/provider_core.c",0x2fa);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (param_2 != 0) {
    lVar1 = FUN_003ca2f4(param_2,"crypto/provider_core.c",0x2fe);
    *(long *)(param_1 + 0x30) = lVar1;
    return lVar1 != 0;
  }
  return true;
}


// ===== 003d2f58  FUN_003d2f58 =====

void FUN_003d2f58(long param_1)

{
  FUN_003d2f60(param_1 + 0x48);
  return;
}


// ===== 003d2f60  FUN_003d2f60 =====

undefined8 FUN_003d2f60(long *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)FUN_003c8474(0x10,"crypto/provider_core.c",0x308);
  if (plVar2 == (long *)0x0) {
    return 0;
  }
  lVar3 = FUN_003ca2f4(param_2,"crypto/provider_core.c",0x309);
  *plVar2 = lVar3;
  if (lVar3 == 0) goto LAB_003d3038;
  lVar3 = FUN_003ca2f4(param_3,"crypto/provider_core.c",0x30a);
  plVar2[1] = lVar3;
  if (lVar3 == 0) goto LAB_003d3038;
  lVar3 = *param_1;
  if (lVar3 == 0) {
    lVar3 = FUN_0040bf0c();
    *param_1 = lVar3;
    if (lVar3 != 0) goto LAB_003d2fe4;
  }
  else {
LAB_003d2fe4:
    iVar1 = FUN_0040c89c(lVar3,plVar2);
    if (0 < iVar1) {
      return 1;
    }
  }
  FUN_00379868();
  FUN_0037995c("crypto/provider_core.c",0x310,"infopair_add");
  FUN_00379a5c(0xf,0x8000f,0);
LAB_003d3038:
  FUN_003c86b4(*plVar2,"crypto/provider_core.c",0x318);
  FUN_003c86b4(plVar2[1],"crypto/provider_core.c",0x319);
  FUN_003c86b4(plVar2,"crypto/provider_core.c",0x31a);
  return 0;
}


// ===== 003d3084  FUN_003d3084 =====

undefined8 FUN_003d3084(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (param_2 == 0) {
    lVar2 = 0;
    lVar3 = FUN_003b9c48(param_1,1);
  }
  else {
    lVar2 = FUN_003ca2f4(param_2,"crypto/provider_core.c",0x341);
    if (lVar2 == 0) {
      return 0;
    }
    lVar3 = FUN_003b9c48(param_1,1);
  }
  if (lVar3 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/provider_core.c",0x14d,"get_provider_store");
    FUN_00379a5c(0xf,0xc0103,0);
  }
  else {
    iVar1 = FUN_003d518c(*(undefined8 *)(lVar3 + 0x18));
    if (iVar1 != 0) {
      FUN_003c86b4(*(undefined8 *)(lVar3 + 0x28),"crypto/provider_core.c",0x347);
      *(long *)(lVar3 + 0x28) = lVar2;
      FUN_003d519c(*(undefined8 *)(lVar3 + 0x18));
      return 1;
    }
  }
  FUN_003c86b4(lVar2,"crypto/provider_core.c",0x34c);
  return 0;
}


// ===== 003d316c  FUN_003d316c =====

undefined8 FUN_003d316c(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_003b9c48(param_1,1);
  if (lVar2 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/provider_core.c",0x14d,"get_provider_store");
    FUN_00379a5c(0xf,0xc0103,0);
  }
  else {
    iVar1 = FUN_003d517c(*(undefined8 *)(lVar2 + 0x18));
    if (iVar1 != 0) {
      uVar3 = *(undefined8 *)(lVar2 + 0x28);
      FUN_003d519c(*(undefined8 *)(lVar2 + 0x18));
      return uVar3;
    }
  }
  return 0;
}


// ===== 003d31f4  FUN_003d31f4 =====

ulong FUN_003d31f4(long param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_3 == 0) || ((*(byte *)(param_1 + 200) & 1) != 0)) {
    iVar2 = FUN_003d3308(param_1,1,param_2);
    if (iVar2 < 1) {
      return 0;
    }
    if (iVar2 == 1) {
      lVar6 = FUN_003b9c48(*(undefined8 *)(param_1 + 0x50),1);
      if (lVar6 == 0) {
        FUN_00379868();
        FUN_0037995c("crypto/provider_core.c",0x14d,"get_provider_store");
        FUN_00379a5c(0xf,0xc0103,0);
        return 0;
      }
      uVar7 = FUN_003d517c(*(undefined8 *)(lVar6 + 0x20));
      if ((int)uVar7 == 0) {
        return uVar7;
      }
      bVar1 = *(byte *)(lVar6 + 0x48);
      FUN_003d519c(*(undefined8 *)(lVar6 + 0x20));
      if ((bVar1 >> 1 & 1) == 0) {
        iVar2 = FUN_00382db0(*(undefined8 *)(param_1 + 0x50));
        iVar3 = FUN_003ab2c0(*(undefined8 *)(param_1 + 0x50));
        iVar4 = FUN_00384fdc(*(undefined8 *)(param_1 + 0x50));
        iVar5 = FUN_0040cfe4(*(undefined8 *)(param_1 + 0x50));
        return (ulong)(iVar3 + iVar2 + iVar4 + iVar5 == 4);
      }
    }
  }
  return 1;
}


// ===== 003d3308  FUN_003d3308 =====

int FUN_003d3308(byte *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  int *piVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  uint *puVar8;
  char *pcVar9;
  long *plVar10;
  char *pcVar11;
  long lVar12;
  char *pcVar13;
  undefined8 uVar14;
  code *pcVar15;
  ulong uVar16;
  ulong uVar17;
  uint *puVar18;
  long *plVar19;
  ulong uVar20;
  int iVar21;
  long lVar22;
  uint uVar23;
  long lVar24;
  int local_5c;
  undefined8 local_58;
  int *local_38;
  
  lVar24 = *(long *)(param_1 + 0x58);
  local_5c = -1;
  if (lVar24 == 0) {
    local_38 = (int *)0x0;
    local_58 = 0;
    if ((*param_1 & 1) != 0) {
      FUN_00379868();
      pcVar13 = "provider_init";
      uVar14 = 0x36e;
LAB_003d35d0:
      FUN_0037995c("crypto/provider_core.c",uVar14,pcVar13);
      FUN_00379a5c(0xf,0xc0103,0);
      return -1;
    }
    pcVar15 = *(code **)(param_1 + 0x40);
    if (pcVar15 == (code *)0x0) {
      lVar22 = *(long *)(param_1 + 0x38);
      if (lVar22 == 0) {
        lVar22 = thunk_FUN_003be19c();
        *(long *)(param_1 + 0x38) = lVar22;
        if (lVar22 == 0) {
          return -1;
        }
        lVar22 = FUN_003b9c48(*(undefined8 *)(param_1 + 0x50),1);
        if (lVar22 == 0) {
          FUN_00379868();
          pcVar13 = "get_provider_store";
          uVar14 = 0x14d;
          goto LAB_003d35d0;
        }
        iVar5 = FUN_003d517c(*(undefined8 *)(lVar22 + 0x18));
        if (iVar5 == 0) {
          return -1;
        }
        if (*(long *)(lVar22 + 0x28) == 0) {
          FUN_003d519c(*(undefined8 *)(lVar22 + 0x18));
          pcVar11 = (char *)FUN_003c5634("OPENSSL_MODULES");
          pcVar9 = (char *)0x0;
          pcVar13 = "//lib/ossl-modules";
          if (pcVar11 != (char *)0x0) {
            pcVar13 = pcVar11;
          }
        }
        else {
          pcVar9 = (char *)FUN_003ca2f4(*(long *)(lVar22 + 0x28),"crypto/provider_core.c",0x38c);
          FUN_003d519c(*(undefined8 *)(lVar22 + 0x18));
          pcVar13 = pcVar9;
          if (pcVar9 == (char *)0x0) {
            return -1;
          }
        }
        FUN_003be5e0(*(undefined8 *)(param_1 + 0x38),2,2,0);
        lVar22 = *(long *)(param_1 + 0x30);
        if (lVar22 == 0) {
          lVar22 = FUN_003be8e0(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x28));
          lVar7 = lVar22;
          if (lVar22 != 0) goto LAB_003d3888;
          lVar22 = 0;
LAB_003d38bc:
          FUN_003be278(*(undefined8 *)(param_1 + 0x38));
          param_1[0x38] = 0;
          param_1[0x39] = 0;
          param_1[0x3a] = 0;
          param_1[0x3b] = 0;
          param_1[0x3c] = 0;
          param_1[0x3d] = 0;
          param_1[0x3e] = 0;
          param_1[0x3f] = 0;
        }
        else {
          lVar7 = 0;
LAB_003d3888:
          lVar22 = FUN_003be874(*(undefined8 *)(param_1 + 0x38),lVar22,pcVar13);
          if ((lVar22 == 0) ||
             (lVar12 = FUN_003be420(*(undefined8 *)(param_1 + 0x38),lVar22,0,0), lVar12 == 0))
          goto LAB_003d38bc;
        }
        FUN_003c86b4(lVar22,"crypto/provider_core.c",0x3ab);
        FUN_003c86b4(lVar7,"crypto/provider_core.c",0x3ac);
        FUN_003c86b4(pcVar9,"crypto/provider_core.c",0x3ad);
        lVar22 = *(long *)(param_1 + 0x38);
        if (lVar22 == 0) {
          FUN_00379868();
          FUN_0037995c("crypto/provider_core.c",0x3b2,"provider_init");
          FUN_00379a5c(0xf,0x80025,"name=%s",*(undefined8 *)(param_1 + 0x28));
          return -1;
        }
      }
      pcVar15 = (code *)FUN_003be794(lVar22,"OSSL_provider_init");
      *(code **)(param_1 + 0x40) = pcVar15;
      if (pcVar15 != (code *)0x0) goto LAB_003d3474;
      FUN_00379868();
      FUN_0037995c("crypto/provider_core.c",0x3be,"provider_init");
      uVar14 = *(undefined8 *)(param_1 + 0x28);
      pcVar13 = "name=%s, provider has no provider init function";
      uVar1 = 0x8010c;
    }
    else {
LAB_003d3474:
      iVar5 = (*pcVar15)(param_1,&DAT_0076b848,&local_38,&local_58);
      if (iVar5 != 0) {
        *(undefined8 *)(param_1 + 0xd0) = local_58;
        *(int **)(param_1 + 0xd8) = local_38;
        if (local_38 != (int *)0x0) {
          pcVar15 = (code *)0x0;
          piVar3 = local_38;
          do {
            while( true ) {
              while( true ) {
                while( true ) {
                  while( true ) {
                    local_38 = piVar3;
                    piVar3 = local_38 + 4;
                    iVar5 = *local_38;
                    if (iVar5 < 0x404) break;
                    if (iVar5 < 0x406) {
                      if (iVar5 == 0x404) {
                        *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(local_38 + 2);
                      }
                      else if (iVar5 == 0x405) {
                        pcVar15 = *(code **)(local_38 + 2);
                      }
                    }
                    else if (iVar5 == 0x406) {
                      *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(local_38 + 2);
                    }
                    else if (iVar5 == 0x407) {
                      *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(local_38 + 2);
                    }
                  }
                  if (iVar5 < 0x402) break;
                  if (iVar5 == 0x402) {
                    *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(local_38 + 2);
                  }
                  else if (iVar5 == 0x403) {
                    *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(local_38 + 2);
                  }
                }
                if (iVar5 != 0x400) break;
                *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(local_38 + 2);
              }
              if (iVar5 != 0x401) break;
              *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(local_38 + 2);
            }
          } while (iVar5 != 0);
          if (pcVar15 != (code *)0x0) {
            puVar8 = (uint *)(*pcVar15)();
            uVar23 = *puVar8;
            if (uVar23 == 0) {
              lVar22 = 0;
            }
            else {
              lVar22 = 0;
              puVar18 = puVar8;
              do {
                puVar18 = puVar18 + 4;
                if (uVar23 >> 0x17 != 0) {
                  return -1;
                }
                uVar23 = *puVar18;
                lVar22 = lVar22 + 1;
              } while (uVar23 != 0);
            }
            plVar10 = (long *)FUN_003c8474(lVar22 * 0x10 + 0x20,"crypto/provider_core.c",0x40f);
            *(long **)(param_1 + 0x68) = plVar10;
            if (plVar10 == (long *)0x0) {
              return -1;
            }
            lVar7 = *(long *)(param_1 + 0x28);
            *plVar10 = ((ulong)*(uint *)(param_1 + 0x60) & 0xff) << 0x17;
            plVar10[1] = lVar7;
            if (lVar22 != -1) {
              uVar2 = lVar22 + 2;
              if (uVar2 < 3) {
                uVar2 = 2;
                uVar16 = 1;
              }
              else {
                uVar17 = lVar22 + 1;
                puVar18 = puVar8 + 4;
                uVar16 = uVar17 | 1;
                plVar19 = plVar10 + 5;
                uVar20 = uVar17 & 0xfffffffffffffffe;
                do {
                  lVar7 = *(long *)(puVar18 + -2);
                  uVar20 = uVar20 - 2;
                  uVar23 = *puVar18;
                  plVar19[-3] = (long)(int)puVar18[-4];
                  lVar22 = *(long *)(puVar18 + 2);
                  puVar18 = puVar18 + 8;
                  plVar19[-2] = lVar7;
                  plVar19[-1] = (long)(int)uVar23;
                  *plVar19 = lVar22;
                  plVar19 = plVar19 + 4;
                } while (uVar20 != 0);
                if (uVar17 == (uVar17 & 0xfffffffffffffffe)) goto LAB_003d3808;
              }
              lVar22 = uVar2 - uVar16;
              plVar10 = plVar10 + uVar16 * 2 + 1;
              puVar8 = puVar8 + uVar16 * 4 + -2;
              do {
                lVar7 = *(long *)puVar8;
                lVar22 = lVar22 + -1;
                plVar10[-1] = (long)(int)puVar8[-2];
                *plVar10 = lVar7;
                plVar10 = plVar10 + 2;
                puVar8 = puVar8 + 4;
              } while (lVar22 != 0);
            }
LAB_003d3808:
            FUN_00379f34();
          }
        }
        param_2 = 0;
        *param_1 = *param_1 | 1;
        goto joined_r0x003d3340;
      }
      FUN_00379868();
      FUN_0037995c("crypto/provider_core.c",0x3c6,"provider_init");
      uVar14 = *(undefined8 *)(param_1 + 0x28);
      pcVar13 = "name=%s";
      uVar1 = 0xc0105;
    }
    FUN_00379a5c(0xf,uVar1,pcVar13,uVar14);
  }
  else {
joined_r0x003d3340:
    if (((param_3 == 0) || ((param_1[200] & 1) == 0)) ||
       (iVar5 = FUN_003d16fc(param_1,1), iVar5 != 0)) {
      if (param_2 == 0) {
LAB_003d3378:
        iVar5 = FUN_003d52bc(param_1 + 0x20,1,&local_5c,*(undefined8 *)(param_1 + 0x18));
        bVar4 = false;
        if (((iVar5 != 0) && (*param_1 = *param_1 | 2, lVar24 != 0)) && (local_5c == 1)) {
          lVar22 = *(long *)(param_1 + 0x58);
          iVar5 = FUN_0040caf8(*(undefined8 *)(lVar22 + 0x10));
          if (iVar5 < 1) {
            bVar4 = false;
          }
          else {
            iVar21 = 0;
            uVar23 = 1;
            do {
              lVar7 = FUN_0040cb0c(*(undefined8 *)(lVar22 + 0x10),iVar21);
              uVar6 = (**(code **)(lVar7 + 8))(param_1,*(undefined8 *)(lVar7 + 0x20));
              iVar21 = iVar21 + 1;
              uVar23 = uVar6 & uVar23;
            } while (iVar5 != iVar21);
            bVar4 = uVar23 == 0;
          }
        }
        if (param_2 != 0) {
          FUN_003d519c(*(undefined8 *)(param_1 + 8));
          FUN_003d519c(*(undefined8 *)(lVar24 + 0x20));
          if (local_5c == 1) {
            FUN_00383cbc(*(undefined8 *)(param_1 + 0x50));
          }
        }
        if (bVar4) {
          return -1;
        }
        return local_5c;
      }
      iVar5 = FUN_003d517c(*(undefined8 *)(lVar24 + 0x20));
      if (iVar5 != 0) {
        iVar5 = FUN_003d518c(*(undefined8 *)(param_1 + 8));
        if (iVar5 != 0) goto LAB_003d3378;
        FUN_003d519c(*(undefined8 *)(lVar24 + 0x20));
      }
      if (param_3 == 0) {
        return -1;
      }
      if ((param_1[200] & 1) == 0) {
        return -1;
      }
      FUN_003d1768(param_1,1);
    }
  }
  return -1;
}


// ===== 003d3944  FUN_003d3944 =====

int FUN_003d3944(byte *param_1,int param_2,int param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  int local_34;
  
  if (param_1 == (byte *)0x0) {
    return -1;
  }
  lVar2 = FUN_003b9c48(*(undefined8 *)(param_1 + 0x50),1);
  if (lVar2 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/provider_core.c",0x14d,"get_provider_store");
    FUN_00379a5c(0xf,0xc0103,0);
  }
  else {
    iVar1 = FUN_003d517c(*(undefined8 *)(lVar2 + 0x20));
    if (iVar1 == 0) {
      return -1;
    }
    iVar1 = FUN_003d518c(*(undefined8 *)(param_1 + 8));
    if (iVar1 == 0) {
      FUN_003d519c(*(undefined8 *)(lVar2 + 0x20));
      return -1;
    }
  }
  FUN_003d52bc(param_1 + 0x20,0xffffffff,&local_34,*(undefined8 *)(param_1 + 0x18));
  if (local_34 < 1) {
    bVar4 = true;
    *param_1 = *param_1 & 0xfd;
    if ((param_3 == 0) || (lVar2 == 0)) goto LAB_003d3a1c;
    iVar1 = FUN_0040caf8(*(undefined8 *)(lVar2 + 0x10));
    if (0 < iVar1) {
      iVar5 = 0;
      do {
        lVar3 = FUN_0040cb0c(*(undefined8 *)(lVar2 + 0x10),iVar5);
        (**(code **)(lVar3 + 0x10))(param_1,*(undefined8 *)(lVar3 + 0x20));
        iVar5 = iVar5 + 1;
      } while (iVar1 != iVar5);
      bVar4 = true;
    }
  }
  else {
    bVar4 = (param_1[200] & 1) == 0 || param_2 == 0;
LAB_003d3a1c:
    if (lVar2 == 0) goto LAB_003d3a44;
  }
  FUN_003d519c(*(undefined8 *)(param_1 + 8));
  FUN_003d519c(*(undefined8 *)(lVar2 + 0x20));
  if (local_34 < 1) {
    FUN_00383cbc(*(undefined8 *)(param_1 + 0x50));
  }
LAB_003d3a44:
  if (!bVar4) {
    FUN_003d1768(param_1,1);
  }
  return local_34;
}


// ===== 003d3ae4  FUN_003d3ae4 =====

ulong FUN_003d3ae4(long param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  
  lVar6 = FUN_003b9c48(*(undefined8 *)(param_1 + 0x50),1);
  if (lVar6 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/provider_core.c",0x14d,"get_provider_store");
    FUN_00379a5c(0xf,0xc0103,0);
    return 0;
  }
  uVar7 = FUN_003d517c(*(undefined8 *)(lVar6 + 0x20));
  if ((int)uVar7 != 0) {
    bVar1 = *(byte *)(lVar6 + 0x48);
    FUN_003d519c(*(undefined8 *)(lVar6 + 0x20));
    if ((bVar1 >> 1 & 1) != 0) {
      return 1;
    }
    uVar7 = FUN_003d518c(*(undefined8 *)(param_1 + 0xb8));
    if ((int)uVar7 != 0) {
      FUN_003c86b4(*(undefined8 *)(param_1 + 0xa8),"crypto/provider_core.c",0x4fa);
      *(undefined8 *)(param_1 + 0xa8) = 0;
      *(undefined8 *)(param_1 + 0xb0) = 0;
      FUN_003d519c(*(undefined8 *)(param_1 + 0xb8));
      iVar2 = FUN_00382dd8(param_1);
      iVar3 = FUN_003ab2e8(param_1);
      iVar4 = FUN_00385004(param_1);
      iVar5 = FUN_0040d00c(param_1);
      uVar7 = (ulong)(iVar3 + iVar2 + iVar4 + iVar5 == 4);
    }
  }
  return uVar7;
}


// ===== 003d3bf8  FUN_003d3bf8 =====

long FUN_003d3bf8(long param_1)

{
  if (param_1 != 0) {
    param_1 = *(long *)(param_1 + 0xd0);
  }
  return param_1;
}


// ===== 003d3c04  FUN_003d3c04 =====

undefined4 FUN_003d3c04(undefined8 param_1,code *param_2,undefined8 param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int local_54;
  
  local_54 = 0;
  lVar5 = FUN_003b9c48(param_1,1);
  if (lVar5 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/provider_core.c",0x14d,"get_provider_store");
    FUN_00379a5c(0xf,0xc0103,0);
    uVar11 = 1;
  }
  else {
    iVar3 = FUN_003d3e84();
    if ((iVar3 == 0) || (iVar3 = FUN_003d517c(*(undefined8 *)(lVar5 + 0x20)), iVar3 == 0)) {
      uVar11 = 0;
    }
    else {
      lVar6 = FUN_0040bc8c(*(undefined8 *)(lVar5 + 8));
      if (lVar6 == 0) {
        FUN_003d519c(*(undefined8 *)(lVar5 + 0x20));
        uVar11 = 0;
      }
      else {
        uVar4 = FUN_0040caf8();
        uVar9 = uVar4;
        if ((int)uVar4 < 1) {
          uVar9 = 0;
          uVar10 = 1;
LAB_003d3d68:
          FUN_003d519c(*(undefined8 *)(lVar5 + 0x20));
        }
        else {
          do {
            uVar2 = uVar9 - 1;
            pbVar7 = (byte *)FUN_0040cb0c(lVar6,uVar2);
            iVar3 = FUN_003d517c(*(undefined8 *)(pbVar7 + 8));
            if (iVar3 == 0) {
LAB_003d3d08:
              uVar10 = 0;
              goto LAB_003d3d68;
            }
            if ((*pbVar7 >> 1 & 1) == 0) {
              FUN_0040c404(lVar6,uVar2);
              uVar4 = uVar4 - 1;
            }
            else {
              local_54 = *(int *)(pbVar7 + 0x10) + 1;
              *(int *)(pbVar7 + 0x10) = local_54;
              iVar3 = FUN_003d52bc(pbVar7 + 0x20,1,&local_54,*(undefined8 *)(pbVar7 + 0x18));
              if (iVar3 == 0) {
                local_54 = *(int *)(pbVar7 + 0x10) + -1;
                *(int *)(pbVar7 + 0x10) = local_54;
                FUN_003d519c(*(undefined8 *)(pbVar7 + 8));
                goto LAB_003d3d08;
              }
            }
            FUN_003d519c(*(undefined8 *)(pbVar7 + 8));
            bVar1 = 1 < uVar9;
            uVar9 = uVar2;
          } while (bVar1);
          FUN_003d519c(*(undefined8 *)(lVar5 + 0x20));
          if (0 < (int)uVar4) {
            uVar9 = 0;
            do {
              uVar8 = FUN_0040cb0c(lVar6,uVar9);
              iVar3 = (*param_2)(uVar8,param_3);
              if (iVar3 == 0) {
                uVar9 = 0;
                uVar10 = 0;
                goto LAB_003d3d70;
              }
              uVar9 = uVar9 + 1;
            } while (uVar4 != uVar9);
          }
          uVar9 = 0;
          uVar10 = 1;
        }
LAB_003d3d70:
        uVar11 = uVar10;
        if ((int)uVar9 < (int)uVar4) {
          do {
            while( true ) {
              lVar5 = FUN_0040cb0c(lVar6,uVar9);
              iVar3 = FUN_003d52bc(lVar5 + 0x20,0xffffffff,&local_54,*(undefined8 *)(lVar5 + 0x18));
              if (iVar3 == 0) break;
              if (local_54 < 1) {
                iVar3 = FUN_003d52bc(lVar5 + 0x20,1,&local_54,*(undefined8 *)(lVar5 + 0x18));
                if (iVar3 == 0) {
                  uVar10 = 0;
                }
                else {
                  FUN_003d3944(lVar5,0,1);
                }
              }
              local_54 = *(int *)(lVar5 + 0x10) + -1;
              *(int *)(lVar5 + 0x10) = local_54;
              uVar9 = uVar9 + 1;
              uVar11 = uVar10;
              if (uVar4 == uVar9) goto LAB_003d3e0c;
            }
            uVar10 = 0;
            uVar9 = uVar9 + 1;
            uVar11 = 0;
          } while (uVar4 != uVar9);
        }
LAB_003d3e0c:
        FUN_0040bd78(lVar6);
      }
    }
  }
  return uVar11;
}


// ===== 003d3e84  FUN_003d3e84 =====

ulong FUN_003d3e84(undefined8 *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  int iVar7;
  byte *pbVar8;
  
  uVar4 = FUN_003d517c(param_1[4]);
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  bVar1 = *(byte *)(param_1 + 9);
  FUN_003d519c(param_1[4]);
  if ((bVar1 & 1) == 0) {
    return 1;
  }
  uVar4 = FUN_003d518c(param_1[4]);
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  if ((*(byte *)(param_1 + 9) & 1) == 0) {
LAB_003d3ed4:
    uVar4 = 1;
  }
  else {
    if (PTR_s_default_0076bc28 != (undefined *)0x0) {
      iVar7 = 0;
      puVar5 = PTR_s_default_0076bc28;
      pbVar8 = (byte *)&DAT_0076bc48;
      do {
        if ((*pbVar8 & 1) != 0) {
          uVar4 = FUN_003d2af8(puVar5,*(undefined8 *)(pbVar8 + -0x10),0);
          if (uVar4 == 0) goto LAB_003d3f9c;
          *(undefined8 *)(uVar4 + 0x50) = *param_1;
          uVar2 = FUN_0037ad78();
          *(undefined4 *)(uVar4 + 0x60) = uVar2;
          iVar3 = FUN_003d3308(uVar4,0,0);
          if (-1 < iVar3) {
            uVar6 = param_1[1];
            *(undefined8 **)(uVar4 + 0x58) = param_1;
            iVar3 = FUN_0040c89c(uVar6,uVar4);
            if (iVar3 != 0) {
              iVar7 = iVar7 + 1;
              goto LAB_003d3f10;
            }
          }
          FUN_003d27b0(uVar4);
          goto LAB_003d3f98;
        }
LAB_003d3f10:
        puVar5 = *(undefined **)(pbVar8 + 8);
        pbVar8 = pbVar8 + 0x28;
      } while (puVar5 != (undefined *)0x0);
      if (0 < iVar7) {
        *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) & 0xfe;
        goto LAB_003d3ed4;
      }
    }
LAB_003d3f98:
    uVar4 = 0;
  }
LAB_003d3f9c:
  FUN_003d519c(param_1[4]);
  return uVar4 & 0xffffffff;
}


// ===== 003d3fbc  FUN_003d3fbc =====

byte * FUN_003d3fbc(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  lVar2 = FUN_003b9c48(param_1,1);
  if (lVar2 != 0) {
    pbVar3 = (byte *)FUN_003d3e84();
    if ((((int)pbVar3 != 0) &&
        (pbVar4 = (byte *)FUN_003d2608(param_1,param_2), pbVar3 = pbVar4, pbVar4 != (byte *)0x0)) &&
       (pbVar3 = (byte *)FUN_003d517c(*(undefined8 *)(pbVar4 + 8)), (int)pbVar3 != 0)) {
      bVar1 = *pbVar4;
      FUN_003d519c(*(undefined8 *)(pbVar4 + 8));
      FUN_003d27b0(pbVar4);
      pbVar3 = (byte *)(ulong)(bVar1 >> 1 & 1);
    }
    return pbVar3;
  }
  FUN_00379868();
  FUN_0037995c("crypto/provider_core.c",0x14d,"get_provider_store");
  FUN_00379a5c(0xf,0xc0103,0);
  return (byte *)0x0;
}


// ===== 003d406c  FUN_003d406c =====

undefined8 FUN_003d406c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}


// ===== 003d4074  FUN_003d4074 =====

undefined8 FUN_003d4074(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}


// ===== 003d407c  FUN_003d407c =====

void FUN_003d407c(long param_1)

{
  FUN_003be824(*(undefined8 *)(param_1 + 0x38));
  return;
}


// ===== 003d4084  FUN_003d4084 =====

void FUN_003d4084(long param_1)

{
  FUN_003be824(*(undefined8 *)(param_1 + 0x38));
  return;
}


// ===== 003d408c  FUN_003d408c =====

long FUN_003d408c(long param_1)

{
  if (param_1 != 0) {
    param_1 = *(long *)(param_1 + 0xd0);
  }
  return param_1;
}


// ===== 003d4098  FUN_003d4098 =====

long FUN_003d4098(long param_1)

{
  if (param_1 != 0) {
    param_1 = *(long *)(param_1 + 0xd8);
  }
  return param_1;
}


// ===== 003d40a4  FUN_003d40a4 =====

long FUN_003d40a4(long param_1)

{
  if (param_1 != 0) {
    param_1 = *(long *)(param_1 + 0x50);
  }
  return param_1;
}


// ===== 003d40b0  FUN_003d40b0 =====

undefined8 FUN_003d40b0(long param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(param_1 + 0x78) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003d40bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x78))(*(undefined8 *)(param_1 + 0xd0));
    return uVar1;
  }
  return 0;
}


// ===== 003d40c8  FUN_003d40c8 =====

undefined8 FUN_003d40c8(long param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(param_1 + 0x80) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003d40d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x80))(*(undefined8 *)(param_1 + 0xd0));
    return uVar1;
  }
  return 0;
}


// ===== 003d40e0  FUN_003d40e0 =====

undefined8 FUN_003d40e0(long param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(param_1 + 0x90) == (code *)0x0) {
    return 1;
  }
  uVar1 = (**(code **)(param_1 + 0x90))(*(undefined8 *)(param_1 + 0xd0));
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  FUN_003d3ae4(param_1);
  return 0;
}


// ===== 003d4130  FUN_003d4130 =====

undefined8 FUN_003d4130(long param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(param_1 + 0x88) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003d413c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x88))(*(undefined8 *)(param_1 + 0xd0));
    return uVar1;
  }
  return 1;
}


// ===== 003d4148  FUN_003d4148 =====

undefined8 FUN_003d4148(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  
  if (*(code **)(param_1 + 0x98) != (code *)0x0) {
    uVar1 = (**(code **)(param_1 + 0x98))(*(undefined8 *)(param_1 + 0xd0));
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 1;
    }
    return uVar1;
  }
  return 0;
}


// ===== 003d4188  FUN_003d4188 =====

void FUN_003d4188(long param_1)

{
  if (*(code **)(param_1 + 0xa0) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003d4194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0xa0))(*(undefined8 *)(param_1 + 0xd0));
    return;
  }
  return;
}


// ===== 003d419c  FUN_003d419c =====

undefined8 FUN_003d419c(long param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  iVar2 = FUN_003d518c(*(undefined8 *)(param_1 + 0xb8));
  if (iVar2 == 0) {
    return 0;
  }
  uVar5 = param_2 >> 3;
  if (*(ulong *)(param_1 + 0xb0) <= uVar5) {
    lVar1 = uVar5 + 1;
    lVar3 = FUN_003c8558(*(undefined8 *)(param_1 + 0xa8),lVar1,"crypto/provider_core.c",0x699);
    if (lVar3 == 0) {
      uVar4 = 0;
      goto LAB_003d422c;
    }
    *(long *)(param_1 + 0xa8) = lVar3;
    memset((void *)(lVar3 + *(long *)(param_1 + 0xb0)),0,lVar1 - *(long *)(param_1 + 0xb0));
    *(long *)(param_1 + 0xb0) = lVar1;
  }
  uVar4 = 1;
  *(byte *)(*(long *)(param_1 + 0xa8) + uVar5) =
       *(byte *)(*(long *)(param_1 + 0xa8) + uVar5) | (byte)(1 << (param_2 & 7));
LAB_003d422c:
  FUN_003d519c(*(undefined8 *)(param_1 + 0xb8));
  return uVar4;
}


// ===== 003d4268  FUN_003d4268 =====

undefined8 FUN_003d4268(long param_1,ulong param_2,uint *param_3)

{
  undefined8 uVar1;
  
  if (param_3 != (uint *)0x0) {
    uVar1 = *(undefined8 *)(param_1 + 0xb8);
    *param_3 = 0;
    uVar1 = FUN_003d517c(uVar1);
    if ((int)uVar1 != 0) {
      if (param_2 >> 3 < *(ulong *)(param_1 + 0xb0)) {
        *param_3 = (uint)(((uint)*(byte *)(*(long *)(param_1 + 0xa8) + (param_2 >> 3)) &
                          1 << (ulong)((uint)param_2 & 7)) != 0);
      }
      FUN_003d519c(*(undefined8 *)(param_1 + 0xb8));
      uVar1 = 1;
    }
    return uVar1;
  }
  FUN_00379868();
  FUN_0037995c("crypto/provider_core.c",0x6b0,"ossl_provider_test_operation_bit");
  FUN_00379a5c(0xf,0xc0102,0);
  return 0;
}


// ===== 003d4328  FUN_003d4328 =====

undefined8 FUN_003d4328(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}


// ===== 003d4330  FUN_003d4330 =====

byte FUN_003d4330(long param_1)

{
  return *(byte *)(param_1 + 200) & 1;
}


// ===== 003d433c  FUN_003d433c =====

undefined8 FUN_003d433c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xc0) = param_2;
  *(byte *)(param_1 + 200) = *(byte *)(param_1 + 200) | 1;
  return 1;
}


// ===== 003d4358  FUN_003d4358 =====

undefined8 FUN_003d4358(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  
  lVar2 = FUN_003b9c48(param_1,1);
  if (lVar2 != 0) {
    uVar3 = FUN_003d517c(*(undefined8 *)(lVar2 + 0x20));
    if ((int)uVar3 != 0) {
      iVar1 = FUN_0040caf8(*(undefined8 *)(lVar2 + 0x10));
      if (0 < iVar1) {
        iVar5 = 0;
        do {
          lVar4 = FUN_0040cb0c(*(undefined8 *)(lVar2 + 0x10),iVar5);
          (**(code **)(lVar4 + 0x18))(param_2,*(undefined8 *)(lVar4 + 0x20));
          iVar5 = iVar5 + 1;
        } while (iVar1 != iVar5);
      }
      FUN_003d519c(*(undefined8 *)(lVar2 + 0x20));
      uVar3 = 1;
    }
    return uVar3;
  }
  FUN_00379868();
  FUN_0037995c("crypto/provider_core.c",0x14d,"get_provider_store");
  FUN_00379a5c(0xf,0xc0103,0);
  return 0;
}


// ===== 003d4424  FUN_003d4424 =====

long * FUN_003d4424(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)FUN_003c8474(0x10,"crypto/provider_core.c",0x101);
  if (plVar1 != (long *)0x0) {
    if (*param_1 != 0) {
      lVar2 = FUN_003ca2f4(*param_1,"crypto/provider_core.c",0x106);
      *plVar1 = lVar2;
      if (lVar2 == 0) goto LAB_003d44a4;
    }
    if (param_1[1] != 0) {
      lVar2 = FUN_003ca2f4(param_1[1],"crypto/provider_core.c",0x10b);
      plVar1[1] = lVar2;
      if (lVar2 == 0) {
        lVar2 = *plVar1;
LAB_003d44a4:
        FUN_003c86b4(lVar2,"crypto/provider_core.c",0x111);
        FUN_003c86b4(plVar1,"crypto/provider_core.c",0x112);
        return (long *)0x0;
      }
    }
  }
  return plVar1;
}


// ===== 003d44dc  FUN_003d44dc =====

undefined ** FUN_003d44dc(void)

{
  return &PTR_s_openssl_version_0076bb88;
}


// ===== 003d44e8  FUN_003d44e8 =====

undefined8 FUN_003d44e8(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  lVar3 = FUN_003cb140(param_2,"openssl-version");
  if (lVar3 != 0) {
    FUN_003cda9c(lVar3,"3.2.1");
  }
  lVar3 = FUN_003cb140(param_2,"provider-name");
  if (lVar3 != 0) {
    FUN_003cda9c(lVar3,*(undefined8 *)(param_1 + 0x28));
  }
  lVar3 = FUN_003cb140(param_2,"module-filename");
  if (lVar3 != 0) {
    uVar4 = FUN_003be824(*(undefined8 *)(param_1 + 0x38));
    FUN_003cda9c(lVar3,uVar4);
  }
  if ((*(long *)(param_1 + 0x48) != 0) && (iVar1 = FUN_0040caf8(), 0 < iVar1)) {
    iVar1 = 0;
    do {
      puVar5 = (undefined8 *)FUN_0040cb0c(*(undefined8 *)(param_1 + 0x48),iVar1);
      lVar3 = FUN_003cb140(param_2,*puVar5);
      if (lVar3 != 0) {
        FUN_003cda9c(lVar3,puVar5[1]);
      }
      iVar1 = iVar1 + 1;
      iVar2 = FUN_0040caf8(*(undefined8 *)(param_1 + 0x48));
    } while (iVar1 < iVar2);
  }
  return 1;
}


// ===== 003d45d8  FUN_003d45d8 =====

undefined8 FUN_003d45d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}


// ===== 003d45e0  FUN_003d45e0 =====

void FUN_003d45e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_003c8118(param_1,param_3,param_2);
  return;
}


// ===== 003d45f0  thunk_FUN_00379868 =====

void thunk_FUN_00379868(void)

{
  uint uVar1;
  long lVar2;
  undefined4 *puVar3;
  uint uVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  
  lVar6 = FUN_0037a18c();
  if (lVar6 == 0) {
    return;
  }
  uVar1 = *(int *)(lVar6 + 0x380) + 1;
  uVar4 = uVar1 & 0xf;
  if ((int)uVar1 < 1) {
    uVar4 = -(-uVar1 & 0xf);
  }
  *(uint *)(lVar6 + 0x380) = uVar4;
  if (uVar4 == *(uint *)(lVar6 + 900)) {
    cVar5 = (char)uVar4 + '\x01';
    *(int *)(lVar6 + 900) =
         (int)(char)(cVar5 - (cVar5 + ((byte)((uint)(int)cVar5 >> 0xb) & 0xf) & 0xf0));
  }
  lVar8 = (long)(int)uVar4;
  if ((*(uint *)(lVar6 + 0x200 + (long)(int)uVar4 * 4) & 1) == 0) {
    uVar9 = 0;
    *(undefined8 *)(lVar6 + 0x100 + lVar8 * 8) = 0;
    *(undefined8 *)(lVar6 + lVar8 * 8 + 0x180) = 0;
  }
  else {
    puVar10 = *(undefined1 **)(lVar6 + 0x100 + lVar8 * 8);
    if (puVar10 == (undefined1 *)0x0) goto LAB_00379904;
    *puVar10 = 0;
    uVar9 = 1;
  }
  *(undefined4 *)(lVar6 + 0x200 + lVar8 * 4) = uVar9;
LAB_00379904:
  lVar2 = lVar6 + lVar8 * 8;
  puVar3 = (undefined4 *)(lVar6 + lVar8 * 4);
  uVar7 = *(undefined8 *)(lVar2 + 0x240);
  puVar3[0x10] = 0;
  *puVar3 = 0;
  *(undefined8 *)(lVar2 + 0x80) = 0;
  puVar3[0xb0] = 0xffffffff;
  FUN_003c86b4(uVar7,"crypto/err/err_local.h",0x5b);
  *(undefined8 *)(lVar2 + 0x240) = 0;
  FUN_003c86b4(*(undefined8 *)(lVar2 + 0x300),"crypto/err/err_local.h",0x5d);
  *(undefined8 *)(lVar2 + 0x300) = 0;
  return;
}


// ===== 003d45f4  FUN_003d45f4 =====

void FUN_003d45f4(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  FUN_0037995c(param_2,param_3,param_4);
  return;
}


// ===== 003d4604  FUN_003d4604 =====

void FUN_003d4604(long param_1,ulong param_2,undefined8 param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar2 = (uint)(param_2 >> 0x17) & 0x1ff;
  uVar1 = (uint)param_2;
  if ((int)uVar1 < 0) {
    uVar2 = 2;
  }
  if (uVar2 != 0) {
    uStack_28 = param_4[1];
    local_30 = *param_4;
    uStack_18 = param_4[3];
    uStack_20 = param_4[2];
    uVar3 = 0x7fffff;
    if ((int)uVar1 < 0) {
      uVar3 = 0x7fffffff;
    }
    FUN_00379ac4(uVar2,uVar3 & uVar1,param_3,&local_30);
    return;
  }
  uStack_28 = param_4[1];
  local_30 = *param_4;
  uStack_18 = param_4[3];
  uStack_20 = param_4[2];
  FUN_00379ac4(*(undefined4 *)(param_1 + 0x60),param_2,param_3,&local_30);
  return;
}


// ===== 003d4678  thunk_FUN_0037f6d4 =====

long thunk_FUN_0037f6d4(void)

{
  long lVar1;
  long lVar2;
  
  lVar2 = FUN_0037a18c();
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 900) == *(int *)(lVar2 + 0x380)) {
      return 0;
    }
    lVar1 = lVar2 + (long)*(int *)(lVar2 + 0x380) * 4;
    lVar2 = 1;
    *(int *)(lVar1 + 0x40) = *(int *)(lVar1 + 0x40) + 1;
  }
  return lVar2;
}


// ===== 003d467c  thunk_FUN_0037f8c4 =====

long thunk_FUN_0037f8c4(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  lVar3 = FUN_0037a18c();
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 900) == *(int *)(lVar3 + 0x380)) {
      return 0;
    }
    lVar1 = lVar3 + 0x40;
    iVar4 = *(int *)(lVar3 + 0x380);
    while( true ) {
      iVar2 = *(int *)(lVar1 + (long)iVar4 * 4);
      if (iVar2 != 0) break;
      iVar2 = iVar4 + -1;
      if (iVar4 < 1) {
        iVar2 = 0xf;
      }
      iVar4 = iVar2;
      if (*(int *)(lVar3 + 900) == iVar2) {
        return 0;
      }
    }
    lVar3 = 1;
    *(int *)(lVar1 + (long)iVar4 * 4) = iVar2 + -1;
  }
  return lVar3;
}


// ===== 003d4680  thunk_FUN_0037f71c =====

long thunk_FUN_0037f71c(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  long lVar10;
  
  lVar4 = FUN_0037a18c();
  if (lVar4 != 0) {
    iVar6 = *(int *)(lVar4 + 0x380);
    if (*(int *)(lVar4 + 900) != iVar6) {
      lVar1 = lVar4 + 0x40;
      do {
        iVar3 = *(int *)(lVar1 + (long)iVar6 * 4);
        lVar7 = (long)iVar6;
        if (iVar3 != 0) {
          *(int *)(lVar1 + lVar7 * 4) = iVar3 + -1;
          return 1;
        }
        lVar10 = lVar7 * 8;
        if ((*(uint *)(lVar4 + 0x200 + lVar7 * 4) & 1) == 0) {
          uVar8 = 0;
          *(undefined8 *)(lVar4 + 0x100 + lVar10) = 0;
          *(undefined8 *)(lVar4 + 0x180 + lVar10) = 0;
LAB_0037f7a0:
          *(undefined4 *)(lVar4 + 0x200 + lVar7 * 4) = uVar8;
        }
        else {
          puVar9 = *(undefined1 **)(lVar4 + 0x100 + lVar7 * 8);
          if (puVar9 != (undefined1 *)0x0) {
            *puVar9 = 0;
            uVar8 = 1;
            goto LAB_0037f7a0;
          }
        }
        lVar7 = lVar7 * 4;
        uVar5 = *(undefined8 *)(lVar4 + 0x240 + lVar10);
        *(undefined8 *)(lVar4 + 0x80 + lVar10) = 0;
        *(undefined4 *)(lVar1 + lVar7) = 0;
        *(undefined4 *)(lVar4 + lVar7) = 0;
        *(undefined4 *)(lVar4 + 0x2c0 + lVar7) = 0xffffffff;
        FUN_003c86b4(uVar5,"crypto/err/err_local.h",0x5b);
        *(undefined8 *)(lVar4 + 0x240 + lVar10) = 0;
        FUN_003c86b4(*(undefined8 *)(lVar4 + 0x300 + lVar10),"crypto/err/err_local.h",0x5d);
        iVar3 = *(int *)(lVar4 + 0x380);
        iVar2 = *(int *)(lVar4 + 900);
        *(undefined8 *)(lVar4 + 0x300 + lVar10) = 0;
        iVar6 = iVar3 + -1;
        if (iVar3 < 1) {
          iVar6 = 0xf;
        }
        *(int *)(lVar4 + 0x380) = iVar6;
      } while (iVar2 != iVar6);
    }
    lVar4 = 0;
  }
  return lVar4;
}


// ===== 003d4684  thunk_FUN_003d4c3c =====

void thunk_FUN_003d4c3c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_003b9c48(param_1,0xc);
  if (param_2 != (undefined8 *)0x0) {
    if (puVar1 == (undefined8 *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *puVar1;
    }
    *param_2 = uVar2;
  }
  if (param_3 != (undefined8 *)0x0) {
    if (puVar1 == (undefined8 *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = puVar1[1];
    }
    *param_3 = uVar2;
  }
  return;
}


// ===== 003d4688  FUN_003d4688 =====

void FUN_003d4688(long param_1)

{
  FUN_003ec0e8(*(undefined8 *)(param_1 + 0x50));
  return;
}


// ===== 003d4690  FUN_003d4690 =====

void FUN_003d4690(long param_1)

{
  FUN_003ec1a4(*(undefined8 *)(param_1 + 0x50));
  return;
}


// ===== 003d4698  FUN_003d4698 =====

void FUN_003d4698(long param_1)

{
  FUN_003ec234(*(undefined8 *)(param_1 + 0x50));
  return;
}


// ===== 003d46a0  FUN_003d46a0 =====

void FUN_003d46a0(long param_1)

{
  FUN_003ec250(*(undefined8 *)(param_1 + 0x50));
  return;
}


// ===== 003d46a8  FUN_003d46a8 =====

void FUN_003d46a8(long param_1)

{
  FUN_003ec2bc(*(undefined8 *)(param_1 + 0x50));
  return;
}


// ===== 003d46b0  FUN_003d46b0 =====

void FUN_003d46b0(long param_1)

{
  FUN_003ec394(*(undefined8 *)(param_1 + 0x50));
  return;
}


// ===== 003d46b8  FUN_003d46b8 =====

void FUN_003d46b8(long param_1)

{
  FUN_003ec47c(*(undefined8 *)(param_1 + 0x50));
  return;
}


// ===== 003d46c0  FUN_003d46c0 =====

void FUN_003d46c0(long param_1)

{
  FUN_003ec498(*(undefined8 *)(param_1 + 0x50));
  return;
}


// ===== 003d46c8  FUN_003d46c8 =====

int FUN_003d46c8(long param_1,code *param_2,code *param_3,code *param_4,long param_5)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  byte *pbVar10;
  int iVar11;
  undefined8 uVar12;
  
  uVar12 = *(undefined8 *)(param_1 + 0x50);
  lVar6 = FUN_003b9c48(uVar12,1);
  if (lVar6 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/provider_core.c",0x14d,"get_provider_store");
    FUN_00379a5c(0xf,0xc0103,0);
    return 0;
  }
  plVar7 = (long *)FUN_003c83a4(0x28,"crypto/provider_core.c",0x703);
  if (plVar7 == (long *)0x0) {
    return 0;
  }
  *plVar7 = param_1;
  plVar7[1] = (long)param_2;
  plVar7[2] = (long)param_3;
  plVar7[3] = (long)param_4;
  uVar8 = *(undefined8 *)(lVar6 + 0x20);
  plVar7[4] = param_5;
  iVar3 = FUN_003d518c(uVar8);
  if (iVar3 == 0) {
    FUN_003c86b4(plVar7,"crypto/provider_core.c",0x70d);
    return 0;
  }
  lVar9 = FUN_00383314(uVar12,0);
  if (lVar9 != 0) {
    (*param_4)(lVar9,param_5);
    FUN_003c86b4(lVar9,"crypto/provider_core.c",0x714);
  }
  iVar3 = FUN_0040caf8(*(undefined8 *)(lVar6 + 8));
  if (iVar3 < 1) {
    iVar11 = 0;
    iVar4 = 0;
    if (iVar3 == 0) {
LAB_003d47e0:
      iVar5 = FUN_0040c89c(*(undefined8 *)(lVar6 + 0x10),plVar7);
      bVar2 = iVar11 == iVar3;
      iVar4 = iVar11;
      iVar3 = iVar11;
      if (bVar2) goto LAB_003d4874;
    }
  }
  else {
    iVar11 = 0;
    do {
      pbVar10 = (byte *)FUN_0040cb0c(*(undefined8 *)(lVar6 + 8),iVar11);
      iVar4 = FUN_003d517c(*(undefined8 *)(pbVar10 + 8));
      if ((iVar4 == 0) ||
         ((bVar1 = *pbVar10, FUN_003d519c(*(undefined8 *)(pbVar10 + 8)), (bVar1 >> 1 & 1) != 0 &&
          (iVar4 = (*param_2)(pbVar10,param_5), iVar4 == 0)))) {
        iVar4 = iVar11;
        if (iVar11 != iVar3) goto LAB_003d487c;
        goto LAB_003d47e0;
      }
      iVar11 = iVar11 + 1;
    } while (iVar3 != iVar11);
    iVar5 = FUN_0040c89c(*(undefined8 *)(lVar6 + 0x10),plVar7);
LAB_003d4874:
    iVar4 = iVar3;
    if (0 < iVar5) goto LAB_003d48b8;
  }
LAB_003d487c:
  if (-1 < iVar4) {
    do {
      uVar12 = FUN_0040cb0c(*(undefined8 *)(lVar6 + 8),iVar4);
      (*param_3)(uVar12,param_5);
      iVar4 = iVar4 + -1;
    } while (iVar4 != -1);
  }
  FUN_003c86b4(plVar7,"crypto/provider_core.c",0x736);
  iVar5 = 0;
LAB_003d48b8:
  FUN_003d519c(*(undefined8 *)(lVar6 + 0x20));
  return iVar5;
}


// ===== 003d48e8  FUN_003d48e8 =====

void FUN_003d48e8(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  
  lVar2 = FUN_003b9c48(*(undefined8 *)(param_1 + 0x50),1);
  if (lVar2 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/provider_core.c",0x14d,"get_provider_store");
    FUN_00379a5c(0xf,0xc0103,0);
    return;
  }
  iVar1 = FUN_003d518c(*(undefined8 *)(lVar2 + 0x20));
  if (iVar1 != 0) {
    iVar1 = FUN_0040caf8(*(undefined8 *)(lVar2 + 0x10));
    if (0 < iVar1) {
      iVar4 = 0;
      do {
        plVar3 = (long *)FUN_0040cb0c(*(undefined8 *)(lVar2 + 0x10),iVar4);
        if (*plVar3 == param_1) {
          FUN_0040c404(*(undefined8 *)(lVar2 + 0x10),iVar4);
          FUN_003c86b4(plVar3,"crypto/provider_core.c",0x755);
          FUN_003d519c(*(undefined8 *)(lVar2 + 0x20));
          return;
        }
        iVar4 = iVar4 + 1;
      } while (iVar1 != iVar4);
    }
    FUN_003d519c(*(undefined8 *)(lVar2 + 0x20));
    return;
  }
  return;
}


// ===== 003d49f4  thunk_FUN_003d406c =====

undefined8 thunk_FUN_003d406c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}


