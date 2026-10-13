// ===== 003b407c  FUN_003b407c =====

undefined8 FUN_003b407c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


// ===== 003b4084  FUN_003b4084 =====

undefined8 FUN_003b4084(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


// ===== 003b408c  FUN_003b408c =====

undefined8 FUN_003b408c(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  
  iVar1 = *param_1;
  if (iVar1 < 0x100) {
    uVar2 = iVar1 - 2;
    if (uVar2 < 0x3f) {
      if ((1L << ((ulong)uVar2 & 0x3f) & 0x4000000040004000U) != 0) goto LAB_003b4134;
      if ((1L << ((ulong)uVar2 & 0x3f) & 5U) != 0) {
        if (*(long *)(param_1 + 8) == 0) {
          return 0;
        }
        uVar3 = FUN_003a0628();
        return uVar3;
      }
    }
    if (iVar1 != 0x80) {
      return 0;
    }
  }
  else {
    if (0x7ff < iVar1) {
      if (iVar1 == 0x800) {
        if (*(long *)(param_1 + 10) == 0) {
          return 0;
        }
        uVar3 = FUN_003b6198();
        return uVar3;
      }
      if ((iVar1 != 0x1000) && (iVar1 != 0x2000)) {
        return 0;
      }
      if (*(long *)(param_1 + 10) == 0) {
        return 0;
      }
      uVar3 = FUN_003b5c98();
      return uVar3;
    }
    if (iVar1 != 0x100) {
      if ((iVar1 != 0x200) && (iVar1 != 0x400)) {
        return 0;
      }
      if (*(long *)(param_1 + 10) == 0) {
        return 0;
      }
      uVar3 = FUN_003b5098();
      return uVar3;
    }
  }
LAB_003b4134:
  if (*(long *)(param_1 + 10) == 0) {
    return 0;
  }
  uVar3 = FUN_003b760c();
  return uVar3;
}


// ===== 003b4154  FUN_003b4154 =====

undefined8 FUN_003b4154(long param_1,undefined4 param_2,char *param_3)

{
  size_t sVar1;
  undefined8 uVar2;
  
  sVar1 = strlen(param_3);
  if (sVar1 >> 0x1f != 0) {
    return 0xffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x003b41b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*(long *)(param_1 + 0x78) + 0xc0))(param_1,param_2,sVar1,param_3);
  return uVar2;
}


// ===== 003b41bc  FUN_003b41bc =====

undefined4 FUN_003b41bc(long param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  long local_18;
  
  lVar2 = FUN_003ca840(param_3,&local_18);
  if (lVar2 != 0) {
    if (local_18 < 0x80000000) {
      uVar1 = (**(code **)(*(long *)(param_1 + 0x78) + 0xc0))(param_1,param_2,local_18,lVar2);
    }
    else {
      uVar1 = 0xffffffff;
    }
    FUN_003c86b4(lVar2,"crypto/evp/pmeth_lib.c",0x601);
    return uVar1;
  }
  return 0;
}


// ===== 003b425c  FUN_003b425c =====

undefined8 FUN_003b425c(undefined8 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_4 != 0) {
    lVar1 = FUN_003a213c(param_4);
    if (lVar1 != 0) {
      uVar2 = FUN_003b2e6c(param_1,0xffffffff,param_2,param_3,0,lVar1);
      return uVar2;
    }
  }
  FUN_00379868();
  FUN_0037995c("crypto/evp/pmeth_lib.c",0x60b,"EVP_PKEY_CTX_md");
  FUN_00379a5c(6,0x98,0);
  return 0;
}


// ===== 003b42f0  FUN_003b42f0 =====

undefined4 FUN_003b42f0(undefined4 *param_1)

{
  return *param_1;
}


// ===== 003b42f8  FUN_003b42f8 =====

void FUN_003b42f8(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined8 *)(param_1 + 0x68) = param_2;
  *(undefined4 *)(param_1 + 0x70) = param_3;
  return;
}


// ===== 003b4304  FUN_003b4304 =====

void FUN_003b4304(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x98) = param_2;
  return;
}


// ===== 003b430c  FUN_003b430c =====

undefined8 FUN_003b430c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}


// ===== 003b4314  FUN_003b4314 =====

undefined8 FUN_003b4314(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}


// ===== 003b431c  FUN_003b431c =====

undefined8 FUN_003b431c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}


// ===== 003b4324  FUN_003b4324 =====

void FUN_003b4324(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x58) = param_2;
  return;
}


// ===== 003b432c  FUN_003b432c =====

undefined8 FUN_003b432c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}


// ===== 003b4334  FUN_003b4334 =====

void FUN_003b4334(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}


// ===== 003b433c  FUN_003b433c =====

void FUN_003b433c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}


// ===== 003b4344  FUN_003b4344 =====

void FUN_003b4344(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}


// ===== 003b434c  FUN_003b434c =====

void FUN_003b434c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}


// ===== 003b4354  FUN_003b4354 =====

void FUN_003b4354(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_2;
  *(undefined8 *)(param_1 + 0x38) = param_3;
  return;
}


// ===== 003b435c  FUN_003b435c =====

void FUN_003b435c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_2;
  *(undefined8 *)(param_1 + 0x48) = param_3;
  return;
}


// ===== 003b4364  FUN_003b4364 =====

void FUN_003b4364(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x50) = param_2;
  *(undefined8 *)(param_1 + 0x58) = param_3;
  return;
}


// ===== 003b436c  FUN_003b436c =====

void FUN_003b436c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x60) = param_2;
  *(undefined8 *)(param_1 + 0x68) = param_3;
  return;
}


// ===== 003b4374  FUN_003b4374 =====

void FUN_003b4374(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x70) = param_2;
  *(undefined8 *)(param_1 + 0x78) = param_3;
  return;
}


// ===== 003b437c  FUN_003b437c =====

void FUN_003b437c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x80) = param_2;
  *(undefined8 *)(param_1 + 0x88) = param_3;
  return;
}


// ===== 003b4384  FUN_003b4384 =====

void FUN_003b4384(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x90) = param_2;
  *(undefined8 *)(param_1 + 0x98) = param_3;
  return;
}


// ===== 003b438c  FUN_003b438c =====

void FUN_003b438c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xa0) = param_2;
  *(undefined8 *)(param_1 + 0xa8) = param_3;
  return;
}


// ===== 003b4394  FUN_003b4394 =====

void FUN_003b4394(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xb0) = param_2;
  *(undefined8 *)(param_1 + 0xb8) = param_3;
  return;
}


// ===== 003b439c  FUN_003b439c =====

void FUN_003b439c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xc0) = param_2;
  *(undefined8 *)(param_1 + 200) = param_3;
  return;
}


// ===== 003b43a4  FUN_003b43a4 =====

void FUN_003b43a4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xd0) = param_2;
  return;
}


// ===== 003b43ac  FUN_003b43ac =====

void FUN_003b43ac(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xd8) = param_2;
  return;
}


// ===== 003b43b4  FUN_003b43b4 =====

void FUN_003b43b4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xe0) = param_2;
  return;
}


// ===== 003b43bc  FUN_003b43bc =====

void FUN_003b43bc(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xe8) = param_2;
  return;
}


// ===== 003b43c4  FUN_003b43c4 =====

void FUN_003b43c4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xf0) = param_2;
  return;
}


// ===== 003b43cc  FUN_003b43cc =====

void FUN_003b43cc(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xf8) = param_2;
  return;
}


// ===== 003b43d4  FUN_003b43d4 =====

void FUN_003b43d4(long param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 8);
  return;
}


// ===== 003b43e0  FUN_003b43e0 =====

void FUN_003b43e0(long param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x10);
  return;
}


// ===== 003b43ec  FUN_003b43ec =====

void FUN_003b43ec(long param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x18);
  return;
}


// ===== 003b43f8  FUN_003b43f8 =====

void FUN_003b43f8(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x20);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(param_1 + 0x28);
  }
  return;
}


// ===== 003b4414  FUN_003b4414 =====

void FUN_003b4414(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x30);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(param_1 + 0x38);
  }
  return;
}


// ===== 003b4430  FUN_003b4430 =====

void FUN_003b4430(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x40);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(param_1 + 0x48);
  }
  return;
}


// ===== 003b444c  FUN_003b444c =====

void FUN_003b444c(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x50);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(param_1 + 0x58);
  }
  return;
}


// ===== 003b4468  FUN_003b4468 =====

void FUN_003b4468(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x60);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(param_1 + 0x68);
  }
  return;
}


// ===== 003b4484  FUN_003b4484 =====

void FUN_003b4484(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x70);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(param_1 + 0x78);
  }
  return;
}


// ===== 003b44a0  FUN_003b44a0 =====

void FUN_003b44a0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x80);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(param_1 + 0x88);
  }
  return;
}


// ===== 003b44bc  FUN_003b44bc =====

void FUN_003b44bc(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x90);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(param_1 + 0x98);
  }
  return;
}


// ===== 003b44d8  FUN_003b44d8 =====

void FUN_003b44d8(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0xa0);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(param_1 + 0xa8);
  }
  return;
}


// ===== 003b44f4  FUN_003b44f4 =====

void FUN_003b44f4(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0xb0);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(param_1 + 0xb8);
  }
  return;
}


// ===== 003b4510  FUN_003b4510 =====

void FUN_003b4510(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0xc0);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(param_1 + 200);
  }
  return;
}


// ===== 003b452c  FUN_003b452c =====

void FUN_003b452c(long param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0xd0);
  }
  return;
}


// ===== 003b453c  FUN_003b453c =====

void FUN_003b453c(long param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0xd8);
  }
  return;
}


// ===== 003b454c  FUN_003b454c =====

void FUN_003b454c(long param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0xe0);
  }
  return;
}


// ===== 003b455c  FUN_003b455c =====

void FUN_003b455c(long param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0xe8);
  }
  return;
}


// ===== 003b456c  FUN_003b456c =====

void FUN_003b456c(long param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0xf0);
  }
  return;
}


// ===== 003b457c  FUN_003b457c =====

void FUN_003b457c(long param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0xf8);
  }
  return;
}


// ===== 003b458c  FUN_003b458c =====

int FUN_003b458c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)*param_1;
  piVar2 = (int *)(*(code *)*param_2)();
  return iVar1 - *piVar2;
}


// ===== 003b45bc  FUN_003b45bc =====

void FUN_003b45bc(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  if (*param_2 != 0) {
    return;
  }
  iVar1 = FUN_003a7c98();
  *param_2 = iVar1;
  return;
}


// ===== 003b45ec  FUN_003b45ec =====

void FUN_003b45ec(undefined8 param_1)

{
  FUN_003b45f8(param_1,0x200,0);
  return;
}


// ===== 003b45f8  FUN_003b45f8 =====

int FUN_003b45f8(int *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  long local_38;
  
  local_38 = 0;
  if (param_1 == (int *)0x0) {
    FUN_00379868();
    uVar6 = 0x20;
LAB_003b48e8:
    FUN_0037995c("crypto/evp/asymcipher.c",uVar6,"evp_pkey_asym_cipher_init");
    FUN_00379a5c(6,0x96,0);
    iVar2 = -2;
  }
  else {
    FUN_003b1dfc();
    *param_1 = param_2;
    FUN_0037f6d4();
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 == 0) {
LAB_003b487c:
      FUN_0037f71c();
      FUN_003a059c(local_38);
      lVar3 = *(long *)(param_1 + 0x1e);
      local_38 = 0;
      if ((lVar3 == 0) || (*(long *)(lVar3 + 0x98) == 0)) {
        FUN_00379868();
        uVar6 = 0xbd;
        goto LAB_003b48e8;
      }
      if (*param_1 == 0x400) {
        pcVar8 = *(code **)(lVar3 + 0xa0);
      }
      else {
        if (*param_1 != 0x200) {
          FUN_00379868();
          FUN_0037995c("crypto/evp/asymcipher.c",0xcc,"evp_pkey_asym_cipher_init");
          FUN_00379a5c(6,0x86,0);
          iVar2 = -1;
          goto LAB_003b4a30;
        }
        pcVar8 = *(code **)(lVar3 + 0x90);
      }
      if (pcVar8 == (code *)0x0) {
        return 1;
      }
      iVar2 = (*pcVar8)(param_1);
      if (iVar2 < 1) goto LAB_003b4a30;
    }
    else {
      if (*(long *)(param_1 + 0x22) == 0) {
        FUN_0037f8c4();
        FUN_00379868();
        FUN_0037995c("crypto/evp/asymcipher.c",0x2e,"evp_pkey_asym_cipher_init");
        uVar6 = 0x9a;
      }
      else {
        lVar7 = *(long *)(*(long *)(param_1 + 0x22) + 0x60);
        if ((lVar7 == 0) || (lVar7 == lVar3)) {
          lVar3 = FUN_003a00a0(lVar3,0xd);
          if (lVar3 == 0) {
            FUN_0037f8c4();
            FUN_00379868();
            uVar6 = 0x40;
          }
          else {
            FUN_003a059c(local_38);
            lVar7 = FUN_00382990(*(undefined8 *)(param_1 + 2),0xd,lVar3,*(undefined8 *)(param_1 + 4)
                                 ,FUN_003b50c8,PTR_FUN_007a1a98,PTR_FUN_007a1aa0);
            if (lVar7 == 0) {
              lVar5 = 0;
            }
            else {
              uVar9 = *(undefined8 *)(lVar7 + 0x18);
              uVar6 = FUN_003a0640(*(undefined8 *)(param_1 + 8));
              lVar4 = FUN_003a00ec(uVar9,uVar6,*(undefined8 *)(param_1 + 4));
              local_38 = lVar4;
              if (lVar4 == 0) {
                lVar5 = 0;
              }
              else {
                lVar5 = FUN_003a6930(*(undefined8 *)(param_1 + 0x22),*(undefined8 *)(param_1 + 2),
                                     &local_38,*(undefined8 *)(param_1 + 4));
                if (local_38 != 0) goto joined_r0x003b4784;
              }
              FUN_003a059c(lVar4);
            }
joined_r0x003b4784:
            if (lVar5 == 0) {
              if ((lVar7 != 0) &&
                 (iVar2 = *(int *)(lVar7 + 0x20), iVar1 = iVar2 + -1, *(int *)(lVar7 + 0x20) = iVar1
                 , iVar1 == 0 || iVar2 < 1)) {
                FUN_003c86b4(*(undefined8 *)(lVar7 + 8),"crypto/evp/asymcipher.c",0x1cf);
                FUN_003d27b0(*(undefined8 *)(lVar7 + 0x18));
                FUN_003c86b4(lVar7,"crypto/evp/asymcipher.c",0x1d2);
              }
              FUN_003a059c(local_38);
              uVar6 = FUN_003a0628(*(undefined8 *)(param_1 + 8));
              lVar7 = FUN_00382d14(uVar6,0xd,lVar3,*(undefined8 *)(param_1 + 4),FUN_003b50c8,
                                   PTR_FUN_007a1a98,PTR_FUN_007a1aa0);
              if (lVar7 == 0) goto LAB_003b487c;
              uVar9 = FUN_003a0640(*(undefined8 *)(param_1 + 8));
              lVar3 = FUN_003a00ec(uVar6,uVar9,*(undefined8 *)(param_1 + 4));
              local_38 = lVar3;
              if (lVar3 == 0) {
                lVar5 = 0;
              }
              else {
                lVar5 = FUN_003a6930(*(undefined8 *)(param_1 + 0x22),*(undefined8 *)(param_1 + 2),
                                     &local_38,*(undefined8 *)(param_1 + 4));
                if (local_38 != 0) goto joined_r0x003b4788;
              }
              FUN_003a059c(lVar3);
            }
joined_r0x003b4788:
            if (lVar5 == 0) {
              FUN_003b501c(lVar7);
              goto LAB_003b487c;
            }
            FUN_0037f71c();
            *(long *)(param_1 + 10) = lVar7;
            pcVar8 = *(code **)(lVar7 + 0x28);
            FUN_003d3bf8(*(undefined8 *)(lVar7 + 0x18));
            auVar10 = (*pcVar8)();
            lVar3 = auVar10._0_8_;
            *(long *)(param_1 + 0xc) = lVar3;
            if (lVar3 != 0) {
              if (param_2 == 0x400) {
                pcVar8 = *(code **)(lVar7 + 0x40);
                if (pcVar8 != (code *)0x0) {
LAB_003b49e0:
                  iVar2 = (*pcVar8)(lVar3,lVar5,param_3);
                  if (0 < iVar2) {
                    FUN_003a059c(local_38);
                    return 1;
                  }
                  goto LAB_003b4a30;
                }
                FUN_00379868(lVar3,auVar10._8_8_,param_3);
                uVar6 = 0xa3;
              }
              else {
                if (param_2 != 0x200) {
                  FUN_00379868();
                  uVar6 = 0xaa;
                  goto LAB_003b4a18;
                }
                pcVar8 = *(code **)(lVar7 + 0x30);
                if (pcVar8 != (code *)0x0) goto LAB_003b49e0;
                FUN_00379868();
                uVar6 = 0x9b;
              }
              FUN_0037995c("crypto/evp/asymcipher.c",uVar6,"evp_pkey_asym_cipher_init");
              FUN_00379a5c(6,0x96,0);
              iVar2 = -2;
              goto LAB_003b4a30;
            }
            FUN_00379868();
            uVar6 = 0x94;
          }
LAB_003b4a18:
          FUN_0037995c("crypto/evp/asymcipher.c",uVar6,"evp_pkey_asym_cipher_init");
          uVar6 = 0x86;
        }
        else {
          FUN_0037f8c4();
          FUN_00379868();
          FUN_0037995c("crypto/evp/asymcipher.c",0x38,"evp_pkey_asym_cipher_init");
          uVar6 = 0xc0103;
        }
      }
      FUN_00379a5c(6,uVar6,0);
      iVar2 = 0;
LAB_003b4a30:
      FUN_003b1dfc(param_1);
      *param_1 = 0;
    }
    FUN_003a059c(local_38);
  }
  return iVar2;
}


// ===== 003b4a9c  FUN_003b4a9c =====

void FUN_003b4a9c(undefined8 param_1,undefined8 param_2)

{
  FUN_003b45f8(param_1,0x200,param_2);
  return;
}


// ===== 003b4aa8  FUN_003b4aa8 =====

undefined8
FUN_003b4aa8(int *param_1,long param_2,ulong *param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  if (param_1 == (int *)0x0) {
    FUN_00379868();
    uVar2 = 0xea;
  }
  else {
    if (*param_1 != 0x200) {
      FUN_00379868();
      FUN_0037995c("crypto/evp/asymcipher.c",0xef,"EVP_PKEY_encrypt");
      FUN_00379a5c(6,0x97,0);
      return 0xffffffff;
    }
    if (*(long *)(param_1 + 0xc) != 0) {
      if (param_2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *param_3;
      }
                    /* WARNING: Could not recover jumptable at 0x003b4bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*(long *)(param_1 + 10) + 0x38))
                        (*(long *)(param_1 + 0xc),param_2,param_3,uVar3,param_4,param_5);
      return uVar2;
    }
    lVar4 = *(long *)(param_1 + 0x1e);
    if ((lVar4 != 0) && (*(code **)(lVar4 + 0x98) != (code *)0x0)) {
      if ((*(byte *)(lVar4 + 4) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x003b4ba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(lVar4 + 0x98))();
        return uVar2;
      }
      iVar1 = FUN_003a8edc(*(undefined8 *)(param_1 + 0x22));
      if (iVar1 == 0) {
        FUN_00379868();
        FUN_0037995c("crypto/evp/asymcipher.c",0xff,"EVP_PKEY_encrypt");
        uVar2 = 0xa3;
      }
      else {
        if (param_2 == 0) {
          *param_3 = (long)iVar1;
          return 1;
        }
        if ((ulong)(long)iVar1 <= *param_3) {
                    /* WARNING: Could not recover jumptable at 0x003b4cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar2 = (**(code **)(*(long *)(param_1 + 0x1e) + 0x98))
                            (param_1,param_2,param_3,param_4,param_5);
          return uVar2;
        }
        FUN_00379868();
        FUN_0037995c("crypto/evp/asymcipher.c",0xff,"EVP_PKEY_encrypt");
        uVar2 = 0x9b;
      }
      FUN_00379a5c(6,uVar2,0);
      return 0;
    }
    FUN_00379868();
    uVar2 = 0xfc;
  }
  FUN_0037995c("crypto/evp/asymcipher.c",uVar2,"EVP_PKEY_encrypt");
  FUN_00379a5c(6,0x96,0);
  return 0xfffffffe;
}


// ===== 003b4ccc  FUN_003b4ccc =====

void FUN_003b4ccc(undefined8 param_1)

{
  FUN_003b45f8(param_1,0x400,0);
  return;
}


// ===== 003b4cd8  FUN_003b4cd8 =====

void FUN_003b4cd8(undefined8 param_1,undefined8 param_2)

{
  FUN_003b45f8(param_1,0x400,param_2);
  return;
}


// ===== 003b4ce4  FUN_003b4ce4 =====

undefined8
FUN_003b4ce4(int *param_1,long param_2,ulong *param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  if (param_1 == (int *)0x0) {
    FUN_00379868();
    uVar2 = 0x114;
  }
  else {
    if (*param_1 != 0x400) {
      FUN_00379868();
      FUN_0037995c("crypto/evp/asymcipher.c",0x119,"EVP_PKEY_decrypt");
      FUN_00379a5c(6,0x97,0);
      return 0xffffffff;
    }
    if (*(long *)(param_1 + 0xc) != 0) {
      if (param_2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *param_3;
      }
                    /* WARNING: Could not recover jumptable at 0x003b4dfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*(long *)(param_1 + 10) + 0x48))
                        (*(long *)(param_1 + 0xc),param_2,param_3,uVar3,param_4,param_5);
      return uVar2;
    }
    lVar4 = *(long *)(param_1 + 0x1e);
    if ((lVar4 != 0) && (*(code **)(lVar4 + 0xa8) != (code *)0x0)) {
      if ((*(byte *)(lVar4 + 4) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x003b4ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(lVar4 + 0xa8))();
        return uVar2;
      }
      iVar1 = FUN_003a8edc(*(undefined8 *)(param_1 + 0x22));
      if (iVar1 == 0) {
        FUN_00379868();
        FUN_0037995c("crypto/evp/asymcipher.c",0x129,"EVP_PKEY_decrypt");
        uVar2 = 0xa3;
      }
      else {
        if (param_2 == 0) {
          *param_3 = (long)iVar1;
          return 1;
        }
        if ((ulong)(long)iVar1 <= *param_3) {
                    /* WARNING: Could not recover jumptable at 0x003b4f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar2 = (**(code **)(*(long *)(param_1 + 0x1e) + 0xa8))
                            (param_1,param_2,param_3,param_4,param_5);
          return uVar2;
        }
        FUN_00379868();
        FUN_0037995c("crypto/evp/asymcipher.c",0x129,"EVP_PKEY_decrypt");
        uVar2 = 0x9b;
      }
      FUN_00379a5c(6,uVar2,0);
      return 0;
    }
    FUN_00379868();
    uVar2 = 0x126;
  }
  FUN_0037995c("crypto/evp/asymcipher.c",uVar2,"EVP_PKEY_decrypt");
  FUN_00379a5c(6,0x96,0);
  return 0xfffffffe;
}


// ===== 003b4f08  FUN_003b4f08 =====

undefined8
FUN_003b4f08(undefined8 param_1,long *param_2,long *param_3,long param_4,undefined8 param_5,
            undefined8 param_6)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_003b4ce4(param_1,0,param_3,param_5,param_6);
  if (0 < iVar1) {
    lVar2 = FUN_003c83a4(*param_3,"crypto/evp/asymcipher.c",0x133);
    *param_2 = lVar2;
    if (lVar2 != 0) {
      uVar3 = FUN_003b4ce4(param_1,lVar2,param_3,param_5,param_6);
      if ((((int)uVar3 < 1) || (*param_3 == 0)) ||
         ((uVar3 = 1, param_4 != 0 && (*param_3 != param_4)))) {
        FUN_00379868(uVar3);
        FUN_0037995c("crypto/evp/asymcipher.c",0x138,"evp_pkey_decrypt_alloc");
        FUN_00379a5c(6,0x80006,0);
        FUN_003c893c(*param_2,*param_3,"crypto/evp/asymcipher.c",0x139);
        uVar3 = 0;
        *param_2 = 0;
      }
      return uVar3;
    }
  }
  return 0xffffffff;
}


// ===== 003b501c  FUN_003b501c =====

void FUN_003b501c(long param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != 0) &&
     (iVar1 = *(int *)(param_1 + 0x20), iVar2 = iVar1 + -1, *(int *)(param_1 + 0x20) = iVar2,
     iVar2 == 0 || iVar1 < 1)) {
    FUN_003c86b4(*(undefined8 *)(param_1 + 8),"crypto/evp/asymcipher.c",0x1cf);
    FUN_003d27b0(*(undefined8 *)(param_1 + 0x18));
    FUN_003c86b4(param_1,"crypto/evp/asymcipher.c",0x1d2);
    return;
  }
  return;
}


// ===== 003b5080  FUN_003b5080 =====

undefined8 FUN_003b5080(long param_1)

{
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  return 1;
}


// ===== 003b5098  FUN_003b5098 =====

undefined8 FUN_003b5098(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


// ===== 003b50a0  FUN_003b50a0 =====

void FUN_003b50a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00382990(param_1,0xd,param_2,param_3,FUN_003b50c8,PTR_FUN_007a1a98,PTR_FUN_007a1aa0);
  return;
}


// ===== 003b50c8  FUN_003b50c8 =====

undefined4 * FUN_003b50c8(undefined4 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  
  lVar10 = *(long *)(param_2 + 0x10);
  puVar2 = (undefined4 *)FUN_003c8474(0x80,"crypto/evp/asymcipher.c",0x142);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/evp/asymcipher.c",0x15b,"evp_asym_cipher_from_algorithm");
    FUN_00379a5c(6,0x80006,0);
    return (undefined4 *)0x0;
  }
  *(undefined8 *)(puVar2 + 6) = param_3;
  puVar2[8] = 1;
  FUN_003d2754(param_3);
  *puVar2 = param_1;
  lVar3 = FUN_003c34fc(param_2);
  *(long *)(puVar2 + 2) = lVar3;
  if (lVar3 != 0) {
    iVar8 = 0;
    uVar6 = 0;
    uVar7 = 0;
    uVar5 = 0;
    uVar4 = 0;
    *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(param_2 + 0x18);
    puVar9 = (undefined8 *)(lVar10 + 8);
LAB_003b5164:
    iVar1 = *(int *)(puVar9 + -1);
    if (iVar1 < 6) {
      if (iVar1 < 3) {
        if (iVar1 == 1) {
          if (*(long *)(puVar2 + 10) != 0) goto LAB_003b5160;
          iVar8 = iVar8 + 1;
          *(undefined8 *)(puVar2 + 10) = *puVar9;
          puVar9 = puVar9 + 2;
          goto LAB_003b5164;
        }
        if (iVar1 == 2) {
          if (*(long *)(puVar2 + 0xc) != 0) goto LAB_003b5160;
          uVar6 = uVar6 + 1;
          *(undefined8 *)(puVar2 + 0xc) = *puVar9;
          puVar9 = puVar9 + 2;
          goto LAB_003b5164;
        }
        if (iVar1 == 0) goto code_r0x003b52d0;
      }
      else if (iVar1 == 3) {
        if (*(long *)(puVar2 + 0xe) == 0) {
          uVar6 = uVar6 + 1;
          *(undefined8 *)(puVar2 + 0xe) = *puVar9;
          puVar9 = puVar9 + 2;
          goto LAB_003b5164;
        }
      }
      else {
        if (iVar1 != 4) {
          if ((iVar1 != 5) || (*(long *)(puVar2 + 0x12) != 0)) goto LAB_003b5160;
          uVar7 = uVar7 + 1;
          *(undefined8 *)(puVar2 + 0x12) = *puVar9;
          puVar9 = puVar9 + 2;
          goto LAB_003b5164;
        }
        if (*(long *)(puVar2 + 0x10) == 0) {
          uVar7 = uVar7 + 1;
          *(undefined8 *)(puVar2 + 0x10) = *puVar9;
          puVar9 = puVar9 + 2;
          goto LAB_003b5164;
        }
      }
    }
    else if (iVar1 < 9) {
      if (iVar1 == 6) {
        if (*(long *)(puVar2 + 0x14) == 0) {
          iVar8 = iVar8 + 1;
          *(undefined8 *)(puVar2 + 0x14) = *puVar9;
          puVar9 = puVar9 + 2;
          goto LAB_003b5164;
        }
      }
      else if (iVar1 == 7) {
        if (*(long *)(puVar2 + 0x16) == 0) {
          *(undefined8 *)(puVar2 + 0x16) = *puVar9;
          puVar9 = puVar9 + 2;
          goto LAB_003b5164;
        }
      }
      else if ((iVar1 == 8) && (*(long *)(puVar2 + 0x18) == 0)) {
        uVar5 = uVar5 + 1;
        *(undefined8 *)(puVar2 + 0x18) = *puVar9;
        puVar9 = puVar9 + 2;
        goto LAB_003b5164;
      }
    }
    else if (iVar1 == 9) {
      if (*(long *)(puVar2 + 0x1a) == 0) {
        uVar5 = uVar5 + 1;
        *(undefined8 *)(puVar2 + 0x1a) = *puVar9;
        puVar9 = puVar9 + 2;
        goto LAB_003b5164;
      }
    }
    else if (iVar1 == 10) {
      if (*(long *)(puVar2 + 0x1c) == 0) {
        *(undefined8 *)(puVar2 + 0x1c) = *puVar9;
        goto LAB_003b515c;
      }
    }
    else if ((iVar1 == 0xb) && (*(long *)(puVar2 + 0x1e) == 0)) {
      *(undefined8 *)(puVar2 + 0x1e) = *puVar9;
LAB_003b515c:
      uVar4 = uVar4 + 1;
    }
LAB_003b5160:
    puVar9 = puVar9 + 2;
    goto LAB_003b5164;
  }
LAB_003b53a0:
  puVar2[8] = 0;
  FUN_003c86b4(lVar3,"crypto/evp/asymcipher.c",0x1cf);
  FUN_003d27b0(param_3);
  FUN_003c86b4(puVar2,"crypto/evp/asymcipher.c",0x1d2);
  return (undefined4 *)0x0;
code_r0x003b52d0:
  if (((((iVar8 == 2) && ((uVar6 | 2) == 2)) && ((uVar7 | 2) == 2)) &&
      ((uVar7 == 2 || uVar6 == 2 && ((uVar5 & 0xfffffffd) == 0)))) && ((uVar4 & 0xfffffffd) == 0)) {
    return puVar2;
  }
  FUN_00379868();
  FUN_0037995c("crypto/evp/asymcipher.c",0x1bc,"evp_asym_cipher_from_algorithm");
  FUN_00379a5c(6,0xc1,0);
  goto LAB_003b53a0;
}


// ===== 003b53ec  FUN_003b53ec =====

void FUN_003b53ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00382d14(param_1,0xd,param_2,param_3,FUN_003b50c8,PTR_FUN_007a1a98,PTR_FUN_007a1aa0);
  return;
}


// ===== 003b5414  FUN_003b5414 =====

void FUN_003b5414(undefined4 *param_1,undefined8 param_2)

{
  FUN_00383528(*(undefined8 *)(param_1 + 6),*param_1,0,param_2);
  return;
}


// ===== 003b5430  FUN_003b5430 =====

undefined4 FUN_003b5430(undefined4 *param_1)

{
  return *param_1;
}


// ===== 003b5438  FUN_003b5438 =====

undefined8 FUN_003b5438(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


// ===== 003b5440  FUN_003b5440 =====

undefined8 FUN_003b5440(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


// ===== 003b5448  FUN_003b5448 =====

void FUN_003b5448(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0038345c(param_1,0xd,param_2,param_3,FUN_003b50c8,PTR_FUN_007a1a98,PTR_FUN_007a1aa0);
  return;
}


// ===== 003b5470  FUN_003b5470 =====

undefined8 FUN_003b5470(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 6) != 0) {
    uVar1 = FUN_00383588(*(long *)(param_1 + 6),*param_1,param_2,param_3);
    return uVar1;
  }
  return 1;
}


// ===== 003b5494  FUN_003b5494 =====

undefined8 FUN_003b5494(long param_1)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x68) != 0)) {
    uVar1 = FUN_003d3bf8(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x003b54d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x68))(0,uVar1);
    return uVar1;
  }
  return 0;
}


// ===== 003b54dc  FUN_003b54dc =====

undefined8 FUN_003b54dc(long param_1)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x78) != 0)) {
    uVar1 = FUN_003d3bf8(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x003b5518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x78))(0,uVar1);
    return uVar1;
  }
  return 0;
}


// ===== 003b5524  FUN_003b5524 =====

undefined8 FUN_003b5524(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = FUN_003b553c(param_1,0x1000,param_3,param_2);
    return uVar1;
  }
  return 0;
}


// ===== 003b553c  FUN_003b553c =====

int FUN_003b553c(int *param_1,int param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int *piVar7;
  long lVar8;
  code *pcVar9;
  undefined8 uVar10;
  long lVar11;
  long local_48;
  
  local_48 = 0;
  if ((param_1 == (int *)0x0) || (*(long *)(param_1 + 6) == 0)) {
    FUN_00379868();
    FUN_0037995c("crypto/evp/kem.c",0x20,"evp_kem_init");
    uVar6 = 0x86;
LAB_003b5604:
    FUN_00379a5c(6,uVar6,0);
    return 0;
  }
  FUN_003b1dfc(param_1);
  piVar7 = *(int **)(param_1 + 0x22);
  *param_1 = param_2;
  if (piVar7 == (int *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/evp/kem.c",0x28,"evp_kem_init");
    uVar6 = 0x9a;
  }
  else {
    if ((param_4 != (int *)0x0) && (*param_4 != *piVar7)) {
      FUN_00379868();
      FUN_0037995c("crypto/evp/kem.c",0x2c,"evp_kem_init");
      uVar6 = 0x65;
      goto LAB_003b5604;
    }
    lVar8 = *(long *)(piVar7 + 0x18);
    lVar3 = *(long *)(param_1 + 8);
    if ((lVar8 != 0) && (lVar3 = lVar8, lVar8 != *(long *)(param_1 + 8))) {
      FUN_00379868();
      FUN_0037995c("crypto/evp/kem.c",0x34,"evp_kem_init");
      uVar6 = 0xc0103;
      goto LAB_003b59b4;
    }
    lVar3 = FUN_003a00a0(lVar3,0xe);
    if (lVar3 == 0) {
      FUN_00379868();
      uVar6 = 0x3a;
    }
    else {
      FUN_003a059c(local_48);
      lVar8 = FUN_00382990(*(undefined8 *)(param_1 + 2),0xe,lVar3,*(undefined8 *)(param_1 + 4),
                           FUN_003b5cc8,PTR_FUN_007a1b28,PTR_FUN_007a1b30);
      if (lVar8 == 0) {
        lVar5 = 0;
        lVar11 = 0;
LAB_003b5754:
        if (lVar5 == 0) {
          if ((lVar8 != 0) &&
             (iVar2 = *(int *)(lVar8 + 0x20), iVar1 = iVar2 + -1, *(int *)(lVar8 + 0x20) = iVar1,
             iVar1 == 0 || iVar2 < 1)) {
            FUN_003c86b4(*(undefined8 *)(lVar8 + 8),"crypto/evp/kem.c",0x1af);
            FUN_003d27b0(*(undefined8 *)(lVar8 + 0x18));
            FUN_003c86b4(lVar8,"crypto/evp/kem.c",0x1b2);
          }
          FUN_003a059c(local_48);
          uVar6 = FUN_003a0628(*(undefined8 *)(param_1 + 8));
          lVar8 = FUN_00382d14(uVar6,0xe,lVar3,*(undefined8 *)(param_1 + 4),FUN_003b5cc8,
                               PTR_FUN_007a1b28,PTR_FUN_007a1b30);
          if (lVar8 != 0) {
            uVar10 = FUN_003a0640(*(undefined8 *)(param_1 + 8));
            lVar3 = FUN_003a00ec(uVar6,uVar10,*(undefined8 *)(param_1 + 4));
            local_48 = lVar3;
            if (lVar3 == 0) {
              lVar5 = 0;
            }
            else {
              lVar5 = FUN_003a6930(*(undefined8 *)(param_1 + 0x22),*(undefined8 *)(param_1 + 2),
                                   &local_48,*(undefined8 *)(param_1 + 4));
              if (((param_4 != (int *)0x0) && (lVar5 != 0)) &&
                 (lVar11 = FUN_003a6930(param_4,*(undefined8 *)(param_1 + 2),&local_48,
                                        *(undefined8 *)(param_1 + 4)), lVar11 == 0))
              goto LAB_003b5884;
              if (local_48 != 0) goto LAB_003b58f0;
            }
            FUN_003a059c(lVar3);
            goto LAB_003b58f0;
          }
          FUN_00379868();
          uVar6 = 0x69;
LAB_003b5868:
          FUN_0037995c("crypto/evp/kem.c",uVar6,"evp_kem_init");
          FUN_00379a5c(6,0x96,0);
          iVar2 = -2;
          goto LAB_003b59c0;
        }
LAB_003b58f0:
        if (lVar5 == 0) {
          FUN_003b5c1c(lVar8);
          FUN_00379868();
          uVar6 = 0x92;
        }
        else {
          *(long *)(param_1 + 10) = lVar8;
          pcVar9 = *(code **)(lVar8 + 0x28);
          FUN_003d3bf8(*(undefined8 *)(lVar8 + 0x18));
          lVar3 = (*pcVar9)();
          *(long *)(param_1 + 0xc) = lVar3;
          if (lVar3 == 0) {
            FUN_00379868();
            uVar6 = 0x9a;
          }
          else {
            if (param_2 == 0x2000) {
              if (lVar11 == 0) {
                if (*(long *)(lVar8 + 0x30) == 0) goto LAB_003b5a50;
                pcVar9 = *(code **)(lVar8 + 0x40);
LAB_003b5a24:
                iVar2 = (*pcVar9)(lVar3,lVar5,param_3);
              }
              else {
                pcVar9 = *(code **)(lVar8 + 0x88);
                if (pcVar9 == (code *)0x0) {
LAB_003b5a50:
                  FUN_00379868();
                  uVar6 = 0xb2;
                  goto LAB_003b5868;
                }
LAB_003b597c:
                iVar2 = (*pcVar9)(lVar3,lVar5,lVar11,param_3);
              }
              FUN_003a059c(local_48);
              local_48 = 0;
              if (0 < iVar2) {
                return 1;
              }
              goto LAB_003b59c0;
            }
            if (param_2 == 0x1000) {
              if (lVar11 == 0) {
                pcVar9 = *(code **)(lVar8 + 0x30);
                if (pcVar9 != (code *)0x0) goto LAB_003b5a24;
              }
              else {
                pcVar9 = *(code **)(lVar8 + 0x80);
                if (pcVar9 != (code *)0x0) goto LAB_003b597c;
              }
              FUN_00379868();
              uVar6 = 0xa6;
              goto LAB_003b5868;
            }
            FUN_00379868();
            uVar6 = 0xb8;
          }
        }
      }
      else {
        uVar10 = *(undefined8 *)(lVar8 + 0x18);
        uVar6 = FUN_003a0640(*(undefined8 *)(param_1 + 8));
        lVar4 = FUN_003a00ec(uVar10,uVar6,*(undefined8 *)(param_1 + 4));
        local_48 = lVar4;
        if (lVar4 == 0) {
          lVar11 = 0;
          lVar5 = 0;
LAB_003b5750:
          FUN_003a059c(lVar4);
          goto LAB_003b5754;
        }
        lVar5 = FUN_003a6930(*(undefined8 *)(param_1 + 0x22),*(undefined8 *)(param_1 + 2),&local_48,
                             *(undefined8 *)(param_1 + 4));
        lVar11 = 0;
        if (((param_4 == (int *)0x0) || (lVar5 == 0)) ||
           (lVar11 = FUN_003a6930(param_4,*(undefined8 *)(param_1 + 2),&local_48,
                                  *(undefined8 *)(param_1 + 4)), lVar11 != 0)) {
          if (local_48 != 0) goto LAB_003b5754;
          goto LAB_003b5750;
        }
LAB_003b5884:
        iVar2 = *(int *)(lVar8 + 0x20);
        iVar1 = iVar2 + -1;
        *(int *)(lVar8 + 0x20) = iVar1;
        if (iVar1 == 0 || iVar2 < 1) {
          FUN_003c86b4(*(undefined8 *)(lVar8 + 8),"crypto/evp/kem.c",0x1af);
          FUN_003d27b0(*(undefined8 *)(lVar8 + 0x18));
          FUN_003c86b4(lVar8,"crypto/evp/kem.c",0x1b2);
        }
        FUN_00379868();
        uVar6 = 0x87;
      }
    }
    FUN_0037995c("crypto/evp/kem.c",uVar6,"evp_kem_init");
    uVar6 = 0x86;
  }
LAB_003b59b4:
  FUN_00379a5c(6,uVar6,0);
  iVar2 = 0;
LAB_003b59c0:
  FUN_003b1dfc(param_1);
  *param_1 = 0;
  FUN_003a059c(local_48);
  return iVar2;
}


// ===== 003b5a6c  FUN_003b5a6c =====

void FUN_003b5a6c(undefined8 param_1,undefined8 param_2)

{
  FUN_003b553c(param_1,0x1000,param_2,0);
  return;
}


// ===== 003b5a7c  FUN_003b5a7c =====

int * FUN_003b5a7c(int *param_1,long param_2,undefined8 param_3,long param_4)

{
  int *piVar1;
  
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0x1000) {
      FUN_00379868();
      FUN_0037995c("crypto/evp/kem.c",0xdf,"EVP_PKEY_encapsulate");
      FUN_00379a5c(6,0x97,0);
      return (int *)0xffffffff;
    }
    if (*(long *)(param_1 + 0xc) == 0) {
      FUN_00379868();
      FUN_0037995c("crypto/evp/kem.c",0xe4,"EVP_PKEY_encapsulate");
      FUN_00379a5c(6,0x96,0);
      return (int *)0xfffffffe;
    }
    if ((param_2 == 0) || (param_4 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x003b5b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      piVar1 = (int *)(**(code **)(*(long *)(param_1 + 10) + 0x38))(*(long *)(param_1 + 0xc));
      return piVar1;
    }
    param_1 = (int *)0x0;
  }
  return param_1;
}


// ===== 003b5b34  FUN_003b5b34 =====

void FUN_003b5b34(undefined8 param_1,undefined8 param_2)

{
  FUN_003b553c(param_1,0x2000,param_2,0);
  return;
}


// ===== 003b5b44  FUN_003b5b44 =====

undefined8 FUN_003b5b44(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = FUN_003b553c(param_1,0x2000,param_3,param_2);
    return uVar1;
  }
  return 0;
}


// ===== 003b5b5c  FUN_003b5b5c =====

ulong FUN_003b5b5c(int *param_1,ulong param_2,ulong param_3,long param_4,long param_5)

{
  ulong uVar1;
  
  uVar1 = 0;
  if ((((param_1 != (int *)0x0) && (param_4 != 0)) && (param_5 != 0)) &&
     (uVar1 = param_2 | param_3, uVar1 != 0)) {
    if (*param_1 == 0x2000) {
      if (*(long *)(param_1 + 0xc) != 0) {
                    /* WARNING: Could not recover jumptable at 0x003b5ba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(*(long *)(param_1 + 10) + 0x48))(*(long *)(param_1 + 0xc));
        return uVar1;
      }
      FUN_00379868();
      FUN_0037995c("crypto/evp/kem.c",0x10b,"EVP_PKEY_decapsulate");
      FUN_00379a5c(6,0x96,0);
      return 0xfffffffe;
    }
    FUN_00379868();
    FUN_0037995c("crypto/evp/kem.c",0x106,"EVP_PKEY_decapsulate");
    FUN_00379a5c(6,0x97,0);
    uVar1 = 0xffffffff;
  }
  return uVar1 & 0xffffffff;
}


// ===== 003b5c1c  FUN_003b5c1c =====

void FUN_003b5c1c(long param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != 0) &&
     (iVar1 = *(int *)(param_1 + 0x20), iVar2 = iVar1 + -1, *(int *)(param_1 + 0x20) = iVar2,
     iVar2 == 0 || iVar1 < 1)) {
    FUN_003c86b4(*(undefined8 *)(param_1 + 8),"crypto/evp/kem.c",0x1af);
    FUN_003d27b0(*(undefined8 *)(param_1 + 0x18));
    FUN_003c86b4(param_1,"crypto/evp/kem.c",0x1b2);
    return;
  }
  return;
}


// ===== 003b5c80  FUN_003b5c80 =====

undefined8 FUN_003b5c80(long param_1)

{
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  return 1;
}


// ===== 003b5c98  FUN_003b5c98 =====

undefined8 FUN_003b5c98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


// ===== 003b5ca0  FUN_003b5ca0 =====

void FUN_003b5ca0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00382990(param_1,0xe,param_2,param_3,FUN_003b5cc8,PTR_FUN_007a1b28,PTR_FUN_007a1b30);
  return;
}


// ===== 003b5cc8  FUN_003b5cc8 =====

undefined4 * FUN_003b5cc8(undefined4 param_1,long param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  
  lVar9 = *(long *)(param_2 + 0x10);
  puVar1 = (undefined4 *)FUN_003c8474(0x90,"crypto/evp/kem.c",0x114);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/evp/kem.c",300,"evp_kem_from_algorithm");
    FUN_00379a5c(6,0x80006,0);
    return (undefined4 *)0x0;
  }
  *(undefined8 *)(puVar1 + 6) = param_3;
  puVar1[8] = 1;
  FUN_003d2754(param_3);
  *puVar1 = param_1;
  lVar2 = FUN_003c34fc(param_2);
  *(long *)(puVar1 + 2) = lVar2;
  if (lVar2 != 0) {
    iVar7 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar4 = 0;
    uVar3 = 0;
    *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_2 + 0x18);
    puVar8 = (undefined8 *)(lVar9 + 8);
LAB_003b5d64:
    switch(*(undefined4 *)(puVar8 + -1)) {
    case 0:
      goto switchD_003b5d7c_caseD_0;
    case 1:
      if (*(long *)(puVar1 + 10) == 0) {
        iVar7 = iVar7 + 1;
        *(undefined8 *)(puVar1 + 10) = *puVar8;
        puVar8 = puVar8 + 2;
        goto LAB_003b5d64;
      }
      break;
    case 2:
      if (*(long *)(puVar1 + 0xc) == 0) {
        uVar5 = uVar5 + 1;
        *(undefined8 *)(puVar1 + 0xc) = *puVar8;
        puVar8 = puVar8 + 2;
        goto LAB_003b5d64;
      }
      break;
    case 3:
      if (*(long *)(puVar1 + 0xe) == 0) {
        uVar5 = uVar5 + 1;
        *(undefined8 *)(puVar1 + 0xe) = *puVar8;
        puVar8 = puVar8 + 2;
        goto LAB_003b5d64;
      }
      break;
    case 4:
      if (*(long *)(puVar1 + 0x10) == 0) {
        uVar6 = uVar6 + 1;
        *(undefined8 *)(puVar1 + 0x10) = *puVar8;
        puVar8 = puVar8 + 2;
        goto LAB_003b5d64;
      }
      break;
    case 5:
      if (*(long *)(puVar1 + 0x12) == 0) {
        uVar6 = uVar6 + 1;
        *(undefined8 *)(puVar1 + 0x12) = *puVar8;
        puVar8 = puVar8 + 2;
        goto LAB_003b5d64;
      }
      break;
    case 6:
      if (*(long *)(puVar1 + 0x14) == 0) {
        iVar7 = iVar7 + 1;
        *(undefined8 *)(puVar1 + 0x14) = *puVar8;
        puVar8 = puVar8 + 2;
        goto LAB_003b5d64;
      }
      break;
    case 7:
      if (*(long *)(puVar1 + 0x16) == 0) {
        *(undefined8 *)(puVar1 + 0x16) = *puVar8;
        puVar8 = puVar8 + 2;
        goto LAB_003b5d64;
      }
      break;
    case 8:
      if (*(long *)(puVar1 + 0x18) == 0) {
        uVar4 = uVar4 + 1;
        *(undefined8 *)(puVar1 + 0x18) = *puVar8;
        puVar8 = puVar8 + 2;
        goto LAB_003b5d64;
      }
      break;
    case 9:
      if (*(long *)(puVar1 + 0x1a) == 0) {
        uVar4 = uVar4 + 1;
        *(undefined8 *)(puVar1 + 0x1a) = *puVar8;
        puVar8 = puVar8 + 2;
        goto LAB_003b5d64;
      }
      break;
    case 10:
      if (*(long *)(puVar1 + 0x1c) == 0) {
        *(undefined8 *)(puVar1 + 0x1c) = *puVar8;
LAB_003b5d5c:
        uVar3 = uVar3 + 1;
      }
      break;
    case 0xb:
      if (*(long *)(puVar1 + 0x1e) == 0) {
        *(undefined8 *)(puVar1 + 0x1e) = *puVar8;
        goto LAB_003b5d5c;
      }
      break;
    case 0xc:
      if (*(long *)(puVar1 + 0x20) == 0) {
        uVar5 = uVar5 + 1;
        *(undefined8 *)(puVar1 + 0x20) = *puVar8;
        puVar8 = puVar8 + 2;
        goto LAB_003b5d64;
      }
      break;
    case 0xd:
      if (*(long *)(puVar1 + 0x22) != 0) break;
      uVar6 = uVar6 + 1;
      *(undefined8 *)(puVar1 + 0x22) = *puVar8;
      puVar8 = puVar8 + 2;
      goto LAB_003b5d64;
    }
    puVar8 = puVar8 + 2;
    goto LAB_003b5d64;
  }
LAB_003b5f80:
  puVar1[8] = 0;
  FUN_003c86b4(lVar2,"crypto/evp/kem.c",0x1af);
  FUN_003d27b0(param_3);
  FUN_003c86b4(puVar1,"crypto/evp/kem.c",0x1b2);
  return (undefined4 *)0x0;
switchD_003b5d7c_caseD_0:
  if (((((iVar7 == 2) && (uVar5 < 4)) && (uVar5 != 1)) && ((uVar6 < 4 && (uVar6 != 1)))) &&
     ((uVar5 == uVar6 && (((uVar4 & 0xfffffffd) == 0 && ((uVar3 & 0xfffffffd) == 0)))))) {
    return puVar1;
  }
  FUN_00379868();
  FUN_0037995c("crypto/evp/kem.c",0x19b,"evp_kem_from_algorithm");
  FUN_00379a5c(6,0xc1,0);
  goto LAB_003b5f80;
}


// ===== 003b5fcc  FUN_003b5fcc =====

void FUN_003b5fcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00382d14(param_1,0xe,param_2,param_3,FUN_003b5cc8,PTR_FUN_007a1b28,PTR_FUN_007a1b30);
  return;
}


// ===== 003b5ff4  FUN_003b5ff4 =====

undefined4 * FUN_003b5ff4(undefined4 *param_1,undefined8 param_2)

{
  int iVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    iVar1 = FUN_00383528(*(undefined8 *)(param_1 + 6),*param_1,0,param_2);
    param_1 = (undefined4 *)(ulong)(iVar1 != 0);
  }
  return param_1;
}


// ===== 003b6028  FUN_003b6028 =====

undefined4 FUN_003b6028(undefined4 *param_1)

{
  return *param_1;
}


// ===== 003b6030  FUN_003b6030 =====

undefined8 FUN_003b6030(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


// ===== 003b6038  FUN_003b6038 =====

undefined8 FUN_003b6038(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


// ===== 003b6040  FUN_003b6040 =====

void FUN_003b6040(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0038345c(param_1,0xe,param_2,param_3,FUN_003b5cc8,PTR_FUN_007a1b28,PTR_FUN_007a1b30);
  return;
}


// ===== 003b6068  FUN_003b6068 =====

undefined8 FUN_003b6068(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 6) != 0) {
    uVar1 = FUN_00383588(*(long *)(param_1 + 6),*param_1,param_2,param_3);
    return uVar1;
  }
  return 1;
}


// ===== 003b608c  FUN_003b608c =====

undefined8 FUN_003b608c(long param_1)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x68) != 0)) {
    uVar1 = FUN_003d3bf8(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x003b60c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x68))(0,uVar1);
    return uVar1;
  }
  return 0;
}


// ===== 003b60d4  FUN_003b60d4 =====

undefined8 FUN_003b60d4(long param_1)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x78) != 0)) {
    uVar1 = FUN_003d3bf8(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x003b6110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x78))(0,uVar1);
    return uVar1;
  }
  return 0;
}


// ===== 003b611c  FUN_003b611c =====

void FUN_003b611c(long param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != 0) &&
     (iVar1 = *(int *)(param_1 + 0x20), iVar2 = iVar1 + -1, *(int *)(param_1 + 0x20) = iVar2,
     iVar2 == 0 || iVar1 < 1)) {
    FUN_003c86b4(*(undefined8 *)(param_1 + 8),"crypto/evp/exchange.c",0x97);
    FUN_003d27b0(*(undefined8 *)(param_1 + 0x18));
    FUN_003c86b4(param_1,"crypto/evp/exchange.c",0x9a);
    return;
  }
  return;
}


// ===== 003b6180  FUN_003b6180 =====

undefined8 FUN_003b6180(long param_1)

{
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  return 1;
}


// ===== 003b6198  FUN_003b6198 =====

undefined8 FUN_003b6198(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


// ===== 003b61a0  FUN_003b61a0 =====

void FUN_003b61a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00382990(param_1,0xb,param_2,param_3,FUN_003b61c8,PTR_FUN_007a1b20,PTR_FUN_007a1b18);
  return;
}


// ===== 003b61c8  FUN_003b61c8 =====

undefined4 * FUN_003b61c8(undefined4 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  
  lVar8 = *(long *)(param_2 + 0x10);
  puVar2 = (undefined4 *)FUN_003c8474(0x78,"crypto/evp/exchange.c",0x17);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/evp/exchange.c",0x2f,"evp_keyexch_from_algorithm");
    FUN_00379a5c(6,0x80006,0);
    return (undefined4 *)0x0;
  }
  *(undefined8 *)(puVar2 + 6) = param_3;
  puVar2[8] = 1;
  FUN_003d2754(param_3);
  *puVar2 = param_1;
  lVar3 = FUN_003c34fc(param_2);
  *(long *)(puVar2 + 2) = lVar3;
  if (lVar3 != 0) {
    iVar6 = 0;
    uVar4 = 0;
    uVar5 = 0;
    *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(param_2 + 0x18);
    puVar7 = (undefined8 *)(lVar8 + 8);
LAB_003b625c:
    iVar1 = *(int *)(puVar7 + -1);
    if (iVar1 < 6) {
      if (iVar1 < 3) {
        if (iVar1 == 1) {
          if (*(long *)(puVar2 + 10) == 0) {
            iVar6 = iVar6 + 1;
            *(undefined8 *)(puVar2 + 10) = *puVar7;
            puVar7 = puVar7 + 2;
            goto LAB_003b625c;
          }
        }
        else if (iVar1 == 2) {
          if (*(long *)(puVar2 + 0xc) == 0) {
            iVar6 = iVar6 + 1;
            *(undefined8 *)(puVar2 + 0xc) = *puVar7;
            puVar7 = puVar7 + 2;
            goto LAB_003b625c;
          }
        }
        else if (iVar1 == 0) goto code_r0x003b63a4;
      }
      else if (iVar1 == 3) {
        if (*(long *)(puVar2 + 0x10) == 0) {
          iVar6 = iVar6 + 1;
          *(undefined8 *)(puVar2 + 0x10) = *puVar7;
          puVar7 = puVar7 + 2;
          goto LAB_003b625c;
        }
      }
      else if (iVar1 == 4) {
        if (*(long *)(puVar2 + 0xe) == 0) {
          *(undefined8 *)(puVar2 + 0xe) = *puVar7;
          puVar7 = puVar7 + 2;
          goto LAB_003b625c;
        }
      }
      else if ((iVar1 == 5) && (*(long *)(puVar2 + 0x12) == 0)) {
        iVar6 = iVar6 + 1;
        *(undefined8 *)(puVar2 + 0x12) = *puVar7;
        puVar7 = puVar7 + 2;
        goto LAB_003b625c;
      }
    }
    else {
      if (iVar1 < 8) {
        if (iVar1 != 6) {
          if ((iVar1 == 7) && (*(long *)(puVar2 + 0x16) == 0)) {
            *(undefined8 *)(puVar2 + 0x16) = *puVar7;
            goto LAB_003b6254;
          }
          goto LAB_003b6258;
        }
        if (*(long *)(puVar2 + 0x14) != 0) goto LAB_003b6258;
        *(undefined8 *)(puVar2 + 0x14) = *puVar7;
        puVar7 = puVar7 + 2;
        goto LAB_003b625c;
      }
      if (iVar1 == 8) {
        if (*(long *)(puVar2 + 0x18) == 0) {
          *(undefined8 *)(puVar2 + 0x18) = *puVar7;
LAB_003b6254:
          uVar4 = uVar4 + 1;
        }
      }
      else {
        if (iVar1 != 9) {
          if ((iVar1 != 10) || (*(long *)(puVar2 + 0x1c) != 0)) goto LAB_003b6258;
          uVar5 = uVar5 + 1;
          *(undefined8 *)(puVar2 + 0x1c) = *puVar7;
          puVar7 = puVar7 + 2;
          goto LAB_003b625c;
        }
        if (*(long *)(puVar2 + 0x1a) == 0) {
          uVar5 = uVar5 + 1;
          *(undefined8 *)(puVar2 + 0x1a) = *puVar7;
          puVar7 = puVar7 + 2;
          goto LAB_003b625c;
        }
      }
    }
LAB_003b6258:
    puVar7 = puVar7 + 2;
    goto LAB_003b625c;
  }
LAB_003b6450:
  puVar2[8] = 0;
  FUN_003c86b4(lVar3,"crypto/evp/exchange.c",0x97);
  FUN_003d27b0(param_3);
  FUN_003c86b4(puVar2,"crypto/evp/exchange.c",0x9a);
  return (undefined4 *)0x0;
code_r0x003b63a4:
  if (((iVar6 == 4) && ((uVar5 & 0xfffffffd) == 0)) && ((uVar4 & 0xfffffffd) == 0)) {
    return puVar2;
  }
  FUN_00379868();
  FUN_0037995c("crypto/evp/exchange.c",0x83,"evp_keyexch_from_algorithm");
  FUN_00379a5c(6,0xc1,0);
  goto LAB_003b6450;
}


// ===== 003b649c  FUN_003b649c =====

void FUN_003b649c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00382d14(param_1,0xb,param_2,param_3,FUN_003b61c8,PTR_FUN_007a1b20,PTR_FUN_007a1b18);
  return;
}


// ===== 003b64c4  FUN_003b64c4 =====

void FUN_003b64c4(undefined8 param_1)

{
  FUN_003b64cc(param_1,0);
  return;
}


// ===== 003b64cc  FUN_003b64cc =====

uint FUN_003b64cc(undefined4 *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  undefined8 uVar10;
  long local_48;
  
  local_48 = 0;
  if (param_1 == (undefined4 *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/evp/exchange.c",0xce,"EVP_PKEY_derive_init_ex");
    uVar7 = 0xc0102;
    goto LAB_003b6854;
  }
  FUN_003b1dfc();
  *param_1 = 0x800;
  FUN_0037f6d4();
  lVar4 = *(long *)(param_1 + 8);
  if (lVar4 == 0) {
LAB_003b67d8:
    FUN_0037f71c();
    lVar4 = *(long *)(param_1 + 0x1e);
    if ((lVar4 != 0) && (*(long *)(lVar4 + 0xb8) != 0)) {
      if (*(code **)(lVar4 + 0xb0) != (code *)0x0) {
        uVar2 = (**(code **)(lVar4 + 0xb0))(param_1);
        if ((int)uVar2 < 1) {
          *param_1 = 0;
        }
        FUN_003a059c(local_48);
        return uVar2;
      }
      return 1;
    }
    FUN_00379868();
    FUN_0037995c("crypto/evp/exchange.c",0x16a,"EVP_PKEY_derive_init_ex");
    uVar7 = 0x96;
LAB_003b6854:
    FUN_00379a5c(6,uVar7,0);
    return 0xfffffffe;
  }
  if (*(long *)(param_1 + 0x22) == 0) {
    lVar8 = FUN_003a8a70();
    if ((lVar8 != 0) && (iVar3 = FUN_003a67bc(lVar8,*(undefined8 *)(param_1 + 8)), iVar3 != 0)) {
      lVar4 = FUN_003a06c8(*(undefined8 *)(param_1 + 8));
      *(long *)(lVar8 + 0x68) = lVar4;
      if (lVar4 != 0) {
        lVar4 = *(long *)(param_1 + 8);
        *(long *)(param_1 + 0x22) = lVar8;
        lVar8 = *(long *)(lVar8 + 0x60);
        goto joined_r0x003b65bc;
      }
    }
    FUN_0037f8c4();
    FUN_003a6c04(lVar8);
    FUN_00379868();
    uVar7 = 0xe6;
  }
  else {
    lVar8 = *(long *)(*(long *)(param_1 + 0x22) + 0x60);
joined_r0x003b65bc:
    if ((lVar8 != 0) && (lVar8 != lVar4)) {
      FUN_0037f8c4();
      FUN_00379868();
      FUN_0037995c("crypto/evp/exchange.c",0xf2,"EVP_PKEY_derive_init_ex");
      uVar7 = 0xc0103;
      goto LAB_003b6930;
    }
    lVar4 = FUN_003a00a0(lVar4,0xb);
    if (lVar4 == 0) {
      FUN_0037f8c4();
      FUN_00379868();
      uVar7 = 0xf9;
    }
    else {
      FUN_003a059c(local_48);
      lVar8 = FUN_00382990(*(undefined8 *)(param_1 + 2),0xb,lVar4,*(undefined8 *)(param_1 + 4),
                           FUN_003b61c8,PTR_FUN_007a1b20,PTR_FUN_007a1b18);
      if (lVar8 == 0) {
        lVar6 = 0;
      }
      else {
        uVar10 = *(undefined8 *)(lVar8 + 0x18);
        uVar7 = FUN_003a0640(*(undefined8 *)(param_1 + 8));
        lVar5 = FUN_003a00ec(uVar10,uVar7,*(undefined8 *)(param_1 + 4));
        local_48 = lVar5;
        if (lVar5 == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = FUN_003a6930(*(undefined8 *)(param_1 + 0x22),*(undefined8 *)(param_1 + 2),
                               &local_48,*(undefined8 *)(param_1 + 4));
          if (local_48 != 0) goto joined_r0x003b66a4;
        }
        FUN_003a059c(lVar5);
      }
joined_r0x003b66a4:
      if (lVar6 == 0) {
        if ((lVar8 != 0) &&
           (iVar3 = *(int *)(lVar8 + 0x20), iVar1 = iVar3 + -1, *(int *)(lVar8 + 0x20) = iVar1,
           iVar1 == 0 || iVar3 < 1)) {
          FUN_003c86b4(*(undefined8 *)(lVar8 + 8),"crypto/evp/exchange.c",0x97);
          FUN_003d27b0(*(undefined8 *)(lVar8 + 0x18));
          FUN_003c86b4(lVar8,"crypto/evp/exchange.c",0x9a);
        }
        FUN_003a059c(local_48);
        uVar7 = FUN_003a0628(*(undefined8 *)(param_1 + 8));
        lVar8 = FUN_00382d14(uVar7,0xb,lVar4,*(undefined8 *)(param_1 + 4),FUN_003b61c8,
                             PTR_FUN_007a1b20,PTR_FUN_007a1b18);
        if (lVar8 == 0) goto LAB_003b67d8;
        uVar10 = FUN_003a0640(*(undefined8 *)(param_1 + 8));
        lVar4 = FUN_003a00ec(uVar7,uVar10,*(undefined8 *)(param_1 + 4));
        local_48 = lVar4;
        if (lVar4 == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = FUN_003a6930(*(undefined8 *)(param_1 + 0x22),*(undefined8 *)(param_1 + 2),
                               &local_48,*(undefined8 *)(param_1 + 4));
          if (local_48 != 0) goto joined_r0x003b68a8;
        }
        FUN_003a059c(lVar4);
      }
joined_r0x003b68a8:
      if (lVar6 == 0) {
        if ((lVar8 != 0) &&
           (iVar3 = *(int *)(lVar8 + 0x20), iVar1 = iVar3 + -1, *(int *)(lVar8 + 0x20) = iVar1,
           iVar1 == 0 || iVar3 < 1)) {
          FUN_003c86b4(*(undefined8 *)(lVar8 + 8),"crypto/evp/exchange.c",0x97);
          FUN_003d27b0(*(undefined8 *)(lVar8 + 0x18));
          FUN_003c86b4(lVar8,"crypto/evp/exchange.c",0x9a);
        }
        goto LAB_003b67d8;
      }
      FUN_0037f71c();
      *(long *)(param_1 + 10) = lVar8;
      pcVar9 = *(code **)(lVar8 + 0x28);
      FUN_003d3bf8(*(undefined8 *)(lVar8 + 0x18));
      lVar4 = (*pcVar9)();
      *(long *)(param_1 + 0xc) = lVar4;
      if (lVar4 != 0) {
        iVar3 = (**(code **)(lVar8 + 0x30))(lVar4,lVar6,param_2);
        FUN_003a059c(local_48);
        return (uint)(iVar3 != 0);
      }
      FUN_00379868();
      uVar7 = 0x152;
    }
  }
  FUN_0037995c("crypto/evp/exchange.c",uVar7,"EVP_PKEY_derive_init_ex");
  uVar7 = 0x86;
LAB_003b6930:
  FUN_00379a5c(6,uVar7,0);
  FUN_003b1dfc(param_1);
  *param_1 = 0;
  FUN_003a059c(local_48);
  return 0;
}


// ===== 003b6968  FUN_003b6968 =====

undefined8 FUN_003b6968(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long local_38;
  
  local_38 = 0;
  if (param_1 == (int *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/evp/exchange.c",0x181,"EVP_PKEY_derive_set_peer_ex");
    uVar2 = 0xc0102;
  }
  else {
    if ((*param_1 == 0x800) && (*(long *)(param_1 + 0xc) != 0)) {
      lVar4 = *(long *)(param_1 + 10);
      if (*(long *)(lVar4 + 0x38) == 0) {
        FUN_00379868();
        uVar2 = 0x189;
        goto LAB_003b6b88;
      }
      if (param_3 != 0) {
        lVar4 = FUN_003b1de8(*(undefined8 *)(param_1 + 2),param_2,*(undefined8 *)(param_1 + 4));
        if (lVar4 == 0) {
          return 0xffffffff;
        }
        iVar1 = FUN_003b7034();
        FUN_003b1f78(lVar4);
        if (iVar1 < 1) {
          return 0xffffffff;
        }
        lVar4 = *(long *)(param_1 + 10);
      }
      uVar5 = *(undefined8 *)(lVar4 + 0x18);
      uVar2 = FUN_003a0640(*(undefined8 *)(param_1 + 8));
      lVar4 = FUN_003a00ec(uVar5,uVar2,*(undefined8 *)(param_1 + 4));
      local_38 = lVar4;
      if (lVar4 == 0) {
        FUN_003a059c();
      }
      else {
        lVar3 = FUN_003a6930(param_2,*(undefined8 *)(param_1 + 2),&local_38,
                             *(undefined8 *)(param_1 + 4));
        FUN_003a059c(lVar4);
        if (lVar3 != 0) {
          uVar2 = (**(code **)(*(long *)(param_1 + 10) + 0x38))
                            (*(undefined8 *)(param_1 + 0xc),lVar3);
          return uVar2;
        }
      }
    }
    lVar4 = *(long *)(param_1 + 0x1e);
    if ((lVar4 == 0) ||
       ((((*(long *)(lVar4 + 0xb8) == 0 && (*(long *)(lVar4 + 0x98) == 0)) &&
         (*(long *)(lVar4 + 0xa8) == 0)) || (*(code **)(lVar4 + 0xc0) == (code *)0x0)))) {
      FUN_00379868();
      uVar2 = 0x1bd;
LAB_003b6b88:
      FUN_0037995c("crypto/evp/exchange.c",uVar2,"EVP_PKEY_derive_set_peer_ex");
      FUN_00379a5c(6,0x96,0);
      return 0xfffffffe;
    }
    iVar1 = *param_1;
    if (((iVar1 == 0x200) || (iVar1 == 0x400)) || (iVar1 == 0x800)) {
      uVar2 = (**(code **)(lVar4 + 0xc0))(param_1,2,0,param_2);
      if ((int)uVar2 < 1) {
        return uVar2;
      }
      if ((int)uVar2 == 2) {
        return 1;
      }
      if (*(int **)(param_1 + 0x22) == (int *)0x0) {
        FUN_00379868();
        FUN_0037995c("crypto/evp/exchange.c",0x1d0,"EVP_PKEY_derive_set_peer_ex");
        uVar2 = 0x9a;
      }
      else if (**(int **)(param_1 + 0x22) == *param_2) {
        iVar1 = FUN_003a689c(param_2);
        if ((iVar1 != 0) ||
           (iVar1 = FUN_003a68e4(*(undefined8 *)(param_1 + 0x22),param_2), iVar1 != 0)) {
          FUN_003a6c04(*(undefined8 *)(param_1 + 0x24));
          *(int **)(param_1 + 0x24) = param_2;
          uVar2 = (**(code **)(*(long *)(param_1 + 0x1e) + 0xc0))(param_1,2,1,param_2);
          if ((int)uVar2 < 1) {
            param_1[0x24] = 0;
            param_1[0x25] = 0;
            return uVar2;
          }
          FUN_003a8c24(param_2);
          return 1;
        }
        FUN_00379868();
        FUN_0037995c("crypto/evp/exchange.c",0x1e2,"EVP_PKEY_derive_set_peer_ex");
        uVar2 = 0x99;
      }
      else {
        FUN_00379868();
        FUN_0037995c("crypto/evp/exchange.c",0x1d5,"EVP_PKEY_derive_set_peer_ex");
        uVar2 = 0x65;
      }
    }
    else {
      FUN_00379868();
      FUN_0037995c("crypto/evp/exchange.c",0x1c3,"EVP_PKEY_derive_set_peer_ex");
      uVar2 = 0x97;
    }
  }
  FUN_00379a5c(6,uVar2,0);
  return 0xffffffff;
}


// ===== 003b6cf8  FUN_003b6cf8 =====

void FUN_003b6cf8(undefined8 param_1,undefined8 param_2)

{
  FUN_003b6968(param_1,param_2,1);
  return;
}


// ===== 003b6d00  FUN_003b6d00 =====

undefined8 FUN_003b6d00(int *param_1,long param_2,ulong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((param_1 == (int *)0x0) || (param_3 == (ulong *)0x0)) {
    FUN_00379868();
    FUN_0037995c("crypto/evp/exchange.c",0x1ff,"EVP_PKEY_derive");
    uVar2 = 0xc0102;
  }
  else {
    if (*param_1 == 0x800) {
      lVar3 = *(long *)(param_1 + 0xc);
      if (lVar3 != 0) {
        if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x003b6d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar2 = (**(code **)(*(long *)(param_1 + 10) + 0x40))(lVar3,param_2,param_3,*param_3);
          return uVar2;
        }
                    /* WARNING: Could not recover jumptable at 0x003b6df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(*(long *)(param_1 + 10) + 0x40))(lVar3,0,param_3,0);
        return uVar2;
      }
      lVar3 = *(long *)(param_1 + 0x1e);
      if ((lVar3 != 0) && (*(code **)(lVar3 + 0xb8) != (code *)0x0)) {
        if ((*(byte *)(lVar3 + 4) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x003b6de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar2 = (**(code **)(lVar3 + 0xb8))();
          return uVar2;
        }
        iVar1 = FUN_003a8edc(*(undefined8 *)(param_1 + 0x22));
        if (iVar1 == 0) {
          FUN_00379868();
          FUN_0037995c("crypto/evp/exchange.c",0x215,"EVP_PKEY_derive");
          uVar2 = 0xa3;
        }
        else {
          if (param_2 == 0) {
            *param_3 = (long)iVar1;
            return 1;
          }
          if ((ulong)(long)iVar1 <= *param_3) {
                    /* WARNING: Could not recover jumptable at 0x003b6f08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar2 = (**(code **)(*(long *)(param_1 + 0x1e) + 0xb8))(param_1,param_2,param_3);
            return uVar2;
          }
          FUN_00379868();
          FUN_0037995c("crypto/evp/exchange.c",0x215,"EVP_PKEY_derive");
          uVar2 = 0x9b;
        }
        FUN_00379a5c(6,uVar2,0);
        return 0;
      }
      FUN_00379868();
      FUN_0037995c("crypto/evp/exchange.c",0x211,"EVP_PKEY_derive");
      FUN_00379a5c(6,0x96,0);
      return 0xfffffffe;
    }
    FUN_00379868();
    FUN_0037995c("crypto/evp/exchange.c",0x204,"EVP_PKEY_derive");
    uVar2 = 0x97;
  }
  FUN_00379a5c(6,uVar2,0);
  return 0xffffffff;
}


// ===== 003b6f0c  FUN_003b6f0c =====

undefined4 FUN_003b6f0c(undefined4 *param_1)

{
  return *param_1;
}


// ===== 003b6f14  FUN_003b6f14 =====

undefined8 FUN_003b6f14(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


// ===== 003b6f1c  FUN_003b6f1c =====

undefined8 FUN_003b6f1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


// ===== 003b6f24  FUN_003b6f24 =====

undefined4 * FUN_003b6f24(undefined4 *param_1,undefined8 param_2)

{
  int iVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    iVar1 = FUN_00383528(*(undefined8 *)(param_1 + 6),*param_1,0,param_2);
    param_1 = (undefined4 *)(ulong)(iVar1 != 0);
  }
  return param_1;
}


// ===== 003b6f58  FUN_003b6f58 =====

void FUN_003b6f58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0038345c(param_1,0xb,param_2,param_3,FUN_003b61c8,PTR_FUN_007a1b20,PTR_FUN_007a1b18);
  return;
}


// ===== 003b6f80  FUN_003b6f80 =====

undefined8 FUN_003b6f80(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 6) != 0) {
    uVar1 = FUN_00383588(*(long *)(param_1 + 6),*param_1,param_2,param_3);
    return uVar1;
  }
  return 1;
}


// ===== 003b6fa4  FUN_003b6fa4 =====

undefined8 FUN_003b6fa4(long param_1)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x70) != 0)) {
    uVar1 = FUN_003d3bf8(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x003b6fe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x70))(0,uVar1);
    return uVar1;
  }
  return 0;
}


// ===== 003b6fec  FUN_003b6fec =====

undefined8 FUN_003b6fec(long param_1)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x60) != 0)) {
    uVar1 = FUN_003d3bf8(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x003b7028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x60))(0,uVar1);
    return uVar1;
  }
  return 0;
}


// ===== 003b7034  FUN_003b7034 =====

void FUN_003b7034(undefined8 param_1)

{
  FUN_003b703c(param_1,0);
  return;
}


// ===== 003b703c  FUN_003b703c =====

ulong FUN_003b703c(long param_1,undefined4 param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  int *piVar6;
  long local_18;
  
  piVar6 = *(int **)(param_1 + 0x88);
  if (piVar6 == (int *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/evp/pmeth_check.c",0x35,"evp_pkey_public_check_combined");
    uVar4 = 0x9a;
LAB_003b712c:
    FUN_00379a5c(6,uVar4,0);
    return 0;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    local_18 = *(long *)(param_1 + 0x20);
    lVar2 = FUN_003a6930(piVar6,*(undefined8 *)(param_1 + 8),&local_18,
                         *(undefined8 *)(param_1 + 0x10));
    if (lVar2 == 0) {
      FUN_00379868();
      FUN_0037995c("crypto/evp/pmeth_check.c",0x28,"try_provided_check");
      uVar4 = 0x86;
      goto LAB_003b712c;
    }
    uVar1 = FUN_003a090c(local_18,lVar2,2,param_2);
    if (uVar1 != 0xffffffff) {
      return (ulong)uVar1;
    }
  }
  if ((*piVar6 != 0) &&
     ((pcVar5 = *(code **)(*(long *)(param_1 + 0x78) + 0xe8), pcVar5 != (code *)0x0 ||
      ((*(long *)(piVar6 + 2) != 0 &&
       (pcVar5 = *(code **)(*(long *)(piVar6 + 2) + 0xe8), pcVar5 != (code *)0x0)))))) {
    uVar3 = (*pcVar5)(piVar6);
    return uVar3;
  }
  FUN_00379868();
  FUN_0037995c("crypto/evp/pmeth_check.c",0x4d,"evp_pkey_public_check_combined");
  FUN_00379a5c(6,0x96,0);
  return 0xfffffffe;
}


// ===== 003b71a0  FUN_003b71a0 =====

void FUN_003b71a0(undefined8 param_1)

{
  FUN_003b703c(param_1,1);
  return;
}


// ===== 003b71a8  FUN_003b71a8 =====

void FUN_003b71a8(undefined8 param_1)

{
  FUN_003b71b0(param_1,0);
  return;
}


// ===== 003b71b0  FUN_003b71b0 =====

ulong FUN_003b71b0(long param_1,undefined4 param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  int *piVar6;
  long local_18;
  
  piVar6 = *(int **)(param_1 + 0x88);
  if (piVar6 == (int *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/evp/pmeth_check.c",0x61,"evp_pkey_param_check_combined");
    uVar4 = 0x9a;
LAB_003b72a0:
    FUN_00379a5c(6,uVar4,0);
    return 0;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    local_18 = *(long *)(param_1 + 0x20);
    lVar2 = FUN_003a6930(piVar6,*(undefined8 *)(param_1 + 8),&local_18,
                         *(undefined8 *)(param_1 + 0x10));
    if (lVar2 == 0) {
      FUN_00379868();
      FUN_0037995c("crypto/evp/pmeth_check.c",0x28,"try_provided_check");
      uVar4 = 0x86;
      goto LAB_003b72a0;
    }
    uVar1 = FUN_003a090c(local_18,lVar2,0x84,param_2);
    if (uVar1 != 0xffffffff) {
      return (ulong)uVar1;
    }
  }
  if ((*piVar6 != 0) &&
     ((pcVar5 = *(code **)(*(long *)(param_1 + 0x78) + 0xf0), pcVar5 != (code *)0x0 ||
      ((*(long *)(piVar6 + 2) != 0 &&
       (pcVar5 = *(code **)(*(long *)(piVar6 + 2) + 0xf0), pcVar5 != (code *)0x0)))))) {
    uVar3 = (*pcVar5)(piVar6);
    return uVar3;
  }
  FUN_00379868();
  FUN_0037995c("crypto/evp/pmeth_check.c",0x7a,"evp_pkey_param_check_combined");
  FUN_00379a5c(6,0x96,0);
  return 0xfffffffe;
}


// ===== 003b7314  FUN_003b7314 =====

void FUN_003b7314(undefined8 param_1)

{
  FUN_003b71b0(param_1,1);
  return;
}


// ===== 003b731c  FUN_003b731c =====

undefined8 FUN_003b731c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long local_18;
  
  if (*(long *)(param_1 + 0x88) == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/evp/pmeth_check.c",0x8e,"EVP_PKEY_private_check");
    FUN_00379a5c(6,0x9a,0);
    return 0;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    local_18 = *(long *)(param_1 + 0x20);
    lVar1 = FUN_003a6930(*(long *)(param_1 + 0x88),*(undefined8 *)(param_1 + 8),&local_18,
                         *(undefined8 *)(param_1 + 0x10));
    if (lVar1 == 0) {
      FUN_00379868();
      FUN_0037995c("crypto/evp/pmeth_check.c",0x28,"try_provided_check");
      FUN_00379a5c(6,0x86,0);
      return 0;
    }
    uVar2 = FUN_003a090c(local_18,lVar1,1,0);
    if ((int)uVar2 != -1) {
      return uVar2;
    }
  }
  FUN_00379868();
  FUN_0037995c("crypto/evp/pmeth_check.c",0x97,"EVP_PKEY_private_check");
  FUN_00379a5c(6,0x96,0);
  return 0xfffffffe;
}


// ===== 003b742c  thunk_FUN_003b7430 =====

ulong thunk_FUN_003b7430(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  int *piVar6;
  long lStack_28;
  
  piVar6 = *(int **)(param_1 + 0x88);
  if (piVar6 == (int *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/evp/pmeth_check.c",0xa6,"EVP_PKEY_pairwise_check");
    uVar4 = 0x9a;
LAB_003b751c:
    FUN_00379a5c(6,uVar4,0);
    return 0;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    lStack_28 = *(long *)(param_1 + 0x20);
    lVar2 = FUN_003a6930(piVar6,*(undefined8 *)(param_1 + 8),&lStack_28,
                         *(undefined8 *)(param_1 + 0x10));
    if (lVar2 == 0) {
      FUN_00379868();
      FUN_0037995c("crypto/evp/pmeth_check.c",0x28,"try_provided_check");
      uVar4 = 0x86;
      goto LAB_003b751c;
    }
    uVar1 = FUN_003a090c(lStack_28,lVar2,3,0);
    if (uVar1 != 0xffffffff) {
      return (ulong)uVar1;
    }
  }
  if ((*piVar6 != 0) &&
     ((pcVar5 = *(code **)(*(long *)(param_1 + 0x78) + 0xe0), pcVar5 != (code *)0x0 ||
      ((*(long *)(piVar6 + 2) != 0 &&
       (pcVar5 = *(code **)(*(long *)(piVar6 + 2) + 0xe0), pcVar5 != (code *)0x0)))))) {
    uVar3 = (*pcVar5)(piVar6);
    return uVar3;
  }
  FUN_00379868();
  FUN_0037995c("crypto/evp/pmeth_check.c",0xbe,"EVP_PKEY_pairwise_check");
  FUN_00379a5c(6,0x96,0);
  return 0xfffffffe;
}


// ===== 003b7430  FUN_003b7430 =====

ulong FUN_003b7430(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  int *piVar6;
  long local_28;
  
  piVar6 = *(int **)(param_1 + 0x88);
  if (piVar6 == (int *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/evp/pmeth_check.c",0xa6,"EVP_PKEY_pairwise_check");
    uVar4 = 0x9a;
LAB_003b751c:
    FUN_00379a5c(6,uVar4,0);
    return 0;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    local_28 = *(long *)(param_1 + 0x20);
    lVar2 = FUN_003a6930(piVar6,*(undefined8 *)(param_1 + 8),&local_28,
                         *(undefined8 *)(param_1 + 0x10));
    if (lVar2 == 0) {
      FUN_00379868();
      FUN_0037995c("crypto/evp/pmeth_check.c",0x28,"try_provided_check");
      uVar4 = 0x86;
      goto LAB_003b751c;
    }
    uVar1 = FUN_003a090c(local_28,lVar2,3,0);
    if (uVar1 != 0xffffffff) {
      return (ulong)uVar1;
    }
  }
  if ((*piVar6 != 0) &&
     ((pcVar5 = *(code **)(*(long *)(param_1 + 0x78) + 0xe0), pcVar5 != (code *)0x0 ||
      ((*(long *)(piVar6 + 2) != 0 &&
       (pcVar5 = *(code **)(*(long *)(piVar6 + 2) + 0xe0), pcVar5 != (code *)0x0)))))) {
    uVar3 = (*pcVar5)(piVar6);
    return uVar3;
  }
  FUN_00379868();
  FUN_0037995c("crypto/evp/pmeth_check.c",0xbe,"EVP_PKEY_pairwise_check");
  FUN_00379a5c(6,0x96,0);
  return 0xfffffffe;
}


// ===== 003b7590  FUN_003b7590 =====

void FUN_003b7590(long param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != 0) &&
     (iVar1 = *(int *)(param_1 + 0x20), iVar2 = iVar1 + -1, *(int *)(param_1 + 0x20) = iVar2,
     iVar2 == 0 || iVar1 < 1)) {
    FUN_003c86b4(*(undefined8 *)(param_1 + 8),"crypto/evp/signature.c",0x11d);
    FUN_003d27b0(*(undefined8 *)(param_1 + 0x18));
    FUN_003c86b4(param_1,"crypto/evp/signature.c",0x120);
    return;
  }
  return;
}


// ===== 003b75f4  FUN_003b75f4 =====

undefined8 FUN_003b75f4(long param_1)

{
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  return 1;
}


// ===== 003b760c  FUN_003b760c =====

undefined8 FUN_003b760c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


// ===== 003b7614  FUN_003b7614 =====

void FUN_003b7614(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00382990(param_1,0xc,param_2,param_3,FUN_003b763c,PTR_FUN_007a1b60,PTR_FUN_007a1b40);
  return;
}


// ===== 003b763c  FUN_003b763c =====

undefined4 * FUN_003b763c(undefined4 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined8 *puVar4;
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
  long lVar15;
  
  lVar15 = *(long *)(param_2 + 0x10);
  puVar2 = (undefined4 *)FUN_003c8474(0xf0,"crypto/evp/signature.c",0x17);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/evp/signature.c",0x32,"evp_signature_from_algorithm");
    FUN_00379a5c(6,0x80006,0);
    return (undefined4 *)0x0;
  }
  *(undefined8 *)(puVar2 + 6) = param_3;
  puVar2[8] = 1;
  FUN_003d2754(param_3);
  *puVar2 = param_1;
  lVar3 = FUN_003c34fc(param_2);
  *(long *)(puVar2 + 2) = lVar3;
  if (lVar3 != 0) {
    iVar14 = 0;
    uVar13 = 0;
    uVar12 = 0;
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0;
    *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(param_2 + 0x18);
    puVar4 = (undefined8 *)(lVar15 + 8);
LAB_003b76ec:
    switch(*(undefined4 *)(puVar4 + -1)) {
    case 0:
      goto switchD_003b7704_caseD_0;
    case 1:
      if (*(long *)(puVar2 + 10) == 0) {
        iVar14 = iVar14 + 1;
        *(undefined8 *)(puVar2 + 10) = *puVar4;
        puVar4 = puVar4 + 2;
        goto LAB_003b76ec;
      }
      break;
    case 2:
      if (*(long *)(puVar2 + 0xc) == 0) {
        uVar13 = uVar13 + 1;
        *(undefined8 *)(puVar2 + 0xc) = *puVar4;
        puVar4 = puVar4 + 2;
        goto LAB_003b76ec;
      }
      break;
    case 3:
      if (*(long *)(puVar2 + 0xe) == 0) {
        uVar13 = uVar13 + 1;
        *(undefined8 *)(puVar2 + 0xe) = *puVar4;
        puVar4 = puVar4 + 2;
        goto LAB_003b76ec;
      }
      break;
    case 4:
      if (*(long *)(puVar2 + 0x10) == 0) {
        uVar12 = uVar12 + 1;
        *(undefined8 *)(puVar2 + 0x10) = *puVar4;
        puVar4 = puVar4 + 2;
        goto LAB_003b76ec;
      }
      break;
    case 5:
      if (*(long *)(puVar2 + 0x12) == 0) {
        uVar12 = uVar12 + 1;
        *(undefined8 *)(puVar2 + 0x12) = *puVar4;
        puVar4 = puVar4 + 2;
        goto LAB_003b76ec;
      }
      break;
    case 6:
      if (*(long *)(puVar2 + 0x14) == 0) {
        uVar11 = uVar11 + 1;
        *(undefined8 *)(puVar2 + 0x14) = *puVar4;
        puVar4 = puVar4 + 2;
        goto LAB_003b76ec;
      }
      break;
    case 7:
      if (*(long *)(puVar2 + 0x16) == 0) {
        uVar11 = uVar11 + 1;
        *(undefined8 *)(puVar2 + 0x16) = *puVar4;
        puVar4 = puVar4 + 2;
        goto LAB_003b76ec;
      }
      break;
    case 8:
      if (*(long *)(puVar2 + 0x18) == 0) {
        *(undefined8 *)(puVar2 + 0x18) = *puVar4;
        puVar4 = puVar4 + 2;
        goto LAB_003b76ec;
      }
      break;
    case 9:
      if (*(long *)(puVar2 + 0x1a) == 0) {
        uVar10 = uVar10 + 1;
        *(undefined8 *)(puVar2 + 0x1a) = *puVar4;
        puVar4 = puVar4 + 2;
        goto LAB_003b76ec;
      }
      break;
    case 10:
      if (*(long *)(puVar2 + 0x1c) == 0) {
        uVar10 = uVar10 + 1;
        *(undefined8 *)(puVar2 + 0x1c) = *puVar4;
        puVar4 = puVar4 + 2;
        goto LAB_003b76ec;
      }
      break;
    case 0xb:
      if (*(long *)(puVar2 + 0x1e) == 0) {
        *(undefined8 *)(puVar2 + 0x1e) = *puVar4;
        puVar4 = puVar4 + 2;
        goto LAB_003b76ec;
      }
      break;
    case 0xc:
      if (*(long *)(puVar2 + 0x20) == 0) {
        *(undefined8 *)(puVar2 + 0x20) = *puVar4;
        puVar4 = puVar4 + 2;
        goto LAB_003b76ec;
      }
      break;
    case 0xd:
      if (*(long *)(puVar2 + 0x22) == 0) {
        uVar9 = uVar9 + 1;
        *(undefined8 *)(puVar2 + 0x22) = *puVar4;
        puVar4 = puVar4 + 2;
        goto LAB_003b76ec;
      }
      break;
    case 0xe:
      if (*(long *)(puVar2 + 0x24) == 0) {
        uVar9 = uVar9 + 1;
        *(undefined8 *)(puVar2 + 0x24) = *puVar4;
        puVar4 = puVar4 + 2;
        goto LAB_003b76ec;
      }
      break;
    case 0xf:
      if (*(long *)(puVar2 + 0x26) == 0) {
        *(undefined8 *)(puVar2 + 0x26) = *puVar4;
        puVar4 = puVar4 + 2;
        goto LAB_003b76ec;
      }
      break;
    case 0x10:
      if (*(long *)(puVar2 + 0x28) == 0) {
        iVar14 = iVar14 + 1;
        *(undefined8 *)(puVar2 + 0x28) = *puVar4;
        puVar4 = puVar4 + 2;
        goto LAB_003b76ec;
      }
      break;
    case 0x11:
      if (*(long *)(puVar2 + 0x2a) == 0) {
        *(undefined8 *)(puVar2 + 0x2a) = *puVar4;
        puVar4 = puVar4 + 2;
        goto LAB_003b76ec;
      }
      break;
    case 0x12:
      if (*(long *)(puVar2 + 0x2c) == 0) {
        uVar8 = uVar8 + 1;
        *(undefined8 *)(puVar2 + 0x2c) = *puVar4;
        puVar4 = puVar4 + 2;
        goto LAB_003b76ec;
      }
      break;
    case 0x13:
      if (*(long *)(puVar2 + 0x2e) == 0) {
        uVar8 = uVar8 + 1;
        *(undefined8 *)(puVar2 + 0x2e) = *puVar4;
        puVar4 = puVar4 + 2;
        goto LAB_003b76ec;
      }
      break;
    case 0x14:
      if (*(long *)(puVar2 + 0x30) == 0) {
        uVar7 = uVar7 + 1;
        *(undefined8 *)(puVar2 + 0x30) = *puVar4;
        puVar4 = puVar4 + 2;
        goto LAB_003b76ec;
      }
      break;
    case 0x15:
      if (*(long *)(puVar2 + 0x32) == 0) {
        uVar7 = uVar7 + 1;
        *(undefined8 *)(puVar2 + 0x32) = *puVar4;
        puVar4 = puVar4 + 2;
        goto LAB_003b76ec;
      }
      break;
    case 0x16:
      if (*(long *)(puVar2 + 0x34) == 0) {
        uVar6 = uVar6 + 1;
        *(undefined8 *)(puVar2 + 0x34) = *puVar4;
        puVar4 = puVar4 + 2;
        goto LAB_003b76ec;
      }
      break;
    case 0x17:
      if (*(long *)(puVar2 + 0x36) != 0) break;
      uVar6 = uVar6 + 1;
      *(undefined8 *)(puVar2 + 0x36) = *puVar4;
      puVar4 = puVar4 + 2;
      goto LAB_003b76ec;
    case 0x18:
      if (*(long *)(puVar2 + 0x38) == 0) {
        *(undefined8 *)(puVar2 + 0x38) = *puVar4;
LAB_003b76e4:
        uVar5 = uVar5 + 1;
      }
      break;
    case 0x19:
      if (*(long *)(puVar2 + 0x3a) == 0) {
        *(undefined8 *)(puVar2 + 0x3a) = *puVar4;
        goto LAB_003b76e4;
      }
    }
    puVar4 = puVar4 + 2;
    goto LAB_003b76ec;
  }
  goto LAB_003b7a88;
switchD_003b7704_caseD_0:
  if (iVar14 == 2) {
    if ((((uVar13 == 0) && (uVar12 == 0)) && (uVar11 == 0)) && ((uVar10 == 0 && (uVar9 == 0)))) {
      if ((*(long *)(puVar2 + 0x1e) != 0) || (*(long *)(puVar2 + 0x26) != 0)) {
LAB_003b79c4:
        if (((((uVar12 & 0xfffffffd) == 0) &&
             (((uVar11 & 0xfffffffd) == 0 && ((uVar10 & 0xfffffffd) == 0)))) &&
            (((uVar10 != 2 || (*(long *)(puVar2 + 0x18) != 0)) &&
             (((uVar9 & 0xfffffffd) == 0 && ((uVar9 != 2 || (*(long *)(puVar2 + 0x20) != 0))))))))
           && (((*(long *)(puVar2 + 0x1e) == 0 || (*(long *)(puVar2 + 0x18) != 0)) &&
               (((((*(long *)(puVar2 + 0x26) == 0 || (*(long *)(puVar2 + 0x20) != 0)) &&
                  ((uVar8 & 0xfffffffd) == 0)) &&
                 (((uVar7 & 0xfffffffd) == 0 && ((uVar6 & 0xfffffffd) == 0)))) &&
                ((uVar5 & 0xfffffffd) == 0)))))) {
          return puVar2;
        }
      }
    }
    else if ((uVar13 & 0xfffffffd) == 0) goto LAB_003b79c4;
  }
  FUN_00379868();
  FUN_0037995c("crypto/evp/signature.c",0x10a,"evp_signature_from_algorithm");
  FUN_00379a5c(6,0xc1,0);
LAB_003b7a88:
  iVar14 = puVar2[8];
  iVar1 = iVar14 + -1;
  puVar2[8] = iVar1;
  if (iVar1 == 0 || iVar14 < 1) {
    FUN_003c86b4(*(undefined8 *)(puVar2 + 2),"crypto/evp/signature.c",0x11d);
    FUN_003d27b0(*(undefined8 *)(puVar2 + 6));
    FUN_003c86b4(puVar2,"crypto/evp/signature.c",0x120);
  }
  return (undefined4 *)0x0;
}


// ===== 003b7ae4  FUN_003b7ae4 =====

void FUN_003b7ae4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00382d14(param_1,0xc,param_2,param_3,FUN_003b763c,PTR_FUN_007a1b60,PTR_FUN_007a1b40);
  return;
}


// ===== 003b7b0c  FUN_003b7b0c =====

undefined4 * FUN_003b7b0c(undefined4 *param_1,undefined8 param_2)

{
  int iVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    iVar1 = FUN_00383528(*(undefined8 *)(param_1 + 6),*param_1,0,param_2);
    param_1 = (undefined4 *)(ulong)(iVar1 != 0);
  }
  return param_1;
}


// ===== 003b7b40  FUN_003b7b40 =====

undefined4 FUN_003b7b40(undefined4 *param_1)

{
  return *param_1;
}


// ===== 003b7b48  FUN_003b7b48 =====

undefined8 FUN_003b7b48(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


// ===== 003b7b50  FUN_003b7b50 =====

undefined8 FUN_003b7b50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


// ===== 003b7b58  FUN_003b7b58 =====

void FUN_003b7b58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0038345c(param_1,0xc,param_2,param_3,FUN_003b763c,PTR_FUN_007a1b60,PTR_FUN_007a1b40);
  return;
}


// ===== 003b7b80  FUN_003b7b80 =====

undefined8 FUN_003b7b80(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 6) != 0) {
    uVar1 = FUN_00383588(*(long *)(param_1 + 6),*param_1,param_2,param_3);
    return uVar1;
  }
  return 1;
}


// ===== 003b7ba4  FUN_003b7ba4 =====

undefined8 FUN_003b7ba4(long param_1)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0xb8) != 0)) {
    uVar1 = FUN_003d3bf8(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x003b7be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0xb8))(0,uVar1);
    return uVar1;
  }
  return 0;
}


// ===== 003b7bec  FUN_003b7bec =====

undefined8 FUN_003b7bec(long param_1)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 200) != 0)) {
    uVar1 = FUN_003d3bf8(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x003b7c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 200))(0,uVar1);
    return uVar1;
  }
  return 0;
}


// ===== 003b7c34  FUN_003b7c34 =====

void FUN_003b7c34(undefined8 param_1)

{
  FUN_003b7c40(param_1,0x10,0);
  return;
}


// ===== 003b7c40  FUN_003b7c40 =====

int FUN_003b7c40(int *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  long local_38;
  
  local_38 = 0;
  if (param_1 == (int *)0x0) {
    FUN_00379868();
    uVar6 = 0x192;
LAB_003b7f70:
    FUN_0037995c("crypto/evp/signature.c",uVar6,"evp_pkey_signature_init");
    FUN_00379a5c(6,0x96,0);
    iVar2 = -2;
  }
  else {
    FUN_003b1dfc();
    *param_1 = param_2;
    FUN_0037f6d4();
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 == 0) {
LAB_003b7ec4:
      FUN_0037f71c();
      FUN_003a059c(local_38);
      lVar3 = *(long *)(param_1 + 0x1e);
      local_38 = 0;
      if (lVar3 == 0) {
LAB_003b7f58:
        FUN_00379868();
        uVar6 = 0x23f;
        goto LAB_003b7f70;
      }
      if (param_2 == 0x40) {
        if (*(long *)(lVar3 + 0x68) == 0) goto LAB_003b7f58;
        pcVar8 = *(code **)(lVar3 + 0x60);
      }
      else if (param_2 == 0x20) {
        if (*(long *)(lVar3 + 0x58) == 0) goto LAB_003b7f58;
        pcVar8 = *(code **)(lVar3 + 0x50);
      }
      else {
        if (param_2 != 0x10) {
          FUN_00379868();
          uVar6 = 0x254;
          goto LAB_003b80b8;
        }
        if (*(long *)(lVar3 + 0x48) == 0) goto LAB_003b7f58;
        pcVar8 = *(code **)(lVar3 + 0x40);
      }
      if (pcVar8 == (code *)0x0) {
        return 1;
      }
      iVar2 = (*pcVar8)(param_1);
      if (iVar2 < 1) goto LAB_003b80d0;
LAB_003b7f28:
      iVar2 = FUN_003b4048(param_1);
    }
    else {
      if (*(long *)(param_1 + 0x22) == 0) {
        FUN_0037f8c4();
        FUN_00379868();
        FUN_0037995c("crypto/evp/signature.c",0x1a0,"evp_pkey_signature_init");
        uVar6 = 0x9a;
      }
      else {
        lVar7 = *(long *)(*(long *)(param_1 + 0x22) + 0x60);
        if ((lVar7 == 0) || (lVar7 == lVar3)) {
          lVar3 = FUN_003a00a0(lVar3,0xc);
          if (lVar3 != 0) {
            FUN_003a059c(local_38);
            lVar7 = FUN_00382990(*(undefined8 *)(param_1 + 2),0xc,lVar3,*(undefined8 *)(param_1 + 4)
                                 ,FUN_003b763c,PTR_FUN_007a1b60,PTR_FUN_007a1b40);
            if (lVar7 == 0) {
              lVar5 = 0;
            }
            else {
              uVar9 = *(undefined8 *)(lVar7 + 0x18);
              uVar6 = FUN_003a0640(*(undefined8 *)(param_1 + 8));
              lVar4 = FUN_003a00ec(uVar9,uVar6,*(undefined8 *)(param_1 + 4));
              local_38 = lVar4;
              if (lVar4 == 0) {
                lVar5 = 0;
              }
              else {
                lVar5 = FUN_003a6930(*(undefined8 *)(param_1 + 0x22),*(undefined8 *)(param_1 + 2),
                                     &local_38,*(undefined8 *)(param_1 + 4));
                if (local_38 != 0) goto joined_r0x003b7dcc;
              }
              FUN_003a059c(lVar4);
            }
joined_r0x003b7dcc:
            if (lVar5 == 0) {
              if ((lVar7 != 0) &&
                 (iVar2 = *(int *)(lVar7 + 0x20), iVar1 = iVar2 + -1, *(int *)(lVar7 + 0x20) = iVar1
                 , iVar1 == 0 || iVar2 < 1)) {
                FUN_003c86b4(*(undefined8 *)(lVar7 + 8),"crypto/evp/signature.c",0x11d);
                FUN_003d27b0(*(undefined8 *)(lVar7 + 0x18));
                FUN_003c86b4(lVar7,"crypto/evp/signature.c",0x120);
              }
              FUN_003a059c(local_38);
              uVar6 = FUN_003a0628(*(undefined8 *)(param_1 + 8));
              lVar7 = FUN_00382d14(uVar6,0xc,lVar3,*(undefined8 *)(param_1 + 4),FUN_003b763c,
                                   PTR_FUN_007a1b60,PTR_FUN_007a1b40);
              if (lVar7 == 0) goto LAB_003b7ec4;
              uVar9 = FUN_003a0640(*(undefined8 *)(param_1 + 8));
              lVar3 = FUN_003a00ec(uVar6,uVar9,*(undefined8 *)(param_1 + 4));
              local_38 = lVar3;
              if (lVar3 == 0) {
                lVar5 = 0;
              }
              else {
                lVar5 = FUN_003a6930(*(undefined8 *)(param_1 + 0x22),*(undefined8 *)(param_1 + 2),
                                     &local_38,*(undefined8 *)(param_1 + 4));
                if (local_38 != 0) goto joined_r0x003b7dd0;
              }
              FUN_003a059c(lVar3);
            }
joined_r0x003b7dd0:
            if (lVar5 == 0) {
              FUN_003b7590(lVar7);
              goto LAB_003b7ec4;
            }
            FUN_0037f71c();
            *(long *)(param_1 + 10) = lVar7;
            pcVar8 = *(code **)(lVar7 + 0x28);
            uVar6 = FUN_003d3bf8(*(undefined8 *)(lVar7 + 0x18));
            auVar10 = (*pcVar8)(uVar6,*(undefined8 *)(param_1 + 4));
            uVar6 = auVar10._8_8_;
            lVar3 = auVar10._0_8_;
            *(long *)(param_1 + 0xc) = lVar3;
            if (lVar3 == 0) {
              FUN_00379868();
              uVar6 = 0x207;
              goto LAB_003b80b8;
            }
            if (param_2 == 0x40) {
              pcVar8 = *(code **)(lVar7 + 0x50);
              if (pcVar8 != (code *)0x0) {
LAB_003b8078:
                iVar2 = (*pcVar8)(lVar3,lVar5);
                if (0 < iVar2) goto LAB_003b7f28;
                (**(code **)(lVar7 + 0xa0))(*(undefined8 *)(param_1 + 0xc));
                param_1[0xc] = 0;
                param_1[0xd] = 0;
                goto LAB_003b80d0;
              }
              FUN_00379868(lVar3,uVar6,param_3);
              uVar6 = 0x21e;
            }
            else if (param_2 == 0x20) {
              pcVar8 = *(code **)(lVar7 + 0x40);
              if (pcVar8 != (code *)0x0) goto LAB_003b8078;
              FUN_00379868(lVar3,uVar6,param_3);
              uVar6 = 0x216;
            }
            else {
              if (param_2 != 0x10) {
                FUN_00379868(lVar3,uVar6,param_3);
                uVar6 = 0x226;
                goto LAB_003b80b8;
              }
              pcVar8 = *(code **)(lVar7 + 0x30);
              if (pcVar8 != (code *)0x0) goto LAB_003b8078;
              FUN_00379868(lVar3,uVar6,param_3);
              uVar6 = 0x20e;
            }
            FUN_0037995c("crypto/evp/signature.c",uVar6,"evp_pkey_signature_init");
            FUN_00379a5c(6,0x96,0);
            iVar2 = -2;
            goto LAB_003b80d0;
          }
          FUN_0037f8c4();
          FUN_00379868();
          uVar6 = 0x1b1;
LAB_003b80b8:
          FUN_0037995c("crypto/evp/signature.c",uVar6,"evp_pkey_signature_init");
          uVar6 = 0x86;
        }
        else {
          FUN_0037f8c4();
          FUN_00379868();
          FUN_0037995c("crypto/evp/signature.c",0x1aa,"evp_pkey_signature_init");
          uVar6 = 0xc0103;
        }
      }
      FUN_00379a5c(6,uVar6,0);
      iVar2 = 0;
LAB_003b80d0:
      FUN_003b1dfc(param_1);
      *param_1 = 0;
    }
    FUN_003a059c(local_38);
  }
  return iVar2;
}


// ===== 003b8134  FUN_003b8134 =====

void FUN_003b8134(undefined8 param_1,undefined8 param_2)

{
  FUN_003b7c40(param_1,0x10,param_2);
  return;
}


// ===== 003b8140  FUN_003b8140 =====

undefined8
FUN_003b8140(int *param_1,long param_2,ulong *param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  if (param_1 == (int *)0x0) {
    FUN_00379868();
    uVar2 = 0x279;
  }
  else {
    if (*param_1 != 0x10) {
      FUN_00379868();
      FUN_0037995c("crypto/evp/signature.c",0x27e,"EVP_PKEY_sign");
      FUN_00379a5c(6,0x97,0);
      return 0xffffffff;
    }
    if (*(long *)(param_1 + 0xc) != 0) {
      if (param_2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *param_3;
      }
                    /* WARNING: Could not recover jumptable at 0x003b8258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*(long *)(param_1 + 10) + 0x38))
                        (*(long *)(param_1 + 0xc),param_2,param_3,uVar3,param_4,param_5);
      return uVar2;
    }
    lVar4 = *(long *)(param_1 + 0x1e);
    if ((lVar4 != 0) && (*(code **)(lVar4 + 0x48) != (code *)0x0)) {
      if ((*(byte *)(lVar4 + 4) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x003b8238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(lVar4 + 0x48))();
        return uVar2;
      }
      iVar1 = FUN_003a8edc(*(undefined8 *)(param_1 + 0x22));
      if (iVar1 == 0) {
        FUN_00379868();
        FUN_0037995c("crypto/evp/signature.c",0x290,"EVP_PKEY_sign");
        uVar2 = 0xa3;
      }
      else {
        if (param_2 == 0) {
          *param_3 = (long)iVar1;
          return 1;
        }
        if ((ulong)(long)iVar1 <= *param_3) {
                    /* WARNING: Could not recover jumptable at 0x003b8360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar2 = (**(code **)(*(long *)(param_1 + 0x1e) + 0x48))
                            (param_1,param_2,param_3,param_4,param_5);
          return uVar2;
        }
        FUN_00379868();
        FUN_0037995c("crypto/evp/signature.c",0x290,"EVP_PKEY_sign");
        uVar2 = 0x9b;
      }
      FUN_00379a5c(6,uVar2,0);
      return 0;
    }
    FUN_00379868();
    uVar2 = 0x28c;
  }
  FUN_0037995c("crypto/evp/signature.c",uVar2,"EVP_PKEY_sign");
  FUN_00379a5c(6,0x96,0);
  return 0xfffffffe;
}


// ===== 003b8364  FUN_003b8364 =====

void FUN_003b8364(undefined8 param_1)

{
  FUN_003b7c40(param_1,0x20,0);
  return;
}


// ===== 003b8370  FUN_003b8370 =====

void FUN_003b8370(undefined8 param_1,undefined8 param_2)

{
  FUN_003b7c40(param_1,0x20,param_2);
  return;
}


// ===== 003b837c  FUN_003b837c =====

undefined8 FUN_003b837c(int *param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == (int *)0x0) {
    FUN_00379868();
    uVar1 = 0x2a5;
  }
  else {
    if (*param_1 != 0x20) {
      FUN_00379868();
      FUN_0037995c("crypto/evp/signature.c",0x2aa,"EVP_PKEY_verify");
      FUN_00379a5c(6,0x97,0);
      return 0xffffffff;
    }
    if (*(long *)(param_1 + 0xc) != 0) {
                    /* WARNING: Could not recover jumptable at 0x003b83ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*(long *)(param_1 + 10) + 0x48))(*(long *)(param_1 + 0xc));
      return uVar1;
    }
    if ((*(long *)(param_1 + 0x1e) != 0) &&
       (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x1e) + 0x58),
       UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x003b8434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)();
      return uVar1;
    }
    FUN_00379868();
    uVar1 = 0x2b7;
  }
  FUN_0037995c("crypto/evp/signature.c",uVar1,"EVP_PKEY_verify");
  FUN_00379a5c(6,0x96,0);
  return 0xfffffffe;
}


// ===== 003b8454  FUN_003b8454 =====

void FUN_003b8454(undefined8 param_1)

{
  FUN_003b7c40(param_1,0x40,0);
  return;
}


// ===== 003b8460  FUN_003b8460 =====

void FUN_003b8460(undefined8 param_1,undefined8 param_2)

{
  FUN_003b7c40(param_1,0x40,param_2);
  return;
}


// ===== 003b846c  FUN_003b846c =====

undefined8
FUN_003b846c(int *param_1,long param_2,ulong *param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  if (param_1 == (int *)0x0) {
    FUN_00379868();
    uVar2 = 0x2d0;
  }
  else {
    if (*param_1 != 0x40) {
      FUN_00379868();
      FUN_0037995c("crypto/evp/signature.c",0x2d5,"EVP_PKEY_verify_recover");
      FUN_00379a5c(6,0x97,0);
      return 0xffffffff;
    }
    if (*(long *)(param_1 + 0xc) != 0) {
      if (param_2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *param_3;
      }
                    /* WARNING: Could not recover jumptable at 0x003b8584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*(long *)(param_1 + 10) + 0x58))
                        (*(long *)(param_1 + 0xc),param_2,param_3,uVar3,param_4,param_5);
      return uVar2;
    }
    lVar4 = *(long *)(param_1 + 0x1e);
    if ((lVar4 != 0) && (*(code **)(lVar4 + 0x68) != (code *)0x0)) {
      if ((*(byte *)(lVar4 + 4) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x003b8564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(lVar4 + 0x68))();
        return uVar2;
      }
      iVar1 = FUN_003a8edc(*(undefined8 *)(param_1 + 0x22));
      if (iVar1 == 0) {
        FUN_00379868();
        FUN_0037995c("crypto/evp/signature.c",0x2e6,"EVP_PKEY_verify_recover");
        uVar2 = 0xa3;
      }
      else {
        if (param_2 == 0) {
          *param_3 = (long)iVar1;
          return 1;
        }
        if ((ulong)(long)iVar1 <= *param_3) {
                    /* WARNING: Could not recover jumptable at 0x003b868c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar2 = (**(code **)(*(long *)(param_1 + 0x1e) + 0x68))
                            (param_1,param_2,param_3,param_4,param_5);
          return uVar2;
        }
        FUN_00379868();
        FUN_0037995c("crypto/evp/signature.c",0x2e6,"EVP_PKEY_verify_recover");
        uVar2 = 0x9b;
      }
      FUN_00379a5c(6,uVar2,0);
      return 0;
    }
    FUN_00379868();
    uVar2 = 0x2e3;
  }
  FUN_0037995c("crypto/evp/signature.c",uVar2,"EVP_PKEY_verify_recover");
  FUN_00379a5c(6,0x96,0);
  return 0xfffffffe;
}


// ===== 003b8690  FUN_003b8690 =====

undefined ** FUN_003b8690(undefined8 param_1)

{
  undefined **ppuVar1;
  int iVar2;
  
  iVar2 = FUN_003cab04("ffdhe2048",param_1);
  if (iVar2 == 0) {
    return &PTR_s_ffdhe2048_00768ff0;
  }
  iVar2 = FUN_003cab04("ffdhe3072",param_1);
  if (iVar2 == 0) {
    return &PTR_s_ffdhe3072_00769000;
  }
  iVar2 = FUN_003cab04("ffdhe4096",param_1);
  if (iVar2 == 0) {
    return &PTR_s_ffdhe4096_00769010;
  }
  iVar2 = FUN_003cab04("ffdhe6144",param_1);
  if (iVar2 == 0) {
    return &PTR_s_ffdhe6144_00769020;
  }
  iVar2 = FUN_003cab04("ffdhe8192",param_1);
  if (iVar2 == 0) {
    return &PTR_s_ffdhe8192_00769030;
  }
  iVar2 = FUN_003cab04("modp_1536",param_1);
  if (iVar2 == 0) {
    return &PTR_s_modp_1536_00769040;
  }
  iVar2 = FUN_003cab04("modp_2048",param_1);
  if (iVar2 == 0) {
    return &PTR_s_modp_2048_00769050;
  }
  iVar2 = FUN_003cab04("modp_3072",param_1);
  if (iVar2 != 0) {
    iVar2 = FUN_003cab04("modp_4096",param_1);
    if (iVar2 == 0) {
      return &PTR_s_modp_4096_00769070;
    }
    iVar2 = FUN_003cab04("modp_6144",param_1);
    if (iVar2 == 0) {
      return &PTR_s_modp_6144_00769080;
    }
    iVar2 = FUN_003cab04("modp_8192",param_1);
    if (iVar2 == 0) {
      return &PTR_s_modp_8192_00769090;
    }
    iVar2 = FUN_003cab04("dh_1024_160",param_1);
    if (iVar2 != 0) {
      iVar2 = FUN_003cab04("dh_2048_224",param_1);
      if (iVar2 != 0) {
        iVar2 = FUN_003cab04("dh_2048_256",param_1);
        ppuVar1 = &PTR_s_dh_2048_256_007690c0;
        if (iVar2 != 0) {
          ppuVar1 = (undefined **)0x0;
        }
        return ppuVar1;
      }
      return &PTR_s_dh_2048_224_007690b0;
    }
    return &PTR_s_dh_1024_160_007690a0;
  }
  return &PTR_s_modp_3072_00769060;
}


// ===== 003b88d4  FUN_003b88d4 =====

undefined ** FUN_003b88d4(int param_1)

{
  if (param_1 < 0x46a) {
    if (param_1 < 0x466) {
      if (param_1 == 1) {
        return &PTR_s_dh_1024_160_007690a0;
      }
      if (param_1 == 2) {
        return &PTR_s_dh_2048_224_007690b0;
      }
      if (param_1 == 3) {
        return &PTR_s_dh_2048_256_007690c0;
      }
    }
    else if (param_1 < 0x468) {
      if (param_1 == 0x466) {
        return &PTR_s_ffdhe2048_00768ff0;
      }
      if (param_1 == 0x467) {
        return &PTR_s_ffdhe3072_00769000;
      }
    }
    else {
      if (param_1 == 0x468) {
        return &PTR_s_ffdhe4096_00769010;
      }
      if (param_1 == 0x469) {
        return &PTR_s_ffdhe6144_00769020;
      }
    }
  }
  else if (param_1 < 0x4be) {
    if (param_1 == 0x46a) {
      return &PTR_s_ffdhe8192_00769030;
    }
    if (param_1 == 0x4bc) {
      return &PTR_s_modp_1536_00769040;
    }
    if (param_1 == 0x4bd) {
      return &PTR_s_modp_2048_00769050;
    }
  }
  else if (param_1 < 0x4c0) {
    if (param_1 == 0x4be) {
      return &PTR_s_modp_3072_00769060;
    }
    if (param_1 == 0x4bf) {
      return &PTR_s_modp_4096_00769070;
    }
  }
  else {
    if (param_1 == 0x4c0) {
      return &PTR_s_modp_6144_00769080;
    }
    if (param_1 == 0x4c1) {
      return &PTR_s_modp_8192_00769090;
    }
  }
  return (undefined **)0x0;
}


// ===== 003b8a1c  FUN_003b8a1c =====

ulong FUN_003b8a1c(ulong param_1)

{
  if (param_1 != 0) {
    param_1 = (ulong)*(uint *)(param_1 + 8);
  }
  return param_1;
}


// ===== 003b8a28  FUN_003b8a28 =====

long * FUN_003b8a28(long *param_1)

{
  if (param_1 != (long *)0x0) {
    param_1 = (long *)*param_1;
  }
  return param_1;
}


// ===== 003b8a34  FUN_003b8a34 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_003b8a34(code *param_1,undefined *param_2)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)FUN_003c8474(0x48,"crypto/lhash/lhash.c",0x33);
  if (plVar4 != (long *)0x0) {
    lVar5 = FUN_003c8474(0x80,"crypto/lhash/lhash.c",0x35);
    *plVar4 = lVar5;
    if (lVar5 == 0) {
      FUN_003c86b4(0,"crypto/lhash/lhash.c",0x41);
      FUN_003c86b4(plVar4,"crypto/lhash/lhash.c",0x42);
      return (long *)0x0;
    }
    puVar1 = PTR_strcmp_007a14b0;
    if (param_2 != (undefined *)0x0) {
      puVar1 = param_2;
    }
    plVar4[3] = DAT_001b7128;
    lVar3 = _UNK_00200358;
    lVar5 = _DAT_00200350;
    pcVar2 = FUN_003b8b18;
    if (param_1 != (code *)0x0) {
      pcVar2 = param_1;
    }
    plVar4[1] = (long)puVar1;
    plVar4[2] = (long)pcVar2;
    *(undefined4 *)((long)plVar4 + 0x24) = 8;
    plVar4[6] = lVar3;
    plVar4[5] = lVar5;
  }
  return plVar4;
}


// ===== 003b8b18  FUN_003b8b18 =====

byte * FUN_003b8b18(byte *param_1)

{
  long lVar1;
  byte bVar2;
  byte *pbVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_1 != (byte *)0x0) {
    bVar2 = *param_1;
    if (bVar2 == 0) {
      return (byte *)0x0;
    }
    uVar5 = 0;
    lVar4 = 0x100;
    pbVar3 = param_1 + 1;
    do {
      lVar1 = lVar4 + (ulong)bVar2;
      lVar4 = lVar4 + 0x100;
      uVar6 = (ulong)(byte)(bVar2 ^ bVar2 >> 2) & 0xf;
      bVar2 = *pbVar3;
      uVar5 = (ulong)((uint)(uVar5 >> (0x20 - uVar6 & 0x3f)) | (int)uVar5 << uVar6) ^ lVar1 * lVar1;
      pbVar3 = pbVar3 + 1;
    } while (bVar2 != 0);
    param_1 = (byte *)(uVar5 ^ uVar5 >> 0x10);
  }
  return param_1;
}


// ===== 003b8b74  FUN_003b8b74 =====

void FUN_003b8b74(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  if (param_1 != (long *)0x0) {
    uVar2 = (ulong)*(uint *)(param_1 + 3);
    if (*(uint *)(param_1 + 3) != 0) {
      uVar4 = 0;
      do {
        lVar3 = *param_1;
        lVar1 = *(long *)(lVar3 + uVar4 * 8);
        if (lVar1 != 0) {
          do {
            lVar3 = *(long *)(lVar1 + 8);
            FUN_003c86b4(lVar1,"crypto/lhash/lhash.c",0x5c);
            lVar1 = lVar3;
          } while (lVar3 != 0);
          lVar3 = *param_1;
          uVar2 = (ulong)*(uint *)(param_1 + 3);
        }
        *(undefined8 *)(lVar3 + uVar4 * 8) = 0;
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar2);
    }
    param_1[7] = 0;
    FUN_003c86b4(*param_1,"crypto/lhash/lhash.c",0x4c);
    FUN_003c86b4(param_1,"crypto/lhash/lhash.c",0x4d);
    return;
  }
  return;
}


// ===== 003b8c20  FUN_003b8c20 =====

void FUN_003b8c20(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  if (param_1 != (long *)0x0) {
    uVar2 = (ulong)*(uint *)(param_1 + 3);
    if (*(uint *)(param_1 + 3) != 0) {
      uVar4 = 0;
      do {
        lVar3 = *param_1;
        lVar1 = *(long *)(lVar3 + uVar4 * 8);
        if (lVar1 != 0) {
          do {
            lVar3 = *(long *)(lVar1 + 8);
            FUN_003c86b4(lVar1,"crypto/lhash/lhash.c",0x5c);
            lVar1 = lVar3;
          } while (lVar3 != 0);
          lVar3 = *param_1;
          uVar2 = (ulong)*(uint *)(param_1 + 3);
        }
        *(undefined8 *)(lVar3 + uVar4 * 8) = 0;
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar2);
    }
    param_1[7] = 0;
  }
  return;
}


// ===== 003b8ca4  FUN_003b8ca4 =====

undefined8 * FUN_003b8ca4(long *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  code *pcVar16;
  
  uVar9 = *(uint *)(param_1 + 3);
  *(undefined4 *)(param_1 + 8) = 0;
  uVar15 = 0;
  if ((ulong)uVar9 != 0) {
    uVar15 = (ulong)(param_1[7] << 8) / (ulong)uVar9;
  }
  if ((ulong)param_1[5] <= uVar15) {
    uVar1 = *(uint *)(param_1 + 4);
    uVar2 = *(uint *)((long)param_1 + 0x24);
    uVar3 = *(uint *)((long)param_1 + 0x1c);
    uVar15 = (ulong)uVar3;
    uVar13 = uVar1 + 1;
    if (uVar2 <= uVar13) {
      puVar5 = (undefined8 *)
               FUN_003c8558(*param_1,(ulong)(uVar3 << 1) << 3,"crypto/lhash/lhash.c",0xda);
      if (puVar5 == (undefined8 *)0x0) goto LAB_003b8e84;
      *param_1 = (long)puVar5;
      memset(puVar5 + uVar15,0,uVar15 * 8);
      uVar9 = *(uint *)(param_1 + 3);
      uVar13 = 0;
      *(uint *)((long)param_1 + 0x24) = uVar3;
      *(uint *)((long)param_1 + 0x1c) = uVar3 << 1;
    }
    lVar8 = *param_1;
    uVar14 = (ulong)(uVar2 + uVar1);
    *(uint *)(param_1 + 4) = uVar13;
    plVar11 = (long *)(lVar8 + (ulong)uVar1 * 8);
    *(undefined8 *)(lVar8 + uVar14 * 8) = 0;
    *(uint *)(param_1 + 3) = uVar9 + 1;
    lVar12 = *plVar11;
    if (lVar12 != 0) {
      lVar10 = uVar14 * 8;
      do {
        while( true ) {
          uVar14 = 0;
          if (uVar15 != 0) {
            uVar14 = *(ulong *)(lVar12 + 0x10) / uVar15;
          }
          if (*(ulong *)(lVar12 + 0x10) - uVar14 * uVar15 != (ulong)uVar1) break;
          plVar11 = (long *)(lVar12 + 8);
          lVar12 = *plVar11;
          if (lVar12 == 0) goto LAB_003b8da0;
        }
        *plVar11 = *(long *)(lVar12 + 8);
        *(undefined8 *)(lVar12 + 8) = *(undefined8 *)(lVar8 + lVar10);
        *(long *)(lVar8 + lVar10) = lVar12;
        lVar12 = *plVar11;
      } while (lVar12 != 0);
    }
  }
LAB_003b8da0:
  uVar6 = (*(code *)param_1[2])(param_2);
  uVar15 = (ulong)*(uint *)((long)param_1 + 0x24);
  uVar14 = 0;
  if (uVar15 != 0) {
    uVar14 = uVar6 / uVar15;
  }
  uVar15 = uVar6 - uVar14 * uVar15;
  if (uVar15 < *(uint *)(param_1 + 4)) {
    uVar14 = (ulong)*(uint *)((long)param_1 + 0x1c);
    uVar15 = 0;
    if (uVar14 != 0) {
      uVar15 = uVar6 / uVar14;
    }
    uVar15 = uVar6 - uVar15 * uVar14;
  }
  plVar11 = (long *)(*param_1 + (long)(int)uVar15 * 8);
  puVar5 = (undefined8 *)*plVar11;
  if (puVar5 != (undefined8 *)0x0) {
    pcVar16 = (code *)param_1[1];
    do {
      if ((puVar5[2] == uVar6) && (iVar4 = (*pcVar16)(*puVar5,param_2), iVar4 == 0)) {
        puVar5 = (undefined8 *)*plVar11;
        if (puVar5 != (undefined8 *)0x0) {
          puVar7 = (undefined8 *)*puVar5;
          *puVar5 = param_2;
          return puVar7;
        }
        break;
      }
      plVar11 = puVar5 + 1;
      puVar5 = (undefined8 *)*plVar11;
    } while (puVar5 != (undefined8 *)0x0);
  }
  puVar5 = (undefined8 *)FUN_003c83a4(0x18,"crypto/lhash/lhash.c",0x72);
  if (puVar5 != (undefined8 *)0x0) {
    lVar8 = param_1[7];
    *puVar5 = param_2;
    puVar5[1] = 0;
    puVar5[2] = uVar6;
    *plVar11 = (long)puVar5;
    param_1[7] = lVar8 + 1;
    return (undefined8 *)0x0;
  }
LAB_003b8e84:
  *(int *)(param_1 + 8) = (int)param_1[8] + 1;
  return puVar5;
}


// ===== 003b8ea4  FUN_003b8ea4 =====

long * FUN_003b8ea4(long *param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  code *pcVar15;
  
  *(undefined4 *)(param_1 + 8) = 0;
  uVar3 = (*(code *)param_1[2])(param_2);
  uVar5 = (ulong)*(uint *)((long)param_1 + 0x24);
  uVar6 = 0;
  if (uVar5 != 0) {
    uVar6 = uVar3 / uVar5;
  }
  uVar5 = uVar3 - uVar6 * uVar5;
  if (uVar5 < *(uint *)(param_1 + 4)) {
    uVar6 = (ulong)*(uint *)((long)param_1 + 0x1c);
    uVar5 = 0;
    if (uVar6 != 0) {
      uVar5 = uVar3 / uVar6;
    }
    uVar5 = uVar3 - uVar5 * uVar6;
  }
  plVar8 = (long *)(*param_1 + (long)(int)uVar5 * 8);
  puVar14 = (undefined8 *)*plVar8;
  if (puVar14 != (undefined8 *)0x0) {
    pcVar15 = (code *)param_1[1];
    do {
      if ((puVar14[2] == uVar3) && (iVar2 = (*pcVar15)(*puVar14,param_2), iVar2 == 0)) {
        plVar4 = (long *)*plVar8;
        plVar13 = plVar4;
        if (plVar4 != (long *)0x0) {
          *plVar8 = plVar4[1];
          plVar13 = (long *)*plVar4;
          FUN_003c86b4(plVar4,"crypto/lhash/lhash.c",0x92);
          lVar7 = param_1[7];
          uVar9 = *(uint *)(param_1 + 3);
          param_1[7] = lVar7 + -1;
          if (uVar9 < 0x11) {
            return (long *)(long)plVar13;
          }
          uVar5 = 0;
          if ((ulong)uVar9 != 0) {
            uVar5 = (ulong)((lVar7 + -1) * 0x100) / (ulong)uVar9;
          }
          if (uVar5 <= (ulong)param_1[6]) {
            lVar11 = param_1[4];
            iVar2 = *(int *)((long)param_1 + 0x24);
            iVar10 = (int)lVar11 + -1;
            lVar7 = (ulong)(uint)(iVar10 + iVar2) * 8;
            lVar12 = *(long *)(*param_1 + lVar7);
            *(undefined8 *)(*param_1 + lVar7) = 0;
            lVar7 = *param_1;
            if ((int)lVar11 == 0) {
              lVar7 = FUN_003c8558(lVar7,iVar2 << 3,"crypto/lhash/lhash.c",0x103);
              if (lVar7 == 0) {
                lVar7 = *param_1;
                *(int *)(param_1 + 8) = (int)param_1[8] + 1;
              }
              else {
                *param_1 = lVar7;
              }
              uVar9 = *(uint *)(param_1 + 3);
              uVar1 = *(uint *)((long)param_1 + 0x24) >> 1;
              *(uint *)((long)param_1 + 0x1c) = *(uint *)((long)param_1 + 0x1c) >> 1;
              iVar10 = uVar1 - 1;
              *(uint *)((long)param_1 + 0x24) = uVar1;
            }
            plVar8 = (long *)(lVar7 + (long)iVar10 * 8);
            *(int *)(param_1 + 4) = iVar10;
            lVar7 = *plVar8;
            *(uint *)(param_1 + 3) = uVar9 - 1;
            if (lVar7 != 0) {
              do {
                lVar11 = lVar7;
                lVar7 = *(long *)(lVar11 + 8);
              } while (lVar7 != 0);
              plVar8 = (long *)(lVar11 + 8);
            }
            *plVar8 = lVar12;
            return (long *)(long)plVar13;
          }
        }
        return plVar13;
      }
      plVar8 = puVar14 + 1;
      puVar14 = (undefined8 *)*plVar8;
    } while (puVar14 != (undefined8 *)0x0);
  }
  return (long *)0;
}


// ===== 003b908c  FUN_003b908c =====

undefined8 FUN_003b908c(long *param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  if ((int)param_1[8] != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  uVar2 = (*(code *)param_1[2])(param_2);
  uVar3 = (ulong)*(uint *)((long)param_1 + 0x24);
  uVar4 = 0;
  if (uVar3 != 0) {
    uVar4 = uVar2 / uVar3;
  }
  uVar3 = uVar2 - uVar4 * uVar3;
  if (uVar3 < *(uint *)(param_1 + 4)) {
    uVar4 = (ulong)*(uint *)((long)param_1 + 0x1c);
    uVar3 = 0;
    if (uVar4 != 0) {
      uVar3 = uVar2 / uVar4;
    }
    uVar3 = uVar2 - uVar3 * uVar4;
  }
  puVar6 = (undefined8 *)(*param_1 + (long)(int)uVar3 * 8);
  puVar7 = (undefined8 *)*puVar6;
  if (puVar7 != (undefined8 *)0x0) {
    pcVar5 = (code *)param_1[1];
    do {
      if ((puVar7[2] == uVar2) && (iVar1 = (*pcVar5)(*puVar7,param_2), iVar1 == 0)) {
        if ((undefined8 *)*puVar6 == (undefined8 *)0x0) {
          return 0;
        }
        return *(undefined8 *)*puVar6;
      }
      puVar6 = puVar7 + 1;
      puVar7 = (undefined8 *)*puVar6;
    } while (puVar7 != (undefined8 *)0x0);
  }
  return 0;
}


// ===== 003b9160  FUN_003b9160 =====

void FUN_003b9160(long *param_1,code *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  if ((param_1 != (long *)0x0) &&
     (uVar3 = (int)param_1[3] - 1, uVar5 = (ulong)uVar3, -1 < (int)uVar3)) {
    do {
      puVar4 = *(undefined8 **)(*param_1 + uVar5 * 8);
      while (puVar4 != (undefined8 *)0x0) {
        uVar2 = *puVar4;
        puVar4 = (undefined8 *)puVar4[1];
        (*param_2)(uVar2);
      }
      bVar1 = 0 < (long)uVar5;
      uVar5 = uVar5 - 1;
    } while (bVar1);
  }
  return;
}


// ===== 003b91c8  FUN_003b91c8 =====

void FUN_003b91c8(long *param_1,code *param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  if ((param_1 != (long *)0x0) &&
     (uVar3 = (int)param_1[3] - 1, uVar5 = (ulong)uVar3, -1 < (int)uVar3)) {
    do {
      puVar4 = *(undefined8 **)(*param_1 + uVar5 * 8);
      while (puVar4 != (undefined8 *)0x0) {
        uVar2 = *puVar4;
        puVar4 = (undefined8 *)puVar4[1];
        (*param_2)(uVar2,param_3);
      }
      bVar1 = 0 < (long)uVar5;
      uVar5 = uVar5 - 1;
    } while (bVar1);
  }
  return;
}


// ===== 003b923c  FUN_003b923c =====

byte * FUN_003b923c(byte *param_1)

{
  long lVar1;
  byte *pbVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  
  if (param_1 != (byte *)0x0) {
    uVar5 = (uint)*param_1;
    if (*param_1 == 0) {
      return (byte *)0x0;
    }
    uVar4 = 0;
    lVar3 = 0x100;
    pbVar2 = param_1 + 1;
    do {
      lVar1 = lVar3 + (ulong)(uVar5 & 0xdf);
      lVar3 = lVar3 + 0x100;
      uVar6 = (ulong)(uVar5 ^ (uVar5 & 0xdf) >> 2) & 0xf;
      uVar5 = (uint)*pbVar2;
      uVar4 = (ulong)((uint)(uVar4 >> (0x20 - uVar6 & 0x3f)) | (int)uVar4 << uVar6) ^ lVar1 * lVar1;
      pbVar2 = pbVar2 + 1;
    } while (uVar5 != 0);
    param_1 = (byte *)(uVar4 ^ uVar4 >> 0x10);
  }
  return param_1;
}


// ===== 003b92a0  FUN_003b92a0 =====

long FUN_003b92a0(long param_1)

{
  if (param_1 != 0) {
    param_1 = *(long *)(param_1 + 0x38);
  }
  return param_1;
}


// ===== 003b92ac  FUN_003b92ac =====

undefined8 FUN_003b92ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}


// ===== 003b92b4  FUN_003b92b4 =====

void FUN_003b92b4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x30) = param_2;
  return;
}


// ===== 003b92bc  FUN_003b92bc =====

undefined4 FUN_003b92bc(long param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}


// ===== 003b92c4  FUN_003b92c4 =====

void FUN_003b92c4(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    FUN_003d518c(*param_1);
    return;
  }
  iVar2 = FUN_003d51c8(&DAT_007ab808,FUN_003b9ab0);
  puVar3 = (undefined8 *)0x0;
  if ((iVar2 != 0) && (DAT_007ab80c != 0)) {
    puVar3 = (undefined8 *)FUN_003d5240(&DAT_007ab804);
  }
  puVar1 = &DAT_007ab810;
  if (puVar3 != (undefined8 *)0x0) {
    puVar1 = puVar3;
  }
  FUN_003d518c(*puVar1);
  return;
}


// ===== 003b933c  FUN_003b933c =====

undefined8 * FUN_003b933c(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    return param_1;
  }
  iVar2 = FUN_003d51c8(&DAT_007ab808,FUN_003b9ab0);
  puVar3 = (undefined8 *)0x0;
  if ((iVar2 != 0) && (DAT_007ab80c != 0)) {
    puVar3 = (undefined8 *)FUN_003d5240(&DAT_007ab804);
  }
  puVar1 = &DAT_007ab810;
  if (puVar3 != (undefined8 *)0x0) {
    puVar1 = puVar3;
  }
  return puVar1;
}


// ===== 003b93a4  FUN_003b93a4 =====

void FUN_003b93a4(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    FUN_003d517c(*param_1);
    return;
  }
  iVar2 = FUN_003d51c8(&DAT_007ab808,FUN_003b9ab0);
  puVar3 = (undefined8 *)0x0;
  if ((iVar2 != 0) && (DAT_007ab80c != 0)) {
    puVar3 = (undefined8 *)FUN_003d5240(&DAT_007ab804);
  }
  puVar1 = &DAT_007ab810;
  if (puVar3 != (undefined8 *)0x0) {
    puVar1 = puVar3;
  }
  FUN_003d517c(*puVar1);
  return;
}


// ===== 003b941c  FUN_003b941c =====

void FUN_003b941c(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    FUN_003d519c(*param_1);
    return;
  }
  iVar2 = FUN_003d51c8(&DAT_007ab808,FUN_003b9ab0);
  puVar3 = (undefined8 *)0x0;
  if ((iVar2 != 0) && (DAT_007ab80c != 0)) {
    puVar3 = (undefined8 *)FUN_003d5240(&DAT_007ab804);
  }
  puVar1 = &DAT_007ab810;
  if (puVar3 != (undefined8 *)0x0) {
    puVar1 = puVar3;
  }
  FUN_003d519c(*puVar1);
  return;
}


// ===== 003b9494  FUN_003b9494 =====

byte FUN_003b9494(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if (param_1 != 0) {
    return *(byte *)(param_1 + 0x130) & 1;
  }
  iVar2 = FUN_003d51c8(&DAT_007ab808,FUN_003b9ab0);
  puVar3 = (undefined8 *)0x0;
  if ((iVar2 != 0) && (DAT_007ab80c != 0)) {
    puVar3 = (undefined8 *)FUN_003d5240(&DAT_007ab804);
  }
  puVar1 = &DAT_007ab810;
  if (puVar3 != (undefined8 *)0x0) {
    puVar1 = puVar3;
  }
  return *(byte *)(puVar1 + 0x26) & 1;
}


// ===== 003b9514  FUN_003b9514 =====

void FUN_003b9514(void)

{
  if (DAT_007ab800 == '\x01') {
    FUN_003c7db8(&DAT_007ab810);
    FUN_003b9fe0(&DAT_007ab810);
    FUN_003c4820(&DAT_007ab810);
    FUN_003d51ac(DAT_007ab818);
    FUN_003d51ac(DAT_007ab810);
    DAT_007ab810 = 0;
    DAT_007ab818 = 0;
    FUN_003d5294(&DAT_007ab804);
    DAT_007ab800 = '\0';
  }
  return;
}


// ===== 003b957c  FUN_003b957c =====

long FUN_003b957c(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_003c8474(0x138,"crypto/context.c",0x1a7);
  if ((lVar2 != 0) && (iVar1 = FUN_003b95e0(), iVar1 == 0)) {
    FUN_003c86b4(lVar2,"crypto/context.c",0x1aa);
    return 0;
  }
  return lVar2;
}


// ===== 003b95e0  FUN_003b95e0 =====

long FUN_003b95e0(long *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_003d5150();
  *param_1 = lVar2;
  if (lVar2 != 0) {
    lVar2 = FUN_003d5150();
    param_1[1] = lVar2;
    if ((lVar2 == 0) || (iVar1 = FUN_003c47ec(param_1), iVar1 == 0)) {
      FUN_003b9fe0(param_1);
    }
    else {
      lVar2 = FUN_003e8af8(param_1);
      param_1[0x16] = lVar2;
      if (lVar2 != 0) {
        lVar2 = FUN_003d1888(param_1);
        param_1[0x1d] = lVar2;
        if (lVar2 != 0) {
          lVar2 = FUN_003eddb0(param_1);
          param_1[0x1b] = lVar2;
          if (lVar2 != 0) {
            lVar2 = FUN_003e8af8(param_1);
            param_1[0x20] = lVar2;
            if (lVar2 != 0) {
              lVar2 = FUN_00383934(param_1);
              param_1[0x21] = lVar2;
              if (lVar2 != 0) {
                lVar2 = FUN_003e8af8(param_1);
                param_1[0x22] = lVar2;
                if (lVar2 != 0) {
                  lVar2 = FUN_003e8af8(param_1);
                  param_1[0x23] = lVar2;
                  if (lVar2 != 0) {
                    lVar2 = FUN_003d2320(param_1);
                    param_1[0x17] = lVar2;
                    if (lVar2 != 0) {
                      lVar2 = FUN_003ebcb8(param_1);
                      param_1[0x15] = lVar2;
                      if (lVar2 != 0) {
                        lVar2 = FUN_003c3840(param_1);
                        param_1[0x18] = lVar2;
                        if (lVar2 != 0) {
                          lVar2 = FUN_003e885c(param_1);
                          param_1[0x19] = lVar2;
                          if (lVar2 != 0) {
                            lVar2 = FUN_003e8a90(param_1);
                            param_1[0x1a] = lVar2;
                            if (lVar2 != 0) {
                              lVar2 = FUN_003ba11c(param_1);
                              param_1[0x1e] = lVar2;
                              if (lVar2 != 0) {
                                lVar2 = FUN_0046044c(param_1);
                                param_1[0x1c] = lVar2;
                                if (lVar2 != 0) {
                                  lVar2 = FUN_003d4be8(param_1);
                                  param_1[0x24] = lVar2;
                                  if (lVar2 != 0) {
                                    lVar2 = FUN_003d1348(param_1);
                                    param_1[0x1f] = lVar2;
                                    if ((lVar2 != 0) && (iVar1 = FUN_003eb2d4(param_1), iVar1 != 0))
                                    {
                                      return 1;
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
                }
              }
            }
          }
        }
      }
      FUN_003b9fe0(param_1);
      FUN_003c4820(param_1);
    }
    FUN_003d51ac(param_1[1]);
    FUN_003d51ac(*param_1);
    lVar2 = 0;
    param_1[0x26] = 0;
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
    param_1[1] = 0;
    *param_1 = 0;
  }
  return lVar2;
}


// ===== 003b979c  FUN_003b979c =====

long FUN_003b979c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_003c8474(0x138,"crypto/context.c",0x1a7);
  if (lVar2 != 0) {
    iVar1 = FUN_003b95e0(lVar2);
    if (iVar1 == 0) {
      FUN_003c86b4(lVar2,"crypto/context.c",0x1aa);
      return 0;
    }
    iVar1 = FUN_003ba1d8(lVar2,param_2);
    if (iVar1 == 0) {
      FUN_003b9838(lVar2);
      return 0;
    }
  }
  return lVar2;
}


// ===== 003b9838  FUN_003b9838 =====

void FUN_003b9838(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    iVar2 = FUN_003d51c8(&DAT_007ab808,FUN_003b9ab0);
    puVar3 = (undefined8 *)0x0;
    if ((iVar2 != 0) && (DAT_007ab80c != 0)) {
      puVar3 = (undefined8 *)FUN_003d5240(&DAT_007ab804);
    }
    puVar1 = &DAT_007ab810;
    if (puVar3 != (undefined8 *)0x0) {
      puVar1 = puVar3;
    }
    if (puVar1 != param_1) {
      if ((*(byte *)(param_1 + 0x26) & 1) != 0) {
        FUN_003d16cc(param_1);
      }
      FUN_003c7db8(param_1);
      FUN_003b9fe0(param_1);
      FUN_003c4820(param_1);
      FUN_003d51ac(param_1[1]);
      FUN_003d51ac(*param_1);
      *param_1 = 0;
      param_1[1] = 0;
      FUN_003c86b4(param_1,"crypto/context.c",0x1e2);
      return;
    }
  }
  return;
}


// ===== 003b9900  FUN_003b9900 =====

long FUN_003b9900(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_003c8474(0x138,"crypto/context.c",0x1a7);
  if (lVar2 != 0) {
    iVar1 = FUN_003b95e0(lVar2);
    if (iVar1 == 0) {
      FUN_003c86b4(lVar2,"crypto/context.c",0x1aa);
      return 0;
    }
    iVar1 = FUN_003ba1d8(lVar2,param_2);
    if ((iVar1 == 0) || (iVar1 = FUN_003d1390(lVar2,param_1,param_2), iVar1 == 0)) {
      FUN_003b9838(lVar2);
      return 0;
    }
    *(byte *)(lVar2 + 0x130) = *(byte *)(lVar2 + 0x130) | 1;
  }
  return lVar2;
}


// ===== 003b99d0  FUN_003b99d0 =====

bool FUN_003b99d0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_003bab6c(param_1,param_2,0,0);
  return 0 < iVar1;
}


// ===== 003b99f4  FUN_003b99f4 =====

bool FUN_003b99f4(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    iVar2 = FUN_003d51c8(&DAT_007ab808,FUN_003b9ab0);
    puVar3 = (undefined8 *)0x0;
    if ((iVar2 != 0) && (DAT_007ab80c != 0)) {
      puVar3 = (undefined8 *)FUN_003d5240(&DAT_007ab804);
    }
    puVar1 = &DAT_007ab810;
    if (puVar3 != (undefined8 *)0x0) {
      puVar1 = puVar3;
    }
    return puVar1 == param_1;
  }
  return true;
}


// ===== 003b9a6c  FUN_003b9a6c =====

undefined8 * FUN_003b9a6c(void)

{
  undefined8 *puVar1;
  int iVar2;
  
  iVar2 = FUN_003d51c8(&DAT_007ab808,FUN_003b9ab0);
  puVar1 = &DAT_007ab810;
  if (DAT_007ab80c == 0 || iVar2 == 0) {
    puVar1 = (undefined8 *)0x0;
  }
  return puVar1;
}


// ===== 003b9ab0  FUN_003b9ab0 =====

void FUN_003b9ab0(void)

{
  int iVar1;
  
  iVar1 = FUN_003d5204(&DAT_007ab804,0);
  if (iVar1 != 0) {
    iVar1 = FUN_003b95e0(&DAT_007ab810);
    if (iVar1 != 0) {
      DAT_007ab800 = 1;
      DAT_007ab80c = 1;
      return;
    }
    FUN_003d5294(&DAT_007ab804);
  }
  DAT_007ab80c = 0;
  return;
}


// ===== 003b9b14  FUN_003b9b14 =====

undefined8 * FUN_003b9b14(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  
  iVar2 = FUN_003d51c8(&DAT_007ab808,FUN_003b9ab0);
  puVar3 = (undefined8 *)0x0;
  if ((iVar2 != 0) && (DAT_007ab80c != 0)) {
    puVar3 = (undefined8 *)FUN_003d5240(&DAT_007ab804);
  }
  if (param_1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
    if (param_1 != &DAT_007ab810) {
      puVar1 = param_1;
    }
    FUN_003d5268(&DAT_007ab804,puVar1);
  }
  puVar1 = &DAT_007ab810;
  if (puVar3 != (undefined8 *)0x0) {
    puVar1 = puVar3;
  }
  return puVar1;
}


// ===== 003b9b9c  FUN_003b9b9c =====

void FUN_003b9b9c(void)

{
  if (DAT_007ab8e8 != 0) {
    FUN_003ede58();
    DAT_007ab8e8 = 0;
  }
  return;
}


// ===== 003b9bc8  FUN_003b9bc8 =====

bool FUN_003b9bc8(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    return param_1 == &DAT_007ab810;
  }
  iVar2 = FUN_003d51c8(&DAT_007ab808,FUN_003b9ab0);
  puVar3 = (undefined8 *)0x0;
  if ((iVar2 != 0) && (DAT_007ab80c != 0)) {
    puVar3 = (undefined8 *)FUN_003d5240(&DAT_007ab804);
  }
  puVar1 = &DAT_007ab810;
  if (puVar3 != (undefined8 *)0x0) {
    puVar1 = puVar3;
  }
  return puVar1 == &DAT_007ab810;
}


// ===== 003b9c48  FUN_003b9c48 =====

long FUN_003b9c48(undefined8 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    iVar1 = FUN_003d51c8(&DAT_007ab808,FUN_003b9ab0);
    puVar2 = (undefined8 *)0x0;
    if ((iVar1 != 0) && (DAT_007ab80c != 0)) {
      puVar2 = (undefined8 *)FUN_003d5240(&DAT_007ab804);
    }
    param_1 = &DAT_007ab810;
    if (puVar2 != (undefined8 *)0x0) {
      param_1 = puVar2;
    }
  }
  switch(param_2) {
  case 0:
    return param_1[0x16];
  case 1:
    return param_1[0x17];
  case 2:
    return param_1[0x19];
  case 3:
    return param_1[0x15];
  case 4:
    return param_1[0x18];
  case 5:
    return param_1[0x1b];
  case 6:
    return param_1[0x1c];
  case 7:
    break;
  default:
    return 0;
  case 10:
    return param_1[0x22];
  case 0xb:
    return param_1[0x20];
  case 0xc:
    return param_1[0x24];
  case 0xe:
    return param_1[0x1a];
  case 0xf:
    return param_1[0x23];
  case 0x10:
    return param_1[0x1d];
  case 0x11:
    return param_1[0x1e];
  case 0x12:
    return param_1[0x1f];
  case 0x14:
    return param_1[0x21];
  }
  iVar1 = FUN_003d517c(param_1[1]);
  if (iVar1 != 1) {
    return 0;
  }
  lVar3 = param_1[0x25];
  if (lVar3 == 0) {
    FUN_003d519c(param_1[1]);
    iVar1 = FUN_003d518c(param_1[1]);
    if (iVar1 != 1) {
      return 0;
    }
    lVar3 = param_1[0x25];
    if (lVar3 == 0) {
      lVar3 = FUN_0045fc08(param_1);
      param_1[0x25] = lVar3;
    }
  }
  FUN_003d519c(param_1[1]);
  return lVar3;
}


// ===== 003b9e5c  FUN_003b9e5c =====

undefined8 * FUN_003b9e5c(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if (param_1 != 0) {
    return (undefined8 *)(param_1 + 0x10);
  }
  iVar2 = FUN_003d51c8(&DAT_007ab808,FUN_003b9ab0);
  puVar3 = (undefined8 *)0x0;
  if ((iVar2 != 0) && (DAT_007ab80c != 0)) {
    puVar3 = (undefined8 *)FUN_003d5240(&DAT_007ab804);
  }
  puVar1 = &DAT_007ab810;
  if (puVar3 != (undefined8 *)0x0) {
    puVar1 = puVar3;
  }
  return puVar1 + 2;
}


// ===== 003b9ecc  FUN_003b9ecc =====

char * FUN_003b9ecc(undefined8 *param_1)

{
  undefined8 *puVar1;
  char *pcVar2;
  int iVar3;
  undefined8 *puVar4;
  
  if (param_1 == (undefined8 *)0x0) {
    iVar3 = FUN_003d51c8(&DAT_007ab808,FUN_003b9ab0);
    puVar4 = (undefined8 *)0x0;
    if ((iVar3 != 0) && (DAT_007ab80c != 0)) {
      puVar4 = (undefined8 *)FUN_003d5240(&DAT_007ab804);
    }
    pcVar2 = "Global default library context";
    if (puVar4 != &DAT_007ab810 && puVar4 != (undefined8 *)0x0) {
      pcVar2 = "Thread-local default library context";
    }
    return pcVar2;
  }
  if (param_1 != &DAT_007ab810) {
    iVar3 = FUN_003d51c8(&DAT_007ab808,FUN_003b9ab0);
    puVar4 = (undefined8 *)0x0;
    if ((iVar3 != 0) && (DAT_007ab80c != 0)) {
      puVar4 = (undefined8 *)FUN_003d5240(&DAT_007ab804);
    }
    puVar1 = &DAT_007ab810;
    if (puVar4 != (undefined8 *)0x0) {
      puVar1 = puVar4;
    }
    pcVar2 = "Thread-local default library context";
    if (puVar1 != param_1) {
      pcVar2 = "Non-default library context";
    }
    return pcVar2;
  }
  return "Global default library context";
}


// ===== 003b9fe0  FUN_003b9fe0 =====

void FUN_003b9fe0(long param_1)

{
  if (*(long *)(param_1 + 0xb0) != 0) {
    FUN_003e8bb4();
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  if (*(long *)(param_1 + 0xd8) != 0) {
    FUN_003ede58();
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  if (*(long *)(param_1 + 0xe8) != 0) {
    FUN_003d18f0();
    *(undefined8 *)(param_1 + 0xe8) = 0;
  }
  if (*(long *)(param_1 + 0x100) != 0) {
    FUN_003e8bb4();
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
  if (*(long *)(param_1 + 0x108) != 0) {
    FUN_00383bec();
    *(undefined8 *)(param_1 + 0x108) = 0;
  }
  if (*(long *)(param_1 + 0x110) != 0) {
    FUN_003e8bb4();
    *(undefined8 *)(param_1 + 0x110) = 0;
  }
  if (*(long *)(param_1 + 0x118) != 0) {
    FUN_003e8bb4();
    *(undefined8 *)(param_1 + 0x118) = 0;
  }
  if (*(long *)(param_1 + 0xb8) != 0) {
    FUN_003d21b8();
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  if (*(long *)(param_1 + 0xa8) != 0) {
    FUN_003ebc1c();
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  if (*(long *)(param_1 + 0xc0) != 0) {
    FUN_003c3928();
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  if (*(long *)(param_1 + 200) != 0) {
    FUN_003e87f4();
    *(undefined8 *)(param_1 + 200) = 0;
  }
  if (*(long *)(param_1 + 0xd0) != 0) {
    FUN_003e8a50();
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  if (*(long *)(param_1 + 0xf0) != 0) {
    FUN_003ba10c();
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
  if (*(long *)(param_1 + 0xe0) != 0) {
    FUN_004604b4();
    *(undefined8 *)(param_1 + 0xe0) = 0;
  }
  if (*(long *)(param_1 + 0x120) != 0) {
    FUN_003d4bfc();
    *(undefined8 *)(param_1 + 0x120) = 0;
  }
  if (*(long *)(param_1 + 0x128) != 0) {
    FUN_0045fbcc();
    *(undefined8 *)(param_1 + 0x128) = 0;
  }
  if (*(long *)(param_1 + 0xf8) != 0) {
    FUN_003d135c();
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
  return;
}


// ===== 003ba10c  FUN_003ba10c =====

void FUN_003ba10c(undefined8 param_1)

{
  FUN_003c86b4(param_1,"crypto/bio/bss_core.c",0x1b);
  return;
}


// ===== 003ba11c  FUN_003ba11c =====

void FUN_003ba11c(void)

{
  FUN_003c8474(0x38,"crypto/bio/bss_core.c",0x20);
  return;
}


// ===== 003ba130  FUN_003ba130 =====

undefined * FUN_003ba130(void)

{
  return &DAT_007690d0;
}


// ===== 003ba13c  FUN_003ba13c =====

long * FUN_003ba13c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)FUN_003b9c48(param_1,0x11);
  plVar3 = plVar2;
  if (plVar2 != (long *)0x0) {
    if ((plVar2[1] == 0) && (*plVar2 == 0)) {
      return (long *)0x0;
    }
    plVar3 = (long *)FUN_0037da34(param_1,&DAT_007690d0);
    if (plVar3 != (long *)0x0) {
      iVar1 = (*(code *)plVar2[5])(param_2);
      if (iVar1 == 0) {
        FUN_0037db50(plVar3);
        return (long *)0x0;
      }
      FUN_0037dc18(plVar3,param_2);
    }
  }
  return plVar3;
}


// ===== 003ba1d8  FUN_003ba1d8 =====

/* WARNING: Type propagation algorithm not settling */

long * FUN_003ba1d8(undefined8 param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  plVar3 = (long *)FUN_003b9c48(param_1,0x11);
  if (plVar3 == (long *)0x0) {
    return (long *)0x0;
  }
  plVar4 = (long *)(param_2 + 8);
  do {
    iVar1 = (int)plVar4[-1];
    if (iVar1 < 0x2d) {
      if (0x2a < iVar1) {
        if (iVar1 == 0x2b) {
          lVar5 = plVar3[1];
          plVar2 = plVar3 + 1;
        }
        else {
          if (iVar1 != 0x2c) goto LAB_003ba21c;
          lVar5 = plVar3[5];
          plVar2 = plVar3 + 5;
        }
        goto joined_r0x003ba2b8;
      }
      if (iVar1 == 0x2a) {
        lVar5 = *plVar3;
        plVar2 = plVar3;
        goto joined_r0x003ba2b8;
      }
      if (iVar1 == 0) {
        return (long *)0x1;
      }
    }
    else {
      if (iVar1 < 0x31) {
        if (iVar1 == 0x2d) {
          lVar5 = plVar3[6];
          plVar2 = plVar3 + 6;
        }
        else {
          if (iVar1 != 0x30) goto LAB_003ba21c;
          lVar5 = plVar3[3];
          plVar2 = plVar3 + 3;
        }
      }
      else if (iVar1 == 0x31) {
        lVar5 = plVar3[2];
        plVar2 = plVar3 + 2;
      }
      else {
        if (iVar1 != 0x32) goto LAB_003ba21c;
        lVar5 = plVar3[4];
        plVar2 = plVar3 + 4;
      }
joined_r0x003ba2b8:
      if (lVar5 == 0) {
        *plVar2 = *plVar4;
      }
    }
LAB_003ba21c:
    plVar4 = plVar4 + 2;
  } while( true );
}


// ===== 003ba2f4  FUN_003ba2f4 =====

undefined8
FUN_003ba2f4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  
  lVar1 = FUN_003b9c48(*param_1,0x11);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 8), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    uVar2 = FUN_0037dc20(param_1);
                    /* WARNING: Could not recover jumptable at 0x003ba35c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar2,param_2,param_3,param_4);
    return uVar2;
  }
  return 0;
}


// ===== 003ba378  FUN_003ba378 =====

undefined8
FUN_003ba378(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_003b9c48(*param_1,0x11);
  if ((puVar1 != (undefined8 *)0x0) &&
     (UNRECOVERED_JUMPTABLE = (code *)*puVar1, UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    uVar2 = FUN_0037dc20(param_1);
                    /* WARNING: Could not recover jumptable at 0x003ba3e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar2,param_2,param_3,param_4);
    return uVar2;
  }
  return 0;
}


// ===== 003ba3fc  FUN_003ba3fc =====

undefined8 FUN_003ba3fc(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  
  lVar1 = FUN_003b9c48(*param_1,0x11);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x18), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    uVar2 = FUN_0037dc20(param_1);
                    /* WARNING: Could not recover jumptable at 0x003ba44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar2,param_2);
    return uVar2;
  }
  return 0xffffffff;
}


// ===== 003ba464  FUN_003ba464 =====

undefined8 FUN_003ba464(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  
  lVar1 = FUN_003b9c48(*param_1,0x11);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x10), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    uVar2 = FUN_0037dc20(param_1);
                    /* WARNING: Could not recover jumptable at 0x003ba4bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar2,param_2,param_3);
    return uVar2;
  }
  return 0xffffffff;
}


// ===== 003ba4d4  FUN_003ba4d4 =====

long FUN_003ba4d4(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  lVar2 = FUN_003b9c48(*param_1,0x11);
  if ((lVar2 != 0) && (pcVar4 = *(code **)(lVar2 + 0x20), pcVar4 != (code *)0x0)) {
    uVar3 = FUN_0037dc20(param_1);
    iVar1 = (*pcVar4)(uVar3,param_2,param_3,param_4);
    return (long)iVar1;
  }
  return -1;
}


// ===== 003ba558  FUN_003ba558 =====

undefined8 FUN_003ba558(undefined8 param_1)

{
  FUN_0037dc28(param_1,1);
  return 1;
}


// ===== 003ba574  FUN_003ba574 =====

long FUN_003ba574(undefined8 *param_1)

{
  long lVar1;
  code *pcVar2;
  
  lVar1 = FUN_003b9c48(*param_1,0x11);
  if (lVar1 != 0) {
    FUN_0037dc28(param_1,0);
    pcVar2 = *(code **)(lVar1 + 0x30);
    FUN_0037dc20(param_1);
    (*pcVar2)();
    lVar1 = 1;
  }
  return lVar1;
}


// ===== 003ba5c4  FUN_003ba5c4 =====

undefined8 FUN_003ba5c4(long param_1,long param_2,uint param_3)

{
  char *__s;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  size_t sVar8;
  char *pcVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  code *pcVar15;
  undefined4 uVar16;
  
  if (param_1 == 0) {
    return 1;
  }
  lVar5 = FUN_003bc054(param_1,0,"config_diagnostics");
  if (lVar5 != 0) {
    param_3 = param_3 & 0xffffffe8;
  }
  FUN_0037f6d4();
  if (param_2 != 0) {
    lVar5 = FUN_003bb970(param_1,0,param_2);
    if (lVar5 != 0) goto LAB_003ba654;
    if ((param_3 >> 5 & 1) == 0) goto LAB_003baaec;
  }
  lVar5 = FUN_003bb970(param_1,0,"openssl_conf");
  if (lVar5 == 0) {
LAB_003baaec:
    FUN_0037f71c();
    return 1;
  }
LAB_003ba654:
  lVar6 = FUN_003bb7d0(param_1,lVar5);
  if (lVar6 == 0) {
    if ((param_3 >> 2 & 1) == 0) {
      FUN_0037f8c4();
      FUN_00379868();
      FUN_0037995c("crypto/conf/conf_mod.c",0x98,"CONF_modules_load");
      FUN_00379a5c(0xe,0x7c,"openssl_conf=%s",lVar5);
    }
    else {
      FUN_0037f71c();
    }
    uVar14 = 0;
  }
  else {
    FUN_0037f71c();
    iVar1 = FUN_0040caf8(lVar6);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        lVar5 = FUN_0040cb0c(lVar6,iVar1);
        FUN_0037f6d4();
        __s = *(char **)(lVar5 + 8);
        uVar14 = *(undefined8 *)(lVar5 + 0x10);
        iVar2 = FUN_003d51c8(&DAT_007ab94c,FUN_003bb474);
        if ((iVar2 == 0) || (DAT_007ab948 == '\0')) {
LAB_003baac0:
          if ((param_3 & 1) == 0) {
            FUN_0037f8c4();
            return 0xffffffff;
          }
        }
        else {
          pcVar7 = strrchr(__s,0x2e);
          if (pcVar7 == (char *)0x0) {
            sVar8 = strlen(__s);
            iVar2 = (int)sVar8;
            iVar3 = FUN_003d51c8(&DAT_007ab950,FUN_003bb494);
          }
          else {
            iVar2 = (int)pcVar7 - (int)__s;
            iVar3 = FUN_003d51c8(&DAT_007ab950,FUN_003bb494);
          }
          if (((iVar3 != 0) && (DAT_007ab954 != 0)) &&
             (iVar3 = FUN_003d517c(DAT_007ab958), iVar3 != 0)) {
            iVar3 = FUN_0040caf8(DAT_007ab960);
            if (0 < iVar3) {
              iVar3 = 0;
              do {
                lVar5 = FUN_0040cb0c(DAT_007ab960,iVar3);
                iVar4 = strncmp(*(char **)(lVar5 + 8),__s,(long)iVar2);
                if (iVar4 == 0) {
                  FUN_003d519c(DAT_007ab958);
                  goto LAB_003ba8d0;
                }
                iVar3 = iVar3 + 1;
                iVar4 = FUN_0040caf8(DAT_007ab960);
              } while (iVar3 < iVar4);
            }
            FUN_003d519c(DAT_007ab958);
          }
          if ((param_3 >> 3 & 1) != 0) {
LAB_003ba888:
            if ((param_3 >> 2 & 1) == 0) {
              FUN_00379868();
              FUN_0037995c("crypto/conf/conf_mod.c",0x10a,"module_run");
              FUN_00379a5c(0xe,0x71,"module=%s",__s);
            }
            goto LAB_003baac0;
          }
          pcVar9 = (char *)FUN_003bdd40(param_1,uVar14,&DAT_001e2b68);
          pcVar7 = __s;
          if (pcVar9 != (char *)0x0) {
            pcVar7 = pcVar9;
          }
          lVar10 = FUN_003be420(0,pcVar7,0,0);
          if (lVar10 == 0) {
            uVar16 = 0x6e;
LAB_003ba840:
            FUN_003be278(lVar10);
            FUN_00379868();
            FUN_0037995c("crypto/conf/conf_mod.c",0x141,"module_load_dso");
            FUN_00379a5c(0xe,uVar16,"module=%s, path=%s",__s,pcVar7);
            goto LAB_003ba888;
          }
          lVar5 = FUN_003be794(lVar10,"OPENSSL_init");
          if (lVar5 == 0) {
            uVar16 = 0x70;
            goto LAB_003ba840;
          }
          uVar11 = FUN_003be794(lVar10,"OPENSSL_finish");
          lVar5 = FUN_003bb0b8(lVar10,__s,lVar5,uVar11);
          if (lVar5 == 0) {
            uVar16 = 0;
            goto LAB_003ba840;
          }
LAB_003ba8d0:
          plVar12 = (long *)FUN_003c83a4(0x28,"crypto/conf/conf_mod.c",0x19b);
          if (plVar12 == (long *)0x0) {
LAB_003baa70:
            if ((param_3 >> 2 & 1) == 0) {
              FUN_00379868();
              FUN_0037995c("crypto/conf/conf_mod.c",0x114,"module_run");
              FUN_00379a5c(0xe,0x6d,"module=%s, value=%s retcode=%-8d",__s,uVar14,0xffffffff);
            }
            goto LAB_003baac0;
          }
          *plVar12 = lVar5;
          lVar10 = FUN_003ca2f4(__s,"crypto/conf/conf_mod.c",0x1a0);
          plVar12[1] = lVar10;
          lVar13 = FUN_003ca2f4(uVar14,"crypto/conf/conf_mod.c",0x1a1);
          plVar12[4] = 0;
          plVar12[2] = lVar13;
          if ((lVar10 == 0) || (lVar13 == 0)) {
LAB_003baa38:
            FUN_003c86b4(plVar12[1],"crypto/conf/conf_mod.c",0x1d2);
            FUN_003c86b4(plVar12[2],"crypto/conf/conf_mod.c",0x1d3);
            FUN_003c86b4(plVar12,"crypto/conf/conf_mod.c",0x1d4);
            goto LAB_003baa70;
          }
          pcVar15 = *(code **)(lVar5 + 0x10);
          if (pcVar15 != (code *)0x0) {
            iVar3 = (*pcVar15)(plVar12,param_1);
            pcVar15 = (code *)0x1;
            iVar2 = 1;
            if (0 < iVar3) goto LAB_003ba94c;
LAB_003baa24:
            if ((iVar2 != 0) && (*(code **)(lVar5 + 0x18) != (code *)0x0)) {
              (**(code **)(lVar5 + 0x18))(plVar12);
            }
            goto LAB_003baa38;
          }
LAB_003ba94c:
          iVar2 = FUN_003d51c8(&DAT_007ab950,FUN_003bb494);
          if (((iVar2 == 0) || (DAT_007ab954 == 0)) ||
             (iVar2 = FUN_003d518c(DAT_007ab958), iVar2 == 0)) {
LAB_003baa20:
            iVar2 = (int)pcVar15;
            goto LAB_003baa24;
          }
          if ((DAT_007ab968 == 0) && (DAT_007ab968 = FUN_0040bf0c(), DAT_007ab968 == 0)) {
            uVar11 = 0x1ba;
LAB_003ba9e4:
            FUN_003d519c(DAT_007ab958);
            FUN_00379868();
            FUN_0037995c("crypto/conf/conf_mod.c",uVar11,"module_init");
            FUN_00379a5c(0xe,0x8000f,0);
            goto LAB_003baa20;
          }
          iVar2 = FUN_0040c89c(DAT_007ab968,plVar12);
          uVar11 = DAT_007ab958;
          if (iVar2 == 0) {
            uVar11 = 0x1c1;
            goto LAB_003ba9e4;
          }
          *(int *)(lVar5 + 0x20) = *(int *)(lVar5 + 0x20) + 1;
          FUN_003d519c(uVar11);
        }
        FUN_0037f71c();
        iVar1 = iVar1 + 1;
        iVar2 = FUN_0040caf8(lVar6);
      } while (iVar1 < iVar2);
    }
    uVar14 = 1;
  }
  return uVar14;
}


// ===== 003bab6c  FUN_003bab6c =====

uint FUN_003bab6c(undefined8 param_1,char *param_2,undefined8 param_3,ulong param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  char *__s;
  size_t sVar8;
  
  FUN_0037f6d4();
  pcVar7 = param_2;
  if (param_2 == (char *)0x0) {
    lVar5 = FUN_003c5634("OPENSSL_CONF");
    if (lVar5 == 0) {
      __s = (char *)FUN_00427580();
      sVar8 = strlen(__s);
      pcVar7 = (char *)FUN_003c83a4(sVar8 + 0xd,"crypto/conf/conf_mod.c",0x283);
      if (pcVar7 == (char *)0x0) goto LAB_003bacb8;
      FUN_0037cd5c(pcVar7,sVar8 + 0xd,"%s%s%s",__s,&DAT_001c55aa,"openssl.cnf");
      if (*pcVar7 == '\0') goto LAB_003baca8;
      goto LAB_003baba0;
    }
    pcVar7 = (char *)FUN_003ca2f4(lVar5,"crypto/conf/conf_mod.c",0x27c);
    if (pcVar7 == (char *)0x0) {
LAB_003bacb8:
      bVar1 = false;
      uVar3 = 0;
      lVar5 = 0;
    }
    else {
      if (*pcVar7 != '\0') goto LAB_003baba0;
LAB_003baca8:
      bVar1 = false;
      lVar5 = 0;
      uVar3 = 1;
    }
  }
  else {
LAB_003baba0:
    lVar5 = FUN_003bbe54(param_1,0);
    if (lVar5 == 0) {
LAB_003bac3c:
      uVar3 = 0;
      bVar1 = false;
    }
    else {
      iVar2 = FUN_003bbff0(lVar5,pcVar7,0);
      if (iVar2 < 1) {
        if (((uint)param_4 >> 4 & 1) == 0) goto LAB_003bac3c;
        uVar4 = FUN_0037a744();
        uVar3 = 0x7fffff;
        if ((int)uVar4 < 0) {
          uVar3 = 0x7fffffff;
        }
        bVar1 = false;
        uVar3 = (uint)((uVar3 & uVar4) == 0x72);
      }
      else {
        uVar3 = FUN_003ba5c4(lVar5,param_3,param_4);
        lVar6 = FUN_003bc054(lVar5,0,"config_diagnostics");
        bVar1 = lVar6 != 0;
      }
    }
    if (param_2 != (char *)0x0) goto LAB_003bacd8;
  }
  FUN_003c86b4(pcVar7,"crypto/conf/conf_mod.c",0xdb);
LAB_003bacd8:
  FUN_003bbf5c(lVar5);
  if ((param_4 & 2) == 0) {
    bVar1 = true;
  }
  if (!bVar1) {
    uVar3 = 1;
  }
  if ((int)uVar3 < 1) {
    FUN_0037f8c4();
  }
  else {
    FUN_0037f71c();
  }
  return uVar3;
}


// ===== 003bad4c  FUN_003bad4c =====

long FUN_003bad4c(void)

{
  long lVar1;
  char *__s;
  size_t sVar2;
  
  lVar1 = FUN_003c5634("OPENSSL_CONF");
  if (lVar1 != 0) {
    lVar1 = FUN_003ca2f4(lVar1,"crypto/conf/conf_mod.c",0x27c);
    return lVar1;
  }
  __s = (char *)FUN_00427580();
  sVar2 = strlen(__s);
  lVar1 = FUN_003c83a4(sVar2 + 0xd,"crypto/conf/conf_mod.c",0x283);
  if (lVar1 != 0) {
    FUN_0037cd5c(lVar1,sVar2 + 0xd,"%s%s%s",__s,&DAT_001c55aa,"openssl.cnf");
  }
  return lVar1;
}


// ===== 003bade0  FUN_003bade0 =====

void FUN_003bade0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_003bab6c(0,param_1,param_2,param_3);
  return;
}


// ===== 003badf4  FUN_003badf4 =====

void FUN_003badf4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  
  iVar1 = FUN_003baf70();
  if ((iVar1 == 0) || (iVar1 = FUN_003d518c(DAT_007ab958), iVar1 == 0)) {
    return;
  }
  iVar2 = FUN_0040caf8(DAT_007ab960);
  iVar1 = iVar2 + -1;
  if (0 < iVar2) {
    if (param_1 == 0) {
      do {
        iVar2 = iVar2 + -1;
        plVar4 = (long *)FUN_0040cb0c(DAT_007ab960,iVar2);
        if (((int)plVar4[4] < 1) && (*plVar4 != 0)) {
          FUN_0040c404(DAT_007ab960,iVar2);
          FUN_003be278(*plVar4);
          FUN_003c86b4(plVar4[1],"crypto/conf/conf_mod.c",0x203);
          FUN_003c86b4(plVar4,"crypto/conf/conf_mod.c",0x204);
        }
      } while (0 < iVar2);
    }
    else {
      do {
        puVar3 = (undefined8 *)FUN_0040cb0c(DAT_007ab960,iVar1);
        FUN_0040c404(DAT_007ab960,iVar1);
        FUN_003be278(*puVar3);
        FUN_003c86b4(puVar3[1],"crypto/conf/conf_mod.c",0x203);
        FUN_003c86b4(puVar3,"crypto/conf/conf_mod.c",0x204);
        iVar1 = iVar1 + -1;
      } while (iVar1 != -1);
    }
  }
  iVar1 = FUN_0040caf8(DAT_007ab960);
  if (iVar1 == 0) {
    FUN_0040bd78(DAT_007ab960);
    DAT_007ab960 = 0;
    FUN_003d519c(DAT_007ab958);
    return;
  }
  FUN_003d519c(DAT_007ab958);
  return;
}


// ===== 003baf70  FUN_003baf70 =====

long FUN_003baf70(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  iVar1 = FUN_003d51c8(&DAT_007ab950,FUN_003bb494);
  lVar2 = 0;
  if ((((iVar1 != 0) && (DAT_007ab954 != 0)) && (lVar2 = DAT_007ab958, DAT_007ab958 != 0)) &&
     (lVar2 = FUN_003d518c(), (int)lVar2 != 0)) {
    iVar1 = FUN_0040caf8(DAT_007ab968);
    while (0 < iVar1) {
      plVar4 = (long *)FUN_0040ca00(DAT_007ab968);
      if (plVar4 != (long *)0x0) {
        lVar2 = *plVar4;
        if (*(code **)(lVar2 + 0x18) != (code *)0x0) {
          (**(code **)(lVar2 + 0x18))(plVar4);
          lVar2 = *plVar4;
        }
        lVar3 = plVar4[1];
        *(int *)(lVar2 + 0x20) = *(int *)(lVar2 + 0x20) + -1;
        FUN_003c86b4(lVar3,"crypto/conf/conf_mod.c",0x22f);
        FUN_003c86b4(plVar4[2],"crypto/conf/conf_mod.c",0x230);
        FUN_003c86b4(plVar4,"crypto/conf/conf_mod.c",0x231);
      }
      iVar1 = FUN_0040caf8(DAT_007ab968);
    }
    FUN_0040bd78(DAT_007ab968);
    DAT_007ab968 = 0;
    FUN_003d519c(DAT_007ab958);
    lVar2 = 1;
  }
  return lVar2;
}


// ===== 003bb088  thunk_FUN_003baf70 =====

long thunk_FUN_003baf70(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  iVar1 = FUN_003d51c8(&DAT_007ab950,FUN_003bb494);
  lVar2 = 0;
  if ((((iVar1 != 0) && (DAT_007ab954 != 0)) && (lVar2 = DAT_007ab958, DAT_007ab958 != 0)) &&
     (lVar2 = FUN_003d518c(), (int)lVar2 != 0)) {
    iVar1 = FUN_0040caf8(DAT_007ab968);
    while (0 < iVar1) {
      plVar4 = (long *)FUN_0040ca00(DAT_007ab968);
      if (plVar4 != (long *)0x0) {
        lVar2 = *plVar4;
        if (*(code **)(lVar2 + 0x18) != (code *)0x0) {
          (**(code **)(lVar2 + 0x18))(plVar4);
          lVar2 = *plVar4;
        }
        lVar3 = plVar4[1];
        *(int *)(lVar2 + 0x20) = *(int *)(lVar2 + 0x20) + -1;
        FUN_003c86b4(lVar3,"crypto/conf/conf_mod.c",0x22f);
        FUN_003c86b4(plVar4[2],"crypto/conf/conf_mod.c",0x230);
        FUN_003c86b4(plVar4,"crypto/conf/conf_mod.c",0x231);
      }
      iVar1 = FUN_0040caf8(DAT_007ab968);
    }
    FUN_0040bd78(DAT_007ab968);
    DAT_007ab968 = 0;
    FUN_003d519c(DAT_007ab958);
    lVar2 = 1;
  }
  return lVar2;
}


// ===== 003bb08c  FUN_003bb08c =====

bool FUN_003bb08c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = FUN_003bb0b8(0,param_1,param_2,param_3);
  return lVar1 != 0;
}


// ===== 003bb0b8  FUN_003bb0b8 =====

undefined8 *
FUN_003bb0b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  iVar1 = FUN_003d51c8(&DAT_007ab950,FUN_003bb494);
  if (iVar1 == 0) {
    return (undefined8 *)0x0;
  }
  if (DAT_007ab954 == 0) {
    return (undefined8 *)0x0;
  }
  iVar1 = FUN_003d518c(DAT_007ab958);
  if (iVar1 == 0) {
    return (undefined8 *)0x0;
  }
  if (((DAT_007ab960 != 0) || (DAT_007ab960 = FUN_0040bf0c(), DAT_007ab960 != 0)) &&
     (puVar2 = (undefined8 *)FUN_003c8474(0x30,"crypto/conf/conf_mod.c",0x155),
     puVar2 != (undefined8 *)0x0)) {
    *puVar2 = param_1;
    lVar3 = FUN_003ca2f4(param_2,"crypto/conf/conf_mod.c",0x159);
    puVar2[1] = lVar3;
    puVar2[2] = param_3;
    puVar2[3] = param_4;
    if ((lVar3 != 0) && (iVar1 = FUN_0040c89c(DAT_007ab960,puVar2), iVar1 != 0)) {
      FUN_003d519c(DAT_007ab958);
      return puVar2;
    }
    FUN_003d519c(DAT_007ab958);
    FUN_003c86b4(puVar2[1],"crypto/conf/conf_mod.c",0x168);
    FUN_003c86b4(puVar2,"crypto/conf/conf_mod.c",0x169);
    return (undefined8 *)0x0;
  }
  FUN_003d519c(DAT_007ab958);
  return (undefined8 *)0x0;
}


// ===== 003bb20c  FUN_003bb20c =====

void FUN_003bb20c(void)

{
  FUN_003badf4(1);
  FUN_003d51ac(DAT_007ab958);
  DAT_007ab958 = 0;
  FUN_0040bd78(DAT_007ab960);
  DAT_007ab960 = 0;
  FUN_0040bd78(DAT_007ab968);
  DAT_007ab968 = 0;
  return;
}


// ===== 003bb258  FUN_003bb258 =====

undefined8 FUN_003bb258(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


// ===== 003bb260  FUN_003bb260 =====

undefined8 FUN_003bb260(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


// ===== 003bb268  FUN_003bb268 =====

undefined8 FUN_003bb268(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


// ===== 003bb270  FUN_003bb270 =====

void FUN_003bb270(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return;
}


// ===== 003bb278  FUN_003bb278 =====

undefined8 FUN_003bb278(undefined8 *param_1)

{
  return *param_1;
}


// ===== 003bb280  FUN_003bb280 =====

undefined8 FUN_003bb280(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


// ===== 003bb288  FUN_003bb288 =====

void FUN_003bb288(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}


// ===== 003bb290  FUN_003bb290 =====

undefined8 FUN_003bb290(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}


// ===== 003bb298  FUN_003bb298 =====

void FUN_003bb298(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}


// ===== 003bb2a0  FUN_003bb2a0 =====

undefined8 FUN_003bb2a0(byte *param_1,int param_2,int param_3,code *param_4,undefined8 param_5)

{
  bool bVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  byte *pbVar5;
  size_t sVar6;
  undefined8 uVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  
  if (param_1 == (byte *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/conf/conf_mod.c",0x29b,"CONF_parse_list");
    FUN_00379a5c(0xe,0x73,0);
    return 0;
  }
  if (param_3 == 0) {
    do {
      pbVar5 = (byte *)strchr((char *)param_1,param_2);
      if ((pbVar5 == param_1) || (*param_1 == 0)) {
        uVar7 = (*param_4)(0,0,param_5);
        iVar4 = (int)uVar7;
      }
      else {
        pbVar10 = pbVar5;
        if (pbVar5 == (byte *)0x0) {
          sVar6 = strlen((char *)param_1);
          pbVar10 = param_1 + sVar6;
        }
        uVar7 = (*param_4)(param_1,(int)pbVar10 - (int)param_1,param_5);
        iVar4 = (int)uVar7;
      }
      if (iVar4 < 1) {
        return uVar7;
      }
      param_1 = pbVar5 + 1;
    } while (pbVar5 != (byte *)0x0);
  }
  else {
    do {
      uVar8 = (uint)*param_1;
      if (*param_1 == 0) {
        bVar1 = true;
        pbVar5 = (byte *)strchr((char *)param_1,param_2);
        if (pbVar5 != param_1) goto LAB_003bb32c;
LAB_003bb384:
        uVar7 = (*param_4)(0,0,param_5);
        iVar4 = (int)uVar7;
      }
      else {
        do {
          bVar3 = uVar8 - 9 < 5;
          bVar1 = uVar8 == 0x20 || bVar3;
          if (uVar8 != 0x20 && !bVar3) break;
          param_1 = param_1 + 1;
          uVar8 = (uint)*param_1;
        } while (uVar8 != 0);
        pbVar5 = (byte *)strchr((char *)param_1,param_2);
        if (pbVar5 == param_1) goto LAB_003bb384;
LAB_003bb32c:
        if (bVar1) goto LAB_003bb384;
        pbVar10 = pbVar5;
        if (pbVar5 == (byte *)0x0) {
          sVar6 = strlen((char *)param_1);
          pbVar10 = param_1 + sVar6;
        }
        iVar4 = ((int)pbVar10 - (int)param_1) + 1;
        pbVar10 = pbVar10 + -1;
        do {
          do {
            pbVar9 = pbVar10 + -1;
            bVar2 = *pbVar10;
            iVar4 = iVar4 + -1;
            pbVar10 = pbVar9;
          } while (bVar2 == 0x20);
        } while (0xfffffffa < bVar2 - 0xe);
        uVar7 = (*param_4)(param_1,iVar4,param_5);
        iVar4 = (int)uVar7;
      }
      if (iVar4 < 1) {
        return uVar7;
      }
      param_1 = pbVar5 + 1;
    } while (pbVar5 != (byte *)0x0);
  }
  return 1;
}


// ===== 003bb474  FUN_003bb474 =====

void FUN_003bb474(void)

{
  FUN_003bec00();
  DAT_007ab948 = 1;
  return;
}


// ===== 003bb494  FUN_003bb494 =====

void FUN_003bb494(void)

{
  DAT_007ab958 = FUN_003d5150();
  if (DAT_007ab958 != 0) {
    DAT_007ab954 = 1;
    return;
  }
  FUN_00379868();
  FUN_0037995c("crypto/conf/conf_mod.c",0x67,"do_init_module_list_lock");
  FUN_00379a5c(0xe,0x8000f,0);
  DAT_007ab954 = 0;
  return;
}


// ===== 003bb500  FUN_003bb500 =====

void FUN_003bb500(long param_1,undefined8 param_2)

{
  if (DAT_007ab970 == 0) {
    DAT_007ab970 = FUN_003bc108();
  }
  (**(code **)(DAT_007ab970 + 0x10))(param_1);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}


// ===== 003bb550  FUN_003bb550 =====

undefined8 FUN_003bb550(undefined8 param_1)

{
  DAT_007ab970 = param_1;
  return 1;
}


// ===== 003bb564  FUN_003bb564 =====

undefined8 FUN_003bb564(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long local_60 [2];
  undefined8 local_50;
  
  lVar3 = FUN_00388570(param_2,&DAT_001d80ae);
  if (lVar3 != 0) {
    if (DAT_007ab970 == 0) {
      DAT_007ab970 = FUN_003bc108();
    }
    (**(code **)(DAT_007ab970 + 0x10))(local_60);
    local_50 = param_1;
    iVar2 = (**(code **)(local_60[0] + 0x28))(local_60,lVar3,param_3);
    uVar1 = 0;
    if (iVar2 != 0) {
      uVar1 = local_50;
    }
    FUN_0037db50(lVar3);
    return uVar1;
  }
  FUN_00379868();
  FUN_0037995c("crypto/conf/conf_lib.c",0x3a,"CONF_load");
  FUN_00379a5c(0xe,0x80002,0);
  return 0;
}


// ===== 003bb650  FUN_003bb650 =====

undefined8 FUN_003bb650(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  long local_60 [2];
  undefined8 local_50;
  
  if (DAT_007ab970 == 0) {
    DAT_007ab970 = FUN_003bc108();
  }
  (**(code **)(DAT_007ab970 + 0x10))(local_60);
  local_50 = param_1;
  iVar2 = (**(code **)(local_60[0] + 0x28))(local_60,param_2,param_3);
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar1 = local_50;
  }
  return uVar1;
}


// ===== 003bb6d0  FUN_003bb6d0 =====

undefined8 FUN_003bb6d0(long *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003bb6dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x28))();
    return uVar1;
  }
  FUN_00379868();
  FUN_0037995c("crypto/conf/conf_lib.c",0x116,"NCONF_load_bio");
  FUN_00379a5c(0xe,0x69,0);
  return 0;
}


// ===== 003bb720  FUN_003bb720 =====

long FUN_003bb720(long param_1,long param_2)

{
  undefined1 auStack_60 [16];
  long local_50;
  
  if (param_1 != 0) {
    if (DAT_007ab970 == 0) {
      DAT_007ab970 = FUN_003bc108();
      (**(code **)(DAT_007ab970 + 0x10))(auStack_60);
    }
    else {
      (**(code **)(DAT_007ab970 + 0x10))(auStack_60);
    }
    local_50 = param_1;
    if (param_2 == 0) {
      FUN_00379868();
      FUN_0037995c("crypto/conf/conf_lib.c",0x125,"NCONF_get_section");
      FUN_00379a5c(0xe,0x6b,0);
      param_1 = 0;
    }
    else {
      param_1 = FUN_003bdc54(auStack_60,param_2);
    }
  }
  return param_1;
}


// ===== 003bb7d0  FUN_003bb7d0 =====

undefined8 FUN_003bb7d0(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/conf/conf_lib.c",0x120,"NCONF_get_section");
    FUN_00379a5c(0xe,0x69,0);
    return 0;
  }
  if (param_2 != 0) {
    uVar1 = FUN_003bdc54();
    return uVar1;
  }
  FUN_00379868();
  FUN_0037995c("crypto/conf/conf_lib.c",0x125,"NCONF_get_section");
  FUN_00379a5c(0xe,0x6b,0);
  return 0;
}


// ===== 003bb858  FUN_003bb858 =====

long FUN_003bb858(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_60 [16];
  long local_50;
  
  if (param_1 == 0) {
    lVar1 = FUN_003bdd40(0,param_2,param_3);
    if (lVar1 == 0) {
      FUN_00379868();
      FUN_0037995c("crypto/conf/conf_lib.c",0x138,"NCONF_get_string");
      FUN_00379a5c(0xe,0x6a,0);
      return 0;
    }
  }
  else {
    if (DAT_007ab970 == 0) {
      DAT_007ab970 = FUN_003bc108();
    }
    (**(code **)(DAT_007ab970 + 0x10))(auStack_60);
    local_50 = param_1;
    lVar1 = FUN_003bdd40(auStack_60,param_2,param_3);
    if (lVar1 == 0) {
      FUN_00379868();
      FUN_0037995c("crypto/conf/conf_lib.c",0x13b,"NCONF_get_string");
      FUN_00379a5c(0xe,0x6c,"group=%s name=%s",param_2,param_3);
      return 0;
    }
  }
  return lVar1;
}


// ===== 003bb970  FUN_003bb970 =====

long FUN_003bb970(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = FUN_003bdd40();
  if (lVar1 != 0) {
    return lVar1;
  }
  FUN_00379868();
  if (param_1 != 0) {
    FUN_0037995c("crypto/conf/conf_lib.c",0x13b,"NCONF_get_string");
    FUN_00379a5c(0xe,0x6c,"group=%s name=%s",param_2,param_3);
    return 0;
  }
  FUN_0037995c("crypto/conf/conf_lib.c",0x138,"NCONF_get_string");
  FUN_00379a5c(0xe,0x6a,0);
  return 0;
}


// ===== 003bba24  FUN_003bba24 =====

long FUN_003bba24(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  byte *pbVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_70 [16];
  long local_60;
  long local_28;
  
  local_28 = 0;
  FUN_0037f6d4();
  if (param_1 == 0) {
    pbVar2 = (byte *)FUN_003bdd40(0,param_2,param_3);
    if (pbVar2 == (byte *)0x0) {
      FUN_00379868();
      FUN_0037995c("crypto/conf/conf_lib.c",0x138,"NCONF_get_string");
      uVar3 = 0x6a;
    }
    else {
      iVar1 = FUN_003c4784(*pbVar2);
      lVar4 = 0;
      while( true ) {
        if (iVar1 == 0) {
          FUN_0037f71c();
          return lVar4;
        }
        if ((long)((0x800000000000002f - (ulong)*pbVar2) / 10) < lVar4) break;
        lVar4 = (ulong)*pbVar2 + lVar4 * 10 + -0x30;
        iVar1 = FUN_003c4784(pbVar2[1]);
        pbVar2 = pbVar2 + 1;
      }
      FUN_00379868();
      FUN_0037995c("crypto/conf/conf_lib.c",0x166,"NCONF_get_number_e");
      uVar3 = 0x79;
    }
    FUN_00379a5c(0xe,uVar3,0);
    FUN_0037f71c();
  }
  else {
    if (DAT_007ab970 == 0) {
      DAT_007ab970 = FUN_003bc108();
    }
    (**(code **)(DAT_007ab970 + 0x10))(auStack_70);
    local_60 = param_1;
    iVar1 = FUN_003bbb84(auStack_70,param_2,param_3,&local_28);
    FUN_0037f71c();
    if (iVar1 != 0) {
      return local_28;
    }
  }
  return 0;
}


// ===== 003bbb84  FUN_003bbb84 =====

undefined8 FUN_003bbb84(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  code *pcVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  int iVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  code *pcVar7;
  code *pcVar8;
  long lVar9;
  
  if (param_4 == (long *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/conf/conf_lib.c",0x153,"NCONF_get_number_e");
    uVar6 = 0xc0102;
  }
  else {
    puVar5 = (undefined1 *)FUN_003bdd40();
    if (puVar5 == (undefined1 *)0x0) {
      FUN_00379868();
      if (param_1 != (long *)0x0) {
        FUN_0037995c("crypto/conf/conf_lib.c",0x13b,"NCONF_get_string");
        FUN_00379a5c(0xe,0x6c,"group=%s name=%s",param_2,param_3);
        return 0;
      }
      FUN_0037995c("crypto/conf/conf_lib.c",0x138,"NCONF_get_string");
      uVar6 = 0x6a;
    }
    else {
      pcVar8 = FUN_003bc040;
      pcVar7 = FUN_003bc048;
      if (param_1 != (long *)0x0) {
        pcVar1 = *(code **)(*param_1 + 0x38);
        pcVar2 = *(code **)(*param_1 + 0x40);
        if (pcVar1 != (code *)0x0) {
          pcVar8 = pcVar1;
        }
        if (pcVar2 != (code *)0x0) {
          pcVar7 = pcVar2;
        }
      }
      iVar4 = (*pcVar8)(param_1,*puVar5);
      lVar9 = 0;
      while( true ) {
        if (iVar4 == 0) {
          *param_4 = lVar9;
          return 1;
        }
        iVar4 = (*pcVar7)(param_1,*puVar5);
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (long)iVar4 ^ 0x7fffffffffffffff;
        if ((long)(SUB168(auVar3 * ZEXT816(0x6666666666666667),8) >> 2) < lVar9) break;
        lVar9 = (long)iVar4 + lVar9 * 10;
        iVar4 = (*pcVar8)(param_1,puVar5[1]);
        puVar5 = puVar5 + 1;
      }
      FUN_00379868();
      FUN_0037995c("crypto/conf/conf_lib.c",0x166,"NCONF_get_number_e");
      uVar6 = 0x79;
    }
  }
  FUN_00379a5c(0xe,uVar6,0);
  return 0;
}


// ===== 003bbd28  FUN_003bbd28 =====

void FUN_003bbd28(undefined8 param_1)

{
  long local_50 [2];
  undefined8 local_40;
  
  if (DAT_007ab970 == 0) {
    DAT_007ab970 = FUN_003bc108();
  }
  (**(code **)(DAT_007ab970 + 0x10))(local_50);
  local_40 = param_1;
  (**(code **)(local_50[0] + 0x20))(local_50);
  return;
}


// ===== 003bbd84  FUN_003bbd84 =====

void FUN_003bbd84(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003bbd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x20))();
    return;
  }
  return;
}


// ===== 003bbd98  FUN_003bbd98 =====

void FUN_003bbd98(undefined8 param_1,undefined8 param_2)

{
  long local_60 [2];
  undefined8 local_50;
  
  if (DAT_007ab970 == 0) {
    DAT_007ab970 = FUN_003bc108();
  }
  (**(code **)(DAT_007ab970 + 0x10))(local_60);
  local_50 = param_1;
  (**(code **)(local_60[0] + 0x30))(local_60,param_2);
  return;
}


// ===== 003bbe04  FUN_003bbe04 =====

undefined8 FUN_003bbe04(long *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003bbe10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x30))();
    return uVar1;
  }
  FUN_00379868();
  FUN_0037995c("crypto/conf/conf_lib.c",0x18e,"NCONF_dump_bio");
  FUN_00379a5c(0xe,0x69,0);
  return 0;
}


// ===== 003bbe54  FUN_003bbe54 =====

long FUN_003bbe54(undefined8 param_1,long param_2)

{
  long lVar1;
  
  if (param_2 == 0) {
    lVar1 = FUN_003bc108();
    lVar1 = (**(code **)(lVar1 + 8))();
  }
  else {
    lVar1 = (**(code **)(param_2 + 8))(param_2);
  }
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x28) = param_1;
    return lVar1;
  }
  FUN_00379868();
  FUN_0037995c("crypto/conf/conf_lib.c",0xbf,"NCONF_new_ex");
  FUN_00379a5c(0xe,0x8000e,0);
  return 0;
}


// ===== 003bbedc  FUN_003bbedc =====

long FUN_003bbedc(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    lVar1 = FUN_003bc108();
    lVar1 = (**(code **)(lVar1 + 8))();
  }
  else {
    lVar1 = (**(code **)(param_1 + 8))();
  }
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x28) = 0;
    return lVar1;
  }
  FUN_00379868();
  FUN_0037995c("crypto/conf/conf_lib.c",0xbf,"NCONF_new_ex");
  FUN_00379a5c(0xe,0x8000e,0);
  return 0;
}


// ===== 003bbf5c  FUN_003bbf5c =====

void FUN_003bbf5c(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003bbf68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))();
    return;
  }
  return;
}


// ===== 003bbf70  FUN_003bbf70 =====

undefined8 FUN_003bbf70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}


// ===== 003bbf78  FUN_003bbf78 =====

long FUN_003bbf78(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_0040bfd0(FUN_003bbfc8);
  if (lVar1 != 0) {
    FUN_003b91c8(*(undefined8 *)(param_1 + 0x10),FUN_003bbfd4,lVar1);
    FUN_0040cc10(lVar1);
  }
  return lVar1;
}


// ===== 003bbfc8  FUN_003bbfc8 =====

int FUN_003bbfc8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = strcmp((char *)*param_1,(char *)*param_2);
  return iVar1;
}


// ===== 003bbfd4  FUN_003bbfd4 =====

void FUN_003bbfd4(undefined8 *param_1,undefined8 param_2)

{
  if (param_1[1] != 0) {
    return;
  }
  FUN_0040c89c(param_2,*param_1);
  return;
}


// ===== 003bbff0  FUN_003bbff0 =====

undefined8 FUN_003bbff0(long *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003bbffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x48))();
    return uVar1;
  }
  FUN_00379868();
  FUN_0037995c("crypto/conf/conf_lib.c",0xfd,"NCONF_load");
  FUN_00379a5c(0xe,0x69,0);
  return 0;
}


// ===== 003bc040  FUN_003bc040 =====

void FUN_003bc040(undefined8 param_1,undefined1 param_2)

{
  FUN_003c4784(param_2);
  return;
}


// ===== 003bc048  FUN_003bc048 =====

int FUN_003bc048(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xff) - 0x30;
}


// ===== 003bc054  FUN_003bc054 =====

undefined8 FUN_003bc054(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 local_18;
  
  local_18 = 0;
  FUN_0037f6d4();
  iVar2 = FUN_003bbb84(param_1,param_2,param_3,&local_18);
  FUN_0037f71c();
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar1 = local_18;
  }
  return uVar1;
}


// ===== 003bc0b0  FUN_003bc0b0 =====

void FUN_003bc0b0(void)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,0x18);
  if (pvVar1 != (void *)0x0) {
    *(undefined8 *)((long)pvVar1 + 0x10) = 0x32;
  }
  return;
}


// ===== 003bc0d8  FUN_003bc0d8 =====

void FUN_003bc0d8(undefined8 *param_1)

{
  free((void *)*param_1);
  free((void *)param_1[1]);
  free(param_1);
  return;
}


// ===== 003bc108  FUN_003bc108 =====

undefined ** FUN_003bc108(void)

{
  return &PTR_s_OpenSSL_default_007a8948;
}


// ===== 003bc114  FUN_003bc114 =====

long FUN_003bc114(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_003c83a4(0x30,"crypto/conf/conf_def.c",0x73);
  if ((lVar2 != 0) && (iVar1 = (**(code **)(param_1 + 0x10))(), iVar1 == 0)) {
    FUN_003c86b4(lVar2,"crypto/conf/conf_def.c",0x76);
    return 0;
  }
  return lVar2;
}


// ===== 003bc180  FUN_003bc180 =====

undefined8 * FUN_003bc180(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = &PTR_s_OpenSSL_default_007a8948;
    param_1[1] = &DAT_00206ae6;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1 = (undefined8 *)0x1;
  }
  return param_1;
}


// ===== 003bc1a8  FUN_003bc1a8 =====

long FUN_003bc1a8(long param_1)

{
  if (param_1 != 0) {
    FUN_003bdf38();
    FUN_003c86b4(param_1,"crypto/conf/conf_def.c",0x99);
    param_1 = 1;
  }
  return param_1;
}


// ===== 003bc1e4  FUN_003bc1e4 =====

long FUN_003bc1e4(long param_1)

{
  if (param_1 != 0) {
    FUN_003bdf38();
    param_1 = 1;
  }
  return param_1;
}


// ===== 003bc200  FUN_003bc200 =====

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_003bc200(long param_1,long param_2,long *param_3)

{
  bool bVar1;
  short *__s;
  undefined4 uVar2;
  uint uVar3;
  char cVar4;
  ushort uVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  byte *pbVar9;
  long lVar10;
  ulong uVar11;
  char *pcVar12;
  size_t sVar13;
  size_t sVar14;
  char *__s_00;
  long lVar15;
  char *__s_01;
  undefined8 uVar16;
  int iVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  byte *pbVar26;
  byte bVar27;
  ulong uVar28;
  uint uVar29;
  long local_b8;
  long local_90;
  char *local_88;
  byte *local_80;
  char *local_78 [3];
  
  lVar25 = *(long *)(param_1 + 0x10);
  local_88 = (char *)0x0;
  local_80 = (byte *)0x0;
  local_90 = 0;
  lVar8 = FUN_00387e50();
  if (lVar8 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/conf/conf_def.c",0xea,"def_load_bio");
    uVar2 = 0x80007;
LAB_003bcdbc:
    FUN_00379a5c(0xe,uVar2,0);
    pbVar9 = (byte *)0x0;
  }
  else {
    pbVar9 = (byte *)FUN_003ca2f4("default","crypto/conf/conf_def.c",0xee);
    local_80 = pbVar9;
    if (pbVar9 != (byte *)0x0) {
      iVar7 = FUN_003bde30(param_1);
      if (iVar7 == 0) {
        FUN_00379868();
        FUN_0037995c("crypto/conf/conf_def.c",0xf3,"def_load_bio");
        uVar2 = 0x8000e;
        goto LAB_003bcdbc;
      }
      local_b8 = FUN_003be09c(param_1,pbVar9);
      if (local_b8 != 0) {
        lVar10 = FUN_00387ed0(lVar8,0x200);
        if (lVar10 != 0) {
          lVar10 = 0;
          pbVar9 = (byte *)0x0;
          bVar6 = true;
LAB_003bc2b4:
          uVar29 = 0;
          bVar1 = false;
          lVar15 = param_2;
LAB_003bc2e0:
          __s = (short *)(*(long *)(lVar8 + 8) + (long)(int)uVar29);
          *(char *)__s = '\0';
          if (bVar1) {
            if ((lVar15 != 0) && (iVar7 = FUN_0037e7f0(lVar15,__s,0x1ff), iVar7 < 0))
            goto LAB_003bcfa8;
            *(char *)((long)__s + 0x1ff) = '\0';
            uVar11 = strlen((char *)__s);
            if ((bVar6) &&
               ((uVar28 = (ulong)((int)uVar11 - 3), 2 < (int)uVar11 &&
                (*__s == -0x4411 && (char)__s[1] == -0x41)))) {
              memmove(__s,(char *)((long)__s + 3),uVar28);
              *(char *)((long)__s + uVar28) = '\0';
              uVar11 = uVar28;
            }
            iVar7 = (int)uVar11;
            bVar6 = iVar7 != 0;
joined_r0x003bc36c:
            uVar28 = uVar11 & 0xffffffff;
            if (0 < iVar7) goto LAB_003bc400;
          }
          else {
            if ((lVar15 != 0) && (iVar7 = FUN_0037e7f0(lVar15,__s,0x1ff), iVar7 < 0)) {
LAB_003bcfa8:
              lVar22 = 0;
              goto LAB_003bcdd0;
            }
            *(char *)((long)__s + 0x1ff) = '\0';
            uVar11 = strlen((char *)__s);
            if ((!bVar6) || (uVar28 = (ulong)((int)uVar11 - 3), (int)uVar11 < 3)) {
LAB_003bc3e8:
              pcVar12 = local_88;
              if ((int)uVar11 == 0) {
                if (local_90 == 0) {
LAB_003bc63c:
                  lVar22 = FUN_0040ca00(lVar10);
                  if (lVar22 == 0) {
LAB_003bcf7c:
                    FUN_00387e64(lVar8);
                    FUN_003c86b4(local_80,"crypto/conf/conf_def.c",0x232);
                    FUN_0040bd78(lVar10);
                    return 1;
                  }
                }
                else {
                  lVar22 = FUN_003bd2e0(local_88,&local_90);
                  if (lVar22 == 0) {
                    FUN_003c86b4(pcVar12,"crypto/conf/conf_def.c",0x126);
                    local_88 = (char *)0x0;
                    goto LAB_003bc63c;
                  }
                }
                FUN_0037dc48(lVar15);
                iVar7 = FUN_0037e7f0(lVar22,__s,0x1ff);
                lVar15 = lVar22;
                while( true ) {
                  if (iVar7 < 0) {
                    lVar22 = 0;
                    goto LAB_003bcdd0;
                  }
                  *(char *)((long)__s + 0x1ff) = '\0';
                  uVar11 = strlen((char *)__s);
                  pcVar12 = local_88;
                  if ((int)uVar11 != 0) break;
                  if (local_90 == 0) {
LAB_003bc670:
                    lVar22 = FUN_0040ca00(lVar10);
                    if (lVar22 == 0) goto LAB_003bcf7c;
                  }
                  else {
                    lVar22 = FUN_003bd2e0(local_88,&local_90);
                    if (lVar22 == 0) {
                      FUN_003c86b4(pcVar12,"crypto/conf/conf_def.c",0x126);
                      local_88 = (char *)0x0;
                      goto LAB_003bc670;
                    }
                  }
                  FUN_0037dc48(lVar15);
                  iVar7 = FUN_0037e7f0(lVar22,__s,0x1ff);
                  lVar15 = lVar22;
                }
              }
              bVar6 = true;
              iVar7 = (int)uVar11;
              goto joined_r0x003bc36c;
            }
            if (*__s == -0x4411 && (char)__s[1] == -0x41) {
              memmove(__s,(char *)((long)__s + 3),uVar28);
              *(char *)((long)__s + uVar28) = '\0';
              uVar11 = uVar28;
              goto LAB_003bc3e8;
            }
            bVar6 = true;
LAB_003bc400:
            iVar7 = (int)uVar11;
            uVar28 = uVar11 & 0xffffffff;
            do {
              cVar4 = *(char *)((long)__s + (uVar28 - 1));
              if ((cVar4 != '\r') && (cVar4 != '\n')) goto LAB_003bc430;
              uVar11 = uVar28 - 1;
              bVar1 = 0 < (long)uVar28;
              uVar28 = uVar11;
            } while (uVar11 != 0 && bVar1);
            uVar28 = 0;
          }
LAB_003bc430:
          iVar17 = (int)uVar28;
          bVar1 = false;
          if (iVar17 == iVar7) {
            bVar1 = bVar6;
          }
          if (!bVar1) {
            pbVar9 = pbVar9 + 1;
            *(char *)((long)__s + (long)iVar17) = '\0';
          }
          uVar3 = iVar17 + uVar29;
          param_2 = lVar15;
          if ((int)uVar3 < 1) {
LAB_003bc46c:
            if (!bVar1) {
              pbVar26 = *(byte **)(lVar8 + 8);
              uVar28 = (ulong)*pbVar26;
              pbVar18 = pbVar26;
              uVar11 = uVar28;
              if (-1 < (char)*pbVar26) {
                do {
                  uVar5 = *(ushort *)(*(long *)(param_1 + 8) + uVar11 * 2);
                  if ((uVar5 >> 0xb & 1) != 0) goto LAB_003bc5ac;
                  if ((uVar5 >> 4 & 1) == 0) break;
                  pbVar18 = pbVar18 + 1;
                  uVar11 = (ulong)*pbVar18;
                } while (-1 < (char)*pbVar18);
              }
LAB_003bc4b8:
              do {
                if ((uint)uVar11 >> 7 != 0) {
LAB_003bc4b4:
                  pbVar18 = pbVar18 + 1;
                  uVar11 = (ulong)*pbVar18;
                  goto LAB_003bc4b8;
                }
                lVar22 = *(long *)(param_1 + 8);
                uVar5 = *(ushort *)(lVar22 + uVar11 * 2);
                if ((uVar5 >> 7 & 1) != 0) goto LAB_003bc5ac;
                if ((uVar5 >> 10 & 1) != 0) {
                  do {
                    pbVar20 = pbVar18;
                    pbVar19 = pbVar20 + 1;
                    uVar23 = (ulong)*pbVar19;
                    if ((-1 < (char)*pbVar19) && ((*(ushort *)(lVar22 + uVar23 * 2) >> 3 & 1) != 0))
                    break;
                    pbVar18 = pbVar19;
                  } while ((uVar23 != uVar11) ||
                          (uVar23 = uVar11, pbVar18 = pbVar20 + 2, pbVar20[2] == uVar11));
                  pbVar18 = pbVar20 + 2;
                  if (uVar23 != uVar11) {
                    pbVar18 = pbVar19;
                  }
LAB_003bc540:
                  uVar11 = (ulong)*pbVar18;
                  goto LAB_003bc4b8;
                }
                if ((uVar5 >> 6 & 1) == 0) {
                  if ((uVar5 >> 5 & 1) != 0) {
                    pbVar20 = pbVar18 + 1;
                    lVar21 = (long)(char)*pbVar20;
                    if (lVar21 < 0) {
                      pbVar18 = pbVar18 + 2;
                      uVar11 = (ulong)*pbVar18;
                    }
                    else {
                      pbVar18 = pbVar18 + 2;
                      if ((*(ushort *)(lVar22 + lVar21 * 2) & 8) != 0) {
                        pbVar18 = pbVar20;
                      }
                      uVar11 = (ulong)*pbVar18;
                    }
                    goto LAB_003bc4b8;
                  }
                  if ((uVar5 >> 3 & 1) == 0) goto LAB_003bc4b4;
                  goto LAB_003bc5b4;
                }
                do {
                  while( true ) {
                    pbVar20 = pbVar18;
                    pbVar19 = pbVar20 + 1;
                    uVar23 = (ulong)*pbVar19;
                    pbVar18 = pbVar19;
                    if ((char)*pbVar19 < '\0') break;
                    uVar24 = uVar23;
                    if ((uVar23 == uVar11) ||
                       (uVar5 = *(ushort *)(lVar22 + uVar23 * 2), (uVar5 >> 3 & 1) != 0))
                    goto LAB_003bc590;
                    if ((uVar5 >> 5 & 1) != 0) {
                      pbVar18 = pbVar20 + 2;
                      if ((-1 < (long)(char)*pbVar18) &&
                         ((*(ushort *)(lVar22 + (long)(char)*pbVar18 * 2) >> 3 & 1) != 0))
                      goto LAB_003bc540;
                    }
                  }
                  uVar24 = uVar11;
                } while (uVar23 != uVar11);
LAB_003bc590:
                pbVar18 = pbVar20 + 2;
                if (uVar24 != uVar11) {
                  pbVar18 = pbVar19;
                }
                uVar11 = (ulong)*pbVar18;
              } while( true );
            }
            bVar1 = true;
            uVar29 = uVar3;
          }
          else {
            lVar22 = *(long *)(lVar8 + 8) + (ulong)uVar3;
            lVar21 = (long)*(char *)(lVar22 + -1);
            if (((lVar21 < 0) || ((*(ushort *)(*(long *)(param_1 + 8) + lVar21 * 2) >> 5 & 1) == 0))
               || ((uVar29 = uVar3 - 1, uVar29 != 0 &&
                   ((lVar22 = (long)*(char *)(lVar22 + -2), -1 < lVar22 &&
                    ((*(ushort *)(*(long *)(param_1 + 8) + lVar22 * 2) >> 5 & 1) != 0))))))
            goto LAB_003bc46c;
            bVar1 = true;
          }
          goto LAB_003bc2c8;
        }
        lVar10 = 0;
        pbVar9 = (byte *)0x0;
LAB_003bcf30:
        FUN_00379868();
        FUN_0037995c("crypto/conf/conf_def.c",0x101,"def_load_bio");
        uVar16 = 0x80007;
        lVar15 = param_2;
LAB_003bcf58:
        FUN_00379a5c(0xe,uVar16,0);
LAB_003bcf60:
        lVar22 = 0;
        goto LAB_003bcdd0;
      }
      FUN_00379868();
      FUN_0037995c("crypto/conf/conf_def.c",0xf9,"def_load_bio");
      FUN_00379a5c(0xe,0x67,0);
      pbVar9 = (byte *)0x0;
    }
  }
  lVar22 = 0;
  lVar10 = 0;
  lVar15 = param_2;
LAB_003bcdd0:
  FUN_00387e64(lVar8);
  FUN_003c86b4(local_80,"crypto/conf/conf_def.c",0x23c);
  iVar7 = FUN_0040caf8(lVar10);
  while (0 < iVar7) {
    lVar8 = FUN_0040ca00(lVar10);
    FUN_0037dc48(lVar15);
    iVar7 = FUN_0040caf8(lVar10);
    lVar15 = lVar8;
  }
  FUN_0040bd78(lVar10);
  FUN_003c86b4(local_88,"crypto/conf/conf_def.c",0x249);
  if (local_90 != 0) {
    FUN_003ca274(&local_90);
  }
  if (param_3 != (long *)0x0) {
    *param_3 = (long)pbVar9;
  }
  FUN_0037cd5c(local_78,0x18,&DAT_001ef079,pbVar9);
  FUN_0037aeac(2,"line ",local_78);
  if (lVar25 != *(long *)(param_1 + 0x10)) {
    FUN_003bbd28();
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (lVar22 != 0) {
    FUN_003c86b4(*(undefined8 *)(lVar22 + 8),"crypto/conf/conf_def.c",0x256);
    FUN_003c86b4(*(undefined8 *)(lVar22 + 0x10),"crypto/conf/conf_def.c",599);
    FUN_003c86b4(lVar22,"crypto/conf/conf_def.c",600);
  }
  return 0;
LAB_003bc5ac:
  *pbVar18 = 0;
  uVar28 = (ulong)*pbVar26;
LAB_003bc5b4:
  if ((uint)uVar28 >> 7 == 0) {
    lVar22 = *(long *)(param_1 + 8);
    pbVar18 = pbVar26 + 1;
LAB_003bc5c4:
    uVar5 = *(ushort *)(lVar22 + uVar28 * 2);
    if ((uVar5 & 0x18) == 0x10) goto code_r0x003bc5d4;
    if ((uVar5 >> 3 & 1) != 0) goto LAB_003bc8c8;
    pbVar26 = pbVar18;
    if (uVar28 != 0x5b) goto LAB_003bc6f8;
    bVar27 = *pbVar18;
    while ((uVar11 = (ulong)bVar27, -1 < (char)bVar27 &&
           ((*(ushort *)(lVar22 + uVar11 * 2) & 0x18) == 0x10))) {
      pbVar18 = pbVar18 + 1;
      bVar27 = *pbVar18;
    }
    do {
      pbVar20 = pbVar18;
      pbVar26 = pbVar18;
      if ((uint)uVar11 >> 7 == 0) {
        do {
          uVar5 = *(ushort *)(lVar22 + uVar11 * 2);
          if ((uVar5 >> 5 & 1) == 0) {
            if (((uVar5 & 0x307) == 0) &&
               (((uVar5 >> 0xc & 1) == 0 || (*(int *)(param_1 + 0x18) == 0)))) {
              pbVar26 = pbVar20;
              if ((*(ushort *)(lVar22 + uVar11 * 2) & 0x18) == 0x10) {
                while( true ) {
                  pbVar26 = pbVar26 + 1;
                  uVar11 = (ulong)*pbVar26;
                  if ((char)*pbVar26 < '\0') break;
                  if ((*(ushort *)(lVar22 + uVar11 * 2) & 0x18) != 0x10) break;
                }
              }
              break;
            }
            pbVar26 = pbVar20 + 1;
          }
          else {
            pbVar26 = pbVar20 + 1;
            if (((long)(char)*pbVar26 < 0) ||
               ((*(ushort *)(lVar22 + (long)(char)*pbVar26 * 2) >> 3 & 1) == 0)) {
              pbVar26 = pbVar20 + 2;
            }
          }
          uVar11 = (ulong)*pbVar26;
          pbVar20 = pbVar26;
        } while (-1 < (char)*pbVar26);
      }
      if (uVar11 == 0) {
LAB_003bd098:
        FUN_00379868();
        FUN_0037995c("crypto/conf/conf_def.c",0x16f,"def_load_bio");
        FUN_00379a5c(0xe,100,0);
        goto LAB_003bd180;
      }
      if (uVar11 == 0x5d) {
        *pbVar20 = 0;
        iVar7 = FUN_003bd4c8(param_1,0,&local_80);
        pbVar18 = local_80;
        if (iVar7 != 0) {
          local_b8 = FUN_003bdc18(param_1,local_80);
          if ((local_b8 != 0) || (local_b8 = FUN_003be09c(param_1,pbVar18), local_b8 != 0))
          goto LAB_003bcd4c;
          FUN_00379868();
          FUN_0037995c("crypto/conf/conf_def.c",0x178,"def_load_bio");
          uVar16 = 0x67;
          goto LAB_003bcf58;
        }
        goto LAB_003bcf60;
      }
      bVar6 = pbVar18 == pbVar26;
      pbVar18 = pbVar26;
      if (bVar6) goto LAB_003bd098;
    } while( true );
  }
LAB_003bc6fc:
  pbVar18 = (byte *)FUN_003bd454(param_1,pbVar26);
  bVar27 = *pbVar18;
  pbVar20 = pbVar26;
  pbVar19 = local_80;
  if ((bVar27 == 0x3a) && (pbVar18[1] == 0x3a)) {
    pbVar20 = pbVar18 + 2;
    *pbVar18 = 0;
    pbVar18 = (byte *)FUN_003bd454(param_1,pbVar20);
    bVar27 = *pbVar18;
    pbVar19 = pbVar26;
  }
  pbVar26 = pbVar18;
  if (-1 < (char)bVar27) {
    do {
      if ((*(ushort *)(*(long *)(param_1 + 8) + (ulong)bVar27 * 2) & 0x18) != 0x10) break;
      pbVar26 = pbVar26 + 1;
      bVar27 = *pbVar26;
    } while (-1 < (char)bVar27);
  }
  iVar7 = strncmp((char *)pbVar20,".pragma",7);
  if (iVar7 != 0) {
LAB_003bc79c:
    iVar7 = strncmp((char *)pbVar20,".include",8);
    if (iVar7 == 0) goto LAB_003bca28;
    if (bVar27 != 0x3d) goto LAB_003bcfbc;
    *pbVar18 = 0;
    pbVar26 = pbVar26 + 1;
    bVar27 = *pbVar26;
    if (-1 < (char)bVar27) {
      do {
        if ((*(ushort *)(*(long *)(param_1 + 8) + (ulong)bVar27 * 2) & 0x18) != 0x10) break;
        pbVar26 = pbVar26 + 1;
        bVar27 = *pbVar26;
      } while (-1 < (char)bVar27);
    }
    FUN_003bd9cc(param_1,pbVar26);
    lVar22 = FUN_003c83a4(0x18,"crypto/conf/conf_def.c",0x216);
    if (lVar22 == 0) goto LAB_003bcdd0;
    lVar21 = FUN_003ca2f4(pbVar20,"crypto/conf/conf_def.c",0x218);
    *(undefined8 *)(lVar22 + 0x10) = 0;
    *(long *)(lVar22 + 8) = lVar21;
    if ((lVar21 == 0) ||
       (iVar7 = FUN_003bd4c8(param_1,pbVar19,(undefined8 *)(lVar22 + 0x10),pbVar26), iVar7 == 0))
    goto LAB_003bcdd0;
    iVar7 = strcmp((char *)pbVar19,(char *)local_80);
    lVar21 = local_b8;
    if ((iVar7 != 0) &&
       ((lVar21 = FUN_003bdc18(param_1,pbVar19), lVar21 == 0 &&
        (lVar21 = FUN_003be09c(param_1,pbVar19), lVar21 == 0)))) {
      FUN_00379868(0,0);
      FUN_0037995c("crypto/conf/conf_def.c",0x225,"def_load_bio");
      uVar16 = 0x67;
LAB_003bd060:
      FUN_00379a5c(0xe,uVar16,0);
      goto LAB_003bcdd0;
    }
    iVar7 = FUN_003bdca0(param_1,lVar21,lVar22);
    if (iVar7 == 0) {
      FUN_00379868();
      FUN_0037995c("crypto/conf/conf_def.c",0x22b,"def_load_bio");
      uVar16 = 0x8000e;
      goto LAB_003bd060;
    }
    goto LAB_003bc8c8;
  }
  if (pbVar26 == pbVar20 + 7) {
    pbVar20 = pbVar26;
    if (bVar27 != 0x3d) goto LAB_003bc79c;
LAB_003bc8dc:
    pbVar26 = pbVar26 + 1;
    bVar27 = *pbVar26;
    if (-1 < (char)bVar27) {
      do {
        if ((*(ushort *)(*(long *)(param_1 + 8) + (ulong)bVar27 * 2) & 0x18) != 0x10) break;
        pbVar26 = pbVar26 + 1;
        bVar27 = *pbVar26;
      } while (-1 < (char)bVar27);
    }
  }
  else if (bVar27 == 0x3d) goto LAB_003bc8dc;
  FUN_003bd9cc(param_1,pbVar26);
  pbVar18 = (byte *)strchr((char *)pbVar26,0x3a);
  if (((pbVar18 == (byte *)0x0) || (pbVar18 == pbVar26)) || (pbVar20 = pbVar18 + 1, *pbVar20 == 0))
  {
    FUN_00379868();
    FUN_0037995c("crypto/conf/conf_def.c",0x196,"def_load_bio");
    FUN_00379a5c(0xe,0x7a,0);
    lVar22 = 0;
    goto LAB_003bcdd0;
  }
  *pbVar18 = 0;
  FUN_003bd9cc(param_1,pbVar26);
  bVar27 = pbVar18[1];
  if (-1 < (char)bVar27) {
    do {
      if ((*(ushort *)(*(long *)(param_1 + 8) + (ulong)bVar27 * 2) & 0x18) != 0x10) break;
      pbVar20 = pbVar20 + 1;
      bVar27 = *pbVar20;
    } while (-1 < (char)bVar27);
  }
  iVar7 = strcmp((char *)pbVar26,"dollarid");
  if (iVar7 == 0) {
    iVar7 = FUN_003bda18(pbVar20,param_1 + 0x18);
  }
  else {
    iVar7 = strcmp((char *)pbVar26,"abspath");
    if (iVar7 != 0) {
      iVar7 = strcmp((char *)pbVar26,"includedir");
      if (iVar7 == 0) {
        FUN_003c86b4(*(undefined8 *)(param_1 + 0x20),"crypto/conf/conf_def.c",0x1ac);
        lVar22 = FUN_003ca2f4(pbVar20,"crypto/conf/conf_def.c",0x1ad);
        *(long *)(param_1 + 0x20) = lVar22;
        if (lVar22 == 0) goto LAB_003bcf60;
      }
      goto LAB_003bc8c8;
    }
    iVar7 = FUN_003bda18(pbVar20,param_1 + 0x1c);
  }
  if (iVar7 == 0) goto LAB_003bcf60;
LAB_003bc8c8:
  uVar29 = 0;
LAB_003bc2c8:
  lVar22 = FUN_00387ed0(lVar8,(long)(int)(uVar29 + 0x200));
  bVar6 = false;
  if (lVar22 == 0) goto LAB_003bcf30;
  goto LAB_003bc2e0;
code_r0x003bc5d4:
  pbVar26 = pbVar18 + 1;
  bVar27 = *pbVar18;
  uVar28 = (ulong)bVar27;
  pbVar18 = pbVar26;
  if ((char)bVar27 < '\0') goto LAB_003bc6f8;
  goto LAB_003bc5c4;
LAB_003bc6f8:
  pbVar26 = pbVar26 + -1;
  goto LAB_003bc6fc;
LAB_003bca28:
  if ((pbVar26 == pbVar20 + 8) && (bVar27 != 0x3d)) {
LAB_003bcfbc:
    FUN_00379868();
    FUN_0037995c("crypto/conf/conf_def.c",0x20d,"def_load_bio");
    FUN_00379a5c(0xe,0x65,"HERE-->%s",pbVar26);
    lVar22 = 0;
    goto LAB_003bcdd0;
  }
  local_78[0] = (char *)0x0;
  pcVar12 = (char *)FUN_003c5634("OPENSSL_CONF_INCLUDE");
  if (pcVar12 == (char *)0x0) {
    pcVar12 = *(char **)(param_1 + 0x20);
  }
  if (*pbVar26 == 0x3d) {
    pbVar26 = pbVar26 + 1;
    bVar27 = *pbVar26;
    if (-1 < (char)bVar27) {
      do {
        if ((*(ushort *)(*(long *)(param_1 + 8) + (ulong)bVar27 * 2) & 0x18) != 0x10) break;
        pbVar26 = pbVar26 + 1;
        bVar27 = *pbVar26;
      } while (-1 < (char)bVar27);
    }
  }
  FUN_003bd9cc(param_1,pbVar26);
  iVar7 = FUN_003bd4c8(param_1,pbVar19,local_78,pbVar26);
  __s_01 = local_78[0];
  if (iVar7 == 0) goto LAB_003bd180;
  if ((pcVar12 == (char *)0x0) || (*local_78[0] == '/')) {
LAB_003bcb80:
    if ((*(int *)(param_1 + 0x1c) == 0) || (*__s_01 == '/')) {
      lVar22 = FUN_003bdae0(__s_01,&local_90,&local_88);
      if (__s_01 != local_88) {
        FUN_003c86b4(__s_01,"crypto/conf/conf_def.c",499);
      }
      if (lVar22 == 0) {
LAB_003bcd4c:
        lVar15 = FUN_00387ed0(lVar8,0x200);
        bVar6 = false;
        if (lVar15 == 0) goto LAB_003bcf30;
        goto LAB_003bc2b4;
      }
      if ((lVar10 == 0) && (lVar10 = FUN_0040bf0c(), lVar10 == 0)) {
        FUN_00379868();
        uVar16 = 0x1fe;
      }
      else {
        iVar7 = FUN_0040c89c(lVar10,lVar15);
        param_2 = lVar22;
        if (iVar7 != 0) goto LAB_003bcd4c;
        FUN_00379868();
        uVar16 = 0x204;
      }
      FUN_0037995c("crypto/conf/conf_def.c",uVar16,"def_load_bio");
      FUN_00379a5c(0xe,0x8000f,0);
      FUN_0037db50(lVar22);
      goto LAB_003bd180;
    }
    FUN_00379868();
    FUN_0037995c("crypto/conf/conf_def.c",0x1e9,"def_load_bio");
    FUN_00379a5c(0xe,0x7d,0);
    uVar16 = 0x1ea;
  }
  else {
    sVar13 = strlen(pcVar12);
    sVar14 = strlen(__s_01);
    lVar22 = sVar13 + sVar14;
    __s_00 = (char *)FUN_003c83a4(lVar22 + 2,"crypto/conf/conf_def.c",0x1d8);
    if (__s_00 != (char *)0x0) {
      FUN_003ca460(__s_00,pcVar12,lVar22 + 2);
      if ((*__s_00 == '\0') || (sVar13 = strlen(__s_00), __s_00[sVar13 - 1] != '/')) {
        FUN_003ca4e8(__s_00,&DAT_001c55aa,lVar22 + 2);
      }
      FUN_003ca4e8(__s_00,__s_01,lVar22 + 2);
      FUN_003c86b4(__s_01,"crypto/conf/conf_def.c",0x1e2);
      __s_01 = __s_00;
      goto LAB_003bcb80;
    }
    uVar16 = 0x1da;
  }
  FUN_003c86b4(__s_01,"crypto/conf/conf_def.c",uVar16);
LAB_003bd180:
  lVar22 = 0;
  goto LAB_003bcdd0;
}


// ===== 003bd1b0  FUN_003bd1b0 =====

undefined8 FUN_003bd1b0(long param_1,undefined8 param_2)

{
  FUN_003b91c8(*(undefined8 *)(param_1 + 0x10),FUN_003bdbec,param_2);
  return 1;
}


// ===== 003bd1d8  FUN_003bd1d8 =====

ushort FUN_003bd1d8(long param_1,uint param_2)

{
  if ((param_2 >> 7 & 1) == 0) {
    return *(ushort *)(*(long *)(param_1 + 8) + ((ulong)param_2 & 0xff) * 2) & 1;
  }
  return 0;
}


// ===== 003bd1f8  FUN_003bd1f8 =====

int FUN_003bd1f8(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xff) - 0x30;
}


// ===== 003bd204  FUN_003bd204 =====

undefined4 FUN_003bd204(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  lVar3 = FUN_00388570(param_2,&DAT_001d80ae);
  if (lVar3 != 0) {
    uVar1 = FUN_003bc200(param_1,lVar3,param_3);
    FUN_0037db50(lVar3);
    return uVar1;
  }
  uVar2 = FUN_0037a744();
  uVar5 = 0x7fffff;
  if ((int)uVar2 < 0) {
    uVar5 = 0x7fffffff;
  }
  FUN_00379868();
  if ((uVar5 & uVar2) == 0x80) {
    FUN_0037995c("crypto/conf/conf_def.c",0xb3,"def_load");
    uVar4 = 0x72;
  }
  else {
    FUN_0037995c("crypto/conf/conf_def.c",0xb5,"def_load");
    uVar4 = 0x80002;
  }
  FUN_00379a5c(0xe,uVar4,0);
  return 0;
}


// ===== 003bd2e0  FUN_003bd2e0 =====

/* WARNING: Removing unreachable block (ram,0x003bd3cc) */
/* WARNING: Removing unreachable block (ram,0x003bd420) */

long FUN_003bd2e0(char *param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  size_t sVar3;
  long lVar4;
  char *__s;
  char *pcVar5;
  
  sVar3 = strlen(param_1);
  lVar1 = sVar3 + 2;
LAB_003bd36c:
  do {
    __s = (char *)FUN_003ca178(param_2,param_1);
    if (__s == (char *)0x0) goto LAB_003bd424;
    sVar3 = strlen(__s);
    if (sVar3 < 6) {
      if (sVar3 != 5) goto LAB_003bd36c;
LAB_003bd3b0:
      iVar2 = FUN_003cab04(__s + (sVar3 - 4),&DAT_001cdd0e);
      if (iVar2 != 0) goto LAB_003bd36c;
    }
    else {
      iVar2 = FUN_003cab04(__s + (sVar3 - 5),".conf");
      if (iVar2 != 0) goto LAB_003bd3b0;
    }
    pcVar5 = (char *)FUN_003c8474(lVar1 + sVar3,"crypto/conf/conf_def.c",0x35b);
    if (pcVar5 == (char *)0x0) {
LAB_003bd424:
      FUN_003ca274(param_2);
      *param_2 = 0;
      return 0;
    }
    if (*pcVar5 == '\0') {
      FUN_003ca460(pcVar5,param_1,lVar1 + sVar3);
      FUN_003ca4e8(pcVar5,&DAT_001c55aa,lVar1 + sVar3);
    }
    FUN_003ca4e8(pcVar5,__s,lVar1 + sVar3);
    lVar4 = FUN_00388570(pcVar5,&DAT_001e6b9d);
    FUN_003c86b4(pcVar5,"crypto/conf/conf_def.c",0x371);
    if (lVar4 != 0) {
      return lVar4;
    }
  } while( true );
}


// ===== 003bd454  FUN_003bd454 =====

byte * FUN_003bd454(long param_1,byte *param_2)

{
  ushort uVar1;
  byte bVar2;
  byte *pbVar3;
  long lVar4;
  long lVar5;
  
  bVar2 = *param_2;
  if (-1 < (char)bVar2) {
    lVar4 = *(long *)(param_1 + 8);
    do {
      uVar1 = *(ushort *)(lVar4 + (ulong)bVar2 * 2);
      if ((uVar1 >> 5 & 1) == 0) {
        if ((*(ushort *)(lVar4 + (ulong)bVar2 * 2) & 0x307) == 0) {
          if (*(int *)(param_1 + 0x18) == 0) {
            return param_2;
          }
          if ((uVar1 >> 0xc & 1) == 0) {
            return param_2;
          }
        }
        pbVar3 = param_2 + 1;
      }
      else {
        lVar5 = (long)(char)param_2[1];
        if ((lVar5 < 0) || (pbVar3 = param_2 + 1, (*(ushort *)(lVar4 + lVar5 * 2) >> 3 & 1) == 0)) {
          pbVar3 = param_2 + 2;
        }
      }
      param_2 = pbVar3;
      bVar2 = *param_2;
    } while (-1 < (char)bVar2);
  }
  return param_2;
}


// ===== 003bd4c8  FUN_003bd4c8 =====

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_003bd4c8(long param_1,byte *param_2,long *param_3,byte *param_4)

{
  ushort uVar1;
  bool bVar2;
  byte bVar3;
  long *plVar4;
  size_t sVar5;
  long lVar6;
  char *__s;
  byte *pbVar7;
  byte *pbVar8;
  byte bVar9;
  char cVar10;
  byte bVar11;
  byte *pbVar12;
  byte bVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  int iVar16;
  ulong uVar17;
  byte *pbVar18;
  ulong uVar19;
  byte *pbVar20;
  
  plVar4 = (long *)FUN_00387e50();
  if (plVar4 == (long *)0x0) {
    return 0;
  }
  sVar5 = strlen((char *)param_4);
  lVar6 = FUN_00387ed0(plVar4,(long)((int)sVar5 + 1));
  if (lVar6 != 0) {
    uVar17 = 0;
    bVar3 = 0;
LAB_003bd550:
    while( true ) {
      bVar9 = *param_4;
      iVar16 = (int)uVar17;
      if ((char)bVar9 < '\0') goto LAB_003bd53c;
      lVar6 = *(long *)(param_1 + 8);
      uVar1 = *(ushort *)(lVar6 + (ulong)bVar9 * 2);
      if ((uVar1 >> 6 & 1) != 0) break;
      if ((uVar1 >> 10 & 1) == 0) {
        if ((uVar1 >> 5 & 1) == 0) {
          if ((uVar1 >> 3 & 1) != 0) goto LAB_003bd904;
          if (bVar9 == 0x24) {
            bVar13 = param_4[1];
            uVar19 = (ulong)bVar13;
            if (((*(int *)(param_1 + 0x18) != 0) && (uVar19 != 0x7b)) && (uVar19 != 0x28))
            goto LAB_003bd53c;
            if (uVar19 == 0x7b) {
              bVar9 = 0x7d;
              bVar13 = param_4[2];
joined_r0x003bd778:
              bVar2 = false;
              uVar19 = (ulong)bVar13;
              pbVar12 = param_4 + 2;
            }
            else {
              if (uVar19 == 0x28) {
                bVar9 = 0x29;
                bVar13 = param_4[2];
                goto joined_r0x003bd778;
              }
              bVar9 = 0;
              pbVar12 = param_4 + 1;
              bVar2 = true;
            }
            pbVar20 = pbVar12;
            pbVar7 = param_2;
            pbVar8 = pbVar12;
            if (-1 < (char)bVar13) {
              if (*(int *)(param_1 + 0x18) == 0) {
                do {
                  if ((*(ushort *)(lVar6 + uVar19 * 2) & 0x107) == 0) goto LAB_003bd7a4;
                  pbVar20 = pbVar20 + 1;
                  uVar19 = (ulong)*pbVar20;
                } while (-1 < (char)*pbVar20);
              }
              else {
                do {
                  if ((*(ushort *)(lVar6 + uVar19 * 2) & 0x1107) == 0) goto LAB_003bd7a4;
                  pbVar20 = pbVar20 + 1;
                  uVar19 = (ulong)*pbVar20;
                } while (-1 < (char)*pbVar20);
              }
            }
            pbVar12 = (byte *)0x0;
            goto LAB_003bd820;
          }
LAB_003bd53c:
          *(byte *)(plVar4[1] + (long)iVar16) = bVar9;
          uVar17 = (ulong)(iVar16 + 1);
          param_4 = param_4 + 1;
        }
        else {
          bVar9 = param_4[1];
          if ((-1 < (char)bVar9) && ((*(ushort *)(lVar6 + (ulong)bVar9 * 2) >> 3 & 1) != 0)) {
LAB_003bd904:
            *(undefined1 *)(plVar4[1] + (long)iVar16) = 0;
            FUN_003c86b4(*param_3,"crypto/conf/conf_def.c",0x317);
            *param_3 = plVar4[1];
            FUN_003c86b4(plVar4,"crypto/conf/conf_def.c",0x319);
            return 1;
          }
          if (bVar9 == 0x62) {
            bVar13 = 8;
          }
          else if (bVar9 == 0x72) {
            bVar13 = 0xd;
          }
          else if (bVar9 == 0x6e) {
            bVar13 = 10;
          }
          else {
            bVar13 = 9;
            if (bVar9 != 0x74) {
              bVar13 = bVar9;
            }
          }
          *(byte *)(plVar4[1] + (long)iVar16) = bVar13;
          uVar17 = (ulong)(iVar16 + 1);
          param_4 = param_4 + 2;
        }
      }
      else {
        uVar17 = (long)iVar16;
        while( true ) {
          pbVar12 = param_4 + 1;
          bVar13 = *pbVar12;
          if (((-1 < (char)bVar13) &&
              ((*(ushort *)(*(long *)(param_1 + 8) + (ulong)bVar13 * 2) >> 3 & 1) != 0)) ||
             ((pbVar8 = pbVar12, bVar13 == bVar9 &&
              (pbVar8 = param_4 + 2, bVar13 = bVar9, *pbVar8 != bVar9)))) break;
          *(byte *)(plVar4[1] + uVar17) = bVar13;
          param_4 = pbVar8;
          uVar17 = uVar17 + 1;
        }
        param_4 = param_4 + 2;
        if (bVar13 != bVar9) {
          param_4 = pbVar12;
        }
      }
    }
    pbVar12 = param_4;
    uVar17 = (long)iVar16;
LAB_003bd5c4:
    pbVar8 = pbVar12 + 1;
    bVar13 = *pbVar8;
    if ((char)bVar13 < '\0') {
      bVar11 = bVar9;
      if (bVar13 == bVar9) goto LAB_003bd684;
LAB_003bd5b0:
      *(byte *)(plVar4[1] + uVar17) = bVar13;
      pbVar12 = pbVar8;
      uVar17 = uVar17 + 1;
      goto LAB_003bd5c4;
    }
    bVar11 = bVar13;
    if (bVar13 != bVar9) {
      uVar1 = *(ushort *)(*(long *)(param_1 + 8) + (ulong)bVar13 * 2);
      if ((uVar1 >> 3 & 1) == 0) {
        if ((uVar1 >> 5 & 1) == 0) goto LAB_003bd5b0;
        pbVar8 = pbVar12 + 2;
        bVar13 = *pbVar8;
        if (((char)bVar13 < '\0') ||
           ((*(ushort *)(*(long *)(param_1 + 8) + (ulong)bVar13 * 2) >> 3 & 1) == 0))
        goto LAB_003bd5b0;
        lVar6 = 2;
        bVar11 = bVar13;
LAB_003bd688:
        param_4 = pbVar12 + lVar6;
        if (bVar11 == bVar9) {
          param_4 = pbVar12 + lVar6 + 1;
        }
        goto LAB_003bd550;
      }
    }
LAB_003bd684:
    lVar6 = 1;
    goto LAB_003bd688;
  }
LAB_003bd9a0:
  FUN_00387e64(plVar4);
  return 0;
LAB_003bd7a4:
  if (uVar19 == 0x3a) {
    if (pbVar20[1] == 0x3a) {
      *pbVar20 = 0;
      pbVar8 = pbVar20 + 2;
      uVar19 = (ulong)*pbVar8;
      pbVar7 = pbVar12;
      pbVar12 = pbVar20;
      pbVar20 = pbVar8;
      if ((char)*pbVar8 < '\0') {
        bVar3 = 0x3a;
      }
      else {
        do {
          uVar1 = *(ushort *)(*(long *)(param_1 + 8) + uVar19 * 2);
          if (((uVar1 & 0x107) == 0) &&
             ((bVar3 = 0x3a, *(int *)(param_1 + 0x18) == 0 || ((uVar1 >> 0xc & 1) == 0))))
          goto LAB_003bd820;
          pbVar20 = pbVar20 + 1;
          uVar19 = (ulong)*pbVar20;
        } while (-1 < (char)*pbVar20);
        bVar3 = 0x3a;
      }
      goto LAB_003bd820;
    }
    uVar19 = 0x3a;
  }
  pbVar12 = (byte *)0x0;
LAB_003bd820:
  *pbVar20 = 0;
  bVar13 = (byte)uVar19;
  pbVar18 = pbVar20;
  if (!bVar2) {
    if (bVar9 != bVar13) {
      uVar14 = 0x66;
      uVar15 = 0x2e3;
      goto LAB_003bd974;
    }
    pbVar18 = pbVar20 + 1;
  }
  __s = (char *)FUN_003bdd40(param_1,pbVar7,pbVar8);
  if (pbVar12 != (byte *)0x0) {
    *pbVar12 = bVar3;
  }
  *pbVar20 = bVar13;
  if (__s == (char *)0x0) {
    uVar14 = 0x68;
    uVar15 = 0x2f7;
    goto LAB_003bd974;
  }
  sVar5 = strlen(__s);
  if ((byte *)0x10000 < param_4 + *plVar4 + (sVar5 - (long)pbVar18)) {
    uVar14 = 0x74;
    uVar15 = 0x2fc;
    goto LAB_003bd974;
  }
  lVar6 = FUN_00388074(plVar4);
  if (lVar6 == 0) goto LAB_003bd95c;
  cVar10 = *__s;
  if (cVar10 != '\0') {
    lVar6 = (long)iVar16;
    do {
      __s = __s + 1;
      uVar17 = (ulong)((int)uVar17 + 1);
      *(char *)(plVar4[1] + lVar6) = cVar10;
      lVar6 = lVar6 + 1;
      cVar10 = *__s;
    } while (cVar10 != '\0');
  }
  *pbVar20 = bVar13;
  param_4 = pbVar18;
  goto LAB_003bd550;
LAB_003bd95c:
  uVar15 = 0x300;
  uVar14 = 0x80007;
LAB_003bd974:
  FUN_00379868();
  FUN_0037995c("crypto/conf/conf_def.c",uVar15,"str_copy");
  FUN_00379a5c(0xe,uVar14,0);
  goto LAB_003bd9a0;
}


// ===== 003bd9cc  FUN_003bd9cc =====

void FUN_003bd9cc(long param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = param_2 + -1;
  while (((long)pcVar1[1] < 0 ||
         ((*(ushort *)(*(long *)(param_1 + 8) + (long)pcVar1[1] * 2) >> 3 & 1) == 0))) {
    pcVar1 = pcVar1 + 1;
  }
  do {
    pcVar2 = pcVar1;
    if ((pcVar2 < param_2) || ((long)*pcVar2 < 0)) break;
    pcVar1 = pcVar2 + -1;
  } while ((*(ushort *)(*(long *)(param_1 + 8) + (long)*pcVar2 * 2) >> 4 & 1) != 0);
  pcVar2[1] = '\0';
  return;
}


// ===== 003bda18  FUN_003bda18 =====

undefined8 FUN_003bda18(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_003cab04(param_1,&DAT_001e8da3);
  if ((iVar1 == 0) || (iVar1 = FUN_003cab04(param_1,&DAT_001d5ef8), iVar1 == 0)) {
    *param_2 = 1;
    return 1;
  }
  iVar1 = FUN_003cab04(param_1,&DAT_001d3a54);
  if ((iVar1 != 0) && (iVar1 = FUN_003cab04(param_1,"false"), iVar1 != 0)) {
    FUN_00379868();
    FUN_0037995c("crypto/conf/conf_def.c",0xca,"parsebool");
    FUN_00379a5c(0xe,0x7a,0);
    return 0;
  }
  *param_2 = 0;
  return 1;
}


// ===== 003bdae0  FUN_003bdae0 =====

long FUN_003bdae0(char *param_1,long *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint local_a0;
  
  iVar1 = stat(param_1,(stat *)&stack0xffffffffffffff50);
  if (iVar1 < 0) {
    FUN_00379868();
    FUN_0037995c("crypto/conf/conf_def.c",0x32d,"process_include");
    puVar3 = (undefined4 *)__errno();
    uVar5 = *puVar3;
    pcVar6 = "calling stat(%s)";
    uVar2 = 2;
  }
  else {
    if ((local_a0 & 0xf000) != 0x4000) {
      lVar4 = FUN_00388570(param_1,&DAT_001e6b9d);
      return lVar4;
    }
    if (*param_2 == 0) {
      lVar4 = FUN_003bd2e0(param_1,param_2);
      if (lVar4 == 0) {
        return 0;
      }
      *param_3 = param_1;
      return lVar4;
    }
    FUN_00379868();
    FUN_0037995c("crypto/conf/conf_def.c",0x334,"process_include");
    pcVar6 = "%s";
    uVar2 = 0xe;
    uVar5 = 0x6f;
  }
  FUN_00379a5c(uVar2,uVar5,pcVar6,param_1);
  return 0;
}


// ===== 003bdbec  FUN_003bdbec =====

void FUN_003bdbec(undefined8 *param_1,undefined8 param_2)

{
  if (param_1[1] != 0) {
    FUN_0037b9f8(param_2,"[%s] %s=%s\n",*param_1,param_1[1],param_1[2]);
    return;
  }
  FUN_0037b9f8(param_2,"[[%s]]\n",*param_1);
  return;
}


// ===== 003bdc18  FUN_003bdc18 =====

long FUN_003bdc18(long param_1,long param_2)

{
  long lVar1;
  long local_28 [3];
  
  lVar1 = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    lVar1 = *(long *)(param_1 + 0x10);
    local_28[1] = 0;
    if (lVar1 != 0) {
      local_28[0] = param_2;
      lVar1 = FUN_003b908c(lVar1,local_28);
    }
  }
  return lVar1;
}


// ===== 003bdc54  FUN_003bdc54 =====

long FUN_003bdc54(long param_1,long param_2)

{
  long lVar1;
  long local_28 [3];
  
  if ((param_1 != 0) && (param_2 != 0)) {
    local_28[1] = 0;
    if (*(long *)(param_1 + 0x10) != 0) {
      local_28[0] = param_2;
      lVar1 = FUN_003b908c(*(long *)(param_1 + 0x10),local_28);
      if (lVar1 != 0) {
        lVar1 = *(long *)(lVar1 + 0x10);
      }
      return lVar1;
    }
  }
  return 0;
}


// ===== 003bdca0  FUN_003bdca0 =====

undefined8 FUN_003bdca0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = param_2[2];
  *param_3 = *param_2;
  uVar1 = FUN_0040c89c(uVar3,param_3);
  if ((int)uVar1 != 0) {
    lVar2 = FUN_003b8ca4(*(undefined8 *)(param_1 + 0x10),param_3);
    if (lVar2 != 0) {
      FUN_0040c350(uVar3,lVar2);
      FUN_003c86b4(*(undefined8 *)(lVar2 + 8),"crypto/conf/conf_api.c",0x3b);
      FUN_003c86b4(*(undefined8 *)(lVar2 + 0x10),"crypto/conf/conf_api.c",0x3c);
      FUN_003c86b4(lVar2,"crypto/conf/conf_api.c",0x3d);
    }
    uVar1 = 1;
  }
  return uVar1;
}


// ===== 003bdd40  FUN_003bdd40 =====

long FUN_003bdd40(long param_1,char *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  char *local_48;
  long lStack_40;
  
  if (param_3 == 0) {
    return 0;
  }
  if (param_1 == 0) {
    lVar2 = FUN_003c5634(param_3);
    return lVar2;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    return 0;
  }
  if (param_2 != (char *)0x0) {
    local_48 = param_2;
    lStack_40 = param_3;
    lVar2 = FUN_003b908c(*(long *)(param_1 + 0x10),&local_48);
    if (lVar2 != 0) goto LAB_003bddc4;
    iVar1 = strcmp(param_2,"ENV");
    if ((iVar1 == 0) && (lVar2 = FUN_003c5634(param_3), lVar2 != 0)) {
      return lVar2;
    }
  }
  local_48 = "default";
  lStack_40 = param_3;
  lVar2 = FUN_003b908c(*(undefined8 *)(param_1 + 0x10),&local_48);
  if (lVar2 == 0) {
    return 0;
  }
LAB_003bddc4:
  return *(long *)(lVar2 + 0x10);
}


// ===== 003bde30  FUN_003bde30 =====

long FUN_003bde30(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
      lVar1 = FUN_003b8a34(FUN_003bde7c,FUN_003bdeb4);
      *(long *)(param_1 + 0x10) = lVar1;
      if (lVar1 == 0) {
        return 0;
      }
    }
    param_1 = 1;
  }
  return param_1;
}


// ===== 003bde7c  FUN_003bde7c =====

ulong FUN_003bde7c(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = FUN_003b8b18(*param_1);
  uVar2 = FUN_003b8b18(param_1[1]);
  return uVar2 ^ lVar1 << 2;
}


// ===== 003bdeb4  FUN_003bdeb4 =====

uint FUN_003bdeb4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  char *__s1;
  char *__s2;
  
  if ((char *)*param_1 != (char *)*param_2) {
    uVar1 = strcmp((char *)*param_1,(char *)*param_2);
    if (uVar1 != 0) {
      return uVar1;
    }
  }
  __s1 = (char *)param_1[1];
  __s2 = (char *)param_2[1];
  if (__s1 != (char *)0x0) {
    if (__s2 != (char *)0x0) {
      uVar1 = strcmp(__s1,__s2);
      return uVar1;
    }
    return (uint)(__s1 != (char *)0x0);
  }
  uVar1 = 0;
  if (__s2 != (char *)0x0) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


// ===== 003bdf38  FUN_003bdf38 =====

void FUN_003bdf38(long param_1)

{
  if (param_1 != 0) {
    FUN_003c86b4(*(undefined8 *)(param_1 + 0x20),"crypto/conf/conf_api.c",0x8d);
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_003b92b4(*(long *)(param_1 + 0x10),0);
      FUN_003b91c8(*(undefined8 *)(param_1 + 0x10),FUN_003bdfb0,*(undefined8 *)(param_1 + 0x10));
      FUN_003b9160(*(undefined8 *)(param_1 + 0x10),FUN_003bdfcc);
      FUN_003b8b74(*(undefined8 *)(param_1 + 0x10));
      return;
    }
  }
  return;
}


// ===== 003bdfb0  FUN_003bdfb0 =====

void FUN_003bdfb0(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_003b8ea4(param_2,param_1);
    return;
  }
  return;
}


// ===== 003bdfcc  FUN_003bdfcc =====

void FUN_003bdfcc(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  
  if (param_1[1] != 0) {
    return;
  }
  uVar3 = param_1[2];
  iVar1 = FUN_0040caf8(uVar3);
  if (0 < iVar1) {
    uVar4 = iVar1 + 1;
    do {
      lVar2 = FUN_0040cb0c(uVar3,uVar4 - 2);
      FUN_003c86b4(*(undefined8 *)(lVar2 + 0x10),"crypto/conf/conf_api.c",0xb0);
      FUN_003c86b4(*(undefined8 *)(lVar2 + 8),"crypto/conf/conf_api.c",0xb1);
      FUN_003c86b4(lVar2,"crypto/conf/conf_api.c",0xb2);
      uVar4 = uVar4 - 1;
    } while (1 < uVar4);
  }
  FUN_0040bd78(uVar3);
  FUN_003c86b4(*param_1,"crypto/conf/conf_api.c",0xb5);
  FUN_003c86b4(param_1,"crypto/conf/conf_api.c",0xb6);
  return;
}


// ===== 003be09c  FUN_003be09c =====

undefined8 * FUN_003be09c(long param_1,char *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  size_t sVar4;
  void *__dest;
  undefined8 uVar5;
  long lVar6;
  
  lVar2 = FUN_0040bf0c();
  if ((lVar2 == 0) ||
     (puVar3 = (undefined8 *)FUN_003c83a4(0x18,"crypto/conf/conf_api.c",0xc1),
     puVar3 == (undefined8 *)0x0)) {
    FUN_0040bd78(lVar2);
    puVar3 = (undefined8 *)0x0;
  }
  else {
    sVar4 = strlen(param_2);
    sVar4 = (size_t)((int)sVar4 + 1);
    __dest = (void *)FUN_003c83a4(sVar4,"crypto/conf/conf_api.c",0xc4);
    *puVar3 = __dest;
    if (__dest != (void *)0x0) {
      memcpy(__dest,param_2,sVar4);
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      puVar3[1] = 0;
      puVar3[2] = lVar2;
      lVar6 = FUN_003b8ca4(uVar5,puVar3);
      if ((lVar6 == 0) && (iVar1 = FUN_003b92bc(*(undefined8 *)(param_1 + 0x10)), iVar1 < 1)) {
        return puVar3;
      }
    }
    FUN_0040bd78(lVar2);
    FUN_003c86b4(*puVar3,"crypto/conf/conf_api.c",0xd3);
  }
  FUN_003c86b4(puVar3,"crypto/conf/conf_api.c",0xd4);
  return (undefined8 *)0x0;
}


// ===== 003be198  thunk_FUN_003be19c =====

long * thunk_FUN_003be19c(void)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  
  plVar2 = (long *)FUN_003c8474(0x48,"crypto/dso/dso_lib.c",0x11);
  if (plVar2 != (long *)0x0) {
    lVar3 = FUN_0040bf0c();
    plVar2[1] = lVar3;
    if (lVar3 == 0) {
      FUN_00379868();
      FUN_0037995c("crypto/dso/dso_lib.c",0x17,"DSO_new_method");
      FUN_00379a5c(0x25,0x8000f,0);
      FUN_003c86b4(plVar2,"crypto/dso/dso_lib.c",0x18);
      return (long *)0x0;
    }
    lVar3 = FUN_003bebf4();
    pcVar4 = *(code **)(lVar3 + 0x38);
    *plVar2 = lVar3;
    *(undefined4 *)(plVar2 + 2) = 1;
    if ((pcVar4 != (code *)0x0) && (iVar1 = (*pcVar4)(plVar2), iVar1 == 0)) {
      FUN_003be278(plVar2);
      return (long *)0x0;
    }
  }
  return plVar2;
}


// ===== 003be19c  FUN_003be19c =====

long * FUN_003be19c(void)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  
  plVar2 = (long *)FUN_003c8474(0x48,"crypto/dso/dso_lib.c",0x11);
  if (plVar2 != (long *)0x0) {
    lVar3 = FUN_0040bf0c();
    plVar2[1] = lVar3;
    if (lVar3 == 0) {
      FUN_00379868();
      FUN_0037995c("crypto/dso/dso_lib.c",0x17,"DSO_new_method");
      FUN_00379a5c(0x25,0x8000f,0);
      FUN_003c86b4(plVar2,"crypto/dso/dso_lib.c",0x18);
      return (long *)0x0;
    }
    lVar3 = FUN_003bebf4();
    pcVar4 = *(code **)(lVar3 + 0x38);
    *plVar2 = lVar3;
    *(undefined4 *)(plVar2 + 2) = 1;
    if ((pcVar4 != (code *)0x0) && (iVar1 = (*pcVar4)(plVar2), iVar1 == 0)) {
      FUN_003be278(plVar2);
      return (long *)0x0;
    }
  }
  return plVar2;
}


// ===== 003be278  FUN_003be278 =====

undefined8 FUN_003be278(long *param_1)

{
  int iVar1;
  long lVar2;
  
  if ((param_1 != (long *)0x0) &&
     (lVar2 = param_1[2], iVar1 = (int)lVar2 + -1, *(int *)(param_1 + 2) = iVar1,
     iVar1 == 0 || (int)lVar2 < 1)) {
    lVar2 = *param_1;
    if (((*(byte *)((long)param_1 + 0x14) >> 2 & 1) == 0) &&
       (*(code **)(lVar2 + 0x10) != (code *)0x0)) {
      iVar1 = (**(code **)(lVar2 + 0x10))();
      if (iVar1 == 0) {
        FUN_00379868();
        FUN_0037995c("crypto/dso/dso_lib.c",0x40,"DSO_free");
        FUN_00379a5c(0x25,0x6b,0);
        return 0;
      }
      lVar2 = *param_1;
    }
    if (*(code **)(lVar2 + 0x40) != (code *)0x0) {
      iVar1 = (**(code **)(lVar2 + 0x40))();
      if (iVar1 == 0) {
        FUN_00379868();
        FUN_0037995c("crypto/dso/dso_lib.c",0x46,"DSO_free");
        FUN_00379a5c(0x25,0x66,0);
        return 0;
      }
    }
    FUN_0040bd78(param_1[1]);
    FUN_003c86b4(param_1[7],"crypto/dso/dso_lib.c",0x4b);
    FUN_003c86b4(param_1[8],"crypto/dso/dso_lib.c",0x4c);
    FUN_003c86b4(param_1,"crypto/dso/dso_lib.c",0x4e);
    return 1;
  }
  return 1;
}


// ===== 003be3b4  FUN_003be3b4 =====

ulong FUN_003be3b4(ulong param_1)

{
  if (param_1 != 0) {
    param_1 = (ulong)*(uint *)(param_1 + 0x14);
  }
  return param_1;
}


// ===== 003be3c0  FUN_003be3c0 =====

bool FUN_003be3c0(long param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    *(int *)(param_1 + 0x10) = iVar1 + 1;
    return 0 < iVar1;
  }
  FUN_00379868();
  FUN_0037995c("crypto/dso/dso_lib.c",0x5c,"DSO_up_ref");
  FUN_00379a5c(0x25,0xc0102,0);
  return false;
}


// ===== 003be420  FUN_003be420 =====

long * FUN_003be420(long *param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_1 == (long *)0x0) {
    plVar2 = (long *)FUN_003be19c();
    if (plVar2 == (long *)0x0) {
      FUN_00379868();
      FUN_0037995c("crypto/dso/dso_lib.c",0x70,"DSO_load");
      FUN_00379a5c(0x25,0x80025,0);
      return (long *)0x0;
    }
    *(undefined4 *)((long)plVar2 + 0x14) = param_4;
    lVar3 = plVar2[7];
  }
  else {
    lVar3 = param_1[7];
    plVar2 = param_1;
  }
  if (lVar3 == 0) {
    if (param_2 == 0) {
      uVar4 = 0x6f;
      uVar5 = 0x8b;
    }
    else {
      if (plVar2[8] == 0) {
        lVar3 = FUN_003ca2f4(param_2,"crypto/dso/dso_lib.c",0xee);
        if (lVar3 != 0) {
          FUN_003c86b4(plVar2[7],"crypto/dso/dso_lib.c",0xf1);
          plVar2[7] = lVar3;
          if (*(code **)(*plVar2 + 8) == (code *)0x0) {
            uVar4 = 0x6c;
            uVar5 = 0x8f;
          }
          else {
            iVar1 = (**(code **)(*plVar2 + 8))(plVar2);
            if (iVar1 != 0) {
              return plVar2;
            }
            uVar4 = 0x67;
            uVar5 = 0x93;
          }
          goto LAB_003be504;
        }
      }
      else {
        FUN_00379868();
        FUN_0037995c("crypto/dso/dso_lib.c",0xea,"DSO_set_filename");
        FUN_00379a5c(0x25,0x6e,0);
      }
      uVar4 = 0x70;
      uVar5 = 0x86;
    }
  }
  else {
    uVar4 = 0x6e;
    uVar5 = 0x7d;
  }
LAB_003be504:
  FUN_00379868();
  FUN_0037995c("crypto/dso/dso_lib.c",uVar5,"DSO_load");
  FUN_00379a5c(0x25,uVar4,0);
  if (param_1 == (long *)0x0) {
    FUN_003be278(plVar2);
    return (long *)0x0;
  }
  return (long *)0x0;
}


// ===== 003be5e0  FUN_003be5e0 =====

long FUN_003be5e0(long *param_1,int param_2,uint param_3)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == (long *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/dso/dso_lib.c",0xbe,"DSO_ctrl");
    FUN_00379a5c(0x25,0xc0102,0);
    return -1;
  }
  if (param_2 == 3) {
    *(uint *)((long)param_1 + 0x14) = *(uint *)((long)param_1 + 0x14) | param_3;
    return 0;
  }
  if (param_2 == 2) {
    *(uint *)((long)param_1 + 0x14) = param_3;
    return 0;
  }
  if (param_2 == 1) {
    return (long)*(int *)((long)param_1 + 0x14);
  }
  if ((*param_1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x20), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x003be688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar1 = (*UNRECOVERED_JUMPTABLE)();
    return lVar1;
  }
  FUN_00379868();
  FUN_0037995c("crypto/dso/dso_lib.c",0xd2,"DSO_ctrl");
  FUN_00379a5c(0x25,0x6c,0);
  return -1;
}


// ===== 003be6c4  FUN_003be6c4 =====

undefined8 FUN_003be6c4(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    FUN_00379868();
    FUN_0037995c("crypto/dso/dso_lib.c",0xe6,"DSO_set_filename");
    uVar2 = 0xc0102;
  }
  else {
    if (*(long *)(param_1 + 0x40) == 0) {
      lVar1 = FUN_003ca2f4(param_2,"crypto/dso/dso_lib.c",0xee);
      if (lVar1 == 0) {
        return 0;
      }
      FUN_003c86b4(*(undefined8 *)(param_1 + 0x38),"crypto/dso/dso_lib.c",0xf1);
      *(long *)(param_1 + 0x38) = lVar1;
      return 1;
    }
    FUN_00379868();
    FUN_0037995c("crypto/dso/dso_lib.c",0xea,"DSO_set_filename");
    uVar2 = 0x6e;
  }
  FUN_00379a5c(0x25,uVar2,0);
  return 0;
}


// ===== 003be794  FUN_003be794 =====

long FUN_003be794(long *param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0xa3;
  uVar2 = 0xc0102;
  if ((param_1 != (long *)0x0) && (param_2 != 0)) {
    if (*(code **)(*param_1 + 0x18) == (code *)0x0) {
      uVar2 = 0x6c;
      uVar3 = 0xa7;
    }
    else {
      lVar1 = (**(code **)(*param_1 + 0x18))();
      if (lVar1 != 0) {
        return lVar1;
      }
      uVar2 = 0x6a;
      uVar3 = 0xab;
    }
  }
  FUN_00379868();
  FUN_0037995c("crypto/dso/dso_lib.c",uVar3,"DSO_bind_func");
  FUN_00379a5c(0x25,uVar2,0);
  return 0;
}


// ===== 003be824  FUN_003be824 =====

undefined8 FUN_003be824(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x38);
  }
  FUN_00379868();
  FUN_0037995c("crypto/dso/dso_lib.c",0xdb,"DSO_get_filename");
  FUN_00379a5c(0x25,0xc0102,0);
  return 0;
}


// ===== 003be874  FUN_003be874 =====

undefined8 FUN_003be874(long *param_1,long param_2)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((param_1 == (long *)0x0) || (param_2 == 0)) {
    FUN_00379868();
    FUN_0037995c("crypto/dso/dso_lib.c",0xfb,"DSO_merge");
    FUN_00379a5c(0x25,0xc0102,0);
  }
  else if ((*(byte *)((long)param_1 + 0x14) & 1) == 0) {
    UNRECOVERED_JUMPTABLE = (code *)param_1[6];
    if ((UNRECOVERED_JUMPTABLE == (code *)0x0) &&
       (UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x30), UNRECOVERED_JUMPTABLE == (code *)0x0))
    {
      return 0;
    }
                    /* WARNING: Could not recover jumptable at 0x003be898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}


// ===== 003be8e0  FUN_003be8e0 =====

long FUN_003be8e0(long *param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  
  if (param_1 == (long *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/dso/dso_lib.c",0x10c,"DSO_convert_filename");
    FUN_00379a5c(0x25,0xc0102,0);
    return 0;
  }
  if ((param_2 == 0) && (param_2 = param_1[7], param_2 == 0)) {
    FUN_00379868();
    FUN_0037995c("crypto/dso/dso_lib.c",0x112,"DSO_convert_filename");
    FUN_00379a5c(0x25,0x6f,0);
    return 0;
  }
  if (((*(byte *)((long)param_1 + 0x14) & 1) == 0) &&
     (((pcVar2 = (code *)param_1[5], pcVar2 != (code *)0x0 ||
       (pcVar2 = *(code **)(*param_1 + 0x28), pcVar2 != (code *)0x0)) &&
      (lVar1 = (*pcVar2)(), lVar1 != 0)))) {
    return lVar1;
  }
  lVar1 = FUN_003ca2f4(param_2,"crypto/dso/dso_lib.c",0x11c);
  return lVar1;
}


// ===== 003be9d0  FUN_003be9d0 =====

undefined8 FUN_003be9d0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_003bebf4();
  if (*(code **)(lVar1 + 0x48) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003bea10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(lVar1 + 0x48))(param_1,param_2,param_3);
    return uVar2;
  }
  FUN_00379868();
  FUN_0037995c("crypto/dso/dso_lib.c",0x128,"DSO_pathbyaddr");
  FUN_00379a5c(0x25,0x6c,0);
  return 0xffffffff;
}


// ===== 003bea54  FUN_003bea54 =====

undefined8 FUN_003bea54(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_003bebf4();
  if (*(code **)(lVar3 + 0x48) == (code *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/dso/dso_lib.c",0x128,"DSO_pathbyaddr");
    FUN_00379a5c(0x25,0x6c,0);
    return 0;
  }
  iVar1 = (**(code **)(lVar3 + 0x48))(param_1,0,0);
  if (iVar1 < 0) {
    return 0;
  }
  lVar3 = FUN_003c83a4(iVar1,"crypto/dso/dso_lib.c",0x137);
  if (lVar3 == 0) {
LAB_003beb60:
    uVar5 = 0;
  }
  else {
    lVar4 = FUN_003bebf4();
    if (*(code **)(lVar4 + 0x48) == (code *)0x0) {
      FUN_00379868();
      FUN_0037995c("crypto/dso/dso_lib.c",0x128,"DSO_pathbyaddr");
      FUN_00379a5c(0x25,0x6c,0);
      if (iVar1 != -1) goto LAB_003beb60;
    }
    else {
      iVar2 = (**(code **)(lVar4 + 0x48))(param_1,lVar3,iVar1);
      if (iVar2 != iVar1) goto LAB_003beb60;
    }
    uVar5 = FUN_003be420(0,lVar3);
  }
  FUN_003c86b4(lVar3,"crypto/dso/dso_lib.c",0x13c);
  return uVar5;
}


// ===== 003beb8c  FUN_003beb8c =====

undefined8 FUN_003beb8c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_003bebf4();
  if (*(code **)(lVar1 + 0x50) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003bebb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(lVar1 + 0x50))(param_1);
    return uVar2;
  }
  FUN_00379868();
  FUN_0037995c("crypto/dso/dso_lib.c",0x145,"DSO_global_lookup");
  FUN_00379a5c(0x25,0x6c,0);
  return 0;
}


// ===== 003bebf4  FUN_003bebf4 =====

undefined ** FUN_003bebf4(void)

{
  return &PTR_s_NULL_shared_library_method_007a8998;
}


// ===== 003bec00  FUN_003bec00 =====

void FUN_003bec00(void)

{
  FUN_003bec24();
  FUN_003bedfc();
  FUN_003c2c68();
  FUN_003c2f0c();
  FUN_003d1934();
  FUN_003ee680();
  return;
}


// ===== 003bec24  FUN_003bec24 =====

void FUN_003bec24(void)

{
  FUN_003bb08c("oid_section",FUN_003bec40,FUN_003bedf8);
  return;
}


// ===== 003bec40  FUN_003bec40 =====

undefined8 FUN_003bec40(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  size_t sVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  char *__dest;
  char *pcVar8;
  undefined8 uVar9;
  char *__s;
  size_t __n;
  char *pcVar10;
  
  uVar5 = FUN_003bb260();
  lVar6 = FUN_003bb7d0(param_2,uVar5);
  if (lVar6 == 0) {
    uVar5 = 0xac;
    uVar9 = 0x20;
LAB_003bedac:
    FUN_00379868();
    FUN_0037995c("crypto/asn1/asn_moid.c",uVar9,"oid_module_init");
    FUN_00379a5c(0xd,uVar5,0);
    uVar5 = 0;
  }
  else {
    iVar3 = FUN_0040caf8();
    if (0 < iVar3) {
      iVar3 = 0;
      do {
        lVar7 = FUN_0040cb0c(lVar6,iVar3);
        pcVar1 = *(char **)(lVar7 + 8);
        __s = *(char **)(lVar7 + 0x10);
        __dest = strrchr(__s,0x2c);
        pcVar8 = pcVar1;
        if (__dest != (char *)0x0) {
          if ((long)__dest - (long)__s == 0) {
            __dest = (char *)0x0;
            __s = __s + 1;
            goto LAB_003bed58;
          }
          pcVar10 = __dest;
          if (__dest[1] != '\0') {
            do {
              pcVar10 = pcVar10 + 1;
              iVar4 = FUN_003c475c(*pcVar10,8);
              sVar2 = (long)__dest - (long)__s;
            } while (iVar4 != 0);
            do {
              __n = sVar2;
              pcVar8 = __s;
              iVar4 = FUN_003c475c(*pcVar8,8);
              __s = pcVar8 + 1;
              sVar2 = __n - 1;
            } while (iVar4 != 0);
            while( true ) {
              __dest = __dest + -1;
              iVar4 = FUN_003c475c(*__dest,8);
              if (iVar4 == 0) break;
              __n = __n - 1;
              if (__dest == pcVar8) goto LAB_003beda4;
            }
            __dest = (char *)FUN_003c83a4(__n + 1,"crypto/asn1/asn_moid.c",0x5a);
            if (__dest != (char *)0x0) {
              memcpy(__dest,pcVar8,__n);
              __dest[__n] = '\0';
              pcVar8 = __dest;
              __s = pcVar10;
              goto LAB_003bed58;
            }
          }
LAB_003beda4:
          uVar5 = 0xab;
          uVar9 = 0x26;
          goto LAB_003bedac;
        }
LAB_003bed58:
        iVar4 = FUN_003dd75c(__s,pcVar1,pcVar8);
        FUN_003c86b4(__dest,"crypto/asn1/asn_moid.c",99);
        if (iVar4 == 0) goto LAB_003beda4;
        iVar3 = iVar3 + 1;
        iVar4 = FUN_0040caf8(lVar6);
      } while (iVar3 < iVar4);
    }
    uVar5 = 1;
  }
  return uVar5;
}


// ===== 003bedf8  FUN_003bedf8 =====

void FUN_003bedf8(void)

{
  return;
}


// ===== 003bedfc  FUN_003bedfc =====

void FUN_003bedfc(void)

{
  FUN_003bb08c("stbl_section",FUN_003bee18,thunk_FUN_003c2c04);
  return;
}


// ===== 003bee18  FUN_003bee18 =====

undefined8 FUN_003bee18(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  char *__s1;
  char *__nptr;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  long local_70;
  char *local_68;
  
  uVar6 = FUN_003bb260();
  lVar7 = FUN_003bb7d0(param_2,uVar6);
  if (lVar7 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/asn1/asn_mstbl.c",0x1d,"stbl_module_init");
    uVar6 = 0xac;
LAB_003bf108:
    FUN_00379a5c(0xd,uVar6,0);
    uVar6 = 0;
  }
  else {
    iVar2 = FUN_0040caf8();
    if (iVar2 < 1) {
      uVar6 = 1;
    }
    else {
      iVar2 = 0;
      puVar11 = PTR_FUN_007a1b70;
      do {
        lVar8 = FUN_0040cb0c(lVar7,iVar2);
        uVar6 = *(undefined8 *)(lVar8 + 8);
        lVar8 = *(long *)(lVar8 + 0x10);
        local_70 = 0;
        iVar3 = FUN_003dcff4(uVar6);
        if (((iVar3 == 0) && (iVar3 = FUN_003dd128(uVar6), iVar3 == 0)) ||
           (lVar9 = FUN_00423474(lVar8), lVar9 == 0)) {
          FUN_00379868();
          FUN_0037995c("crypto/asn1/asn_mstbl.c",0x6b,"do_tcreate");
          FUN_00379a5c(0xd,0xda,"name=%s, value=%s",uVar6,lVar8);
          lVar9 = 0;
LAB_003bf0d4:
          FUN_0040ca6c(lVar9,PTR_FUN_007a1b70);
          FUN_00379868();
          FUN_0037995c("crypto/asn1/asn_mstbl.c",0x23,"stbl_module_init");
          uVar6 = 0xdb;
          goto LAB_003bf108;
        }
        iVar4 = FUN_0040caf8();
        if (iVar4 < 1) {
          iVar3 = FUN_003c2a4c(iVar3,0xffffffffffffffff,0xffffffffffffffff,0,0);
        }
        else {
          uVar6 = 0;
          iVar4 = 0;
          uVar13 = 0xffffffffffffffff;
          uVar12 = 0xffffffffffffffff;
          do {
            lVar10 = FUN_0040cb0c(lVar9,iVar4);
            __nptr = *(char **)(lVar10 + 0x10);
            if (__nptr == (char *)0x0) goto LAB_003bf094;
            __s1 = *(char **)(lVar10 + 8);
            iVar5 = strcmp(__s1,"min");
            if (iVar5 == 0) {
              uVar12 = strtoul(__nptr,&local_68,0);
              cVar1 = *local_68;
joined_r0x003befa4:
              if (cVar1 != '\0') {
LAB_003bf094:
                FUN_00379868();
                FUN_0037995c("crypto/asn1/asn_mstbl.c",0x66,"do_tcreate");
                if (*(long *)(lVar10 + 0x10) != 0) {
                  lVar8 = *(long *)(lVar10 + 0x10);
                }
                FUN_00379a5c(0xd,0xda,"field=%s, value=%s",*(undefined8 *)(lVar10 + 8),lVar8);
                goto LAB_003bf0d4;
              }
            }
            else {
              iVar5 = strcmp(__s1,"max");
              if (iVar5 == 0) {
                uVar13 = strtoul(__nptr,&local_68,0);
                cVar1 = *local_68;
                goto joined_r0x003befa4;
              }
              iVar5 = strcmp(__s1,"mask");
              if (iVar5 == 0) {
                iVar5 = FUN_003bfb70(__nptr,&local_70);
                if ((iVar5 != 0) && (local_70 != 0)) goto LAB_003beedc;
                goto LAB_003bf094;
              }
              iVar5 = strcmp(__s1,"flags");
              if (iVar5 != 0) goto LAB_003bf094;
              iVar5 = strcmp(__nptr,"nomask");
              if (iVar5 == 0) {
                uVar6 = 2;
              }
              else {
                iVar5 = strcmp(__nptr,"none");
                if (iVar5 != 0) goto LAB_003bf094;
                uVar6 = 1;
              }
            }
LAB_003beedc:
            iVar4 = iVar4 + 1;
            iVar5 = FUN_0040caf8(lVar9);
            puVar11 = PTR_FUN_007a1b70;
          } while (iVar4 < iVar5);
          iVar3 = FUN_003c2a4c(iVar3,uVar12,uVar13,local_70,uVar6);
        }
        if (iVar3 == 0) {
          FUN_00379868();
          FUN_0037995c("crypto/asn1/asn_mstbl.c",0x71,"do_tcreate");
          FUN_00379a5c(0xd,0x8000d,0);
          goto LAB_003bf0d4;
        }
        FUN_0040ca6c(lVar9,puVar11);
        iVar2 = iVar2 + 1;
        iVar3 = FUN_0040caf8(lVar7);
        uVar6 = 1;
      } while (iVar2 < iVar3);
    }
  }
  return uVar6;
}


// ===== 003bf1b0  thunk_FUN_003c2c04 =====

void thunk_FUN_003c2c04(void)

{
  long lVar1;
  
  lVar1 = DAT_007ab980;
  if (DAT_007ab980 != 0) {
    DAT_007ab980 = 0;
    FUN_0040ca6c(lVar1,FUN_003c2c24);
    return;
  }
  return;
}


// ===== 003bf1b4  FUN_003bf1b4 =====

undefined8 FUN_003bf1b4(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  int local_68 [17];
  int local_24;
  
  if (param_2 == 0) {
    local_68[0] = 0;
    uVar2 = FUN_003bf2c0(param_1,0,0,local_68);
    iVar1 = local_68[0];
  }
  else {
    FUN_00415760(local_68);
    local_24 = 0;
    uVar2 = FUN_003bf2c0(param_1,local_68,0,&local_24);
    iVar1 = local_24;
  }
  if (iVar1 != 0) {
    FUN_00379868();
    FUN_0037995c("crypto/asn1/asn1_gen.c",0x5f,"ASN1_generate_v3");
    FUN_00379a5c(0xd,iVar1,0);
  }
  return uVar2;
}


// ===== 003bf254  FUN_003bf254 =====

undefined8 FUN_003bf254(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  int local_24;
  
  local_24 = 0;
  uVar2 = FUN_003bf2c0(param_1,param_2,0,&local_24);
  iVar1 = local_24;
  if (local_24 != 0) {
    FUN_00379868();
    FUN_0037995c("crypto/asn1/asn1_gen.c",0x5f,"ASN1_generate_v3");
    FUN_00379a5c(0xd,iVar1,0);
  }
  return uVar2;
}


// ===== 003bf2c0  FUN_003bf2c0 =====

uint * FUN_003bf2c0(undefined8 param_1,long param_2,int param_3,undefined4 *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  undefined8 uVar8;
  uint *puVar9;
  undefined1 *puVar10;
  ulong uVar11;
  undefined4 uVar12;
  int iVar13;
  char **ppcVar14;
  undefined8 uVar15;
  undefined4 *puVar16;
  undefined1 auStack_290 [4];
  undefined1 auStack_28c [4];
  ulong local_288;
  undefined1 *local_280;
  undefined1 *local_278;
  void *local_270;
  undefined8 local_268;
  uint local_260;
  int local_25c;
  char *local_258 [3];
  undefined4 local_240 [116];
  uint local_70;
  void *local_68;
  undefined8 uStack_60;
  char *local_58;
  
  local_270 = (void *)0x0;
  local_288 = 0;
  local_268 = 0xffffffffffffffff;
  local_25c = 1;
  local_70 = 0;
  iVar2 = FUN_003bb2a0(param_1,0x2c,1,FUN_003bfcd0,&local_268);
  iVar3 = local_25c;
  if (iVar2 != 0) {
    uVar12 = 0xc2;
    goto LAB_003bf324;
  }
  if ((local_260 & 0xfffffffe) == 0x10) {
    if (param_2 == 0) {
      uVar12 = 0xc0;
LAB_003bf324:
      *param_4 = uVar12;
      return (uint *)0x0;
    }
    if (0x31 < param_3) {
      uVar12 = 0xb5;
      goto LAB_003bf324;
    }
    local_68 = (void *)0x0;
    lVar5 = FUN_0040bf0c();
    if (lVar5 == 0) {
      puVar9 = (uint *)0x0;
      pcVar6 = (char *)0x0;
    }
    else {
      pcVar6 = local_258[0];
      if (local_258[0] == (char *)0x0) {
LAB_003bf49c:
        if (local_260 == 0x11) {
          iVar3 = FUN_0038a784();
        }
        else {
          iVar3 = FUN_0038a76c(lVar5,&local_68);
        }
        if ((-1 < iVar3) && (puVar9 = (uint *)FUN_0038a64c(), puVar9 != (uint *)0x0)) {
          lVar7 = FUN_0038ee84(local_260);
          *(long *)(puVar9 + 2) = lVar7;
          if (lVar7 != 0) {
            *puVar9 = local_260;
            *(void **)(lVar7 + 8) = local_68;
            **(int **)(puVar9 + 2) = iVar3;
            local_68 = (void *)0x0;
          }
          goto LAB_003bf6a4;
        }
      }
      else {
        pcVar6 = (char *)FUN_004156c8(param_2,local_258[0]);
        if (pcVar6 != (char *)0x0) {
          iVar3 = FUN_0040caf8(pcVar6);
          if (0 < iVar3) {
            iVar3 = 0;
            do {
              lVar7 = FUN_0040cb0c(pcVar6,iVar3);
              lVar7 = FUN_003bf2c0(*(undefined8 *)(lVar7 + 0x10),param_2,param_3 + 1,param_4);
              if ((lVar7 == 0) || (iVar2 = FUN_0040c89c(lVar5,lVar7), iVar2 == 0))
              goto LAB_003bf6a0;
              iVar3 = iVar3 + 1;
              iVar2 = FUN_0040caf8(pcVar6);
            } while (iVar3 < iVar2);
          }
          goto LAB_003bf49c;
        }
      }
LAB_003bf6a0:
      puVar9 = (uint *)0x0;
    }
LAB_003bf6a4:
    FUN_003c86b4(local_68,"crypto/asn1/asn1_gen.c",0x1c7);
    FUN_0040ca6c(lVar5,PTR_FUN_007a1a00);
    FUN_00415744(param_2,pcVar6);
  }
  else {
    puVar9 = (uint *)FUN_0038a64c();
    if (puVar9 == (uint *)0x0) {
      FUN_00379868();
      FUN_0037995c("crypto/asn1/asn1_gen.c",0x249,"asn1_str2type");
      FUN_00379a5c(0xd,0x8000d,0);
    }
    else {
      pcVar6 = "";
      if (local_258[0] != (char *)0x0) {
        pcVar6 = local_258[0];
      }
      uVar12 = 0xc4;
      uVar15 = 0x2d7;
      if ((int)local_260 < 5) {
        if (local_260 - 3 < 2) {
          lVar5 = FUN_0038edac();
          *(long *)(puVar9 + 2) = lVar5;
          if (lVar5 == 0) {
            FUN_00379868(puVar9);
            FUN_0037995c("crypto/asn1/asn1_gen.c",0x2b2,"asn1_str2type");
            uVar15 = 0x8000d;
            goto LAB_003bf92c;
          }
          if (iVar3 != 1) {
            if (iVar3 == 3) {
              lVar5 = FUN_003ca840(pcVar6,&local_68);
              if (lVar5 != 0) {
                *(long *)(*(long *)(puVar9 + 2) + 8) = lVar5;
                **(undefined4 **)(puVar9 + 2) = (int)local_68;
                *(uint *)(*(long *)(puVar9 + 2) + 4) = local_260;
                goto LAB_003bf87c;
              }
              uVar12 = 0xb2;
              uVar15 = 0x2b8;
            }
            else {
              if ((local_260 != 3) || (iVar3 != 4)) {
                FUN_00379868(puVar9);
                FUN_0037995c("crypto/asn1/asn1_gen.c",0x2cd,"asn1_str2type");
                uVar15 = 0xaf;
                goto LAB_003bf92c;
              }
              iVar3 = FUN_003bb2a0(pcVar6,0x2c,1,FUN_003c03d0);
              if (iVar3 != 0) goto LAB_003bf5d8;
              uVar12 = 0xbc;
              uVar15 = 0x2c7;
            }
            goto LAB_003bf614;
          }
          iVar3 = FUN_0038ebe0(lVar5,pcVar6,0xffffffff);
          if (iVar3 != 0) {
LAB_003bf87c:
            if (local_260 == 3) {
              FUN_0038eb60(*(undefined8 *)(puVar9 + 2),0);
            }
            goto LAB_003bf5d8;
          }
          uVar15 = 0x2c0;
LAB_003bf610:
          uVar12 = 0x8000d;
        }
        else if (local_260 == 1) {
          if (iVar3 != 1) {
            FUN_00379868();
            FUN_0037995c("crypto/asn1/asn1_gen.c",0x25b,"asn1_str2type");
            uVar15 = 0xbe;
            goto LAB_003bf92c;
          }
          local_68 = (void *)0x0;
          uStack_60 = 0;
          local_58 = pcVar6;
          iVar3 = FUN_00423270(&local_68,puVar9 + 2);
          if (iVar3 != 0) goto LAB_003bf5d8;
          uVar12 = 0xb0;
          uVar15 = 0x262;
        }
        else if (local_260 == 2) {
LAB_003bf748:
          if (iVar3 != 1) {
            FUN_00379868();
            FUN_0037995c("crypto/asn1/asn1_gen.c",0x26a,"asn1_str2type");
            uVar15 = 0xb9;
            goto LAB_003bf92c;
          }
          lVar5 = FUN_00422fb4(0,pcVar6);
          *(long *)(puVar9 + 2) = lVar5;
          if (lVar5 != 0) goto LAB_003bf5d8;
          uVar12 = 0xb4;
          uVar15 = 0x26f;
        }
        goto LAB_003bf614;
      }
      if (local_260 < 0x1f) {
        uVar4 = 1 << (ulong)(local_260 & 0x1f);
        if ((uVar4 & 0x5c5c1000) == 0) {
          if ((uVar4 & 0x1800000) != 0) {
            if (iVar3 == 1) {
              uVar12 = 0x8000d;
              lVar5 = FUN_0038edac();
              *(long *)(puVar9 + 2) = lVar5;
              if (lVar5 == 0) {
                uVar15 = 0x286;
              }
              else {
                iVar3 = FUN_0038ebe0(puVar9,lVar5,pcVar6,0xffffffff);
                if (iVar3 == 0) {
                  uVar15 = 0x28a;
                }
                else {
                  *(uint *)(*(long *)(puVar9 + 2) + 4) = local_260;
                  iVar3 = FUN_003c0eac(*(undefined8 *)(puVar9 + 2));
                  if (iVar3 != 0) goto LAB_003bf5d8;
                  uVar12 = 0xb8;
                  uVar15 = 0x28f;
                }
              }
              goto LAB_003bf614;
            }
            FUN_00379868();
            FUN_0037995c("crypto/asn1/asn1_gen.c",0x282,"asn1_str2type");
            uVar15 = 0xc1;
            goto LAB_003bf92c;
          }
          if (local_260 == 10) goto LAB_003bf748;
          goto LAB_003bf778;
        }
        if (iVar3 == 1) {
          uVar15 = 0x1001;
        }
        else {
          if (iVar3 != 2) {
            FUN_00379868();
            FUN_0037995c("crypto/asn1/asn1_gen.c",0x2a3,"asn1_str2type");
            uVar15 = 0xb1;
            goto LAB_003bf92c;
          }
          uVar15 = 0x1000;
        }
        uVar8 = FUN_0038a790(local_260);
        iVar3 = FUN_003c1ca4(puVar9 + 2,pcVar6,0xffffffff,uVar15,uVar8);
        if (iVar3 < 1) {
          uVar15 = 0x2a9;
          goto LAB_003bf610;
        }
LAB_003bf5d8:
        *puVar9 = local_260;
        goto LAB_003bf940;
      }
LAB_003bf778:
      if (local_260 == 6) {
        if (iVar3 == 1) {
          lVar5 = FUN_003dce7c(pcVar6,0);
          *(long *)(puVar9 + 2) = lVar5;
          if (lVar5 != 0) goto LAB_003bf5d8;
          uVar12 = 0xb7;
          uVar15 = 0x27a;
          goto LAB_003bf614;
        }
        FUN_00379868();
        FUN_0037995c("crypto/asn1/asn1_gen.c",0x276,"asn1_str2type");
        uVar15 = 0xbf;
LAB_003bf92c:
        FUN_00379a5c(0xd,uVar15,0);
      }
      else {
        if (local_260 == 5) {
          if (*pcVar6 != '\0') {
            FUN_00379868();
            FUN_0037995c("crypto/asn1/asn1_gen.c",0x254,"asn1_str2type");
            uVar15 = 0xb6;
            goto LAB_003bf92c;
          }
          goto LAB_003bf5d8;
        }
LAB_003bf614:
        FUN_00379868();
        FUN_0037995c("crypto/asn1/asn1_gen.c",uVar15,"asn1_str2type");
        FUN_00379a5c(0xd,uVar12,0);
        FUN_0037aeac(2,"string=",pcVar6);
      }
      FUN_0038a658(puVar9);
    }
    puVar9 = (uint *)0x0;
  }
LAB_003bf940:
  if (puVar9 == (uint *)0x0) {
    return (uint *)0x0;
  }
  if (((uint)local_268 == -1) && (local_70 == 0)) {
    return puVar9;
  }
  iVar3 = FUN_0038a640(puVar9,&local_270);
  FUN_0038a658(puVar9);
  local_68 = local_270;
  if ((uint)local_268 == -1) {
    uVar4 = 0;
    iVar2 = iVar3;
  }
  else {
    uVar4 = FUN_0038e758(&local_68,&local_288,auStack_28c,auStack_290,(long)iVar3);
    if ((uVar4 >> 7 & 1) != 0) {
      puVar9 = (uint *)0x0;
      puVar10 = (undefined1 *)0x0;
      goto LAB_003bfb20;
    }
    iVar3 = iVar3 + ((int)local_270 - (int)local_68);
    if ((uVar4 & 1) == 0) {
      uVar11 = local_288 & 0xffffffff;
      uVar4 = uVar4 & 0x20;
    }
    else {
      uVar11 = 0;
      local_288 = 0;
      uVar4 = 2;
    }
    iVar2 = FUN_0038eadc(0,uVar11,local_268 & 0xffffffff);
  }
  if (0 < (int)local_70) {
    iVar13 = 0;
    ppcVar14 = local_258 + (ulong)local_70 * 3;
    do {
      pcVar6 = (char *)((long)*(int *)((long)ppcVar14 + -4) + (long)iVar2);
      *ppcVar14 = pcVar6;
      iVar2 = FUN_0038eadc(0,pcVar6,*(undefined4 *)(ppcVar14 + -2));
      iVar13 = iVar13 + 1;
      ppcVar14 = ppcVar14 + -3;
    } while (iVar13 < (int)local_70);
  }
  puVar10 = (undefined1 *)FUN_003c83a4((long)iVar2,"crypto/asn1/asn1_gen.c",0xc4);
  if (puVar10 == (undefined1 *)0x0) {
    puVar9 = (uint *)0x0;
  }
  else {
    local_278 = puVar10;
    if (0 < (int)local_70) {
      iVar13 = 0;
      puVar16 = local_240;
      do {
        FUN_0038e9b8(&local_278,puVar16[-2],*puVar16,puVar16[-4],puVar16[-3]);
        if (puVar16[-1] != 0) {
          *local_278 = 0;
          local_278 = local_278 + 1;
        }
        iVar13 = iVar13 + 1;
        puVar16 = puVar16 + 6;
      } while (iVar13 < (int)local_70);
    }
    if ((uint)local_268 != 0xffffffff) {
      uVar1 = 0x20;
      if (local_268._4_4_ != 0 || ((uint)local_268 & 0xfffffffe) != 0x10) {
        uVar1 = uVar4;
      }
      FUN_0038e9b8(&local_278,uVar1,local_288 & 0xffffffff);
    }
    memcpy(local_278,local_68,(long)iVar3);
    local_280 = puVar10;
    puVar9 = (uint *)FUN_0038a634(0,&local_280,(long)iVar2);
  }
LAB_003bfb20:
  FUN_003c86b4(local_270,"crypto/asn1/asn1_gen.c",0xea);
  FUN_003c86b4(puVar10,"crypto/asn1/asn1_gen.c",0xeb);
  return puVar9;
}


// ===== 003bfb70  FUN_003bfb70 =====

void FUN_003bfb70(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_003bb2a0(param_1,0x7c,1,FUN_003bfb8c);
  return;
}


// ===== 003bfb8c  FUN_003bfb8c =====

undefined8 FUN_003bfb8c(char *param_1,int param_2,ulong *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  ulong uVar5;
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  if (param_2 == 3) {
    iVar3 = strncmp(param_1,"DIR",3);
    if (iVar3 == 0) {
      uVar5 = 0x2906;
      goto LAB_003bfcac;
    }
    iVar3 = 0x31;
    DAT_007ab978 = &PTR_DAT_00769140;
    do {
      if ((*(int *)(DAT_007ab978 + 1) == 3) &&
         (iVar2 = FUN_003cab60(*DAT_007ab978,param_1,3), iVar2 == 0)) goto LAB_003bfc80;
      DAT_007ab978 = DAT_007ab978 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  else {
    if (param_2 == -1) {
      sVar4 = strlen(param_1);
      param_2 = (int)sVar4;
    }
    iVar3 = 0x31;
    DAT_007ab978 = &PTR_DAT_00769140;
    do {
      if ((param_2 == *(int *)(DAT_007ab978 + 1)) &&
         (iVar2 = FUN_003cab60(*DAT_007ab978,param_1,(long)param_2), iVar2 == 0)) goto LAB_003bfc80;
      DAT_007ab978 = DAT_007ab978 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
LAB_003bfc80:
  uVar1 = *(uint *)((long)DAT_007ab978 + 0xc);
  if (uVar1 == 0) {
    return 0;
  }
  if ((uVar1 >> 0x10 & 1) != 0) {
    return 0;
  }
  uVar5 = FUN_0038a790(uVar1);
  if (uVar5 == 0) {
    return 0;
  }
LAB_003bfcac:
  *param_3 = *param_3 | uVar5;
  return 1;
}


// ===== 003bfcd0  FUN_003bfcd0 =====

undefined8 FUN_003bfcd0(char *param_1,uint param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  int *piVar8;
  int iVar9;
  char *__s1;
  int iVar10;
  undefined4 local_58;
  undefined4 local_54;
  
  if (param_1 == (char *)0x0) {
    return 0xffffffff;
  }
  if (0 < (int)param_2) {
    lVar7 = 0;
    do {
      if (param_1[lVar7] == ':') {
        uVar6 = (uint)lVar7;
        iVar3 = ~uVar6 + param_2;
        __s1 = param_1 + lVar7 + 1;
        param_2 = uVar6;
        if (uVar6 != 0xffffffff) goto LAB_003bfd3c;
        goto LAB_003bfd34;
      }
      lVar7 = lVar7 + 1;
    } while (param_2 != (uint)lVar7);
  }
  iVar3 = 0;
  __s1 = (char *)0x0;
  uVar6 = param_2;
  if (param_2 == 0xffffffff) {
LAB_003bfd34:
    sVar4 = strlen(param_1);
    param_2 = (uint)sVar4;
  }
LAB_003bfd3c:
  iVar10 = 0x31;
  DAT_007ab978 = &PTR_DAT_00769140;
  while ((param_2 != *(uint *)(DAT_007ab978 + 1) ||
         (iVar2 = FUN_003cab60(*DAT_007ab978,param_1,(long)(int)param_2), iVar2 != 0))) {
    DAT_007ab978 = DAT_007ab978 + 2;
    iVar10 = iVar10 + -1;
    if (iVar10 == 0) {
LAB_003bfdb0:
      FUN_00379868();
      FUN_0037995c("crypto/asn1/asn1_gen.c",0x10b,"asn1_cb");
      FUN_00379a5c(0xd,0xc2,"tag=%s",param_1);
      return 0xffffffff;
    }
  }
  uVar1 = *(uint *)((long)DAT_007ab978 + 0xc);
  if (uVar1 != 0xffffffff) {
    if ((uVar1 >> 0x10 & 1) == 0) {
      param_3[2] = uVar1;
      *(char **)(param_3 + 4) = __s1;
      if ((__s1 != (char *)0x0) || (param_1[(int)uVar6] == '\0')) {
        return 0;
      }
      FUN_00379868();
      FUN_0037995c("crypto/asn1/asn1_gen.c",0x115,"asn1_cb");
      uVar5 = 0xbd;
      goto LAB_003c0090;
    }
    if ((int)uVar1 < 0x10005) {
      if (uVar1 == 0x10001) {
        if (*param_3 != -1) {
          FUN_00379868();
          FUN_0037995c("crypto/asn1/asn1_gen.c",0x120,"asn1_cb");
          uVar5 = 0xb5;
          goto LAB_003c0090;
        }
        iVar3 = FUN_003c01c0(__s1,iVar3,param_3,param_3 + 1);
joined_r0x003c0120:
        if (iVar3 == 0) {
          return 0xffffffff;
        }
        return 1;
      }
      if (uVar1 == 0x10002) {
        iVar3 = FUN_003c01c0(__s1,iVar3,&local_54,&local_58);
        if (iVar3 == 0) {
          return 0xffffffff;
        }
        iVar3 = FUN_003c0300(param_3,local_54,local_58,1,0,0);
        goto joined_r0x003c0120;
      }
      if (uVar1 != 0x10004) {
        return 1;
      }
      iVar3 = param_3[0x7e];
      if (iVar3 != 0x14) {
        iVar10 = *param_3;
        param_3[0x7e] = iVar3 + 1;
        piVar8 = param_3 + (long)iVar3 * 6 + 6;
        if (iVar10 == -1) {
          iVar3 = 0;
          iVar10 = 3;
        }
        else {
          iVar3 = param_3[1];
          param_3[0] = -1;
          param_3[1] = -1;
        }
        iVar2 = 0;
        *piVar8 = iVar10;
        iVar10 = 1;
        goto LAB_003c019c;
      }
    }
    else if ((int)uVar1 < 0x10007) {
      if (uVar1 == 0x10005) {
        iVar3 = param_3[0x7e];
        if (iVar3 != 0x14) {
          iVar9 = *param_3;
          param_3[0x7e] = iVar3 + 1;
          piVar8 = param_3 + (long)iVar3 * 6 + 6;
          if (iVar9 == -1) {
            iVar3 = 0;
            iVar9 = 4;
          }
          else {
            iVar3 = param_3[1];
            param_3[0] = -1;
            param_3[1] = -1;
          }
          iVar2 = 0;
          iVar10 = 0;
          *piVar8 = iVar9;
          goto LAB_003c019c;
        }
      }
      else {
        if (uVar1 != 0x10006) {
          return 1;
        }
        iVar3 = param_3[0x7e];
        if (iVar3 != 0x14) {
          iVar2 = *param_3;
          param_3[0x7e] = iVar3 + 1;
          piVar8 = param_3 + (long)iVar3 * 6 + 6;
          if (iVar2 == -1) {
            iVar3 = 0;
            iVar2 = 0x10;
          }
          else {
LAB_003c00fc:
            iVar3 = param_3[1];
            param_3[0] = -1;
            param_3[1] = -1;
          }
LAB_003c0178:
          iVar10 = 0;
          *piVar8 = iVar2;
          iVar2 = 1;
LAB_003c019c:
          piVar8[1] = iVar3;
          piVar8[2] = iVar2;
          param_3 = piVar8;
LAB_003c01a4:
          param_3[3] = iVar10;
          return 1;
        }
      }
    }
    else {
      if (uVar1 != 0x10007) {
        if (uVar1 != 0x10008) {
          return 1;
        }
        if (__s1 == (char *)0x0) {
          FUN_00379868();
          uVar5 = 0x145;
        }
        else {
          iVar3 = strncmp(__s1,"ASCII",5);
          if (iVar3 == 0) {
            iVar10 = 1;
            goto LAB_003c01a4;
          }
          iVar3 = strncmp(__s1,"UTF8",4);
          if (iVar3 == 0) {
            iVar10 = 2;
            goto LAB_003c01a4;
          }
          iVar10 = 3;
          iVar3 = strncmp(__s1,"HEX",3);
          if (iVar3 == 0) goto LAB_003c01a4;
          iVar3 = strncmp(__s1,"BITLIST",7);
          if (iVar3 == 0) {
            iVar10 = 4;
            goto LAB_003c01a4;
          }
          FUN_00379868();
          uVar5 = 0x151;
        }
        FUN_0037995c("crypto/asn1/asn1_gen.c",uVar5,"asn1_cb");
        uVar5 = 0xa0;
        goto LAB_003c0090;
      }
      iVar3 = param_3[0x7e];
      if (iVar3 != 0x14) {
        iVar2 = *param_3;
        param_3[0x7e] = iVar3 + 1;
        piVar8 = param_3 + (long)iVar3 * 6 + 6;
        if (iVar2 != -1) goto LAB_003c00fc;
        iVar3 = 0;
        iVar2 = 0x11;
        goto LAB_003c0178;
      }
    }
    FUN_00379868();
    FUN_0037995c("crypto/asn1/asn1_gen.c",0x1da,"append_exp");
    uVar5 = 0xae;
LAB_003c0090:
    FUN_00379a5c(0xd,uVar5,0);
    return 0xffffffff;
  }
  goto LAB_003bfdb0;
}


// ===== 003c01c0  FUN_003c01c0 =====

undefined8 FUN_003c01c0(char *param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  byte bVar1;
  ulong uVar2;
  undefined4 uVar3;
  byte *local_28;
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  uVar2 = strtoul(param_1,(char **)&local_28,10);
  if (((local_28 != (byte *)0x0) && (*local_28 != 0)) && (param_1 + param_2 < local_28)) {
    return 0;
  }
  if ((long)uVar2 < 0) {
    FUN_00379868();
    FUN_0037995c("crypto/asn1/asn1_gen.c",0x167,"parse_tagging");
    FUN_00379a5c(0xd,0xbb,0);
    return 0;
  }
  *param_3 = (int)uVar2;
  if ((local_28 != (byte *)0x0) && ((int)param_1 - (int)local_28 != -param_2)) {
    bVar1 = *local_28;
    if (0x4f < bVar1) {
      if (bVar1 != 0x50) {
        if (bVar1 == 0x55) {
          *param_4 = 0;
          return 1;
        }
LAB_003c02b8:
        FUN_00379868();
        FUN_0037995c("crypto/asn1/asn1_gen.c",0x184,"parse_tagging");
        FUN_00379a5c(0xd,0xba,"Char=%c",*local_28);
        return 0;
      }
      uVar3 = 0xc0;
      goto LAB_003c024c;
    }
    if (bVar1 == 0x41) {
      uVar3 = 0x40;
      goto LAB_003c024c;
    }
    if (bVar1 != 0x43) goto LAB_003c02b8;
  }
  uVar3 = 0x80;
LAB_003c024c:
  *param_4 = uVar3;
  return 1;
}


// ===== 003c0300  FUN_003c0300 =====

undefined8 FUN_003c0300(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if ((param_6 == 0) && (iVar1 != -1)) {
    FUN_00379868();
    FUN_0037995c("crypto/asn1/asn1_gen.c",0x1d5,"append_exp");
    FUN_00379a5c(0xd,0xb3,0);
    return 0;
  }
  iVar2 = param_1[0x7e];
  if (iVar2 == 0x14) {
    FUN_00379868();
    FUN_0037995c("crypto/asn1/asn1_gen.c",0x1da,"append_exp");
    FUN_00379a5c(0xd,0xae,0);
    return 0;
  }
  param_1[0x7e] = iVar2 + 1;
  if (iVar1 != -1) {
    param_3 = param_1[1];
    param_1[0] = -1;
    param_1[1] = -1;
    param_2 = iVar1;
  }
  param_1[(long)iVar2 * 6 + 6] = param_2;
  param_1[(long)iVar2 * 6 + 7] = param_3;
  param_1[(long)iVar2 * 6 + 8] = param_4;
  param_1[(long)iVar2 * 6 + 9] = param_5;
  return 1;
}


// ===== 003c03d0  FUN_003c03d0 =====

char * FUN_003c03d0(char *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  char *local_18;
  
  if (param_1 != (char *)0x0) {
    uVar2 = strtoul(param_1,&local_18,10);
    if (((local_18 == (char *)0x0) || (*local_18 == '\0')) || (local_18 == param_1 + param_2)) {
      if ((long)uVar2 < 0) {
        uVar3 = 0xbb;
        uVar4 = 0x2f1;
      }
      else {
        iVar1 = FUN_0039c49c(param_3,uVar2,1);
        uVar2 = 1;
        if (iVar1 != 0) {
          return (char *)0x1;
        }
        uVar4 = 0x2f5;
        uVar3 = 0x8000d;
      }
      FUN_00379868(uVar2);
      FUN_0037995c("crypto/asn1/asn1_gen.c",uVar4,"bitstr_cb");
      FUN_00379a5c(0xd,uVar3,0);
    }
    param_1 = (char *)0x0;
  }
  return param_1;
}


// ===== 003c0490  FUN_003c0490 =====

undefined * FUN_003c0490(void)

{
  return &DAT_00769450;
}


// ===== 003c049c  FUN_003c049c =====

void FUN_003c049c(void)

{
  FUN_0038a93c();
  return;
}


// ===== 003c04a8  FUN_003c04a8 =====

void FUN_003c04a8(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_00769450);
  return;
}


// ===== 003c04b4  FUN_003c04b4 =====

void FUN_003c04b4(void)

{
  FUN_0039a5f4(&DAT_00769450);
  return;
}


// ===== 003c04c0  FUN_003c04c0 =====

void FUN_003c04c0(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_00769450);
  return;
}


// ===== 003c04cc  FUN_003c04cc =====

void FUN_003c04cc(undefined8 param_1)

{
  FUN_003a4098(&DAT_00769450,param_1);
  return;
}


// ===== 003c04dc  FUN_003c04dc =====

/* WARNING: Type propagation algorithm not settling */

ulong FUN_003c04dc(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  int local_ac;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  uVar1 = param_2[1];
  if (uVar1 == 0x18) {
    bVar7 = (*(ulong *)(param_2 + 4) & 0x100) == 0;
    iVar10 = 0xd;
    if (!bVar7) {
      iVar10 = 0xf;
    }
    lVar11 = 6;
    uVar13 = 7;
  }
  else {
    if (uVar1 != 0x17) {
      return 0;
    }
    bVar7 = (*(ulong *)(param_2 + 4) & 0x100) == 0;
    iVar10 = 0xb;
    if (!bVar7) {
      iVar10 = 0xd;
    }
    lVar11 = 5;
    uVar13 = 6;
  }
  uVar2 = *param_2;
  uVar15 = (ulong)uVar2;
  lVar18 = *(long *)(param_2 + 2);
  local_70 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  if ((int)uVar2 < iVar10) {
    return 0;
  }
  uVar21 = 0;
  uVar20 = 0;
  uVar19 = 0;
  local_ac = 0;
  do {
    bVar8 = (bool)(bVar7 ^ 1);
    if ((int)(lVar11 << 1) != (int)uVar21) {
      bVar8 = true;
    }
    if (((!bVar8) && (uVar16 = *(byte *)(lVar18 + uVar21) - 0x2b, uVar16 < 0x30)) &&
       (uVar9 = uVar21, (1L << ((ulong)uVar16 & 0x3f) & 0x800000000005U) != 0)) break;
    uVar9 = FUN_003c47dc();
    if ((int)uVar9 == 0) {
      return uVar9;
    }
    if (uVar15 - 1 == uVar21) {
      return 0;
    }
    bVar3 = *(byte *)(lVar18 + uVar21);
    uVar9 = FUN_003c47dc(*(undefined1 *)(lVar18 + uVar21 + 1));
    if ((int)uVar9 == 0) {
      return uVar9;
    }
    if (uVar15 - 2 == uVar21) {
      return 0;
    }
    uVar1 = param_2[1];
    iVar10 = (uint)*(byte *)(lVar18 + uVar21 + 1) + (uint)bVar3 * 10;
    uVar16 = uVar19;
    if (uVar1 == 0x17) {
      uVar16 = uVar19 + 1;
    }
    uVar5 = iVar10 - 0x210;
    if ((int)uVar5 < *(int *)(&DAT_00206bec + (ulong)uVar16 * 4)) {
      return 0;
    }
    if (*(int *)(&DAT_00206c10 + (ulong)uVar16 * 4) < (int)uVar5) {
      return 0;
    }
    iVar6 = iVar10 + -0x1e0;
    if ((int)uVar16 < 3) {
      if (uVar16 == 0) {
        uVar20 = uVar5 * 100 - 0x76c;
      }
      else {
        if (uVar16 != 1) {
          if (uVar16 == 2) {
            local_ac = iVar10 + -0x211;
            local_90 = CONCAT44(local_90._4_4_,local_ac);
          }
          goto LAB_003c05dc;
        }
        if (uVar1 == 0x17) {
          uVar20 = iVar10 - 0x1ac;
          if (0x61 < iVar6) {
            uVar20 = uVar5;
          }
        }
        else {
          uVar20 = uVar20 + uVar5;
        }
      }
      local_90 = CONCAT44(uVar20,(undefined4)local_90);
    }
    else if ((int)uVar16 < 5) {
      if (uVar16 == 3) {
        if (local_ac == 1) {
          uVar16 = (uVar20 + 0x76c) * -0x3d70a3d7 + 0x51eb850;
          if (0xa3d70a < (uVar16 >> 4 | (uVar20 + 0x76c) * -0x70000000)) {
            uVar16 = uVar16 >> 2 | uVar20 * 0x40000000;
            bVar8 = (uVar20 & 3) != 0;
            uVar16 = ((!bVar8 && 0x28f5c27 < uVar16) && (bVar8 || uVar16 != 0x28f5c28)) | 0x1c;
            goto joined_r0x003c079c;
          }
          if (0x1d < (int)uVar5) {
            return 0;
          }
        }
        else {
          uVar16 = *(uint *)(&DAT_00206c34 + (long)local_ac * 4);
joined_r0x003c079c:
          if ((int)uVar16 < (int)uVar5) {
            return 0;
          }
        }
        uStack_98 = CONCAT44(uVar5,(undefined4)uStack_98);
        iVar10 = iVar6 + *(int *)(&DAT_00206c94 + (long)local_ac * 4) + -0x31;
        if (local_ac < 2) {
          iVar14 = local_ac + 0xe;
          iVar12 = uVar20 + 0x76b;
        }
        else {
          iVar12 = uVar20 + 0x76c;
          uVar16 = iVar12 * -0x3d70a3d7 + 0x51eb850;
          if ((uVar16 >> 4 | iVar12 * -0x70000000) < 0xa3d70b) {
            uVar16 = 1;
          }
          else {
            uVar16 = uVar16 >> 2 | uVar20 * 0x40000000;
            bVar8 = (uVar20 & 3) != 0;
            uVar16 = (uint)((!bVar8 && 0x28f5c27 < uVar16) && (bVar8 || uVar16 != 0x28f5c28));
          }
          iVar10 = uVar16 + iVar10;
          iVar14 = local_ac + 2;
        }
        cVar4 = (char)(iVar12 % 100);
        local_88 = CONCAT44(iVar10,(iVar6 + (iVar14 * 0xd) / 5 + iVar12 % 100 + iVar12 / 400 +
                                    (iVar12 / 100) * 5 +
                                    ((int)(char)(cVar4 + ((byte)((uint)(int)cVar4 >> 0xd) & 3)) >> 2
                                    ) + -0x2a) % 7);
      }
      else if (uVar16 == 4) {
        uStack_98 = CONCAT44(uStack_98._4_4_,uVar5);
      }
    }
    else if (uVar16 == 5) {
      local_a0 = CONCAT44(uVar5,(undefined4)local_a0);
    }
    else if (uVar16 == 6) {
      local_a0 = CONCAT44(local_a0._4_4_,uVar5);
    }
LAB_003c05dc:
    uVar19 = uVar19 + 1;
    uVar21 = uVar21 + 2;
    uVar9 = (ulong)(uVar13 << 1);
  } while (uVar19 != uVar13);
  uVar19 = (uint)uVar9;
  if ((uVar1 == 0x18) && (*(char *)(lVar18 + (uVar9 & 0xffffffff)) == '.')) {
    if (!bVar7) {
      return 0;
    }
    if ((int)uVar2 <= (int)(uVar19 | 1)) {
      return 0;
    }
    lVar11 = (uVar9 & 0xffffffff) + 1;
    lVar17 = 0;
    while (uVar21 = FUN_003c47dc(*(undefined1 *)(lVar18 + lVar11 + lVar17)), (int)uVar21 != 0) {
      lVar17 = lVar17 + 1;
      if ((lVar11 - uVar15) + lVar17 == 0) {
        return 0;
      }
    }
    iVar10 = (int)lVar17;
    if (iVar10 == 0) {
      return uVar21;
    }
    if (((int)lVar11 - uVar2) + iVar10 == 0) {
      return uVar21;
    }
    uVar19 = (int)lVar11 + iVar10;
  }
  cVar4 = *(char *)(lVar18 + (int)uVar19);
  if (cVar4 == 'Z') {
    uVar19 = uVar19 + 1;
  }
  else {
    if (!bVar7) {
      return 0;
    }
    if ((cVar4 != '-') && (cVar4 != '+')) {
      return 0;
    }
    if (uVar19 + 5 != uVar2) {
      return 0;
    }
    lVar11 = lVar18 + 1;
    lVar17 = (long)(int)(uVar19 + 1);
    uVar15 = FUN_003c47dc(*(undefined1 *)(lVar18 + lVar17));
    if (param_1 == (undefined8 *)0x0) {
      if ((int)uVar15 == 0) {
        return uVar15;
      }
      bVar3 = *(byte *)(lVar18 + lVar17);
      uVar15 = FUN_003c47dc(*(undefined1 *)(lVar11 + lVar17));
      if ((int)uVar15 == 0) {
        return uVar15;
      }
      uVar1 = uVar13;
      if (param_2[1] == 0x17) {
        uVar1 = uVar13 + 1;
      }
      iVar10 = (uint)*(byte *)(lVar11 + lVar17) + (uint)bVar3 * 10 + -0x210;
      if (iVar10 < *(int *)(&DAT_00206bec + (ulong)uVar1 * 4)) {
        return 0;
      }
      if (*(int *)(&DAT_00206c10 + (ulong)uVar1 * 4) < iVar10) {
        return 0;
      }
      lVar17 = lVar17 + 2;
      uVar15 = FUN_003c47dc(*(undefined1 *)(lVar18 + lVar17));
      if ((int)uVar15 != 0) {
        bVar3 = *(byte *)(lVar18 + lVar17);
        uVar15 = FUN_003c47dc(*(undefined1 *)(lVar11 + lVar17));
        if ((int)uVar15 == 0) {
          return uVar15;
        }
        uVar1 = uVar13 + 2;
        if (param_2[1] != 0x17) {
          uVar1 = uVar13 + 1;
        }
        iVar10 = (uint)*(byte *)(lVar11 + lVar17) + (uint)bVar3 * 10 + -0x210;
        if (iVar10 < *(int *)(&DAT_00206bec + (ulong)uVar1 * 4)) {
          return 0;
        }
        return (ulong)(iVar10 <= *(int *)(&DAT_00206c10 + (ulong)uVar1 * 4) && uVar19 + 5 == uVar2);
      }
      return uVar15;
    }
    if ((int)uVar15 == 0) {
      return uVar15;
    }
    bVar3 = *(byte *)(lVar18 + lVar17);
    uVar15 = FUN_003c47dc(*(undefined1 *)(lVar11 + lVar17));
    if ((int)uVar15 == 0) {
      return uVar15;
    }
    uVar1 = uVar13;
    if (param_2[1] == 0x17) {
      uVar1 = uVar13 + 1;
    }
    iVar10 = (uint)*(byte *)(lVar11 + lVar17) + (uint)bVar3 * 10 + -0x210;
    if (iVar10 < *(int *)(&DAT_00206bec + (ulong)uVar1 * 4)) {
      return 0;
    }
    if (*(int *)(&DAT_00206c10 + (ulong)uVar1 * 4) < iVar10) {
      return 0;
    }
    lVar17 = lVar17 + 2;
    uVar15 = FUN_003c47dc(*(undefined1 *)(lVar18 + lVar17));
    if ((int)uVar15 == 0) {
      return uVar15;
    }
    bVar3 = *(byte *)(lVar18 + lVar17);
    uVar15 = FUN_003c47dc(*(undefined1 *)(lVar11 + lVar17));
    if ((int)uVar15 == 0) {
      return uVar15;
    }
    uVar1 = uVar13 + 2;
    if (param_2[1] != 0x17) {
      uVar1 = uVar13 + 1;
    }
    iVar6 = (uint)*(byte *)(lVar11 + lVar17) + (uint)bVar3 * 10 + -0x210;
    if (iVar6 < *(int *)(&DAT_00206bec + (ulong)uVar1 * 4)) {
      return 0;
    }
    if (*(int *)(&DAT_00206c10 + (ulong)uVar1 * 4) < iVar6) {
      return 0;
    }
    uVar19 = uVar19 + 5;
    iVar10 = iVar10 * 0xe10 + iVar6 * 0x3c;
    if (iVar10 != 0) {
      iVar6 = -iVar10;
      if (cVar4 == '-') {
        iVar6 = iVar10;
      }
      uVar15 = FUN_003cac24(&local_a0,0,(long)iVar6);
      if ((int)uVar15 == 0) {
        return uVar15;
      }
    }
  }
  if (uVar19 != uVar2) {
    return 0;
  }
  if (param_1 == (undefined8 *)0x0) {
    return 1;
  }
  param_1[1] = uStack_98;
  *param_1 = local_a0;
  param_1[3] = local_88;
  param_1[2] = local_90;
  param_1[5] = uStack_78;
  param_1[4] = local_80;
  param_1[6] = local_70;
  return 1;
}


// ===== 003c0be4  FUN_003c0be4 =====

undefined4 * FUN_003c0be4(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  char *pcVar10;
  
  if (param_3 == 0x18) {
    bVar6 = true;
    uVar8 = 0x18;
joined_r0x003c0c64:
    puVar9 = param_1;
    if ((param_1 == (undefined4 *)0x0) &&
       (puVar9 = (undefined4 *)FUN_0038edac(), puVar9 == (undefined4 *)0x0)) {
      return (undefined4 *)0x0;
    }
    iVar7 = FUN_0038ebe0(puVar9,0,0x14);
    if (iVar7 != 0) {
      iVar7 = param_2[4];
      puVar9[1] = uVar8;
      if (iVar7 != 0x7fffffff) {
        iVar5 = param_2[5];
        if (bVar6) {
          if (0x7ffff893 < iVar5) goto LAB_003c0cb0;
          uVar2 = param_2[2];
          uVar3 = param_2[3];
          uVar8 = *param_2;
          uVar4 = param_2[1];
          pcVar10 = "%04d%02d%02d%02d%02d%02dZ";
          iVar1 = 0x76c;
        }
        else {
          pcVar10 = "%02d%02d%02d%02d%02d%02dZ";
          uVar2 = param_2[2];
          uVar3 = param_2[3];
          iVar1 = (iVar5 / 100) * -100;
          uVar8 = *param_2;
          uVar4 = param_2[1];
        }
        uVar8 = FUN_0037cd5c(*(undefined8 *)(puVar9 + 2),0x14,pcVar10,iVar5 + iVar1,iVar7 + 1,uVar3,
                             uVar2,uVar4,uVar8);
        *puVar9 = uVar8;
        return puVar9;
      }
    }
  }
  else {
    if (param_3 == 0x17) {
      if (0xffffff9b < param_2[5] - 0x96) {
        bVar6 = false;
        uVar8 = 0x17;
        goto joined_r0x003c0c64;
      }
    }
    else if (param_3 == -1) {
      bVar6 = param_2[5] - 0x96 < 0xffffff9c;
      uVar8 = 0x17;
      if (bVar6) {
        uVar8 = 0x18;
      }
      goto joined_r0x003c0c64;
    }
    puVar9 = (undefined4 *)0x0;
  }
LAB_003c0cb0:
  if (puVar9 != param_1) {
    FUN_0038eddc(puVar9);
  }
  return (undefined4 *)0x0;
}


// ===== 003c0d68  FUN_003c0d68 =====

undefined8 FUN_003c0d68(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [56];
  undefined8 local_8;
  
  local_8 = param_2;
  lVar1 = FUN_003cabd8(&local_8,auStack_58);
  if (lVar1 != 0) {
    uVar2 = FUN_003c0be4(param_1,lVar1,0xffffffff);
    return uVar2;
  }
  FUN_00379868();
  FUN_0037995c("crypto/asn1/a_time.c",0x152,"ASN1_TIME_adj");
  FUN_00379a5c(0xd,0xad,0);
  return 0;
}


// ===== 003c0df0  FUN_003c0df0 =====

undefined8 FUN_003c0df0(undefined8 param_1,undefined8 param_2,int param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_70 [56];
  undefined8 local_38;
  
  local_38 = param_2;
  lVar2 = FUN_003cabd8(&local_38,auStack_70);
  if (lVar2 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/asn1/a_time.c",0x152,"ASN1_TIME_adj");
    FUN_00379a5c(0xd,0xad,0);
  }
  else if (((param_3 == 0) && (param_4 == 0)) ||
          (iVar1 = FUN_003cac24(lVar2,param_3,param_4), iVar1 != 0)) {
    uVar3 = FUN_003c0be4(param_1,lVar2,0xffffffff);
    return uVar3;
  }
  return 0;
}


// ===== 003c0eac  FUN_003c0eac =====

undefined8 FUN_003c0eac(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 4) == 0x17) {
    uVar1 = FUN_003c1a94();
    return uVar1;
  }
  if (*(int *)(param_1 + 4) == 0x18) {
    uVar1 = FUN_003c18e0();
    return uVar1;
  }
  return 0;
}


// ===== 003c0ed0  FUN_003c0ed0 =====

undefined4 * FUN_003c0ed0(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  time_t tStack_18;
  
  if (param_1 == 0) {
    time(&tStack_18);
    local_40 = 0;
    uStack_68 = 0;
    local_70 = 0;
    uStack_58 = 0;
    local_60 = 0;
    uStack_48 = 0;
    local_50 = 0;
    lVar3 = FUN_003cabd8(&tStack_18,&local_70);
    if (lVar3 == 0) {
      return (undefined4 *)0x0;
    }
  }
  else {
    iVar1 = FUN_003c04dc(&local_70,param_1);
    if (iVar1 == 0) {
      return (undefined4 *)0x0;
    }
  }
  if ((param_2 == (undefined8 *)0x0) ||
     (puVar4 = (undefined4 *)*param_2, puVar5 = puVar4, puVar4 == (undefined4 *)0x0)) {
    puVar4 = (undefined4 *)FUN_0038edac();
    puVar5 = (undefined4 *)0x0;
    if (puVar4 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
  }
  iVar1 = FUN_0038ebe0(puVar4,0,0x14);
  if (iVar1 != 0) {
    puVar4[1] = 0x18;
    if (((int)local_60 != 0x7fffffff) && (local_60._4_4_ < 0x7ffff894)) {
      uVar2 = FUN_0037cd5c(*(undefined8 *)(puVar4 + 2),0x14,"%04d%02d%02d%02d%02d%02dZ",
                           local_60._4_4_ + 0x76c,(int)local_60 + 1,uStack_68._4_4_,
                           uStack_68 & 0xffffffff,local_70._4_4_,(undefined4)local_70);
      *puVar4 = uVar2;
      if (param_2 != (undefined8 *)0x0) {
        *param_2 = puVar4;
      }
      return puVar4;
    }
  }
  if (puVar4 != puVar5) {
    FUN_0038eddc(puVar4);
    return (undefined4 *)0x0;
  }
  return (undefined4 *)0x0;
}


// ===== 003c1024  FUN_003c1024 =====

ulong FUN_003c1024(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  time_t tStack_8;
  
  if (param_1 != 0) {
    uVar1 = FUN_003c04dc(param_2,param_1);
    return uVar1;
  }
  time(&tStack_8);
  param_2[6] = 0;
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  lVar2 = FUN_003cabd8(&tStack_8,param_2);
  return (ulong)(lVar2 != 0);
}


// ===== 003c1080  FUN_003c1080 =====

undefined8 FUN_003c1080(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_003c1ab4();
  if (iVar1 != 0) {
    return 1;
  }
  uVar2 = FUN_003c1900(param_1,param_2);
  return uVar2;
}


// ===== 003c10c0  FUN_003c10c0 =====

undefined8 FUN_003c10c0(long param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [20];
  int local_5c;
  int local_38;
  int local_34;
  char *local_30;
  undefined8 uStack_28;
  
  sVar2 = strlen(param_2);
  uStack_28 = 0x100;
  local_38 = (int)sVar2;
  local_34 = 0x17;
  local_30 = param_2;
  iVar1 = FUN_003c1a94(&local_38);
  if (iVar1 == 0) {
    local_34 = 0x18;
    iVar1 = FUN_003c18e0(&local_38);
    if (iVar1 == 0) {
      return 0;
    }
  }
  if ((param_1 == 0) || (local_34 != 0x18)) {
    if (param_1 != 0) goto LAB_003c1184;
  }
  else {
    iVar1 = FUN_003c04dc(auStack_70,&local_38);
    if (iVar1 == 0) {
      return 0;
    }
    if (0xffffff9b < local_5c - 0x96U) {
      lVar3 = (long)local_38;
      local_38 = local_38 + -2;
      local_30 = (char *)FUN_003c8474(lVar3 + -1,"crypto/asn1/a_time.c",0x1ac);
      if (local_30 == (char *)0x0) {
        return 0;
      }
      memcpy(local_30,param_2 + 2,(long)local_38);
      local_34 = 0x17;
    }
LAB_003c1184:
    iVar1 = FUN_0038eb7c(param_1,&local_38);
    if (iVar1 == 0) {
      uVar4 = 0;
      goto joined_r0x003c11ec;
    }
  }
  uVar4 = 1;
joined_r0x003c11ec:
  if (local_30 == param_2) {
    return uVar4;
  }
  FUN_003c86b4(local_30,"crypto/asn1/a_time.c",0x1b8);
  return uVar4;
}


// ===== 003c1204  FUN_003c1204 =====

void FUN_003c1204(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  time_t local_b0 [8];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  time_t tStack_18;
  
  if (param_3 == 0) {
    time(local_b0);
    local_40 = 0;
    uStack_68 = 0;
    local_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    local_50 = 0;
    lVar2 = FUN_003cabd8(local_b0,&local_70);
    if (lVar2 == 0) {
      return;
    }
  }
  else {
    iVar1 = FUN_003c04dc(&local_70,param_3);
    if (iVar1 == 0) {
      return;
    }
  }
  if (param_4 == 0) {
    time(&tStack_18);
    local_b0[6] = 0;
    local_b0[1] = 0;
    local_b0[0] = 0;
    local_b0[3] = 0;
    local_b0[2] = 0;
    local_b0[5] = 0;
    local_b0[4] = 0;
    lVar2 = FUN_003cabd8(&tStack_18,local_b0);
    if (lVar2 != 0) goto LAB_003c12c4;
  }
  else {
    iVar1 = FUN_003c04dc(local_b0,param_4);
    if (iVar1 != 0) {
LAB_003c12c4:
      FUN_003caee0(param_1,param_2,&local_70,local_b0);
      return;
    }
  }
  return;
}


// ===== 003c12ec  FUN_003c12ec =====

bool FUN_003c12ec(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_003c1328(param_1,param_2,0);
  return 0 < iVar1;
}


// ===== 003c130c  FUN_003c130c =====

bool FUN_003c130c(void)

{
  int iVar1;
  
  iVar1 = FUN_003c1328();
  return 0 < iVar1;
}


// ===== 003c1328  FUN_003c1328 =====

uint FUN_003c1328(undefined8 param_1,int *param_2,ulong param_3)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  char *pcVar8;
  long lVar9;
  undefined8 in_stack_ffffffffffffff60;
  undefined4 uVar10;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  int local_78;
  int local_74;
  
  iVar3 = FUN_003c04dc(&local_88);
  uVar10 = (undefined4)((ulong)in_stack_ffffffffffffff60 >> 0x20);
  if (iVar3 == 0) {
    iVar3 = FUN_0037df4c(param_1,"Bad time value",0xe);
    return -(uint)(iVar3 != 0);
  }
  iVar3 = *param_2;
  lVar5 = *(long *)(param_2 + 2);
  cVar2 = *(char *)(lVar5 + iVar3 + -1);
  if (param_2[1] == 0x18) {
    if ((iVar3 < 0x10) || (pcVar8 = (char *)(lVar5 + 0xe), *pcVar8 != '.')) {
      pcVar8 = (char *)0x0;
      uVar7 = 0;
    }
    else {
      uVar7 = (ulong)(iVar3 - 0xe);
      lVar9 = 0;
      do {
        iVar3 = FUN_003c47dc(*(undefined1 *)(lVar5 + 0xf + lVar9));
        uVar10 = (undefined4)((ulong)in_stack_ffffffffffffff60 >> 0x20);
        if (iVar3 == 0) {
          uVar6 = (int)lVar9 + 1;
          uVar7 = (ulong)uVar6;
          goto joined_r0x003c14e4;
        }
        lVar9 = lVar9 + 1;
      } while (uVar7 - 1 != lVar9);
    }
    uVar6 = (uint)uVar7;
joined_r0x003c14e4:
    if ((param_3 & 0xf) == 1) {
      puVar1 = &UNK_001dc64c;
      if (cVar2 != 'Z') {
        puVar1 = &DAT_001c717f;
      }
      iVar3 = FUN_0037b9f8(param_1,"%4d-%02d-%02d %02d:%02d:%02d%.*s%s",local_74 + 0x76c,
                           local_78 + 1,local_7c,local_80,local_84,local_88,CONCAT44(uVar10,uVar6),
                           pcVar8,puVar1);
      goto LAB_003c1540;
    }
    pcVar4 = "%s %2d %02d:%02d:%02d%.*s %d%s";
  }
  else {
    if ((param_3 & 0xf) == 1) {
      puVar1 = &UNK_001dc64c;
      if (cVar2 != 'Z') {
        puVar1 = &DAT_001c717f;
      }
      iVar3 = FUN_0037b9f8(param_1,"%4d-%02d-%02d %02d:%02d:%02d%s",local_74 + 0x76c,local_78 + 1,
                           local_7c,local_80,local_84,local_88,puVar1);
      goto LAB_003c1540;
    }
    pcVar4 = "%s %2d %02d:%02d:%02d %d%s";
    pcVar8 = " GMT";
    if (cVar2 != 'Z') {
      pcVar8 = "";
    }
    uVar7 = (ulong)(local_74 + 0x76c);
  }
  iVar3 = FUN_0037b9f8(param_1,pcVar4,&UNK_00206c64 + (long)local_78 * 4,local_7c,local_80,local_84,
                       local_88,uVar7,pcVar8);
LAB_003c1540:
  return (uint)(0 < iVar3);
}


// ===== 003c1564  FUN_003c1564 =====

int FUN_003c1564(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  uint local_90;
  uint local_8c;
  time_t atStack_88 [7];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = param_2;
  if (param_1 == 0) {
    time(atStack_88);
    local_20 = 0;
    uStack_48 = 0;
    local_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    local_30 = 0;
    lVar2 = FUN_003cabd8(atStack_88,&local_50);
    if (lVar2 == 0) {
      return -2;
    }
  }
  else {
    iVar1 = FUN_003c04dc(&local_50,param_1);
    if (iVar1 == 0) {
      return -2;
    }
  }
  lVar2 = FUN_003cabd8(&local_18,atStack_88);
  if ((lVar2 != 0) && (iVar1 = FUN_003caee0(&local_8c,&local_90,atStack_88,&local_50), iVar1 != 0))
  {
    iVar1 = 1;
    if (((int)local_8c < 1) && ((int)local_90 < 1)) {
      iVar1 = (int)(local_8c | local_90) >> 0x1f;
    }
    return iVar1;
  }
  return -2;
}


// ===== 003c1628  FUN_003c1628 =====

undefined8 FUN_003c1628(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  int local_48;
  int local_44;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  uVar3 = FUN_003c04dc(&local_58,param_1);
  iVar1 = local_44;
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  uVar3 = FUN_0038ebe0(param_1,0,0x14);
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  uVar2 = 0x17;
  if (iVar1 - 0x96U < 0xffffff9c) {
    uVar2 = 0x18;
  }
  param_1[1] = uVar2;
  if (local_48 == 0x7fffffff) {
LAB_003c168c:
    uVar3 = 0;
  }
  else {
    if (iVar1 - 0x96U < 0xffffff9c) {
      if (0x7ffff893 < local_44) goto LAB_003c168c;
      pcVar4 = "%04d%02d%02d%02d%02d%02dZ";
      iVar1 = 0x76c;
    }
    else {
      pcVar4 = "%02d%02d%02d%02d%02d%02dZ";
      iVar1 = (local_44 / 100) * -100;
    }
    uVar2 = FUN_0037cd5c(*(undefined8 *)(param_1 + 2),0x14,pcVar4,local_44 + iVar1,local_48 + 1,
                         uStack_4c,local_50,uStack_54,local_58);
    *param_1 = uVar2;
    uVar3 = 1;
  }
  return uVar3;
}


// ===== 003c1730  FUN_003c1730 =====

int FUN_003c1730(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint local_18;
  uint local_14;
  
  iVar1 = FUN_003c1204(&local_14,&local_18,param_2,param_1);
  if (iVar1 == 0) {
    return -2;
  }
  iVar1 = 1;
  if ((int)local_14 < 1) {
    iVar1 = 1;
    if ((int)local_18 < 1) {
      iVar1 = (int)(local_14 | local_18) >> 0x1f;
    }
  }
  return iVar1;
}


// ===== 003c1794  FUN_003c1794 =====

long FUN_003c1794(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  tm *__tp;
  time_t tVar3;
  long lVar4;
  time_t tStack_28;
  
  lVar2 = FUN_0039a5f4(&DAT_00769450);
  iVar1 = FUN_003c1ab4(lVar2,param_1);
  if (((iVar1 != 0) || (iVar1 = FUN_003c1900(lVar2,param_1), iVar1 != 0)) &&
     (__tp = (tm *)FUN_003c83a4(0x38,"crypto/asn1/a_time.c",0x272), __tp != (tm *)0x0)) {
    if (lVar2 == 0) {
      time(&tStack_28);
      __tp->tm_zone = (char *)0x0;
      __tp->tm_hour = 0;
      __tp->tm_mday = 0;
      __tp->tm_sec = 0;
      __tp->tm_min = 0;
      __tp->tm_wday = 0;
      __tp->tm_yday = 0;
      __tp->tm_mon = 0;
      __tp->tm_year = 0;
      __tp->tm_gmtoff = 0;
      *(undefined8 *)&__tp->tm_isdst = 0;
      lVar4 = FUN_003cabd8(&tStack_28,__tp);
      if (lVar4 != 0) goto LAB_003c1804;
    }
    else {
      iVar1 = FUN_003c04dc(__tp,lVar2);
      if (iVar1 != 0) {
LAB_003c1804:
        FUN_0038c75c(lVar2,&DAT_00769450);
        tVar3 = mktime(__tp);
        lVar2 = *(long *)PTR_timezone_007a1b78;
        FUN_003c86b4(__tp,"crypto/asn1/a_time.c",0x29b);
        return tVar3 - lVar2;
      }
    }
    FUN_003c86b4(__tp,"crypto/asn1/a_time.c",0x278);
  }
  FUN_0038c75c(lVar2,&DAT_00769450);
  return -1;
}


// ===== 003c18bc  FUN_003c18bc =====

void FUN_003c18bc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0038a514();
  FUN_003a4098(uVar1,param_1);
  return;
}


// ===== 003c18e0  FUN_003c18e0 =====

undefined8 FUN_003c18e0(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 4) == 0x18) {
    uVar1 = FUN_003c04dc(0,param_1);
    return uVar1;
  }
  return 0;
}


// ===== 003c1900  FUN_003c1900 =====

undefined8 FUN_003c1900(long param_1,char *param_2)

{
  size_t sVar1;
  undefined8 uVar2;
  undefined4 local_38;
  undefined4 local_34;
  char *local_30;
  undefined8 uStack_28;
  
  local_34 = 0x18;
  sVar1 = strlen(param_2);
  local_38 = (undefined4)sVar1;
  uStack_28 = 0;
  local_30 = param_2;
  uVar2 = FUN_003c04dc(0,&local_38);
  if (((int)uVar2 != 0) &&
     ((param_1 == 0 || (uVar2 = FUN_0038eb7c(param_1,&local_38), (int)uVar2 != 0)))) {
    uVar2 = 1;
  }
  return uVar2;
}


// ===== 003c1968  FUN_003c1968 =====

void FUN_003c1968(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_58 [56];
  undefined8 local_8;
  
  local_8 = param_2;
  lVar1 = FUN_003cabd8(&local_8,auStack_58);
  if (lVar1 != 0) {
    FUN_003c0be4(param_1,lVar1,0x18);
  }
  return;
}


// ===== 003c19b0  FUN_003c19b0 =====

long FUN_003c19b0(undefined8 param_1,undefined8 param_2,int param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined1 auStack_70 [56];
  undefined8 local_38;
  
  local_38 = param_2;
  lVar2 = FUN_003cabd8(&local_38,auStack_70);
  if (lVar2 != 0) {
    if (((param_3 != 0) || (param_4 != 0)) &&
       (iVar1 = FUN_003cac24(lVar2,param_3,param_4), iVar1 == 0)) {
      return 0;
    }
    lVar2 = FUN_003c0be4(param_1,lVar2,0x18);
  }
  return lVar2;
}


// ===== 003c1a40  FUN_003c1a40 =====

undefined8 FUN_003c1a40(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 4) == 0x18) {
    uVar1 = FUN_003c12ec();
    return uVar1;
  }
  return 0;
}


// ===== 003c1a58  FUN_003c1a58 =====

void FUN_003c1a58(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0038a4e4();
  FUN_003a4098(uVar1,param_1);
  return;
}


// ===== 003c1a7c  FUN_003c1a7c =====

undefined8 FUN_003c1a7c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 4) == 0x17) {
    uVar1 = FUN_003c04dc();
    return uVar1;
  }
  return 0;
}


// ===== 003c1a94  FUN_003c1a94 =====

undefined8 FUN_003c1a94(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 4) == 0x17) {
    uVar1 = FUN_003c04dc(0,param_1);
    return uVar1;
  }
  return 0;
}


// ===== 003c1ab4  FUN_003c1ab4 =====

undefined8 FUN_003c1ab4(long param_1,char *param_2)

{
  size_t sVar1;
  undefined8 uVar2;
  undefined4 local_38;
  undefined4 local_34;
  char *local_30;
  undefined8 uStack_28;
  
  local_34 = 0x17;
  sVar1 = strlen(param_2);
  local_38 = (undefined4)sVar1;
  uStack_28 = 0;
  local_30 = param_2;
  uVar2 = FUN_003c04dc(0,&local_38);
  if (((int)uVar2 != 0) &&
     ((param_1 == 0 || (uVar2 = FUN_0038eb7c(param_1,&local_38), (int)uVar2 != 0)))) {
    uVar2 = 1;
  }
  return uVar2;
}


// ===== 003c1b1c  FUN_003c1b1c =====

void FUN_003c1b1c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_58 [56];
  undefined8 local_8;
  
  local_8 = param_2;
  lVar1 = FUN_003cabd8(&local_8,auStack_58);
  if (lVar1 != 0) {
    FUN_003c0be4(param_1,lVar1,0x17);
  }
  return;
}


// ===== 003c1b64  FUN_003c1b64 =====

long FUN_003c1b64(undefined8 param_1,undefined8 param_2,int param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined1 auStack_70 [56];
  undefined8 local_38;
  
  local_38 = param_2;
  lVar2 = FUN_003cabd8(&local_38,auStack_70);
  if (lVar2 != 0) {
    if (((param_3 != 0) || (param_4 != 0)) &&
       (iVar1 = FUN_003cac24(lVar2,param_3,param_4), iVar1 == 0)) {
      return 0;
    }
    lVar2 = FUN_003c0be4(param_1,lVar2,0x17);
  }
  return lVar2;
}


// ===== 003c1bf4  FUN_003c1bf4 =====

int FUN_003c1bf4(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  uint local_90;
  uint local_8c;
  undefined1 auStack_88 [56];
  undefined1 auStack_50 [56];
  undefined8 local_18;
  
  if ((((*(int *)(param_1 + 4) == 0x17) &&
       (local_18 = param_2, iVar1 = FUN_003c04dc(auStack_50,param_1), iVar1 != 0)) &&
      (lVar2 = FUN_003cabd8(&local_18,auStack_88), lVar2 != 0)) &&
     (iVar1 = FUN_003caee0(&local_8c,&local_90,auStack_88,auStack_50), iVar1 != 0)) {
    iVar1 = 1;
    if (((int)local_8c < 1) && ((int)local_90 < 1)) {
      iVar1 = (int)(local_8c | local_90) >> 0x1f;
    }
    return iVar1;
  }
  return -2;
}


// ===== 003c1c8c  FUN_003c1c8c =====

undefined8 FUN_003c1c8c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 4) == 0x17) {
    uVar1 = FUN_003c12ec();
    return uVar1;
  }
  return 0;
}


// ===== 003c1ca4  FUN_003c1ca4 =====

void FUN_003c1ca4(void)

{
  FUN_003c1cb0();
  return;
}


// ===== 003c1cb0  FUN_003c1cb0 =====

ulong FUN_003c1cb0(undefined8 *param_1,char *param_2,ulong param_3,uint param_4,ulong param_5,
                  long param_6,long param_7)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  uint *puVar5;
  undefined8 uVar6;
  char *pcVar7;
  uint uVar8;
  ulong uVar9;
  uint *puVar10;
  code *pcVar11;
  uint uVar12;
  uint local_74;
  ulong local_70;
  ulong local_68;
  
  uVar9 = param_3 & 0xffffffff;
  local_74 = 0;
  local_70 = param_5;
  if ((int)param_3 == -1) {
    uVar9 = strlen(param_2);
    if (param_5 == 0) goto LAB_003c1d18;
LAB_003c1d00:
    iVar3 = (int)uVar9;
  }
  else {
    if (param_5 != 0) goto LAB_003c1d00;
LAB_003c1d18:
    local_70 = 0x2806;
    iVar3 = (int)uVar9;
  }
  if (iVar3 < 0) {
    return 0xffffffff;
  }
  uVar2 = (uint)uVar9;
  if ((int)param_4 < 0x1002) {
    if (param_4 == 0x1000) {
      uVar12 = 0;
      if (uVar2 != 0) {
        uVar4 = uVar9 & 0xffffffff;
        pcVar7 = param_2;
        uVar12 = 0;
        do {
          uVar2 = FUN_003c24e8(pcVar7,uVar4,&local_68);
          if ((((int)uVar2 < 0) || (0x10 < local_68 >> 0x10)) ||
             ((local_68 & 0xfffffffffffff800) == 0xd800)) {
            FUN_00379868();
            FUN_0037995c("crypto/asn1/a_mbstr.c",0x55,"ASN1_mbstring_ncopy");
            uVar6 = 0x86;
            goto LAB_003c20d4;
          }
          pcVar7 = pcVar7 + uVar2;
          uVar2 = (int)uVar4 - uVar2;
          uVar4 = (ulong)uVar2;
          uVar12 = uVar12 + 1;
        } while (uVar2 != 0);
      }
    }
    else {
      uVar12 = uVar2;
      if (param_4 != 0x1001) {
LAB_003c1d6c:
        FUN_00379868();
        FUN_0037995c("crypto/asn1/a_mbstr.c",0x5f,"ASN1_mbstring_ncopy");
        uVar6 = 0xa0;
        goto LAB_003c20d4;
      }
    }
LAB_003c1e70:
    if ((param_6 < 1) || (param_6 <= (int)uVar12)) {
      if ((param_7 < 1) || ((int)uVar12 <= param_7)) {
        iVar3 = FUN_003c21a4(param_2,uVar9 & 0xffffffff,param_4,FUN_003c2320,&local_70);
        if (iVar3 < 0) {
          FUN_00379868();
          FUN_0037995c("crypto/asn1/a_mbstr.c",0x71,"ASN1_mbstring_ncopy");
          uVar6 = 0x7c;
          goto LAB_003c20d4;
        }
        uVar2 = (uint)local_70;
        if ((local_70 & 1) == 0) {
          if ((uVar2 >> 1 & 1) == 0) {
            if ((uVar2 >> 4 & 1) == 0) {
              if ((uVar2 >> 2 & 1) == 0) {
                if ((uVar2 >> 0xb & 1) == 0) {
                  bVar1 = (local_70 & 0x100) != 0;
                  uVar2 = 0xc;
                  if (bVar1) {
                    uVar2 = 0x1c;
                  }
                  uVar4 = (ulong)uVar2;
                  uVar2 = 0x1000;
                  if (bVar1) {
                    uVar2 = 0x1004;
                  }
                }
                else {
                  uVar2 = 0x1002;
                  uVar4 = 0x1e;
                }
              }
              else {
                uVar2 = 0x1001;
                uVar4 = 0x14;
              }
            }
            else {
              uVar2 = 0x1001;
              uVar4 = 0x16;
            }
          }
          else {
            uVar2 = 0x1001;
            uVar4 = 0x13;
          }
        }
        else {
          uVar2 = 0x1001;
          uVar4 = 0x12;
        }
        if (param_1 == (undefined8 *)0x0) {
          return uVar4;
        }
        puVar10 = (uint *)*param_1;
        if (puVar10 == (uint *)0x0) {
          puVar5 = (uint *)FUN_0038ee84();
          if (puVar5 != (uint *)0x0) {
            *param_1 = puVar5;
            goto LAB_003c1ff8;
          }
          FUN_00379868();
          uVar6 = 0x94;
        }
        else {
          FUN_0038ee3c(puVar10,0,0);
          puVar10[1] = (uint)uVar4;
          puVar5 = puVar10;
LAB_003c1ff8:
          if (uVar2 != param_4) {
            pcVar11 = (code *)0x0;
            uVar8 = 0;
            if (uVar2 < 0x1002) {
              if (uVar2 == 0x1000) {
                local_74 = 0;
                FUN_003c21a4(param_2,uVar9 & 0xffffffff,param_4,FUN_003c2464,&local_74);
                pcVar11 = FUN_003c24a8;
                uVar8 = local_74;
              }
              else if (uVar2 == 0x1001) {
                pcVar11 = FUN_003c2404;
                uVar8 = uVar12;
                local_74 = uVar12;
              }
            }
            else if (uVar2 == 0x1002) {
              uVar8 = uVar12 << 1;
              pcVar11 = FUN_003c2420;
              local_74 = uVar8;
            }
            else if (uVar2 == 0x1004) {
              uVar8 = uVar12 << 2;
              pcVar11 = FUN_003c2444;
              local_74 = uVar8;
            }
            local_68 = FUN_003c83a4((long)(int)(uVar8 + 1),"crypto/asn1/a_mbstr.c",0xbd);
            if (local_68 == 0) {
              if (puVar10 != (uint *)0x0) {
                return 0xffffffff;
              }
              FUN_0038eddc(puVar5);
              *param_1 = 0;
              return 0xffffffff;
            }
            *(ulong *)(puVar5 + 2) = local_68;
            *puVar5 = local_74;
            *(undefined1 *)(local_68 + (long)(int)local_74) = 0;
            FUN_003c21a4(param_2,uVar9 & 0xffffffff,param_4,pcVar11,&local_68);
            return uVar4;
          }
          iVar3 = FUN_0038ebe0(puVar5,param_2,uVar9 & 0xffffffff);
          if (iVar3 != 0) {
            return uVar4;
          }
          if (puVar10 == (uint *)0x0) {
            uVar4 = FUN_0038eddc(puVar5);
            *param_1 = 0;
          }
          FUN_00379868(uVar4);
          uVar6 = 0xa0;
        }
        FUN_0037995c("crypto/asn1/a_mbstr.c",uVar6,"ASN1_mbstring_ncopy");
        uVar6 = 0x8000d;
        goto LAB_003c20d4;
      }
      FUN_00379868();
      FUN_0037995c("crypto/asn1/a_mbstr.c",0x6a,"ASN1_mbstring_ncopy");
      pcVar7 = "maxsize=%ld";
      uVar6 = 0x97;
    }
    else {
      FUN_00379868();
      FUN_0037995c("crypto/asn1/a_mbstr.c",100,"ASN1_mbstring_ncopy");
      pcVar7 = "minsize=%ld";
      uVar6 = 0x98;
      param_7 = param_6;
    }
    FUN_00379a5c(0xd,uVar6,pcVar7,param_7);
  }
  else {
    if (param_4 == 0x1004) {
      if ((uVar9 & 3) == 0) {
        uVar12 = uVar2 >> 2;
        goto LAB_003c1e70;
      }
      FUN_00379868();
      FUN_0037995c("crypto/asn1/a_mbstr.c",0x4a,"ASN1_mbstring_ncopy");
      uVar6 = 0x85;
    }
    else {
      if (param_4 != 0x1002) goto LAB_003c1d6c;
      if ((uVar9 & 1) == 0) {
        uVar12 = uVar2 >> 1;
        goto LAB_003c1e70;
      }
      FUN_00379868();
      FUN_0037995c("crypto/asn1/a_mbstr.c",0x42,"ASN1_mbstring_ncopy");
      uVar6 = 0x81;
    }
LAB_003c20d4:
    FUN_00379a5c(0xd,uVar6,0);
  }
  return 0xffffffff;
}


// ===== 003c21a4  FUN_003c21a4 =====

undefined8 FUN_003c21a4(ushort *param_1,int param_2,int param_3,code *param_4,undefined8 param_5)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 local_28;
  
  if (param_2 == 0) {
    return 1;
  }
  if (param_3 == 0x1001) {
    if (param_4 != (code *)0x0) {
      do {
        uVar2 = (*param_4)((char)*param_1,param_5);
        if ((int)uVar2 < 1) {
          return uVar2;
        }
        param_2 = param_2 + -1;
        param_1 = (ushort *)((long)param_1 + 1);
      } while (param_2 != 0);
    }
  }
  else if (param_3 == 0x1002) {
    if (param_4 != (code *)0x0) {
      do {
        uVar2 = (*param_4)((uint)(*param_1 >> 8) | (*param_1 & 0xff00ff) << 8,param_5);
        if ((int)uVar2 < 1) {
          return uVar2;
        }
        param_2 = param_2 + -2;
        param_1 = param_1 + 1;
      } while (param_2 != 0);
    }
  }
  else if (param_3 == 0x1004) {
    puVar3 = (undefined1 *)((long)param_1 + 3);
    do {
      if ((param_4 != (code *)0x0) &&
         (uVar1 = (*(uint *)(puVar3 + -3) & 0xff00ff00) >> 8 |
                  (*(uint *)(puVar3 + -3) & 0xff00ff) << 8,
         uVar2 = (*param_4)(uVar1 >> 0x10 | uVar1 << 0x10,param_5), (int)uVar2 < 1)) {
        return uVar2;
      }
      param_2 = param_2 + -4;
      puVar3 = puVar3 + 4;
    } while (param_2 != 0);
  }
  else {
    if (param_4 == (code *)0x0) {
      do {
        uVar1 = FUN_003c24e8(param_1,param_2,&local_28);
        if ((int)uVar1 < 0) {
          return 0xffffffff;
        }
        param_1 = (ushort *)((long)param_1 + (ulong)uVar1);
        param_2 = param_2 - uVar1;
      } while (param_2 != 0);
      return 1;
    }
    do {
      uVar1 = FUN_003c24e8(param_1,param_2,&local_28);
      if ((int)uVar1 < 0) {
        return 0xffffffff;
      }
      uVar2 = (*param_4)(local_28,param_5);
      if ((int)uVar2 < 1) {
        return uVar2;
      }
      param_1 = (ushort *)((long)param_1 + (ulong)uVar1);
      param_2 = param_2 - uVar1;
    } while (param_2 != 0);
  }
  return 1;
}


// ===== 003c2320  FUN_003c2320 =====

undefined8 FUN_003c2320(ulong param_1,ulong *param_2)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = *param_2;
  uVar1 = param_1;
  if (0x7ffffffe < param_1) {
    uVar1 = 0x7fffffff;
  }
  if ((uVar3 & 1) != 0) {
    iVar2 = FUN_003c4784(uVar1 & 0xffffffff);
    if (iVar2 == 0 && (uint)uVar1 != 0x20) {
      uVar3 = uVar3 & 0xfffffffffffffffe;
    }
  }
  uVar4 = uVar3;
  if (((uint)uVar3 >> 1 & 1) != 0) {
    iVar2 = FUN_003c475c(uVar1 & 0xffffffff,0x800);
    uVar4 = uVar3 & 0xfffffffffffffffd;
    if (iVar2 != 0) {
      uVar4 = uVar3;
    }
  }
  if (0x7f < (uint)uVar1) {
    uVar4 = uVar4 & 0xffffffffffffffef;
  }
  uVar1 = uVar4 & 0xfffffffffffffffb;
  if (param_1 < 0x100) {
    uVar1 = uVar4;
  }
  uVar3 = uVar1 & 0xfffffffffffff7ff;
  if (param_1 >> 0x10 == 0) {
    uVar3 = uVar1;
  }
  uVar1 = uVar3;
  if ((((((uint)uVar3 >> 0xd & 1) == 0) ||
       (uVar1 = uVar3 & 0xffffffffffffdfff, 0x10 < param_1 >> 0x10)) ||
      ((param_1 & 0xfffffffffffff800) == 0xd800)) && (uVar3 = uVar1, uVar3 == 0)) {
    return 0xffffffff;
  }
  *param_2 = uVar3;
  return 1;
}


// ===== 003c2404  FUN_003c2404 =====

undefined8 FUN_003c2404(undefined1 param_1,long *param_2)

{
  *(undefined1 *)*param_2 = param_1;
  *param_2 = *param_2 + 1;
  return 1;
}


// ===== 003c2420  FUN_003c2420 =====

undefined8 FUN_003c2420(uint param_1,long *param_2)

{
  *(ushort *)*param_2 = (ushort)(param_1 >> 8) & 0xff | (ushort)((param_1 & 0xff00ff) << 8);
  *param_2 = *param_2 + 2;
  return 1;
}


// ===== 003c2444  FUN_003c2444 =====

undefined8 FUN_003c2444(uint param_1,long *param_2)

{
  uint uVar1;
  
  uVar1 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  *(uint *)*param_2 = uVar1 >> 0x10 | uVar1 << 0x10;
  *param_2 = *param_2 + 4;
  return 1;
}


// ===== 003c2464  FUN_003c2464 =====

undefined8 FUN_003c2464(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_003c265c(0,0xffffffff,param_1);
  iVar1 = (int)uVar2;
  if (0 < iVar1) {
    uVar2 = 1;
    *param_2 = *param_2 + iVar1;
  }
  return uVar2;
}


// ===== 003c24a8  FUN_003c24a8 =====

undefined8 FUN_003c24a8(undefined8 param_1,long *param_2)

{
  int iVar1;
  
  iVar1 = FUN_003c265c(*param_2,0xff,param_1);
  *param_2 = *param_2 + (long)iVar1;
  return 1;
}


// ===== 003c24e8  FUN_003c24e8 =====

undefined8 FUN_003c24e8(byte *param_1,uint param_2,ulong *param_3)

{
  uint uVar1;
  ulong uVar2;
  
  if ((int)param_2 < 1) {
    return 0;
  }
  uVar1 = (uint)*param_1;
  if (-1 < (char)*param_1) {
    *param_3 = (ulong)uVar1;
    return 1;
  }
  if ((uVar1 & 0xe0) == 0xc0) {
    if (param_2 == 1) {
      return 0xffffffff;
    }
    if ((param_1[1] & 0xc0) == 0x80) {
      uVar1 = param_1[1] & 0x3f | (uVar1 & 0x1f) << 6;
      if (0x7f < uVar1) {
        *param_3 = (ulong)uVar1;
        return 2;
      }
      return 0xfffffffc;
    }
  }
  else if ((uVar1 & 0xf0) == 0xe0) {
    if (param_2 < 3) {
      return 0xffffffff;
    }
    if (((param_1[1] & 0xc0) == 0x80) && ((param_1[2] & 0xc0) == 0x80)) {
      uVar1 = (uVar1 & 0xf) << 0xc | (param_1[1] & 0x3f) << 6 | param_1[2] & 0x3f;
      if (uVar1 < 0x800) {
        return 0xfffffffc;
      }
      if (((ulong)uVar1 & 0xf800) == 0xd800) {
        return 0xfffffffe;
      }
      *param_3 = (ulong)uVar1;
      return 3;
    }
  }
  else {
    if ((uVar1 & 0xf8) != 0xf0) {
      return 0xfffffffe;
    }
    if (param_2 < 4) {
      return 0xffffffff;
    }
    if ((((param_1[1] & 0xc0) == 0x80) && ((param_1[2] & 0xc0) == 0x80)) &&
       ((param_1[3] & 0xc0) == 0x80)) {
      uVar2 = (ulong)((uVar1 & 7) << 0x12 | (param_1[1] & 0x3f) << 0xc) |
              ((ulong)param_1[2] & 0x3f) << 6 | (ulong)param_1[3] & 0x3f;
      if (0xffff < uVar2) {
        *param_3 = uVar2;
        return 4;
      }
      return 0xfffffffc;
    }
  }
  return 0xfffffffd;
}


// ===== 003c265c  FUN_003c265c =====

undefined4 FUN_003c265c(byte *param_1,uint param_2,ulong param_3)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = (uint)param_3;
  bVar1 = (byte)param_3;
  if (param_1 == (byte *)0x0) {
    if (param_3 < 0x80) {
      return 1;
    }
    param_2 = 4;
  }
  else {
    if ((int)param_2 < 1) {
      return 0xffffffff;
    }
    if (param_3 < 0x80) {
      *param_1 = bVar1;
      return 1;
    }
  }
  if (param_3 < 0x800) {
    uVar3 = 2;
    if (param_2 < 2) {
      uVar3 = 0xffffffff;
    }
    if ((param_1 != (byte *)0x0) && (1 < param_2)) {
      *param_1 = (byte)(param_3 >> 6) | 0xc0;
      param_1[1] = bVar1 & 0x3f | 0x80;
      return 2;
    }
  }
  else if (param_3 >> 0x10 == 0) {
    if ((uVar2 & 0xf800) == 0xd800) {
      return 0xfffffffe;
    }
    uVar3 = 3;
    if (param_2 < 3) {
      uVar3 = 0xffffffff;
    }
    if ((param_1 != (byte *)0x0) && (2 < param_2)) {
      *param_1 = (byte)(param_3 >> 0xc) | 0xe0;
      param_1[1] = (byte)(uVar2 >> 6) & 0x3f | 0x80;
      param_1[2] = bVar1 & 0x3f | 0x80;
      return 3;
    }
  }
  else {
    if (0x10 < param_3 >> 0x10) {
      return 0xfffffffe;
    }
    uVar3 = 4;
    if (param_2 < 4) {
      uVar3 = 0xffffffff;
    }
    if ((param_1 != (byte *)0x0) && (3 < param_2)) {
      *param_1 = (byte)(param_3 >> 0x12) | 0xf0;
      uVar3 = 4;
      param_1[1] = (byte)(uVar2 >> 0xc) & 0x3f | 0x80;
      param_1[2] = (byte)(uVar2 >> 6) & 0x3f | 0x80;
      param_1[3] = bVar1 & 0x3f | 0x80;
    }
  }
  return uVar3;
}


// ===== 003c2798  FUN_003c2798 =====

void FUN_003c2798(undefined8 param_1)

{
  DAT_007a89f0 = param_1;
  return;
}


// ===== 003c27a4  FUN_003c27a4 =====

undefined8 FUN_003c27a4(void)

{
  return DAT_007a89f0;
}


// ===== 003c27b0  FUN_003c27b0 =====

char FUN_003c27b0(char *param_1)

{
  int iVar1;
  ulong uVar2;
  char cVar3;
  char *local_8;
  
  iVar1 = strncmp(param_1,"MASK:",5);
  if (iVar1 == 0) {
    cVar3 = param_1[5];
    if (cVar3 != '\0') {
      uVar2 = strtoul(param_1 + 5,&local_8,0);
      cVar3 = '\0';
      if (*local_8 == '\0') {
        DAT_007a89f0 = uVar2;
        return '\x01';
      }
    }
    return cVar3;
  }
  iVar1 = strcmp(param_1,"nombstr");
  if (iVar1 == 0) {
    DAT_007a89f0 = 0xffffffffffffd7ff;
  }
  else {
    iVar1 = strcmp(param_1,"pkix");
    if (iVar1 == 0) {
      DAT_007a89f0 = 0xfffffffffffffffb;
    }
    else {
      iVar1 = strcmp(param_1,"utf8only");
      if (iVar1 == 0) {
        DAT_007a89f0 = 0x2000;
      }
      else {
        iVar1 = strcmp(param_1,"default");
        if (iVar1 != 0) {
          return '\0';
        }
        DAT_007a89f0 = 0xffffffff;
      }
    }
  }
  return '\x01';
}


// ===== 003c289c  FUN_003c289c =====

undefined8
FUN_003c289c(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  undefined4 local_68 [10];
  undefined8 local_28;
  
  puVar1 = &local_28;
  if (param_1 != (undefined8 *)0x0) {
    puVar1 = param_1;
  }
  local_28 = 0;
  local_68[0] = param_5;
  if (DAT_007ab980 != 0) {
    FUN_0040cc10();
    iVar3 = FUN_0040c48c(DAT_007ab980,local_68);
    if (-1 < iVar3) {
      lVar4 = FUN_0040cb0c(DAT_007ab980,iVar3);
      goto joined_r0x003c2970;
    }
  }
  lVar4 = FUN_003dd608(local_68,&DAT_00206cc8,0x1c,0x28,FUN_003c2c40);
joined_r0x003c2970:
  if (lVar4 == 0) {
    iVar3 = FUN_003c1ca4(puVar1,param_2,param_3,param_4,DAT_007a89f0 & 0x2806);
  }
  else {
    uVar2 = DAT_007a89f0;
    if ((*(ulong *)(lVar4 + 0x20) & 2) != 0) {
      uVar2 = 0xffffffffffffffff;
    }
    iVar3 = FUN_003c1cb0(puVar1,param_2,param_3,param_4,uVar2 & *(ulong *)(lVar4 + 0x18),
                         *(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10));
  }
  if (iVar3 < 1) {
    return 0;
  }
  return *puVar1;
}


// ===== 003c29c8  FUN_003c29c8 =====

void FUN_003c29c8(undefined4 param_1)

{
  int iVar1;
  undefined4 local_48 [10];
  
  local_48[0] = param_1;
  if (DAT_007ab980 != 0) {
    FUN_0040cc10(DAT_007ab980);
    iVar1 = FUN_0040c48c(DAT_007ab980,local_48);
    if (-1 < iVar1) {
      FUN_0040cb0c(DAT_007ab980,iVar1);
      return;
    }
  }
  FUN_003dd608(local_48,&DAT_00206cc8,0x1c,0x28,FUN_003c2c40);
  return;
}


// ===== 003c2a4c  FUN_003c2a4c =====

undefined8 FUN_003c2a4c(undefined4 param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 local_78 [10];
  
  if ((DAT_007ab980 != 0) || (DAT_007ab980 = FUN_0040bfd0(FUN_003c2c50), DAT_007ab980 != 0)) {
    local_78[0] = param_1;
    FUN_0040cc10(DAT_007ab980);
    iVar2 = FUN_0040c48c(DAT_007ab980,local_78);
    if (iVar2 < 0) {
      puVar3 = (undefined4 *)FUN_003dd608(local_78,&DAT_00206cc8,0x1c,0x28,FUN_003c2c40);
    }
    else {
      puVar3 = (undefined4 *)FUN_0040cb0c(DAT_007ab980,iVar2);
    }
    if ((puVar3 != (undefined4 *)0x0) && ((*(byte *)(puVar3 + 8) & 1) != 0)) {
joined_r0x003c2b58:
      if (-1 < param_2) {
        *(long *)(puVar3 + 2) = param_2;
      }
      if (-1 < param_3) {
        *(long *)(puVar3 + 4) = param_3;
      }
      if (param_4 != 0) {
        *(long *)(puVar3 + 6) = param_4;
      }
      if (param_5 != 0) {
        *(ulong *)(puVar3 + 8) = param_5 | 1;
      }
      return 1;
    }
    puVar4 = (undefined4 *)FUN_003c8474(0x28,"crypto/asn1/a_strnid.c",0xa6);
    if (puVar4 != (undefined4 *)0x0) {
      iVar2 = FUN_0040c89c(DAT_007ab980,puVar4);
      if (iVar2 != 0) {
        if (puVar3 == (undefined4 *)0x0) {
          *puVar4 = param_1;
          *(undefined8 *)(puVar4 + 2) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 4) = 0xffffffffffffffff;
          uVar5 = 1;
        }
        else {
          uVar6 = *(undefined8 *)(puVar3 + 2);
          uVar1 = *puVar3;
          *(undefined8 *)(puVar4 + 4) = *(undefined8 *)(puVar3 + 4);
          *(undefined8 *)(puVar4 + 2) = uVar6;
          uVar6 = *(undefined8 *)(puVar3 + 6);
          uVar5 = *(ulong *)(puVar3 + 8);
          *puVar4 = uVar1;
          uVar5 = uVar5 | 1;
          *(undefined8 *)(puVar4 + 6) = uVar6;
        }
        *(ulong *)(puVar4 + 8) = uVar5;
        puVar3 = puVar4;
        goto joined_r0x003c2b58;
      }
      FUN_003c86b4(puVar4,"crypto/asn1/a_strnid.c",0xa9);
    }
  }
  FUN_00379868();
  FUN_0037995c("crypto/asn1/a_strnid.c",0xc3,"ASN1_STRING_TABLE_add");
  FUN_00379a5c(0xd,0x8000d,0);
  return 0;
}


// ===== 003c2c04  FUN_003c2c04 =====

void FUN_003c2c04(void)

{
  long lVar1;
  
  lVar1 = DAT_007ab980;
  if (DAT_007ab980 != 0) {
    DAT_007ab980 = 0;
    FUN_0040ca6c(lVar1,FUN_003c2c24);
    return;
  }
  return;
}


// ===== 003c2c24  FUN_003c2c24 =====

void FUN_003c2c24(long param_1)

{
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    return;
  }
  FUN_003c86b4(param_1,"crypto/asn1/a_strnid.c",0xdf);
  return;
}


// ===== 003c2c40  FUN_003c2c40 =====

int FUN_003c2c40(int *param_1,int *param_2)

{
  return *param_1 - *param_2;
}


// ===== 003c2c50  FUN_003c2c50 =====

int FUN_003c2c50(undefined8 *param_1,undefined8 *param_2)

{
  return *(int *)*param_1 - *(int *)*param_2;
}


// ===== 003c2c68  FUN_003c2c68 =====

void FUN_003c2c68(void)

{
  FUN_003bb08c("alg_section",FUN_003c2c80,0);
  return;
}


// ===== 003c2c80  FUN_003c2c80 =====

undefined8 FUN_003c2c80(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  char *__s1;
  int local_34;
  
  uVar3 = FUN_003bb260();
  lVar4 = FUN_003bb7d0(param_2,uVar3);
  if (lVar4 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/evp/evp_cnf.c",0x21,"alg_module_init");
    uVar3 = 0xa5;
LAB_003c2e2c:
    FUN_00379a5c(6,uVar3,0);
    return 0;
  }
  iVar1 = FUN_0040caf8();
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      lVar5 = FUN_0040cb0c(lVar4,iVar1);
      __s1 = *(char **)(lVar5 + 8);
      iVar2 = strcmp(__s1,"fips_mode");
      if (iVar2 == 0) {
        iVar2 = FUN_00423270(lVar5,&local_34);
        if (iVar2 == 0) {
          return 0;
        }
        uVar3 = FUN_003bbf70(param_2);
        iVar2 = FUN_00383184(uVar3,0 < local_34,0);
        if (iVar2 == 0) {
          FUN_00379868();
          uVar3 = 0x33;
LAB_003c2e20:
          FUN_0037995c("crypto/evp/evp_cnf.c",uVar3,"alg_module_init");
          uVar3 = 0xd1;
          goto LAB_003c2e2c;
        }
      }
      else {
        iVar2 = strcmp(__s1,"default_properties");
        if (iVar2 != 0) {
          FUN_00379868();
          FUN_0037995c("crypto/evp/evp_cnf.c",0x3d,"alg_module_init");
          FUN_00379a5c(6,0xa9,"name=%s, value=%s",*(undefined8 *)(lVar5 + 8),
                       *(undefined8 *)(lVar5 + 0x10));
          return 0;
        }
        uVar3 = FUN_003bbf70(param_2);
        iVar2 = FUN_00382e18(uVar3,*(undefined8 *)(lVar5 + 0x10),0,0);
        if (iVar2 == 0) {
          FUN_00379868();
          uVar3 = 0x39;
          goto LAB_003c2e20;
        }
      }
      iVar1 = iVar1 + 1;
      iVar2 = FUN_0040caf8(lVar4);
    } while (iVar1 < iVar2);
  }
  return 1;
}


// ===== 003c2e50  FUN_003c2e50 =====

undefined8 FUN_003c2e50(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(DAT_007ab988 + param_1 * 0x18);
  *param_2 = *puVar2;
  uVar1 = puVar2[1];
  *param_3 = puVar2[2];
  return uVar1;
}


// ===== 003c2e78  FUN_003c2e78 =====

char * FUN_003c2e78(char *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar1 = DAT_007ab990;
  if (param_1 != (char *)0x0) {
    if (DAT_007ab990 != 0) {
      lVar4 = 0;
      puVar3 = DAT_007ab988;
      do {
        iVar2 = strcmp((char *)*puVar3,param_1);
        if (iVar2 == 0) {
          *param_2 = lVar4;
          return (char *)0x1;
        }
        lVar4 = lVar4 + 1;
        puVar3 = puVar3 + 3;
      } while (lVar1 != lVar4);
    }
    param_1 = (char *)0x0;
  }
  return param_1;
}


// ===== 003c2ef4  FUN_003c2ef4 =====

void FUN_003c2ef4(long param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + param_2 * 0x10);
  *param_3 = *puVar1;
  *param_4 = puVar1[1];
  return;
}


// ===== 003c2f0c  FUN_003c2f0c =====

void FUN_003c2f0c(void)

{
  FUN_003bb08c("ssl_conf",FUN_003c2f28,FUN_003c319c);
  return;
}


// ===== 003c2f28  FUN_003c2f28 =====

undefined8 FUN_003c2f28(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  long lVar10;
  undefined4 uVar11;
  ulong uVar12;
  ulong uVar13;
  char *__s;
  long *plVar14;
  
  uVar4 = FUN_003bb260();
  lVar5 = FUN_003bb7d0(param_2,uVar4);
  iVar2 = FUN_0040caf8();
  if (iVar2 < 1) {
    uVar11 = 0x77;
    if (lVar5 == 0) {
      uVar11 = 0x78;
    }
    FUN_00379868();
    FUN_0037995c("crypto/conf/conf_ssl.c",0x4c,"ssl_module_init");
    FUN_00379a5c(0xe,uVar11,"section=%s",uVar4);
  }
  else {
    iVar2 = FUN_0040caf8(lVar5);
    uVar12 = (ulong)iVar2;
    FUN_003c319c();
    DAT_007ab988 = FUN_003c8474((uVar12 + (long)iVar2 * 2) * 8,"crypto/conf/conf_ssl.c",0x51);
    if (DAT_007ab988 != 0) {
      if (iVar2 == 0) {
        DAT_007ab990 = uVar12;
        return 1;
      }
      uVar13 = 0;
      DAT_007ab990 = uVar12;
      while( true ) {
        lVar8 = DAT_007ab988;
        lVar6 = FUN_0040cb0c(lVar5,uVar13 & 0xffffffff);
        lVar7 = FUN_003bb7d0(param_2,*(undefined8 *)(lVar6 + 0x10));
        iVar2 = FUN_0040caf8();
        if (iVar2 < 1) break;
        plVar14 = (long *)(lVar8 + uVar13 * 0x18);
        lVar8 = FUN_003ca2f4(*(undefined8 *)(lVar6 + 8),"crypto/conf/conf_ssl.c",100);
        *plVar14 = lVar8;
        if (lVar8 == 0) goto LAB_003c3128;
        uVar3 = FUN_0040caf8(lVar7);
        lVar8 = FUN_003c8474(-(ulong)(uVar3 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar3 << 4,
                             "crypto/conf/conf_ssl.c",0x68);
        plVar14[1] = lVar8;
        if (lVar8 == 0) goto LAB_003c3128;
        plVar14[2] = (long)(int)uVar3;
        if (uVar3 != 0) {
          lVar8 = 0;
          uVar12 = 0;
          do {
            lVar6 = FUN_0040cb0c(lVar7,uVar12 & 0xffffffff);
            __s = *(char **)(lVar6 + 8);
            plVar1 = (long *)(plVar14[1] + lVar8);
            pcVar9 = strchr(__s,0x2e);
            if (pcVar9 != (char *)0x0) {
              __s = pcVar9 + 1;
            }
            lVar10 = FUN_003ca2f4(__s,"crypto/conf/conf_ssl.c",0x77);
            uVar4 = *(undefined8 *)(lVar6 + 0x10);
            *plVar1 = lVar10;
            lVar6 = FUN_003ca2f4(uVar4,"crypto/conf/conf_ssl.c",0x78);
            plVar1[1] = lVar6;
            if ((*plVar1 == 0) || (lVar6 == 0)) goto LAB_003c3128;
            uVar12 = uVar12 + 1;
            lVar8 = lVar8 + 0x10;
          } while ((long)(int)uVar3 != uVar12);
        }
        uVar13 = uVar13 + 1;
        if (DAT_007ab990 <= uVar13) {
          return 1;
        }
      }
      uVar11 = 0x75;
      if (lVar7 == 0) {
        uVar11 = 0x76;
      }
      FUN_00379868();
      FUN_0037995c("crypto/conf/conf_ssl.c",0x60,"ssl_module_init");
      FUN_00379a5c(0xe,uVar11,"name=%s, value=%s",*(undefined8 *)(lVar6 + 8),
                   *(undefined8 *)(lVar6 + 0x10));
    }
  }
LAB_003c3128:
  FUN_003c319c();
  return 0;
}


// ===== 003c319c  FUN_003c319c =====

void FUN_003c319c(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  
  if (DAT_007ab988 != 0) {
    if (DAT_007ab990 != 0) {
      uVar1 = 0;
      do {
        puVar2 = (undefined8 *)(DAT_007ab988 + uVar1 * 0x18);
        FUN_003c86b4(*puVar2,"crypto/conf/conf_ssl.c",0x31);
        if (puVar2[2] != 0) {
          lVar3 = 0;
          uVar4 = 0;
          do {
            FUN_003c86b4(*(undefined8 *)(puVar2[1] + lVar3),"crypto/conf/conf_ssl.c",0x33);
            FUN_003c86b4(*(undefined8 *)(puVar2[1] + lVar3 + 8),"crypto/conf/conf_ssl.c",0x34);
            uVar4 = uVar4 + 1;
            lVar3 = lVar3 + 0x10;
          } while (uVar4 < (ulong)puVar2[2]);
        }
        FUN_003c86b4(puVar2[1],"crypto/conf/conf_ssl.c",0x36);
        uVar1 = uVar1 + 1;
      } while (uVar1 < DAT_007ab990);
    }
    FUN_003c86b4(DAT_007ab988,"crypto/conf/conf_ssl.c",0x38);
    DAT_007ab988 = 0;
    DAT_007ab990 = 0;
  }
  return;
}


// ===== 003c32a8  FUN_003c32a8 =====

void FUN_003c32a8(undefined8 param_1,uint param_2,long param_3,undefined8 param_4,undefined8 param_5
                 ,undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 local_70;
  ulong local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_68 = (ulong)param_2;
  local_38 = param_9;
  local_70 = param_1;
  local_60 = param_4;
  uStack_58 = param_5;
  local_50 = param_6;
  local_48 = param_7;
  uStack_40 = param_8;
  if (param_3 == 0) {
    FUN_003d3c04(param_1,FUN_003c3368,&local_70);
    return;
  }
  uVar1 = FUN_003d40a4(param_3);
  lVar2 = FUN_003b933c(param_1);
  lVar3 = FUN_003b933c(uVar1);
  if (lVar2 != lVar3) {
    return;
  }
  local_70 = uVar1;
  FUN_003c3368(param_3,&local_70);
  return;
}


// ===== 003c3368  FUN_003c3368 =====

undefined4 FUN_003c3368(undefined8 param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long *plVar10;
  undefined4 local_68;
  int local_64;
  
  uVar2 = *(uint *)(param_2 + 8);
  uVar8 = 1;
  uVar7 = uVar2;
  if (uVar2 < 2) {
    uVar7 = 1;
  }
  uVar1 = 0x16;
  if (uVar2 != 0) {
    uVar1 = uVar2;
  }
  uVar9 = uVar8;
  if ((int)uVar7 <= (int)uVar1) {
    do {
      local_68 = 0;
      plVar5 = (long *)FUN_003d4148(param_1,uVar7,&local_68);
      uVar9 = local_68;
      local_64 = 0;
      iVar4 = (**(code **)(param_2 + 0x18))(local_68,*(undefined8 *)(param_2 + 0x38));
      if (iVar4 == 0) {
        FUN_003d4188(param_1,uVar7,plVar5);
        return 0;
      }
      if (*(code **)(param_2 + 0x10) == (code *)0x0) {
        local_64 = 1;
joined_r0x003c3428:
        if (plVar5 != (long *)0x0) {
          lVar6 = *plVar5;
          plVar10 = plVar5;
          while (lVar6 != 0) {
            (**(code **)(param_2 + 0x20))(param_1,plVar10,uVar9,*(undefined8 *)(param_2 + 0x38));
            plVar10 = plVar10 + 4;
            lVar6 = *plVar10;
          }
        }
        if (*(code **)(param_2 + 0x30) == (code *)0x0) {
LAB_003c3484:
          local_64 = 1;
        }
        else {
          iVar4 = (**(code **)(param_2 + 0x30))
                            (param_1,uVar7,uVar9,*(undefined8 *)(param_2 + 0x38),&local_64);
          if (iVar4 == 0) goto LAB_003c347c;
        }
      }
      else {
        iVar4 = (**(code **)(param_2 + 0x10))
                          (param_1,uVar7,uVar9,*(undefined8 *)(param_2 + 0x38),&local_64);
        if (iVar4 != 0) {
          if (local_64 != 0) goto joined_r0x003c3428;
          goto LAB_003c3484;
        }
LAB_003c347c:
        local_64 = -1;
      }
      (**(code **)(param_2 + 0x28))(*(undefined8 *)(param_2 + 0x38));
      iVar4 = local_64;
      FUN_003d4188(param_1,uVar7,plVar5);
      if (iVar4 < 0) {
        return 0;
      }
      uVar9 = 0;
      if (iVar4 != 0) {
        uVar9 = uVar8;
      }
      bVar3 = uVar7 != uVar1;
      uVar7 = uVar7 + 1;
      uVar8 = uVar9;
    } while (bVar3);
  }
  return uVar9;
}


// ===== 003c34fc  FUN_003c34fc =====

undefined8 FUN_003c34fc(undefined8 *param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  size_t sVar3;
  char *__s;
  
  __s = (char *)*param_1;
  if (__s != (char *)0x0) {
    pcVar1 = strchr(__s,0x3a);
    if (pcVar1 == (char *)0x0) {
      sVar3 = strlen(__s);
    }
    else {
      sVar3 = (long)pcVar1 - (long)__s;
    }
    uVar2 = FUN_003ca354(__s,sVar3,"crypto/core_algorithm.c",0xc3);
    return uVar2;
  }
  return 0;
}


// ===== 003c3560  FUN_003c3560 =====

void FUN_003c3560(undefined8 param_1,undefined8 param_2,long *param_3,undefined4 param_4,
                 long param_5,undefined8 param_6)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_58 [8];
  long local_50;
  undefined4 local_44;
  long local_40;
  undefined8 uStack_38;
  
  plVar2 = param_3;
  if (param_3 != (long *)0x0) {
    plVar2 = (long *)*param_3;
  }
  local_50 = 0;
  local_44 = param_4;
  local_40 = param_5;
  uStack_38 = param_6;
  FUN_003c32a8(param_1,param_2,plVar2,FUN_003c3620,FUN_003c36cc,FUN_003c372c,FUN_003c37ac,
               FUN_003c37c0,auStack_58);
  if ((local_50 != 0) &&
     (lVar1 = (**(code **)(param_5 + 0x18))(local_50,param_3,param_6), lVar1 != 0)) {
    return;
  }
  (**(code **)(param_5 + 0x18))(0,param_3,param_6);
  return;
}


// ===== 003c3620  FUN_003c3620 =====

undefined8 FUN_003c3620(undefined8 param_1,int param_2,int param_3,long param_4,uint *param_5)

{
  undefined8 uVar1;
  
  if (param_5 == (uint *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/core_fetch.c",0x40,"ossl_method_construct_precondition");
    FUN_00379a5c(0xf,0xc0102,0);
    uVar1 = 0;
  }
  else {
    *param_5 = 0;
    if ((param_3 != 0) && (*(int *)(param_4 + 0x14) == 0)) {
      *param_5 = 1;
      return 1;
    }
    uVar1 = FUN_003d4268(param_1,(long)param_2,param_5);
    if ((int)uVar1 != 0) {
      *param_5 = (uint)(*param_5 == 0);
      return 1;
    }
  }
  return uVar1;
}


// ===== 003c36cc  FUN_003c36cc =====

void FUN_003c36cc(int param_1,long param_2)

{
  long lVar1;
  
  if (((param_1 != 0) && (*(int *)(param_2 + 0x14) == 0)) && (*(long *)(param_2 + 8) == 0)) {
    lVar1 = (*(code *)**(undefined8 **)(param_2 + 0x18))(*(undefined8 *)(param_2 + 0x20));
    *(long *)(param_2 + 8) = lVar1;
    if (lVar1 == 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x003c371c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_2 + 0x18) + 8))
            (*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x20));
  return;
}


// ===== 003c372c  FUN_003c372c =====

void FUN_003c372c(undefined8 param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  lVar1 = (**(code **)(*(long *)(param_4 + 0x18) + 0x28))
                    (param_2,param_1,*(undefined8 *)(param_4 + 0x20));
  if (lVar1 != 0) {
    (**(code **)(*(long *)(param_4 + 0x18) + 0x20))
              (*(undefined8 *)(param_4 + 8),lVar1,param_1,*param_2,param_2[1],
               *(undefined8 *)(param_4 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x003c3798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_4 + 0x18) + 0x30))(lVar1,*(undefined8 *)(param_4 + 0x20));
    return;
  }
  return;
}


// ===== 003c37ac  FUN_003c37ac =====

void FUN_003c37ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x003c37bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x10))
            (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x20));
  return;
}


// ===== 003c37c0  FUN_003c37c0 =====

bool FUN_003c37c0(undefined8 param_1,int param_2,int param_3,long param_4,undefined4 *param_5)

{
  int iVar1;
  
  if (param_5 == (undefined4 *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/core_fetch.c",0x5b,"ossl_method_construct_postcondition");
    FUN_00379a5c(0xf,0xc0102,0);
    return false;
  }
  *param_5 = 1;
  if ((param_3 != 0) && (*(int *)(param_4 + 0x14) == 0)) {
    return true;
  }
  iVar1 = FUN_003d419c(param_1,(long)param_2);
  return iVar1 != 0;
}


// ===== 003c3840  FUN_003c3840 =====

void FUN_003c3840(void)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)FUN_003c3864();
  if (pbVar1 != (byte *)0x0) {
    *pbVar1 = *pbVar1 | 1;
  }
  return;
}


// ===== 003c3864  FUN_003c3864 =====

byte * FUN_003c3864(void)

{
  byte *pbVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  pbVar1 = (byte *)FUN_003c8474(0x20,"crypto/core_namemap.c",0x203);
  if (pbVar1 == (byte *)0x0) {
    return (byte *)0x0;
  }
  lVar2 = FUN_003d5150();
  *(long *)(pbVar1 + 8) = lVar2;
  if (lVar2 != 0) {
    lVar3 = FUN_003b8a34(FUN_003c431c,FUN_003c4324);
    *(long *)(pbVar1 + 0x10) = lVar3;
    if (lVar3 != 0) {
      return pbVar1;
    }
  }
  if ((*pbVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(pbVar1 + 0x10);
    FUN_003b9160(uVar4,FUN_003c4330);
    FUN_003b8b74(uVar4);
    FUN_003d51ac(lVar2);
    FUN_003c86b4(pbVar1,"crypto/core_namemap.c",0x216);
  }
  return (byte *)0x0;
}


// ===== 003c3928  FUN_003c3928 =====

void FUN_003c3928(byte *param_1)

{
  if (param_1 != (byte *)0x0) {
    *param_1 = *param_1 & 0xfe;
    FUN_003b9160(*(undefined8 *)(param_1 + 0x10),FUN_003c4330);
    FUN_003b8b74(*(undefined8 *)(param_1 + 0x10));
    FUN_003d51ac(*(undefined8 *)(param_1 + 8));
    FUN_003c86b4(param_1,"crypto/core_namemap.c",0x216);
    return;
  }
  return;
}


// ===== 003c398c  FUN_003c398c =====

void FUN_003c398c(byte *param_1)

{
  if ((param_1 != (byte *)0x0) && ((*param_1 & 1) == 0)) {
    FUN_003b9160(*(undefined8 *)(param_1 + 0x10),FUN_003c4330);
    FUN_003b8b74(*(undefined8 *)(param_1 + 0x10));
    FUN_003d51ac(*(undefined8 *)(param_1 + 8));
    FUN_003c86b4(param_1,"crypto/core_namemap.c",0x216);
    return;
  }
  return;
}


// ===== 003c39ec  FUN_003c39ec =====

bool FUN_003c39ec(long param_1)

{
  if (param_1 != 0) {
    return *(int *)(param_1 + 0x18) == 0;
  }
  return true;
}


// ===== 003c3a08  FUN_003c3a08 =====

long FUN_003c3a08(long param_1,undefined4 param_2,code *param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 local_48 [2];
  long local_40;
  int local_38;
  
  local_38 = 0;
  lVar1 = param_1;
  if ((param_1 == 0) ||
     (local_48[0] = param_2, lVar1 = FUN_003d517c(*(undefined8 *)(param_1 + 8)), (int)lVar1 == 0)) {
    return lVar1;
  }
  lVar1 = FUN_003b92a0(*(undefined8 *)(param_1 + 0x10));
  if ((lVar1 != 0) &&
     (local_40 = FUN_003c83a4(lVar1 << 3,"crypto/core_namemap.c",0x9c), local_40 != 0)) {
    FUN_003b91c8(*(undefined8 *)(param_1 + 0x10),FUN_003c3b00,local_48);
    FUN_003d519c(*(undefined8 *)(param_1 + 8));
    if (0 < local_38) {
      lVar1 = 0;
      do {
        (*param_3)(*(undefined8 *)(local_40 + lVar1 * 8),param_4);
        lVar1 = lVar1 + 1;
      } while (lVar1 < local_38);
    }
    FUN_003c86b4(local_40,"crypto/core_namemap.c",0xa8);
    return 1;
  }
  FUN_003d519c(*(undefined8 *)(param_1 + 8));
  return 0;
}


// ===== 003c3b00  FUN_003c3b00 =====

void FUN_003c3b00(undefined8 *param_1,int *param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 1) == *param_2) {
    iVar1 = param_2[4];
    *(undefined8 *)(*(long *)(param_2 + 2) + (long)iVar1 * 8) = *param_1;
    param_2[4] = iVar1 + 1;
  }
  return;
}


// ===== 003c3b2c  FUN_003c3b2c =====

undefined4 FUN_003c3b2c(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 local_30;
  undefined4 local_28;
  
  if (((param_1 != 0) || (param_1 = FUN_003c3bb8(), param_1 != 0)) &&
     (iVar1 = FUN_003d517c(*(undefined8 *)(param_1 + 8)), iVar1 != 0)) {
    local_28 = 0;
    local_30 = param_2;
    lVar2 = FUN_003b908c(*(undefined8 *)(param_1 + 0x10),&local_30);
    if (lVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(lVar2 + 8);
    }
    FUN_003d519c(*(undefined8 *)(param_1 + 8));
    return uVar3;
  }
  return 0;
}


// ===== 003c3bb8  FUN_003c3bb8 =====

long FUN_003c3bb8(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined8 local_48;
  uint local_3c;
  undefined8 local_38;
  
  lVar2 = FUN_003b9c48(param_1,4);
  if ((lVar2 != 0) && (*(int *)(lVar2 + 0x18) == 0)) {
    FUN_003c575c(0xc,0);
    FUN_003dc850(2,FUN_003c4274,lVar2);
    FUN_003dc850(1,FUN_003c42c8,lVar2);
    iVar1 = FUN_003a9c08();
    if (0 < iVar1) {
      iVar6 = 0;
      do {
        uVar4 = FUN_003a9c34(iVar6);
        local_38 = 0;
        local_3c = 0;
        local_48 = 0;
        FUN_003aa198((long)&local_38 + 4,&local_38,&local_3c,0,&local_48,uVar4);
        if (local_38._4_4_ != 0) {
          if ((local_3c & 1) == 0) {
            if (local_38._4_4_ == 0x398) {
              FUN_003c4378(0,0x398,&DAT_001b9e73,lVar2);
            }
LAB_003c3c50:
            uVar3 = 0;
            iVar5 = local_38._4_4_;
          }
          else {
            if (local_38._4_4_ == 0x494) goto LAB_003c3c50;
            uVar3 = local_38 & 0xffffffff;
            iVar5 = local_38._4_4_;
          }
          FUN_003c4378(uVar3,iVar5,local_48,lVar2);
        }
        iVar6 = iVar6 + 1;
      } while (iVar1 != iVar6);
    }
  }
  return lVar2;
}


// ===== 003c3ce0  FUN_003c3ce0 =====

undefined4 FUN_003c3ce0(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  long local_40;
  undefined4 local_38;
  
  if ((param_2 != 0) &&
     (lVar2 = FUN_003ca354(param_2,param_3,"crypto/core_namemap.c",0xd3), lVar2 != 0)) {
    if (((param_1 == 0) && (param_1 = FUN_003c3bb8(0), param_1 == 0)) ||
       (iVar1 = FUN_003d517c(*(undefined8 *)(param_1 + 8)), iVar1 == 0)) {
      uVar4 = 0;
    }
    else {
      local_38 = 0;
      local_40 = lVar2;
      lVar3 = FUN_003b908c(*(undefined8 *)(param_1 + 0x10),&local_40);
      if (lVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(lVar3 + 8);
      }
      FUN_003d519c(*(undefined8 *)(param_1 + 8));
    }
    FUN_003c86b4(lVar2,"crypto/core_namemap.c",0xd7);
    return uVar4;
  }
  return 0;
}


// ===== 003c3dbc  FUN_003c3dbc =====

undefined8 FUN_003c3dbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  local_20 = param_3;
  iVar2 = FUN_003c3a08(param_1,param_2,FUN_003c3df4,&local_20);
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar1 = local_18;
  }
  return uVar1;
}


// ===== 003c3df4  FUN_003c3df4 =====

void FUN_003c3df4(long param_1,long *param_2)

{
  if (*param_2 != 0) {
    *param_2 = *param_2 + -1;
    return;
  }
  if (param_2[1] != 0) {
    return;
  }
  param_2[1] = param_1;
  return;
}


