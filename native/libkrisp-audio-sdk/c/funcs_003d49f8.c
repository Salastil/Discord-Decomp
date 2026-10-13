// ===== 003d49f8  thunk_FUN_003d408c =====

long thunk_FUN_003d408c(long param_1)

{
  if (param_1 != 0) {
    param_1 = *(long *)(param_1 + 0xd0);
  }
  return param_1;
}


// ===== 003d49fc  thunk_FUN_003d4098 =====

long thunk_FUN_003d4098(long param_1)

{
  if (param_1 != 0) {
    param_1 = *(long *)(param_1 + 0xd8);
  }
  return param_1;
}


// ===== 003d4a00  FUN_003d4a00 =====

ulong FUN_003d4a00(long param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  if (param_2 != 0) {
    uVar3 = FUN_003d31f4(param_1,1,0);
    return uVar3;
  }
  uVar1 = *(int *)(param_1 + 0x10) + 1;
  *(uint *)(param_1 + 0x10) = uVar1;
  if (((*(byte *)(param_1 + 200) & 1) != 0) && (iVar2 = FUN_003d16fc(param_1,0), iVar2 == 0)) {
    FUN_003d27b0(param_1);
    return 0;
  }
  return (ulong)uVar1;
}


// ===== 003d4a6c  FUN_003d4a6c =====

undefined8 FUN_003d4a6c(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    FUN_003d27b0();
  }
  else {
    if (param_1 == 0) {
      return 0;
    }
    iVar1 = FUN_003d3944(param_1,1,1);
    if (iVar1 < 0) {
      return 0;
    }
    if (iVar1 == 0) {
      uVar2 = FUN_003d3ae4(param_1);
      return uVar2;
    }
  }
  return 1;
}


// ===== 003d4acc  FUN_003d4acc =====

ulong FUN_003d4acc(undefined8 param_1,undefined8 param_2,char *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  
  iVar1 = FUN_003dd5bc(param_2);
  iVar2 = FUN_003dd5bc(param_4);
  if (param_3 != (char *)0x0) {
    if (*param_3 == '\0') {
      param_3 = (char *)0x0;
    }
    else {
      uVar4 = FUN_003dd5bc(param_3);
      param_3 = (char *)(uVar4 & 0xffffffff);
      if ((int)uVar4 == 0) {
        return uVar4;
      }
    }
  }
  if (iVar1 != 0) {
    iVar3 = FUN_003de640(iVar1,0,0);
    if (iVar3 != 0) {
      return 1;
    }
    if (iVar2 != 0) {
      uVar4 = FUN_003de8f8(iVar1,(ulong)param_3 & 0xffffffff,iVar2);
      return uVar4;
    }
  }
  return 0;
}


// ===== 003d4b84  FUN_003d4b84 =====

bool FUN_003d4b84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = FUN_003dd5bc(param_2);
  if (iVar1 != 0) {
    return true;
  }
  iVar1 = FUN_003dd75c(param_2,param_3,param_4);
  return iVar1 != 0;
}


// ===== 003d4be8  FUN_003d4be8 =====

void FUN_003d4be8(void)

{
  FUN_003c8474(0x10,"crypto/self_test_core.c",0x28);
  return;
}


// ===== 003d4bfc  FUN_003d4bfc =====

void FUN_003d4bfc(undefined8 param_1)

{
  FUN_003c86b4(param_1,"crypto/self_test_core.c",0x2e);
  return;
}


// ===== 003d4c0c  FUN_003d4c0c =====

void FUN_003d4c0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_003b9c48(param_1,0xc);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_3;
  }
  return;
}


// ===== 003d4c3c  FUN_003d4c3c =====

void FUN_003d4c3c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

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


// ===== 003d4c94  FUN_003d4c94 =====

undefined8 * FUN_003d4c94(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  puVar1 = (undefined8 *)FUN_003c8474(200,"crypto/self_test_core.c",0x61);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[0x18] = param_2;
    *puVar1 = &DAT_001c717f;
    puVar1[1] = &DAT_001c717f;
    puVar1[2] = &DAT_001c717f;
    puVar1[3] = param_1;
    if (param_1 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_003cd8cc(&local_58,"st-phase",&DAT_001c717f,0);
      puVar1[8] = local_38;
      puVar1[5] = uStack_50;
      puVar1[4] = local_58;
      puVar1[7] = uStack_40;
      puVar1[6] = local_48;
      FUN_003cd8cc(&local_58,"st-type",&DAT_001c717f,0);
      puVar1[0xd] = local_38;
      puVar1[10] = uStack_50;
      puVar1[9] = local_58;
      puVar1[0xc] = uStack_40;
      puVar1[0xb] = local_48;
      FUN_003cd8cc(&local_58,"st-desc",&DAT_001c717f,0);
      puVar1[0x12] = local_38;
      lVar2 = 3;
      puVar1[0xf] = uStack_50;
      puVar1[0xe] = local_58;
      puVar1[0x11] = uStack_40;
      puVar1[0x10] = local_48;
    }
    FUN_003cdfcc(&local_58);
    puVar1[lVar2 * 5 + 5] = uStack_50;
    puVar1[lVar2 * 5 + 4] = local_58;
    puVar1[lVar2 * 5 + 7] = uStack_40;
    puVar1[lVar2 * 5 + 6] = local_48;
    puVar1[lVar2 * 5 + 8] = local_38;
  }
  return puVar1;
}


// ===== 003d4dbc  FUN_003d4dbc =====

void FUN_003d4dbc(undefined8 param_1)

{
  FUN_003c86b4(param_1,"crypto/self_test_core.c",0x71);
  return;
}


// ===== 003d4dcc  FUN_003d4dcc =====

void FUN_003d4dcc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  if ((param_1 != (undefined8 *)0x0) && (param_1[3] != 0)) {
    *param_1 = "Start";
    param_1[1] = param_2;
    param_1[2] = param_3;
    FUN_003cd8cc(&local_48,"st-phase","Start",0);
    param_1[8] = local_28;
    param_1[5] = uStack_40;
    param_1[4] = local_48;
    param_1[7] = uStack_30;
    param_1[6] = local_38;
    FUN_003cd8cc(&local_48,"st-type",param_1[1],0);
    param_1[0xd] = local_28;
    param_1[10] = uStack_40;
    param_1[9] = local_48;
    param_1[0xc] = uStack_30;
    param_1[0xb] = local_38;
    FUN_003cd8cc(&local_48,"st-desc",param_1[2],0);
    param_1[0x12] = local_28;
    param_1[0xf] = uStack_40;
    param_1[0xe] = local_48;
    param_1[0x11] = uStack_30;
    param_1[0x10] = local_38;
    FUN_003cdfcc(&local_48);
    param_1[0x14] = uStack_40;
    param_1[0x13] = local_48;
    param_1[0x16] = uStack_30;
    param_1[0x15] = local_38;
    param_1[0x17] = local_28;
    (*(code *)param_1[3])(param_1 + 4,param_1[0x18]);
  }
  return;
}


// ===== 003d4ec8  FUN_003d4ec8 =====

void FUN_003d4ec8(undefined8 *param_1,int param_2)

{
  undefined *puVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  if ((param_1 != (undefined8 *)0x0) && (param_1[3] != 0)) {
    puVar1 = &UNK_001e6dda;
    if (param_2 != 1) {
      puVar1 = &DAT_001e0c05;
    }
    *param_1 = puVar1;
    FUN_003cd8cc(&local_48,"st-phase",puVar1,0);
    param_1[8] = local_28;
    param_1[5] = uStack_40;
    param_1[4] = local_48;
    param_1[7] = uStack_30;
    param_1[6] = local_38;
    FUN_003cd8cc(&local_48,"st-type",param_1[1],0);
    param_1[0xd] = local_28;
    param_1[10] = uStack_40;
    param_1[9] = local_48;
    param_1[0xc] = uStack_30;
    param_1[0xb] = local_38;
    FUN_003cd8cc(&local_48,"st-desc",param_1[2],0);
    param_1[0x12] = local_28;
    param_1[0xf] = uStack_40;
    param_1[0xe] = local_48;
    param_1[0x11] = uStack_30;
    param_1[0x10] = local_38;
    FUN_003cdfcc(&local_48);
    param_1[0x14] = uStack_40;
    param_1[0x13] = local_48;
    param_1[0x16] = uStack_30;
    param_1[0x15] = local_38;
    param_1[0x17] = local_28;
    (*(code *)param_1[3])(param_1 + 4,param_1[0x18]);
    *param_1 = &DAT_001e6ddf;
    param_1[1] = &DAT_001e6ddf;
    param_1[2] = &DAT_001e6ddf;
  }
  return;
}


// ===== 003d4fdc  FUN_003d4fdc =====

undefined8 * FUN_003d4fdc(undefined8 *param_1,byte *param_2)

{
  int iVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  if (param_1 != (undefined8 *)0x0) {
    if (param_1[3] != 0) {
      *param_1 = "Corrupt";
      FUN_003cd8cc(&local_48,"st-phase","Corrupt",0);
      param_1[8] = local_28;
      param_1[5] = uStack_40;
      param_1[4] = local_48;
      param_1[7] = uStack_30;
      param_1[6] = local_38;
      FUN_003cd8cc(&local_48,"st-type",param_1[1],0);
      param_1[0xd] = local_28;
      param_1[10] = uStack_40;
      param_1[9] = local_48;
      param_1[0xc] = uStack_30;
      param_1[0xb] = local_38;
      FUN_003cd8cc(&local_48,"st-desc",param_1[2],0);
      param_1[0x12] = local_28;
      param_1[0xf] = uStack_40;
      param_1[0xe] = local_48;
      param_1[0x11] = uStack_30;
      param_1[0x10] = local_38;
      FUN_003cdfcc(&local_48);
      param_1[0x14] = uStack_40;
      param_1[0x13] = local_48;
      param_1[0x16] = uStack_30;
      param_1[0x15] = local_38;
      param_1[0x17] = local_28;
      iVar1 = (*(code *)param_1[3])(param_1 + 4,param_1[0x18]);
      if (iVar1 != 0) {
        return (undefined8 *)0x0;
      }
      *param_2 = *param_2 ^ 1;
      return (undefined8 *)0x1;
    }
    param_1 = (undefined8 *)0x0;
  }
  return param_1;
}


// ===== 003d5104  FUN_003d5104 =====

int FUN_003d5104(ulong param_1)

{
  int iVar1;
  uint __seconds;
  
  __seconds = (uint)(param_1 / 1000);
  sleep(__seconds);
  iVar1 = usleep(((int)param_1 + __seconds * -1000) * 1000);
  return iVar1;
}


// ===== 003d5150  FUN_003d5150 =====

void FUN_003d5150(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_003c8474(4,0,0);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 1;
  }
  return;
}


// ===== 003d517c  FUN_003d517c =====

bool FUN_003d517c(int *param_1)

{
  return *param_1 == 1;
}


// ===== 003d518c  FUN_003d518c =====

bool FUN_003d518c(int *param_1)

{
  return *param_1 == 1;
}


// ===== 003d519c  FUN_003d519c =====

bool FUN_003d519c(int *param_1)

{
  return *param_1 == 1;
}


// ===== 003d51ac  FUN_003d51ac =====

void FUN_003d51ac(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    FUN_003c86b4(param_1,"crypto/threads_none.c",0x3b);
    return;
  }
  return;
}


// ===== 003d51c8  FUN_003d51c8 =====

undefined8 FUN_003d51c8(int *param_1,code *param_2)

{
  if (*param_1 != 0) {
    return 1;
  }
  (*param_2)();
  *param_1 = 1;
  return 1;
}


// ===== 003d5204  FUN_003d5204 =====

undefined8 FUN_003d5204(uint *param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = (ulong)DAT_007abaa0;
  if (0xff < DAT_007abaa0) {
    return 0;
  }
  iVar1 = DAT_007abaa0 + 1;
  *param_1 = DAT_007abaa0;
  DAT_007abaa0 = iVar1;
  *(undefined8 *)(&DAT_007abaa8 + uVar2 * 8) = 0;
  return 1;
}


// ===== 003d5240  FUN_003d5240 =====

undefined8 FUN_003d5240(uint *param_1)

{
  if (0xff < *param_1) {
    return 0;
  }
  return *(undefined8 *)(&DAT_007abaa8 + (ulong)*param_1 * 8);
}


// ===== 003d5268  FUN_003d5268 =====

undefined8 FUN_003d5268(uint *param_1,undefined8 param_2)

{
  if (0xff < *param_1) {
    return 0;
  }
  *(undefined8 *)(&DAT_007abaa8 + (ulong)*param_1 * 8) = param_2;
  return 1;
}


// ===== 003d5294  FUN_003d5294 =====

undefined8 FUN_003d5294(undefined4 *param_1)

{
  *param_1 = 0x101;
  return 1;
}


// ===== 003d52a8  FUN_003d52a8 =====

undefined8 FUN_003d52a8(void)

{
  return 0;
}


// ===== 003d52b0  FUN_003d52b0 =====

bool FUN_003d52b0(int param_1,int param_2)

{
  return param_1 == param_2;
}


// ===== 003d52bc  FUN_003d52bc =====

undefined8 FUN_003d52bc(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + param_2;
  *param_3 = iVar1 + param_2;
  return 1;
}


// ===== 003d52d4  FUN_003d52d4 =====

undefined8 FUN_003d52d4(ulong *param_1,ulong param_2,ulong *param_3)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  *param_1 = uVar1 | param_2;
  *param_3 = uVar1 | param_2;
  return 1;
}


// ===== 003d52ec  FUN_003d52ec =====

undefined8 FUN_003d52ec(undefined8 *param_1,undefined8 *param_2)

{
  *param_2 = *param_1;
  return 1;
}


// ===== 003d52fc  FUN_003d52fc =====

undefined8 FUN_003d52fc(undefined4 *param_1,undefined4 *param_2)

{
  *param_2 = *param_1;
  return 1;
}


// ===== 003d530c  FUN_003d530c =====

undefined8 FUN_003d530c(void)

{
  return 0;
}


// ===== 003d5314  <EXTERNAL>::getpid =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_getpid_007a3f10)();
  return _Var1;
}


// ===== 003d5318  FUN_003d5318 =====

undefined * FUN_003d5318(uint param_1)

{
  undefined *puVar1;
  
  if (param_1 < 0x13) {
    puVar1 = (&PTR_DAT_0076bcc8)[(ulong)param_1 * 2];
    if (puVar1 != (undefined *)0x0) {
      if ((&DAT_0076bcd0)[(ulong)param_1 * 4] != param_1) {
        puVar1 = (undefined *)0x0;
      }
      return puVar1;
    }
  }
  return (undefined *)0x0;
}


// ===== 003d534c  FUN_003d534c =====

undefined4 FUN_003d534c(long param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  iVar1 = FUN_003cab04(param_1,&DAT_001f3612);
  if (iVar1 == 0) {
    return DAT_0076bcd0;
  }
  iVar1 = FUN_003cab04(param_1,"TRACE");
  if (iVar1 == 0) {
    return DAT_0076bce0;
  }
  iVar1 = FUN_003cab04(param_1,&DAT_001ef349);
  if (iVar1 == 0) {
    return DAT_0076bcf0;
  }
  iVar1 = FUN_003cab04(param_1,&DAT_001ba166);
  if (iVar1 == 0) {
    return DAT_0076bd00;
  }
  iVar1 = FUN_003cab04(param_1,"TLS_CIPHER");
  if (iVar1 == 0) {
    return DAT_0076bd10;
  }
  iVar1 = FUN_003cab04(param_1,&DAT_001ba16a);
  if (iVar1 == 0) {
    return DAT_0076bd20;
  }
  iVar1 = FUN_003cab04(param_1,"ENGINE_TABLE");
  if (iVar1 == 0) {
    return DAT_0076bd30;
  }
  iVar1 = FUN_003cab04(param_1,"ENGINE_REF_COUNT");
  if (iVar1 == 0) {
    return DAT_0076bd40;
  }
  iVar1 = FUN_003cab04(param_1,"PKCS5V2");
  if (iVar1 == 0) {
    return DAT_0076bd50;
  }
  iVar1 = FUN_003cab04(param_1,"PKCS12_KEYGEN");
  if (iVar1 == 0) {
    return DAT_0076bd60;
  }
  iVar1 = FUN_003cab04(param_1,"PKCS12_DECRYPT");
  if (iVar1 == 0) {
    return DAT_0076bd70;
  }
  iVar1 = FUN_003cab04(param_1,"X509V3_POLICY");
  if (iVar1 == 0) {
    return DAT_0076bd80;
  }
  iVar1 = FUN_003cab04(param_1,"BN_CTX");
  if (iVar1 == 0) {
    return DAT_0076bd90;
  }
  iVar1 = FUN_003cab04(param_1,&DAT_001f5935);
  if (iVar1 == 0) {
    return DAT_0076bda0;
  }
  iVar1 = FUN_003cab04(param_1,"STORE");
  if (iVar1 != 0) {
    iVar1 = FUN_003cab04(param_1,"DECODER");
    if (iVar1 == 0) {
      return DAT_0076bdc0;
    }
    iVar1 = FUN_003cab04(param_1,"ENCODER");
    if (iVar1 == 0) {
      return DAT_0076bdd0;
    }
    iVar1 = FUN_003cab04(param_1,"REF_COUNT");
    if (iVar1 == 0) {
      return DAT_0076bde0;
    }
    iVar1 = FUN_003cab04(param_1,&DAT_001c579a);
    if (iVar1 != 0) {
      return 0xffffffff;
    }
    return DAT_0076bdf0;
  }
  return DAT_0076bdb0;
}


// ===== 003d56b8  FUN_003d56b8 =====

void FUN_003d56b8(void)

{
  return;
}


// ===== 003d56bc  FUN_003d56bc =====

undefined8 FUN_003d56bc(void)

{
  return 0;
}


// ===== 003d56c4  FUN_003d56c4 =====

undefined8 FUN_003d56c4(void)

{
  return 0;
}


// ===== 003d56cc  FUN_003d56cc =====

undefined8 FUN_003d56cc(void)

{
  return 0;
}


// ===== 003d56d4  FUN_003d56d4 =====

undefined8 FUN_003d56d4(void)

{
  return 0;
}


// ===== 003d56dc  FUN_003d56dc =====

undefined8 FUN_003d56dc(void)

{
  return 0;
}


// ===== 003d56e4  FUN_003d56e4 =====

undefined8 FUN_003d56e4(void)

{
  return 0;
}


// ===== 003d56ec  FUN_003d56ec =====

void FUN_003d56ec(void)

{
  return;
}


// ===== 003d56f0  FUN_003d56f0 =====

void FUN_003d56f0(undefined8 param_1,int param_2,int param_3,char *param_4,ulong param_5)

{
  int iVar1;
  char cVar2;
  ulong uVar3;
  char *pcVar4;
  char acStack_91 [81];
  
  if ((param_3 == 0) && (0x50 < param_5)) {
    FUN_0037b9f8(param_1,"[len %zu limited to %d]: ",param_5,0x50);
    param_5 = 0x50;
    if (param_2 != 0) goto LAB_003d57c8;
LAB_003d5754:
    uVar3 = param_5 & 0xffffffff;
    pcVar4 = acStack_91;
    do {
      if (*param_4 == '\n') {
        cVar2 = '\n';
      }
      else {
        iVar1 = FUN_003c475c(*param_4,0x40);
        if (iVar1 == 0) {
          cVar2 = *param_4;
        }
        else {
          cVar2 = ' ';
        }
      }
      uVar3 = uVar3 - 1;
      param_4 = param_4 + 1;
      *pcVar4 = cVar2;
      pcVar4 = pcVar4 + 1;
    } while (uVar3 != 0);
LAB_003d57a0:
    if (param_4[-1] == '\n') {
      param_4 = acStack_91;
      goto LAB_003d57c8;
    }
  }
  else {
    if (param_2 != 0) goto LAB_003d57c8;
    if (0 < (int)param_5) goto LAB_003d5754;
    if ((int)param_5 != 0) goto LAB_003d57a0;
  }
  param_4 = acStack_91;
  param_4[(int)param_5] = '\n';
  param_5 = (ulong)((int)param_5 + 1);
LAB_003d57c8:
  FUN_0037b9f8(param_1,&DAT_001d8251,param_5 & 0xffffffff,param_4);
  return;
}


// ===== 003d57f8  FUN_003d57f8 =====

bool FUN_003d57f8(void)

{
  long lVar1;
  
  lVar1 = getauxval(0x17);
  return lVar1 != 0;
}


// ===== 003d5818  FUN_003d5818 =====

undefined8 FUN_003d5818(long param_1,void *param_2,ulong param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong uVar4;
  size_t __n;
  
  if (param_3 != 0) {
    uVar3 = *(uint *)(param_1 + 0x10);
    uVar1 = (int)param_3 * 8;
    uVar4 = (ulong)*(uint *)(param_1 + 0x58);
    *(uint *)(param_1 + 0x10) = uVar3 + uVar1;
    *(uint *)(param_1 + 0x14) =
         *(int *)(param_1 + 0x14) + (int)(param_3 >> 0x1d) + (uint)CARRY4(uVar3,uVar1);
    if (*(uint *)(param_1 + 0x58) != 0) {
      puVar2 = (undefined8 *)(param_1 + 0x18);
      if ((param_3 < 0x40) && (uVar4 + param_3 < 0x40)) {
        memcpy((void *)((long)puVar2 + uVar4),param_2,param_3);
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (int)param_3;
        return 1;
      }
      __n = 0x40 - uVar4;
      memcpy((void *)((long)puVar2 + uVar4),param_2,__n);
      FUN_003d5920(param_1,puVar2,1);
      param_3 = param_3 - __n;
      param_2 = (void *)((long)param_2 + __n);
      *(undefined4 *)(param_1 + 0x58) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *puVar2 = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
    }
    if (0x3f < param_3) {
      FUN_003d5920(param_1,param_2,param_3 >> 6);
      uVar4 = param_3 & 0xffffffffffffffc0;
      param_3 = param_3 & 0x3f;
      param_2 = (void *)((long)param_2 + uVar4);
    }
    if (param_3 != 0) {
      *(int *)(param_1 + 0x58) = (int)param_3;
      memcpy((void *)(param_1 + 0x18),param_2,param_3);
    }
  }
  return 1;
}


// ===== 003d5920  FUN_003d5920 =====

void FUN_003d5920(int *param_1,int *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  
  if (param_3 != 0) {
    uVar22 = param_1[2];
    uVar21 = param_1[3];
    iVar23 = *param_1;
    uVar24 = param_1[1];
    do {
      iVar5 = *param_2;
      iVar13 = param_2[1];
      uVar1 = iVar23 + (uVar22 & uVar24 | uVar21 & (uVar24 ^ 0xffffffff)) + iVar5 + -0x28955b88;
      iVar6 = param_2[2];
      iVar14 = param_2[3];
      uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar24;
      uVar2 = uVar21 + iVar13 + -0x173848aa + (uVar24 & uVar1 | uVar22 & (uVar1 ^ 0xffffffff));
      param_3 = param_3 + -1;
      uVar2 = (uVar2 >> 0x14 | uVar2 * 0x1000) + uVar1;
      uVar3 = uVar22 + iVar6 + 0x242070db + (uVar1 & uVar2 | uVar24 & (uVar2 ^ 0xffffffff));
      uVar3 = (uVar3 >> 0xf | uVar3 * 0x20000) + uVar2;
      uVar4 = uVar24 + iVar14 + -0x3e423112 + (uVar2 & uVar3 | uVar1 & (uVar3 ^ 0xffffffff));
      iVar7 = param_2[4];
      iVar15 = param_2[5];
      uVar4 = (uVar4 >> 10 | uVar4 * 0x400000) + uVar3;
      uVar1 = uVar1 + iVar7 + -0xa83f051 + (uVar3 & uVar4 | uVar2 & (uVar4 ^ 0xffffffff));
      uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar4;
      uVar2 = uVar2 + iVar15 + 0x4787c62a + (uVar4 & uVar1 | uVar3 & (uVar1 ^ 0xffffffff));
      iVar8 = param_2[6];
      iVar16 = param_2[7];
      uVar2 = (uVar2 >> 0x14 | uVar2 * 0x1000) + uVar1;
      uVar3 = uVar3 + iVar8 + -0x57cfb9ed + (uVar1 & uVar2 | uVar4 & (uVar2 ^ 0xffffffff));
      uVar3 = (uVar3 >> 0xf | uVar3 * 0x20000) + uVar2;
      uVar4 = uVar4 + iVar16 + -0x2b96aff + (uVar2 & uVar3 | uVar1 & (uVar3 ^ 0xffffffff));
      iVar9 = param_2[8];
      iVar17 = param_2[9];
      uVar4 = (uVar4 >> 10 | uVar4 * 0x400000) + uVar3;
      uVar1 = uVar1 + iVar9 + 0x698098d8 + (uVar3 & uVar4 | uVar2 & (uVar4 ^ 0xffffffff));
      uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar4;
      uVar2 = uVar2 + iVar17 + -0x74bb0851 + (uVar4 & uVar1 | uVar3 & (uVar1 ^ 0xffffffff));
      iVar10 = param_2[10];
      iVar18 = param_2[0xb];
      uVar2 = (uVar2 >> 0x14 | uVar2 * 0x1000) + uVar1;
      uVar3 = iVar10 + uVar3 + -0xa44f + (uVar1 & uVar2 | uVar4 & (uVar2 ^ 0xffffffff));
      uVar3 = (uVar3 >> 0xf | uVar3 * 0x20000) + uVar2;
      uVar4 = iVar18 + uVar4 + -0x76a32842 + (uVar2 & uVar3 | uVar1 & (uVar3 ^ 0xffffffff));
      iVar11 = param_2[0xc];
      iVar19 = param_2[0xd];
      uVar4 = (uVar4 >> 10 | uVar4 * 0x400000) + uVar3;
      uVar1 = iVar11 + uVar1 + 0x6b901122 + (uVar3 & uVar4 | uVar2 & (uVar4 ^ 0xffffffff));
      uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar4;
      uVar2 = iVar19 + uVar2 + -0x2678e6d + (uVar4 & uVar1 | uVar3 & (uVar1 ^ 0xffffffff));
      iVar12 = param_2[0xe];
      iVar20 = param_2[0xf];
      uVar2 = (uVar2 >> 0x14 | uVar2 * 0x1000) + uVar1;
      param_2 = param_2 + 0x10;
      uVar3 = iVar12 + uVar3 + -0x5986bc72 + (uVar1 & uVar2 | uVar4 & (uVar2 ^ 0xffffffff));
      uVar3 = (uVar3 >> 0xf | uVar3 * 0x20000) + uVar2;
      uVar4 = iVar20 + uVar4 + 0x49b40821 + (uVar2 & uVar3 | uVar1 & (uVar3 ^ 0xffffffff));
      uVar4 = (uVar4 >> 10 | uVar4 * 0x400000) + uVar3;
      uVar1 = iVar13 + uVar1 + -0x9e1da9e + (uVar4 & uVar2 | uVar3 & (uVar2 ^ 0xffffffff));
      uVar1 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar4;
      uVar2 = iVar8 + uVar2 + -0x3fbf4cc0 + (uVar1 & uVar3 | uVar4 & (uVar3 ^ 0xffffffff));
      uVar2 = (uVar2 >> 0x17 | uVar2 * 0x200) + uVar1;
      uVar3 = iVar18 + uVar3 + 0x265e5a51 + (uVar2 & uVar4 | uVar1 & (uVar4 ^ 0xffffffff));
      uVar3 = (uVar3 >> 0x12 | uVar3 * 0x4000) + uVar2;
      uVar4 = iVar5 + uVar4 + -0x16493856 + (uVar3 & uVar1 | uVar2 & (uVar1 ^ 0xffffffff));
      uVar4 = (uVar4 >> 0xc | uVar4 * 0x100000) + uVar3;
      uVar1 = iVar15 + uVar1 + -0x29d0efa3 + (uVar4 & uVar2 | uVar3 & (uVar2 ^ 0xffffffff));
      uVar1 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar4;
      uVar2 = iVar10 + uVar2 + 0x2441453 + (uVar1 & uVar3 | uVar4 & (uVar3 ^ 0xffffffff));
      uVar2 = (uVar2 >> 0x17 | uVar2 * 0x200) + uVar1;
      uVar3 = iVar20 + uVar3 + -0x275e197f + (uVar2 & uVar4 | uVar1 & (uVar4 ^ 0xffffffff));
      uVar3 = (uVar3 >> 0x12 | uVar3 * 0x4000) + uVar2;
      uVar4 = iVar7 + uVar4 + -0x182c0438 + (uVar3 & uVar1 | uVar2 & (uVar1 ^ 0xffffffff));
      uVar4 = (uVar4 >> 0xc | uVar4 * 0x100000) + uVar3;
      uVar1 = iVar17 + uVar1 + 0x21e1cde6 + (uVar4 & uVar2 | uVar3 & (uVar2 ^ 0xffffffff));
      uVar1 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar4;
      uVar2 = iVar12 + uVar2 + -0x3cc8f82a + (uVar1 & uVar3 | uVar4 & (uVar3 ^ 0xffffffff));
      uVar2 = (uVar2 >> 0x17 | uVar2 * 0x200) + uVar1;
      uVar3 = iVar14 + uVar3 + -0xb2af279 + (uVar2 & uVar4 | uVar1 & (uVar4 ^ 0xffffffff));
      uVar3 = (uVar3 >> 0x12 | uVar3 * 0x4000) + uVar2;
      uVar4 = iVar9 + uVar4 + 0x455a14ed + (uVar3 & uVar1 | uVar2 & (uVar1 ^ 0xffffffff));
      uVar4 = (uVar4 >> 0xc | uVar4 * 0x100000) + uVar3;
      uVar1 = iVar19 + uVar1 + -0x561c16fb + (uVar4 & uVar2 | uVar3 & (uVar2 ^ 0xffffffff));
      uVar1 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar4;
      uVar2 = iVar6 + uVar2 + -0x3105c08 + (uVar1 & uVar3 | uVar4 & (uVar3 ^ 0xffffffff));
      uVar2 = (uVar2 >> 0x17 | uVar2 * 0x200) + uVar1;
      uVar3 = iVar16 + uVar3 + 0x676f02d9 + (uVar2 & uVar4 | uVar1 & (uVar4 ^ 0xffffffff));
      uVar3 = (uVar3 >> 0x12 | uVar3 * 0x4000) + uVar2;
      uVar4 = iVar11 + uVar4 + -0x72d5b376 + ((uVar3 ^ uVar2) & uVar1 ^ uVar2);
      uVar4 = (uVar4 >> 0xc | uVar4 * 0x100000) + uVar3;
      uVar1 = iVar15 + uVar1 + -0x5c6be + (uVar3 ^ uVar2 ^ uVar4);
      uVar1 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar4;
      uVar2 = iVar9 + uVar2 + -0x788e097f + (uVar4 ^ uVar3 ^ uVar1);
      uVar2 = (uVar2 >> 0x15 | uVar2 * 0x800) + uVar1;
      uVar3 = iVar18 + uVar3 + 0x6d9d6122 + (uVar1 ^ uVar4 ^ uVar2);
      uVar3 = (uVar3 >> 0x10 | uVar3 * 0x10000) + uVar2;
      uVar4 = iVar12 + uVar4 + -0x21ac7f4 + (uVar2 ^ uVar1 ^ uVar3);
      uVar4 = (uVar4 >> 9 | uVar4 * 0x800000) + uVar3;
      uVar1 = iVar13 + uVar1 + -0x5b4115bc + (uVar3 ^ uVar2 ^ uVar4);
      uVar1 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar4;
      uVar2 = iVar7 + uVar2 + 0x4bdecfa9 + (uVar4 ^ uVar3 ^ uVar1);
      uVar2 = (uVar2 >> 0x15 | uVar2 * 0x800) + uVar1;
      uVar3 = iVar16 + uVar3 + -0x944b4a0 + (uVar1 ^ uVar4 ^ uVar2);
      uVar3 = (uVar3 >> 0x10 | uVar3 * 0x10000) + uVar2;
      uVar4 = iVar10 + uVar4 + -0x41404390 + (uVar2 ^ uVar1 ^ uVar3);
      uVar4 = (uVar4 >> 9 | uVar4 * 0x800000) + uVar3;
      uVar1 = iVar19 + uVar1 + 0x289b7ec6 + (uVar3 ^ uVar2 ^ uVar4);
      uVar1 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar4;
      uVar2 = iVar5 + uVar2 + -0x155ed806 + (uVar4 ^ uVar3 ^ uVar1);
      uVar2 = (uVar2 >> 0x15 | uVar2 * 0x800) + uVar1;
      uVar3 = iVar14 + uVar3 + -0x2b10cf7b + (uVar1 ^ uVar4 ^ uVar2);
      uVar3 = (uVar3 >> 0x10 | uVar3 * 0x10000) + uVar2;
      uVar4 = iVar8 + uVar4 + 0x4881d05 + (uVar2 ^ uVar1 ^ uVar3);
      uVar4 = (uVar4 >> 9 | uVar4 * 0x800000) + uVar3;
      uVar1 = iVar17 + uVar1 + -0x262b2fc7 + (uVar3 ^ uVar2 ^ uVar4);
      uVar1 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar4;
      uVar2 = iVar11 + uVar2 + -0x1924661b + (uVar4 ^ uVar3 ^ uVar1);
      uVar2 = (uVar2 >> 0x15 | uVar2 * 0x800) + uVar1;
      uVar3 = iVar20 + uVar3 + 0x1fa27cf8 + (uVar1 ^ uVar4 ^ uVar2);
      uVar3 = (uVar3 >> 0x10 | uVar3 * 0x10000) + uVar2;
      uVar4 = iVar6 + uVar4 + -0x3b53a99b + (uVar2 ^ uVar1 ^ uVar3);
      uVar4 = (uVar4 >> 9 | uVar4 * 0x800000) + uVar3;
      uVar1 = iVar5 + uVar1 + -0xbd6ddbc + ((uVar4 | uVar2 ^ 0xffffffff) ^ uVar3);
      uVar1 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar4;
      uVar2 = iVar16 + uVar2 + 0x432aff97 + ((uVar1 | uVar3 ^ 0xffffffff) ^ uVar4);
      uVar2 = (uVar2 >> 0x16 | uVar2 * 0x400) + uVar1;
      uVar3 = iVar12 + uVar3 + -0x546bdc59 + ((uVar2 | uVar4 ^ 0xffffffff) ^ uVar1);
      uVar3 = (uVar3 >> 0x11 | uVar3 * 0x8000) + uVar2;
      uVar4 = iVar15 + uVar4 + -0x36c5fc7 + ((uVar3 | uVar1 ^ 0xffffffff) ^ uVar2);
      uVar4 = (uVar4 >> 0xb | uVar4 * 0x200000) + uVar3;
      uVar1 = iVar11 + uVar1 + 0x655b59c3 + ((uVar4 | uVar2 ^ 0xffffffff) ^ uVar3);
      uVar1 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar4;
      uVar2 = iVar14 + uVar2 + -0x70f3336e + ((uVar1 | uVar3 ^ 0xffffffff) ^ uVar4);
      uVar2 = (uVar2 >> 0x16 | uVar2 * 0x400) + uVar1;
      uVar3 = iVar10 + uVar3 + -0x100b83 + ((uVar2 | uVar4 ^ 0xffffffff) ^ uVar1);
      uVar3 = (uVar3 >> 0x11 | uVar3 * 0x8000) + uVar2;
      uVar4 = iVar13 + uVar4 + -0x7a7ba22f + ((uVar3 | uVar1 ^ 0xffffffff) ^ uVar2);
      uVar4 = (uVar4 >> 0xb | uVar4 * 0x200000) + uVar3;
      uVar1 = iVar9 + uVar1 + 0x6fa87e4f + ((uVar4 | uVar2 ^ 0xffffffff) ^ uVar3);
      uVar1 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar4;
      uVar2 = iVar20 + uVar2 + -0x1d31920 + ((uVar1 | uVar3 ^ 0xffffffff) ^ uVar4);
      uVar2 = (uVar2 >> 0x16 | uVar2 * 0x400) + uVar1;
      uVar3 = iVar8 + uVar3 + -0x5cfebcec + ((uVar2 | uVar4 ^ 0xffffffff) ^ uVar1);
      uVar3 = (uVar3 >> 0x11 | uVar3 * 0x8000) + uVar2;
      uVar4 = iVar19 + uVar4 + 0x4e0811a1 + ((uVar3 | uVar1 ^ 0xffffffff) ^ uVar2);
      uVar4 = (uVar4 >> 0xb | uVar4 * 0x200000) + uVar3;
      uVar1 = iVar7 + uVar1 + -0x8ac817e + ((uVar4 | uVar2 ^ 0xffffffff) ^ uVar3);
      uVar1 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar4;
      iVar23 = uVar1 + iVar23;
      uVar2 = iVar18 + uVar2 + -0x42c50dcb + ((uVar1 | uVar3 ^ 0xffffffff) ^ uVar4);
      uVar2 = (uVar2 >> 0x16 | uVar2 * 0x400) + uVar1;
      uVar21 = uVar2 + uVar21;
      uVar3 = iVar6 + uVar3 + 0x2ad7d2bb + ((uVar2 | uVar4 ^ 0xffffffff) ^ uVar1);
      uVar3 = (uVar3 >> 0x11 | uVar3 * 0x8000) + uVar2;
      uVar22 = uVar3 + uVar22;
      param_1[2] = uVar22;
      param_1[3] = uVar21;
      uVar1 = iVar17 + uVar4 + -0x14792c6f + ((uVar3 | uVar1 ^ 0xffffffff) ^ uVar2);
      uVar24 = uVar3 + uVar24 + (uVar1 >> 0xb | uVar1 * 0x200000);
      *param_1 = iVar23;
      param_1[1] = uVar24;
    } while (param_3 != 0);
  }
  return;
}


// ===== 003d631c  FUN_003d631c =====

void FUN_003d631c(undefined8 param_1,undefined8 param_2)

{
  FUN_003d5920(param_1,param_2,1);
  return;
}


// ===== 003d6324  FUN_003d6324 =====

undefined8 FUN_003d6324(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar2 = param_2[0x16];
  uVar4 = (ulong)uVar2;
  puVar1 = param_2 + 6;
  *(undefined1 *)((long)puVar1 + uVar4) = 0x80;
  lVar3 = uVar4 + 1;
  if (0x37 < uVar2) {
    memset((void *)((long)puVar1 + lVar3),0,0x3f - uVar4);
    FUN_003d5920(param_2,puVar1,1);
    lVar3 = 0;
  }
  memset((void *)((long)puVar1 + lVar3),0,0x38 - lVar3);
  param_2[0x14] = param_2[4];
  param_2[0x15] = param_2[5];
  FUN_003d5920(param_2,puVar1,1);
  param_2[0x16] = 0;
  FUN_003c89b8(puVar1,0x40);
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  return 1;
}


// ===== 003d63f0  FUN_003d63f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_003d63f0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_00200200;
  param_1[1] = _UNK_00200208;
  *param_1 = uVar1;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  return 1;
}


// ===== 003d6414  FUN_003d6414 =====

void FUN_003d6414(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_003d63f0();
  if (iVar1 != 0) {
    FUN_00408928(param_1 + 0x5c);
    return;
  }
  return;
}


// ===== 003d6448  FUN_003d6448 =====

void FUN_003d6448(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_003d5818();
  if (iVar1 != 0) {
    FUN_00407700(param_1 + 0x5c,param_2,param_3);
    return;
  }
  return;
}


// ===== 003d6498  FUN_003d6498 =====

void FUN_003d6498(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = FUN_003d6324();
  if (iVar1 != 0) {
    FUN_00408838(param_1 + 0x10,param_2 + 0x5c);
    return;
  }
  return;
}


// ===== 003d64d4  FUN_003d64d4 =====

undefined8 FUN_003d64d4(long param_1,int param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_74 [20];
  undefined1 auStack_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_2 != 0x1d) {
    return 0xfffffffe;
  }
  uVar2 = 0;
  if (((param_1 != 0) && (param_3 == 0x30)) &&
     (uVar2 = FUN_003d5818(param_1,param_4,0x30), (int)uVar2 != 0)) {
    iVar1 = FUN_00407700(param_1 + 0x5c,param_4,0x30);
    if (iVar1 < 1) {
      uVar2 = 0;
    }
    else {
      uStack_38 = 0x3636363636363636;
      local_40 = 0x3636363636363636;
      uStack_28 = 0x3636363636363636;
      uStack_30 = 0x3636363636363636;
      uStack_48 = 0x3636363636363636;
      local_50 = 0x3636363636363636;
      uVar2 = FUN_003d5818(param_1,&local_50,0x30);
      if (((((int)uVar2 != 0) && (uVar2 = FUN_003d6324(auStack_60,param_1), (int)uVar2 != 0)) &&
          ((uVar2 = FUN_00407700(param_1 + 0x5c,&local_50,0x28), (int)uVar2 != 0 &&
           ((uVar2 = FUN_00408838(auStack_74,param_1 + 0x5c), (int)uVar2 != 0 &&
            (uVar2 = FUN_003d63f0(param_1), (int)uVar2 != 0)))))) &&
         (uVar2 = FUN_00408928(param_1 + 0x5c), (int)uVar2 != 0)) {
        iVar1 = FUN_003d6448(param_1,param_4,0x30);
        if (iVar1 < 1) {
          return 0;
        }
        uStack_38 = 0x5c5c5c5c5c5c5c5c;
        local_40 = 0x5c5c5c5c5c5c5c5c;
        uStack_28 = 0x5c5c5c5c5c5c5c5c;
        uStack_30 = 0x5c5c5c5c5c5c5c5c;
        uStack_48 = 0x5c5c5c5c5c5c5c5c;
        local_50 = 0x5c5c5c5c5c5c5c5c;
        uVar2 = FUN_003d5818(param_1,&local_50,0x30);
        if (((((int)uVar2 != 0) && (uVar2 = FUN_003d5818(param_1,auStack_60,0x10), (int)uVar2 != 0))
            && (uVar2 = FUN_00407700(param_1 + 0x5c,&local_50,0x28), (int)uVar2 != 0)) &&
           (uVar2 = FUN_00407700(param_1 + 0x5c,auStack_74,0x14), (int)uVar2 != 0)) {
          FUN_003c89b8(auStack_60,0x10);
          FUN_003c89b8(auStack_74,0x14);
          return 1;
        }
      }
    }
  }
  return uVar2;
}


// ===== 003d666c  FUN_003d666c =====

void FUN_003d666c(long param_1,ulong *param_2,ulong param_3,undefined8 param_4,ulong *param_5,
                 code *param_6)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  
  if (param_3 == 0) {
    return;
  }
  if (param_3 < 0x10) {
    puVar2 = param_5;
    if (0x1f < param_3) {
LAB_003d674c:
      if ((0x1f < (ulong)((long)param_2 - param_1)) &&
         (0x1f < (ulong)((long)param_2 - (long)puVar2))) {
        puVar3 = (undefined8 *)(param_1 + 0x10);
        puVar2 = puVar2 + 2;
        param_2 = param_2 + 2;
        do {
          uVar4 = puVar2[-1];
          uVar5 = puVar2[-2];
          uVar12 = puVar2[1];
          uVar11 = *puVar2;
          puVar2 = puVar2 + 4;
          uVar8 = puVar3[-1];
          uVar7 = puVar3[-2];
          uVar10 = puVar3[1];
          uVar9 = *puVar3;
          puVar3 = puVar3 + 4;
          param_2[-1] = CONCAT17((byte)(uVar4 >> 0x38) ^ (byte)((ulong)uVar8 >> 0x38),
                                 CONCAT16((byte)(uVar4 >> 0x30) ^ (byte)((ulong)uVar8 >> 0x30),
                                          CONCAT15((byte)(uVar4 >> 0x28) ^
                                                   (byte)((ulong)uVar8 >> 0x28),
                                                   CONCAT14((byte)(uVar4 >> 0x20) ^
                                                            (byte)((ulong)uVar8 >> 0x20),
                                                            CONCAT13((byte)(uVar4 >> 0x18) ^
                                                                     (byte)((ulong)uVar8 >> 0x18),
                                                                     CONCAT12((byte)(uVar4 >> 0x10)
                                                                              ^ (byte)((ulong)uVar8
                                                                                      >> 0x10),
                                                                              CONCAT11((byte)(uVar4 
                                                  >> 8) ^ (byte)((ulong)uVar8 >> 8),
                                                  (byte)uVar4 ^ (byte)uVar8)))))));
          param_2[-2] = CONCAT17((byte)(uVar5 >> 0x38) ^ (byte)((ulong)uVar7 >> 0x38),
                                 CONCAT16((byte)(uVar5 >> 0x30) ^ (byte)((ulong)uVar7 >> 0x30),
                                          CONCAT15((byte)(uVar5 >> 0x28) ^
                                                   (byte)((ulong)uVar7 >> 0x28),
                                                   CONCAT14((byte)(uVar5 >> 0x20) ^
                                                            (byte)((ulong)uVar7 >> 0x20),
                                                            CONCAT13((byte)(uVar5 >> 0x18) ^
                                                                     (byte)((ulong)uVar7 >> 0x18),
                                                                     CONCAT12((byte)(uVar5 >> 0x10)
                                                                              ^ (byte)((ulong)uVar7
                                                                                      >> 0x10),
                                                                              CONCAT11((byte)(uVar5 
                                                  >> 8) ^ (byte)((ulong)uVar7 >> 8),
                                                  (byte)uVar5 ^ (byte)uVar7)))))));
          param_2[1] = CONCAT17((byte)(uVar12 >> 0x38) ^ (byte)((ulong)uVar10 >> 0x38),
                                CONCAT16((byte)(uVar12 >> 0x30) ^ (byte)((ulong)uVar10 >> 0x30),
                                         CONCAT15((byte)(uVar12 >> 0x28) ^
                                                  (byte)((ulong)uVar10 >> 0x28),
                                                  CONCAT14((byte)(uVar12 >> 0x20) ^
                                                           (byte)((ulong)uVar10 >> 0x20),
                                                           CONCAT13((byte)(uVar12 >> 0x18) ^
                                                                    (byte)((ulong)uVar10 >> 0x18),
                                                                    CONCAT12((byte)(uVar12 >> 0x10)
                                                                             ^ (byte)((ulong)uVar10
                                                                                     >> 0x10),
                                                                             CONCAT11((byte)(uVar12 
                                                  >> 8) ^ (byte)((ulong)uVar10 >> 8),
                                                  (byte)uVar12 ^ (byte)uVar10)))))));
          *param_2 = CONCAT17((byte)(uVar11 >> 0x38) ^ (byte)((ulong)uVar9 >> 0x38),
                              CONCAT16((byte)(uVar11 >> 0x30) ^ (byte)((ulong)uVar9 >> 0x30),
                                       CONCAT15((byte)(uVar11 >> 0x28) ^
                                                (byte)((ulong)uVar9 >> 0x28),
                                                CONCAT14((byte)(uVar11 >> 0x20) ^
                                                         (byte)((ulong)uVar9 >> 0x20),
                                                         CONCAT13((byte)(uVar11 >> 0x18) ^
                                                                  (byte)((ulong)uVar9 >> 0x18),
                                                                  CONCAT12((byte)(uVar11 >> 0x10) ^
                                                                           (byte)((ulong)uVar9 >>
                                                                                 0x10),
                                                                           CONCAT11((byte)(uVar11 >>
                                                                                          8) ^
                                                                                    (byte)((ulong)
                                                  uVar9 >> 8),(byte)uVar11 ^ (byte)uVar9)))))));
          param_2 = param_2 + 4;
        } while( true );
      }
    }
  }
  else {
    uVar5 = 0;
    puVar2 = param_5;
    uVar4 = param_3;
    puVar6 = param_2;
    do {
      puVar1 = (ulong *)((long)param_2 + uVar5);
      *puVar1 = *puVar2 ^ *(ulong *)(param_1 + uVar5);
      puVar1[1] = puVar2[1] ^ ((ulong *)(param_1 + uVar5))[1];
      (*param_6)(puVar1,puVar1,param_4);
      uVar4 = uVar4 - 0x10;
      uVar5 = uVar5 + 0x10;
      puVar2 = puVar6;
      puVar6 = puVar6 + 2;
    } while (0xf < uVar4);
    param_2 = (ulong *)((long)param_2 + uVar5);
    puVar2 = param_2 + -2;
    if (param_3 == uVar5) goto joined_r0x003d6834;
    param_1 = param_1 + uVar5;
    param_3 = uVar4;
    if (0x1f < uVar4) goto LAB_003d674c;
  }
  uVar5 = 0;
  do {
    uVar4 = uVar5;
    *(byte *)((long)param_2 + uVar4) = *(byte *)((long)puVar2 + uVar4) ^ *(byte *)(param_1 + uVar4);
    uVar5 = uVar4 + 1;
  } while (param_3 != uVar4 + 1);
  if (uVar4 < 0xf) {
    uVar5 = param_3;
    if ((param_3 < 9) && (0x1f < (ulong)((long)param_2 - (long)puVar2))) {
      *(undefined8 *)((long)param_2 + param_3) = *(undefined8 *)((long)puVar2 + param_3);
      uVar4 = 0x10 - param_3 & 0x18;
      uVar5 = param_3 + uVar4;
      if (uVar4 != 8) {
        *(undefined8 *)((long)param_2 + param_3 + 8) = *(undefined8 *)((long)puVar2 + param_3 + 8);
      }
      if (0x10 - param_3 == uVar4) goto LAB_003d6820;
    }
    do {
      *(undefined1 *)((long)param_2 + uVar5) = *(undefined1 *)((long)puVar2 + uVar5);
      uVar5 = uVar5 + 1;
    } while (uVar5 != 0x10);
  }
LAB_003d6820:
  (*param_6)(param_2,param_2,param_4);
  puVar2 = param_2;
joined_r0x003d6834:
  if (puVar2 != param_5) {
    uVar5 = *puVar2;
    param_5[1] = puVar2[1];
    *param_5 = uVar5;
  }
  return;
}


// ===== 003d685c  FUN_003d685c =====

void FUN_003d685c(ulong *param_1,ulong *param_2,ulong param_3,undefined8 param_4,ulong *param_5,
                 code *param_6)

{
  long lVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  long lVar8;
  ulong uVar9;
  ulong *puVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  ulong *puVar14;
  undefined8 *puVar15;
  ulong *puVar16;
  ulong uVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong local_60 [2];
  
  if (param_3 == 0) {
    return;
  }
  if (param_1 == param_2) {
    param_2 = param_1;
    if (0xf < param_3) {
      do {
        (*param_6)(param_1,local_60,param_4);
        param_3 = param_3 - 0x10;
        uVar5 = *param_1;
        *param_1 = *param_5 ^ local_60[0];
        *param_5 = uVar5;
        uVar5 = param_1[1];
        param_1[1] = param_5[1] ^ local_60[1];
        param_1 = param_1 + 2;
        param_5[1] = uVar5;
        param_2 = param_1;
      } while (0xf < param_3);
      goto joined_r0x003d698c;
    }
  }
  else if (0xf < param_3) {
    puVar10 = param_1 + -2;
    puVar14 = param_5;
    do {
      puVar16 = puVar10;
      puVar10 = puVar16 + 2;
      (*param_6)(puVar10,param_2,param_4);
      param_3 = param_3 - 0x10;
      *param_2 = *param_2 ^ *puVar14;
      param_2[1] = param_2[1] ^ puVar14[1];
      param_2 = param_2 + 2;
      puVar14 = puVar10;
    } while (0xf < param_3);
    param_1 = puVar16 + 4;
    if (puVar10 != param_5) {
      uVar5 = *puVar10;
      param_5[1] = puVar16[3];
      *param_5 = uVar5;
    }
joined_r0x003d698c:
    if (param_3 == 0) {
      return;
    }
  }
  (*param_6)(param_1,local_60,param_4);
  uVar5 = 0x11 - param_3;
  if (param_3 < 0x20) {
    uVar6 = 0;
LAB_003d69b8:
    lVar8 = 0;
    do {
      uVar2 = *(undefined1 *)((long)param_1 + lVar8 + uVar6);
      *(byte *)((long)param_2 + lVar8 + uVar6) =
           *(byte *)((long)param_5 + lVar8 + uVar6) ^ *(byte *)((long)local_60 + lVar8 + uVar6);
      *(undefined1 *)((long)param_5 + lVar8 + uVar6) = uVar2;
      lVar8 = lVar8 + 1;
    } while ((uVar6 - param_3) + lVar8 != 0);
    uVar6 = uVar6 + lVar8;
    lVar8 = uVar5 + lVar8 + -1;
  }
  else {
    puVar10 = (ulong *)((long)param_2 + param_3);
    puVar14 = (ulong *)((long)param_5 + param_3);
    uVar6 = 0;
    if ((((param_5 < puVar10 && param_2 < puVar14) ||
         (param_2 < (ulong *)((long)param_1 + param_3) && param_1 < puVar10)) ||
        (param_2 < (ulong *)((long)local_60 + param_3) && local_60 < puVar10)) ||
       ((param_5 < (ulong *)((long)param_1 + param_3) && param_1 < puVar14 ||
        (param_5 < (ulong *)((long)local_60 + param_3) && local_60 < puVar14)))) goto LAB_003d69b8;
    uVar6 = param_3 & 0xffffffffffffffe0;
    puVar10 = param_1 + 2;
    uVar5 = uVar5 | uVar6;
    puVar13 = (undefined8 *)&stack0xffffffffffffffb0;
    puVar14 = param_2 + 2;
    puVar16 = param_5 + 2;
    uVar9 = uVar6;
    do {
      uVar19 = puVar16[-1];
      uVar17 = puVar16[-2];
      uVar24 = puVar16[1];
      uVar23 = *puVar16;
      uVar9 = uVar9 - 0x20;
      uVar20 = puVar13[-1];
      uVar18 = puVar13[-2];
      uVar22 = puVar13[1];
      uVar21 = *puVar13;
      puVar13 = puVar13 + 4;
      puVar4 = puVar10 + -1;
      uVar25 = puVar10[-2];
      uVar27 = puVar10[1];
      uVar26 = *puVar10;
      puVar10 = puVar10 + 4;
      puVar16[-1] = *puVar4;
      puVar16[-2] = uVar25;
      puVar16[1] = uVar27;
      *puVar16 = uVar26;
      puVar16 = puVar16 + 4;
      puVar14[-1] = CONCAT17((byte)(uVar19 >> 0x38) ^ (byte)((ulong)uVar20 >> 0x38),
                             CONCAT16((byte)(uVar19 >> 0x30) ^ (byte)((ulong)uVar20 >> 0x30),
                                      CONCAT15((byte)(uVar19 >> 0x28) ^
                                               (byte)((ulong)uVar20 >> 0x28),
                                               CONCAT14((byte)(uVar19 >> 0x20) ^
                                                        (byte)((ulong)uVar20 >> 0x20),
                                                        CONCAT13((byte)(uVar19 >> 0x18) ^
                                                                 (byte)((ulong)uVar20 >> 0x18),
                                                                 CONCAT12((byte)(uVar19 >> 0x10) ^
                                                                          (byte)((ulong)uVar20 >>
                                                                                0x10),
                                                                          CONCAT11((byte)(uVar19 >>
                                                                                         8) ^
                                                                                   (byte)((ulong)
                                                  uVar20 >> 8),(byte)uVar19 ^ (byte)uVar20)))))));
      puVar14[-2] = CONCAT17((byte)(uVar17 >> 0x38) ^ (byte)((ulong)uVar18 >> 0x38),
                             CONCAT16((byte)(uVar17 >> 0x30) ^ (byte)((ulong)uVar18 >> 0x30),
                                      CONCAT15((byte)(uVar17 >> 0x28) ^
                                               (byte)((ulong)uVar18 >> 0x28),
                                               CONCAT14((byte)(uVar17 >> 0x20) ^
                                                        (byte)((ulong)uVar18 >> 0x20),
                                                        CONCAT13((byte)(uVar17 >> 0x18) ^
                                                                 (byte)((ulong)uVar18 >> 0x18),
                                                                 CONCAT12((byte)(uVar17 >> 0x10) ^
                                                                          (byte)((ulong)uVar18 >>
                                                                                0x10),
                                                                          CONCAT11((byte)(uVar17 >>
                                                                                         8) ^
                                                                                   (byte)((ulong)
                                                  uVar18 >> 8),(byte)uVar17 ^ (byte)uVar18)))))));
      puVar14[1] = CONCAT17((byte)(uVar24 >> 0x38) ^ (byte)((ulong)uVar22 >> 0x38),
                            CONCAT16((byte)(uVar24 >> 0x30) ^ (byte)((ulong)uVar22 >> 0x30),
                                     CONCAT15((byte)(uVar24 >> 0x28) ^ (byte)((ulong)uVar22 >> 0x28)
                                              ,CONCAT14((byte)(uVar24 >> 0x20) ^
                                                        (byte)((ulong)uVar22 >> 0x20),
                                                        CONCAT13((byte)(uVar24 >> 0x18) ^
                                                                 (byte)((ulong)uVar22 >> 0x18),
                                                                 CONCAT12((byte)(uVar24 >> 0x10) ^
                                                                          (byte)((ulong)uVar22 >>
                                                                                0x10),
                                                                          CONCAT11((byte)(uVar24 >>
                                                                                         8) ^
                                                                                   (byte)((ulong)
                                                  uVar22 >> 8),(byte)uVar24 ^ (byte)uVar22)))))));
      *puVar14 = CONCAT17((byte)(uVar23 >> 0x38) ^ (byte)((ulong)uVar21 >> 0x38),
                          CONCAT16((byte)(uVar23 >> 0x30) ^ (byte)((ulong)uVar21 >> 0x30),
                                   CONCAT15((byte)(uVar23 >> 0x28) ^ (byte)((ulong)uVar21 >> 0x28),
                                            CONCAT14((byte)(uVar23 >> 0x20) ^
                                                     (byte)((ulong)uVar21 >> 0x20),
                                                     CONCAT13((byte)(uVar23 >> 0x18) ^
                                                              (byte)((ulong)uVar21 >> 0x18),
                                                              CONCAT12((byte)(uVar23 >> 0x10) ^
                                                                       (byte)((ulong)uVar21 >> 0x10)
                                                                       ,CONCAT11((byte)(uVar23 >> 8)
                                                                                 ^ (byte)((ulong)
                                                  uVar21 >> 8),(byte)uVar23 ^ (byte)uVar21)))))));
      puVar14 = puVar14 + 4;
    } while (uVar9 != 0);
    if (uVar6 != param_3) goto LAB_003d69b8;
    lVar8 = 0x10;
  }
  if (0xe < uVar6 - 1) {
    return;
  }
  uVar5 = 0x10 - param_3;
  if ((7 < uVar5) && (0x1f < (ulong)((long)param_5 - (long)param_1))) {
    if (uVar5 < 0x20) {
      uVar9 = 0;
    }
    else {
      uVar9 = uVar5 & 0xffffffffffffffe0;
      puVar13 = (undefined8 *)((long)param_1 + param_3 + 0x10);
      puVar15 = (undefined8 *)((long)param_5 + param_3 + 0x10);
      uVar6 = uVar9;
      do {
        puVar3 = puVar13 + -1;
        uVar18 = puVar13[-2];
        uVar21 = puVar13[1];
        uVar20 = *puVar13;
        uVar6 = uVar6 - 0x20;
        puVar13 = puVar13 + 4;
        puVar15[-1] = *puVar3;
        puVar15[-2] = uVar18;
        puVar15[1] = uVar21;
        *puVar15 = uVar20;
        puVar15 = puVar15 + 4;
      } while (uVar6 != 0);
      if (uVar5 == uVar9) {
        return;
      }
      if ((uVar5 & 0x18) == 0) {
        param_3 = param_3 + uVar9;
        goto LAB_003d6b7c;
      }
    }
    uVar6 = uVar5 & 0xfffffffffffffff8;
    lVar1 = param_3 + uVar9;
    param_3 = param_3 + uVar6;
    lVar11 = uVar9 - uVar6;
    puVar13 = (undefined8 *)((long)param_1 + lVar1);
    puVar15 = (undefined8 *)((long)param_5 + lVar1);
    do {
      lVar11 = lVar11 + 8;
      *puVar15 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar15 = puVar15 + 1;
    } while (lVar11 != 0);
    if (uVar5 == uVar6) {
      return;
    }
  }
LAB_003d6b7c:
  lVar8 = lVar8 - param_3;
  puVar7 = (undefined1 *)((long)param_5 + param_3);
  puVar12 = (undefined1 *)((long)param_1 + param_3);
  do {
    lVar8 = lVar8 + -1;
    *puVar7 = *puVar12;
    puVar7 = puVar7 + 1;
    puVar12 = puVar12 + 1;
  } while (lVar8 != 0);
  return;
}


// ===== 003d6bb4  FUN_003d6bb4 =====

void FUN_003d6bb4(byte *param_1,char param_2,char param_3,undefined8 param_4,undefined8 param_5)

{
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined8 *)(param_1 + 0x28) = param_5;
  *(undefined8 *)(param_1 + 0x30) = param_4;
  *param_1 = param_2 * '\x04' + 0x38U & 0x38 | param_3 - 1U & 7;
  return;
}


// ===== 003d6bdc  FUN_003d6bdc =====

undefined8 FUN_003d6bdc(byte *param_1,void *param_2,ulong param_3,undefined8 param_4)

{
  uint uVar1;
  size_t __n;
  ulong uVar2;
  
  uVar2 = (ulong)*param_1 & 7;
  __n = 0xe - uVar2;
  if (param_3 < __n) {
    return 0xffffffff;
  }
  if ((uint)uVar2 < 3) {
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  else {
    param_1[8] = (byte)((ulong)param_4 >> 0x38);
    param_1[9] = (byte)((ulong)param_4 >> 0x30);
    param_1[10] = (byte)((ulong)param_4 >> 0x28);
    param_1[0xb] = (byte)((ulong)param_4 >> 0x20);
  }
  uVar1 = ((uint)param_4 & 0xff00ff00) >> 8 | ((uint)param_4 & 0xff00ff) << 8;
  *(uint *)(param_1 + 0xc) = uVar1 >> 0x10 | uVar1 << 0x10;
  *param_1 = *param_1 & 0xbf;
  memcpy(param_1 + 1,param_2,__n);
  return 0;
}


// ===== 003d6c58  FUN_003d6c58 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003d6c58(byte *param_1,byte *param_2,ulong param_3)

{
  byte *pbVar1;
  ulong uVar2;
  code *pcVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  bool bVar7;
  bool bVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  byte *pbVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined4 uVar16;
  undefined1 auVar17 [16];
  
  if (param_3 != 0) {
    pbVar1 = param_1 + 0x10;
    pcVar3 = *(code **)(param_1 + 0x28);
    *param_1 = *param_1 | 0x40;
    (*pcVar3)(param_1,pbVar1,*(undefined8 *)(param_1 + 0x30));
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
    bVar4 = (byte)(param_3 >> 8);
    if (param_3 >> 8 < 0xff) {
      lVar10 = 0x11;
      *pbVar1 = *pbVar1 ^ bVar4;
      uVar9 = 2;
    }
    else {
      param_1[0x10] = ~param_1[0x10];
      auVar17 = _DAT_002006e0;
      auVar15 = _DAT_002004f0;
      bVar6 = (byte)(param_3 >> 0x10);
      bVar5 = (byte)(param_3 >> 0x18);
      if (param_3 >> 0x20 == 0) {
        param_1[0x11] = param_1[0x11] ^ 0xfe;
        param_1[0x12] = param_1[0x12] ^ bVar5;
        lVar10 = 0x15;
        param_1[0x13] = param_1[0x13] ^ bVar6;
        uVar9 = 6;
        param_1[0x14] = param_1[0x14] ^ bVar4;
      }
      else {
        auVar14._8_8_ = param_3;
        auVar14._0_8_ = param_3;
        param_1[0x11] = ~param_1[0x11];
        auVar17 = NEON_ushl(auVar14,auVar17,8);
        auVar15 = NEON_ushl(auVar14,auVar15,8);
        uVar16 = *(undefined4 *)(param_1 + 0x12);
        param_1[0x16] = param_1[0x16] ^ bVar5;
        param_1[0x17] = param_1[0x17] ^ bVar6;
        lVar10 = 0x19;
        param_1[0x18] = param_1[0x18] ^ bVar4;
        uVar9 = 10;
        *(uint *)(param_1 + 0x12) =
             CONCAT13((byte)((uint)uVar16 >> 0x18) ^ auVar17[8],
                      CONCAT12((byte)((uint)uVar16 >> 0x10) ^ auVar17[0],
                               CONCAT11((byte)((uint)uVar16 >> 8) ^ auVar15[8],
                                        (byte)uVar16 ^ auVar15[0])));
      }
    }
    param_1[lVar10] = param_1[lVar10] ^ (byte)param_3;
    do {
      if (param_3 == 0) {
        bVar7 = false;
        uVar12 = param_3;
      }
      else {
        uVar12 = param_3 - 1;
        uVar2 = uVar12;
        if (0xf - uVar9 <= uVar12) {
          uVar2 = 0xf - uVar9;
        }
        pbVar13 = param_2;
        if (0xe < uVar2) {
          if (0xf - uVar9 <= uVar12) {
            uVar12 = 0xf - uVar9;
          }
          if ((param_2 + uVar12 + 1 <= param_1 + uVar9 + 0x10) ||
             (param_1 + uVar12 + uVar9 + 0x11 <= param_2)) {
            auVar15 = *(undefined1 (*) [16])(pbVar1 + uVar9);
            uVar11 = uVar2 + 1 & 0xfffffffffffffff0;
            bVar7 = param_3 != 0x10;
            auVar17._0_8_ =
                 CONCAT17(auVar15[7] ^ param_2[7],
                          CONCAT16(auVar15[6] ^ param_2[6],
                                   CONCAT15(auVar15[5] ^ param_2[5],
                                            CONCAT14(auVar15[4] ^ param_2[4],
                                                     CONCAT13(auVar15[3] ^ param_2[3],
                                                              CONCAT12(auVar15[2] ^ param_2[2],
                                                                       CONCAT11(auVar15[1] ^
                                                                                param_2[1],
                                                                                auVar15[0] ^
                                                                                *param_2)))))));
            auVar17[8] = auVar15[8] ^ param_2[8];
            auVar17[9] = auVar15[9] ^ param_2[9];
            auVar17[10] = auVar15[10] ^ param_2[10];
            auVar17[0xb] = auVar15[0xb] ^ param_2[0xb];
            auVar17[0xc] = auVar15[0xc] ^ param_2[0xc];
            auVar17[0xd] = auVar15[0xd] ^ param_2[0xd];
            auVar17[0xe] = auVar15[0xe] ^ param_2[0xe];
            auVar17[0xf] = auVar15[0xf] ^ param_2[0xf];
            param_2 = param_2 + uVar11;
            param_3 = param_3 - uVar11;
            *(long *)(pbVar1 + uVar9 + 8) = auVar17._8_8_;
            *(undefined8 *)(pbVar1 + uVar9) = auVar17._0_8_;
            uVar12 = param_3;
            if (uVar2 + 1 == uVar11) goto LAB_003d6dac;
            uVar9 = uVar9 + uVar11;
            pbVar13 = param_2;
          }
        }
        do {
          param_2 = pbVar13 + 1;
          uVar12 = param_3 - 1;
          bVar7 = uVar12 != 0;
          pbVar1[uVar9] = pbVar1[uVar9] ^ *pbVar13;
          if (0xe < uVar9) break;
          bVar8 = param_3 != 1;
          uVar9 = uVar9 + 1;
          param_3 = uVar12;
          pbVar13 = param_2;
        } while (bVar8);
      }
LAB_003d6dac:
      (*pcVar3)(pbVar1,pbVar1,*(undefined8 *)(param_1 + 0x30));
      uVar9 = 0;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
      param_3 = uVar12;
    } while (bVar7);
  }
  return;
}


// ===== 003d6ea4  FUN_003d6ea4 =====

undefined8 FUN_003d6ea4(byte *param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  code *pcVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar8;
  long lVar9;
  byte *pbVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong local_70 [2];
  
  pcVar1 = *(code **)(param_1 + 0x28);
  uVar16 = *(undefined8 *)(param_1 + 0x30);
  bVar2 = *param_1;
  if ((bVar2 >> 6 & 1) == 0) {
    (*pcVar1)(param_1,param_1 + 0x10,uVar16);
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  }
  uVar5 = (ulong)bVar2 & 7;
  uVar14 = uVar5 ^ 0xf;
  *param_1 = (byte)uVar5;
  if ((int)uVar5 == 0) {
    uVar5 = (ulong)param_1[0xf];
    param_1[0xf] = 1;
  }
  else {
    uVar5 = 0;
    lVar9 = 0;
    if (uVar14 < 0xf) {
      lVar9 = 0xe - uVar14;
    }
    lVar9 = lVar9 + 1;
    pbVar7 = param_1 + uVar14;
    do {
      bVar3 = *pbVar7;
      lVar9 = lVar9 + -1;
      *pbVar7 = 0;
      uVar5 = (uVar5 | bVar3) << 8;
      pbVar7 = pbVar7 + 1;
    } while (lVar9 != 0);
    uVar5 = uVar5 | param_1[0xf];
    param_1[0xf] = 1;
  }
  if (uVar5 != param_4) {
    return 0xffffffff;
  }
  uVar5 = *(long *)(param_1 + 0x20) + (param_4 + 0xf >> 3 | 1);
  *(ulong *)(param_1 + 0x20) = uVar5;
  if (0x2000000000000000 < uVar5) {
    return 0xfffffffe;
  }
  if (0xf < param_4) {
    do {
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) ^ *param_2;
      *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) ^ param_2[1];
      (*pcVar1)(param_1 + 0x10,param_1 + 0x10,uVar16);
      (*pcVar1)(param_1,local_70,uVar16);
      bVar3 = param_1[0xf];
      param_1[0xf] = (byte)(bVar3 + 1);
      if (((((bVar3 + 1 >> 8 != 0) &&
            (bVar3 = param_1[0xe], param_1[0xe] = (byte)(bVar3 + 1), bVar3 + 1 >> 8 != 0)) &&
           (bVar3 = param_1[0xd], param_1[0xd] = (byte)(bVar3 + 1), bVar3 + 1 >> 8 != 0)) &&
          ((bVar3 = param_1[0xc], param_1[0xc] = (byte)(bVar3 + 1), bVar3 + 1 >> 8 != 0 &&
           (bVar3 = param_1[0xb], param_1[0xb] = (byte)(bVar3 + 1), bVar3 + 1 >> 8 != 0)))) &&
         ((bVar3 = param_1[10], param_1[10] = (byte)(bVar3 + 1), bVar3 + 1 >> 8 != 0 &&
          (bVar3 = param_1[9], param_1[9] = (byte)(bVar3 + 1), bVar3 + 1 >> 8 != 0)))) {
        param_1[8] = param_1[8] + 1;
      }
      param_4 = param_4 - 0x10;
      *param_3 = *param_2 ^ local_70[0];
      puVar11 = param_2 + 1;
      param_2 = param_2 + 2;
      param_3[1] = *puVar11 ^ local_70[1];
      param_3 = param_3 + 2;
    } while (0xf < param_4);
  }
  if (param_4 == 0) goto LAB_003d7044;
  pbVar7 = param_1 + 0x10;
  if (param_4 < 8) {
LAB_003d6fbc:
    uVar5 = 0;
    uVar4 = 0;
LAB_003d6fc8:
    do {
      pbVar7[uVar5] = pbVar7[uVar5] ^ *(byte *)((long)param_2 + uVar5);
      uVar5 = (ulong)(uVar4 + 1);
      uVar4 = uVar4 + 1;
    } while (uVar5 < param_4);
  }
  else {
    uVar5 = 0;
    uVar4 = 0;
    if (((int)(param_4 - 1) == -1) || (uVar4 = 0, param_4 - 1 >> 0x20 != 0)) goto LAB_003d6fc8;
    if ((pbVar7 < (byte *)((long)param_2 + param_4)) && (param_2 < param_1 + param_4 + 0x10))
    goto LAB_003d6fbc;
    uVar5 = param_4 & 8;
    uVar8 = uVar5;
    pbVar10 = pbVar7;
    puVar11 = param_2;
    do {
      uVar6 = *puVar11;
      uVar15 = *(undefined8 *)pbVar10;
      uVar8 = uVar8 - 8;
      *(ulong *)pbVar10 =
           CONCAT17((byte)((ulong)uVar15 >> 0x38) ^ (byte)(uVar6 >> 0x38),
                    CONCAT16((byte)((ulong)uVar15 >> 0x30) ^ (byte)(uVar6 >> 0x30),
                             CONCAT15((byte)((ulong)uVar15 >> 0x28) ^ (byte)(uVar6 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar15 >> 0x20) ^ (byte)(uVar6 >> 0x20)
                                               ,CONCAT13((byte)((ulong)uVar15 >> 0x18) ^
                                                         (byte)(uVar6 >> 0x18),
                                                         CONCAT12((byte)((ulong)uVar15 >> 0x10) ^
                                                                  (byte)(uVar6 >> 0x10),
                                                                  CONCAT11((byte)((ulong)uVar15 >> 8
                                                                                 ) ^ (byte)(uVar6 >>
                                                                                           8),
                                                                           (byte)uVar15 ^
                                                                           (byte)uVar6)))))));
      pbVar10 = pbVar10 + 8;
      puVar11 = puVar11 + 1;
    } while (uVar8 != 0);
    uVar4 = (uint)uVar5;
    if (param_4 != uVar5) goto LAB_003d6fc8;
  }
  (*pcVar1)(pbVar7,pbVar7,uVar16);
  (*pcVar1)(param_1,local_70,uVar16);
  uVar8 = param_4 - 1;
  uVar5 = param_4;
  if (param_4 == 0 || uVar8 == 0) {
    uVar5 = 1;
  }
  if (param_4 < 8) {
    uVar6 = 0;
    uVar4 = 0;
  }
  else {
    uVar6 = 0;
    uVar4 = 0;
    if (((int)uVar8 != -1) && (uVar4 = 0, uVar8 >> 0x20 == 0)) {
      uVar4 = 0;
      uVar6 = 0;
      if ((0x1f < (ulong)((long)param_3 - (long)local_70)) &&
         (0x1f < (ulong)((long)param_3 - (long)param_2))) {
        uVar6 = uVar5 & 8;
        uVar4 = (uint)uVar6;
        puVar11 = local_70;
        uVar8 = uVar6;
        puVar12 = param_3;
        puVar13 = param_2;
        do {
          uVar15 = *puVar11;
          uVar8 = uVar8 - 8;
          uVar17 = *puVar13;
          *puVar12 = CONCAT17((byte)(uVar17 >> 0x38) ^ (byte)((ulong)uVar15 >> 0x38),
                              CONCAT16((byte)(uVar17 >> 0x30) ^ (byte)((ulong)uVar15 >> 0x30),
                                       CONCAT15((byte)(uVar17 >> 0x28) ^
                                                (byte)((ulong)uVar15 >> 0x28),
                                                CONCAT14((byte)(uVar17 >> 0x20) ^
                                                         (byte)((ulong)uVar15 >> 0x20),
                                                         CONCAT13((byte)(uVar17 >> 0x18) ^
                                                                  (byte)((ulong)uVar15 >> 0x18),
                                                                  CONCAT12((byte)(uVar17 >> 0x10) ^
                                                                           (byte)((ulong)uVar15 >>
                                                                                 0x10),
                                                                           CONCAT11((byte)(uVar17 >>
                                                                                          8) ^
                                                                                    (byte)((ulong)
                                                  uVar15 >> 8),(byte)uVar17 ^ (byte)uVar15)))))));
          puVar11 = puVar11 + 1;
          puVar12 = puVar12 + 1;
          puVar13 = puVar13 + 1;
        } while (uVar8 != 0);
        if (uVar5 == uVar6) goto LAB_003d7044;
      }
    }
  }
  do {
    *(byte *)((long)param_3 + uVar6) =
         *(byte *)((long)param_2 + uVar6) ^ *(byte *)((long)local_70 + uVar6);
    uVar6 = (ulong)(uVar4 + 1);
    uVar4 = uVar4 + 1;
  } while (uVar6 < param_4);
LAB_003d7044:
  memset(param_1 + uVar14,0,(ulong)(0x10 - (int)uVar14));
  (*pcVar1)(param_1,local_70,uVar16);
  uVar15 = *(undefined8 *)(param_1 + 0x18);
  uVar16 = *(undefined8 *)(param_1 + 0x10);
  *param_1 = bVar2;
  *(ulong *)(param_1 + 0x18) =
       CONCAT17((byte)((ulong)uVar15 >> 0x38) ^ (byte)(local_70[1] >> 0x38),
                CONCAT16((byte)((ulong)uVar15 >> 0x30) ^ (byte)(local_70[1] >> 0x30),
                         CONCAT15((byte)((ulong)uVar15 >> 0x28) ^ (byte)(local_70[1] >> 0x28),
                                  CONCAT14((byte)((ulong)uVar15 >> 0x20) ^
                                           (byte)(local_70[1] >> 0x20),
                                           CONCAT13((byte)((ulong)uVar15 >> 0x18) ^
                                                    (byte)(local_70[1] >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar15 >> 0x10) ^
                                                             (byte)(local_70[1] >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar15 >> 8) ^
                                                                      (byte)(local_70[1] >> 8),
                                                                      (byte)uVar15 ^
                                                                      (byte)local_70[1])))))));
  *(ulong *)(param_1 + 0x10) =
       CONCAT17((byte)((ulong)uVar16 >> 0x38) ^ (byte)(local_70[0] >> 0x38),
                CONCAT16((byte)((ulong)uVar16 >> 0x30) ^ (byte)(local_70[0] >> 0x30),
                         CONCAT15((byte)((ulong)uVar16 >> 0x28) ^ (byte)(local_70[0] >> 0x28),
                                  CONCAT14((byte)((ulong)uVar16 >> 0x20) ^
                                           (byte)(local_70[0] >> 0x20),
                                           CONCAT13((byte)((ulong)uVar16 >> 0x18) ^
                                                    (byte)(local_70[0] >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar16 >> 0x10) ^
                                                             (byte)(local_70[0] >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar16 >> 8) ^
                                                                      (byte)(local_70[0] >> 8),
                                                                      (byte)uVar16 ^
                                                                      (byte)local_70[0])))))));
  return 0;
}


// ===== 003d7274  FUN_003d7274 =====

undefined8 FUN_003d7274(byte *param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  ulong *puVar1;
  code *pcVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  byte *pbVar6;
  long lVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong uVar13;
  byte bVar14;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  undefined8 uVar15;
  byte bVar22;
  undefined8 uVar23;
  ulong uVar24;
  ulong local_70 [2];
  
  pcVar2 = *(code **)(param_1 + 0x28);
  uVar23 = *(undefined8 *)(param_1 + 0x30);
  bVar3 = *param_1;
  if ((bVar3 >> 6 & 1) == 0) {
    (*pcVar2)(param_1,param_1 + 0x10,uVar23);
  }
  uVar5 = (ulong)bVar3 & 7;
  uVar13 = uVar5 ^ 0xf;
  *param_1 = (byte)uVar5;
  if ((int)uVar5 == 0) {
    uVar5 = (ulong)param_1[0xf];
    param_1[0xf] = 1;
  }
  else {
    uVar5 = 0;
    lVar7 = 0;
    if (uVar13 < 0xf) {
      lVar7 = 0xe - uVar13;
    }
    lVar7 = lVar7 + 1;
    pbVar6 = param_1 + uVar13;
    do {
      bVar14 = *pbVar6;
      lVar7 = lVar7 + -1;
      *pbVar6 = 0;
      uVar5 = (uVar5 | bVar14) << 8;
      pbVar6 = pbVar6 + 1;
    } while (lVar7 != 0);
    uVar5 = uVar5 | param_1[0xf];
    param_1[0xf] = 1;
  }
  if (uVar5 != param_4) {
    return 0xffffffff;
  }
  if (0xf < param_4) {
    do {
      (*pcVar2)(param_1,local_70,uVar23);
      bVar14 = param_1[0xf];
      param_1[0xf] = (byte)(bVar14 + 1);
      if ((((bVar14 + 1 >> 8 != 0) &&
           (bVar14 = param_1[0xe], param_1[0xe] = (byte)(bVar14 + 1), bVar14 + 1 >> 8 != 0)) &&
          (bVar14 = param_1[0xd], param_1[0xd] = (byte)(bVar14 + 1), bVar14 + 1 >> 8 != 0)) &&
         (((bVar14 = param_1[0xc], param_1[0xc] = (byte)(bVar14 + 1), bVar14 + 1 >> 8 != 0 &&
           (bVar14 = param_1[0xb], param_1[0xb] = (byte)(bVar14 + 1), bVar14 + 1 >> 8 != 0)) &&
          ((bVar14 = param_1[10], param_1[10] = (byte)(bVar14 + 1), bVar14 + 1 >> 8 != 0 &&
           (bVar14 = param_1[9], param_1[9] = (byte)(bVar14 + 1), bVar14 + 1 >> 8 != 0)))))) {
        param_1[8] = param_1[8] + 1;
      }
      uVar5 = *param_2;
      *param_3 = uVar5 ^ local_70[0];
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) ^ uVar5 ^ local_70[0];
      uVar5 = param_2[1];
      param_3[1] = uVar5 ^ local_70[1];
      *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) ^ uVar5 ^ local_70[1];
      (*pcVar2)(param_1 + 0x10,param_1 + 0x10,uVar23);
      param_4 = param_4 - 0x10;
      param_2 = param_2 + 2;
      param_3 = param_3 + 2;
    } while (0xf < param_4);
  }
  if (param_4 == 0) goto LAB_003d7388;
  (*pcVar2)(param_1,local_70,uVar23);
  puVar1 = (ulong *)(param_1 + 0x10);
  if (param_4 < 8) {
    uVar5 = 0;
    uVar4 = 0;
LAB_003d7350:
    do {
      uVar4 = uVar4 + 1;
      bVar14 = *(byte *)((long)param_2 + uVar5) ^ *(byte *)((long)local_70 + uVar5);
      *(byte *)((long)param_3 + uVar5) = bVar14;
      *(byte *)((long)puVar1 + uVar5) = *(byte *)((long)puVar1 + uVar5) ^ bVar14;
      uVar5 = (ulong)uVar4;
    } while (uVar4 < param_4);
  }
  else {
    uVar4 = 0;
    uVar5 = 0;
    if (((int)(param_4 - 1) == -1) || (param_4 - 1 >> 0x20 != 0)) goto LAB_003d7350;
    puVar10 = (ulong *)((long)param_3 + param_4);
    uVar4 = 0;
    puVar8 = (ulong *)(param_1 + param_4 + 0x10);
    uVar5 = 0;
    if (((puVar1 < puVar10 && param_3 < puVar8) ||
        (((param_3 < (ulong *)((long)local_70 + param_4) && local_70 < puVar10 ||
          (param_3 < (ulong *)((long)param_2 + param_4) && param_2 < puVar10)) ||
         (puVar1 < (ulong *)((long)local_70 + param_4) && local_70 < puVar8)))) ||
       (puVar1 < (ulong *)((long)param_2 + param_4) && param_2 < puVar8)) goto LAB_003d7350;
    uVar5 = param_4 & 8;
    uVar4 = (uint)uVar5;
    puVar8 = local_70;
    uVar9 = uVar5;
    puVar10 = puVar1;
    puVar11 = param_3;
    puVar12 = param_2;
    do {
      uVar15 = *puVar8;
      uVar9 = uVar9 - 8;
      uVar24 = *puVar12;
      bVar14 = (byte)uVar24 ^ (byte)uVar15;
      bVar16 = (byte)(uVar24 >> 8) ^ (byte)((ulong)uVar15 >> 8);
      bVar17 = (byte)(uVar24 >> 0x10) ^ (byte)((ulong)uVar15 >> 0x10);
      bVar18 = (byte)(uVar24 >> 0x18) ^ (byte)((ulong)uVar15 >> 0x18);
      bVar19 = (byte)(uVar24 >> 0x20) ^ (byte)((ulong)uVar15 >> 0x20);
      bVar20 = (byte)(uVar24 >> 0x28) ^ (byte)((ulong)uVar15 >> 0x28);
      bVar21 = (byte)(uVar24 >> 0x30) ^ (byte)((ulong)uVar15 >> 0x30);
      bVar22 = (byte)(uVar24 >> 0x38) ^ (byte)((ulong)uVar15 >> 0x38);
      uVar24 = *puVar10;
      *puVar11 = CONCAT17(bVar22,CONCAT16(bVar21,CONCAT15(bVar20,CONCAT14(bVar19,CONCAT13(bVar18,
                                                  CONCAT12(bVar17,CONCAT11(bVar16,bVar14)))))));
      *puVar10 = CONCAT17((byte)(uVar24 >> 0x38) ^ bVar22,
                          CONCAT16((byte)(uVar24 >> 0x30) ^ bVar21,
                                   CONCAT15((byte)(uVar24 >> 0x28) ^ bVar20,
                                            CONCAT14((byte)(uVar24 >> 0x20) ^ bVar19,
                                                     CONCAT13((byte)(uVar24 >> 0x18) ^ bVar18,
                                                              CONCAT12((byte)(uVar24 >> 0x10) ^
                                                                       bVar17,CONCAT11((byte)(uVar24
                                                                                             >> 8) ^
                                                                                       bVar16,(byte)
                                                  uVar24 ^ bVar14)))))));
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 1;
      puVar12 = puVar12 + 1;
    } while (uVar9 != 0);
    if (param_4 != uVar5) goto LAB_003d7350;
  }
  (*pcVar2)(puVar1,puVar1,uVar23);
LAB_003d7388:
  memset(param_1 + uVar13,0,(ulong)(0x10 - (int)uVar13));
  (*pcVar2)(param_1,local_70,uVar23);
  uVar15 = *(undefined8 *)(param_1 + 0x18);
  uVar23 = *(undefined8 *)(param_1 + 0x10);
  *param_1 = bVar3;
  *(ulong *)(param_1 + 0x18) =
       CONCAT17((byte)((ulong)uVar15 >> 0x38) ^ (byte)(local_70[1] >> 0x38),
                CONCAT16((byte)((ulong)uVar15 >> 0x30) ^ (byte)(local_70[1] >> 0x30),
                         CONCAT15((byte)((ulong)uVar15 >> 0x28) ^ (byte)(local_70[1] >> 0x28),
                                  CONCAT14((byte)((ulong)uVar15 >> 0x20) ^
                                           (byte)(local_70[1] >> 0x20),
                                           CONCAT13((byte)((ulong)uVar15 >> 0x18) ^
                                                    (byte)(local_70[1] >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar15 >> 0x10) ^
                                                             (byte)(local_70[1] >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar15 >> 8) ^
                                                                      (byte)(local_70[1] >> 8),
                                                                      (byte)uVar15 ^
                                                                      (byte)local_70[1])))))));
  *(ulong *)(param_1 + 0x10) =
       CONCAT17((byte)((ulong)uVar23 >> 0x38) ^ (byte)(local_70[0] >> 0x38),
                CONCAT16((byte)((ulong)uVar23 >> 0x30) ^ (byte)(local_70[0] >> 0x30),
                         CONCAT15((byte)((ulong)uVar23 >> 0x28) ^ (byte)(local_70[0] >> 0x28),
                                  CONCAT14((byte)((ulong)uVar23 >> 0x20) ^
                                           (byte)(local_70[0] >> 0x20),
                                           CONCAT13((byte)((ulong)uVar23 >> 0x18) ^
                                                    (byte)(local_70[0] >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar23 >> 0x10) ^
                                                             (byte)(local_70[0] >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar23 >> 8) ^
                                                                      (byte)(local_70[0] >> 8),
                                                                      (byte)uVar23 ^
                                                                      (byte)local_70[0])))))));
  return 0;
}


// ===== 003d75c4  FUN_003d75c4 =====

undefined8 FUN_003d75c4(byte *param_1,byte *param_2,undefined8 *param_3,ulong param_4,code *param_5)

{
  code *pcVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 local_70 [2];
  
  pcVar1 = *(code **)(param_1 + 0x28);
  uVar16 = *(undefined8 *)(param_1 + 0x30);
  bVar2 = *param_1;
  if ((bVar2 >> 6 & 1) == 0) {
    (*pcVar1)(param_1,param_1 + 0x10,uVar16);
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  }
  uVar4 = (ulong)bVar2 & 7;
  uVar13 = uVar4 ^ 0xf;
  *param_1 = (byte)uVar4;
  if ((int)uVar4 == 0) {
    uVar4 = (ulong)param_1[0xf];
    param_1[0xf] = 1;
  }
  else {
    uVar4 = 0;
    lVar6 = 0;
    if (uVar13 < 0xf) {
      lVar6 = 0xe - uVar13;
    }
    lVar6 = lVar6 + 1;
    pbVar9 = param_1 + uVar13;
    do {
      bVar3 = *pbVar9;
      lVar6 = lVar6 + -1;
      *pbVar9 = 0;
      uVar4 = (uVar4 | bVar3) << 8;
      pbVar9 = pbVar9 + 1;
    } while (lVar6 != 0);
    uVar4 = uVar4 | param_1[0xf];
    param_1[0xf] = 1;
  }
  if (uVar4 != param_4) {
    return 0xffffffff;
  }
  uVar4 = *(long *)(param_1 + 0x20) + (param_4 + 0xf >> 3 | 1);
  *(ulong *)(param_1 + 0x20) = uVar4;
  if (0x2000000000000000 < uVar4) {
    return 0xfffffffe;
  }
  if (0xf < param_4) {
    (*param_5)(param_2,param_3,param_4 >> 4,uVar16,param_1,param_1 + 0x10);
    uVar4 = param_4 & 0xf;
    if (uVar4 == 0) goto LAB_003d7810;
    param_3 = (undefined8 *)((long)param_3 + (param_4 & 0xfffffffffffffff0));
    param_2 = param_2 + (param_4 & 0xfffffffffffffff0);
    FUN_003d78a0(param_1,param_4 >> 4);
    param_4 = uVar4;
    if (7 < uVar4) goto LAB_003d7734;
    goto LAB_003d7750;
  }
  if (param_4 == 0) goto LAB_003d7810;
  uVar4 = param_4;
  if (param_4 < 8) {
LAB_003d7750:
    uVar5 = 0;
    uVar4 = param_4;
LAB_003d7754:
    lVar6 = uVar4 - uVar5;
    pbVar9 = param_2 + uVar5;
    pbVar10 = param_1 + uVar5 + 0x10;
    do {
      lVar6 = lVar6 + -1;
      *pbVar10 = *pbVar10 ^ *pbVar9;
      pbVar9 = pbVar9 + 1;
      pbVar10 = pbVar10 + 1;
    } while (lVar6 != 0);
  }
  else {
LAB_003d7734:
    if ((param_1 + 0x10 < param_2 + uVar4) && (param_4 = uVar4, param_2 < param_1 + uVar4 + 0x10))
    goto LAB_003d7750;
    uVar5 = uVar4 & 8;
    uVar7 = uVar5;
    pbVar9 = param_1 + 0x10;
    pbVar10 = param_2;
    do {
      uVar14 = *(undefined8 *)pbVar10;
      uVar15 = *(undefined8 *)pbVar9;
      uVar7 = uVar7 - 8;
      *(ulong *)pbVar9 =
           CONCAT17((byte)((ulong)uVar15 >> 0x38) ^ (byte)((ulong)uVar14 >> 0x38),
                    CONCAT16((byte)((ulong)uVar15 >> 0x30) ^ (byte)((ulong)uVar14 >> 0x30),
                             CONCAT15((byte)((ulong)uVar15 >> 0x28) ^ (byte)((ulong)uVar14 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar15 >> 0x20) ^
                                               (byte)((ulong)uVar14 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar15 >> 0x18) ^
                                                        (byte)((ulong)uVar14 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar15 >> 0x10) ^
                                                                 (byte)((ulong)uVar14 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar15 >> 8)
                                                                          ^ (byte)((ulong)uVar14 >>
                                                                                  8),
                                                                          (byte)uVar15 ^
                                                                          (byte)uVar14)))))));
      pbVar9 = pbVar9 + 8;
      pbVar10 = pbVar10 + 8;
    } while (uVar7 != 0);
    if (uVar4 != uVar5) goto LAB_003d7754;
  }
  (*pcVar1)(param_1 + 0x10,param_1 + 0x10,uVar16);
  (*pcVar1)(param_1,local_70,uVar16);
  uVar7 = 0;
  if ((7 < uVar4) && (0x1f < (ulong)((long)param_3 - (long)param_2))) {
    uVar7 = uVar4 & 8;
    puVar8 = local_70;
    uVar5 = uVar7;
    puVar11 = param_3;
    pbVar9 = param_2;
    do {
      uVar14 = *puVar8;
      uVar5 = uVar5 - 8;
      uVar15 = *(undefined8 *)pbVar9;
      *puVar11 = CONCAT17((byte)((ulong)uVar15 >> 0x38) ^ (byte)((ulong)uVar14 >> 0x38),
                          CONCAT16((byte)((ulong)uVar15 >> 0x30) ^ (byte)((ulong)uVar14 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar15 >> 0x28) ^
                                            (byte)((ulong)uVar14 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar15 >> 0x20) ^
                                                     (byte)((ulong)uVar14 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar15 >> 0x18) ^
                                                              (byte)((ulong)uVar14 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar15 >> 0x10)
                                                                       ^ (byte)((ulong)uVar14 >>
                                                                               0x10),
                                                                       CONCAT11((byte)((ulong)uVar15
                                                                                      >> 8) ^
                                                                                (byte)((ulong)uVar14
                                                                                      >> 8),
                                                                                (byte)uVar15 ^
                                                                                (byte)uVar14)))))));
      puVar8 = puVar8 + 1;
      puVar11 = puVar11 + 1;
      pbVar9 = pbVar9 + 8;
    } while (uVar5 != 0);
    if (uVar4 == uVar7) goto LAB_003d7810;
  }
  lVar6 = uVar4 - uVar7;
  pbVar9 = (byte *)((ulong)local_70 | uVar7);
  pbVar10 = param_2 + uVar7;
  pbVar12 = (byte *)((long)param_3 + uVar7);
  do {
    lVar6 = lVar6 + -1;
    *pbVar12 = *pbVar10 ^ *pbVar9;
    pbVar9 = pbVar9 + 1;
    pbVar10 = pbVar10 + 1;
    pbVar12 = pbVar12 + 1;
  } while (lVar6 != 0);
LAB_003d7810:
  memset(param_1 + uVar13,0,(ulong)(0x10 - (int)uVar13));
  (*pcVar1)(param_1,local_70,uVar16);
  uVar14 = *(undefined8 *)(param_1 + 0x18);
  uVar16 = *(undefined8 *)(param_1 + 0x10);
  *param_1 = bVar2;
  *(ulong *)(param_1 + 0x18) =
       CONCAT17((byte)((ulong)uVar14 >> 0x38) ^ (byte)((ulong)local_70[1] >> 0x38),
                CONCAT16((byte)((ulong)uVar14 >> 0x30) ^ (byte)((ulong)local_70[1] >> 0x30),
                         CONCAT15((byte)((ulong)uVar14 >> 0x28) ^ (byte)((ulong)local_70[1] >> 0x28)
                                  ,CONCAT14((byte)((ulong)uVar14 >> 0x20) ^
                                            (byte)((ulong)local_70[1] >> 0x20),
                                            CONCAT13((byte)((ulong)uVar14 >> 0x18) ^
                                                     (byte)((ulong)local_70[1] >> 0x18),
                                                     CONCAT12((byte)((ulong)uVar14 >> 0x10) ^
                                                              (byte)((ulong)local_70[1] >> 0x10),
                                                              CONCAT11((byte)((ulong)uVar14 >> 8) ^
                                                                       (byte)((ulong)local_70[1] >>
                                                                             8),(byte)uVar14 ^
                                                                                (byte)local_70[1])))
                                           ))));
  *(ulong *)(param_1 + 0x10) =
       CONCAT17((byte)((ulong)uVar16 >> 0x38) ^ (byte)((ulong)local_70[0] >> 0x38),
                CONCAT16((byte)((ulong)uVar16 >> 0x30) ^ (byte)((ulong)local_70[0] >> 0x30),
                         CONCAT15((byte)((ulong)uVar16 >> 0x28) ^ (byte)((ulong)local_70[0] >> 0x28)
                                  ,CONCAT14((byte)((ulong)uVar16 >> 0x20) ^
                                            (byte)((ulong)local_70[0] >> 0x20),
                                            CONCAT13((byte)((ulong)uVar16 >> 0x18) ^
                                                     (byte)((ulong)local_70[0] >> 0x18),
                                                     CONCAT12((byte)((ulong)uVar16 >> 0x10) ^
                                                              (byte)((ulong)local_70[0] >> 0x10),
                                                              CONCAT11((byte)((ulong)uVar16 >> 8) ^
                                                                       (byte)((ulong)local_70[0] >>
                                                                             8),(byte)uVar16 ^
                                                                                (byte)local_70[0])))
                                           ))));
  return 0;
}


// ===== 003d78a0  FUN_003d78a0 =====

void FUN_003d78a0(long param_1,ulong param_2)

{
  ulong uVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 >> 0x20);
  uVar1 = (ulong)*(byte *)(param_1 + 0xf) + (param_2 & 0xff);
  *(char *)(param_1 + 0xf) = (char)uVar1;
  if ((0xff < param_2) || (0xff < uVar1)) {
    uVar1 = (uVar1 >> 8) + ((param_2 & 0xff00) >> 8) + (ulong)*(byte *)(param_1 + 0xe);
    *(char *)(param_1 + 0xe) = (char)uVar1;
    if ((param_2 >> 0x10 != 0) || (0xff < uVar1)) {
      uVar1 = (uVar1 >> 8) + ((param_2 & 0xff0000) >> 0x10) + (ulong)*(byte *)(param_1 + 0xd);
      *(char *)(param_1 + 0xd) = (char)uVar1;
      if ((param_2 >> 0x18 != 0) || (0xff < uVar1)) {
        uVar1 = (uVar1 >> 8) + (param_2 >> 0x18 & 0xff) + (ulong)*(byte *)(param_1 + 0xc);
        *(char *)(param_1 + 0xc) = (char)uVar1;
        if ((uVar2 != 0) || (0xff < uVar1)) {
          uVar1 = (uVar1 >> 8) + (param_2 >> 0x20 & 0xff) + (ulong)*(byte *)(param_1 + 0xb);
          *(char *)(param_1 + 0xb) = (char)uVar1;
          if ((uVar2 >> 8 != 0) || (0xff < uVar1)) {
            uVar1 = (uVar1 >> 8) + (param_2 >> 0x28 & 0xff) + (ulong)*(byte *)(param_1 + 10);
            *(char *)(param_1 + 10) = (char)uVar1;
            if ((uVar2 >> 0x10 != 0) || (0xff < uVar1)) {
              uVar1 = (uVar1 >> 8) + (param_2 >> 0x30 & 0xff) + (ulong)*(byte *)(param_1 + 9);
              *(char *)(param_1 + 9) = (char)uVar1;
              if ((uVar2 >> 0x18 != 0) || (0xff < uVar1)) {
                *(char *)(param_1 + 8) =
                     *(char *)(param_1 + 8) + (char)(param_2 >> 0x38) + (char)(uVar1 >> 8);
                return;
              }
            }
          }
        }
      }
    }
  }
  return;
}


// ===== 003d79b0  FUN_003d79b0 =====

undefined8 FUN_003d79b0(byte *param_1,byte *param_2,byte *param_3,ulong param_4,code *param_5)

{
  ulong uVar1;
  code *pcVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  long lVar8;
  byte *pbVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  ulong uVar14;
  byte bVar15;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  undefined8 uVar16;
  byte bVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  byte local_70 [16];
  
  pcVar2 = *(code **)(param_1 + 0x28);
  uVar24 = *(undefined8 *)(param_1 + 0x30);
  bVar3 = *param_1;
  if ((bVar3 >> 6 & 1) == 0) {
    (*pcVar2)(param_1,param_1 + 0x10,uVar24);
  }
  uVar5 = (ulong)bVar3 & 7;
  uVar14 = uVar5 ^ 0xf;
  *param_1 = (byte)uVar5;
  if ((int)uVar5 == 0) {
    uVar5 = (ulong)param_1[0xf];
    param_1[0xf] = 1;
  }
  else {
    uVar5 = 0;
    lVar8 = 0;
    if (uVar14 < 0xf) {
      lVar8 = 0xe - uVar14;
    }
    lVar8 = lVar8 + 1;
    pbVar7 = param_1 + uVar14;
    do {
      bVar15 = *pbVar7;
      lVar8 = lVar8 + -1;
      *pbVar7 = 0;
      uVar5 = (uVar5 | bVar15) << 8;
      pbVar7 = pbVar7 + 1;
    } while (lVar8 != 0);
    uVar5 = uVar5 | param_1[0xf];
    param_1[0xf] = 1;
  }
  if (uVar5 != param_4) {
    return 0xffffffff;
  }
  if (param_4 < 0x10) {
    uVar5 = param_4;
    if (param_4 == 0) goto LAB_003d7b3c;
  }
  else {
    (*param_5)(param_2,param_3,param_4 >> 4,uVar24,param_1,param_1 + 0x10);
    uVar5 = param_4 & 0xf;
    if (uVar5 == 0) goto LAB_003d7b3c;
    param_3 = param_3 + (param_4 & 0xfffffffffffffff0);
    param_2 = param_2 + (param_4 & 0xfffffffffffffff0);
    FUN_003d78a0(param_1,param_4 >> 4);
  }
  (*pcVar2)(param_1,local_70,uVar24);
  uVar10 = uVar5 - 1;
  pbVar7 = param_1 + 0x10;
  uVar1 = uVar5;
  if (uVar5 == 0 || uVar10 == 0) {
    uVar1 = 1;
  }
  if (uVar5 < 8) {
    uVar6 = 0;
    uVar4 = 0;
LAB_003d7b04:
    do {
      bVar15 = local_70[uVar6];
      bVar17 = param_2[uVar6];
      param_3[uVar6] = bVar17 ^ bVar15;
      pbVar7[uVar6] = pbVar7[uVar6] ^ bVar17 ^ bVar15;
      uVar6 = (ulong)(uVar4 + 1);
      uVar4 = uVar4 + 1;
    } while (uVar6 < uVar5);
  }
  else {
    uVar6 = 0;
    uVar4 = 0;
    if (((int)uVar10 == -1) || (uVar4 = 0, uVar10 >> 0x20 != 0)) goto LAB_003d7b04;
    uVar4 = 0;
    uVar10 = uVar5;
    if (uVar5 < 2) {
      uVar10 = 1;
    }
    uVar6 = 0;
    if (((pbVar7 < param_3 + uVar10 && param_3 < param_1 + uVar10 + 0x10) ||
        (param_3 < param_2 + uVar10 && param_2 < param_3 + uVar10)) ||
       (pbVar7 < param_2 + uVar10 && param_2 < param_1 + uVar10 + 0x10)) goto LAB_003d7b04;
    uVar6 = uVar1 & 8;
    uVar4 = (uint)uVar6;
    pbVar9 = local_70;
    uVar10 = uVar6;
    pbVar11 = pbVar7;
    pbVar12 = param_3;
    pbVar13 = param_2;
    do {
      uVar16 = *(undefined8 *)pbVar9;
      uVar10 = uVar10 - 8;
      uVar25 = *(undefined8 *)pbVar13;
      bVar15 = (byte)uVar25 ^ (byte)uVar16;
      bVar17 = (byte)((ulong)uVar25 >> 8) ^ (byte)((ulong)uVar16 >> 8);
      bVar18 = (byte)((ulong)uVar25 >> 0x10) ^ (byte)((ulong)uVar16 >> 0x10);
      bVar19 = (byte)((ulong)uVar25 >> 0x18) ^ (byte)((ulong)uVar16 >> 0x18);
      bVar20 = (byte)((ulong)uVar25 >> 0x20) ^ (byte)((ulong)uVar16 >> 0x20);
      bVar21 = (byte)((ulong)uVar25 >> 0x28) ^ (byte)((ulong)uVar16 >> 0x28);
      bVar22 = (byte)((ulong)uVar25 >> 0x30) ^ (byte)((ulong)uVar16 >> 0x30);
      bVar23 = (byte)((ulong)uVar25 >> 0x38) ^ (byte)((ulong)uVar16 >> 0x38);
      uVar16 = *(undefined8 *)pbVar11;
      *(ulong *)pbVar12 =
           CONCAT17(bVar23,CONCAT16(bVar22,CONCAT15(bVar21,CONCAT14(bVar20,CONCAT13(bVar19,CONCAT12(
                                                  bVar18,CONCAT11(bVar17,bVar15)))))));
      *(ulong *)pbVar11 =
           CONCAT17((byte)((ulong)uVar16 >> 0x38) ^ bVar23,
                    CONCAT16((byte)((ulong)uVar16 >> 0x30) ^ bVar22,
                             CONCAT15((byte)((ulong)uVar16 >> 0x28) ^ bVar21,
                                      CONCAT14((byte)((ulong)uVar16 >> 0x20) ^ bVar20,
                                               CONCAT13((byte)((ulong)uVar16 >> 0x18) ^ bVar19,
                                                        CONCAT12((byte)((ulong)uVar16 >> 0x10) ^
                                                                 bVar18,CONCAT11((byte)((ulong)
                                                  uVar16 >> 8) ^ bVar17,(byte)uVar16 ^ bVar15)))))))
      ;
      pbVar9 = (byte *)((long)pbVar9 + 8);
      pbVar11 = pbVar11 + 8;
      pbVar12 = pbVar12 + 8;
      pbVar13 = pbVar13 + 8;
    } while (uVar10 != 0);
    if (uVar1 != uVar6) goto LAB_003d7b04;
  }
  (*pcVar2)(pbVar7,pbVar7,uVar24);
LAB_003d7b3c:
  memset(param_1 + uVar14,0,(ulong)(0x10 - (int)uVar14));
  (*pcVar2)(param_1,local_70,uVar24);
  uVar16 = *(undefined8 *)(param_1 + 0x18);
  uVar24 = *(undefined8 *)(param_1 + 0x10);
  *param_1 = bVar3;
  *(ulong *)(param_1 + 0x18) =
       CONCAT17((byte)((ulong)uVar16 >> 0x38) ^ SUB81(local_70._8_8_,7),
                CONCAT16((byte)((ulong)uVar16 >> 0x30) ^ SUB81(local_70._8_8_,6),
                         CONCAT15((byte)((ulong)uVar16 >> 0x28) ^ SUB81(local_70._8_8_,5),
                                  CONCAT14((byte)((ulong)uVar16 >> 0x20) ^ SUB81(local_70._8_8_,4),
                                           CONCAT13((byte)((ulong)uVar16 >> 0x18) ^
                                                    SUB81(local_70._8_8_,3),
                                                    CONCAT12((byte)((ulong)uVar16 >> 0x10) ^
                                                             SUB81(local_70._8_8_,2),
                                                             CONCAT11((byte)((ulong)uVar16 >> 8) ^
                                                                      SUB81(local_70._8_8_,1),
                                                                      (byte)uVar16 ^
                                                                      (byte)local_70._8_8_)))))));
  *(ulong *)(param_1 + 0x10) =
       CONCAT17((byte)((ulong)uVar24 >> 0x38) ^ SUB81(local_70._0_8_,7),
                CONCAT16((byte)((ulong)uVar24 >> 0x30) ^ SUB81(local_70._0_8_,6),
                         CONCAT15((byte)((ulong)uVar24 >> 0x28) ^ SUB81(local_70._0_8_,5),
                                  CONCAT14((byte)((ulong)uVar24 >> 0x20) ^ SUB81(local_70._0_8_,4),
                                           CONCAT13((byte)((ulong)uVar24 >> 0x18) ^
                                                    SUB81(local_70._0_8_,3),
                                                    CONCAT12((byte)((ulong)uVar24 >> 0x10) ^
                                                             SUB81(local_70._0_8_,2),
                                                             CONCAT11((byte)((ulong)uVar24 >> 8) ^
                                                                      SUB81(local_70._0_8_,1),
                                                                      (byte)uVar24 ^
                                                                      (byte)local_70._0_8_)))))));
  return 0;
}


// ===== 003d7c48  FUN_003d7c48 =====

size_t FUN_003d7c48(byte *param_1,void *param_2,size_t param_3)

{
  if (((ulong)(*param_1 >> 2) & 0xe) + 2 == param_3) {
    memcpy(param_2,param_1 + 0x10,param_3);
    return param_3;
  }
  return 0;
}


// ===== 003d7ca4  FUN_003d7ca4 =====

void FUN_003d7ca4(ulong *param_1,ulong *param_2,ulong param_3,undefined8 param_4,ulong *param_5,
                 uint *param_6,int param_7,code *param_8)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  uint uVar7;
  ulong uVar8;
  
  uVar7 = *param_6;
  if ((int)uVar7 < 0) {
    uVar7 = 0xffffffff;
    goto LAB_003d7f68;
  }
  if (param_7 == 0) {
    puVar5 = param_2;
    puVar6 = param_1;
    if (uVar7 == 0 || param_3 == 0) {
      uVar8 = param_3 - 0x10;
      if (0xf < param_3) goto LAB_003d7e24;
    }
    else {
      do {
        uVar8 = param_3;
        param_1 = (ulong *)((long)puVar6 + 1);
        uVar3 = *puVar6;
        param_2 = (ulong *)((long)puVar5 + 1);
        *(byte *)puVar5 = (byte)uVar3 ^ *(byte *)((long)param_5 + (ulong)uVar7);
        param_3 = uVar8 - 1;
        *(byte *)((long)param_5 + (ulong)uVar7) = (byte)uVar3;
        uVar7 = uVar7 + 1 & 0xf;
        if (uVar7 == 0) break;
        puVar5 = param_2;
        puVar6 = param_1;
      } while (uVar8 != 1);
      uVar8 = uVar8 - 0x11;
      if (0xf < param_3) {
LAB_003d7e24:
        (*param_8)(param_5,param_5,param_4);
        if (uVar7 < 0x10) {
          uVar3 = (ulong)uVar7;
          uVar4 = *(ulong *)((long)param_1 + uVar3);
          *(ulong *)((long)param_2 + uVar3) = *(ulong *)((long)param_5 + uVar3) ^ uVar4;
          *(ulong *)((long)param_5 + uVar3) = uVar4;
          if (uVar7 < 8) {
            lVar1 = uVar3 + 8;
            uVar3 = *(ulong *)((long)param_1 + lVar1);
            *(ulong *)((long)param_2 + lVar1) = *(ulong *)((long)param_5 + lVar1) ^ uVar3;
            *(ulong *)((long)param_5 + lVar1) = uVar3;
          }
        }
        while( true ) {
          puVar6 = param_1 + 2;
          puVar5 = param_2 + 2;
          if (uVar8 < 0x10) break;
          (*param_8)(param_5,param_5,param_4);
          uVar3 = *puVar6;
          uVar8 = uVar8 - 0x10;
          *puVar5 = *param_5 ^ uVar3;
          *param_5 = uVar3;
          uVar3 = param_1[3];
          param_2[3] = param_5[1] ^ uVar3;
          param_5[1] = uVar3;
          param_2 = puVar5;
          param_1 = puVar6;
        }
        uVar7 = 0;
        param_3 = uVar8;
        param_2 = puVar5;
        param_1 = puVar6;
      }
    }
    if (param_3 != 0) {
      (*param_8)(param_5,param_5,param_4);
      do {
        bVar2 = *(byte *)((long)param_1 + (ulong)uVar7);
        param_3 = param_3 - 1;
        *(byte *)((long)param_2 + (ulong)uVar7) = bVar2 ^ *(byte *)((long)param_5 + (ulong)uVar7);
        *(byte *)((long)param_5 + (ulong)uVar7) = bVar2;
        uVar7 = uVar7 + 1;
      } while (param_3 != 0);
    }
    goto LAB_003d7f68;
  }
  puVar5 = param_2;
  puVar6 = param_1;
  if (uVar7 == 0 || param_3 == 0) {
    uVar8 = param_3 - 0x10;
    if (0xf < param_3) goto LAB_003d7d28;
  }
  else {
    do {
      uVar8 = param_3;
      param_1 = (ulong *)((long)puVar6 + 1);
      bVar2 = *(byte *)((long)param_5 + (ulong)uVar7) ^ (byte)*puVar6;
      *(byte *)((long)param_5 + (ulong)uVar7) = bVar2;
      uVar7 = uVar7 + 1 & 0xf;
      param_2 = (ulong *)((long)puVar5 + 1);
      *(byte *)puVar5 = bVar2;
      param_3 = uVar8 - 1;
      if (uVar7 == 0) break;
      puVar5 = param_2;
      puVar6 = param_1;
    } while (uVar8 != 1);
    uVar8 = uVar8 - 0x11;
    if (0xf < param_3) {
LAB_003d7d28:
      (*param_8)(param_5,param_5,param_4);
      if (uVar7 < 0x10) {
        uVar3 = (ulong)uVar7;
        uVar4 = *(ulong *)((long)param_5 + uVar3) ^ *(ulong *)((long)param_1 + uVar3);
        *(ulong *)((long)param_5 + uVar3) = uVar4;
        *(ulong *)((long)param_2 + uVar3) = uVar4;
        if (uVar7 < 8) {
          lVar1 = uVar3 + 8;
          uVar3 = *(ulong *)((long)param_5 + lVar1) ^ *(ulong *)((long)param_1 + lVar1);
          *(ulong *)((long)param_5 + lVar1) = uVar3;
          *(ulong *)((long)param_2 + lVar1) = uVar3;
        }
      }
      while( true ) {
        puVar6 = param_1 + 2;
        puVar5 = param_2 + 2;
        if (uVar8 < 0x10) break;
        (*param_8)(param_5,param_5,param_4);
        uVar3 = *puVar6;
        uVar4 = *param_5;
        uVar8 = uVar8 - 0x10;
        *param_5 = uVar4 ^ uVar3;
        *puVar5 = uVar4 ^ uVar3;
        uVar3 = param_1[3];
        uVar4 = param_5[1];
        param_5[1] = uVar4 ^ uVar3;
        param_2[3] = uVar4 ^ uVar3;
        param_2 = puVar5;
        param_1 = puVar6;
      }
      uVar7 = 0;
      param_2 = puVar5;
      param_1 = puVar6;
      param_3 = uVar8;
    }
  }
  if (param_3 != 0) {
    (*param_8)(param_5,param_5,param_4);
    do {
      param_3 = param_3 - 1;
      bVar2 = *(byte *)((long)param_5 + (ulong)uVar7) ^ *(byte *)((long)param_1 + (ulong)uVar7);
      *(byte *)((long)param_5 + (ulong)uVar7) = bVar2;
      *(byte *)((long)param_2 + (ulong)uVar7) = bVar2;
      uVar7 = uVar7 + 1;
    } while (param_3 != 0);
  }
LAB_003d7f68:
  *param_6 = uVar7;
  return;
}


// ===== 003d7f84  FUN_003d7f84 =====

void FUN_003d7f84(long param_1,long param_2,ulong param_3,undefined8 param_4,
                 undefined1 (*param_5) [16],undefined8 param_6,int param_7,code *param_8)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  undefined1 auVar5 [16];
  ulong uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  char cStack_78;
  uint uVar4;
  
  if (param_3 != 0) {
    uVar6 = 0;
    do {
      uVar7 = uVar6 >> 3;
      uVar1 = (uint)uVar6 & 7;
      auVar5 = *param_5;
      uVar2 = 1 << (ulong)(uVar1 ^ 7);
      cStack_78 = auVar5[8];
      uVar4 = (uint)((uVar2 & *(byte *)(param_1 + uVar7)) != 0) << 7;
      cVar3 = (char)uVar4;
      auVar8 = (*param_8)(param_5,param_5,param_4);
      auVar8 = NEON_ext(auVar5,auVar8,1,1);
      uVar4 = (byte)(*param_5)[0] ^ uVar4;
      if (param_7 != 0) {
        cVar3 = (char)uVar4;
      }
      uVar6 = uVar6 + 1;
      *(ulong *)(*param_5 + 8) =
           CONCAT17(auVar5[0xf] * '\x02' - (cVar3 >> 7),
                    CONCAT16(auVar5[0xe] * '\x02' - (auVar8[0xe] >> 7),
                             CONCAT15(auVar5[0xd] * '\x02' - (auVar8[0xd] >> 7),
                                      CONCAT14(auVar5[0xc] * '\x02' - (auVar8[0xc] >> 7),
                                               CONCAT13(auVar5[0xb] * '\x02' - (auVar8[0xb] >> 7),
                                                        CONCAT12(auVar5[10] * '\x02' -
                                                                 (auVar8[10] >> 7),
                                                                 CONCAT11(auVar5[9] * '\x02' -
                                                                          (auVar8[9] >> 7),
                                                                          cStack_78 * '\x02' -
                                                                          (auVar8[8] >> 7))))))));
      *(ulong *)*param_5 =
           CONCAT17(auVar5[7] * '\x02' - (auVar8[7] >> 7),
                    CONCAT16(auVar5[6] * '\x02' - (auVar8[6] >> 7),
                             CONCAT15(auVar5[5] * '\x02' - (auVar8[5] >> 7),
                                      CONCAT14(auVar5[4] * '\x02' - (auVar8[4] >> 7),
                                               CONCAT13(auVar5[3] * '\x02' - (auVar8[3] >> 7),
                                                        CONCAT12(auVar5[2] * '\x02' -
                                                                 (auVar8[2] >> 7),
                                                                 CONCAT11(auVar5[1] * '\x02' -
                                                                          (auVar8[1] >> 7),
                                                                          auVar5[0] * '\x02' -
                                                                          (auVar8[0] >> 7))))))));
      *(byte *)(param_2 + uVar7) =
           *(byte *)(param_2 + uVar7) & ((byte)uVar2 ^ 0xff) |
           (byte)((uVar4 & 0x80) >> (ulong)uVar1);
    } while (param_3 != uVar6);
  }
  return;
}


// ===== 003d8080  FUN_003d8080 =====

void FUN_003d8080(byte *param_1,byte *param_2,long param_3,undefined8 param_4,byte *param_5,
                 undefined8 param_6,int param_7,code *param_8)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if (param_3 != 0) {
    puVar5 = (undefined8 *)((ulong)&local_60 | 1);
    if (param_7 == 0) {
      do {
        uStack_58 = *(undefined8 *)(param_5 + 8);
        local_60 = *(undefined8 *)param_5;
        (*param_8)(param_5,param_5,param_4);
        bVar1 = *param_1;
        uVar3 = *puVar5;
        uVar4 = *(undefined8 *)((long)puVar5 + 7);
        param_3 = param_3 + -1;
        *param_2 = *param_5 ^ bVar1;
        *(undefined8 *)param_5 = uVar3;
        *(undefined8 *)(param_5 + 7) = uVar4;
        param_5[0xf] = bVar1;
        param_2 = param_2 + 1;
        param_1 = param_1 + 1;
      } while (param_3 != 0);
    }
    else {
      do {
        uStack_58 = *(undefined8 *)(param_5 + 8);
        local_60 = *(undefined8 *)param_5;
        (*param_8)(param_5,param_5,param_4);
        bVar1 = *param_1;
        bVar2 = *param_5;
        uVar4 = *puVar5;
        param_3 = param_3 + -1;
        uVar3 = *(undefined8 *)((long)puVar5 + 7);
        *param_2 = bVar2 ^ bVar1;
        *(undefined8 *)param_5 = uVar4;
        *(undefined8 *)(param_5 + 7) = uVar3;
        param_5[0xf] = bVar2 ^ bVar1;
        param_2 = param_2 + 1;
        param_1 = param_1 + 1;
      } while (param_3 != 0);
    }
  }
  return;
}


// ===== 003d816c  FUN_003d816c =====

void FUN_003d816c(ulong *param_1,ulong *param_2,ulong param_3,undefined8 param_4,char *param_5,
                 ulong *param_6,uint *param_7,code *param_8)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *puVar8;
  uint uVar9;
  
  uVar9 = *param_7;
  if ((uVar9 != 0) && (uVar6 = param_3, puVar7 = param_2, puVar8 = param_1, param_3 != 0)) {
    do {
      param_1 = (ulong *)((long)puVar8 + 1);
      uVar1 = (ulong)uVar9;
      param_3 = uVar6 - 1;
      uVar9 = uVar9 + 1 & 0xf;
      param_2 = (ulong *)((long)puVar7 + 1);
      *(byte *)puVar7 = *(byte *)((long)param_6 + uVar1) ^ (byte)*puVar8;
      if (uVar9 == 0) break;
      bVar5 = uVar6 != 1;
      uVar6 = param_3;
      puVar7 = param_2;
      puVar8 = param_1;
    } while (bVar5);
  }
  if (0xf < param_3) {
    do {
      (*param_8)(param_5,param_6,param_4);
      param_3 = param_3 - 0x10;
      uVar9 = (uint)(byte)param_5[0xe] + ((byte)param_5[0xf] + 1 >> 8);
      param_5[0xf] = (char)((byte)param_5[0xf] + 1);
      uVar2 = (uint)(byte)param_5[0xd] + (uVar9 >> 8);
      param_5[0xe] = (char)uVar9;
      uVar9 = (uint)(byte)param_5[0xc] + (uVar2 >> 8);
      param_5[0xd] = (char)uVar2;
      uVar2 = (uint)(byte)param_5[0xb] + (uVar9 >> 8);
      param_5[0xc] = (char)uVar9;
      uVar9 = (uint)(byte)param_5[10] + (uVar2 >> 8);
      param_5[0xb] = (char)uVar2;
      uVar2 = (uint)(byte)param_5[9] + (uVar9 >> 8);
      param_5[10] = (char)uVar9;
      uVar9 = (uint)(byte)param_5[8] + (uVar2 >> 8);
      param_5[9] = (char)uVar2;
      uVar2 = (uint)(byte)param_5[7] + (uVar9 >> 8);
      param_5[8] = (char)uVar9;
      uVar9 = (uint)(byte)param_5[6] + (uVar2 >> 8);
      param_5[7] = (char)uVar2;
      uVar2 = (uint)(byte)param_5[5] + (uVar9 >> 8);
      param_5[6] = (char)uVar9;
      uVar9 = (uint)(byte)param_5[4] + (uVar2 >> 8);
      param_5[5] = (char)uVar2;
      uVar2 = (uint)(byte)param_5[3] + (uVar9 >> 8);
      param_5[4] = (char)uVar9;
      uVar9 = (uint)(byte)param_5[2] + (uVar2 >> 8);
      param_5[3] = (char)uVar2;
      iVar3 = (uint)(byte)param_5[1] + (uVar9 >> 8);
      param_5[2] = (char)uVar9;
      param_5[1] = (char)iVar3;
      *param_5 = *param_5 + (char)((uint)iVar3 >> 8);
      *param_2 = *param_6 ^ *param_1;
      puVar7 = param_1 + 1;
      param_1 = param_1 + 2;
      param_2[1] = param_6[1] ^ *puVar7;
      param_2 = param_2 + 2;
    } while (0xf < param_3);
    uVar9 = 0;
  }
  if (param_3 != 0) {
    (*param_8)(param_5,param_6,param_4);
    uVar2 = (uint)(byte)param_5[0xe] + ((byte)param_5[0xf] + 1 >> 8);
    param_5[0xf] = (char)((byte)param_5[0xf] + 1);
    uVar4 = (uint)(byte)param_5[0xd] + (uVar2 >> 8);
    param_5[0xe] = (char)uVar2;
    uVar2 = (uint)(byte)param_5[0xc] + (uVar4 >> 8);
    param_5[0xd] = (char)uVar4;
    uVar4 = (uint)(byte)param_5[0xb] + (uVar2 >> 8);
    param_5[0xc] = (char)uVar2;
    uVar2 = (uint)(byte)param_5[10] + (uVar4 >> 8);
    param_5[0xb] = (char)uVar4;
    uVar4 = (uint)(byte)param_5[9] + (uVar2 >> 8);
    param_5[10] = (char)uVar2;
    uVar2 = (uint)(byte)param_5[8] + (uVar4 >> 8);
    param_5[9] = (char)uVar4;
    uVar4 = (uint)(byte)param_5[7] + (uVar2 >> 8);
    param_5[8] = (char)uVar2;
    uVar2 = (uint)(byte)param_5[6] + (uVar4 >> 8);
    param_5[7] = (char)uVar4;
    uVar4 = (uint)(byte)param_5[5] + (uVar2 >> 8);
    param_5[6] = (char)uVar2;
    uVar2 = (uint)(byte)param_5[4] + (uVar4 >> 8);
    param_5[5] = (char)uVar4;
    uVar4 = (uint)(byte)param_5[3] + (uVar2 >> 8);
    param_5[4] = (char)uVar2;
    uVar2 = (uint)(byte)param_5[2] + (uVar4 >> 8);
    param_5[3] = (char)uVar4;
    iVar3 = (uint)(byte)param_5[1] + (uVar2 >> 8);
    param_5[2] = (char)uVar2;
    param_5[1] = (char)iVar3;
    *param_5 = *param_5 + (char)((uint)iVar3 >> 8);
    do {
      param_3 = param_3 - 1;
      *(byte *)((long)param_2 + (ulong)uVar9) =
           *(byte *)((long)param_6 + (ulong)uVar9) ^ *(byte *)((long)param_1 + (ulong)uVar9);
      uVar9 = uVar9 + 1;
    } while (param_3 != 0);
  }
  *param_7 = uVar9;
  return;
}


// ===== 003d8404  FUN_003d8404 =====

void FUN_003d8404(byte *param_1,byte *param_2,ulong param_3,undefined8 param_4,char *param_5,
                 undefined8 *param_6,uint *param_7,code *param_8)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  long lVar11;
  uint uVar12;
  
  uVar12 = *param_7;
  if (uVar12 == 0) {
    uVar8 = (*(uint *)(param_5 + 0xc) & 0xff00ff00) >> 8 |
            (*(uint *)(param_5 + 0xc) & 0xff00ff) << 8;
    uVar8 = uVar8 >> 0x10 | uVar8 << 0x10;
    if (param_3 < 0x10) goto LAB_003d85a4;
  }
  else {
    uVar6 = param_3;
    pbVar9 = param_2;
    pbVar10 = param_1;
    if (param_3 != 0) {
      do {
        param_1 = pbVar10 + 1;
        uVar1 = (ulong)uVar12;
        param_3 = uVar6 - 1;
        uVar12 = uVar12 + 1 & 0xf;
        param_2 = pbVar9 + 1;
        *pbVar9 = *(byte *)((long)param_6 + uVar1) ^ *pbVar10;
        if (uVar12 == 0) break;
        bVar5 = uVar6 != 1;
        uVar6 = param_3;
        pbVar9 = param_2;
        pbVar10 = param_1;
      } while (bVar5);
    }
    uVar8 = (*(uint *)(param_5 + 0xc) & 0xff00ff00) >> 8 |
            (*(uint *)(param_5 + 0xc) & 0xff00ff) << 8;
    uVar8 = uVar8 >> 0x10 | uVar8 << 0x10;
    if (param_3 < 0x10) goto LAB_003d85a4;
  }
  do {
    uVar6 = param_3 >> 4;
    if (0xfffffff < uVar6) {
      uVar6 = 0x10000000;
    }
    uVar2 = uVar8 + (int)uVar6;
    uVar7 = (ulong)uVar2;
    uVar1 = uVar7;
    if (uVar6 <= uVar7) {
      uVar1 = 0;
    }
    uVar8 = 0;
    if (uVar6 <= uVar7) {
      uVar8 = uVar2;
    }
    lVar11 = uVar6 - uVar1;
    (*param_8)(param_1,param_2,lVar11,param_4,param_5);
    uVar2 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
    *(uint *)(param_5 + 0xc) = uVar2 >> 0x10 | uVar2 << 0x10;
    if (uVar8 == 0) {
      uVar2 = (uint)(byte)param_5[10] + ((byte)param_5[0xb] + 1 >> 8);
      param_5[0xb] = (char)((byte)param_5[0xb] + 1);
      uVar3 = (uint)(byte)param_5[9] + (uVar2 >> 8);
      param_5[10] = (char)uVar2;
      uVar2 = (uint)(byte)param_5[8] + (uVar3 >> 8);
      param_5[9] = (char)uVar3;
      uVar3 = (uint)(byte)param_5[7] + (uVar2 >> 8);
      param_5[8] = (char)uVar2;
      uVar2 = (uint)(byte)param_5[6] + (uVar3 >> 8);
      param_5[7] = (char)uVar3;
      uVar3 = (uint)(byte)param_5[5] + (uVar2 >> 8);
      param_5[6] = (char)uVar2;
      uVar2 = (uint)(byte)param_5[4] + (uVar3 >> 8);
      param_5[5] = (char)uVar3;
      uVar3 = (uint)(byte)param_5[3] + (uVar2 >> 8);
      param_5[4] = (char)uVar2;
      uVar2 = (uint)(byte)param_5[2] + (uVar3 >> 8);
      param_5[3] = (char)uVar3;
      iVar4 = (uint)(byte)param_5[1] + (uVar2 >> 8);
      param_5[2] = (char)uVar2;
      param_5[1] = (char)iVar4;
      *param_5 = *param_5 + (char)((uint)iVar4 >> 8);
    }
    param_3 = param_3 + lVar11 * -0x10;
    param_2 = param_2 + lVar11 * 0x10;
    param_1 = param_1 + lVar11 * 0x10;
  } while (0xf < param_3);
LAB_003d85a4:
  if (param_3 != 0) {
    *param_6 = 0;
    param_6[1] = 0;
    (*param_8)(param_6,param_6,1,param_4,param_5);
    uVar2 = (uVar8 + 1 & 0xff00ff00) >> 8 | (uVar8 + 1 & 0xff00ff) << 8;
    *(uint *)(param_5 + 0xc) = uVar2 >> 0x10 | uVar2 << 0x10;
    if (uVar8 == 0xffffffff) {
      uVar8 = (uint)(byte)param_5[10] + ((byte)param_5[0xb] + 1 >> 8);
      param_5[0xb] = (char)((byte)param_5[0xb] + 1);
      uVar2 = (uint)(byte)param_5[9] + (uVar8 >> 8);
      param_5[10] = (char)uVar8;
      uVar8 = (uint)(byte)param_5[8] + (uVar2 >> 8);
      param_5[9] = (char)uVar2;
      uVar2 = (uint)(byte)param_5[7] + (uVar8 >> 8);
      param_5[8] = (char)uVar8;
      uVar8 = (uint)(byte)param_5[6] + (uVar2 >> 8);
      param_5[7] = (char)uVar2;
      uVar2 = (uint)(byte)param_5[5] + (uVar8 >> 8);
      param_5[6] = (char)uVar8;
      uVar8 = (uint)(byte)param_5[4] + (uVar2 >> 8);
      param_5[5] = (char)uVar2;
      uVar2 = (uint)(byte)param_5[3] + (uVar8 >> 8);
      param_5[4] = (char)uVar8;
      uVar8 = (uint)(byte)param_5[2] + (uVar2 >> 8);
      param_5[3] = (char)uVar2;
      iVar4 = (uint)(byte)param_5[1] + (uVar8 >> 8);
      param_5[2] = (char)uVar8;
      param_5[1] = (char)iVar4;
      *param_5 = *param_5 + (char)((uint)iVar4 >> 8);
    }
    do {
      param_3 = param_3 - 1;
      param_2[uVar12] = *(byte *)((long)param_6 + (ulong)uVar12) ^ param_1[uVar12];
      uVar12 = uVar12 + 1;
    } while (param_3 != 0);
  }
  *param_7 = uVar12;
  return;
}


// ===== 003d86b4  FUN_003d86b4 =====

void FUN_003d86b4(undefined8 *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar4 = uVar2 >> 1;
  uVar3 = uVar4 | uVar1 << 0x3f;
  param_1[0x10] = uVar1;
  param_1[0x11] = uVar2;
  uVar7 = uVar3 >> 1 | (uVar1 >> 1) << 0x3f;
  uVar5 = -(uVar2 & 1) & 0xe100000000000000 ^ uVar1 >> 1;
  param_1[8] = uVar5;
  param_1[9] = uVar3;
  uVar8 = uVar5 >> 1 ^ -(uVar4 & 1) & 0xe100000000000000;
  uVar6 = uVar7 >> 1 | (uVar5 >> 1) << 0x3f;
  uVar4 = -((uVar4 & 2) >> 1) & 0xe100000000000000 ^ uVar8 >> 1;
  param_1[4] = uVar8;
  param_1[5] = uVar7;
  uVar10 = uVar6 ^ uVar7;
  param_1[0xc] = uVar8 ^ uVar5;
  param_1[0xd] = uVar7 ^ uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar6;
  uVar9 = uVar4 ^ uVar8;
  param_1[0x12] = uVar4 ^ uVar1;
  param_1[0x13] = uVar6 ^ uVar2;
  param_1[0x14] = uVar8 ^ uVar1;
  param_1[0x15] = uVar7 ^ uVar2;
  param_1[0x16] = uVar9 ^ uVar1;
  param_1[0x17] = uVar10 ^ uVar2;
  param_1[0x18] = uVar5 ^ uVar1;
  param_1[0x19] = uVar3 ^ uVar2;
  param_1[6] = uVar9;
  param_1[7] = uVar10;
  param_1[0x1a] = uVar4 ^ uVar5 ^ uVar1;
  param_1[0x1b] = uVar6 ^ uVar3 ^ uVar2;
  param_1[10] = uVar4 ^ uVar5;
  param_1[0xb] = uVar6 ^ uVar3;
  param_1[0xe] = uVar9 ^ uVar5;
  param_1[0xf] = uVar10 ^ uVar3;
  param_1[0x1c] = uVar8 ^ uVar5 ^ uVar1;
  param_1[0x1d] = uVar7 ^ uVar3 ^ uVar2;
  param_1[0x1e] = uVar9 ^ uVar5 ^ uVar1;
  param_1[0x1f] = uVar10 ^ uVar3 ^ uVar2;
  return;
}


// ===== 003d8790  thunk_FUN_003d9f50 =====

void thunk_FUN_003d9f50(undefined1 *param_1,long param_2)

{
  byte *pbVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = 0xe;
  puVar2 = (ulong *)(param_2 + ((ulong)(byte)param_1[0xf] & 0xf) * 0x10);
  puVar3 = (ulong *)(param_2 + ((ulong)(byte)param_1[0xf] & 0xf0));
  uVar4 = *puVar2;
  uVar5 = puVar2[1];
  uVar7 = *(ulong *)(&DAT_00207338 + (uVar5 & 0xf) * 8) ^ uVar4 >> 4 ^ *puVar3;
  uVar4 = puVar3[1] ^ (uVar5 >> 4 | uVar4 << 0x3c);
  do {
    pbVar1 = param_1 + uVar6;
    uVar6 = uVar6 - 1;
    puVar2 = (ulong *)(param_2 + ((ulong)*pbVar1 & 0xf) * 0x10);
    puVar3 = (ulong *)(param_2 + ((ulong)*pbVar1 & 0xf0));
    uVar5 = puVar2[1] ^ (uVar4 >> 4 | uVar7 << 0x3c);
    uVar7 = *(ulong *)(&DAT_00207338 + (uVar4 & 0xf) * 8) ^ uVar7 >> 4 ^ *puVar2;
    uVar4 = puVar3[1] ^ (uVar5 >> 4 | uVar7 << 0x3c);
    uVar7 = *(ulong *)(&DAT_00207338 + (uVar5 & 0xf) * 8) ^ uVar7 >> 4 ^ *puVar3;
  } while (uVar6 < 0xfffffffffffffffe);
  param_1[7] = (char)uVar7;
  param_1[0xf] = (char)uVar4;
  *param_1 = (char)(uVar7 >> 0x38);
  param_1[1] = (char)(uVar7 >> 0x30);
  param_1[2] = (char)(uVar7 >> 0x28);
  param_1[3] = (char)(uVar7 >> 0x20);
  param_1[4] = (char)(uVar7 >> 0x18);
  param_1[5] = (char)(uVar7 >> 0x10);
  param_1[6] = (char)(uVar7 >> 8);
  param_1[9] = (char)(uVar4 >> 0x30);
  param_1[8] = (char)(uVar4 >> 0x38);
  param_1[0xb] = (char)(uVar4 >> 0x20);
  param_1[10] = (char)(uVar4 >> 0x28);
  param_1[0xd] = (char)(uVar4 >> 0x10);
  param_1[0xc] = (char)(uVar4 >> 0x18);
  param_1[0xe] = (char)(uVar4 >> 8);
  return;
}


// ===== 003d8794  thunk_FUN_003da064 =====

void thunk_FUN_003da064(undefined1 *param_1,long param_2,long param_3,long param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar5 = (ulong)(byte)param_1[0xf];
  do {
    uVar5 = (ulong)((uint)*(byte *)(param_3 + 0xf) ^ (uint)uVar5);
    puVar3 = (ulong *)(param_2 + (uVar5 & 0xf) * 0x10);
    puVar4 = (ulong *)(param_2 + (uVar5 & 0xf0));
    uVar5 = *puVar3;
    uVar7 = puVar3[1];
    uVar6 = *(ulong *)(&DAT_00207338 + (uVar7 & 0xf) * 8) ^ uVar5 >> 4 ^ *puVar4;
    uVar5 = puVar4[1] ^ (uVar7 >> 4 | uVar5 << 0x3c);
    uVar7 = 0xe;
    do {
      pbVar1 = param_1 + uVar7;
      pbVar2 = (byte *)(param_3 + uVar7);
      uVar7 = uVar7 - 1;
      uVar8 = (ulong)(*pbVar2 ^ *pbVar1);
      puVar3 = (ulong *)(param_2 + (uVar8 & 0xf) * 0x10);
      puVar4 = (ulong *)(param_2 + (uVar8 & 0xf0));
      uVar8 = puVar3[1] ^ (uVar5 >> 4 | uVar6 << 0x3c);
      uVar6 = *(ulong *)(&DAT_00207338 + (uVar5 & 0xf) * 8) ^ uVar6 >> 4 ^ *puVar3;
      uVar5 = puVar4[1] ^ (uVar8 >> 4 | uVar6 << 0x3c);
      uVar6 = *(ulong *)(&DAT_00207338 + (uVar8 & 0xf) * 8) ^ uVar6 >> 4 ^ *puVar4;
    } while (uVar7 < 0xfffffffffffffffe);
    param_1[7] = (char)uVar6;
    param_4 = param_4 + -0x10;
    param_3 = param_3 + 0x10;
    param_1[0xf] = (char)uVar5;
    *param_1 = (char)(uVar6 >> 0x38);
    param_1[1] = (char)(uVar6 >> 0x30);
    param_1[2] = (char)(uVar6 >> 0x28);
    param_1[3] = (char)(uVar6 >> 0x20);
    param_1[4] = (char)(uVar6 >> 0x18);
    param_1[5] = (char)(uVar6 >> 0x10);
    param_1[6] = (char)(uVar6 >> 8);
    param_1[9] = (char)(uVar5 >> 0x30);
    param_1[8] = (char)(uVar5 >> 0x38);
    param_1[0xc] = (char)(uVar5 >> 0x18);
    param_1[10] = (char)(uVar5 >> 0x28);
    param_1[0xb] = (char)(uVar5 >> 0x20);
    param_1[0xd] = (char)(uVar5 >> 0x10);
    param_1[0xe] = (char)(uVar5 >> 8);
  } while (param_4 != 0);
  return;
}


// ===== 003d8798  FUN_003d8798 =====

void FUN_003d8798(undefined8 *param_1,undefined8 param_2,code *param_3)

{
  uint uVar1;
  uint uVar2;
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
  ulong *puVar13;
  
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
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
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  puVar13 = param_1 + 10;
  param_1[0xb] = 0;
  *puVar13 = 0;
  param_1[0x30] = param_3;
  param_1[0x31] = param_2;
  (*param_3)(puVar13,puVar13,param_2);
  uVar9 = (ulong)*(byte *)((long)param_1 + 0x5f);
  uVar1 = ((uint)*puVar13 & 0xff00ff00) >> 8 | ((uint)*puVar13 & 0xff00ff) << 8;
  uVar2 = (*(uint *)(param_1 + 0xb) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 0xb) & 0xff00ff) << 8;
  uVar4 = (ulong)*(byte *)((long)param_1 + 0x54) << 0x18 |
          (ulong)*(byte *)((long)param_1 + 0x55) << 0x10 |
          (ulong)(uVar1 >> 0x10 | uVar1 << 0x10) << 0x20 |
          (ulong)*(byte *)((long)param_1 + 0x56) << 8 | (ulong)*(byte *)((long)param_1 + 0x57);
  uVar3 = (ulong)*(byte *)((long)param_1 + 0x5c) << 0x18 |
          (ulong)*(byte *)((long)param_1 + 0x5d) << 0x10 |
          (ulong)(uVar2 >> 0x10 | uVar2 << 0x10) << 0x20 |
          (ulong)*(byte *)((long)param_1 + 0x5e) << 8 | uVar9;
  uVar5 = uVar3 >> 1 | (ulong)*(byte *)((long)param_1 + 0x57) << 0x3f;
  param_1[0x2d] = FUN_003da064;
  param_1[0x2e] = FUN_003d9f50;
  uVar8 = uVar5 >> 1 | (uVar4 >> 1) << 0x3f;
  uVar6 = -(uVar9 & 1) & 0xe100000000000000 ^ uVar4 >> 1;
  *puVar13 = uVar4;
  uVar7 = uVar6 >> 1 ^ -((uVar9 & 2) >> 1) & 0xe100000000000000;
  uVar11 = uVar8 >> 1 | (uVar6 >> 1) << 0x3f;
  param_1[0xb] = uVar3;
  param_1[0xc] = 0;
  uVar10 = -((uVar9 & 4) >> 2) & 0xe100000000000000 ^ uVar7 >> 1;
  param_1[0xf] = uVar11;
  param_1[0x10] = uVar7;
  uVar12 = uVar11 ^ uVar8;
  param_1[0x13] = uVar12;
  param_1[0x14] = uVar6;
  param_1[0xd] = 0;
  param_1[0xe] = uVar10;
  uVar9 = uVar10 ^ uVar7;
  param_1[0x11] = uVar8;
  param_1[0x12] = uVar9;
  param_1[0x1d] = uVar3;
  param_1[0x1e] = uVar10 ^ uVar4;
  param_1[0x1f] = uVar11 ^ uVar3;
  param_1[0x20] = uVar7 ^ uVar4;
  param_1[0x21] = uVar8 ^ uVar3;
  param_1[0x22] = uVar9 ^ uVar4;
  param_1[0x15] = uVar5;
  param_1[0x16] = uVar10 ^ uVar6;
  param_1[0x23] = uVar12 ^ uVar3;
  param_1[0x24] = uVar6 ^ uVar4;
  param_1[0x25] = uVar5 ^ uVar3;
  param_1[0x26] = uVar10 ^ uVar6 ^ uVar4;
  param_1[0x1b] = uVar12 ^ uVar5;
  param_1[0x1c] = uVar4;
  param_1[0x27] = uVar11 ^ uVar5 ^ uVar3;
  param_1[0x28] = uVar7 ^ uVar6 ^ uVar4;
  param_1[0x29] = uVar8 ^ uVar5 ^ uVar3;
  param_1[0x2a] = uVar9 ^ uVar6 ^ uVar4;
  param_1[0x17] = uVar11 ^ uVar5;
  param_1[0x18] = uVar7 ^ uVar6;
  param_1[0x19] = uVar8 ^ uVar5;
  param_1[0x1a] = uVar9 ^ uVar6;
  param_1[0x2b] = uVar12 ^ uVar5 ^ uVar3;
  param_1[0x2c] = FUN_003d9e74;
  return;
}


// ===== 003d8960  FUN_003d8960 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003d8960(undefined8 *param_1,byte *param_2,ulong param_3)

{
  ulong uVar1;
  byte *pbVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  byte *pbVar6;
  uint uVar7;
  byte *pbVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  param_1[0x2f] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if (param_3 == 0xc) {
    uVar3 = *(undefined8 *)param_2;
    uVar7 = 2;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
    *param_1 = uVar3;
    *(undefined4 *)((long)param_1 + 0xc) = 0x1000000;
    goto LAB_003d8bc4;
  }
  pbVar8 = (byte *)(param_1 + 8);
  pbVar8[0] = 0;
  pbVar8[1] = 0;
  pbVar8[2] = 0;
  pbVar8[3] = 0;
  pbVar8[4] = 0;
  pbVar8[5] = 0;
  pbVar8[6] = 0;
  pbVar8[7] = 0;
  param_1[9] = 0;
  uVar9 = param_3;
  if (0xf < param_3) {
    do {
      *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) ^ *param_2;
      *(byte *)((long)param_1 + 0x41) = *(byte *)((long)param_1 + 0x41) ^ param_2[1];
      *(byte *)((long)param_1 + 0x42) = *(byte *)((long)param_1 + 0x42) ^ param_2[2];
      *(byte *)((long)param_1 + 0x43) = *(byte *)((long)param_1 + 0x43) ^ param_2[3];
      *(byte *)((long)param_1 + 0x44) = *(byte *)((long)param_1 + 0x44) ^ param_2[4];
      *(byte *)((long)param_1 + 0x45) = *(byte *)((long)param_1 + 0x45) ^ param_2[5];
      *(byte *)((long)param_1 + 0x46) = *(byte *)((long)param_1 + 0x46) ^ param_2[6];
      *(byte *)((long)param_1 + 0x47) = *(byte *)((long)param_1 + 0x47) ^ param_2[7];
      *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) ^ param_2[8];
      *(byte *)((long)param_1 + 0x49) = *(byte *)((long)param_1 + 0x49) ^ param_2[9];
      *(byte *)((long)param_1 + 0x4a) = *(byte *)((long)param_1 + 0x4a) ^ param_2[10];
      *(byte *)((long)param_1 + 0x4b) = *(byte *)((long)param_1 + 0x4b) ^ param_2[0xb];
      *(byte *)((long)param_1 + 0x4c) = *(byte *)((long)param_1 + 0x4c) ^ param_2[0xc];
      *(byte *)((long)param_1 + 0x4d) = *(byte *)((long)param_1 + 0x4d) ^ param_2[0xd];
      *(byte *)((long)param_1 + 0x4e) = *(byte *)((long)param_1 + 0x4e) ^ param_2[0xe];
      *(byte *)((long)param_1 + 0x4f) = *(byte *)((long)param_1 + 0x4f) ^ param_2[0xf];
      (*(code *)param_1[0x2e])(pbVar8,param_1 + 0xc);
      uVar9 = uVar9 - 0x10;
      param_2 = param_2 + 0x10;
    } while (0xf < uVar9);
  }
  if (uVar9 != 0) {
    if ((uVar9 < 8) ||
       ((pbVar8 < param_2 + uVar9 && (param_2 < (byte *)((long)param_1 + uVar9 + 0x40))))) {
      uVar1 = 0;
LAB_003d8b10:
      lVar4 = uVar9 - uVar1;
      pbVar2 = param_2 + uVar1;
      pbVar6 = (byte *)((long)param_1 + uVar1 + 0x40);
      do {
        lVar4 = lVar4 + -1;
        *pbVar6 = *pbVar6 ^ *pbVar2;
        pbVar2 = pbVar2 + 1;
        pbVar6 = pbVar6 + 1;
      } while (lVar4 != 0);
    }
    else {
      uVar1 = uVar9 & 8;
      uVar5 = uVar1;
      pbVar2 = pbVar8;
      pbVar6 = param_2;
      do {
        uVar3 = *(undefined8 *)pbVar6;
        uVar12 = *(undefined8 *)pbVar2;
        uVar5 = uVar5 - 8;
        *(ulong *)pbVar2 =
             CONCAT17((byte)((ulong)uVar12 >> 0x38) ^ (byte)((ulong)uVar3 >> 0x38),
                      CONCAT16((byte)((ulong)uVar12 >> 0x30) ^ (byte)((ulong)uVar3 >> 0x30),
                               CONCAT15((byte)((ulong)uVar12 >> 0x28) ^ (byte)((ulong)uVar3 >> 0x28)
                                        ,CONCAT14((byte)((ulong)uVar12 >> 0x20) ^
                                                  (byte)((ulong)uVar3 >> 0x20),
                                                  CONCAT13((byte)((ulong)uVar12 >> 0x18) ^
                                                           (byte)((ulong)uVar3 >> 0x18),
                                                           CONCAT12((byte)((ulong)uVar12 >> 0x10) ^
                                                                    (byte)((ulong)uVar3 >> 0x10),
                                                                    CONCAT11((byte)((ulong)uVar12 >>
                                                                                   8) ^
                                                                             (byte)((ulong)uVar3 >>
                                                                                   8),(byte)uVar12 ^
                                                                                      (byte)uVar3)))
                                                 ))));
        pbVar2 = pbVar2 + 8;
        pbVar6 = pbVar6 + 8;
      } while (uVar5 != 0);
      if (uVar9 != uVar1) goto LAB_003d8b10;
    }
    (*(code *)param_1[0x2e])(pbVar8,param_1 + 0xc);
  }
  lVar4 = param_3 << 3;
  auVar10._8_8_ = lVar4;
  auVar10._0_8_ = lVar4;
  auVar11._8_8_ = _UNK_002004f8;
  auVar11._0_8_ = _DAT_002004f0;
  auVar13 = NEON_ushl(auVar10,_DAT_00200530,8);
  auVar14 = NEON_ushl(auVar10,_DAT_002006e0,8);
  auVar11 = NEON_ushl(auVar10,auVar11,8);
  uVar9 = CONCAT44((int)lVar4,(int)(param_3 >> 5)) & 0xffffffff07ffffff;
  uVar3 = param_1[9];
  param_1[9] = CONCAT17((byte)((ulong)uVar3 >> 0x38) ^ (byte)(uVar9 >> 0x20),
                        CONCAT16((byte)((ulong)uVar3 >> 0x30) ^ (byte)uVar9,
                                 CONCAT15((byte)((ulong)uVar3 >> 0x28) ^ auVar13[8],
                                          CONCAT14((byte)((ulong)uVar3 >> 0x20) ^ auVar13[0],
                                                   CONCAT13((byte)((ulong)uVar3 >> 0x18) ^
                                                            auVar14[8],
                                                            CONCAT12((byte)((ulong)uVar3 >> 0x10) ^
                                                                     auVar14[0],
                                                                     CONCAT11((byte)((ulong)uVar3 >>
                                                                                    8) ^ auVar11[8],
                                                                              (byte)uVar3 ^
                                                                              auVar11[0])))))));
  (*(code *)param_1[0x2e])(pbVar8,param_1 + 0xc);
  uVar7 = (*(uint *)((long)param_1 + 0x4c) & 0xff00ff00) >> 8 |
          (*(uint *)((long)param_1 + 0x4c) & 0xff00ff) << 8;
  param_1[1] = SUB168(*(undefined1 (*) [16])(param_1 + 8),8);
  *param_1 = SUB168(*(undefined1 (*) [16])(param_1 + 8),0);
  uVar7 = (uVar7 >> 0x10 | uVar7 << 0x10) + 1;
LAB_003d8bc4:
  param_1[8] = 0;
  param_1[9] = 0;
  (*(code *)param_1[0x30])(param_1,param_1 + 4,param_1[0x31]);
  uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
  *(uint *)((long)param_1 + 0xc) = uVar7 >> 0x10 | uVar7 << 0x10;
  return;
}


// ===== 003d8c28  FUN_003d8c28 =====

undefined8 FUN_003d8c28(long param_1,byte *param_2,ulong param_3)

{
  bool bVar1;
  byte *pbVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    return 0xfffffffe;
  }
  uVar3 = *(ulong *)(param_1 + 0x30) + param_3;
  if (0x2000000000000000 < uVar3) {
    return 0xffffffff;
  }
  if (CARRY8(*(ulong *)(param_1 + 0x30),param_3)) {
    return 0xffffffff;
  }
  uVar7 = *(uint *)(param_1 + 0x17c);
  *(ulong *)(param_1 + 0x30) = uVar3;
  if (uVar7 == 0) {
    uVar3 = param_3 & 0xfffffffffffffff0;
  }
  else {
    if (param_3 == 0) goto LAB_003d8ce8;
    pbVar2 = param_2;
    uVar3 = param_3;
    do {
      param_2 = pbVar2 + 1;
      param_3 = uVar3 - 1;
      *(byte *)(param_1 + 0x40 + (ulong)uVar7) = *(byte *)(param_1 + 0x40 + (ulong)uVar7) ^ *pbVar2;
      uVar7 = uVar7 + 1 & 0xf;
      if (uVar7 == 0) break;
      bVar1 = uVar3 != 1;
      pbVar2 = param_2;
      uVar3 = param_3;
    } while (bVar1);
    if (uVar7 != 0) goto LAB_003d8ce8;
    (**(code **)(param_1 + 0x170))(param_1 + 0x40,param_1 + 0x60);
    uVar3 = param_3 & 0xfffffffffffffff0;
  }
  pbVar2 = param_2;
  if (uVar3 != 0) {
    (**(code **)(param_1 + 0x168))(param_1 + 0x40,param_1 + 0x60,param_2,uVar3);
    param_3 = param_3 & 0xf;
    pbVar2 = param_2 + uVar3;
  }
  if (param_3 == 0) {
    uVar7 = 0;
LAB_003d8ce8:
    *(uint *)(param_1 + 0x17c) = uVar7;
    return 0;
  }
  if ((param_3 < 8) ||
     (((byte *)(param_1 + 0x40U) < param_2 + param_3 + uVar3 &&
      (pbVar2 < (byte *)(param_1 + param_3 + 0x40))))) {
    uVar4 = 0;
  }
  else {
    if (param_3 < 0x20) {
      uVar6 = 0;
    }
    else {
      uVar4 = param_3 & 0xffffffffffffffe0;
      puVar9 = (undefined8 *)(param_1 + 0x50);
      pbVar2 = param_2 + uVar3 + 0x10;
      uVar6 = uVar4;
      do {
        uVar12 = puVar9[-1];
        uVar10 = puVar9[-2];
        uVar17 = puVar9[1];
        uVar16 = *puVar9;
        uVar6 = uVar6 - 0x20;
        uVar13 = *(undefined8 *)(pbVar2 + -8);
        uVar11 = *(undefined8 *)(pbVar2 + -0x10);
        uVar15 = *(undefined8 *)(pbVar2 + 8);
        uVar14 = *(undefined8 *)pbVar2;
        pbVar2 = pbVar2 + 0x20;
        puVar9[-1] = CONCAT17((byte)((ulong)uVar12 >> 0x38) ^ (byte)((ulong)uVar13 >> 0x38),
                              CONCAT16((byte)((ulong)uVar12 >> 0x30) ^ (byte)((ulong)uVar13 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar12 >> 0x28) ^
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
        puVar9[-2] = CONCAT17((byte)((ulong)uVar10 >> 0x38) ^ (byte)((ulong)uVar11 >> 0x38),
                              CONCAT16((byte)((ulong)uVar10 >> 0x30) ^ (byte)((ulong)uVar11 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar10 >> 0x28) ^
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
        puVar9[1] = CONCAT17((byte)((ulong)uVar17 >> 0x38) ^ (byte)((ulong)uVar15 >> 0x38),
                             CONCAT16((byte)((ulong)uVar17 >> 0x30) ^ (byte)((ulong)uVar15 >> 0x30),
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
        *puVar9 = CONCAT17((byte)((ulong)uVar16 >> 0x38) ^ (byte)((ulong)uVar14 >> 0x38),
                           CONCAT16((byte)((ulong)uVar16 >> 0x30) ^ (byte)((ulong)uVar14 >> 0x30),
                                    CONCAT15((byte)((ulong)uVar16 >> 0x28) ^
                                             (byte)((ulong)uVar14 >> 0x28),
                                             CONCAT14((byte)((ulong)uVar16 >> 0x20) ^
                                                      (byte)((ulong)uVar14 >> 0x20),
                                                      CONCAT13((byte)((ulong)uVar16 >> 0x18) ^
                                                               (byte)((ulong)uVar14 >> 0x18),
                                                               CONCAT12((byte)((ulong)uVar16 >> 0x10
                                                                              ) ^ (byte)((ulong)
                                                  uVar14 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar16 >> 8) ^
                                                           (byte)((ulong)uVar14 >> 8),
                                                           (byte)uVar16 ^ (byte)uVar14)))))));
        puVar9 = puVar9 + 4;
      } while (uVar6 != 0);
      if (param_3 == uVar4) goto LAB_003d8d9c;
      uVar6 = uVar4;
      if ((param_3 & 0x18) == 0) goto LAB_003d8d70;
    }
    uVar4 = param_3 & 0xfffffffffffffff8;
    lVar5 = uVar6 - uVar4;
    pbVar2 = param_2 + uVar6 + uVar3;
    puVar9 = (undefined8 *)(uVar6 + param_1 + 0x40);
    do {
      uVar10 = *(undefined8 *)pbVar2;
      uVar12 = *puVar9;
      lVar5 = lVar5 + 8;
      *puVar9 = CONCAT17((byte)((ulong)uVar12 >> 0x38) ^ (byte)((ulong)uVar10 >> 0x38),
                         CONCAT16((byte)((ulong)uVar12 >> 0x30) ^ (byte)((ulong)uVar10 >> 0x30),
                                  CONCAT15((byte)((ulong)uVar12 >> 0x28) ^
                                           (byte)((ulong)uVar10 >> 0x28),
                                           CONCAT14((byte)((ulong)uVar12 >> 0x20) ^
                                                    (byte)((ulong)uVar10 >> 0x20),
                                                    CONCAT13((byte)((ulong)uVar12 >> 0x18) ^
                                                             (byte)((ulong)uVar10 >> 0x18),
                                                             CONCAT12((byte)((ulong)uVar12 >> 0x10)
                                                                      ^ (byte)((ulong)uVar10 >> 0x10
                                                                              ),
                                                                      CONCAT11((byte)((ulong)uVar12
                                                                                     >> 8) ^
                                                                               (byte)((ulong)uVar10
                                                                                     >> 8),
                                                                               (byte)uVar12 ^
                                                                               (byte)uVar10)))))));
      pbVar2 = pbVar2 + 8;
      puVar9 = puVar9 + 1;
    } while (lVar5 != 0);
    if (param_3 == uVar4) goto LAB_003d8d9c;
  }
LAB_003d8d70:
  lVar5 = param_3 - uVar4;
  pbVar2 = (byte *)(uVar4 + param_1 + 0x40);
  pbVar8 = param_2 + uVar4 + uVar3;
  do {
    lVar5 = lVar5 + -1;
    *pbVar2 = *pbVar2 ^ *pbVar8;
    pbVar2 = pbVar2 + 1;
    pbVar8 = pbVar8 + 1;
  } while (lVar5 != 0);
LAB_003d8d9c:
  *(int *)(param_1 + 0x17c) = (int)param_3;
  return 0;
}


// ===== 003d8e4c  FUN_003d8e4c =====

undefined8 FUN_003d8e4c(long param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  ulong *puVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  undefined8 *puVar10;
  ulong *puVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined8 uVar24;
  
  uVar14 = *(ulong *)(param_1 + 0x38) + param_4;
  if (0xfffffffe0 < uVar14) {
    return 0xffffffff;
  }
  if (CARRY8(*(ulong *)(param_1 + 0x38),param_4)) {
    return 0xffffffff;
  }
  pcVar3 = *(code **)(param_1 + 0x180);
  uVar18 = *(undefined8 *)(param_1 + 0x188);
  *(ulong *)(param_1 + 0x38) = uVar14;
  if (*(int *)(param_1 + 0x17c) == 0) {
    uVar13 = *(uint *)(param_1 + 0x178);
    uVar14 = (ulong)uVar13;
    uVar15 = *(uint *)(param_1 + 0xc);
    uVar5 = uVar13 & 0xf;
    if ((uVar13 & 0xf) == 0) goto LAB_003d8f38;
    if (param_4 == 0) {
LAB_003d8f1c:
      *(uint *)(param_1 + 0x178) = uVar13;
      return 0;
    }
    uVar7 = param_4;
    puVar9 = param_3;
    puVar11 = param_2;
    do {
      param_2 = (ulong *)((long)puVar11 + 1);
      bVar2 = *(byte *)(param_1 + 0x10 + (ulong)uVar5) ^ (byte)*puVar11;
      uVar5 = uVar5 + 1 & 0xf;
      param_4 = uVar7 - 1;
      param_3 = (ulong *)((long)puVar9 + 1);
      *(byte *)puVar9 = bVar2;
      *(byte *)(param_1 + 400 + uVar14) = bVar2;
      uVar13 = (int)uVar14 + 1;
      uVar14 = (ulong)uVar13;
      if (uVar5 == 0) break;
      bVar4 = uVar7 != 1;
      uVar7 = param_4;
      puVar9 = param_3;
      puVar11 = param_2;
    } while (bVar4);
    if (uVar5 != 0) goto LAB_003d8f1c;
LAB_003d8f44:
    (**(code **)(param_1 + 0x168))(param_1 + 0x40,param_1 + 0x60,param_1 + 400,uVar14);
    uVar14 = 0;
  }
  else {
    if (param_4 == 0) {
      (**(code **)(param_1 + 0x170))(param_1 + 0x40,param_1 + 0x60);
      *(undefined4 *)(param_1 + 0x17c) = 0;
      return 0;
    }
    uVar19 = *(undefined8 *)(param_1 + 0x48);
    uVar17 = *(undefined8 *)(param_1 + 0x40);
    uVar14 = 0x10;
    *(undefined4 *)(param_1 + 0x17c) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x198) = uVar19;
    *(undefined8 *)(param_1 + 400) = uVar17;
    uVar15 = *(uint *)(param_1 + 0xc);
LAB_003d8f38:
    if ((0xf < param_4) && ((int)uVar14 != 0)) goto LAB_003d8f44;
  }
  uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
  uVar15 = uVar15 >> 0x10 | uVar15 << 0x10;
  for (; 0xbff < param_4; param_4 = param_4 - 0xc00) {
    lVar16 = 0;
    do {
      puVar9 = (ulong *)((long)param_2 + lVar16);
      puVar11 = (ulong *)((long)param_3 + lVar16);
      (*pcVar3)(param_1,param_1 + 0x10,uVar18);
      uVar15 = uVar15 + 1;
      lVar16 = lVar16 + 0x10;
      uVar13 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
      *(uint *)(param_1 + 0xc) = uVar13 >> 0x10 | uVar13 << 0x10;
      *puVar11 = *(ulong *)(param_1 + 0x10) ^ *puVar9;
      puVar11[1] = *(ulong *)(param_1 + 0x18) ^ puVar9[1];
    } while (lVar16 != 0xc00);
    (**(code **)(param_1 + 0x168))(param_1 + 0x40,param_1 + 0x60,param_3,0xc00);
    param_2 = param_2 + 0x180;
    param_3 = param_3 + 0x180;
  }
  uVar13 = (uint)uVar14;
  uVar7 = param_4 & 0xff0;
  if (uVar7 != 0) {
    do {
      (*pcVar3)(param_1,param_1 + 0x10,uVar18);
      uVar15 = uVar15 + 1;
      param_4 = param_4 - 0x10;
      uVar5 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
      *(uint *)(param_1 + 0xc) = uVar5 >> 0x10 | uVar5 << 0x10;
      *param_3 = *(ulong *)(param_1 + 0x10) ^ *param_2;
      puVar9 = param_2 + 1;
      param_2 = param_2 + 2;
      param_3[1] = *(ulong *)(param_1 + 0x18) ^ *puVar9;
      param_3 = param_3 + 2;
    } while (0xf < param_4);
    (**(code **)(param_1 + 0x168))(param_1 + 0x40,param_1 + 0x60,(long)param_3 - uVar7,uVar7);
  }
  if (param_4 != 0) {
    (*pcVar3)(param_1,param_1 + 0x10,uVar18);
    uVar15 = (uVar15 + 1 & 0xff00ff00) >> 8 | (uVar15 + 1 & 0xff00ff) << 8;
    *(uint *)(param_1 + 0xc) = uVar15 >> 0x10 | uVar15 << 0x10;
    if ((((param_4 < 0x20) || (CARRY4(uVar13,(uint)(param_4 - 1)))) || (param_4 - 1 >> 0x20 != 0))
       || ((((byte *)((long)param_3 + (-0x10 - param_1)) < (byte *)0x20 ||
            (lVar16 = param_1 + uVar14 + 400, (ulong)(lVar16 - (long)param_3) < 0x20)) ||
           (((ulong)((long)param_3 - (long)param_2) < 0x20 ||
            ((ulong)(lVar16 - (long)param_2) < 0x20)))))) {
      uVar6 = 0;
      uVar7 = param_4;
      uVar8 = uVar14;
    }
    else {
      uVar6 = param_4 & 0x1ffffffe0;
      uVar7 = param_4 & 0x1f;
      puVar9 = param_2 + 2;
      uVar13 = uVar13 + (int)uVar6;
      uVar8 = (ulong)uVar13;
      puVar10 = (undefined8 *)(param_1 + 0x20);
      puVar11 = param_3 + 2;
      uVar12 = uVar6;
      do {
        uVar17 = puVar10[-1];
        uVar18 = puVar10[-2];
        uVar24 = puVar10[1];
        uVar19 = *puVar10;
        puVar1 = (ulong *)(param_1 + 400 + uVar14);
        uVar21 = puVar9[-1];
        uVar20 = puVar9[-2];
        uVar23 = puVar9[1];
        uVar22 = *puVar9;
        puVar9 = puVar9 + 4;
        uVar12 = uVar12 - 0x20;
        uVar14 = (ulong)((int)uVar14 + 0x20);
        puVar10 = puVar10 + 4;
        uVar20 = CONCAT17((byte)((ulong)uVar18 >> 0x38) ^ (byte)(uVar20 >> 0x38),
                          CONCAT16((byte)((ulong)uVar18 >> 0x30) ^ (byte)(uVar20 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar18 >> 0x28) ^ (byte)(uVar20 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar18 >> 0x20) ^
                                                     (byte)(uVar20 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar18 >> 0x18) ^
                                                              (byte)(uVar20 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar18 >> 0x10)
                                                                       ^ (byte)(uVar20 >> 0x10),
                                                                       CONCAT11((byte)((ulong)uVar18
                                                                                      >> 8) ^
                                                                                (byte)(uVar20 >> 8),
                                                                                (byte)uVar18 ^
                                                                                (byte)uVar20)))))));
        uVar21 = CONCAT17((byte)((ulong)uVar17 >> 0x38) ^ (byte)(uVar21 >> 0x38),
                          CONCAT16((byte)((ulong)uVar17 >> 0x30) ^ (byte)(uVar21 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar17 >> 0x28) ^ (byte)(uVar21 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar17 >> 0x20) ^
                                                     (byte)(uVar21 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar17 >> 0x18) ^
                                                              (byte)(uVar21 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar17 >> 0x10)
                                                                       ^ (byte)(uVar21 >> 0x10),
                                                                       CONCAT11((byte)((ulong)uVar17
                                                                                      >> 8) ^
                                                                                (byte)(uVar21 >> 8),
                                                                                (byte)uVar17 ^
                                                                                (byte)uVar21)))))));
        uVar22 = CONCAT17((byte)((ulong)uVar19 >> 0x38) ^ (byte)(uVar22 >> 0x38),
                          CONCAT16((byte)((ulong)uVar19 >> 0x30) ^ (byte)(uVar22 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar19 >> 0x28) ^ (byte)(uVar22 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar19 >> 0x20) ^
                                                     (byte)(uVar22 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar19 >> 0x18) ^
                                                              (byte)(uVar22 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar19 >> 0x10)
                                                                       ^ (byte)(uVar22 >> 0x10),
                                                                       CONCAT11((byte)((ulong)uVar19
                                                                                      >> 8) ^
                                                                                (byte)(uVar22 >> 8),
                                                                                (byte)uVar19 ^
                                                                                (byte)uVar22)))))));
        uVar23 = CONCAT17((byte)((ulong)uVar24 >> 0x38) ^ (byte)(uVar23 >> 0x38),
                          CONCAT16((byte)((ulong)uVar24 >> 0x30) ^ (byte)(uVar23 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar24 >> 0x28) ^ (byte)(uVar23 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar24 >> 0x20) ^
                                                     (byte)(uVar23 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar24 >> 0x18) ^
                                                              (byte)(uVar23 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar24 >> 0x10)
                                                                       ^ (byte)(uVar23 >> 0x10),
                                                                       CONCAT11((byte)((ulong)uVar24
                                                                                      >> 8) ^
                                                                                (byte)(uVar23 >> 8),
                                                                                (byte)uVar24 ^
                                                                                (byte)uVar23)))))));
        puVar11[-1] = uVar21;
        puVar11[-2] = uVar20;
        puVar11[1] = uVar23;
        *puVar11 = uVar22;
        puVar11 = puVar11 + 4;
        puVar1[1] = uVar21;
        *puVar1 = uVar20;
        puVar1[3] = uVar23;
        puVar1[2] = uVar22;
      } while (uVar12 != 0);
      if (param_4 == uVar6) goto LAB_003d90f0;
    }
    do {
      uVar13 = (int)uVar8 + 1;
      uVar7 = uVar7 - 1;
      bVar2 = *(byte *)(param_1 + 0x10 + (uVar6 & 0xffffffff)) ^
              *(byte *)((long)param_2 + (uVar6 & 0xffffffff));
      *(byte *)((long)param_3 + (uVar6 & 0xffffffff)) = bVar2;
      uVar6 = (ulong)((int)uVar6 + 1);
      *(byte *)(param_1 + 400 + uVar8) = bVar2;
      uVar8 = (ulong)uVar13;
    } while (uVar7 != 0);
  }
LAB_003d90f0:
  *(uint *)(param_1 + 0x178) = uVar13;
  return 0;
}


// ===== 003d91cc  FUN_003d91cc =====

undefined8 FUN_003d91cc(long param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  ulong *puVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  undefined8 *puVar10;
  ulong *puVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined8 uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  uVar14 = *(ulong *)(param_1 + 0x38) + param_4;
  if (0xfffffffe0 < uVar14) {
    return 0xffffffff;
  }
  if (CARRY8(*(ulong *)(param_1 + 0x38),param_4)) {
    return 0xffffffff;
  }
  pcVar2 = *(code **)(param_1 + 0x180);
  uVar23 = *(undefined8 *)(param_1 + 0x188);
  *(ulong *)(param_1 + 0x38) = uVar14;
  if (*(int *)(param_1 + 0x17c) == 0) {
    uVar13 = *(uint *)(param_1 + 0x178);
    uVar14 = (ulong)uVar13;
    uVar15 = *(uint *)(param_1 + 0xc);
    uVar5 = uVar13 & 0xf;
    if ((uVar13 & 0xf) == 0) goto LAB_003d92b8;
    if (param_4 == 0) {
LAB_003d929c:
      *(uint *)(param_1 + 0x178) = uVar13;
      return 0;
    }
    uVar7 = param_4;
    puVar9 = param_3;
    puVar11 = param_2;
    do {
      param_2 = (ulong *)((long)puVar11 + 1);
      uVar8 = *puVar11;
      bVar3 = *(byte *)(param_1 + 0x10 + (ulong)uVar5);
      *(byte *)(param_1 + 400 + uVar14) = (byte)uVar8;
      uVar13 = (int)uVar14 + 1;
      uVar14 = (ulong)uVar13;
      uVar5 = uVar5 + 1 & 0xf;
      param_4 = uVar7 - 1;
      param_3 = (ulong *)((long)puVar9 + 1);
      *(byte *)puVar9 = bVar3 ^ (byte)uVar8;
      if (uVar5 == 0) break;
      bVar4 = uVar7 != 1;
      uVar7 = param_4;
      puVar9 = param_3;
      puVar11 = param_2;
    } while (bVar4);
    if (uVar5 != 0) goto LAB_003d929c;
LAB_003d92c4:
    (**(code **)(param_1 + 0x168))(param_1 + 0x40,param_1 + 0x60,param_1 + 400,uVar14);
    uVar14 = 0;
  }
  else {
    if (param_4 == 0) {
      (**(code **)(param_1 + 0x170))(param_1 + 0x40,param_1 + 0x60);
      *(undefined4 *)(param_1 + 0x17c) = 0;
      return 0;
    }
    uVar19 = *(undefined8 *)(param_1 + 0x48);
    uVar17 = *(undefined8 *)(param_1 + 0x40);
    uVar14 = 0x10;
    *(undefined4 *)(param_1 + 0x17c) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x198) = uVar19;
    *(undefined8 *)(param_1 + 400) = uVar17;
    uVar15 = *(uint *)(param_1 + 0xc);
LAB_003d92b8:
    if ((0xf < param_4) && ((int)uVar14 != 0)) goto LAB_003d92c4;
  }
  uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
  uVar15 = uVar15 >> 0x10 | uVar15 << 0x10;
  for (; 0xbff < param_4; param_4 = param_4 - 0xc00) {
    (**(code **)(param_1 + 0x168))(param_1 + 0x40,param_1 + 0x60,param_2,0xc00);
    lVar16 = 0;
    do {
      puVar9 = (ulong *)((long)param_2 + lVar16);
      puVar11 = (ulong *)((long)param_3 + lVar16);
      (*pcVar2)(param_1,param_1 + 0x10,uVar23);
      uVar15 = uVar15 + 1;
      lVar16 = lVar16 + 0x10;
      uVar13 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
      *(uint *)(param_1 + 0xc) = uVar13 >> 0x10 | uVar13 << 0x10;
      *puVar11 = *(ulong *)(param_1 + 0x10) ^ *puVar9;
      puVar11[1] = *(ulong *)(param_1 + 0x18) ^ puVar9[1];
    } while (lVar16 != 0xc00);
    param_2 = param_2 + 0x180;
    param_3 = param_3 + 0x180;
  }
  uVar13 = (uint)uVar14;
  if ((param_4 & 0xff0) != 0) {
    (**(code **)(param_1 + 0x168))(param_1 + 0x40,param_1 + 0x60,param_2,param_4 & 0xff0);
    do {
      (*pcVar2)(param_1,param_1 + 0x10,uVar23);
      uVar15 = uVar15 + 1;
      param_4 = param_4 - 0x10;
      uVar5 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
      *(uint *)(param_1 + 0xc) = uVar5 >> 0x10 | uVar5 << 0x10;
      *param_3 = *(ulong *)(param_1 + 0x10) ^ *param_2;
      puVar9 = param_2 + 1;
      param_2 = param_2 + 2;
      param_3[1] = *(ulong *)(param_1 + 0x18) ^ *puVar9;
      param_3 = param_3 + 2;
    } while (0xf < param_4);
  }
  if (param_4 != 0) {
    (*pcVar2)(param_1,param_1 + 0x10,uVar23);
    uVar15 = (uVar15 + 1 & 0xff00ff00) >> 8 | (uVar15 + 1 & 0xff00ff) << 8;
    *(uint *)(param_1 + 0xc) = uVar15 >> 0x10 | uVar15 << 0x10;
    if ((((param_4 < 0x20) || (CARRY4(uVar13,(uint)(param_4 - 1)))) || (param_4 - 1 >> 0x20 != 0))
       || ((((byte *)((long)param_3 + (-0x10 - param_1)) < (byte *)0x20 ||
            ((byte *)((long)param_3 + (-400 - (param_1 + uVar14))) < (byte *)0x20)) ||
           ((((param_1 + uVar14) - (long)param_2) + 400 < 0x20 ||
            ((ulong)((long)param_3 - (long)param_2) < 0x20)))))) {
      uVar6 = 0;
      uVar7 = param_4;
      uVar8 = uVar14;
    }
    else {
      uVar6 = param_4 & 0x1ffffffe0;
      uVar7 = param_4 & 0x1f;
      puVar9 = param_2 + 2;
      uVar13 = uVar13 + (int)uVar6;
      uVar8 = (ulong)uVar13;
      puVar10 = (undefined8 *)(param_1 + 0x20);
      puVar11 = param_3 + 2;
      uVar12 = uVar6;
      do {
        uVar20 = puVar9[-1];
        uVar18 = puVar9[-2];
        uVar22 = puVar9[1];
        uVar21 = *puVar9;
        puVar1 = (ulong *)(param_1 + 400 + uVar14);
        puVar9 = puVar9 + 4;
        uVar12 = uVar12 - 0x20;
        uVar14 = (ulong)((int)uVar14 + 0x20);
        puVar1[1] = uVar20;
        *puVar1 = uVar18;
        puVar1[3] = uVar22;
        puVar1[2] = uVar21;
        uVar17 = puVar10[-1];
        uVar23 = puVar10[-2];
        uVar24 = puVar10[1];
        uVar19 = *puVar10;
        puVar10 = puVar10 + 4;
        puVar11[-1] = CONCAT17((byte)((ulong)uVar17 >> 0x38) ^ (byte)(uVar20 >> 0x38),
                               CONCAT16((byte)((ulong)uVar17 >> 0x30) ^ (byte)(uVar20 >> 0x30),
                                        CONCAT15((byte)((ulong)uVar17 >> 0x28) ^
                                                 (byte)(uVar20 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar17 >> 0x20) ^
                                                          (byte)(uVar20 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar17 >> 0x18) ^
                                                                   (byte)(uVar20 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar17 >>
                                                                                  0x10) ^
                                                                            (byte)(uVar20 >> 0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar17 >> 8) ^ (byte)(uVar20 >> 8),
                                                  (byte)uVar17 ^ (byte)uVar20)))))));
        puVar11[-2] = CONCAT17((byte)((ulong)uVar23 >> 0x38) ^ (byte)(uVar18 >> 0x38),
                               CONCAT16((byte)((ulong)uVar23 >> 0x30) ^ (byte)(uVar18 >> 0x30),
                                        CONCAT15((byte)((ulong)uVar23 >> 0x28) ^
                                                 (byte)(uVar18 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar23 >> 0x20) ^
                                                          (byte)(uVar18 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar23 >> 0x18) ^
                                                                   (byte)(uVar18 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar23 >>
                                                                                  0x10) ^
                                                                            (byte)(uVar18 >> 0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar23 >> 8) ^ (byte)(uVar18 >> 8),
                                                  (byte)uVar23 ^ (byte)uVar18)))))));
        puVar11[1] = CONCAT17((byte)((ulong)uVar24 >> 0x38) ^ (byte)(uVar22 >> 0x38),
                              CONCAT16((byte)((ulong)uVar24 >> 0x30) ^ (byte)(uVar22 >> 0x30),
                                       CONCAT15((byte)((ulong)uVar24 >> 0x28) ^
                                                (byte)(uVar22 >> 0x28),
                                                CONCAT14((byte)((ulong)uVar24 >> 0x20) ^
                                                         (byte)(uVar22 >> 0x20),
                                                         CONCAT13((byte)((ulong)uVar24 >> 0x18) ^
                                                                  (byte)(uVar22 >> 0x18),
                                                                  CONCAT12((byte)((ulong)uVar24 >>
                                                                                 0x10) ^
                                                                           (byte)(uVar22 >> 0x10),
                                                                           CONCAT11((byte)((ulong)
                                                  uVar24 >> 8) ^ (byte)(uVar22 >> 8),
                                                  (byte)uVar24 ^ (byte)uVar22)))))));
        *puVar11 = CONCAT17((byte)((ulong)uVar19 >> 0x38) ^ (byte)(uVar21 >> 0x38),
                            CONCAT16((byte)((ulong)uVar19 >> 0x30) ^ (byte)(uVar21 >> 0x30),
                                     CONCAT15((byte)((ulong)uVar19 >> 0x28) ^ (byte)(uVar21 >> 0x28)
                                              ,CONCAT14((byte)((ulong)uVar19 >> 0x20) ^
                                                        (byte)(uVar21 >> 0x20),
                                                        CONCAT13((byte)((ulong)uVar19 >> 0x18) ^
                                                                 (byte)(uVar21 >> 0x18),
                                                                 CONCAT12((byte)((ulong)uVar19 >>
                                                                                0x10) ^
                                                                          (byte)(uVar21 >> 0x10),
                                                                          CONCAT11((byte)((ulong)
                                                  uVar19 >> 8) ^ (byte)(uVar21 >> 8),
                                                  (byte)uVar19 ^ (byte)uVar21)))))));
        puVar11 = puVar11 + 4;
      } while (uVar12 != 0);
      if (param_4 == uVar6) goto LAB_003d946c;
    }
    do {
      bVar3 = *(byte *)((long)param_2 + (uVar6 & 0xffffffff));
      uVar13 = (int)uVar8 + 1;
      uVar7 = uVar7 - 1;
      *(byte *)(param_1 + 400 + uVar8) = bVar3;
      *(byte *)((long)param_3 + (uVar6 & 0xffffffff)) =
           *(byte *)(param_1 + 0x10 + (uVar6 & 0xffffffff)) ^ bVar3;
      uVar6 = (ulong)((int)uVar6 + 1);
      uVar8 = (ulong)uVar13;
    } while (uVar7 != 0);
  }
LAB_003d946c:
  *(uint *)(param_1 + 0x178) = uVar13;
  return 0;
}


// ===== 003d954c  FUN_003d954c =====

undefined8 FUN_003d954c(long param_1,byte *param_2,byte *param_3,ulong param_4,code *param_5)

{
  undefined8 *puVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined8 uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  uVar16 = *(ulong *)(param_1 + 0x38) + param_4;
  if (0xfffffffe0 < uVar16) {
    return 0xffffffff;
  }
  if (CARRY8(*(ulong *)(param_1 + 0x38),param_4)) {
    return 0xffffffff;
  }
  uVar13 = *(undefined8 *)(param_1 + 0x188);
  *(ulong *)(param_1 + 0x38) = uVar16;
  if (*(int *)(param_1 + 0x17c) == 0) {
    uVar15 = *(uint *)(param_1 + 0x178);
    uVar16 = (ulong)uVar15;
    uVar14 = *(uint *)(param_1 + 0xc);
    uVar5 = uVar15 & 0xf;
    if ((uVar15 & 0xf) == 0) goto LAB_003d9638;
    if (param_4 == 0) {
LAB_003d961c:
      *(uint *)(param_1 + 0x178) = uVar15;
      return 0;
    }
    uVar8 = param_4;
    pbVar11 = param_3;
    pbVar12 = param_2;
    do {
      param_2 = pbVar12 + 1;
      param_4 = uVar8 - 1;
      bVar3 = *(byte *)(param_1 + 0x10 + (ulong)uVar5) ^ *pbVar12;
      uVar5 = uVar5 + 1 & 0xf;
      param_3 = pbVar11 + 1;
      *pbVar11 = bVar3;
      *(byte *)(param_1 + 400 + uVar16) = bVar3;
      uVar15 = (int)uVar16 + 1;
      uVar16 = (ulong)uVar15;
      if (uVar5 == 0) break;
      bVar4 = uVar8 != 1;
      uVar8 = param_4;
      pbVar11 = param_3;
      pbVar12 = param_2;
    } while (bVar4);
    if (uVar5 != 0) goto LAB_003d961c;
LAB_003d9644:
    (**(code **)(param_1 + 0x168))(param_1 + 0x40,param_1 + 0x60,param_1 + 400,uVar16);
    uVar16 = 0;
  }
  else {
    if (param_4 == 0) {
      (**(code **)(param_1 + 0x170))(param_1 + 0x40,param_1 + 0x60);
      *(undefined4 *)(param_1 + 0x17c) = 0;
      return 0;
    }
    uVar18 = *(undefined8 *)(param_1 + 0x48);
    uVar17 = *(undefined8 *)(param_1 + 0x40);
    uVar16 = 0x10;
    *(undefined4 *)(param_1 + 0x17c) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x198) = uVar18;
    *(undefined8 *)(param_1 + 400) = uVar17;
    uVar14 = *(uint *)(param_1 + 0xc);
LAB_003d9638:
    if ((0xf < param_4) && ((int)uVar16 != 0)) goto LAB_003d9644;
  }
  uVar15 = (uint)uVar16;
  uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
  uVar14 = uVar14 >> 0x10 | uVar14 << 0x10;
  for (; 0xbff < param_4; param_4 = param_4 - 0xc00) {
    (*param_5)(param_2,param_3,0xc0,uVar13,param_1);
    uVar14 = uVar14 + 0xc0;
    uVar5 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
    *(uint *)(param_1 + 0xc) = uVar5 >> 0x10 | uVar5 << 0x10;
    (**(code **)(param_1 + 0x168))(param_1 + 0x40,param_1 + 0x60,param_3,0xc00);
    param_3 = param_3 + 0xc00;
    param_2 = param_2 + 0xc00;
  }
  uVar8 = param_4 & 0xff0;
  pbVar11 = param_3;
  pbVar12 = param_2;
  if (uVar8 != 0) {
    (*param_5)(param_2,param_3,param_4 >> 4,uVar13,param_1);
    uVar14 = uVar14 + (int)(param_4 >> 4);
    uVar5 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
    *(uint *)(param_1 + 0xc) = uVar5 >> 0x10 | uVar5 << 0x10;
    param_4 = param_4 & 0xf;
    (**(code **)(param_1 + 0x168))(param_1 + 0x40,param_1 + 0x60,param_3,uVar8);
    pbVar11 = param_3 + uVar8;
    pbVar12 = param_2 + uVar8;
  }
  if (param_4 != 0) {
    (**(code **)(param_1 + 0x180))(param_1,param_1 + 0x10,uVar13);
    uVar14 = (uVar14 + 1 & 0xff00ff00) >> 8 | (uVar14 + 1 & 0xff00ff) << 8;
    *(uint *)(param_1 + 0xc) = uVar14 >> 0x10 | uVar14 << 0x10;
    if ((((param_4 < 0x20) || (CARRY4(uVar15,(uint)(param_4 - 1)))) || (param_4 - 1 >> 0x20 != 0))
       || (((param_3 + uVar8 + (-0x10 - param_1) < (byte *)0x20 ||
            (lVar2 = param_1 + uVar16 + 400, (ulong)(lVar2 - (long)(param_3 + uVar8)) < 0x20)) ||
           (((ulong)((long)param_3 - (long)param_2) < 0x20 ||
            ((ulong)(lVar2 - (long)(param_2 + uVar8)) < 0x20)))))) {
      uVar6 = 0;
      uVar9 = param_4;
      uVar7 = uVar16;
    }
    else {
      uVar6 = param_4 & 0x1ffffffe0;
      uVar9 = param_4 & 0x1f;
      uVar15 = uVar15 + (int)uVar6;
      uVar7 = (ulong)uVar15;
      param_2 = param_2 + uVar8 + 0x10;
      puVar10 = (undefined8 *)(param_1 + 0x20);
      param_3 = param_3 + uVar8 + 0x10;
      uVar8 = uVar6;
      do {
        uVar17 = puVar10[-1];
        uVar13 = puVar10[-2];
        uVar23 = puVar10[1];
        uVar22 = *puVar10;
        puVar1 = (undefined8 *)(param_1 + 400 + uVar16);
        uVar19 = *(undefined8 *)(param_2 + -8);
        uVar18 = *(undefined8 *)(param_2 + -0x10);
        uVar21 = *(undefined8 *)(param_2 + 8);
        uVar20 = *(undefined8 *)param_2;
        param_2 = param_2 + 0x20;
        uVar8 = uVar8 - 0x20;
        uVar16 = (ulong)((int)uVar16 + 0x20);
        puVar10 = puVar10 + 4;
        uVar13 = CONCAT17((byte)((ulong)uVar13 >> 0x38) ^ (byte)((ulong)uVar18 >> 0x38),
                          CONCAT16((byte)((ulong)uVar13 >> 0x30) ^ (byte)((ulong)uVar18 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar13 >> 0x28) ^
                                            (byte)((ulong)uVar18 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar13 >> 0x20) ^
                                                     (byte)((ulong)uVar18 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar13 >> 0x18) ^
                                                              (byte)((ulong)uVar18 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar13 >> 0x10)
                                                                       ^ (byte)((ulong)uVar18 >>
                                                                               0x10),
                                                                       CONCAT11((byte)((ulong)uVar13
                                                                                      >> 8) ^
                                                                                (byte)((ulong)uVar18
                                                                                      >> 8),
                                                                                (byte)uVar13 ^
                                                                                (byte)uVar18)))))));
        uVar17 = CONCAT17((byte)((ulong)uVar17 >> 0x38) ^ (byte)((ulong)uVar19 >> 0x38),
                          CONCAT16((byte)((ulong)uVar17 >> 0x30) ^ (byte)((ulong)uVar19 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar17 >> 0x28) ^
                                            (byte)((ulong)uVar19 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar17 >> 0x20) ^
                                                     (byte)((ulong)uVar19 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar17 >> 0x18) ^
                                                              (byte)((ulong)uVar19 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar17 >> 0x10)
                                                                       ^ (byte)((ulong)uVar19 >>
                                                                               0x10),
                                                                       CONCAT11((byte)((ulong)uVar17
                                                                                      >> 8) ^
                                                                                (byte)((ulong)uVar19
                                                                                      >> 8),
                                                                                (byte)uVar17 ^
                                                                                (byte)uVar19)))))));
        uVar18 = CONCAT17((byte)((ulong)uVar22 >> 0x38) ^ (byte)((ulong)uVar20 >> 0x38),
                          CONCAT16((byte)((ulong)uVar22 >> 0x30) ^ (byte)((ulong)uVar20 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar22 >> 0x28) ^
                                            (byte)((ulong)uVar20 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar22 >> 0x20) ^
                                                     (byte)((ulong)uVar20 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar22 >> 0x18) ^
                                                              (byte)((ulong)uVar20 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar22 >> 0x10)
                                                                       ^ (byte)((ulong)uVar20 >>
                                                                               0x10),
                                                                       CONCAT11((byte)((ulong)uVar22
                                                                                      >> 8) ^
                                                                                (byte)((ulong)uVar20
                                                                                      >> 8),
                                                                                (byte)uVar22 ^
                                                                                (byte)uVar20)))))));
        uVar19 = CONCAT17((byte)((ulong)uVar23 >> 0x38) ^ (byte)((ulong)uVar21 >> 0x38),
                          CONCAT16((byte)((ulong)uVar23 >> 0x30) ^ (byte)((ulong)uVar21 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar23 >> 0x28) ^
                                            (byte)((ulong)uVar21 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar23 >> 0x20) ^
                                                     (byte)((ulong)uVar21 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar23 >> 0x18) ^
                                                              (byte)((ulong)uVar21 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar23 >> 0x10)
                                                                       ^ (byte)((ulong)uVar21 >>
                                                                               0x10),
                                                                       CONCAT11((byte)((ulong)uVar23
                                                                                      >> 8) ^
                                                                                (byte)((ulong)uVar21
                                                                                      >> 8),
                                                                                (byte)uVar23 ^
                                                                                (byte)uVar21)))))));
        *(undefined8 *)(param_3 + -8) = uVar17;
        *(undefined8 *)(param_3 + -0x10) = uVar13;
        *(undefined8 *)(param_3 + 8) = uVar19;
        *(undefined8 *)param_3 = uVar18;
        param_3 = param_3 + 0x20;
        puVar1[1] = uVar17;
        *puVar1 = uVar13;
        puVar1[3] = uVar19;
        puVar1[2] = uVar18;
      } while (uVar8 != 0);
      if (param_4 == uVar6) goto LAB_003d97b0;
    }
    do {
      uVar15 = (int)uVar7 + 1;
      uVar9 = uVar9 - 1;
      bVar3 = *(byte *)(param_1 + 0x10 + (uVar6 & 0xffffffff)) ^ pbVar12[uVar6 & 0xffffffff];
      pbVar11[uVar6 & 0xffffffff] = bVar3;
      uVar6 = (ulong)((int)uVar6 + 1);
      *(byte *)(param_1 + 400 + uVar7) = bVar3;
      uVar7 = (ulong)uVar15;
    } while (uVar9 != 0);
  }
LAB_003d97b0:
  *(uint *)(param_1 + 0x178) = uVar15;
  return 0;
}


// ===== 003d98a0  FUN_003d98a0 =====

undefined8 FUN_003d98a0(long param_1,byte *param_2,byte *param_3,ulong param_4,code *param_5)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined8 uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  uVar16 = *(ulong *)(param_1 + 0x38) + param_4;
  if (0xfffffffe0 < uVar16) {
    return 0xffffffff;
  }
  if (CARRY8(*(ulong *)(param_1 + 0x38),param_4)) {
    return 0xffffffff;
  }
  uVar13 = *(undefined8 *)(param_1 + 0x188);
  *(ulong *)(param_1 + 0x38) = uVar16;
  if (*(int *)(param_1 + 0x17c) == 0) {
    uVar15 = *(uint *)(param_1 + 0x178);
    uVar16 = (ulong)uVar15;
    uVar14 = *(uint *)(param_1 + 0xc);
    uVar5 = uVar15 & 0xf;
    if ((uVar15 & 0xf) == 0) goto LAB_003d998c;
    if (param_4 == 0) {
LAB_003d9970:
      *(uint *)(param_1 + 0x178) = uVar15;
      return 0;
    }
    uVar8 = param_4;
    pbVar11 = param_3;
    pbVar12 = param_2;
    do {
      param_2 = pbVar12 + 1;
      bVar2 = *pbVar12;
      bVar3 = *(byte *)(param_1 + 0x10 + (ulong)uVar5);
      *(byte *)(param_1 + 400 + uVar16) = bVar2;
      uVar15 = (int)uVar16 + 1;
      uVar16 = (ulong)uVar15;
      uVar5 = uVar5 + 1 & 0xf;
      param_4 = uVar8 - 1;
      param_3 = pbVar11 + 1;
      *pbVar11 = bVar3 ^ bVar2;
      if (uVar5 == 0) break;
      bVar4 = uVar8 != 1;
      uVar8 = param_4;
      pbVar11 = param_3;
      pbVar12 = param_2;
    } while (bVar4);
    if (uVar5 != 0) goto LAB_003d9970;
LAB_003d9998:
    (**(code **)(param_1 + 0x168))(param_1 + 0x40,param_1 + 0x60,param_1 + 400,uVar16);
    uVar16 = 0;
  }
  else {
    if (param_4 == 0) {
      (**(code **)(param_1 + 0x170))(param_1 + 0x40,param_1 + 0x60);
      *(undefined4 *)(param_1 + 0x17c) = 0;
      return 0;
    }
    uVar18 = *(undefined8 *)(param_1 + 0x48);
    uVar17 = *(undefined8 *)(param_1 + 0x40);
    uVar16 = 0x10;
    *(undefined4 *)(param_1 + 0x17c) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x198) = uVar18;
    *(undefined8 *)(param_1 + 400) = uVar17;
    uVar14 = *(uint *)(param_1 + 0xc);
LAB_003d998c:
    if ((0xf < param_4) && ((int)uVar16 != 0)) goto LAB_003d9998;
  }
  uVar15 = (uint)uVar16;
  uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
  uVar14 = uVar14 >> 0x10 | uVar14 << 0x10;
  for (; 0xbff < param_4; param_4 = param_4 - 0xc00) {
    (**(code **)(param_1 + 0x168))(param_1 + 0x40,param_1 + 0x60,param_2,0xc00);
    (*param_5)(param_2,param_3,0xc0,uVar13,param_1);
    uVar14 = uVar14 + 0xc0;
    param_3 = param_3 + 0xc00;
    uVar5 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
    param_2 = param_2 + 0xc00;
    *(uint *)(param_1 + 0xc) = uVar5 >> 0x10 | uVar5 << 0x10;
  }
  uVar8 = param_4 & 0xff0;
  pbVar11 = param_3;
  pbVar12 = param_2;
  if (uVar8 != 0) {
    (**(code **)(param_1 + 0x168))(param_1 + 0x40,param_1 + 0x60,param_2,uVar8);
    (*param_5)(param_2,param_3,param_4 >> 4,uVar13,param_1);
    uVar14 = uVar14 + (int)(param_4 >> 4);
    uVar5 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
    param_4 = param_4 & 0xf;
    *(uint *)(param_1 + 0xc) = uVar5 >> 0x10 | uVar5 << 0x10;
    pbVar11 = param_3 + uVar8;
    pbVar12 = param_2 + uVar8;
  }
  if (param_4 != 0) {
    (**(code **)(param_1 + 0x180))(param_1,param_1 + 0x10,uVar13);
    uVar14 = (uVar14 + 1 & 0xff00ff00) >> 8 | (uVar14 + 1 & 0xff00ff) << 8;
    *(uint *)(param_1 + 0xc) = uVar14 >> 0x10 | uVar14 << 0x10;
    if ((((param_4 < 0x20) || (CARRY4(uVar15,(uint)(param_4 - 1)))) || (param_4 - 1 >> 0x20 != 0))
       || (((param_3 + (uVar8 - param_1) + -0x10 < (byte *)0x20 ||
            (param_3 + (uVar8 - (param_1 + uVar16)) + -400 < (byte *)0x20)) ||
           ((((param_1 + uVar16) - (long)(param_2 + uVar8)) + 400 < 0x20 ||
            ((ulong)((long)param_3 - (long)param_2) < 0x20)))))) {
      uVar6 = 0;
      uVar9 = param_4;
      uVar7 = uVar16;
    }
    else {
      uVar6 = param_4 & 0x1ffffffe0;
      uVar9 = param_4 & 0x1f;
      puVar10 = (undefined8 *)(param_1 + 0x20);
      uVar15 = uVar15 + (int)uVar6;
      uVar7 = (ulong)uVar15;
      param_2 = param_2 + uVar8 + 0x10;
      param_3 = param_3 + uVar8 + 0x10;
      uVar8 = uVar6;
      do {
        uVar17 = *(undefined8 *)(param_2 + -8);
        uVar13 = *(undefined8 *)(param_2 + -0x10);
        uVar19 = *(undefined8 *)(param_2 + 8);
        uVar18 = *(undefined8 *)param_2;
        puVar1 = (undefined8 *)(param_1 + 400 + uVar16);
        param_2 = param_2 + 0x20;
        uVar8 = uVar8 - 0x20;
        uVar16 = (ulong)((int)uVar16 + 0x20);
        puVar1[1] = uVar17;
        *puVar1 = uVar13;
        puVar1[3] = uVar19;
        puVar1[2] = uVar18;
        uVar21 = puVar10[-1];
        uVar20 = puVar10[-2];
        uVar23 = puVar10[1];
        uVar22 = *puVar10;
        puVar10 = puVar10 + 4;
        *(ulong *)(param_3 + -8) =
             CONCAT17((byte)((ulong)uVar21 >> 0x38) ^ (byte)((ulong)uVar17 >> 0x38),
                      CONCAT16((byte)((ulong)uVar21 >> 0x30) ^ (byte)((ulong)uVar17 >> 0x30),
                               CONCAT15((byte)((ulong)uVar21 >> 0x28) ^
                                        (byte)((ulong)uVar17 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar21 >> 0x20) ^
                                                 (byte)((ulong)uVar17 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar21 >> 0x18) ^
                                                          (byte)((ulong)uVar17 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar21 >> 0x10) ^
                                                                   (byte)((ulong)uVar17 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar21 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar17 >>
                                                                                  8),(byte)uVar21 ^
                                                                                     (byte)uVar17)))
                                                ))));
        *(ulong *)(param_3 + -0x10) =
             CONCAT17((byte)((ulong)uVar20 >> 0x38) ^ (byte)((ulong)uVar13 >> 0x38),
                      CONCAT16((byte)((ulong)uVar20 >> 0x30) ^ (byte)((ulong)uVar13 >> 0x30),
                               CONCAT15((byte)((ulong)uVar20 >> 0x28) ^
                                        (byte)((ulong)uVar13 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar20 >> 0x20) ^
                                                 (byte)((ulong)uVar13 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar20 >> 0x18) ^
                                                          (byte)((ulong)uVar13 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar20 >> 0x10) ^
                                                                   (byte)((ulong)uVar13 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar20 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar13 >>
                                                                                  8),(byte)uVar20 ^
                                                                                     (byte)uVar13)))
                                                ))));
        *(ulong *)(param_3 + 8) =
             CONCAT17((byte)((ulong)uVar23 >> 0x38) ^ (byte)((ulong)uVar19 >> 0x38),
                      CONCAT16((byte)((ulong)uVar23 >> 0x30) ^ (byte)((ulong)uVar19 >> 0x30),
                               CONCAT15((byte)((ulong)uVar23 >> 0x28) ^
                                        (byte)((ulong)uVar19 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar23 >> 0x20) ^
                                                 (byte)((ulong)uVar19 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar23 >> 0x18) ^
                                                          (byte)((ulong)uVar19 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar23 >> 0x10) ^
                                                                   (byte)((ulong)uVar19 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar23 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar19 >>
                                                                                  8),(byte)uVar23 ^
                                                                                     (byte)uVar19)))
                                                ))));
        *(ulong *)param_3 =
             CONCAT17((byte)((ulong)uVar22 >> 0x38) ^ (byte)((ulong)uVar18 >> 0x38),
                      CONCAT16((byte)((ulong)uVar22 >> 0x30) ^ (byte)((ulong)uVar18 >> 0x30),
                               CONCAT15((byte)((ulong)uVar22 >> 0x28) ^
                                        (byte)((ulong)uVar18 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar22 >> 0x20) ^
                                                 (byte)((ulong)uVar18 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar22 >> 0x18) ^
                                                          (byte)((ulong)uVar18 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar22 >> 0x10) ^
                                                                   (byte)((ulong)uVar18 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar22 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar18 >>
                                                                                  8),(byte)uVar22 ^
                                                                                     (byte)uVar18)))
                                                ))));
        param_3 = param_3 + 0x20;
      } while (uVar8 != 0);
      if (param_4 == uVar6) goto LAB_003d9b04;
    }
    do {
      bVar2 = pbVar12[uVar6 & 0xffffffff];
      uVar15 = (int)uVar7 + 1;
      uVar9 = uVar9 - 1;
      *(byte *)(param_1 + 400 + uVar7) = bVar2;
      pbVar11[uVar6 & 0xffffffff] = *(byte *)(param_1 + 0x10 + (uVar6 & 0xffffffff)) ^ bVar2;
      uVar6 = (ulong)((int)uVar6 + 1);
      uVar7 = (ulong)uVar15;
    } while (uVar9 != 0);
  }
LAB_003d9b04:
  *(uint *)(param_1 + 0x178) = uVar15;
  return 0;
}


// ===== 003d9bfc  FUN_003d9bfc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_003d9bfc(long param_1,long param_2,ulong param_3)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  unkbyte9 Var5;
  unkbyte9 Var6;
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
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar43;
  ulong uVar44;
  ulong uVar45;
  ulong uVar46;
  undefined8 uVar47;
  ulong uVar48;
  code *pcVar49;
  uint uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  undefined1 uVar71;
  undefined1 uVar72;
  ulong uVar73;
  ulong uVar74;
  
  plVar1 = (long *)(param_1 + 0x30);
  lVar3 = *(long *)(param_1 + 0x38);
  uVar66 = (undefined1)((ulong)lVar3 >> 8);
  uVar67 = (undefined1)((ulong)lVar3 >> 0x10);
  uVar68 = (undefined1)((ulong)lVar3 >> 0x18);
  uVar69 = (undefined1)((ulong)lVar3 >> 0x20);
  uVar70 = (undefined1)((ulong)lVar3 >> 0x28);
  uVar71 = (undefined1)((ulong)lVar3 >> 0x30);
  uVar72 = (undefined1)((ulong)lVar3 >> 0x38);
  Var6 = *(unkbyte9 *)plVar1;
  Var5 = *(unkbyte9 *)plVar1;
  uVar2 = *(uint *)(param_1 + 0x178);
  uVar73 = *plVar1 << 3;
  uVar74 = lVar3 << 3;
  if (uVar2 == 0) {
    if (*(int *)(param_1 + 0x17c) != 0) {
      (**(code **)(param_1 + 0x170))(param_1 + 0x40,param_1 + 0x60);
    }
    uVar48 = 0;
  }
  else {
    uVar50 = uVar2 + 0xf & 0xfffffff0;
    memset((void *)(param_1 + 400 + (ulong)uVar2),0,(ulong)(uVar50 - uVar2));
    if (uVar50 == 0x30) {
      (**(code **)(param_1 + 0x168))(param_1 + 0x40,param_1 + 0x60,param_1 + 400,0x30);
      uVar50 = 0;
    }
    uVar48 = (ulong)uVar50;
  }
  bVar60 = (byte)_UNK_00200548;
  uVar10 = (ulong)_UNK_00200548 >> 8;
  uVar11 = (ulong)_UNK_00200548 >> 0x10;
  uVar12 = (ulong)_UNK_00200548 >> 0x18;
  bVar58 = (byte)_DAT_00200540;
  uVar7 = (ulong)_DAT_00200540 >> 8;
  uVar8 = (ulong)_DAT_00200540 >> 0x10;
  uVar9 = (ulong)_DAT_00200540 >> 0x18;
  auVar54[9] = uVar66;
  auVar54._0_9_ = Var5;
  auVar54[10] = uVar67;
  auVar54[0xb] = uVar68;
  auVar54[0xc] = uVar69;
  auVar54[0xd] = uVar70;
  auVar54[0xe] = uVar71;
  auVar54[0xf] = uVar72;
  auVar54 = NEON_ushl(auVar54,_DAT_002009a0,8);
  auVar55[9] = uVar66;
  auVar55._0_9_ = Var6;
  auVar55[10] = uVar67;
  auVar55[0xb] = uVar68;
  auVar55[0xc] = uVar69;
  auVar55[0xd] = uVar70;
  auVar55[0xe] = uVar71;
  auVar55[0xf] = uVar72;
  auVar55 = NEON_ushl(auVar55,_DAT_00200ac0,8);
  bVar64 = (byte)_UNK_00200698;
  uVar16 = (ulong)_UNK_00200698 >> 8;
  uVar17 = (ulong)_UNK_00200698 >> 0x10;
  uVar18 = (ulong)_UNK_00200698 >> 0x18;
  bVar62 = (byte)_DAT_00200690;
  uVar13 = (ulong)_DAT_00200690 >> 8;
  uVar14 = (ulong)_DAT_00200690 >> 0x10;
  uVar15 = (ulong)_DAT_00200690 >> 0x18;
  auVar56[8] = UNK_00200778;
  auVar56._0_8_ = _DAT_00200770;
  auVar57._8_8_ = uVar74;
  auVar57._0_8_ = uVar73;
  auVar57 = NEON_ushl(auVar57,_DAT_00200ad0,8);
  auVar56[9] = (char)_UNK_00200779;
  auVar56[10] = (char)((uint7)_UNK_00200779 >> 8);
  auVar56[0xb] = (char)((uint7)_UNK_00200779 >> 0x10);
  auVar56[0xc] = (char)((uint7)_UNK_00200779 >> 0x18);
  auVar56[0xd] = (char)((uint7)_UNK_00200779 >> 0x20);
  auVar56[0xe] = (char)((uint7)_UNK_00200779 >> 0x28);
  auVar56[0xf] = (char)((uint7)_UNK_00200779 >> 0x30);
  auVar4._8_8_ = uVar74;
  auVar4._0_8_ = uVar73;
  auVar56 = NEON_ushl(auVar4,auVar56,8);
  bVar65 = (byte)_UNK_00200288;
  uVar26 = (ulong)_UNK_00200288 >> 8;
  uVar27 = (ulong)_UNK_00200288 >> 0x10;
  uVar28 = (ulong)_UNK_00200288 >> 0x18;
  uVar29 = (ulong)_UNK_00200288 >> 0x20;
  uVar30 = (ulong)_UNK_00200288 >> 0x28;
  uVar31 = (ulong)_UNK_00200288 >> 0x30;
  uVar32 = (ulong)_UNK_00200288 >> 0x38;
  bVar63 = (byte)_DAT_00200280;
  uVar19 = (ulong)_DAT_00200280 >> 8;
  uVar20 = (ulong)_DAT_00200280 >> 0x10;
  uVar21 = (ulong)_DAT_00200280 >> 0x18;
  uVar22 = (ulong)_DAT_00200280 >> 0x20;
  uVar23 = (ulong)_DAT_00200280 >> 0x28;
  uVar24 = (ulong)_DAT_00200280 >> 0x30;
  uVar25 = (ulong)_DAT_00200280 >> 0x38;
  bVar61 = (byte)_UNK_00200278;
  uVar40 = (ulong)_UNK_00200278 >> 8;
  uVar41 = (ulong)_UNK_00200278 >> 0x10;
  uVar42 = (ulong)_UNK_00200278 >> 0x18;
  uVar43 = (ulong)_UNK_00200278 >> 0x20;
  uVar44 = (ulong)_UNK_00200278 >> 0x28;
  uVar45 = (ulong)_UNK_00200278 >> 0x30;
  uVar46 = (ulong)_UNK_00200278 >> 0x38;
  bVar59 = (byte)_DAT_00200270;
  uVar33 = (ulong)_DAT_00200270 >> 8;
  uVar34 = (ulong)_DAT_00200270 >> 0x10;
  uVar35 = (ulong)_DAT_00200270 >> 0x18;
  uVar36 = (ulong)_DAT_00200270 >> 0x20;
  uVar37 = (ulong)_DAT_00200270 >> 0x28;
  uVar38 = (ulong)_DAT_00200270 >> 0x30;
  uVar39 = (ulong)_DAT_00200270 >> 0x38;
  pcVar49 = *(code **)(param_1 + 0x168);
  *(ulong *)(param_1 + 0x38) = uVar74;
  *(ulong *)(param_1 + 0x30) = uVar73;
  plVar1 = (long *)(param_1 + 400 + uVar48);
  plVar1[1] = CONCAT17(auVar57[0xf] & (byte)uVar32 | auVar56[0xf] & (byte)uVar46 |
                       auVar55[0xb] & (byte)uVar18 | auVar54[0xb] & (byte)uVar12,
                       CONCAT16(auVar57[0xe] & (byte)uVar31 | auVar56[0xe] & (byte)uVar45 |
                                auVar55[10] & (byte)uVar17 | auVar54[10] & (byte)uVar11,
                                CONCAT15(auVar57[0xd] & (byte)uVar30 | auVar56[0xd] & (byte)uVar44 |
                                         auVar55[9] & (byte)uVar16 | auVar54[9] & (byte)uVar10 |
                                         (byte)(uVar74 >> 0x10),
                                         CONCAT14(auVar57[0xc] & (byte)uVar29 |
                                                  auVar56[0xc] & (byte)uVar43 |
                                                  auVar55[8] & bVar64 | auVar54[8] & bVar60 |
                                                  (byte)(uVar74 >> 0x18),
                                                  CONCAT13(auVar57[0xb] & (byte)uVar28 |
                                                           auVar56[0xb] & (byte)uVar42,
                                                           CONCAT12(auVar57[10] & (byte)uVar27 |
                                                                    auVar56[10] & (byte)uVar41,
                                                                    CONCAT11(auVar57[9] &
                                                                             (byte)uVar26 |
                                                                             auVar56[9] &
                                                                             (byte)uVar40 |
                                                                             (byte)(uVar74 >> 0x30),
                                                                             auVar57[8] & bVar65 |
                                                                             auVar56[8] & bVar61))))
                                        ))) + (uVar74 >> 0x38);
  *plVar1 = CONCAT17(auVar57[7] & (byte)uVar25 | auVar56[7] & (byte)uVar39 |
                     auVar55[3] & (byte)uVar15 | auVar54[3] & (byte)uVar9,
                     CONCAT16(auVar57[6] & (byte)uVar24 | auVar56[6] & (byte)uVar38 |
                              auVar55[2] & (byte)uVar14 | auVar54[2] & (byte)uVar8,
                              CONCAT15(auVar57[5] & (byte)uVar23 | auVar56[5] & (byte)uVar37 |
                                       auVar55[1] & (byte)uVar13 | auVar54[1] & (byte)uVar7 |
                                       (byte)(uVar73 >> 0x10),
                                       CONCAT14(auVar57[4] & (byte)uVar22 |
                                                auVar56[4] & (byte)uVar36 |
                                                auVar55[0] & bVar62 | auVar54[0] & bVar58 |
                                                (byte)(uVar73 >> 0x18),
                                                CONCAT13(auVar57[3] & (byte)uVar21 |
                                                         auVar56[3] & (byte)uVar35,
                                                         CONCAT12(auVar57[2] & (byte)uVar20 |
                                                                  auVar56[2] & (byte)uVar34,
                                                                  CONCAT11(auVar57[1] & (byte)uVar19
                                                                           | auVar56[1] &
                                                                             (byte)uVar33 |
                                                                           (byte)(uVar73 >> 0x30),
                                                                           auVar57[0] & bVar63 |
                                                                           auVar56[0] & bVar59))))))
                    ) + (uVar73 >> 0x38);
  (*pcVar49)(param_1 + 0x40,param_1 + 0x60,param_1 + 400,(int)uVar48 + 0x10);
  uVar51 = *(undefined8 *)(param_1 + 0x28);
  uVar47 = *(undefined8 *)(param_1 + 0x20);
  uVar53 = *(undefined8 *)(param_1 + 0x48);
  uVar52 = *(undefined8 *)(param_1 + 0x40);
  *(ulong *)(param_1 + 0x48) =
       CONCAT17((byte)((ulong)uVar53 >> 0x38) ^ (byte)((ulong)uVar51 >> 0x38),
                CONCAT16((byte)((ulong)uVar53 >> 0x30) ^ (byte)((ulong)uVar51 >> 0x30),
                         CONCAT15((byte)((ulong)uVar53 >> 0x28) ^ (byte)((ulong)uVar51 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar53 >> 0x20) ^
                                           (byte)((ulong)uVar51 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar53 >> 0x18) ^
                                                    (byte)((ulong)uVar51 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar53 >> 0x10) ^
                                                             (byte)((ulong)uVar51 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar53 >> 8) ^
                                                                      (byte)((ulong)uVar51 >> 8),
                                                                      (byte)uVar53 ^ (byte)uVar51)))
                                          ))));
  *(ulong *)(param_1 + 0x40) =
       CONCAT17((byte)((ulong)uVar52 >> 0x38) ^ (byte)((ulong)uVar47 >> 0x38),
                CONCAT16((byte)((ulong)uVar52 >> 0x30) ^ (byte)((ulong)uVar47 >> 0x30),
                         CONCAT15((byte)((ulong)uVar52 >> 0x28) ^ (byte)((ulong)uVar47 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar52 >> 0x20) ^
                                           (byte)((ulong)uVar47 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar52 >> 0x18) ^
                                                    (byte)((ulong)uVar47 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar52 >> 0x10) ^
                                                             (byte)((ulong)uVar47 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar52 >> 8) ^
                                                                      (byte)((ulong)uVar47 >> 8),
                                                                      (byte)uVar52 ^ (byte)uVar47)))
                                          ))));
  if ((param_2 != 0) && (param_3 < 0x11)) {
    uVar47 = FUN_003c46d4(param_1 + 0x40,param_2,param_3);
    return uVar47;
  }
  return 0xffffffff;
}


// ===== 003d9dc0  FUN_003d9dc0 =====

void FUN_003d9dc0(long param_1,void *param_2,size_t param_3)

{
  FUN_003d9bfc(param_1,0,0);
  if (0xf < param_3) {
    param_3 = 0x10;
  }
  memcpy(param_2,(void *)(param_1 + 0x40),param_3);
  return;
}


// ===== 003d9e0c  FUN_003d9e0c =====

long FUN_003d9e0c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = FUN_003c83a4(0x1c0,"crypto/modes/gcm128.c",0x63a);
  if (lVar1 != 0) {
    FUN_003d8798(lVar1,param_1,param_2);
  }
  return lVar1;
}


// ===== 003d9e60  FUN_003d9e60 =====

void FUN_003d9e60(undefined8 param_1)

{
  FUN_003c893c(param_1,0x1c0,"crypto/modes/gcm128.c",0x642);
  return;
}


// ===== 003d9e74  FUN_003d9e74 =====

void FUN_003d9e74(undefined8 *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar4 = uVar2 >> 1;
  uVar3 = uVar4 | uVar1 << 0x3f;
  param_1[0x10] = uVar1;
  param_1[0x11] = uVar2;
  uVar7 = uVar3 >> 1 | (uVar1 >> 1) << 0x3f;
  uVar5 = -(uVar2 & 1) & 0xe100000000000000 ^ uVar1 >> 1;
  param_1[8] = uVar5;
  param_1[9] = uVar3;
  uVar8 = uVar5 >> 1 ^ -(uVar4 & 1) & 0xe100000000000000;
  uVar6 = uVar7 >> 1 | (uVar5 >> 1) << 0x3f;
  uVar4 = -((uVar4 & 2) >> 1) & 0xe100000000000000 ^ uVar8 >> 1;
  param_1[4] = uVar8;
  param_1[5] = uVar7;
  uVar10 = uVar6 ^ uVar7;
  param_1[0xc] = uVar8 ^ uVar5;
  param_1[0xd] = uVar7 ^ uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar6;
  uVar9 = uVar4 ^ uVar8;
  param_1[0x12] = uVar4 ^ uVar1;
  param_1[0x13] = uVar6 ^ uVar2;
  param_1[0x14] = uVar8 ^ uVar1;
  param_1[0x15] = uVar7 ^ uVar2;
  param_1[0x16] = uVar9 ^ uVar1;
  param_1[0x17] = uVar10 ^ uVar2;
  param_1[0x18] = uVar5 ^ uVar1;
  param_1[0x19] = uVar3 ^ uVar2;
  param_1[6] = uVar9;
  param_1[7] = uVar10;
  param_1[0x1a] = uVar4 ^ uVar5 ^ uVar1;
  param_1[0x1b] = uVar6 ^ uVar3 ^ uVar2;
  param_1[10] = uVar4 ^ uVar5;
  param_1[0xb] = uVar6 ^ uVar3;
  param_1[0xe] = uVar9 ^ uVar5;
  param_1[0xf] = uVar10 ^ uVar3;
  param_1[0x1c] = uVar8 ^ uVar5 ^ uVar1;
  param_1[0x1d] = uVar7 ^ uVar3 ^ uVar2;
  param_1[0x1e] = uVar9 ^ uVar5 ^ uVar1;
  param_1[0x1f] = uVar10 ^ uVar3 ^ uVar2;
  return;
}


// ===== 003d9f50  FUN_003d9f50 =====

void FUN_003d9f50(undefined1 *param_1,long param_2)

{
  byte *pbVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = 0xe;
  puVar2 = (ulong *)(param_2 + ((ulong)(byte)param_1[0xf] & 0xf) * 0x10);
  puVar3 = (ulong *)(param_2 + ((ulong)(byte)param_1[0xf] & 0xf0));
  uVar4 = *puVar2;
  uVar5 = puVar2[1];
  uVar7 = *(ulong *)(&DAT_00207338 + (uVar5 & 0xf) * 8) ^ uVar4 >> 4 ^ *puVar3;
  uVar4 = puVar3[1] ^ (uVar5 >> 4 | uVar4 << 0x3c);
  do {
    pbVar1 = param_1 + uVar6;
    uVar6 = uVar6 - 1;
    puVar2 = (ulong *)(param_2 + ((ulong)*pbVar1 & 0xf) * 0x10);
    puVar3 = (ulong *)(param_2 + ((ulong)*pbVar1 & 0xf0));
    uVar5 = puVar2[1] ^ (uVar4 >> 4 | uVar7 << 0x3c);
    uVar7 = *(ulong *)(&DAT_00207338 + (uVar4 & 0xf) * 8) ^ uVar7 >> 4 ^ *puVar2;
    uVar4 = puVar3[1] ^ (uVar5 >> 4 | uVar7 << 0x3c);
    uVar7 = *(ulong *)(&DAT_00207338 + (uVar5 & 0xf) * 8) ^ uVar7 >> 4 ^ *puVar3;
  } while (uVar6 < 0xfffffffffffffffe);
  param_1[7] = (char)uVar7;
  param_1[0xf] = (char)uVar4;
  *param_1 = (char)(uVar7 >> 0x38);
  param_1[1] = (char)(uVar7 >> 0x30);
  param_1[2] = (char)(uVar7 >> 0x28);
  param_1[3] = (char)(uVar7 >> 0x20);
  param_1[4] = (char)(uVar7 >> 0x18);
  param_1[5] = (char)(uVar7 >> 0x10);
  param_1[6] = (char)(uVar7 >> 8);
  param_1[9] = (char)(uVar4 >> 0x30);
  param_1[8] = (char)(uVar4 >> 0x38);
  param_1[0xb] = (char)(uVar4 >> 0x20);
  param_1[10] = (char)(uVar4 >> 0x28);
  param_1[0xd] = (char)(uVar4 >> 0x10);
  param_1[0xc] = (char)(uVar4 >> 0x18);
  param_1[0xe] = (char)(uVar4 >> 8);
  return;
}


// ===== 003da064  FUN_003da064 =====

void FUN_003da064(undefined1 *param_1,long param_2,long param_3,long param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar5 = (ulong)(byte)param_1[0xf];
  do {
    uVar5 = (ulong)((uint)*(byte *)(param_3 + 0xf) ^ (uint)uVar5);
    puVar3 = (ulong *)(param_2 + (uVar5 & 0xf) * 0x10);
    puVar4 = (ulong *)(param_2 + (uVar5 & 0xf0));
    uVar5 = *puVar3;
    uVar7 = puVar3[1];
    uVar6 = *(ulong *)(&DAT_00207338 + (uVar7 & 0xf) * 8) ^ uVar5 >> 4 ^ *puVar4;
    uVar5 = puVar4[1] ^ (uVar7 >> 4 | uVar5 << 0x3c);
    uVar7 = 0xe;
    do {
      pbVar1 = param_1 + uVar7;
      pbVar2 = (byte *)(param_3 + uVar7);
      uVar7 = uVar7 - 1;
      uVar8 = (ulong)(*pbVar2 ^ *pbVar1);
      puVar3 = (ulong *)(param_2 + (uVar8 & 0xf) * 0x10);
      puVar4 = (ulong *)(param_2 + (uVar8 & 0xf0));
      uVar8 = puVar3[1] ^ (uVar5 >> 4 | uVar6 << 0x3c);
      uVar6 = *(ulong *)(&DAT_00207338 + (uVar5 & 0xf) * 8) ^ uVar6 >> 4 ^ *puVar3;
      uVar5 = puVar4[1] ^ (uVar8 >> 4 | uVar6 << 0x3c);
      uVar6 = *(ulong *)(&DAT_00207338 + (uVar8 & 0xf) * 8) ^ uVar6 >> 4 ^ *puVar4;
    } while (uVar7 < 0xfffffffffffffffe);
    param_1[7] = (char)uVar6;
    param_4 = param_4 + -0x10;
    param_3 = param_3 + 0x10;
    param_1[0xf] = (char)uVar5;
    *param_1 = (char)(uVar6 >> 0x38);
    param_1[1] = (char)(uVar6 >> 0x30);
    param_1[2] = (char)(uVar6 >> 0x28);
    param_1[3] = (char)(uVar6 >> 0x20);
    param_1[4] = (char)(uVar6 >> 0x18);
    param_1[5] = (char)(uVar6 >> 0x10);
    param_1[6] = (char)(uVar6 >> 8);
    param_1[9] = (char)(uVar5 >> 0x30);
    param_1[8] = (char)(uVar5 >> 0x38);
    param_1[0xc] = (char)(uVar5 >> 0x18);
    param_1[10] = (char)(uVar5 >> 0x28);
    param_1[0xb] = (char)(uVar5 >> 0x20);
    param_1[0xd] = (char)(uVar5 >> 0x10);
    param_1[0xe] = (char)(uVar5 >> 8);
  } while (param_4 != 0);
  return;
}


// ===== 003da194  FUN_003da194 =====

long FUN_003da194(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_003c83a4(0xb0,"crypto/modes/ocb128.c",0x89);
  if ((lVar2 != 0) &&
     (iVar1 = FUN_003da238(lVar2,param_1,param_2,param_3,param_4,param_5), iVar1 == 0)) {
    FUN_003c86b4(lVar2,"crypto/modes/ocb128.c",0x8e);
    return 0;
  }
  return lVar2;
}


// ===== 003da238  FUN_003da238 =====

long FUN_003da238(undefined8 *param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                 undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  byte bVar4;
  char cVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
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
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[6] = 5;
  lVar6 = FUN_003c83a4(0x50,"crypto/modes/ocb128.c",0x9e);
  param_1[0xb] = lVar6;
  if (lVar6 != 0) {
    *param_1 = param_4;
    param_1[1] = param_5;
    param_1[3] = param_3;
    param_1[4] = param_6;
    param_1[2] = param_2;
    (*param_4)(param_1 + 7,param_1 + 7,param_2);
    uVar10 = param_1[7];
    lVar6 = 1;
    cVar5 = (char)uVar10 * '\x02';
    uVar11 = *(undefined8 *)((long)param_1 + 0x39);
    *(char *)((long)param_1 + 0x55) =
         (char)(uint)(((uint5)CONCAT11(*(undefined1 *)((long)param_1 + 0x45),
                                       *(undefined1 *)((long)param_1 + 0x46)) << 0x18) >> 0x1f);
    *(char *)((long)param_1 + 0x56) =
         (char)(uint)(((uint5)CONCAT11(*(undefined1 *)((long)param_1 + 0x46),
                                       *(byte *)((long)param_1 + 0x47)) << 0x18) >> 0x1f);
    *(char *)((long)param_1 + 0x54) =
         (char)(uint)(((uint5)CONCAT11(*(undefined1 *)((long)param_1 + 0x44),
                                       *(undefined1 *)((long)param_1 + 0x45)) << 0x18) >> 0x1f);
    *(char *)((long)param_1 + 0x52) =
         (char)(uint)(((uint5)CONCAT11(*(undefined1 *)((long)param_1 + 0x42),
                                       *(undefined1 *)((long)param_1 + 0x43)) << 0x18) >> 0x1f);
    uVar1 = -(((uint)uVar10 & 0xff) >> 7) & 0xffffff87 ^ (uint)*(byte *)((long)param_1 + 0x47) << 1;
    *(char *)((long)param_1 + 0x53) =
         (char)(uint)(((uint5)CONCAT11(*(undefined1 *)((long)param_1 + 0x43),
                                       *(undefined1 *)((long)param_1 + 0x44)) << 0x18) >> 0x1f);
    *(char *)((long)param_1 + 0x51) =
         (char)(uint)(((uint5)CONCAT11(*(undefined1 *)((long)param_1 + 0x41),
                                       *(undefined1 *)((long)param_1 + 0x42)) << 0x18) >> 0x1f);
    puVar7 = (undefined1 *)param_1[0xb];
    *(char *)(param_1 + 10) =
         (char)(uint)(((uint5)CONCAT11(*(undefined1 *)(param_1 + 8),
                                       *(undefined1 *)((long)param_1 + 0x41)) << 0x18) >> 0x1f);
    *(char *)((long)param_1 + 0x57) = (char)uVar1;
    param_1[9] = CONCAT17((char)((ulong)uVar10 >> 0x38) * '\x02' - (char)((long)uVar11 >> 0x3f),
                          CONCAT16((char)((ulong)uVar10 >> 0x30) * '\x02' -
                                   ((char)((ulong)uVar11 >> 0x30) >> 7),
                                   CONCAT15((char)((ulong)uVar10 >> 0x28) * '\x02' -
                                            ((char)((ulong)uVar11 >> 0x28) >> 7),
                                            CONCAT14((char)((ulong)uVar10 >> 0x20) * '\x02' -
                                                     ((char)((ulong)uVar11 >> 0x20) >> 7),
                                                     CONCAT13((char)((ulong)uVar10 >> 0x18) * '\x02'
                                                              - ((char)((ulong)uVar11 >> 0x18) >> 7)
                                                              ,CONCAT12((char)((ulong)uVar10 >> 0x10
                                                                              ) * '\x02' -
                                                                        ((char)((ulong)uVar11 >>
                                                                               0x10) >> 7),
                                                                        CONCAT11((char)((ulong)
                                                  uVar10 >> 8) * '\x02' -
                                                  ((char)((ulong)uVar11 >> 8) >> 7),
                                                  cVar5 - ((char)uVar11 >> 7))))))));
    bVar4 = (byte)(uVar1 << 1);
    puVar7[0xf] = bVar4;
    uVar2 = *(undefined1 *)((long)param_1 + 0x56);
    puVar7[0xe] = (char)(uint)(CONCAT14(uVar2,uVar1 << 0x18) >> 0x1f);
    uVar3 = *(undefined1 *)((long)param_1 + 0x55);
    puVar7[0xd] = (char)(uint)(((uint5)CONCAT11(uVar3,uVar2) << 0x18) >> 0x1f);
    uVar2 = *(undefined1 *)((long)param_1 + 0x54);
    puVar7[0xc] = (char)(uint)(((uint5)CONCAT11(uVar2,uVar3) << 0x18) >> 0x1f);
    uVar3 = *(undefined1 *)((long)param_1 + 0x53);
    puVar7[0xb] = (char)(uint)(((uint5)CONCAT11(uVar3,uVar2) << 0x18) >> 0x1f);
    uVar2 = *(undefined1 *)((long)param_1 + 0x52);
    puVar7[10] = (char)(uint)(((uint5)CONCAT11(uVar2,uVar3) << 0x18) >> 0x1f);
    uVar3 = *(undefined1 *)((long)param_1 + 0x51);
    puVar7[9] = (char)(uint)(((uint5)CONCAT11(uVar3,uVar2) << 0x18) >> 0x1f);
    uVar2 = *(undefined1 *)(param_1 + 10);
    puVar7[8] = (char)(uint)(((uint5)CONCAT11(uVar2,uVar3) << 0x18) >> 0x1f);
    uVar3 = *(undefined1 *)((long)param_1 + 0x4f);
    puVar7[7] = (char)(uint)(((uint5)CONCAT11(uVar3,uVar2) << 0x18) >> 0x1f);
    uVar2 = *(undefined1 *)((long)param_1 + 0x4e);
    puVar7[6] = (char)(uint)(((uint5)CONCAT11(uVar2,uVar3) << 0x18) >> 0x1f);
    uVar3 = *(undefined1 *)((long)param_1 + 0x4d);
    puVar7[5] = (char)(uint)(((uint5)CONCAT11(uVar3,uVar2) << 0x18) >> 0x1f);
    uVar2 = *(undefined1 *)((long)param_1 + 0x4c);
    puVar7[4] = (char)(uint)(((uint5)CONCAT11(uVar2,uVar3) << 0x18) >> 0x1f);
    uVar3 = *(undefined1 *)((long)param_1 + 0x4b);
    puVar7[3] = (char)(uint)(((uint5)CONCAT11(uVar3,uVar2) << 0x18) >> 0x1f);
    uVar2 = *(undefined1 *)((long)param_1 + 0x4a);
    puVar7[2] = (char)(uint)(((uint5)CONCAT11(uVar2,uVar3) << 0x18) >> 0x1f);
    uVar3 = *(undefined1 *)((long)param_1 + 0x49);
    puVar7[1] = (char)(uint)(((uint5)CONCAT11(uVar3,uVar2) << 0x18) >> 0x1f);
    uVar2 = *(undefined1 *)(param_1 + 9);
    puVar7[0xf] = (byte)((uint)(int)cVar5 >> 7) & 0x87 ^ bVar4;
    *puVar7 = (char)(uint)(((uint5)CONCAT11(uVar2,uVar3) << 0x18) >> 0x1f);
    puVar8 = (undefined8 *)param_1[0xb];
    uVar10 = *puVar8;
    uVar11 = *(undefined8 *)((long)puVar8 + 1);
    *(char *)((long)puVar8 + 0x1e) =
         (char)(uint)(((uint5)CONCAT11(*(undefined1 *)((long)puVar8 + 0xe),
                                       *(char *)((long)puVar8 + 0xf)) << 0x18) >> 0x1f);
    *(char *)((long)puVar8 + 0x1d) =
         (char)(uint)(((uint5)CONCAT11(*(undefined1 *)((long)puVar8 + 0xd),
                                       *(undefined1 *)((long)puVar8 + 0xe)) << 0x18) >> 0x1f);
    *(char *)((long)puVar8 + 0x1c) =
         (char)(uint)(((uint5)CONCAT11(*(undefined1 *)((long)puVar8 + 0xc),
                                       *(undefined1 *)((long)puVar8 + 0xd)) << 0x18) >> 0x1f);
    *(char *)((long)puVar8 + 0x1b) =
         (char)(uint)(((uint5)CONCAT11(*(undefined1 *)((long)puVar8 + 0xb),
                                       *(undefined1 *)((long)puVar8 + 0xc)) << 0x18) >> 0x1f);
    *(char *)((long)puVar8 + 0x1a) =
         (char)(uint)(((uint5)CONCAT11(*(undefined1 *)((long)puVar8 + 10),
                                       *(undefined1 *)((long)puVar8 + 0xb)) << 0x18) >> 0x1f);
    *(char *)(puVar8 + 3) =
         (char)(uint)(((uint5)CONCAT11(*(undefined1 *)(puVar8 + 1),*(undefined1 *)((long)puVar8 + 9)
                                      ) << 0x18) >> 0x1f);
    *(char *)((long)puVar8 + 0x19) =
         (char)(uint)(((uint5)CONCAT11(*(undefined1 *)((long)puVar8 + 9),
                                       *(undefined1 *)((long)puVar8 + 10)) << 0x18) >> 0x1f);
    *(byte *)((long)puVar8 + 0x1f) =
         (byte)((uint)(int)(char)uVar10 >> 7) & 0x87 ^ *(char *)((long)puVar8 + 0xf) << 1;
    puVar8[2] = CONCAT17((char)((ulong)uVar10 >> 0x38) * '\x02' - (char)((long)uVar11 >> 0x3f),
                         CONCAT16((char)((ulong)uVar10 >> 0x30) * '\x02' -
                                  ((char)((ulong)uVar11 >> 0x30) >> 7),
                                  CONCAT15((char)((ulong)uVar10 >> 0x28) * '\x02' -
                                           ((char)((ulong)uVar11 >> 0x28) >> 7),
                                           CONCAT14((char)((ulong)uVar10 >> 0x20) * '\x02' -
                                                    ((char)((ulong)uVar11 >> 0x20) >> 7),
                                                    CONCAT13((char)((ulong)uVar10 >> 0x18) * '\x02'
                                                             - ((char)((ulong)uVar11 >> 0x18) >> 7),
                                                             CONCAT12((char)((ulong)uVar10 >> 0x10)
                                                                      * '\x02' -
                                                                      ((char)((ulong)uVar11 >> 0x10)
                                                                      >> 7),CONCAT11((char)((ulong)
                                                  uVar10 >> 8) * '\x02' -
                                                  ((char)((ulong)uVar11 >> 8) >> 7),
                                                  (char)uVar10 * '\x02' - ((char)uVar11 >> 7))))))))
    ;
    lVar9 = param_1[0xb];
    uVar10 = *(undefined8 *)(lVar9 + 0x10);
    uVar11 = *(undefined8 *)(lVar9 + 0x11);
    *(char *)(lVar9 + 0x2e) =
         (char)(uint)(((uint5)CONCAT11(*(undefined1 *)(lVar9 + 0x1e),*(char *)(lVar9 + 0x1f)) <<
                      0x18) >> 0x1f);
    *(char *)(lVar9 + 0x2d) =
         (char)(uint)(((uint5)CONCAT11(*(undefined1 *)(lVar9 + 0x1d),*(undefined1 *)(lVar9 + 0x1e))
                      << 0x18) >> 0x1f);
    *(char *)(lVar9 + 0x2c) =
         (char)(uint)(((uint5)CONCAT11(*(undefined1 *)(lVar9 + 0x1c),*(undefined1 *)(lVar9 + 0x1d))
                      << 0x18) >> 0x1f);
    *(char *)(lVar9 + 0x2b) =
         (char)(uint)(((uint5)CONCAT11(*(undefined1 *)(lVar9 + 0x1b),*(undefined1 *)(lVar9 + 0x1c))
                      << 0x18) >> 0x1f);
    *(char *)(lVar9 + 0x2a) =
         (char)(uint)(((uint5)CONCAT11(*(undefined1 *)(lVar9 + 0x1a),*(undefined1 *)(lVar9 + 0x1b))
                      << 0x18) >> 0x1f);
    *(char *)(lVar9 + 0x28) =
         (char)(uint)(((uint5)CONCAT11(*(undefined1 *)(lVar9 + 0x18),*(undefined1 *)(lVar9 + 0x19))
                      << 0x18) >> 0x1f);
    *(char *)(lVar9 + 0x29) =
         (char)(uint)(((uint5)CONCAT11(*(undefined1 *)(lVar9 + 0x19),*(undefined1 *)(lVar9 + 0x1a))
                      << 0x18) >> 0x1f);
    *(byte *)(lVar9 + 0x2f) =
         (byte)((uint)(int)(char)uVar10 >> 7) & 0x87 ^ *(char *)(lVar9 + 0x1f) << 1;
    *(ulong *)(lVar9 + 0x20) =
         CONCAT17((char)((ulong)uVar10 >> 0x38) * '\x02' - (char)((long)uVar11 >> 0x3f),
                  CONCAT16((char)((ulong)uVar10 >> 0x30) * '\x02' -
                           ((char)((ulong)uVar11 >> 0x30) >> 7),
                           CONCAT15((char)((ulong)uVar10 >> 0x28) * '\x02' -
                                    ((char)((ulong)uVar11 >> 0x28) >> 7),
                                    CONCAT14((char)((ulong)uVar10 >> 0x20) * '\x02' -
                                             ((char)((ulong)uVar11 >> 0x20) >> 7),
                                             CONCAT13((char)((ulong)uVar10 >> 0x18) * '\x02' -
                                                      ((char)((ulong)uVar11 >> 0x18) >> 7),
                                                      CONCAT12((char)((ulong)uVar10 >> 0x10) *
                                                               '\x02' - ((char)((ulong)uVar11 >>
                                                                               0x10) >> 7),
                                                               CONCAT11((char)((ulong)uVar10 >> 8) *
                                                                        '\x02' - ((char)((ulong)
                                                  uVar11 >> 8) >> 7),
                                                  (char)uVar10 * '\x02' - ((char)uVar11 >> 7))))))))
    ;
    lVar9 = param_1[0xb];
    uVar10 = *(undefined8 *)(lVar9 + 0x20);
    uVar11 = *(undefined8 *)(lVar9 + 0x21);
    *(char *)(lVar9 + 0x3e) =
         (char)(uint)(((uint5)CONCAT11(*(undefined1 *)(lVar9 + 0x2e),*(char *)(lVar9 + 0x2f)) <<
                      0x18) >> 0x1f);
    *(char *)(lVar9 + 0x3d) =
         (char)(uint)(((uint5)CONCAT11(*(undefined1 *)(lVar9 + 0x2d),*(undefined1 *)(lVar9 + 0x2e))
                      << 0x18) >> 0x1f);
    *(char *)(lVar9 + 0x3c) =
         (char)(uint)(((uint5)CONCAT11(*(undefined1 *)(lVar9 + 0x2c),*(undefined1 *)(lVar9 + 0x2d))
                      << 0x18) >> 0x1f);
    *(char *)(lVar9 + 0x3b) =
         (char)(uint)(((uint5)CONCAT11(*(undefined1 *)(lVar9 + 0x2b),*(undefined1 *)(lVar9 + 0x2c))
                      << 0x18) >> 0x1f);
    *(char *)(lVar9 + 0x3a) =
         (char)(uint)(((uint5)CONCAT11(*(undefined1 *)(lVar9 + 0x2a),*(undefined1 *)(lVar9 + 0x2b))
                      << 0x18) >> 0x1f);
    *(char *)(lVar9 + 0x38) =
         (char)(uint)(((uint5)CONCAT11(*(undefined1 *)(lVar9 + 0x28),*(undefined1 *)(lVar9 + 0x29))
                      << 0x18) >> 0x1f);
    *(char *)(lVar9 + 0x39) =
         (char)(uint)(((uint5)CONCAT11(*(undefined1 *)(lVar9 + 0x29),*(undefined1 *)(lVar9 + 0x2a))
                      << 0x18) >> 0x1f);
    *(byte *)(lVar9 + 0x3f) =
         (byte)((uint)(int)(char)uVar10 >> 7) & 0x87 ^ *(char *)(lVar9 + 0x2f) << 1;
    *(ulong *)(lVar9 + 0x30) =
         CONCAT17((char)((ulong)uVar10 >> 0x38) * '\x02' - (char)((long)uVar11 >> 0x3f),
                  CONCAT16((char)((ulong)uVar10 >> 0x30) * '\x02' -
                           ((char)((ulong)uVar11 >> 0x30) >> 7),
                           CONCAT15((char)((ulong)uVar10 >> 0x28) * '\x02' -
                                    ((char)((ulong)uVar11 >> 0x28) >> 7),
                                    CONCAT14((char)((ulong)uVar10 >> 0x20) * '\x02' -
                                             ((char)((ulong)uVar11 >> 0x20) >> 7),
                                             CONCAT13((char)((ulong)uVar10 >> 0x18) * '\x02' -
                                                      ((char)((ulong)uVar11 >> 0x18) >> 7),
                                                      CONCAT12((char)((ulong)uVar10 >> 0x10) *
                                                               '\x02' - ((char)((ulong)uVar11 >>
                                                                               0x10) >> 7),
                                                               CONCAT11((char)((ulong)uVar10 >> 8) *
                                                                        '\x02' - ((char)((ulong)
                                                  uVar11 >> 8) >> 7),
                                                  (char)uVar10 * '\x02' - ((char)uVar11 >> 7))))))))
    ;
    lVar9 = param_1[0xb];
    uVar10 = *(undefined8 *)(lVar9 + 0x30);
    uVar11 = *(undefined8 *)(lVar9 + 0x31);
    *(char *)(lVar9 + 0x4e) =
         (char)(uint)(((uint5)CONCAT11(*(undefined1 *)(lVar9 + 0x3e),*(char *)(lVar9 + 0x3f)) <<
                      0x18) >> 0x1f);
    *(char *)(lVar9 + 0x4d) =
         (char)(uint)(((uint5)CONCAT11(*(undefined1 *)(lVar9 + 0x3d),*(undefined1 *)(lVar9 + 0x3e))
                      << 0x18) >> 0x1f);
    *(char *)(lVar9 + 0x4c) =
         (char)(uint)(((uint5)CONCAT11(*(undefined1 *)(lVar9 + 0x3c),*(undefined1 *)(lVar9 + 0x3d))
                      << 0x18) >> 0x1f);
    *(char *)(lVar9 + 0x4b) =
         (char)(uint)(((uint5)CONCAT11(*(undefined1 *)(lVar9 + 0x3b),*(undefined1 *)(lVar9 + 0x3c))
                      << 0x18) >> 0x1f);
    *(char *)(lVar9 + 0x4a) =
         (char)(uint)(((uint5)CONCAT11(*(undefined1 *)(lVar9 + 0x3a),*(undefined1 *)(lVar9 + 0x3b))
                      << 0x18) >> 0x1f);
    *(char *)(lVar9 + 0x48) =
         (char)(uint)(((uint5)CONCAT11(*(undefined1 *)(lVar9 + 0x38),*(undefined1 *)(lVar9 + 0x39))
                      << 0x18) >> 0x1f);
    *(char *)(lVar9 + 0x49) =
         (char)(uint)(((uint5)CONCAT11(*(undefined1 *)(lVar9 + 0x39),*(undefined1 *)(lVar9 + 0x3a))
                      << 0x18) >> 0x1f);
    *(byte *)(lVar9 + 0x4f) =
         (byte)((uint)(int)(char)uVar10 >> 7) & 0x87 ^ *(char *)(lVar9 + 0x3f) << 1;
    *(ulong *)(lVar9 + 0x40) =
         CONCAT17((char)((ulong)uVar10 >> 0x38) * '\x02' - (char)((long)uVar11 >> 0x3f),
                  CONCAT16((char)((ulong)uVar10 >> 0x30) * '\x02' -
                           ((char)((ulong)uVar11 >> 0x30) >> 7),
                           CONCAT15((char)((ulong)uVar10 >> 0x28) * '\x02' -
                                    ((char)((ulong)uVar11 >> 0x28) >> 7),
                                    CONCAT14((char)((ulong)uVar10 >> 0x20) * '\x02' -
                                             ((char)((ulong)uVar11 >> 0x20) >> 7),
                                             CONCAT13((char)((ulong)uVar10 >> 0x18) * '\x02' -
                                                      ((char)((ulong)uVar11 >> 0x18) >> 7),
                                                      CONCAT12((char)((ulong)uVar10 >> 0x10) *
                                                               '\x02' - ((char)((ulong)uVar11 >>
                                                                               0x10) >> 7),
                                                               CONCAT11((char)((ulong)uVar10 >> 8) *
                                                                        '\x02' - ((char)((ulong)
                                                  uVar11 >> 8) >> 7),
                                                  (char)uVar10 * '\x02' - ((char)uVar11 >> 7))))))))
    ;
    param_1[5] = 4;
  }
  return lVar6;
}


// ===== 003da724  FUN_003da724 =====

undefined8 FUN_003da724(undefined8 *param_1,undefined8 *param_2,long param_3,long param_4)

{
  void *__dest;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = param_2[2];
  uVar2 = param_2[5];
  uVar1 = param_2[4];
  uVar5 = param_2[1];
  uVar4 = *param_2;
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  param_1[1] = uVar5;
  *param_1 = uVar4;
  uVar3 = param_2[10];
  uVar2 = param_2[0xd];
  uVar1 = param_2[0xc];
  uVar5 = param_2[7];
  uVar4 = param_2[6];
  uVar7 = param_2[9];
  uVar6 = param_2[8];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar3;
  param_1[0xd] = uVar2;
  param_1[0xc] = uVar1;
  param_1[7] = uVar5;
  param_1[6] = uVar4;
  param_1[9] = uVar7;
  param_1[8] = uVar6;
  uVar3 = param_2[0x12];
  uVar2 = param_2[0x15];
  uVar1 = param_2[0x14];
  uVar5 = param_2[0xf];
  uVar4 = param_2[0xe];
  uVar7 = param_2[0x11];
  uVar6 = param_2[0x10];
  param_1[0x13] = param_2[0x13];
  param_1[0x12] = uVar3;
  param_1[0x15] = uVar2;
  param_1[0x14] = uVar1;
  param_1[0xf] = uVar5;
  param_1[0xe] = uVar4;
  param_1[0x11] = uVar7;
  param_1[0x10] = uVar6;
  if (param_3 != 0) {
    param_1[2] = param_3;
  }
  if (param_4 != 0) {
    param_1[3] = param_4;
  }
  if (param_2[0xb] != 0) {
    __dest = (void *)FUN_003c83a4(param_2[6] << 4,"crypto/modes/ocb128.c",0xcb);
    param_1[0xb] = __dest;
    if (__dest == (void *)0x0) {
      return 0;
    }
    memcpy(__dest,(void *)param_2[0xb],param_2[5] * 0x10 + 0x10);
  }
  return 1;
}


// ===== 003da7c4  FUN_003da7c4 =====

undefined8 FUN_003da7c4(undefined8 *param_1,void *param_2,size_t param_3,long param_4)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined1 uVar10;
  undefined4 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
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
  byte local_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined6 uStack_77;
  byte bStack_71;
  undefined1 local_70 [32];
  undefined8 local_50;
  ulong uStack_48;
  undefined1 local_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  
  uVar7 = 0xffffffff;
  if ((0xfffffffffffffff0 < param_3 - 0x10) && (0xffffffffffffffef < param_4 - 0x11U)) {
    uStack_7f = 0;
    local_80 = (byte)((int)param_4 << 4);
    uStack_78 = 0;
    uStack_77 = 0;
    bStack_71 = 0;
    param_1[0xf] = 0;
    param_1[0xe] = 0;
    param_1[0x11] = 0;
    param_1[0x10] = 0;
    param_1[0x13] = 0;
    param_1[0x12] = 0;
    param_1[0x15] = 0;
    param_1[0x14] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    memcpy(local_70 + -param_3,param_2,param_3);
    uVar7 = param_1[2];
    (&local_80)[param_3 ^ 0xf] = (&local_80)[param_3 ^ 0xf] | 1;
    local_50 = CONCAT71(uStack_7f,local_80);
    auVar14[8] = uStack_78;
    auVar14._0_8_ = local_50;
    auVar14._9_6_ = uStack_77;
    auVar14[0xf] = bStack_71;
    uStack_48 = auVar14._8_8_ & 0xc0ffffffffffffff;
    (*(code *)*param_1)(&local_50,&local_40,uVar7);
    auVar15._1_7_ = uStack_3f;
    auVar15[0] = local_40;
    auVar15[0xf] = uStack_38;
    auVar15._8_7_ = uStack_3f;
    puVar8 = (undefined8 *)((ulong)local_70 | (ulong)(bStack_71 >> 3) & 7);
    uVar9 = (uint)bStack_71;
    uVar1 = uVar9 & 7;
    uVar6 = 8 - uVar1;
    a64_TBL(ZEXT816(0),auVar15,DAT_001b7078);
    auVar18._4_4_ = uVar6;
    auVar18._0_4_ = uVar6;
    auVar18._8_4_ = uVar6;
    auVar18._12_4_ = uVar6;
    uVar7 = *puVar8;
    auVar15 = NEON_neg(auVar18,4);
    uVar10 = (undefined1)((ulong)uVar7 >> 8);
    bVar2 = *(byte *)((long)puVar8 + 0xf);
    bVar3 = *(byte *)((long)puVar8 + 0xe);
    bVar4 = *(byte *)((long)puVar8 + 0xd);
    cVar5 = *(char *)((long)puVar8 + 0xc);
    auVar16._1_3_ = 0;
    auVar16[0] = (byte)((ulong)uVar7 >> 0x20);
    auVar16[4] = (char)((ulong)uVar7 >> 0x28);
    auVar16._5_3_ = 0;
    auVar16[8] = (char)((ulong)uVar7 >> 0x30);
    auVar16._9_3_ = 0;
    auVar16[0xc] = (char)((ulong)uVar7 >> 0x38);
    auVar16._13_3_ = 0;
    auVar17._6_2_ = 0;
    auVar17._0_6_ =
         (uint6)CONCAT14(uVar10,(uint)CONCAT12(uVar10,(ushort)(byte)uVar7)) & 0xffff0000ffff;
    auVar17[8] = (char)((ulong)uVar7 >> 0x10);
    auVar17._9_3_ = 0;
    auVar17[0xc] = (char)((ulong)uVar7 >> 0x18);
    auVar17._13_3_ = 0;
    auVar20 = NEON_ext(auVar17,auVar16,4,1);
    *(byte *)((long)param_1 + 0x9e) = bVar3 << (ulong)uVar1 | bVar2 >> (ulong)(uVar6 & 0x1f);
    auVar13._8_4_ = uVar1;
    auVar13._0_8_ = (ulong)CONCAT14(bStack_71,uVar9) & 0x700000007;
    auVar13._12_4_ = uVar1;
    auVar14 = NEON_ushl(auVar17,auVar13,4);
    *(byte *)((long)param_1 + 0x9d) = bVar4 << (ulong)uVar1 | bVar3 >> (ulong)(uVar6 & 0x1f);
    *(byte *)((long)param_1 + 0x9c) = cVar5 << (ulong)uVar1 | bVar4 >> (ulong)(uVar6 & 0x1f);
    uVar11 = *(undefined4 *)(puVar8 + 1);
    auVar21 = NEON_ushl(auVar20,auVar15,4);
    uVar10 = (undefined1)((uint)uVar11 >> 8);
    auVar12._6_2_ = 0;
    auVar12._0_6_ =
         (uint6)CONCAT14(uVar10,(uint)CONCAT12(uVar10,(ushort)(byte)uVar11)) & 0xffff0000ffff;
    auVar12[8] = (char)((uint)uVar11 >> 0x10);
    auVar12._9_3_ = 0;
    auVar12[0xc] = (char)((uint)uVar11 >> 0x18);
    auVar12._13_3_ = 0;
    *(byte *)((long)param_1 + 0x9f) =
         bVar2 << (ulong)uVar1 |
         (byte)((0xff << (ulong)(uVar6 & 0x1f) & (uint)*(byte *)(puVar8 + 2)) >>
               (ulong)(uVar6 & 0x1f));
    auVar18 = NEON_ext(auVar12,auVar12,4,1);
    auVar22 = NEON_ext(auVar16,auVar12,4,1);
    auVar20._8_4_ = uVar1;
    auVar20._0_8_ = (ulong)CONCAT14(bStack_71,uVar9) & 0x700000007;
    auVar20._12_4_ = uVar1;
    auVar17 = NEON_ushl(auVar16,auVar20,4);
    auVar23._8_4_ = uVar1;
    auVar23._0_8_ = (ulong)CONCAT14(bStack_71,uVar9) & 0x700000007;
    auVar23._12_4_ = uVar1;
    auVar13 = NEON_ushl(auVar12,auVar23,4);
    auVar19._0_12_ = auVar18._0_12_;
    auVar19[0xc] = cVar5;
    auVar19._13_3_ = 0;
    auVar23 = NEON_ushl(auVar22,auVar15,4);
    auVar20 = NEON_ushl(auVar19,auVar15,4);
    param_1[0x12] =
         CONCAT17(auVar17[0xc] | auVar23[0xc],
                  CONCAT16(auVar17[8] | auVar23[8],
                           CONCAT15(auVar17[4] | auVar23[4],
                                    CONCAT14(auVar17[0] | auVar23[0],
                                             CONCAT13(auVar14[0xc] | auVar21[0xc],
                                                      CONCAT12(auVar14[8] | auVar21[8],
                                                               CONCAT11(auVar14[4] | auVar21[4],
                                                                        auVar14[0] | auVar21[0])))))
                          ));
    *(uint *)(param_1 + 0x13) =
         CONCAT13(auVar13[0xc] | auVar20[0xc],
                  CONCAT12(auVar13[8] | auVar20[8],
                           CONCAT11(auVar13[4] | auVar20[4],auVar13[0] | auVar20[0])));
    uVar7 = 1;
  }
  return uVar7;
}


// ===== 003da994  FUN_003da994 =====

undefined8 FUN_003da994(undefined8 *param_1,ulong *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  undefined8 uVar20;
  byte bVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  ulong local_50;
  ulong uStack_48;
  
  uVar1 = param_1[0xc] + (param_3 >> 4);
  uVar2 = param_1[0xc];
  while( true ) {
    uVar4 = uVar2 + 1;
    if (uVar1 < uVar4) {
      param_3 = param_3 & 0xf;
      if (param_3 != 0) {
        uVar20 = param_1[0xf];
        uVar6 = param_1[0xe];
        uVar29 = param_1[8];
        uVar28 = param_1[7];
        local_50 = 0;
        uStack_48 = 0;
        bVar11 = (byte)uVar28 ^ (byte)uVar6;
        bVar12 = (byte)((ulong)uVar28 >> 8) ^ (byte)((ulong)uVar6 >> 8);
        bVar13 = (byte)((ulong)uVar28 >> 0x10) ^ (byte)((ulong)uVar6 >> 0x10);
        bVar14 = (byte)((ulong)uVar28 >> 0x18) ^ (byte)((ulong)uVar6 >> 0x18);
        bVar15 = (byte)((ulong)uVar28 >> 0x20) ^ (byte)((ulong)uVar6 >> 0x20);
        bVar16 = (byte)((ulong)uVar28 >> 0x28) ^ (byte)((ulong)uVar6 >> 0x28);
        bVar17 = (byte)((ulong)uVar28 >> 0x30) ^ (byte)((ulong)uVar6 >> 0x30);
        bVar18 = (byte)((ulong)uVar28 >> 0x38) ^ (byte)((ulong)uVar6 >> 0x38);
        bVar19 = (byte)uVar29 ^ (byte)uVar20;
        bVar21 = (byte)((ulong)uVar29 >> 8) ^ (byte)((ulong)uVar20 >> 8);
        bVar22 = (byte)((ulong)uVar29 >> 0x10) ^ (byte)((ulong)uVar20 >> 0x10);
        bVar23 = (byte)((ulong)uVar29 >> 0x18) ^ (byte)((ulong)uVar20 >> 0x18);
        bVar24 = (byte)((ulong)uVar29 >> 0x20) ^ (byte)((ulong)uVar20 >> 0x20);
        bVar25 = (byte)((ulong)uVar29 >> 0x28) ^ (byte)((ulong)uVar20 >> 0x28);
        bVar26 = (byte)((ulong)uVar29 >> 0x30) ^ (byte)((ulong)uVar20 >> 0x30);
        bVar27 = (byte)((ulong)uVar29 >> 0x38) ^ (byte)((ulong)uVar20 >> 0x38);
        param_1[0xf] = CONCAT17(bVar27,CONCAT16(bVar26,CONCAT15(bVar25,CONCAT14(bVar24,CONCAT13(
                                                  bVar23,CONCAT12(bVar22,CONCAT11(bVar21,bVar19)))))
                                               ));
        param_1[0xe] = CONCAT17(bVar18,CONCAT16(bVar17,CONCAT15(bVar16,CONCAT14(bVar15,CONCAT13(
                                                  bVar14,CONCAT12(bVar13,CONCAT11(bVar12,bVar11)))))
                                               ));
        memcpy(&local_50,param_2,param_3);
        uVar6 = param_1[2];
        *(undefined1 *)((ulong)&local_50 | param_3) = 0x80;
        local_50 = CONCAT17((byte)(local_50 >> 0x38) ^ bVar18,
                            CONCAT16((byte)(local_50 >> 0x30) ^ bVar17,
                                     CONCAT15((byte)(local_50 >> 0x28) ^ bVar16,
                                              CONCAT14((byte)(local_50 >> 0x20) ^ bVar15,
                                                       CONCAT13((byte)(local_50 >> 0x18) ^ bVar14,
                                                                CONCAT12((byte)(local_50 >> 0x10) ^
                                                                         bVar13,CONCAT11((byte)(
                                                  local_50 >> 8) ^ bVar12,(byte)local_50 ^ bVar11)))
                                                  ))));
        uStack_48 = CONCAT17((byte)(uStack_48 >> 0x38) ^ bVar27,
                             CONCAT16((byte)(uStack_48 >> 0x30) ^ bVar26,
                                      CONCAT15((byte)(uStack_48 >> 0x28) ^ bVar25,
                                               CONCAT14((byte)(uStack_48 >> 0x20) ^ bVar24,
                                                        CONCAT13((byte)(uStack_48 >> 0x18) ^ bVar23,
                                                                 CONCAT12((byte)(uStack_48 >> 0x10)
                                                                          ^ bVar22,CONCAT11((byte)(
                                                  uStack_48 >> 8) ^ bVar21,(byte)uStack_48 ^ bVar19)
                                                  ))))));
        (*(code *)*param_1)(&local_50,&local_50,uVar6);
        uVar20 = param_1[0x11];
        uVar6 = param_1[0x10];
        param_1[0x11] =
             CONCAT17((byte)((ulong)uVar20 >> 0x38) ^ (byte)(uStack_48 >> 0x38),
                      CONCAT16((byte)((ulong)uVar20 >> 0x30) ^ (byte)(uStack_48 >> 0x30),
                               CONCAT15((byte)((ulong)uVar20 >> 0x28) ^ (byte)(uStack_48 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar20 >> 0x20) ^
                                                 (byte)(uStack_48 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar20 >> 0x18) ^
                                                          (byte)(uStack_48 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar20 >> 0x10) ^
                                                                   (byte)(uStack_48 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar20 >>
                                                                                  8) ^
                                                                            (byte)(uStack_48 >> 8),
                                                                            (byte)uVar20 ^
                                                                            (byte)uStack_48)))))));
        param_1[0x10] =
             CONCAT17((byte)((ulong)uVar6 >> 0x38) ^ (byte)(local_50 >> 0x38),
                      CONCAT16((byte)((ulong)uVar6 >> 0x30) ^ (byte)(local_50 >> 0x30),
                               CONCAT15((byte)((ulong)uVar6 >> 0x28) ^ (byte)(local_50 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar6 >> 0x20) ^
                                                 (byte)(local_50 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar6 >> 0x18) ^
                                                          (byte)(local_50 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar6 >> 0x10) ^
                                                                   (byte)(local_50 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar6 >> 8
                                                                                  ) ^ (byte)(
                                                  local_50 >> 8),(byte)uVar6 ^ (byte)local_50)))))))
        ;
      }
      param_1[0xc] = uVar1;
      return 1;
    }
    iVar7 = 0;
    uVar9 = uVar4;
    if ((uVar2 & 1) != 0) {
      do {
        uVar3 = (uint)uVar9;
        iVar7 = iVar7 + 1;
        uVar9 = uVar9 >> 1;
      } while ((uVar3 >> 1 & 1) == 0);
    }
    puVar5 = (ulong *)FUN_003daaf8(param_1,iVar7);
    if (puVar5 == (ulong *)0x0) break;
    uVar2 = param_1[0xe];
    uVar9 = param_1[0xf];
    uVar8 = *puVar5;
    param_1[0xe] = uVar8 ^ uVar2;
    uVar10 = puVar5[1];
    param_1[0xf] = uVar10 ^ uVar9;
    local_50 = *param_2 ^ uVar8 ^ uVar2;
    uStack_48 = param_2[1] ^ uVar10 ^ uVar9;
    (*(code *)*param_1)(&local_50,&local_50,param_1[2]);
    uVar20 = param_1[0x11];
    uVar6 = param_1[0x10];
    param_1[0x11] =
         CONCAT17((byte)((ulong)uVar20 >> 0x38) ^ (byte)(uStack_48 >> 0x38),
                  CONCAT16((byte)((ulong)uVar20 >> 0x30) ^ (byte)(uStack_48 >> 0x30),
                           CONCAT15((byte)((ulong)uVar20 >> 0x28) ^ (byte)(uStack_48 >> 0x28),
                                    CONCAT14((byte)((ulong)uVar20 >> 0x20) ^
                                             (byte)(uStack_48 >> 0x20),
                                             CONCAT13((byte)((ulong)uVar20 >> 0x18) ^
                                                      (byte)(uStack_48 >> 0x18),
                                                      CONCAT12((byte)((ulong)uVar20 >> 0x10) ^
                                                               (byte)(uStack_48 >> 0x10),
                                                               CONCAT11((byte)((ulong)uVar20 >> 8) ^
                                                                        (byte)(uStack_48 >> 8),
                                                                        (byte)uVar20 ^
                                                                        (byte)uStack_48)))))));
    param_1[0x10] =
         CONCAT17((byte)((ulong)uVar6 >> 0x38) ^ (byte)(local_50 >> 0x38),
                  CONCAT16((byte)((ulong)uVar6 >> 0x30) ^ (byte)(local_50 >> 0x30),
                           CONCAT15((byte)((ulong)uVar6 >> 0x28) ^ (byte)(local_50 >> 0x28),
                                    CONCAT14((byte)((ulong)uVar6 >> 0x20) ^ (byte)(local_50 >> 0x20)
                                             ,CONCAT13((byte)((ulong)uVar6 >> 0x18) ^
                                                       (byte)(local_50 >> 0x18),
                                                       CONCAT12((byte)((ulong)uVar6 >> 0x10) ^
                                                                (byte)(local_50 >> 0x10),
                                                                CONCAT11((byte)((ulong)uVar6 >> 8) ^
                                                                         (byte)(local_50 >> 8),
                                                                         (byte)uVar6 ^
                                                                         (byte)local_50)))))));
    uVar2 = uVar4;
    param_2 = param_2 + 2;
  }
  return 0;
}


// ===== 003daaf8  FUN_003daaf8 =====

long FUN_003daaf8(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar4 = *(ulong *)(param_1 + 0x28);
  if (uVar4 < param_2) {
    uVar3 = *(ulong *)(param_1 + 0x30);
    if (uVar3 <= param_2) {
      lVar2 = uVar3 + (param_2 - uVar3 & 0xfffffffffffffffc) + 4;
      *(long *)(param_1 + 0x30) = lVar2;
      lVar2 = FUN_003c8558(*(undefined8 *)(param_1 + 0x58),lVar2 * 0x10,"crypto/modes/ocb128.c",0x71
                          );
      if (lVar2 == 0) {
        return 0;
      }
      *(long *)(param_1 + 0x58) = lVar2;
    }
    lVar2 = uVar4 << 4;
    do {
      uVar4 = uVar4 + 1;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x58) + lVar2);
      lVar2 = lVar2 + 0x10;
      uVar5 = *puVar1;
      uVar6 = *(undefined8 *)((long)puVar1 + 1);
      *(char *)((long)puVar1 + 0x1e) =
           (char)(uint)(((uint5)CONCAT11(*(undefined1 *)((long)puVar1 + 0xe),
                                         *(char *)((long)puVar1 + 0xf)) << 0x18) >> 0x1f);
      *(char *)((long)puVar1 + 0x1c) =
           (char)(uint)(((uint5)CONCAT11(*(undefined1 *)((long)puVar1 + 0xc),
                                         *(undefined1 *)((long)puVar1 + 0xd)) << 0x18) >> 0x1f);
      *(char *)((long)puVar1 + 0x1b) =
           (char)(uint)(((uint5)CONCAT11(*(undefined1 *)((long)puVar1 + 0xb),
                                         *(undefined1 *)((long)puVar1 + 0xc)) << 0x18) >> 0x1f);
      *(char *)((long)puVar1 + 0x1d) =
           (char)(uint)(((uint5)CONCAT11(*(undefined1 *)((long)puVar1 + 0xd),
                                         *(undefined1 *)((long)puVar1 + 0xe)) << 0x18) >> 0x1f);
      *(char *)((long)puVar1 + 0x1a) =
           (char)(uint)(((uint5)CONCAT11(*(undefined1 *)((long)puVar1 + 10),
                                         *(undefined1 *)((long)puVar1 + 0xb)) << 0x18) >> 0x1f);
      *(char *)((long)puVar1 + 0x19) =
           (char)(uint)(((uint5)CONCAT11(*(undefined1 *)((long)puVar1 + 9),
                                         *(undefined1 *)((long)puVar1 + 10)) << 0x18) >> 0x1f);
      *(char *)(puVar1 + 3) =
           (char)(uint)(((uint5)CONCAT11(*(undefined1 *)(puVar1 + 1),
                                         *(undefined1 *)((long)puVar1 + 9)) << 0x18) >> 0x1f);
      puVar1[2] = CONCAT17((char)((ulong)uVar5 >> 0x38) * '\x02' - (char)((long)uVar6 >> 0x3f),
                           CONCAT16((char)((ulong)uVar5 >> 0x30) * '\x02' -
                                    ((char)((ulong)uVar6 >> 0x30) >> 7),
                                    CONCAT15((char)((ulong)uVar5 >> 0x28) * '\x02' -
                                             ((char)((ulong)uVar6 >> 0x28) >> 7),
                                             CONCAT14((char)((ulong)uVar5 >> 0x20) * '\x02' -
                                                      ((char)((ulong)uVar6 >> 0x20) >> 7),
                                                      CONCAT13((char)((ulong)uVar5 >> 0x18) * '\x02'
                                                               - ((char)((ulong)uVar6 >> 0x18) >> 7)
                                                               ,CONCAT12((char)((ulong)uVar5 >> 0x10
                                                                               ) * '\x02' -
                                                                         ((char)((ulong)uVar6 >>
                                                                                0x10) >> 7),
                                                                         CONCAT11((char)((ulong)
                                                  uVar5 >> 8) * '\x02' -
                                                  ((char)((ulong)uVar6 >> 8) >> 7),
                                                  (char)uVar5 * '\x02' - ((char)uVar6 >> 7))))))));
      *(byte *)((long)puVar1 + 0x1f) =
           (byte)((uint)(int)(char)uVar5 >> 7) & 0x87 ^ *(char *)((long)puVar1 + 0xf) << 1;
    } while (param_2 != uVar4);
    *(ulong *)(param_1 + 0x28) = param_2;
  }
  return *(long *)(param_1 + 0x58) + param_2 * 0x10;
}


// ===== 003dac40  FUN_003dac40 =====

undefined8 FUN_003dac40(undefined8 *param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong local_60;
  ulong uStack_58;
  
  uVar12 = param_1[0xd];
  uVar2 = uVar12 + (param_4 >> 4);
  if ((param_4 < 0x10) || (param_1[4] == 0)) {
    while (uVar4 = uVar12 + 1, uVar4 <= uVar2) {
      iVar8 = 0;
      uVar10 = uVar4;
      if ((uVar12 & 1) != 0) {
        do {
          uVar3 = (uint)uVar10;
          iVar8 = iVar8 + 1;
          uVar10 = uVar10 >> 1;
        } while ((uVar3 >> 1 & 1) == 0);
      }
      puVar5 = (ulong *)FUN_003daaf8(param_1,iVar8);
      if (puVar5 == (ulong *)0x0) {
        return 0;
      }
      uVar12 = param_1[0x12];
      uVar10 = param_1[0x13];
      uVar9 = *puVar5;
      uVar15 = param_1[0x15];
      uVar14 = param_1[0x14];
      param_1[0x12] = uVar9 ^ uVar12;
      uVar11 = puVar5[1];
      param_1[0x13] = uVar11 ^ uVar10;
      uStack_58 = param_2[1];
      uVar13 = *param_2;
      local_60 = uVar13 ^ uVar9 ^ uVar12;
      param_1[0x15] =
           CONCAT17((byte)((ulong)uVar15 >> 0x38) ^ (byte)(uStack_58 >> 0x38),
                    CONCAT16((byte)((ulong)uVar15 >> 0x30) ^ (byte)(uStack_58 >> 0x30),
                             CONCAT15((byte)((ulong)uVar15 >> 0x28) ^ (byte)(uStack_58 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar15 >> 0x20) ^
                                               (byte)(uStack_58 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar15 >> 0x18) ^
                                                        (byte)(uStack_58 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar15 >> 0x10) ^
                                                                 (byte)(uStack_58 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar15 >> 8)
                                                                          ^ (byte)(uStack_58 >> 8),
                                                                          (byte)uVar15 ^
                                                                          (byte)uStack_58)))))));
      param_1[0x14] =
           CONCAT17((byte)((ulong)uVar14 >> 0x38) ^ (byte)(uVar13 >> 0x38),
                    CONCAT16((byte)((ulong)uVar14 >> 0x30) ^ (byte)(uVar13 >> 0x30),
                             CONCAT15((byte)((ulong)uVar14 >> 0x28) ^ (byte)(uVar13 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar14 >> 0x20) ^
                                               (byte)(uVar13 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar14 >> 0x18) ^
                                                        (byte)(uVar13 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar14 >> 0x10) ^
                                                                 (byte)(uVar13 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar14 >> 8)
                                                                          ^ (byte)(uVar13 >> 8),
                                                                          (byte)uVar14 ^
                                                                          (byte)uVar13)))))));
      uStack_58 = uStack_58 ^ uVar11 ^ uVar10;
      (*(code *)*param_1)(&local_60,&local_60,param_1[2]);
      uVar15 = param_1[0x13];
      uVar14 = param_1[0x12];
      local_60 = CONCAT17((byte)(local_60 >> 0x38) ^ (byte)((ulong)uVar14 >> 0x38),
                          CONCAT16((byte)(local_60 >> 0x30) ^ (byte)((ulong)uVar14 >> 0x30),
                                   CONCAT15((byte)(local_60 >> 0x28) ^ (byte)((ulong)uVar14 >> 0x28)
                                            ,CONCAT14((byte)(local_60 >> 0x20) ^
                                                      (byte)((ulong)uVar14 >> 0x20),
                                                      CONCAT13((byte)(local_60 >> 0x18) ^
                                                               (byte)((ulong)uVar14 >> 0x18),
                                                               CONCAT12((byte)(local_60 >> 0x10) ^
                                                                        (byte)((ulong)uVar14 >> 0x10
                                                                              ),CONCAT11((byte)(
                                                  local_60 >> 8) ^ (byte)((ulong)uVar14 >> 8),
                                                  (byte)local_60 ^ (byte)uVar14)))))));
      uStack_58 = CONCAT17((byte)(uStack_58 >> 0x38) ^ (byte)((ulong)uVar15 >> 0x38),
                           CONCAT16((byte)(uStack_58 >> 0x30) ^ (byte)((ulong)uVar15 >> 0x30),
                                    CONCAT15((byte)(uStack_58 >> 0x28) ^
                                             (byte)((ulong)uVar15 >> 0x28),
                                             CONCAT14((byte)(uStack_58 >> 0x20) ^
                                                      (byte)((ulong)uVar15 >> 0x20),
                                                      CONCAT13((byte)(uStack_58 >> 0x18) ^
                                                               (byte)((ulong)uVar15 >> 0x18),
                                                               CONCAT12((byte)(uStack_58 >> 0x10) ^
                                                                        (byte)((ulong)uVar15 >> 0x10
                                                                              ),CONCAT11((byte)(
                                                  uStack_58 >> 8) ^ (byte)((ulong)uVar15 >> 8),
                                                  (byte)uStack_58 ^ (byte)uVar15)))))));
      param_3[1] = uStack_58;
      *param_3 = local_60;
      uVar12 = uVar4;
      param_3 = param_3 + 2;
      param_2 = param_2 + 2;
    }
  }
  else {
    if (uVar2 < 2) {
      lVar7 = 0;
    }
    else {
      lVar7 = 0;
      uVar12 = uVar2;
      do {
        lVar7 = lVar7 + 1;
        bVar1 = 3 < uVar12;
        uVar12 = uVar12 >> 1;
      } while (bVar1);
    }
    lVar7 = FUN_003daaf8(param_1,lVar7);
    if (lVar7 == 0) {
      return 0;
    }
    (*(code *)param_1[4])
              (param_2,param_3,param_4 >> 4,param_1[2],param_1[0xd] + 1,param_1 + 0x12,param_1[0xb],
               param_1 + 0x14);
  }
  if ((param_4 & 0xf) != 0) {
    param_4 = param_4 & 0xf;
    uVar17 = param_1[8];
    uVar16 = param_1[7];
    puVar6 = param_1 + 0x12;
    uVar15 = param_1[0x13];
    uVar14 = *puVar6;
    param_1[0x13] =
         CONCAT17((byte)((ulong)uVar17 >> 0x38) ^ (byte)((ulong)uVar15 >> 0x38),
                  CONCAT16((byte)((ulong)uVar17 >> 0x30) ^ (byte)((ulong)uVar15 >> 0x30),
                           CONCAT15((byte)((ulong)uVar17 >> 0x28) ^ (byte)((ulong)uVar15 >> 0x28),
                                    CONCAT14((byte)((ulong)uVar17 >> 0x20) ^
                                             (byte)((ulong)uVar15 >> 0x20),
                                             CONCAT13((byte)((ulong)uVar17 >> 0x18) ^
                                                      (byte)((ulong)uVar15 >> 0x18),
                                                      CONCAT12((byte)((ulong)uVar17 >> 0x10) ^
                                                               (byte)((ulong)uVar15 >> 0x10),
                                                               CONCAT11((byte)((ulong)uVar17 >> 8) ^
                                                                        (byte)((ulong)uVar15 >> 8),
                                                                        (byte)uVar17 ^ (byte)uVar15)
                                                              ))))));
    *puVar6 = CONCAT17((byte)((ulong)uVar16 >> 0x38) ^ (byte)((ulong)uVar14 >> 0x38),
                       CONCAT16((byte)((ulong)uVar16 >> 0x30) ^ (byte)((ulong)uVar14 >> 0x30),
                                CONCAT15((byte)((ulong)uVar16 >> 0x28) ^
                                         (byte)((ulong)uVar14 >> 0x28),
                                         CONCAT14((byte)((ulong)uVar16 >> 0x20) ^
                                                  (byte)((ulong)uVar14 >> 0x20),
                                                  CONCAT13((byte)((ulong)uVar16 >> 0x18) ^
                                                           (byte)((ulong)uVar14 >> 0x18),
                                                           CONCAT12((byte)((ulong)uVar16 >> 0x10) ^
                                                                    (byte)((ulong)uVar14 >> 0x10),
                                                                    CONCAT11((byte)((ulong)uVar16 >>
                                                                                   8) ^
                                                                             (byte)((ulong)uVar14 >>
                                                                                   8),(byte)uVar16 ^
                                                                                      (byte)uVar14))
                                                          )))));
    (*(code *)*param_1)(puVar6,&local_60,param_1[2]);
    uVar12 = 0;
    do {
      *(byte *)((long)param_3 + uVar12) =
           *(byte *)((long)&local_60 + uVar12) ^ *(byte *)((long)param_2 + uVar12);
      uVar12 = uVar12 + 1;
    } while (param_4 != uVar12);
    local_60 = 0;
    uStack_58 = 0;
    memcpy(&local_60,param_2,param_4);
    uVar15 = param_1[0x15];
    uVar14 = param_1[0x14];
    *(undefined1 *)((ulong)&local_60 | param_4) = 0x80;
    param_1[0x15] =
         CONCAT17((byte)((ulong)uVar15 >> 0x38) ^ (byte)(uStack_58 >> 0x38),
                  CONCAT16((byte)((ulong)uVar15 >> 0x30) ^ (byte)(uStack_58 >> 0x30),
                           CONCAT15((byte)((ulong)uVar15 >> 0x28) ^ (byte)(uStack_58 >> 0x28),
                                    CONCAT14((byte)((ulong)uVar15 >> 0x20) ^
                                             (byte)(uStack_58 >> 0x20),
                                             CONCAT13((byte)((ulong)uVar15 >> 0x18) ^
                                                      (byte)(uStack_58 >> 0x18),
                                                      CONCAT12((byte)((ulong)uVar15 >> 0x10) ^
                                                               (byte)(uStack_58 >> 0x10),
                                                               CONCAT11((byte)((ulong)uVar15 >> 8) ^
                                                                        (byte)(uStack_58 >> 8),
                                                                        (byte)uVar15 ^
                                                                        (byte)uStack_58)))))));
    param_1[0x14] =
         CONCAT17((byte)((ulong)uVar14 >> 0x38) ^ (byte)(local_60 >> 0x38),
                  CONCAT16((byte)((ulong)uVar14 >> 0x30) ^ (byte)(local_60 >> 0x30),
                           CONCAT15((byte)((ulong)uVar14 >> 0x28) ^ (byte)(local_60 >> 0x28),
                                    CONCAT14((byte)((ulong)uVar14 >> 0x20) ^
                                             (byte)(local_60 >> 0x20),
                                             CONCAT13((byte)((ulong)uVar14 >> 0x18) ^
                                                      (byte)(local_60 >> 0x18),
                                                      CONCAT12((byte)((ulong)uVar14 >> 0x10) ^
                                                               (byte)(local_60 >> 0x10),
                                                               CONCAT11((byte)((ulong)uVar14 >> 8) ^
                                                                        (byte)(local_60 >> 8),
                                                                        (byte)uVar14 ^
                                                                        (byte)local_60)))))));
  }
  param_1[0xd] = uVar2;
  return 1;
}


// ===== 003dae64  FUN_003dae64 =====

undefined8 FUN_003dae64(undefined8 *param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  byte bVar13;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  undefined8 uVar14;
  byte bVar22;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  undefined8 uVar23;
  undefined8 uVar31;
  undefined8 uVar32;
  ulong local_60;
  ulong uStack_58;
  
  uVar12 = param_1[0xd];
  uVar2 = uVar12 + (param_4 >> 4);
  if ((param_4 < 0x10) || (param_1[4] == 0)) {
    while (uVar5 = uVar12 + 1, uVar5 <= uVar2) {
      if ((uVar12 & 1) == 0) {
        puVar6 = (ulong *)FUN_003daaf8(param_1,0);
        if (puVar6 == (ulong *)0x0) {
          return 0;
        }
      }
      else {
        iVar8 = 0;
        uVar12 = uVar5;
        do {
          uVar4 = (uint)uVar12;
          iVar8 = iVar8 + 1;
          uVar12 = uVar12 >> 1;
        } while ((uVar4 >> 1 & 1) == 0);
        puVar6 = (ulong *)FUN_003daaf8(param_1,iVar8);
        if (puVar6 == (ulong *)0x0) {
          return 0;
        }
      }
      uVar12 = param_1[0x12];
      uVar3 = param_1[0x13];
      uVar10 = *puVar6;
      param_1[0x12] = uVar10 ^ uVar12;
      uVar11 = puVar6[1];
      param_1[0x13] = uVar11 ^ uVar3;
      local_60 = *param_2 ^ uVar10 ^ uVar12;
      uStack_58 = param_2[1] ^ uVar11 ^ uVar3;
      (*(code *)param_1[1])(&local_60,&local_60,param_1[3]);
      uVar23 = param_1[0x13];
      uVar14 = param_1[0x12];
      uVar32 = param_1[0x15];
      uVar31 = param_1[0x14];
      bVar13 = (byte)local_60 ^ (byte)uVar14;
      bVar15 = (byte)(local_60 >> 8) ^ (byte)((ulong)uVar14 >> 8);
      bVar16 = (byte)(local_60 >> 0x10) ^ (byte)((ulong)uVar14 >> 0x10);
      bVar17 = (byte)(local_60 >> 0x18) ^ (byte)((ulong)uVar14 >> 0x18);
      bVar18 = (byte)(local_60 >> 0x20) ^ (byte)((ulong)uVar14 >> 0x20);
      bVar19 = (byte)(local_60 >> 0x28) ^ (byte)((ulong)uVar14 >> 0x28);
      bVar20 = (byte)(local_60 >> 0x30) ^ (byte)((ulong)uVar14 >> 0x30);
      bVar21 = (byte)(local_60 >> 0x38) ^ (byte)((ulong)uVar14 >> 0x38);
      local_60 = CONCAT17(bVar21,CONCAT16(bVar20,CONCAT15(bVar19,CONCAT14(bVar18,CONCAT13(bVar17,
                                                  CONCAT12(bVar16,CONCAT11(bVar15,bVar13)))))));
      bVar22 = (byte)uStack_58 ^ (byte)uVar23;
      bVar24 = (byte)(uStack_58 >> 8) ^ (byte)((ulong)uVar23 >> 8);
      bVar25 = (byte)(uStack_58 >> 0x10) ^ (byte)((ulong)uVar23 >> 0x10);
      bVar26 = (byte)(uStack_58 >> 0x18) ^ (byte)((ulong)uVar23 >> 0x18);
      bVar27 = (byte)(uStack_58 >> 0x20) ^ (byte)((ulong)uVar23 >> 0x20);
      bVar28 = (byte)(uStack_58 >> 0x28) ^ (byte)((ulong)uVar23 >> 0x28);
      bVar29 = (byte)(uStack_58 >> 0x30) ^ (byte)((ulong)uVar23 >> 0x30);
      bVar30 = (byte)(uStack_58 >> 0x38) ^ (byte)((ulong)uVar23 >> 0x38);
      uStack_58 = CONCAT17(bVar30,CONCAT16(bVar29,CONCAT15(bVar28,CONCAT14(bVar27,CONCAT13(bVar26,
                                                  CONCAT12(bVar25,CONCAT11(bVar24,bVar22)))))));
      param_1[0x15] =
           CONCAT17((byte)((ulong)uVar32 >> 0x38) ^ bVar30,
                    CONCAT16((byte)((ulong)uVar32 >> 0x30) ^ bVar29,
                             CONCAT15((byte)((ulong)uVar32 >> 0x28) ^ bVar28,
                                      CONCAT14((byte)((ulong)uVar32 >> 0x20) ^ bVar27,
                                               CONCAT13((byte)((ulong)uVar32 >> 0x18) ^ bVar26,
                                                        CONCAT12((byte)((ulong)uVar32 >> 0x10) ^
                                                                 bVar25,CONCAT11((byte)((ulong)
                                                  uVar32 >> 8) ^ bVar24,(byte)uVar32 ^ bVar22)))))))
      ;
      param_1[0x14] =
           CONCAT17((byte)((ulong)uVar31 >> 0x38) ^ bVar21,
                    CONCAT16((byte)((ulong)uVar31 >> 0x30) ^ bVar20,
                             CONCAT15((byte)((ulong)uVar31 >> 0x28) ^ bVar19,
                                      CONCAT14((byte)((ulong)uVar31 >> 0x20) ^ bVar18,
                                               CONCAT13((byte)((ulong)uVar31 >> 0x18) ^ bVar17,
                                                        CONCAT12((byte)((ulong)uVar31 >> 0x10) ^
                                                                 bVar16,CONCAT11((byte)((ulong)
                                                  uVar31 >> 8) ^ bVar15,(byte)uVar31 ^ bVar13)))))))
      ;
      param_3[1] = uStack_58;
      *param_3 = local_60;
      uVar12 = uVar5;
      param_3 = param_3 + 2;
      param_2 = param_2 + 2;
    }
  }
  else {
    if (uVar2 < 2) {
      lVar9 = 0;
    }
    else {
      lVar9 = 0;
      uVar12 = uVar2;
      do {
        lVar9 = lVar9 + 1;
        bVar1 = 3 < uVar12;
        uVar12 = uVar12 >> 1;
      } while (bVar1);
    }
    lVar9 = FUN_003daaf8(param_1,lVar9);
    if (lVar9 == 0) {
      return 0;
    }
    (*(code *)param_1[4])
              (param_2,param_3,param_4 >> 4,param_1[3],param_1[0xd] + 1,param_1 + 0x12,param_1[0xb],
               param_1 + 0x14);
  }
  if ((param_4 & 0xf) != 0) {
    param_4 = param_4 & 0xf;
    uVar32 = param_1[8];
    uVar31 = param_1[7];
    puVar7 = param_1 + 0x12;
    uVar23 = param_1[0x13];
    uVar14 = *puVar7;
    param_1[0x13] =
         CONCAT17((byte)((ulong)uVar32 >> 0x38) ^ (byte)((ulong)uVar23 >> 0x38),
                  CONCAT16((byte)((ulong)uVar32 >> 0x30) ^ (byte)((ulong)uVar23 >> 0x30),
                           CONCAT15((byte)((ulong)uVar32 >> 0x28) ^ (byte)((ulong)uVar23 >> 0x28),
                                    CONCAT14((byte)((ulong)uVar32 >> 0x20) ^
                                             (byte)((ulong)uVar23 >> 0x20),
                                             CONCAT13((byte)((ulong)uVar32 >> 0x18) ^
                                                      (byte)((ulong)uVar23 >> 0x18),
                                                      CONCAT12((byte)((ulong)uVar32 >> 0x10) ^
                                                               (byte)((ulong)uVar23 >> 0x10),
                                                               CONCAT11((byte)((ulong)uVar32 >> 8) ^
                                                                        (byte)((ulong)uVar23 >> 8),
                                                                        (byte)uVar32 ^ (byte)uVar23)
                                                              ))))));
    *puVar7 = CONCAT17((byte)((ulong)uVar31 >> 0x38) ^ (byte)((ulong)uVar14 >> 0x38),
                       CONCAT16((byte)((ulong)uVar31 >> 0x30) ^ (byte)((ulong)uVar14 >> 0x30),
                                CONCAT15((byte)((ulong)uVar31 >> 0x28) ^
                                         (byte)((ulong)uVar14 >> 0x28),
                                         CONCAT14((byte)((ulong)uVar31 >> 0x20) ^
                                                  (byte)((ulong)uVar14 >> 0x20),
                                                  CONCAT13((byte)((ulong)uVar31 >> 0x18) ^
                                                           (byte)((ulong)uVar14 >> 0x18),
                                                           CONCAT12((byte)((ulong)uVar31 >> 0x10) ^
                                                                    (byte)((ulong)uVar14 >> 0x10),
                                                                    CONCAT11((byte)((ulong)uVar31 >>
                                                                                   8) ^
                                                                             (byte)((ulong)uVar14 >>
                                                                                   8),(byte)uVar31 ^
                                                                                      (byte)uVar14))
                                                          )))));
    (*(code *)*param_1)(puVar7,&local_60,param_1[2]);
    uVar12 = 0;
    do {
      *(byte *)((long)param_3 + uVar12) =
           *(byte *)((long)&local_60 + uVar12) ^ *(byte *)((long)param_2 + uVar12);
      uVar12 = uVar12 + 1;
    } while (param_4 != uVar12);
    local_60 = 0;
    uStack_58 = 0;
    memcpy(&local_60,param_3,param_4);
    uVar23 = param_1[0x15];
    uVar14 = param_1[0x14];
    *(undefined1 *)((ulong)&local_60 | param_4) = 0x80;
    param_1[0x15] =
         CONCAT17((byte)((ulong)uVar23 >> 0x38) ^ (byte)(uStack_58 >> 0x38),
                  CONCAT16((byte)((ulong)uVar23 >> 0x30) ^ (byte)(uStack_58 >> 0x30),
                           CONCAT15((byte)((ulong)uVar23 >> 0x28) ^ (byte)(uStack_58 >> 0x28),
                                    CONCAT14((byte)((ulong)uVar23 >> 0x20) ^
                                             (byte)(uStack_58 >> 0x20),
                                             CONCAT13((byte)((ulong)uVar23 >> 0x18) ^
                                                      (byte)(uStack_58 >> 0x18),
                                                      CONCAT12((byte)((ulong)uVar23 >> 0x10) ^
                                                               (byte)(uStack_58 >> 0x10),
                                                               CONCAT11((byte)((ulong)uVar23 >> 8) ^
                                                                        (byte)(uStack_58 >> 8),
                                                                        (byte)uVar23 ^
                                                                        (byte)uStack_58)))))));
    param_1[0x14] =
         CONCAT17((byte)((ulong)uVar14 >> 0x38) ^ (byte)(local_60 >> 0x38),
                  CONCAT16((byte)((ulong)uVar14 >> 0x30) ^ (byte)(local_60 >> 0x30),
                           CONCAT15((byte)((ulong)uVar14 >> 0x28) ^ (byte)(local_60 >> 0x28),
                                    CONCAT14((byte)((ulong)uVar14 >> 0x20) ^
                                             (byte)(local_60 >> 0x20),
                                             CONCAT13((byte)((ulong)uVar14 >> 0x18) ^
                                                      (byte)(local_60 >> 0x18),
                                                      CONCAT12((byte)((ulong)uVar14 >> 0x10) ^
                                                               (byte)(local_60 >> 0x10),
                                                               CONCAT11((byte)((ulong)uVar14 >> 8) ^
                                                                        (byte)(local_60 >> 8),
                                                                        (byte)uVar14 ^
                                                                        (byte)local_60)))))));
  }
  param_1[0xd] = uVar2;
  return 1;
}


// ===== 003db088  FUN_003db088 =====

undefined8 FUN_003db088(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (param_3 - 0x11U < 0xfffffffffffffff0) {
    return 0xffffffff;
  }
  uVar5 = param_1[0x13];
  uVar3 = param_1[0x12];
  uVar2 = param_1[0x15];
  uVar1 = param_1[0x14];
  uVar6 = param_1[10];
  uVar4 = param_1[9];
  local_40 = CONCAT17((byte)((ulong)uVar3 >> 0x38) ^ (byte)((ulong)uVar1 >> 0x38) ^
                      (byte)((ulong)uVar4 >> 0x38),
                      CONCAT16((byte)((ulong)uVar3 >> 0x30) ^ (byte)((ulong)uVar1 >> 0x30) ^
                               (byte)((ulong)uVar4 >> 0x30),
                               CONCAT15((byte)((ulong)uVar3 >> 0x28) ^ (byte)((ulong)uVar1 >> 0x28)
                                        ^ (byte)((ulong)uVar4 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar3 >> 0x20) ^
                                                 (byte)((ulong)uVar1 >> 0x20) ^
                                                 (byte)((ulong)uVar4 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar3 >> 0x18) ^
                                                          (byte)((ulong)uVar1 >> 0x18) ^
                                                          (byte)((ulong)uVar4 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar3 >> 0x10) ^
                                                                   (byte)((ulong)uVar1 >> 0x10) ^
                                                                   (byte)((ulong)uVar4 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar3 >> 8
                                                                                  ) ^ (byte)((ulong)
                                                  uVar1 >> 8) ^ (byte)((ulong)uVar4 >> 8),
                                                  (byte)uVar3 ^ (byte)uVar1 ^ (byte)uVar4)))))));
  uStack_38 = CONCAT17((byte)((ulong)uVar5 >> 0x38) ^ (byte)((ulong)uVar2 >> 0x38) ^
                       (byte)((ulong)uVar6 >> 0x38),
                       CONCAT16((byte)((ulong)uVar5 >> 0x30) ^ (byte)((ulong)uVar2 >> 0x30) ^
                                (byte)((ulong)uVar6 >> 0x30),
                                CONCAT15((byte)((ulong)uVar5 >> 0x28) ^ (byte)((ulong)uVar2 >> 0x28)
                                         ^ (byte)((ulong)uVar6 >> 0x28),
                                         CONCAT14((byte)((ulong)uVar5 >> 0x20) ^
                                                  (byte)((ulong)uVar2 >> 0x20) ^
                                                  (byte)((ulong)uVar6 >> 0x20),
                                                  CONCAT13((byte)((ulong)uVar5 >> 0x18) ^
                                                           (byte)((ulong)uVar2 >> 0x18) ^
                                                           (byte)((ulong)uVar6 >> 0x18),
                                                           CONCAT12((byte)((ulong)uVar5 >> 0x10) ^
                                                                    (byte)((ulong)uVar2 >> 0x10) ^
                                                                    (byte)((ulong)uVar6 >> 0x10),
                                                                    CONCAT11((byte)((ulong)uVar5 >>
                                                                                   8) ^
                                                                             (byte)((ulong)uVar2 >>
                                                                                   8) ^
                                                                             (byte)((ulong)uVar6 >>
                                                                                   8),(byte)uVar5 ^
                                                                                      (byte)uVar2 ^
                                                                                      (byte)uVar6)))
                                                 ))));
  (*(code *)*param_1)(&local_40,&local_40,param_1[2]);
  uVar2 = param_1[0x11];
  uVar1 = param_1[0x10];
  local_40 = CONCAT17((byte)((ulong)uVar1 >> 0x38) ^ (byte)((ulong)local_40 >> 0x38),
                      CONCAT16((byte)((ulong)uVar1 >> 0x30) ^ (byte)((ulong)local_40 >> 0x30),
                               CONCAT15((byte)((ulong)uVar1 >> 0x28) ^
                                        (byte)((ulong)local_40 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar1 >> 0x20) ^
                                                 (byte)((ulong)local_40 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar1 >> 0x18) ^
                                                          (byte)((ulong)local_40 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar1 >> 0x10) ^
                                                                   (byte)((ulong)local_40 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar1 >> 8
                                                                                  ) ^ (byte)((ulong)
                                                  local_40 >> 8),(byte)uVar1 ^ (byte)local_40)))))))
  ;
  uStack_38 = CONCAT17((byte)((ulong)uVar2 >> 0x38) ^ (byte)((ulong)uStack_38 >> 0x38),
                       CONCAT16((byte)((ulong)uVar2 >> 0x30) ^ (byte)((ulong)uStack_38 >> 0x30),
                                CONCAT15((byte)((ulong)uVar2 >> 0x28) ^
                                         (byte)((ulong)uStack_38 >> 0x28),
                                         CONCAT14((byte)((ulong)uVar2 >> 0x20) ^
                                                  (byte)((ulong)uStack_38 >> 0x20),
                                                  CONCAT13((byte)((ulong)uVar2 >> 0x18) ^
                                                           (byte)((ulong)uStack_38 >> 0x18),
                                                           CONCAT12((byte)((ulong)uVar2 >> 0x10) ^
                                                                    (byte)((ulong)uStack_38 >> 0x10)
                                                                    ,CONCAT11((byte)((ulong)uVar2 >>
                                                                                    8) ^
                                                                              (byte)((ulong)
                                                  uStack_38 >> 8),(byte)uVar2 ^ (byte)uStack_38)))))
                               ));
  uVar1 = FUN_003c46d4(&local_40,param_2,param_3);
  return uVar1;
}


// ===== 003db11c  FUN_003db11c =====

undefined8 FUN_003db11c(undefined8 *param_1,void *param_2,size_t param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (param_3 - 0x11 < 0xfffffffffffffff0) {
    return 0xffffffff;
  }
  uVar5 = param_1[0x13];
  uVar3 = param_1[0x12];
  uVar2 = param_1[0x15];
  uVar1 = param_1[0x14];
  uVar6 = param_1[10];
  uVar4 = param_1[9];
  local_40 = CONCAT17((byte)((ulong)uVar3 >> 0x38) ^ (byte)((ulong)uVar1 >> 0x38) ^
                      (byte)((ulong)uVar4 >> 0x38),
                      CONCAT16((byte)((ulong)uVar3 >> 0x30) ^ (byte)((ulong)uVar1 >> 0x30) ^
                               (byte)((ulong)uVar4 >> 0x30),
                               CONCAT15((byte)((ulong)uVar3 >> 0x28) ^ (byte)((ulong)uVar1 >> 0x28)
                                        ^ (byte)((ulong)uVar4 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar3 >> 0x20) ^
                                                 (byte)((ulong)uVar1 >> 0x20) ^
                                                 (byte)((ulong)uVar4 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar3 >> 0x18) ^
                                                          (byte)((ulong)uVar1 >> 0x18) ^
                                                          (byte)((ulong)uVar4 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar3 >> 0x10) ^
                                                                   (byte)((ulong)uVar1 >> 0x10) ^
                                                                   (byte)((ulong)uVar4 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar3 >> 8
                                                                                  ) ^ (byte)((ulong)
                                                  uVar1 >> 8) ^ (byte)((ulong)uVar4 >> 8),
                                                  (byte)uVar3 ^ (byte)uVar1 ^ (byte)uVar4)))))));
  uStack_38 = CONCAT17((byte)((ulong)uVar5 >> 0x38) ^ (byte)((ulong)uVar2 >> 0x38) ^
                       (byte)((ulong)uVar6 >> 0x38),
                       CONCAT16((byte)((ulong)uVar5 >> 0x30) ^ (byte)((ulong)uVar2 >> 0x30) ^
                                (byte)((ulong)uVar6 >> 0x30),
                                CONCAT15((byte)((ulong)uVar5 >> 0x28) ^ (byte)((ulong)uVar2 >> 0x28)
                                         ^ (byte)((ulong)uVar6 >> 0x28),
                                         CONCAT14((byte)((ulong)uVar5 >> 0x20) ^
                                                  (byte)((ulong)uVar2 >> 0x20) ^
                                                  (byte)((ulong)uVar6 >> 0x20),
                                                  CONCAT13((byte)((ulong)uVar5 >> 0x18) ^
                                                           (byte)((ulong)uVar2 >> 0x18) ^
                                                           (byte)((ulong)uVar6 >> 0x18),
                                                           CONCAT12((byte)((ulong)uVar5 >> 0x10) ^
                                                                    (byte)((ulong)uVar2 >> 0x10) ^
                                                                    (byte)((ulong)uVar6 >> 0x10),
                                                                    CONCAT11((byte)((ulong)uVar5 >>
                                                                                   8) ^
                                                                             (byte)((ulong)uVar2 >>
                                                                                   8) ^
                                                                             (byte)((ulong)uVar6 >>
                                                                                   8),(byte)uVar5 ^
                                                                                      (byte)uVar2 ^
                                                                                      (byte)uVar6)))
                                                 ))));
  (*(code *)*param_1)(&local_40,&local_40,param_1[2]);
  uVar2 = param_1[0x11];
  uVar1 = param_1[0x10];
  local_40 = CONCAT17((byte)((ulong)uVar1 >> 0x38) ^ (byte)((ulong)local_40 >> 0x38),
                      CONCAT16((byte)((ulong)uVar1 >> 0x30) ^ (byte)((ulong)local_40 >> 0x30),
                               CONCAT15((byte)((ulong)uVar1 >> 0x28) ^
                                        (byte)((ulong)local_40 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar1 >> 0x20) ^
                                                 (byte)((ulong)local_40 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar1 >> 0x18) ^
                                                          (byte)((ulong)local_40 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar1 >> 0x10) ^
                                                                   (byte)((ulong)local_40 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar1 >> 8
                                                                                  ) ^ (byte)((ulong)
                                                  local_40 >> 8),(byte)uVar1 ^ (byte)local_40)))))))
  ;
  uStack_38 = CONCAT17((byte)((ulong)uVar2 >> 0x38) ^ (byte)((ulong)uStack_38 >> 0x38),
                       CONCAT16((byte)((ulong)uVar2 >> 0x30) ^ (byte)((ulong)uStack_38 >> 0x30),
                                CONCAT15((byte)((ulong)uVar2 >> 0x28) ^
                                         (byte)((ulong)uStack_38 >> 0x28),
                                         CONCAT14((byte)((ulong)uVar2 >> 0x20) ^
                                                  (byte)((ulong)uStack_38 >> 0x20),
                                                  CONCAT13((byte)((ulong)uVar2 >> 0x18) ^
                                                           (byte)((ulong)uStack_38 >> 0x18),
                                                           CONCAT12((byte)((ulong)uVar2 >> 0x10) ^
                                                                    (byte)((ulong)uStack_38 >> 0x10)
                                                                    ,CONCAT11((byte)((ulong)uVar2 >>
                                                                                    8) ^
                                                                              (byte)((ulong)
                                                  uStack_38 >> 8),(byte)uVar2 ^ (byte)uStack_38)))))
                               ));
  memcpy(param_2,&local_40,param_3);
  return 1;
}


// ===== 003db1b4  FUN_003db1b4 =====

void FUN_003db1b4(long param_1)

{
  if (param_1 != 0) {
    FUN_003c893c(*(undefined8 *)(param_1 + 0x58),*(long *)(param_1 + 0x30) << 4,
                 "crypto/modes/ocb128.c",0x229);
    FUN_003c89b8(param_1,0xb0);
    return;
  }
  return;
}


// ===== 003db200  FUN_003db200 =====

void FUN_003db200(ulong *param_1,ulong *param_2,ulong param_3,undefined8 param_4,ulong *param_5,
                 uint *param_6,code *param_7)

{
  long lVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  uint uVar5;
  ulong uVar6;
  
  uVar5 = *param_6;
  if ((int)uVar5 < 0) {
    uVar5 = 0xffffffff;
    goto LAB_003db364;
  }
  if ((uVar5 == 0) || (puVar3 = param_2, puVar4 = param_1, param_3 == 0)) {
    uVar6 = param_3 - 0x10;
    if (0xf < param_3) goto LAB_003db274;
  }
  else {
    do {
      uVar6 = param_3;
      param_1 = (ulong *)((long)puVar4 + 1);
      uVar2 = (ulong)uVar5;
      uVar5 = uVar5 + 1 & 0xf;
      param_2 = (ulong *)((long)puVar3 + 1);
      *(byte *)puVar3 = *(byte *)((long)param_5 + uVar2) ^ (byte)*puVar4;
      param_3 = uVar6 - 1;
      if (uVar5 == 0) break;
      puVar3 = param_2;
      puVar4 = param_1;
    } while (uVar6 != 1);
    uVar6 = uVar6 - 0x11;
    if (0xf < param_3) {
LAB_003db274:
      (*param_7)(param_5,param_5,param_4);
      if (uVar5 < 0x10) {
        uVar2 = (ulong)uVar5;
        *(ulong *)((long)param_2 + uVar2) =
             *(ulong *)((long)param_5 + uVar2) ^ *(ulong *)((long)param_1 + uVar2);
        if (uVar5 < 8) {
          lVar1 = uVar2 + 8;
          *(ulong *)((long)param_2 + lVar1) =
               *(ulong *)((long)param_5 + lVar1) ^ *(ulong *)((long)param_1 + lVar1);
        }
      }
      while( true ) {
        puVar4 = param_1 + 2;
        puVar3 = param_2 + 2;
        if (uVar6 < 0x10) break;
        (*param_7)(param_5,param_5,param_4);
        uVar6 = uVar6 - 0x10;
        *puVar3 = *param_5 ^ *puVar4;
        param_2[3] = param_5[1] ^ param_1[3];
        param_2 = puVar3;
        param_1 = puVar4;
      }
      uVar5 = 0;
      param_3 = uVar6;
      param_2 = puVar3;
      param_1 = puVar4;
    }
  }
  if (param_3 != 0) {
    (*param_7)(param_5,param_5,param_4);
    do {
      param_3 = param_3 - 1;
      *(byte *)((long)param_2 + (ulong)uVar5) =
           *(byte *)((long)param_5 + (ulong)uVar5) ^ *(byte *)((long)param_1 + (ulong)uVar5);
      uVar5 = uVar5 + 1;
    } while (param_3 != 0);
  }
LAB_003db364:
  *param_6 = uVar5;
  return;
}


// ===== 003db380  FUN_003db380 =====

long FUN_003db380(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,void *param_4,
                 ulong param_5,code *param_6)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 local_70;
  undefined8 local_68;
  
  lVar6 = 0;
  if (((param_5 & 7) == 0) && (0xffffffff8000000e < param_5 - 0x80000001)) {
    memmove(param_3 + 1,param_4,param_5);
    puVar3 = (undefined8 *)&UNK_002073b8;
    if (param_2 != (undefined8 *)0x0) {
      puVar3 = param_2;
    }
    uVar9 = 1;
    uVar7 = param_5 - 1 >> 3;
    local_70 = *puVar3;
    lVar6 = uVar7 + 1;
    do {
      local_68 = param_3[uVar9];
      (*param_6)(&local_70,&local_70,param_1);
      uVar5 = local_70;
      bVar4 = local_70._7_1_ ^ (byte)uVar9;
      local_70 = CONCAT17(bVar4,(undefined7)local_70);
      if (0xff < uVar9) {
        local_70._6_1_ = SUB81(uVar5,6);
        local_70._5_1_ = SUB81(uVar5,5);
        local_70._4_1_ = SUB81(uVar5,4);
        local_70._0_4_ = (undefined4)uVar5;
        local_70._0_5_ = CONCAT14(local_70._4_1_ ^ (byte)(uVar9 >> 0x18),(undefined4)local_70);
        local_70 = CONCAT35(CONCAT21(CONCAT11(bVar4,local_70._6_1_ ^ (byte)(uVar9 >> 8)),
                                     local_70._5_1_ ^ (byte)(uVar9 >> 0x10)),(undefined5)local_70);
      }
      param_3[uVar9] = local_68;
      uVar9 = uVar9 + 1;
    } while (uVar9 - uVar7 != 2);
    lVar2 = lVar6 + uVar7 + 2;
    lVar8 = 0;
    do {
      uVar9 = uVar7 + 2 + lVar8;
      local_68 = param_3[lVar8 + 1];
      (*param_6)(&local_70,&local_70,param_1);
      uVar5 = local_70;
      bVar4 = local_70._7_1_ ^ (byte)uVar9;
      local_70 = CONCAT17(bVar4,(undefined7)local_70);
      if (0xff < uVar9) {
        local_70._6_1_ = SUB81(uVar5,6);
        local_70._5_1_ = SUB81(uVar5,5);
        local_70._4_1_ = SUB81(uVar5,4);
        local_70._0_4_ = (undefined4)uVar5;
        local_70._0_5_ = CONCAT14(local_70._4_1_ ^ (byte)(uVar9 >> 0x18),(undefined4)local_70);
        local_70 = CONCAT35(CONCAT21(CONCAT11(bVar4,local_70._6_1_ ^ (byte)(uVar9 >> 8)),
                                     local_70._5_1_ ^ (byte)(uVar9 >> 0x10)),(undefined5)local_70);
      }
      lVar10 = lVar8 + 1;
      param_3[lVar8 + 1] = local_68;
      lVar8 = lVar10;
    } while (uVar7 + 1 != lVar10);
    lVar8 = lVar6 + lVar2;
    lVar10 = 0;
    do {
      uVar9 = lVar2 + lVar10;
      local_68 = param_3[lVar10 + 1];
      (*param_6)(&local_70,&local_70,param_1);
      uVar5 = local_70;
      bVar4 = local_70._7_1_ ^ (byte)uVar9;
      local_70 = CONCAT17(bVar4,(undefined7)local_70);
      if (0xff < uVar9) {
        local_70._6_1_ = SUB81(uVar5,6);
        local_70._5_1_ = SUB81(uVar5,5);
        local_70._4_1_ = SUB81(uVar5,4);
        local_70._0_4_ = (undefined4)uVar5;
        local_70._0_5_ = CONCAT14(local_70._4_1_ ^ (byte)(uVar9 >> 0x18),(undefined4)local_70);
        local_70 = CONCAT35(CONCAT21(CONCAT11(bVar4,local_70._6_1_ ^ (byte)(uVar9 >> 8)),
                                     local_70._5_1_ ^ (byte)(uVar9 >> 0x10)),(undefined5)local_70);
      }
      lVar1 = lVar10 + 1;
      param_3[lVar10 + 1] = local_68;
      lVar10 = lVar1;
    } while (lVar6 != lVar1);
    lVar2 = lVar6 + lVar8;
    lVar10 = 0;
    do {
      uVar9 = lVar8 + lVar10;
      local_68 = param_3[lVar10 + 1];
      (*param_6)(&local_70,&local_70,param_1);
      uVar5 = local_70;
      bVar4 = local_70._7_1_ ^ (byte)uVar9;
      local_70 = CONCAT17(bVar4,(undefined7)local_70);
      if (0xff < uVar9) {
        local_70._6_1_ = SUB81(uVar5,6);
        local_70._5_1_ = SUB81(uVar5,5);
        local_70._4_1_ = SUB81(uVar5,4);
        local_70._0_4_ = (undefined4)uVar5;
        local_70._0_5_ = CONCAT14(local_70._4_1_ ^ (byte)(uVar9 >> 0x18),(undefined4)local_70);
        local_70 = CONCAT35(CONCAT21(CONCAT11(bVar4,local_70._6_1_ ^ (byte)(uVar9 >> 8)),
                                     local_70._5_1_ ^ (byte)(uVar9 >> 0x10)),(undefined5)local_70);
      }
      lVar1 = lVar10 + 1;
      param_3[lVar10 + 1] = local_68;
      lVar10 = lVar1;
    } while (lVar6 != lVar1);
    lVar8 = 0;
    do {
      uVar9 = lVar2 + lVar8;
      local_68 = param_3[lVar8 + 1];
      (*param_6)(&local_70,&local_70,param_1);
      uVar5 = local_70;
      bVar4 = local_70._7_1_ ^ (byte)uVar9;
      local_70 = CONCAT17(bVar4,(undefined7)local_70);
      if (0xff < uVar9) {
        local_70._6_1_ = SUB81(uVar5,6);
        local_70._5_1_ = SUB81(uVar5,5);
        local_70._4_1_ = SUB81(uVar5,4);
        local_70._0_4_ = (undefined4)uVar5;
        local_70._0_5_ = CONCAT14(local_70._4_1_ ^ (byte)(uVar9 >> 0x18),(undefined4)local_70);
        local_70 = CONCAT35(CONCAT21(CONCAT11(bVar4,local_70._6_1_ ^ (byte)(uVar9 >> 8)),
                                     local_70._5_1_ ^ (byte)(uVar9 >> 0x10)),(undefined5)local_70);
      }
      lVar10 = lVar8 + 1;
      param_3[lVar8 + 1] = local_68;
      lVar8 = lVar10;
    } while (lVar6 != lVar10);
    lVar8 = 0;
    do {
      uVar9 = lVar6 + lVar2 + lVar8;
      local_68 = param_3[lVar8 + 1];
      (*param_6)(&local_70,&local_70,param_1);
      uVar5 = local_70;
      bVar4 = local_70._7_1_ ^ (byte)uVar9;
      local_70 = CONCAT17(bVar4,(undefined7)local_70);
      if (0xff < uVar9) {
        local_70._6_1_ = SUB81(uVar5,6);
        local_70._5_1_ = SUB81(uVar5,5);
        local_70._4_1_ = SUB81(uVar5,4);
        local_70._0_4_ = (undefined4)uVar5;
        local_70._0_5_ = CONCAT14(local_70._4_1_ ^ (byte)(uVar9 >> 0x18),(undefined4)local_70);
        local_70 = CONCAT35(CONCAT21(CONCAT11(bVar4,local_70._6_1_ ^ (byte)(uVar9 >> 8)),
                                     local_70._5_1_ ^ (byte)(uVar9 >> 0x10)),(undefined5)local_70);
      }
      lVar10 = lVar8 + 1;
      param_3[lVar8 + 1] = local_68;
      lVar8 = lVar10;
    } while (uVar7 + 1 != lVar10);
    lVar6 = param_5 + 8;
    *param_3 = local_70;
  }
  return lVar6;
}


// ===== 003db72c  FUN_003db72c =====

long FUN_003db72c(undefined8 param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined1 auStack_18 [8];
  
  lVar3 = FUN_003db7a8(param_1,auStack_18);
  if (lVar3 != 0) {
    puVar1 = &UNK_002073b8;
    if (param_2 != (undefined *)0x0) {
      puVar1 = param_2;
    }
    iVar2 = FUN_003c46d4(auStack_18,puVar1,8);
    if (iVar2 == 0) {
      return lVar3;
    }
    FUN_003c89b8(param_3,lVar3);
    lVar3 = 0;
  }
  return lVar3;
}


// ===== 003db7a8  FUN_003db7a8 =====

ulong FUN_003db7a8(undefined8 param_1,undefined8 *param_2,void *param_3,undefined8 *param_4,
                  ulong param_5,code *param_6)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  ulong __n;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 local_70;
  undefined8 local_68;
  
  __n = 0;
  if (((param_5 & 7) == 0) && (0xffffffff8000000e < param_5 - 0x80000009)) {
    uVar5 = *param_4;
    __n = param_5 - 8;
    local_70 = uVar5;
    memmove(param_3,param_4 + 1,__n);
    if (__n != 0) {
      uVar7 = 0;
      uVar6 = ((__n >> 2) + (__n >> 3)) * 2;
      puVar4 = (undefined8 *)((long)param_3 + (param_5 - 0x10));
      do {
        uVar5 = local_70;
        bVar2 = local_70._7_1_ ^ (byte)uVar6;
        local_70 = CONCAT17(bVar2,(undefined7)local_70);
        if (0xff < uVar6) {
          local_70._6_1_ = SUB81(uVar5,6);
          local_70._5_1_ = SUB81(uVar5,5);
          local_70._4_1_ = SUB81(uVar5,4);
          local_70._0_4_ = (undefined4)uVar5;
          local_70._0_5_ = CONCAT14(local_70._4_1_ ^ (byte)(uVar6 >> 0x18),(undefined4)local_70);
          local_70 = CONCAT35(CONCAT21(CONCAT11(bVar2,local_70._6_1_ ^ (byte)(uVar6 >> 8)),
                                       local_70._5_1_ ^ (byte)(uVar6 >> 0x10)),(undefined5)local_70)
          ;
        }
        local_68 = *puVar4;
        (*param_6)(&local_70,&local_70,param_1);
        uVar7 = uVar7 + 8;
        uVar6 = uVar6 - 1;
        *puVar4 = local_68;
        puVar4 = puVar4 + -1;
      } while (uVar7 < __n);
      lVar8 = 0;
      uVar7 = 0;
      do {
        uVar5 = local_70;
        uVar1 = uVar6 + lVar8;
        bVar2 = local_70._7_1_ ^ (byte)uVar1;
        local_70 = CONCAT17(bVar2,(undefined7)local_70);
        if (0xff < uVar1) {
          local_70._6_1_ = SUB81(uVar5,6);
          local_70._5_1_ = SUB81(uVar5,5);
          local_70._4_1_ = SUB81(uVar5,4);
          local_70._0_4_ = (undefined4)uVar5;
          local_70._0_5_ = CONCAT14(local_70._4_1_ ^ (byte)(uVar1 >> 0x18),(undefined4)local_70);
          local_70 = CONCAT35(CONCAT21(CONCAT11(bVar2,local_70._6_1_ ^ (byte)(uVar1 >> 8)),
                                       local_70._5_1_ ^ (byte)(uVar1 >> 0x10)),(undefined5)local_70)
          ;
        }
        lVar3 = lVar8 * 8;
        local_68 = *(undefined8 *)((long)param_3 + lVar3 + (param_5 - 0x10));
        (*param_6)(&local_70,&local_70,param_1);
        uVar7 = uVar7 + 8;
        lVar8 = lVar8 + -1;
        *(undefined8 *)((long)param_3 + lVar3 + (param_5 - 0x10)) = local_68;
      } while (uVar7 < __n);
      uVar7 = 0;
      uVar6 = uVar6 + lVar8;
      puVar4 = (undefined8 *)((long)param_3 + (param_5 - 0x10));
      do {
        uVar5 = local_70;
        bVar2 = local_70._7_1_ ^ (byte)uVar6;
        local_70 = CONCAT17(bVar2,(undefined7)local_70);
        if (0xff < uVar6) {
          local_70._6_1_ = SUB81(uVar5,6);
          local_70._5_1_ = SUB81(uVar5,5);
          local_70._4_1_ = SUB81(uVar5,4);
          local_70._0_4_ = (undefined4)uVar5;
          local_70._0_5_ = CONCAT14(local_70._4_1_ ^ (byte)(uVar6 >> 0x18),(undefined4)local_70);
          local_70 = CONCAT35(CONCAT21(CONCAT11(bVar2,local_70._6_1_ ^ (byte)(uVar6 >> 8)),
                                       local_70._5_1_ ^ (byte)(uVar6 >> 0x10)),(undefined5)local_70)
          ;
        }
        local_68 = *puVar4;
        (*param_6)(&local_70,&local_70,param_1);
        uVar7 = uVar7 + 8;
        uVar6 = uVar6 - 1;
        *puVar4 = local_68;
        puVar4 = puVar4 + -1;
      } while (uVar7 < __n);
      uVar7 = 0;
      puVar4 = (undefined8 *)((long)param_3 + (param_5 - 0x10));
      do {
        uVar5 = local_70;
        bVar2 = local_70._7_1_ ^ (byte)uVar6;
        local_70 = CONCAT17(bVar2,(undefined7)local_70);
        if (0xff < uVar6) {
          local_70._6_1_ = SUB81(uVar5,6);
          local_70._5_1_ = SUB81(uVar5,5);
          local_70._4_1_ = SUB81(uVar5,4);
          local_70._0_4_ = (undefined4)uVar5;
          local_70._0_5_ = CONCAT14(local_70._4_1_ ^ (byte)(uVar6 >> 0x18),(undefined4)local_70);
          local_70 = CONCAT35(CONCAT21(CONCAT11(bVar2,local_70._6_1_ ^ (byte)(uVar6 >> 8)),
                                       local_70._5_1_ ^ (byte)(uVar6 >> 0x10)),(undefined5)local_70)
          ;
        }
        local_68 = *puVar4;
        (*param_6)(&local_70,&local_70,param_1);
        uVar7 = uVar7 + 8;
        uVar6 = uVar6 - 1;
        *puVar4 = local_68;
        puVar4 = puVar4 + -1;
      } while (uVar7 < __n);
      uVar7 = 0;
      puVar4 = (undefined8 *)((long)param_3 + (param_5 - 0x10));
      do {
        uVar5 = local_70;
        bVar2 = local_70._7_1_ ^ (byte)uVar6;
        local_70 = CONCAT17(bVar2,(undefined7)local_70);
        if (0xff < uVar6) {
          local_70._6_1_ = SUB81(uVar5,6);
          local_70._5_1_ = SUB81(uVar5,5);
          local_70._4_1_ = SUB81(uVar5,4);
          local_70._0_4_ = (undefined4)uVar5;
          local_70._0_5_ = CONCAT14(local_70._4_1_ ^ (byte)(uVar6 >> 0x18),(undefined4)local_70);
          local_70 = CONCAT35(CONCAT21(CONCAT11(bVar2,local_70._6_1_ ^ (byte)(uVar6 >> 8)),
                                       local_70._5_1_ ^ (byte)(uVar6 >> 0x10)),(undefined5)local_70)
          ;
        }
        local_68 = *puVar4;
        (*param_6)(&local_70,&local_70,param_1);
        uVar7 = uVar7 + 8;
        uVar6 = uVar6 - 1;
        *puVar4 = local_68;
        puVar4 = puVar4 + -1;
      } while (uVar7 < __n);
      uVar7 = 0;
      puVar4 = (undefined8 *)((long)param_3 + (param_5 - 0x10));
      do {
        uVar5 = local_70;
        bVar2 = local_70._7_1_ ^ (byte)uVar6;
        local_70 = CONCAT17(bVar2,(undefined7)local_70);
        if (0xff < uVar6) {
          local_70._6_1_ = SUB81(uVar5,6);
          local_70._5_1_ = SUB81(uVar5,5);
          local_70._4_1_ = SUB81(uVar5,4);
          local_70._0_4_ = (undefined4)uVar5;
          local_70._0_5_ = CONCAT14(local_70._4_1_ ^ (byte)(uVar6 >> 0x18),(undefined4)local_70);
          local_70 = CONCAT35(CONCAT21(CONCAT11(bVar2,local_70._6_1_ ^ (byte)(uVar6 >> 8)),
                                       local_70._5_1_ ^ (byte)(uVar6 >> 0x10)),(undefined5)local_70)
          ;
        }
        local_68 = *puVar4;
        (*param_6)(&local_70,&local_70,param_1);
        uVar7 = uVar7 + 8;
        uVar6 = uVar6 - 1;
        *puVar4 = local_68;
        puVar4 = puVar4 + -1;
        uVar5 = local_70;
      } while (uVar7 < __n);
    }
    *param_2 = uVar5;
  }
  return __n;
}


// ===== 003dbb58  FUN_003dbb58 =====

long FUN_003dbb58(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,void *param_4,
                 size_t param_5,code *param_6)

{
  int iVar1;
  ulong uVar2;
  undefined4 local_48;
  undefined1 uStack_44;
  undefined1 uStack_43;
  undefined1 uStack_42;
  undefined1 uStack_41;
  
  if (param_5 - 0x80000000 < 0xffffffff80000001) {
    return 0;
  }
  uVar2 = param_5 + 7 & 0xfffffffffffffff8;
  if (param_2 == (undefined4 *)0x0) {
    local_48 = 0xa65959a6;
  }
  else {
    local_48 = *param_2;
  }
  uStack_41 = (undefined1)param_5;
  uStack_44 = (undefined1)(param_5 >> 0x18);
  uStack_43 = (undefined1)(param_5 >> 0x10);
  uStack_42 = (undefined1)(param_5 >> 8);
  if (uVar2 == 8) {
    memmove(param_3 + 1,param_4,param_5);
    *param_3 = CONCAT17(uStack_41,
                        CONCAT16(uStack_42,CONCAT15(uStack_43,CONCAT14(uStack_44,local_48))));
    memset((void *)((long)(param_3 + 1) + param_5),0,uVar2 - param_5);
    (*param_6)(param_3,param_3,param_1);
    return 0x10;
  }
  memmove(param_3,param_4,param_5);
  memset((void *)((long)param_3 + param_5),0,uVar2 - param_5);
  iVar1 = FUN_003db380(param_1,&local_48,param_3,param_3,uVar2,param_6);
  return (long)iVar1;
}


// ===== 003dbc9c  FUN_003dbc9c =====

ulong FUN_003dbc9c(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 param_4,
                  ulong param_5,code *param_6)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_28;
  
  if (param_5 < 0x10) {
    return 0;
  }
  if ((param_5 & 0xffffffff80000007) != 0) {
    return 0;
  }
  if (param_5 == 0x10) {
    (*param_6)(param_4,&local_50);
    local_28 = local_50;
    *param_3 = uStack_48;
    FUN_003c89b8(&local_50,0x10);
    lVar5 = 8;
  }
  else {
    lVar5 = param_5 - 8;
    lVar3 = FUN_003db7a8(param_1,&local_28,param_3,param_4,param_5);
    if (lVar5 != lVar3) goto LAB_003dbda4;
  }
  if (param_2 == 0) {
    iVar2 = FUN_003c46d4(&local_28,&DAT_002073c0,4);
  }
  else {
    iVar2 = FUN_003c46d4(&local_28,param_2,4);
  }
  if (iVar2 == 0) {
    local_28._4_4_ = (uint)((ulong)local_28 >> 0x20);
    uVar1 = (local_28._4_4_ & 0xff00ff00) >> 8 | (local_28._4_4_ & 0xff00ff) << 8;
    uVar4 = (ulong)(uVar1 >> 0x10 | uVar1 << 0x10);
    if (((param_5 - 0x10 < uVar4) && (uVar4 <= (param_5 & 0xfffffffffffffff8) - 8)) &&
       (iVar2 = FUN_003c46d4((long)param_3 + uVar4,&DAT_007ac2a8,lVar5 - uVar4), iVar2 == 0)) {
      return uVar4;
    }
  }
LAB_003dbda4:
  FUN_003c89b8(param_3,param_5);
  return 0;
}


// ===== 003dbdcc  FUN_003dbdcc =====

undefined8
FUN_003dbdcc(undefined8 *param_1,ulong *param_2,ulong *param_3,ulong *param_4,ulong param_5,
            int param_6)

{
  undefined1 uVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  ulong uVar10;
  ulong local_60 [4];
  
  if (param_5 < 0x10) {
    return 0xffffffff;
  }
  local_60[3] = param_2[1];
  local_60[2] = *param_2;
  auVar9 = (*(code *)param_1[3])(local_60 + 2,local_60 + 2,param_1[1]);
  if ((param_5 & 0xf) != 0 && param_6 == 0) {
    param_5 = param_5 - 0x10;
  }
  while (0xf < param_5) {
    local_60[0] = local_60[2] ^ *param_3;
    local_60[1] = local_60[3] ^ param_3[1];
    (*(code *)param_1[2])(local_60,local_60,*param_1);
    local_60[0] = CONCAT17((byte)(local_60[0] >> 0x38) ^ (byte)(local_60[2] >> 0x38),
                           CONCAT16((byte)(local_60[0] >> 0x30) ^ (byte)(local_60[2] >> 0x30),
                                    CONCAT15((byte)(local_60[0] >> 0x28) ^
                                             (byte)(local_60[2] >> 0x28),
                                             CONCAT14((byte)(local_60[0] >> 0x20) ^
                                                      (byte)(local_60[2] >> 0x20),
                                                      CONCAT13((byte)(local_60[0] >> 0x18) ^
                                                               (byte)(local_60[2] >> 0x18),
                                                               CONCAT12((byte)(local_60[0] >> 0x10)
                                                                        ^ (byte)(local_60[2] >> 0x10
                                                                                ),
                                                                        CONCAT11((byte)(local_60[0]
                                                                                       >> 8) ^
                                                                                 (byte)(local_60[2]
                                                                                       >> 8),
                                                                                 (byte)local_60[0] ^
                                                                                 (byte)local_60[2]))
                                                              )))));
    local_60[1] = CONCAT17((byte)(local_60[1] >> 0x38) ^ (byte)(local_60[3] >> 0x38),
                           CONCAT16((byte)(local_60[1] >> 0x30) ^ (byte)(local_60[3] >> 0x30),
                                    CONCAT15((byte)(local_60[1] >> 0x28) ^
                                             (byte)(local_60[3] >> 0x28),
                                             CONCAT14((byte)(local_60[1] >> 0x20) ^
                                                      (byte)(local_60[3] >> 0x20),
                                                      CONCAT13((byte)(local_60[1] >> 0x18) ^
                                                               (byte)(local_60[3] >> 0x18),
                                                               CONCAT12((byte)(local_60[1] >> 0x10)
                                                                        ^ (byte)(local_60[3] >> 0x10
                                                                                ),
                                                                        CONCAT11((byte)(local_60[1]
                                                                                       >> 8) ^
                                                                                 (byte)(local_60[3]
                                                                                       >> 8),
                                                                                 (byte)local_60[1] ^
                                                                                 (byte)local_60[3]))
                                                              )))));
    auVar9._8_8_ = local_60[1];
    auVar9._0_8_ = local_60[0];
    param_4[1] = local_60[1];
    *param_4 = local_60[0];
    if (param_5 - 0x10 == 0) {
      return 0;
    }
    param_4 = param_4 + 2;
    param_3 = param_3 + 2;
    uVar3 = local_60[2] >> 0x3f;
    local_60[2] = (long)local_60[3] >> 0x3f & 0x87U ^ local_60[2] << 1;
    local_60[3] = uVar3 | local_60[3] << 1;
    param_5 = param_5 - 0x10;
  }
  if (param_6 == 0) {
    uVar3 = 0x87;
    if (-1 < (long)local_60[3]) {
      uVar3 = 0;
    }
    uVar3 = uVar3 ^ local_60[2] << 1;
    uVar7 = local_60[2] >> 0x3f | local_60[3] << 1;
    local_60[0] = *param_3 ^ uVar3;
    local_60[1] = param_3[1] ^ uVar7;
    (*(code *)param_1[2])(local_60,local_60,*param_1);
    local_60[0] = local_60[0] ^ uVar3;
    local_60[1] = local_60[1] ^ uVar7;
    if (param_5 != 0) {
      if (param_5 < 8) {
        uVar3 = 0;
        uVar2 = 0;
      }
      else {
        uVar3 = 0;
        uVar2 = 0;
        if (((~(uint)(param_5 - 1) & 0xfffffff0) != 0) && (uVar2 = 0, param_5 - 1 >> 0x20 == 0)) {
          puVar4 = (ulong *)((long)param_3 + (param_5 | 0x10));
          puVar5 = (ulong *)((long)param_4 + (param_5 | 0x10));
          uVar2 = 0;
          uVar3 = 0;
          if (((ulong *)((long)local_60 + param_5) <= param_4 + 2 || puVar5 <= local_60) &&
             ((puVar4 <= local_60 || (ulong *)((long)local_60 + param_5) <= param_3 + 2 &&
              (puVar4 <= param_4 + 2 || puVar5 <= param_3 + 2)))) {
            uVar3 = param_5 & 8;
            uVar7 = 0;
            uVar2 = (uint)uVar3;
            do {
              uVar10 = (ulong)((int)uVar7 + 0x10);
              uVar8 = *(undefined8 *)((long)param_3 + uVar10);
              *(undefined8 *)((long)param_4 + uVar10) = *(undefined8 *)((long)local_60 + uVar7);
              *(undefined8 *)((long)local_60 + uVar7) = uVar8;
              uVar7 = uVar7 + 8;
            } while (uVar3 != uVar7);
            if (param_5 == uVar3) goto LAB_003dbfe0;
          }
        }
      }
      uVar2 = uVar2 | 0x10;
      do {
        uVar1 = *(undefined1 *)((long)param_3 + (ulong)uVar2);
        *(undefined1 *)((long)param_4 + (ulong)uVar2) = *(undefined1 *)((long)local_60 + uVar3);
        *(undefined1 *)((long)local_60 + uVar3) = uVar1;
        uVar3 = (ulong)(uVar2 - 0xf);
        uVar2 = uVar2 + 1;
      } while (uVar3 < param_5);
    }
LAB_003dbfe0:
    local_60[0] = local_60[0] ^ local_60[2];
    local_60[1] = local_60[1] ^ local_60[3];
    (*(code *)param_1[2])(local_60,local_60,*param_1);
    param_4[1] = CONCAT17((byte)(local_60[3] >> 0x38) ^ (byte)(local_60[1] >> 0x38),
                          CONCAT16((byte)(local_60[3] >> 0x30) ^ (byte)(local_60[1] >> 0x30),
                                   CONCAT15((byte)(local_60[3] >> 0x28) ^
                                            (byte)(local_60[1] >> 0x28),
                                            CONCAT14((byte)(local_60[3] >> 0x20) ^
                                                     (byte)(local_60[1] >> 0x20),
                                                     CONCAT13((byte)(local_60[3] >> 0x18) ^
                                                              (byte)(local_60[1] >> 0x18),
                                                              CONCAT12((byte)(local_60[3] >> 0x10) ^
                                                                       (byte)(local_60[1] >> 0x10),
                                                                       CONCAT11((byte)(local_60[3]
                                                                                      >> 8) ^
                                                                                (byte)(local_60[1]
                                                                                      >> 8),
                                                                                (byte)local_60[3] ^
                                                                                (byte)local_60[1])))
                                                    ))));
    *param_4 = CONCAT17((byte)(local_60[2] >> 0x38) ^ (byte)(local_60[0] >> 0x38),
                        CONCAT16((byte)(local_60[2] >> 0x30) ^ (byte)(local_60[0] >> 0x30),
                                 CONCAT15((byte)(local_60[2] >> 0x28) ^ (byte)(local_60[0] >> 0x28),
                                          CONCAT14((byte)(local_60[2] >> 0x20) ^
                                                   (byte)(local_60[0] >> 0x20),
                                                   CONCAT13((byte)(local_60[2] >> 0x18) ^
                                                            (byte)(local_60[0] >> 0x18),
                                                            CONCAT12((byte)(local_60[2] >> 0x10) ^
                                                                     (byte)(local_60[0] >> 0x10),
                                                                     CONCAT11((byte)(local_60[2] >>
                                                                                    8) ^
                                                                              (byte)(local_60[0] >>
                                                                                    8),(byte)
                                                  local_60[2] ^ (byte)local_60[0])))))));
    return 0;
  }
  if (param_5 != 0) {
    if (param_5 < 8) {
      uVar3 = 0;
      uVar2 = 0;
    }
    else {
      uVar3 = 0;
      uVar2 = 0;
      if (((int)(param_5 - 1) != -1) && (uVar2 = 0, param_5 - 1 >> 0x20 == 0)) {
        uVar2 = 0;
        uVar3 = 0;
        if (((ulong *)((long)param_4 + param_5) <= local_60 ||
             (ulong *)((long)local_60 + param_5) <= param_4) &&
           (((ulong *)((long)param_3 + param_5) <= param_4 ||
             (ulong *)((long)param_4 + param_5) <= param_3 &&
            ((ulong *)((long)param_3 + param_5) <= local_60 ||
             (ulong *)((long)local_60 + param_5) <= param_3)))) {
          uVar3 = param_5 & 8;
          uVar2 = (uint)uVar3;
          puVar4 = local_60;
          uVar7 = uVar3;
          puVar5 = param_4;
          puVar6 = param_3;
          do {
            uVar10 = *puVar6;
            uVar7 = uVar7 - 8;
            *puVar5 = *puVar4;
            *puVar4 = uVar10;
            auVar9._8_8_ = local_60[1];
            auVar9._0_8_ = local_60[0];
            puVar4 = puVar4 + 1;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          } while (uVar7 != 0);
          if (param_5 == uVar3) goto LAB_003dbefc;
        }
      }
    }
    do {
      uVar1 = *(undefined1 *)((long)param_3 + uVar3);
      *(undefined1 *)((long)param_4 + uVar3) = *(undefined1 *)((long)local_60 + uVar3);
      *(undefined1 *)((long)local_60 + uVar3) = uVar1;
      auVar9._8_8_ = local_60[1];
      auVar9._0_8_ = local_60[0];
      uVar3 = (ulong)(uVar2 + 1);
      uVar2 = uVar2 + 1;
    } while (uVar3 < param_5);
  }
LAB_003dbefc:
  local_60[0] = CONCAT17(auVar9[7] ^ (byte)(local_60[2] >> 0x38),
                         CONCAT16(auVar9[6] ^ (byte)(local_60[2] >> 0x30),
                                  CONCAT15(auVar9[5] ^ (byte)(local_60[2] >> 0x28),
                                           CONCAT14(auVar9[4] ^ (byte)(local_60[2] >> 0x20),
                                                    CONCAT13(auVar9[3] ^ (byte)(local_60[2] >> 0x18)
                                                             ,CONCAT12(auVar9[2] ^
                                                                       (byte)(local_60[2] >> 0x10),
                                                                       CONCAT11(auVar9[1] ^
                                                                                (byte)(local_60[2]
                                                                                      >> 8),
                                                                                auVar9[0] ^
                                                                                (byte)local_60[2])))
                                                   ))));
  local_60[1] = CONCAT17(auVar9[0xf] ^ (byte)(local_60[3] >> 0x38),
                         CONCAT16(auVar9[0xe] ^ (byte)(local_60[3] >> 0x30),
                                  CONCAT15(auVar9[0xd] ^ (byte)(local_60[3] >> 0x28),
                                           CONCAT14(auVar9[0xc] ^ (byte)(local_60[3] >> 0x20),
                                                    CONCAT13(auVar9[0xb] ^
                                                             (byte)(local_60[3] >> 0x18),
                                                             CONCAT12(auVar9[10] ^
                                                                      (byte)(local_60[3] >> 0x10),
                                                                      CONCAT11(auVar9[9] ^
                                                                               (byte)(local_60[3] >>
                                                                                     8),auVar9[8] ^
                                                                                        (byte)
                                                  local_60[3])))))));
  (*(code *)param_1[2])(local_60,local_60,*param_1);
  param_4[-1] = CONCAT17((byte)(local_60[1] >> 0x38) ^ (byte)(local_60[3] >> 0x38),
                         CONCAT16((byte)(local_60[1] >> 0x30) ^ (byte)(local_60[3] >> 0x30),
                                  CONCAT15((byte)(local_60[1] >> 0x28) ^ (byte)(local_60[3] >> 0x28)
                                           ,CONCAT14((byte)(local_60[1] >> 0x20) ^
                                                     (byte)(local_60[3] >> 0x20),
                                                     CONCAT13((byte)(local_60[1] >> 0x18) ^
                                                              (byte)(local_60[3] >> 0x18),
                                                              CONCAT12((byte)(local_60[1] >> 0x10) ^
                                                                       (byte)(local_60[3] >> 0x10),
                                                                       CONCAT11((byte)(local_60[1]
                                                                                      >> 8) ^
                                                                                (byte)(local_60[3]
                                                                                      >> 8),
                                                                                (byte)local_60[1] ^
                                                                                (byte)local_60[3])))
                                                    ))));
  param_4[-2] = CONCAT17((byte)(local_60[0] >> 0x38) ^ (byte)(local_60[2] >> 0x38),
                         CONCAT16((byte)(local_60[0] >> 0x30) ^ (byte)(local_60[2] >> 0x30),
                                  CONCAT15((byte)(local_60[0] >> 0x28) ^ (byte)(local_60[2] >> 0x28)
                                           ,CONCAT14((byte)(local_60[0] >> 0x20) ^
                                                     (byte)(local_60[2] >> 0x20),
                                                     CONCAT13((byte)(local_60[0] >> 0x18) ^
                                                              (byte)(local_60[2] >> 0x18),
                                                              CONCAT12((byte)(local_60[0] >> 0x10) ^
                                                                       (byte)(local_60[2] >> 0x10),
                                                                       CONCAT11((byte)(local_60[0]
                                                                                      >> 8) ^
                                                                                (byte)(local_60[2]
                                                                                      >> 8),
                                                                                (byte)local_60[0] ^
                                                                                (byte)local_60[2])))
                                                    ))));
  return 0;
}


// ===== 003dc194  FUN_003dc194 =====

undefined4 FUN_003dc194(void)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_003d51c8(&DAT_007ac2b0,FUN_003dc1d0);
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar1 = DAT_007ac2b4;
  }
  return uVar1;
}


// ===== 003dc1d0  FUN_003dc1d0 =====

void FUN_003dc1d0(void)

{
  uint uVar1;
  
  DAT_007ac2d0 = 0;
  DAT_007ac2c0 = FUN_003d5150();
  if (DAT_007ac2c0 != 0) {
    DAT_007ac2d0 = FUN_003b8a34(FUN_003dcab4,FUN_003dcb2c);
  }
  if (DAT_007ac2d0 == 0) {
    FUN_003d51ac();
    DAT_007ac2c0 = 0;
    uVar1 = (uint)(DAT_007ac2d0 != 0);
  }
  else {
    uVar1 = 1;
  }
  DAT_007ac2b4 = 0;
  if (DAT_007ac2c0 != 0) {
    DAT_007ac2b4 = uVar1;
  }
  return;
}


// ===== 003dc260  FUN_003dc260 =====

int FUN_003dc260(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  long *plVar8;
  
  iVar4 = FUN_003d51c8(&DAT_007ac2b0,FUN_003dc1d0);
  iVar5 = 0;
  if ((iVar4 != 0) && (DAT_007ac2b4 != 0)) {
    iVar5 = FUN_003d518c(DAT_007ac2c0);
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      if ((DAT_007ac2c8 == 0) && (DAT_007ac2c8 = FUN_0040bf0c(), DAT_007ac2c8 == 0)) {
        iVar5 = 0;
      }
      else {
        iVar5 = DAT_007a8a20;
        DAT_007a8a20 = DAT_007a8a20 + 1;
        iVar4 = FUN_0040caf8();
        puVar2 = PTR_FUN_007a1af0;
        puVar1 = PTR_FUN_007a1ae8;
        if (iVar4 < DAT_007a8a20) {
          do {
            puVar7 = (undefined8 *)FUN_003c8474(0x18,"crypto/objects/o_names.c",0x5a);
            lVar3 = DAT_007ac2c8;
            if (puVar7 == (undefined8 *)0x0) {
LAB_003dc3d4:
              iVar5 = 0;
              goto LAB_003dc3e4;
            }
            *puVar7 = puVar1;
            puVar7[1] = puVar2;
            iVar6 = FUN_0040c89c(lVar3,puVar7);
            if (iVar6 == 0) {
              FUN_00379868();
              FUN_0037995c("crypto/objects/o_names.c",100,"OBJ_NAME_new_index");
              FUN_00379a5c(8,0x8000f,0);
              FUN_003c86b4(puVar7,"crypto/objects/o_names.c",0x65);
              goto LAB_003dc3d4;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < DAT_007a8a20);
        }
        plVar8 = (long *)FUN_0040cb0c(DAT_007ac2c8,iVar5);
        if (param_1 != 0) {
          *plVar8 = param_1;
        }
        if (param_2 != 0) {
          plVar8[1] = param_2;
        }
        if (param_3 != 0) {
          plVar8[2] = param_3;
        }
      }
LAB_003dc3e4:
      FUN_003d519c(DAT_007ac2c0);
    }
  }
  return iVar5;
}


// ===== 003dc410  FUN_003dc410 =====

undefined8 FUN_003dc410(long param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  uint local_48 [2];
  long local_40;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = FUN_003d51c8(&DAT_007ac2b0,FUN_003dc1d0);
  if (iVar1 == 0) {
    return 0;
  }
  if (DAT_007ac2b4 == 0) {
    return 0;
  }
  iVar1 = FUN_003d517c(DAT_007ac2c0);
  if (iVar1 == 0) {
    return 0;
  }
  local_48[0] = param_2 & 0xffff7fff;
  local_40 = param_1;
  lVar2 = FUN_003b908c(DAT_007ac2d0,local_48);
  if (lVar2 == 0) {
LAB_003dc5d8:
    uVar3 = 0;
  }
  else {
    if (((param_2 >> 0xf & 1) == 0) && (*(int *)(lVar2 + 4) != 0)) {
      local_40 = *(long *)(lVar2 + 0x10);
      lVar2 = FUN_003b908c(DAT_007ac2d0,local_48);
      if (lVar2 == 0) goto LAB_003dc5d8;
      if (*(int *)(lVar2 + 4) != 0) {
        local_40 = *(long *)(lVar2 + 0x10);
        lVar2 = FUN_003b908c(DAT_007ac2d0,local_48);
        if (lVar2 == 0) goto LAB_003dc5d8;
        if (*(int *)(lVar2 + 4) != 0) {
          local_40 = *(long *)(lVar2 + 0x10);
          lVar2 = FUN_003b908c(DAT_007ac2d0,local_48);
          if (lVar2 == 0) goto LAB_003dc5d8;
          if (*(int *)(lVar2 + 4) != 0) {
            local_40 = *(long *)(lVar2 + 0x10);
            lVar2 = FUN_003b908c(DAT_007ac2d0,local_48);
            if (lVar2 == 0) goto LAB_003dc5d8;
            if (*(int *)(lVar2 + 4) != 0) {
              local_40 = *(long *)(lVar2 + 0x10);
              lVar2 = FUN_003b908c(DAT_007ac2d0,local_48);
              if (lVar2 == 0) goto LAB_003dc5d8;
              if (*(int *)(lVar2 + 4) != 0) {
                local_40 = *(long *)(lVar2 + 0x10);
                lVar2 = FUN_003b908c(DAT_007ac2d0,local_48);
                if (lVar2 == 0) goto LAB_003dc5d8;
                if (*(int *)(lVar2 + 4) != 0) {
                  local_40 = *(long *)(lVar2 + 0x10);
                  lVar2 = FUN_003b908c(DAT_007ac2d0,local_48);
                  if (lVar2 == 0) goto LAB_003dc5d8;
                  if (*(int *)(lVar2 + 4) != 0) {
                    local_40 = *(long *)(lVar2 + 0x10);
                    lVar2 = FUN_003b908c(DAT_007ac2d0,local_48);
                    if (lVar2 == 0) goto LAB_003dc5d8;
                    if (*(int *)(lVar2 + 4) != 0) {
                      local_40 = *(long *)(lVar2 + 0x10);
                      lVar2 = FUN_003b908c(DAT_007ac2d0,local_48);
                      if (lVar2 == 0) goto LAB_003dc5d8;
                      if (*(int *)(lVar2 + 4) != 0) {
                        local_40 = *(long *)(lVar2 + 0x10);
                        lVar2 = FUN_003b908c(DAT_007ac2d0,local_48);
                        if ((lVar2 == 0) || (*(int *)(lVar2 + 4) != 0)) goto LAB_003dc5d8;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar3 = *(undefined8 *)(lVar2 + 0x10);
  }
  FUN_003d519c(DAT_007ac2c0);
  return uVar3;
}


// ===== 003dc60c  FUN_003dc60c =====

ulong * FUN_003dc60c(ulong param_1,undefined4 param_2,ulong param_3)

{
  ulong uVar1;
  int iVar2;
  ulong *puVar3;
  int *piVar4;
  long lVar5;
  uint uVar6;
  
  iVar2 = FUN_003d51c8(&DAT_007ac2b0,FUN_003dc1d0);
  puVar3 = (ulong *)0x0;
  if (((iVar2 == 0) || (DAT_007ac2b4 == 0)) ||
     (puVar3 = (ulong *)FUN_003c83a4(0x18,"crypto/objects/o_names.c",199), uVar1 = DAT_001b71c8,
     puVar3 == (ulong *)0x0)) {
    return puVar3;
  }
  puVar3[1] = param_1;
  puVar3[2] = param_3;
  *puVar3 = CONCAT44(param_2,param_2) & uVar1;
  iVar2 = FUN_003d518c(DAT_007ac2c0);
  if (iVar2 == 0) {
    FUN_003c86b4(puVar3,"crypto/objects/o_names.c",0xd1);
    return (ulong *)0x0;
  }
  piVar4 = (int *)FUN_003b8ca4(DAT_007ac2d0,puVar3);
  if (piVar4 == (int *)0x0) {
    iVar2 = FUN_003b92bc(DAT_007ac2d0);
    if (iVar2 != 0) {
      FUN_003c86b4(puVar3,"crypto/objects/o_names.c",0xe6);
      uVar6 = 0;
      goto LAB_003dc74c;
    }
  }
  else {
    if ((DAT_007ac2c8 != 0) && (iVar2 = FUN_0040caf8(), *piVar4 < iVar2)) {
      lVar5 = FUN_0040cb0c(DAT_007ac2c8);
      (**(code **)(lVar5 + 0x10))(*(undefined8 *)(piVar4 + 2),*piVar4,*(undefined8 *)(piVar4 + 4));
    }
    FUN_003c86b4(piVar4,"crypto/objects/o_names.c",0xe2);
  }
  uVar6 = 1;
LAB_003dc74c:
  FUN_003d519c(DAT_007ac2c0);
  return (ulong *)(ulong)uVar6;
}


// ===== 003dc768  FUN_003dc768 =====

ulong FUN_003dc768(undefined8 param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  long lVar4;
  uint local_48 [2];
  undefined8 local_40;
  
  iVar1 = FUN_003d51c8(&DAT_007ac2b0,FUN_003dc1d0);
  uVar2 = 0;
  if (((iVar1 != 0) && (DAT_007ac2b4 != 0)) && (uVar2 = FUN_003d518c(DAT_007ac2c0), (int)uVar2 != 0)
     ) {
    local_48[0] = param_2 & 0xffff7fff;
    local_40 = param_1;
    piVar3 = (int *)FUN_003b8ea4(DAT_007ac2d0,local_48);
    if (piVar3 != (int *)0x0) {
      if (DAT_007ac2c8 != 0) {
        iVar1 = FUN_0040caf8();
        if (*piVar3 < iVar1) {
          lVar4 = FUN_0040cb0c(DAT_007ac2c8);
          (**(code **)(lVar4 + 0x10))
                    (*(undefined8 *)(piVar3 + 2),*piVar3,*(undefined8 *)(piVar3 + 4));
        }
      }
      FUN_003c86b4(piVar3,"crypto/objects/o_names.c",0x10d);
      piVar3 = (int *)0x1;
    }
    FUN_003d519c(DAT_007ac2c0);
    uVar2 = (ulong)piVar3 & 0xffffffff;
  }
  return uVar2;
}


// ===== 003dc850  FUN_003dc850 =====

void FUN_003dc850(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 local_28 [2];
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_28[0] = param_1;
  local_20 = param_2;
  uStack_18 = param_3;
  FUN_003b91c8(DAT_007ac2d0,FUN_003dc888,local_28);
  return;
}


// ===== 003dc888  FUN_003dc888 =====

void FUN_003dc888(int *param_1,int *param_2)

{
  if (*param_1 == *param_2) {
                    /* WARNING: Could not recover jumptable at 0x003dc8a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2 + 2))(param_1,*(undefined8 *)(param_2 + 4));
    return;
  }
  return;
}


// ===== 003dc8a8  FUN_003dc8a8 =====

void FUN_003dc8a8(undefined4 param_1,code *param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 local_58;
  int local_54;
  void *local_50;
  undefined4 local_48 [2];
  code *local_40;
  undefined4 *puStack_38;
  
  local_58 = param_1;
  lVar1 = FUN_003b92a0(DAT_007ac2d0);
  local_50 = (void *)FUN_003c83a4(lVar1 << 3,"crypto/objects/o_names.c",0x150);
  if (local_50 != (void *)0x0) {
    puStack_38 = &local_58;
    local_54 = 0;
    local_40 = FUN_003dc990;
    local_48[0] = param_1;
    FUN_003b91c8(DAT_007ac2d0,FUN_003dc888,local_48);
    qsort(local_50,(long)local_54,8,FUN_003dc9b8);
    if (0 < local_54) {
      lVar1 = 0;
      do {
        (*param_2)(*(undefined8 *)((long)local_50 + lVar1 * 8),param_3);
        lVar1 = lVar1 + 1;
      } while (lVar1 < local_54);
    }
    FUN_003c86b4(local_50,"crypto/objects/o_names.c",0x15b);
  }
  return;
}


// ===== 003dc990  FUN_003dc990 =====

void FUN_003dc990(int *param_1,int *param_2)

{
  int iVar1;
  
  if (*param_1 == *param_2) {
    iVar1 = param_2[1];
    *(int **)(*(long *)(param_2 + 2) + (long)iVar1 * 8) = param_1;
    param_2[1] = iVar1 + 1;
  }
  return;
}


// ===== 003dc9b8  FUN_003dc9b8 =====

int FUN_003dc9b8(long *param_1,long *param_2)

{
  int iVar1;
  
  iVar1 = strcmp(*(char **)(*param_1 + 8),*(char **)(*param_2 + 8));
  return iVar1;
}


// ===== 003dc9cc  FUN_003dc9cc =====

void FUN_003dc9cc(int param_1)

{
  undefined8 uVar1;
  
  if (DAT_007ac2d0 != 0) {
    DAT_007ac2b8 = param_1;
    uVar1 = FUN_003b92ac(DAT_007ac2d0);
    FUN_003b92b4(DAT_007ac2d0,0);
    FUN_003b9160(DAT_007ac2d0,FUN_003dca7c);
    if (-1 < param_1) {
      FUN_003b92b4(DAT_007ac2d0,uVar1);
      return;
    }
    FUN_003b8b74(DAT_007ac2d0);
    FUN_0040ca6c(DAT_007ac2c8,FUN_003dcaa4);
    FUN_003d51ac(DAT_007ac2c0);
    DAT_007ac2c8 = 0;
    DAT_007ac2d0 = 0;
    DAT_007ac2c0 = 0;
  }
  return;
}


// ===== 003dca7c  FUN_003dca7c =====

void FUN_003dca7c(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if ((DAT_007ac2b8 < 0) || (DAT_007ac2b8 == *param_1)) {
      FUN_003dc768(*(undefined8 *)(param_1 + 2));
      return;
    }
  }
  return;
}


// ===== 003dcaa4  FUN_003dcaa4 =====

void FUN_003dcaa4(undefined8 param_1)

{
  FUN_003c86b4(param_1,"crypto/objects/o_names.c",0x16c);
  return;
}


// ===== 003dcab4  FUN_003dcab4 =====

ulong FUN_003dcab4(int *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  if (DAT_007ac2c8 != 0) {
    iVar1 = FUN_0040caf8(DAT_007ac2c8);
    if (*param_1 < iVar1) {
      puVar2 = (undefined8 *)FUN_0040cb0c(DAT_007ac2c8);
      uVar3 = (*(code *)*puVar2)(*(undefined8 *)(param_1 + 2));
      return uVar3 ^ (long)*param_1;
    }
  }
  uVar3 = FUN_003b923c(*(undefined8 *)(param_1 + 2));
  return uVar3 ^ (long)*param_1;
}


// ===== 003dcb2c  FUN_003dcb2c =====

ulong FUN_003dcb2c(int *param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if (*param_1 - *param_2 != 0) {
    return (ulong)(uint)(*param_1 - *param_2);
  }
  if (DAT_007ac2c8 != 0) {
    iVar1 = FUN_0040caf8();
    if (*param_1 < iVar1) {
      lVar2 = FUN_0040cb0c(DAT_007ac2c8,*param_1);
                    /* WARNING: Could not recover jumptable at 0x003dcbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(lVar2 + 8))(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
      return uVar3;
    }
  }
  uVar3 = FUN_003cab04(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
  return uVar3;
}


// ===== 003dcbcc  FUN_003dcbcc =====

void FUN_003dcbcc(void)

{
  if (DAT_007ac2e0 != 0) {
    FUN_003b92b4(DAT_007ac2e0,0);
    FUN_003b9160(DAT_007ac2e0,FUN_003dcc44);
    FUN_003b9160(DAT_007ac2e0,FUN_003dcc60);
    FUN_003b9160(DAT_007ac2e0,FUN_003dcc74);
    FUN_003b8b74(DAT_007ac2e0);
    DAT_007ac2e0 = 0;
  }
  FUN_003d51ac(DAT_007ac2e8);
  DAT_007ac2e8 = 0;
  return;
}


// ===== 003dcc44  FUN_003dcc44 =====

void FUN_003dcc44(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  *(undefined4 *)(lVar1 + 0x10) = 0;
  *(uint *)(lVar1 + 0x20) = *(uint *)(lVar1 + 0x20) | 0xd;
  return;
}


// ===== 003dcc60  FUN_003dcc60 =====

void FUN_003dcc60(long param_1)

{
  *(int *)(*(long *)(param_1 + 8) + 0x10) = *(int *)(*(long *)(param_1 + 8) + 0x10) + 1;
  return;
}


// ===== 003dcc74  FUN_003dcc74 =====

void FUN_003dcc74(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  iVar1 = *(int *)(lVar2 + 0x10) + -1;
  *(int *)(lVar2 + 0x10) = iVar1;
  if (iVar1 != 0) {
    FUN_003c86b4(param_1,"crypto/objects/obj_dat.c",0xd0);
    return;
  }
  FUN_0039a0f4(lVar2);
  FUN_003c86b4(param_1,"crypto/objects/obj_dat.c",0xd0);
  return;
}


// ===== 003dcccc  FUN_003dcccc =====

void FUN_003dcccc(undefined8 param_1)

{
  FUN_00755bc0(param_1,&DAT_007a8a24);
  return;
}


// ===== 003dcce8  FUN_003dcce8 =====

undefined ** FUN_003dcce8(uint param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [16];
  uint local_48;
  undefined4 local_30 [2];
  undefined1 *local_28;
  
  if (param_1 == 0) {
    return &PTR_s_UNDEF_0076bdf8;
  }
  if ((param_1 < 0x528) && (*(int *)(&DAT_0076be08 + (ulong)param_1 * 0x28) != 0)) {
    return &PTR_s_UNDEF_0076bdf8 + (ulong)param_1 * 5;
  }
  local_28 = auStack_58;
  local_30[0] = 3;
  local_48 = param_1;
  iVar1 = FUN_003d51c8(&DAT_007ac2d8,FUN_003dded4);
  if ((iVar1 == 0) || ((DAT_007ac2dc == 0 || (iVar1 = FUN_003d517c(DAT_007ac2e8), iVar1 == 0)))) {
    FUN_00379868();
    FUN_0037995c("crypto/objects/obj_dat.c",0x14b,"OBJ_nid2obj");
    uVar3 = 0xc010f;
  }
  else {
    if (DAT_007ac2e0 == 0) {
      FUN_003d519c(DAT_007ac2e8);
    }
    else {
      lVar2 = FUN_003b908c(DAT_007ac2e0,local_30);
      FUN_003d519c(DAT_007ac2e8);
      if (lVar2 != 0) {
        return *(undefined ***)(lVar2 + 8);
      }
    }
    FUN_00379868();
    FUN_0037995c("crypto/objects/obj_dat.c",0x154,"OBJ_nid2obj");
    uVar3 = 0x65;
  }
  FUN_00379a5c(8,uVar3,0);
  return (undefined **)0x0;
}


// ===== 003dce44  FUN_003dce44 =====

long * FUN_003dce44(void)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_003dcce8();
  if (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
  }
  return plVar1;
}


// ===== 003dce60  FUN_003dce60 =====

long FUN_003dce60(void)

{
  long lVar1;
  
  lVar1 = FUN_003dcce8();
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 8);
  }
  return lVar1;
}


// ===== 003dce7c  FUN_003dce7c =====

long FUN_003dce7c(undefined1 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long local_40;
  long local_38;
  
  if (param_2 == 0) {
    iVar1 = FUN_003dcff4(param_1);
    if ((iVar1 != 0) || (iVar1 = FUN_003dd128(param_1), iVar1 != 0)) {
      lVar4 = FUN_003dcce8();
      return lVar4;
    }
    iVar1 = FUN_003c4784(*param_1);
    if (iVar1 == 0) {
      FUN_00379868();
      FUN_0037995c("crypto/objects/obj_dat.c",0x1aa,"OBJ_txt2obj");
      FUN_00379a5c(8,0x67,0);
      return 0;
    }
  }
  iVar1 = FUN_00399674(0,0,param_1,0xffffffff);
  if (0 < iVar1) {
    iVar2 = FUN_0038eadc(0,iVar1,6);
    if (-1 < iVar2) {
      lVar3 = FUN_003c83a4(iVar2,"crypto/objects/obj_dat.c",0x1b9);
      lVar4 = lVar3;
      if (lVar3 != 0) {
        local_38 = lVar3;
        FUN_0038e9b8(&local_38,0,iVar1,6,0);
        FUN_00399674(local_38,iVar1,param_1,0xffffffff);
        local_40 = lVar3;
        lVar4 = FUN_00399cd0(0,&local_40,iVar2);
        FUN_003c86b4(lVar3,"crypto/objects/obj_dat.c",0x1c4);
      }
      return lVar4;
    }
  }
  return 0;
}


// ===== 003dcff4  FUN_003dcff4 =====

undefined4 FUN_003dcff4(undefined8 param_1)

{
  int iVar1;
  uint *puVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 local_60 [2];
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 local_48 [5];
  
  local_50 = local_48;
  local_48[0] = param_1;
  puVar2 = (uint *)FUN_003de3b8(&local_50,&DAT_00208840,0x51f,4,FUN_003ddf24,0);
  if (puVar2 != (uint *)0x0) {
    return *(undefined4 *)(&DAT_0076be08 + (ulong)*puVar2 * 0x28);
  }
  iVar1 = FUN_003d51c8(&DAT_007ac2d8,FUN_003dded4);
  if (((iVar1 == 0) || (DAT_007ac2dc == 0)) || (iVar1 = FUN_003d517c(DAT_007ac2e8), iVar1 == 0)) {
    FUN_00379868();
    FUN_0037995c("crypto/objects/obj_dat.c",0x298,"OBJ_sn2nid");
    FUN_00379a5c(8,0xc010f,0);
    return 0;
  }
  if (DAT_007ac2e0 != 0) {
    local_58 = local_48;
    local_60[0] = 1;
    lVar3 = FUN_003b908c(DAT_007ac2e0,local_60);
    if (lVar3 != 0) {
      uVar4 = *(undefined4 *)(*(long *)(lVar3 + 8) + 0x10);
      goto LAB_003dd10c;
    }
  }
  uVar4 = 0;
LAB_003dd10c:
  FUN_003d519c(DAT_007ac2e8);
  return uVar4;
}


// ===== 003dd128  FUN_003dd128 =====

undefined4 FUN_003dd128(undefined8 param_1)

{
  int iVar1;
  uint *puVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 local_60 [2];
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 auStack_48 [8];
  undefined8 local_40;
  
  local_50 = auStack_48;
  local_40 = param_1;
  puVar2 = (uint *)FUN_003de3b8(&local_50,&DAT_002073c4,0x51f,4,FUN_003ddf00,0);
  if (puVar2 != (uint *)0x0) {
    return *(undefined4 *)(&DAT_0076be08 + (ulong)*puVar2 * 0x28);
  }
  iVar1 = FUN_003d51c8(&DAT_007ac2d8,FUN_003dded4);
  if (((iVar1 == 0) || (DAT_007ac2dc == 0)) || (iVar1 = FUN_003d517c(DAT_007ac2e8), iVar1 == 0)) {
    FUN_00379868();
    FUN_0037995c("crypto/objects/obj_dat.c",0x27d,"OBJ_ln2nid");
    FUN_00379a5c(8,0xc010f,0);
    return 0;
  }
  if (DAT_007ac2e0 != 0) {
    local_58 = auStack_48;
    local_60[0] = 2;
    lVar3 = FUN_003b908c(DAT_007ac2e0,local_60);
    if (lVar3 != 0) {
      uVar4 = *(undefined4 *)(*(long *)(lVar3 + 8) + 0x10);
      goto LAB_003dd244;
    }
  }
  uVar4 = 0;
LAB_003dd244:
  FUN_003d519c(DAT_007ac2e8);
  return uVar4;
}


// ===== 003dd260  FUN_003dd260 =====

ulong FUN_003dd260(byte *param_1,uint param_2,long param_3,int param_4)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  long *plVar8;
  byte bVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  long lVar14;
  int iVar15;
  size_t sVar16;
  char *pcVar17;
  ulong uVar18;
  long lVar19;
  char acStack_85 [37];
  
  if ((param_1 != (byte *)0x0) && (0 < (int)param_2)) {
    *param_1 = 0;
  }
  if ((param_3 == 0) || (*(long *)(param_3 + 0x18) == 0)) {
    sVar16 = 0;
  }
  else if (((param_4 == 0) && (iVar6 = FUN_003dda2c(param_3,1), iVar6 != 0)) &&
          (((lVar14 = FUN_003dcce8(), lVar14 != 0 &&
            (pcVar17 = *(char **)(lVar14 + 8), pcVar17 != (char *)0x0)) ||
           ((plVar8 = (long *)FUN_003dcce8(iVar6), plVar8 != (long *)0x0 &&
            (pcVar17 = (char *)*plVar8, pcVar17 != (char *)0x0)))))) {
    if (param_1 != (byte *)0x0) {
      FUN_003ca460(param_1,pcVar17,(long)(int)param_2);
    }
    sVar16 = strlen(pcVar17);
  }
  else {
    iVar6 = *(int *)(param_3 + 0x14);
    if (iVar6 < 0x24b) {
      if (iVar6 < 1) {
        sVar16 = 0;
        lVar14 = 0;
      }
      else {
        pcVar17 = *(char **)(param_3 + 0x18);
        lVar14 = 0;
        bVar4 = false;
        sVar16 = 0;
        do {
          iVar15 = (int)sVar16;
          cVar2 = *pcVar17;
          uVar10 = (ulong)cVar2;
          if ((iVar6 + -1 == 0) && (cVar2 < 0)) goto LAB_003dd2b8;
          uVar18 = 0;
          bVar3 = false;
          uVar13 = (uint)~(int)cVar2 >> 0x1f;
          pcVar7 = pcVar17 + 1;
          iVar5 = iVar6 + -1;
          while( true ) {
            iVar6 = iVar5;
            pcVar17 = pcVar7;
            if (bVar3) {
              iVar5 = FUN_0039928c(lVar14);
              if (iVar5 == 0) goto LAB_003dd2b8;
            }
            else {
              uVar18 = uVar18 | uVar10 & 0x7f;
            }
            if (uVar13 != 0) break;
            if ((bVar3) || (uVar18 >> 0x39 == 0)) {
              if (bVar3) goto LAB_003dd3a8;
              uVar18 = uVar18 << 7;
              cVar2 = *pcVar17;
            }
            else {
              if (((lVar14 == 0) && (lVar14 = FUN_0038f584(), lVar14 == 0)) ||
                 (iVar5 = FUN_0038f9ec(lVar14,uVar18), iVar5 == 0)) goto LAB_003dd2b8;
              bVar3 = true;
LAB_003dd3a8:
              iVar5 = FUN_0039844c(lVar14,lVar14,7);
              if (iVar5 == 0) goto LAB_003dd2b8;
              cVar2 = *pcVar17;
            }
            uVar13 = (uint)~(int)cVar2 >> 0x1f;
            uVar10 = (ulong)cVar2;
            pcVar7 = pcVar17 + 1;
            iVar5 = iVar6 + -1;
            if (iVar6 + -1 == 0) {
              pcVar7 = pcVar17 + 1;
              iVar5 = iVar6 + -1;
              if (cVar2 < '\0') goto LAB_003dd2b8;
            }
          }
          pbVar11 = param_1;
          uVar10 = uVar18;
          if (!bVar4) {
            uVar10 = uVar18 - 0x50;
            if (uVar18 < 0x50) {
              lVar19 = -0x28;
              if (uVar18 < 0x28) {
                lVar19 = 0;
              }
              bVar9 = 0x27 < uVar18;
              uVar10 = lVar19 + uVar18;
            }
            else if (bVar3) {
              iVar5 = FUN_003993bc(lVar14,0x50);
              if (iVar5 == 0) goto LAB_003dd2b8;
              bVar9 = 2;
              uVar10 = uVar18;
            }
            else {
              bVar9 = 2;
            }
            if ((param_1 != (byte *)0x0) && (1 < (int)param_2)) {
              param_2 = param_2 - 1;
              pbVar11 = param_1 + 1;
              *pbVar11 = 0;
              *param_1 = bVar9 | 0x30;
            }
            iVar15 = iVar15 + 1;
          }
          if (bVar3) {
            pcVar7 = (char *)FUN_003cff6c(lVar14);
            if (pcVar7 == (char *)0x0) goto LAB_003dd2b8;
            sVar16 = strlen(pcVar7);
            iVar5 = (int)sVar16;
            if (pbVar11 != (byte *)0x0) {
              pbVar12 = pbVar11;
              if (1 < (int)param_2) {
                param_2 = param_2 - 1;
                pbVar12 = pbVar11 + 1;
                pbVar11[0] = 0x2e;
                pbVar11[1] = 0;
              }
              lVar19 = (long)(int)param_2;
              FUN_003ca460(pbVar12,pcVar7,lVar19);
              if ((int)param_2 < iVar5) {
                param_2 = 0;
                pbVar11 = pbVar12 + lVar19;
              }
              else {
                pbVar11 = pbVar12 + iVar5;
                param_2 = param_2 - iVar5;
              }
            }
            uVar1 = iVar15 + iVar5 + 1;
            FUN_003c86b4(pcVar7,"crypto/objects/obj_dat.c",0x249);
          }
          else {
            FUN_0037cd5c(acStack_85,0x25,&DAT_001c32e8,uVar10);
            sVar16 = strlen(acStack_85);
            iVar5 = (int)sVar16;
            uVar13 = param_2;
            if ((pbVar11 != (byte *)0x0) && (0 < (int)param_2)) {
              FUN_003ca460(pbVar11,acStack_85,(ulong)param_2);
              uVar13 = param_2 - iVar5;
              if ((int)param_2 < iVar5) {
                uVar13 = 0;
                pbVar11 = pbVar11 + param_2;
              }
              else {
                pbVar11 = pbVar11 + iVar5;
              }
            }
            uVar1 = iVar15 + iVar5;
            param_2 = uVar13;
          }
          sVar16 = (size_t)uVar1;
          bVar4 = true;
          param_1 = pbVar11;
        } while (0 < iVar6);
      }
      FUN_0038f4f4(lVar14);
    }
    else {
      lVar14 = 0;
LAB_003dd2b8:
      FUN_0038f4f4(lVar14);
      sVar16 = 0xffffffff;
    }
  }
  return sVar16 & 0xffffffff;
}


// ===== 003dd5b4  FUN_003dd5b4 =====

void FUN_003dd5b4(undefined8 param_1)

{
  FUN_003dda2c(param_1,1);
  return;
}


// ===== 003dd5bc  FUN_003dd5bc =====

undefined4 FUN_003dd5bc(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_003dce7c(param_1,0);
  if (lVar2 != 0) {
    uVar1 = FUN_003dda2c(lVar2,1);
    FUN_0039a0f4(lVar2);
    return uVar1;
  }
  return 0;
}


// ===== 003dd608  FUN_003dd608 =====

void FUN_003dd608(void)

{
  FUN_003de3b8();
  return;
}


// ===== 003dd610  thunk_FUN_003de3b8 =====

long thunk_FUN_003de3b8(undefined8 param_1,long param_2,uint param_3,int param_4,code *param_5,
                       uint param_6)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  
  if (param_3 == 0) {
LAB_003de444:
    lVar5 = 0;
  }
  else {
    if ((int)param_3 < 1) {
      bVar2 = false;
      lVar5 = 0;
      uVar8 = 0;
    }
    else {
      iVar4 = 0;
      do {
        iVar3 = param_3 + iVar4;
        if (iVar3 < 0 != SCARRY4(param_3,iVar4)) {
          iVar3 = iVar3 + 1;
        }
        uVar8 = iVar3 >> 1;
        lVar5 = param_2 + (long)(int)uVar8 * (long)param_4;
        iVar3 = (*param_5)(param_1,lVar5);
        uVar7 = uVar8;
        if (-1 < iVar3) {
          if (iVar3 == 0) {
            bVar2 = false;
            goto joined_r0x003de464;
          }
          iVar4 = uVar8 + 1;
          uVar7 = param_3;
        }
        param_3 = uVar7;
      } while (iVar4 < (int)param_3);
      if ((param_6 & 1) == 0) goto LAB_003de444;
      bVar2 = true;
    }
joined_r0x003de464:
    if (((param_6 >> 1 & 1) != 0) && (!bVar2)) {
      uVar7 = uVar8 & (int)uVar8 >> 0x1f;
      lVar5 = param_2 + (long)(int)(uVar8 - 1) * (long)param_4;
      lVar6 = (long)(int)uVar8;
      do {
        lVar1 = lVar6 + -1;
        if (lVar6 < 1) goto LAB_003de4b0;
        iVar4 = (*param_5)(param_1,lVar5);
        lVar5 = lVar5 - param_4;
        lVar6 = lVar1;
      } while (iVar4 == 0);
      uVar7 = (int)lVar1 + 1;
LAB_003de4b0:
      lVar5 = param_2 + (long)(int)uVar7 * (long)param_4;
    }
  }
  return lVar5;
}


// ===== 003dd614  FUN_003dd614 =====

int FUN_003dd614(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char local_240 [512];
  
  iVar2 = FUN_0037e7f0(param_1,local_240,0x200);
  if (iVar2 < 1) {
    return 0;
  }
  pcVar5 = (char *)0x0;
  iVar3 = 0;
LAB_003dd650:
  local_240[iVar2 - 1] = '\0';
  iVar2 = FUN_003c475c(local_240[0],7);
  pcVar4 = local_240;
  if (iVar2 == 0) {
    return iVar3;
  }
  for (; (iVar2 = FUN_003c4784(*pcVar4), iVar2 != 0 || (*pcVar4 == '.')); pcVar4 = pcVar4 + 1) {
  }
  if (*pcVar4 != '\0') {
    *pcVar4 = '\0';
    do {
      pcVar4 = pcVar4 + 1;
      iVar2 = FUN_003c475c(*pcVar4,8);
    } while (iVar2 != 0);
    cVar1 = *pcVar4;
    pcVar6 = pcVar4;
    if (cVar1 != '\0') {
LAB_003dd6b0:
      iVar2 = FUN_003c475c(cVar1,8);
      if (iVar2 == 0) goto code_r0x003dd6bc;
      if (*pcVar6 != '\0') {
        *pcVar6 = '\0';
        do {
          pcVar6 = pcVar6 + 1;
          iVar2 = FUN_003c475c(*pcVar6,8);
        } while (iVar2 != 0);
        pcVar5 = (char *)0x0;
        if (*pcVar6 != '\0') {
          pcVar5 = pcVar6;
        }
        goto LAB_003dd700;
      }
      goto LAB_003dd6fc;
    }
  }
  pcVar4 = (char *)0x0;
  goto LAB_003dd700;
code_r0x003dd6bc:
  cVar1 = pcVar6[1];
  pcVar6 = pcVar6 + 1;
  if (cVar1 == '\0') goto LAB_003dd6fc;
  goto LAB_003dd6b0;
LAB_003dd6fc:
  pcVar5 = (char *)0x0;
LAB_003dd700:
  if (local_240[0] == '\0') {
    return iVar3;
  }
  iVar2 = FUN_003dd75c(local_240,pcVar4,pcVar5);
  if (iVar2 == 0) {
    return iVar3;
  }
  iVar3 = iVar3 + 1;
  iVar2 = FUN_0037e7f0(param_1,local_240,0x200);
  if (iVar2 < 1) {
    return iVar3;
  }
  goto LAB_003dd650;
}


// ===== 003dd75c  FUN_003dd75c =====

undefined4 FUN_003dd75c(long param_1,long param_2,long param_3)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  uint *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 local_50 [2];
  long *local_48;
  long *local_28;
  
  if (((param_1 == 0) && (param_2 == 0)) && (param_3 == 0)) {
    FUN_00379868();
    FUN_0037995c("crypto/objects/obj_dat.c",0x306,"OBJ_create");
    uVar6 = 0x80106;
LAB_003dd800:
    FUN_00379a5c(8,uVar6,0);
    return 0;
  }
  if (((param_2 != 0) && (iVar1 = FUN_003dcff4(param_2), iVar1 != 0)) ||
     ((param_3 != 0 && (iVar1 = FUN_003dd128(param_3), iVar1 != 0)))) {
    FUN_00379868();
    FUN_0037995c("crypto/objects/obj_dat.c",0x30d,"OBJ_create");
    uVar6 = 0x66;
    goto LAB_003dd800;
  }
  if (param_1 == 0) {
    plVar3 = (long *)FUN_0039a198();
    if (plVar3 == (long *)0x0) {
      FUN_00379868();
      FUN_0037995c("crypto/objects/obj_dat.c",0x31a,"OBJ_create");
      uVar6 = 0x8000d;
      goto LAB_003dd800;
    }
  }
  else {
    plVar3 = (long *)FUN_003dce7c(param_1,1);
    if (plVar3 == (long *)0x0) {
      return 0;
    }
  }
  iVar1 = FUN_003d51c8(&DAT_007ac2d8,FUN_003dded4);
  if (((iVar1 == 0) || (DAT_007ac2dc == 0)) || (iVar1 = FUN_003d518c(DAT_007ac2e8), iVar1 == 0)) {
    FUN_00379868();
    FUN_0037995c("crypto/objects/obj_dat.c",800,"OBJ_create");
    FUN_00379a5c(8,0xc0110,0);
    FUN_0039a0f4(plVar3);
    return 0;
  }
  if (param_1 == 0) {
LAB_003dd9c8:
    iVar1 = FUN_00755bc0(1,&DAT_007a8a24);
    *(int *)(plVar3 + 2) = iVar1;
    if (iVar1 != 0) {
      *plVar3 = param_2;
      plVar3[1] = param_3;
      uVar2 = FUN_003ddba4(plVar3,0);
      *plVar3 = 0;
      plVar3[1] = 0;
      goto LAB_003dda00;
    }
  }
  else {
    local_28 = plVar3;
    if ((int)plVar3[2] == 0) {
      if (*(int *)((long)plVar3 + 0x14) != 0) {
        puVar4 = (uint *)FUN_003de3b8(&local_28,&DAT_0020bdd8,0x499,4,FUN_003ddf48,0);
        if (puVar4 == (uint *)0x0) {
          if (DAT_007ac2e0 != 0) {
            local_50[0] = 0;
            local_48 = local_28;
            lVar5 = FUN_003b908c(DAT_007ac2e0,local_50);
            if (lVar5 != 0) {
              iVar1 = *(int *)(*(long *)(lVar5 + 8) + 0x10);
              goto joined_r0x003dd9c4;
            }
          }
        }
        else {
          iVar1 = *(int *)(&DAT_0076be08 + (ulong)*puVar4 * 0x28);
joined_r0x003dd9c4:
          if (iVar1 != 0) goto LAB_003dd890;
        }
      }
      goto LAB_003dd9c8;
    }
LAB_003dd890:
    FUN_00379868();
    FUN_0037995c("crypto/objects/obj_dat.c",0x328,"OBJ_create");
    FUN_00379a5c(8,0x66,0);
  }
  uVar2 = 0;
LAB_003dda00:
  FUN_003d519c(DAT_007ac2e8);
  FUN_0039a0f4(plVar3);
  return uVar2;
}


// ===== 003dda2c  FUN_003dda2c =====

ulong FUN_003dda2c(ulong param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  uint *puVar3;
  undefined4 local_38 [2];
  ulong local_30;
  ulong local_28;
  
  uVar2 = param_1;
  if ((param_1 != 0) && (uVar2 = (ulong)*(uint *)(param_1 + 0x10), *(uint *)(param_1 + 0x10) == 0))
  {
    if (*(int *)(param_1 + 0x14) == 0) {
      return 0;
    }
    local_28 = param_1;
    puVar3 = (uint *)FUN_003de3b8(&local_28,&DAT_0020bdd8,0x499,4,FUN_003ddf48,0);
    if (puVar3 != (uint *)0x0) {
      return (ulong)*(uint *)(&DAT_0076be08 + (ulong)*puVar3 * 0x28);
    }
    if ((param_2 != 0) &&
       (((iVar1 = FUN_003d51c8(&DAT_007ac2d8,FUN_003dded4), iVar1 == 0 || (DAT_007ac2dc == 0)) ||
        (iVar1 = FUN_003d517c(DAT_007ac2e8), iVar1 == 0)))) {
      FUN_00379868();
      FUN_0037995c("crypto/objects/obj_dat.c",0x187,"ossl_obj_obj2nid");
      FUN_00379a5c(8,0xc010f,0);
      return 0;
    }
    uVar2 = DAT_007ac2e0;
    if (DAT_007ac2e0 != 0) {
      local_38[0] = 0;
      local_30 = local_28;
      uVar2 = FUN_003b908c(DAT_007ac2e0,local_38);
      if (uVar2 != 0) {
        uVar2 = (ulong)*(uint *)(*(long *)(uVar2 + 8) + 0x10);
      }
    }
    if (param_2 != 0) {
      FUN_003d519c(DAT_007ac2e8);
      return uVar2 & 0xffffffff;
    }
  }
  return uVar2;
}


// ===== 003ddba4  FUN_003ddba4 =====

undefined4 FUN_003ddba4(long param_1,int param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  
  plVar3 = (long *)FUN_003de510();
  if (plVar3 == (long *)0x0) {
    return 0;
  }
  puVar4 = (undefined4 *)FUN_003c83a4(0x10,"crypto/objects/obj_dat.c",0x10f);
  if (puVar4 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
LAB_003dddc8:
    puVar6 = (undefined4 *)0x0;
  }
  else {
    if ((*(int *)((long)plVar3 + 0x14) == 0) || (*(long *)(param_1 + 0x18) == 0)) {
      puVar5 = (undefined4 *)0x0;
      if (*plVar3 != 0) goto LAB_003ddc20;
LAB_003ddc74:
      puVar6 = (undefined4 *)0x0;
      if (plVar3[1] == 0) goto LAB_003ddc80;
LAB_003ddc44:
      puVar7 = (undefined4 *)FUN_003c83a4(0x10,"crypto/objects/obj_dat.c",0x116);
      if (puVar7 == (undefined4 *)0x0) goto LAB_003dddd0;
joined_r0x003ddc60:
      if ((param_2 == 0) ||
         (((iVar2 = FUN_003d51c8(&DAT_007ac2d8,FUN_003dded4), iVar2 != 0 && (DAT_007ac2dc != 0)) &&
          (iVar2 = FUN_003d518c(DAT_007ac2e8), iVar2 != 0)))) {
        if ((DAT_007ac2e0 != 0) ||
           (DAT_007ac2e0 = FUN_003b8a34(FUN_003ddf8c,FUN_003de310), DAT_007ac2e0 != 0)) {
          lVar1 = DAT_007ac2e0;
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = 0;
            *(long **)(puVar5 + 2) = plVar3;
            uVar8 = FUN_003b8ca4(lVar1,puVar5);
            FUN_003c86b4(uVar8,"crypto/objects/obj_dat.c",299);
          }
          lVar1 = DAT_007ac2e0;
          if (puVar6 != (undefined4 *)0x0) {
            *puVar6 = 1;
            *(long **)(puVar6 + 2) = plVar3;
            uVar8 = FUN_003b8ca4(lVar1,puVar6);
            FUN_003c86b4(uVar8,"crypto/objects/obj_dat.c",299);
          }
          lVar1 = DAT_007ac2e0;
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = 2;
            *(long **)(puVar7 + 2) = plVar3;
            uVar8 = FUN_003b8ca4(lVar1,puVar7);
            FUN_003c86b4(uVar8,"crypto/objects/obj_dat.c",299);
          }
          lVar1 = DAT_007ac2e0;
          *puVar4 = 3;
          *(long **)(puVar4 + 2) = plVar3;
          uVar8 = FUN_003b8ca4(lVar1,puVar4);
          FUN_003c86b4(uVar8,"crypto/objects/obj_dat.c",299);
          *(uint *)(plVar3 + 4) = *(uint *)(plVar3 + 4) & 0xfffffff2;
          if (param_2 != 0) {
            FUN_003d519c(DAT_007ac2e8);
          }
          return (int)plVar3[2];
        }
        FUN_00379868();
        FUN_0037995c("crypto/objects/obj_dat.c",0x120,"ossl_obj_add_object");
        FUN_00379a5c(8,0x8000f,0);
        if (param_2 != 0) {
          FUN_003d519c(DAT_007ac2e8);
        }
      }
      else {
        FUN_00379868();
        FUN_0037995c("crypto/objects/obj_dat.c",0x11a,"ossl_obj_add_object");
        FUN_00379a5c(8,0xc0110,0);
      }
      goto LAB_003dddd0;
    }
    puVar5 = (undefined4 *)FUN_003c83a4(0x10,"crypto/objects/obj_dat.c",0x112);
    if (puVar5 == (undefined4 *)0x0) goto LAB_003dddc8;
    if (*plVar3 == 0) goto LAB_003ddc74;
LAB_003ddc20:
    puVar6 = (undefined4 *)FUN_003c83a4(0x10,"crypto/objects/obj_dat.c",0x114);
    if (puVar6 != (undefined4 *)0x0) {
      if (plVar3[1] != 0) goto LAB_003ddc44;
LAB_003ddc80:
      puVar7 = (undefined4 *)0x0;
      goto joined_r0x003ddc60;
    }
  }
  puVar7 = (undefined4 *)0x0;
LAB_003dddd0:
  FUN_003c86b4(puVar5,"crypto/objects/obj_dat.c",0x139);
  FUN_003c86b4(puVar6,"crypto/objects/obj_dat.c",0x139);
  FUN_003c86b4(puVar7,"crypto/objects/obj_dat.c",0x139);
  FUN_003c86b4(puVar4,"crypto/objects/obj_dat.c",0x139);
  FUN_0039a0f4(plVar3);
  return 0;
}


// ===== 003ddeb4  FUN_003ddeb4 =====

long FUN_003ddeb4(long param_1)

{
  if (param_1 != 0) {
    param_1 = (long)*(int *)(param_1 + 0x14);
  }
  return param_1;
}


// ===== 003ddec0  FUN_003ddec0 =====

long FUN_003ddec0(long param_1)

{
  if (param_1 != 0) {
    param_1 = *(long *)(param_1 + 0x18);
  }
  return param_1;
}


// ===== 003ddecc  FUN_003ddecc =====

void FUN_003ddecc(undefined8 param_1)

{
  FUN_003ddba4(param_1,1);
  return;
}


// ===== 003dded4  FUN_003dded4 =====

void FUN_003dded4(void)

{
  DAT_007ac2e8 = FUN_003d5150();
  DAT_007ac2dc = (uint)(DAT_007ac2e8 != 0);
  return;
}


// ===== 003ddf00  FUN_003ddf00 =====

int FUN_003ddf00(long *param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = strcmp(*(char **)(*param_1 + 8),(&PTR_s_undefined_0076be00)[(ulong)*param_2 * 5]);
  return iVar1;
}


// ===== 003ddf24  FUN_003ddf24 =====

int FUN_003ddf24(undefined8 *param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = strcmp(*(char **)*param_1,(&PTR_s_UNDEF_0076bdf8)[(ulong)*param_2 * 5]);
  return iVar1;
}


// ===== 003ddf48  FUN_003ddf48 =====

int FUN_003ddf48(long *param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 0x14);
  if (iVar1 - *(int *)(&DAT_0076be0c + (ulong)*param_2 * 0x28) != 0) {
    return iVar1 - *(int *)(&DAT_0076be0c + (ulong)*param_2 * 0x28);
  }
  if (iVar1 != 0) {
    iVar1 = memcmp(*(void **)(*param_1 + 0x18),*(void **)(&DAT_0076be10 + (ulong)*param_2 * 0x28),
                   (long)iVar1);
    return iVar1;
  }
  return 0;
}


// ===== 003ddf8c  FUN_003ddf8c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_003ddf8c(int *param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined1 (*pauVar10) [16];
  byte *pbVar11;
  ulong uVar12;
  uint uVar13;
  ulong *puVar14;
  undefined1 (*pauVar15) [16];
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
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
  int iVar36;
  int iVar38;
  undefined8 uVar37;
  int iVar40;
  undefined8 uVar39;
  int iVar42;
  undefined8 uVar41;
  undefined8 uVar43;
  undefined8 uVar44;
  byte bVar45;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  ulong uVar46;
  undefined8 uVar47;
  byte bVar51;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  ulong uVar52;
  undefined8 uVar53;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  ulong uVar62;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
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
  byte bVar86;
  byte bVar87;
  int iVar82;
  ulong uVar83;
  byte bVar88;
  int iVar89;
  byte bVar90;
  byte bVar91;
  byte bVar92;
  byte bVar93;
  undefined1 auVar85 [16];
  byte bVar94;
  byte bVar99;
  byte bVar100;
  int iVar95;
  ulong uVar96;
  byte bVar101;
  int iVar102;
  byte bVar103;
  byte bVar104;
  byte bVar105;
  byte bVar106;
  undefined1 auVar98 [16];
  byte bVar107;
  ulong uVar108;
  byte bVar110;
  byte bVar111;
  byte bVar112;
  byte bVar113;
  byte bVar114;
  byte bVar115;
  byte bVar116;
  undefined1 auVar109 [16];
  ulong uVar117;
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  int iVar121;
  int iVar124;
  undefined1 auVar123 [16];
  int iVar125;
  ulong uVar126;
  int iVar129;
  undefined1 auVar128 [16];
  int iVar130;
  ulong uVar131;
  int iVar134;
  undefined1 auVar133 [16];
  int iVar135;
  ulong uVar136;
  int iVar139;
  undefined1 auVar138 [16];
  undefined1 auVar84 [16];
  undefined1 auVar97 [16];
  undefined1 auVar122 [16];
  undefined1 auVar127 [16];
  undefined1 auVar132 [16];
  undefined1 auVar137 [16];
  
  iVar36 = *param_1;
  puVar9 = *(undefined8 **)(param_1 + 2);
  if (iVar36 < 2) {
    if (iVar36 == 0) {
      uVar13 = *(uint *)((long)puVar9 + 0x14);
      uVar7 = (ulong)(int)uVar13;
      uVar6 = uVar7 << 0x14;
      if ((int)uVar13 < 1) goto LAB_003de018;
      pauVar10 = (undefined1 (*) [16])puVar9[3];
      if (uVar13 < 8) {
        uVar12 = 0;
      }
      else {
        if (uVar13 < 0x10) {
          uVar83 = 0;
        }
        else {
          bVar28 = 0;
          bVar29 = 0;
          bVar30 = 0;
          bVar31 = 0;
          bVar32 = 0;
          bVar33 = 0;
          bVar34 = 0;
          bVar35 = 0;
          bVar45 = 0;
          bVar48 = 0;
          bVar49 = 0;
          bVar50 = 0;
          bVar16 = 0;
          bVar17 = 0;
          bVar18 = (byte)(uVar6 >> 0x10);
          bVar19 = (byte)(uVar6 >> 0x18);
          bVar24 = (byte)(uVar6 >> 0x20);
          bVar25 = (byte)(uVar6 >> 0x28);
          bVar26 = (byte)(uVar6 >> 0x30);
          bVar27 = (byte)(uVar6 >> 0x38);
          bVar51 = 0;
          bVar54 = 0;
          bVar55 = 0;
          bVar56 = 0;
          bVar57 = 0;
          bVar58 = 0;
          bVar59 = 0;
          bVar60 = 0;
          uVar83 = 0;
          uVar62 = 0;
          bVar94 = 0;
          bVar99 = 0;
          bVar100 = 0;
          bVar101 = 0;
          bVar103 = 0;
          bVar104 = 0;
          bVar105 = 0;
          bVar106 = 0;
          bVar61 = 0;
          bVar63 = 0;
          bVar64 = 0;
          bVar65 = 0;
          bVar77 = 0;
          bVar78 = 0;
          bVar79 = 0;
          bVar80 = 0;
          bVar107 = 0;
          bVar110 = 0;
          bVar111 = 0;
          bVar112 = 0;
          bVar113 = 0;
          bVar114 = 0;
          bVar115 = 0;
          bVar116 = 0;
          bVar81 = 0;
          bVar86 = 0;
          bVar87 = 0;
          bVar88 = 0;
          bVar90 = 0;
          bVar91 = 0;
          bVar92 = 0;
          bVar93 = 0;
          uVar12 = uVar7 & 0x7ffffff0;
          auVar109[8] = UNK_00200ab8;
          auVar109._0_8_ = _DAT_00200ab0;
          auVar109._9_7_ = _UNK_00200ab9;
          auVar118[8] = UNK_00200588;
          auVar118._0_8_ = _DAT_00200580;
          auVar118._9_7_ = _UNK_00200589;
          uVar6 = uVar12;
          pauVar15 = pauVar10;
          uVar5 = _DAT_00200150;
          uVar37 = _UNK_00200158;
          uVar39 = _DAT_002001b0;
          uVar41 = _UNK_002001b8;
          uVar43 = _DAT_002002e0;
          uVar44 = _UNK_002002e8;
          uVar47 = _DAT_00200160;
          uVar53 = _UNK_00200168;
          do {
            iVar125 = (int)uVar39 * 3;
            iVar40 = (int)((ulong)uVar39 >> 0x20);
            iVar129 = iVar40 * 3;
            auVar127._0_8_ = CONCAT44(iVar129,iVar125);
            auVar127._8_4_ = (int)uVar41 * 3;
            iVar42 = (int)((ulong)uVar41 >> 0x20);
            auVar127._12_4_ = iVar42 * 3;
            iVar130 = (int)uVar43 * 3;
            iVar82 = (int)((ulong)uVar43 >> 0x20);
            iVar134 = iVar82 * 3;
            auVar132._0_8_ = CONCAT44(iVar134,iVar130);
            auVar132._8_4_ = (int)uVar44 * 3;
            iVar89 = (int)((ulong)uVar44 >> 0x20);
            auVar132._12_4_ = iVar89 * 3;
            uVar6 = uVar6 - 0x10;
            iVar135 = (int)uVar47 * 3;
            iVar95 = (int)((ulong)uVar47 >> 0x20);
            iVar139 = iVar95 * 3;
            auVar137._0_8_ = CONCAT44(iVar139,iVar135);
            auVar137._8_4_ = (int)uVar53 * 3;
            iVar102 = (int)((ulong)uVar53 >> 0x20);
            auVar137._12_4_ = iVar102 * 3;
            iVar121 = (int)uVar5 * 3;
            iVar36 = (int)((ulong)uVar5 >> 0x20);
            iVar124 = iVar36 * 3;
            auVar122._0_8_ = CONCAT44(iVar124,iVar121);
            auVar122._8_4_ = (int)uVar37 * 3;
            iVar38 = (int)((ulong)uVar37 >> 0x20);
            auVar122._12_4_ = iVar38 * 3;
            uVar43 = CONCAT44(iVar82 + 0x10,(int)uVar43 + 0x10);
            uVar44 = CONCAT44(iVar89 + 0x10,(int)uVar44 + 0x10);
            uVar39 = CONCAT44(iVar40 + 0x10,(int)uVar39 + 0x10);
            uVar41 = CONCAT44(iVar42 + 0x10,(int)uVar41 + 0x10);
            uVar47 = CONCAT44(iVar95 + 0x10,(int)uVar47 + 0x10);
            uVar53 = CONCAT44(iVar102 + 0x10,(int)uVar53 + 0x10);
            uVar5 = CONCAT44(iVar36 + 0x10,(int)uVar5 + 0x10);
            uVar37 = CONCAT44(iVar38 + 0x10,(int)uVar37 + 0x10);
            auVar119 = NEON_umull(auVar127._0_8_,0xaaaaaaabaaaaaaab,4);
            auVar120 = NEON_umull(auVar132._0_8_,0xaaaaaaabaaaaaaab,4);
            auVar66 = NEON_umull(auVar137._0_8_,0xaaaaaaabaaaaaaab,4);
            auVar68 = NEON_umull(auVar122._0_8_,0xaaaaaaabaaaaaaab,4);
            auVar67 = a64_TBL(ZEXT816(0),*pauVar15,auVar109);
            auVar128._0_4_ = iVar125 + (auVar119._4_4_ >> 4) * -0x18;
            auVar128._4_4_ = iVar129 + (auVar119._12_4_ >> 4) * -0x18;
            auVar128._8_4_ = auVar127._8_4_ + (int)((auVar127._8_8_ & 0xffffffff) / 0x18) * -0x18;
            auVar128._12_4_ = auVar127._12_4_ + (int)(auVar127._8_8_ / 0x1800000000) * -0x18;
            auVar119 = a64_TBL(ZEXT816(0),*pauVar15,auVar118);
            auVar133._0_4_ = iVar130 + (auVar120._4_4_ >> 4) * -0x18;
            auVar133._4_4_ = iVar134 + (auVar120._12_4_ >> 4) * -0x18;
            auVar133._8_4_ = auVar132._8_4_ + (int)((auVar132._8_8_ & 0xffffffff) / 0x18) * -0x18;
            auVar133._12_4_ = auVar132._12_4_ + (int)(auVar132._8_8_ / 0x1800000000) * -0x18;
            auVar120 = a64_TBL(ZEXT816(0),*pauVar15,_DAT_002007c0);
            auVar138._0_4_ = iVar135 + (auVar66._4_4_ >> 4) * -0x18;
            auVar138._4_4_ = iVar139 + (auVar66._12_4_ >> 4) * -0x18;
            auVar138._8_4_ = auVar137._8_4_ + (int)((auVar137._8_8_ & 0xffffffff) / 0x18) * -0x18;
            auVar138._12_4_ = auVar137._12_4_ + (int)(auVar137._8_8_ / 0x1800000000) * -0x18;
            auVar66 = a64_TBL(ZEXT816(0),*pauVar15,_DAT_002000f0);
            auVar123._0_4_ = iVar121 + (auVar68._4_4_ >> 4) * -0x18;
            auVar123._4_4_ = iVar124 + (auVar68._12_4_ >> 4) * -0x18;
            auVar123._8_4_ = auVar122._8_4_ + (int)((auVar122._8_8_ & 0xffffffff) / 0x18) * -0x18;
            auVar123._12_4_ = auVar122._12_4_ + (int)(auVar122._8_8_ / 0x1800000000) * -0x18;
            auVar67 = NEON_ushl(auVar67,auVar128,4);
            auVar68 = NEON_ushl(auVar119,auVar133,4);
            auVar120 = NEON_ushl(auVar120,auVar138,4);
            auVar119 = NEON_ushl(auVar66,auVar123,4);
            uVar46 = auVar67._8_8_ & 0xffffffff;
            uVar126 = auVar67._0_8_ & 0xffffffff;
            uVar52 = auVar68._8_8_ & 0xffffffff;
            uVar96 = auVar120._8_8_ & 0xffffffff;
            uVar131 = auVar68._0_8_ & 0xffffffff;
            uVar108 = auVar119._0_8_ & 0xffffffff;
            uVar136 = auVar120._0_8_ & 0xffffffff;
            uVar117 = auVar119._8_8_ & 0xffffffff;
            bVar69 = (byte)uVar83 ^ (byte)uVar46;
            bVar70 = (byte)(uVar83 >> 8) ^ (byte)(uVar46 >> 8);
            bVar71 = (byte)(uVar83 >> 0x10) ^ (byte)(uVar46 >> 0x10);
            bVar72 = (byte)(uVar83 >> 0x18) ^ (byte)(uVar46 >> 0x18);
            uVar83 = (ulong)CONCAT13(bVar72,CONCAT12(bVar71,CONCAT11(bVar70,bVar69)));
            bVar73 = (byte)uVar62 ^ auVar67[0xc];
            bVar74 = (byte)(uVar62 >> 8) ^ auVar67[0xd];
            bVar75 = (byte)(uVar62 >> 0x10) ^ auVar67[0xe];
            bVar76 = (byte)(uVar62 >> 0x18) ^ auVar67[0xf];
            uVar62 = (ulong)CONCAT13(bVar76,CONCAT12(bVar75,CONCAT11(bVar74,bVar73)));
            bVar51 = bVar51 ^ (byte)uVar126;
            bVar54 = bVar54 ^ (byte)(uVar126 >> 8);
            bVar55 = bVar55 ^ (byte)(uVar126 >> 0x10);
            bVar56 = bVar56 ^ (byte)(uVar126 >> 0x18);
            bVar57 = bVar57 ^ auVar67[4];
            bVar58 = bVar58 ^ auVar67[5];
            bVar59 = bVar59 ^ auVar67[6];
            bVar60 = bVar60 ^ auVar67[7];
            bVar32 = bVar32 ^ (byte)uVar52;
            bVar33 = bVar33 ^ (byte)(uVar52 >> 8);
            bVar34 = bVar34 ^ (byte)(uVar52 >> 0x10);
            bVar35 = bVar35 ^ (byte)(uVar52 >> 0x18);
            bVar45 = bVar45 ^ auVar68[0xc];
            bVar48 = bVar48 ^ auVar68[0xd];
            bVar49 = bVar49 ^ auVar68[0xe];
            bVar50 = bVar50 ^ auVar68[0xf];
            bVar16 = bVar16 ^ (byte)uVar131;
            bVar17 = bVar17 ^ (byte)(uVar131 >> 8);
            bVar18 = bVar18 ^ (byte)(uVar131 >> 0x10);
            bVar19 = bVar19 ^ (byte)(uVar131 >> 0x18);
            bVar28 = bVar28 ^ auVar68[4];
            bVar29 = bVar29 ^ auVar68[5];
            bVar30 = bVar30 ^ auVar68[6];
            bVar31 = bVar31 ^ auVar68[7];
            bVar61 = bVar61 ^ (byte)uVar96;
            bVar63 = bVar63 ^ (byte)(uVar96 >> 8);
            bVar64 = bVar64 ^ (byte)(uVar96 >> 0x10);
            bVar65 = bVar65 ^ (byte)(uVar96 >> 0x18);
            bVar77 = bVar77 ^ auVar120[0xc];
            bVar78 = bVar78 ^ auVar120[0xd];
            bVar79 = bVar79 ^ auVar120[0xe];
            bVar80 = bVar80 ^ auVar120[0xf];
            bVar81 = bVar81 ^ (byte)uVar117;
            bVar86 = bVar86 ^ (byte)(uVar117 >> 8);
            bVar87 = bVar87 ^ (byte)(uVar117 >> 0x10);
            bVar88 = bVar88 ^ (byte)(uVar117 >> 0x18);
            bVar90 = bVar90 ^ auVar119[0xc];
            bVar91 = bVar91 ^ auVar119[0xd];
            bVar92 = bVar92 ^ auVar119[0xe];
            bVar93 = bVar93 ^ auVar119[0xf];
            bVar94 = bVar94 ^ (byte)uVar136;
            bVar99 = bVar99 ^ (byte)(uVar136 >> 8);
            bVar100 = bVar100 ^ (byte)(uVar136 >> 0x10);
            bVar101 = bVar101 ^ (byte)(uVar136 >> 0x18);
            bVar103 = bVar103 ^ auVar120[4];
            bVar104 = bVar104 ^ auVar120[5];
            bVar105 = bVar105 ^ auVar120[6];
            bVar106 = bVar106 ^ auVar120[7];
            bVar107 = bVar107 ^ (byte)uVar108;
            bVar110 = bVar110 ^ (byte)(uVar108 >> 8);
            bVar111 = bVar111 ^ (byte)(uVar108 >> 0x10);
            bVar112 = bVar112 ^ (byte)(uVar108 >> 0x18);
            bVar113 = bVar113 ^ auVar119[4];
            bVar114 = bVar114 ^ auVar119[5];
            bVar115 = bVar115 ^ auVar119[6];
            bVar116 = bVar116 ^ auVar119[7];
            pauVar15 = pauVar15 + 1;
          } while (uVar6 != 0);
          bVar16 = bVar16 ^ bVar94 ^ bVar51 ^ bVar107 ^ bVar32 ^ bVar61 ^ bVar69 ^ bVar81;
          bVar17 = bVar17 ^ bVar99 ^ bVar54 ^ bVar110 ^ bVar33 ^ bVar63 ^ bVar70 ^ bVar86;
          bVar18 = bVar18 ^ bVar100 ^ bVar55 ^ bVar111 ^ bVar34 ^ bVar64 ^ bVar71 ^ bVar87;
          bVar19 = bVar19 ^ bVar101 ^ bVar56 ^ bVar112 ^ bVar35 ^ bVar65 ^ bVar72 ^ bVar88;
          bVar28 = bVar28 ^ bVar103 ^ bVar57 ^ bVar113 ^ bVar45 ^ bVar77 ^ bVar73 ^ bVar90;
          bVar29 = bVar29 ^ bVar104 ^ bVar58 ^ bVar114 ^ bVar48 ^ bVar78 ^ bVar74 ^ bVar91;
          bVar30 = bVar30 ^ bVar105 ^ bVar59 ^ bVar115 ^ bVar49 ^ bVar79 ^ bVar75 ^ bVar92;
          bVar31 = bVar31 ^ bVar106 ^ bVar60 ^ bVar116 ^ bVar50 ^ bVar80 ^ bVar76 ^ bVar93;
          auVar119[1] = bVar17;
          auVar119[0] = bVar16;
          auVar119[2] = bVar18;
          auVar119[3] = bVar19;
          auVar119[4] = bVar24;
          auVar119[5] = bVar25;
          auVar119[6] = bVar26;
          auVar119[7] = bVar27;
          auVar119[8] = bVar28;
          auVar119[9] = bVar29;
          auVar119[10] = bVar30;
          auVar119[0xb] = bVar31;
          auVar119._12_4_ = 0;
          auVar120[1] = bVar17;
          auVar120[0] = bVar16;
          auVar120[2] = bVar18;
          auVar120[3] = bVar19;
          auVar120[4] = bVar24;
          auVar120[5] = bVar25;
          auVar120[6] = bVar26;
          auVar120[7] = bVar27;
          auVar120[8] = bVar28;
          auVar120[9] = bVar29;
          auVar120[10] = bVar30;
          auVar120[0xb] = bVar31;
          auVar120._12_4_ = 0;
          auVar118 = NEON_ext(auVar119,auVar120,8,1);
          uVar6 = CONCAT17(bVar27 ^ auVar118[7],
                           CONCAT16(bVar26 ^ auVar118[6],
                                    CONCAT15(bVar25 ^ auVar118[5],
                                             CONCAT14(bVar24 ^ auVar118[4],
                                                      CONCAT13(bVar19 ^ auVar118[3],
                                                               CONCAT12(bVar18 ^ auVar118[2],
                                                                        CONCAT11(bVar17 ^ auVar118[1
                                                  ],bVar16 ^ auVar118[0])))))));
          if (uVar12 == uVar7) goto LAB_003de018;
          uVar83 = uVar12;
          if ((uVar13 >> 3 & 1) == 0) goto LAB_003de2d0;
        }
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
        uVar46 = 0;
        uVar52 = 0;
        bVar16 = (byte)uVar6;
        bVar17 = (byte)(uVar6 >> 8);
        bVar18 = (byte)(uVar6 >> 0x10);
        bVar19 = (byte)(uVar6 >> 0x18);
        uVar20 = (undefined1)(uVar6 >> 0x20);
        uVar21 = (undefined1)(uVar6 >> 0x28);
        uVar22 = (undefined1)(uVar6 >> 0x30);
        uVar23 = (undefined1)(uVar6 >> 0x38);
        uVar6 = 0;
        uVar62 = 0;
        bVar45 = (byte)uVar83;
        bVar48 = (byte)(uVar83 >> 8);
        bVar49 = (byte)(uVar83 >> 0x10);
        bVar50 = (byte)(uVar83 >> 0x18);
        uVar5 = CONCAT17(bVar50 | (byte)((ulong)_DAT_002001b0 >> 0x38),
                         CONCAT16(bVar49 | (byte)((ulong)_DAT_002001b0 >> 0x30),
                                  CONCAT15(bVar48 | (byte)((ulong)_DAT_002001b0 >> 0x28),
                                           CONCAT14(bVar45 | (byte)((ulong)_DAT_002001b0 >> 0x20),
                                                    CONCAT13(bVar50 | (byte)((ulong)_DAT_002001b0 >>
                                                                            0x18),
                                                             CONCAT12(bVar49 | (byte)((ulong)
                                                  _DAT_002001b0 >> 0x10),
                                                  CONCAT11(bVar48 | (byte)((ulong)_DAT_002001b0 >> 8
                                                                          ),
                                                           bVar45 | (byte)_DAT_002001b0)))))));
        uVar37 = CONCAT17(bVar50 | (byte)((ulong)_UNK_002001b8 >> 0x38),
                          CONCAT16(bVar49 | (byte)((ulong)_UNK_002001b8 >> 0x30),
                                   CONCAT15(bVar48 | (byte)((ulong)_UNK_002001b8 >> 0x28),
                                            CONCAT14(bVar45 | (byte)((ulong)_UNK_002001b8 >> 0x20),
                                                     CONCAT13(bVar50 | (byte)((ulong)_UNK_002001b8
                                                                             >> 0x18),
                                                              CONCAT12(bVar49 | (byte)((ulong)
                                                  _UNK_002001b8 >> 0x10),
                                                  CONCAT11(bVar48 | (byte)((ulong)_UNK_002001b8 >> 8
                                                                          ),
                                                           bVar45 | (byte)_UNK_002001b8)))))));
        uVar39 = CONCAT17(bVar50 | (byte)((ulong)_DAT_002002e0 >> 0x38),
                          CONCAT16(bVar49 | (byte)((ulong)_DAT_002002e0 >> 0x30),
                                   CONCAT15(bVar48 | (byte)((ulong)_DAT_002002e0 >> 0x28),
                                            CONCAT14(bVar45 | (byte)((ulong)_DAT_002002e0 >> 0x20),
                                                     CONCAT13(bVar50 | (byte)((ulong)_DAT_002002e0
                                                                             >> 0x18),
                                                              CONCAT12(bVar49 | (byte)((ulong)
                                                  _DAT_002002e0 >> 0x10),
                                                  CONCAT11(bVar48 | (byte)((ulong)_DAT_002002e0 >> 8
                                                                          ),
                                                           bVar45 | (byte)_DAT_002002e0)))))));
        uVar41 = CONCAT17(bVar50 | (byte)((ulong)_UNK_002002e8 >> 0x38),
                          CONCAT16(bVar49 | (byte)((ulong)_UNK_002002e8 >> 0x30),
                                   CONCAT15(bVar48 | (byte)((ulong)_UNK_002002e8 >> 0x28),
                                            CONCAT14(bVar45 | (byte)((ulong)_UNK_002002e8 >> 0x20),
                                                     CONCAT13(bVar50 | (byte)((ulong)_UNK_002002e8
                                                                             >> 0x18),
                                                              CONCAT12(bVar49 | (byte)((ulong)
                                                  _UNK_002002e8 >> 0x10),
                                                  CONCAT11(bVar48 | (byte)((ulong)_UNK_002002e8 >> 8
                                                                          ),
                                                           bVar45 | (byte)_UNK_002002e8)))))));
        uVar12 = uVar7 & 0x7ffffff8;
        auVar66[8] = UNK_00200ab8;
        auVar66._0_8_ = _DAT_00200ab0;
        auVar67[8] = UNK_00200588;
        auVar67._0_8_ = _DAT_00200580;
        lVar8 = uVar83 - uVar12;
        puVar14 = (ulong *)(*pauVar10 + uVar83);
        do {
          iVar82 = (int)uVar39 * 3;
          iVar40 = (int)((ulong)uVar39 >> 0x20);
          iVar89 = iVar40 * 3;
          auVar84._0_8_ = CONCAT44(iVar89,iVar82);
          auVar84._8_4_ = (int)uVar41 * 3;
          iVar42 = (int)((ulong)uVar41 >> 0x20);
          auVar84._12_4_ = iVar42 * 3;
          iVar95 = (int)uVar5 * 3;
          iVar36 = (int)((ulong)uVar5 >> 0x20);
          iVar102 = iVar36 * 3;
          auVar97._0_8_ = CONCAT44(iVar102,iVar95);
          auVar97._8_4_ = (int)uVar37 * 3;
          iVar38 = (int)((ulong)uVar37 >> 0x20);
          auVar97._12_4_ = iVar38 * 3;
          lVar8 = lVar8 + 8;
          uVar39 = CONCAT44(iVar40 + 8,(int)uVar39 + 8);
          uVar41 = CONCAT44(iVar42 + 8,(int)uVar41 + 8);
          uVar5 = CONCAT44(iVar36 + 8,(int)uVar5 + 8);
          uVar37 = CONCAT44(iVar38 + 8,(int)uVar37 + 8);
          auVar118 = NEON_umull(auVar84._0_8_,0xaaaaaaabaaaaaaab,4);
          auVar119 = NEON_umull(auVar97._0_8_,0xaaaaaaabaaaaaaab,4);
          auVar67[9] = (char)_UNK_00200589;
          auVar67[10] = (char)((uint7)_UNK_00200589 >> 8);
          auVar67[0xb] = (char)((uint7)_UNK_00200589 >> 0x10);
          auVar67[0xc] = (char)((uint7)_UNK_00200589 >> 0x18);
          auVar67[0xd] = (char)((uint7)_UNK_00200589 >> 0x20);
          auVar67[0xe] = (char)((uint7)_UNK_00200589 >> 0x28);
          auVar67[0xf] = (char)((uint7)_UNK_00200589 >> 0x30);
          auVar68._8_8_ = 0;
          auVar68._0_8_ = *puVar14;
          auVar120 = a64_TBL(ZEXT816(0),auVar68,auVar67);
          auVar85._0_4_ = iVar82 + (auVar118._4_4_ >> 4) * -0x18;
          auVar85._4_4_ = iVar89 + (auVar118._12_4_ >> 4) * -0x18;
          auVar85._8_4_ = auVar84._8_4_ + (int)((auVar84._8_8_ & 0xffffffff) / 0x18) * -0x18;
          auVar85._12_4_ = auVar84._12_4_ + (int)(auVar84._8_8_ / 0x1800000000) * -0x18;
          auVar66[9] = (char)_UNK_00200ab9;
          auVar66[10] = (char)((uint7)_UNK_00200ab9 >> 8);
          auVar66[0xb] = (char)((uint7)_UNK_00200ab9 >> 0x10);
          auVar66[0xc] = (char)((uint7)_UNK_00200ab9 >> 0x18);
          auVar66[0xd] = (char)((uint7)_UNK_00200ab9 >> 0x20);
          auVar66[0xe] = (char)((uint7)_UNK_00200ab9 >> 0x28);
          auVar66[0xf] = (char)((uint7)_UNK_00200ab9 >> 0x30);
          auVar4._8_8_ = 0;
          auVar4._0_8_ = *puVar14;
          auVar109 = a64_TBL(ZEXT816(0),auVar4,auVar66);
          auVar98._0_4_ = iVar95 + (auVar119._4_4_ >> 4) * -0x18;
          auVar98._4_4_ = iVar102 + (auVar119._12_4_ >> 4) * -0x18;
          auVar98._8_4_ = auVar97._8_4_ + (int)((auVar97._8_8_ & 0xffffffff) / 0x18) * -0x18;
          auVar98._12_4_ = auVar97._12_4_ + (int)(auVar97._8_8_ / 0x1800000000) * -0x18;
          auVar118 = NEON_ushl(auVar120,auVar85,4);
          auVar109 = NEON_ushl(auVar109,auVar98,4);
          uVar108 = auVar118._8_8_ & 0xffffffff;
          uVar83 = auVar118._0_8_ & 0xffffffff;
          uVar117 = auVar109._0_8_ & 0xffffffff;
          uVar96 = auVar109._8_8_ & 0xffffffff;
          bVar28 = bVar28 ^ (byte)uVar108;
          bVar29 = bVar29 ^ (byte)(uVar108 >> 8);
          bVar30 = bVar30 ^ (byte)(uVar108 >> 0x10);
          bVar31 = bVar31 ^ (byte)(uVar108 >> 0x18);
          bVar32 = bVar32 ^ auVar118[0xc];
          bVar33 = bVar33 ^ auVar118[0xd];
          bVar34 = bVar34 ^ auVar118[0xe];
          bVar35 = bVar35 ^ auVar118[0xf];
          bVar16 = bVar16 ^ (byte)uVar83;
          bVar17 = bVar17 ^ (byte)(uVar83 >> 8);
          bVar18 = bVar18 ^ (byte)(uVar83 >> 0x10);
          bVar19 = bVar19 ^ (byte)(uVar83 >> 0x18);
          bVar24 = bVar24 ^ auVar118[4];
          bVar25 = bVar25 ^ auVar118[5];
          bVar26 = bVar26 ^ auVar118[6];
          bVar27 = bVar27 ^ auVar118[7];
          bVar57 = (byte)uVar6 ^ (byte)uVar96;
          bVar58 = (byte)(uVar6 >> 8) ^ (byte)(uVar96 >> 8);
          bVar59 = (byte)(uVar6 >> 0x10) ^ (byte)(uVar96 >> 0x10);
          bVar60 = (byte)(uVar6 >> 0x18) ^ (byte)(uVar96 >> 0x18);
          uVar6 = (ulong)CONCAT13(bVar60,CONCAT12(bVar59,CONCAT11(bVar58,bVar57)));
          bVar61 = (byte)uVar62 ^ auVar109[0xc];
          bVar63 = (byte)(uVar62 >> 8) ^ auVar109[0xd];
          bVar64 = (byte)(uVar62 >> 0x10) ^ auVar109[0xe];
          bVar65 = (byte)(uVar62 >> 0x18) ^ auVar109[0xf];
          uVar62 = (ulong)CONCAT13(bVar65,CONCAT12(bVar64,CONCAT11(bVar63,bVar61)));
          bVar45 = (byte)uVar46 ^ (byte)uVar117;
          bVar48 = (byte)(uVar46 >> 8) ^ (byte)(uVar117 >> 8);
          bVar49 = (byte)(uVar46 >> 0x10) ^ (byte)(uVar117 >> 0x10);
          bVar50 = (byte)(uVar46 >> 0x18) ^ (byte)(uVar117 >> 0x18);
          uVar46 = (ulong)CONCAT13(bVar50,CONCAT12(bVar49,CONCAT11(bVar48,bVar45)));
          bVar51 = (byte)uVar52 ^ auVar109[4];
          bVar54 = (byte)(uVar52 >> 8) ^ auVar109[5];
          bVar55 = (byte)(uVar52 >> 0x10) ^ auVar109[6];
          bVar56 = (byte)(uVar52 >> 0x18) ^ auVar109[7];
          uVar52 = (ulong)CONCAT13(bVar56,CONCAT12(bVar55,CONCAT11(bVar54,bVar51)));
          puVar14 = puVar14 + 1;
        } while (lVar8 != 0);
        bVar16 = bVar16 ^ bVar45 ^ bVar28 ^ bVar57;
        bVar17 = bVar17 ^ bVar48 ^ bVar29 ^ bVar58;
        bVar18 = bVar18 ^ bVar49 ^ bVar30 ^ bVar59;
        bVar19 = bVar19 ^ bVar50 ^ bVar31 ^ bVar60;
        bVar24 = bVar24 ^ bVar51 ^ bVar32 ^ bVar61;
        bVar25 = bVar25 ^ bVar54 ^ bVar33 ^ bVar63;
        bVar26 = bVar26 ^ bVar55 ^ bVar34 ^ bVar64;
        bVar27 = bVar27 ^ bVar56 ^ bVar35 ^ bVar65;
        auVar2[1] = bVar17;
        auVar2[0] = bVar16;
        auVar2[2] = bVar18;
        auVar2[3] = bVar19;
        auVar2[4] = uVar20;
        auVar2[5] = uVar21;
        auVar2[6] = uVar22;
        auVar2[7] = uVar23;
        auVar2[8] = bVar24;
        auVar2[9] = bVar25;
        auVar2[10] = bVar26;
        auVar2[0xb] = bVar27;
        auVar2._12_4_ = 0;
        auVar3[1] = bVar17;
        auVar3[0] = bVar16;
        auVar3[2] = bVar18;
        auVar3[3] = bVar19;
        auVar3[4] = uVar20;
        auVar3[5] = uVar21;
        auVar3[6] = uVar22;
        auVar3[7] = uVar23;
        auVar3[8] = bVar24;
        auVar3[9] = bVar25;
        auVar3[10] = bVar26;
        auVar3[0xb] = bVar27;
        auVar3._12_4_ = 0;
        auVar118 = NEON_ext(auVar2,auVar3,8,1);
        uVar6 = (ulong)CONCAT13(bVar19 ^ auVar118[3],
                                CONCAT12(bVar18 ^ auVar118[2],
                                         CONCAT11(bVar17 ^ auVar118[1],bVar16 ^ auVar118[0])));
        if (uVar12 == uVar7) goto LAB_003de018;
      }
LAB_003de2d0:
      uVar13 = (int)uVar12 * 3;
      lVar8 = uVar7 - uVar12;
      pbVar11 = *pauVar10 + uVar12;
      do {
        lVar8 = lVar8 + -1;
        uVar1 = uVar13 % 0x18;
        uVar13 = uVar13 + 3;
        uVar6 = uVar6 ^ (uint)*pbVar11 << (ulong)uVar1;
        pbVar11 = pbVar11 + 1;
      } while (lVar8 != 0);
      goto LAB_003de018;
    }
    if (iVar36 != 1) {
      return 0;
    }
    uVar5 = *puVar9;
  }
  else {
    if (iVar36 != 2) {
      if (iVar36 != 3) {
        return 0;
      }
      uVar6 = (ulong)*(uint *)(puVar9 + 2);
      goto LAB_003de018;
    }
    uVar5 = puVar9[1];
  }
  uVar6 = FUN_003b8b18(uVar5);
LAB_003de018:
  return uVar6 & 0x3fffffff | (long)*param_1 << 0x1e;
}


// ===== 003de310  FUN_003de310 =====

int FUN_003de310(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  iVar2 = *param_1;
  iVar1 = iVar2 - *param_2;
  if (iVar1 == 0) {
    puVar4 = *(undefined8 **)(param_1 + 2);
    puVar3 = *(undefined8 **)(param_2 + 2);
    if (iVar2 < 2) {
      if (iVar2 == 0) {
        iVar1 = *(int *)((long)puVar4 + 0x14) - *(int *)((long)puVar3 + 0x14);
        if (iVar1 == 0) {
          iVar2 = memcmp((void *)puVar4[3],(void *)puVar3[3],(long)*(int *)((long)puVar4 + 0x14));
          return iVar2;
        }
      }
      else if (iVar2 == 1) {
        if ((char *)*puVar4 == (char *)0x0) {
          return -1;
        }
        if ((char *)*puVar3 == (char *)0x0) {
          return 1;
        }
        iVar2 = strcmp((char *)*puVar4,(char *)*puVar3);
        return iVar2;
      }
    }
    else {
      if (iVar2 == 2) {
        if ((char *)puVar4[1] == (char *)0x0) {
          return -1;
        }
        if ((char *)puVar3[1] == (char *)0x0) {
          return 1;
        }
        iVar2 = strcmp((char *)puVar4[1],(char *)puVar3[1]);
        return iVar2;
      }
      if (iVar2 == 3) {
        return *(int *)(puVar4 + 2) - *(int *)(puVar3 + 2);
      }
    }
  }
  return iVar1;
}


// ===== 003de3b8  FUN_003de3b8 =====

long FUN_003de3b8(undefined8 param_1,long param_2,uint param_3,int param_4,code *param_5,
                 uint param_6)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  
  if (param_3 == 0) {
LAB_003de444:
    lVar5 = 0;
  }
  else {
    if ((int)param_3 < 1) {
      bVar2 = false;
      lVar5 = 0;
      uVar8 = 0;
    }
    else {
      iVar4 = 0;
      do {
        iVar3 = param_3 + iVar4;
        if (iVar3 < 0 != SCARRY4(param_3,iVar4)) {
          iVar3 = iVar3 + 1;
        }
        uVar8 = iVar3 >> 1;
        lVar5 = param_2 + (long)(int)uVar8 * (long)param_4;
        iVar3 = (*param_5)(param_1,lVar5);
        uVar7 = uVar8;
        if (-1 < iVar3) {
          if (iVar3 == 0) {
            bVar2 = false;
            goto joined_r0x003de464;
          }
          iVar4 = uVar8 + 1;
          uVar7 = param_3;
        }
        param_3 = uVar7;
      } while (iVar4 < (int)param_3);
      if ((param_6 & 1) == 0) goto LAB_003de444;
      bVar2 = true;
    }
joined_r0x003de464:
    if (((param_6 >> 1 & 1) != 0) && (!bVar2)) {
      uVar7 = uVar8 & (int)uVar8 >> 0x1f;
      lVar5 = param_2 + (long)(int)(uVar8 - 1) * (long)param_4;
      lVar6 = (long)(int)uVar8;
      do {
        lVar1 = lVar6 + -1;
        if (lVar6 < 1) goto LAB_003de4b0;
        iVar4 = (*param_5)(param_1,lVar5);
        lVar5 = lVar5 - param_4;
        lVar6 = lVar1;
      } while (iVar4 == 0);
      uVar7 = (int)lVar1 + 1;
LAB_003de4b0:
      lVar5 = param_2 + (long)(int)uVar7 * (long)param_4;
    }
  }
  return lVar5;
}


// ===== 003de4d4  FUN_003de4d4 =====

undefined8 FUN_003de4d4(void)

{
  long lVar1;
  
  lVar1 = FUN_0037aa50(0x4000066);
  if (lVar1 != 0) {
    return 1;
  }
  FUN_00379fc4(&DAT_00778c38);
  return 1;
}


// ===== 003de510  FUN_003de510 =====

long * FUN_003de510(long *param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  
  if (param_1 == (long *)0x0) {
    return (long *)0x0;
  }
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    return param_1;
  }
  plVar1 = (long *)FUN_0039a198();
  if (plVar1 == (long *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/objects/obj_lib.c",0x1c,"OBJ_dup");
    FUN_00379a5c(8,0x8000d,0);
    return (long *)0x0;
  }
  iVar3 = *(int *)((long)param_1 + 0x14);
  *(uint *)(plVar1 + 4) = *(uint *)(param_1 + 4) | 0xd;
  if (0 < iVar3) {
    lVar2 = FUN_003ca404(param_1[3],iVar3,"crypto/objects/obj_lib.c",0x26);
    plVar1[3] = lVar2;
    if (lVar2 == 0) goto LAB_003de604;
    iVar3 = *(int *)((long)param_1 + 0x14);
  }
  lVar2 = param_1[1];
  *(int *)(plVar1 + 2) = (int)param_1[2];
  *(int *)((long)plVar1 + 0x14) = iVar3;
  if (lVar2 != 0) {
    lVar2 = FUN_003ca2f4(lVar2,"crypto/objects/obj_lib.c",0x2c);
    plVar1[1] = lVar2;
    if (lVar2 == 0) goto LAB_003de604;
  }
  if (*param_1 == 0) {
    return plVar1;
  }
  lVar2 = FUN_003ca2f4(*param_1,"crypto/objects/obj_lib.c",0x2f);
  *plVar1 = lVar2;
  if (lVar2 != 0) {
    return plVar1;
  }
LAB_003de604:
  FUN_0039a0f4(plVar1);
  return (long *)0x0;
}


// ===== 003de61c  FUN_003de61c =====

int FUN_003de61c(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14) - *(int *)(param_2 + 0x14);
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = memcmp(*(void **)(param_1 + 0x18),*(void **)(param_2 + 0x18),
                 (long)*(int *)(param_1 + 0x14));
  return iVar1;
}


// ===== 003de640  FUN_003de640 =====

void FUN_003de640(void)

{
  FUN_003de648();
  return;
}


// ===== 003de648  FUN_003de648 =====

undefined8 FUN_003de648(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  long lVar2;
  int local_4c [3];
  
  local_4c[0] = (int)param_1;
  if (local_4c[0] == 0) {
    return param_1;
  }
  lVar2 = FUN_003dd608(local_4c,&DAT_0020d03c,0x35,0xc,FUN_003debc8);
  if (lVar2 == 0) {
    iVar1 = FUN_003d51c8(&DAT_007ac2f0,FUN_003dec08);
    if (iVar1 == 0) {
      return 0;
    }
    if (DAT_007ac2f4 == 0) {
      return 0;
    }
    if ((param_4 != 0) && (iVar1 = FUN_003d517c(DAT_007ac2f8), iVar1 == 0)) {
      FUN_00379868();
      FUN_0037995c("crypto/objects/obj_xref.c",0x52,"ossl_obj_find_sigid_algs");
      FUN_00379a5c(8,0xc010f,0);
      return 0;
    }
    lVar2 = DAT_007ac308;
    if (DAT_007ac308 != 0) {
      iVar1 = FUN_0040c48c(DAT_007ac308,local_4c);
      if (iVar1 < 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = FUN_0040cb0c(DAT_007ac308,iVar1);
      }
    }
    if (param_4 != 0) {
      FUN_003d519c(DAT_007ac2f8);
    }
    if (lVar2 == 0) {
      return 0;
    }
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(lVar2 + 4);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(lVar2 + 8);
  }
  return 1;
}


// ===== 003de794  FUN_003de794 =====

undefined8 FUN_003de794(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined1 **ppuVar2;
  undefined1 *local_38;
  undefined1 auStack_2c [4];
  undefined4 local_28;
  int iStack_24;
  
  local_38 = auStack_2c;
  if (param_3 == 0) {
    return 0;
  }
  local_28 = param_2;
  iStack_24 = param_3;
  ppuVar2 = (undefined1 **)FUN_003dd608(&local_38,&PTR_DAT_00778c78,0x30,8,FUN_003debd8);
  if (ppuVar2 == (undefined1 **)0x0) {
    iVar1 = FUN_003d51c8(&DAT_007ac2f0,FUN_003dec08);
    if (iVar1 == 0) {
      return 0;
    }
    if (DAT_007ac2f4 == 0) {
      return 0;
    }
    iVar1 = FUN_003d517c(DAT_007ac2f8);
    if (iVar1 == 0) {
      FUN_00379868();
      FUN_0037995c("crypto/objects/obj_xref.c",0x7f,"OBJ_find_sigid_by_algs");
      FUN_00379a5c(8,0xc010f,0);
      return 0;
    }
    if ((DAT_007ac300 == 0) || (iVar1 = FUN_0040c48c(DAT_007ac300,auStack_2c), iVar1 < 0)) {
      FUN_003d519c(DAT_007ac2f8);
      return 0;
    }
    local_38 = (undefined1 *)FUN_0040cb0c(DAT_007ac300,iVar1);
    FUN_003d519c(DAT_007ac2f8);
    ppuVar2 = &local_38;
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *(undefined4 *)*ppuVar2;
  }
  return 1;
}


// ===== 003de8f8  FUN_003de8f8 =====

bool FUN_003de8f8(int param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  int local_4c [3];
  
  if (param_1 == 0) {
    return false;
  }
  if (param_3 == 0) {
    return false;
  }
  iVar3 = FUN_003d51c8(&DAT_007ac2f0,FUN_003dec08);
  if (iVar3 == 0) {
    return false;
  }
  if (DAT_007ac2f4 == 0) {
    return false;
  }
  piVar4 = (int *)FUN_003c83a4(0xc,"crypto/objects/obj_xref.c",0x9e);
  if (piVar4 == (int *)0x0) {
    return false;
  }
  *piVar4 = param_1;
  piVar4[1] = param_2;
  uVar1 = DAT_007ac2f8;
  piVar4[2] = param_3;
  iVar3 = FUN_003d518c(uVar1);
  if (iVar3 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/objects/obj_xref.c",0xa5,"OBJ_add_sigid");
    FUN_00379a5c(8,0xc0110,0);
    FUN_003c86b4(piVar4,"crypto/objects/obj_xref.c",0xa6);
    return false;
  }
  local_4c[0] = param_1;
  lVar5 = FUN_003dd608(local_4c,&DAT_0020d03c,0x35,0xc,FUN_003debc8);
  if (lVar5 != 0) {
LAB_003de9b0:
    bVar2 = *(int *)(lVar5 + 4) == param_2 && *(int *)(lVar5 + 8) == param_3;
    goto LAB_003deaf0;
  }
  iVar3 = FUN_003d51c8(&DAT_007ac2f0,FUN_003dec08);
  if ((iVar3 == 0) || (DAT_007ac2f4 == 0)) {
LAB_003dea68:
    if (DAT_007ac308 == 0) goto LAB_003dea70;
LAB_003dea84:
    if (((DAT_007ac300 != 0) || (DAT_007ac300 = FUN_0040bfd0(FUN_003deb40), DAT_007ac300 != 0)) &&
       (iVar3 = FUN_0040c89c(DAT_007ac308,piVar4), iVar3 != 0)) {
      iVar3 = FUN_0040c89c(DAT_007ac300,piVar4);
      if (iVar3 != 0) {
        FUN_0040cc10(DAT_007ac308);
        FUN_0040cc10(DAT_007ac300);
        piVar4 = (int *)0x0;
        bVar2 = true;
        goto LAB_003deaf0;
      }
      piVar4 = (int *)0x0;
    }
  }
  else {
    if (DAT_007ac308 != 0) {
      iVar3 = FUN_0040c48c(DAT_007ac308,local_4c);
      if ((-1 < iVar3) && (lVar5 = FUN_0040cb0c(DAT_007ac308,iVar3), lVar5 != 0)) goto LAB_003de9b0;
      goto LAB_003dea68;
    }
LAB_003dea70:
    DAT_007ac308 = FUN_0040bfd0(FUN_003deb28);
    if (DAT_007ac308 != 0) goto LAB_003dea84;
  }
  bVar2 = false;
LAB_003deaf0:
  FUN_003c86b4(piVar4,"crypto/objects/obj_xref.c",0xcc);
  FUN_003d519c(DAT_007ac2f8);
  return bVar2;
}


// ===== 003deb28  FUN_003deb28 =====

int FUN_003deb28(undefined8 *param_1,undefined8 *param_2)

{
  return *(int *)*param_1 - *(int *)*param_2;
}


// ===== 003deb40  FUN_003deb40 =====

int FUN_003deb40(long *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*param_2 + 4);
  iVar2 = *(int *)(*param_1 + 4) - iVar1;
  if (iVar1 == 0 || iVar2 == 0) {
    iVar2 = *(int *)(*param_1 + 8) - *(int *)(*param_2 + 8);
  }
  return iVar2;
}


// ===== 003deb70  FUN_003deb70 =====

void FUN_003deb70(void)

{
  FUN_0040ca6c(DAT_007ac308,FUN_003debb8);
  FUN_0040bd78(DAT_007ac300);
  FUN_003d51ac(DAT_007ac2f8);
  DAT_007ac300 = 0;
  DAT_007ac308 = 0;
  DAT_007ac2f8 = 0;
  return;
}


// ===== 003debb8  FUN_003debb8 =====

void FUN_003debb8(undefined8 param_1)

{
  FUN_003c86b4(param_1,"crypto/objects/obj_xref.c",0xd3);
  return;
}


// ===== 003debc8  FUN_003debc8 =====

int FUN_003debc8(int *param_1,int *param_2)

{
  return *param_1 - *param_2;
}


// ===== 003debd8  FUN_003debd8 =====

int FUN_003debd8(long *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*param_2 + 4);
  iVar2 = *(int *)(*param_1 + 4) - iVar1;
  if (iVar1 == 0 || iVar2 == 0) {
    iVar2 = *(int *)(*param_1 + 8) - *(int *)(*param_2 + 8);
  }
  return iVar2;
}


// ===== 003dec08  FUN_003dec08 =====

void FUN_003dec08(void)

{
  DAT_007ac2f8 = FUN_003d5150();
  DAT_007ac2f4 = (uint)(DAT_007ac2f8 != 0);
  return;
}


// ===== 003dec34  FUN_003dec34 =====

undefined8 FUN_003dec34(void)

{
  long lVar1;
  
  lVar1 = FUN_0037aa50(0x4800064);
  if (lVar1 != 0) {
    return 1;
  }
  FUN_00379fc4(&DAT_00778df8);
  return 1;
}


// ===== 003dec70  FUN_003dec70 =====

void FUN_003dec70(void)

{
  return;
}


// ===== 003dec74  FUN_003dec74 =====

undefined4
FUN_003dec74(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            long param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,undefined8 param_9
            )

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [64];
  
  if (param_5 == 0) {
    return 0;
  }
  uVar5 = FUN_003a4a8c();
  puVar6 = (undefined8 *)FUN_0039b0f4(uVar5,param_4);
  if (puVar6 == (undefined8 *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/pkcs12/p12_crpt.c",0x29,"PKCS12_PBE_keyivgen_ex");
    FUN_00379a5c(0x23,0x65,0);
    return 0;
  }
  if (puVar6[1] == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = FUN_0038dea4();
  }
  uVar5 = *(undefined8 *)((undefined4 *)*puVar6 + 2);
  uVar1 = *(undefined4 *)*puVar6;
  uVar3 = FUN_003897a4(param_5);
  iVar4 = FUN_003df16c(param_2,param_3,uVar5,uVar1,1,uVar2,uVar3,auStack_a0,param_6,param_8,param_9)
  ;
  if (iVar4 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/pkcs12/p12_crpt.c",0x37,"PKCS12_PBE_keyivgen_ex");
    uVar5 = 0x6b;
LAB_003dee04:
    FUN_00379a5c(0x23,uVar5,0);
    FUN_003a4abc(puVar6);
    uVar2 = 0;
  }
  else {
    iVar4 = FUN_003894b8(param_5);
    if (iVar4 < 1) {
      puVar7 = (undefined1 *)0x0;
    }
    else {
      uVar3 = FUN_003894b8(param_5);
      puVar7 = auStack_b0;
      iVar4 = FUN_003df16c(param_2,param_3,uVar5,uVar1,2,uVar2,uVar3,auStack_b0,param_6,param_8,
                           param_9);
      if (iVar4 == 0) {
        FUN_00379868();
        FUN_0037995c("crypto/pkcs12/p12_crpt.c",0x40,"PKCS12_PBE_keyivgen_ex");
        uVar5 = 0x6a;
        goto LAB_003dee04;
      }
    }
    FUN_003a4abc(puVar6);
    uVar2 = FUN_003803c8(param_1,param_5,0,auStack_a0,puVar7,param_7);
    FUN_003c89b8(auStack_a0,0x40);
    FUN_003c89b8(auStack_b0,0x10);
  }
  return uVar2;
}


// ===== 003dee84  FUN_003dee84 =====

void FUN_003dee84(void)

{
  FUN_003dec74();
  return;
}


// ===== 003deea8  FUN_003deea8 =====

undefined4
FUN_003deea8(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5,
            ulong param_6,ulong param_7,undefined8 param_8,undefined8 param_9,undefined8 param_10,
            undefined8 param_11)

{
  undefined4 uVar1;
  long lVar2;
  int local_4c;
  undefined8 local_48;
  
  if (param_1 == 0) {
    local_48 = 0;
    local_4c = 0;
  }
  else {
    param_4 = param_4 & 0xffffffff;
    param_5 = param_5 & 0xffffffff;
    param_6 = param_6 & 0xffffffff;
    param_7 = param_7 & 0xffffffff;
    lVar2 = FUN_003df2b8(param_1,param_2,&local_48,&local_4c);
    if (lVar2 == 0) {
      FUN_00379868();
      FUN_0037995c("crypto/pkcs12/p12_key.c",0x20,"PKCS12_key_gen_asc_ex");
      FUN_00379a5c(0x23,0x80023,0);
      return 0;
    }
  }
  uVar1 = FUN_003defa4(local_48,local_4c,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                       param_10,param_11);
  FUN_003c893c(local_48,(long)local_4c,"crypto/pkcs12/p12_key.c",0x25);
  return uVar1;
}


// ===== 003defa4  FUN_003defa4 =====

bool FUN_003defa4(undefined8 param_1,int param_2,undefined8 param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,int param_7,undefined8 param_8,undefined8 param_9,
                 undefined8 param_10,undefined8 param_11)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined1 auStack_158 [40];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  
  if (0 < param_7) {
    local_68 = param_6;
    uStack_64 = param_5;
    lVar2 = FUN_003a5290(param_10,"PKCS12KDF",param_11);
    if (lVar2 == 0) {
      return false;
    }
    lVar3 = FUN_003a4e60();
    FUN_003a5660(lVar2);
    if (lVar3 != 0) {
      uVar4 = FUN_0038996c(param_9);
      FUN_003cd8cc(auStack_158,"digest",uVar4,0);
      FUN_003cd924(&local_180,&DAT_001e0907,param_1,(long)param_2);
      local_110 = local_160;
      uStack_128 = uStack_178;
      local_130 = local_180;
      uStack_118 = uStack_168;
      uStack_120 = uStack_170;
      FUN_003cd924(&local_180,&DAT_001c2fe1,param_3,(long)param_4);
      local_e8 = local_160;
      uStack_100 = uStack_178;
      local_108 = local_180;
      uStack_f0 = uStack_168;
      local_f8 = uStack_170;
      FUN_003cb668(&local_180,&DAT_001da6db,&uStack_64);
      local_c0 = local_160;
      uStack_d8 = uStack_178;
      local_e0 = local_180;
      uStack_c8 = uStack_168;
      local_d0 = uStack_170;
      FUN_003cb668(&local_180,&DAT_001c7525,&local_68);
      local_98 = local_160;
      uStack_b0 = uStack_178;
      local_b8 = local_180;
      uStack_a0 = uStack_168;
      uStack_a8 = uStack_170;
      FUN_003cdfcc(&local_180);
      uStack_88 = uStack_178;
      local_90 = local_180;
      uStack_78 = uStack_168;
      local_80 = uStack_170;
      local_70 = local_160;
      iVar1 = FUN_003a5208(lVar3,param_8,param_7,auStack_158);
      FUN_003a4f88(lVar3);
      return iVar1 != 0;
    }
  }
  return false;
}


// ===== 003df144  FUN_003df144 =====

void FUN_003df144(void)

{
  FUN_003deea8();
  return;
}


// ===== 003df16c  FUN_003df16c =====

undefined4
FUN_003df16c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5,
            ulong param_6,ulong param_7,undefined8 param_8,undefined8 param_9,undefined8 param_10,
            undefined8 param_11)

{
  undefined4 uVar1;
  long lVar2;
  int local_4c;
  undefined8 local_48;
  
  if (param_1 == 0) {
    local_48 = 0;
    local_4c = 0;
  }
  else {
    param_4 = param_4 & 0xffffffff;
    param_5 = param_5 & 0xffffffff;
    param_6 = param_6 & 0xffffffff;
    param_7 = param_7 & 0xffffffff;
    lVar2 = FUN_003df5c0(param_1,param_2,&local_48,&local_4c);
    if (lVar2 == 0) {
      FUN_00379868();
      FUN_0037995c("crypto/pkcs12/p12_key.c",0x3e,"PKCS12_key_gen_utf8_ex");
      FUN_00379a5c(0x23,0x80023,0);
      return 0;
    }
  }
  uVar1 = FUN_003defa4(local_48,local_4c,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                       param_10,param_11);
  FUN_003c893c(local_48,(long)local_4c,"crypto/pkcs12/p12_key.c",0x43);
  return uVar1;
}


// ===== 003df268  FUN_003df268 =====

void FUN_003df268(void)

{
  FUN_003df16c();
  return;
}


// ===== 003df290  FUN_003df290 =====

void FUN_003df290(void)

{
  FUN_003defa4();
  return;
}


// ===== 003df2b8  FUN_003df2b8 =====

undefined1 * FUN_003df2b8(char *param_1,uint param_2,undefined8 *param_3,int *param_4)

{
  ulong uVar1;
  char cVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  size_t sVar6;
  char *pcVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  if (param_2 == 0xffffffff) {
    sVar6 = strlen(param_1);
    param_2 = (uint)sVar6;
    if ((int)param_2 < 0) {
      return (undefined1 *)0x0;
    }
  }
  else if ((int)param_2 < 0) {
    return (undefined1 *)0x0;
  }
  uVar3 = param_2 * 2;
  uVar12 = (ulong)uVar3;
  puVar5 = (undefined1 *)FUN_003c83a4(uVar3 + 2,"crypto/pkcs12/p12_utl.c",0x1d);
  if (puVar5 == (undefined1 *)0x0) {
    return (undefined1 *)0x0;
  }
  if (param_2 == 0) {
    *puVar5 = 0;
    puVar5[(ulong)uVar3 + 1] = 0;
    goto joined_r0x003df354;
  }
  if (param_2 < 8) {
    uVar9 = 0;
LAB_003df3f8:
    pcVar7 = param_1 + (uVar9 >> 1);
    do {
      puVar4 = puVar5 + uVar9;
      cVar2 = *pcVar7;
      uVar9 = uVar9 + 2;
      *puVar4 = 0;
      puVar4[1] = cVar2;
      pcVar7 = pcVar7 + 1;
    } while (uVar9 < uVar12);
  }
  else {
    uVar1 = (uVar12 - 1 >> 1) + 1;
    if (param_2 < 0x20) {
      uVar8 = 0;
LAB_003df3c0:
      uVar10 = uVar1 & 0xfffffffffffffff8;
      puVar4 = puVar5 + uVar8 * 2;
      uVar9 = uVar10 << 1;
      do {
        uVar11 = uVar8 & 0x7ffffffffffffff8;
        uVar8 = uVar8 + 8;
        uVar13 = *(undefined8 *)(param_1 + uVar11);
        *puVar4 = 0;
        puVar4[1] = (char)uVar13;
        puVar4[2] = 0;
        puVar4[3] = (char)((ulong)uVar13 >> 8);
        puVar4[4] = 0;
        puVar4[5] = (char)((ulong)uVar13 >> 0x10);
        puVar4[6] = 0;
        puVar4[7] = (char)((ulong)uVar13 >> 0x18);
        puVar4[8] = 0;
        puVar4[9] = (char)((ulong)uVar13 >> 0x20);
        puVar4[10] = 0;
        puVar4[0xb] = (char)((ulong)uVar13 >> 0x28);
        puVar4[0xc] = 0;
        puVar4[0xd] = (char)((ulong)uVar13 >> 0x30);
        puVar4[0xe] = 0;
        puVar4[0xf] = (char)((ulong)uVar13 >> 0x38);
        puVar4 = puVar4 + 0x10;
      } while (uVar10 != uVar8);
      if (uVar1 != uVar10) goto LAB_003df3f8;
    }
    else {
      uVar8 = uVar1 & 0xffffffffffffffe0;
      pcVar7 = param_1 + 0x10;
      puVar4 = puVar5 + 0x20;
      uVar9 = uVar8;
      do {
        uVar16 = *(undefined8 *)(pcVar7 + -8);
        uVar15 = *(undefined8 *)(pcVar7 + -0x10);
        uVar14 = *(undefined8 *)(pcVar7 + 8);
        uVar13 = *(undefined8 *)pcVar7;
        uVar9 = uVar9 - 0x20;
        pcVar7 = pcVar7 + 0x20;
        *puVar4 = 0;
        puVar4[1] = (char)uVar13;
        puVar4[2] = 0;
        puVar4[3] = (char)((ulong)uVar13 >> 8);
        puVar4[4] = 0;
        puVar4[5] = (char)((ulong)uVar13 >> 0x10);
        puVar4[6] = 0;
        puVar4[7] = (char)((ulong)uVar13 >> 0x18);
        puVar4[8] = 0;
        puVar4[9] = (char)((ulong)uVar13 >> 0x20);
        puVar4[10] = 0;
        puVar4[0xb] = (char)((ulong)uVar13 >> 0x28);
        puVar4[0xc] = 0;
        puVar4[0xd] = (char)((ulong)uVar13 >> 0x30);
        puVar4[0xe] = 0;
        puVar4[0xf] = (char)((ulong)uVar13 >> 0x38);
        puVar4[0x10] = 0;
        puVar4[0x11] = (char)uVar14;
        puVar4[0x12] = 0;
        puVar4[0x13] = (char)((ulong)uVar14 >> 8);
        puVar4[0x14] = 0;
        puVar4[0x15] = (char)((ulong)uVar14 >> 0x10);
        puVar4[0x16] = 0;
        puVar4[0x17] = (char)((ulong)uVar14 >> 0x18);
        puVar4[0x18] = 0;
        puVar4[0x19] = (char)((ulong)uVar14 >> 0x20);
        puVar4[0x1a] = 0;
        puVar4[0x1b] = (char)((ulong)uVar14 >> 0x28);
        puVar4[0x1c] = 0;
        puVar4[0x1d] = (char)((ulong)uVar14 >> 0x30);
        puVar4[0x1e] = 0;
        puVar4[0x1f] = (char)((ulong)uVar14 >> 0x38);
        puVar4[-0x20] = 0;
        puVar4[-0x1f] = (char)uVar15;
        puVar4[-0x1e] = 0;
        puVar4[-0x1d] = (char)((ulong)uVar15 >> 8);
        puVar4[-0x1c] = 0;
        puVar4[-0x1b] = (char)((ulong)uVar15 >> 0x10);
        puVar4[-0x1a] = 0;
        puVar4[-0x19] = (char)((ulong)uVar15 >> 0x18);
        puVar4[-0x18] = 0;
        puVar4[-0x17] = (char)((ulong)uVar15 >> 0x20);
        puVar4[-0x16] = 0;
        puVar4[-0x15] = (char)((ulong)uVar15 >> 0x28);
        puVar4[-0x14] = 0;
        puVar4[-0x13] = (char)((ulong)uVar15 >> 0x30);
        puVar4[-0x12] = 0;
        puVar4[-0x11] = (char)((ulong)uVar15 >> 0x38);
        puVar4[-0x10] = 0;
        puVar4[-0xf] = (char)uVar16;
        puVar4[-0xe] = 0;
        puVar4[-0xd] = (char)((ulong)uVar16 >> 8);
        puVar4[-0xc] = 0;
        puVar4[-0xb] = (char)((ulong)uVar16 >> 0x10);
        puVar4[-10] = 0;
        puVar4[-9] = (char)((ulong)uVar16 >> 0x18);
        puVar4[-8] = 0;
        puVar4[-7] = (char)((ulong)uVar16 >> 0x20);
        puVar4[-6] = 0;
        puVar4[-5] = (char)((ulong)uVar16 >> 0x28);
        puVar4[-4] = 0;
        puVar4[-3] = (char)((ulong)uVar16 >> 0x30);
        puVar4[-2] = 0;
        puVar4[-1] = (char)((ulong)uVar16 >> 0x38);
        puVar4 = puVar4 + 0x40;
      } while (uVar9 != 0);
      if (uVar1 != uVar8) {
        if ((uVar1 & 0x18) == 0) {
          uVar9 = uVar8 << 1;
          goto LAB_003df3f8;
        }
        goto LAB_003df3c0;
      }
    }
  }
  puVar5[uVar12] = 0;
  puVar5[uVar12 + 1] = 0;
joined_r0x003df354:
  if (param_4 != (int *)0x0) {
    *param_4 = uVar3 + 2;
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = puVar5;
    return puVar5;
  }
  return puVar5;
}


// ===== 003df44c  FUN_003df44c =====

long FUN_003df44c(long param_1,uint param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  uint uVar4;
  undefined1 *puVar5;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  
  if ((param_2 & 0x80000001) != 0) {
    return 0;
  }
  uVar4 = param_2 >> 1;
  if ((param_2 == 0) || (*(char *)(param_1 + (ulong)param_2 + -1) != '\0')) {
    uVar4 = uVar4 + 1;
    lVar13 = FUN_003c83a4(uVar4,"crypto/pkcs12/p12_utl.c",0x3c);
  }
  else {
    lVar13 = FUN_003c83a4(uVar4,"crypto/pkcs12/p12_utl.c",0x3c);
  }
  if (lVar13 == 0) {
    return 0;
  }
  if (param_2 == 0) goto LAB_003df5a8;
  if (param_2 < 0x11) {
    uVar15 = 0;
  }
  else {
    uVar1 = ((ulong)param_2 - 1 >> 1) + 1;
    if (param_2 < 0x41) {
      uVar14 = 0;
    }
    else {
      uVar15 = 0;
      uVar3 = 0x20;
      if ((uVar1 & 0x1f) != 0) {
        uVar3 = uVar1 & 0x1f;
      }
      uVar14 = uVar1 - uVar3;
      puVar12 = (undefined1 *)(param_1 + 0x21);
      do {
        uVar25 = *puVar12;
        uVar26 = puVar12[2];
        uVar27 = puVar12[4];
        uVar28 = puVar12[6];
        uVar29 = puVar12[8];
        uVar30 = puVar12[10];
        uVar31 = puVar12[0xc];
        uVar32 = puVar12[0xe];
        uVar33 = puVar12[0x10];
        uVar34 = puVar12[0x12];
        uVar35 = puVar12[0x14];
        uVar36 = puVar12[0x16];
        uVar37 = puVar12[0x18];
        uVar38 = puVar12[0x1a];
        uVar39 = puVar12[0x1c];
        uVar40 = puVar12[0x1e];
        uVar17 = puVar12[-0x20];
        uVar18 = puVar12[-0x1e];
        uVar19 = puVar12[-0x1c];
        uVar20 = puVar12[-0x1a];
        uVar21 = puVar12[-0x18];
        uVar22 = puVar12[-0x16];
        uVar23 = puVar12[-0x14];
        uVar24 = puVar12[-0x12];
        uVar16 = uVar15 & 0x7fffffffffffffe0;
        uVar15 = uVar15 + 0x20;
        puVar2 = (undefined8 *)(lVar13 + uVar16);
        puVar2[1] = CONCAT17(puVar12[-2],
                             CONCAT16(puVar12[-4],
                                      CONCAT15(puVar12[-6],
                                               CONCAT14(puVar12[-8],
                                                        CONCAT13(puVar12[-10],
                                                                 CONCAT12(puVar12[-0xc],
                                                                          CONCAT11(puVar12[-0xe],
                                                                                   puVar12[-0x10])))
                                                       ))));
        *puVar2 = CONCAT17(uVar24,CONCAT16(uVar23,CONCAT15(uVar22,CONCAT14(uVar21,CONCAT13(uVar20,
                                                  CONCAT12(uVar19,CONCAT11(uVar18,uVar17)))))));
        puVar2[3] = CONCAT17(uVar40,CONCAT16(uVar39,CONCAT15(uVar38,CONCAT14(uVar37,CONCAT13(uVar36,
                                                  CONCAT12(uVar35,CONCAT11(uVar34,uVar33)))))));
        puVar2[2] = CONCAT17(uVar32,CONCAT16(uVar31,CONCAT15(uVar30,CONCAT14(uVar29,CONCAT13(uVar28,
                                                  CONCAT12(uVar27,CONCAT11(uVar26,uVar25)))))));
        puVar12 = puVar12 + 0x40;
      } while (uVar14 != uVar15);
      if (uVar3 < 9) {
        uVar15 = uVar14 * 2;
        goto LAB_003df58c;
      }
    }
    uVar3 = 8;
    if ((uVar1 & 7) != 0) {
      uVar3 = uVar1 & 7;
    }
    uVar15 = (uVar1 - uVar3) * 2;
    puVar12 = (undefined1 *)(param_1 + uVar14 * 2 + 1);
    do {
      uVar17 = *puVar12;
      puVar5 = puVar12 + 2;
      puVar6 = puVar12 + 4;
      puVar7 = puVar12 + 6;
      puVar8 = puVar12 + 8;
      puVar9 = puVar12 + 10;
      puVar10 = puVar12 + 0xc;
      puVar11 = puVar12 + 0xe;
      puVar12 = puVar12 + 0x10;
      uVar16 = uVar14 & 0x7fffffffffffffff;
      uVar14 = uVar14 + 8;
      *(ulong *)(lVar13 + uVar16) =
           CONCAT17(*puVar11,CONCAT16(*puVar10,CONCAT15(*puVar9,CONCAT14(*puVar8,CONCAT13(*puVar7,
                                                  CONCAT12(*puVar6,CONCAT11(*puVar5,uVar17)))))));
    } while (uVar1 - uVar3 != uVar14);
  }
LAB_003df58c:
  puVar12 = (undefined1 *)(lVar13 + (uVar15 >> 1));
  do {
    puVar5 = (undefined1 *)(param_1 + 1 + uVar15);
    uVar15 = uVar15 + 2;
    *puVar12 = *puVar5;
    puVar12 = puVar12 + 1;
  } while (uVar15 < param_2);
LAB_003df5a8:
  *(undefined1 *)(lVar13 + (ulong)uVar4 + -1) = 0;
  return lVar13;
}


// ===== 003df5c0  FUN_003df5c0 =====

byte * FUN_003df5c0(char *param_1,uint param_2,undefined8 *param_3,int *param_4)

{
  ulong uVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  size_t sVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong uVar9;
  char *pcVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  int iVar15;
  int iVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  ulong local_48;
  
  uVar14 = (ulong)param_2;
  local_48 = 0;
  if (param_2 == 0xffffffff) {
    sVar6 = strlen(param_1);
    uVar14 = sVar6 & 0xffffffff;
    if (0 < (int)sVar6) goto LAB_003df600;
  }
  else if (0 < (int)param_2) {
LAB_003df600:
    iVar15 = 0;
    iVar16 = 0;
    do {
      uVar13 = (uint)uVar14;
      iVar4 = FUN_003c24e8(param_1 + iVar16,uVar13 - iVar16,&local_48);
      if (iVar4 < 0) {
        uVar14 = uVar14 * 2;
        iVar15 = (int)uVar14 + 2;
        pbVar5 = (byte *)FUN_003c83a4(iVar15,"crypto/pkcs12/p12_utl.c",0x1d);
        if (pbVar5 == (byte *)0x0) {
          return (byte *)0x0;
        }
        if (uVar13 < 8) {
          uVar9 = 0;
          goto LAB_003df858;
        }
        uVar1 = (uVar14 - 1 >> 1) + 1;
        if (0x1f < uVar13) {
          uVar8 = uVar1 & 0xffffffffffffffe0;
          pcVar10 = param_1 + 0x10;
          pbVar3 = pbVar5 + 0x20;
          uVar9 = uVar8;
          do {
            uVar20 = *(undefined8 *)(pcVar10 + -8);
            uVar19 = *(undefined8 *)(pcVar10 + -0x10);
            uVar18 = *(undefined8 *)(pcVar10 + 8);
            uVar17 = *(undefined8 *)pcVar10;
            uVar9 = uVar9 - 0x20;
            pcVar10 = pcVar10 + 0x20;
            *pbVar3 = 0;
            pbVar3[1] = (byte)uVar17;
            pbVar3[2] = 0;
            pbVar3[3] = (byte)((ulong)uVar17 >> 8);
            pbVar3[4] = 0;
            pbVar3[5] = (byte)((ulong)uVar17 >> 0x10);
            pbVar3[6] = 0;
            pbVar3[7] = (byte)((ulong)uVar17 >> 0x18);
            pbVar3[8] = 0;
            pbVar3[9] = (byte)((ulong)uVar17 >> 0x20);
            pbVar3[10] = 0;
            pbVar3[0xb] = (byte)((ulong)uVar17 >> 0x28);
            pbVar3[0xc] = 0;
            pbVar3[0xd] = (byte)((ulong)uVar17 >> 0x30);
            pbVar3[0xe] = 0;
            pbVar3[0xf] = (byte)((ulong)uVar17 >> 0x38);
            pbVar3[0x10] = 0;
            pbVar3[0x11] = (byte)uVar18;
            pbVar3[0x12] = 0;
            pbVar3[0x13] = (byte)((ulong)uVar18 >> 8);
            pbVar3[0x14] = 0;
            pbVar3[0x15] = (byte)((ulong)uVar18 >> 0x10);
            pbVar3[0x16] = 0;
            pbVar3[0x17] = (byte)((ulong)uVar18 >> 0x18);
            pbVar3[0x18] = 0;
            pbVar3[0x19] = (byte)((ulong)uVar18 >> 0x20);
            pbVar3[0x1a] = 0;
            pbVar3[0x1b] = (byte)((ulong)uVar18 >> 0x28);
            pbVar3[0x1c] = 0;
            pbVar3[0x1d] = (byte)((ulong)uVar18 >> 0x30);
            pbVar3[0x1e] = 0;
            pbVar3[0x1f] = (byte)((ulong)uVar18 >> 0x38);
            pbVar3[-0x20] = 0;
            pbVar3[-0x1f] = (byte)uVar19;
            pbVar3[-0x1e] = 0;
            pbVar3[-0x1d] = (byte)((ulong)uVar19 >> 8);
            pbVar3[-0x1c] = 0;
            pbVar3[-0x1b] = (byte)((ulong)uVar19 >> 0x10);
            pbVar3[-0x1a] = 0;
            pbVar3[-0x19] = (byte)((ulong)uVar19 >> 0x18);
            pbVar3[-0x18] = 0;
            pbVar3[-0x17] = (byte)((ulong)uVar19 >> 0x20);
            pbVar3[-0x16] = 0;
            pbVar3[-0x15] = (byte)((ulong)uVar19 >> 0x28);
            pbVar3[-0x14] = 0;
            pbVar3[-0x13] = (byte)((ulong)uVar19 >> 0x30);
            pbVar3[-0x12] = 0;
            pbVar3[-0x11] = (byte)((ulong)uVar19 >> 0x38);
            pbVar3[-0x10] = 0;
            pbVar3[-0xf] = (byte)uVar20;
            pbVar3[-0xe] = 0;
            pbVar3[-0xd] = (byte)((ulong)uVar20 >> 8);
            pbVar3[-0xc] = 0;
            pbVar3[-0xb] = (byte)((ulong)uVar20 >> 0x10);
            pbVar3[-10] = 0;
            pbVar3[-9] = (byte)((ulong)uVar20 >> 0x18);
            pbVar3[-8] = 0;
            pbVar3[-7] = (byte)((ulong)uVar20 >> 0x20);
            pbVar3[-6] = 0;
            pbVar3[-5] = (byte)((ulong)uVar20 >> 0x28);
            pbVar3[-4] = 0;
            pbVar3[-3] = (byte)((ulong)uVar20 >> 0x30);
            pbVar3[-2] = 0;
            pbVar3[-1] = (byte)((ulong)uVar20 >> 0x38);
            pbVar3 = pbVar3 + 0x40;
          } while (uVar9 != 0);
          if (uVar1 != uVar8) {
            if ((uVar1 & 0x18) == 0) {
              uVar9 = uVar8 << 1;
            }
            else {
LAB_003df820:
              uVar11 = uVar1 & 0xfffffffffffffff8;
              pbVar3 = pbVar5 + uVar8 * 2;
              uVar9 = uVar11 << 1;
              do {
                uVar12 = uVar8 & 0x7ffffffffffffff8;
                uVar8 = uVar8 + 8;
                uVar17 = *(undefined8 *)(param_1 + uVar12);
                *pbVar3 = 0;
                pbVar3[1] = (byte)uVar17;
                pbVar3[2] = 0;
                pbVar3[3] = (byte)((ulong)uVar17 >> 8);
                pbVar3[4] = 0;
                pbVar3[5] = (byte)((ulong)uVar17 >> 0x10);
                pbVar3[6] = 0;
                pbVar3[7] = (byte)((ulong)uVar17 >> 0x18);
                pbVar3[8] = 0;
                pbVar3[9] = (byte)((ulong)uVar17 >> 0x20);
                pbVar3[10] = 0;
                pbVar3[0xb] = (byte)((ulong)uVar17 >> 0x28);
                pbVar3[0xc] = 0;
                pbVar3[0xd] = (byte)((ulong)uVar17 >> 0x30);
                pbVar3[0xe] = 0;
                pbVar3[0xf] = (byte)((ulong)uVar17 >> 0x38);
                pbVar3 = pbVar3 + 0x10;
              } while (uVar11 != uVar8);
              if (uVar1 == uVar11) goto LAB_003df878;
            }
LAB_003df858:
            pbVar3 = (byte *)(param_1 + (uVar9 >> 1));
            do {
              pbVar7 = pbVar5 + uVar9;
              bVar2 = *pbVar3;
              uVar9 = uVar9 + 2;
              *pbVar7 = 0;
              pbVar7[1] = bVar2;
              pbVar3 = pbVar3 + 1;
            } while (uVar9 < uVar14);
          }
LAB_003df878:
          pbVar5[uVar14] = 0;
          pbVar5[(uVar14 & 0xfffffffe) + 1] = 0;
          goto joined_r0x003df7d0;
        }
        uVar8 = 0;
        goto LAB_003df820;
      }
      if (0x10 < local_48 >> 0x10) {
        return (byte *)0x0;
      }
      iVar16 = iVar4 + iVar16;
      iVar4 = 4;
      if (local_48 >> 0x10 == 0) {
        iVar4 = 2;
      }
      iVar15 = iVar4 + iVar15;
    } while (iVar16 < (int)uVar13);
    iVar15 = iVar15 + 2;
    pbVar5 = (byte *)FUN_003c83a4(iVar15,"crypto/pkcs12/p12_utl.c",0x78);
    if (pbVar5 == (byte *)0x0) {
      return (byte *)0x0;
    }
    if ((int)uVar13 < 1) {
      pbVar5[0] = 0;
      pbVar5[1] = 0;
    }
    else {
      iVar16 = 0;
      pbVar3 = pbVar5;
      do {
        while( true ) {
          iVar4 = FUN_003c24e8(param_1 + iVar16,uVar13 - iVar16,&local_48);
          bVar2 = (byte)(local_48 >> 8);
          if (local_48 < 0x10000) break;
          uVar14 = local_48 - 0x10000 >> 10;
          pbVar3[3] = (byte)local_48;
          pbVar3[2] = bVar2 & 3 | 0xdc;
          *pbVar3 = (byte)((uint)((int)uVar14 + 0xd800) >> 8);
          pbVar7 = pbVar3 + 4;
          iVar16 = iVar4 + iVar16;
          pbVar3[1] = (byte)uVar14;
          pbVar3 = pbVar7;
          local_48 = local_48 - 0x10000;
          if ((int)uVar13 <= iVar16) goto LAB_003df700;
        }
        pbVar7 = pbVar3 + 2;
        *pbVar3 = bVar2;
        iVar16 = iVar4 + iVar16;
        pbVar3[1] = (byte)local_48;
        pbVar3 = pbVar7;
      } while (iVar16 < (int)uVar13);
LAB_003df700:
      pbVar7[0] = 0;
      pbVar7[1] = 0;
    }
    goto joined_r0x003df7d0;
  }
  iVar15 = 2;
  pbVar5 = (byte *)FUN_003c83a4(2,"crypto/pkcs12/p12_utl.c",0x78);
  if (pbVar5 == (byte *)0x0) {
    return (byte *)0x0;
  }
  pbVar5[0] = 0;
  pbVar5[1] = 0;
joined_r0x003df7d0:
  if (param_4 != (int *)0x0) {
    *param_4 = iVar15;
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = pbVar5;
  }
  return pbVar5;
}


// ===== 003df88c  FUN_003df88c =====

long FUN_003df88c(long param_1,uint param_2)

{
  byte *pbVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined1 *puVar5;
  int iVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  undefined1 *puVar19;
  ulong uVar20;
  ulong uVar21;
  int iVar22;
  ulong uVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  
  if ((param_2 & 1) == 0) {
    uVar21 = (ulong)param_2;
    if (0 < (int)param_2) {
      uVar26 = 0;
      iVar22 = 0;
LAB_003df8ec:
      do {
        uVar24 = param_2 - uVar26;
        if ((int)uVar24 < 2) {
LAB_003df980:
          uVar23 = (ulong)(param_2 >> 1);
          uVar15 = uVar21;
          if (*(char *)(param_1 + uVar21 + -1) == '\0') {
            lVar14 = FUN_003c83a4(uVar23,"crypto/pkcs12/p12_utl.c",0x3c);
            if (lVar14 == 0) {
              return 0;
            }
            if (uVar21 < 3) {
              uVar15 = 2;
            }
          }
          else {
            uVar23 = (ulong)((param_2 >> 1) + 1);
            lVar14 = FUN_003c83a4(uVar23,"crypto/pkcs12/p12_utl.c",0x3c);
            if (lVar14 == 0) {
              return 0;
            }
            if (uVar21 < 3) {
              uVar15 = 2;
            }
          }
          if (param_2 < 0x11) {
            uVar15 = 0;
            goto LAB_003dfbc4;
          }
          uVar18 = (uVar15 - 1 >> 1) + 1;
          if (0x40 < param_2) {
            uVar15 = 0;
            uVar4 = 0x20;
            if ((uVar18 & 0x1f) != 0) {
              uVar4 = uVar18 & 0x1f;
            }
            uVar17 = uVar18 - uVar4;
            puVar19 = (undefined1 *)(param_1 + 0x21);
            do {
              uVar35 = *puVar19;
              uVar36 = puVar19[2];
              uVar37 = puVar19[4];
              uVar38 = puVar19[6];
              uVar39 = puVar19[8];
              uVar40 = puVar19[10];
              uVar41 = puVar19[0xc];
              uVar42 = puVar19[0xe];
              uVar43 = puVar19[0x10];
              uVar44 = puVar19[0x12];
              uVar45 = puVar19[0x14];
              uVar46 = puVar19[0x16];
              uVar47 = puVar19[0x18];
              uVar48 = puVar19[0x1a];
              uVar49 = puVar19[0x1c];
              uVar50 = puVar19[0x1e];
              uVar27 = puVar19[-0x20];
              uVar28 = puVar19[-0x1e];
              uVar29 = puVar19[-0x1c];
              uVar30 = puVar19[-0x1a];
              uVar31 = puVar19[-0x18];
              uVar32 = puVar19[-0x16];
              uVar33 = puVar19[-0x14];
              uVar34 = puVar19[-0x12];
              uVar20 = uVar15 & 0x7fffffffffffffe0;
              uVar15 = uVar15 + 0x20;
              puVar3 = (undefined8 *)(lVar14 + uVar20);
              puVar3[1] = CONCAT17(puVar19[-2],
                                   CONCAT16(puVar19[-4],
                                            CONCAT15(puVar19[-6],
                                                     CONCAT14(puVar19[-8],
                                                              CONCAT13(puVar19[-10],
                                                                       CONCAT12(puVar19[-0xc],
                                                                                CONCAT11(puVar19[
                                                  -0xe],puVar19[-0x10])))))));
              *puVar3 = CONCAT17(uVar34,CONCAT16(uVar33,CONCAT15(uVar32,CONCAT14(uVar31,CONCAT13(
                                                  uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)))))
                                                ));
              puVar3[3] = CONCAT17(uVar50,CONCAT16(uVar49,CONCAT15(uVar48,CONCAT14(uVar47,CONCAT13(
                                                  uVar46,CONCAT12(uVar45,CONCAT11(uVar44,uVar43)))))
                                                  ));
              puVar3[2] = CONCAT17(uVar42,CONCAT16(uVar41,CONCAT15(uVar40,CONCAT14(uVar39,CONCAT13(
                                                  uVar38,CONCAT12(uVar37,CONCAT11(uVar36,uVar35)))))
                                                  ));
              puVar19 = puVar19 + 0x40;
            } while (uVar17 != uVar15);
            if (uVar4 < 9) {
              uVar15 = uVar17 * 2;
            }
            else {
LAB_003dfb90:
              uVar4 = 8;
              if ((uVar18 & 7) != 0) {
                uVar4 = uVar18 & 7;
              }
              uVar15 = (uVar18 - uVar4) * 2;
              puVar19 = (undefined1 *)(param_1 + uVar17 * 2 + 1);
              do {
                uVar27 = *puVar19;
                puVar5 = puVar19 + 2;
                puVar6 = puVar19 + 4;
                puVar7 = puVar19 + 6;
                puVar8 = puVar19 + 8;
                puVar9 = puVar19 + 10;
                puVar10 = puVar19 + 0xc;
                puVar11 = puVar19 + 0xe;
                puVar19 = puVar19 + 0x10;
                uVar20 = uVar17 & 0x7fffffffffffffff;
                uVar17 = uVar17 + 8;
                *(ulong *)(lVar14 + uVar20) =
                     CONCAT17(*puVar11,CONCAT16(*puVar10,CONCAT15(*puVar9,CONCAT14(*puVar8,CONCAT13(
                                                  *puVar7,CONCAT12(*puVar6,CONCAT11(*puVar5,uVar27))
                                                  )))));
              } while (uVar18 - uVar4 != uVar17);
            }
LAB_003dfbc4:
            uVar18 = uVar15 >> 1;
            do {
              puVar19 = (undefined1 *)(param_1 + 1 + uVar15);
              uVar15 = uVar15 + 2;
              *(undefined1 *)(lVar14 + uVar18) = *puVar19;
              uVar18 = uVar18 + 1;
            } while (uVar15 < uVar21);
            puVar19 = (undefined1 *)(lVar14 + uVar23 + -1);
            goto LAB_003dfbec;
          }
          uVar17 = 0;
          goto LAB_003dfb90;
        }
        pbVar1 = (byte *)(param_1 + (ulong)uVar26);
        uVar15 = (ulong)CONCAT11(*pbVar1,pbVar1[1]);
        if ((*pbVar1 & 0xf8) == 0xd8) {
          if ((uVar24 < 4) || ((uint)pbVar1[2] * 0x100 - 0xe000 < 0xfffffc00)) goto LAB_003df980;
          uVar15 = uVar15 * 0x400 - 0x35f0000 |
                   (ulong)(((uint)pbVar1[2] * 0x100 | (uint)pbVar1[3]) - 0xdc00);
        }
        if (3 < uVar24) {
          uVar24 = 4;
        }
        iVar12 = FUN_003c265c(0,uVar24,uVar15);
        if (iVar12 < 0) goto LAB_003df980;
        if (iVar12 != 4) goto LAB_003df8d8;
        uVar26 = uVar26 + 4;
        iVar22 = iVar22 + 4;
      } while ((int)uVar26 < (int)param_2);
      goto LAB_003df9d4;
    }
    iVar22 = 0;
LAB_003df9d4:
    lVar2 = param_1 + (int)param_2;
    if (((param_2 == 0) || (*(char *)(lVar2 + -2) != '\0')) || (*(char *)(lVar2 + -1) != '\0')) {
      iVar22 = iVar22 + 1;
    }
    lVar14 = FUN_003c83a4((long)iVar22,"crypto/pkcs12/p12_utl.c",0xcb);
    if (lVar14 != 0) {
      if ((int)param_2 < 1) {
        lVar16 = 0;
      }
      else {
        iVar22 = 0;
        iVar12 = 0;
        do {
          while (uVar26 = param_2 - iVar22, 1 < (int)uVar26) {
            pbVar1 = (byte *)(param_1 + iVar22);
            uVar21 = (ulong)CONCAT11(*pbVar1,pbVar1[1]);
            if ((*pbVar1 & 0xf8) == 0xd8) {
              if ((uVar26 < 4) || ((uint)pbVar1[2] * 0x100 - 0xe000 < 0xfffffc00)) break;
              uVar21 = uVar21 * 0x400 - 0x35f0000 |
                       (ulong)(((uint)pbVar1[2] * 0x100 | (uint)pbVar1[3]) - 0xdc00);
            }
            iVar25 = 4;
            if (3 < uVar26) {
              uVar26 = 4;
            }
            iVar13 = FUN_003c265c(lVar14 + iVar12,uVar26,uVar21);
            if (iVar13 != 4) {
              iVar25 = 2;
            }
            iVar22 = iVar25 + iVar22;
            iVar12 = iVar13 + iVar12;
            if ((int)param_2 <= iVar22) goto LAB_003dfac8;
          }
          iVar22 = iVar22 + 2;
          iVar12 = iVar12 + -1;
        } while (iVar22 < (int)param_2);
LAB_003dfac8:
        lVar16 = (long)iVar12;
      }
      if (((param_2 == 0) || (*(char *)(lVar2 + -2) != '\0')) || (*(char *)(lVar2 + -1) != '\0')) {
        puVar19 = (undefined1 *)(lVar14 + lVar16);
LAB_003dfbec:
        *puVar19 = 0;
      }
    }
  }
  else {
    lVar14 = 0;
  }
  return lVar14;
LAB_003df8d8:
  uVar26 = uVar26 + 2;
  iVar22 = iVar12 + iVar22;
  if ((int)param_2 <= (int)uVar26) goto LAB_003df9d4;
  goto LAB_003df8ec;
}


// ===== 003dfc10  FUN_003dfc10 =====

void FUN_003dfc10(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_003dfcac();
  FUN_003e0150(uVar1,param_1,param_2);
  return;
}


// ===== 003dfc3c  FUN_003dfc3c =====

void FUN_003dfc3c(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((param_2 == (undefined8 *)0x0) || (lVar1 = FUN_003e0468(*param_2), lVar1 == 0)) {
    uVar2 = 0;
    uVar3 = 0;
  }
  else {
    uVar2 = FUN_003e7ffc();
    uVar3 = FUN_003e8008(lVar1);
  }
  uVar4 = FUN_003dfcac();
  FUN_003e07cc(uVar4,param_1,param_2,uVar2,uVar3);
  return;
}


// ===== 003dfcac  FUN_003dfcac =====

undefined * FUN_003dfcac(void)

{
  return &DAT_00779018;
}


// ===== 003dfcb8  FUN_003dfcb8 =====

void FUN_003dfcb8(void)

{
  FUN_0038a93c();
  return;
}


// ===== 003dfcc4  FUN_003dfcc4 =====

void FUN_003dfcc4(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_00779018);
  return;
}


// ===== 003dfcd0  FUN_003dfcd0 =====

void FUN_003dfcd0(void)

{
  FUN_0039a5f4(&DAT_00779018);
  return;
}


// ===== 003dfcdc  FUN_003dfcdc =====

void FUN_003dfcdc(long param_1)

{
  if ((param_1 != 0) && (*(long *)(param_1 + 0x10) != 0)) {
    FUN_003c86b4(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),"crypto/pkcs12/p12_asn.c",0x23);
    *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30) = 0;
  }
  FUN_0038c75c(param_1,&DAT_00779018);
  return;
}


// ===== 003dfd30  FUN_003dfd30 =====

undefined * FUN_003dfd30(void)

{
  return &DAT_007790c8;
}


// ===== 003dfd3c  FUN_003dfd3c =====

void FUN_003dfd3c(void)

{
  FUN_0038a93c();
  return;
}


// ===== 003dfd48  FUN_003dfd48 =====

void FUN_003dfd48(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_007790c8);
  return;
}


// ===== 003dfd54  FUN_003dfd54 =====

void FUN_003dfd54(void)

{
  FUN_0039a5f4(&DAT_007790c8);
  return;
}


// ===== 003dfd60  FUN_003dfd60 =====

void FUN_003dfd60(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_007790c8);
  return;
}


// ===== 003dfd6c  FUN_003dfd6c =====

undefined * FUN_003dfd6c(void)

{
  return &DAT_00779178;
}


// ===== 003dfd78  FUN_003dfd78 =====

void FUN_003dfd78(void)

{
  FUN_0038a93c();
  return;
}


// ===== 003dfd84  FUN_003dfd84 =====

void FUN_003dfd84(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_00779178);
  return;
}


// ===== 003dfd90  FUN_003dfd90 =====

void FUN_003dfd90(void)

{
  FUN_0039a5f4(&DAT_00779178);
  return;
}


// ===== 003dfd9c  FUN_003dfd9c =====

void FUN_003dfd9c(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_00779178);
  return;
}


// ===== 003dfda8  FUN_003dfda8 =====

undefined * FUN_003dfda8(void)

{
  return &DAT_00779200;
}


// ===== 003dfdb4  FUN_003dfdb4 =====

void FUN_003dfdb4(void)

{
  FUN_0038a93c();
  return;
}


// ===== 003dfdc0  FUN_003dfdc0 =====

void FUN_003dfdc0(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_00779200);
  return;
}


// ===== 003dfdcc  FUN_003dfdcc =====

void FUN_003dfdcc(void)

{
  FUN_0039a5f4(&DAT_00779200);
  return;
}


// ===== 003dfdd8  FUN_003dfdd8 =====

void FUN_003dfdd8(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_00779200);
  return;
}


// ===== 003dfde4  FUN_003dfde4 =====

undefined * FUN_003dfde4(void)

{
  return &DAT_007792b0;
}


// ===== 003dfdf0  FUN_003dfdf0 =====

undefined * FUN_003dfdf0(void)

{
  return &DAT_00779310;
}


// ===== 003dfdfc  FUN_003dfdfc =====

undefined * FUN_003dfdfc(void)

{
  return &DAT_00779370;
}


// ===== 003dfe08  FUN_003dfe08 =====

undefined * FUN_003dfe08(void)

{
  return &DAT_00779460;
}


// ===== 003dfe14  FUN_003dfe14 =====

undefined * FUN_003dfe14(void)

{
  return &DAT_007795e0;
}


// ===== 003dfe20  FUN_003dfe20 =====

void FUN_003dfe20(void)

{
  FUN_0038a93c();
  return;
}


// ===== 003dfe2c  FUN_003dfe2c =====

void FUN_003dfe2c(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_007795e0);
  return;
}


// ===== 003dfe38  FUN_003dfe38 =====

void FUN_003dfe38(void)

{
  FUN_0039a5f4(&DAT_007795e0);
  return;
}


// ===== 003dfe44  FUN_003dfe44 =====

void FUN_003dfe44(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_007795e0);
  return;
}


// ===== 003dfe50  FUN_003dfe50 =====

void FUN_003dfe50(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *param_1;
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = param_1[1];
  }
  return;
}


// ===== 003dfe6c  FUN_003dfe6c =====

void FUN_003dfe6c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *param_1;
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = param_1[1];
  }
  return;
}


// ===== 003dfe88  FUN_003dfe88 =====

undefined * FUN_003dfe88(void)

{
  return &DAT_00779668;
}


// ===== 003dfe94  FUN_003dfe94 =====

void FUN_003dfe94(void)

{
  FUN_0038a93c();
  return;
}


// ===== 003dfea0  FUN_003dfea0 =====

void FUN_003dfea0(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_00779668);
  return;
}


// ===== 003dfeac  FUN_003dfeac =====

void FUN_003dfeac(void)

{
  FUN_0039a5f4(&DAT_00779668);
  return;
}


// ===== 003dfeb8  FUN_003dfeb8 =====

void FUN_003dfeb8(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_00779668);
  return;
}


// ===== 003dfec4  FUN_003dfec4 =====

undefined8
FUN_003dfec4(undefined8 *param_1,undefined8 param_2,int param_3,undefined4 param_4,
            undefined8 param_5,long param_6,undefined4 param_7)

{
  undefined8 uVar1;
  
  if (((param_3 < 0) || (uVar1 = FUN_0038de18(*param_1,param_3), (int)uVar1 != 0)) &&
     (uVar1 = FUN_003a3a84(param_1[1],param_2,param_4,param_5), (int)uVar1 != 0)) {
    if (param_6 != 0) {
      FUN_0038ee3c(param_1[2],param_6,param_7);
    }
    uVar1 = 1;
  }
  return uVar1;
}


// ===== 003dff4c  FUN_003dff4c =====

undefined8
FUN_003dff4c(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4,
            long param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = **(undefined8 **)(param_5 + 8);
  }
  if (param_2 != (undefined8 *)0x0) {
    uVar2 = FUN_0038f014(*(undefined8 *)(param_5 + 0x10));
    *param_2 = uVar2;
    uVar1 = FUN_0038f004(*(undefined8 *)(param_5 + 0x10));
    *param_3 = uVar1;
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = *(undefined8 *)(param_5 + 8);
  }
  return 1;
}


// ===== 003dffb8  FUN_003dffb8 =====

undefined8 FUN_003dffb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


// ===== 003dffc0  FUN_003dffc0 =====

bool FUN_003dffc0(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_00425dc4(param_1 + 0x18);
  return lVar1 != 0;
}


// ===== 003dffe0  FUN_003dffe0 =====

bool FUN_003dffe0(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_00425ad0(param_1 + 0x18);
  return lVar1 != 0;
}


// ===== 003e0000  FUN_003e0000 =====

bool FUN_003e0000(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_00425824(param_1 + 0x18);
  return lVar1 != 0;
}


// ===== 003e0020  FUN_003e0020 =====

undefined8 FUN_003e0020(int param_1,long *param_2)

{
  int *piVar1;
  
  if ((param_1 == 2) && (piVar1 = *(int **)(*param_2 + 0x10), piVar1 != (int *)0x0)) {
    FUN_003c89b8(*(undefined8 *)(piVar1 + 2),(long)*piVar1);
  }
  return 1;
}


// ===== 003e0054  FUN_003e0054 =====

undefined4 FUN_003e0054(code *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  ulong uVar5;
  long local_28;
  
  iVar1 = (*param_1)(param_3,0);
  if (0 < iVar1) {
    lVar3 = FUN_003c83a4(iVar1,"crypto/asn1/a_i2d_fp.c",0x2c);
    if (lVar3 != 0) {
      local_28 = lVar3;
      (*param_1)(param_3,&local_28);
      iVar2 = FUN_0037df4c(param_2,lVar3,iVar1);
      if (iVar2 != iVar1) {
        uVar5 = 0;
        do {
          if (iVar2 < 1) {
            uVar4 = 0;
            goto LAB_003e0124;
          }
          uVar5 = (ulong)(uint)(iVar2 + (int)uVar5);
          iVar1 = iVar1 - iVar2;
          iVar2 = FUN_0037df4c(param_2,lVar3 + uVar5,iVar1);
        } while (iVar2 != iVar1);
      }
      uVar4 = 1;
LAB_003e0124:
      FUN_003c86b4(lVar3,"crypto/asn1/a_i2d_fp.c",0x3e);
      return uVar4;
    }
  }
  return 0;
}


// ===== 003e0150  FUN_003e0150 =====

undefined4 FUN_003e0150(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  long local_18;
  
  local_18 = 0;
  iVar1 = FUN_0039b478(param_3,&local_18,param_1);
  if (local_18 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/asn1/a_i2d_fp.c",0x5c,"ASN1_item_i2d_bio");
    FUN_00379a5c(0xd,0x8000d,0);
    return 0;
  }
  iVar2 = FUN_0037df4c(param_2,local_18,iVar1);
  if (iVar2 != iVar1) {
    uVar4 = 0;
    do {
      if (iVar2 < 1) {
        uVar3 = 0;
        goto LAB_003e0220;
      }
      uVar4 = (ulong)(uint)(iVar2 + (int)uVar4);
      iVar1 = iVar1 - iVar2;
      iVar2 = FUN_0037df4c(param_2,local_18 + uVar4,iVar1);
    } while (iVar2 != iVar1);
  }
  uVar3 = 1;
LAB_003e0220:
  FUN_003c86b4(local_18,"crypto/asn1/a_i2d_fp.c",0x6b);
  return uVar3;
}


// ===== 003e0248  FUN_003e0248 =====

long FUN_003e0248(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    FUN_00379868();
    FUN_0037995c("crypto/asn1/a_i2d_fp.c",0x74,"ASN1_item_i2d_mem_bio");
    FUN_00379a5c(0xd,0xc0102,0);
    return 0;
  }
  FUN_00387560();
  lVar2 = FUN_0037db44();
  if ((lVar2 != 0) && (iVar1 = FUN_003e0150(param_1,lVar2,param_2), iVar1 == 0)) {
    FUN_0037db50(lVar2);
    return 0;
  }
  return lVar2;
}


// ===== 003e0308  FUN_003e0308 =====

undefined8 * FUN_003e0308(int param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  
  puVar2 = (undefined8 *)FUN_003dfcd0();
  if (puVar2 == (undefined8 *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/pkcs12/p12_init.c",0x17,"PKCS12_init_ex");
    FUN_00379a5c(0x23,0x8000d,0);
    return (undefined8 *)0x0;
  }
  iVar1 = FUN_0038de18(*puVar2,3);
  if (iVar1 != 0) {
    uVar5 = 0x8000d;
    uVar3 = FUN_003dcce8(param_1);
    lVar4 = puVar2[2];
    *(undefined8 *)(lVar4 + 0x18) = uVar3;
    FUN_003e806c(lVar4,param_2);
    iVar1 = FUN_003e8074(puVar2[2],param_3);
    if (iVar1 == 0) {
      uVar5 = 0x80021;
      uVar3 = 0x20;
    }
    else if (param_1 == 0x15) {
      lVar4 = FUN_0038a358();
      *(long *)(puVar2[2] + 0x20) = lVar4;
      if (lVar4 != 0) {
        return puVar2;
      }
      uVar3 = 0x27;
    }
    else {
      uVar5 = 0x77;
      uVar3 = 0x2c;
    }
    FUN_00379868();
    FUN_0037995c("crypto/pkcs12/p12_init.c",uVar3,"PKCS12_init_ex");
    FUN_00379a5c(0x23,uVar5,0);
  }
  FUN_003dfcdc(puVar2);
  return (undefined8 *)0x0;
}


// ===== 003e045c  FUN_003e045c =====

void FUN_003e045c(undefined8 param_1)

{
  FUN_003e0308(param_1,0,0);
  return;
}


// ===== 003e0468  FUN_003e0468 =====

long FUN_003e0468(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  if (param_1 != 0) {
    lVar1 = 0;
    if (*(long *)(param_1 + 0x10) != 0) {
      lVar1 = *(long *)(param_1 + 0x10) + 0x28;
    }
  }
  return lVar1;
}


// ===== 003e0480  FUN_003e0480 =====

undefined8 FUN_003e0480(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_38;
  long local_18;
  
  local_18 = 0;
  iVar2 = FUN_003e04f8(param_3,&local_18);
  lVar1 = local_18;
  if (iVar2 < 0) {
    uVar3 = 0;
  }
  else {
    local_38 = *(undefined8 *)(local_18 + 8);
    uVar3 = (*param_2)(param_4,&local_38,iVar2);
  }
  FUN_00387e64(lVar1);
  return uVar3;
}


// ===== 003e04f8  FUN_003e04f8 =====

ulong FUN_003e04f8(undefined8 param_1,long *param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  undefined1 auStack_78 [4];
  int local_74;
  ulong local_70;
  long local_68;
  
  lVar4 = FUN_00387e50();
  if (lVar4 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/asn1/a_d2i_fp.c",0x7e,"asn1_d2i_read_bio");
    FUN_00379a5c(0xd,0x80007,0);
  }
  else {
    FUN_0037f6d4();
    iVar13 = 0;
    uVar7 = 0;
    uVar14 = 0;
    do {
      while( true ) {
        while( true ) {
          if (uVar14 - uVar7 < 9) {
            uVar8 = 8 - (uVar14 - uVar7);
            if ((CARRY8(uVar8,uVar14)) || (lVar5 = FUN_00388074(lVar4,uVar8 + uVar14), lVar5 == 0))
            {
              uVar11 = 0x89;
              uVar9 = 0x80007;
              goto LAB_003e0714;
            }
            uVar2 = FUN_0037dd7c(param_1,*(long *)(lVar4 + 8) + uVar14,uVar8 & 0xffffffff);
            if ((uVar14 == uVar7) && ((int)uVar2 < 0)) {
              uVar11 = 0x8e;
              uVar9 = 0x8e;
              goto LAB_003e0714;
            }
            if ((0 < (int)uVar2) &&
               (bVar1 = CARRY8(uVar14,(ulong)uVar2), uVar14 = uVar14 + uVar2, bVar1)) {
              uVar9 = 0x9b;
              uVar11 = 0x93;
              goto LAB_003e0714;
            }
          }
          lVar5 = *(long *)(lVar4 + 8) + uVar7;
          local_68 = lVar5;
          if (uVar14 - uVar7 == 0) goto LAB_003e0740;
          uVar2 = FUN_0038e758(&local_68,&local_70,&local_74,auStack_78,uVar14 - uVar7);
          if ((uVar2 >> 7 & 1) != 0) {
            uVar3 = FUN_0037a744();
            uVar6 = 0x7fffff;
            if ((int)uVar3 < 0) {
              uVar6 = 0x7fffffff;
            }
            if ((uVar6 & uVar3) != 0x9b) goto LAB_003e0740;
            FUN_0037f71c();
          }
          uVar7 = uVar7 + (long)((int)local_68 - (int)lVar5);
          if ((uVar2 & 1) == 0) break;
          if (iVar13 == -1) {
            uVar9 = 0x7b;
            uVar11 = 0xaf;
            goto LAB_003e0714;
          }
          iVar13 = iVar13 + 1;
        }
        if (((iVar13 != 0) && (local_70 == 0)) && (local_74 == 0)) break;
        uVar8 = local_70 - (uVar14 - uVar7);
        if (uVar14 - uVar7 <= local_70 && uVar8 != 0) {
          uVar9 = 0x9b;
          uVar11 = 0xc4;
          if ((uVar8 >> 0x1f != 0) || (CARRY8(uVar14,uVar8))) goto LAB_003e0714;
          if (uVar8 != 0) {
            uVar12 = 0x4000;
            do {
              uVar10 = uVar8;
              if (uVar12 <= uVar8) {
                uVar10 = uVar12;
              }
              lVar5 = FUN_00388074(lVar4,uVar10 + uVar14);
              if (lVar5 == 0) {
                uVar11 = 0xd1;
                uVar9 = 0x80007;
                goto LAB_003e0714;
              }
              uVar8 = uVar8 - uVar10;
              do {
                uVar2 = FUN_0037dd7c(param_1,*(long *)(lVar4 + 8) + uVar14,uVar10 & 0xffffffff);
                if ((int)uVar2 < 1) {
                  uVar9 = 0x8e;
                  uVar11 = 0xd8;
                  goto LAB_003e0714;
                }
                uVar10 = uVar10 - uVar2;
                uVar14 = uVar14 + uVar2;
              } while (uVar10 != 0);
              uVar12 = uVar12 << (ulong)(uVar12 < 0x3fffffff);
            } while (uVar8 != 0);
          }
        }
        bVar1 = CARRY8(local_70,uVar7);
        uVar7 = local_70 + uVar7;
        if (bVar1) {
          uVar9 = 0x9b;
          uVar11 = 0xe7;
          goto LAB_003e0714;
        }
        if (iVar13 == 0) goto LAB_003e06c4;
      }
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
LAB_003e06c4:
    if (uVar7 >> 0x1f == 0) {
      *param_2 = lVar4;
      goto LAB_003e0750;
    }
    uVar9 = 0x9b;
    uVar11 = 0xf3;
LAB_003e0714:
    FUN_00379868();
    FUN_0037995c("crypto/asn1/a_d2i_fp.c",uVar11,"asn1_d2i_read_bio");
    FUN_00379a5c(0xd,uVar9,0);
LAB_003e0740:
    FUN_0037f8c4();
    FUN_00387e64(lVar4);
  }
  uVar7 = 0xffffffff;
LAB_003e0750:
  return uVar7 & 0xffffffff;
}


// ===== 003e07cc  FUN_003e07cc =====

undefined8
FUN_003e07cc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_48;
  long local_28;
  
  local_28 = 0;
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_003e04f8(param_2,&local_28);
    lVar1 = local_28;
    if (iVar2 < 0) {
      uVar3 = 0;
    }
    else {
      local_48 = *(undefined8 *)(local_28 + 8);
      uVar3 = FUN_0038a86c(param_3,&local_48,iVar2,param_1,param_4,param_5);
    }
    FUN_00387e64(lVar1);
  }
  return uVar3;
}


// ===== 003e0870  FUN_003e0870 =====

undefined8 FUN_003e0870(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_38;
  long local_18;
  
  local_18 = 0;
  if (param_2 != 0) {
    iVar2 = FUN_003e04f8(param_2,&local_18);
    lVar1 = local_18;
    if (iVar2 < 0) {
      uVar3 = 0;
    }
    else {
      local_38 = *(undefined8 *)(local_18 + 8);
      uVar3 = FUN_0038a86c(param_3,&local_38,iVar2,param_1,0,0);
    }
    FUN_00387e64(lVar1);
    return uVar3;
  }
  return 0;
}


// ===== 003e0918  FUN_003e0918 =====

undefined8 FUN_003e0918(void)

{
  long lVar1;
  
  lVar1 = FUN_0037aa50(0x11800073);
  if (lVar1 != 0) {
    return 1;
  }
  FUN_00379fc4(&DAT_00779770);
  return 1;
}


// ===== 003e0954  FUN_003e0954 =====

undefined * FUN_003e0954(void)

{
  return &DAT_007798d0;
}


// ===== 003e0960  FUN_003e0960 =====

long FUN_003e0960(void)

{
  long lVar1;
  
  lVar1 = FUN_0038a86c();
  if (lVar1 != 0) {
    FUN_003e7e2c();
  }
  return lVar1;
}


// ===== 003e09b0  FUN_003e09b0 =====

void FUN_003e09b0(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_007798d0);
  return;
}


// ===== 003e09bc  FUN_003e09bc =====

void FUN_003e09bc(void)

{
  FUN_0039a5f4(&DAT_007798d0);
  return;
}


// ===== 003e09c8  FUN_003e09c8 =====

long FUN_003e09c8(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_0039a644(&DAT_007798d0,param_1,param_2);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x28) = param_1;
    *(undefined8 *)(lVar1 + 0x30) = 0;
    if (param_2 != 0) {
      lVar2 = FUN_003ca2f4(param_2,"crypto/pkcs7/pk7_asn1.c",0x67);
      *(long *)(lVar1 + 0x30) = lVar2;
      if (lVar2 == 0) {
        FUN_003c86b4(0,"crypto/pkcs7/pk7_asn1.c",0x74);
        FUN_0038c75c(lVar1,&DAT_007798d0);
        return 0;
      }
    }
  }
  return lVar1;
}


// ===== 003e0a68  FUN_003e0a68 =====

void FUN_003e0a68(long param_1)

{
  if (param_1 != 0) {
    FUN_003c86b4(*(undefined8 *)(param_1 + 0x30),"crypto/pkcs7/pk7_asn1.c",0x74);
    FUN_0038c75c(param_1,&DAT_007798d0);
    return;
  }
  return;
}


// ===== 003e0ab0  FUN_003e0ab0 =====

void FUN_003e0ab0(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b384(param_1,param_2,&DAT_007798d0);
  return;
}


// ===== 003e0abc  FUN_003e0abc =====

void FUN_003e0abc(undefined8 param_1)

{
  FUN_003a4098(&DAT_007798d0,param_1);
  return;
}


// ===== 003e0acc  FUN_003e0acc =====

undefined * FUN_003e0acc(void)

{
  return &DAT_00779988;
}


// ===== 003e0ad8  FUN_003e0ad8 =====

void FUN_003e0ad8(void)

{
  FUN_0038a93c();
  return;
}


// ===== 003e0ae4  FUN_003e0ae4 =====

void FUN_003e0ae4(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_00779988);
  return;
}


// ===== 003e0af0  FUN_003e0af0 =====

void FUN_003e0af0(void)

{
  FUN_0039a5f4(&DAT_00779988);
  return;
}


// ===== 003e0afc  FUN_003e0afc =====

void FUN_003e0afc(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_00779988);
  return;
}


// ===== 003e0b08  FUN_003e0b08 =====

undefined * FUN_003e0b08(void)

{
  return &DAT_00779ab0;
}


// ===== 003e0b14  FUN_003e0b14 =====

void FUN_003e0b14(void)

{
  FUN_0038a93c();
  return;
}


// ===== 003e0b20  FUN_003e0b20 =====

void FUN_003e0b20(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_00779ab0);
  return;
}


// ===== 003e0b2c  FUN_003e0b2c =====

void FUN_003e0b2c(void)

{
  FUN_0039a5f4(&DAT_00779ab0);
  return;
}


// ===== 003e0b38  FUN_003e0b38 =====

void FUN_003e0b38(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_00779ab0);
  return;
}


// ===== 003e0b44  FUN_003e0b44 =====

undefined * FUN_003e0b44(void)

{
  return &DAT_00779c30;
}


// ===== 003e0b50  FUN_003e0b50 =====

void FUN_003e0b50(void)

{
  FUN_0038a93c();
  return;
}


// ===== 003e0b5c  FUN_003e0b5c =====

void FUN_003e0b5c(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_00779c30);
  return;
}


// ===== 003e0b68  FUN_003e0b68 =====

void FUN_003e0b68(void)

{
  FUN_0039a5f4(&DAT_00779c30);
  return;
}


// ===== 003e0b74  FUN_003e0b74 =====

void FUN_003e0b74(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_00779c30);
  return;
}


// ===== 003e0b80  FUN_003e0b80 =====

undefined * FUN_003e0b80(void)

{
  return &DAT_00779cb8;
}


// ===== 003e0b8c  FUN_003e0b8c =====

void FUN_003e0b8c(void)

{
  FUN_0038a93c();
  return;
}


// ===== 003e0b98  FUN_003e0b98 =====

void FUN_003e0b98(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_00779cb8);
  return;
}


// ===== 003e0ba4  FUN_003e0ba4 =====

void FUN_003e0ba4(void)

{
  FUN_0039a5f4(&DAT_00779cb8);
  return;
}


// ===== 003e0bb0  FUN_003e0bb0 =====

void FUN_003e0bb0(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_00779cb8);
  return;
}


// ===== 003e0bbc  FUN_003e0bbc =====

undefined * FUN_003e0bbc(void)

{
  return &DAT_00779d68;
}


// ===== 003e0bc8  FUN_003e0bc8 =====

void FUN_003e0bc8(void)

{
  FUN_0038a93c();
  return;
}


// ===== 003e0bd4  FUN_003e0bd4 =====

void FUN_003e0bd4(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_00779d68);
  return;
}


// ===== 003e0be0  FUN_003e0be0 =====

void FUN_003e0be0(void)

{
  FUN_0039a5f4(&DAT_00779d68);
  return;
}


// ===== 003e0bec  FUN_003e0bec =====

void FUN_003e0bec(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_00779d68);
  return;
}


// ===== 003e0bf8  FUN_003e0bf8 =====

undefined * FUN_003e0bf8(void)

{
  return &DAT_00779e70;
}


// ===== 003e0c04  FUN_003e0c04 =====

void FUN_003e0c04(void)

{
  FUN_0038a93c();
  return;
}


// ===== 003e0c10  FUN_003e0c10 =====

void FUN_003e0c10(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_00779e70);
  return;
}


// ===== 003e0c1c  FUN_003e0c1c =====

void FUN_003e0c1c(void)

{
  FUN_0039a5f4(&DAT_00779e70);
  return;
}


// ===== 003e0c28  FUN_003e0c28 =====

void FUN_003e0c28(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_00779e70);
  return;
}


// ===== 003e0c34  FUN_003e0c34 =====

undefined * FUN_003e0c34(void)

{
  return &DAT_00779f20;
}


// ===== 003e0c40  FUN_003e0c40 =====

void FUN_003e0c40(void)

{
  FUN_0038a93c();
  return;
}


// ===== 003e0c4c  FUN_003e0c4c =====

void FUN_003e0c4c(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_00779f20);
  return;
}


// ===== 003e0c58  FUN_003e0c58 =====

void FUN_003e0c58(void)

{
  FUN_0039a5f4(&DAT_00779f20);
  return;
}


// ===== 003e0c64  FUN_003e0c64 =====

void FUN_003e0c64(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_00779f20);
  return;
}


// ===== 003e0c70  FUN_003e0c70 =====

undefined * FUN_003e0c70(void)

{
  return &DAT_0077a070;
}


// ===== 003e0c7c  FUN_003e0c7c =====

void FUN_003e0c7c(void)

{
  FUN_0038a93c();
  return;
}


// ===== 003e0c88  FUN_003e0c88 =====

void FUN_003e0c88(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_0077a070);
  return;
}


// ===== 003e0c94  FUN_003e0c94 =====

void FUN_003e0c94(void)

{
  FUN_0039a5f4(&DAT_0077a070);
  return;
}


// ===== 003e0ca0  FUN_003e0ca0 =====

void FUN_003e0ca0(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_0077a070);
  return;
}


// ===== 003e0cac  FUN_003e0cac =====

undefined * FUN_003e0cac(void)

{
  return &DAT_0077a0f8;
}


// ===== 003e0cb8  FUN_003e0cb8 =====

void FUN_003e0cb8(void)

{
  FUN_0038a93c();
  return;
}


// ===== 003e0cc4  FUN_003e0cc4 =====

void FUN_003e0cc4(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_0077a0f8);
  return;
}


// ===== 003e0cd0  FUN_003e0cd0 =====

void FUN_003e0cd0(void)

{
  FUN_0039a5f4(&DAT_0077a0f8);
  return;
}


// ===== 003e0cdc  FUN_003e0cdc =====

void FUN_003e0cdc(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_0077a0f8);
  return;
}


// ===== 003e0ce8  FUN_003e0ce8 =====

undefined * FUN_003e0ce8(void)

{
  return &DAT_0077a1d0;
}


// ===== 003e0cf4  FUN_003e0cf4 =====

undefined * FUN_003e0cf4(void)

{
  return &DAT_0077a230;
}


// ===== 003e0d00  FUN_003e0d00 =====

void FUN_003e0d00(void)

{
  FUN_003e0e9c();
  return;
}


// ===== 003e0d10  FUN_003e0d10 =====

undefined * FUN_003e0d10(void)

{
  return &DAT_0077a290;
}


// ===== 003e0d1c  FUN_003e0d1c =====

undefined8 FUN_003e0d1c(int param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  long lVar2;
  
  if (param_1 < 0xc) {
    if (param_1 == 10) {
      iVar1 = FUN_003e86d8(param_4 + 2,*param_2);
      if (iVar1 < 1) {
        return 0;
      }
LAB_003e0da0:
      lVar2 = FUN_003e3524(*param_2,*param_4);
      param_4[1] = lVar2;
      if (lVar2 != 0) {
        return 1;
      }
      return 0;
    }
    if (param_1 != 0xb) {
      return 1;
    }
  }
  else {
    if (param_1 == 0xc) goto LAB_003e0da0;
    if (param_1 != 0xd) {
      return 1;
    }
  }
  iVar1 = FUN_003e4884(*param_2,param_4[1]);
  if (0 < iVar1) {
    return 1;
  }
  return 0;
}


// ===== 003e0dd8  FUN_003e0dd8 =====

undefined8 FUN_003e0dd8(int param_1,long *param_2)

{
  if (param_1 == 3) {
    FUN_003a6c04(*(undefined8 *)(*param_2 + 0x38));
  }
  return 1;
}


// ===== 003e0e00  FUN_003e0e00 =====

undefined8 FUN_003e0e00(int param_1,long *param_2)

{
  if (param_1 == 3) {
    FUN_0043da80(*(undefined8 *)(*param_2 + 0x20));
  }
  return 1;
}


// ===== 003e0e28  FUN_003e0e28 =====

void FUN_003e0e28(void)

{
  FUN_003c8474(0x28,"crypto/asn1/tasn_prn.c",0x27);
  return;
}


// ===== 003e0e3c  FUN_003e0e3c =====

void FUN_003e0e3c(undefined8 param_1)

{
  FUN_003c86b4(param_1,"crypto/asn1/tasn_prn.c",0x2f);
  return;
}


// ===== 003e0e4c  FUN_003e0e4c =====

undefined8 FUN_003e0e4c(undefined8 *param_1)

{
  return *param_1;
}


// ===== 003e0e54  FUN_003e0e54 =====

void FUN_003e0e54(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}


// ===== 003e0e5c  FUN_003e0e5c =====

undefined8 FUN_003e0e5c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


// ===== 003e0e64  FUN_003e0e64 =====

void FUN_003e0e64(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}


// ===== 003e0e6c  FUN_003e0e6c =====

undefined8 FUN_003e0e6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


// ===== 003e0e74  FUN_003e0e74 =====

void FUN_003e0e74(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}


// ===== 003e0e7c  FUN_003e0e7c =====

undefined8 FUN_003e0e7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


// ===== 003e0e84  FUN_003e0e84 =====

void FUN_003e0e84(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}


// ===== 003e0e8c  FUN_003e0e8c =====

undefined8 FUN_003e0e8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


// ===== 003e0e94  FUN_003e0e94 =====

void FUN_003e0e94(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return;
}


// ===== 003e0e9c  FUN_003e0e9c =====

void FUN_003e0e9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5
                 )

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_18;
  
  lVar1 = 0x7a8a28;
  if (param_5 != 0) {
    lVar1 = param_5;
  }
  if ((*(byte *)(lVar1 + 1) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_4 + 0x30);
  }
  else {
    uVar2 = 0;
  }
  local_18 = param_2;
  FUN_003e0eec(param_1,&local_18,param_3,param_4,0,uVar2,0);
  return;
}


// ===== 003e0eec  FUN_003e0eec =====

/* WARNING: Type propagation algorithm not settling */

ulong FUN_003e0eec(undefined8 param_1,uint *param_2,int param_3,byte *param_4,long param_5,
                  long param_6,int param_7,byte *param_8)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  byte bVar9;
  long lVar10;
  long lVar11;
  uint *puVar12;
  code *pcVar13;
  undefined8 local_78;
  int local_70;
  byte *local_68;
  
  lVar11 = *(long *)(param_4 + 0x20);
  if (lVar11 == 0) {
    pcVar13 = (code *)0x0;
    bVar9 = *param_4;
    if (bVar9 == 0) goto LAB_003e0f64;
LAB_003e0f70:
    if (*(long *)param_2 == 0) {
      if ((*param_8 & 1) == 0) {
        return 1;
      }
      if ((param_7 == 0) &&
         (uVar5 = FUN_003e1520(param_1,param_3,param_5,param_6,param_8), (int)uVar5 == 0)) {
        return uVar5;
      }
      iVar4 = FUN_0037e608(param_1,"<ABSENT>\n");
    }
    else {
      if (bVar9 < 4) {
        if (bVar9 == 0) goto LAB_003e102c;
        if (bVar9 == 1) goto LAB_003e1088;
        if (bVar9 != 2) goto LAB_003e1190;
        uVar3 = FUN_0038cc54(param_2,param_4);
        if (((int)uVar3 < 0) || (*(long *)(param_4 + 0x18) <= (long)(ulong)uVar3)) {
          iVar4 = FUN_0037b9f8(param_1,"ERROR: selector [%d] invalid\n");
          return (ulong)(0 < iVar4);
        }
        lVar10 = *(long *)(param_4 + 0x10) + (ulong)uVar3 * 0x28;
        param_2 = (uint *)FUN_0038cfbc(param_2,lVar10);
        goto LAB_003e1040;
      }
      if (bVar9 != 4) {
        if (bVar9 == 5) goto LAB_003e10e4;
        if (bVar9 != 6) {
LAB_003e1190:
          FUN_0037b9f8(param_1,"Unprocessed type %d\n");
          return 0;
        }
LAB_003e1088:
        if ((param_7 == 0) &&
           (uVar5 = FUN_003e1520(param_1,param_3,param_5,param_6,param_8), (int)uVar5 == 0)) {
          return uVar5;
        }
        if (param_5 != 0 || param_6 != 0) {
          if ((*param_8 >> 1 & 1) == 0) {
            iVar4 = FUN_0037e608(param_1,&DAT_001e2980);
          }
          else {
            iVar4 = FUN_0037e608(param_1,&DAT_001cc431);
          }
          if (iVar4 < 1) {
            return 0;
          }
        }
        if (pcVar13 != (code *)0x0) {
          uVar5 = (*pcVar13)(8,param_2,param_4,&local_78);
          if ((int)uVar5 == 0) {
            return uVar5;
          }
          if ((int)uVar5 == 2) {
            return 1;
          }
        }
        if (0 < *(long *)(param_4 + 0x18)) {
          lVar10 = *(long *)(param_4 + 0x10);
          lVar11 = 0;
          do {
            lVar6 = FUN_0038cfcc(*(undefined8 *)param_2,lVar10,1);
            if (lVar6 == 0) {
              return 0;
            }
            uVar7 = FUN_0038cfbc(param_2,lVar6);
            uVar5 = FUN_003e1680(param_1,uVar7,param_3 + 2,lVar6,param_8);
            if ((int)uVar5 == 0) {
              return uVar5;
            }
            lVar11 = lVar11 + 1;
            lVar10 = lVar10 + 0x28;
          } while (lVar11 < *(long *)(param_4 + 0x18));
        }
        if (((*param_8 >> 1 & 1) != 0) &&
           (iVar4 = FUN_0037b9f8(param_1,"%*s}\n",param_3,&DAT_001c717f), iVar4 < 0)) {
          return 0;
        }
        if (pcVar13 == (code *)0x0) {
          return 1;
        }
        uVar5 = (*pcVar13)(9,param_2,param_4,&local_78);
        iVar4 = (int)uVar5;
        goto joined_r0x003e1124;
      }
      if (param_7 == 0) {
        uVar5 = FUN_003e1520(param_1,param_3,param_5,param_6,param_8);
        if ((int)uVar5 == 0) {
          return uVar5;
        }
        lVar11 = *(long *)(param_4 + 0x20);
      }
      if ((lVar11 == 0) || (*(code **)(lVar11 + 0x30) == (code *)0x0)) {
        if (param_6 == 0) {
          return 1;
        }
        iVar4 = FUN_0037b9f8(param_1,":EXTERNAL TYPE %s\n",param_6);
        goto joined_r0x003e1020;
      }
      uVar5 = (**(code **)(lVar11 + 0x30))(param_1,param_2,param_3,&DAT_001c717f,param_8);
      if ((int)uVar5 == 0) {
        return uVar5;
      }
      if ((int)uVar5 != 2) {
        return 1;
      }
LAB_003e1504:
      iVar4 = FUN_0037e608(param_1,&DAT_001e2980);
    }
joined_r0x003e1020:
    if (iVar4 < 1) {
      return 0;
    }
  }
  else {
    lVar10 = 0x18;
    if ((*(byte *)(lVar11 + 8) & 8) != 0) {
      lVar10 = 0x28;
    }
    pcVar13 = *(code **)(lVar11 + lVar10);
    bVar9 = *param_4;
    local_78 = param_1;
    local_70 = param_3;
    local_68 = param_8;
    if (bVar9 != 0) goto LAB_003e0f70;
LAB_003e0f64:
    if (*(long *)(param_4 + 8) != 1) goto LAB_003e0f70;
LAB_003e102c:
    lVar10 = *(long *)(param_4 + 0x10);
    if (lVar10 == 0) {
LAB_003e10e4:
      uVar5 = FUN_003e1520(param_1,param_3,param_5,param_6,param_8);
      if ((int)uVar5 == 0) {
        return uVar5;
      }
      if ((lVar11 == 0) || (*(code **)(lVar11 + 0x38) == (code *)0x0)) {
        if (*param_4 == 5) {
          puVar12 = *(uint **)param_2;
          uVar5 = (long)(int)puVar12[1] & 0xfffffffffffffeff;
LAB_003e1330:
          if ((*param_8 >> 3 & 1) == 0) goto LAB_003e1338;
          uVar8 = uVar5 & 0xffffffff;
LAB_003e13b0:
          lVar11 = FUN_003e2668(uVar8);
        }
        else {
          uVar5 = *(ulong *)(param_4 + 8);
          if (uVar5 == 1) {
            puVar12 = (uint *)0x0;
            goto LAB_003e1330;
          }
          puVar12 = *(uint **)param_2;
          if (uVar5 != 0xfffffffffffffffc) goto LAB_003e1330;
          uVar3 = *puVar12;
          uVar8 = (ulong)uVar3;
          param_2 = puVar12 + 2;
          puVar12 = *(uint **)param_2;
          uVar5 = (ulong)(int)uVar3;
          if ((*param_8 >> 4 & 1) == 0) goto LAB_003e13b0;
LAB_003e1338:
          lVar11 = 0;
        }
        if (uVar5 == 5) {
          iVar4 = FUN_0037e608(param_1,"NULL\n");
          if (0 < iVar4) {
            return 1;
          }
          return (ulong)(0 < iVar4);
        }
        if (lVar11 != 0) {
          iVar4 = FUN_0037e608(param_1);
          if (iVar4 < 1) {
            return 0;
          }
          iVar4 = FUN_0037e608(param_1,&DAT_001d9efd);
          if (iVar4 < 1) {
            return 0;
          }
        }
        if ((long)uVar5 < 6) {
          if ((long)uVar5 < 3) {
            if (uVar5 == 0xfffffffffffffffd) goto LAB_003e1404;
            if (uVar5 == 1) {
              uVar3 = *param_2;
              if (uVar3 == 0xffffffff) {
                uVar3 = *(uint *)(param_4 + 0x28);
              }
              pcVar1 = "FALSE";
              if (uVar3 != 0) {
                pcVar1 = "TRUE";
              }
              pcVar2 = "BOOL ABSENT";
              if (uVar3 != 0xffffffff) {
                pcVar2 = pcVar1;
              }
              iVar4 = FUN_0037e608(param_1,pcVar2);
              uVar5 = (ulong)(0 < iVar4);
              goto LAB_003e1500;
            }
            if (uVar5 == 2) goto LAB_003e1474;
          }
          else if (uVar5 - 3 < 2) {
            uVar5 = FUN_003e1a00(param_1,puVar12,param_3);
            iVar4 = (int)uVar5;
            goto joined_r0x003e1124;
          }
LAB_003e14f0:
          uVar5 = FUN_003e2aec(param_1,puVar12,*(undefined8 *)(param_8 + 0x20));
        }
        else if ((long)uVar5 < 0x10) {
          if (uVar5 == 6) {
            uVar5 = FUN_003e1980(param_1,*(undefined8 *)param_2);
          }
          else {
            if (uVar5 != 10) goto LAB_003e14f0;
LAB_003e1474:
            uVar5 = FUN_003e1914(param_1,puVar12);
          }
        }
        else {
          if (uVar5 - 0x10 < 2) {
LAB_003e1404:
            iVar4 = FUN_0037e608(param_1,&DAT_001e2980);
            if (iVar4 < 1) {
              return 0;
            }
            iVar4 = FUN_003e2634(param_1,*(undefined8 *)(puVar12 + 2),(long)(int)*puVar12,param_3,0)
            ;
            goto joined_r0x003e1020;
          }
          if (uVar5 == 0x17) {
            uVar5 = FUN_003c1c8c(param_1,puVar12);
          }
          else {
            if (uVar5 != 0x18) goto LAB_003e14f0;
            uVar5 = FUN_003c1a40(param_1,puVar12);
          }
        }
LAB_003e1500:
        if ((int)uVar5 == 0) {
          return uVar5;
        }
        goto LAB_003e1504;
      }
      uVar5 = (**(code **)(lVar11 + 0x38))(param_1,param_2,param_4,param_3,param_8);
      iVar4 = (int)uVar5;
    }
    else {
LAB_003e1040:
      uVar5 = FUN_003e1680(param_1,param_2,param_3,lVar10,param_8);
      iVar4 = (int)uVar5;
    }
joined_r0x003e1124:
    if (iVar4 == 0) {
      return uVar5;
    }
  }
  return 1;
}


// ===== 003e1520  FUN_003e1520 =====

bool FUN_003e1520(undefined8 param_1,int param_2,long param_3,long param_4,ulong *param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2;
  if (0x14 < param_2) {
    do {
      iVar2 = FUN_0037df4c(param_1,"                    ",0x14);
      if (iVar2 != 0x14) {
        return false;
      }
      iVar2 = param_2 + -0x14;
      bVar1 = 0x28 < param_2;
      param_2 = iVar2;
    } while (bVar1);
  }
  iVar3 = FUN_0037df4c(param_1,"                    ",iVar2);
  if (iVar3 == iVar2) {
    if ((*param_5 & 0x100) != 0) {
      param_4 = 0;
    }
    if ((*param_5 & 0x40) != 0) {
      param_3 = 0;
    }
    if (param_4 == 0 && param_3 == 0) {
      return true;
    }
    if (param_3 == 0) {
      if (param_4 == 0) goto LAB_003e1630;
      iVar2 = FUN_0037e608(param_1,param_4);
    }
    else {
      iVar2 = FUN_0037e608(param_1);
      if (iVar2 < 1) {
        return false;
      }
      if (param_4 == 0) goto LAB_003e1630;
      iVar2 = FUN_0037b9f8(param_1," (%s)",param_4);
    }
    if (0 < iVar2) {
LAB_003e1630:
      iVar2 = FUN_0037df4c(param_1,&DAT_001f2fbc,2);
      return iVar2 == 2;
    }
  }
  return false;
}


// ===== 003e1680  FUN_003e1680 =====

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_003e1680(undefined8 param_1,long *******param_2,int param_3,uint *param_4,byte *param_5)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  long ******pppppplVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 local_60;
  long *******local_58;
  
  uVar2 = *param_4;
  uVar7 = (uint)*(undefined8 *)param_5;
  if ((uVar7 >> 7 & 1) == 0) {
    uVar9 = 0;
    if ((uVar7 >> 6 & 1) != 0) goto LAB_003e16c4;
LAB_003e16e4:
    lVar10 = *(long *)(param_4 + 6);
  }
  else {
    lVar10 = (**(code **)(param_4 + 8))();
    uVar9 = *(undefined8 *)(lVar10 + 0x30);
    uVar7 = (uint)*(undefined8 *)param_5;
    if ((uVar7 >> 6 & 1) == 0) goto LAB_003e16e4;
LAB_003e16c4:
    lVar10 = 0;
  }
  if ((uVar2 >> 0xc & 1) != 0) {
    local_58 = param_2;
    param_2 = (long *******)&local_58;
  }
  if ((uVar2 & 6) == 0) {
    uVar6 = (**(code **)(param_4 + 8))();
    uVar9 = FUN_003e0eec(param_1,param_2,param_3,uVar6,lVar10,uVar9,0,param_5);
    return uVar9;
  }
  if (lVar10 != 0) {
    if ((uVar7 >> 2 & 1) == 0) {
      iVar3 = FUN_0037b9f8(param_1,"%*s%s:\n",param_3,&DAT_001c717f,lVar10);
    }
    else {
      pcVar1 = "SEQUENCE";
      if ((uVar2 & 2) != 0) {
        pcVar1 = "SET";
      }
      iVar3 = FUN_0037b9f8(param_1,"%*s%s OF %s {\n",param_3,&DAT_001c717f,pcVar1,
                           *(undefined8 *)(param_4 + 6));
    }
    if (iVar3 < 1) {
      return 0;
    }
  }
  pppppplVar8 = *param_2;
  iVar3 = FUN_0040caf8(pppppplVar8);
  if (0 < iVar3) {
    local_60 = FUN_0040cb0c(pppppplVar8,0);
    uVar9 = (**(code **)(param_4 + 8))();
    uVar9 = FUN_003e0eec(param_1,&local_60,param_3 + 2,uVar9,0,0,1,param_5);
    if ((int)uVar9 == 0) {
      return uVar9;
    }
    iVar4 = FUN_0040caf8(pppppplVar8);
    if (iVar4 < 2) goto LAB_003e18c0;
    iVar4 = 1;
    do {
      iVar5 = FUN_0037e608(param_1,&DAT_001e2980);
      if (iVar5 < 1) {
        return 0;
      }
      local_60 = FUN_0040cb0c(pppppplVar8,iVar4);
      uVar9 = (**(code **)(param_4 + 8))();
      uVar9 = FUN_003e0eec(param_1,&local_60,param_3 + 2,uVar9,0,0,1,param_5);
      if ((int)uVar9 == 0) {
        return uVar9;
      }
      iVar4 = iVar4 + 1;
      iVar5 = FUN_0040caf8(pppppplVar8);
    } while (iVar4 < iVar5);
    if (0 < iVar3) goto LAB_003e18c0;
  }
  pcVar1 = "ABSENT";
  if (pppppplVar8 != (long ******)0x0) {
    pcVar1 = "EMPTY";
  }
  iVar3 = FUN_0037b9f8(param_1,"%*s<%s>\n",param_3 + 2,&DAT_001c717f,pcVar1);
  if (iVar3 < 1) {
    return 0;
  }
LAB_003e18c0:
  if (((*param_5 >> 1 & 1) != 0) &&
     (iVar3 = FUN_0037b9f8(param_1,"%*s}\n",param_3,&DAT_001c717f), iVar3 < 1)) {
    return 0;
  }
  return 1;
}


// ===== 003e1914  FUN_003e1914 =====

bool FUN_003e1914(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_00422f00(0);
  if (lVar2 != 0) {
    iVar1 = FUN_0037e608(param_1,lVar2);
    FUN_003c86b4(lVar2,"crypto/asn1/tasn_prn.c",400);
    return 0 < iVar1;
  }
  return false;
}


// ===== 003e1980  FUN_003e1980 =====

bool FUN_003e1980(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 auStack_80 [80];
  
  FUN_003dd5b4(param_2);
  puVar3 = (undefined1 *)FUN_003dce60();
  puVar1 = &DAT_001c717f;
  if (puVar3 != (undefined1 *)0x0) {
    puVar1 = puVar3;
  }
  FUN_003dd260(auStack_80,0x50,param_2,1);
  iVar2 = FUN_0037b9f8(param_1,"%s (%s)",puVar1,auStack_80);
  return 0 < iVar2;
}


// ===== 003e1a00  FUN_003e1a00 =====

undefined8 FUN_003e1a00(undefined8 param_1,int *param_2,int param_3)

{
  int iVar1;
  
  if (param_2[1] == 3) {
    iVar1 = FUN_0037b9f8(param_1," (%ld unused bits)\n",*(ulong *)(param_2 + 4) & 7);
  }
  else {
    iVar1 = FUN_0037e608(param_1,&DAT_001e2980);
  }
  if ((0 < iVar1) &&
     ((*param_2 < 1 ||
      (iVar1 = FUN_0039a47c(param_1,*(undefined8 *)(param_2 + 2),*param_2,param_3 + 2), 0 < iVar1)))
     ) {
    return 1;
  }
  return 0;
}


// ===== 003e1ab0  FUN_003e1ab0 =====

void FUN_003e1ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 local_18;
  
  local_18 = param_2;
  FUN_003e1ae4(param_1,&local_18,param_3,0,0,param_4,0);
  return;
}


// ===== 003e1ae4  FUN_003e1ae4 =====

undefined1
FUN_003e1ae4(long param_1,long *param_2,long param_3,int param_4,int param_5,int param_6,
            uint param_7)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  bool bVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  char *pcVar16;
  undefined4 uVar17;
  ulong uVar18;
  undefined1 uVar19;
  byte *pbVar20;
  char *pcVar21;
  uint *puVar22;
  long lVar23;
  int *piVar24;
  int *piVar25;
  undefined8 local_110;
  uint local_108;
  uint local_104;
  byte *local_100;
  byte *local_f8;
  byte *local_f0;
  char acStack_e8 [136];
  
  local_110 = 0;
  if (param_5 < 0x81) {
    local_f0 = (byte *)*param_2;
    if (0 < param_3) {
      pbVar1 = local_f0 + param_3;
      iVar2 = 0;
      if (param_6 != 0) {
        iVar2 = param_5;
      }
LAB_003e1bd0:
      pbVar20 = local_f0;
      uVar10 = FUN_0038e758(&local_f0,&local_100,&local_104,&local_108,param_3);
      uVar4 = local_104;
      uVar3 = local_108;
      if ((uVar10 >> 7 & 1) != 0) {
        FUN_0037e608(param_1,"Error in encoding\n");
        goto LAB_003e2598;
      }
      lVar23 = (long)((int)local_f0 - (int)pbVar20);
      if (uVar10 == 0x21) {
        iVar11 = FUN_0037cd5c(acStack_e8,0x80,"%5ld:d=%-2d hl=%ld l=inf  %s",
                              pbVar20 + ((long)param_4 - *param_2),param_5,lVar23,"cons: ");
      }
      else {
        pcVar16 = "prim: ";
        if ((uVar10 & 0x20) != 0) {
          pcVar16 = "cons: ";
        }
        iVar11 = FUN_0037cd5c(acStack_e8,0x80,"%5ld:d=%-2d hl=%ld l=%4ld %s",
                              pbVar20 + ((long)param_4 - *param_2),param_5,lVar23,local_100,pcVar16)
        ;
      }
      if (iVar11 < 1) {
        lVar12 = 0;
LAB_003e2574:
        FUN_0037db50(lVar12);
        goto LAB_003e2598;
      }
      if (param_1 == 0) {
        lVar15 = 0;
        bVar6 = false;
        lVar12 = 0;
        lVar13 = -1;
LAB_003e1d4c:
        if (((uVar3 ^ 0xffffffff) & 0xc0) == 0) {
          pcVar16 = "priv [ %d ] ";
LAB_003e1e34:
          pcVar21 = acStack_e8;
          FUN_0037cd5c(pcVar21,0x80,pcVar16,uVar4);
        }
        else {
          if ((uVar3 >> 7 & 1) != 0) {
            pcVar16 = "cont [ %d ]";
            goto LAB_003e1e34;
          }
          if ((uVar3 >> 6 & 1) != 0) {
            pcVar16 = "appl [ %d ]";
            goto LAB_003e1e34;
          }
          if (0x1e < (int)uVar4) {
            pcVar16 = "<ASN1 %d>";
            goto LAB_003e1e34;
          }
          uVar3 = uVar4 & 10;
          if ((uVar4 & 0xfffffff7) != 0x102) {
            uVar3 = uVar4;
          }
          pcVar21 = "(unknown)";
          if (uVar3 < 0x1f) {
            pcVar21 = (&PTR_DAT_0077a410)[uVar3];
          }
        }
        iVar11 = FUN_0037b9f8(lVar15,"%-18s",pcVar21);
        uVar19 = 0 < iVar11;
      }
      else {
        lVar12 = FUN_0037e4bc(param_1,0x4f,0,acStack_e8);
        if (lVar12 < 1) {
          FUN_003aa2e8();
          lVar12 = FUN_0037db44();
          if ((lVar12 == 0) || (lVar15 = FUN_0037eda0(lVar12,param_1), lVar15 == 0))
          goto LAB_003e2574;
          bVar6 = true;
        }
        else {
          bVar6 = false;
          lVar12 = 0;
          lVar15 = param_1;
        }
        lVar13 = FUN_0037e4bc(lVar15,0x51,0,0);
        lVar14 = FUN_0037e4bc(lVar15,0x4f,0,acStack_e8);
        if ((0 < lVar14) && (lVar14 = FUN_0037e4bc(lVar15,0x50,(long)iVar2,0), 0 < lVar14))
        goto LAB_003e1d4c;
        uVar19 = false;
      }
      if (-1 < lVar13) {
        FUN_0037e4bc(lVar15,0x50,lVar13,0);
      }
      if (bVar6) {
        FUN_0037edf4(lVar15);
      }
      FUN_0037db50(lVar12);
      pbVar9 = local_f0;
      pbVar8 = local_100;
      if ((bool)uVar19 == false) goto LAB_003e259c;
      lVar12 = param_3 - lVar23;
      if ((uVar10 >> 5 & 1) != 0) {
        iVar11 = FUN_0037df4c(param_1,&DAT_001e2980,1);
        if (0 < iVar11) {
          if ((long)local_100 <= lVar12) {
            if ((uVar10 == 0x21) && (local_100 == (byte *)0x0)) {
              do {
                iVar11 = FUN_003e1ae4(param_1,&local_f0,(long)pbVar1 - (long)local_f0,
                                      ((int)local_f0 - (int)*param_2) + param_4,param_5 + 1,param_6,
                                      param_7);
                if (iVar11 == 0) {
                  uVar19 = false;
                  goto LAB_003e259c;
                }
              } while ((iVar11 != 2) && (local_f0 < pbVar1));
              local_100 = local_f0 + -(long)pbVar9;
            }
            else {
              pbVar20 = local_100;
              pbVar7 = local_f0;
              while (local_f0 = pbVar7, pbVar7 < pbVar9 + (long)pbVar8) {
                iVar11 = FUN_003e1ae4(param_1,&local_f0,pbVar20,
                                      ((int)pbVar7 - (int)*param_2) + param_4,param_5 + 1,param_6,
                                      param_7);
                if (iVar11 == 0) goto LAB_003e2598;
                pbVar20 = pbVar7 + ((long)pbVar20 - (long)local_f0);
                pbVar7 = local_f0;
              }
            }
            goto LAB_003e1bc4;
          }
          FUN_0037b9f8(param_1,"length is greater than %ld\n",lVar12);
        }
        goto LAB_003e2598;
      }
      if (local_108 != 0) {
        local_f0 = local_f0 + (long)local_100;
        iVar11 = FUN_0037df4c(param_1,&DAT_001e2980,1);
        if (iVar11 < 1) goto LAB_003e2598;
        goto LAB_003e1bc4;
      }
      if ((int)local_104 < 6) {
        if (local_104 == 1) {
          if (local_100 == (byte *)0x1) {
            uVar19 = false;
LAB_003e2320:
            FUN_0037b9f8(param_1,&DAT_001ce2fb,*local_f0);
LAB_003e2430:
            if ((bool)uVar19 == false) goto LAB_003e24a8;
          }
          else {
            iVar11 = FUN_0037e608(param_1,":BAD BOOLEAN");
            if (iVar11 < 1) goto LAB_003e2598;
            if (0 < (long)local_100) {
              uVar19 = true;
              goto LAB_003e2320;
            }
          }
LAB_003e2434:
          iVar11 = FUN_0037e608(param_1,&DAT_001da6fd);
          if (0 < iVar11) {
            if (0 < (long)local_100) {
              lVar15 = 0;
              do {
                iVar11 = FUN_0037b9f8(param_1,&DAT_001e4bda,pbVar20[lVar15 + lVar23]);
                if (iVar11 < 1) goto LAB_003e2598;
                lVar15 = lVar15 + 1;
              } while (lVar15 < (long)local_100);
            }
            iVar11 = FUN_0037e608(param_1,&DAT_001e1051);
            if (0 < iVar11) goto LAB_003e24a8;
          }
          goto LAB_003e2598;
        }
        if (local_104 != 2) {
          if (local_104 != 4) goto LAB_003e21ec;
          local_f8 = pbVar20;
          puVar22 = (uint *)FUN_0038a340(0,&local_f8,local_100 + lVar23);
          if ((puVar22 == (uint *)0x0) || (uVar18 = (ulong)*puVar22, (int)*puVar22 < 1))
          goto LAB_003e23cc;
          local_f8 = *(byte **)(puVar22 + 2);
          pbVar20 = local_f8;
          do {
            bVar5 = *pbVar20;
            if (bVar5 < 0x20) {
              if ((0xd < bVar5) || ((1 << (ulong)(bVar5 & 0x1f) & 0x2600U) == 0)) {
LAB_003e2030:
                if (param_7 == 0) {
                  iVar11 = FUN_0037df4c(param_1,"[HEX DUMP]:",0xb);
                  if (iVar11 < 1) goto LAB_003e2624;
                  if ((int)*puVar22 < 1) goto LAB_003e23cc;
                  lVar23 = 0;
                  goto LAB_003e250c;
                }
                iVar11 = FUN_0037df4c(param_1,&DAT_001e2980,1);
                if (iVar11 < 1) goto LAB_003e2624;
                uVar4 = *puVar22;
                uVar3 = uVar4;
                if ((int)param_7 <= (int)uVar4) {
                  uVar3 = param_7;
                }
                if (param_7 != 0xffffffff) {
                  uVar4 = uVar3;
                }
                iVar11 = FUN_0039a47c(param_1,local_f8,uVar4,6);
                if (iVar11 < 1) goto LAB_003e2624;
                thunk_FUN_0038eddc(puVar22);
                goto LAB_003e24c4;
              }
            }
            else if (0x7e < bVar5) goto LAB_003e2030;
            uVar18 = uVar18 - 1;
            pbVar20 = pbVar20 + 1;
          } while (uVar18 != 0);
          iVar11 = FUN_0037df4c(param_1,&DAT_001d9efd,1);
          if ((0 < iVar11) && (iVar11 = FUN_0037df4c(param_1,local_f8,*puVar22), 0 < iVar11))
          goto LAB_003e23cc;
LAB_003e2624:
          uVar19 = false;
          goto LAB_003e25a0;
        }
        local_f8 = pbVar20;
        piVar25 = (int *)FUN_0038a370(0,&local_f8,local_100 + lVar23);
        if (piVar25 == (int *)0x0) {
          iVar11 = FUN_0037e608(param_1,":BAD INTEGER");
          if (iVar11 < 1) goto LAB_003e2598;
          uVar19 = true;
LAB_003e23f8:
          thunk_FUN_0038eddc(piVar25);
          goto LAB_003e2430;
        }
        iVar11 = FUN_0037df4c(param_1,&DAT_001d9efd,1);
        if ((0 < iVar11) &&
           ((piVar25[1] != 0x102 || (iVar11 = FUN_0037df4c(param_1,&DAT_001eb31a,1), 0 < iVar11))))
        {
          iVar11 = *piVar25;
          if (0 < iVar11) {
            lVar15 = 0;
            do {
              iVar11 = FUN_0037b9f8(param_1,&DAT_001e4bda,
                                    *(undefined1 *)(*(long *)(piVar25 + 2) + lVar15));
              if (iVar11 < 1) goto LAB_003e2608;
              iVar11 = *piVar25;
              lVar15 = lVar15 + 1;
            } while (lVar15 < iVar11);
          }
          if (iVar11 == 0) {
            iVar11 = FUN_0037df4c(param_1,&DAT_001d8632,2);
            uVar19 = false;
            if (iVar11 < 1) {
              puVar22 = (uint *)0x0;
              goto LAB_003e25a4;
            }
          }
          else {
            uVar19 = false;
          }
          goto LAB_003e23f8;
        }
LAB_003e2608:
        uVar19 = false;
        puVar22 = (uint *)0x0;
        goto LAB_003e25a4;
      }
      if (0x1e < local_104) {
LAB_003e20d0:
        if (local_104 == 6) {
          local_f8 = pbVar20;
          lVar15 = FUN_00399cd0(&local_110,&local_f8,local_100 + lVar23);
          if (lVar15 == 0) {
            iVar11 = FUN_0037e608(param_1,":BAD OBJECT");
            if (0 < iVar11) goto LAB_003e2434;
          }
          else {
            iVar11 = FUN_0037df4c(param_1,&DAT_001d9efd,1);
            if (0 < iVar11) {
              FUN_00399b60(param_1,local_110);
              goto LAB_003e24a8;
            }
          }
          goto LAB_003e2598;
        }
LAB_003e21ec:
        if ((param_7 == 0) || ((long)local_100 < 1)) goto LAB_003e24a8;
        iVar11 = FUN_0037df4c(param_1,&DAT_001e2980,1);
        if (iVar11 < 1) goto LAB_003e2598;
        pbVar20 = local_100;
        if ((long)(int)param_7 <= (long)local_100) {
          pbVar20 = (byte *)(long)(int)param_7;
        }
        uVar17 = SUB84(local_100,0);
        if (param_7 != 0xffffffff) {
          uVar17 = SUB84(pbVar20,0);
        }
        iVar11 = FUN_0039a47c(param_1,local_f0,uVar17,6);
        goto LAB_003e24bc;
      }
      if ((1 << (ulong)(local_104 & 0x1f) & 0x5dc1000U) != 0) {
        iVar11 = FUN_0037df4c(param_1,&DAT_001d9efd,1);
        if (iVar11 < 1) goto LAB_003e2598;
        if (0 < (long)local_100) {
          iVar11 = FUN_0037df4c(param_1,local_f0);
          if (iVar11 != (int)local_100) goto LAB_003e2598;
        }
        goto LAB_003e24a8;
      }
      if (local_104 != 10) {
        if (local_104 == 0x1e) goto LAB_003e24a8;
        goto LAB_003e20d0;
      }
      local_f8 = pbVar20;
      piVar24 = (int *)FUN_0038a3a0(0,&local_f8,local_100 + lVar23);
      if (piVar24 == (int *)0x0) {
        iVar11 = FUN_0037e608(param_1,":BAD ENUMERATED");
        if (iVar11 < 1) goto LAB_003e2598;
        uVar19 = true;
      }
      else {
        iVar11 = FUN_0037df4c(param_1,&DAT_001d9efd,1);
        if ((iVar11 < 1) ||
           ((piVar24[1] == 0x10a && (iVar11 = FUN_0037df4c(param_1,&DAT_001eb31a,1), iVar11 < 1))))
        {
LAB_003e2618:
          uVar19 = 0;
          puVar22 = (uint *)0x0;
          piVar25 = (int *)0x0;
          goto LAB_003e25a8;
        }
        iVar11 = *piVar24;
        if (0 < iVar11) {
          lVar15 = 0;
          do {
            iVar11 = FUN_0037b9f8(param_1,&DAT_001e4bda,
                                  *(undefined1 *)(*(long *)(piVar24 + 2) + lVar15));
            if (iVar11 < 1) goto LAB_003e2618;
            iVar11 = *piVar24;
            lVar15 = lVar15 + 1;
          } while (lVar15 < iVar11);
        }
        if (iVar11 == 0) {
          iVar11 = FUN_0037df4c(param_1,&DAT_001d8632,2);
          uVar19 = false;
          if (iVar11 < 1) goto LAB_003e2618;
        }
        else {
          uVar19 = false;
        }
      }
      thunk_FUN_0038eddc(piVar24);
      goto LAB_003e2430;
    }
LAB_003e2540:
    puVar22 = (uint *)0x0;
    piVar25 = (int *)0x0;
    piVar24 = (int *)0x0;
    uVar19 = 1;
LAB_003e25a8:
    FUN_0039a0f4(local_110);
    thunk_FUN_0038eddc(puVar22);
    thunk_FUN_0038eddc(piVar25);
    thunk_FUN_0038eddc(piVar24);
    *param_2 = (long)local_f0;
  }
  else {
    FUN_0037e608(param_1,"BAD RECURSION DEPTH\n");
    uVar19 = 0;
  }
  return uVar19;
  while (lVar23 = lVar23 + 1, lVar23 < (int)*puVar22) {
LAB_003e250c:
    iVar11 = FUN_0037b9f8(param_1,&DAT_001e4bda,local_f8[lVar23]);
    if (iVar11 < 1) goto LAB_003e2624;
  }
LAB_003e23cc:
  thunk_FUN_0038eddc(puVar22);
LAB_003e24a8:
  iVar11 = FUN_0037df4c(param_1,&DAT_001e2980,1);
LAB_003e24bc:
  if (iVar11 < 1) {
LAB_003e2598:
    uVar19 = false;
LAB_003e259c:
    puVar22 = (uint *)0x0;
LAB_003e25a0:
    piVar25 = (int *)0x0;
LAB_003e25a4:
    piVar24 = (int *)0x0;
    goto LAB_003e25a8;
  }
LAB_003e24c4:
  local_f0 = local_f0 + (long)local_100;
  if (local_104 == 0 && local_108 == 0) {
    puVar22 = (uint *)0x0;
    piVar25 = (int *)0x0;
    piVar24 = (int *)0x0;
    uVar19 = 2;
    goto LAB_003e25a8;
  }
LAB_003e1bc4:
  param_3 = lVar12 - (long)local_100;
  if (param_3 == 0 || lVar12 < (long)local_100) goto LAB_003e2540;
  goto LAB_003e1bd0;
}


// ===== 003e2634  FUN_003e2634 =====

void FUN_003e2634(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined8 local_18;
  
  local_18 = param_2;
  FUN_003e1ae4(param_1,&local_18,param_3,0,0,param_4,param_5);
  return;
}


// ===== 003e2668  FUN_003e2668 =====

char * FUN_003e2668(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 & 10;
  if ((param_1 & 0xfffffff7) != 0x102) {
    uVar1 = param_1;
  }
  if (0x1e < uVar1) {
    return "(unknown)";
  }
  return (&PTR_DAT_0077a410)[uVar1];
}


// ===== 003e26a0  FUN_003e26a0 =====

ulong FUN_003e26a0(long param_1,undefined8 param_2,uint param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  char *__s;
  ulong uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined *local_e8;
  undefined *local_e0;
  char acStack_b0 [80];
  
  if (param_4 == 0) {
    uVar14 = FUN_0043b5dc(param_1,param_2,param_3);
    return uVar14;
  }
  if ((param_1 != 0) && (uVar16 = param_3, 0 < (int)param_3)) {
    do {
      iVar5 = FUN_0037df4c(param_1,&DAT_001bc0af,1);
      if (iVar5 != 1) {
        return 0xffffffff;
      }
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  param_3 = param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU);
  uVar14 = (param_4 & 0xf0000) - 0x10000 >> 0x10;
  if (uVar14 < 2) {
    if (uVar14 == 0) {
      iVar5 = 1;
      local_e8 = &DAT_001ce2ff;
      local_e0 = &DAT_001beee1;
      iVar19 = 1;
      uVar16 = 0;
      goto LAB_003e2800;
    }
    if (uVar14 != 1) {
      return 0xffffffff;
    }
    local_e8 = &DAT_001c2f11;
  }
  else {
    if (uVar14 != 2) {
      if (uVar14 != 3) {
        return 0xffffffff;
      }
      iVar19 = 3;
      iVar5 = 1;
      local_e8 = &DAT_001e2980;
      local_e0 = &DAT_001c1467;
      uVar16 = param_3;
      goto LAB_003e2800;
    }
    local_e8 = &DAT_001d8635;
  }
  local_e0 = &DAT_001c1467;
  iVar19 = 3;
  iVar5 = 2;
  uVar16 = 0;
LAB_003e2800:
  bVar4 = (param_4 & 0x800000) != 0;
  puVar3 = &UNK_001e308c;
  if (bVar4) {
    puVar3 = &DAT_001d8638;
  }
  iVar15 = 3;
  if (!bVar4) {
    iVar15 = 1;
  }
  uVar6 = FUN_00432df4(param_2);
  if ((int)uVar6 < 1) {
    uVar14 = (ulong)param_3;
  }
  else {
    uVar1 = (uint)param_4 & 0x600000;
    uVar17 = 0;
    iVar8 = -1;
    uVar14 = (ulong)param_3;
    do {
      iVar18 = (int)uVar14;
      uVar2 = uVar17;
      if ((param_4 & 0x100000) != 0) {
        uVar2 = uVar6 + ~uVar17;
      }
      uVar12 = FUN_00432da4(param_2,uVar2);
      if (iVar8 != -1) {
        iVar7 = FUN_004337a8(uVar12);
        if (iVar8 == iVar7) {
          if ((param_1 != 0) && (iVar8 = FUN_0037df4c(param_1,local_e0,iVar19), iVar8 != iVar19)) {
            return 0xffffffff;
          }
          iVar18 = iVar18 + iVar19;
        }
        else {
          if (param_1 != 0) {
            iVar8 = FUN_0037df4c(param_1,local_e8,iVar5);
            uVar2 = uVar16;
            if (iVar8 != iVar5) {
              return 0xffffffff;
            }
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              iVar8 = FUN_0037df4c(param_1,&DAT_001bc0af,1);
              if (iVar8 != 1) {
                return 0xffffffff;
              }
            }
          }
          iVar18 = iVar5 + uVar16 + iVar18;
        }
      }
      iVar8 = FUN_004337a8(uVar12);
      uVar13 = FUN_0043379c(uVar12);
      uVar12 = FUN_00432d98(uVar12);
      iVar7 = FUN_003dd5b4(uVar13);
      if (uVar1 != 0x600000) {
        if ((uVar1 == 0x400000) || (iVar7 == 0)) {
          __s = acStack_b0;
          FUN_003dd260(acStack_b0,0x50,uVar13,1);
          iVar11 = 0;
          uVar14 = strlen(__s);
          iVar20 = (int)uVar14;
        }
        else if (uVar1 == 0x200000) {
          __s = (char *)FUN_003dce60(iVar7);
          iVar11 = 0x19;
          uVar14 = strlen(__s);
          iVar20 = (int)uVar14;
        }
        else if ((param_4 & 0x600000) == 0) {
          __s = (char *)FUN_003dce44(iVar7);
          iVar11 = 10;
          uVar14 = strlen(__s);
          iVar20 = (int)uVar14;
        }
        else {
          iVar11 = 0;
          __s = "";
          uVar14 = strlen("");
          iVar20 = (int)uVar14;
        }
        if (param_1 != 0) {
          iVar9 = FUN_0037df4c(param_1,__s,uVar14 & 0xffffffff);
          iVar20 = (int)uVar14;
          if (iVar9 != iVar20) {
            return 0xffffffff;
          }
        }
        if ((((uint)param_4 >> 0x19 & 1) != 0) &&
           (iVar9 = iVar11 - iVar20, iVar9 != 0 && iVar20 <= iVar11)) {
          if ((param_1 != 0) && (iVar11 = iVar9, 0 < iVar9)) {
            do {
              iVar10 = FUN_0037df4c(param_1,&DAT_001bc0af,1);
              if (iVar10 != 1) {
                return 0xffffffff;
              }
              iVar11 = iVar11 + -1;
            } while (iVar11 != 0);
          }
          iVar18 = iVar9 + iVar18;
        }
        if ((param_1 != 0) && (iVar11 = FUN_0037df4c(param_1,puVar3,iVar15), iVar11 != iVar15)) {
          return 0xffffffff;
        }
        iVar18 = iVar15 + iVar20 + iVar18;
      }
      uVar14 = 0;
      if (iVar7 == 0 && (param_4 & 0x1000000) != 0) {
        uVar14 = 0x80;
      }
      iVar7 = FUN_003e2afc(param_1,uVar14 | param_4,uVar12);
      if (iVar7 < 0) {
        return 0xffffffff;
      }
      uVar17 = uVar17 + 1;
      uVar14 = (ulong)(uint)(iVar7 + iVar18);
    } while (uVar17 != uVar6);
  }
  return uVar14;
}


// ===== 003e2aec  FUN_003e2aec =====

void FUN_003e2aec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_003e2afc(param_1,param_3,param_2);
  return;
}


// ===== 003e2afc  FUN_003e2afc =====

int FUN_003e2afc(long param_1,uint param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *__s;
  size_t sVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  ulong uVar9;
  long lVar10;
  long local_68;
  int local_60 [2];
  int *local_58;
  char local_38 [4];
  char local_34;
  char local_33;
  
  uVar4 = param_3[1];
  uVar9 = (ulong)uVar4;
  iVar2 = 0;
  local_38[0] = '\0';
  if ((param_2 >> 6 & 1) != 0) {
    __s = (char *)FUN_003e2668(uVar9);
    sVar5 = strlen(__s);
    iVar2 = (int)sVar5;
    if (param_1 == 0) {
      iVar2 = iVar2 + 1;
    }
    else {
      iVar1 = FUN_0037df4c(param_1,__s,sVar5 & 0xffffffff);
      if (iVar1 != iVar2) {
        return -1;
      }
      iVar1 = FUN_0037df4c(param_1,&DAT_001d9efd,1);
      if (iVar1 != 1) {
        return -1;
      }
      iVar2 = iVar2 + 1;
    }
  }
  if ((param_2 >> 7 & 1) == 0) {
    if ((param_2 >> 5 & 1) == 0) {
      if ((uVar4 - 1 < 0x1e) && ((0x2a23efffU >> (uVar9 & 0x3f) & 1) == 0)) {
        uVar6 = (uint)(char)(&DAT_0020d2ce)[uVar9];
        uVar7 = (int)(char)(&DAT_0020d2ce)[uVar9] | 8;
        if (uVar4 == 0xc) {
          uVar7 = 1;
        }
        goto LAB_003e2bdc;
      }
      if ((param_2 >> 8 & 1) != 0) goto LAB_003e2c90;
    }
    uVar7 = 9;
    uVar6 = 1;
LAB_003e2bdc:
    if ((param_2 & 0x10) != 0) {
      uVar6 = uVar7;
    }
    iVar1 = FUN_003e2ee0(*(undefined8 *)(param_3 + 2),*param_3,uVar6,param_2 & 0x40f,local_38,0);
    if (-1 < iVar1) {
      iVar3 = iVar1 + iVar2;
      if (local_38[0] != '\0') {
        iVar3 = iVar1 + iVar2 + 2;
      }
      if (param_1 == 0) {
        return iVar3;
      }
      if (((local_38[0] == '\0') || (iVar2 = FUN_0037df4c(param_1,&DAT_001e5312,1), iVar2 == 1)) &&
         (iVar2 = FUN_003e2ee0(*(undefined8 *)(param_3 + 2),*param_3,uVar6,param_2 & 0x40f,0,param_1
                              ), -1 < iVar2)) {
        if (local_38[0] == '\0') {
          return iVar3;
        }
        iVar2 = FUN_0037df4c(param_1,&DAT_001e5312,1);
        if (iVar2 == 1) {
          return iVar3;
        }
      }
    }
    return -1;
  }
LAB_003e2c90:
  if (param_1 == 0) {
    if ((param_2 >> 9 & 1) != 0) goto LAB_003e2d24;
    iVar1 = *param_3;
  }
  else {
    iVar1 = FUN_0037df4c(param_1,&DAT_001ca074,1);
    if (iVar1 != 1) {
      return -1;
    }
    if ((param_2 >> 9 & 1) != 0) {
LAB_003e2d24:
      local_60[0] = param_3[1];
      local_58 = param_3;
      uVar4 = FUN_0038a640(local_60,0);
      if ((int)uVar4 < 1) {
        return -1;
      }
      lVar10 = FUN_003c83a4((ulong)uVar4,"crypto/asn1/a_strex.c",0x11d);
      if (lVar10 == 0) {
        return -1;
      }
      local_68 = lVar10;
      FUN_0038a640(local_60,&local_68);
      if (param_1 != 0) {
        uVar9 = 0;
        do {
          local_33 = "0123456789ABCDEF"[(ulong)*(byte *)(lVar10 + uVar9) & 0xf];
          local_34 = "0123456789ABCDEF"[*(byte *)(lVar10 + uVar9) >> 4];
          iVar1 = FUN_0037df4c(param_1,&local_34,2);
          if (iVar1 != 2) {
            FUN_003c86b4(lVar10,"crypto/asn1/a_strex.c",0x122);
            return -1;
          }
          uVar9 = uVar9 + 1;
        } while (uVar4 != uVar9);
      }
      iVar1 = uVar4 << 1;
      FUN_003c86b4(lVar10,"crypto/asn1/a_strex.c",0x122);
      if (iVar1 < 0) {
        return -1;
      }
      goto LAB_003e2de4;
    }
    iVar1 = *param_3;
    if (iVar1 == 0) {
      return iVar2 + 1;
    }
    pbVar8 = *(byte **)(param_3 + 2);
    lVar10 = (long)iVar1;
    do {
      local_33 = "0123456789ABCDEF"[(ulong)*pbVar8 & 0xf];
      local_34 = "0123456789ABCDEF"[*pbVar8 >> 4];
      iVar3 = FUN_0037df4c(param_1,&local_34,2);
      if (iVar3 != 2) {
        return -1;
      }
      lVar10 = lVar10 + -1;
      pbVar8 = pbVar8 + 1;
    } while (lVar10 != 0);
  }
  iVar1 = iVar1 << 1;
  if (iVar1 < 0) {
    return -1;
  }
LAB_003e2de4:
  return iVar2 + iVar1 + 1;
}


// ===== 003e2e2c  FUN_003e2e2c =====

ulong FUN_003e2e2c(undefined8 *param_1,undefined4 *param_2)

{
  uint uVar1;
  ulong uVar2;
  uint local_38 [2];
  undefined8 local_30;
  undefined8 uStack_28;
  uint *local_8;
  
  local_8 = local_38;
  if (param_2 == (undefined4 *)0x0) {
    return 0xffffffff;
  }
  uVar1 = param_2[1];
  if (uVar1 < 0x1f) {
    if ((0x2a23efffU >> ((ulong)uVar1 & 0x3f) & 1) != 0) {
      return 0xffffffff;
    }
    local_38[0] = 0;
    local_30 = 0;
    uStack_28 = 0;
    uVar2 = FUN_003c1ca4(&local_8,*(undefined8 *)(param_2 + 2),*param_2,
                         (int)(char)(&DAT_0020d2ce)[uVar1] | 0x1000,0x2000);
    if (-1 < (int)uVar2) {
      *param_1 = local_30;
      return (ulong)local_38[0];
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


// ===== 003e2ee0  FUN_003e2ee0 =====

int FUN_003e2ee0(byte *param_1,uint param_2,uint param_3,uint param_4,undefined8 param_5,
                undefined8 param_6)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined1 local_6e [6];
  ulong local_68;
  
  uVar2 = param_3 & 7;
  if (uVar2 == 2) {
    if ((param_2 & 1) == 0) goto LAB_003e2f5c;
    FUN_00379868();
    FUN_0037995c("crypto/asn1/a_strex.c",0xa1,"do_buf");
    uVar5 = 0x81;
  }
  else {
    if ((uVar2 != 4) || ((param_2 & 3) == 0)) {
LAB_003e2f5c:
      if (param_2 == 0) {
        return 0;
      }
      if (4 < uVar2) {
        return -1;
      }
      if (uVar2 == 3) {
        return -1;
      }
      pbVar1 = param_1 + (int)param_2;
      iVar7 = 0;
      pbVar10 = param_1;
      if ((param_3 >> 3 & 1) == 0) {
        while( true ) {
          uVar6 = 0;
          if (pbVar10 == param_1 && (param_4 & 1) != 0) {
            uVar6 = 0x20;
          }
          if (uVar2 == 1) {
            pbVar9 = pbVar10 + 1;
            local_68 = (ulong)*pbVar10;
          }
          else if (uVar2 == 2) {
            pbVar9 = pbVar10 + 2;
            local_68 = (ulong)CONCAT11(*pbVar10,pbVar10[1]);
          }
          else if (uVar2 == 4) {
            pbVar9 = pbVar10 + 4;
            local_68 = (ulong)*pbVar10 << 0x18 | (ulong)pbVar10[1] << 0x10 | (ulong)pbVar10[2] << 8
                       | (ulong)pbVar10[3];
          }
          else {
            uVar3 = FUN_003c24e8(pbVar10,param_2,&local_68);
            if ((int)uVar3 < 0) {
              return -1;
            }
            pbVar9 = pbVar10 + uVar3;
            param_2 = param_2 - uVar3;
          }
          if (pbVar9 == pbVar1 && (param_4 & 1) != 0) {
            uVar6 = 0x40;
          }
          iVar4 = FUN_003e31fc(local_68,uVar6 | param_4,param_5,param_6);
          if (iVar4 < 0) break;
          iVar7 = iVar4 + iVar7;
          pbVar10 = pbVar9;
          if (pbVar9 == pbVar1) {
            return iVar7;
          }
        }
        return -1;
      }
      do {
        uVar6 = 0;
        if (pbVar10 == param_1 && (param_4 & 1) != 0) {
          uVar6 = 0x20;
        }
        if (uVar2 == 1) {
          pbVar9 = pbVar10 + 1;
          local_68 = (ulong)*pbVar10;
LAB_003e3148:
          uVar3 = FUN_003c265c(local_6e,6);
        }
        else {
          if (uVar2 == 2) {
            pbVar9 = pbVar10 + 2;
            local_68 = (ulong)CONCAT11(*pbVar10,pbVar10[1]);
            goto LAB_003e3148;
          }
          if (uVar2 == 4) {
            pbVar9 = pbVar10 + 4;
            local_68 = (ulong)*pbVar10 << 0x18 | (ulong)pbVar10[1] << 0x10 | (ulong)pbVar10[2] << 8
                       | (ulong)pbVar10[3];
            goto LAB_003e3148;
          }
          uVar3 = FUN_003c24e8(pbVar10,param_2,&local_68);
          if ((int)uVar3 < 0) {
            return -1;
          }
          pbVar9 = pbVar10 + uVar3;
          param_2 = param_2 - uVar3;
          uVar3 = FUN_003c265c(local_6e,6,local_68);
        }
        if (0 < (int)uVar3) {
          uVar8 = 0;
          if (pbVar9 == pbVar1 && (param_4 & 1) != 0) {
            uVar6 = 0x40;
          }
          do {
            iVar4 = FUN_003e31fc(local_6e[uVar8],uVar6 | param_4,param_5,param_6);
            if (iVar4 < 0) {
              return -1;
            }
            uVar8 = uVar8 + 1;
            iVar7 = iVar4 + iVar7;
          } while (uVar3 != uVar8);
        }
        pbVar10 = pbVar9;
        if (pbVar9 == pbVar1) {
          return iVar7;
        }
      } while( true );
    }
    FUN_00379868();
    FUN_0037995c("crypto/asn1/a_strex.c",0x9b,"do_buf");
    uVar5 = 0x85;
  }
  FUN_00379a5c(0xd,uVar5,0);
  return -1;
}


// ===== 003e31fc  FUN_003e31fc =====

int FUN_003e31fc(ulong param_1,uint param_2,undefined1 *param_3,long param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_33 [19];
  undefined1 local_4 [4];
  
  if (param_1 >> 0x20 != 0) {
    return -1;
  }
  if (0xffff < param_1) {
    FUN_0037cd5c(auStack_33,0x13,"\\W%08lX");
    if (param_4 != 0) {
      iVar1 = FUN_0037df4c(param_4,auStack_33,10);
      if (iVar1 != 10) {
        iVar1 = -1;
      }
      return iVar1;
    }
    return 10;
  }
  if (0xff < param_1) {
    FUN_0037cd5c(auStack_33,0x13,"\\U%04lX");
    if (param_4 != 0) {
      iVar1 = FUN_0037df4c(param_4,auStack_33,6);
      if (iVar1 != 6) {
        iVar1 = -1;
      }
      return iVar1;
    }
    return 6;
  }
  local_4[0] = (undefined1)param_1;
  if (param_1 < 0x80) {
    uVar3 = (uint)*(ushort *)(&DAT_0020d2ee + param_1 * 2) & param_2 & 0xffff;
    if ((uVar3 & 0x61) != 0) {
      if ((uVar3 >> 3 & 1) == 0) {
        if (param_4 == 0) {
          return 2;
        }
        iVar1 = FUN_0037df4c(param_4,&DAT_001c7abb,1);
        if (iVar1 == 1) {
          iVar2 = FUN_0037df4c(param_4,local_4,1);
          iVar1 = 2;
          if (iVar2 != 1) {
            iVar1 = -1;
          }
          return iVar1;
        }
        return -1;
      }
      if (param_3 != (undefined1 *)0x0) {
        *param_3 = 1;
      }
      goto LAB_003e33c0;
    }
  }
  else {
    uVar3 = param_2 & 4;
  }
  if ((uVar3 & 0x406) != 0) {
    FUN_0037cd5c(auStack_33,0xb,"\\%02X");
    if (param_4 != 0) {
      iVar1 = FUN_0037df4c(param_4,auStack_33,3);
      if (iVar1 != 3) {
        iVar1 = -1;
      }
      return iVar1;
    }
    return 3;
  }
  if ((((uint)param_1 & 0xff) == 0x5c) && ((param_2 & 0x40f) != 0)) {
    if (param_4 == 0) {
      return 2;
    }
    iVar1 = FUN_0037df4c(param_4,&DAT_001cc46c,2);
    if (iVar1 != 2) {
      iVar1 = -1;
    }
    return iVar1;
  }
LAB_003e33c0:
  if (param_4 != 0) {
    iVar1 = FUN_0037df4c(param_4,local_4,1);
    if (iVar1 != 1) {
      iVar1 = -1;
    }
    return iVar1;
  }
  return 1;
}


// ===== 003e3484  FUN_003e3484 =====

bool FUN_003e3484(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_003dd5b4(*(undefined8 *)(param_1 + 0x18));
  return iVar1 - 0x1bU < 0xfffffffa;
}


// ===== 003e34a8  FUN_003e34a8 =====

undefined8 FUN_003e34a8(long param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_003dd5b4(*(undefined8 *)(param_1 + 0x18));
  if (iVar1 == 0x15) {
    return *(undefined8 *)(param_1 + 0x20);
  }
  iVar1 = FUN_003dd5b4(*(undefined8 *)(param_1 + 0x18));
  if (((5 < iVar1 - 0x15U) && (piVar2 = *(int **)(param_1 + 0x20), piVar2 != (int *)0x0)) &&
     (*piVar2 == 4)) {
    return *(undefined8 *)(piVar2 + 2);
  }
  return 0;
}


// ===== 003e3524  FUN_003e3524 =====

long FUN_003e3524(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  int *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [64];
  long local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  
  local_70 = 0;
  if (param_1 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/pkcs7/pk7_doit.c",0xd7,"PKCS7_dataInit");
    uVar4 = 0x8f;
LAB_003e3614:
    FUN_00379a5c(0x21,uVar4,0);
    return 0;
  }
  uVar4 = FUN_003e7928();
  uVar5 = FUN_003e7ffc();
  uVar6 = FUN_003e8008(uVar4);
  if (*(long *)(param_1 + 0x20) == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/pkcs7/pk7_doit.c",0xe9,"PKCS7_dataInit");
    uVar4 = 0x7a;
    goto LAB_003e3614;
  }
  iVar1 = FUN_003dd5b4(*(undefined8 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (iVar1 < 0x17) {
    if (iVar1 == 0x15) {
      uVar13 = 0;
LAB_003e375c:
      lVar12 = 0;
      local_d0 = 0;
      puVar14 = (undefined8 *)0x0;
      goto LAB_003e3764;
    }
    if (iVar1 == 0x16) {
      lVar12 = *(long *)(*(long *)(param_1 + 0x20) + 0x28);
      uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
      iVar1 = FUN_003dd5b4(*(undefined8 *)(lVar12 + 0x18));
      if (iVar1 == 0x15) {
        lVar8 = 0;
        local_d8 = (int *)(lVar12 + 0x20);
      }
      else {
        iVar1 = FUN_003dd5b4(*(undefined8 *)(lVar12 + 0x18));
        if (((iVar1 - 0x15U < 6) || (local_d8 = *(int **)(lVar12 + 0x20), local_d8 == (int *)0x0))
           || (*local_d8 != 4)) goto LAB_003e375c;
        lVar8 = 0;
LAB_003e372c:
        local_d8 = local_d8 + 2;
      }
LAB_003e3730:
      local_d8 = *(int **)local_d8;
      lVar12 = 0;
      puVar14 = (undefined8 *)0x0;
      local_d0 = 0;
      goto LAB_003e3768;
    }
LAB_003e36a8:
    FUN_00379868();
    FUN_0037995c("crypto/pkcs7/pk7_doit.c",0x10f,"PKCS7_dataInit");
    uVar4 = 0x70;
LAB_003e3aa8:
    FUN_00379a5c(0x21,uVar4,0);
LAB_003e3ab0:
    lVar9 = 0;
  }
  else {
    if (iVar1 == 0x17) {
      lVar8 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
      lVar12 = *(long *)(lVar8 + 0x18);
      if (lVar12 == 0) {
        FUN_00379868();
        uVar4 = 0x104;
LAB_003e3a9c:
        FUN_0037995c("crypto/pkcs7/pk7_doit.c",uVar4,"PKCS7_dataInit");
        uVar4 = 0x74;
        goto LAB_003e3aa8;
      }
      local_d0 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
      uVar13 = 0;
LAB_003e3694:
      puVar14 = *(undefined8 **)(lVar8 + 8);
LAB_003e3764:
      local_d8 = (int *)0x0;
      lVar8 = 0;
    }
    else {
      if (iVar1 == 0x18) {
        lVar9 = *(long *)(param_1 + 0x20);
        lVar8 = *(long *)(lVar9 + 0x28);
        lVar12 = *(long *)(lVar8 + 0x18);
        if (lVar12 == 0) {
          FUN_00379868();
          uVar4 = 0xfb;
          goto LAB_003e3a9c;
        }
        local_d0 = *(undefined8 *)(lVar9 + 0x30);
        uVar13 = *(undefined8 *)(lVar9 + 8);
        goto LAB_003e3694;
      }
      if (iVar1 != 0x19) goto LAB_003e36a8;
      lVar8 = *(long *)(*(long *)(param_1 + 0x20) + 8);
      lVar12 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
      iVar1 = FUN_003dd5b4(*(undefined8 *)(lVar12 + 0x18));
      if (iVar1 == 0x15) {
        uVar13 = 0;
        local_d8 = (int *)(lVar12 + 0x20);
        goto LAB_003e3730;
      }
      iVar1 = FUN_003dd5b4(*(undefined8 *)(lVar12 + 0x18));
      if (((5 < iVar1 - 0x15U) && (local_d8 = *(int **)(lVar12 + 0x20), local_d8 != (int *)0x0)) &&
         (*local_d8 == 4)) {
        uVar13 = 0;
        goto LAB_003e372c;
      }
      lVar12 = 0;
      uVar13 = 0;
      local_d8 = (int *)0x0;
      local_d0 = 0;
      puVar14 = (undefined8 *)0x0;
    }
LAB_003e3768:
    iVar1 = FUN_0040caf8(uVar13);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        uVar7 = FUN_0040cb0c(uVar13,iVar1);
        iVar2 = FUN_003e3bc4(&local_70,uVar7,uVar4);
        if (iVar2 == 0) goto LAB_003e3ab0;
        iVar1 = iVar1 + 1;
        iVar2 = FUN_0040caf8(uVar13);
      } while (iVar1 < iVar2);
    }
    if ((lVar8 != 0) && (iVar1 = FUN_003e3bc4(&local_70,lVar8,uVar4), iVar1 == 0))
    goto LAB_003e3ab0;
    lVar8 = local_70;
    if (lVar12 != 0) {
      FUN_003e5b5c();
      lVar8 = FUN_0037db44();
      if (lVar8 == 0) {
        FUN_00379868();
        FUN_0037995c("crypto/pkcs7/pk7_doit.c",0x121,"PKCS7_dataInit");
        FUN_00379a5c(0x21,0x80020,0);
        lVar9 = 0;
        goto LAB_003e3ab8;
      }
      FUN_0037e4bc(lVar8,0x81,0,&local_c8);
      iVar1 = FUN_003897a4(lVar12);
      iVar2 = FUN_003894b8(lVar12);
      FUN_00388f94(lVar12);
      uVar4 = FUN_003dcce8();
      *puVar14 = uVar4;
      if ((iVar2 < 1) || (iVar3 = FUN_003edc30(uVar5,auStack_c0,iVar2,0), 0 < iVar3)) {
        FUN_0037f6d4();
        uVar4 = FUN_00389880(lVar12);
        lVar9 = FUN_003823dc(uVar5,uVar4,uVar6);
        FUN_0037f71c();
        if (lVar9 != 0) {
          lVar12 = lVar9;
        }
        iVar3 = FUN_003803c8(local_c8,lVar12,0,0,0,1);
        if (iVar3 < 1) goto LAB_003e3ab8;
        FUN_0037fa4c(lVar9);
        iVar3 = FUN_00382020(local_c8,auStack_b0);
        if ((0 < iVar3) && (iVar3 = FUN_003803c8(local_c8,0,0,auStack_b0,auStack_c0,1), 0 < iVar3))
        {
          if (0 < iVar2) {
            lVar9 = puVar14[1];
            if (lVar9 == 0) {
              lVar9 = FUN_0038a64c();
              puVar14[1] = lVar9;
              if (lVar9 == 0) goto LAB_003e3ab8;
            }
            iVar2 = FUN_003885b0(local_c8,lVar9);
            if (iVar2 < 1) goto LAB_003e3b1c;
          }
          iVar2 = FUN_0040caf8(local_d0);
          lVar12 = (long)iVar1;
          if (0 < iVar2) {
            iVar1 = 0;
            do {
              lVar9 = FUN_0040cb0c(local_d0,iVar1);
              uVar4 = *(undefined8 *)(lVar9 + 0x28);
              lVar10 = FUN_00427350(*(undefined8 *)(lVar9 + 0x20));
              if (lVar10 == 0) goto LAB_003e3b1c;
              uVar5 = FUN_003e7ffc(uVar4);
              uVar4 = FUN_003e8008(uVar4);
              lVar10 = FUN_003b1de8(uVar5,lVar10,uVar4);
              if (lVar10 == 0) goto LAB_003e3b1c;
              iVar2 = FUN_003b45ec();
              if ((iVar2 < 1) ||
                 (iVar2 = FUN_003b4aa8(lVar10,0,&local_68,auStack_b0,lVar12), iVar2 < 1)) {
                lVar11 = 0;
LAB_003e3b00:
                FUN_003b1f78(lVar10);
                FUN_003c86b4(lVar11,"crypto/pkcs7/pk7_doit.c",0x94);
                goto LAB_003e3b1c;
              }
              lVar11 = FUN_003c83a4(CONCAT44(uStack_64,local_68),"crypto/pkcs7/pk7_doit.c",0x86);
              if ((lVar11 == 0) ||
                 (iVar2 = FUN_003b4aa8(lVar10,lVar11,&local_68,auStack_b0,lVar12), iVar2 < 1))
              goto LAB_003e3b00;
              FUN_0038ee3c(*(undefined8 *)(lVar9 + 0x18),lVar11,local_68);
              FUN_003b1f78(lVar10);
              FUN_003c86b4(0,"crypto/pkcs7/pk7_doit.c",0x94);
              iVar1 = iVar1 + 1;
              iVar2 = FUN_0040caf8(local_d0);
            } while (iVar1 < iVar2);
          }
          FUN_003c89b8(auStack_b0,lVar12);
          if (local_70 != 0) {
            FUN_0037eda0(local_70,lVar8);
            lVar8 = local_70;
          }
          goto LAB_003e3b28;
        }
      }
LAB_003e3b1c:
      lVar9 = 0;
      goto LAB_003e3ab8;
    }
LAB_003e3b28:
    local_70 = lVar8;
    lVar9 = param_2;
    if (param_2 != 0) goto LAB_003e3b2c;
    iVar1 = FUN_003dd5b4(*(undefined8 *)(param_1 + 0x18));
    if ((iVar1 == 0x16) && (lVar12 = FUN_003e7288(param_1,2,0,0), lVar12 != 0)) {
      FUN_003e6544();
      lVar9 = FUN_0037db44();
LAB_003e3b94:
      if (lVar9 != 0) {
LAB_003e3b2c:
        if (local_70 != 0) {
          FUN_0037eda0(local_70,lVar9);
          return local_70;
        }
        return lVar9;
      }
      goto LAB_003e3ab0;
    }
    if ((local_d8 != (int *)0x0) && (0 < *local_d8)) {
      lVar9 = FUN_00387578(*(undefined8 *)(local_d8 + 2));
      goto LAB_003e3b94;
    }
    FUN_00387560();
    lVar9 = FUN_0037db44();
    if (lVar9 != 0) {
      FUN_0037e4bc(lVar9,0x82,0,0);
      goto LAB_003e3b2c;
    }
  }
  lVar8 = 0;
LAB_003e3ab8:
  FUN_0037fa4c(lVar9);
  FUN_0037ef60(local_70);
  FUN_0037ef60(lVar8);
  return 0;
}


// ===== 003e3bc4  FUN_003e3bc4 =====

undefined8 FUN_003e3bc4(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_62 [50];
  
  FUN_003e65b0();
  lVar1 = FUN_0037db44();
  if (lVar1 == 0) {
    FUN_00379868();
    uVar2 = 0x43;
LAB_003e3cb8:
    FUN_0037995c("crypto/pkcs7/pk7_doit.c",uVar2,"pkcs7_bio_add_digest");
    uVar2 = 0x80020;
  }
  else {
    FUN_003dd260(auStack_62,0x32,*param_2,0);
    FUN_0037f6d4();
    uVar2 = FUN_003e7ffc(param_3);
    uVar3 = FUN_003e8008(param_3);
    lVar4 = FUN_0039e6f4(uVar2,auStack_62,uVar3);
    lVar5 = lVar4;
    if ((lVar4 != 0) || (lVar5 = FUN_003a213c(auStack_62), lVar5 != 0)) {
      FUN_0037f71c();
      lVar5 = FUN_0037e4bc(lVar1,0x6f,0,lVar5);
      if (lVar5 < 1) {
        FUN_00379868();
        FUN_0037995c("crypto/pkcs7/pk7_doit.c",0x59,"pkcs7_bio_add_digest");
        FUN_00379a5c(0x21,0x80020,0);
        FUN_0039d050(lVar4);
        goto LAB_003e3d0c;
      }
      FUN_0039d050(lVar4);
      if (*param_1 == 0) {
        *param_1 = lVar1;
        return 1;
      }
      lVar5 = FUN_0037eda0(*param_1,lVar1);
      if (lVar5 != 0) {
        return 1;
      }
      FUN_00379868();
      uVar2 = 0x61;
      goto LAB_003e3cb8;
    }
    FUN_0037f8c4();
    FUN_00379868();
    FUN_0037995c("crypto/pkcs7/pk7_doit.c",0x53,"pkcs7_bio_add_digest");
    uVar2 = 0x6d;
  }
  FUN_00379a5c(0x21,uVar2,0);
LAB_003e3d0c:
  FUN_0037db50(lVar1);
  return 0;
}


// ===== 003e3d90  FUN_003e3d90 =====

/* WARNING: Type propagation algorithm not settling */

long FUN_003e3d90(long param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 *local_e8;
  int *local_e0;
  long local_d0;
  long local_b8;
  undefined1 auStack_a6 [50];
  int local_74;
  long local_70;
  undefined8 local_68;
  
  local_70 = 0;
  local_68 = 0;
  local_74 = 0;
  if (param_1 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/pkcs7/pk7_doit.c",0x198,"PKCS7_dataDecode");
    uVar4 = 0x8f;
LAB_003e3e94:
    FUN_00379a5c(0x21,uVar4,0);
    return 0;
  }
  uVar4 = FUN_003e7928();
  uVar5 = FUN_003e7ffc();
  uVar6 = FUN_003e8008(uVar4);
  if (*(long *)(param_1 + 0x20) == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/pkcs7/pk7_doit.c",0x1a1,"PKCS7_dataDecode");
    uVar4 = 0x7a;
    goto LAB_003e3e94;
  }
  iVar1 = FUN_003dd5b4(*(undefined8 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (iVar1 == 0x18) {
    lVar11 = *(long *)(param_1 + 0x20);
    uVar14 = *(undefined8 *)(lVar11 + 0x30);
    lVar15 = *(long *)(lVar11 + 8);
    local_e8 = *(undefined8 **)(*(long *)(lVar11 + 0x28) + 8);
    local_e0 = *(int **)(*(long *)(lVar11 + 0x28) + 0x10);
    FUN_003dd260(auStack_a6,0x32,*local_e8,0);
    FUN_0037f6d4();
    lVar11 = FUN_003823dc(uVar5,auStack_a6,uVar6);
    local_b8 = lVar11;
    if ((lVar11 == 0) && (local_b8 = FUN_003a1fb8(auStack_a6), local_b8 == 0)) {
      FUN_0037f8c4();
      FUN_00379868();
      uVar4 = 0x1c9;
LAB_003e44a0:
      FUN_0037995c("crypto/pkcs7/pk7_doit.c",uVar4,"PKCS7_dataDecode");
      uVar4 = 0x6f;
LAB_003e44ac:
      FUN_00379a5c(0x21,uVar4,0);
      lVar11 = 0;
LAB_003e44c0:
      lVar15 = 0;
      lVar8 = 0;
      lVar12 = 0;
      iVar1 = 0;
      lVar13 = 0;
      goto LAB_003e44cc;
    }
    FUN_0037f71c();
    if (param_3 == 0 && local_e0 == (int *)0x0) goto LAB_003e404c;
LAB_003e4170:
    if (lVar15 == 0) {
      lVar13 = 0;
LAB_003e4270:
      if (local_b8 != 0) goto LAB_003e4278;
LAB_003e4430:
      iVar1 = 0;
      lVar15 = lVar13;
    }
    else {
      iVar1 = FUN_0040caf8(lVar15);
      if (0 < iVar1) {
        iVar1 = 0;
        lVar13 = 0;
LAB_003e41b4:
        do {
          puVar7 = (undefined8 *)FUN_0040cb0c(lVar15,iVar1);
          FUN_003e65b0();
          lVar8 = FUN_0037db44();
          if (lVar8 == 0) {
            FUN_00379868();
            uVar4 = 499;
LAB_003e4580:
            FUN_0037995c("crypto/pkcs7/pk7_doit.c",uVar4,"PKCS7_dataDecode");
            FUN_00379a5c(0x21,0x80020,0);
LAB_003e45a4:
            iVar1 = 0;
            lVar15 = 0;
            lVar12 = 0;
            goto LAB_003e44cc;
          }
          FUN_003dd260(auStack_a6,0x32,*puVar7,0);
          FUN_0037f6d4();
          lVar9 = FUN_0039e6f4(uVar5,auStack_a6,uVar6);
          lVar12 = lVar9;
          if ((lVar9 == 0) && (lVar12 = FUN_003a213c(auStack_a6), lVar12 == 0)) {
            FUN_0037f8c4();
            FUN_00379868();
            FUN_0037995c("crypto/pkcs7/pk7_doit.c",0x202,"PKCS7_dataDecode");
            FUN_00379a5c(0x21,0x6d,0);
            goto LAB_003e45a4;
          }
          FUN_0037f71c();
          lVar12 = FUN_0037e4bc(lVar8,0x6f,0,lVar12);
          FUN_0039d050(lVar9);
          if (lVar12 < 1) {
            FUN_00379868();
            uVar4 = 0x209;
            goto LAB_003e4580;
          }
          if (lVar13 != 0) {
            FUN_0037eda0(lVar13,lVar8);
            iVar1 = iVar1 + 1;
            iVar2 = FUN_0040caf8(lVar15);
            if (iVar2 <= iVar1) break;
            goto LAB_003e41b4;
          }
          iVar1 = iVar1 + 1;
          iVar2 = FUN_0040caf8(lVar15);
          lVar13 = lVar8;
        } while (iVar1 < iVar2);
        goto LAB_003e4270;
      }
      lVar13 = 0;
      if (local_b8 == 0) goto LAB_003e4430;
LAB_003e4278:
      FUN_003e5b5c();
      lVar15 = FUN_0037db44();
      if (lVar15 == 0) goto LAB_003e428c;
LAB_003e3f24:
      if (param_4 != 0) {
        iVar1 = FUN_0040caf8(uVar14);
        if (0 < iVar1) {
          iVar1 = 0;
          do {
            lVar8 = FUN_0040cb0c(uVar14,iVar1);
            uVar6 = **(undefined8 **)(lVar8 + 8);
            uVar5 = FUN_00426a88(param_4);
            iVar2 = FUN_004267c8(uVar6,uVar5);
            if (iVar2 == 0) {
              uVar5 = FUN_00426cb0(param_4);
              iVar2 = FUN_0038d110(uVar5,*(undefined8 *)(*(long *)(lVar8 + 8) + 8));
              if (iVar2 == 0) {
                if (param_4 == 0) goto LAB_003e430c;
                *(undefined8 *)(lVar8 + 0x28) = uVar4;
                iVar1 = FUN_003e4734(&local_70,&local_74,lVar8,param_2,0);
                if (iVar1 < 0) goto LAB_003e42bc;
                FUN_0037a0bc();
                goto LAB_003e4374;
              }
            }
            iVar1 = iVar1 + 1;
            iVar2 = FUN_0040caf8(uVar14);
          } while (iVar1 < iVar2);
        }
        FUN_00379868();
        FUN_0037995c("crypto/pkcs7/pk7_doit.c",0x22e,"PKCS7_dataDecode");
        FUN_00379a5c(0x21,0x73,0);
        lVar8 = 0;
        lVar12 = 0;
        iVar1 = 0;
        goto LAB_003e44cc;
      }
LAB_003e430c:
      iVar1 = FUN_0040caf8(uVar14);
      if (0 < iVar1) {
        iVar1 = 0;
        do {
          lVar8 = FUN_0040cb0c(uVar14,iVar1);
          *(undefined8 *)(lVar8 + 0x28) = uVar4;
          iVar2 = FUN_003897a4(local_b8);
          iVar2 = FUN_003e4734(&local_70,&local_74,lVar8,param_2,(long)iVar2);
          if (iVar2 < 0) goto LAB_003e42bc;
          FUN_0037a0bc();
          iVar1 = iVar1 + 1;
          iVar2 = FUN_0040caf8(uVar14);
        } while (iVar1 < iVar2);
      }
LAB_003e4374:
      local_68 = 0;
      FUN_0037e4bc(lVar15,0x81,0,&local_68);
      iVar1 = FUN_003803c8(local_68,local_b8,0,0,0,0);
      if (((iVar1 < 1) || (iVar1 = FUN_00388900(local_68,local_e8[1]), iVar1 < 1)) ||
         (iVar1 = FUN_003897ac(local_68), iVar1 < 1)) goto LAB_003e42bc;
      lVar12 = FUN_003c83a4(iVar1,"crypto/pkcs7/pk7_doit.c",0x254);
      if ((lVar12 == 0) || (iVar2 = FUN_00382020(local_68,lVar12), iVar2 < 1)) {
        lVar8 = 0;
        goto LAB_003e44cc;
      }
      lVar8 = lVar12;
      if (local_70 == 0) {
        lVar8 = 0;
        local_74 = iVar1;
        local_70 = lVar12;
      }
      lVar9 = local_70;
      iVar2 = local_74;
      iVar3 = FUN_003897ac(local_68);
      lVar12 = lVar8;
      if ((iVar2 != iVar3) && (iVar3 = FUN_003814f4(local_68,iVar2), iVar3 < 1)) {
        FUN_003c893c(lVar9,(long)iVar2,"crypto/pkcs7/pk7_doit.c",0x267);
        lVar12 = 0;
        lVar9 = lVar8;
        local_74 = iVar1;
        local_70 = lVar8;
      }
      FUN_0037a0bc();
      iVar2 = FUN_003803c8(local_68,0,0,lVar9,0,0);
      if (iVar2 < 1) {
        lVar8 = 0;
        goto LAB_003e44cc;
      }
      FUN_003c893c(lVar9,(long)local_74,"crypto/pkcs7/pk7_doit.c",0x272);
      local_70 = 0;
      FUN_003c893c(lVar12,iVar1,"crypto/pkcs7/pk7_doit.c",0x274);
      if (lVar13 != 0) {
        FUN_0037eda0(lVar13,lVar15);
        lVar15 = lVar13;
      }
    }
    lVar13 = lVar15;
    local_d0 = param_3;
    if (param_3 != 0) {
LAB_003e45cc:
      FUN_0037eda0(lVar13,local_d0);
      FUN_0037fa4c(lVar11);
      return lVar13;
    }
    if (*local_e0 < 1) {
      FUN_00387560();
      local_d0 = FUN_0037db44();
      if (local_d0 != 0) {
        FUN_0037e4bc(local_d0,0x82,0,0);
        goto LAB_003e45cc;
      }
    }
    else {
      local_d0 = FUN_00387578(*(undefined8 *)(local_e0 + 2));
      if (local_d0 != 0) goto LAB_003e45cc;
    }
    lVar15 = 0;
    lVar8 = 0;
    lVar12 = 0;
  }
  else {
    if (iVar1 != 0x17) {
      if (iVar1 != 0x16) {
        FUN_00379868();
        FUN_0037995c("crypto/pkcs7/pk7_doit.c",0x1e4,"PKCS7_dataDecode");
        uVar4 = 0x70;
        goto LAB_003e44ac;
      }
      lVar11 = *(long *)(*(long *)(param_1 + 0x20) + 0x28);
      iVar1 = FUN_003dd5b4(*(undefined8 *)(lVar11 + 0x18));
      if (iVar1 == 0x15) {
        local_e0 = *(int **)(lVar11 + 0x20);
        iVar1 = FUN_003dd5b4(*(undefined8 *)(param_1 + 0x18));
joined_r0x003e40fc:
        if (iVar1 != 0x16) goto LAB_003e4118;
LAB_003e4100:
        lVar11 = FUN_003e7288(param_1,2,0,0);
        if (lVar11 == 0) goto LAB_003e4118;
      }
      else {
        iVar1 = FUN_003dd5b4(*(undefined8 *)(lVar11 + 0x18));
        if (((iVar1 - 0x15U < 6) || (piVar10 = *(int **)(lVar11 + 0x20), piVar10 == (int *)0x0)) ||
           (*piVar10 != 4)) {
          local_e0 = (int *)0x0;
          iVar1 = FUN_003dd5b4(*(undefined8 *)(param_1 + 0x18));
          goto joined_r0x003e40fc;
        }
        local_e0 = *(int **)(piVar10 + 2);
        iVar1 = FUN_003dd5b4(*(undefined8 *)(param_1 + 0x18));
        if (iVar1 == 0x16) goto LAB_003e4100;
LAB_003e4118:
        if (local_e0 == (int *)0x0) {
          FUN_00379868();
          FUN_0037995c("crypto/pkcs7/pk7_doit.c",0x1b2,"PKCS7_dataDecode");
          uVar4 = 0x9b;
          goto LAB_003e44ac;
        }
      }
      local_e8 = (undefined8 *)0x0;
      local_b8 = 0;
      lVar11 = 0;
      uVar14 = 0;
      lVar15 = *(long *)(*(long *)(param_1 + 0x20) + 8);
      if (param_3 != 0 || local_e0 != (int *)0x0) goto LAB_003e4170;
LAB_003e404c:
      FUN_00379868();
      FUN_0037995c("crypto/pkcs7/pk7_doit.c",0x1ea,"PKCS7_dataDecode");
      FUN_00379a5c(0x21,0x7a,0);
      goto LAB_003e44c0;
    }
    uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    lVar11 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
    local_e8 = *(undefined8 **)(lVar11 + 8);
    local_e0 = *(int **)(lVar11 + 0x10);
    FUN_003dd260(auStack_a6,0x32,*local_e8,0);
    FUN_0037f6d4();
    lVar11 = FUN_003823dc(uVar5,auStack_a6,uVar6);
    local_b8 = lVar11;
    if ((lVar11 == 0) && (local_b8 = FUN_003a1fb8(auStack_a6), local_b8 == 0)) {
      FUN_0037f8c4();
      FUN_00379868();
      uVar4 = 0x1de;
      goto LAB_003e44a0;
    }
    FUN_0037f71c();
    if (param_3 == 0 && local_e0 == (int *)0x0) goto LAB_003e404c;
    lVar13 = 0;
    FUN_003e5b5c();
    lVar15 = FUN_0037db44();
    if (lVar15 != 0) goto LAB_003e3f24;
LAB_003e428c:
    FUN_00379868();
    FUN_0037995c("crypto/pkcs7/pk7_doit.c",0x217,"PKCS7_dataDecode");
    FUN_00379a5c(0x21,0x80020,0);
LAB_003e42bc:
    lVar8 = 0;
    lVar12 = 0;
    iVar1 = 0;
  }
LAB_003e44cc:
  FUN_0037fa4c(lVar11);
  FUN_003c893c(local_70,(long)local_74,"crypto/pkcs7/pk7_doit.c",0x292);
  FUN_003c893c(lVar12,iVar1,"crypto/pkcs7/pk7_doit.c",0x293);
  FUN_0037ef60(lVar13);
  FUN_0037ef60(lVar8);
  FUN_0037ef60(lVar15);
  FUN_0037ef60(0);
  return 0;
}


// ===== 003e4734  FUN_003e4734 =====

int FUN_003e4734(undefined8 *param_1,int *param_2,long param_3,undefined8 param_4,undefined8 param_5
                )

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  int local_58 [2];
  undefined8 local_38;
  
  uVar4 = *(undefined8 *)(param_3 + 0x28);
  local_38 = 0;
  uVar2 = FUN_003e7ffc(uVar4);
  uVar4 = FUN_003e8008(uVar4);
  lVar3 = FUN_003b1de8(uVar2,param_4,uVar4);
  if (lVar3 == 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = FUN_003b4ccc();
    if (iVar1 < 1) {
      iVar1 = -1;
    }
    else {
      iVar1 = FUN_003a8020(param_4,&DAT_001f9542);
      if (iVar1 != 0) {
        FUN_003b3db4(lVar3,"rsa_pkcs1_implicit_rejection",&DAT_001e8c6a);
      }
      iVar1 = FUN_003b4f08(lVar3,&local_38,local_58,param_5,
                           *(undefined8 *)(*(int **)(param_3 + 0x18) + 2),
                           (long)**(int **)(param_3 + 0x18));
      if (iVar1 < 1) {
        FUN_003b1f78(lVar3);
        if (iVar1 != 0) {
          return iVar1;
        }
        FUN_003c86b4(local_38,"crypto/pkcs7/pk7_doit.c",0xc0);
        return 0;
      }
      FUN_003c893c(*param_1,(long)*param_2,"crypto/pkcs7/pk7_doit.c",0xb9);
      iVar1 = 1;
      *param_1 = local_38;
      *param_2 = local_58[0];
    }
    FUN_003b1f78(lVar3);
  }
  return iVar1;
}


// ===== 003e4884  FUN_003e4884 =====

undefined4 FUN_003e4884(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 local_b0;
  undefined4 local_a4;
  int local_a0;
  undefined4 uStack_9c;
  
  if (param_1 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/pkcs7/pk7_doit.c",0x2da,"PKCS7_dataFinal");
    uVar4 = 0x8f;
LAB_003e4994:
    FUN_00379a5c(0x21,uVar4,0);
    return 0;
  }
  uVar4 = FUN_003e7928();
  if (*(long *)(param_1 + 0x20) == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/pkcs7/pk7_doit.c",0x2e1,"PKCS7_dataFinal");
    uVar4 = 0x7a;
    goto LAB_003e4994;
  }
  lVar5 = FUN_0039d270();
  if (lVar5 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/pkcs7/pk7_doit.c",0x2e7,"PKCS7_dataFinal");
    uVar4 = 0x80006;
    goto LAB_003e4994;
  }
  iVar1 = FUN_003dd5b4(*(undefined8 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (iVar1 < 0x17) {
    if (iVar1 == 0x15) {
      lVar12 = *(long *)(param_1 + 0x20);
      goto LAB_003e4d08;
    }
    if (iVar1 == 0x16) {
      lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
      lVar12 = *(long *)(*(long *)(param_1 + 0x20) + 0x28);
      iVar1 = FUN_003dd5b4(*(undefined8 *)(lVar12 + 0x18));
      if (iVar1 == 0x15) {
        plVar9 = (long *)(lVar12 + 0x20);
LAB_003e49d0:
        lVar12 = *plVar9;
      }
      else {
        iVar1 = FUN_003dd5b4(*(undefined8 *)(lVar12 + 0x18));
        if (((5 < iVar1 - 0x15U) && (piVar11 = *(int **)(lVar12 + 0x20), piVar11 != (int *)0x0)) &&
           (*piVar11 == 4)) {
          plVar9 = (long *)(piVar11 + 2);
          goto LAB_003e49d0;
        }
        lVar12 = 0;
      }
      iVar1 = FUN_003dd5b4(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 0x28) + 0x18));
      if ((iVar1 == 0x15) && (*(int *)(param_1 + 0x14) != 0)) {
        thunk_FUN_0038eddc(lVar12);
        lVar12 = 0;
        lVar10 = 0x20;
        goto LAB_003e4b7c;
      }
      goto LAB_003e4b88;
    }
LAB_003e4a30:
    FUN_00379868();
    FUN_0037995c("crypto/pkcs7/pk7_doit.c",0x321,"PKCS7_dataFinal");
    uVar2 = 0x70;
LAB_003e4e60:
    FUN_00379a5c(0x21,uVar2,0);
  }
  else {
    if (iVar1 == 0x17) {
      lVar12 = *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x10) + 0x10);
      if (lVar12 == 0) {
        lVar12 = FUN_0038a358();
        if (lVar12 == 0) {
          FUN_00379868();
          uVar4 = 0x305;
LAB_003e4df8:
          FUN_0037995c("crypto/pkcs7/pk7_doit.c",uVar4,"PKCS7_dataFinal");
          uVar2 = 0x8000d;
          goto LAB_003e4e60;
        }
        *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x10) + 0x10) = lVar12;
      }
LAB_003e4d08:
      iVar1 = FUN_003dd5b4(*(undefined8 *)(param_1 + 0x18));
      if ((iVar1 != 0x16) || (lVar6 = FUN_003e7288(param_1,2,0,0), lVar6 == 0)) {
        if (lVar12 == 0) goto LAB_003e4e68;
        if ((*(byte *)(lVar12 + 0x10) >> 4 & 1) == 0) {
          lVar6 = FUN_0037eeb4(param_2,0x401);
          if (lVar6 == 0) {
            FUN_00379868();
            FUN_0037995c("crypto/pkcs7/pk7_doit.c",0x36c,"PKCS7_dataFinal");
            uVar2 = 0x6b;
            goto LAB_003e4e60;
          }
          uVar2 = FUN_0037e4bc(lVar6,3,0,&local_a0);
          FUN_0037dd34(lVar6,0x200);
          FUN_0037e4bc(lVar6,0x82,0,0);
          FUN_0038ee3c(lVar12,CONCAT44(uStack_9c,local_a0),uVar2);
        }
      }
      uVar2 = 1;
      goto LAB_003e4e6c;
    }
    if (iVar1 == 0x18) {
      lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
      lVar12 = *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x28) + 0x10);
      if (lVar12 == 0) {
        lVar12 = FUN_0038a358();
        if (lVar12 == 0) {
          FUN_00379868();
          uVar4 = 0x2f9;
          goto LAB_003e4df8;
        }
        lVar10 = 0x10;
LAB_003e4b7c:
        *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x28) + lVar10) = lVar12;
      }
LAB_003e4b88:
      if ((lVar6 != 0) && (iVar1 = FUN_0040caf8(lVar6), 0 < iVar1)) {
        iVar1 = 0;
        do {
          lVar10 = FUN_0040cb0c(lVar6,iVar1);
          if (*(long *)(lVar10 + 0x38) != 0) {
            uVar2 = FUN_003dd5b4(**(undefined8 **)(lVar10 + 0x10));
            lVar7 = FUN_003e4ed8(&local_b0,param_2,uVar2);
            if ((lVar7 == 0) || (iVar3 = FUN_0039e0a8(lVar5,local_b0), iVar3 == 0))
            goto LAB_003e4e68;
            iVar3 = FUN_0040caf8(*(undefined8 *)(lVar10 + 0x18));
            if (0 < iVar3) {
              uVar13 = *(undefined8 *)(lVar10 + 0x18);
              iVar3 = FUN_00425424(uVar13,0x34,0xffffffff);
              if (iVar3 < 0) {
LAB_003e4c44:
                iVar3 = FUN_003e6e0c(lVar10,0);
                if (iVar3 != 0) goto LAB_003e4c54;
                uVar4 = 0x2b7;
LAB_003e4e34:
                uVar2 = 0x80021;
              }
              else {
                uVar13 = FUN_00425550(uVar13,iVar3);
                lVar7 = FUN_00426700(uVar13,0);
                if (lVar7 == 0) goto LAB_003e4c44;
LAB_003e4c54:
                iVar3 = FUN_0039dac8(lVar5,&local_a0,&local_a4);
                if (iVar3 != 0) {
                  iVar3 = FUN_003e6ebc(lVar10,&local_a0,local_a4);
                  if (iVar3 == 0) {
                    uVar4 = 0x2c2;
                    goto LAB_003e4e34;
                  }
                  iVar3 = FUN_003e4fa4(lVar10);
                  if (iVar3 != 0) goto LAB_003e4ba8;
                  goto LAB_003e4e68;
                }
                uVar4 = 0x2be;
                uVar2 = 0x80006;
              }
              FUN_00379868();
              FUN_0037995c("crypto/pkcs7/pk7_doit.c",uVar4,"do_pkcs7_signed_attrib");
              goto LAB_003e4e60;
            }
            local_a0 = FUN_003a8edc(*(undefined8 *)(lVar10 + 0x38));
            if ((local_a0 == 0) ||
               (lVar7 = FUN_003c83a4(local_a0,"crypto/pkcs7/pk7_doit.c",0x347), lVar7 == 0))
            goto LAB_003e4e68;
            uVar14 = *(undefined8 *)(lVar10 + 0x38);
            uVar13 = FUN_003e7ffc(uVar4);
            uVar8 = FUN_003e8008(uVar4);
            iVar3 = FUN_003e6f3c(lVar5,lVar7,&local_a0,uVar14,uVar13,uVar8);
            if (iVar3 == 0) {
              FUN_003c86b4(lVar7,"crypto/pkcs7/pk7_doit.c",0x34d);
              FUN_00379868();
              FUN_0037995c("crypto/pkcs7/pk7_doit.c",0x34e,"PKCS7_dataFinal");
              uVar2 = 0x80006;
              goto LAB_003e4e60;
            }
            FUN_0038ee3c(*(undefined8 *)(lVar10 + 0x28),lVar7,local_a0);
          }
LAB_003e4ba8:
          iVar1 = iVar1 + 1;
          iVar3 = FUN_0040caf8(lVar6);
        } while (iVar1 < iVar3);
      }
      goto LAB_003e4d08;
    }
    if (iVar1 != 0x19) goto LAB_003e4a30;
    lVar12 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
    iVar1 = FUN_003dd5b4(*(undefined8 *)(lVar12 + 0x18));
    if (iVar1 == 0x15) {
      plVar9 = (long *)(lVar12 + 0x20);
LAB_003e4914:
      lVar12 = *plVar9;
    }
    else {
      iVar1 = FUN_003dd5b4(*(undefined8 *)(lVar12 + 0x18));
      if (((5 < iVar1 - 0x15U) && (piVar11 = *(int **)(lVar12 + 0x20), piVar11 != (int *)0x0)) &&
         (*piVar11 == 4)) {
        plVar9 = (long *)(piVar11 + 2);
        goto LAB_003e4914;
      }
      lVar12 = 0;
    }
    iVar1 = FUN_003dd5b4(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 0x10) + 0x18));
    if ((iVar1 == 0x15) && (*(int *)(param_1 + 0x14) != 0)) {
      thunk_FUN_0038eddc(lVar12);
      lVar12 = 0;
      *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 0x10) + 0x20) = 0;
    }
    uVar2 = FUN_003dd5b4(**(undefined8 **)(*(long *)(param_1 + 0x20) + 8));
    lVar6 = FUN_003e4ed8(&local_b0,param_2,uVar2);
    if (((lVar6 != 0) && (iVar1 = FUN_0039dac8(local_b0,&local_a0,&local_a4), iVar1 != 0)) &&
       (iVar1 = thunk_FUN_0038ebe0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),&local_a0,
                                   local_a4), iVar1 != 0)) goto LAB_003e4d08;
  }
LAB_003e4e68:
  uVar2 = 0;
LAB_003e4e6c:
  FUN_0039d284(lVar5);
  return uVar2;
}


// ===== 003e4ed8  FUN_003e4ed8 =====

long FUN_003e4ed8(long *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  lVar2 = FUN_0037eeb4(param_2,0x208);
  do {
    if (lVar2 == 0) {
      uVar4 = 0x6c;
      uVar3 = 0x2a0;
LAB_003e4f60:
      FUN_00379868();
      FUN_0037995c("crypto/pkcs7/pk7_doit.c",uVar3,"PKCS7_find_digest");
      FUN_00379a5c(0x21,uVar4,0);
      return 0;
    }
    FUN_0037e4bc(lVar2,0x78,0,param_1);
    if (*param_1 == 0) {
      uVar3 = 0x2a5;
      uVar4 = 0xc0103;
      goto LAB_003e4f60;
    }
    FUN_00389d80();
    iVar1 = FUN_003899b0();
    if (iVar1 == param_3) {
      return lVar2;
    }
    uVar3 = FUN_0037ef4c(lVar2);
    lVar2 = FUN_0037eeb4(uVar3,0x208);
  } while( true );
}


// ===== 003e4fa4  FUN_003e4fa4 =====

undefined8 FUN_003e4fa4(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  undefined8 local_28;
  
  local_28 = 0;
  local_48 = 0;
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  FUN_003dd5b4(**(undefined8 **)(param_1 + 0x10));
  FUN_003dce44();
  lVar2 = FUN_003a213c();
  if (lVar2 == 0) {
    return 0;
  }
  lVar3 = FUN_0039d270();
  if (lVar3 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/pkcs7/pk7_doit.c",0x38f,"PKCS7_SIGNER_INFO_sign");
    FUN_00379a5c(0x21,0x80006,0);
  }
  else {
    uVar4 = FUN_0038996c(lVar2);
    uVar5 = FUN_003e7ffc(uVar6);
    uVar6 = FUN_003e8008(uVar6);
    iVar1 = FUN_003a0a64(lVar3,&local_28,uVar4,uVar5,uVar6,*(undefined8 *)(param_1 + 0x38),0);
    if (0 < iVar1) {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      uVar6 = FUN_003e0ce8();
      iVar1 = FUN_0039b478(uVar4,&local_48,uVar6);
      if ((local_48 != 0) && (iVar1 = FUN_003a1324(lVar3,local_48,(long)iVar1), 0 < iVar1)) {
        FUN_003c86b4(local_48,"crypto/pkcs7/pk7_doit.c",0x39f);
        local_48 = 0;
        iVar1 = FUN_003a1554(lVar3,0,&local_50);
        if ((0 < iVar1) &&
           ((local_48 = FUN_003c83a4(CONCAT44(uStack_4c,local_50),"crypto/pkcs7/pk7_doit.c",0x3a3),
            local_48 != 0 && (iVar1 = FUN_003a1554(lVar3,local_48,&local_50), 0 < iVar1)))) {
          FUN_0039d284(lVar3);
          FUN_0038ee3c(*(undefined8 *)(param_1 + 0x28),local_48,local_50);
          return 1;
        }
      }
    }
  }
  FUN_003c86b4(local_48,"crypto/pkcs7/pk7_doit.c",0x3b0);
  FUN_0039d284(lVar3);
  return 0;
}


// ===== 003e5170  FUN_003e5170 =====

undefined8
FUN_003e5170(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_4 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/pkcs7/pk7_doit.c",0x3c0,"PKCS7_dataVerify");
    uVar3 = 0x8f;
  }
  else if (*(long *)(param_4 + 0x20) == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/pkcs7/pk7_doit.c",0x3c5,"PKCS7_dataVerify");
    uVar3 = 0x7a;
  }
  else {
    iVar1 = FUN_003dd5b4(*(undefined8 *)(param_4 + 0x18));
    if ((iVar1 == 0x16) || (iVar1 = FUN_003dd5b4(*(undefined8 *)(param_4 + 0x18)), iVar1 == 0x18)) {
      uVar3 = *(undefined8 *)(*(long *)(param_4 + 0x20) + 0x10);
      FUN_0042bdd8(param_2,*(undefined8 *)(*(long *)(param_4 + 0x20) + 0x18));
      lVar2 = FUN_0042720c(uVar3,**(undefined8 **)(param_5 + 8),(*(undefined8 **)(param_5 + 8))[1]);
      if (lVar2 == 0) {
        FUN_00379868();
        FUN_0037995c("crypto/pkcs7/pk7_doit.c",0x3dc,"PKCS7_dataVerify");
        uVar3 = 0x6a;
      }
      else {
        iVar1 = FUN_0042c15c(param_2,param_1,lVar2,uVar3);
        if (iVar1 == 0) {
          FUN_00379868();
          uVar3 = 0x3e2;
        }
        else {
          FUN_0042bde0(param_2,4);
          iVar1 = FUN_0042af5c(param_2);
          if (0 < iVar1) {
            uVar3 = FUN_003e5354(param_3,param_4,param_5,lVar2);
            return uVar3;
          }
          FUN_00379868();
          uVar3 = 1000;
        }
        FUN_0037995c("crypto/pkcs7/pk7_doit.c",uVar3,"PKCS7_dataVerify");
        uVar3 = 0x8000b;
      }
    }
    else {
      FUN_00379868();
      FUN_0037995c("crypto/pkcs7/pk7_doit.c",0x3d0,"PKCS7_dataVerify");
      uVar3 = 0x72;
    }
  }
  FUN_00379a5c(0x21,uVar3,0);
  return 0;
}


// ===== 003e5354  FUN_003e5354 =====

undefined4 FUN_003e5354(long param_1,long param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  uint *puVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  long lVar12;
  uint local_a4;
  undefined8 local_a0;
  undefined1 auStack_98 [64];
  long local_58;
  
  uVar3 = FUN_003e7928(param_2);
  uVar4 = FUN_003e7ffc();
  uVar3 = FUN_003e8008(uVar3);
  lVar5 = FUN_0039d270();
  if (lVar5 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/pkcs7/pk7_doit.c",0x403,"PKCS7_signatureVerify");
    uVar3 = 0x80006;
  }
  else {
    iVar1 = FUN_003dd5b4(*(undefined8 *)(param_2 + 0x18));
    if ((iVar1 == 0x16) || (iVar1 = FUN_003dd5b4(*(undefined8 *)(param_2 + 0x18)), iVar1 == 0x18)) {
      iVar1 = FUN_003dd5b4(**(undefined8 **)(param_3 + 0x10));
      if (param_1 != 0) {
        do {
          lVar6 = FUN_0037eeb4(param_1,0x208);
          if (lVar6 == 0) break;
          FUN_0037e4bc(lVar6,0x78,0,&local_58);
          if (local_58 == 0) {
            FUN_00379868();
            FUN_0037995c("crypto/pkcs7/pk7_doit.c",0x417,"PKCS7_signatureVerify");
            uVar3 = 0xc0103;
            goto LAB_003e55a4;
          }
          FUN_00389d80();
          iVar2 = FUN_003899b0();
          if (iVar2 == iVar1) {
LAB_003e54b8:
            iVar2 = FUN_0039e0a8(lVar5,local_58);
            if (iVar2 == 0) goto LAB_003e55ac;
            lVar6 = *(long *)(param_3 + 0x18);
            if ((lVar6 != 0) && (iVar2 = FUN_0040caf8(lVar6), iVar2 != 0)) {
              local_a0 = 0;
              iVar2 = FUN_0039dac8(lVar5,auStack_98,&local_a4);
              if (iVar2 == 0) goto LAB_003e55ac;
              iVar2 = FUN_00425424(lVar6,0x33,0xffffffff);
              if (-1 < iVar2) {
                uVar7 = FUN_00425550(lVar6,iVar2);
                lVar12 = FUN_00426700(uVar7,0);
                if ((lVar12 != 0) && (puVar9 = *(uint **)(lVar12 + 8), puVar9 != (uint *)0x0)) {
                  if ((*puVar9 != local_a4) ||
                     (iVar2 = memcmp(*(void **)(puVar9 + 2),auStack_98,(ulong)*puVar9), iVar2 != 0))
                  {
                    FUN_00379868();
                    FUN_0037995c("crypto/pkcs7/pk7_doit.c",0x43c,"PKCS7_signatureVerify");
                    FUN_00379a5c(0x21,0x65,0);
                    lVar12 = 0;
                    goto LAB_003e566c;
                  }
                  FUN_0037f6d4();
                  uVar7 = FUN_003dce44(iVar1);
                  lVar12 = FUN_0039e6f4(uVar4,uVar7,uVar3);
                  lVar8 = lVar12;
                  if (lVar12 == 0) {
                    FUN_003dce44(iVar1,0);
                    lVar8 = FUN_003a213c();
                    if (lVar8 != 0) goto LAB_003e56b0;
                  }
                  else {
LAB_003e56b0:
                    iVar1 = FUN_0039d92c(lVar5,lVar8,0);
                    if (iVar1 != 0) {
                      FUN_0037f71c();
                      uVar7 = FUN_003e0cf4();
                      iVar1 = FUN_0039b478(lVar6,&local_a0,uVar7);
                      if (iVar1 < 1) {
                        FUN_00379868();
                        FUN_0037995c("crypto/pkcs7/pk7_doit.c",0x452,"PKCS7_signatureVerify");
                        uVar3 = 0x8000d;
                        goto LAB_003e5664;
                      }
                      iVar1 = FUN_0039d938(lVar5,local_a0,iVar1);
                      if (iVar1 != 0) {
                        FUN_003c86b4(local_a0,"crypto/pkcs7/pk7_doit.c",0x459);
                        puVar11 = *(undefined4 **)(param_3 + 0x28);
                        lVar6 = FUN_00427350(param_4);
                        goto joined_r0x003e5714;
                      }
                      uVar10 = 0;
                      goto LAB_003e55b4;
                    }
                  }
                  FUN_0037f8c4();
                  uVar10 = 0;
                  goto LAB_003e55b4;
                }
              }
              FUN_00379868();
              uVar3 = 0x437;
              goto LAB_003e5454;
            }
            lVar12 = 0;
            puVar11 = *(undefined4 **)(param_3 + 0x28);
            lVar6 = FUN_00427350(param_4);
joined_r0x003e5714:
            if (lVar6 != 0) {
              iVar1 = FUN_003e70f4(lVar5,*(undefined8 *)(puVar11 + 2),*puVar11,lVar6,uVar4,uVar3);
              if (0 < iVar1) {
                uVar10 = 1;
                goto LAB_003e55b4;
              }
              FUN_00379868();
              FUN_0037995c("crypto/pkcs7/pk7_doit.c",0x465,"PKCS7_signatureVerify");
              uVar3 = 0x69;
LAB_003e5664:
              FUN_00379a5c(0x21,uVar3,0);
            }
LAB_003e566c:
            uVar10 = 0xffffffff;
            goto LAB_003e55b4;
          }
          FUN_00389d80(local_58);
          iVar2 = FUN_003899e4();
          if (iVar2 == iVar1) goto LAB_003e54b8;
          param_1 = FUN_0037ef4c(lVar6);
        } while (param_1 != 0);
      }
      FUN_00379868();
      uVar3 = 0x412;
LAB_003e5454:
      FUN_0037995c("crypto/pkcs7/pk7_doit.c",uVar3,"PKCS7_signatureVerify");
      uVar3 = 0x6c;
    }
    else {
      FUN_00379868();
      FUN_0037995c("crypto/pkcs7/pk7_doit.c",0x408,"PKCS7_signatureVerify");
      uVar3 = 0x72;
    }
  }
LAB_003e55a4:
  FUN_00379a5c(0x21,uVar3,0);
LAB_003e55ac:
  uVar10 = 0;
  lVar12 = 0;
LAB_003e55b4:
  FUN_0039d284(lVar5);
  FUN_0039d050(lVar12);
  return uVar10;
}


// ===== 003e5760  FUN_003e5760 =====

long FUN_003e5760(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  iVar1 = FUN_00425424(param_1,0x33,0xffffffff);
  if (-1 < iVar1) {
    uVar2 = FUN_00425550(param_1,iVar1);
    lVar3 = FUN_00426700(uVar2,0);
    if (lVar3 != 0) {
      lVar3 = *(long *)(lVar3 + 8);
    }
    return lVar3;
  }
  return 0;
}


// ===== 003e57b8  FUN_003e57b8 =====

undefined8 FUN_003e57b8(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_003dd5b4(*(undefined8 *)(param_1 + 0x18));
  if ((((iVar1 == 0x18) && (*(long *)(param_1 + 0x20) != 0)) &&
      (lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x30), lVar2 != 0)) &&
     (iVar1 = FUN_0040caf8(lVar2), param_2 < iVar1)) {
    lVar2 = FUN_0040cb0c(lVar2,param_2);
    return *(undefined8 *)(lVar2 + 8);
  }
  return 0;
}


// ===== 003e5828  FUN_003e5828 =====

undefined8 FUN_003e5828(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  iVar1 = FUN_00425424(uVar2,param_2,0xffffffff);
  if (-1 < iVar1) {
    uVar2 = FUN_00425550(uVar2,iVar1);
    uVar2 = FUN_00426700(uVar2,0);
    return uVar2;
  }
  return 0;
}


// ===== 003e5874  FUN_003e5874 =====

undefined8 FUN_003e5874(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  iVar1 = FUN_00425424(uVar2,param_2,0xffffffff);
  if (-1 < iVar1) {
    uVar2 = FUN_00425550(uVar2,iVar1);
    uVar2 = FUN_00426700(uVar2,0);
    return uVar2;
  }
  return 0;
}


// ===== 003e58c0  FUN_003e58c0 =====

long FUN_003e58c0(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_0040ca6c(*(undefined8 *)(param_1 + 0x18),PTR_FUN_007a1b48);
  lVar3 = FUN_0040bc8c(param_2);
  *(long *)(param_1 + 0x18) = lVar3;
  if (lVar3 != 0) {
    iVar1 = FUN_0040caf8(param_2);
    if (iVar1 < 1) {
      return 1;
    }
    iVar1 = 0;
    do {
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      FUN_0040cb0c(param_2,iVar1);
      uVar4 = FUN_0043a72c();
      lVar3 = FUN_0040cb3c(uVar5,iVar1,uVar4);
      if (lVar3 == 0) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      iVar2 = FUN_0040caf8(param_2);
    } while (iVar1 < iVar2);
    lVar3 = 1;
  }
  return lVar3;
}


// ===== 003e5970  FUN_003e5970 =====

long FUN_003e5970(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_0040ca6c(*(undefined8 *)(param_1 + 0x30),PTR_FUN_007a1b48);
  lVar3 = FUN_0040bc8c(param_2);
  *(long *)(param_1 + 0x30) = lVar3;
  if (lVar3 != 0) {
    iVar1 = FUN_0040caf8(param_2);
    if (iVar1 < 1) {
      return 1;
    }
    iVar1 = 0;
    do {
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      FUN_0040cb0c(param_2,iVar1);
      uVar4 = FUN_0043a72c();
      lVar3 = FUN_0040cb3c(uVar5,iVar1,uVar4);
      if (lVar3 == 0) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      iVar2 = FUN_0040caf8(param_2);
    } while (iVar1 < iVar2);
    lVar3 = 1;
  }
  return lVar3;
}


// ===== 003e5a20  FUN_003e5a20 =====

void FUN_003e5a20(long param_1)

{
  FUN_003e5a28(param_1 + 0x18);
  return;
}


// ===== 003e5a28  FUN_003e5a28 =====

long FUN_003e5a28(long *param_1,int param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  if (*param_1 == 0) {
    lVar4 = FUN_0040bf0c();
    *param_1 = lVar4;
    if (lVar4 == 0) {
      return 0;
    }
  }
  else {
    iVar1 = FUN_0040caf8();
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        uVar3 = FUN_0040cb0c(*param_1,iVar1);
        FUN_004266b0();
        iVar2 = FUN_003dd5b4();
        if (iVar2 == param_2) {
          FUN_0043a720(uVar3);
          lVar4 = FUN_0043a73c(param_2,param_3,param_4);
          if (lVar4 == 0) {
            return 0;
          }
          lVar5 = FUN_0040cb3c(*param_1,iVar1,lVar4);
          if (lVar5 != 0) {
            return 1;
          }
          goto LAB_003e5b34;
        }
        iVar1 = iVar1 + 1;
        iVar2 = FUN_0040caf8(*param_1);
      } while (iVar1 < iVar2);
    }
  }
  lVar4 = FUN_0043a73c(param_2,param_3,param_4);
  if (lVar4 != 0) {
    iVar1 = FUN_0040c89c(*param_1,lVar4);
    if (iVar1 == 0) {
LAB_003e5b34:
      FUN_0043a720(lVar4);
      return 0;
    }
    lVar4 = 1;
  }
  return lVar4;
}


// ===== 003e5b54  FUN_003e5b54 =====

void FUN_003e5b54(long param_1)

{
  FUN_003e5a28(param_1 + 0x30);
  return;
}


// ===== 003e5b5c  FUN_003e5b5c =====

undefined * FUN_003e5b5c(void)

{
  return &DAT_0077a508;
}


// ===== 003e5b68  FUN_003e5b68 =====

ulong FUN_003e5b68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5)

{
  int iVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  
  uVar2 = FUN_0037dc20();
  if (uVar2 != 0) {
    pcVar3 = (code *)FUN_0037dd44(param_1);
    if ((pcVar3 != (code *)0x0) &&
       (lVar4 = (*pcVar3)(param_1,6,param_2,0,4,(long)param_5,1,0), lVar4 < 1)) {
      return 0;
    }
    FUN_0037dc28(param_1,1);
    iVar1 = FUN_003803c8(*(undefined8 *)(uVar2 + 0x18),param_2,0,param_3,param_4,param_5);
    uVar2 = (ulong)(iVar1 != 0);
    if ((pcVar3 != (code *)0x0) && (iVar1 != 0)) {
      uVar2 = (*pcVar3)(param_1,0x86,param_2,0,4,(long)param_5,1,0);
    }
  }
  return uVar2;
}


// ===== 003e5c70  FUN_003e5c70 =====

uint FUN_003e5c70(undefined8 param_1,long param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  
  piVar6 = (int *)FUN_0037dc20();
  lVar7 = FUN_0037ef4c(param_1);
  uVar3 = 0;
  if ((piVar6 != (int *)0x0) && (lVar7 != 0)) {
    FUN_0037dd18(param_1,0xf);
    iVar4 = piVar6[1];
    iVar8 = *piVar6 - iVar4;
    if (0 < iVar8) {
      do {
        uVar3 = FUN_0037df4c(lVar7,(long)piVar6 + (long)iVar4 + 0x30,iVar8);
        if ((int)uVar3 < 1) goto LAB_003e5da8;
        iVar2 = iVar8 - uVar3;
        iVar4 = piVar6[1] + uVar3;
        piVar6[1] = iVar4;
        bVar1 = (int)uVar3 <= iVar8;
        iVar8 = iVar2;
      } while (iVar2 != 0 && bVar1);
    }
    uVar3 = 0;
    if ((param_2 != 0) && (0 < (int)param_3)) {
      piVar6[1] = 0;
      uVar9 = param_3;
      do {
        uVar3 = uVar9;
        if (0xfff < uVar9) {
          uVar3 = 0x1000;
        }
        iVar4 = FUN_003803d0(*(undefined8 *)(piVar6 + 6),piVar6 + 0xc,piVar6,param_2,(ulong)uVar3);
        if (iVar4 == 0) {
          FUN_0037dd18(param_1,0xf);
          piVar6[4] = 0;
          return 0;
        }
        uVar9 = uVar9 - uVar3;
        piVar6[1] = 0;
        if (0 < *piVar6) {
          iVar4 = 0;
          iVar8 = *piVar6;
          do {
            uVar5 = FUN_0037df4c(lVar7,(long)(piVar6 + 0xc) + (long)iVar4,iVar8);
            if ((int)uVar5 < 1) {
              FUN_0037f294(param_1);
              if (param_3 - uVar9 == 0) {
                return uVar5;
              }
              return param_3 - uVar9;
            }
            iVar2 = iVar8 - uVar5;
            iVar4 = piVar6[1] + uVar5;
            piVar6[1] = iVar4;
            bVar1 = (int)uVar5 <= iVar8;
            iVar8 = iVar2;
          } while (iVar2 != 0 && bVar1);
        }
        param_2 = param_2 + (ulong)uVar3;
        piVar6[0] = 0;
        piVar6[1] = 0;
        uVar3 = param_3;
      } while (0 < (int)uVar9);
LAB_003e5da8:
      FUN_0037f294(param_1);
    }
  }
  return uVar3;
}


// ===== 003e5e00  FUN_003e5e00 =====

uint FUN_003e5e00(undefined8 param_1,void *param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  int local_64;
  
  if (param_2 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar6 = (uint *)FUN_0037dc20();
    lVar7 = FUN_0037ef4c(param_1);
    uVar5 = 0;
    if ((puVar6 != (uint *)0x0) && (lVar7 != 0)) {
      if ((int)*puVar6 < 1) {
        uVar10 = 0;
      }
      else {
        uVar10 = *puVar6 - puVar6[1];
        if ((int)param_3 <= (int)uVar10) {
          uVar10 = param_3;
        }
        memcpy(param_2,(void *)((long)puVar6 + (long)(int)puVar6[1] + 0x30),(long)(int)uVar10);
        uVar5 = puVar6[1];
        param_2 = (void *)((long)param_2 + (long)(int)uVar10);
        param_3 = param_3 - uVar10;
        puVar6[1] = uVar5 + uVar10;
        if (*puVar6 == uVar5 + uVar10) {
          puVar6[0] = 0;
          puVar6[1] = 0;
        }
      }
      iVar4 = FUN_0038936c(*(undefined8 *)(puVar6 + 6));
      iVar2 = 0;
      if (iVar4 != 1) {
        iVar2 = iVar4;
      }
      uVar5 = uVar10;
      if (0 < (int)param_3) {
        puVar1 = puVar6 + 0x54;
        while (uVar5 = uVar10, 0 < (int)puVar6[2]) {
          lVar8 = *(long *)(puVar6 + 8);
          if (lVar8 == *(long *)(puVar6 + 10)) {
            *(uint **)(puVar6 + 8) = puVar1;
            *(uint **)(puVar6 + 10) = puVar1;
            uVar5 = FUN_0037dd7c(lVar7,puVar1,0x1000);
            if (0 < (int)uVar5) {
              lVar8 = *(long *)(puVar6 + 8);
              *(ulong *)(puVar6 + 10) = *(long *)(puVar6 + 10) + (ulong)uVar5;
              if (0x100 < param_3) goto LAB_003e5f54;
              goto LAB_003e5fa4;
            }
LAB_003e5fe4:
            iVar4 = FUN_0037dd28(lVar7,8);
            if (iVar4 != 0) {
              if (uVar10 != 0) {
                uVar5 = uVar10;
              }
              break;
            }
            puVar6[2] = uVar5;
            uVar5 = FUN_0038095c(*(undefined8 *)(puVar6 + 6),puVar6 + 0xc,puVar6);
            uVar9 = *puVar6;
            puVar6[4] = uVar5;
            puVar6[1] = 0;
LAB_003e6014:
            if ((int)param_3 <= (int)uVar9) {
              uVar9 = param_3;
            }
            uVar5 = uVar10;
            if ((int)uVar9 < 1) break;
            memcpy(param_2,puVar6 + 0xc,(ulong)uVar9);
            uVar10 = uVar9 + uVar10;
            param_3 = param_3 - uVar9;
            param_2 = (void *)((long)param_2 + (ulong)uVar9);
            puVar6[1] = uVar9;
          }
          else {
            uVar5 = (int)*(long *)(puVar6 + 10) - (int)lVar8;
            if ((int)uVar5 < 1) goto LAB_003e5fe4;
            if (param_3 < 0x101) {
LAB_003e5fa4:
              if (0xff < uVar5) {
                uVar5 = 0x100;
              }
              iVar4 = FUN_003803d0(*(undefined8 *)(puVar6 + 6),puVar6 + 0xc,puVar6,lVar8,uVar5);
              if (iVar4 == 0) {
                FUN_0037dd18(param_1,0xf);
                puVar6[4] = 0;
                return 0;
              }
              uVar9 = *puVar6;
              *(ulong *)(puVar6 + 8) = *(long *)(puVar6 + 8) + (ulong)uVar5;
              puVar6[2] = 1;
              if (uVar9 == 0) goto LAB_003e5ee8;
              goto LAB_003e6014;
            }
LAB_003e5f54:
            uVar3 = param_3 - iVar2;
            uVar9 = uVar5;
            if ((int)uVar3 <= (int)uVar5) {
              uVar9 = uVar3;
            }
            iVar4 = FUN_003803d0(*(undefined8 *)(puVar6 + 6),param_2,&local_64,lVar8,uVar9);
            if (iVar4 == 0) {
              FUN_0037dd18(param_1,0xf);
              return 0;
            }
            uVar10 = local_64 + uVar10;
            param_2 = (void *)((long)param_2 + (long)local_64);
            param_3 = param_3 - local_64;
            if (0 < (int)(uVar5 - uVar3)) {
              lVar8 = *(long *)(puVar6 + 8) + (long)(int)uVar3;
              *(long *)(puVar6 + 8) = lVar8;
              uVar5 = uVar5 - uVar3;
              goto LAB_003e5fa4;
            }
            *(undefined8 *)(puVar6 + 8) = *(undefined8 *)(puVar6 + 10);
          }
LAB_003e5ee8:
          uVar5 = uVar10;
          if ((int)param_3 < 1) break;
        }
      }
      FUN_0037dd18(param_1,0xf);
      FUN_0037f294(param_1);
      if (uVar5 == 0) {
        uVar5 = puVar6[2];
      }
    }
  }
  return uVar5;
}


// ===== 003e60bc  FUN_003e60bc =====

ulong FUN_003e60bc(undefined8 param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  undefined8 uVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  int iVar15;
  
  piVar8 = (int *)FUN_0037dc20();
  uVar9 = FUN_0037ef4c(param_1);
  if (piVar8 == (int *)0x0) {
LAB_003e6358:
    uVar13 = 0;
  }
  else {
    if (param_2 < 0xc) {
      if (param_2 < 10) {
        if (param_2 != 1) {
          if (param_2 == 2) {
            if (piVar8[2] < 1) {
              return 1;
            }
            param_2 = 2;
          }
          goto LAB_003e63a4;
        }
        uVar14 = *(undefined8 *)(piVar8 + 6);
        *(undefined8 *)(piVar8 + 3) = DAT_001b7108;
        uVar6 = FUN_00389488(uVar14);
        iVar7 = FUN_003803c8(uVar14,0,0,0,0,uVar6);
        if (iVar7 != 0) {
          param_2 = 1;
          goto LAB_003e63a4;
        }
        goto LAB_003e6358;
      }
      if (param_2 != 10) {
        if (param_2 == 0xb) {
          do {
            iVar7 = *piVar8;
            iVar15 = piVar8[1];
            while (iVar2 = iVar7 - iVar15, iVar7 != iVar15) {
              piVar10 = (int *)FUN_0037dc20(param_1);
              lVar11 = FUN_0037ef4c(param_1);
              if ((piVar10 != (int *)0x0) && (lVar11 != 0)) {
                FUN_0037dd18(param_1,0xf);
                iVar7 = piVar10[1];
                iVar15 = *piVar10 - iVar7;
                if (0 < iVar15) {
                  do {
                    iVar5 = FUN_0037df4c(lVar11,(long)piVar10 + (long)iVar7 + 0x30,iVar15);
                    if (iVar5 < 1) {
                      FUN_0037f294(param_1);
                      if (iVar5 < 0) goto LAB_003e6390;
                      break;
                    }
                    iVar3 = iVar15 - iVar5;
                    iVar7 = piVar10[1] + iVar5;
                    piVar10[1] = iVar7;
                    bVar1 = iVar5 <= iVar15;
                    iVar15 = iVar3;
                  } while (iVar3 != 0 && bVar1);
                }
              }
              iVar7 = *piVar8;
              iVar15 = piVar8[1];
              if (iVar7 - iVar15 == iVar2) {
                iVar5 = 0;
LAB_003e6390:
                return (long)iVar5;
              }
            }
            if (piVar8[3] != 0) {
              uVar14 = 0xb;
              goto LAB_003e62fc;
            }
            piVar8[3] = 1;
            piVar8[1] = 0;
            iVar7 = FUN_0038095c(*(undefined8 *)(piVar8 + 6),piVar8 + 0xc,piVar8);
            piVar8[4] = iVar7;
            if (iVar7 < 1) {
              return (long)iVar7;
            }
          } while( true );
        }
LAB_003e63a4:
        uVar13 = FUN_0037e4bc(uVar9,param_2,param_3,param_4);
        return uVar13;
      }
      uVar4 = *piVar8 - piVar8[1];
      if (uVar4 == 0 || *piVar8 < piVar8[1]) {
        param_2 = 10;
        goto LAB_003e63a4;
      }
    }
    else {
      if (100 < param_2) {
        if (param_2 == 0x65) {
          FUN_0037dd18(param_1,0xf);
          uVar14 = 0x65;
LAB_003e62fc:
          uVar13 = FUN_0037e4bc(uVar9,uVar14,param_3,param_4);
          FUN_0037f294(param_1);
          return uVar13;
        }
        if (param_2 == 0x71) {
          return (long)piVar8[4];
        }
        if (param_2 == 0x81) {
          *param_4 = *(undefined8 *)(piVar8 + 6);
          FUN_0037dc28(param_1,1);
          return 1;
        }
        goto LAB_003e63a4;
      }
      if (param_2 == 0xc) {
        lVar11 = FUN_0037dc20(param_4);
        lVar12 = FUN_0037fab8();
        *(long *)(lVar11 + 0x18) = lVar12;
        if (lVar12 == 0) {
          return 0;
        }
        iVar7 = FUN_0038213c(lVar12,*(undefined8 *)(piVar8 + 6));
        if (iVar7 != 0) {
          FUN_0037dc28(param_4,1);
          return (long)iVar7;
        }
        goto LAB_003e6358;
      }
      if (param_2 != 0xd) goto LAB_003e63a4;
      uVar4 = *piVar8 - piVar8[1];
      if (uVar4 == 0 || *piVar8 < piVar8[1]) {
        param_2 = 0xd;
        goto LAB_003e63a4;
      }
    }
    uVar13 = (ulong)uVar4;
  }
  return uVar13;
}


// ===== 003e63d8  FUN_003e63d8 =====

undefined8 FUN_003e63d8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_003c8474(0x1150,"crypto/evp/bio_enc.c",0x44);
  if (lVar1 == 0) {
    return 0;
  }
  lVar2 = FUN_0037fab8();
  *(long *)(lVar1 + 0x18) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 *)(lVar1 + 8) = 1;
    *(undefined4 *)(lVar1 + 0x10) = 1;
    *(long *)(lVar1 + 0x20) = lVar1 + 0x150;
    *(long *)(lVar1 + 0x28) = lVar1 + 0x150;
    FUN_0037dc18(param_1,lVar1);
    FUN_0037dc28(param_1,1);
    return 1;
  }
  FUN_003c86b4(lVar1,"crypto/evp/bio_enc.c",0x49);
  return 0;
}


// ===== 003e6498  FUN_003e6498 =====

long FUN_003e6498(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  if ((param_1 != 0) && (lVar1 = FUN_0037dc20(), lVar1 != 0)) {
    FUN_0037fae8(*(undefined8 *)(lVar1 + 0x18));
    FUN_003c893c(lVar1,0x1150,"crypto/evp/bio_enc.c",0x61);
    FUN_0037dc18(param_1,0);
    FUN_0037dc28(param_1,0);
    lVar1 = 1;
  }
  return lVar1;
}


// ===== 003e6508  FUN_003e6508 =====

void FUN_003e6508(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = FUN_0037ef4c();
  if (lVar1 != 0) {
    FUN_0037ec5c(lVar1,param_2,param_3);
    return;
  }
  return;
}


// ===== 003e6544  FUN_003e6544 =====

undefined * FUN_003e6544(void)

{
  return &DAT_0077a578;
}


// ===== 003e6550  FUN_003e6550 =====

undefined4 FUN_003e6550(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  return param_3;
}


// ===== 003e6558  FUN_003e6558 =====

undefined8 FUN_003e6558(void)

{
  return 0;
}


// ===== 003e6560  FUN_003e6560 =====

size_t FUN_003e6560(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  
  if (param_2 != (char *)0x0) {
    sVar1 = strlen(param_2);
    return sVar1;
  }
  return 0;
}


// ===== 003e6584  FUN_003e6584 =====

undefined8 FUN_003e6584(void)

{
  return 0;
}


// ===== 003e658c  FUN_003e658c =====

undefined8 FUN_003e658c(undefined8 param_1,int param_2)

{
  if (param_2 - 1U < 0xc) {
    return *(undefined8 *)(&DAT_0020d3f0 + (ulong)(param_2 - 1U) * 8);
  }
  return 0;
}


// ===== 003e65b0  FUN_003e65b0 =====

undefined * FUN_003e65b0(void)

{
  return &DAT_0077a5e8;
}


// ===== 003e65bc  FUN_003e65bc =====

int FUN_003e65bc(undefined8 param_1,long param_2,int param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  iVar1 = 0;
  if ((param_2 != 0) && (0 < param_3)) {
    lVar3 = FUN_0037dc20();
    lVar4 = FUN_0037ef4c(param_1);
    iVar1 = 0;
    if ((lVar3 != 0) && (lVar4 != 0)) {
      iVar1 = FUN_0037df4c(lVar4,param_2,param_3);
    }
    iVar2 = FUN_0037dc30(param_1);
    if (((iVar2 != 0) && (0 < iVar1)) && (iVar2 = FUN_0039d938(lVar3,param_2,iVar1), iVar2 == 0)) {
      FUN_0037dd18(param_1,0xf);
      return 0;
    }
    if (lVar4 != 0) {
      FUN_0037dd18(param_1,0xf);
      FUN_0037f294(param_1);
    }
  }
  return iVar1;
}


// ===== 003e66a0  FUN_003e66a0 =====

int FUN_003e66a0(undefined8 param_1,long param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar3 = FUN_0037dc20();
  lVar4 = FUN_0037ef4c(param_1);
  iVar1 = 0;
  if ((lVar3 != 0) && (lVar4 != 0)) {
    iVar1 = FUN_0037dd7c(lVar4,param_2,param_3);
    iVar2 = FUN_0037dc30(param_1);
    if ((iVar2 != 0) && ((0 < iVar1 && (iVar2 = FUN_0039d938(lVar3,param_2,iVar1), iVar2 < 1)))) {
      return -1;
    }
    FUN_0037dd18(param_1,0xf);
    FUN_0037f294(param_1);
  }
  return iVar1;
}


// ===== 003e6780  FUN_003e6780 =====

undefined4 FUN_003e6780(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_14;
  
  uVar2 = FUN_0037dc20();
  FUN_00389d80();
  iVar1 = FUN_00389a38();
  if (param_3 < iVar1) {
    return 0;
  }
  iVar1 = FUN_0039dac8(uVar2,param_2,&local_14);
  if (iVar1 < 1) {
    local_14 = 0xffffffff;
  }
  return local_14;
}


// ===== 003e67f0  FUN_003e67f0 =====

long FUN_003e67f0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar2 = FUN_0037dc20();
  uVar3 = FUN_0037ef4c(param_1);
  if (param_2 < 0x6f) {
    if (param_2 == 1) {
      iVar1 = FUN_0037dc30(param_1);
      if (iVar1 == 0) {
        return 0;
      }
      uVar4 = FUN_00389d80(uVar2);
      iVar1 = FUN_0039d92c(uVar2,uVar4,0);
      if (iVar1 < 1) {
        return (long)iVar1;
      }
      param_2 = 1;
LAB_003e6948:
      lVar5 = FUN_0037e4bc(uVar3,param_2,param_3,param_4);
      return lVar5;
    }
    if (param_2 != 0xc) {
      if (param_2 == 0x65) {
        FUN_0037dd18(param_1,0xf);
        lVar5 = FUN_0037e4bc(uVar3,0x65,param_3,param_4);
        FUN_0037f294(param_1);
        return lVar5;
      }
      goto LAB_003e6948;
    }
    uVar3 = FUN_0037dc20(param_4);
    iVar1 = FUN_0039e0a8(uVar3,uVar2);
    if (iVar1 == 0) {
      return 0;
    }
  }
  else {
    if (param_2 < 0x78) {
      if (param_2 != 0x6f) {
        if (param_2 == 0x70) {
          iVar1 = FUN_0037dc30(param_1);
          if (iVar1 == 0) {
            return 0;
          }
          uVar2 = FUN_00389d80(uVar2);
          *param_4 = uVar2;
          return 1;
        }
        goto LAB_003e6948;
      }
      iVar1 = FUN_0039d92c(uVar2,param_4,0);
      lVar5 = (long)iVar1;
      if (iVar1 < 1) {
        return lVar5;
      }
      goto LAB_003e69cc;
    }
    if (param_2 != 0x78) {
      if (param_2 == 0x94) {
        iVar1 = FUN_0037dc30(param_1);
        if (iVar1 == 0) {
          return 0;
        }
        FUN_0037dc18(param_1,param_4);
        return 1;
      }
      goto LAB_003e6948;
    }
    *param_4 = uVar2;
  }
  lVar5 = 1;
LAB_003e69cc:
  FUN_0037dc28(param_1,1);
  return lVar5;
}


// ===== 003e6a20  FUN_003e6a20 =====

undefined8 FUN_003e6a20(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_0039d270();
  if (lVar1 != 0) {
    FUN_0037dc28(param_1,1);
    FUN_0037dc18(param_1,lVar1);
    return 1;
  }
  return 0;
}


// ===== 003e6a88  FUN_003e6a88 =====

long FUN_003e6a88(long param_1)

{
  if (param_1 != 0) {
    FUN_0037dc20();
    FUN_0039d284();
    FUN_0037dc18(param_1,0);
    FUN_0037dc28(param_1,0);
    param_1 = 1;
  }
  return param_1;
}


// ===== 003e6acc  FUN_003e6acc =====

void FUN_003e6acc(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = FUN_0037ef4c();
  if (lVar1 != 0) {
    FUN_0037ec5c(lVar1,param_2,param_3);
    return;
  }
  return;
}


// ===== 003e6b08  FUN_003e6b08 =====

undefined8 FUN_003e6b08(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  puVar3 = (undefined4 *)FUN_0038edac();
  if (puVar3 == (undefined4 *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/pkcs7/pk7_attr.c",0x1a,"PKCS7_add_attrib_smimecap");
    FUN_00379a5c(0x21,0x8000d,0);
    return 0;
  }
  uVar4 = FUN_003a3a20();
  uVar1 = FUN_0039b478(param_2,puVar3 + 2,uVar4);
  *puVar3 = uVar1;
  iVar2 = FUN_003e5a20(param_1,0xa7,0x10,puVar3);
  if (iVar2 != 0) {
    return 1;
  }
  FUN_0038eddc(puVar3);
  return 0;
}


// ===== 003e6bd0  FUN_003e6bd0 =====

int * FUN_003e6bd0(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 local_8;
  
  piVar2 = (int *)FUN_003e5828(param_1,0xa7);
  if (piVar2 != (int *)0x0) {
    if (*piVar2 != 0x10) {
      return (int *)0x0;
    }
    local_8 = *(undefined8 *)(*(int **)(piVar2 + 2) + 2);
    iVar1 = **(int **)(piVar2 + 2);
    uVar3 = FUN_003a3a20();
    piVar2 = (int *)FUN_0038a93c(0,&local_8,(long)iVar1,uVar3);
  }
  return piVar2;
}


// ===== 003e6c38  FUN_003e6c38 =====

undefined8 FUN_003e6c38(undefined8 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  
  uVar5 = 0x8000d;
  puVar2 = (undefined8 *)FUN_003a3a44();
  if (puVar2 == (undefined8 *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/pkcs7/pk7_attr.c",0x3c,"PKCS7_simple_smimecap");
    FUN_00379a5c(0x21,0x8000d,0);
    return 0;
  }
  FUN_0039a0f4(*puVar2);
  uVar3 = FUN_003dcce8(param_2);
  *puVar2 = uVar3;
  if (0 < param_3) {
    lVar4 = FUN_0038a64c();
    puVar2[1] = lVar4;
    if (lVar4 == 0) {
      lVar4 = 0;
      uVar3 = 0x43;
      goto LAB_003e6d5c;
    }
    lVar4 = FUN_0038a388();
    uVar5 = 0x8000d;
    if (lVar4 == 0) {
      uVar3 = 0x47;
      goto LAB_003e6d5c;
    }
    iVar1 = FUN_0038de18(lVar4,param_3);
    if (iVar1 == 0) {
      uVar3 = 0x4b;
      goto LAB_003e6d5c;
    }
    *(long *)(puVar2[1] + 8) = lVar4;
    *(undefined4 *)puVar2[1] = 2;
  }
  iVar1 = FUN_0040c89c(param_1,puVar2);
  if (iVar1 != 0) {
    return 1;
  }
  lVar4 = 0;
  uVar3 = 0x53;
  uVar5 = 0x8000f;
LAB_003e6d5c:
  FUN_00379868();
  FUN_0037995c("crypto/pkcs7/pk7_attr.c",uVar3,"PKCS7_simple_smimecap");
  FUN_00379a5c(0x21,uVar5,0);
  thunk_FUN_0038eddc(lVar4);
  FUN_003a3a50(puVar2);
  return 0;
}


// ===== 003e6db0  FUN_003e6db0 =====

undefined8 FUN_003e6db0(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_003e5828(param_1,0x32);
  if (lVar1 != 0) {
    return 0;
  }
  if (param_2 == 0) {
    param_2 = FUN_003dcce8(0x15);
  }
  uVar2 = FUN_003e5a20(param_1,0x32,6,param_2);
  return uVar2;
}


// ===== 003e6e0c  FUN_003e6e0c =====

undefined8 FUN_003e6e0c(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  if (param_2 == 0) {
    param_2 = FUN_0042b4d4(0);
    lVar2 = param_2;
    if (param_2 == 0) {
      FUN_00379868(param_1);
      FUN_0037995c("crypto/pkcs7/pk7_attr.c",0x6c,"PKCS7_add0_attrib_signing_time");
      FUN_00379a5c(0x21,0x8000b,0);
      return 0;
    }
  }
  else {
    lVar2 = 0;
  }
  iVar1 = FUN_003e5a20(param_1,0x34,0x17,param_2);
  if (iVar1 != 0) {
    return 1;
  }
  FUN_003c04c0(lVar2);
  return 0;
}


// ===== 003e6ebc  FUN_003e6ebc =====

long FUN_003e6ebc(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_0038a358();
  if (lVar2 != 0) {
    iVar1 = FUN_0038ebe0(lVar2,param_2,param_3);
    if ((iVar1 == 0) || (iVar1 = FUN_003e5a20(param_1,0x33,4,lVar2), iVar1 == 0)) {
      thunk_FUN_0038eddc(lVar2);
      return 0;
    }
    lVar2 = 1;
  }
  return lVar2;
}


// ===== 003e6f3c  FUN_003e6f3c =====

undefined4
FUN_003e6f3c(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long local_a0;
  undefined4 local_94;
  undefined1 auStack_90 [64];
  
  local_94 = 0;
  *param_3 = 0;
  iVar1 = FUN_00389e18(param_1,0x200);
  if (iVar1 == 0) {
    lVar2 = FUN_0039d270();
    if (lVar2 == 0) {
      FUN_00379868();
      FUN_0037995c("crypto/evp/p_sign.c",0x24,"EVP_SignFinal_ex");
      FUN_00379a5c(6,0x80006,0);
      return 0;
    }
    iVar1 = FUN_0039e0a8(lVar2,param_1);
    if (iVar1 == 0) {
      iVar1 = FUN_0039dac8(param_1,auStack_90,&local_94);
      FUN_0039d284(lVar2);
    }
    else {
      iVar1 = FUN_0039dac8(lVar2,auStack_90,&local_94);
      FUN_0039d284(lVar2);
    }
    if (iVar1 == 0) {
      return 0;
    }
  }
  else {
    iVar1 = FUN_0039dac8(param_1,auStack_90,&local_94);
    if (iVar1 == 0) {
      uVar4 = 0;
      lVar2 = 0;
      goto LAB_003e7068;
    }
  }
  iVar1 = FUN_003a8edc(param_4);
  local_a0 = (long)iVar1;
  lVar2 = FUN_003b1de8(param_5,param_4,param_6);
  if ((lVar2 != 0) && (iVar1 = FUN_003b7c34(lVar2), 0 < iVar1)) {
    uVar3 = FUN_00389d80(param_1);
    iVar1 = FUN_003b2f9c(lVar2,uVar3);
    if ((0 < iVar1) &&
       (iVar1 = FUN_003b8140(lVar2,param_2,&local_a0,auStack_90,local_94), 0 < iVar1)) {
      *param_3 = (int)local_a0;
      uVar4 = 1;
      goto LAB_003e7068;
    }
  }
  uVar4 = 0;
LAB_003e7068:
  FUN_003b1f78(lVar2);
  return uVar4;
}


// ===== 003e70e8  FUN_003e70e8 =====

void FUN_003e70e8(void)

{
  FUN_003e6f3c();
  return;
}


// ===== 003e70f4  FUN_003e70f4 =====

undefined4
FUN_003e70f4(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_94;
  undefined1 auStack_90 [64];
  
  local_94 = 0;
  iVar1 = FUN_00389e18(param_1,0x200);
  if (iVar1 == 0) {
    lVar3 = FUN_0039d270();
    if (lVar3 == 0) {
      FUN_00379868();
      FUN_0037995c("crypto/evp/p_verify.c",0x22,"EVP_VerifyFinal_ex");
      FUN_00379a5c(6,0x80006,0);
      return 0;
    }
    iVar1 = FUN_0039e0a8(lVar3,param_1);
    if (iVar1 == 0) {
      iVar1 = FUN_0039dac8(param_1,auStack_90,&local_94);
      FUN_0039d284(lVar3);
    }
    else {
      iVar1 = FUN_0039dac8(lVar3,auStack_90,&local_94);
      FUN_0039d284(lVar3);
    }
    if (iVar1 == 0) {
      return 0;
    }
  }
  else {
    iVar1 = FUN_0039dac8(param_1,auStack_90,&local_94);
    if (iVar1 == 0) {
      uVar2 = 0;
      lVar3 = 0;
      goto LAB_003e71fc;
    }
  }
  lVar3 = FUN_003b1de8(param_5,param_4,param_6);
  if ((lVar3 != 0) && (iVar1 = FUN_003b8364(lVar3), 0 < iVar1)) {
    uVar4 = FUN_00389d80(param_1);
    iVar1 = FUN_003b2f9c(lVar3,uVar4);
    if (0 < iVar1) {
      uVar2 = FUN_003b837c(lVar3,param_2,param_3,auStack_90,local_94);
      goto LAB_003e71fc;
    }
  }
  uVar2 = 0xffffffff;
LAB_003e71fc:
  FUN_003b1f78(lVar3);
  return uVar2;
}


// ===== 003e727c  FUN_003e727c =====

void FUN_003e727c(void)

{
  FUN_003e70f4();
  return;
}


// ===== 003e7288  FUN_003e7288 =====

ulong FUN_003e7288(long param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = FUN_003dd5b4(*(undefined8 *)(param_1 + 0x18));
  if (param_2 == 2) {
    if (iVar2 == 0x16) {
      if (*(long *)(param_1 + 0x20) == 0) {
        *(undefined4 *)(param_1 + 0x14) = 1;
        return 1;
      }
      bVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x28) + 0x20) == 0;
      *(uint *)(param_1 + 0x14) = (uint)bVar1;
      return (ulong)bVar1;
    }
    FUN_00379868();
    uVar3 = 0x36;
  }
  else {
    if (param_2 != 1) {
      FUN_00379868();
      FUN_0037995c("crypto/pkcs7/pk7_lib.c",0x3c,"PKCS7_ctrl");
      uVar3 = 0x6e;
      goto LAB_003e73b8;
    }
    if (iVar2 == 0x16) {
      *(int *)(param_1 + 0x14) = param_3;
      if (param_3 == 0) {
        return 0;
      }
      iVar2 = FUN_003dd5b4(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 0x28) + 0x18));
      if (iVar2 != 0x15) {
        return (long)param_3;
      }
      thunk_FUN_0038eddc(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 0x28) + 0x20));
      *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 0x28) + 0x20) = 0;
      return (long)param_3;
    }
    FUN_00379868();
    uVar3 = 0x28;
  }
  FUN_0037995c("crypto/pkcs7/pk7_lib.c",uVar3,"PKCS7_ctrl");
  uVar3 = 0x68;
LAB_003e73b8:
  FUN_00379a5c(0x21,uVar3,0);
  return 0;
}


// ===== 003e7400  FUN_003e7400 =====

undefined8 FUN_003e7400(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_003e09bc();
  if (((lVar2 != 0) && (iVar1 = FUN_003e7474(lVar2,param_2), iVar1 != 0)) &&
     (iVar1 = FUN_003e767c(param_1,lVar2), iVar1 != 0)) {
    return 1;
  }
  FUN_003e0a68(lVar2);
  return 0;
}


// ===== 003e7474  FUN_003e7474 =====

undefined8 FUN_003e7474(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  uVar2 = FUN_003dcce8(param_2);
  if (param_2 < 0x18) {
    if (param_2 == 0x15) {
      *(undefined8 *)(param_1 + 0x18) = uVar2;
      lVar4 = FUN_0038a358();
      *(long *)(param_1 + 0x20) = lVar4;
      if (lVar4 == 0) {
        return 0;
      }
      return 1;
    }
    if (param_2 == 0x16) {
      *(undefined8 *)(param_1 + 0x18) = uVar2;
      puVar3 = (undefined8 *)FUN_003e0af0();
      *(undefined8 **)(param_1 + 0x20) = puVar3;
      if (puVar3 == (undefined8 *)0x0) {
        return 0;
      }
      iVar1 = FUN_0038de18(*puVar3,1);
      if (iVar1 != 0) {
        return 1;
      }
      FUN_003e0afc(*(undefined8 *)(param_1 + 0x20));
      *(undefined8 *)(param_1 + 0x20) = 0;
      return 0;
    }
    if (param_2 == 0x17) {
      *(undefined8 *)(param_1 + 0x18) = uVar2;
      puVar3 = (undefined8 *)FUN_003e0ba4();
      *(undefined8 **)(param_1 + 0x20) = puVar3;
      if (puVar3 == (undefined8 *)0x0) {
        return 0;
      }
      iVar1 = FUN_0038de18(*puVar3,0);
      if (iVar1 == 0) {
        return 0;
      }
      uVar2 = FUN_003dcce8(0x15);
      **(undefined8 **)(*(long *)(param_1 + 0x20) + 0x10) = uVar2;
      return 1;
    }
  }
  else {
    if (param_2 == 0x18) {
      *(undefined8 *)(param_1 + 0x18) = uVar2;
      puVar3 = (undefined8 *)FUN_003e0c58();
      *(undefined8 **)(param_1 + 0x20) = puVar3;
      if (puVar3 == (undefined8 *)0x0) {
        return 0;
      }
      iVar1 = FUN_0038de18(*puVar3,1);
      if (iVar1 == 0) {
        return 0;
      }
      uVar2 = FUN_003dcce8(0x15);
      **(undefined8 **)(*(long *)(param_1 + 0x20) + 0x28) = uVar2;
      return 1;
    }
    if (param_2 == 0x19) {
      *(undefined8 *)(param_1 + 0x18) = uVar2;
      puVar3 = (undefined8 *)FUN_003e0cd0();
      *(undefined8 **)(param_1 + 0x20) = puVar3;
      if (puVar3 == (undefined8 *)0x0) {
        return 0;
      }
      iVar1 = FUN_0038de18(*puVar3,0);
      if (iVar1 == 0) {
        return 0;
      }
      return 1;
    }
    if (param_2 == 0x1a) {
      *(undefined8 *)(param_1 + 0x18) = uVar2;
      puVar3 = (undefined8 *)FUN_003e0c94();
      *(undefined8 **)(param_1 + 0x20) = puVar3;
      if (puVar3 == (undefined8 *)0x0) {
        return 0;
      }
      iVar1 = FUN_0038de18(*puVar3,0);
      if (iVar1 == 0) {
        return 0;
      }
      uVar2 = FUN_003dcce8(0x15);
      **(undefined8 **)(*(long *)(param_1 + 0x20) + 8) = uVar2;
      return 1;
    }
  }
  FUN_00379868();
  FUN_0037995c("crypto/pkcs7/pk7_lib.c",0xad,"PKCS7_set_type");
  FUN_00379a5c(0x21,0x70,0);
  return 0;
}


// ===== 003e767c  FUN_003e767c =====

undefined8 FUN_003e767c(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_003dd5b4(*(undefined8 *)(param_1 + 0x18));
  if (iVar1 == 0x19) {
    FUN_003e0a68(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10));
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10) = param_2;
    return 1;
  }
  if (iVar1 == 0x16) {
    FUN_003e0a68(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28));
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28) = param_2;
    return 1;
  }
  FUN_00379868();
  FUN_0037995c("crypto/pkcs7/pk7_lib.c",0x66,"PKCS7_set_content");
  FUN_00379a5c(0x21,0x70,0);
  return 0;
}


// ===== 003e772c  FUN_003e772c =====

undefined8 FUN_003e772c(long param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_003dcce8(param_2);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return 1;
}


// ===== 003e7760  FUN_003e7760 =====

bool FUN_003e7760(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  iVar1 = FUN_003dd5b4(*(undefined8 *)(param_1 + 0x18));
  if ((iVar1 == 0x16) || (iVar1 == 0x18)) {
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
    uVar8 = **(undefined8 **)(param_2 + 0x10);
    iVar1 = FUN_0040caf8(uVar7);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        puVar3 = (undefined8 *)FUN_0040cb0c(uVar7,iVar1);
        iVar2 = FUN_003de61c(uVar8,*puVar3);
        if (iVar2 == 0) goto LAB_003e78d0;
        iVar1 = iVar1 + 1;
        iVar2 = FUN_0040caf8(uVar7);
      } while (iVar1 < iVar2);
    }
    plVar4 = (long *)FUN_003a3a44();
    if (plVar4 != (long *)0x0) {
      lVar5 = FUN_0038a64c();
      plVar4[1] = lVar5;
      if (lVar5 != 0) {
        iVar1 = FUN_003dd5b4(uVar8);
        if (iVar1 == 0) {
          lVar5 = FUN_003de510(uVar8);
          *plVar4 = lVar5;
          *(undefined4 *)plVar4[1] = 5;
        }
        else {
          lVar5 = FUN_003dcce8();
          *plVar4 = lVar5;
          *(undefined4 *)plVar4[1] = 5;
        }
        if ((lVar5 == 0) || (iVar1 = FUN_0040c89c(uVar7,plVar4), iVar1 == 0)) {
          FUN_003a3a50(plVar4);
          return false;
        }
LAB_003e78d0:
        lVar5 = 0;
        if (param_1 != 0) {
          lVar5 = param_1 + 0x28;
        }
        *(long *)(param_2 + 0x40) = lVar5;
        iVar1 = FUN_0040c89c(uVar6,param_2);
        return iVar1 != 0;
      }
    }
    FUN_003a3a50(plVar4);
    FUN_00379868();
    FUN_0037995c("crypto/pkcs7/pk7_lib.c",0xe3,"PKCS7_add_signer");
    uVar6 = 0x8000d;
  }
  else {
    FUN_00379868();
    FUN_0037995c("crypto/pkcs7/pk7_lib.c",0xcf,"PKCS7_add_signer");
    uVar6 = 0x71;
  }
  FUN_00379a5c(0x21,uVar6,0);
  return false;
}


// ===== 003e7928  FUN_003e7928 =====

long FUN_003e7928(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + 0x28;
  }
  return lVar1;
}


// ===== 003e7938  FUN_003e7938 =====

undefined8 FUN_003e7938(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_003dd5b4(*(undefined8 *)(param_1 + 0x18));
  if ((iVar1 != 0x16) && (iVar1 != 0x18)) {
    FUN_00379868();
    FUN_0037995c("crypto/pkcs7/pk7_lib.c",0x109,"PKCS7_add_certificate");
    FUN_00379a5c(0x21,0x71,0);
    return 0;
  }
  uVar2 = FUN_00426ea0(*(long *)(param_1 + 0x20) + 0x10,param_2,1);
  return uVar2;
}


// ===== 003e79bc  FUN_003e79bc =====

undefined8 FUN_003e79bc(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  iVar1 = FUN_003dd5b4(*(undefined8 *)(param_1 + 0x18));
  if ((iVar1 != 0x16) && (iVar1 != 0x18)) {
    FUN_00379868();
    FUN_0037995c("crypto/pkcs7/pk7_lib.c",0x11e,"PKCS7_add_crl");
    FUN_00379a5c(0x21,0x71,0);
    return 0;
  }
  lVar3 = *(long *)(param_1 + 0x20);
  if (*(long *)(lVar3 + 0x18) == 0) {
    lVar2 = FUN_0040bf0c();
    *(long *)(lVar3 + 0x18) = lVar2;
    if (lVar2 == 0) {
      FUN_00379868();
      FUN_0037995c("crypto/pkcs7/pk7_lib.c",0x125,"PKCS7_add_crl");
      FUN_00379a5c(0x21,0x8000f,0);
      return 0;
    }
  }
  FUN_00432ae8(param_2);
  iVar1 = FUN_0040c89c(*(undefined8 *)(lVar3 + 0x18),param_2);
  if (iVar1 != 0) {
    return 1;
  }
  FUN_0043a89c(param_2);
  return 0;
}


// ===== 003e7abc  FUN_003e7abc =====

undefined8 FUN_003e7abc(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined4 local_24;
  
  uVar3 = FUN_0038de18(*param_1,1);
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  uVar6 = param_1[1];
  uVar3 = FUN_00426a88(param_2);
  uVar3 = FUN_0043b57c(uVar6,uVar3);
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  thunk_FUN_0038eddc(*(undefined8 *)(param_1[1] + 8));
  FUN_00426cb0(param_2);
  lVar4 = thunk_FUN_0038ed00();
  *(long *)(param_1[1] + 8) = lVar4;
  if (lVar4 == 0) {
    return 0;
  }
  FUN_003a8c24(param_3);
  uVar6 = param_1[2];
  param_1[7] = param_3;
  FUN_003899b0(param_4);
  uVar3 = FUN_003dcce8();
  uVar3 = FUN_003a3a84(uVar6,uVar3,5,0);
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  iVar1 = FUN_003a8020(param_3,&DAT_001ecbe7);
  if ((iVar1 != 0) || (iVar1 = FUN_003a8020(param_3,&DAT_001e4bf7), iVar1 != 0)) {
    if (((long *)param_1[2] != (long *)0x0) && (*(long *)param_1[2] != 0)) {
      uVar6 = param_1[7];
      uVar3 = param_1[4];
      iVar1 = FUN_003dd5b4();
      if (iVar1 != 0) {
        uVar2 = FUN_003a7c64(uVar6);
        iVar1 = FUN_003de794(&local_24,iVar1,uVar2);
        if (iVar1 != 0) {
          uVar6 = FUN_003dcce8(local_24);
          uVar3 = FUN_003a3a84(uVar3,uVar6,0xffffffff,0);
          return uVar3;
        }
      }
    }
    return 0xffffffff;
  }
  uVar3 = FUN_003a8020(param_3,&DAT_001f9542);
  if ((int)uVar3 != 0) {
    uVar3 = FUN_003e7ce8(param_1[4]);
    return uVar3;
  }
  if ((*(long *)(param_3 + 8) != 0) &&
     (pcVar5 = *(code **)(*(long *)(param_3 + 8) + 0xb0), pcVar5 != (code *)0x0)) {
    iVar1 = (*pcVar5)(param_3,1,0,param_1);
    uVar3 = 1;
    if (0 < iVar1) {
      return 1;
    }
    if (iVar1 != -2) {
      FUN_00379868(1);
      FUN_0037995c("crypto/pkcs7/pk7_lib.c",0x17c,"PKCS7_SIGNER_INFO_set");
      uVar3 = 0x93;
      goto LAB_003e7ca0;
    }
  }
  FUN_00379868(uVar3);
  FUN_0037995c("crypto/pkcs7/pk7_lib.c",0x180,"PKCS7_SIGNER_INFO_set");
  uVar3 = 0x94;
LAB_003e7ca0:
  FUN_00379a5c(0x21,uVar3,0);
  return 0;
}


// ===== 003e7ce8  FUN_003e7ce8 =====

undefined8 FUN_003e7ce8(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_003dcce8(6);
    uVar1 = FUN_003a3a84(param_1,uVar1,5,0);
    return uVar1;
  }
  return 1;
}


// ===== 003e7d28  FUN_003e7d28 =====

long FUN_003e7d28(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined4 local_24;
  
  if (param_4 == 0) {
    iVar1 = FUN_003a8444(param_3,&local_24);
    if (0 < iVar1) {
      FUN_003dce44(local_24);
      param_4 = FUN_003a213c();
      if (param_4 != 0) {
        lVar2 = FUN_003e0b2c();
        goto joined_r0x003e7dd0;
      }
      FUN_00379868();
      FUN_0037995c("crypto/pkcs7/pk7_lib.c",399,"PKCS7_add_signature");
      FUN_00379a5c(0x21,0x97,0);
    }
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_003e0b2c();
joined_r0x003e7dd0:
    if ((lVar2 != 0) && (iVar1 = FUN_003e7abc(lVar2,param_2,param_3,param_4), 0 < iVar1)) {
      iVar1 = FUN_003e7760(param_1,lVar2);
      if (iVar1 != 0) {
        return lVar2;
      }
    }
  }
  FUN_003e0b38(lVar2);
  return 0;
}


// ===== 003e7e2c  FUN_003e7e2c =====

void FUN_003e7e2c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (param_1 == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  iVar3 = FUN_003dd5b4(*(undefined8 *)(param_1 + 0x18));
  if (iVar3 == 0x18) {
    lVar6 = 0x30;
LAB_003e7e90:
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar6);
  }
  else {
    iVar3 = FUN_003dd5b4(*(undefined8 *)(param_1 + 0x18));
    if (iVar3 == 0x17) {
      lVar6 = 8;
      goto LAB_003e7e90;
    }
    uVar8 = 0;
    uVar7 = 0;
    uVar9 = 0;
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_003e7f1c;
  }
  iVar3 = FUN_003dd5b4(*(undefined8 *)(param_1 + 0x18));
  if ((iVar3 == 0x16) || (iVar3 = FUN_003dd5b4(*(undefined8 *)(param_1 + 0x18)), iVar3 == 0x18)) {
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  }
  else {
    uVar7 = 0;
    if (*(long *)(param_1 + 0x20) == 0) {
      uVar9 = 0;
      goto LAB_003e7f1c;
    }
  }
  iVar3 = FUN_003dd5b4(*(undefined8 *)(param_1 + 0x18));
  if ((iVar3 == 0x16) || (iVar3 = FUN_003dd5b4(*(undefined8 *)(param_1 + 0x18)), iVar3 == 0x18)) {
    uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  }
  else {
    uVar9 = 0;
  }
LAB_003e7f1c:
  iVar3 = FUN_0040caf8(uVar9);
  if (0 < iVar3) {
    iVar3 = 0;
    do {
      uVar5 = FUN_0040cb0c(uVar9,iVar3);
      FUN_0043da9c(uVar5,uVar1,uVar2);
      iVar3 = iVar3 + 1;
      iVar4 = FUN_0040caf8(uVar9);
    } while (iVar3 < iVar4);
  }
  iVar3 = FUN_0040caf8(uVar8);
  if (0 < iVar3) {
    iVar3 = 0;
    do {
      lVar6 = FUN_0040cb0c(uVar8,iVar3);
      FUN_0043da9c(*(undefined8 *)(lVar6 + 0x20),uVar1,uVar2);
      iVar3 = iVar3 + 1;
      iVar4 = FUN_0040caf8(uVar8);
    } while (iVar3 < iVar4);
  }
  iVar3 = FUN_0040caf8(uVar7);
  if (0 < iVar3) {
    iVar3 = 0;
    do {
      lVar6 = FUN_0040cb0c(uVar7,iVar3);
      if (lVar6 != 0) {
        *(long *)(lVar6 + 0x40) = param_1 + 0x28;
      }
      iVar3 = iVar3 + 1;
      iVar4 = FUN_0040caf8(uVar7);
    } while (iVar3 < iVar4);
  }
  return;
}


// ===== 003e7ffc  FUN_003e7ffc =====

long * FUN_003e7ffc(long *param_1)

{
  if (param_1 != (long *)0x0) {
    param_1 = (long *)*param_1;
  }
  return param_1;
}


// ===== 003e8008  FUN_003e8008 =====

long FUN_003e8008(long param_1)

{
  if (param_1 != 0) {
    param_1 = *(long *)(param_1 + 8);
  }
  return param_1;
}


// ===== 003e8014  FUN_003e8014 =====

long FUN_003e8014(long param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    if ((*(long *)(param_1 + 0x20) == 0) ||
       ((iVar1 = FUN_003dd5b4(*(undefined8 *)(param_1 + 0x18)), iVar1 != 0x16 &&
        (iVar1 = FUN_003dd5b4(*(undefined8 *)(param_1 + 0x18)), iVar1 != 0x18)))) {
      param_1 = 0;
    }
    else {
      param_1 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
    }
  }
  return param_1;
}


// ===== 003e806c  FUN_003e806c =====

void FUN_003e806c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}


// ===== 003e8074  FUN_003e8074 =====

undefined8 FUN_003e8074(long param_1,long param_2)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_003c86b4(*(long *)(param_1 + 0x30),"crypto/pkcs7/pk7_lib.c",0x1e9);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  if (param_2 != 0) {
    lVar1 = FUN_003ca2f4(param_2,"crypto/pkcs7/pk7_lib.c",0x1ed);
    *(long *)(param_1 + 0x30) = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
  }
  return 1;
}


// ===== 003e80d4  FUN_003e80d4 =====

undefined8 FUN_003e80d4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x28);
  if (*(long *)(param_2 + 0x30) != 0) {
    FUN_003c86b4(*(long *)(param_2 + 0x30),"crypto/pkcs7/pk7_lib.c",0x1e9);
    *(undefined8 *)(param_2 + 0x30) = 0;
  }
  if (lVar1 != 0) {
    lVar1 = FUN_003ca2f4(lVar1,"crypto/pkcs7/pk7_lib.c",0x1ed);
    *(long *)(param_2 + 0x30) = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
  }
  FUN_003e7e2c(param_2);
  return 1;
}


// ===== 003e8144  FUN_003e8144 =====

undefined8 FUN_003e8144(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_003dd5b4(*(undefined8 *)(param_1 + 0x18));
  if (iVar1 != 0x19) {
    FUN_00379868();
    FUN_0037995c("crypto/pkcs7/pk7_lib.c",0x213,"PKCS7_set_digest");
    FUN_00379a5c(0x21,0x71,0);
    return 1;
  }
  lVar2 = FUN_0038a64c();
  *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 8) = lVar2;
  if (lVar2 != 0) {
    **(undefined4 **)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 8) = 5;
    FUN_003899b0(param_2);
    uVar3 = FUN_003dcce8();
    **(undefined8 **)(*(long *)(param_1 + 0x20) + 8) = uVar3;
    return 1;
  }
  FUN_00379868();
  FUN_0037995c("crypto/pkcs7/pk7_lib.c",0x20b,"PKCS7_set_digest");
  FUN_00379a5c(0x21,0x8000d,0);
  return 0;
}


// ===== 003e8234  FUN_003e8234 =====

void FUN_003e8234(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x38);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(param_1 + 0x10);
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = *(undefined8 *)(param_1 + 0x20);
  }
  return;
}


// ===== 003e825c  FUN_003e825c =====

void FUN_003e825c(long param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x10);
  }
  return;
}


// ===== 003e826c  FUN_003e826c =====

long FUN_003e826c(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_003e0be0();
  if ((lVar2 != 0) && (iVar1 = FUN_003e8358(lVar2,param_2), 0 < iVar1)) {
    iVar1 = FUN_003dd5b4(*(undefined8 *)(param_1 + 0x18));
    if (iVar1 == 0x18) {
      iVar1 = FUN_0040c89c(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30),lVar2);
    }
    else {
      if (iVar1 != 0x17) {
        FUN_00379868();
        FUN_0037995c("crypto/pkcs7/pk7_lib.c",0x253,"PKCS7_add_recipient_info");
        FUN_00379a5c(0x21,0x71,0);
        goto LAB_003e8338;
      }
      iVar1 = FUN_0040c89c(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),lVar2);
    }
    if (iVar1 != 0) {
      *(long *)(lVar2 + 0x28) = param_1 + 0x28;
      return lVar2;
    }
  }
LAB_003e8338:
  FUN_003e0bec(lVar2);
  return 0;
}


