// ===== 003fb564  FUN_003fb564 =====

undefined8
FUN_003fb564(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_1 != 0) && (*(int **)(param_1 + 0x78) != (int *)0x0)) {
    iVar1 = **(int **)(param_1 + 0x78);
    if ((iVar1 != 0x390) && (iVar1 != 6)) {
      return 0xffffffff;
    }
  }
  uVar2 = FUN_003b2e6c(param_1,0xffffffff,param_2,param_3,param_4,param_5);
  return uVar2;
}


// ===== 003fb5a4  FUN_003fb5a4 =====

undefined8 FUN_003fb5a4(long param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  
  if (param_2 == 0) {
    return 0;
  }
  if (param_3 == 0) {
    return 0;
  }
  if (param_4 == 0) {
    return 0;
  }
  iVar1 = FUN_0040caf8(param_2);
  if (1 < iVar1) {
    lVar3 = FUN_0040cb0c(param_2,0);
    lVar4 = FUN_0040cb0c(param_2,1);
    if (lVar3 == 0 && *(long *)(param_1 + 0x40) == 0) {
      return 0;
    }
    if (lVar4 != 0 || *(long *)(param_1 + 0x48) != 0) {
      if (lVar3 != 0) {
        FUN_0038f458(*(long *)(param_1 + 0x40));
        *(long *)(param_1 + 0x40) = lVar3;
        FUN_00390944(lVar3,4);
      }
      if (lVar4 != 0) {
        FUN_0038f458(*(undefined8 *)(param_1 + 0x48));
        *(long *)(param_1 + 0x48) = lVar4;
        FUN_00390944(lVar4,4);
      }
      *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
      iVar2 = FUN_0040caf8(param_3);
      if ((iVar1 == iVar2) && (iVar2 = FUN_0040caf8(param_4), iVar1 == iVar2 + 1)) {
        uVar5 = FUN_0040cb0c(param_3,0);
        uVar6 = FUN_0040cb0c(param_3,1);
        uVar7 = FUN_0040cb0c(param_4,0);
        uVar5 = FUN_003fb010(param_1,uVar5,uVar6,uVar7);
        if ((int)uVar5 == 0) {
          return uVar5;
        }
      }
      lVar3 = *(long *)(param_1 + 0x88);
      if (iVar1 != 2) {
        lVar4 = FUN_0040bf38(0,iVar1);
        if (lVar4 == 0) {
          return 0;
        }
        iVar2 = 2;
        do {
          lVar8 = FUN_0040cb0c(param_2,iVar2);
          lVar9 = FUN_0040cb0c(param_3,iVar2);
          lVar10 = FUN_0040cb0c(param_4,iVar2 + -1);
          if ((((lVar8 == 0) || (lVar9 == 0)) || (lVar10 == 0)) ||
             (plVar11 = (long *)FUN_003c8474(0x28,"crypto/rsa/rsa_lib.c",0x31e),
             plVar11 == (long *)0x0)) goto LAB_003fb838;
          *plVar11 = lVar8;
          plVar11[1] = lVar9;
          plVar11[2] = lVar10;
          FUN_00390944(lVar8,4);
          FUN_00390944(plVar11[1],4);
          FUN_00390944(plVar11[2],4);
          FUN_0040c89c(lVar4,plVar11);
          iVar2 = iVar2 + 1;
        } while (iVar2 != iVar1);
        *(long *)(param_1 + 0x88) = lVar4;
        iVar2 = FUN_003fc654(param_1);
        if (iVar2 == 0) {
          *(long *)(param_1 + 0x88) = lVar3;
LAB_003fb838:
          FUN_0040ca6c(lVar4,PTR_FUN_007a1c10);
          return 0;
        }
      }
      if (lVar3 != 0) {
        FUN_0040ca6c(lVar3,PTR_FUN_007a1c08);
      }
      *(uint *)(param_1 + 0x10) = (uint)(iVar1 != 2);
      *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
      return 1;
    }
  }
  return 0;
}


// ===== 003fb84c  FUN_003fb84c =====

long FUN_003fb84c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_0040c89c(param_2);
      FUN_0040c89c(param_2,*(undefined8 *)(param_1 + 0x48));
      FUN_0040c89c(param_3,*(undefined8 *)(param_1 + 0x50));
      FUN_0040c89c(param_3,*(undefined8 *)(param_1 + 0x58));
      FUN_0040c89c(param_4,*(undefined8 *)(param_1 + 0x60));
      iVar1 = FUN_0040caf8(*(undefined8 *)(param_1 + 0x88));
      if (0 < iVar1) {
        iVar3 = 0;
        do {
          puVar2 = (undefined8 *)FUN_0040cb0c(*(undefined8 *)(param_1 + 0x88),iVar3);
          FUN_0040c89c(param_2,*puVar2);
          FUN_0040c89c(param_3,puVar2[1]);
          FUN_0040c89c(param_4,puVar2[2]);
          iVar3 = iVar3 + 1;
        } while (iVar1 != iVar3);
      }
    }
    param_1 = 1;
  }
  return param_1;
}


// ===== 003fb92c  FUN_003fb92c =====

undefined8 FUN_003fb92c(long param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_1 != 0) && (*(int **)(param_1 + 0x78) != (int *)0x0)) {
    iVar1 = **(int **)(param_1 + 0x78);
    if ((iVar1 != 0x390) && (iVar1 != 6)) {
      return 0xffffffff;
    }
  }
  uVar2 = FUN_003b2e6c(param_1,0xffffffff,0xffffffff,0x1001,param_2,0);
  return uVar2;
}


// ===== 003fb96c  FUN_003fb96c =====

undefined8 FUN_003fb96c(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_1 != 0) && (*(int **)(param_1 + 0x78) != (int *)0x0)) {
    iVar1 = **(int **)(param_1 + 0x78);
    if ((iVar1 != 0x390) && (iVar1 != 6)) {
      return 0xffffffff;
    }
  }
  uVar2 = FUN_003b2e6c(param_1,0xffffffff,0xffffffff,0x1006,0,param_2);
  return uVar2;
}


// ===== 003fb9ac  FUN_003fb9ac =====

void FUN_003fb9ac(undefined8 param_1,undefined8 param_2)

{
  FUN_003b2e6c(param_1,0x390,4,1,0,param_2);
  return;
}


// ===== 003fb9c4  FUN_003fb9c4 =====

void FUN_003fb9c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_003fb9e8(param_1,0x390,4,"digest",param_2,"properties",param_3);
  return;
}


// ===== 003fb9e8  FUN_003fb9e8 =====

undefined8
FUN_003fb9e8(uint *param_1,int param_2,uint param_3,undefined8 param_4,long param_5,
            undefined8 param_6,long param_7)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68 [5];
  
  if (((param_1 == (uint *)0x0) || (param_5 == 0)) || ((*param_1 & param_3) == 0)) {
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_lib.c",0x37e,"int_set_rsa_md_name");
    FUN_00379a5c(6,0x93,0);
    return 0xfffffffe;
  }
  if (param_2 == -1) {
    iVar1 = FUN_003b25b8(param_1,&DAT_001f9542);
    if (iVar1 != 0) goto LAB_003fbad4;
    iVar1 = FUN_003b25b8(param_1,"RSA-PSS");
  }
  else {
    uVar2 = FUN_003a7efc(param_2);
    iVar1 = FUN_003b25b8(param_1,uVar2);
  }
  if (iVar1 == 0) {
    return 0xffffffff;
  }
LAB_003fbad4:
  puVar3 = &local_90;
  FUN_003cd8cc(auStack_b8,param_4,param_5,0);
  if ((param_7 != 0) && (*(long *)(param_1 + 8) != 0)) {
    puVar3 = local_68;
    FUN_003cd8cc(&local_e0,param_6,param_7,0);
    local_70 = local_c0;
    uStack_88 = uStack_d8;
    local_90 = local_e0;
    uStack_78 = uStack_c8;
    uStack_80 = uStack_d0;
  }
  FUN_003cdfcc(&local_e0);
  puVar3[1] = uStack_d8;
  *puVar3 = local_e0;
  puVar3[3] = uStack_c8;
  puVar3[2] = uStack_d0;
  puVar3[4] = local_c0;
  uVar2 = FUN_003b2bd8(param_1,auStack_b8);
  return uVar2;
}


// ===== 003fbb68  FUN_003fbb68 =====

undefined8 FUN_003fbb68(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_003b25b8(param_1,&DAT_001f9542);
  if (iVar1 != 0) {
    uVar2 = FUN_003b2e6c(param_1,6,0x600,0x1009,0,param_2);
    return uVar2;
  }
  return 0xffffffff;
}


// ===== 003fbbc0  FUN_003fbbc0 =====

void FUN_003fbbc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_003fb9e8(param_1,6,0x600,"digest",param_2,"digest-props",param_3);
  return;
}


// ===== 003fbbe4  FUN_003fbbe4 =====

void FUN_003fbbe4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_003fbc00(param_1,6,0x600,"digest",param_2,param_3);
  return;
}


// ===== 003fbc00  FUN_003fbc00 =====

undefined8
FUN_003fbc00(uint *param_1,int param_2,uint param_3,undefined8 param_4,long param_5,
            undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 auStack_80 [40];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (((param_1 == (uint *)0x0) || (param_5 == 0)) || ((*param_1 & param_3) == 0)) {
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_lib.c",0x3a6,"int_get_rsa_md_name");
    FUN_00379a5c(6,0x93,0);
    return 0xfffffffe;
  }
  if (param_2 == -1) {
    iVar1 = FUN_003b25b8(param_1,&DAT_001f9542);
    if (iVar1 != 0) goto LAB_003fbcdc;
    iVar1 = FUN_003b25b8(param_1,"RSA-PSS");
  }
  else {
    uVar2 = FUN_003a7efc(param_2);
    iVar1 = FUN_003b25b8(param_1,uVar2);
  }
  if (iVar1 == 0) {
    return 0xffffffff;
  }
LAB_003fbcdc:
  FUN_003cd8cc(auStack_80,param_4,param_5,param_6);
  FUN_003cdfcc(&local_a8);
  uStack_50 = uStack_a0;
  local_58 = local_a8;
  uStack_40 = uStack_90;
  local_48 = local_98;
  local_38 = local_88;
  uVar2 = FUN_003b2c5c(param_1,auStack_80);
  return uVar2;
}


// ===== 003fbd30  FUN_003fbd30 =====

undefined8 FUN_003fbd30(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_003b25b8(param_1,&DAT_001f9542);
  if (iVar1 != 0) {
    uVar2 = FUN_003b2e6c(param_1,6,0x600,0x100b,0,param_2);
    return uVar2;
  }
  return 0xffffffff;
}


// ===== 003fbd88  FUN_003fbd88 =====

undefined8 FUN_003fbd88(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_1 != 0) && (*(int **)(param_1 + 0x78) != (int *)0x0)) {
    iVar1 = **(int **)(param_1 + 0x78);
    if ((iVar1 != 0x390) && (iVar1 != 6)) {
      return 0xffffffff;
    }
  }
  uVar2 = FUN_003b2e6c(param_1,0xffffffff,0x7f0,0x1005,0,param_2);
  return uVar2;
}


// ===== 003fbdc8  FUN_003fbdc8 =====

void FUN_003fbdc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_003fb9e8(param_1,0xffffffff,0x7f0,"mgf1-digest",param_2,"mgf1-properties",param_3);
  return;
}


// ===== 003fbdec  FUN_003fbdec =====

void FUN_003fbdec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_003fbc00(param_1,0xffffffff,0x7f0,"mgf1-digest",param_2,param_3);
  return;
}


// ===== 003fbe08  FUN_003fbe08 =====

void FUN_003fbe08(undefined8 param_1,undefined8 param_2)

{
  FUN_003b2e6c(param_1,0x390,4,0x1005,0,param_2);
  return;
}


// ===== 003fbe20  FUN_003fbe20 =====

void FUN_003fbe20(undefined8 param_1,undefined8 param_2)

{
  FUN_003fb9e8(param_1,0x390,4,"mgf1-digest",param_2,0,0);
  return;
}


// ===== 003fbe40  FUN_003fbe40 =====

undefined8 FUN_003fbe40(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_1 != 0) && (*(int **)(param_1 + 0x78) != (int *)0x0)) {
    iVar1 = **(int **)(param_1 + 0x78);
    if ((iVar1 != 0x390) && (iVar1 != 6)) {
      return 0xffffffff;
    }
  }
  uVar2 = FUN_003b2e6c(param_1,0xffffffff,0x7f0,0x1008,0,param_2);
  return uVar2;
}


// ===== 003fbe80  FUN_003fbe80 =====

undefined8 FUN_003fbe80(int *param_1,undefined1 *param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 auStack_80 [40];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if ((param_1 != (int *)0x0) && ((*param_1 == 0x200 || (*param_1 == 0x400)))) {
    iVar2 = FUN_003b25b8(param_1,&DAT_001f9542);
    if (iVar2 != 0) {
      puVar1 = &DAT_001c717f;
      if (param_3 != 0 || param_2 != (undefined1 *)0x0) {
        puVar1 = param_2;
      }
      FUN_003cd924(auStack_80,"oaep-label",puVar1,(long)param_3);
      FUN_003cdfcc(&local_a8);
      uStack_50 = uStack_a0;
      local_58 = local_a8;
      uStack_40 = uStack_90;
      local_48 = local_98;
      local_38 = local_88;
      uVar3 = FUN_003b2bd8(param_1,auStack_80);
      if (0 < (int)uVar3) {
        FUN_003c86b4(param_2,"crypto/rsa/rsa_lib.c",0x46d);
        uVar3 = 1;
      }
      return uVar3;
    }
    return 0xffffffff;
  }
  FUN_00379868();
  FUN_0037995c("crypto/rsa/rsa_lib.c",0x456,"EVP_PKEY_CTX_set0_rsa_oaep_label");
  FUN_00379a5c(6,0x93,0);
  return 0xfffffffe;
}


// ===== 003fbfac  FUN_003fbfac =====

undefined4 FUN_003fbfac(int *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 auStack_70 [32];
  ulong local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  if (param_1 != (int *)0x0) {
    if ((*param_1 == 0x200) || (*param_1 == 0x400)) {
      iVar1 = FUN_003b25b8(param_1,&DAT_001f9542);
      if (iVar1 != 0) {
        FUN_003cdc58(auStack_70,"oaep-label",param_2,0);
        FUN_003cdfcc(&local_98);
        uStack_40 = uStack_90;
        local_48 = local_98;
        uStack_30 = uStack_80;
        local_38 = local_88;
        local_28 = local_78;
        iVar1 = FUN_003b2794(param_1,auStack_70);
        if (iVar1 != 0) {
          uVar2 = (undefined4)local_50;
          if (local_50 >> 0x1f != 0) {
            uVar2 = 0xffffffff;
          }
          return uVar2;
        }
      }
      return 0xffffffff;
    }
  }
  FUN_00379868();
  FUN_0037995c("crypto/rsa/rsa_lib.c",0x477,"EVP_PKEY_CTX_get0_rsa_oaep_label");
  FUN_00379a5c(6,0x93,0);
  return 0xfffffffe;
}


// ===== 003fc0a8  FUN_003fc0a8 =====

undefined8 FUN_003fc0a8(long param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_1 != 0) && (*(int **)(param_1 + 0x78) != (int *)0x0)) {
    iVar1 = **(int **)(param_1 + 0x78);
    if ((iVar1 != 0x390) && (iVar1 != 6)) {
      return 0xffffffff;
    }
  }
  uVar2 = FUN_003b2e6c(param_1,0xffffffff,0x1f0,0x1002,param_2,0);
  return uVar2;
}


// ===== 003fc0e8  FUN_003fc0e8 =====

undefined8 FUN_003fc0e8(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_1 != 0) && (*(int **)(param_1 + 0x78) != (int *)0x0)) {
    iVar1 = **(int **)(param_1 + 0x78);
    if ((iVar1 != 0x390) && (iVar1 != 6)) {
      return 0xffffffff;
    }
  }
  uVar2 = FUN_003b2e6c(param_1,0xffffffff,0x1f0,0x1007,0,param_2);
  return uVar2;
}


// ===== 003fc128  FUN_003fc128 =====

undefined8 FUN_003fc128(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 auStack_70 [40];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 local_4;
  
  local_4 = param_2;
  if (param_1 != (int *)0x0) {
    if ((*param_1 == 2) || (*param_1 == 4)) {
      iVar1 = FUN_003b25b8(param_1,"RSA-PSS");
      if (iVar1 != 0) {
        FUN_003cb668(auStack_70,"saltlen",&local_4);
        FUN_003cdfcc(&local_98);
        uStack_40 = uStack_90;
        local_48 = local_98;
        uStack_30 = uStack_80;
        local_38 = local_88;
        local_28 = local_78;
        uVar2 = FUN_003b2bd8(param_1,auStack_70);
        return uVar2;
      }
      return 0xffffffff;
    }
  }
  FUN_00379868();
  FUN_0037995c("crypto/rsa/rsa_lib.c",0x4ba,"EVP_PKEY_CTX_set_rsa_pss_keygen_saltlen");
  FUN_00379a5c(6,0x93,0);
  return 0xfffffffe;
}


// ===== 003fc20c  FUN_003fc20c =====

undefined8 FUN_003fc20c(int *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 auStack_70 [40];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  long local_8;
  
  local_8 = (long)param_2;
  if (param_1 != (int *)0x0) {
    if ((*param_1 == 2) || (*param_1 == 4)) {
      iVar1 = FUN_003b25b8(param_1,&DAT_001f9542);
      if ((iVar1 == 0) && (iVar1 = FUN_003b25b8(param_1,"RSA-PSS"), iVar1 == 0)) {
        return 0xffffffff;
      }
      FUN_003ccbb0(auStack_70,&DAT_001c97b2,&local_8);
      FUN_003cdfcc(&local_98);
      uStack_40 = uStack_90;
      local_48 = local_98;
      uStack_30 = uStack_80;
      local_38 = local_88;
      local_28 = local_78;
      uVar2 = FUN_003b2bd8(param_1,auStack_70);
      return uVar2;
    }
  }
  FUN_00379868();
  FUN_0037995c("crypto/rsa/rsa_lib.c",0x4cf,"EVP_PKEY_CTX_set_rsa_keygen_bits");
  FUN_00379a5c(6,0x93,0);
  return 0xfffffffe;
}


// ===== 003fc30c  FUN_003fc30c =====

ulong FUN_003fc30c(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  
  if ((param_1 != 0) && (*(int **)(param_1 + 0x78) != (int *)0x0)) {
    iVar1 = **(int **)(param_1 + 0x78);
    if ((iVar1 != 0x390) && (iVar1 != 6)) {
      return 0xffffffff;
    }
  }
  uVar2 = FUN_003b2e6c(param_1,0xffffffff,4,0x1004,0,param_2);
  if ((0 < (int)uVar2) && (*(long *)(param_1 + 0x20) != 0)) {
    uVar2 = uVar2 & 0xffffffff;
    FUN_0038f4f4(*(undefined8 *)(param_1 + 0xa8));
    *(undefined8 *)(param_1 + 0xa8) = param_2;
  }
  return uVar2;
}


// ===== 003fc3ac  FUN_003fc3ac =====

ulong FUN_003fc3ac(long param_1,ulong param_2)

{
  ulong uVar1;
  
  if ((*(long *)(param_1 + 0x20) != 0) ||
     (uVar1 = FUN_0038f720(param_2), param_2 = uVar1, uVar1 != 0)) {
    uVar1 = FUN_003b2e6c(param_1,6,4,0x1004,0,param_2);
    if ((*(long *)(param_1 + 0x20) == 0) && ((int)uVar1 < 1)) {
      uVar1 = uVar1 & 0xffffffff;
      FUN_0038f4f4(param_2);
    }
  }
  return uVar1;
}


// ===== 003fc420  FUN_003fc420 =====

undefined8 FUN_003fc420(int *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 auStack_70 [40];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  long local_8;
  
  local_8 = (long)param_2;
  if (param_1 != (int *)0x0) {
    if ((*param_1 == 2) || (*param_1 == 4)) {
      iVar1 = FUN_003b25b8(param_1,&DAT_001f9542);
      if ((iVar1 == 0) && (iVar1 = FUN_003b25b8(param_1,"RSA-PSS"), iVar1 == 0)) {
        return 0xffffffff;
      }
      FUN_003ccbb0(auStack_70,"primes",&local_8);
      FUN_003cdfcc(&local_98);
      uStack_40 = uStack_90;
      local_48 = local_98;
      uStack_30 = uStack_80;
      local_38 = local_88;
      local_28 = local_78;
      uVar2 = FUN_003b2bd8(param_1,auStack_70);
      return uVar2;
    }
  }
  FUN_00379868();
  FUN_0037995c("crypto/rsa/rsa_lib.c",0x50b,"EVP_PKEY_CTX_set_rsa_keygen_primes");
  FUN_00379a5c(6,0x93,0);
  return 0xfffffffe;
}


// ===== 003fc520  FUN_003fc520 =====

void FUN_003fc520(long param_1)

{
  FUN_0038f458(*(undefined8 *)(param_1 + 0x18));
  FUN_003c86b4(param_1,"crypto/rsa/rsa_mp.c",0x13);
  return;
}


// ===== 003fc554  FUN_003fc554 =====

void FUN_003fc554(undefined8 *param_1)

{
  FUN_0038f458(*param_1);
  FUN_0038f458(param_1[1]);
  FUN_0038f458(param_1[2]);
  FUN_0038f458(param_1[3]);
  FUN_003c86b4(param_1,"crypto/rsa/rsa_mp.c",0x13);
  return;
}


// ===== 003fc5a0  FUN_003fc5a0 =====

long * FUN_003fc5a0(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  plVar1 = (long *)FUN_003c8474(0x28,"crypto/rsa/rsa_mp.c",0x24);
  if (plVar1 == (long *)0x0) {
    return (long *)0x0;
  }
  lVar2 = FUN_0038f5b4();
  *plVar1 = lVar2;
  if (lVar2 != 0) {
    lVar3 = FUN_0038f5b4();
    plVar1[1] = lVar3;
    if (lVar3 != 0) {
      lVar3 = FUN_0038f5b4();
      plVar1[2] = lVar3;
      if (lVar3 != 0) {
        lVar3 = FUN_0038f5b4();
        plVar1[3] = lVar3;
        if (lVar3 != 0) {
          return plVar1;
        }
      }
    }
  }
  FUN_0038f4f4(lVar2);
  FUN_0038f4f4(plVar1[1]);
  FUN_0038f4f4(plVar1[2]);
  FUN_0038f4f4(plVar1[3]);
  FUN_003c86b4(plVar1,"crypto/rsa/rsa_mp.c",0x36);
  return (long *)0x0;
}


// ===== 003fc654  FUN_003fc654 =====

undefined4 FUN_003fc654(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  
  iVar1 = FUN_0040caf8(*(undefined8 *)(param_1 + 0x88));
  if (iVar1 < 1) {
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_0039148c();
    if (lVar3 != 0) {
      iVar7 = 0;
      puVar4 = (undefined8 *)(param_1 + 0x48);
      plVar10 = (long *)(param_1 + 0x40);
      do {
        lVar8 = *plVar10;
        uVar9 = *puVar4;
        puVar4 = (undefined8 *)FUN_0040cb0c(*(undefined8 *)(param_1 + 0x88),iVar7);
        plVar10 = puVar4 + 3;
        lVar5 = *plVar10;
        if (lVar5 == 0) {
          lVar5 = FUN_0038f5b4();
          *plVar10 = lVar5;
          if (lVar5 == 0) goto LAB_003fc6f8;
        }
        iVar2 = FUN_00392a80(lVar5,lVar8,uVar9,lVar3);
        if (iVar2 == 0) goto LAB_003fc6f8;
        iVar7 = iVar7 + 1;
      } while (iVar1 != iVar7);
      uVar6 = 1;
      goto LAB_003fc6fc;
    }
  }
LAB_003fc6f8:
  uVar6 = 0;
LAB_003fc6fc:
  FUN_00391550(lVar3);
  return uVar6;
}


// ===== 003fc720  FUN_003fc720 =====

undefined4 FUN_003fc720(uint param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 4;
  if (0x1fff < param_1) {
    uVar2 = 5;
  }
  uVar1 = 3;
  if (0xfff < param_1) {
    uVar1 = uVar2;
  }
  uVar2 = 2;
  if (0x3ff < (int)param_1) {
    uVar2 = uVar1;
  }
  return uVar2;
}


// ===== 003fc748  FUN_003fc748 =====

void FUN_003fc748(undefined *param_1)

{
  PTR_PTR_s_OpenSSL_PKCS_1_RSA_007a8bd8 = param_1;
  return;
}


// ===== 003fc754  FUN_003fc754 =====

undefined * FUN_003fc754(void)

{
  return PTR_PTR_s_OpenSSL_PKCS_1_RSA_007a8bd8;
}


// ===== 003fc760  FUN_003fc760 =====

undefined ** FUN_003fc760(void)

{
  return &PTR_s_OpenSSL_PKCS_1_RSA_007a8be0;
}


// ===== 003fc76c  FUN_003fc76c =====

undefined8 FUN_003fc76c(void)

{
  return 0;
}


// ===== 003fc774  FUN_003fc774 =====

undefined4
FUN_003fc774(undefined4 param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  iVar2 = FUN_0038f2c0(*(undefined8 *)(param_4 + 0x28));
  if (iVar2 < 0x4001) {
    iVar2 = FUN_003901ac(*(undefined8 *)(param_4 + 0x28),*(undefined8 *)(param_4 + 0x30));
    if (iVar2 < 1) {
      FUN_00379868();
      uVar9 = 0x71;
    }
    else {
      iVar2 = FUN_0038f2c0(*(undefined8 *)(param_4 + 0x28));
      if ((iVar2 < 0xc01) || (iVar2 = FUN_0038f2c0(*(undefined8 *)(param_4 + 0x30)), iVar2 < 0x41))
      {
        lVar5 = FUN_00391448(*(undefined8 *)(param_4 + 8));
        if (lVar5 == 0) {
          iVar2 = 0;
          lVar7 = 0;
        }
        else {
          FUN_003916e0(lVar5);
          uVar9 = FUN_00391898(lVar5);
          lVar6 = FUN_00391898(lVar5);
          iVar2 = FUN_0038f2c0(*(undefined8 *)(param_4 + 0x28));
          uVar1 = iVar2 + 0xe;
          if ((int)(iVar2 + 7U) < 0 == SCARRY4(iVar2,7)) {
            uVar1 = iVar2 + 7U;
          }
          iVar2 = (int)uVar1 >> 3;
          lVar7 = FUN_003c83a4((long)((ulong)uVar1 << 0x20) >> 0x23,"crypto/rsa/rsa_ossl.c",0x83);
          uVar4 = 0xffffffff;
          if ((lVar6 == 0) || (lVar7 == 0)) goto LAB_003fc914;
          if (param_5 == 4) {
            iVar3 = FUN_003fe6f4(*(undefined8 *)(param_4 + 8),lVar7,iVar2,param_2,param_1,0,0,0,0);
          }
          else if (param_5 == 3) {
            iVar3 = FUN_003fe574(lVar7,iVar2,param_2,param_1);
          }
          else {
            if (param_5 != 1) {
              FUN_00379868();
              FUN_0037995c("crypto/rsa/rsa_ossl.c",0x95,"rsa_ossl_public_encrypt");
              FUN_00379a5c(4,0x76,0);
              goto LAB_003fc914;
            }
            iVar3 = FUN_00400c1c(*(undefined8 *)(param_4 + 8),lVar7,iVar2,param_2,param_1);
          }
          if ((0 < iVar3) && (lVar8 = FUN_0038fa44(lVar7,iVar2,uVar9), lVar8 != 0)) {
            iVar3 = FUN_003901ac(uVar9,*(undefined8 *)(param_4 + 0x28));
            if (iVar3 < 0) {
              if ((((*(byte *)(param_4 + 0xa4) >> 1 & 1) == 0) ||
                  (lVar8 = FUN_003912d4(param_4 + 0xa8,*(undefined8 *)(param_4 + 0xd0),
                                        *(undefined8 *)(param_4 + 0x28),lVar5), lVar8 != 0)) &&
                 (iVar3 = (**(code **)(*(long *)(param_4 + 0x18) + 0x30))
                                    (lVar6,uVar9,*(undefined8 *)(param_4 + 0x30),
                                     *(undefined8 *)(param_4 + 0x28),lVar5,
                                     *(undefined8 *)(param_4 + 0xa8)), iVar3 != 0)) {
                uVar4 = FUN_0038fe10(lVar6,param_3,iVar2);
                goto LAB_003fc914;
              }
            }
            else {
              FUN_00379868();
              FUN_0037995c("crypto/rsa/rsa_ossl.c",0xa0,"rsa_ossl_public_encrypt");
              FUN_00379a5c(4,0x84,0);
            }
          }
        }
        uVar4 = 0xffffffff;
LAB_003fc914:
        FUN_0039180c(lVar5);
        FUN_00391550(lVar5);
        FUN_003c893c(lVar7,(long)iVar2,"crypto/rsa/rsa_ossl.c",0xb5);
        return uVar4;
      }
      FUN_00379868();
      uVar9 = 0x78;
    }
    FUN_0037995c("crypto/rsa/rsa_ossl.c",uVar9,"rsa_ossl_public_encrypt");
    uVar9 = 0x65;
  }
  else {
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_ossl.c",0x6c,"rsa_ossl_public_encrypt");
    uVar9 = 0x69;
  }
  FUN_00379a5c(4,uVar9,0);
  return 0xffffffff;
}


// ===== 003fca8c  FUN_003fca8c =====

ulong FUN_003fca8c(int param_1,undefined8 param_2,void *param_3,long param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  void *__src;
  long lVar6;
  ulong *puVar7;
  undefined8 uVar8;
  ulong __n;
  
  iVar1 = FUN_0038f2c0(*(undefined8 *)(param_4 + 0x28));
  if (0x4000 < iVar1) {
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_ossl.c",0x29a,"rsa_ossl_public_decrypt");
    uVar8 = 0x69;
    goto LAB_003fcc00;
  }
  iVar1 = FUN_003901ac(*(undefined8 *)(param_4 + 0x28),*(undefined8 *)(param_4 + 0x30));
  if (iVar1 < 1) {
    FUN_00379868();
    uVar8 = 0x29f;
  }
  else {
    iVar1 = FUN_0038f2c0(*(undefined8 *)(param_4 + 0x28));
    if ((iVar1 < 0xc01) || (iVar1 = FUN_0038f2c0(*(undefined8 *)(param_4 + 0x30)), iVar1 < 0x41)) {
      lVar4 = FUN_00391448(*(undefined8 *)(param_4 + 8));
      if (lVar4 == 0) {
LAB_003fcc40:
        iVar1 = 0;
        __src = (void *)0x0;
      }
      else {
        FUN_003916e0(lVar4);
        uVar8 = FUN_00391898(lVar4);
        lVar5 = FUN_00391898(lVar4);
        if (lVar5 == 0) {
          FUN_00379868();
          FUN_0037995c("crypto/rsa/rsa_ossl.c",0x2b1,"rsa_ossl_public_decrypt");
          FUN_00379a5c(4,0x80003,0);
          goto LAB_003fcc40;
        }
        iVar1 = FUN_0038f2c0(*(undefined8 *)(param_4 + 0x28));
        uVar3 = iVar1 + 0xe;
        if ((int)(iVar1 + 7U) < 0 == SCARRY4(iVar1,7)) {
          uVar3 = iVar1 + 7U;
        }
        iVar1 = (int)uVar3 >> 3;
        __src = (void *)FUN_003c83a4((long)((ulong)uVar3 << 0x20) >> 0x23,"crypto/rsa/rsa_ossl.c",
                                     0x2b5);
        if (__src != (void *)0x0) {
          if (iVar1 < param_1) {
            FUN_00379868();
            FUN_0037995c("crypto/rsa/rsa_ossl.c",0x2be,"rsa_ossl_public_decrypt");
            uVar8 = 0x6c;
LAB_003fcc94:
            FUN_00379a5c(4,uVar8,0);
          }
          else {
            lVar6 = FUN_0038fa44(param_2,param_1,uVar8);
            if (lVar6 != 0) {
              iVar2 = FUN_003901ac(uVar8,*(undefined8 *)(param_4 + 0x28));
              if (-1 < iVar2) {
                FUN_00379868();
                FUN_0037995c("crypto/rsa/rsa_ossl.c",0x2c6,"rsa_ossl_public_decrypt");
                uVar8 = 0x84;
                goto LAB_003fcc94;
              }
              if ((((((*(byte *)(param_4 + 0xa4) >> 1 & 1) == 0) ||
                    (lVar6 = FUN_003912d4(param_4 + 0xa8,*(undefined8 *)(param_4 + 0xd0),
                                          *(undefined8 *)(param_4 + 0x28),lVar4), lVar6 != 0)) &&
                   (iVar2 = (**(code **)(*(long *)(param_4 + 0x18) + 0x30))
                                      (lVar5,uVar8,*(undefined8 *)(param_4 + 0x30),
                                       *(undefined8 *)(param_4 + 0x28),lVar4,
                                       *(undefined8 *)(param_4 + 0xa8)), iVar2 != 0)) &&
                  (((param_5 != 5 || (puVar7 = (ulong *)FUN_003f154c(lVar5), (*puVar7 & 0xf) == 0xc)
                    ) || (iVar2 = FUN_00398f34(lVar5,*(undefined8 *)(param_4 + 0x28),lVar5),
                         iVar2 != 0)))) &&
                 (uVar3 = FUN_0038fe10(lVar5,__src,iVar1), -1 < (int)uVar3)) {
                __n = (ulong)uVar3;
                if (param_5 == 5) {
                  uVar3 = FUN_00407540(param_3,iVar1,__src,__n,iVar1);
                }
                else {
                  if (param_5 == 3) {
                    memcpy(param_3,__src,__n);
                    goto LAB_003fcca0;
                  }
                  if (param_5 != 1) {
                    FUN_00379868();
                    FUN_0037995c("crypto/rsa/rsa_ossl.c",0x2e6,"rsa_ossl_public_decrypt");
                    uVar8 = 0x76;
                    goto LAB_003fcc94;
                  }
                  uVar3 = FUN_00400a54(param_3,iVar1,__src,__n,iVar1);
                }
                __n = (ulong)uVar3;
                if ((int)uVar3 < 0) {
                  FUN_00379868();
                  FUN_0037995c("crypto/rsa/rsa_ossl.c",0x2ea,"rsa_ossl_public_decrypt");
                  FUN_00379a5c(4,0x72,0);
                }
                goto LAB_003fcca0;
              }
            }
          }
        }
      }
      __n = 0xffffffff;
LAB_003fcca0:
      FUN_0039180c(lVar4);
      FUN_00391550(lVar4);
      FUN_003c893c(__src,(long)iVar1,"crypto/rsa/rsa_ossl.c",0x2ef);
      return __n;
    }
    FUN_00379868();
    uVar8 = 0x2a6;
  }
  FUN_0037995c("crypto/rsa/rsa_ossl.c",uVar8,"rsa_ossl_public_decrypt");
  uVar8 = 0x65;
LAB_003fcc00:
  FUN_00379a5c(4,uVar8,0);
  return 0xffffffff;
}


// ===== 003fce38  FUN_003fce38 =====

undefined4
FUN_003fce38(undefined4 param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  int local_64;
  
  local_64 = 0;
  lVar4 = FUN_00391448(*(undefined8 *)(param_4 + 8));
  if (lVar4 == 0) {
    iVar1 = 0;
    lVar7 = 0;
    uVar3 = 0xffffffff;
    goto LAB_003fcfe4;
  }
  FUN_003916e0(lVar4);
  lVar5 = FUN_00391898(lVar4);
  lVar6 = FUN_00391898(lVar4);
  iVar1 = FUN_0038f2c0(*(undefined8 *)(param_4 + 0x28));
  uVar12 = iVar1 + 0xe;
  if ((int)(iVar1 + 7U) < 0 == SCARRY4(iVar1,7)) {
    uVar12 = iVar1 + 7U;
  }
  iVar1 = (int)uVar12 >> 3;
  lVar7 = FUN_003c83a4((long)((ulong)uVar12 << 0x20) >> 0x23,"crypto/rsa/rsa_ossl.c",0x12d);
  uVar3 = 0xffffffff;
  if ((lVar6 == 0) || (lVar7 == 0)) goto LAB_003fcfe4;
  if (param_5 != 5) {
    if (param_5 == 3) {
      iVar2 = FUN_003fe574(lVar7,iVar1,param_2,param_1);
      goto joined_r0x003fcf44;
    }
    if (param_5 == 1) {
      iVar2 = FUN_004009a4(lVar7,iVar1,param_2,param_1);
      goto joined_r0x003fcf44;
    }
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_ossl.c",0x13c,"rsa_ossl_private_encrypt");
    uVar10 = 0x76;
LAB_003fcfdc:
    FUN_00379a5c(4,uVar10,0);
    goto LAB_003fcfe4;
  }
  iVar2 = FUN_00407460(lVar7,iVar1,param_2,param_1);
joined_r0x003fcf44:
  if ((iVar2 < 1) || (lVar8 = FUN_0038fa44(lVar7,iVar1,lVar5), lVar8 == 0)) goto LAB_003fcfe4;
  iVar2 = FUN_003901ac(lVar5,*(undefined8 *)(param_4 + 0x28));
  if (-1 < iVar2) {
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_ossl.c",0x147,"rsa_ossl_private_encrypt");
    uVar10 = 0x84;
    goto LAB_003fcfdc;
  }
  uVar12 = *(uint *)(param_4 + 0xa4);
  if ((uVar12 >> 1 & 1) != 0) {
    lVar8 = FUN_003912d4(param_4 + 0xa8,*(undefined8 *)(param_4 + 0xd0),
                         *(undefined8 *)(param_4 + 0x28),lVar4);
    if (lVar8 == 0) goto LAB_003fcfe4;
    uVar12 = *(uint *)(param_4 + 0xa4);
  }
  if ((uVar12 >> 7 & 1) == 0) {
    lVar8 = FUN_003fe0bc(param_4,&local_64,lVar4);
    if (lVar8 == 0) {
      FUN_00379868();
      FUN_0037995c("crypto/rsa/rsa_ossl.c",0x153,"rsa_ossl_private_encrypt");
      uVar10 = 0xc0103;
      goto LAB_003fcfdc;
    }
    if (local_64 == 0) {
      lVar13 = FUN_00391898(lVar4);
      if (lVar13 != 0) goto LAB_003fd0cc;
      FUN_00379868();
      uVar10 = 0x15a;
      goto LAB_003fd240;
    }
    lVar13 = 0;
LAB_003fd0cc:
    iVar2 = FUN_003fe1b0(lVar8,lVar5,lVar13,lVar4);
    if (iVar2 != 0) {
      uVar11 = *(uint *)(param_4 + 0xa4);
      goto LAB_003fd0e8;
    }
  }
  else {
    lVar8 = 0;
    lVar13 = 0;
    uVar11 = uVar12;
LAB_003fd0e8:
    if ((((uVar11 >> 5 & 1) == 0) && (*(int *)(param_4 + 0x10) != 1)) &&
       (((*(long *)(param_4 + 0x40) == 0 ||
         (((*(long *)(param_4 + 0x48) == 0 || (*(long *)(param_4 + 0x50) == 0)) ||
          (*(long *)(param_4 + 0x58) == 0)))) || (*(long *)(param_4 + 0x60) == 0)))) {
      lVar9 = FUN_0038f584();
      if (lVar9 == 0) {
        FUN_00379868();
        uVar10 = 0x16b;
LAB_003fd240:
        FUN_0037995c("crypto/rsa/rsa_ossl.c",uVar10,"rsa_ossl_private_encrypt");
        FUN_00379a5c(4,0x80003,0);
        uVar3 = 0xffffffff;
        goto LAB_003fcfe4;
      }
      if (*(long *)(param_4 + 0x38) == 0) {
        FUN_00379868();
        FUN_0037995c("crypto/rsa/rsa_ossl.c",0x16f,"rsa_ossl_private_encrypt");
        FUN_00379a5c(4,0xb3,0);
        FUN_0038f4f4(lVar9);
        uVar3 = 0xffffffff;
        goto LAB_003fcfe4;
      }
      FUN_003908e4(lVar9,*(long *)(param_4 + 0x38),4);
      iVar2 = (**(code **)(*(long *)(param_4 + 0x18) + 0x30))
                        (lVar6,lVar5,lVar9,*(undefined8 *)(param_4 + 0x28),lVar4,
                         *(undefined8 *)(param_4 + 0xa8));
      FUN_0038f4f4(lVar9);
    }
    else {
      iVar2 = (**(code **)(*(long *)(param_4 + 0x18) + 0x28))(lVar6,lVar5,param_4,lVar4);
    }
    if (iVar2 != 0) {
      if ((uVar12 >> 7 & 1) == 0) {
        FUN_00390944(lVar6,4);
        iVar2 = FUN_003fa31c(lVar6,lVar13,lVar8,lVar4);
        if (iVar2 == 0) goto LAB_003fd204;
      }
      lVar8 = lVar6;
      if (param_5 == 5) {
        iVar2 = FUN_00398f34(lVar5,*(undefined8 *)(param_4 + 0x28),lVar6);
        if (iVar2 == 0) goto LAB_003fd204;
        iVar2 = FUN_00390208(lVar6,lVar5);
        lVar8 = lVar5;
        if (iVar2 < 1) {
          lVar8 = lVar6;
        }
      }
      uVar3 = FUN_0038fe10(lVar8,param_3,iVar1);
      goto LAB_003fcfe4;
    }
  }
LAB_003fd204:
  uVar3 = 0xffffffff;
LAB_003fcfe4:
  FUN_0039180c(lVar4);
  FUN_00391550(lVar4);
  FUN_003c893c(lVar7,(long)iVar1,"crypto/rsa/rsa_ossl.c",0x195);
  return uVar3;
}


// ===== 003fd2a0  FUN_003fd2a0 =====

ulong FUN_003fd2a0(int param_1,undefined8 param_2,void *param_3,long param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  void *__src;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  long local_98;
  long local_90;
  int local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  iVar1 = 8;
  if (((uint)(param_5 == 1) & (*(uint *)(param_4 + 0xa4) & 0x20) >> 5) == 0) {
    iVar1 = param_5;
  }
  local_84 = 0;
  lVar5 = FUN_00391448(*(undefined8 *)(param_4 + 8));
  if (lVar5 == 0) {
LAB_003fd3c0:
    iVar2 = 0;
    __src = (void *)0x0;
  }
  else {
    FUN_003916e0(lVar5);
    uVar6 = FUN_00391898(lVar5);
    lVar7 = FUN_00391898(lVar5);
    if (lVar7 == 0) {
      FUN_00379868();
      FUN_0037995c("crypto/rsa/rsa_ossl.c",0x20b,"rsa_ossl_private_decrypt");
      FUN_00379a5c(4,0x80003,0);
      goto LAB_003fd3c0;
    }
    iVar2 = FUN_0038f2c0(*(undefined8 *)(param_4 + 0x28));
    uVar4 = iVar2 + 0xe;
    if ((int)(iVar2 + 7U) < 0 == SCARRY4(iVar2,7)) {
      uVar4 = iVar2 + 7U;
    }
    iVar2 = (int)uVar4 >> 3;
    __src = (void *)FUN_003c83a4((long)((ulong)uVar4 << 0x20) >> 0x23,"crypto/rsa/rsa_ossl.c",0x20f)
    ;
    if (__src == (void *)0x0) goto LAB_003fd44c;
    if (iVar2 < param_1) {
      FUN_00379868();
      FUN_0037995c("crypto/rsa/rsa_ossl.c",0x218,"rsa_ossl_private_decrypt");
      uVar6 = 0x6c;
LAB_003fd444:
      FUN_00379a5c(4,uVar6,0);
    }
    else {
      if (param_1 < 1) {
        FUN_00379868();
        FUN_0037995c("crypto/rsa/rsa_ossl.c",0x21d,"rsa_ossl_private_decrypt");
        uVar6 = 0x6f;
        goto LAB_003fd444;
      }
      lVar8 = FUN_0038fa44(param_2,param_1,uVar6);
      if (lVar8 == 0) goto LAB_003fd44c;
      iVar3 = FUN_003901ac(uVar6,*(undefined8 *)(param_4 + 0x28));
      if (-1 < iVar3) {
        FUN_00379868();
        FUN_0037995c("crypto/rsa/rsa_ossl.c",0x226,"rsa_ossl_private_decrypt");
        uVar6 = 0x84;
        goto LAB_003fd444;
      }
      uVar4 = *(uint *)(param_4 + 0xa4);
      if ((uVar4 >> 1 & 1) != 0) {
        lVar8 = FUN_003912d4(param_4 + 0xa8,*(undefined8 *)(param_4 + 0xd0),
                             *(undefined8 *)(param_4 + 0x28),lVar5);
        if (lVar8 == 0) goto LAB_003fd44c;
        uVar4 = *(uint *)(param_4 + 0xa4);
      }
      if ((uVar4 >> 7 & 1) == 0) {
        local_90 = FUN_003fe0bc(param_4,&local_84,lVar5);
        if (local_90 == 0) {
          FUN_00379868();
          FUN_0037995c("crypto/rsa/rsa_ossl.c",0x232,"rsa_ossl_private_decrypt");
          uVar6 = 0xc0103;
          goto LAB_003fd444;
        }
        if (local_84 != 0) {
          local_98 = 0;
LAB_003fd538:
          iVar3 = FUN_003fe1b0(local_90,uVar6,local_98,lVar5);
          if (iVar3 == 0) goto LAB_003fd44c;
          uVar9 = *(uint *)(param_4 + 0xa4);
          goto LAB_003fd550;
        }
        local_98 = FUN_00391898(lVar5);
        if (local_98 != 0) goto LAB_003fd538;
        FUN_00379868(local_90);
        uVar6 = 0x239;
LAB_003fd6fc:
        FUN_0037995c("crypto/rsa/rsa_ossl.c",uVar6,"rsa_ossl_private_decrypt");
        uVar6 = 0x80003;
        goto LAB_003fd444;
      }
      local_98 = 0;
      local_90 = 0;
      uVar9 = uVar4;
LAB_003fd550:
      if ((((uVar9 >> 5 & 1) == 0) && (*(int *)(param_4 + 0x10) != 1)) &&
         (((*(long *)(param_4 + 0x40) == 0 ||
           (((*(long *)(param_4 + 0x48) == 0 || (*(long *)(param_4 + 0x50) == 0)) ||
            (*(long *)(param_4 + 0x58) == 0)))) || (*(long *)(param_4 + 0x60) == 0)))) {
        lVar8 = FUN_0038f584(lVar7);
        if (lVar8 == 0) {
          FUN_00379868();
          uVar6 = 0x24b;
          goto LAB_003fd6fc;
        }
        if (*(long *)(param_4 + 0x38) == 0) {
          FUN_00379868();
          FUN_0037995c("crypto/rsa/rsa_ossl.c",0x24f,"rsa_ossl_private_decrypt");
          FUN_00379a5c(4,0xb3,0);
          FUN_0038f4f4(lVar8);
          goto LAB_003fd44c;
        }
        FUN_003908e4(lVar8,*(long *)(param_4 + 0x38),4);
        iVar3 = (**(code **)(*(long *)(param_4 + 0x18) + 0x30))
                          (lVar7,uVar6,lVar8,*(undefined8 *)(param_4 + 0x28),lVar5,
                           *(undefined8 *)(param_4 + 0xa8));
        FUN_0038f4f4(lVar8);
      }
      else {
        iVar3 = (**(code **)(*(long *)(param_4 + 0x18) + 0x28))(lVar7,uVar6,param_4,lVar5);
      }
      if (iVar3 != 0) {
        if ((uVar4 >> 7 & 1) == 0) {
          FUN_00390944(lVar7,4);
          iVar3 = FUN_003fa31c(lVar7,local_98,local_90,lVar5);
          if (iVar3 == 0) goto LAB_003fd44c;
        }
        if (((iVar1 != 1) ||
            (iVar3 = FUN_003fe240(param_1,param_2,param_4,__src,iVar2,&local_80), iVar3 != 0)) &&
           (uVar4 = FUN_0038fe10(lVar7,__src,iVar2), -1 < (int)uVar4)) {
          uVar10 = (ulong)uVar4;
          if (iVar1 < 4) {
            if (iVar1 == 1) {
              uVar10 = FUN_004010c0(*(undefined8 *)(param_4 + 8),param_3,iVar2,__src,uVar10,iVar2,
                                    &local_80);
              goto LAB_003fd7b8;
            }
            if (iVar1 != 3) {
LAB_003fd74c:
              FUN_00379868();
              FUN_0037995c("crypto/rsa/rsa_ossl.c",0x27c,"rsa_ossl_private_decrypt");
              uVar6 = 0x76;
              goto LAB_003fd444;
            }
            memcpy(param_3,__src,uVar10);
          }
          else {
            if (iVar1 == 4) {
              uVar10 = FUN_003fecb4(param_3,iVar2,__src,uVar10,iVar2,0,0);
            }
            else {
              if (iVar1 != 8) goto LAB_003fd74c;
              uVar10 = FUN_00400d88(param_3,iVar2,__src,uVar10,iVar2);
            }
LAB_003fd7b8:
            uVar10 = uVar10 & 0xffffffff;
          }
          FUN_00379868();
          FUN_0037995c("crypto/rsa/rsa_ossl.c",0x285,"rsa_ossl_private_decrypt");
          FUN_00379a5c(4,0x72,0);
          FUN_0037b17c(~(uint)uVar10 >> 0x1f);
          goto LAB_003fd450;
        }
      }
    }
  }
LAB_003fd44c:
  uVar10 = 0xffffffff;
LAB_003fd450:
  FUN_0039180c(lVar5);
  FUN_00391550(lVar5);
  FUN_003c893c(__src,(long)iVar2,"crypto/rsa/rsa_ossl.c",0x28c);
  return uVar10;
}


// ===== 003fd7f8  FUN_003fd7f8 =====

int FUN_003fd7f8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  uint uVar14;
  long local_78 [3];
  
  FUN_003916e0(param_4);
  uVar5 = FUN_00391898(param_4);
  uVar6 = FUN_00391898(param_4);
  uVar7 = FUN_00391898(param_4);
  lVar8 = FUN_00391898(param_4);
  if (lVar8 != 0) {
    if (*(int *)(param_3 + 0x10) != 1) {
      uVar2 = 0;
      uVar14 = *(uint *)(param_3 + 0xa4);
      if ((uVar14 >> 2 & 1) == 0) goto LAB_003fd890;
LAB_003fda20:
      lVar9 = FUN_0038f584();
      if (lVar9 == 0) goto LAB_003fdef4;
      FUN_003908e4(lVar9,*(undefined8 *)(param_3 + 0x40),4);
      lVar10 = FUN_003912d4(param_3 + 0xb0,*(undefined8 *)(param_3 + 0xd0),lVar9,param_4);
      if (lVar10 != 0) {
        FUN_003908e4(lVar9,*(undefined8 *)(param_3 + 0x48),4);
        lVar10 = FUN_003912d4(param_3 + 0xb8,*(undefined8 *)(param_3 + 0xd0),lVar9,param_4);
        if (lVar10 != 0) {
          if (uVar2 != 0) {
            uVar14 = 0;
            do {
              puVar12 = (undefined8 *)FUN_0040cb0c(*(undefined8 *)(param_3 + 0x88),uVar14);
              FUN_003908e4(lVar9,*puVar12,4);
              lVar10 = FUN_003912d4(puVar12 + 4,*(undefined8 *)(param_3 + 0xd0),lVar9,param_4);
              if (lVar10 == 0) goto LAB_003fdef0;
              uVar14 = uVar14 + 1;
            } while (uVar2 != uVar14);
          }
          FUN_0038f4f4(lVar9);
          bVar1 = false;
          if ((uVar2 == 0) &&
             (*(undefined **)(*(long *)(param_3 + 0x18) + 0x30) == PTR_FUN_007a1a48)) {
            iVar3 = FUN_0038f2c0(*(undefined8 *)(param_3 + 0x48));
            iVar4 = FUN_0038f2c0(*(undefined8 *)(param_3 + 0x40));
            bVar1 = iVar3 == iVar4;
          }
          uVar14 = *(uint *)(param_3 + 0xa4);
          goto joined_r0x003fdecc;
        }
      }
      goto LAB_003fdef0;
    }
    uVar2 = FUN_0040caf8(*(undefined8 *)(param_3 + 0x88));
    if (0xfffffffc < uVar2 - 4) {
      uVar14 = *(uint *)(param_3 + 0xa4);
      if ((uVar14 >> 2 & 1) != 0) goto LAB_003fda20;
LAB_003fd890:
      bVar1 = false;
joined_r0x003fdecc:
      if (((uVar14 >> 1 & 1) == 0) ||
         (lVar9 = FUN_003912d4(param_3 + 0xa8,*(undefined8 *)(param_3 + 0xd0),
                               *(undefined8 *)(param_3 + 0x28),param_4), lVar9 != 0)) {
        if (bVar1) {
          iVar3 = FUN_00390e64(uVar7,param_2,*(undefined8 *)(param_3 + 0xb8),param_4);
          if (((((iVar3 != 0) &&
                (iVar3 = FUN_00390ee8(uVar7,uVar7,*(undefined8 *)(param_3 + 0xb8),param_4),
                iVar3 != 0)) &&
               ((iVar3 = FUN_00390e64(uVar5,param_2,*(undefined8 *)(param_3 + 0xb0),param_4),
                iVar3 != 0 &&
                ((iVar3 = FUN_00390ee8(uVar5,uVar5,*(undefined8 *)(param_3 + 0xb0),param_4),
                 iVar3 != 0 &&
                 (iVar3 = FUN_003f9300(uVar7,uVar7,*(undefined8 *)(param_3 + 0x58),
                                       *(undefined8 *)(param_3 + 0x48),
                                       *(undefined8 *)(param_3 + 0xb8),uVar5,uVar5,
                                       *(undefined8 *)(param_3 + 0x50),
                                       *(undefined8 *)(param_3 + 0x40),
                                       *(undefined8 *)(param_3 + 0xb0),param_4), iVar3 != 0)))))) &&
              (iVar3 = FUN_003975ac(uVar5,uVar5,uVar7,*(undefined8 *)(param_3 + 0x40)), iVar3 != 0))
             && ((((iVar3 = FUN_00390ee8(uVar5,uVar5,*(undefined8 *)(param_3 + 0xb0),param_4),
                   iVar3 != 0 &&
                   (iVar3 = FUN_00390a4c(uVar5,uVar5,*(undefined8 *)(param_3 + 0x60),
                                         *(undefined8 *)(param_3 + 0xb0),param_4), iVar3 != 0)) &&
                  (iVar3 = FUN_00392ab0(param_1,uVar5,*(undefined8 *)(param_3 + 0x48),param_4),
                  iVar3 != 0)) &&
                 (iVar3 = FUN_003972fc(param_1,param_1,uVar7,*(undefined8 *)(param_3 + 0x28)),
                 iVar3 != 0)))) goto LAB_003fd9bc;
        }
        else {
          lVar9 = FUN_0038f584();
          if (lVar9 != 0) {
            FUN_003908e4(lVar9,param_2,4);
            iVar3 = FUN_00397cac(0,uVar5,lVar9,*(undefined8 *)(param_3 + 0x48),param_4);
            if ((iVar3 != 0) && (lVar10 = FUN_0038f584(), lVar10 != 0)) {
              FUN_003908e4(lVar10,*(undefined8 *)(param_3 + 0x58),4);
              iVar3 = (**(code **)(*(long *)(param_3 + 0x18) + 0x30))
                                (uVar7,uVar5,lVar10,*(undefined8 *)(param_3 + 0x48),param_4,
                                 *(undefined8 *)(param_3 + 0xb8));
              if (iVar3 != 0) {
                FUN_0038f4f4(lVar10);
                iVar3 = FUN_00397cac(0,uVar5,lVar9,*(undefined8 *)(param_3 + 0x40),param_4);
                FUN_0038f4f4(lVar9);
                if (iVar3 == 0) goto LAB_003fdef8;
                lVar9 = FUN_0038f584();
                if (lVar9 != 0) {
                  FUN_003908e4(lVar9,*(undefined8 *)(param_3 + 0x50),4);
                  iVar3 = (**(code **)(*(long *)(param_3 + 0x18) + 0x30))
                                    (param_1,uVar5,lVar9,*(undefined8 *)(param_3 + 0x40),param_4,
                                     *(undefined8 *)(param_3 + 0xb0));
                  FUN_0038f4f4(lVar9);
                  if (iVar3 != 0) {
                    if (0 < (int)uVar2) {
                      lVar9 = FUN_0038f584();
                      lVar10 = FUN_0038f584();
                      if ((lVar10 == 0) || (lVar9 == 0)) {
LAB_003fdee4:
                        FUN_0038f4f4(lVar10);
                        goto LAB_003fdef0;
                      }
                      uVar13 = 0;
                      do {
                        lVar11 = FUN_00391898(param_4);
                        local_78[uVar13] = lVar11;
                        if (lVar11 == 0) {
                          FUN_0038f4f4(lVar10);
                          FUN_0038f4f4(lVar9);
                          iVar3 = 0;
                          goto LAB_003fdef8;
                        }
                        puVar12 = (undefined8 *)FUN_0040cb0c(*(undefined8 *)(param_3 + 0x88));
                        FUN_003908e4(lVar10,param_2,4);
                        FUN_003908e4(lVar9,puVar12[1],4);
                        iVar3 = FUN_00397cac(0,uVar5,lVar10,*puVar12,param_4);
                        if ((iVar3 == 0) ||
                           (iVar3 = (**(code **)(*(long *)(param_3 + 0x18) + 0x30))
                                              (lVar11,uVar5,lVar9,*puVar12,param_4,puVar12[4]),
                           iVar3 == 0)) goto LAB_003fdee4;
                        uVar13 = uVar13 + 1;
                      } while (uVar2 != uVar13);
                      FUN_0038f4f4(lVar10);
                      FUN_0038f4f4(lVar9);
                    }
                    iVar3 = FUN_00398f34(param_1,param_1,uVar7);
                    if ((iVar3 != 0) &&
                       ((((iVar3 = FUN_003908c4(param_1), iVar3 == 0 ||
                          (iVar3 = FUN_00398c3c(param_1,param_1,*(undefined8 *)(param_3 + 0x40)),
                          iVar3 != 0)) &&
                         (iVar3 = FUN_00392a80(uVar5,param_1,*(undefined8 *)(param_3 + 0x60),param_4
                                              ), iVar3 != 0)) &&
                        (lVar9 = FUN_0038f584(), lVar9 != 0)))) {
                      FUN_003908e4(lVar9,uVar5,4);
                      iVar3 = FUN_00397cac(0,param_1,lVar9,*(undefined8 *)(param_3 + 0x40),param_4);
                      FUN_0038f4f4(lVar9);
                      if ((iVar3 != 0) &&
                         (((iVar3 = FUN_003908c4(param_1), iVar3 == 0 ||
                           (iVar3 = FUN_00398c3c(param_1,param_1,*(undefined8 *)(param_3 + 0x40)),
                           iVar3 != 0)) &&
                          ((iVar3 = FUN_00392a80(uVar5,param_1,*(undefined8 *)(param_3 + 0x48),
                                                 param_4), iVar3 != 0 &&
                           (iVar3 = FUN_00398c3c(param_1,uVar5,uVar7), iVar3 != 0)))))) {
                        if (0 < (int)uVar2) {
                          lVar9 = FUN_0038f584();
                          if (lVar9 == 0) goto LAB_003fdef4;
                          uVar13 = 0;
                          do {
                            puVar12 = (undefined8 *)
                                      FUN_0040cb0c(*(undefined8 *)(param_3 + 0x88),
                                                   uVar13 & 0xffffffff);
                            iVar3 = FUN_00398f34(uVar5,local_78[uVar13],param_1);
                            if ((iVar3 == 0) ||
                               (iVar3 = FUN_00392a80(uVar6,uVar5,puVar12[2],param_4), iVar3 == 0))
                            goto LAB_003fdef0;
                            FUN_003908e4(lVar9,uVar6,4);
                            iVar3 = FUN_00397cac(0,uVar5,lVar9,*puVar12,param_4);
                            if (((iVar3 == 0) ||
                                (((iVar3 = FUN_003908c4(uVar5), iVar3 != 0 &&
                                  (iVar3 = FUN_00398c3c(uVar5,uVar5,*puVar12), iVar3 == 0)) ||
                                 (iVar3 = FUN_00392a80(uVar5,uVar5,puVar12[3],param_4), iVar3 == 0))
                                )) || (iVar3 = FUN_00398c3c(param_1,param_1,uVar5), iVar3 == 0))
                            goto LAB_003fdef0;
                            uVar13 = uVar13 + 1;
                          } while (uVar2 != uVar13);
                          FUN_0038f4f4(lVar9);
                        }
LAB_003fd9bc:
                        if ((*(long *)(param_3 + 0x30) != 0) && (*(long *)(param_3 + 0x28) != 0)) {
                          if (*(undefined **)(*(long *)(param_3 + 0x18) + 0x30) == PTR_FUN_007a1a48)
                          {
                            iVar3 = FUN_003f71f8(lVar8,param_1,*(long *)(param_3 + 0x30),
                                                 *(long *)(param_3 + 0x28),param_4,
                                                 *(undefined8 *)(param_3 + 0xa8));
                          }
                          else {
                            FUN_003903e8(param_1);
                            iVar3 = (**(code **)(*(long *)(param_3 + 0x18) + 0x30))
                                              (lVar8,param_1,*(undefined8 *)(param_3 + 0x30),
                                               *(undefined8 *)(param_3 + 0x28),param_4,
                                               *(undefined8 *)(param_3 + 0xa8));
                          }
                          if ((iVar3 == 0) ||
                             (iVar3 = FUN_00398f34(lVar8,lVar8,param_2), iVar3 == 0))
                          goto LAB_003fdef4;
                          iVar3 = FUN_0038f448(lVar8);
                          if (iVar3 == 0) {
                            iVar3 = FUN_00397cac(0,lVar8,lVar8,*(undefined8 *)(param_3 + 0x28),
                                                 param_4);
                            if ((iVar3 == 0) ||
                               ((iVar3 = FUN_003908c4(lVar8), iVar3 != 0 &&
                                (iVar3 = FUN_00398c3c(lVar8,lVar8,*(undefined8 *)(param_3 + 0x28)),
                                iVar3 == 0)))) goto LAB_003fdef4;
                            iVar3 = FUN_0038f448(lVar8);
                            if (iVar3 == 0) {
                              lVar8 = FUN_0038f584();
                              if (lVar8 == 0) goto LAB_003fdef4;
                              FUN_003908e4(lVar8,*(undefined8 *)(param_3 + 0x38),4);
                              iVar3 = (**(code **)(*(long *)(param_3 + 0x18) + 0x30))
                                                (param_1,param_2,lVar8,
                                                 *(undefined8 *)(param_3 + 0x28),param_4,
                                                 *(undefined8 *)(param_3 + 0xa8));
                              FUN_0038f4f4(lVar8);
                              if (iVar3 == 0) goto LAB_003fdef8;
                            }
                          }
                        }
                        FUN_003903e8(param_1);
                        iVar3 = 1;
                        goto LAB_003fdef8;
                      }
                    }
                  }
                }
                goto LAB_003fdef4;
              }
              FUN_0038f4f4(lVar9);
              lVar9 = lVar10;
            }
LAB_003fdef0:
            FUN_0038f4f4(lVar9);
          }
        }
      }
    }
  }
LAB_003fdef4:
  iVar3 = 0;
LAB_003fdef8:
  FUN_0039180c(param_4);
  return iVar3;
}


// ===== 003fe030  FUN_003fe030 =====

undefined8 FUN_003fe030(long param_1)

{
  *(uint *)(param_1 + 0xa4) = *(uint *)(param_1 + 0xa4) | 6;
  return 1;
}


// ===== 003fe048  FUN_003fe048 =====

undefined8 FUN_003fe048(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar1 = FUN_0040caf8(*(undefined8 *)(param_1 + 0x88));
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      lVar3 = FUN_0040cb0c(*(undefined8 *)(param_1 + 0x88),iVar1);
      FUN_00390f94(*(undefined8 *)(lVar3 + 0x20));
      iVar1 = iVar1 + 1;
      iVar2 = FUN_0040caf8(*(undefined8 *)(param_1 + 0x88));
    } while (iVar1 < iVar2);
  }
  FUN_00390f94(*(undefined8 *)(param_1 + 0xa8));
  FUN_00390f94(*(undefined8 *)(param_1 + 0xb0));
  FUN_00390f94(*(undefined8 *)(param_1 + 0xb8));
  return 1;
}


// ===== 003fe0bc  FUN_003fe0bc =====

long FUN_003fe0bc(long param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_003d517c(*(undefined8 *)(param_1 + 0xd0));
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0xc0);
  if (lVar2 == 0) {
    FUN_003d519c(*(undefined8 *)(param_1 + 0xd0));
    iVar1 = FUN_003d518c(*(undefined8 *)(param_1 + 0xd0));
    if (iVar1 == 0) {
      return 0;
    }
    lVar2 = *(long *)(param_1 + 0xc0);
    if (lVar2 == 0) {
      lVar2 = FUN_003f9a1c(param_1,param_3);
      *(long *)(param_1 + 0xc0) = lVar2;
      if (lVar2 == 0) goto LAB_003fe148;
    }
  }
  iVar1 = FUN_003fa480(lVar2);
  if (iVar1 == 0) {
    lVar2 = *(long *)(param_1 + 200);
    *param_2 = 0;
    if (lVar2 == 0) {
      FUN_003d519c(*(undefined8 *)(param_1 + 0xd0));
      iVar1 = FUN_003d518c(*(undefined8 *)(param_1 + 0xd0));
      if (iVar1 == 0) {
        return 0;
      }
      lVar2 = *(long *)(param_1 + 200);
      if (lVar2 == 0) {
        lVar2 = FUN_003f9a1c(param_1,param_3);
        *(long *)(param_1 + 200) = lVar2;
      }
    }
  }
  else {
    *param_2 = 1;
  }
LAB_003fe148:
  FUN_003d519c(*(undefined8 *)(param_1 + 0xd0));
  return lVar2;
}


// ===== 003fe1b0  FUN_003fe1b0 =====

ulong FUN_003fe1b0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  
  if (param_3 == 0) {
    uVar1 = FUN_003fa20c(param_2,0,param_1);
    return uVar1;
  }
  uVar1 = FUN_003fa4a4(param_1);
  if ((int)uVar1 != 0) {
    uVar1 = FUN_003fa20c(param_2,param_3,param_1,param_4);
    FUN_003fa4ac(param_1);
    return uVar1 & 0xffffffff;
  }
  return uVar1;
}


// ===== 003fe240  FUN_003fe240 =====

undefined4
FUN_003fe240(int param_1,undefined8 param_2,long param_3,void *param_4,int param_5,
            undefined8 param_6)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 local_34;
  
  local_34 = 0x20;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  lVar2 = FUN_0038f584();
  if (lVar2 == 0) {
    FUN_00379868();
    uVar4 = 0x1a8;
    lVar2 = 0;
LAB_003fe3b4:
    FUN_0037995c("crypto/rsa/rsa_ossl.c",uVar4,"derive_kdk");
    uVar4 = 0x8000f;
    goto LAB_003fe3c4;
  }
  if (*(long *)(param_3 + 0x38) == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_ossl.c",0x1ac,"derive_kdk");
    uVar4 = 0xb3;
LAB_003fe424:
    FUN_00379a5c(4,uVar4,0);
    FUN_0038f4f4(lVar2);
    lVar2 = 0;
  }
  else {
    FUN_003908e4(lVar2,*(long *)(param_3 + 0x38),4);
    iVar1 = FUN_0038fe10(lVar2,param_4,param_5);
    if (iVar1 < 0) {
      FUN_00379868();
      FUN_0037995c("crypto/rsa/rsa_ossl.c",0x1b2,"derive_kdk");
      uVar4 = 0xc0103;
      goto LAB_003fe424;
    }
    FUN_0038f4f4(lVar2);
    lVar2 = FUN_0039e6f4(*(undefined8 *)(param_3 + 8),"sha256",0);
    if (lVar2 == 0) {
      FUN_00379868();
      FUN_0037995c("crypto/rsa/rsa_ossl.c",0x1c1,"derive_kdk");
      uVar4 = 0x8010d;
    }
    else {
      iVar1 = FUN_0039e518(param_4,(long)param_5,&local_70,0,lVar2,0);
      if (0 < iVar1) {
        lVar3 = FUN_003ff7b8();
        if (lVar3 == 0) {
          FUN_00379868();
          uVar4 = 0x1cc;
          goto LAB_003fe3b4;
        }
        iVar1 = FUN_003ff340(lVar3,&local_70,0x20,lVar2,0);
        if (iVar1 < 1) {
          FUN_00379868();
          uVar4 = 0x1d1;
        }
        else {
          iVar1 = param_5 - param_1;
          if (iVar1 != 0 && param_1 <= param_5) {
            memset(param_4,0,(long)iVar1);
            iVar1 = FUN_003ff6e0(lVar3,param_4,(long)iVar1);
            if (iVar1 < 1) {
              FUN_00379868();
              uVar4 = 0x1d8;
              goto LAB_003fe550;
            }
          }
          iVar1 = FUN_003ff6e0(lVar3,param_2,param_1);
          if (iVar1 < 1) {
            FUN_00379868();
            uVar4 = 0x1dd;
          }
          else {
            local_34 = 0x20;
            iVar1 = FUN_003ff6f8(lVar3,param_6,&local_34);
            if (0 < iVar1) {
              uVar5 = 1;
              goto LAB_003fe440;
            }
            FUN_00379868();
            uVar4 = 0x1e3;
          }
        }
LAB_003fe550:
        FUN_0037995c("crypto/rsa/rsa_ossl.c",uVar4,"derive_kdk");
        FUN_00379a5c(4,0xc0103,0);
        uVar5 = 0;
        goto LAB_003fe440;
      }
      FUN_00379868();
      FUN_0037995c("crypto/rsa/rsa_ossl.c",0x1c6,"derive_kdk");
      uVar4 = 0xc0103;
    }
LAB_003fe3c4:
    FUN_00379a5c(4,uVar4,0);
  }
  lVar3 = 0;
  uVar5 = 0;
LAB_003fe440:
  FUN_003ff868(lVar3);
  FUN_0039d050(lVar2);
  return uVar5;
}


// ===== 003fe574  FUN_003fe574 =====

undefined8 FUN_003fe574(void *param_1,int param_2,void *param_3,uint param_4)

{
  if (param_2 < (int)param_4) {
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_none.c",0x18,"RSA_padding_add_none");
    FUN_00379a5c(4,0x6e,0);
    return 0;
  }
  if ((int)param_4 < param_2) {
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_none.c",0x1d,"RSA_padding_add_none");
    FUN_00379a5c(4,0x7a,0);
    return 0;
  }
  memcpy(param_1,param_3,(ulong)param_4);
  return 1;
}


// ===== 003fe614  FUN_003fe614 =====

int FUN_003fe614(void *param_1,int param_2,void *param_3,int param_4)

{
  if (param_2 < param_4) {
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_none.c",0x2a,"RSA_padding_check_none");
    FUN_00379a5c(4,0x6d,0);
    return -1;
  }
  memset(param_1,0,(long)(param_2 - param_4));
  memcpy((void *)((long)param_1 + ((long)param_2 - (long)param_4)),param_3,(long)param_4);
  return param_2;
}


// ===== 003fe6b4  FUN_003fe6b4 =====

void FUN_003fe6b4(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5,undefined4 param_6)

{
  FUN_003fe6f4(0,param_1,param_2,param_3,param_4,param_5,param_6,0,0);
  return;
}


// ===== 003fe6f4  FUN_003fe6f4 =====

undefined4
FUN_003fe6f4(undefined8 param_1,undefined1 *param_2,int param_3,void *param_4,uint param_5,
            undefined8 param_6,int param_7,long param_8,long param_9)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  ulong uVar13;
  byte *pbVar14;
  undefined8 *puVar15;
  undefined4 uVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  ulong uVar20;
  undefined1 *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  byte local_a0 [8];
  undefined8 auStack_98 [7];
  
  if (param_8 == 0) {
    param_8 = FUN_003a4268();
    lVar10 = param_8;
    if (param_9 != 0) {
      lVar10 = param_9;
    }
    uVar3 = FUN_00389a38();
  }
  else {
    lVar10 = param_8;
    if (param_9 != 0) {
      lVar10 = param_9;
    }
    uVar3 = FUN_00389a38(param_8);
  }
  if ((int)uVar3 < 1) {
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_oaep.c",0x51,"ossl_rsa_padding_add_PKCS1_OAEP_mgf1_ex");
    uVar7 = 0xb5;
LAB_003fe904:
    FUN_00379a5c(4,uVar7,0);
    return 0;
  }
  iVar5 = param_3 + -1;
  uVar19 = ~(uVar3 << 1);
  if ((int)(iVar5 + uVar19) < (int)param_5) {
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_oaep.c",0x57,"ossl_rsa_padding_add_PKCS1_OAEP_mgf1_ex");
    uVar7 = 0x6e;
    goto LAB_003fe904;
  }
  if (param_3 <= (int)(uVar3 << 1 | 1)) {
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_oaep.c",0x5c,"ossl_rsa_padding_add_PKCS1_OAEP_mgf1_ex");
    uVar7 = 0x78;
    goto LAB_003fe904;
  }
  uVar17 = (ulong)uVar3;
  puVar21 = param_2 + 1;
  *param_2 = 0;
  puVar1 = puVar21 + uVar17;
  iVar4 = FUN_0039e518(param_6,(long)param_7,puVar1,0,param_8,0);
  if (iVar4 != 0) {
    memset(puVar1 + uVar17,0,(long)(int)((iVar5 - param_5) + uVar19));
    puVar1[(int)((iVar5 - param_5) + ~uVar3)] = 1;
    memcpy(puVar1 + (((long)iVar5 - (long)(int)param_5) - uVar17),param_4,(ulong)param_5);
    iVar4 = FUN_003edc30(param_1,puVar21,uVar17,0);
    if (0 < iVar4) {
      uVar19 = iVar5 - uVar3;
      uVar20 = (ulong)uVar19;
      lVar18 = (long)(int)uVar19;
      lVar6 = FUN_003c83a4(lVar18,"crypto/rsa/rsa_oaep.c",0x72);
      if ((lVar6 != 0) && (iVar5 = FUN_003feb30(lVar6,lVar18,puVar21,uVar17,lVar10), -1 < iVar5)) {
        if (0 < (int)uVar19) {
          if (uVar19 < 8) {
            uVar8 = 0;
          }
          else {
            if (uVar19 < 0x20) {
              uVar13 = 0;
            }
            else {
              uVar8 = uVar20 & 0x7fffffe0;
              puVar11 = (undefined8 *)(lVar6 + 0x10);
              puVar15 = (undefined8 *)(param_2 + uVar17 + 0x11);
              uVar13 = uVar8;
              do {
                uVar23 = puVar15[-1];
                uVar7 = puVar15[-2];
                uVar28 = puVar15[1];
                uVar27 = *puVar15;
                uVar13 = uVar13 - 0x20;
                uVar24 = puVar11[-1];
                uVar22 = puVar11[-2];
                uVar26 = puVar11[1];
                uVar25 = *puVar11;
                puVar11 = puVar11 + 4;
                puVar15[-1] = CONCAT17((byte)((ulong)uVar23 >> 0x38) ^ (byte)((ulong)uVar24 >> 0x38)
                                       ,CONCAT16((byte)((ulong)uVar23 >> 0x30) ^
                                                 (byte)((ulong)uVar24 >> 0x30),
                                                 CONCAT15((byte)((ulong)uVar23 >> 0x28) ^
                                                          (byte)((ulong)uVar24 >> 0x28),
                                                          CONCAT14((byte)((ulong)uVar23 >> 0x20) ^
                                                                   (byte)((ulong)uVar24 >> 0x20),
                                                                   CONCAT13((byte)((ulong)uVar23 >>
                                                                                  0x18) ^
                                                                            (byte)((ulong)uVar24 >>
                                                                                  0x18),
                                                                            CONCAT12((byte)((ulong)
                                                  uVar23 >> 0x10) ^ (byte)((ulong)uVar24 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar23 >> 8) ^
                                                           (byte)((ulong)uVar24 >> 8),
                                                           (byte)uVar23 ^ (byte)uVar24)))))));
                puVar15[-2] = CONCAT17((byte)((ulong)uVar7 >> 0x38) ^ (byte)((ulong)uVar22 >> 0x38),
                                       CONCAT16((byte)((ulong)uVar7 >> 0x30) ^
                                                (byte)((ulong)uVar22 >> 0x30),
                                                CONCAT15((byte)((ulong)uVar7 >> 0x28) ^
                                                         (byte)((ulong)uVar22 >> 0x28),
                                                         CONCAT14((byte)((ulong)uVar7 >> 0x20) ^
                                                                  (byte)((ulong)uVar22 >> 0x20),
                                                                  CONCAT13((byte)((ulong)uVar7 >>
                                                                                 0x18) ^
                                                                           (byte)((ulong)uVar22 >>
                                                                                 0x18),
                                                                           CONCAT12((byte)((ulong)
                                                  uVar7 >> 0x10) ^ (byte)((ulong)uVar22 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar7 >> 8) ^
                                                           (byte)((ulong)uVar22 >> 8),
                                                           (byte)uVar7 ^ (byte)uVar22)))))));
                puVar15[1] = CONCAT17((byte)((ulong)uVar28 >> 0x38) ^ (byte)((ulong)uVar26 >> 0x38),
                                      CONCAT16((byte)((ulong)uVar28 >> 0x30) ^
                                               (byte)((ulong)uVar26 >> 0x30),
                                               CONCAT15((byte)((ulong)uVar28 >> 0x28) ^
                                                        (byte)((ulong)uVar26 >> 0x28),
                                                        CONCAT14((byte)((ulong)uVar28 >> 0x20) ^
                                                                 (byte)((ulong)uVar26 >> 0x20),
                                                                 CONCAT13((byte)((ulong)uVar28 >>
                                                                                0x18) ^
                                                                          (byte)((ulong)uVar26 >>
                                                                                0x18),
                                                                          CONCAT12((byte)((ulong)
                                                  uVar28 >> 0x10) ^ (byte)((ulong)uVar26 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar28 >> 8) ^
                                                           (byte)((ulong)uVar26 >> 8),
                                                           (byte)uVar28 ^ (byte)uVar26)))))));
                *puVar15 = CONCAT17((byte)((ulong)uVar27 >> 0x38) ^ (byte)((ulong)uVar25 >> 0x38),
                                    CONCAT16((byte)((ulong)uVar27 >> 0x30) ^
                                             (byte)((ulong)uVar25 >> 0x30),
                                             CONCAT15((byte)((ulong)uVar27 >> 0x28) ^
                                                      (byte)((ulong)uVar25 >> 0x28),
                                                      CONCAT14((byte)((ulong)uVar27 >> 0x20) ^
                                                               (byte)((ulong)uVar25 >> 0x20),
                                                               CONCAT13((byte)((ulong)uVar27 >> 0x18
                                                                              ) ^ (byte)((ulong)
                                                  uVar25 >> 0x18),
                                                  CONCAT12((byte)((ulong)uVar27 >> 0x10) ^
                                                           (byte)((ulong)uVar25 >> 0x10),
                                                           CONCAT11((byte)((ulong)uVar27 >> 8) ^
                                                                    (byte)((ulong)uVar25 >> 8),
                                                                    (byte)uVar27 ^ (byte)uVar25)))))
                                            ));
                puVar15 = puVar15 + 4;
              } while (uVar13 != 0);
              if (uVar8 == uVar20) goto LAB_003fea00;
              uVar13 = uVar8;
              if ((uVar19 & 0x18) == 0) goto LAB_003fe9d4;
            }
            uVar8 = uVar20 & 0x7ffffff8;
            lVar9 = uVar13 - uVar8;
            puVar11 = (undefined8 *)(lVar6 + uVar13);
            puVar15 = (undefined8 *)(param_2 + uVar13 + uVar17 + 1);
            do {
              uVar7 = *puVar11;
              uVar23 = *puVar15;
              lVar9 = lVar9 + 8;
              *puVar15 = CONCAT17((byte)((ulong)uVar23 >> 0x38) ^ (byte)((ulong)uVar7 >> 0x38),
                                  CONCAT16((byte)((ulong)uVar23 >> 0x30) ^
                                           (byte)((ulong)uVar7 >> 0x30),
                                           CONCAT15((byte)((ulong)uVar23 >> 0x28) ^
                                                    (byte)((ulong)uVar7 >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar23 >> 0x20) ^
                                                             (byte)((ulong)uVar7 >> 0x20),
                                                             CONCAT13((byte)((ulong)uVar23 >> 0x18)
                                                                      ^ (byte)((ulong)uVar7 >> 0x18)
                                                                      ,CONCAT12((byte)((ulong)uVar23
                                                                                      >> 0x10) ^
                                                                                (byte)((ulong)uVar7
                                                                                      >> 0x10),
                                                                                CONCAT11((byte)((
                                                  ulong)uVar23 >> 8) ^ (byte)((ulong)uVar7 >> 8),
                                                  (byte)uVar23 ^ (byte)uVar7)))))));
              puVar11 = puVar11 + 1;
              puVar15 = puVar15 + 1;
            } while (lVar9 != 0);
            if (uVar8 == uVar20) goto LAB_003fea00;
          }
LAB_003fe9d4:
          lVar9 = uVar20 - uVar8;
          pbVar12 = param_2 + uVar8 + uVar17;
          pbVar14 = (byte *)(lVar6 + uVar8);
          do {
            pbVar12 = pbVar12 + 1;
            lVar9 = lVar9 + -1;
            *pbVar12 = *pbVar12 ^ *pbVar14;
            pbVar14 = pbVar14 + 1;
          } while (lVar9 != 0);
        }
LAB_003fea00:
        iVar5 = FUN_003feb30(local_a0,uVar17,puVar1,lVar18,lVar10);
        if (-1 < iVar5) {
          uVar2 = uVar3;
          if ((int)uVar3 < 2) {
            uVar2 = 1;
          }
          uVar17 = (ulong)uVar2;
          if ((int)uVar3 < 8) {
            uVar13 = 0;
LAB_003fead4:
            pbVar12 = param_2 + uVar13;
            lVar10 = uVar17 - uVar13;
            pbVar14 = local_a0 + uVar13;
            do {
              pbVar12 = pbVar12 + 1;
              lVar10 = lVar10 + -1;
              *pbVar12 = *pbVar12 ^ *pbVar14;
              pbVar14 = pbVar14 + 1;
            } while (lVar10 != 0);
          }
          else if ((int)uVar3 < 0x20) {
            uVar20 = 0;
LAB_003fea98:
            uVar13 = uVar17 & 0x7ffffff8;
            lVar10 = uVar20 - uVar13;
            pbVar12 = local_a0 + uVar20;
            puVar11 = (undefined8 *)(param_2 + uVar20 + 1);
            do {
              uVar7 = *(undefined8 *)pbVar12;
              uVar23 = *puVar11;
              lVar10 = lVar10 + 8;
              *puVar11 = CONCAT17((byte)((ulong)uVar23 >> 0x38) ^ (byte)((ulong)uVar7 >> 0x38),
                                  CONCAT16((byte)((ulong)uVar23 >> 0x30) ^
                                           (byte)((ulong)uVar7 >> 0x30),
                                           CONCAT15((byte)((ulong)uVar23 >> 0x28) ^
                                                    (byte)((ulong)uVar7 >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar23 >> 0x20) ^
                                                             (byte)((ulong)uVar7 >> 0x20),
                                                             CONCAT13((byte)((ulong)uVar23 >> 0x18)
                                                                      ^ (byte)((ulong)uVar7 >> 0x18)
                                                                      ,CONCAT12((byte)((ulong)uVar23
                                                                                      >> 0x10) ^
                                                                                (byte)((ulong)uVar7
                                                                                      >> 0x10),
                                                                                CONCAT11((byte)((
                                                  ulong)uVar23 >> 8) ^ (byte)((ulong)uVar7 >> 8),
                                                  (byte)uVar23 ^ (byte)uVar7)))))));
              pbVar12 = pbVar12 + 8;
              puVar11 = puVar11 + 1;
            } while (lVar10 != 0);
            if (uVar13 != uVar17) goto LAB_003fead4;
          }
          else {
            uVar13 = uVar17 & 0x7fffffe0;
            puVar11 = (undefined8 *)(param_2 + 0x11);
            puVar15 = auStack_98 + 1;
            uVar20 = uVar13;
            do {
              uVar23 = puVar11[-1];
              uVar7 = puVar11[-2];
              uVar28 = puVar11[1];
              uVar27 = *puVar11;
              uVar20 = uVar20 - 0x20;
              uVar24 = puVar15[-1];
              uVar22 = puVar15[-2];
              uVar26 = puVar15[1];
              uVar25 = *puVar15;
              puVar15 = puVar15 + 4;
              puVar11[-1] = CONCAT17((byte)((ulong)uVar23 >> 0x38) ^ (byte)((ulong)uVar24 >> 0x38),
                                     CONCAT16((byte)((ulong)uVar23 >> 0x30) ^
                                              (byte)((ulong)uVar24 >> 0x30),
                                              CONCAT15((byte)((ulong)uVar23 >> 0x28) ^
                                                       (byte)((ulong)uVar24 >> 0x28),
                                                       CONCAT14((byte)((ulong)uVar23 >> 0x20) ^
                                                                (byte)((ulong)uVar24 >> 0x20),
                                                                CONCAT13((byte)((ulong)uVar23 >>
                                                                               0x18) ^
                                                                         (byte)((ulong)uVar24 >>
                                                                               0x18),
                                                                         CONCAT12((byte)((ulong)
                                                  uVar23 >> 0x10) ^ (byte)((ulong)uVar24 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar23 >> 8) ^
                                                           (byte)((ulong)uVar24 >> 8),
                                                           (byte)uVar23 ^ (byte)uVar24)))))));
              puVar11[-2] = CONCAT17((byte)((ulong)uVar7 >> 0x38) ^ (byte)((ulong)uVar22 >> 0x38),
                                     CONCAT16((byte)((ulong)uVar7 >> 0x30) ^
                                              (byte)((ulong)uVar22 >> 0x30),
                                              CONCAT15((byte)((ulong)uVar7 >> 0x28) ^
                                                       (byte)((ulong)uVar22 >> 0x28),
                                                       CONCAT14((byte)((ulong)uVar7 >> 0x20) ^
                                                                (byte)((ulong)uVar22 >> 0x20),
                                                                CONCAT13((byte)((ulong)uVar7 >> 0x18
                                                                               ) ^ (byte)((ulong)
                                                  uVar22 >> 0x18),
                                                  CONCAT12((byte)((ulong)uVar7 >> 0x10) ^
                                                           (byte)((ulong)uVar22 >> 0x10),
                                                           CONCAT11((byte)((ulong)uVar7 >> 8) ^
                                                                    (byte)((ulong)uVar22 >> 8),
                                                                    (byte)uVar7 ^ (byte)uVar22))))))
                                    );
              puVar11[1] = CONCAT17((byte)((ulong)uVar28 >> 0x38) ^ (byte)((ulong)uVar26 >> 0x38),
                                    CONCAT16((byte)((ulong)uVar28 >> 0x30) ^
                                             (byte)((ulong)uVar26 >> 0x30),
                                             CONCAT15((byte)((ulong)uVar28 >> 0x28) ^
                                                      (byte)((ulong)uVar26 >> 0x28),
                                                      CONCAT14((byte)((ulong)uVar28 >> 0x20) ^
                                                               (byte)((ulong)uVar26 >> 0x20),
                                                               CONCAT13((byte)((ulong)uVar28 >> 0x18
                                                                              ) ^ (byte)((ulong)
                                                  uVar26 >> 0x18),
                                                  CONCAT12((byte)((ulong)uVar28 >> 0x10) ^
                                                           (byte)((ulong)uVar26 >> 0x10),
                                                           CONCAT11((byte)((ulong)uVar28 >> 8) ^
                                                                    (byte)((ulong)uVar26 >> 8),
                                                                    (byte)uVar28 ^ (byte)uVar26)))))
                                            ));
              *puVar11 = CONCAT17((byte)((ulong)uVar27 >> 0x38) ^ (byte)((ulong)uVar25 >> 0x38),
                                  CONCAT16((byte)((ulong)uVar27 >> 0x30) ^
                                           (byte)((ulong)uVar25 >> 0x30),
                                           CONCAT15((byte)((ulong)uVar27 >> 0x28) ^
                                                    (byte)((ulong)uVar25 >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar27 >> 0x20) ^
                                                             (byte)((ulong)uVar25 >> 0x20),
                                                             CONCAT13((byte)((ulong)uVar27 >> 0x18)
                                                                      ^ (byte)((ulong)uVar25 >> 0x18
                                                                              ),
                                                                      CONCAT12((byte)((ulong)uVar27
                                                                                     >> 0x10) ^
                                                                               (byte)((ulong)uVar25
                                                                                     >> 0x10),
                                                                               CONCAT11((byte)((
                                                  ulong)uVar27 >> 8) ^ (byte)((ulong)uVar25 >> 8),
                                                  (byte)uVar27 ^ (byte)uVar25)))))));
              puVar11 = puVar11 + 4;
            } while (uVar20 != 0);
            if (uVar13 != uVar17) {
              uVar20 = uVar13;
              if ((uVar2 & 0x18) == 0) goto LAB_003fead4;
              goto LAB_003fea98;
            }
          }
          uVar16 = 1;
          goto LAB_003feb04;
        }
      }
      uVar16 = 0;
      goto LAB_003feb04;
    }
  }
  uVar16 = 0;
  lVar6 = 0;
  uVar19 = 0;
LAB_003feb04:
  FUN_003c89b8(local_a0,0x40);
  FUN_003c893c(lVar6,(long)(int)uVar19,"crypto/rsa/rsa_oaep.c",0x87);
  return uVar16;
}


// ===== 003feb30  FUN_003feb30 =====

undefined4
FUN_003feb30(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined4 uVar6;
  long lVar7;
  uint uVar8;
  undefined1 auStack_a4 [64];
  uint local_64;
  
  lVar5 = FUN_0039d270();
  if ((lVar5 == 0) || (uVar3 = FUN_00389a38(param_5), (int)uVar3 < 0)) {
LAB_003fec34:
    uVar6 = 0xffffffff;
  }
  else {
    if (0 < param_2) {
      uVar8 = 0;
      lVar7 = 0;
      do {
        uVar2 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
        local_64 = uVar2 >> 0x10 | uVar2 << 0x10;
        iVar4 = FUN_0039d92c(lVar5,param_5,0);
        if (((iVar4 == 0) || (iVar4 = FUN_0039d938(lVar5,param_3,param_4), iVar4 == 0)) ||
           (iVar4 = FUN_0039d938(lVar5,&local_64,4), iVar4 == 0)) goto LAB_003fec34;
        lVar1 = lVar7 + (ulong)uVar3;
        if (param_2 < lVar1) {
          iVar4 = FUN_0039dac8(lVar5,auStack_a4,0);
          if (iVar4 == 0) goto LAB_003fec34;
          memcpy((void *)(param_1 + lVar7),auStack_a4,param_2 - lVar7);
          break;
        }
        iVar4 = FUN_0039dac8(lVar5,param_1 + lVar7,0);
        if (iVar4 == 0) goto LAB_003fec34;
        uVar8 = uVar8 + 1;
        lVar7 = lVar1;
      } while (lVar1 < param_2);
    }
    uVar6 = 0;
  }
  FUN_003c89b8(auStack_a4,0x40);
  FUN_0039d284(lVar5);
  return uVar6;
}


// ===== 003fec70  FUN_003fec70 =====

void FUN_003fec70(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  FUN_003fe6f4(0,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}


// ===== 003fecb4  FUN_003fecb4 =====

void FUN_003fecb4(void)

{
  FUN_003fecd8();
  return;
}


// ===== 003fecd8  FUN_003fecd8 =====

uint FUN_003fecd8(byte *param_1,uint param_2,long param_3,uint param_4,uint param_5,
                 undefined8 param_6,int param_7,long param_8,long param_9)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  byte *pbVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  uint uVar20;
  long lVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  byte *pbVar25;
  byte *pbVar26;
  undefined8 *puVar27;
  uint uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined1 auStack_ec [64];
  byte local_ac [8];
  undefined8 auStack_a4 [7];
  uint local_6c;
  
  if (param_8 == 0) {
    param_8 = FUN_003a4268();
  }
  lVar21 = param_8;
  if (param_9 != 0) {
    lVar21 = param_9;
  }
  uVar6 = FUN_00389a38(param_8);
  if ((int)param_2 < 1) {
    return 0xffffffff;
  }
  if ((int)param_4 < 1) {
    return 0xffffffff;
  }
  if (((int)param_5 < (int)param_4) || ((int)param_5 < (int)(uVar6 * 2 + 2))) {
    FUN_00379868(0xffffffff);
    FUN_0037995c("crypto/rsa/rsa_oaep.c",0xc6,"RSA_padding_check_PKCS1_OAEP_mgf1");
    FUN_00379a5c(4,0x79,0);
    return 0xffffffff;
  }
  uVar2 = ~uVar6 + param_5;
  uVar9 = (ulong)(int)uVar2;
  lVar10 = FUN_003c83a4(uVar9,"crypto/rsa/rsa_oaep.c",0xcb);
  uVar11 = (ulong)param_5;
  if ((lVar10 == 0) || (lVar12 = FUN_003c83a4(uVar11,"crypto/rsa/rsa_oaep.c",0xcf), lVar12 == 0)) {
    uVar8 = 0;
    pbVar26 = (byte *)0x0;
  }
  else {
    pbVar16 = (byte *)(param_3 + (ulong)param_4);
    uVar8 = 0;
    puVar19 = (undefined8 *)(uVar11 + (long)(int)uVar6 + lVar12 + 0x10);
    pbVar26 = (byte *)(lVar12 + uVar11);
    do {
      pbVar25 = pbVar26;
      puVar27 = puVar19;
      uVar8 = uVar8 + 1;
      bVar5 = param_4 == 0;
      pbVar16 = pbVar16 + -(ulong)(param_4 != 0);
      param_4 = param_4 - (param_4 != 0);
      bVar4 = *pbVar16;
      if (bVar5) {
        bVar4 = 0;
      }
      pbVar26 = pbVar25 + -1;
      *pbVar26 = bVar4;
      puVar19 = (undefined8 *)((long)puVar27 + -1);
    } while (uVar8 != param_5);
    lVar12 = (long)(int)uVar6;
    uVar8 = (int)(bVar4 - 1) >> 0x1f;
    iVar7 = FUN_003feb30(local_ac,lVar12,pbVar25 + lVar12,uVar9,lVar21);
    if (iVar7 == 0) {
      if (0 < (int)uVar6) {
        uVar14 = (ulong)uVar6;
        if (uVar6 < 8) {
          uVar17 = 0;
        }
        else {
          if (uVar6 < 0x20) {
            uVar18 = 0;
          }
          else {
            uVar17 = uVar14 & 0x7fffffe0;
            uVar18 = 0;
            do {
              uVar1 = uVar18 + 0x20;
              uVar32 = *(undefined8 *)((long)auStack_a4 + uVar18);
              uVar30 = *(undefined8 *)(local_ac + uVar18);
              uVar36 = *(undefined8 *)((long)auStack_a4 + uVar18 + 0x10);
              uVar35 = *(undefined8 *)((long)auStack_a4 + uVar18 + 8);
              uVar31 = *(undefined8 *)(pbVar26 + uVar18 + 9);
              uVar29 = *(undefined8 *)(pbVar26 + uVar18 + 1);
              uVar34 = *(undefined8 *)(pbVar26 + uVar18 + 0x19);
              uVar33 = *(undefined8 *)(pbVar26 + uVar18 + 0x11);
              *(ulong *)((long)auStack_a4 + uVar18) =
                   CONCAT17((byte)((ulong)uVar32 >> 0x38) ^ (byte)((ulong)uVar31 >> 0x38),
                            CONCAT16((byte)((ulong)uVar32 >> 0x30) ^ (byte)((ulong)uVar31 >> 0x30),
                                     CONCAT15((byte)((ulong)uVar32 >> 0x28) ^
                                              (byte)((ulong)uVar31 >> 0x28),
                                              CONCAT14((byte)((ulong)uVar32 >> 0x20) ^
                                                       (byte)((ulong)uVar31 >> 0x20),
                                                       CONCAT13((byte)((ulong)uVar32 >> 0x18) ^
                                                                (byte)((ulong)uVar31 >> 0x18),
                                                                CONCAT12((byte)((ulong)uVar32 >>
                                                                               0x10) ^
                                                                         (byte)((ulong)uVar31 >>
                                                                               0x10),
                                                                         CONCAT11((byte)((ulong)
                                                  uVar32 >> 8) ^ (byte)((ulong)uVar31 >> 8),
                                                  (byte)uVar32 ^ (byte)uVar31)))))));
              *(ulong *)(local_ac + uVar18) =
                   CONCAT17((byte)((ulong)uVar30 >> 0x38) ^ (byte)((ulong)uVar29 >> 0x38),
                            CONCAT16((byte)((ulong)uVar30 >> 0x30) ^ (byte)((ulong)uVar29 >> 0x30),
                                     CONCAT15((byte)((ulong)uVar30 >> 0x28) ^
                                              (byte)((ulong)uVar29 >> 0x28),
                                              CONCAT14((byte)((ulong)uVar30 >> 0x20) ^
                                                       (byte)((ulong)uVar29 >> 0x20),
                                                       CONCAT13((byte)((ulong)uVar30 >> 0x18) ^
                                                                (byte)((ulong)uVar29 >> 0x18),
                                                                CONCAT12((byte)((ulong)uVar30 >>
                                                                               0x10) ^
                                                                         (byte)((ulong)uVar29 >>
                                                                               0x10),
                                                                         CONCAT11((byte)((ulong)
                                                  uVar30 >> 8) ^ (byte)((ulong)uVar29 >> 8),
                                                  (byte)uVar30 ^ (byte)uVar29)))))));
              *(ulong *)((long)auStack_a4 + uVar18 + 0x10) =
                   CONCAT17((byte)((ulong)uVar36 >> 0x38) ^ (byte)((ulong)uVar34 >> 0x38),
                            CONCAT16((byte)((ulong)uVar36 >> 0x30) ^ (byte)((ulong)uVar34 >> 0x30),
                                     CONCAT15((byte)((ulong)uVar36 >> 0x28) ^
                                              (byte)((ulong)uVar34 >> 0x28),
                                              CONCAT14((byte)((ulong)uVar36 >> 0x20) ^
                                                       (byte)((ulong)uVar34 >> 0x20),
                                                       CONCAT13((byte)((ulong)uVar36 >> 0x18) ^
                                                                (byte)((ulong)uVar34 >> 0x18),
                                                                CONCAT12((byte)((ulong)uVar36 >>
                                                                               0x10) ^
                                                                         (byte)((ulong)uVar34 >>
                                                                               0x10),
                                                                         CONCAT11((byte)((ulong)
                                                  uVar36 >> 8) ^ (byte)((ulong)uVar34 >> 8),
                                                  (byte)uVar36 ^ (byte)uVar34)))))));
              *(ulong *)((long)auStack_a4 + uVar18 + 8) =
                   CONCAT17((byte)((ulong)uVar35 >> 0x38) ^ (byte)((ulong)uVar33 >> 0x38),
                            CONCAT16((byte)((ulong)uVar35 >> 0x30) ^ (byte)((ulong)uVar33 >> 0x30),
                                     CONCAT15((byte)((ulong)uVar35 >> 0x28) ^
                                              (byte)((ulong)uVar33 >> 0x28),
                                              CONCAT14((byte)((ulong)uVar35 >> 0x20) ^
                                                       (byte)((ulong)uVar33 >> 0x20),
                                                       CONCAT13((byte)((ulong)uVar35 >> 0x18) ^
                                                                (byte)((ulong)uVar33 >> 0x18),
                                                                CONCAT12((byte)((ulong)uVar35 >>
                                                                               0x10) ^
                                                                         (byte)((ulong)uVar33 >>
                                                                               0x10),
                                                                         CONCAT11((byte)((ulong)
                                                  uVar35 >> 8) ^ (byte)((ulong)uVar33 >> 8),
                                                  (byte)uVar35 ^ (byte)uVar33)))))));
              uVar18 = uVar1;
            } while (uVar17 != uVar1);
            if (uVar17 == uVar14) goto LAB_003fefd8;
            uVar18 = uVar17;
            if ((uVar6 & 0x18) == 0) goto LAB_003fefb8;
          }
          uVar17 = uVar14 & 0x7ffffff8;
          do {
            uVar31 = *(undefined8 *)(local_ac + uVar18);
            uVar29 = *(undefined8 *)(pbVar26 + uVar18 + 1);
            *(ulong *)(local_ac + uVar18) =
                 CONCAT17((byte)((ulong)uVar31 >> 0x38) ^ (byte)((ulong)uVar29 >> 0x38),
                          CONCAT16((byte)((ulong)uVar31 >> 0x30) ^ (byte)((ulong)uVar29 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar31 >> 0x28) ^
                                            (byte)((ulong)uVar29 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar31 >> 0x20) ^
                                                     (byte)((ulong)uVar29 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar31 >> 0x18) ^
                                                              (byte)((ulong)uVar29 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar31 >> 0x10)
                                                                       ^ (byte)((ulong)uVar29 >>
                                                                               0x10),
                                                                       CONCAT11((byte)((ulong)uVar31
                                                                                      >> 8) ^
                                                                                (byte)((ulong)uVar29
                                                                                      >> 8),
                                                                                (byte)uVar31 ^
                                                                                (byte)uVar29)))))));
            uVar18 = uVar18 + 8;
          } while (uVar17 != uVar18);
          if (uVar17 == uVar14) goto LAB_003fefd8;
        }
LAB_003fefb8:
        do {
          local_ac[uVar17] = local_ac[uVar17] ^ pbVar26[uVar17 + 1];
          uVar17 = uVar17 + 1;
        } while (uVar14 != uVar17);
      }
LAB_003fefd8:
      iVar7 = FUN_003feb30(lVar10,uVar9,local_ac,lVar12,lVar21);
      if (iVar7 != 0) {
        uVar28 = 0xffffffff;
        goto LAB_003fee8c;
      }
      if (0 < (int)uVar2) {
        if (uVar2 < 8) {
          uVar17 = 0;
        }
        else {
          if (uVar2 < 0x20) {
            uVar14 = 0;
          }
          else {
            uVar17 = uVar9 & 0x7fffffe0;
            puVar19 = (undefined8 *)(lVar10 + 0x10);
            uVar14 = uVar17;
            do {
              uVar31 = puVar19[-1];
              uVar29 = puVar19[-2];
              uVar36 = puVar19[1];
              uVar35 = *puVar19;
              uVar14 = uVar14 - 0x20;
              uVar32 = puVar27[-1];
              uVar30 = puVar27[-2];
              uVar34 = puVar27[1];
              uVar33 = *puVar27;
              puVar27 = puVar27 + 4;
              puVar19[-1] = CONCAT17((byte)((ulong)uVar31 >> 0x38) ^ (byte)((ulong)uVar32 >> 0x38),
                                     CONCAT16((byte)((ulong)uVar31 >> 0x30) ^
                                              (byte)((ulong)uVar32 >> 0x30),
                                              CONCAT15((byte)((ulong)uVar31 >> 0x28) ^
                                                       (byte)((ulong)uVar32 >> 0x28),
                                                       CONCAT14((byte)((ulong)uVar31 >> 0x20) ^
                                                                (byte)((ulong)uVar32 >> 0x20),
                                                                CONCAT13((byte)((ulong)uVar31 >>
                                                                               0x18) ^
                                                                         (byte)((ulong)uVar32 >>
                                                                               0x18),
                                                                         CONCAT12((byte)((ulong)
                                                  uVar31 >> 0x10) ^ (byte)((ulong)uVar32 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar31 >> 8) ^
                                                           (byte)((ulong)uVar32 >> 8),
                                                           (byte)uVar31 ^ (byte)uVar32)))))));
              puVar19[-2] = CONCAT17((byte)((ulong)uVar29 >> 0x38) ^ (byte)((ulong)uVar30 >> 0x38),
                                     CONCAT16((byte)((ulong)uVar29 >> 0x30) ^
                                              (byte)((ulong)uVar30 >> 0x30),
                                              CONCAT15((byte)((ulong)uVar29 >> 0x28) ^
                                                       (byte)((ulong)uVar30 >> 0x28),
                                                       CONCAT14((byte)((ulong)uVar29 >> 0x20) ^
                                                                (byte)((ulong)uVar30 >> 0x20),
                                                                CONCAT13((byte)((ulong)uVar29 >>
                                                                               0x18) ^
                                                                         (byte)((ulong)uVar30 >>
                                                                               0x18),
                                                                         CONCAT12((byte)((ulong)
                                                  uVar29 >> 0x10) ^ (byte)((ulong)uVar30 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar29 >> 8) ^
                                                           (byte)((ulong)uVar30 >> 8),
                                                           (byte)uVar29 ^ (byte)uVar30)))))));
              puVar19[1] = CONCAT17((byte)((ulong)uVar36 >> 0x38) ^ (byte)((ulong)uVar34 >> 0x38),
                                    CONCAT16((byte)((ulong)uVar36 >> 0x30) ^
                                             (byte)((ulong)uVar34 >> 0x30),
                                             CONCAT15((byte)((ulong)uVar36 >> 0x28) ^
                                                      (byte)((ulong)uVar34 >> 0x28),
                                                      CONCAT14((byte)((ulong)uVar36 >> 0x20) ^
                                                               (byte)((ulong)uVar34 >> 0x20),
                                                               CONCAT13((byte)((ulong)uVar36 >> 0x18
                                                                              ) ^ (byte)((ulong)
                                                  uVar34 >> 0x18),
                                                  CONCAT12((byte)((ulong)uVar36 >> 0x10) ^
                                                           (byte)((ulong)uVar34 >> 0x10),
                                                           CONCAT11((byte)((ulong)uVar36 >> 8) ^
                                                                    (byte)((ulong)uVar34 >> 8),
                                                                    (byte)uVar36 ^ (byte)uVar34)))))
                                            ));
              *puVar19 = CONCAT17((byte)((ulong)uVar35 >> 0x38) ^ (byte)((ulong)uVar33 >> 0x38),
                                  CONCAT16((byte)((ulong)uVar35 >> 0x30) ^
                                           (byte)((ulong)uVar33 >> 0x30),
                                           CONCAT15((byte)((ulong)uVar35 >> 0x28) ^
                                                    (byte)((ulong)uVar33 >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar35 >> 0x20) ^
                                                             (byte)((ulong)uVar33 >> 0x20),
                                                             CONCAT13((byte)((ulong)uVar35 >> 0x18)
                                                                      ^ (byte)((ulong)uVar33 >> 0x18
                                                                              ),
                                                                      CONCAT12((byte)((ulong)uVar35
                                                                                     >> 0x10) ^
                                                                               (byte)((ulong)uVar33
                                                                                     >> 0x10),
                                                                               CONCAT11((byte)((
                                                  ulong)uVar35 >> 8) ^ (byte)((ulong)uVar33 >> 8),
                                                  (byte)uVar35 ^ (byte)uVar33)))))));
              puVar19 = puVar19 + 4;
            } while (uVar14 != 0);
            if (uVar17 == uVar9) goto LAB_003ff0f4;
            uVar14 = uVar17;
            if ((uVar9 & 0x18) == 0) goto LAB_003ff0c4;
          }
          uVar17 = uVar9 & 0x7ffffff8;
          lVar21 = uVar14 + lVar12 + 1;
          lVar15 = uVar14 - uVar17;
          puVar19 = (undefined8 *)(lVar10 + uVar14);
          do {
            uVar29 = *(undefined8 *)(pbVar26 + lVar21);
            uVar31 = *puVar19;
            lVar15 = lVar15 + 8;
            lVar21 = lVar21 + 8;
            *puVar19 = CONCAT17((byte)((ulong)uVar31 >> 0x38) ^ (byte)((ulong)uVar29 >> 0x38),
                                CONCAT16((byte)((ulong)uVar31 >> 0x30) ^
                                         (byte)((ulong)uVar29 >> 0x30),
                                         CONCAT15((byte)((ulong)uVar31 >> 0x28) ^
                                                  (byte)((ulong)uVar29 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar31 >> 0x20) ^
                                                           (byte)((ulong)uVar29 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar31 >> 0x18) ^
                                                                    (byte)((ulong)uVar29 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar31 >>
                                                                                   0x10) ^
                                                                             (byte)((ulong)uVar29 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar31 >> 8) ^ (byte)((ulong)uVar29 >> 8),
                                                  (byte)uVar31 ^ (byte)uVar29)))))));
            puVar19 = puVar19 + 1;
          } while (lVar15 != 0);
          if (uVar17 == uVar9) goto LAB_003ff0f4;
        }
LAB_003ff0c4:
        lVar21 = uVar17 + lVar12;
        lVar15 = uVar9 - uVar17;
        pbVar16 = (byte *)(lVar10 + uVar17);
        do {
          lVar21 = lVar21 + 1;
          lVar15 = lVar15 + -1;
          *pbVar16 = *pbVar16 ^ pbVar26[lVar21];
          pbVar16 = pbVar16 + 1;
        } while (lVar15 != 0);
      }
LAB_003ff0f4:
      iVar7 = FUN_0039e518(param_6,(long)param_7,auStack_ec,0,param_8,0);
      if (iVar7 != 0) {
        uVar8 = FUN_003c46d4(lVar10,auStack_ec,lVar12);
        uVar22 = 0xffffffff;
        uVar20 = 0;
        uVar13 = (int)(uVar8 - 1 & (uVar8 ^ 0xffffffff) & bVar4 - 1) >> 0x1f;
        if ((int)uVar6 < (int)uVar2) {
          uVar22 = 0;
          iVar7 = (uVar6 << 1 ^ 0xffffffff) + param_5;
          pbVar16 = (byte *)(lVar10 + lVar12);
          uVar8 = uVar6;
          do {
            iVar7 = iVar7 + -1;
            uVar28 = (int)((*pbVar16 ^ 1) - 1) >> 0x1f;
            uVar3 = uVar28 & (uVar20 ^ 0xffffffff);
            uVar20 = uVar28 | uVar20;
            uVar13 = (uVar20 | (int)(*pbVar16 - 1) >> 0x1f) & uVar13;
            uVar28 = uVar3 & uVar8;
            uVar8 = uVar8 + 1;
            uVar22 = ~uVar3 & uVar22 | uVar28;
            pbVar16 = pbVar16 + 1;
          } while (iVar7 != 0);
          uVar22 = ~uVar22;
        }
        uVar28 = uVar2 + uVar22;
        uVar3 = uVar2 + ~uVar6;
        uVar23 = (int)(uVar3 - param_2 & uVar6 - uVar2) >> 0x1f;
        local_6c = ~uVar23;
        uVar8 = 0;
        if (-1 < (int)((param_2 - uVar28 ^ uVar28 | uVar28 ^ param_2) ^ param_2)) {
          uVar8 = uVar20;
        }
        uVar20 = local_6c & param_2 | uVar23 & uVar3;
        uVar14 = (ulong)uVar20;
        if (1 < (int)uVar3) {
          uVar23 = 1;
          do {
            if ((int)(uVar6 + 1) < (int)(uVar2 - uVar23)) {
              uVar24 = 0;
              if (-1 < (int)((uVar23 & uVar3 - uVar28) - 1)) {
                uVar24 = 0xff;
              }
              local_6c = ~uVar24;
              lVar21 = (long)(int)(uVar6 + 1);
              do {
                *(byte *)(lVar10 + lVar21) =
                     (byte)local_6c & *(byte *)(lVar10 + lVar21) |
                     (byte)uVar24 & *(byte *)(lVar10 + (int)uVar23 + lVar21);
                lVar21 = lVar21 + 1;
              } while (lVar21 < (int)(uVar2 - uVar23));
            }
            uVar23 = uVar23 * 2;
          } while ((int)uVar23 < (int)uVar3);
        }
        uVar8 = uVar8 & uVar13;
        if (0 < (int)uVar20) {
          pbVar16 = (byte *)(lVar10 + lVar12);
          param_5 = (uVar6 - uVar22) - param_5;
          do {
            param_5 = param_5 + 1;
            pbVar16 = pbVar16 + 1;
            uVar6 = uVar8 & 0xff & (int)(param_5 | uVar28) >> 0x1f;
            uVar14 = uVar14 - 1;
            local_6c = ~uVar6;
            *param_1 = (byte)local_6c & *param_1 | (byte)uVar6 & *pbVar16;
            param_1 = param_1 + 1;
          } while (uVar14 != 0);
        }
        FUN_00379868();
        FUN_0037995c("crypto/rsa/rsa_oaep.c",0x134,"RSA_padding_check_PKCS1_OAEP_mgf1");
        FUN_00379a5c(4,0x79,0);
        FUN_0037b17c(uVar8 & 1);
        goto LAB_003fee8c;
      }
    }
  }
  uVar28 = 0xffffffff;
LAB_003fee8c:
  FUN_003c89b8(local_ac,0x40);
  FUN_003c893c(lVar10,uVar9,"crypto/rsa/rsa_oaep.c",0x139);
  FUN_003c893c(pbVar26,uVar11,"crypto/rsa/rsa_oaep.c",0x13a);
  return ~uVar8 | uVar8 & uVar28;
}


// ===== 003ff340  FUN_003ff340 =====

ulong FUN_003ff340(long *param_1,void *param_2,uint param_3,long param_4,undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong local_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong local_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong local_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong local_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong local_f0;
  ulong uStack_e8;
  uint local_d4;
  ulong local_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong local_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong local_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong local_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong local_50;
  ulong uStack_48;
  
  lVar4 = *param_1;
  if (param_4 == 0) {
    if (lVar4 == 0) {
      return 0;
    }
  }
  else {
    if (lVar4 != param_4) {
      if (param_2 == (void *)0x0) {
        return 0;
      }
      if ((int)param_3 < 0) {
        return 0;
      }
    }
    *param_1 = param_4;
    lVar4 = param_4;
  }
  uVar1 = FUN_00389a84(lVar4);
  if ((uVar1 >> 1 & 1) != 0) {
    return 0;
  }
  if (param_2 != (void *)0x0) {
    uVar1 = FUN_003899ec(lVar4);
    if (0x90 < uVar1) {
      return 0;
    }
    if ((int)uVar1 < (int)param_3) {
      uVar3 = FUN_0039d92c(param_1[1],lVar4,param_5);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      uVar3 = FUN_0039d938(param_1[1],param_2,param_3);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      uVar3 = FUN_0039dac8(param_1[1],&local_170,&local_d4);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
    }
    else {
      if ((int)param_3 < 0) {
        return 0;
      }
      memcpy(&local_170,param_2,(ulong)param_3);
      local_d4 = param_3;
    }
    if (local_d4 != 0x90) {
      memset((void *)((long)&local_170 + (ulong)local_d4),0,(ulong)(0x90 - local_d4));
    }
    local_d0 = local_170 ^ 0x3636363636363636;
    uStack_c8 = uStack_168 ^ 0x3636363636363636;
    uStack_c0 = uStack_160 ^ 0x3636363636363636;
    uStack_b8 = uStack_158 ^ 0x3636363636363636;
    local_b0 = local_150 ^ 0x3636363636363636;
    uStack_a8 = uStack_148 ^ 0x3636363636363636;
    uStack_a0 = uStack_140 ^ 0x3636363636363636;
    uStack_98 = uStack_138 ^ 0x3636363636363636;
    uStack_80 = uStack_120 ^ 0x3636363636363636;
    uStack_78 = uStack_118 ^ 0x3636363636363636;
    local_90 = local_130 ^ 0x3636363636363636;
    uStack_88 = uStack_128 ^ 0x3636363636363636;
    local_70 = local_110 ^ 0x3636363636363636;
    uStack_68 = uStack_108 ^ 0x3636363636363636;
    local_50 = local_f0 ^ 0x3636363636363636;
    uStack_48 = uStack_e8 ^ 0x3636363636363636;
    uStack_58 = uStack_f8 ^ 0x3636363636363636;
    uStack_60 = uStack_100 ^ 0x3636363636363636;
    uVar3 = FUN_0039d92c(param_1[2],lVar4,param_5);
    if ((int)uVar3 == 0) goto LAB_003ff570;
    lVar5 = param_1[2];
    iVar2 = FUN_003899ec(lVar4);
    uVar3 = FUN_0039d938(lVar5,&local_d0,(long)iVar2);
    if ((int)uVar3 == 0) goto LAB_003ff570;
    local_d0 = local_170 ^ 0x5c5c5c5c5c5c5c5c;
    uStack_c8 = uStack_168 ^ 0x5c5c5c5c5c5c5c5c;
    uStack_c0 = uStack_160 ^ 0x5c5c5c5c5c5c5c5c;
    uStack_b8 = uStack_158 ^ 0x5c5c5c5c5c5c5c5c;
    local_b0 = local_150 ^ 0x5c5c5c5c5c5c5c5c;
    uStack_a8 = uStack_148 ^ 0x5c5c5c5c5c5c5c5c;
    uStack_a0 = uStack_140 ^ 0x5c5c5c5c5c5c5c5c;
    uStack_98 = uStack_138 ^ 0x5c5c5c5c5c5c5c5c;
    uStack_80 = uStack_120 ^ 0x5c5c5c5c5c5c5c5c;
    uStack_78 = uStack_118 ^ 0x5c5c5c5c5c5c5c5c;
    local_90 = local_130 ^ 0x5c5c5c5c5c5c5c5c;
    uStack_88 = uStack_128 ^ 0x5c5c5c5c5c5c5c5c;
    local_70 = local_110 ^ 0x5c5c5c5c5c5c5c5c;
    uStack_68 = uStack_108 ^ 0x5c5c5c5c5c5c5c5c;
    local_50 = local_f0 ^ 0x5c5c5c5c5c5c5c5c;
    uStack_48 = uStack_e8 ^ 0x5c5c5c5c5c5c5c5c;
    uStack_58 = uStack_f8 ^ 0x5c5c5c5c5c5c5c5c;
    uStack_60 = uStack_100 ^ 0x5c5c5c5c5c5c5c5c;
    uVar3 = FUN_0039d92c(param_1[3],lVar4,param_5);
    if ((int)uVar3 == 0) goto LAB_003ff570;
    lVar5 = param_1[3];
    iVar2 = FUN_003899ec(lVar4);
    uVar3 = FUN_0039d938(lVar5,&local_d0,(long)iVar2);
    if ((int)uVar3 == 0) goto LAB_003ff570;
  }
  iVar2 = FUN_0039e0a8(param_1[1],param_1[2]);
  uVar3 = (ulong)(iVar2 != 0);
  if (param_2 == (void *)0x0) {
    return uVar3;
  }
LAB_003ff570:
  FUN_003c89b8(&local_170,0x90);
  FUN_003c89b8(&local_d0,0x90);
  return uVar3 & 0xffffffff;
}


// ===== 003ff5dc  FUN_003ff5dc =====

void FUN_003ff5dc(undefined8 param_1,long param_2,ulong param_3,long param_4)

{
  if ((param_2 != 0) && (param_4 != 0)) {
    param_3 = param_3 & 0xffffffff;
    FUN_003ff62c();
  }
  FUN_003ff340(param_1,param_2,param_3,param_4,0);
  return;
}


// ===== 003ff62c  FUN_003ff62c =====

undefined8 FUN_003ff62c(undefined8 *param_1)

{
  long lVar1;
  
  FUN_0039d074(param_1[2]);
  FUN_0039d074(param_1[3]);
  FUN_0039d074(param_1[1]);
  *param_1 = 0;
  if (param_1[2] == 0) {
    lVar1 = FUN_0039d270();
    param_1[2] = lVar1;
    if (lVar1 == 0) goto LAB_003ff6b4;
  }
  if (param_1[3] == 0) {
    lVar1 = FUN_0039d270();
    param_1[3] = lVar1;
    if (lVar1 == 0) goto LAB_003ff6b4;
  }
  if (param_1[1] != 0) {
    return 1;
  }
  lVar1 = FUN_0039d270();
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    return 1;
  }
LAB_003ff6b4:
  FUN_0039d074(param_1[2]);
  FUN_0039d074(param_1[3]);
  FUN_0039d074(param_1[1]);
  *param_1 = 0;
  return 0;
}


// ===== 003ff6e0  FUN_003ff6e0 =====

undefined8 FUN_003ff6e0(long *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_0039d938(param_1[1]);
    return uVar1;
  }
  return 0;
}


// ===== 003ff6f8  FUN_003ff6f8 =====

undefined8 FUN_003ff6f8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_70 [64];
  undefined4 local_14;
  
  if ((((*param_1 != 0) && (iVar1 = FUN_0039dac8(param_1[1],auStack_70,&local_14), iVar1 != 0)) &&
      (iVar1 = FUN_0039e0a8(param_1[1],param_1[3]), iVar1 != 0)) &&
     ((iVar1 = FUN_0039d938(param_1[1],auStack_70,local_14), iVar1 != 0 &&
      (iVar1 = FUN_0039dac8(param_1[1],param_2,param_3), iVar1 != 0)))) {
    return 1;
  }
  return 0;
}


// ===== 003ff79c  FUN_003ff79c =====

uint FUN_003ff79c(undefined8 *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00389a38(*param_1);
  return uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
}


// ===== 003ff7b8  FUN_003ff7b8 =====

undefined8 * FUN_003ff7b8(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = (undefined8 *)FUN_003c8474(0x20,"crypto/hmac/hmac.c",0x93);
  if ((puVar2 != (undefined8 *)0x0) && (iVar1 = FUN_003ff62c(), iVar1 == 0)) {
    uVar3 = puVar2[2];
    FUN_0039d074(uVar3);
    uVar4 = puVar2[3];
    FUN_0039d074(uVar4);
    uVar5 = puVar2[1];
    FUN_0039d074(uVar5);
    *puVar2 = 0;
    FUN_0039d284(uVar3);
    FUN_0039d284(uVar4);
    FUN_0039d284(uVar5);
    FUN_003c86b4(puVar2,"crypto/hmac/hmac.c",0xad);
    return (undefined8 *)0x0;
  }
  return puVar2;
}


// ===== 003ff868  FUN_003ff868 =====

void FUN_003ff868(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_0039d074(param_1[2]);
    FUN_0039d074(param_1[3]);
    FUN_0039d074(param_1[1]);
    *param_1 = 0;
    FUN_0039d284(param_1[2]);
    FUN_0039d284(param_1[3]);
    FUN_0039d284(param_1[1]);
    FUN_003c86b4(param_1,"crypto/hmac/hmac.c",0xad);
    return;
  }
  return;
}


// ===== 003ff8d4  FUN_003ff8d4 =====

undefined8 FUN_003ff8d4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  
  if (param_1[2] == 0) {
    lVar2 = FUN_0039d270();
    param_1[2] = lVar2;
    if (lVar2 == 0) goto LAB_003ff96c;
  }
  if (param_1[3] == 0) {
    lVar2 = FUN_0039d270();
    param_1[3] = lVar2;
    if (lVar2 == 0) goto LAB_003ff96c;
  }
  if (param_1[1] == 0) {
    lVar2 = FUN_0039d270();
    param_1[1] = lVar2;
    if (lVar2 == 0) goto LAB_003ff96c;
  }
  iVar1 = FUN_0039e0a8(param_1[2],param_2[2]);
  if (((iVar1 != 0) && (iVar1 = FUN_0039e0a8(param_1[3],param_2[3]), iVar1 != 0)) &&
     (iVar1 = FUN_0039e0a8(param_1[1],param_2[1]), iVar1 != 0)) {
    *param_1 = *param_2;
    return 1;
  }
LAB_003ff96c:
  FUN_0039d074(param_1[2]);
  FUN_0039d074(param_1[3]);
  FUN_0039d074(param_1[1]);
  *param_1 = 0;
  return 0;
}


// ===== 003ff998  FUN_003ff998 =====

undefined8
FUN_003ff998(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5
            ,long param_6,undefined4 *param_7)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_58;
  
  iVar2 = FUN_00389a38();
  local_58 = 0;
  if (iVar2 < 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0038996c(param_1);
    lVar1 = 0x7ac329;
    if (param_6 != 0) {
      lVar1 = param_6;
    }
    uVar3 = FUN_004001c8(0,&DAT_001e0e65,0,uVar3,0,param_2,(long)param_3,param_4,param_5,lVar1,iVar2
                         ,&local_58);
    if (param_7 != (undefined4 *)0x0) {
      *param_7 = (int)local_58;
    }
  }
  return uVar3;
}


// ===== 003ffa60  FUN_003ffa60 =====

void FUN_003ffa60(long param_1,undefined4 param_2)

{
  FUN_00389e24(*(undefined8 *)(param_1 + 0x10));
  FUN_00389e24(*(undefined8 *)(param_1 + 0x18),param_2);
  FUN_00389e24(*(undefined8 *)(param_1 + 8),param_2);
  return;
}


// ===== 003ffa9c  FUN_003ffa9c =====

undefined8 FUN_003ffa9c(undefined8 *param_1)

{
  return *param_1;
}


// ===== 003ffaa4  FUN_003ffaa4 =====

long * FUN_003ffaa4(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  
  plVar2 = (long *)FUN_003c8474(0x10,"crypto/evp/mac_lib.c",0x18);
  if (plVar2 != (long *)0x0) {
    uVar3 = *param_1;
    pcVar5 = (code *)param_1[5];
    *plVar2 = (long)param_1;
    FUN_003d3bf8(uVar3);
    lVar4 = (*pcVar5)();
    plVar2[1] = lVar4;
    if ((lVar4 == 0) || (iVar1 = FUN_004007b0(param_1), iVar1 == 0)) {
      (*(code *)param_1[7])(lVar4);
      FUN_00379868();
      FUN_0037995c("crypto/evp/mac_lib.c",0x1f,"EVP_MAC_CTX_new");
      FUN_00379a5c(6,0x80006,0);
      FUN_003c86b4(plVar2,"crypto/evp/mac_lib.c",0x20);
      return (long *)0x0;
    }
  }
  return plVar2;
}


// ===== 003ffb7c  FUN_003ffb7c =====

void FUN_003ffb7c(long *param_1)

{
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x38))(param_1[1]);
    param_1[1] = 0;
    FUN_004007c8(*param_1);
    FUN_003c86b4(param_1,"crypto/evp/mac_lib.c",0x2f);
    return;
  }
  return;
}


// ===== 003ffbcc  FUN_003ffbcc =====

long * FUN_003ffbcc(long *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_1[1] == 0) {
    return (long *)0x0;
  }
  plVar2 = (long *)FUN_003c83a4(0x10,"crypto/evp/mac_lib.c",0x39);
  if (plVar2 == (long *)0x0) {
    return (long *)0x0;
  }
  lVar3 = *param_1;
  plVar2[1] = param_1[1];
  *plVar2 = lVar3;
  iVar1 = FUN_004007b0(*plVar2);
  if (iVar1 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/evp/mac_lib.c",0x3f,"EVP_MAC_CTX_dup");
    FUN_00379a5c(6,0x80006,0);
    uVar4 = 0x40;
  }
  else {
    lVar3 = (**(code **)(*param_1 + 0x30))(param_1[1]);
    plVar2[1] = lVar3;
    if (lVar3 != 0) {
      return plVar2;
    }
    (**(code **)(*plVar2 + 0x38))(0);
    plVar2[1] = 0;
    FUN_004007c8(*plVar2);
    uVar4 = 0x2f;
  }
  FUN_003c86b4(plVar2,"crypto/evp/mac_lib.c",uVar4);
  return (long *)0x0;
}


// ===== 003ffcc0  FUN_003ffcc0 =====

undefined8 FUN_003ffcc0(undefined8 *param_1)

{
  return *param_1;
}


// ===== 003ffcc8  FUN_003ffcc8 =====

undefined8 FUN_003ffcc8(long *param_1)

{
  int iVar1;
  code *pcVar2;
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
  if (param_1[1] != 0) {
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
    FUN_003ccbb0(&local_70,&DAT_001f543b,&local_8);
    pcVar2 = *(code **)(*param_1 + 0x78);
    if (pcVar2 == (code *)0x0) {
      pcVar2 = *(code **)(*param_1 + 0x70);
      if ((pcVar2 != (code *)0x0) && (iVar1 = (*pcVar2)(&local_70), iVar1 != 0)) {
        return local_8;
      }
    }
    else {
      iVar1 = (*pcVar2)(param_1[1],&local_70);
      if (iVar1 != 0) {
        return local_8;
      }
    }
  }
  return 0;
}


// ===== 003ffd78  FUN_003ffd78 =====

undefined8 FUN_003ffd78(long *param_1)

{
  int iVar1;
  code *pcVar2;
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
  if (param_1[1] != 0) {
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
    FUN_003ccbb0(&local_70,"block-size",&local_8);
    pcVar2 = *(code **)(*param_1 + 0x78);
    if (pcVar2 == (code *)0x0) {
      pcVar2 = *(code **)(*param_1 + 0x70);
      if ((pcVar2 != (code *)0x0) && (iVar1 = (*pcVar2)(&local_70), iVar1 != 0)) {
        return local_8;
      }
    }
    else {
      iVar1 = (*pcVar2)(param_1[1],&local_70);
      if (iVar1 != 0) {
        return local_8;
      }
    }
  }
  return 0;
}


// ===== 003ffe28  FUN_003ffe28 =====

void FUN_003ffe28(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x003ffe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))(param_1[1]);
  return;
}


// ===== 003ffe34  FUN_003ffe34 =====

void FUN_003ffe34(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x003ffe3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))(param_1[1]);
  return;
}


// ===== 003ffe40  FUN_003ffe40 =====

void FUN_003ffe40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_003ffe54(param_1,0,param_2,param_3,param_4);
  return;
}


// ===== 003ffe54  FUN_003ffe54 =====

undefined8 FUN_003ffe54(long *param_1,int param_2,long param_3,ulong *param_4,ulong param_5)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  int local_24;
  
  local_24 = param_2;
  if ((param_1 == (long *)0x0) || (*param_1 == 0)) {
    FUN_00379868();
    FUN_0037995c("crypto/evp/mac_lib.c",0x87,"evp_mac_final");
    uVar3 = 0xda;
    goto LAB_003fff1c;
  }
  if (*(long *)(*param_1 + 0x50) == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/evp/mac_lib.c",0x8b,"evp_mac_final");
    uVar3 = 0xbc;
    goto LAB_003fff1c;
  }
  local_b8 = 0;
  if (param_1[1] == 0) {
LAB_003ffff4:
    uVar1 = 0;
  }
  else {
    uStack_78 = 0;
    local_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    local_60 = 0;
    local_48 = 0;
    uStack_50 = 0;
    uStack_88 = 0;
    local_90 = 0;
    FUN_003ccbb0(&local_90,&DAT_001f543b,&local_b8);
    pcVar4 = *(code **)(*param_1 + 0x78);
    if (pcVar4 == (code *)0x0) {
      pcVar4 = *(code **)(*param_1 + 0x70);
      if (pcVar4 == (code *)0x0) goto LAB_003ffff4;
      iVar2 = (*pcVar4)(&local_90);
    }
    else {
      iVar2 = (*pcVar4)(param_1[1],&local_90);
    }
    uVar1 = local_b8;
    if (iVar2 == 0) goto LAB_003ffff4;
  }
  if (param_3 == 0) {
    if (param_4 != (ulong *)0x0) {
      *param_4 = uVar1;
      return 1;
    }
    FUN_00379868();
    FUN_0037995c("crypto/evp/mac_lib.c",0x92,"evp_mac_final");
    uVar3 = 0xc0102;
  }
  else {
    if (uVar1 <= param_5) {
      if (param_2 != 0) {
        FUN_003cb668(&local_90,&DAT_001f95c2,&local_24);
        FUN_003cdfcc(&local_b8);
        local_60 = uStack_b0;
        uStack_68 = local_b8;
        uStack_50 = uStack_a0;
        uStack_58 = local_a8;
        local_48 = local_98;
        if ((*(code **)(*param_1 + 0x80) != (code *)0x0) &&
           (iVar2 = (**(code **)(*param_1 + 0x80))(param_1[1],&local_90), iVar2 < 1)) {
          FUN_00379868();
          FUN_0037995c("crypto/evp/mac_lib.c",0xa1,"evp_mac_final");
          uVar3 = 0xe3;
          goto LAB_003fff1c;
        }
      }
      uVar3 = (**(code **)(*param_1 + 0x50))(param_1[1],param_3,&local_b8,param_5);
      if (param_4 == (ulong *)0x0) {
        return uVar3;
      }
      *param_4 = local_b8;
      return uVar3;
    }
    FUN_00379868();
    FUN_0037995c("crypto/evp/mac_lib.c",0x99,"evp_mac_final");
    uVar3 = 0x9b;
  }
LAB_003fff1c:
  FUN_00379a5c(6,uVar3,0);
  return 0;
}


// ===== 004000f4  FUN_004000f4 =====

void FUN_004000f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_003ffe54(param_1,1,param_2,0,param_3);
  return;
}


// ===== 00400108  FUN_00400108 =====

undefined8 FUN_00400108(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(code **)(param_1 + 0x70) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00400114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x70))(param_2);
    return uVar1;
  }
  return 1;
}


// ===== 00400120  FUN_00400120 =====

undefined8 FUN_00400120(long *param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(*param_1 + 0x78) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00400130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x78))(param_1[1]);
    return uVar1;
  }
  return 1;
}


// ===== 0040013c  FUN_0040013c =====

undefined8 FUN_0040013c(long *param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(*param_1 + 0x80) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0040014c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x80))(param_1[1]);
    return uVar1;
  }
  return 1;
}


// ===== 00400158  FUN_00400158 =====

undefined4 FUN_00400158(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


// ===== 00400160  FUN_00400160 =====

undefined8 FUN_00400160(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


// ===== 00400168  FUN_00400168 =====

undefined8 FUN_00400168(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


// ===== 00400170  FUN_00400170 =====

undefined8 * FUN_00400170(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    iVar1 = FUN_00383528(*param_1,*(undefined4 *)(param_1 + 1),0,param_2);
    param_1 = (undefined8 *)(ulong)(iVar1 != 0);
  }
  return param_1;
}


// ===== 004001a4  FUN_004001a4 =====

undefined8 FUN_004001a4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_00383588(*param_1,(int)param_1[1],param_2,param_3);
    return uVar1;
  }
  return 1;
}


// ===== 004001c8  FUN_004001c8 =====

long FUN_004001c8(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long in_x3;
  undefined8 in_x4;
  long in_x5;
  long in_x6;
  long in_x7;
  long lVar6;
  char *pcVar7;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 *in_stack_00000018;
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
  undefined8 local_48;
  
  lVar2 = FUN_00400424();
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
  if (in_stack_00000018 != (undefined8 *)0x0) {
    *in_stack_00000018 = 0;
  }
  if (lVar2 == 0) {
    return 0;
  }
  if (in_x3 != 0) {
    uVar3 = FUN_004008b0(lVar2);
    pcVar7 = "digest";
    lVar4 = FUN_003cb19c(uVar3,"digest");
    if (lVar4 == 0) {
      pcVar7 = "cipher";
      lVar4 = FUN_003cb19c(uVar3,"cipher");
      if (lVar4 == 0) {
        FUN_00379868();
        FUN_0037995c("crypto/evp/mac_lib.c",0x10c,"EVP_Q_mac");
        FUN_00379a5c(6,0x80106,0);
        in_stack_00000008 = 0;
        goto LAB_004003f8;
      }
    }
    FUN_003cd8cc(&local_b0,pcVar7,in_x3,0);
  }
  lVar4 = in_x7;
  if (in_x5 != 0 || in_x6 != 0) {
    lVar4 = in_x5;
  }
  plVar5 = (long *)FUN_003ffaa4(lVar2);
  if (plVar5 == (long *)0x0) {
    in_stack_00000008 = 0;
    goto LAB_004003f8;
  }
  lVar6 = *plVar5;
  if (*(code **)(lVar6 + 0x80) == (code *)0x0) {
LAB_004002d0:
    iVar1 = (**(code **)(lVar6 + 0x40))(plVar5[1],lVar4,in_x6,in_x4);
    if (((iVar1 == 0) ||
        (iVar1 = (**(code **)(*plVar5 + 0x48))(plVar5[1],in_x7,in_stack_00000000), iVar1 == 0)) ||
       (iVar1 = FUN_003ffe54(plVar5,0,in_stack_00000008,&local_48,in_stack_00000010), iVar1 == 0))
    goto LAB_004003c8;
    if (in_stack_00000008 == 0) {
      in_stack_00000008 = FUN_003c83a4(local_48,"crypto/evp/mac_lib.c",0x11d);
      if (in_stack_00000008 != 0) {
        iVar1 = FUN_003ffe54(plVar5,0,in_stack_00000008,0,local_48);
        if (iVar1 == 0) {
          FUN_003c86b4(in_stack_00000008,"crypto/evp/mac_lib.c",0x11f);
          goto LAB_004003c8;
        }
        goto LAB_00400324;
      }
    }
    else {
LAB_00400324:
      if (in_stack_00000018 != (undefined8 *)0x0) {
        *in_stack_00000018 = local_48;
      }
    }
  }
  else {
    iVar1 = (**(code **)(lVar6 + 0x80))(plVar5[1],&local_b0);
    if (iVar1 != 0) {
      lVar6 = *plVar5;
      if (*(code **)(lVar6 + 0x80) != (code *)0x0) {
        iVar1 = (**(code **)(lVar6 + 0x80))(plVar5[1],in_x4);
        if (iVar1 == 0) goto LAB_004003c8;
        lVar6 = *plVar5;
      }
      goto LAB_004002d0;
    }
LAB_004003c8:
    in_stack_00000008 = 0;
  }
  (**(code **)(*plVar5 + 0x38))(plVar5[1]);
  plVar5[1] = 0;
  FUN_004007c8(*plVar5);
  FUN_003c86b4(plVar5,"crypto/evp/mac_lib.c",0x2f);
LAB_004003f8:
  FUN_004007c8(lVar2);
  return in_stack_00000008;
}


// ===== 00400424  FUN_00400424 =====

void FUN_00400424(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00382990(param_1,3,param_2,param_3,FUN_0040044c,FUN_00400734,FUN_0040074c);
  return;
}


// ===== 0040044c  FUN_0040044c =====

long * FUN_0040044c(undefined4 param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_2 + 0x10);
  plVar1 = (long *)FUN_003c8474(0x88,"crypto/evp/mac_meth.c",0x31);
  if (plVar1 == (long *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/evp/mac_meth.c",0x42,"evp_mac_from_algorithm");
    FUN_00379a5c(6,0x80006,0);
    return (long *)0x0;
  }
  *(undefined4 *)(plVar1 + 1) = param_1;
  *(undefined4 *)(plVar1 + 4) = 1;
  lVar2 = FUN_003c34fc(param_2);
  plVar1[2] = lVar2;
  if (lVar2 == 0) {
    lVar6 = plVar1[4];
    iVar4 = (int)lVar6 + -1;
    *(int *)(plVar1 + 4) = iVar4;
    if (iVar4 == 0 || (int)lVar6 < 1) {
      FUN_003c86b4(0,"crypto/evp/mac_meth.c",0x27);
      FUN_003d27b0(*plVar1);
      FUN_003c86b4(plVar1,"crypto/evp/mac_meth.c",0x2a);
    }
    return (long *)0x0;
  }
  iVar4 = 0;
  iVar3 = 0;
  plVar1[3] = *(long *)(param_2 + 0x18);
  plVar5 = (long *)(lVar6 + 8);
LAB_004004d4:
  switch((int)plVar5[-1]) {
  case 0:
    goto switchD_004004ec_caseD_0;
  case 1:
    if (plVar1[5] == 0) {
      iVar3 = iVar3 + 1;
      plVar1[5] = *plVar5;
      plVar5 = plVar5 + 2;
      goto LAB_004004d4;
    }
    break;
  case 2:
    if (plVar1[6] == 0) {
      plVar1[6] = *plVar5;
      plVar5 = plVar5 + 2;
      goto LAB_004004d4;
    }
    break;
  case 3:
    if (plVar1[7] == 0) {
      iVar3 = iVar3 + 1;
      plVar1[7] = *plVar5;
      plVar5 = plVar5 + 2;
      goto LAB_004004d4;
    }
    break;
  case 4:
    if (plVar1[8] == 0) {
      iVar4 = iVar4 + 1;
      plVar1[8] = *plVar5;
      plVar5 = plVar5 + 2;
      goto LAB_004004d4;
    }
    break;
  case 5:
    if (plVar1[9] == 0) {
      iVar4 = iVar4 + 1;
      plVar1[9] = *plVar5;
      plVar5 = plVar5 + 2;
      goto LAB_004004d4;
    }
    break;
  case 6:
    if (plVar1[10] == 0) {
      iVar4 = iVar4 + 1;
      plVar1[10] = *plVar5;
      plVar5 = plVar5 + 2;
      goto LAB_004004d4;
    }
    break;
  case 7:
    if (plVar1[0xe] == 0) {
      plVar1[0xe] = *plVar5;
      plVar5 = plVar5 + 2;
      goto LAB_004004d4;
    }
    break;
  case 8:
    if (plVar1[0xf] == 0) {
      plVar1[0xf] = *plVar5;
      plVar5 = plVar5 + 2;
      goto LAB_004004d4;
    }
    break;
  case 9:
    if (plVar1[0x10] == 0) {
      plVar1[0x10] = *plVar5;
    }
    break;
  case 10:
    if (plVar1[0xb] == 0) {
      plVar1[0xb] = *plVar5;
      plVar5 = plVar5 + 2;
      goto LAB_004004d4;
    }
    break;
  case 0xb:
    if (plVar1[0xc] == 0) {
      plVar1[0xc] = *plVar5;
      plVar5 = plVar5 + 2;
      goto LAB_004004d4;
    }
    break;
  case 0xc:
    if (plVar1[0xd] != 0) break;
    plVar1[0xd] = *plVar5;
    plVar5 = plVar5 + 2;
    goto LAB_004004d4;
  }
  plVar5 = plVar5 + 2;
  goto LAB_004004d4;
switchD_004004ec_caseD_0:
  if ((iVar4 == 3) && (iVar3 == 2)) {
    *plVar1 = param_3;
    if (param_3 != 0) {
      FUN_003d2754(param_3);
    }
    return plVar1;
  }
  lVar6 = plVar1[4];
  iVar4 = (int)lVar6 + -1;
  *(int *)(plVar1 + 4) = iVar4;
  if (iVar4 == 0 || (int)lVar6 < 1) {
    FUN_003c86b4(lVar2,"crypto/evp/mac_meth.c",0x27);
    FUN_003d27b0(*plVar1);
    FUN_003c86b4(plVar1,"crypto/evp/mac_meth.c",0x2a);
  }
  FUN_00379868();
  FUN_0037995c("crypto/evp/mac_meth.c",0x9c,"evp_mac_from_algorithm");
  FUN_00379a5c(6,0xc1,0);
  return (long *)0x0;
}


// ===== 00400734  FUN_00400734 =====

undefined8 FUN_00400734(long param_1)

{
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  return 1;
}


// ===== 0040074c  FUN_0040074c =====

void FUN_0040074c(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (undefined8 *)0x0) &&
     (iVar1 = *(int *)(param_1 + 4), iVar2 = iVar1 + -1, *(int *)(param_1 + 4) = iVar2,
     iVar2 == 0 || iVar1 < 1)) {
    FUN_003c86b4(param_1[2],"crypto/evp/mac_meth.c",0x27);
    FUN_003d27b0(*param_1);
    FUN_003c86b4(param_1,"crypto/evp/mac_meth.c",0x2a);
    return;
  }
  return;
}


// ===== 004007b0  FUN_004007b0 =====

undefined8 FUN_004007b0(long param_1)

{
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  return 1;
}


// ===== 004007c8  FUN_004007c8 =====

void FUN_004007c8(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (undefined8 *)0x0) &&
     (iVar1 = *(int *)(param_1 + 4), iVar2 = iVar1 + -1, *(int *)(param_1 + 4) = iVar2,
     iVar2 == 0 || iVar1 < 1)) {
    FUN_003c86b4(param_1[2],"crypto/evp/mac_meth.c",0x27);
    FUN_003d27b0(*param_1);
    FUN_003c86b4(param_1,"crypto/evp/mac_meth.c",0x2a);
    return;
  }
  return;
}


// ===== 0040082c  FUN_0040082c =====

undefined8 FUN_0040082c(undefined8 *param_1)

{
  return *param_1;
}


// ===== 00400834  FUN_00400834 =====

undefined8 FUN_00400834(undefined8 *param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)param_1[0xb];
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    FUN_003d3bf8(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00400860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}


// ===== 0040086c  FUN_0040086c =====

undefined8 FUN_0040086c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (param_1[0xc] != 0) {
    uVar1 = FUN_003d3bf8(*param_1);
                    /* WARNING: Could not recover jumptable at 0x004008a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)param_1[0xc])(0,uVar1);
    return uVar1;
  }
  return 0;
}


// ===== 004008b0  FUN_004008b0 =====

undefined8 FUN_004008b0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (param_1[0xd] != 0) {
    uVar1 = FUN_003d3bf8(*param_1);
                    /* WARNING: Could not recover jumptable at 0x004008e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)param_1[0xd])(0,uVar1);
    return uVar1;
  }
  return 0;
}


// ===== 004008f4  FUN_004008f4 =====

undefined8 FUN_004008f4(long *param_1)

{
  undefined8 uVar1;
  
  if (((undefined8 *)*param_1)[0xc] != 0) {
    uVar1 = FUN_003d3bf8(*(undefined8 *)*param_1);
                    /* WARNING: Could not recover jumptable at 0x0040092c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x60))(param_1[1],uVar1);
    return uVar1;
  }
  return 0;
}


// ===== 00400938  FUN_00400938 =====

undefined8 FUN_00400938(long *param_1)

{
  undefined8 uVar1;
  
  if (((undefined8 *)*param_1)[0xd] != 0) {
    uVar1 = FUN_003d3bf8(*(undefined8 *)*param_1);
                    /* WARNING: Could not recover jumptable at 0x00400970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x68))(param_1[1],uVar1);
    return uVar1;
  }
  return 0;
}


// ===== 0040097c  FUN_0040097c =====

void FUN_0040097c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0038345c(param_1,3,param_2,param_3,FUN_0040044c,FUN_00400734,FUN_0040074c);
  return;
}


// ===== 004009a4  FUN_004009a4 =====

undefined8 FUN_004009a4(undefined2 *param_1,int param_2,void *param_3,uint param_4)

{
  undefined1 *puVar1;
  size_t __n;
  
  if (param_2 + -0xb < (int)param_4) {
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_pk1.c",0x27,"RSA_padding_add_PKCS1_type_1");
    FUN_00379a5c(4,0x6e,0);
    return 0;
  }
  __n = (size_t)(int)((param_2 - param_4) + -3);
  *param_1 = 0x100;
  memset(param_1 + 1,0xff,__n);
  puVar1 = (undefined1 *)((long)(param_1 + 1) + __n);
  *puVar1 = 0;
  memcpy(puVar1 + 1,param_3,(ulong)param_4);
  return 1;
}


// ===== 00400a54  FUN_00400a54 =====

uint FUN_00400a54(void *param_1,int param_2,char *param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_5 < 0xb) {
    return 0xffffffff;
  }
  if (param_5 == param_4) {
    if (*param_3 != '\0') {
      FUN_00379868();
      FUN_0037995c("crypto/rsa/rsa_pk1.c",0x4f,"RSA_padding_check_PKCS1_type_1");
      uVar1 = 0x8a;
      goto LAB_00400b28;
    }
    param_3 = param_3 + 1;
    param_4 = param_5 + -1;
  }
  if ((param_4 + 1 == param_5) && (*param_3 == '\x01')) {
    uVar2 = 0;
    param_3 = param_3 + 2;
    uVar3 = param_4 - 2;
    do {
      if (param_3[-1] != -1) {
        if (param_3[-1] != '\0') {
          FUN_00379868();
          FUN_0037995c("crypto/rsa/rsa_pk1.c",0x62,"RSA_padding_check_PKCS1_type_1");
          uVar1 = 0x66;
          goto LAB_00400b28;
        }
        if (uVar3 != 0xffffffff) {
          if (uVar2 < 8) {
            FUN_00379868();
            FUN_0037995c("crypto/rsa/rsa_pk1.c",0x6f,"RSA_padding_check_PKCS1_type_1");
            uVar1 = 0x67;
          }
          else {
            if ((int)uVar3 <= param_2) {
              memcpy(param_1,param_3,(ulong)uVar3);
              return uVar3;
            }
            FUN_00379868();
            FUN_0037995c("crypto/rsa/rsa_pk1.c",0x75,"RSA_padding_check_PKCS1_type_1");
            uVar1 = 0x6d;
          }
          goto LAB_00400b28;
        }
        break;
      }
      uVar3 = uVar3 - 1;
      uVar2 = uVar2 + 1;
      param_3 = param_3 + 1;
    } while (uVar3 != 0xffffffff);
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_pk1.c",0x6a,"RSA_padding_check_PKCS1_type_1");
    uVar1 = 0x71;
  }
  else {
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_pk1.c",0x56,"RSA_padding_check_PKCS1_type_1");
    uVar1 = 0x6a;
  }
LAB_00400b28:
  FUN_00379a5c(4,uVar1,0);
  return 0xffffffff;
}


// ===== 00400c1c  FUN_00400c1c =====

undefined8
FUN_00400c1c(undefined8 param_1,undefined2 *param_2,int param_3,void *param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  if (param_3 + -0xb < (int)param_5) {
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_pk1.c",0x85,"ossl_rsa_padding_add_PKCS1_type_2_ex");
    uVar4 = 0x6e;
  }
  else {
    if (-1 < (int)param_5) {
      iVar1 = (param_3 - param_5) + -3;
      pcVar5 = (char *)(param_2 + 1);
      *param_2 = 0x200;
      iVar2 = FUN_003edc30(param_1,pcVar5,(long)iVar1,0);
      if (iVar2 < 1) {
        return 0;
      }
      if (0 < iVar1) {
        iVar2 = 0;
        do {
          while (*pcVar5 == '\0') {
            iVar3 = FUN_003edc30(param_1,pcVar5,1,0);
            if (iVar3 < 1) {
              return 0;
            }
          }
          iVar2 = iVar2 + 1;
          pcVar5 = pcVar5 + 1;
        } while (iVar2 != iVar1);
      }
      *pcVar5 = '\0';
      memcpy(pcVar5 + 1,param_4,(ulong)param_5);
      return 1;
    }
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_pk1.c",0x88,"ossl_rsa_padding_add_PKCS1_type_2_ex");
    uVar4 = 0xb5;
  }
  FUN_00379a5c(4,uVar4,0);
  return 0;
}


// ===== 00400d6c  FUN_00400d6c =====

void FUN_00400d6c(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_00400c1c(0,param_1,param_2,param_3,param_4);
  return;
}


// ===== 00400d88  FUN_00400d88 =====

uint FUN_00400d88(long param_1,uint param_2,long param_3,uint param_4,uint param_5)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  byte bVar14;
  ulong uVar15;
  ulong uVar16;
  
  if ((0 < (int)param_2) && (0 < (int)param_4)) {
    if (((int)param_5 < (int)param_4) || ((int)param_5 < 0xb)) {
      FUN_00379868(0xffffffff);
      FUN_0037995c("crypto/rsa/rsa_pk1.c",0xbe,"RSA_padding_check_PKCS1_type_2");
      FUN_00379a5c(4,0x9f,0);
    }
    else {
      uVar15 = (ulong)param_5;
      uVar16 = (ulong)param_4;
      lVar4 = FUN_003c83a4(uVar15,"crypto/rsa/rsa_pk1.c",0xc2);
      if (lVar4 != 0) {
        pbVar11 = (byte *)(param_3 + uVar16);
        uVar8 = 0;
        pbVar7 = (byte *)(lVar4 + uVar15) + 0xb;
        pbVar6 = (byte *)(lVar4 + uVar15);
        do {
          pbVar5 = pbVar6;
          iVar9 = (int)uVar16;
          uVar8 = uVar8 + 1;
          pbVar7 = pbVar7 + -1;
          pbVar11 = pbVar11 + -(ulong)(iVar9 != 0);
          uVar16 = (ulong)(iVar9 - (uint)(iVar9 != 0));
          bVar14 = *pbVar11;
          if (iVar9 == 0) {
            bVar14 = 0;
          }
          pbVar6 = pbVar5 + -1;
          *pbVar6 = bVar14;
        } while (uVar8 != param_5);
        uVar8 = 0;
        if (2 < (int)param_5) {
          uVar10 = 0;
          uVar16 = 2;
          do {
            uVar12 = (int)(pbVar6[uVar16] - 1) >> 0x1f;
            uVar2 = uVar12 & (uVar10 ^ 0xffffffff);
            uVar10 = uVar12 | uVar10;
            uVar12 = (uint)uVar16;
            uVar16 = uVar16 + 1;
            uVar8 = ~uVar2 & uVar8 | uVar2 & uVar12;
          } while (uVar15 != uVar16);
        }
        uVar3 = param_5 - 0xb;
        uVar10 = ~uVar8 + param_5;
        uVar12 = (int)(uVar3 - param_2 & 10 - param_5) >> 0x1f;
        uVar2 = 0;
        if (-1 < (int)((param_2 - uVar10 ^ uVar10 | uVar10 ^ param_2) ^ param_2 |
                      uVar8 - 10 & (uVar8 ^ 0xffffffff))) {
          uVar2 = (int)((*pbVar5 ^ 2) - 1 & bVar14 - 1) >> 0x1f;
        }
        uVar12 = ~uVar12 & param_2 | uVar12 & uVar3;
        if (0xc < (int)param_5) {
          uVar13 = 1;
          do {
            if (0xb < (int)(param_5 - uVar13)) {
              bVar14 = 0;
              if (-1 < (int)((uVar13 & uVar3 - uVar10) - 1)) {
                bVar14 = 0xff;
              }
              lVar4 = 0;
              do {
                lVar1 = lVar4 + 1;
                pbVar6[lVar4 + 0xb] =
                     ~bVar14 & pbVar6[lVar4 + 0xb] | bVar14 & pbVar7[lVar4 + (int)uVar13];
                lVar4 = lVar1;
              } while ((ulong)(param_5 - uVar13) - 0xb != lVar1);
            }
            uVar13 = uVar13 * 2;
          } while ((int)uVar13 < (int)uVar3);
        }
        if (0 < (int)uVar12) {
          uVar16 = 0;
          do {
            bVar14 = (byte)uVar2 &
                     (char)((byte)((uVar8 - param_5) + 1 + (int)uVar16 >> 0x18) |
                           (byte)(uVar10 >> 0x18)) >> 7;
            *(byte *)(param_1 + uVar16) =
                 ~bVar14 & *(byte *)(param_1 + uVar16) | bVar14 & pbVar6[uVar16 + 0xb];
            uVar16 = uVar16 + 1;
          } while (uVar12 != uVar16);
        }
        FUN_003c893c(pbVar6,uVar15,"crypto/rsa/rsa_pk1.c",0x108);
        FUN_00379868();
        FUN_0037995c("crypto/rsa/rsa_pk1.c",0x10f,"RSA_padding_check_PKCS1_type_2");
        FUN_00379a5c(4,0x9f,0);
        FUN_0037b17c(uVar2 & 1);
        return ~uVar2 | uVar2 & uVar10;
      }
    }
  }
  return 0xffffffff;
}


// ===== 004010c0  FUN_004010c0 =====

ulong FUN_004010c0(undefined8 param_1,long param_2,uint param_3,byte *param_4,uint param_5,
                  uint param_6,undefined8 param_7)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  ushort local_160 [128];
  
  if ((((int)param_5 < 1) || ((int)param_3 < 1)) || (param_6 != param_5)) {
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_pk1.c",0x1a5,"ossl_rsa_padding_check_PKCS1_type_2");
    uVar3 = 0xc0103;
  }
  else {
    lVar6 = FUN_003c83a4((ulong)param_6,"crypto/rsa/rsa_pk1.c",0x1aa);
    if (lVar6 != 0) {
      iVar5 = FUN_00401404(param_1,lVar6,param_6,"message",7,param_7,param_6 << 3);
      if ((iVar5 < 0) ||
         (iVar5 = FUN_00401404(param_1,local_160,0x100,"length",6,param_7,0x800), iVar5 < 0)) {
        FUN_00379868();
        FUN_0037995c("crypto/rsa/rsa_pk1.c",0x209,"ossl_rsa_padding_check_PKCS1_type_2");
        FUN_00379a5c(4,0xc0103,0);
        uVar7 = 0xffffffff;
      }
      else {
        uVar7 = 0;
        uVar8 = 0;
        uVar9 = param_6 + 0xfff6 & 0xffff;
        uVar10 = uVar9 | uVar9 >> 1;
        uVar10 = uVar10 | uVar10 >> 2;
        uVar10 = uVar10 | uVar10 >> 4;
        do {
          uVar11 = (uVar10 | uVar10 >> 8) &
                   ((uint)(*(ushort *)((long)local_160 + uVar7) >> 8) |
                   (*(ushort *)((long)local_160 + uVar7) & 0xff00ff) << 8);
          bVar4 = uVar7 < 0xfe;
          uVar7 = uVar7 + 2;
          uVar8 = -(uint)(uVar9 <= uVar11) & uVar8 | -(uint)(uVar9 > uVar11) & uVar11;
        } while (bVar4);
        uVar9 = 0;
        if (2 < (int)param_6) {
          uVar10 = 0;
          uVar7 = 2;
          do {
            uVar11 = (int)(param_4[uVar7] - 1) >> 0x1f;
            uVar2 = uVar11 & (uVar10 ^ 0xffffffff);
            uVar10 = uVar11 | uVar10;
            uVar11 = (uint)uVar7;
            uVar7 = uVar7 + 1;
            uVar9 = ~uVar2 & uVar9 | uVar2 & uVar11;
          } while (param_6 != uVar7);
        }
        uVar7 = 0;
        uVar11 = param_6 - (uVar9 + 1);
        uVar10 = 0;
        if (-1 < (int)((param_3 - uVar11 ^ uVar11 | uVar11 ^ param_3) ^ param_3 |
                      uVar9 - 10 & (uVar9 ^ 0xffffffff))) {
          uVar10 = (int)((param_4[1] ^ 2) - 1 & *param_4 - 1) >> 0x1f;
        }
        uVar9 = ~uVar10 & param_6 - uVar8 | uVar10 & uVar9 + 1;
        if (((int)uVar9 < (int)param_6) && (0 < (int)param_3)) {
          lVar12 = (long)(int)uVar9;
          uVar7 = 0;
          do {
            lVar1 = lVar12 + 1 + uVar7;
            *(byte *)(param_2 + uVar7) =
                 ~(byte)uVar10 & *(byte *)(lVar6 + lVar12 + uVar7) |
                 (byte)uVar10 & param_4[uVar7 + lVar12];
            uVar7 = uVar7 + 1;
            if ((int)param_6 <= lVar1) break;
          } while (uVar7 < param_3);
        }
      }
      FUN_003c86b4(lVar6,"crypto/rsa/rsa_pk1.c",0x20a);
      goto LAB_004013e0;
    }
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_pk1.c",0x1ac,"ossl_rsa_padding_check_PKCS1_type_2");
    uVar3 = 0xc0100;
  }
  FUN_00379a5c(4,uVar3,0);
  uVar7 = 0xffffffff;
LAB_004013e0:
  return uVar7 & 0xffffffff;
}


// ===== 00401404  FUN_00401404 =====

undefined4
FUN_00401404(undefined8 param_1,long param_2,uint param_3,undefined8 param_4,undefined4 param_5,
            undefined8 param_6,uint param_7)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  ulong __n;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 local_8c;
  undefined1 auStack_88 [32];
  ushort local_68 [2];
  ushort local_64 [2];
  
  if (param_3 << 3 != (param_7 & 0xffff)) {
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_pk1.c",0x128,"ossl_rsa_prf");
    FUN_00379a5c(4,0xc0103,0);
    return 0xffffffff;
  }
  local_68[0] = (ushort)(param_7 >> 8) & 0xff | (ushort)((param_7 & 0xff00ff) << 8);
  uVar8 = (ulong)param_3;
  lVar3 = FUN_003ff7b8();
  if (lVar3 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_pk1.c",0x131,"ossl_rsa_prf");
    FUN_00379a5c(4,0xc0103,0);
    lVar4 = 0;
  }
  else {
    lVar4 = FUN_0039e6f4(param_1,"sha256",0);
    if (lVar4 == 0) {
      FUN_00379868();
      uVar5 = 0x13e;
    }
    else {
      iVar2 = FUN_003ff340(lVar3,param_6,0x20,lVar4,0);
      if (0 < iVar2) {
        if (0 < (int)param_3) {
          uVar7 = 0;
          __n = uVar8;
          uVar9 = 0;
          do {
            while( true ) {
              iVar2 = FUN_003ff340(lVar3,0,0,0,0);
              if (iVar2 < 1) {
                FUN_00379868();
                uVar5 = 0x149;
                goto LAB_0040165c;
              }
              local_64[0] = (ushort)(uVar7 >> 8) & 0xff | (ushort)((uVar7 & 0xff00ff) << 8);
              iVar2 = FUN_003ff6e0(lVar3,local_64,2);
              if (iVar2 < 1) {
                FUN_00379868();
                uVar5 = 0x151;
                goto LAB_0040165c;
              }
              iVar2 = FUN_003ff6e0(lVar3,param_4,param_5);
              if (iVar2 < 1) {
                FUN_00379868();
                uVar5 = 0x155;
                goto LAB_0040165c;
              }
              iVar2 = FUN_003ff6e0(lVar3,local_68,2);
              if (iVar2 < 1) {
                FUN_00379868();
                uVar5 = 0x159;
                goto LAB_0040165c;
              }
              uVar1 = uVar9 + 0x20;
              local_8c = 0x20;
              if (uVar1 <= uVar8) break;
              iVar2 = FUN_003ff6f8(lVar3,auStack_88,&local_8c);
              if (iVar2 < 1) {
                FUN_00379868();
                uVar5 = 0x165;
                goto LAB_0040165c;
              }
              memcpy((void *)(param_2 + uVar9),auStack_88,__n);
              uVar7 = uVar7 + 1;
              __n = __n - 0x20;
              uVar9 = uVar1;
              if (uVar8 <= uVar1) goto LAB_004015e8;
            }
            iVar2 = FUN_003ff6f8(lVar3,param_2 + uVar9,&local_8c);
            if (iVar2 < 1) {
              FUN_00379868();
              uVar5 = 0x16b;
              goto LAB_0040165c;
            }
            uVar7 = uVar7 + 1;
            __n = __n - 0x20;
            uVar9 = uVar1;
          } while (uVar1 < uVar8);
        }
LAB_004015e8:
        uVar6 = 0;
        goto LAB_00401678;
      }
      FUN_00379868();
      uVar5 = 0x143;
    }
LAB_0040165c:
    FUN_0037995c("crypto/rsa/rsa_pk1.c",uVar5,"ossl_rsa_prf");
    FUN_00379a5c(4,0xc0103,0);
  }
  uVar6 = 0xffffffff;
LAB_00401678:
  FUN_003ff868(lVar3);
  FUN_0039d050(lVar4);
  return uVar6;
}


// ===== 00401754  FUN_00401754 =====

undefined8
FUN_00401754(undefined8 param_1,long param_2,ulong param_3,byte *param_4,ulong param_5,uint param_6,
            uint param_7)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  short sVar4;
  undefined4 uVar5;
  undefined6 uVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  int iVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  undefined1 (*pauVar15) [16];
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  byte *pbVar21;
  short sVar22;
  short sVar23;
  short sVar24;
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
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  undefined8 uVar58;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  byte bVar91;
  undefined8 uVar85;
  byte bVar92;
  byte bVar93;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  byte bVar98;
  byte bVar99;
  byte bVar100;
  undefined8 uVar94;
  byte bVar101;
  byte bVar102;
  byte bVar105;
  byte bVar106;
  byte bVar107;
  byte bVar108;
  byte bVar109;
  byte bVar110;
  undefined8 uVar103;
  byte bVar111;
  ulong uVar104;
  byte bVar112;
  byte bVar115;
  byte bVar116;
  byte bVar117;
  byte bVar118;
  byte bVar119;
  byte bVar120;
  undefined8 uVar113;
  byte bVar121;
  ulong uVar114;
  byte bVar122;
  byte bVar125;
  byte bVar126;
  byte bVar127;
  byte bVar128;
  byte bVar129;
  byte bVar130;
  undefined8 uVar123;
  byte bVar131;
  ulong uVar124;
  byte bVar132;
  byte bVar134;
  byte bVar135;
  byte bVar136;
  byte bVar137;
  byte bVar138;
  byte bVar139;
  undefined8 uVar133;
  byte bVar140;
  byte bVar141;
  byte bVar143;
  byte bVar144;
  byte bVar145;
  byte bVar146;
  byte bVar147;
  byte bVar148;
  undefined8 uVar142;
  byte bVar149;
  byte bVar150;
  byte bVar152;
  byte bVar153;
  byte bVar154;
  byte bVar155;
  byte bVar156;
  byte bVar157;
  undefined8 uVar151;
  byte bVar158;
  byte bVar159;
  byte bVar161;
  byte bVar162;
  byte bVar163;
  byte bVar164;
  byte bVar165;
  byte bVar166;
  undefined8 uVar160;
  byte bVar167;
  undefined1 auVar168 [16];
  byte bVar169;
  byte bVar170;
  byte bVar171;
  byte bVar172;
  ulong uVar173;
  ulong uVar174;
  ulong uVar175;
  ulong uVar176;
  ulong uVar177;
  ulong uVar178;
  ulong uVar179;
  ulong uVar180;
  ulong uVar181;
  ulong uVar182;
  ulong uVar183;
  byte local_70 [48];
  
  if ((param_3 < 0x30) || (param_5 < 0x3b)) {
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_pk1.c",0x232,"ossl_rsa_padding_check_PKCS1_type_2_TLS");
    uVar58 = 0x9f;
LAB_00401918:
    FUN_00379a5c(4,uVar58,0);
    return 0xffffffff;
  }
  iVar10 = FUN_003edab0(param_1,local_70,0x30,0);
  if (iVar10 < 1) {
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_pk1.c",0x23c,"ossl_rsa_padding_check_PKCS1_type_2_TLS");
    uVar58 = 0xc0103;
    goto LAB_00401918;
  }
  uVar19 = (param_4[1] ^ 2) - 1 & *param_4 - 1;
  uVar13 = param_5 - 0x33;
  uVar14 = (int)uVar19 >> 0x1f;
  if (uVar13 < 8) {
    uVar20 = 2;
    uVar12 = 2;
  }
  else {
    uVar12 = 2;
    uVar17 = (uint)(param_5 - 0x34);
    uVar20 = 2;
    if ((((~uVar17 & 0xfffffffe) != 0) && (uVar17 < 0xfffffffd)) && (param_5 - 0x34 >> 0x20 == 0)) {
      if (uVar13 < 0x20) {
        uVar18 = 0;
      }
      else {
        bVar29 = 0xff;
        bVar30 = 0xff;
        bVar31 = 0xff;
        bVar32 = 0xff;
        bVar33 = 0xff;
        bVar34 = 0xff;
        bVar35 = 0xff;
        bVar36 = 0xff;
        bVar37 = 0xff;
        bVar38 = 0xff;
        bVar39 = 0xff;
        bVar40 = 0xff;
        bVar49 = 0xff;
        bVar50 = 0xff;
        bVar51 = 0xff;
        bVar52 = 0xff;
        bVar53 = 0xff;
        bVar54 = 0xff;
        bVar55 = 0xff;
        bVar56 = 0xff;
        bVar41 = 0xff;
        bVar42 = 0xff;
        bVar43 = 0xff;
        bVar44 = 0xff;
        bVar45 = 0xff;
        bVar46 = 0xff;
        bVar47 = 0xff;
        bVar48 = 0xff;
        uVar18 = uVar13 & 0xffffffffffffffe0;
        bVar68 = 0xff;
        bVar69 = 0xff;
        bVar70 = 0xff;
        bVar71 = 0xff;
        bVar72 = 0xff;
        bVar73 = 0xff;
        bVar74 = 0xff;
        bVar75 = 0xff;
        bVar57 = 0xff;
        bVar61 = 0xff;
        bVar62 = 0xff;
        bVar63 = 0xff;
        bVar64 = 0xff;
        bVar65 = 0xff;
        bVar66 = 0xff;
        bVar67 = 0xff;
        uVar58 = 0xffffffffffffffff;
        uVar85 = 0xffffffffffffffff;
        uVar94 = 0xffffffffffffffff;
        uVar103 = 0xffffffffffffffff;
        uVar133 = 0xffffffffffffffff;
        uVar142 = 0xffffffffffffffff;
        uVar113 = 0xffffffffffffffff;
        uVar123 = 0xffffffffffffffff;
        uVar151 = 0xffffffffffffffff;
        uVar160 = 0xffffffffffffffff;
        bVar28 = (byte)((int)uVar19 >> 0x1f);
        pauVar15 = (undefined1 (*) [16])(param_4 + 0x12);
        uVar20 = uVar18;
        bVar25 = bVar28;
        bVar26 = bVar28;
        bVar27 = bVar28;
        do {
          pauVar1 = pauVar15 + -1;
          auVar60 = *pauVar15;
          uVar20 = uVar20 - 0x20;
          pauVar15 = pauVar15 + 2;
          auVar168 = NEON_cmeq(*pauVar1,0,1);
          auVar60 = NEON_cmeq(auVar60,0,1);
          bVar93 = auVar168[0];
          bVar97 = auVar168[1];
          bVar127 = (char)bVar97 >> 7;
          bVar100 = auVar168[2];
          bVar102 = auVar168[3];
          bVar129 = (char)bVar102 >> 7;
          bVar107 = auVar168[4];
          bVar110 = auVar168[5];
          bVar131 = (char)bVar110 >> 7;
          bVar112 = auVar168[6];
          bVar117 = auVar168[7];
          bVar135 = (char)bVar117 >> 7;
          bVar95 = auVar168[8];
          bVar98 = auVar168[9];
          bVar101 = auVar168[10];
          bVar106 = auVar168[0xb];
          bVar77 = auVar168[0xc];
          bVar81 = auVar168[0xd];
          bVar86 = auVar168[0xe];
          bVar90 = auVar168[0xf];
          bVar115 = auVar60[8];
          bVar118 = auVar60[9];
          bVar139 = (char)bVar118 >> 7;
          bVar108 = auVar60[0xc];
          bVar111 = auVar60[0xd];
          bVar144 = (char)bVar111 >> 7;
          bVar116 = auVar60[0xe];
          bVar119 = auVar60[0xf];
          bVar146 = (char)bVar119 >> 7;
          bVar96 = auVar60[0];
          bVar99 = auVar60[1];
          bVar105 = auVar60[2];
          bVar109 = auVar60[3];
          bVar134 = auVar60[4];
          bVar138 = auVar60[5];
          bVar143 = auVar60[6];
          bVar147 = auVar60[7];
          sVar4 = (short)(char)bVar93;
          uVar5 = CONCAT13(bVar127,CONCAT12(bVar97,sVar4));
          uVar6 = CONCAT15((char)bVar100 >> 7,CONCAT14(bVar100,uVar5));
          bVar148 = (byte)(sVar4 >> 0xf);
          bVar150 = (byte)((int)uVar5 >> 0x1f);
          sVar22 = (short)((uint6)uVar6 >> 0x20);
          bVar152 = (byte)(sVar22 >> 0xf);
          bVar153 = (byte)((long)CONCAT17(bVar129,CONCAT16(bVar102,uVar6)) >> 0x3f);
          bVar79 = (byte)((short)(char)bVar77 >> 0xf);
          bVar83 = (byte)((short)(char)bVar81 >> 0xf);
          bVar88 = (byte)((short)(char)bVar86 >> 0xf);
          bVar92 = (byte)((short)(char)bVar90 >> 0xf);
          sVar7 = (short)(char)bVar107;
          uVar5 = CONCAT13(bVar131,CONCAT12(bVar110,sVar7));
          uVar6 = CONCAT15((char)bVar112 >> 7,CONCAT14(bVar112,uVar5));
          bVar126 = (byte)(sVar7 >> 0xf);
          bVar128 = (byte)((int)uVar5 >> 0x1f);
          sVar23 = (short)((uint6)uVar6 >> 0x20);
          bVar130 = (byte)(sVar23 >> 0xf);
          bVar132 = (byte)((long)CONCAT17(bVar135,CONCAT16(bVar117,uVar6)) >> 0x3f);
          sVar9 = (short)(char)bVar108;
          uVar5 = CONCAT13(bVar144,CONCAT12(bVar111,sVar9));
          uVar6 = CONCAT15((char)bVar116 >> 7,CONCAT14(bVar116,uVar5));
          bVar154 = (byte)(sVar9 >> 0xf);
          bVar158 = (byte)((int)uVar5 >> 0x1f);
          sVar24 = (short)((uint6)uVar6 >> 0x20);
          bVar163 = (byte)(sVar24 >> 0xf);
          bVar167 = (byte)((long)CONCAT17(bVar146,CONCAT16(bVar119,uVar6)) >> 0x3f);
          bVar169 = (byte)((short)(char)bVar96 >> 0xf);
          bVar170 = (byte)((short)(char)bVar99 >> 0xf);
          bVar171 = (byte)((short)(char)bVar105 >> 0xf);
          bVar172 = (byte)((short)(char)bVar109 >> 0xf);
          sVar8 = (short)(char)bVar115;
          bVar137 = (byte)(sVar8 >> 0xf);
          bVar141 = (byte)((int)CONCAT13(bVar139,CONCAT12(bVar118,sVar8)) >> 0x1f);
          uVar16 = CONCAT44((int)(((ulong)CONCAT12(bVar150,CONCAT11(bVar150,bVar127)) << 0x28) >>
                                 0x20),CONCAT13(bVar148,(int3)sVar4)) & 0xffffff00ffffff00;
          uVar104 = CONCAT44((int)(((ulong)CONCAT12(bVar153,CONCAT11(bVar153,bVar129)) << 0x28) >>
                                  0x20),CONCAT13(bVar152,(int3)sVar22)) & 0xffffff00ffffff00;
          uVar173 = CONCAT44((int)(short)(char)bVar98,(int)(short)(char)bVar95) & 0xffffff00ffffff00
          ;
          uVar174 = CONCAT44((int)(short)(char)bVar106,(int)(short)(char)bVar101) &
                    0xffffff00ffffff00;
          uVar175 = CONCAT44((int)(((ulong)CONCAT12(bVar83,CONCAT11(bVar83,(char)bVar81 >> 7)) <<
                                   0x28) >> 0x20),CONCAT13(bVar79,(int3)(short)(char)bVar77)) &
                    0xffffff00ffffff00;
          uVar176 = CONCAT44((int)(((ulong)CONCAT12(bVar92,CONCAT11(bVar92,(char)bVar90 >> 7)) <<
                                   0x28) >> 0x20),CONCAT13(bVar88,(int3)(short)(char)bVar86)) &
                    0xffffff00ffffff00;
          uVar114 = CONCAT44((int)(((ulong)CONCAT12(bVar128,CONCAT11(bVar128,bVar131)) << 0x28) >>
                                  0x20),CONCAT13(bVar126,(int3)sVar7)) & 0xffffff00ffffff00;
          uVar124 = CONCAT44((int)(((ulong)CONCAT12(bVar132,CONCAT11(bVar132,bVar135)) << 0x28) >>
                                  0x20),CONCAT13(bVar130,(int3)sVar23)) & 0xffffff00ffffff00;
          uVar179 = CONCAT44((int)(((ulong)CONCAT12(bVar158,CONCAT11(bVar158,bVar144)) << 0x28) >>
                                  0x20),CONCAT13(bVar154,(int3)sVar9)) & 0xffffff00ffffff00;
          uVar180 = CONCAT44((int)(((ulong)CONCAT12(bVar167,CONCAT11(bVar167,bVar146)) << 0x28) >>
                                  0x20),CONCAT13(bVar163,(int3)sVar24)) & 0xffffff00ffffff00;
          uVar177 = CONCAT44((int)(((ulong)CONCAT12(bVar170,CONCAT11(bVar170,(char)bVar99 >> 7)) <<
                                   0x28) >> 0x20),CONCAT13(bVar169,(int3)(short)(char)bVar96)) &
                    0xffffff00ffffff00;
          uVar178 = CONCAT44((int)(((ulong)CONCAT12(bVar172,CONCAT11(bVar172,(char)bVar109 >> 7)) <<
                                   0x28) >> 0x20),CONCAT13(bVar171,(int3)(short)(char)bVar105)) &
                    0xffffff00ffffff00;
          uVar181 = CONCAT44((int)(short)(char)bVar138,(int)(short)(char)bVar134) &
                    0xffffff00ffffff00;
          uVar182 = CONCAT44((int)(short)(char)bVar147,(int)(short)(char)bVar143) &
                    0xffffff00ffffff00;
          uVar183 = CONCAT44((int)(((ulong)CONCAT12(bVar141,CONCAT11(bVar141,bVar139)) << 0x28) >>
                                  0x20),CONCAT13(bVar137,(int3)sVar8)) & 0xffffff00ffffff00;
          bVar120 = (byte)((short)(char)bVar95 >> 0xf);
          bVar121 = (byte)((short)(char)bVar98 >> 0xf);
          bVar122 = (byte)((short)(char)bVar101 >> 0xf);
          bVar125 = (byte)((short)(char)bVar106 >> 0xf);
          bVar136 = (byte)((short)(char)bVar134 >> 0xf);
          bVar140 = (byte)((short)(char)bVar138 >> 0xf);
          bVar145 = (byte)((short)(char)bVar143 >> 0xf);
          bVar149 = (byte)((short)(char)bVar147 >> 0xf);
          bVar76 = ~bVar77 & (byte)uVar58;
          bVar77 = ((byte)(uVar175 >> 8) | ~((char)bVar77 >> 7)) & (byte)((ulong)uVar58 >> 8);
          bVar78 = ((byte)(uVar175 >> 0x10) | ~bVar79) & (byte)((ulong)uVar58 >> 0x10);
          bVar79 = ((byte)(uVar175 >> 0x18) | ~bVar79) & (byte)((ulong)uVar58 >> 0x18);
          bVar80 = ~bVar81 & (byte)((ulong)uVar58 >> 0x20);
          bVar81 = ((byte)(uVar175 >> 0x28) | ~((char)bVar81 >> 7)) & (byte)((ulong)uVar58 >> 0x28);
          bVar82 = ((byte)(uVar175 >> 0x30) | ~bVar83) & (byte)((ulong)uVar58 >> 0x30);
          bVar83 = ((byte)(uVar175 >> 0x38) | ~bVar83) & (byte)((ulong)uVar58 >> 0x38);
          uVar58 = CONCAT17(bVar83,CONCAT16(bVar82,CONCAT15(bVar81,CONCAT14(bVar80,CONCAT13(bVar79,
                                                  CONCAT12(bVar78,CONCAT11(bVar77,bVar76)))))));
          bVar84 = ~bVar86 & (byte)uVar85;
          bVar86 = ((byte)(uVar176 >> 8) | ~((char)bVar86 >> 7)) & (byte)((ulong)uVar85 >> 8);
          bVar87 = ((byte)(uVar176 >> 0x10) | ~bVar88) & (byte)((ulong)uVar85 >> 0x10);
          bVar88 = ((byte)(uVar176 >> 0x18) | ~bVar88) & (byte)((ulong)uVar85 >> 0x18);
          bVar89 = ~bVar90 & (byte)((ulong)uVar85 >> 0x20);
          bVar90 = ((byte)(uVar176 >> 0x28) | ~((char)bVar90 >> 7)) & (byte)((ulong)uVar85 >> 0x28);
          bVar91 = ((byte)(uVar176 >> 0x30) | ~bVar92) & (byte)((ulong)uVar85 >> 0x30);
          bVar92 = ((byte)(uVar176 >> 0x38) | ~bVar92) & (byte)((ulong)uVar85 >> 0x38);
          uVar85 = CONCAT17(bVar92,CONCAT16(bVar91,CONCAT15(bVar90,CONCAT14(bVar89,CONCAT13(bVar88,
                                                  CONCAT12(bVar87,CONCAT11(bVar86,bVar84)))))));
          bVar57 = ~bVar95 & bVar57;
          bVar61 = ((byte)(uVar173 >> 8) | ~((char)bVar95 >> 7)) & bVar61;
          bVar62 = ((byte)(uVar173 >> 0x10) | ~bVar120) & bVar62;
          bVar63 = ((byte)(uVar173 >> 0x18) | ~bVar120) & bVar63;
          bVar64 = ~bVar98 & bVar64;
          bVar65 = ((byte)(uVar173 >> 0x28) | ~((char)bVar98 >> 7)) & bVar65;
          bVar66 = ((byte)(uVar173 >> 0x30) | ~bVar121) & bVar66;
          bVar67 = ((byte)(uVar173 >> 0x38) | ~bVar121) & bVar67;
          bVar68 = ~bVar101 & bVar68;
          bVar69 = ((byte)(uVar174 >> 8) | ~((char)bVar101 >> 7)) & bVar69;
          bVar70 = ((byte)(uVar174 >> 0x10) | ~bVar122) & bVar70;
          bVar71 = ((byte)(uVar174 >> 0x18) | ~bVar122) & bVar71;
          bVar72 = ~bVar106 & bVar72;
          bVar73 = ((byte)(uVar174 >> 0x28) | ~((char)bVar106 >> 7)) & bVar73;
          bVar74 = ((byte)(uVar174 >> 0x30) | ~bVar125) & bVar74;
          bVar75 = ((byte)(uVar174 >> 0x38) | ~bVar125) & bVar75;
          bVar28 = ~bVar93 & bVar28;
          bVar25 = ((byte)(uVar16 >> 8) | ~((char)bVar93 >> 7)) & bVar25;
          bVar26 = ((byte)(uVar16 >> 0x10) | ~bVar148) & bVar26;
          bVar27 = ((byte)(uVar16 >> 0x18) | ~bVar148) & bVar27;
          bVar29 = ~bVar97 & bVar29;
          bVar30 = ((byte)(uVar16 >> 0x28) | ~bVar127) & bVar30;
          bVar31 = ((byte)(uVar16 >> 0x30) | ~bVar150) & bVar31;
          bVar32 = ((byte)(uVar16 >> 0x38) | ~bVar150) & bVar32;
          bVar33 = ~bVar100 & bVar33;
          bVar34 = ((byte)(uVar104 >> 8) | ~((char)bVar100 >> 7)) & bVar34;
          bVar35 = ((byte)(uVar104 >> 0x10) | ~bVar152) & bVar35;
          bVar36 = ((byte)(uVar104 >> 0x18) | ~bVar152) & bVar36;
          bVar37 = ~bVar102 & bVar37;
          bVar38 = ((byte)(uVar104 >> 0x28) | ~bVar129) & bVar38;
          bVar39 = ((byte)(uVar104 >> 0x30) | ~bVar153) & bVar39;
          bVar40 = ((byte)(uVar104 >> 0x38) | ~bVar153) & bVar40;
          bVar41 = ~bVar107 & bVar41;
          bVar42 = ((byte)(uVar114 >> 8) | ~((char)bVar107 >> 7)) & bVar42;
          bVar43 = ((byte)(uVar114 >> 0x10) | ~bVar126) & bVar43;
          bVar44 = ((byte)(uVar114 >> 0x18) | ~bVar126) & bVar44;
          bVar45 = ~bVar110 & bVar45;
          bVar46 = ((byte)(uVar114 >> 0x28) | ~bVar131) & bVar46;
          bVar47 = ((byte)(uVar114 >> 0x30) | ~bVar128) & bVar47;
          bVar48 = ((byte)(uVar114 >> 0x38) | ~bVar128) & bVar48;
          bVar49 = ~bVar112 & bVar49;
          bVar50 = ((byte)(uVar124 >> 8) | ~((char)bVar112 >> 7)) & bVar50;
          bVar51 = ((byte)(uVar124 >> 0x10) | ~bVar130) & bVar51;
          bVar52 = ((byte)(uVar124 >> 0x18) | ~bVar130) & bVar52;
          bVar53 = ~bVar117 & bVar53;
          bVar54 = ((byte)(uVar124 >> 0x28) | ~bVar135) & bVar54;
          bVar55 = ((byte)(uVar124 >> 0x30) | ~bVar132) & bVar55;
          bVar56 = ((byte)(uVar124 >> 0x38) | ~bVar132) & bVar56;
          bVar150 = ~bVar108 & (byte)uVar151;
          bVar152 = ((byte)(uVar179 >> 8) | ~((char)bVar108 >> 7)) & (byte)((ulong)uVar151 >> 8);
          bVar153 = ((byte)(uVar179 >> 0x10) | ~bVar154) & (byte)((ulong)uVar151 >> 0x10);
          bVar154 = ((byte)(uVar179 >> 0x18) | ~bVar154) & (byte)((ulong)uVar151 >> 0x18);
          bVar155 = ~bVar111 & (byte)((ulong)uVar151 >> 0x20);
          bVar156 = ((byte)(uVar179 >> 0x28) | ~bVar144) & (byte)((ulong)uVar151 >> 0x28);
          bVar157 = ((byte)(uVar179 >> 0x30) | ~bVar158) & (byte)((ulong)uVar151 >> 0x30);
          bVar158 = ((byte)(uVar179 >> 0x38) | ~bVar158) & (byte)((ulong)uVar151 >> 0x38);
          uVar151 = CONCAT17(bVar158,CONCAT16(bVar157,CONCAT15(bVar156,CONCAT14(bVar155,CONCAT13(
                                                  bVar154,CONCAT12(bVar153,CONCAT11(bVar152,bVar150)
                                                                  ))))));
          bVar159 = ~bVar116 & (byte)uVar160;
          bVar161 = ((byte)(uVar180 >> 8) | ~((char)bVar116 >> 7)) & (byte)((ulong)uVar160 >> 8);
          bVar162 = ((byte)(uVar180 >> 0x10) | ~bVar163) & (byte)((ulong)uVar160 >> 0x10);
          bVar163 = ((byte)(uVar180 >> 0x18) | ~bVar163) & (byte)((ulong)uVar160 >> 0x18);
          bVar164 = ~bVar119 & (byte)((ulong)uVar160 >> 0x20);
          bVar165 = ((byte)(uVar180 >> 0x28) | ~bVar146) & (byte)((ulong)uVar160 >> 0x28);
          bVar166 = ((byte)(uVar180 >> 0x30) | ~bVar167) & (byte)((ulong)uVar160 >> 0x30);
          bVar167 = ((byte)(uVar180 >> 0x38) | ~bVar167) & (byte)((ulong)uVar160 >> 0x38);
          uVar160 = CONCAT17(bVar167,CONCAT16(bVar166,CONCAT15(bVar165,CONCAT14(bVar164,CONCAT13(
                                                  bVar163,CONCAT12(bVar162,CONCAT11(bVar161,bVar159)
                                                                  ))))));
          bVar93 = ~bVar96 & (byte)uVar94;
          bVar95 = ((byte)(uVar177 >> 8) | ~((char)bVar96 >> 7)) & (byte)((ulong)uVar94 >> 8);
          bVar96 = ((byte)(uVar177 >> 0x10) | ~bVar169) & (byte)((ulong)uVar94 >> 0x10);
          bVar97 = ((byte)(uVar177 >> 0x18) | ~bVar169) & (byte)((ulong)uVar94 >> 0x18);
          bVar98 = ~bVar99 & (byte)((ulong)uVar94 >> 0x20);
          bVar99 = ((byte)(uVar177 >> 0x28) | ~((char)bVar99 >> 7)) & (byte)((ulong)uVar94 >> 0x28);
          bVar100 = ((byte)(uVar177 >> 0x30) | ~bVar170) & (byte)((ulong)uVar94 >> 0x30);
          bVar101 = ((byte)(uVar177 >> 0x38) | ~bVar170) & (byte)((ulong)uVar94 >> 0x38);
          uVar94 = CONCAT17(bVar101,CONCAT16(bVar100,CONCAT15(bVar99,CONCAT14(bVar98,CONCAT13(bVar97
                                                  ,CONCAT12(bVar96,CONCAT11(bVar95,bVar93)))))));
          bVar102 = ~bVar105 & (byte)uVar103;
          bVar105 = ((byte)(uVar178 >> 8) | ~((char)bVar105 >> 7)) & (byte)((ulong)uVar103 >> 8);
          bVar106 = ((byte)(uVar178 >> 0x10) | ~bVar171) & (byte)((ulong)uVar103 >> 0x10);
          bVar107 = ((byte)(uVar178 >> 0x18) | ~bVar171) & (byte)((ulong)uVar103 >> 0x18);
          bVar108 = ~bVar109 & (byte)((ulong)uVar103 >> 0x20);
          bVar109 = ((byte)(uVar178 >> 0x28) | ~((char)bVar109 >> 7)) &
                    (byte)((ulong)uVar103 >> 0x28);
          bVar110 = ((byte)(uVar178 >> 0x30) | ~bVar172) & (byte)((ulong)uVar103 >> 0x30);
          bVar111 = ((byte)(uVar178 >> 0x38) | ~bVar172) & (byte)((ulong)uVar103 >> 0x38);
          uVar103 = CONCAT17(bVar111,CONCAT16(bVar110,CONCAT15(bVar109,CONCAT14(bVar108,CONCAT13(
                                                  bVar107,CONCAT12(bVar106,CONCAT11(bVar105,bVar102)
                                                                  ))))));
          bVar112 = ~bVar115 & (byte)uVar113;
          bVar115 = ((byte)(uVar183 >> 8) | ~((char)bVar115 >> 7)) & (byte)((ulong)uVar113 >> 8);
          bVar116 = ((byte)(uVar183 >> 0x10) | ~bVar137) & (byte)((ulong)uVar113 >> 0x10);
          bVar117 = ((byte)(uVar183 >> 0x18) | ~bVar137) & (byte)((ulong)uVar113 >> 0x18);
          bVar118 = ~bVar118 & (byte)((ulong)uVar113 >> 0x20);
          bVar119 = ((byte)(uVar183 >> 0x28) | ~bVar139) & (byte)((ulong)uVar113 >> 0x28);
          bVar120 = ((byte)(uVar183 >> 0x30) | ~bVar141) & (byte)((ulong)uVar113 >> 0x30);
          bVar121 = ((byte)(uVar183 >> 0x38) | ~bVar141) & (byte)((ulong)uVar113 >> 0x38);
          uVar113 = CONCAT17(bVar121,CONCAT16(bVar120,CONCAT15(bVar119,CONCAT14(bVar118,CONCAT13(
                                                  bVar117,CONCAT12(bVar116,CONCAT11(bVar115,bVar112)
                                                                  ))))));
          bVar122 = ~auVar60[10] & (byte)uVar123;
          bVar125 = (byte)((ulong)uVar123 >> 8);
          bVar126 = (byte)((ulong)uVar123 >> 0x10);
          bVar127 = (byte)((ulong)uVar123 >> 0x18);
          bVar128 = ~auVar60[0xb] & (byte)((ulong)uVar123 >> 0x20);
          bVar129 = (byte)((ulong)uVar123 >> 0x28);
          bVar130 = (byte)((ulong)uVar123 >> 0x30);
          bVar131 = (byte)((ulong)uVar123 >> 0x38);
          uVar123 = CONCAT17(bVar131,CONCAT16(bVar130,CONCAT15(bVar129,CONCAT14(bVar128,CONCAT13(
                                                  bVar127,CONCAT12(bVar126,CONCAT11(bVar125,bVar122)
                                                                  ))))));
          bVar132 = ~bVar134 & (byte)uVar133;
          bVar134 = ((byte)(uVar181 >> 8) | ~((char)bVar134 >> 7)) & (byte)((ulong)uVar133 >> 8);
          bVar135 = ((byte)(uVar181 >> 0x10) | ~bVar136) & (byte)((ulong)uVar133 >> 0x10);
          bVar136 = ((byte)(uVar181 >> 0x18) | ~bVar136) & (byte)((ulong)uVar133 >> 0x18);
          bVar137 = ~bVar138 & (byte)((ulong)uVar133 >> 0x20);
          bVar138 = ((byte)(uVar181 >> 0x28) | ~((char)bVar138 >> 7)) &
                    (byte)((ulong)uVar133 >> 0x28);
          bVar139 = ((byte)(uVar181 >> 0x30) | ~bVar140) & (byte)((ulong)uVar133 >> 0x30);
          bVar140 = ((byte)(uVar181 >> 0x38) | ~bVar140) & (byte)((ulong)uVar133 >> 0x38);
          uVar133 = CONCAT17(bVar140,CONCAT16(bVar139,CONCAT15(bVar138,CONCAT14(bVar137,CONCAT13(
                                                  bVar136,CONCAT12(bVar135,CONCAT11(bVar134,bVar132)
                                                                  ))))));
          bVar141 = ~bVar143 & (byte)uVar142;
          bVar143 = ((byte)(uVar182 >> 8) | ~((char)bVar143 >> 7)) & (byte)((ulong)uVar142 >> 8);
          bVar144 = ((byte)(uVar182 >> 0x10) | ~bVar145) & (byte)((ulong)uVar142 >> 0x10);
          bVar145 = ((byte)(uVar182 >> 0x18) | ~bVar145) & (byte)((ulong)uVar142 >> 0x18);
          bVar146 = ~bVar147 & (byte)((ulong)uVar142 >> 0x20);
          bVar147 = ((byte)(uVar182 >> 0x28) | ~((char)bVar147 >> 7)) &
                    (byte)((ulong)uVar142 >> 0x28);
          bVar148 = ((byte)(uVar182 >> 0x30) | ~bVar149) & (byte)((ulong)uVar142 >> 0x30);
          bVar149 = ((byte)(uVar182 >> 0x38) | ~bVar149) & (byte)((ulong)uVar142 >> 0x38);
          uVar142 = CONCAT17(bVar149,CONCAT16(bVar148,CONCAT15(bVar147,CONCAT14(bVar146,CONCAT13(
                                                  bVar145,CONCAT12(bVar144,CONCAT11(bVar143,bVar141)
                                                                  ))))));
        } while (uVar20 != 0);
        bVar28 = bVar93 & bVar28 & bVar112 & bVar57 & bVar132 & bVar41 & bVar150 & bVar76;
        bVar25 = bVar95 & bVar25 & bVar115 & bVar61 & bVar134 & bVar42 & bVar152 & bVar77;
        bVar26 = bVar96 & bVar26 & bVar116 & bVar62 & bVar135 & bVar43 & bVar153 & bVar78;
        bVar27 = bVar97 & bVar27 & bVar117 & bVar63 & bVar136 & bVar44 & bVar154 & bVar79;
        bVar29 = bVar98 & bVar29 & bVar118 & bVar64 & bVar137 & bVar45 & bVar155 & bVar80;
        bVar30 = bVar99 & bVar30 & bVar119 & bVar65 & bVar138 & bVar46 & bVar156 & bVar81;
        bVar31 = bVar100 & bVar31 & bVar120 & bVar66 & bVar139 & bVar47 & bVar157 & bVar82;
        bVar32 = bVar101 & bVar32 & bVar121 & bVar67 & bVar140 & bVar48 & bVar158 & bVar83;
        bVar33 = bVar102 & bVar33 & bVar122 & bVar68 & bVar141 & bVar49 & bVar159 & bVar84;
        bVar34 = bVar105 & bVar34 & bVar125 & bVar69 & bVar143 & bVar50 & bVar161 & bVar86;
        bVar35 = bVar106 & bVar35 & bVar126 & bVar70 & bVar144 & bVar51 & bVar162 & bVar87;
        bVar36 = bVar107 & bVar36 & bVar127 & bVar71 & bVar145 & bVar52 & bVar163 & bVar88;
        bVar37 = bVar108 & bVar37 & bVar128 & bVar72 & bVar146 & bVar53 & bVar164 & bVar89;
        bVar38 = bVar109 & bVar38 & bVar129 & bVar73 & bVar147 & bVar54 & bVar165 & bVar90;
        bVar39 = bVar110 & bVar39 & bVar130 & bVar74 & bVar148 & bVar55 & bVar166 & bVar91;
        bVar40 = bVar111 & bVar40 & bVar131 & bVar75 & bVar149 & bVar56 & bVar167 & bVar92;
        auVar60[1] = bVar25;
        auVar60[0] = bVar28;
        auVar60[2] = bVar26;
        auVar60[3] = bVar27;
        auVar60[4] = bVar29;
        auVar60[5] = bVar30;
        auVar60[6] = bVar31;
        auVar60[7] = bVar32;
        auVar60[8] = bVar33;
        auVar60[9] = bVar34;
        auVar60[10] = bVar35;
        auVar60[0xb] = bVar36;
        auVar60[0xc] = bVar37;
        auVar60[0xd] = bVar38;
        auVar60[0xe] = bVar39;
        auVar60[0xf] = bVar40;
        auVar168[1] = bVar25;
        auVar168[0] = bVar28;
        auVar168[2] = bVar26;
        auVar168[3] = bVar27;
        auVar168[4] = bVar29;
        auVar168[5] = bVar30;
        auVar168[6] = bVar31;
        auVar168[7] = bVar32;
        auVar168[8] = bVar33;
        auVar168[9] = bVar34;
        auVar168[10] = bVar35;
        auVar168[0xb] = bVar36;
        auVar168[0xc] = bVar37;
        auVar168[0xd] = bVar38;
        auVar168[0xe] = bVar39;
        auVar168[0xf] = bVar40;
        auVar60 = NEON_ext(auVar60,auVar168,8,1);
        uVar20 = CONCAT17(bVar32,CONCAT16(bVar31,CONCAT15(bVar30,CONCAT14(bVar29,CONCAT13(bVar27,
                                                  CONCAT12(bVar26,CONCAT11(bVar25,bVar28))))))) &
                 auVar60._0_8_;
        uVar14 = (uint)uVar20 & (uint)(uVar20 >> 0x20);
        if (uVar13 == uVar18) goto LAB_00401804;
        if ((uVar13 & 0x18) == 0) {
          uVar12 = (uint)uVar18 | 2;
          uVar20 = uVar18 | 2;
          goto LAB_004017e4;
        }
      }
      bVar29 = 0xff;
      bVar30 = 0xff;
      bVar31 = 0xff;
      bVar32 = 0xff;
      bVar33 = 0xff;
      bVar34 = 0xff;
      bVar35 = 0xff;
      bVar36 = 0xff;
      bVar37 = 0xff;
      bVar38 = 0xff;
      bVar39 = 0xff;
      bVar40 = 0xff;
      bVar49 = 0xff;
      bVar50 = 0xff;
      bVar51 = 0xff;
      bVar52 = 0xff;
      bVar53 = 0xff;
      bVar54 = 0xff;
      bVar55 = 0xff;
      bVar56 = 0xff;
      bVar41 = 0xff;
      bVar42 = 0xff;
      bVar43 = 0xff;
      bVar44 = 0xff;
      bVar45 = 0xff;
      bVar46 = 0xff;
      bVar47 = 0xff;
      bVar48 = 0xff;
      bVar25 = (byte)uVar14;
      bVar26 = (byte)(uVar14 >> 8);
      bVar27 = (byte)(uVar14 >> 0x10);
      bVar28 = (byte)(uVar14 >> 0x18);
      uVar16 = uVar13 & 0xfffffffffffffff8;
      uVar20 = uVar16 | 2;
      uVar12 = (uint)uVar16 | 2;
      lVar11 = uVar18 - uVar16;
      pbVar21 = param_4 + uVar18 + 2;
      do {
        uVar58 = *(undefined8 *)pbVar21;
        lVar11 = lVar11 + 8;
        auVar59[1] = 0;
        auVar59[0] = (byte)uVar58;
        auVar59[2] = (char)((ulong)uVar58 >> 8);
        auVar59[3] = 0;
        auVar59[4] = (char)((ulong)uVar58 >> 0x10);
        auVar59[5] = 0;
        auVar59[6] = (char)((ulong)uVar58 >> 0x18);
        auVar59[7] = 0;
        auVar59[8] = (char)((ulong)uVar58 >> 0x20);
        auVar59[9] = 0;
        auVar59[10] = (char)((ulong)uVar58 >> 0x28);
        auVar59[0xb] = 0;
        auVar59[0xc] = (char)((ulong)uVar58 >> 0x30);
        auVar59[0xd] = 0;
        auVar59[0xe] = (char)((ulong)uVar58 >> 0x38);
        auVar59[0xf] = 0;
        auVar60 = NEON_cmeq(auVar59,0,2);
        uVar18 = CONCAT44((int)auVar60._2_2_,(int)auVar60._0_2_) & 0xffffff00ffffff00;
        uVar104 = CONCAT44((int)auVar60._6_2_,(int)auVar60._4_2_) & 0xffffff00ffffff00;
        uVar114 = CONCAT44((int)auVar60._10_2_,(int)auVar60._8_2_) & 0xffffff00ffffff00;
        uVar124 = CONCAT44((int)auVar60._14_2_,(int)auVar60._12_2_) & 0xffffff00ffffff00;
        bVar57 = (byte)(auVar60._0_2_ >> 0xf);
        bVar61 = (byte)(auVar60._2_2_ >> 0xf);
        bVar62 = (byte)(auVar60._4_2_ >> 0xf);
        bVar63 = (byte)(auVar60._6_2_ >> 0xf);
        bVar64 = (byte)(auVar60._8_2_ >> 0xf);
        bVar65 = (byte)(auVar60._10_2_ >> 0xf);
        bVar66 = (byte)(auVar60._12_2_ >> 0xf);
        bVar67 = (byte)(auVar60._14_2_ >> 0xf);
        bVar41 = ~auVar60[8] & bVar41;
        bVar42 = ((byte)(uVar114 >> 8) | ~auVar60[9]) & bVar42;
        bVar43 = ((byte)(uVar114 >> 0x10) | ~bVar64) & bVar43;
        bVar44 = ((byte)(uVar114 >> 0x18) | ~bVar64) & bVar44;
        bVar45 = ~auVar60[10] & bVar45;
        bVar46 = ((byte)(uVar114 >> 0x28) | ~auVar60[0xb]) & bVar46;
        bVar47 = ((byte)(uVar114 >> 0x30) | ~bVar65) & bVar47;
        bVar48 = ((byte)(uVar114 >> 0x38) | ~bVar65) & bVar48;
        bVar49 = ~auVar60[0xc] & bVar49;
        bVar50 = ((byte)(uVar124 >> 8) | ~auVar60[0xd]) & bVar50;
        bVar51 = ((byte)(uVar124 >> 0x10) | ~bVar66) & bVar51;
        bVar52 = ((byte)(uVar124 >> 0x18) | ~bVar66) & bVar52;
        bVar53 = ~auVar60[0xe] & bVar53;
        bVar54 = ((byte)(uVar124 >> 0x28) | ~auVar60[0xf]) & bVar54;
        bVar55 = ((byte)(uVar124 >> 0x30) | ~bVar67) & bVar55;
        bVar56 = ((byte)(uVar124 >> 0x38) | ~bVar67) & bVar56;
        bVar25 = ~auVar60[0] & bVar25;
        bVar26 = ((byte)(uVar18 >> 8) | ~auVar60[1]) & bVar26;
        bVar27 = ((byte)(uVar18 >> 0x10) | ~bVar57) & bVar27;
        bVar28 = ((byte)(uVar18 >> 0x18) | ~bVar57) & bVar28;
        bVar29 = ~auVar60[2] & bVar29;
        bVar30 = ((byte)(uVar18 >> 0x28) | ~auVar60[3]) & bVar30;
        bVar31 = ((byte)(uVar18 >> 0x30) | ~bVar61) & bVar31;
        bVar32 = ((byte)(uVar18 >> 0x38) | ~bVar61) & bVar32;
        bVar33 = ~auVar60[4] & bVar33;
        bVar34 = ((byte)(uVar104 >> 8) | ~auVar60[5]) & bVar34;
        bVar35 = ((byte)(uVar104 >> 0x10) | ~bVar62) & bVar35;
        bVar36 = ((byte)(uVar104 >> 0x18) | ~bVar62) & bVar36;
        bVar37 = ~auVar60[6] & bVar37;
        bVar38 = ((byte)(uVar104 >> 0x28) | ~auVar60[7]) & bVar38;
        bVar39 = ((byte)(uVar104 >> 0x30) | ~bVar63) & bVar39;
        bVar40 = ((byte)(uVar104 >> 0x38) | ~bVar63) & bVar40;
        pbVar21 = pbVar21 + 8;
      } while (lVar11 != 0);
      bVar25 = bVar25 & bVar41;
      bVar26 = bVar26 & bVar42;
      bVar27 = bVar27 & bVar43;
      bVar28 = bVar28 & bVar44;
      bVar29 = bVar29 & bVar45;
      bVar30 = bVar30 & bVar46;
      bVar31 = bVar31 & bVar47;
      bVar32 = bVar32 & bVar48;
      auVar2[1] = bVar26;
      auVar2[0] = bVar25;
      auVar2[2] = bVar27;
      auVar2[3] = bVar28;
      auVar2[4] = bVar29;
      auVar2[5] = bVar30;
      auVar2[6] = bVar31;
      auVar2[7] = bVar32;
      auVar2[8] = bVar33 & bVar49;
      auVar2[9] = bVar34 & bVar50;
      auVar2[10] = bVar35 & bVar51;
      auVar2[0xb] = bVar36 & bVar52;
      auVar2[0xc] = bVar37 & bVar53;
      auVar2[0xd] = bVar38 & bVar54;
      auVar2[0xe] = bVar39 & bVar55;
      auVar2[0xf] = bVar40 & bVar56;
      auVar3[1] = bVar26;
      auVar3[0] = bVar25;
      auVar3[2] = bVar27;
      auVar3[3] = bVar28;
      auVar3[4] = bVar29;
      auVar3[5] = bVar30;
      auVar3[6] = bVar31;
      auVar3[7] = bVar32;
      auVar3[8] = bVar33 & bVar49;
      auVar3[9] = bVar34 & bVar50;
      auVar3[10] = bVar35 & bVar51;
      auVar3[0xb] = bVar36 & bVar52;
      auVar3[0xc] = bVar37 & bVar53;
      auVar3[0xd] = bVar38 & bVar54;
      auVar3[0xe] = bVar39 & bVar55;
      auVar3[0xf] = bVar40 & bVar56;
      auVar60 = NEON_ext(auVar2,auVar3,8,1);
      uVar18 = CONCAT17(bVar32,CONCAT16(bVar31,CONCAT15(bVar30,CONCAT14(bVar29,CONCAT13(bVar28,
                                                  CONCAT12(bVar27,CONCAT11(bVar26,bVar25))))))) &
               auVar60._0_8_;
      uVar14 = (uint)uVar18 & (uint)(uVar18 >> 0x20);
      if (uVar13 == uVar16) goto LAB_00401804;
    }
  }
LAB_004017e4:
  do {
    uVar12 = uVar12 + 1;
    pbVar21 = param_4 + uVar20;
    uVar20 = (ulong)uVar12;
    uVar19 = 0;
    if (*pbVar21 != 0) {
      uVar19 = 0xffffffff;
    }
    uVar14 = uVar19 & uVar14;
  } while (uVar20 < param_5 - 0x31);
LAB_00401804:
  uVar12 = (uint)param_4[param_5 - 0x30];
  uVar19 = (param_6 & 0xff ^ (uint)param_4[param_5 - 0x2f]) - 1 & (param_6 >> 8 & 0xff ^ uVar12) - 1
  ;
  if (0 < (int)param_7) {
    uVar19 = uVar19 | (param_7 & 0xff ^ (uint)param_4[param_5 - 0x2f]) - 1 &
                      (param_7 >> 8 & 0xff ^ uVar12) - 1;
  }
  lVar11 = 0;
  bVar25 = 0xff;
  if (param_4[param_5 - 0x31] != 0 || -1 < (int)uVar19) {
    bVar25 = 0;
  }
  bVar25 = bVar25 & (byte)uVar14;
  do {
    *(byte *)(param_2 + lVar11) =
         ~bVar25 & local_70[lVar11] | bVar25 & (param_4 + (param_5 - 0x30))[lVar11];
    lVar11 = lVar11 + 1;
  } while (lVar11 != 0x30);
  return 0x30;
}


// ===== 00401b3c  switchD_003b2570::caseD_0 =====

undefined * switchD_003b2570::caseD_0(void)

{
  return &DAT_0077bb18;
}


// ===== 00401b48  switchD_003b2570::caseD_1 =====

undefined * switchD_003b2570::caseD_1(void)

{
  return &DAT_0077bc18;
}


// ===== 00401b54  FUN_00401b54 =====

undefined8 FUN_00401b54(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  
  puVar3 = (undefined4 *)FUN_003c8474(0x58,"crypto/rsa/rsa_pmeth.c",0x40);
  if (puVar3 != (undefined4 *)0x0) {
    piVar4 = *(int **)(param_1 + 0x78);
    *(undefined4 **)(param_1 + 0x98) = puVar3;
    *puVar3 = 0x800;
    iVar1 = *piVar4;
    *(undefined4 **)(param_1 + 0x68) = puVar3 + 5;
    uVar5 = 6;
    if (iVar1 != 0x390) {
      uVar5 = 1;
    }
    puVar3[7] = uVar5;
    uVar2 = DAT_001b6fe8;
    puVar3[4] = 2;
    puVar3[0x14] = 1;
    *(undefined8 *)(puVar3 + 0xc) = uVar2;
    *(undefined4 *)(param_1 + 0x70) = 2;
    return 1;
  }
  return 0;
}


// ===== 00401bec  FUN_00401bec =====

undefined4 * FUN_00401bec(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  long lVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  
  puVar3 = (undefined4 *)FUN_003c8474(0x58,"crypto/rsa/rsa_pmeth.c",0x40);
  if (puVar3 != (undefined4 *)0x0) {
    piVar5 = *(int **)(param_1 + 0x78);
    *(undefined4 **)(param_1 + 0x98) = puVar3;
    *puVar3 = 0x800;
    puVar7 = *(undefined4 **)(param_2 + 0x98);
    iVar1 = *piVar5;
    puVar3[4] = 2;
    *(undefined4 *)(param_1 + 0x70) = 2;
    uVar8 = DAT_001b6fe8;
    uVar6 = 6;
    if (iVar1 != 0x390) {
      uVar6 = 1;
    }
    puVar3[7] = uVar6;
    *(undefined8 *)(puVar3 + 0xc) = uVar8;
    lVar4 = *(long *)(puVar7 + 2);
    uVar6 = *puVar7;
    *(undefined4 **)(param_1 + 0x68) = puVar3 + 5;
    puVar3[0x14] = 1;
    *puVar3 = uVar6;
    if (lVar4 != 0) {
      lVar4 = FUN_0038f720();
      *(long *)(puVar3 + 2) = lVar4;
      if (lVar4 == 0) {
        return (undefined4 *)0x0;
      }
    }
    uVar8 = *(undefined8 *)(puVar7 + 8);
    uVar6 = puVar7[7];
    uVar2 = puVar7[0xc];
    *(undefined8 *)(puVar3 + 10) = *(undefined8 *)(puVar7 + 10);
    *(undefined8 *)(puVar3 + 8) = uVar8;
    puVar3[7] = uVar6;
    uVar6 = puVar7[0x14];
    lVar4 = *(long *)(puVar7 + 0x10);
    puVar3[0xc] = uVar2;
    puVar3[0x14] = uVar6;
    if (lVar4 != 0) {
      FUN_003c86b4(*(undefined8 *)(puVar3 + 0x10),"crypto/rsa/rsa_pmeth.c",0x69);
      lVar4 = FUN_003ca404(*(undefined8 *)(puVar7 + 0x10),*(undefined8 *)(puVar7 + 0x12),
                           "crypto/rsa/rsa_pmeth.c",0x6a);
      *(long *)(puVar3 + 0x10) = lVar4;
      if (lVar4 == 0) {
        return (undefined4 *)0x0;
      }
      *(undefined8 *)(puVar3 + 0x12) = *(undefined8 *)(puVar7 + 0x12);
    }
    puVar3 = (undefined4 *)0x1;
  }
  return puVar3;
}


// ===== 00401d00  FUN_00401d00 =====

void FUN_00401d00(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x98);
  if (lVar1 != 0) {
    FUN_0038f4f4(*(undefined8 *)(lVar1 + 8));
    FUN_003c86b4(*(undefined8 *)(lVar1 + 0x38),"crypto/rsa/rsa_pmeth.c",0x81);
    FUN_003c86b4(*(undefined8 *)(lVar1 + 0x40),"crypto/rsa/rsa_pmeth.c",0x82);
    FUN_003c86b4(lVar1,"crypto/rsa/rsa_pmeth.c",0x83);
    return;
  }
  return;
}


// ===== 00401d68  FUN_00401d68 =====

int FUN_00401d68(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  undefined4 *puVar7;
  
  puVar7 = *(undefined4 **)(param_1 + 0x98);
  if (*(long *)(puVar7 + 2) == 0) {
    lVar3 = FUN_0038f584();
    *(long *)(puVar7 + 2) = lVar3;
    if (lVar3 == 0) {
      return 0;
    }
    iVar2 = FUN_0038f9ec(lVar3,0x10001);
    if (iVar2 == 0) {
      return 0;
    }
  }
  lVar3 = FUN_003fa500();
  if (lVar3 == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x60) == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = FUN_00390918();
    if (lVar4 == 0) goto LAB_00401ea0;
    FUN_003b12fc(lVar4,param_1);
  }
  iVar2 = FUN_004036c4(lVar3,*puVar7,puVar7[4],*(undefined8 *)(puVar7 + 2),lVar4);
  FUN_0039092c(lVar4);
  if (iVar2 < 1) {
    FUN_003fa6a0(lVar3);
    return iVar2;
  }
  iVar5 = **(int **)(param_1 + 0x78);
  if (iVar5 == 0x390) {
    lVar6 = *(long *)(param_1 + 0x98);
    lVar4 = *(long *)(lVar6 + 0x28);
    iVar5 = *(int *)(lVar6 + 0x30);
    if (*(long *)(lVar6 + 0x20) == 0 && lVar4 == 0) {
      if (iVar5 == -2) {
        iVar5 = 0x390;
        goto LAB_00401e7c;
      }
      lVar4 = 0;
    }
    iVar1 = 0;
    if (iVar5 != -2) {
      iVar1 = iVar5;
    }
    lVar4 = FUN_003ef398(*(long *)(lVar6 + 0x20),lVar4,iVar1);
    *(long *)(lVar3 + 0x80) = lVar4;
    if (lVar4 == 0) {
LAB_00401ea0:
      FUN_003fa6a0(lVar3);
      return 0;
    }
    iVar5 = **(int **)(param_1 + 0x78);
  }
LAB_00401e7c:
  FUN_003a78e0(param_2,iVar5,lVar3);
  return iVar2;
}


// ===== 00401ec4  FUN_00401ec4 =====

/* WARNING: Type propagation algorithm not settling */

ulong FUN_00401ec4(long param_1,undefined8 param_2,ulong *param_3,void *param_4,ulong param_5)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  uint local_58;
  uint local_54;
  
  lVar8 = *(long *)(param_1 + 0x98);
  uVar3 = FUN_003b0a80(*(undefined8 *)(param_1 + 0x88));
  if (*(long *)(lVar8 + 0x20) == 0) {
    uVar4 = FUN_003f9948(param_5 & 0xffffffff,param_4,param_2,uVar3,*(undefined4 *)(lVar8 + 0x1c));
    local_58 = (uint)uVar4;
  }
  else {
    iVar2 = FUN_00389a38(*(long *)(lVar8 + 0x20));
    if ((long)iVar2 != param_5) {
      FUN_00379868();
      FUN_0037995c("crypto/rsa/rsa_pmeth.c",0x96,"pkey_rsa_sign");
      uVar3 = 0x8f;
      goto LAB_00401fbc;
    }
    iVar2 = FUN_003899b0(*(undefined8 *)(lVar8 + 0x20));
    if (iVar2 == 0x5f) {
      if (*(int *)(lVar8 + 0x1c) != 1) {
        return 0xffffffff;
      }
      uVar4 = FUN_00404b2c(0,param_4,param_5 & 0xffffffff,param_2,&local_54,uVar3);
      if ((int)uVar4 < 1) {
        return uVar4;
      }
      uVar4 = (ulong)local_54;
      local_58 = local_54;
    }
    else {
      iVar2 = *(int *)(lVar8 + 0x1c);
      if (iVar2 == 1) {
        uVar5 = FUN_003899b0(*(undefined8 *)(lVar8 + 0x20));
        uVar4 = FUN_004050ac(uVar5,param_4,param_5 & 0xffffffff,param_2,&local_58,uVar3);
        if ((int)uVar4 < 1) {
          return uVar4;
        }
        uVar4 = (ulong)local_58;
      }
      else {
        if (iVar2 != 6) {
          if (iVar2 != 5) {
            return 0xffffffff;
          }
          iVar2 = FUN_003f9914(uVar3);
          if ((ulong)(long)iVar2 < param_5 + 1) {
            FUN_00379868();
            FUN_0037995c("crypto/rsa/rsa_pmeth.c",0xa5,"pkey_rsa_sign");
            uVar3 = 0x78;
          }
          else {
            iVar2 = FUN_00403404(lVar8,param_1);
            if (iVar2 != 0) {
              memcpy(*(void **)(lVar8 + 0x38),param_4,param_5);
              FUN_003899b0(*(undefined8 *)(lVar8 + 0x20));
              uVar1 = FUN_004076b0();
              *(undefined1 *)(*(long *)(lVar8 + 0x38) + param_5) = uVar1;
              uVar4 = FUN_003f9948(param_5 + 1 & 0xffffffff,*(undefined8 *)(lVar8 + 0x38),param_2,
                                   uVar3,5);
              local_58 = (uint)uVar4;
              goto joined_r0x004020a4;
            }
            FUN_00379868();
            FUN_0037995c("crypto/rsa/rsa_pmeth.c",0xa9,"pkey_rsa_sign");
            uVar3 = 0x80004;
          }
LAB_00401fbc:
          FUN_00379a5c(4,uVar3,0);
          return 0xffffffff;
        }
        lVar6 = *(long *)(lVar8 + 0x38);
        if (lVar6 == 0) {
          FUN_003b0a80(*(undefined8 *)(param_1 + 0x88));
          iVar2 = FUN_003f9914();
          lVar6 = FUN_003c83a4((long)iVar2,"crypto/rsa/rsa_pmeth.c",0x77);
          *(long *)(lVar8 + 0x38) = lVar6;
          if (lVar6 == 0) {
            return 0xffffffff;
          }
        }
        iVar2 = FUN_004045c4(uVar3,lVar6,param_4,*(undefined8 *)(lVar8 + 0x20),
                             *(undefined8 *)(lVar8 + 0x28),*(undefined4 *)(lVar8 + 0x30));
        if (iVar2 == 0) {
          return 0xffffffff;
        }
        uVar5 = FUN_003f9914(uVar3);
        uVar4 = FUN_003f9948(uVar5,*(undefined8 *)(lVar8 + 0x38),param_2,uVar3,3);
        local_58 = (uint)uVar4;
      }
    }
  }
joined_r0x004020a4:
  if (-1 < (int)local_58) {
    uVar7 = uVar4 & 0xffffffff;
    uVar4 = 1;
    *param_3 = uVar7;
  }
  return uVar4;
}


// ===== 00402160  FUN_00402160 =====

ulong FUN_00402160(long param_1,undefined8 param_2,ulong param_3,void *param_4,ulong param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong local_38;
  
  lVar6 = *(long *)(param_1 + 0x98);
  uVar2 = FUN_003b0a80(*(undefined8 *)(param_1 + 0x88));
  if (*(long *)(lVar6 + 0x20) == 0) {
    lVar5 = *(long *)(lVar6 + 0x38);
    if (lVar5 == 0) {
      FUN_003b0a80(*(undefined8 *)(param_1 + 0x88));
      iVar1 = FUN_003f9914();
      lVar5 = FUN_003c83a4((long)iVar1,"crypto/rsa/rsa_pmeth.c",0x77);
      *(long *)(lVar6 + 0x38) = lVar5;
      if (lVar5 == 0) {
        return 0xffffffff;
      }
    }
    uVar4 = FUN_003f9960(param_3 & 0xffffffff,param_2,lVar5,uVar2,*(undefined4 *)(lVar6 + 0x1c));
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    local_38 = (ulong)(int)uVar4;
  }
  else {
    if (*(int *)(lVar6 + 0x1c) == 1) {
      uVar3 = FUN_003899b0();
      uVar4 = FUN_00405894(uVar3,param_4,param_5 & 0xffffffff,param_2,param_3 & 0xffffffff,uVar2);
      return uVar4;
    }
    iVar1 = FUN_00389a38(*(long *)(lVar6 + 0x20));
    if ((long)iVar1 != param_5) {
      FUN_00379868();
      FUN_0037995c("crypto/rsa/rsa_pmeth.c",0x113,"pkey_rsa_verify");
      FUN_00379a5c(4,0x8f,0);
      return 0xffffffff;
    }
    if (*(int *)(lVar6 + 0x1c) == 6) {
      lVar5 = *(long *)(lVar6 + 0x38);
      if (lVar5 == 0) {
        FUN_003b0a80(*(undefined8 *)(param_1 + 0x88));
        iVar1 = FUN_003f9914();
        lVar5 = FUN_003c83a4((long)iVar1,"crypto/rsa/rsa_pmeth.c",0x77);
        *(long *)(lVar6 + 0x38) = lVar5;
        if (lVar5 == 0) {
          return 0xffffffff;
        }
      }
      iVar1 = FUN_003f9960(param_3 & 0xffffffff,param_2,lVar5,uVar2,3);
      if (iVar1 < 1) {
        return 0;
      }
      iVar1 = FUN_004040e0(uVar2,param_4,*(undefined8 *)(lVar6 + 0x20),*(undefined8 *)(lVar6 + 0x28)
                           ,*(undefined8 *)(lVar6 + 0x38),*(undefined4 *)(lVar6 + 0x30));
      return (ulong)(0 < iVar1);
    }
    if (*(int *)(lVar6 + 0x1c) != 5) {
      return 0xffffffff;
    }
    iVar1 = FUN_004023ac(param_1,0,&local_38,param_2,param_3);
    if (iVar1 < 1) {
      return 0;
    }
  }
  if (local_38 == param_5) {
    iVar1 = memcmp(param_4,*(void **)(lVar6 + 0x38),param_5);
    return (ulong)(iVar1 == 0);
  }
  return 0;
}


// ===== 004023ac  FUN_004023ac =====

ulong FUN_004023ac(long param_1,void *param_2,ulong *param_3,undefined8 param_4,ulong param_5)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  uint local_38 [2];
  
  lVar8 = *(long *)(param_1 + 0x98);
  uVar4 = FUN_003b0a80(*(undefined8 *)(param_1 + 0x88));
  if (*(long *)(lVar8 + 0x20) == 0) {
    uVar7 = FUN_003f9960(param_5 & 0xffffffff,param_4,param_2,uVar4,*(undefined4 *)(lVar8 + 0x1c));
    local_38[0] = (uint)uVar7;
  }
  else {
    if (*(int *)(lVar8 + 0x1c) != 1) {
      if (*(int *)(lVar8 + 0x1c) != 5) {
        return 0xffffffff;
      }
      lVar6 = *(long *)(lVar8 + 0x38);
      if (lVar6 == 0) {
        FUN_003b0a80(*(undefined8 *)(param_1 + 0x88));
        iVar2 = FUN_003f9914();
        lVar6 = FUN_003c83a4((long)iVar2,"crypto/rsa/rsa_pmeth.c",0x77);
        *(long *)(lVar8 + 0x38) = lVar6;
        if (lVar6 == 0) {
          return 0xffffffff;
        }
      }
      iVar2 = FUN_003f9960(param_5 & 0xffffffff,param_4,lVar6,uVar4,5);
      uVar7 = (ulong)(iVar2 - 1U);
      if (iVar2 < 1) {
        return 0;
      }
      bVar1 = *(byte *)(*(long *)(lVar8 + 0x38) + uVar7);
      FUN_003899b0(*(undefined8 *)(lVar8 + 0x20));
      uVar3 = FUN_004076b0();
      if (uVar3 != bVar1) {
        FUN_00379868();
        FUN_0037995c("crypto/rsa/rsa_pmeth.c",0xe4,"pkey_rsa_verifyrecover");
        uVar4 = 100;
LAB_00402590:
        FUN_00379a5c(4,uVar4,0);
        return 0;
      }
      uVar3 = FUN_00389a38(*(undefined8 *)(lVar8 + 0x20));
      if (iVar2 - 1U != uVar3) {
        FUN_00379868();
        FUN_0037995c("crypto/rsa/rsa_pmeth.c",0xe8,"pkey_rsa_verifyrecover");
        uVar4 = 0x8f;
        goto LAB_00402590;
      }
      if (param_2 != (void *)0x0) {
        memcpy(param_2,*(void **)(lVar8 + 0x38),uVar7);
      }
      goto LAB_004024b8;
    }
    uVar5 = FUN_003899b0(*(long *)(lVar8 + 0x20));
    iVar2 = FUN_00405450(uVar5,0,0,param_2,local_38,param_4,param_5,uVar4);
    if (iVar2 < 1) {
      return 0;
    }
    uVar7 = (ulong)local_38[0];
  }
  if ((int)local_38[0] < 0) {
    return uVar7;
  }
  uVar7 = uVar7 & 0xffffffff;
LAB_004024b8:
  *param_3 = uVar7;
  return 1;
}


// ===== 004025b4  FUN_004025b4 =====

ulong FUN_004025b4(long param_1,undefined8 param_2,ulong *param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x98);
  uVar3 = FUN_003b0a80(*(undefined8 *)(param_1 + 0x88));
  if (*(int *)(lVar6 + 0x1c) == 4) {
    uVar1 = FUN_003f9914(uVar3);
    lVar5 = *(long *)(lVar6 + 0x38);
    if (lVar5 == 0) {
      FUN_003b0a80(*(undefined8 *)(param_1 + 0x88));
      iVar2 = FUN_003f9914();
      lVar5 = FUN_003c83a4((long)iVar2,"crypto/rsa/rsa_pmeth.c",0x77);
      *(long *)(lVar6 + 0x38) = lVar5;
      if (lVar5 == 0) {
        return 0xffffffff;
      }
    }
    iVar2 = FUN_003fec70(lVar5,uVar1,param_4,param_5,*(undefined8 *)(lVar6 + 0x40),
                         *(undefined4 *)(lVar6 + 0x48),*(undefined8 *)(lVar6 + 0x20),
                         *(undefined8 *)(lVar6 + 0x28));
    if (iVar2 == 0) {
      return 0xffffffff;
    }
    uVar4 = FUN_003f993c(uVar1,*(undefined8 *)(lVar6 + 0x38),param_2,uVar3,3);
    iVar2 = (int)uVar4;
  }
  else {
    uVar4 = FUN_003f993c(param_5,param_4,param_2,uVar3);
    iVar2 = (int)uVar4;
  }
  if (-1 < iVar2) {
    *param_3 = uVar4 & 0xffffffff;
    return 1;
  }
  return uVar4;
}


// ===== 004026ec  FUN_004026ec =====

uint FUN_004026ec(long param_1,undefined8 param_2,ulong *param_3,undefined8 param_4,
                 undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x98);
  uVar3 = FUN_003b0a80(*(undefined8 *)(param_1 + 0x88));
  iVar1 = *(int *)(lVar6 + 0x1c);
  if (iVar1 == 1) {
    if (*(int *)(lVar6 + 0x50) == 0) {
      iVar1 = 8;
    }
  }
  else if (iVar1 == 4) {
    lVar4 = *(long *)(lVar6 + 0x38);
    if (lVar4 == 0) {
      FUN_003b0a80(*(undefined8 *)(param_1 + 0x88));
      iVar1 = FUN_003f9914();
      lVar4 = FUN_003c83a4((long)iVar1,"crypto/rsa/rsa_pmeth.c",0x77);
      *(long *)(lVar6 + 0x38) = lVar4;
      if (lVar4 == 0) {
        return 0xffffffff;
      }
    }
    uVar2 = FUN_003f9954(param_5,param_4,lVar4,uVar3,3);
    if ((int)uVar2 < 1) {
      return uVar2;
    }
    uVar2 = FUN_003fecd8(param_2,uVar2,*(undefined8 *)(lVar6 + 0x38),uVar2,uVar2,
                         *(undefined8 *)(lVar6 + 0x40),*(undefined4 *)(lVar6 + 0x48),
                         *(undefined8 *)(lVar6 + 0x20),*(undefined8 *)(lVar6 + 0x28));
    goto LAB_004027d8;
  }
  uVar2 = FUN_003f9954(param_5,param_4,param_2,uVar3,iVar1);
LAB_004027d8:
  uVar5 = (long)(int)uVar2 >> 0x3f;
  *param_3 = ~uVar5 & (long)(int)uVar2 | uVar5 & *param_3;
  return ~((int)uVar2 >> 0x1f) & 1U | (int)uVar2 >> 0x1f & uVar2;
}


// ===== 00402854  FUN_00402854 =====

ulong FUN_00402854(byte *param_1,int param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint *puVar8;
  uint *puVar9;
  
  puVar9 = *(uint **)(param_1 + 0x98);
  uVar5 = 1;
  if (param_2 < 7) {
    if (param_2 < 3) {
      if (param_2 == 1) {
        uVar5 = FUN_0040345c(param_4,puVar9[7]);
        if ((int)uVar5 == 0) {
          return uVar5;
        }
        if (puVar9[0xd] == 0xffffffff) {
          *(uint **)(puVar9 + 8) = param_4;
          return 1;
        }
        iVar3 = FUN_003899b0(*(undefined8 *)(puVar9 + 8));
        iVar4 = FUN_003899b0(param_4);
        if (iVar3 == iVar4) {
          return 1;
        }
        FUN_00379868();
        FUN_0037995c("crypto/rsa/rsa_pmeth.c",0x21e,"pkey_rsa_ctrl");
        uVar6 = 4;
        uVar7 = 0x91;
        goto LAB_00402f20;
      }
      if (param_2 != 2) {
        return 0xfffffffe;
      }
    }
    else {
      if (1 < param_2 - 3U) {
        if (param_2 == 5) {
          return 1;
        }
        return 0xfffffffe;
      }
      if (**(int **)(param_1 + 0x78) != 0x390) {
        return 1;
      }
    }
    FUN_00379868(1);
    FUN_0037995c("crypto/rsa/rsa_pmeth.c",0x273,"pkey_rsa_ctrl");
    uVar6 = 0x94;
    goto LAB_00402e68;
  }
  switch(param_2) {
  case 0x1001:
    if (param_3 - 1 < 6) {
      uVar5 = FUN_0040345c(*(undefined8 *)(puVar9 + 8),param_3);
      if ((int)uVar5 == 0) {
        return uVar5;
      }
      if (param_3 == 6) {
        bVar2 = *param_1 & 0x30;
      }
      else {
        if (**(int **)(param_1 + 0x78) == 0x390) goto LAB_00402e44;
        if (param_3 != 4) goto LAB_00402ebc;
        bVar2 = param_1[1] & 6;
      }
      if (bVar2 != 0) {
        if (*(long *)(puVar9 + 8) == 0) {
          uVar6 = FUN_003a4268();
          *(undefined8 *)(puVar9 + 8) = uVar6;
        }
LAB_00402ebc:
        puVar9[7] = param_3;
        return 1;
      }
    }
LAB_00402e44:
    FUN_00379868(uVar5);
    FUN_0037995c("crypto/rsa/rsa_pmeth.c",0x1d0,"pkey_rsa_ctrl");
    uVar6 = 0x90;
    break;
  case 0x1002:
  case 0x1007:
    if (puVar9[7] == 6) {
      if (param_2 == 0x1007) {
        *param_4 = puVar9[0xc];
        return uVar5;
      }
      if ((int)(param_3 + 3) < 0 != SCARRY4(param_3,3)) {
        return 0xfffffffe;
      }
      uVar1 = puVar9[0xd];
      if (uVar1 == 0xffffffff) {
LAB_00402f3c:
        puVar9[0xc] = param_3;
        return 1;
      }
      if (param_3 == 0xffffffff) {
        param_3 = 0xffffffff;
        uVar5 = FUN_00389a38(*(undefined8 *)(puVar9 + 8));
        if ((int)uVar1 <= (int)uVar5) goto LAB_00402f3c;
      }
      else {
        if (param_3 == 0xfffffffe) {
          if (*(int *)param_1 != 0x20) goto LAB_00402f3c;
          FUN_00379868(1);
          uVar6 = 0x1e5;
          goto LAB_00402bbc;
        }
        if (((int)param_3 < 0) || ((int)uVar1 <= (int)param_3)) goto LAB_00402f3c;
      }
      FUN_00379868(uVar5);
      FUN_0037995c("crypto/rsa/rsa_pmeth.c",0x1eb,"pkey_rsa_ctrl");
      uVar6 = 4;
      uVar7 = 0xa4;
LAB_00402f20:
      FUN_00379a5c(uVar6,uVar7,0);
      return 0;
    }
    FUN_00379868(1);
    uVar6 = 0x1da;
LAB_00402bbc:
    FUN_0037995c("crypto/rsa/rsa_pmeth.c",uVar6,"pkey_rsa_ctrl");
    uVar6 = 0x92;
    break;
  case 0x1003:
    if (0x1ff < (int)param_3) {
      *puVar9 = param_3;
      return uVar5;
    }
    FUN_00379868(1);
    FUN_0037995c("crypto/rsa/rsa_pmeth.c",0x1f5,"pkey_rsa_ctrl");
    uVar6 = 0x78;
    break;
  case 0x1004:
    if (((param_4 != (uint *)0x0) && (uVar5 = FUN_003908a0(param_4), (int)uVar5 != 0)) &&
       (uVar5 = FUN_00390824(param_4), (int)uVar5 == 0)) {
      FUN_0038f4f4(*(undefined8 *)(puVar9 + 2));
      *(uint **)(puVar9 + 2) = param_4;
      return 1;
    }
    FUN_00379868(uVar5);
    FUN_0037995c("crypto/rsa/rsa_pmeth.c",0x1fd,"pkey_rsa_ctrl");
    uVar6 = 0x65;
    break;
  case 0x1005:
  case 0x1008:
    if ((puVar9[7] | 2) == 6) {
      if (param_2 != 0x1008) {
        if (puVar9[0xd] == 0xffffffff) {
          *(uint **)(puVar9 + 10) = param_4;
          return uVar5;
        }
        iVar3 = FUN_003899b0(*(undefined8 *)(puVar9 + 10));
        iVar4 = FUN_003899b0(param_4);
        if (iVar3 == iVar4) {
          return 1;
        }
        FUN_00379868();
        FUN_0037995c("crypto/rsa/rsa_pmeth.c",0x238,"pkey_rsa_ctrl");
        uVar6 = 4;
        uVar7 = 0x98;
        goto LAB_00402f20;
      }
      if (*(long *)(puVar9 + 10) != 0) {
        *(long *)param_4 = *(long *)(puVar9 + 10);
        return uVar5;
      }
      goto LAB_004029c0;
    }
    FUN_00379868(1);
    FUN_0037995c("crypto/rsa/rsa_pmeth.c",0x22c,"pkey_rsa_ctrl");
    uVar6 = 0x9c;
    break;
  case 0x1006:
    *param_4 = puVar9[7];
    return uVar5;
  case 0x1009:
  case 0x100b:
    if (puVar9[7] == 4) {
      if (param_2 != 0x100b) {
        *(uint **)(puVar9 + 8) = param_4;
        return uVar5;
      }
      goto LAB_004029c0;
    }
    FUN_00379868(1);
    uVar6 = 0x20f;
    goto LAB_00402d20;
  case 0x100a:
    if (puVar9[7] == 4) {
      puVar8 = puVar9 + 0x10;
      FUN_003c86b4(*(undefined8 *)puVar8,"crypto/rsa/rsa_pmeth.c",0x244);
      if ((0 < (int)param_3) && (param_4 != (uint *)0x0)) {
        *(uint **)(puVar9 + 0x10) = param_4;
        *(ulong *)(puVar9 + 0x12) = (ulong)param_3;
        return 1;
      }
      puVar8[0] = 0;
      puVar8[1] = 0;
      puVar9[0x12] = 0;
      puVar9[0x13] = 0;
      return 1;
    }
    FUN_00379868(1);
    uVar6 = 0x241;
    goto LAB_00402d20;
  case 0x100c:
    if (puVar9[7] == 4) {
      if (param_4 != (uint *)0x0) {
        uVar1 = puVar9[0x12];
        *(undefined8 *)param_4 = *(undefined8 *)(puVar9 + 0x10);
        return (ulong)uVar1;
      }
      FUN_00379868(1);
      FUN_0037995c("crypto/rsa/rsa_pmeth.c",0x254,"pkey_rsa_ctrl");
      uVar6 = 6;
      uVar7 = 0xc0102;
      goto LAB_00402f20;
    }
    FUN_00379868(1);
    uVar6 = 0x250;
    goto LAB_00402d20;
  case 0x100d:
    if (0xfffffffb < param_3 - 6) {
      puVar9[4] = param_3;
      return uVar5;
    }
    FUN_00379868(1);
    FUN_0037995c("crypto/rsa/rsa_pmeth.c",0x206,"pkey_rsa_ctrl");
    uVar6 = 0xa5;
    break;
  case 0x100e:
    if (puVar9[7] == 1) {
      puVar9[0x14] = param_3;
      return uVar5;
    }
    FUN_00379868(1);
    uVar6 = 0x25c;
LAB_00402d20:
    FUN_0037995c("crypto/rsa/rsa_pmeth.c",uVar6,"pkey_rsa_ctrl");
    uVar6 = 0x8d;
    break;
  default:
    if (param_2 == 7) {
      return 1;
    }
    if (param_2 != 0xd) {
      return 0xfffffffe;
    }
LAB_004029c0:
    *(undefined8 *)param_4 = *(undefined8 *)(puVar9 + 8);
    return uVar5;
  }
LAB_00402e68:
  FUN_00379a5c(4,uVar6,0);
  return 0xfffffffe;
}


// ===== 00402f54  FUN_00402f54 =====

ulong FUN_00402f54(long param_1,char *param_2,char *param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_18;
  
  if (param_3 == (char *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_pmeth.c",0x280,"pkey_rsa_ctrl_str");
    FUN_00379a5c(4,0x93,0);
    uVar3 = 0;
  }
  else {
    iVar1 = strcmp(param_2,"rsa_padding_mode");
    if (iVar1 == 0) {
      iVar1 = strcmp(param_3,"pkcs1");
      if (iVar1 == 0) {
        uVar3 = FUN_003fb92c(param_1,1);
        return uVar3;
      }
      iVar1 = strcmp(param_3,"none");
      if (iVar1 == 0) {
        uVar3 = FUN_003fb92c(param_1,3);
        return uVar3;
      }
      iVar1 = strcmp(param_3,"oeap");
      if ((iVar1 == 0) || (iVar1 = strcmp(param_3,"oaep"), iVar1 == 0)) {
        uVar3 = FUN_003fb92c(param_1,4);
        return uVar3;
      }
      iVar1 = strcmp(param_3,"x931");
      if (iVar1 == 0) {
        uVar3 = FUN_003fb92c(param_1,5);
        return uVar3;
      }
      iVar1 = strcmp(param_3,"pss");
      if (iVar1 != 0) {
        FUN_00379868();
        FUN_0037995c("crypto/rsa/rsa_pmeth.c",0x293,"pkey_rsa_ctrl_str");
        FUN_00379a5c(4,0x76,0);
        return 0xfffffffe;
      }
      uVar3 = FUN_003fb92c(param_1,6);
      return uVar3;
    }
    iVar1 = strcmp(param_2,"rsa_pss_saltlen");
    if (iVar1 == 0) {
      iVar1 = strcmp(param_3,"digest");
      if (iVar1 == 0) {
        uVar3 = FUN_003fc0a8(param_1,0xffffffff);
        return uVar3;
      }
      iVar1 = strcmp(param_3,"max");
      if (iVar1 != 0) {
        iVar1 = strcmp(param_3,"auto");
        if (iVar1 != 0) {
          iVar1 = atoi(param_3);
          uVar3 = FUN_003fc0a8(param_1,iVar1);
          return uVar3;
        }
        uVar3 = FUN_003fc0a8(param_1,0xfffffffe);
        return uVar3;
      }
      uVar3 = FUN_003fc0a8(param_1,0xfffffffd);
      return uVar3;
    }
    iVar1 = strcmp(param_2,"rsa_keygen_bits");
    if (iVar1 == 0) {
      iVar1 = atoi(param_3);
      uVar3 = FUN_003fc20c(param_1,iVar1);
      return uVar3;
    }
    iVar1 = strcmp(param_2,"rsa_keygen_pubexp");
    if (iVar1 == 0) {
      local_18 = 0;
      uVar3 = FUN_003d0520(&local_18,param_3);
      if ((int)uVar3 != 0) {
        uVar3 = FUN_003fc3ac(param_1,local_18);
        FUN_0038f4f4(local_18);
        return uVar3 & 0xffffffff;
      }
    }
    else {
      iVar1 = strcmp(param_2,"rsa_keygen_primes");
      if (iVar1 == 0) {
        iVar1 = atoi(param_3);
        uVar3 = FUN_003fc420(param_1,iVar1);
        return uVar3;
      }
      iVar1 = strcmp(param_2,"rsa_mgf1_md");
      if (iVar1 == 0) {
        uVar3 = FUN_003b425c(param_1,0x7f0,0x1005,param_3);
        return uVar3;
      }
      if (**(int **)(param_1 + 0x78) == 0x390) {
        iVar1 = strcmp(param_2,"rsa_pss_keygen_mgf1_md");
        if (iVar1 == 0) {
          uVar3 = FUN_003b425c(param_1,4,0x1005,param_3);
          return uVar3;
        }
        iVar1 = strcmp(param_2,"rsa_pss_keygen_md");
        if (iVar1 == 0) {
          uVar3 = FUN_003b425c(param_1,4,1,param_3);
          return uVar3;
        }
        iVar1 = strcmp(param_2,"rsa_pss_keygen_saltlen");
        if (iVar1 == 0) {
          iVar1 = atoi(param_3);
          uVar3 = FUN_003fc128(param_1,iVar1);
          return uVar3;
        }
      }
      iVar1 = strcmp(param_2,"rsa_oaep_md");
      if (iVar1 == 0) {
        uVar3 = FUN_003b425c(param_1,0x600,0x1009,param_3);
        return uVar3;
      }
      iVar1 = strcmp(param_2,"rsa_oaep_label");
      if (iVar1 != 0) {
        return 0xfffffffe;
      }
      uVar2 = FUN_003ca840(param_3,&local_18);
      uVar3 = uVar2;
      if ((uVar2 != 0) &&
         (uVar3 = FUN_003fbe80(param_1,uVar2,local_18 & 0xffffffff), (int)uVar3 < 1)) {
        FUN_003c86b4(uVar2,"crypto/rsa/rsa_pmeth.c",0x2e2);
        return uVar3 & 0xffffffff;
      }
    }
  }
  return uVar3;
}


// ===== 00403404  FUN_00403404 =====

bool FUN_00403404(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    return true;
  }
  FUN_003b0a80(*(undefined8 *)(param_2 + 0x88));
  iVar1 = FUN_003f9914();
  lVar2 = FUN_003c83a4((long)iVar1,"crypto/rsa/rsa_pmeth.c",0x77);
  *(long *)(param_1 + 0x38) = lVar2;
  return lVar2 != 0;
}


// ===== 0040345c  FUN_0040345c =====

undefined8 FUN_0040345c(long param_1,int param_2)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_1 == 0) {
    return 1;
  }
  uVar1 = FUN_003899b0();
  if (param_2 == 3) {
    uVar3 = 0x8d;
    uVar4 = 0x18b;
  }
  else if (param_2 == 5) {
    uVar1 = FUN_004076b0(uVar1 & 0xffffffff);
    if ((int)uVar1 != -1) {
      return 1;
    }
    uVar3 = 0x8e;
    uVar4 = 0x191;
  }
  else {
    iVar2 = (int)uVar1;
    uVar1 = 1;
    uVar3 = 0x9d;
    uVar4 = 0x1ab;
    if (iVar2 < 0x2a0) {
      if ((iVar2 - 0x40U < 0x36) &&
         ((1L << ((ulong)(iVar2 - 0x40U) & 0x3f) & 0x24000080000001U) != 0)) {
        return 1;
      }
      if (iVar2 - 3U < 2) {
        return 1;
      }
      if (iVar2 == 0x101) {
        return 1;
      }
    }
    else if ((iVar2 - 0x446U < 6) || (iVar2 - 0x2a0U < 4)) {
      return 1;
    }
  }
  FUN_00379868(uVar1);
  FUN_0037995c("crypto/rsa/rsa_pmeth.c",uVar4,"check_padding_md");
  FUN_00379a5c(4,uVar3,0);
  return 0;
}


// ===== 00403570  FUN_00403570 =====

undefined8 FUN_00403570(long param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  int local_3c;
  undefined8 local_38;
  undefined8 local_18;
  
  if (**(int **)(param_1 + 0x78) != 0x390) {
    return 0;
  }
  lVar6 = *(long *)(param_1 + 0x98);
  lVar4 = FUN_003b0a80(*(undefined8 *)(param_1 + 0x88));
  if (*(long *)(lVar4 + 0x80) != 0) {
    uVar5 = FUN_003ef7ec(*(long *)(lVar4 + 0x80),&local_18,&local_38,&local_3c);
    if ((int)uVar5 != 0) {
      iVar1 = FUN_003f9914(lVar4);
      iVar2 = FUN_00389a38(local_18);
      uVar3 = FUN_003f990c(lVar4);
      if (local_3c <= (int)((iVar1 - iVar2) - (uint)((uVar3 & 7) == 1))) {
        *(int *)(lVar6 + 0x30) = local_3c;
        *(int *)(lVar6 + 0x34) = local_3c;
        *(undefined8 *)(lVar6 + 0x20) = local_18;
        *(undefined8 *)(lVar6 + 0x28) = local_38;
        return 1;
      }
      FUN_00379868();
      FUN_0037995c("crypto/rsa/rsa_pmeth.c",0x367,"pkey_pss_init");
      FUN_00379a5c(4,0x96,0);
      uVar5 = 0;
    }
    return uVar5;
  }
  return 1;
}


// ===== 0040369c  FUN_0040369c =====

void FUN_0040369c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x18) + 0x68);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004036b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
    return;
  }
  FUN_004036c4(param_1,param_2,2);
  return;
}


// ===== 004036c4  FUN_004036c4 =====

undefined8 FUN_004036c4(long param_1,ulong param_2,int param_3,long param_4,undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE_00;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)(param_1 + 0x18) + 0x70);
  if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004036d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE_00)();
    return uVar2;
  }
  UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)(param_1 + 0x18) + 0x68);
  if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
    if (param_3 == 2) {
                    /* WARNING: Could not recover jumptable at 0x004036ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE_00)(param_1,param_2,param_4,param_5);
      return uVar2;
    }
    return 0;
  }
  if ((0x7ff < (int)param_2) && (param_3 == 2)) {
    if (param_4 != 0) {
      param_2 = param_2 & 0xffffffff;
      iVar1 = FUN_0038f2c0(param_4);
      if (iVar1 < 0x11) {
        uVar2 = FUN_00403774(param_1,param_2,2);
        return uVar2;
      }
    }
    uVar2 = FUN_00407268(param_1,param_2,param_4,param_5);
    return uVar2;
  }
  uVar2 = FUN_00403774();
  return uVar2;
}


// ===== 00403774  FUN_00403774 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00403774(long *param_1,uint param_2,ulong param_3,long param_4,undefined8 param_5)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  long *plVar22;
  ulong uVar23;
  ulong uVar24;
  uint *puVar25;
  ulong uVar26;
  undefined4 uVar27;
  long *plVar28;
  long *plVar29;
  long lVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  int local_bc;
  int local_b8;
  int local_ac;
  int local_a8;
  int local_a4;
  long local_88;
  uint local_74 [5];
  
  if ((int)param_2 < 0x200) {
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_gen.c",0x59,"rsa_multiprime_keygen");
    uVar18 = 0x78;
LAB_00403874:
    FUN_00379a5c(4,uVar18,0);
    return 0;
  }
  if (param_4 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_gen.c",0x5d,"rsa_multiprime_keygen");
    uVar18 = 0x65;
    goto LAB_00403874;
  }
  uVar21 = (uint)param_3;
  iVar5 = FUN_00405f5c(param_4);
  if (iVar5 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_gen.c",0x62,"rsa_multiprime_keygen");
    uVar18 = 0xb2;
    goto LAB_00403874;
  }
  if (((int)uVar21 < 2) || (iVar5 = FUN_003fc720(param_2), iVar5 < (int)uVar21)) {
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_gen.c",0x67,"rsa_multiprime_keygen");
    uVar18 = 0xa5;
    goto LAB_00403874;
  }
  lVar9 = FUN_00391448(param_1[1]);
  if (lVar9 != 0) {
    FUN_003916e0(lVar9);
    uVar18 = FUN_00391898(lVar9);
    uVar10 = FUN_00391898(lVar9);
    lVar11 = FUN_00391898(lVar9);
    if (lVar11 != 0) {
      uVar20 = 0;
      if (uVar21 != 0) {
        uVar20 = param_2 / uVar21;
      }
      param_2 = param_2 - uVar20 * uVar21;
      uVar23 = CONCAT44(0,param_2);
      if (7 < uVar21) {
        uVar24 = param_3 & 0x7ffffff8;
        puVar25 = local_74 + 4;
        uVar26 = uVar24;
        lVar12 = _DAT_00200740;
        lVar15 = _UNK_00200748;
        lVar19 = _DAT_002003a0;
        lVar30 = _UNK_002003a8;
        do {
          auVar31._0_8_ = lVar19 + 4;
          auVar31._8_8_ = lVar30 + 4;
          auVar33._0_8_ = lVar12 + 4;
          auVar33._8_8_ = lVar15 + 4;
          uVar26 = uVar26 - 8;
          auVar32._8_4_ = param_2;
          auVar32._0_8_ = uVar23;
          auVar32._12_4_ = 0;
          auVar35._8_8_ = lVar30;
          auVar35._0_8_ = lVar19;
          auVar35 = NEON_cmhi(auVar32,auVar35,8);
          auVar34._8_4_ = param_2;
          auVar34._0_8_ = uVar23;
          auVar34._12_4_ = 0;
          auVar36._8_8_ = lVar15;
          auVar36._0_8_ = lVar12;
          auVar36 = NEON_cmhi(auVar34,auVar36,8);
          lVar12 = lVar12 + 8;
          lVar15 = lVar15 + 8;
          lVar19 = lVar19 + 8;
          lVar30 = lVar30 + 8;
          auVar3._8_4_ = param_2;
          auVar3._0_8_ = uVar23;
          auVar3._12_4_ = 0;
          auVar34 = NEON_cmhi(auVar3,auVar33,8);
          auVar4._8_4_ = param_2;
          auVar4._0_8_ = uVar23;
          auVar4._12_4_ = 0;
          auVar32 = NEON_cmhi(auVar4,auVar31,8);
          *puVar25 = uVar20 - auVar36._0_4_;
          puVar25[1] = uVar20 - auVar36._8_4_;
          puVar25[-4] = uVar20 - auVar35._0_4_;
          puVar25[-3] = uVar20 - auVar35._8_4_;
          puVar25[4] = uVar20 - auVar34._0_4_;
          puVar25[5] = uVar20 - auVar34._8_4_;
          *puVar25 = uVar20 - auVar32._0_4_;
          puVar25[1] = uVar20 - auVar32._8_4_;
          puVar25 = puVar25 + 8;
          if (uVar26 == 0) goto joined_r0x00403980;
        } while( true );
      }
      uVar24 = 0;
      do {
        uVar1 = uVar20;
        if (uVar24 < uVar23) {
          uVar1 = uVar20 + 1;
        }
        local_74[uVar24] = uVar1;
        uVar24 = uVar24 + 1;
joined_r0x00403980:
      } while (uVar24 != (param_3 & 0xffffffff));
      *(int *)(param_1 + 0x1b) = (int)param_1[0x1b] + 1;
      if (param_1[5] == 0) {
        lVar12 = FUN_0038f584();
        param_1[5] = lVar12;
        if (lVar12 == 0) goto LAB_00404084;
      }
      lVar12 = param_1[7];
      if (lVar12 == 0) {
        lVar12 = FUN_0038f5b4();
        param_1[7] = lVar12;
        if (lVar12 == 0) goto LAB_00404084;
      }
      FUN_00390944(lVar12,4);
      if (param_1[6] == 0) {
        lVar12 = FUN_0038f584();
        param_1[6] = lVar12;
        if (lVar12 == 0) goto LAB_00404084;
      }
      plVar28 = param_1 + 8;
      lVar12 = *plVar28;
      if (lVar12 == 0) {
        lVar12 = FUN_0038f5b4();
        *plVar28 = lVar12;
        if (lVar12 == 0) goto LAB_00404084;
      }
      FUN_00390944(lVar12,4);
      plVar22 = param_1 + 9;
      lVar12 = *plVar22;
      if (lVar12 == 0) {
        lVar12 = FUN_0038f5b4();
        *plVar22 = lVar12;
        if (lVar12 == 0) goto LAB_00404084;
      }
      FUN_00390944(lVar12,4);
      lVar12 = param_1[10];
      if (lVar12 == 0) {
        lVar12 = FUN_0038f5b4();
        param_1[10] = lVar12;
        if (lVar12 == 0) goto LAB_00404084;
      }
      FUN_00390944(lVar12,4);
      lVar12 = param_1[0xb];
      if (lVar12 == 0) {
        lVar12 = FUN_0038f5b4();
        param_1[0xb] = lVar12;
        if (lVar12 == 0) goto LAB_00404084;
      }
      FUN_00390944(lVar12,4);
      lVar12 = param_1[0xc];
      if (lVar12 == 0) {
        lVar12 = FUN_0038f5b4();
        param_1[0xc] = lVar12;
        if (lVar12 == 0) goto LAB_00404084;
      }
      FUN_00390944(lVar12,4);
      if (uVar21 - 2 == 0) {
        plVar29 = (long *)0x0;
        local_88 = 0;
      }
      else {
        *(undefined4 *)(param_1 + 2) = 1;
        local_88 = FUN_0040bf38(0,uVar21 - 2);
        if (local_88 == 0) goto LAB_00404084;
        if (param_1[0x11] != 0) {
          FUN_0040ca6c(param_1[0x11],FUN_003fc554);
        }
        uVar20 = uVar21;
        if ((int)uVar21 < 4) {
          uVar20 = 3;
        }
        iVar5 = uVar20 - 2;
        param_1[0x11] = local_88;
        do {
          plVar29 = (long *)FUN_003fc5a0();
          if (plVar29 == (long *)0x0) goto LAB_00404084;
          FUN_0040c89c(local_88,plVar29);
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      lVar12 = FUN_0038f85c(param_1[6],param_4);
      if (lVar12 != 0) {
        iVar5 = 0;
        local_bc = 0;
        local_b8 = 0;
LAB_00403b2c:
        plVar13 = plVar28;
        if ((iVar5 != 0) && (plVar13 = plVar22, iVar5 != 1)) {
          plVar29 = (long *)FUN_0040cb0c(local_88,iVar5 + -2);
          plVar13 = plVar29;
        }
        lVar12 = *plVar13;
        FUN_00390944(lVar12,4);
        uVar20 = local_74[iVar5];
        local_ac = 0;
        local_a8 = 0;
        local_bc = uVar20 + local_bc;
        while( true ) {
          iVar8 = uVar20 + local_a8;
          iVar6 = FUN_003f50c4(lVar12,iVar8,0,0,0,param_5,lVar9);
          if (iVar6 == 0) break;
          local_a4 = local_b8;
          while( true ) {
            if (0 < iVar5) {
              iVar6 = 0;
              do {
                while( true ) {
                  plVar13 = plVar28;
                  if ((iVar6 != 0) && (plVar13 = plVar22, iVar6 != 1)) {
                    plVar13 = (long *)FUN_0040cb0c(local_88,iVar6 + -2);
                  }
                  iVar7 = FUN_00390208(lVar12,*plVar13);
                  if (iVar7 != 0) break;
                  iVar7 = FUN_003f50c4(lVar12,iVar8,0,0,0,param_5,lVar9);
                  iVar6 = 0;
                  if (iVar7 == 0) goto LAB_00404084;
                }
                iVar6 = iVar6 + 1;
              } while (iVar6 != iVar5);
            }
            uVar14 = FUN_0038f23c();
            iVar8 = FUN_00398f34(lVar11,lVar12,uVar14);
            if (iVar8 == 0) goto LAB_00404084;
            FUN_0037f6d4();
            FUN_00390944(lVar11,4);
            lVar15 = FUN_00396a18(uVar10,lVar11,param_1[6],lVar9);
            if (lVar15 == 0) break;
            if (iVar5 != 1) {
              if (iVar5 != 0) {
                lVar19 = param_1[5];
                lVar15 = lVar12;
                plVar13 = param_1;
                goto LAB_00403c9c;
              }
              iVar8 = FUN_003f5054(param_5,3,0);
              if (iVar8 == 0) goto LAB_00404084;
LAB_00403e04:
              iVar5 = iVar5 + 1;
              if (iVar5 < (int)uVar21) goto LAB_00403b2c;
              iVar5 = FUN_00390208(*plVar28,*plVar22);
              lVar12 = *plVar28;
              if (iVar5 < 0) {
                lVar12 = *plVar22;
                *plVar22 = *plVar28;
                *plVar28 = lVar12;
              }
              uVar14 = FUN_0038f23c();
              iVar5 = FUN_00398f34(uVar10,lVar12,uVar14);
              if (iVar5 == 0) goto LAB_00404084;
              lVar12 = *plVar22;
              uVar14 = FUN_0038f23c();
              iVar5 = FUN_00398f34(lVar11,lVar12,uVar14);
              if ((iVar5 == 0) || (iVar5 = FUN_00392a80(uVar18,uVar10,lVar11,lVar9), iVar5 == 0))
              goto LAB_00404084;
              if (uVar21 == 2) goto LAB_00403efc;
              iVar5 = 0;
              uVar20 = uVar21;
              if ((int)uVar21 < 4) {
                uVar20 = 3;
              }
              goto LAB_00403eac;
            }
            lVar19 = *plVar28;
            lVar15 = *plVar22;
            plVar13 = plVar22;
LAB_00403c9c:
            iVar8 = FUN_00392a80(plVar13,uVar10,lVar19,lVar15,lVar9);
            if ((iVar8 == 0) || (iVar8 = FUN_0039886c(lVar11,uVar10,local_bc + -4), iVar8 == 0))
            goto LAB_00404084;
            uVar23 = FUN_0038f9c0(lVar11);
            if (0xfffffffffffffff8 < uVar23 - 0x10) {
              if (((iVar5 < 2) || (lVar12 = FUN_0038f85c(plVar29[3],param_1[5]), lVar12 != 0)) &&
                 (lVar12 = FUN_0038f85c(param_1[5],uVar10), lVar12 != 0)) {
                iVar8 = FUN_003f5054(param_5,3,iVar5);
                local_b8 = local_a4;
                if (iVar8 != 0) goto LAB_00403e04;
              }
              goto LAB_00404084;
            }
            iVar8 = FUN_003f5054(param_5,2,local_a4);
            if (iVar8 == 0) goto LAB_00404084;
            local_a4 = local_a4 + 1;
            if ((int)uVar21 < 5) {
              if (local_ac == 4) {
                iVar5 = -1;
                local_bc = 0;
                local_b8 = local_a4;
                goto LAB_00403e04;
              }
            }
            else if (uVar23 < 9) {
              local_a8 = local_a8 + 1;
            }
            else {
              local_a8 = local_a8 + -1;
            }
            local_ac = local_ac + 1;
            iVar8 = uVar20 + local_a8;
            iVar6 = FUN_003f50c4(lVar12,iVar8,0,0,0,param_5,lVar9);
            if (iVar6 == 0) goto LAB_00404084;
          }
          iVar8 = FUN_0037a744();
          if (iVar8 != 0x180006c) break;
          FUN_0037f71c();
          local_b8 = local_a4 + 1;
          iVar8 = FUN_003f5054(param_5,2);
          if (iVar8 == 0) break;
        }
      }
    }
  }
  goto LAB_00404084;
  while (iVar5 = iVar5 + 1, uVar20 - 2 != iVar5) {
LAB_00403eac:
    puVar16 = (undefined8 *)FUN_0040cb0c(local_88,iVar5);
    uVar14 = *puVar16;
    uVar2 = puVar16[1];
    uVar17 = FUN_0038f23c();
    iVar8 = FUN_00398f34(uVar2,uVar14,uVar17);
    if ((iVar8 == 0) || (iVar8 = FUN_00392a80(uVar18,uVar18,puVar16[1],lVar9), iVar8 == 0))
    goto LAB_00404084;
  }
LAB_00403efc:
  lVar12 = FUN_0038f584();
  if (lVar12 != 0) {
    FUN_003908e4(lVar12,uVar18,4);
    lVar15 = FUN_00396a18(param_1[7],param_1[6],lVar12,lVar9);
    FUN_0038f4f4(lVar12);
    if ((lVar15 != 0) && (lVar12 = FUN_0038f584(), lVar12 != 0)) {
      FUN_003908e4(lVar12,param_1[7],4);
      iVar5 = FUN_00397cac(0,param_1[10],lVar12,uVar10,lVar9);
      if ((iVar5 != 0) && (iVar5 = FUN_00397cac(0,param_1[0xb],lVar12,lVar11,lVar9), iVar5 != 0)) {
        if (uVar21 != 2) {
          iVar5 = 0;
          uVar20 = uVar21;
          if ((int)uVar21 < 4) {
            uVar20 = 3;
          }
          do {
            lVar11 = FUN_0040cb0c(local_88,iVar5);
            iVar8 = FUN_00397cac(0,*(undefined8 *)(lVar11 + 8),lVar12,*(undefined8 *)(lVar11 + 8),
                                 lVar9);
            if (iVar8 == 0) goto LAB_0040407c;
            iVar5 = iVar5 + 1;
          } while (uVar20 - 2 != iVar5);
        }
        FUN_0038f4f4(lVar12);
        lVar12 = FUN_0038f584();
        if (lVar12 == 0) goto LAB_00404084;
        FUN_003908e4(lVar12,param_1[8],4);
        lVar11 = FUN_00396a18(param_1[0xc],param_1[9],lVar12,lVar9);
        if (lVar11 != 0) {
          if (uVar21 != 2) {
            iVar5 = 0;
            if ((int)uVar21 < 4) {
              uVar21 = 3;
            }
            do {
              puVar16 = (undefined8 *)FUN_0040cb0c(local_88,iVar5);
              FUN_003908e4(lVar12,*puVar16,4);
              lVar11 = FUN_00396a18(puVar16[2],puVar16[3],lVar12,lVar9);
              if (lVar11 == 0) goto LAB_0040407c;
              iVar5 = iVar5 + 1;
            } while (uVar21 - 2 != iVar5);
          }
          FUN_0038f4f4(lVar12);
          uVar27 = 1;
          goto LAB_004040b8;
        }
      }
LAB_0040407c:
      FUN_0038f4f4(lVar12);
    }
  }
LAB_00404084:
  FUN_00379868();
  FUN_0037995c("crypto/rsa/rsa_gen.c",0x1a0,"rsa_multiprime_keygen");
  FUN_00379a5c(4,0x80003,0);
  uVar27 = 0;
LAB_004040b8:
  FUN_0039180c(lVar9);
  FUN_00391550(lVar9);
  return uVar27;
}


// ===== 004040d0  FUN_004040d0 =====

void FUN_004040d0(void)

{
  FUN_004040e0();
  return;
}


// ===== 004040e0  FUN_004040e0 =====

undefined4
FUN_004040e0(long param_1,undefined8 param_2,long param_3,long param_4,byte *param_5,uint param_6)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined8 uVar13;
  ulong __n;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  byte *pbVar18;
  byte *pbVar19;
  undefined4 uVar20;
  uint uVar21;
  ulong uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined1 auStack_a0 [64];
  
  pbVar11 = (byte *)FUN_0039d270();
  pbVar12 = pbVar11;
  if (pbVar11 == (byte *)0x0) {
LAB_004042c8:
    uVar20 = 0;
    goto LAB_00404304;
  }
  lVar16 = param_3;
  if (param_4 != 0) {
    lVar16 = param_4;
  }
  uVar8 = FUN_00389a38(param_3);
  if (-1 < (int)uVar8) {
    uVar21 = uVar8;
    if ((param_6 == 0xffffffff) ||
       (uVar21 = param_6, param_6 != 0xfffffffb && (int)(param_6 + 5) < 0 == SCARRY4(param_6,5))) {
      iVar9 = FUN_0038f2c0(*(undefined8 *)(param_1 + 0x28));
      uVar3 = iVar9 - 1U & 7;
      iVar9 = FUN_003f9914(param_1);
      if (*param_5 >> (ulong)uVar3 == 0) {
        bVar7 = uVar3 == 0;
        pbVar4 = param_5;
        if (bVar7) {
          pbVar4 = param_5 + 1;
        }
        uVar6 = iVar9 - (uint)bVar7;
        if ((int)uVar6 < (int)(uVar8 + 2)) {
          FUN_00379868();
          uVar13 = 0x55;
        }
        else {
          uVar5 = (uVar6 - uVar8) - 2;
          uVar17 = uVar5;
          if ((uVar21 == 0xfffffffd) || (uVar17 = uVar21, (int)uVar21 <= (int)uVar5)) {
            if (pbVar4[(ulong)uVar6 - 1] != 0xbc) {
              FUN_00379868();
              FUN_0037995c("crypto/rsa/rsa_pss.c",0x5f,"RSA_verify_PKCS1_PSS_mgf1");
              uVar13 = 0x86;
              goto LAB_004042f4;
            }
            uVar6 = uVar6 + ~uVar8;
            uVar22 = (ulong)(int)uVar6;
            pbVar12 = (byte *)FUN_003c83a4(uVar22,"crypto/rsa/rsa_pss.c",100);
            if (pbVar12 == (byte *)0x0) goto LAB_004042c8;
            __n = (ulong)uVar8;
            iVar10 = FUN_003feb30(pbVar12,uVar22,pbVar4 + uVar22,__n,lVar16);
            if (-1 < iVar10) {
              if (0 < (int)uVar6) {
                if (uVar6 < 8) {
                  uVar14 = 0;
                }
                else {
                  if (uVar6 < 0x20) {
                    uVar15 = 0;
                  }
                  else {
                    uVar14 = uVar22 & 0x7fffffe0;
                    pbVar19 = pbVar12 + 0x10;
                    pbVar18 = param_5 + (ulong)bVar7 + 0x10;
                    uVar15 = uVar14;
                    do {
                      uVar24 = *(undefined8 *)(pbVar19 + -8);
                      uVar13 = *(undefined8 *)(pbVar19 + -0x10);
                      uVar29 = *(undefined8 *)(pbVar19 + 8);
                      uVar28 = *(undefined8 *)pbVar19;
                      uVar15 = uVar15 - 0x20;
                      uVar25 = *(undefined8 *)(pbVar18 + -8);
                      uVar23 = *(undefined8 *)(pbVar18 + -0x10);
                      uVar27 = *(undefined8 *)(pbVar18 + 8);
                      uVar26 = *(undefined8 *)pbVar18;
                      pbVar18 = pbVar18 + 0x20;
                      *(ulong *)(pbVar19 + -8) =
                           CONCAT17((byte)((ulong)uVar24 >> 0x38) ^ (byte)((ulong)uVar25 >> 0x38),
                                    CONCAT16((byte)((ulong)uVar24 >> 0x30) ^
                                             (byte)((ulong)uVar25 >> 0x30),
                                             CONCAT15((byte)((ulong)uVar24 >> 0x28) ^
                                                      (byte)((ulong)uVar25 >> 0x28),
                                                      CONCAT14((byte)((ulong)uVar24 >> 0x20) ^
                                                               (byte)((ulong)uVar25 >> 0x20),
                                                               CONCAT13((byte)((ulong)uVar24 >> 0x18
                                                                              ) ^ (byte)((ulong)
                                                  uVar25 >> 0x18),
                                                  CONCAT12((byte)((ulong)uVar24 >> 0x10) ^
                                                           (byte)((ulong)uVar25 >> 0x10),
                                                           CONCAT11((byte)((ulong)uVar24 >> 8) ^
                                                                    (byte)((ulong)uVar25 >> 8),
                                                                    (byte)uVar24 ^ (byte)uVar25)))))
                                            ));
                      *(ulong *)(pbVar19 + -0x10) =
                           CONCAT17((byte)((ulong)uVar13 >> 0x38) ^ (byte)((ulong)uVar23 >> 0x38),
                                    CONCAT16((byte)((ulong)uVar13 >> 0x30) ^
                                             (byte)((ulong)uVar23 >> 0x30),
                                             CONCAT15((byte)((ulong)uVar13 >> 0x28) ^
                                                      (byte)((ulong)uVar23 >> 0x28),
                                                      CONCAT14((byte)((ulong)uVar13 >> 0x20) ^
                                                               (byte)((ulong)uVar23 >> 0x20),
                                                               CONCAT13((byte)((ulong)uVar13 >> 0x18
                                                                              ) ^ (byte)((ulong)
                                                  uVar23 >> 0x18),
                                                  CONCAT12((byte)((ulong)uVar13 >> 0x10) ^
                                                           (byte)((ulong)uVar23 >> 0x10),
                                                           CONCAT11((byte)((ulong)uVar13 >> 8) ^
                                                                    (byte)((ulong)uVar23 >> 8),
                                                                    (byte)uVar13 ^ (byte)uVar23)))))
                                            ));
                      *(ulong *)(pbVar19 + 8) =
                           CONCAT17((byte)((ulong)uVar29 >> 0x38) ^ (byte)((ulong)uVar27 >> 0x38),
                                    CONCAT16((byte)((ulong)uVar29 >> 0x30) ^
                                             (byte)((ulong)uVar27 >> 0x30),
                                             CONCAT15((byte)((ulong)uVar29 >> 0x28) ^
                                                      (byte)((ulong)uVar27 >> 0x28),
                                                      CONCAT14((byte)((ulong)uVar29 >> 0x20) ^
                                                               (byte)((ulong)uVar27 >> 0x20),
                                                               CONCAT13((byte)((ulong)uVar29 >> 0x18
                                                                              ) ^ (byte)((ulong)
                                                  uVar27 >> 0x18),
                                                  CONCAT12((byte)((ulong)uVar29 >> 0x10) ^
                                                           (byte)((ulong)uVar27 >> 0x10),
                                                           CONCAT11((byte)((ulong)uVar29 >> 8) ^
                                                                    (byte)((ulong)uVar27 >> 8),
                                                                    (byte)uVar29 ^ (byte)uVar27)))))
                                            ));
                      *(ulong *)pbVar19 =
                           CONCAT17((byte)((ulong)uVar28 >> 0x38) ^ (byte)((ulong)uVar26 >> 0x38),
                                    CONCAT16((byte)((ulong)uVar28 >> 0x30) ^
                                             (byte)((ulong)uVar26 >> 0x30),
                                             CONCAT15((byte)((ulong)uVar28 >> 0x28) ^
                                                      (byte)((ulong)uVar26 >> 0x28),
                                                      CONCAT14((byte)((ulong)uVar28 >> 0x20) ^
                                                               (byte)((ulong)uVar26 >> 0x20),
                                                               CONCAT13((byte)((ulong)uVar28 >> 0x18
                                                                              ) ^ (byte)((ulong)
                                                  uVar26 >> 0x18),
                                                  CONCAT12((byte)((ulong)uVar28 >> 0x10) ^
                                                           (byte)((ulong)uVar26 >> 0x10),
                                                           CONCAT11((byte)((ulong)uVar28 >> 8) ^
                                                                    (byte)((ulong)uVar26 >> 8),
                                                                    (byte)uVar28 ^ (byte)uVar26)))))
                                            ));
                      pbVar19 = pbVar19 + 0x20;
                    } while (uVar15 != 0);
                    if (uVar14 == uVar22) goto LAB_004043f8;
                    uVar15 = uVar14;
                    if ((uVar22 & 0x18) == 0) goto LAB_004043d0;
                  }
                  uVar14 = uVar22 & 0x7ffffff8;
                  lVar16 = uVar15 - uVar14;
                  pbVar19 = param_5 + uVar15 + bVar7;
                  pbVar18 = pbVar12 + uVar15;
                  do {
                    uVar13 = *(undefined8 *)pbVar19;
                    uVar24 = *(undefined8 *)pbVar18;
                    lVar16 = lVar16 + 8;
                    *(ulong *)pbVar18 =
                         CONCAT17((byte)((ulong)uVar24 >> 0x38) ^ (byte)((ulong)uVar13 >> 0x38),
                                  CONCAT16((byte)((ulong)uVar24 >> 0x30) ^
                                           (byte)((ulong)uVar13 >> 0x30),
                                           CONCAT15((byte)((ulong)uVar24 >> 0x28) ^
                                                    (byte)((ulong)uVar13 >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar24 >> 0x20) ^
                                                             (byte)((ulong)uVar13 >> 0x20),
                                                             CONCAT13((byte)((ulong)uVar24 >> 0x18)
                                                                      ^ (byte)((ulong)uVar13 >> 0x18
                                                                              ),
                                                                      CONCAT12((byte)((ulong)uVar24
                                                                                     >> 0x10) ^
                                                                               (byte)((ulong)uVar13
                                                                                     >> 0x10),
                                                                               CONCAT11((byte)((
                                                  ulong)uVar24 >> 8) ^ (byte)((ulong)uVar13 >> 8),
                                                  (byte)uVar24 ^ (byte)uVar13)))))));
                    pbVar19 = pbVar19 + 8;
                    pbVar18 = pbVar18 + 8;
                  } while (lVar16 != 0);
                  if (uVar14 == uVar22) goto LAB_004043f8;
                }
LAB_004043d0:
                lVar16 = uVar22 - uVar14;
                pbVar19 = pbVar12 + uVar14;
                pbVar18 = param_5 + uVar14 + bVar7;
                do {
                  lVar16 = lVar16 + -1;
                  *pbVar19 = *pbVar19 ^ *pbVar18;
                  pbVar19 = pbVar19 + 1;
                  pbVar18 = pbVar18 + 1;
                } while (lVar16 != 0);
              }
LAB_004043f8:
              if (uVar3 != 0) {
                *pbVar12 = *pbVar12 & (byte)(0xff >> (ulong)(8 - uVar3 & 0x1f));
              }
              lVar16 = 0;
              do {
                pbVar19 = pbVar12 + lVar16;
                lVar2 = lVar16 + 1;
                if (*pbVar19 != 0) break;
                bVar1 = lVar16 < (int)(uVar6 - 1);
                lVar16 = lVar2;
              } while (bVar1);
              if (*pbVar19 == 1) {
                uVar21 = (uint)lVar2;
                if (((uVar17 & 0xfffffffd) == 0xfffffffc) ||
                   ((~uVar8 + (iVar9 - (uint)bVar7)) - uVar17 == uVar21)) {
                  iVar9 = FUN_0039d92c(pbVar11,param_3,0);
                  if ((((iVar9 != 0) && (iVar9 = FUN_0039d938(pbVar11,&DAT_0020e524,8), iVar9 != 0))
                      && (iVar9 = FUN_0039d938(pbVar11,param_2,__n), iVar9 != 0)) &&
                     (((uVar6 == uVar21 ||
                       (iVar9 = FUN_0039d938(pbVar11,pbVar12 + lVar2,(long)(int)(uVar6 - uVar21)),
                       iVar9 != 0)) && (iVar9 = FUN_0039dac8(pbVar11,auStack_a0,0), iVar9 != 0)))) {
                    iVar9 = memcmp(auStack_a0,pbVar4 + uVar22,__n);
                    if (iVar9 == 0) {
                      uVar20 = 1;
                      goto LAB_00404304;
                    }
                    FUN_00379868();
                    FUN_0037995c("crypto/rsa/rsa_pss.c",0x85,"RSA_verify_PKCS1_PSS_mgf1");
                    uVar13 = 0x68;
                    goto LAB_00404554;
                  }
                }
                else {
                  FUN_00379868();
                  FUN_0037995c("crypto/rsa/rsa_pss.c",0x75,"RSA_verify_PKCS1_PSS_mgf1");
                  FUN_00379a5c(4,0x88,"expected: %d retrieved: %d",uVar17,
                               (ulong)uVar6 - lVar2 & 0xffffffff);
                }
              }
              else {
                FUN_00379868();
                FUN_0037995c("crypto/rsa/rsa_pss.c",0x6f,"RSA_verify_PKCS1_PSS_mgf1");
                uVar13 = 0x87;
LAB_00404554:
                FUN_00379a5c(4,uVar13,0);
              }
            }
            uVar20 = 0;
            goto LAB_00404304;
          }
          FUN_00379868();
          uVar13 = 0x5b;
        }
        FUN_0037995c("crypto/rsa/rsa_pss.c",uVar13,"RSA_verify_PKCS1_PSS_mgf1");
        uVar13 = 0x6d;
      }
      else {
        FUN_00379868();
        FUN_0037995c("crypto/rsa/rsa_pss.c",0x4d,"RSA_verify_PKCS1_PSS_mgf1");
        uVar13 = 0x85;
      }
    }
    else {
      FUN_00379868();
      FUN_0037995c("crypto/rsa/rsa_pss.c",0x46,"RSA_verify_PKCS1_PSS_mgf1");
      uVar13 = 0x88;
    }
LAB_004042f4:
    FUN_00379a5c(4,uVar13,0);
  }
  uVar20 = 0;
  pbVar12 = (byte *)0x0;
LAB_00404304:
  FUN_003c86b4(pbVar12,"crypto/rsa/rsa_pss.c",0x8c);
  FUN_0039d284(pbVar11);
  return uVar20;
}


// ===== 004045b8  FUN_004045b8 =====

void FUN_004045b8(void)

{
  FUN_004045c4();
  return;
}


// ===== 004045c4  FUN_004045c4 =====

undefined4
FUN_004045c4(long param_1,byte *param_2,undefined8 param_3,long param_4,long param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  undefined8 uVar8;
  byte *pbVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  byte *pbVar14;
  byte *pbVar15;
  long lVar16;
  uint uVar17;
  undefined4 uVar18;
  byte *pbVar19;
  byte *pbVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  
  lVar13 = param_4;
  if (param_5 != 0) {
    lVar13 = param_5;
  }
  uVar4 = FUN_00389a38(param_4);
  if ((int)uVar4 < 0) {
LAB_0040467c:
    uVar18 = 0;
    pbVar20 = (byte *)0x0;
    pbVar7 = (byte *)0x0;
    goto LAB_00404874;
  }
  if (param_6 == 0xfffffffc) {
    uVar17 = uVar4;
    uVar1 = 0xfffffffd;
  }
  else {
    uVar17 = param_6;
    uVar1 = uVar4;
    if (param_6 != 0xffffffff) {
      if (param_6 == 0xfffffffe) {
        uVar17 = 0xffffffff;
        uVar1 = 0xfffffffd;
      }
      else {
        if (param_6 == 0xfffffffb || (int)(param_6 + 5) < 0 != SCARRY4(param_6,5)) {
          FUN_00379868();
          FUN_0037995c("crypto/rsa/rsa_pss.c",0xc4,"RSA_padding_add_PKCS1_PSS_mgf1");
          FUN_00379a5c(4,0x88,0);
          goto LAB_0040467c;
        }
        uVar17 = 0xffffffff;
        uVar1 = param_6;
      }
    }
  }
  param_6 = uVar1;
  iVar5 = FUN_0038f2c0(*(undefined8 *)(param_1 + 0x28));
  uVar1 = iVar5 - 1U & 7;
  iVar5 = FUN_003f9914(param_1);
  if (uVar1 == 0) {
    iVar5 = iVar5 + -1;
    pbVar19 = param_2 + 1;
    *param_2 = 0;
    if ((int)(uVar4 + 2) <= iVar5) goto LAB_00404714;
LAB_004046c0:
    FUN_00379868();
    uVar8 = 0xcf;
LAB_004046d8:
    FUN_0037995c("crypto/rsa/rsa_pss.c",uVar8,"RSA_padding_add_PKCS1_PSS_mgf1");
    FUN_00379a5c(4,0x6e,0);
    uVar18 = 0;
    pbVar20 = (byte *)0x0;
    pbVar7 = (byte *)0x0;
    goto LAB_00404874;
  }
  pbVar19 = param_2;
  if (iVar5 < (int)(uVar4 + 2)) goto LAB_004046c0;
LAB_00404714:
  uVar3 = (iVar5 - uVar4) - 2;
  if (param_6 == 0xfffffffd) {
    uVar2 = uVar3;
    if ((int)uVar17 <= (int)uVar3) {
      uVar2 = uVar17;
    }
    param_6 = uVar3;
    if (-1 < (int)uVar17) {
      param_6 = uVar2;
    }
  }
  else if ((int)uVar3 < (int)param_6) {
    FUN_00379868();
    uVar8 = 0xd7;
    goto LAB_004046d8;
  }
  if ((int)param_6 < 1) {
    pbVar20 = (byte *)0x0;
LAB_004047c0:
    pbVar7 = (byte *)FUN_0039d270();
    if (pbVar7 != (byte *)0x0) {
      iVar6 = FUN_0039d92c(pbVar7,param_4,0);
      if ((((iVar6 != 0) && (iVar6 = FUN_0039d938(pbVar7,&DAT_0020e524,8), iVar6 != 0)) &&
          (iVar6 = FUN_0039d938(pbVar7,param_3,uVar4), iVar6 != 0)) &&
         ((param_6 == 0 || (iVar6 = FUN_0039d938(pbVar7,pbVar20,(long)(int)param_6), iVar6 != 0))))
      {
        lVar16 = (long)iVar5 + (long)(int)~uVar4;
        iVar6 = FUN_0039dac8(pbVar7,pbVar19 + lVar16,0);
        if ((iVar6 != 0) &&
           (iVar6 = FUN_003feb30(pbVar19,lVar16,pbVar19 + lVar16,uVar4,lVar13), iVar6 == 0)) {
          lVar13 = (long)(int)(((iVar5 - param_6) - uVar4) + -2);
          pbVar9 = pbVar19 + lVar13;
          *pbVar9 = *pbVar9 ^ 1;
          if (0 < (int)param_6) {
            uVar10 = (ulong)param_6;
            if ((param_6 < 8) ||
               ((pbVar19 + lVar13 + 1 < pbVar20 + uVar10 &&
                (pbVar20 < pbVar19 + lVar13 + 1 + uVar10)))) {
              uVar11 = 0;
            }
            else {
              if (param_6 < 0x20) {
                uVar12 = 0;
              }
              else {
                uVar11 = uVar10 & 0x7fffffe0;
                pbVar14 = pbVar20 + 0x10;
                pbVar15 = pbVar19 + lVar13 + 0x11;
                uVar12 = uVar11;
                do {
                  uVar22 = *(undefined8 *)(pbVar15 + -8);
                  uVar8 = *(undefined8 *)(pbVar15 + -0x10);
                  uVar27 = *(undefined8 *)(pbVar15 + 8);
                  uVar26 = *(undefined8 *)pbVar15;
                  uVar12 = uVar12 - 0x20;
                  uVar23 = *(undefined8 *)(pbVar14 + -8);
                  uVar21 = *(undefined8 *)(pbVar14 + -0x10);
                  uVar25 = *(undefined8 *)(pbVar14 + 8);
                  uVar24 = *(undefined8 *)pbVar14;
                  pbVar14 = pbVar14 + 0x20;
                  *(ulong *)(pbVar15 + -8) =
                       CONCAT17((byte)((ulong)uVar22 >> 0x38) ^ (byte)((ulong)uVar23 >> 0x38),
                                CONCAT16((byte)((ulong)uVar22 >> 0x30) ^
                                         (byte)((ulong)uVar23 >> 0x30),
                                         CONCAT15((byte)((ulong)uVar22 >> 0x28) ^
                                                  (byte)((ulong)uVar23 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar22 >> 0x20) ^
                                                           (byte)((ulong)uVar23 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar22 >> 0x18) ^
                                                                    (byte)((ulong)uVar23 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar22 >>
                                                                                   0x10) ^
                                                                             (byte)((ulong)uVar23 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar22 >> 8) ^ (byte)((ulong)uVar23 >> 8),
                                                  (byte)uVar22 ^ (byte)uVar23)))))));
                  *(ulong *)(pbVar15 + -0x10) =
                       CONCAT17((byte)((ulong)uVar8 >> 0x38) ^ (byte)((ulong)uVar21 >> 0x38),
                                CONCAT16((byte)((ulong)uVar8 >> 0x30) ^
                                         (byte)((ulong)uVar21 >> 0x30),
                                         CONCAT15((byte)((ulong)uVar8 >> 0x28) ^
                                                  (byte)((ulong)uVar21 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar8 >> 0x20) ^
                                                           (byte)((ulong)uVar21 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar8 >> 0x18) ^
                                                                    (byte)((ulong)uVar21 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar8 >>
                                                                                   0x10) ^
                                                                             (byte)((ulong)uVar21 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar8 >> 8) ^ (byte)((ulong)uVar21 >> 8),
                                                  (byte)uVar8 ^ (byte)uVar21)))))));
                  *(ulong *)(pbVar15 + 8) =
                       CONCAT17((byte)((ulong)uVar27 >> 0x38) ^ (byte)((ulong)uVar25 >> 0x38),
                                CONCAT16((byte)((ulong)uVar27 >> 0x30) ^
                                         (byte)((ulong)uVar25 >> 0x30),
                                         CONCAT15((byte)((ulong)uVar27 >> 0x28) ^
                                                  (byte)((ulong)uVar25 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar27 >> 0x20) ^
                                                           (byte)((ulong)uVar25 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar27 >> 0x18) ^
                                                                    (byte)((ulong)uVar25 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar27 >>
                                                                                   0x10) ^
                                                                             (byte)((ulong)uVar25 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar27 >> 8) ^ (byte)((ulong)uVar25 >> 8),
                                                  (byte)uVar27 ^ (byte)uVar25)))))));
                  *(ulong *)pbVar15 =
                       CONCAT17((byte)((ulong)uVar26 >> 0x38) ^ (byte)((ulong)uVar24 >> 0x38),
                                CONCAT16((byte)((ulong)uVar26 >> 0x30) ^
                                         (byte)((ulong)uVar24 >> 0x30),
                                         CONCAT15((byte)((ulong)uVar26 >> 0x28) ^
                                                  (byte)((ulong)uVar24 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar26 >> 0x20) ^
                                                           (byte)((ulong)uVar24 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar26 >> 0x18) ^
                                                                    (byte)((ulong)uVar24 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar26 >>
                                                                                   0x10) ^
                                                                             (byte)((ulong)uVar24 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar26 >> 8) ^ (byte)((ulong)uVar24 >> 8),
                                                  (byte)uVar26 ^ (byte)uVar24)))))));
                  pbVar15 = pbVar15 + 0x20;
                } while (uVar12 != 0);
                if (uVar11 == uVar10) goto LAB_00404934;
                uVar12 = uVar11;
                if ((param_6 & 0x18) == 0) {
                  pbVar9 = pbVar9 + uVar11;
                  goto LAB_00404910;
                }
              }
              uVar11 = uVar10 & 0x7ffffff8;
              pbVar9 = pbVar9 + uVar11;
              lVar16 = uVar12 - uVar11;
              pbVar14 = pbVar19 + uVar12 + lVar13 + 1;
              pbVar15 = pbVar20 + uVar12;
              do {
                uVar8 = *(undefined8 *)pbVar15;
                uVar22 = *(undefined8 *)pbVar14;
                lVar16 = lVar16 + 8;
                *(ulong *)pbVar14 =
                     CONCAT17((byte)((ulong)uVar22 >> 0x38) ^ (byte)((ulong)uVar8 >> 0x38),
                              CONCAT16((byte)((ulong)uVar22 >> 0x30) ^ (byte)((ulong)uVar8 >> 0x30),
                                       CONCAT15((byte)((ulong)uVar22 >> 0x28) ^
                                                (byte)((ulong)uVar8 >> 0x28),
                                                CONCAT14((byte)((ulong)uVar22 >> 0x20) ^
                                                         (byte)((ulong)uVar8 >> 0x20),
                                                         CONCAT13((byte)((ulong)uVar22 >> 0x18) ^
                                                                  (byte)((ulong)uVar8 >> 0x18),
                                                                  CONCAT12((byte)((ulong)uVar22 >>
                                                                                 0x10) ^
                                                                           (byte)((ulong)uVar8 >>
                                                                                 0x10),
                                                                           CONCAT11((byte)((ulong)
                                                  uVar22 >> 8) ^ (byte)((ulong)uVar8 >> 8),
                                                  (byte)uVar22 ^ (byte)uVar8)))))));
                pbVar14 = pbVar14 + 8;
                pbVar15 = pbVar15 + 8;
              } while (lVar16 != 0);
              if (uVar11 == uVar10) goto LAB_00404934;
            }
LAB_00404910:
            lVar13 = uVar10 - uVar11;
            pbVar14 = pbVar20 + uVar11;
            do {
              pbVar9 = pbVar9 + 1;
              lVar13 = lVar13 + -1;
              *pbVar9 = *pbVar9 ^ *pbVar14;
              pbVar14 = pbVar14 + 1;
            } while (lVar13 != 0);
          }
LAB_00404934:
          if (uVar1 != 0) {
            *pbVar19 = *pbVar19 & (byte)(0xff >> (ulong)(8 - uVar1 & 0x1f));
          }
          uVar18 = 1;
          pbVar19[(long)iVar5 + -1] = 0xbc;
          goto LAB_00404874;
        }
      }
      uVar18 = 0;
      goto LAB_00404874;
    }
  }
  else {
    pbVar20 = (byte *)FUN_003c83a4(param_6,"crypto/rsa/rsa_pss.c",0xdb);
    pbVar7 = pbVar20;
    if (pbVar20 != (byte *)0x0) {
      iVar6 = FUN_003edc30(*(undefined8 *)(param_1 + 8),pbVar20,param_6,0);
      if (iVar6 < 1) {
        uVar18 = 0;
        pbVar7 = (byte *)0x0;
        goto LAB_00404874;
      }
      goto LAB_004047c0;
    }
  }
  uVar18 = 0;
LAB_00404874:
  FUN_0039d284(pbVar7);
  FUN_003c893c(pbVar20,(long)(int)param_6,"crypto/rsa/rsa_pss.c",0x10a);
  return uVar18;
}


// ===== 00404a10  FUN_00404a10 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404a10(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _UNK_0020e534;
  uVar1 = _DAT_0020e52c;
  if (param_1 != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 2) = 1;
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  return;
}


// ===== 00404a34  FUN_00404a34 =====

bool FUN_00404a34(long *param_1)

{
  if (param_1 != (long *)0x0) {
    return (*param_1 == DAT_007ac36c && param_1[1] == DAT_007ac374) &&
           (int)param_1[2] == DAT_007ac37c;
  }
  return true;
}


// ===== 00404a6c  FUN_00404a6c =====

undefined8 FUN_00404a6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return 1;
}


// ===== 00404a88  FUN_00404a88 =====

undefined4 * FUN_00404a88(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = param_2;
    param_1 = (undefined4 *)0x1;
  }
  return param_1;
}


// ===== 00404a98  FUN_00404a98 =====

long FUN_00404a98(long param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 8) = param_2;
    param_1 = 1;
  }
  return param_1;
}


// ===== 00404aa8  FUN_00404aa8 =====

long FUN_00404aa8(long param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0xc) = param_2;
    param_1 = 1;
  }
  return param_1;
}


// ===== 00404ab8  FUN_00404ab8 =====

long FUN_00404ab8(long param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x10) = param_2;
    param_1 = 1;
  }
  return param_1;
}


// ===== 00404ac8  FUN_00404ac8 =====

undefined4 FUN_00404ac8(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    return *param_1;
  }
  return 0x40;
}


// ===== 00404adc  FUN_00404adc =====

undefined4 FUN_00404adc(long param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 4);
  }
  return 0x38f;
}


// ===== 00404af0  FUN_00404af0 =====

undefined4 FUN_00404af0(long param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 8);
  }
  return 0x40;
}


// ===== 00404b04  FUN_00404b04 =====

undefined4 FUN_00404b04(long param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0xc);
  }
  return 0x14;
}


// ===== 00404b18  FUN_00404b18 =====

undefined4 FUN_00404b18(long param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x10);
  }
  return 1;
}


// ===== 00404b2c  FUN_00404b2c =====

ulong FUN_00404b2c(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  int *param_5,undefined8 param_6)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  
  uStack_54 = 4;
  local_58 = param_3;
  local_50 = param_2;
  iVar1 = FUN_0038a34c(&local_58,0);
  iVar2 = FUN_003f9914(param_6);
  if (iVar2 + -0xb < iVar1) {
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_saos.c",0x27,"RSA_sign_ASN1_OCTET_STRING");
    FUN_00379a5c(4,0x70,0);
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_003c83a4(iVar2 + 1,"crypto/rsa/rsa_saos.c",0x2a);
    if (uVar3 != 0) {
      local_60 = uVar3;
      FUN_0038a34c(&local_58,&local_60);
      iVar1 = FUN_003f9948(iVar1,uVar3,param_4,param_6,1);
      if (0 < iVar1) {
        *param_5 = iVar1;
      }
      FUN_003c893c(uVar3,iVar2 + 1,"crypto/rsa/rsa_saos.c",0x35);
      return (ulong)(0 < iVar1);
    }
  }
  return uVar3;
}


// ===== 00404c5c  FUN_00404c5c =====

undefined4
FUN_00404c5c(undefined8 param_1,void *param_2,uint param_3,undefined8 param_4,int param_5,
            undefined8 param_6)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint *local_38;
  
  iVar1 = FUN_003f9914(param_6);
  if (iVar1 != param_5) {
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_saos.c",0x44,"RSA_verify_ASN1_OCTET_STRING");
    FUN_00379a5c(4,0x77,0);
    return 0;
  }
  puVar2 = (uint *)FUN_003c83a4(param_5,"crypto/rsa/rsa_saos.c",0x48);
  puVar3 = puVar2;
  if (puVar2 != (uint *)0x0) {
    iVar1 = FUN_003f9960(param_5,param_4,puVar2,param_6,1);
    if (iVar1 < 1) {
      uVar4 = 0;
      puVar3 = (uint *)0x0;
      goto LAB_00404d94;
    }
    local_38 = puVar2;
    puVar3 = (uint *)FUN_0038a340(0,&local_38,iVar1);
    if (puVar3 != (uint *)0x0) {
      if ((*puVar3 == param_3) &&
         (iVar1 = memcmp(param_2,*(void **)(puVar3 + 2),(ulong)param_3), iVar1 == 0)) {
        uVar4 = 1;
        goto LAB_00404d94;
      }
      FUN_00379868(puVar3);
      FUN_0037995c("crypto/rsa/rsa_saos.c",0x57,"RSA_verify_ASN1_OCTET_STRING");
      FUN_00379a5c(4,0x68,0);
    }
  }
  uVar4 = 0;
LAB_00404d94:
  thunk_FUN_0038eddc(puVar3);
  FUN_003c893c(puVar2,param_5,"crypto/rsa/rsa_saos.c",0x5d);
  return uVar4;
}


// ===== 00404dd4  FUN_00404dd4 =====

ulong FUN_00404dd4(ulong param_1)

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
                uVar2 = FUN_003898e4(param_1,"SHA2-512/256");
                if ((int)uVar2 == 0) {
                  return uVar2;
                }
                puVar3 = &DAT_0077bd78;
              }
              else {
                puVar3 = &DAT_0077bd68;
              }
            }
            else {
              puVar3 = &DAT_0077bd58;
            }
          }
          else {
            puVar3 = &DAT_0077bd48;
          }
        }
        else {
          puVar3 = &DAT_0077bd38;
        }
      }
      else {
        puVar3 = &DAT_0077bd28;
      }
    }
    else {
      puVar3 = &DAT_0077bd18;
    }
    param_1 = (ulong)*puVar3;
  }
  return param_1;
}


// ===== 00404ed0  FUN_00404ed0 =====

undefined8 FUN_00404ed0(int param_1)

{
  undefined4 *puVar1;
  
  if (param_1 < 0x2a2) {
    if (param_1 == 0x40) {
      puVar1 = &DAT_0077bd18;
    }
    else if (param_1 == 0x2a0) {
      puVar1 = &DAT_0077bd38;
    }
    else {
      if (param_1 != 0x2a1) {
        return 0;
      }
      puVar1 = &DAT_0077bd48;
    }
  }
  else if (param_1 < 0x446) {
    if (param_1 == 0x2a2) {
      puVar1 = &DAT_0077bd58;
    }
    else {
      if (param_1 != 0x2a3) {
        return 0;
      }
      puVar1 = &DAT_0077bd28;
    }
  }
  else if (param_1 == 0x446) {
    puVar1 = &DAT_0077bd68;
  }
  else {
    if (param_1 != 0x447) {
      return 0;
    }
    puVar1 = &DAT_0077bd78;
  }
  return *(undefined8 *)(puVar1 + 2);
}


// ===== 00404f78  FUN_00404f78 =====

undefined * FUN_00404f78(int param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_001ed1c2;
  if (param_1 != 0x38f) {
    puVar1 = (undefined *)0x0;
  }
  return puVar1;
}


// ===== 00404f8c  FUN_00404f8c =====

undefined * FUN_00404f8c(int param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (param_1 < 0x446) {
    if (param_1 < 0x2a1) {
      if (param_1 == 4) {
        puVar1 = &DAT_0020e540;
        uVar2 = 0x12;
        goto LAB_004050a4;
      }
      if (param_1 == 0x40) {
        puVar1 = &DAT_0020e552;
        uVar2 = 0xf;
        goto LAB_004050a4;
      }
      if (param_1 != 0x2a0) {
        return (undefined *)0x0;
      }
      puVar1 = &DAT_0020e574;
    }
    else if (param_1 == 0x2a1) {
      puVar1 = &DAT_0020e587;
    }
    else if (param_1 == 0x2a2) {
      puVar1 = &DAT_0020e59a;
    }
    else {
      if (param_1 != 0x2a3) {
        return (undefined *)0x0;
      }
      puVar1 = &DAT_0020e561;
    }
  }
  else if (param_1 < 0x449) {
    if (param_1 == 0x446) {
      puVar1 = &DAT_0020e5ad;
    }
    else if (param_1 == 0x447) {
      puVar1 = &DAT_0020e5c0;
    }
    else {
      if (param_1 != 0x448) {
        return (undefined *)0x0;
      }
      puVar1 = &DAT_0020e5d3;
    }
  }
  else if (param_1 == 0x449) {
    puVar1 = &DAT_0020e5e6;
  }
  else if (param_1 == 0x44a) {
    puVar1 = &DAT_0020e5f9;
  }
  else {
    if (param_1 != 1099) {
      return (undefined *)0x0;
    }
    puVar1 = &DAT_0020e60c;
  }
  uVar2 = 0x13;
LAB_004050a4:
  *param_2 = uVar2;
  return puVar1;
}


// ===== 004050ac  FUN_004050ac =====

bool FUN_004050ac(int param_1,undefined8 param_2,int param_3,undefined8 param_4,int *param_5,
                 long param_6)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  undefined8 uVar5;
  ulong uVar6;
  bool bVar7;
  undefined8 local_58;
  ulong local_38;
  
  local_38 = 0;
  local_58 = 0;
  pcVar4 = *(code **)(*(long *)(param_6 + 0x18) + 0x58);
  if (pcVar4 != (code *)0x0) {
    iVar2 = (*pcVar4)();
    return 0 < iVar2;
  }
  if (param_1 == 0x72) {
    if (param_3 != 0x24) {
      FUN_00379868();
      FUN_0037995c("crypto/rsa/rsa_sign.c",0x124,"RSA_sign");
      FUN_00379a5c(4,0x83,0);
      return false;
    }
    uVar5 = 0;
    uVar6 = 0x24;
    uVar3 = FUN_003f9914(param_6);
    if (uVar3 < 0x2f) {
LAB_004051a0:
      FUN_00379868();
      FUN_0037995c("crypto/rsa/rsa_sign.c",0x130,"RSA_sign");
      FUN_00379a5c(4,0x70,0);
    }
    else {
LAB_00405128:
      iVar2 = FUN_003f9948(uVar6 & 0xffffffff,param_2,param_4,param_6,1);
      if (0 < iVar2) {
        bVar7 = true;
        *param_5 = iVar2;
        goto LAB_004051d0;
      }
    }
  }
  else {
    iVar2 = FUN_0040523c(&local_58,&local_38,param_1,param_2,param_3);
    uVar6 = local_38;
    uVar5 = local_58;
    if (iVar2 != 0) {
      uVar1 = local_38 + 0xb;
      iVar2 = FUN_003f9914(param_6);
      param_2 = uVar5;
      if (uVar1 <= (ulong)(long)iVar2) goto LAB_00405128;
      goto LAB_004051a0;
    }
  }
  bVar7 = false;
LAB_004051d0:
  FUN_003c893c(uVar5,uVar6,"crypto/rsa/rsa_sign.c",0x13c);
  return bVar7;
}


// ===== 0040523c  FUN_0040523c =====

void * FUN_0040523c(undefined8 *param_1,long *param_2,int param_3,void *param_4,size_t param_5)

{
  void *__dest;
  void *pvVar1;
  undefined8 uVar2;
  undefined *__src;
  size_t __n;
  
  if (param_3 < 0x2a3) {
    if (param_3 < 0x2a0) {
      if (param_3 == 0) {
        FUN_00379868();
        FUN_0037995c("crypto/rsa/rsa_sign.c",0xfa,"encode_pkcs1");
        uVar2 = 0x75;
        goto LAB_0040542c;
      }
      if (param_3 == 4) {
        __src = &DAT_0020e540;
        __n = 0x12;
        goto LAB_004053a8;
      }
      if (param_3 == 0x40) {
        __src = &DAT_0020e552;
        __n = 0xf;
        goto LAB_004053a8;
      }
LAB_00405408:
      FUN_00379868();
      FUN_0037995c("crypto/rsa/rsa_sign.c",0x100,"encode_pkcs1");
      uVar2 = 0x74;
LAB_0040542c:
      FUN_00379a5c(4,uVar2,0);
      return (void *)0x0;
    }
    if (param_3 == 0x2a0) {
      __src = &DAT_0020e574;
    }
    else if (param_3 == 0x2a1) {
      __src = &DAT_0020e587;
    }
    else {
      if (param_3 != 0x2a2) goto LAB_00405408;
      __src = &DAT_0020e59a;
    }
  }
  else if (param_3 < 0x448) {
    if (param_3 == 0x2a3) {
      __src = &DAT_0020e561;
    }
    else if (param_3 == 0x446) {
      __src = &DAT_0020e5ad;
    }
    else {
      if (param_3 != 0x447) goto LAB_00405408;
      __src = &DAT_0020e5c0;
    }
  }
  else if (param_3 < 0x44a) {
    if (param_3 == 0x448) {
      __src = &DAT_0020e5d3;
    }
    else {
      if (param_3 != 0x449) goto LAB_00405408;
      __src = &DAT_0020e5e6;
    }
  }
  else if (param_3 == 0x44a) {
    __src = &DAT_0020e5f9;
  }
  else {
    if (param_3 != 1099) goto LAB_00405408;
    __src = &DAT_0020e60c;
  }
  __n = 0x13;
LAB_004053a8:
  __dest = (void *)FUN_003c83a4(__n + param_5,"crypto/rsa/rsa_sign.c",0x104);
  pvVar1 = __dest;
  if (__dest != (void *)0x0) {
    memcpy(__dest,__src,__n);
    memcpy((void *)((long)__dest + __n),param_4,param_5);
    pvVar1 = (void *)0x1;
    *param_1 = __dest;
    *param_2 = __n + param_5;
  }
  return pvVar1;
}


// ===== 00405450  FUN_00405450 =====

undefined4
FUN_00405450(int param_1,long *param_2,uint param_3,long *param_4,size_t *param_5,undefined8 param_6
            ,ulong param_7,undefined8 param_8)

{
  int iVar1;
  uint uVar2;
  long *__s2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong __n;
  undefined4 uVar6;
  size_t __n_00;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  void *local_68;
  ulong local_48;
  
  __n_00 = (size_t)param_3;
  local_48 = 0;
  local_68 = (void *)0x0;
  iVar1 = FUN_003f9914(param_8);
  if ((long)iVar1 != param_7) {
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_sign.c",0x152,"ossl_rsa_verify");
    FUN_00379a5c(4,0x77,0);
    return 0;
  }
  __s2 = (long *)FUN_003c83a4(param_7,"crypto/rsa/rsa_sign.c",0x157);
  if (__s2 == (long *)0x0) {
LAB_00405778:
    uVar4 = 0;
  }
  else {
    uVar3 = FUN_003f9960(param_7 & 0xffffffff,param_6,__s2,param_8,1);
    uVar2 = (uint)uVar3;
    if ((int)uVar2 < 1) goto LAB_00405778;
    if (param_1 == 0x72) {
      if (uVar2 == 0x24) {
        if (param_4 != (long *)0x0) {
          lVar7 = *__s2;
          lVar10 = __s2[3];
          lVar9 = __s2[2];
          lVar8 = __s2[4];
          uVar6 = 1;
          param_4[1] = __s2[1];
          *param_4 = lVar7;
          param_4[3] = lVar10;
          param_4[2] = lVar9;
          *(int *)(param_4 + 4) = (int)lVar8;
          *param_5 = 0x24;
          uVar4 = 0;
          goto LAB_00405780;
        }
        if (param_3 == 0x24) {
          if ((((*__s2 == *param_2 && __s2[1] == param_2[1]) && __s2[2] == param_2[2]) &&
              __s2[3] == param_2[3]) && (int)__s2[4] == (int)param_2[4]) {
LAB_0040572c:
            uVar6 = 1;
            uVar4 = 0;
            goto LAB_00405780;
          }
          FUN_00379868();
          uVar5 = 0x177;
          goto LAB_004055f0;
        }
        FUN_00379868();
        uVar5 = 0x172;
LAB_004056d8:
        FUN_0037995c("crypto/rsa/rsa_sign.c",uVar5,"ossl_rsa_verify");
        uVar5 = 0x83;
      }
      else {
        FUN_00379868();
        uVar5 = 0x169;
LAB_004055f0:
        FUN_0037995c("crypto/rsa/rsa_sign.c",uVar5,"ossl_rsa_verify");
        uVar5 = 0x68;
      }
LAB_00405770:
      FUN_00379a5c(4,uVar5,0);
      goto LAB_00405778;
    }
    if ((((param_1 == 0x5f) && (uVar2 == 0x12)) && ((char)*__s2 == '\x04')) &&
       (*(char *)((long)__s2 + 1) == '\x10')) {
      if (param_4 != (long *)0x0) {
        lVar8 = *(long *)((long)__s2 + 2);
        uVar6 = 1;
        param_4[1] = *(long *)((long)__s2 + 10);
        *param_4 = lVar8;
        *param_5 = 0x10;
        uVar4 = 0;
        goto LAB_00405780;
      }
      if (param_3 != 0x10) {
        FUN_00379868();
        uVar5 = 0x186;
        goto LAB_004056d8;
      }
      if (*param_2 == *(long *)((long)__s2 + 2) && param_2[1] == *(long *)((long)__s2 + 10))
      goto LAB_0040572c;
      FUN_00379868();
      uVar5 = 0x18b;
      goto LAB_004055f0;
    }
    __n = uVar3 & 0xffffffff;
    if (param_4 != (long *)0x0) {
      uVar6 = 0;
      uVar4 = 0;
      if (param_1 < 0x446) {
        if (param_1 < 0x2a1) {
          if (param_1 == 4) {
            __n_00 = 0x10;
          }
          else {
            if (param_1 != 0x40) {
              if (param_1 != 0x2a0) goto LAB_00405780;
              goto LAB_004056b8;
            }
            __n_00 = 0x14;
          }
        }
        else if (param_1 == 0x2a1) {
LAB_004056e8:
          __n_00 = 0x30;
        }
        else {
          if (param_1 != 0x2a2) {
            if (param_1 != 0x2a3) goto LAB_00405780;
            goto LAB_00405690;
          }
LAB_004056b0:
          __n_00 = 0x40;
        }
      }
      else if (param_1 < 0x449) {
        if (param_1 != 0x446) {
          if (param_1 == 0x447) goto LAB_004056b8;
          if (param_1 != 0x448) goto LAB_00405780;
        }
LAB_00405690:
        __n_00 = 0x1c;
      }
      else {
        if (param_1 != 0x449) {
          if (param_1 != 0x44a) {
            if (param_1 != 1099) goto LAB_00405780;
            goto LAB_004056b0;
          }
          goto LAB_004056e8;
        }
LAB_004056b8:
        __n_00 = 0x20;
      }
      if (uVar2 < (uint)__n_00) {
        FUN_00379868(uVar3,0);
        FUN_0037995c("crypto/rsa/rsa_sign.c",0x19e,"ossl_rsa_verify");
        uVar5 = 0x8f;
        goto LAB_00405770;
      }
      param_2 = (long *)((long)__s2 + (__n - __n_00));
    }
    iVar1 = FUN_0040523c(&local_68,&local_48,param_1,param_2,__n_00);
    uVar4 = local_48;
    if (iVar1 != 0) {
      if ((local_48 == __n) && (iVar1 = memcmp(local_68,__s2,__n), iVar1 == 0)) {
        if (param_4 != (long *)0x0) {
          memcpy(param_4,param_2,__n_00);
          *param_5 = __n_00;
        }
        uVar6 = 1;
        uVar4 = __n;
      }
      else {
        FUN_00379868();
        FUN_0037995c("crypto/rsa/rsa_sign.c",0x1aa,"ossl_rsa_verify");
        FUN_00379a5c(4,0x68,0);
        uVar6 = 0;
      }
      goto LAB_00405780;
    }
  }
  uVar6 = 0;
LAB_00405780:
  FUN_003c893c(local_68,uVar4,"crypto/rsa/rsa_sign.c",0x1b8);
  FUN_003c893c(__s2,param_7,"crypto/rsa/rsa_sign.c",0x1b9);
  return uVar6;
}


// ===== 00405894  FUN_00405894 =====

void FUN_00405894(void)

{
  long in_x5;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(in_x5 + 0x18) + 0x60);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004058b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_00405450();
  return;
}


// ===== 004058c4  FUN_004058c4 =====

bool FUN_004058c4(long param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (*(long *)(param_1 + 0x50) == 0) {
    if (*(long *)(param_1 + 0x58) != 0) {
      return false;
    }
    return *(long *)(param_1 + 0x60) == 0;
  }
  if (*(long *)(param_1 + 0x58) == 0) {
    return false;
  }
  if (*(long *)(param_1 + 0x60) == 0) {
    return false;
  }
  FUN_003916e0(param_2);
  uVar3 = FUN_00391898(param_2);
  uVar4 = FUN_00391898(param_2);
  lVar5 = FUN_00391898(param_2);
  if (lVar5 != 0) {
    FUN_00390944(uVar3,4);
    FUN_00390944(uVar4,4);
    FUN_00390944(lVar5,4);
    lVar6 = FUN_0038f85c(uVar4,*(undefined8 *)(param_1 + 0x40));
    if ((((lVar6 != 0) && (iVar2 = FUN_003993bc(uVar4,1), iVar2 != 0)) &&
        (lVar6 = FUN_0038f85c(lVar5,*(undefined8 *)(param_1 + 0x48)), lVar6 != 0)) &&
       (iVar2 = FUN_003993bc(lVar5,1), iVar2 != 0)) {
      uVar8 = *(undefined8 *)(param_1 + 0x50);
      uVar7 = FUN_0038f23c();
      iVar2 = FUN_00390208(uVar8,uVar7);
      if ((0 < iVar2) && (iVar2 = FUN_00390208(*(undefined8 *)(param_1 + 0x50),uVar4), iVar2 < 0)) {
        uVar8 = *(undefined8 *)(param_1 + 0x58);
        uVar7 = FUN_0038f23c();
        iVar2 = FUN_00390208(uVar8,uVar7);
        if ((0 < iVar2) && (iVar2 = FUN_00390208(*(undefined8 *)(param_1 + 0x58),lVar5), iVar2 < 0))
        {
          uVar8 = *(undefined8 *)(param_1 + 0x60);
          uVar7 = FUN_0038f23c();
          iVar2 = FUN_00390208(uVar8,uVar7);
          if (((((0 < iVar2) &&
                (iVar2 = FUN_00390208(*(undefined8 *)(param_1 + 0x60),
                                      *(undefined8 *)(param_1 + 0x40)), iVar2 < 0)) &&
               (iVar2 = FUN_003977b4(uVar3,*(undefined8 *)(param_1 + 0x50),
                                     *(undefined8 *)(param_1 + 0x30),uVar4,param_2), iVar2 != 0)) &&
              (((iVar2 = FUN_00390824(uVar3), iVar2 != 0 &&
                (iVar2 = FUN_003977b4(uVar3,*(undefined8 *)(param_1 + 0x58),
                                      *(undefined8 *)(param_1 + 0x30),lVar5,param_2), iVar2 != 0))
               && (iVar2 = FUN_00390824(uVar3), iVar2 != 0)))) &&
             (iVar2 = FUN_003977b4(uVar3,*(undefined8 *)(param_1 + 0x60),
                                   *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x40),
                                   param_2), iVar2 != 0)) {
            iVar2 = FUN_00390824(uVar3);
            bVar1 = iVar2 != 0;
            goto LAB_004059b8;
          }
        }
      }
    }
  }
  bVar1 = false;
LAB_004059b8:
  FUN_0038f984(uVar3);
  FUN_0038f984(uVar4);
  FUN_0038f984(lVar5);
  FUN_0039180c(param_2);
  return bVar1;
}


// ===== 00405b00  FUN_00405b00 =====

bool FUN_00405b00(undefined8 param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  
  iVar1 = FUN_0038f2c0(PTR_PTR_DAT_007a1a58);
  iVar2 = FUN_0038f2c0(param_1);
  if (iVar2 != param_2 >> 1) {
    return false;
  }
  FUN_003916e0(param_3);
  lVar3 = FUN_00391898(param_3);
  if ((lVar3 != 0) && (lVar4 = FUN_0038f85c(lVar3,PTR_PTR_DAT_007a1a58), lVar4 != 0)) {
    iVar1 = (param_2 >> 1) - iVar1;
    if (iVar1 < 0) {
      iVar1 = FUN_0039886c(lVar3,lVar3,-iVar1);
    }
    else {
      iVar1 = FUN_0039844c(lVar3,lVar3);
    }
    if (iVar1 != 0) {
      iVar1 = FUN_00390208(param_1,lVar3);
      bVar5 = 0 < iVar1;
      goto LAB_00405bcc;
    }
  }
  bVar5 = false;
LAB_00405bcc:
  FUN_0039180c(param_3);
  return bVar5;
}


// ===== 00405bec  FUN_00405bec =====

ulong FUN_00405bec(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  
  iVar1 = FUN_003f5dbc(param_1,param_4,0);
  if (iVar1 != 1) {
    return 0;
  }
  uVar2 = FUN_00405b00(param_1,param_3,param_4);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  FUN_003916e0(param_4);
  uVar3 = FUN_00391898(param_4);
  lVar4 = FUN_00391898(param_4);
  if (lVar4 != 0) {
    FUN_00390944(uVar3,4);
    FUN_00390944(lVar4,4);
    lVar5 = FUN_0038f85c(uVar3,param_1);
    if (((lVar5 != 0) && (iVar1 = FUN_003993bc(uVar3,1), iVar1 != 0)) &&
       (iVar1 = FUN_00396b90(lVar4,uVar3,param_2,param_4), iVar1 != 0)) {
      iVar1 = FUN_00390824(lVar4);
      uVar6 = (uint)(iVar1 != 0);
      goto LAB_00405cdc;
    }
  }
  uVar6 = 0;
LAB_00405cdc:
  FUN_0038f984(uVar3);
  FUN_0039180c(param_4);
  return (ulong)uVar6;
}


// ===== 00405d04  FUN_00405d04 =====

bool FUN_00405d04(long param_1,int param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  iVar2 = FUN_0038f2c0(*(undefined8 *)(param_1 + 0x38));
  if (iVar2 <= param_2 >> 1) {
    return false;
  }
  FUN_003916e0(param_3);
  uVar3 = FUN_00391898(param_3);
  uVar4 = FUN_00391898(param_3);
  uVar5 = FUN_00391898(param_3);
  uVar6 = FUN_00391898(param_3);
  uVar7 = FUN_00391898(param_3);
  lVar8 = FUN_00391898(param_3);
  if (lVar8 != 0) {
    FUN_00390944(uVar3,4);
    FUN_00390944(uVar4,4);
    FUN_00390944(uVar5,4);
    FUN_00390944(uVar6,4);
    FUN_00390944(uVar7,4);
    FUN_00390944(lVar8,4);
    iVar2 = FUN_00405e8c(param_3,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                         uVar6,lVar8,uVar4,uVar5,uVar7);
    if (((iVar2 != 0) && (iVar2 = FUN_00390208(*(undefined8 *)(param_1 + 0x38),uVar6), iVar2 < 0))
       && (iVar2 = FUN_003977b4(uVar3,*(undefined8 *)(param_1 + 0x30),
                                *(undefined8 *)(param_1 + 0x38),uVar6,param_3), iVar2 != 0)) {
      iVar2 = FUN_00390824(uVar3);
      bVar1 = iVar2 != 0;
      goto LAB_00405e0c;
    }
  }
  bVar1 = false;
LAB_00405e0c:
  FUN_0038f984(uVar3);
  FUN_0038f984(uVar4);
  FUN_0038f984(uVar5);
  FUN_0038f984(uVar6);
  FUN_0038f984(lVar8);
  FUN_0039180c(param_3);
  return bVar1;
}


// ===== 00405e8c  FUN_00405e8c =====

ulong FUN_00405e8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = FUN_0038f23c();
  uVar3 = FUN_00398f34(param_6,param_2,uVar2);
  if ((int)uVar3 != 0) {
    uVar2 = FUN_0038f23c();
    uVar3 = FUN_00398f34(param_7,param_3,uVar2);
    if ((((int)uVar3 != 0) &&
        (uVar3 = FUN_00392a80(param_8,param_6,param_7,param_1), (int)uVar3 != 0)) &&
       (uVar3 = FUN_00396b90(param_5,param_6,param_7,param_1), (int)uVar3 != 0)) {
      iVar1 = FUN_00397cac(param_4,0,param_8,param_5,param_1);
      uVar3 = (ulong)(iVar1 != 0);
    }
  }
  return uVar3;
}


// ===== 00405f5c  FUN_00405f5c =====

ulong FUN_00405f5c(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_003908a0();
  if ((int)uVar2 != 0) {
    uVar3 = FUN_0038f23c();
    iVar1 = FUN_00390208(param_1,uVar3);
    uVar2 = (ulong)(0 < iVar1);
  }
  return uVar2;
}


// ===== 00405f98  FUN_00405f98 =====

ulong FUN_00405f98(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_00398f34();
  if (iVar1 != 0) {
    FUN_003904e4(param_1,0);
    iVar1 = FUN_0038f448(param_1);
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = FUN_003993bc(param_1,1);
    if (iVar1 != 0) {
      iVar1 = FUN_0038f2c0(param_1);
      return (ulong)((param_4 >> 1) + -100 < iVar1);
    }
  }
  return 0xffffffff;
}


// ===== 00406024  FUN_00406024 =====

int FUN_00406024(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  uint local_24;
  
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
          iVar2 = FUN_003f5e0c(*(undefined8 *)(param_1 + 0x28),5,lVar4,0,1,&local_24);
          if (iVar2 == 1) {
            if (local_24 == 2) {
              uVar7 = 1;
              goto LAB_0040621c;
            }
            if ((iVar1 < 0x200) && (uVar7 = local_24, local_24 == 1)) goto LAB_0040621c;
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


// ===== 00406248  FUN_00406248 =====

ulong FUN_00406248(long param_1)

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


// ===== 004062a8  FUN_004062a8 =====

ulong FUN_004062a8(long param_1,long param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  if ((((*(long *)(param_1 + 0x40) == 0) || (*(long *)(param_1 + 0x48) == 0)) ||
      (*(long *)(param_1 + 0x30) == 0)) ||
     ((*(long *)(param_1 + 0x38) == 0 || (*(long *)(param_1 + 0x28) == 0)))) {
    FUN_00379868();
    uVar7 = 0x182;
  }
  else {
    uVar3 = FUN_00406f4c(param_4,param_3);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    if ((param_2 == 0) ||
       (iVar1 = FUN_00390208(param_2,*(undefined8 *)(param_1 + 0x30)), iVar1 == 0)) {
      uVar7 = *(undefined8 *)(param_1 + 0x30);
      iVar1 = FUN_003908a0(uVar7);
      if (iVar1 != 0) {
        uVar4 = FUN_0038f23c();
        iVar1 = FUN_00390208(uVar7,uVar4);
        if (0 < iVar1) {
          uVar2 = FUN_0038f2c0(*(undefined8 *)(param_1 + 0x28));
          if (uVar2 == param_4) {
            if ((0 < (int)param_4) && ((param_4 & 1) == 0)) {
              lVar5 = FUN_00391448(*(undefined8 *)(param_1 + 8));
              if (lVar5 == 0) {
                return 0;
              }
              FUN_003916e0();
              lVar6 = FUN_00391898(lVar5);
              if ((lVar6 != 0) &&
                 (iVar1 = FUN_00392a80(lVar6,*(undefined8 *)(param_1 + 0x40),
                                       *(undefined8 *)(param_1 + 0x48),lVar5), iVar1 != 0)) {
                iVar1 = FUN_00390208(*(undefined8 *)(param_1 + 0x28),lVar6);
                if (iVar1 == 0) {
                  iVar1 = FUN_00405bec(*(undefined8 *)(param_1 + 0x40),
                                       *(undefined8 *)(param_1 + 0x30),param_4,lVar5);
                  if ((((iVar1 != 0) &&
                       (iVar1 = FUN_00405bec(*(undefined8 *)(param_1 + 0x48),
                                             *(undefined8 *)(param_1 + 0x30),param_4,lVar5),
                       iVar1 != 0)) &&
                      (iVar1 = FUN_00405f98(lVar6,*(undefined8 *)(param_1 + 0x40),
                                            *(undefined8 *)(param_1 + 0x48),param_4), 0 < iVar1)) &&
                     ((iVar1 = FUN_00405d04(param_1,param_4,lVar5), iVar1 != 0 &&
                      (iVar1 = FUN_004058c4(param_1,lVar5), iVar1 != 0)))) {
                    uVar2 = 1;
                    goto LAB_00406520;
                  }
                  uVar7 = 0xab;
                  uVar4 = 0x1b9;
                }
                else {
                  uVar7 = 0xaf;
                  uVar4 = 0x1ac;
                }
                FUN_00379868();
                FUN_0037995c("crypto/rsa/rsa_sp800_56b_check.c",uVar4,
                             "ossl_rsa_sp800_56b_check_keypair");
                FUN_00379a5c(4,uVar7,0);
              }
              uVar2 = 0;
LAB_00406520:
              FUN_0038f984(lVar6);
              FUN_0039180c(lVar5);
              FUN_00391550(lVar5);
              return (ulong)uVar2;
            }
            FUN_00379868();
            uVar7 = 0x19e;
          }
          else {
            FUN_00379868();
            uVar7 = 0x199;
          }
          FUN_0037995c("crypto/rsa/rsa_sp800_56b_check.c",uVar7,"ossl_rsa_sp800_56b_check_keypair");
          uVar7 = 0xab;
          goto LAB_00406350;
        }
      }
      FUN_00379868();
      FUN_0037995c("crypto/rsa/rsa_sp800_56b_check.c",0x194,"ossl_rsa_sp800_56b_check_keypair");
      uVar7 = 0xb2;
      goto LAB_00406350;
    }
    FUN_00379868();
    uVar7 = 0x18d;
  }
  FUN_0037995c("crypto/rsa/rsa_sp800_56b_check.c",uVar7,"ossl_rsa_sp800_56b_check_keypair");
  uVar7 = 0xaf;
LAB_00406350:
  FUN_00379a5c(4,uVar7,0);
  return 0;
}


// ===== 0040654c  FUN_0040654c =====

/* WARNING: Type propagation algorithm not settling */

bool FUN_0040654c(long param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                 long param_6,long param_7,uint param_8,undefined8 param_9,undefined8 param_10,
                 undefined8 param_11)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  
  if (param_1 == 0) {
    return false;
  }
  if (param_2 == 0) {
    return false;
  }
  FUN_003916e0(param_10);
  lVar6 = param_3;
  if (param_3 == 0) {
    lVar6 = FUN_00391898(param_10);
  }
  lVar7 = param_4;
  if (param_4 == 0) {
    lVar7 = FUN_00391898(param_10);
  }
  lVar8 = param_6;
  if (param_6 == 0) {
    lVar8 = FUN_00391898(param_10);
  }
  lVar9 = param_7;
  if (param_7 == 0) {
    lVar9 = FUN_00391898(param_10);
  }
  if ((((lVar6 != 0) && (lVar7 != 0)) && (lVar8 != 0)) && (lVar9 != 0)) {
    if ((int)param_8 < 0x1000) {
      if ((int)param_8 < 0xc00) {
        if ((int)param_8 < 0x800) goto joined_r0x004067e0;
        uVar11 = 0x26;
        uVar10 = 0x26;
        uVar12 = 0x8d;
      }
      else {
        uVar11 = 0x29;
        uVar10 = 0x29;
        uVar12 = 0xab;
      }
    }
    else {
      uVar11 = 0x2c;
      uVar10 = 0x2c;
      uVar12 = 0xc9;
    }
    if ((((param_6 != 0) ||
         (iVar3 = FUN_003f6558(lVar8,uVar12,0,1,0,param_10), uVar11 = uVar10, iVar3 != 0)) &&
        ((param_7 != 0 || (iVar3 = FUN_003f6558(uVar11,lVar9,uVar12,0,1,0,param_10), iVar3 != 0))))
       && ((iVar3 = FUN_00406814(lVar8,lVar6,param_10,uVar11,param_11), iVar3 != 0 &&
           (iVar3 = FUN_00406814(lVar9,lVar7,param_10,uVar11,param_11), iVar3 != 0)))) {
      iVar4 = FUN_0038f2c0(lVar6);
      iVar5 = FUN_0038f2c0(lVar7);
      iVar3 = 0x5ee;
      if (param_8 < 0xc00) {
        iVar3 = 0x3ef;
      }
      iVar1 = 0x7ee;
      if ((int)param_8 < 0x1000) {
        iVar1 = iVar3;
      }
      if (iVar5 + iVar4 < iVar1) {
        iVar3 = FUN_004068f0(param_1,param_2,param_5,lVar6,lVar7,param_8,param_9,param_10,param_11);
        bVar2 = iVar3 != 0;
        goto joined_r0x00406790;
      }
    }
  }
joined_r0x004067e0:
  bVar2 = false;
joined_r0x00406790:
  if (param_3 == 0) {
    FUN_0038f984(lVar6);
  }
  if (param_4 == 0) {
    FUN_0038f984(lVar7);
  }
  if (param_6 == 0) {
    FUN_0038f984(lVar8);
  }
  if (param_7 == 0) {
    FUN_0038f984(lVar9);
  }
  FUN_0039180c(param_10);
  return bVar2;
}


// ===== 00406814  FUN_00406814 =====

long FUN_00406814(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  lVar2 = FUN_0038f85c(param_2,param_1);
  if (lVar2 != 0) {
    FUN_00390944(param_2,4);
    iVar3 = 1;
    do {
      FUN_003f5054(param_5,0,iVar3);
      iVar1 = FUN_003f5db0(param_2,param_4,param_3,param_5);
      if (0 < iVar1) {
        FUN_003f5054(param_5,2,iVar3);
        return 1;
      }
      if (iVar1 < 0) {
        return 0;
      }
      lVar2 = FUN_0039928c(param_2,2);
      iVar3 = iVar3 + 1;
    } while ((int)lVar2 != 0);
  }
  return lVar2;
}


// ===== 004068f0  FUN_004068f0 =====

ulong FUN_004068f0(undefined8 param_1,ulong param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined4 uVar16;
  ulong uVar17;
  
  FUN_003916e0(param_8);
  uVar6 = FUN_00391898(param_8);
  uVar7 = FUN_00391898(param_8);
  uVar8 = FUN_00391898(param_8);
  uVar9 = FUN_00391898(param_8);
  uVar10 = FUN_00391898(param_8);
  uVar11 = FUN_00391898(param_8);
  lVar12 = FUN_00391898(param_8);
  if (lVar12 == 0) goto LAB_00406b18;
  iVar1 = param_6 >> 1;
  if (param_3 == 0) {
    iVar4 = FUN_0038f2c0(&PTR_DAT_0077bd88);
    if (iVar1 < iVar4) goto LAB_00406b18;
    iVar4 = FUN_0038f2c0(&PTR_DAT_0077bd88);
    iVar4 = FUN_0039844c(uVar6,&PTR_DAT_0077bd88,iVar1 - iVar4);
    if (iVar4 == 0) goto LAB_00406b18;
    uVar14 = FUN_0038f23c();
    iVar4 = FUN_0039844c(uVar7,uVar14,iVar1);
    if ((iVar4 == 0) || (iVar4 = FUN_00398f34(uVar7,uVar7,uVar6), iVar4 == 0)) goto LAB_00406b18;
  }
  else {
    lVar13 = FUN_0038f85c(param_2,param_3);
    if (lVar13 == 0) goto LAB_00406b18;
  }
  iVar4 = FUN_00398238(lVar12,param_4);
  if ((((((iVar4 != 0) && (lVar13 = FUN_00396a18(uVar9,lVar12,param_5,param_8), lVar13 != 0)) &&
        (lVar13 = FUN_00396a18(uVar8,param_5,lVar12,param_8), lVar13 != 0)) &&
       ((iVar4 = FUN_00392a80(uVar8,uVar8,param_5,param_8), iVar4 != 0 &&
        (iVar4 = FUN_00392a80(uVar9,uVar9,lVar12,param_8), iVar4 != 0)))) &&
      ((iVar4 = FUN_00398f34(uVar8,uVar8,uVar9), iVar4 != 0 &&
       (iVar4 = FUN_00392a80(uVar10,lVar12,param_5,param_8), iVar4 != 0)))) &&
     ((iVar4 = FUN_003908c4(uVar8), iVar4 == 0 ||
      (iVar4 = FUN_00398c3c(uVar8,uVar8,uVar10), iVar4 != 0)))) {
    uVar16 = 5;
    if (param_6 < 0x800) {
      uVar16 = 0;
    }
    uVar2 = 4;
    if (param_6 < 0xc00) {
      uVar2 = uVar16;
    }
    if (param_3 != 0) goto LAB_00406b7c;
    while ((iVar4 = FUN_003f6804(param_2,uVar7,0,param_8), iVar4 != 0 &&
           (iVar4 = FUN_00398c3c(param_2,param_2,uVar6), iVar4 != 0))) {
LAB_00406b7c:
      iVar4 = FUN_003974cc(param_1,uVar8,param_2,uVar10,param_8);
      if ((iVar4 == 0) || (iVar4 = FUN_00398c3c(param_1,param_1,param_2), iVar4 == 0)) break;
      uVar17 = param_2;
      iVar4 = iVar1 * 0x14;
      if (iVar1 * 0x14 < 2) {
        iVar4 = 1;
      }
      while (iVar5 = FUN_0038f2c0(param_1), iVar5 <= iVar1) {
        FUN_003f5054(param_9,0,2);
        lVar12 = FUN_0038f85c(uVar11,param_1);
        if ((lVar12 == 0) || (iVar5 = FUN_003993bc(uVar11,1), iVar5 == 0)) goto LAB_00406b18;
        iVar5 = FUN_00396b08(uVar11,param_7,param_8);
        if (iVar5 != 0) {
          uVar15 = FUN_003f5db0(param_1,uVar2,param_8,param_9);
          uVar3 = 7;
          if ((int)uVar15 < 1) {
            uVar3 = (uint)(uVar15 >> 0x1e) & 2;
          }
          if (uVar3 != 0) {
            if (uVar3 == 2) goto LAB_00406b18;
            if (uVar3 != 7) goto LAB_00406b2c;
            FUN_003f5054(param_9,3,0);
            uVar17 = 1;
            goto LAB_00406b1c;
          }
        }
        if (iVar4 + -1 == 0) {
          FUN_00379868();
          FUN_0037995c("crypto/bn/bn_rsa_fips186_4.c",0x188,"ossl_bn_rsa_fips186_4_derive_prime");
          FUN_00379a5c(3,0x79,0);
          goto LAB_00406b18;
        }
        iVar5 = FUN_00398c3c(param_1,param_1,uVar10);
        uVar17 = 0;
        iVar4 = iVar4 + -1;
        if (iVar5 == 0) goto LAB_00406b1c;
      }
      if (param_3 != 0) break;
    }
  }
LAB_00406b18:
  uVar17 = 0;
LAB_00406b1c:
  FUN_0038f984(uVar11);
  FUN_0039180c(param_8);
LAB_00406b2c:
  return uVar17 & 0xffffffff;
}


// ===== 00406ccc  FUN_00406ccc =====

undefined4
FUN_00406ccc(long param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5,
            undefined8 param_6)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  
  if (param_3 < 0x800) {
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_sp800_56b_gen.c",0x5c,"ossl_rsa_fips186_4_gen_prob_primes");
    uVar7 = 0x78;
LAB_00406dcc:
    FUN_00379a5c(4,uVar7,0);
    return 0;
  }
  iVar1 = FUN_00405f5c(param_4);
  if (iVar1 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_sp800_56b_gen.c",0x61,"ossl_rsa_fips186_4_gen_prob_primes");
    uVar7 = 0xb2;
    goto LAB_00406dcc;
  }
  FUN_003916e0(param_5);
  lVar2 = FUN_00391898(param_5);
  lVar3 = FUN_00391898(param_5);
  lVar4 = FUN_00391898(param_5);
  uVar8 = 0;
  if (((lVar2 == 0) || (lVar3 == 0)) || (lVar4 == 0)) {
LAB_00406f00:
    if (lVar3 == 0) goto LAB_00406f0c;
  }
  else {
    FUN_00390944(lVar3,4);
    FUN_00390944(lVar4,4);
    lVar5 = *(long *)(param_1 + 0x40);
    if (lVar5 == 0) {
      lVar5 = FUN_0038f5b4();
      *(long *)(param_1 + 0x40) = lVar5;
      if (*(long *)(param_1 + 0x48) == 0) goto LAB_00406dec;
LAB_00406da0:
      if (lVar5 != 0) {
LAB_00406e08:
        FUN_00390944(lVar5,4);
        FUN_00390944(*(undefined8 *)(param_1 + 0x48),4);
        iVar1 = FUN_0040654c(*(undefined8 *)(param_1 + 0x40),lVar3,0,0,0,0,0,param_3,param_4,param_5
                             ,param_6);
        if ((iVar1 != 0) &&
           (iVar1 = FUN_0040654c(*(undefined8 *)(param_1 + 0x48),lVar4,0,0,0,0,0,param_3,param_4,
                                 param_5,param_6), iVar1 != 0)) {
          do {
            iVar1 = FUN_00405f98(lVar2,lVar3,lVar4,param_3);
            if (iVar1 < 0) break;
            if (iVar1 != 0) {
              iVar1 = FUN_00405f98(lVar2,*(undefined8 *)(param_1 + 0x40),
                                   *(undefined8 *)(param_1 + 0x48),param_3);
              if (iVar1 < 0) break;
              if (iVar1 != 0) {
                uVar8 = 1;
                *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
                goto LAB_00406f00;
              }
            }
            iVar1 = FUN_0040654c(*(undefined8 *)(param_1 + 0x48),lVar4,0,0,0,0,0,param_3,param_4,
                                 param_5,param_6);
          } while (iVar1 != 0);
          uVar8 = 0;
          goto LAB_00406f00;
        }
      }
      uVar8 = 0;
    }
    else {
      if (*(long *)(param_1 + 0x48) != 0) goto LAB_00406da0;
LAB_00406dec:
      lVar6 = FUN_0038f5b4();
      lVar5 = *(long *)(param_1 + 0x40);
      uVar8 = 0;
      *(long *)(param_1 + 0x48) = lVar6;
      if ((lVar5 != 0) && (lVar6 != 0)) goto LAB_00406e08;
    }
  }
  FUN_0038f984(lVar3);
LAB_00406f0c:
  if (lVar4 != 0) {
    FUN_0038f984(lVar4);
  }
  FUN_0038f984(lVar2);
  FUN_0039180c(param_5);
  return uVar8;
}


// ===== 00406f4c  FUN_00406f4c =====

undefined8 FUN_00406f4c(undefined8 param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_003fa7bc();
  uVar2 = 1;
  if ((param_2 != 0xffffffff) && ((uVar1 & 0xffff) != param_2)) {
    FUN_00379868(1);
    FUN_0037995c("crypto/rsa/rsa_sp800_56b_gen.c",0xb8,"ossl_rsa_sp800_56b_validate_strength");
    FUN_00379a5c(4,0xb0,0);
    uVar2 = 0;
  }
  return uVar2;
}


// ===== 00406fb8  FUN_00406fb8 =====

undefined8 FUN_00406fb8(long param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  FUN_003916e0(param_4);
  uVar2 = FUN_00391898(param_4);
  uVar3 = FUN_00391898(param_4);
  uVar4 = FUN_00391898(param_4);
  uVar5 = FUN_00391898(param_4);
  lVar6 = FUN_00391898(param_4);
  if (lVar6 == 0) {
LAB_004071c4:
    uVar8 = 0xffffffff;
  }
  else {
    FUN_00390944(uVar2,4);
    FUN_00390944(uVar3,4);
    FUN_00390944(uVar4,4);
    FUN_00390944(uVar5,4);
    FUN_00390944(lVar6,4);
    iVar1 = FUN_00405e8c(param_4,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                         uVar4,lVar6,uVar2,uVar3,uVar5);
    if (iVar1 != 1) goto LAB_004071c4;
    FUN_0038f4f4(*(undefined8 *)(param_1 + 0x30));
    lVar7 = FUN_0038f720(param_3);
    *(long *)(param_1 + 0x30) = lVar7;
    if (lVar7 == 0) goto LAB_004071c4;
    FUN_0038f458(*(undefined8 *)(param_1 + 0x38));
    lVar7 = FUN_0038f5b4();
    *(long *)(param_1 + 0x38) = lVar7;
    if (lVar7 == 0) goto LAB_004071c4;
    FUN_00390944(lVar7,4);
    lVar7 = FUN_00396a18(*(undefined8 *)(param_1 + 0x38),param_3,uVar4,param_4);
    if (lVar7 == 0) goto LAB_004071c4;
    iVar1 = FUN_0038f2c0(*(undefined8 *)(param_1 + 0x38));
    if (param_2 >> 1 < iVar1) {
      lVar7 = *(long *)(param_1 + 0x28);
      if (lVar7 == 0) {
        lVar7 = FUN_0038f584();
        *(long *)(param_1 + 0x28) = lVar7;
        if (lVar7 == 0) goto LAB_004071c4;
      }
      iVar1 = FUN_00392a80(lVar7,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                           param_4);
      if (iVar1 != 0) {
        lVar7 = *(long *)(param_1 + 0x50);
        if (lVar7 == 0) {
          lVar7 = FUN_0038f5b4();
          *(long *)(param_1 + 0x50) = lVar7;
          if (lVar7 == 0) goto LAB_004071c4;
        }
        FUN_00390944(lVar7,4);
        iVar1 = FUN_00397cac(0,*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x38),uVar2
                             ,param_4);
        if (iVar1 != 0) {
          lVar7 = *(long *)(param_1 + 0x58);
          if (lVar7 == 0) {
            lVar7 = FUN_0038f5b4();
            *(long *)(param_1 + 0x58) = lVar7;
            if (lVar7 == 0) goto LAB_004071c4;
          }
          FUN_00390944(lVar7,4);
          iVar1 = FUN_00397cac(0,*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x38),
                               uVar3,param_4);
          if (iVar1 != 0) {
            FUN_0038f4f4(*(undefined8 *)(param_1 + 0x60));
            lVar7 = FUN_0038f5b4();
            *(long *)(param_1 + 0x60) = lVar7;
            if (lVar7 != 0) {
              FUN_00390944(lVar7,4);
              lVar7 = FUN_00396a18(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x48),
                                   *(undefined8 *)(param_1 + 0x40),param_4);
              if (lVar7 != 0) {
                uVar8 = 1;
                *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
                goto LAB_00407210;
              }
            }
          }
        }
      }
      goto LAB_004071c4;
    }
    uVar8 = 0;
  }
  FUN_0038f4f4(*(undefined8 *)(param_1 + 0x30));
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_0038f4f4(*(undefined8 *)(param_1 + 0x38));
  *(undefined8 *)(param_1 + 0x38) = 0;
  FUN_0038f4f4(*(undefined8 *)(param_1 + 0x28));
  *(undefined8 *)(param_1 + 0x28) = 0;
  FUN_0038f4f4(*(undefined8 *)(param_1 + 0x60));
  *(undefined8 *)(param_1 + 0x60) = 0;
  FUN_0038f4f4(*(undefined8 *)(param_1 + 0x58));
  *(undefined8 *)(param_1 + 0x58) = 0;
  FUN_0038f4f4(*(undefined8 *)(param_1 + 0x50));
  *(undefined8 *)(param_1 + 0x50) = 0;
LAB_00407210:
  FUN_0038f984(uVar2);
  FUN_0038f984(uVar3);
  FUN_0038f984(uVar4);
  FUN_0038f984(uVar5);
  FUN_0038f984(lVar6);
  FUN_0039180c(param_4);
  return uVar8;
}


// ===== 00407268  FUN_00407268 =====

undefined4 FUN_00407268(long param_1,undefined4 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined1 auVar6 [16];
  
  FUN_003fa7bc(param_2);
  lVar3 = FUN_003edb0c(*(undefined8 *)(param_1 + 8));
  if (lVar3 == 0) {
    return 0;
  }
  auVar6 = FUN_00391448(*(undefined8 *)(param_1 + 8));
  uVar5 = auVar6._8_8_;
  lVar3 = auVar6._0_8_;
  if (lVar3 == 0) {
    return 0;
  }
  lVar4 = param_3;
  if ((param_3 == 0) &&
     ((lVar4 = FUN_0038f584(), lVar4 == 0 ||
      (iVar1 = FUN_0038f9ec(lVar4,0x10001), uVar5 = extraout_x1_00, iVar1 == 0)))) {
    uVar2 = 0;
  }
  else {
    do {
      iVar1 = FUN_00406ccc(param_1,uVar5,param_2,lVar4,lVar3,param_4);
      if (iVar1 == 0) {
LAB_00407320:
        uVar2 = 0;
        goto joined_r0x00407324;
      }
      iVar1 = FUN_00390208(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
      if (iVar1 < 0) {
        auVar6 = NEON_ext(*(undefined1 (*) [16])(param_1 + 0x40),
                          *(undefined1 (*) [16])(param_1 + 0x40),8,1);
        *(long *)(param_1 + 0x48) = auVar6._8_8_;
        *(long *)(param_1 + 0x40) = auVar6._0_8_;
      }
      iVar1 = FUN_00406fb8(param_1,param_2,lVar4,lVar3);
      if (iVar1 < 0) goto LAB_00407320;
      uVar5 = extraout_x1;
    } while (iVar1 == 0);
    uVar2 = FUN_00407374(param_1,lVar3);
joined_r0x00407324:
    if (param_3 != 0) goto LAB_00407354;
  }
  FUN_0038f4f4(lVar4);
LAB_00407354:
  FUN_00391550(lVar3);
  return uVar2;
}


// ===== 00407374  FUN_00407374 =====

undefined4 FUN_00407374(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  
  FUN_003916e0(param_2);
  uVar2 = FUN_00391898(param_2);
  lVar3 = FUN_00391898(param_2);
  if (lVar3 != 0) {
    FUN_00390944(lVar3,4);
    iVar1 = FUN_0038f9ec(lVar3,2);
    if ((((iVar1 != 0) &&
         (iVar1 = FUN_003f6cb4(uVar2,lVar3,*(undefined8 *)(param_1 + 0x30),
                               *(undefined8 *)(param_1 + 0x28),param_2), iVar1 != 0)) &&
        (iVar1 = FUN_003f6cb4(uVar2,uVar2,*(undefined8 *)(param_1 + 0x38),
                              *(undefined8 *)(param_1 + 0x28),param_2), iVar1 != 0)) &&
       (iVar1 = FUN_00390208(lVar3,uVar2), iVar1 == 0)) {
      uVar4 = 1;
      goto LAB_0040743c;
    }
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_sp800_56b_gen.c",0x1bd,"ossl_rsa_sp800_56b_pairwise_test");
    FUN_00379a5c(4,0xb1,0);
  }
  uVar4 = 0;
LAB_0040743c:
  FUN_0039180c(param_2);
  return uVar4;
}


// ===== 00407460  FUN_00407460 =====

undefined8 FUN_00407460(undefined1 *param_1,int param_2,void *param_3,uint param_4)

{
  uint uVar1;
  undefined1 *__s;
  undefined1 uVar2;
  
  uVar1 = param_2 - param_4;
  if ((int)uVar1 < 2) {
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_x931.c",0x24,"RSA_padding_add_X931");
    FUN_00379a5c(4,0x6e,0);
    return 0xffffffff;
  }
  if (uVar1 == 2) {
    uVar2 = 0x6a;
    __s = param_1;
  }
  else {
    __s = param_1 + 1;
    *param_1 = 0x6b;
    if (3 < uVar1) {
      memset(__s,0xbb,(ulong)(uVar1 - 3));
      __s = __s + (uVar1 - 3);
    }
    uVar2 = 0xba;
  }
  *__s = uVar2;
  memcpy(__s + 1,param_3,(ulong)param_4);
  (__s + 1)[(int)param_4] = 0xcc;
  return 1;
}


// ===== 00407540  FUN_00407540 =====

ulong FUN_00407540(void *param_1,undefined8 param_2,byte *param_3,uint param_4,uint param_5)

{
  byte bVar1;
  byte *__src;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  
  if ((param_5 == param_4) && ((*param_3 & 0xfe) == 0x6a)) {
    if (*param_3 == 0x6b) {
      if ((int)param_5 < 4) {
LAB_0040766c:
        FUN_00379868();
        uVar2 = 0x56;
LAB_004076a0:
        FUN_0037995c("crypto/rsa/rsa_x931.c",uVar2,"RSA_padding_check_X931");
        uVar2 = 0x8a;
        goto LAB_004075d8;
      }
      lVar3 = 0;
      __src = param_3 + ((ulong)param_5 - 2);
      do {
        if (param_3[lVar3 + 1] != 0xbb) {
          if (param_3[lVar3 + 1] != 0xba) {
            FUN_00379868();
            uVar2 = 0x4e;
            goto LAB_004076a0;
          }
          if ((int)lVar3 == 0) goto LAB_0040766c;
          uVar4 = (ulong)(param_5 - 3) - lVar3;
          __src = param_3 + lVar3 + 2;
          if (__src[(int)uVar4] != 0xcc) goto LAB_00407644;
          goto LAB_00407608;
        }
        lVar3 = lVar3 + 1;
      } while (param_5 - 3 != (uint)lVar3);
      uVar4 = 0;
      bVar1 = *__src;
    }
    else {
      __src = param_3 + 1;
      uVar4 = (ulong)(param_5 - 2);
      bVar1 = __src[(int)(param_5 - 2)];
    }
    if (bVar1 == 0xcc) {
LAB_00407608:
      memcpy(param_1,__src,uVar4 & 0xffffffff);
      return uVar4 & 0xffffffff;
    }
LAB_00407644:
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_x931.c",0x5f,"RSA_padding_check_X931");
    uVar2 = 0x8b;
  }
  else {
    FUN_00379868();
    FUN_0037995c("crypto/rsa/rsa_x931.c",0x43,"RSA_padding_check_X931");
    uVar2 = 0x89;
  }
LAB_004075d8:
  FUN_00379a5c(4,uVar2,0);
  return 0xffffffff;
}


// ===== 004076b0  FUN_004076b0 =====

undefined8 FUN_004076b0(int param_1)

{
  if (param_1 < 0x2a1) {
    if (param_1 == 0x40) {
      return 0x33;
    }
    if (param_1 == 0x2a0) {
      return 0x34;
    }
  }
  else {
    if (param_1 == 0x2a1) {
      return 0x36;
    }
    if (param_1 == 0x2a2) {
      return 0x35;
    }
  }
  return 0xffffffff;
}


// ===== 00407700  FUN_00407700 =====

undefined8 FUN_00407700(long param_1,void *param_2,ulong param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong uVar4;
  size_t __n;
  
  if (param_3 != 0) {
    uVar3 = *(uint *)(param_1 + 0x14);
    uVar1 = (int)param_3 * 8;
    uVar4 = (ulong)*(uint *)(param_1 + 0x5c);
    *(uint *)(param_1 + 0x14) = uVar3 + uVar1;
    *(uint *)(param_1 + 0x18) =
         *(int *)(param_1 + 0x18) + (int)(param_3 >> 0x1d) + (uint)CARRY4(uVar3,uVar1);
    if (*(uint *)(param_1 + 0x5c) != 0) {
      puVar2 = (undefined8 *)(param_1 + 0x1c);
      if ((param_3 < 0x40) && (uVar4 + param_3 < 0x40)) {
        memcpy((void *)((long)puVar2 + uVar4),param_2,param_3);
        *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + (int)param_3;
        return 1;
      }
      __n = 0x40 - uVar4;
      memcpy((void *)((long)puVar2 + uVar4),param_2,__n);
      FUN_00407808(param_1,puVar2,1);
      param_3 = param_3 - __n;
      param_2 = (void *)((long)param_2 + __n);
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(undefined8 *)(param_1 + 0x24) = 0;
      *puVar2 = 0;
      *(undefined8 *)(param_1 + 0x34) = 0;
      *(undefined8 *)(param_1 + 0x2c) = 0;
      *(undefined8 *)(param_1 + 0x44) = 0;
      *(undefined8 *)(param_1 + 0x3c) = 0;
      *(undefined8 *)(param_1 + 0x54) = 0;
      *(undefined8 *)(param_1 + 0x4c) = 0;
    }
    if (0x3f < param_3) {
      FUN_00407808(param_1,param_2,param_3 >> 6);
      uVar4 = param_3 & 0xffffffffffffffc0;
      param_3 = param_3 & 0x3f;
      param_2 = (void *)((long)param_2 + uVar4);
    }
    if (param_3 != 0) {
      *(int *)(param_1 + 0x5c) = (int)param_3;
      memcpy((void *)(param_1 + 0x1c),param_2,param_3);
    }
  }
  return 1;
}


// ===== 00407808  FUN_00407808 =====

void FUN_00407808(uint *param_1,uint *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar3;
  
  uVar26 = *param_1;
  uVar28 = param_1[1];
  uVar29 = param_1[2];
  uVar30 = param_1[3];
  uVar27 = param_1[4];
  do {
    uVar8 = uVar28 >> 2 | uVar28 << 0x1e;
    uVar2 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
    uVar3 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (param_2[1] & 0xff00ff00) >> 8 | (param_2[1] & 0xff00ff) << 8;
    uVar4 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = uVar27 + 0x5a827999 + (uVar26 >> 0x1b | uVar26 << 5) +
            (uVar29 & uVar28 | uVar30 & (uVar28 ^ 0xffffffff)) + uVar3;
    uVar9 = uVar26 >> 2 | uVar26 << 0x1e;
    uVar1 = uVar30 + 0x5a827999 + uVar4 + (uVar8 & uVar26 | uVar29 & (uVar26 ^ 0xffffffff)) +
            (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar5 = (param_2[2] & 0xff00ff00) >> 8 | (param_2[2] & 0xff00ff) << 8;
    uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
    uVar10 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar6 = (param_2[3] & 0xff00ff00) >> 8 | (param_2[3] & 0xff00ff) << 8;
    uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
    uVar2 = uVar29 + 0x5a827999 + uVar5 + (uVar9 & uVar2 | uVar8 & (uVar2 ^ 0xffffffff)) +
            (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar11 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar7 = (param_2[4] & 0xff00ff00) >> 8 | (param_2[4] & 0xff00ff) << 8;
    uVar7 = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar1 = uVar8 + 0x5a827999 + uVar6 + (uVar10 & uVar1 | uVar9 & (uVar1 ^ 0xffffffff)) +
            (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar12 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar8 = (param_2[5] & 0xff00ff00) >> 8 | (param_2[5] & 0xff00ff) << 8;
    uVar8 = uVar8 >> 0x10 | uVar8 << 0x10;
    uVar2 = uVar9 + 0x5a827999 + uVar7 + (uVar11 & uVar2 | uVar10 & (uVar2 ^ 0xffffffff)) +
            (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar13 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar1 = uVar10 + 0x5a827999 + uVar8 + (uVar12 & uVar1 | uVar11 & (uVar1 ^ 0xffffffff)) +
            (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar9 = (param_2[6] & 0xff00ff00) >> 8 | (param_2[6] & 0xff00ff) << 8;
    uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar14 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar2 = uVar11 + 0x5a827999 + uVar9 + (uVar13 & uVar2 | uVar12 & (uVar2 ^ 0xffffffff)) +
            (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar10 = (param_2[7] & 0xff00ff00) >> 8 | (param_2[7] & 0xff00ff) << 8;
    uVar10 = uVar10 >> 0x10 | uVar10 << 0x10;
    uVar15 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar1 = uVar12 + 0x5a827999 + uVar10 + (uVar14 & uVar1 | uVar13 & (uVar1 ^ 0xffffffff)) +
            (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar11 = (param_2[8] & 0xff00ff00) >> 8 | (param_2[8] & 0xff00ff) << 8;
    uVar11 = uVar11 >> 0x10 | uVar11 << 0x10;
    uVar16 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar17 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar2 = uVar13 + 0x5a827999 + uVar11 + (uVar15 & uVar2 | uVar14 & (uVar2 ^ 0xffffffff)) +
            (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar12 = (param_2[9] & 0xff00ff00) >> 8 | (param_2[9] & 0xff00ff) << 8;
    uVar12 = uVar12 >> 0x10 | uVar12 << 0x10;
    uVar1 = uVar14 + 0x5a827999 + uVar12 + (uVar16 & uVar1 | uVar15 & (uVar1 ^ 0xffffffff)) +
            (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar13 = (param_2[10] & 0xff00ff00) >> 8 | (param_2[10] & 0xff00ff) << 8;
    uVar13 = uVar13 >> 0x10 | uVar13 << 0x10;
    uVar14 = (param_2[0xb] & 0xff00ff00) >> 8 | (param_2[0xb] & 0xff00ff) << 8;
    uVar14 = uVar14 >> 0x10 | uVar14 << 0x10;
    uVar18 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar2 = uVar15 + 0x5a827999 + uVar13 + (uVar17 & uVar2 | uVar16 & (uVar2 ^ 0xffffffff)) +
            (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar19 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar1 = uVar16 + 0x5a827999 + uVar14 + (uVar18 & uVar1 | uVar17 & (uVar1 ^ 0xffffffff)) +
            (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar15 = (param_2[0xc] & 0xff00ff00) >> 8 | (param_2[0xc] & 0xff00ff) << 8;
    uVar15 = uVar15 >> 0x10 | uVar15 << 0x10;
    uVar20 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar21 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar2 = uVar17 + 0x5a827999 + uVar15 + (uVar19 & uVar2 | uVar18 & (uVar2 ^ 0xffffffff)) +
            (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar16 = (param_2[0xd] & 0xff00ff00) >> 8 | (param_2[0xd] & 0xff00ff) << 8;
    uVar16 = uVar16 >> 0x10 | uVar16 << 0x10;
    uVar1 = uVar18 + 0x5a827999 + uVar16 + (uVar21 & uVar1 | uVar19 & (uVar1 ^ 0xffffffff)) +
            (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar17 = (param_2[0xe] & 0xff00ff00) >> 8 | (param_2[0xe] & 0xff00ff) << 8;
    uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
    uVar22 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar18 = (param_2[0xf] & 0xff00ff00) >> 8 | (param_2[0xf] & 0xff00ff) << 8;
    uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
    uVar2 = uVar19 + 0x5a827999 + uVar17 + (uVar20 & uVar2 | uVar21 & (uVar2 ^ 0xffffffff)) +
            (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar19 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar3 = uVar5 ^ uVar3 ^ uVar11 ^ uVar16;
    uVar23 = uVar3 >> 0x1f | uVar3 << 1;
    uVar1 = uVar21 + 0x5a827999 + uVar18 + (uVar22 & uVar1 | uVar20 & (uVar1 ^ 0xffffffff)) +
            (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar3 = uVar6 ^ uVar4 ^ uVar12 ^ uVar17;
    uVar21 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar24 = uVar3 >> 0x1f | uVar3 << 1;
    uVar3 = uVar8 ^ uVar6 ^ uVar14 ^ uVar23;
    uVar2 = uVar20 + uVar23 + 0x5a827999 + (uVar19 & uVar2 | uVar22 & (uVar2 ^ 0xffffffff)) +
            (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar6 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar4 = uVar7 ^ uVar5 ^ uVar13 ^ uVar18;
    uVar1 = uVar22 + uVar24 + 0x5a827999 + (uVar21 & uVar1 | uVar19 & (uVar1 ^ 0xffffffff)) +
            (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar20 = uVar4 >> 0x1f | uVar4 << 1;
    uVar22 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar25 = uVar3 >> 0x1f | uVar3 << 1;
    uVar3 = uVar9 ^ uVar7 ^ uVar15 ^ uVar24;
    uVar4 = uVar10 ^ uVar8 ^ uVar16 ^ uVar20;
    uVar5 = uVar11 ^ uVar9 ^ uVar17 ^ uVar25;
    uVar2 = uVar19 + uVar20 + 0x5a827999 + (uVar6 & uVar2 | uVar21 & (uVar2 ^ 0xffffffff)) +
            (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar7 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar8 = uVar5 >> 0x1f | uVar5 << 1;
    uVar9 = uVar3 >> 0x1f | uVar3 << 1;
    uVar1 = uVar25 + 0x5a827999 + uVar21 + (uVar22 & uVar1 | uVar6 & (uVar1 ^ 0xffffffff)) +
            (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar19 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar3 = uVar12 ^ uVar10 ^ uVar18 ^ uVar9;
    uVar10 = uVar4 >> 0x1f | uVar4 << 1;
    uVar2 = uVar9 + 0x6ed9eba1 + uVar6 + (uVar7 ^ uVar22 ^ uVar2) + (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar4 = uVar14 ^ uVar12 ^ uVar24 ^ uVar8;
    uVar5 = uVar13 ^ uVar11 ^ uVar23 ^ uVar10;
    uVar6 = uVar3 >> 0x1f | uVar3 << 1;
    uVar3 = uVar10 + 0x6ed9eba1 + uVar22 + (uVar19 ^ uVar7 ^ uVar1) + (uVar2 >> 0x1b | uVar2 * 0x20)
    ;
    uVar11 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar12 = uVar5 >> 0x1f | uVar5 << 1;
    uVar21 = uVar4 >> 0x1f | uVar4 << 1;
    uVar22 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar4 = uVar15 ^ uVar13 ^ uVar20 ^ uVar6;
    uVar2 = uVar8 + 0x6ed9eba1 + uVar7 + (uVar11 ^ uVar19 ^ uVar2) + (uVar3 >> 0x1b | uVar3 * 0x20);
    uVar7 = uVar3 >> 2 | uVar3 * 0x40000000;
    uVar5 = uVar16 ^ uVar14 ^ uVar25 ^ uVar12;
    uVar1 = uVar6 + 0x6ed9eba1 + uVar19 + (uVar22 ^ uVar11 ^ uVar3) + (uVar2 >> 0x1b | uVar2 * 0x20)
    ;
    uVar13 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar14 = uVar5 >> 0x1f | uVar5 << 1;
    uVar2 = uVar12 + 0x6ed9eba1 + uVar11 + (uVar7 ^ uVar22 ^ uVar2) + (uVar1 >> 0x1b | uVar1 * 0x20)
    ;
    uVar5 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar1 = uVar21 + 0x6ed9eba1 + uVar22 + (uVar13 ^ uVar7 ^ uVar1) + (uVar2 >> 0x1b | uVar2 * 0x20)
    ;
    uVar11 = uVar4 >> 0x1f | uVar4 << 1;
    uVar3 = uVar17 ^ uVar15 ^ uVar9 ^ uVar21;
    uVar15 = uVar3 >> 0x1f | uVar3 << 1;
    uVar4 = uVar18 ^ uVar16 ^ uVar10 ^ uVar11;
    uVar3 = uVar11 + 0x6ed9eba1 + uVar7 + (uVar5 ^ uVar13 ^ uVar2) + (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar7 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar16 = uVar4 >> 0x1f | uVar4 << 1;
    uVar19 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar4 = uVar17 ^ uVar23 ^ uVar8 ^ uVar14;
    uVar2 = uVar14 + 0x6ed9eba1 + uVar13 + (uVar7 ^ uVar5 ^ uVar1) + (uVar3 >> 0x1b | uVar3 * 0x20);
    uVar13 = uVar3 >> 2 | uVar3 * 0x40000000;
    uVar1 = uVar15 + 0x6ed9eba1 + uVar5 + (uVar19 ^ uVar7 ^ uVar3) + (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar3 = uVar18 ^ uVar24 ^ uVar6 ^ uVar15;
    uVar17 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar2 = uVar16 + 0x6ed9eba1 + uVar7 + (uVar13 ^ uVar19 ^ uVar2) + (uVar1 >> 0x1b | uVar1 * 0x20)
    ;
    uVar7 = uVar4 >> 0x1f | uVar4 << 1;
    uVar18 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar4 = uVar20 ^ uVar23 ^ uVar12 ^ uVar16;
    uVar5 = uVar24 ^ uVar25 ^ uVar21 ^ uVar7;
    uVar1 = uVar7 + 0x6ed9eba1 + uVar19 + (uVar17 ^ uVar13 ^ uVar1) + (uVar2 >> 0x1b | uVar2 * 0x20)
    ;
    uVar19 = uVar3 >> 0x1f | uVar3 << 1;
    uVar22 = uVar4 >> 0x1f | uVar4 << 1;
    uVar3 = uVar19 + 0x6ed9eba1 + uVar13 + (uVar18 ^ uVar17 ^ uVar2) +
            (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar4 = uVar2 >> 2 | uVar2 * 0x40000000;
    param_2 = param_2 + 0x10;
    uVar13 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar5 = uVar5 >> 0x1f | uVar5 << 1;
    uVar2 = uVar22 + 0x6ed9eba1 + uVar17 + (uVar4 ^ uVar18 ^ uVar1) + (uVar3 >> 0x1b | uVar3 * 0x20)
    ;
    uVar17 = uVar3 >> 2 | uVar3 * 0x40000000;
    uVar1 = uVar20 ^ uVar9 ^ uVar11 ^ uVar19;
    uVar20 = uVar1 >> 0x1f | uVar1 << 1;
    uVar1 = uVar5 + 0x6ed9eba1 + uVar18 + (uVar13 ^ uVar4 ^ uVar3) + (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar18 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar3 = uVar10 ^ uVar25 ^ uVar14 ^ uVar22;
    uVar23 = uVar3 >> 0x1f | uVar3 << 1;
    uVar2 = uVar20 + 0x6ed9eba1 + uVar4 + (uVar17 ^ uVar13 ^ uVar2) + (uVar1 >> 0x1b | uVar1 * 0x20)
    ;
    uVar24 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar3 = uVar12 ^ uVar8 ^ uVar7 ^ uVar23;
    uVar4 = uVar9 ^ uVar8 ^ uVar15 ^ uVar5;
    uVar8 = uVar4 >> 0x1f | uVar4 << 1;
    uVar1 = uVar23 + 0x6ed9eba1 + uVar13 + (uVar18 ^ uVar17 ^ uVar1) +
            (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar9 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar4 = uVar10 ^ uVar6 ^ uVar16 ^ uVar20;
    uVar10 = uVar4 >> 0x1f | uVar4 << 1;
    uVar2 = uVar8 + 0x6ed9eba1 + uVar17 + (uVar24 ^ uVar18 ^ uVar2) + (uVar1 >> 0x1b | uVar1 * 0x20)
    ;
    uVar13 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar4 = uVar12 ^ uVar11 ^ uVar22 ^ uVar10;
    uVar12 = uVar3 >> 0x1f | uVar3 << 1;
    uVar1 = uVar10 + 0x6ed9eba1 + uVar18 + (uVar9 ^ uVar24 ^ uVar1) + (uVar2 >> 0x1b | uVar2 * 0x20)
    ;
    uVar17 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar2 = uVar12 + 0x6ed9eba1 + uVar24 + (uVar13 ^ uVar9 ^ uVar2) + (uVar1 >> 0x1b | uVar1 * 0x20)
    ;
    uVar18 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar3 = uVar6 ^ uVar21 ^ uVar19 ^ uVar8;
    uVar6 = uVar3 >> 0x1f | uVar3 << 1;
    uVar3 = uVar11 ^ uVar15 ^ uVar20 ^ uVar6;
    uVar11 = uVar4 >> 0x1f | uVar4 << 1;
    uVar1 = uVar6 + 0x6ed9eba1 + uVar9 + (uVar17 ^ uVar13 ^ uVar1) + (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar9 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar4 = uVar14 ^ uVar21 ^ uVar5 ^ uVar12;
    uVar21 = uVar4 >> 0x1f | uVar4 << 1;
    uVar2 = uVar11 + 0x8f1bbcdc + uVar13 + ((uVar2 | uVar18) & uVar17 | uVar2 & uVar18) +
            (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar13 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar4 = uVar7 ^ uVar15 ^ uVar8 ^ uVar21;
    uVar15 = uVar3 >> 0x1f | uVar3 << 1;
    uVar1 = uVar21 + 0x8f1bbcdc + uVar17 + ((uVar1 | uVar9) & uVar18 | uVar1 & uVar9) +
            (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar17 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar24 = uVar4 >> 0x1f | uVar4 << 1;
    uVar3 = uVar14 ^ uVar16 ^ uVar23 ^ uVar11;
    uVar2 = uVar15 + 0x8f1bbcdc + uVar18 + ((uVar2 | uVar13) & uVar9 | uVar2 & uVar13) +
            (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar14 = uVar3 >> 0x1f | uVar3 << 1;
    uVar18 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar3 = uVar7 ^ uVar22 ^ uVar12 ^ uVar14;
    uVar1 = uVar14 + 0x8f1bbcdc + uVar9 + ((uVar1 | uVar17) & uVar13 | uVar1 & uVar17) +
            (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar7 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar4 = uVar16 ^ uVar19 ^ uVar10 ^ uVar15;
    uVar2 = uVar24 + 0x8f1bbcdc + uVar13 + ((uVar2 | uVar18) & uVar17 | uVar2 & uVar18) +
            (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar9 = uVar4 >> 0x1f | uVar4 << 1;
    uVar13 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar4 = uVar22 ^ uVar20 ^ uVar11 ^ uVar9;
    uVar16 = uVar3 >> 0x1f | uVar3 << 1;
    uVar1 = uVar9 + 0x8f1bbcdc + uVar17 + ((uVar1 | uVar7) & uVar18 | uVar1 & uVar7) +
            (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar17 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar3 = uVar5 ^ uVar19 ^ uVar6 ^ uVar24;
    uVar2 = uVar16 + 0x8f1bbcdc + uVar18 + ((uVar2 | uVar13) & uVar7 | uVar2 & uVar13) +
            (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar18 = uVar3 >> 0x1f | uVar3 << 1;
    uVar19 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar3 = uVar8 ^ uVar20 ^ uVar15 ^ uVar18;
    uVar20 = uVar4 >> 0x1f | uVar4 << 1;
    uVar1 = uVar18 + 0x8f1bbcdc + uVar7 + ((uVar1 | uVar17) & uVar13 | uVar1 & uVar17) +
            (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar7 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar4 = uVar5 ^ uVar23 ^ uVar21 ^ uVar16;
    uVar2 = uVar20 + 0x8f1bbcdc + uVar13 + ((uVar2 | uVar19) & uVar17 | uVar2 & uVar19) +
            (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar5 = uVar4 >> 0x1f | uVar4 << 1;
    uVar13 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar4 = uVar8 ^ uVar12 ^ uVar24 ^ uVar5;
    uVar8 = uVar3 >> 0x1f | uVar3 << 1;
    uVar1 = uVar5 + 0x8f1bbcdc + uVar17 + ((uVar1 | uVar7) & uVar19 | uVar1 & uVar7) +
            (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar17 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar3 = uVar23 ^ uVar10 ^ uVar14 ^ uVar20;
    uVar2 = uVar8 + 0x8f1bbcdc + uVar19 + ((uVar2 | uVar13) & uVar7 | uVar2 & uVar13) +
            (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar19 = uVar3 >> 0x1f | uVar3 << 1;
    uVar22 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar23 = uVar4 >> 0x1f | uVar4 << 1;
    uVar1 = uVar19 + 0x8f1bbcdc + uVar7 + ((uVar1 | uVar17) & uVar13 | uVar1 & uVar17) +
            (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar7 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar3 = uVar12 ^ uVar11 ^ uVar16 ^ uVar19;
    uVar4 = uVar6 ^ uVar10 ^ uVar9 ^ uVar8;
    uVar2 = uVar23 + 0x8f1bbcdc + uVar13 + ((uVar2 | uVar22) & uVar17 | uVar2 & uVar22) +
            (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar10 = uVar4 >> 0x1f | uVar4 << 1;
    uVar12 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar13 = uVar3 >> 0x1f | uVar3 << 1;
    uVar1 = uVar10 + 0x8f1bbcdc + uVar17 + ((uVar1 | uVar7) & uVar22 | uVar1 & uVar7) +
            (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar4 = uVar15 ^ uVar11 ^ uVar20 ^ uVar10;
    uVar3 = uVar13 + 0x8f1bbcdc + uVar22 + ((uVar2 | uVar12) & uVar7 | uVar2 & uVar12) +
            (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar11 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar2 = uVar6 ^ uVar21 ^ uVar18 ^ uVar23;
    uVar6 = uVar2 >> 0x1f | uVar2 << 1;
    uVar17 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar22 = uVar4 >> 0x1f | uVar4 << 1;
    uVar2 = uVar6 + 0x8f1bbcdc + uVar7 + ((uVar1 | uVar11) & uVar12 | uVar1 & uVar11) +
            (uVar3 >> 0x1b | uVar3 * 0x20);
    uVar7 = uVar3 >> 2 | uVar3 * 0x40000000;
    uVar4 = uVar21 ^ uVar14 ^ uVar5 ^ uVar13;
    uVar1 = uVar22 + 0x8f1bbcdc + uVar12 + ((uVar3 | uVar17) & uVar11 | uVar3 & uVar17) +
            (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar12 = uVar4 >> 0x1f | uVar4 << 1;
    uVar4 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar3 = uVar15 ^ uVar24 ^ uVar8 ^ uVar6;
    uVar15 = uVar3 >> 0x1f | uVar3 << 1;
    uVar2 = uVar12 + 0x8f1bbcdc + uVar11 + ((uVar2 | uVar7) & uVar17 | uVar2 & uVar7) +
            (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar11 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar3 = uVar9 ^ uVar14 ^ uVar19 ^ uVar22;
    uVar1 = uVar15 + 0x8f1bbcdc + uVar17 + ((uVar1 | uVar4) & uVar7 | uVar1 & uVar4) +
            (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar14 = uVar3 >> 0x1f | uVar3 << 1;
    uVar3 = uVar24 ^ uVar16 ^ uVar23 ^ uVar12;
    uVar17 = uVar3 >> 0x1f | uVar3 << 1;
    uVar21 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar2 = uVar14 + 0x8f1bbcdc + uVar7 + ((uVar2 | uVar11) & uVar4 | uVar2 & uVar11) +
            (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar3 = uVar9 ^ uVar18 ^ uVar10 ^ uVar15;
    uVar7 = uVar3 >> 0x1f | uVar3 << 1;
    uVar9 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar1 = uVar17 + 0xca62c1d6 + uVar4 + (uVar21 ^ uVar11 ^ uVar1) + (uVar2 >> 0x1b | uVar2 * 0x20)
    ;
    uVar3 = uVar20 ^ uVar16 ^ uVar13 ^ uVar14;
    uVar16 = uVar3 >> 0x1f | uVar3 << 1;
    uVar4 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar2 = uVar7 + 0xca62c1d6 + uVar11 + (uVar9 ^ uVar21 ^ uVar2) + (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar3 = uVar18 ^ uVar5 ^ uVar6 ^ uVar17;
    uVar11 = uVar3 >> 0x1f | uVar3 << 1;
    uVar18 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar1 = uVar16 + 0xca62c1d6 + uVar21 + (uVar4 ^ uVar9 ^ uVar1) + (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar3 = uVar20 ^ uVar8 ^ uVar22 ^ uVar7;
    uVar20 = uVar3 >> 0x1f | uVar3 << 1;
    uVar21 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar2 = uVar11 + 0xca62c1d6 + uVar9 + (uVar18 ^ uVar4 ^ uVar2) + (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar3 = uVar19 ^ uVar5 ^ uVar12 ^ uVar16;
    uVar9 = uVar3 >> 0x1f | uVar3 << 1;
    uVar5 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar1 = uVar20 + 0xca62c1d6 + uVar4 + (uVar21 ^ uVar18 ^ uVar1) + (uVar2 >> 0x1b | uVar2 * 0x20)
    ;
    uVar3 = uVar8 ^ uVar23 ^ uVar15 ^ uVar11;
    uVar8 = uVar3 >> 0x1f | uVar3 << 1;
    uVar4 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar2 = uVar9 + 0xca62c1d6 + uVar18 + (uVar5 ^ uVar21 ^ uVar2) + (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar3 = uVar19 ^ uVar10 ^ uVar14 ^ uVar20;
    uVar18 = uVar3 >> 0x1f | uVar3 << 1;
    uVar19 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar1 = uVar8 + 0xca62c1d6 + uVar21 + (uVar4 ^ uVar5 ^ uVar1) + (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar3 = uVar13 ^ uVar23 ^ uVar17 ^ uVar9;
    uVar21 = uVar3 >> 0x1f | uVar3 << 1;
    uVar23 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar2 = uVar18 + 0xca62c1d6 + uVar5 + (uVar19 ^ uVar4 ^ uVar2) + (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar3 = uVar10 ^ uVar6 ^ uVar7 ^ uVar8;
    uVar10 = uVar3 >> 0x1f | uVar3 << 1;
    uVar5 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar1 = uVar21 + 0xca62c1d6 + uVar4 + (uVar23 ^ uVar19 ^ uVar1) + (uVar2 >> 0x1b | uVar2 * 0x20)
    ;
    uVar3 = uVar13 ^ uVar22 ^ uVar16 ^ uVar18;
    uVar13 = uVar3 >> 0x1f | uVar3 << 1;
    uVar24 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar2 = uVar10 + 0xca62c1d6 + uVar19 + (uVar5 ^ uVar23 ^ uVar2) + (uVar1 >> 0x1b | uVar1 * 0x20)
    ;
    uVar3 = uVar12 ^ uVar6 ^ uVar11 ^ uVar21;
    uVar6 = uVar3 >> 0x1f | uVar3 << 1;
    uVar19 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar1 = uVar13 + 0xca62c1d6 + uVar23 + (uVar24 ^ uVar5 ^ uVar1) + (uVar2 >> 0x1b | uVar2 * 0x20)
    ;
    uVar3 = uVar22 ^ uVar15 ^ uVar20 ^ uVar10;
    uVar4 = uVar3 >> 0x1f | uVar3 << 1;
    uVar22 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar2 = uVar6 + 0xca62c1d6 + uVar5 + (uVar19 ^ uVar24 ^ uVar2) + (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar3 = uVar12 ^ uVar14 ^ uVar9 ^ uVar13;
    uVar5 = uVar3 >> 0x1f | uVar3 << 1;
    uVar12 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar1 = uVar4 + 0xca62c1d6 + uVar24 + (uVar22 ^ uVar19 ^ uVar1) + (uVar2 >> 0x1b | uVar2 * 0x20)
    ;
    uVar3 = uVar17 ^ uVar15 ^ uVar8 ^ uVar6;
    uVar3 = uVar3 >> 0x1f | uVar3 << 1;
    uVar8 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar2 = uVar5 + 0xca62c1d6 + uVar19 + (uVar12 ^ uVar22 ^ uVar2) + (uVar1 >> 0x1b | uVar1 * 0x20)
    ;
    uVar4 = uVar14 ^ uVar7 ^ uVar18 ^ uVar4;
    uVar4 = uVar4 >> 0x1f | uVar4 << 1;
    uVar14 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar1 = uVar3 + 0xca62c1d6 + uVar22 + (uVar8 ^ uVar12 ^ uVar1) + (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar5 = uVar17 ^ uVar16 ^ uVar21 ^ uVar5;
    uVar15 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar5 = uVar5 >> 0x1f | uVar5 << 1;
    uVar2 = uVar4 + 0xca62c1d6 + uVar12 + (uVar14 ^ uVar8 ^ uVar2) + (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar12 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar3 = uVar11 ^ uVar7 ^ uVar10 ^ uVar3;
    uVar1 = uVar5 + 0xca62c1d6 + uVar8 + (uVar15 ^ uVar14 ^ uVar1) + (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar4 = uVar16 ^ uVar20 ^ uVar13 ^ uVar4;
    uVar7 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar2 = (uVar3 >> 0x1f | uVar3 << 1) + 0xca62c1d6 + uVar14 + (uVar12 ^ uVar15 ^ uVar2) +
            (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar5 = uVar11 ^ uVar9 ^ uVar6 ^ uVar5;
    uVar3 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar1 = (uVar4 >> 0x1f | uVar4 << 1) + 0xca62c1d6 + uVar15 + (uVar7 ^ uVar12 ^ uVar1) +
            (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar28 = uVar1 + uVar28;
    uVar26 = uVar26 + 0xca62c1d6 + (uVar5 >> 0x1f | uVar5 << 1) + uVar12 + (uVar3 ^ uVar7 ^ uVar2) +
             (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar29 = (uVar2 >> 2 | uVar2 * 0x40000000) + uVar29;
    uVar30 = uVar3 + uVar30;
    *param_1 = uVar26;
    param_1[1] = uVar28;
    param_1[2] = uVar29;
    param_1[3] = uVar30;
    uVar27 = uVar7 + uVar27;
    param_1[4] = uVar27;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}


// ===== 00408830  FUN_00408830 =====

void FUN_00408830(undefined8 param_1,undefined8 param_2)

{
  FUN_00407808(param_1,param_2,1);
  return;
}


// ===== 00408838  FUN_00408838 =====

undefined8 FUN_00408838(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar2 = param_2[0x17];
  uVar5 = (ulong)uVar2;
  puVar1 = param_2 + 7;
  *(undefined1 *)((long)puVar1 + uVar5) = 0x80;
  lVar4 = uVar5 + 1;
  if (0x37 < uVar2) {
    memset((void *)((long)puVar1 + lVar4),0,0x3f - uVar5);
    FUN_00407808(param_2,puVar1,1);
    lVar4 = 0;
  }
  memset((void *)((long)puVar1 + lVar4),0,0x38 - lVar4);
  uVar2 = (param_2[6] & 0xff00ff00) >> 8 | (param_2[6] & 0xff00ff) << 8;
  uVar3 = (param_2[5] & 0xff00ff00) >> 8 | (param_2[5] & 0xff00ff) << 8;
  param_2[0x15] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x16] = uVar3 >> 0x10 | uVar3 << 0x10;
  FUN_00407808(param_2,puVar1,1);
  param_2[0x17] = 0;
  FUN_003c89b8(puVar1,0x40);
  uVar2 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
  *param_1 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_2[1] & 0xff00ff00) >> 8 | (param_2[1] & 0xff00ff) << 8;
  param_1[1] = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_2[2] & 0xff00ff00) >> 8 | (param_2[2] & 0xff00ff) << 8;
  param_1[2] = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_2[3] & 0xff00ff00) >> 8 | (param_2[3] & 0xff00ff) << 8;
  param_1[3] = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_2[4] & 0xff00ff00) >> 8 | (param_2[4] & 0xff00ff) << 8;
  param_1[4] = uVar2 >> 0x10 | uVar2 << 0x10;
  return 1;
}


// ===== 00408928  FUN_00408928 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00408928(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_00200200;
  param_1[1] = _UNK_00200208;
  *param_1 = uVar1;
  param_1[0xb] = 0;
  param_1[10] = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 2) = 0xc3d2e1f0;
  return 1;
}


// ===== 00408964  FUN_00408964 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00408964(undefined8 *param_1,int param_2,int param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  size_t sVar2;
  undefined8 *puVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if (param_2 != 0x1d) {
    return 0xfffffffe;
  }
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  if (param_3 != 0x30) {
    return 0;
  }
  uVar6 = *(uint *)((long)param_1 + 0x5c);
  uVar4 = (ulong)uVar6;
  uVar5 = (uint)*(undefined8 *)((long)param_1 + 0x14);
  *(ulong *)((long)param_1 + 0x14) =
       CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x14) >> 0x20) +
                (uint)(0xfffffe7f < uVar5),uVar5 + 0x180);
  if (uVar6 == 0) {
    sVar2 = 0x30;
    puVar3 = param_4;
LAB_00408a60:
    *(int *)((long)param_1 + 0x5c) = (int)sVar2;
    memcpy((void *)((long)param_1 + 0x1c),puVar3,sVar2);
  }
  else {
    puVar1 = (undefined8 *)((long)param_1 + 0x1c);
    puVar3 = (undefined8 *)((long)puVar1 + uVar4);
    if (uVar6 < 0x10) {
      uVar10 = param_4[3];
      uVar9 = param_4[2];
      uVar8 = param_4[5];
      uVar7 = param_4[4];
      uVar11 = *param_4;
      puVar3[1] = param_4[1];
      *puVar3 = uVar11;
      puVar3[3] = uVar10;
      puVar3[2] = uVar9;
      puVar3[5] = uVar8;
      puVar3[4] = uVar7;
      *(int *)((long)param_1 + 0x5c) = *(int *)((long)param_1 + 0x5c) + 0x30;
    }
    else {
      memcpy(puVar3,param_4,0x40 - uVar4);
      FUN_00407808(param_1,puVar1,1);
      sVar2 = uVar4 - 0x10;
      puVar3 = (undefined8 *)((long)param_4 + (0x40 - uVar4));
      *(undefined4 *)((long)param_1 + 0x5c) = 0;
      *(undefined8 *)((long)param_1 + 0x24) = 0;
      *puVar1 = 0;
      *(undefined8 *)((long)param_1 + 0x34) = 0;
      *(undefined8 *)((long)param_1 + 0x2c) = 0;
      *(undefined8 *)((long)param_1 + 0x44) = 0;
      *(undefined8 *)((long)param_1 + 0x3c) = 0;
      *(undefined8 *)((long)param_1 + 0x54) = 0;
      *(undefined8 *)((long)param_1 + 0x4c) = 0;
      if (0x3f < sVar2) {
        FUN_00407808(param_1,puVar3,sVar2 >> 6);
        uVar4 = sVar2 & 0xffffffffffffffc0;
        sVar2 = sVar2 & 0x3f;
        puVar3 = (undefined8 *)((long)puVar3 + uVar4);
      }
      if (sVar2 != 0) goto LAB_00408a60;
    }
  }
  uVar6 = *(uint *)((long)param_1 + 0x5c);
  uVar4 = (ulong)uVar6;
  uVar5 = (uint)*(undefined8 *)((long)param_1 + 0x14);
  uStack_68 = 0x3636363636363636;
  local_70 = 0x3636363636363636;
  uStack_58 = 0x3636363636363636;
  local_60 = 0x3636363636363636;
  local_50 = 0x3636363636363636;
  *(ulong *)((long)param_1 + 0x14) =
       CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x14) >> 0x20) +
                (uint)(0xfffffebf < uVar5),uVar5 + 0x140);
  if (uVar6 == 0) {
    puVar3 = &local_70;
    sVar2 = 0x28;
  }
  else {
    puVar1 = (undefined8 *)((long)param_1 + 0x1c);
    puVar3 = (undefined8 *)((long)puVar1 + uVar4);
    if (uVar6 < 0x18) {
      puVar3[4] = 0x3636363636363636;
      puVar3[1] = 0x3636363636363636;
      *puVar3 = 0x3636363636363636;
      puVar3[3] = 0x3636363636363636;
      puVar3[2] = 0x3636363636363636;
      *(int *)((long)param_1 + 0x5c) = *(int *)((long)param_1 + 0x5c) + 0x28;
      goto LAB_00408b88;
    }
    memcpy(puVar3,&local_70,-uVar4 + 0x40);
    FUN_00407808(param_1,puVar1,1);
    sVar2 = uVar4 - 0x18;
    puVar3 = (undefined8 *)(&stack0xffffffffffffffd0 + -uVar4);
    *(undefined4 *)((long)param_1 + 0x5c) = 0;
    *(undefined8 *)((long)param_1 + 0x24) = 0;
    *puVar1 = 0;
    *(undefined8 *)((long)param_1 + 0x34) = 0;
    *(undefined8 *)((long)param_1 + 0x2c) = 0;
    *(undefined8 *)((long)param_1 + 0x44) = 0;
    *(undefined8 *)((long)param_1 + 0x3c) = 0;
    *(undefined8 *)((long)param_1 + 0x54) = 0;
    *(undefined8 *)((long)param_1 + 0x4c) = 0;
    if (0x3f < sVar2) {
      FUN_00407808(param_1,puVar3,sVar2 >> 6);
      uVar4 = sVar2 & 0xffffffffffffffc0;
      sVar2 = sVar2 & 0x3f;
      puVar3 = (undefined8 *)((long)puVar3 + uVar4);
    }
    if (sVar2 == 0) goto LAB_00408b88;
  }
  *(int *)((long)param_1 + 0x5c) = (int)sVar2;
  memcpy((void *)((long)param_1 + 0x1c),puVar3,sVar2);
LAB_00408b88:
  FUN_00408838(&local_84,param_1);
  uVar8 = _UNK_00200208;
  uVar7 = _DAT_00200200;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[1] = uVar8;
  *param_1 = uVar7;
  uVar7 = DAT_001b7170;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  puVar3 = (undefined8 *)((long)param_1 + 0x1c);
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *puVar3 = 0;
  param_1[2] = uVar7;
  *(undefined4 *)((long)param_1 + 0x5c) = 0x30;
  uVar11 = param_4[3];
  uVar10 = param_4[2];
  uVar8 = param_4[5];
  uVar7 = param_4[4];
  uVar9 = *param_4;
  uStack_68 = 0x5c5c5c5c5c5c5c5c;
  local_70 = 0x5c5c5c5c5c5c5c5c;
  uStack_58 = 0x5c5c5c5c5c5c5c5c;
  local_60 = 0x5c5c5c5c5c5c5c5c;
  *(undefined8 *)((long)param_1 + 0x24) = param_4[1];
  *puVar3 = uVar9;
  *(undefined8 *)((long)param_1 + 0x44) = uVar8;
  *(undefined8 *)((long)param_1 + 0x3c) = uVar7;
  uVar7 = DAT_001b6ff8;
  *(undefined8 *)((long)param_1 + 0x34) = uVar11;
  *(undefined8 *)((long)param_1 + 0x2c) = uVar10;
  local_50 = 0x5c5c5c5c5c5c5c5c;
  *(undefined8 *)((long)param_1 + 0x14) = uVar7;
  *(undefined8 *)((long)param_1 + 0x54) = 0x5c5c5c5c5c5c5c5c;
  *(undefined8 *)((long)param_1 + 0x4c) = 0x5c5c5c5c5c5c5c5c;
  FUN_00407808(param_1,puVar3,1);
  uVar6 = (uint)*(undefined8 *)((long)param_1 + 0x14);
  *(undefined8 *)((long)param_1 + 0x24) = uStack_58;
  *puVar3 = local_60;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = local_50;
  param_1[0xb] = 0x2c00000000;
  *(undefined4 *)((long)param_1 + 0x44) = local_74;
  *(undefined8 *)((long)param_1 + 0x3c) = uStack_7c;
  *(undefined8 *)((long)param_1 + 0x34) = local_84;
  *(ulong *)((long)param_1 + 0x14) =
       CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x14) >> 0x20) +
                (uint)(0xffffff5f < uVar6),uVar6 + 0xa0);
  FUN_003c89b8(&local_84,0x14);
  return 1;
}


// ===== 00408c94  FUN_00408c94 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00408c94(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _UNK_00200b58;
  uVar1 = _DAT_00200b50;
  *(undefined4 *)((long)param_1 + 0x6c) = 0x1c;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  *(undefined8 *)((long)param_1 + 100) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  uVar1 = _DAT_00200780;
  param_1[3] = _UNK_00200788;
  param_1[2] = uVar1;
  return 1;
}


// ===== 00408cd0  FUN_00408cd0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00408cd0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _UNK_00200ae8;
  uVar1 = _DAT_00200ae0;
  *(undefined4 *)((long)param_1 + 0x6c) = 0x20;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  *(undefined8 *)((long)param_1 + 100) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  uVar1 = _DAT_002007d0;
  param_1[3] = _UNK_002007d8;
  param_1[2] = uVar1;
  return 1;
}


// ===== 00408d0c  FUN_00408d0c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00408d0c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _UNK_00200ae8;
  uVar1 = _DAT_00200ae0;
  *(undefined4 *)((long)param_1 + 0x6c) = 0x18;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  *(undefined8 *)((long)param_1 + 100) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  uVar1 = _DAT_002007d0;
  param_1[3] = _UNK_002007d8;
  param_1[2] = uVar1;
  return 1;
}


// ===== 00408d48  FUN_00408d48 =====

undefined8 FUN_00408d48(long param_1,void *param_2,ulong param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong uVar4;
  size_t __n;
  
  if (param_3 != 0) {
    uVar3 = *(uint *)(param_1 + 0x20);
    uVar1 = (int)param_3 * 8;
    uVar4 = (ulong)*(uint *)(param_1 + 0x68);
    *(uint *)(param_1 + 0x20) = uVar3 + uVar1;
    *(uint *)(param_1 + 0x24) =
         (int)(param_3 >> 0x1d) + *(int *)(param_1 + 0x24) + (uint)CARRY4(uVar3,uVar1);
    if (*(uint *)(param_1 + 0x68) != 0) {
      puVar2 = (undefined8 *)(param_1 + 0x28);
      if ((param_3 < 0x40) && (uVar4 + param_3 < 0x40)) {
        memcpy((void *)((long)puVar2 + uVar4),param_2,param_3);
        *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + (int)param_3;
        return 1;
      }
      __n = 0x40 - uVar4;
      memcpy((void *)((long)puVar2 + uVar4),param_2,__n);
      FUN_004092e0(param_1,puVar2,1);
      param_3 = param_3 - __n;
      param_2 = (void *)((long)param_2 + __n);
      *(undefined4 *)(param_1 + 0x68) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *puVar2 = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(undefined8 *)(param_1 + 0x58) = 0;
    }
    if (0x3f < param_3) {
      FUN_004092e0(param_1,param_2,param_3 >> 6);
      uVar4 = param_3 & 0xffffffffffffffc0;
      param_3 = param_3 & 0x3f;
      param_2 = (void *)((long)param_2 + uVar4);
    }
    if (param_3 != 0) {
      *(int *)(param_1 + 0x68) = (int)param_3;
      memcpy((void *)(param_1 + 0x28),param_2,param_3);
    }
  }
  return 1;
}


// ===== 00408e50  FUN_00408e50 =====

undefined8 FUN_00408e50(long param_1,void *param_2,ulong param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong uVar4;
  size_t __n;
  
  if (param_3 != 0) {
    uVar3 = *(uint *)(param_1 + 0x20);
    uVar1 = (int)param_3 * 8;
    uVar4 = (ulong)*(uint *)(param_1 + 0x68);
    *(uint *)(param_1 + 0x20) = uVar3 + uVar1;
    *(uint *)(param_1 + 0x24) =
         *(int *)(param_1 + 0x24) + (int)(param_3 >> 0x1d) + (uint)CARRY4(uVar3,uVar1);
    if (*(uint *)(param_1 + 0x68) != 0) {
      puVar2 = (undefined8 *)(param_1 + 0x28);
      if ((param_3 < 0x40) && (uVar4 + param_3 < 0x40)) {
        memcpy((void *)((long)puVar2 + uVar4),param_2,param_3);
        *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + (int)param_3;
        return 1;
      }
      __n = 0x40 - uVar4;
      memcpy((void *)((long)puVar2 + uVar4),param_2,__n);
      FUN_004092e0(param_1,puVar2,1);
      param_3 = param_3 - __n;
      param_2 = (void *)((long)param_2 + __n);
      *(undefined4 *)(param_1 + 0x68) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *puVar2 = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(undefined8 *)(param_1 + 0x58) = 0;
    }
    if (0x3f < param_3) {
      FUN_004092e0(param_1,param_2,param_3 >> 6);
      uVar4 = param_3 & 0xffffffffffffffc0;
      param_3 = param_3 & 0x3f;
      param_2 = (void *)((long)param_2 + uVar4);
    }
    if (param_3 != 0) {
      *(int *)(param_1 + 0x68) = (int)param_3;
      memcpy((void *)(param_1 + 0x28),param_2,param_3);
    }
  }
  return 1;
}


// ===== 00408f58  thunk_FUN_00408f5c =====

undefined8 thunk_FUN_00408f5c(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
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
  uint *puVar39;
  uint *puVar40;
  long lVar41;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  uVar1 = param_2[0x1a];
  uVar21 = (ulong)uVar1;
  puVar39 = param_2 + 10;
  *(undefined1 *)((long)puVar39 + uVar21) = 0x80;
  lVar19 = uVar21 + 1;
  if (0x37 < uVar1) {
    memset((void *)((long)puVar39 + lVar19),0,0x3f - uVar21);
    FUN_004092e0(param_2,puVar39,1);
    lVar19 = 0;
  }
  memset((void *)((long)puVar39 + lVar19),0,0x38 - lVar19);
  lVar35 = 1;
  uVar1 = (param_2[9] & 0xff00ff00) >> 8 | (param_2[9] & 0xff00ff) << 8;
  uVar3 = (param_2[8] & 0xff00ff00) >> 8 | (param_2[8] & 0xff00ff) << 8;
  param_2[0x18] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x19] = uVar3 >> 0x10 | uVar3 << 0x10;
  FUN_004092e0(param_2,puVar39,1);
  param_2[0x1a] = 0;
  FUN_003c89b8(puVar39,0x40);
  uVar1 = param_2[0x1b];
  lVar20 = 0x17;
  lVar22 = 0x16;
  lVar23 = 0x15;
  lVar24 = 0x14;
  lVar27 = 0x13;
  lVar25 = 0x12;
  lVar29 = 0x11;
  lVar30 = 0x10;
  lVar32 = 0xf;
  lVar31 = 0xe;
  lVar4 = 0xd;
  lVar5 = 0xc;
  lVar9 = 0xb;
  lVar7 = 10;
  lVar11 = 9;
  lVar13 = 8;
  lVar17 = 7;
  lVar15 = 6;
  lVar33 = 5;
  lVar36 = 4;
  lVar37 = 3;
  lVar38 = 2;
  lVar19 = lVar4;
  lVar6 = lVar5;
  lVar8 = lVar7;
  lVar10 = lVar9;
  lVar12 = lVar11;
  lVar14 = lVar13;
  lVar16 = lVar15;
  lVar18 = lVar17;
  lStack_68 = lVar20;
  lStack_70 = lVar22;
  lStack_78 = lVar23;
  lVar41 = lVar24;
  lVar26 = lVar25;
  lVar28 = lVar27;
  lVar34 = lVar33;
  puVar40 = param_1;
  puVar39 = param_2;
  if (uVar1 != 0x18) {
    if (uVar1 == 0x1c) {
      lVar41 = 0x18;
      lStack_68 = 0x1b;
      lStack_70 = 0x1a;
      lStack_78 = 0x19;
    }
    else {
      if (uVar1 != 0x20) {
        if (0x20 < uVar1) {
          return 0;
        }
        if (uVar1 < 4) {
          return 1;
        }
        uVar21 = 0;
        do {
          puVar39 = param_2 + uVar21;
          uVar21 = uVar21 + 1;
          uVar1 = (*puVar39 & 0xff00ff00) >> 8 | (*puVar39 & 0xff00ff) << 8;
          *param_1 = uVar1 >> 0x10 | uVar1 << 0x10;
          param_1 = param_1 + 1;
        } while (uVar21 < param_2[0x1b] >> 2);
        return 1;
      }
      lStack_68 = 0x1f;
      lVar41 = 0x1c;
      lVar22 = 0x1a;
      lStack_70 = 0x1e;
      uVar1 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
      lStack_78 = 0x1d;
      lVar20 = 0x1b;
      lVar23 = 0x19;
      lVar24 = 0x18;
      *param_1 = uVar1 >> 0x10 | uVar1 << 0x10;
      lVar27 = 0x17;
      lVar25 = 0x16;
      lVar29 = 0x15;
      lVar30 = 0x14;
      lVar32 = 0x13;
      lVar31 = 0x12;
      lVar4 = 0x11;
      lVar5 = 0x10;
      lVar9 = 0xf;
      lVar7 = 0xe;
      lVar11 = 0xd;
      lVar13 = 0xc;
      lVar17 = 0xb;
      lVar15 = 10;
      lVar33 = 9;
      lVar36 = 8;
      lVar37 = 7;
      lVar38 = 6;
      lVar35 = 5;
      puVar39 = param_2 + 1;
      puVar40 = param_1 + 1;
    }
    uVar1 = *puVar39;
    *(char *)puVar40 = (char)(uVar1 >> 0x18);
    *(char *)((long)param_1 + lVar35) = (char)(uVar1 >> 0x10);
    puVar39 = (uint *)((long)param_2 + lVar36);
    *(char *)((long)param_1 + lVar38) = (char)(uVar1 >> 8);
    *(char *)((long)param_1 + lVar37) = (char)uVar1;
    puVar40 = (uint *)((long)param_1 + lVar36);
    lVar19 = lVar29;
    lVar6 = lVar30;
    lVar8 = lVar31;
    lVar10 = lVar32;
    lVar12 = lVar4;
    lVar14 = lVar5;
    lVar16 = lVar7;
    lVar18 = lVar9;
    lVar26 = lVar22;
    lVar28 = lVar20;
    lVar29 = lVar23;
    lVar30 = lVar24;
    lVar31 = lVar25;
    lVar32 = lVar27;
    lVar34 = lVar11;
    lVar35 = lVar33;
    lVar36 = lVar13;
    lVar37 = lVar17;
    lVar38 = lVar15;
  }
  uVar1 = *puVar39;
  *(char *)puVar40 = (char)(uVar1 >> 0x18);
  *(char *)((long)param_1 + lVar35) = (char)(uVar1 >> 0x10);
  *(char *)((long)param_1 + lVar38) = (char)(uVar1 >> 8);
  *(char *)((long)param_1 + lVar37) = (char)uVar1;
  uVar2 = *(undefined4 *)((long)param_2 + lVar36);
  *(char *)((long)param_1 + lVar18) = (char)uVar2;
  *(char *)((long)param_1 + lVar36) = (char)((uint)uVar2 >> 0x18);
  *(char *)((long)param_1 + lVar34) = (char)((uint)uVar2 >> 0x10);
  *(char *)((long)param_1 + lVar16) = (char)((uint)uVar2 >> 8);
  uVar2 = *(undefined4 *)((long)param_2 + lVar14);
  *(char *)((long)param_1 + lVar10) = (char)uVar2;
  *(char *)((long)param_1 + lVar14) = (char)((uint)uVar2 >> 0x18);
  *(char *)((long)param_1 + lVar12) = (char)((uint)uVar2 >> 0x10);
  *(char *)((long)param_1 + lVar8) = (char)((uint)uVar2 >> 8);
  uVar2 = *(undefined4 *)((long)param_2 + lVar6);
  *(char *)((long)param_1 + lVar32) = (char)uVar2;
  *(char *)((long)param_1 + lVar6) = (char)((uint)uVar2 >> 0x18);
  *(char *)((long)param_1 + lVar19) = (char)((uint)uVar2 >> 0x10);
  *(char *)((long)param_1 + lVar31) = (char)((uint)uVar2 >> 8);
  uVar2 = *(undefined4 *)((long)param_2 + lVar30);
  *(char *)((long)param_1 + lVar28) = (char)uVar2;
  *(char *)((long)param_1 + lVar30) = (char)((uint)uVar2 >> 0x18);
  *(char *)((long)param_1 + lVar29) = (char)((uint)uVar2 >> 0x10);
  *(char *)((long)param_1 + lVar26) = (char)((uint)uVar2 >> 8);
  uVar2 = *(undefined4 *)((long)param_2 + lVar41);
  *(char *)((long)param_1 + lStack_68) = (char)uVar2;
  *(char *)((long)param_1 + lVar41) = (char)((uint)uVar2 >> 0x18);
  *(char *)((long)param_1 + lStack_78) = (char)((uint)uVar2 >> 0x10);
  *(char *)((long)param_1 + lStack_70) = (char)((uint)uVar2 >> 8);
  return 1;
}


// ===== 00408f5c  FUN_00408f5c =====

undefined8 FUN_00408f5c(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
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
  uint *puVar39;
  uint *puVar40;
  long lVar41;
  long local_78;
  long local_70;
  long local_68;
  
  uVar1 = param_2[0x1a];
  uVar21 = (ulong)uVar1;
  puVar39 = param_2 + 10;
  *(undefined1 *)((long)puVar39 + uVar21) = 0x80;
  lVar19 = uVar21 + 1;
  if (0x37 < uVar1) {
    memset((void *)((long)puVar39 + lVar19),0,0x3f - uVar21);
    FUN_004092e0(param_2,puVar39,1);
    lVar19 = 0;
  }
  memset((void *)((long)puVar39 + lVar19),0,0x38 - lVar19);
  lVar35 = 1;
  uVar1 = (param_2[9] & 0xff00ff00) >> 8 | (param_2[9] & 0xff00ff) << 8;
  uVar3 = (param_2[8] & 0xff00ff00) >> 8 | (param_2[8] & 0xff00ff) << 8;
  param_2[0x18] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x19] = uVar3 >> 0x10 | uVar3 << 0x10;
  FUN_004092e0(param_2,puVar39,1);
  param_2[0x1a] = 0;
  FUN_003c89b8(puVar39,0x40);
  uVar1 = param_2[0x1b];
  lVar20 = 0x17;
  lVar22 = 0x16;
  lVar23 = 0x15;
  lVar24 = 0x14;
  lVar27 = 0x13;
  lVar25 = 0x12;
  lVar29 = 0x11;
  lVar30 = 0x10;
  lVar32 = 0xf;
  lVar31 = 0xe;
  lVar4 = 0xd;
  lVar5 = 0xc;
  lVar9 = 0xb;
  lVar7 = 10;
  lVar11 = 9;
  lVar13 = 8;
  lVar17 = 7;
  lVar15 = 6;
  lVar33 = 5;
  lVar36 = 4;
  lVar37 = 3;
  lVar38 = 2;
  lVar19 = lVar4;
  lVar6 = lVar5;
  lVar8 = lVar7;
  lVar10 = lVar9;
  lVar12 = lVar11;
  lVar14 = lVar13;
  lVar16 = lVar15;
  lVar18 = lVar17;
  local_68 = lVar20;
  local_70 = lVar22;
  local_78 = lVar23;
  lVar41 = lVar24;
  lVar26 = lVar25;
  lVar28 = lVar27;
  lVar34 = lVar33;
  puVar40 = param_1;
  puVar39 = param_2;
  if (uVar1 != 0x18) {
    if (uVar1 == 0x1c) {
      lVar41 = 0x18;
      local_68 = 0x1b;
      local_70 = 0x1a;
      local_78 = 0x19;
    }
    else {
      if (uVar1 != 0x20) {
        if (0x20 < uVar1) {
          return 0;
        }
        if (uVar1 < 4) {
          return 1;
        }
        uVar21 = 0;
        do {
          puVar39 = param_2 + uVar21;
          uVar21 = uVar21 + 1;
          uVar1 = (*puVar39 & 0xff00ff00) >> 8 | (*puVar39 & 0xff00ff) << 8;
          *param_1 = uVar1 >> 0x10 | uVar1 << 0x10;
          param_1 = param_1 + 1;
        } while (uVar21 < param_2[0x1b] >> 2);
        return 1;
      }
      local_68 = 0x1f;
      lVar41 = 0x1c;
      lVar22 = 0x1a;
      local_70 = 0x1e;
      uVar1 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
      local_78 = 0x1d;
      lVar20 = 0x1b;
      lVar23 = 0x19;
      lVar24 = 0x18;
      *param_1 = uVar1 >> 0x10 | uVar1 << 0x10;
      lVar27 = 0x17;
      lVar25 = 0x16;
      lVar29 = 0x15;
      lVar30 = 0x14;
      lVar32 = 0x13;
      lVar31 = 0x12;
      lVar4 = 0x11;
      lVar5 = 0x10;
      lVar9 = 0xf;
      lVar7 = 0xe;
      lVar11 = 0xd;
      lVar13 = 0xc;
      lVar17 = 0xb;
      lVar15 = 10;
      lVar33 = 9;
      lVar36 = 8;
      lVar37 = 7;
      lVar38 = 6;
      lVar35 = 5;
      puVar39 = param_2 + 1;
      puVar40 = param_1 + 1;
    }
    uVar1 = *puVar39;
    *(char *)puVar40 = (char)(uVar1 >> 0x18);
    *(char *)((long)param_1 + lVar35) = (char)(uVar1 >> 0x10);
    puVar39 = (uint *)((long)param_2 + lVar36);
    *(char *)((long)param_1 + lVar38) = (char)(uVar1 >> 8);
    *(char *)((long)param_1 + lVar37) = (char)uVar1;
    puVar40 = (uint *)((long)param_1 + lVar36);
    lVar19 = lVar29;
    lVar6 = lVar30;
    lVar8 = lVar31;
    lVar10 = lVar32;
    lVar12 = lVar4;
    lVar14 = lVar5;
    lVar16 = lVar7;
    lVar18 = lVar9;
    lVar26 = lVar22;
    lVar28 = lVar20;
    lVar29 = lVar23;
    lVar30 = lVar24;
    lVar31 = lVar25;
    lVar32 = lVar27;
    lVar34 = lVar11;
    lVar35 = lVar33;
    lVar36 = lVar13;
    lVar37 = lVar17;
    lVar38 = lVar15;
  }
  uVar1 = *puVar39;
  *(char *)puVar40 = (char)(uVar1 >> 0x18);
  *(char *)((long)param_1 + lVar35) = (char)(uVar1 >> 0x10);
  *(char *)((long)param_1 + lVar38) = (char)(uVar1 >> 8);
  *(char *)((long)param_1 + lVar37) = (char)uVar1;
  uVar2 = *(undefined4 *)((long)param_2 + lVar36);
  *(char *)((long)param_1 + lVar18) = (char)uVar2;
  *(char *)((long)param_1 + lVar36) = (char)((uint)uVar2 >> 0x18);
  *(char *)((long)param_1 + lVar34) = (char)((uint)uVar2 >> 0x10);
  *(char *)((long)param_1 + lVar16) = (char)((uint)uVar2 >> 8);
  uVar2 = *(undefined4 *)((long)param_2 + lVar14);
  *(char *)((long)param_1 + lVar10) = (char)uVar2;
  *(char *)((long)param_1 + lVar14) = (char)((uint)uVar2 >> 0x18);
  *(char *)((long)param_1 + lVar12) = (char)((uint)uVar2 >> 0x10);
  *(char *)((long)param_1 + lVar8) = (char)((uint)uVar2 >> 8);
  uVar2 = *(undefined4 *)((long)param_2 + lVar6);
  *(char *)((long)param_1 + lVar32) = (char)uVar2;
  *(char *)((long)param_1 + lVar6) = (char)((uint)uVar2 >> 0x18);
  *(char *)((long)param_1 + lVar19) = (char)((uint)uVar2 >> 0x10);
  *(char *)((long)param_1 + lVar31) = (char)((uint)uVar2 >> 8);
  uVar2 = *(undefined4 *)((long)param_2 + lVar30);
  *(char *)((long)param_1 + lVar28) = (char)uVar2;
  *(char *)((long)param_1 + lVar30) = (char)((uint)uVar2 >> 0x18);
  *(char *)((long)param_1 + lVar29) = (char)((uint)uVar2 >> 0x10);
  *(char *)((long)param_1 + lVar26) = (char)((uint)uVar2 >> 8);
  uVar2 = *(undefined4 *)((long)param_2 + lVar41);
  *(char *)((long)param_1 + local_68) = (char)uVar2;
  *(char *)((long)param_1 + lVar41) = (char)((uint)uVar2 >> 0x18);
  *(char *)((long)param_1 + local_78) = (char)((uint)uVar2 >> 0x10);
  *(char *)((long)param_1 + local_70) = (char)((uint)uVar2 >> 8);
  return 1;
}


// ===== 004092e0  FUN_004092e0 =====

void FUN_004092e0(uint *param_1,uint *param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  int *piVar30;
  uint local_a0 [4];
  uint local_90;
  uint uStack_8c;
  uint local_88;
  uint uStack_84;
  uint local_80;
  uint uStack_7c;
  uint local_78;
  uint uStack_74;
  uint local_70;
  uint uStack_6c;
  uint local_68;
  uint uStack_64;
  
  if (param_3 != 0) {
    uVar19 = *param_1;
    uVar20 = param_1[1];
    uVar22 = param_1[2];
    uVar23 = param_1[3];
    uVar24 = param_1[4];
    uVar11 = param_1[5];
    uVar16 = param_1[6];
    uVar12 = param_1[7];
    do {
      uVar25 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
      local_a0[0] = uVar25 >> 0x10 | uVar25 << 0x10;
      iVar1 = (uVar11 & uVar24) + uVar12 + (uVar16 & (uVar24 ^ 0xffffffff)) + local_a0[0] +
              0x428a2f98 +
              ((uVar24 >> 6 | uVar24 << 0x1a) ^ (uVar24 >> 0xb | uVar24 << 0x15) ^
              (uVar24 >> 0x19 | uVar24 << 7));
      uVar25 = iVar1 + uVar23;
      uVar21 = (param_2[1] & 0xff00ff00) >> 8 | (param_2[1] & 0xff00ff) << 8;
      local_a0[1] = uVar21 >> 0x10 | uVar21 << 0x10;
      uVar26 = ((uVar22 ^ uVar20) & uVar19 ^ uVar22 & uVar20) +
               ((uVar19 >> 2 | uVar19 << 0x1e) ^ (uVar19 >> 0xd | uVar19 << 0x13) ^
               (uVar19 >> 0x16 | uVar19 << 10)) + iVar1;
      iVar1 = uVar16 + (uVar11 & (uVar25 ^ 0xffffffff)) + (uVar25 & uVar24) + local_a0[1] +
              0x71374491 +
              ((uVar25 >> 6 | uVar25 * 0x4000000) ^ (uVar25 >> 0xb | uVar25 * 0x200000) ^
              (uVar25 >> 0x19 | uVar25 * 0x80));
      uVar21 = iVar1 + uVar22;
      uVar28 = (param_2[2] & 0xff00ff00) >> 8 | (param_2[2] & 0xff00ff) << 8;
      local_a0[2] = uVar28 >> 0x10 | uVar28 << 0x10;
      uVar29 = ((uVar26 >> 2 | uVar26 * 0x40000000) ^ (uVar26 >> 0xd | uVar26 * 0x80000) ^
               (uVar26 >> 0x16 | uVar26 * 0x400)) + (uVar26 & (uVar20 ^ uVar19) ^ uVar20 & uVar19) +
               iVar1;
      iVar1 = uVar11 + local_a0[2] + (uVar24 & (uVar21 ^ 0xffffffff)) + (uVar21 & uVar25) +
              -0x4a3f0431 +
              ((uVar21 >> 6 | uVar21 * 0x4000000) ^ (uVar21 >> 0xb | uVar21 * 0x200000) ^
              (uVar21 >> 0x19 | uVar21 * 0x80));
      uVar28 = iVar1 + uVar20;
      uVar13 = (param_2[3] & 0xff00ff00) >> 8 | (param_2[3] & 0xff00ff) << 8;
      local_a0[3] = uVar13 >> 0x10 | uVar13 << 0x10;
      uVar27 = ((uVar29 >> 2 | uVar29 * 0x40000000) ^ (uVar29 >> 0xd | uVar29 * 0x80000) ^
               (uVar29 >> 0x16 | uVar29 * 0x400)) + (uVar29 & (uVar26 ^ uVar19) ^ uVar26 & uVar19) +
               iVar1;
      iVar1 = uVar24 + local_a0[3] + (uVar25 & (uVar28 ^ 0xffffffff)) + (uVar28 & uVar21) +
              -0x164a245b +
              ((uVar28 >> 6 | uVar28 * 0x4000000) ^ (uVar28 >> 0xb | uVar28 * 0x200000) ^
              (uVar28 >> 0x19 | uVar28 * 0x80));
      uVar13 = iVar1 + uVar19;
      uVar10 = ((uVar27 >> 2 | uVar27 * 0x40000000) ^ (uVar27 >> 0xd | uVar27 * 0x80000) ^
               (uVar27 >> 0x16 | uVar27 * 0x400)) + (uVar27 & (uVar29 ^ uVar26) ^ uVar29 & uVar26) +
               iVar1;
      uVar9 = (param_2[4] & 0xff00ff00) >> 8 | (param_2[4] & 0xff00ff) << 8;
      local_90 = uVar9 >> 0x10 | uVar9 << 0x10;
      iVar1 = uVar25 + local_90 + (uVar21 & (uVar13 ^ 0xffffffff)) + (uVar13 & uVar28) + 0x3956c25b
              + ((uVar13 >> 6 | uVar13 * 0x4000000) ^ (uVar13 >> 0xb | uVar13 * 0x200000) ^
                (uVar13 >> 0x19 | uVar13 * 0x80));
      uVar25 = (param_2[5] & 0xff00ff00) >> 8 | (param_2[5] & 0xff00ff) << 8;
      uStack_8c = uVar25 >> 0x10 | uVar25 << 0x10;
      uVar26 = iVar1 + uVar26;
      uVar25 = ((uVar10 >> 2 | uVar10 * 0x40000000) ^ (uVar10 >> 0xd | uVar10 * 0x80000) ^
               (uVar10 >> 0x16 | uVar10 * 0x400)) + (uVar10 & (uVar27 ^ uVar29) ^ uVar27 & uVar29) +
               iVar1;
      iVar1 = uVar21 + uStack_8c + (uVar28 & (uVar26 ^ 0xffffffff)) + (uVar26 & uVar13) + 0x59f111f1
              + ((uVar26 >> 6 | uVar26 * 0x4000000) ^ (uVar26 >> 0xb | uVar26 * 0x200000) ^
                (uVar26 >> 0x19 | uVar26 * 0x80));
      uVar29 = iVar1 + uVar29;
      uVar21 = ((uVar25 >> 2 | uVar25 * 0x40000000) ^ (uVar25 >> 0xd | uVar25 * 0x80000) ^
               (uVar25 >> 0x16 | uVar25 * 0x400)) + (uVar25 & (uVar10 ^ uVar27) ^ uVar10 & uVar27) +
               iVar1;
      uVar9 = (param_2[6] & 0xff00ff00) >> 8 | (param_2[6] & 0xff00ff) << 8;
      local_88 = uVar9 >> 0x10 | uVar9 << 0x10;
      uVar9 = (param_2[7] & 0xff00ff00) >> 8 | (param_2[7] & 0xff00ff) << 8;
      uStack_84 = uVar9 >> 0x10 | uVar9 << 0x10;
      iVar1 = uVar28 + local_88 + (uVar13 & (uVar29 ^ 0xffffffff)) + (uVar29 & uVar26) + -0x6dc07d5c
              + ((uVar29 >> 6 | uVar29 * 0x4000000) ^ (uVar29 >> 0xb | uVar29 * 0x200000) ^
                (uVar29 >> 0x19 | uVar29 * 0x80));
      uVar27 = iVar1 + uVar27;
      uVar28 = ((uVar21 >> 2 | uVar21 * 0x40000000) ^ (uVar21 >> 0xd | uVar21 * 0x80000) ^
               (uVar21 >> 0x16 | uVar21 * 0x400)) + (uVar21 & (uVar25 ^ uVar10) ^ uVar25 & uVar10) +
               iVar1;
      iVar1 = uVar13 + uStack_84 + (uVar26 & (uVar27 ^ 0xffffffff)) + (uVar27 & uVar29) +
              -0x54e3a12b +
              ((uVar27 >> 6 | uVar27 * 0x4000000) ^ (uVar27 >> 0xb | uVar27 * 0x200000) ^
              (uVar27 >> 0x19 | uVar27 * 0x80));
      uVar10 = iVar1 + uVar10;
      uVar13 = ((uVar28 >> 2 | uVar28 * 0x40000000) ^ (uVar28 >> 0xd | uVar28 * 0x80000) ^
               (uVar28 >> 0x16 | uVar28 * 0x400)) + (uVar28 & (uVar21 ^ uVar25) ^ uVar21 & uVar25) +
               iVar1;
      uVar9 = (param_2[8] & 0xff00ff00) >> 8 | (param_2[8] & 0xff00ff) << 8;
      local_80 = uVar9 >> 0x10 | uVar9 << 0x10;
      iVar1 = uVar26 + local_80 + (uVar29 & (uVar10 ^ 0xffffffff)) + (uVar10 & uVar27) + -0x27f85568
              + ((uVar10 >> 6 | uVar10 * 0x4000000) ^ (uVar10 >> 0xb | uVar10 * 0x200000) ^
                (uVar10 >> 0x19 | uVar10 * 0x80));
      uVar25 = iVar1 + uVar25;
      uVar26 = (param_2[9] & 0xff00ff00) >> 8 | (param_2[9] & 0xff00ff) << 8;
      uStack_7c = uVar26 >> 0x10 | uVar26 << 0x10;
      uVar26 = ((uVar13 >> 2 | uVar13 * 0x40000000) ^ (uVar13 >> 0xd | uVar13 * 0x80000) ^
               (uVar13 >> 0x16 | uVar13 * 0x400)) + (uVar13 & (uVar28 ^ uVar21) ^ uVar28 & uVar21) +
               iVar1;
      iVar1 = uVar29 + uStack_7c + (uVar27 & (uVar25 ^ 0xffffffff)) + (uVar25 & uVar10) + 0x12835b01
              + ((uVar25 >> 6 | uVar25 * 0x4000000) ^ (uVar25 >> 0xb | uVar25 * 0x200000) ^
                (uVar25 >> 0x19 | uVar25 * 0x80));
      uVar21 = iVar1 + uVar21;
      uVar29 = ((uVar26 >> 2 | uVar26 * 0x40000000) ^ (uVar26 >> 0xd | uVar26 * 0x80000) ^
               (uVar26 >> 0x16 | uVar26 * 0x400)) + (uVar26 & (uVar13 ^ uVar28) ^ uVar13 & uVar28) +
               iVar1;
      uVar9 = (param_2[10] & 0xff00ff00) >> 8 | (param_2[10] & 0xff00ff) << 8;
      local_78 = uVar9 >> 0x10 | uVar9 << 0x10;
      iVar1 = uVar27 + local_78 + (uVar10 & (uVar21 ^ 0xffffffff)) + (uVar21 & uVar25) + 0x243185be
              + ((uVar21 >> 6 | uVar21 * 0x4000000) ^ (uVar21 >> 0xb | uVar21 * 0x200000) ^
                (uVar21 >> 0x19 | uVar21 * 0x80));
      uVar27 = (param_2[0xb] & 0xff00ff00) >> 8 | (param_2[0xb] & 0xff00ff) << 8;
      uStack_74 = uVar27 >> 0x10 | uVar27 << 0x10;
      uVar28 = iVar1 + uVar28;
      uVar27 = ((uVar29 >> 2 | uVar29 * 0x40000000) ^ (uVar29 >> 0xd | uVar29 * 0x80000) ^
               (uVar29 >> 0x16 | uVar29 * 0x400)) + (uVar29 & (uVar26 ^ uVar13) ^ uVar26 & uVar13) +
               iVar1;
      iVar1 = uStack_74 + uVar10 + (uVar25 & (uVar28 ^ 0xffffffff)) + (uVar28 & uVar21) + 0x550c7dc3
              + ((uVar28 >> 6 | uVar28 * 0x4000000) ^ (uVar28 >> 0xb | uVar28 * 0x200000) ^
                (uVar28 >> 0x19 | uVar28 * 0x80));
      uVar13 = iVar1 + uVar13;
      uVar10 = ((uVar27 >> 2 | uVar27 * 0x40000000) ^ (uVar27 >> 0xd | uVar27 * 0x80000) ^
               (uVar27 >> 0x16 | uVar27 * 0x400)) + (uVar27 & (uVar29 ^ uVar26) ^ uVar29 & uVar26) +
               iVar1;
      uVar9 = (param_2[0xc] & 0xff00ff00) >> 8 | (param_2[0xc] & 0xff00ff) << 8;
      local_70 = uVar9 >> 0x10 | uVar9 << 0x10;
      uVar9 = (param_2[0xd] & 0xff00ff00) >> 8 | (param_2[0xd] & 0xff00ff) << 8;
      uStack_6c = uVar9 >> 0x10 | uVar9 << 0x10;
      iVar1 = local_70 + uVar25 + (uVar21 & (uVar13 ^ 0xffffffff)) + (uVar13 & uVar28) + 0x72be5d74
              + ((uVar13 >> 6 | uVar13 * 0x4000000) ^ (uVar13 >> 0xb | uVar13 * 0x200000) ^
                (uVar13 >> 0x19 | uVar13 * 0x80));
      uVar26 = iVar1 + uVar26;
      uVar25 = ((uVar10 >> 2 | uVar10 * 0x40000000) ^ (uVar10 >> 0xd | uVar10 * 0x80000) ^
               (uVar10 >> 0x16 | uVar10 * 0x400)) + (uVar10 & (uVar27 ^ uVar29) ^ uVar27 & uVar29) +
               iVar1;
      iVar1 = uStack_6c + uVar21 + (uVar28 & (uVar26 ^ 0xffffffff)) + (uVar26 & uVar13) +
              -0x7f214e02 +
              ((uVar26 >> 6 | uVar26 * 0x4000000) ^ (uVar26 >> 0xb | uVar26 * 0x200000) ^
              (uVar26 >> 0x19 | uVar26 * 0x80));
      uVar29 = iVar1 + uVar29;
      uVar21 = ((uVar25 >> 2 | uVar25 * 0x40000000) ^ (uVar25 >> 0xd | uVar25 * 0x80000) ^
               (uVar25 >> 0x16 | uVar25 * 0x400)) + (uVar25 & (uVar10 ^ uVar27) ^ uVar10 & uVar27) +
               iVar1;
      uVar9 = (param_2[0xe] & 0xff00ff00) >> 8 | (param_2[0xe] & 0xff00ff) << 8;
      local_68 = uVar9 >> 0x10 | uVar9 << 0x10;
      iVar1 = local_68 + uVar28 + (uVar13 & (uVar29 ^ 0xffffffff)) + (uVar29 & uVar26) + -0x6423f959
              + ((uVar29 >> 6 | uVar29 * 0x4000000) ^ (uVar29 >> 0xb | uVar29 * 0x200000) ^
                (uVar29 >> 0x19 | uVar29 * 0x80));
      uVar28 = (param_2[0xf] & 0xff00ff00) >> 8 | (param_2[0xf] & 0xff00ff) << 8;
      uStack_64 = uVar28 >> 0x10 | uVar28 << 0x10;
      uVar27 = iVar1 + uVar27;
      uVar28 = ((uVar21 >> 2 | uVar21 * 0x40000000) ^ (uVar21 >> 0xd | uVar21 * 0x80000) ^
               (uVar21 >> 0x16 | uVar21 * 0x400)) + (uVar21 & (uVar25 ^ uVar10) ^ uVar25 & uVar10) +
               iVar1;
      iVar1 = uStack_64 + uVar13 + (uVar26 & (uVar27 ^ 0xffffffff)) + (uVar27 & uVar29) +
              -0x3e640e8c +
              ((uVar27 >> 6 | uVar27 * 0x4000000) ^ (uVar27 >> 0xb | uVar27 * 0x200000) ^
              (uVar27 >> 0x19 | uVar27 * 0x80));
      uVar10 = iVar1 + uVar10;
      uVar13 = ((uVar28 >> 2 | uVar28 * 0x40000000) ^ (uVar28 >> 0xd | uVar28 * 0x80000) ^
               (uVar28 >> 0x16 | uVar28 * 0x400)) + (uVar28 & (uVar21 ^ uVar25) ^ uVar21 & uVar25) +
               iVar1;
      uVar15 = 0x1f;
      piVar30 = &DAT_0020e69c;
      do {
        iVar14 = (int)uVar15;
        uVar18 = (ulong)(iVar14 - 0xe) & 9;
        uVar4 = local_a0[(ulong)(iVar14 - 1) & 0xe];
        uVar17 = uVar15 - 0xf;
        uVar5 = local_a0[uVar18];
        uVar2 = (uint)uVar17 & 8;
        uVar9 = ((uVar5 >> 7 | uVar5 << 0x19) ^ (uVar5 >> 0x12 | uVar5 << 0xe) ^ uVar5 >> 3) +
                local_a0[(ulong)(iVar14 - 6) & 9] + local_a0[uVar17 & 8] +
                ((uVar4 >> 0x11 | uVar4 << 0xf) ^ (uVar4 >> 0x13 | uVar4 << 0xd) ^ uVar4 >> 10);
        local_a0[uVar17 & 8] = uVar9;
        iVar3 = piVar30[-6];
        uVar6 = local_a0[uVar15 & 0xf];
        uVar7 = local_a0[uVar2 | 2];
        iVar1 = ((uVar10 >> 6 | uVar10 << 0x1a) ^ (uVar10 >> 0xb | uVar10 << 0x15) ^
                (uVar10 >> 0x19 | uVar10 << 7)) +
                (uVar27 & uVar10) + uVar26 + (uVar29 & (uVar10 ^ 0xffffffff)) + piVar30[-7] + uVar9;
        uVar25 = iVar1 + uVar25;
        uVar26 = ((uVar13 >> 2 | uVar13 << 0x1e) ^ (uVar13 >> 0xd | uVar13 << 0x13) ^
                 (uVar13 >> 0x16 | uVar13 << 10)) + (uVar13 & (uVar28 ^ uVar21) ^ uVar28 & uVar21) +
                 iVar1;
        uVar5 = local_a0[(ulong)(iVar14 - 5) & 10] + uVar5 +
                ((uVar6 >> 0x11 | uVar6 << 0xf) ^ (uVar6 >> 0x13 | uVar6 << 0xd) ^ uVar6 >> 10) +
                ((uVar7 >> 7 | uVar7 << 0x19) ^ (uVar7 >> 0x12 | uVar7 << 0xe) ^ uVar7 >> 3);
        local_a0[uVar18] = uVar5;
        uVar7 = local_a0[uVar2 | 3];
        iVar1 = (uVar27 & (uVar25 ^ 0xffffffff)) + uVar29 + (uVar25 & uVar10) + iVar3 + uVar5 +
                ((uVar25 >> 6 | uVar25 * 0x4000000) ^ (uVar25 >> 0xb | uVar25 * 0x200000) ^
                (uVar25 >> 0x19 | uVar25 * 0x80));
        uVar18 = (ulong)(iVar14 - 0xd) & 10;
        uVar21 = iVar1 + uVar21;
        uVar5 = local_a0[(ulong)(iVar14 - 4) & 0xb] + local_a0[uVar18] +
                ((uVar7 >> 7 | uVar7 << 0x19) ^ (uVar7 >> 0x12 | uVar7 << 0xe) ^ uVar7 >> 3) +
                ((uVar9 >> 0x11 | uVar9 * 0x8000) ^ (uVar9 >> 0x13 | uVar9 * 0x2000) ^ uVar9 >> 10);
        local_a0[uVar18] = uVar5;
        iVar3 = piVar30[-4];
        uVar29 = ((uVar26 >> 2 | uVar26 * 0x40000000) ^ (uVar26 >> 0xd | uVar26 * 0x80000) ^
                 (uVar26 >> 0x16 | uVar26 * 0x400)) + (uVar26 & (uVar13 ^ uVar28) ^ uVar13 & uVar28)
                 + iVar1;
        uVar7 = local_a0[uVar2 | 1];
        iVar1 = piVar30[-5] + uVar27 + uVar5 + (uVar10 & (uVar21 ^ 0xffffffff)) + (uVar21 & uVar25)
                + ((uVar21 >> 6 | uVar21 * 0x4000000) ^ (uVar21 >> 0xb | uVar21 * 0x200000) ^
                  (uVar21 >> 0x19 | uVar21 * 0x80));
        uVar5 = local_a0[uVar2 | 4];
        uVar28 = iVar1 + uVar28;
        uVar18 = (ulong)(iVar14 - 0xc) & 0xb;
        uVar27 = ((uVar29 >> 2 | uVar29 * 0x40000000) ^ (uVar29 >> 0xd | uVar29 * 0x80000) ^
                 (uVar29 >> 0x16 | uVar29 * 0x400)) + (uVar29 & (uVar26 ^ uVar13) ^ uVar26 & uVar13)
                 + iVar1;
        uVar5 = ((uVar5 >> 7 | uVar5 << 0x19) ^ (uVar5 >> 0x12 | uVar5 << 0xe) ^ uVar5 >> 3) +
                local_a0[(ulong)(iVar14 - 3) & 0xc] + local_a0[uVar18] +
                ((uVar7 >> 0x11 | uVar7 << 0xf) ^ (uVar7 >> 0x13 | uVar7 << 0xd) ^ uVar7 >> 10);
        local_a0[uVar18] = uVar5;
        iVar1 = iVar3 + uVar10 + uVar5 + (uVar25 & (uVar28 ^ 0xffffffff)) + (uVar28 & uVar21) +
                ((uVar28 >> 6 | uVar28 * 0x4000000) ^ (uVar28 >> 0xb | uVar28 * 0x200000) ^
                (uVar28 >> 0x19 | uVar28 * 0x80));
        uVar5 = local_a0[uVar2 | 2];
        uVar7 = local_a0[uVar2 | 5];
        uVar18 = (ulong)(iVar14 - 0xb) & 0xc;
        uVar13 = iVar1 + uVar13;
        uVar10 = ((uVar27 >> 2 | uVar27 * 0x40000000) ^ (uVar27 >> 0xd | uVar27 * 0x80000) ^
                 (uVar27 >> 0x16 | uVar27 * 0x400)) + (uVar27 & (uVar29 ^ uVar26) ^ uVar29 & uVar26)
                 + iVar1;
        iVar1 = piVar30[-3];
        iVar3 = piVar30[-2];
        uVar5 = ((uVar7 >> 7 | uVar7 << 0x19) ^ (uVar7 >> 0x12 | uVar7 << 0xe) ^ uVar7 >> 3) +
                local_a0[(ulong)(iVar14 - 2) & 0xd] + local_a0[uVar18] +
                ((uVar5 >> 0x11 | uVar5 << 0xf) ^ (uVar5 >> 0x13 | uVar5 << 0xd) ^ uVar5 >> 10);
        local_a0[uVar18] = uVar5;
        uVar7 = local_a0[uVar2 | 3];
        uVar8 = local_a0[uVar2 | 6];
        uVar18 = (ulong)(iVar14 - 10) & 0xd;
        iVar1 = iVar1 + uVar25 + uVar5 + (uVar21 & (uVar13 ^ 0xffffffff)) + (uVar13 & uVar28) +
                ((uVar13 >> 6 | uVar13 * 0x4000000) ^ (uVar13 >> 0xb | uVar13 * 0x200000) ^
                (uVar13 >> 0x19 | uVar13 * 0x80));
        uVar26 = iVar1 + uVar26;
        uVar25 = ((uVar10 >> 2 | uVar10 * 0x40000000) ^ (uVar10 >> 0xd | uVar10 * 0x80000) ^
                 (uVar10 >> 0x16 | uVar10 * 0x400)) + (uVar10 & (uVar27 ^ uVar29) ^ uVar27 & uVar29)
                 + iVar1;
        uVar5 = local_a0[uVar18] + uVar4 +
                ((uVar8 >> 7 | uVar8 << 0x19) ^ (uVar8 >> 0x12 | uVar8 << 0xe) ^ uVar8 >> 3) +
                ((uVar7 >> 0x11 | uVar7 << 0xf) ^ (uVar7 >> 0x13 | uVar7 << 0xd) ^ uVar7 >> 10);
        local_a0[uVar18] = uVar5;
        uVar4 = local_a0[uVar2 | 4];
        uVar7 = local_a0[uVar2 | 7];
        uVar18 = (ulong)(iVar14 - 9) & 0xe;
        iVar1 = iVar3 + uVar5 + uVar21 + (uVar28 & (uVar26 ^ 0xffffffff)) + (uVar26 & uVar13) +
                ((uVar26 >> 6 | uVar26 * 0x4000000) ^ (uVar26 >> 0xb | uVar26 * 0x200000) ^
                (uVar26 >> 0x19 | uVar26 * 0x80));
        uVar29 = iVar1 + uVar29;
        iVar3 = piVar30[-1];
        uVar5 = local_a0[uVar18] + uVar6 +
                ((uVar7 >> 7 | uVar7 << 0x19) ^ (uVar7 >> 0x12 | uVar7 << 0xe) ^ uVar7 >> 3) +
                ((uVar4 >> 0x11 | uVar4 << 0xf) ^ (uVar4 >> 0x13 | uVar4 << 0xd) ^ uVar4 >> 10);
        local_a0[uVar18] = uVar5;
        uVar21 = ((uVar25 >> 2 | uVar25 * 0x40000000) ^ (uVar25 >> 0xd | uVar25 * 0x80000) ^
                 (uVar25 >> 0x16 | uVar25 * 0x400)) + (uVar25 & (uVar10 ^ uVar27) ^ uVar10 & uVar27)
                 + iVar1;
        uVar4 = local_a0[uVar2 ^ 8];
        uVar2 = local_a0[uVar2 | 5];
        iVar1 = iVar3 + uVar5 + uVar28 + (uVar13 & (uVar29 ^ 0xffffffff)) + (uVar29 & uVar26) +
                ((uVar29 >> 6 | uVar29 * 0x4000000) ^ (uVar29 >> 0xb | uVar29 * 0x200000) ^
                (uVar29 >> 0x19 | uVar29 * 0x80));
        uVar18 = (ulong)(iVar14 - 8) & 0xf;
        uVar27 = iVar1 + uVar27;
        uVar28 = ((uVar21 >> 2 | uVar21 * 0x40000000) ^ (uVar21 >> 0xd | uVar21 * 0x80000) ^
                 (uVar21 >> 0x16 | uVar21 * 0x400)) + (uVar21 & (uVar25 ^ uVar10) ^ uVar25 & uVar10)
                 + iVar1;
        iVar1 = *piVar30;
        uVar9 = local_a0[uVar18] +
                ((uVar4 >> 7 | uVar4 << 0x19) ^ (uVar4 >> 0x12 | uVar4 << 0xe) ^ uVar4 >> 3) + uVar9
                + ((uVar2 >> 0x11 | uVar2 << 0xf) ^ (uVar2 >> 0x13 | uVar2 << 0xd) ^ uVar2 >> 10);
        local_a0[uVar18] = uVar9;
        uVar15 = uVar15 + 8;
        iVar1 = iVar1 + uVar9 + uVar13 + (uVar26 & (uVar27 ^ 0xffffffff)) + (uVar27 & uVar29) +
                ((uVar27 >> 6 | uVar27 * 0x4000000) ^ (uVar27 >> 0xb | uVar27 * 0x200000) ^
                (uVar27 >> 0x19 | uVar27 * 0x80));
        uVar10 = iVar1 + uVar10;
        uVar13 = ((uVar28 >> 2 | uVar28 * 0x40000000) ^ (uVar28 >> 0xd | uVar28 * 0x80000) ^
                 (uVar28 >> 0x16 | uVar28 * 0x400)) + (uVar28 & (uVar21 ^ uVar25) ^ uVar21 & uVar25)
                 + iVar1;
        piVar30 = piVar30 + 8;
      } while (uVar17 < 0x38);
      uVar19 = uVar13 + uVar19;
      uVar20 = uVar28 + uVar20;
      uVar24 = uVar10 + uVar24;
      uVar22 = uVar21 + uVar22;
      uVar23 = uVar25 + uVar23;
      uVar11 = uVar27 + uVar11;
      param_3 = param_3 + -1;
      param_2 = param_2 + 0x10;
      *param_1 = uVar19;
      param_1[1] = uVar20;
      uVar16 = uVar29 + uVar16;
      uVar12 = uVar26 + uVar12;
      param_1[2] = uVar22;
      param_1[3] = uVar23;
      param_1[4] = uVar24;
      param_1[5] = uVar11;
      param_1[6] = uVar16;
      param_1[7] = uVar12;
    } while (param_3 != 0);
  }
  return;
}


// ===== 00409eec  FUN_00409eec =====

void FUN_00409eec(undefined8 param_1,undefined8 param_2)

{
  FUN_004092e0(param_1,param_2,1);
  return;
}


// ===== 00409ef4  FUN_00409ef4 =====

void FUN_00409ef4(undefined8 *param_1)

{
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[1] = 0;
  *param_1 = 0;
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
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  return;
}


// ===== 00409f1c  FUN_00409f1c =====

undefined8 FUN_00409f1c(undefined8 *param_1,undefined1 param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = param_3 * -2 + 0x640;
  if (uVar1 < 0x548) {
    *(undefined1 *)(param_1 + 0x31) = param_2;
    param_1[0x18] = 0;
    param_1[0x19] = uVar1 >> 3;
    param_1[0x1a] = param_3 >> 3;
    param_1[0x1b] = 0;
    param_1[1] = 0;
    *param_1 = 0;
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
    param_1[0x17] = 0;
    param_1[0x16] = 0;
    return 1;
  }
  return 0;
}


// ===== 00409f70  FUN_00409f70 =====

undefined8 FUN_00409f70(undefined8 *param_1,undefined1 param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = param_3 * -2 + 0x640;
  if (uVar1 < 0x548) {
    *(undefined1 *)(param_1 + 0x31) = param_2;
    param_1[0x18] = 0;
    param_1[0x19] = uVar1 >> 3;
    param_1[1] = 0;
    *param_1 = 0;
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
    param_1[0x17] = 0;
    param_1[0x16] = 0;
    param_1[0x1a] = param_3 >> 2 & 0x3ffffffffffffffe;
    param_1[0x1b] = 0;
    return 1;
  }
  return 0;
}


// ===== 00409fc8  FUN_00409fc8 =====

undefined8 FUN_00409fc8(long param_1,void *param_2,ulong param_3)

{
  long lVar1;
  size_t __n;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong __n_00;
  
  if (param_3 == 0) {
    return 1;
  }
  lVar3 = *(long *)(param_1 + 0xd8);
  uVar4 = *(ulong *)(param_1 + 200);
  uVar2 = param_3;
  if (lVar3 != 0) {
    __n_00 = uVar4 - lVar3;
    lVar1 = param_1 + 0xe0;
    uVar2 = param_3 - __n_00;
    if (param_3 < __n_00) {
      memcpy((void *)(lVar1 + lVar3),param_2,param_3);
      __n = *(long *)(param_1 + 0xd8) + param_3;
      goto LAB_0040a090;
    }
    memcpy((void *)(lVar1 + lVar3),param_2,__n_00);
    param_2 = (void *)((long)param_2 + __n_00);
    FUN_0040a144(param_1,lVar1,uVar4,uVar4);
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  __n = uVar2;
  if (uVar4 <= uVar2) {
    __n = FUN_0040a144(param_1,param_2,uVar2,uVar4);
  }
  if (__n == 0) {
    return 1;
  }
  memcpy((void *)(param_1 + 0xe0),(void *)((long)param_2 + (uVar2 - __n)),__n);
LAB_0040a090:
  *(size_t *)(param_1 + 0xd8) = __n;
  return 1;
}


// ===== 0040a0ac  FUN_0040a0ac =====

undefined8 FUN_0040a0ac(undefined8 param_1,long param_2)

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


// ===== 0040a144  FUN_0040a144 =====

ulong FUN_0040a144(ulong param_1,ulong *param_2,ulong param_3,ulong param_4)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  if (param_4 <= param_3) {
    if (param_4 < 8) {
      do {
        FUN_0040a270(param_1);
        param_3 = param_3 - param_4;
      } while (param_4 <= param_3);
    }
    else {
      uVar5 = param_4 >> 3;
      uVar6 = uVar5 & 0x1ffffffffffffffc;
      do {
        if ((param_4 < 0x20) ||
           ((param_1 < (long)param_2 + (param_4 & 0xfffffffffffffff8) &&
            (param_2 < (ulong *)(param_1 + (param_4 & 0xfffffffffffffff8)))))) {
          uVar2 = 0;
          puVar7 = param_2;
LAB_0040a208:
          lVar3 = uVar5 - uVar2;
          puVar1 = (ulong *)(param_1 + uVar2 * 8);
          do {
            param_2 = puVar7 + 1;
            lVar3 = lVar3 + -1;
            *puVar1 = *puVar1 ^ *puVar7;
            puVar1 = puVar1 + 1;
            puVar7 = param_2;
          } while (lVar3 != 0);
        }
        else {
          puVar7 = param_2 + uVar6;
          param_2 = param_2 + 2;
          uVar2 = uVar6;
          puVar4 = (undefined8 *)(param_1 + 0x10);
          do {
            uVar9 = puVar4[-1];
            uVar8 = puVar4[-2];
            uVar15 = puVar4[1];
            uVar14 = *puVar4;
            uVar2 = uVar2 - 4;
            uVar11 = param_2[-1];
            uVar10 = param_2[-2];
            uVar13 = param_2[1];
            uVar12 = *param_2;
            param_2 = param_2 + 4;
            puVar4[-1] = CONCAT17((byte)((ulong)uVar9 >> 0x38) ^ (byte)(uVar11 >> 0x38),
                                  CONCAT16((byte)((ulong)uVar9 >> 0x30) ^ (byte)(uVar11 >> 0x30),
                                           CONCAT15((byte)((ulong)uVar9 >> 0x28) ^
                                                    (byte)(uVar11 >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar9 >> 0x20) ^
                                                             (byte)(uVar11 >> 0x20),
                                                             CONCAT13((byte)((ulong)uVar9 >> 0x18) ^
                                                                      (byte)(uVar11 >> 0x18),
                                                                      CONCAT12((byte)((ulong)uVar9
                                                                                     >> 0x10) ^
                                                                               (byte)(uVar11 >> 0x10
                                                                                     ),CONCAT11((
                                                  byte)((ulong)uVar9 >> 8) ^ (byte)(uVar11 >> 8),
                                                  (byte)uVar9 ^ (byte)uVar11)))))));
            puVar4[-2] = CONCAT17((byte)((ulong)uVar8 >> 0x38) ^ (byte)(uVar10 >> 0x38),
                                  CONCAT16((byte)((ulong)uVar8 >> 0x30) ^ (byte)(uVar10 >> 0x30),
                                           CONCAT15((byte)((ulong)uVar8 >> 0x28) ^
                                                    (byte)(uVar10 >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar8 >> 0x20) ^
                                                             (byte)(uVar10 >> 0x20),
                                                             CONCAT13((byte)((ulong)uVar8 >> 0x18) ^
                                                                      (byte)(uVar10 >> 0x18),
                                                                      CONCAT12((byte)((ulong)uVar8
                                                                                     >> 0x10) ^
                                                                               (byte)(uVar10 >> 0x10
                                                                                     ),CONCAT11((
                                                  byte)((ulong)uVar8 >> 8) ^ (byte)(uVar10 >> 8),
                                                  (byte)uVar8 ^ (byte)uVar10)))))));
            puVar4[1] = CONCAT17((byte)((ulong)uVar15 >> 0x38) ^ (byte)(uVar13 >> 0x38),
                                 CONCAT16((byte)((ulong)uVar15 >> 0x30) ^ (byte)(uVar13 >> 0x30),
                                          CONCAT15((byte)((ulong)uVar15 >> 0x28) ^
                                                   (byte)(uVar13 >> 0x28),
                                                   CONCAT14((byte)((ulong)uVar15 >> 0x20) ^
                                                            (byte)(uVar13 >> 0x20),
                                                            CONCAT13((byte)((ulong)uVar15 >> 0x18) ^
                                                                     (byte)(uVar13 >> 0x18),
                                                                     CONCAT12((byte)((ulong)uVar15
                                                                                    >> 0x10) ^
                                                                              (byte)(uVar13 >> 0x10)
                                                                              ,CONCAT11((byte)((
                                                  ulong)uVar15 >> 8) ^ (byte)(uVar13 >> 8),
                                                  (byte)uVar15 ^ (byte)uVar13)))))));
            *puVar4 = CONCAT17((byte)((ulong)uVar14 >> 0x38) ^ (byte)(uVar12 >> 0x38),
                               CONCAT16((byte)((ulong)uVar14 >> 0x30) ^ (byte)(uVar12 >> 0x30),
                                        CONCAT15((byte)((ulong)uVar14 >> 0x28) ^
                                                 (byte)(uVar12 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar14 >> 0x20) ^
                                                          (byte)(uVar12 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar14 >> 0x18) ^
                                                                   (byte)(uVar12 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar14 >>
                                                                                  0x10) ^
                                                                            (byte)(uVar12 >> 0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar14 >> 8) ^ (byte)(uVar12 >> 8),
                                                  (byte)uVar14 ^ (byte)uVar12)))))));
            puVar4 = puVar4 + 4;
          } while (uVar2 != 0);
          uVar2 = uVar6;
          param_2 = puVar7;
          if (uVar5 != uVar6) goto LAB_0040a208;
        }
        FUN_0040a270(param_1);
        param_3 = param_3 - param_4;
      } while (param_4 <= param_3);
    }
  }
  return param_3;
}


// ===== 0040a270  FUN_0040a270 =====

void FUN_0040a270(undefined8 param_1)

{
  undefined1 auStack_e8 [200];
  
  FUN_0040a4c0(auStack_e8,param_1,0);
  FUN_0040a4c0(param_1,auStack_e8,1);
  FUN_0040a4c0(auStack_e8,param_1,2);
  FUN_0040a4c0(param_1,auStack_e8,3);
  FUN_0040a4c0(auStack_e8,param_1,4);
  FUN_0040a4c0(param_1,auStack_e8,5);
  FUN_0040a4c0(auStack_e8,param_1,6);
  FUN_0040a4c0(param_1,auStack_e8,7);
  FUN_0040a4c0(auStack_e8,param_1,8);
  FUN_0040a4c0(param_1,auStack_e8,9);
  FUN_0040a4c0(auStack_e8,param_1,10);
  FUN_0040a4c0(param_1,auStack_e8,0xb);
  FUN_0040a4c0(auStack_e8,param_1,0xc);
  FUN_0040a4c0(param_1,auStack_e8,0xd);
  FUN_0040a4c0(auStack_e8,param_1,0xe);
  FUN_0040a4c0(param_1,auStack_e8,0xf);
  FUN_0040a4c0(auStack_e8,param_1,0x10);
  FUN_0040a4c0(param_1,auStack_e8,0x11);
  FUN_0040a4c0(auStack_e8,param_1,0x12);
  FUN_0040a4c0(param_1,auStack_e8,0x13);
  FUN_0040a4c0(auStack_e8,param_1,0x14);
  FUN_0040a4c0(param_1,auStack_e8,0x15);
  FUN_0040a4c0(auStack_e8,param_1,0x16);
  FUN_0040a4c0(param_1,auStack_e8,0x17);
  return;
}


// ===== 0040a414  FUN_0040a414 =====

void FUN_0040a414(long param_1,ulong *param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_3 != 0) {
    if (param_4 < 8) {
      do {
        FUN_0040a270(param_1);
      } while( true );
    }
    uVar1 = 0;
    for (; uVar2 = *(ulong *)(param_1 + uVar1 * 8), 7 < param_3; param_3 = param_3 - 8) {
      uVar1 = uVar1 + 1;
      *param_2 = uVar2;
      if ((param_4 >> 3 <= uVar1) || (param_3 == 8)) {
        if (param_3 == 8) {
          return;
        }
        FUN_0040a270(param_1);
        uVar1 = 0;
      }
      param_2 = param_2 + 1;
    }
    uVar1 = 0;
    do {
      *(char *)((long)param_2 + uVar1) = (char)uVar2;
      uVar1 = uVar1 + 1;
      uVar2 = uVar2 >> 8;
    } while (param_3 != uVar1);
  }
  return;
}


// ===== 0040a4c0  FUN_0040a4c0 =====

void FUN_0040a4c0(ulong *param_1,ulong *param_2,long param_3)

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
  
  uVar1 = param_2[1] ^ param_2[0xb] ^ param_2[0x10] ^ param_2[0x15] ^ param_2[6];
  uVar2 = param_2[7] ^ param_2[2] ^ param_2[0x11] ^ param_2[0x16] ^ param_2[0xc];
  uVar9 = param_2[5] ^ param_2[10] ^ param_2[0xf] ^ param_2[0x14] ^ *param_2;
  uVar3 = param_2[8] ^ param_2[3] ^ param_2[0xd] ^ param_2[0x17] ^ param_2[0x12];
  uVar4 = uVar1 ^ (uVar3 >> 0x3f | uVar3 << 1);
  uVar3 = uVar3 ^ (uVar9 >> 0x3f | uVar9 << 1);
  uVar5 = param_2[9] ^ param_2[4] ^ param_2[0xe] ^ param_2[0x13] ^ param_2[0x18];
  uVar9 = uVar9 ^ (uVar2 >> 0x3f | uVar2 << 1);
  uVar2 = uVar2 ^ (uVar5 >> 0x3f | uVar5 << 1);
  uVar5 = uVar5 ^ (uVar1 >> 0x3f | uVar1 << 1);
  uVar6 = uVar4 ^ param_2[0xc];
  uVar1 = uVar9 ^ param_2[6];
  uVar1 = uVar1 >> 0x14 | uVar1 << 0x2c;
  uVar7 = uVar6 >> 0x15 | uVar6 << 0x2b;
  uVar6 = uVar2 ^ param_2[0x12];
  uVar8 = uVar5 ^ *param_2;
  uVar10 = uVar6 >> 0x2b | uVar6 << 0x15;
  uVar6 = param_2[0x18] ^ uVar3;
  uVar6 = uVar6 >> 0x32 | uVar6 << 0xe;
  *param_1 = uVar7 & (uVar1 ^ 0xffffffffffffffff) ^ *(ulong *)(&DAT_0020e740 + param_3 * 8) ^ uVar8;
  param_1[1] = uVar10 & (uVar7 ^ 0xffffffffffffffff) ^ uVar1;
  param_1[2] = uVar6 & (uVar10 ^ 0xffffffffffffffff) ^ uVar7;
  param_1[3] = uVar10 ^ uVar8 & (uVar6 ^ 0xffffffffffffffff);
  param_1[4] = uVar1 & (uVar8 ^ 0xffffffffffffffff) ^ uVar6;
  uVar6 = (param_2[9] ^ uVar3) >> 0x2c | (param_2[9] ^ uVar3) << 0x14;
  uVar7 = (param_2[10] ^ uVar5) >> 0x3d | (param_2[10] ^ uVar5) << 3;
  uVar8 = (param_2[0x10] ^ uVar9) >> 0x13 | (param_2[0x10] ^ uVar9) << 0x2d;
  uVar1 = (param_2[3] ^ uVar2) >> 0x24 | (param_2[3] ^ uVar2) << 0x1c;
  uVar10 = (param_2[0x16] ^ uVar4) >> 3 | (param_2[0x16] ^ uVar4) << 0x3d;
  param_1[5] = uVar7 & (uVar6 ^ 0xffffffffffffffff) ^ uVar1;
  param_1[6] = uVar8 & (uVar7 ^ 0xffffffffffffffff) ^ uVar6;
  param_1[7] = uVar10 & (uVar8 ^ 0xffffffffffffffff) ^ uVar7;
  param_1[8] = uVar1 & (uVar10 ^ 0xffffffffffffffff) ^ uVar8;
  param_1[9] = uVar10 ^ uVar6 & (uVar1 ^ 0xffffffffffffffff);
  uVar6 = (param_2[7] ^ uVar4) >> 0x3a | (param_2[7] ^ uVar4) << 6;
  uVar7 = (param_2[0xd] ^ uVar2) >> 0x27 | (param_2[0xd] ^ uVar2) << 0x19;
  uVar8 = (param_2[0x13] ^ uVar3) >> 0x38 | (param_2[0x13] ^ uVar3) << 8;
  uVar1 = (param_2[1] ^ uVar9) >> 0x3f | (param_2[1] ^ uVar9) << 1;
  uVar10 = (param_2[0x14] ^ uVar5) >> 0x2e | (param_2[0x14] ^ uVar5) << 0x12;
  param_1[10] = uVar7 & (uVar6 ^ 0xffffffffffffffff) ^ uVar1;
  param_1[0xb] = uVar8 & (uVar7 ^ 0xffffffffffffffff) ^ uVar6;
  param_1[0xc] = uVar10 & (uVar8 ^ 0xffffffffffffffff) ^ uVar7;
  param_1[0xd] = uVar1 & (uVar10 ^ 0xffffffffffffffff) ^ uVar8;
  param_1[0xe] = uVar10 ^ uVar6 & (uVar1 ^ 0xffffffffffffffff);
  uVar6 = (param_2[5] ^ uVar5) >> 0x1c | (param_2[5] ^ uVar5) << 0x24;
  uVar7 = (param_2[0xb] ^ uVar9) >> 0x36 | (param_2[0xb] ^ uVar9) << 10;
  uVar8 = (param_2[0x11] ^ uVar4) >> 0x31 | (param_2[0x11] ^ uVar4) << 0xf;
  uVar1 = (param_2[4] ^ uVar3) >> 0x25 | (param_2[4] ^ uVar3) << 0x1b;
  uVar10 = (param_2[0x17] ^ uVar2) >> 8 | (param_2[0x17] ^ uVar2) << 0x38;
  param_1[0xf] = uVar7 & (uVar6 ^ 0xffffffffffffffff) ^ uVar1;
  param_1[0x10] = uVar8 & (uVar7 ^ 0xffffffffffffffff) ^ uVar6;
  param_1[0x11] = uVar10 & (uVar8 ^ 0xffffffffffffffff) ^ uVar7;
  param_1[0x12] = uVar1 & (uVar10 ^ 0xffffffffffffffff) ^ uVar8;
  param_1[0x13] = uVar10 ^ uVar6 & (uVar1 ^ 0xffffffffffffffff);
  uVar4 = (param_2[2] ^ uVar4) >> 2 | (param_2[2] ^ uVar4) << 0x3e;
  uVar2 = (param_2[8] ^ uVar2) >> 9 | (param_2[8] ^ uVar2) << 0x37;
  uVar3 = (param_2[0xe] ^ uVar3) >> 0x19 | (param_2[0xe] ^ uVar3) << 0x27;
  uVar1 = (param_2[0xf] ^ uVar5) >> 0x17 | (param_2[0xf] ^ uVar5) << 0x29;
  uVar9 = (param_2[0x15] ^ uVar9) >> 0x3e | (param_2[0x15] ^ uVar9) << 2;
  param_1[0x14] = uVar3 & (uVar2 ^ 0xffffffffffffffff) ^ uVar4;
  param_1[0x15] = uVar1 & (uVar3 ^ 0xffffffffffffffff) ^ uVar2;
  param_1[0x16] = uVar9 & (uVar1 ^ 0xffffffffffffffff) ^ uVar3;
  param_1[0x17] = uVar4 & (uVar9 ^ 0xffffffffffffffff) ^ uVar1;
  param_1[0x18] = uVar9 ^ uVar2 & (uVar4 ^ 0xffffffffffffffff);
  return;
}


// ===== 0040a774  FUN_0040a774 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0040a774(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  param_1[8] = 0;
  param_1[9] = 0;
  uVar5 = _DAT_00200830;
  uVar4 = _UNK_00200468;
  uVar3 = _DAT_00200460;
  uVar2 = _UNK_002003c8;
  uVar1 = _DAT_002003c0;
  param_1[1] = _UNK_00200838;
  *param_1 = uVar5;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  uVar2 = _UNK_00200298;
  uVar1 = _DAT_00200290;
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  param_1[0x1a] = DAT_001b7110;
  return 1;
}


// ===== 0040a7b8  FUN_0040a7b8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0040a7b8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  param_1[8] = 0;
  param_1[9] = 0;
  uVar5 = _UNK_00200b98;
  uVar4 = _DAT_00200b90;
  uVar3 = _DAT_002005b0;
  uVar2 = _UNK_00200218;
  uVar1 = _DAT_00200210;
  param_1[1] = _UNK_002005b8;
  *param_1 = uVar3;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  uVar4 = _UNK_00200af8;
  uVar3 = _DAT_00200af0;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  param_1[0x1a] = DAT_001b71d0;
  return 1;
}


// ===== 0040a7fc  FUN_0040a7fc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0040a7fc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  param_1[8] = 0;
  param_1[9] = 0;
  uVar5 = _DAT_00200ba0;
  uVar2 = _UNK_00200b08;
  uVar1 = _DAT_00200b00;
  uVar4 = _UNK_00200508;
  uVar3 = _DAT_00200500;
  param_1[1] = _UNK_00200ba8;
  *param_1 = uVar5;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  uVar2 = _UNK_002002a8;
  uVar1 = _DAT_002002a0;
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  param_1[0x1a] = DAT_001b7118;
  return 1;
}


// ===== 0040a840  FUN_0040a840 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0040a840(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  param_1[8] = 0;
  param_1[9] = 0;
  uVar5 = _UNK_00200848;
  uVar4 = _DAT_00200840;
  uVar3 = _DAT_002004c0;
  uVar2 = _UNK_00200478;
  uVar1 = _DAT_00200470;
  param_1[1] = _UNK_002004c8;
  *param_1 = uVar3;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  uVar4 = _UNK_00200918;
  uVar3 = _DAT_00200910;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  param_1[0x1a] = DAT_001b71b8;
  return 1;
}


// ===== 0040a884  FUN_0040a884 =====

undefined8 FUN_0040a884(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = param_2[0x1a];
  uVar5 = (ulong)(uint)uVar4;
  puVar1 = param_2 + 10;
  *(undefined1 *)((long)puVar1 + uVar5) = 0x80;
  lVar3 = uVar5 + 1;
  if (0x6f < (uint)uVar4) {
    memset((void *)((long)puVar1 + lVar3),0,0x7f - uVar5);
    FUN_0040ab7c(param_2,puVar1,1);
    lVar3 = 0;
  }
  memset((void *)((long)puVar1 + lVar3),0,0x70 - lVar3);
  uVar4 = (param_2[8] & 0xff00ff00ff00ff00) >> 8 | (param_2[8] & 0xff00ff00ff00ff) << 8;
  uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
  uVar5 = (param_2[9] & 0xff00ff00ff00ff00) >> 8 | (param_2[9] & 0xff00ff00ff00ff) << 8;
  uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
  param_2[0x18] = uVar5 >> 0x20 | uVar5 << 0x20;
  param_2[0x19] = uVar4 >> 0x20 | uVar4 << 0x20;
  FUN_0040ab7c(param_2,puVar1,1);
  if (param_1 != (ulong *)0x0) {
    uVar2 = *(int *)((long)param_2 + 0xd4) - 0x1cU >> 2 | *(int *)((long)param_2 + 0xd4) << 0x1e;
    if ((int)uVar2 < 5) {
      if (uVar2 == 0) {
        uVar4 = (*param_2 & 0xff00ff00ff00ff00) >> 8 | (*param_2 & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        *param_1 = uVar4 >> 0x20 | uVar4 << 0x20;
        uVar4 = (param_2[1] & 0xff00ff00ff00ff00) >> 8 | (param_2[1] & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        param_1[1] = uVar4 >> 0x20 | uVar4 << 0x20;
        uVar4 = (param_2[2] & 0xff00ff00ff00ff00) >> 8 | (param_2[2] & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        param_1[2] = uVar4 >> 0x20 | uVar4 << 0x20;
        uVar4 = param_2[3];
        *(char *)(param_1 + 3) = (char)(uVar4 >> 0x38);
        *(char *)((long)param_1 + 0x19) = (char)(uVar4 >> 0x30);
        *(char *)((long)param_1 + 0x1a) = (char)(uVar4 >> 0x28);
        *(char *)((long)param_1 + 0x1b) = (char)(uVar4 >> 0x20);
        return 1;
      }
      if (uVar2 == 1) {
        uVar4 = (*param_2 & 0xff00ff00ff00ff00) >> 8 | (*param_2 & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        *param_1 = uVar4 >> 0x20 | uVar4 << 0x20;
        uVar4 = (param_2[1] & 0xff00ff00ff00ff00) >> 8 | (param_2[1] & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        param_1[1] = uVar4 >> 0x20 | uVar4 << 0x20;
        uVar4 = (param_2[2] & 0xff00ff00ff00ff00) >> 8 | (param_2[2] & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        param_1[2] = uVar4 >> 0x20 | uVar4 << 0x20;
        uVar4 = param_2[3];
        *(char *)(param_1 + 3) = (char)(uVar4 >> 0x38);
        *(char *)((long)param_1 + 0x19) = (char)(uVar4 >> 0x30);
        *(char *)((long)param_1 + 0x1a) = (char)(uVar4 >> 0x28);
        *(char *)((long)param_1 + 0x1b) = (char)(uVar4 >> 0x20);
        *(char *)((long)param_1 + 0x1c) = (char)(uVar4 >> 0x18);
        *(char *)((long)param_1 + 0x1d) = (char)(uVar4 >> 0x10);
        *(char *)((long)param_1 + 0x1e) = (char)(uVar4 >> 8);
        *(char *)((long)param_1 + 0x1f) = (char)uVar4;
        return 1;
      }
    }
    else {
      if (uVar2 == 5) {
        uVar4 = (*param_2 & 0xff00ff00ff00ff00) >> 8 | (*param_2 & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        *param_1 = uVar4 >> 0x20 | uVar4 << 0x20;
        uVar4 = (param_2[1] & 0xff00ff00ff00ff00) >> 8 | (param_2[1] & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        param_1[1] = uVar4 >> 0x20 | uVar4 << 0x20;
        uVar4 = (param_2[2] & 0xff00ff00ff00ff00) >> 8 | (param_2[2] & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        param_1[2] = uVar4 >> 0x20 | uVar4 << 0x20;
        uVar4 = (param_2[3] & 0xff00ff00ff00ff00) >> 8 | (param_2[3] & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        param_1[3] = uVar4 >> 0x20 | uVar4 << 0x20;
        uVar4 = (param_2[4] & 0xff00ff00ff00ff00) >> 8 | (param_2[4] & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        param_1[4] = uVar4 >> 0x20 | uVar4 << 0x20;
        uVar4 = param_2[5];
        *(char *)(param_1 + 5) = (char)(uVar4 >> 0x38);
        *(char *)((long)param_1 + 0x29) = (char)(uVar4 >> 0x30);
        *(char *)((long)param_1 + 0x2a) = (char)(uVar4 >> 0x28);
        *(char *)((long)param_1 + 0x2b) = (char)(uVar4 >> 0x20);
        *(char *)((long)param_1 + 0x2c) = (char)(uVar4 >> 0x18);
        *(char *)((long)param_1 + 0x2d) = (char)(uVar4 >> 0x10);
        *(char *)((long)param_1 + 0x2e) = (char)(uVar4 >> 8);
        *(char *)((long)param_1 + 0x2f) = (char)uVar4;
        return 1;
      }
      if (uVar2 == 9) {
        uVar4 = (*param_2 & 0xff00ff00ff00ff00) >> 8 | (*param_2 & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        *param_1 = uVar4 >> 0x20 | uVar4 << 0x20;
        uVar4 = (param_2[1] & 0xff00ff00ff00ff00) >> 8 | (param_2[1] & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        param_1[1] = uVar4 >> 0x20 | uVar4 << 0x20;
        uVar4 = (param_2[2] & 0xff00ff00ff00ff00) >> 8 | (param_2[2] & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        param_1[2] = uVar4 >> 0x20 | uVar4 << 0x20;
        uVar4 = (param_2[3] & 0xff00ff00ff00ff00) >> 8 | (param_2[3] & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        param_1[3] = uVar4 >> 0x20 | uVar4 << 0x20;
        uVar4 = (param_2[4] & 0xff00ff00ff00ff00) >> 8 | (param_2[4] & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        param_1[4] = uVar4 >> 0x20 | uVar4 << 0x20;
        uVar4 = (param_2[5] & 0xff00ff00ff00ff00) >> 8 | (param_2[5] & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        param_1[5] = uVar4 >> 0x20 | uVar4 << 0x20;
        uVar4 = (param_2[6] & 0xff00ff00ff00ff00) >> 8 | (param_2[6] & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        param_1[6] = uVar4 >> 0x20 | uVar4 << 0x20;
        uVar4 = param_2[7];
        *(char *)(param_1 + 7) = (char)(uVar4 >> 0x38);
        *(char *)((long)param_1 + 0x39) = (char)(uVar4 >> 0x30);
        *(char *)((long)param_1 + 0x3a) = (char)(uVar4 >> 0x28);
        *(char *)((long)param_1 + 0x3b) = (char)(uVar4 >> 0x20);
        *(char *)((long)param_1 + 0x3c) = (char)(uVar4 >> 0x18);
        *(char *)((long)param_1 + 0x3d) = (char)(uVar4 >> 0x10);
        *(char *)((long)param_1 + 0x3e) = (char)(uVar4 >> 8);
        *(char *)((long)param_1 + 0x3f) = (char)uVar4;
        return 1;
      }
    }
  }
  return 0;
}


// ===== 0040ab7c  FUN_0040ab7c =====

void FUN_0040ab7c(ulong *param_1,ulong *param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
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
  long *plVar31;
  ulong uVar32;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  
  if (param_3 != 0) {
    uVar11 = *param_1;
    uVar9 = param_1[1];
    uVar4 = param_1[2];
    uVar20 = param_1[3];
    uVar13 = param_1[4];
    uVar7 = param_1[5];
    uVar22 = param_1[6];
    uVar18 = param_1[7];
    do {
      uVar32 = (*param_2 & 0xff00ff00ff00ff00) >> 8 | (*param_2 & 0xff00ff00ff00ff) << 8;
      uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 | (uVar32 & 0xffff0000ffff) << 0x10;
      uVar15 = uVar32 >> 0x20 | uVar32 << 0x20;
      uVar32 = (param_2[1] & 0xff00ff00ff00ff00) >> 8 | (param_2[1] & 0xff00ff00ff00ff) << 8;
      uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 | (uVar32 & 0xffff0000ffff) << 0x10;
      local_68 = uVar32 >> 0x20 | uVar32 << 0x20;
      lVar2 = (uVar7 & uVar13) + uVar18 + (uVar22 & (uVar13 ^ 0xffffffffffffffff)) + uVar15 +
              0x428a2f98d728ae22 +
              ((uVar13 >> 0xe | uVar13 << 0x32) ^ (uVar13 >> 0x12 | uVar13 << 0x2e) ^
              (uVar13 >> 0x29 | uVar13 << 0x17));
      uVar30 = lVar2 + uVar20;
      uVar17 = ((uVar4 ^ uVar9) & uVar11 ^ uVar4 & uVar9) +
               ((uVar11 >> 0x1c | uVar11 << 0x24) ^ (uVar11 >> 0x22 | uVar11 << 0x1e) ^
               (uVar11 >> 0x27 | uVar11 << 0x19)) + lVar2;
      lVar2 = uVar22 + (uVar7 & (uVar30 ^ 0xffffffffffffffff)) + (uVar30 & uVar13) + local_68 +
              0x7137449123ef65cd +
              ((uVar30 >> 0xe | uVar30 << 0x32) ^ (uVar30 >> 0x12 | uVar30 << 0x2e) ^
              (uVar30 >> 0x29 | uVar30 * 0x800000));
      uVar8 = lVar2 + uVar4;
      uVar6 = ((uVar17 >> 0x1c | uVar17 << 0x24) ^ (uVar17 >> 0x22 | uVar17 * 0x40000000) ^
              (uVar17 >> 0x27 | uVar17 * 0x2000000)) + (uVar17 & (uVar9 ^ uVar11) ^ uVar9 & uVar11)
              + lVar2;
      uVar32 = (param_2[2] & 0xff00ff00ff00ff00) >> 8 | (param_2[2] & 0xff00ff00ff00ff) << 8;
      uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 | (uVar32 & 0xffff0000ffff) << 0x10;
      local_70 = uVar32 >> 0x20 | uVar32 << 0x20;
      lVar2 = uVar7 + (uVar13 & (uVar8 ^ 0xffffffffffffffff)) + (uVar8 & uVar30) + local_70 +
              -0x4a3f043013b2c4d1 +
              ((uVar8 >> 0xe | uVar8 << 0x32) ^ (uVar8 >> 0x12 | uVar8 << 0x2e) ^
              (uVar8 >> 0x29 | uVar8 * 0x800000));
      uVar5 = lVar2 + uVar9;
      uVar23 = ((uVar6 >> 0x1c | uVar6 << 0x24) ^ (uVar6 >> 0x22 | uVar6 * 0x40000000) ^
               (uVar6 >> 0x27 | uVar6 * 0x2000000)) + (uVar6 & (uVar17 ^ uVar11) ^ uVar17 & uVar11)
               + lVar2;
      uVar32 = (param_2[3] & 0xff00ff00ff00ff00) >> 8 | (param_2[3] & 0xff00ff00ff00ff) << 8;
      uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 | (uVar32 & 0xffff0000ffff) << 0x10;
      uVar21 = uVar32 >> 0x20 | uVar32 << 0x20;
      lVar2 = uVar13 + (uVar30 & (uVar5 ^ 0xffffffffffffffff)) + (uVar5 & uVar8) + uVar21 +
              -0x164a245a7e762444 +
              ((uVar5 >> 0xe | uVar5 << 0x32) ^ (uVar5 >> 0x12 | uVar5 << 0x2e) ^
              (uVar5 >> 0x29 | uVar5 * 0x800000));
      uVar32 = 0;
      uVar16 = lVar2 + uVar11;
      uVar19 = ((uVar23 >> 0x1c | uVar23 << 0x24) ^ (uVar23 >> 0x22 | uVar23 * 0x40000000) ^
               (uVar23 >> 0x27 | uVar23 * 0x2000000)) + (uVar23 & (uVar6 ^ uVar17) ^ uVar6 & uVar17)
               + lVar2;
      uVar12 = (param_2[4] & 0xff00ff00ff00ff00) >> 8 | (param_2[4] & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      local_78 = uVar12 >> 0x20 | uVar12 << 0x20;
      uVar12 = (param_2[5] & 0xff00ff00ff00ff00) >> 8 | (param_2[5] & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      lVar2 = uVar30 + (uVar8 & (uVar16 ^ 0xffffffffffffffff)) + (uVar16 & uVar5) + local_78 +
              0x3956c25bf348b538 +
              ((uVar16 >> 0xe | uVar16 << 0x32) ^ (uVar16 >> 0x12 | uVar16 << 0x2e) ^
              (uVar16 >> 0x29 | uVar16 * 0x800000));
      uVar17 = lVar2 + uVar17;
      uVar30 = ((uVar19 >> 0x1c | uVar19 << 0x24) ^ (uVar19 >> 0x22 | uVar19 * 0x40000000) ^
               (uVar19 >> 0x27 | uVar19 * 0x2000000)) + (uVar19 & (uVar23 ^ uVar6) ^ uVar23 & uVar6)
               + lVar2;
      lVar2 = uVar8 + (uVar5 & (uVar17 ^ 0xffffffffffffffff)) + (uVar17 & uVar16) + uVar12 +
              0x59f111f1b605d019 +
              ((uVar17 >> 0xe | uVar17 << 0x32) ^ (uVar17 >> 0x12 | uVar17 << 0x2e) ^
              (uVar17 >> 0x29 | uVar17 * 0x800000));
      uVar6 = lVar2 + uVar6;
      uVar8 = ((uVar30 >> 0x1c | uVar30 << 0x24) ^ (uVar30 >> 0x22 | uVar30 * 0x40000000) ^
              (uVar30 >> 0x27 | uVar30 * 0x2000000)) +
              (uVar30 & (uVar19 ^ uVar23) ^ uVar19 & uVar23) + lVar2;
      uVar10 = (param_2[6] & 0xff00ff00ff00ff00) >> 8 | (param_2[6] & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      local_80 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar10 = (param_2[7] & 0xff00ff00ff00ff00) >> 8 | (param_2[7] & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      local_88 = uVar10 >> 0x20 | uVar10 << 0x20;
      lVar2 = uVar5 + (uVar16 & (uVar6 ^ 0xffffffffffffffff)) + (uVar6 & uVar17) + local_80 +
              -0x6dc07d5b50e6b065 +
              ((uVar6 >> 0xe | uVar6 << 0x32) ^ (uVar6 >> 0x12 | uVar6 << 0x2e) ^
              (uVar6 >> 0x29 | uVar6 * 0x800000));
      uVar23 = lVar2 + uVar23;
      uVar5 = ((uVar8 >> 0x1c | uVar8 << 0x24) ^ (uVar8 >> 0x22 | uVar8 * 0x40000000) ^
              (uVar8 >> 0x27 | uVar8 * 0x2000000)) + (uVar8 & (uVar30 ^ uVar19) ^ uVar30 & uVar19) +
              lVar2;
      lVar2 = uVar16 + (uVar17 & (uVar23 ^ 0xffffffffffffffff)) + (uVar23 & uVar6) + local_88 +
              -0x54e3a12a25927ee8 +
              ((uVar23 >> 0xe | uVar23 << 0x32) ^ (uVar23 >> 0x12 | uVar23 << 0x2e) ^
              (uVar23 >> 0x29 | uVar23 * 0x800000));
      uVar19 = lVar2 + uVar19;
      uVar16 = ((uVar5 >> 0x1c | uVar5 << 0x24) ^ (uVar5 >> 0x22 | uVar5 * 0x40000000) ^
               (uVar5 >> 0x27 | uVar5 * 0x2000000)) + (uVar5 & (uVar8 ^ uVar30) ^ uVar8 & uVar30) +
               lVar2;
      uVar10 = (param_2[8] & 0xff00ff00ff00ff00) >> 8 | (param_2[8] & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      lVar2 = uVar17 + (uVar6 & (uVar19 ^ 0xffffffffffffffff)) + (uVar19 & uVar23) + uVar10 +
              -0x27f855675cfcfdbe +
              ((uVar19 >> 0xe | uVar19 << 0x32) ^ (uVar19 >> 0x12 | uVar19 << 0x2e) ^
              (uVar19 >> 0x29 | uVar19 * 0x800000));
      uVar30 = lVar2 + uVar30;
      uVar17 = (param_2[9] & 0xff00ff00ff00ff00) >> 8 | (param_2[9] & 0xff00ff00ff00ff) << 8;
      uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
      uVar28 = uVar17 >> 0x20 | uVar17 << 0x20;
      uVar17 = ((uVar16 >> 0x1c | uVar16 << 0x24) ^ (uVar16 >> 0x22 | uVar16 * 0x40000000) ^
               (uVar16 >> 0x27 | uVar16 * 0x2000000)) + (uVar16 & (uVar5 ^ uVar8) ^ uVar5 & uVar8) +
               lVar2;
      lVar2 = uVar6 + (uVar23 & (uVar30 ^ 0xffffffffffffffff)) + (uVar30 & uVar19) + uVar28 +
              0x12835b0145706fbe +
              ((uVar30 >> 0xe | uVar30 << 0x32) ^ (uVar30 >> 0x12 | uVar30 << 0x2e) ^
              (uVar30 >> 0x29 | uVar30 * 0x800000));
      uVar8 = lVar2 + uVar8;
      uVar6 = ((uVar17 >> 0x1c | uVar17 << 0x24) ^ (uVar17 >> 0x22 | uVar17 * 0x40000000) ^
              (uVar17 >> 0x27 | uVar17 * 0x2000000)) + (uVar17 & (uVar16 ^ uVar5) ^ uVar16 & uVar5)
              + lVar2;
      uVar14 = (param_2[10] & 0xff00ff00ff00ff00) >> 8 | (param_2[10] & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
      uVar24 = (param_2[0xb] & 0xff00ff00ff00ff00) >> 8 | (param_2[0xb] & 0xff00ff00ff00ff) << 8;
      uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
      uVar24 = uVar24 >> 0x20 | uVar24 << 0x20;
      lVar2 = uVar23 + (uVar19 & (uVar8 ^ 0xffffffffffffffff)) + (uVar8 & uVar30) + uVar14 +
              0x243185be4ee4b28c +
              ((uVar8 >> 0xe | uVar8 << 0x32) ^ (uVar8 >> 0x12 | uVar8 << 0x2e) ^
              (uVar8 >> 0x29 | uVar8 * 0x800000));
      uVar5 = lVar2 + uVar5;
      uVar23 = ((uVar6 >> 0x1c | uVar6 << 0x24) ^ (uVar6 >> 0x22 | uVar6 * 0x40000000) ^
               (uVar6 >> 0x27 | uVar6 * 0x2000000)) + (uVar6 & (uVar17 ^ uVar16) ^ uVar17 & uVar16)
               + lVar2;
      lVar2 = uVar19 + (uVar30 & (uVar5 ^ 0xffffffffffffffff)) + (uVar5 & uVar8) + uVar24 +
              0x550c7dc3d5ffb4e2 +
              ((uVar5 >> 0xe | uVar5 << 0x32) ^ (uVar5 >> 0x12 | uVar5 << 0x2e) ^
              (uVar5 >> 0x29 | uVar5 * 0x800000));
      uVar16 = lVar2 + uVar16;
      uVar19 = ((uVar23 >> 0x1c | uVar23 << 0x24) ^ (uVar23 >> 0x22 | uVar23 * 0x40000000) ^
               (uVar23 >> 0x27 | uVar23 * 0x2000000)) + (uVar23 & (uVar6 ^ uVar17) ^ uVar6 & uVar17)
               + lVar2;
      uVar27 = (param_2[0xc] & 0xff00ff00ff00ff00) >> 8 | (param_2[0xc] & 0xff00ff00ff00ff) << 8;
      uVar27 = (uVar27 & 0xffff0000ffff0000) >> 0x10 | (uVar27 & 0xffff0000ffff) << 0x10;
      uVar27 = uVar27 >> 0x20 | uVar27 << 0x20;
      lVar2 = uVar30 + (uVar8 & (uVar16 ^ 0xffffffffffffffff)) + (uVar16 & uVar5) + uVar27 +
              0x72be5d74f27b896f +
              ((uVar16 >> 0xe | uVar16 << 0x32) ^ (uVar16 >> 0x12 | uVar16 << 0x2e) ^
              (uVar16 >> 0x29 | uVar16 * 0x800000));
      uVar30 = (param_2[0xd] & 0xff00ff00ff00ff00) >> 8 | (param_2[0xd] & 0xff00ff00ff00ff) << 8;
      uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
      uVar25 = uVar30 >> 0x20 | uVar30 << 0x20;
      uVar17 = lVar2 + uVar17;
      uVar30 = ((uVar19 >> 0x1c | uVar19 << 0x24) ^ (uVar19 >> 0x22 | uVar19 * 0x40000000) ^
               (uVar19 >> 0x27 | uVar19 * 0x2000000)) + (uVar19 & (uVar23 ^ uVar6) ^ uVar23 & uVar6)
               + lVar2;
      lVar2 = uVar8 + (uVar5 & (uVar17 ^ 0xffffffffffffffff)) + (uVar17 & uVar16) + uVar25 +
              -0x7f214e01c4e9694f +
              ((uVar17 >> 0xe | uVar17 << 0x32) ^ (uVar17 >> 0x12 | uVar17 << 0x2e) ^
              (uVar17 >> 0x29 | uVar17 * 0x800000));
      uVar6 = lVar2 + uVar6;
      uVar8 = ((uVar30 >> 0x1c | uVar30 << 0x24) ^ (uVar30 >> 0x22 | uVar30 * 0x40000000) ^
              (uVar30 >> 0x27 | uVar30 * 0x2000000)) +
              (uVar30 & (uVar19 ^ uVar23) ^ uVar19 & uVar23) + lVar2;
      uVar26 = (param_2[0xe] & 0xff00ff00ff00ff00) >> 8 | (param_2[0xe] & 0xff00ff00ff00ff) << 8;
      uVar26 = (uVar26 & 0xffff0000ffff0000) >> 0x10 | (uVar26 & 0xffff0000ffff) << 0x10;
      uVar26 = uVar26 >> 0x20 | uVar26 << 0x20;
      uVar29 = (param_2[0xf] & 0xff00ff00ff00ff00) >> 8 | (param_2[0xf] & 0xff00ff00ff00ff) << 8;
      uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 | (uVar29 & 0xffff0000ffff) << 0x10;
      uVar29 = uVar29 >> 0x20 | uVar29 << 0x20;
      lVar2 = uVar5 + (uVar16 & (uVar6 ^ 0xffffffffffffffff)) + (uVar6 & uVar17) + uVar26 +
              -0x6423f958da38edcb +
              ((uVar6 >> 0xe | uVar6 << 0x32) ^ (uVar6 >> 0x12 | uVar6 << 0x2e) ^
              (uVar6 >> 0x29 | uVar6 * 0x800000));
      uVar23 = lVar2 + uVar23;
      uVar5 = ((uVar8 >> 0x1c | uVar8 << 0x24) ^ (uVar8 >> 0x22 | uVar8 * 0x40000000) ^
              (uVar8 >> 0x27 | uVar8 * 0x2000000)) + (uVar8 & (uVar30 ^ uVar19) ^ uVar30 & uVar19) +
              lVar2;
      plVar31 = &DAT_0020e8f8;
      lVar2 = uVar16 + (uVar17 & (uVar23 ^ 0xffffffffffffffff)) + (uVar23 & uVar6) + uVar29 +
              -0x3e640e8b3096d96c +
              ((uVar23 >> 0xe | uVar23 << 0x32) ^ (uVar23 >> 0x12 | uVar23 << 0x2e) ^
              (uVar23 >> 0x29 | uVar23 * 0x800000));
      uVar19 = lVar2 + uVar19;
      uVar16 = ((uVar5 >> 0x1c | uVar5 << 0x24) ^ (uVar5 >> 0x22 | uVar5 * 0x40000000) ^
               (uVar5 >> 0x27 | uVar5 * 0x2000000)) + (uVar5 & (uVar8 ^ uVar30) ^ uVar8 & uVar30) +
               lVar2;
      do {
        uVar15 = uVar28 + uVar15 +
                 ((uVar26 >> 0x13 | uVar26 << 0x2d) ^ (uVar26 >> 0x3d | uVar26 << 3) ^ uVar26 >> 6)
                 + ((local_68 >> 1 | local_68 << 0x3f) ^ (local_68 >> 8 | local_68 << 0x38) ^
                   local_68 >> 7);
        lVar2 = ((uVar19 >> 0xe | uVar19 << 0x32) ^ (uVar19 >> 0x12 | uVar19 << 0x2e) ^
                (uVar19 >> 0x29 | uVar19 << 0x17)) +
                (uVar23 & uVar19) + uVar17 + (uVar6 & (uVar19 ^ 0xffffffffffffffff)) + plVar31[-0xf]
                + uVar15;
        uVar30 = lVar2 + uVar30;
        uVar17 = ((uVar8 ^ uVar5) & uVar16 ^ uVar8 & uVar5) +
                 ((uVar16 >> 0x1c | uVar16 << 0x24) ^ (uVar16 >> 0x22 | uVar16 << 0x1e) ^
                 (uVar16 >> 0x27 | uVar16 << 0x19)) + lVar2;
        local_68 = uVar14 + local_68 +
                   ((uVar29 >> 0x13 | uVar29 << 0x2d) ^ (uVar29 >> 0x3d | uVar29 << 3) ^ uVar29 >> 6
                   ) + ((local_70 >> 1 | local_70 << 0x3f) ^ (local_70 >> 8 | local_70 << 0x38) ^
                       local_70 >> 7);
        lVar2 = local_68 + uVar6 + plVar31[-0xe] + (uVar23 & (uVar30 ^ 0xffffffffffffffff)) +
                (uVar30 & uVar19) +
                ((uVar30 >> 0xe | uVar30 << 0x32) ^ (uVar30 >> 0x12 | uVar30 << 0x2e) ^
                (uVar30 >> 0x29 | uVar30 * 0x800000));
        uVar8 = lVar2 + uVar8;
        uVar6 = ((uVar17 >> 0x1c | uVar17 << 0x24) ^ (uVar17 >> 0x22 | uVar17 * 0x40000000) ^
                (uVar17 >> 0x27 | uVar17 * 0x2000000)) +
                (uVar17 & (uVar5 ^ uVar16) ^ uVar5 & uVar16) + lVar2;
        local_70 = local_70 + uVar24 +
                   ((uVar21 >> 1 | uVar21 << 0x3f) ^ (uVar21 >> 8 | uVar21 << 0x38) ^ uVar21 >> 7) +
                   ((uVar15 >> 0x13 | uVar15 << 0x2d) ^ (uVar15 >> 0x3d | uVar15 * 8) ^ uVar15 >> 6)
        ;
        lVar2 = local_70 + uVar23 + plVar31[-0xd] + (uVar19 & (uVar8 ^ 0xffffffffffffffff)) +
                (uVar8 & uVar30) +
                ((uVar8 >> 0xe | uVar8 << 0x32) ^ (uVar8 >> 0x12 | uVar8 << 0x2e) ^
                (uVar8 >> 0x29 | uVar8 * 0x800000));
        uVar5 = lVar2 + uVar5;
        uVar23 = ((uVar6 >> 0x1c | uVar6 << 0x24) ^ (uVar6 >> 0x22 | uVar6 * 0x40000000) ^
                 (uVar6 >> 0x27 | uVar6 * 0x2000000)) +
                 (uVar6 & (uVar17 ^ uVar16) ^ uVar17 & uVar16) + lVar2;
        uVar21 = uVar21 + uVar27 +
                 ((local_78 >> 1 | local_78 << 0x3f) ^ (local_78 >> 8 | local_78 << 0x38) ^
                 local_78 >> 7) +
                 ((local_68 >> 0x13 | local_68 << 0x2d) ^ (local_68 >> 0x3d | local_68 * 8) ^
                 local_68 >> 6);
        lVar2 = uVar21 + uVar19 + plVar31[-0xc] + (uVar30 & (uVar5 ^ 0xffffffffffffffff)) +
                (uVar5 & uVar8) +
                ((uVar5 >> 0xe | uVar5 << 0x32) ^ (uVar5 >> 0x12 | uVar5 << 0x2e) ^
                (uVar5 >> 0x29 | uVar5 * 0x800000));
        uVar16 = lVar2 + uVar16;
        uVar19 = ((uVar23 >> 0x1c | uVar23 << 0x24) ^ (uVar23 >> 0x22 | uVar23 * 0x40000000) ^
                 (uVar23 >> 0x27 | uVar23 * 0x2000000)) +
                 (uVar23 & (uVar6 ^ uVar17) ^ uVar6 & uVar17) + lVar2;
        local_78 = local_78 + uVar25 +
                   ((uVar12 >> 1 | uVar12 << 0x3f) ^ (uVar12 >> 8 | uVar12 << 0x38) ^ uVar12 >> 7) +
                   ((local_70 >> 0x13 | local_70 << 0x2d) ^ (local_70 >> 0x3d | local_70 * 8) ^
                   local_70 >> 6);
        lVar2 = uVar30 + plVar31[-0xb] + local_78 + (uVar8 & (uVar16 ^ 0xffffffffffffffff)) +
                (uVar16 & uVar5) +
                ((uVar16 >> 0xe | uVar16 << 0x32) ^ (uVar16 >> 0x12 | uVar16 << 0x2e) ^
                (uVar16 >> 0x29 | uVar16 * 0x800000));
        uVar17 = lVar2 + uVar17;
        uVar30 = ((uVar19 >> 0x1c | uVar19 << 0x24) ^ (uVar19 >> 0x22 | uVar19 * 0x40000000) ^
                 (uVar19 >> 0x27 | uVar19 * 0x2000000)) +
                 (uVar19 & (uVar23 ^ uVar6) ^ uVar23 & uVar6) + lVar2;
        uVar12 = uVar12 + uVar26 +
                 ((local_80 >> 1 | local_80 << 0x3f) ^ (local_80 >> 8 | local_80 << 0x38) ^
                 local_80 >> 7) +
                 ((uVar21 >> 0x13 | uVar21 << 0x2d) ^ (uVar21 >> 0x3d | uVar21 * 8) ^ uVar21 >> 6);
        lVar2 = plVar31[-10] + uVar8 + uVar12 + (uVar5 & (uVar17 ^ 0xffffffffffffffff)) +
                (uVar17 & uVar16) +
                ((uVar17 >> 0xe | uVar17 << 0x32) ^ (uVar17 >> 0x12 | uVar17 << 0x2e) ^
                (uVar17 >> 0x29 | uVar17 * 0x800000));
        uVar6 = lVar2 + uVar6;
        uVar8 = ((uVar30 >> 0x1c | uVar30 << 0x24) ^ (uVar30 >> 0x22 | uVar30 * 0x40000000) ^
                (uVar30 >> 0x27 | uVar30 * 0x2000000)) +
                (uVar30 & (uVar19 ^ uVar23) ^ uVar19 & uVar23) + lVar2;
        local_80 = local_80 + uVar29 +
                   ((local_88 >> 1 | local_88 << 0x3f) ^ (local_88 >> 8 | local_88 << 0x38) ^
                   local_88 >> 7) +
                   ((local_78 >> 0x13 | local_78 << 0x2d) ^ (local_78 >> 0x3d | local_78 * 8) ^
                   local_78 >> 6);
        lVar2 = plVar31[-9] + uVar5 + local_80 + (uVar16 & (uVar6 ^ 0xffffffffffffffff)) +
                (uVar6 & uVar17) +
                ((uVar6 >> 0xe | uVar6 << 0x32) ^ (uVar6 >> 0x12 | uVar6 << 0x2e) ^
                (uVar6 >> 0x29 | uVar6 * 0x800000));
        uVar23 = lVar2 + uVar23;
        local_88 = ((uVar10 >> 1 | uVar10 << 0x3f) ^ (uVar10 >> 8 | uVar10 << 0x38) ^ uVar10 >> 7) +
                   local_88 + uVar15 +
                   ((uVar12 >> 0x13 | uVar12 << 0x2d) ^ (uVar12 >> 0x3d | uVar12 * 8) ^ uVar12 >> 6)
        ;
        uVar5 = ((uVar8 >> 0x1c | uVar8 << 0x24) ^ (uVar8 >> 0x22 | uVar8 * 0x40000000) ^
                (uVar8 >> 0x27 | uVar8 * 0x2000000)) + (uVar8 & (uVar30 ^ uVar19) ^ uVar30 & uVar19)
                + lVar2;
        lVar2 = plVar31[-8] + local_88 + uVar16 + (uVar17 & (uVar23 ^ 0xffffffffffffffff)) +
                (uVar23 & uVar6) +
                ((uVar23 >> 0xe | uVar23 << 0x32) ^ (uVar23 >> 0x12 | uVar23 << 0x2e) ^
                (uVar23 >> 0x29 | uVar23 * 0x800000));
        uVar19 = lVar2 + uVar19;
        uVar16 = ((uVar5 >> 0x1c | uVar5 << 0x24) ^ (uVar5 >> 0x22 | uVar5 * 0x40000000) ^
                 (uVar5 >> 0x27 | uVar5 * 0x2000000)) + (uVar5 & (uVar8 ^ uVar30) ^ uVar8 & uVar30)
                 + lVar2;
        uVar10 = ((uVar28 >> 1 | uVar28 << 0x3f) ^ (uVar28 >> 8 | uVar28 << 0x38) ^ uVar28 >> 7) +
                 uVar10 + local_68 +
                 ((local_80 >> 0x13 | local_80 << 0x2d) ^ (local_80 >> 0x3d | local_80 * 8) ^
                 local_80 >> 6);
        lVar2 = plVar31[-7] + uVar10 + uVar17 + (uVar6 & (uVar19 ^ 0xffffffffffffffff)) +
                (uVar19 & uVar23) +
                ((uVar19 >> 0xe | uVar19 << 0x32) ^ (uVar19 >> 0x12 | uVar19 << 0x2e) ^
                (uVar19 >> 0x29 | uVar19 * 0x800000));
        uVar30 = lVar2 + uVar30;
        uVar28 = ((uVar14 >> 1 | uVar14 << 0x3f) ^ (uVar14 >> 8 | uVar14 << 0x38) ^ uVar14 >> 7) +
                 uVar28 + local_70 +
                 ((local_88 >> 0x13 | local_88 << 0x2d) ^ (local_88 >> 0x3d | local_88 * 8) ^
                 local_88 >> 6);
        uVar17 = ((uVar16 >> 0x1c | uVar16 << 0x24) ^ (uVar16 >> 0x22 | uVar16 * 0x40000000) ^
                 (uVar16 >> 0x27 | uVar16 * 0x2000000)) + (uVar16 & (uVar5 ^ uVar8) ^ uVar5 & uVar8)
                 + lVar2;
        lVar2 = plVar31[-6] + uVar28 + uVar6 + (uVar23 & (uVar30 ^ 0xffffffffffffffff)) +
                (uVar30 & uVar19) +
                ((uVar30 >> 0xe | uVar30 << 0x32) ^ (uVar30 >> 0x12 | uVar30 << 0x2e) ^
                (uVar30 >> 0x29 | uVar30 * 0x800000));
        uVar8 = lVar2 + uVar8;
        uVar6 = ((uVar17 >> 0x1c | uVar17 << 0x24) ^ (uVar17 >> 0x22 | uVar17 * 0x40000000) ^
                (uVar17 >> 0x27 | uVar17 * 0x2000000)) +
                (uVar17 & (uVar16 ^ uVar5) ^ uVar16 & uVar5) + lVar2;
        uVar14 = ((uVar24 >> 1 | uVar24 << 0x3f) ^ (uVar24 >> 8 | uVar24 << 0x38) ^ uVar24 >> 7) +
                 uVar14 + uVar21 +
                 ((uVar10 >> 0x13 | uVar10 << 0x2d) ^ (uVar10 >> 0x3d | uVar10 * 8) ^ uVar10 >> 6);
        lVar2 = plVar31[-5] + uVar14 + uVar23 + (uVar19 & (uVar8 ^ 0xffffffffffffffff)) +
                (uVar8 & uVar30) +
                ((uVar8 >> 0xe | uVar8 << 0x32) ^ (uVar8 >> 0x12 | uVar8 << 0x2e) ^
                (uVar8 >> 0x29 | uVar8 * 0x800000));
        uVar5 = lVar2 + uVar5;
        uVar24 = ((uVar27 >> 1 | uVar27 << 0x3f) ^ (uVar27 >> 8 | uVar27 << 0x38) ^ uVar27 >> 7) +
                 uVar24 + local_78 +
                 ((uVar28 >> 0x13 | uVar28 << 0x2d) ^ (uVar28 >> 0x3d | uVar28 * 8) ^ uVar28 >> 6);
        uVar23 = ((uVar6 >> 0x1c | uVar6 << 0x24) ^ (uVar6 >> 0x22 | uVar6 * 0x40000000) ^
                 (uVar6 >> 0x27 | uVar6 * 0x2000000)) +
                 (uVar6 & (uVar17 ^ uVar16) ^ uVar17 & uVar16) + lVar2;
        lVar2 = plVar31[-4] + uVar24 + uVar19 + (uVar30 & (uVar5 ^ 0xffffffffffffffff)) +
                (uVar5 & uVar8) +
                ((uVar5 >> 0xe | uVar5 << 0x32) ^ (uVar5 >> 0x12 | uVar5 << 0x2e) ^
                (uVar5 >> 0x29 | uVar5 * 0x800000));
        uVar16 = lVar2 + uVar16;
        uVar19 = ((uVar23 >> 0x1c | uVar23 << 0x24) ^ (uVar23 >> 0x22 | uVar23 * 0x40000000) ^
                 (uVar23 >> 0x27 | uVar23 * 0x2000000)) +
                 (uVar23 & (uVar6 ^ uVar17) ^ uVar6 & uVar17) + lVar2;
        uVar27 = ((uVar25 >> 1 | uVar25 << 0x3f) ^ (uVar25 >> 8 | uVar25 << 0x38) ^ uVar25 >> 7) +
                 uVar27 + uVar12 +
                 ((uVar14 >> 0x13 | uVar14 << 0x2d) ^ (uVar14 >> 0x3d | uVar14 * 8) ^ uVar14 >> 6);
        lVar2 = plVar31[-3] + uVar27 + uVar30 + (uVar8 & (uVar16 ^ 0xffffffffffffffff)) +
                (uVar16 & uVar5) +
                ((uVar16 >> 0xe | uVar16 << 0x32) ^ (uVar16 >> 0x12 | uVar16 << 0x2e) ^
                (uVar16 >> 0x29 | uVar16 * 0x800000));
        uVar17 = lVar2 + uVar17;
        uVar25 = ((uVar26 >> 1 | uVar26 << 0x3f) ^ (uVar26 >> 8 | uVar26 << 0x38) ^ uVar26 >> 7) +
                 uVar25 + local_80 +
                 ((uVar24 >> 0x13 | uVar24 << 0x2d) ^ (uVar24 >> 0x3d | uVar24 * 8) ^ uVar24 >> 6);
        uVar30 = ((uVar19 >> 0x1c | uVar19 << 0x24) ^ (uVar19 >> 0x22 | uVar19 * 0x40000000) ^
                 (uVar19 >> 0x27 | uVar19 * 0x2000000)) +
                 (uVar19 & (uVar23 ^ uVar6) ^ uVar23 & uVar6) + lVar2;
        lVar2 = plVar31[-2] + uVar25 + uVar8 + (uVar5 & (uVar17 ^ 0xffffffffffffffff)) +
                (uVar17 & uVar16) +
                ((uVar17 >> 0xe | uVar17 << 0x32) ^ (uVar17 >> 0x12 | uVar17 << 0x2e) ^
                (uVar17 >> 0x29 | uVar17 * 0x800000));
        uVar6 = lVar2 + uVar6;
        plVar1 = plVar31 + -1;
        lVar3 = *plVar31;
        plVar31 = plVar31 + 0x10;
        uVar26 = ((uVar29 >> 1 | uVar29 << 0x3f) ^ (uVar29 >> 8 | uVar29 << 0x38) ^ uVar29 >> 7) +
                 uVar26 + local_88 +
                 ((uVar27 >> 0x13 | uVar27 << 0x2d) ^ (uVar27 >> 0x3d | uVar27 * 8) ^ uVar27 >> 6);
        uVar8 = ((uVar30 >> 0x1c | uVar30 << 0x24) ^ (uVar30 >> 0x22 | uVar30 * 0x40000000) ^
                (uVar30 >> 0x27 | uVar30 * 0x2000000)) +
                (uVar30 & (uVar19 ^ uVar23) ^ uVar19 & uVar23) + lVar2;
        lVar2 = *plVar1 + uVar26 + uVar5 + (uVar16 & (uVar6 ^ 0xffffffffffffffff)) +
                (uVar6 & uVar17) +
                ((uVar6 >> 0xe | uVar6 << 0x32) ^ (uVar6 >> 0x12 | uVar6 << 0x2e) ^
                (uVar6 >> 0x29 | uVar6 * 0x800000));
        uVar23 = lVar2 + uVar23;
        uVar5 = ((uVar8 >> 0x1c | uVar8 << 0x24) ^ (uVar8 >> 0x22 | uVar8 * 0x40000000) ^
                (uVar8 >> 0x27 | uVar8 * 0x2000000)) + (uVar8 & (uVar30 ^ uVar19) ^ uVar30 & uVar19)
                + lVar2;
        uVar32 = uVar32 + 0x10;
        uVar29 = ((uVar15 >> 1 | uVar15 << 0x3f) ^ (uVar15 >> 8 | uVar15 << 0x38) ^ uVar15 >> 7) +
                 uVar29 + uVar10 +
                 ((uVar25 >> 0x13 | uVar25 << 0x2d) ^ (uVar25 >> 0x3d | uVar25 * 8) ^ uVar25 >> 6);
        lVar2 = lVar3 + uVar29 + uVar16 + (uVar17 & (uVar23 ^ 0xffffffffffffffff)) +
                (uVar23 & uVar6) +
                ((uVar23 >> 0xe | uVar23 << 0x32) ^ (uVar23 >> 0x12 | uVar23 << 0x2e) ^
                (uVar23 >> 0x29 | uVar23 * 0x800000));
        uVar19 = lVar2 + uVar19;
        uVar16 = ((uVar5 >> 0x1c | uVar5 << 0x24) ^ (uVar5 >> 0x22 | uVar5 * 0x40000000) ^
                 (uVar5 >> 0x27 | uVar5 * 0x2000000)) + (uVar5 & (uVar8 ^ uVar30) ^ uVar8 & uVar30)
                 + lVar2;
      } while (uVar32 < 0x40);
      uVar9 = uVar5 + uVar9;
      uVar11 = uVar16 + uVar11;
      uVar18 = uVar17 + uVar18;
      *param_1 = uVar11;
      param_1[1] = uVar9;
      uVar4 = uVar8 + uVar4;
      uVar20 = uVar30 + uVar20;
      param_1[2] = uVar4;
      param_1[3] = uVar20;
      uVar7 = uVar23 + uVar7;
      uVar13 = uVar19 + uVar13;
      param_1[4] = uVar13;
      param_1[5] = uVar7;
      uVar22 = uVar6 + uVar22;
      param_1[6] = uVar22;
      param_1[7] = uVar18;
      param_3 = param_3 + -1;
      param_2 = param_2 + 0x10;
    } while (param_3 != 0);
  }
  return;
}


// ===== 0040ba94  thunk_FUN_0040a884 =====

undefined8 thunk_FUN_0040a884(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = param_2[0x1a];
  uVar5 = (ulong)(uint)uVar4;
  puVar1 = param_2 + 10;
  *(undefined1 *)((long)puVar1 + uVar5) = 0x80;
  lVar3 = uVar5 + 1;
  if (0x6f < (uint)uVar4) {
    memset((void *)((long)puVar1 + lVar3),0,0x7f - uVar5);
    FUN_0040ab7c(param_2,puVar1,1);
    lVar3 = 0;
  }
  memset((void *)((long)puVar1 + lVar3),0,0x70 - lVar3);
  uVar4 = (param_2[8] & 0xff00ff00ff00ff00) >> 8 | (param_2[8] & 0xff00ff00ff00ff) << 8;
  uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
  uVar5 = (param_2[9] & 0xff00ff00ff00ff00) >> 8 | (param_2[9] & 0xff00ff00ff00ff) << 8;
  uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
  param_2[0x18] = uVar5 >> 0x20 | uVar5 << 0x20;
  param_2[0x19] = uVar4 >> 0x20 | uVar4 << 0x20;
  FUN_0040ab7c(param_2,puVar1,1);
  if (param_1 != (ulong *)0x0) {
    uVar2 = *(int *)((long)param_2 + 0xd4) - 0x1cU >> 2 | *(int *)((long)param_2 + 0xd4) << 0x1e;
    if ((int)uVar2 < 5) {
      if (uVar2 == 0) {
        uVar4 = (*param_2 & 0xff00ff00ff00ff00) >> 8 | (*param_2 & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        *param_1 = uVar4 >> 0x20 | uVar4 << 0x20;
        uVar4 = (param_2[1] & 0xff00ff00ff00ff00) >> 8 | (param_2[1] & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        param_1[1] = uVar4 >> 0x20 | uVar4 << 0x20;
        uVar4 = (param_2[2] & 0xff00ff00ff00ff00) >> 8 | (param_2[2] & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        param_1[2] = uVar4 >> 0x20 | uVar4 << 0x20;
        uVar4 = param_2[3];
        *(char *)(param_1 + 3) = (char)(uVar4 >> 0x38);
        *(char *)((long)param_1 + 0x19) = (char)(uVar4 >> 0x30);
        *(char *)((long)param_1 + 0x1a) = (char)(uVar4 >> 0x28);
        *(char *)((long)param_1 + 0x1b) = (char)(uVar4 >> 0x20);
        return 1;
      }
      if (uVar2 == 1) {
        uVar4 = (*param_2 & 0xff00ff00ff00ff00) >> 8 | (*param_2 & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        *param_1 = uVar4 >> 0x20 | uVar4 << 0x20;
        uVar4 = (param_2[1] & 0xff00ff00ff00ff00) >> 8 | (param_2[1] & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        param_1[1] = uVar4 >> 0x20 | uVar4 << 0x20;
        uVar4 = (param_2[2] & 0xff00ff00ff00ff00) >> 8 | (param_2[2] & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        param_1[2] = uVar4 >> 0x20 | uVar4 << 0x20;
        uVar4 = param_2[3];
        *(char *)(param_1 + 3) = (char)(uVar4 >> 0x38);
        *(char *)((long)param_1 + 0x19) = (char)(uVar4 >> 0x30);
        *(char *)((long)param_1 + 0x1a) = (char)(uVar4 >> 0x28);
        *(char *)((long)param_1 + 0x1b) = (char)(uVar4 >> 0x20);
        *(char *)((long)param_1 + 0x1c) = (char)(uVar4 >> 0x18);
        *(char *)((long)param_1 + 0x1d) = (char)(uVar4 >> 0x10);
        *(char *)((long)param_1 + 0x1e) = (char)(uVar4 >> 8);
        *(char *)((long)param_1 + 0x1f) = (char)uVar4;
        return 1;
      }
    }
    else {
      if (uVar2 == 5) {
        uVar4 = (*param_2 & 0xff00ff00ff00ff00) >> 8 | (*param_2 & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        *param_1 = uVar4 >> 0x20 | uVar4 << 0x20;
        uVar4 = (param_2[1] & 0xff00ff00ff00ff00) >> 8 | (param_2[1] & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        param_1[1] = uVar4 >> 0x20 | uVar4 << 0x20;
        uVar4 = (param_2[2] & 0xff00ff00ff00ff00) >> 8 | (param_2[2] & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        param_1[2] = uVar4 >> 0x20 | uVar4 << 0x20;
        uVar4 = (param_2[3] & 0xff00ff00ff00ff00) >> 8 | (param_2[3] & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        param_1[3] = uVar4 >> 0x20 | uVar4 << 0x20;
        uVar4 = (param_2[4] & 0xff00ff00ff00ff00) >> 8 | (param_2[4] & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        param_1[4] = uVar4 >> 0x20 | uVar4 << 0x20;
        uVar4 = param_2[5];
        *(char *)(param_1 + 5) = (char)(uVar4 >> 0x38);
        *(char *)((long)param_1 + 0x29) = (char)(uVar4 >> 0x30);
        *(char *)((long)param_1 + 0x2a) = (char)(uVar4 >> 0x28);
        *(char *)((long)param_1 + 0x2b) = (char)(uVar4 >> 0x20);
        *(char *)((long)param_1 + 0x2c) = (char)(uVar4 >> 0x18);
        *(char *)((long)param_1 + 0x2d) = (char)(uVar4 >> 0x10);
        *(char *)((long)param_1 + 0x2e) = (char)(uVar4 >> 8);
        *(char *)((long)param_1 + 0x2f) = (char)uVar4;
        return 1;
      }
      if (uVar2 == 9) {
        uVar4 = (*param_2 & 0xff00ff00ff00ff00) >> 8 | (*param_2 & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        *param_1 = uVar4 >> 0x20 | uVar4 << 0x20;
        uVar4 = (param_2[1] & 0xff00ff00ff00ff00) >> 8 | (param_2[1] & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        param_1[1] = uVar4 >> 0x20 | uVar4 << 0x20;
        uVar4 = (param_2[2] & 0xff00ff00ff00ff00) >> 8 | (param_2[2] & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        param_1[2] = uVar4 >> 0x20 | uVar4 << 0x20;
        uVar4 = (param_2[3] & 0xff00ff00ff00ff00) >> 8 | (param_2[3] & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        param_1[3] = uVar4 >> 0x20 | uVar4 << 0x20;
        uVar4 = (param_2[4] & 0xff00ff00ff00ff00) >> 8 | (param_2[4] & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        param_1[4] = uVar4 >> 0x20 | uVar4 << 0x20;
        uVar4 = (param_2[5] & 0xff00ff00ff00ff00) >> 8 | (param_2[5] & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        param_1[5] = uVar4 >> 0x20 | uVar4 << 0x20;
        uVar4 = (param_2[6] & 0xff00ff00ff00ff00) >> 8 | (param_2[6] & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        param_1[6] = uVar4 >> 0x20 | uVar4 << 0x20;
        uVar4 = param_2[7];
        *(char *)(param_1 + 7) = (char)(uVar4 >> 0x38);
        *(char *)((long)param_1 + 0x39) = (char)(uVar4 >> 0x30);
        *(char *)((long)param_1 + 0x3a) = (char)(uVar4 >> 0x28);
        *(char *)((long)param_1 + 0x3b) = (char)(uVar4 >> 0x20);
        *(char *)((long)param_1 + 0x3c) = (char)(uVar4 >> 0x18);
        *(char *)((long)param_1 + 0x3d) = (char)(uVar4 >> 0x10);
        *(char *)((long)param_1 + 0x3e) = (char)(uVar4 >> 8);
        *(char *)((long)param_1 + 0x3f) = (char)uVar4;
        return 1;
      }
    }
  }
  return 0;
}


// ===== 0040ba98  FUN_0040ba98 =====

undefined8 FUN_0040ba98(long param_1,void *param_2,ulong param_3)

{
  void *__dest;
  ulong uVar1;
  ulong uVar2;
  ulong __n;
  
  if (param_3 == 0) {
    return 1;
  }
  uVar2 = *(ulong *)(param_1 + 0x40);
  __dest = (void *)(param_1 + 0x50);
  uVar1 = (ulong)*(uint *)(param_1 + 0xd0);
  *(ulong *)(param_1 + 0x40) = uVar2 + param_3 * 8;
  *(ulong *)(param_1 + 0x48) =
       (param_3 >> 0x3d) + *(long *)(param_1 + 0x48) + (ulong)CARRY8(uVar2,param_3 * 8);
  uVar2 = param_3;
  if (*(uint *)(param_1 + 0xd0) != 0) {
    __n = 0x80 - uVar1;
    uVar2 = param_3 - __n;
    if (param_3 < __n) {
      memcpy((void *)((long)__dest + uVar1),param_2,param_3);
      uVar1 = (ulong)(uint)(*(int *)(param_1 + 0xd0) + (int)param_3);
      goto LAB_0040bb64;
    }
    memcpy((void *)((long)__dest + uVar1),param_2,__n);
    *(undefined4 *)(param_1 + 0xd0) = 0;
    param_2 = (void *)((long)param_2 + __n);
    FUN_0040ab7c(param_1,__dest,1);
  }
  uVar1 = uVar2;
  if (0x7f < uVar2) {
    FUN_0040ab7c(param_1,param_2,uVar2 >> 7);
    uVar1 = uVar2 & 0x7f;
    param_2 = (void *)((long)param_2 + (uVar2 - uVar1));
  }
  if (uVar1 == 0) {
    return 1;
  }
  memcpy(__dest,param_2,uVar1);
LAB_0040bb64:
  *(int *)(param_1 + 0xd0) = (int)uVar1;
  return 1;
}


// ===== 0040bb80  FUN_0040bb80 =====

undefined8 FUN_0040bb80(long param_1,void *param_2,ulong param_3)

{
  void *__dest;
  ulong uVar1;
  ulong uVar2;
  ulong __n;
  
  if (param_3 == 0) {
    return 1;
  }
  uVar2 = *(ulong *)(param_1 + 0x40);
  __dest = (void *)(param_1 + 0x50);
  uVar1 = (ulong)*(uint *)(param_1 + 0xd0);
  *(ulong *)(param_1 + 0x40) = uVar2 + param_3 * 8;
  *(ulong *)(param_1 + 0x48) =
       *(long *)(param_1 + 0x48) + (param_3 >> 0x3d) + (ulong)CARRY8(uVar2,param_3 * 8);
  uVar2 = param_3;
  if (*(uint *)(param_1 + 0xd0) != 0) {
    __n = 0x80 - uVar1;
    uVar2 = param_3 - __n;
    if (param_3 < __n) {
      memcpy((void *)((long)__dest + uVar1),param_2,param_3);
      uVar1 = (ulong)(uint)(*(int *)(param_1 + 0xd0) + (int)param_3);
      goto LAB_0040bc4c;
    }
    memcpy((void *)((long)__dest + uVar1),param_2,__n);
    *(undefined4 *)(param_1 + 0xd0) = 0;
    param_2 = (void *)((long)param_2 + __n);
    FUN_0040ab7c(param_1,__dest,1);
  }
  uVar1 = uVar2;
  if (0x7f < uVar2) {
    FUN_0040ab7c(param_1,param_2,uVar2 >> 7);
    uVar1 = uVar2 & 0x7f;
    param_2 = (void *)((long)param_2 + (uVar2 - uVar1));
  }
  if (uVar1 == 0) {
    return 1;
  }
  memcpy(__dest,param_2,uVar1);
LAB_0040bc4c:
  *(int *)(param_1 + 0xd0) = (int)uVar1;
  return 1;
}


// ===== 0040bc68  FUN_0040bc68 =====

void FUN_0040bc68(undefined8 param_1,undefined8 param_2)

{
  FUN_0040ab7c(param_1,param_2,1);
  return;
}


// ===== 0040bc70  FUN_0040bc70 =====

void FUN_0040bc70(long param_1,long param_2)

{
  if (*(long *)(param_1 + 0x18) != param_2) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  *(long *)(param_1 + 0x18) = param_2;
  return;
}


// ===== 0040bc8c  FUN_0040bc8c =====

undefined8 * FUN_0040bc8c(int *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  void *__dest;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = (undefined8 *)FUN_003c83a4(0x20,"crypto/stack/stack.c",0x33);
  if (puVar2 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  if (param_1 == (int *)0x0) {
    *(undefined4 *)puVar2 = 0;
    *(undefined4 *)(puVar2 + 2) = 0;
    puVar2[3] = 0;
  }
  else {
    uVar3 = *(undefined8 *)param_1;
    uVar5 = *(undefined8 *)(param_1 + 6);
    uVar4 = *(undefined8 *)(param_1 + 4);
    iVar1 = *param_1;
    puVar2[1] = *(undefined8 *)(param_1 + 2);
    *puVar2 = uVar3;
    puVar2[3] = uVar5;
    puVar2[2] = uVar4;
    if (iVar1 != 0) {
      __dest = (void *)FUN_003c83a4((long)param_1[5] << 3,"crypto/stack/stack.c",0x47);
      puVar2[1] = __dest;
      if (__dest != (void *)0x0) {
        memcpy(__dest,*(void **)(param_1 + 2),(long)*param_1 << 3);
        return puVar2;
      }
      FUN_003c86b4(0,"crypto/stack/stack.c",0x1bf);
      FUN_003c86b4(puVar2,"crypto/stack/stack.c",0x1c0);
      return (undefined8 *)0x0;
    }
  }
  puVar2[1] = 0;
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  return puVar2;
}


// ===== 0040bd78  FUN_0040bd78 =====

void FUN_0040bd78(long param_1)

{
  if (param_1 != 0) {
    FUN_003c86b4(*(undefined8 *)(param_1 + 8),"crypto/stack/stack.c",0x1bf);
    FUN_003c86b4(param_1,"crypto/stack/stack.c",0x1c0);
    return;
  }
  return;
}


// ===== 0040bdc4  FUN_0040bdc4 =====

uint * FUN_0040bdc4(uint *param_1,code *param_2,code *param_3)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar2 = (uint *)FUN_003c83a4(0x20,"crypto/stack/stack.c",0x59);
  if (puVar2 != (uint *)0x0) {
    if (param_1 == (uint *)0x0) {
      *puVar2 = 0;
      puVar2[4] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
    }
    else {
      uVar6 = *(undefined8 *)param_1;
      uVar8 = *(undefined8 *)(param_1 + 6);
      uVar7 = *(undefined8 *)(param_1 + 4);
      uVar1 = *param_1;
      *(undefined8 *)(puVar2 + 2) = *(undefined8 *)(param_1 + 2);
      *(undefined8 *)puVar2 = uVar6;
      *(undefined8 *)(puVar2 + 6) = uVar8;
      *(undefined8 *)(puVar2 + 4) = uVar7;
      if (uVar1 != 0) {
        if ((int)uVar1 < 5) {
          uVar1 = 4;
        }
        puVar2[5] = uVar1;
        lVar3 = FUN_003c8474((ulong)uVar1 << 3,"crypto/stack/stack.c",0x6d);
        *(long *)(puVar2 + 2) = lVar3;
        if (lVar3 != 0) {
          uVar1 = *puVar2;
          if ((int)uVar1 < 1) {
            return puVar2;
          }
          uVar5 = 0;
          do {
            if (*(long *)(*(long *)(param_1 + 2) + uVar5 * 8) != 0) {
              lVar4 = (*param_2)();
              *(long *)(lVar3 + uVar5 * 8) = lVar4;
              if (lVar4 == 0) {
                if (uVar5 != 0) {
                  uVar5 = uVar5 + 1;
                  do {
                    if (*(long *)(lVar3 + (ulong)((int)uVar5 - 2) * 8) != 0) {
                      (*param_3)();
                    }
                    uVar5 = uVar5 - 1;
                  } while (1 < uVar5);
                }
                break;
              }
            }
            uVar5 = uVar5 + 1;
            if (uVar1 <= uVar5) {
              return puVar2;
            }
          } while( true );
        }
        FUN_003c86b4(lVar3,"crypto/stack/stack.c",0x1bf);
        FUN_003c86b4(puVar2,"crypto/stack/stack.c",0x1c0);
        return (uint *)0x0;
      }
    }
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[5] = 0;
  }
  return puVar2;
}


// ===== 0040bf0c  FUN_0040bf0c =====

void FUN_0040bf0c(void)

{
  long lVar1;
  
  lVar1 = FUN_003c8474(0x20,"crypto/stack/stack.c",0xe4);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x18) = 0;
  }
  return;
}


// ===== 0040bf38  FUN_0040bf38 =====

long FUN_0040bf38(undefined8 param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_003c8474(0x20,"crypto/stack/stack.c",0xe4);
  if (((lVar2 != 0) && (*(undefined8 *)(lVar2 + 0x18) = param_1, 0 < param_2)) &&
     (iVar1 = FUN_0040c008(lVar2,param_2,1), iVar1 == 0)) {
    FUN_003c86b4(*(undefined8 *)(lVar2 + 8),"crypto/stack/stack.c",0x1bf);
    FUN_003c86b4(lVar2,"crypto/stack/stack.c",0x1c0);
    return 0;
  }
  return lVar2;
}


// ===== 0040bfd0  FUN_0040bfd0 =====

void FUN_0040bfd0(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_003c8474(0x20,"crypto/stack/stack.c",0xe4);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x18) = param_1;
  }
  return;
}


// ===== 0040c008  FUN_0040c008 =====

undefined8 FUN_0040c008(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  
  if ((int)(*param_1 ^ 0x7fffffff) < param_2) {
    FUN_00379868();
    uVar6 = 0xb8;
  }
  else {
    uVar1 = *param_1 + param_2;
    if ((int)uVar1 < 5) {
      uVar1 = 4;
    }
    if (*(long *)(param_1 + 2) == 0) {
      lVar5 = FUN_003c8474((ulong)uVar1 << 3,"crypto/stack/stack.c",199);
      *(long *)(param_1 + 2) = lVar5;
      if (lVar5 == 0) {
        return 0;
      }
      param_1[5] = uVar1;
      return 1;
    }
    uVar9 = param_1[5];
    uVar10 = (ulong)uVar9;
    if (param_3 != 0) {
      uVar10 = (ulong)uVar1;
      if (uVar1 == uVar9) {
        return 1;
      }
LAB_0040c08c:
      lVar5 = FUN_003c8558(*(long *)(param_1 + 2),
                           -(uVar10 >> 0x1f) & 0xfffffff800000000 | uVar10 << 3,
                           "crypto/stack/stack.c",0xd9);
      if (lVar5 == 0) {
        return 0;
      }
      *(long *)(param_1 + 2) = lVar5;
      param_1[5] = (uint)uVar10;
      return 1;
    }
    if ((int)uVar1 <= (int)uVar9) {
      return 1;
    }
    while (uVar9 = (uint)uVar10, (int)uVar9 < (int)uVar1) {
      if (uVar9 + 0xf0000000 >> 0x1d < 7) {
        uVar2 = uVar9;
        if ((int)uVar9 < 9) {
          uVar2 = 8;
        }
        uVar7 = uVar9;
        if (7 < (int)uVar9) {
          uVar7 = 8;
        }
        lVar8 = (long)(int)(uVar2 / 5) * (long)(int)uVar7;
        lVar5 = (long)(int)(uVar2 % 5) * (long)(int)uVar7;
        uVar2 = (int)uVar9 >> 0x1f ^ 0x7fffffff;
        uVar7 = (uint)lVar5;
        bVar3 = lVar5 - (int)uVar7 == 0;
        uVar9 = uVar2;
        if (bVar3) {
          uVar9 = uVar7;
        }
        uVar7 = (uint)lVar8;
        bVar4 = lVar8 - (int)uVar7 == 0;
        if (bVar4) {
          uVar2 = uVar7;
        }
        uVar10 = (ulong)(uVar2 + (int)uVar9 / 5);
        if ((SCARRY4(uVar2,(int)uVar9 / 5)) || (!bVar4 || !bVar3)) goto LAB_0040c1cc;
      }
      else {
        uVar10 = (ulong)(uint)((int)(uVar9 << 3) / 5);
      }
    }
    if (uVar9 != 0) goto LAB_0040c08c;
LAB_0040c1cc:
    FUN_00379868();
    uVar6 = 0xd2;
  }
  FUN_0037995c("crypto/stack/stack.c",uVar6,"sk_reserve");
  FUN_00379a5c(0xf,0x72,0);
  return 0;
}


// ===== 0040c1e8  FUN_0040c1e8 =====

undefined8 FUN_0040c1e8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/stack/stack.c",0xf9,"OPENSSL_sk_reserve");
    FUN_00379a5c(0xf,0xc0102,0);
    return 0;
  }
  if (-1 < (int)param_2) {
    uVar1 = FUN_0040c008(param_1,param_2,1);
    return uVar1;
  }
  return 1;
}


// ===== 0040c244  FUN_0040c244 =====

ulong FUN_0040c244(uint *param_1,undefined8 param_2,uint param_3)

{
  void *__src;
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  if (param_1 == (uint *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/stack/stack.c",0x105,"OPENSSL_sk_insert");
    uVar3 = 0xc0102;
LAB_0040c2b8:
    FUN_00379a5c(0xf,uVar3,0);
    return 0;
  }
  if (*param_1 == 0x7fffffff) {
    FUN_00379868();
    FUN_0037995c("crypto/stack/stack.c",0x109,"OPENSSL_sk_insert");
    uVar3 = 0x72;
    goto LAB_0040c2b8;
  }
  uVar2 = FUN_0040c008(param_1,1,0);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  uVar4 = *param_1;
  if (-1 < (int)param_3) {
    uVar1 = uVar4 - param_3;
    if (uVar1 != 0 && (int)param_3 <= (int)uVar4) {
      __src = (void *)(*(long *)(param_1 + 2) + (ulong)param_3 * 8);
      memmove((void *)((long)__src + 8),__src,
              -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3);
      uVar4 = *param_1;
      *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)param_3 * 8) = param_2;
      goto LAB_0040c334;
    }
  }
  *(undefined8 *)(*(long *)(param_1 + 2) + (long)(int)uVar4 * 8) = param_2;
LAB_0040c334:
  param_1[4] = 0;
  *param_1 = uVar4 + 1;
  return (ulong)(uVar4 + 1);
}


// ===== 0040c350  FUN_0040c350 =====

uint * FUN_0040c350(uint *param_1,long param_2)

{
  uint uVar1;
  long *__dest;
  uint uVar2;
  ulong uVar3;
  uint *puVar4;
  
  if (param_1 != (uint *)0x0) {
    uVar1 = *param_1;
    if (0 < (int)uVar1) {
      __dest = *(long **)(param_1 + 2);
      uVar3 = 0;
      do {
        if (*__dest == param_2) {
          puVar4 = (uint *)*__dest;
          uVar2 = (uint)uVar3;
          if (uVar1 - 1 == uVar2) {
            *param_1 = uVar2;
            return puVar4;
          }
          uVar2 = (uVar1 - 1) - uVar2;
          memmove(__dest,__dest + 1,-(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3
                 );
          *param_1 = *param_1 - 1;
          return puVar4;
        }
        uVar3 = uVar3 + 1;
        __dest = __dest + 1;
      } while (uVar3 != uVar1);
      return (uint *)0x0;
    }
    param_1 = (uint *)0x0;
  }
  return param_1;
}


// ===== 0040c404  FUN_0040c404 =====

undefined8 FUN_0040c404(uint *param_1,uint param_2)

{
  undefined8 *__dest;
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if ((param_1 != (uint *)0x0) && (-1 < (int)param_2)) {
    uVar1 = *param_1;
    if ((int)uVar1 <= (int)param_2) {
      return 0;
    }
    __dest = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)param_2 * 8);
    uVar2 = *__dest;
    if (uVar1 - 1 != param_2) {
      memmove(__dest,__dest + 1,
              -(ulong)(uVar1 + ~param_2 >> 0x1f) & 0xfffffff800000000 |
              (ulong)(uVar1 + ~param_2) << 3);
      param_2 = *param_1 - 1;
    }
    *param_1 = param_2;
  }
  return uVar2;
}


// ===== 0040c48c  FUN_0040c48c =====

ulong FUN_0040c48c(uint *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long local_18;
  
  if (param_1 != (uint *)0x0) {
    uVar1 = *param_1;
    if (uVar1 != 0) {
      if (*(long *)(param_1 + 6) == 0) {
        if (0 < (int)uVar1) {
          uVar4 = 0;
          do {
            if (*(long *)(*(long *)(param_1 + 2) + uVar4 * 8) == param_2) {
              return uVar4;
            }
            uVar4 = uVar4 + 1;
          } while (uVar1 != uVar4);
        }
      }
      else if (param_2 != 0) {
        local_18 = param_2;
        if (param_1[4] == 0) {
          if (0 < (int)uVar1) {
            lVar3 = 0;
            uVar4 = 0;
            do {
              iVar2 = (**(code **)(param_1 + 6))(&local_18,*(long *)(param_1 + 2) + lVar3);
              if (iVar2 == 0) {
                return uVar4 & 0xffffffff;
              }
              uVar4 = uVar4 + 1;
              lVar3 = lVar3 + 8;
            } while ((long)uVar4 < (long)(int)*param_1);
            return 0xffffffff;
          }
        }
        else {
          lVar3 = FUN_003de3b8(&local_18,*(undefined8 *)(param_1 + 2),(ulong)uVar1,8,
                               *(long *)(param_1 + 6),2);
          if (lVar3 != 0) {
            return (ulong)(lVar3 - *(long *)(param_1 + 2)) >> 3;
          }
        }
      }
    }
  }
  return 0xffffffff;
}


// ===== 0040c59c  FUN_0040c59c =====

ulong FUN_0040c59c(uint *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long local_18;
  
  if (param_1 != (uint *)0x0) {
    uVar1 = *param_1;
    if (uVar1 != 0) {
      if (*(long *)(param_1 + 6) == 0) {
        if (0 < (int)uVar1) {
          uVar4 = 0;
          do {
            if (*(long *)(*(long *)(param_1 + 2) + uVar4 * 8) == param_2) {
              return uVar4;
            }
            uVar4 = uVar4 + 1;
          } while (uVar1 != uVar4);
        }
      }
      else if (param_2 != 0) {
        local_18 = param_2;
        if (param_1[4] == 0) {
          if (0 < (int)uVar1) {
            lVar3 = 0;
            uVar4 = 0;
            do {
              iVar2 = (**(code **)(param_1 + 6))(&local_18,*(long *)(param_1 + 2) + lVar3);
              if (iVar2 == 0) {
                return uVar4 & 0xffffffff;
              }
              uVar4 = uVar4 + 1;
              lVar3 = lVar3 + 8;
            } while ((long)uVar4 < (long)(int)*param_1);
            return 0xffffffff;
          }
        }
        else {
          lVar3 = FUN_003de3b8(&local_18,*(undefined8 *)(param_1 + 2),(ulong)uVar1,8,
                               *(long *)(param_1 + 6),1);
          if (lVar3 != 0) {
            return (ulong)(lVar3 - *(long *)(param_1 + 2)) >> 3;
          }
        }
      }
    }
  }
  return 0xffffffff;
}


// ===== 0040c6ac  FUN_0040c6ac =====

ulong FUN_0040c6ac(uint *param_1,long param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long local_28;
  
  if (param_1 == (uint *)0x0) {
    return 0xffffffff;
  }
  uVar1 = *param_1;
  if (uVar1 == 0) {
    return 0xffffffff;
  }
  if (*(long *)(param_1 + 6) == 0) {
    if (0 < (int)uVar1) {
      uVar3 = 0;
      do {
        if (*(long *)(*(long *)(param_1 + 2) + uVar3 * 8) == param_2) {
          if (param_3 != (int *)0x0) {
            *param_3 = 1;
          }
          goto LAB_0040c824;
        }
        uVar3 = uVar3 + 1;
      } while (uVar1 != uVar3);
    }
    if (param_3 == (int *)0x0) {
      return 0xffffffff;
    }
    goto LAB_0040c87c;
  }
  if (param_2 == 0) {
    return 0xffffffff;
  }
  local_28 = param_2;
  if (param_1[4] != 0) {
    uVar3 = FUN_003de3b8(&local_28,*(undefined8 *)(param_1 + 2),(ulong)uVar1,8,
                         *(long *)(param_1 + 6),2);
    if (param_3 == (int *)0x0) {
LAB_0040c760:
      if (uVar3 == 0) {
        return 0xffffffff;
      }
      lVar4 = *(long *)(param_1 + 2);
    }
    else {
      *param_3 = 0;
      if (uVar3 == 0) {
        return 0xffffffff;
      }
      lVar4 = *(long *)(param_1 + 2);
      uVar5 = uVar3;
      if (uVar3 < (ulong)(lVar4 + (long)(int)*param_1 * 8)) {
        do {
          iVar2 = (**(code **)(param_1 + 6))(&local_28,uVar5);
          if (iVar2 != 0) break;
          uVar5 = uVar5 + 8;
          *param_3 = *param_3 + 1;
        } while (uVar5 < (ulong)(*(long *)(param_1 + 2) + (long)(int)*param_1 * 8));
        goto LAB_0040c760;
      }
    }
    uVar3 = uVar3 - lVar4 >> 3;
    goto LAB_0040c770;
  }
  if ((int)uVar1 < 1) {
LAB_0040c86c:
    uVar3 = 0xffffffff;
  }
  else {
    lVar4 = 0;
    if (param_3 == (int *)0x0) {
      uVar3 = 0;
      do {
        iVar2 = (**(code **)(param_1 + 6))(&local_28,*(long *)(param_1 + 2) + lVar4);
        if (iVar2 == 0) {
LAB_0040c824:
          return uVar3 & 0xffffffff;
        }
        uVar3 = uVar3 + 1;
        lVar4 = lVar4 + 8;
      } while ((long)uVar3 < (long)(int)*param_1);
      goto LAB_0040c86c;
    }
    lVar6 = 0;
    uVar3 = 0xffffffff;
    do {
      iVar2 = (**(code **)(param_1 + 6))(&local_28,*(long *)(param_1 + 2) + lVar4);
      if (iVar2 == 0) {
        uVar1 = (uint)lVar6;
        if ((uint)uVar3 != 0xffffffff) {
          uVar1 = (uint)uVar3;
        }
        uVar3 = (ulong)uVar1;
        *param_3 = *param_3 + 1;
      }
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + 8;
    } while (lVar6 < (int)*param_1);
  }
  if ((param_3 != (int *)0x0) && ((int)uVar3 == -1)) {
LAB_0040c87c:
    *param_3 = 0;
    return 0xffffffff;
  }
LAB_0040c770:
  return uVar3 & 0xffffffff;
}


// ===== 0040c89c  FUN_0040c89c =====

ulong FUN_0040c89c(uint *param_1,undefined8 param_2)

{
  void *__src;
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  
  if (param_1 == (uint *)0x0) {
    return 0xffffffff;
  }
  uVar1 = *param_1;
  if (uVar1 == 0x7fffffff) {
    FUN_00379868();
    FUN_0037995c("crypto/stack/stack.c",0x109,"OPENSSL_sk_insert");
    FUN_00379a5c(0xf,0x72,0);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0040c008(param_1,1,0);
    if ((int)uVar2 != 0) {
      uVar3 = *param_1;
      if (((int)uVar1 < 0) || ((int)uVar3 <= (int)uVar1)) {
        *(undefined8 *)(*(long *)(param_1 + 2) + (long)(int)uVar3 * 8) = param_2;
      }
      else {
        __src = (void *)(*(long *)(param_1 + 2) + (ulong)uVar1 * 8);
        memmove((void *)((long)__src + 8),__src,
                -(ulong)(uVar3 - uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)(uVar3 - uVar1) << 3);
        uVar3 = *param_1;
        *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar1 * 8) = param_2;
      }
      param_1[4] = 0;
      *param_1 = uVar3 + 1;
      return (ulong)(uVar3 + 1);
    }
  }
  return uVar2;
}


// ===== 0040c984  FUN_0040c984 =====

void FUN_0040c984(undefined8 param_1,undefined8 param_2)

{
  FUN_0040c244(param_1,param_2,0);
  return;
}


// ===== 0040c98c  FUN_0040c98c =====

int * FUN_0040c98c(int *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined8 *__dest;
  
  piVar2 = param_1;
  if (param_1 != (int *)0x0) {
    if (*param_1 == 0) {
      return (int *)0x0;
    }
    __dest = *(undefined8 **)(param_1 + 2);
    uVar1 = *param_1 - 1;
    piVar2 = (int *)*__dest;
    if (uVar1 == 0) {
      iVar3 = 0;
    }
    else {
      memmove(__dest,__dest + 1,-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3);
      iVar3 = *param_1 + -1;
    }
    *param_1 = iVar3;
  }
  return piVar2;
}


// ===== 0040ca00  FUN_0040ca00 =====

undefined8 FUN_0040ca00(int *param_1)

{
  int iVar1;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    iVar1 = *param_1 + -1;
    *param_1 = iVar1;
    return *(undefined8 *)(*(long *)(param_1 + 2) + (long)iVar1 * 8);
  }
  return 0;
}


// ===== 0040ca2c  FUN_0040ca2c =====

void FUN_0040ca2c(int *param_1)

{
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    memset(*(void **)(param_1 + 2),0,(long)*param_1 << 3);
    *param_1 = 0;
  }
  return;
}


// ===== 0040ca6c  FUN_0040ca6c =====

void FUN_0040ca6c(int *param_1,code *param_2)

{
  int iVar1;
  long lVar2;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    if (0 < iVar1) {
      lVar2 = 0;
      do {
        if (*(long *)(*(long *)(param_1 + 2) + lVar2 * 8) != 0) {
          (*param_2)();
          iVar1 = *param_1;
        }
        lVar2 = lVar2 + 1;
      } while (lVar2 < iVar1);
    }
    FUN_003c86b4(*(undefined8 *)(param_1 + 2),"crypto/stack/stack.c",0x1bf);
    FUN_003c86b4(param_1,"crypto/stack/stack.c",0x1c0);
    return;
  }
  return;
}


// ===== 0040caf8  FUN_0040caf8 =====

undefined4 FUN_0040caf8(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    return *param_1;
  }
  return 0xffffffff;
}


// ===== 0040cb0c  FUN_0040cb0c =====

undefined8 FUN_0040cb0c(int *param_1,uint param_2)

{
  if (((param_1 != (int *)0x0) && (-1 < (int)param_2)) && ((int)param_2 < *param_1)) {
    return *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)param_2 * 8);
  }
  return 0;
}


// ===== 0040cb3c  FUN_0040cb3c =====

undefined8 FUN_0040cb3c(int *param_1,uint param_2,undefined8 param_3)

{
  long lVar1;
  
  if (param_1 == (int *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/stack/stack.c",0x1d2,"OPENSSL_sk_set");
    FUN_00379a5c(0xf,0xc0102,0);
    return 0;
  }
  if ((-1 < (int)param_2) && ((int)param_2 < *param_1)) {
    lVar1 = (ulong)param_2 * 8;
    param_1[4] = 0;
    *(undefined8 *)(*(long *)(param_1 + 2) + lVar1) = param_3;
    return *(undefined8 *)(*(long *)(param_1 + 2) + lVar1);
  }
  FUN_00379868();
  FUN_0037995c("crypto/stack/stack.c",0x1d6,"OPENSSL_sk_set");
  FUN_00379a5c(0xf,0x80106,&DAT_001f80c8,(ulong)param_2);
  return 0;
}


// ===== 0040cc10  FUN_0040cc10 =====

void FUN_0040cc10(uint *param_1)

{
  if (((param_1 != (uint *)0x0) && (param_1[4] == 0)) &&
     (*(__compar_fn_t *)(param_1 + 6) != (__compar_fn_t)0x0)) {
    if (1 < (int)*param_1) {
      qsort(*(void **)(param_1 + 2),(ulong)*param_1,8,*(__compar_fn_t *)(param_1 + 6));
    }
    param_1[4] = 1;
    return;
  }
  return;
}


// ===== 0040cc6c  FUN_0040cc6c =====

undefined4 FUN_0040cc6c(long param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x10);
  }
  return 1;
}


// ===== 0040cc80  FUN_0040cc80 =====

undefined8 FUN_0040cc80(void)

{
  long lVar1;
  
  lVar1 = FUN_0037aa50(0x1600006b);
  if (lVar1 != 0) {
    return 1;
  }
  FUN_00379fc4(&DAT_0077bda0);
  return 1;
}


// ===== 0040ccbc  FUN_0040ccbc =====

undefined8 FUN_0040ccbc(long *param_1)

{
  if (*param_1 != 0) {
    *(int *)(param_1 + 4) = (int)param_1[4] + 1;
  }
  return 1;
}


// ===== 0040ccd8  FUN_0040ccd8 =====

void FUN_0040ccd8(long *param_1)

{
  int iVar1;
  long lVar2;
  
  if ((param_1 != (long *)0x0) && (*param_1 != 0)) {
    lVar2 = param_1[4];
    iVar1 = (int)lVar2 + -1;
    *(int *)(param_1 + 4) = iVar1;
    if (iVar1 != 0 && 0 < (int)lVar2) {
      return;
    }
    FUN_003d27b0(*param_1);
  }
  FUN_003c86b4(param_1,"crypto/store/store_meth.c",0x27);
  return;
}


// ===== 0040cd2c  FUN_0040cd2c =====

undefined8 FUN_0040cd2c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_50 [4];
  long local_30;
  
  local_30 = 0;
  local_50[0] = param_1;
  uVar1 = FUN_0040cd74(local_50);
  if (local_30 != 0) {
    FUN_003e8bb4(local_30);
  }
  return uVar1;
}


// ===== 0040cd74  FUN_0040cd74 =====

long FUN_0040cd74(undefined8 *param_1,char *param_2,char *param_3)

{
  undefined4 uVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  byte bVar11;
  undefined8 local_a8;
  undefined *local_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *local_80;
  undefined *puStack_78;
  undefined *local_70;
  long local_48;
  
  lVar8 = FUN_003b9c48(*param_1,0xf);
  lVar9 = FUN_003c3bb8(*param_1);
  pcVar2 = "";
  if (param_3 != (char *)0x0) {
    pcVar2 = param_3;
  }
  local_48 = 0;
  if ((lVar8 == 0) || (lVar9 == 0)) {
    FUN_00379868();
    FUN_0037995c("crypto/store/store_meth.c",0x12a,"inner_loader_fetch");
    FUN_00379a5c(0x2c,0x80106,0);
    return 0;
  }
  if (param_2 == (char *)0x0) {
    iVar6 = 0;
LAB_0040ce64:
    bVar5 = true;
  }
  else {
    iVar6 = FUN_003c3b2c(lVar9,param_2);
    if (iVar6 == 0) goto LAB_0040ce64;
    iVar7 = FUN_003e97ac(lVar8,0,iVar6,pcVar2,&local_48);
    if (iVar7 != 0) {
      bVar11 = 1;
      if (iVar6 == 0 && param_2 == (char *)0x0) {
        return local_48;
      }
      goto LAB_0040cf1c;
    }
    bVar5 = false;
  }
  local_70 = PTR_FUN_0077bf60;
  puStack_98 = PTR_FUN_0077bf38;
  local_a0 = PTR_FUN_0077bf30;
  puStack_88 = PTR_FUN_0077bf48;
  puStack_90 = PTR_FUN_0077bf40;
  puStack_78 = PTR_FUN_0077bf58;
  local_80 = PTR_FUN_0077bf50;
  local_a8 = 0;
  *(int *)(param_1 + 1) = iVar6;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xfe;
  param_1[2] = param_2;
  param_1[3] = pcVar2;
  local_48 = FUN_003c3560(*param_1,0x16,&local_a8,0,&local_a0,param_1);
  if (local_48 != 0) {
    if (bVar5) {
      iVar6 = FUN_003c3b2c(lVar9,param_2);
    }
    FUN_003e9864(lVar8,local_a8,iVar6,pcVar2,local_48,FUN_0040d744,FUN_0040d760);
  }
  bVar11 = *(byte *)(param_1 + 5) & 1;
  if (iVar6 == 0 && param_2 == (char *)0x0) {
    return local_48;
  }
LAB_0040cf1c:
  if (local_48 == 0) {
    uVar1 = 0x8010d;
    if (bVar11 == 0) {
      uVar1 = 0x8010c;
    }
    pcVar2 = "";
    if (bVar11 == 0) {
      pcVar2 = 
      "No store loader found. For standard store loaders you need at least one of the default or base providers available. Did you forget to load them? Info: "
      ;
    }
    if (param_2 == (char *)0x0) {
      param_2 = (char *)FUN_003c3dbc(lVar9,iVar6,0);
    }
    FUN_00379868();
    FUN_0037995c("crypto/store/store_meth.c",0x168,"inner_loader_fetch");
    uVar10 = FUN_003b9ecc(*param_1);
    pcVar3 = "<null>";
    if (param_2 != (char *)0x0) {
      pcVar3 = param_2;
    }
    pcVar4 = "<null>";
    if (param_3 != (char *)0x0) {
      pcVar4 = param_3;
    }
    FUN_00379a5c(0x2c,uVar1,"%s%s, Scheme (%s : %d), Properties (%s)",pcVar2,uVar10,pcVar3,iVar6,
                 pcVar4);
  }
  return local_48;
}


// ===== 0040cfe4  FUN_0040cfe4 =====

undefined8 FUN_0040cfe4(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_003b9c48(param_1,0xf);
  if (lVar1 != 0) {
    uVar2 = FUN_003e9730();
    return uVar2;
  }
  return 1;
}


// ===== 0040d00c  FUN_0040d00c =====

undefined8 FUN_0040d00c(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_003d40a4();
  lVar2 = FUN_003b9c48(uVar1,0xf);
  if (lVar2 != 0) {
    uVar1 = FUN_003e919c(lVar2,param_1);
    return uVar1;
  }
  return 1;
}


// ===== 0040d04c  FUN_0040d04c =====

undefined8 FUN_0040d04c(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    return *param_1;
  }
  FUN_00379868();
  FUN_0037995c("crypto/store/store_meth.c",0x19b,"OSSL_STORE_LOADER_get0_provider");
  FUN_00379a5c(0x2c,0xc0102,0);
  return 0;
}


// ===== 0040d09c  FUN_0040d09c =====

undefined8 FUN_0040d09c(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x10);
  }
  FUN_00379868();
  FUN_0037995c("crypto/store/store_meth.c",0x1a5,"OSSL_STORE_LOADER_get0_properties");
  FUN_00379a5c(0x2c,0xc0102,0);
  return 0;
}


// ===== 0040d0ec  FUN_0040d0ec =====

undefined4 FUN_0040d0ec(long param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 8);
  }
  FUN_00379868();
  FUN_0037995c("crypto/store/store_meth.c",0x1af,"ossl_store_loader_get_number");
  FUN_00379a5c(0x2c,0xc0102,0);
  return 0;
}


// ===== 0040d13c  FUN_0040d13c =====

undefined8 FUN_0040d13c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


// ===== 0040d144  FUN_0040d144 =====

ulong FUN_0040d144(ulong *param_1,undefined8 param_2)

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


// ===== 0040d188  FUN_0040d188 =====

void FUN_0040d188(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60 [4];
  long local_40;
  
  local_40 = 0;
  local_60[0] = param_1;
  FUN_0040cd74(local_60,0,0);
  local_70 = param_2;
  uStack_68 = param_3;
  if (local_40 != 0) {
    FUN_003e9304(local_40,FUN_0040d218,&local_70);
  }
  uVar1 = FUN_003b9c48(param_1,0xf);
  FUN_003e9304(uVar1,FUN_0040d218,&local_70);
  if (local_40 != 0) {
    FUN_003e8bb4();
  }
  return;
}


// ===== 0040d218  FUN_0040d218 =====

void FUN_0040d218(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0040d220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_3)(param_2,param_3[1]);
  return;
}


// ===== 0040d224  FUN_0040d224 =====

long * FUN_0040d224(long *param_1,undefined8 param_2,undefined8 param_3)

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


// ===== 0040d284  FUN_0040d284 =====

void FUN_0040d284(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (param_1[4] != 0) {
    return;
  }
  uVar1 = FUN_003e8af8(*param_1);
  param_1[4] = uVar1;
  return;
}


// ===== 0040d2bc  FUN_0040d2bc =====

void FUN_0040d2bc(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  if (param_1 == 0) {
    lVar1 = FUN_003b9c48(*param_2,0xf);
    if (lVar1 == 0) {
      return;
    }
  }
  FUN_003e8ca8();
  return;
}


// ===== 0040d2e4  FUN_0040d2e4 =====

void FUN_0040d2e4(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  if (param_1 == 0) {
    lVar1 = FUN_003b9c48(*param_2,0xf);
    if (lVar1 == 0) {
      return;
    }
  }
  FUN_003e8cb8();
  return;
}


// ===== 0040d30c  FUN_0040d30c =====

long FUN_0040d30c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long local_38;
  
  iVar1 = *(int *)(param_3 + 1);
  local_38 = 0;
  if (iVar1 == 0) {
    uVar2 = FUN_003c3bb8(*param_3);
    iVar1 = FUN_003c3b2c(uVar2,param_3[2]);
  }
  if ((param_1 != 0) || (param_1 = FUN_003b9c48(*param_3,0xf), param_1 != 0)) {
    iVar1 = FUN_003e93a4(param_1,iVar1,param_3[3],param_2,&local_38);
    param_1 = 0;
    if (iVar1 != 0) {
      param_1 = local_38;
    }
  }
  return param_1;
}


// ===== 0040d3a4  FUN_0040d3a4 =====

undefined8
FUN_0040d3a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 *param_6)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_003c3bb8(*param_6);
  if (((lVar2 != 0) && (iVar1 = FUN_003c3b2c(lVar2,param_4), iVar1 != 0)) &&
     ((param_1 != 0 || (param_1 = FUN_003b9c48(*param_6,0xf), param_1 != 0)))) {
    uVar3 = FUN_003e8cc8(param_1,param_3,iVar1,param_5,param_2,FUN_0040d744,FUN_0040d760);
    return uVar3;
  }
  return 0;
}


// ===== 0040d458  FUN_0040d458 =====

/* WARNING: Type propagation algorithm not settling */

long * FUN_0040d458(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  
  FUN_003d40a4(param_2);
  uVar8 = FUN_003c3bb8();
  iVar7 = FUN_003c3e1c(uVar8,0,*param_1);
  if (iVar7 != 0) {
    lVar12 = param_1[2];
    plVar9 = (long *)FUN_003c8474(0x78,"crypto/store/store_meth.c",0x32);
    if (plVar9 != (long *)0x0) {
      *plVar9 = param_2;
      *(undefined4 *)(plVar9 + 4) = 1;
      FUN_003d2754(param_2);
      lVar11 = param_1[3];
      plVar9[2] = param_1[1];
      plVar9[3] = lVar11;
      plVar1 = plVar9 + 0xb;
      plVar2 = plVar9 + 10;
      plVar3 = plVar9 + 9;
      plVar4 = plVar9 + 6;
      plVar5 = plVar9 + 5;
      plVar10 = (long *)(lVar12 + 8);
      *(int *)(plVar9 + 1) = iVar7;
      do {
        iVar7 = (int)plVar10[-1];
        if (iVar7 < 6) {
          if (2 < iVar7) {
            if (iVar7 == 3) {
              lVar12 = plVar9[7];
              plVar6 = plVar9 + 7;
            }
            else if (iVar7 == 4) {
              lVar12 = plVar9[8];
              plVar6 = plVar9 + 8;
            }
            else {
              if (iVar7 != 5) goto LAB_0040d518;
              lVar12 = *plVar3;
              plVar6 = plVar3;
            }
            goto joined_r0x0040d5d0;
          }
          if (iVar7 == 1) {
            lVar12 = *plVar5;
            plVar6 = plVar5;
            goto joined_r0x0040d5d0;
          }
          if (iVar7 == 2) {
            lVar12 = *plVar4;
            plVar6 = plVar4;
            goto joined_r0x0040d5d0;
          }
          if (iVar7 == 0) goto code_r0x0040d62c;
        }
        else {
          if (iVar7 < 8) {
            if (iVar7 == 6) {
              lVar12 = *plVar2;
              plVar6 = plVar2;
            }
            else {
              if (iVar7 != 7) goto LAB_0040d518;
              lVar12 = *plVar1;
              plVar6 = plVar1;
            }
          }
          else if (iVar7 == 8) {
            lVar12 = plVar9[0xc];
            plVar6 = plVar9 + 0xc;
          }
          else if (iVar7 == 9) {
            lVar12 = plVar9[0xd];
            plVar6 = plVar9 + 0xd;
          }
          else {
            if (iVar7 != 10) goto LAB_0040d518;
            lVar12 = plVar9[0xe];
            plVar6 = plVar9 + 0xe;
          }
joined_r0x0040d5d0:
          if (lVar12 == 0) {
            *plVar6 = *plVar10;
          }
        }
LAB_0040d518:
        plVar10 = plVar10 + 2;
      } while( true );
    }
    FUN_003c86b4(0,"crypto/store/store_meth.c",0x34);
  }
LAB_0040d6cc:
  *(byte *)(param_3 + 0x28) = *(byte *)(param_3 + 0x28) | 1;
  return (long *)0x0;
code_r0x0040d62c:
  if ((((*plVar5 != 0) || (*plVar4 != 0)) && (*plVar3 != 0)) && ((*plVar2 != 0 && (*plVar1 != 0))))
  {
    return plVar9;
  }
  if (param_2 != 0) {
    *(undefined4 *)(plVar9 + 4) = 0;
    FUN_003d27b0(param_2);
  }
  FUN_003c86b4(plVar9,"crypto/store/store_meth.c",0x27);
  FUN_00379868();
  FUN_0037995c("crypto/store/store_meth.c",0xef,"loader_from_algorithm");
  FUN_00379a5c(0x2c,0x74,0);
  goto LAB_0040d6cc;
}


// ===== 0040d6f0  FUN_0040d6f0 =====

void FUN_0040d6f0(long *param_1)

{
  int iVar1;
  long lVar2;
  
  if ((param_1 != (long *)0x0) && (*param_1 != 0)) {
    lVar2 = param_1[4];
    iVar1 = (int)lVar2 + -1;
    *(int *)(param_1 + 4) = iVar1;
    if (iVar1 != 0 && 0 < (int)lVar2) {
      return;
    }
    FUN_003d27b0(*param_1);
  }
  FUN_003c86b4(param_1,"crypto/store/store_meth.c",0x27);
  return;
}


// ===== 0040d744  FUN_0040d744 =====

undefined8 FUN_0040d744(long *param_1)

{
  if (*param_1 != 0) {
    *(int *)(param_1 + 4) = (int)param_1[4] + 1;
  }
  return 1;
}


// ===== 0040d760  FUN_0040d760 =====

void FUN_0040d760(long *param_1)

{
  int iVar1;
  long lVar2;
  
  if ((param_1 != (long *)0x0) && (*param_1 != 0)) {
    lVar2 = param_1[4];
    iVar1 = (int)lVar2 + -1;
    *(int *)(param_1 + 4) = iVar1;
    if (iVar1 != 0 && 0 < (int)lVar2) {
      return;
    }
    FUN_003d27b0(*param_1);
  }
  FUN_003c86b4(param_1,"crypto/store/store_meth.c",0x27);
  return;
}


// ===== 0040d7b4  FUN_0040d7b4 =====

undefined8 FUN_0040d7b4(void)

{
  long lVar1;
  
  lVar1 = FUN_0037aa50(0x14000068);
  if (lVar1 != 0) {
    return 1;
  }
  FUN_00379fc4(&DAT_0077bf68);
  return 1;
}


// ===== 0040d7f0  FUN_0040d7f0 =====

void FUN_0040d7f0(void)

{
  FUN_0040d7f8(0);
  return;
}


// ===== 0040d7f8  FUN_0040d7f8 =====

long * FUN_0040d7f8(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  plVar2 = (long *)FUN_003c8474(0x38,"crypto/ui/ui_lib.c",0x19);
  if (plVar2 == (long *)0x0) {
    return (long *)0x0;
  }
  lVar3 = FUN_003d5150();
  plVar2[6] = lVar3;
  if (lVar3 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/ui/ui_lib.c",0x20,"UI_new_method");
    FUN_00379a5c(0x28,0x8000f,0);
    uVar4 = 0x21;
  }
  else {
    if ((param_1 == 0) && (param_1 = FUN_0040f640(), param_1 == 0)) {
      param_1 = FUN_0040f61c();
    }
    *plVar2 = param_1;
    iVar1 = FUN_003c4ee0(0xb,plVar2,plVar2 + 3);
    if (iVar1 != 0) {
      return plVar2;
    }
    if ((*(byte *)(plVar2 + 5) >> 1 & 1) != 0) {
      (**(code **)(*plVar2 + 0x38))(plVar2,plVar2[2]);
    }
    FUN_0040ca6c(plVar2[1],FUN_0040d99c);
    FUN_003c525c(0xb,plVar2,plVar2 + 3);
    FUN_003d51ac(plVar2[6]);
    uVar4 = 0x51;
  }
  FUN_003c86b4(plVar2,"crypto/ui/ui_lib.c",uVar4);
  return (long *)0x0;
}


// ===== 0040d924  FUN_0040d924 =====

void FUN_0040d924(long *param_1)

{
  if (param_1 != (long *)0x0) {
    if ((*(byte *)(param_1 + 5) >> 1 & 1) != 0) {
      (**(code **)(*param_1 + 0x38))(param_1,param_1[2]);
    }
    FUN_0040ca6c(param_1[1],FUN_0040d99c);
    FUN_003c525c(0xb,param_1,param_1 + 3);
    FUN_003d51ac(param_1[6]);
    FUN_003c86b4(param_1,"crypto/ui/ui_lib.c",0x51);
    return;
  }
  return;
}


// ===== 0040d99c  FUN_0040d99c =====

void FUN_0040d99c(int *param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_003c86b4(*(undefined8 *)(param_1 + 2),"crypto/ui/ui_lib.c",0x35);
    if (*param_1 == 3) {
      FUN_003c86b4(*(undefined8 *)(param_1 + 10),"crypto/ui/ui_lib.c",0x38);
      FUN_003c86b4(*(undefined8 *)(param_1 + 0xc),"crypto/ui/ui_lib.c",0x39);
      FUN_003c86b4(*(undefined8 *)(param_1 + 0xe),"crypto/ui/ui_lib.c",0x3a);
    }
  }
  FUN_003c86b4(param_1,"crypto/ui/ui_lib.c",0x44);
  return;
}


// ===== 0040da28  FUN_0040da28 =====

void FUN_0040da28(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  FUN_0040da60(param_1,param_2,0,1,param_3,param_4,param_5,param_6,0);
  return;
}


// ===== 0040da60  FUN_0040da60 =====

ulong FUN_0040da60(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6,int param_7,int param_8,undefined8 param_9)

{
  int *piVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  
  piVar1 = (int *)FUN_0040f018(param_2,param_3,param_4,param_5,param_6);
  if (piVar1 == (int *)0x0) {
    return 0xffffffff;
  }
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 0) {
    lVar2 = FUN_0040bf0c();
    *(long *)(param_1 + 8) = lVar2;
    if (lVar2 != 0) goto LAB_0040dab0;
    if ((*(byte *)(piVar1 + 0x10) & 1) == 0) {
LAB_0040dba0:
      uVar4 = 0xffffffff;
      goto LAB_0040dba4;
    }
    FUN_003c86b4(*(undefined8 *)(piVar1 + 2),"crypto/ui/ui_lib.c",0x35);
    if (*piVar1 != 3) goto LAB_0040dba0;
    FUN_003c86b4(*(undefined8 *)(piVar1 + 10),"crypto/ui/ui_lib.c",0x38);
    uVar4 = 0xffffffff;
  }
  else {
LAB_0040dab0:
    piVar1[10] = param_7;
    piVar1[0xb] = param_8;
    *(undefined8 *)(piVar1 + 0xc) = param_9;
    uVar3 = FUN_0040c89c(lVar2,piVar1);
    if (0 < (int)uVar3) {
      return uVar3;
    }
    uVar4 = (int)uVar3 - 1;
    if ((*(byte *)(piVar1 + 0x10) & 1) == 0) goto LAB_0040dba4;
    FUN_003c86b4(*(undefined8 *)(piVar1 + 2),"crypto/ui/ui_lib.c",0x35);
    if (*piVar1 != 3) goto LAB_0040dba4;
    FUN_003c86b4(*(undefined8 *)(piVar1 + 10),"crypto/ui/ui_lib.c",0x38);
  }
  FUN_003c86b4(*(undefined8 *)(piVar1 + 0xc),"crypto/ui/ui_lib.c",0x39);
  FUN_003c86b4(*(undefined8 *)(piVar1 + 0xe),"crypto/ui/ui_lib.c",0x3a);
LAB_0040dba4:
  FUN_003c86b4(piVar1,"crypto/ui/ui_lib.c",0x44);
  return (ulong)uVar4;
}


// ===== 0040dbcc  FUN_0040dbcc =====

undefined8
FUN_0040dbcc(undefined8 param_1,long param_2,undefined4 param_3,undefined8 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined8 uVar1;
  
  if ((param_2 != 0) && (param_2 = FUN_003ca2f4(param_2,"crypto/ui/ui_lib.c",0xd2), param_2 == 0)) {
    return 0;
  }
  uVar1 = FUN_0040da60(param_1,param_2,1,1,param_3,param_4,param_5,param_6,0);
  return uVar1;
}


// ===== 0040dc74  FUN_0040dc74 =====

void FUN_0040dc74(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  FUN_0040da60(param_1,param_2,0,2,param_3,param_4,param_5,param_6,param_7);
  return;
}


// ===== 0040dcb0  FUN_0040dcb0 =====

undefined8
FUN_0040dcb0(undefined8 param_1,long param_2,undefined4 param_3,undefined8 param_4,
            undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  if ((param_2 != 0) && (param_2 = FUN_003ca2f4(param_2,"crypto/ui/ui_lib.c",0xec), param_2 == 0)) {
    return 0xffffffff;
  }
  uVar1 = FUN_0040da60(param_1,param_2,1,2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}


// ===== 0040dd5c  FUN_0040dd5c =====

void FUN_0040dd5c(void)

{
  FUN_0040dd6c();
  return;
}


// ===== 0040dd6c  FUN_0040dd6c =====

ulong FUN_0040dd6c(long param_1,undefined8 param_2,undefined8 param_3,byte *param_4,char *param_5,
                  undefined4 param_6,undefined4 param_7,undefined8 param_8)

{
  byte bVar1;
  char *pcVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  byte *pbVar7;
  
  if (param_4 == (byte *)0x0) {
    FUN_00379868();
    uVar6 = 0x9e;
  }
  else {
    if (param_5 != (char *)0x0) {
      bVar1 = *param_4;
      if (bVar1 != 0) {
        pbVar7 = param_4 + 1;
        do {
          pcVar2 = strchr(param_5,(uint)bVar1);
          if (pcVar2 != (char *)0x0) {
            FUN_00379868();
            FUN_0037995c("crypto/ui/ui_lib.c",0xa4,"general_allocate_boolean");
            FUN_00379a5c(0x28,0x68,0);
          }
          bVar1 = *pbVar7;
          pbVar7 = pbVar7 + 1;
        } while (bVar1 != 0);
      }
      piVar3 = (int *)FUN_0040f018(param_2,param_6,3,param_7,param_8);
      if (piVar3 == (int *)0x0) {
        return 0xffffffff;
      }
      lVar4 = *(long *)(param_1 + 8);
      if (lVar4 == 0) {
        lVar4 = FUN_0040bf0c();
        *(long *)(param_1 + 8) = lVar4;
        if (lVar4 == 0) {
          if (((*(byte *)(piVar3 + 0x10) & 1) != 0) &&
             (FUN_003c86b4(*(undefined8 *)(piVar3 + 2),"crypto/ui/ui_lib.c",0x35), *piVar3 == 3)) {
            FUN_003c86b4(*(undefined8 *)(piVar3 + 10),"crypto/ui/ui_lib.c",0x38);
            FUN_003c86b4(*(undefined8 *)(piVar3 + 0xc),"crypto/ui/ui_lib.c",0x39);
            FUN_003c86b4(*(undefined8 *)(piVar3 + 0xe),"crypto/ui/ui_lib.c",0x3a);
          }
          FUN_003c86b4(piVar3,"crypto/ui/ui_lib.c",0x44);
          return 0xffffffff;
        }
      }
      *(char **)(piVar3 + 0xe) = param_5;
      *(undefined8 *)(piVar3 + 10) = param_3;
      *(byte **)(piVar3 + 0xc) = param_4;
      uVar5 = FUN_0040c89c(lVar4,piVar3);
      if ((int)uVar5 < 1) {
        if (((*(byte *)(piVar3 + 0x10) & 1) != 0) &&
           (FUN_003c86b4(*(undefined8 *)(piVar3 + 2),"crypto/ui/ui_lib.c",0x35), *piVar3 == 3)) {
          FUN_003c86b4(*(undefined8 *)(piVar3 + 10),"crypto/ui/ui_lib.c",0x38);
          FUN_003c86b4(*(undefined8 *)(piVar3 + 0xc),"crypto/ui/ui_lib.c",0x39);
          FUN_003c86b4(*(undefined8 *)(piVar3 + 0xe),"crypto/ui/ui_lib.c",0x3a);
        }
        FUN_003c86b4(piVar3,"crypto/ui/ui_lib.c",0x44);
        return (ulong)((int)uVar5 - 1);
      }
      return uVar5;
    }
    FUN_00379868();
    uVar6 = 0xa0;
  }
  FUN_0037995c("crypto/ui/ui_lib.c",uVar6,"general_allocate_boolean");
  FUN_00379a5c(0x28,0xc0102,0);
  return 0xffffffff;
}


// ===== 0040dfc8  FUN_0040dfc8 =====

undefined8
FUN_0040dfc8(undefined8 param_1,long param_2,long param_3,long param_4,long param_5,
            undefined4 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    lVar1 = 0;
joined_r0x0040e028:
    if ((param_3 == 0) || (param_3 = FUN_003ca2f4(param_3,"crypto/ui/ui_lib.c",0x10f), param_3 != 0)
       ) {
      if ((param_4 == 0) ||
         (param_4 = FUN_003ca2f4(param_4,"crypto/ui/ui_lib.c",0x115), param_4 != 0)) {
        if (param_5 == 0) {
          lVar2 = 0;
        }
        else {
          lVar2 = FUN_003ca2f4(param_5,"crypto/ui/ui_lib.c",0x11b);
          if (lVar2 == 0) goto LAB_0040e094;
        }
        uVar3 = FUN_0040dd6c(param_1,lVar1,param_3,param_4,lVar2,1,param_6,param_7);
        return uVar3;
      }
      goto LAB_0040e094;
    }
  }
  else {
    lVar1 = FUN_003ca2f4(param_2,"crypto/ui/ui_lib.c",0x109);
    if (lVar1 != 0) goto joined_r0x0040e028;
    param_3 = 0;
  }
  param_4 = 0;
LAB_0040e094:
  FUN_003c86b4(lVar1,"crypto/ui/ui_lib.c",0x124);
  FUN_003c86b4(param_3,"crypto/ui/ui_lib.c",0x125);
  FUN_003c86b4(param_4,"crypto/ui/ui_lib.c",0x126);
  FUN_003c86b4(0,"crypto/ui/ui_lib.c",0x127);
  return 0xffffffff;
}


// ===== 0040e130  FUN_0040e130 =====

void FUN_0040e130(undefined8 param_1,undefined8 param_2)

{
  FUN_0040da60(param_1,param_2,0,4,0,0,0,0,0);
  return;
}


// ===== 0040e168  FUN_0040e168 =====

undefined8 FUN_0040e168(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if ((param_2 != 0) && (param_2 = FUN_003ca2f4(param_2,"crypto/ui/ui_lib.c",0x136), param_2 == 0))
  {
    return 0xffffffff;
  }
  uVar1 = FUN_0040da60(param_1,param_2,1,4,0,0,0,0,0);
  return uVar1;
}


// ===== 0040e1e8  FUN_0040e1e8 =====

void FUN_0040e1e8(undefined8 param_1,undefined8 param_2)

{
  FUN_0040da60(param_1,param_2,0,5,0,0,0,0,0);
  return;
}


// ===== 0040e220  FUN_0040e220 =====

undefined8 FUN_0040e220(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if ((param_2 != 0) && (param_2 = FUN_003ca2f4(param_2,"crypto/ui/ui_lib.c",0x14a), param_2 == 0))
  {
    return 0xffffffff;
  }
  uVar1 = FUN_0040da60(param_1,param_2,1,5,0,0,0,0,0);
  return uVar1;
}


// ===== 0040e2a0  FUN_0040e2a0 =====

long FUN_0040e2a0(long *param_1,char *param_2,char *param_3)

{
  long lVar1;
  size_t sVar2;
  size_t sVar3;
  code *UNRECOVERED_JUMPTABLE;
  int iVar4;
  long lVar5;
  undefined2 local_44 [2];
  undefined4 local_40;
  undefined2 local_3c;
  undefined4 uStack_38;
  undefined3 uStack_34;
  
  if (((param_1 != (long *)0x0) && (*param_1 != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x40), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0040e2e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
    return lVar1;
  }
  uStack_34 = 0x2072;
  local_3c = 0x20;
  uStack_38 = 0x65746e45;
  local_40 = 0x726f6620;
  local_44[0] = 0x3a;
  if (param_2 != (char *)0x0) {
    sVar2 = strlen(param_2);
    if (param_3 == (char *)0x0) {
      iVar4 = (int)sVar2 + 6;
    }
    else {
      sVar3 = strlen(param_3);
      iVar4 = (int)sVar2 + (int)sVar3 + 0xb;
    }
    lVar5 = (long)(iVar4 + 2);
    lVar1 = FUN_003c83a4(lVar5,"crypto/ui/ui_lib.c",0x166);
    if (lVar1 != 0) {
      FUN_003ca460(lVar1,&uStack_38,lVar5);
      FUN_003ca4e8(lVar1,param_2,lVar5);
      if (param_3 != (char *)0x0) {
        FUN_003ca4e8(lVar1,&local_40,lVar5);
        FUN_003ca4e8(lVar1,param_3,lVar5);
      }
      FUN_003ca4e8(lVar1,local_44,lVar5);
      return lVar1;
    }
  }
  return 0;
}


// ===== 0040e3f4  FUN_0040e3f4 =====

long FUN_0040e3f4(long *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 5);
  lVar1 = param_1[2];
  if ((uVar2 >> 1 & 1) != 0) {
    (**(code **)(*param_1 + 0x38))(param_1,lVar1);
    uVar2 = *(uint *)(param_1 + 5);
    lVar1 = 0;
  }
  param_1[2] = param_2;
  *(uint *)(param_1 + 5) = uVar2 & 0xfffffffd;
  return lVar1;
}


// ===== 0040e44c  FUN_0040e44c =====

undefined8 FUN_0040e44c(long *param_1)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(*param_1 + 0x30);
  if ((pcVar3 != (code *)0x0) && (*(long *)(*param_1 + 0x38) != 0)) {
    lVar1 = (*pcVar3)();
    if (lVar1 != 0) {
      uVar2 = *(uint *)(param_1 + 5);
      if ((uVar2 >> 1 & 1) != 0) {
        (**(code **)(*param_1 + 0x38))(param_1,param_1[2]);
        uVar2 = *(uint *)(param_1 + 5);
      }
      param_1[2] = lVar1;
      *(uint *)(param_1 + 5) = uVar2 | 2;
      return 0;
    }
    FUN_00379868();
    FUN_0037995c("crypto/ui/ui_lib.c",0x18c,"UI_dup_user_data");
    FUN_00379a5c(0x28,0x80028,0);
    return 0xffffffff;
  }
  FUN_00379868();
  FUN_0037995c("crypto/ui/ui_lib.c",0x186,"UI_dup_user_data");
  FUN_00379a5c(0x28,0x70,0);
  return 0xffffffff;
}


// ===== 0040e538  FUN_0040e538 =====

undefined8 FUN_0040e538(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


// ===== 0040e540  FUN_0040e540 =====

undefined8 FUN_0040e540(long param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 < 0) {
    FUN_00379868();
    FUN_0037995c("crypto/ui/ui_lib.c",0x19e,"UI_get0_result");
    FUN_00379a5c(0x28,0x67,0);
    return 0;
  }
  iVar1 = FUN_0040caf8(*(undefined8 *)(param_1 + 8));
  if (param_2 < iVar1) {
    piVar2 = (int *)FUN_0040cb0c(*(undefined8 *)(param_1 + 8),param_2);
    if (*piVar2 - 1U < 2) {
      return *(undefined8 *)(piVar2 + 6);
    }
  }
  else {
    FUN_00379868();
    FUN_0037995c("crypto/ui/ui_lib.c",0x1a2,"UI_get0_result");
    FUN_00379a5c(0x28,0x66,0);
  }
  return 0;
}


// ===== 0040e60c  FUN_0040e60c =====

undefined8 FUN_0040e60c(int *param_1)

{
  if (*param_1 - 1U < 2) {
    return *(undefined8 *)(param_1 + 6);
  }
  return 0;
}


// ===== 0040e62c  FUN_0040e62c =====

int FUN_0040e62c(long param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 < 0) {
    FUN_00379868();
    FUN_0037995c("crypto/ui/ui_lib.c",0x1ab,"UI_get_result_length");
    FUN_00379a5c(0x28,0x67,0);
    return -1;
  }
  iVar1 = FUN_0040caf8(*(undefined8 *)(param_1 + 8));
  if (param_2 < iVar1) {
    piVar2 = (int *)FUN_0040cb0c(*(undefined8 *)(param_1 + 8),param_2);
    if (*piVar2 - 1U < 2) {
      return piVar2[8];
    }
  }
  else {
    FUN_00379868();
    FUN_0037995c("crypto/ui/ui_lib.c",0x1af,"UI_get_result_length");
    FUN_00379a5c(0x28,0x66,0);
  }
  return -1;
}


// ===== 0040e6f8  FUN_0040e6f8 =====

int FUN_0040e6f8(int *param_1)

{
  if (*param_1 - 1U < 2) {
    return param_1[8];
  }
  return -1;
}


// ===== 0040e718  FUN_0040e718 =====

undefined4 FUN_0040e718(long *param_1)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  code *pcVar7;
  char *pcVar8;
  
  if ((*(code **)(*param_1 + 8) != (code *)0x0) &&
     (iVar3 = (**(code **)(*param_1 + 8))(param_1), iVar3 < 1)) {
    pcVar8 = "opening session";
LAB_0040e884:
    uVar6 = 0xffffffff;
    bVar1 = true;
    pcVar7 = *(code **)(*param_1 + 0x28);
    pcVar2 = pcVar8;
    goto joined_r0x0040e950;
  }
  if ((*(byte *)((long)param_1 + 0x29) & 1) != 0) {
    FUN_0040f10c(FUN_0040e95c,param_1);
  }
  iVar3 = FUN_0040caf8(param_1[1]);
  if (0 < iVar3) {
    iVar3 = 0;
    pcVar8 = "writing strings";
    do {
      pcVar7 = *(code **)(*param_1 + 0x10);
      if (pcVar7 != (code *)0x0) {
        uVar5 = FUN_0040cb0c(param_1[1],iVar3);
        iVar4 = (*pcVar7)(param_1,uVar5);
        if (iVar4 < 1) goto LAB_0040e884;
      }
      iVar3 = iVar3 + 1;
      iVar4 = FUN_0040caf8(param_1[1]);
    } while (iVar3 < iVar4);
  }
  if (*(code **)(*param_1 + 0x18) == (code *)0x0) {
LAB_0040e7f4:
    iVar3 = FUN_0040caf8(param_1[1]);
    if (0 < iVar3) {
      iVar3 = 0;
      pcVar8 = "reading strings";
      do {
        pcVar7 = *(code **)(*param_1 + 0x20);
        if (pcVar7 == (code *)0x0) goto LAB_0040e8a0;
        uVar5 = FUN_0040cb0c(param_1[1],iVar3);
        iVar4 = (*pcVar7)(param_1,uVar5);
        if (iVar4 == -1) goto LAB_0040e8a0;
        if (iVar4 == 0) goto LAB_0040e884;
        iVar3 = iVar3 + 1;
        iVar4 = FUN_0040caf8(param_1[1]);
      } while (iVar3 < iVar4);
      bVar1 = false;
      uVar6 = 0;
      pcVar8 = (char *)0x0;
      pcVar7 = *(code **)(*param_1 + 0x28);
      pcVar2 = "closing session";
      goto joined_r0x0040e950;
    }
    uVar6 = 0;
    pcVar8 = (char *)0x0;
    pcVar7 = *(code **)(*param_1 + 0x28);
    pcVar2 = "closing session";
  }
  else {
    iVar3 = (**(code **)(*param_1 + 0x18))(param_1);
    if (iVar3 != -1) {
      if (iVar3 == 0) {
        pcVar8 = "flushing";
        goto LAB_0040e884;
      }
      goto LAB_0040e7f4;
    }
LAB_0040e8a0:
    pcVar8 = "processing";
    uVar6 = 0xfffffffe;
    *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffffffe;
    pcVar7 = *(code **)(*param_1 + 0x28);
    pcVar2 = pcVar8;
  }
  bVar1 = false;
joined_r0x0040e950:
  if ((pcVar7 != (code *)0x0) && (iVar3 = (*pcVar7)(param_1), iVar3 < 1)) {
    bVar1 = true;
    pcVar8 = pcVar2;
  }
  if (bVar1) {
    FUN_00379868();
    FUN_0037995c("crypto/ui/ui_lib.c",0x210,"UI_process");
    FUN_00379a5c(0x28,0x6b,"while %s",pcVar8);
    uVar6 = 0xffffffff;
  }
  return uVar6;
}


// ===== 0040e95c  FUN_0040e95c =====

undefined8 FUN_0040e95c(undefined8 param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  local_20 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  local_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  local_60 = 5;
  if ((*(code **)(*param_3 + 0x10) != (code *)0x0) &&
     (uStack_58 = param_1, iVar1 = (**(code **)(*param_3 + 0x10))(param_3,&local_60), iVar1 < 1)) {
    return 0xffffffff;
  }
  return 0;
}


// ===== 0040e9c4  FUN_0040e9c4 =====

uint FUN_0040e9c4(long param_1,int param_2,long param_3)

{
  uint uVar1;
  
  if (param_1 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/ui/ui_lib.c",0x217,"UI_ctrl");
    FUN_00379a5c(0x28,0xc0102,0);
    return 0xffffffff;
  }
  if (param_2 != 2) {
    if (param_2 == 1) {
      uVar1 = *(uint *)(param_1 + 0x28);
      *(uint *)(param_1 + 0x28) = uVar1 & 0xfffffe00 | uVar1 & 0xff | (uint)(param_3 != 0) << 8;
      return uVar1 >> 8 & 1;
    }
    FUN_00379868();
    FUN_0037995c("crypto/ui/ui_lib.c",0x229,"UI_ctrl");
    FUN_00379a5c(0x28,0x6a,0);
    return 0xffffffff;
  }
  return *(uint *)(param_1 + 0x28) & 1;
}


// ===== 0040ea88  FUN_0040ea88 =====

void FUN_0040ea88(long param_1)

{
  FUN_003c5168(param_1 + 0x18);
  return;
}


// ===== 0040ea90  FUN_0040ea90 =====

void FUN_0040ea90(long param_1)

{
  FUN_003c4e94(param_1 + 0x18);
  return;
}


// ===== 0040ea98  FUN_0040ea98 =====

undefined8 FUN_0040ea98(undefined8 *param_1)

{
  return *param_1;
}


// ===== 0040eaa0  FUN_0040eaa0 =====

undefined8 FUN_0040eaa0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return param_2;
}


// ===== 0040eab0  FUN_0040eab0 =====

long * FUN_0040eab0(undefined8 param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)FUN_003c8474(0x58,"crypto/ui/ui_lib.c",0x246);
  if (plVar2 != (long *)0x0) {
    lVar3 = FUN_003ca2f4(param_1,"crypto/ui/ui_lib.c",0x247);
    *plVar2 = lVar3;
    if (lVar3 != 0) {
      iVar1 = FUN_003c4ee0(0xe,plVar2,plVar2 + 9);
      if (iVar1 != 0) {
        return plVar2;
      }
      if (*plVar2 == 0) {
        lVar3 = 0;
      }
      else {
        FUN_00379868();
        FUN_0037995c("crypto/ui/ui_lib.c",0x251,"UI_create_method");
        FUN_00379a5c(0x28,0x8000f,0);
        lVar3 = *plVar2;
      }
    }
    FUN_003c86b4(lVar3,"crypto/ui/ui_lib.c",0x252);
  }
  FUN_003c86b4(plVar2,"crypto/ui/ui_lib.c",0x254);
  return (long *)0x0;
}


// ===== 0040eb98  FUN_0040eb98 =====

void FUN_0040eb98(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_003c525c(0xe,param_1,param_1 + 9);
    FUN_003c86b4(*param_1,"crypto/ui/ui_lib.c",0x265);
    *param_1 = 0;
    FUN_003c86b4(param_1,"crypto/ui/ui_lib.c",0x267);
    return;
  }
  return;
}


// ===== 0040ebf4  FUN_0040ebf4 =====

undefined8 FUN_0040ebf4(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 8) = param_2;
    return 0;
  }
  return 0xffffffff;
}


// ===== 0040ec10  FUN_0040ec10 =====

undefined8 FUN_0040ec10(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x10) = param_2;
    return 0;
  }
  return 0xffffffff;
}


// ===== 0040ec2c  FUN_0040ec2c =====

undefined8 FUN_0040ec2c(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x18) = param_2;
    return 0;
  }
  return 0xffffffff;
}


// ===== 0040ec48  FUN_0040ec48 =====

undefined8 FUN_0040ec48(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x20) = param_2;
    return 0;
  }
  return 0xffffffff;
}


// ===== 0040ec64  FUN_0040ec64 =====

undefined8 FUN_0040ec64(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x28) = param_2;
    return 0;
  }
  return 0xffffffff;
}


// ===== 0040ec80  FUN_0040ec80 =====

undefined8 FUN_0040ec80(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x30) = param_2;
    *(undefined8 *)(param_1 + 0x38) = param_3;
    return 0;
  }
  return 0xffffffff;
}


// ===== 0040ec9c  FUN_0040ec9c =====

undefined8 FUN_0040ec9c(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x40) = param_2;
    return 0;
  }
  return 0xffffffff;
}


// ===== 0040ecb8  FUN_0040ecb8 =====

void FUN_0040ecb8(long param_1)

{
  FUN_003c5168(param_1 + 0x48);
  return;
}


// ===== 0040ecc0  FUN_0040ecc0 =====

long FUN_0040ecc0(long param_1)

{
  if (param_1 != 0) {
    param_1 = *(long *)(param_1 + 8);
  }
  return param_1;
}


// ===== 0040eccc  FUN_0040eccc =====

long FUN_0040eccc(long param_1)

{
  if (param_1 != 0) {
    param_1 = *(long *)(param_1 + 0x10);
  }
  return param_1;
}


// ===== 0040ecd8  FUN_0040ecd8 =====

long FUN_0040ecd8(long param_1)

{
  if (param_1 != 0) {
    param_1 = *(long *)(param_1 + 0x18);
  }
  return param_1;
}


// ===== 0040ece4  FUN_0040ece4 =====

long FUN_0040ece4(long param_1)

{
  if (param_1 != 0) {
    param_1 = *(long *)(param_1 + 0x20);
  }
  return param_1;
}


// ===== 0040ecf0  FUN_0040ecf0 =====

long FUN_0040ecf0(long param_1)

{
  if (param_1 != 0) {
    param_1 = *(long *)(param_1 + 0x28);
  }
  return param_1;
}


// ===== 0040ecfc  FUN_0040ecfc =====

long FUN_0040ecfc(long param_1)

{
  if (param_1 != 0) {
    param_1 = *(long *)(param_1 + 0x40);
  }
  return param_1;
}


// ===== 0040ed08  FUN_0040ed08 =====

long FUN_0040ed08(long param_1)

{
  if (param_1 != 0) {
    param_1 = *(long *)(param_1 + 0x30);
  }
  return param_1;
}


// ===== 0040ed14  FUN_0040ed14 =====

long FUN_0040ed14(long param_1)

{
  if (param_1 != 0) {
    param_1 = *(long *)(param_1 + 0x38);
  }
  return param_1;
}


// ===== 0040ed20  FUN_0040ed20 =====

void FUN_0040ed20(long param_1)

{
  FUN_003c4e94(param_1 + 0x48);
  return;
}


// ===== 0040ed28  FUN_0040ed28 =====

undefined4 FUN_0040ed28(undefined4 *param_1)

{
  return *param_1;
}


// ===== 0040ed30  FUN_0040ed30 =====

undefined4 FUN_0040ed30(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}


// ===== 0040ed38  FUN_0040ed38 =====

undefined8 FUN_0040ed38(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


// ===== 0040ed40  FUN_0040ed40 =====

undefined8 FUN_0040ed40(int *param_1)

{
  if (*param_1 == 3) {
    return *(undefined8 *)(param_1 + 10);
  }
  return 0;
}


// ===== 0040ed5c  FUN_0040ed5c =====

undefined8 FUN_0040ed5c(int *param_1)

{
  if (*param_1 == 2) {
    return *(undefined8 *)(param_1 + 0xc);
  }
  return 0;
}


// ===== 0040ed78  FUN_0040ed78 =====

int FUN_0040ed78(int *param_1)

{
  if (*param_1 - 1U < 2) {
    return param_1[10];
  }
  return -1;
}


// ===== 0040ed98  FUN_0040ed98 =====

int FUN_0040ed98(int *param_1)

{
  if (*param_1 - 1U < 2) {
    return param_1[0xb];
  }
  return -1;
}


// ===== 0040edb8  FUN_0040edb8 =====

void FUN_0040edb8(undefined8 param_1,undefined8 param_2,char *param_3)

{
  size_t sVar1;
  
  sVar1 = strlen(param_3);
  FUN_0040edfc(param_1,param_2,param_3,sVar1);
  return;
}


// ===== 0040edfc  FUN_0040edfc =====

undefined8 FUN_0040edfc(long param_1,int *param_2,byte *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  undefined8 uVar5;
  char *__s;
  uint uVar6;
  size_t __n;
  char *__s_00;
  byte *pbVar7;
  
  iVar2 = *param_2;
  uVar6 = *(uint *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = uVar6 & 0xfffffffe;
  if (1 < iVar2 - 1U) {
    if (iVar2 == 3) {
      if (*(undefined1 **)(param_2 + 6) == (undefined1 *)0x0) {
        FUN_00379868();
        uVar5 = 0x389;
        goto LAB_0040efc0;
      }
      **(undefined1 **)(param_2 + 6) = 0;
      uVar6 = (uint)*param_3;
      if (*param_3 != 0) {
        __s = *(char **)(param_2 + 0xc);
        pbVar7 = param_3 + 1;
        do {
          pcVar4 = strchr(__s,uVar6);
          if (pcVar4 != (char *)0x0) {
            cVar3 = *__s;
LAB_0040eff8:
            **(char **)(param_2 + 6) = cVar3;
            return 0;
          }
          __s_00 = *(char **)(param_2 + 0xe);
          pcVar4 = strchr(__s_00,uVar6);
          if (pcVar4 != (char *)0x0) {
            cVar3 = *__s_00;
            goto LAB_0040eff8;
          }
          uVar6 = (uint)*pbVar7;
          pbVar7 = pbVar7 + 1;
        } while (uVar6 != 0);
      }
    }
    return 0;
  }
  if (param_4 < param_2[10]) {
    *(uint *)(param_1 + 0x28) = uVar6 | 1;
    FUN_00379868();
    FUN_0037995c("crypto/ui/ui_lib.c",0x36b,"UI_set_result_ex");
    iVar2 = param_2[10];
    iVar1 = param_2[0xb];
    uVar5 = 0x65;
  }
  else {
    if (param_4 <= param_2[0xb]) {
      if (*(void **)(param_2 + 6) != (void *)0x0) {
        __n = (size_t)param_4;
        memcpy(*(void **)(param_2 + 6),param_3,__n);
        if (param_4 <= param_2[0xb]) {
          *(undefined1 *)(*(long *)(param_2 + 6) + __n) = 0;
        }
        *(size_t *)(param_2 + 8) = __n;
        return 0;
      }
      FUN_00379868();
      uVar5 = 0x37b;
LAB_0040efc0:
      FUN_0037995c("crypto/ui/ui_lib.c",uVar5,"UI_set_result_ex");
      FUN_00379a5c(0x28,0x69,0);
      return 0xffffffff;
    }
    *(uint *)(param_1 + 0x28) = uVar6 | 1;
    FUN_00379868();
    FUN_0037995c("crypto/ui/ui_lib.c",0x373,"UI_set_result_ex");
    iVar2 = param_2[10];
    iVar1 = param_2[0xb];
    uVar5 = 100;
  }
  FUN_00379a5c(0x28,uVar5,"You must type in %d to %d characters",iVar2,iVar1);
  return 0xffffffff;
}


// ===== 0040f018  FUN_0040f018 =====

int * FUN_0040f018(long param_1,int param_2,int param_3,int param_4,long param_5)

{
  int *piVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/ui/ui_lib.c",0x67,"general_allocate_prompt");
    uVar2 = 0xc0102;
  }
  else {
    if ((2 < param_3 - 1U) || (param_5 != 0)) {
      piVar1 = (int *)FUN_003c8474(0x48,"crypto/ui/ui_lib.c",0x6b);
      if (piVar1 == (int *)0x0) {
        return (int *)0x0;
      }
      *(long *)(piVar1 + 2) = param_1;
      piVar1[4] = param_4;
      piVar1[0x10] = (uint)(param_2 != 0);
      *piVar1 = param_3;
      *(long *)(piVar1 + 6) = param_5;
      return piVar1;
    }
    FUN_00379868();
    FUN_0037995c("crypto/ui/ui_lib.c",0x6a,"general_allocate_prompt");
    uVar2 = 0x69;
  }
  FUN_00379a5c(0x28,uVar2,0);
  return (int *)0x0;
}


// ===== 0040f10c  FUN_0040f10c =====

void FUN_0040f10c(code *param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  size_t sVar4;
  size_t sVar5;
  long lVar6;
  long lVar7;
  char acStack_1090 [4096];
  byte local_90 [4];
  undefined4 local_8c;
  undefined8 local_88;
  undefined1 *local_80;
  undefined8 uStack_78;
  undefined4 local_6c [3];
  
  local_6c[0] = FUN_003d52a8();
  do {
    lVar6 = FUN_0037a69c(&uStack_78,&local_8c,&local_88,&local_80,local_90);
    if (lVar6 == 0) {
      return;
    }
    memset(acStack_1090,0,0x1000);
    if ((local_90[0] >> 1 & 1) == 0) {
      local_80 = &DAT_001c717f;
    }
    puVar3 = (undefined *)FUN_003ca958(local_6c,4,0);
    puVar1 = &UNK_001e8ca4;
    if (puVar3 != (undefined *)0x0) {
      puVar1 = puVar3;
    }
    FUN_0037cd5c(acStack_1090,0x1000,&DAT_001e5509,puVar1);
    sVar4 = strlen(acStack_1090);
    lVar7 = (long)(int)sVar4;
    FUN_0037a7d0(lVar6,local_88,acStack_1090 + lVar7,0x1000 - lVar7);
    sVar5 = strlen(acStack_1090 + lVar7);
    lVar6 = (long)((int)sVar5 + (int)sVar4);
    FUN_0037cd5c(acStack_1090 + lVar6,0x1000 - lVar6,":%s:%d:%s\n",uStack_78,local_8c,local_80);
    FUN_003c86b4(puVar3,"crypto/err/err_prn.c",0x2b);
    sVar4 = strlen(acStack_1090);
    iVar2 = (*param_1)(acStack_1090,sVar4,param_2);
  } while (0 < iVar2);
  return;
}


// ===== 0040f27c  FUN_0040f27c =====

void FUN_0040f27c(char *param_1,char *param_2)

{
  char *pcVar1;
  char *__s;
  char cVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  bool bVar6;
  ulong uVar7;
  size_t sVar8;
  size_t sVar9;
  char *pcVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  char *pcVar14;
  char *__haystack;
  ulong uVar15;
  byte local_84 [4];
  char *local_80;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  
  local_68 = 0;
  local_80 = (char *)0x0;
  local_78 = 0;
  uVar7 = FUN_0037a744();
  pcVar1 = "";
  __s = pcVar1;
  if (param_1 != (char *)0x0) {
    __s = param_1;
  }
  if (uVar7 == 0) {
    FUN_00379868();
    FUN_0037995c(&DAT_001c717f,0,0);
    FUN_00379a5c(1,0,0);
  }
  uVar12 = (uint)(uVar7 >> 0x17) & 0x1ff;
  if ((int)uVar7 < 0) {
    uVar12 = 2;
  }
LAB_0040f328:
  do {
    FUN_0037a7b4(&local_68,&local_6c,&local_78,&local_80,local_84);
    if ((local_84[0] >> 1 & 1) == 0) {
      local_80 = "";
      sVar8 = strlen("");
      pcVar14 = pcVar1;
      if (0xf9b < sVar8) goto LAB_0040f3c0;
LAB_0040f378:
      sVar9 = strlen(__s);
      if (0xf9c - sVar8 <= sVar9) goto LAB_0040f3c0;
      uVar15 = (0xf9c - sVar8) + ~sVar9;
      if (*__s != '\0') goto LAB_0040f3cc;
LAB_0040f3a4:
      sVar8 = strlen(param_2);
      if (uVar15 < sVar8) {
        if (param_2 != (char *)0x0) {
          __haystack = param_2 + uVar15;
LAB_0040f444:
          if ((long)__haystack - (long)param_2 != 0) {
            lVar11 = FUN_003ca354(param_2,(long)__haystack - (long)param_2,"crypto/err/err_prn.c",
                                  0x7b);
            if (lVar11 == 0) {
              return;
            }
            FUN_0037aeac(2,__s,lVar11);
            FUN_003c86b4(lVar11,"crypto/err/err_prn.c",0x7f);
          }
          uVar5 = local_68;
          uVar4 = local_6c;
          uVar3 = local_78;
          FUN_00379868();
          FUN_0037995c(uVar5,uVar4,uVar3);
          FUN_00379a5c(uVar12,uVar7 & 0xffffffff,0);
          param_2 = __haystack;
          if (*__haystack == '\0') {
            return;
          }
          goto LAB_0040f328;
        }
        pcVar10 = (char *)0x0;
      }
      else {
        pcVar10 = param_2 + sVar8;
      }
LAB_0040f308:
      FUN_0037aeac(2,pcVar14,param_2);
      cVar2 = *pcVar10;
      param_2 = pcVar10;
    }
    else {
      sVar8 = strlen(local_80);
      pcVar14 = __s;
      if (sVar8 < 0xf9c) goto LAB_0040f378;
LAB_0040f3c0:
      uVar15 = 0;
      if (*__s == '\0') goto LAB_0040f3a4;
LAB_0040f3cc:
      pcVar10 = param_2;
      if (*param_2 == '\0') goto LAB_0040f308;
      bVar6 = false;
      do {
        __haystack = pcVar10;
        pcVar10 = strstr(__haystack,__s);
        if (pcVar10 == (char *)0x0) {
          sVar8 = strlen(__haystack);
          pcVar10 = __haystack + sVar8;
          cVar2 = *pcVar10;
          uVar13 = (long)pcVar10 - (long)param_2;
        }
        else {
          sVar8 = strlen(__s);
          pcVar10 = pcVar10 + sVar8;
          cVar2 = *pcVar10;
          bVar6 = cVar2 == '\0';
          uVar13 = (long)pcVar10 - (long)param_2;
        }
      } while ((cVar2 != '\0') && (uVar13 <= uVar15));
      if (uVar15 < uVar13) goto LAB_0040f444;
      if (!bVar6) goto LAB_0040f308;
      sVar8 = strlen(__s);
      lVar11 = FUN_003ca354(param_2,pcVar10 + (-(long)param_2 - sVar8),"crypto/err/err_prn.c",0x85);
      if (lVar11 == 0) {
        return;
      }
      FUN_0037aeac(2,pcVar14,lVar11);
      FUN_003c86b4(lVar11,"crypto/err/err_prn.c",0x8a);
      cVar2 = *pcVar10;
      param_2 = pcVar10;
    }
    if (cVar2 == '\0') {
      return;
    }
  } while( true );
}


// ===== 0040f55c  FUN_0040f55c =====

void FUN_0040f55c(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long local_28;
  
  if ((param_2 != 0) && (lVar2 = FUN_0037e4bc(param_2,3,0,&local_28), 0 < lVar2)) {
    if (*(char *)(local_28 + lVar2 + -1) != '\0') {
      iVar1 = FUN_0037df4c(param_2,&DAT_001c717f,1);
      if (iVar1 < 1) {
        return;
      }
      lVar2 = FUN_0037e4bc(param_2,3,0,&local_28);
    }
    if (1 < lVar2) {
      FUN_0040f27c(param_1,local_28);
    }
  }
  return;
}


// ===== 0040f5f8  FUN_0040f5f8 =====

void FUN_0040f5f8(undefined8 param_1)

{
  FUN_0040f10c(FUN_0040f608,param_1);
  return;
}


// ===== 0040f608  FUN_0040f608 =====

void FUN_0040f608(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_0037df4c(param_3,param_1,param_2);
  return;
}


// ===== 0040f61c  FUN_0040f61c =====

undefined ** FUN_0040f61c(void)

{
  return &PTR_s_OpenSSL_NULL_UI_0077c048;
}


// ===== 0040f628  FUN_0040f628 =====

undefined ** FUN_0040f628(void)

{
  return &PTR_s_OpenSSL_default_user_interface_007a8c58;
}


// ===== 0040f634  FUN_0040f634 =====

void FUN_0040f634(undefined *param_1)

{
  PTR_PTR_s_OpenSSL_default_user_interface_007a8cb0 = param_1;
  return;
}


// ===== 0040f640  FUN_0040f640 =====

undefined * FUN_0040f640(void)

{
  return PTR_PTR_s_OpenSSL_default_user_interface_007a8cb0;
}


// ===== 0040f64c  FUN_0040f64c =====

undefined8 FUN_0040f64c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  
  uVar2 = FUN_003d518c(*(undefined8 *)(param_1 + 0x30));
  if ((int)uVar2 != 0) {
    DAT_007ac380 = 1;
    DAT_007ac390 = fopen("/dev/tty","r");
    if (DAT_007ac390 == (FILE *)0x0) {
      DAT_007ac390 = *(FILE **)PTR_stdin_007a1c30;
    }
    DAT_007ac398 = fopen("/dev/tty","w");
    if (DAT_007ac398 == (FILE *)0x0) {
      DAT_007ac398 = *(FILE **)PTR_stderr_007a1438;
    }
    iVar1 = fileno(DAT_007ac390);
    iVar1 = tcgetattr(iVar1,(termios *)&DAT_007ac3a0);
    if (iVar1 == -1) {
      piVar3 = (int *)__errno();
      iVar1 = *piVar3;
      if (iVar1 < 0x13) {
        if (((iVar1 != 1) && (iVar1 != 5)) && (iVar1 != 6)) {
LAB_0040f750:
          FUN_00379868();
          FUN_0037995c("crypto/ui/ui_openssl.c",0x1cb,"open_console");
          FUN_00379a5c(0x28,0x6c,"errno=%d",*piVar3);
          return 0;
        }
      }
      else if (((iVar1 != 0x13) && (iVar1 != 0x16)) && (iVar1 != 0x19)) goto LAB_0040f750;
      DAT_007ac380 = 0;
    }
    uVar2 = 1;
  }
  return uVar2;
}


// ===== 0040f798  FUN_0040f798 =====

undefined8 FUN_0040f798(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  char *__s;
  
  uVar1 = FUN_0040ed28(param_2);
  if ((uVar1 & 0xfffffffe) == 4) {
    __s = (char *)FUN_0040ed38(param_2);
    fputs(__s,DAT_007ac398);
    fflush(DAT_007ac398);
  }
  return 1;
}


// ===== 0040f7e8  FUN_0040f7e8 =====

undefined8 FUN_0040f7e8(undefined8 param_1,undefined8 param_2)

{
  FILE *__stream;
  int iVar1;
  uint uVar2;
  char *pcVar3;
  undefined8 uVar4;
  char *__s2;
  
  iVar1 = FUN_0040ed28(param_2);
  __stream = DAT_007ac398;
  if (iVar1 == 1) {
    pcVar3 = (char *)FUN_0040ed38(param_2);
    fputs(pcVar3,DAT_007ac398);
    fflush(DAT_007ac398);
    uVar2 = FUN_0040ed30(param_2);
    uVar4 = FUN_0040f9e8(param_1,param_2,uVar2 & 1,1);
    return uVar4;
  }
  if (iVar1 == 2) {
    uVar4 = FUN_0040ed38(param_2);
    fprintf(__stream,"Verifying - %s",uVar4);
    fflush(DAT_007ac398);
    uVar2 = FUN_0040ed30(param_2);
    uVar4 = FUN_0040f9e8(param_1,param_2,uVar2 & 1,1);
    if (0 < (int)uVar4) {
      pcVar3 = (char *)FUN_0040e60c(param_2);
      __s2 = (char *)FUN_0040ed5c(param_2);
      iVar1 = strcmp(pcVar3,__s2);
      if (iVar1 == 0) {
        return 1;
      }
      fwrite("Verify failure\n",0xf,1,DAT_007ac398);
      fflush(DAT_007ac398);
      uVar4 = 0;
    }
    return uVar4;
  }
  if (iVar1 != 3) {
    return 1;
  }
  pcVar3 = (char *)FUN_0040ed38(param_2);
  fputs(pcVar3,DAT_007ac398);
  pcVar3 = (char *)FUN_0040ed40(param_2);
  fputs(pcVar3,DAT_007ac398);
  fflush(DAT_007ac398);
  uVar2 = FUN_0040ed30(param_2);
  uVar4 = FUN_0040f9e8(param_1,param_2,uVar2 & 1,0);
  return uVar4;
}


// ===== 0040f97c  FUN_0040f97c =====

undefined8 FUN_0040f97c(long param_1)

{
  if (DAT_007ac390 != *(FILE **)PTR_stdin_007a1c30) {
    fclose(DAT_007ac390);
  }
  if (DAT_007ac398 != *(FILE **)PTR_stderr_007a1438) {
    fclose(DAT_007ac398);
  }
  FUN_003d519c(*(undefined8 *)(param_1 + 0x30));
  return 1;
}


// ===== 0040f9e8  FUN_0040f9e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0040f9e8(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  FILE *__stream;
  int iVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  _union_1457 local_460;
  code *pcStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  char acStack_55 [5];
  
  DAT_007ac388 = 0;
  DAT_007ac384 = 0;
  local_460.sa_handler = (__sighandler_t)0x0;
  uStack_448 = 0;
  uStack_450 = 0;
  pcStack_458 = FUN_0040ffc0;
  sigaction(1,(sigaction *)&local_460,(sigaction *)&DAT_007ac408);
  sigaction(2,(sigaction *)&local_460,(sigaction *)&DAT_007ac428);
  sigaction(3,(sigaction *)&local_460,(sigaction *)&DAT_007ac448);
  sigaction(4,(sigaction *)&local_460,(sigaction *)&DAT_007ac468);
  sigaction(5,(sigaction *)&local_460,(sigaction *)&DAT_007ac488);
  sigaction(6,(sigaction *)&local_460,(sigaction *)&DAT_007ac4a8);
  sigaction(7,(sigaction *)&local_460,(sigaction *)&DAT_007ac4c8);
  sigaction(8,(sigaction *)&local_460,(sigaction *)&DAT_007ac4e8);
  sigaction(0xb,(sigaction *)&local_460,(sigaction *)&DAT_007ac548);
  sigaction(0xd,(sigaction *)&local_460,(sigaction *)&DAT_007ac588);
  sigaction(0xe,(sigaction *)&local_460,(sigaction *)&DAT_007ac5a8);
  sigaction(0xf,(sigaction *)&local_460,(sigaction *)&DAT_007ac5c8);
  sigaction(0x10,(sigaction *)&local_460,(sigaction *)&DAT_007ac5e8);
  sigaction(0x11,(sigaction *)&local_460,(sigaction *)&DAT_007ac608);
  sigaction(0x12,(sigaction *)&local_460,(sigaction *)&DAT_007ac628);
  sigaction(0x13,(sigaction *)&local_460,(sigaction *)&DAT_007ac648);
  sigaction(0x14,(sigaction *)&local_460,(sigaction *)&DAT_007ac668);
  sigaction(0x15,(sigaction *)&local_460,(sigaction *)&DAT_007ac688);
  sigaction(0x16,(sigaction *)&local_460,(sigaction *)&DAT_007ac6a8);
  sigaction(0x17,(sigaction *)&local_460,(sigaction *)&DAT_007ac6c8);
  sigaction(0x18,(sigaction *)&local_460,(sigaction *)&DAT_007ac6e8);
  sigaction(0x19,(sigaction *)&local_460,(sigaction *)&DAT_007ac708);
  sigaction(0x1a,(sigaction *)&local_460,(sigaction *)&DAT_007ac728);
  sigaction(0x1b,(sigaction *)&local_460,(sigaction *)&DAT_007ac748);
  sigaction(0x1c,(sigaction *)&local_460,(sigaction *)&DAT_007ac768);
  sigaction(0x1d,(sigaction *)&local_460,(sigaction *)&DAT_007ac788);
  sigaction(0x1e,(sigaction *)&local_460,(sigaction *)&DAT_007ac7a8);
  sigaction(0x1f,(sigaction *)&local_460,(sigaction *)&DAT_007ac7c8);
  signal(0x1c,(__sighandler_t)0x0);
  DAT_007ac384 = 1;
  if (param_3 == 0) {
    DAT_007ac3e4 = DAT_007ac3c0;
    _DAT_007ac3c4 = _DAT_007ac3a0;
    uRam00000000007ac3dc = uRam00000000007ac3b8;
    _DAT_007ac3d4 = _DAT_007ac3b0;
    uRam00000000007ac3cc = uRam00000000007ac3a8 & 0xfffffff7ffffffff;
    if (DAT_007ac380 != '\x01') goto LAB_0040fc6c;
    iVar1 = fileno(DAT_007ac390);
    iVar1 = tcsetattr(iVar1,0,(termios *)&DAT_007ac3c4);
    if (iVar1 != -1) goto LAB_0040fc6c;
    uVar2 = -(uint)(DAT_007ac388 == 2);
  }
  else {
LAB_0040fc6c:
    DAT_007ac384 = 2;
    local_460.sa_handler = local_460.sa_handler & 0xffffffffffffff00;
    pcVar3 = fgets((char *)&local_460,0x3ff,DAT_007ac390);
    if (((pcVar3 == (char *)0x0) ||
        (iVar1 = feof(DAT_007ac390), __stream = DAT_007ac390, iVar1 != 0)) ||
       (iVar1 = ferror(DAT_007ac390), iVar1 != 0)) {
LAB_0040fca8:
      uVar2 = 0;
      if (DAT_007ac388 == 2) {
        uVar2 = 0xffffffff;
      }
    }
    else {
      pcVar3 = strchr((char *)&local_460,10);
      if (pcVar3 == (char *)0x0) {
        do {
          pcVar3 = fgets(acStack_55,4,__stream);
          if (pcVar3 == (char *)0x0) goto LAB_0040fca8;
          pcVar3 = strchr(acStack_55,10);
        } while (pcVar3 == (char *)0x0);
      }
      else if (param_4 != 0) {
        *pcVar3 = '\0';
      }
      uVar2 = FUN_0040edb8(param_1,param_2,&local_460);
      uVar2 = ~uVar2 >> 0x1f;
      if (DAT_007ac388 == 2) {
        uVar2 = 0xffffffff;
      }
    }
    uVar4 = uVar2;
    if (param_3 != 0) goto LAB_0040fcc8;
  }
  fputc(10,DAT_007ac398);
  uVar4 = uVar2;
  if ((param_3 == 0) && (1 < DAT_007ac384)) {
    uRam00000000007ac3cc = uRam00000000007ac3a8;
    _DAT_007ac3c4 = _DAT_007ac3a0;
    uRam00000000007ac3dc = uRam00000000007ac3b8;
    _DAT_007ac3d4 = _DAT_007ac3b0;
    DAT_007ac3e4 = DAT_007ac3c0;
    if (DAT_007ac380 == '\x01') {
      iVar1 = fileno(DAT_007ac390);
      iVar1 = tcsetattr(iVar1,0,(termios *)&DAT_007ac3c4);
      uVar4 = 0;
      if (iVar1 != -1) {
        uVar4 = uVar2;
      }
    }
  }
LAB_0040fcc8:
  if (0 < DAT_007ac384) {
    sigaction(1,(sigaction *)&DAT_007ac408,(sigaction *)0x0);
    sigaction(2,(sigaction *)&DAT_007ac428,(sigaction *)0x0);
    sigaction(3,(sigaction *)&DAT_007ac448,(sigaction *)0x0);
    sigaction(4,(sigaction *)&DAT_007ac468,(sigaction *)0x0);
    sigaction(5,(sigaction *)&DAT_007ac488,(sigaction *)0x0);
    sigaction(6,(sigaction *)&DAT_007ac4a8,(sigaction *)0x0);
    sigaction(7,(sigaction *)&DAT_007ac4c8,(sigaction *)0x0);
    sigaction(8,(sigaction *)&DAT_007ac4e8,(sigaction *)0x0);
    sigaction(9,(sigaction *)&DAT_007ac508,(sigaction *)0x0);
    sigaction(0xb,(sigaction *)&DAT_007ac548,(sigaction *)0x0);
    sigaction(0xd,(sigaction *)&DAT_007ac588,(sigaction *)0x0);
    sigaction(0xe,(sigaction *)&DAT_007ac5a8,(sigaction *)0x0);
    sigaction(0xf,(sigaction *)&DAT_007ac5c8,(sigaction *)0x0);
    sigaction(0x10,(sigaction *)&DAT_007ac5e8,(sigaction *)0x0);
    sigaction(0x11,(sigaction *)&DAT_007ac608,(sigaction *)0x0);
    sigaction(0x12,(sigaction *)&DAT_007ac628,(sigaction *)0x0);
    sigaction(0x13,(sigaction *)&DAT_007ac648,(sigaction *)0x0);
    sigaction(0x14,(sigaction *)&DAT_007ac668,(sigaction *)0x0);
    sigaction(0x15,(sigaction *)&DAT_007ac688,(sigaction *)0x0);
    sigaction(0x16,(sigaction *)&DAT_007ac6a8,(sigaction *)0x0);
    sigaction(0x17,(sigaction *)&DAT_007ac6c8,(sigaction *)0x0);
    sigaction(0x18,(sigaction *)&DAT_007ac6e8,(sigaction *)0x0);
    sigaction(0x19,(sigaction *)&DAT_007ac708,(sigaction *)0x0);
    sigaction(0x1a,(sigaction *)&DAT_007ac728,(sigaction *)0x0);
    sigaction(0x1b,(sigaction *)&DAT_007ac748,(sigaction *)0x0);
    sigaction(0x1c,(sigaction *)&DAT_007ac768,(sigaction *)0x0);
    sigaction(0x1d,(sigaction *)&DAT_007ac788,(sigaction *)0x0);
    sigaction(0x1e,(sigaction *)&DAT_007ac7a8,(sigaction *)0x0);
    sigaction(0x1f,(sigaction *)&DAT_007ac7c8,(sigaction *)0x0);
  }
  FUN_003c89b8(&local_460,0x400);
  return uVar4;
}


// ===== 0040ffc0  FUN_0040ffc0 =====

void FUN_0040ffc0(undefined4 param_1)

{
  DAT_007ac388 = param_1;
  return;
}


// ===== 0040ffcc  FUN_0040ffcc =====

int FUN_0040ffcc(undefined8 param_1,int param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined1 auStack_450 [1024];
  
  iVar3 = param_2;
  if (0x3ff < param_2) {
    iVar3 = 0x400;
  }
  if (param_2 < 1) {
    iVar1 = -1;
  }
  else {
    lVar2 = FUN_0040d7f0();
    if (lVar2 == 0) {
      iVar1 = -2;
    }
    else {
      iVar1 = FUN_0040da28(lVar2,param_3,0,param_1,0,iVar3 + -1);
      if ((param_4 != 0) && (-1 < iVar1)) {
        iVar1 = FUN_0040dc74(lVar2,param_3,0,auStack_450,0,iVar3 + -1,param_1);
      }
      if (-1 < iVar1) {
        iVar1 = FUN_0040e718(lVar2);
      }
      FUN_0040d924(lVar2);
    }
  }
  FUN_003c89b8(auStack_450,0x400);
  return iVar1;
}


// ===== 004100b4  FUN_004100b4 =====

int FUN_004100b4(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,int param_5)

{
  int iVar1;
  long lVar2;
  
  if (param_3 < 1) {
    return -1;
  }
  lVar2 = FUN_0040d7f0();
  if (lVar2 != 0) {
    iVar1 = FUN_0040da28(lVar2,param_4,0,param_1,0,param_3 + -1);
    if ((param_5 != 0) && (-1 < iVar1)) {
      iVar1 = FUN_0040dc74(lVar2,param_4,0,param_2,0,param_3 + -1,param_1);
    }
    if (-1 < iVar1) {
      iVar1 = FUN_0040e718(lVar2);
    }
    FUN_0040d924(lVar2);
    return iVar1;
  }
  return -2;
}


// ===== 0041018c  FUN_0041018c =====

undefined8 * FUN_0041018c(undefined *param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)FUN_003c8474(0x10,"crypto/ui/ui_util.c",0x93);
  puVar4 = puVar3;
  if ((((((puVar3 != (undefined8 *)0x0) &&
         (puVar4 = (undefined8 *)FUN_0040eab0("PEM password callback wrapper"),
         puVar4 != (undefined8 *)0x0)) && (iVar2 = FUN_0040ebf4(puVar4,FUN_004102c4), -1 < iVar2))
       && ((iVar2 = FUN_0040ec48(puVar4,FUN_004102cc), -1 < iVar2 &&
           (iVar2 = FUN_0040ec10(puVar4,FUN_00410398), -1 < iVar2)))) &&
      ((iVar2 = FUN_0040ec64(puVar4,FUN_004103a0), -1 < iVar2 &&
       ((iVar2 = FUN_003d51c8(&DAT_007ac7ec,FUN_004103a8), iVar2 != 0 && (DAT_007ac7e8 != '\0'))))))
     && (iVar2 = FUN_0040ecb8(puVar4,DAT_007a8cb8,puVar3), puVar1 = PTR_FUN_007a1ba8, iVar2 != 0)) {
    *(undefined4 *)(puVar3 + 1) = param_2;
    if (param_1 != (undefined *)0x0) {
      puVar1 = param_1;
    }
    *puVar3 = puVar1;
    return puVar4;
  }
  FUN_0040eb98(puVar4);
  FUN_003c86b4(puVar3,"crypto/ui/ui_util.c",0x9c);
  return (undefined8 *)0x0;
}


// ===== 004102c4  FUN_004102c4 =====

undefined8 FUN_004102c4(void)

{
  return 1;
}


// ===== 004102cc  FUN_004102cc =====

ulong FUN_004102cc(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  code *pcVar7;
  undefined1 auStack_441 [1025];
  
  iVar2 = FUN_0040ed28(param_2);
  if (iVar2 == 1) {
    uVar4 = FUN_0040ea98(param_1);
    puVar5 = (undefined8 *)FUN_0040ed20(uVar4,DAT_007a8cb8);
    iVar2 = FUN_0040ed98(param_2);
    pcVar7 = (code *)*puVar5;
    uVar1 = *(undefined4 *)(puVar5 + 1);
    if (0x3ff < iVar2) {
      iVar2 = 0x400;
    }
    uVar4 = FUN_0040e538(param_1);
    uVar3 = (*pcVar7)(auStack_441,iVar2,uVar1,uVar4);
    uVar6 = (ulong)uVar3;
    if (-1 < (int)uVar3) {
      auStack_441[uVar6] = 0;
      uVar3 = FUN_0040edfc(param_1,param_2,auStack_441);
      uVar6 = (ulong)(~uVar3 >> 0x1f);
    }
  }
  else {
    uVar6 = 1;
  }
  return uVar6;
}


// ===== 00410398  FUN_00410398 =====

undefined8 FUN_00410398(void)

{
  return 1;
}


// ===== 004103a0  FUN_004103a0 =====

undefined8 FUN_004103a0(void)

{
  return 1;
}


// ===== 004103a8  FUN_004103a8 =====

void FUN_004103a8(void)

{
  DAT_007a8cb8 = FUN_003c4c90(0xe,0,0,FUN_004103f4,FUN_004103f8,FUN_00410444);
  DAT_007ac7e8 = 1;
  return;
}


// ===== 004103f4  FUN_004103f4 =====

void FUN_004103f4(void)

{
  return;
}


// ===== 004103f8  FUN_004103f8 =====

undefined8 FUN_004103f8(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  
  if (*param_3 != 0) {
    lVar1 = FUN_003ca404(*param_3,0x10,"crypto/ui/ui_util.c",0x4b);
    *param_3 = lVar1;
    if (lVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


// ===== 00410444  FUN_00410444 =====

void FUN_00410444(undefined8 param_1,undefined8 param_2)

{
  FUN_003c86b4(param_2,"crypto/ui/ui_util.c",0x55);
  return;
}


// ===== 00410458  FUN_00410458 =====

ulong FUN_00410458(char *param_1,uint param_2,int param_3,char *param_4)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  size_t sVar4;
  char *pcVar5;
  
  if (param_4 != (char *)0x0) {
    sVar4 = strlen(param_4);
    uVar1 = (uint)sVar4;
    if ((int)param_2 <= (int)(uint)sVar4) {
      uVar1 = param_2;
    }
    memcpy(param_1,param_4,(long)(int)uVar1);
    return (ulong)uVar1;
  }
  pcVar5 = (char *)FUN_00412300();
  pcVar2 = "Enter PEM pass phrase:";
  if (pcVar5 != (char *)0x0) {
    pcVar2 = pcVar5;
  }
  iVar3 = FUN_0041232c(param_1,(ulong)(param_3 != 0) << 2,(ulong)param_2,pcVar2,param_3);
  if (iVar3 != 0) {
    FUN_00379868();
    FUN_0037995c("crypto/pem/pem_lib.c",0x3e,"PEM_def_callback");
    FUN_00379a5c(9,0x6d,0);
    memset(param_1,0,(ulong)param_2);
    return 0xffffffff;
  }
  sVar4 = strlen(param_1);
  return sVar4 & 0xffffffff;
}


// ===== 00410558  FUN_00410558 =====

void FUN_00410558(char *param_1,int param_2)

{
  size_t sVar1;
  char *pcVar2;
  
  sVar1 = strlen(param_1);
  if (param_2 == 10) {
    pcVar2 = "ENCRYPTED";
  }
  else if (param_2 == 0x14) {
    pcVar2 = "MIC-ONLY";
  }
  else if (param_2 == 0x1e) {
    pcVar2 = "MIC-CLEAR";
  }
  else {
    pcVar2 = "BAD-TYPE";
  }
  FUN_0037cd5c(param_1 + sVar1,0x400 - sVar1,"Proc-Type: 4,%s\n",pcVar2);
  return;
}


// ===== 004105d4  FUN_004105d4 =====

void FUN_004105d4(char *param_1,undefined8 param_2,int param_3,undefined1 *param_4)

{
  uint uVar1;
  size_t sVar2;
  char *pcVar3;
  int iVar4;
  long lVar5;
  
  sVar2 = strlen(param_1);
  iVar4 = 0x400 - (int)sVar2;
  uVar1 = FUN_0037cd5c(param_1 + sVar2,(long)iVar4,"DEK-Info: %s,",param_2);
  if (0 < (int)uVar1) {
    pcVar3 = param_1 + sVar2 + uVar1;
    iVar4 = iVar4 - uVar1;
    if (0 < param_3) {
      lVar5 = (long)param_3;
      do {
        uVar1 = FUN_0037cd5c(pcVar3,(long)iVar4,&DAT_001e4bda,*param_4);
        if ((int)uVar1 < 1) {
          return;
        }
        pcVar3 = pcVar3 + uVar1;
        lVar5 = lVar5 + -1;
        iVar4 = iVar4 - uVar1;
        param_4 = param_4 + 1;
      } while (lVar5 != 0);
    }
    if (1 < iVar4) {
      pcVar3[0] = '\n';
      pcVar3[1] = '\0';
    }
  }
  return;
}


// ===== 00410694  FUN_00410694 =====

void FUN_00410694(void)

{
  FUN_0041069c();
  return;
}


// ===== 0041069c  FUN_0041069c =====

undefined4
FUN_0041069c(ulong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,char *param_5
            ,undefined8 param_6,undefined8 param_7,undefined8 param_8,uint param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  size_t sVar8;
  long lVar9;
  uint uVar10;
  undefined4 uVar11;
  char *__s1;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  char *local_80;
  undefined1 auStack_78 [24];
  
  __s1 = (char *)0x0;
  local_88 = 0;
  local_80 = (char *)0x0;
  local_98 = 0;
  local_90 = 0;
LAB_00410710:
  do {
    if ((param_9 & 1) == 0) {
      FUN_003c86b4(__s1,"crypto/pem/pem_lib.c",0xfe);
      FUN_003c86b4(local_88,"crypto/pem/pem_lib.c",0xff);
      FUN_003c86b4(local_90,"crypto/pem/pem_lib.c",0x100);
    }
    else {
      FUN_003c9d0c(param_1,__s1,0,"crypto/pem/pem_lib.c",0xfe);
      FUN_003c9d0c(local_88,0,"crypto/pem/pem_lib.c",0xff);
      FUN_003c9d0c(local_90,local_98,"crypto/pem/pem_lib.c",0x100);
    }
    iVar4 = FUN_00411834(param_6,&local_80,&local_88,&local_90,&local_98,param_9);
    __s1 = local_80;
    if (iVar4 == 0) {
      uVar7 = FUN_0037a6b8();
      uVar10 = 0x7fffff;
      if ((int)uVar7 < 0) {
        uVar10 = 0x7fffffff;
      }
      if ((uVar10 & uVar7) == 0x6c) {
        FUN_0037aeac(2,"Expecting: ",param_5);
        return 0;
      }
      return 0;
    }
    iVar4 = strcmp(local_80,param_5);
    if (iVar4 == 0) {
LAB_004109b8:
      uVar2 = local_88;
      iVar4 = FUN_004113f4(local_88,auStack_78);
      uVar1 = local_90;
      if ((iVar4 == 0) ||
         (iVar4 = FUN_00411200(auStack_78,local_90,&local_98,param_7,param_8), iVar4 == 0)) {
        uVar11 = 0;
        bVar3 = true;
      }
      else {
        *param_2 = uVar1;
        *param_3 = local_98;
        if (param_4 != (undefined8 *)0x0) {
          *param_4 = __s1;
          if ((param_9 & 1) == 0) {
            FUN_003c86b4(uVar2,"crypto/pem/pem_lib.c",0x117);
          }
          else {
            FUN_003c9d0c(uVar2,0,"crypto/pem/pem_lib.c",0x117);
          }
          return 1;
        }
        bVar3 = false;
        uVar11 = 1;
      }
      if ((param_9 & 1) == 0) {
        FUN_003c86b4(__s1,"crypto/pem/pem_lib.c",0x116);
        FUN_003c86b4(uVar2,"crypto/pem/pem_lib.c",0x117);
        if (bVar3) {
          FUN_003c86b4(local_90,"crypto/pem/pem_lib.c",0x119);
        }
      }
      else {
        FUN_003c9d0c(__s1,0,"crypto/pem/pem_lib.c",0x116);
        FUN_003c9d0c(uVar2,0,"crypto/pem/pem_lib.c",0x117);
        if (bVar3) {
          FUN_003c9d0c(local_90,local_98,"crypto/pem/pem_lib.c",0x119);
        }
      }
      return uVar11;
    }
    iVar4 = strcmp(param_5,"ANY PRIVATE KEY");
    if (iVar4 != 0) {
      iVar4 = strcmp(param_5,"PARAMETERS");
      if (iVar4 != 0) {
        iVar4 = strcmp(__s1,"X9.42 DH PARAMETERS");
        if (((((iVar4 != 0) || (iVar4 = strcmp(param_5,"DH PARAMETERS"), iVar4 != 0)) &&
             ((iVar4 = strcmp(__s1,"X509 CERTIFICATE"), iVar4 != 0 ||
              (iVar5 = strcmp(param_5,"CERTIFICATE"), iVar5 != 0)))) &&
            (((iVar5 = strcmp(__s1,"NEW CERTIFICATE REQUEST"), iVar5 != 0 ||
              (iVar5 = strcmp(param_5,"CERTIFICATE REQUEST"), iVar5 != 0)) &&
             ((iVar5 = strcmp(__s1,"CERTIFICATE"), iVar5 != 0 ||
              (iVar6 = strcmp(param_5,"TRUSTED CERTIFICATE"), iVar6 != 0)))))) &&
           ((((iVar4 != 0 || (iVar4 = strcmp(param_5,"TRUSTED CERTIFICATE"), iVar4 != 0)) &&
             ((iVar5 != 0 || (iVar4 = strcmp(param_5,"PKCS7"), iVar4 != 0)))) &&
            ((iVar4 = strcmp(__s1,"PKCS #7 SIGNED DATA"), iVar4 != 0 ||
             (iVar4 = strcmp(param_5,"PKCS7"), iVar4 != 0)))))) goto LAB_004109b0;
        goto LAB_004109b8;
      }
      sVar8 = strlen(__s1);
      if ((int)sVar8 < 0xc) goto LAB_004109b0;
      iVar4 = strcmp(__s1 + ((sVar8 & 0x7fffffff) - 10),"PARAMETERS");
      if ((((iVar4 != 0) || (__s1[(sVar8 & 0x7fffffff) - 0xb] != ' ')) ||
          ((int)(__s1 + ((sVar8 & 0x7fffffff) - 0xb)) - (int)__s1 < 1)) ||
         (lVar9 = FUN_003a9d34(auStack_78,__s1), lVar9 == 0)) goto LAB_004109b0;
      bVar3 = *(long *)(lVar9 + 0x70) != 0;
      param_1 = (ulong)bVar3;
      if (bVar3) goto LAB_004109b8;
      goto LAB_00410710;
    }
    iVar4 = strcmp(__s1,"ENCRYPTED PRIVATE KEY");
    if ((iVar4 == 0) || (iVar4 = strcmp(__s1,"PRIVATE KEY"), iVar4 == 0)) goto LAB_004109b8;
    sVar8 = strlen(__s1);
    if (0xc < (int)sVar8) {
      iVar4 = strcmp(__s1 + ((sVar8 & 0x7fffffff) - 0xb),"PRIVATE KEY");
      if ((((iVar4 == 0) && (__s1[(sVar8 & 0x7fffffff) - 0xc] == ' ')) &&
          (0 < (int)(__s1 + ((sVar8 & 0x7fffffff) - 0xc)) - (int)__s1)) &&
         (lVar9 = FUN_003a9d34(0,__s1), lVar9 != 0)) {
        if (*(long *)(lVar9 + 0xb8) != 0) goto LAB_004109b8;
        param_1 = 0;
        goto LAB_00410710;
      }
    }
LAB_004109b0:
    param_1 = 0;
  } while( true );
}


// ===== 00410b4c  FUN_00410b4c =====

void FUN_00410b4c(void)

{
  FUN_0041069c();
  return;
}


// ===== 00410b54  FUN_00410b54 =====

bool FUN_00410b54(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,char *param_6,int param_7,code *param_8,undefined8 param_9)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char *__s;
  size_t sVar7;
  undefined8 uVar8;
  long lVar9;
  bool bVar10;
  char *pcVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined1 auStack_4c8 [16];
  undefined1 auStack_4b8 [64];
  char local_478 [1024];
  long local_78;
  undefined8 local_70;
  
  local_70 = 0;
  if (param_5 == 0) {
    __s = (char *)0x0;
LAB_00410c1c:
    iVar1 = (*param_1)(param_4,0);
    if (0 < iVar1) {
      lVar9 = FUN_003c83a4(iVar1 + 0x14,"crypto/pem/pem_lib.c",0x162);
      if (lVar9 == 0) goto LAB_00410edc;
      local_78 = lVar9;
      iVar2 = (*param_1)(param_4,&local_78);
      local_70 = CONCAT44(iVar2,(int)local_70);
      if (param_5 == 0) {
        lVar12 = 0;
        local_478[0] = '\0';
LAB_00410e78:
        iVar2 = FUN_00410f4c(param_3,param_2,local_478,lVar9,(long)iVar2);
        local_70 = CONCAT44(iVar2,(int)local_70);
        bVar10 = 0 < iVar2;
        goto LAB_00410ee4;
      }
      if (param_6 == (char *)0x0) {
        if (param_8 == (code *)0x0) {
          param_7 = FUN_00410458(local_478,0x400,1,param_9);
        }
        else {
          param_7 = (*param_8)();
        }
        if (param_7 < 1) {
          FUN_00379868();
          FUN_0037995c("crypto/pem/pem_lib.c",0x16f,"PEM_ASN1_write_bio");
          FUN_00379a5c(9,0x6f,0);
          goto LAB_00410edc;
        }
        param_6 = local_478;
      }
      uVar3 = FUN_003894b8(param_5);
      iVar4 = FUN_003edd58(auStack_4c8,uVar3);
      if (iVar4 < 1) {
LAB_00410edc:
        lVar12 = 0;
      }
      else {
        uVar8 = FUN_003c7874();
        iVar4 = FUN_0041241c(param_5,uVar8,auStack_4c8,param_6,param_7,1,auStack_4b8,0);
        if (iVar4 == 0) goto LAB_00410edc;
        if (param_6 == local_478) {
          FUN_003c89b8(local_478,0x400);
        }
        local_478[0] = '\0';
        sVar7 = strlen(local_478);
        FUN_0037cd5c(local_478 + sVar7,0x400 - sVar7,"Proc-Type: 4,%s\n","ENCRYPTED");
        iVar5 = FUN_003894b8(param_5);
        sVar7 = strlen(local_478);
        iVar4 = 0x400 - (int)sVar7;
        pcVar11 = local_478 + sVar7;
        uVar6 = FUN_0037cd5c(pcVar11,(long)iVar4,"DEK-Info: %s,",__s);
        if (0 < (int)uVar6) {
          pcVar11 = pcVar11 + uVar6;
          iVar4 = iVar4 - uVar6;
          if (0 < iVar5) {
            lVar12 = (long)iVar5;
            puVar13 = auStack_4c8;
            do {
              uVar6 = FUN_0037cd5c(pcVar11,(long)iVar4,&DAT_001e4bda,*puVar13);
              if ((int)uVar6 < 1) goto LAB_00410dc0;
              pcVar11 = pcVar11 + uVar6;
              lVar12 = lVar12 + -1;
              iVar4 = iVar4 - uVar6;
              puVar13 = puVar13 + 1;
            } while (lVar12 != 0);
          }
          if (1 < iVar4) {
            pcVar11[0] = '\n';
            pcVar11[1] = '\0';
          }
        }
LAB_00410dc0:
        lVar12 = FUN_0037fab8();
        if (((lVar12 != 0) &&
            (iVar4 = FUN_00381064(lVar12,param_5,0,auStack_4b8,auStack_4c8), iVar4 != 0)) &&
           (iVar2 = FUN_003803e0(lVar12,lVar9,&local_70,lVar9,iVar2), iVar2 != 0)) {
          iVar2 = FUN_0038096c(lVar12,lVar9 + (int)local_70,(long)&local_70 + 4);
          if (iVar2 != 0) {
            iVar2 = local_70._4_4_ + (int)local_70;
            local_70 = CONCAT44(iVar2,(int)local_70);
            goto LAB_00410e78;
          }
        }
      }
      bVar10 = false;
      goto LAB_00410ee4;
    }
    FUN_00379868();
    FUN_0037995c("crypto/pem/pem_lib.c",0x15c,"PEM_ASN1_write_bio");
    uVar8 = 0x8000d;
  }
  else {
    __s = (char *)FUN_00389880(param_5);
    if (((__s != (char *)0x0) && (iVar1 = FUN_003894b8(param_5), iVar1 != 0)) &&
       (iVar1 = FUN_003894b8(param_5), iVar1 < 0x11)) {
      sVar7 = strlen(__s);
      iVar1 = FUN_003894b8(param_5);
      if (0xfffffffffffffbfe < (sVar7 + (long)(iVar1 << 1)) - 0x3dd) goto LAB_00410c1c;
    }
    FUN_00379868();
    FUN_0037995c("crypto/pem/pem_lib.c",0x156,"PEM_ASN1_write_bio");
    uVar8 = 0x71;
  }
  FUN_00379a5c(9,uVar8,0);
  lVar12 = 0;
  iVar1 = 0;
  bVar10 = false;
  lVar9 = 0;
LAB_00410ee4:
  FUN_003c89b8(auStack_4b8,0x40);
  FUN_003c89b8(auStack_4c8,0x10);
  FUN_0037fae8(lVar12);
  FUN_003c89b8(local_478,0x400);
  FUN_003c893c(lVar9,iVar1,"crypto/pem/pem_lib.c",0x19f);
  return bVar10;
}


// ===== 00410f4c  FUN_00410f4c =====

int FUN_00410f4c(undefined8 param_1,char *param_2,char *param_3,long param_4,ulong param_5)

{
  bool bVar1;
  ulong uVar2;
  undefined4 uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  size_t sVar8;
  size_t sVar9;
  long lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  int local_64;
  
  uVar3 = 0x80020;
  uVar11 = 0x80020;
  lVar7 = FUN_0041269c();
  if (lVar7 == 0) {
    lVar10 = 0;
    uVar12 = 0x80006;
LAB_00411090:
    FUN_00379868();
    FUN_0037995c("crypto/pem/pem_lib.c",0x2a4,"PEM_write_bio");
    FUN_00379a5c(9,uVar12,0);
  }
  else {
    FUN_004126f4(lVar7);
    sVar8 = strlen(param_2);
    iVar5 = FUN_0037df4c(param_1,"-----BEGIN ",0xb);
    if (iVar5 != 0xb) {
LAB_00411080:
      lVar10 = 0;
      uVar12 = uVar11;
      goto LAB_00411090;
    }
    iVar5 = FUN_0037df4c(param_1,param_2,sVar8 & 0xffffffff);
    if ((iVar5 != (int)sVar8) || (iVar5 = FUN_0037df4c(param_1,"-----\n",6), iVar5 != 6))
    goto LAB_00411080;
    if (param_3 != (char *)0x0) {
      sVar9 = strlen(param_3);
      if ((0 < (int)sVar9) &&
         ((iVar5 = FUN_0037df4c(param_1,param_3,sVar9 & 0xffffffff), iVar5 != (int)sVar9 ||
          (iVar5 = FUN_0037df4c(param_1,&DAT_001e2980,1), iVar5 != 1)))) goto LAB_00411080;
    }
    lVar10 = FUN_003c83a4(0x2000,"crypto/pem/pem_lib.c",0x282);
    if (lVar10 != 0) {
      if ((long)param_5 < 1) {
        iVar5 = 0;
      }
      else {
        uVar13 = 0;
        iVar5 = 0;
        do {
          uVar2 = param_5;
          if (0x13ff < param_5) {
            uVar2 = 0x1400;
          }
          iVar6 = FUN_00412708(lVar7,lVar10,&local_64,param_4 + (ulong)uVar13,uVar2 & 0xffffffff);
          uVar12 = 0x80006;
          if (iVar6 == 0) goto LAB_00411090;
          if (local_64 == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = FUN_0037df4c(param_1,lVar10);
            uVar12 = uVar3;
            if (iVar6 != local_64) goto LAB_00411090;
          }
          uVar4 = param_5 - uVar2;
          iVar5 = iVar6 + iVar5;
          uVar13 = uVar13 + (int)uVar2;
          bVar1 = (long)uVar2 <= (long)param_5;
          param_5 = uVar4;
        } while (uVar4 != 0 && bVar1);
      }
      FUN_00412af8(lVar7,lVar10,&local_64);
      if ((((local_64 < 1) ||
           (iVar6 = FUN_0037df4c(param_1,lVar10), uVar12 = uVar3, iVar6 == local_64)) &&
          (iVar6 = FUN_0037df4c(param_1,"-----END ",9), uVar12 = uVar3, iVar6 == 9)) &&
         ((iVar6 = FUN_0037df4c(param_1,param_2,sVar8 & 0xffffffff), uVar12 = uVar11,
          iVar6 == (int)sVar8 && (iVar6 = FUN_0037df4c(param_1,"-----\n",6), iVar6 == 6)))) {
        iVar5 = local_64 + iVar5;
        goto LAB_004110c0;
      }
      goto LAB_00411090;
    }
  }
  iVar5 = 0;
LAB_004110c0:
  FUN_004126b0(lVar7);
  FUN_003c893c(lVar10,0x2000,"crypto/pem/pem_lib.c",0x2a6);
  return iVar5;
}


// ===== 00411200  FUN_00411200 =====

ulong FUN_00411200(long *param_1,long param_2,ulong *param_3,code *param_4,undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auStack_494 [1024];
  undefined1 auStack_94 [64];
  int local_54;
  
  uVar5 = *param_3;
  local_54 = (int)uVar5;
  if (0x7fffffff < (long)uVar5) {
    FUN_00379868();
    FUN_0037995c("crypto/pem/pem_lib.c",0x1b1,"PEM_do_header");
    uVar4 = 0x80;
LAB_00411254:
    FUN_00379a5c(9,uVar4,0);
    return 0;
  }
  if (*param_1 == 0) {
    return 1;
  }
  if (param_4 == (code *)0x0) {
    iVar1 = FUN_00410458(auStack_494,0x400,0,param_5);
  }
  else {
    iVar1 = (*param_4)();
  }
  if (iVar1 < 0) {
    FUN_00379868();
    FUN_0037995c("crypto/pem/pem_lib.c",0x1bd,"PEM_do_header");
    uVar4 = 0x68;
    goto LAB_00411254;
  }
  lVar6 = *param_1;
  uVar4 = FUN_003c7874();
  uVar3 = FUN_0041241c(lVar6,uVar4,param_1 + 1,auStack_494,iVar1,1,auStack_94,0);
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  lVar6 = FUN_0037fab8();
  if (lVar6 == 0) {
    return 0;
  }
  iVar1 = FUN_003810dc(lVar6,*param_1,0,auStack_94,param_1 + 1);
  if ((iVar1 != 0) &&
     (iVar1 = FUN_00380550(lVar6,param_2,&local_54,param_2,uVar5 & 0xffffffff), iVar1 != 0)) {
    *param_3 = (long)local_54;
    uVar2 = FUN_00380c1c(lVar6,param_2 + local_54,&local_54);
    if (uVar2 != 0) {
      uVar5 = (ulong)uVar2;
      *param_3 = *param_3 + (long)local_54;
      goto LAB_004113b4;
    }
  }
  FUN_00379868();
  FUN_0037995c("crypto/pem/pem_lib.c",0x1d8,"PEM_do_header");
  FUN_00379a5c(9,0x65,0);
  uVar5 = 0;
LAB_004113b4:
  FUN_0037fae8(lVar6);
  FUN_003c89b8(auStack_494,0x400);
  FUN_003c89b8(auStack_94,0x40);
  return uVar5;
}


// ===== 004113f4  FUN_004113f4 =====

undefined8 FUN_004113f4(char *param_1,long *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  size_t sVar6;
  long lVar7;
  undefined8 uVar8;
  char *local_48;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if (param_1 == (char *)0x0) {
    return 1;
  }
  if (*param_1 == '\0') {
    return 1;
  }
  if (*param_1 == '\n') {
    return 1;
  }
  iVar4 = strncmp(param_1,"Proc-Type:",10);
  if (iVar4 != 0) {
    FUN_00379868();
    FUN_0037995c("crypto/pem/pem_lib.c",0x1fb,"PEM_get_EVP_CIPHER_INFO");
    uVar8 = 0x6b;
    goto LAB_00411478;
  }
  sVar6 = strspn(param_1 + 10," \t");
  pcVar1 = param_1 + 10 + sVar6;
  if ((*pcVar1 != '4') || (pcVar1[1] != ',')) {
    return 0;
  }
  pcVar1 = pcVar1 + 2;
  sVar6 = strspn(pcVar1," \t");
  iVar4 = strncmp(pcVar1 + sVar6,"ENCRYPTED",9);
  if (iVar4 == 0) {
    pcVar1 = pcVar1 + sVar6 + 9;
    sVar6 = strspn(pcVar1," \t\r\n");
    if (sVar6 != 0) {
      sVar6 = strspn(pcVar1," \t\r");
      pcVar1 = pcVar1 + sVar6;
      if (*pcVar1 == '\n') {
        iVar4 = strncmp(pcVar1 + 1,"DEK-Info:",9);
        if (iVar4 == 0) {
          sVar6 = strspn(pcVar1 + 10," \t");
          pcVar1 = pcVar1 + 10 + sVar6;
          sVar6 = strcspn(pcVar1," \t,");
          pcVar2 = pcVar1 + sVar6;
          cVar3 = *pcVar2;
          *pcVar2 = '\0';
          lVar7 = FUN_003a1fb8(pcVar1);
          *param_2 = lVar7;
          *pcVar2 = cVar3;
          sVar6 = strspn(pcVar2," \t");
          pcVar2 = pcVar2 + sVar6;
          local_48 = pcVar2;
          if (lVar7 == 0) {
            FUN_00379868();
            FUN_0037995c("crypto/pem/pem_lib.c",0x227,"PEM_get_EVP_CIPHER_INFO");
            uVar8 = 0x72;
          }
          else {
            iVar4 = FUN_003894b8(lVar7);
            if (iVar4 < 1) {
              if ((iVar4 != 0) || (*pcVar2 != ',')) goto LAB_00411708;
              FUN_00379868();
              FUN_0037995c("crypto/pem/pem_lib.c",0x22f,"PEM_get_EVP_CIPHER_INFO");
              uVar8 = 0x82;
            }
            else {
              local_48 = pcVar2 + 1;
              if (*pcVar2 == ',') {
LAB_00411708:
                uVar5 = FUN_003894b8(lVar7);
                uVar8 = FUN_00411738(&local_48,param_2 + 1,uVar5);
                return uVar8;
              }
              FUN_00379868();
              FUN_0037995c("crypto/pem/pem_lib.c",0x22c,"PEM_get_EVP_CIPHER_INFO");
              uVar8 = 0x81;
            }
          }
        }
        else {
          FUN_00379868();
          FUN_0037995c("crypto/pem/pem_lib.c",0x215,"PEM_get_EVP_CIPHER_INFO");
          uVar8 = 0x69;
        }
      }
      else {
        FUN_00379868();
        FUN_0037995c("crypto/pem/pem_lib.c",0x20c,"PEM_get_EVP_CIPHER_INFO");
        uVar8 = 0x70;
      }
      goto LAB_00411478;
    }
  }
  FUN_00379868();
  FUN_0037995c("crypto/pem/pem_lib.c",0x207,"PEM_get_EVP_CIPHER_INFO");
  uVar8 = 0x6a;
LAB_00411478:
  FUN_00379a5c(9,uVar8,0);
  return 0;
}


// ===== 00411738  FUN_00411738 =====

undefined8 FUN_00411738(long *param_1,void *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  
  lVar5 = *param_1;
  if (0 < (int)param_3) {
    memset(param_2,0,(ulong)param_3);
    iVar2 = param_3 * 2;
    uVar7 = 0;
    uVar6 = 0;
    if (iVar2 < 2) {
      iVar2 = 1;
    }
    do {
      iVar3 = FUN_003ca5a0(*(undefined1 *)(lVar5 + uVar6));
      if (iVar3 < 0) {
        FUN_00379868();
        FUN_0037995c("crypto/pem/pem_lib.c",0x245,"load_iv");
        FUN_00379a5c(9,0x67,0);
        return 0;
      }
      uVar4 = uVar6 >> 1 & 0x7fffffff;
      uVar1 = uVar7 ^ 0xffffffff;
      uVar6 = uVar6 + 1;
      uVar7 = uVar7 + 4;
      *(byte *)((long)param_2 + uVar4) =
           *(byte *)((long)param_2 + uVar4) | (byte)(iVar3 << (ulong)(uVar1 & 4));
    } while (iVar2 != (int)uVar6);
    lVar5 = lVar5 + uVar6;
  }
  *param_1 = lVar5;
  return 1;
}


// ===== 00411834  FUN_00411834 =====

ulong FUN_00411834(undefined8 param_1,undefined8 *param_2,long *param_3,long *param_4,long *param_5,
                  uint param_6)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  void *pvVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  char *pcVar16;
  char *pcVar17;
  size_t sVar18;
  int unaff_w29;
  long local_a8;
  uint *local_70;
  int local_68;
  uint local_64;
  
  *param_5 = 0;
  *param_3 = 0;
  *param_2 = 0;
  *param_4 = 0;
  if (((param_6 ^ 0xffffffff) & 6) == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/pem/pem_lib.c",0x3ab,"PEM_read_bio_ex");
    FUN_00379a5c(9,0x80106,0);
    lVar15 = 0;
    local_a8 = 0;
    pcVar16 = (char *)0x0;
    lVar9 = 0;
    pcVar17 = (char *)0x0;
LAB_00411ae8:
    FUN_004126b0(lVar9);
    lVar9 = local_a8;
    if ((param_6 & 1) != 0) {
LAB_00411af0:
      FUN_003c9d0c(pcVar16,0,"crypto/pem/pem_lib.c",0x3eb);
      goto LAB_00411b78;
    }
  }
  else {
    uVar8 = param_6 & 1;
    if ((param_6 & 1) == 0) {
      uVar10 = FUN_00387560();
    }
    else {
      uVar10 = FUN_0038756c();
    }
    lVar15 = FUN_0037db44();
    lVar9 = FUN_0037db44(uVar10);
    local_a8 = lVar9;
    if ((lVar15 == 0) || (lVar9 == 0)) {
      FUN_00379868();
      FUN_0037995c("crypto/pem/pem_lib.c",0x3b3,"PEM_read_bio_ex");
      FUN_00379a5c(9,0x80020,0);
      pcVar16 = (char *)0x0;
      goto LAB_00411ac8;
    }
    if (uVar8 != 0) {
      pcVar17 = (char *)FUN_003c8e24(0x100,"crypto/pem/pem_lib.c",0x2fd);
      if (pcVar17 != (char *)0x0) goto LAB_00411924;
LAB_00411ae0:
      pcVar16 = (char *)0x0;
      goto LAB_00411ae4;
    }
    pcVar17 = (char *)FUN_003c83a4();
    if (pcVar17 == (char *)0x0) goto LAB_00411ae0;
LAB_00411924:
    iVar5 = FUN_0037e7f0(param_1,pcVar17,0xff);
    if (iVar5 < 1) {
LAB_00411b0c:
      FUN_00379868();
      FUN_0037995c("crypto/pem/pem_lib.c",0x305,"get_name");
      FUN_00379a5c(9,0x6c,0);
      if (uVar8 != 0) {
LAB_00411d78:
        FUN_003c9d0c(pcVar17,0x100,"crypto/pem/pem_lib.c",0x31a);
        FUN_004126b0(0);
        pcVar17 = (char *)0x0;
        pcVar16 = (char *)0x0;
        goto LAB_00411af0;
      }
    }
    else {
      uVar6 = FUN_0041217c(pcVar17,iVar5,param_6 & 0xfffffffb,1);
      iVar5 = strncmp(pcVar17,"-----BEGIN ",0xb);
      if ((iVar5 != 0) || ((int)uVar6 < 6)) {
LAB_00411998:
        iVar5 = FUN_0037e7f0(param_1,pcVar17,0xff);
        while (0 < iVar5) {
          uVar6 = FUN_0041217c(pcVar17,iVar5,param_6 & 0xfffffffb,0);
          iVar5 = strncmp(pcVar17,"-----BEGIN ",0xb);
          if ((iVar5 == 0) && (5 < (int)uVar6)) {
            pcVar16 = pcVar17 + ((ulong)uVar6 - 6);
            iVar5 = strncmp(pcVar16,"-----\n",6);
            if (iVar5 == 0) goto LAB_00411a2c;
          }
          iVar5 = FUN_0037e7f0(param_1,pcVar17,0xff);
        }
        goto LAB_00411b0c;
      }
      pcVar16 = pcVar17 + ((ulong)uVar6 - 6);
      iVar5 = strncmp(pcVar16,"-----\n",6);
      if (iVar5 != 0) goto LAB_00411998;
LAB_00411a2c:
      sVar18 = (size_t)(int)(uVar6 - 0x10);
      *pcVar16 = '\0';
      if (uVar8 != 0) {
        pcVar16 = (char *)FUN_003c8e24(sVar18,"crypto/pem/pem_lib.c",0x313);
        if (pcVar16 != (char *)0x0) {
          memcpy(pcVar16,pcVar17 + 0xb,sVar18);
          FUN_003c9d0c(pcVar17,0x100,"crypto/pem/pem_lib.c",0x31a);
          pcVar17 = (char *)FUN_003c8e24(0x100,"crypto/pem/pem_lib.c",0x33d);
          goto LAB_00411bf0;
        }
        goto LAB_00411d78;
      }
      pcVar16 = (char *)FUN_003c83a4();
      if (pcVar16 != (char *)0x0) {
        memcpy(pcVar16,pcVar17 + 0xb,sVar18);
        FUN_003c86b4(pcVar17,"crypto/pem/pem_lib.c",0x31a);
        pcVar17 = (char *)FUN_003c83a4(0x100,"crypto/pem/pem_lib.c",0x33d);
LAB_00411bf0:
        if (pcVar17 == (char *)0x0) {
          pcVar17 = (char *)0x0;
LAB_00411ae4:
          lVar9 = 0;
        }
        else {
          uVar6 = FUN_0037e7f0(param_1,pcVar17,0xff);
          if (0 < (int)uVar6) {
            cVar3 = '\0';
            bVar4 = false;
            bVar1 = false;
            local_a8 = lVar15;
            do {
              while( true ) {
                if (uVar6 == 0xfe) {
                  bVar2 = pcVar17[0xfd] != '\n';
                }
                else {
                  bVar2 = false;
                }
                if (cVar3 == '\0') {
                  pvVar11 = memchr(pcVar17,0x3a,(ulong)uVar6);
                  cVar3 = pvVar11 != (void *)0x0;
                }
                iVar5 = strncmp(pcVar17,"-----END ",9);
                if (cVar3 == '\x01' || iVar5 == 0) {
                  uVar14 = 0xfffffffb;
                }
                else {
                  uVar14 = 0xffffffff;
                }
                iVar5 = FUN_0041217c(pcVar17,(ulong)uVar6,uVar14 & param_6,0);
                if (*pcVar17 != '\n') break;
                if (!bVar1) {
                  if (cVar3 == '\x02') {
                    FUN_00379868();
                    uVar10 = 0x362;
                    goto LAB_00411e20;
                  }
                  cVar3 = '\x02';
                  local_a8 = lVar9;
                }
                uVar6 = FUN_0037e7f0(param_1,pcVar17,0xff);
                bVar1 = bVar2;
                if ((int)uVar6 < 1) goto LAB_00411d5c;
              }
              iVar7 = strncmp(pcVar17,"-----END ",9);
              if (iVar7 == 0) {
                sVar18 = strlen(pcVar16);
                iVar5 = strncmp(pcVar17 + 9,pcVar16,sVar18);
                if ((iVar5 != 0) || (iVar5 = strncmp(pcVar17 + 9 + sVar18,"-----\n",6), iVar5 != 0))
                {
                  FUN_00379868();
                  uVar10 = 0x371;
                  goto LAB_00411e20;
                }
                bVar1 = false;
                if (cVar3 != '\0') {
                  local_a8 = lVar9;
                  lVar9 = lVar15;
                }
                lVar15 = lVar9;
                if (uVar8 == 0) goto LAB_00411e40;
                goto LAB_00411e74;
              }
              if (bVar4) {
                FUN_00379868();
                uVar10 = 0x37b;
                goto LAB_00411e20;
              }
              iVar7 = FUN_0037e608(local_a8,pcVar17);
              if (iVar7 < 0) goto LAB_00411e34;
              if (cVar3 == '\x02') {
                bVar4 = iVar5 != 0x41;
                if (0x41 < iVar5) goto LAB_00411e34;
              }
              else {
                bVar4 = false;
              }
              uVar6 = FUN_0037e7f0(param_1,pcVar17,0xff);
              bVar1 = bVar2;
            } while (0 < (int)uVar6);
          }
LAB_00411d5c:
          FUN_00379868();
          uVar10 = 0x345;
LAB_00411e20:
          FUN_0037995c("crypto/pem/pem_lib.c",uVar10,"get_header_and_data");
          FUN_00379a5c(9,0x66,0);
LAB_00411e34:
          bVar1 = true;
          local_a8 = lVar9;
          if (uVar8 == 0) {
LAB_00411e40:
            FUN_003c86b4(pcVar17,"crypto/pem/pem_lib.c",0x392);
          }
          else {
LAB_00411e74:
            FUN_003c9d0c(pcVar17,0x100,"crypto/pem/pem_lib.c",0x392);
          }
          if (!bVar1) {
            FUN_0037e4bc(local_a8,0x73,0,&local_70);
            local_64 = *local_70;
            pcVar17 = (char *)(ulong)local_64;
            if (local_64 == 0) goto LAB_00411ae4;
            lVar9 = FUN_0041269c();
            if (lVar9 != 0) {
              FUN_00412d44();
              iVar5 = FUN_00412d54(lVar9,*(long *)(local_70 + 2),&local_64,*(long *)(local_70 + 2),
                                   pcVar17);
              if ((iVar5 < 0) ||
                 (iVar5 = FUN_00413190(lVar9,*(long *)(local_70 + 2) + (long)(int)local_64,&local_68
                                      ), iVar5 < 0)) {
                FUN_00379868();
                FUN_0037995c("crypto/pem/pem_lib.c",0x3ce,"PEM_read_bio_ex");
                FUN_00379a5c(9,100,0);
                pcVar17 = (char *)0x0;
                goto LAB_00411ae8;
              }
              local_64 = (uint)((long)unaff_w29 + (long)local_68);
              *(long *)local_70 = (long)unaff_w29 + (long)local_68;
              iVar5 = FUN_0037e4bc(lVar15,3,0,0);
              lVar12 = FUN_004120ac(iVar5 + 1,param_6,0x3d5);
              *param_3 = lVar12;
              lVar12 = FUN_004120ac(local_64,param_6,0x3d6);
              *param_4 = lVar12;
              lVar13 = *param_3;
              if ((lVar13 != 0) && (lVar12 != 0)) {
                if (iVar5 != 0) {
                  iVar7 = FUN_0037dd7c(lVar15,lVar13,iVar5);
                  lVar13 = *param_3;
                  if (iVar7 != iVar5) goto LAB_00412050;
                }
                *(undefined1 *)(lVar13 + iVar5) = 0;
                uVar8 = FUN_0037dd7c(local_a8,*param_4,local_64);
                if (uVar8 == local_64) {
                  pcVar17 = (char *)0x1;
                  *param_5 = (long)(int)uVar8;
                  *param_2 = pcVar16;
                  pcVar16 = (char *)0x0;
                  goto LAB_00411ae8;
                }
                lVar13 = *param_3;
              }
LAB_00412050:
              FUN_004120cc(lVar13,param_6,0,0x3e5);
              *param_3 = 0;
              FUN_004120cc(*param_4,param_6,0,999);
              pcVar17 = (char *)0x0;
              *param_4 = 0;
              goto LAB_00411ae8;
            }
            FUN_00379868();
            FUN_0037995c("crypto/pem/pem_lib.c",0x3c5,"PEM_read_bio_ex");
            FUN_00379a5c(9,0x80006,0);
          }
LAB_00411ac8:
          lVar9 = 0;
          pcVar17 = (char *)0x0;
        }
        goto LAB_00411ae8;
      }
    }
    FUN_003c86b4(pcVar17,"crypto/pem/pem_lib.c",0x31a);
    FUN_004126b0(0);
    pcVar17 = (char *)0x0;
    pcVar16 = (char *)0x0;
  }
  FUN_003c86b4(pcVar16,"crypto/pem/pem_lib.c",0x3eb);
LAB_00411b78:
  FUN_0037db50(lVar15);
  FUN_0037db50(lVar9);
  return (ulong)pcVar17 & 0xffffffff;
}


// ===== 004120ac  FUN_004120ac =====

void FUN_004120ac(int param_1,ulong param_2)

{
  if ((param_2 & 1) == 0) {
    FUN_003c83a4((long)param_1,"crypto/pem/pem_lib.c");
    return;
  }
  FUN_003c8e24((long)param_1,"crypto/pem/pem_lib.c");
  return;
}


// ===== 004120cc  FUN_004120cc =====

void FUN_004120cc(undefined8 param_1,ulong param_2,undefined8 param_3,undefined4 param_4)

{
  if ((param_2 & 1) == 0) {
    FUN_003c86b4(param_1,"crypto/pem/pem_lib.c",param_4);
    return;
  }
  FUN_003c9d0c(param_1,param_3,"crypto/pem/pem_lib.c");
  return;
}


// ===== 004120f4  FUN_004120f4 =====

void FUN_004120f4(void)

{
  FUN_00411834();
  return;
}


// ===== 004120fc  FUN_004120fc =====

int FUN_004120fc(char *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  char *__s1;
  
  sVar2 = strlen(param_1);
  sVar3 = strlen(param_2);
  if ((int)sVar3 + 1 < (int)sVar2) {
    __s1 = param_1 + ((long)(int)sVar2 - (long)(int)sVar3);
    iVar1 = strcmp(__s1,param_2);
    if ((iVar1 == 0) && (__s1[-1] == ' ')) {
      return (int)(__s1 + -1) - (int)param_1;
    }
  }
  return 0;
}


// ===== 0041217c  FUN_0041217c =====

int FUN_0041217c(short *param_1,uint param_2,uint param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ulong __n;
  ulong uVar4;
  
  __n = (ulong)param_2;
  if (((3 < (int)param_2) && (param_4 != 0)) && (*param_1 == -0x4411 && (char)param_1[1] == -0x41))
  {
    __n = (ulong)(param_2 - 3);
    memmove(param_1,(void *)((long)param_1 + 3),__n);
    *(undefined1 *)((long)param_1 + __n) = 0;
  }
  iVar3 = (int)__n;
  if ((param_3 >> 1 & 1) == 0) {
    if ((param_3 >> 2 & 1) == 0) {
      if (0 < iVar3) {
        uVar4 = 0;
        do {
          cVar1 = *(char *)((long)param_1 + uVar4);
          if ((cVar1 == '\n') || (cVar1 == '\r')) goto LAB_00412254;
          iVar2 = FUN_003c475c(cVar1,0x40);
          if (iVar2 != 0) {
            *(undefined1 *)((long)param_1 + uVar4) = 0x20;
          }
          uVar4 = uVar4 + 1;
        } while (__n != uVar4);
        goto LAB_004122b0;
      }
    }
    else if (0 < iVar3) {
      uVar4 = 0;
      do {
        iVar2 = FUN_003c475c(*(undefined1 *)((long)param_1 + uVar4),0x400);
        if (((iVar2 == 0) || (*(char *)((long)param_1 + uVar4) == '\n')) ||
           (*(char *)((long)param_1 + uVar4) == '\r')) goto LAB_00412254;
        uVar4 = uVar4 + 1;
      } while (__n != uVar4);
      goto LAB_004122b0;
    }
    iVar3 = 0;
  }
  else {
    if (-1 < iVar3) {
      do {
        iVar3 = (int)__n;
        if (0x20 < *(byte *)((long)param_1 + __n)) goto LAB_004122ac;
        __n = (ulong)(iVar3 - 1);
      } while (0 < iVar3);
      iVar3 = -1;
    }
LAB_004122ac:
    iVar3 = iVar3 + 1;
  }
LAB_004122b0:
  *(undefined2 *)((long)param_1 + (long)iVar3) = 10;
  return iVar3 + 1;
LAB_00412254:
  iVar3 = (int)uVar4;
  goto LAB_004122b0;
}


// ===== 004122d0  FUN_004122d0 =====

void FUN_004122d0(char *param_1)

{
  char *pcVar1;
  
  pcVar1 = &DAT_007ac7f0;
  if (param_1 != (char *)0x0) {
    pcVar1 = strncpy(&DAT_007ac7f0,param_1,0x4f);
    pcVar1 = pcVar1 + 0x4f;
  }
  *pcVar1 = '\0';
  return;
}


// ===== 00412300  FUN_00412300 =====

undefined1 * FUN_00412300(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)0x0;
  if (DAT_007ac7f0 != '\0') {
    puVar1 = &DAT_007ac7f0;
  }
  return puVar1;
}


// ===== 00412318  FUN_00412318 =====

void FUN_00412318(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_0041232c(param_1,0,param_2,param_3,param_4);
  return;
}


// ===== 0041232c  FUN_0041232c =====

undefined4
FUN_0041232c(undefined8 param_1,undefined4 param_2,int param_3,undefined1 *param_4,int param_5)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined1 auStack_450 [1024];
  
  puVar1 = &DAT_007ac7f0;
  if (DAT_007ac7f0 == '\0' || param_4 != (undefined1 *)0x0) {
    puVar1 = param_4;
  }
  lVar4 = FUN_0040d7f0();
  if (lVar4 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    if (0x3fe < param_3) {
      param_3 = 0x3ff;
    }
    iVar2 = FUN_0040da28(lVar4,puVar1,0,param_1,param_2,param_3);
    if ((iVar2 < 0) ||
       ((param_5 != 0 &&
        (iVar2 = FUN_0040dc74(lVar4,puVar1,0,auStack_450,param_2,param_3,param_1), iVar2 < 0)))) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = FUN_0040e718(lVar4);
      FUN_003c89b8(auStack_450,0x400);
    }
    FUN_0040d924(lVar4);
  }
  return uVar3;
}


// ===== 0041241c  FUN_0041241c =====

ulong FUN_0041241c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,int param_5,
                  uint param_6,undefined1 *param_7,undefined1 *param_8)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined1 *puVar7;
  int iVar8;
  ulong uVar9;
  uint local_a4;
  undefined1 local_a0 [64];
  
  local_a4 = 0;
  uVar5 = FUN_003897a4();
  uVar9 = uVar5 & 0xffffffff;
  iVar2 = FUN_003894b8(param_1);
  if (0x40 < (int)uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_003c4750("assertion failed: nkey <= EVP_MAX_KEY_LENGTH","crypto/evp/evp_key.c",0x5a);
  }
  if (0x10 < iVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_003c4750("assertion failed: niv <= EVP_MAX_IV_LENGTH","crypto/evp/evp_key.c",0x5b);
  }
  if (param_4 != 0) {
    lVar6 = FUN_0039d270();
    if (lVar6 == 0) {
LAB_00412620:
      uVar9 = 0;
    }
    else {
      iVar8 = 0;
      do {
        iVar3 = FUN_0039d92c(lVar6,param_2,0);
        if (((iVar3 == 0) ||
            ((((iVar8 != 0 && (iVar3 = FUN_0039d938(lVar6,local_a0,local_a4), iVar3 == 0)) ||
              (iVar3 = FUN_0039d938(lVar6,param_4,(long)param_5), iVar3 == 0)) ||
             ((param_3 != 0 && (iVar3 = FUN_0039d938(lVar6,param_3,8), iVar3 == 0)))))) ||
           (iVar3 = FUN_0039dac8(lVar6,local_a0,&local_a4), iVar3 == 0)) goto LAB_00412620;
        iVar3 = param_6 - 1;
        if (1 < param_6) {
          do {
            iVar4 = FUN_0039d92c(lVar6,param_2,0);
            if (((iVar4 == 0) || (iVar4 = FUN_0039d938(lVar6,local_a0,local_a4), iVar4 == 0)) ||
               (iVar4 = FUN_0039dac8(lVar6,local_a0,&local_a4), iVar4 == 0)) goto LAB_00412620;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        iVar3 = (int)uVar9;
        if (iVar3 == 0) {
          uVar9 = 0;
        }
        else {
          uVar5 = 0;
          puVar7 = param_7;
          do {
            param_7 = puVar7;
            if (uVar5 == local_a4) {
              uVar1 = (ulong)(uint)(iVar3 - (int)uVar5);
              goto joined_r0x004125c8;
            }
            if (puVar7 != (undefined1 *)0x0) {
              param_7 = puVar7 + 1;
              *puVar7 = local_a0[uVar5];
            }
            uVar5 = uVar5 + 1;
            puVar7 = param_7;
          } while (iVar3 != (int)uVar5);
        }
        uVar1 = 0;
        uVar5 = uVar9;
joined_r0x004125c8:
        uVar9 = uVar1;
        if ((iVar2 != 0) && (puVar7 = param_8, (uint)uVar5 != local_a4)) {
          do {
            param_8 = puVar7;
            if ((uint)uVar5 == local_a4) break;
            if (puVar7 != (undefined1 *)0x0) {
              param_8 = puVar7 + 1;
              *puVar7 = local_a0[uVar5 & 0xffffffff];
            }
            iVar2 = iVar2 + -1;
            uVar5 = (ulong)((uint)uVar5 + 1);
            puVar7 = param_8;
          } while (iVar2 != 0);
        }
        iVar8 = iVar8 + 1;
      } while ((int)uVar9 != 0 || iVar2 != 0);
      uVar9 = FUN_003897a4(param_1);
      uVar9 = uVar9 & 0xffffffff;
    }
    FUN_0039d284(lVar6);
    FUN_003c89b8(local_a0,0x40);
  }
  return uVar9;
}


// ===== 0041269c  FUN_0041269c =====

void FUN_0041269c(void)

{
  FUN_003c8474(0x60,"crypto/evp/encode.c",0x81);
  return;
}


// ===== 004126b0  FUN_004126b0 =====

void FUN_004126b0(undefined8 param_1)

{
  FUN_003c86b4(param_1,"crypto/evp/encode.c",0x86);
  return;
}


// ===== 004126c0  FUN_004126c0 =====

undefined8 FUN_004126c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = *param_2;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  uVar3 = param_2[8];
  uVar2 = param_2[0xb];
  uVar1 = param_2[10];
  uVar5 = param_2[5];
  uVar4 = param_2[4];
  uVar7 = param_2[7];
  uVar6 = param_2[6];
  param_1[9] = param_2[9];
  param_1[8] = uVar3;
  param_1[0xb] = uVar2;
  param_1[10] = uVar1;
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  param_1[7] = uVar7;
  param_1[6] = uVar6;
  return 1;
}


// ===== 004126e4  FUN_004126e4 =====

undefined4 FUN_004126e4(undefined4 *param_1)

{
  return *param_1;
}


// ===== 004126ec  FUN_004126ec =====

void FUN_004126ec(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x5c) = param_2;
  return;
}


// ===== 004126f4  FUN_004126f4 =====

void FUN_004126f4(undefined8 *param_1)

{
  param_1[0xb] = 0;
  *param_1 = DAT_001b7118;
  return;
}


// ===== 00412708  FUN_00412708 =====

undefined8 FUN_00412708(uint *param_1,char *param_2,undefined4 *param_3,void *param_4,uint param_5)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  char *pcVar7;
  uint uVar8;
  byte *pbVar9;
  ulong uVar10;
  ulong uVar11;
  char cVar12;
  ulong uVar13;
  ulong uVar14;
  size_t __n;
  
  *param_3 = 0;
  if ((int)param_5 < 1) {
    return 0;
  }
  uVar8 = param_1[1];
  if (0x50 < (int)uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_003c4750("assertion failed: ctx->length <= (int)sizeof(ctx->enc_data)","crypto/evp/encode.c"
                 ,0xab);
  }
  lVar6 = (long)(int)*param_1;
  uVar14 = (ulong)param_5;
  __n = (int)uVar8 - lVar6;
  uVar5 = param_5 - (int)__n;
  if ((int)param_5 < (int)__n) {
    memcpy((void *)((long)param_1 + lVar6 + 8),param_4,uVar14);
    *param_1 = *param_1 + param_5;
    return 1;
  }
  if (*param_1 == 0) {
    uVar11 = 0;
    if ((int)param_5 < (int)uVar8) goto LAB_00412a74;
  }
  else {
    memcpy((void *)((long)param_1 + lVar6 + 8),param_4,__n);
    uVar8 = param_1[1];
    pcVar7 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    if ((param_1[0x17] & 2) != 0) {
      pcVar7 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz./";
    }
    if ((int)uVar8 < 1) {
      uVar14 = 0;
      pcVar7 = param_2;
    }
    else {
      uVar14 = 0;
      pbVar9 = (byte *)((long)param_1 + 9);
      do {
        pbVar1 = pbVar9 + -1;
        uVar11 = (ulong)*pbVar1 << 0x10;
        if (uVar8 < 3) {
          if (uVar8 == 2) {
            uVar11 = uVar11 | (ulong)*pbVar9 << 8;
          }
          pcVar2 = param_2 + uVar14;
          *pcVar2 = pcVar7[uVar11 >> 0x12];
          pcVar2[1] = pcVar7[uVar11 >> 0xc & 0x3f];
          cVar12 = '=';
          if (uVar8 != 1) {
            cVar12 = pcVar7[uVar11 >> 6 & 0x3f];
          }
          pcVar2[2] = cVar12;
          uVar14 = (ulong)((int)uVar14 + 4);
          pcVar2[3] = '=';
          pcVar7 = pcVar2 + 4;
          goto LAB_004128f8;
        }
        bVar3 = *pbVar9;
        bVar4 = pbVar9[1];
        pcVar2 = param_2 + uVar14;
        uVar8 = uVar8 - 3;
        uVar14 = uVar14 + 4;
        pbVar9 = pbVar9 + 3;
        *pcVar2 = pcVar7[*pbVar1 >> 2];
        pcVar2[1] = pcVar7[(ulong)(((uint)bVar3 << 8 | (uint)uVar11) >> 0xc) & 0x3f];
        pcVar2[2] = pcVar7[(ulong)(ushort)(CONCAT11(bVar3,bVar4) >> 6) & 0x3f];
        pcVar2[3] = pcVar7[(ulong)bVar4 & 0x3f];
      } while (uVar8 != 0);
      pcVar7 = param_2 + uVar14;
    }
LAB_004128f8:
    *pcVar7 = '\0';
    uVar11 = (ulong)(int)uVar14;
    param_4 = (void *)((long)param_4 + __n);
    *param_1 = 0;
    pcVar7 = param_2 + uVar11;
    param_2 = pcVar7;
    if ((param_1[0x17] & 1) == 0) {
      uVar11 = uVar11 + 1;
      param_2 = pcVar7 + 1;
      *pcVar7 = '\n';
    }
    *param_2 = '\0';
    uVar14 = (ulong)uVar5;
    uVar8 = param_1[1];
    param_5 = uVar5;
    if ((int)uVar5 < (int)uVar8) goto LAB_00412a74;
  }
  param_5 = (uint)uVar14;
  do {
    if (uVar11 >> 0x1f != 0) break;
    pcVar7 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    if ((param_1[0x17] & 2) != 0) {
      pcVar7 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz./";
    }
    if ((int)uVar8 < 1) {
      uVar10 = 0;
      pcVar7 = param_2;
    }
    else {
      uVar10 = 0;
      pbVar9 = (byte *)((long)param_4 + 1);
      do {
        pbVar1 = pbVar9 + -1;
        uVar13 = (ulong)*pbVar1 << 0x10;
        if (uVar8 < 3) {
          if (uVar8 == 2) {
            uVar13 = uVar13 | (ulong)*pbVar9 << 8;
          }
          pcVar2 = param_2 + uVar10;
          *pcVar2 = pcVar7[uVar13 >> 0x12];
          pcVar2[1] = pcVar7[uVar13 >> 0xc & 0x3f];
          if (uVar8 == 1) {
            cVar12 = '=';
          }
          else {
            cVar12 = pcVar7[uVar13 >> 6 & 0x3f];
          }
          pcVar2[2] = cVar12;
          uVar10 = (ulong)((int)uVar10 + 4);
          pcVar2[3] = '=';
          pcVar7 = pcVar2 + 4;
          goto LAB_00412a30;
        }
        bVar3 = *pbVar9;
        bVar4 = pbVar9[1];
        pcVar2 = param_2 + uVar10;
        uVar8 = uVar8 - 3;
        uVar10 = uVar10 + 4;
        pbVar9 = pbVar9 + 3;
        *pcVar2 = pcVar7[*pbVar1 >> 2];
        pcVar2[1] = pcVar7[(ulong)(((uint)bVar3 << 8 | (uint)uVar13) >> 0xc) & 0x3f];
        pcVar2[2] = pcVar7[(ulong)(ushort)(CONCAT11(bVar3,bVar4) >> 6) & 0x3f];
        pcVar2[3] = pcVar7[(ulong)bVar4 & 0x3f];
      } while (uVar8 != 0);
      pcVar7 = param_2 + uVar10;
    }
LAB_00412a30:
    *pcVar7 = '\0';
    uVar8 = param_1[1];
    pcVar7 = param_2 + (int)uVar10;
    uVar11 = uVar11 + (long)(int)uVar10;
    param_2 = pcVar7;
    if ((param_1[0x17] & 1) == 0) {
      uVar11 = uVar11 + 1;
      param_2 = pcVar7 + 1;
      *pcVar7 = '\n';
    }
    *param_2 = '\0';
    param_5 = (int)uVar14 - uVar8;
    uVar14 = (ulong)param_5;
    param_4 = (void *)((long)param_4 + (long)(int)uVar8);
    uVar8 = param_1[1];
  } while ((int)uVar8 <= (int)param_5);
LAB_00412a74:
  if (uVar11 >> 0x1f == 0) {
    if (param_5 != 0) {
      memcpy(param_1 + 2,param_4,(long)(int)param_5);
    }
    *param_1 = param_5;
    *param_3 = (int)uVar11;
    return 1;
  }
  *param_3 = 0;
  return 0;
}


// ===== 00412af8  FUN_00412af8 =====

void FUN_00412af8(uint *param_1,undefined1 *param_2,undefined4 *param_3)

{
  byte *pbVar1;
  char *pcVar2;
  char *pcVar3;
  byte bVar4;
  byte bVar5;
  ulong uVar6;
  uint uVar7;
  byte *pbVar8;
  ulong uVar9;
  char cVar10;
  
  uVar7 = *param_1;
  if (uVar7 == 0) {
    *param_3 = 0;
    return;
  }
  pcVar3 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
  if ((param_1[0x17] & 2) != 0) {
    pcVar3 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz./";
  }
  if ((int)uVar7 < 1) {
    uVar6 = 0;
    *param_2 = 0;
    bVar4 = (byte)param_1[0x17];
  }
  else {
    uVar6 = 0;
    pbVar8 = (byte *)((long)param_1 + 9);
    do {
      pbVar1 = pbVar8 + -1;
      uVar9 = (ulong)*pbVar1 << 0x10;
      if (uVar7 < 3) {
        if (uVar7 == 2) {
          uVar9 = uVar9 | (ulong)*pbVar8 << 8;
        }
        pcVar2 = param_2 + uVar6;
        *pcVar2 = pcVar3[uVar9 >> 0x12];
        pcVar2[1] = pcVar3[uVar9 >> 0xc & 0x3f];
        cVar10 = '=';
        if (uVar7 != 1) {
          cVar10 = pcVar3[uVar9 >> 6 & 0x3f];
        }
        pcVar2[2] = cVar10;
        uVar6 = (ulong)((int)uVar6 + 4);
        pcVar2[3] = '=';
        pcVar2[4] = '\0';
        bVar4 = (byte)param_1[0x17];
        goto joined_r0x00412c44;
      }
      bVar4 = *pbVar8;
      bVar5 = pbVar8[1];
      pcVar2 = param_2 + uVar6;
      uVar7 = uVar7 - 3;
      uVar6 = uVar6 + 4;
      pbVar8 = pbVar8 + 3;
      *pcVar2 = pcVar3[*pbVar1 >> 2];
      pcVar2[1] = pcVar3[(ulong)(((uint)bVar4 << 8 | (uint)uVar9) >> 0xc) & 0x3f];
      pcVar2[2] = pcVar3[(ulong)(ushort)(CONCAT11(bVar4,bVar5) >> 6) & 0x3f];
      pcVar2[3] = pcVar3[(ulong)bVar5 & 0x3f];
    } while (uVar7 != 0);
    param_2[uVar6] = 0;
    bVar4 = (byte)param_1[0x17];
  }
joined_r0x00412c44:
  if ((bVar4 & 1) == 0) {
    param_2[uVar6 & 0xffffffff] = 10;
    uVar6 = (ulong)((int)uVar6 + 1);
  }
  param_2[uVar6 & 0xffffffff] = 0;
  *param_1 = 0;
  *param_3 = (int)uVar6;
  return;
}


// ===== 00412c4c  FUN_00412c4c =====

ulong FUN_00412c4c(undefined1 *param_1,long param_2,uint param_3)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  char cVar6;
  byte *pbVar7;
  ulong uVar8;
  
  if ((int)param_3 < 1) {
    *param_1 = 0;
    return 0;
  }
  uVar5 = 0;
  pbVar7 = (byte *)(param_2 + 1);
  do {
    pbVar1 = pbVar7 + -1;
    uVar8 = (ulong)*pbVar1 << 0x10;
    if (param_3 < 3) {
      if (param_3 == 2) {
        uVar8 = uVar8 | (ulong)*pbVar7 << 8;
      }
      pcVar2 = param_1 + uVar5;
      *pcVar2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[uVar8 >> 0x12];
      pcVar2[1] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                  [uVar8 >> 0xc & 0x3f];
      cVar6 = '=';
      if (param_3 != 1) {
        cVar6 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                [uVar8 >> 6 & 0x3f];
      }
      pcVar2[2] = cVar6;
      pcVar2[3] = '=';
      pcVar2[4] = '\0';
      return (ulong)((int)uVar5 + 4);
    }
    bVar3 = *pbVar7;
    bVar4 = pbVar7[1];
    pcVar2 = param_1 + uVar5;
    param_3 = param_3 - 3;
    uVar5 = uVar5 + 4;
    pbVar7 = pbVar7 + 3;
    *pcVar2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[*pbVar1 >> 2];
    pcVar2[1] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                [(ulong)(((uint)bVar3 << 8 | (uint)uVar8) >> 0xc) & 0x3f];
    pcVar2[2] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                [(ulong)(ushort)(CONCAT11(bVar3,bVar4) >> 6) & 0x3f];
    pcVar2[3] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                [(ulong)bVar4 & 0x3f];
  } while (param_3 != 0);
  param_1[uVar5] = 0;
  return uVar5;
}


// ===== 00412d44  FUN_00412d44 =====

void FUN_00412d44(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[0xb] = 0;
  return;
}


// ===== 00412d54  FUN_00412d54 =====

uint FUN_00412d54(uint *param_1,long param_2,int *param_3,long param_4,int param_5)

{
  undefined *puVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  puVar9 = param_1 + 2;
  uVar6 = *param_1;
  uVar7 = (ulong)uVar6;
  if ((int)uVar6 < 1) {
    iVar11 = 0;
  }
  else if (*(char *)((long)puVar9 + (uVar7 - 1)) == '=') {
    iVar11 = 1;
    if ((uVar6 != 1) && (iVar11 = 1, *(char *)((long)puVar9 + (uVar7 - 2)) == '=')) {
      iVar11 = 2;
    }
  }
  else {
    iVar11 = 0;
  }
  if (param_5 == 0) {
    uVar5 = 0;
    iVar10 = 0;
    goto LAB_00412f88;
  }
  puVar1 = &DAT_0020eb00;
  if ((param_1[0x17] & 2) != 0) {
    puVar1 = &DAT_0020ea80;
  }
  if (param_5 < 1) {
    iVar10 = 0;
    uVar12 = 1;
  }
  else {
    lVar8 = 0;
    uVar12 = 0;
    iVar10 = 0;
    do {
      uVar6 = (uint)uVar7;
      cVar3 = *(char *)(param_4 + lVar8);
      if (((long)cVar3 < 0) || (bVar2 = puVar1[cVar3], bVar2 == 0xff)) {
LAB_00412ef8:
        uVar5 = 0xffffffff;
        goto LAB_00412f88;
      }
      if (cVar3 == '=') {
        iVar11 = iVar11 + 1;
LAB_00412e5c:
        if (2 < iVar11) goto LAB_00412ef8;
      }
      else {
        if (0 < iVar11) {
          if ((bVar2 & 0xec) != 0xe0) goto LAB_00412ef8;
          goto LAB_00412e5c;
        }
        iVar11 = 0;
      }
      if (bVar2 == 0xf2) break;
      if ((bVar2 & 0xec) != 0xe0) {
        if (0x3f < (int)uVar6) goto LAB_00412ef8;
        *(char *)((long)puVar9 + (long)(int)uVar6) = cVar3;
        uVar7 = (ulong)(uVar6 + 1);
      }
      if ((int)uVar7 == 0x40) {
        iVar4 = FUN_00412fd4(param_1,param_2,puVar9);
        uVar5 = 0xffffffff;
        if (iVar4 < 0) {
          uVar6 = 0;
          goto LAB_00412f88;
        }
        uVar7 = 0;
        uVar6 = 0;
        if (iVar4 < iVar11) goto LAB_00412f88;
        param_2 = param_2 + (iVar4 - iVar11);
        iVar10 = (iVar4 - iVar11) + iVar10;
      }
      iVar4 = (int)lVar8;
      lVar8 = lVar8 + 1;
      uVar12 = (uint)(param_5 <= iVar4 + 1);
    } while (param_5 != (int)lVar8);
  }
  uVar6 = (uint)uVar7;
  if (0 < (int)uVar6) {
    if ((uVar7 & 3) == 0) {
      iVar4 = FUN_00412fd4(param_1,param_2,puVar9);
      uVar6 = 0;
      uVar5 = 0xffffffff;
      if ((iVar4 < 0) || (iVar4 < iVar11)) goto LAB_00412f88;
      uVar6 = 0;
      iVar10 = (iVar10 - iVar11) + iVar4;
    }
    else if (uVar12 == 0) {
      uVar5 = 0xffffffff;
      goto LAB_00412f88;
    }
  }
  uVar5 = uVar12 & (iVar11 == 0 || uVar6 != 0);
LAB_00412f88:
  *param_3 = iVar10;
  *param_1 = uVar6;
  return uVar5;
}


// ===== 00412fd4  FUN_00412fd4 =====

/* WARNING: Type propagation algorithm not settling */

ulong FUN_00412fd4(long param_1,long param_2,char *param_3,uint param_4)

{
  bool bVar1;
  undefined *puVar2;
  char *pcVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  
  if ((param_1 == 0) || ((*(byte *)(param_1 + 0x5c) >> 1 & 1) == 0)) {
    puVar2 = &DAT_0020eb00;
  }
  else {
    puVar2 = &DAT_0020ea80;
  }
  if (0 < (int)param_4) {
    pcVar3 = param_3 + param_4;
    do {
      if (((long)*param_3 < 0) || (puVar2[*param_3] != -0x20)) goto LAB_00413034;
      uVar8 = param_4 - 1;
      param_3 = param_3 + 1;
      bVar1 = 0 < (int)param_4;
      param_4 = uVar8;
    } while (uVar8 != 0 && bVar1);
    param_4 = 0;
    param_3 = pcVar3;
  }
LAB_00413034:
  uVar5 = (ulong)param_4;
  if (2 < (int)param_4) {
    param_4 = 3;
  }
  do {
    uVar6 = uVar5;
    if ((int)(uint)uVar6 < 4) {
      if ((param_4 & 3) != 0) {
        return 0xffffffff;
      }
      goto LAB_00413090;
    }
  } while ((-1 < (long)param_3[uVar6 - 1]) &&
          (uVar5 = uVar6 - 1, (puVar2[param_3[uVar6 - 1]] & 0xec) == 0xe0));
  param_4 = (uint)uVar6;
  if ((uVar6 & 3) != 0) {
    return 0xffffffff;
  }
LAB_00413090:
  if ((int)param_4 < 1) {
    return 0;
  }
  lVar7 = 0;
  uVar5 = 0;
  do {
    pcVar3 = param_3 + lVar7;
    if ((long)*pcVar3 < 0) {
      uVar8 = 0xff;
      lVar10 = (long)pcVar3[1];
      if (-1 < lVar10) goto LAB_004130bc;
LAB_004130ec:
      uVar9 = 0xff;
      lVar10 = (long)pcVar3[2];
      if (-1 < lVar10) goto LAB_004130c8;
LAB_004130f8:
      uVar12 = 0xff;
      lVar10 = (long)pcVar3[3];
      if (-1 < lVar10) goto LAB_004130d4;
LAB_00413104:
      uVar11 = 0xff;
    }
    else {
      uVar8 = (uint)(byte)puVar2[*pcVar3];
      lVar10 = (long)pcVar3[1];
      if (lVar10 < 0) goto LAB_004130ec;
LAB_004130bc:
      uVar9 = (uint)(byte)puVar2[lVar10];
      lVar10 = (long)pcVar3[2];
      if (lVar10 < 0) goto LAB_004130f8;
LAB_004130c8:
      uVar12 = (uint)(byte)puVar2[lVar10];
      lVar10 = (long)pcVar3[3];
      if (lVar10 < 0) goto LAB_00413104;
LAB_004130d4:
      uVar11 = (uint)(byte)puVar2[lVar10];
    }
    if (uVar8 >> 7 != 0) {
      return 0xffffffff;
    }
    if ((char)uVar9 < '\0') {
      return 0xffffffff;
    }
    if ((char)uVar12 < '\0') {
      return 0xffffffff;
    }
    if (uVar11 >> 7 != 0) {
      return 0xffffffff;
    }
    pbVar4 = (byte *)(param_2 + uVar5);
    lVar7 = lVar7 + 4;
    uVar5 = uVar5 + 3;
    pbVar4[1] = (byte)((uVar12 << 6) >> 8) | (byte)((uVar9 << 0xc) >> 8);
    *pbVar4 = (byte)((uVar9 << 0xc) >> 0x10) | (byte)((uVar8 << 0x12) >> 0x10);
    pbVar4[2] = (byte)uVar11 | (byte)(uVar12 << 6);
    if ((int)param_4 <= (int)lVar7) {
      return uVar5 & 0xffffffff;
    }
  } while( true );
}


// ===== 0041317c  FUN_0041317c =====

void FUN_0041317c(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_00412fd4(0,param_1,param_2,param_3);
  return;
}


// ===== 00413190  FUN_00413190 =====

undefined8 FUN_00413190(int *param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  
  *param_3 = 0;
  if (*param_1 == 0) {
    return 1;
  }
  iVar1 = FUN_00412fd4(param_1,param_2,param_1 + 2);
  if (-1 < iVar1) {
    *param_1 = 0;
    *param_3 = iVar1;
    return 1;
  }
  return 0xffffffff;
}


// ===== 004131f0  FUN_004131f0 =====

void FUN_004131f0(undefined8 param_1)

{
  FUN_0040ca6c(param_1,FUN_0043da80);
  return;
}


// ===== 004131fc  FUN_004131fc =====

void FUN_004131fc(undefined8 param_1,undefined8 param_2)

{
  FUN_00413208(param_1,param_2,0,0);
  return;
}


// ===== 00413208  FUN_00413208 =====

undefined8 FUN_00413208(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined1 *puVar1;
  long lVar2;
  char *pcVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  uint *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  long local_70;
  long local_68;
  
  bVar4 = (param_3 & 0xf0000) != 0x40000;
  uVar10 = 10;
  if (bVar4) {
    uVar10 = 0x20;
  }
  uVar11 = 0xc;
  if (bVar4) {
    uVar11 = 0;
  }
  uVar13 = (uint)param_4;
  if ((param_4 & 1) == 0) {
    iVar5 = FUN_0037df4c(param_1,"Certificate:\n",0xd);
    if (iVar5 < 1) {
      return 0;
    }
    iVar5 = FUN_0037df4c(param_1,"    Data:\n",10);
    if (iVar5 < 1) {
      return 0;
    }
  }
  if ((uVar13 >> 1 & 1) == 0) {
    uVar6 = FUN_00429b7c(param_2);
    if (uVar6 < 3) {
      iVar5 = FUN_0037b9f8(param_1,"%8sVersion: %ld (0x%lx)\n",&DAT_001c717f,uVar6 + 1);
    }
    else {
      iVar5 = FUN_0037b9f8(param_1,"%8sVersion: Unknown (%ld)\n",&DAT_001c717f,uVar6);
    }
    if (iVar5 < 1) {
      return 0;
    }
  }
  if ((uVar13 >> 2 & 1) == 0) {
    puVar7 = (uint *)FUN_00426cb0(param_2);
    iVar5 = FUN_0037df4c(param_1,"        Serial Number:",0x16);
    if (iVar5 < 1) {
      return 0;
    }
    if ((int)*puVar7 < 9) {
      FUN_0037f6d4();
      lVar8 = FUN_0038dea4(puVar7);
      FUN_0037f71c();
      if (lVar8 != -1) {
        puVar1 = &DAT_001eb31a;
        if (puVar7[1] != 0x102) {
          puVar1 = &DAT_001c717f;
        }
        lVar2 = -lVar8;
        if (puVar7[1] != 0x102) {
          lVar2 = lVar8;
        }
        iVar5 = FUN_0037b9f8(param_1," %s%lu (%s0x%lx)\n",puVar1,lVar2,puVar1,lVar2);
        if (iVar5 < 1) {
          return 0;
        }
        goto LAB_00413398;
      }
    }
    pcVar3 = " (Negative)";
    if (puVar7[1] != 0x102) {
      pcVar3 = "";
    }
    iVar5 = FUN_0037b9f8(param_1,"\n%12s%s",&DAT_001c717f,pcVar3);
    if (iVar5 < 1) {
      return 0;
    }
    uVar6 = 0;
    while ((long)uVar6 < (long)(int)*puVar7) {
      puVar1 = (undefined1 *)(*(long *)(puVar7 + 2) + uVar6);
      uVar6 = uVar6 + 1;
      uVar12 = 10;
      if (uVar6 != *puVar7) {
        uVar12 = 0x3a;
      }
      iVar5 = FUN_0037b9f8(param_1,"%02x%c",*puVar1,uVar12);
      if (iVar5 < 1) {
        return 0;
      }
    }
  }
LAB_00413398:
  if ((uVar13 >> 3 & 1) == 0) {
    uVar9 = FUN_00429e10(param_2);
    iVar5 = FUN_0037e608(param_1,&DAT_001ed510);
    if (iVar5 < 1) {
      return 0;
    }
    iVar5 = FUN_004137c4(param_1,uVar9,0);
    if (iVar5 < 1) {
      return 0;
    }
  }
  if ((uVar13 >> 4 & 1) == 0) {
    iVar5 = FUN_0037b9f8(param_1,"        Issuer:%c",uVar10);
    if (iVar5 < 1) {
      return 0;
    }
    uVar9 = FUN_00426a88(param_2);
    iVar5 = FUN_003e26a0(param_1,uVar9,uVar11,param_3);
    if (iVar5 < (int)(uint)(param_3 == 0)) {
      return 0;
    }
    iVar5 = FUN_0037df4c(param_1,&DAT_001e2980,1);
    if (iVar5 < 1) {
      return 0;
    }
  }
  if ((uVar13 >> 5 & 1) == 0) {
    iVar5 = FUN_0037df4c(param_1,"        Validity\n",0x11);
    if (iVar5 < 1) {
      return 0;
    }
    iVar5 = FUN_0037df4c(param_1,"            Not Before: ",0x18);
    if (iVar5 < 1) {
      return 0;
    }
    uVar9 = FUN_00429dac(param_2);
    uVar9 = FUN_003c1328(param_1,uVar9,0);
    if ((int)uVar9 == 0) {
      return uVar9;
    }
    iVar5 = FUN_0037df4c(param_1,"\n            Not After : ",0x19);
    if (iVar5 < 1) {
      return 0;
    }
    uVar9 = FUN_00429db4(param_2);
    uVar9 = FUN_003c1328(param_1,uVar9,0);
    if ((int)uVar9 == 0) {
      return uVar9;
    }
    iVar5 = FUN_0037df4c(param_1,&DAT_001e2980,1);
    if (iVar5 < 1) {
      return 0;
    }
  }
  if ((uVar13 >> 6 & 1) == 0) {
    iVar5 = FUN_0037b9f8(param_1,"        Subject:%c",uVar10);
    if (iVar5 < 1) {
      return 0;
    }
    uVar9 = FUN_00426ca0(param_2);
    iVar5 = FUN_003e26a0(param_1,uVar9,uVar11,param_3);
    if (iVar5 < (int)(uint)(param_3 == 0)) {
      return 0;
    }
    iVar5 = FUN_0037df4c(param_1,&DAT_001e2980,1);
    if (iVar5 < 1) {
      return 0;
    }
  }
  if ((uVar13 >> 7 & 1) == 0) {
    uVar9 = FUN_00429de4(param_2);
    FUN_0043d100(&local_68,0,0,0,uVar9);
    iVar5 = FUN_0037df4c(param_1,"        Subject Public Key Info:\n",0x21);
    if (iVar5 < 1) {
      return 0;
    }
    iVar5 = FUN_0037b9f8(param_1,"%12sPublic Key Algorithm: ",&DAT_001c717f);
    if (iVar5 < 1) {
      return 0;
    }
    iVar5 = FUN_00399b60(param_1,local_68);
    if (iVar5 < 1) {
      return 0;
    }
    iVar5 = FUN_0037e608(param_1,&DAT_001e2980);
    if (iVar5 < 1) {
      return 0;
    }
    lVar8 = FUN_00427350(param_2);
    if (lVar8 == 0) {
      FUN_0037b9f8(param_1,"%12sUnable to load Public Key\n",&DAT_001c717f);
      FUN_0040f5f8(param_1);
    }
    else {
      FUN_003a8178(param_1,lVar8,0x10,0);
    }
  }
  if (((uVar13 >> 0xc & 1) == 0) &&
     (((FUN_00429df4(param_2,&local_68,&local_70), local_68 != 0 &&
       ((iVar5 = FUN_0037b9f8(param_1,"%8sIssuer Unique ID: ",&DAT_001c717f), iVar5 < 1 ||
        (iVar5 = FUN_004138f4(param_1,local_68,0xc), iVar5 == 0)))) ||
      ((local_70 != 0 &&
       ((iVar5 = FUN_0037b9f8(param_1,"%8sSubject Unique ID: ",&DAT_001c717f), iVar5 < 1 ||
        (iVar5 = FUN_004138f4(param_1,local_70,0xc), iVar5 == 0)))))))) {
    return 0;
  }
  if ((uVar13 >> 8 & 1) == 0) {
    uVar9 = FUN_00429dec(param_2);
    uVar9 = FUN_0041e6e8(param_1,"X509v3 extensions",uVar9,param_4,8);
    if ((int)uVar9 == 0) {
      return uVar9;
    }
  }
  if ((uVar13 >> 9 & 1) == 0) {
    FUN_0043defc(&local_70,&local_68,param_2);
    iVar5 = FUN_004137c4(param_1,local_68,local_70);
    if (iVar5 < 1) {
      return 0;
    }
  }
  if ((uVar13 >> 10 & 1) == 0) {
    FUN_00413a68(param_1,param_2,0);
  }
  return 1;
}


// ===== 004137c4  FUN_004137c4 =====

ulong FUN_004137c4(undefined8 param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auStack_18 [4];
  undefined4 local_14;
  
  iVar1 = FUN_0037b9f8(param_1,"%*sSignature Algorithm: ",4,&DAT_001c717f);
  if (((0 < iVar1) && (iVar1 = FUN_00399b60(param_1,*param_2), 0 < iVar1)) &&
     ((param_3 == 0 ||
      (iVar1 = FUN_0037b9f8(param_1,"\n%*sSignature Value:",4,&DAT_001c717f), 0 < iVar1)))) {
    uVar2 = FUN_003dd5b4(*param_2);
    if (((((int)uVar2 == 0) || (iVar1 = FUN_003de640(uVar2,auStack_18,&local_14), iVar1 == 0)) ||
        (lVar3 = FUN_003a9c6c(0,local_14), lVar3 == 0)) || (*(code **)(lVar3 + 0xa0) == (code *)0x0)
       ) {
      iVar1 = FUN_0037df4c(param_1,&DAT_001e2980,1);
      uVar4 = (ulong)(iVar1 == 1);
      if ((param_3 != 0) && (iVar1 == 1)) {
        uVar4 = FUN_004138f4(param_1,param_3,8);
        return uVar4;
      }
    }
    else {
      uVar4 = (**(code **)(lVar3 + 0xa0))(param_1,param_2,param_3,8,0);
    }
    return uVar4;
  }
  return 0;
}


// ===== 004138f4  FUN_004138f4 =====

bool FUN_004138f4(undefined8 param_1,uint *param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long lVar7;
  uint uVar8;
  
  uVar8 = *param_2;
  if ((int)uVar8 < 1) {
LAB_00413a30:
    iVar3 = FUN_0037df4c(param_1,&DAT_001e2980,1);
    bVar2 = iVar3 == 1;
  }
  else {
    puVar6 = *(undefined1 **)(param_2 + 2);
    iVar3 = FUN_0037eb98(param_1,param_3);
    if (0 < iVar3) {
      puVar1 = &DAT_001c717f;
      if (uVar8 != 1) {
        puVar1 = &DAT_001d9efd;
      }
      iVar3 = FUN_0037b9f8(param_1,"%02x%s",*puVar6,puVar1);
      if (0 < iVar3) {
        uVar5 = (ulong)(uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU));
        lVar7 = (ulong)uVar8 - 2;
        iVar3 = -1;
        uVar8 = 1;
        do {
          puVar6 = puVar6 + 1;
          uVar5 = uVar5 - 1;
          if (uVar5 == 0) goto LAB_00413a30;
          if ((iVar3 + (uVar8 / 0x12) * 0x12 == 0) &&
             ((iVar4 = FUN_0037df4c(param_1,&DAT_001e2980,1), iVar4 < 1 ||
              (iVar4 = FUN_0037eb98(param_1,param_3,param_3), iVar4 < 1)))) break;
          puVar1 = &DAT_001c717f;
          if (lVar7 != 0) {
            puVar1 = &DAT_001d9efd;
          }
          iVar4 = FUN_0037b9f8(param_1,"%02x%s",*puVar6,puVar1);
          iVar3 = iVar3 + -1;
          uVar8 = uVar8 + 1;
          lVar7 = lVar7 + -1;
        } while (0 < iVar4);
      }
    }
    bVar2 = false;
  }
  return bVar2;
}


// ===== 00413a68  FUN_00413a68 =====

undefined8 FUN_00413a68(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_a0 [80];
  int local_38;
  int local_34;
  
  iVar2 = FUN_0043e1a0(param_2);
  if (iVar2 != 0) {
    lVar4 = FUN_0043e55c(param_2);
    lVar5 = FUN_0043e574(param_2);
    if (lVar4 == 0) {
      FUN_0037b9f8(param_1,"%*sNo Trusted Uses.\n",param_3,&DAT_001c717f);
    }
    else {
      FUN_0037b9f8(param_1,"%*sTrusted Uses:\n%*s",param_3,&DAT_001c717f,param_3 + 2,&DAT_001c717f);
      local_38 = 0;
      iVar2 = FUN_0040caf8(lVar4);
      if (0 < iVar2) {
        iVar2 = 1;
        while( true ) {
          uVar6 = FUN_0040cb0c(lVar4,iVar2 + -1);
          FUN_003dd260(auStack_a0,0x50,uVar6,0);
          FUN_0037e608(param_1,auStack_a0);
          local_38 = iVar2;
          iVar3 = FUN_0040caf8(lVar4);
          if (iVar3 <= iVar2) break;
          FUN_0037e608(param_1,&DAT_001c2f11);
          iVar2 = iVar2 + 1;
        }
      }
      FUN_0037e608(param_1,&DAT_001e2980);
    }
    if (lVar5 == 0) {
      FUN_0037b9f8(param_1,"%*sNo Rejected Uses.\n",param_3,&DAT_001c717f);
      lVar4 = FUN_0043e330(param_2,&local_38);
    }
    else {
      FUN_0037b9f8(param_1,"%*sRejected Uses:\n%*s",param_3,&DAT_001c717f,param_3 + 2,&DAT_001c717f)
      ;
      local_38 = 0;
      iVar2 = FUN_0040caf8(lVar5);
      if (0 < iVar2) {
        iVar2 = 1;
        while( true ) {
          uVar6 = FUN_0040cb0c(lVar5,iVar2 + -1);
          FUN_003dd260(auStack_a0,0x50,uVar6,0);
          FUN_0037e608(param_1,auStack_a0);
          local_38 = iVar2;
          iVar3 = FUN_0040caf8(lVar5);
          if (iVar3 <= iVar2) break;
          FUN_0037e608(param_1,&DAT_001c2f11);
          iVar2 = iVar2 + 1;
        }
      }
      FUN_0037e608(param_1,&DAT_001e2980);
      lVar4 = FUN_0043e330(param_2,&local_38);
    }
    if (lVar4 != 0) {
      FUN_0037b9f8(param_1,"%*sAlias: %.*s\n",param_3,&DAT_001c717f,local_38,lVar4);
    }
    lVar4 = FUN_0043e35c(param_2,&local_34);
    if (lVar4 != 0) {
      FUN_0037b9f8(param_1,"%*sKey Id: ",param_3,&DAT_001c717f);
      local_38 = 0;
      if (0 < local_34) {
        do {
          puVar1 = &DAT_001c717f;
          if (local_38 != 0) {
            puVar1 = &DAT_001d9efd;
          }
          FUN_0037b9f8(param_1,"%s%02X",puVar1,*(undefined1 *)(lVar4 + local_38));
          local_38 = local_38 + 1;
        } while (local_38 < local_34);
      }
      FUN_0037df4c(param_1,&DAT_001e2980,1);
    }
    return 1;
  }
  return 1;
}


// ===== 00413d48  FUN_00413d48 =====

undefined8 FUN_00413d48(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_45;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  long local_28;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = FUN_0037b9f8(param_1,"        Subject OCSP hash: ");
  if (iVar1 < 1) {
LAB_00414310:
    lVar3 = 0;
  }
  else {
    uVar2 = FUN_00426ca0(param_2);
    iVar1 = FUN_0043b548(uVar2,0);
    if (iVar1 < 1) goto LAB_00414310;
    lVar3 = FUN_003c83a4(iVar1,"crypto/x509/t_x509.c",0xf8);
    local_28 = lVar3;
    if (lVar3 != 0) {
      FUN_0043b548(uVar2,&local_28);
      lVar4 = FUN_0039e6f4(*(undefined8 *)(param_2 + 0x160),&DAT_001eef82,
                           *(undefined8 *)(param_2 + 0x168));
      if ((((lVar4 != 0) && (iVar1 = FUN_0039e518(lVar3,iVar1,&local_54,0,lVar4,0), iVar1 != 0)) &&
          (iVar1 = FUN_0037b9f8(param_1,&DAT_001e4bda,local_54), 0 < iVar1)) &&
         ((((((iVar1 = FUN_0037b9f8(param_1,&DAT_001e4bda,local_53), 0 < iVar1 &&
              (iVar1 = FUN_0037b9f8(param_1,&DAT_001e4bda,local_52), 0 < iVar1)) &&
             ((iVar1 = FUN_0037b9f8(param_1,&DAT_001e4bda,local_51), 0 < iVar1 &&
              ((iVar1 = FUN_0037b9f8(param_1,&DAT_001e4bda,local_50), 0 < iVar1 &&
               (iVar1 = FUN_0037b9f8(param_1,&DAT_001e4bda,local_4f), 0 < iVar1)))))) &&
            (iVar1 = FUN_0037b9f8(param_1,&DAT_001e4bda,local_4e), 0 < iVar1)) &&
           ((((iVar1 = FUN_0037b9f8(param_1,&DAT_001e4bda,local_4d), 0 < iVar1 &&
              (iVar1 = FUN_0037b9f8(param_1,&DAT_001e4bda,local_4c), 0 < iVar1)) &&
             (iVar1 = FUN_0037b9f8(param_1,&DAT_001e4bda,local_4b), 0 < iVar1)) &&
            ((iVar1 = FUN_0037b9f8(param_1,&DAT_001e4bda,local_4a), 0 < iVar1 &&
             (iVar1 = FUN_0037b9f8(param_1,&DAT_001e4bda,local_49), 0 < iVar1)))))) &&
          (((iVar1 = FUN_0037b9f8(param_1,&DAT_001e4bda,local_48), 0 < iVar1 &&
            ((iVar1 = FUN_0037b9f8(param_1,&DAT_001e4bda,local_47), 0 < iVar1 &&
             (iVar1 = FUN_0037b9f8(param_1,&DAT_001e4bda,local_46), 0 < iVar1)))) &&
           ((iVar1 = FUN_0037b9f8(param_1,&DAT_001e4bda,local_45), 0 < iVar1 &&
            ((((iVar1 = FUN_0037b9f8(param_1,&DAT_001e4bda,local_44), 0 < iVar1 &&
               (iVar1 = FUN_0037b9f8(param_1,&DAT_001e4bda,local_43), 0 < iVar1)) &&
              (iVar1 = FUN_0037b9f8(param_1,&DAT_001e4bda,local_42), 0 < iVar1)) &&
             (iVar1 = FUN_0037b9f8(param_1,&DAT_001e4bda,local_41), 0 < iVar1)))))))))) {
        FUN_003c86b4(lVar3,"crypto/x509/t_x509.c",0x105);
        iVar1 = FUN_0037b9f8(param_1,"\n        Public key OCSP hash: ");
        if (0 < iVar1) {
          lVar3 = FUN_0043d140(param_2);
          if (lVar3 == 0) goto LAB_00414320;
          uVar2 = FUN_0038f014();
          iVar1 = FUN_0038f004(lVar3);
          iVar1 = FUN_0039e518(uVar2,(long)iVar1,&local_54,0,lVar4,0);
          if ((((((iVar1 != 0) && (iVar1 = FUN_0037b9f8(param_1,&DAT_001e4bda,local_54), 0 < iVar1))
                && ((iVar1 = FUN_0037b9f8(param_1,&DAT_001e4bda,local_53), 0 < iVar1 &&
                    ((iVar1 = FUN_0037b9f8(param_1,&DAT_001e4bda,local_52), 0 < iVar1 &&
                     (iVar1 = FUN_0037b9f8(param_1,&DAT_001e4bda,local_51), 0 < iVar1)))))) &&
               ((iVar1 = FUN_0037b9f8(param_1,&DAT_001e4bda,local_50), 0 < iVar1 &&
                (((iVar1 = FUN_0037b9f8(param_1,&DAT_001e4bda,local_4f), 0 < iVar1 &&
                  (iVar1 = FUN_0037b9f8(param_1,&DAT_001e4bda,local_4e), 0 < iVar1)) &&
                 (iVar1 = FUN_0037b9f8(param_1,&DAT_001e4bda,local_4d), 0 < iVar1)))))) &&
              (((iVar1 = FUN_0037b9f8(param_1,&DAT_001e4bda,local_4c), 0 < iVar1 &&
                (iVar1 = FUN_0037b9f8(param_1,&DAT_001e4bda,local_4b), 0 < iVar1)) &&
               ((iVar1 = FUN_0037b9f8(param_1,&DAT_001e4bda,local_4a), 0 < iVar1 &&
                ((iVar1 = FUN_0037b9f8(param_1,&DAT_001e4bda,local_49), 0 < iVar1 &&
                 (iVar1 = FUN_0037b9f8(param_1,&DAT_001e4bda,local_48), 0 < iVar1)))))))) &&
             ((iVar1 = FUN_0037b9f8(param_1,&DAT_001e4bda,local_47), 0 < iVar1 &&
              (((((iVar1 = FUN_0037b9f8(param_1,&DAT_001e4bda,local_46), 0 < iVar1 &&
                  (iVar1 = FUN_0037b9f8(param_1,&DAT_001e4bda,local_45), 0 < iVar1)) &&
                 (iVar1 = FUN_0037b9f8(param_1,&DAT_001e4bda,local_44), 0 < iVar1)) &&
                ((iVar1 = FUN_0037b9f8(param_1,&DAT_001e4bda,local_43), 0 < iVar1 &&
                 (iVar1 = FUN_0037b9f8(param_1,&DAT_001e4bda,local_42), 0 < iVar1)))) &&
               (iVar1 = FUN_0037b9f8(param_1,&DAT_001e4bda,local_41), 0 < iVar1)))))) {
            FUN_0037b9f8(param_1,&DAT_001e2980);
            FUN_0039d050(lVar4);
            return 1;
          }
        }
        lVar3 = 0;
      }
      goto LAB_00414320;
    }
  }
  lVar4 = 0;
LAB_00414320:
  FUN_003c86b4(lVar3,"crypto/x509/t_x509.c",0x11f);
  FUN_0039d050(lVar4);
  return 0;
}


// ===== 0041435c  FUN_0041435c =====

ulong FUN_0041435c(undefined8 param_1,long param_2,ulong param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if (param_2 == 0) {
    iVar1 = FUN_0037b9f8(param_1,"    (no certificate)\n");
    return (ulong)(0 < iVar1);
  }
  iVar1 = FUN_0037b9f8(param_1,"    certificate\n");
  if ((0 < iVar1) && (iVar1 = FUN_0037b9f8(param_1,"        Subject:%c",0x20), 0 < iVar1)) {
    uVar2 = FUN_00426ca0(param_2);
    iVar1 = FUN_003e26a0(param_1,uVar2,0,0x2031f);
    if ((-1 < iVar1) && (iVar1 = FUN_0037df4c(param_1,&DAT_001e2980,1), 0 < iVar1)) {
      iVar1 = FUN_0041fa04(param_2,param_2);
      if (iVar1 == 0) {
        iVar1 = FUN_0037b9f8(param_1,"        self-issued\n");
      }
      else {
        iVar1 = FUN_0037b9f8(param_1,&DAT_001bc0af);
        if (iVar1 < 1) {
          return 0;
        }
        iVar1 = FUN_0037b9f8(param_1,"        Issuer:%c",0x20);
        if (iVar1 < 1) {
          return 0;
        }
        uVar2 = FUN_00426a88(param_2);
        iVar1 = FUN_003e26a0(param_1,uVar2,0,0x2031f);
        if (iVar1 < 0) {
          return 0;
        }
        iVar1 = FUN_0037df4c(param_1,&DAT_001e2980,1);
      }
      if (0 < iVar1) {
        uVar3 = FUN_00413208(param_1,param_2,0x2031f,0xffffffffffffffdb);
        if ((int)uVar3 == 0) {
          return uVar3;
        }
        FUN_00429dac(param_2);
        iVar1 = FUN_0042b364();
        if ((iVar1 < 1) || (iVar1 = FUN_0037b9f8(param_1,"        not yet valid\n"), 0 < iVar1)) {
          FUN_00429db4(param_2);
          iVar1 = FUN_0042b364();
          if ((-1 < iVar1) || (iVar1 = FUN_0037b9f8(param_1,"        no more valid\n"), 0 < iVar1))
          {
            uVar3 = FUN_00413208(param_1,param_2,0x2031f,
                                 (param_3 ^ 0xffffffffffffffff) & 0xffffffffffffdfff);
            return uVar3;
          }
        }
      }
    }
  }
  return 0;
}


// ===== 0041455c  FUN_0041455c =====

undefined8 FUN_0041455c(undefined8 param_1,long param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  
  if ((int)param_1 != 0) {
    return param_1;
  }
  if (param_2 == 0) {
    return param_1;
  }
  iVar2 = FUN_0042bd68(param_2);
  FUN_00387560();
  lVar4 = FUN_0037db44();
  if (lVar4 == 0) {
    return 0;
  }
  lVar5 = FUN_0042bdc0(param_2);
  pcVar1 = "Certificate verification";
  if (lVar5 != 0) {
    pcVar1 = "CRL path validation";
  }
  uVar3 = FUN_0042bd78(param_2);
  uVar6 = FUN_0042a0b8((long)iVar2);
  FUN_0037b9f8(lVar4,"%s at depth = %d error = %d (%s)\n",pcVar1,uVar3,iVar2,uVar6);
  FUN_00428ff0(param_2);
  uVar6 = FUN_00428f18();
  if (iVar2 == 0x40) {
    lVar5 = FUN_00432764(uVar6);
    if (lVar5 != 0) {
      FUN_0037b9f8(lVar4,"Expected IP address = %s\n",lVar5);
    }
    FUN_003c86b4(lVar5,"crypto/x509/t_x509.c",0x1f9);
  }
  else {
    if (iVar2 != 0x3f) {
      if (iVar2 == 0x3e) {
        FUN_0037b9f8(lVar4,"Expected hostname(s) = ");
        lVar5 = FUN_0043252c(uVar6,0);
        if (lVar5 != 0) {
          FUN_0037b9f8(lVar4,&DAT_001befda,&DAT_001c717f,lVar5);
          lVar5 = FUN_0043252c(uVar6,1);
          if (lVar5 != 0) {
            iVar7 = 2;
            do {
              FUN_0037b9f8(lVar4,&DAT_001befda,&DAT_001c2f11,lVar5);
              lVar5 = FUN_0043252c(uVar6,iVar7);
              iVar7 = iVar7 + 1;
            } while (lVar5 != 0);
          }
        }
        FUN_0037b9f8(lVar4,&DAT_001e2980);
      }
      FUN_0037b9f8(lVar4,"Failure for:\n");
      uVar6 = FUN_0042bd88(param_2);
      FUN_0041435c(lVar4,uVar6,0x100);
      if (((iVar2 - 0x12U < 0x35) &&
          ((1L << ((ulong)(iVar2 - 0x12U) & 0x3f) & 0x10000000008207U) != 0)) || (iVar2 == 2)) {
        FUN_0037b9f8(lVar4,"Non-trusted certs:\n");
        uVar6 = FUN_0042d27c(param_2);
        FUN_00414870(lVar4,uVar6);
        FUN_0037b9f8(lVar4,"Certs in trust store:\n");
        lVar5 = FUN_00428ff0(param_2);
        if (lVar5 == 0) {
          FUN_0037b9f8(lVar4,"    (no trusted store)\n");
        }
        else {
          uVar6 = FUN_004285ac();
          FUN_00414870(lVar4,uVar6);
          FUN_0040ca6c(uVar6,PTR_FUN_007a1bc0);
        }
      }
      goto LAB_00414810;
    }
    lVar5 = FUN_0043275c(uVar6);
    if (lVar5 != 0) {
      FUN_0037b9f8(lVar4,"Expected email address = %s\n",lVar5);
    }
  }
  FUN_0037b9f8(lVar4,"Failure for:\n");
  uVar6 = FUN_0042bd88(param_2);
  FUN_0041435c(lVar4,uVar6,0x100);
LAB_00414810:
  FUN_00379868();
  FUN_0037995c("crypto/x509/t_x509.c",0x20f,"X509_STORE_CTX_print_verify_cb");
  FUN_00379a5c(0xb,0x8b,0);
  FUN_0040f55c(&DAT_001e2980,lVar4);
  FUN_0037db50(lVar4);
  return 0;
}


// ===== 00414870  FUN_00414870 =====

void FUN_00414870(undefined8 param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((param_2 == 0) || (iVar1 = FUN_0040caf8(param_2), iVar1 < 1)) {
    FUN_0037b9f8(param_1,"    (no certificates)\n");
    return;
  }
  iVar1 = FUN_0040caf8(param_2);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      lVar3 = FUN_0040cb0c(param_2,iVar1);
      if (lVar3 != 0) {
        iVar2 = FUN_0041435c(param_1,lVar3,0);
        if (iVar2 == 0) {
          return;
        }
        uVar4 = FUN_00429dec(lVar3);
        iVar2 = FUN_0041e6e8(param_1,0,uVar4,0x2000,8);
        if (iVar2 == 0) {
          return;
        }
      }
      iVar1 = iVar1 + 1;
      iVar2 = FUN_0040caf8(param_2);
    } while (iVar1 < iVar2);
  }
  return;
}


// ===== 00414940  FUN_00414940 =====

void FUN_00414940(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00414950(param_1,param_2,0,param_3,param_4);
  return;
}


// ===== 00414950  FUN_00414950 =====

long FUN_00414950(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 char *param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  
  iVar1 = strncmp(param_5,"critical,",9);
  if (iVar1 == 0) {
    param_5 = param_5 + 8;
    do {
      param_5 = param_5 + 1;
      iVar1 = FUN_003c475c(*param_5,8);
    } while (iVar1 != 0);
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  lVar5 = 4;
  iVar1 = strncmp(param_5,"DER:",4);
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  else {
    lVar5 = 5;
    iVar1 = strncmp(param_5,"ASN1:",5);
    if (iVar1 != 0) {
      uVar2 = FUN_003dcff4(param_4);
      lVar5 = FUN_00414dd0(param_1,param_2,uVar2,uVar4,param_5);
      if (lVar5 != 0) {
        return lVar5;
      }
      FUN_00379868();
      if (param_3 == 0) {
        FUN_0037995c("crypto/x509/v3_conf.c",0x34,"X509V3_EXT_nconf_int");
        FUN_00379a5c(0x22,0x80,"name=%s, value=%s",param_4,param_5);
      }
      else {
        FUN_0037995c("crypto/x509/v3_conf.c",0x30,"X509V3_EXT_nconf_int");
        FUN_00379a5c(0x22,0x80,"section=%s, name=%s, value=%s",param_3,param_4,param_5);
      }
      return 0;
    }
    uVar3 = 2;
  }
  param_5 = param_5 + lVar5 + -1;
  do {
    param_5 = param_5 + 1;
    iVar1 = FUN_003c475c(*param_5,8);
  } while (iVar1 != 0);
  lVar5 = FUN_00414c08(param_4,param_5,uVar4,uVar3,param_2);
  return lVar5;
}


// ===== 00414afc  FUN_00414afc =====

void FUN_00414afc(undefined8 param_1,undefined8 param_2,undefined4 param_3,char *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  iVar1 = strncmp(param_4,"critical,",9);
  if (iVar1 == 0) {
    param_4 = param_4 + 8;
    do {
      param_4 = param_4 + 1;
      iVar1 = FUN_003c475c(*param_4,8);
    } while (iVar1 != 0);
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  lVar5 = 4;
  iVar1 = strncmp(param_4,"DER:",4);
  if (iVar1 == 0) {
    uVar4 = 1;
  }
  else {
    lVar5 = 5;
    iVar1 = strncmp(param_4,"ASN1:",5);
    if (iVar1 != 0) {
      FUN_00414dd0(param_1,param_2,param_3,uVar3,param_4);
      return;
    }
    uVar4 = 2;
  }
  param_4 = param_4 + lVar5 + -1;
  do {
    param_4 = param_4 + 1;
    iVar1 = FUN_003c475c(*param_4,8);
  } while (iVar1 != 0);
  uVar2 = FUN_003dce44(param_3);
  FUN_00414c08(uVar2,param_4,uVar3,uVar4,param_2);
  return;
}


// ===== 00414c08  FUN_00414c08 =====

undefined8
FUN_00414c08(undefined8 param_1,undefined8 param_2,undefined4 param_3,int param_4,undefined8 param_5
            )

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  char *pcVar6;
  long local_50;
  long local_48;
  
  local_50 = 0;
  lVar2 = FUN_003dce7c(param_1,0);
  if (lVar2 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/v3_conf.c",0xf9,"v3_generic_extension");
    pcVar6 = "name=%s";
    uVar5 = 0x73;
LAB_00414d40:
    FUN_00379a5c(0x22,uVar5,pcVar6,param_1);
    lVar3 = 0;
    puVar4 = (undefined4 *)0x0;
  }
  else {
    if (param_4 == 2) {
      local_48 = 0;
      lVar3 = FUN_003bf254(param_2,param_5);
      if (lVar3 != 0) {
        iVar1 = FUN_0038a640(lVar3,&local_48);
        local_50 = (long)iVar1;
        FUN_0038a658(lVar3);
        lVar3 = local_48;
        if (local_48 != 0) goto LAB_00414c6c;
      }
LAB_00414d10:
      FUN_00379868();
      FUN_0037995c("crypto/x509/v3_conf.c",0x104,"v3_generic_extension");
      pcVar6 = "value=%s";
      uVar5 = 0x74;
      param_1 = param_2;
      goto LAB_00414d40;
    }
    if ((param_4 != 1) || (lVar3 = FUN_003ca840(param_2,&local_50), lVar3 == 0)) goto LAB_00414d10;
LAB_00414c6c:
    puVar4 = (undefined4 *)FUN_0038a358();
    if (puVar4 != (undefined4 *)0x0) {
      *(long *)(puVar4 + 2) = lVar3;
      *puVar4 = (int)local_50;
      uVar5 = FUN_0042a590(0,lVar2,param_3,puVar4);
      lVar3 = 0;
      goto LAB_00414d50;
    }
    FUN_00379868();
    FUN_0037995c("crypto/x509/v3_conf.c",0x10a,"v3_generic_extension");
    FUN_00379a5c(0x22,0x8000d,0);
  }
  uVar5 = 0;
LAB_00414d50:
  FUN_0039a0f4(lVar2);
  thunk_FUN_0038eddc(puVar4);
  FUN_003c86b4(lVar3,"crypto/x509/v3_conf.c",0x117);
  return uVar5;
}


// ===== 00414dd0  FUN_00414dd0 =====

undefined8
FUN_00414dd0(undefined8 param_1,long param_2,int param_3,undefined4 param_4,char *param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  
  if (param_3 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/v3_conf.c",0x58,"do_ext_nconf");
    uVar6 = 0x82;
  }
  else {
    lVar2 = FUN_00415cd8(param_3);
    if (lVar2 != 0) {
      if (*(long *)(lVar2 + 0x48) == 0) {
        pcVar7 = *(code **)(lVar2 + 0x38);
        if (pcVar7 == (code *)0x0) {
          pcVar7 = *(code **)(lVar2 + 0x58);
          if (pcVar7 == (code *)0x0) {
            FUN_00379868();
            FUN_0037995c("crypto/x509/v3_conf.c",0x7c,"do_ext_nconf");
            uVar6 = FUN_003dce44(param_3);
            FUN_00379a5c(0x22,0x67,"name=%s",uVar6);
            return 0;
          }
          if ((*(long *)(param_2 + 0x30) == 0) || (*(long *)(param_2 + 0x28) == 0)) {
            FUN_00379868();
            FUN_0037995c("crypto/x509/v3_conf.c",0x76,"do_ext_nconf");
            uVar6 = 0x88;
            goto LAB_00414e84;
          }
        }
        lVar4 = (*pcVar7)(lVar2,param_2,param_5);
        if (lVar4 == 0) {
          return 0;
        }
      }
      else {
        if (*param_5 == '@') {
          lVar3 = FUN_003bb7d0(param_1,param_5 + 1);
        }
        else {
          lVar3 = FUN_00423474(param_5);
        }
        if ((lVar3 == 0) || (iVar1 = FUN_0040caf8(lVar3), iVar1 < 1)) {
          FUN_00379868();
          FUN_0037995c("crypto/x509/v3_conf.c",0x66,"do_ext_nconf");
          uVar6 = FUN_003dce44(param_3);
          FUN_00379a5c(0x22,0x69,"name=%s,section=%s",uVar6,param_5);
          if (*param_5 == '@') {
            return 0;
          }
          FUN_0040ca6c(lVar3,PTR_FUN_007a1b70);
          return 0;
        }
        lVar4 = (**(code **)(lVar2 + 0x48))(lVar2,param_2,lVar3);
        if (*param_5 != '@') {
          FUN_0040ca6c(lVar3,PTR_FUN_007a1b70);
        }
        if (lVar4 == 0) {
          return 0;
        }
      }
      uVar6 = FUN_0041512c(lVar2,param_3,param_4,lVar4);
      if (*(code **)(lVar2 + 8) == (code *)0x0) {
        (**(code **)(lVar2 + 0x18))(lVar4);
        return uVar6;
      }
      uVar5 = (**(code **)(lVar2 + 8))();
      FUN_0038c75c(lVar4,uVar5);
      return uVar6;
    }
    FUN_00379868();
    FUN_0037995c("crypto/x509/v3_conf.c",0x5c,"do_ext_nconf");
    uVar6 = 0x81;
  }
LAB_00414e84:
  FUN_00379a5c(0x22,uVar6,0);
  return 0;
}


// ===== 004150ac  FUN_004150ac =====

undefined8 FUN_004150ac(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00415cd8();
  if (lVar1 != 0) {
    uVar2 = FUN_0041512c(lVar1,param_1,param_2,param_3);
    return uVar2;
  }
  FUN_00379868();
  FUN_0037995c("crypto/x509/v3_conf.c",199,"X509V3_EXT_i2d");
  FUN_00379a5c(0x22,0x81,0);
  return 0;
}


// ===== 0041512c  FUN_0041512c =====

long FUN_0041512c(long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  long lVar5;
  long local_48;
  long local_28;
  
  local_28 = 0;
  if (*(code **)(param_1 + 8) == (code *)0x0) {
    iVar2 = (**(code **)(param_1 + 0x28))(param_4,0);
    if (iVar2 < 1) {
      FUN_00379868();
      uVar3 = 0xa0;
      goto LAB_00415290;
    }
    local_28 = FUN_003c83a4(iVar2,"crypto/x509/v3_conf.c",0xa3);
    if (local_28 != 0) {
      local_48 = local_28;
      (**(code **)(param_1 + 0x28))(param_4,&local_48);
      piVar4 = (int *)FUN_0038a358();
      lVar5 = local_28;
      goto joined_r0x0041522c;
    }
  }
  else {
    uVar3 = (**(code **)(param_1 + 8))();
    iVar2 = FUN_0039b478(param_4,&local_28,uVar3);
    if (-1 < iVar2) {
      piVar4 = (int *)FUN_0038a358();
      lVar5 = local_28;
joined_r0x0041522c:
      if (piVar4 == (int *)0x0) {
        local_28 = lVar5;
        FUN_00379868();
        FUN_0037995c("crypto/x509/v3_conf.c",0xa9,"do_ext_i2d");
        uVar1 = 0x8000d;
      }
      else {
        local_28 = 0;
        *(long *)(piVar4 + 2) = lVar5;
        *piVar4 = iVar2;
        lVar5 = FUN_0042a4e0(0,param_2,param_3,piVar4);
        if (lVar5 != 0) {
          thunk_FUN_0038eddc(piVar4);
          return lVar5;
        }
        FUN_00379868();
        FUN_0037995c("crypto/x509/v3_conf.c",0xb2,"do_ext_i2d");
        uVar1 = 0x80022;
      }
      FUN_00379a5c(0x22,uVar1,0);
      goto LAB_004152e4;
    }
    FUN_00379868();
    uVar3 = 0x98;
LAB_00415290:
    FUN_0037995c("crypto/x509/v3_conf.c",uVar3,"do_ext_i2d");
    FUN_00379a5c(0x22,0x8000d,0);
  }
  piVar4 = (int *)0x0;
LAB_004152e4:
  FUN_003c86b4(local_28,"crypto/x509/v3_conf.c",0xba);
  thunk_FUN_0038eddc(piVar4);
  return 0;
}


// ===== 0041531c  FUN_0041531c =====

long FUN_0041531c(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  char *__s1;
  int iVar12;
  
  lVar6 = FUN_003bb7d0(param_1,param_3);
  if (lVar6 != 0) {
    iVar1 = FUN_0040caf8();
    if (iVar1 < 1) {
      iVar12 = -1;
      iVar1 = -1;
      iVar3 = FUN_0040caf8(lVar6);
    }
    else {
      iVar3 = 0;
      iVar1 = -1;
      iVar5 = -1;
      do {
        while( true ) {
          iVar12 = iVar3;
          lVar7 = FUN_0040cb0c(lVar6,iVar12);
          __s1 = *(char **)(lVar7 + 8);
          iVar3 = strcmp(__s1,"authorityKeyIdentifier");
          if (iVar3 == 0) break;
          iVar3 = strcmp(__s1,"subjectKeyIdentifier");
          iVar2 = iVar12;
          if (iVar3 != 0) {
            iVar2 = iVar1;
          }
          iVar3 = iVar12 + 1;
          iVar4 = FUN_0040caf8(lVar6);
          iVar1 = iVar2;
          iVar12 = iVar5;
          if (iVar4 <= iVar3) goto LAB_004153e4;
        }
        iVar2 = FUN_0040caf8(lVar6);
        iVar3 = iVar12 + 1;
        iVar5 = iVar12;
      } while (iVar12 + 1 < iVar2);
LAB_004153e4:
      iVar3 = FUN_0040caf8(lVar6);
    }
    if (0 < iVar3) {
      if (param_4 == (undefined8 *)0x0) {
        iVar3 = 0;
        if (iVar12 < 0 || iVar1 <= iVar12) {
          do {
            puVar8 = (undefined8 *)FUN_0040cb0c(lVar6,iVar3);
            lVar7 = FUN_00414950(param_1,param_2,*puVar8,puVar8[1],puVar8[2]);
            if (lVar7 == 0) {
              return 0;
            }
            FUN_0043b4b0();
            iVar3 = iVar3 + 1;
            iVar1 = FUN_0040caf8(lVar6);
          } while (iVar3 < iVar1);
        }
        else {
          do {
            puVar8 = (undefined8 *)FUN_0040cb0c(lVar6,iVar3);
            iVar5 = iVar1;
            if ((iVar12 == iVar3) || (iVar5 = iVar12, iVar1 == iVar3)) {
              puVar8 = (undefined8 *)FUN_0040cb0c(lVar6,iVar5);
            }
            lVar7 = FUN_00414950(param_1,param_2,*puVar8,puVar8[1],puVar8[2]);
            if (lVar7 == 0) {
              return 0;
            }
            FUN_0043b4b0();
            iVar3 = iVar3 + 1;
            iVar5 = FUN_0040caf8(lVar6);
          } while (iVar3 < iVar5);
        }
      }
      else {
        iVar3 = 0;
        do {
          puVar8 = (undefined8 *)FUN_0040cb0c(lVar6,iVar3);
          if ((iVar12 >= 0 && iVar12 < iVar1) &&
             ((iVar5 = iVar1, iVar3 == iVar12 || (iVar5 = iVar12, iVar3 == iVar1)))) {
            puVar8 = (undefined8 *)FUN_0040cb0c(lVar6,iVar5);
          }
          lVar7 = FUN_00414950(param_1,param_2,*puVar8,puVar8[1],puVar8[2]);
          if (lVar7 == 0) {
            return 0;
          }
          if (*param_2 == 2) {
            uVar11 = *param_4;
            uVar9 = FUN_0042a760(lVar7);
            iVar5 = FUN_0042a1ac(uVar11,uVar9,0xffffffff);
            while (-1 < iVar5) {
              FUN_0042a310(uVar11,iVar5);
              FUN_0043b4b0();
              iVar5 = FUN_0042a1ac(uVar11,uVar9,0xffffffff);
            }
          }
          lVar10 = FUN_0042a35c(param_4,lVar7,0xffffffff);
          FUN_0043b4b0(lVar7);
          if (lVar10 == 0) {
            return 0;
          }
          iVar3 = iVar3 + 1;
          iVar5 = FUN_0040caf8(lVar6);
        } while (iVar3 < iVar5);
      }
    }
    lVar6 = 1;
  }
  return lVar6;
}


// ===== 004155dc  FUN_004155dc =====

void FUN_004155dc(void)

{
  FUN_0041531c();
  return;
}


